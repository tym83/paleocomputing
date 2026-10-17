#include "paleo.h"
#include <float.h>
#include <math.h>
#include <string.h>
typedef struct R7 R7;
typedef struct R8 R8;
typedef struct R9 R9;
typedef struct R10 R10;
typedef struct R11 R11;
typedef struct R12 R12;
typedef struct R13 R13;
typedef struct R14 R14;
typedef struct R15 R15;
typedef struct R16 R16;
typedef struct R17 R17;
typedef struct R18 R18;
typedef struct R19 R19;
typedef struct R20 R20;
typedef struct R21 R21;
typedef struct R22 R22;
typedef struct A23 A23;
typedef struct A24 A24;
typedef struct A25 A25;
typedef struct A26 A26;
typedef struct R27 R27;
typedef struct R28 R28;
struct R7 { int dummy_; rt_int f_AT; rt_int f_LEN; rt_int f_H; };
struct R8 { int dummy_; R9 * f_HEAD; R9 * f_TAIL; };
struct R10 { int dummy_; rt_int f_KIND; rt_int f_LINE; rt_int f_IV; R7 f_TX; };
struct R12 { int dummy_; rt_int f_OK; rt_int f_V; };
struct R18 { int dummy_; R7 f_C; R14 * f_T; rt_int f_LVAL; R7 f_SELF; };
struct A23 { rt_int lo[1], hi[1]; rt_int *p; };
struct A24 { rt_int lo[1], hi[1]; R10 *p; };
struct A25 { rt_int lo[1], hi[1]; R13 * *p; };
struct A26 { rt_int lo[1], hi[1]; R8 *p; };
struct R22 { int dummy_; rstr f_ARENA; rt_int f_TOP; A23 f_SRC; rt_int f_NSRC; A24 f_TOKS; rt_int f_NTOKS; rt_int f_POS; A25 f_TABLE; R13 * f_SCOPE; rt_int f_DEPTH; A26 f_OUT; R8 f_CODE; R21 * f_CTXS; R27 * f_CS; R28 * f_IS; rt_int f_NSCOPES; R13 * f_MODL; R16 * f_BINDS; rt_int f_ROUNDED; rt_int f_MACHINE; rt_int f_SERIAL; R11 * f_EXCS; R14 * f_TY_INT; R14 * f_TY_BOOL; R14 * f_TY_STR; R14 * f_TY_VOID; R14 * f_TY_NIL; R14 * f_TY_ASCII; R14 * f_TY_FLOAT; R14 * f_TY_BITS; R14 * f_TY_ROUNDINGS; R14 * f_TY_TYPE; R13 * f_PENDING; R11 * f_CNAMES; R13 * f_ENUMS; R13 * f_ARRAYS; R13 * f_RECS; };
struct R11 { int dummy_; rt_int f_KIND; rt_int f_LINE; rt_int f_IV; R7 f_NAME; R11 * f_A; R11 * f_B; R11 * f_C; R11 * f_D; R11 * f_E; R11 * f_NEXT; rt_int f_FL; };
struct R9 { int dummy_; R7 f_T; R9 * f_NEXT; };
struct R13 { int dummy_; rt_int f_KIND; rt_int f_DEPTH; rt_int f_LEVEL; R7 f_NAME; R14 * f_T; R7 f_ACCESS; R7 f_FIELD; rt_int f_INPUT; rt_int f_BYREF; rt_int f_HASMV; rt_int f_MV; R11 * f_TS; rt_int f_BUSY; R7 f_FWD; R20 * f_PARAMS; R14 * f_RESULT; R11 * f_DECL; R7 f_PREFIX; R13 * f_MODL; rt_int f_EXPORTED; rt_int f_GENERIC; rt_int f_FRAMED; R11 * f_USES; R13 * f_INSTANCES; R16 * f_BINDINGS; R13 * f_ORIG; R13 * f_MEMBERS; R13 * f_SAVED; rt_int f_OWNER; R13 * f_CHAIN; R13 * f_SNEXT; };
struct R27 { int dummy_; rt_int f_LEVEL; R13 * f_R; rt_int f_FRAMED; R7 f_FTYPE; R8 f_FIELDS; R27 * f_UP; R11 * f_IMPORTS; R11 * f_SIGNALS; R14 * f_RESULT; rt_int f_IS_PATH; };
struct R28 { int dummy_; rt_int f_ID; R11 * f_IMPORTS; R11 * f_SIGNALS; R7 f_NAME; R28 * f_UP; };
struct R14 { int dummy_; rt_int f_KIND; rt_int f_SCALE; R7 f_LO_C; R7 f_HI_C; R12 f_MLO; R12 f_MHI; rt_int f_RLEVEL; R7 f_LEN_C; R12 f_MLEN; R7 f_GEN; R14 * f_BASE; R14 * f_ELEM; R14 * f_TARGET; R11 * f_TARGET_TS; R15 * f_FIELDS; R11 * f_LITS; rt_int f_NLITS; rt_int f_UNORDERED; R17 * f_BOUNDS; rt_int f_DIMS; R17 * f_ARGS; R7 f_NAME; R7 f_CNAME; R13 * f_MODL; R11 * f_REPS; R13 * f_DECL; };
struct R16 { int dummy_; R7 f_NAME; R14 * f_T; R7 f_C; rt_int f_HASMV; rt_int f_MV; R13 * f_R; R16 * f_NEXT; };
struct R17 { int dummy_; R7 f_LO; R7 f_HI; R12 f_MLO; R12 f_MHI; rt_int f_ANYARG; R17 * f_NEXT; };
struct R15 { int dummy_; R7 f_NAME; R7 f_CNAME; R14 * f_T; rt_int f_KIND; R7 f_TAGF; R11 * f_LABELS; R15 * f_NEXT; };
struct R19 { int dummy_; R11 * f_E; R18 f_V; rt_int f_HAVE; rt_int f_MODE; R19 * f_NEXT; };
struct R20 { int dummy_; R7 f_NAME; rt_int f_MODE; R14 * f_T; R11 * f_TS; R20 * f_NEXT; };
struct R21 { int dummy_; rt_int f_KIND; R7 f_NAME; R11 * f_HANDLERS; R21 * f_NEXT; };
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
static R22 * g_W;
static rstr r_CHAR_OF(rt_int p_C);
static rt_int r_CODE_OF(rstr p_S);
static rt_int r_HASH_CODES(rt_int p_L, rt_int p_C1, rt_int p_C2, rt_int p_C3);
static rt_int r_HASH_OF(rstr p_S);
static void S_R7(R7 *d, R7 s, int any);
static int E_R7(R7 a, R7 b);
static R7 r_MK(rstr p_S);
static R7 r_MKN(rstr p_S);
static rstr r_STR(R7 p_T, rt_int p_L);
static rt_int r_TEQ(R7 p_A, R7 p_B);
static rt_int r_TEQS(R7 p_A, rstr p_S);
static R7 r_CAT(R7 p_A, R7 p_B);
static R7 r_CATS(R7 p_A, rstr p_S);
static R7 r_FMT4(rstr p_P, R7 p_A, R7 p_B, R7 p_C, R7 p_D);
static R7 r_FMT1(rstr p_P, R7 p_A);
static R7 r_FMT2(rstr p_P, R7 p_A, R7 p_B);
static R7 r_FMT3(rstr p_P, R7 p_A, R7 p_B, R7 p_C);
static R7 r_NUM(rt_int p_V);
static R7 r_NEW_NAME(rstr p_BASE);
static void S_R8(R8 *d, R8 s, int any);
static int E_R8(R8 a, R8 b);
static void r_APPEND(R7 p_T, R8 *p_B);
static void r_EMIT(rt_int p_SEC, R7 p_T);
static void r_EMITS(rt_int p_SEC, rstr p_S);
static void r_CODE(R7 p_T);
static void r_CODES(rstr p_S);
static void r_PUT_BUF(R8 p_B);
static void r_WRITE_OUTPUT(void);
static void r_FAIL(rt_int p_LINE, rstr p_MSG);
static void r_FAILT(rt_int p_LINE, rstr p_MSG, R7 p_T);
static void r_READ_SOURCE(void);
static rt_int r_AT_SRC(rt_int p_I);
static rt_int r_IS_LETTER(rt_int p_C);
static rt_int r_IS_DIGIT(rt_int p_C);
static rt_int r_IS_IDCHAR(rt_int p_C);
static R7 r_SOURCE_TEXT(rt_int p_FIRST, rt_int p_BEYOND);
static rt_int r_IS_RESERVED(R7 p_T);
static void r_ADD_TOKEN(rt_int p_KIND, rt_int p_LINE, rt_int p_IV, R7 p_TX);
static rt_int r_SYMBOL_LENGTH(rt_int p_I);
static void r_LEX(void);
static void S_R10(R10 *d, R10 s, int any);
static int E_R10(R10 a, R10 b);
static R10 r_CUR(void);
static R10 r_AHEAD(rt_int p_K);
static rt_int r_LINE_NOW(void);
static rt_int r_TOK_IS(R10 p_T, rstr p_S);
static rt_int r_IS(rstr p_S);
static rt_int r_IS_TARGET_DECL(void);
static rt_int r_IS_KIND(rt_int p_K);
static void r_SKIP(void);
static rt_int r_ACCEPT(rstr p_S);
static void r_EXPECT(rstr p_S);
static R7 r_IDENT(void);
static void r_EXPECT_NAME(R7 p_NAME);
static R11 * r_NEW_NODE(rt_int p_KIND, rt_int p_LINE);
static void r_ADD_LIST(R11 * p_N, R11 * *p_HEAD, R11 * *p_TAIL);
static rt_int r_LIST_LENGTH(R11 * p_N);
static R11 * r_IDENT_NODE(void);
static R11 * r_IDENT_LIST(void);
static R11 * r_ROUTINE_NAME_NODE(void);
static R11 * r_PAREN_IDENTS(void);
static void r_SKIP_PARENS(void);
static R11 * r_PARSE_COMPILATION(void);
static R11 * r_PARSE_ITEMS(void);
static R11 * r_PARSE_SEGMENT(void);
static R11 * r_PARSE_CLOSED_BODY(void);
static R11 * r_PARSE_BODY(void);
static R11 * r_PARSE_MODULE(void);
static R11 * r_PARSE_DECLARATIONS(void);
static R11 * r_PARSE_OBJECT_DECL(void);
static R11 * r_PARSE_FORMALS(void);
static R11 * r_PARSE_TYPE_DECL(void);
static R11 * r_PARSE_REPTYPE_DECL(void);
static R11 * r_PARSE_REP(void);
static R7 r_GEN_NAME(void);
static R11 * r_PARSE_TYPE_ARG(void);
static R11 * r_EXPR_TO_TS(R11 * p_E);
static R11 * r_TYPE_SPEC_TAIL(R11 * p_N);
static R11 * r_PARSE_TYPE_SPEC(void);
static R11 * r_PARSE_LITERALS(void);
static R11 * r_PARSE_FIELDS(void);
static R11 * r_PARSE_RANGE(void);
static rt_int r_RANGE_AHEAD(void);
static R11 * r_PARSE_PARAMS(void);
static R11 * r_PARSE_TEMPLATE(rt_int p_FUNC);
static R11 * r_PARSE_ROUTINE_SPEC(void);
static R11 * r_PARSE_WHERE(void);
static R11 * r_PARSE_ROUTINE(void);
static R11 * r_BIN_NODE(R7 p_OP, rt_int p_LINE, R11 * p_A, R11 * p_B);
static R11 * r_PARSE_EXPR(void);
static R11 * r_PARSE_SIMPLE(void);
static R11 * r_PARSE_CONJ(void);
static R11 * r_PARSE_RELATION(void);
static R11 * r_TRY_SCALED(R11 * p_LEFT, rstr p_OPS);
static R11 * r_PARSE_SUM(void);
static R11 * r_PARSE_TERM(void);
static R11 * r_PARSE_FACTOR(void);
static R11 * r_PARSE_SECONDARY(void);
static R11 * r_PARSE_ARGS(R11 * p_N);
static R11 * r_PARSE_POSTFIX(void);
static R11 * r_PARSE_BITS(rt_int p_BITS_PER, rt_int p_LINE);
static R11 * r_PARSE_ATOM(void);
static R11 * r_PARSE_CHARSTRING(R7 p_CHARSET);
static rt_int r_AT_BODY_END(void);
static R11 * r_PARSE_STATEMENTS(void);
static R11 * r_PARSE_HANDLERS(void);
static R11 * r_PARSE_STATEMENT(void);
static void r_EXPECT_END(rstr p_WORD);
static R11 * r_PARSE_UNLABELED(void);
static R11 * r_PARSE_IF(void);
static R11 * r_PARSE_CASE_LABEL(void);
static R11 * r_PARSE_CASE(void);
static R11 * r_PARSE_LOOP(void);
static R11 * r_PARSE_PAR(void);
static R7 r_NO_TEXT(void);
static void S_R12(R12 *d, R12 s, int any);
static int E_R12(R12 a, R12 b);
static R12 r_NO_MVAL(void);
static R12 r_SOME(rt_int p_V);
static R13 * r_NEW_SYM(rt_int p_KIND, R7 p_NAME);
static rt_int r_CUR_OWNER(void);
static R13 * r_ORIGINAL(R13 * p_Y);
static rt_int r_BUCKET(R7 p_NAME);
static R13 * r_LOOKUP(R7 p_NAME);
static R13 * r_ORIG_LOOKUP(R7 p_NAME);
static R13 * r_LOOKUPS(rstr p_NAME);
static R13 * r_LOOKUP_NEXT(R13 * p_Y);
static rt_int r_IS_ROUTINE(R13 * p_Y);
static void r_DEFINE(R13 * p_Y, rt_int p_LINE);
static void r_OPEN_SCOPE(void);
static void r_CLOSE_SCOPE(void);
static void r_UNLINK(R13 * p_Y);
static R13 * r_TAKE_SCOPE(R13 * p_MARK);
static R14 * r_NEW_TYP(rt_int p_KIND);
static R14 * r_COPY_TYP(R14 * p_T);
static void r_PREDEF_TYPE(rstr p_NAME, R14 * p_T);
static void r_PREDEF_BUILTIN(rstr p_NAME);
static void r_PREDEF_CONST(rstr p_NAME, R14 * p_T, rt_int p_V);
static R14 * r_PREDEF_ENUM(rstr p_NAME, rstr p_NAMES, rt_int p_UNORDERED);
static void r_PREDEFINE(void);
static void r_PREDEFINE_TERMINAL(void);
static R7 r_ASCII_NAME(rt_int p_C);
static rt_int r_IS_SCALAR(R14 * p_T);
static R14 * r_REAL_TYPE(R14 * p_T);
static R7 r_TYPE_NAME(R14 * p_T);
static R7 r_SUBST_SELF(R7 p_T, R7 p_SELF);
static rt_int r_SAME_LITERALS(R11 * p_A, R11 * p_B);
static R14 * r_ENUM_CLASS(R11 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE);
static void r_DECLARE_LITERALS(R14 * p_T, rt_int p_LINE);
static R13 * r_FIND_LITERAL(R7 p_NAME, R14 * p_T);
static rt_int r_LITERAL_CLASSES(R7 p_NAME);
static R14 * r_RESOLVE(R11 * p_TS);
static void r_ATTR_VALUE(R11 * p_E, R7 *p_C, R12 *p_M);
static R14 * r_WITH_RANGE(R14 * p_T, R11 * p_R);
static R12 r_ENUM_MANIFEST(R11 * p_E, R14 * p_T);
static rt_int r_CUR_LEVEL(void);
static R14 * r_ARG_TYPE(R11 * p_N);
static R11 * r_NTH_ARG(R11 * p_TS, rt_int p_K);
static R14 * r_RESOLVE_NAMED(R11 * p_TS, R7 p_CNAME);
static R14 * r_GEN_TYPE(R11 * p_TS);
static R14 * r_RESOLVE_PREDEFINED(R11 * p_TS);
static void r_STRING_LENGTH(R14 * p_T, R11 * p_A);
static R14 * r_RESOLVE_ARRAY(R11 * p_TS);
static R14 * r_RESOLVE_USER(R11 * p_TS);
static R14 * r_ABSTRACT_VIEW(R13 * p_Y, R14 * p_T);
static rt_int r_IN_MODULE(R13 * p_M);
static R14 * r_RESOLVE_IN_DECL(R13 * p_Y, R11 * p_TS);
static void r_BIND_FORMALS(R11 * p_FORMALS, R11 * p_TS);
static R7 r_RECORD_NAME(R13 * p_Y);
static R14 * r_TARGET(R14 * p_T);
static R7 r_CTYPE(R14 * p_T);
static rt_int r_IS_GENERIC_NODE(R11 * p_E);
static R15 * r_NEW_FIELD(R7 p_NAME, R14 * p_T, rt_int p_KIND);
static R15 * r_FIND_FIELD(R14 * p_T, R7 p_NAME);
static void r_ADD_FIELD(R14 * p_T, R15 * p_F, R15 * *p_TAIL);
static void r_RECORD_FIELDS(R14 * p_T, R11 * p_DECLS, R7 p_TAGN, R11 * p_LABELS, R15 * *p_TAIL);
static R14 * r_RESOLVE_RECORD(R11 * p_TS, R7 p_CNAME, R13 * p_Y, R11 * p_FORMALS);
static R14 * r_RECORD_INSTANCE(R13 * p_Y, R11 * p_TS);
static rt_int r_SAME_BINDS(R16 * p_A, R16 * p_B);
static rt_int r_HAS_ANY(R14 * p_T);
static R7 r_VARIANT_COND(R15 * p_F, R14 * p_T, R7 p_SELF);
static void r_COMPLETE_RECORD(R14 * p_T);
static R7 r_ARRAY_STRUCT(R14 * p_ELEM, rt_int p_DIMS);
static R7 r_INIT_CODE(R14 * p_T, R7 p_LV);
static rt_int r_NEEDS_INIT(R14 * p_T);
static R7 r_ASSIGN_CODE(R14 * p_T, R7 p_LV, R7 p_RV);
static R7 r_EQUAL_CODE(R14 * p_T, R7 p_A, R7 p_B);
static R7 r_RANGE_CHECK(R14 * p_T, R7 p_V, R7 p_SELF);
static rt_int r_IS_NUMERIC_OR_ENUM(R14 * p_T);
static rt_int r_SAME_CLASS(R14 * p_A, R14 * p_B);
static rt_int r_SAME_TYPE(R14 * p_A, R14 * p_B);
static rt_int r_IS_GEN_ARG(R17 * p_B);
static rt_int r_SAME_ARGS(R17 * p_A, R17 * p_B);
static R7 r_FRAME_OF(rt_int p_LEVEL);
static R7 r_OBJ_ACCESS(R13 * p_Y);
static R7 r_NEW_OBJECT(R13 * p_Y, rstr p_BASE);
static void r_DECLARE_OBJECTS(R11 * p_D);
static void S_R18(R18 *d, R18 s, int any);
static int E_R18(R18 a, R18 b);
static R18 r_MKET(R7 p_C, R14 * p_T);
static R18 r_MKLV(R7 p_C, R14 * p_T, rt_int p_LVAL, R7 p_SELF);
static R14 * r_INT_TYPE(rt_int p_SCALE);
static R14 * r_STR_TYPE(R7 p_LEN, R12 p_M);
static R7 r_CSTRING(R7 p_T);
static R12 r_MANIFEST(R11 * p_E);
static rt_int r_MANIFEST_INT(R11 * p_E);
static rt_int r_BOOL_INT(rt_int p_B);
static R18 r_EXPR(R11 * p_E, R14 * p_WANT);
static R7 r_INT_EXPR(R11 * p_E);
static R7 r_BOOL_EXPR(R11 * p_E);
static R14 * r_BITS_TYPE(rt_int p_LEN);
static R18 r_REAL_LITERAL(R11 * p_E);
static R18 r_STRING_LITERAL(R11 * p_E);
static R14 * r_RESOLVE_USER_NAME(R7 p_NAME, rt_int p_LINE);
static R18 r_ENUM_LITERAL(R11 * p_E, R14 * p_WANT);
static R14 * r_ENUM_RESULT(R13 * p_Y, R14 * p_WANT);
static R18 r_NAME_EXPR(R11 * p_E, R14 * p_WANT);
static R18 r_FIELD_EXPR(R11 * p_E);
static rt_int r_IS_TYPE_WORD(R7 p_NAME);
static void r_CHECK_VARIANT(R15 * p_F, R14 * p_T, R11 * p_BASE, rt_int p_LINE);
static R12 r_TAG_VALUE(R14 * p_T, R7 p_TAGN);
static rt_int r_LABELS_HAVE(R11 * p_L, rt_int p_V, R14 * p_T);
static R18 r_INDEX_EXPR(R11 * p_E);
static R18 r_INDEX_EXPR2(R11 * p_E);
static R7 r_OP_NAME(R7 p_OP, rt_int p_UNARY);
static R19 * r_VAL_ARG(R18 p_V, R19 * p_NEXT);
static R19 * r_NODE_ARG(R11 * p_E, rt_int p_MODE, R19 * p_NEXT);
static R13 * r_USER_OPERATOR(R7 p_NAME, R19 * p_ARGS, rt_int p_LINE);
static R18 r_OPERATOR_CALL3(R7 p_NAME, R18 p_A, R11 * p_B, R11 * p_C, rt_int p_LINE);
static void r_REQUIRE_MACHINE(rt_int p_LINE);
static R7 r_RESCALE_C(R7 p_C, rt_int p_SFROM, rt_int p_STO);
static R7 r_RESCALE(R18 p_V, rt_int p_S, rt_int p_LINE);
static R7 r_CONVERT(R18 p_V, R14 * p_T, rt_int p_LINE, R7 p_SELF);
static R7 r_STORE_CODE(R14 * p_T, R7 p_LV, R18 p_V, rt_int p_LINE, R7 p_SELF);
static R18 r_UNARY(R11 * p_E);
static rt_int r_IS_LITERALISH(R11 * p_E);
static R18 r_BINARY(R11 * p_E);
static R18 r_APPLY_OPERATOR(R11 * p_E, R7 p_OP, R18 p_A, R18 p_B);
static R7 r_LOWER_OP(R7 p_OP);
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B);
static R18 r_EQUALITY(R11 * p_E, R7 p_OP, R18 p_A, R18 p_B);
static R18 r_FIXED_ARITH(R11 * p_E, R7 p_OP, R18 p_A, R18 p_B);
static R18 r_SCALED_OPERATOR(R11 * p_E, R7 p_OP, R18 p_A, R18 p_B);
static R18 r_IN_EXPR(R11 * p_E);
static R7 r_CONVERT_TO_SCALE(R18 p_V, R14 * p_T, rt_int p_LINE);
static R18 r_INT_ET(rt_int p_V);
static rt_int r_BITS_FOR(rt_int p_N);
static rt_int r_ENUM_SIZE(R14 * p_T);
static R18 r_ATTRIBUTE(R18 p_B, R7 p_NAME, rt_int p_LINE);
static R11 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE);
static R18 r_SIZE_OF(R14 * p_T, R7 p_C);
static R18 r_TYPE_ATTRIBUTE(R7 p_TNAME, R7 p_NAME, rt_int p_LINE);
static R18 r_ATTRIBUTE_OF_ATTRIBUTE(R7 p_TNAME, R7 p_A, R7 p_B, rt_int p_LINE);
static R18 r_RECORD_CONSTRUCTOR(R11 * p_E, R14 * p_WANT);
static R11 * r_FIND_INIT(R11 * p_L, R7 p_NAME);
static R18 r_ARRAY_CONSTRUCTOR(R11 * p_E, R14 * p_WANT);
static void r_ARRAY_ELEMENTS(R11 * p_E, rt_int p_DIMS, R14 * p_A, R7 p_TMP, R7 *p_R, rt_int *p_K);
static R14 * r_ARRAY_OF(R14 * p_ELEM, rt_int p_DIMS);
static R18 r_TYPE_SPECIFIER(R11 * p_E);
static R7 r_ENUM_OF_BITS(R14 * p_T, R7 p_C);
static R7 r_REP_TABLE(R14 * p_T);
static R18 r_NEW_EXPR(R11 * p_E, R14 * p_WANT);
static R11 * r_NTH(R11 * p_L, rt_int p_K);
static void r_NEED_ARGS(R11 * p_E, rt_int p_LO, rt_int p_HI);
static R7 r_ROUNDING_ARG(R11 * p_E, rt_int p_N);
static rt_int r_IS_ROUNDING(R11 * p_E);
static R11 * r_ARG_EXPR(R11 * p_E);
static R18 r_BUILTIN(R11 * p_E, R14 * p_WANT);
static R18 r_IMAGE_OF(R18 p_V, rt_int p_LINE);
static R18 r_TO_FIXED_CALL(R11 * p_E);
static R18 r_BITS_OF(R18 p_V, rt_int p_LINE);
static void r_TYPE_ARG(R19 * p_A);
static rt_int r_WANT_SENSITIVE(R19 * p_A);
static rt_int r_COUNT_ARGS(R19 * p_A);
static R19 * r_CALL_ARGS(R11 * p_E);
static R18 r_CALL_EXPR(R11 * p_E, R14 * p_WANT);
static R13 * r_BOUND_ROUTINE(R7 p_NAME);
static rt_int r_CANDIDATE(R13 * p_Y, R7 p_NAME);
static R13 * r_FIND_ROUTINE(R7 p_NAME, R19 * p_ARGS, rt_int p_LINE, rt_int p_MUST);
static rt_int r_SEEN_ROUTINE(R13 * p_R, R7 p_NAME, R13 * p_STOP);
static rt_int r_PARAM_COUNT(R13 * p_R);
static rt_int r_MATCH_SCORE(R13 * p_R, R19 * p_ARGS);
static rt_int r_LITERAL_FITS(R11 * p_E, R14 * p_T);
static R18 r_CALL_SYM(R13 * p_Y0, R19 * p_ARGS, rt_int p_LINE);
static rt_int r_STATIC_GENERIC(R11 * p_TS);
static rt_int r_HAS_GEN_ARG(R11 * p_A);
static void r_ROUTINE_HEADER(R13 * p_Y);
static R14 * r_RESULT_TYPE(R13 * p_Y);
static R7 r_C_HEADER(R13 * p_Y);
static void r_DEFINE_PARAM_GENS(R14 * p_T, R7 p_PC, rt_int p_LINE, rt_int p_CHECK);
static rt_int r_IS_GEN_TEXT(R7 p_T);
static R7 r_GEN_TEXT_NAME(R7 p_T);
static void r_DEFINE_GEN(R7 p_NAME, R7 p_C, rt_int p_LINE, rt_int p_CHECK);
static R16 * r_NEW_BINDS(void);
static void r_ADD_BIND(R7 p_NAME, R14 * p_T, R12 p_M, R13 * p_R, R16 * p_HEAD);
static R16 * r_FIND_BIND(R16 * p_BS, R7 p_NAME);
static rt_int r_UNIFY(R11 * p_TS, R14 * p_T, R16 * p_BS);
static R13 * r_RECORD_CLASS_OF(R14 * p_T);
static rt_int r_UNIFY_VALUE(R11 * p_A, R12 p_M, R16 * p_BS);
static rt_int r_GENERIC_FITS(R20 * p_P, R19 * p_A, R16 * p_BS);
static R13 * r_INSTANCE(R13 * p_G, R19 * p_ARGS, rt_int p_LINE);
static rt_int r_SAME_STATIC_BINDS(R16 * p_A, R16 * p_B);
static R13 * r_ROUTINE_ARGUMENT(R11 * p_TS, R11 * p_E, rt_int p_LINE);
static void r_WHERE_BINDINGS(R13 * p_G, rt_int p_LINE, R16 * p_BS);
static rt_int r_DONTCARE_TYPE_ARG(R11 * p_TS);
static R13 * r_NEW_INSTANCE(R13 * p_G, R16 * p_BS, R19 * p_ARGS);
static rt_int r_IS_OPERATOR_NAME(R7 p_NAME);
static R11 * r_SUBST_FORMALS(R11 * p_TS, R11 * p_FORMALS, R11 * p_ARGS);
static R11 * r_COPY_NODE(R11 * p_N);
static rt_int r_IN_IDENTS(R11 * p_L, R7 p_NAME);
static rt_int r_CHECK_IMPORTED(R13 * p_Y, rt_int p_LINE);
static void r_COMPUTE_USES(R13 * p_Y);
static void r_ROUTINE_USES(R11 * p_RS);
static void r_ADD_USES(R11 * p_L, R11 * *p_HEAD, R11 * *p_TAIL);
static void r_CHECK_CALL_IMPORTS(R13 * p_Y, rt_int p_LINE);
static R7 r_BASE_NAME(R13 * p_Y);
static rt_int r_HANDLER_EXISTS(R7 p_NAME);
static void r_PUSH_CTX(rt_int p_KIND, R7 p_NAME);
static void r_POP_CTX(void);
static R21 * r_LEAVE(rt_int p_KIND);
static rt_int r_GUARDS(void);
static R7 r_EXC_NAME(R7 p_NAME);
static void r_DECLARE_TYPES(R11 * p_DECLS);
static void r_DECLARE_LABELS(R11 * p_S0);
static void r_BODY(R11 * p_B);
static void r_OPEN_BODY(R11 * p_B);
static void r_GUARDED(R11 * p_S, R11 * p_BODY_NODE, R11 * p_HANDLERS);
static void r_STMT(R11 * p_S);
static R18 r_PROCEDURE_CALL(R11 * p_S);
static void r_IF_STMT(R11 * p_ARMS, R11 * p_ELSE_BODY);
static void r_FOR_STMT(R11 * p_S);
static void r_RETURN_STMT(R11 * p_S);
static void r_SIGNAL_STMT(R11 * p_S);
static void r_ASSIGN_STMT(R11 * p_S);
static void r_WITH_STMT(R11 * p_S);
static void r_CASE_STMT(R11 * p_S);
static void r_CASE_ELEMENT(R11 * p_B, R11 * p_HANDLERS);
static R13 * r_DISCRIMINATED(R11 * p_CH);
static R14 * r_NARROW(R14 * p_T, R7 p_TAGN, rt_int p_V);
static void r_MACHINE_CASE(R11 * p_S);
static R14 * r_PATHS_TYPE(void);
static void r_PARALLEL_BLOCK(R11 * p_S);
static void r_ACTIVATE_PATH(R11 * p_P, R7 p_TD);
static R7 r_UP_FRAME(void);
static void r_PATH_BODY(R11 * p_P, R7 p_FN, R7 p_FT);
static R7 r_JOIN_BUF(R8 p_B);
static R7 r_PATH_REF(R11 * p_E);
static void r_TERMINATE_STMT(R11 * p_S);
static R18 r_PARALLEL_BUILTIN(R11 * p_E, R14 * p_WANT);
static R18 r_START_IO_CALL(R11 * p_E);
static void r_ENTER_ISCOPE(R11 * p_IMPORTS, R11 * p_SIGNALS, R7 p_NAME);
static void r_LEAVE_ISCOPE(void);
static R7 r_ROUTINE_CNAME(R7 p_NAME);
static rt_int r_NEEDS_FRAME(R11 * p_B);
static rt_int r_HAS_HANDLERS(R11 * p_S0);
static void r_DECLARE_ROUTINE_SYM(R11 * p_R);
static void r_DECLARE_MEMBERS(R11 * p_RS);
static void r_ROUTINE_HEADERS(R11 * p_RS);
static R13 * r_FIND_DECL(R11 * p_D);
static void r_RESOLVE_ENUM_TYPES(R11 * p_DECLS);
static R11 * r_TYPE_REF(R11 * p_D);
static void r_PREDECLARE_MODULE(R11 * p_M);
static void r_ENTER_MODULE(R13 * p_M);
static void r_LEAVE_MODULE(R13 * p_M);
static void r_ENTER_MODULE_OF(R13 * p_G);
static void r_LEAVE_MODULE_OF(R13 * p_G);
static void r_EXPORT_MODULE(R13 * p_M);
static rt_int r_MEMBER_NAMED(R13 * p_M, R7 p_NAME);
static rt_int r_EXPORTED_BY(R11 * p_D, R13 * p_Y);
static R13 * r_ORIG_LOOKUP_MEMBER(R7 p_NAME, R13 * p_Y);
static void r_MODULE_DATA(R11 * p_RS);
static void r_ROUTINE_BODIES(R11 * p_RS);
static void r_PENDING_BODIES(void);
static void r_CLOSED_BODY(R11 * p_B);
static void r_ROUTINE_BODY(R13 * p_Y);
static void r_BIND_INSTANCE(R16 * p_BS, rt_int p_LINE);
static void r_APPEND_BUF(R8 p_SRC, R8 *p_DST);
static rt_int r_USES_SEGMENT(R11 * p_S, rstr p_NAME);
static void r_TRANSLATE(R11 * p_SEGS);
static void r_SEGMENT_EXPORTS(R11 * p_S);
static void S_A23(A23 *d, A23 s, int any);
static int E_A23(A23 a, A23 b);
static void S_A24(A24 *d, A24 s, int any);
static int E_A24(A24 a, A24 b);
static void S_A25(A25 *d, A25 s, int any);
static int E_A25(A25 a, A25 b);
static void S_A26(A26 *d, A26 s, int any);
static int E_A26(A26 a, A26 b);
static void S_R22(R22 *d, R22 s, int any);
static int E_R22(R22 a, R22 b);
static void S_R11(R11 *d, R11 s, int any);
static int E_R11(R11 a, R11 b);
static void S_R9(R9 *d, R9 s, int any);
static int E_R9(R9 a, R9 b);
static void S_R13(R13 *d, R13 s, int any);
static int E_R13(R13 a, R13 b);
static void S_R27(R27 *d, R27 s, int any);
static int E_R27(R27 a, R27 b);
static void S_R28(R28 *d, R28 s, int any);
static int E_R28(R28 a, R28 b);
static void S_R14(R14 *d, R14 s, int any);
static int E_R14(R14 a, R14 b);
static void S_R16(R16 *d, R16 s, int any);
static int E_R16(R16 a, R16 b);
static void S_R17(R17 *d, R17 s, int any);
static int E_R17(R17 a, R17 b);
static void S_R15(R15 *d, R15 s, int any);
static int E_R15(R15 a, R15 b);
static void S_R19(R19 *d, R19 s, int any);
static int E_R19(R19 a, R19 b);
static void S_R20(R20 *d, R20 s, int any);
static int E_R20(R20 a, R20 b);
static void S_R21(R21 *d, R21 s, int any);
static int E_R21(R21 a, R21 b);
static void S_R7(R7 *d, R7 s, int any) {  d->f_AT = s.f_AT; d->f_LEN = s.f_LEN; d->f_H = s.f_H; }
static int E_R7(R7 a, R7 b) { return 1 && (a.f_AT == b.f_AT) && (a.f_LEN == b.f_LEN) && (a.f_H == b.f_H); }
static void S_R8(R8 *d, R8 s, int any) {  d->f_HEAD = s.f_HEAD; d->f_TAIL = s.f_TAIL; }
static int E_R8(R8 a, R8 b) { return 1 && (a.f_HEAD == b.f_HEAD) && (a.f_TAIL == b.f_TAIL); }
static void S_R10(R10 *d, R10 s, int any) {  d->f_KIND = s.f_KIND; d->f_LINE = s.f_LINE; d->f_IV = s.f_IV; S_R7(&d->f_TX, s.f_TX, 0); }
static int E_R10(R10 a, R10 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_LINE == b.f_LINE) && (a.f_IV == b.f_IV) && E_R7(a.f_TX, b.f_TX); }
static void S_R12(R12 *d, R12 s, int any) {  d->f_OK = s.f_OK; d->f_V = s.f_V; }
static int E_R12(R12 a, R12 b) { return 1 && (a.f_OK == b.f_OK) && (a.f_V == b.f_V); }
static void S_R18(R18 *d, R18 s, int any) {  S_R7(&d->f_C, s.f_C, 0); d->f_T = s.f_T; d->f_LVAL = s.f_LVAL; S_R7(&d->f_SELF, s.f_SELF, 0); }
static int E_R18(R18 a, R18 b) { return 1 && E_R7(a.f_C, b.f_C) && (a.f_T == b.f_T) && (a.f_LVAL == b.f_LVAL) && E_R7(a.f_SELF, b.f_SELF); }
static void S_A23(A23 *d, A23 s, int any) { rt_int n = rt_b_extent(1, d->lo, d->hi);
if (!rt_b_same_extents(1, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) d->p[i] = s.p[i]; }
static int E_A23(A23 a, A23 b) { rt_int n = rt_b_extent(1, a.lo, a.hi);
if (!rt_b_same_extents(1, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!(a.p[i] == b.p[i])) return 0; return 1; }
static void S_A24(A24 *d, A24 s, int any) { rt_int n = rt_b_extent(1, d->lo, d->hi);
if (!rt_b_same_extents(1, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) S_R10(&d->p[i], s.p[i], 0); }
static int E_A24(A24 a, A24 b) { rt_int n = rt_b_extent(1, a.lo, a.hi);
if (!rt_b_same_extents(1, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!E_R10(a.p[i], b.p[i])) return 0; return 1; }
static void S_A25(A25 *d, A25 s, int any) { rt_int n = rt_b_extent(1, d->lo, d->hi);
if (!rt_b_same_extents(1, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) d->p[i] = s.p[i]; }
static int E_A25(A25 a, A25 b) { rt_int n = rt_b_extent(1, a.lo, a.hi);
if (!rt_b_same_extents(1, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!(a.p[i] == b.p[i])) return 0; return 1; }
static void S_A26(A26 *d, A26 s, int any) { rt_int n = rt_b_extent(1, d->lo, d->hi);
if (!rt_b_same_extents(1, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) S_R8(&d->p[i], s.p[i], 0); }
static int E_A26(A26 a, A26 b) { rt_int n = rt_b_extent(1, a.lo, a.hi);
if (!rt_b_same_extents(1, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!E_R8(a.p[i], b.p[i])) return 0; return 1; }
static void S_R22(R22 *d, R22 s, int any) {  rt_b_assign(&d->f_ARENA, s.f_ARENA); d->f_TOP = s.f_TOP; S_A23(&d->f_SRC, s.f_SRC, 0); d->f_NSRC = s.f_NSRC; S_A24(&d->f_TOKS, s.f_TOKS, 0); d->f_NTOKS = s.f_NTOKS; d->f_POS = s.f_POS; S_A25(&d->f_TABLE, s.f_TABLE, 0); d->f_SCOPE = s.f_SCOPE; d->f_DEPTH = s.f_DEPTH; S_A26(&d->f_OUT, s.f_OUT, 0); S_R8(&d->f_CODE, s.f_CODE, 0); d->f_CTXS = s.f_CTXS; d->f_CS = s.f_CS; d->f_IS = s.f_IS; d->f_NSCOPES = s.f_NSCOPES; d->f_MODL = s.f_MODL; d->f_BINDS = s.f_BINDS; d->f_ROUNDED = s.f_ROUNDED; d->f_MACHINE = s.f_MACHINE; d->f_SERIAL = s.f_SERIAL; d->f_EXCS = s.f_EXCS; d->f_TY_INT = s.f_TY_INT; d->f_TY_BOOL = s.f_TY_BOOL; d->f_TY_STR = s.f_TY_STR; d->f_TY_VOID = s.f_TY_VOID; d->f_TY_NIL = s.f_TY_NIL; d->f_TY_ASCII = s.f_TY_ASCII; d->f_TY_FLOAT = s.f_TY_FLOAT; d->f_TY_BITS = s.f_TY_BITS; d->f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d->f_TY_TYPE = s.f_TY_TYPE; d->f_PENDING = s.f_PENDING; d->f_CNAMES = s.f_CNAMES; d->f_ENUMS = s.f_ENUMS; d->f_ARRAYS = s.f_ARRAYS; d->f_RECS = s.f_RECS; }
static int E_R22(R22 a, R22 b) { return 1 && rt_b_eq(a.f_ARENA, b.f_ARENA) && (a.f_TOP == b.f_TOP) && E_A23(a.f_SRC, b.f_SRC) && (a.f_NSRC == b.f_NSRC) && E_A24(a.f_TOKS, b.f_TOKS) && (a.f_NTOKS == b.f_NTOKS) && (a.f_POS == b.f_POS) && E_A25(a.f_TABLE, b.f_TABLE) && (a.f_SCOPE == b.f_SCOPE) && (a.f_DEPTH == b.f_DEPTH) && E_A26(a.f_OUT, b.f_OUT) && E_R8(a.f_CODE, b.f_CODE) && (a.f_CTXS == b.f_CTXS) && (a.f_CS == b.f_CS) && (a.f_IS == b.f_IS) && (a.f_NSCOPES == b.f_NSCOPES) && (a.f_MODL == b.f_MODL) && (a.f_BINDS == b.f_BINDS) && (a.f_ROUNDED == b.f_ROUNDED) && (a.f_MACHINE == b.f_MACHINE) && (a.f_SERIAL == b.f_SERIAL) && (a.f_EXCS == b.f_EXCS) && (a.f_TY_INT == b.f_TY_INT) && (a.f_TY_BOOL == b.f_TY_BOOL) && (a.f_TY_STR == b.f_TY_STR) && (a.f_TY_VOID == b.f_TY_VOID) && (a.f_TY_NIL == b.f_TY_NIL) && (a.f_TY_ASCII == b.f_TY_ASCII) && (a.f_TY_FLOAT == b.f_TY_FLOAT) && (a.f_TY_BITS == b.f_TY_BITS) && (a.f_TY_ROUNDINGS == b.f_TY_ROUNDINGS) && (a.f_TY_TYPE == b.f_TY_TYPE) && (a.f_PENDING == b.f_PENDING) && (a.f_CNAMES == b.f_CNAMES) && (a.f_ENUMS == b.f_ENUMS) && (a.f_ARRAYS == b.f_ARRAYS) && (a.f_RECS == b.f_RECS); }
static void S_R11(R11 *d, R11 s, int any) {  d->f_KIND = s.f_KIND; d->f_LINE = s.f_LINE; d->f_IV = s.f_IV; S_R7(&d->f_NAME, s.f_NAME, 0); d->f_A = s.f_A; d->f_B = s.f_B; d->f_C = s.f_C; d->f_D = s.f_D; d->f_E = s.f_E; d->f_NEXT = s.f_NEXT; d->f_FL = s.f_FL; }
static int E_R11(R11 a, R11 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_LINE == b.f_LINE) && (a.f_IV == b.f_IV) && E_R7(a.f_NAME, b.f_NAME) && (a.f_A == b.f_A) && (a.f_B == b.f_B) && (a.f_C == b.f_C) && (a.f_D == b.f_D) && (a.f_E == b.f_E) && (a.f_NEXT == b.f_NEXT) && (a.f_FL == b.f_FL); }
static void S_R9(R9 *d, R9 s, int any) {  S_R7(&d->f_T, s.f_T, 0); d->f_NEXT = s.f_NEXT; }
static int E_R9(R9 a, R9 b) { return 1 && E_R7(a.f_T, b.f_T) && (a.f_NEXT == b.f_NEXT); }
static void S_R13(R13 *d, R13 s, int any) {  d->f_KIND = s.f_KIND; d->f_DEPTH = s.f_DEPTH; d->f_LEVEL = s.f_LEVEL; S_R7(&d->f_NAME, s.f_NAME, 0); d->f_T = s.f_T; S_R7(&d->f_ACCESS, s.f_ACCESS, 0); S_R7(&d->f_FIELD, s.f_FIELD, 0); d->f_INPUT = s.f_INPUT; d->f_BYREF = s.f_BYREF; d->f_HASMV = s.f_HASMV; d->f_MV = s.f_MV; d->f_TS = s.f_TS; d->f_BUSY = s.f_BUSY; S_R7(&d->f_FWD, s.f_FWD, 0); d->f_PARAMS = s.f_PARAMS; d->f_RESULT = s.f_RESULT; d->f_DECL = s.f_DECL; S_R7(&d->f_PREFIX, s.f_PREFIX, 0); d->f_MODL = s.f_MODL; d->f_EXPORTED = s.f_EXPORTED; d->f_GENERIC = s.f_GENERIC; d->f_FRAMED = s.f_FRAMED; d->f_USES = s.f_USES; d->f_INSTANCES = s.f_INSTANCES; d->f_BINDINGS = s.f_BINDINGS; d->f_ORIG = s.f_ORIG; d->f_MEMBERS = s.f_MEMBERS; d->f_SAVED = s.f_SAVED; d->f_OWNER = s.f_OWNER; d->f_CHAIN = s.f_CHAIN; d->f_SNEXT = s.f_SNEXT; }
static int E_R13(R13 a, R13 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_DEPTH == b.f_DEPTH) && (a.f_LEVEL == b.f_LEVEL) && E_R7(a.f_NAME, b.f_NAME) && (a.f_T == b.f_T) && E_R7(a.f_ACCESS, b.f_ACCESS) && E_R7(a.f_FIELD, b.f_FIELD) && (a.f_INPUT == b.f_INPUT) && (a.f_BYREF == b.f_BYREF) && (a.f_HASMV == b.f_HASMV) && (a.f_MV == b.f_MV) && (a.f_TS == b.f_TS) && (a.f_BUSY == b.f_BUSY) && E_R7(a.f_FWD, b.f_FWD) && (a.f_PARAMS == b.f_PARAMS) && (a.f_RESULT == b.f_RESULT) && (a.f_DECL == b.f_DECL) && E_R7(a.f_PREFIX, b.f_PREFIX) && (a.f_MODL == b.f_MODL) && (a.f_EXPORTED == b.f_EXPORTED) && (a.f_GENERIC == b.f_GENERIC) && (a.f_FRAMED == b.f_FRAMED) && (a.f_USES == b.f_USES) && (a.f_INSTANCES == b.f_INSTANCES) && (a.f_BINDINGS == b.f_BINDINGS) && (a.f_ORIG == b.f_ORIG) && (a.f_MEMBERS == b.f_MEMBERS) && (a.f_SAVED == b.f_SAVED) && (a.f_OWNER == b.f_OWNER) && (a.f_CHAIN == b.f_CHAIN) && (a.f_SNEXT == b.f_SNEXT); }
static void S_R27(R27 *d, R27 s, int any) {  d->f_LEVEL = s.f_LEVEL; d->f_R = s.f_R; d->f_FRAMED = s.f_FRAMED; S_R7(&d->f_FTYPE, s.f_FTYPE, 0); S_R8(&d->f_FIELDS, s.f_FIELDS, 0); d->f_UP = s.f_UP; d->f_IMPORTS = s.f_IMPORTS; d->f_SIGNALS = s.f_SIGNALS; d->f_RESULT = s.f_RESULT; d->f_IS_PATH = s.f_IS_PATH; }
static int E_R27(R27 a, R27 b) { return 1 && (a.f_LEVEL == b.f_LEVEL) && (a.f_R == b.f_R) && (a.f_FRAMED == b.f_FRAMED) && E_R7(a.f_FTYPE, b.f_FTYPE) && E_R8(a.f_FIELDS, b.f_FIELDS) && (a.f_UP == b.f_UP) && (a.f_IMPORTS == b.f_IMPORTS) && (a.f_SIGNALS == b.f_SIGNALS) && (a.f_RESULT == b.f_RESULT) && (a.f_IS_PATH == b.f_IS_PATH); }
static void S_R28(R28 *d, R28 s, int any) {  d->f_ID = s.f_ID; d->f_IMPORTS = s.f_IMPORTS; d->f_SIGNALS = s.f_SIGNALS; S_R7(&d->f_NAME, s.f_NAME, 0); d->f_UP = s.f_UP; }
static int E_R28(R28 a, R28 b) { return 1 && (a.f_ID == b.f_ID) && (a.f_IMPORTS == b.f_IMPORTS) && (a.f_SIGNALS == b.f_SIGNALS) && E_R7(a.f_NAME, b.f_NAME) && (a.f_UP == b.f_UP); }
static void S_R14(R14 *d, R14 s, int any) {  d->f_KIND = s.f_KIND; d->f_SCALE = s.f_SCALE; S_R7(&d->f_LO_C, s.f_LO_C, 0); S_R7(&d->f_HI_C, s.f_HI_C, 0); S_R12(&d->f_MLO, s.f_MLO, 0); S_R12(&d->f_MHI, s.f_MHI, 0); d->f_RLEVEL = s.f_RLEVEL; S_R7(&d->f_LEN_C, s.f_LEN_C, 0); S_R12(&d->f_MLEN, s.f_MLEN, 0); S_R7(&d->f_GEN, s.f_GEN, 0); d->f_BASE = s.f_BASE; d->f_ELEM = s.f_ELEM; d->f_TARGET = s.f_TARGET; d->f_TARGET_TS = s.f_TARGET_TS; d->f_FIELDS = s.f_FIELDS; d->f_LITS = s.f_LITS; d->f_NLITS = s.f_NLITS; d->f_UNORDERED = s.f_UNORDERED; d->f_BOUNDS = s.f_BOUNDS; d->f_DIMS = s.f_DIMS; d->f_ARGS = s.f_ARGS; S_R7(&d->f_NAME, s.f_NAME, 0); S_R7(&d->f_CNAME, s.f_CNAME, 0); d->f_MODL = s.f_MODL; d->f_REPS = s.f_REPS; d->f_DECL = s.f_DECL; }
static int E_R14(R14 a, R14 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_SCALE == b.f_SCALE) && E_R7(a.f_LO_C, b.f_LO_C) && E_R7(a.f_HI_C, b.f_HI_C) && E_R12(a.f_MLO, b.f_MLO) && E_R12(a.f_MHI, b.f_MHI) && (a.f_RLEVEL == b.f_RLEVEL) && E_R7(a.f_LEN_C, b.f_LEN_C) && E_R12(a.f_MLEN, b.f_MLEN) && E_R7(a.f_GEN, b.f_GEN) && (a.f_BASE == b.f_BASE) && (a.f_ELEM == b.f_ELEM) && (a.f_TARGET == b.f_TARGET) && (a.f_TARGET_TS == b.f_TARGET_TS) && (a.f_FIELDS == b.f_FIELDS) && (a.f_LITS == b.f_LITS) && (a.f_NLITS == b.f_NLITS) && (a.f_UNORDERED == b.f_UNORDERED) && (a.f_BOUNDS == b.f_BOUNDS) && (a.f_DIMS == b.f_DIMS) && (a.f_ARGS == b.f_ARGS) && E_R7(a.f_NAME, b.f_NAME) && E_R7(a.f_CNAME, b.f_CNAME) && (a.f_MODL == b.f_MODL) && (a.f_REPS == b.f_REPS) && (a.f_DECL == b.f_DECL); }
static void S_R16(R16 *d, R16 s, int any) {  S_R7(&d->f_NAME, s.f_NAME, 0); d->f_T = s.f_T; S_R7(&d->f_C, s.f_C, 0); d->f_HASMV = s.f_HASMV; d->f_MV = s.f_MV; d->f_R = s.f_R; d->f_NEXT = s.f_NEXT; }
static int E_R16(R16 a, R16 b) { return 1 && E_R7(a.f_NAME, b.f_NAME) && (a.f_T == b.f_T) && E_R7(a.f_C, b.f_C) && (a.f_HASMV == b.f_HASMV) && (a.f_MV == b.f_MV) && (a.f_R == b.f_R) && (a.f_NEXT == b.f_NEXT); }
static void S_R17(R17 *d, R17 s, int any) {  S_R7(&d->f_LO, s.f_LO, 0); S_R7(&d->f_HI, s.f_HI, 0); S_R12(&d->f_MLO, s.f_MLO, 0); S_R12(&d->f_MHI, s.f_MHI, 0); d->f_ANYARG = s.f_ANYARG; d->f_NEXT = s.f_NEXT; }
static int E_R17(R17 a, R17 b) { return 1 && E_R7(a.f_LO, b.f_LO) && E_R7(a.f_HI, b.f_HI) && E_R12(a.f_MLO, b.f_MLO) && E_R12(a.f_MHI, b.f_MHI) && (a.f_ANYARG == b.f_ANYARG) && (a.f_NEXT == b.f_NEXT); }
static void S_R15(R15 *d, R15 s, int any) {  S_R7(&d->f_NAME, s.f_NAME, 0); S_R7(&d->f_CNAME, s.f_CNAME, 0); d->f_T = s.f_T; d->f_KIND = s.f_KIND; S_R7(&d->f_TAGF, s.f_TAGF, 0); d->f_LABELS = s.f_LABELS; d->f_NEXT = s.f_NEXT; }
static int E_R15(R15 a, R15 b) { return 1 && E_R7(a.f_NAME, b.f_NAME) && E_R7(a.f_CNAME, b.f_CNAME) && (a.f_T == b.f_T) && (a.f_KIND == b.f_KIND) && E_R7(a.f_TAGF, b.f_TAGF) && (a.f_LABELS == b.f_LABELS) && (a.f_NEXT == b.f_NEXT); }
static void S_R19(R19 *d, R19 s, int any) {  d->f_E = s.f_E; S_R18(&d->f_V, s.f_V, 0); d->f_HAVE = s.f_HAVE; d->f_MODE = s.f_MODE; d->f_NEXT = s.f_NEXT; }
static int E_R19(R19 a, R19 b) { return 1 && (a.f_E == b.f_E) && E_R18(a.f_V, b.f_V) && (a.f_HAVE == b.f_HAVE) && (a.f_MODE == b.f_MODE) && (a.f_NEXT == b.f_NEXT); }
static void S_R20(R20 *d, R20 s, int any) {  S_R7(&d->f_NAME, s.f_NAME, 0); d->f_MODE = s.f_MODE; d->f_T = s.f_T; d->f_TS = s.f_TS; d->f_NEXT = s.f_NEXT; }
static int E_R20(R20 a, R20 b) { return 1 && E_R7(a.f_NAME, b.f_NAME) && (a.f_MODE == b.f_MODE) && (a.f_T == b.f_T) && (a.f_TS == b.f_TS) && (a.f_NEXT == b.f_NEXT); }
static void S_R21(R21 *d, R21 s, int any) {  d->f_KIND = s.f_KIND; S_R7(&d->f_NAME, s.f_NAME, 0); d->f_HANDLERS = s.f_HANDLERS; d->f_NEXT = s.f_NEXT; }
static int E_R21(R21 a, R21 b) { return 1 && (a.f_KIND == b.f_KIND) && E_R7(a.f_NAME, b.f_NAME) && (a.f_HANDLERS == b.f_HANDLERS) && (a.f_NEXT == b.f_NEXT); }
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
static R7 r_MK(rstr p_S) { 
rt_int l_AT_44; memset(&l_AT_44, 0, sizeof l_AT_44);
l_AT_44 = ((*(R22 *)rt_nil_check(g_W))).f_TOP;
if ((rt_add(l_AT_44, (rt_int)(p_S).len) > g_ARENA_SIZE))
{
rt_putln(rt_str("*** the arena is full", 21));
rt_exit(((rt_int)2LL));
}
rt_b_slice_assign(&((*(R22 *)rt_nil_check(g_W))).f_ARENA, l_AT_44, rt_sub(rt_add(l_AT_44, (rt_int)(p_S).len), ((rt_int)1LL)), p_S);
((*(R22 *)rt_nil_check(g_W))).f_TOP = rt_add(l_AT_44, (rt_int)(p_S).len);
{ R7 rv45 = ({ R7 rc46; memset(&rc46, 0, sizeof rc46);  rc46.f_AT = l_AT_44; rc46.f_LEN = (rt_int)(p_S).len; rc46.f_H = rt_neg(((rt_int)1LL)); rc46; });
return rv45; }
rt_raise(RT_X_INIT);
}
static R7 r_MKN(rstr p_S) { 
R7 l_T_47; memset(&l_T_47, 0, sizeof l_T_47);
S_R7(&l_T_47, r_MK(p_S), 0);
(l_T_47).f_H = r_HASH_OF(p_S);
{ R7 rv48 = l_T_47;
return rv48; }
rt_raise(RT_X_INIT);
}
static rstr r_STR(R7 p_T, rt_int p_L) { 
{ rstr rv49 = rt_b_slice(((*(R22 *)rt_nil_check(g_W))).f_ARENA, (p_T).f_AT, rt_sub(rt_add((p_T).f_AT, p_L), ((rt_int)1LL)));
return rv49; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEQ(R7 p_A, R7 p_B) { 
if ((!((p_A).f_LEN == (p_B).f_LEN)))
{
{ rt_int rv50 = 0;
return rv50; }
}
{ rt_int rv51 = rt_b_eq(r_STR(p_A, (p_A).f_LEN), r_STR(p_B, (p_B).f_LEN));
return rv51; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEQS(R7 p_A, rstr p_S) { 
if ((!((p_A).f_LEN == (rt_int)(p_S).len)))
{
{ rt_int rv52 = 0;
return rv52; }
}
{ rt_int rv53 = rt_b_eq(r_STR(p_A, (p_A).f_LEN), p_S);
return rv53; }
rt_raise(RT_X_INIT);
}
static R7 r_CAT(R7 p_A, R7 p_B) { 
{ R7 rv54 = r_MK(rt_str_cat(r_STR(p_A, (p_A).f_LEN), r_STR(p_B, (p_B).f_LEN)));
return rv54; }
rt_raise(RT_X_INIT);
}
static R7 r_CATS(R7 p_A, rstr p_S) { 
{ R7 rv55 = r_MK(rt_str_cat(r_STR(p_A, (p_A).f_LEN), p_S));
return rv55; }
rt_raise(RT_X_INIT);
}
static R7 r_FMT4(rstr p_P, R7 p_A, R7 p_B, R7 p_C, R7 p_D) { 
rt_int l_AT_56; memset(&l_AT_56, 0, sizeof l_AT_56);
l_AT_56 = ((*(R22 *)rt_nil_check(g_W))).f_TOP;
rt_int l_N_57; memset(&l_N_57, 0, sizeof l_N_57);
l_N_57 = ((rt_int)0LL);
rt_int l_START_58; memset(&l_START_58, 0, sizeof l_START_58);
l_START_58 = ((rt_int)0LL);
R7 l_R_59; memset(&l_R_59, 0, sizeof l_R_59);
{ rt_int it61_lo = ((rt_int)0LL), it61_hi = rt_sub((rt_int)(p_P).len, ((rt_int)1LL));
for (rt_int it61 = it61_lo; it61 <= it61_hi; it61++) {
{
if (rt_b_eq(rt_b_slice(p_P, it61, it61), rt_str("@", 1)))
{
S_R7(&l_R_59, r_MK(rt_b_slice(p_P, l_START_58, rt_sub(it61, ((rt_int)1LL)))), 0);
switch (l_N_57) {
case 0:
{
S_R7(&l_R_59, r_MK(r_STR(p_A, (p_A).f_LEN)), 0);
}
break;
case 1:
{
S_R7(&l_R_59, r_MK(r_STR(p_B, (p_B).f_LEN)), 0);
}
break;
case 2:
{
S_R7(&l_R_59, r_MK(r_STR(p_C, (p_C).f_LEN)), 0);
}
break;
default:
{
S_R7(&l_R_59, r_MK(r_STR(p_D, (p_D).f_LEN)), 0);
}
break;
}
l_N_57 = rt_add(l_N_57, ((rt_int)1LL));
l_START_58 = rt_add(it61, ((rt_int)1LL));
}
}
} } L_end60: ;
S_R7(&l_R_59, r_MK(rt_b_slice(p_P, l_START_58, rt_sub((rt_int)(p_P).len, ((rt_int)1LL)))), 0);
{ R7 rv62 = ({ R7 rc63; memset(&rc63, 0, sizeof rc63);  rc63.f_AT = l_AT_56; rc63.f_LEN = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_TOP, l_AT_56); rc63.f_H = rt_neg(((rt_int)1LL)); rc63; });
return rv62; }
rt_raise(RT_X_INIT);
}
static R7 r_FMT1(rstr p_P, R7 p_A) { 
{ R7 rv64 = r_FMT4(p_P, p_A, p_A, p_A, p_A);
return rv64; }
rt_raise(RT_X_INIT);
}
static R7 r_FMT2(rstr p_P, R7 p_A, R7 p_B) { 
{ R7 rv65 = r_FMT4(p_P, p_A, p_B, p_B, p_B);
return rv65; }
rt_raise(RT_X_INIT);
}
static R7 r_FMT3(rstr p_P, R7 p_A, R7 p_B, R7 p_C) { 
{ R7 rv66 = r_FMT4(p_P, p_A, p_B, p_C, p_C);
return rv66; }
rt_raise(RT_X_INIT);
}
static R7 r_NUM(rt_int p_V) { 
{ R7 rv67 = r_MK(rt_b_image(p_V));
return rv67; }
rt_raise(RT_X_INIT);
}
static R7 r_NEW_NAME(rstr p_BASE) { 
((*(R22 *)rt_nil_check(g_W))).f_SERIAL = rt_add(((*(R22 *)rt_nil_check(g_W))).f_SERIAL, ((rt_int)1LL));
{ R7 rv68 = r_MK(rt_str_cat(p_BASE, rt_b_image(((*(R22 *)rt_nil_check(g_W))).f_SERIAL)));
return rv68; }
rt_raise(RT_X_INIT);
}
static void r_APPEND(R7 p_T, R8 *p_B) { 
R9 * l_C_69; memset(&l_C_69, 0, sizeof l_C_69);
l_C_69 = ((R9 *)rt_alloc(sizeof (R9)));
S_R7(&((*(R9 *)rt_nil_check(l_C_69))).f_T, p_T, 0);
((*(R9 *)rt_nil_check(l_C_69))).f_NEXT = NULL;
if ((((*p_B)).f_TAIL == NULL))
{
((*p_B)).f_HEAD = l_C_69;
}
else
{
((*(R9 *)rt_nil_check(((*p_B)).f_TAIL))).f_NEXT = l_C_69;
}
((*p_B)).f_TAIL = l_C_69;
}
static void r_EMIT(rt_int p_SEC, R7 p_T) { 
r_APPEND(p_T, &(((*(R22 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(p_SEC, (((*(R22 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
}
static void r_EMITS(rt_int p_SEC, rstr p_S) { 
r_APPEND(r_MK(p_S), &(((*(R22 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(p_SEC, (((*(R22 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
}
static void r_CODE(R7 p_T) { 
r_APPEND(p_T, &((*(R22 *)rt_nil_check(g_W))).f_CODE);
}
static void r_CODES(rstr p_S) { 
r_APPEND(r_MK(p_S), &((*(R22 *)rt_nil_check(g_W))).f_CODE);
}
static void r_PUT_BUF(R8 p_B) { 
R9 * l_C_70; memset(&l_C_70, 0, sizeof l_C_70);
l_C_70 = (p_B).f_HEAD;
for (;;) {
if ((l_C_70 == NULL)) goto L_end71;
{
{
R7 l_T_72; memset(&l_T_72, 0, sizeof l_T_72);
S_R7(&l_T_72, ((*(R9 *)rt_nil_check(l_C_70))).f_T, 0);
rt_putln(r_STR(l_T_72, (l_T_72).f_LEN));
}
l_C_70 = ((*(R9 *)rt_nil_check(l_C_70))).f_NEXT;
}
} L_end71: ;
}
static void r_WRITE_OUTPUT(void) { 
{ rt_int it74_lo = ((rt_int)0LL), it74_hi = g_O_LAST;
for (rt_int it74 = it74_lo; it74 <= it74_hi; it74++) {
{
r_PUT_BUF((((*(R22 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(it74, (((*(R22 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
}
} } L_end73: ;
}
static void r_FAIL(rt_int p_LINE, rstr p_MSG) { 
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("line ", 5), rt_b_image(p_LINE)), rt_str(": ", 2)), p_MSG));
rt_exit(((rt_int)1LL));
}
static void r_FAILT(rt_int p_LINE, rstr p_MSG, R7 p_T) { 
r_FAIL(p_LINE, rt_str_cat(p_MSG, r_STR(p_T, (p_T).f_LEN)));
}
static void r_READ_SOURCE(void) { 
rt_int l_C_75; memset(&l_C_75, 0, sizeof l_C_75);
l_C_75 = rt_b_get_code();
for (;;) {
if ((l_C_75 < ((rt_int)0LL))) goto L_end76;
{
if ((((*(R22 *)rt_nil_check(g_W))).f_NSRC >= g_MAX_SOURCE))
{
r_FAIL(((rt_int)0LL), rt_str("the source is too long", 22));
}
(((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R22 *)rt_nil_check(g_W))).f_NSRC, (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])] = l_C_75;
((*(R22 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R22 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
l_C_75 = rt_b_get_code();
}
} L_end76: ;
(((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R22 *)rt_nil_check(g_W))).f_NSRC, (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])] = ((rt_int)0LL);
}
static rt_int r_AT_SRC(rt_int p_I) { 
if ((p_I >= ((*(R22 *)rt_nil_check(g_W))).f_NSRC))
{
{ rt_int rv77 = ((rt_int)0LL);
return rv77; }
}
{ rt_int rv78 = (((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(p_I, (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])];
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
static R7 r_SOURCE_TEXT(rt_int p_FIRST, rt_int p_BEYOND) { 
rt_int l_AT_84; memset(&l_AT_84, 0, sizeof l_AT_84);
l_AT_84 = ((*(R22 *)rt_nil_check(g_W))).f_TOP;
rt_int l_L_85; memset(&l_L_85, 0, sizeof l_L_85);
l_L_85 = rt_sub(p_BEYOND, p_FIRST);
R7 l_T_86; memset(&l_T_86, 0, sizeof l_T_86);
if ((rt_add(l_AT_84, l_L_85) > g_ARENA_SIZE))
{
r_FAIL(((rt_int)0LL), rt_str("the arena is full", 17));
}
{ rt_int it88_lo = p_FIRST, it88_hi = rt_sub(p_BEYOND, ((rt_int)1LL));
for (rt_int it88 = it88_lo; it88 <= it88_hi; it88++) {
{
rt_b_slice_assign(&((*(R22 *)rt_nil_check(g_W))).f_ARENA, ((*(R22 *)rt_nil_check(g_W))).f_TOP, ((*(R22 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(it88, (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])]));
((*(R22 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R22 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
}
} } L_end87: ;
S_R7(&l_T_86, ({ R7 rc89; memset(&rc89, 0, sizeof rc89);  rc89.f_AT = l_AT_84; rc89.f_LEN = l_L_85; rc89.f_H = ((rt_int)0LL); rc89; }), 0);
if ((l_L_85 > ((rt_int)0LL)))
{
(l_T_86).f_H = r_HASH_CODES(l_L_85, (((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(p_FIRST, (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])], (((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(rt_add(p_FIRST, rt_quot(l_L_85, ((rt_int)2LL))), (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])], (((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(rt_sub(p_BEYOND, ((rt_int)1LL)), (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])]);
}
{ R7 rv90 = l_T_86;
return rv90; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_RESERVED(R7 p_T) { 
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
static void r_ADD_TOKEN(rt_int p_KIND, rt_int p_LINE, rt_int p_IV, R7 p_TX) { 
if ((((*(R22 *)rt_nil_check(g_W))).f_NTOKS >= g_MAX_TOKENS))
{
r_FAIL(p_LINE, rt_str("too many tokens", 15));
}
S_R10(&(((*(R22 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R22 *)rt_nil_check(g_W))).f_NTOKS, (((*(R22 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TOKS).hi[0])], ({ R10 rc97; memset(&rc97, 0, sizeof rc97);  rc97.f_KIND = p_KIND; rc97.f_LINE = p_LINE; rc97.f_IV = p_IV; S_R7(&rc97.f_TX, p_TX, 0); rc97; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_NTOKS = rt_add(((*(R22 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL));
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
if ((l_I_103 >= ((*(R22 *)rt_nil_check(g_W))).f_NSRC)) goto L_end108;
{
l_C_105 = (((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_103, (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])];
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
if ((((l_I_103 >= ((*(R22 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_103, (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)37LL))) || ((((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_103, (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)10LL)))) goto L_end109;
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
l_AT_110 = ((*(R22 *)rt_nil_check(g_W))).f_TOP;
l_I_103 = rt_add(l_I_103, ((rt_int)1LL));
for (;;) {
{
if (((l_I_103 >= ((*(R22 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_103, (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)10LL))))
{
r_FAIL(l_LINE_104, rt_str("a string must end on its line", 29));
}
if (((((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_103, (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)39LL)))
{
if ((!(r_AT_SRC(rt_add(l_I_103, ((rt_int)1LL))) == ((rt_int)39LL))))
{
l_I_103 = rt_add(l_I_103, ((rt_int)1LL));
goto L_end111;
}
l_I_103 = rt_add(l_I_103, ((rt_int)1LL));
}
rt_b_slice_assign(&((*(R22 *)rt_nil_check(g_W))).f_ARENA, ((*(R22 *)rt_nil_check(g_W))).f_TOP, ((*(R22 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_103, (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])]));
((*(R22 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R22 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
l_I_103 = rt_add(l_I_103, ((rt_int)1LL));
}
} L_end111: ;
r_ADD_TOKEN(g_K_STR, l_LINE_104, ((rt_int)0LL), ({ R7 rc112; memset(&rc112, 0, sizeof rc112);  rc112.f_AT = l_AT_110; rc112.f_LEN = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_TOP, l_AT_110); rc112.f_H = rt_neg(((rt_int)1LL)); rc112; }));
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
R7 l_T_116; memset(&l_T_116, 0, sizeof l_T_116);
S_R7(&l_T_116, r_SOURCE_TEXT(l_I_103, l_J_106), 0);
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
R7 l_T_123; memset(&l_T_123, 0, sizeof l_T_123);
S_R7(&l_T_123, r_SOURCE_TEXT(l_I_103, l_J_106), 0);
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
static R10 r_CUR(void) { 
{ R10 rv125 = (((*(R22 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R22 *)rt_nil_check(g_W))).f_POS, (((*(R22 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv125; }
rt_raise(RT_X_INIT);
}
static R10 r_AHEAD(rt_int p_K) { 
if ((rt_add(((*(R22 *)rt_nil_check(g_W))).f_POS, p_K) >= ((*(R22 *)rt_nil_check(g_W))).f_NTOKS))
{
{ R10 rv126 = (((*(R22 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_sub(((*(R22 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)), (((*(R22 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv126; }
}
{ R10 rv127 = (((*(R22 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R22 *)rt_nil_check(g_W))).f_POS, p_K), (((*(R22 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv127; }
rt_raise(RT_X_INIT);
}
static rt_int r_LINE_NOW(void) { 
{ rt_int rv128 = ((((*(R22 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R22 *)rt_nil_check(g_W))).f_POS, (((*(R22 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_LINE;
return rv128; }
rt_raise(RT_X_INIT);
}
static rt_int r_TOK_IS(R10 p_T, rstr p_S) { 
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
{ rt_int rv131 = r_TOK_IS((((*(R22 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R22 *)rt_nil_check(g_W))).f_POS, (((*(R22 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TOKS).hi[0])], p_S);
return rv131; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TARGET_DECL(void) { 
if (((!r_IS(rt_str("TARGET", 6))) || (((*(R22 *)rt_nil_check(g_W))).f_POS >= rt_sub(((*(R22 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)))))
{
{ rt_int rv132 = 0;
return rv132; }
}
{ rt_int rv133 = ((r_TOK_IS((((*(R22 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R22 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R22 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("PROCEDURE", 9)) || r_TOK_IS((((*(R22 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R22 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R22 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("FUNCTION", 8))) || r_TOK_IS((((*(R22 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R22 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R22 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("INLINE", 6)));
return rv133; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_KIND(rt_int p_K) { 
{ rt_int rv134 = (((((*(R22 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R22 *)rt_nil_check(g_W))).f_POS, (((*(R22 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_KIND == p_K);
return rv134; }
rt_raise(RT_X_INIT);
}
static void r_SKIP(void) { 
if ((((*(R22 *)rt_nil_check(g_W))).f_POS < rt_sub(((*(R22 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL))))
{
((*(R22 *)rt_nil_check(g_W))).f_POS = rt_add(((*(R22 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL));
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
R7 l_T_137; memset(&l_T_137, 0, sizeof l_T_137);
S_R7(&l_T_137, (r_CUR()).f_TX, 0);
r_FAIL(r_LINE_NOW(), rt_str_cat(rt_str_cat(p_S, rt_str(" expected, not ", 15)), r_STR(l_T_137, (l_T_137).f_LEN)));
}
}
}
static R7 r_IDENT(void) { 
R10 l_T_138; memset(&l_T_138, 0, sizeof l_T_138);
S_R10(&l_T_138, r_CUR(), 0);
if ((!((l_T_138).f_KIND == g_K_ID)))
{
r_FAILT((l_T_138).f_LINE, rt_str("an identifier expected, not ", 28), (l_T_138).f_TX);
}
r_SKIP();
{ R7 rv139 = (l_T_138).f_TX;
return rv139; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT_NAME(R7 p_NAME) { 
if ((!r_TEQ(r_IDENT(), p_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), p_NAME);
}
}
static R11 * r_NEW_NODE(rt_int p_KIND, rt_int p_LINE) { 
R11 * l_N_140; memset(&l_N_140, 0, sizeof l_N_140);
l_N_140 = ((R11 *)rt_alloc(sizeof (R11)));
S_R11(&(*(R11 *)rt_nil_check(l_N_140)), ({ R11 rc141; memset(&rc141, 0, sizeof rc141);  rc141.f_KIND = p_KIND; rc141.f_LINE = p_LINE; rc141.f_IV = ((rt_int)0LL); S_R7(&rc141.f_NAME, ({ R7 rc142; memset(&rc142, 0, sizeof rc142);  rc142.f_AT = ((rt_int)0LL); rc142.f_LEN = ((rt_int)0LL); rc142.f_H = ((rt_int)0LL); rc142; }), 0); rc141.f_A = NULL; rc141.f_B = NULL; rc141.f_C = NULL; rc141.f_D = NULL; rc141.f_E = NULL; rc141.f_NEXT = NULL; rc141.f_FL = ((rt_int)0LL); rc141; }), 0);
{ R11 * rv143 = l_N_140;
return rv143; }
rt_raise(RT_X_INIT);
}
static void r_ADD_LIST(R11 * p_N, R11 * *p_HEAD, R11 * *p_TAIL) { 
if (((*p_HEAD) == NULL))
{
(*p_HEAD) = p_N;
}
else
{
((*(R11 *)rt_nil_check((*p_TAIL)))).f_NEXT = p_N;
}
(*p_TAIL) = p_N;
}
static rt_int r_LIST_LENGTH(R11 * p_N) { 
rt_int l_K_144; memset(&l_K_144, 0, sizeof l_K_144);
l_K_144 = ((rt_int)0LL);
R11 * l_P_145; memset(&l_P_145, 0, sizeof l_P_145);
l_P_145 = p_N;
for (;;) {
if ((l_P_145 == NULL)) goto L_end146;
{
l_K_144 = rt_add(l_K_144, ((rt_int)1LL));
l_P_145 = ((*(R11 *)rt_nil_check(l_P_145))).f_NEXT;
}
} L_end146: ;
{ rt_int rv147 = l_K_144;
return rv147; }
rt_raise(RT_X_INIT);
}
static R11 * r_IDENT_NODE(void) { 
R11 * l_N_148; memset(&l_N_148, 0, sizeof l_N_148);
l_N_148 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_N_148))).f_NAME, r_IDENT(), 0);
{ R11 * rv149 = l_N_148;
return rv149; }
rt_raise(RT_X_INIT);
}
static R11 * r_IDENT_LIST(void) { 
R11 * l_HEAD_150; memset(&l_HEAD_150, 0, sizeof l_HEAD_150);
l_HEAD_150 = NULL;
R11 * l_TAIL_151; memset(&l_TAIL_151, 0, sizeof l_TAIL_151);
l_TAIL_151 = NULL;
for (;;) {
{
r_ADD_LIST(r_ROUTINE_NAME_NODE(), &l_HEAD_150, &l_TAIL_151);
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end152;
} L_end152: ;
{ R11 * rv153 = l_HEAD_150;
return rv153; }
rt_raise(RT_X_INIT);
}
static R11 * r_ROUTINE_NAME_NODE(void) { 
R11 * l_N_154; memset(&l_N_154, 0, sizeof l_N_154);
l_N_154 = r_IDENT_NODE();
if ((r_IS(rt_str("$", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_SKIP();
S_R7(&((*(R11 *)rt_nil_check(l_N_154))).f_NAME, r_MKN(rt_str_cat(rt_str_cat(r_STR(((*(R11 *)rt_nil_check(l_N_154))).f_NAME, (((*(R11 *)rt_nil_check(l_N_154))).f_NAME).f_LEN), rt_str("$", 1)), r_STR((r_CUR()).f_TX, ((r_CUR()).f_TX).f_LEN))), 0);
r_SKIP();
}
{ R11 * rv155 = l_N_154;
return rv155; }
rt_raise(RT_X_INIT);
}
static R11 * r_PAREN_IDENTS(void) { 
R11 * l_L_156; memset(&l_L_156, 0, sizeof l_L_156);
l_L_156 = NULL;
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str(")", 1))))
{
l_L_156 = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
{ R11 * rv157 = l_L_156;
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
static R11 * r_PARSE_COMPILATION(void) { 
R11 * l_HEAD_160; memset(&l_HEAD_160, 0, sizeof l_HEAD_160);
l_HEAD_160 = NULL;
R11 * l_TAIL_161; memset(&l_TAIL_161, 0, sizeof l_TAIL_161);
l_TAIL_161 = NULL;
for (;;) {
if (r_IS_KIND(g_K_EOF)) goto L_end162;
{
r_ADD_LIST(r_PARSE_SEGMENT(), &l_HEAD_160, &l_TAIL_161);
}
} L_end162: ;
{ R11 * rv163 = l_HEAD_160;
return rv163; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_ITEMS(void) { 
R11 * l_N_164; memset(&l_N_164, 0, sizeof l_N_164);
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
((*(R11 *)rt_nil_check(l_N_164))).f_A = r_IDENT_LIST();
}
if (r_ACCEPT(rt_str("#", 1)))
{
((*(R11 *)rt_nil_check(l_N_164))).f_B = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("ROUTINES", 8)))
{
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_N_164))).f_C = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("TYPES", 5)))
{
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_N_164))).f_D = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("MODULES", 7)))
{
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_N_164))).f_E = r_PAREN_IDENTS();
}
else
{
{
R7 l_T_166; memset(&l_T_166, 0, sizeof l_T_166);
S_R7(&l_T_166, (r_CUR()).f_TX, 0);
r_FAILT(r_LINE_NOW(), rt_str("DATA, ROUTINES, TYPES or MODULES expected, not ", 47), l_T_166);
}
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
} L_end165: ;
r_EXPECT(rt_str(")", 1));
{ R11 * rv167 = l_N_164;
return rv167; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_SEGMENT(void) { 
R11 * l_S_168; memset(&l_S_168, 0, sizeof l_S_168);
l_S_168 = r_NEW_NODE(g_N_SEGMENT, r_LINE_NOW());
R11 * l_HEAD_169; memset(&l_HEAD_169, 0, sizeof l_HEAD_169);
l_HEAD_169 = NULL;
R11 * l_TAIL_170; memset(&l_TAIL_170, 0, sizeof l_TAIL_170);
l_TAIL_170 = NULL;
if (r_ACCEPT(rt_str("MAIN", 4)))
{
((*(R11 *)rt_nil_check(l_S_168))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("SEGMENT", 7));
S_R7(&((*(R11 *)rt_nil_check(l_S_168))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("USES", 4)))
{
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R11 * l_U_172; memset(&l_U_172, 0, sizeof l_U_172);
l_U_172 = r_NEW_NODE(g_N_USE, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_U_172))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_U_172))).f_A = r_PARSE_ITEMS();
}
r_ADD_LIST(l_U_172, &l_HEAD_169, &l_TAIL_170);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end171;
} L_end171: ;
r_EXPECT(rt_str(")", 1));
((*(R11 *)rt_nil_check(l_S_168))).f_A = l_HEAD_169;
}
if (r_ACCEPT(rt_str("DEFINES", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R11 *)rt_nil_check(l_S_168))).f_FL = ((rt_int)1LL);
}
else
{
((*(R11 *)rt_nil_check(l_S_168))).f_C = r_PAREN_IDENTS();
}
}
r_EXPECT(rt_str(";", 1));
((*(R11 *)rt_nil_check(l_S_168))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SEGMENT", 7));
r_EXPECT_NAME(((*(R11 *)rt_nil_check(l_S_168))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R11 * rv173 = l_S_168;
return rv173; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_CLOSED_BODY(void) { 
R11 * l_B_174; memset(&l_B_174, 0, sizeof l_B_174);
l_B_174 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
R11 * l_HEAD_175; memset(&l_HEAD_175, 0, sizeof l_HEAD_175);
l_HEAD_175 = NULL;
R11 * l_TAIL_176; memset(&l_TAIL_176, 0, sizeof l_TAIL_176);
l_TAIL_176 = NULL;
((*(R11 *)rt_nil_check(l_B_174))).f_A = r_PARSE_DECLARATIONS();
((*(R11 *)rt_nil_check(l_B_174))).f_B = r_PARSE_STATEMENTS();
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
((*(R11 *)rt_nil_check(l_B_174))).f_C = l_HEAD_175;
{ R11 * rv178 = l_B_174;
return rv178; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_BODY(void) { 
R11 * l_B_179; memset(&l_B_179, 0, sizeof l_B_179);
l_B_179 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
((*(R11 *)rt_nil_check(l_B_179))).f_A = r_PARSE_DECLARATIONS();
((*(R11 *)rt_nil_check(l_B_179))).f_B = r_PARSE_STATEMENTS();
{ R11 * rv180 = l_B_179;
return rv180; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_MODULE(void) { 
R11 * l_M_181; memset(&l_M_181, 0, sizeof l_M_181);
l_M_181 = r_NEW_NODE(g_N_MODULE, r_LINE_NOW());
R11 * l_HEAD_182; memset(&l_HEAD_182, 0, sizeof l_HEAD_182);
l_HEAD_182 = NULL;
R11 * l_TAIL_183; memset(&l_TAIL_183, 0, sizeof l_TAIL_183);
l_TAIL_183 = NULL;
r_EXPECT(rt_str("MODULE", 6));
S_R7(&((*(R11 *)rt_nil_check(l_M_181))).f_NAME, r_IDENT(), 0);
for (;;) {
{
if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R11 *)rt_nil_check(l_M_181))).f_A = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("EXPORTS", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R11 *)rt_nil_check(l_M_181))).f_FL = ((rt_int)1LL);
}
else
{
{
rt_int l_PAREN_185; memset(&l_PAREN_185, 0, sizeof l_PAREN_185);
l_PAREN_185 = r_ACCEPT(rt_str("(", 1));
for (;;) {
{
{
R11 * l_X_187; memset(&l_X_187, 0, sizeof l_X_187);
l_X_187 = r_NEW_NODE(g_N_EXPORT, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_X_187))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("WITH", 4)))
{
((*(R11 *)rt_nil_check(l_X_187))).f_A = r_PAREN_IDENTS();
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
((*(R11 *)rt_nil_check(l_M_181))).f_B = l_HEAD_182;
}
}
else
{
goto L_end184;
}
}
} L_end184: ;
r_EXPECT(rt_str(";", 1));
((*(R11 *)rt_nil_check(l_M_181))).f_C = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("MODULE", 6));
r_EXPECT_NAME(((*(R11 *)rt_nil_check(l_M_181))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R11 * rv188 = l_M_181;
return rv188; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_DECLARATIONS(void) { 
R11 * l_HEAD_189; memset(&l_HEAD_189, 0, sizeof l_HEAD_189);
l_HEAD_189 = NULL;
R11 * l_TAIL_190; memset(&l_TAIL_190, 0, sizeof l_TAIL_190);
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
{ R11 * rv192 = l_HEAD_189;
return rv192; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_OBJECT_DECL(void) { 
R11 * l_D_193; memset(&l_D_193, 0, sizeof l_D_193);
l_D_193 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
if (r_ACCEPT(rt_str("CONST", 5)))
{
((*(R11 *)rt_nil_check(l_D_193))).f_KIND = g_N_CONST;
}
else
{
r_EXPECT(rt_str("VAR", 3));
}
((*(R11 *)rt_nil_check(l_D_193))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_D_193))).f_B = r_PARSE_TYPE_SPEC();
if (r_ACCEPT(rt_str(":=", 2)))
{
((*(R11 *)rt_nil_check(l_D_193))).f_C = r_PARSE_EXPR();
}
else if ((((*(R11 *)rt_nil_check(l_D_193))).f_KIND == g_N_CONST))
{
r_FAIL(((*(R11 *)rt_nil_check(l_D_193))).f_LINE, rt_str("a constant needs a value", 24));
}
r_EXPECT(rt_str(";", 1));
{ R11 * rv194 = l_D_193;
return rv194; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_FORMALS(void) { 
R11 * l_HEAD_195; memset(&l_HEAD_195, 0, sizeof l_HEAD_195);
l_HEAD_195 = NULL;
R11 * l_TAIL_196; memset(&l_TAIL_196, 0, sizeof l_TAIL_196);
l_TAIL_196 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R11 * l_F_198; memset(&l_F_198, 0, sizeof l_F_198);
l_F_198 = r_NEW_NODE(g_N_FORMAL, r_LINE_NOW());
if (r_ACCEPT(rt_str("TAG", 3)))
{
((*(R11 *)rt_nil_check(l_F_198))).f_IV = ((rt_int)1LL);
}
((*(R11 *)rt_nil_check(l_F_198))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
if ((!r_ACCEPT(rt_str("TYPE", 4))))
{
((*(R11 *)rt_nil_check(l_F_198))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_F_198, &l_HEAD_195, &l_TAIL_196);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end197;
} L_end197: ;
r_EXPECT(rt_str(")", 1));
{ R11 * rv199 = l_HEAD_195;
return rv199; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_TYPE_DECL(void) { 
R11 * l_D_200; memset(&l_D_200, 0, sizeof l_D_200);
l_D_200 = r_NEW_NODE(g_N_TYPE, r_LINE_NOW());
r_EXPECT(rt_str("TYPE", 4));
S_R7(&((*(R11 *)rt_nil_check(l_D_200))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_D_200))).f_A = r_PARSE_FORMALS();
}
r_EXPECT(rt_str("=", 1));
((*(R11 *)rt_nil_check(l_D_200))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(";", 1));
{ R11 * rv201 = l_D_200;
return rv201; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_REPTYPE_DECL(void) { 
R11 * l_D_202; memset(&l_D_202, 0, sizeof l_D_202);
l_D_202 = r_NEW_NODE(g_N_REPTYPE, r_LINE_NOW());
r_EXPECT(rt_str("REPTYPE", 7));
S_R7(&((*(R11 *)rt_nil_check(l_D_202))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_D_202))).f_A = r_PARSE_FORMALS();
}
if (r_ACCEPT(rt_str("OF", 2)))
{
((*(R11 *)rt_nil_check(l_D_202))).f_C = r_IDENT_NODE();
}
r_EXPECT(rt_str("=", 1));
((*(R11 *)rt_nil_check(l_D_202))).f_B = r_PARSE_REP();
r_EXPECT(rt_str(";", 1));
{ R11 * rv203 = l_D_202;
return rv203; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_REP(void) { 
R11 * l_R_204; memset(&l_R_204, 0, sizeof l_R_204);
l_R_204 = r_NEW_NODE(g_N_REP, r_LINE_NOW());
R11 * l_HEAD_205; memset(&l_HEAD_205, 0, sizeof l_HEAD_205);
l_HEAD_205 = NULL;
R11 * l_TAIL_206; memset(&l_TAIL_206, 0, sizeof l_TAIL_206);
l_TAIL_206 = NULL;
if (r_IS_KIND(g_K_GEN))
{
((*(R11 *)rt_nil_check(l_R_204))).f_KIND = g_TS_GEN;
S_R7(&((*(R11 *)rt_nil_check(l_R_204))).f_NAME, r_GEN_NAME(), 0);
{ R11 * rv207 = l_R_204;
return rv207; }
}
S_R7(&((*(R11 *)rt_nil_check(l_R_204))).f_NAME, r_IDENT(), 0);
if ((!r_IS(rt_str("(", 1))))
{
{ R11 * rv208 = l_R_204;
return rv208; }
}
if (r_TEQS(((*(R11 *)rt_nil_check(l_R_204))).f_NAME, rt_str("RECORD_REP", 10)))
{
r_SKIP_PARENS();
{ R11 * rv209 = l_R_204;
return rv209; }
}
r_SKIP();
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end210;
{
if (r_ACCEPT(rt_str("VALUES", 6)))
{
{
R11 * l_VH_211; memset(&l_VH_211, 0, sizeof l_VH_211);
l_VH_211 = NULL;
R11 * l_VT_212; memset(&l_VT_212, 0, sizeof l_VT_212);
l_VT_212 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R11 * l_V_214; memset(&l_V_214, 0, sizeof l_V_214);
l_V_214 = r_NEW_NODE(g_N_VALREP, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_V_214))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_EXPECT(rt_str("AS", 2));
((*(R11 *)rt_nil_check(l_V_214))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_V_214, &l_VH_211, &l_VT_212);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end213;
} L_end213: ;
r_EXPECT(rt_str(")", 1));
((*(R11 *)rt_nil_check(l_R_204))).f_B = l_VH_211;
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
((*(R11 *)rt_nil_check(l_R_204))).f_A = l_HEAD_205;
{ R11 * rv215 = l_R_204;
return rv215; }
rt_raise(RT_X_INIT);
}
static R7 r_GEN_NAME(void) { 
R7 l_T_216; memset(&l_T_216, 0, sizeof l_T_216);
S_R7(&l_T_216, (r_CUR()).f_TX, 0);
r_SKIP();
if (((l_T_216).f_LEN == ((rt_int)1LL)))
{
{ R7 rv217 = r_NO_TEXT();
return rv217; }
}
{ R7 rv218 = r_MKN(rt_b_slice(r_STR(l_T_216, (l_T_216).f_LEN), ((rt_int)1LL), rt_sub((l_T_216).f_LEN, ((rt_int)1LL))));
return rv218; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_TYPE_ARG(void) { 
R11 * l_N_219; memset(&l_N_219, 0, sizeof l_N_219);
if (r_IS_KIND(g_K_GEN))
{
{
R7 l_T_220; memset(&l_T_220, 0, sizeof l_T_220);
S_R7(&l_T_220, (r_CUR()).f_TX, 0);
if (((l_T_220).f_LEN == ((rt_int)1LL)))
{
r_SKIP();
{ R11 * rv221 = r_NEW_NODE(g_N_DONTCARE, r_LINE_NOW());
return rv221; }
}
}
l_N_219 = r_NEW_NODE(g_TS_GEN, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_N_219))).f_NAME, r_GEN_NAME(), 0);
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R11 *)rt_nil_check(l_N_219))).f_C = r_PARSE_REP();
}
{ R11 * rv222 = l_N_219;
return rv222; }
}
if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R11 * rv223 = r_NEW_NODE(g_N_ANY, r_LINE_NOW());
return rv223; }
}
if ((r_IS(rt_str("ARRAY", 5)) || r_IS(rt_str("RECORD", 6))))
{
{ R11 * rv224 = r_PARSE_TYPE_SPEC();
return rv224; }
}
if ((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM)))
{
{ R11 * rv225 = r_PARSE_TYPE_SPEC();
return rv225; }
}
l_N_219 = r_PARSE_EXPR();
if ((r_IS(rt_str("REP", 3)) || r_IS(rt_str("[", 1))))
{
{ R11 * rv226 = r_TYPE_SPEC_TAIL(r_EXPR_TO_TS(l_N_219));
return rv226; }
}
{ R11 * rv227 = l_N_219;
return rv227; }
rt_raise(RT_X_INIT);
}
static R11 * r_EXPR_TO_TS(R11 * p_E) { 
R11 * l_N_228; memset(&l_N_228, 0, sizeof l_N_228);
if ((((((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_TS_NAME) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_TS_ARRAY)) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_TS_RECORD)) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_TS_ENUM)) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN)))
{
{ R11 * rv229 = p_E;
return rv229; }
}
l_N_228 = r_NEW_NODE(g_TS_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME))
{
S_R7(&((*(R11 *)rt_nil_check(l_N_228))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
{ R11 * rv230 = l_N_228;
return rv230; }
}
if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
S_R7(&((*(R11 *)rt_nil_check(l_N_228))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R11 *)rt_nil_check(l_N_228))).f_A = ((*(R11 *)rt_nil_check(p_E))).f_A;
{ R11 * rv231 = l_N_228;
return rv231; }
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a type specification expected", 29));
rt_raise(RT_X_INIT);
}
static R11 * r_TYPE_SPEC_TAIL(R11 * p_N) { 
if ((r_IS(rt_str("[", 1)) || ((r_IS(rt_str("(", 1)) && r_RANGE_AHEAD()))))
{
((*(R11 *)rt_nil_check(p_N))).f_B = r_PARSE_RANGE();
}
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R11 *)rt_nil_check(p_N))).f_C = r_PARSE_REP();
}
{ R11 * rv232 = p_N;
return rv232; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_TYPE_SPEC(void) { 
R11 * l_N_233; memset(&l_N_233, 0, sizeof l_N_233);
R11 * l_HEAD_234; memset(&l_HEAD_234, 0, sizeof l_HEAD_234);
l_HEAD_234 = NULL;
R11 * l_TAIL_235; memset(&l_TAIL_235, 0, sizeof l_TAIL_235);
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
R11 * l_R_238; memset(&l_R_238, 0, sizeof l_R_238);
l_R_238 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
((*(R11 *)rt_nil_check(l_R_238))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_R_238))).f_B = r_PARSE_EXPR();
r_ADD_LIST(l_R_238, &l_HEAD_234, &l_TAIL_235);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end237;
} L_end237: ;
r_EXPECT(rt_str("]", 1));
((*(R11 *)rt_nil_check(l_N_233))).f_A = l_HEAD_234;
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R11 *)rt_nil_check(l_N_233))).f_D = r_PARSE_REP();
}
r_EXPECT(rt_str("OF", 2));
((*(R11 *)rt_nil_check(l_N_233))).f_C = r_PARSE_TYPE_SPEC();
{ R11 * rv239 = l_N_233;
return rv239; }
}
if (r_ACCEPT(rt_str("RECORD", 6)))
{
l_N_233 = r_NEW_NODE(g_TS_RECORD, l_LINE_236);
((*(R11 *)rt_nil_check(l_N_233))).f_A = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("RECORD", 6));
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R11 *)rt_nil_check(l_N_233))).f_D = r_PARSE_REP();
}
{ R11 * rv240 = l_N_233;
return rv240; }
}
if (r_IS_KIND(g_K_GEN))
{
{ R11 * rv241 = r_PARSE_TYPE_ARG();
return rv241; }
}
if (r_IS(rt_str("(", 1)))
{
l_N_233 = r_NEW_NODE(g_TS_ENUM, l_LINE_236);
((*(R11 *)rt_nil_check(l_N_233))).f_A = r_PARSE_LITERALS();
{ R11 * rv242 = r_TYPE_SPEC_TAIL(l_N_233);
return rv242; }
}
l_N_233 = r_NEW_NODE(g_TS_NAME, l_LINE_236);
S_R7(&((*(R11 *)rt_nil_check(l_N_233))).f_NAME, r_IDENT(), 0);
if ((r_TEQS(((*(R11 *)rt_nil_check(l_N_233))).f_NAME, rt_str("ENUM", 4)) || r_TEQS(((*(R11 *)rt_nil_check(l_N_233))).f_NAME, rt_str("UNORDERED", 9))))
{
if (r_TEQS(((*(R11 *)rt_nil_check(l_N_233))).f_NAME, rt_str("UNORDERED", 9)))
{
((*(R11 *)rt_nil_check(l_N_233))).f_IV = ((rt_int)1LL);
}
((*(R11 *)rt_nil_check(l_N_233))).f_KIND = g_TS_ENUM;
((*(R11 *)rt_nil_check(l_N_233))).f_A = r_PARSE_LITERALS();
{ R11 * rv243 = r_TYPE_SPEC_TAIL(l_N_233);
return rv243; }
}
if ((r_IS(rt_str("(", 1)) && (!r_RANGE_AHEAD())))
{
r_SKIP();
for (;;) {
{
if (r_TEQS(((*(R11 *)rt_nil_check(l_N_233))).f_NAME, rt_str("PTR", 3)))
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
((*(R11 *)rt_nil_check(l_N_233))).f_A = l_HEAD_234;
}
{ R11 * rv245 = r_TYPE_SPEC_TAIL(l_N_233);
return rv245; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_LITERALS(void) { 
R11 * l_HEAD_246; memset(&l_HEAD_246, 0, sizeof l_HEAD_246);
l_HEAD_246 = NULL;
R11 * l_TAIL_247; memset(&l_TAIL_247, 0, sizeof l_TAIL_247);
l_TAIL_247 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R11 * l_L_249; memset(&l_L_249, 0, sizeof l_L_249);
l_L_249 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
if ((!((r_IS_KIND(g_K_ENUM) || r_IS_KIND(g_K_ID)))))
{
r_FAIL(r_LINE_NOW(), rt_str("an enumerated literal expected", 30));
}
S_R7(&((*(R11 *)rt_nil_check(l_L_249))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_ADD_LIST(l_L_249, &l_HEAD_246, &l_TAIL_247);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end248;
} L_end248: ;
r_EXPECT(rt_str(")", 1));
{ R11 * rv250 = l_HEAD_246;
return rv250; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_FIELDS(void) { 
R11 * l_HEAD_251; memset(&l_HEAD_251, 0, sizeof l_HEAD_251);
l_HEAD_251 = NULL;
R11 * l_TAIL_252; memset(&l_TAIL_252, 0, sizeof l_TAIL_252);
l_TAIL_252 = NULL;
for (;;) {
{
if (r_IS(rt_str("VAR", 3)))
{
{
R11 * l_F_254; memset(&l_F_254, 0, sizeof l_F_254);
l_F_254 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
r_SKIP();
((*(R11 *)rt_nil_check(l_F_254))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_F_254))).f_B = r_PARSE_TYPE_SPEC();
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
R11 * l_V_255; memset(&l_V_255, 0, sizeof l_V_255);
l_V_255 = r_NEW_NODE(g_N_VARIANT, r_LINE_NOW());
R11 * l_VH_256; memset(&l_VH_256, 0, sizeof l_VH_256);
l_VH_256 = NULL;
R11 * l_VT_257; memset(&l_VT_257, 0, sizeof l_VT_257);
l_VT_257 = NULL;
r_SKIP();
S_R7(&((*(R11 *)rt_nil_check(l_V_255))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end258;
{
{
R11 * l_S_259; memset(&l_S_259, 0, sizeof l_S_259);
l_S_259 = r_NEW_NODE(g_N_VARSPEC, r_LINE_NOW());
R11 * l_LH_260; memset(&l_LH_260, 0, sizeof l_LH_260);
l_LH_260 = NULL;
R11 * l_LT_261; memset(&l_LT_261, 0, sizeof l_LT_261);
l_LT_261 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_260, &l_LT_261);
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end262;
} L_end262: ;
r_EXPECT(rt_str("-->", 3));
((*(R11 *)rt_nil_check(l_S_259))).f_A = l_LH_260;
((*(R11 *)rt_nil_check(l_S_259))).f_B = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_S_259, &l_VH_256, &l_VT_257);
}
}
} L_end258: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
r_EXPECT(rt_str(";", 1));
((*(R11 *)rt_nil_check(l_V_255))).f_A = l_VH_256;
r_ADD_LIST(l_V_255, &l_HEAD_251, &l_TAIL_252);
}
}
else
{
goto L_end253;
}
}
} L_end253: ;
{ R11 * rv263 = l_HEAD_251;
return rv263; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_RANGE(void) { 
R11 * l_R_264; memset(&l_R_264, 0, sizeof l_R_264);
l_R_264 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_R_264))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("[", 1));
}
((*(R11 *)rt_nil_check(l_R_264))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_R_264))).f_B = r_PARSE_EXPR();
if (r_ACCEPT(rt_str(")", 1)))
{
((*(R11 *)rt_nil_check(l_R_264))).f_IV = rt_add(((*(R11 *)rt_nil_check(l_R_264))).f_IV, ((rt_int)2LL));
}
else
{
r_EXPECT(rt_str("]", 1));
}
{ R11 * rv265 = l_R_264;
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
R10 l_T_269; memset(&l_T_269, 0, sizeof l_T_269);
S_R10(&l_T_269, r_AHEAD(l_K_267), 0);
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
static R11 * r_PARSE_PARAMS(void) { 
R11 * l_HEAD_273; memset(&l_HEAD_273, 0, sizeof l_HEAD_273);
l_HEAD_273 = NULL;
R11 * l_TAIL_274; memset(&l_TAIL_274, 0, sizeof l_TAIL_274);
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
R11 * l_NAMES_277; memset(&l_NAMES_277, 0, sizeof l_NAMES_277);
l_NAMES_277 = r_IDENT_LIST();
R11 * l_TS_278; memset(&l_TS_278, 0, sizeof l_TS_278);
l_TS_278 = NULL;
R11 * l_P_279; memset(&l_P_279, 0, sizeof l_P_279);
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
R11 * l_PN_281; memset(&l_PN_281, 0, sizeof l_PN_281);
l_PN_281 = r_NEW_NODE(g_N_PARAM, ((*(R11 *)rt_nil_check(l_P_279))).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_PN_281))).f_NAME, ((*(R11 *)rt_nil_check(l_P_279))).f_NAME, 0);
((*(R11 *)rt_nil_check(l_PN_281))).f_IV = l_MODE_275;
((*(R11 *)rt_nil_check(l_PN_281))).f_B = l_TS_278;
r_ADD_LIST(l_PN_281, &l_HEAD_273, &l_TAIL_274);
}
l_P_279 = ((*(R11 *)rt_nil_check(l_P_279))).f_NEXT;
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
{ R11 * rv282 = l_HEAD_273;
return rv282; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_TEMPLATE(rt_int p_FUNC) { 
R11 * l_R_283; memset(&l_R_283, 0, sizeof l_R_283);
l_R_283 = r_NEW_NODE(g_TS_ROUTINE, r_LINE_NOW());
R11 * l_HEAD_284; memset(&l_HEAD_284, 0, sizeof l_HEAD_284);
l_HEAD_284 = NULL;
R11 * l_TAIL_285; memset(&l_TAIL_285, 0, sizeof l_TAIL_285);
l_TAIL_285 = NULL;
rt_int l_MODE_286; memset(&l_MODE_286, 0, sizeof l_MODE_286);
l_MODE_286 = g_M_IN;
if (p_FUNC)
{
((*(R11 *)rt_nil_check(l_R_283))).f_IV = ((rt_int)1LL);
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
R11 * l_P_288; memset(&l_P_288, 0, sizeof l_P_288);
l_P_288 = r_NEW_NODE(g_N_PARAM, r_LINE_NOW());
((*(R11 *)rt_nil_check(l_P_288))).f_IV = l_MODE_286;
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else
{
((*(R11 *)rt_nil_check(l_P_288))).f_B = r_PARSE_TYPE_SPEC();
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
((*(R11 *)rt_nil_check(l_R_283))).f_A = l_HEAD_284;
if (r_ACCEPT(rt_str("RETURNS", 7)))
{
((*(R11 *)rt_nil_check(l_R_283))).f_IV = ((rt_int)1LL);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_R_283))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R11 *)rt_nil_check(l_R_283))).f_B = r_PARSE_TYPE_SPEC();
}
}
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R11 *)rt_nil_check(l_R_283))).f_D = r_PAREN_IDENTS();
}
{ R11 * rv289 = l_R_283;
return rv289; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_ROUTINE_SPEC(void) { 
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
{ R11 * rv290 = r_PARSE_TEMPLATE(1);
return rv290; }
}
r_EXPECT(rt_str("PROCEDURE", 9));
{ R11 * rv291 = r_PARSE_TEMPLATE(0);
return rv291; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_WHERE(void) { 
R11 * l_HEAD_292; memset(&l_HEAD_292, 0, sizeof l_HEAD_292);
l_HEAD_292 = NULL;
R11 * l_TAIL_293; memset(&l_TAIL_293, 0, sizeof l_TAIL_293);
l_TAIL_293 = NULL;
for (;;) {
{
{
R11 * l_N_295; memset(&l_N_295, 0, sizeof l_N_295);
l_N_295 = r_NEW_NODE(g_N_NEEDS, r_LINE_NOW());
R11 * l_TH_296; memset(&l_TH_296, 0, sizeof l_TH_296);
l_TH_296 = NULL;
R11 * l_TT_297; memset(&l_TT_297, 0, sizeof l_TT_297);
l_TT_297 = NULL;
S_R7(&((*(R11 *)rt_nil_check(l_N_295))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("NEEDS", 5));
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R11 * l_T_299; memset(&l_T_299, 0, sizeof l_T_299);
l_T_299 = r_NEW_NODE(g_N_TEMPLATE, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_T_299))).f_NAME, ((*(R11 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
((*(R11 *)rt_nil_check(l_T_299))).f_B = r_PARSE_TEMPLATE(0);
r_ADD_LIST(l_T_299, &l_TH_296, &l_TT_297);
}
if (r_ACCEPT(rt_str(";", 1)))
{
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end298;
} L_end298: ;
r_EXPECT(rt_str(")", 1));
((*(R11 *)rt_nil_check(l_N_295))).f_A = l_TH_296;
r_ADD_LIST(l_N_295, &l_HEAD_292, &l_TAIL_293);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end294;
} L_end294: ;
{ R11 * rv300 = l_HEAD_292;
return rv300; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_ROUTINE(void) { 
R11 * l_R_301; memset(&l_R_301, 0, sizeof l_R_301);
l_R_301 = r_NEW_NODE(g_N_ROUTINE, r_LINE_NOW());
R11 * l_H_302; memset(&l_H_302, 0, sizeof l_H_302);
l_H_302 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
if (r_IS_TARGET_DECL())
{
r_SKIP();
((*(R11 *)rt_nil_check(l_R_301))).f_FL = ((rt_int)2LL);
}
if (r_ACCEPT(rt_str("INLINE", 6)))
{
((*(R11 *)rt_nil_check(l_R_301))).f_FL = rt_add(((*(R11 *)rt_nil_check(l_R_301))).f_FL, ((rt_int)1LL));
}
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
((*(R11 *)rt_nil_check(l_R_301))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
S_R7(&((*(R11 *)rt_nil_check(l_R_301))).f_NAME, ((*(R11 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (r_IS(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_R_301))).f_A = r_PARSE_PARAMS();
}
if ((((*(R11 *)rt_nil_check(l_R_301))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("RETURNS", 7));
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_R_301))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R11 *)rt_nil_check(l_R_301))).f_B = r_PARSE_TYPE_SPEC();
}
}
for (;;) {
{
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R11 *)rt_nil_check(l_H_302))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R11 *)rt_nil_check(l_R_301))).f_E = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("WHERE", 5)))
{
((*(R11 *)rt_nil_check(l_H_302))).f_B = r_PARSE_WHERE();
}
else
{
goto L_end303;
}
}
} L_end303: ;
((*(R11 *)rt_nil_check(l_R_301))).f_D = l_H_302;
r_EXPECT(rt_str(";", 1));
if ((((*(R11 *)rt_nil_check(l_R_301))).f_FL >= ((rt_int)2LL)))
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
((*(R11 *)rt_nil_check(l_R_301))).f_C = r_PARSE_CLOSED_BODY();
}
r_EXPECT(rt_str("END", 3));
if ((((*(R11 *)rt_nil_check(l_R_301))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("FUNCTION", 8));
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
if ((!r_TEQ(((*(R11 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, ((*(R11 *)rt_nil_check(l_R_301))).f_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), ((*(R11 *)rt_nil_check(l_R_301))).f_NAME);
}
r_EXPECT(rt_str(";", 1));
{ R11 * rv305 = l_R_301;
return rv305; }
rt_raise(RT_X_INIT);
}
static R11 * r_BIN_NODE(R7 p_OP, rt_int p_LINE, R11 * p_A, R11 * p_B) { 
R11 * l_N_306; memset(&l_N_306, 0, sizeof l_N_306);
l_N_306 = r_NEW_NODE(g_N_BINOP, p_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_N_306))).f_NAME, p_OP, 0);
((*(R11 *)rt_nil_check(l_N_306))).f_A = p_A;
((*(R11 *)rt_nil_check(l_N_306))).f_B = p_B;
{ R11 * rv307 = l_N_306;
return rv307; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_EXPR(void) { 
R11 * l_E_308; memset(&l_E_308, 0, sizeof l_E_308);
l_E_308 = r_PARSE_SIMPLE();
if ((((r_IS(rt_str("ROUNDED", 7)) || r_IS(rt_str("TRUNCATED", 9))) || r_IS(rt_str("NATIVE_R", 8))) || r_IS(rt_str("NATIVE_T", 8))))
{
{
R11 * l_Q_309; memset(&l_Q_309, 0, sizeof l_Q_309);
l_Q_309 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_Q_309))).f_NAME, r_IDENT(), 0);
((*(R11 *)rt_nil_check(l_Q_309))).f_A = l_E_308;
l_E_308 = l_Q_309;
}
}
if ((r_IS(rt_str("WITH", 4)) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PREC", 4))))
{
{
R11 * l_Q_310; memset(&l_Q_310, 0, sizeof l_Q_310);
l_Q_310 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
r_SKIP();
r_SKIP();
if ((((*(R11 *)rt_nil_check(l_E_308))).f_KIND == g_N_QUAL))
{
l_Q_310 = l_E_308;
}
else
{
((*(R11 *)rt_nil_check(l_Q_310))).f_A = l_E_308;
}
((*(R11 *)rt_nil_check(l_Q_310))).f_B = r_PARSE_SIMPLE();
l_E_308 = l_Q_310;
}
}
{ R11 * rv311 = l_E_308;
return rv311; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_SIMPLE(void) { 
R11 * l_LEFT_312; memset(&l_LEFT_312, 0, sizeof l_LEFT_312);
l_LEFT_312 = r_PARSE_CONJ();
for (;;) {
if ((!((((r_IS(rt_str("OR", 2)) || r_IS(rt_str("!", 1))) || r_IS(rt_str("XOR", 3))) || r_IS(rt_str("->", 2)))))) goto L_end313;
{
{
R10 l_T_314; memset(&l_T_314, 0, sizeof l_T_314);
S_R10(&l_T_314, r_CUR(), 0);
r_SKIP();
l_LEFT_312 = r_BIN_NODE((l_T_314).f_TX, (l_T_314).f_LINE, l_LEFT_312, r_PARSE_CONJ());
}
}
} L_end313: ;
{ R11 * rv315 = l_LEFT_312;
return rv315; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_CONJ(void) { 
R11 * l_LEFT_316; memset(&l_LEFT_316, 0, sizeof l_LEFT_316);
l_LEFT_316 = r_PARSE_RELATION();
for (;;) {
if ((!((r_IS(rt_str("AND", 3)) || r_IS(rt_str("&", 1)))))) goto L_end317;
{
{
R10 l_T_318; memset(&l_T_318, 0, sizeof l_T_318);
S_R10(&l_T_318, r_CUR(), 0);
r_SKIP();
l_LEFT_316 = r_BIN_NODE((l_T_318).f_TX, (l_T_318).f_LINE, l_LEFT_316, r_PARSE_RELATION());
}
}
} L_end317: ;
{ R11 * rv319 = l_LEFT_316;
return rv319; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_RELATION(void) { 
R11 * l_LEFT_320; memset(&l_LEFT_320, 0, sizeof l_LEFT_320);
l_LEFT_320 = r_PARSE_SUM();
for (;;) {
{
{
R10 l_T_322; memset(&l_T_322, 0, sizeof l_T_322);
S_R10(&l_T_322, r_CUR(), 0);
if ((((((r_IS(rt_str("=", 1)) || r_IS(rt_str("<", 1))) || r_IS(rt_str(">", 1))) || r_IS(rt_str("<=", 2))) || r_IS(rt_str(">=", 2))) || r_IS(rt_str("<>", 2))))
{
r_SKIP();
l_LEFT_320 = r_BIN_NODE((l_T_322).f_TX, (l_T_322).f_LINE, l_LEFT_320, r_PARSE_SUM());
}
else if (r_IS(rt_str("IN", 2)))
{
{
R11 * l_N_323; memset(&l_N_323, 0, sizeof l_N_323);
l_N_323 = r_NEW_NODE(g_N_IN, (l_T_322).f_LINE);
r_SKIP();
((*(R11 *)rt_nil_check(l_N_323))).f_A = l_LEFT_320;
((*(R11 *)rt_nil_check(l_N_323))).f_B = r_PARSE_RANGE();
l_LEFT_320 = l_N_323;
}
}
else
{
{ R11 * rv324 = l_LEFT_320;
return rv324; }
}
}
}
} L_end321: ;
rt_raise(RT_X_INIT);
}
static R11 * r_TRY_SCALED(R11 * p_LEFT, rstr p_OPS) { 
rt_int l_SAVED_325; memset(&l_SAVED_325, 0, sizeof l_SAVED_325);
l_SAVED_325 = ((*(R22 *)rt_nil_check(g_W))).f_POS;
rt_int l_LINE_326; memset(&l_LINE_326, 0, sizeof l_LINE_326);
l_LINE_326 = r_LINE_NOW();
R11 * l_N_327; memset(&l_N_327, 0, sizeof l_N_327);
if ((!r_IS(rt_str("!", 1))))
{
{ R11 * rv328 = NULL;
return rv328; }
}
{
R10 l_OP_329; memset(&l_OP_329, 0, sizeof l_OP_329);
S_R10(&l_OP_329, r_AHEAD(((rt_int)1LL)), 0);
R7 l_T_330; memset(&l_T_330, 0, sizeof l_T_330);
S_R7(&l_T_330, (l_OP_329).f_TX, 0);
rt_int l_FOUND_331; memset(&l_FOUND_331, 0, sizeof l_FOUND_331);
l_FOUND_331 = 0;
if (((!((l_OP_329).f_KIND == g_K_SYM)) && (!((l_OP_329).f_KIND == g_K_RES))))
{
{ R11 * rv332 = NULL;
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
{ R11 * rv335 = NULL;
return rv335; }
}
r_SKIP();
r_SKIP();
l_N_327 = r_BIN_NODE(l_T_330, l_LINE_326, p_LEFT, NULL);
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R11 *)rt_nil_check(l_N_327))).f_FL = ((rt_int)2LL);
{ R11 * rv336 = l_N_327;
return rv336; }
}
if (((((r_IS_KIND(g_K_NUM) || r_IS_KIND(g_K_ID)) || r_IS(rt_str("(", 1))) || r_IS(rt_str("-", 1))) || r_IS(rt_str("+", 1))))
{
((*(R11 *)rt_nil_check(l_N_327))).f_D = r_PARSE_SECONDARY();
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R11 *)rt_nil_check(l_N_327))).f_FL = ((rt_int)1LL);
{ R11 * rv337 = l_N_327;
return rv337; }
}
}
((*(R22 *)rt_nil_check(g_W))).f_POS = l_SAVED_325;
{ R11 * rv338 = NULL;
return rv338; }
}
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_SUM(void) { 
R11 * l_LEFT_339; memset(&l_LEFT_339, 0, sizeof l_LEFT_339);
l_LEFT_339 = r_PARSE_TERM();
for (;;) {
{
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("!!", 2))))
{
{
R10 l_T_341; memset(&l_T_341, 0, sizeof l_T_341);
S_R10(&l_T_341, r_CUR(), 0);
r_SKIP();
l_LEFT_339 = r_BIN_NODE((l_T_341).f_TX, (l_T_341).f_LINE, l_LEFT_339, r_PARSE_TERM());
}
}
else
{
{
R11 * l_N_342; memset(&l_N_342, 0, sizeof l_N_342);
l_N_342 = r_TRY_SCALED(l_LEFT_339, rt_str("+ -", 3));
if ((l_N_342 == NULL))
{
{ R11 * rv343 = l_LEFT_339;
return rv343; }
}
((*(R11 *)rt_nil_check(l_N_342))).f_B = r_PARSE_TERM();
l_LEFT_339 = l_N_342;
}
}
}
} L_end340: ;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_TERM(void) { 
R11 * l_LEFT_344; memset(&l_LEFT_344, 0, sizeof l_LEFT_344);
l_LEFT_344 = r_PARSE_FACTOR();
for (;;) {
{
if ((((r_IS(rt_str("*", 1)) || r_IS(rt_str("/", 1))) || r_IS(rt_str("//", 2))) || r_IS(rt_str("MOD", 3))))
{
{
R10 l_T_346; memset(&l_T_346, 0, sizeof l_T_346);
S_R10(&l_T_346, r_CUR(), 0);
r_SKIP();
l_LEFT_344 = r_BIN_NODE((l_T_346).f_TX, (l_T_346).f_LINE, l_LEFT_344, r_PARSE_FACTOR());
}
}
else
{
{
R11 * l_N_347; memset(&l_N_347, 0, sizeof l_N_347);
l_N_347 = r_TRY_SCALED(l_LEFT_344, rt_str("* / // MOD", 10));
if ((l_N_347 == NULL))
{
{ R11 * rv348 = l_LEFT_344;
return rv348; }
}
((*(R11 *)rt_nil_check(l_N_347))).f_B = r_PARSE_FACTOR();
l_LEFT_344 = l_N_347;
}
}
}
} L_end345: ;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_FACTOR(void) { 
R11 * l_LEFT_349; memset(&l_LEFT_349, 0, sizeof l_LEFT_349);
l_LEFT_349 = r_PARSE_SECONDARY();
for (;;) {
{
if (r_IS(rt_str("**", 2)))
{
{
R10 l_T_351; memset(&l_T_351, 0, sizeof l_T_351);
S_R10(&l_T_351, r_CUR(), 0);
r_SKIP();
l_LEFT_349 = r_BIN_NODE((l_T_351).f_TX, (l_T_351).f_LINE, l_LEFT_349, r_PARSE_SECONDARY());
}
}
else
{
{
R11 * l_N_352; memset(&l_N_352, 0, sizeof l_N_352);
l_N_352 = r_TRY_SCALED(l_LEFT_349, rt_str("**", 2));
if ((l_N_352 == NULL))
{
{ R11 * rv353 = l_LEFT_349;
return rv353; }
}
((*(R11 *)rt_nil_check(l_N_352))).f_B = r_PARSE_SECONDARY();
l_LEFT_349 = l_N_352;
}
}
}
} L_end350: ;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_SECONDARY(void) { 
R10 l_T_354; memset(&l_T_354, 0, sizeof l_T_354);
S_R10(&l_T_354, r_CUR(), 0);
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("NOT", 3))))
{
{
R11 * l_N_355; memset(&l_N_355, 0, sizeof l_N_355);
l_N_355 = r_NEW_NODE(g_N_UNOP, (l_T_354).f_LINE);
r_SKIP();
S_R7(&((*(R11 *)rt_nil_check(l_N_355))).f_NAME, (l_T_354).f_TX, 0);
((*(R11 *)rt_nil_check(l_N_355))).f_A = r_PARSE_POSTFIX();
{ R11 * rv356 = l_N_355;
return rv356; }
}
}
{ R11 * rv357 = r_PARSE_POSTFIX();
return rv357; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_ARGS(R11 * p_N) { 
R11 * l_HEAD_358; memset(&l_HEAD_358, 0, sizeof l_HEAD_358);
l_HEAD_358 = NULL;
R11 * l_TAIL_359; memset(&l_TAIL_359, 0, sizeof l_TAIL_359);
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
((*(R11 *)rt_nil_check(p_N))).f_A = l_HEAD_358;
}
break;
case 1:
{
((*(R11 *)rt_nil_check(p_N))).f_B = l_HEAD_358;
}
break;
default:
{
r_FAIL(((*(R11 *)rt_nil_check(p_N))).f_LINE, rt_str("too many # in an argument list", 30));
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
((*(R11 *)rt_nil_check(p_N))).f_A = l_HEAD_358;
}
break;
case 1:
{
((*(R11 *)rt_nil_check(p_N))).f_B = l_HEAD_358;
}
break;
default:
{
((*(R11 *)rt_nil_check(p_N))).f_C = l_HEAD_358;
}
break;
}
{ R11 * rv362 = p_N;
return rv362; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_POSTFIX(void) { 
R11 * l_E_363; memset(&l_E_363, 0, sizeof l_E_363);
l_E_363 = r_PARSE_ATOM();
R11 * l_N_364; memset(&l_N_364, 0, sizeof l_N_364);
for (;;) {
{
{
rt_int l_LINE_366; memset(&l_LINE_366, 0, sizeof l_LINE_366);
l_LINE_366 = r_LINE_NOW();
if ((r_IS(rt_str("(", 1)) && (((*(R11 *)rt_nil_check(l_E_363))).f_KIND == g_N_NAME)))
{
((*(R11 *)rt_nil_check(l_E_363))).f_KIND = g_N_APPLY;
l_E_363 = r_PARSE_ARGS(l_E_363);
}
else if (r_IS(rt_str("(", 1)))
{
l_N_364 = r_NEW_NODE(g_N_INDEX, l_LINE_366);
l_N_364 = r_PARSE_ARGS(l_N_364);
((*(R11 *)rt_nil_check(l_N_364))).f_B = ((*(R11 *)rt_nil_check(l_N_364))).f_A;
((*(R11 *)rt_nil_check(l_N_364))).f_A = l_E_363;
l_E_363 = l_N_364;
}
else if (r_ACCEPT(rt_str(".", 1)))
{
l_N_364 = r_NEW_NODE(g_N_FIELD, l_LINE_366);
((*(R11 *)rt_nil_check(l_N_364))).f_A = l_E_363;
S_R7(&((*(R11 *)rt_nil_check(l_N_364))).f_NAME, r_IDENT(), 0);
l_E_363 = l_N_364;
}
else if (r_ACCEPT(rt_str("@", 1)))
{
l_N_364 = r_NEW_NODE(g_N_DEREF, l_LINE_366);
((*(R11 *)rt_nil_check(l_N_364))).f_A = l_E_363;
l_E_363 = l_N_364;
}
else if ((r_IS(rt_str("[", 1)) && (!r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("]", 1)))))
{
r_SKIP();
l_N_364 = r_NEW_NODE(g_N_SUBSTR, l_LINE_366);
((*(R11 *)rt_nil_check(l_N_364))).f_A = l_E_363;
((*(R11 *)rt_nil_check(l_N_364))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_N_364))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str("]", 1));
l_E_363 = l_N_364;
}
else
{
{ R11 * rv367 = l_E_363;
return rv367; }
}
}
}
} L_end365: ;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_BITS(rt_int p_BITS_PER, rt_int p_LINE) { 
rt_int l_AT_368; memset(&l_AT_368, 0, sizeof l_AT_368);
l_AT_368 = ((*(R22 *)rt_nil_check(g_W))).f_TOP;
R11 * l_N_369; memset(&l_N_369, 0, sizeof l_N_369);
l_N_369 = r_NEW_NODE(g_N_BITS, p_LINE);
R7 l_R_370; memset(&l_R_370, 0, sizeof l_R_370);
if ((!r_IS_KIND(g_K_STR)))
{
r_FAIL(p_LINE, rt_str("a quoted bitstring expected", 27));
}
for (;;) {
if ((!r_IS_KIND(g_K_STR))) goto L_end371;
{
{
R7 l_T_372; memset(&l_T_372, 0, sizeof l_T_372);
S_R7(&l_T_372, (r_CUR()).f_TX, 0);
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
S_R7(&l_R_370, r_MK(rt_str("1", 1)), 0);
}
else
{
S_R7(&l_R_370, r_MK(rt_str("0", 1)), 0);
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
S_R7(&((*(R11 *)rt_nil_check(l_N_369))).f_NAME, ({ R7 rc383; memset(&rc383, 0, sizeof rc383);  rc383.f_AT = l_AT_368; rc383.f_LEN = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_TOP, l_AT_368); rc383.f_H = rt_neg(((rt_int)1LL)); rc383; }), 0);
{ R11 * rv384 = l_N_369;
return rv384; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_ATOM(void) { 
R10 l_T_385; memset(&l_T_385, 0, sizeof l_T_385);
S_R10(&l_T_385, r_CUR(), 0);
R11 * l_N_386; memset(&l_N_386, 0, sizeof l_N_386);
if (((l_T_385).f_KIND == g_K_NUM))
{
l_N_386 = r_NEW_NODE(g_N_INT, (l_T_385).f_LINE);
((*(R11 *)rt_nil_check(l_N_386))).f_IV = (l_T_385).f_IV;
S_R7(&((*(R11 *)rt_nil_check(l_N_386))).f_NAME, (l_T_385).f_TX, 0);
r_SKIP();
{ R11 * rv387 = l_N_386;
return rv387; }
}
if ((((l_T_385).f_KIND == g_K_REAL) || ((l_T_385).f_KIND == g_K_FIX)))
{
l_N_386 = r_NEW_NODE(g_N_REAL, (l_T_385).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_N_386))).f_NAME, (l_T_385).f_TX, 0);
if (((l_T_385).f_KIND == g_K_FIX))
{
((*(R11 *)rt_nil_check(l_N_386))).f_FL = ((rt_int)1LL);
((*(R11 *)rt_nil_check(l_N_386))).f_IV = (l_T_385).f_IV;
}
r_SKIP();
{ R11 * rv388 = l_N_386;
return rv388; }
}
if (((l_T_385).f_KIND == g_K_GEN))
{
{ R11 * rv389 = r_PARSE_TYPE_ARG();
return rv389; }
}
if (((r_IS(rt_str("BIN", 3)) || r_IS(rt_str("OCT", 3))) || r_IS(rt_str("HEX", 3))))
{
r_SKIP();
if (r_TOK_IS(l_T_385, rt_str("BIN", 3)))
{
{ R11 * rv390 = r_PARSE_BITS(((rt_int)1LL), (l_T_385).f_LINE);
return rv390; }
}
else if (r_TOK_IS(l_T_385, rt_str("OCT", 3)))
{
{ R11 * rv391 = r_PARSE_BITS(((rt_int)3LL), (l_T_385).f_LINE);
return rv391; }
}
{ R11 * rv392 = r_PARSE_BITS(((rt_int)4LL), (l_T_385).f_LINE);
return rv392; }
}
if ((((l_T_385).f_KIND == g_K_STR) || ((l_T_385).f_KIND == g_K_ENUM)))
{
{ R11 * rv393 = r_PARSE_CHARSTRING(r_NO_TEXT());
return rv393; }
}
if ((((l_T_385).f_KIND == g_K_ID) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_STR)))
{
r_SKIP();
{ R11 * rv394 = r_PARSE_CHARSTRING((l_T_385).f_TX);
return rv394; }
}
if (r_ACCEPT(rt_str("TRUE", 4)))
{
l_N_386 = r_NEW_NODE(g_N_BOOL, (l_T_385).f_LINE);
((*(R11 *)rt_nil_check(l_N_386))).f_IV = ((rt_int)1LL);
{ R11 * rv395 = l_N_386;
return rv395; }
}
else if (r_ACCEPT(rt_str("FALSE", 5)))
{
{ R11 * rv396 = r_NEW_NODE(g_N_BOOL, (l_T_385).f_LINE);
return rv396; }
}
else if (r_ACCEPT(rt_str("NIL", 3)))
{
{ R11 * rv397 = r_NEW_NODE(g_N_NIL, (l_T_385).f_LINE);
return rv397; }
}
else if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R11 * rv398 = r_NEW_NODE(g_N_ANY, (l_T_385).f_LINE);
return rv398; }
}
if (r_ACCEPT(rt_str("[", 1)))
{
{
R11 * l_TS_399; memset(&l_TS_399, 0, sizeof l_TS_399);
l_TS_399 = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str("]", 1));
r_EXPECT(rt_str("$$", 2));
if (((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
l_N_386 = r_PARSE_ATOM();
((*(R11 *)rt_nil_check(l_N_386))).f_B = l_TS_399;
{ R11 * rv400 = l_N_386;
return rv400; }
}
l_N_386 = r_NEW_NODE(g_N_TYPESPEC, (l_T_385).f_LINE);
((*(R11 *)rt_nil_check(l_N_386))).f_A = l_TS_399;
r_EXPECT(rt_str("(", 1));
((*(R11 *)rt_nil_check(l_N_386))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
{ R11 * rv401 = l_N_386;
return rv401; }
}
}
if (r_IS(rt_str("(", 1)))
{
if ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
{
R11 * l_HEAD_402; memset(&l_HEAD_402, 0, sizeof l_HEAD_402);
l_HEAD_402 = NULL;
R11 * l_TAIL_403; memset(&l_TAIL_403, 0, sizeof l_TAIL_403);
l_TAIL_403 = NULL;
r_SKIP();
for (;;) {
{
l_N_386 = r_NEW_NODE(g_N_FINIT, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_N_386))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_N_386))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_N_386, &l_HEAD_402, &l_TAIL_403);
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end404;
} L_end404: ;
r_EXPECT(rt_str(")", 1));
l_N_386 = r_NEW_NODE(g_N_RECCONS, (l_T_385).f_LINE);
((*(R11 *)rt_nil_check(l_N_386))).f_A = l_HEAD_402;
{ R11 * rv405 = l_N_386;
return rv405; }
}
}
r_SKIP();
{
R11 * l_E_406; memset(&l_E_406, 0, sizeof l_E_406);
l_E_406 = r_PARSE_EXPR();
if (r_IS(rt_str(",", 1)))
{
{
R11 * l_HEAD_407; memset(&l_HEAD_407, 0, sizeof l_HEAD_407);
l_HEAD_407 = NULL;
R11 * l_TAIL_408; memset(&l_TAIL_408, 0, sizeof l_TAIL_408);
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
((*(R11 *)rt_nil_check(l_N_386))).f_A = l_HEAD_407;
{ R11 * rv410 = l_N_386;
return rv410; }
}
}
r_EXPECT(rt_str(")", 1));
l_N_386 = r_NEW_NODE(g_N_PAREN, (l_T_385).f_LINE);
((*(R11 *)rt_nil_check(l_N_386))).f_A = l_E_406;
{ R11 * rv411 = l_N_386;
return rv411; }
}
}
if (((l_T_385).f_KIND == g_K_ID))
{
l_N_386 = r_NEW_NODE(g_N_NAME, (l_T_385).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_N_386))).f_NAME, ((*(R11 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (((r_TEQS(((*(R11 *)rt_nil_check(l_N_386))).f_NAME, rt_str("NEW", 3)) || r_TEQS(((*(R11 *)rt_nil_check(l_N_386))).f_NAME, rt_str("PTR$NEW", 7))) || r_TEQS(((*(R11 *)rt_nil_check(l_N_386))).f_NAME, rt_str("SEMAPHORE$NEW", 13))))
{
((*(R11 *)rt_nil_check(l_N_386))).f_KIND = g_N_NEW;
r_EXPECT(rt_str("(", 1));
((*(R11 *)rt_nil_check(l_N_386))).f_A = r_PARSE_TYPE_ARG();
r_EXPECT(rt_str(")", 1));
}
{ R11 * rv412 = l_N_386;
return rv412; }
}
r_FAILT((l_T_385).f_LINE, rt_str("an expression expected, not ", 28), (l_T_385).f_TX);
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_CHARSTRING(R7 p_CHARSET) { 
rt_int l_LINE_413; memset(&l_LINE_413, 0, sizeof l_LINE_413);
l_LINE_413 = r_LINE_NOW();
R11 * l_HEAD_414; memset(&l_HEAD_414, 0, sizeof l_HEAD_414);
l_HEAD_414 = NULL;
R11 * l_TAIL_415; memset(&l_TAIL_415, 0, sizeof l_TAIL_415);
l_TAIL_415 = NULL;
rt_int l_STRINGS_416; memset(&l_STRINGS_416, 0, sizeof l_STRINGS_416);
l_STRINGS_416 = ((rt_int)0LL);
R11 * l_N_417; memset(&l_N_417, 0, sizeof l_N_417);
for (;;) {
if ((!((r_IS_KIND(g_K_STR) || r_IS_KIND(g_K_ENUM))))) goto L_end418;
{
l_N_417 = r_NEW_NODE(g_N_PART, r_LINE_NOW());
((*(R11 *)rt_nil_check(l_N_417))).f_IV = (r_CUR()).f_KIND;
S_R7(&((*(R11 *)rt_nil_check(l_N_417))).f_NAME, (r_CUR()).f_TX, 0);
if ((((*(R11 *)rt_nil_check(l_N_417))).f_IV == g_K_STR))
{
l_STRINGS_416 = rt_add(l_STRINGS_416, ((rt_int)1LL));
}
r_SKIP();
r_ADD_LIST(l_N_417, &l_HEAD_414, &l_TAIL_415);
}
} L_end418: ;
if (((l_STRINGS_416 == ((rt_int)0LL)) && ((p_CHARSET).f_LEN == ((rt_int)0LL))))
{
if ((!(((*(R11 *)rt_nil_check(l_HEAD_414))).f_NEXT == NULL)))
{
r_FAIL(l_LINE_413, rt_str("two enumerated literals in a row", 32));
}
((*(R11 *)rt_nil_check(l_HEAD_414))).f_KIND = g_N_ENUMLIT;
{ R11 * rv419 = l_HEAD_414;
return rv419; }
}
l_N_417 = r_NEW_NODE(g_N_STR, l_LINE_413);
((*(R11 *)rt_nil_check(l_N_417))).f_A = l_HEAD_414;
S_R7(&((*(R11 *)rt_nil_check(l_N_417))).f_NAME, p_CHARSET, 0);
{ R11 * rv420 = l_N_417;
return rv420; }
rt_raise(RT_X_INIT);
}
static rt_int r_AT_BODY_END(void) { 
{ rt_int rv421 = ((((((((((r_IS_KIND(g_K_EOF) || r_IS(rt_str("END", 3))) || r_IS(rt_str("ELSE", 4))) || r_IS(rt_str("ORIF", 4))) || r_IS(rt_str("EXCEPT", 6))) || r_IS(rt_str("PROCEDURE", 9))) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()) || r_IS(rt_str("MODULE", 6))) || r_IS(rt_str("PATH", 4)));
return rv421; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_STATEMENTS(void) { 
R11 * l_HEAD_422; memset(&l_HEAD_422, 0, sizeof l_HEAD_422);
l_HEAD_422 = NULL;
R11 * l_TAIL_423; memset(&l_TAIL_423, 0, sizeof l_TAIL_423);
l_TAIL_423 = NULL;
for (;;) {
if (r_AT_BODY_END()) goto L_end424;
{
r_ADD_LIST(r_PARSE_STATEMENT(), &l_HEAD_422, &l_TAIL_423);
}
} L_end424: ;
{ R11 * rv425 = l_HEAD_422;
return rv425; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_HANDLERS(void) { 
R11 * l_HEAD_426; memset(&l_HEAD_426, 0, sizeof l_HEAD_426);
l_HEAD_426 = NULL;
R11 * l_TAIL_427; memset(&l_TAIL_427, 0, sizeof l_TAIL_427);
l_TAIL_427 = NULL;
r_EXPECT(rt_str("EXCEPT", 6));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end428;
{
{
R11 * l_H_429; memset(&l_H_429, 0, sizeof l_H_429);
l_H_429 = r_NEW_NODE(g_N_HANDLER, r_LINE_NOW());
((*(R11 *)rt_nil_check(l_H_429))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str("-->", 3));
((*(R11 *)rt_nil_check(l_H_429))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_H_429, &l_HEAD_426, &l_TAIL_427);
}
}
} L_end428: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("EXCEPT", 6));
r_EXPECT(rt_str(";", 1));
{ R11 * rv430 = l_HEAD_426;
return rv430; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_STATEMENT(void) { 
R11 * l_S_431; memset(&l_S_431, 0, sizeof l_S_431);
if ((r_IS_KIND(g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str(":", 1))))
{
l_S_431 = r_NEW_NODE(g_N_LABELED, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_S_431))).f_NAME, r_IDENT(), 0);
r_SKIP();
((*(R11 *)rt_nil_check(l_S_431))).f_A = r_PARSE_STATEMENT();
{ R11 * rv432 = l_S_431;
return rv432; }
}
l_S_431 = r_PARSE_UNLABELED();
if (r_IS(rt_str("EXCEPT", 6)))
{
{
R11 * l_X_433; memset(&l_X_433, 0, sizeof l_X_433);
l_X_433 = r_NEW_NODE(g_N_EXCEPT, r_LINE_NOW());
((*(R11 *)rt_nil_check(l_X_433))).f_A = l_S_431;
((*(R11 *)rt_nil_check(l_X_433))).f_B = r_PARSE_HANDLERS();
{ R11 * rv434 = l_X_433;
return rv434; }
}
}
{ R11 * rv435 = l_S_431;
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
static R11 * r_PARSE_UNLABELED(void) { 
rt_int l_LINE_436; memset(&l_LINE_436, 0, sizeof l_LINE_436);
l_LINE_436 = r_LINE_NOW();
R11 * l_S_437; memset(&l_S_437, 0, sizeof l_S_437);
R11 * l_T_438; memset(&l_T_438, 0, sizeof l_T_438);
if (r_ACCEPT(rt_str(";", 1)))
{
{ R11 * rv439 = r_NEW_NODE(g_N_NULL, l_LINE_436);
return rv439; }
}
else if (r_IS(rt_str("IF", 2)))
{
{ R11 * rv440 = r_PARSE_IF();
return rv440; }
}
else if (r_IS(rt_str("SELECT", 6)))
{
{ R11 * rv441 = r_PARSE_CASE();
return rv441; }
}
else if (r_IS(rt_str("LOOP", 4)))
{
{ R11 * rv442 = r_PARSE_LOOP();
return rv442; }
}
else if (r_IS(rt_str("PAR_BLOCK", 9)))
{
{ R11 * rv443 = r_PARSE_PAR();
return rv443; }
}
else if (r_ACCEPT(rt_str("BLOCK", 5)))
{
l_S_437 = r_NEW_NODE(g_N_BLOCK, l_LINE_436);
((*(R11 *)rt_nil_check(l_S_437))).f_A = r_PARSE_BODY();
r_EXPECT_END(rt_str("BLOCK", 5));
{ R11 * rv444 = l_S_437;
return rv444; }
}
else if (r_ACCEPT(rt_str("WITH", 4)))
{
l_S_437 = r_NEW_NODE(g_N_WITH, l_LINE_436);
S_R7(&((*(R11 *)rt_nil_check(l_S_437))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("NAMING", 6)))
{
((*(R11 *)rt_nil_check(l_S_437))).f_IV = ((rt_int)1LL);
((*(R11 *)rt_nil_check(l_S_437))).f_A = r_PARSE_POSTFIX();
}
else
{
r_EXPECT(rt_str(":=", 2));
((*(R11 *)rt_nil_check(l_S_437))).f_A = r_PARSE_EXPR();
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
((*(R11 *)rt_nil_check(l_S_437))).f_B = r_PARSE_UNLABELED();
{ R11 * rv445 = l_S_437;
return rv445; }
}
else if (r_ACCEPT(rt_str("EXIT", 4)))
{
r_EXPECT(rt_str(";", 1));
{ R11 * rv446 = r_NEW_NODE(g_N_EXIT, l_LINE_436);
return rv446; }
}
else if (r_ACCEPT(rt_str("GO", 2)))
{
r_EXPECT(rt_str("TO", 2));
l_S_437 = r_NEW_NODE(g_N_GOTO, l_LINE_436);
S_R7(&((*(R11 *)rt_nil_check(l_S_437))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(";", 1));
{ R11 * rv447 = l_S_437;
return rv447; }
}
else if (r_ACCEPT(rt_str("RETURN", 6)))
{
l_S_437 = r_NEW_NODE(g_N_RETURN, l_LINE_436);
if ((!r_IS(rt_str(";", 1))))
{
((*(R11 *)rt_nil_check(l_S_437))).f_A = r_PARSE_EXPR();
}
r_EXPECT(rt_str(";", 1));
{ R11 * rv448 = l_S_437;
return rv448; }
}
else if (r_ACCEPT(rt_str("SIGNAL", 6)))
{
l_S_437 = r_NEW_NODE(g_N_SIGNAL, l_LINE_436);
if (r_IS_KIND(g_K_ID))
{
S_R7(&((*(R11 *)rt_nil_check(l_S_437))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str(";", 1));
{ R11 * rv449 = l_S_437;
return rv449; }
}
else if (r_ACCEPT(rt_str("ASSERT", 6)))
{
l_S_437 = r_NEW_NODE(g_N_ASSERT, l_LINE_436);
((*(R11 *)rt_nil_check(l_S_437))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R11 * rv450 = l_S_437;
return rv450; }
}
else if (r_ACCEPT(rt_str("TERMINATE", 9)))
{
l_S_437 = r_NEW_NODE(g_N_TERMINATE, l_LINE_436);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_S_437))).f_A = r_PARSE_POSTFIX();
r_EXPECT(rt_str(")", 1));
}
r_EXPECT(rt_str(";", 1));
{ R11 * rv451 = l_S_437;
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
((*(R11 *)rt_nil_check(l_S_437))).f_A = l_T_438;
((*(R11 *)rt_nil_check(l_S_437))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R11 * rv452 = l_S_437;
return rv452; }
}
r_EXPECT(rt_str(";", 1));
if (((((*(R11 *)rt_nil_check(l_T_438))).f_KIND == g_N_NAME) || (((*(R11 *)rt_nil_check(l_T_438))).f_KIND == g_N_APPLY)))
{
((*(R11 *)rt_nil_check(l_T_438))).f_KIND = g_N_CALL;
}
else
{
r_FAIL(l_LINE_436, rt_str("a statement expected", 20));
}
{ R11 * rv453 = l_T_438;
return rv453; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_IF(void) { 
R11 * l_S_454; memset(&l_S_454, 0, sizeof l_S_454);
l_S_454 = r_NEW_NODE(g_N_IF, r_LINE_NOW());
R11 * l_HEAD_455; memset(&l_HEAD_455, 0, sizeof l_HEAD_455);
l_HEAD_455 = NULL;
R11 * l_TAIL_456; memset(&l_TAIL_456, 0, sizeof l_TAIL_456);
l_TAIL_456 = NULL;
r_EXPECT(rt_str("IF", 2));
for (;;) {
{
{
R11 * l_ARM_458; memset(&l_ARM_458, 0, sizeof l_ARM_458);
l_ARM_458 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
((*(R11 *)rt_nil_check(l_ARM_458))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("THEN", 4));
((*(R11 *)rt_nil_check(l_ARM_458))).f_B = r_PARSE_BODY();
r_ADD_LIST(l_ARM_458, &l_HEAD_455, &l_TAIL_456);
}
}
if ((!r_ACCEPT(rt_str("ORIF", 4)))) goto L_end457;
} L_end457: ;
((*(R11 *)rt_nil_check(l_S_454))).f_A = l_HEAD_455;
if (r_ACCEPT(rt_str("ELSE", 4)))
{
((*(R11 *)rt_nil_check(l_S_454))).f_B = r_PARSE_BODY();
}
r_EXPECT_END(rt_str("IF", 2));
{ R11 * rv459 = l_S_454;
return rv459; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_CASE_LABEL(void) { 
if ((r_IS(rt_str("[", 1)) || ((r_IS(rt_str("(", 1)) && r_RANGE_AHEAD()))))
{
{ R11 * rv460 = r_PARSE_RANGE();
return rv460; }
}
{ R11 * rv461 = r_PARSE_EXPR();
return rv461; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_CASE(void) { 
R11 * l_S_462; memset(&l_S_462, 0, sizeof l_S_462);
l_S_462 = r_NEW_NODE(g_N_CASE, r_LINE_NOW());
R11 * l_HEAD_463; memset(&l_HEAD_463, 0, sizeof l_HEAD_463);
l_HEAD_463 = NULL;
R11 * l_TAIL_464; memset(&l_TAIL_464, 0, sizeof l_TAIL_464);
l_TAIL_464 = NULL;
r_EXPECT(rt_str("SELECT", 6));
((*(R11 *)rt_nil_check(l_S_462))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end465;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R11 *)rt_nil_check(l_S_462))).f_C = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R11 *)rt_nil_check(l_S_462))).f_D = r_PARSE_HANDLERS();
}
}
else
{
{
R11 * l_ARM_466; memset(&l_ARM_466, 0, sizeof l_ARM_466);
l_ARM_466 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
R11 * l_LH_467; memset(&l_LH_467, 0, sizeof l_LH_467);
l_LH_467 = NULL;
R11 * l_LT_468; memset(&l_LT_468, 0, sizeof l_LT_468);
l_LT_468 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_467, &l_LT_468);
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end469;
} L_end469: ;
r_EXPECT(rt_str("-->", 3));
((*(R11 *)rt_nil_check(l_ARM_466))).f_A = l_LH_467;
((*(R11 *)rt_nil_check(l_ARM_466))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R11 *)rt_nil_check(l_ARM_466))).f_C = r_PARSE_HANDLERS();
}
r_ADD_LIST(l_ARM_466, &l_HEAD_463, &l_TAIL_464);
}
}
}
} L_end465: ;
((*(R11 *)rt_nil_check(l_S_462))).f_B = l_HEAD_463;
r_EXPECT_END(rt_str("SELECT", 6));
{ R11 * rv470 = l_S_462;
return rv470; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_LOOP(void) { 
R11 * l_S_471; memset(&l_S_471, 0, sizeof l_S_471);
l_S_471 = r_NEW_NODE(g_N_LOOP, r_LINE_NOW());
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("FOR", 3)))
{
((*(R11 *)rt_nil_check(l_S_471))).f_KIND = g_N_FOR;
if (r_IS_KIND(g_K_ID))
{
S_R7(&((*(R11 *)rt_nil_check(l_S_471))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("IN", 2));
}
((*(R11 *)rt_nil_check(l_S_471))).f_A = r_PARSE_RANGE();
r_EXPECT(rt_str("DO", 2));
((*(R11 *)rt_nil_check(l_S_471))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_IS_KIND(g_K_ID))
{
if ((!r_TEQ(r_IDENT(), ((*(R11 *)rt_nil_check(l_S_471))).f_NAME)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier", 38));
}
}
else if (((((*(R11 *)rt_nil_check(l_S_471))).f_NAME).f_LEN > ((rt_int)0LL)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier (4.5.6.3)", 48));
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R11 * rv472 = l_S_471;
return rv472; }
}
if (r_ACCEPT(rt_str("UNTIL", 5)))
{
((*(R11 *)rt_nil_check(l_S_471))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("DO", 2));
}
((*(R11 *)rt_nil_check(l_S_471))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("WHEN", 4)))
{
if ((!(((*(R11 *)rt_nil_check(l_S_471))).f_A == NULL)))
{
r_FAIL(r_LINE_NOW(), rt_str("only one of UNTIL and WHEN (4.5.6.1)", 36));
}
((*(R11 *)rt_nil_check(l_S_471))).f_C = r_PARSE_EXPR();
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R11 * rv473 = l_S_471;
return rv473; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_PAR(void) { 
R11 * l_S_474; memset(&l_S_474, 0, sizeof l_S_474);
l_S_474 = r_NEW_NODE(g_N_PAR, r_LINE_NOW());
R11 * l_HEAD_475; memset(&l_HEAD_475, 0, sizeof l_HEAD_475);
l_HEAD_475 = NULL;
R11 * l_TAIL_476; memset(&l_TAIL_476, 0, sizeof l_TAIL_476);
l_TAIL_476 = NULL;
r_EXPECT(rt_str("PAR_BLOCK", 9));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end477;
{
{
R11 * l_P_478; memset(&l_P_478, 0, sizeof l_P_478);
l_P_478 = r_NEW_NODE(g_N_PATH, r_LINE_NOW());
R11 * l_H_479; memset(&l_H_479, 0, sizeof l_H_479);
l_H_479 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
r_EXPECT(rt_str("PATH", 4));
S_R7(&((*(R11 *)rt_nil_check(l_P_478))).f_NAME, r_IDENT(), 0);
((*(R11 *)rt_nil_check(l_P_478))).f_E = r_NEW_NODE(g_N_IDENT, ((*(R11 *)rt_nil_check(l_P_478))).f_LINE);
((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_P_478))).f_E))).f_A = l_H_479;
if (r_ACCEPT(rt_str("FOR", 3)))
{
S_R7(&((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_P_478))).f_E))).f_NAME, r_IDENT(), 0);
((*(R11 *)rt_nil_check(l_P_478))).f_FL = ((rt_int)1LL);
r_EXPECT(rt_str("IN", 2));
((*(R11 *)rt_nil_check(l_P_478))).f_A = r_PARSE_RANGE();
}
for (;;) {
{
if (r_ACCEPT(rt_str("PRIORITY", 8)))
{
((*(R11 *)rt_nil_check(l_P_478))).f_C = r_PARSE_EXPR();
}
else if (r_ACCEPT(rt_str("CONNECT", 7)))
{
r_EXPECT(rt_str("(", 1));
((*(R11 *)rt_nil_check(l_P_478))).f_D = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R11 *)rt_nil_check(l_H_479))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R11 *)rt_nil_check(l_H_479))).f_B = r_PARSE_ITEMS();
}
else
{
goto L_end480;
}
}
} L_end480: ;
r_EXPECT(rt_str(";", 1));
((*(R11 *)rt_nil_check(l_P_478))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PATH", 4));
r_EXPECT_NAME(((*(R11 *)rt_nil_check(l_P_478))).f_NAME);
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_P_478, &l_HEAD_475, &l_TAIL_476);
}
}
} L_end477: ;
((*(R11 *)rt_nil_check(l_S_474))).f_A = l_HEAD_475;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PAR_BLOCK", 9));
r_EXPECT(rt_str(";", 1));
{ R11 * rv481 = l_S_474;
return rv481; }
rt_raise(RT_X_INIT);
}
static R7 r_NO_TEXT(void) { 
{ R7 rv482 = ({ R7 rc483; memset(&rc483, 0, sizeof rc483);  rc483.f_AT = ((rt_int)0LL); rc483.f_LEN = ((rt_int)0LL); rc483.f_H = ((rt_int)0LL); rc483; });
return rv482; }
rt_raise(RT_X_INIT);
}
static R12 r_NO_MVAL(void) { 
{ R12 rv484 = ({ R12 rc485; memset(&rc485, 0, sizeof rc485);  rc485.f_OK = 0; rc485.f_V = ((rt_int)0LL); rc485; });
return rv484; }
rt_raise(RT_X_INIT);
}
static R12 r_SOME(rt_int p_V) { 
{ R12 rv486 = ({ R12 rc487; memset(&rc487, 0, sizeof rc487);  rc487.f_OK = 1; rc487.f_V = p_V; rc487; });
return rv486; }
rt_raise(RT_X_INIT);
}
static R13 * r_NEW_SYM(rt_int p_KIND, R7 p_NAME) { 
R13 * l_Y_488; memset(&l_Y_488, 0, sizeof l_Y_488);
l_Y_488 = ((R13 *)rt_alloc(sizeof (R13)));
rt_int l_LEVEL_489; memset(&l_LEVEL_489, 0, sizeof l_LEVEL_489);
l_LEVEL_489 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(g_W))).f_CS == NULL)))
{
l_LEVEL_489 = ((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
}
S_R13(&(*(R13 *)rt_nil_check(l_Y_488)), ({ R13 rc490; memset(&rc490, 0, sizeof rc490);  rc490.f_KIND = p_KIND; rc490.f_DEPTH = ((*(R22 *)rt_nil_check(g_W))).f_DEPTH; rc490.f_LEVEL = l_LEVEL_489; S_R7(&rc490.f_NAME, p_NAME, 0); rc490.f_T = NULL; S_R7(&rc490.f_ACCESS, r_NO_TEXT(), 0); S_R7(&rc490.f_FIELD, r_NO_TEXT(), 0); rc490.f_INPUT = 0; rc490.f_BYREF = 0; rc490.f_HASMV = 0; rc490.f_MV = ((rt_int)0LL); rc490.f_TS = NULL; rc490.f_BUSY = 0; S_R7(&rc490.f_FWD, r_NO_TEXT(), 0); rc490.f_PARAMS = NULL; rc490.f_RESULT = NULL; rc490.f_DECL = NULL; S_R7(&rc490.f_PREFIX, r_NO_TEXT(), 0); rc490.f_MODL = ((*(R22 *)rt_nil_check(g_W))).f_MODL; rc490.f_EXPORTED = 0; rc490.f_GENERIC = 0; rc490.f_FRAMED = 0; rc490.f_USES = NULL; rc490.f_INSTANCES = NULL; rc490.f_BINDINGS = NULL; rc490.f_ORIG = NULL; rc490.f_MEMBERS = NULL; rc490.f_SAVED = NULL; rc490.f_OWNER = r_CUR_OWNER(); rc490.f_CHAIN = NULL; rc490.f_SNEXT = NULL; rc490; }), 0);
{ R13 * rv491 = l_Y_488;
return rv491; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_OWNER(void) { 
if ((((*(R22 *)rt_nil_check(g_W))).f_IS == NULL))
{
{ rt_int rv492 = ((rt_int)0LL);
return rv492; }
}
{ rt_int rv493 = ((*(R28 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_IS))).f_ID;
return rv493; }
rt_raise(RT_X_INIT);
}
static R13 * r_ORIGINAL(R13 * p_Y) { 
if ((!(((*(R13 *)rt_nil_check(p_Y))).f_ORIG == NULL)))
{
{ R13 * rv494 = ((*(R13 *)rt_nil_check(p_Y))).f_ORIG;
return rv494; }
}
{ R13 * rv495 = p_Y;
return rv495; }
rt_raise(RT_X_INIT);
}
static rt_int r_BUCKET(R7 p_NAME) { 
if (((p_NAME).f_H < ((rt_int)0LL)))
{
{ rt_int rv496 = r_HASH_OF(r_STR(p_NAME, (p_NAME).f_LEN));
return rv496; }
}
{ rt_int rv497 = (p_NAME).f_H;
return rv497; }
rt_raise(RT_X_INIT);
}
static R13 * r_LOOKUP(R7 p_NAME) { 
R13 * l_Y_498; memset(&l_Y_498, 0, sizeof l_Y_498);
l_Y_498 = (((*(R22 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(r_BUCKET(p_NAME), (((*(R22 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
for (;;) {
if ((l_Y_498 == NULL)) goto L_end499;
{
if (r_TEQ(((*(R13 *)rt_nil_check(l_Y_498))).f_NAME, p_NAME))
{
{ R13 * rv500 = l_Y_498;
return rv500; }
}
l_Y_498 = ((*(R13 *)rt_nil_check(l_Y_498))).f_CHAIN;
}
} L_end499: ;
{ R13 * rv501 = NULL;
return rv501; }
rt_raise(RT_X_INIT);
}
static R13 * r_ORIG_LOOKUP(R7 p_NAME) { 
R13 * l_Y_502; memset(&l_Y_502, 0, sizeof l_Y_502);
l_Y_502 = r_LOOKUP(p_NAME);
if ((l_Y_502 == NULL))
{
{ R13 * rv503 = NULL;
return rv503; }
}
{ R13 * rv504 = r_ORIGINAL(l_Y_502);
return rv504; }
rt_raise(RT_X_INIT);
}
static R13 * r_LOOKUPS(rstr p_NAME) { 
{ R13 * rv505 = r_LOOKUP(r_MKN(p_NAME));
return rv505; }
rt_raise(RT_X_INIT);
}
static R13 * r_LOOKUP_NEXT(R13 * p_Y) { 
R13 * l_Z_506; memset(&l_Z_506, 0, sizeof l_Z_506);
l_Z_506 = ((*(R13 *)rt_nil_check(p_Y))).f_CHAIN;
for (;;) {
if ((l_Z_506 == NULL)) goto L_end507;
{
if (r_TEQ(((*(R13 *)rt_nil_check(l_Z_506))).f_NAME, ((*(R13 *)rt_nil_check(p_Y))).f_NAME))
{
{ R13 * rv508 = l_Z_506;
return rv508; }
}
l_Z_506 = ((*(R13 *)rt_nil_check(l_Z_506))).f_CHAIN;
}
} L_end507: ;
{ R13 * rv509 = NULL;
return rv509; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUTINE(R13 * p_Y) { 
{ rt_int rv510 = ((((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_BUILTIN));
return rv510; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE(R13 * p_Y, rt_int p_LINE) { 
rt_int l_B_511; memset(&l_B_511, 0, sizeof l_B_511);
l_B_511 = r_BUCKET(((*(R13 *)rt_nil_check(p_Y))).f_NAME);
R13 * l_OLD_512; memset(&l_OLD_512, 0, sizeof l_OLD_512);
l_OLD_512 = r_LOOKUP(((*(R13 *)rt_nil_check(p_Y))).f_NAME);
for (;;) {
if ((l_OLD_512 == NULL)) goto L_end513;
{
if ((!(((*(R13 *)rt_nil_check(l_OLD_512))).f_DEPTH == ((*(R22 *)rt_nil_check(g_W))).f_DEPTH)))
{
goto L_end513;
}
if ((!((((r_IS_ROUTINE(l_OLD_512) && r_IS_ROUTINE(p_Y))) || (((((*(R13 *)rt_nil_check(l_OLD_512))).f_KIND == g_Y_ENUMLIT) && (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)))))))
{
r_FAILT(p_LINE, rt_str("redeclared in the same scope: ", 30), ((*(R13 *)rt_nil_check(p_Y))).f_NAME);
}
l_OLD_512 = r_LOOKUP_NEXT(l_OLD_512);
}
} L_end513: ;
((*(R13 *)rt_nil_check(p_Y))).f_DEPTH = ((*(R22 *)rt_nil_check(g_W))).f_DEPTH;
((*(R13 *)rt_nil_check(p_Y))).f_CHAIN = (((*(R22 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_511, (((*(R22 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R22 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_511, (((*(R22 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_Y;
((*(R13 *)rt_nil_check(p_Y))).f_SNEXT = ((*(R22 *)rt_nil_check(g_W))).f_SCOPE;
((*(R22 *)rt_nil_check(g_W))).f_SCOPE = p_Y;
}
static void r_OPEN_SCOPE(void) { 
((*(R22 *)rt_nil_check(g_W))).f_DEPTH = rt_add(((*(R22 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
}
static void r_CLOSE_SCOPE(void) { 
((*(R22 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((((*(R22 *)rt_nil_check(g_W))).f_SCOPE == NULL)) goto L_end514;
{
if ((((*(R13 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH <= ((*(R22 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end514;
}
r_UNLINK(((*(R22 *)rt_nil_check(g_W))).f_SCOPE);
((*(R22 *)rt_nil_check(g_W))).f_SCOPE = ((*(R13 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_SCOPE))).f_SNEXT;
}
} L_end514: ;
}
static void r_UNLINK(R13 * p_Y) { 
rt_int l_B_515; memset(&l_B_515, 0, sizeof l_B_515);
l_B_515 = r_BUCKET(((*(R13 *)rt_nil_check(p_Y))).f_NAME);
R13 * l_P_516; memset(&l_P_516, 0, sizeof l_P_516);
l_P_516 = (((*(R22 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_515, (((*(R22 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
if ((l_P_516 == p_Y))
{
(((*(R22 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_515, (((*(R22 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = ((*(R13 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
for (;;) {
if ((l_P_516 == NULL)) goto L_end517;
{
if ((((*(R13 *)rt_nil_check(l_P_516))).f_CHAIN == p_Y))
{
((*(R13 *)rt_nil_check(l_P_516))).f_CHAIN = ((*(R13 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
l_P_516 = ((*(R13 *)rt_nil_check(l_P_516))).f_CHAIN;
}
} L_end517: ;
}
static R13 * r_TAKE_SCOPE(R13 * p_MARK) { 
R13 * l_HEAD_518; memset(&l_HEAD_518, 0, sizeof l_HEAD_518);
l_HEAD_518 = NULL;
for (;;) {
if ((((*(R22 *)rt_nil_check(g_W))).f_SCOPE == p_MARK)) goto L_end519;
{
{
R13 * l_Y_520; memset(&l_Y_520, 0, sizeof l_Y_520);
l_Y_520 = ((*(R22 *)rt_nil_check(g_W))).f_SCOPE;
r_UNLINK(l_Y_520);
((*(R22 *)rt_nil_check(g_W))).f_SCOPE = ((*(R13 *)rt_nil_check(l_Y_520))).f_SNEXT;
((*(R13 *)rt_nil_check(l_Y_520))).f_SNEXT = l_HEAD_518;
l_HEAD_518 = l_Y_520;
}
}
} L_end519: ;
{ R13 * rv521 = l_HEAD_518;
return rv521; }
rt_raise(RT_X_INIT);
}
static R14 * r_NEW_TYP(rt_int p_KIND) { 
R14 * l_T_522; memset(&l_T_522, 0, sizeof l_T_522);
l_T_522 = ((R14 *)rt_alloc(sizeof (R14)));
S_R14(&(*(R14 *)rt_nil_check(l_T_522)), ({ R14 rc523; memset(&rc523, 0, sizeof rc523);  rc523.f_KIND = p_KIND; rc523.f_SCALE = ((rt_int)0LL); S_R7(&rc523.f_LO_C, r_NO_TEXT(), 0); S_R7(&rc523.f_HI_C, r_NO_TEXT(), 0); S_R12(&rc523.f_MLO, r_NO_MVAL(), 0); S_R12(&rc523.f_MHI, r_NO_MVAL(), 0); rc523.f_RLEVEL = ((rt_int)0LL); S_R7(&rc523.f_LEN_C, r_NO_TEXT(), 0); S_R12(&rc523.f_MLEN, r_NO_MVAL(), 0); S_R7(&rc523.f_GEN, r_NO_TEXT(), 0); rc523.f_BASE = NULL; rc523.f_ELEM = NULL; rc523.f_TARGET = NULL; rc523.f_TARGET_TS = NULL; rc523.f_FIELDS = NULL; rc523.f_LITS = NULL; rc523.f_NLITS = ((rt_int)0LL); rc523.f_UNORDERED = 0; rc523.f_BOUNDS = NULL; rc523.f_DIMS = ((rt_int)0LL); rc523.f_ARGS = NULL; S_R7(&rc523.f_NAME, r_NO_TEXT(), 0); S_R7(&rc523.f_CNAME, r_NO_TEXT(), 0); rc523.f_MODL = NULL; rc523.f_REPS = NULL; rc523.f_DECL = NULL; rc523; }), 0);
{ R14 * rv524 = l_T_522;
return rv524; }
rt_raise(RT_X_INIT);
}
static R14 * r_COPY_TYP(R14 * p_T) { 
R14 * l_C_525; memset(&l_C_525, 0, sizeof l_C_525);
l_C_525 = ((R14 *)rt_alloc(sizeof (R14)));
S_R14(&(*(R14 *)rt_nil_check(l_C_525)), (*(R14 *)rt_nil_check(p_T)), 0);
{ R14 * rv526 = l_C_525;
return rv526; }
rt_raise(RT_X_INIT);
}
static void r_PREDEF_TYPE(rstr p_NAME, R14 * p_T) { 
R13 * l_Y_527; memset(&l_Y_527, 0, sizeof l_Y_527);
l_Y_527 = r_NEW_SYM(g_Y_TYPE, r_MKN(p_NAME));
((*(R13 *)rt_nil_check(l_Y_527))).f_T = p_T;
if (((((*(R14 *)rt_nil_check(p_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R7(&((*(R14 *)rt_nil_check(p_T))).f_NAME, ((*(R13 *)rt_nil_check(l_Y_527))).f_NAME, 0);
}
r_DEFINE(l_Y_527, ((rt_int)0LL));
}
static void r_PREDEF_BUILTIN(rstr p_NAME) { 
r_DEFINE(r_NEW_SYM(g_Y_BUILTIN, r_MKN(p_NAME)), ((rt_int)0LL));
}
static void r_PREDEF_CONST(rstr p_NAME, R14 * p_T, rt_int p_V) { 
R13 * l_Y_528; memset(&l_Y_528, 0, sizeof l_Y_528);
l_Y_528 = r_NEW_SYM(g_Y_CONST, r_MKN(p_NAME));
((*(R13 *)rt_nil_check(l_Y_528))).f_T = p_T;
((*(R13 *)rt_nil_check(l_Y_528))).f_HASMV = 1;
((*(R13 *)rt_nil_check(l_Y_528))).f_MV = p_V;
((*(R13 *)rt_nil_check(l_Y_528))).f_INPUT = 1;
S_R7(&((*(R13 *)rt_nil_check(l_Y_528))).f_ACCESS, r_FMT1(rt_str("((rt_int)@)", 11), r_NUM(p_V)), 0);
r_DEFINE(l_Y_528, ((rt_int)0LL));
}
static R14 * r_PREDEF_ENUM(rstr p_NAME, rstr p_NAMES, rt_int p_UNORDERED) { 
R11 * l_HEAD_529; memset(&l_HEAD_529, 0, sizeof l_HEAD_529);
l_HEAD_529 = NULL;
R11 * l_TAIL_530; memset(&l_TAIL_530, 0, sizeof l_TAIL_530);
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
R11 * l_N_534; memset(&l_N_534, 0, sizeof l_N_534);
l_N_534 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R7(&((*(R11 *)rt_nil_check(l_N_534))).f_NAME, r_MKN(rt_b_slice(p_NAMES, l_START_531, rt_sub(it533, ((rt_int)1LL)))), 0);
r_ADD_LIST(l_N_534, &l_HEAD_529, &l_TAIL_530);
}
}
l_START_531 = rt_add(it533, ((rt_int)1LL));
}
}
} } L_end532: ;
{
R14 * l_T_535; memset(&l_T_535, 0, sizeof l_T_535);
l_T_535 = r_ENUM_CLASS(l_HEAD_529, p_UNORDERED, ((rt_int)0LL));
r_PREDEF_TYPE(p_NAME, l_T_535);
{ R14 * rv536 = l_T_535;
return rv536; }
}
rt_raise(RT_X_INIT);
}
static void r_PREDEFINE(void) { 
R14 * l_T_537; memset(&l_T_537, 0, sizeof l_T_537);
R11 * l_ASCII_LITS_538; memset(&l_ASCII_LITS_538, 0, sizeof l_ASCII_LITS_538);
l_ASCII_LITS_538 = NULL;
R11 * l_TAIL_539; memset(&l_TAIL_539, 0, sizeof l_TAIL_539);
l_TAIL_539 = NULL;
((*(R22 *)rt_nil_check(g_W))).f_TY_INT = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL = r_NEW_TYP(g_T_BOOL);
((*(R22 *)rt_nil_check(g_W))).f_TY_STR = r_NEW_TYP(g_T_STR);
((*(R22 *)rt_nil_check(g_W))).f_TY_VOID = r_NEW_TYP(g_T_VOID);
((*(R22 *)rt_nil_check(g_W))).f_TY_NIL = r_NEW_TYP(g_T_NIL);
((*(R22 *)rt_nil_check(g_W))).f_TY_FLOAT = r_NEW_TYP(g_T_FLOAT);
((*(R14 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_TY_FLOAT))).f_SCALE = ((rt_int)15LL);
((*(R22 *)rt_nil_check(g_W))).f_TY_BITS = r_NEW_TYP(g_T_BITS);
((*(R22 *)rt_nil_check(g_W))).f_TY_TYPE = r_NEW_TYP(g_T_TYPE);
r_PREDEF_TYPE(rt_str("INTEGER", 7), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
r_PREDEF_TYPE(rt_str("BOOLEAN", 7), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
{ rt_int it541_lo = ((rt_int)0LL), it541_hi = ((rt_int)127LL);
for (rt_int it541 = it541_lo; it541 <= it541_hi; it541++) {
{
{
R11 * l_N_542; memset(&l_N_542, 0, sizeof l_N_542);
l_N_542 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R7(&((*(R11 *)rt_nil_check(l_N_542))).f_NAME, r_ASCII_NAME(it541), 0);
r_ADD_LIST(l_N_542, &l_ASCII_LITS_538, &l_TAIL_539);
}
}
} } L_end540: ;
((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII = r_ENUM_CLASS(l_ASCII_LITS_538, 0, ((rt_int)0LL));
r_PREDEF_TYPE(rt_str("ASCII", 5), ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII);
((*(R22 *)rt_nil_check(g_W))).f_TY_ROUNDINGS = r_PREDEF_ENUM(rt_str("ROUNDINGS", 9), rt_str("ROUNDED TRUNCATED NATIVE_R NATIVE_T", 35), 0);
l_T_537 = r_PREDEF_ENUM(rt_str("FIXED_PRECISIONS", 16), rt_str("STD", 3), 0);
l_T_537 = r_PREDEF_ENUM(rt_str("SIGNING", 7), rt_str("SIGNED UNSIGNED", 15), 1);
l_T_537 = r_PREDEF_ENUM(rt_str("PACKING", 7), rt_str("DENSE PACKED UNPACKED", 21), 1);
l_T_537 = r_PREDEF_ENUM(rt_str("USAGE", 5), rt_str("SYNCH REGION", 12), 1);
r_PREDEF_CONST(rt_str("MIN_PRIORITY", 12), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)0LL));
r_PREDEF_CONST(rt_str("MAX_PRIORITY", 12), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)255LL));
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
static R7 r_ASCII_NAME(rt_int p_C) { 
rstr l_CONTROLS_543; memset(&l_CONTROLS_543, 0, sizeof l_CONTROLS_543);
l_CONTROLS_543 = rt_str_new(((rt_int)128LL));
rt_b_assign(&l_CONTROLS_543, rt_str(" NUL SOH STX EXT EOT ENQ ACK BEL BS  HT  LF  VT  FF  CR  SO  SI  DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM  SUB ESC FS  GS  RS  US ", 128));
if ((p_C < ((rt_int)32LL)))
{
if (rt_b_eq(rt_b_slice(l_CONTROLS_543, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL))), rt_str(" ", 1)))
{
{ R7 rv544 = r_MKN(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_543, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)2LL)))));
return rv544; }
}
{ R7 rv545 = r_MKN(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_543, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)))));
return rv545; }
}
else if ((p_C == ((rt_int)39LL)))
{
{ R7 rv546 = r_MKN(rt_str("\\''''", 5));
return rv546; }
}
else if ((p_C < ((rt_int)96LL)))
{
{ R7 rv547 = r_MKN(rt_str_cat(rt_str_cat(rt_str("\\'", 2), r_CHAR_OF(p_C)), rt_str("'", 1)));
return rv547; }
}
else if ((p_C == ((rt_int)96LL)))
{
{ R7 rv548 = r_MKN(rt_str("\\ACCENT", 7));
return rv548; }
}
else if ((p_C <= ((rt_int)122LL)))
{
{ R7 rv549 = r_MKN(rt_str_cat(rt_str("\\", 1), r_CHAR_OF(rt_sub(p_C, ((rt_int)32LL)))));
return rv549; }
}
else if ((p_C == ((rt_int)123LL)))
{
{ R7 rv550 = r_MKN(rt_str("\\[", 2));
return rv550; }
}
else if ((p_C == ((rt_int)124LL)))
{
{ R7 rv551 = r_MKN(rt_str("\\BAR", 4));
return rv551; }
}
else if ((p_C == ((rt_int)125LL)))
{
{ R7 rv552 = r_MKN(rt_str("\\]", 2));
return rv552; }
}
else if ((p_C == ((rt_int)126LL)))
{
{ R7 rv553 = r_MKN(rt_str("\\TILDE", 6));
return rv553; }
}
{ R7 rv554 = r_MKN(rt_str("\\DEL", 4));
return rv554; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_SCALAR(R14 * p_T) { 
{ rt_int rv555 = (((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_BOOL)) || (((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv555; }
rt_raise(RT_X_INIT);
}
static R14 * r_REAL_TYPE(R14 * p_T) { 
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R14 * rv556 = r_REAL_TYPE(((*(R14 *)rt_nil_check(p_T))).f_BASE);
return rv556; }
}
{ R14 * rv557 = p_T;
return rv557; }
rt_raise(RT_X_INIT);
}
static R7 r_TYPE_NAME(R14 * p_T) { 
rt_int l_K_558; memset(&l_K_558, 0, sizeof l_K_558);
l_K_558 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if (((((*(R14 *)rt_nil_check(p_T))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{ R7 rv559 = ((*(R14 *)rt_nil_check(p_T))).f_NAME;
return rv559; }
}
else if ((l_K_558 == g_T_INT))
{
if ((((*(R14 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))
{
{ R7 rv560 = r_MK(rt_str("INTEGER", 7));
return rv560; }
}
{ R7 rv561 = r_FMT1(rt_str("FIXED (@, 2, STD)", 17), r_NUM(((*(R14 *)rt_nil_check(p_T))).f_SCALE));
return rv561; }
}
else if ((l_K_558 == g_T_BOOL))
{
{ R7 rv562 = r_MK(rt_str("BOOLEAN", 7));
return rv562; }
}
else if ((l_K_558 == g_T_ENUM))
{
if (((!(((*(R14 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R14 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R7 rv563 = r_TYPE_NAME(((*(R14 *)rt_nil_check(p_T))).f_BASE);
return rv563; }
}
{ R7 rv564 = r_MK(rt_str("an enumerated type", 18));
return rv564; }
}
else if ((l_K_558 == g_T_STR))
{
{ R7 rv565 = r_MK(rt_str("CHAR_STR", 8));
return rv565; }
}
else if ((l_K_558 == g_T_BITS))
{
{ R7 rv566 = r_MK(rt_str("BIT", 3));
return rv566; }
}
else if ((l_K_558 == g_T_FLOAT))
{
{ R7 rv567 = r_FMT1(rt_str("FLOAT (@)", 9), r_NUM(((*(R14 *)rt_nil_check(p_T))).f_SCALE));
return rv567; }
}
else if ((l_K_558 == g_T_ARR))
{
{ R7 rv568 = r_FMT1(rt_str("ARRAY OF @", 10), r_TYPE_NAME(((*(R14 *)rt_nil_check(p_T))).f_ELEM));
return rv568; }
}
else if ((l_K_558 == g_T_REC))
{
if (((!(((*(R14 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R14 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R7 rv569 = r_TYPE_NAME(((*(R14 *)rt_nil_check(p_T))).f_BASE);
return rv569; }
}
{ R7 rv570 = r_MK(rt_str("RECORD", 6));
return rv570; }
}
else if ((l_K_558 == g_T_PTR))
{
{ R7 rv571 = r_MK(rt_str("PTR", 3));
return rv571; }
}
else if ((l_K_558 == g_T_SEM))
{
{ R7 rv572 = r_MK(rt_str("SEMAPHORE", 9));
return rv572; }
}
else if ((l_K_558 == g_T_NIL))
{
{ R7 rv573 = r_MK(rt_str("NIL", 3));
return rv573; }
}
else if ((l_K_558 == g_T_VOID))
{
{ R7 rv574 = r_MK(rt_str("no value", 8));
return rv574; }
}
{ R7 rv575 = r_MK(rt_str("a type", 6));
return rv575; }
rt_raise(RT_X_INIT);
}
static R7 r_SUBST_SELF(R7 p_T, R7 p_SELF) { 
rstr l_S_576; memset(&l_S_576, 0, sizeof l_S_576);
l_S_576 = rt_str_new((p_T).f_LEN);
rt_b_assign(&l_S_576, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_577; memset(&l_AT_577, 0, sizeof l_AT_577);
l_AT_577 = ((*(R22 *)rt_nil_check(g_W))).f_TOP;
rt_int l_START_578; memset(&l_START_578, 0, sizeof l_START_578);
l_START_578 = ((rt_int)0LL);
R7 l_R_579; memset(&l_R_579, 0, sizeof l_R_579);
rt_int l_I_580; memset(&l_I_580, 0, sizeof l_I_580);
l_I_580 = ((rt_int)0LL);
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ R7 rv581 = p_T;
return rv581; }
}
for (;;) {
if ((l_I_580 >= rt_sub((p_T).f_LEN, ((rt_int)1LL)))) goto L_end582;
{
if (rt_b_eq(rt_b_slice(l_S_576, l_I_580, rt_add(l_I_580, ((rt_int)1LL))), rt_str("$S", 2)))
{
S_R7(&l_R_579, r_MK(rt_b_slice(l_S_576, l_START_578, rt_sub(l_I_580, ((rt_int)1LL)))), 0);
S_R7(&l_R_579, r_MK(r_STR(p_SELF, (p_SELF).f_LEN)), 0);
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
((*(R22 *)rt_nil_check(g_W))).f_TOP = l_AT_577;
{ R7 rv583 = p_T;
return rv583; }
}
S_R7(&l_R_579, r_MK(rt_b_slice(l_S_576, l_START_578, rt_sub((p_T).f_LEN, ((rt_int)1LL)))), 0);
{ R7 rv584 = ({ R7 rc585; memset(&rc585, 0, sizeof rc585);  rc585.f_AT = l_AT_577; rc585.f_LEN = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_TOP, l_AT_577); rc585.f_H = rt_neg(((rt_int)1LL)); rc585; });
return rv584; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LITERALS(R11 * p_A, R11 * p_B) { 
R11 * l_P_586; memset(&l_P_586, 0, sizeof l_P_586);
l_P_586 = p_A;
R11 * l_Q_587; memset(&l_Q_587, 0, sizeof l_Q_587);
l_Q_587 = p_B;
for (;;) {
if (((l_P_586 == NULL) || (l_Q_587 == NULL))) goto L_end588;
{
if ((!r_TEQ(((*(R11 *)rt_nil_check(l_P_586))).f_NAME, ((*(R11 *)rt_nil_check(l_Q_587))).f_NAME)))
{
{ rt_int rv589 = 0;
return rv589; }
}
l_P_586 = ((*(R11 *)rt_nil_check(l_P_586))).f_NEXT;
l_Q_587 = ((*(R11 *)rt_nil_check(l_Q_587))).f_NEXT;
}
} L_end588: ;
{ rt_int rv590 = ((l_P_586 == NULL) && (l_Q_587 == NULL));
return rv590; }
rt_raise(RT_X_INIT);
}
static R14 * r_ENUM_CLASS(R11 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE) { 
R13 * l_Y_591; memset(&l_Y_591, 0, sizeof l_Y_591);
l_Y_591 = ((*(R22 *)rt_nil_check(g_W))).f_ENUMS;
R14 * l_T_592; memset(&l_T_592, 0, sizeof l_T_592);
for (;;) {
if ((l_Y_591 == NULL)) goto L_end593;
{
if (((((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_591))).f_T))).f_UNORDERED == p_UNORDERED) && r_SAME_LITERALS(((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_591))).f_T))).f_LITS, p_LITS)))
{
r_DECLARE_LITERALS(((*(R13 *)rt_nil_check(l_Y_591))).f_T, p_LINE);
{ R14 * rv594 = ((*(R13 *)rt_nil_check(l_Y_591))).f_T;
return rv594; }
}
l_Y_591 = ((*(R13 *)rt_nil_check(l_Y_591))).f_INSTANCES;
}
} L_end593: ;
l_T_592 = r_NEW_TYP(g_T_ENUM);
((*(R14 *)rt_nil_check(l_T_592))).f_BASE = l_T_592;
((*(R14 *)rt_nil_check(l_T_592))).f_LITS = p_LITS;
((*(R14 *)rt_nil_check(l_T_592))).f_NLITS = r_LIST_LENGTH(p_LITS);
((*(R14 *)rt_nil_check(l_T_592))).f_UNORDERED = p_UNORDERED;
S_R7(&((*(R14 *)rt_nil_check(l_T_592))).f_CNAME, r_NEW_NAME(rt_str("E", 1)), 0);
l_Y_591 = r_NEW_SYM(g_Y_TYPE, r_NO_TEXT());
((*(R13 *)rt_nil_check(l_Y_591))).f_T = l_T_592;
((*(R13 *)rt_nil_check(l_Y_591))).f_INSTANCES = ((*(R22 *)rt_nil_check(g_W))).f_ENUMS;
((*(R22 *)rt_nil_check(g_W))).f_ENUMS = l_Y_591;
{
R11 * l_P_595; memset(&l_P_595, 0, sizeof l_P_595);
l_P_595 = p_LITS;
R7 l_NAMES_596; memset(&l_NAMES_596, 0, sizeof l_NAMES_596);
S_R7(&l_NAMES_596, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_P_595 == NULL)) goto L_end597;
{
S_R7(&l_NAMES_596, r_FMT2(rt_str("@@, ", 4), l_NAMES_596, r_CSTRING(((*(R11 *)rt_nil_check(l_P_595))).f_NAME)), 0);
l_P_595 = ((*(R11 *)rt_nil_check(l_P_595))).f_NEXT;
}
} L_end597: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static const char *@[] = { @0 };", 32), ((*(R14 *)rt_nil_check(l_T_592))).f_CNAME, l_NAMES_596));
}
r_DECLARE_LITERALS(l_T_592, p_LINE);
{ R14 * rv598 = l_T_592;
return rv598; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_LITERALS(R14 * p_T, rt_int p_LINE) { 
R11 * l_P_599; memset(&l_P_599, 0, sizeof l_P_599);
l_P_599 = ((*(R14 *)rt_nil_check(p_T))).f_LITS;
rt_int l_I_600; memset(&l_I_600, 0, sizeof l_I_600);
l_I_600 = ((rt_int)0LL);
for (;;) {
if ((l_P_599 == NULL)) goto L_end601;
{
if ((r_FIND_LITERAL(((*(R11 *)rt_nil_check(l_P_599))).f_NAME, p_T) == NULL))
{
{
R13 * l_Y_602; memset(&l_Y_602, 0, sizeof l_Y_602);
l_Y_602 = r_NEW_SYM(g_Y_ENUMLIT, ((*(R11 *)rt_nil_check(l_P_599))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_602))).f_T = p_T;
((*(R13 *)rt_nil_check(l_Y_602))).f_MV = l_I_600;
((*(R13 *)rt_nil_check(l_Y_602))).f_HASMV = 1;
((*(R13 *)rt_nil_check(l_Y_602))).f_INPUT = 1;
r_DEFINE(l_Y_602, p_LINE);
}
}
l_I_600 = rt_add(l_I_600, ((rt_int)1LL));
l_P_599 = ((*(R11 *)rt_nil_check(l_P_599))).f_NEXT;
}
} L_end601: ;
}
static R13 * r_FIND_LITERAL(R7 p_NAME, R14 * p_T) { 
R13 * l_Y_603; memset(&l_Y_603, 0, sizeof l_Y_603);
l_Y_603 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_603 == NULL)) goto L_end604;
{
if ((((*(R13 *)rt_nil_check(l_Y_603))).f_KIND == g_Y_ENUMLIT))
{
if ((p_T == NULL))
{
{ R13 * rv605 = l_Y_603;
return rv605; }
}
if ((((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_603))).f_T))).f_BASE == ((*(R14 *)rt_nil_check(p_T))).f_BASE))
{
{ R13 * rv606 = l_Y_603;
return rv606; }
}
}
l_Y_603 = r_LOOKUP_NEXT(l_Y_603);
}
} L_end604: ;
{ R13 * rv607 = NULL;
return rv607; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_CLASSES(R7 p_NAME) { 
R13 * l_Y_608; memset(&l_Y_608, 0, sizeof l_Y_608);
l_Y_608 = r_LOOKUP(p_NAME);
rt_int l_N_609; memset(&l_N_609, 0, sizeof l_N_609);
l_N_609 = ((rt_int)0LL);
for (;;) {
if ((l_Y_608 == NULL)) goto L_end610;
{
if ((((*(R13 *)rt_nil_check(l_Y_608))).f_KIND == g_Y_ENUMLIT))
{
l_N_609 = rt_add(l_N_609, ((rt_int)1LL));
}
l_Y_608 = r_LOOKUP_NEXT(l_Y_608);
}
} L_end610: ;
{ rt_int rv611 = l_N_609;
return rv611; }
rt_raise(RT_X_INIT);
}
static R14 * r_RESOLVE(R11 * p_TS) { 
{ R14 * rv612 = r_RESOLVE_NAMED(p_TS, r_NO_TEXT());
return rv612; }
rt_raise(RT_X_INIT);
}
static void r_ATTR_VALUE(R11 * p_E, R7 *p_C, R12 *p_M) { 
S_R7(&(*p_C), (r_EXPR(p_E, ((*(R22 *)rt_nil_check(g_W))).f_TY_INT)).f_C, 0);
S_R12(&(*p_M), r_MANIFEST(p_E), 0);
if (((*p_M)).f_OK)
{
S_R7(&(*p_C), r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*p_M)).f_V)), 0);
}
}
static R14 * r_WITH_RANGE(R14 * p_T, R11 * p_R) { 
R14 * l_N_613; memset(&l_N_613, 0, sizeof l_N_613);
if ((p_R == NULL))
{
{ R14 * rv614 = p_T;
return rv614; }
}
if ((r_IS_GENERIC_NODE(((*(R11 *)rt_nil_check(p_R))).f_A) || r_IS_GENERIC_NODE(((*(R11 *)rt_nil_check(p_R))).f_B)))
{
l_N_613 = r_COPY_TYP(p_T);
S_R7(&((*(R14 *)rt_nil_check(l_N_613))).f_NAME, r_NO_TEXT(), 0);
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_R))).f_A))).f_KIND == g_TS_GEN) && ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R7(&((*(R14 *)rt_nil_check(l_N_613))).f_LO_C, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_R))).f_A))).f_NAME, (((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN))), 0);
}
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_R))).f_B))).f_KIND == g_TS_GEN) && ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R7(&((*(R14 *)rt_nil_check(l_N_613))).f_HI_C, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_R))).f_B))).f_NAME, (((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN))), 0);
}
{ R14 * rv615 = l_N_613;
return rv615; }
}
if ((!((((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_R))).f_LINE, rt_str("a range is only for fixed, float and enumerated types (3.12.2)", 62));
}
l_N_613 = r_COPY_TYP(p_T);
S_R7(&((*(R14 *)rt_nil_check(l_N_613))).f_NAME, r_NO_TEXT(), 0);
((*(R14 *)rt_nil_check(l_N_613))).f_RLEVEL = r_CUR_LEVEL();
{
R18 l_LO_616; memset(&l_LO_616, 0, sizeof l_LO_616);
R18 l_HI_617; memset(&l_HI_617, 0, sizeof l_HI_617);
S_R18(&l_LO_616, r_EXPR(((*(R11 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R18(&l_HI_617, r_EXPR(((*(R11 *)rt_nil_check(p_R))).f_B, p_T), 0);
S_R7(&((*(R14 *)rt_nil_check(l_N_613))).f_LO_C, (l_LO_616).f_C, 0);
S_R7(&((*(R14 *)rt_nil_check(l_N_613))).f_HI_C, (l_HI_617).f_C, 0);
S_R12(&((*(R14 *)rt_nil_check(l_N_613))).f_MLO, r_MANIFEST(((*(R11 *)rt_nil_check(p_R))).f_A), 0);
S_R12(&((*(R14 *)rt_nil_check(l_N_613))).f_MHI, r_MANIFEST(((*(R11 *)rt_nil_check(p_R))).f_B), 0);
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
S_R12(&((*(R14 *)rt_nil_check(l_N_613))).f_MLO, r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R12(&((*(R14 *)rt_nil_check(l_N_613))).f_MHI, r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(p_R))).f_B, p_T), 0);
}
if (((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_INT) && (!(((*(R14 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))))
{
S_R7(&((*(R14 *)rt_nil_check(l_N_613))).f_LO_C, r_RESCALE(l_LO_616, ((*(R14 *)rt_nil_check(p_T))).f_SCALE, ((*(R11 *)rt_nil_check(p_R))).f_LINE), 0);
S_R7(&((*(R14 *)rt_nil_check(l_N_613))).f_HI_C, r_RESCALE(l_HI_617, ((*(R14 *)rt_nil_check(p_T))).f_SCALE, ((*(R11 *)rt_nil_check(p_R))).f_LINE), 0);
S_R12(&((*(R14 *)rt_nil_check(l_N_613))).f_MLO, r_NO_MVAL(), 0);
S_R12(&((*(R14 *)rt_nil_check(l_N_613))).f_MHI, r_NO_MVAL(), 0);
}
}
if (((((*(R11 *)rt_nil_check(p_R))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(p_R))).f_IV == ((rt_int)3LL))))
{
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R7(&((*(R14 *)rt_nil_check(l_N_613))).f_LO_C, r_FMT1(rt_str("nextafter(@, INFINITY)", 22), ((*(R14 *)rt_nil_check(l_N_613))).f_LO_C), 0);
}
else
{
S_R7(&((*(R14 *)rt_nil_check(l_N_613))).f_LO_C, r_FMT1(rt_str("((@) + 1)", 9), ((*(R14 *)rt_nil_check(l_N_613))).f_LO_C), 0);
(((*(R14 *)rt_nil_check(l_N_613))).f_MLO).f_V = rt_add((((*(R14 *)rt_nil_check(l_N_613))).f_MLO).f_V, ((rt_int)1LL));
}
}
if ((((*(R11 *)rt_nil_check(p_R))).f_IV >= ((rt_int)2LL)))
{
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R7(&((*(R14 *)rt_nil_check(l_N_613))).f_HI_C, r_FMT1(rt_str("nextafter(@, -INFINITY)", 23), ((*(R14 *)rt_nil_check(l_N_613))).f_HI_C), 0);
}
else
{
S_R7(&((*(R14 *)rt_nil_check(l_N_613))).f_HI_C, r_FMT1(rt_str("((@) - 1)", 9), ((*(R14 *)rt_nil_check(l_N_613))).f_HI_C), 0);
(((*(R14 *)rt_nil_check(l_N_613))).f_MHI).f_V = rt_sub((((*(R14 *)rt_nil_check(l_N_613))).f_MHI).f_V, ((rt_int)1LL));
}
}
{ R14 * rv618 = l_N_613;
return rv618; }
rt_raise(RT_X_INIT);
}
static R12 r_ENUM_MANIFEST(R11 * p_E, R14 * p_T) { 
if (((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{
R13 * l_Y_619; memset(&l_Y_619, 0, sizeof l_Y_619);
l_Y_619 = r_FIND_LITERAL(((*(R11 *)rt_nil_check(p_E))).f_NAME, p_T);
if ((!(l_Y_619 == NULL)))
{
{ R12 rv620 = r_SOME(((*(R13 *)rt_nil_check(l_Y_619))).f_MV);
return rv620; }
}
}
}
{ R12 rv621 = r_MANIFEST(p_E);
return rv621; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_LEVEL(void) { 
if ((((*(R22 *)rt_nil_check(g_W))).f_CS == NULL))
{
{ rt_int rv622 = ((rt_int)0LL);
return rv622; }
}
{ rt_int rv623 = ((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
return rv623; }
rt_raise(RT_X_INIT);
}
static R14 * r_ARG_TYPE(R11 * p_N) { 
{ R14 * rv624 = r_RESOLVE(r_EXPR_TO_TS(p_N));
return rv624; }
rt_raise(RT_X_INIT);
}
static R11 * r_NTH_ARG(R11 * p_TS, rt_int p_K) { 
R11 * l_A_625; memset(&l_A_625, 0, sizeof l_A_625);
l_A_625 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
{ rt_int it627_lo = ((rt_int)1LL), it627_hi = p_K;
for (rt_int it627 = it627_lo; it627 <= it627_hi; it627++) {
{
if ((l_A_625 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
l_A_625 = ((*(R11 *)rt_nil_check(l_A_625))).f_NEXT;
}
} } L_end626: ;
if ((l_A_625 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
{ R11 * rv628 = l_A_625;
return rv628; }
rt_raise(RT_X_INIT);
}
static R14 * r_RESOLVE_NAMED(R11 * p_TS, R7 p_CNAME) { 
R14 * l_T_629; memset(&l_T_629, 0, sizeof l_T_629);
rt_int l_K_630; memset(&l_K_630, 0, sizeof l_K_630);
l_K_630 = ((*(R11 *)rt_nil_check(p_TS))).f_KIND;
if ((l_K_630 == g_TS_ARRAY))
{
{ R14 * rv631 = r_RESOLVE_ARRAY(p_TS);
return rv631; }
}
else if ((l_K_630 == g_TS_RECORD))
{
{ R14 * rv632 = r_RESOLVE_RECORD(p_TS, p_CNAME, NULL, NULL);
return rv632; }
}
else if ((l_K_630 == g_TS_ENUM))
{
l_T_629 = r_ENUM_CLASS(((*(R11 *)rt_nil_check(p_TS))).f_A, (((*(R11 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)), ((*(R11 *)rt_nil_check(p_TS))).f_LINE);
if (((((*(R11 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)) && (!(((*(R11 *)rt_nil_check(p_TS))).f_B == NULL))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("an UNORDERED type has no range", 30));
}
l_T_629 = r_WITH_RANGE(l_T_629, ((*(R11 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R11 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_629 = r_COPY_TYP(l_T_629);
((*(R14 *)rt_nil_check(l_T_629))).f_REPS = ((*(R11 *)rt_nil_check(p_TS))).f_C;
}
{ R14 * rv633 = l_T_629;
return rv633; }
}
else if ((l_K_630 == g_TS_GEN))
{
{ R14 * rv634 = r_GEN_TYPE(p_TS);
return rv634; }
}
else if ((!(l_K_630 == g_TS_NAME)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("a type specification expected", 29));
}
l_T_629 = r_RESOLVE_PREDEFINED(p_TS);
if ((l_T_629 == NULL))
{
l_T_629 = r_RESOLVE_USER(p_TS);
}
l_T_629 = r_WITH_RANGE(l_T_629, ((*(R11 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R11 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_629 = r_COPY_TYP(l_T_629);
((*(R14 *)rt_nil_check(l_T_629))).f_REPS = ((*(R11 *)rt_nil_check(p_TS))).f_C;
if ((!(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_TS))).f_C))).f_B == NULL)))
{
if (((!(((*(R14 *)rt_nil_check(l_T_629))).f_KIND == g_T_ENUM)) || (!((*(R14 *)rt_nil_check(l_T_629))).f_UNORDERED)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("ENUM_VAL_REP is only for UNORDERED types (3.4.3)", 48));
}
}
}
{ R14 * rv635 = l_T_629;
return rv635; }
rt_raise(RT_X_INIT);
}
static R14 * r_GEN_TYPE(R11 * p_TS) { 
R16 * l_B_636; memset(&l_B_636, 0, sizeof l_B_636);
l_B_636 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_636 == NULL)) goto L_end637;
{
if ((r_TEQ(((*(R16 *)rt_nil_check(l_B_636))).f_NAME, ((*(R11 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R16 *)rt_nil_check(l_B_636))).f_T == NULL))))
{
{ R14 * rv638 = ((*(R16 *)rt_nil_check(l_B_636))).f_T;
return rv638; }
}
l_B_636 = ((*(R16 *)rt_nil_check(l_B_636))).f_NEXT;
}
} L_end637: ;
{
R13 * l_Y_639; memset(&l_Y_639, 0, sizeof l_Y_639);
l_Y_639 = r_LOOKUP(((*(R11 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_639 == NULL)))
{
if (((((*(R13 *)rt_nil_check(l_Y_639))).f_KIND == g_Y_TYPE) && (!(((*(R13 *)rt_nil_check(l_Y_639))).f_T == NULL))))
{
{ R14 * rv640 = ((*(R13 *)rt_nil_check(l_Y_639))).f_T;
return rv640; }
}
}
}
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("a derived generic type outside a formal parameter list: \?", 57), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
rt_raise(RT_X_INIT);
}
static R14 * r_RESOLVE_PREDEFINED(R11 * p_TS) { 
R7 l_NAME_641; memset(&l_NAME_641, 0, sizeof l_NAME_641);
S_R7(&l_NAME_641, ((*(R11 *)rt_nil_check(p_TS))).f_NAME, 0);
R14 * l_T_642; memset(&l_T_642, 0, sizeof l_T_642);
if (r_TEQS(l_NAME_641, rt_str("FIXED", 5)))
{
{
R12 l_S_643; memset(&l_S_643, 0, sizeof l_S_643);
S_R12(&l_S_643, r_MANIFEST(r_NTH_ARG(p_TS, ((rt_int)0LL))), 0);
R12 l_R_644; memset(&l_R_644, 0, sizeof l_R_644);
S_R12(&l_R_644, r_MANIFEST(r_NTH_ARG(p_TS, ((rt_int)1LL))), 0);
R11 * l_P_645; memset(&l_P_645, 0, sizeof l_P_645);
l_P_645 = r_NTH_ARG(p_TS, ((rt_int)2LL));
if ((!(l_S_643).f_OK))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("the scale must be manifest (3.2.1)", 34));
}
if (((!(l_R_644).f_OK) || (!((l_R_644).f_V == ((rt_int)2LL)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("only radix 2 is predefined (3.2.1)", 34));
}
if (((((*(R11 *)rt_nil_check(l_P_645))).f_KIND == g_N_NAME) || (((*(R11 *)rt_nil_check(l_P_645))).f_KIND == g_N_ENUMLIT)))
{
if (((!(r_FIND_LITERAL(((*(R11 *)rt_nil_check(l_P_645))).f_NAME, NULL) == NULL)) && (!r_TEQS(((*(R11 *)rt_nil_check(l_P_645))).f_NAME, rt_str("STD", 3)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("only STD precision is predefined (3.2.1)", 40));
}
}
if (((l_S_643).f_V == ((rt_int)0LL)))
{
{ R14 * rv646 = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
return rv646; }
}
l_T_642 = r_NEW_TYP(g_T_INT);
((*(R14 *)rt_nil_check(l_T_642))).f_SCALE = (l_S_643).f_V;
{ R14 * rv647 = l_T_642;
return rv647; }
}
}
else if (r_TEQS(l_NAME_641, rt_str("FLOAT", 5)))
{
{
R12 l_P_648; memset(&l_P_648, 0, sizeof l_P_648);
S_R12(&l_P_648, r_MANIFEST(r_NTH_ARG(p_TS, ((rt_int)0LL))), 0);
if ((!(l_P_648).f_OK))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("the precision must be manifest (3.3.1)", 38));
}
if ((((l_P_648).f_V < ((rt_int)1LL)) || ((l_P_648).f_V > ((rt_int)15LL))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("precisions from 1 to 15 are implemented (3.3.1)", 47));
}
l_T_642 = r_NEW_TYP(g_T_FLOAT);
((*(R14 *)rt_nil_check(l_T_642))).f_SCALE = (l_P_648).f_V;
{ R14 * rv649 = l_T_642;
return rv649; }
}
}
else if (r_TEQS(l_NAME_641, rt_str("BIT", 3)))
{
l_T_642 = r_NEW_TYP(g_T_BITS);
r_STRING_LENGTH(l_T_642, r_NTH_ARG(p_TS, ((rt_int)0LL)));
{ R14 * rv650 = l_T_642;
return rv650; }
}
else if ((r_TEQS(l_NAME_641, rt_str("CHAR_STR", 8)) || r_TEQS(l_NAME_641, rt_str("ASCII_STR", 9))))
{
l_T_642 = r_NEW_TYP(g_T_STR);
r_STRING_LENGTH(l_T_642, r_NTH_ARG(p_TS, ((rt_int)0LL)));
if (r_TEQS(l_NAME_641, rt_str("CHAR_STR", 8)))
{
{
R11 * l_CS_651; memset(&l_CS_651, 0, sizeof l_CS_651);
l_CS_651 = r_NTH_ARG(p_TS, ((rt_int)1LL));
if (((((*(R11 *)rt_nil_check(l_CS_651))).f_KIND == g_TS_GEN) || (((*(R11 *)rt_nil_check(l_CS_651))).f_KIND == g_N_DONTCARE)))
{
{ R14 * rv652 = l_T_642;
return rv652; }
}
if ((!r_TEQS(((*(R11 *)rt_nil_check(l_CS_651))).f_NAME, rt_str("ASCII", 5))))
{
if ((!(((*(R14 *)rt_nil_check(r_ARG_TYPE(l_CS_651)))).f_KIND == g_T_ENUM)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset must be an enumerated type (3.7.1)", 44));
}
}
}
}
{ R14 * rv653 = l_T_642;
return rv653; }
}
else if (r_TEQS(l_NAME_641, rt_str("PTR", 3)))
{
l_T_642 = r_NEW_TYP(g_T_PTR);
((*(R14 *)rt_nil_check(l_T_642))).f_TARGET_TS = r_NTH_ARG(p_TS, ((rt_int)0LL));
{ R14 * rv654 = l_T_642;
return rv654; }
}
else if (r_TEQS(l_NAME_641, rt_str("SEMAPHORE", 9)))
{
l_T_642 = r_NEW_TYP(g_T_SEM);
{
R11 * l_U_655; memset(&l_U_655, 0, sizeof l_U_655);
l_U_655 = r_NTH_ARG(p_TS, ((rt_int)0LL));
if (r_TEQS(((*(R11 *)rt_nil_check(l_U_655))).f_NAME, rt_str("REGION", 6)))
{
((*(R14 *)rt_nil_check(l_T_642))).f_SCALE = ((rt_int)1LL);
}
else if ((!r_TEQS(((*(R11 *)rt_nil_check(l_U_655))).f_NAME, rt_str("SYNCH", 5))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("the use mode is SYNCH or REGION (3.11.1)", 40));
}
}
{ R14 * rv656 = l_T_642;
return rv656; }
}
{ R14 * rv657 = NULL;
return rv657; }
rt_raise(RT_X_INIT);
}
static void r_STRING_LENGTH(R14 * p_T, R11 * p_A) { 
if ((((*(R11 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
{
R16 * l_B_658; memset(&l_B_658, 0, sizeof l_B_658);
l_B_658 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_658 == NULL)) goto L_end659;
{
if ((r_TEQ(((*(R16 *)rt_nil_check(l_B_658))).f_NAME, ((*(R11 *)rt_nil_check(p_A))).f_NAME) && ((((*(R16 *)rt_nil_check(l_B_658))).f_C).f_LEN > ((rt_int)0LL))))
{
S_R7(&((*(R14 *)rt_nil_check(p_T))).f_LEN_C, ((*(R16 *)rt_nil_check(l_B_658))).f_C, 0);
S_R12(&((*(R14 *)rt_nil_check(p_T))).f_MLEN, ({ R12 rc660; memset(&rc660, 0, sizeof rc660);  rc660.f_OK = ((*(R16 *)rt_nil_check(l_B_658))).f_HASMV; rc660.f_V = ((*(R16 *)rt_nil_check(l_B_658))).f_MV; rc660; }), 0);
return;
}
l_B_658 = ((*(R16 *)rt_nil_check(l_B_658))).f_NEXT;
}
} L_end659: ;
}
S_R7(&((*(R14 *)rt_nil_check(p_T))).f_GEN, ((*(R11 *)rt_nil_check(p_A))).f_NAME, 0);
return;
}
else if ((((*(R11 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return;
}
{
R7 l_C_661; memset(&l_C_661, 0, sizeof l_C_661);
R12 l_M_662; memset(&l_M_662, 0, sizeof l_M_662);
r_ATTR_VALUE(p_A, &l_C_661, &l_M_662);
S_R7(&((*(R14 *)rt_nil_check(p_T))).f_LEN_C, l_C_661, 0);
S_R12(&((*(R14 *)rt_nil_check(p_T))).f_MLEN, l_M_662, 0);
((*(R14 *)rt_nil_check(p_T))).f_RLEVEL = r_CUR_LEVEL();
}
}
static R14 * r_RESOLVE_ARRAY(R11 * p_TS) { 
R14 * l_T_663; memset(&l_T_663, 0, sizeof l_T_663);
l_T_663 = r_NEW_TYP(g_T_ARR);
R11 * l_R_664; memset(&l_R_664, 0, sizeof l_R_664);
l_R_664 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
R17 * l_TAIL_665; memset(&l_TAIL_665, 0, sizeof l_TAIL_665);
l_TAIL_665 = NULL;
for (;;) {
if ((l_R_664 == NULL)) goto L_end666;
{
{
R17 * l_B_667; memset(&l_B_667, 0, sizeof l_B_667);
l_B_667 = ((R17 *)rt_alloc(sizeof (R17)));
R18 l_LO_668; memset(&l_LO_668, 0, sizeof l_LO_668);
R18 l_HI_669; memset(&l_HI_669, 0, sizeof l_HI_669);
if (r_IS_GENERIC_NODE(((*(R11 *)rt_nil_check(l_R_664))).f_A))
{
S_R18(&l_LO_668, r_MKET(r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_664))).f_A))).f_NAME, (((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_664))).f_A))).f_NAME).f_LEN))), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R18(&l_LO_668, r_EXPR(((*(R11 *)rt_nil_check(l_R_664))).f_A, NULL), 0);
}
if (r_IS_GENERIC_NODE(((*(R11 *)rt_nil_check(l_R_664))).f_B))
{
S_R18(&l_HI_669, r_MKET(r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_664))).f_B))).f_NAME, (((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_664))).f_B))).f_NAME).f_LEN))), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R18(&l_HI_669, r_EXPR(((*(R11 *)rt_nil_check(l_R_664))).f_B, (l_LO_668).f_T), 0);
}
S_R17(&(*(R17 *)rt_nil_check(l_B_667)), ({ R17 rc670; memset(&rc670, 0, sizeof rc670);  S_R7(&rc670.f_LO, (l_LO_668).f_C, 0); S_R7(&rc670.f_HI, (l_HI_669).f_C, 0); S_R12(&rc670.f_MLO, r_MANIFEST(((*(R11 *)rt_nil_check(l_R_664))).f_A), 0); S_R12(&rc670.f_MHI, r_MANIFEST(((*(R11 *)rt_nil_check(l_R_664))).f_B), 0); rc670.f_ANYARG = 0; rc670.f_NEXT = NULL; rc670; }), 0);
if ((((*(R14 *)rt_nil_check((l_LO_668).f_T))).f_KIND == g_T_ENUM))
{
S_R12(&((*(R17 *)rt_nil_check(l_B_667))).f_MLO, r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(l_R_664))).f_A, (l_LO_668).f_T), 0);
S_R12(&((*(R17 *)rt_nil_check(l_B_667))).f_MHI, r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(l_R_664))).f_B, (l_LO_668).f_T), 0);
}
else if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_LO_668).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(((*(R11 *)rt_nil_check(l_R_664))).f_LINE, rt_str("array bounds are integer or enumerated (3.8.1)", 46));
}
if ((l_TAIL_665 == NULL))
{
((*(R14 *)rt_nil_check(l_T_663))).f_BOUNDS = l_B_667;
}
else
{
((*(R17 *)rt_nil_check(l_TAIL_665))).f_NEXT = l_B_667;
}
l_TAIL_665 = l_B_667;
((*(R14 *)rt_nil_check(l_T_663))).f_DIMS = rt_add(((*(R14 *)rt_nil_check(l_T_663))).f_DIMS, ((rt_int)1LL));
}
l_R_664 = ((*(R11 *)rt_nil_check(l_R_664))).f_NEXT;
}
} L_end666: ;
((*(R14 *)rt_nil_check(l_T_663))).f_RLEVEL = r_CUR_LEVEL();
((*(R14 *)rt_nil_check(l_T_663))).f_ELEM = r_RESOLVE(((*(R11 *)rt_nil_check(p_TS))).f_C);
if ((((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_663))).f_ELEM))).f_KIND == g_T_ARR))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("ARRAY ... OF ARRAY is forbidden (3.8.1)", 39));
}
((*(R14 *)rt_nil_check(l_T_663))).f_REPS = ((*(R11 *)rt_nil_check(p_TS))).f_D;
S_R7(&((*(R14 *)rt_nil_check(l_T_663))).f_CNAME, r_ARRAY_STRUCT(((*(R14 *)rt_nil_check(l_T_663))).f_ELEM, ((*(R14 *)rt_nil_check(l_T_663))).f_DIMS), 0);
{ R14 * rv671 = l_T_663;
return rv671; }
rt_raise(RT_X_INIT);
}
static R14 * r_RESOLVE_USER(R11 * p_TS) { 
R13 * l_Y_672; memset(&l_Y_672, 0, sizeof l_Y_672);
l_Y_672 = r_ORIG_LOOKUP(((*(R11 *)rt_nil_check(p_TS))).f_NAME);
if ((((*(R11 *)rt_nil_check(p_TS))).f_A == NULL))
{
{
R16 * l_B_673; memset(&l_B_673, 0, sizeof l_B_673);
l_B_673 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_673 == NULL)) goto L_end674;
{
if ((r_TEQ(((*(R16 *)rt_nil_check(l_B_673))).f_NAME, ((*(R11 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R16 *)rt_nil_check(l_B_673))).f_T == NULL))))
{
{ R14 * rv675 = ((*(R16 *)rt_nil_check(l_B_673))).f_T;
return rv675; }
}
l_B_673 = ((*(R16 *)rt_nil_check(l_B_673))).f_NEXT;
}
} L_end674: ;
}
}
if ((l_Y_672 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R13 *)rt_nil_check(l_Y_672))).f_KIND == g_Y_GEN))
{
{ R14 * rv676 = r_GEN_TYPE(p_TS);
return rv676; }
}
if ((!(((*(R13 *)rt_nil_check(l_Y_672))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R13 *)rt_nil_check(l_Y_672))).f_DECL == NULL))
{
if ((!(((*(R11 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
{ R14 * rv677 = ((*(R13 *)rt_nil_check(l_Y_672))).f_T;
return rv677; }
}
{
R11 * l_D_678; memset(&l_D_678, 0, sizeof l_D_678);
l_D_678 = ((*(R13 *)rt_nil_check(l_Y_672))).f_DECL;
R14 * l_T_679; memset(&l_T_679, 0, sizeof l_T_679);
if ((((*(R11 *)rt_nil_check(l_D_678))).f_A == NULL))
{
if ((!(((*(R11 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R13 *)rt_nil_check(l_Y_672))).f_T == NULL))
{
if (((*(R13 *)rt_nil_check(l_Y_672))).f_BUSY)
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R13 *)rt_nil_check(l_Y_672))).f_BUSY = 1;
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_D_678))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R13 *)rt_nil_check(l_Y_672))).f_T = r_RESOLVE_RECORD(((*(R11 *)rt_nil_check(l_D_678))).f_B, r_RECORD_NAME(l_Y_672), l_Y_672, NULL);
}
else
{
((*(R13 *)rt_nil_check(l_Y_672))).f_T = r_RESOLVE_IN_DECL(l_Y_672, NULL);
if ((((((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_672))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)) && (!(((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_672))).f_T))).f_KIND == g_T_ENUM))))
{
((*(R13 *)rt_nil_check(l_Y_672))).f_T = r_COPY_TYP(((*(R13 *)rt_nil_check(l_Y_672))).f_T);
}
}
if (((((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_672))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R7(&((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_672))).f_T))).f_NAME, ((*(R13 *)rt_nil_check(l_Y_672))).f_NAME, 0);
}
((*(R13 *)rt_nil_check(l_Y_672))).f_BUSY = 0;
}
l_T_679 = ((*(R13 *)rt_nil_check(l_Y_672))).f_T;
}
else
{
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_D_678))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_679 = r_RECORD_INSTANCE(l_Y_672, p_TS);
}
else
{
l_T_679 = r_RESOLVE_IN_DECL(l_Y_672, p_TS);
}
}
{ R14 * rv680 = r_ABSTRACT_VIEW(l_Y_672, l_T_679);
return rv680; }
}
rt_raise(RT_X_INIT);
}
static R14 * r_ABSTRACT_VIEW(R13 * p_Y, R14 * p_T) { 
R14 * l_A_681; memset(&l_A_681, 0, sizeof l_A_681);
if (((((*(R13 *)rt_nil_check(p_Y))).f_MODL == NULL) || (!((*(R13 *)rt_nil_check(p_Y))).f_EXPORTED)))
{
{ R14 * rv682 = p_T;
return rv682; }
}
if (r_IN_MODULE(((*(R13 *)rt_nil_check(p_Y))).f_MODL))
{
{ R14 * rv683 = p_T;
return rv683; }
}
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
{ R14 * rv684 = p_T;
return rv684; }
}
l_A_681 = r_NEW_TYP(g_T_ABS);
((*(R14 *)rt_nil_check(l_A_681))).f_BASE = p_T;
S_R7(&((*(R14 *)rt_nil_check(l_A_681))).f_NAME, ((*(R13 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R14 *)rt_nil_check(l_A_681))).f_MODL = ((*(R13 *)rt_nil_check(p_Y))).f_MODL;
((*(R14 *)rt_nil_check(l_A_681))).f_DECL = p_Y;
((*(R14 *)rt_nil_check(l_A_681))).f_ARGS = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
{ R14 * rv685 = l_A_681;
return rv685; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R13 * p_M) { 
R13 * l_P_686; memset(&l_P_686, 0, sizeof l_P_686);
l_P_686 = ((*(R22 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_686 == NULL)) goto L_end687;
{
if ((l_P_686 == p_M))
{
{ rt_int rv688 = 1;
return rv688; }
}
l_P_686 = ((*(R13 *)rt_nil_check(l_P_686))).f_MODL;
}
} L_end687: ;
{ rt_int rv689 = 0;
return rv689; }
rt_raise(RT_X_INIT);
}
static R14 * r_RESOLVE_IN_DECL(R13 * p_Y, R11 * p_TS) { 
R11 * l_D_690; memset(&l_D_690, 0, sizeof l_D_690);
l_D_690 = ((*(R13 *)rt_nil_check(p_Y))).f_DECL;
R14 * l_T_691; memset(&l_T_691, 0, sizeof l_T_691);
if ((p_TS == NULL))
{
{ R14 * rv692 = r_RESOLVE(((*(R11 *)rt_nil_check(l_D_690))).f_B);
return rv692; }
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R11 *)rt_nil_check(l_D_690))).f_A, p_TS);
l_T_691 = r_RESOLVE(((*(R11 *)rt_nil_check(l_D_690))).f_B);
r_CLOSE_SCOPE();
{ R14 * rv693 = l_T_691;
return rv693; }
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R11 * p_FORMALS, R11 * p_TS) { 
R11 * l_F_694; memset(&l_F_694, 0, sizeof l_F_694);
l_F_694 = p_FORMALS;
R11 * l_A_695; memset(&l_A_695, 0, sizeof l_A_695);
l_A_695 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_694 == NULL)) goto L_end696;
{
{
R11 * l_N_697; memset(&l_N_697, 0, sizeof l_N_697);
l_N_697 = ((*(R11 *)rt_nil_check(l_F_694))).f_A;
for (;;) {
if ((l_N_697 == NULL)) goto L_end698;
{
if ((l_A_695 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R11 *)rt_nil_check(l_F_694))).f_B == NULL))
{
{
R13 * l_Y_699; memset(&l_Y_699, 0, sizeof l_Y_699);
l_Y_699 = r_NEW_SYM(g_Y_TYPE, ((*(R11 *)rt_nil_check(l_N_697))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_699))).f_T = r_ARG_TYPE(l_A_695);
r_DEFINE(l_Y_699, ((*(R11 *)rt_nil_check(l_A_695))).f_LINE);
}
}
else
{
{
R13 * l_Y_700; memset(&l_Y_700, 0, sizeof l_Y_700);
l_Y_700 = r_NEW_SYM(g_Y_CONST, ((*(R11 *)rt_nil_check(l_N_697))).f_NAME);
R7 l_C_701; memset(&l_C_701, 0, sizeof l_C_701);
R12 l_M_702; memset(&l_M_702, 0, sizeof l_M_702);
((*(R13 *)rt_nil_check(l_Y_700))).f_T = r_RESOLVE(((*(R11 *)rt_nil_check(l_F_694))).f_B);
if ((((*(R11 *)rt_nil_check(l_A_695))).f_KIND == g_N_ANY))
{
r_FAIL(((*(R11 *)rt_nil_check(l_A_695))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
if (((((*(R11 *)rt_nil_check(l_A_695))).f_KIND == g_TS_GEN) || (((*(R11 *)rt_nil_check(l_A_695))).f_KIND == g_N_DONTCARE)))
{
S_R7(&l_C_701, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R11 *)rt_nil_check(l_A_695))).f_NAME, (((*(R11 *)rt_nil_check(l_A_695))).f_NAME).f_LEN))), 0);
S_R12(&l_M_702, r_NO_MVAL(), 0);
}
else
{
r_ATTR_VALUE(l_A_695, &l_C_701, &l_M_702);
}
if (((!(((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_700))).f_T))).f_KIND == g_T_INT)) && (!r_IS_GEN_TEXT(l_C_701))))
{
S_R7(&l_C_701, (r_EXPR(l_A_695, ((*(R13 *)rt_nil_check(l_Y_700))).f_T)).f_C, 0);
S_R12(&l_M_702, r_ENUM_MANIFEST(l_A_695, ((*(R13 *)rt_nil_check(l_Y_700))).f_T), 0);
}
S_R7(&((*(R13 *)rt_nil_check(l_Y_700))).f_ACCESS, l_C_701, 0);
((*(R13 *)rt_nil_check(l_Y_700))).f_HASMV = (l_M_702).f_OK;
((*(R13 *)rt_nil_check(l_Y_700))).f_MV = (l_M_702).f_V;
((*(R13 *)rt_nil_check(l_Y_700))).f_INPUT = 1;
r_DEFINE(l_Y_700, ((*(R11 *)rt_nil_check(l_A_695))).f_LINE);
}
}
l_A_695 = ((*(R11 *)rt_nil_check(l_A_695))).f_NEXT;
l_N_697 = ((*(R11 *)rt_nil_check(l_N_697))).f_NEXT;
}
} L_end698: ;
}
l_F_694 = ((*(R11 *)rt_nil_check(l_F_694))).f_NEXT;
}
} L_end696: ;
if ((!(l_A_695 == NULL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
}
static R7 r_RECORD_NAME(R13 * p_Y) { 
if (((((*(R13 *)rt_nil_check(p_Y))).f_FWD).f_LEN == ((rt_int)0LL)))
{
S_R7(&((*(R13 *)rt_nil_check(p_Y))).f_FWD, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R13 *)rt_nil_check(p_Y))).f_FWD, ((*(R13 *)rt_nil_check(p_Y))).f_FWD));
}
{ R7 rv703 = ((*(R13 *)rt_nil_check(p_Y))).f_FWD;
return rv703; }
rt_raise(RT_X_INIT);
}
static R14 * r_TARGET(R14 * p_T) { 
if ((((*(R14 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R14 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R14 *)rt_nil_check(p_T))).f_TARGET_TS);
}
{ R14 * rv704 = ((*(R14 *)rt_nil_check(p_T))).f_TARGET;
return rv704; }
rt_raise(RT_X_INIT);
}
static R7 r_CTYPE(R14 * p_T) { 
rt_int l_K_705; memset(&l_K_705, 0, sizeof l_K_705);
l_K_705 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
{ R7 rv706 = r_MK(rt_str("rt_int", 6));
return rv706; }
}
else if ((l_K_705 == g_T_FLOAT))
{
{ R7 rv707 = r_MK(rt_str("double", 6));
return rv707; }
}
else if (((l_K_705 == g_T_STR) || (l_K_705 == g_T_BITS)))
{
{ R7 rv708 = r_MK(rt_str("rstr", 4));
return rv708; }
}
else if (((l_K_705 == g_T_REC) || (l_K_705 == g_T_ARR)))
{
{ R7 rv709 = ((*(R14 *)rt_nil_check(p_T))).f_CNAME;
return rv709; }
}
else if ((l_K_705 == g_T_ABS))
{
{ R7 rv710 = r_CTYPE(((*(R14 *)rt_nil_check(p_T))).f_BASE);
return rv710; }
}
else if ((l_K_705 == g_T_SEM))
{
{ R7 rv711 = r_MK(rt_str("rt_b_sem *", 10));
return rv711; }
}
else if ((l_K_705 == g_T_PATHS))
{
{ R7 rv712 = r_MK(rt_str("rt_b_paths", 10));
return rv712; }
}
else if ((l_K_705 == g_T_VOID))
{
{ R7 rv713 = r_MK(rt_str("void", 4));
return rv713; }
}
else if ((l_K_705 == g_T_PTR))
{
if ((((*(R14 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R11 * l_TT_714; memset(&l_TT_714, 0, sizeof l_TT_714);
l_TT_714 = ((*(R14 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R11 *)rt_nil_check(l_TT_714))).f_KIND == g_TS_NAME) && (((*(R11 *)rt_nil_check(l_TT_714))).f_A == NULL)))
{
{
R13 * l_Y_715; memset(&l_Y_715, 0, sizeof l_Y_715);
l_Y_715 = r_ORIG_LOOKUP(((*(R11 *)rt_nil_check(l_TT_714))).f_NAME);
if ((!(l_Y_715 == NULL)))
{
if (((((*(R13 *)rt_nil_check(l_Y_715))).f_KIND == g_Y_TYPE) && (!(((*(R13 *)rt_nil_check(l_Y_715))).f_DECL == NULL))))
{
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_715))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_715))).f_DECL))).f_A == NULL)))
{
{ R7 rv716 = r_CATS(r_RECORD_NAME(l_Y_715), rt_str(" *", 2));
return rv716; }
}
}
}
}
}
}
}
{ R7 rv717 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv717; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R11 * p_E) { 
{ rt_int rv718 = ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv718; }
rt_raise(RT_X_INIT);
}
static R15 * r_NEW_FIELD(R7 p_NAME, R14 * p_T, rt_int p_KIND) { 
R15 * l_F_719; memset(&l_F_719, 0, sizeof l_F_719);
l_F_719 = ((R15 *)rt_alloc(sizeof (R15)));
S_R15(&(*(R15 *)rt_nil_check(l_F_719)), ({ R15 rc720; memset(&rc720, 0, sizeof rc720);  S_R7(&rc720.f_NAME, p_NAME, 0); S_R7(&rc720.f_CNAME, r_FMT1(rt_str("f_@", 3), p_NAME), 0); rc720.f_T = p_T; rc720.f_KIND = p_KIND; S_R7(&rc720.f_TAGF, r_NO_TEXT(), 0); rc720.f_LABELS = NULL; rc720.f_NEXT = NULL; rc720; }), 0);
{ R15 * rv721 = l_F_719;
return rv721; }
rt_raise(RT_X_INIT);
}
static R15 * r_FIND_FIELD(R14 * p_T, R7 p_NAME) { 
R15 * l_F_722; memset(&l_F_722, 0, sizeof l_F_722);
l_F_722 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_722 == NULL)) goto L_end723;
{
if (r_TEQ(((*(R15 *)rt_nil_check(l_F_722))).f_NAME, p_NAME))
{
{ R15 * rv724 = l_F_722;
return rv724; }
}
l_F_722 = ((*(R15 *)rt_nil_check(l_F_722))).f_NEXT;
}
} L_end723: ;
{ R15 * rv725 = NULL;
return rv725; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R14 * p_T, R15 * p_F, R15 * *p_TAIL) { 
R15 * l_P_726; memset(&l_P_726, 0, sizeof l_P_726);
l_P_726 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_727; memset(&l_N_727, 0, sizeof l_N_727);
l_N_727 = ((rt_int)0LL);
for (;;) {
if ((l_P_726 == NULL)) goto L_end728;
{
if (r_TEQ(((*(R15 *)rt_nil_check(l_P_726))).f_NAME, ((*(R15 *)rt_nil_check(p_F))).f_NAME))
{
l_N_727 = rt_add(l_N_727, ((rt_int)1LL));
}
l_P_726 = ((*(R15 *)rt_nil_check(l_P_726))).f_NEXT;
}
} L_end728: ;
if ((l_N_727 > ((rt_int)0LL)))
{
S_R7(&((*(R15 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R15 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_727)), 0);
}
if (((*p_TAIL) == NULL))
{
((*(R14 *)rt_nil_check(p_T))).f_FIELDS = p_F;
}
else
{
((*(R15 *)rt_nil_check((*p_TAIL)))).f_NEXT = p_F;
}
(*p_TAIL) = p_F;
}
static void r_RECORD_FIELDS(R14 * p_T, R11 * p_DECLS, R7 p_TAGN, R11 * p_LABELS, R15 * *p_TAIL) { 
R11 * l_D_729; memset(&l_D_729, 0, sizeof l_D_729);
l_D_729 = p_DECLS;
for (;;) {
if ((l_D_729 == NULL)) goto L_end730;
{
if ((((*(R11 *)rt_nil_check(l_D_729))).f_KIND == g_N_VAR))
{
{
R14 * l_FT_731; memset(&l_FT_731, 0, sizeof l_FT_731);
l_FT_731 = r_RESOLVE(((*(R11 *)rt_nil_check(l_D_729))).f_B);
R11 * l_N_732; memset(&l_N_732, 0, sizeof l_N_732);
l_N_732 = ((*(R11 *)rt_nil_check(l_D_729))).f_A;
for (;;) {
if ((l_N_732 == NULL)) goto L_end733;
{
{
R15 * l_F_734; memset(&l_F_734, 0, sizeof l_F_734);
l_F_734 = r_NEW_FIELD(((*(R11 *)rt_nil_check(l_N_732))).f_NAME, l_FT_731, ((rt_int)0LL));
S_R7(&((*(R15 *)rt_nil_check(l_F_734))).f_TAGF, p_TAGN, 0);
((*(R15 *)rt_nil_check(l_F_734))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_734, &(*p_TAIL));
}
l_N_732 = ((*(R11 *)rt_nil_check(l_N_732))).f_NEXT;
}
} L_end733: ;
}
}
else
{
{
R15 * l_TF_735; memset(&l_TF_735, 0, sizeof l_TF_735);
l_TF_735 = r_FIND_FIELD(p_T, ((*(R11 *)rt_nil_check(l_D_729))).f_NAME);
R11 * l_S_736; memset(&l_S_736, 0, sizeof l_S_736);
l_S_736 = ((*(R11 *)rt_nil_check(l_D_729))).f_A;
if ((l_TF_735 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(l_D_729))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R11 *)rt_nil_check(l_D_729))).f_NAME);
}
if ((!(((*(R15 *)rt_nil_check(l_TF_735))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R11 *)rt_nil_check(l_D_729))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R11 *)rt_nil_check(l_D_729))).f_NAME);
}
for (;;) {
if ((l_S_736 == NULL)) goto L_end737;
{
r_RECORD_FIELDS(p_T, ((*(R11 *)rt_nil_check(l_S_736))).f_B, ((*(R11 *)rt_nil_check(l_D_729))).f_NAME, ((*(R11 *)rt_nil_check(l_S_736))).f_A, &(*p_TAIL));
l_S_736 = ((*(R11 *)rt_nil_check(l_S_736))).f_NEXT;
}
} L_end737: ;
}
}
l_D_729 = ((*(R11 *)rt_nil_check(l_D_729))).f_NEXT;
}
} L_end730: ;
}
static R14 * r_RESOLVE_RECORD(R11 * p_TS, R7 p_CNAME, R13 * p_Y, R11 * p_FORMALS) { 
R14 * l_T_738; memset(&l_T_738, 0, sizeof l_T_738);
l_T_738 = r_NEW_TYP(g_T_REC);
R15 * l_TAIL_739; memset(&l_TAIL_739, 0, sizeof l_TAIL_739);
l_TAIL_739 = NULL;
((*(R14 *)rt_nil_check(l_T_738))).f_BASE = l_T_738;
((*(R14 *)rt_nil_check(l_T_738))).f_DECL = p_Y;
((*(R14 *)rt_nil_check(l_T_738))).f_REPS = ((*(R11 *)rt_nil_check(p_TS))).f_D;
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R7(&((*(R14 *)rt_nil_check(l_T_738))).f_CNAME, p_CNAME, 0);
}
else
{
S_R7(&((*(R14 *)rt_nil_check(l_T_738))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R14 *)rt_nil_check(l_T_738))).f_CNAME, ((*(R14 *)rt_nil_check(l_T_738))).f_CNAME));
}
{
R11 * l_F_740; memset(&l_F_740, 0, sizeof l_F_740);
l_F_740 = p_FORMALS;
for (;;) {
if ((l_F_740 == NULL)) goto L_end741;
{
if ((!(((*(R11 *)rt_nil_check(l_F_740))).f_B == NULL)))
{
{
R14 * l_FT_742; memset(&l_FT_742, 0, sizeof l_FT_742);
l_FT_742 = r_RESOLVE(((*(R11 *)rt_nil_check(l_F_740))).f_B);
R11 * l_N_743; memset(&l_N_743, 0, sizeof l_N_743);
l_N_743 = ((*(R11 *)rt_nil_check(l_F_740))).f_A;
rt_int l_KIND_744; memset(&l_KIND_744, 0, sizeof l_KIND_744);
l_KIND_744 = ((rt_int)1LL);
if ((((*(R11 *)rt_nil_check(l_F_740))).f_IV == ((rt_int)1LL)))
{
l_KIND_744 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_742))) || (!(((*(R14 *)rt_nil_check(l_FT_742))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R11 *)rt_nil_check(l_F_740))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_743 == NULL)) goto L_end745;
{
r_ADD_FIELD(l_T_738, r_NEW_FIELD(((*(R11 *)rt_nil_check(l_N_743))).f_NAME, l_FT_742, l_KIND_744), &l_TAIL_739);
l_N_743 = ((*(R11 *)rt_nil_check(l_N_743))).f_NEXT;
}
} L_end745: ;
}
}
l_F_740 = ((*(R11 *)rt_nil_check(l_F_740))).f_NEXT;
}
} L_end741: ;
}
r_RECORD_FIELDS(l_T_738, ((*(R11 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_739);
r_COMPLETE_RECORD(l_T_738);
{ R14 * rv746 = l_T_738;
return rv746; }
rt_raise(RT_X_INIT);
}
static R14 * r_RECORD_INSTANCE(R13 * p_Y, R11 * p_TS) { 
R11 * l_D_747; memset(&l_D_747, 0, sizeof l_D_747);
l_D_747 = ((*(R13 *)rt_nil_check(p_Y))).f_DECL;
R14 * l_CLASS_748; memset(&l_CLASS_748, 0, sizeof l_CLASS_748);
l_CLASS_748 = NULL;
R16 * l_TARGS_749; memset(&l_TARGS_749, 0, sizeof l_TARGS_749);
l_TARGS_749 = NULL;
R17 * l_VARGS_750; memset(&l_VARGS_750, 0, sizeof l_VARGS_750);
l_VARGS_750 = NULL;
R17 * l_VTAIL_751; memset(&l_VTAIL_751, 0, sizeof l_VTAIL_751);
l_VTAIL_751 = NULL;
R11 * l_A_752; memset(&l_A_752, 0, sizeof l_A_752);
l_A_752 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
R11 * l_F_753; memset(&l_F_753, 0, sizeof l_F_753);
l_F_753 = ((*(R11 *)rt_nil_check(l_D_747))).f_A;
for (;;) {
if ((l_F_753 == NULL)) goto L_end754;
{
{
R11 * l_N_755; memset(&l_N_755, 0, sizeof l_N_755);
l_N_755 = ((*(R11 *)rt_nil_check(l_F_753))).f_A;
for (;;) {
if ((l_N_755 == NULL)) goto L_end756;
{
if ((l_A_752 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R11 *)rt_nil_check(l_F_753))).f_B == NULL))
{
{
R16 * l_B_757; memset(&l_B_757, 0, sizeof l_B_757);
l_B_757 = ((R16 *)rt_alloc(sizeof (R16)));
S_R16(&(*(R16 *)rt_nil_check(l_B_757)), ({ R16 rc758; memset(&rc758, 0, sizeof rc758);  S_R7(&rc758.f_NAME, ((*(R11 *)rt_nil_check(l_N_755))).f_NAME, 0); rc758.f_T = r_ARG_TYPE(l_A_752); S_R7(&rc758.f_C, r_NO_TEXT(), 0); rc758.f_HASMV = 0; rc758.f_MV = ((rt_int)0LL); rc758.f_R = NULL; rc758.f_NEXT = l_TARGS_749; rc758; }), 0);
l_TARGS_749 = l_B_757;
}
}
else
{
{
R17 * l_V_759; memset(&l_V_759, 0, sizeof l_V_759);
l_V_759 = ((R17 *)rt_alloc(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_V_759)), ({ R17 rc760; memset(&rc760, 0, sizeof rc760);  S_R7(&rc760.f_LO, r_NO_TEXT(), 0); S_R7(&rc760.f_HI, r_NO_TEXT(), 0); S_R12(&rc760.f_MLO, r_NO_MVAL(), 0); S_R12(&rc760.f_MHI, r_NO_MVAL(), 0); rc760.f_ANYARG = 0; rc760.f_NEXT = NULL; rc760; }), 0);
if ((((*(R11 *)rt_nil_check(l_A_752))).f_KIND == g_N_ANY))
{
if ((!(((*(R11 *)rt_nil_check(l_F_753))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R11 *)rt_nil_check(l_A_752))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R17 *)rt_nil_check(l_V_759))).f_ANYARG = 1;
}
else if ((((*(R11 *)rt_nil_check(l_A_752))).f_KIND == g_N_DONTCARE))
{
((*(R17 *)rt_nil_check(l_V_759))).f_ANYARG = 1;
S_R7(&((*(R17 *)rt_nil_check(l_V_759))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R11 *)rt_nil_check(l_A_752))).f_KIND == g_TS_GEN))
{
((*(R17 *)rt_nil_check(l_V_759))).f_ANYARG = 1;
S_R7(&((*(R17 *)rt_nil_check(l_V_759))).f_HI, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R11 *)rt_nil_check(l_A_752))).f_NAME, (((*(R11 *)rt_nil_check(l_A_752))).f_NAME).f_LEN))), 0);
}
else
{
{
R14 * l_FT_761; memset(&l_FT_761, 0, sizeof l_FT_761);
l_FT_761 = r_RESOLVE(((*(R11 *)rt_nil_check(l_F_753))).f_B);
S_R7(&((*(R17 *)rt_nil_check(l_V_759))).f_LO, (r_EXPR(l_A_752, l_FT_761)).f_C, 0);
S_R12(&((*(R17 *)rt_nil_check(l_V_759))).f_MLO, r_ENUM_MANIFEST(l_A_752, l_FT_761), 0);
if (((((*(R11 *)rt_nil_check(l_F_753))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(l_V_759))).f_MLO).f_OK)))
{
r_FAIL(((*(R11 *)rt_nil_check(l_A_752))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_751 == NULL))
{
l_VARGS_750 = l_V_759;
}
else
{
((*(R17 *)rt_nil_check(l_VTAIL_751))).f_NEXT = l_V_759;
}
l_VTAIL_751 = l_V_759;
}
}
l_A_752 = ((*(R11 *)rt_nil_check(l_A_752))).f_NEXT;
l_N_755 = ((*(R11 *)rt_nil_check(l_N_755))).f_NEXT;
}
} L_end756: ;
}
l_F_753 = ((*(R11 *)rt_nil_check(l_F_753))).f_NEXT;
}
} L_end754: ;
if ((!(l_A_752 == NULL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
{
R13 * l_R_762; memset(&l_R_762, 0, sizeof l_R_762);
l_R_762 = ((*(R22 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_762 == NULL)) goto L_end763;
{
if (((((*(R13 *)rt_nil_check(l_R_762))).f_DECL == l_D_747) && r_SAME_BINDS(((*(R13 *)rt_nil_check(l_R_762))).f_BINDINGS, l_TARGS_749)))
{
l_CLASS_748 = ((*(R13 *)rt_nil_check(l_R_762))).f_T;
goto L_end763;
}
l_R_762 = ((*(R13 *)rt_nil_check(l_R_762))).f_INSTANCES;
}
} L_end763: ;
}
if ((l_CLASS_748 == NULL))
{
{
R13 * l_R_764; memset(&l_R_764, 0, sizeof l_R_764);
l_R_764 = r_NEW_SYM(g_Y_TYPE, ((*(R13 *)rt_nil_check(p_Y))).f_NAME);
R16 * l_B_765; memset(&l_B_765, 0, sizeof l_B_765);
l_B_765 = l_TARGS_749;
R16 * l_SAVED_766; memset(&l_SAVED_766, 0, sizeof l_SAVED_766);
l_SAVED_766 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
((*(R13 *)rt_nil_check(l_R_764))).f_DECL = l_D_747;
((*(R13 *)rt_nil_check(l_R_764))).f_BINDINGS = l_TARGS_749;
((*(R13 *)rt_nil_check(l_R_764))).f_INSTANCES = ((*(R22 *)rt_nil_check(g_W))).f_RECS;
((*(R22 *)rt_nil_check(g_W))).f_RECS = l_R_764;
r_OPEN_SCOPE();
for (;;) {
if ((l_B_765 == NULL)) goto L_end767;
{
{
R13 * l_TY_768; memset(&l_TY_768, 0, sizeof l_TY_768);
l_TY_768 = r_NEW_SYM(g_Y_TYPE, ((*(R16 *)rt_nil_check(l_B_765))).f_NAME);
((*(R13 *)rt_nil_check(l_TY_768))).f_T = ((*(R16 *)rt_nil_check(l_B_765))).f_T;
r_DEFINE(l_TY_768, ((*(R11 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_765 = ((*(R16 *)rt_nil_check(l_B_765))).f_NEXT;
}
} L_end767: ;
l_F_753 = ((*(R11 *)rt_nil_check(l_D_747))).f_A;
for (;;) {
if ((l_F_753 == NULL)) goto L_end769;
{
if ((!(((*(R11 *)rt_nil_check(l_F_753))).f_B == NULL)))
{
{
R11 * l_N_770; memset(&l_N_770, 0, sizeof l_N_770);
l_N_770 = ((*(R11 *)rt_nil_check(l_F_753))).f_A;
for (;;) {
if ((l_N_770 == NULL)) goto L_end771;
{
{
R13 * l_P_772; memset(&l_P_772, 0, sizeof l_P_772);
l_P_772 = r_NEW_SYM(g_Y_CONST, ((*(R11 *)rt_nil_check(l_N_770))).f_NAME);
((*(R13 *)rt_nil_check(l_P_772))).f_T = r_RESOLVE(((*(R11 *)rt_nil_check(l_F_753))).f_B);
S_R7(&((*(R13 *)rt_nil_check(l_P_772))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), ((*(R11 *)rt_nil_check(l_N_770))).f_NAME), 0);
((*(R13 *)rt_nil_check(l_P_772))).f_INPUT = 1;
((*(R13 *)rt_nil_check(l_P_772))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_772, ((*(R11 *)rt_nil_check(l_F_753))).f_LINE);
}
l_N_770 = ((*(R11 *)rt_nil_check(l_N_770))).f_NEXT;
}
} L_end771: ;
}
}
l_F_753 = ((*(R11 *)rt_nil_check(l_F_753))).f_NEXT;
}
} L_end769: ;
if ((l_TARGS_749 == NULL))
{
l_CLASS_748 = r_RESOLVE_RECORD(((*(R11 *)rt_nil_check(l_D_747))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R11 *)rt_nil_check(l_D_747))).f_A);
}
else
{
l_CLASS_748 = r_RESOLVE_RECORD(((*(R11 *)rt_nil_check(l_D_747))).f_B, r_NO_TEXT(), p_Y, ((*(R11 *)rt_nil_check(l_D_747))).f_A);
}
S_R7(&((*(R14 *)rt_nil_check(l_CLASS_748))).f_NAME, ((*(R13 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R13 *)rt_nil_check(l_R_764))).f_T = l_CLASS_748;
r_CLOSE_SCOPE();
((*(R22 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_766;
}
}
{
R14 * l_T_773; memset(&l_T_773, 0, sizeof l_T_773);
l_T_773 = r_COPY_TYP(l_CLASS_748);
((*(R14 *)rt_nil_check(l_T_773))).f_ARGS = l_VARGS_750;
{ R14 * rv774 = l_T_773;
return rv774; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R16 * p_A, R16 * p_B) { 
R16 * l_P_775; memset(&l_P_775, 0, sizeof l_P_775);
l_P_775 = p_A;
R16 * l_Q_776; memset(&l_Q_776, 0, sizeof l_Q_776);
l_Q_776 = p_B;
for (;;) {
if (((l_P_775 == NULL) || (l_Q_776 == NULL))) goto L_end777;
{
if ((!r_SAME_TYPE(((*(R16 *)rt_nil_check(l_P_775))).f_T, ((*(R16 *)rt_nil_check(l_Q_776))).f_T)))
{
{ rt_int rv778 = 0;
return rv778; }
}
l_P_775 = ((*(R16 *)rt_nil_check(l_P_775))).f_NEXT;
l_Q_776 = ((*(R16 *)rt_nil_check(l_Q_776))).f_NEXT;
}
} L_end777: ;
{ rt_int rv779 = ((l_P_775 == NULL) && (l_Q_776 == NULL));
return rv779; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R14 * p_T) { 
R17 * l_A_780; memset(&l_A_780, 0, sizeof l_A_780);
l_A_780 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_780 == NULL)) goto L_end781;
{
if (((*(R17 *)rt_nil_check(l_A_780))).f_ANYARG)
{
{ rt_int rv782 = 1;
return rv782; }
}
l_A_780 = ((*(R17 *)rt_nil_check(l_A_780))).f_NEXT;
}
} L_end781: ;
{ rt_int rv783 = 0;
return rv783; }
rt_raise(RT_X_INIT);
}
static R7 r_VARIANT_COND(R15 * p_F, R14 * p_T, R7 p_SELF) { 
R11 * l_L_784; memset(&l_L_784, 0, sizeof l_L_784);
l_L_784 = ((*(R15 *)rt_nil_check(p_F))).f_LABELS;
R7 l_C_785; memset(&l_C_785, 0, sizeof l_C_785);
S_R7(&l_C_785, r_MK(rt_str("0", 1)), 0);
R15 * l_TF_786; memset(&l_TF_786, 0, sizeof l_TF_786);
l_TF_786 = r_FIND_FIELD(p_T, ((*(R15 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_784 == NULL)) goto L_end787;
{
if ((((*(R11 *)rt_nil_check(l_L_784))).f_KIND == g_N_RANGE))
{
S_R7(&l_C_785, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_785, p_SELF, ((*(R15 *)rt_nil_check(l_TF_786))).f_CNAME), 0);
S_R7(&l_C_785, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_785, (r_EXPR(((*(R11 *)rt_nil_check(l_L_784))).f_A, ((*(R15 *)rt_nil_check(l_TF_786))).f_T)).f_C, p_SELF, ((*(R15 *)rt_nil_check(l_TF_786))).f_CNAME), 0);
S_R7(&l_C_785, r_FMT2(rt_str("@@)", 3), l_C_785, (r_EXPR(((*(R11 *)rt_nil_check(l_L_784))).f_B, ((*(R15 *)rt_nil_check(l_TF_786))).f_T)).f_C), 0);
}
else
{
S_R7(&l_C_785, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_785, p_SELF, ((*(R15 *)rt_nil_check(l_TF_786))).f_CNAME, (r_EXPR(l_L_784, ((*(R15 *)rt_nil_check(l_TF_786))).f_T)).f_C), 0);
}
l_L_784 = ((*(R11 *)rt_nil_check(l_L_784))).f_NEXT;
}
} L_end787: ;
{ R7 rv788 = r_FMT1(rt_str("(@)", 3), l_C_785);
return rv788; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R14 * p_T) { 
R7 l_C_789; memset(&l_C_789, 0, sizeof l_C_789);
S_R7(&l_C_789, ((*(R14 *)rt_nil_check(p_T))).f_CNAME, 0);
R15 * l_F_790; memset(&l_F_790, 0, sizeof l_F_790);
l_F_790 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
R7 l_BODY_791; memset(&l_BODY_791, 0, sizeof l_BODY_791);
S_R7(&l_BODY_791, r_MK(rt_str("", 0)), 0);
R7 l_ASSIGN_792; memset(&l_ASSIGN_792, 0, sizeof l_ASSIGN_792);
S_R7(&l_ASSIGN_792, r_MK(rt_str("", 0)), 0);
R7 l_EQ_793; memset(&l_EQ_793, 0, sizeof l_EQ_793);
S_R7(&l_EQ_793, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_790 == NULL)) goto L_end794;
{
S_R7(&l_BODY_791, r_FMT3(rt_str("@ @ @;", 6), l_BODY_791, r_CTYPE(((*(R15 *)rt_nil_check(l_F_790))).f_T), ((*(R15 *)rt_nil_check(l_F_790))).f_CNAME), 0);
if ((((*(R15 *)rt_nil_check(l_F_790))).f_KIND == ((rt_int)1LL)))
{
S_R7(&l_ASSIGN_792, r_FMT3(rt_str("@ if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 48), l_ASSIGN_792, ((*(R15 *)rt_nil_check(l_F_790))).f_CNAME, ((*(R15 *)rt_nil_check(l_F_790))).f_CNAME), 0);
}
else if ((((*(R15 *)rt_nil_check(l_F_790))).f_KIND == ((rt_int)2LL)))
{
S_R7(&l_ASSIGN_792, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_792, ((*(R15 *)rt_nil_check(l_F_790))).f_CNAME, ((*(R15 *)rt_nil_check(l_F_790))).f_CNAME, ((*(R15 *)rt_nil_check(l_F_790))).f_CNAME), 0);
}
else
{
S_R7(&l_ASSIGN_792, r_FMT2(rt_str("@ @", 3), l_ASSIGN_792, r_ASSIGN_CODE(((*(R15 *)rt_nil_check(l_F_790))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R15 *)rt_nil_check(l_F_790))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R15 *)rt_nil_check(l_F_790))).f_CNAME))), 0);
}
if (((((*(R15 *)rt_nil_check(l_F_790))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R7(&l_EQ_793, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_793, r_VARIANT_COND(l_F_790, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R15 *)rt_nil_check(l_F_790))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R15 *)rt_nil_check(l_F_790))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R15 *)rt_nil_check(l_F_790))).f_CNAME))), 0);
}
else
{
S_R7(&l_EQ_793, r_FMT2(rt_str("@ && @", 6), l_EQ_793, r_EQUAL_CODE(((*(R15 *)rt_nil_check(l_F_790))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R15 *)rt_nil_check(l_F_790))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R15 *)rt_nil_check(l_F_790))).f_CNAME))), 0);
}
l_F_790 = ((*(R15 *)rt_nil_check(l_F_790))).f_NEXT;
}
} L_end794: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_789, l_BODY_791));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_789, l_C_789, l_C_789));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_789, l_C_789, l_C_789));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_789, l_C_789, l_C_789, l_ASSIGN_792));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_789, l_C_789, l_C_789, l_EQ_793));
}
static R7 r_ARRAY_STRUCT(R14 * p_ELEM, rt_int p_DIMS) { 
R7 l_ET_C_795; memset(&l_ET_C_795, 0, sizeof l_ET_C_795);
S_R7(&l_ET_C_795, r_CTYPE(p_ELEM), 0);
R7 l_KEY_796; memset(&l_KEY_796, 0, sizeof l_KEY_796);
S_R7(&l_KEY_796, r_FMT3(rt_str("@/@/@", 5), l_ET_C_795, r_NUM(p_DIMS), r_NUM(((*(R14 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R13 * l_Y_797; memset(&l_Y_797, 0, sizeof l_Y_797);
l_Y_797 = ((*(R22 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_797 == NULL)) goto L_end798;
{
if ((r_TEQ(((*(R13 *)rt_nil_check(l_Y_797))).f_NAME, l_KEY_796) && r_SAME_TYPE(((*(R13 *)rt_nil_check(l_Y_797))).f_T, p_ELEM)))
{
{ R7 rv799 = ((*(R13 *)rt_nil_check(l_Y_797))).f_ACCESS;
return rv799; }
}
l_Y_797 = ((*(R13 *)rt_nil_check(l_Y_797))).f_INSTANCES;
}
} L_end798: ;
l_Y_797 = r_NEW_SYM(g_Y_TYPE, l_KEY_796);
((*(R13 *)rt_nil_check(l_Y_797))).f_T = p_ELEM;
S_R7(&((*(R13 *)rt_nil_check(l_Y_797))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R13 *)rt_nil_check(l_Y_797))).f_INSTANCES = ((*(R22 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R22 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_797;
{
R7 l_C_800; memset(&l_C_800, 0, sizeof l_C_800);
S_R7(&l_C_800, ((*(R13 *)rt_nil_check(l_Y_797))).f_ACCESS, 0);
R7 l_D_801; memset(&l_D_801, 0, sizeof l_D_801);
S_R7(&l_D_801, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_800, l_C_800));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_800, l_D_801, l_D_801, l_ET_C_795));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_800, l_C_800, l_C_800));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_800, l_C_800, l_C_800));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_800, l_C_800, l_C_800, l_D_801));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_801, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_800, l_C_800, l_C_800, l_D_801));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_801, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
}
{ R7 rv802 = ((*(R13 *)rt_nil_check(l_Y_797))).f_ACCESS;
return rv802; }
rt_raise(RT_X_INIT);
}
static R7 r_INIT_CODE(R14 * p_T, R7 p_LV) { 
rt_int l_K_803; memset(&l_K_803, 0, sizeof l_K_803);
l_K_803 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_803 == g_T_STR))
{
if (((((*(R14 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R7 rv804 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv804; }
}
{ R7 rv805 = r_FMT2(rt_str("@ = rt_str_new(@);", 18), p_LV, ((*(R14 *)rt_nil_check(p_T))).f_LEN_C);
return rv805; }
}
else if ((l_K_803 == g_T_BITS))
{
if (((((*(R14 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R7 rv806 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv806; }
}
{ R7 rv807 = r_FMT2(rt_str("@ = rt_b_zeros(@);", 18), p_LV, ((*(R14 *)rt_nil_check(p_T))).f_LEN_C);
return rv807; }
}
else if ((l_K_803 == g_T_SEM))
{
{ R7 rv808 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R14 *)rt_nil_check(p_T))).f_SCALE));
return rv808; }
}
else if ((l_K_803 == g_T_ABS))
{
{ R7 rv809 = r_INIT_CODE(((*(R14 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv809; }
}
else if ((l_K_803 == g_T_ARR))
{
{
R17 * l_B_810; memset(&l_B_810, 0, sizeof l_B_810);
l_B_810 = ((*(R14 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_811; memset(&l_I_811, 0, sizeof l_I_811);
l_I_811 = ((rt_int)0LL);
R7 l_R_812; memset(&l_R_812, 0, sizeof l_R_812);
S_R7(&l_R_812, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_810 == NULL)) goto L_end813;
{
S_R7(&l_R_812, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_812, p_LV, r_NUM(l_I_811), ((*(R17 *)rt_nil_check(l_B_810))).f_LO), 0);
S_R7(&l_R_812, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_812, p_LV, r_NUM(l_I_811), ((*(R17 *)rt_nil_check(l_B_810))).f_HI), 0);
l_I_811 = rt_add(l_I_811, ((rt_int)1LL));
l_B_810 = ((*(R17 *)rt_nil_check(l_B_810))).f_NEXT;
}
} L_end813: ;
S_R7(&l_R_812, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_812, r_NUM(((*(R14 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R7(&l_R_812, r_FMT3(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)(n \? n : 1));", 52), l_R_812, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R14 *)rt_nil_check(p_T))).f_ELEM))
{
{
R7 l_IV_814; memset(&l_IV_814, 0, sizeof l_IV_814);
S_R7(&l_IV_814, r_NEW_NAME(rt_str("i", 1)), 0);
S_R7(&l_R_812, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_812, l_IV_814, l_IV_814, l_IV_814), 0);
S_R7(&l_R_812, r_FMT2(rt_str("@ @ }", 5), l_R_812, r_INIT_CODE(((*(R14 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_814))), 0);
}
}
{ R7 rv815 = r_CATS(l_R_812, rt_str(" }", 2));
return rv815; }
}
}
else if ((l_K_803 == g_T_REC))
{
{
R15 * l_F_816; memset(&l_F_816, 0, sizeof l_F_816);
l_F_816 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
R17 * l_A_817; memset(&l_A_817, 0, sizeof l_A_817);
l_A_817 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
R7 l_R_818; memset(&l_R_818, 0, sizeof l_R_818);
S_R7(&l_R_818, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_816 == NULL)) goto L_end819;
{
if ((!(((*(R15 *)rt_nil_check(l_F_816))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_817 == NULL)))
{
if ((!((*(R17 *)rt_nil_check(l_A_817))).f_ANYARG))
{
S_R7(&l_R_818, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_818, p_LV, ((*(R15 *)rt_nil_check(l_F_816))).f_CNAME, ((*(R17 *)rt_nil_check(l_A_817))).f_LO), 0);
}
l_A_817 = ((*(R17 *)rt_nil_check(l_A_817))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R15 *)rt_nil_check(l_F_816))).f_T))
{
S_R7(&l_R_818, r_FMT2(rt_str("@ @", 3), l_R_818, r_SUBST_SELF(r_INIT_CODE(((*(R15 *)rt_nil_check(l_F_816))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R15 *)rt_nil_check(l_F_816))).f_CNAME)), p_LV)), 0);
}
l_F_816 = ((*(R15 *)rt_nil_check(l_F_816))).f_NEXT;
}
} L_end819: ;
{ R7 rv820 = l_R_818;
return rv820; }
}
}
{ R7 rv821 = r_NO_TEXT();
return rv821; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R14 * p_T) { 
rt_int l_K_822; memset(&l_K_822, 0, sizeof l_K_822);
l_K_822 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_822 == g_T_STR) || (l_K_822 == g_T_BITS)) || (l_K_822 == g_T_ARR)) || (l_K_822 == g_T_SEM)))
{
{ rt_int rv823 = 1;
return rv823; }
}
else if ((l_K_822 == g_T_ABS))
{
{ rt_int rv824 = r_NEEDS_INIT(((*(R14 *)rt_nil_check(p_T))).f_BASE);
return rv824; }
}
else if ((l_K_822 == g_T_REC))
{
if ((!(((*(R14 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv825 = 1;
return rv825; }
}
{
R15 * l_F_826; memset(&l_F_826, 0, sizeof l_F_826);
l_F_826 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_826 == NULL)) goto L_end827;
{
if (r_NEEDS_INIT(((*(R15 *)rt_nil_check(l_F_826))).f_T))
{
{ rt_int rv828 = 1;
return rv828; }
}
l_F_826 = ((*(R15 *)rt_nil_check(l_F_826))).f_NEXT;
}
} L_end827: ;
}
}
{ rt_int rv829 = 0;
return rv829; }
rt_raise(RT_X_INIT);
}
static R7 r_ASSIGN_CODE(R14 * p_T, R7 p_LV, R7 p_RV) { 
rt_int l_K_830; memset(&l_K_830, 0, sizeof l_K_830);
l_K_830 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_830 == g_T_STR) || (l_K_830 == g_T_BITS)))
{
{ R7 rv831 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv831; }
}
else if ((l_K_830 == g_T_ABS))
{
{ R7 rv832 = r_ASSIGN_CODE(((*(R14 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv832; }
}
else if ((l_K_830 == g_T_SEM))
{
{ R7 rv833 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv833; }
}
else if ((l_K_830 == g_T_ARR))
{
{ R7 rv834 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R14 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv834; }
}
else if ((l_K_830 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R7 rv835 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R14 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv835; }
}
{ R7 rv836 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R14 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv836; }
}
{ R7 rv837 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv837; }
rt_raise(RT_X_INIT);
}
static R7 r_EQUAL_CODE(R14 * p_T, R7 p_A, R7 p_B) { 
rt_int l_K_838; memset(&l_K_838, 0, sizeof l_K_838);
l_K_838 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_838 == g_T_STR) || (l_K_838 == g_T_BITS)))
{
{ R7 rv839 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv839; }
}
else if ((l_K_838 == g_T_ABS))
{
{ R7 rv840 = r_EQUAL_CODE(((*(R14 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv840; }
}
else if (((l_K_838 == g_T_ARR) || (l_K_838 == g_T_REC)))
{
{ R7 rv841 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R14 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv841; }
}
else if ((l_K_838 == g_T_SEM))
{
{ R7 rv842 = r_MK(rt_str("0", 1));
return rv842; }
}
{ R7 rv843 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv843; }
rt_raise(RT_X_INIT);
}
static R7 r_RANGE_CHECK(R14 * p_T, R7 p_V, R7 p_SELF) { 
if ((((((*(R14 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))))
{
{ R7 rv844 = p_V;
return rv844; }
}
if ((r_IS_GEN_TEXT(((*(R14 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R14 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R7 rv845 = p_V;
return rv845; }
}
if ((((((*(R14 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R14 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R14 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R14 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R7 rv846 = p_V;
return rv846; }
}
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
{ R7 rv847 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R14 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R14 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv847; }
}
{ R7 rv848 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R14 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R14 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv848; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R14 * p_T) { 
{ rt_int rv849 = (((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv849; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R14 * p_A, R14 * p_B) { 
if ((p_A == p_B))
{
{ rt_int rv850 = 1;
return rv850; }
}
if (((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R14 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv851 = r_SAME_CLASS(((*(R14 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv851; }
}
else if (((((*(R14 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv852 = r_SAME_CLASS(p_A, ((*(R14 *)rt_nil_check(p_B))).f_BASE);
return rv852; }
}
if ((!(((*(R14 *)rt_nil_check(p_A))).f_KIND == ((*(R14 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv853 = 0;
return rv853; }
}
if (((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv854 = (((*(R14 *)rt_nil_check(p_A))).f_BASE == ((*(R14 *)rt_nil_check(p_B))).f_BASE);
return rv854; }
}
else if ((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv855 = ((((*(R14 *)rt_nil_check(p_A))).f_DIMS == ((*(R14 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R14 *)rt_nil_check(p_A))).f_ELEM, ((*(R14 *)rt_nil_check(p_B))).f_ELEM));
return rv855; }
}
else if ((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv856 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv856; }
}
else if ((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv857 = ((r_ORIGINAL(((*(R14 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R14 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R14 *)rt_nil_check(p_A))).f_BASE, ((*(R14 *)rt_nil_check(p_B))).f_BASE));
return rv857; }
}
{ rt_int rv858 = 1;
return rv858; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R14 * p_A, R14 * p_B) { 
if ((p_A == p_B))
{
{ rt_int rv859 = 1;
return rv859; }
}
if (((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R14 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv860 = r_SAME_TYPE(((*(R14 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv860; }
}
else if (((((*(R14 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv861 = r_SAME_TYPE(p_A, ((*(R14 *)rt_nil_check(p_B))).f_BASE);
return rv861; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv862 = 0;
return rv862; }
}
if (((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv863 = (((*(R14 *)rt_nil_check(p_A))).f_SCALE == ((*(R14 *)rt_nil_check(p_B))).f_SCALE);
return rv863; }
}
else if ((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv864 = r_SAME_TYPE(((*(R14 *)rt_nil_check(p_A))).f_ELEM, ((*(R14 *)rt_nil_check(p_B))).f_ELEM);
return rv864; }
}
else if ((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv865 = r_SAME_ARGS(((*(R14 *)rt_nil_check(p_A))).f_ARGS, ((*(R14 *)rt_nil_check(p_B))).f_ARGS);
return rv865; }
}
else if ((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv866 = r_SAME_TYPE(((*(R14 *)rt_nil_check(p_A))).f_BASE, ((*(R14 *)rt_nil_check(p_B))).f_BASE);
return rv866; }
}
{ rt_int rv867 = 1;
return rv867; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R17 * p_B) { 
if (((((*(R17 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv868 = 0;
return rv868; }
}
{ rt_int rv869 = rt_b_eq(rt_b_slice(r_STR(((*(R17 *)rt_nil_check(p_B))).f_HI, (((*(R17 *)rt_nil_check(p_B))).f_HI).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv869; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R17 * p_A, R17 * p_B) { 
R17 * l_P_870; memset(&l_P_870, 0, sizeof l_P_870);
l_P_870 = p_A;
R17 * l_Q_871; memset(&l_Q_871, 0, sizeof l_Q_871);
l_Q_871 = p_B;
for (;;) {
if (((l_P_870 == NULL) || (l_Q_871 == NULL))) goto L_end872;
{
if ((r_IS_GEN_ARG(l_P_870) || r_IS_GEN_ARG(l_Q_871)))
{
}
else if ((!(((*(R17 *)rt_nil_check(l_P_870))).f_ANYARG == ((*(R17 *)rt_nil_check(l_Q_871))).f_ANYARG)))
{
{ rt_int rv873 = 0;
return rv873; }
}
if (((((*(R17 *)rt_nil_check(l_P_870))).f_MLO).f_OK && (((*(R17 *)rt_nil_check(l_Q_871))).f_MLO).f_OK))
{
if ((!((((*(R17 *)rt_nil_check(l_P_870))).f_MLO).f_V == (((*(R17 *)rt_nil_check(l_Q_871))).f_MLO).f_V)))
{
{ rt_int rv874 = 0;
return rv874; }
}
}
l_P_870 = ((*(R17 *)rt_nil_check(l_P_870))).f_NEXT;
l_Q_871 = ((*(R17 *)rt_nil_check(l_Q_871))).f_NEXT;
}
} L_end872: ;
{ rt_int rv875 = ((l_P_870 == NULL) && (l_Q_871 == NULL));
return rv875; }
rt_raise(RT_X_INIT);
}
static R7 r_FRAME_OF(rt_int p_LEVEL) { 
R27 * l_CS_876; memset(&l_CS_876, 0, sizeof l_CS_876);
l_CS_876 = ((*(R22 *)rt_nil_check(g_W))).f_CS;
R7 l_T_877; memset(&l_T_877, 0, sizeof l_T_877);
rt_int l_LEV_878; memset(&l_LEV_878, 0, sizeof l_LEV_878);
if ((((*(R27 *)rt_nil_check(l_CS_876))).f_LEVEL == p_LEVEL))
{
{ R7 rv879 = r_MK(rt_str("F", 1));
return rv879; }
}
if (((*(R27 *)rt_nil_check(l_CS_876))).f_FRAMED)
{
S_R7(&l_T_877, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R7(&l_T_877, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_878 = rt_sub(((*(R27 *)rt_nil_check(l_CS_876))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_878 <= p_LEVEL)) goto L_end880;
{
S_R7(&l_T_877, r_CATS(l_T_877, rt_str("->up", 4)), 0);
l_LEV_878 = rt_sub(l_LEV_878, ((rt_int)1LL));
}
} L_end880: ;
{ R7 rv881 = l_T_877;
return rv881; }
rt_raise(RT_X_INIT);
}
static R7 r_OBJ_ACCESS(R13 * p_Y) { 
if (((((*(R13 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R13 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R7 rv882 = ((*(R13 *)rt_nil_check(p_Y))).f_ACCESS;
return rv882; }
}
if (((((*(R13 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R7 rv883 = ((*(R13 *)rt_nil_check(p_Y))).f_ACCESS;
return rv883; }
}
if (((*(R13 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R7 rv884 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R13 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R13 *)rt_nil_check(p_Y))).f_FIELD);
return rv884; }
}
{ R7 rv885 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R13 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R13 *)rt_nil_check(p_Y))).f_FIELD);
return rv885; }
rt_raise(RT_X_INIT);
}
static R7 r_NEW_OBJECT(R13 * p_Y, rstr p_BASE) { 
R27 * l_CS_886; memset(&l_CS_886, 0, sizeof l_CS_886);
l_CS_886 = ((*(R22 *)rt_nil_check(g_W))).f_CS;
R14 * l_T_887; memset(&l_T_887, 0, sizeof l_T_887);
l_T_887 = ((*(R13 *)rt_nil_check(p_Y))).f_T;
R7 l_CN_888; memset(&l_CN_888, 0, sizeof l_CN_888);
if ((((*(R27 *)rt_nil_check(l_CS_886))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R22 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R7(&l_CN_888, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), ((*(R13 *)rt_nil_check(p_Y))).f_NAME), 0);
}
else
{
S_R7(&l_CN_888, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), ((*(R13 *)rt_nil_check(p_Y))).f_NAME, r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_887), l_CN_888));
S_R7(&((*(R13 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_888, 0);
{ R7 rv889 = l_CN_888;
return rv889; }
}
S_R7(&l_CN_888, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), ((*(R13 *)rt_nil_check(p_Y))).f_NAME, r_NEW_NAME(rt_str("", 0))), 0);
S_R7(&((*(R13 *)rt_nil_check(p_Y))).f_FIELD, l_CN_888, 0);
if (((*(R27 *)rt_nil_check(l_CS_886))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_887), l_CN_888), &((*(R27 *)rt_nil_check(l_CS_886))).f_FIELDS);
S_R7(&((*(R13 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_888), 0);
{ R7 rv890 = ((*(R13 *)rt_nil_check(p_Y))).f_ACCESS;
return rv890; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_887), l_CN_888, l_CN_888, l_CN_888));
S_R7(&((*(R13 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_888, 0);
{ R7 rv891 = l_CN_888;
return rv891; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R11 * p_D) { 
R14 * l_T_892; memset(&l_T_892, 0, sizeof l_T_892);
l_T_892 = r_RESOLVE(((*(R11 *)rt_nil_check(p_D))).f_B);
R11 * l_N_893; memset(&l_N_893, 0, sizeof l_N_893);
l_N_893 = ((*(R11 *)rt_nil_check(p_D))).f_A;
R18 l_V_894; memset(&l_V_894, 0, sizeof l_V_894);
rt_int l_HAVE_V_895; memset(&l_HAVE_V_895, 0, sizeof l_HAVE_V_895);
l_HAVE_V_895 = 0;
if (((((*(R14 *)rt_nil_check(l_T_892))).f_KIND == g_T_TYPE) || (((*(R14 *)rt_nil_check(l_T_892))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_893 == NULL)) goto L_end896;
{
{
R13 * l_Y_897; memset(&l_Y_897, 0, sizeof l_Y_897);
l_Y_897 = r_NEW_SYM(g_Y_VAR, ((*(R11 *)rt_nil_check(l_N_893))).f_NAME);
R7 l_CN_898; memset(&l_CN_898, 0, sizeof l_CN_898);
if ((((*(R11 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R13 *)rt_nil_check(l_Y_897))).f_KIND = g_Y_CONST;
((*(R13 *)rt_nil_check(l_Y_897))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_892) && (((*(R14 *)rt_nil_check(l_T_892))).f_SCALE == ((rt_int)0LL))))
{
{
R12 l_M_899; memset(&l_M_899, 0, sizeof l_M_899);
S_R12(&l_M_899, r_MANIFEST(((*(R11 *)rt_nil_check(p_D))).f_C), 0);
((*(R13 *)rt_nil_check(l_Y_897))).f_HASMV = (l_M_899).f_OK;
((*(R13 *)rt_nil_check(l_Y_897))).f_MV = (l_M_899).f_V;
}
}
}
((*(R13 *)rt_nil_check(l_Y_897))).f_T = l_T_892;
S_R7(&l_CN_898, r_NEW_OBJECT(l_Y_897, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_892))
{
r_CODE(r_INIT_CODE(l_T_892, l_CN_898));
}
if ((!(((*(R11 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_895))
{
S_R18(&l_V_894, r_EXPR(((*(R11 *)rt_nil_check(p_D))).f_C, l_T_892), 0);
l_HAVE_V_895 = 1;
}
r_CODE(r_STORE_CODE(l_T_892, l_CN_898, l_V_894, ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_897, ((*(R11 *)rt_nil_check(l_N_893))).f_LINE);
}
l_N_893 = ((*(R11 *)rt_nil_check(l_N_893))).f_NEXT;
}
} L_end896: ;
}
static R18 r_MKET(R7 p_C, R14 * p_T) { 
{ R18 rv900 = ({ R18 rc901; memset(&rc901, 0, sizeof rc901);  S_R7(&rc901.f_C, p_C, 0); rc901.f_T = p_T; rc901.f_LVAL = 0; S_R7(&rc901.f_SELF, r_NO_TEXT(), 0); rc901; });
return rv900; }
rt_raise(RT_X_INIT);
}
static R18 r_MKLV(R7 p_C, R14 * p_T, rt_int p_LVAL, R7 p_SELF) { 
{ R18 rv902 = ({ R18 rc903; memset(&rc903, 0, sizeof rc903);  S_R7(&rc903.f_C, p_C, 0); rc903.f_T = p_T; rc903.f_LVAL = p_LVAL; S_R7(&rc903.f_SELF, p_SELF, 0); rc903; });
return rv902; }
rt_raise(RT_X_INIT);
}
static R14 * r_INT_TYPE(rt_int p_SCALE) { 
R14 * l_T_904; memset(&l_T_904, 0, sizeof l_T_904);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R14 * rv905 = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
return rv905; }
}
l_T_904 = r_NEW_TYP(g_T_INT);
((*(R14 *)rt_nil_check(l_T_904))).f_SCALE = p_SCALE;
{ R14 * rv906 = l_T_904;
return rv906; }
rt_raise(RT_X_INIT);
}
static R14 * r_STR_TYPE(R7 p_LEN, R12 p_M) { 
R14 * l_T_907; memset(&l_T_907, 0, sizeof l_T_907);
l_T_907 = r_NEW_TYP(g_T_STR);
S_R7(&((*(R14 *)rt_nil_check(l_T_907))).f_LEN_C, p_LEN, 0);
S_R12(&((*(R14 *)rt_nil_check(l_T_907))).f_MLEN, p_M, 0);
{ R14 * rv908 = l_T_907;
return rv908; }
rt_raise(RT_X_INIT);
}
static R7 r_CSTRING(R7 p_T) { 
rstr l_S_909; memset(&l_S_909, 0, sizeof l_S_909);
l_S_909 = rt_str_new((p_T).f_LEN);
rt_b_assign(&l_S_909, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_910; memset(&l_AT_910, 0, sizeof l_AT_910);
l_AT_910 = ((*(R22 *)rt_nil_check(g_W))).f_TOP;
R7 l_R_911; memset(&l_R_911, 0, sizeof l_R_911);
S_R7(&l_R_911, r_MK(rt_str("\"", 1)), 0);
{ rt_int it913_lo = ((rt_int)0LL), it913_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it913 = it913_lo; it913 <= it913_hi; it913++) {
{
if ((rt_b_eq(rt_b_slice(l_S_909, it913, it913), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_909, it913, it913), rt_str("\\", 1))))
{
S_R7(&l_R_911, r_MK(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_S_909, it913, it913))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_909, it913, it913), rt_str("\?", 1)))
{
S_R7(&l_R_911, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_914; memset(&l_C_914, 0, sizeof l_C_914);
l_C_914 = r_CODE_OF(rt_b_slice(l_S_909, it913, it913));
if (({ rt_int iv915 = l_C_914; (((rt_int)32LL)) <= iv915 && iv915 <= (((rt_int)126LL)); }))
{
S_R7(&l_R_911, r_MK(rt_b_slice(l_S_909, it913, it913)), 0);
}
else
{
S_R7(&l_R_911, r_MK(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_914, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_914, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_914, ((rt_int)8LL))))), 0);
}
}
}
}
} } L_end912: ;
S_R7(&l_R_911, r_MK(rt_str("\"", 1)), 0);
{ R7 rv916 = ({ R7 rc917; memset(&rc917, 0, sizeof rc917);  rc917.f_AT = l_AT_910; rc917.f_LEN = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_TOP, l_AT_910); rc917.f_H = rt_neg(((rt_int)1LL)); rc917; });
return rv916; }
rt_raise(RT_X_INIT);
}
static R12 r_MANIFEST(R11 * p_E) { 
rt_int l_K_918; memset(&l_K_918, 0, sizeof l_K_918);
l_K_918 = ((*(R11 *)rt_nil_check(p_E))).f_KIND;
R12 l_NO_919; memset(&l_NO_919, 0, sizeof l_NO_919);
S_R12(&l_NO_919, ({ R12 rc920; memset(&rc920, 0, sizeof rc920);  rc920.f_OK = 0; rc920.f_V = ((rt_int)0LL); rc920; }), 0);
if ((l_K_918 == g_N_INT))
{
{ R12 rv921 = ({ R12 rc922; memset(&rc922, 0, sizeof rc922);  rc922.f_OK = 1; rc922.f_V = ((*(R11 *)rt_nil_check(p_E))).f_IV; rc922; });
return rv921; }
}
else if ((l_K_918 == g_N_PAREN))
{
{ R12 rv923 = r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A);
return rv923; }
}
else if ((l_K_918 == g_N_BOOL))
{
{ R12 rv924 = ({ R12 rc925; memset(&rc925, 0, sizeof rc925);  rc925.f_OK = 1; rc925.f_V = ((*(R11 *)rt_nil_check(p_E))).f_IV; rc925; });
return rv924; }
}
else if ((l_K_918 == g_N_UNOP))
{
{
R12 l_A_926; memset(&l_A_926, 0, sizeof l_A_926);
S_R12(&l_A_926, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
{ R12 rv927 = ({ R12 rc928; memset(&rc928, 0, sizeof rc928);  rc928.f_OK = (l_A_926).f_OK; rc928.f_V = rt_neg((l_A_926).f_V); rc928; });
return rv927; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R12 rv929 = l_A_926;
return rv929; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R12 rv930 = ({ R12 rc931; memset(&rc931, 0, sizeof rc931);  rc931.f_OK = (l_A_926).f_OK; rc931.f_V = rt_sub(((rt_int)1LL), (l_A_926).f_V); rc931; });
return rv930; }
}
}
}
else if ((l_K_918 == g_N_BINOP))
{
if ((!(((*(R11 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R12 rv932 = l_NO_919;
return rv932; }
}
{
R12 l_A_933; memset(&l_A_933, 0, sizeof l_A_933);
S_R12(&l_A_933, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
R12 l_B_934; memset(&l_B_934, 0, sizeof l_B_934);
S_R12(&l_B_934, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_B), 0);
R7 l_OP_935; memset(&l_OP_935, 0, sizeof l_OP_935);
S_R7(&l_OP_935, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
if ((r_TEQS(l_OP_935, rt_str("&", 1)) && (l_A_933).f_OK))
{
if (((l_A_933).f_V == ((rt_int)0LL)))
{
{ R12 rv936 = l_A_933;
return rv936; }
}
{ R12 rv937 = l_B_934;
return rv937; }
}
else if ((r_TEQS(l_OP_935, rt_str("!", 1)) && (l_A_933).f_OK))
{
if (((l_A_933).f_V == ((rt_int)1LL)))
{
{ R12 rv938 = l_A_933;
return rv938; }
}
{ R12 rv939 = l_B_934;
return rv939; }
}
if ((!(((l_A_933).f_OK && (l_B_934).f_OK))))
{
{ R12 rv940 = l_NO_919;
return rv940; }
}
if ((!((r_MANIFEST_INT(((*(R11 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R11 *)rt_nil_check(p_E))).f_B)))))
{
{ R12 rv941 = l_NO_919;
return rv941; }
}
if (r_TEQS(l_OP_935, rt_str("+", 1)))
{
{ R12 rv942 = ({ R12 rc943; memset(&rc943, 0, sizeof rc943);  rc943.f_OK = 1; rc943.f_V = rt_add((l_A_933).f_V, (l_B_934).f_V); rc943; });
return rv942; }
}
else if (r_TEQS(l_OP_935, rt_str("-", 1)))
{
{ R12 rv944 = ({ R12 rc945; memset(&rc945, 0, sizeof rc945);  rc945.f_OK = 1; rc945.f_V = rt_sub((l_A_933).f_V, (l_B_934).f_V); rc945; });
return rv944; }
}
else if (r_TEQS(l_OP_935, rt_str("*", 1)))
{
{ R12 rv946 = ({ R12 rc947; memset(&rc947, 0, sizeof rc947);  rc947.f_OK = 1; rc947.f_V = rt_mul((l_A_933).f_V, (l_B_934).f_V); rc947; });
return rv946; }
}
else if ((r_TEQS(l_OP_935, rt_str("//", 2)) && (!((l_B_934).f_V == ((rt_int)0LL)))))
{
{ R12 rv948 = ({ R12 rc949; memset(&rc949, 0, sizeof rc949);  rc949.f_OK = 1; rc949.f_V = rt_quot((l_A_933).f_V, (l_B_934).f_V); rc949; });
return rv948; }
}
else if ((r_TEQS(l_OP_935, rt_str("MOD", 3)) && (!((l_B_934).f_V == ((rt_int)0LL)))))
{
{ R12 rv950 = ({ R12 rc951; memset(&rc951, 0, sizeof rc951);  rc951.f_OK = 1; rc951.f_V = rt_rem((l_A_933).f_V, (l_B_934).f_V); rc951; });
return rv950; }
}
else if (r_TEQS(l_OP_935, rt_str("=", 1)))
{
{ R12 rv952 = ({ R12 rc953; memset(&rc953, 0, sizeof rc953);  rc953.f_OK = 1; rc953.f_V = r_BOOL_INT(((l_A_933).f_V == (l_B_934).f_V)); rc953; });
return rv952; }
}
else if (r_TEQS(l_OP_935, rt_str("<>", 2)))
{
{ R12 rv954 = ({ R12 rc955; memset(&rc955, 0, sizeof rc955);  rc955.f_OK = 1; rc955.f_V = r_BOOL_INT((!((l_A_933).f_V == (l_B_934).f_V))); rc955; });
return rv954; }
}
else if (r_TEQS(l_OP_935, rt_str("<", 1)))
{
{ R12 rv956 = ({ R12 rc957; memset(&rc957, 0, sizeof rc957);  rc957.f_OK = 1; rc957.f_V = r_BOOL_INT(((l_A_933).f_V < (l_B_934).f_V)); rc957; });
return rv956; }
}
else if (r_TEQS(l_OP_935, rt_str(">", 1)))
{
{ R12 rv958 = ({ R12 rc959; memset(&rc959, 0, sizeof rc959);  rc959.f_OK = 1; rc959.f_V = r_BOOL_INT(((l_A_933).f_V > (l_B_934).f_V)); rc959; });
return rv958; }
}
else if (r_TEQS(l_OP_935, rt_str("<=", 2)))
{
{ R12 rv960 = ({ R12 rc961; memset(&rc961, 0, sizeof rc961);  rc961.f_OK = 1; rc961.f_V = r_BOOL_INT(((l_A_933).f_V <= (l_B_934).f_V)); rc961; });
return rv960; }
}
else if (r_TEQS(l_OP_935, rt_str(">=", 2)))
{
{ R12 rv962 = ({ R12 rc963; memset(&rc963, 0, sizeof rc963);  rc963.f_OK = 1; rc963.f_V = r_BOOL_INT(((l_A_933).f_V >= (l_B_934).f_V)); rc963; });
return rv962; }
}
}
}
else if ((l_K_918 == g_N_IN))
{
{
R12 l_A_964; memset(&l_A_964, 0, sizeof l_A_964);
S_R12(&l_A_964, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
R12 l_L_965; memset(&l_L_965, 0, sizeof l_L_965);
S_R12(&l_L_965, r_MANIFEST(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R12 l_U_966; memset(&l_U_966, 0, sizeof l_U_966);
S_R12(&l_U_966, r_MANIFEST(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_967; memset(&l_LO_967, 0, sizeof l_LO_967);
rt_int l_HI_968; memset(&l_HI_968, 0, sizeof l_HI_968);
if ((!(((((l_A_964).f_OK && (l_L_965).f_OK) && (l_U_966).f_OK) && r_MANIFEST_INT(((*(R11 *)rt_nil_check(p_E))).f_A)))))
{
{ R12 rv969 = l_NO_919;
return rv969; }
}
l_LO_967 = (l_L_965).f_V;
l_HI_968 = (l_U_966).f_V;
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_967 = rt_add(l_LO_967, ((rt_int)1LL));
}
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_968 = rt_sub(l_HI_968, ((rt_int)1LL));
}
{ R12 rv970 = ({ R12 rc971; memset(&rc971, 0, sizeof rc971);  rc971.f_OK = 1; rc971.f_V = r_BOOL_INT((((l_A_964).f_V >= l_LO_967) && ((l_A_964).f_V <= l_HI_968))); rc971; });
return rv970; }
}
}
else if (((l_K_918 == g_N_NAME) || (l_K_918 == g_TS_GEN)))
{
{
R13 * l_Y_972; memset(&l_Y_972, 0, sizeof l_Y_972);
l_Y_972 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
R16 * l_B_973; memset(&l_B_973, 0, sizeof l_B_973);
l_B_973 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_973 == NULL)) goto L_end974;
{
if ((r_TEQ(((*(R16 *)rt_nil_check(l_B_973))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME) && ((*(R16 *)rt_nil_check(l_B_973))).f_HASMV))
{
{ R12 rv975 = ({ R12 rc976; memset(&rc976, 0, sizeof rc976);  rc976.f_OK = 1; rc976.f_V = ((*(R16 *)rt_nil_check(l_B_973))).f_MV; rc976; });
return rv975; }
}
l_B_973 = ((*(R16 *)rt_nil_check(l_B_973))).f_NEXT;
}
} L_end974: ;
if ((!(l_Y_972 == NULL)))
{
if (((((((*(R13 *)rt_nil_check(l_Y_972))).f_KIND == g_Y_CONST) || (((*(R13 *)rt_nil_check(l_Y_972))).f_KIND == g_Y_GEN))) && ((*(R13 *)rt_nil_check(l_Y_972))).f_HASMV))
{
{ R12 rv977 = ({ R12 rc978; memset(&rc978, 0, sizeof rc978);  rc978.f_OK = 1; rc978.f_V = ((*(R13 *)rt_nil_check(l_Y_972))).f_MV; rc978; });
return rv977; }
}
if ((((*(R13 *)rt_nil_check(l_Y_972))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R11 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R12 rv979 = ({ R12 rc980; memset(&rc980, 0, sizeof rc980);  rc980.f_OK = 1; rc980.f_V = ((*(R13 *)rt_nil_check(l_Y_972))).f_MV; rc980; });
return rv979; }
}
}
}
}
}
else if ((l_K_918 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R11 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R12 rv981 = ({ R12 rc982; memset(&rc982, 0, sizeof rc982);  rc982.f_OK = 1; rc982.f_V = ((*(R13 *)rt_nil_check(r_FIND_LITERAL(((*(R11 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc982; });
return rv981; }
}
}
else if ((l_K_918 == g_N_APPLY))
{
if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R12 rv983 = ({ R12 rc984; memset(&rc984, 0, sizeof rc984);  rc984.f_OK = 1; rc984.f_V = r_BOOL_INT((r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A)).f_OK); rc984; });
return rv983; }
}
}
{ R12 rv985 = l_NO_919;
return rv985; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R11 * p_E) { 
{ rt_int rv986 = (!(((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv986; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { 
if (p_B)
{
{ rt_int rv987 = ((rt_int)1LL);
return rv987; }
}
{ rt_int rv988 = ((rt_int)0LL);
return rv988; }
rt_raise(RT_X_INIT);
}
static R18 r_EXPR(R11 * p_E, R14 * p_WANT) { 
rt_int l_K_989; memset(&l_K_989, 0, sizeof l_K_989);
l_K_989 = ((*(R11 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_989 == g_N_INT))
{
{ R18 rv990 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R11 *)rt_nil_check(p_E))).f_IV)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv990; }
}
else if ((l_K_989 == g_N_REAL))
{
{ R18 rv991 = r_REAL_LITERAL(p_E);
return rv991; }
}
else if ((l_K_989 == g_N_BOOL))
{
{ R18 rv992 = r_MKET(r_NUM(((*(R11 *)rt_nil_check(p_E))).f_IV), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv992; }
}
else if ((l_K_989 == g_N_NIL))
{
{ R18 rv993 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R22 *)rt_nil_check(g_W))).f_TY_NIL);
return rv993; }
}
else if ((l_K_989 == g_N_PAREN))
{
{
R18 l_V_994; memset(&l_V_994, 0, sizeof l_V_994);
S_R18(&l_V_994, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R7(&(l_V_994).f_C, r_FMT1(rt_str("(@)", 3), (l_V_994).f_C), 0);
{ R18 rv995 = l_V_994;
return rv995; }
}
}
else if ((l_K_989 == g_N_STR))
{
{ R18 rv996 = r_STRING_LITERAL(p_E);
return rv996; }
}
else if ((l_K_989 == g_N_BITS))
{
{ R18 rv997 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R11 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R11 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R11 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv997; }
}
else if ((l_K_989 == g_N_ENUMLIT))
{
{ R18 rv998 = r_ENUM_LITERAL(p_E, p_WANT);
return rv998; }
}
else if ((l_K_989 == g_N_RECCONS))
{
{ R18 rv999 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv999; }
}
else if ((l_K_989 == g_N_ARRCONS))
{
{ R18 rv1000 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1000; }
}
else if ((l_K_989 == g_N_TYPESPEC))
{
{ R18 rv1001 = r_TYPE_SPECIFIER(p_E);
return rv1001; }
}
else if ((l_K_989 == g_N_QUAL))
{
{
rt_int l_SAVED_1002; memset(&l_SAVED_1002, 0, sizeof l_SAVED_1002);
l_SAVED_1002 = ((*(R22 *)rt_nil_check(g_W))).f_ROUNDED;
R18 l_V_1003; memset(&l_V_1003, 0, sizeof l_V_1003);
if (((((*(R11 *)rt_nil_check(p_E))).f_NAME).f_LEN > ((rt_int)0LL)))
{
((*(R22 *)rt_nil_check(g_W))).f_ROUNDED = (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("NATIVE_R", 8)));
if ((r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("NATIVE_R", 8)) || r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("NATIVE_T", 8))))
{
r_REQUIRE_MACHINE(((*(R11 *)rt_nil_check(p_E))).f_LINE);
}
}
if ((!(((*(R11 *)rt_nil_check(p_E))).f_B == NULL)))
{
if ((!(r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_B)).f_OK))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("WITH PREC needs a manifest precision (3.3.4.4)", 46));
}
}
S_R18(&l_V_1003, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R22 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1002;
{ R18 rv1004 = l_V_1003;
return rv1004; }
}
}
else if ((l_K_989 == g_N_NEW))
{
{ R18 rv1005 = r_NEW_EXPR(p_E, p_WANT);
return rv1005; }
}
else if ((l_K_989 == g_N_NAME))
{
{ R18 rv1006 = r_NAME_EXPR(p_E, p_WANT);
return rv1006; }
}
else if ((l_K_989 == g_N_APPLY))
{
{
R13 * l_Y_1007; memset(&l_Y_1007, 0, sizeof l_Y_1007);
l_Y_1007 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1007 == NULL)))
{
if (((((*(R13 *)rt_nil_check(l_Y_1007))).f_KIND == g_Y_VAR) || (((*(R13 *)rt_nil_check(l_Y_1007))).f_KIND == g_Y_CONST)))
{
{
R11 * l_N_1008; memset(&l_N_1008, 0, sizeof l_N_1008);
l_N_1008 = r_NEW_NODE(g_N_INDEX, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
R11 * l_A_1009; memset(&l_A_1009, 0, sizeof l_A_1009);
l_A_1009 = r_NEW_NODE(g_N_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_A_1009))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R11 *)rt_nil_check(l_N_1008))).f_A = l_A_1009;
((*(R11 *)rt_nil_check(l_N_1008))).f_B = ((*(R11 *)rt_nil_check(p_E))).f_A;
{ R18 rv1010 = r_EXPR(l_N_1008, p_WANT);
return rv1010; }
}
}
}
{ R18 rv1011 = r_CALL_EXPR(p_E, p_WANT);
return rv1011; }
}
}
else if ((l_K_989 == g_N_FIELD))
{
{ R18 rv1012 = r_FIELD_EXPR(p_E);
return rv1012; }
}
else if ((l_K_989 == g_N_DEREF))
{
{
R18 l_B_1013; memset(&l_B_1013, 0, sizeof l_B_1013);
S_R18(&l_B_1013, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R14 *)rt_nil_check((l_B_1013).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R14 * l_TT_1014; memset(&l_TT_1014, 0, sizeof l_TT_1014);
l_TT_1014 = r_TARGET((l_B_1013).f_T);
{ R18 rv1015 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1014), (l_B_1013).f_C), l_TT_1014, 1, r_NO_TEXT());
return rv1015; }
}
}
}
else if ((l_K_989 == g_N_INDEX))
{
{ R18 rv1016 = r_INDEX_EXPR(p_E);
return rv1016; }
}
else if ((l_K_989 == g_N_SUBSTR))
{
{
R18 l_B_1017; memset(&l_B_1017, 0, sizeof l_B_1017);
S_R18(&l_B_1017, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
R14 * l_BT_1018; memset(&l_BT_1018, 0, sizeof l_BT_1018);
l_BT_1018 = r_REAL_TYPE((l_B_1017).f_T);
R7 l_LO_1019; memset(&l_LO_1019, 0, sizeof l_LO_1019);
R7 l_HI_1020; memset(&l_HI_1020, 0, sizeof l_HI_1020);
if ((!(((((*(R14 *)rt_nil_check(l_BT_1018))).f_KIND == g_T_STR) || (((*(R14 *)rt_nil_check(l_BT_1018))).f_KIND == g_T_BITS)))))
{
if ((((*(R14 *)rt_nil_check((l_B_1017).f_T))).f_KIND == g_T_ABS))
{
{ R18 rv1021 = r_OPERATOR_CALL3(r_MK(rt_str("SUBSTRING_", 10)), l_B_1017, ((*(R11 *)rt_nil_check(p_E))).f_B, ((*(R11 *)rt_nil_check(p_E))).f_C, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
return rv1021; }
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R7(&l_LO_1019, r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B), 0);
S_R7(&l_HI_1020, r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_C), 0);
if ((((*(R14 *)rt_nil_check(l_BT_1018))).f_KIND == g_T_BITS))
{
{ R18 rv1022 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1017).f_C, l_LO_1019, l_HI_1020), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1022; }
}
{
R14 * l_T_1023; memset(&l_T_1023, 0, sizeof l_T_1023);
l_T_1023 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R14 *)rt_nil_check(l_T_1023))).f_BASE = ((*(R14 *)rt_nil_check(l_BT_1018))).f_BASE;
{ R18 rv1024 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1017).f_C, l_LO_1019, l_HI_1020), l_T_1023);
return rv1024; }
}
}
}
else if ((l_K_989 == g_N_UNOP))
{
{ R18 rv1025 = r_UNARY(p_E);
return rv1025; }
}
else if ((l_K_989 == g_N_BINOP))
{
{ R18 rv1026 = r_BINARY(p_E);
return rv1026; }
}
else if ((l_K_989 == g_N_IN))
{
{ R18 rv1027 = r_IN_EXPR(p_E);
return rv1027; }
}
else if (((l_K_989 == g_N_ANY) || (l_K_989 == g_N_DONTCARE)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((((((l_K_989 == g_TS_NAME) || (l_K_989 == g_TS_ARRAY)) || (l_K_989 == g_TS_RECORD)) || (l_K_989 == g_TS_ENUM)) || (l_K_989 == g_TS_GEN)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R7 r_INT_EXPR(R11 * p_E) { 
rt_int l_SAVED_1028; memset(&l_SAVED_1028, 0, sizeof l_SAVED_1028);
l_SAVED_1028 = ((*(R22 *)rt_nil_check(g_W))).f_ROUNDED;
R18 l_V_1029; memset(&l_V_1029, 0, sizeof l_V_1029);
((*(R22 *)rt_nil_check(g_W))).f_ROUNDED = 0;
S_R18(&l_V_1029, r_EXPR(p_E, ((*(R22 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R22 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1028;
if ((((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1029).f_T)))).f_KIND == g_T_ENUM))
{
{ R7 rv1030 = (l_V_1029).f_C;
return rv1030; }
}
if (((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1029).f_T)))).f_KIND == g_T_INT)) || (!(((*(R14 *)rt_nil_check((l_V_1029).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1029).f_T));
}
{ R7 rv1031 = (l_V_1029).f_C;
return rv1031; }
rt_raise(RT_X_INIT);
}
static R7 r_BOOL_EXPR(R11 * p_E) { 
R18 l_V_1032; memset(&l_V_1032, 0, sizeof l_V_1032);
S_R18(&l_V_1032, r_EXPR(p_E, ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1032).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1032).f_T));
}
{ R7 rv1033 = (l_V_1032).f_C;
return rv1033; }
rt_raise(RT_X_INIT);
}
static R14 * r_BITS_TYPE(rt_int p_LEN) { 
R14 * l_T_1034; memset(&l_T_1034, 0, sizeof l_T_1034);
l_T_1034 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R7(&((*(R14 *)rt_nil_check(l_T_1034))).f_LEN_C, r_NUM(p_LEN), 0);
S_R12(&((*(R14 *)rt_nil_check(l_T_1034))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R14 * rv1035 = l_T_1034;
return rv1035; }
rt_raise(RT_X_INIT);
}
static R18 r_REAL_LITERAL(R11 * p_E) { 
R7 l_T_1036; memset(&l_T_1036, 0, sizeof l_T_1036);
S_R7(&l_T_1036, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1037; memset(&l_S_1037, 0, sizeof l_S_1037);
l_S_1037 = rt_str_new((l_T_1036).f_LEN);
rt_b_assign(&l_S_1037, r_STR(l_T_1036, (l_T_1036).f_LEN));
rt_int l_POINT_1038; memset(&l_POINT_1038, 0, sizeof l_POINT_1038);
l_POINT_1038 = 0;
rt_int l_DIGITS_1039; memset(&l_DIGITS_1039, 0, sizeof l_DIGITS_1039);
l_DIGITS_1039 = ((rt_int)0LL);
{ rt_int it1041_lo = ((rt_int)0LL), it1041_hi = rt_sub((l_T_1036).f_LEN, ((rt_int)1LL));
for (rt_int it1041 = it1041_lo; it1041 <= it1041_hi; it1041++) {
{
if (rt_b_eq(rt_b_slice(l_S_1037, it1041, it1041), rt_str(".", 1)))
{
l_POINT_1038 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1037, it1041, it1041), rt_str("E", 1)))
{
goto L_end1040;
}
else
{
l_DIGITS_1039 = rt_add(l_DIGITS_1039, ((rt_int)1LL));
}
}
} } L_end1040: ;
if ((((*(R11 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R18 rv1042 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1036), r_NUM(((*(R11 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R11 *)rt_nil_check(p_E))).f_IV));
return rv1042; }
}
if ((!l_POINT_1038))
{
{ R18 rv1043 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1036)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1043; }
}
{
R14 * l_F_1044; memset(&l_F_1044, 0, sizeof l_F_1044);
l_F_1044 = r_NEW_TYP(g_T_FLOAT);
((*(R14 *)rt_nil_check(l_F_1044))).f_SCALE = l_DIGITS_1039;
if ((l_DIGITS_1039 > ((rt_int)15LL)))
{
((*(R14 *)rt_nil_check(l_F_1044))).f_SCALE = ((rt_int)15LL);
}
if ((l_DIGITS_1039 < ((rt_int)1LL)))
{
((*(R14 *)rt_nil_check(l_F_1044))).f_SCALE = ((rt_int)1LL);
}
if (rt_b_eq(rt_b_slice(l_S_1037, rt_sub((l_T_1036).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1036).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
{ R18 rv1045 = r_MKET(r_FMT1(rt_str("(@0)", 4), l_T_1036), l_F_1044);
return rv1045; }
}
if (rt_b_eq(rt_b_slice(l_S_1037, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
{ R18 rv1046 = r_MKET(r_FMT1(rt_str("(0@)", 4), l_T_1036), l_F_1044);
return rv1046; }
}
{ R18 rv1047 = r_MKET(r_FMT1(rt_str("(@)", 3), l_T_1036), l_F_1044);
return rv1047; }
}
rt_raise(RT_X_INIT);
}
static R18 r_STRING_LITERAL(R11 * p_E) { 
rt_int l_AT_1048; memset(&l_AT_1048, 0, sizeof l_AT_1048);
l_AT_1048 = ((*(R22 *)rt_nil_check(g_W))).f_TOP;
R14 * l_CS_1049; memset(&l_CS_1049, 0, sizeof l_CS_1049);
l_CS_1049 = ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII;
R11 * l_P_1050; memset(&l_P_1050, 0, sizeof l_P_1050);
l_P_1050 = ((*(R11 *)rt_nil_check(p_E))).f_A;
R7 l_R_1051; memset(&l_R_1051, 0, sizeof l_R_1051);
if (((((*(R11 *)rt_nil_check(p_E))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R13 * l_Y_1052; memset(&l_Y_1052, 0, sizeof l_Y_1052);
l_Y_1052 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1052 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R13 *)rt_nil_check(l_Y_1052))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1049 = r_RESOLVE_USER_NAME(((*(R11 *)rt_nil_check(p_E))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R14 *)rt_nil_check(l_CS_1049))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
}
}
for (;;) {
if ((l_P_1050 == NULL)) goto L_end1053;
{
if ((((*(R11 *)rt_nil_check(l_P_1050))).f_IV == g_K_STR))
{
if ((l_CS_1049 == ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R7(&l_R_1051, r_MK(r_STR(((*(R11 *)rt_nil_check(l_P_1050))).f_NAME, (((*(R11 *)rt_nil_check(l_P_1050))).f_NAME).f_LEN)), 0);
}
else
{
{
R7 l_Q_1054; memset(&l_Q_1054, 0, sizeof l_Q_1054);
S_R7(&l_Q_1054, ((*(R11 *)rt_nil_check(l_P_1050))).f_NAME, 0);
rstr l_QS_1055; memset(&l_QS_1055, 0, sizeof l_QS_1055);
l_QS_1055 = rt_str_new((l_Q_1054).f_LEN);
rt_b_assign(&l_QS_1055, r_STR(l_Q_1054, (l_Q_1054).f_LEN));
{ rt_int it1057_lo = ((rt_int)0LL), it1057_hi = rt_sub((l_Q_1054).f_LEN, ((rt_int)1LL));
for (rt_int it1057 = it1057_lo; it1057 <= it1057_hi; it1057++) {
{
{
R13 * l_Y_1058; memset(&l_Y_1058, 0, sizeof l_Y_1058);
l_Y_1058 = r_FIND_LITERAL(r_MKN(rt_str_cat(rt_str_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1055, it1057, it1057)), rt_str("'", 1))), l_CS_1049);
if ((l_Y_1058 == NULL))
{
r_FAIL(((*(R11 *)rt_nil_check(l_P_1050))).f_LINE, rt_str_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1055, it1057, it1057)));
}
S_R7(&l_R_1051, r_MK(r_CHAR_OF(((*(R13 *)rt_nil_check(l_Y_1058))).f_MV)), 0);
}
}
} } L_end1056: ;
}
}
}
else
{
{
R13 * l_Y_1059; memset(&l_Y_1059, 0, sizeof l_Y_1059);
l_Y_1059 = r_FIND_LITERAL(((*(R11 *)rt_nil_check(l_P_1050))).f_NAME, l_CS_1049);
if ((l_Y_1059 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(l_P_1050))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R11 *)rt_nil_check(l_P_1050))).f_NAME);
}
S_R7(&l_R_1051, r_MK(r_CHAR_OF(((*(R13 *)rt_nil_check(l_Y_1059))).f_MV)), 0);
}
}
l_P_1050 = ((*(R11 *)rt_nil_check(l_P_1050))).f_NEXT;
}
} L_end1053: ;
{
R7 l_S_1060; memset(&l_S_1060, 0, sizeof l_S_1060);
S_R7(&l_S_1060, ({ R7 rc1061; memset(&rc1061, 0, sizeof rc1061);  rc1061.f_AT = l_AT_1048; rc1061.f_LEN = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_TOP, l_AT_1048); rc1061.f_H = rt_neg(((rt_int)1LL)); rc1061; }), 0);
R14 * l_T_1062; memset(&l_T_1062, 0, sizeof l_T_1062);
l_T_1062 = r_STR_TYPE(r_NUM((l_S_1060).f_LEN), r_SOME((l_S_1060).f_LEN));
((*(R14 *)rt_nil_check(l_T_1062))).f_BASE = l_CS_1049;
{ R18 rv1063 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1060), r_NUM((l_S_1060).f_LEN)), l_T_1062);
return rv1063; }
}
rt_raise(RT_X_INIT);
}
static R14 * r_RESOLVE_USER_NAME(R7 p_NAME, rt_int p_LINE) { 
R11 * l_TS_1064; memset(&l_TS_1064, 0, sizeof l_TS_1064);
l_TS_1064 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_TS_1064))).f_NAME, p_NAME, 0);
{ R14 * rv1065 = r_RESOLVE(l_TS_1064);
return rv1065; }
rt_raise(RT_X_INIT);
}
static R18 r_ENUM_LITERAL(R11 * p_E, R14 * p_WANT) { 
R13 * l_Y_1066; memset(&l_Y_1066, 0, sizeof l_Y_1066);
if ((!(p_WANT == NULL)))
{
{
R14 * l_WT_1067; memset(&l_WT_1067, 0, sizeof l_WT_1067);
l_WT_1067 = r_REAL_TYPE(p_WANT);
if ((((*(R14 *)rt_nil_check(l_WT_1067))).f_KIND == g_T_ENUM))
{
l_Y_1066 = r_FIND_LITERAL(((*(R11 *)rt_nil_check(p_E))).f_NAME, l_WT_1067);
if ((!(l_Y_1066 == NULL)))
{
{ R18 rv1068 = r_MKET(r_NUM(((*(R13 *)rt_nil_check(l_Y_1066))).f_MV), r_ENUM_RESULT(l_Y_1066, p_WANT));
return rv1068; }
}
}
}
}
l_Y_1066 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
{
R13 * l_FOUND_1069; memset(&l_FOUND_1069, 0, sizeof l_FOUND_1069);
l_FOUND_1069 = NULL;
rt_int l_N_1070; memset(&l_N_1070, 0, sizeof l_N_1070);
l_N_1070 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1066 == NULL)) goto L_end1071;
{
if ((((*(R13 *)rt_nil_check(l_Y_1066))).f_KIND == g_Y_ENUMLIT))
{
if (((!(((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_1066))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII)) || (l_FOUND_1069 == NULL)))
{
if (((l_FOUND_1069 == NULL) || (((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_FOUND_1069))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII)))
{
l_FOUND_1069 = l_Y_1066;
}
else
{
l_N_1070 = rt_add(l_N_1070, ((rt_int)1LL));
}
}
}
l_Y_1066 = r_LOOKUP_NEXT(l_Y_1066);
}
} L_end1071: ;
if ((l_FOUND_1069 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1070 > ((rt_int)0LL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
{ R18 rv1072 = r_MKET(r_NUM(((*(R13 *)rt_nil_check(l_FOUND_1069))).f_MV), ((*(R13 *)rt_nil_check(l_FOUND_1069))).f_T);
return rv1072; }
}
rt_raise(RT_X_INIT);
}
static R14 * r_ENUM_RESULT(R13 * p_Y, R14 * p_WANT) { 
if ((((*(R14 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R14 * rv1073 = p_WANT;
return rv1073; }
}
{ R14 * rv1074 = ((*(R13 *)rt_nil_check(p_Y))).f_T;
return rv1074; }
rt_raise(RT_X_INIT);
}
static R18 r_NAME_EXPR(R11 * p_E, R14 * p_WANT) { 
R13 * l_Y_1075; memset(&l_Y_1075, 0, sizeof l_Y_1075);
l_Y_1075 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1075 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R13 *)rt_nil_check(l_Y_1075))).f_KIND == g_Y_VAR) || (((*(R13 *)rt_nil_check(l_Y_1075))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1076; memset(&l_WRITABLE_1076, 0, sizeof l_WRITABLE_1076);
l_WRITABLE_1076 = r_CHECK_IMPORTED(l_Y_1075, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
{ R18 rv1077 = r_MKLV(r_OBJ_ACCESS(l_Y_1075), ((*(R13 *)rt_nil_check(l_Y_1075))).f_T, ((((*(R13 *)rt_nil_check(l_Y_1075))).f_KIND == g_Y_VAR) && l_WRITABLE_1076), r_NO_TEXT());
return rv1077; }
}
}
else if ((((*(R13 *)rt_nil_check(l_Y_1075))).f_KIND == g_Y_GEN))
{
{ R18 rv1078 = r_MKET(((*(R13 *)rt_nil_check(l_Y_1075))).f_ACCESS, ((*(R13 *)rt_nil_check(l_Y_1075))).f_T);
return rv1078; }
}
else if ((((*(R13 *)rt_nil_check(l_Y_1075))).f_KIND == g_Y_ENUMLIT))
{
{ R18 rv1079 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1079; }
}
else if (((((*(R13 *)rt_nil_check(l_Y_1075))).f_KIND == g_Y_ROUTINE) || (((*(R13 *)rt_nil_check(l_Y_1075))).f_KIND == g_Y_BUILTIN)))
{
{
R11 * l_N_1080; memset(&l_N_1080, 0, sizeof l_N_1080);
l_N_1080 = r_NEW_NODE(g_N_APPLY, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_N_1080))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
{ R18 rv1081 = r_CALL_EXPR(l_N_1080, p_WANT);
return rv1081; }
}
}
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R18 r_FIELD_EXPR(R11 * p_E) { 
R11 * l_A_1082; memset(&l_A_1082, 0, sizeof l_A_1082);
l_A_1082 = ((*(R11 *)rt_nil_check(p_E))).f_A;
if ((((*(R11 *)rt_nil_check(l_A_1082))).f_KIND == g_N_INDEX))
{
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_1082))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_1082))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R18 l_B_1083; memset(&l_B_1083, 0, sizeof l_B_1083);
S_R18(&l_B_1083, r_EXPR(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_1082))).f_A))).f_A, NULL), 0);
R7 l_I_1084; memset(&l_I_1084, 0, sizeof l_I_1084);
S_R7(&l_I_1084, r_INT_EXPR(((*(R11 *)rt_nil_check(l_A_1082))).f_B), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_B_1083).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R18 rv1085 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1083).f_C, l_I_1084, r_NUM(rt_sub(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_B_1083).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1085; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R18 rv1086 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1083).f_C, l_I_1084, r_NUM(rt_sub(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_B_1083).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1086; }
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R11 *)rt_nil_check(l_A_1082))).f_KIND == g_N_PAREN))
{
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_1082))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_1082))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_1082))).f_A))).f_A))).f_NAME))
{
{ R18 rv1087 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_1082))).f_A))).f_A))).f_NAME, ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_1082))).f_A))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
return rv1087; }
}
}
}
}
if ((((*(R11 *)rt_nil_check(l_A_1082))).f_KIND == g_N_NAME))
{
{
R13 * l_Y_1088; memset(&l_Y_1088, 0, sizeof l_Y_1088);
l_Y_1088 = r_LOOKUP(((*(R11 *)rt_nil_check(l_A_1082))).f_NAME);
if ((!(l_Y_1088 == NULL)))
{
if ((((*(R13 *)rt_nil_check(l_Y_1088))).f_KIND == g_Y_TYPE))
{
{ R18 rv1089 = r_TYPE_ATTRIBUTE(((*(R11 *)rt_nil_check(l_A_1082))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
return rv1089; }
}
}
else if (r_IS_TYPE_WORD(((*(R11 *)rt_nil_check(l_A_1082))).f_NAME))
{
{ R18 rv1090 = r_TYPE_ATTRIBUTE(((*(R11 *)rt_nil_check(l_A_1082))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
return rv1090; }
}
}
}
{
R18 l_B_1091; memset(&l_B_1091, 0, sizeof l_B_1091);
S_R18(&l_B_1091, r_EXPR(l_A_1082, NULL), 0);
R14 * l_BT_1092; memset(&l_BT_1092, 0, sizeof l_BT_1092);
l_BT_1092 = (l_B_1091).f_T;
if ((((*(R14 *)rt_nil_check(l_BT_1092))).f_KIND == g_T_REC))
{
{
R15 * l_F_1093; memset(&l_F_1093, 0, sizeof l_F_1093);
l_F_1093 = r_FIND_FIELD(l_BT_1092, ((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1093 == NULL)))
{
r_CHECK_VARIANT(l_F_1093, l_BT_1092, l_A_1082, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
{ R18 rv1094 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1091).f_C, ((*(R15 *)rt_nil_check(l_F_1093))).f_CNAME), ((*(R15 *)rt_nil_check(l_F_1093))).f_T, ((l_B_1091).f_LVAL && (((*(R15 *)rt_nil_check(l_F_1093))).f_KIND == ((rt_int)0LL))), (l_B_1091).f_C);
return rv1094; }
}
}
}
{ R18 rv1095 = r_ATTRIBUTE(l_B_1091, ((*(R11 *)rt_nil_check(p_E))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
return rv1095; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R7 p_NAME) { 
{ rt_int rv1096 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1096; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R15 * p_F, R14 * p_T, R11 * p_BASE, rt_int p_LINE) { 
if (((((*(R15 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R12 l_TAGV_1097; memset(&l_TAGV_1097, 0, sizeof l_TAGV_1097);
S_R12(&l_TAGV_1097, r_TAG_VALUE(p_T, ((*(R15 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1097).f_OK))
{
r_FAILT(p_LINE, rt_str_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R15 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R15 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1097).f_V, ((*(R15 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R15 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R15 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R12 r_TAG_VALUE(R14 * p_T, R7 p_TAGN) { 
R15 * l_F_1098; memset(&l_F_1098, 0, sizeof l_F_1098);
l_F_1098 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
R17 * l_A_1099; memset(&l_A_1099, 0, sizeof l_A_1099);
l_A_1099 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1098 == NULL)) goto L_end1100;
{
if ((!(((*(R15 *)rt_nil_check(l_F_1098))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1099 == NULL))
{
{ R12 rv1101 = r_NO_MVAL();
return rv1101; }
}
if (r_TEQ(((*(R15 *)rt_nil_check(l_F_1098))).f_NAME, p_TAGN))
{
if (((*(R17 *)rt_nil_check(l_A_1099))).f_ANYARG)
{
{ R12 rv1102 = r_NO_MVAL();
return rv1102; }
}
{ R12 rv1103 = ((*(R17 *)rt_nil_check(l_A_1099))).f_MLO;
return rv1103; }
}
l_A_1099 = ((*(R17 *)rt_nil_check(l_A_1099))).f_NEXT;
}
l_F_1098 = ((*(R15 *)rt_nil_check(l_F_1098))).f_NEXT;
}
} L_end1100: ;
{ R12 rv1104 = r_NO_MVAL();
return rv1104; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R11 * p_L, rt_int p_V, R14 * p_T) { 
R11 * l_P_1105; memset(&l_P_1105, 0, sizeof l_P_1105);
l_P_1105 = p_L;
for (;;) {
if ((l_P_1105 == NULL)) goto L_end1106;
{
if ((((*(R11 *)rt_nil_check(l_P_1105))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(l_P_1105))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(l_P_1105))).f_B, p_T)).f_V)))
{
{ rt_int rv1107 = 1;
return rv1107; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1105, p_T)).f_V == p_V))
{
{ rt_int rv1108 = 1;
return rv1108; }
}
l_P_1105 = ((*(R11 *)rt_nil_check(l_P_1105))).f_NEXT;
}
} L_end1106: ;
{ rt_int rv1109 = 0;
return rv1109; }
rt_raise(RT_X_INIT);
}
static R18 r_INDEX_EXPR(R11 * p_E) { 
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R18 l_A_1110; memset(&l_A_1110, 0, sizeof l_A_1110);
S_R18(&l_A_1110, r_EXPR(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_A, NULL), 0);
R7 l_I_1111; memset(&l_I_1111, 0, sizeof l_I_1111);
S_R7(&l_I_1111, r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R14 *)rt_nil_check(r_REAL_TYPE((l_A_1110).f_T)))).f_KIND == g_T_ARR))
{
{ R18 rv1112 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1110).f_C, (l_A_1110).f_C, l_I_1111, r_NUM(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_A_1110).f_T)))).f_DIMS)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1112; }
}
}
}
{ R18 rv1113 = r_INDEX_EXPR2(p_E);
return rv1113; }
rt_raise(RT_X_INIT);
}
static R18 r_INDEX_EXPR2(R11 * p_E) { 
R18 l_B_1114; memset(&l_B_1114, 0, sizeof l_B_1114);
S_R18(&l_B_1114, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
R14 * l_T_1115; memset(&l_T_1115, 0, sizeof l_T_1115);
l_T_1115 = r_REAL_TYPE((l_B_1114).f_T);
R11 * l_S_1116; memset(&l_S_1116, 0, sizeof l_S_1116);
l_S_1116 = ((*(R11 *)rt_nil_check(p_E))).f_B;
R7 l_IX_1117; memset(&l_IX_1117, 0, sizeof l_IX_1117);
S_R7(&l_IX_1117, r_MK(rt_str("", 0)), 0);
rt_int l_N_1118; memset(&l_N_1118, 0, sizeof l_N_1118);
l_N_1118 = ((rt_int)0LL);
if ((!(((*(R14 *)rt_nil_check(l_T_1115))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1116 == NULL)) goto L_end1119;
{
if ((l_N_1118 > ((rt_int)0LL)))
{
S_R7(&l_IX_1117, r_CATS(l_IX_1117, rt_str(", ", 2)), 0);
}
S_R7(&l_IX_1117, r_CAT(l_IX_1117, r_INT_EXPR(l_S_1116)), 0);
l_N_1118 = rt_add(l_N_1118, ((rt_int)1LL));
l_S_1116 = ((*(R11 *)rt_nil_check(l_S_1116))).f_NEXT;
}
} L_end1119: ;
if ((!(l_N_1118 == ((*(R14 *)rt_nil_check(l_T_1115))).f_DIMS)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1118 == ((rt_int)1LL)))
{
{ R18 rv1120 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1114).f_C, l_IX_1117, (l_B_1114).f_C, (l_B_1114).f_C), ((*(R14 *)rt_nil_check(l_T_1115))).f_ELEM, (l_B_1114).f_LVAL, r_NO_TEXT());
return rv1120; }
}
{
R7 l_X_1121; memset(&l_X_1121, 0, sizeof l_X_1121);
S_R7(&l_X_1121, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1114).f_C, r_NUM(l_N_1118), (l_B_1114).f_C, (l_B_1114).f_C), 0);
{ R18 rv1122 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1121, l_IX_1117), ((*(R14 *)rt_nil_check(l_T_1115))).f_ELEM, (l_B_1114).f_LVAL, r_NO_TEXT());
return rv1122; }
}
rt_raise(RT_X_INIT);
}
static R7 r_OP_NAME(R7 p_OP, rt_int p_UNARY) { 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R7 rv1123 = r_MKN(rt_str("NEGATE_", 7));
return rv1123; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R7 rv1124 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1124; }
}
{ R7 rv1125 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1125; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R7 rv1126 = r_MKN(rt_str("ADD_", 4));
return rv1126; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R7 rv1127 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1127; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R7 rv1128 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1128; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R7 rv1129 = r_MKN(rt_str("DIVIDE_", 7));
return rv1129; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R7 rv1130 = r_MKN(rt_str("MODULUS_", 8));
return rv1130; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R7 rv1131 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1131; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R7 rv1132 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1132; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R7 rv1133 = r_MKN(rt_str("EQUAL_", 6));
return rv1133; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R7 rv1134 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1134; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R7 rv1135 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1135; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R7 rv1136 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1136; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R7 rv1137 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1137; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R7 rv1138 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1138; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R7 rv1139 = r_MKN(rt_str("AND_", 4));
return rv1139; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R7 rv1140 = r_MKN(rt_str("OR_", 3));
return rv1140; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R7 rv1141 = r_MKN(rt_str("XOR_", 4));
return rv1141; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R7 rv1142 = r_MKN(rt_str("IMPLIES_", 8));
return rv1142; }
}
{ R7 rv1143 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1143; }
rt_raise(RT_X_INIT);
}
static R19 * r_VAL_ARG(R18 p_V, R19 * p_NEXT) { 
R19 * l_A_1144; memset(&l_A_1144, 0, sizeof l_A_1144);
l_A_1144 = ((R19 *)rt_alloc(sizeof (R19)));
S_R19(&(*(R19 *)rt_nil_check(l_A_1144)), ({ R19 rc1145; memset(&rc1145, 0, sizeof rc1145);  rc1145.f_E = NULL; S_R18(&rc1145.f_V, p_V, 0); rc1145.f_HAVE = 1; rc1145.f_MODE = g_M_IN; rc1145.f_NEXT = p_NEXT; rc1145; }), 0);
{ R19 * rv1146 = l_A_1144;
return rv1146; }
rt_raise(RT_X_INIT);
}
static R19 * r_NODE_ARG(R11 * p_E, rt_int p_MODE, R19 * p_NEXT) { 
R19 * l_A_1147; memset(&l_A_1147, 0, sizeof l_A_1147);
l_A_1147 = ((R19 *)rt_alloc(sizeof (R19)));
S_R19(&(*(R19 *)rt_nil_check(l_A_1147)), ({ R19 rc1148; memset(&rc1148, 0, sizeof rc1148);  rc1148.f_E = p_E; S_R18(&rc1148.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1148.f_HAVE = 0; rc1148.f_MODE = p_MODE; rc1148.f_NEXT = p_NEXT; rc1148; }), 0);
{ R19 * rv1149 = l_A_1147;
return rv1149; }
rt_raise(RT_X_INIT);
}
static R13 * r_USER_OPERATOR(R7 p_NAME, R19 * p_ARGS, rt_int p_LINE) { 
R13 * l_Y_1150; memset(&l_Y_1150, 0, sizeof l_Y_1150);
l_Y_1150 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1150 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1150 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R13 * rv1151 = l_Y_1150;
return rv1151; }
rt_raise(RT_X_INIT);
}
static R18 r_OPERATOR_CALL3(R7 p_NAME, R18 p_A, R11 * p_B, R11 * p_C, rt_int p_LINE) { 
R19 * l_ARGS_1152; memset(&l_ARGS_1152, 0, sizeof l_ARGS_1152);
l_ARGS_1152 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R13 * l_Y_1153; memset(&l_Y_1153, 0, sizeof l_Y_1153);
l_Y_1153 = r_USER_OPERATOR(p_NAME, l_ARGS_1152, p_LINE);
if ((l_Y_1153 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R18 rv1154 = r_CALL_SYM(l_Y_1153, l_ARGS_1152, p_LINE);
return rv1154; }
rt_raise(RT_X_INIT);
}
static void r_REQUIRE_MACHINE(rt_int p_LINE) { 
if ((!((*(R22 *)rt_nil_check(g_W))).f_MACHINE))
{
r_FAIL(p_LINE, rt_str("this is only permitted in a machine-dependent part (4.5.5.2)", 60));
}
}
static R7 r_RESCALE_C(R7 p_C, rt_int p_SFROM, rt_int p_STO) { 
if ((p_SFROM == p_STO))
{
{ R7 rv1155 = p_C;
return rv1155; }
}
if ((p_STO > p_SFROM))
{
{ R7 rv1156 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1156; }
}
if (((*(R22 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R7 rv1157 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1157; }
}
{ R7 rv1158 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1158; }
rt_raise(RT_X_INIT);
}
static R7 r_RESCALE(R18 p_V, rt_int p_S, rt_int p_LINE) { 
if ((((*(R14 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R7 rv1159 = r_RESCALE_C((p_V).f_C, ((*(R14 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1159; }
rt_raise(RT_X_INIT);
}
static R7 r_CONVERT(R18 p_V, R14 * p_T, rt_int p_LINE, R7 p_SELF) { 
R14 * l_RT_1160; memset(&l_RT_1160, 0, sizeof l_RT_1160);
l_RT_1160 = r_REAL_TYPE(p_T);
R14 * l_VT_1161; memset(&l_VT_1161, 0, sizeof l_VT_1161);
l_VT_1161 = (p_V).f_T;
if (((((*(R14 *)rt_nil_check(l_VT_1161))).f_KIND == g_T_NIL) && (((*(R14 *)rt_nil_check(l_RT_1160))).f_KIND == g_T_PTR)))
{
{ R7 rv1162 = (p_V).f_C;
return rv1162; }
}
if (((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R14 *)rt_nil_check(l_VT_1161))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1161)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R7 rv1163 = (p_V).f_C;
return rv1163; }
}
if ((!r_SAME_CLASS(l_RT_1160, l_VT_1161)))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1161), (r_TYPE_NAME(l_VT_1161)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1160), (r_TYPE_NAME(l_RT_1160)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R14 *)rt_nil_check(l_RT_1160))).f_KIND == g_T_INT))
{
{ R7 rv1164 = r_RANGE_CHECK(l_RT_1160, r_RESCALE(p_V, ((*(R14 *)rt_nil_check(l_RT_1160))).f_SCALE, p_LINE), p_SELF);
return rv1164; }
}
else if (((((*(R14 *)rt_nil_check(l_RT_1160))).f_KIND == g_T_FLOAT) || (((*(R14 *)rt_nil_check(l_RT_1160))).f_KIND == g_T_ENUM)))
{
{ R7 rv1165 = r_RANGE_CHECK(l_RT_1160, (p_V).f_C, p_SELF);
return rv1165; }
}
else if (((((*(R14 *)rt_nil_check(l_RT_1160))).f_KIND == g_T_STR) || (((*(R14 *)rt_nil_check(l_RT_1160))).f_KIND == g_T_BITS)))
{
if (((((*(R14 *)rt_nil_check(l_RT_1160))).f_MLEN).f_OK && (((*(R14 *)rt_nil_check(l_VT_1161))).f_MLEN).f_OK))
{
if ((!((((*(R14 *)rt_nil_check(l_RT_1160))).f_MLEN).f_V == (((*(R14 *)rt_nil_check(l_VT_1161))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R14 *)rt_nil_check(l_RT_1160))).f_KIND == g_T_PTR))
{
if ((!r_SAME_TYPE(r_TARGET(l_RT_1160), r_TARGET(l_VT_1161))))
{
r_FAIL(p_LINE, rt_str("the pointers are to different types (3.10.5)", 44));
}
}
else if ((((*(R14 *)rt_nil_check(l_RT_1160))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1160)) && (!r_HAS_ANY(l_VT_1161))))
{
if ((!r_SAME_ARGS(((*(R14 *)rt_nil_check(l_RT_1160))).f_ARGS, ((*(R14 *)rt_nil_check(l_VT_1161))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R14 *)rt_nil_check(l_RT_1160))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R14 *)rt_nil_check(l_RT_1160))).f_ELEM, ((*(R14 *)rt_nil_check(l_VT_1161))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
}
{ R7 rv1166 = (p_V).f_C;
return rv1166; }
rt_raise(RT_X_INIT);
}
static R7 r_STORE_CODE(R14 * p_T, R7 p_LV, R18 p_V, rt_int p_LINE, R7 p_SELF) { 
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R19 * l_ARGS_1167; memset(&l_ARGS_1167, 0, sizeof l_ARGS_1167);
l_ARGS_1167 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R13 * l_Y_1168; memset(&l_Y_1168, 0, sizeof l_Y_1168);
((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(l_ARGS_1167))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_1168 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1167, p_LINE, 0);
if ((l_Y_1168 == NULL))
{
((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(l_ARGS_1167))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_1168 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1167, p_LINE, 0);
}
if ((l_Y_1168 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R7 rv1169 = r_CATS((r_CALL_SYM(l_Y_1168, l_ARGS_1167, p_LINE)).f_C, rt_str(";", 1));
return rv1169; }
}
}
{ R7 rv1170 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1170; }
rt_raise(RT_X_INIT);
}
static R18 r_UNARY(R11 * p_E) { 
R18 l_A_1171; memset(&l_A_1171, 0, sizeof l_A_1171);
S_R18(&l_A_1171, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
R14 * l_T_1172; memset(&l_T_1172, 0, sizeof l_T_1172);
l_T_1172 = (l_A_1171).f_T;
R7 l_OP_1173; memset(&l_OP_1173, 0, sizeof l_OP_1173);
S_R7(&l_OP_1173, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
if ((((*(R14 *)rt_nil_check(l_T_1172))).f_KIND == g_T_ABS))
{
{
R19 * l_ARGS_1174; memset(&l_ARGS_1174, 0, sizeof l_ARGS_1174);
l_ARGS_1174 = r_VAL_ARG(l_A_1171, NULL);
R13 * l_Y_1175; memset(&l_Y_1175, 0, sizeof l_Y_1175);
l_Y_1175 = r_USER_OPERATOR(r_OP_NAME(l_OP_1173, 1), l_ARGS_1174, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
if ((l_Y_1175 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1172));
}
{ R18 rv1176 = r_CALL_SYM(l_Y_1175, l_ARGS_1174, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
return rv1176; }
}
}
if (r_TEQS(l_OP_1173, rt_str("NOT", 3)))
{
if ((((*(R14 *)rt_nil_check(l_T_1172))).f_KIND == g_T_BOOL))
{
{ R18 rv1177 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1171).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1177; }
}
else if ((((*(R14 *)rt_nil_check(l_T_1172))).f_KIND == g_T_BITS))
{
{ R18 rv1178 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1171).f_C), l_T_1172);
return rv1178; }
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R14 *)rt_nil_check(l_T_1172))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1173, rt_str("-", 1)))
{
{ R18 rv1179 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1171).f_C), r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_1172))).f_SCALE));
return rv1179; }
}
{ R18 rv1180 = r_MKET((l_A_1171).f_C, r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_1172))).f_SCALE));
return rv1180; }
}
else if ((((*(R14 *)rt_nil_check(l_T_1172))).f_KIND == g_T_FLOAT))
{
if (r_TEQS(l_OP_1173, rt_str("-", 1)))
{
{ R18 rv1181 = r_MKET(r_FMT1(rt_str("(-@)", 4), (l_A_1171).f_C), l_T_1172);
return rv1181; }
}
{ R18 rv1182 = l_A_1171;
return rv1182; }
}
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1172));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R11 * p_E) { 
{ rt_int rv1183 = (((((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R11 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1183; }
rt_raise(RT_X_INIT);
}
static R18 r_BINARY(R11 * p_E) { 
R7 l_OP_1184; memset(&l_OP_1184, 0, sizeof l_OP_1184);
S_R7(&l_OP_1184, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
R18 l_A_1185; memset(&l_A_1185, 0, sizeof l_A_1185);
R18 l_B_1186; memset(&l_B_1186, 0, sizeof l_B_1186);
if ((r_TEQS(l_OP_1184, rt_str("&", 1)) || r_TEQS(l_OP_1184, rt_str("!", 1))))
{
{
R12 l_MA_1187; memset(&l_MA_1187, 0, sizeof l_MA_1187);
S_R12(&l_MA_1187, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
R7 l_CA_1188; memset(&l_CA_1188, 0, sizeof l_CA_1188);
S_R7(&l_CA_1188, r_BOOL_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
R7 l_CB_1189; memset(&l_CB_1189, 0, sizeof l_CB_1189);
S_R7(&l_CB_1189, r_BOOL_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1184, rt_str("&", 1)))
{
{ R18 rv1190 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1188, l_CB_1189), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1190; }
}
{ R18 rv1191 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1188, l_CB_1189), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1191; }
}
}
if ((r_IS_LITERALISH(((*(R11 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R11 *)rt_nil_check(p_E))).f_B))))
{
S_R18(&l_B_1186, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R18(&l_A_1185, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, (l_B_1186).f_T), 0);
}
else
{
S_R18(&l_A_1185, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R18(&l_B_1186, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B, (l_A_1185).f_T), 0);
}
{ R18 rv1192 = r_APPLY_OPERATOR(p_E, l_OP_1184, l_A_1185, l_B_1186);
return rv1192; }
rt_raise(RT_X_INIT);
}
static R18 r_APPLY_OPERATOR(R11 * p_E, R7 p_OP, R18 p_A, R18 p_B) { 
R14 * l_AT_1193; memset(&l_AT_1193, 0, sizeof l_AT_1193);
l_AT_1193 = (p_A).f_T;
R14 * l_BT_1194; memset(&l_BT_1194, 0, sizeof l_BT_1194);
l_BT_1194 = (p_B).f_T;
rt_int l_LINE_1195; memset(&l_LINE_1195, 0, sizeof l_LINE_1195);
l_LINE_1195 = ((*(R11 *)rt_nil_check(p_E))).f_LINE;
if ((((*(R11 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL)))
{
{
R7 l_NAME_1196; memset(&l_NAME_1196, 0, sizeof l_NAME_1196);
S_R7(&l_NAME_1196, r_OP_NAME(p_OP, 0), 0);
if (((((!(r_LOOKUP(l_NAME_1196) == NULL)) || (!(r_LOOKUP(r_MKN(rt_b_slice(r_STR(l_NAME_1196, (l_NAME_1196).f_LEN), ((rt_int)0LL), rt_sub((l_NAME_1196).f_LEN, ((rt_int)2LL))))) == NULL))) || (((*(R14 *)rt_nil_check(l_AT_1193))).f_KIND == g_T_ABS)) || (((*(R14 *)rt_nil_check(l_BT_1194))).f_KIND == g_T_ABS)))
{
{
R19 * l_ARGS_1197; memset(&l_ARGS_1197, 0, sizeof l_ARGS_1197);
l_ARGS_1197 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R13 * l_Y_1198; memset(&l_Y_1198, 0, sizeof l_Y_1198);
l_Y_1198 = r_USER_OPERATOR(l_NAME_1196, l_ARGS_1197, l_LINE_1195);
if ((!(l_Y_1198 == NULL)))
{
{ R18 rv1199 = r_CALL_SYM(l_Y_1198, l_ARGS_1197, l_LINE_1195);
return rv1199; }
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{
R13 * l_Q_1200; memset(&l_Q_1200, 0, sizeof l_Q_1200);
l_Q_1200 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1197, l_LINE_1195);
if ((!(l_Q_1200 == NULL)))
{
{ R18 rv1201 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1200, l_ARGS_1197, l_LINE_1195)).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1201; }
}
}
}
if (((((*(R14 *)rt_nil_check(l_AT_1193))).f_KIND == g_T_ABS) || (((*(R14 *)rt_nil_check(l_BT_1194))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1195, rt_str("no such operation for the abstract type: ", 41), l_NAME_1196);
}
}
}
}
}
if ((!(((*(R11 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R18 rv1202 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1202; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R18 rv1203 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1203; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R14 *)rt_nil_check(l_AT_1193))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_BT_1194))).f_KIND == g_T_INT)))
{
{
rt_int l_S_1204; memset(&l_S_1204, 0, sizeof l_S_1204);
l_S_1204 = r_MAX_INT(((*(R14 *)rt_nil_check(l_AT_1193))).f_SCALE, ((*(R14 *)rt_nil_check(l_BT_1194))).f_SCALE);
{ R18 rv1205 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), r_RESCALE_C((p_A).f_C, ((*(R14 *)rt_nil_check(l_AT_1193))).f_SCALE, l_S_1204), p_OP, r_RESCALE_C((p_B).f_C, ((*(R14 *)rt_nil_check(l_BT_1194))).f_SCALE, l_S_1204)), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1205; }
}
}
else if (((((*(R14 *)rt_nil_check(l_AT_1193))).f_KIND == g_T_FLOAT) && (((*(R14 *)rt_nil_check(l_BT_1194))).f_KIND == g_T_FLOAT)))
{
{ R18 rv1206 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1206; }
}
else if (((((*(R14 *)rt_nil_check(l_AT_1193))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1193, l_BT_1194)))
{
if (((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_AT_1193))).f_BASE))).f_UNORDERED)
{
r_FAIL(l_LINE_1195, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R18 rv1207 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1207; }
}
r_FAILT(l_LINE_1195, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R14 *)rt_nil_check(l_AT_1193))).f_KIND == g_T_STR) && (((*(R14 *)rt_nil_check(l_BT_1194))).f_KIND == g_T_STR))) || (((((*(R14 *)rt_nil_check(l_AT_1193))).f_KIND == g_T_BITS) && (((*(R14 *)rt_nil_check(l_BT_1194))).f_KIND == g_T_BITS)))))
{
{
R14 * l_T_1208; memset(&l_T_1208, 0, sizeof l_T_1208);
l_T_1208 = r_NEW_TYP(((*(R14 *)rt_nil_check(l_AT_1193))).f_KIND);
((*(R14 *)rt_nil_check(l_T_1208))).f_BASE = ((*(R14 *)rt_nil_check(l_AT_1193))).f_BASE;
if (((((*(R14 *)rt_nil_check(l_AT_1193))).f_MLEN).f_OK && (((*(R14 *)rt_nil_check(l_BT_1194))).f_MLEN).f_OK))
{
S_R12(&((*(R14 *)rt_nil_check(l_T_1208))).f_MLEN, r_SOME(rt_add((((*(R14 *)rt_nil_check(l_AT_1193))).f_MLEN).f_V, (((*(R14 *)rt_nil_check(l_BT_1194))).f_MLEN).f_V)), 0);
S_R7(&((*(R14 *)rt_nil_check(l_T_1208))).f_LEN_C, r_NUM((((*(R14 *)rt_nil_check(l_T_1208))).f_MLEN).f_V), 0);
}
{ R18 rv1209 = r_MKET(r_FMT2(rt_str("rt_str_cat(@, @)", 16), (p_A).f_C, (p_B).f_C), l_T_1208);
return rv1209; }
}
}
r_FAIL(l_LINE_1195, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R14 *)rt_nil_check(l_AT_1193))).f_KIND == g_T_BITS) && (((*(R14 *)rt_nil_check(l_BT_1194))).f_KIND == g_T_BITS)))
{
{ R18 rv1210 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1193);
return rv1210; }
}
r_FAILT(l_LINE_1195, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R14 *)rt_nil_check(l_AT_1193))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_BT_1194))).f_KIND == g_T_INT)))
{
{ R18 rv1211 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1211; }
}
else if (((((*(R14 *)rt_nil_check(l_AT_1193))).f_KIND == g_T_FLOAT) && (((*(R14 *)rt_nil_check(l_BT_1194))).f_KIND == g_T_FLOAT)))
{
{
R14 * l_T_1212; memset(&l_T_1212, 0, sizeof l_T_1212);
l_T_1212 = r_NEW_TYP(g_T_FLOAT);
((*(R14 *)rt_nil_check(l_T_1212))).f_SCALE = r_MAX_INT(((*(R14 *)rt_nil_check(l_AT_1193))).f_SCALE, ((*(R14 *)rt_nil_check(l_BT_1194))).f_SCALE);
if (((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))))
{
{ R18 rv1213 = r_MKET(r_FMT3(rt_str("rt_b_fchk(@ @ @)", 16), (p_A).f_C, p_OP, (p_B).f_C), l_T_1212);
return rv1213; }
}
else if (r_TEQS(p_OP, rt_str("/", 1)))
{
{ R18 rv1214 = r_MKET(r_FMT2(rt_str("rt_b_fchk(rt_fdiv(@, @))", 24), (p_A).f_C, (p_B).f_C), l_T_1212);
return rv1214; }
}
}
}
if (((((((*(R14 *)rt_nil_check(l_AT_1193))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_BT_1194))).f_KIND == g_T_FLOAT))) || (((((*(R14 *)rt_nil_check(l_AT_1193))).f_KIND == g_T_FLOAT) && (((*(R14 *)rt_nil_check(l_BT_1194))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1195, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1195, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1193), (r_TYPE_NAME(l_AT_1193)).f_LEN)));
rt_raise(RT_X_INIT);
}
static R7 r_LOWER_OP(R7 p_OP) { 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R7 rv1215 = r_MK(rt_str("and", 3));
return rv1215; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R7 rv1216 = r_MK(rt_str("or", 2));
return rv1216; }
}
{ R7 rv1217 = r_MK(rt_str("xor", 3));
return rv1217; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { 
if ((p_A > p_B))
{
{ rt_int rv1218 = p_A;
return rv1218; }
}
{ rt_int rv1219 = p_B;
return rv1219; }
rt_raise(RT_X_INIT);
}
static R18 r_EQUALITY(R11 * p_E, R7 p_OP, R18 p_A, R18 p_B) { 
R14 * l_AT_1220; memset(&l_AT_1220, 0, sizeof l_AT_1220);
l_AT_1220 = r_REAL_TYPE((p_A).f_T);
R14 * l_BT_1221; memset(&l_BT_1221, 0, sizeof l_BT_1221);
l_BT_1221 = r_REAL_TYPE((p_B).f_T);
R7 l_R_1222; memset(&l_R_1222, 0, sizeof l_R_1222);
if (((((*(R14 *)rt_nil_check(l_AT_1220))).f_KIND == g_T_NIL) || (((*(R14 *)rt_nil_check(l_BT_1221))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R14 *)rt_nil_check(l_AT_1220))).f_KIND == g_T_PTR) || (((*(R14 *)rt_nil_check(l_BT_1221))).f_KIND == g_T_PTR)) || (((((*(R14 *)rt_nil_check(l_AT_1220))).f_KIND == g_T_NIL) && (((*(R14 *)rt_nil_check(l_BT_1221))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R7(&l_R_1222, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R14 *)rt_nil_check(l_AT_1220))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_BT_1221))).f_KIND == g_T_INT)))
{
{
rt_int l_S_1223; memset(&l_S_1223, 0, sizeof l_S_1223);
l_S_1223 = r_MAX_INT(((*(R14 *)rt_nil_check(l_AT_1220))).f_SCALE, ((*(R14 *)rt_nil_check(l_BT_1221))).f_SCALE);
S_R7(&l_R_1222, r_FMT2(rt_str("(@ == @)", 8), r_RESCALE_C((p_A).f_C, ((*(R14 *)rt_nil_check(l_AT_1220))).f_SCALE, l_S_1223), r_RESCALE_C((p_B).f_C, ((*(R14 *)rt_nil_check(l_BT_1221))).f_SCALE, l_S_1223)), 0);
}
}
else
{
if ((!r_SAME_CLASS(l_AT_1220, l_BT_1221)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R14 *)rt_nil_check(l_AT_1220))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
if (((((*(R14 *)rt_nil_check(l_AT_1220))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1220) || r_HAS_ANY(l_BT_1221)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
S_R7(&l_R_1222, r_EQUAL_CODE(l_AT_1220, (p_A).f_C, (p_B).f_C), 0);
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R7(&l_R_1222, r_FMT1(rt_str("(!@)", 4), l_R_1222), 0);
}
{ R18 rv1224 = r_MKET(l_R_1222, ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1224; }
rt_raise(RT_X_INIT);
}
static R18 r_FIXED_ARITH(R11 * p_E, R7 p_OP, R18 p_A, R18 p_B) { 
rt_int l_S1_1225; memset(&l_S1_1225, 0, sizeof l_S1_1225);
l_S1_1225 = ((*(R14 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1226; memset(&l_S2_1226, 0, sizeof l_S2_1226);
l_S2_1226 = ((*(R14 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1227; memset(&l_S_1227, 0, sizeof l_S_1227);
l_S_1227 = r_MAX_INT(l_S1_1225, l_S2_1226);
R7 l_FN_1228; memset(&l_FN_1228, 0, sizeof l_FN_1228);
S_R7(&l_FN_1228, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R7(&l_FN_1228, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R18 rv1229 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1228, r_RESCALE_C((p_A).f_C, l_S1_1225, l_S_1227), r_RESCALE_C((p_B).f_C, l_S2_1226, l_S_1227)), r_INT_TYPE(l_S_1227));
return rv1229; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R18 rv1230 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1225, l_S2_1226)));
return rv1230; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R22 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R18 rv1231 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1225, l_S2_1226)));
return rv1231; }
}
{ R18 rv1232 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1225, l_S2_1226)));
return rv1232; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R22 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R18 rv1233 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1225));
return rv1233; }
}
{ R18 rv1234 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1225));
return rv1234; }
}
else if (r_TEQS(p_OP, rt_str("/", 1)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("/ is for floating point; fixed point division is // (3.2.4.2)", 61));
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("** has no predefined meaning (3.2.4.2)", 38));
}
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("no such operator for fixed point values: ", 41), p_OP);
rt_raise(RT_X_INIT);
}
static R18 r_SCALED_OPERATOR(R11 * p_E, R7 p_OP, R18 p_A, R18 p_B) { 
rt_int l_S1_1235; memset(&l_S1_1235, 0, sizeof l_S1_1235);
l_S1_1235 = ((*(R14 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1236; memset(&l_S2_1236, 0, sizeof l_S2_1236);
l_S2_1236 = ((*(R14 *)rt_nil_check((p_B).f_T))).f_SCALE;
R7 l_RND_1237; memset(&l_RND_1237, 0, sizeof l_RND_1237);
S_R7(&l_RND_1237, r_MK(rt_str("0", 1)), 0);
if (((!(((*(R14 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R14 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R22 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R7(&l_RND_1237, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R11 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R11 *)rt_nil_check(p_E))).f_LINE);
{ R18 rv1238 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1238; }
}
{
R12 l_SM_1239; memset(&l_SM_1239, 0, sizeof l_SM_1239);
S_R12(&l_SM_1239, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1240; memset(&l_S_1240, 0, sizeof l_S_1240);
l_S_1240 = (l_SM_1239).f_V;
rt_int l_SR_1241; memset(&l_SR_1241, 0, sizeof l_SR_1241);
l_SR_1241 = r_MAX_INT(l_S1_1235, l_S2_1236);
if ((!(l_SM_1239).f_OK))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R18 rv1242 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1240, l_S1_1235), l_S2_1236)), l_RND_1237), r_INT_TYPE(l_S_1240));
return rv1242; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R18 rv1243 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1240, l_S1_1235), l_S2_1236)), l_RND_1237), r_INT_TYPE(l_S_1240));
return rv1243; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R18 rv1244 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1235), r_NUM(l_S_1240), l_RND_1237), r_INT_TYPE(l_S_1240));
return rv1244; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R7 l_FN_1245; memset(&l_FN_1245, 0, sizeof l_FN_1245);
S_R7(&l_FN_1245, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R7(&l_FN_1245, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R18 rv1246 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT3(rt_str("@(@, @)", 7), l_FN_1245, r_RESCALE_C((p_A).f_C, l_S1_1235, l_SR_1241), r_RESCALE_C((p_B).f_C, l_S2_1236, l_SR_1241)), r_NUM(l_SR_1241), r_NUM(l_S_1240), l_RND_1237), r_INT_TYPE(l_S_1240));
return rv1246; }
}
}
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R18 r_IN_EXPR(R11 * p_E) { 
R18 l_V_1247; memset(&l_V_1247, 0, sizeof l_V_1247);
S_R18(&l_V_1247, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
R14 * l_T_1248; memset(&l_T_1248, 0, sizeof l_T_1248);
l_T_1248 = r_REAL_TYPE((l_V_1247).f_T);
R11 * l_R_1249; memset(&l_R_1249, 0, sizeof l_R_1249);
l_R_1249 = ((*(R11 *)rt_nil_check(p_E))).f_B;
R7 l_TMP_1250; memset(&l_TMP_1250, 0, sizeof l_TMP_1250);
S_R7(&l_TMP_1250, r_NEW_NAME(rt_str("iv", 2)), 0);
R18 l_LO_1251; memset(&l_LO_1251, 0, sizeof l_LO_1251);
R18 l_HI_1252; memset(&l_HI_1252, 0, sizeof l_HI_1252);
R7 l_LOC_1253; memset(&l_LOC_1253, 0, sizeof l_LOC_1253);
R7 l_HIC_1254; memset(&l_HIC_1254, 0, sizeof l_HIC_1254);
R7 l_LO_OP_1255; memset(&l_LO_OP_1255, 0, sizeof l_LO_OP_1255);
S_R7(&l_LO_OP_1255, r_MK(rt_str("<=", 2)), 0);
R7 l_HI_OP_1256; memset(&l_HI_OP_1256, 0, sizeof l_HI_OP_1256);
S_R7(&l_HI_OP_1256, r_MK(rt_str("<=", 2)), 0);
S_R18(&l_LO_1251, r_EXPR(((*(R11 *)rt_nil_check(l_R_1249))).f_A, l_T_1248), 0);
S_R18(&l_HI_1252, r_EXPR(((*(R11 *)rt_nil_check(l_R_1249))).f_B, l_T_1248), 0);
if (((((*(R14 *)rt_nil_check(l_T_1248))).f_KIND == g_T_ENUM) && ((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_1248))).f_BASE))).f_UNORDERED))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R14 *)rt_nil_check(l_T_1248))).f_KIND == g_T_INT) || (((*(R14 *)rt_nil_check(l_T_1248))).f_KIND == g_T_FLOAT)) || (((*(R14 *)rt_nil_check(l_T_1248))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
S_R7(&l_LOC_1253, r_CONVERT_TO_SCALE(l_LO_1251, l_T_1248, ((*(R11 *)rt_nil_check(p_E))).f_LINE), 0);
S_R7(&l_HIC_1254, r_CONVERT_TO_SCALE(l_HI_1252, l_T_1248, ((*(R11 *)rt_nil_check(p_E))).f_LINE), 0);
if (((((*(R11 *)rt_nil_check(l_R_1249))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(l_R_1249))).f_IV == ((rt_int)3LL))))
{
S_R7(&l_LO_OP_1255, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R11 *)rt_nil_check(l_R_1249))).f_IV >= ((rt_int)2LL)))
{
S_R7(&l_HI_OP_1256, r_MK(rt_str("<", 1)), 0);
}
{
R7 l_P1_1257; memset(&l_P1_1257, 0, sizeof l_P1_1257);
S_R7(&l_P1_1257, r_FMT4(rt_str("({ @ @ = @; (@) ", 16), r_CTYPE(l_T_1248), l_TMP_1250, (l_V_1247).f_C, l_LOC_1253), 0);
R7 l_P2_1258; memset(&l_P2_1258, 0, sizeof l_P2_1258);
S_R7(&l_P2_1258, r_FMT4(rt_str("@@ @ && @ ", 10), l_P1_1257, l_LO_OP_1255, l_TMP_1250, l_TMP_1250), 0);
{ R18 rv1259 = r_MKET(r_FMT3(rt_str("@@ (@); })", 10), l_P2_1258, l_HI_OP_1256, l_HIC_1254), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1259; }
}
rt_raise(RT_X_INIT);
}
static R7 r_CONVERT_TO_SCALE(R18 p_V, R14 * p_T, rt_int p_LINE) { 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R7 rv1260 = r_RESCALE_C((p_V).f_C, ((*(R14 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R14 *)rt_nil_check(p_T))).f_SCALE);
return rv1260; }
}
{ R7 rv1261 = (p_V).f_C;
return rv1261; }
rt_raise(RT_X_INIT);
}
static R18 r_INT_ET(rt_int p_V) { 
{ R18 rv1262 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1262; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { 
rt_int l_B_1263; memset(&l_B_1263, 0, sizeof l_B_1263);
l_B_1263 = ((rt_int)0LL);
rt_int l_P_1264; memset(&l_P_1264, 0, sizeof l_P_1264);
l_P_1264 = ((rt_int)1LL);
for (;;) {
if ((l_P_1264 >= p_N)) goto L_end1265;
{
l_B_1263 = rt_add(l_B_1263, ((rt_int)1LL));
l_P_1264 = rt_mul(l_P_1264, ((rt_int)2LL));
}
} L_end1265: ;
{ rt_int rv1266 = l_B_1263;
return rv1266; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R14 * p_T) { 
if ((!(((*(R14 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R12 l_M_1267; memset(&l_M_1267, 0, sizeof l_M_1267);
S_R12(&l_M_1267, r_MANIFEST(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1267).f_OK)
{
{ rt_int rv1268 = (l_M_1267).f_V;
return rv1268; }
}
}
}
}
{ rt_int rv1269 = r_BITS_FOR(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1269; }
rt_raise(RT_X_INIT);
}
static R18 r_ATTRIBUTE(R18 p_B, R7 p_NAME, rt_int p_LINE) { 
R14 * l_T_1270; memset(&l_T_1270, 0, sizeof l_T_1270);
l_T_1270 = (p_B).f_T;
rt_int l_K_1271; memset(&l_K_1271, 0, sizeof l_K_1271);
l_K_1271 = ((*(R14 *)rt_nil_check(l_T_1270))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R18 rv1272 = r_SIZE_OF(l_T_1270, (p_B).f_C);
return rv1272; }
}
if ((l_K_1271 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R18 rv1273 = r_INT_ET(((*(R14 *)rt_nil_check(l_T_1270))).f_SCALE);
return rv1273; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R18 rv1274 = r_INT_ET(((rt_int)2LL));
return rv1274; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R18 rv1275 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1275; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
{ R18 rv1276 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1276; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R14 *)rt_nil_check(l_T_1270))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R18 rv1277 = r_MKET(((*(R14 *)rt_nil_check(l_T_1270))).f_LO_C, r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_1270))).f_SCALE));
return rv1277; }
}
{ R18 rv1278 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_1270))).f_SCALE));
return rv1278; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R14 *)rt_nil_check(l_T_1270))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R18 rv1279 = r_MKET(((*(R14 *)rt_nil_check(l_T_1270))).f_HI_C, r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_1270))).f_SCALE));
return rv1279; }
}
{ R18 rv1280 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_1270))).f_SCALE));
return rv1280; }
}
}
else if ((l_K_1271 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R18 rv1281 = r_INT_ET(((*(R14 *)rt_nil_check(l_T_1270))).f_SCALE);
return rv1281; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R18 rv1282 = r_INT_ET(((rt_int)15LL));
return rv1282; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R18 rv1283 = r_INT_ET(((rt_int)2LL));
return rv1283; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
{ R18 rv1284 = r_INT_ET(rt_neg(((rt_int)1022LL)));
return rv1284; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
{ R18 rv1285 = r_INT_ET(((rt_int)1023LL));
return rv1285; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
{ R18 rv1286 = r_INT_ET(((rt_int)53LL));
return rv1286; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
{ R18 rv1287 = r_INT_ET(((rt_int)11LL));
return rv1287; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R14 *)rt_nil_check(l_T_1270))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R18 rv1288 = r_MKET(((*(R14 *)rt_nil_check(l_T_1270))).f_LO_C, l_T_1270);
return rv1288; }
}
{ R18 rv1289 = r_MKET(r_MK(rt_str("(-DBL_MAX)", 10)), l_T_1270);
return rv1289; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R14 *)rt_nil_check(l_T_1270))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R18 rv1290 = r_MKET(((*(R14 *)rt_nil_check(l_T_1270))).f_HI_C, l_T_1270);
return rv1290; }
}
{ R18 rv1291 = r_MKET(r_MK(rt_str("DBL_MAX", 7)), l_T_1270);
return rv1291; }
}
}
else if ((l_K_1271 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R14 *)rt_nil_check(l_T_1270))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R18 rv1292 = r_MKET(((*(R14 *)rt_nil_check(l_T_1270))).f_LO_C, ((*(R14 *)rt_nil_check(l_T_1270))).f_BASE);
return rv1292; }
}
{ R18 rv1293 = r_MKET(r_MK(rt_str("0", 1)), ((*(R14 *)rt_nil_check(l_T_1270))).f_BASE);
return rv1293; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R14 *)rt_nil_check(l_T_1270))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R18 rv1294 = r_MKET(((*(R14 *)rt_nil_check(l_T_1270))).f_HI_C, ((*(R14 *)rt_nil_check(l_T_1270))).f_BASE);
return rv1294; }
}
{ R18 rv1295 = r_MKET(r_NUM(rt_sub(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_1270))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R14 *)rt_nil_check(l_T_1270))).f_BASE);
return rv1295; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R14 *)rt_nil_check(l_T_1270))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R18 rv1296 = r_MKET(r_FMT2(rt_str("((@) - (@) + 1)", 15), ((*(R14 *)rt_nil_check(l_T_1270))).f_HI_C, ((*(R14 *)rt_nil_check(l_T_1270))).f_LO_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1296; }
}
{ R18 rv1297 = r_INT_ET(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_1270))).f_BASE))).f_NLITS);
return rv1297; }
}
}
else if (((l_K_1271 == g_T_STR) || (l_K_1271 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R18 rv1298 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1298; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R18 rv1299 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1299; }
}
}
else if ((l_K_1271 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R18 rv1300 = r_INT_ET(((*(R14 *)rt_nil_check(l_T_1270))).f_DIMS);
return rv1300; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R14 *)rt_nil_check(l_T_1270))).f_DIMS == ((rt_int)1LL))))
{
{ R18 rv1301 = r_MKET(r_FMT1(rt_str("rt_b_extent(1, (@).lo, (@).hi)", 30), (p_B).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1301; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R18 rv1302 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1302; }
}
}
else if ((l_K_1271 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R14 *)rt_nil_check(l_T_1270))).f_SCALE == ((rt_int)1LL)))
{
{ R18 rv1303 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1303; }
}
{ R18 rv1304 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1304; }
}
}
else if (((l_K_1271 == g_T_ABS) || (l_K_1271 == g_T_REC)))
{
{
R14 * l_U_1305; memset(&l_U_1305, 0, sizeof l_U_1305);
l_U_1305 = l_T_1270;
if ((l_K_1271 == g_T_ABS))
{
l_U_1305 = ((*(R14 *)rt_nil_check(l_T_1270))).f_BASE;
}
if ((((*(R14 *)rt_nil_check(l_U_1305))).f_KIND == g_T_REC))
{
{
R15 * l_F_1306; memset(&l_F_1306, 0, sizeof l_F_1306);
l_F_1306 = r_FIND_FIELD(l_U_1305, p_NAME);
if ((!(l_F_1306 == NULL)))
{
if ((!(((*(R15 *)rt_nil_check(l_F_1306))).f_KIND == ((rt_int)0LL))))
{
{ R18 rv1307 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R15 *)rt_nil_check(l_F_1306))).f_CNAME), ((*(R15 *)rt_nil_check(l_F_1306))).f_T);
return rv1307; }
}
}
}
}
}
}
r_FAILT(p_LINE, rt_str("no such field or attribute: ", 28), p_NAME);
rt_raise(RT_X_INIT);
}
static R11 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE) { 
R11 * l_N_1308; memset(&l_N_1308, 0, sizeof l_N_1308);
l_N_1308 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_N_1308))).f_NAME, r_MKN(p_NAME), 0);
{ R11 * rv1309 = l_N_1308;
return rv1309; }
rt_raise(RT_X_INIT);
}
static R18 r_SIZE_OF(R14 * p_T, R7 p_C) { 
rt_int l_K_1310; memset(&l_K_1310, 0, sizeof l_K_1310);
l_K_1310 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1310 == g_T_INT))
{
if ((!(((*(R14 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R18 rv1311 = r_MKET((r_EXPR(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R22 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1311; }
}
}
{ R18 rv1312 = r_INT_ET(((rt_int)64LL));
return rv1312; }
}
else if ((l_K_1310 == g_T_FLOAT))
{
{ R18 rv1313 = r_INT_ET(((rt_int)64LL));
return rv1313; }
}
else if ((l_K_1310 == g_T_BOOL))
{
{ R18 rv1314 = r_INT_ET(((rt_int)1LL));
return rv1314; }
}
else if ((l_K_1310 == g_T_ENUM))
{
{ R18 rv1315 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1315; }
}
else if ((l_K_1310 == g_T_BITS))
{
{ R18 rv1316 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1316; }
}
else if ((l_K_1310 == g_T_STR))
{
{ R18 rv1317 = r_MKET(r_FMT1(rt_str("(rt_int)((@).len * 8)", 21), p_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1317; }
}
else if (((l_K_1310 == g_T_PTR) || (l_K_1310 == g_T_SEM)))
{
{ R18 rv1318 = r_INT_ET(((rt_int)64LL));
return rv1318; }
}
else if ((l_K_1310 == g_T_ABS))
{
{ R18 rv1319 = r_SIZE_OF(((*(R14 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1319; }
}
else if ((l_K_1310 == g_T_ARR))
{
{ R18 rv1320 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R14 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R14 *)rt_nil_check(p_T))).f_ELEM)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1320; }
}
{ R18 rv1321 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1321; }
rt_raise(RT_X_INIT);
}
static R18 r_TYPE_ATTRIBUTE(R7 p_TNAME, R7 p_NAME, rt_int p_LINE) { 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{
R14 * l_T_1322; memset(&l_T_1322, 0, sizeof l_T_1322);
l_T_1322 = r_RESOLVE_USER_NAME(p_TNAME, p_LINE);
{ R18 rv1323 = r_ATTRIBUTE(r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(l_T_1322)), l_T_1322), p_NAME, p_LINE);
return rv1323; }
}
rt_raise(RT_X_INIT);
}
static R18 r_ATTRIBUTE_OF_ATTRIBUTE(R7 p_TNAME, R7 p_A, R7 p_B, rt_int p_LINE) { 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R18 rv1324 = r_INT_ET(((rt_int)100000000LL));
return rv1324; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R18 rv1325 = r_INT_ET(((rt_int)15LL));
return rv1325; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R18 rv1326 = r_INT_ET(((rt_int)0LL));
return rv1326; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R18 r_RECORD_CONSTRUCTOR(R11 * p_E, R14 * p_WANT) { 
R14 * l_T_1327; memset(&l_T_1327, 0, sizeof l_T_1327);
l_T_1327 = p_WANT;
if ((!(((*(R11 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_1327 = r_RESOLVE(((*(R11 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_1327 == NULL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_1327 = r_REAL_TYPE(l_T_1327);
if ((!(((*(R14 *)rt_nil_check(l_T_1327))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_1327))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R7 l_TMP_1328; memset(&l_TMP_1328, 0, sizeof l_TMP_1328);
S_R7(&l_TMP_1328, r_NEW_NAME(rt_str("rc", 2)), 0);
R7 l_R_1329; memset(&l_R_1329, 0, sizeof l_R_1329);
S_R7(&l_R_1329, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R14 *)rt_nil_check(l_T_1327))).f_CNAME, l_TMP_1328, l_TMP_1328, l_TMP_1328), 0);
R15 * l_F_1330; memset(&l_F_1330, 0, sizeof l_F_1330);
l_F_1330 = ((*(R14 *)rt_nil_check(l_T_1327))).f_FIELDS;
S_R7(&l_R_1329, r_FMT2(rt_str("@@", 2), l_R_1329, r_INIT_CODE(l_T_1327, l_TMP_1328)), 0);
for (;;) {
if ((l_F_1330 == NULL)) goto L_end1331;
{
if ((((*(R15 *)rt_nil_check(l_F_1330))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R15 *)rt_nil_check(l_F_1330))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R15 *)rt_nil_check(l_F_1330))).f_LABELS, (r_TAG_VALUE(l_T_1327, ((*(R15 *)rt_nil_check(l_F_1330))).f_TAGF)).f_V, ((*(R15 *)rt_nil_check(r_FIND_FIELD(l_T_1327, ((*(R15 *)rt_nil_check(l_F_1330))).f_TAGF)))).f_T)))
{
{
R11 * l_INIT_1332; memset(&l_INIT_1332, 0, sizeof l_INIT_1332);
l_INIT_1332 = r_FIND_INIT(((*(R11 *)rt_nil_check(p_E))).f_A, ((*(R15 *)rt_nil_check(l_F_1330))).f_NAME);
if ((l_INIT_1332 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R15 *)rt_nil_check(l_F_1330))).f_NAME);
}
S_R7(&l_R_1329, r_FMT2(rt_str("@ @", 3), l_R_1329, r_STORE_CODE(((*(R15 *)rt_nil_check(l_F_1330))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_1328, ((*(R15 *)rt_nil_check(l_F_1330))).f_CNAME), r_EXPR(((*(R11 *)rt_nil_check(l_INIT_1332))).f_A, ((*(R15 *)rt_nil_check(l_F_1330))).f_T), ((*(R11 *)rt_nil_check(l_INIT_1332))).f_LINE, l_TMP_1328)), 0);
}
}
}
l_F_1330 = ((*(R15 *)rt_nil_check(l_F_1330))).f_NEXT;
}
} L_end1331: ;
{
R11 * l_P_1333; memset(&l_P_1333, 0, sizeof l_P_1333);
l_P_1333 = ((*(R11 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_1333 == NULL)) goto L_end1334;
{
{
R15 * l_G_1335; memset(&l_G_1335, 0, sizeof l_G_1335);
l_G_1335 = r_FIND_FIELD(l_T_1327, ((*(R11 *)rt_nil_check(l_P_1333))).f_NAME);
if ((l_G_1335 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(l_P_1333))).f_LINE, rt_str("no such field: ", 15), ((*(R11 *)rt_nil_check(l_P_1333))).f_NAME);
}
if ((!(((*(R15 *)rt_nil_check(l_G_1335))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R11 *)rt_nil_check(l_P_1333))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R11 *)rt_nil_check(l_P_1333))).f_NAME);
}
r_CHECK_VARIANT(l_G_1335, l_T_1327, NULL, ((*(R11 *)rt_nil_check(l_P_1333))).f_LINE);
}
l_P_1333 = ((*(R11 *)rt_nil_check(l_P_1333))).f_NEXT;
}
} L_end1334: ;
}
{ R18 rv1336 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1329, l_TMP_1328), l_T_1327);
return rv1336; }
}
rt_raise(RT_X_INIT);
}
static R11 * r_FIND_INIT(R11 * p_L, R7 p_NAME) { 
R11 * l_P_1337; memset(&l_P_1337, 0, sizeof l_P_1337);
l_P_1337 = p_L;
for (;;) {
if ((l_P_1337 == NULL)) goto L_end1338;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_P_1337))).f_NAME, p_NAME))
{
{ R11 * rv1339 = l_P_1337;
return rv1339; }
}
l_P_1337 = ((*(R11 *)rt_nil_check(l_P_1337))).f_NEXT;
}
} L_end1338: ;
{ R11 * rv1340 = NULL;
return rv1340; }
rt_raise(RT_X_INIT);
}
static R18 r_ARRAY_CONSTRUCTOR(R11 * p_E, R14 * p_WANT) { 
rt_int l_DIMS_1341; memset(&l_DIMS_1341, 0, sizeof l_DIMS_1341);
l_DIMS_1341 = ((rt_int)0LL);
R11 * l_P_1342; memset(&l_P_1342, 0, sizeof l_P_1342);
l_P_1342 = p_E;
R14 * l_ELEM_1343; memset(&l_ELEM_1343, 0, sizeof l_ELEM_1343);
l_ELEM_1343 = NULL;
for (;;) {
if ((!(((*(R11 *)rt_nil_check(l_P_1342))).f_KIND == g_N_ARRCONS))) goto L_end1344;
{
l_DIMS_1341 = rt_add(l_DIMS_1341, ((rt_int)1LL));
l_P_1342 = ((*(R11 *)rt_nil_check(l_P_1342))).f_A;
}
} L_end1344: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R14 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_1343 = ((*(R14 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_1343 == NULL))
{
l_ELEM_1343 = (r_EXPR(l_P_1342, NULL)).f_T;
if (((((*(R14 *)rt_nil_check(l_ELEM_1343))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_ELEM_1343))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_1343 = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
}
}
{
R14 * l_A_1345; memset(&l_A_1345, 0, sizeof l_A_1345);
l_A_1345 = r_ARRAY_OF(l_ELEM_1343, l_DIMS_1341);
R7 l_TMP_1346; memset(&l_TMP_1346, 0, sizeof l_TMP_1346);
S_R7(&l_TMP_1346, r_NEW_NAME(rt_str("ac", 2)), 0);
R7 l_R_1347; memset(&l_R_1347, 0, sizeof l_R_1347);
S_R7(&l_R_1347, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R14 *)rt_nil_check(l_A_1345))).f_CNAME, l_TMP_1346, l_TMP_1346), 0);
rt_int l_K_1348; memset(&l_K_1348, 0, sizeof l_K_1348);
l_K_1348 = ((rt_int)0LL);
S_R7(&l_R_1347, r_FMT2(rt_str("@@); ", 5), l_R_1347, l_TMP_1346), 0);
l_P_1342 = p_E;
{ rt_int it1350_lo = ((rt_int)0LL), it1350_hi = rt_sub(l_DIMS_1341, ((rt_int)1LL));
for (rt_int it1350 = it1350_lo; it1350 <= it1350_hi; it1350++) {
{
S_R7(&l_R_1347, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_1347, l_TMP_1346, r_NUM(it1350), l_TMP_1346), 0);
S_R7(&l_R_1347, r_FMT3(rt_str("@@] = @;", 8), l_R_1347, r_NUM(it1350), r_NUM(rt_sub(r_LIST_LENGTH(((*(R11 *)rt_nil_check(l_P_1342))).f_A), ((rt_int)1LL)))), 0);
l_P_1342 = ((*(R11 *)rt_nil_check(l_P_1342))).f_A;
}
} } L_end1349: ;
S_R7(&l_R_1347, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_1347, l_TMP_1346, l_TMP_1346, r_NUM(l_DIMS_1341)), 0);
S_R7(&l_R_1347, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_1347, l_TMP_1346, l_TMP_1346), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_1341, l_A_1345, l_TMP_1346, &l_R_1347, &l_K_1348);
{ R18 rv1351 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1347, l_TMP_1346), l_A_1345);
return rv1351; }
}
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R11 * p_E, rt_int p_DIMS, R14 * p_A, R7 p_TMP, R7 *p_R, rt_int *p_K) { 
R11 * l_P_1352; memset(&l_P_1352, 0, sizeof l_P_1352);
l_P_1352 = ((*(R11 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_1352 == NULL)) goto L_end1353;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_1352, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R11 *)rt_nil_check(l_P_1352))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R11 *)rt_nil_check(l_P_1352))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R14 *)rt_nil_check(p_A))).f_ELEM))
{
S_R7(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R14 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R7(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R14 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_1352, ((*(R14 *)rt_nil_check(p_A))).f_ELEM), ((*(R11 *)rt_nil_check(l_P_1352))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_1352 = ((*(R11 *)rt_nil_check(l_P_1352))).f_NEXT;
}
} L_end1353: ;
}
static R14 * r_ARRAY_OF(R14 * p_ELEM, rt_int p_DIMS) { 
R14 * l_T_1354; memset(&l_T_1354, 0, sizeof l_T_1354);
l_T_1354 = r_NEW_TYP(g_T_ARR);
((*(R14 *)rt_nil_check(l_T_1354))).f_ELEM = p_ELEM;
((*(R14 *)rt_nil_check(l_T_1354))).f_DIMS = p_DIMS;
S_R7(&((*(R14 *)rt_nil_check(l_T_1354))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R14 * rv1355 = l_T_1354;
return rv1355; }
rt_raise(RT_X_INIT);
}
static R18 r_TYPE_SPECIFIER(R11 * p_E) { 
R14 * l_T_1356; memset(&l_T_1356, 0, sizeof l_T_1356);
l_T_1356 = r_RESOLVE(((*(R11 *)rt_nil_check(p_E))).f_A);
R18 l_V_1357; memset(&l_V_1357, 0, sizeof l_V_1357);
S_R18(&l_V_1357, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B, l_T_1356), 0);
R14 * l_RT_1358; memset(&l_RT_1358, 0, sizeof l_RT_1358);
l_RT_1358 = r_REAL_TYPE(l_T_1356);
if (((((*(R14 *)rt_nil_check((l_V_1357).f_T))).f_KIND == g_T_BITS) && (!(((*(R14 *)rt_nil_check(l_RT_1358))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R11 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R14 *)rt_nil_check(l_RT_1358))).f_KIND == g_T_INT))
{
{ R18 rv1359 = r_MKET(r_RANGE_CHECK(l_RT_1358, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1357).f_C), r_NO_TEXT()), l_T_1356);
return rv1359; }
}
else if ((((*(R14 *)rt_nil_check(l_RT_1358))).f_KIND == g_T_BOOL))
{
{ R18 rv1360 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1357).f_C), l_T_1356);
return rv1360; }
}
else if ((((*(R14 *)rt_nil_check(l_RT_1358))).f_KIND == g_T_ENUM))
{
{ R18 rv1361 = r_MKET(r_ENUM_OF_BITS(l_RT_1358, (l_V_1357).f_C), l_T_1356);
return rv1361; }
}
else if ((((*(R14 *)rt_nil_check(l_RT_1358))).f_KIND == g_T_FLOAT))
{
{ R18 rv1362 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_1357).f_C), l_T_1356);
return rv1362; }
}
else if ((((*(R14 *)rt_nil_check(l_RT_1358))).f_KIND == g_T_STR))
{
{ R18 rv1363 = r_MKET(r_FMT1(rt_str("rt_b_str_of_bits(@)", 19), (l_V_1357).f_C), l_T_1356);
return rv1363; }
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{ R18 rv1364 = r_MKET(r_CONVERT(l_V_1357, l_T_1356, ((*(R11 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), l_T_1356);
return rv1364; }
rt_raise(RT_X_INIT);
}
static R7 r_ENUM_OF_BITS(R14 * p_T, R7 p_C) { 
if ((!(((*(R14 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R7 rv1365 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv1365; }
}
}
{ R7 rv1366 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv1366; }
rt_raise(RT_X_INIT);
}
static R7 r_REP_TABLE(R14 * p_T) { 
R7 l_NAME_1367; memset(&l_NAME_1367, 0, sizeof l_NAME_1367);
S_R7(&l_NAME_1367, r_NEW_NAME(rt_str("reps", 4)), 0);
R11 * l_L_1368; memset(&l_L_1368, 0, sizeof l_L_1368);
l_L_1368 = ((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R7 l_R_1369; memset(&l_R_1369, 0, sizeof l_R_1369);
S_R7(&l_R_1369, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1368 == NULL)) goto L_end1370;
{
{
R11 * l_V_1371; memset(&l_V_1371, 0, sizeof l_V_1371);
l_V_1371 = ((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_1372; memset(&l_FOUND_1372, 0, sizeof l_FOUND_1372);
l_FOUND_1372 = 0;
for (;;) {
if ((l_V_1371 == NULL)) goto L_end1373;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_V_1371))).f_NAME, ((*(R11 *)rt_nil_check(l_L_1368))).f_NAME))
{
S_R7(&l_R_1369, r_FMT2(rt_str("@@, ", 4), l_R_1369, (r_EXPR(((*(R11 *)rt_nil_check(l_V_1371))).f_A, NULL)).f_C), 0);
l_FOUND_1372 = 1;
}
l_V_1371 = ((*(R11 *)rt_nil_check(l_V_1371))).f_NEXT;
}
} L_end1373: ;
if ((!l_FOUND_1372))
{
r_FAILT(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R11 *)rt_nil_check(l_L_1368))).f_NAME);
}
}
l_L_1368 = ((*(R11 *)rt_nil_check(l_L_1368))).f_NEXT;
}
} L_end1370: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_1367, r_NUM(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_1369, l_NAME_1367, l_NAME_1367));
{ R7 rv1374 = r_FMT2(rt_str("@, @", 4), l_NAME_1367, r_NUM(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv1374; }
rt_raise(RT_X_INIT);
}
static R18 r_NEW_EXPR(R11 * p_E, R14 * p_WANT) { 
rt_int l_SEM_1375; memset(&l_SEM_1375, 0, sizeof l_SEM_1375);
l_SEM_1375 = r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_1375 = (((*(R14 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_1375)
{
{
R14 * l_T_1376; memset(&l_T_1376, 0, sizeof l_T_1376);
l_T_1376 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R14 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_1376 = p_WANT;
}
}
{ R18 rv1377 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R14 *)rt_nil_check(l_T_1376))).f_SCALE)), l_T_1376);
return rv1377; }
}
}
{
R14 * l_T_1378; memset(&l_T_1378, 0, sizeof l_T_1378);
l_T_1378 = r_RESOLVE(r_EXPR_TO_TS(((*(R11 *)rt_nil_check(p_E))).f_A));
R14 * l_P_1379; memset(&l_P_1379, 0, sizeof l_P_1379);
l_P_1379 = r_NEW_TYP(g_T_PTR);
((*(R14 *)rt_nil_check(l_P_1379))).f_TARGET = l_T_1378;
((*(R14 *)rt_nil_check(l_P_1379))).f_TARGET_TS = ((*(R11 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_1378))
{
{ R18 rv1380 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_alloc(sizeof *p); @ p; })", 38), r_CTYPE(l_T_1378), r_INIT_CODE(l_T_1378, r_MK(rt_str("(*p)", 4)))), l_P_1379);
return rv1380; }
}
{ R18 rv1381 = r_MKET(r_FMT2(rt_str("((@ *)rt_alloc(sizeof (@)))", 27), r_CTYPE(l_T_1378), r_CTYPE(l_T_1378)), l_P_1379);
return rv1381; }
}
rt_raise(RT_X_INIT);
}
static R11 * r_NTH(R11 * p_L, rt_int p_K) { 
R11 * l_P_1382; memset(&l_P_1382, 0, sizeof l_P_1382);
l_P_1382 = p_L;
{ rt_int it1384_lo = ((rt_int)1LL), it1384_hi = p_K;
for (rt_int it1384 = it1384_lo; it1384 <= it1384_hi; it1384++) {
{
if ((!(l_P_1382 == NULL)))
{
l_P_1382 = ((*(R11 *)rt_nil_check(l_P_1382))).f_NEXT;
}
}
} } L_end1383: ;
{ R11 * rv1385 = l_P_1382;
return rv1385; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R11 * p_E, rt_int p_LO, rt_int p_HI) { 
rt_int l_N_1386; memset(&l_N_1386, 0, sizeof l_N_1386);
l_N_1386 = r_LIST_LENGTH(((*(R11 *)rt_nil_check(p_E))).f_A);
if (((l_N_1386 < p_LO) || (l_N_1386 > p_HI)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R11 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R11 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
}
static R7 r_ROUNDING_ARG(R11 * p_E, rt_int p_N) { 
R11 * l_L_1387; memset(&l_L_1387, 0, sizeof l_L_1387);
l_L_1387 = r_NTH(((*(R11 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_1387 == NULL)))
{
if (((((*(R11 *)rt_nil_check(l_L_1387))).f_KIND == g_N_QUAL) && ((((*(R11 *)rt_nil_check(l_L_1387))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R11 *)rt_nil_check(l_L_1387))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R7 rv1388 = r_MK(rt_str("1", 1));
return rv1388; }
}
{ R7 rv1389 = r_MK(rt_str("0", 1));
return rv1389; }
}
if (((((*(R11 *)rt_nil_check(l_L_1387))).f_KIND == g_N_NAME) || (((*(R11 *)rt_nil_check(l_L_1387))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R11 *)rt_nil_check(l_L_1387))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R7 rv1390 = r_MK(rt_str("1", 1));
return rv1390; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(l_L_1387))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R7 rv1391 = r_MK(rt_str("0", 1));
return rv1391; }
}
}
}
if (((*(R22 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R7 rv1392 = r_MK(rt_str("1", 1));
return rv1392; }
}
{ R7 rv1393 = r_MK(rt_str("0", 1));
return rv1393; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R11 * p_E) { 
if ((p_E == NULL))
{
{ rt_int rv1394 = 0;
return rv1394; }
}
if (((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv1395 = (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv1395; }
}
{ rt_int rv1396 = 0;
return rv1396; }
rt_raise(RT_X_INIT);
}
static R11 * r_ARG_EXPR(R11 * p_E) { 
if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R11 * rv1397 = ((*(R11 *)rt_nil_check(p_E))).f_A;
return rv1397; }
}
{ R11 * rv1398 = p_E;
return rv1398; }
rt_raise(RT_X_INIT);
}
static R18 r_BUILTIN(R11 * p_E, R14 * p_WANT) { 
R7 l_NAME_1399; memset(&l_NAME_1399, 0, sizeof l_NAME_1399);
S_R7(&l_NAME_1399, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1400; memset(&l_LINE_1400, 0, sizeof l_LINE_1400);
l_LINE_1400 = ((*(R11 *)rt_nil_check(p_E))).f_LINE;
if ((r_TEQS(l_NAME_1399, rt_str("PUT", 3)) || r_TEQS(l_NAME_1399, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R18 l_V_1401; memset(&l_V_1401, 0, sizeof l_V_1401);
S_R18(&l_V_1401, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1401).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_1400, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
if (r_TEQS(l_NAME_1399, rt_str("PUT", 3)))
{
{ R18 rv1402 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_1401).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1402; }
}
{ R18 rv1403 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_1401).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1403; }
}
}
else if (r_TEQS(l_NAME_1399, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R18 rv1404 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1404; }
}
else if (r_TEQS(l_NAME_1399, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R18 rv1405 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1405; }
}
else if (r_TEQS(l_NAME_1399, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R18 rv1406 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1406; }
}
else if (r_TEQS(l_NAME_1399, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R18 rv1407 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1407; }
}
else if (r_TEQS(l_NAME_1399, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R18 rv1408 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A)), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1408; }
}
if (r_TEQS(l_NAME_1399, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R18 rv1409 = r_IMAGE_OF(r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1400);
return rv1409; }
}
else if (r_TEQS(l_NAME_1399, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R18 rv1410 = r_TO_FIXED_CALL(p_E);
return rv1410; }
}
else if (r_TEQS(l_NAME_1399, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R18 l_V_1411; memset(&l_V_1411, 0, sizeof l_V_1411);
S_R18(&l_V_1411, r_EXPR(r_ARG_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A), NULL), 0);
R12 l_P_1412; memset(&l_P_1412, 0, sizeof l_P_1412);
S_R12(&l_P_1412, r_MANIFEST(r_ARG_EXPR(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NEXT)), 0);
R14 * l_VT_1413; memset(&l_VT_1413, 0, sizeof l_VT_1413);
l_VT_1413 = r_REAL_TYPE((l_V_1411).f_T);
R14 * l_T_1414; memset(&l_T_1414, 0, sizeof l_T_1414);
l_T_1414 = r_NEW_TYP(g_T_FLOAT);
if ((!(l_P_1412).f_OK))
{
r_FAIL(l_LINE_1400, rt_str("the precision of TO_FLOAT must be manifest (3.3.6.1)", 52));
}
if ((((l_P_1412).f_V < ((rt_int)1LL)) || ((l_P_1412).f_V > ((rt_int)15LL))))
{
r_FAIL(l_LINE_1400, rt_str("precisions from 1 to 15 are implemented (3.3.1)", 47));
}
((*(R14 *)rt_nil_check(l_T_1414))).f_SCALE = (l_P_1412).f_V;
if ((((*(R14 *)rt_nil_check(l_VT_1413))).f_KIND == g_T_INT))
{
{ R18 rv1415 = r_MKET(r_FMT2(rt_str("rt_b_float_of_fix(@, @)", 23), (l_V_1411).f_C, r_NUM(((*(R14 *)rt_nil_check(l_VT_1413))).f_SCALE)), l_T_1414);
return rv1415; }
}
else if ((((*(R14 *)rt_nil_check(l_VT_1413))).f_KIND == g_T_FLOAT))
{
{ R18 rv1416 = r_MKET((l_V_1411).f_C, l_T_1414);
return rv1416; }
}
else if ((((*(R14 *)rt_nil_check(l_VT_1413))).f_KIND == g_T_STR))
{
{ R18 rv1417 = r_MKET(r_FMT1(rt_str("rt_b_float_of_str(@)", 20), (l_V_1411).f_C), l_T_1414);
return rv1417; }
}
r_FAIL(l_LINE_1400, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_1399, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R18 rv1418 = r_BITS_OF(r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1400);
return rv1418; }
}
else if (r_TEQS(l_NAME_1399, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R18 l_V_1419; memset(&l_V_1419, 0, sizeof l_V_1419);
S_R18(&l_V_1419, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1419).f_T)))).f_KIND == g_T_INT))
{
{ R18 rv1420 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_1419).f_C), r_INT_TYPE(((*(R14 *)rt_nil_check((l_V_1419).f_T))).f_SCALE));
return rv1420; }
}
else if ((((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1419).f_T)))).f_KIND == g_T_FLOAT))
{
{ R18 rv1421 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_1419).f_C), (l_V_1419).f_T);
return rv1421; }
}
r_FAIL(l_LINE_1400, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_1399, rt_str("SUCC", 4)) || r_TEQS(l_NAME_1399, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R18 l_V_1422; memset(&l_V_1422, 0, sizeof l_V_1422);
S_R18(&l_V_1422, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
R14 * l_T_1423; memset(&l_T_1423, 0, sizeof l_T_1423);
l_T_1423 = r_REAL_TYPE((l_V_1422).f_T);
if ((!(((*(R14 *)rt_nil_check(l_T_1423))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_1400, rt_str("an enumerated value expected by ", 32), l_NAME_1399);
}
if (((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_1423))).f_BASE))).f_UNORDERED)
{
r_FAILT(l_LINE_1400, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_1399);
}
if (r_TEQS(l_NAME_1399, rt_str("SUCC", 4)))
{
{ R18 rv1424 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_1422).f_C, r_NUM(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_1423))).f_BASE))).f_NLITS)), ((*(R14 *)rt_nil_check(l_T_1423))).f_BASE);
return rv1424; }
}
{ R18 rv1425 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_1422).f_C), ((*(R14 *)rt_nil_check(l_T_1423))).f_BASE);
return rv1425; }
}
}
else if (r_TEQS(l_NAME_1399, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R18 l_V_1426; memset(&l_V_1426, 0, sizeof l_V_1426);
S_R18(&l_V_1426, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_1427; memset(&l_K_1427, 0, sizeof l_K_1427);
l_K_1427 = ((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1426).f_T)))).f_KIND;
R14 * l_T_1428; memset(&l_T_1428, 0, sizeof l_T_1428);
l_T_1428 = r_NEW_TYP(l_K_1427);
if (((!(l_K_1427 == g_T_STR)) && (!(l_K_1427 == g_T_BITS))))
{
r_FAIL(l_LINE_1400, rt_str("DUP of something not a string", 29));
}
((*(R14 *)rt_nil_check(l_T_1428))).f_BASE = ((*(R14 *)rt_nil_check((l_V_1426).f_T))).f_BASE;
{ R18 rv1429 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_1426).f_C, r_INT_EXPR(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_1428);
return rv1429; }
}
}
else if (r_TEQS(l_NAME_1399, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R18 rv1430 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1430; }
}
else if (r_TEQS(l_NAME_1399, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R18 rv1431 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1431; }
}
else if (((r_TEQS(l_NAME_1399, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_1399, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_1399, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R7 l_BITS_1432; memset(&l_BITS_1432, 0, sizeof l_BITS_1432);
S_R7(&l_BITS_1432, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_1399, rt_str("OCT_OF", 6)))
{
S_R7(&l_BITS_1432, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_1399, rt_str("HEX_OF", 6)))
{
S_R7(&l_BITS_1432, r_MK(rt_str("4", 1)), 0);
}
{ R18 rv1433 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL)).f_C, l_BITS_1432), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1433; }
}
}
else if ((r_TEQS(l_NAME_1399, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_1399, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R12 l_S_1434; memset(&l_S_1434, 0, sizeof l_S_1434);
S_R12(&l_S_1434, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
if ((!(l_S_1434).f_OK))
{
r_FAIL(l_LINE_1400, rt_str("the scale must be manifest", 26));
}
if (r_TEQS(l_NAME_1399, rt_str("FIXED_MIN", 9)))
{
{ R18 rv1435 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE((l_S_1434).f_V));
return rv1435; }
}
{ R18 rv1436 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE((l_S_1434).f_V));
return rv1436; }
}
}
else if (((r_TEQS(l_NAME_1399, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_1399, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_1399, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R14 * l_T_1437; memset(&l_T_1437, 0, sizeof l_T_1437);
l_T_1437 = r_NEW_TYP(g_T_FLOAT);
R12 l_P_1438; memset(&l_P_1438, 0, sizeof l_P_1438);
S_R12(&l_P_1438, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
if ((!(l_P_1438).f_OK))
{
r_FAIL(l_LINE_1400, rt_str("the precision must be manifest", 30));
}
((*(R14 *)rt_nil_check(l_T_1437))).f_SCALE = (l_P_1438).f_V;
if (r_TEQS(l_NAME_1399, rt_str("FLOAT_MIN", 9)))
{
{ R18 rv1439 = r_MKET(r_MK(rt_str("(-DBL_MAX)", 10)), l_T_1437);
return rv1439; }
}
else if (r_TEQS(l_NAME_1399, rt_str("FLOAT_MAX", 9)))
{
{ R18 rv1440 = r_MKET(r_MK(rt_str("DBL_MAX", 7)), l_T_1437);
return rv1440; }
}
{ R18 rv1441 = r_MKET(r_MK(rt_str("DBL_EPSILON", 11)), l_T_1437);
return rv1441; }
}
}
else if (r_TEQS(l_NAME_1399, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R18 rv1442 = r_INT_ET(((rt_int)15LL));
return rv1442; }
}
else if (r_TEQS(l_NAME_1399, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R18 rv1443 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1443; }
}
else if (r_TEQS(l_NAME_1399, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R18 rv1444 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1444; }
}
{ R18 rv1445 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv1445; }
rt_raise(RT_X_INIT);
}
static R18 r_IMAGE_OF(R18 p_V, rt_int p_LINE) { 
R14 * l_T_1446; memset(&l_T_1446, 0, sizeof l_T_1446);
l_T_1446 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1447; memset(&l_K_1447, 0, sizeof l_K_1447);
l_K_1447 = ((*(R14 *)rt_nil_check(l_T_1446))).f_KIND;
R14 * l_S_1448; memset(&l_S_1448, 0, sizeof l_S_1448);
l_S_1448 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_1447 == g_T_INT))
{
if ((((*(R14 *)rt_nil_check(l_T_1446))).f_SCALE == ((rt_int)0LL)))
{
{ R18 rv1449 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_1448);
return rv1449; }
}
{ R18 rv1450 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R14 *)rt_nil_check(l_T_1446))).f_SCALE)), l_S_1448);
return rv1450; }
}
else if ((l_K_1447 == g_T_FLOAT))
{
{ R18 rv1451 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R14 *)rt_nil_check(l_T_1446))).f_SCALE)), l_S_1448);
return rv1451; }
}
else if ((l_K_1447 == g_T_BOOL))
{
{ R18 rv1452 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_1448);
return rv1452; }
}
else if ((l_K_1447 == g_T_ENUM))
{
if ((((*(R14 *)rt_nil_check(l_T_1446))).f_BASE == ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R18 rv1453 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_1448);
return rv1453; }
}
{ R18 rv1454 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_1446))).f_BASE))).f_CNAME, (p_V).f_C), l_S_1448);
return rv1454; }
}
else if (((l_K_1447 == g_T_STR) || (l_K_1447 == g_T_BITS)))
{
{ R18 rv1455 = r_MKET((p_V).f_C, l_S_1448);
return rv1455; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_1446));
rt_raise(RT_X_INIT);
}
static R18 r_TO_FIXED_CALL(R11 * p_E) { 
R18 l_V_1456; memset(&l_V_1456, 0, sizeof l_V_1456);
S_R18(&l_V_1456, r_EXPR(r_ARG_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A), NULL), 0);
R14 * l_T_1457; memset(&l_T_1457, 0, sizeof l_T_1457);
l_T_1457 = r_REAL_TYPE((l_V_1456).f_T);
rt_int l_N_1458; memset(&l_N_1458, 0, sizeof l_N_1458);
l_N_1458 = r_LIST_LENGTH(((*(R11 *)rt_nil_check(p_E))).f_A);
R7 l_RND_1459; memset(&l_RND_1459, 0, sizeof l_RND_1459);
S_R7(&l_RND_1459, r_ROUNDING_ARG(p_E, l_N_1458), 0);
rt_int l_S_1460; memset(&l_S_1460, 0, sizeof l_S_1460);
l_S_1460 = ((rt_int)0LL);
if (((l_N_1458 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R11 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
{
R12 l_SM_1461; memset(&l_SM_1461, 0, sizeof l_SM_1461);
S_R12(&l_SM_1461, r_MANIFEST(r_ARG_EXPR(r_NTH(((*(R11 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)))), 0);
if ((!(l_SM_1461).f_OK))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of TO_FIXED must be manifest (3.2.1)", 46));
}
l_S_1460 = (l_SM_1461).f_V;
}
}
if ((l_N_1458 >= ((rt_int)3LL)))
{
{
R11 * l_R_1462; memset(&l_R_1462, 0, sizeof l_R_1462);
l_R_1462 = r_ARG_EXPR(r_NTH(((*(R11 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)));
if (((!r_IS_ROUNDING(l_R_1462)) && (!r_TEQS(((*(R11 *)rt_nil_check(l_R_1462))).f_NAME, rt_str("STD", 3)))))
{
if ((!((r_MANIFEST(l_R_1462)).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 and STD precision are predefined (3.2.6.1)", 55));
}
}
}
}
if ((((*(R14 *)rt_nil_check(l_T_1457))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_1463; memset(&l_SAVED_1463, 0, sizeof l_SAVED_1463);
l_SAVED_1463 = ((*(R22 *)rt_nil_check(g_W))).f_ROUNDED;
R7 l_C_1464; memset(&l_C_1464, 0, sizeof l_C_1464);
((*(R22 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_1459, rt_str("1", 1));
S_R7(&l_C_1464, r_RESCALE_C((l_V_1456).f_C, ((*(R14 *)rt_nil_check(l_T_1457))).f_SCALE, l_S_1460), 0);
((*(R22 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1463;
{ R18 rv1465 = r_MKET(l_C_1464, r_INT_TYPE(l_S_1460));
return rv1465; }
}
}
else if ((((*(R14 *)rt_nil_check(l_T_1457))).f_KIND == g_T_FLOAT))
{
{ R18 rv1466 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_1456).f_C, r_NUM(l_S_1460), l_RND_1459), r_INT_TYPE(l_S_1460));
return rv1466; }
}
else if (((((*(R14 *)rt_nil_check(l_T_1457))).f_KIND == g_T_ENUM) || (((*(R14 *)rt_nil_check(l_T_1457))).f_KIND == g_T_BOOL)))
{
if ((((*(R14 *)rt_nil_check(l_T_1457))).f_KIND == g_T_ENUM))
{
if (((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_1457))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R14 *)rt_nil_check(l_T_1457))).f_REPS == NULL)))
{
if ((!(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_1457))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R18 rv1467 = r_MKET(r_RESCALE_C((l_V_1456).f_C, ((rt_int)0LL), l_S_1460), r_INT_TYPE(l_S_1460));
return rv1467; }
}
else if ((((*(R14 *)rt_nil_check(l_T_1457))).f_KIND == g_T_BITS))
{
{ R18 rv1468 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1456).f_C), ((rt_int)0LL), l_S_1460), r_INT_TYPE(l_S_1460));
return rv1468; }
}
else if ((((*(R14 *)rt_nil_check(l_T_1457))).f_KIND == g_T_STR))
{
{ R18 rv1469 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_1456).f_C, r_NUM(l_S_1460), l_RND_1459), r_INT_TYPE(l_S_1460));
return rv1469; }
}
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_1456).f_T));
rt_raise(RT_X_INIT);
}
static R18 r_BITS_OF(R18 p_V, rt_int p_LINE) { 
R14 * l_T_1470; memset(&l_T_1470, 0, sizeof l_T_1470);
l_T_1470 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1471; memset(&l_K_1471, 0, sizeof l_K_1471);
l_K_1471 = ((*(R14 *)rt_nil_check(l_T_1470))).f_KIND;
if ((l_K_1471 == g_T_BITS))
{
{ R18 rv1472 = p_V;
return rv1472; }
}
else if ((l_K_1471 == g_T_ENUM))
{
if ((!(((*(R14 *)rt_nil_check(l_T_1470))).f_REPS == NULL)))
{
if ((!(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_1470))).f_REPS))).f_B == NULL)))
{
{ R18 rv1473 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_1470)), r_BITS_TYPE(r_ENUM_SIZE(l_T_1470)));
return rv1473; }
}
}
{ R18 rv1474 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_1470))), r_BITS_TYPE(r_ENUM_SIZE(l_T_1470)));
return rv1474; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_1471 == g_T_INT))
{
{ R18 rv1475 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 64)", 23), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1475; }
}
else if ((l_K_1471 == g_T_BOOL))
{
{ R18 rv1476 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv1476; }
}
else if ((l_K_1471 == g_T_FLOAT))
{
{ R18 rv1477 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1477; }
}
else if ((l_K_1471 == g_T_STR))
{
{ R18 rv1478 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1478; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_1470));
rt_raise(RT_X_INIT);
}
static void r_TYPE_ARG(R19 * p_A) { 
if ((!((*(R19 *)rt_nil_check(p_A))).f_HAVE))
{
S_R18(&((*(R19 *)rt_nil_check(p_A))).f_V, r_EXPR(((*(R19 *)rt_nil_check(p_A))).f_E, NULL), 0);
((*(R19 *)rt_nil_check(p_A))).f_HAVE = 1;
}
}
static rt_int r_WANT_SENSITIVE(R19 * p_A) { 
if (((*(R19 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv1479 = 0;
return rv1479; }
}
{ rt_int rv1480 = ((r_IS_LITERALISH(((*(R19 *)rt_nil_check(p_A))).f_E) || (((*(R11 *)rt_nil_check(((*(R19 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R11 *)rt_nil_check(((*(R19 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv1480; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R19 * p_A) { 
rt_int l_N_1481; memset(&l_N_1481, 0, sizeof l_N_1481);
l_N_1481 = ((rt_int)0LL);
R19 * l_P_1482; memset(&l_P_1482, 0, sizeof l_P_1482);
l_P_1482 = p_A;
for (;;) {
if ((l_P_1482 == NULL)) goto L_end1483;
{
l_N_1481 = rt_add(l_N_1481, ((rt_int)1LL));
l_P_1482 = ((*(R19 *)rt_nil_check(l_P_1482))).f_NEXT;
}
} L_end1483: ;
{ rt_int rv1484 = l_N_1481;
return rv1484; }
rt_raise(RT_X_INIT);
}
static R19 * r_CALL_ARGS(R11 * p_E) { 
R19 * l_HEAD_1485; memset(&l_HEAD_1485, 0, sizeof l_HEAD_1485);
l_HEAD_1485 = NULL;
R19 * l_TAIL_1486; memset(&l_TAIL_1486, 0, sizeof l_TAIL_1486);
l_TAIL_1486 = NULL;
rt_int l_G_1487; memset(&l_G_1487, 0, sizeof l_G_1487);
l_G_1487 = ((rt_int)0LL);
{ rt_int it1489_lo = ((rt_int)0LL), it1489_hi = ((rt_int)2LL);
for (rt_int it1489 = it1489_lo; it1489 <= it1489_hi; it1489++) {
{
{
R11 * l_P_1490; memset(&l_P_1490, 0, sizeof l_P_1490);
l_P_1490 = ((*(R11 *)rt_nil_check(p_E))).f_A;
if ((it1489 == ((rt_int)1LL)))
{
l_P_1490 = ((*(R11 *)rt_nil_check(p_E))).f_B;
}
else if ((it1489 == ((rt_int)2LL)))
{
l_P_1490 = ((*(R11 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_1490 == NULL)) goto L_end1491;
{
{
R19 * l_A_1492; memset(&l_A_1492, 0, sizeof l_A_1492);
l_A_1492 = r_NODE_ARG(l_P_1490, it1489, NULL);
if ((l_TAIL_1486 == NULL))
{
l_HEAD_1485 = l_A_1492;
}
else
{
((*(R19 *)rt_nil_check(l_TAIL_1486))).f_NEXT = l_A_1492;
}
l_TAIL_1486 = l_A_1492;
}
l_P_1490 = ((*(R11 *)rt_nil_check(l_P_1490))).f_NEXT;
}
} L_end1491: ;
}
}
} } L_end1488: ;
{ R19 * rv1493 = l_HEAD_1485;
return rv1493; }
rt_raise(RT_X_INIT);
}
static R18 r_CALL_EXPR(R11 * p_E, R14 * p_WANT) { 
R19 * l_ARGS_1494; memset(&l_ARGS_1494, 0, sizeof l_ARGS_1494);
l_ARGS_1494 = r_CALL_ARGS(p_E);
R13 * l_Y_1495; memset(&l_Y_1495, 0, sizeof l_Y_1495);
l_Y_1495 = r_BOUND_ROUTINE(((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1495 == NULL)))
{
if ((((*(R13 *)rt_nil_check(l_Y_1495))).f_KIND == g_Y_BUILTIN))
{
{ R18 rv1496 = r_BUILTIN(p_E, p_WANT);
return rv1496; }
}
{ R18 rv1497 = r_CALL_SYM(l_Y_1495, l_ARGS_1494, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
return rv1497; }
}
l_Y_1495 = r_FIND_ROUTINE(((*(R11 *)rt_nil_check(p_E))).f_NAME, l_ARGS_1494, ((*(R11 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_1495 == NULL))
{
{
R13 * l_P_1498; memset(&l_P_1498, 0, sizeof l_P_1498);
l_P_1498 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_1498 == NULL)) goto L_end1499;
{
if ((((*(R13 *)rt_nil_check(l_P_1498))).f_KIND == g_Y_BUILTIN))
{
{ R18 rv1500 = r_BUILTIN(p_E, p_WANT);
return rv1500; }
}
l_P_1498 = r_LOOKUP_NEXT(l_P_1498);
}
} L_end1499: ;
}
{
R13 * l_B_1501; memset(&l_B_1501, 0, sizeof l_B_1501);
l_B_1501 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_1501 == NULL)))
{
if ((((*(R13 *)rt_nil_check(l_B_1501))).f_KIND == g_Y_BUILTIN))
{
{ R18 rv1502 = r_BUILTIN(p_E, p_WANT);
return rv1502; }
}
if (((((*(R13 *)rt_nil_check(l_B_1501))).f_KIND == g_Y_ROUTINE) || (!(((*(R13 *)rt_nil_check(l_B_1501))).f_ORIG == NULL))))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
}
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
{ R18 rv1503 = r_CALL_SYM(l_Y_1495, l_ARGS_1494, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
return rv1503; }
rt_raise(RT_X_INIT);
}
static R13 * r_BOUND_ROUTINE(R7 p_NAME) { 
R16 * l_B_1504; memset(&l_B_1504, 0, sizeof l_B_1504);
l_B_1504 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_1504 == NULL)) goto L_end1505;
{
if (((!(((*(R16 *)rt_nil_check(l_B_1504))).f_R == NULL)) && r_TEQ(((*(R16 *)rt_nil_check(l_B_1504))).f_NAME, p_NAME)))
{
{ R13 * rv1506 = ((*(R16 *)rt_nil_check(l_B_1504))).f_R;
return rv1506; }
}
l_B_1504 = ((*(R16 *)rt_nil_check(l_B_1504))).f_NEXT;
}
} L_end1505: ;
{ R13 * rv1507 = NULL;
return rv1507; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R13 * p_Y, R7 p_NAME) { 
if ((!(((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv1508 = 0;
return rv1508; }
}
if ((((!(((*(R13 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R13 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R13 *)rt_nil_check(p_Y))).f_NAME, ((*(R13 *)rt_nil_check(((*(R13 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R13 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R13 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv1509 = 0;
return rv1509; }
}
}
}
{ rt_int rv1510 = 1;
return rv1510; }
rt_raise(RT_X_INIT);
}
static R13 * r_FIND_ROUTINE(R7 p_NAME, R19 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { 
R13 * l_Y_1511; memset(&l_Y_1511, 0, sizeof l_Y_1511);
l_Y_1511 = r_LOOKUP(p_NAME);
R13 * l_BEST_1512; memset(&l_BEST_1512, 0, sizeof l_BEST_1512);
l_BEST_1512 = NULL;
rt_int l_BEST_SCORE_1513; memset(&l_BEST_SCORE_1513, 0, sizeof l_BEST_SCORE_1513);
l_BEST_SCORE_1513 = ((rt_int)0LL);
rt_int l_TIES_1514; memset(&l_TIES_1514, 0, sizeof l_TIES_1514);
l_TIES_1514 = ((rt_int)0LL);
rt_int l_COUNT_1515; memset(&l_COUNT_1515, 0, sizeof l_COUNT_1515);
l_COUNT_1515 = ((rt_int)0LL);
rt_int l_N_1516; memset(&l_N_1516, 0, sizeof l_N_1516);
l_N_1516 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_1511 == NULL)) goto L_end1517;
{
if ((!r_IS_ROUTINE(l_Y_1511)))
{
if ((!(((*(R13 *)rt_nil_check(l_Y_1511))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end1517;
}
}
else if (r_CANDIDATE(l_Y_1511, p_NAME))
{
{
R13 * l_R_1518; memset(&l_R_1518, 0, sizeof l_R_1518);
l_R_1518 = r_ORIGINAL(l_Y_1511);
rt_int l_SCORE_1519; memset(&l_SCORE_1519, 0, sizeof l_SCORE_1519);
r_ROUTINE_HEADER(l_R_1518);
if (((r_PARAM_COUNT(l_R_1518) == l_N_1516) && (!r_SEEN_ROUTINE(l_R_1518, p_NAME, l_Y_1511))))
{
l_COUNT_1515 = rt_add(l_COUNT_1515, ((rt_int)1LL));
l_SCORE_1519 = r_MATCH_SCORE(l_R_1518, p_ARGS);
if ((l_SCORE_1519 > l_BEST_SCORE_1513))
{
l_BEST_1512 = l_R_1518;
l_BEST_SCORE_1513 = l_SCORE_1519;
l_TIES_1514 = ((rt_int)0LL);
}
else if (((l_SCORE_1519 == l_BEST_SCORE_1513) && (l_SCORE_1519 > ((rt_int)0LL))))
{
l_TIES_1514 = rt_add(l_TIES_1514, ((rt_int)1LL));
}
}
}
}
l_Y_1511 = r_LOOKUP_NEXT(l_Y_1511);
}
} L_end1517: ;
if (((l_TIES_1514 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R13 * rv1520 = l_BEST_1512;
return rv1520; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R13 * p_R, R7 p_NAME, R13 * p_STOP) { 
R13 * l_Y_1521; memset(&l_Y_1521, 0, sizeof l_Y_1521);
l_Y_1521 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_1521 == p_STOP) || (l_Y_1521 == NULL))) goto L_end1522;
{
if ((((*(R13 *)rt_nil_check(l_Y_1521))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_1521) == p_R))
{
{ rt_int rv1523 = 1;
return rv1523; }
}
}
l_Y_1521 = r_LOOKUP_NEXT(l_Y_1521);
}
} L_end1522: ;
{ rt_int rv1524 = 0;
return rv1524; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R13 * p_R) { 
rt_int l_N_1525; memset(&l_N_1525, 0, sizeof l_N_1525);
l_N_1525 = ((rt_int)0LL);
R20 * l_P_1526; memset(&l_P_1526, 0, sizeof l_P_1526);
l_P_1526 = ((*(R13 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_1526 == NULL)) goto L_end1527;
{
l_N_1525 = rt_add(l_N_1525, ((rt_int)1LL));
l_P_1526 = ((*(R20 *)rt_nil_check(l_P_1526))).f_NEXT;
}
} L_end1527: ;
{ rt_int rv1528 = l_N_1525;
return rv1528; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R13 * p_R, R19 * p_ARGS) { 
R20 * l_P_1529; memset(&l_P_1529, 0, sizeof l_P_1529);
l_P_1529 = ((*(R13 *)rt_nil_check(p_R))).f_PARAMS;
R19 * l_A_1530; memset(&l_A_1530, 0, sizeof l_A_1530);
l_A_1530 = p_ARGS;
rt_int l_EXACT_1531; memset(&l_EXACT_1531, 0, sizeof l_EXACT_1531);
l_EXACT_1531 = 1;
R16 * l_BS_1532; memset(&l_BS_1532, 0, sizeof l_BS_1532);
l_BS_1532 = r_NEW_BINDS();
for (;;) {
if ((l_P_1529 == NULL)) goto L_end1533;
{
if ((!(((*(R20 *)rt_nil_check(l_P_1529))).f_MODE == ((*(R19 *)rt_nil_check(l_A_1530))).f_MODE)))
{
{ rt_int rv1534 = ((rt_int)0LL);
return rv1534; }
}
if ((((*(R13 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R20 *)rt_nil_check(l_P_1529))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_1529, l_A_1530, l_BS_1532)))
{
{ rt_int rv1535 = ((rt_int)0LL);
return rv1535; }
}
}
else if ((((*(R20 *)rt_nil_check(l_P_1529))).f_T == NULL))
{
if (((*(R19 *)rt_nil_check(l_A_1530))).f_HAVE)
{
{ rt_int rv1536 = ((rt_int)0LL);
return rv1536; }
}
}
else if (r_WANT_SENSITIVE(l_A_1530))
{
if ((!r_LITERAL_FITS(((*(R19 *)rt_nil_check(l_A_1530))).f_E, ((*(R20 *)rt_nil_check(l_P_1529))).f_T)))
{
{ rt_int rv1537 = ((rt_int)0LL);
return rv1537; }
}
}
else
{
r_TYPE_ARG(l_A_1530);
{
R14 * l_AT_1538; memset(&l_AT_1538, 0, sizeof l_AT_1538);
l_AT_1538 = (((*(R19 *)rt_nil_check(l_A_1530))).f_V).f_T;
if ((!((r_SAME_CLASS(((*(R20 *)rt_nil_check(l_P_1529))).f_T, l_AT_1538) || (((((*(R14 *)rt_nil_check(l_AT_1538))).f_KIND == g_T_NIL) && (((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R20 *)rt_nil_check(l_P_1529))).f_T)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv1539 = ((rt_int)0LL);
return rv1539; }
}
if ((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_1529))).f_T, l_AT_1538)))
{
l_EXACT_1531 = 0;
}
if (((((*(R14 *)rt_nil_check(r_REAL_TYPE(l_AT_1538)))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R20 *)rt_nil_check(l_P_1529))).f_T)))).f_KIND == g_T_INT)))
{
if ((((*(R14 *)rt_nil_check(l_AT_1538))).f_SCALE > ((*(R14 *)rt_nil_check(((*(R20 *)rt_nil_check(l_P_1529))).f_T))).f_SCALE))
{
{ rt_int rv1540 = ((rt_int)0LL);
return rv1540; }
}
}
}
}
l_P_1529 = ((*(R20 *)rt_nil_check(l_P_1529))).f_NEXT;
l_A_1530 = ((*(R19 *)rt_nil_check(l_A_1530))).f_NEXT;
}
} L_end1533: ;
if (l_EXACT_1531)
{
{ rt_int rv1541 = ((rt_int)2LL);
return rv1541; }
}
{ rt_int rv1542 = ((rt_int)1LL);
return rv1542; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R11 * p_E, R14 * p_T) { 
R14 * l_RT_1543; memset(&l_RT_1543, 0, sizeof l_RT_1543);
l_RT_1543 = r_REAL_TYPE(p_T);
if (((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R14 *)rt_nil_check(l_RT_1543))).f_KIND == g_T_ENUM))
{
{ rt_int rv1544 = (!(r_FIND_LITERAL(((*(R11 *)rt_nil_check(p_E))).f_NAME, l_RT_1543) == NULL));
return rv1544; }
}
{ rt_int rv1545 = 0;
return rv1545; }
}
else if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv1546 = (((*(R14 *)rt_nil_check(l_RT_1543))).f_KIND == g_T_PTR);
return rv1546; }
}
else if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv1547 = (((*(R14 *)rt_nil_check(l_RT_1543))).f_KIND == g_T_REC);
return rv1547; }
}
else if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv1548 = (((*(R14 *)rt_nil_check(l_RT_1543))).f_KIND == g_T_ARR);
return rv1548; }
}
else if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv1549 = (((*(R14 *)rt_nil_check(l_RT_1543))).f_KIND == g_T_INT);
return rv1549; }
}
else if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv1550 = ((((*(R14 *)rt_nil_check(l_RT_1543))).f_KIND == g_T_PTR) || (((*(R14 *)rt_nil_check(l_RT_1543))).f_KIND == g_T_SEM));
return rv1550; }
}
{ rt_int rv1551 = 0;
return rv1551; }
rt_raise(RT_X_INIT);
}
static R18 r_CALL_SYM(R13 * p_Y0, R19 * p_ARGS, rt_int p_LINE) { 
R13 * l_Y_1552; memset(&l_Y_1552, 0, sizeof l_Y_1552);
l_Y_1552 = r_ORIGINAL(p_Y0);
R20 * l_P_1553; memset(&l_P_1553, 0, sizeof l_P_1553);
R19 * l_A_1554; memset(&l_A_1554, 0, sizeof l_A_1554);
l_A_1554 = p_ARGS;
R7 l_C_1555; memset(&l_C_1555, 0, sizeof l_C_1555);
S_R7(&l_C_1555, r_MK(rt_str("", 0)), 0);
R7 l_SEP_1556; memset(&l_SEP_1556, 0, sizeof l_SEP_1556);
S_R7(&l_SEP_1556, r_MK(rt_str("", 0)), 0);
if (((*(R13 *)rt_nil_check(l_Y_1552))).f_GENERIC)
{
l_Y_1552 = r_INSTANCE(l_Y_1552, p_ARGS, p_LINE);
}
r_CHECK_CALL_IMPORTS(l_Y_1552, p_LINE);
if ((((*(R13 *)rt_nil_check(l_Y_1552))).f_LEVEL >= ((rt_int)1LL)))
{
S_R7(&l_C_1555, r_FRAME_OF(((*(R13 *)rt_nil_check(l_Y_1552))).f_LEVEL), 0);
S_R7(&l_SEP_1556, r_MK(rt_str(", ", 2)), 0);
}
l_P_1553 = ((*(R13 *)rt_nil_check(l_Y_1552))).f_PARAMS;
for (;;) {
if ((l_P_1553 == NULL)) goto L_end1557;
{
if ((l_A_1554 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
if ((((*(R20 *)rt_nil_check(l_P_1553))).f_T == NULL))
{
}
else if ((((*(R20 *)rt_nil_check(l_P_1553))).f_MODE == g_M_IN))
{
if ((((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R20 *)rt_nil_check(l_P_1553))).f_T)))).f_KIND == g_T_VOID))
{
}
else
{
{
R18 l_V_1558; memset(&l_V_1558, 0, sizeof l_V_1558);
if ((((*(R19 *)rt_nil_check(l_A_1554))).f_HAVE && (!r_WANT_SENSITIVE(l_A_1554))))
{
S_R18(&l_V_1558, ((*(R19 *)rt_nil_check(l_A_1554))).f_V, 0);
}
else
{
S_R18(&l_V_1558, r_EXPR(((*(R19 *)rt_nil_check(l_A_1554))).f_E, ((*(R20 *)rt_nil_check(l_P_1553))).f_T), 0);
}
S_R7(&l_C_1555, r_FMT3(rt_str("@@@", 3), l_C_1555, l_SEP_1556, r_CONVERT(l_V_1558, ((*(R20 *)rt_nil_check(l_P_1553))).f_T, p_LINE, r_NO_TEXT())), 0);
S_R7(&l_SEP_1556, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R18 l_V_1559; memset(&l_V_1559, 0, sizeof l_V_1559);
if (((*(R19 *)rt_nil_check(l_A_1554))).f_HAVE)
{
S_R18(&l_V_1559, ((*(R19 *)rt_nil_check(l_A_1554))).f_V, 0);
}
else
{
S_R18(&l_V_1559, r_EXPR(((*(R19 *)rt_nil_check(l_A_1554))).f_E, ((*(R20 *)rt_nil_check(l_P_1553))).f_T), 0);
}
if ((!(l_V_1559).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(((*(R20 *)rt_nil_check(l_P_1553))).f_T, (l_V_1559).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(((*(R20 *)rt_nil_check(l_P_1553))).f_T));
}
if (((((*(R20 *)rt_nil_check(l_P_1553))).f_MODE == g_M_INOUT) && (!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_1553))).f_T, (l_V_1559).f_T))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
S_R7(&l_C_1555, r_FMT3(rt_str("@@&@", 4), l_C_1555, l_SEP_1556, (l_V_1559).f_C), 0);
S_R7(&l_SEP_1556, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_1554 = ((*(R19 *)rt_nil_check(l_A_1554))).f_NEXT;
l_P_1553 = ((*(R20 *)rt_nil_check(l_P_1553))).f_NEXT;
}
} L_end1557: ;
if ((!(l_A_1554 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
{ R18 rv1560 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R13 *)rt_nil_check(l_Y_1552))).f_ACCESS, l_C_1555), ((*(R13 *)rt_nil_check(l_Y_1552))).f_RESULT);
return rv1560; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R11 * p_TS) { 
if ((p_TS == NULL))
{
{ rt_int rv1561 = 0;
return rv1561; }
}
if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv1562 = 1;
return rv1562; }
}
else if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv1563 = 1;
return rv1563; }
}
else if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv1564 = r_STATIC_GENERIC(((*(R11 *)rt_nil_check(p_TS))).f_C);
return rv1564; }
}
else if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv1565 = r_HAS_GEN_ARG(((*(R11 *)rt_nil_check(p_TS))).f_A);
return rv1565; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv1566 = r_STATIC_GENERIC(((*(R11 *)rt_nil_check(p_TS))).f_A);
return rv1566; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv1567 = ((((*(R11 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R11 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv1567; }
}
else if (((r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv1568 = 0;
return rv1568; }
}
{
R13 * l_Y_1569; memset(&l_Y_1569, 0, sizeof l_Y_1569);
l_Y_1569 = r_ORIG_LOOKUP(((*(R11 *)rt_nil_check(p_TS))).f_NAME);
R11 * l_A_1570; memset(&l_A_1570, 0, sizeof l_A_1570);
l_A_1570 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
R11 * l_F_1571; memset(&l_F_1571, 0, sizeof l_F_1571);
if ((l_Y_1569 == NULL))
{
{ rt_int rv1572 = 0;
return rv1572; }
}
if ((((*(R13 *)rt_nil_check(l_Y_1569))).f_KIND == g_Y_GEN))
{
{ rt_int rv1573 = 1;
return rv1573; }
}
if ((((*(R13 *)rt_nil_check(l_Y_1569))).f_DECL == NULL))
{
{ rt_int rv1574 = 0;
return rv1574; }
}
l_F_1571 = ((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_1569))).f_DECL))).f_A;
for (;;) {
if ((l_F_1571 == NULL)) goto L_end1575;
{
{
R11 * l_N_1576; memset(&l_N_1576, 0, sizeof l_N_1576);
l_N_1576 = ((*(R11 *)rt_nil_check(l_F_1571))).f_A;
for (;;) {
if ((l_N_1576 == NULL)) goto L_end1577;
{
if ((l_A_1570 == NULL))
{
{ rt_int rv1578 = 0;
return rv1578; }
}
if (((((*(R11 *)rt_nil_check(l_F_1571))).f_B == NULL) && ((((((*(R11 *)rt_nil_check(l_A_1570))).f_KIND == g_TS_GEN) || (((*(R11 *)rt_nil_check(l_A_1570))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_1570)))))
{
{ rt_int rv1579 = 1;
return rv1579; }
}
l_A_1570 = ((*(R11 *)rt_nil_check(l_A_1570))).f_NEXT;
l_N_1576 = ((*(R11 *)rt_nil_check(l_N_1576))).f_NEXT;
}
} L_end1577: ;
}
l_F_1571 = ((*(R11 *)rt_nil_check(l_F_1571))).f_NEXT;
}
} L_end1575: ;
}
}
{ rt_int rv1580 = 0;
return rv1580; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_GEN_ARG(R11 * p_A) { 
R11 * l_P_1581; memset(&l_P_1581, 0, sizeof l_P_1581);
l_P_1581 = p_A;
for (;;) {
if ((l_P_1581 == NULL)) goto L_end1582;
{
if (((((*(R11 *)rt_nil_check(l_P_1581))).f_KIND == g_TS_GEN) || (((*(R11 *)rt_nil_check(l_P_1581))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv1583 = 1;
return rv1583; }
}
l_P_1581 = ((*(R11 *)rt_nil_check(l_P_1581))).f_NEXT;
}
} L_end1582: ;
{ rt_int rv1584 = 0;
return rv1584; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R13 * p_Y) { 
R11 * l_R_1585; memset(&l_R_1585, 0, sizeof l_R_1585);
l_R_1585 = ((*(R13 *)rt_nil_check(p_Y))).f_DECL;
R11 * l_P_1586; memset(&l_P_1586, 0, sizeof l_P_1586);
R20 * l_TAIL_1587; memset(&l_TAIL_1587, 0, sizeof l_TAIL_1587);
l_TAIL_1587 = NULL;
if (((*(R13 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
((*(R13 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_1586 = ((*(R11 *)rt_nil_check(l_R_1585))).f_A;
for (;;) {
if ((l_P_1586 == NULL)) goto L_end1588;
{
if (((((*(R11 *)rt_nil_check(l_P_1586))).f_B == NULL) || r_STATIC_GENERIC(((*(R11 *)rt_nil_check(l_P_1586))).f_B)))
{
((*(R13 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_1586 = ((*(R11 *)rt_nil_check(l_P_1586))).f_NEXT;
}
} L_end1588: ;
if ((!(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_1585))).f_D))).f_B == NULL)))
{
((*(R13 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_1586 = ((*(R11 *)rt_nil_check(l_R_1585))).f_A;
for (;;) {
if ((l_P_1586 == NULL)) goto L_end1589;
{
{
R20 * l_PM_1590; memset(&l_PM_1590, 0, sizeof l_PM_1590);
l_PM_1590 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_PM_1590)), ({ R20 rc1591; memset(&rc1591, 0, sizeof rc1591);  S_R7(&rc1591.f_NAME, ((*(R11 *)rt_nil_check(l_P_1586))).f_NAME, 0); rc1591.f_MODE = ((*(R11 *)rt_nil_check(l_P_1586))).f_IV; rc1591.f_T = NULL; rc1591.f_TS = ((*(R11 *)rt_nil_check(l_P_1586))).f_B; rc1591.f_NEXT = NULL; rc1591; }), 0);
if (((((*(R11 *)rt_nil_check(l_R_1585))).f_IV == ((rt_int)1LL)) && (!(((*(R11 *)rt_nil_check(l_P_1586))).f_IV == g_M_IN))))
{
r_FAIL(((*(R11 *)rt_nil_check(l_P_1586))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!((*(R13 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R20 *)rt_nil_check(l_PM_1590))).f_T = r_RESOLVE(((*(R11 *)rt_nil_check(l_P_1586))).f_B);
}
if ((l_TAIL_1587 == NULL))
{
((*(R13 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_1590;
}
else
{
((*(R20 *)rt_nil_check(l_TAIL_1587))).f_NEXT = l_PM_1590;
}
l_TAIL_1587 = l_PM_1590;
}
l_P_1586 = ((*(R11 *)rt_nil_check(l_P_1586))).f_NEXT;
}
} L_end1589: ;
if ((!((*(R13 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R13 *)rt_nil_check(p_Y))).f_RESULT = r_RESULT_TYPE(p_Y);
S_R7(&((*(R13 *)rt_nil_check(p_Y))).f_FWD, r_C_HEADER(p_Y), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R13 *)rt_nil_check(p_Y))).f_FWD, rt_str(";", 1)));
}
}
static R14 * r_RESULT_TYPE(R13 * p_Y) { 
R11 * l_R_1592; memset(&l_R_1592, 0, sizeof l_R_1592);
l_R_1592 = ((*(R13 *)rt_nil_check(p_Y))).f_DECL;
R14 * l_T_1593; memset(&l_T_1593, 0, sizeof l_T_1593);
if ((((*(R11 *)rt_nil_check(l_R_1592))).f_B == NULL))
{
{ R14 * rv1594 = ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID;
return rv1594; }
}
r_OPEN_SCOPE();
{
R20 * l_P_1595; memset(&l_P_1595, 0, sizeof l_P_1595);
l_P_1595 = ((*(R13 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_1595 == NULL)) goto L_end1596;
{
if ((!(((*(R20 *)rt_nil_check(l_P_1595))).f_T == NULL)))
{
{
R13 * l_V_1597; memset(&l_V_1597, 0, sizeof l_V_1597);
l_V_1597 = r_NEW_SYM(g_Y_CONST, ((*(R20 *)rt_nil_check(l_P_1595))).f_NAME);
((*(R13 *)rt_nil_check(l_V_1597))).f_T = ((*(R20 *)rt_nil_check(l_P_1595))).f_T;
S_R7(&((*(R13 *)rt_nil_check(l_V_1597))).f_ACCESS, r_FMT1(rt_str("p_@", 3), ((*(R20 *)rt_nil_check(l_P_1595))).f_NAME), 0);
((*(R13 *)rt_nil_check(l_V_1597))).f_INPUT = 1;
r_DEFINE(l_V_1597, ((*(R11 *)rt_nil_check(l_R_1592))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R20 *)rt_nil_check(l_P_1595))).f_T, ((*(R13 *)rt_nil_check(l_V_1597))).f_ACCESS, ((*(R11 *)rt_nil_check(l_R_1592))).f_LINE, 0);
}
}
l_P_1595 = ((*(R20 *)rt_nil_check(l_P_1595))).f_NEXT;
}
} L_end1596: ;
}
l_T_1593 = r_RESOLVE(((*(R11 *)rt_nil_check(l_R_1592))).f_B);
r_CLOSE_SCOPE();
{ R14 * rv1598 = l_T_1593;
return rv1598; }
rt_raise(RT_X_INIT);
}
static R7 r_C_HEADER(R13 * p_Y) { 
R7 l_PS_1599; memset(&l_PS_1599, 0, sizeof l_PS_1599);
S_R7(&l_PS_1599, r_MK(rt_str("", 0)), 0);
R7 l_SEP_1600; memset(&l_SEP_1600, 0, sizeof l_SEP_1600);
S_R7(&l_SEP_1600, r_MK(rt_str("", 0)), 0);
R20 * l_P_1601; memset(&l_P_1601, 0, sizeof l_P_1601);
l_P_1601 = ((*(R13 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R13 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R7(&l_PS_1599, r_FMT1(rt_str("@ *up_", 6), ((*(R13 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R7(&l_SEP_1600, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_1601 == NULL)) goto L_end1602;
{
if ((((*(R20 *)rt_nil_check(l_P_1601))).f_T == NULL))
{
}
else if ((((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R20 *)rt_nil_check(l_P_1601))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R20 *)rt_nil_check(l_P_1601))).f_MODE == g_M_IN))
{
S_R7(&l_PS_1599, r_FMT4(rt_str("@@@ p_@", 7), l_PS_1599, l_SEP_1600, r_CTYPE(((*(R20 *)rt_nil_check(l_P_1601))).f_T), ((*(R20 *)rt_nil_check(l_P_1601))).f_NAME), 0);
S_R7(&l_SEP_1600, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R7(&l_PS_1599, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_1599, l_SEP_1600, r_CTYPE(((*(R20 *)rt_nil_check(l_P_1601))).f_T), ((*(R20 *)rt_nil_check(l_P_1601))).f_NAME), 0);
S_R7(&l_SEP_1600, r_MK(rt_str(", ", 2)), 0);
}
l_P_1601 = ((*(R20 *)rt_nil_check(l_P_1601))).f_NEXT;
}
} L_end1602: ;
if (((l_PS_1599).f_LEN == ((rt_int)0LL)))
{
S_R7(&l_PS_1599, r_MK(rt_str("void", 4)), 0);
}
{ R7 rv1603 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R13 *)rt_nil_check(p_Y))).f_RESULT), ((*(R13 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_1599);
return rv1603; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_PARAM_GENS(R14 * p_T, R7 p_PC, rt_int p_LINE, rt_int p_CHECK) { 
if (r_IS_GEN_TEXT(((*(R14 *)rt_nil_check(p_T))).f_LO_C))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R14 *)rt_nil_check(p_T))).f_LO_C), r_MK(rt_str("INT64_MIN", 9)), p_LINE, 0);
}
if (r_IS_GEN_TEXT(((*(R14 *)rt_nil_check(p_T))).f_HI_C))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R14 *)rt_nil_check(p_T))).f_HI_C), r_MK(rt_str("INT64_MAX", 9)), p_LINE, 0);
}
if (((((*(R14 *)rt_nil_check(p_T))).f_GEN).f_LEN > ((rt_int)0LL)))
{
r_DEFINE_GEN(((*(R14 *)rt_nil_check(p_T))).f_GEN, r_FMT1(rt_str("(rt_int)(@).len", 15), p_PC), p_LINE, p_CHECK);
}
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{
R17 * l_B_1604; memset(&l_B_1604, 0, sizeof l_B_1604);
l_B_1604 = ((*(R14 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_1605; memset(&l_I_1605, 0, sizeof l_I_1605);
l_I_1605 = ((rt_int)0LL);
for (;;) {
if ((l_B_1604 == NULL)) goto L_end1606;
{
if (r_IS_GEN_TEXT(((*(R17 *)rt_nil_check(l_B_1604))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R17 *)rt_nil_check(l_B_1604))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_1605)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R17 *)rt_nil_check(l_B_1604))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R17 *)rt_nil_check(l_B_1604))).f_LO) || ((((*(R17 *)rt_nil_check(l_B_1604))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R17 *)rt_nil_check(l_B_1604))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_1605)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R17 *)rt_nil_check(l_B_1604))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_1605), p_PC, r_NUM(l_I_1605)), ((*(R17 *)rt_nil_check(l_B_1604))).f_LO), p_LINE, p_CHECK);
}
}
l_I_1605 = rt_add(l_I_1605, ((rt_int)1LL));
l_B_1604 = ((*(R17 *)rt_nil_check(l_B_1604))).f_NEXT;
}
} L_end1606: ;
}
}
if (((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R14 * l_U_1607; memset(&l_U_1607, 0, sizeof l_U_1607);
l_U_1607 = r_REAL_TYPE(p_T);
R15 * l_F_1608; memset(&l_F_1608, 0, sizeof l_F_1608);
l_F_1608 = ((*(R14 *)rt_nil_check(l_U_1607))).f_FIELDS;
R17 * l_A_1609; memset(&l_A_1609, 0, sizeof l_A_1609);
l_A_1609 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_1608 == NULL) || (l_A_1609 == NULL))) goto L_end1610;
{
if ((!(((*(R15 *)rt_nil_check(l_F_1608))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R17 *)rt_nil_check(l_A_1609))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R17 *)rt_nil_check(l_A_1609))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R15 *)rt_nil_check(l_F_1608))).f_CNAME), p_LINE, p_CHECK);
}
l_A_1609 = ((*(R17 *)rt_nil_check(l_A_1609))).f_NEXT;
}
l_F_1608 = ((*(R15 *)rt_nil_check(l_F_1608))).f_NEXT;
}
} L_end1610: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R7 p_T) { 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv1611 = 0;
return rv1611; }
}
{ rt_int rv1612 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv1612; }
rt_raise(RT_X_INIT);
}
static R7 r_GEN_TEXT_NAME(R7 p_T) { 
{ R7 rv1613 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv1613; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R7 p_NAME, R7 p_C, rt_int p_LINE, rt_int p_CHECK) { 
R13 * l_OLD_1614; memset(&l_OLD_1614, 0, sizeof l_OLD_1614);
l_OLD_1614 = r_LOOKUP(p_NAME);
if ((!(l_OLD_1614 == NULL)))
{
if (((((*(R13 *)rt_nil_check(l_OLD_1614))).f_KIND == g_Y_GEN) && (((*(R13 *)rt_nil_check(l_OLD_1614))).f_DEPTH == ((*(R22 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R13 *)rt_nil_check(l_OLD_1614))).f_ACCESS, p_C));
}
return;
}
}
{
R13 * l_G_1615; memset(&l_G_1615, 0, sizeof l_G_1615);
l_G_1615 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R13 *)rt_nil_check(l_G_1615))).f_T = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
S_R7(&((*(R13 *)rt_nil_check(l_G_1615))).f_ACCESS, p_C, 0);
((*(R13 *)rt_nil_check(l_G_1615))).f_INPUT = 1;
r_DEFINE(l_G_1615, p_LINE);
}
}
static R16 * r_NEW_BINDS(void) { 
R16 * l_B_1616; memset(&l_B_1616, 0, sizeof l_B_1616);
l_B_1616 = ((R16 *)rt_alloc(sizeof (R16)));
S_R16(&(*(R16 *)rt_nil_check(l_B_1616)), ({ R16 rc1617; memset(&rc1617, 0, sizeof rc1617);  S_R7(&rc1617.f_NAME, r_NO_TEXT(), 0); rc1617.f_T = NULL; S_R7(&rc1617.f_C, r_NO_TEXT(), 0); rc1617.f_HASMV = 0; rc1617.f_MV = ((rt_int)0LL); rc1617.f_R = NULL; rc1617.f_NEXT = NULL; rc1617; }), 0);
{ R16 * rv1618 = l_B_1616;
return rv1618; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R7 p_NAME, R14 * p_T, R12 p_M, R13 * p_R, R16 * p_HEAD) { 
R16 * l_B_1619; memset(&l_B_1619, 0, sizeof l_B_1619);
l_B_1619 = ((R16 *)rt_alloc(sizeof (R16)));
S_R16(&(*(R16 *)rt_nil_check(l_B_1619)), ({ R16 rc1620; memset(&rc1620, 0, sizeof rc1620);  S_R7(&rc1620.f_NAME, p_NAME, 0); rc1620.f_T = p_T; S_R7(&rc1620.f_C, r_NO_TEXT(), 0); rc1620.f_HASMV = (p_M).f_OK; rc1620.f_MV = (p_M).f_V; rc1620.f_R = p_R; rc1620.f_NEXT = ((*(R16 *)rt_nil_check(p_HEAD))).f_NEXT; rc1620; }), 0);
if ((p_M).f_OK)
{
S_R7(&((*(R16 *)rt_nil_check(l_B_1619))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R16 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_1619;
}
static R16 * r_FIND_BIND(R16 * p_BS, R7 p_NAME) { 
R16 * l_B_1621; memset(&l_B_1621, 0, sizeof l_B_1621);
l_B_1621 = p_BS;
for (;;) {
if ((l_B_1621 == NULL)) goto L_end1622;
{
if (r_TEQ(((*(R16 *)rt_nil_check(l_B_1621))).f_NAME, p_NAME))
{
{ R16 * rv1623 = l_B_1621;
return rv1623; }
}
l_B_1621 = ((*(R16 *)rt_nil_check(l_B_1621))).f_NEXT;
}
} L_end1622: ;
{ R16 * rv1624 = NULL;
return rv1624; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R11 * p_TS, R14 * p_T, R16 * p_BS) { 
R14 * l_RT_1625; memset(&l_RT_1625, 0, sizeof l_RT_1625);
l_RT_1625 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv1626 = 1;
return rv1626; }
}
if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv1627 = 1;
return rv1627; }
}
else if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R11 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1628 = 1;
return rv1628; }
}
{
R16 * l_B_1629; memset(&l_B_1629, 0, sizeof l_B_1629);
l_B_1629 = r_FIND_BIND(((*(R16 *)rt_nil_check(p_BS))).f_NEXT, ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_1629 == NULL)))
{
if ((((*(R16 *)rt_nil_check(l_B_1629))).f_T == NULL))
{
{ rt_int rv1630 = 0;
return rv1630; }
}
{ rt_int rv1631 = r_SAME_TYPE(((*(R16 *)rt_nil_check(l_B_1629))).f_T, p_T);
return rv1631; }
}
r_ADD_BIND(((*(R11 *)rt_nil_check(p_TS))).f_NAME, p_T, r_NO_MVAL(), NULL, p_BS);
{ rt_int rv1632 = 1;
return rv1632; }
}
}
else if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R14 *)rt_nil_check(l_RT_1625))).f_KIND == g_T_ARR)))
{
{ rt_int rv1633 = 0;
return rv1633; }
}
if ((!(r_LIST_LENGTH(((*(R11 *)rt_nil_check(p_TS))).f_A) == ((*(R14 *)rt_nil_check(l_RT_1625))).f_DIMS)))
{
{ rt_int rv1634 = 0;
return rv1634; }
}
{ rt_int rv1635 = r_UNIFY(((*(R11 *)rt_nil_check(p_TS))).f_C, ((*(R14 *)rt_nil_check(l_RT_1625))).f_ELEM, p_BS);
return rv1635; }
}
else if (((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv1636 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv1636; }
}
else if ((!(((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv1637 = 0;
return rv1637; }
}
if ((!(((*(R11 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R14 *)rt_nil_check(l_RT_1625))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R14 *)rt_nil_check(l_RT_1625))).f_MHI, p_BS))))
{
{ rt_int rv1638 = 0;
return rv1638; }
}
}
if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R14 *)rt_nil_check(l_RT_1625))).f_KIND == g_T_INT)))
{
{ rt_int rv1639 = 0;
return rv1639; }
}
{ rt_int rv1640 = (r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R14 *)rt_nil_check(l_RT_1625))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS));
return rv1640; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv1641 = ((((*(R14 *)rt_nil_check(l_RT_1625))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_RT_1625))).f_SCALE == ((rt_int)0LL)));
return rv1641; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R14 *)rt_nil_check(l_RT_1625))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv1642 = 0;
return rv1642; }
}
{ rt_int rv1643 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R14 *)rt_nil_check(l_RT_1625))).f_SCALE), p_BS);
return rv1643; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv1644 = (((*(R14 *)rt_nil_check(l_RT_1625))).f_KIND == g_T_BOOL);
return rv1644; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv1645 = (((*(R14 *)rt_nil_check(l_RT_1625))).f_KIND == g_T_STR);
return rv1645; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R14 *)rt_nil_check(l_RT_1625))).f_KIND == g_T_STR)))
{
{ rt_int rv1646 = 0;
return rv1646; }
}
if ((!(((*(R11 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv1647 = 1;
return rv1647; }
}
if ((!(((*(R14 *)rt_nil_check(l_RT_1625))).f_BASE == NULL)))
{
{ rt_int rv1648 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R14 *)rt_nil_check(l_RT_1625))).f_BASE, p_BS);
return rv1648; }
}
{ rt_int rv1649 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv1649; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv1650 = (((*(R14 *)rt_nil_check(l_RT_1625))).f_KIND == g_T_BITS);
return rv1650; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv1651 = (((*(R14 *)rt_nil_check(l_RT_1625))).f_KIND == g_T_SEM);
return rv1651; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R14 *)rt_nil_check(l_RT_1625))).f_KIND == g_T_PTR)))
{
{ rt_int rv1652 = 0;
return rv1652; }
}
{ rt_int rv1653 = r_UNIFY(((*(R11 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_1625), p_BS);
return rv1653; }
}
{
R13 * l_Y_1654; memset(&l_Y_1654, 0, sizeof l_Y_1654);
l_Y_1654 = r_ORIG_LOOKUP(((*(R11 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_1654 == NULL))
{
{ rt_int rv1655 = 0;
return rv1655; }
}
if (((((*(R13 *)rt_nil_check(l_Y_1654))).f_KIND == g_Y_TYPE) && (((*(R13 *)rt_nil_check(l_Y_1654))).f_DECL == NULL)))
{
{ rt_int rv1656 = r_SAME_CLASS(((*(R13 *)rt_nil_check(l_Y_1654))).f_T, p_T);
return rv1656; }
}
if ((!(((*(R13 *)rt_nil_check(l_Y_1654))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv1657 = 0;
return rv1657; }
}
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R14 *)rt_nil_check(p_T))).f_DECL) == l_Y_1654)))
{
{ rt_int rv1658 = 0;
return rv1658; }
}
}
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_1654))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R14 *)rt_nil_check(l_RT_1625))).f_KIND == g_T_REC)))
{
{ rt_int rv1659 = 0;
return rv1659; }
}
if ((!(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_RT_1625))).f_BASE))).f_DECL == l_Y_1654)))
{
{ rt_int rv1660 = 0;
return rv1660; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R11 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv1661 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv1661; }
}
{ rt_int rv1662 = r_UNIFY(r_SUBST_FORMALS(((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_1654))).f_DECL))).f_B, ((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_1654))).f_DECL))).f_A, ((*(R11 *)rt_nil_check(p_TS))).f_A), l_RT_1625, p_BS);
return rv1662; }
}
{
R11 * l_F_1663; memset(&l_F_1663, 0, sizeof l_F_1663);
l_F_1663 = ((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_1654))).f_DECL))).f_A;
R11 * l_A_1664; memset(&l_A_1664, 0, sizeof l_A_1664);
l_A_1664 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
R17 * l_V_1665; memset(&l_V_1665, 0, sizeof l_V_1665);
l_V_1665 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
R13 * l_CLASS_1666; memset(&l_CLASS_1666, 0, sizeof l_CLASS_1666);
l_CLASS_1666 = r_RECORD_CLASS_OF(l_RT_1625);
for (;;) {
if ((l_F_1663 == NULL)) goto L_end1667;
{
{
R11 * l_N_1668; memset(&l_N_1668, 0, sizeof l_N_1668);
l_N_1668 = ((*(R11 *)rt_nil_check(l_F_1663))).f_A;
for (;;) {
if ((l_N_1668 == NULL)) goto L_end1669;
{
if ((l_A_1664 == NULL))
{
{ rt_int rv1670 = 0;
return rv1670; }
}
if ((((*(R11 *)rt_nil_check(l_F_1663))).f_B == NULL))
{
if ((!(l_CLASS_1666 == NULL)))
{
{
R16 * l_B_1671; memset(&l_B_1671, 0, sizeof l_B_1671);
l_B_1671 = r_FIND_BIND(((*(R13 *)rt_nil_check(l_CLASS_1666))).f_BINDINGS, ((*(R11 *)rt_nil_check(l_N_1668))).f_NAME);
if ((!(l_B_1671 == NULL)))
{
if ((!r_UNIFY(l_A_1664, ((*(R16 *)rt_nil_check(l_B_1671))).f_T, p_BS)))
{
{ rt_int rv1672 = 0;
return rv1672; }
}
}
}
}
}
else
{
if ((!(l_V_1665 == NULL)))
{
if ((((!(((*(R11 *)rt_nil_check(l_A_1664))).f_KIND == g_TS_GEN)) && (!(((*(R11 *)rt_nil_check(l_A_1664))).f_KIND == g_N_DONTCARE))) && (!(((*(R11 *)rt_nil_check(l_A_1664))).f_KIND == g_N_ANY))))
{
{
R12 l_M_1673; memset(&l_M_1673, 0, sizeof l_M_1673);
S_R12(&l_M_1673, r_MANIFEST(l_A_1664), 0);
if (((l_M_1673).f_OK && (((*(R17 *)rt_nil_check(l_V_1665))).f_MLO).f_OK))
{
if ((!((l_M_1673).f_V == (((*(R17 *)rt_nil_check(l_V_1665))).f_MLO).f_V)))
{
{ rt_int rv1674 = 0;
return rv1674; }
}
}
}
}
l_V_1665 = ((*(R17 *)rt_nil_check(l_V_1665))).f_NEXT;
}
}
l_A_1664 = ((*(R11 *)rt_nil_check(l_A_1664))).f_NEXT;
l_N_1668 = ((*(R11 *)rt_nil_check(l_N_1668))).f_NEXT;
}
} L_end1669: ;
}
l_F_1663 = ((*(R11 *)rt_nil_check(l_F_1663))).f_NEXT;
}
} L_end1667: ;
}
{ rt_int rv1675 = 1;
return rv1675; }
}
rt_raise(RT_X_INIT);
}
static R13 * r_RECORD_CLASS_OF(R14 * p_T) { 
R13 * l_R_1676; memset(&l_R_1676, 0, sizeof l_R_1676);
l_R_1676 = ((*(R22 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R13 * rv1677 = NULL;
return rv1677; }
}
for (;;) {
if ((l_R_1676 == NULL)) goto L_end1678;
{
if ((((*(R13 *)rt_nil_check(l_R_1676))).f_T == ((*(R14 *)rt_nil_check(p_T))).f_BASE))
{
{ R13 * rv1679 = l_R_1676;
return rv1679; }
}
l_R_1676 = ((*(R13 *)rt_nil_check(l_R_1676))).f_INSTANCES;
}
} L_end1678: ;
{ R13 * rv1680 = NULL;
return rv1680; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R11 * p_A, R12 p_M, R16 * p_BS) { 
if ((p_A == NULL))
{
{ rt_int rv1681 = 1;
return rv1681; }
}
if ((((*(R11 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv1682 = 1;
return rv1682; }
}
else if ((((*(R11 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R11 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1683 = 1;
return rv1683; }
}
{
R16 * l_B_1684; memset(&l_B_1684, 0, sizeof l_B_1684);
l_B_1684 = r_FIND_BIND(((*(R16 *)rt_nil_check(p_BS))).f_NEXT, ((*(R11 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_1684 == NULL)))
{
{ rt_int rv1685 = ((((*(R16 *)rt_nil_check(l_B_1684))).f_HASMV && (p_M).f_OK) && (((*(R16 *)rt_nil_check(l_B_1684))).f_MV == (p_M).f_V));
return rv1685; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv1686 = 0;
return rv1686; }
}
r_ADD_BIND(((*(R11 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv1687 = 1;
return rv1687; }
}
{
R12 l_V_1688; memset(&l_V_1688, 0, sizeof l_V_1688);
S_R12(&l_V_1688, r_MANIFEST(p_A), 0);
if (((l_V_1688).f_OK && (p_M).f_OK))
{
{ rt_int rv1689 = ((l_V_1688).f_V == (p_M).f_V);
return rv1689; }
}
}
{ rt_int rv1690 = 1;
return rv1690; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R20 * p_P, R19 * p_A, R16 * p_BS) { 
if ((((*(R11 *)rt_nil_check(((*(R20 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R19 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv1691 = 0;
return rv1691; }
}
{ rt_int rv1692 = (((*(R11 *)rt_nil_check(((*(R19 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME);
return rv1692; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R11 *)rt_nil_check(((*(R19 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv1693 = 1;
return rv1693; }
}
r_TYPE_ARG(p_A);
{ rt_int rv1694 = r_UNIFY(((*(R20 *)rt_nil_check(p_P))).f_TS, (((*(R19 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv1694; }
rt_raise(RT_X_INIT);
}
static R13 * r_INSTANCE(R13 * p_G, R19 * p_ARGS, rt_int p_LINE) { 
R16 * l_BS_1695; memset(&l_BS_1695, 0, sizeof l_BS_1695);
l_BS_1695 = r_NEW_BINDS();
R20 * l_P_1696; memset(&l_P_1696, 0, sizeof l_P_1696);
l_P_1696 = ((*(R13 *)rt_nil_check(p_G))).f_PARAMS;
R19 * l_A_1697; memset(&l_A_1697, 0, sizeof l_A_1697);
l_A_1697 = p_ARGS;
for (;;) {
if ((l_P_1696 == NULL)) goto L_end1698;
{
if ((((*(R20 *)rt_nil_check(l_P_1696))).f_TS == NULL))
{
if (((*(R19 *)rt_nil_check(l_A_1697))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R20 *)rt_nil_check(l_P_1696))).f_NAME, r_ARG_TYPE(((*(R19 *)rt_nil_check(l_A_1697))).f_E), r_NO_MVAL(), NULL, l_BS_1695);
}
else if ((((*(R11 *)rt_nil_check(((*(R20 *)rt_nil_check(l_P_1696))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R20 *)rt_nil_check(l_P_1696))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R20 *)rt_nil_check(l_P_1696))).f_TS, ((*(R19 *)rt_nil_check(l_A_1697))).f_E, p_LINE), l_BS_1695);
}
else
{
if ((!((*(R19 *)rt_nil_check(l_A_1697))).f_HAVE))
{
S_R18(&((*(R19 *)rt_nil_check(l_A_1697))).f_V, r_EXPR(((*(R19 *)rt_nil_check(l_A_1697))).f_E, NULL), 0);
((*(R19 *)rt_nil_check(l_A_1697))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R20 *)rt_nil_check(l_P_1696))).f_TS, (((*(R19 *)rt_nil_check(l_A_1697))).f_V).f_T, l_BS_1695)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R20 *)rt_nil_check(l_P_1696))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R20 *)rt_nil_check(l_P_1696))).f_TS))
{
r_ADD_BIND(r_MKN(rt_str_cat(rt_str("\?", 1), r_STR(((*(R20 *)rt_nil_check(l_P_1696))).f_NAME, (((*(R20 *)rt_nil_check(l_P_1696))).f_NAME).f_LEN))), (((*(R19 *)rt_nil_check(l_A_1697))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_1695);
}
}
l_P_1696 = ((*(R20 *)rt_nil_check(l_P_1696))).f_NEXT;
l_A_1697 = ((*(R19 *)rt_nil_check(l_A_1697))).f_NEXT;
}
} L_end1698: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_1695);
{
R13 * l_I_1699; memset(&l_I_1699, 0, sizeof l_I_1699);
l_I_1699 = ((*(R13 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_1699 == NULL)) goto L_end1700;
{
if (r_SAME_STATIC_BINDS(((*(R13 *)rt_nil_check(l_I_1699))).f_BINDINGS, ((*(R16 *)rt_nil_check(l_BS_1695))).f_NEXT))
{
{ R13 * rv1701 = l_I_1699;
return rv1701; }
}
l_I_1699 = ((*(R13 *)rt_nil_check(l_I_1699))).f_INSTANCES;
}
} L_end1700: ;
}
{ R13 * rv1702 = r_NEW_INSTANCE(p_G, ((*(R16 *)rt_nil_check(l_BS_1695))).f_NEXT, p_ARGS);
return rv1702; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R16 * p_A, R16 * p_B) { 
R16 * l_P_1703; memset(&l_P_1703, 0, sizeof l_P_1703);
l_P_1703 = p_A;
for (;;) {
if ((l_P_1703 == NULL)) goto L_end1704;
{
{
R16 * l_Q_1705; memset(&l_Q_1705, 0, sizeof l_Q_1705);
l_Q_1705 = r_FIND_BIND(p_B, ((*(R16 *)rt_nil_check(l_P_1703))).f_NAME);
if ((l_Q_1705 == NULL))
{
{ rt_int rv1706 = 0;
return rv1706; }
}
if (((!(((*(R16 *)rt_nil_check(l_P_1703))).f_T == NULL)) || (!(((*(R16 *)rt_nil_check(l_Q_1705))).f_T == NULL))))
{
if (((((*(R16 *)rt_nil_check(l_P_1703))).f_T == NULL) || (((*(R16 *)rt_nil_check(l_Q_1705))).f_T == NULL)))
{
{ rt_int rv1707 = 0;
return rv1707; }
}
if ((!r_SAME_TYPE(((*(R16 *)rt_nil_check(l_P_1703))).f_T, ((*(R16 *)rt_nil_check(l_Q_1705))).f_T)))
{
{ rt_int rv1708 = 0;
return rv1708; }
}
}
if ((((!(((*(R16 *)rt_nil_check(l_P_1703))).f_HASMV == ((*(R16 *)rt_nil_check(l_Q_1705))).f_HASMV)) || (!(((*(R16 *)rt_nil_check(l_P_1703))).f_MV == ((*(R16 *)rt_nil_check(l_Q_1705))).f_MV))) || (!(((*(R16 *)rt_nil_check(l_P_1703))).f_R == ((*(R16 *)rt_nil_check(l_Q_1705))).f_R))))
{
{ rt_int rv1709 = 0;
return rv1709; }
}
}
l_P_1703 = ((*(R16 *)rt_nil_check(l_P_1703))).f_NEXT;
}
} L_end1704: ;
{ rt_int rv1710 = 1;
return rv1710; }
rt_raise(RT_X_INIT);
}
static R13 * r_ROUTINE_ARGUMENT(R11 * p_TS, R11 * p_E, rt_int p_LINE) { 
R13 * l_Y_1711; memset(&l_Y_1711, 0, sizeof l_Y_1711);
l_Y_1711 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
R13 * l_FOUND_1712; memset(&l_FOUND_1712, 0, sizeof l_FOUND_1712);
l_FOUND_1712 = NULL;
if ((!(((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(p_LINE, rt_str("a routine name is expected as the argument", 42));
}
for (;;) {
if ((l_Y_1711 == NULL)) goto L_end1713;
{
if ((((*(R13 *)rt_nil_check(l_Y_1711))).f_KIND == g_Y_ROUTINE))
{
{
R13 * l_R_1714; memset(&l_R_1714, 0, sizeof l_R_1714);
l_R_1714 = r_ORIGINAL(l_Y_1711);
r_ROUTINE_HEADER(l_R_1714);
if (((r_LIST_LENGTH(((*(R11 *)rt_nil_check(p_TS))).f_A) == r_PARAM_COUNT(l_R_1714)) && (!((*(R13 *)rt_nil_check(l_R_1714))).f_GENERIC)))
{
if (((!(l_FOUND_1712 == NULL)) && (!(l_FOUND_1712 == l_R_1714))))
{
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_1712 = l_R_1714;
}
}
}
l_Y_1711 = r_LOOKUP_NEXT(l_Y_1711);
}
} L_end1713: ;
if ((l_FOUND_1712 == NULL))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter: ", 39), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R13 *)rt_nil_check(l_FOUND_1712))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
{ R13 * rv1715 = l_FOUND_1712;
return rv1715; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R13 * p_G, rt_int p_LINE, R16 * p_BS) { 
R11 * l_NEEDL_1716; memset(&l_NEEDL_1716, 0, sizeof l_NEEDL_1716);
l_NEEDL_1716 = ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R16 * l_SAVED_1717; memset(&l_SAVED_1717, 0, sizeof l_SAVED_1717);
l_SAVED_1717 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
((*(R22 *)rt_nil_check(g_W))).f_BINDS = ((*(R16 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_1716 == NULL)) goto L_end1718;
{
{
R11 * l_T_1719; memset(&l_T_1719, 0, sizeof l_T_1719);
l_T_1719 = ((*(R11 *)rt_nil_check(l_NEEDL_1716))).f_A;
for (;;) {
if ((l_T_1719 == NULL)) goto L_end1720;
{
if ((r_FIND_BIND(((*(R16 *)rt_nil_check(p_BS))).f_NEXT, ((*(R11 *)rt_nil_check(l_T_1719))).f_NAME) == NULL))
{
{
R19 * l_ARGS_1721; memset(&l_ARGS_1721, 0, sizeof l_ARGS_1721);
l_ARGS_1721 = NULL;
R19 * l_TAIL_1722; memset(&l_TAIL_1722, 0, sizeof l_TAIL_1722);
l_TAIL_1722 = NULL;
R11 * l_P_1723; memset(&l_P_1723, 0, sizeof l_P_1723);
l_P_1723 = ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_T_1719))).f_B))).f_A;
R13 * l_R_1724; memset(&l_R_1724, 0, sizeof l_R_1724);
for (;;) {
if ((l_P_1723 == NULL)) goto L_end1725;
{
{
R19 * l_A_1726; memset(&l_A_1726, 0, sizeof l_A_1726);
if ((((*(R11 *)rt_nil_check(l_P_1723))).f_B == NULL))
{
l_A_1726 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R22 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_1726 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R11 *)rt_nil_check(l_P_1723))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R19 *)rt_nil_check(l_A_1726))).f_MODE = ((*(R11 *)rt_nil_check(l_P_1723))).f_IV;
if ((l_TAIL_1722 == NULL))
{
l_ARGS_1721 = l_A_1726;
}
else
{
((*(R19 *)rt_nil_check(l_TAIL_1722))).f_NEXT = l_A_1726;
}
l_TAIL_1722 = l_A_1726;
}
l_P_1723 = ((*(R11 *)rt_nil_check(l_P_1723))).f_NEXT;
}
} L_end1725: ;
l_R_1724 = r_FIND_ROUTINE(((*(R11 *)rt_nil_check(l_T_1719))).f_NAME, l_ARGS_1721, p_LINE, 0);
if ((l_R_1724 == NULL))
{
l_R_1724 = r_LOOKUP(((*(R11 *)rt_nil_check(l_T_1719))).f_NAME);
if ((!(l_R_1724 == NULL)))
{
if (((!(((*(R13 *)rt_nil_check(l_R_1724))).f_KIND == g_Y_BUILTIN)) && (!(((*(R13 *)rt_nil_check(l_R_1724))).f_KIND == g_Y_ROUTINE))))
{
l_R_1724 = NULL;
}
}
if ((!(l_R_1724 == NULL)))
{
if ((((*(R13 *)rt_nil_check(l_R_1724))).f_KIND == g_Y_ROUTINE))
{
l_R_1724 = NULL;
}
}
}
if (((l_R_1724 == NULL) && (!r_IS_OPERATOR_NAME(((*(R11 *)rt_nil_check(l_T_1719))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R11 *)rt_nil_check(l_T_1719))).f_NAME);
}
if ((!(l_R_1724 == NULL)))
{
r_ADD_BIND(((*(R11 *)rt_nil_check(l_T_1719))).f_NAME, NULL, r_NO_MVAL(), l_R_1724, p_BS);
}
((*(R22 *)rt_nil_check(g_W))).f_BINDS = ((*(R16 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_1719 = ((*(R11 *)rt_nil_check(l_T_1719))).f_NEXT;
}
} L_end1720: ;
}
l_NEEDL_1716 = ((*(R11 *)rt_nil_check(l_NEEDL_1716))).f_NEXT;
}
} L_end1718: ;
((*(R22 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1717;
}
static rt_int r_DONTCARE_TYPE_ARG(R11 * p_TS) { 
if ((!(((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv1727 = 0;
return rv1727; }
}
{
R13 * l_Y_1728; memset(&l_Y_1728, 0, sizeof l_Y_1728);
l_Y_1728 = r_ORIG_LOOKUP(((*(R11 *)rt_nil_check(p_TS))).f_NAME);
R11 * l_A_1729; memset(&l_A_1729, 0, sizeof l_A_1729);
l_A_1729 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
R11 * l_F_1730; memset(&l_F_1730, 0, sizeof l_F_1730);
if ((l_Y_1728 == NULL))
{
{ rt_int rv1731 = 0;
return rv1731; }
}
if (((!(((*(R13 *)rt_nil_check(l_Y_1728))).f_KIND == g_Y_TYPE)) || (((*(R13 *)rt_nil_check(l_Y_1728))).f_DECL == NULL)))
{
{ rt_int rv1732 = 0;
return rv1732; }
}
l_F_1730 = ((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_1728))).f_DECL))).f_A;
for (;;) {
if ((l_F_1730 == NULL)) goto L_end1733;
{
{
R11 * l_N_1734; memset(&l_N_1734, 0, sizeof l_N_1734);
l_N_1734 = ((*(R11 *)rt_nil_check(l_F_1730))).f_A;
for (;;) {
if ((l_N_1734 == NULL)) goto L_end1735;
{
if ((l_A_1729 == NULL))
{
{ rt_int rv1736 = 0;
return rv1736; }
}
if (((((*(R11 *)rt_nil_check(l_F_1730))).f_B == NULL) && (((*(R11 *)rt_nil_check(l_A_1729))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv1737 = 1;
return rv1737; }
}
l_A_1729 = ((*(R11 *)rt_nil_check(l_A_1729))).f_NEXT;
l_N_1734 = ((*(R11 *)rt_nil_check(l_N_1734))).f_NEXT;
}
} L_end1735: ;
}
l_F_1730 = ((*(R11 *)rt_nil_check(l_F_1730))).f_NEXT;
}
} L_end1733: ;
}
{ rt_int rv1738 = 0;
return rv1738; }
rt_raise(RT_X_INIT);
}
static R13 * r_NEW_INSTANCE(R13 * p_G, R16 * p_BS, R19 * p_ARGS) { 
R19 * l_A_1739; memset(&l_A_1739, 0, sizeof l_A_1739);
l_A_1739 = p_ARGS;
R13 * l_I_1740; memset(&l_I_1740, 0, sizeof l_I_1740);
l_I_1740 = r_NEW_SYM(g_Y_ROUTINE, ((*(R13 *)rt_nil_check(p_G))).f_NAME);
R16 * l_SAVED_1741; memset(&l_SAVED_1741, 0, sizeof l_SAVED_1741);
l_SAVED_1741 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
R20 * l_P_1742; memset(&l_P_1742, 0, sizeof l_P_1742);
l_P_1742 = ((*(R13 *)rt_nil_check(p_G))).f_PARAMS;
R20 * l_TAIL_1743; memset(&l_TAIL_1743, 0, sizeof l_TAIL_1743);
l_TAIL_1743 = NULL;
S_R13(&(*(R13 *)rt_nil_check(l_I_1740)), (*(R13 *)rt_nil_check(p_G)), 0);
((*(R13 *)rt_nil_check(l_I_1740))).f_GENERIC = 0;
((*(R13 *)rt_nil_check(l_I_1740))).f_BINDINGS = p_BS;
((*(R13 *)rt_nil_check(l_I_1740))).f_PARAMS = NULL;
S_R7(&((*(R13 *)rt_nil_check(l_I_1740))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R13 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R13 *)rt_nil_check(l_I_1740))).f_INSTANCES = ((*(R13 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R13 *)rt_nil_check(p_G))).f_INSTANCES = l_I_1740;
((*(R22 *)rt_nil_check(g_W))).f_BINDS = p_BS;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_1742 == NULL)) goto L_end1744;
{
{
R20 * l_PM_1745; memset(&l_PM_1745, 0, sizeof l_PM_1745);
l_PM_1745 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_PM_1745)), (*(R20 *)rt_nil_check(l_P_1742)), 0);
((*(R20 *)rt_nil_check(l_PM_1745))).f_NEXT = NULL;
if ((((*(R20 *)rt_nil_check(l_P_1742))).f_TS == NULL))
{
((*(R20 *)rt_nil_check(l_PM_1745))).f_T = NULL;
}
else if ((((*(R11 *)rt_nil_check(((*(R20 *)rt_nil_check(l_P_1742))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R20 *)rt_nil_check(l_PM_1745))).f_T = ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R20 *)rt_nil_check(l_P_1742))).f_TS) && ((*(R19 *)rt_nil_check(l_A_1739))).f_HAVE))
{
((*(R20 *)rt_nil_check(l_PM_1745))).f_T = (((*(R19 *)rt_nil_check(l_A_1739))).f_V).f_T;
if ((((*(R14 *)rt_nil_check(((*(R20 *)rt_nil_check(l_PM_1745))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R14 *)rt_nil_check(((*(R20 *)rt_nil_check(l_PM_1745))).f_T))).f_MODL == ((*(R13 *)rt_nil_check(p_G))).f_MODL))
{
((*(R20 *)rt_nil_check(l_PM_1745))).f_T = ((*(R14 *)rt_nil_check(((*(R20 *)rt_nil_check(l_PM_1745))).f_T))).f_BASE;
}
}
}
else
{
((*(R20 *)rt_nil_check(l_PM_1745))).f_T = r_RESOLVE(((*(R20 *)rt_nil_check(l_P_1742))).f_TS);
}
((*(R20 *)rt_nil_check(l_PM_1745))).f_TS = NULL;
if ((l_TAIL_1743 == NULL))
{
((*(R13 *)rt_nil_check(l_I_1740))).f_PARAMS = l_PM_1745;
}
else
{
((*(R20 *)rt_nil_check(l_TAIL_1743))).f_NEXT = l_PM_1745;
}
l_TAIL_1743 = l_PM_1745;
}
l_P_1742 = ((*(R20 *)rt_nil_check(l_P_1742))).f_NEXT;
l_A_1739 = ((*(R19 *)rt_nil_check(l_A_1739))).f_NEXT;
}
} L_end1744: ;
((*(R13 *)rt_nil_check(l_I_1740))).f_RESULT = r_RESULT_TYPE(l_I_1740);
r_LEAVE_MODULE_OF(p_G);
((*(R22 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1741;
S_R7(&((*(R13 *)rt_nil_check(l_I_1740))).f_FWD, r_C_HEADER(l_I_1740), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R13 *)rt_nil_check(l_I_1740))).f_FWD, rt_str(";", 1)));
((*(R13 *)rt_nil_check(l_I_1740))).f_MEMBERS = ((*(R22 *)rt_nil_check(g_W))).f_PENDING;
((*(R22 *)rt_nil_check(g_W))).f_PENDING = l_I_1740;
{ R13 * rv1746 = l_I_1740;
return rv1746; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R7 p_NAME) { 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv1747 = 0;
return rv1747; }
}
{ rt_int rv1748 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv1748; }
rt_raise(RT_X_INIT);
}
static R11 * r_SUBST_FORMALS(R11 * p_TS, R11 * p_FORMALS, R11 * p_ARGS) { 
R11 * l_C_1749; memset(&l_C_1749, 0, sizeof l_C_1749);
if ((p_TS == NULL))
{
{ R11 * rv1750 = NULL;
return rv1750; }
}
if (((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R11 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R11 * l_F_1751; memset(&l_F_1751, 0, sizeof l_F_1751);
l_F_1751 = p_FORMALS;
R11 * l_A_1752; memset(&l_A_1752, 0, sizeof l_A_1752);
l_A_1752 = p_ARGS;
for (;;) {
if ((l_F_1751 == NULL)) goto L_end1753;
{
{
R11 * l_N_1754; memset(&l_N_1754, 0, sizeof l_N_1754);
l_N_1754 = ((*(R11 *)rt_nil_check(l_F_1751))).f_A;
for (;;) {
if ((l_N_1754 == NULL)) goto L_end1755;
{
if ((l_A_1752 == NULL))
{
{ R11 * rv1756 = p_TS;
return rv1756; }
}
if (((((*(R11 *)rt_nil_check(l_F_1751))).f_B == NULL) && r_TEQ(((*(R11 *)rt_nil_check(l_N_1754))).f_NAME, ((*(R11 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R11 * rv1757 = l_A_1752;
return rv1757; }
}
l_A_1752 = ((*(R11 *)rt_nil_check(l_A_1752))).f_NEXT;
l_N_1754 = ((*(R11 *)rt_nil_check(l_N_1754))).f_NEXT;
}
} L_end1755: ;
}
l_F_1751 = ((*(R11 *)rt_nil_check(l_F_1751))).f_NEXT;
}
} L_end1753: ;
}
{ R11 * rv1758 = p_TS;
return rv1758; }
}
l_C_1749 = r_COPY_NODE(p_TS);
if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R11 *)rt_nil_check(l_C_1749))).f_C = r_SUBST_FORMALS(((*(R11 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R11 *)rt_nil_check(l_C_1749))).f_A = r_SUBST_FORMALS(((*(R11 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R11 * rv1759 = l_C_1749;
return rv1759; }
rt_raise(RT_X_INIT);
}
static R11 * r_COPY_NODE(R11 * p_N) { 
R11 * l_C_1760; memset(&l_C_1760, 0, sizeof l_C_1760);
l_C_1760 = ((R11 *)rt_alloc(sizeof (R11)));
S_R11(&(*(R11 *)rt_nil_check(l_C_1760)), (*(R11 *)rt_nil_check(p_N)), 0);
((*(R11 *)rt_nil_check(l_C_1760))).f_NEXT = NULL;
{ R11 * rv1761 = l_C_1760;
return rv1761; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R11 * p_L, R7 p_NAME) { 
R11 * l_P_1762; memset(&l_P_1762, 0, sizeof l_P_1762);
l_P_1762 = p_L;
for (;;) {
if ((l_P_1762 == NULL)) goto L_end1763;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_P_1762))).f_NAME, p_NAME))
{
{ rt_int rv1764 = 1;
return rv1764; }
}
l_P_1762 = ((*(R11 *)rt_nil_check(l_P_1762))).f_NEXT;
}
} L_end1763: ;
{ rt_int rv1765 = 0;
return rv1765; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R13 * p_Y, rt_int p_LINE) { 
R28 * l_IS_1766; memset(&l_IS_1766, 0, sizeof l_IS_1766);
l_IS_1766 = ((*(R22 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R13 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv1767 = (!((*(R13 *)rt_nil_check(p_Y))).f_INPUT);
return rv1767; }
}
if ((l_IS_1766 == NULL))
{
{ rt_int rv1768 = (!((*(R13 *)rt_nil_check(p_Y))).f_INPUT);
return rv1768; }
}
if (((((*(R13 *)rt_nil_check(p_Y))).f_OWNER == ((*(R28 *)rt_nil_check(l_IS_1766))).f_ID) || (((*(R28 *)rt_nil_check(l_IS_1766))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv1769 = (!((*(R13 *)rt_nil_check(p_Y))).f_INPUT);
return rv1769; }
}
if ((!(((*(R28 *)rt_nil_check(l_IS_1766))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_1766))).f_IMPORTS))).f_B, ((*(R13 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv1770 = (!((*(R13 *)rt_nil_check(p_Y))).f_INPUT);
return rv1770; }
}
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_1766))).f_IMPORTS))).f_A, ((*(R13 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv1771 = 0;
return rv1771; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R13 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R13 * p_Y) { 
R11 * l_ITEMS_1772; memset(&l_ITEMS_1772, 0, sizeof l_ITEMS_1772);
l_ITEMS_1772 = ((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R11 * l_HEAD_1773; memset(&l_HEAD_1773, 0, sizeof l_HEAD_1773);
l_HEAD_1773 = NULL;
R11 * l_TAIL_1774; memset(&l_TAIL_1774, 0, sizeof l_TAIL_1774);
l_TAIL_1774 = NULL;
if ((!(((*(R13 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R13 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_1772 == NULL))
{
((*(R13 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R11 *)rt_nil_check(l_ITEMS_1772))).f_A, &l_HEAD_1773, &l_TAIL_1774);
r_ADD_USES(((*(R11 *)rt_nil_check(l_ITEMS_1772))).f_B, &l_HEAD_1773, &l_TAIL_1774);
{
R11 * l_R_1775; memset(&l_R_1775, 0, sizeof l_R_1775);
l_R_1775 = ((*(R11 *)rt_nil_check(l_ITEMS_1772))).f_C;
for (;;) {
if ((l_R_1775 == NULL)) goto L_end1776;
{
{
R13 * l_Z_1777; memset(&l_Z_1777, 0, sizeof l_Z_1777);
l_Z_1777 = r_LOOKUP(((*(R11 *)rt_nil_check(l_R_1775))).f_NAME);
if ((l_Z_1777 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(l_R_1775))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R11 *)rt_nil_check(l_R_1775))).f_NAME);
}
for (;;) {
if ((l_Z_1777 == NULL)) goto L_end1778;
{
if ((((*(R13 *)rt_nil_check(l_Z_1777))).f_KIND == g_Y_ROUTINE))
{
{
R13 * l_O_1779; memset(&l_O_1779, 0, sizeof l_O_1779);
l_O_1779 = r_ORIGINAL(l_Z_1777);
R11 * l_U_1780; memset(&l_U_1780, 0, sizeof l_U_1780);
r_COMPUTE_USES(l_O_1779);
l_U_1780 = ((*(R13 *)rt_nil_check(l_O_1779))).f_USES;
for (;;) {
if ((l_U_1780 == NULL)) goto L_end1781;
{
if ((!r_IN_IDENTS(l_HEAD_1773, ((*(R11 *)rt_nil_check(l_U_1780))).f_NAME)))
{
{
R11 * l_N_1782; memset(&l_N_1782, 0, sizeof l_N_1782);
l_N_1782 = r_NEW_NODE(g_N_IDENT, ((*(R11 *)rt_nil_check(l_U_1780))).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_N_1782))).f_NAME, ((*(R11 *)rt_nil_check(l_U_1780))).f_NAME, 0);
((*(R11 *)rt_nil_check(l_N_1782))).f_IV = ((*(R11 *)rt_nil_check(l_U_1780))).f_IV;
r_ADD_LIST(l_N_1782, &l_HEAD_1773, &l_TAIL_1774);
}
}
l_U_1780 = ((*(R11 *)rt_nil_check(l_U_1780))).f_NEXT;
}
} L_end1781: ;
}
}
l_Z_1777 = r_LOOKUP_NEXT(l_Z_1777);
}
} L_end1778: ;
}
l_R_1775 = ((*(R11 *)rt_nil_check(l_R_1775))).f_NEXT;
}
} L_end1776: ;
}
((*(R13 *)rt_nil_check(p_Y))).f_USES = l_HEAD_1773;
((*(R13 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static void r_ROUTINE_USES(R11 * p_RS) { 
R11 * l_R_1783; memset(&l_R_1783, 0, sizeof l_R_1783);
l_R_1783 = p_RS;
for (;;) {
if ((l_R_1783 == NULL)) goto L_end1784;
{
if ((((*(R11 *)rt_nil_check(l_R_1783))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_1783));
}
l_R_1783 = ((*(R11 *)rt_nil_check(l_R_1783))).f_NEXT;
}
} L_end1784: ;
}
static void r_ADD_USES(R11 * p_L, R11 * *p_HEAD, R11 * *p_TAIL) { 
R11 * l_P_1785; memset(&l_P_1785, 0, sizeof l_P_1785);
l_P_1785 = p_L;
for (;;) {
if ((l_P_1785 == NULL)) goto L_end1786;
{
{
R13 * l_V_1787; memset(&l_V_1787, 0, sizeof l_V_1787);
l_V_1787 = r_LOOKUP(((*(R11 *)rt_nil_check(l_P_1785))).f_NAME);
R11 * l_N_1788; memset(&l_N_1788, 0, sizeof l_N_1788);
l_N_1788 = r_NEW_NODE(g_N_IDENT, ((*(R11 *)rt_nil_check(l_P_1785))).f_LINE);
if ((l_V_1787 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(l_P_1785))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R11 *)rt_nil_check(l_P_1785))).f_NAME);
}
S_R7(&((*(R11 *)rt_nil_check(l_N_1788))).f_NAME, ((*(R11 *)rt_nil_check(l_P_1785))).f_NAME, 0);
((*(R11 *)rt_nil_check(l_N_1788))).f_IV = ((*(R13 *)rt_nil_check(l_V_1787))).f_OWNER;
if ((((*(R13 *)rt_nil_check(l_V_1787))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_1788, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_1785 = ((*(R11 *)rt_nil_check(l_P_1785))).f_NEXT;
}
} L_end1786: ;
}
static void r_CHECK_CALL_IMPORTS(R13 * p_Y, rt_int p_LINE) { 
R28 * l_IS_1789; memset(&l_IS_1789, 0, sizeof l_IS_1789);
l_IS_1789 = ((*(R22 *)rt_nil_check(g_W))).f_IS;
R11 * l_U_1790; memset(&l_U_1790, 0, sizeof l_U_1790);
l_U_1790 = ((*(R13 *)rt_nil_check(p_Y))).f_USES;
if ((l_IS_1789 == NULL))
{
return;
}
if ((((*(R28 *)rt_nil_check(l_IS_1789))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_1790 == NULL)) goto L_end1791;
{
if ((!(((*(R11 *)rt_nil_check(l_U_1790))).f_IV == ((*(R28 *)rt_nil_check(l_IS_1789))).f_ID)))
{
if ((((*(R28 *)rt_nil_check(l_IS_1789))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R13 *)rt_nil_check(p_Y))).f_NAME, (((*(R13 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R11 *)rt_nil_check(l_U_1790))).f_NAME, (((*(R11 *)rt_nil_check(l_U_1790))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!((((r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_1789))).f_IMPORTS))).f_A, ((*(R11 *)rt_nil_check(l_U_1790))).f_NAME) || r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_1789))).f_IMPORTS))).f_B, ((*(R11 *)rt_nil_check(l_U_1790))).f_NAME)) || r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_1789))).f_IMPORTS))).f_C, ((*(R13 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_1789))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))))))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R13 *)rt_nil_check(p_Y))).f_NAME, (((*(R13 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R11 *)rt_nil_check(l_U_1790))).f_NAME, (((*(R11 *)rt_nil_check(l_U_1790))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_1790 = ((*(R11 *)rt_nil_check(l_U_1790))).f_NEXT;
}
} L_end1791: ;
}
static R7 r_BASE_NAME(R13 * p_Y) { 
if (((((*(R13 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)))
{
{ R7 rv1792 = ((*(R13 *)rt_nil_check(p_Y))).f_NAME;
return rv1792; }
}
{ R7 rv1793 = r_MKN(rt_b_slice(r_STR(((*(R13 *)rt_nil_check(p_Y))).f_NAME, (((*(R13 *)rt_nil_check(p_Y))).f_NAME).f_LEN), rt_add((((*(R13 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)), rt_sub((((*(R13 *)rt_nil_check(p_Y))).f_NAME).f_LEN, ((rt_int)1LL))));
return rv1793; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R7 p_NAME) { 
R21 * l_C_1794; memset(&l_C_1794, 0, sizeof l_C_1794);
l_C_1794 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_1794 == NULL)) goto L_end1795;
{
if ((((*(R21 *)rt_nil_check(l_C_1794))).f_KIND == ((rt_int)1LL)))
{
goto L_end1795;
}
if ((((*(R21 *)rt_nil_check(l_C_1794))).f_KIND == ((rt_int)3LL)))
{
{
R11 * l_H_1796; memset(&l_H_1796, 0, sizeof l_H_1796);
l_H_1796 = ((*(R21 *)rt_nil_check(l_C_1794))).f_HANDLERS;
for (;;) {
if ((l_H_1796 == NULL)) goto L_end1797;
{
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(l_H_1796))).f_A, p_NAME))
{
{ rt_int rv1798 = 1;
return rv1798; }
}
l_H_1796 = ((*(R11 *)rt_nil_check(l_H_1796))).f_NEXT;
}
} L_end1797: ;
}
}
l_C_1794 = ((*(R21 *)rt_nil_check(l_C_1794))).f_NEXT;
}
} L_end1795: ;
if ((!(((*(R22 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R28 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv1799 = 1;
return rv1799; }
}
}
{ rt_int rv1800 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv1800; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R7 p_NAME) { 
R21 * l_C_1801; memset(&l_C_1801, 0, sizeof l_C_1801);
l_C_1801 = ((R21 *)rt_alloc(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_C_1801)), ({ R21 rc1802; memset(&rc1802, 0, sizeof rc1802);  rc1802.f_KIND = p_KIND; S_R7(&rc1802.f_NAME, p_NAME, 0); rc1802.f_HANDLERS = NULL; rc1802.f_NEXT = ((*(R22 *)rt_nil_check(g_W))).f_CTXS; rc1802; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = l_C_1801;
}
static void r_POP_CTX(void) { 
((*(R22 *)rt_nil_check(g_W))).f_CTXS = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R21 * r_LEAVE(rt_int p_KIND) { 
R21 * l_C_1803; memset(&l_C_1803, 0, sizeof l_C_1803);
l_C_1803 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_1803 == NULL)) goto L_end1804;
{
if ((((*(R21 *)rt_nil_check(l_C_1803))).f_KIND == p_KIND))
{
{ R21 * rv1805 = l_C_1803;
return rv1805; }
}
if ((((*(R21 *)rt_nil_check(l_C_1803))).f_KIND == ((rt_int)1LL)))
{
{ R21 * rv1806 = NULL;
return rv1806; }
}
if ((((*(R21 *)rt_nil_check(l_C_1803))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R21 *)rt_nil_check(l_C_1803))).f_NAME));
}
l_C_1803 = ((*(R21 *)rt_nil_check(l_C_1803))).f_NEXT;
}
} L_end1804: ;
{ R21 * rv1807 = NULL;
return rv1807; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { 
R21 * l_C_1808; memset(&l_C_1808, 0, sizeof l_C_1808);
l_C_1808 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_1809; memset(&l_N_1809, 0, sizeof l_N_1809);
l_N_1809 = ((rt_int)0LL);
for (;;) {
if ((l_C_1808 == NULL)) goto L_end1810;
{
if ((((*(R21 *)rt_nil_check(l_C_1808))).f_KIND == ((rt_int)1LL)))
{
goto L_end1810;
}
if ((((*(R21 *)rt_nil_check(l_C_1808))).f_KIND == ((rt_int)3LL)))
{
l_N_1809 = rt_add(l_N_1809, ((rt_int)1LL));
}
l_C_1808 = ((*(R21 *)rt_nil_check(l_C_1808))).f_NEXT;
}
} L_end1810: ;
{ rt_int rv1811 = l_N_1809;
return rv1811; }
rt_raise(RT_X_INIT);
}
static R7 r_EXC_NAME(R7 p_NAME) { 
R11 * l_N_1812; memset(&l_N_1812, 0, sizeof l_N_1812);
l_N_1812 = ((*(R22 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_1812 == NULL)) goto L_end1813;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_N_1812))).f_NAME, p_NAME))
{
{ R7 rv1814 = r_FMT1(rt_str("x_@", 3), p_NAME);
return rv1814; }
}
l_N_1812 = ((*(R11 *)rt_nil_check(l_N_1812))).f_NEXT;
}
} L_end1813: ;
l_N_1812 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R7(&((*(R11 *)rt_nil_check(l_N_1812))).f_NAME, p_NAME, 0);
((*(R11 *)rt_nil_check(l_N_1812))).f_NEXT = ((*(R22 *)rt_nil_check(g_W))).f_EXCS;
((*(R22 *)rt_nil_check(g_W))).f_EXCS = l_N_1812;
{ R7 rv1815 = r_FMT1(rt_str("x_@", 3), p_NAME);
return rv1815; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R11 * p_DECLS) { 
R11 * l_D_1816; memset(&l_D_1816, 0, sizeof l_D_1816);
l_D_1816 = p_DECLS;
for (;;) {
if ((l_D_1816 == NULL)) goto L_end1817;
{
if (((((*(R11 *)rt_nil_check(l_D_1816))).f_KIND == g_N_TYPE) || (((*(R11 *)rt_nil_check(l_D_1816))).f_KIND == g_N_REPTYPE)))
{
{
R13 * l_Y_1818; memset(&l_Y_1818, 0, sizeof l_Y_1818);
l_Y_1818 = r_NEW_SYM(g_Y_TYPE, ((*(R11 *)rt_nil_check(l_D_1816))).f_NAME);
if ((((*(R11 *)rt_nil_check(l_D_1816))).f_KIND == g_N_REPTYPE))
{
((*(R13 *)rt_nil_check(l_Y_1818))).f_KIND = g_Y_REPTYPE;
}
((*(R13 *)rt_nil_check(l_Y_1818))).f_DECL = l_D_1816;
r_DEFINE(l_Y_1818, ((*(R11 *)rt_nil_check(l_D_1816))).f_LINE);
}
}
l_D_1816 = ((*(R11 *)rt_nil_check(l_D_1816))).f_NEXT;
}
} L_end1817: ;
}
static void r_DECLARE_LABELS(R11 * p_S0) { 
R11 * l_S_1819; memset(&l_S_1819, 0, sizeof l_S_1819);
l_S_1819 = p_S0;
for (;;) {
if ((l_S_1819 == NULL)) goto L_end1820;
{
{
R11 * l_L_1821; memset(&l_L_1821, 0, sizeof l_L_1821);
l_L_1821 = l_S_1819;
for (;;) {
if ((!(((*(R11 *)rt_nil_check(l_L_1821))).f_KIND == g_N_LABELED))) goto L_end1822;
{
{
R13 * l_Y_1823; memset(&l_Y_1823, 0, sizeof l_Y_1823);
l_Y_1823 = r_NEW_SYM(g_Y_LABEL, ((*(R11 *)rt_nil_check(l_L_1821))).f_NAME);
S_R7(&((*(R13 *)rt_nil_check(l_Y_1823))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(((*(R11 *)rt_nil_check(l_L_1821))).f_NAME, (((*(R11 *)rt_nil_check(l_L_1821))).f_NAME).f_LEN))), 0);
((*(R13 *)rt_nil_check(l_Y_1823))).f_MV = r_GUARDS();
r_DEFINE(l_Y_1823, ((*(R11 *)rt_nil_check(l_L_1821))).f_LINE);
}
l_L_1821 = ((*(R11 *)rt_nil_check(l_L_1821))).f_A;
}
} L_end1822: ;
}
l_S_1819 = ((*(R11 *)rt_nil_check(l_S_1819))).f_NEXT;
}
} L_end1820: ;
}
static void r_BODY(R11 * p_B) { 
R11 * l_D_1824; memset(&l_D_1824, 0, sizeof l_D_1824);
l_D_1824 = ((*(R11 *)rt_nil_check(p_B))).f_A;
R11 * l_S_1825; memset(&l_S_1825, 0, sizeof l_S_1825);
l_S_1825 = ((*(R11 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R11 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_1824 == NULL)) goto L_end1826;
{
if (((((*(R11 *)rt_nil_check(l_D_1824))).f_KIND == g_N_VAR) || (((*(R11 *)rt_nil_check(l_D_1824))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_1824);
}
l_D_1824 = ((*(R11 *)rt_nil_check(l_D_1824))).f_NEXT;
}
} L_end1826: ;
r_DECLARE_LABELS(((*(R11 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_1825 == NULL)) goto L_end1827;
{
r_STMT(l_S_1825);
l_S_1825 = ((*(R11 *)rt_nil_check(l_S_1825))).f_NEXT;
}
} L_end1827: ;
}
static void r_OPEN_BODY(R11 * p_B) { 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R11 * p_S, R11 * p_BODY_NODE, R11 * p_HANDLERS) { 
R7 l_F_1828; memset(&l_F_1828, 0, sizeof l_F_1828);
S_R7(&l_F_1828, r_NEW_NAME(rt_str("xf", 2)), 0);
R11 * l_H_1829; memset(&l_H_1829, 0, sizeof l_H_1829);
l_H_1829 = p_HANDLERS;
R7 l_WORD_1830; memset(&l_WORD_1830, 0, sizeof l_WORD_1830);
S_R7(&l_WORD_1830, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_1828, l_F_1828));
r_PUSH_CTX(((rt_int)3LL), l_F_1828);
((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CTXS))).f_HANDLERS = p_HANDLERS;
if ((!(p_S == NULL)))
{
r_STMT(p_S);
}
else
{
r_OPEN_BODY(p_BODY_NODE);
}
r_POP_CTX();
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_1828, l_F_1828, l_F_1828));
for (;;) {
if ((l_H_1829 == NULL)) goto L_end1831;
{
{
R11 * l_N_1832; memset(&l_N_1832, 0, sizeof l_N_1832);
l_N_1832 = ((*(R11 *)rt_nil_check(l_H_1829))).f_A;
R7 l_COND_1833; memset(&l_COND_1833, 0, sizeof l_COND_1833);
S_R7(&l_COND_1833, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_1832 == NULL)) goto L_end1834;
{
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(l_N_1832))).f_NEXT, ((*(R11 *)rt_nil_check(l_N_1832))).f_NAME))
{
r_FAILT(((*(R11 *)rt_nil_check(l_N_1832))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R11 *)rt_nil_check(l_N_1832))).f_NAME);
}
S_R7(&l_COND_1833, r_FMT3(rt_str("@ || @x == @", 12), l_COND_1833, l_F_1828, r_EXC_NAME(((*(R11 *)rt_nil_check(l_N_1832))).f_NAME)), 0);
l_N_1832 = ((*(R11 *)rt_nil_check(l_N_1832))).f_NEXT;
}
} L_end1834: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_1830, l_COND_1833));
S_R7(&l_WORD_1830, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_1828, rt_str("x", 1)));
r_OPEN_BODY(((*(R11 *)rt_nil_check(l_H_1829))).f_B);
r_POP_CTX();
}
l_H_1829 = ((*(R11 *)rt_nil_check(l_H_1829))).f_NEXT;
}
} L_end1831: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_1828));
}
static void r_STMT(R11 * p_S) { 
rt_int l_K_1835; memset(&l_K_1835, 0, sizeof l_K_1835);
l_K_1835 = ((*(R11 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_1835 == g_N_NULL))
{
return;
}
else if ((l_K_1835 == g_N_LABELED))
{
{
R13 * l_Y_1836; memset(&l_Y_1836, 0, sizeof l_Y_1836);
l_Y_1836 = r_LOOKUP(((*(R11 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R13 *)rt_nil_check(l_Y_1836))).f_ACCESS));
r_STMT(((*(R11 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_1835 == g_N_GOTO))
{
{
R13 * l_Y_1837; memset(&l_Y_1837, 0, sizeof l_Y_1837);
l_Y_1837 = r_LOOKUP(((*(R11 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_1838; memset(&l_N_1838, 0, sizeof l_N_1838);
R21 * l_C_1839; memset(&l_C_1839, 0, sizeof l_C_1839);
l_C_1839 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_1837 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R11 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R13 *)rt_nil_check(l_Y_1837))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R11 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R13 *)rt_nil_check(l_Y_1837))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R11 *)rt_nil_check(p_S))).f_NAME);
}
l_N_1838 = rt_sub(r_GUARDS(), ((*(R13 *)rt_nil_check(l_Y_1837))).f_MV);
for (;;) {
if ((l_N_1838 <= ((rt_int)0LL))) goto L_end1840;
{
if ((((*(R21 *)rt_nil_check(l_C_1839))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R21 *)rt_nil_check(l_C_1839))).f_NAME));
l_N_1838 = rt_sub(l_N_1838, ((rt_int)1LL));
}
l_C_1839 = ((*(R21 *)rt_nil_check(l_C_1839))).f_NEXT;
}
} L_end1840: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R13 *)rt_nil_check(l_Y_1837))).f_ACCESS));
}
}
else if ((l_K_1835 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_1835 == g_N_CALL))
{
{
R18 l_V_1841; memset(&l_V_1841, 0, sizeof l_V_1841);
S_R18(&l_V_1841, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_1841).f_T == NULL)))
{
if ((!(((*(R14 *)rt_nil_check((l_V_1841).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R11 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_1841).f_C, rt_str(";", 1)));
}
}
else if ((l_K_1835 == g_N_IF))
{
r_IF_STMT(((*(R11 *)rt_nil_check(p_S))).f_A, ((*(R11 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_1835 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_1835 == g_N_LOOP))
{
{
R7 l_END_L_1842; memset(&l_END_L_1842, 0, sizeof l_END_L_1842);
S_R7(&l_END_L_1842, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R11 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R11 *)rt_nil_check(p_S))).f_A), l_END_L_1842));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_1842);
r_OPEN_BODY(((*(R11 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
if ((!(((*(R11 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R11 *)rt_nil_check(p_S))).f_C), l_END_L_1842));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_1842));
}
}
else if ((l_K_1835 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_1835 == g_N_EXIT))
{
{
R21 * l_C_1843; memset(&l_C_1843, 0, sizeof l_C_1843);
l_C_1843 = r_LEAVE(((rt_int)2LL));
if ((l_C_1843 == NULL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R21 *)rt_nil_check(l_C_1843))).f_NAME));
}
}
else if ((l_K_1835 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_1835 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R11 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_1835 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_1835 == g_N_ASSERT))
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R11 *)rt_nil_check(p_S))).f_A)));
}
else if ((l_K_1835 == g_N_EXCEPT))
{
r_GUARDED(((*(R11 *)rt_nil_check(p_S))).f_A, NULL, ((*(R11 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_1835 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_1835 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_1835 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R18 r_PROCEDURE_CALL(R11 * p_S) { 
R13 * l_Y_1844; memset(&l_Y_1844, 0, sizeof l_Y_1844);
l_Y_1844 = r_LOOKUP(((*(R11 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_1844 == NULL)))
{
if (((((*(R13 *)rt_nil_check(l_Y_1844))).f_KIND == g_Y_VAR) || (((*(R13 *)rt_nil_check(l_Y_1844))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R11 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R18 rv1845 = r_CALL_EXPR(p_S, NULL);
return rv1845; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R11 * p_ARMS, R11 * p_ELSE_BODY) { 
R11 * l_ARM_1846; memset(&l_ARM_1846, 0, sizeof l_ARM_1846);
l_ARM_1846 = p_ARMS;
R7 l_WORD_1847; memset(&l_WORD_1847, 0, sizeof l_WORD_1847);
S_R7(&l_WORD_1847, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_1848; memset(&l_OPEN_1848, 0, sizeof l_OPEN_1848);
l_OPEN_1848 = ((rt_int)0LL);
for (;;) {
if ((l_ARM_1846 == NULL)) goto L_end1849;
{
{
R12 l_M_1850; memset(&l_M_1850, 0, sizeof l_M_1850);
S_R12(&l_M_1850, r_MANIFEST(((*(R11 *)rt_nil_check(l_ARM_1846))).f_A), 0);
if (((l_M_1850).f_OK && (!r_TEQS(l_WORD_1847, rt_str("if", 2)))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_1848 = rt_add(l_OPEN_1848, ((rt_int)1LL));
S_R7(&l_WORD_1847, r_MK(rt_str("if", 2)), 0);
}
if ((l_M_1850).f_OK)
{
if (((l_M_1850).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R11 *)rt_nil_check(l_ARM_1846))).f_B);
{ rt_int it1852_lo = ((rt_int)1LL), it1852_hi = l_OPEN_1848;
for (rt_int it1852 = it1852_lo; it1852 <= it1852_hi; it1852++) {
{
r_CODES(rt_str("}", 1));
}
} } L_end1851: ;
return;
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_1847, r_BOOL_EXPR(((*(R11 *)rt_nil_check(l_ARM_1846))).f_A)));
r_OPEN_BODY(((*(R11 *)rt_nil_check(l_ARM_1846))).f_B);
S_R7(&l_WORD_1847, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_1846 = ((*(R11 *)rt_nil_check(l_ARM_1846))).f_NEXT;
}
} L_end1849: ;
if ((!(p_ELSE_BODY == NULL)))
{
if ((!r_TEQS(l_WORD_1847, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
{ rt_int it1854_lo = ((rt_int)1LL), it1854_hi = l_OPEN_1848;
for (rt_int it1854 = it1854_lo; it1854 <= it1854_hi; it1854++) {
{
r_CODES(rt_str("}", 1));
}
} } L_end1853: ;
}
static void r_FOR_STMT(R11 * p_S) { 
R7 l_END_L_1855; memset(&l_END_L_1855, 0, sizeof l_END_L_1855);
S_R7(&l_END_L_1855, r_NEW_NAME(rt_str("L_end", 5)), 0);
R7 l_IT_1856; memset(&l_IT_1856, 0, sizeof l_IT_1856);
S_R7(&l_IT_1856, r_NEW_NAME(rt_str("it", 2)), 0);
R11 * l_R_1857; memset(&l_R_1857, 0, sizeof l_R_1857);
l_R_1857 = ((*(R11 *)rt_nil_check(p_S))).f_A;
R18 l_LO_1858; memset(&l_LO_1858, 0, sizeof l_LO_1858);
S_R18(&l_LO_1858, r_EXPR(((*(R11 *)rt_nil_check(l_R_1857))).f_A, NULL), 0);
R18 l_HI_1859; memset(&l_HI_1859, 0, sizeof l_HI_1859);
S_R18(&l_HI_1859, r_EXPR(((*(R11 *)rt_nil_check(l_R_1857))).f_B, (l_LO_1858).f_T), 0);
R14 * l_T_1860; memset(&l_T_1860, 0, sizeof l_T_1860);
l_T_1860 = r_REAL_TYPE((l_LO_1858).f_T);
R7 l_LOC_1861; memset(&l_LOC_1861, 0, sizeof l_LOC_1861);
R7 l_HIC_1862; memset(&l_HIC_1862, 0, sizeof l_HIC_1862);
if ((((*(R14 *)rt_nil_check(l_T_1860))).f_KIND == g_T_ENUM))
{
if (((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_1860))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R14 *)rt_nil_check(l_T_1860))).f_KIND == g_T_INT)) || (!(((*(R14 *)rt_nil_check(l_T_1860))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R7(&l_LOC_1861, (l_LO_1858).f_C, 0);
S_R7(&l_HIC_1862, (l_HI_1859).f_C, 0);
if (((((*(R11 *)rt_nil_check(l_R_1857))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(l_R_1857))).f_IV == ((rt_int)3LL))))
{
S_R7(&l_LOC_1861, r_FMT1(rt_str("(@) + 1", 7), l_LOC_1861), 0);
}
if ((((*(R11 *)rt_nil_check(l_R_1857))).f_IV >= ((rt_int)2LL)))
{
S_R7(&l_HIC_1862, r_FMT1(rt_str("(@) - 1", 7), l_HIC_1862), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_1856, l_LOC_1861, l_IT_1856, l_HIC_1862));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_1856, l_IT_1856, l_IT_1856, l_IT_1856));
r_OPEN_SCOPE();
if (((((*(R11 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R13 * l_Y_1863; memset(&l_Y_1863, 0, sizeof l_Y_1863);
l_Y_1863 = r_NEW_SYM(g_Y_CONST, ((*(R11 *)rt_nil_check(p_S))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_1863))).f_INPUT = 1;
if ((((*(R14 *)rt_nil_check(l_T_1860))).f_KIND == g_T_ENUM))
{
((*(R13 *)rt_nil_check(l_Y_1863))).f_T = ((*(R14 *)rt_nil_check(l_T_1860))).f_BASE;
}
else
{
((*(R13 *)rt_nil_check(l_Y_1863))).f_T = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_1863, rt_str("", 0)), l_IT_1856));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_1863, rt_str("", 0)), l_IT_1856));
}
else
{
S_R7(&((*(R13 *)rt_nil_check(l_Y_1863))).f_ACCESS, l_IT_1856, 0);
}
r_DEFINE(l_Y_1863, ((*(R11 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_1855);
r_OPEN_BODY(((*(R11 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_1855));
}
static void r_RETURN_STMT(R11 * p_S) { 
R27 * l_CS_1864; memset(&l_CS_1864, 0, sizeof l_CS_1864);
l_CS_1864 = ((*(R22 *)rt_nil_check(g_W))).f_CS;
R21 * l_C_1865; memset(&l_C_1865, 0, sizeof l_C_1865);
if ((((*(R11 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_1865 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R27 *)rt_nil_check(l_CS_1864))).f_RESULT == NULL)))
{
if ((!(((*(R14 *)rt_nil_check(((*(R27 *)rt_nil_check(l_CS_1864))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R27 *)rt_nil_check(l_CS_1864))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R27 *)rt_nil_check(l_CS_1864))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODES(rt_str("return;", 7));
}
return;
}
if (((((*(R27 *)rt_nil_check(l_CS_1864))).f_RESULT == NULL) || ((*(R27 *)rt_nil_check(l_CS_1864))).f_IS_PATH))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R14 *)rt_nil_check(((*(R27 *)rt_nil_check(l_CS_1864))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R7 l_V_1866; memset(&l_V_1866, 0, sizeof l_V_1866);
S_R7(&l_V_1866, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R27 *)rt_nil_check(l_CS_1864))).f_RESULT), l_V_1866, r_CONVERT(r_EXPR(((*(R11 *)rt_nil_check(p_S))).f_A, ((*(R27 *)rt_nil_check(l_CS_1864))).f_RESULT), ((*(R27 *)rt_nil_check(l_CS_1864))).f_RESULT, ((*(R11 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_1865 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_1866));
}
}
static void r_SIGNAL_STMT(R11 * p_S) { 
if (((((*(R11 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R21 * l_C_1867; memset(&l_C_1867, 0, sizeof l_C_1867);
l_C_1867 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_1867 == NULL)) goto L_end1868;
{
if ((((*(R21 *)rt_nil_check(l_C_1867))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R21 *)rt_nil_check(l_C_1867))).f_NAME));
return;
}
if ((((*(R21 *)rt_nil_check(l_C_1867))).f_KIND == ((rt_int)1LL)))
{
goto L_end1868;
}
l_C_1867 = ((*(R21 *)rt_nil_check(l_C_1867))).f_NEXT;
}
} L_end1868: ;
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("SIGNAL without a name outside a handler (4.5.7)", 47));
}
}
if (r_TEQS(((*(R11 *)rt_nil_check(p_S))).f_NAME, rt_str("TERMINATED", 10)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("TERMINATED is raised by TERMINATE only (4.5.7)", 46));
}
if ((!r_HANDLER_EXISTS(((*(R11 *)rt_nil_check(p_S))).f_NAME)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("no handler for the exception here, and it is not in the SIGNALS clause (4.5.7): ", 80), ((*(R11 *)rt_nil_check(p_S))).f_NAME);
}
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), r_EXC_NAME(((*(R11 *)rt_nil_check(p_S))).f_NAME)));
}
static void r_ASSIGN_STMT(R11 * p_S) { 
R11 * l_TG_1869; memset(&l_TG_1869, 0, sizeof l_TG_1869);
l_TG_1869 = ((*(R11 *)rt_nil_check(p_S))).f_A;
if ((((*(R11 *)rt_nil_check(l_TG_1869))).f_KIND == g_N_SUBSTR))
{
{
R18 l_B_1870; memset(&l_B_1870, 0, sizeof l_B_1870);
S_R18(&l_B_1870, r_EXPR(((*(R11 *)rt_nil_check(l_TG_1869))).f_A, NULL), 0);
if ((!(l_B_1870).f_LVAL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R14 *)rt_nil_check((l_B_1870).f_T))).f_KIND == g_T_ABS))
{
{
R19 * l_ARGS_1871; memset(&l_ARGS_1871, 0, sizeof l_ARGS_1871);
l_ARGS_1871 = r_NODE_ARG(((*(R11 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R11 *)rt_nil_check(l_TG_1869))).f_B, g_M_IN, r_NODE_ARG(((*(R11 *)rt_nil_check(l_TG_1869))).f_C, g_M_IN, r_VAL_ARG(l_B_1870, NULL))));
R13 * l_Y_1872; memset(&l_Y_1872, 0, sizeof l_Y_1872);
((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(l_ARGS_1871))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_1872 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_1871, ((*(R11 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_1872 == NULL))
{
((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(l_ARGS_1871))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_1872 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_1871, ((*(R11 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_1872 == NULL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_1872, l_ARGS_1871, ((*(R11 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R14 *)rt_nil_check((l_B_1870).f_T))).f_KIND == g_T_STR)) && (!(((*(R14 *)rt_nil_check((l_B_1870).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R18 l_V_1873; memset(&l_V_1873, 0, sizeof l_V_1873);
S_R18(&l_V_1873, r_EXPR(((*(R11 *)rt_nil_check(p_S))).f_B, (l_B_1870).f_T), 0);
if ((!(((*(R14 *)rt_nil_check((l_V_1873).f_T))).f_KIND == ((*(R14 *)rt_nil_check((l_B_1870).f_T))).f_KIND)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_1870).f_C, r_INT_EXPR(((*(R11 *)rt_nil_check(l_TG_1869))).f_B), r_INT_EXPR(((*(R11 *)rt_nil_check(l_TG_1869))).f_C), (l_V_1873).f_C));
}
}
return;
}
{
R18 l_LV_1874; memset(&l_LV_1874, 0, sizeof l_LV_1874);
S_R18(&l_LV_1874, r_EXPR(l_TG_1869, NULL), 0);
if ((!(l_LV_1874).f_LVAL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
r_CODE(r_STORE_CODE((l_LV_1874).f_T, (l_LV_1874).f_C, r_EXPR(((*(R11 *)rt_nil_check(p_S))).f_B, (l_LV_1874).f_T), ((*(R11 *)rt_nil_check(p_S))).f_LINE, (l_LV_1874).f_SELF));
}
}
static void r_WITH_STMT(R11 * p_S) { 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
{
R13 * l_Y_1875; memset(&l_Y_1875, 0, sizeof l_Y_1875);
l_Y_1875 = r_NEW_SYM(g_Y_VAR, ((*(R11 *)rt_nil_check(p_S))).f_NAME);
R18 l_V_1876; memset(&l_V_1876, 0, sizeof l_V_1876);
S_R18(&l_V_1876, r_EXPR(((*(R11 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R13 *)rt_nil_check(l_Y_1875))).f_T = (l_V_1876).f_T;
if ((((*(R11 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R7 l_CN_1877; memset(&l_CN_1877, 0, sizeof l_CN_1877);
S_R7(&l_CN_1877, r_NEW_OBJECT(l_Y_1875, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_1876).f_T))
{
r_CODE(r_INIT_CODE((l_V_1876).f_T, l_CN_1877));
}
r_CODE(r_ASSIGN_CODE((l_V_1876).f_T, l_CN_1877, (l_V_1876).f_C));
}
}
else
{
if ((!(l_V_1876).f_LVAL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R7 l_P_1878; memset(&l_P_1878, 0, sizeof l_P_1878);
S_R7(&l_P_1878, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_1876).f_T), l_P_1878, (l_V_1876).f_C));
S_R7(&((*(R13 *)rt_nil_check(l_Y_1875))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_1878), 0);
S_R7(&((*(R13 *)rt_nil_check(l_Y_1875))).f_FIELD, r_NO_TEXT(), 0);
((*(R13 *)rt_nil_check(l_Y_1875))).f_LEVEL = ((rt_int)0LL);
((*(R13 *)rt_nil_check(l_Y_1875))).f_OWNER = rt_neg(((rt_int)1LL));
}
}
r_DEFINE(l_Y_1875, ((*(R11 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R11 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R11 * p_S) { 
R11 * l_ARM_1879; memset(&l_ARM_1879, 0, sizeof l_ARM_1879);
l_ARM_1879 = ((*(R11 *)rt_nil_check(p_S))).f_B;
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R18 l_CH_1880; memset(&l_CH_1880, 0, sizeof l_CH_1880);
S_R18(&l_CH_1880, r_EXPR(((*(R11 *)rt_nil_check(p_S))).f_A, NULL), 0);
R14 * l_T_1881; memset(&l_T_1881, 0, sizeof l_T_1881);
l_T_1881 = r_REAL_TYPE((l_CH_1880).f_T);
R13 * l_BOUND_1882; memset(&l_BOUND_1882, 0, sizeof l_BOUND_1882);
l_BOUND_1882 = r_DISCRIMINATED(((*(R11 *)rt_nil_check(p_S))).f_A);
if (((((*(R14 *)rt_nil_check(l_T_1881))).f_KIND == g_T_STR) || (((*(R14 *)rt_nil_check(l_T_1881))).f_KIND == g_T_BITS)))
{
{
R7 l_TMP_1883; memset(&l_TMP_1883, 0, sizeof l_TMP_1883);
S_R7(&l_TMP_1883, r_NEW_NAME(rt_str("cs", 2)), 0);
R7 l_WORD_1884; memset(&l_WORD_1884, 0, sizeof l_WORD_1884);
S_R7(&l_WORD_1884, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_1883, (l_CH_1880).f_C));
for (;;) {
if ((l_ARM_1879 == NULL)) goto L_end1885;
{
{
R11 * l_L_1886; memset(&l_L_1886, 0, sizeof l_L_1886);
l_L_1886 = ((*(R11 *)rt_nil_check(l_ARM_1879))).f_A;
R7 l_COND_1887; memset(&l_COND_1887, 0, sizeof l_COND_1887);
S_R7(&l_COND_1887, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_1886 == NULL)) goto L_end1888;
{
S_R7(&l_COND_1887, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_1887, l_TMP_1883, (r_EXPR(l_L_1886, l_T_1881)).f_C), 0);
l_L_1886 = ((*(R11 *)rt_nil_check(l_L_1886))).f_NEXT;
}
} L_end1888: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_1884, l_COND_1887));
S_R7(&l_WORD_1884, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(l_ARM_1879))).f_B, ((*(R11 *)rt_nil_check(l_ARM_1879))).f_C);
}
l_ARM_1879 = ((*(R11 *)rt_nil_check(l_ARM_1879))).f_NEXT;
}
} L_end1885: ;
if ((!(((*(R11 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_1884, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(p_S))).f_C, ((*(R11 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if ((((!(((((*(R14 *)rt_nil_check(l_T_1881))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_T_1881))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R14 *)rt_nil_check(l_T_1881))).f_KIND == g_T_ENUM))) && (!(((*(R14 *)rt_nil_check(l_T_1881))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_1881));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_1880).f_C));
for (;;) {
if ((l_ARM_1879 == NULL)) goto L_end1889;
{
{
R11 * l_L_1890; memset(&l_L_1890, 0, sizeof l_L_1890);
l_L_1890 = ((*(R11 *)rt_nil_check(l_ARM_1879))).f_A;
R12 l_FIRST_1891; memset(&l_FIRST_1891, 0, sizeof l_FIRST_1891);
S_R12(&l_FIRST_1891, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_1890 == NULL)) goto L_end1892;
{
if ((((*(R11 *)rt_nil_check(l_L_1890))).f_KIND == g_N_RANGE))
{
{
R12 l_LO_1893; memset(&l_LO_1893, 0, sizeof l_LO_1893);
S_R12(&l_LO_1893, r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(l_L_1890))).f_A, l_T_1881), 0);
R12 l_HI_1894; memset(&l_HI_1894, 0, sizeof l_HI_1894);
S_R12(&l_HI_1894, r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(l_L_1890))).f_B, l_T_1881), 0);
rt_int l_A_1895; memset(&l_A_1895, 0, sizeof l_A_1895);
l_A_1895 = (l_LO_1893).f_V;
rt_int l_B_1896; memset(&l_B_1896, 0, sizeof l_B_1896);
l_B_1896 = (l_HI_1894).f_V;
if ((!(((l_LO_1893).f_OK && (l_HI_1894).f_OK))))
{
r_FAIL(((*(R11 *)rt_nil_check(l_L_1890))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R11 *)rt_nil_check(l_L_1890))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(l_L_1890))).f_IV == ((rt_int)3LL))))
{
l_A_1895 = rt_add(l_A_1895, ((rt_int)1LL));
}
if ((((*(R11 *)rt_nil_check(l_L_1890))).f_IV >= ((rt_int)2LL)))
{
l_B_1896 = rt_sub(l_B_1896, ((rt_int)1LL));
}
if ((!(l_FIRST_1891).f_OK))
{
S_R12(&l_FIRST_1891, r_SOME(l_A_1895), 0);
}
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_1895), r_NUM(l_B_1896)));
}
}
else
{
{
R12 l_M_1897; memset(&l_M_1897, 0, sizeof l_M_1897);
S_R12(&l_M_1897, r_ENUM_MANIFEST(l_L_1890, l_T_1881), 0);
if ((!(l_M_1897).f_OK))
{
r_FAIL(((*(R11 *)rt_nil_check(l_L_1890))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_1891).f_OK))
{
S_R12(&l_FIRST_1891, l_M_1897, 0);
}
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_1897).f_V)));
}
}
l_L_1890 = ((*(R11 *)rt_nil_check(l_L_1890))).f_NEXT;
}
} L_end1892: ;
if ((!(l_BOUND_1882 == NULL)))
{
{
R14 * l_SAVED_1898; memset(&l_SAVED_1898, 0, sizeof l_SAVED_1898);
l_SAVED_1898 = ((*(R13 *)rt_nil_check(l_BOUND_1882))).f_T;
((*(R13 *)rt_nil_check(l_BOUND_1882))).f_T = r_NARROW(l_SAVED_1898, ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_1891).f_V);
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(l_ARM_1879))).f_B, ((*(R11 *)rt_nil_check(l_ARM_1879))).f_C);
((*(R13 *)rt_nil_check(l_BOUND_1882))).f_T = l_SAVED_1898;
}
}
else
{
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(l_ARM_1879))).f_B, ((*(R11 *)rt_nil_check(l_ARM_1879))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_1879 = ((*(R11 *)rt_nil_check(l_ARM_1879))).f_NEXT;
}
} L_end1889: ;
if ((!(((*(R11 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODES(rt_str("default:", 8));
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(p_S))).f_C, ((*(R11 *)rt_nil_check(p_S))).f_D);
r_CODES(rt_str("break;", 6));
}
r_CODES(rt_str("}", 1));
}
}
static void r_CASE_ELEMENT(R11 * p_B, R11 * p_HANDLERS) { 
if ((p_HANDLERS == NULL))
{
r_OPEN_BODY(p_B);
}
else
{
r_GUARDED(NULL, p_B, p_HANDLERS);
}
}
static R13 * r_DISCRIMINATED(R11 * p_CH) { 
if ((!(((*(R11 *)rt_nil_check(p_CH))).f_KIND == g_N_FIELD)))
{
{ R13 * rv1899 = NULL;
return rv1899; }
}
if ((!(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R13 * rv1900 = NULL;
return rv1900; }
}
{
R13 * l_Y_1901; memset(&l_Y_1901, 0, sizeof l_Y_1901);
l_Y_1901 = r_LOOKUP(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_1901 == NULL))
{
{ R13 * rv1902 = NULL;
return rv1902; }
}
if ((!(((*(R13 *)rt_nil_check(l_Y_1901))).f_KIND == g_Y_VAR)))
{
{ R13 * rv1903 = NULL;
return rv1903; }
}
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R13 *)rt_nil_check(l_Y_1901))).f_T)))).f_KIND == g_T_REC)))
{
{ R13 * rv1904 = NULL;
return rv1904; }
}
{
R15 * l_F_1905; memset(&l_F_1905, 0, sizeof l_F_1905);
l_F_1905 = r_FIND_FIELD(r_REAL_TYPE(((*(R13 *)rt_nil_check(l_Y_1901))).f_T), ((*(R11 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_1905 == NULL))
{
{ R13 * rv1906 = NULL;
return rv1906; }
}
if ((!(((*(R15 *)rt_nil_check(l_F_1905))).f_KIND == ((rt_int)2LL))))
{
{ R13 * rv1907 = NULL;
return rv1907; }
}
}
{ R13 * rv1908 = l_Y_1901;
return rv1908; }
}
rt_raise(RT_X_INIT);
}
static R14 * r_NARROW(R14 * p_T, R7 p_TAGN, rt_int p_V) { 
R14 * l_N_1909; memset(&l_N_1909, 0, sizeof l_N_1909);
l_N_1909 = r_COPY_TYP(p_T);
R15 * l_F_1910; memset(&l_F_1910, 0, sizeof l_F_1910);
l_F_1910 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
R17 * l_A_1911; memset(&l_A_1911, 0, sizeof l_A_1911);
l_A_1911 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
R17 * l_HEAD_1912; memset(&l_HEAD_1912, 0, sizeof l_HEAD_1912);
l_HEAD_1912 = NULL;
R17 * l_TAIL_1913; memset(&l_TAIL_1913, 0, sizeof l_TAIL_1913);
l_TAIL_1913 = NULL;
for (;;) {
if ((l_F_1910 == NULL)) goto L_end1914;
{
if (((!(((*(R15 *)rt_nil_check(l_F_1910))).f_KIND == ((rt_int)0LL))) && (!(l_A_1911 == NULL))))
{
{
R17 * l_B_1915; memset(&l_B_1915, 0, sizeof l_B_1915);
l_B_1915 = ((R17 *)rt_alloc(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_B_1915)), (*(R17 *)rt_nil_check(l_A_1911)), 0);
((*(R17 *)rt_nil_check(l_B_1915))).f_NEXT = NULL;
if (r_TEQ(((*(R15 *)rt_nil_check(l_F_1910))).f_NAME, p_TAGN))
{
((*(R17 *)rt_nil_check(l_B_1915))).f_ANYARG = 0;
S_R12(&((*(R17 *)rt_nil_check(l_B_1915))).f_MLO, r_SOME(p_V), 0);
S_R7(&((*(R17 *)rt_nil_check(l_B_1915))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_1913 == NULL))
{
l_HEAD_1912 = l_B_1915;
}
else
{
((*(R17 *)rt_nil_check(l_TAIL_1913))).f_NEXT = l_B_1915;
}
l_TAIL_1913 = l_B_1915;
}
l_A_1911 = ((*(R17 *)rt_nil_check(l_A_1911))).f_NEXT;
}
l_F_1910 = ((*(R15 *)rt_nil_check(l_F_1910))).f_NEXT;
}
} L_end1914: ;
((*(R14 *)rt_nil_check(l_N_1909))).f_ARGS = l_HEAD_1912;
{ R14 * rv1916 = l_N_1909;
return rv1916; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R11 * p_S) { 
R11 * l_ARM_1917; memset(&l_ARM_1917, 0, sizeof l_ARM_1917);
l_ARM_1917 = ((*(R11 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_1918; memset(&l_SAVED_1918, 0, sizeof l_SAVED_1918);
l_SAVED_1918 = ((*(R22 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_1917 == NULL)) goto L_end1919;
{
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(l_ARM_1917))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R22 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(l_ARM_1917))).f_B, ((*(R11 *)rt_nil_check(l_ARM_1917))).f_C);
((*(R22 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_1918;
return;
}
l_ARM_1917 = ((*(R11 *)rt_nil_check(l_ARM_1917))).f_NEXT;
}
} L_end1919: ;
if ((!(((*(R11 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R22 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(p_S))).f_C, ((*(R11 *)rt_nil_check(p_S))).f_D);
((*(R22 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_1918;
}
}
static R14 * r_PATHS_TYPE(void) { 
R14 * l_T_1920; memset(&l_T_1920, 0, sizeof l_T_1920);
l_T_1920 = r_NEW_TYP(g_T_PATHS);
S_R7(&((*(R14 *)rt_nil_check(l_T_1920))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R14 * rv1921 = l_T_1920;
return rv1921; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R11 * p_S) { 
R7 l_TD_1922; memset(&l_TD_1922, 0, sizeof l_TD_1922);
S_R7(&l_TD_1922, r_NEW_NAME(rt_str("td", 2)), 0);
R11 * l_P_1923; memset(&l_P_1923, 0, sizeof l_P_1923);
l_P_1923 = ((*(R11 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_1923 == NULL)) goto L_end1924;
{
{
R13 * l_Y_1925; memset(&l_Y_1925, 0, sizeof l_Y_1925);
l_Y_1925 = r_NEW_SYM(g_Y_PATH, ((*(R11 *)rt_nil_check(l_P_1923))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_1925))).f_T = r_PATHS_TYPE();
((*(R13 *)rt_nil_check(l_Y_1925))).f_DECL = l_P_1923;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_1925, rt_str("_path", 5))));
((*(R13 *)rt_nil_check(l_Y_1925))).f_INPUT = 1;
r_DEFINE(l_Y_1925, ((*(R11 *)rt_nil_check(l_P_1923))).f_LINE);
}
l_P_1923 = ((*(R11 *)rt_nil_check(l_P_1923))).f_NEXT;
}
} L_end1924: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_1922));
r_CODES(rt_str("rt_b_par_begin();", 17));
l_P_1923 = ((*(R11 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_P_1923 == NULL)) goto L_end1926;
{
r_ACTIVATE_PATH(l_P_1923, l_TD_1922);
l_P_1923 = ((*(R11 *)rt_nil_check(l_P_1923))).f_NEXT;
}
} L_end1926: ;
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_1922));
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_ACTIVATE_PATH(R11 * p_P, R7 p_TD) { 
R7 l_FN_1927; memset(&l_FN_1927, 0, sizeof l_FN_1927);
S_R7(&l_FN_1927, r_NEW_NAME(rt_str("path_", 5)), 0);
R7 l_FT_1928; memset(&l_FT_1928, 0, sizeof l_FT_1928);
S_R7(&l_FT_1928, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R13 * l_Y_1929; memset(&l_Y_1929, 0, sizeof l_Y_1929);
l_Y_1929 = r_LOOKUP(((*(R11 *)rt_nil_check(p_P))).f_NAME);
R7 l_H_1930; memset(&l_H_1930, 0, sizeof l_H_1930);
S_R7(&l_H_1930, r_OBJ_ACCESS(l_Y_1929), 0);
R7 l_IT_1931; memset(&l_IT_1931, 0, sizeof l_IT_1931);
S_R7(&l_IT_1931, r_NEW_NAME(rt_str("pi", 2)), 0);
R7 l_PRIO_1932; memset(&l_PRIO_1932, 0, sizeof l_PRIO_1932);
S_R7(&l_PRIO_1932, r_MK(rt_str("0", 1)), 0);
R7 l_START_1933; memset(&l_START_1933, 0, sizeof l_START_1933);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_1928, l_FT_1928));
if ((!(((*(R11 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R7(&l_PRIO_1932, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R11 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R11 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R11 * l_R_1934; memset(&l_R_1934, 0, sizeof l_R_1934);
l_R_1934 = ((*(R11 *)rt_nil_check(p_P))).f_A;
R7 l_LO_1935; memset(&l_LO_1935, 0, sizeof l_LO_1935);
S_R7(&l_LO_1935, r_INT_EXPR(((*(R11 *)rt_nil_check(l_R_1934))).f_A), 0);
R7 l_HI_1936; memset(&l_HI_1936, 0, sizeof l_HI_1936);
S_R7(&l_HI_1936, r_INT_EXPR(((*(R11 *)rt_nil_check(l_R_1934))).f_B), 0);
if (((((*(R11 *)rt_nil_check(l_R_1934))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(l_R_1934))).f_IV == ((rt_int)3LL))))
{
S_R7(&l_LO_1935, r_FMT1(rt_str("(@) + 1", 7), l_LO_1935), 0);
}
if ((((*(R11 *)rt_nil_check(l_R_1934))).f_IV >= ((rt_int)2LL)))
{
S_R7(&l_HI_1936, r_FMT1(rt_str("(@) - 1", 7), l_HI_1936), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_1930, l_LO_1935, l_HI_1936));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_1931, l_H_1930, l_IT_1931, l_H_1930), l_IT_1931));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_1931));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_1928, r_UP_FRAME()));
if ((((*(R11 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_NAME, l_IT_1931));
}
if ((!(((*(R11 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R18 l_V_1937; memset(&l_V_1937, 0, sizeof l_V_1937);
S_R18(&l_V_1937, r_EXPR(((*(R11 *)rt_nil_check(p_P))).f_D, NULL), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1937).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_1937).f_C));
}
}
S_R7(&l_START_1933, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_1930, l_IT_1931, l_FN_1927, p_TD), 0);
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_1933, p_TD, l_PRIO_1932));
r_PATH_BODY(p_P, l_FN_1927, l_FT_1928);
}
static R7 r_UP_FRAME(void) { 
if ((((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R7 rv1938 = r_MK(rt_str("NULL", 4));
return rv1938; }
}
{ R7 rv1939 = r_MK(rt_str("F", 1));
return rv1939; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R11 * p_P, R7 p_FN, R7 p_FT) { 
R8 l_SAVED_CODE_1940; memset(&l_SAVED_CODE_1940, 0, sizeof l_SAVED_CODE_1940);
S_R8(&l_SAVED_CODE_1940, ((*(R22 *)rt_nil_check(g_W))).f_CODE, 0);
R21 * l_SAVED_CTXS_1941; memset(&l_SAVED_CTXS_1941, 0, sizeof l_SAVED_CTXS_1941);
l_SAVED_CTXS_1941 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
R27 * l_OUTER_1942; memset(&l_OUTER_1942, 0, sizeof l_OUTER_1942);
l_OUTER_1942 = ((*(R22 *)rt_nil_check(g_W))).f_CS;
R11 * l_H_1943; memset(&l_H_1943, 0, sizeof l_H_1943);
l_H_1943 = ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_A;
R27 * l_CS_1944; memset(&l_CS_1944, 0, sizeof l_CS_1944);
l_CS_1944 = ((R27 *)rt_alloc(sizeof (R27)));
R7 l_UPT_1945; memset(&l_UPT_1945, 0, sizeof l_UPT_1945);
S_R7(&l_UPT_1945, r_MK(rt_str("void", 4)), 0);
if ((((*(R27 *)rt_nil_check(l_OUTER_1942))).f_LEVEL > ((rt_int)0LL)))
{
S_R7(&l_UPT_1945, ((*(R27 *)rt_nil_check(l_OUTER_1942))).f_FTYPE, 0);
}
S_R27(&(*(R27 *)rt_nil_check(l_CS_1944)), ({ R27 rc1946; memset(&rc1946, 0, sizeof rc1946);  rc1946.f_LEVEL = rt_add(((*(R27 *)rt_nil_check(l_OUTER_1942))).f_LEVEL, ((rt_int)1LL)); rc1946.f_R = NULL; rc1946.f_FRAMED = 1; S_R7(&rc1946.f_FTYPE, p_FT, 0); S_R8(&rc1946.f_FIELDS, ({ R8 rc1947; memset(&rc1947, 0, sizeof rc1947);  rc1947.f_HEAD = NULL; rc1947.f_TAIL = NULL; rc1947; }), 0); rc1946.f_UP = l_OUTER_1942; rc1946.f_IMPORTS = ((*(R11 *)rt_nil_check(l_H_1943))).f_B; rc1946.f_SIGNALS = ((*(R11 *)rt_nil_check(l_H_1943))).f_A; rc1946.f_RESULT = NULL; rc1946.f_IS_PATH = 1; rc1946; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_1945), &((*(R27 *)rt_nil_check(l_CS_1944))).f_FIELDS);
((*(R22 *)rt_nil_check(g_W))).f_CS = l_CS_1944;
S_R8(&((*(R22 *)rt_nil_check(g_W))).f_CODE, ({ R8 rc1948; memset(&rc1948, 0, sizeof rc1948);  rc1948.f_HEAD = NULL; rc1948.f_TAIL = NULL; rc1948; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R11 *)rt_nil_check(l_H_1943))).f_B, ((*(R11 *)rt_nil_check(l_H_1943))).f_A, ((*(R11 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R11 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R13 * l_I_1949; memset(&l_I_1949, 0, sizeof l_I_1949);
l_I_1949 = r_NEW_SYM(g_Y_CONST, ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R13 *)rt_nil_check(l_I_1949))).f_T = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
((*(R13 *)rt_nil_check(l_I_1949))).f_INPUT = 1;
S_R7(&((*(R13 *)rt_nil_check(l_I_1949))).f_FIELD, r_FMT1(rt_str("l_@", 3), ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_NAME), 0);
S_R7(&((*(R13 *)rt_nil_check(l_I_1949))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_NAME), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_NAME), &((*(R27 *)rt_nil_check(l_CS_1944))).f_FIELDS);
r_DEFINE(l_I_1949, ((*(R11 *)rt_nil_check(p_P))).f_LINE);
}
}
r_CLOSED_BODY(((*(R11 *)rt_nil_check(p_P))).f_B);
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
r_EMIT(g_O_PROTOS, r_FMT1(rt_str("static void @(void *arg);", 25), p_FN));
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("static void @(void *arg) { @ *F = arg; (void)F;", 47), p_FN, p_FT));
r_EMIT(g_O_FUNCS, r_MK(rt_str("rt_frame pf; if (RT_TRY(pf)) {", 30)));
r_APPEND_BUF(((*(R22 *)rt_nil_check(g_W))).f_CODE, &(((*(R22 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R22 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMIT(g_O_FUNCS, r_MK(rt_str("RT_POP(pf); } else { RT_POP(pf); rt_b_path_failed(rt_xcur, ", 59)));
{
R11 * l_L_1950; memset(&l_L_1950, 0, sizeof l_L_1950);
l_L_1950 = ((*(R11 *)rt_nil_check(l_H_1943))).f_A;
R7 l_C_1951; memset(&l_C_1951, 0, sizeof l_C_1951);
S_R7(&l_C_1951, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_1950 == NULL)) goto L_end1952;
{
S_R7(&l_C_1951, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_1951, r_EXC_NAME(((*(R11 *)rt_nil_check(l_L_1950))).f_NAME)), 0);
l_L_1950 = ((*(R11 *)rt_nil_check(l_L_1950))).f_NEXT;
}
} L_end1952: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_1951));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R27 *)rt_nil_check(l_CS_1944))).f_FIELDS)));
((*(R22 *)rt_nil_check(g_W))).f_CS = l_OUTER_1942;
S_R8(&((*(R22 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1940, 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_1941;
}
static R7 r_JOIN_BUF(R8 p_B) { 
R9 * l_C_1953; memset(&l_C_1953, 0, sizeof l_C_1953);
l_C_1953 = (p_B).f_HEAD;
R7 l_R_1954; memset(&l_R_1954, 0, sizeof l_R_1954);
S_R7(&l_R_1954, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_1953 == NULL)) goto L_end1955;
{
S_R7(&l_R_1954, r_CAT(l_R_1954, ((*(R9 *)rt_nil_check(l_C_1953))).f_T), 0);
l_C_1953 = ((*(R9 *)rt_nil_check(l_C_1953))).f_NEXT;
}
} L_end1955: ;
{ R7 rv1956 = l_R_1954;
return rv1956; }
rt_raise(RT_X_INIT);
}
static R7 r_PATH_REF(R11 * p_E) { 
R7 l_NAME_1957; memset(&l_NAME_1957, 0, sizeof l_NAME_1957);
S_R7(&l_NAME_1957, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
R7 l_SUB_1958; memset(&l_SUB_1958, 0, sizeof l_SUB_1958);
S_R7(&l_SUB_1958, r_MK(rt_str("0", 1)), 0);
if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R11 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R7(&l_SUB_1958, r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R13 * l_Y_1959; memset(&l_Y_1959, 0, sizeof l_Y_1959);
l_Y_1959 = r_LOOKUP(l_NAME_1957);
if ((l_Y_1959 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_1957);
}
if ((!(((*(R13 *)rt_nil_check(l_Y_1959))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_1957);
}
if (((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_1959))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R7 rv1960 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_1959), l_SUB_1958);
return rv1960; }
}
rt_raise(RT_X_INIT);
}
static void r_TERMINATE_STMT(R11 * p_S) { 
if ((((*(R11 *)rt_nil_check(p_S))).f_A == NULL))
{
r_CODES(rt_str("rt_b_terminate(NULL);", 21));
}
else
{
r_CODE(r_FMT1(rt_str("rt_b_terminate(@);", 18), r_PATH_REF(((*(R11 *)rt_nil_check(p_S))).f_A)));
}
}
static R18 r_PARALLEL_BUILTIN(R11 * p_E, R14 * p_WANT) { 
R7 l_NAME_1961; memset(&l_NAME_1961, 0, sizeof l_NAME_1961);
S_R7(&l_NAME_1961, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1962; memset(&l_LINE_1962, 0, sizeof l_LINE_1962);
l_LINE_1962 = ((*(R11 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_1961, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R18 l_V_1963; memset(&l_V_1963, 0, sizeof l_V_1963);
S_R18(&l_V_1963, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1963).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_1962, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R18 rv1964 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_1963).f_C, r_NUM(((*(R14 *)rt_nil_check((l_V_1963).f_T))).f_SCALE)), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1964; }
}
}
else if (r_TEQS(l_NAME_1961, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R18 rv1965 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A)), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1965; }
}
{ R18 rv1966 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A)), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1966; }
}
else if (r_TEQS(l_NAME_1961, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R11 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R18 rv1967 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv1967; }
}
{ R18 rv1968 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R11 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv1968; }
}
else if ((r_TEQS(l_NAME_1961, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_1961, rt_str("RELEASE", 7))))
{
if ((((!(((*(R11 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R11 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R11 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_1962, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_1961);
}
{
R18 l_V_1969; memset(&l_V_1969, 0, sizeof l_V_1969);
S_R18(&l_V_1969, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1969).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_1962, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_1969).f_LVAL))
{
r_FAIL(l_LINE_1962, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_1961, rt_str("REQUEST", 7)))
{
{ R18 rv1970 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_1969).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1970; }
}
{ R18 rv1971 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_1969).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1971; }
}
}
else if (r_TEQS(l_NAME_1961, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_1962);
{ R18 rv1972 = r_START_IO_CALL(p_E);
return rv1972; }
}
r_FAILT(l_LINE_1962, rt_str("unknown routine ", 16), l_NAME_1961);
rt_raise(RT_X_INIT);
}
static R18 r_START_IO_CALL(R11 * p_E) { 
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("this implementation has no devices for START_IO yet", 51));
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R11 * p_IMPORTS, R11 * p_SIGNALS, R7 p_NAME) { 
R28 * l_I_1973; memset(&l_I_1973, 0, sizeof l_I_1973);
l_I_1973 = ((R28 *)rt_alloc(sizeof (R28)));
((*(R22 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R22 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R28(&(*(R28 *)rt_nil_check(l_I_1973)), ({ R28 rc1974; memset(&rc1974, 0, sizeof rc1974);  rc1974.f_ID = ((*(R22 *)rt_nil_check(g_W))).f_NSCOPES; rc1974.f_IMPORTS = p_IMPORTS; rc1974.f_SIGNALS = p_SIGNALS; S_R7(&rc1974.f_NAME, p_NAME, 0); rc1974.f_UP = ((*(R22 *)rt_nil_check(g_W))).f_IS; rc1974; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_IS = l_I_1973;
}
static void r_LEAVE_ISCOPE(void) { 
((*(R22 *)rt_nil_check(g_W))).f_IS = ((*(R28 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R7 r_ROUTINE_CNAME(R7 p_NAME) { 
R7 l_BASE_1975; memset(&l_BASE_1975, 0, sizeof l_BASE_1975);
S_R7(&l_BASE_1975, r_FMT1(rt_str("r_@", 3), p_NAME), 0);
rstr l_S_1976; memset(&l_S_1976, 0, sizeof l_S_1976);
l_S_1976 = rt_str_new((l_BASE_1975).f_LEN);
rt_b_assign(&l_S_1976, r_STR(l_BASE_1975, (l_BASE_1975).f_LEN));
R11 * l_N_1977; memset(&l_N_1977, 0, sizeof l_N_1977);
l_N_1977 = ((*(R22 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it1979_lo = ((rt_int)0LL), it1979_hi = rt_sub((l_BASE_1975).f_LEN, ((rt_int)1LL));
for (rt_int it1979 = it1979_lo; it1979 <= it1979_hi; it1979++) {
{
if (rt_b_eq(rt_b_slice(l_S_1976, it1979, it1979), rt_str("$", 1)))
{
S_R7(&l_BASE_1975, r_MK(rt_str_cat(rt_str_cat(rt_b_slice(l_S_1976, ((rt_int)0LL), rt_sub(it1979, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_1976, rt_add(it1979, ((rt_int)1LL)), rt_sub((l_BASE_1975).f_LEN, ((rt_int)1LL))))), 0);
}
}
} } L_end1978: ;
for (;;) {
if ((l_N_1977 == NULL)) goto L_end1980;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_N_1977))).f_NAME, l_BASE_1975))
{
{ R7 rv1981 = r_FMT2(rt_str("@_@", 3), l_BASE_1975, r_NEW_NAME(rt_str("", 0)));
return rv1981; }
}
l_N_1977 = ((*(R11 *)rt_nil_check(l_N_1977))).f_NEXT;
}
} L_end1980: ;
l_N_1977 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R7(&((*(R11 *)rt_nil_check(l_N_1977))).f_NAME, l_BASE_1975, 0);
((*(R11 *)rt_nil_check(l_N_1977))).f_NEXT = ((*(R22 *)rt_nil_check(g_W))).f_CNAMES;
((*(R22 *)rt_nil_check(g_W))).f_CNAMES = l_N_1977;
{ R7 rv1982 = l_BASE_1975;
return rv1982; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R11 * p_B) { 
if ((p_B == NULL))
{
{ rt_int rv1983 = 0;
return rv1983; }
}
if ((!(((*(R11 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv1984 = 1;
return rv1984; }
}
{ rt_int rv1985 = r_HAS_HANDLERS(((*(R11 *)rt_nil_check(p_B))).f_B);
return rv1985; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R11 * p_S0) { 
R11 * l_S_1986; memset(&l_S_1986, 0, sizeof l_S_1986);
l_S_1986 = p_S0;
for (;;) {
if ((l_S_1986 == NULL)) goto L_end1987;
{
if (((((*(R11 *)rt_nil_check(l_S_1986))).f_KIND == g_N_EXCEPT) || (((*(R11 *)rt_nil_check(l_S_1986))).f_KIND == g_N_PAR)))
{
{ rt_int rv1988 = 1;
return rv1988; }
}
if (((((*(R11 *)rt_nil_check(l_S_1986))).f_KIND == g_N_LABELED) || (((*(R11 *)rt_nil_check(l_S_1986))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R11 *)rt_nil_check(l_S_1986))).f_A) || r_HAS_HANDLERS(((*(R11 *)rt_nil_check(l_S_1986))).f_B)))
{
{ rt_int rv1989 = 1;
return rv1989; }
}
}
else if ((((*(R11 *)rt_nil_check(l_S_1986))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_S_1986))).f_A))).f_B))
{
{ rt_int rv1990 = 1;
return rv1990; }
}
}
else if (((((*(R11 *)rt_nil_check(l_S_1986))).f_KIND == g_N_LOOP) || (((*(R11 *)rt_nil_check(l_S_1986))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_S_1986))).f_B))).f_B))
{
{ rt_int rv1991 = 1;
return rv1991; }
}
}
else if (((((*(R11 *)rt_nil_check(l_S_1986))).f_KIND == g_N_IF) || (((*(R11 *)rt_nil_check(l_S_1986))).f_KIND == g_N_CASE)))
{
{
R11 * l_A_1992; memset(&l_A_1992, 0, sizeof l_A_1992);
l_A_1992 = ((*(R11 *)rt_nil_check(l_S_1986))).f_A;
if ((((*(R11 *)rt_nil_check(l_S_1986))).f_KIND == g_N_CASE))
{
l_A_1992 = ((*(R11 *)rt_nil_check(l_S_1986))).f_B;
if ((!(((*(R11 *)rt_nil_check(l_S_1986))).f_D == NULL)))
{
{ rt_int rv1993 = 1;
return rv1993; }
}
if ((!(((*(R11 *)rt_nil_check(l_S_1986))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_S_1986))).f_C))).f_B))
{
{ rt_int rv1994 = 1;
return rv1994; }
}
}
}
else if ((!(((*(R11 *)rt_nil_check(l_S_1986))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_S_1986))).f_B))).f_B))
{
{ rt_int rv1995 = 1;
return rv1995; }
}
}
for (;;) {
if ((l_A_1992 == NULL)) goto L_end1996;
{
if ((!(((*(R11 *)rt_nil_check(l_A_1992))).f_C == NULL)))
{
{ rt_int rv1997 = 1;
return rv1997; }
}
if (r_HAS_HANDLERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_1992))).f_B))).f_B))
{
{ rt_int rv1998 = 1;
return rv1998; }
}
l_A_1992 = ((*(R11 *)rt_nil_check(l_A_1992))).f_NEXT;
}
} L_end1996: ;
}
}
l_S_1986 = ((*(R11 *)rt_nil_check(l_S_1986))).f_NEXT;
}
} L_end1987: ;
{ rt_int rv1999 = 0;
return rv1999; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R11 * p_R) { 
R13 * l_Y_2000; memset(&l_Y_2000, 0, sizeof l_Y_2000);
l_Y_2000 = r_NEW_SYM(g_Y_ROUTINE, ((*(R11 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_2001; memset(&l_S_2001, 0, sizeof l_S_2001);
l_S_2001 = rt_str_new((((*(R11 *)rt_nil_check(p_R))).f_NAME).f_LEN);
rt_b_assign(&l_S_2001, r_STR(((*(R11 *)rt_nil_check(p_R))).f_NAME, (((*(R11 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R13 *)rt_nil_check(l_Y_2000))).f_DECL = p_R;
S_R7(&((*(R13 *)rt_nil_check(l_Y_2000))).f_ACCESS, r_ROUTINE_CNAME(((*(R11 *)rt_nil_check(p_R))).f_NAME), 0);
((*(R13 *)rt_nil_check(l_Y_2000))).f_FRAMED = r_NEEDS_FRAME(((*(R11 *)rt_nil_check(p_R))).f_C);
if ((((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R7(&((*(R13 *)rt_nil_check(l_Y_2000))).f_FIELD, ((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_2000, ((*(R11 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it2003_lo = ((rt_int)1LL), it2003_hi = rt_sub((((*(R11 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2003 = it2003_lo; it2003 <= it2003_hi; it2003++) {
{
if (rt_b_eq(rt_b_slice(l_S_2001, it2003, it2003), rt_str("$", 1)))
{
S_R7(&((*(R13 *)rt_nil_check(l_Y_2000))).f_PREFIX, r_MKN(rt_b_slice(l_S_2001, ((rt_int)0LL), rt_sub(it2003, ((rt_int)1LL)))), 0);
{
R13 * l_SHORT_2004; memset(&l_SHORT_2004, 0, sizeof l_SHORT_2004);
l_SHORT_2004 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_2001, rt_add(it2003, ((rt_int)1LL)), rt_sub((((*(R11 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R13 *)rt_nil_check(l_SHORT_2004))).f_ORIG = l_Y_2000;
S_R7(&((*(R13 *)rt_nil_check(l_SHORT_2004))).f_PREFIX, ((*(R13 *)rt_nil_check(l_Y_2000))).f_PREFIX, 0);
((*(R13 *)rt_nil_check(l_SHORT_2004))).f_DECL = p_R;
r_DEFINE(l_SHORT_2004, ((*(R11 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end2002;
}
}
} } L_end2002: ;
}
static void r_DECLARE_MEMBERS(R11 * p_RS) { 
R11 * l_R_2005; memset(&l_R_2005, 0, sizeof l_R_2005);
l_R_2005 = p_RS;
for (;;) {
if ((l_R_2005 == NULL)) goto L_end2006;
{
if ((((*(R11 *)rt_nil_check(l_R_2005))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_2005);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_2005);
}
l_R_2005 = ((*(R11 *)rt_nil_check(l_R_2005))).f_NEXT;
}
} L_end2006: ;
}
static void r_ROUTINE_HEADERS(R11 * p_RS) { 
R11 * l_R_2007; memset(&l_R_2007, 0, sizeof l_R_2007);
l_R_2007 = p_RS;
for (;;) {
if ((l_R_2007 == NULL)) goto L_end2008;
{
if ((((*(R11 *)rt_nil_check(l_R_2007))).f_KIND == g_N_MODULE))
{
{
R13 * l_M_2009; memset(&l_M_2009, 0, sizeof l_M_2009);
l_M_2009 = r_FIND_DECL(l_R_2007);
r_ENTER_MODULE(l_M_2009);
r_ROUTINE_HEADERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_2007))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2009);
}
}
else
{
{
R13 * l_Y_2010; memset(&l_Y_2010, 0, sizeof l_Y_2010);
l_Y_2010 = r_FIND_DECL(l_R_2007);
r_ROUTINE_HEADER(l_Y_2010);
}
}
l_R_2007 = ((*(R11 *)rt_nil_check(l_R_2007))).f_NEXT;
}
} L_end2008: ;
}
static R13 * r_FIND_DECL(R11 * p_D) { 
R13 * l_Y_2011; memset(&l_Y_2011, 0, sizeof l_Y_2011);
l_Y_2011 = r_LOOKUP(((*(R11 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_2011 == NULL)) goto L_end2012;
{
if (((((*(R13 *)rt_nil_check(l_Y_2011))).f_DECL == p_D) && (((*(R13 *)rt_nil_check(l_Y_2011))).f_ORIG == NULL)))
{
{ R13 * rv2013 = l_Y_2011;
return rv2013; }
}
l_Y_2011 = r_LOOKUP_NEXT(l_Y_2011);
}
} L_end2012: ;
r_FAILT(((*(R11 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R11 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R11 * p_DECLS) { 
R11 * l_D_2014; memset(&l_D_2014, 0, sizeof l_D_2014);
l_D_2014 = p_DECLS;
for (;;) {
if ((l_D_2014 == NULL)) goto L_end2015;
{
if (((((*(R11 *)rt_nil_check(l_D_2014))).f_KIND == g_N_TYPE) && (((*(R11 *)rt_nil_check(l_D_2014))).f_A == NULL)))
{
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_D_2014))).f_B))).f_KIND == g_TS_ENUM))
{
{
R13 * l_Y_2016; memset(&l_Y_2016, 0, sizeof l_Y_2016);
l_Y_2016 = r_FIND_DECL(l_D_2014);
R14 * l_T_2017; memset(&l_T_2017, 0, sizeof l_T_2017);
l_T_2017 = r_RESOLVE_USER(r_TYPE_REF(l_D_2014));
}
}
}
l_D_2014 = ((*(R11 *)rt_nil_check(l_D_2014))).f_NEXT;
}
} L_end2015: ;
}
static R11 * r_TYPE_REF(R11 * p_D) { 
R11 * l_TS_2018; memset(&l_TS_2018, 0, sizeof l_TS_2018);
l_TS_2018 = r_NEW_NODE(g_TS_NAME, ((*(R11 *)rt_nil_check(p_D))).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_TS_2018))).f_NAME, ((*(R11 *)rt_nil_check(p_D))).f_NAME, 0);
{ R11 * rv2019 = l_TS_2018;
return rv2019; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R11 * p_M) { 
R13 * l_Y_2020; memset(&l_Y_2020, 0, sizeof l_Y_2020);
l_Y_2020 = r_NEW_SYM(g_Y_MODULE, ((*(R11 *)rt_nil_check(p_M))).f_NAME);
R13 * l_SAVED_2021; memset(&l_SAVED_2021, 0, sizeof l_SAVED_2021);
l_SAVED_2021 = ((*(R22 *)rt_nil_check(g_W))).f_MODL;
((*(R13 *)rt_nil_check(l_Y_2020))).f_DECL = p_M;
r_DEFINE(l_Y_2020, ((*(R11 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R13 * l_MARK_2022; memset(&l_MARK_2022, 0, sizeof l_MARK_2022);
l_MARK_2022 = ((*(R22 *)rt_nil_check(g_W))).f_SCOPE;
((*(R22 *)rt_nil_check(g_W))).f_MODL = l_Y_2020;
r_DECLARE_TYPES(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R13 *)rt_nil_check(l_Y_2020))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2022);
}
((*(R22 *)rt_nil_check(g_W))).f_MODL = l_SAVED_2021;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_2020);
}
static void r_ENTER_MODULE(R13 * p_M) { 
R13 * l_Y_2023; memset(&l_Y_2023, 0, sizeof l_Y_2023);
l_Y_2023 = ((*(R13 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_2023 == NULL)) goto L_end2024;
{
{
R13 * l_NEXT_2025; memset(&l_NEXT_2025, 0, sizeof l_NEXT_2025);
l_NEXT_2025 = ((*(R13 *)rt_nil_check(l_Y_2023))).f_SNEXT;
r_DEFINE(l_Y_2023, ((rt_int)0LL));
l_Y_2023 = l_NEXT_2025;
}
}
} L_end2024: ;
((*(R13 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R13 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R13 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R13 *)rt_nil_check(p_M))).f_SAVED = ((*(R22 *)rt_nil_check(g_W))).f_MODL;
((*(R22 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R13 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R13 * p_M) { 
R13 * l_MARK_2026; memset(&l_MARK_2026, 0, sizeof l_MARK_2026);
l_MARK_2026 = ((*(R22 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R22 *)rt_nil_check(g_W))).f_MODL = ((*(R13 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_2026 == NULL)) goto L_end2027;
{
if ((((*(R13 *)rt_nil_check(l_MARK_2026))).f_DEPTH < ((*(R22 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2027;
}
l_MARK_2026 = ((*(R13 *)rt_nil_check(l_MARK_2026))).f_SNEXT;
}
} L_end2027: ;
((*(R13 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2026);
((*(R22 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
((*(R13 *)rt_nil_check(p_M))).f_BUSY = 0;
}
static void r_ENTER_MODULE_OF(R13 * p_G) { 
if ((!(((*(R13 *)rt_nil_check(p_G))).f_MODL == NULL)))
{
if (((!r_IN_MODULE(((*(R13 *)rt_nil_check(p_G))).f_MODL)) && (!((*(R13 *)rt_nil_check(((*(R13 *)rt_nil_check(p_G))).f_MODL))).f_BUSY)))
{
r_ENTER_MODULE(((*(R13 *)rt_nil_check(p_G))).f_MODL);
}
}
}
static void r_LEAVE_MODULE_OF(R13 * p_G) { 
if ((!(((*(R13 *)rt_nil_check(p_G))).f_MODL == NULL)))
{
if ((((((*(R22 *)rt_nil_check(g_W))).f_MODL == ((*(R13 *)rt_nil_check(p_G))).f_MODL) && ((*(R13 *)rt_nil_check(((*(R13 *)rt_nil_check(p_G))).f_MODL))).f_BUSY) && (((*(R22 *)rt_nil_check(g_W))).f_DEPTH == (((*(R13 *)rt_nil_check(((*(R13 *)rt_nil_check(p_G))).f_MODL))).f_FWD).f_H)))
{
r_LEAVE_MODULE(((*(R13 *)rt_nil_check(p_G))).f_MODL);
}
}
}
static void r_EXPORT_MODULE(R13 * p_M) { 
R11 * l_D_2028; memset(&l_D_2028, 0, sizeof l_D_2028);
l_D_2028 = ((*(R13 *)rt_nil_check(p_M))).f_DECL;
R13 * l_Y_2029; memset(&l_Y_2029, 0, sizeof l_Y_2029);
l_Y_2029 = ((*(R13 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2029 == NULL)) goto L_end2030;
{
if (r_EXPORTED_BY(l_D_2028, l_Y_2029))
{
((*(R13 *)rt_nil_check(l_Y_2029))).f_EXPORTED = 1;
{
R13 * l_A_2031; memset(&l_A_2031, 0, sizeof l_A_2031);
l_A_2031 = r_NEW_SYM(((*(R13 *)rt_nil_check(l_Y_2029))).f_KIND, ((*(R13 *)rt_nil_check(l_Y_2029))).f_NAME);
S_R13(&(*(R13 *)rt_nil_check(l_A_2031)), (*(R13 *)rt_nil_check(l_Y_2029)), 0);
((*(R13 *)rt_nil_check(l_A_2031))).f_ORIG = r_ORIGINAL(l_Y_2029);
((*(R13 *)rt_nil_check(l_A_2031))).f_DEPTH = ((*(R22 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_2031, ((*(R11 *)rt_nil_check(l_D_2028))).f_LINE);
}
}
l_Y_2029 = ((*(R13 *)rt_nil_check(l_Y_2029))).f_SNEXT;
}
} L_end2030: ;
{
R11 * l_X_2032; memset(&l_X_2032, 0, sizeof l_X_2032);
l_X_2032 = ((*(R11 *)rt_nil_check(l_D_2028))).f_B;
for (;;) {
if ((l_X_2032 == NULL)) goto L_end2033;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R11 *)rt_nil_check(l_X_2032))).f_NAME)))
{
r_FAILT(((*(R11 *)rt_nil_check(l_X_2032))).f_LINE, rt_str("the module does not declare ", 28), ((*(R11 *)rt_nil_check(l_X_2032))).f_NAME);
}
l_X_2032 = ((*(R11 *)rt_nil_check(l_X_2032))).f_NEXT;
}
} L_end2033: ;
}
}
static rt_int r_MEMBER_NAMED(R13 * p_M, R7 p_NAME) { 
R13 * l_Y_2034; memset(&l_Y_2034, 0, sizeof l_Y_2034);
l_Y_2034 = ((*(R13 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2034 == NULL)) goto L_end2035;
{
if ((r_TEQ(((*(R13 *)rt_nil_check(l_Y_2034))).f_NAME, p_NAME) || r_TEQ(((*(R13 *)rt_nil_check(l_Y_2034))).f_PREFIX, p_NAME)))
{
{ rt_int rv2036 = 1;
return rv2036; }
}
l_Y_2034 = ((*(R13 *)rt_nil_check(l_Y_2034))).f_SNEXT;
}
} L_end2035: ;
{ rt_int rv2037 = 0;
return rv2037; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R11 * p_D, R13 * p_Y) { 
R11 * l_X_2038; memset(&l_X_2038, 0, sizeof l_X_2038);
l_X_2038 = ((*(R11 *)rt_nil_check(p_D))).f_B;
if ((((((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv2039 = 0;
return rv2039; }
}
if ((((*(R11 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv2040 = ((((((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv2040; }
}
for (;;) {
if ((l_X_2038 == NULL)) goto L_end2041;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_X_2038))).f_NAME, ((*(R13 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2042 = 1;
return rv2042; }
}
if (((((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R11 *)rt_nil_check(l_X_2038))).f_NAME, ((*(R13 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R11 *)rt_nil_check(l_X_2038))).f_A == NULL))
{
{ rt_int rv2043 = 1;
return rv2043; }
}
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(l_X_2038))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv2044 = 1;
return rv2044; }
}
}
if ((((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R13 * l_T_2045; memset(&l_T_2045, 0, sizeof l_T_2045);
l_T_2045 = r_ORIG_LOOKUP_MEMBER(((*(R11 *)rt_nil_check(l_X_2038))).f_NAME, p_Y);
if ((!(l_T_2045 == NULL)))
{
{ rt_int rv2046 = 1;
return rv2046; }
}
}
}
l_X_2038 = ((*(R11 *)rt_nil_check(l_X_2038))).f_NEXT;
}
} L_end2041: ;
{ rt_int rv2047 = 0;
return rv2047; }
rt_raise(RT_X_INIT);
}
static R13 * r_ORIG_LOOKUP_MEMBER(R7 p_NAME, R13 * p_Y) { 
R13 * l_M_2048; memset(&l_M_2048, 0, sizeof l_M_2048);
l_M_2048 = ((*(R13 *)rt_nil_check(p_Y))).f_MODL;
R13 * l_Z_2049; memset(&l_Z_2049, 0, sizeof l_Z_2049);
if ((l_M_2048 == NULL))
{
{ R13 * rv2050 = NULL;
return rv2050; }
}
l_Z_2049 = ((*(R13 *)rt_nil_check(l_M_2048))).f_MEMBERS;
for (;;) {
if ((l_Z_2049 == NULL)) goto L_end2051;
{
if (((((*(R13 *)rt_nil_check(l_Z_2049))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R13 *)rt_nil_check(l_Z_2049))).f_NAME, p_NAME)))
{
if ((!(((*(R13 *)rt_nil_check(l_Z_2049))).f_T == NULL)))
{
if ((((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Z_2049))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Z_2049))).f_T))).f_BASE == ((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R13 * rv2052 = l_Z_2049;
return rv2052; }
}
}
}
}
l_Z_2049 = ((*(R13 *)rt_nil_check(l_Z_2049))).f_SNEXT;
}
} L_end2051: ;
{ R13 * rv2053 = NULL;
return rv2053; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R11 * p_RS) { 
R11 * l_R_2054; memset(&l_R_2054, 0, sizeof l_R_2054);
l_R_2054 = p_RS;
for (;;) {
if ((l_R_2054 == NULL)) goto L_end2055;
{
if ((((*(R11 *)rt_nil_check(l_R_2054))).f_KIND == g_N_MODULE))
{
{
R13 * l_M_2056; memset(&l_M_2056, 0, sizeof l_M_2056);
l_M_2056 = r_FIND_DECL(l_R_2054);
R11 * l_D_2057; memset(&l_D_2057, 0, sizeof l_D_2057);
l_D_2057 = ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_2054))).f_C))).f_A;
r_ENTER_MODULE(l_M_2056);
for (;;) {
if ((l_D_2057 == NULL)) goto L_end2058;
{
if (((((*(R11 *)rt_nil_check(l_D_2057))).f_KIND == g_N_VAR) || (((*(R11 *)rt_nil_check(l_D_2057))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2057);
}
l_D_2057 = ((*(R11 *)rt_nil_check(l_D_2057))).f_NEXT;
}
} L_end2058: ;
r_MODULE_DATA(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_2054))).f_C))).f_C);
r_ROUTINE_USES(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_2054))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2056);
}
}
l_R_2054 = ((*(R11 *)rt_nil_check(l_R_2054))).f_NEXT;
}
} L_end2055: ;
}
static void r_ROUTINE_BODIES(R11 * p_RS) { 
R11 * l_R_2059; memset(&l_R_2059, 0, sizeof l_R_2059);
l_R_2059 = p_RS;
for (;;) {
if ((l_R_2059 == NULL)) goto L_end2060;
{
if ((((*(R11 *)rt_nil_check(l_R_2059))).f_KIND == g_N_MODULE))
{
{
R13 * l_M_2061; memset(&l_M_2061, 0, sizeof l_M_2061);
l_M_2061 = r_FIND_DECL(l_R_2059);
r_ENTER_MODULE(l_M_2061);
r_ROUTINE_BODIES(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_2059))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2061);
}
}
else
{
{
R13 * l_Y_2062; memset(&l_Y_2062, 0, sizeof l_Y_2062);
l_Y_2062 = r_FIND_DECL(l_R_2059);
if ((!((*(R13 *)rt_nil_check(l_Y_2062))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_2062);
}
}
}
l_R_2059 = ((*(R11 *)rt_nil_check(l_R_2059))).f_NEXT;
}
} L_end2060: ;
}
static void r_PENDING_BODIES(void) { 
rt_int l_LEVEL_2063; memset(&l_LEVEL_2063, 0, sizeof l_LEVEL_2063);
l_LEVEL_2063 = r_CUR_LEVEL();
rt_int l_MORE_2064; memset(&l_MORE_2064, 0, sizeof l_MORE_2064);
l_MORE_2064 = 1;
for (;;) {
if ((!l_MORE_2064)) goto L_end2065;
{
l_MORE_2064 = 0;
{
R13 * l_P_2066; memset(&l_P_2066, 0, sizeof l_P_2066);
l_P_2066 = ((*(R22 *)rt_nil_check(g_W))).f_PENDING;
R13 * l_PREV_2067; memset(&l_PREV_2067, 0, sizeof l_PREV_2067);
l_PREV_2067 = NULL;
for (;;) {
if ((l_P_2066 == NULL)) goto L_end2068;
{
if ((((*(R13 *)rt_nil_check(l_P_2066))).f_LEVEL == l_LEVEL_2063))
{
if ((l_PREV_2067 == NULL))
{
((*(R22 *)rt_nil_check(g_W))).f_PENDING = ((*(R13 *)rt_nil_check(l_P_2066))).f_MEMBERS;
}
else
{
((*(R13 *)rt_nil_check(l_PREV_2067))).f_MEMBERS = ((*(R13 *)rt_nil_check(l_P_2066))).f_MEMBERS;
}
r_ENTER_MODULE_OF(l_P_2066);
r_ROUTINE_BODY(l_P_2066);
r_LEAVE_MODULE_OF(l_P_2066);
l_MORE_2064 = 1;
goto L_end2068;
}
l_PREV_2067 = l_P_2066;
l_P_2066 = ((*(R13 *)rt_nil_check(l_P_2066))).f_MEMBERS;
}
} L_end2068: ;
}
}
} L_end2065: ;
}
static void r_CLOSED_BODY(R11 * p_B) { 
R11 * l_D_2069; memset(&l_D_2069, 0, sizeof l_D_2069);
l_D_2069 = ((*(R11 *)rt_nil_check(p_B))).f_A;
R11 * l_S_2070; memset(&l_S_2070, 0, sizeof l_S_2070);
l_S_2070 = ((*(R11 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R11 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R11 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R11 *)rt_nil_check(p_B))).f_A);
r_ROUTINE_HEADERS(((*(R11 *)rt_nil_check(p_B))).f_C);
for (;;) {
if ((l_D_2069 == NULL)) goto L_end2071;
{
if (((((*(R11 *)rt_nil_check(l_D_2069))).f_KIND == g_N_VAR) || (((*(R11 *)rt_nil_check(l_D_2069))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2069);
}
l_D_2069 = ((*(R11 *)rt_nil_check(l_D_2069))).f_NEXT;
}
} L_end2071: ;
r_MODULE_DATA(((*(R11 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R11 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R11 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2070 == NULL)) goto L_end2072;
{
r_STMT(l_S_2070);
l_S_2070 = ((*(R11 *)rt_nil_check(l_S_2070))).f_NEXT;
}
} L_end2072: ;
r_ROUTINE_BODIES(((*(R11 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R13 * p_Y) { 
R11 * l_R_2073; memset(&l_R_2073, 0, sizeof l_R_2073);
l_R_2073 = ((*(R13 *)rt_nil_check(p_Y))).f_DECL;
R8 l_SAVED_CODE_2074; memset(&l_SAVED_CODE_2074, 0, sizeof l_SAVED_CODE_2074);
S_R8(&l_SAVED_CODE_2074, ((*(R22 *)rt_nil_check(g_W))).f_CODE, 0);
R21 * l_SAVED_CTXS_2075; memset(&l_SAVED_CTXS_2075, 0, sizeof l_SAVED_CTXS_2075);
l_SAVED_CTXS_2075 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
R16 * l_SAVED_BINDS_2076; memset(&l_SAVED_BINDS_2076, 0, sizeof l_SAVED_BINDS_2076);
l_SAVED_BINDS_2076 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
R27 * l_OUTER_2077; memset(&l_OUTER_2077, 0, sizeof l_OUTER_2077);
l_OUTER_2077 = ((*(R22 *)rt_nil_check(g_W))).f_CS;
R27 * l_CS_2078; memset(&l_CS_2078, 0, sizeof l_CS_2078);
l_CS_2078 = ((R27 *)rt_alloc(sizeof (R27)));
R7 l_PROLOGUE_2079; memset(&l_PROLOGUE_2079, 0, sizeof l_PROLOGUE_2079);
S_R7(&l_PROLOGUE_2079, r_MK(rt_str("", 0)), 0);
S_R27(&(*(R27 *)rt_nil_check(l_CS_2078)), ({ R27 rc2080; memset(&rc2080, 0, sizeof rc2080);  rc2080.f_LEVEL = rt_add(((*(R13 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc2080.f_R = p_Y; rc2080.f_FRAMED = ((*(R13 *)rt_nil_check(p_Y))).f_FRAMED; S_R7(&rc2080.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R13 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R8(&rc2080.f_FIELDS, ({ R8 rc2081; memset(&rc2081, 0, sizeof rc2081);  rc2081.f_HEAD = NULL; rc2081.f_TAIL = NULL; rc2081; }), 0); rc2080.f_UP = l_OUTER_2077; rc2080.f_IMPORTS = ((*(R11 *)rt_nil_check(l_R_2073))).f_E; rc2080.f_SIGNALS = ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_2073))).f_D))).f_A; rc2080.f_RESULT = ((*(R13 *)rt_nil_check(p_Y))).f_RESULT; rc2080.f_IS_PATH = 0; rc2080; }), 0);
if (((*(R13 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R27 *)rt_nil_check(l_CS_2078))).f_FTYPE, ((*(R27 *)rt_nil_check(l_CS_2078))).f_FTYPE));
if ((((*(R13 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R13 *)rt_nil_check(p_Y))).f_FIELD), &((*(R27 *)rt_nil_check(l_CS_2078))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R27 *)rt_nil_check(l_CS_2078))).f_FIELDS);
}
S_R7(&l_PROLOGUE_2079, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R27 *)rt_nil_check(l_CS_2078))).f_FTYPE, ((*(R27 *)rt_nil_check(l_CS_2078))).f_FTYPE), 0);
if ((((*(R13 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R7(&l_PROLOGUE_2079, r_CATS(l_PROLOGUE_2079, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R22 *)rt_nil_check(g_W))).f_CS = l_CS_2078;
S_R8(&((*(R22 *)rt_nil_check(g_W))).f_CODE, ({ R8 rc2082; memset(&rc2082, 0, sizeof rc2082);  rc2082.f_HEAD = NULL; rc2082.f_TAIL = NULL; rc2082; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R22 *)rt_nil_check(g_W))).f_BINDS = ((*(R13 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R11 *)rt_nil_check(l_R_2073))).f_E, ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_2073))).f_D))).f_A, ((*(R13 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R13 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R11 *)rt_nil_check(l_R_2073))).f_LINE);
{
R20 * l_P_2083; memset(&l_P_2083, 0, sizeof l_P_2083);
l_P_2083 = ((*(R13 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2083 == NULL)) goto L_end2084;
{
if ((!(((*(R20 *)rt_nil_check(l_P_2083))).f_T == NULL)))
{
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R20 *)rt_nil_check(l_P_2083))).f_T)))).f_KIND == g_T_VOID)))
{
{
R13 * l_V_2085; memset(&l_V_2085, 0, sizeof l_V_2085);
l_V_2085 = r_NEW_SYM(g_Y_VAR, ((*(R20 *)rt_nil_check(l_P_2083))).f_NAME);
((*(R13 *)rt_nil_check(l_V_2085))).f_T = ((*(R20 *)rt_nil_check(l_P_2083))).f_T;
((*(R13 *)rt_nil_check(l_V_2085))).f_INPUT = (((*(R20 *)rt_nil_check(l_P_2083))).f_MODE == g_M_IN);
((*(R13 *)rt_nil_check(l_V_2085))).f_BYREF = (!(((*(R20 *)rt_nil_check(l_P_2083))).f_MODE == g_M_IN));
S_R7(&((*(R13 *)rt_nil_check(l_V_2085))).f_FIELD, r_FMT1(rt_str("p_@", 3), ((*(R20 *)rt_nil_check(l_P_2083))).f_NAME), 0);
if (((*(R13 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R13 *)rt_nil_check(l_V_2085))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R20 *)rt_nil_check(l_P_2083))).f_T), ((*(R20 *)rt_nil_check(l_P_2083))).f_NAME), &((*(R27 *)rt_nil_check(l_CS_2078))).f_FIELDS);
S_R7(&((*(R13 *)rt_nil_check(l_V_2085))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), ((*(R20 *)rt_nil_check(l_P_2083))).f_NAME), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R20 *)rt_nil_check(l_P_2083))).f_T), ((*(R20 *)rt_nil_check(l_P_2083))).f_NAME), &((*(R27 *)rt_nil_check(l_CS_2078))).f_FIELDS);
S_R7(&((*(R13 *)rt_nil_check(l_V_2085))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), ((*(R20 *)rt_nil_check(l_P_2083))).f_NAME), 0);
}
S_R7(&l_PROLOGUE_2079, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_2079, ((*(R20 *)rt_nil_check(l_P_2083))).f_NAME, ((*(R20 *)rt_nil_check(l_P_2083))).f_NAME), 0);
}
else if (((*(R13 *)rt_nil_check(l_V_2085))).f_BYREF)
{
S_R7(&((*(R13 *)rt_nil_check(l_V_2085))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), ((*(R20 *)rt_nil_check(l_P_2083))).f_NAME), 0);
}
else
{
S_R7(&((*(R13 *)rt_nil_check(l_V_2085))).f_ACCESS, r_FMT1(rt_str("p_@", 3), ((*(R20 *)rt_nil_check(l_P_2083))).f_NAME), 0);
}
r_DEFINE(l_V_2085, ((*(R11 *)rt_nil_check(l_R_2073))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R20 *)rt_nil_check(l_P_2083))).f_T, ((*(R13 *)rt_nil_check(l_V_2085))).f_ACCESS, ((*(R11 *)rt_nil_check(l_R_2073))).f_LINE, 1);
}
}
}
l_P_2083 = ((*(R20 *)rt_nil_check(l_P_2083))).f_NEXT;
}
} L_end2084: ;
}
if ((((*(R11 *)rt_nil_check(l_R_2073))).f_FL >= ((rt_int)2LL)))
{
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R11 *)rt_nil_check(l_R_2073))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R11 *)rt_nil_check(l_R_2073))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R13 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R27 *)rt_nil_check(l_CS_2078))).f_FTYPE, r_JOIN_BUF(((*(R27 *)rt_nil_check(l_CS_2078))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { @", 5), ((*(R13 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_2079));
r_APPEND_BUF(((*(R22 *)rt_nil_check(g_W))).f_CODE, &(((*(R22 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R22 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R22 *)rt_nil_check(g_W))).f_CS = l_OUTER_2077;
S_R8(&((*(R22 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2074, 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2075;
((*(R22 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_2076;
}
static void r_BIND_INSTANCE(R16 * p_BS, rt_int p_LINE) { 
R16 * l_B_2086; memset(&l_B_2086, 0, sizeof l_B_2086);
l_B_2086 = p_BS;
for (;;) {
if ((l_B_2086 == NULL)) goto L_end2087;
{
if ((!(((*(R16 *)rt_nil_check(l_B_2086))).f_T == NULL)))
{
{
R13 * l_Y_2088; memset(&l_Y_2088, 0, sizeof l_Y_2088);
l_Y_2088 = r_NEW_SYM(g_Y_TYPE, ((*(R16 *)rt_nil_check(l_B_2086))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_2088))).f_T = ((*(R16 *)rt_nil_check(l_B_2086))).f_T;
r_DEFINE(l_Y_2088, p_LINE);
}
}
else if (((*(R16 *)rt_nil_check(l_B_2086))).f_HASMV)
{
{
R13 * l_Y_2089; memset(&l_Y_2089, 0, sizeof l_Y_2089);
l_Y_2089 = r_NEW_SYM(g_Y_GEN, ((*(R16 *)rt_nil_check(l_B_2086))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_2089))).f_T = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
((*(R13 *)rt_nil_check(l_Y_2089))).f_HASMV = 1;
((*(R13 *)rt_nil_check(l_Y_2089))).f_MV = ((*(R16 *)rt_nil_check(l_B_2086))).f_MV;
S_R7(&((*(R13 *)rt_nil_check(l_Y_2089))).f_ACCESS, ((*(R16 *)rt_nil_check(l_B_2086))).f_C, 0);
((*(R13 *)rt_nil_check(l_Y_2089))).f_INPUT = 1;
r_DEFINE(l_Y_2089, p_LINE);
}
}
l_B_2086 = ((*(R16 *)rt_nil_check(l_B_2086))).f_NEXT;
}
} L_end2087: ;
}
static void r_APPEND_BUF(R8 p_SRC, R8 *p_DST) { 
R9 * l_C_2090; memset(&l_C_2090, 0, sizeof l_C_2090);
l_C_2090 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_2090 == NULL)) goto L_end2091;
{
r_APPEND(((*(R9 *)rt_nil_check(l_C_2090))).f_T, &(*p_DST));
l_C_2090 = ((*(R9 *)rt_nil_check(l_C_2090))).f_NEXT;
}
} L_end2091: ;
}
static rt_int r_USES_SEGMENT(R11 * p_S, rstr p_NAME) { 
R11 * l_U_2092; memset(&l_U_2092, 0, sizeof l_U_2092);
l_U_2092 = ((*(R11 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2092 == NULL)) goto L_end2093;
{
if (r_TEQS(((*(R11 *)rt_nil_check(l_U_2092))).f_NAME, p_NAME))
{
{ rt_int rv2094 = 1;
return rv2094; }
}
l_U_2092 = ((*(R11 *)rt_nil_check(l_U_2092))).f_NEXT;
}
} L_end2093: ;
{ rt_int rv2095 = 0;
return rv2095; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R11 * p_SEGS) { 
R11 * l_S_2096; memset(&l_S_2096, 0, sizeof l_S_2096);
l_S_2096 = p_SEGS;
rt_int l_MAINS_2097; memset(&l_MAINS_2097, 0, sizeof l_MAINS_2097);
l_MAINS_2097 = ((rt_int)0LL);
R27 * l_ROOT_2098; memset(&l_ROOT_2098, 0, sizeof l_ROOT_2098);
l_ROOT_2098 = ((R27 *)rt_alloc(sizeof (R27)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R27(&(*(R27 *)rt_nil_check(l_ROOT_2098)), ({ R27 rc2099; memset(&rc2099, 0, sizeof rc2099);  rc2099.f_LEVEL = ((rt_int)0LL); rc2099.f_R = NULL; rc2099.f_FRAMED = 0; S_R7(&rc2099.f_FTYPE, r_NO_TEXT(), 0); S_R8(&rc2099.f_FIELDS, ({ R8 rc2100; memset(&rc2100, 0, sizeof rc2100);  rc2100.f_HEAD = NULL; rc2100.f_TAIL = NULL; rc2100; }), 0); rc2099.f_UP = NULL; rc2099.f_IMPORTS = NULL; rc2099.f_SIGNALS = NULL; rc2099.f_RESULT = NULL; rc2099.f_IS_PATH = 0; rc2099; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_CS = l_ROOT_2098;
((*(R22 *)rt_nil_check(g_W))).f_IS = NULL;
r_ENTER_ISCOPE(NULL, NULL, r_MK(rt_str("segment", 7)));
((*(R28 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_IS))).f_ID = ((rt_int)0LL);
((*(R22 *)rt_nil_check(g_W))).f_NSCOPES = ((rt_int)0LL);
r_EMITS(g_O_TYPEDEFS, rt_str("#include \"paleo.h\"", 18));
r_EMITS(g_O_TYPEDEFS, rt_str("#include <float.h>", 18));
r_EMITS(g_O_TYPEDEFS, rt_str("#include <math.h>", 17));
r_EMITS(g_O_TYPEDEFS, rt_str("#include <string.h>", 19));
r_EMITS(g_O_MAINHEAD, rt_str("int main(int argc, char **argv) {", 33));
r_EMITS(g_O_MAINHEAD, rt_str("rt_b_lang();", 12));
r_EMITS(g_O_MAINHEAD, rt_str("rt_init(argc, argv);", 20));
S_R8(&((*(R22 *)rt_nil_check(g_W))).f_CODE, ({ R8 rc2101; memset(&rc2101, 0, sizeof rc2101);  rc2101.f_HEAD = NULL; rc2101.f_TAIL = NULL; rc2101; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
if ((l_S_2096 == NULL)) goto L_end2102;
{
l_MAINS_2097 = rt_add(l_MAINS_2097, ((*(R11 *)rt_nil_check(l_S_2096))).f_IV);
if (((((*(R11 *)rt_nil_check(l_S_2096))).f_IV == ((rt_int)0LL)) && (!(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_S_2096))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R11 *)rt_nil_check(l_S_2096))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
if (r_USES_SEGMENT(l_S_2096, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
r_CLOSED_BODY(((*(R11 *)rt_nil_check(l_S_2096))).f_B);
r_SEGMENT_EXPORTS(l_S_2096);
l_S_2096 = ((*(R11 *)rt_nil_check(l_S_2096))).f_NEXT;
}
} L_end2102: ;
if ((!(l_MAINS_2097 == ((rt_int)1LL))))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R11 * l_X_2103; memset(&l_X_2103, 0, sizeof l_X_2103);
l_X_2103 = ((*(R22 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_2103 == NULL)) goto L_end2104;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), ((*(R11 *)rt_nil_check(l_X_2103))).f_NAME));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), ((*(R11 *)rt_nil_check(l_X_2103))).f_NAME, r_CSTRING(((*(R11 *)rt_nil_check(l_X_2103))).f_NAME)));
l_X_2103 = ((*(R11 *)rt_nil_check(l_X_2103))).f_NEXT;
}
} L_end2104: ;
}
r_APPEND_BUF(((*(R22 *)rt_nil_check(g_W))).f_CODE, &(((*(R22 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R22 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static void r_SEGMENT_EXPORTS(R11 * p_S) { 
R13 * l_MARK_2105; memset(&l_MARK_2105, 0, sizeof l_MARK_2105);
l_MARK_2105 = ((*(R22 *)rt_nil_check(g_W))).f_SCOPE;
R13 * l_TAKEN_2106; memset(&l_TAKEN_2106, 0, sizeof l_TAKEN_2106);
for (;;) {
if ((l_MARK_2105 == NULL)) goto L_end2107;
{
if ((((*(R13 *)rt_nil_check(l_MARK_2105))).f_DEPTH < ((*(R22 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2107;
}
l_MARK_2105 = ((*(R13 *)rt_nil_check(l_MARK_2105))).f_SNEXT;
}
} L_end2107: ;
l_TAKEN_2106 = r_TAKE_SCOPE(l_MARK_2105);
((*(R22 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((l_TAKEN_2106 == NULL)) goto L_end2108;
{
{
R13 * l_NEXT_2109; memset(&l_NEXT_2109, 0, sizeof l_NEXT_2109);
l_NEXT_2109 = ((*(R13 *)rt_nil_check(l_TAKEN_2106))).f_SNEXT;
if (((((((*(R11 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R11 *)rt_nil_check(p_S))).f_C, ((*(R13 *)rt_nil_check(l_TAKEN_2106))).f_NAME)) || r_IN_IDENTS(((*(R11 *)rt_nil_check(p_S))).f_C, ((*(R13 *)rt_nil_check(l_TAKEN_2106))).f_PREFIX)) || (((*(R13 *)rt_nil_check(l_TAKEN_2106))).f_KIND == g_Y_ENUMLIT)))
{
r_DEFINE(l_TAKEN_2106, ((*(R11 *)rt_nil_check(p_S))).f_LINE);
}
l_TAKEN_2106 = l_NEXT_2109;
}
}
} L_end2108: ;
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
g_W = ({ R22 *p = rt_alloc(sizeof *p);  (*p).f_ARENA = rt_str_new(((rt_int)64000000LL)); { (*p).f_SRC.lo[0] = ((rt_int)0LL); (*p).f_SRC.hi[0] = g_MAX_SOURCE; rt_int n = rt_b_extent(1, (*p).f_SRC.lo, (*p).f_SRC.hi); (*p).f_SRC.p = rt_alloc(sizeof *(*p).f_SRC.p * (size_t)(n ? n : 1)); } { (*p).f_TOKS.lo[0] = ((rt_int)0LL); (*p).f_TOKS.hi[0] = g_MAX_TOKENS; rt_int n = rt_b_extent(1, (*p).f_TOKS.lo, (*p).f_TOKS.hi); (*p).f_TOKS.p = rt_alloc(sizeof *(*p).f_TOKS.p * (size_t)(n ? n : 1)); } { (*p).f_TABLE.lo[0] = ((rt_int)0LL); (*p).f_TABLE.hi[0] = g_HASH_SIZE; rt_int n = rt_b_extent(1, (*p).f_TABLE.lo, (*p).f_TABLE.hi); (*p).f_TABLE.p = rt_alloc(sizeof *(*p).f_TABLE.p * (size_t)(n ? n : 1)); } { (*p).f_OUT.lo[0] = ((rt_int)0LL); (*p).f_OUT.hi[0] = g_O_LAST; rt_int n = rt_b_extent(1, (*p).f_OUT.lo, (*p).f_OUT.hi); (*p).f_OUT.p = rt_alloc(sizeof *(*p).f_OUT.p * (size_t)(n ? n : 1)); } p; });
r_READ_SOURCE();
r_LEX();
r_PREDEFINE();
r_TRANSLATE(r_PARSE_COMPILATION());
r_WRITE_OUTPUT();
rt_main_done();
return 0;
}
