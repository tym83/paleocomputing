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
static rt_int r_GENERIC_FITS(R20 * p_P, R19 * p_A);
static R13 * r_INSTANCE(R13 * p_G, R19 * p_ARGS, rt_int p_LINE);
static rt_int r_SAME_STATIC_BINDS(R16 * p_A, R16 * p_B);
static R13 * r_ROUTINE_ARGUMENT(R11 * p_TS, R11 * p_E, rt_int p_LINE);
static void r_WHERE_BINDINGS(R13 * p_G, rt_int p_LINE, R16 * p_BS);
static rt_int r_DONTCARE_TYPE_ARG(R11 * p_TS);
static R13 * r_NEW_INSTANCE(R13 * p_G, R16 * p_BS, R19 * p_ARGS);
static rt_int r_IS_OPERATOR_NAME(R7 p_NAME);
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
return rt_b_slice(g_GRAPHIC, rt_sub(p_C, ((rt_int)32LL)), rt_sub(p_C, ((rt_int)32LL)));
}
else if ((p_C == ((rt_int)9LL)))
{
return rt_str("\011", 1);
}
else if ((p_C == ((rt_int)10LL)))
{
return rt_str("\012", 1);
}
else if ((p_C == ((rt_int)13LL)))
{
return rt_str("\015", 1);
}
return rt_str("\?", 1);
rt_raise(RT_X_INIT);
}
static rt_int r_CODE_OF(rstr p_S) { 
{ rt_int it31_lo = ((rt_int)0LL), it31_hi = ((rt_int)94LL);
for (rt_int it31 = it31_lo; it31 <= it31_hi; it31++) {
{
if (rt_b_eq(rt_b_slice(g_GRAPHIC, it31, it31), p_S))
{
return rt_add(it31, ((rt_int)32LL));
}
}
} } L_end30: ;
if (rt_b_eq(p_S, rt_str("\011", 1)))
{
return ((rt_int)9LL);
}
else if (rt_b_eq(p_S, rt_str("\012", 1)))
{
return ((rt_int)10LL);
}
return ((rt_int)13LL);
rt_raise(RT_X_INIT);
}
static rt_int r_HASH_CODES(rt_int p_L, rt_int p_C1, rt_int p_C2, rt_int p_C3) { 
return rt_rem((rt_add(rt_add(rt_add(rt_mul(p_L, ((rt_int)31LL)), rt_mul(p_C1, ((rt_int)7LL))), rt_mul(p_C2, ((rt_int)3LL))), p_C3)), g_HASH_SIZE);
rt_raise(RT_X_INIT);
}
static rt_int r_HASH_OF(rstr p_S) { 
if (((rt_int)(p_S).len == ((rt_int)0LL)))
{
return ((rt_int)0LL);
}
return r_HASH_CODES((rt_int)(p_S).len, r_CODE_OF(rt_b_slice(p_S, ((rt_int)0LL), ((rt_int)0LL))), r_CODE_OF(rt_b_slice(p_S, rt_quot((rt_int)(p_S).len, ((rt_int)2LL)), rt_quot((rt_int)(p_S).len, ((rt_int)2LL)))), r_CODE_OF(rt_b_slice(p_S, rt_sub((rt_int)(p_S).len, ((rt_int)1LL)), rt_sub((rt_int)(p_S).len, ((rt_int)1LL)))));
rt_raise(RT_X_INIT);
}
static R7 r_MK(rstr p_S) { 
rt_int l_AT_32; memset(&l_AT_32, 0, sizeof l_AT_32);
l_AT_32 = ((*(R22 *)rt_nil_check(g_W))).f_TOP;
if ((rt_add(l_AT_32, (rt_int)(p_S).len) > g_ARENA_SIZE))
{
rt_putln(rt_str("*** the arena is full", 21));
rt_exit(((rt_int)2LL));
}
rt_b_slice_assign(&((*(R22 *)rt_nil_check(g_W))).f_ARENA, l_AT_32, rt_sub(rt_add(l_AT_32, (rt_int)(p_S).len), ((rt_int)1LL)), p_S);
((*(R22 *)rt_nil_check(g_W))).f_TOP = rt_add(l_AT_32, (rt_int)(p_S).len);
return ({ R7 rc33; memset(&rc33, 0, sizeof rc33);  rc33.f_AT = l_AT_32; rc33.f_LEN = (rt_int)(p_S).len; rc33.f_H = rt_neg(((rt_int)1LL)); rc33; });
rt_raise(RT_X_INIT);
}
static R7 r_MKN(rstr p_S) { 
R7 l_T_34; memset(&l_T_34, 0, sizeof l_T_34);
S_R7(&l_T_34, r_MK(p_S), 0);
(l_T_34).f_H = r_HASH_OF(p_S);
return l_T_34;
rt_raise(RT_X_INIT);
}
static rstr r_STR(R7 p_T, rt_int p_L) { 
return rt_b_slice(((*(R22 *)rt_nil_check(g_W))).f_ARENA, (p_T).f_AT, rt_sub(rt_add((p_T).f_AT, p_L), ((rt_int)1LL)));
rt_raise(RT_X_INIT);
}
static rt_int r_TEQ(R7 p_A, R7 p_B) { 
if ((!((p_A).f_LEN == (p_B).f_LEN)))
{
return 0;
}
return rt_b_eq(r_STR(p_A, (p_A).f_LEN), r_STR(p_B, (p_B).f_LEN));
rt_raise(RT_X_INIT);
}
static rt_int r_TEQS(R7 p_A, rstr p_S) { 
if ((!((p_A).f_LEN == (rt_int)(p_S).len)))
{
return 0;
}
return rt_b_eq(r_STR(p_A, (p_A).f_LEN), p_S);
rt_raise(RT_X_INIT);
}
static R7 r_CAT(R7 p_A, R7 p_B) { 
return r_MK(rt_str_cat(r_STR(p_A, (p_A).f_LEN), r_STR(p_B, (p_B).f_LEN)));
rt_raise(RT_X_INIT);
}
static R7 r_CATS(R7 p_A, rstr p_S) { 
return r_MK(rt_str_cat(r_STR(p_A, (p_A).f_LEN), p_S));
rt_raise(RT_X_INIT);
}
static R7 r_FMT4(rstr p_P, R7 p_A, R7 p_B, R7 p_C, R7 p_D) { 
rt_int l_AT_35; memset(&l_AT_35, 0, sizeof l_AT_35);
l_AT_35 = ((*(R22 *)rt_nil_check(g_W))).f_TOP;
rt_int l_N_36; memset(&l_N_36, 0, sizeof l_N_36);
l_N_36 = ((rt_int)0LL);
rt_int l_START_37; memset(&l_START_37, 0, sizeof l_START_37);
l_START_37 = ((rt_int)0LL);
R7 l_R_38; memset(&l_R_38, 0, sizeof l_R_38);
{ rt_int it40_lo = ((rt_int)0LL), it40_hi = rt_sub((rt_int)(p_P).len, ((rt_int)1LL));
for (rt_int it40 = it40_lo; it40 <= it40_hi; it40++) {
{
if (rt_b_eq(rt_b_slice(p_P, it40, it40), rt_str("@", 1)))
{
S_R7(&l_R_38, r_MK(rt_b_slice(p_P, l_START_37, rt_sub(it40, ((rt_int)1LL)))), 0);
switch (l_N_36) {
case 0:
{
S_R7(&l_R_38, r_MK(r_STR(p_A, (p_A).f_LEN)), 0);
}
break;
case 1:
{
S_R7(&l_R_38, r_MK(r_STR(p_B, (p_B).f_LEN)), 0);
}
break;
case 2:
{
S_R7(&l_R_38, r_MK(r_STR(p_C, (p_C).f_LEN)), 0);
}
break;
default:
{
S_R7(&l_R_38, r_MK(r_STR(p_D, (p_D).f_LEN)), 0);
}
break;
}
l_N_36 = rt_add(l_N_36, ((rt_int)1LL));
l_START_37 = rt_add(it40, ((rt_int)1LL));
}
}
} } L_end39: ;
S_R7(&l_R_38, r_MK(rt_b_slice(p_P, l_START_37, rt_sub((rt_int)(p_P).len, ((rt_int)1LL)))), 0);
return ({ R7 rc41; memset(&rc41, 0, sizeof rc41);  rc41.f_AT = l_AT_35; rc41.f_LEN = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_TOP, l_AT_35); rc41.f_H = rt_neg(((rt_int)1LL)); rc41; });
rt_raise(RT_X_INIT);
}
static R7 r_FMT1(rstr p_P, R7 p_A) { 
return r_FMT4(p_P, p_A, p_A, p_A, p_A);
rt_raise(RT_X_INIT);
}
static R7 r_FMT2(rstr p_P, R7 p_A, R7 p_B) { 
return r_FMT4(p_P, p_A, p_B, p_B, p_B);
rt_raise(RT_X_INIT);
}
static R7 r_FMT3(rstr p_P, R7 p_A, R7 p_B, R7 p_C) { 
return r_FMT4(p_P, p_A, p_B, p_C, p_C);
rt_raise(RT_X_INIT);
}
static R7 r_NUM(rt_int p_V) { 
return r_MK(rt_b_image(p_V));
rt_raise(RT_X_INIT);
}
static R7 r_NEW_NAME(rstr p_BASE) { 
((*(R22 *)rt_nil_check(g_W))).f_SERIAL = rt_add(((*(R22 *)rt_nil_check(g_W))).f_SERIAL, ((rt_int)1LL));
return r_MK(rt_str_cat(p_BASE, rt_b_image(((*(R22 *)rt_nil_check(g_W))).f_SERIAL)));
rt_raise(RT_X_INIT);
}
static void r_APPEND(R7 p_T, R8 *p_B) { 
R9 * l_C_42; memset(&l_C_42, 0, sizeof l_C_42);
l_C_42 = ((R9 *)rt_alloc(sizeof (R9)));
S_R7(&((*(R9 *)rt_nil_check(l_C_42))).f_T, p_T, 0);
((*(R9 *)rt_nil_check(l_C_42))).f_NEXT = NULL;
if ((((*p_B)).f_TAIL == NULL))
{
((*p_B)).f_HEAD = l_C_42;
}
else
{
((*(R9 *)rt_nil_check(((*p_B)).f_TAIL))).f_NEXT = l_C_42;
}
((*p_B)).f_TAIL = l_C_42;
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
R9 * l_C_43; memset(&l_C_43, 0, sizeof l_C_43);
l_C_43 = (p_B).f_HEAD;
for (;;) {
if ((l_C_43 == NULL)) goto L_end44;
{
{
R7 l_T_45; memset(&l_T_45, 0, sizeof l_T_45);
S_R7(&l_T_45, ((*(R9 *)rt_nil_check(l_C_43))).f_T, 0);
rt_putln(r_STR(l_T_45, (l_T_45).f_LEN));
}
l_C_43 = ((*(R9 *)rt_nil_check(l_C_43))).f_NEXT;
}
} L_end44: ;
}
static void r_WRITE_OUTPUT(void) { 
{ rt_int it47_lo = ((rt_int)0LL), it47_hi = g_O_LAST;
for (rt_int it47 = it47_lo; it47 <= it47_hi; it47++) {
{
r_PUT_BUF((((*(R22 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(it47, (((*(R22 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
}
} } L_end46: ;
}
static void r_FAIL(rt_int p_LINE, rstr p_MSG) { 
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("line ", 5), rt_b_image(p_LINE)), rt_str(": ", 2)), p_MSG));
rt_exit(((rt_int)1LL));
}
static void r_FAILT(rt_int p_LINE, rstr p_MSG, R7 p_T) { 
r_FAIL(p_LINE, rt_str_cat(p_MSG, r_STR(p_T, (p_T).f_LEN)));
}
static void r_READ_SOURCE(void) { 
rt_int l_C_48; memset(&l_C_48, 0, sizeof l_C_48);
l_C_48 = rt_b_get_code();
for (;;) {
if ((l_C_48 < ((rt_int)0LL))) goto L_end49;
{
if ((((*(R22 *)rt_nil_check(g_W))).f_NSRC >= g_MAX_SOURCE))
{
r_FAIL(((rt_int)0LL), rt_str("the source is too long", 22));
}
(((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R22 *)rt_nil_check(g_W))).f_NSRC, (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])] = l_C_48;
((*(R22 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R22 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
l_C_48 = rt_b_get_code();
}
} L_end49: ;
(((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R22 *)rt_nil_check(g_W))).f_NSRC, (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])] = ((rt_int)0LL);
}
static rt_int r_AT_SRC(rt_int p_I) { 
if ((p_I >= ((*(R22 *)rt_nil_check(g_W))).f_NSRC))
{
return ((rt_int)0LL);
}
return (((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(p_I, (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])];
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LETTER(rt_int p_C) { 
return ({ rt_int iv50 = p_C; (((rt_int)65LL)) <= iv50 && iv50 <= (((rt_int)90LL)); });
rt_raise(RT_X_INIT);
}
static rt_int r_IS_DIGIT(rt_int p_C) { 
return ({ rt_int iv51 = p_C; (((rt_int)48LL)) <= iv51 && iv51 <= (((rt_int)57LL)); });
rt_raise(RT_X_INIT);
}
static rt_int r_IS_IDCHAR(rt_int p_C) { 
return ((r_IS_LETTER(p_C) || r_IS_DIGIT(p_C)) || (p_C == ((rt_int)95LL)));
rt_raise(RT_X_INIT);
}
static R7 r_SOURCE_TEXT(rt_int p_FIRST, rt_int p_BEYOND) { 
rt_int l_AT_52; memset(&l_AT_52, 0, sizeof l_AT_52);
l_AT_52 = ((*(R22 *)rt_nil_check(g_W))).f_TOP;
rt_int l_L_53; memset(&l_L_53, 0, sizeof l_L_53);
l_L_53 = rt_sub(p_BEYOND, p_FIRST);
R7 l_T_54; memset(&l_T_54, 0, sizeof l_T_54);
if ((rt_add(l_AT_52, l_L_53) > g_ARENA_SIZE))
{
r_FAIL(((rt_int)0LL), rt_str("the arena is full", 17));
}
{ rt_int it56_lo = p_FIRST, it56_hi = rt_sub(p_BEYOND, ((rt_int)1LL));
for (rt_int it56 = it56_lo; it56 <= it56_hi; it56++) {
{
rt_b_slice_assign(&((*(R22 *)rt_nil_check(g_W))).f_ARENA, ((*(R22 *)rt_nil_check(g_W))).f_TOP, ((*(R22 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(it56, (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])]));
((*(R22 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R22 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
}
} } L_end55: ;
S_R7(&l_T_54, ({ R7 rc57; memset(&rc57, 0, sizeof rc57);  rc57.f_AT = l_AT_52; rc57.f_LEN = l_L_53; rc57.f_H = ((rt_int)0LL); rc57; }), 0);
if ((l_L_53 > ((rt_int)0LL)))
{
(l_T_54).f_H = r_HASH_CODES(l_L_53, (((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(p_FIRST, (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])], (((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(rt_add(p_FIRST, rt_quot(l_L_53, ((rt_int)2LL))), (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])], (((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(rt_sub(p_BEYOND, ((rt_int)1LL)), (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])]);
}
return l_T_54;
rt_raise(RT_X_INIT);
}
static rt_int r_IS_RESERVED(R7 p_T) { 
rstr l_WORDS_58; memset(&l_WORDS_58, 0, sizeof l_WORDS_58);
l_WORDS_58 = rt_str_new(((rt_int)290LL));
rt_b_assign(&l_WORDS_58, rt_str(" AND ANY ARRAY ASSERT BIN BLOCK CONST DO ELSE END EXCEPT EXIT FALSE FOR FROM FUNCTION GO HEX IF IN INLINE LOOP MAIN MOD MODULE NAMING NEEDS NIL NOT OCT OF OR ORIF PAR_BLOCK PATH PROCEDURE RECORD REP RETURN SEGMENT SELECT SIGNAL TAG TERMINATE THEN TO TRUE TYPE UNTIL VAR WHEN WHERE WITH XOR ", 290));
rt_int l_L_59; memset(&l_L_59, 0, sizeof l_L_59);
l_L_59 = (p_T).f_LEN;
{ rt_int it61_lo = ((rt_int)0LL), it61_hi = rt_sub(rt_sub(((rt_int)290LL), l_L_59), ((rt_int)2LL));
for (rt_int it61 = it61_lo; it61 <= it61_hi; it61++) {
{
if (rt_b_eq(rt_b_slice(l_WORDS_58, it61, it61), rt_str(" ", 1)))
{
if (rt_b_eq(rt_b_slice(l_WORDS_58, rt_add(rt_add(it61, l_L_59), ((rt_int)1LL)), rt_add(rt_add(it61, l_L_59), ((rt_int)1LL))), rt_str(" ", 1)))
{
if (rt_b_eq(rt_b_slice(l_WORDS_58, rt_add(it61, ((rt_int)1LL)), rt_add(it61, l_L_59)), r_STR(p_T, l_L_59)))
{
return 1;
}
}
}
}
} } L_end60: ;
return 0;
rt_raise(RT_X_INIT);
}
static void r_ADD_TOKEN(rt_int p_KIND, rt_int p_LINE, rt_int p_IV, R7 p_TX) { 
if ((((*(R22 *)rt_nil_check(g_W))).f_NTOKS >= g_MAX_TOKENS))
{
r_FAIL(p_LINE, rt_str("too many tokens", 15));
}
S_R10(&(((*(R22 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R22 *)rt_nil_check(g_W))).f_NTOKS, (((*(R22 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TOKS).hi[0])], ({ R10 rc62; memset(&rc62, 0, sizeof rc62);  rc62.f_KIND = p_KIND; rc62.f_LINE = p_LINE; rc62.f_IV = p_IV; S_R7(&rc62.f_TX, p_TX, 0); rc62; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_NTOKS = rt_add(((*(R22 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL));
}
static rt_int r_SYMBOL_LENGTH(rt_int p_I) { 
rt_int l_C_63; memset(&l_C_63, 0, sizeof l_C_63);
l_C_63 = r_AT_SRC(p_I);
rt_int l_D_64; memset(&l_D_64, 0, sizeof l_D_64);
l_D_64 = r_AT_SRC(rt_add(p_I, ((rt_int)1LL)));
if ((((l_C_63 == ((rt_int)45LL)) && (l_D_64 == ((rt_int)45LL))) && (r_AT_SRC(rt_add(p_I, ((rt_int)2LL))) == ((rt_int)62LL))))
{
return ((rt_int)3LL);
}
if ((((((((((((l_C_63 == ((rt_int)58LL)) && (l_D_64 == ((rt_int)61LL)))) || (((l_C_63 == ((rt_int)45LL)) && (l_D_64 == ((rt_int)62LL))))) || (((l_C_63 == ((rt_int)60LL)) && (l_D_64 == ((rt_int)61LL))))) || (((l_C_63 == ((rt_int)62LL)) && (l_D_64 == ((rt_int)61LL))))) || (((l_C_63 == ((rt_int)60LL)) && (l_D_64 == ((rt_int)62LL))))) || (((l_C_63 == ((rt_int)42LL)) && (l_D_64 == ((rt_int)42LL))))) || (((l_C_63 == ((rt_int)47LL)) && (l_D_64 == ((rt_int)47LL))))) || (((l_C_63 == ((rt_int)36LL)) && (l_D_64 == ((rt_int)36LL))))) || (((l_C_63 == ((rt_int)33LL)) && (l_D_64 == ((rt_int)33LL))))))
{
return ((rt_int)2LL);
}
return ((rt_int)1LL);
rt_raise(RT_X_INIT);
}
static void r_LEX(void) { 
rt_int l_I_65; memset(&l_I_65, 0, sizeof l_I_65);
l_I_65 = ((rt_int)0LL);
rt_int l_LINE_66; memset(&l_LINE_66, 0, sizeof l_LINE_66);
l_LINE_66 = ((rt_int)1LL);
rt_int l_C_67; memset(&l_C_67, 0, sizeof l_C_67);
rt_int l_J_68; memset(&l_J_68, 0, sizeof l_J_68);
rt_int l_V_69; memset(&l_V_69, 0, sizeof l_V_69);
for (;;) {
if ((l_I_65 >= ((*(R22 *)rt_nil_check(g_W))).f_NSRC)) goto L_end70;
{
l_C_67 = (((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_65, (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])];
if ((l_C_67 == ((rt_int)10LL)))
{
l_LINE_66 = rt_add(l_LINE_66, ((rt_int)1LL));
l_I_65 = rt_add(l_I_65, ((rt_int)1LL));
}
else if (((((l_C_67 == ((rt_int)32LL)) || (l_C_67 == ((rt_int)9LL))) || (l_C_67 == ((rt_int)13LL))) || (l_C_67 == ((rt_int)12LL))))
{
l_I_65 = rt_add(l_I_65, ((rt_int)1LL));
}
else if ((l_C_67 == ((rt_int)37LL)))
{
l_I_65 = rt_add(l_I_65, ((rt_int)1LL));
for (;;) {
if ((((l_I_65 >= ((*(R22 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_65, (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)37LL))) || ((((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_65, (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)10LL)))) goto L_end71;
{
l_I_65 = rt_add(l_I_65, ((rt_int)1LL));
}
} L_end71: ;
if ((r_AT_SRC(l_I_65) == ((rt_int)37LL)))
{
l_I_65 = rt_add(l_I_65, ((rt_int)1LL));
}
}
else if ((l_C_67 == ((rt_int)39LL)))
{
{
rt_int l_AT_72; memset(&l_AT_72, 0, sizeof l_AT_72);
l_AT_72 = ((*(R22 *)rt_nil_check(g_W))).f_TOP;
l_I_65 = rt_add(l_I_65, ((rt_int)1LL));
for (;;) {
{
if (((l_I_65 >= ((*(R22 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_65, (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)10LL))))
{
r_FAIL(l_LINE_66, rt_str("a string must end on its line", 29));
}
if (((((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_65, (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)39LL)))
{
if ((!(r_AT_SRC(rt_add(l_I_65, ((rt_int)1LL))) == ((rt_int)39LL))))
{
l_I_65 = rt_add(l_I_65, ((rt_int)1LL));
goto L_end73;
}
l_I_65 = rt_add(l_I_65, ((rt_int)1LL));
}
rt_b_slice_assign(&((*(R22 *)rt_nil_check(g_W))).f_ARENA, ((*(R22 *)rt_nil_check(g_W))).f_TOP, ((*(R22 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R22 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_65, (((*(R22 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_SRC).hi[0])]));
((*(R22 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R22 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
l_I_65 = rt_add(l_I_65, ((rt_int)1LL));
}
} L_end73: ;
r_ADD_TOKEN(g_K_STR, l_LINE_66, ((rt_int)0LL), ({ R7 rc74; memset(&rc74, 0, sizeof rc74);  rc74.f_AT = l_AT_72; rc74.f_LEN = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_TOP, l_AT_72); rc74.f_H = rt_neg(((rt_int)1LL)); rc74; }));
}
}
else if ((l_C_67 == ((rt_int)92LL)))
{
l_J_68 = rt_add(l_I_65, ((rt_int)1LL));
if (((((r_AT_SRC(l_J_68) == ((rt_int)39LL)) && (r_AT_SRC(rt_add(l_J_68, ((rt_int)1LL))) == ((rt_int)39LL))) && (r_AT_SRC(rt_add(l_J_68, ((rt_int)2LL))) == ((rt_int)39LL))) && (r_AT_SRC(rt_add(l_J_68, ((rt_int)3LL))) == ((rt_int)39LL))))
{
l_J_68 = rt_add(l_I_65, ((rt_int)5LL));
}
else if (((r_AT_SRC(l_J_68) == ((rt_int)39LL)) && (r_AT_SRC(rt_add(l_J_68, ((rt_int)2LL))) == ((rt_int)39LL))))
{
l_J_68 = rt_add(l_I_65, ((rt_int)4LL));
}
else if (((r_AT_SRC(l_J_68) == ((rt_int)91LL)) || (r_AT_SRC(l_J_68) == ((rt_int)93LL))))
{
l_J_68 = rt_add(l_I_65, ((rt_int)2LL));
}
else
{
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_68)))) goto L_end75;
{
l_J_68 = rt_add(l_J_68, ((rt_int)1LL));
}
} L_end75: ;
if ((l_J_68 == rt_add(l_I_65, ((rt_int)1LL))))
{
r_FAIL(l_LINE_66, rt_str("a stray backslash", 17));
}
}
r_ADD_TOKEN(g_K_ENUM, l_LINE_66, ((rt_int)0LL), r_SOURCE_TEXT(l_I_65, l_J_68));
l_I_65 = l_J_68;
}
else if ((l_C_67 == ((rt_int)63LL)))
{
l_J_68 = rt_add(l_I_65, ((rt_int)1LL));
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_68)))) goto L_end76;
{
l_J_68 = rt_add(l_J_68, ((rt_int)1LL));
}
} L_end76: ;
r_ADD_TOKEN(g_K_GEN, l_LINE_66, ((rt_int)0LL), r_SOURCE_TEXT(l_I_65, l_J_68));
l_I_65 = l_J_68;
}
else if (r_IS_LETTER(l_C_67))
{
l_J_68 = l_I_65;
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_68)))) goto L_end77;
{
l_J_68 = rt_add(l_J_68, ((rt_int)1LL));
}
} L_end77: ;
{
R7 l_T_78; memset(&l_T_78, 0, sizeof l_T_78);
S_R7(&l_T_78, r_SOURCE_TEXT(l_I_65, l_J_68), 0);
if (r_IS_RESERVED(l_T_78))
{
r_ADD_TOKEN(g_K_RES, l_LINE_66, ((rt_int)0LL), l_T_78);
}
else
{
r_ADD_TOKEN(g_K_ID, l_LINE_66, ((rt_int)0LL), l_T_78);
}
}
l_I_65 = l_J_68;
}
else if ((r_IS_DIGIT(l_C_67) || (((l_C_67 == ((rt_int)46LL)) && r_IS_DIGIT(r_AT_SRC(rt_add(l_I_65, ((rt_int)1LL))))))))
{
{
rt_int l_KIND_79; memset(&l_KIND_79, 0, sizeof l_KIND_79);
l_KIND_79 = g_K_NUM;
rt_int l_SCALE_80; memset(&l_SCALE_80, 0, sizeof l_SCALE_80);
l_SCALE_80 = ((rt_int)0LL);
rt_int l_NEG_81; memset(&l_NEG_81, 0, sizeof l_NEG_81);
l_NEG_81 = 0;
l_J_68 = l_I_65;
l_V_69 = ((rt_int)0LL);
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_68)))) goto L_end82;
{
if ((l_V_69 < ((rt_int)100000000000000000LL)))
{
l_V_69 = rt_sub(rt_add(rt_mul(l_V_69, ((rt_int)10LL)), r_AT_SRC(l_J_68)), ((rt_int)48LL));
}
l_J_68 = rt_add(l_J_68, ((rt_int)1LL));
}
} L_end82: ;
if ((r_AT_SRC(l_J_68) == ((rt_int)46LL)))
{
l_KIND_79 = g_K_REAL;
l_J_68 = rt_add(l_J_68, ((rt_int)1LL));
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_68)))) goto L_end83;
{
l_J_68 = rt_add(l_J_68, ((rt_int)1LL));
}
} L_end83: ;
}
if (((r_AT_SRC(l_J_68) == ((rt_int)69LL)) && ((r_IS_DIGIT(r_AT_SRC(rt_add(l_J_68, ((rt_int)1LL)))) || (((((r_AT_SRC(rt_add(l_J_68, ((rt_int)1LL))) == ((rt_int)43LL)) || (r_AT_SRC(rt_add(l_J_68, ((rt_int)1LL))) == ((rt_int)45LL)))) && r_IS_DIGIT(r_AT_SRC(rt_add(l_J_68, ((rt_int)2LL))))))))))
{
l_KIND_79 = g_K_REAL;
l_J_68 = rt_add(l_J_68, ((rt_int)2LL));
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_68)))) goto L_end84;
{
l_J_68 = rt_add(l_J_68, ((rt_int)1LL));
}
} L_end84: ;
}
{
R7 l_T_85; memset(&l_T_85, 0, sizeof l_T_85);
S_R7(&l_T_85, r_SOURCE_TEXT(l_I_65, l_J_68), 0);
if (((r_AT_SRC(l_J_68) == ((rt_int)92LL)) && (r_AT_SRC(rt_add(l_J_68, ((rt_int)1LL))) == ((rt_int)83LL))))
{
l_KIND_79 = g_K_FIX;
l_J_68 = rt_add(l_J_68, ((rt_int)2LL));
if ((r_AT_SRC(l_J_68) == ((rt_int)45LL)))
{
l_NEG_81 = 1;
l_J_68 = rt_add(l_J_68, ((rt_int)1LL));
}
else if ((r_AT_SRC(l_J_68) == ((rt_int)43LL)))
{
l_J_68 = rt_add(l_J_68, ((rt_int)1LL));
}
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_68)))) goto L_end86;
{
l_SCALE_80 = rt_sub(rt_add(rt_mul(l_SCALE_80, ((rt_int)10LL)), r_AT_SRC(l_J_68)), ((rt_int)48LL));
l_J_68 = rt_add(l_J_68, ((rt_int)1LL));
}
} L_end86: ;
if (l_NEG_81)
{
l_SCALE_80 = rt_neg(l_SCALE_80);
}
l_V_69 = l_SCALE_80;
}
r_ADD_TOKEN(l_KIND_79, l_LINE_66, l_V_69, l_T_85);
}
}
l_I_65 = l_J_68;
}
else
{
l_J_68 = rt_add(l_I_65, r_SYMBOL_LENGTH(l_I_65));
r_ADD_TOKEN(g_K_SYM, l_LINE_66, ((rt_int)0LL), r_SOURCE_TEXT(l_I_65, l_J_68));
l_I_65 = l_J_68;
}
}
} L_end70: ;
r_ADD_TOKEN(g_K_EOF, l_LINE_66, ((rt_int)0LL), r_MK(rt_str("", 0)));
}
static R10 r_CUR(void) { 
return (((*(R22 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R22 *)rt_nil_check(g_W))).f_POS, (((*(R22 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
rt_raise(RT_X_INIT);
}
static R10 r_AHEAD(rt_int p_K) { 
if ((rt_add(((*(R22 *)rt_nil_check(g_W))).f_POS, p_K) >= ((*(R22 *)rt_nil_check(g_W))).f_NTOKS))
{
return (((*(R22 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_sub(((*(R22 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)), (((*(R22 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
}
return (((*(R22 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R22 *)rt_nil_check(g_W))).f_POS, p_K), (((*(R22 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
rt_raise(RT_X_INIT);
}
static rt_int r_LINE_NOW(void) { 
return ((((*(R22 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R22 *)rt_nil_check(g_W))).f_POS, (((*(R22 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_LINE;
rt_raise(RT_X_INIT);
}
static rt_int r_TOK_IS(R10 p_T, rstr p_S) { 
if (((((p_T).f_KIND == g_K_SYM) || ((p_T).f_KIND == g_K_RES)) || ((p_T).f_KIND == g_K_ID)))
{
return r_TEQS((p_T).f_TX, p_S);
}
return 0;
rt_raise(RT_X_INIT);
}
static rt_int r_IS(rstr p_S) { 
return r_TOK_IS((((*(R22 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R22 *)rt_nil_check(g_W))).f_POS, (((*(R22 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TOKS).hi[0])], p_S);
rt_raise(RT_X_INIT);
}
static rt_int r_IS_KIND(rt_int p_K) { 
return (((((*(R22 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R22 *)rt_nil_check(g_W))).f_POS, (((*(R22 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_KIND == p_K);
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
return 1;
}
return 0;
rt_raise(RT_X_INIT);
}
static void r_EXPECT(rstr p_S) { 
if ((!r_ACCEPT(p_S)))
{
{
R7 l_T_87; memset(&l_T_87, 0, sizeof l_T_87);
S_R7(&l_T_87, (r_CUR()).f_TX, 0);
r_FAIL(r_LINE_NOW(), rt_str_cat(rt_str_cat(p_S, rt_str(" expected, not ", 15)), r_STR(l_T_87, (l_T_87).f_LEN)));
}
}
}
static R7 r_IDENT(void) { 
R10 l_T_88; memset(&l_T_88, 0, sizeof l_T_88);
S_R10(&l_T_88, r_CUR(), 0);
if ((!((l_T_88).f_KIND == g_K_ID)))
{
r_FAILT((l_T_88).f_LINE, rt_str("an identifier expected, not ", 28), (l_T_88).f_TX);
}
r_SKIP();
return (l_T_88).f_TX;
rt_raise(RT_X_INIT);
}
static void r_EXPECT_NAME(R7 p_NAME) { 
if ((!r_TEQ(r_IDENT(), p_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), p_NAME);
}
}
static R11 * r_NEW_NODE(rt_int p_KIND, rt_int p_LINE) { 
R11 * l_N_89; memset(&l_N_89, 0, sizeof l_N_89);
l_N_89 = ((R11 *)rt_alloc(sizeof (R11)));
S_R11(&(*(R11 *)rt_nil_check(l_N_89)), ({ R11 rc90; memset(&rc90, 0, sizeof rc90);  rc90.f_KIND = p_KIND; rc90.f_LINE = p_LINE; rc90.f_IV = ((rt_int)0LL); S_R7(&rc90.f_NAME, ({ R7 rc91; memset(&rc91, 0, sizeof rc91);  rc91.f_AT = ((rt_int)0LL); rc91.f_LEN = ((rt_int)0LL); rc91.f_H = ((rt_int)0LL); rc91; }), 0); rc90.f_A = NULL; rc90.f_B = NULL; rc90.f_C = NULL; rc90.f_D = NULL; rc90.f_E = NULL; rc90.f_NEXT = NULL; rc90.f_FL = ((rt_int)0LL); rc90; }), 0);
return l_N_89;
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
rt_int l_K_92; memset(&l_K_92, 0, sizeof l_K_92);
l_K_92 = ((rt_int)0LL);
R11 * l_P_93; memset(&l_P_93, 0, sizeof l_P_93);
l_P_93 = p_N;
for (;;) {
if ((l_P_93 == NULL)) goto L_end94;
{
l_K_92 = rt_add(l_K_92, ((rt_int)1LL));
l_P_93 = ((*(R11 *)rt_nil_check(l_P_93))).f_NEXT;
}
} L_end94: ;
return l_K_92;
rt_raise(RT_X_INIT);
}
static R11 * r_IDENT_NODE(void) { 
R11 * l_N_95; memset(&l_N_95, 0, sizeof l_N_95);
l_N_95 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_N_95))).f_NAME, r_IDENT(), 0);
return l_N_95;
rt_raise(RT_X_INIT);
}
static R11 * r_IDENT_LIST(void) { 
R11 * l_HEAD_96; memset(&l_HEAD_96, 0, sizeof l_HEAD_96);
l_HEAD_96 = NULL;
R11 * l_TAIL_97; memset(&l_TAIL_97, 0, sizeof l_TAIL_97);
l_TAIL_97 = NULL;
for (;;) {
{
r_ADD_LIST(r_ROUTINE_NAME_NODE(), &l_HEAD_96, &l_TAIL_97);
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end98;
} L_end98: ;
return l_HEAD_96;
rt_raise(RT_X_INIT);
}
static R11 * r_ROUTINE_NAME_NODE(void) { 
R11 * l_N_99; memset(&l_N_99, 0, sizeof l_N_99);
l_N_99 = r_IDENT_NODE();
if ((r_IS(rt_str("$", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_SKIP();
S_R7(&((*(R11 *)rt_nil_check(l_N_99))).f_NAME, r_MKN(rt_str_cat(rt_str_cat(r_STR(((*(R11 *)rt_nil_check(l_N_99))).f_NAME, (((*(R11 *)rt_nil_check(l_N_99))).f_NAME).f_LEN), rt_str("$", 1)), r_STR((r_CUR()).f_TX, ((r_CUR()).f_TX).f_LEN))), 0);
r_SKIP();
}
return l_N_99;
rt_raise(RT_X_INIT);
}
static R11 * r_PAREN_IDENTS(void) { 
R11 * l_L_100; memset(&l_L_100, 0, sizeof l_L_100);
l_L_100 = NULL;
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str(")", 1))))
{
l_L_100 = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
return l_L_100;
rt_raise(RT_X_INIT);
}
static void r_SKIP_PARENS(void) { 
rt_int l_DEPTH_101; memset(&l_DEPTH_101, 0, sizeof l_DEPTH_101);
l_DEPTH_101 = ((rt_int)0LL);
for (;;) {
{
if (r_IS(rt_str("(", 1)))
{
l_DEPTH_101 = rt_add(l_DEPTH_101, ((rt_int)1LL));
}
else if (r_IS(rt_str(")", 1)))
{
l_DEPTH_101 = rt_sub(l_DEPTH_101, ((rt_int)1LL));
}
r_SKIP();
}
if ((l_DEPTH_101 == ((rt_int)0LL))) goto L_end102;
} L_end102: ;
}
static R11 * r_PARSE_COMPILATION(void) { 
R11 * l_HEAD_103; memset(&l_HEAD_103, 0, sizeof l_HEAD_103);
l_HEAD_103 = NULL;
R11 * l_TAIL_104; memset(&l_TAIL_104, 0, sizeof l_TAIL_104);
l_TAIL_104 = NULL;
for (;;) {
if (r_IS_KIND(g_K_EOF)) goto L_end105;
{
r_ADD_LIST(r_PARSE_SEGMENT(), &l_HEAD_103, &l_TAIL_104);
}
} L_end105: ;
return l_HEAD_103;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_ITEMS(void) { 
R11 * l_N_106; memset(&l_N_106, 0, sizeof l_N_106);
l_N_106 = r_NEW_NODE(g_N_ITEMS, r_LINE_NOW());
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end107;
{
if (r_ACCEPT(rt_str("DATA", 4)))
{
r_EXPECT(rt_str(":", 1));
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str("#", 1))))
{
((*(R11 *)rt_nil_check(l_N_106))).f_A = r_IDENT_LIST();
}
if (r_ACCEPT(rt_str("#", 1)))
{
((*(R11 *)rt_nil_check(l_N_106))).f_B = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("ROUTINES", 8)))
{
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_N_106))).f_C = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("TYPES", 5)))
{
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_N_106))).f_D = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("MODULES", 7)))
{
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_N_106))).f_E = r_PAREN_IDENTS();
}
else
{
{
R7 l_T_108; memset(&l_T_108, 0, sizeof l_T_108);
S_R7(&l_T_108, (r_CUR()).f_TX, 0);
r_FAILT(r_LINE_NOW(), rt_str("DATA, ROUTINES, TYPES or MODULES expected, not ", 47), l_T_108);
}
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
} L_end107: ;
r_EXPECT(rt_str(")", 1));
return l_N_106;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_SEGMENT(void) { 
R11 * l_S_109; memset(&l_S_109, 0, sizeof l_S_109);
l_S_109 = r_NEW_NODE(g_N_SEGMENT, r_LINE_NOW());
R11 * l_HEAD_110; memset(&l_HEAD_110, 0, sizeof l_HEAD_110);
l_HEAD_110 = NULL;
R11 * l_TAIL_111; memset(&l_TAIL_111, 0, sizeof l_TAIL_111);
l_TAIL_111 = NULL;
if (r_ACCEPT(rt_str("MAIN", 4)))
{
((*(R11 *)rt_nil_check(l_S_109))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("SEGMENT", 7));
S_R7(&((*(R11 *)rt_nil_check(l_S_109))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("USES", 4)))
{
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R11 * l_U_113; memset(&l_U_113, 0, sizeof l_U_113);
l_U_113 = r_NEW_NODE(g_N_USE, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_U_113))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_U_113))).f_A = r_PARSE_ITEMS();
}
r_ADD_LIST(l_U_113, &l_HEAD_110, &l_TAIL_111);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end112;
} L_end112: ;
r_EXPECT(rt_str(")", 1));
((*(R11 *)rt_nil_check(l_S_109))).f_A = l_HEAD_110;
}
if (r_ACCEPT(rt_str("DEFINES", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R11 *)rt_nil_check(l_S_109))).f_FL = ((rt_int)1LL);
}
else
{
((*(R11 *)rt_nil_check(l_S_109))).f_C = r_PAREN_IDENTS();
}
}
r_EXPECT(rt_str(";", 1));
((*(R11 *)rt_nil_check(l_S_109))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SEGMENT", 7));
r_EXPECT_NAME(((*(R11 *)rt_nil_check(l_S_109))).f_NAME);
r_EXPECT(rt_str(";", 1));
return l_S_109;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_CLOSED_BODY(void) { 
R11 * l_B_114; memset(&l_B_114, 0, sizeof l_B_114);
l_B_114 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
R11 * l_HEAD_115; memset(&l_HEAD_115, 0, sizeof l_HEAD_115);
l_HEAD_115 = NULL;
R11 * l_TAIL_116; memset(&l_TAIL_116, 0, sizeof l_TAIL_116);
l_TAIL_116 = NULL;
((*(R11 *)rt_nil_check(l_B_114))).f_A = r_PARSE_DECLARATIONS();
((*(R11 *)rt_nil_check(l_B_114))).f_B = r_PARSE_STATEMENTS();
for (;;) {
{
if ((((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS(rt_str("TARGET", 6))))
{
r_ADD_LIST(r_PARSE_ROUTINE(), &l_HEAD_115, &l_TAIL_116);
}
else if (r_IS(rt_str("MODULE", 6)))
{
r_ADD_LIST(r_PARSE_MODULE(), &l_HEAD_115, &l_TAIL_116);
}
else
{
goto L_end117;
}
}
} L_end117: ;
((*(R11 *)rt_nil_check(l_B_114))).f_C = l_HEAD_115;
return l_B_114;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_BODY(void) { 
R11 * l_B_118; memset(&l_B_118, 0, sizeof l_B_118);
l_B_118 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
((*(R11 *)rt_nil_check(l_B_118))).f_A = r_PARSE_DECLARATIONS();
((*(R11 *)rt_nil_check(l_B_118))).f_B = r_PARSE_STATEMENTS();
return l_B_118;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_MODULE(void) { 
R11 * l_M_119; memset(&l_M_119, 0, sizeof l_M_119);
l_M_119 = r_NEW_NODE(g_N_MODULE, r_LINE_NOW());
R11 * l_HEAD_120; memset(&l_HEAD_120, 0, sizeof l_HEAD_120);
l_HEAD_120 = NULL;
R11 * l_TAIL_121; memset(&l_TAIL_121, 0, sizeof l_TAIL_121);
l_TAIL_121 = NULL;
r_EXPECT(rt_str("MODULE", 6));
S_R7(&((*(R11 *)rt_nil_check(l_M_119))).f_NAME, r_IDENT(), 0);
for (;;) {
{
if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R11 *)rt_nil_check(l_M_119))).f_A = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("EXPORTS", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R11 *)rt_nil_check(l_M_119))).f_FL = ((rt_int)1LL);
}
else
{
{
rt_int l_PAREN_123; memset(&l_PAREN_123, 0, sizeof l_PAREN_123);
l_PAREN_123 = r_ACCEPT(rt_str("(", 1));
for (;;) {
{
{
R11 * l_X_125; memset(&l_X_125, 0, sizeof l_X_125);
l_X_125 = r_NEW_NODE(g_N_EXPORT, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_X_125))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("WITH", 4)))
{
((*(R11 *)rt_nil_check(l_X_125))).f_A = r_PAREN_IDENTS();
}
r_ADD_LIST(l_X_125, &l_HEAD_120, &l_TAIL_121);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end124;
} L_end124: ;
if (l_PAREN_123)
{
r_EXPECT(rt_str(")", 1));
}
}
((*(R11 *)rt_nil_check(l_M_119))).f_B = l_HEAD_120;
}
}
else
{
goto L_end122;
}
}
} L_end122: ;
r_EXPECT(rt_str(";", 1));
((*(R11 *)rt_nil_check(l_M_119))).f_C = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("MODULE", 6));
r_EXPECT_NAME(((*(R11 *)rt_nil_check(l_M_119))).f_NAME);
r_EXPECT(rt_str(";", 1));
return l_M_119;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_DECLARATIONS(void) { 
R11 * l_HEAD_126; memset(&l_HEAD_126, 0, sizeof l_HEAD_126);
l_HEAD_126 = NULL;
R11 * l_TAIL_127; memset(&l_TAIL_127, 0, sizeof l_TAIL_127);
l_TAIL_127 = NULL;
for (;;) {
{
if ((r_IS(rt_str("CONST", 5)) || r_IS(rt_str("VAR", 3))))
{
r_ADD_LIST(r_PARSE_OBJECT_DECL(), &l_HEAD_126, &l_TAIL_127);
}
else if (r_IS(rt_str("TYPE", 4)))
{
r_ADD_LIST(r_PARSE_TYPE_DECL(), &l_HEAD_126, &l_TAIL_127);
}
else if (r_IS(rt_str("REPTYPE", 7)))
{
r_ADD_LIST(r_PARSE_REPTYPE_DECL(), &l_HEAD_126, &l_TAIL_127);
}
else
{
goto L_end128;
}
}
} L_end128: ;
return l_HEAD_126;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_OBJECT_DECL(void) { 
R11 * l_D_129; memset(&l_D_129, 0, sizeof l_D_129);
l_D_129 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
if (r_ACCEPT(rt_str("CONST", 5)))
{
((*(R11 *)rt_nil_check(l_D_129))).f_KIND = g_N_CONST;
}
else
{
r_EXPECT(rt_str("VAR", 3));
}
((*(R11 *)rt_nil_check(l_D_129))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_D_129))).f_B = r_PARSE_TYPE_SPEC();
if (r_ACCEPT(rt_str(":=", 2)))
{
((*(R11 *)rt_nil_check(l_D_129))).f_C = r_PARSE_EXPR();
}
else if ((((*(R11 *)rt_nil_check(l_D_129))).f_KIND == g_N_CONST))
{
r_FAIL(((*(R11 *)rt_nil_check(l_D_129))).f_LINE, rt_str("a constant needs a value", 24));
}
r_EXPECT(rt_str(";", 1));
return l_D_129;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_FORMALS(void) { 
R11 * l_HEAD_130; memset(&l_HEAD_130, 0, sizeof l_HEAD_130);
l_HEAD_130 = NULL;
R11 * l_TAIL_131; memset(&l_TAIL_131, 0, sizeof l_TAIL_131);
l_TAIL_131 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R11 * l_F_133; memset(&l_F_133, 0, sizeof l_F_133);
l_F_133 = r_NEW_NODE(g_N_FORMAL, r_LINE_NOW());
if (r_ACCEPT(rt_str("TAG", 3)))
{
((*(R11 *)rt_nil_check(l_F_133))).f_IV = ((rt_int)1LL);
}
((*(R11 *)rt_nil_check(l_F_133))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
if ((!r_ACCEPT(rt_str("TYPE", 4))))
{
((*(R11 *)rt_nil_check(l_F_133))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_F_133, &l_HEAD_130, &l_TAIL_131);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end132;
} L_end132: ;
r_EXPECT(rt_str(")", 1));
return l_HEAD_130;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_TYPE_DECL(void) { 
R11 * l_D_134; memset(&l_D_134, 0, sizeof l_D_134);
l_D_134 = r_NEW_NODE(g_N_TYPE, r_LINE_NOW());
r_EXPECT(rt_str("TYPE", 4));
S_R7(&((*(R11 *)rt_nil_check(l_D_134))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_D_134))).f_A = r_PARSE_FORMALS();
}
r_EXPECT(rt_str("=", 1));
((*(R11 *)rt_nil_check(l_D_134))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(";", 1));
return l_D_134;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_REPTYPE_DECL(void) { 
R11 * l_D_135; memset(&l_D_135, 0, sizeof l_D_135);
l_D_135 = r_NEW_NODE(g_N_REPTYPE, r_LINE_NOW());
r_EXPECT(rt_str("REPTYPE", 7));
S_R7(&((*(R11 *)rt_nil_check(l_D_135))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_D_135))).f_A = r_PARSE_FORMALS();
}
if (r_ACCEPT(rt_str("OF", 2)))
{
((*(R11 *)rt_nil_check(l_D_135))).f_C = r_IDENT_NODE();
}
r_EXPECT(rt_str("=", 1));
((*(R11 *)rt_nil_check(l_D_135))).f_B = r_PARSE_REP();
r_EXPECT(rt_str(";", 1));
return l_D_135;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_REP(void) { 
R11 * l_R_136; memset(&l_R_136, 0, sizeof l_R_136);
l_R_136 = r_NEW_NODE(g_N_REP, r_LINE_NOW());
R11 * l_HEAD_137; memset(&l_HEAD_137, 0, sizeof l_HEAD_137);
l_HEAD_137 = NULL;
R11 * l_TAIL_138; memset(&l_TAIL_138, 0, sizeof l_TAIL_138);
l_TAIL_138 = NULL;
if (r_IS_KIND(g_K_GEN))
{
((*(R11 *)rt_nil_check(l_R_136))).f_KIND = g_TS_GEN;
S_R7(&((*(R11 *)rt_nil_check(l_R_136))).f_NAME, r_GEN_NAME(), 0);
return l_R_136;
}
S_R7(&((*(R11 *)rt_nil_check(l_R_136))).f_NAME, r_IDENT(), 0);
if ((!r_IS(rt_str("(", 1))))
{
return l_R_136;
}
if (r_TEQS(((*(R11 *)rt_nil_check(l_R_136))).f_NAME, rt_str("RECORD_REP", 10)))
{
r_SKIP_PARENS();
return l_R_136;
}
r_SKIP();
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end139;
{
if (r_ACCEPT(rt_str("VALUES", 6)))
{
{
R11 * l_VH_140; memset(&l_VH_140, 0, sizeof l_VH_140);
l_VH_140 = NULL;
R11 * l_VT_141; memset(&l_VT_141, 0, sizeof l_VT_141);
l_VT_141 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R11 * l_V_143; memset(&l_V_143, 0, sizeof l_V_143);
l_V_143 = r_NEW_NODE(g_N_VALREP, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_V_143))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_EXPECT(rt_str("AS", 2));
((*(R11 *)rt_nil_check(l_V_143))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_V_143, &l_VH_140, &l_VT_141);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end142;
} L_end142: ;
r_EXPECT(rt_str(")", 1));
((*(R11 *)rt_nil_check(l_R_136))).f_B = l_VH_140;
}
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_137, &l_TAIL_138);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
} L_end139: ;
r_EXPECT(rt_str(")", 1));
((*(R11 *)rt_nil_check(l_R_136))).f_A = l_HEAD_137;
return l_R_136;
rt_raise(RT_X_INIT);
}
static R7 r_GEN_NAME(void) { 
R7 l_T_144; memset(&l_T_144, 0, sizeof l_T_144);
S_R7(&l_T_144, (r_CUR()).f_TX, 0);
r_SKIP();
if (((l_T_144).f_LEN == ((rt_int)1LL)))
{
return r_NO_TEXT();
}
return r_MKN(rt_b_slice(r_STR(l_T_144, (l_T_144).f_LEN), ((rt_int)1LL), rt_sub((l_T_144).f_LEN, ((rt_int)1LL))));
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_TYPE_ARG(void) { 
R11 * l_N_145; memset(&l_N_145, 0, sizeof l_N_145);
if (r_IS_KIND(g_K_GEN))
{
{
R7 l_T_146; memset(&l_T_146, 0, sizeof l_T_146);
S_R7(&l_T_146, (r_CUR()).f_TX, 0);
if (((l_T_146).f_LEN == ((rt_int)1LL)))
{
r_SKIP();
return r_NEW_NODE(g_N_DONTCARE, r_LINE_NOW());
}
}
l_N_145 = r_NEW_NODE(g_TS_GEN, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_N_145))).f_NAME, r_GEN_NAME(), 0);
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R11 *)rt_nil_check(l_N_145))).f_C = r_PARSE_REP();
}
return l_N_145;
}
if (r_ACCEPT(rt_str("ANY", 3)))
{
return r_NEW_NODE(g_N_ANY, r_LINE_NOW());
}
if ((r_IS(rt_str("ARRAY", 5)) || r_IS(rt_str("RECORD", 6))))
{
return r_PARSE_TYPE_SPEC();
}
if ((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM)))
{
return r_PARSE_TYPE_SPEC();
}
l_N_145 = r_PARSE_EXPR();
if ((r_IS(rt_str("REP", 3)) || r_IS(rt_str("[", 1))))
{
return r_TYPE_SPEC_TAIL(r_EXPR_TO_TS(l_N_145));
}
return l_N_145;
rt_raise(RT_X_INIT);
}
static R11 * r_EXPR_TO_TS(R11 * p_E) { 
R11 * l_N_147; memset(&l_N_147, 0, sizeof l_N_147);
if ((((((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_TS_NAME) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_TS_ARRAY)) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_TS_RECORD)) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_TS_ENUM)) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN)))
{
return p_E;
}
l_N_147 = r_NEW_NODE(g_TS_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME))
{
S_R7(&((*(R11 *)rt_nil_check(l_N_147))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
return l_N_147;
}
if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
S_R7(&((*(R11 *)rt_nil_check(l_N_147))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R11 *)rt_nil_check(l_N_147))).f_A = ((*(R11 *)rt_nil_check(p_E))).f_A;
return l_N_147;
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
return p_N;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_TYPE_SPEC(void) { 
R11 * l_N_148; memset(&l_N_148, 0, sizeof l_N_148);
R11 * l_HEAD_149; memset(&l_HEAD_149, 0, sizeof l_HEAD_149);
l_HEAD_149 = NULL;
R11 * l_TAIL_150; memset(&l_TAIL_150, 0, sizeof l_TAIL_150);
l_TAIL_150 = NULL;
rt_int l_LINE_151; memset(&l_LINE_151, 0, sizeof l_LINE_151);
l_LINE_151 = r_LINE_NOW();
if (r_ACCEPT(rt_str("ARRAY", 5)))
{
l_N_148 = r_NEW_NODE(g_TS_ARRAY, l_LINE_151);
r_EXPECT(rt_str("[", 1));
for (;;) {
{
{
R11 * l_R_153; memset(&l_R_153, 0, sizeof l_R_153);
l_R_153 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
((*(R11 *)rt_nil_check(l_R_153))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_R_153))).f_B = r_PARSE_EXPR();
r_ADD_LIST(l_R_153, &l_HEAD_149, &l_TAIL_150);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end152;
} L_end152: ;
r_EXPECT(rt_str("]", 1));
((*(R11 *)rt_nil_check(l_N_148))).f_A = l_HEAD_149;
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R11 *)rt_nil_check(l_N_148))).f_D = r_PARSE_REP();
}
r_EXPECT(rt_str("OF", 2));
((*(R11 *)rt_nil_check(l_N_148))).f_C = r_PARSE_TYPE_SPEC();
return l_N_148;
}
if (r_ACCEPT(rt_str("RECORD", 6)))
{
l_N_148 = r_NEW_NODE(g_TS_RECORD, l_LINE_151);
((*(R11 *)rt_nil_check(l_N_148))).f_A = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("RECORD", 6));
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R11 *)rt_nil_check(l_N_148))).f_D = r_PARSE_REP();
}
return l_N_148;
}
if (r_IS_KIND(g_K_GEN))
{
return r_PARSE_TYPE_ARG();
}
if (r_IS(rt_str("(", 1)))
{
l_N_148 = r_NEW_NODE(g_TS_ENUM, l_LINE_151);
((*(R11 *)rt_nil_check(l_N_148))).f_A = r_PARSE_LITERALS();
return r_TYPE_SPEC_TAIL(l_N_148);
}
l_N_148 = r_NEW_NODE(g_TS_NAME, l_LINE_151);
S_R7(&((*(R11 *)rt_nil_check(l_N_148))).f_NAME, r_IDENT(), 0);
if ((r_TEQS(((*(R11 *)rt_nil_check(l_N_148))).f_NAME, rt_str("ENUM", 4)) || r_TEQS(((*(R11 *)rt_nil_check(l_N_148))).f_NAME, rt_str("UNORDERED", 9))))
{
if (r_TEQS(((*(R11 *)rt_nil_check(l_N_148))).f_NAME, rt_str("UNORDERED", 9)))
{
((*(R11 *)rt_nil_check(l_N_148))).f_IV = ((rt_int)1LL);
}
((*(R11 *)rt_nil_check(l_N_148))).f_KIND = g_TS_ENUM;
((*(R11 *)rt_nil_check(l_N_148))).f_A = r_PARSE_LITERALS();
return r_TYPE_SPEC_TAIL(l_N_148);
}
if ((r_IS(rt_str("(", 1)) && (!r_RANGE_AHEAD())))
{
r_SKIP();
for (;;) {
{
if (r_TEQS(((*(R11 *)rt_nil_check(l_N_148))).f_NAME, rt_str("PTR", 3)))
{
r_ADD_LIST(r_PARSE_TYPE_SPEC(), &l_HEAD_149, &l_TAIL_150);
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_149, &l_TAIL_150);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end154;
} L_end154: ;
r_EXPECT(rt_str(")", 1));
((*(R11 *)rt_nil_check(l_N_148))).f_A = l_HEAD_149;
}
return r_TYPE_SPEC_TAIL(l_N_148);
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_LITERALS(void) { 
R11 * l_HEAD_155; memset(&l_HEAD_155, 0, sizeof l_HEAD_155);
l_HEAD_155 = NULL;
R11 * l_TAIL_156; memset(&l_TAIL_156, 0, sizeof l_TAIL_156);
l_TAIL_156 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R11 * l_L_158; memset(&l_L_158, 0, sizeof l_L_158);
l_L_158 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
if ((!((r_IS_KIND(g_K_ENUM) || r_IS_KIND(g_K_ID)))))
{
r_FAIL(r_LINE_NOW(), rt_str("an enumerated literal expected", 30));
}
S_R7(&((*(R11 *)rt_nil_check(l_L_158))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_ADD_LIST(l_L_158, &l_HEAD_155, &l_TAIL_156);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end157;
} L_end157: ;
r_EXPECT(rt_str(")", 1));
return l_HEAD_155;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_FIELDS(void) { 
R11 * l_HEAD_159; memset(&l_HEAD_159, 0, sizeof l_HEAD_159);
l_HEAD_159 = NULL;
R11 * l_TAIL_160; memset(&l_TAIL_160, 0, sizeof l_TAIL_160);
l_TAIL_160 = NULL;
for (;;) {
{
if (r_IS(rt_str("VAR", 3)))
{
{
R11 * l_F_162; memset(&l_F_162, 0, sizeof l_F_162);
l_F_162 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
r_SKIP();
((*(R11 *)rt_nil_check(l_F_162))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_F_162))).f_B = r_PARSE_TYPE_SPEC();
if ((!r_ACCEPT(rt_str(";", 1))))
{
r_EXPECT(rt_str(",", 1));
}
r_ADD_LIST(l_F_162, &l_HEAD_159, &l_TAIL_160);
}
}
else if (r_IS(rt_str("SELECT", 6)))
{
{
R11 * l_V_163; memset(&l_V_163, 0, sizeof l_V_163);
l_V_163 = r_NEW_NODE(g_N_VARIANT, r_LINE_NOW());
R11 * l_VH_164; memset(&l_VH_164, 0, sizeof l_VH_164);
l_VH_164 = NULL;
R11 * l_VT_165; memset(&l_VT_165, 0, sizeof l_VT_165);
l_VT_165 = NULL;
r_SKIP();
S_R7(&((*(R11 *)rt_nil_check(l_V_163))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end166;
{
{
R11 * l_S_167; memset(&l_S_167, 0, sizeof l_S_167);
l_S_167 = r_NEW_NODE(g_N_VARSPEC, r_LINE_NOW());
R11 * l_LH_168; memset(&l_LH_168, 0, sizeof l_LH_168);
l_LH_168 = NULL;
R11 * l_LT_169; memset(&l_LT_169, 0, sizeof l_LT_169);
l_LT_169 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_168, &l_LT_169);
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end170;
} L_end170: ;
r_EXPECT(rt_str("-->", 3));
((*(R11 *)rt_nil_check(l_S_167))).f_A = l_LH_168;
((*(R11 *)rt_nil_check(l_S_167))).f_B = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_S_167, &l_VH_164, &l_VT_165);
}
}
} L_end166: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
r_EXPECT(rt_str(";", 1));
((*(R11 *)rt_nil_check(l_V_163))).f_A = l_VH_164;
r_ADD_LIST(l_V_163, &l_HEAD_159, &l_TAIL_160);
}
}
else
{
goto L_end161;
}
}
} L_end161: ;
return l_HEAD_159;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_RANGE(void) { 
R11 * l_R_171; memset(&l_R_171, 0, sizeof l_R_171);
l_R_171 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_R_171))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("[", 1));
}
((*(R11 *)rt_nil_check(l_R_171))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_R_171))).f_B = r_PARSE_EXPR();
if (r_ACCEPT(rt_str(")", 1)))
{
((*(R11 *)rt_nil_check(l_R_171))).f_IV = rt_add(((*(R11 *)rt_nil_check(l_R_171))).f_IV, ((rt_int)2LL));
}
else
{
r_EXPECT(rt_str("]", 1));
}
return l_R_171;
rt_raise(RT_X_INIT);
}
static rt_int r_RANGE_AHEAD(void) { 
rt_int l_DEPTH_172; memset(&l_DEPTH_172, 0, sizeof l_DEPTH_172);
l_DEPTH_172 = ((rt_int)0LL);
rt_int l_K_173; memset(&l_K_173, 0, sizeof l_K_173);
l_K_173 = ((rt_int)0LL);
for (;;) {
{
{
R10 l_T_175; memset(&l_T_175, 0, sizeof l_T_175);
S_R10(&l_T_175, r_AHEAD(l_K_173), 0);
if (((l_T_175).f_KIND == g_K_EOF))
{
return 0;
}
if (((l_T_175).f_KIND == g_K_SYM))
{
if ((r_TEQS((l_T_175).f_TX, rt_str("(", 1)) || r_TEQS((l_T_175).f_TX, rt_str("[", 1))))
{
l_DEPTH_172 = rt_add(l_DEPTH_172, ((rt_int)1LL));
}
else if ((r_TEQS((l_T_175).f_TX, rt_str(")", 1)) || r_TEQS((l_T_175).f_TX, rt_str("]", 1))))
{
l_DEPTH_172 = rt_sub(l_DEPTH_172, ((rt_int)1LL));
if ((l_DEPTH_172 == ((rt_int)0LL)))
{
return 0;
}
}
else if (((l_DEPTH_172 == ((rt_int)1LL)) && ((r_TEQS((l_T_175).f_TX, rt_str(":", 1)) || r_TEQS((l_T_175).f_TX, rt_str(",", 1))))))
{
return r_TEQS((l_T_175).f_TX, rt_str(":", 1));
}
}
}
l_K_173 = rt_add(l_K_173, ((rt_int)1LL));
}
} L_end174: ;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_PARAMS(void) { 
R11 * l_HEAD_176; memset(&l_HEAD_176, 0, sizeof l_HEAD_176);
l_HEAD_176 = NULL;
R11 * l_TAIL_177; memset(&l_TAIL_177, 0, sizeof l_TAIL_177);
l_TAIL_177 = NULL;
rt_int l_MODE_178; memset(&l_MODE_178, 0, sizeof l_MODE_178);
l_MODE_178 = g_M_IN;
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end179;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_178 = rt_add(l_MODE_178, ((rt_int)1LL));
}
else
{
{
R11 * l_NAMES_180; memset(&l_NAMES_180, 0, sizeof l_NAMES_180);
l_NAMES_180 = r_IDENT_LIST();
R11 * l_TS_181; memset(&l_TS_181, 0, sizeof l_TS_181);
l_TS_181 = NULL;
R11 * l_P_182; memset(&l_P_182, 0, sizeof l_P_182);
l_P_182 = l_NAMES_180;
r_EXPECT(rt_str(":", 1));
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else if ((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))))
{
l_TS_181 = r_PARSE_ROUTINE_SPEC();
}
else
{
l_TS_181 = r_PARSE_TYPE_SPEC();
}
for (;;) {
if ((l_P_182 == NULL)) goto L_end183;
{
{
R11 * l_PN_184; memset(&l_PN_184, 0, sizeof l_PN_184);
l_PN_184 = r_NEW_NODE(g_N_PARAM, ((*(R11 *)rt_nil_check(l_P_182))).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_PN_184))).f_NAME, ((*(R11 *)rt_nil_check(l_P_182))).f_NAME, 0);
((*(R11 *)rt_nil_check(l_PN_184))).f_IV = l_MODE_178;
((*(R11 *)rt_nil_check(l_PN_184))).f_B = l_TS_181;
r_ADD_LIST(l_PN_184, &l_HEAD_176, &l_TAIL_177);
}
l_P_182 = ((*(R11 *)rt_nil_check(l_P_182))).f_NEXT;
}
} L_end183: ;
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
} L_end179: ;
r_EXPECT(rt_str(")", 1));
return l_HEAD_176;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_TEMPLATE(rt_int p_FUNC) { 
R11 * l_R_185; memset(&l_R_185, 0, sizeof l_R_185);
l_R_185 = r_NEW_NODE(g_TS_ROUTINE, r_LINE_NOW());
R11 * l_HEAD_186; memset(&l_HEAD_186, 0, sizeof l_HEAD_186);
l_HEAD_186 = NULL;
R11 * l_TAIL_187; memset(&l_TAIL_187, 0, sizeof l_TAIL_187);
l_TAIL_187 = NULL;
rt_int l_MODE_188; memset(&l_MODE_188, 0, sizeof l_MODE_188);
l_MODE_188 = g_M_IN;
if (p_FUNC)
{
((*(R11 *)rt_nil_check(l_R_185))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end189;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_188 = rt_add(l_MODE_188, ((rt_int)1LL));
}
else
{
{
R11 * l_P_190; memset(&l_P_190, 0, sizeof l_P_190);
l_P_190 = r_NEW_NODE(g_N_PARAM, r_LINE_NOW());
((*(R11 *)rt_nil_check(l_P_190))).f_IV = l_MODE_188;
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else
{
((*(R11 *)rt_nil_check(l_P_190))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_P_190, &l_HEAD_186, &l_TAIL_187);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
} L_end189: ;
r_EXPECT(rt_str(")", 1));
((*(R11 *)rt_nil_check(l_R_185))).f_A = l_HEAD_186;
if (r_ACCEPT(rt_str("RETURNS", 7)))
{
((*(R11 *)rt_nil_check(l_R_185))).f_IV = ((rt_int)1LL);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_R_185))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R11 *)rt_nil_check(l_R_185))).f_B = r_PARSE_TYPE_SPEC();
}
}
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R11 *)rt_nil_check(l_R_185))).f_D = r_PAREN_IDENTS();
}
return l_R_185;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_ROUTINE_SPEC(void) { 
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
return r_PARSE_TEMPLATE(1);
}
r_EXPECT(rt_str("PROCEDURE", 9));
return r_PARSE_TEMPLATE(0);
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_WHERE(void) { 
R11 * l_HEAD_191; memset(&l_HEAD_191, 0, sizeof l_HEAD_191);
l_HEAD_191 = NULL;
R11 * l_TAIL_192; memset(&l_TAIL_192, 0, sizeof l_TAIL_192);
l_TAIL_192 = NULL;
for (;;) {
{
{
R11 * l_N_194; memset(&l_N_194, 0, sizeof l_N_194);
l_N_194 = r_NEW_NODE(g_N_NEEDS, r_LINE_NOW());
R11 * l_TH_195; memset(&l_TH_195, 0, sizeof l_TH_195);
l_TH_195 = NULL;
R11 * l_TT_196; memset(&l_TT_196, 0, sizeof l_TT_196);
l_TT_196 = NULL;
S_R7(&((*(R11 *)rt_nil_check(l_N_194))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("NEEDS", 5));
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R11 * l_T_198; memset(&l_T_198, 0, sizeof l_T_198);
l_T_198 = r_NEW_NODE(g_N_TEMPLATE, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_T_198))).f_NAME, ((*(R11 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
((*(R11 *)rt_nil_check(l_T_198))).f_B = r_PARSE_TEMPLATE(0);
r_ADD_LIST(l_T_198, &l_TH_195, &l_TT_196);
}
if (r_ACCEPT(rt_str(";", 1)))
{
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end197;
} L_end197: ;
r_EXPECT(rt_str(")", 1));
((*(R11 *)rt_nil_check(l_N_194))).f_A = l_TH_195;
r_ADD_LIST(l_N_194, &l_HEAD_191, &l_TAIL_192);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end193;
} L_end193: ;
return l_HEAD_191;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_ROUTINE(void) { 
R11 * l_R_199; memset(&l_R_199, 0, sizeof l_R_199);
l_R_199 = r_NEW_NODE(g_N_ROUTINE, r_LINE_NOW());
R11 * l_H_200; memset(&l_H_200, 0, sizeof l_H_200);
l_H_200 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
if (r_ACCEPT(rt_str("TARGET", 6)))
{
((*(R11 *)rt_nil_check(l_R_199))).f_FL = ((rt_int)2LL);
}
if (r_ACCEPT(rt_str("INLINE", 6)))
{
((*(R11 *)rt_nil_check(l_R_199))).f_FL = rt_add(((*(R11 *)rt_nil_check(l_R_199))).f_FL, ((rt_int)1LL));
}
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
((*(R11 *)rt_nil_check(l_R_199))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
S_R7(&((*(R11 *)rt_nil_check(l_R_199))).f_NAME, ((*(R11 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (r_IS(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_R_199))).f_A = r_PARSE_PARAMS();
}
if ((((*(R11 *)rt_nil_check(l_R_199))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("RETURNS", 7));
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_R_199))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R11 *)rt_nil_check(l_R_199))).f_B = r_PARSE_TYPE_SPEC();
}
}
for (;;) {
{
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R11 *)rt_nil_check(l_H_200))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R11 *)rt_nil_check(l_R_199))).f_E = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("WHERE", 5)))
{
((*(R11 *)rt_nil_check(l_H_200))).f_B = r_PARSE_WHERE();
}
else
{
goto L_end201;
}
}
} L_end201: ;
((*(R11 *)rt_nil_check(l_R_199))).f_D = l_H_200;
r_EXPECT(rt_str(";", 1));
if ((((*(R11 *)rt_nil_check(l_R_199))).f_FL >= ((rt_int)2LL)))
{
r_EXPECT(rt_str("DYNSIZE", 7));
r_SKIP_PARENS();
r_EXPECT(rt_str(";", 1));
for (;;) {
if ((r_IS(rt_str("END", 3)) && ((r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PROCEDURE", 9)) || r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("FUNCTION", 8)))))) goto L_end202;
{
r_SKIP();
}
} L_end202: ;
}
else
{
((*(R11 *)rt_nil_check(l_R_199))).f_C = r_PARSE_CLOSED_BODY();
}
r_EXPECT(rt_str("END", 3));
if ((((*(R11 *)rt_nil_check(l_R_199))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("FUNCTION", 8));
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
if ((!r_TEQ(((*(R11 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, ((*(R11 *)rt_nil_check(l_R_199))).f_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), ((*(R11 *)rt_nil_check(l_R_199))).f_NAME);
}
r_EXPECT(rt_str(";", 1));
return l_R_199;
rt_raise(RT_X_INIT);
}
static R11 * r_BIN_NODE(R7 p_OP, rt_int p_LINE, R11 * p_A, R11 * p_B) { 
R11 * l_N_203; memset(&l_N_203, 0, sizeof l_N_203);
l_N_203 = r_NEW_NODE(g_N_BINOP, p_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_N_203))).f_NAME, p_OP, 0);
((*(R11 *)rt_nil_check(l_N_203))).f_A = p_A;
((*(R11 *)rt_nil_check(l_N_203))).f_B = p_B;
return l_N_203;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_EXPR(void) { 
R11 * l_E_204; memset(&l_E_204, 0, sizeof l_E_204);
l_E_204 = r_PARSE_SIMPLE();
if ((((r_IS(rt_str("ROUNDED", 7)) || r_IS(rt_str("TRUNCATED", 9))) || r_IS(rt_str("NATIVE_R", 8))) || r_IS(rt_str("NATIVE_T", 8))))
{
{
R11 * l_Q_205; memset(&l_Q_205, 0, sizeof l_Q_205);
l_Q_205 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_Q_205))).f_NAME, r_IDENT(), 0);
((*(R11 *)rt_nil_check(l_Q_205))).f_A = l_E_204;
l_E_204 = l_Q_205;
}
}
if ((r_IS(rt_str("WITH", 4)) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PREC", 4))))
{
{
R11 * l_Q_206; memset(&l_Q_206, 0, sizeof l_Q_206);
l_Q_206 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
r_SKIP();
r_SKIP();
if ((((*(R11 *)rt_nil_check(l_E_204))).f_KIND == g_N_QUAL))
{
l_Q_206 = l_E_204;
}
else
{
((*(R11 *)rt_nil_check(l_Q_206))).f_A = l_E_204;
}
((*(R11 *)rt_nil_check(l_Q_206))).f_B = r_PARSE_SIMPLE();
l_E_204 = l_Q_206;
}
}
return l_E_204;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_SIMPLE(void) { 
R11 * l_LEFT_207; memset(&l_LEFT_207, 0, sizeof l_LEFT_207);
l_LEFT_207 = r_PARSE_CONJ();
for (;;) {
if ((!((((r_IS(rt_str("OR", 2)) || r_IS(rt_str("!", 1))) || r_IS(rt_str("XOR", 3))) || r_IS(rt_str("->", 2)))))) goto L_end208;
{
{
R10 l_T_209; memset(&l_T_209, 0, sizeof l_T_209);
S_R10(&l_T_209, r_CUR(), 0);
r_SKIP();
l_LEFT_207 = r_BIN_NODE((l_T_209).f_TX, (l_T_209).f_LINE, l_LEFT_207, r_PARSE_CONJ());
}
}
} L_end208: ;
return l_LEFT_207;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_CONJ(void) { 
R11 * l_LEFT_210; memset(&l_LEFT_210, 0, sizeof l_LEFT_210);
l_LEFT_210 = r_PARSE_RELATION();
for (;;) {
if ((!((r_IS(rt_str("AND", 3)) || r_IS(rt_str("&", 1)))))) goto L_end211;
{
{
R10 l_T_212; memset(&l_T_212, 0, sizeof l_T_212);
S_R10(&l_T_212, r_CUR(), 0);
r_SKIP();
l_LEFT_210 = r_BIN_NODE((l_T_212).f_TX, (l_T_212).f_LINE, l_LEFT_210, r_PARSE_RELATION());
}
}
} L_end211: ;
return l_LEFT_210;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_RELATION(void) { 
R11 * l_LEFT_213; memset(&l_LEFT_213, 0, sizeof l_LEFT_213);
l_LEFT_213 = r_PARSE_SUM();
for (;;) {
{
{
R10 l_T_215; memset(&l_T_215, 0, sizeof l_T_215);
S_R10(&l_T_215, r_CUR(), 0);
if ((((((r_IS(rt_str("=", 1)) || r_IS(rt_str("<", 1))) || r_IS(rt_str(">", 1))) || r_IS(rt_str("<=", 2))) || r_IS(rt_str(">=", 2))) || r_IS(rt_str("<>", 2))))
{
r_SKIP();
l_LEFT_213 = r_BIN_NODE((l_T_215).f_TX, (l_T_215).f_LINE, l_LEFT_213, r_PARSE_SUM());
}
else if (r_IS(rt_str("IN", 2)))
{
{
R11 * l_N_216; memset(&l_N_216, 0, sizeof l_N_216);
l_N_216 = r_NEW_NODE(g_N_IN, (l_T_215).f_LINE);
r_SKIP();
((*(R11 *)rt_nil_check(l_N_216))).f_A = l_LEFT_213;
((*(R11 *)rt_nil_check(l_N_216))).f_B = r_PARSE_RANGE();
l_LEFT_213 = l_N_216;
}
}
else
{
return l_LEFT_213;
}
}
}
} L_end214: ;
rt_raise(RT_X_INIT);
}
static R11 * r_TRY_SCALED(R11 * p_LEFT, rstr p_OPS) { 
rt_int l_SAVED_217; memset(&l_SAVED_217, 0, sizeof l_SAVED_217);
l_SAVED_217 = ((*(R22 *)rt_nil_check(g_W))).f_POS;
rt_int l_LINE_218; memset(&l_LINE_218, 0, sizeof l_LINE_218);
l_LINE_218 = r_LINE_NOW();
R11 * l_N_219; memset(&l_N_219, 0, sizeof l_N_219);
if ((!r_IS(rt_str("!", 1))))
{
return NULL;
}
{
R10 l_OP_220; memset(&l_OP_220, 0, sizeof l_OP_220);
S_R10(&l_OP_220, r_AHEAD(((rt_int)1LL)), 0);
R7 l_T_221; memset(&l_T_221, 0, sizeof l_T_221);
S_R7(&l_T_221, (l_OP_220).f_TX, 0);
rt_int l_FOUND_222; memset(&l_FOUND_222, 0, sizeof l_FOUND_222);
l_FOUND_222 = 0;
if (((!((l_OP_220).f_KIND == g_K_SYM)) && (!((l_OP_220).f_KIND == g_K_RES))))
{
return NULL;
}
{ rt_int it224_lo = ((rt_int)0LL), it224_hi = rt_sub((rt_int)(p_OPS).len, (l_T_221).f_LEN);
for (rt_int it224 = it224_lo; it224 <= it224_hi; it224++) {
{
if (rt_b_eq(rt_b_slice(p_OPS, it224, rt_sub(rt_add(it224, (l_T_221).f_LEN), ((rt_int)1LL))), r_STR(l_T_221, (l_T_221).f_LEN)))
{
if (((((it224 == ((rt_int)0LL)) || rt_b_eq(rt_b_slice(p_OPS, rt_sub(it224, ((rt_int)1LL)), rt_sub(it224, ((rt_int)1LL))), rt_str(" ", 1)))) && (((rt_add(it224, (l_T_221).f_LEN) == (rt_int)(p_OPS).len) || rt_b_eq(rt_b_slice(p_OPS, rt_add(it224, (l_T_221).f_LEN), rt_add(it224, (l_T_221).f_LEN)), rt_str(" ", 1))))))
{
l_FOUND_222 = 1;
}
}
}
} } L_end223: ;
if ((!l_FOUND_222))
{
return NULL;
}
r_SKIP();
r_SKIP();
l_N_219 = r_BIN_NODE(l_T_221, l_LINE_218, p_LEFT, NULL);
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R11 *)rt_nil_check(l_N_219))).f_FL = ((rt_int)2LL);
return l_N_219;
}
if (((((r_IS_KIND(g_K_NUM) || r_IS_KIND(g_K_ID)) || r_IS(rt_str("(", 1))) || r_IS(rt_str("-", 1))) || r_IS(rt_str("+", 1))))
{
((*(R11 *)rt_nil_check(l_N_219))).f_D = r_PARSE_SECONDARY();
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R11 *)rt_nil_check(l_N_219))).f_FL = ((rt_int)1LL);
return l_N_219;
}
}
((*(R22 *)rt_nil_check(g_W))).f_POS = l_SAVED_217;
return NULL;
}
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_SUM(void) { 
R11 * l_LEFT_225; memset(&l_LEFT_225, 0, sizeof l_LEFT_225);
l_LEFT_225 = r_PARSE_TERM();
for (;;) {
{
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("!!", 2))))
{
{
R10 l_T_227; memset(&l_T_227, 0, sizeof l_T_227);
S_R10(&l_T_227, r_CUR(), 0);
r_SKIP();
l_LEFT_225 = r_BIN_NODE((l_T_227).f_TX, (l_T_227).f_LINE, l_LEFT_225, r_PARSE_TERM());
}
}
else
{
{
R11 * l_N_228; memset(&l_N_228, 0, sizeof l_N_228);
l_N_228 = r_TRY_SCALED(l_LEFT_225, rt_str("+ -", 3));
if ((l_N_228 == NULL))
{
return l_LEFT_225;
}
((*(R11 *)rt_nil_check(l_N_228))).f_B = r_PARSE_TERM();
l_LEFT_225 = l_N_228;
}
}
}
} L_end226: ;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_TERM(void) { 
R11 * l_LEFT_229; memset(&l_LEFT_229, 0, sizeof l_LEFT_229);
l_LEFT_229 = r_PARSE_FACTOR();
for (;;) {
{
if ((((r_IS(rt_str("*", 1)) || r_IS(rt_str("/", 1))) || r_IS(rt_str("//", 2))) || r_IS(rt_str("MOD", 3))))
{
{
R10 l_T_231; memset(&l_T_231, 0, sizeof l_T_231);
S_R10(&l_T_231, r_CUR(), 0);
r_SKIP();
l_LEFT_229 = r_BIN_NODE((l_T_231).f_TX, (l_T_231).f_LINE, l_LEFT_229, r_PARSE_FACTOR());
}
}
else
{
{
R11 * l_N_232; memset(&l_N_232, 0, sizeof l_N_232);
l_N_232 = r_TRY_SCALED(l_LEFT_229, rt_str("* / // MOD", 10));
if ((l_N_232 == NULL))
{
return l_LEFT_229;
}
((*(R11 *)rt_nil_check(l_N_232))).f_B = r_PARSE_FACTOR();
l_LEFT_229 = l_N_232;
}
}
}
} L_end230: ;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_FACTOR(void) { 
R11 * l_LEFT_233; memset(&l_LEFT_233, 0, sizeof l_LEFT_233);
l_LEFT_233 = r_PARSE_SECONDARY();
for (;;) {
{
if (r_IS(rt_str("**", 2)))
{
{
R10 l_T_235; memset(&l_T_235, 0, sizeof l_T_235);
S_R10(&l_T_235, r_CUR(), 0);
r_SKIP();
l_LEFT_233 = r_BIN_NODE((l_T_235).f_TX, (l_T_235).f_LINE, l_LEFT_233, r_PARSE_SECONDARY());
}
}
else
{
{
R11 * l_N_236; memset(&l_N_236, 0, sizeof l_N_236);
l_N_236 = r_TRY_SCALED(l_LEFT_233, rt_str("**", 2));
if ((l_N_236 == NULL))
{
return l_LEFT_233;
}
((*(R11 *)rt_nil_check(l_N_236))).f_B = r_PARSE_SECONDARY();
l_LEFT_233 = l_N_236;
}
}
}
} L_end234: ;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_SECONDARY(void) { 
R10 l_T_237; memset(&l_T_237, 0, sizeof l_T_237);
S_R10(&l_T_237, r_CUR(), 0);
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("NOT", 3))))
{
{
R11 * l_N_238; memset(&l_N_238, 0, sizeof l_N_238);
l_N_238 = r_NEW_NODE(g_N_UNOP, (l_T_237).f_LINE);
r_SKIP();
S_R7(&((*(R11 *)rt_nil_check(l_N_238))).f_NAME, (l_T_237).f_TX, 0);
((*(R11 *)rt_nil_check(l_N_238))).f_A = r_PARSE_POSTFIX();
return l_N_238;
}
}
return r_PARSE_POSTFIX();
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_ARGS(R11 * p_N) { 
R11 * l_HEAD_239; memset(&l_HEAD_239, 0, sizeof l_HEAD_239);
l_HEAD_239 = NULL;
R11 * l_TAIL_240; memset(&l_TAIL_240, 0, sizeof l_TAIL_240);
l_TAIL_240 = NULL;
rt_int l_GROUP_241; memset(&l_GROUP_241, 0, sizeof l_GROUP_241);
l_GROUP_241 = ((rt_int)0LL);
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end242;
{
if (r_ACCEPT(rt_str("#", 1)))
{
switch (l_GROUP_241) {
case 0:
{
((*(R11 *)rt_nil_check(p_N))).f_A = l_HEAD_239;
}
break;
case 1:
{
((*(R11 *)rt_nil_check(p_N))).f_B = l_HEAD_239;
}
break;
default:
{
r_FAIL(((*(R11 *)rt_nil_check(p_N))).f_LINE, rt_str("too many # in an argument list", 30));
}
break;
}
l_GROUP_241 = rt_add(l_GROUP_241, ((rt_int)1LL));
l_HEAD_239 = NULL;
l_TAIL_240 = NULL;
}
else
{
if ((l_GROUP_241 == ((rt_int)0LL)))
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_239, &l_TAIL_240);
}
else
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_239, &l_TAIL_240);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
} L_end242: ;
r_EXPECT(rt_str(")", 1));
switch (l_GROUP_241) {
case 0:
{
((*(R11 *)rt_nil_check(p_N))).f_A = l_HEAD_239;
}
break;
case 1:
{
((*(R11 *)rt_nil_check(p_N))).f_B = l_HEAD_239;
}
break;
default:
{
((*(R11 *)rt_nil_check(p_N))).f_C = l_HEAD_239;
}
break;
}
return p_N;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_POSTFIX(void) { 
R11 * l_E_243; memset(&l_E_243, 0, sizeof l_E_243);
l_E_243 = r_PARSE_ATOM();
R11 * l_N_244; memset(&l_N_244, 0, sizeof l_N_244);
for (;;) {
{
{
rt_int l_LINE_246; memset(&l_LINE_246, 0, sizeof l_LINE_246);
l_LINE_246 = r_LINE_NOW();
if ((r_IS(rt_str("(", 1)) && (((*(R11 *)rt_nil_check(l_E_243))).f_KIND == g_N_NAME)))
{
((*(R11 *)rt_nil_check(l_E_243))).f_KIND = g_N_APPLY;
l_E_243 = r_PARSE_ARGS(l_E_243);
}
else if (r_IS(rt_str("(", 1)))
{
l_N_244 = r_NEW_NODE(g_N_INDEX, l_LINE_246);
l_N_244 = r_PARSE_ARGS(l_N_244);
((*(R11 *)rt_nil_check(l_N_244))).f_B = ((*(R11 *)rt_nil_check(l_N_244))).f_A;
((*(R11 *)rt_nil_check(l_N_244))).f_A = l_E_243;
l_E_243 = l_N_244;
}
else if (r_ACCEPT(rt_str(".", 1)))
{
l_N_244 = r_NEW_NODE(g_N_FIELD, l_LINE_246);
((*(R11 *)rt_nil_check(l_N_244))).f_A = l_E_243;
S_R7(&((*(R11 *)rt_nil_check(l_N_244))).f_NAME, r_IDENT(), 0);
l_E_243 = l_N_244;
}
else if (r_ACCEPT(rt_str("@", 1)))
{
l_N_244 = r_NEW_NODE(g_N_DEREF, l_LINE_246);
((*(R11 *)rt_nil_check(l_N_244))).f_A = l_E_243;
l_E_243 = l_N_244;
}
else if ((r_IS(rt_str("[", 1)) && (!r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("]", 1)))))
{
r_SKIP();
l_N_244 = r_NEW_NODE(g_N_SUBSTR, l_LINE_246);
((*(R11 *)rt_nil_check(l_N_244))).f_A = l_E_243;
((*(R11 *)rt_nil_check(l_N_244))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_N_244))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str("]", 1));
l_E_243 = l_N_244;
}
else
{
return l_E_243;
}
}
}
} L_end245: ;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_BITS(rt_int p_BITS_PER, rt_int p_LINE) { 
rt_int l_AT_247; memset(&l_AT_247, 0, sizeof l_AT_247);
l_AT_247 = ((*(R22 *)rt_nil_check(g_W))).f_TOP;
R11 * l_N_248; memset(&l_N_248, 0, sizeof l_N_248);
l_N_248 = r_NEW_NODE(g_N_BITS, p_LINE);
R7 l_R_249; memset(&l_R_249, 0, sizeof l_R_249);
if ((!r_IS_KIND(g_K_STR)))
{
r_FAIL(p_LINE, rt_str("a quoted bitstring expected", 27));
}
for (;;) {
if ((!r_IS_KIND(g_K_STR))) goto L_end250;
{
{
R7 l_T_251; memset(&l_T_251, 0, sizeof l_T_251);
S_R7(&l_T_251, (r_CUR()).f_TX, 0);
rstr l_S_252; memset(&l_S_252, 0, sizeof l_S_252);
l_S_252 = rt_str_new((l_T_251).f_LEN);
rt_b_assign(&l_S_252, r_STR(l_T_251, (l_T_251).f_LEN));
{ rt_int it254_lo = ((rt_int)0LL), it254_hi = rt_sub((l_T_251).f_LEN, ((rt_int)1LL));
for (rt_int it254 = it254_lo; it254 <= it254_hi; it254++) {
{
if ((!rt_b_eq(rt_b_slice(l_S_252, it254, it254), rt_str(" ", 1))))
{
{
rt_int l_C_255; memset(&l_C_255, 0, sizeof l_C_255);
l_C_255 = r_CODE_OF(rt_b_slice(l_S_252, it254, it254));
rt_int l_V_256; memset(&l_V_256, 0, sizeof l_V_256);
l_V_256 = rt_sub(l_C_255, ((rt_int)48LL));
rt_int l_P_257; memset(&l_P_257, 0, sizeof l_P_257);
l_P_257 = ((rt_int)1LL);
if ((l_C_255 >= ((rt_int)65LL)))
{
l_V_256 = rt_sub(l_C_255, ((rt_int)55LL));
}
{ rt_int it259_lo = ((rt_int)1LL), it259_hi = p_BITS_PER;
for (rt_int it259 = it259_lo; it259 <= it259_hi; it259++) {
{
l_P_257 = rt_mul(l_P_257, ((rt_int)2LL));
}
} } L_end258: ;
if (((l_V_256 < ((rt_int)0LL)) || (l_V_256 >= l_P_257)))
{
r_FAIL(p_LINE, rt_str("a bad digit in a bitstring literal", 34));
}
{ rt_int it261_lo = ((rt_int)1LL), it261_hi = p_BITS_PER;
for (rt_int it261 = it261_lo; it261 <= it261_hi; it261++) {
{
l_P_257 = rt_quot(l_P_257, ((rt_int)2LL));
if ((rt_rem((rt_quot(l_V_256, l_P_257)), ((rt_int)2LL)) == ((rt_int)1LL)))
{
S_R7(&l_R_249, r_MK(rt_str("1", 1)), 0);
}
else
{
S_R7(&l_R_249, r_MK(rt_str("0", 1)), 0);
}
}
} } L_end260: ;
}
}
}
} } L_end253: ;
}
r_SKIP();
}
} L_end250: ;
S_R7(&((*(R11 *)rt_nil_check(l_N_248))).f_NAME, ({ R7 rc262; memset(&rc262, 0, sizeof rc262);  rc262.f_AT = l_AT_247; rc262.f_LEN = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_TOP, l_AT_247); rc262.f_H = rt_neg(((rt_int)1LL)); rc262; }), 0);
return l_N_248;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_ATOM(void) { 
R10 l_T_263; memset(&l_T_263, 0, sizeof l_T_263);
S_R10(&l_T_263, r_CUR(), 0);
R11 * l_N_264; memset(&l_N_264, 0, sizeof l_N_264);
if (((l_T_263).f_KIND == g_K_NUM))
{
l_N_264 = r_NEW_NODE(g_N_INT, (l_T_263).f_LINE);
((*(R11 *)rt_nil_check(l_N_264))).f_IV = (l_T_263).f_IV;
S_R7(&((*(R11 *)rt_nil_check(l_N_264))).f_NAME, (l_T_263).f_TX, 0);
r_SKIP();
return l_N_264;
}
if ((((l_T_263).f_KIND == g_K_REAL) || ((l_T_263).f_KIND == g_K_FIX)))
{
l_N_264 = r_NEW_NODE(g_N_REAL, (l_T_263).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_N_264))).f_NAME, (l_T_263).f_TX, 0);
if (((l_T_263).f_KIND == g_K_FIX))
{
((*(R11 *)rt_nil_check(l_N_264))).f_FL = ((rt_int)1LL);
((*(R11 *)rt_nil_check(l_N_264))).f_IV = (l_T_263).f_IV;
}
r_SKIP();
return l_N_264;
}
if (((l_T_263).f_KIND == g_K_GEN))
{
return r_PARSE_TYPE_ARG();
}
if (((r_IS(rt_str("BIN", 3)) || r_IS(rt_str("OCT", 3))) || r_IS(rt_str("HEX", 3))))
{
r_SKIP();
if (r_TOK_IS(l_T_263, rt_str("BIN", 3)))
{
return r_PARSE_BITS(((rt_int)1LL), (l_T_263).f_LINE);
}
else if (r_TOK_IS(l_T_263, rt_str("OCT", 3)))
{
return r_PARSE_BITS(((rt_int)3LL), (l_T_263).f_LINE);
}
return r_PARSE_BITS(((rt_int)4LL), (l_T_263).f_LINE);
}
if ((((l_T_263).f_KIND == g_K_STR) || ((l_T_263).f_KIND == g_K_ENUM)))
{
return r_PARSE_CHARSTRING(r_NO_TEXT());
}
if ((((l_T_263).f_KIND == g_K_ID) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_STR)))
{
r_SKIP();
return r_PARSE_CHARSTRING((l_T_263).f_TX);
}
if (r_ACCEPT(rt_str("TRUE", 4)))
{
l_N_264 = r_NEW_NODE(g_N_BOOL, (l_T_263).f_LINE);
((*(R11 *)rt_nil_check(l_N_264))).f_IV = ((rt_int)1LL);
return l_N_264;
}
else if (r_ACCEPT(rt_str("FALSE", 5)))
{
return r_NEW_NODE(g_N_BOOL, (l_T_263).f_LINE);
}
else if (r_ACCEPT(rt_str("NIL", 3)))
{
return r_NEW_NODE(g_N_NIL, (l_T_263).f_LINE);
}
else if (r_ACCEPT(rt_str("ANY", 3)))
{
return r_NEW_NODE(g_N_ANY, (l_T_263).f_LINE);
}
if (r_ACCEPT(rt_str("[", 1)))
{
{
R11 * l_TS_265; memset(&l_TS_265, 0, sizeof l_TS_265);
l_TS_265 = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str("]", 1));
r_EXPECT(rt_str("$$", 2));
if (((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
l_N_264 = r_PARSE_ATOM();
((*(R11 *)rt_nil_check(l_N_264))).f_B = l_TS_265;
return l_N_264;
}
l_N_264 = r_NEW_NODE(g_N_TYPESPEC, (l_T_263).f_LINE);
((*(R11 *)rt_nil_check(l_N_264))).f_A = l_TS_265;
r_EXPECT(rt_str("(", 1));
((*(R11 *)rt_nil_check(l_N_264))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
return l_N_264;
}
}
if (r_IS(rt_str("(", 1)))
{
if ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
{
R11 * l_HEAD_266; memset(&l_HEAD_266, 0, sizeof l_HEAD_266);
l_HEAD_266 = NULL;
R11 * l_TAIL_267; memset(&l_TAIL_267, 0, sizeof l_TAIL_267);
l_TAIL_267 = NULL;
r_SKIP();
for (;;) {
{
l_N_264 = r_NEW_NODE(g_N_FINIT, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_N_264))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_N_264))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_N_264, &l_HEAD_266, &l_TAIL_267);
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end268;
} L_end268: ;
r_EXPECT(rt_str(")", 1));
l_N_264 = r_NEW_NODE(g_N_RECCONS, (l_T_263).f_LINE);
((*(R11 *)rt_nil_check(l_N_264))).f_A = l_HEAD_266;
return l_N_264;
}
}
r_SKIP();
{
R11 * l_E_269; memset(&l_E_269, 0, sizeof l_E_269);
l_E_269 = r_PARSE_EXPR();
if (r_IS(rt_str(",", 1)))
{
{
R11 * l_HEAD_270; memset(&l_HEAD_270, 0, sizeof l_HEAD_270);
l_HEAD_270 = NULL;
R11 * l_TAIL_271; memset(&l_TAIL_271, 0, sizeof l_TAIL_271);
l_TAIL_271 = NULL;
r_ADD_LIST(l_E_269, &l_HEAD_270, &l_TAIL_271);
for (;;) {
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end272;
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_270, &l_TAIL_271);
}
} L_end272: ;
r_EXPECT(rt_str(")", 1));
l_N_264 = r_NEW_NODE(g_N_ARRCONS, (l_T_263).f_LINE);
((*(R11 *)rt_nil_check(l_N_264))).f_A = l_HEAD_270;
return l_N_264;
}
}
r_EXPECT(rt_str(")", 1));
l_N_264 = r_NEW_NODE(g_N_PAREN, (l_T_263).f_LINE);
((*(R11 *)rt_nil_check(l_N_264))).f_A = l_E_269;
return l_N_264;
}
}
if (((l_T_263).f_KIND == g_K_ID))
{
l_N_264 = r_NEW_NODE(g_N_NAME, (l_T_263).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_N_264))).f_NAME, ((*(R11 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (((r_TEQS(((*(R11 *)rt_nil_check(l_N_264))).f_NAME, rt_str("NEW", 3)) || r_TEQS(((*(R11 *)rt_nil_check(l_N_264))).f_NAME, rt_str("PTR$NEW", 7))) || r_TEQS(((*(R11 *)rt_nil_check(l_N_264))).f_NAME, rt_str("SEMAPHORE$NEW", 13))))
{
((*(R11 *)rt_nil_check(l_N_264))).f_KIND = g_N_NEW;
r_EXPECT(rt_str("(", 1));
((*(R11 *)rt_nil_check(l_N_264))).f_A = r_PARSE_TYPE_ARG();
r_EXPECT(rt_str(")", 1));
}
return l_N_264;
}
r_FAILT((l_T_263).f_LINE, rt_str("an expression expected, not ", 28), (l_T_263).f_TX);
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_CHARSTRING(R7 p_CHARSET) { 
rt_int l_LINE_273; memset(&l_LINE_273, 0, sizeof l_LINE_273);
l_LINE_273 = r_LINE_NOW();
R11 * l_HEAD_274; memset(&l_HEAD_274, 0, sizeof l_HEAD_274);
l_HEAD_274 = NULL;
R11 * l_TAIL_275; memset(&l_TAIL_275, 0, sizeof l_TAIL_275);
l_TAIL_275 = NULL;
rt_int l_STRINGS_276; memset(&l_STRINGS_276, 0, sizeof l_STRINGS_276);
l_STRINGS_276 = ((rt_int)0LL);
R11 * l_N_277; memset(&l_N_277, 0, sizeof l_N_277);
for (;;) {
if ((!((r_IS_KIND(g_K_STR) || r_IS_KIND(g_K_ENUM))))) goto L_end278;
{
l_N_277 = r_NEW_NODE(g_N_PART, r_LINE_NOW());
((*(R11 *)rt_nil_check(l_N_277))).f_IV = (r_CUR()).f_KIND;
S_R7(&((*(R11 *)rt_nil_check(l_N_277))).f_NAME, (r_CUR()).f_TX, 0);
if ((((*(R11 *)rt_nil_check(l_N_277))).f_IV == g_K_STR))
{
l_STRINGS_276 = rt_add(l_STRINGS_276, ((rt_int)1LL));
}
r_SKIP();
r_ADD_LIST(l_N_277, &l_HEAD_274, &l_TAIL_275);
}
} L_end278: ;
if (((l_STRINGS_276 == ((rt_int)0LL)) && ((p_CHARSET).f_LEN == ((rt_int)0LL))))
{
if ((!(((*(R11 *)rt_nil_check(l_HEAD_274))).f_NEXT == NULL)))
{
r_FAIL(l_LINE_273, rt_str("two enumerated literals in a row", 32));
}
((*(R11 *)rt_nil_check(l_HEAD_274))).f_KIND = g_N_ENUMLIT;
return l_HEAD_274;
}
l_N_277 = r_NEW_NODE(g_N_STR, l_LINE_273);
((*(R11 *)rt_nil_check(l_N_277))).f_A = l_HEAD_274;
S_R7(&((*(R11 *)rt_nil_check(l_N_277))).f_NAME, p_CHARSET, 0);
return l_N_277;
rt_raise(RT_X_INIT);
}
static rt_int r_AT_BODY_END(void) { 
return ((((((((((r_IS_KIND(g_K_EOF) || r_IS(rt_str("END", 3))) || r_IS(rt_str("ELSE", 4))) || r_IS(rt_str("ORIF", 4))) || r_IS(rt_str("EXCEPT", 6))) || r_IS(rt_str("PROCEDURE", 9))) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS(rt_str("TARGET", 6))) || r_IS(rt_str("MODULE", 6))) || r_IS(rt_str("PATH", 4)));
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_STATEMENTS(void) { 
R11 * l_HEAD_279; memset(&l_HEAD_279, 0, sizeof l_HEAD_279);
l_HEAD_279 = NULL;
R11 * l_TAIL_280; memset(&l_TAIL_280, 0, sizeof l_TAIL_280);
l_TAIL_280 = NULL;
for (;;) {
if (r_AT_BODY_END()) goto L_end281;
{
r_ADD_LIST(r_PARSE_STATEMENT(), &l_HEAD_279, &l_TAIL_280);
}
} L_end281: ;
return l_HEAD_279;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_HANDLERS(void) { 
R11 * l_HEAD_282; memset(&l_HEAD_282, 0, sizeof l_HEAD_282);
l_HEAD_282 = NULL;
R11 * l_TAIL_283; memset(&l_TAIL_283, 0, sizeof l_TAIL_283);
l_TAIL_283 = NULL;
r_EXPECT(rt_str("EXCEPT", 6));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end284;
{
{
R11 * l_H_285; memset(&l_H_285, 0, sizeof l_H_285);
l_H_285 = r_NEW_NODE(g_N_HANDLER, r_LINE_NOW());
((*(R11 *)rt_nil_check(l_H_285))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str("-->", 3));
((*(R11 *)rt_nil_check(l_H_285))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_H_285, &l_HEAD_282, &l_TAIL_283);
}
}
} L_end284: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("EXCEPT", 6));
r_EXPECT(rt_str(";", 1));
return l_HEAD_282;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_STATEMENT(void) { 
R11 * l_S_286; memset(&l_S_286, 0, sizeof l_S_286);
if ((r_IS_KIND(g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str(":", 1))))
{
l_S_286 = r_NEW_NODE(g_N_LABELED, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_S_286))).f_NAME, r_IDENT(), 0);
r_SKIP();
((*(R11 *)rt_nil_check(l_S_286))).f_A = r_PARSE_STATEMENT();
return l_S_286;
}
l_S_286 = r_PARSE_UNLABELED();
if (r_IS(rt_str("EXCEPT", 6)))
{
{
R11 * l_X_287; memset(&l_X_287, 0, sizeof l_X_287);
l_X_287 = r_NEW_NODE(g_N_EXCEPT, r_LINE_NOW());
((*(R11 *)rt_nil_check(l_X_287))).f_A = l_S_286;
((*(R11 *)rt_nil_check(l_X_287))).f_B = r_PARSE_HANDLERS();
return l_X_287;
}
}
return l_S_286;
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
rt_int l_LINE_288; memset(&l_LINE_288, 0, sizeof l_LINE_288);
l_LINE_288 = r_LINE_NOW();
R11 * l_S_289; memset(&l_S_289, 0, sizeof l_S_289);
R11 * l_T_290; memset(&l_T_290, 0, sizeof l_T_290);
if (r_ACCEPT(rt_str(";", 1)))
{
return r_NEW_NODE(g_N_NULL, l_LINE_288);
}
else if (r_IS(rt_str("IF", 2)))
{
return r_PARSE_IF();
}
else if (r_IS(rt_str("SELECT", 6)))
{
return r_PARSE_CASE();
}
else if (r_IS(rt_str("LOOP", 4)))
{
return r_PARSE_LOOP();
}
else if (r_IS(rt_str("PAR_BLOCK", 9)))
{
return r_PARSE_PAR();
}
else if (r_ACCEPT(rt_str("BLOCK", 5)))
{
l_S_289 = r_NEW_NODE(g_N_BLOCK, l_LINE_288);
((*(R11 *)rt_nil_check(l_S_289))).f_A = r_PARSE_BODY();
r_EXPECT_END(rt_str("BLOCK", 5));
return l_S_289;
}
else if (r_ACCEPT(rt_str("WITH", 4)))
{
l_S_289 = r_NEW_NODE(g_N_WITH, l_LINE_288);
S_R7(&((*(R11 *)rt_nil_check(l_S_289))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("NAMING", 6)))
{
((*(R11 *)rt_nil_check(l_S_289))).f_IV = ((rt_int)1LL);
((*(R11 *)rt_nil_check(l_S_289))).f_A = r_PARSE_POSTFIX();
}
else
{
r_EXPECT(rt_str(":=", 2));
((*(R11 *)rt_nil_check(l_S_289))).f_A = r_PARSE_EXPR();
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
((*(R11 *)rt_nil_check(l_S_289))).f_B = r_PARSE_UNLABELED();
return l_S_289;
}
else if (r_ACCEPT(rt_str("EXIT", 4)))
{
r_EXPECT(rt_str(";", 1));
return r_NEW_NODE(g_N_EXIT, l_LINE_288);
}
else if (r_ACCEPT(rt_str("GO", 2)))
{
r_EXPECT(rt_str("TO", 2));
l_S_289 = r_NEW_NODE(g_N_GOTO, l_LINE_288);
S_R7(&((*(R11 *)rt_nil_check(l_S_289))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(";", 1));
return l_S_289;
}
else if (r_ACCEPT(rt_str("RETURN", 6)))
{
l_S_289 = r_NEW_NODE(g_N_RETURN, l_LINE_288);
if ((!r_IS(rt_str(";", 1))))
{
((*(R11 *)rt_nil_check(l_S_289))).f_A = r_PARSE_EXPR();
}
r_EXPECT(rt_str(";", 1));
return l_S_289;
}
else if (r_ACCEPT(rt_str("SIGNAL", 6)))
{
l_S_289 = r_NEW_NODE(g_N_SIGNAL, l_LINE_288);
if (r_IS_KIND(g_K_ID))
{
S_R7(&((*(R11 *)rt_nil_check(l_S_289))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str(";", 1));
return l_S_289;
}
else if (r_ACCEPT(rt_str("ASSERT", 6)))
{
l_S_289 = r_NEW_NODE(g_N_ASSERT, l_LINE_288);
((*(R11 *)rt_nil_check(l_S_289))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
return l_S_289;
}
else if (r_ACCEPT(rt_str("TERMINATE", 9)))
{
l_S_289 = r_NEW_NODE(g_N_TERMINATE, l_LINE_288);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_S_289))).f_A = r_PARSE_POSTFIX();
r_EXPECT(rt_str(")", 1));
}
r_EXPECT(rt_str(";", 1));
return l_S_289;
}
l_T_290 = r_PARSE_POSTFIX();
if (r_IS(rt_str("[", 1)))
{
r_FAIL(l_LINE_288, rt_str("a substring of a substring", 26));
}
if (r_ACCEPT(rt_str(":=", 2)))
{
l_S_289 = r_NEW_NODE(g_N_ASSIGN, l_LINE_288);
((*(R11 *)rt_nil_check(l_S_289))).f_A = l_T_290;
((*(R11 *)rt_nil_check(l_S_289))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
return l_S_289;
}
r_EXPECT(rt_str(";", 1));
if (((((*(R11 *)rt_nil_check(l_T_290))).f_KIND == g_N_NAME) || (((*(R11 *)rt_nil_check(l_T_290))).f_KIND == g_N_APPLY)))
{
((*(R11 *)rt_nil_check(l_T_290))).f_KIND = g_N_CALL;
}
else
{
r_FAIL(l_LINE_288, rt_str("a statement expected", 20));
}
return l_T_290;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_IF(void) { 
R11 * l_S_291; memset(&l_S_291, 0, sizeof l_S_291);
l_S_291 = r_NEW_NODE(g_N_IF, r_LINE_NOW());
R11 * l_HEAD_292; memset(&l_HEAD_292, 0, sizeof l_HEAD_292);
l_HEAD_292 = NULL;
R11 * l_TAIL_293; memset(&l_TAIL_293, 0, sizeof l_TAIL_293);
l_TAIL_293 = NULL;
r_EXPECT(rt_str("IF", 2));
for (;;) {
{
{
R11 * l_ARM_295; memset(&l_ARM_295, 0, sizeof l_ARM_295);
l_ARM_295 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
((*(R11 *)rt_nil_check(l_ARM_295))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("THEN", 4));
((*(R11 *)rt_nil_check(l_ARM_295))).f_B = r_PARSE_BODY();
r_ADD_LIST(l_ARM_295, &l_HEAD_292, &l_TAIL_293);
}
}
if ((!r_ACCEPT(rt_str("ORIF", 4)))) goto L_end294;
} L_end294: ;
((*(R11 *)rt_nil_check(l_S_291))).f_A = l_HEAD_292;
if (r_ACCEPT(rt_str("ELSE", 4)))
{
((*(R11 *)rt_nil_check(l_S_291))).f_B = r_PARSE_BODY();
}
r_EXPECT_END(rt_str("IF", 2));
return l_S_291;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_CASE_LABEL(void) { 
if ((r_IS(rt_str("[", 1)) || ((r_IS(rt_str("(", 1)) && r_RANGE_AHEAD()))))
{
return r_PARSE_RANGE();
}
return r_PARSE_EXPR();
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_CASE(void) { 
R11 * l_S_296; memset(&l_S_296, 0, sizeof l_S_296);
l_S_296 = r_NEW_NODE(g_N_CASE, r_LINE_NOW());
R11 * l_HEAD_297; memset(&l_HEAD_297, 0, sizeof l_HEAD_297);
l_HEAD_297 = NULL;
R11 * l_TAIL_298; memset(&l_TAIL_298, 0, sizeof l_TAIL_298);
l_TAIL_298 = NULL;
r_EXPECT(rt_str("SELECT", 6));
((*(R11 *)rt_nil_check(l_S_296))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end299;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R11 *)rt_nil_check(l_S_296))).f_C = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R11 *)rt_nil_check(l_S_296))).f_D = r_PARSE_HANDLERS();
}
}
else
{
{
R11 * l_ARM_300; memset(&l_ARM_300, 0, sizeof l_ARM_300);
l_ARM_300 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
R11 * l_LH_301; memset(&l_LH_301, 0, sizeof l_LH_301);
l_LH_301 = NULL;
R11 * l_LT_302; memset(&l_LT_302, 0, sizeof l_LT_302);
l_LT_302 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_301, &l_LT_302);
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end303;
} L_end303: ;
r_EXPECT(rt_str("-->", 3));
((*(R11 *)rt_nil_check(l_ARM_300))).f_A = l_LH_301;
((*(R11 *)rt_nil_check(l_ARM_300))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R11 *)rt_nil_check(l_ARM_300))).f_C = r_PARSE_HANDLERS();
}
r_ADD_LIST(l_ARM_300, &l_HEAD_297, &l_TAIL_298);
}
}
}
} L_end299: ;
((*(R11 *)rt_nil_check(l_S_296))).f_B = l_HEAD_297;
r_EXPECT_END(rt_str("SELECT", 6));
return l_S_296;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_LOOP(void) { 
R11 * l_S_304; memset(&l_S_304, 0, sizeof l_S_304);
l_S_304 = r_NEW_NODE(g_N_LOOP, r_LINE_NOW());
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("FOR", 3)))
{
((*(R11 *)rt_nil_check(l_S_304))).f_KIND = g_N_FOR;
if (r_IS_KIND(g_K_ID))
{
S_R7(&((*(R11 *)rt_nil_check(l_S_304))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("IN", 2));
}
((*(R11 *)rt_nil_check(l_S_304))).f_A = r_PARSE_RANGE();
r_EXPECT(rt_str("DO", 2));
((*(R11 *)rt_nil_check(l_S_304))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_IS_KIND(g_K_ID))
{
if ((!r_TEQ(r_IDENT(), ((*(R11 *)rt_nil_check(l_S_304))).f_NAME)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier", 38));
}
}
else if (((((*(R11 *)rt_nil_check(l_S_304))).f_NAME).f_LEN > ((rt_int)0LL)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier (4.5.6.3)", 48));
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
return l_S_304;
}
if (r_ACCEPT(rt_str("UNTIL", 5)))
{
((*(R11 *)rt_nil_check(l_S_304))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("DO", 2));
}
((*(R11 *)rt_nil_check(l_S_304))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("WHEN", 4)))
{
if ((!(((*(R11 *)rt_nil_check(l_S_304))).f_A == NULL)))
{
r_FAIL(r_LINE_NOW(), rt_str("only one of UNTIL and WHEN (4.5.6.1)", 36));
}
((*(R11 *)rt_nil_check(l_S_304))).f_C = r_PARSE_EXPR();
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
return l_S_304;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_PAR(void) { 
R11 * l_S_305; memset(&l_S_305, 0, sizeof l_S_305);
l_S_305 = r_NEW_NODE(g_N_PAR, r_LINE_NOW());
R11 * l_HEAD_306; memset(&l_HEAD_306, 0, sizeof l_HEAD_306);
l_HEAD_306 = NULL;
R11 * l_TAIL_307; memset(&l_TAIL_307, 0, sizeof l_TAIL_307);
l_TAIL_307 = NULL;
r_EXPECT(rt_str("PAR_BLOCK", 9));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end308;
{
{
R11 * l_P_309; memset(&l_P_309, 0, sizeof l_P_309);
l_P_309 = r_NEW_NODE(g_N_PATH, r_LINE_NOW());
R11 * l_H_310; memset(&l_H_310, 0, sizeof l_H_310);
l_H_310 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
r_EXPECT(rt_str("PATH", 4));
S_R7(&((*(R11 *)rt_nil_check(l_P_309))).f_NAME, r_IDENT(), 0);
((*(R11 *)rt_nil_check(l_P_309))).f_E = r_NEW_NODE(g_N_IDENT, ((*(R11 *)rt_nil_check(l_P_309))).f_LINE);
((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_P_309))).f_E))).f_A = l_H_310;
if (r_ACCEPT(rt_str("FOR", 3)))
{
S_R7(&((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_P_309))).f_E))).f_NAME, r_IDENT(), 0);
((*(R11 *)rt_nil_check(l_P_309))).f_FL = ((rt_int)1LL);
r_EXPECT(rt_str("IN", 2));
((*(R11 *)rt_nil_check(l_P_309))).f_A = r_PARSE_RANGE();
}
for (;;) {
{
if (r_ACCEPT(rt_str("PRIORITY", 8)))
{
((*(R11 *)rt_nil_check(l_P_309))).f_C = r_PARSE_EXPR();
}
else if (r_ACCEPT(rt_str("CONNECT", 7)))
{
r_EXPECT(rt_str("(", 1));
((*(R11 *)rt_nil_check(l_P_309))).f_D = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R11 *)rt_nil_check(l_H_310))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R11 *)rt_nil_check(l_H_310))).f_B = r_PARSE_ITEMS();
}
else
{
goto L_end311;
}
}
} L_end311: ;
r_EXPECT(rt_str(";", 1));
((*(R11 *)rt_nil_check(l_P_309))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PATH", 4));
r_EXPECT_NAME(((*(R11 *)rt_nil_check(l_P_309))).f_NAME);
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_P_309, &l_HEAD_306, &l_TAIL_307);
}
}
} L_end308: ;
((*(R11 *)rt_nil_check(l_S_305))).f_A = l_HEAD_306;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PAR_BLOCK", 9));
r_EXPECT(rt_str(";", 1));
return l_S_305;
rt_raise(RT_X_INIT);
}
static R7 r_NO_TEXT(void) { 
return ({ R7 rc312; memset(&rc312, 0, sizeof rc312);  rc312.f_AT = ((rt_int)0LL); rc312.f_LEN = ((rt_int)0LL); rc312.f_H = ((rt_int)0LL); rc312; });
rt_raise(RT_X_INIT);
}
static R12 r_NO_MVAL(void) { 
return ({ R12 rc313; memset(&rc313, 0, sizeof rc313);  rc313.f_OK = 0; rc313.f_V = ((rt_int)0LL); rc313; });
rt_raise(RT_X_INIT);
}
static R12 r_SOME(rt_int p_V) { 
return ({ R12 rc314; memset(&rc314, 0, sizeof rc314);  rc314.f_OK = 1; rc314.f_V = p_V; rc314; });
rt_raise(RT_X_INIT);
}
static R13 * r_NEW_SYM(rt_int p_KIND, R7 p_NAME) { 
R13 * l_Y_315; memset(&l_Y_315, 0, sizeof l_Y_315);
l_Y_315 = ((R13 *)rt_alloc(sizeof (R13)));
rt_int l_LEVEL_316; memset(&l_LEVEL_316, 0, sizeof l_LEVEL_316);
l_LEVEL_316 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(g_W))).f_CS == NULL)))
{
l_LEVEL_316 = ((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
}
S_R13(&(*(R13 *)rt_nil_check(l_Y_315)), ({ R13 rc317; memset(&rc317, 0, sizeof rc317);  rc317.f_KIND = p_KIND; rc317.f_DEPTH = ((*(R22 *)rt_nil_check(g_W))).f_DEPTH; rc317.f_LEVEL = l_LEVEL_316; S_R7(&rc317.f_NAME, p_NAME, 0); rc317.f_T = NULL; S_R7(&rc317.f_ACCESS, r_NO_TEXT(), 0); S_R7(&rc317.f_FIELD, r_NO_TEXT(), 0); rc317.f_INPUT = 0; rc317.f_BYREF = 0; rc317.f_HASMV = 0; rc317.f_MV = ((rt_int)0LL); rc317.f_TS = NULL; rc317.f_BUSY = 0; S_R7(&rc317.f_FWD, r_NO_TEXT(), 0); rc317.f_PARAMS = NULL; rc317.f_RESULT = NULL; rc317.f_DECL = NULL; S_R7(&rc317.f_PREFIX, r_NO_TEXT(), 0); rc317.f_MODL = ((*(R22 *)rt_nil_check(g_W))).f_MODL; rc317.f_EXPORTED = 0; rc317.f_GENERIC = 0; rc317.f_FRAMED = 0; rc317.f_USES = NULL; rc317.f_INSTANCES = NULL; rc317.f_BINDINGS = NULL; rc317.f_ORIG = NULL; rc317.f_MEMBERS = NULL; rc317.f_SAVED = NULL; rc317.f_OWNER = r_CUR_OWNER(); rc317.f_CHAIN = NULL; rc317.f_SNEXT = NULL; rc317; }), 0);
return l_Y_315;
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_OWNER(void) { 
if ((((*(R22 *)rt_nil_check(g_W))).f_IS == NULL))
{
return ((rt_int)0LL);
}
return ((*(R28 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_IS))).f_ID;
rt_raise(RT_X_INIT);
}
static R13 * r_ORIGINAL(R13 * p_Y) { 
if ((!(((*(R13 *)rt_nil_check(p_Y))).f_ORIG == NULL)))
{
return ((*(R13 *)rt_nil_check(p_Y))).f_ORIG;
}
return p_Y;
rt_raise(RT_X_INIT);
}
static rt_int r_BUCKET(R7 p_NAME) { 
if (((p_NAME).f_H < ((rt_int)0LL)))
{
return r_HASH_OF(r_STR(p_NAME, (p_NAME).f_LEN));
}
return (p_NAME).f_H;
rt_raise(RT_X_INIT);
}
static R13 * r_LOOKUP(R7 p_NAME) { 
R13 * l_Y_318; memset(&l_Y_318, 0, sizeof l_Y_318);
l_Y_318 = (((*(R22 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(r_BUCKET(p_NAME), (((*(R22 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
for (;;) {
if ((l_Y_318 == NULL)) goto L_end319;
{
if (r_TEQ(((*(R13 *)rt_nil_check(l_Y_318))).f_NAME, p_NAME))
{
return l_Y_318;
}
l_Y_318 = ((*(R13 *)rt_nil_check(l_Y_318))).f_CHAIN;
}
} L_end319: ;
return NULL;
rt_raise(RT_X_INIT);
}
static R13 * r_ORIG_LOOKUP(R7 p_NAME) { 
R13 * l_Y_320; memset(&l_Y_320, 0, sizeof l_Y_320);
l_Y_320 = r_LOOKUP(p_NAME);
if ((l_Y_320 == NULL))
{
return NULL;
}
return r_ORIGINAL(l_Y_320);
rt_raise(RT_X_INIT);
}
static R13 * r_LOOKUPS(rstr p_NAME) { 
return r_LOOKUP(r_MKN(p_NAME));
rt_raise(RT_X_INIT);
}
static R13 * r_LOOKUP_NEXT(R13 * p_Y) { 
R13 * l_Z_321; memset(&l_Z_321, 0, sizeof l_Z_321);
l_Z_321 = ((*(R13 *)rt_nil_check(p_Y))).f_CHAIN;
for (;;) {
if ((l_Z_321 == NULL)) goto L_end322;
{
if (r_TEQ(((*(R13 *)rt_nil_check(l_Z_321))).f_NAME, ((*(R13 *)rt_nil_check(p_Y))).f_NAME))
{
return l_Z_321;
}
l_Z_321 = ((*(R13 *)rt_nil_check(l_Z_321))).f_CHAIN;
}
} L_end322: ;
return NULL;
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUTINE(R13 * p_Y) { 
return ((((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_BUILTIN));
rt_raise(RT_X_INIT);
}
static void r_DEFINE(R13 * p_Y, rt_int p_LINE) { 
rt_int l_B_323; memset(&l_B_323, 0, sizeof l_B_323);
l_B_323 = r_BUCKET(((*(R13 *)rt_nil_check(p_Y))).f_NAME);
R13 * l_OLD_324; memset(&l_OLD_324, 0, sizeof l_OLD_324);
l_OLD_324 = r_LOOKUP(((*(R13 *)rt_nil_check(p_Y))).f_NAME);
for (;;) {
if ((l_OLD_324 == NULL)) goto L_end325;
{
if ((!(((*(R13 *)rt_nil_check(l_OLD_324))).f_DEPTH == ((*(R22 *)rt_nil_check(g_W))).f_DEPTH)))
{
goto L_end325;
}
if ((!((((r_IS_ROUTINE(l_OLD_324) && r_IS_ROUTINE(p_Y))) || (((((*(R13 *)rt_nil_check(l_OLD_324))).f_KIND == g_Y_ENUMLIT) && (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)))))))
{
r_FAILT(p_LINE, rt_str("redeclared in the same scope: ", 30), ((*(R13 *)rt_nil_check(p_Y))).f_NAME);
}
l_OLD_324 = r_LOOKUP_NEXT(l_OLD_324);
}
} L_end325: ;
((*(R13 *)rt_nil_check(p_Y))).f_DEPTH = ((*(R22 *)rt_nil_check(g_W))).f_DEPTH;
((*(R13 *)rt_nil_check(p_Y))).f_CHAIN = (((*(R22 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_323, (((*(R22 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R22 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_323, (((*(R22 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_Y;
((*(R13 *)rt_nil_check(p_Y))).f_SNEXT = ((*(R22 *)rt_nil_check(g_W))).f_SCOPE;
((*(R22 *)rt_nil_check(g_W))).f_SCOPE = p_Y;
}
static void r_OPEN_SCOPE(void) { 
((*(R22 *)rt_nil_check(g_W))).f_DEPTH = rt_add(((*(R22 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
}
static void r_CLOSE_SCOPE(void) { 
((*(R22 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((((*(R22 *)rt_nil_check(g_W))).f_SCOPE == NULL)) goto L_end326;
{
if ((((*(R13 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH <= ((*(R22 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end326;
}
r_UNLINK(((*(R22 *)rt_nil_check(g_W))).f_SCOPE);
((*(R22 *)rt_nil_check(g_W))).f_SCOPE = ((*(R13 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_SCOPE))).f_SNEXT;
}
} L_end326: ;
}
static void r_UNLINK(R13 * p_Y) { 
rt_int l_B_327; memset(&l_B_327, 0, sizeof l_B_327);
l_B_327 = r_BUCKET(((*(R13 *)rt_nil_check(p_Y))).f_NAME);
R13 * l_P_328; memset(&l_P_328, 0, sizeof l_P_328);
l_P_328 = (((*(R22 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_327, (((*(R22 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
if ((l_P_328 == p_Y))
{
(((*(R22 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_327, (((*(R22 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = ((*(R13 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
for (;;) {
if ((l_P_328 == NULL)) goto L_end329;
{
if ((((*(R13 *)rt_nil_check(l_P_328))).f_CHAIN == p_Y))
{
((*(R13 *)rt_nil_check(l_P_328))).f_CHAIN = ((*(R13 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
l_P_328 = ((*(R13 *)rt_nil_check(l_P_328))).f_CHAIN;
}
} L_end329: ;
}
static R13 * r_TAKE_SCOPE(R13 * p_MARK) { 
R13 * l_HEAD_330; memset(&l_HEAD_330, 0, sizeof l_HEAD_330);
l_HEAD_330 = NULL;
for (;;) {
if ((((*(R22 *)rt_nil_check(g_W))).f_SCOPE == p_MARK)) goto L_end331;
{
{
R13 * l_Y_332; memset(&l_Y_332, 0, sizeof l_Y_332);
l_Y_332 = ((*(R22 *)rt_nil_check(g_W))).f_SCOPE;
r_UNLINK(l_Y_332);
((*(R22 *)rt_nil_check(g_W))).f_SCOPE = ((*(R13 *)rt_nil_check(l_Y_332))).f_SNEXT;
((*(R13 *)rt_nil_check(l_Y_332))).f_SNEXT = l_HEAD_330;
l_HEAD_330 = l_Y_332;
}
}
} L_end331: ;
return l_HEAD_330;
rt_raise(RT_X_INIT);
}
static R14 * r_NEW_TYP(rt_int p_KIND) { 
R14 * l_T_333; memset(&l_T_333, 0, sizeof l_T_333);
l_T_333 = ((R14 *)rt_alloc(sizeof (R14)));
S_R14(&(*(R14 *)rt_nil_check(l_T_333)), ({ R14 rc334; memset(&rc334, 0, sizeof rc334);  rc334.f_KIND = p_KIND; rc334.f_SCALE = ((rt_int)0LL); S_R7(&rc334.f_LO_C, r_NO_TEXT(), 0); S_R7(&rc334.f_HI_C, r_NO_TEXT(), 0); S_R12(&rc334.f_MLO, r_NO_MVAL(), 0); S_R12(&rc334.f_MHI, r_NO_MVAL(), 0); rc334.f_RLEVEL = ((rt_int)0LL); S_R7(&rc334.f_LEN_C, r_NO_TEXT(), 0); S_R12(&rc334.f_MLEN, r_NO_MVAL(), 0); S_R7(&rc334.f_GEN, r_NO_TEXT(), 0); rc334.f_BASE = NULL; rc334.f_ELEM = NULL; rc334.f_TARGET = NULL; rc334.f_TARGET_TS = NULL; rc334.f_FIELDS = NULL; rc334.f_LITS = NULL; rc334.f_NLITS = ((rt_int)0LL); rc334.f_UNORDERED = 0; rc334.f_BOUNDS = NULL; rc334.f_DIMS = ((rt_int)0LL); rc334.f_ARGS = NULL; S_R7(&rc334.f_NAME, r_NO_TEXT(), 0); S_R7(&rc334.f_CNAME, r_NO_TEXT(), 0); rc334.f_MODL = NULL; rc334.f_REPS = NULL; rc334.f_DECL = NULL; rc334; }), 0);
return l_T_333;
rt_raise(RT_X_INIT);
}
static R14 * r_COPY_TYP(R14 * p_T) { 
R14 * l_C_335; memset(&l_C_335, 0, sizeof l_C_335);
l_C_335 = ((R14 *)rt_alloc(sizeof (R14)));
S_R14(&(*(R14 *)rt_nil_check(l_C_335)), (*(R14 *)rt_nil_check(p_T)), 0);
return l_C_335;
rt_raise(RT_X_INIT);
}
static void r_PREDEF_TYPE(rstr p_NAME, R14 * p_T) { 
R13 * l_Y_336; memset(&l_Y_336, 0, sizeof l_Y_336);
l_Y_336 = r_NEW_SYM(g_Y_TYPE, r_MKN(p_NAME));
((*(R13 *)rt_nil_check(l_Y_336))).f_T = p_T;
if (((((*(R14 *)rt_nil_check(p_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R7(&((*(R14 *)rt_nil_check(p_T))).f_NAME, ((*(R13 *)rt_nil_check(l_Y_336))).f_NAME, 0);
}
r_DEFINE(l_Y_336, ((rt_int)0LL));
}
static void r_PREDEF_BUILTIN(rstr p_NAME) { 
r_DEFINE(r_NEW_SYM(g_Y_BUILTIN, r_MKN(p_NAME)), ((rt_int)0LL));
}
static void r_PREDEF_CONST(rstr p_NAME, R14 * p_T, rt_int p_V) { 
R13 * l_Y_337; memset(&l_Y_337, 0, sizeof l_Y_337);
l_Y_337 = r_NEW_SYM(g_Y_CONST, r_MKN(p_NAME));
((*(R13 *)rt_nil_check(l_Y_337))).f_T = p_T;
((*(R13 *)rt_nil_check(l_Y_337))).f_HASMV = 1;
((*(R13 *)rt_nil_check(l_Y_337))).f_MV = p_V;
((*(R13 *)rt_nil_check(l_Y_337))).f_INPUT = 1;
S_R7(&((*(R13 *)rt_nil_check(l_Y_337))).f_ACCESS, r_FMT1(rt_str("((rt_int)@)", 11), r_NUM(p_V)), 0);
r_DEFINE(l_Y_337, ((rt_int)0LL));
}
static R14 * r_PREDEF_ENUM(rstr p_NAME, rstr p_NAMES, rt_int p_UNORDERED) { 
R11 * l_HEAD_338; memset(&l_HEAD_338, 0, sizeof l_HEAD_338);
l_HEAD_338 = NULL;
R11 * l_TAIL_339; memset(&l_TAIL_339, 0, sizeof l_TAIL_339);
l_TAIL_339 = NULL;
rt_int l_START_340; memset(&l_START_340, 0, sizeof l_START_340);
l_START_340 = ((rt_int)0LL);
{ rt_int it342_lo = ((rt_int)0LL), it342_hi = (rt_int)(p_NAMES).len;
for (rt_int it342 = it342_lo; it342 <= it342_hi; it342++) {
{
if (((it342 == (rt_int)(p_NAMES).len) || rt_b_eq(rt_b_slice(p_NAMES, it342, it342), rt_str(" ", 1))))
{
if ((it342 > l_START_340))
{
{
R11 * l_N_343; memset(&l_N_343, 0, sizeof l_N_343);
l_N_343 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R7(&((*(R11 *)rt_nil_check(l_N_343))).f_NAME, r_MKN(rt_b_slice(p_NAMES, l_START_340, rt_sub(it342, ((rt_int)1LL)))), 0);
r_ADD_LIST(l_N_343, &l_HEAD_338, &l_TAIL_339);
}
}
l_START_340 = rt_add(it342, ((rt_int)1LL));
}
}
} } L_end341: ;
{
R14 * l_T_344; memset(&l_T_344, 0, sizeof l_T_344);
l_T_344 = r_ENUM_CLASS(l_HEAD_338, p_UNORDERED, ((rt_int)0LL));
r_PREDEF_TYPE(p_NAME, l_T_344);
return l_T_344;
}
rt_raise(RT_X_INIT);
}
static void r_PREDEFINE(void) { 
R14 * l_T_345; memset(&l_T_345, 0, sizeof l_T_345);
R11 * l_ASCII_LITS_346; memset(&l_ASCII_LITS_346, 0, sizeof l_ASCII_LITS_346);
l_ASCII_LITS_346 = NULL;
R11 * l_TAIL_347; memset(&l_TAIL_347, 0, sizeof l_TAIL_347);
l_TAIL_347 = NULL;
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
{ rt_int it349_lo = ((rt_int)0LL), it349_hi = ((rt_int)127LL);
for (rt_int it349 = it349_lo; it349 <= it349_hi; it349++) {
{
{
R11 * l_N_350; memset(&l_N_350, 0, sizeof l_N_350);
l_N_350 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R7(&((*(R11 *)rt_nil_check(l_N_350))).f_NAME, r_ASCII_NAME(it349), 0);
r_ADD_LIST(l_N_350, &l_ASCII_LITS_346, &l_TAIL_347);
}
}
} } L_end348: ;
((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII = r_ENUM_CLASS(l_ASCII_LITS_346, 0, ((rt_int)0LL));
r_PREDEF_TYPE(rt_str("ASCII", 5), ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII);
((*(R22 *)rt_nil_check(g_W))).f_TY_ROUNDINGS = r_PREDEF_ENUM(rt_str("ROUNDINGS", 9), rt_str("ROUNDED TRUNCATED NATIVE_R NATIVE_T", 35), 0);
l_T_345 = r_PREDEF_ENUM(rt_str("FIXED_PRECISIONS", 16), rt_str("STD", 3), 0);
l_T_345 = r_PREDEF_ENUM(rt_str("SIGNING", 7), rt_str("SIGNED UNSIGNED", 15), 1);
l_T_345 = r_PREDEF_ENUM(rt_str("PACKING", 7), rt_str("DENSE PACKED UNPACKED", 21), 1);
l_T_345 = r_PREDEF_ENUM(rt_str("USAGE", 5), rt_str("SYNCH REGION", 12), 1);
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
rstr l_CONTROLS_351; memset(&l_CONTROLS_351, 0, sizeof l_CONTROLS_351);
l_CONTROLS_351 = rt_str_new(((rt_int)128LL));
rt_b_assign(&l_CONTROLS_351, rt_str(" NUL SOH STX EXT EOT ENQ ACK BEL BS  HT  LF  VT  FF  CR  SO  SI  DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM  SUB ESC FS  GS  RS  US ", 128));
if ((p_C < ((rt_int)32LL)))
{
if (rt_b_eq(rt_b_slice(l_CONTROLS_351, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL))), rt_str(" ", 1)))
{
return r_MKN(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_351, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)2LL)))));
}
return r_MKN(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_351, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)))));
}
else if ((p_C == ((rt_int)39LL)))
{
return r_MKN(rt_str("\\''''", 5));
}
else if ((p_C < ((rt_int)96LL)))
{
return r_MKN(rt_str_cat(rt_str_cat(rt_str("\\'", 2), r_CHAR_OF(p_C)), rt_str("'", 1)));
}
else if ((p_C == ((rt_int)96LL)))
{
return r_MKN(rt_str("\\ACCENT", 7));
}
else if ((p_C <= ((rt_int)122LL)))
{
return r_MKN(rt_str_cat(rt_str("\\", 1), r_CHAR_OF(rt_sub(p_C, ((rt_int)32LL)))));
}
else if ((p_C == ((rt_int)123LL)))
{
return r_MKN(rt_str("\\[", 2));
}
else if ((p_C == ((rt_int)124LL)))
{
return r_MKN(rt_str("\\BAR", 4));
}
else if ((p_C == ((rt_int)125LL)))
{
return r_MKN(rt_str("\\]", 2));
}
else if ((p_C == ((rt_int)126LL)))
{
return r_MKN(rt_str("\\TILDE", 6));
}
return r_MKN(rt_str("\\DEL", 4));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_SCALAR(R14 * p_T) { 
return (((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_BOOL)) || (((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
rt_raise(RT_X_INIT);
}
static R14 * r_REAL_TYPE(R14 * p_T) { 
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
return r_REAL_TYPE(((*(R14 *)rt_nil_check(p_T))).f_BASE);
}
return p_T;
rt_raise(RT_X_INIT);
}
static R7 r_TYPE_NAME(R14 * p_T) { 
rt_int l_K_352; memset(&l_K_352, 0, sizeof l_K_352);
l_K_352 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if (((((*(R14 *)rt_nil_check(p_T))).f_NAME).f_LEN > ((rt_int)0LL)))
{
return ((*(R14 *)rt_nil_check(p_T))).f_NAME;
}
else if ((l_K_352 == g_T_INT))
{
if ((((*(R14 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))
{
return r_MK(rt_str("INTEGER", 7));
}
return r_FMT1(rt_str("FIXED (@, 2, STD)", 17), r_NUM(((*(R14 *)rt_nil_check(p_T))).f_SCALE));
}
else if ((l_K_352 == g_T_BOOL))
{
return r_MK(rt_str("BOOLEAN", 7));
}
else if ((l_K_352 == g_T_ENUM))
{
if (((!(((*(R14 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R14 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
return r_TYPE_NAME(((*(R14 *)rt_nil_check(p_T))).f_BASE);
}
return r_MK(rt_str("an enumerated type", 18));
}
else if ((l_K_352 == g_T_STR))
{
return r_MK(rt_str("CHAR_STR", 8));
}
else if ((l_K_352 == g_T_BITS))
{
return r_MK(rt_str("BIT", 3));
}
else if ((l_K_352 == g_T_FLOAT))
{
return r_FMT1(rt_str("FLOAT (@)", 9), r_NUM(((*(R14 *)rt_nil_check(p_T))).f_SCALE));
}
else if ((l_K_352 == g_T_ARR))
{
return r_FMT1(rt_str("ARRAY OF @", 10), r_TYPE_NAME(((*(R14 *)rt_nil_check(p_T))).f_ELEM));
}
else if ((l_K_352 == g_T_REC))
{
if (((!(((*(R14 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R14 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
return r_TYPE_NAME(((*(R14 *)rt_nil_check(p_T))).f_BASE);
}
return r_MK(rt_str("RECORD", 6));
}
else if ((l_K_352 == g_T_PTR))
{
return r_MK(rt_str("PTR", 3));
}
else if ((l_K_352 == g_T_SEM))
{
return r_MK(rt_str("SEMAPHORE", 9));
}
else if ((l_K_352 == g_T_NIL))
{
return r_MK(rt_str("NIL", 3));
}
else if ((l_K_352 == g_T_VOID))
{
return r_MK(rt_str("no value", 8));
}
return r_MK(rt_str("a type", 6));
rt_raise(RT_X_INIT);
}
static R7 r_SUBST_SELF(R7 p_T, R7 p_SELF) { 
rstr l_S_353; memset(&l_S_353, 0, sizeof l_S_353);
l_S_353 = rt_str_new((p_T).f_LEN);
rt_b_assign(&l_S_353, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_354; memset(&l_AT_354, 0, sizeof l_AT_354);
l_AT_354 = ((*(R22 *)rt_nil_check(g_W))).f_TOP;
rt_int l_START_355; memset(&l_START_355, 0, sizeof l_START_355);
l_START_355 = ((rt_int)0LL);
R7 l_R_356; memset(&l_R_356, 0, sizeof l_R_356);
rt_int l_I_357; memset(&l_I_357, 0, sizeof l_I_357);
l_I_357 = ((rt_int)0LL);
if (((p_T).f_LEN < ((rt_int)2LL)))
{
return p_T;
}
for (;;) {
if ((l_I_357 >= rt_sub((p_T).f_LEN, ((rt_int)1LL)))) goto L_end358;
{
if (rt_b_eq(rt_b_slice(l_S_353, l_I_357, rt_add(l_I_357, ((rt_int)1LL))), rt_str("$S", 2)))
{
S_R7(&l_R_356, r_MK(rt_b_slice(l_S_353, l_START_355, rt_sub(l_I_357, ((rt_int)1LL)))), 0);
S_R7(&l_R_356, r_MK(r_STR(p_SELF, (p_SELF).f_LEN)), 0);
l_I_357 = rt_add(l_I_357, ((rt_int)2LL));
l_START_355 = l_I_357;
}
else
{
l_I_357 = rt_add(l_I_357, ((rt_int)1LL));
}
}
} L_end358: ;
if ((l_START_355 == ((rt_int)0LL)))
{
((*(R22 *)rt_nil_check(g_W))).f_TOP = l_AT_354;
return p_T;
}
S_R7(&l_R_356, r_MK(rt_b_slice(l_S_353, l_START_355, rt_sub((p_T).f_LEN, ((rt_int)1LL)))), 0);
return ({ R7 rc359; memset(&rc359, 0, sizeof rc359);  rc359.f_AT = l_AT_354; rc359.f_LEN = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_TOP, l_AT_354); rc359.f_H = rt_neg(((rt_int)1LL)); rc359; });
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LITERALS(R11 * p_A, R11 * p_B) { 
R11 * l_P_360; memset(&l_P_360, 0, sizeof l_P_360);
l_P_360 = p_A;
R11 * l_Q_361; memset(&l_Q_361, 0, sizeof l_Q_361);
l_Q_361 = p_B;
for (;;) {
if (((l_P_360 == NULL) || (l_Q_361 == NULL))) goto L_end362;
{
if ((!r_TEQ(((*(R11 *)rt_nil_check(l_P_360))).f_NAME, ((*(R11 *)rt_nil_check(l_Q_361))).f_NAME)))
{
return 0;
}
l_P_360 = ((*(R11 *)rt_nil_check(l_P_360))).f_NEXT;
l_Q_361 = ((*(R11 *)rt_nil_check(l_Q_361))).f_NEXT;
}
} L_end362: ;
return ((l_P_360 == NULL) && (l_Q_361 == NULL));
rt_raise(RT_X_INIT);
}
static R14 * r_ENUM_CLASS(R11 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE) { 
R13 * l_Y_363; memset(&l_Y_363, 0, sizeof l_Y_363);
l_Y_363 = ((*(R22 *)rt_nil_check(g_W))).f_ENUMS;
R14 * l_T_364; memset(&l_T_364, 0, sizeof l_T_364);
for (;;) {
if ((l_Y_363 == NULL)) goto L_end365;
{
if (((((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_363))).f_T))).f_UNORDERED == p_UNORDERED) && r_SAME_LITERALS(((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_363))).f_T))).f_LITS, p_LITS)))
{
r_DECLARE_LITERALS(((*(R13 *)rt_nil_check(l_Y_363))).f_T, p_LINE);
return ((*(R13 *)rt_nil_check(l_Y_363))).f_T;
}
l_Y_363 = ((*(R13 *)rt_nil_check(l_Y_363))).f_INSTANCES;
}
} L_end365: ;
l_T_364 = r_NEW_TYP(g_T_ENUM);
((*(R14 *)rt_nil_check(l_T_364))).f_BASE = l_T_364;
((*(R14 *)rt_nil_check(l_T_364))).f_LITS = p_LITS;
((*(R14 *)rt_nil_check(l_T_364))).f_NLITS = r_LIST_LENGTH(p_LITS);
((*(R14 *)rt_nil_check(l_T_364))).f_UNORDERED = p_UNORDERED;
S_R7(&((*(R14 *)rt_nil_check(l_T_364))).f_CNAME, r_NEW_NAME(rt_str("E", 1)), 0);
l_Y_363 = r_NEW_SYM(g_Y_TYPE, r_NO_TEXT());
((*(R13 *)rt_nil_check(l_Y_363))).f_T = l_T_364;
((*(R13 *)rt_nil_check(l_Y_363))).f_INSTANCES = ((*(R22 *)rt_nil_check(g_W))).f_ENUMS;
((*(R22 *)rt_nil_check(g_W))).f_ENUMS = l_Y_363;
{
R11 * l_P_366; memset(&l_P_366, 0, sizeof l_P_366);
l_P_366 = p_LITS;
R7 l_NAMES_367; memset(&l_NAMES_367, 0, sizeof l_NAMES_367);
S_R7(&l_NAMES_367, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_P_366 == NULL)) goto L_end368;
{
S_R7(&l_NAMES_367, r_FMT2(rt_str("@@, ", 4), l_NAMES_367, r_CSTRING(((*(R11 *)rt_nil_check(l_P_366))).f_NAME)), 0);
l_P_366 = ((*(R11 *)rt_nil_check(l_P_366))).f_NEXT;
}
} L_end368: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static const char *@[] = { @0 };", 32), ((*(R14 *)rt_nil_check(l_T_364))).f_CNAME, l_NAMES_367));
}
r_DECLARE_LITERALS(l_T_364, p_LINE);
return l_T_364;
rt_raise(RT_X_INIT);
}
static void r_DECLARE_LITERALS(R14 * p_T, rt_int p_LINE) { 
R11 * l_P_369; memset(&l_P_369, 0, sizeof l_P_369);
l_P_369 = ((*(R14 *)rt_nil_check(p_T))).f_LITS;
rt_int l_I_370; memset(&l_I_370, 0, sizeof l_I_370);
l_I_370 = ((rt_int)0LL);
for (;;) {
if ((l_P_369 == NULL)) goto L_end371;
{
if ((r_FIND_LITERAL(((*(R11 *)rt_nil_check(l_P_369))).f_NAME, p_T) == NULL))
{
{
R13 * l_Y_372; memset(&l_Y_372, 0, sizeof l_Y_372);
l_Y_372 = r_NEW_SYM(g_Y_ENUMLIT, ((*(R11 *)rt_nil_check(l_P_369))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_372))).f_T = p_T;
((*(R13 *)rt_nil_check(l_Y_372))).f_MV = l_I_370;
((*(R13 *)rt_nil_check(l_Y_372))).f_HASMV = 1;
((*(R13 *)rt_nil_check(l_Y_372))).f_INPUT = 1;
r_DEFINE(l_Y_372, p_LINE);
}
}
l_I_370 = rt_add(l_I_370, ((rt_int)1LL));
l_P_369 = ((*(R11 *)rt_nil_check(l_P_369))).f_NEXT;
}
} L_end371: ;
}
static R13 * r_FIND_LITERAL(R7 p_NAME, R14 * p_T) { 
R13 * l_Y_373; memset(&l_Y_373, 0, sizeof l_Y_373);
l_Y_373 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_373 == NULL)) goto L_end374;
{
if ((((*(R13 *)rt_nil_check(l_Y_373))).f_KIND == g_Y_ENUMLIT))
{
if ((p_T == NULL))
{
return l_Y_373;
}
if ((((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_373))).f_T))).f_BASE == ((*(R14 *)rt_nil_check(p_T))).f_BASE))
{
return l_Y_373;
}
}
l_Y_373 = r_LOOKUP_NEXT(l_Y_373);
}
} L_end374: ;
return NULL;
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_CLASSES(R7 p_NAME) { 
R13 * l_Y_375; memset(&l_Y_375, 0, sizeof l_Y_375);
l_Y_375 = r_LOOKUP(p_NAME);
rt_int l_N_376; memset(&l_N_376, 0, sizeof l_N_376);
l_N_376 = ((rt_int)0LL);
for (;;) {
if ((l_Y_375 == NULL)) goto L_end377;
{
if ((((*(R13 *)rt_nil_check(l_Y_375))).f_KIND == g_Y_ENUMLIT))
{
l_N_376 = rt_add(l_N_376, ((rt_int)1LL));
}
l_Y_375 = r_LOOKUP_NEXT(l_Y_375);
}
} L_end377: ;
return l_N_376;
rt_raise(RT_X_INIT);
}
static R14 * r_RESOLVE(R11 * p_TS) { 
return r_RESOLVE_NAMED(p_TS, r_NO_TEXT());
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
R14 * l_N_378; memset(&l_N_378, 0, sizeof l_N_378);
if ((p_R == NULL))
{
return p_T;
}
if ((r_IS_GENERIC_NODE(((*(R11 *)rt_nil_check(p_R))).f_A) || r_IS_GENERIC_NODE(((*(R11 *)rt_nil_check(p_R))).f_B)))
{
return p_T;
}
if ((!((((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_R))).f_LINE, rt_str("a range is only for fixed, float and enumerated types (3.12.2)", 62));
}
l_N_378 = r_COPY_TYP(p_T);
S_R7(&((*(R14 *)rt_nil_check(l_N_378))).f_NAME, r_NO_TEXT(), 0);
((*(R14 *)rt_nil_check(l_N_378))).f_RLEVEL = r_CUR_LEVEL();
{
R18 l_LO_379; memset(&l_LO_379, 0, sizeof l_LO_379);
R18 l_HI_380; memset(&l_HI_380, 0, sizeof l_HI_380);
S_R18(&l_LO_379, r_EXPR(((*(R11 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R18(&l_HI_380, r_EXPR(((*(R11 *)rt_nil_check(p_R))).f_B, p_T), 0);
S_R7(&((*(R14 *)rt_nil_check(l_N_378))).f_LO_C, (l_LO_379).f_C, 0);
S_R7(&((*(R14 *)rt_nil_check(l_N_378))).f_HI_C, (l_HI_380).f_C, 0);
S_R12(&((*(R14 *)rt_nil_check(l_N_378))).f_MLO, r_MANIFEST(((*(R11 *)rt_nil_check(p_R))).f_A), 0);
S_R12(&((*(R14 *)rt_nil_check(l_N_378))).f_MHI, r_MANIFEST(((*(R11 *)rt_nil_check(p_R))).f_B), 0);
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
S_R12(&((*(R14 *)rt_nil_check(l_N_378))).f_MLO, r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R12(&((*(R14 *)rt_nil_check(l_N_378))).f_MHI, r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(p_R))).f_B, p_T), 0);
}
if (((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_INT) && (!(((*(R14 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))))
{
S_R7(&((*(R14 *)rt_nil_check(l_N_378))).f_LO_C, r_RESCALE(l_LO_379, ((*(R14 *)rt_nil_check(p_T))).f_SCALE, ((*(R11 *)rt_nil_check(p_R))).f_LINE), 0);
S_R7(&((*(R14 *)rt_nil_check(l_N_378))).f_HI_C, r_RESCALE(l_HI_380, ((*(R14 *)rt_nil_check(p_T))).f_SCALE, ((*(R11 *)rt_nil_check(p_R))).f_LINE), 0);
S_R12(&((*(R14 *)rt_nil_check(l_N_378))).f_MLO, r_NO_MVAL(), 0);
S_R12(&((*(R14 *)rt_nil_check(l_N_378))).f_MHI, r_NO_MVAL(), 0);
}
}
if (((((*(R11 *)rt_nil_check(p_R))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(p_R))).f_IV == ((rt_int)3LL))))
{
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R7(&((*(R14 *)rt_nil_check(l_N_378))).f_LO_C, r_FMT1(rt_str("nextafter(@, INFINITY)", 22), ((*(R14 *)rt_nil_check(l_N_378))).f_LO_C), 0);
}
else
{
S_R7(&((*(R14 *)rt_nil_check(l_N_378))).f_LO_C, r_FMT1(rt_str("((@) + 1)", 9), ((*(R14 *)rt_nil_check(l_N_378))).f_LO_C), 0);
(((*(R14 *)rt_nil_check(l_N_378))).f_MLO).f_V = rt_add((((*(R14 *)rt_nil_check(l_N_378))).f_MLO).f_V, ((rt_int)1LL));
}
}
if ((((*(R11 *)rt_nil_check(p_R))).f_IV >= ((rt_int)2LL)))
{
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R7(&((*(R14 *)rt_nil_check(l_N_378))).f_HI_C, r_FMT1(rt_str("nextafter(@, -INFINITY)", 23), ((*(R14 *)rt_nil_check(l_N_378))).f_HI_C), 0);
}
else
{
S_R7(&((*(R14 *)rt_nil_check(l_N_378))).f_HI_C, r_FMT1(rt_str("((@) - 1)", 9), ((*(R14 *)rt_nil_check(l_N_378))).f_HI_C), 0);
(((*(R14 *)rt_nil_check(l_N_378))).f_MHI).f_V = rt_sub((((*(R14 *)rt_nil_check(l_N_378))).f_MHI).f_V, ((rt_int)1LL));
}
}
return l_N_378;
rt_raise(RT_X_INIT);
}
static R12 r_ENUM_MANIFEST(R11 * p_E, R14 * p_T) { 
if (((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{
R13 * l_Y_381; memset(&l_Y_381, 0, sizeof l_Y_381);
l_Y_381 = r_FIND_LITERAL(((*(R11 *)rt_nil_check(p_E))).f_NAME, p_T);
if ((!(l_Y_381 == NULL)))
{
return r_SOME(((*(R13 *)rt_nil_check(l_Y_381))).f_MV);
}
}
}
return r_MANIFEST(p_E);
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_LEVEL(void) { 
if ((((*(R22 *)rt_nil_check(g_W))).f_CS == NULL))
{
return ((rt_int)0LL);
}
return ((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
rt_raise(RT_X_INIT);
}
static R14 * r_ARG_TYPE(R11 * p_N) { 
return r_RESOLVE(r_EXPR_TO_TS(p_N));
rt_raise(RT_X_INIT);
}
static R11 * r_NTH_ARG(R11 * p_TS, rt_int p_K) { 
R11 * l_A_382; memset(&l_A_382, 0, sizeof l_A_382);
l_A_382 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
{ rt_int it384_lo = ((rt_int)1LL), it384_hi = p_K;
for (rt_int it384 = it384_lo; it384 <= it384_hi; it384++) {
{
if ((l_A_382 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
l_A_382 = ((*(R11 *)rt_nil_check(l_A_382))).f_NEXT;
}
} } L_end383: ;
if ((l_A_382 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
return l_A_382;
rt_raise(RT_X_INIT);
}
static R14 * r_RESOLVE_NAMED(R11 * p_TS, R7 p_CNAME) { 
R14 * l_T_385; memset(&l_T_385, 0, sizeof l_T_385);
rt_int l_K_386; memset(&l_K_386, 0, sizeof l_K_386);
l_K_386 = ((*(R11 *)rt_nil_check(p_TS))).f_KIND;
if ((l_K_386 == g_TS_ARRAY))
{
return r_RESOLVE_ARRAY(p_TS);
}
else if ((l_K_386 == g_TS_RECORD))
{
return r_RESOLVE_RECORD(p_TS, p_CNAME, NULL, NULL);
}
else if ((l_K_386 == g_TS_ENUM))
{
l_T_385 = r_ENUM_CLASS(((*(R11 *)rt_nil_check(p_TS))).f_A, (((*(R11 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)), ((*(R11 *)rt_nil_check(p_TS))).f_LINE);
if (((((*(R11 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)) && (!(((*(R11 *)rt_nil_check(p_TS))).f_B == NULL))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("an UNORDERED type has no range", 30));
}
l_T_385 = r_WITH_RANGE(l_T_385, ((*(R11 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R11 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_385 = r_COPY_TYP(l_T_385);
((*(R14 *)rt_nil_check(l_T_385))).f_REPS = ((*(R11 *)rt_nil_check(p_TS))).f_C;
}
return l_T_385;
}
else if ((l_K_386 == g_TS_GEN))
{
return r_GEN_TYPE(p_TS);
}
else if ((!(l_K_386 == g_TS_NAME)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("a type specification expected", 29));
}
l_T_385 = r_RESOLVE_PREDEFINED(p_TS);
if ((l_T_385 == NULL))
{
l_T_385 = r_RESOLVE_USER(p_TS);
}
l_T_385 = r_WITH_RANGE(l_T_385, ((*(R11 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R11 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_385 = r_COPY_TYP(l_T_385);
((*(R14 *)rt_nil_check(l_T_385))).f_REPS = ((*(R11 *)rt_nil_check(p_TS))).f_C;
if ((!(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_TS))).f_C))).f_B == NULL)))
{
if (((!(((*(R14 *)rt_nil_check(l_T_385))).f_KIND == g_T_ENUM)) || (!((*(R14 *)rt_nil_check(l_T_385))).f_UNORDERED)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("ENUM_VAL_REP is only for UNORDERED types (3.4.3)", 48));
}
}
}
return l_T_385;
rt_raise(RT_X_INIT);
}
static R14 * r_GEN_TYPE(R11 * p_TS) { 
R16 * l_B_387; memset(&l_B_387, 0, sizeof l_B_387);
l_B_387 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_387 == NULL)) goto L_end388;
{
if ((r_TEQ(((*(R16 *)rt_nil_check(l_B_387))).f_NAME, ((*(R11 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R16 *)rt_nil_check(l_B_387))).f_T == NULL))))
{
return ((*(R16 *)rt_nil_check(l_B_387))).f_T;
}
l_B_387 = ((*(R16 *)rt_nil_check(l_B_387))).f_NEXT;
}
} L_end388: ;
{
R13 * l_Y_389; memset(&l_Y_389, 0, sizeof l_Y_389);
l_Y_389 = r_LOOKUP(((*(R11 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_389 == NULL)))
{
if (((((*(R13 *)rt_nil_check(l_Y_389))).f_KIND == g_Y_TYPE) && (!(((*(R13 *)rt_nil_check(l_Y_389))).f_T == NULL))))
{
return ((*(R13 *)rt_nil_check(l_Y_389))).f_T;
}
}
}
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("a derived generic type outside a formal parameter list: \?", 57), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
rt_raise(RT_X_INIT);
}
static R14 * r_RESOLVE_PREDEFINED(R11 * p_TS) { 
R7 l_NAME_390; memset(&l_NAME_390, 0, sizeof l_NAME_390);
S_R7(&l_NAME_390, ((*(R11 *)rt_nil_check(p_TS))).f_NAME, 0);
R14 * l_T_391; memset(&l_T_391, 0, sizeof l_T_391);
if (r_TEQS(l_NAME_390, rt_str("FIXED", 5)))
{
{
R12 l_S_392; memset(&l_S_392, 0, sizeof l_S_392);
S_R12(&l_S_392, r_MANIFEST(r_NTH_ARG(p_TS, ((rt_int)0LL))), 0);
R12 l_R_393; memset(&l_R_393, 0, sizeof l_R_393);
S_R12(&l_R_393, r_MANIFEST(r_NTH_ARG(p_TS, ((rt_int)1LL))), 0);
R11 * l_P_394; memset(&l_P_394, 0, sizeof l_P_394);
l_P_394 = r_NTH_ARG(p_TS, ((rt_int)2LL));
if ((!(l_S_392).f_OK))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("the scale must be manifest (3.2.1)", 34));
}
if (((!(l_R_393).f_OK) || (!((l_R_393).f_V == ((rt_int)2LL)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("only radix 2 is predefined (3.2.1)", 34));
}
if (((((*(R11 *)rt_nil_check(l_P_394))).f_KIND == g_N_NAME) || (((*(R11 *)rt_nil_check(l_P_394))).f_KIND == g_N_ENUMLIT)))
{
if (((!(r_FIND_LITERAL(((*(R11 *)rt_nil_check(l_P_394))).f_NAME, NULL) == NULL)) && (!r_TEQS(((*(R11 *)rt_nil_check(l_P_394))).f_NAME, rt_str("STD", 3)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("only STD precision is predefined (3.2.1)", 40));
}
}
if (((l_S_392).f_V == ((rt_int)0LL)))
{
return ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
}
l_T_391 = r_NEW_TYP(g_T_INT);
((*(R14 *)rt_nil_check(l_T_391))).f_SCALE = (l_S_392).f_V;
return l_T_391;
}
}
else if (r_TEQS(l_NAME_390, rt_str("FLOAT", 5)))
{
{
R12 l_P_395; memset(&l_P_395, 0, sizeof l_P_395);
S_R12(&l_P_395, r_MANIFEST(r_NTH_ARG(p_TS, ((rt_int)0LL))), 0);
if ((!(l_P_395).f_OK))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("the precision must be manifest (3.3.1)", 38));
}
if ((((l_P_395).f_V < ((rt_int)1LL)) || ((l_P_395).f_V > ((rt_int)15LL))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("precisions from 1 to 15 are implemented (3.3.1)", 47));
}
l_T_391 = r_NEW_TYP(g_T_FLOAT);
((*(R14 *)rt_nil_check(l_T_391))).f_SCALE = (l_P_395).f_V;
return l_T_391;
}
}
else if (r_TEQS(l_NAME_390, rt_str("BIT", 3)))
{
l_T_391 = r_NEW_TYP(g_T_BITS);
r_STRING_LENGTH(l_T_391, r_NTH_ARG(p_TS, ((rt_int)0LL)));
return l_T_391;
}
else if ((r_TEQS(l_NAME_390, rt_str("CHAR_STR", 8)) || r_TEQS(l_NAME_390, rt_str("ASCII_STR", 9))))
{
l_T_391 = r_NEW_TYP(g_T_STR);
r_STRING_LENGTH(l_T_391, r_NTH_ARG(p_TS, ((rt_int)0LL)));
if (r_TEQS(l_NAME_390, rt_str("CHAR_STR", 8)))
{
{
R11 * l_CS_396; memset(&l_CS_396, 0, sizeof l_CS_396);
l_CS_396 = r_NTH_ARG(p_TS, ((rt_int)1LL));
if ((!r_TEQS(((*(R11 *)rt_nil_check(l_CS_396))).f_NAME, rt_str("ASCII", 5))))
{
if ((!(((*(R14 *)rt_nil_check(r_ARG_TYPE(l_CS_396)))).f_KIND == g_T_ENUM)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset must be an enumerated type (3.7.1)", 44));
}
}
}
}
return l_T_391;
}
else if (r_TEQS(l_NAME_390, rt_str("PTR", 3)))
{
l_T_391 = r_NEW_TYP(g_T_PTR);
((*(R14 *)rt_nil_check(l_T_391))).f_TARGET_TS = r_NTH_ARG(p_TS, ((rt_int)0LL));
return l_T_391;
}
else if (r_TEQS(l_NAME_390, rt_str("SEMAPHORE", 9)))
{
l_T_391 = r_NEW_TYP(g_T_SEM);
{
R11 * l_U_397; memset(&l_U_397, 0, sizeof l_U_397);
l_U_397 = r_NTH_ARG(p_TS, ((rt_int)0LL));
if (r_TEQS(((*(R11 *)rt_nil_check(l_U_397))).f_NAME, rt_str("REGION", 6)))
{
((*(R14 *)rt_nil_check(l_T_391))).f_SCALE = ((rt_int)1LL);
}
else if ((!r_TEQS(((*(R11 *)rt_nil_check(l_U_397))).f_NAME, rt_str("SYNCH", 5))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("the use mode is SYNCH or REGION (3.11.1)", 40));
}
}
return l_T_391;
}
return NULL;
rt_raise(RT_X_INIT);
}
static void r_STRING_LENGTH(R14 * p_T, R11 * p_A) { 
if ((((*(R11 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
{
R16 * l_B_398; memset(&l_B_398, 0, sizeof l_B_398);
l_B_398 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_398 == NULL)) goto L_end399;
{
if ((r_TEQ(((*(R16 *)rt_nil_check(l_B_398))).f_NAME, ((*(R11 *)rt_nil_check(p_A))).f_NAME) && ((((*(R16 *)rt_nil_check(l_B_398))).f_C).f_LEN > ((rt_int)0LL))))
{
S_R7(&((*(R14 *)rt_nil_check(p_T))).f_LEN_C, ((*(R16 *)rt_nil_check(l_B_398))).f_C, 0);
S_R12(&((*(R14 *)rt_nil_check(p_T))).f_MLEN, ({ R12 rc400; memset(&rc400, 0, sizeof rc400);  rc400.f_OK = ((*(R16 *)rt_nil_check(l_B_398))).f_HASMV; rc400.f_V = ((*(R16 *)rt_nil_check(l_B_398))).f_MV; rc400; }), 0);
return;
}
l_B_398 = ((*(R16 *)rt_nil_check(l_B_398))).f_NEXT;
}
} L_end399: ;
}
S_R7(&((*(R14 *)rt_nil_check(p_T))).f_GEN, ((*(R11 *)rt_nil_check(p_A))).f_NAME, 0);
return;
}
else if ((((*(R11 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return;
}
{
R7 l_C_401; memset(&l_C_401, 0, sizeof l_C_401);
R12 l_M_402; memset(&l_M_402, 0, sizeof l_M_402);
r_ATTR_VALUE(p_A, &l_C_401, &l_M_402);
S_R7(&((*(R14 *)rt_nil_check(p_T))).f_LEN_C, l_C_401, 0);
S_R12(&((*(R14 *)rt_nil_check(p_T))).f_MLEN, l_M_402, 0);
((*(R14 *)rt_nil_check(p_T))).f_RLEVEL = r_CUR_LEVEL();
}
}
static R14 * r_RESOLVE_ARRAY(R11 * p_TS) { 
R14 * l_T_403; memset(&l_T_403, 0, sizeof l_T_403);
l_T_403 = r_NEW_TYP(g_T_ARR);
R11 * l_R_404; memset(&l_R_404, 0, sizeof l_R_404);
l_R_404 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
R17 * l_TAIL_405; memset(&l_TAIL_405, 0, sizeof l_TAIL_405);
l_TAIL_405 = NULL;
for (;;) {
if ((l_R_404 == NULL)) goto L_end406;
{
{
R17 * l_B_407; memset(&l_B_407, 0, sizeof l_B_407);
l_B_407 = ((R17 *)rt_alloc(sizeof (R17)));
R18 l_LO_408; memset(&l_LO_408, 0, sizeof l_LO_408);
S_R18(&l_LO_408, r_EXPR(((*(R11 *)rt_nil_check(l_R_404))).f_A, NULL), 0);
R18 l_HI_409; memset(&l_HI_409, 0, sizeof l_HI_409);
S_R18(&l_HI_409, r_EXPR(((*(R11 *)rt_nil_check(l_R_404))).f_B, (l_LO_408).f_T), 0);
S_R17(&(*(R17 *)rt_nil_check(l_B_407)), ({ R17 rc410; memset(&rc410, 0, sizeof rc410);  S_R7(&rc410.f_LO, (l_LO_408).f_C, 0); S_R7(&rc410.f_HI, (l_HI_409).f_C, 0); S_R12(&rc410.f_MLO, r_MANIFEST(((*(R11 *)rt_nil_check(l_R_404))).f_A), 0); S_R12(&rc410.f_MHI, r_MANIFEST(((*(R11 *)rt_nil_check(l_R_404))).f_B), 0); rc410.f_ANYARG = 0; rc410.f_NEXT = NULL; rc410; }), 0);
if ((((*(R14 *)rt_nil_check((l_LO_408).f_T))).f_KIND == g_T_ENUM))
{
S_R12(&((*(R17 *)rt_nil_check(l_B_407))).f_MLO, r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(l_R_404))).f_A, (l_LO_408).f_T), 0);
S_R12(&((*(R17 *)rt_nil_check(l_B_407))).f_MHI, r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(l_R_404))).f_B, (l_LO_408).f_T), 0);
}
else if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_LO_408).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(((*(R11 *)rt_nil_check(l_R_404))).f_LINE, rt_str("array bounds are integer or enumerated (3.8.1)", 46));
}
if ((l_TAIL_405 == NULL))
{
((*(R14 *)rt_nil_check(l_T_403))).f_BOUNDS = l_B_407;
}
else
{
((*(R17 *)rt_nil_check(l_TAIL_405))).f_NEXT = l_B_407;
}
l_TAIL_405 = l_B_407;
((*(R14 *)rt_nil_check(l_T_403))).f_DIMS = rt_add(((*(R14 *)rt_nil_check(l_T_403))).f_DIMS, ((rt_int)1LL));
}
l_R_404 = ((*(R11 *)rt_nil_check(l_R_404))).f_NEXT;
}
} L_end406: ;
((*(R14 *)rt_nil_check(l_T_403))).f_RLEVEL = r_CUR_LEVEL();
((*(R14 *)rt_nil_check(l_T_403))).f_ELEM = r_RESOLVE(((*(R11 *)rt_nil_check(p_TS))).f_C);
if ((((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_403))).f_ELEM))).f_KIND == g_T_ARR))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("ARRAY ... OF ARRAY is forbidden (3.8.1)", 39));
}
((*(R14 *)rt_nil_check(l_T_403))).f_REPS = ((*(R11 *)rt_nil_check(p_TS))).f_D;
S_R7(&((*(R14 *)rt_nil_check(l_T_403))).f_CNAME, r_ARRAY_STRUCT(((*(R14 *)rt_nil_check(l_T_403))).f_ELEM, ((*(R14 *)rt_nil_check(l_T_403))).f_DIMS), 0);
return l_T_403;
rt_raise(RT_X_INIT);
}
static R14 * r_RESOLVE_USER(R11 * p_TS) { 
R13 * l_Y_411; memset(&l_Y_411, 0, sizeof l_Y_411);
l_Y_411 = r_ORIG_LOOKUP(((*(R11 *)rt_nil_check(p_TS))).f_NAME);
if ((((*(R11 *)rt_nil_check(p_TS))).f_A == NULL))
{
{
R16 * l_B_412; memset(&l_B_412, 0, sizeof l_B_412);
l_B_412 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_412 == NULL)) goto L_end413;
{
if ((r_TEQ(((*(R16 *)rt_nil_check(l_B_412))).f_NAME, ((*(R11 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R16 *)rt_nil_check(l_B_412))).f_T == NULL))))
{
return ((*(R16 *)rt_nil_check(l_B_412))).f_T;
}
l_B_412 = ((*(R16 *)rt_nil_check(l_B_412))).f_NEXT;
}
} L_end413: ;
}
}
if ((l_Y_411 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R13 *)rt_nil_check(l_Y_411))).f_KIND == g_Y_GEN))
{
return r_GEN_TYPE(p_TS);
}
if ((!(((*(R13 *)rt_nil_check(l_Y_411))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R13 *)rt_nil_check(l_Y_411))).f_DECL == NULL))
{
if ((!(((*(R11 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
return ((*(R13 *)rt_nil_check(l_Y_411))).f_T;
}
{
R11 * l_D_414; memset(&l_D_414, 0, sizeof l_D_414);
l_D_414 = ((*(R13 *)rt_nil_check(l_Y_411))).f_DECL;
R14 * l_T_415; memset(&l_T_415, 0, sizeof l_T_415);
if ((((*(R11 *)rt_nil_check(l_D_414))).f_A == NULL))
{
if ((!(((*(R11 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R13 *)rt_nil_check(l_Y_411))).f_T == NULL))
{
if (((*(R13 *)rt_nil_check(l_Y_411))).f_BUSY)
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R13 *)rt_nil_check(l_Y_411))).f_BUSY = 1;
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_D_414))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R13 *)rt_nil_check(l_Y_411))).f_T = r_RESOLVE_RECORD(((*(R11 *)rt_nil_check(l_D_414))).f_B, r_RECORD_NAME(l_Y_411), l_Y_411, NULL);
}
else
{
((*(R13 *)rt_nil_check(l_Y_411))).f_T = r_RESOLVE_IN_DECL(l_Y_411, NULL);
if ((((((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_411))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)) && (!(((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_411))).f_T))).f_KIND == g_T_ENUM))))
{
((*(R13 *)rt_nil_check(l_Y_411))).f_T = r_COPY_TYP(((*(R13 *)rt_nil_check(l_Y_411))).f_T);
}
}
if (((((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_411))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R7(&((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_411))).f_T))).f_NAME, ((*(R13 *)rt_nil_check(l_Y_411))).f_NAME, 0);
}
((*(R13 *)rt_nil_check(l_Y_411))).f_BUSY = 0;
}
l_T_415 = ((*(R13 *)rt_nil_check(l_Y_411))).f_T;
}
else
{
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_D_414))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_415 = r_RECORD_INSTANCE(l_Y_411, p_TS);
}
else
{
l_T_415 = r_RESOLVE_IN_DECL(l_Y_411, p_TS);
}
}
return r_ABSTRACT_VIEW(l_Y_411, l_T_415);
}
rt_raise(RT_X_INIT);
}
static R14 * r_ABSTRACT_VIEW(R13 * p_Y, R14 * p_T) { 
R14 * l_A_416; memset(&l_A_416, 0, sizeof l_A_416);
if (((((*(R13 *)rt_nil_check(p_Y))).f_MODL == NULL) || (!((*(R13 *)rt_nil_check(p_Y))).f_EXPORTED)))
{
return p_T;
}
if (r_IN_MODULE(((*(R13 *)rt_nil_check(p_Y))).f_MODL))
{
return p_T;
}
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
return p_T;
}
l_A_416 = r_NEW_TYP(g_T_ABS);
((*(R14 *)rt_nil_check(l_A_416))).f_BASE = p_T;
S_R7(&((*(R14 *)rt_nil_check(l_A_416))).f_NAME, ((*(R13 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R14 *)rt_nil_check(l_A_416))).f_MODL = ((*(R13 *)rt_nil_check(p_Y))).f_MODL;
((*(R14 *)rt_nil_check(l_A_416))).f_DECL = p_Y;
((*(R14 *)rt_nil_check(l_A_416))).f_ARGS = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
return l_A_416;
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R13 * p_M) { 
R13 * l_P_417; memset(&l_P_417, 0, sizeof l_P_417);
l_P_417 = ((*(R22 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_417 == NULL)) goto L_end418;
{
if ((l_P_417 == p_M))
{
return 1;
}
l_P_417 = ((*(R13 *)rt_nil_check(l_P_417))).f_MODL;
}
} L_end418: ;
return 0;
rt_raise(RT_X_INIT);
}
static R14 * r_RESOLVE_IN_DECL(R13 * p_Y, R11 * p_TS) { 
R11 * l_D_419; memset(&l_D_419, 0, sizeof l_D_419);
l_D_419 = ((*(R13 *)rt_nil_check(p_Y))).f_DECL;
R14 * l_T_420; memset(&l_T_420, 0, sizeof l_T_420);
if ((p_TS == NULL))
{
return r_RESOLVE(((*(R11 *)rt_nil_check(l_D_419))).f_B);
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R11 *)rt_nil_check(l_D_419))).f_A, p_TS);
l_T_420 = r_RESOLVE(((*(R11 *)rt_nil_check(l_D_419))).f_B);
r_CLOSE_SCOPE();
return l_T_420;
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R11 * p_FORMALS, R11 * p_TS) { 
R11 * l_F_421; memset(&l_F_421, 0, sizeof l_F_421);
l_F_421 = p_FORMALS;
R11 * l_A_422; memset(&l_A_422, 0, sizeof l_A_422);
l_A_422 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_421 == NULL)) goto L_end423;
{
{
R11 * l_N_424; memset(&l_N_424, 0, sizeof l_N_424);
l_N_424 = ((*(R11 *)rt_nil_check(l_F_421))).f_A;
for (;;) {
if ((l_N_424 == NULL)) goto L_end425;
{
if ((l_A_422 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R11 *)rt_nil_check(l_F_421))).f_B == NULL))
{
{
R13 * l_Y_426; memset(&l_Y_426, 0, sizeof l_Y_426);
l_Y_426 = r_NEW_SYM(g_Y_TYPE, ((*(R11 *)rt_nil_check(l_N_424))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_426))).f_T = r_ARG_TYPE(l_A_422);
r_DEFINE(l_Y_426, ((*(R11 *)rt_nil_check(l_A_422))).f_LINE);
}
}
else
{
{
R13 * l_Y_427; memset(&l_Y_427, 0, sizeof l_Y_427);
l_Y_427 = r_NEW_SYM(g_Y_CONST, ((*(R11 *)rt_nil_check(l_N_424))).f_NAME);
R7 l_C_428; memset(&l_C_428, 0, sizeof l_C_428);
R12 l_M_429; memset(&l_M_429, 0, sizeof l_M_429);
((*(R13 *)rt_nil_check(l_Y_427))).f_T = r_RESOLVE(((*(R11 *)rt_nil_check(l_F_421))).f_B);
if ((((*(R11 *)rt_nil_check(l_A_422))).f_KIND == g_N_ANY))
{
r_FAIL(((*(R11 *)rt_nil_check(l_A_422))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
r_ATTR_VALUE(l_A_422, &l_C_428, &l_M_429);
if ((!(((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_427))).f_T))).f_KIND == g_T_INT)))
{
S_R7(&l_C_428, (r_EXPR(l_A_422, ((*(R13 *)rt_nil_check(l_Y_427))).f_T)).f_C, 0);
S_R12(&l_M_429, r_ENUM_MANIFEST(l_A_422, ((*(R13 *)rt_nil_check(l_Y_427))).f_T), 0);
}
S_R7(&((*(R13 *)rt_nil_check(l_Y_427))).f_ACCESS, l_C_428, 0);
((*(R13 *)rt_nil_check(l_Y_427))).f_HASMV = (l_M_429).f_OK;
((*(R13 *)rt_nil_check(l_Y_427))).f_MV = (l_M_429).f_V;
((*(R13 *)rt_nil_check(l_Y_427))).f_INPUT = 1;
r_DEFINE(l_Y_427, ((*(R11 *)rt_nil_check(l_A_422))).f_LINE);
}
}
l_A_422 = ((*(R11 *)rt_nil_check(l_A_422))).f_NEXT;
l_N_424 = ((*(R11 *)rt_nil_check(l_N_424))).f_NEXT;
}
} L_end425: ;
}
l_F_421 = ((*(R11 *)rt_nil_check(l_F_421))).f_NEXT;
}
} L_end423: ;
if ((!(l_A_422 == NULL)))
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
return ((*(R13 *)rt_nil_check(p_Y))).f_FWD;
rt_raise(RT_X_INIT);
}
static R14 * r_TARGET(R14 * p_T) { 
if ((((*(R14 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R14 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R14 *)rt_nil_check(p_T))).f_TARGET_TS);
}
return ((*(R14 *)rt_nil_check(p_T))).f_TARGET;
rt_raise(RT_X_INIT);
}
static R7 r_CTYPE(R14 * p_T) { 
rt_int l_K_430; memset(&l_K_430, 0, sizeof l_K_430);
l_K_430 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
return r_MK(rt_str("rt_int", 6));
}
else if ((l_K_430 == g_T_FLOAT))
{
return r_MK(rt_str("double", 6));
}
else if (((l_K_430 == g_T_STR) || (l_K_430 == g_T_BITS)))
{
return r_MK(rt_str("rstr", 4));
}
else if (((l_K_430 == g_T_REC) || (l_K_430 == g_T_ARR)))
{
return ((*(R14 *)rt_nil_check(p_T))).f_CNAME;
}
else if ((l_K_430 == g_T_ABS))
{
return r_CTYPE(((*(R14 *)rt_nil_check(p_T))).f_BASE);
}
else if ((l_K_430 == g_T_SEM))
{
return r_MK(rt_str("rt_b_sem *", 10));
}
else if ((l_K_430 == g_T_PATHS))
{
return r_MK(rt_str("rt_b_paths", 10));
}
else if ((l_K_430 == g_T_VOID))
{
return r_MK(rt_str("void", 4));
}
else if ((l_K_430 == g_T_PTR))
{
if ((((*(R14 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R11 * l_TT_431; memset(&l_TT_431, 0, sizeof l_TT_431);
l_TT_431 = ((*(R14 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R11 *)rt_nil_check(l_TT_431))).f_KIND == g_TS_NAME) && (((*(R11 *)rt_nil_check(l_TT_431))).f_A == NULL)))
{
{
R13 * l_Y_432; memset(&l_Y_432, 0, sizeof l_Y_432);
l_Y_432 = r_ORIG_LOOKUP(((*(R11 *)rt_nil_check(l_TT_431))).f_NAME);
if ((!(l_Y_432 == NULL)))
{
if (((((*(R13 *)rt_nil_check(l_Y_432))).f_KIND == g_Y_TYPE) && (!(((*(R13 *)rt_nil_check(l_Y_432))).f_DECL == NULL))))
{
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_432))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_432))).f_DECL))).f_A == NULL)))
{
return r_CATS(r_RECORD_NAME(l_Y_432), rt_str(" *", 2));
}
}
}
}
}
}
}
return r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R11 * p_E) { 
return ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
rt_raise(RT_X_INIT);
}
static R15 * r_NEW_FIELD(R7 p_NAME, R14 * p_T, rt_int p_KIND) { 
R15 * l_F_433; memset(&l_F_433, 0, sizeof l_F_433);
l_F_433 = ((R15 *)rt_alloc(sizeof (R15)));
S_R15(&(*(R15 *)rt_nil_check(l_F_433)), ({ R15 rc434; memset(&rc434, 0, sizeof rc434);  S_R7(&rc434.f_NAME, p_NAME, 0); S_R7(&rc434.f_CNAME, r_FMT1(rt_str("f_@", 3), p_NAME), 0); rc434.f_T = p_T; rc434.f_KIND = p_KIND; S_R7(&rc434.f_TAGF, r_NO_TEXT(), 0); rc434.f_LABELS = NULL; rc434.f_NEXT = NULL; rc434; }), 0);
return l_F_433;
rt_raise(RT_X_INIT);
}
static R15 * r_FIND_FIELD(R14 * p_T, R7 p_NAME) { 
R15 * l_F_435; memset(&l_F_435, 0, sizeof l_F_435);
l_F_435 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_435 == NULL)) goto L_end436;
{
if (r_TEQ(((*(R15 *)rt_nil_check(l_F_435))).f_NAME, p_NAME))
{
return l_F_435;
}
l_F_435 = ((*(R15 *)rt_nil_check(l_F_435))).f_NEXT;
}
} L_end436: ;
return NULL;
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R14 * p_T, R15 * p_F, R15 * *p_TAIL) { 
R15 * l_P_437; memset(&l_P_437, 0, sizeof l_P_437);
l_P_437 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_438; memset(&l_N_438, 0, sizeof l_N_438);
l_N_438 = ((rt_int)0LL);
for (;;) {
if ((l_P_437 == NULL)) goto L_end439;
{
if (r_TEQ(((*(R15 *)rt_nil_check(l_P_437))).f_NAME, ((*(R15 *)rt_nil_check(p_F))).f_NAME))
{
l_N_438 = rt_add(l_N_438, ((rt_int)1LL));
}
l_P_437 = ((*(R15 *)rt_nil_check(l_P_437))).f_NEXT;
}
} L_end439: ;
if ((l_N_438 > ((rt_int)0LL)))
{
S_R7(&((*(R15 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R15 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_438)), 0);
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
R11 * l_D_440; memset(&l_D_440, 0, sizeof l_D_440);
l_D_440 = p_DECLS;
for (;;) {
if ((l_D_440 == NULL)) goto L_end441;
{
if ((((*(R11 *)rt_nil_check(l_D_440))).f_KIND == g_N_VAR))
{
{
R14 * l_FT_442; memset(&l_FT_442, 0, sizeof l_FT_442);
l_FT_442 = r_RESOLVE(((*(R11 *)rt_nil_check(l_D_440))).f_B);
R11 * l_N_443; memset(&l_N_443, 0, sizeof l_N_443);
l_N_443 = ((*(R11 *)rt_nil_check(l_D_440))).f_A;
for (;;) {
if ((l_N_443 == NULL)) goto L_end444;
{
{
R15 * l_F_445; memset(&l_F_445, 0, sizeof l_F_445);
l_F_445 = r_NEW_FIELD(((*(R11 *)rt_nil_check(l_N_443))).f_NAME, l_FT_442, ((rt_int)0LL));
S_R7(&((*(R15 *)rt_nil_check(l_F_445))).f_TAGF, p_TAGN, 0);
((*(R15 *)rt_nil_check(l_F_445))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_445, &(*p_TAIL));
}
l_N_443 = ((*(R11 *)rt_nil_check(l_N_443))).f_NEXT;
}
} L_end444: ;
}
}
else
{
{
R15 * l_TF_446; memset(&l_TF_446, 0, sizeof l_TF_446);
l_TF_446 = r_FIND_FIELD(p_T, ((*(R11 *)rt_nil_check(l_D_440))).f_NAME);
R11 * l_S_447; memset(&l_S_447, 0, sizeof l_S_447);
l_S_447 = ((*(R11 *)rt_nil_check(l_D_440))).f_A;
if ((l_TF_446 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(l_D_440))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R11 *)rt_nil_check(l_D_440))).f_NAME);
}
if ((!(((*(R15 *)rt_nil_check(l_TF_446))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R11 *)rt_nil_check(l_D_440))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R11 *)rt_nil_check(l_D_440))).f_NAME);
}
for (;;) {
if ((l_S_447 == NULL)) goto L_end448;
{
r_RECORD_FIELDS(p_T, ((*(R11 *)rt_nil_check(l_S_447))).f_B, ((*(R11 *)rt_nil_check(l_D_440))).f_NAME, ((*(R11 *)rt_nil_check(l_S_447))).f_A, &(*p_TAIL));
l_S_447 = ((*(R11 *)rt_nil_check(l_S_447))).f_NEXT;
}
} L_end448: ;
}
}
l_D_440 = ((*(R11 *)rt_nil_check(l_D_440))).f_NEXT;
}
} L_end441: ;
}
static R14 * r_RESOLVE_RECORD(R11 * p_TS, R7 p_CNAME, R13 * p_Y, R11 * p_FORMALS) { 
R14 * l_T_449; memset(&l_T_449, 0, sizeof l_T_449);
l_T_449 = r_NEW_TYP(g_T_REC);
R15 * l_TAIL_450; memset(&l_TAIL_450, 0, sizeof l_TAIL_450);
l_TAIL_450 = NULL;
((*(R14 *)rt_nil_check(l_T_449))).f_BASE = l_T_449;
((*(R14 *)rt_nil_check(l_T_449))).f_DECL = p_Y;
((*(R14 *)rt_nil_check(l_T_449))).f_REPS = ((*(R11 *)rt_nil_check(p_TS))).f_D;
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R7(&((*(R14 *)rt_nil_check(l_T_449))).f_CNAME, p_CNAME, 0);
}
else
{
S_R7(&((*(R14 *)rt_nil_check(l_T_449))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R14 *)rt_nil_check(l_T_449))).f_CNAME, ((*(R14 *)rt_nil_check(l_T_449))).f_CNAME));
}
{
R11 * l_F_451; memset(&l_F_451, 0, sizeof l_F_451);
l_F_451 = p_FORMALS;
for (;;) {
if ((l_F_451 == NULL)) goto L_end452;
{
if ((!(((*(R11 *)rt_nil_check(l_F_451))).f_B == NULL)))
{
{
R14 * l_FT_453; memset(&l_FT_453, 0, sizeof l_FT_453);
l_FT_453 = r_RESOLVE(((*(R11 *)rt_nil_check(l_F_451))).f_B);
R11 * l_N_454; memset(&l_N_454, 0, sizeof l_N_454);
l_N_454 = ((*(R11 *)rt_nil_check(l_F_451))).f_A;
rt_int l_KIND_455; memset(&l_KIND_455, 0, sizeof l_KIND_455);
l_KIND_455 = ((rt_int)1LL);
if ((((*(R11 *)rt_nil_check(l_F_451))).f_IV == ((rt_int)1LL)))
{
l_KIND_455 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_453))) || (!(((*(R14 *)rt_nil_check(l_FT_453))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R11 *)rt_nil_check(l_F_451))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_454 == NULL)) goto L_end456;
{
r_ADD_FIELD(l_T_449, r_NEW_FIELD(((*(R11 *)rt_nil_check(l_N_454))).f_NAME, l_FT_453, l_KIND_455), &l_TAIL_450);
l_N_454 = ((*(R11 *)rt_nil_check(l_N_454))).f_NEXT;
}
} L_end456: ;
}
}
l_F_451 = ((*(R11 *)rt_nil_check(l_F_451))).f_NEXT;
}
} L_end452: ;
}
r_RECORD_FIELDS(l_T_449, ((*(R11 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_450);
r_COMPLETE_RECORD(l_T_449);
return l_T_449;
rt_raise(RT_X_INIT);
}
static R14 * r_RECORD_INSTANCE(R13 * p_Y, R11 * p_TS) { 
R11 * l_D_457; memset(&l_D_457, 0, sizeof l_D_457);
l_D_457 = ((*(R13 *)rt_nil_check(p_Y))).f_DECL;
R14 * l_CLASS_458; memset(&l_CLASS_458, 0, sizeof l_CLASS_458);
l_CLASS_458 = NULL;
R16 * l_TARGS_459; memset(&l_TARGS_459, 0, sizeof l_TARGS_459);
l_TARGS_459 = NULL;
R17 * l_VARGS_460; memset(&l_VARGS_460, 0, sizeof l_VARGS_460);
l_VARGS_460 = NULL;
R17 * l_VTAIL_461; memset(&l_VTAIL_461, 0, sizeof l_VTAIL_461);
l_VTAIL_461 = NULL;
R11 * l_A_462; memset(&l_A_462, 0, sizeof l_A_462);
l_A_462 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
R11 * l_F_463; memset(&l_F_463, 0, sizeof l_F_463);
l_F_463 = ((*(R11 *)rt_nil_check(l_D_457))).f_A;
for (;;) {
if ((l_F_463 == NULL)) goto L_end464;
{
{
R11 * l_N_465; memset(&l_N_465, 0, sizeof l_N_465);
l_N_465 = ((*(R11 *)rt_nil_check(l_F_463))).f_A;
for (;;) {
if ((l_N_465 == NULL)) goto L_end466;
{
if ((l_A_462 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R11 *)rt_nil_check(l_F_463))).f_B == NULL))
{
{
R16 * l_B_467; memset(&l_B_467, 0, sizeof l_B_467);
l_B_467 = ((R16 *)rt_alloc(sizeof (R16)));
S_R16(&(*(R16 *)rt_nil_check(l_B_467)), ({ R16 rc468; memset(&rc468, 0, sizeof rc468);  S_R7(&rc468.f_NAME, ((*(R11 *)rt_nil_check(l_N_465))).f_NAME, 0); rc468.f_T = r_ARG_TYPE(l_A_462); S_R7(&rc468.f_C, r_NO_TEXT(), 0); rc468.f_HASMV = 0; rc468.f_MV = ((rt_int)0LL); rc468.f_R = NULL; rc468.f_NEXT = l_TARGS_459; rc468; }), 0);
l_TARGS_459 = l_B_467;
}
}
else
{
{
R17 * l_V_469; memset(&l_V_469, 0, sizeof l_V_469);
l_V_469 = ((R17 *)rt_alloc(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_V_469)), ({ R17 rc470; memset(&rc470, 0, sizeof rc470);  S_R7(&rc470.f_LO, r_NO_TEXT(), 0); S_R7(&rc470.f_HI, r_NO_TEXT(), 0); S_R12(&rc470.f_MLO, r_NO_MVAL(), 0); S_R12(&rc470.f_MHI, r_NO_MVAL(), 0); rc470.f_ANYARG = 0; rc470.f_NEXT = NULL; rc470; }), 0);
if ((((*(R11 *)rt_nil_check(l_A_462))).f_KIND == g_N_ANY))
{
if ((!(((*(R11 *)rt_nil_check(l_F_463))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R11 *)rt_nil_check(l_A_462))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R17 *)rt_nil_check(l_V_469))).f_ANYARG = 1;
}
else if ((((*(R11 *)rt_nil_check(l_A_462))).f_KIND == g_N_DONTCARE))
{
((*(R17 *)rt_nil_check(l_V_469))).f_ANYARG = 1;
S_R7(&((*(R17 *)rt_nil_check(l_V_469))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R11 *)rt_nil_check(l_A_462))).f_KIND == g_TS_GEN))
{
((*(R17 *)rt_nil_check(l_V_469))).f_ANYARG = 1;
S_R7(&((*(R17 *)rt_nil_check(l_V_469))).f_HI, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R11 *)rt_nil_check(l_A_462))).f_NAME, (((*(R11 *)rt_nil_check(l_A_462))).f_NAME).f_LEN))), 0);
}
else
{
{
R14 * l_FT_471; memset(&l_FT_471, 0, sizeof l_FT_471);
l_FT_471 = r_RESOLVE(((*(R11 *)rt_nil_check(l_F_463))).f_B);
S_R7(&((*(R17 *)rt_nil_check(l_V_469))).f_LO, (r_EXPR(l_A_462, l_FT_471)).f_C, 0);
S_R12(&((*(R17 *)rt_nil_check(l_V_469))).f_MLO, r_ENUM_MANIFEST(l_A_462, l_FT_471), 0);
if (((((*(R11 *)rt_nil_check(l_F_463))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(l_V_469))).f_MLO).f_OK)))
{
r_FAIL(((*(R11 *)rt_nil_check(l_A_462))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_461 == NULL))
{
l_VARGS_460 = l_V_469;
}
else
{
((*(R17 *)rt_nil_check(l_VTAIL_461))).f_NEXT = l_V_469;
}
l_VTAIL_461 = l_V_469;
}
}
l_A_462 = ((*(R11 *)rt_nil_check(l_A_462))).f_NEXT;
l_N_465 = ((*(R11 *)rt_nil_check(l_N_465))).f_NEXT;
}
} L_end466: ;
}
l_F_463 = ((*(R11 *)rt_nil_check(l_F_463))).f_NEXT;
}
} L_end464: ;
if ((!(l_A_462 == NULL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
{
R13 * l_R_472; memset(&l_R_472, 0, sizeof l_R_472);
l_R_472 = ((*(R22 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_472 == NULL)) goto L_end473;
{
if (((((*(R13 *)rt_nil_check(l_R_472))).f_DECL == l_D_457) && r_SAME_BINDS(((*(R13 *)rt_nil_check(l_R_472))).f_BINDINGS, l_TARGS_459)))
{
l_CLASS_458 = ((*(R13 *)rt_nil_check(l_R_472))).f_T;
goto L_end473;
}
l_R_472 = ((*(R13 *)rt_nil_check(l_R_472))).f_INSTANCES;
}
} L_end473: ;
}
if ((l_CLASS_458 == NULL))
{
{
R13 * l_R_474; memset(&l_R_474, 0, sizeof l_R_474);
l_R_474 = r_NEW_SYM(g_Y_TYPE, ((*(R13 *)rt_nil_check(p_Y))).f_NAME);
R16 * l_B_475; memset(&l_B_475, 0, sizeof l_B_475);
l_B_475 = l_TARGS_459;
R16 * l_SAVED_476; memset(&l_SAVED_476, 0, sizeof l_SAVED_476);
l_SAVED_476 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
((*(R13 *)rt_nil_check(l_R_474))).f_DECL = l_D_457;
((*(R13 *)rt_nil_check(l_R_474))).f_BINDINGS = l_TARGS_459;
((*(R13 *)rt_nil_check(l_R_474))).f_INSTANCES = ((*(R22 *)rt_nil_check(g_W))).f_RECS;
((*(R22 *)rt_nil_check(g_W))).f_RECS = l_R_474;
r_OPEN_SCOPE();
for (;;) {
if ((l_B_475 == NULL)) goto L_end477;
{
{
R13 * l_TY_478; memset(&l_TY_478, 0, sizeof l_TY_478);
l_TY_478 = r_NEW_SYM(g_Y_TYPE, ((*(R16 *)rt_nil_check(l_B_475))).f_NAME);
((*(R13 *)rt_nil_check(l_TY_478))).f_T = ((*(R16 *)rt_nil_check(l_B_475))).f_T;
r_DEFINE(l_TY_478, ((*(R11 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_475 = ((*(R16 *)rt_nil_check(l_B_475))).f_NEXT;
}
} L_end477: ;
l_F_463 = ((*(R11 *)rt_nil_check(l_D_457))).f_A;
for (;;) {
if ((l_F_463 == NULL)) goto L_end479;
{
if ((!(((*(R11 *)rt_nil_check(l_F_463))).f_B == NULL)))
{
{
R11 * l_N_480; memset(&l_N_480, 0, sizeof l_N_480);
l_N_480 = ((*(R11 *)rt_nil_check(l_F_463))).f_A;
for (;;) {
if ((l_N_480 == NULL)) goto L_end481;
{
{
R13 * l_P_482; memset(&l_P_482, 0, sizeof l_P_482);
l_P_482 = r_NEW_SYM(g_Y_CONST, ((*(R11 *)rt_nil_check(l_N_480))).f_NAME);
((*(R13 *)rt_nil_check(l_P_482))).f_T = r_RESOLVE(((*(R11 *)rt_nil_check(l_F_463))).f_B);
S_R7(&((*(R13 *)rt_nil_check(l_P_482))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), ((*(R11 *)rt_nil_check(l_N_480))).f_NAME), 0);
((*(R13 *)rt_nil_check(l_P_482))).f_INPUT = 1;
((*(R13 *)rt_nil_check(l_P_482))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_482, ((*(R11 *)rt_nil_check(l_F_463))).f_LINE);
}
l_N_480 = ((*(R11 *)rt_nil_check(l_N_480))).f_NEXT;
}
} L_end481: ;
}
}
l_F_463 = ((*(R11 *)rt_nil_check(l_F_463))).f_NEXT;
}
} L_end479: ;
if ((l_TARGS_459 == NULL))
{
l_CLASS_458 = r_RESOLVE_RECORD(((*(R11 *)rt_nil_check(l_D_457))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R11 *)rt_nil_check(l_D_457))).f_A);
}
else
{
l_CLASS_458 = r_RESOLVE_RECORD(((*(R11 *)rt_nil_check(l_D_457))).f_B, r_NO_TEXT(), p_Y, ((*(R11 *)rt_nil_check(l_D_457))).f_A);
}
S_R7(&((*(R14 *)rt_nil_check(l_CLASS_458))).f_NAME, ((*(R13 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R13 *)rt_nil_check(l_R_474))).f_T = l_CLASS_458;
r_CLOSE_SCOPE();
((*(R22 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_476;
}
}
{
R14 * l_T_483; memset(&l_T_483, 0, sizeof l_T_483);
l_T_483 = r_COPY_TYP(l_CLASS_458);
((*(R14 *)rt_nil_check(l_T_483))).f_ARGS = l_VARGS_460;
return l_T_483;
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R16 * p_A, R16 * p_B) { 
R16 * l_P_484; memset(&l_P_484, 0, sizeof l_P_484);
l_P_484 = p_A;
R16 * l_Q_485; memset(&l_Q_485, 0, sizeof l_Q_485);
l_Q_485 = p_B;
for (;;) {
if (((l_P_484 == NULL) || (l_Q_485 == NULL))) goto L_end486;
{
if ((!r_SAME_TYPE(((*(R16 *)rt_nil_check(l_P_484))).f_T, ((*(R16 *)rt_nil_check(l_Q_485))).f_T)))
{
return 0;
}
l_P_484 = ((*(R16 *)rt_nil_check(l_P_484))).f_NEXT;
l_Q_485 = ((*(R16 *)rt_nil_check(l_Q_485))).f_NEXT;
}
} L_end486: ;
return ((l_P_484 == NULL) && (l_Q_485 == NULL));
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R14 * p_T) { 
R17 * l_A_487; memset(&l_A_487, 0, sizeof l_A_487);
l_A_487 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_487 == NULL)) goto L_end488;
{
if (((*(R17 *)rt_nil_check(l_A_487))).f_ANYARG)
{
return 1;
}
l_A_487 = ((*(R17 *)rt_nil_check(l_A_487))).f_NEXT;
}
} L_end488: ;
return 0;
rt_raise(RT_X_INIT);
}
static R7 r_VARIANT_COND(R15 * p_F, R14 * p_T, R7 p_SELF) { 
R11 * l_L_489; memset(&l_L_489, 0, sizeof l_L_489);
l_L_489 = ((*(R15 *)rt_nil_check(p_F))).f_LABELS;
R7 l_C_490; memset(&l_C_490, 0, sizeof l_C_490);
S_R7(&l_C_490, r_MK(rt_str("0", 1)), 0);
R15 * l_TF_491; memset(&l_TF_491, 0, sizeof l_TF_491);
l_TF_491 = r_FIND_FIELD(p_T, ((*(R15 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_489 == NULL)) goto L_end492;
{
if ((((*(R11 *)rt_nil_check(l_L_489))).f_KIND == g_N_RANGE))
{
S_R7(&l_C_490, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_490, p_SELF, ((*(R15 *)rt_nil_check(l_TF_491))).f_CNAME), 0);
S_R7(&l_C_490, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_490, (r_EXPR(((*(R11 *)rt_nil_check(l_L_489))).f_A, ((*(R15 *)rt_nil_check(l_TF_491))).f_T)).f_C, p_SELF, ((*(R15 *)rt_nil_check(l_TF_491))).f_CNAME), 0);
S_R7(&l_C_490, r_FMT2(rt_str("@@)", 3), l_C_490, (r_EXPR(((*(R11 *)rt_nil_check(l_L_489))).f_B, ((*(R15 *)rt_nil_check(l_TF_491))).f_T)).f_C), 0);
}
else
{
S_R7(&l_C_490, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_490, p_SELF, ((*(R15 *)rt_nil_check(l_TF_491))).f_CNAME, (r_EXPR(l_L_489, ((*(R15 *)rt_nil_check(l_TF_491))).f_T)).f_C), 0);
}
l_L_489 = ((*(R11 *)rt_nil_check(l_L_489))).f_NEXT;
}
} L_end492: ;
return r_FMT1(rt_str("(@)", 3), l_C_490);
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R14 * p_T) { 
R7 l_C_493; memset(&l_C_493, 0, sizeof l_C_493);
S_R7(&l_C_493, ((*(R14 *)rt_nil_check(p_T))).f_CNAME, 0);
R15 * l_F_494; memset(&l_F_494, 0, sizeof l_F_494);
l_F_494 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
R7 l_BODY_495; memset(&l_BODY_495, 0, sizeof l_BODY_495);
S_R7(&l_BODY_495, r_MK(rt_str("", 0)), 0);
R7 l_ASSIGN_496; memset(&l_ASSIGN_496, 0, sizeof l_ASSIGN_496);
S_R7(&l_ASSIGN_496, r_MK(rt_str("", 0)), 0);
R7 l_EQ_497; memset(&l_EQ_497, 0, sizeof l_EQ_497);
S_R7(&l_EQ_497, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_494 == NULL)) goto L_end498;
{
S_R7(&l_BODY_495, r_FMT3(rt_str("@ @ @;", 6), l_BODY_495, r_CTYPE(((*(R15 *)rt_nil_check(l_F_494))).f_T), ((*(R15 *)rt_nil_check(l_F_494))).f_CNAME), 0);
if ((((*(R15 *)rt_nil_check(l_F_494))).f_KIND == ((rt_int)1LL)))
{
S_R7(&l_ASSIGN_496, r_FMT3(rt_str("@ if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 48), l_ASSIGN_496, ((*(R15 *)rt_nil_check(l_F_494))).f_CNAME, ((*(R15 *)rt_nil_check(l_F_494))).f_CNAME), 0);
}
else if ((((*(R15 *)rt_nil_check(l_F_494))).f_KIND == ((rt_int)2LL)))
{
S_R7(&l_ASSIGN_496, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_496, ((*(R15 *)rt_nil_check(l_F_494))).f_CNAME, ((*(R15 *)rt_nil_check(l_F_494))).f_CNAME, ((*(R15 *)rt_nil_check(l_F_494))).f_CNAME), 0);
}
else
{
S_R7(&l_ASSIGN_496, r_FMT2(rt_str("@ @", 3), l_ASSIGN_496, r_ASSIGN_CODE(((*(R15 *)rt_nil_check(l_F_494))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R15 *)rt_nil_check(l_F_494))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R15 *)rt_nil_check(l_F_494))).f_CNAME))), 0);
}
if (((((*(R15 *)rt_nil_check(l_F_494))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R7(&l_EQ_497, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_497, r_VARIANT_COND(l_F_494, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R15 *)rt_nil_check(l_F_494))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R15 *)rt_nil_check(l_F_494))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R15 *)rt_nil_check(l_F_494))).f_CNAME))), 0);
}
else
{
S_R7(&l_EQ_497, r_FMT2(rt_str("@ && @", 6), l_EQ_497, r_EQUAL_CODE(((*(R15 *)rt_nil_check(l_F_494))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R15 *)rt_nil_check(l_F_494))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R15 *)rt_nil_check(l_F_494))).f_CNAME))), 0);
}
l_F_494 = ((*(R15 *)rt_nil_check(l_F_494))).f_NEXT;
}
} L_end498: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_493, l_BODY_495));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_493, l_C_493, l_C_493));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_493, l_C_493, l_C_493));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_493, l_C_493, l_C_493, l_ASSIGN_496));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_493, l_C_493, l_C_493, l_EQ_497));
}
static R7 r_ARRAY_STRUCT(R14 * p_ELEM, rt_int p_DIMS) { 
R7 l_ET_C_499; memset(&l_ET_C_499, 0, sizeof l_ET_C_499);
S_R7(&l_ET_C_499, r_CTYPE(p_ELEM), 0);
R7 l_KEY_500; memset(&l_KEY_500, 0, sizeof l_KEY_500);
S_R7(&l_KEY_500, r_FMT3(rt_str("@/@/@", 5), l_ET_C_499, r_NUM(p_DIMS), r_NUM(((*(R14 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R13 * l_Y_501; memset(&l_Y_501, 0, sizeof l_Y_501);
l_Y_501 = ((*(R22 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_501 == NULL)) goto L_end502;
{
if ((r_TEQ(((*(R13 *)rt_nil_check(l_Y_501))).f_NAME, l_KEY_500) && r_SAME_TYPE(((*(R13 *)rt_nil_check(l_Y_501))).f_T, p_ELEM)))
{
return ((*(R13 *)rt_nil_check(l_Y_501))).f_ACCESS;
}
l_Y_501 = ((*(R13 *)rt_nil_check(l_Y_501))).f_INSTANCES;
}
} L_end502: ;
l_Y_501 = r_NEW_SYM(g_Y_TYPE, l_KEY_500);
((*(R13 *)rt_nil_check(l_Y_501))).f_T = p_ELEM;
S_R7(&((*(R13 *)rt_nil_check(l_Y_501))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R13 *)rt_nil_check(l_Y_501))).f_INSTANCES = ((*(R22 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R22 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_501;
{
R7 l_C_503; memset(&l_C_503, 0, sizeof l_C_503);
S_R7(&l_C_503, ((*(R13 *)rt_nil_check(l_Y_501))).f_ACCESS, 0);
R7 l_D_504; memset(&l_D_504, 0, sizeof l_D_504);
S_R7(&l_D_504, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_503, l_C_503));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_503, l_D_504, l_D_504, l_ET_C_499));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_503, l_C_503, l_C_503));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_503, l_C_503, l_C_503));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_503, l_C_503, l_C_503, l_D_504));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_504, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_503, l_C_503, l_C_503, l_D_504));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_504, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
}
return ((*(R13 *)rt_nil_check(l_Y_501))).f_ACCESS;
rt_raise(RT_X_INIT);
}
static R7 r_INIT_CODE(R14 * p_T, R7 p_LV) { 
rt_int l_K_505; memset(&l_K_505, 0, sizeof l_K_505);
l_K_505 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_505 == g_T_STR))
{
if (((((*(R14 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
return r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
}
return r_FMT2(rt_str("@ = rt_str_new(@);", 18), p_LV, ((*(R14 *)rt_nil_check(p_T))).f_LEN_C);
}
else if ((l_K_505 == g_T_BITS))
{
if (((((*(R14 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
return r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
}
return r_FMT2(rt_str("@ = rt_b_zeros(@);", 18), p_LV, ((*(R14 *)rt_nil_check(p_T))).f_LEN_C);
}
else if ((l_K_505 == g_T_SEM))
{
return r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R14 *)rt_nil_check(p_T))).f_SCALE));
}
else if ((l_K_505 == g_T_ABS))
{
return r_INIT_CODE(((*(R14 *)rt_nil_check(p_T))).f_BASE, p_LV);
}
else if ((l_K_505 == g_T_ARR))
{
{
R17 * l_B_506; memset(&l_B_506, 0, sizeof l_B_506);
l_B_506 = ((*(R14 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_507; memset(&l_I_507, 0, sizeof l_I_507);
l_I_507 = ((rt_int)0LL);
R7 l_R_508; memset(&l_R_508, 0, sizeof l_R_508);
S_R7(&l_R_508, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_506 == NULL)) goto L_end509;
{
S_R7(&l_R_508, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_508, p_LV, r_NUM(l_I_507), ((*(R17 *)rt_nil_check(l_B_506))).f_LO), 0);
S_R7(&l_R_508, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_508, p_LV, r_NUM(l_I_507), ((*(R17 *)rt_nil_check(l_B_506))).f_HI), 0);
l_I_507 = rt_add(l_I_507, ((rt_int)1LL));
l_B_506 = ((*(R17 *)rt_nil_check(l_B_506))).f_NEXT;
}
} L_end509: ;
S_R7(&l_R_508, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_508, r_NUM(((*(R14 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R7(&l_R_508, r_FMT3(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)(n \? n : 1));", 52), l_R_508, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R14 *)rt_nil_check(p_T))).f_ELEM))
{
{
R7 l_IV_510; memset(&l_IV_510, 0, sizeof l_IV_510);
S_R7(&l_IV_510, r_NEW_NAME(rt_str("i", 1)), 0);
S_R7(&l_R_508, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_508, l_IV_510, l_IV_510, l_IV_510), 0);
S_R7(&l_R_508, r_FMT2(rt_str("@ @ }", 5), l_R_508, r_INIT_CODE(((*(R14 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_510))), 0);
}
}
return r_CATS(l_R_508, rt_str(" }", 2));
}
}
else if ((l_K_505 == g_T_REC))
{
{
R15 * l_F_511; memset(&l_F_511, 0, sizeof l_F_511);
l_F_511 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
R17 * l_A_512; memset(&l_A_512, 0, sizeof l_A_512);
l_A_512 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
R7 l_R_513; memset(&l_R_513, 0, sizeof l_R_513);
S_R7(&l_R_513, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_511 == NULL)) goto L_end514;
{
if ((!(((*(R15 *)rt_nil_check(l_F_511))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_512 == NULL)))
{
if ((!((*(R17 *)rt_nil_check(l_A_512))).f_ANYARG))
{
S_R7(&l_R_513, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_513, p_LV, ((*(R15 *)rt_nil_check(l_F_511))).f_CNAME, ((*(R17 *)rt_nil_check(l_A_512))).f_LO), 0);
}
l_A_512 = ((*(R17 *)rt_nil_check(l_A_512))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R15 *)rt_nil_check(l_F_511))).f_T))
{
S_R7(&l_R_513, r_FMT2(rt_str("@ @", 3), l_R_513, r_SUBST_SELF(r_INIT_CODE(((*(R15 *)rt_nil_check(l_F_511))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R15 *)rt_nil_check(l_F_511))).f_CNAME)), p_LV)), 0);
}
l_F_511 = ((*(R15 *)rt_nil_check(l_F_511))).f_NEXT;
}
} L_end514: ;
return l_R_513;
}
}
return r_NO_TEXT();
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R14 * p_T) { 
rt_int l_K_515; memset(&l_K_515, 0, sizeof l_K_515);
l_K_515 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_515 == g_T_STR) || (l_K_515 == g_T_BITS)) || (l_K_515 == g_T_ARR)) || (l_K_515 == g_T_SEM)))
{
return 1;
}
else if ((l_K_515 == g_T_ABS))
{
return r_NEEDS_INIT(((*(R14 *)rt_nil_check(p_T))).f_BASE);
}
else if ((l_K_515 == g_T_REC))
{
if ((!(((*(R14 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
return 1;
}
{
R15 * l_F_516; memset(&l_F_516, 0, sizeof l_F_516);
l_F_516 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_516 == NULL)) goto L_end517;
{
if (r_NEEDS_INIT(((*(R15 *)rt_nil_check(l_F_516))).f_T))
{
return 1;
}
l_F_516 = ((*(R15 *)rt_nil_check(l_F_516))).f_NEXT;
}
} L_end517: ;
}
}
return 0;
rt_raise(RT_X_INIT);
}
static R7 r_ASSIGN_CODE(R14 * p_T, R7 p_LV, R7 p_RV) { 
rt_int l_K_518; memset(&l_K_518, 0, sizeof l_K_518);
l_K_518 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_518 == g_T_STR) || (l_K_518 == g_T_BITS)))
{
return r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
}
else if ((l_K_518 == g_T_ABS))
{
return r_ASSIGN_CODE(((*(R14 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
}
else if ((l_K_518 == g_T_SEM))
{
return r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
}
else if ((l_K_518 == g_T_ARR))
{
return r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R14 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
}
else if ((l_K_518 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
return r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R14 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
}
return r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R14 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
}
return r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
rt_raise(RT_X_INIT);
}
static R7 r_EQUAL_CODE(R14 * p_T, R7 p_A, R7 p_B) { 
rt_int l_K_519; memset(&l_K_519, 0, sizeof l_K_519);
l_K_519 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_519 == g_T_STR) || (l_K_519 == g_T_BITS)))
{
return r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
}
else if ((l_K_519 == g_T_ABS))
{
return r_EQUAL_CODE(((*(R14 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
}
else if (((l_K_519 == g_T_ARR) || (l_K_519 == g_T_REC)))
{
return r_FMT3(rt_str("E_@(@, @)", 9), ((*(R14 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
}
else if ((l_K_519 == g_T_SEM))
{
return r_MK(rt_str("0", 1));
}
return r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
rt_raise(RT_X_INIT);
}
static R7 r_RANGE_CHECK(R14 * p_T, R7 p_V, R7 p_SELF) { 
if ((((((*(R14 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))))
{
return p_V;
}
if ((((((*(R14 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R14 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R14 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R14 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
return p_V;
}
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
return r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R14 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R14 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
}
return r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R14 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R14 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R14 * p_T) { 
return (((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R14 * p_A, R14 * p_B) { 
if ((p_A == p_B))
{
return 1;
}
if (((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R14 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
return r_SAME_CLASS(((*(R14 *)rt_nil_check(p_A))).f_BASE, p_B);
}
else if (((((*(R14 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
return r_SAME_CLASS(p_A, ((*(R14 *)rt_nil_check(p_B))).f_BASE);
}
if ((!(((*(R14 *)rt_nil_check(p_A))).f_KIND == ((*(R14 *)rt_nil_check(p_B))).f_KIND)))
{
return 0;
}
if (((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
return (((*(R14 *)rt_nil_check(p_A))).f_BASE == ((*(R14 *)rt_nil_check(p_B))).f_BASE);
}
else if ((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
return ((((*(R14 *)rt_nil_check(p_A))).f_DIMS == ((*(R14 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R14 *)rt_nil_check(p_A))).f_ELEM, ((*(R14 *)rt_nil_check(p_B))).f_ELEM));
}
else if ((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
return r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
}
else if ((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
return ((r_ORIGINAL(((*(R14 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R14 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R14 *)rt_nil_check(p_A))).f_BASE, ((*(R14 *)rt_nil_check(p_B))).f_BASE));
}
return 1;
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R14 * p_A, R14 * p_B) { 
if ((p_A == p_B))
{
return 1;
}
if (((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R14 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
return r_SAME_TYPE(((*(R14 *)rt_nil_check(p_A))).f_BASE, p_B);
}
else if (((((*(R14 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
return r_SAME_TYPE(p_A, ((*(R14 *)rt_nil_check(p_B))).f_BASE);
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
return 0;
}
if (((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
return (((*(R14 *)rt_nil_check(p_A))).f_SCALE == ((*(R14 *)rt_nil_check(p_B))).f_SCALE);
}
else if ((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
return r_SAME_TYPE(((*(R14 *)rt_nil_check(p_A))).f_ELEM, ((*(R14 *)rt_nil_check(p_B))).f_ELEM);
}
else if ((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
return r_SAME_ARGS(((*(R14 *)rt_nil_check(p_A))).f_ARGS, ((*(R14 *)rt_nil_check(p_B))).f_ARGS);
}
else if ((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
return r_SAME_TYPE(((*(R14 *)rt_nil_check(p_A))).f_BASE, ((*(R14 *)rt_nil_check(p_B))).f_BASE);
}
return 1;
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R17 * p_B) { 
if (((((*(R17 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
return 0;
}
return rt_b_eq(rt_b_slice(r_STR(((*(R17 *)rt_nil_check(p_B))).f_HI, (((*(R17 *)rt_nil_check(p_B))).f_HI).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R17 * p_A, R17 * p_B) { 
R17 * l_P_520; memset(&l_P_520, 0, sizeof l_P_520);
l_P_520 = p_A;
R17 * l_Q_521; memset(&l_Q_521, 0, sizeof l_Q_521);
l_Q_521 = p_B;
for (;;) {
if (((l_P_520 == NULL) || (l_Q_521 == NULL))) goto L_end522;
{
if ((r_IS_GEN_ARG(l_P_520) || r_IS_GEN_ARG(l_Q_521)))
{
}
else if ((!(((*(R17 *)rt_nil_check(l_P_520))).f_ANYARG == ((*(R17 *)rt_nil_check(l_Q_521))).f_ANYARG)))
{
return 0;
}
if (((((*(R17 *)rt_nil_check(l_P_520))).f_MLO).f_OK && (((*(R17 *)rt_nil_check(l_Q_521))).f_MLO).f_OK))
{
if ((!((((*(R17 *)rt_nil_check(l_P_520))).f_MLO).f_V == (((*(R17 *)rt_nil_check(l_Q_521))).f_MLO).f_V)))
{
return 0;
}
}
l_P_520 = ((*(R17 *)rt_nil_check(l_P_520))).f_NEXT;
l_Q_521 = ((*(R17 *)rt_nil_check(l_Q_521))).f_NEXT;
}
} L_end522: ;
return ((l_P_520 == NULL) && (l_Q_521 == NULL));
rt_raise(RT_X_INIT);
}
static R7 r_FRAME_OF(rt_int p_LEVEL) { 
R27 * l_CS_523; memset(&l_CS_523, 0, sizeof l_CS_523);
l_CS_523 = ((*(R22 *)rt_nil_check(g_W))).f_CS;
R7 l_T_524; memset(&l_T_524, 0, sizeof l_T_524);
rt_int l_LEV_525; memset(&l_LEV_525, 0, sizeof l_LEV_525);
if ((((*(R27 *)rt_nil_check(l_CS_523))).f_LEVEL == p_LEVEL))
{
return r_MK(rt_str("F", 1));
}
if (((*(R27 *)rt_nil_check(l_CS_523))).f_FRAMED)
{
S_R7(&l_T_524, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R7(&l_T_524, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_525 = rt_sub(((*(R27 *)rt_nil_check(l_CS_523))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_525 <= p_LEVEL)) goto L_end526;
{
S_R7(&l_T_524, r_CATS(l_T_524, rt_str("->up", 4)), 0);
l_LEV_525 = rt_sub(l_LEV_525, ((rt_int)1LL));
}
} L_end526: ;
return l_T_524;
rt_raise(RT_X_INIT);
}
static R7 r_OBJ_ACCESS(R13 * p_Y) { 
if (((((*(R13 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R13 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
return ((*(R13 *)rt_nil_check(p_Y))).f_ACCESS;
}
if (((((*(R13 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
return ((*(R13 *)rt_nil_check(p_Y))).f_ACCESS;
}
if (((*(R13 *)rt_nil_check(p_Y))).f_BYREF)
{
return r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R13 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R13 *)rt_nil_check(p_Y))).f_FIELD);
}
return r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R13 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R13 *)rt_nil_check(p_Y))).f_FIELD);
rt_raise(RT_X_INIT);
}
static R7 r_NEW_OBJECT(R13 * p_Y, rstr p_BASE) { 
R27 * l_CS_527; memset(&l_CS_527, 0, sizeof l_CS_527);
l_CS_527 = ((*(R22 *)rt_nil_check(g_W))).f_CS;
R14 * l_T_528; memset(&l_T_528, 0, sizeof l_T_528);
l_T_528 = ((*(R13 *)rt_nil_check(p_Y))).f_T;
R7 l_CN_529; memset(&l_CN_529, 0, sizeof l_CN_529);
if ((((*(R27 *)rt_nil_check(l_CS_527))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R22 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R7(&l_CN_529, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), ((*(R13 *)rt_nil_check(p_Y))).f_NAME), 0);
}
else
{
S_R7(&l_CN_529, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), ((*(R13 *)rt_nil_check(p_Y))).f_NAME, r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_528), l_CN_529));
S_R7(&((*(R13 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_529, 0);
return l_CN_529;
}
S_R7(&l_CN_529, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), ((*(R13 *)rt_nil_check(p_Y))).f_NAME, r_NEW_NAME(rt_str("", 0))), 0);
S_R7(&((*(R13 *)rt_nil_check(p_Y))).f_FIELD, l_CN_529, 0);
if (((*(R27 *)rt_nil_check(l_CS_527))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_528), l_CN_529), &((*(R27 *)rt_nil_check(l_CS_527))).f_FIELDS);
S_R7(&((*(R13 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_529), 0);
return ((*(R13 *)rt_nil_check(p_Y))).f_ACCESS;
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_528), l_CN_529, l_CN_529, l_CN_529));
S_R7(&((*(R13 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_529, 0);
return l_CN_529;
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R11 * p_D) { 
R14 * l_T_530; memset(&l_T_530, 0, sizeof l_T_530);
l_T_530 = r_RESOLVE(((*(R11 *)rt_nil_check(p_D))).f_B);
R11 * l_N_531; memset(&l_N_531, 0, sizeof l_N_531);
l_N_531 = ((*(R11 *)rt_nil_check(p_D))).f_A;
R18 l_V_532; memset(&l_V_532, 0, sizeof l_V_532);
rt_int l_HAVE_V_533; memset(&l_HAVE_V_533, 0, sizeof l_HAVE_V_533);
l_HAVE_V_533 = 0;
if (((((*(R14 *)rt_nil_check(l_T_530))).f_KIND == g_T_TYPE) || (((*(R14 *)rt_nil_check(l_T_530))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_531 == NULL)) goto L_end534;
{
{
R13 * l_Y_535; memset(&l_Y_535, 0, sizeof l_Y_535);
l_Y_535 = r_NEW_SYM(g_Y_VAR, ((*(R11 *)rt_nil_check(l_N_531))).f_NAME);
R7 l_CN_536; memset(&l_CN_536, 0, sizeof l_CN_536);
if ((((*(R11 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R13 *)rt_nil_check(l_Y_535))).f_KIND = g_Y_CONST;
((*(R13 *)rt_nil_check(l_Y_535))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_530) && (((*(R14 *)rt_nil_check(l_T_530))).f_SCALE == ((rt_int)0LL))))
{
{
R12 l_M_537; memset(&l_M_537, 0, sizeof l_M_537);
S_R12(&l_M_537, r_MANIFEST(((*(R11 *)rt_nil_check(p_D))).f_C), 0);
((*(R13 *)rt_nil_check(l_Y_535))).f_HASMV = (l_M_537).f_OK;
((*(R13 *)rt_nil_check(l_Y_535))).f_MV = (l_M_537).f_V;
}
}
}
((*(R13 *)rt_nil_check(l_Y_535))).f_T = l_T_530;
S_R7(&l_CN_536, r_NEW_OBJECT(l_Y_535, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_530))
{
r_CODE(r_INIT_CODE(l_T_530, l_CN_536));
}
if ((!(((*(R11 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_533))
{
S_R18(&l_V_532, r_EXPR(((*(R11 *)rt_nil_check(p_D))).f_C, l_T_530), 0);
l_HAVE_V_533 = 1;
}
r_CODE(r_STORE_CODE(l_T_530, l_CN_536, l_V_532, ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_535, ((*(R11 *)rt_nil_check(l_N_531))).f_LINE);
}
l_N_531 = ((*(R11 *)rt_nil_check(l_N_531))).f_NEXT;
}
} L_end534: ;
}
static R18 r_MKET(R7 p_C, R14 * p_T) { 
return ({ R18 rc538; memset(&rc538, 0, sizeof rc538);  S_R7(&rc538.f_C, p_C, 0); rc538.f_T = p_T; rc538.f_LVAL = 0; S_R7(&rc538.f_SELF, r_NO_TEXT(), 0); rc538; });
rt_raise(RT_X_INIT);
}
static R18 r_MKLV(R7 p_C, R14 * p_T, rt_int p_LVAL, R7 p_SELF) { 
return ({ R18 rc539; memset(&rc539, 0, sizeof rc539);  S_R7(&rc539.f_C, p_C, 0); rc539.f_T = p_T; rc539.f_LVAL = p_LVAL; S_R7(&rc539.f_SELF, p_SELF, 0); rc539; });
rt_raise(RT_X_INIT);
}
static R14 * r_INT_TYPE(rt_int p_SCALE) { 
R14 * l_T_540; memset(&l_T_540, 0, sizeof l_T_540);
if ((p_SCALE == ((rt_int)0LL)))
{
return ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
}
l_T_540 = r_NEW_TYP(g_T_INT);
((*(R14 *)rt_nil_check(l_T_540))).f_SCALE = p_SCALE;
return l_T_540;
rt_raise(RT_X_INIT);
}
static R14 * r_STR_TYPE(R7 p_LEN, R12 p_M) { 
R14 * l_T_541; memset(&l_T_541, 0, sizeof l_T_541);
l_T_541 = r_NEW_TYP(g_T_STR);
S_R7(&((*(R14 *)rt_nil_check(l_T_541))).f_LEN_C, p_LEN, 0);
S_R12(&((*(R14 *)rt_nil_check(l_T_541))).f_MLEN, p_M, 0);
return l_T_541;
rt_raise(RT_X_INIT);
}
static R7 r_CSTRING(R7 p_T) { 
rstr l_S_542; memset(&l_S_542, 0, sizeof l_S_542);
l_S_542 = rt_str_new((p_T).f_LEN);
rt_b_assign(&l_S_542, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_543; memset(&l_AT_543, 0, sizeof l_AT_543);
l_AT_543 = ((*(R22 *)rt_nil_check(g_W))).f_TOP;
R7 l_R_544; memset(&l_R_544, 0, sizeof l_R_544);
S_R7(&l_R_544, r_MK(rt_str("\"", 1)), 0);
{ rt_int it546_lo = ((rt_int)0LL), it546_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it546 = it546_lo; it546 <= it546_hi; it546++) {
{
if ((rt_b_eq(rt_b_slice(l_S_542, it546, it546), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_542, it546, it546), rt_str("\\", 1))))
{
S_R7(&l_R_544, r_MK(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_S_542, it546, it546))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_542, it546, it546), rt_str("\?", 1)))
{
S_R7(&l_R_544, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_547; memset(&l_C_547, 0, sizeof l_C_547);
l_C_547 = r_CODE_OF(rt_b_slice(l_S_542, it546, it546));
if (({ rt_int iv548 = l_C_547; (((rt_int)32LL)) <= iv548 && iv548 <= (((rt_int)126LL)); }))
{
S_R7(&l_R_544, r_MK(rt_b_slice(l_S_542, it546, it546)), 0);
}
else
{
S_R7(&l_R_544, r_MK(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_547, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_547, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_547, ((rt_int)8LL))))), 0);
}
}
}
}
} } L_end545: ;
S_R7(&l_R_544, r_MK(rt_str("\"", 1)), 0);
return ({ R7 rc549; memset(&rc549, 0, sizeof rc549);  rc549.f_AT = l_AT_543; rc549.f_LEN = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_TOP, l_AT_543); rc549.f_H = rt_neg(((rt_int)1LL)); rc549; });
rt_raise(RT_X_INIT);
}
static R12 r_MANIFEST(R11 * p_E) { 
rt_int l_K_550; memset(&l_K_550, 0, sizeof l_K_550);
l_K_550 = ((*(R11 *)rt_nil_check(p_E))).f_KIND;
R12 l_NO_551; memset(&l_NO_551, 0, sizeof l_NO_551);
S_R12(&l_NO_551, ({ R12 rc552; memset(&rc552, 0, sizeof rc552);  rc552.f_OK = 0; rc552.f_V = ((rt_int)0LL); rc552; }), 0);
if ((l_K_550 == g_N_INT))
{
return ({ R12 rc553; memset(&rc553, 0, sizeof rc553);  rc553.f_OK = 1; rc553.f_V = ((*(R11 *)rt_nil_check(p_E))).f_IV; rc553; });
}
else if ((l_K_550 == g_N_PAREN))
{
return r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A);
}
else if ((l_K_550 == g_N_BOOL))
{
return ({ R12 rc554; memset(&rc554, 0, sizeof rc554);  rc554.f_OK = 1; rc554.f_V = ((*(R11 *)rt_nil_check(p_E))).f_IV; rc554; });
}
else if ((l_K_550 == g_N_UNOP))
{
{
R12 l_A_555; memset(&l_A_555, 0, sizeof l_A_555);
S_R12(&l_A_555, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
return ({ R12 rc556; memset(&rc556, 0, sizeof rc556);  rc556.f_OK = (l_A_555).f_OK; rc556.f_V = rt_neg((l_A_555).f_V); rc556; });
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
return l_A_555;
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
return ({ R12 rc557; memset(&rc557, 0, sizeof rc557);  rc557.f_OK = (l_A_555).f_OK; rc557.f_V = rt_sub(((rt_int)1LL), (l_A_555).f_V); rc557; });
}
}
}
else if ((l_K_550 == g_N_BINOP))
{
if ((!(((*(R11 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
return l_NO_551;
}
{
R12 l_A_558; memset(&l_A_558, 0, sizeof l_A_558);
S_R12(&l_A_558, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
R12 l_B_559; memset(&l_B_559, 0, sizeof l_B_559);
S_R12(&l_B_559, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_B), 0);
R7 l_OP_560; memset(&l_OP_560, 0, sizeof l_OP_560);
S_R7(&l_OP_560, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
if ((r_TEQS(l_OP_560, rt_str("&", 1)) && (l_A_558).f_OK))
{
if (((l_A_558).f_V == ((rt_int)0LL)))
{
return l_A_558;
}
return l_B_559;
}
else if ((r_TEQS(l_OP_560, rt_str("!", 1)) && (l_A_558).f_OK))
{
if (((l_A_558).f_V == ((rt_int)1LL)))
{
return l_A_558;
}
return l_B_559;
}
if ((!(((l_A_558).f_OK && (l_B_559).f_OK))))
{
return l_NO_551;
}
if ((!((r_MANIFEST_INT(((*(R11 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R11 *)rt_nil_check(p_E))).f_B)))))
{
return l_NO_551;
}
if (r_TEQS(l_OP_560, rt_str("+", 1)))
{
return ({ R12 rc561; memset(&rc561, 0, sizeof rc561);  rc561.f_OK = 1; rc561.f_V = rt_add((l_A_558).f_V, (l_B_559).f_V); rc561; });
}
else if (r_TEQS(l_OP_560, rt_str("-", 1)))
{
return ({ R12 rc562; memset(&rc562, 0, sizeof rc562);  rc562.f_OK = 1; rc562.f_V = rt_sub((l_A_558).f_V, (l_B_559).f_V); rc562; });
}
else if (r_TEQS(l_OP_560, rt_str("*", 1)))
{
return ({ R12 rc563; memset(&rc563, 0, sizeof rc563);  rc563.f_OK = 1; rc563.f_V = rt_mul((l_A_558).f_V, (l_B_559).f_V); rc563; });
}
else if ((r_TEQS(l_OP_560, rt_str("//", 2)) && (!((l_B_559).f_V == ((rt_int)0LL)))))
{
return ({ R12 rc564; memset(&rc564, 0, sizeof rc564);  rc564.f_OK = 1; rc564.f_V = rt_quot((l_A_558).f_V, (l_B_559).f_V); rc564; });
}
else if ((r_TEQS(l_OP_560, rt_str("MOD", 3)) && (!((l_B_559).f_V == ((rt_int)0LL)))))
{
return ({ R12 rc565; memset(&rc565, 0, sizeof rc565);  rc565.f_OK = 1; rc565.f_V = rt_rem((l_A_558).f_V, (l_B_559).f_V); rc565; });
}
else if (r_TEQS(l_OP_560, rt_str("=", 1)))
{
return ({ R12 rc566; memset(&rc566, 0, sizeof rc566);  rc566.f_OK = 1; rc566.f_V = r_BOOL_INT(((l_A_558).f_V == (l_B_559).f_V)); rc566; });
}
else if (r_TEQS(l_OP_560, rt_str("<>", 2)))
{
return ({ R12 rc567; memset(&rc567, 0, sizeof rc567);  rc567.f_OK = 1; rc567.f_V = r_BOOL_INT((!((l_A_558).f_V == (l_B_559).f_V))); rc567; });
}
else if (r_TEQS(l_OP_560, rt_str("<", 1)))
{
return ({ R12 rc568; memset(&rc568, 0, sizeof rc568);  rc568.f_OK = 1; rc568.f_V = r_BOOL_INT(((l_A_558).f_V < (l_B_559).f_V)); rc568; });
}
else if (r_TEQS(l_OP_560, rt_str(">", 1)))
{
return ({ R12 rc569; memset(&rc569, 0, sizeof rc569);  rc569.f_OK = 1; rc569.f_V = r_BOOL_INT(((l_A_558).f_V > (l_B_559).f_V)); rc569; });
}
else if (r_TEQS(l_OP_560, rt_str("<=", 2)))
{
return ({ R12 rc570; memset(&rc570, 0, sizeof rc570);  rc570.f_OK = 1; rc570.f_V = r_BOOL_INT(((l_A_558).f_V <= (l_B_559).f_V)); rc570; });
}
else if (r_TEQS(l_OP_560, rt_str(">=", 2)))
{
return ({ R12 rc571; memset(&rc571, 0, sizeof rc571);  rc571.f_OK = 1; rc571.f_V = r_BOOL_INT(((l_A_558).f_V >= (l_B_559).f_V)); rc571; });
}
}
}
else if ((l_K_550 == g_N_IN))
{
{
R12 l_A_572; memset(&l_A_572, 0, sizeof l_A_572);
S_R12(&l_A_572, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
R12 l_L_573; memset(&l_L_573, 0, sizeof l_L_573);
S_R12(&l_L_573, r_MANIFEST(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R12 l_U_574; memset(&l_U_574, 0, sizeof l_U_574);
S_R12(&l_U_574, r_MANIFEST(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_575; memset(&l_LO_575, 0, sizeof l_LO_575);
rt_int l_HI_576; memset(&l_HI_576, 0, sizeof l_HI_576);
if ((!(((((l_A_572).f_OK && (l_L_573).f_OK) && (l_U_574).f_OK) && r_MANIFEST_INT(((*(R11 *)rt_nil_check(p_E))).f_A)))))
{
return l_NO_551;
}
l_LO_575 = (l_L_573).f_V;
l_HI_576 = (l_U_574).f_V;
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_575 = rt_add(l_LO_575, ((rt_int)1LL));
}
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_576 = rt_sub(l_HI_576, ((rt_int)1LL));
}
return ({ R12 rc577; memset(&rc577, 0, sizeof rc577);  rc577.f_OK = 1; rc577.f_V = r_BOOL_INT((((l_A_572).f_V >= l_LO_575) && ((l_A_572).f_V <= l_HI_576))); rc577; });
}
}
else if (((l_K_550 == g_N_NAME) || (l_K_550 == g_TS_GEN)))
{
{
R13 * l_Y_578; memset(&l_Y_578, 0, sizeof l_Y_578);
l_Y_578 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
R16 * l_B_579; memset(&l_B_579, 0, sizeof l_B_579);
l_B_579 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_579 == NULL)) goto L_end580;
{
if ((r_TEQ(((*(R16 *)rt_nil_check(l_B_579))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME) && ((*(R16 *)rt_nil_check(l_B_579))).f_HASMV))
{
return ({ R12 rc581; memset(&rc581, 0, sizeof rc581);  rc581.f_OK = 1; rc581.f_V = ((*(R16 *)rt_nil_check(l_B_579))).f_MV; rc581; });
}
l_B_579 = ((*(R16 *)rt_nil_check(l_B_579))).f_NEXT;
}
} L_end580: ;
if ((!(l_Y_578 == NULL)))
{
if (((((((*(R13 *)rt_nil_check(l_Y_578))).f_KIND == g_Y_CONST) || (((*(R13 *)rt_nil_check(l_Y_578))).f_KIND == g_Y_GEN))) && ((*(R13 *)rt_nil_check(l_Y_578))).f_HASMV))
{
return ({ R12 rc582; memset(&rc582, 0, sizeof rc582);  rc582.f_OK = 1; rc582.f_V = ((*(R13 *)rt_nil_check(l_Y_578))).f_MV; rc582; });
}
if ((((*(R13 *)rt_nil_check(l_Y_578))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R11 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
return ({ R12 rc583; memset(&rc583, 0, sizeof rc583);  rc583.f_OK = 1; rc583.f_V = ((*(R13 *)rt_nil_check(l_Y_578))).f_MV; rc583; });
}
}
}
}
}
else if ((l_K_550 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R11 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
return ({ R12 rc584; memset(&rc584, 0, sizeof rc584);  rc584.f_OK = 1; rc584.f_V = ((*(R13 *)rt_nil_check(r_FIND_LITERAL(((*(R11 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc584; });
}
}
else if ((l_K_550 == g_N_APPLY))
{
if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
return ({ R12 rc585; memset(&rc585, 0, sizeof rc585);  rc585.f_OK = 1; rc585.f_V = r_BOOL_INT((r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A)).f_OK); rc585; });
}
}
return l_NO_551;
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R11 * p_E) { 
return (!(((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { 
if (p_B)
{
return ((rt_int)1LL);
}
return ((rt_int)0LL);
rt_raise(RT_X_INIT);
}
static R18 r_EXPR(R11 * p_E, R14 * p_WANT) { 
rt_int l_K_586; memset(&l_K_586, 0, sizeof l_K_586);
l_K_586 = ((*(R11 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_586 == g_N_INT))
{
return r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R11 *)rt_nil_check(p_E))).f_IV)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
else if ((l_K_586 == g_N_REAL))
{
return r_REAL_LITERAL(p_E);
}
else if ((l_K_586 == g_N_BOOL))
{
return r_MKET(r_NUM(((*(R11 *)rt_nil_check(p_E))).f_IV), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
}
else if ((l_K_586 == g_N_NIL))
{
return r_MKET(r_MK(rt_str("NULL", 4)), ((*(R22 *)rt_nil_check(g_W))).f_TY_NIL);
}
else if ((l_K_586 == g_N_PAREN))
{
{
R18 l_V_587; memset(&l_V_587, 0, sizeof l_V_587);
S_R18(&l_V_587, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R7(&(l_V_587).f_C, r_FMT1(rt_str("(@)", 3), (l_V_587).f_C), 0);
return l_V_587;
}
}
else if ((l_K_586 == g_N_STR))
{
return r_STRING_LITERAL(p_E);
}
else if ((l_K_586 == g_N_BITS))
{
return r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R11 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R11 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R11 *)rt_nil_check(p_E))).f_NAME).f_LEN));
}
else if ((l_K_586 == g_N_ENUMLIT))
{
return r_ENUM_LITERAL(p_E, p_WANT);
}
else if ((l_K_586 == g_N_RECCONS))
{
return r_RECORD_CONSTRUCTOR(p_E, p_WANT);
}
else if ((l_K_586 == g_N_ARRCONS))
{
return r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
}
else if ((l_K_586 == g_N_TYPESPEC))
{
return r_TYPE_SPECIFIER(p_E);
}
else if ((l_K_586 == g_N_QUAL))
{
{
rt_int l_SAVED_588; memset(&l_SAVED_588, 0, sizeof l_SAVED_588);
l_SAVED_588 = ((*(R22 *)rt_nil_check(g_W))).f_ROUNDED;
R18 l_V_589; memset(&l_V_589, 0, sizeof l_V_589);
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
S_R18(&l_V_589, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R22 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_588;
return l_V_589;
}
}
else if ((l_K_586 == g_N_NEW))
{
return r_NEW_EXPR(p_E, p_WANT);
}
else if ((l_K_586 == g_N_NAME))
{
return r_NAME_EXPR(p_E, p_WANT);
}
else if ((l_K_586 == g_N_APPLY))
{
{
R13 * l_Y_590; memset(&l_Y_590, 0, sizeof l_Y_590);
l_Y_590 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_590 == NULL)))
{
if (((((*(R13 *)rt_nil_check(l_Y_590))).f_KIND == g_Y_VAR) || (((*(R13 *)rt_nil_check(l_Y_590))).f_KIND == g_Y_CONST)))
{
{
R11 * l_N_591; memset(&l_N_591, 0, sizeof l_N_591);
l_N_591 = r_NEW_NODE(g_N_INDEX, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
R11 * l_A_592; memset(&l_A_592, 0, sizeof l_A_592);
l_A_592 = r_NEW_NODE(g_N_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_A_592))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R11 *)rt_nil_check(l_N_591))).f_A = l_A_592;
((*(R11 *)rt_nil_check(l_N_591))).f_B = ((*(R11 *)rt_nil_check(p_E))).f_A;
return r_EXPR(l_N_591, p_WANT);
}
}
}
return r_CALL_EXPR(p_E, p_WANT);
}
}
else if ((l_K_586 == g_N_FIELD))
{
return r_FIELD_EXPR(p_E);
}
else if ((l_K_586 == g_N_DEREF))
{
{
R18 l_B_593; memset(&l_B_593, 0, sizeof l_B_593);
S_R18(&l_B_593, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R14 *)rt_nil_check((l_B_593).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R14 * l_TT_594; memset(&l_TT_594, 0, sizeof l_TT_594);
l_TT_594 = r_TARGET((l_B_593).f_T);
return r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_594), (l_B_593).f_C), l_TT_594, 1, r_NO_TEXT());
}
}
}
else if ((l_K_586 == g_N_INDEX))
{
return r_INDEX_EXPR(p_E);
}
else if ((l_K_586 == g_N_SUBSTR))
{
{
R18 l_B_595; memset(&l_B_595, 0, sizeof l_B_595);
S_R18(&l_B_595, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
R14 * l_BT_596; memset(&l_BT_596, 0, sizeof l_BT_596);
l_BT_596 = r_REAL_TYPE((l_B_595).f_T);
R7 l_LO_597; memset(&l_LO_597, 0, sizeof l_LO_597);
R7 l_HI_598; memset(&l_HI_598, 0, sizeof l_HI_598);
if ((!(((((*(R14 *)rt_nil_check(l_BT_596))).f_KIND == g_T_STR) || (((*(R14 *)rt_nil_check(l_BT_596))).f_KIND == g_T_BITS)))))
{
if ((((*(R14 *)rt_nil_check((l_B_595).f_T))).f_KIND == g_T_ABS))
{
return r_OPERATOR_CALL3(r_MK(rt_str("SUBSTRING_", 10)), l_B_595, ((*(R11 *)rt_nil_check(p_E))).f_B, ((*(R11 *)rt_nil_check(p_E))).f_C, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R7(&l_LO_597, r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B), 0);
S_R7(&l_HI_598, r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_C), 0);
if ((((*(R14 *)rt_nil_check(l_BT_596))).f_KIND == g_T_BITS))
{
return r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_595).f_C, l_LO_597, l_HI_598), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
}
{
R14 * l_T_599; memset(&l_T_599, 0, sizeof l_T_599);
l_T_599 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R14 *)rt_nil_check(l_T_599))).f_BASE = ((*(R14 *)rt_nil_check(l_BT_596))).f_BASE;
return r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_595).f_C, l_LO_597, l_HI_598), l_T_599);
}
}
}
else if ((l_K_586 == g_N_UNOP))
{
return r_UNARY(p_E);
}
else if ((l_K_586 == g_N_BINOP))
{
return r_BINARY(p_E);
}
else if ((l_K_586 == g_N_IN))
{
return r_IN_EXPR(p_E);
}
else if (((l_K_586 == g_N_ANY) || (l_K_586 == g_N_DONTCARE)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((((((l_K_586 == g_TS_NAME) || (l_K_586 == g_TS_ARRAY)) || (l_K_586 == g_TS_RECORD)) || (l_K_586 == g_TS_ENUM)) || (l_K_586 == g_TS_GEN)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R7 r_INT_EXPR(R11 * p_E) { 
rt_int l_SAVED_600; memset(&l_SAVED_600, 0, sizeof l_SAVED_600);
l_SAVED_600 = ((*(R22 *)rt_nil_check(g_W))).f_ROUNDED;
R18 l_V_601; memset(&l_V_601, 0, sizeof l_V_601);
((*(R22 *)rt_nil_check(g_W))).f_ROUNDED = 0;
S_R18(&l_V_601, r_EXPR(p_E, ((*(R22 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R22 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_600;
if ((((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_601).f_T)))).f_KIND == g_T_ENUM))
{
return (l_V_601).f_C;
}
if (((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_601).f_T)))).f_KIND == g_T_INT)) || (!(((*(R14 *)rt_nil_check((l_V_601).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_601).f_T));
}
return (l_V_601).f_C;
rt_raise(RT_X_INIT);
}
static R7 r_BOOL_EXPR(R11 * p_E) { 
R18 l_V_602; memset(&l_V_602, 0, sizeof l_V_602);
S_R18(&l_V_602, r_EXPR(p_E, ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_602).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_602).f_T));
}
return (l_V_602).f_C;
rt_raise(RT_X_INIT);
}
static R14 * r_BITS_TYPE(rt_int p_LEN) { 
R14 * l_T_603; memset(&l_T_603, 0, sizeof l_T_603);
l_T_603 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R7(&((*(R14 *)rt_nil_check(l_T_603))).f_LEN_C, r_NUM(p_LEN), 0);
S_R12(&((*(R14 *)rt_nil_check(l_T_603))).f_MLEN, r_SOME(p_LEN), 0);
}
return l_T_603;
rt_raise(RT_X_INIT);
}
static R18 r_REAL_LITERAL(R11 * p_E) { 
R7 l_T_604; memset(&l_T_604, 0, sizeof l_T_604);
S_R7(&l_T_604, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_605; memset(&l_S_605, 0, sizeof l_S_605);
l_S_605 = rt_str_new((l_T_604).f_LEN);
rt_b_assign(&l_S_605, r_STR(l_T_604, (l_T_604).f_LEN));
rt_int l_POINT_606; memset(&l_POINT_606, 0, sizeof l_POINT_606);
l_POINT_606 = 0;
rt_int l_DIGITS_607; memset(&l_DIGITS_607, 0, sizeof l_DIGITS_607);
l_DIGITS_607 = ((rt_int)0LL);
{ rt_int it609_lo = ((rt_int)0LL), it609_hi = rt_sub((l_T_604).f_LEN, ((rt_int)1LL));
for (rt_int it609 = it609_lo; it609 <= it609_hi; it609++) {
{
if (rt_b_eq(rt_b_slice(l_S_605, it609, it609), rt_str(".", 1)))
{
l_POINT_606 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_605, it609, it609), rt_str("E", 1)))
{
goto L_end608;
}
else
{
l_DIGITS_607 = rt_add(l_DIGITS_607, ((rt_int)1LL));
}
}
} } L_end608: ;
if ((((*(R11 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
return r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_604), r_NUM(((*(R11 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R11 *)rt_nil_check(p_E))).f_IV));
}
if ((!l_POINT_606))
{
return r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_604)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
{
R14 * l_F_610; memset(&l_F_610, 0, sizeof l_F_610);
l_F_610 = r_NEW_TYP(g_T_FLOAT);
((*(R14 *)rt_nil_check(l_F_610))).f_SCALE = l_DIGITS_607;
if ((l_DIGITS_607 > ((rt_int)15LL)))
{
((*(R14 *)rt_nil_check(l_F_610))).f_SCALE = ((rt_int)15LL);
}
if ((l_DIGITS_607 < ((rt_int)1LL)))
{
((*(R14 *)rt_nil_check(l_F_610))).f_SCALE = ((rt_int)1LL);
}
if (rt_b_eq(rt_b_slice(l_S_605, rt_sub((l_T_604).f_LEN, ((rt_int)1LL)), rt_sub((l_T_604).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
return r_MKET(r_FMT1(rt_str("(@0)", 4), l_T_604), l_F_610);
}
if (rt_b_eq(rt_b_slice(l_S_605, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
return r_MKET(r_FMT1(rt_str("(0@)", 4), l_T_604), l_F_610);
}
return r_MKET(r_FMT1(rt_str("(@)", 3), l_T_604), l_F_610);
}
rt_raise(RT_X_INIT);
}
static R18 r_STRING_LITERAL(R11 * p_E) { 
rt_int l_AT_611; memset(&l_AT_611, 0, sizeof l_AT_611);
l_AT_611 = ((*(R22 *)rt_nil_check(g_W))).f_TOP;
R14 * l_CS_612; memset(&l_CS_612, 0, sizeof l_CS_612);
l_CS_612 = ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII;
R11 * l_P_613; memset(&l_P_613, 0, sizeof l_P_613);
l_P_613 = ((*(R11 *)rt_nil_check(p_E))).f_A;
R7 l_R_614; memset(&l_R_614, 0, sizeof l_R_614);
if (((((*(R11 *)rt_nil_check(p_E))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R13 * l_Y_615; memset(&l_Y_615, 0, sizeof l_Y_615);
l_Y_615 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_615 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R13 *)rt_nil_check(l_Y_615))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_612 = r_RESOLVE_USER_NAME(((*(R11 *)rt_nil_check(p_E))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R14 *)rt_nil_check(l_CS_612))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
}
}
for (;;) {
if ((l_P_613 == NULL)) goto L_end616;
{
if ((((*(R11 *)rt_nil_check(l_P_613))).f_IV == g_K_STR))
{
if ((l_CS_612 == ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R7(&l_R_614, r_MK(r_STR(((*(R11 *)rt_nil_check(l_P_613))).f_NAME, (((*(R11 *)rt_nil_check(l_P_613))).f_NAME).f_LEN)), 0);
}
else
{
{
R7 l_Q_617; memset(&l_Q_617, 0, sizeof l_Q_617);
S_R7(&l_Q_617, ((*(R11 *)rt_nil_check(l_P_613))).f_NAME, 0);
rstr l_QS_618; memset(&l_QS_618, 0, sizeof l_QS_618);
l_QS_618 = rt_str_new((l_Q_617).f_LEN);
rt_b_assign(&l_QS_618, r_STR(l_Q_617, (l_Q_617).f_LEN));
{ rt_int it620_lo = ((rt_int)0LL), it620_hi = rt_sub((l_Q_617).f_LEN, ((rt_int)1LL));
for (rt_int it620 = it620_lo; it620 <= it620_hi; it620++) {
{
{
R13 * l_Y_621; memset(&l_Y_621, 0, sizeof l_Y_621);
l_Y_621 = r_FIND_LITERAL(r_MKN(rt_str_cat(rt_str_cat(rt_str("\\'", 2), rt_b_slice(l_QS_618, it620, it620)), rt_str("'", 1))), l_CS_612);
if ((l_Y_621 == NULL))
{
r_FAIL(((*(R11 *)rt_nil_check(l_P_613))).f_LINE, rt_str_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_618, it620, it620)));
}
S_R7(&l_R_614, r_MK(r_CHAR_OF(((*(R13 *)rt_nil_check(l_Y_621))).f_MV)), 0);
}
}
} } L_end619: ;
}
}
}
else
{
{
R13 * l_Y_622; memset(&l_Y_622, 0, sizeof l_Y_622);
l_Y_622 = r_FIND_LITERAL(((*(R11 *)rt_nil_check(l_P_613))).f_NAME, l_CS_612);
if ((l_Y_622 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(l_P_613))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R11 *)rt_nil_check(l_P_613))).f_NAME);
}
S_R7(&l_R_614, r_MK(r_CHAR_OF(((*(R13 *)rt_nil_check(l_Y_622))).f_MV)), 0);
}
}
l_P_613 = ((*(R11 *)rt_nil_check(l_P_613))).f_NEXT;
}
} L_end616: ;
{
R7 l_S_623; memset(&l_S_623, 0, sizeof l_S_623);
S_R7(&l_S_623, ({ R7 rc624; memset(&rc624, 0, sizeof rc624);  rc624.f_AT = l_AT_611; rc624.f_LEN = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_TOP, l_AT_611); rc624.f_H = rt_neg(((rt_int)1LL)); rc624; }), 0);
R14 * l_T_625; memset(&l_T_625, 0, sizeof l_T_625);
l_T_625 = r_STR_TYPE(r_NUM((l_S_623).f_LEN), r_SOME((l_S_623).f_LEN));
((*(R14 *)rt_nil_check(l_T_625))).f_BASE = l_CS_612;
return r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_623), r_NUM((l_S_623).f_LEN)), l_T_625);
}
rt_raise(RT_X_INIT);
}
static R14 * r_RESOLVE_USER_NAME(R7 p_NAME, rt_int p_LINE) { 
R11 * l_TS_626; memset(&l_TS_626, 0, sizeof l_TS_626);
l_TS_626 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_TS_626))).f_NAME, p_NAME, 0);
return r_RESOLVE(l_TS_626);
rt_raise(RT_X_INIT);
}
static R18 r_ENUM_LITERAL(R11 * p_E, R14 * p_WANT) { 
R13 * l_Y_627; memset(&l_Y_627, 0, sizeof l_Y_627);
if ((!(p_WANT == NULL)))
{
{
R14 * l_WT_628; memset(&l_WT_628, 0, sizeof l_WT_628);
l_WT_628 = r_REAL_TYPE(p_WANT);
if ((((*(R14 *)rt_nil_check(l_WT_628))).f_KIND == g_T_ENUM))
{
l_Y_627 = r_FIND_LITERAL(((*(R11 *)rt_nil_check(p_E))).f_NAME, l_WT_628);
if ((!(l_Y_627 == NULL)))
{
return r_MKET(r_NUM(((*(R13 *)rt_nil_check(l_Y_627))).f_MV), r_ENUM_RESULT(l_Y_627, p_WANT));
}
}
}
}
l_Y_627 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
{
R13 * l_FOUND_629; memset(&l_FOUND_629, 0, sizeof l_FOUND_629);
l_FOUND_629 = NULL;
rt_int l_N_630; memset(&l_N_630, 0, sizeof l_N_630);
l_N_630 = ((rt_int)0LL);
for (;;) {
if ((l_Y_627 == NULL)) goto L_end631;
{
if ((((*(R13 *)rt_nil_check(l_Y_627))).f_KIND == g_Y_ENUMLIT))
{
if (((!(((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_627))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII)) || (l_FOUND_629 == NULL)))
{
if (((l_FOUND_629 == NULL) || (((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_FOUND_629))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII)))
{
l_FOUND_629 = l_Y_627;
}
else
{
l_N_630 = rt_add(l_N_630, ((rt_int)1LL));
}
}
}
l_Y_627 = r_LOOKUP_NEXT(l_Y_627);
}
} L_end631: ;
if ((l_FOUND_629 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_630 > ((rt_int)0LL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
return r_MKET(r_NUM(((*(R13 *)rt_nil_check(l_FOUND_629))).f_MV), ((*(R13 *)rt_nil_check(l_FOUND_629))).f_T);
}
rt_raise(RT_X_INIT);
}
static R14 * r_ENUM_RESULT(R13 * p_Y, R14 * p_WANT) { 
if ((((*(R14 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
return p_WANT;
}
return ((*(R13 *)rt_nil_check(p_Y))).f_T;
rt_raise(RT_X_INIT);
}
static R18 r_NAME_EXPR(R11 * p_E, R14 * p_WANT) { 
R13 * l_Y_632; memset(&l_Y_632, 0, sizeof l_Y_632);
l_Y_632 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_632 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R13 *)rt_nil_check(l_Y_632))).f_KIND == g_Y_VAR) || (((*(R13 *)rt_nil_check(l_Y_632))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_633; memset(&l_WRITABLE_633, 0, sizeof l_WRITABLE_633);
l_WRITABLE_633 = r_CHECK_IMPORTED(l_Y_632, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
return r_MKLV(r_OBJ_ACCESS(l_Y_632), ((*(R13 *)rt_nil_check(l_Y_632))).f_T, ((((*(R13 *)rt_nil_check(l_Y_632))).f_KIND == g_Y_VAR) && l_WRITABLE_633), r_NO_TEXT());
}
}
else if ((((*(R13 *)rt_nil_check(l_Y_632))).f_KIND == g_Y_GEN))
{
return r_MKET(((*(R13 *)rt_nil_check(l_Y_632))).f_ACCESS, ((*(R13 *)rt_nil_check(l_Y_632))).f_T);
}
else if ((((*(R13 *)rt_nil_check(l_Y_632))).f_KIND == g_Y_ENUMLIT))
{
return r_ENUM_LITERAL(p_E, p_WANT);
}
else if (((((*(R13 *)rt_nil_check(l_Y_632))).f_KIND == g_Y_ROUTINE) || (((*(R13 *)rt_nil_check(l_Y_632))).f_KIND == g_Y_BUILTIN)))
{
{
R11 * l_N_634; memset(&l_N_634, 0, sizeof l_N_634);
l_N_634 = r_NEW_NODE(g_N_APPLY, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_N_634))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
return r_CALL_EXPR(l_N_634, p_WANT);
}
}
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R18 r_FIELD_EXPR(R11 * p_E) { 
R11 * l_A_635; memset(&l_A_635, 0, sizeof l_A_635);
l_A_635 = ((*(R11 *)rt_nil_check(p_E))).f_A;
if ((((*(R11 *)rt_nil_check(l_A_635))).f_KIND == g_N_INDEX))
{
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_635))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_635))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R18 l_B_636; memset(&l_B_636, 0, sizeof l_B_636);
S_R18(&l_B_636, r_EXPR(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_635))).f_A))).f_A, NULL), 0);
R7 l_I_637; memset(&l_I_637, 0, sizeof l_I_637);
S_R7(&l_I_637, r_INT_EXPR(((*(R11 *)rt_nil_check(l_A_635))).f_B), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_B_636).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
return r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_636).f_C, l_I_637, r_NUM(rt_sub(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_B_636).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
return r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_636).f_C, l_I_637, r_NUM(rt_sub(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_B_636).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R11 *)rt_nil_check(l_A_635))).f_KIND == g_N_PAREN))
{
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_635))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_635))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_635))).f_A))).f_A))).f_NAME))
{
return r_ATTRIBUTE_OF_ATTRIBUTE(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_635))).f_A))).f_A))).f_NAME, ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_635))).f_A))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
}
}
}
}
if ((((*(R11 *)rt_nil_check(l_A_635))).f_KIND == g_N_NAME))
{
{
R13 * l_Y_638; memset(&l_Y_638, 0, sizeof l_Y_638);
l_Y_638 = r_LOOKUP(((*(R11 *)rt_nil_check(l_A_635))).f_NAME);
if ((!(l_Y_638 == NULL)))
{
if ((((*(R13 *)rt_nil_check(l_Y_638))).f_KIND == g_Y_TYPE))
{
return r_TYPE_ATTRIBUTE(((*(R11 *)rt_nil_check(l_A_635))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
}
}
else if (r_IS_TYPE_WORD(((*(R11 *)rt_nil_check(l_A_635))).f_NAME))
{
return r_TYPE_ATTRIBUTE(((*(R11 *)rt_nil_check(l_A_635))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
}
}
}
{
R18 l_B_639; memset(&l_B_639, 0, sizeof l_B_639);
S_R18(&l_B_639, r_EXPR(l_A_635, NULL), 0);
R14 * l_BT_640; memset(&l_BT_640, 0, sizeof l_BT_640);
l_BT_640 = (l_B_639).f_T;
if ((((*(R14 *)rt_nil_check(l_BT_640))).f_KIND == g_T_REC))
{
{
R15 * l_F_641; memset(&l_F_641, 0, sizeof l_F_641);
l_F_641 = r_FIND_FIELD(l_BT_640, ((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_641 == NULL)))
{
r_CHECK_VARIANT(l_F_641, l_BT_640, l_A_635, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
return r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_639).f_C, ((*(R15 *)rt_nil_check(l_F_641))).f_CNAME), ((*(R15 *)rt_nil_check(l_F_641))).f_T, ((l_B_639).f_LVAL && (((*(R15 *)rt_nil_check(l_F_641))).f_KIND == ((rt_int)0LL))), (l_B_639).f_C);
}
}
}
return r_ATTRIBUTE(l_B_639, ((*(R11 *)rt_nil_check(p_E))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R7 p_NAME) { 
return ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R15 * p_F, R14 * p_T, R11 * p_BASE, rt_int p_LINE) { 
if (((((*(R15 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R12 l_TAGV_642; memset(&l_TAGV_642, 0, sizeof l_TAGV_642);
S_R12(&l_TAGV_642, r_TAG_VALUE(p_T, ((*(R15 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_642).f_OK))
{
r_FAILT(p_LINE, rt_str_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R15 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R15 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_642).f_V, ((*(R15 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R15 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R15 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R12 r_TAG_VALUE(R14 * p_T, R7 p_TAGN) { 
R15 * l_F_643; memset(&l_F_643, 0, sizeof l_F_643);
l_F_643 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
R17 * l_A_644; memset(&l_A_644, 0, sizeof l_A_644);
l_A_644 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_643 == NULL)) goto L_end645;
{
if ((!(((*(R15 *)rt_nil_check(l_F_643))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_644 == NULL))
{
return r_NO_MVAL();
}
if (r_TEQ(((*(R15 *)rt_nil_check(l_F_643))).f_NAME, p_TAGN))
{
if (((*(R17 *)rt_nil_check(l_A_644))).f_ANYARG)
{
return r_NO_MVAL();
}
return ((*(R17 *)rt_nil_check(l_A_644))).f_MLO;
}
l_A_644 = ((*(R17 *)rt_nil_check(l_A_644))).f_NEXT;
}
l_F_643 = ((*(R15 *)rt_nil_check(l_F_643))).f_NEXT;
}
} L_end645: ;
return r_NO_MVAL();
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R11 * p_L, rt_int p_V, R14 * p_T) { 
R11 * l_P_646; memset(&l_P_646, 0, sizeof l_P_646);
l_P_646 = p_L;
for (;;) {
if ((l_P_646 == NULL)) goto L_end647;
{
if ((((*(R11 *)rt_nil_check(l_P_646))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(l_P_646))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(l_P_646))).f_B, p_T)).f_V)))
{
return 1;
}
}
else if (((r_ENUM_MANIFEST(l_P_646, p_T)).f_V == p_V))
{
return 1;
}
l_P_646 = ((*(R11 *)rt_nil_check(l_P_646))).f_NEXT;
}
} L_end647: ;
return 0;
rt_raise(RT_X_INIT);
}
static R18 r_INDEX_EXPR(R11 * p_E) { 
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R18 l_A_648; memset(&l_A_648, 0, sizeof l_A_648);
S_R18(&l_A_648, r_EXPR(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_A, NULL), 0);
R7 l_I_649; memset(&l_I_649, 0, sizeof l_I_649);
S_R7(&l_I_649, r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R14 *)rt_nil_check(r_REAL_TYPE((l_A_648).f_T)))).f_KIND == g_T_ARR))
{
return r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_648).f_C, (l_A_648).f_C, l_I_649, r_NUM(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_A_648).f_T)))).f_DIMS)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
}
}
return r_INDEX_EXPR2(p_E);
rt_raise(RT_X_INIT);
}
static R18 r_INDEX_EXPR2(R11 * p_E) { 
R18 l_B_650; memset(&l_B_650, 0, sizeof l_B_650);
S_R18(&l_B_650, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
R14 * l_T_651; memset(&l_T_651, 0, sizeof l_T_651);
l_T_651 = r_REAL_TYPE((l_B_650).f_T);
R11 * l_S_652; memset(&l_S_652, 0, sizeof l_S_652);
l_S_652 = ((*(R11 *)rt_nil_check(p_E))).f_B;
R7 l_IX_653; memset(&l_IX_653, 0, sizeof l_IX_653);
S_R7(&l_IX_653, r_MK(rt_str("", 0)), 0);
rt_int l_N_654; memset(&l_N_654, 0, sizeof l_N_654);
l_N_654 = ((rt_int)0LL);
if ((!(((*(R14 *)rt_nil_check(l_T_651))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_652 == NULL)) goto L_end655;
{
if ((l_N_654 > ((rt_int)0LL)))
{
S_R7(&l_IX_653, r_CATS(l_IX_653, rt_str(", ", 2)), 0);
}
S_R7(&l_IX_653, r_CAT(l_IX_653, r_INT_EXPR(l_S_652)), 0);
l_N_654 = rt_add(l_N_654, ((rt_int)1LL));
l_S_652 = ((*(R11 *)rt_nil_check(l_S_652))).f_NEXT;
}
} L_end655: ;
if ((!(l_N_654 == ((*(R14 *)rt_nil_check(l_T_651))).f_DIMS)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_654 == ((rt_int)1LL)))
{
return r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_650).f_C, l_IX_653, (l_B_650).f_C, (l_B_650).f_C), ((*(R14 *)rt_nil_check(l_T_651))).f_ELEM, (l_B_650).f_LVAL, r_NO_TEXT());
}
{
R7 l_X_656; memset(&l_X_656, 0, sizeof l_X_656);
S_R7(&l_X_656, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_650).f_C, r_NUM(l_N_654), (l_B_650).f_C, (l_B_650).f_C), 0);
return r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_656, l_IX_653), ((*(R14 *)rt_nil_check(l_T_651))).f_ELEM, (l_B_650).f_LVAL, r_NO_TEXT());
}
rt_raise(RT_X_INIT);
}
static R7 r_OP_NAME(R7 p_OP, rt_int p_UNARY) { 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
return r_MKN(rt_str("NEGATE_", 7));
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
return r_MKN(rt_str("MON_PLUS_", 9));
}
return r_MKN(rt_str("COMPLEMENT_", 11));
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
return r_MKN(rt_str("ADD_", 4));
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
return r_MKN(rt_str("SUBTRACT_", 9));
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
return r_MKN(rt_str("MULTIPLY_", 9));
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
return r_MKN(rt_str("DIVIDE_", 7));
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
return r_MKN(rt_str("MODULUS_", 8));
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
return r_MKN(rt_str("EXPONENTIATE_", 13));
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
return r_MKN(rt_str("CONCATENATE_", 12));
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
return r_MKN(rt_str("EQUAL_", 6));
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
return r_MKN(rt_str("UNEQUAL_", 8));
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
return r_MKN(rt_str("GREATER_THAN_", 13));
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
return r_MKN(rt_str("LESS_THAN_", 10));
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
return r_MKN(rt_str("GREATER_EQUAL_", 14));
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
return r_MKN(rt_str("LESS_EQUAL_", 11));
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
return r_MKN(rt_str("AND_", 4));
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
return r_MKN(rt_str("OR_", 3));
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
return r_MKN(rt_str("XOR_", 4));
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
return r_MKN(rt_str("IMPLIES_", 8));
}
return r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
rt_raise(RT_X_INIT);
}
static R19 * r_VAL_ARG(R18 p_V, R19 * p_NEXT) { 
R19 * l_A_657; memset(&l_A_657, 0, sizeof l_A_657);
l_A_657 = ((R19 *)rt_alloc(sizeof (R19)));
S_R19(&(*(R19 *)rt_nil_check(l_A_657)), ({ R19 rc658; memset(&rc658, 0, sizeof rc658);  rc658.f_E = NULL; S_R18(&rc658.f_V, p_V, 0); rc658.f_HAVE = 1; rc658.f_MODE = g_M_IN; rc658.f_NEXT = p_NEXT; rc658; }), 0);
return l_A_657;
rt_raise(RT_X_INIT);
}
static R19 * r_NODE_ARG(R11 * p_E, rt_int p_MODE, R19 * p_NEXT) { 
R19 * l_A_659; memset(&l_A_659, 0, sizeof l_A_659);
l_A_659 = ((R19 *)rt_alloc(sizeof (R19)));
S_R19(&(*(R19 *)rt_nil_check(l_A_659)), ({ R19 rc660; memset(&rc660, 0, sizeof rc660);  rc660.f_E = p_E; S_R18(&rc660.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc660.f_HAVE = 0; rc660.f_MODE = p_MODE; rc660.f_NEXT = p_NEXT; rc660; }), 0);
return l_A_659;
rt_raise(RT_X_INIT);
}
static R13 * r_USER_OPERATOR(R7 p_NAME, R19 * p_ARGS, rt_int p_LINE) { 
R13 * l_Y_661; memset(&l_Y_661, 0, sizeof l_Y_661);
l_Y_661 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_661 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_661 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
return l_Y_661;
rt_raise(RT_X_INIT);
}
static R18 r_OPERATOR_CALL3(R7 p_NAME, R18 p_A, R11 * p_B, R11 * p_C, rt_int p_LINE) { 
R19 * l_ARGS_662; memset(&l_ARGS_662, 0, sizeof l_ARGS_662);
l_ARGS_662 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R13 * l_Y_663; memset(&l_Y_663, 0, sizeof l_Y_663);
l_Y_663 = r_USER_OPERATOR(p_NAME, l_ARGS_662, p_LINE);
if ((l_Y_663 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
return r_CALL_SYM(l_Y_663, l_ARGS_662, p_LINE);
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
return p_C;
}
if ((p_STO > p_SFROM))
{
return r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
}
if (((*(R22 *)rt_nil_check(g_W))).f_ROUNDED)
{
return r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
}
return r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
rt_raise(RT_X_INIT);
}
static R7 r_RESCALE(R18 p_V, rt_int p_S, rt_int p_LINE) { 
if ((((*(R14 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
return r_RESCALE_C((p_V).f_C, ((*(R14 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
rt_raise(RT_X_INIT);
}
static R7 r_CONVERT(R18 p_V, R14 * p_T, rt_int p_LINE, R7 p_SELF) { 
R14 * l_RT_664; memset(&l_RT_664, 0, sizeof l_RT_664);
l_RT_664 = r_REAL_TYPE(p_T);
R14 * l_VT_665; memset(&l_VT_665, 0, sizeof l_VT_665);
l_VT_665 = (p_V).f_T;
if (((((*(R14 *)rt_nil_check(l_VT_665))).f_KIND == g_T_NIL) && (((*(R14 *)rt_nil_check(l_RT_664))).f_KIND == g_T_PTR)))
{
return (p_V).f_C;
}
if (((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R14 *)rt_nil_check(l_VT_665))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_665)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
return (p_V).f_C;
}
if ((!r_SAME_CLASS(l_RT_664, l_VT_665)))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_665), (r_TYPE_NAME(l_VT_665)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_664), (r_TYPE_NAME(l_RT_664)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R14 *)rt_nil_check(l_RT_664))).f_KIND == g_T_INT))
{
return r_RANGE_CHECK(l_RT_664, r_RESCALE(p_V, ((*(R14 *)rt_nil_check(l_RT_664))).f_SCALE, p_LINE), p_SELF);
}
else if (((((*(R14 *)rt_nil_check(l_RT_664))).f_KIND == g_T_FLOAT) || (((*(R14 *)rt_nil_check(l_RT_664))).f_KIND == g_T_ENUM)))
{
return r_RANGE_CHECK(l_RT_664, (p_V).f_C, p_SELF);
}
else if (((((*(R14 *)rt_nil_check(l_RT_664))).f_KIND == g_T_STR) || (((*(R14 *)rt_nil_check(l_RT_664))).f_KIND == g_T_BITS)))
{
if (((((*(R14 *)rt_nil_check(l_RT_664))).f_MLEN).f_OK && (((*(R14 *)rt_nil_check(l_VT_665))).f_MLEN).f_OK))
{
if ((!((((*(R14 *)rt_nil_check(l_RT_664))).f_MLEN).f_V == (((*(R14 *)rt_nil_check(l_VT_665))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R14 *)rt_nil_check(l_RT_664))).f_KIND == g_T_PTR))
{
if ((!r_SAME_TYPE(r_TARGET(l_RT_664), r_TARGET(l_VT_665))))
{
r_FAIL(p_LINE, rt_str("the pointers are to different types (3.10.5)", 44));
}
}
else if ((((*(R14 *)rt_nil_check(l_RT_664))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_664)) && (!r_HAS_ANY(l_VT_665))))
{
if ((!r_SAME_ARGS(((*(R14 *)rt_nil_check(l_RT_664))).f_ARGS, ((*(R14 *)rt_nil_check(l_VT_665))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R14 *)rt_nil_check(l_RT_664))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R14 *)rt_nil_check(l_RT_664))).f_ELEM, ((*(R14 *)rt_nil_check(l_VT_665))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
}
return (p_V).f_C;
rt_raise(RT_X_INIT);
}
static R7 r_STORE_CODE(R14 * p_T, R7 p_LV, R18 p_V, rt_int p_LINE, R7 p_SELF) { 
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R19 * l_ARGS_666; memset(&l_ARGS_666, 0, sizeof l_ARGS_666);
l_ARGS_666 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R13 * l_Y_667; memset(&l_Y_667, 0, sizeof l_Y_667);
((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(l_ARGS_666))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_667 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_666, p_LINE, 0);
if ((l_Y_667 == NULL))
{
((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(l_ARGS_666))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_667 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_666, p_LINE, 0);
}
if ((l_Y_667 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
return r_CATS((r_CALL_SYM(l_Y_667, l_ARGS_666, p_LINE)).f_C, rt_str(";", 1));
}
}
return r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
rt_raise(RT_X_INIT);
}
static R18 r_UNARY(R11 * p_E) { 
R18 l_A_668; memset(&l_A_668, 0, sizeof l_A_668);
S_R18(&l_A_668, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
R14 * l_T_669; memset(&l_T_669, 0, sizeof l_T_669);
l_T_669 = (l_A_668).f_T;
R7 l_OP_670; memset(&l_OP_670, 0, sizeof l_OP_670);
S_R7(&l_OP_670, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
if ((((*(R14 *)rt_nil_check(l_T_669))).f_KIND == g_T_ABS))
{
{
R19 * l_ARGS_671; memset(&l_ARGS_671, 0, sizeof l_ARGS_671);
l_ARGS_671 = r_VAL_ARG(l_A_668, NULL);
R13 * l_Y_672; memset(&l_Y_672, 0, sizeof l_Y_672);
l_Y_672 = r_USER_OPERATOR(r_OP_NAME(l_OP_670, 1), l_ARGS_671, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
if ((l_Y_672 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_669));
}
return r_CALL_SYM(l_Y_672, l_ARGS_671, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
}
}
if (r_TEQS(l_OP_670, rt_str("NOT", 3)))
{
if ((((*(R14 *)rt_nil_check(l_T_669))).f_KIND == g_T_BOOL))
{
return r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_668).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
}
else if ((((*(R14 *)rt_nil_check(l_T_669))).f_KIND == g_T_BITS))
{
return r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_668).f_C), l_T_669);
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R14 *)rt_nil_check(l_T_669))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_670, rt_str("-", 1)))
{
return r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_668).f_C), r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_669))).f_SCALE));
}
return r_MKET((l_A_668).f_C, r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_669))).f_SCALE));
}
else if ((((*(R14 *)rt_nil_check(l_T_669))).f_KIND == g_T_FLOAT))
{
if (r_TEQS(l_OP_670, rt_str("-", 1)))
{
return r_MKET(r_FMT1(rt_str("(-@)", 4), (l_A_668).f_C), l_T_669);
}
return l_A_668;
}
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_669));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R11 * p_E) { 
return (((((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R11 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
rt_raise(RT_X_INIT);
}
static R18 r_BINARY(R11 * p_E) { 
R7 l_OP_673; memset(&l_OP_673, 0, sizeof l_OP_673);
S_R7(&l_OP_673, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
R18 l_A_674; memset(&l_A_674, 0, sizeof l_A_674);
R18 l_B_675; memset(&l_B_675, 0, sizeof l_B_675);
if ((r_TEQS(l_OP_673, rt_str("&", 1)) || r_TEQS(l_OP_673, rt_str("!", 1))))
{
{
R12 l_MA_676; memset(&l_MA_676, 0, sizeof l_MA_676);
S_R12(&l_MA_676, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
R7 l_CA_677; memset(&l_CA_677, 0, sizeof l_CA_677);
S_R7(&l_CA_677, r_BOOL_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
R7 l_CB_678; memset(&l_CB_678, 0, sizeof l_CB_678);
S_R7(&l_CB_678, r_BOOL_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_673, rt_str("&", 1)))
{
return r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_677, l_CB_678), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
}
return r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_677, l_CB_678), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
}
}
if ((r_IS_LITERALISH(((*(R11 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R11 *)rt_nil_check(p_E))).f_B))))
{
S_R18(&l_B_675, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R18(&l_A_674, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, (l_B_675).f_T), 0);
}
else
{
S_R18(&l_A_674, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R18(&l_B_675, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B, (l_A_674).f_T), 0);
}
return r_APPLY_OPERATOR(p_E, l_OP_673, l_A_674, l_B_675);
rt_raise(RT_X_INIT);
}
static R18 r_APPLY_OPERATOR(R11 * p_E, R7 p_OP, R18 p_A, R18 p_B) { 
R14 * l_AT_679; memset(&l_AT_679, 0, sizeof l_AT_679);
l_AT_679 = (p_A).f_T;
R14 * l_BT_680; memset(&l_BT_680, 0, sizeof l_BT_680);
l_BT_680 = (p_B).f_T;
rt_int l_LINE_681; memset(&l_LINE_681, 0, sizeof l_LINE_681);
l_LINE_681 = ((*(R11 *)rt_nil_check(p_E))).f_LINE;
if ((((*(R11 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL)))
{
{
R7 l_NAME_682; memset(&l_NAME_682, 0, sizeof l_NAME_682);
S_R7(&l_NAME_682, r_OP_NAME(p_OP, 0), 0);
if ((((!(r_LOOKUP(l_NAME_682) == NULL)) || (((*(R14 *)rt_nil_check(l_AT_679))).f_KIND == g_T_ABS)) || (((*(R14 *)rt_nil_check(l_BT_680))).f_KIND == g_T_ABS)))
{
{
R19 * l_ARGS_683; memset(&l_ARGS_683, 0, sizeof l_ARGS_683);
l_ARGS_683 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R13 * l_Y_684; memset(&l_Y_684, 0, sizeof l_Y_684);
l_Y_684 = r_USER_OPERATOR(l_NAME_682, l_ARGS_683, l_LINE_681);
if ((!(l_Y_684 == NULL)))
{
return r_CALL_SYM(l_Y_684, l_ARGS_683, l_LINE_681);
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{
R13 * l_Q_685; memset(&l_Q_685, 0, sizeof l_Q_685);
l_Q_685 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_683, l_LINE_681);
if ((!(l_Q_685 == NULL)))
{
return r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_685, l_ARGS_683, l_LINE_681)).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
}
}
}
if (((((*(R14 *)rt_nil_check(l_AT_679))).f_KIND == g_T_ABS) || (((*(R14 *)rt_nil_check(l_BT_680))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_681, rt_str("no such operation for the abstract type: ", 41), l_NAME_682);
}
}
}
}
}
if ((!(((*(R11 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
return r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
return r_EQUALITY(p_E, p_OP, p_A, p_B);
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R14 *)rt_nil_check(l_AT_679))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_BT_680))).f_KIND == g_T_INT)))
{
{
rt_int l_S_686; memset(&l_S_686, 0, sizeof l_S_686);
l_S_686 = r_MAX_INT(((*(R14 *)rt_nil_check(l_AT_679))).f_SCALE, ((*(R14 *)rt_nil_check(l_BT_680))).f_SCALE);
return r_MKET(r_FMT3(rt_str("(@ @ @)", 7), r_RESCALE_C((p_A).f_C, ((*(R14 *)rt_nil_check(l_AT_679))).f_SCALE, l_S_686), p_OP, r_RESCALE_C((p_B).f_C, ((*(R14 *)rt_nil_check(l_BT_680))).f_SCALE, l_S_686)), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
}
}
else if (((((*(R14 *)rt_nil_check(l_AT_679))).f_KIND == g_T_FLOAT) && (((*(R14 *)rt_nil_check(l_BT_680))).f_KIND == g_T_FLOAT)))
{
return r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
}
else if (((((*(R14 *)rt_nil_check(l_AT_679))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_679, l_BT_680)))
{
if (((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_AT_679))).f_BASE))).f_UNORDERED)
{
r_FAIL(l_LINE_681, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
return r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
}
r_FAILT(l_LINE_681, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R14 *)rt_nil_check(l_AT_679))).f_KIND == g_T_STR) && (((*(R14 *)rt_nil_check(l_BT_680))).f_KIND == g_T_STR))) || (((((*(R14 *)rt_nil_check(l_AT_679))).f_KIND == g_T_BITS) && (((*(R14 *)rt_nil_check(l_BT_680))).f_KIND == g_T_BITS)))))
{
{
R14 * l_T_687; memset(&l_T_687, 0, sizeof l_T_687);
l_T_687 = r_NEW_TYP(((*(R14 *)rt_nil_check(l_AT_679))).f_KIND);
((*(R14 *)rt_nil_check(l_T_687))).f_BASE = ((*(R14 *)rt_nil_check(l_AT_679))).f_BASE;
if (((((*(R14 *)rt_nil_check(l_AT_679))).f_MLEN).f_OK && (((*(R14 *)rt_nil_check(l_BT_680))).f_MLEN).f_OK))
{
S_R12(&((*(R14 *)rt_nil_check(l_T_687))).f_MLEN, r_SOME(rt_add((((*(R14 *)rt_nil_check(l_AT_679))).f_MLEN).f_V, (((*(R14 *)rt_nil_check(l_BT_680))).f_MLEN).f_V)), 0);
S_R7(&((*(R14 *)rt_nil_check(l_T_687))).f_LEN_C, r_NUM((((*(R14 *)rt_nil_check(l_T_687))).f_MLEN).f_V), 0);
}
return r_MKET(r_FMT2(rt_str("rt_str_cat(@, @)", 16), (p_A).f_C, (p_B).f_C), l_T_687);
}
}
r_FAIL(l_LINE_681, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R14 *)rt_nil_check(l_AT_679))).f_KIND == g_T_BITS) && (((*(R14 *)rt_nil_check(l_BT_680))).f_KIND == g_T_BITS)))
{
return r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_679);
}
r_FAILT(l_LINE_681, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R14 *)rt_nil_check(l_AT_679))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_BT_680))).f_KIND == g_T_INT)))
{
return r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
}
else if (((((*(R14 *)rt_nil_check(l_AT_679))).f_KIND == g_T_FLOAT) && (((*(R14 *)rt_nil_check(l_BT_680))).f_KIND == g_T_FLOAT)))
{
{
R14 * l_T_688; memset(&l_T_688, 0, sizeof l_T_688);
l_T_688 = r_NEW_TYP(g_T_FLOAT);
((*(R14 *)rt_nil_check(l_T_688))).f_SCALE = r_MAX_INT(((*(R14 *)rt_nil_check(l_AT_679))).f_SCALE, ((*(R14 *)rt_nil_check(l_BT_680))).f_SCALE);
if (((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))))
{
return r_MKET(r_FMT3(rt_str("rt_b_fchk(@ @ @)", 16), (p_A).f_C, p_OP, (p_B).f_C), l_T_688);
}
else if (r_TEQS(p_OP, rt_str("/", 1)))
{
return r_MKET(r_FMT2(rt_str("rt_b_fchk(rt_fdiv(@, @))", 24), (p_A).f_C, (p_B).f_C), l_T_688);
}
}
}
if (((((((*(R14 *)rt_nil_check(l_AT_679))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_BT_680))).f_KIND == g_T_FLOAT))) || (((((*(R14 *)rt_nil_check(l_AT_679))).f_KIND == g_T_FLOAT) && (((*(R14 *)rt_nil_check(l_BT_680))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_681, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_681, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_679), (r_TYPE_NAME(l_AT_679)).f_LEN)));
rt_raise(RT_X_INIT);
}
static R7 r_LOWER_OP(R7 p_OP) { 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
return r_MK(rt_str("and", 3));
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
return r_MK(rt_str("or", 2));
}
return r_MK(rt_str("xor", 3));
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { 
if ((p_A > p_B))
{
return p_A;
}
return p_B;
rt_raise(RT_X_INIT);
}
static R18 r_EQUALITY(R11 * p_E, R7 p_OP, R18 p_A, R18 p_B) { 
R14 * l_AT_689; memset(&l_AT_689, 0, sizeof l_AT_689);
l_AT_689 = r_REAL_TYPE((p_A).f_T);
R14 * l_BT_690; memset(&l_BT_690, 0, sizeof l_BT_690);
l_BT_690 = r_REAL_TYPE((p_B).f_T);
R7 l_R_691; memset(&l_R_691, 0, sizeof l_R_691);
if (((((*(R14 *)rt_nil_check(l_AT_689))).f_KIND == g_T_NIL) || (((*(R14 *)rt_nil_check(l_BT_690))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R14 *)rt_nil_check(l_AT_689))).f_KIND == g_T_PTR) || (((*(R14 *)rt_nil_check(l_BT_690))).f_KIND == g_T_PTR)) || (((((*(R14 *)rt_nil_check(l_AT_689))).f_KIND == g_T_NIL) && (((*(R14 *)rt_nil_check(l_BT_690))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R7(&l_R_691, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R14 *)rt_nil_check(l_AT_689))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_BT_690))).f_KIND == g_T_INT)))
{
{
rt_int l_S_692; memset(&l_S_692, 0, sizeof l_S_692);
l_S_692 = r_MAX_INT(((*(R14 *)rt_nil_check(l_AT_689))).f_SCALE, ((*(R14 *)rt_nil_check(l_BT_690))).f_SCALE);
S_R7(&l_R_691, r_FMT2(rt_str("(@ == @)", 8), r_RESCALE_C((p_A).f_C, ((*(R14 *)rt_nil_check(l_AT_689))).f_SCALE, l_S_692), r_RESCALE_C((p_B).f_C, ((*(R14 *)rt_nil_check(l_BT_690))).f_SCALE, l_S_692)), 0);
}
}
else
{
if ((!r_SAME_CLASS(l_AT_689, l_BT_690)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R14 *)rt_nil_check(l_AT_689))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
if (((((*(R14 *)rt_nil_check(l_AT_689))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_689) || r_HAS_ANY(l_BT_690)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
S_R7(&l_R_691, r_EQUAL_CODE(l_AT_689, (p_A).f_C, (p_B).f_C), 0);
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R7(&l_R_691, r_FMT1(rt_str("(!@)", 4), l_R_691), 0);
}
return r_MKET(l_R_691, ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
rt_raise(RT_X_INIT);
}
static R18 r_FIXED_ARITH(R11 * p_E, R7 p_OP, R18 p_A, R18 p_B) { 
rt_int l_S1_693; memset(&l_S1_693, 0, sizeof l_S1_693);
l_S1_693 = ((*(R14 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_694; memset(&l_S2_694, 0, sizeof l_S2_694);
l_S2_694 = ((*(R14 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_695; memset(&l_S_695, 0, sizeof l_S_695);
l_S_695 = r_MAX_INT(l_S1_693, l_S2_694);
R7 l_FN_696; memset(&l_FN_696, 0, sizeof l_FN_696);
S_R7(&l_FN_696, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R7(&l_FN_696, r_MK(rt_str("rt_sub", 6)), 0);
}
return r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_696, r_RESCALE_C((p_A).f_C, l_S1_693, l_S_695), r_RESCALE_C((p_B).f_C, l_S2_694, l_S_695)), r_INT_TYPE(l_S_695));
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
return r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_693, l_S2_694)));
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R22 *)rt_nil_check(g_W))).f_ROUNDED)
{
return r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_693, l_S2_694)));
}
return r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_693, l_S2_694)));
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R22 *)rt_nil_check(g_W))).f_ROUNDED)
{
return r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_693));
}
return r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_693));
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
rt_int l_S1_697; memset(&l_S1_697, 0, sizeof l_S1_697);
l_S1_697 = ((*(R14 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_698; memset(&l_S2_698, 0, sizeof l_S2_698);
l_S2_698 = ((*(R14 *)rt_nil_check((p_B).f_T))).f_SCALE;
R7 l_RND_699; memset(&l_RND_699, 0, sizeof l_RND_699);
S_R7(&l_RND_699, r_MK(rt_str("0", 1)), 0);
if (((!(((*(R14 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R14 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R22 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R7(&l_RND_699, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R11 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R11 *)rt_nil_check(p_E))).f_LINE);
return r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
}
{
R12 l_SM_700; memset(&l_SM_700, 0, sizeof l_SM_700);
S_R12(&l_SM_700, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_701; memset(&l_S_701, 0, sizeof l_S_701);
l_S_701 = (l_SM_700).f_V;
rt_int l_SR_702; memset(&l_SR_702, 0, sizeof l_SR_702);
l_SR_702 = r_MAX_INT(l_S1_697, l_S2_698);
if ((!(l_SM_700).f_OK))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
return r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_701, l_S1_697), l_S2_698)), l_RND_699), r_INT_TYPE(l_S_701));
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
return r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_701, l_S1_697), l_S2_698)), l_RND_699), r_INT_TYPE(l_S_701));
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
return r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_697), r_NUM(l_S_701), l_RND_699), r_INT_TYPE(l_S_701));
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R7 l_FN_703; memset(&l_FN_703, 0, sizeof l_FN_703);
S_R7(&l_FN_703, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R7(&l_FN_703, r_MK(rt_str("rt_sub", 6)), 0);
}
return r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT3(rt_str("@(@, @)", 7), l_FN_703, r_RESCALE_C((p_A).f_C, l_S1_697, l_SR_702), r_RESCALE_C((p_B).f_C, l_S2_698, l_SR_702)), r_NUM(l_SR_702), r_NUM(l_S_701), l_RND_699), r_INT_TYPE(l_S_701));
}
}
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R18 r_IN_EXPR(R11 * p_E) { 
R18 l_V_704; memset(&l_V_704, 0, sizeof l_V_704);
S_R18(&l_V_704, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
R14 * l_T_705; memset(&l_T_705, 0, sizeof l_T_705);
l_T_705 = r_REAL_TYPE((l_V_704).f_T);
R11 * l_R_706; memset(&l_R_706, 0, sizeof l_R_706);
l_R_706 = ((*(R11 *)rt_nil_check(p_E))).f_B;
R7 l_TMP_707; memset(&l_TMP_707, 0, sizeof l_TMP_707);
S_R7(&l_TMP_707, r_NEW_NAME(rt_str("iv", 2)), 0);
R18 l_LO_708; memset(&l_LO_708, 0, sizeof l_LO_708);
R18 l_HI_709; memset(&l_HI_709, 0, sizeof l_HI_709);
R7 l_LOC_710; memset(&l_LOC_710, 0, sizeof l_LOC_710);
R7 l_HIC_711; memset(&l_HIC_711, 0, sizeof l_HIC_711);
R7 l_LO_OP_712; memset(&l_LO_OP_712, 0, sizeof l_LO_OP_712);
S_R7(&l_LO_OP_712, r_MK(rt_str("<=", 2)), 0);
R7 l_HI_OP_713; memset(&l_HI_OP_713, 0, sizeof l_HI_OP_713);
S_R7(&l_HI_OP_713, r_MK(rt_str("<=", 2)), 0);
S_R18(&l_LO_708, r_EXPR(((*(R11 *)rt_nil_check(l_R_706))).f_A, l_T_705), 0);
S_R18(&l_HI_709, r_EXPR(((*(R11 *)rt_nil_check(l_R_706))).f_B, l_T_705), 0);
if (((((*(R14 *)rt_nil_check(l_T_705))).f_KIND == g_T_ENUM) && ((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_705))).f_BASE))).f_UNORDERED))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R14 *)rt_nil_check(l_T_705))).f_KIND == g_T_INT) || (((*(R14 *)rt_nil_check(l_T_705))).f_KIND == g_T_FLOAT)) || (((*(R14 *)rt_nil_check(l_T_705))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
S_R7(&l_LOC_710, r_CONVERT_TO_SCALE(l_LO_708, l_T_705, ((*(R11 *)rt_nil_check(p_E))).f_LINE), 0);
S_R7(&l_HIC_711, r_CONVERT_TO_SCALE(l_HI_709, l_T_705, ((*(R11 *)rt_nil_check(p_E))).f_LINE), 0);
if (((((*(R11 *)rt_nil_check(l_R_706))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(l_R_706))).f_IV == ((rt_int)3LL))))
{
S_R7(&l_LO_OP_712, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R11 *)rt_nil_check(l_R_706))).f_IV >= ((rt_int)2LL)))
{
S_R7(&l_HI_OP_713, r_MK(rt_str("<", 1)), 0);
}
{
R7 l_P1_714; memset(&l_P1_714, 0, sizeof l_P1_714);
S_R7(&l_P1_714, r_FMT4(rt_str("({ @ @ = @; (@) ", 16), r_CTYPE(l_T_705), l_TMP_707, (l_V_704).f_C, l_LOC_710), 0);
R7 l_P2_715; memset(&l_P2_715, 0, sizeof l_P2_715);
S_R7(&l_P2_715, r_FMT4(rt_str("@@ @ && @ ", 10), l_P1_714, l_LO_OP_712, l_TMP_707, l_TMP_707), 0);
return r_MKET(r_FMT3(rt_str("@@ (@); })", 10), l_P2_715, l_HI_OP_713, l_HIC_711), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
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
return r_RESCALE_C((p_V).f_C, ((*(R14 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R14 *)rt_nil_check(p_T))).f_SCALE);
}
return (p_V).f_C;
rt_raise(RT_X_INIT);
}
static R18 r_INT_ET(rt_int p_V) { 
return r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { 
rt_int l_B_716; memset(&l_B_716, 0, sizeof l_B_716);
l_B_716 = ((rt_int)0LL);
rt_int l_P_717; memset(&l_P_717, 0, sizeof l_P_717);
l_P_717 = ((rt_int)1LL);
for (;;) {
if ((l_P_717 >= p_N)) goto L_end718;
{
l_B_716 = rt_add(l_B_716, ((rt_int)1LL));
l_P_717 = rt_mul(l_P_717, ((rt_int)2LL));
}
} L_end718: ;
return l_B_716;
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R14 * p_T) { 
if ((!(((*(R14 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R12 l_M_719; memset(&l_M_719, 0, sizeof l_M_719);
S_R12(&l_M_719, r_MANIFEST(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_719).f_OK)
{
return (l_M_719).f_V;
}
}
}
}
return r_BITS_FOR(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
rt_raise(RT_X_INIT);
}
static R18 r_ATTRIBUTE(R18 p_B, R7 p_NAME, rt_int p_LINE) { 
R14 * l_T_720; memset(&l_T_720, 0, sizeof l_T_720);
l_T_720 = (p_B).f_T;
rt_int l_K_721; memset(&l_K_721, 0, sizeof l_K_721);
l_K_721 = ((*(R14 *)rt_nil_check(l_T_720))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
return r_SIZE_OF(l_T_720, (p_B).f_C);
}
if ((l_K_721 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
return r_INT_ET(((*(R14 *)rt_nil_check(l_T_720))).f_SCALE);
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
return r_INT_ET(((rt_int)2LL));
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
return r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
return r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R14 *)rt_nil_check(l_T_720))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
return r_MKET(((*(R14 *)rt_nil_check(l_T_720))).f_LO_C, r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_720))).f_SCALE));
}
return r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_720))).f_SCALE));
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R14 *)rt_nil_check(l_T_720))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
return r_MKET(((*(R14 *)rt_nil_check(l_T_720))).f_HI_C, r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_720))).f_SCALE));
}
return r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_720))).f_SCALE));
}
}
else if ((l_K_721 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
return r_INT_ET(((*(R14 *)rt_nil_check(l_T_720))).f_SCALE);
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
return r_INT_ET(((rt_int)15LL));
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
return r_INT_ET(((rt_int)2LL));
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
return r_INT_ET(rt_neg(((rt_int)1022LL)));
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
return r_INT_ET(((rt_int)1023LL));
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
return r_INT_ET(((rt_int)53LL));
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
return r_INT_ET(((rt_int)11LL));
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R14 *)rt_nil_check(l_T_720))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
return r_MKET(((*(R14 *)rt_nil_check(l_T_720))).f_LO_C, l_T_720);
}
return r_MKET(r_MK(rt_str("(-DBL_MAX)", 10)), l_T_720);
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R14 *)rt_nil_check(l_T_720))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
return r_MKET(((*(R14 *)rt_nil_check(l_T_720))).f_HI_C, l_T_720);
}
return r_MKET(r_MK(rt_str("DBL_MAX", 7)), l_T_720);
}
}
else if ((l_K_721 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R14 *)rt_nil_check(l_T_720))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
return r_MKET(((*(R14 *)rt_nil_check(l_T_720))).f_LO_C, ((*(R14 *)rt_nil_check(l_T_720))).f_BASE);
}
return r_MKET(r_MK(rt_str("0", 1)), ((*(R14 *)rt_nil_check(l_T_720))).f_BASE);
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R14 *)rt_nil_check(l_T_720))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
return r_MKET(((*(R14 *)rt_nil_check(l_T_720))).f_HI_C, ((*(R14 *)rt_nil_check(l_T_720))).f_BASE);
}
return r_MKET(r_NUM(rt_sub(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_720))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R14 *)rt_nil_check(l_T_720))).f_BASE);
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R14 *)rt_nil_check(l_T_720))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
return r_MKET(r_FMT2(rt_str("((@) - (@) + 1)", 15), ((*(R14 *)rt_nil_check(l_T_720))).f_HI_C, ((*(R14 *)rt_nil_check(l_T_720))).f_LO_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
return r_INT_ET(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_720))).f_BASE))).f_NLITS);
}
}
else if (((l_K_721 == g_T_STR) || (l_K_721 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
return r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
return r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
}
}
else if ((l_K_721 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
return r_INT_ET(((*(R14 *)rt_nil_check(l_T_720))).f_DIMS);
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R14 *)rt_nil_check(l_T_720))).f_DIMS == ((rt_int)1LL))))
{
return r_MKET(r_FMT1(rt_str("rt_b_extent(1, (@).lo, (@).hi)", 30), (p_B).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
return r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
}
}
else if ((l_K_721 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R14 *)rt_nil_check(l_T_720))).f_SCALE == ((rt_int)1LL)))
{
return r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
}
return r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
}
}
else if (((l_K_721 == g_T_ABS) || (l_K_721 == g_T_REC)))
{
{
R14 * l_U_722; memset(&l_U_722, 0, sizeof l_U_722);
l_U_722 = l_T_720;
if ((l_K_721 == g_T_ABS))
{
l_U_722 = ((*(R14 *)rt_nil_check(l_T_720))).f_BASE;
}
if ((((*(R14 *)rt_nil_check(l_U_722))).f_KIND == g_T_REC))
{
{
R15 * l_F_723; memset(&l_F_723, 0, sizeof l_F_723);
l_F_723 = r_FIND_FIELD(l_U_722, p_NAME);
if ((!(l_F_723 == NULL)))
{
if ((!(((*(R15 *)rt_nil_check(l_F_723))).f_KIND == ((rt_int)0LL))))
{
return r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R15 *)rt_nil_check(l_F_723))).f_CNAME), ((*(R15 *)rt_nil_check(l_F_723))).f_T);
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
R11 * l_N_724; memset(&l_N_724, 0, sizeof l_N_724);
l_N_724 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_N_724))).f_NAME, r_MKN(p_NAME), 0);
return l_N_724;
rt_raise(RT_X_INIT);
}
static R18 r_SIZE_OF(R14 * p_T, R7 p_C) { 
rt_int l_K_725; memset(&l_K_725, 0, sizeof l_K_725);
l_K_725 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_725 == g_T_INT))
{
if ((!(((*(R14 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
return r_MKET((r_EXPR(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R22 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
}
return r_INT_ET(((rt_int)64LL));
}
else if ((l_K_725 == g_T_FLOAT))
{
return r_INT_ET(((rt_int)64LL));
}
else if ((l_K_725 == g_T_BOOL))
{
return r_INT_ET(((rt_int)1LL));
}
else if ((l_K_725 == g_T_ENUM))
{
return r_INT_ET(r_ENUM_SIZE(p_T));
}
else if ((l_K_725 == g_T_BITS))
{
return r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
else if ((l_K_725 == g_T_STR))
{
return r_MKET(r_FMT1(rt_str("(rt_int)((@).len * 8)", 21), p_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
else if (((l_K_725 == g_T_PTR) || (l_K_725 == g_T_SEM)))
{
return r_INT_ET(((rt_int)64LL));
}
else if ((l_K_725 == g_T_ABS))
{
return r_SIZE_OF(((*(R14 *)rt_nil_check(p_T))).f_BASE, p_C);
}
else if ((l_K_725 == g_T_ARR))
{
return r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R14 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R14 *)rt_nil_check(p_T))).f_ELEM)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
return r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
rt_raise(RT_X_INIT);
}
static R18 r_TYPE_ATTRIBUTE(R7 p_TNAME, R7 p_NAME, rt_int p_LINE) { 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{
R14 * l_T_726; memset(&l_T_726, 0, sizeof l_T_726);
l_T_726 = r_RESOLVE_USER_NAME(p_TNAME, p_LINE);
return r_ATTRIBUTE(r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(l_T_726)), l_T_726), p_NAME, p_LINE);
}
rt_raise(RT_X_INIT);
}
static R18 r_ATTRIBUTE_OF_ATTRIBUTE(R7 p_TNAME, R7 p_A, R7 p_B, rt_int p_LINE) { 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
return r_INT_ET(((rt_int)100000000LL));
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
return r_INT_ET(((rt_int)15LL));
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
return r_INT_ET(((rt_int)0LL));
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R18 r_RECORD_CONSTRUCTOR(R11 * p_E, R14 * p_WANT) { 
R14 * l_T_727; memset(&l_T_727, 0, sizeof l_T_727);
l_T_727 = p_WANT;
if ((!(((*(R11 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_727 = r_RESOLVE(((*(R11 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_727 == NULL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_727 = r_REAL_TYPE(l_T_727);
if ((!(((*(R14 *)rt_nil_check(l_T_727))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_727))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R7 l_TMP_728; memset(&l_TMP_728, 0, sizeof l_TMP_728);
S_R7(&l_TMP_728, r_NEW_NAME(rt_str("rc", 2)), 0);
R7 l_R_729; memset(&l_R_729, 0, sizeof l_R_729);
S_R7(&l_R_729, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R14 *)rt_nil_check(l_T_727))).f_CNAME, l_TMP_728, l_TMP_728, l_TMP_728), 0);
R15 * l_F_730; memset(&l_F_730, 0, sizeof l_F_730);
l_F_730 = ((*(R14 *)rt_nil_check(l_T_727))).f_FIELDS;
S_R7(&l_R_729, r_FMT2(rt_str("@@", 2), l_R_729, r_INIT_CODE(l_T_727, l_TMP_728)), 0);
for (;;) {
if ((l_F_730 == NULL)) goto L_end731;
{
if ((((*(R15 *)rt_nil_check(l_F_730))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R15 *)rt_nil_check(l_F_730))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R15 *)rt_nil_check(l_F_730))).f_LABELS, (r_TAG_VALUE(l_T_727, ((*(R15 *)rt_nil_check(l_F_730))).f_TAGF)).f_V, ((*(R15 *)rt_nil_check(r_FIND_FIELD(l_T_727, ((*(R15 *)rt_nil_check(l_F_730))).f_TAGF)))).f_T)))
{
{
R11 * l_INIT_732; memset(&l_INIT_732, 0, sizeof l_INIT_732);
l_INIT_732 = r_FIND_INIT(((*(R11 *)rt_nil_check(p_E))).f_A, ((*(R15 *)rt_nil_check(l_F_730))).f_NAME);
if ((l_INIT_732 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R15 *)rt_nil_check(l_F_730))).f_NAME);
}
S_R7(&l_R_729, r_FMT2(rt_str("@ @", 3), l_R_729, r_STORE_CODE(((*(R15 *)rt_nil_check(l_F_730))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_728, ((*(R15 *)rt_nil_check(l_F_730))).f_CNAME), r_EXPR(((*(R11 *)rt_nil_check(l_INIT_732))).f_A, ((*(R15 *)rt_nil_check(l_F_730))).f_T), ((*(R11 *)rt_nil_check(l_INIT_732))).f_LINE, l_TMP_728)), 0);
}
}
}
l_F_730 = ((*(R15 *)rt_nil_check(l_F_730))).f_NEXT;
}
} L_end731: ;
{
R11 * l_P_733; memset(&l_P_733, 0, sizeof l_P_733);
l_P_733 = ((*(R11 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_733 == NULL)) goto L_end734;
{
{
R15 * l_G_735; memset(&l_G_735, 0, sizeof l_G_735);
l_G_735 = r_FIND_FIELD(l_T_727, ((*(R11 *)rt_nil_check(l_P_733))).f_NAME);
if ((l_G_735 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(l_P_733))).f_LINE, rt_str("no such field: ", 15), ((*(R11 *)rt_nil_check(l_P_733))).f_NAME);
}
if ((!(((*(R15 *)rt_nil_check(l_G_735))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R11 *)rt_nil_check(l_P_733))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R11 *)rt_nil_check(l_P_733))).f_NAME);
}
r_CHECK_VARIANT(l_G_735, l_T_727, NULL, ((*(R11 *)rt_nil_check(l_P_733))).f_LINE);
}
l_P_733 = ((*(R11 *)rt_nil_check(l_P_733))).f_NEXT;
}
} L_end734: ;
}
return r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_729, l_TMP_728), l_T_727);
}
rt_raise(RT_X_INIT);
}
static R11 * r_FIND_INIT(R11 * p_L, R7 p_NAME) { 
R11 * l_P_736; memset(&l_P_736, 0, sizeof l_P_736);
l_P_736 = p_L;
for (;;) {
if ((l_P_736 == NULL)) goto L_end737;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_P_736))).f_NAME, p_NAME))
{
return l_P_736;
}
l_P_736 = ((*(R11 *)rt_nil_check(l_P_736))).f_NEXT;
}
} L_end737: ;
return NULL;
rt_raise(RT_X_INIT);
}
static R18 r_ARRAY_CONSTRUCTOR(R11 * p_E, R14 * p_WANT) { 
rt_int l_DIMS_738; memset(&l_DIMS_738, 0, sizeof l_DIMS_738);
l_DIMS_738 = ((rt_int)0LL);
R11 * l_P_739; memset(&l_P_739, 0, sizeof l_P_739);
l_P_739 = p_E;
R14 * l_ELEM_740; memset(&l_ELEM_740, 0, sizeof l_ELEM_740);
l_ELEM_740 = NULL;
for (;;) {
if ((!(((*(R11 *)rt_nil_check(l_P_739))).f_KIND == g_N_ARRCONS))) goto L_end741;
{
l_DIMS_738 = rt_add(l_DIMS_738, ((rt_int)1LL));
l_P_739 = ((*(R11 *)rt_nil_check(l_P_739))).f_A;
}
} L_end741: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R14 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_740 = ((*(R14 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_740 == NULL))
{
l_ELEM_740 = (r_EXPR(l_P_739, NULL)).f_T;
if (((((*(R14 *)rt_nil_check(l_ELEM_740))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_ELEM_740))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_740 = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
}
}
{
R14 * l_A_742; memset(&l_A_742, 0, sizeof l_A_742);
l_A_742 = r_ARRAY_OF(l_ELEM_740, l_DIMS_738);
R7 l_TMP_743; memset(&l_TMP_743, 0, sizeof l_TMP_743);
S_R7(&l_TMP_743, r_NEW_NAME(rt_str("ac", 2)), 0);
R7 l_R_744; memset(&l_R_744, 0, sizeof l_R_744);
S_R7(&l_R_744, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R14 *)rt_nil_check(l_A_742))).f_CNAME, l_TMP_743, l_TMP_743), 0);
rt_int l_K_745; memset(&l_K_745, 0, sizeof l_K_745);
l_K_745 = ((rt_int)0LL);
S_R7(&l_R_744, r_FMT2(rt_str("@@); ", 5), l_R_744, l_TMP_743), 0);
l_P_739 = p_E;
{ rt_int it747_lo = ((rt_int)0LL), it747_hi = rt_sub(l_DIMS_738, ((rt_int)1LL));
for (rt_int it747 = it747_lo; it747 <= it747_hi; it747++) {
{
S_R7(&l_R_744, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_744, l_TMP_743, r_NUM(it747), l_TMP_743), 0);
S_R7(&l_R_744, r_FMT3(rt_str("@@] = @;", 8), l_R_744, r_NUM(it747), r_NUM(rt_sub(r_LIST_LENGTH(((*(R11 *)rt_nil_check(l_P_739))).f_A), ((rt_int)1LL)))), 0);
l_P_739 = ((*(R11 *)rt_nil_check(l_P_739))).f_A;
}
} } L_end746: ;
S_R7(&l_R_744, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_744, l_TMP_743, l_TMP_743, r_NUM(l_DIMS_738)), 0);
S_R7(&l_R_744, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_744, l_TMP_743, l_TMP_743), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_738, l_A_742, l_TMP_743, &l_R_744, &l_K_745);
return r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_744, l_TMP_743), l_A_742);
}
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R11 * p_E, rt_int p_DIMS, R14 * p_A, R7 p_TMP, R7 *p_R, rt_int *p_K) { 
R11 * l_P_748; memset(&l_P_748, 0, sizeof l_P_748);
l_P_748 = ((*(R11 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_748 == NULL)) goto L_end749;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_748, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R11 *)rt_nil_check(l_P_748))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R11 *)rt_nil_check(l_P_748))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R14 *)rt_nil_check(p_A))).f_ELEM))
{
S_R7(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R14 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R7(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R14 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_748, ((*(R14 *)rt_nil_check(p_A))).f_ELEM), ((*(R11 *)rt_nil_check(l_P_748))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_748 = ((*(R11 *)rt_nil_check(l_P_748))).f_NEXT;
}
} L_end749: ;
}
static R14 * r_ARRAY_OF(R14 * p_ELEM, rt_int p_DIMS) { 
R14 * l_T_750; memset(&l_T_750, 0, sizeof l_T_750);
l_T_750 = r_NEW_TYP(g_T_ARR);
((*(R14 *)rt_nil_check(l_T_750))).f_ELEM = p_ELEM;
((*(R14 *)rt_nil_check(l_T_750))).f_DIMS = p_DIMS;
S_R7(&((*(R14 *)rt_nil_check(l_T_750))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
return l_T_750;
rt_raise(RT_X_INIT);
}
static R18 r_TYPE_SPECIFIER(R11 * p_E) { 
R14 * l_T_751; memset(&l_T_751, 0, sizeof l_T_751);
l_T_751 = r_RESOLVE(((*(R11 *)rt_nil_check(p_E))).f_A);
R18 l_V_752; memset(&l_V_752, 0, sizeof l_V_752);
S_R18(&l_V_752, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B, l_T_751), 0);
R14 * l_RT_753; memset(&l_RT_753, 0, sizeof l_RT_753);
l_RT_753 = r_REAL_TYPE(l_T_751);
if (((((*(R14 *)rt_nil_check((l_V_752).f_T))).f_KIND == g_T_BITS) && (!(((*(R14 *)rt_nil_check(l_RT_753))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R11 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R14 *)rt_nil_check(l_RT_753))).f_KIND == g_T_INT))
{
return r_MKET(r_RANGE_CHECK(l_RT_753, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_752).f_C), r_NO_TEXT()), l_T_751);
}
else if ((((*(R14 *)rt_nil_check(l_RT_753))).f_KIND == g_T_BOOL))
{
return r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_752).f_C), l_T_751);
}
else if ((((*(R14 *)rt_nil_check(l_RT_753))).f_KIND == g_T_ENUM))
{
return r_MKET(r_ENUM_OF_BITS(l_RT_753, (l_V_752).f_C), l_T_751);
}
else if ((((*(R14 *)rt_nil_check(l_RT_753))).f_KIND == g_T_FLOAT))
{
return r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_752).f_C), l_T_751);
}
else if ((((*(R14 *)rt_nil_check(l_RT_753))).f_KIND == g_T_STR))
{
return r_MKET(r_FMT1(rt_str("rt_b_str_of_bits(@)", 19), (l_V_752).f_C), l_T_751);
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
return r_MKET(r_CONVERT(l_V_752, l_T_751, ((*(R11 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), l_T_751);
rt_raise(RT_X_INIT);
}
static R7 r_ENUM_OF_BITS(R14 * p_T, R7 p_C) { 
if ((!(((*(R14 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
return r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
}
}
return r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
rt_raise(RT_X_INIT);
}
static R7 r_REP_TABLE(R14 * p_T) { 
R7 l_NAME_754; memset(&l_NAME_754, 0, sizeof l_NAME_754);
S_R7(&l_NAME_754, r_NEW_NAME(rt_str("reps", 4)), 0);
R11 * l_L_755; memset(&l_L_755, 0, sizeof l_L_755);
l_L_755 = ((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R7 l_R_756; memset(&l_R_756, 0, sizeof l_R_756);
S_R7(&l_R_756, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_755 == NULL)) goto L_end757;
{
{
R11 * l_V_758; memset(&l_V_758, 0, sizeof l_V_758);
l_V_758 = ((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_759; memset(&l_FOUND_759, 0, sizeof l_FOUND_759);
l_FOUND_759 = 0;
for (;;) {
if ((l_V_758 == NULL)) goto L_end760;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_V_758))).f_NAME, ((*(R11 *)rt_nil_check(l_L_755))).f_NAME))
{
S_R7(&l_R_756, r_FMT2(rt_str("@@, ", 4), l_R_756, (r_EXPR(((*(R11 *)rt_nil_check(l_V_758))).f_A, NULL)).f_C), 0);
l_FOUND_759 = 1;
}
l_V_758 = ((*(R11 *)rt_nil_check(l_V_758))).f_NEXT;
}
} L_end760: ;
if ((!l_FOUND_759))
{
r_FAILT(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R11 *)rt_nil_check(l_L_755))).f_NAME);
}
}
l_L_755 = ((*(R11 *)rt_nil_check(l_L_755))).f_NEXT;
}
} L_end757: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_754, r_NUM(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_756, l_NAME_754, l_NAME_754));
return r_FMT2(rt_str("@, @", 4), l_NAME_754, r_NUM(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
rt_raise(RT_X_INIT);
}
static R18 r_NEW_EXPR(R11 * p_E, R14 * p_WANT) { 
rt_int l_SEM_761; memset(&l_SEM_761, 0, sizeof l_SEM_761);
l_SEM_761 = r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_761 = (((*(R14 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_761)
{
{
R14 * l_T_762; memset(&l_T_762, 0, sizeof l_T_762);
l_T_762 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R14 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_762 = p_WANT;
}
}
return r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R14 *)rt_nil_check(l_T_762))).f_SCALE)), l_T_762);
}
}
{
R14 * l_T_763; memset(&l_T_763, 0, sizeof l_T_763);
l_T_763 = r_RESOLVE(r_EXPR_TO_TS(((*(R11 *)rt_nil_check(p_E))).f_A));
R14 * l_P_764; memset(&l_P_764, 0, sizeof l_P_764);
l_P_764 = r_NEW_TYP(g_T_PTR);
((*(R14 *)rt_nil_check(l_P_764))).f_TARGET = l_T_763;
((*(R14 *)rt_nil_check(l_P_764))).f_TARGET_TS = ((*(R11 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_763))
{
return r_MKET(r_FMT2(rt_str("({ @ *p = rt_alloc(sizeof *p); @ p; })", 38), r_CTYPE(l_T_763), r_INIT_CODE(l_T_763, r_MK(rt_str("(*p)", 4)))), l_P_764);
}
return r_MKET(r_FMT2(rt_str("((@ *)rt_alloc(sizeof (@)))", 27), r_CTYPE(l_T_763), r_CTYPE(l_T_763)), l_P_764);
}
rt_raise(RT_X_INIT);
}
static R11 * r_NTH(R11 * p_L, rt_int p_K) { 
R11 * l_P_765; memset(&l_P_765, 0, sizeof l_P_765);
l_P_765 = p_L;
{ rt_int it767_lo = ((rt_int)1LL), it767_hi = p_K;
for (rt_int it767 = it767_lo; it767 <= it767_hi; it767++) {
{
if ((!(l_P_765 == NULL)))
{
l_P_765 = ((*(R11 *)rt_nil_check(l_P_765))).f_NEXT;
}
}
} } L_end766: ;
return l_P_765;
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R11 * p_E, rt_int p_LO, rt_int p_HI) { 
rt_int l_N_768; memset(&l_N_768, 0, sizeof l_N_768);
l_N_768 = r_LIST_LENGTH(((*(R11 *)rt_nil_check(p_E))).f_A);
if (((l_N_768 < p_LO) || (l_N_768 > p_HI)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R11 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R11 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
}
static R7 r_ROUNDING_ARG(R11 * p_E, rt_int p_N) { 
R11 * l_L_769; memset(&l_L_769, 0, sizeof l_L_769);
l_L_769 = r_NTH(((*(R11 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_769 == NULL)))
{
if (((((*(R11 *)rt_nil_check(l_L_769))).f_KIND == g_N_QUAL) && ((((*(R11 *)rt_nil_check(l_L_769))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R11 *)rt_nil_check(l_L_769))).f_NAME, rt_str("ROUNDED", 7)))
{
return r_MK(rt_str("1", 1));
}
return r_MK(rt_str("0", 1));
}
if (((((*(R11 *)rt_nil_check(l_L_769))).f_KIND == g_N_NAME) || (((*(R11 *)rt_nil_check(l_L_769))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R11 *)rt_nil_check(l_L_769))).f_NAME, rt_str("ROUNDED", 7)))
{
return r_MK(rt_str("1", 1));
}
else if (r_TEQS(((*(R11 *)rt_nil_check(l_L_769))).f_NAME, rt_str("TRUNCATED", 9)))
{
return r_MK(rt_str("0", 1));
}
}
}
if (((*(R22 *)rt_nil_check(g_W))).f_ROUNDED)
{
return r_MK(rt_str("1", 1));
}
return r_MK(rt_str("0", 1));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R11 * p_E) { 
if ((p_E == NULL))
{
return 0;
}
if (((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
return (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
}
return 0;
rt_raise(RT_X_INIT);
}
static R11 * r_ARG_EXPR(R11 * p_E) { 
if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
return ((*(R11 *)rt_nil_check(p_E))).f_A;
}
return p_E;
rt_raise(RT_X_INIT);
}
static R18 r_BUILTIN(R11 * p_E, R14 * p_WANT) { 
R7 l_NAME_770; memset(&l_NAME_770, 0, sizeof l_NAME_770);
S_R7(&l_NAME_770, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_771; memset(&l_LINE_771, 0, sizeof l_LINE_771);
l_LINE_771 = ((*(R11 *)rt_nil_check(p_E))).f_LINE;
if ((r_TEQS(l_NAME_770, rt_str("PUT", 3)) || r_TEQS(l_NAME_770, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R18 l_V_772; memset(&l_V_772, 0, sizeof l_V_772);
S_R18(&l_V_772, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_772).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_771, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
if (r_TEQS(l_NAME_770, rt_str("PUT", 3)))
{
return r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_772).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
}
return r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_772).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
}
}
else if (r_TEQS(l_NAME_770, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
return r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
}
else if (r_TEQS(l_NAME_770, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
return r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
else if (r_TEQS(l_NAME_770, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
return r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
}
else if (r_TEQS(l_NAME_770, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
return r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
}
else if (r_TEQS(l_NAME_770, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
return r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A)), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
}
if (r_TEQS(l_NAME_770, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
return r_IMAGE_OF(r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_771);
}
else if (r_TEQS(l_NAME_770, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
return r_TO_FIXED_CALL(p_E);
}
else if (r_TEQS(l_NAME_770, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R18 l_V_773; memset(&l_V_773, 0, sizeof l_V_773);
S_R18(&l_V_773, r_EXPR(r_ARG_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A), NULL), 0);
R12 l_P_774; memset(&l_P_774, 0, sizeof l_P_774);
S_R12(&l_P_774, r_MANIFEST(r_ARG_EXPR(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NEXT)), 0);
R14 * l_VT_775; memset(&l_VT_775, 0, sizeof l_VT_775);
l_VT_775 = r_REAL_TYPE((l_V_773).f_T);
R14 * l_T_776; memset(&l_T_776, 0, sizeof l_T_776);
l_T_776 = r_NEW_TYP(g_T_FLOAT);
if ((!(l_P_774).f_OK))
{
r_FAIL(l_LINE_771, rt_str("the precision of TO_FLOAT must be manifest (3.3.6.1)", 52));
}
if ((((l_P_774).f_V < ((rt_int)1LL)) || ((l_P_774).f_V > ((rt_int)15LL))))
{
r_FAIL(l_LINE_771, rt_str("precisions from 1 to 15 are implemented (3.3.1)", 47));
}
((*(R14 *)rt_nil_check(l_T_776))).f_SCALE = (l_P_774).f_V;
if ((((*(R14 *)rt_nil_check(l_VT_775))).f_KIND == g_T_INT))
{
return r_MKET(r_FMT2(rt_str("rt_b_float_of_fix(@, @)", 23), (l_V_773).f_C, r_NUM(((*(R14 *)rt_nil_check(l_VT_775))).f_SCALE)), l_T_776);
}
else if ((((*(R14 *)rt_nil_check(l_VT_775))).f_KIND == g_T_FLOAT))
{
return r_MKET((l_V_773).f_C, l_T_776);
}
else if ((((*(R14 *)rt_nil_check(l_VT_775))).f_KIND == g_T_STR))
{
return r_MKET(r_FMT1(rt_str("rt_b_float_of_str(@)", 20), (l_V_773).f_C), l_T_776);
}
r_FAIL(l_LINE_771, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_770, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
return r_BITS_OF(r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_771);
}
else if (r_TEQS(l_NAME_770, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R18 l_V_777; memset(&l_V_777, 0, sizeof l_V_777);
S_R18(&l_V_777, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_777).f_T)))).f_KIND == g_T_INT))
{
return r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_777).f_C), r_INT_TYPE(((*(R14 *)rt_nil_check((l_V_777).f_T))).f_SCALE));
}
else if ((((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_777).f_T)))).f_KIND == g_T_FLOAT))
{
return r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_777).f_C), (l_V_777).f_T);
}
r_FAIL(l_LINE_771, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_770, rt_str("SUCC", 4)) || r_TEQS(l_NAME_770, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R18 l_V_778; memset(&l_V_778, 0, sizeof l_V_778);
S_R18(&l_V_778, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
R14 * l_T_779; memset(&l_T_779, 0, sizeof l_T_779);
l_T_779 = r_REAL_TYPE((l_V_778).f_T);
if ((!(((*(R14 *)rt_nil_check(l_T_779))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_771, rt_str("an enumerated value expected by ", 32), l_NAME_770);
}
if (((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_779))).f_BASE))).f_UNORDERED)
{
r_FAILT(l_LINE_771, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_770);
}
if (r_TEQS(l_NAME_770, rt_str("SUCC", 4)))
{
return r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_778).f_C, r_NUM(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_779))).f_BASE))).f_NLITS)), ((*(R14 *)rt_nil_check(l_T_779))).f_BASE);
}
return r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_778).f_C), ((*(R14 *)rt_nil_check(l_T_779))).f_BASE);
}
}
else if (r_TEQS(l_NAME_770, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R18 l_V_780; memset(&l_V_780, 0, sizeof l_V_780);
S_R18(&l_V_780, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_781; memset(&l_K_781, 0, sizeof l_K_781);
l_K_781 = ((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_780).f_T)))).f_KIND;
R14 * l_T_782; memset(&l_T_782, 0, sizeof l_T_782);
l_T_782 = r_NEW_TYP(l_K_781);
if (((!(l_K_781 == g_T_STR)) && (!(l_K_781 == g_T_BITS))))
{
r_FAIL(l_LINE_771, rt_str("DUP of something not a string", 29));
}
((*(R14 *)rt_nil_check(l_T_782))).f_BASE = ((*(R14 *)rt_nil_check((l_V_780).f_T))).f_BASE;
return r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_780).f_C, r_INT_EXPR(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_782);
}
}
else if (r_TEQS(l_NAME_770, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
return r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
}
else if (r_TEQS(l_NAME_770, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
return r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
}
else if (((r_TEQS(l_NAME_770, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_770, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_770, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R7 l_BITS_783; memset(&l_BITS_783, 0, sizeof l_BITS_783);
S_R7(&l_BITS_783, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_770, rt_str("OCT_OF", 6)))
{
S_R7(&l_BITS_783, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_770, rt_str("HEX_OF", 6)))
{
S_R7(&l_BITS_783, r_MK(rt_str("4", 1)), 0);
}
return r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL)).f_C, l_BITS_783), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
}
}
else if ((r_TEQS(l_NAME_770, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_770, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R12 l_S_784; memset(&l_S_784, 0, sizeof l_S_784);
S_R12(&l_S_784, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
if ((!(l_S_784).f_OK))
{
r_FAIL(l_LINE_771, rt_str("the scale must be manifest", 26));
}
if (r_TEQS(l_NAME_770, rt_str("FIXED_MIN", 9)))
{
return r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE((l_S_784).f_V));
}
return r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE((l_S_784).f_V));
}
}
else if (((r_TEQS(l_NAME_770, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_770, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_770, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R14 * l_T_785; memset(&l_T_785, 0, sizeof l_T_785);
l_T_785 = r_NEW_TYP(g_T_FLOAT);
R12 l_P_786; memset(&l_P_786, 0, sizeof l_P_786);
S_R12(&l_P_786, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
if ((!(l_P_786).f_OK))
{
r_FAIL(l_LINE_771, rt_str("the precision must be manifest", 30));
}
((*(R14 *)rt_nil_check(l_T_785))).f_SCALE = (l_P_786).f_V;
if (r_TEQS(l_NAME_770, rt_str("FLOAT_MIN", 9)))
{
return r_MKET(r_MK(rt_str("(-DBL_MAX)", 10)), l_T_785);
}
else if (r_TEQS(l_NAME_770, rt_str("FLOAT_MAX", 9)))
{
return r_MKET(r_MK(rt_str("DBL_MAX", 7)), l_T_785);
}
return r_MKET(r_MK(rt_str("DBL_EPSILON", 11)), l_T_785);
}
}
else if (r_TEQS(l_NAME_770, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
return r_INT_ET(((rt_int)15LL));
}
else if (r_TEQS(l_NAME_770, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
return r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
}
else if (r_TEQS(l_NAME_770, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
return r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
}
return r_PARALLEL_BUILTIN(p_E, p_WANT);
rt_raise(RT_X_INIT);
}
static R18 r_IMAGE_OF(R18 p_V, rt_int p_LINE) { 
R14 * l_T_787; memset(&l_T_787, 0, sizeof l_T_787);
l_T_787 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_788; memset(&l_K_788, 0, sizeof l_K_788);
l_K_788 = ((*(R14 *)rt_nil_check(l_T_787))).f_KIND;
R14 * l_S_789; memset(&l_S_789, 0, sizeof l_S_789);
l_S_789 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_788 == g_T_INT))
{
if ((((*(R14 *)rt_nil_check(l_T_787))).f_SCALE == ((rt_int)0LL)))
{
return r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_789);
}
return r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R14 *)rt_nil_check(l_T_787))).f_SCALE)), l_S_789);
}
else if ((l_K_788 == g_T_FLOAT))
{
return r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R14 *)rt_nil_check(l_T_787))).f_SCALE)), l_S_789);
}
else if ((l_K_788 == g_T_BOOL))
{
return r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_789);
}
else if ((l_K_788 == g_T_ENUM))
{
if ((((*(R14 *)rt_nil_check(l_T_787))).f_BASE == ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII))
{
return r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_789);
}
return r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_787))).f_BASE))).f_CNAME, (p_V).f_C), l_S_789);
}
else if (((l_K_788 == g_T_STR) || (l_K_788 == g_T_BITS)))
{
return r_MKET((p_V).f_C, l_S_789);
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_787));
rt_raise(RT_X_INIT);
}
static R18 r_TO_FIXED_CALL(R11 * p_E) { 
R18 l_V_790; memset(&l_V_790, 0, sizeof l_V_790);
S_R18(&l_V_790, r_EXPR(r_ARG_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A), NULL), 0);
R14 * l_T_791; memset(&l_T_791, 0, sizeof l_T_791);
l_T_791 = r_REAL_TYPE((l_V_790).f_T);
rt_int l_N_792; memset(&l_N_792, 0, sizeof l_N_792);
l_N_792 = r_LIST_LENGTH(((*(R11 *)rt_nil_check(p_E))).f_A);
R7 l_RND_793; memset(&l_RND_793, 0, sizeof l_RND_793);
S_R7(&l_RND_793, r_ROUNDING_ARG(p_E, l_N_792), 0);
rt_int l_S_794; memset(&l_S_794, 0, sizeof l_S_794);
l_S_794 = ((rt_int)0LL);
if (((l_N_792 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R11 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
{
R12 l_SM_795; memset(&l_SM_795, 0, sizeof l_SM_795);
S_R12(&l_SM_795, r_MANIFEST(r_ARG_EXPR(r_NTH(((*(R11 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)))), 0);
if ((!(l_SM_795).f_OK))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of TO_FIXED must be manifest (3.2.1)", 46));
}
l_S_794 = (l_SM_795).f_V;
}
}
if ((l_N_792 >= ((rt_int)3LL)))
{
{
R11 * l_R_796; memset(&l_R_796, 0, sizeof l_R_796);
l_R_796 = r_ARG_EXPR(r_NTH(((*(R11 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)));
if (((!r_IS_ROUNDING(l_R_796)) && (!r_TEQS(((*(R11 *)rt_nil_check(l_R_796))).f_NAME, rt_str("STD", 3)))))
{
if ((!((r_MANIFEST(l_R_796)).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 and STD precision are predefined (3.2.6.1)", 55));
}
}
}
}
if ((((*(R14 *)rt_nil_check(l_T_791))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_797; memset(&l_SAVED_797, 0, sizeof l_SAVED_797);
l_SAVED_797 = ((*(R22 *)rt_nil_check(g_W))).f_ROUNDED;
R7 l_C_798; memset(&l_C_798, 0, sizeof l_C_798);
((*(R22 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_793, rt_str("1", 1));
S_R7(&l_C_798, r_RESCALE_C((l_V_790).f_C, ((*(R14 *)rt_nil_check(l_T_791))).f_SCALE, l_S_794), 0);
((*(R22 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_797;
return r_MKET(l_C_798, r_INT_TYPE(l_S_794));
}
}
else if ((((*(R14 *)rt_nil_check(l_T_791))).f_KIND == g_T_FLOAT))
{
return r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_790).f_C, r_NUM(l_S_794), l_RND_793), r_INT_TYPE(l_S_794));
}
else if (((((*(R14 *)rt_nil_check(l_T_791))).f_KIND == g_T_ENUM) || (((*(R14 *)rt_nil_check(l_T_791))).f_KIND == g_T_BOOL)))
{
if ((((*(R14 *)rt_nil_check(l_T_791))).f_KIND == g_T_ENUM))
{
if (((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_791))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R14 *)rt_nil_check(l_T_791))).f_REPS == NULL)))
{
if ((!(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_791))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
return r_MKET(r_RESCALE_C((l_V_790).f_C, ((rt_int)0LL), l_S_794), r_INT_TYPE(l_S_794));
}
else if ((((*(R14 *)rt_nil_check(l_T_791))).f_KIND == g_T_BITS))
{
return r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_790).f_C), ((rt_int)0LL), l_S_794), r_INT_TYPE(l_S_794));
}
else if ((((*(R14 *)rt_nil_check(l_T_791))).f_KIND == g_T_STR))
{
return r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_790).f_C, r_NUM(l_S_794), l_RND_793), r_INT_TYPE(l_S_794));
}
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_790).f_T));
rt_raise(RT_X_INIT);
}
static R18 r_BITS_OF(R18 p_V, rt_int p_LINE) { 
R14 * l_T_799; memset(&l_T_799, 0, sizeof l_T_799);
l_T_799 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_800; memset(&l_K_800, 0, sizeof l_K_800);
l_K_800 = ((*(R14 *)rt_nil_check(l_T_799))).f_KIND;
if ((l_K_800 == g_T_BITS))
{
return p_V;
}
else if ((l_K_800 == g_T_ENUM))
{
if ((!(((*(R14 *)rt_nil_check(l_T_799))).f_REPS == NULL)))
{
if ((!(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_799))).f_REPS))).f_B == NULL)))
{
return r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_799)), r_BITS_TYPE(r_ENUM_SIZE(l_T_799)));
}
}
return r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_799))), r_BITS_TYPE(r_ENUM_SIZE(l_T_799)));
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_800 == g_T_INT))
{
return r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 64)", 23), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
}
else if ((l_K_800 == g_T_BOOL))
{
return r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
}
else if ((l_K_800 == g_T_FLOAT))
{
return r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
}
else if ((l_K_800 == g_T_STR))
{
return r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_799));
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
return 0;
}
return ((r_IS_LITERALISH(((*(R19 *)rt_nil_check(p_A))).f_E) || (((*(R11 *)rt_nil_check(((*(R19 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R11 *)rt_nil_check(((*(R19 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R19 * p_A) { 
rt_int l_N_801; memset(&l_N_801, 0, sizeof l_N_801);
l_N_801 = ((rt_int)0LL);
R19 * l_P_802; memset(&l_P_802, 0, sizeof l_P_802);
l_P_802 = p_A;
for (;;) {
if ((l_P_802 == NULL)) goto L_end803;
{
l_N_801 = rt_add(l_N_801, ((rt_int)1LL));
l_P_802 = ((*(R19 *)rt_nil_check(l_P_802))).f_NEXT;
}
} L_end803: ;
return l_N_801;
rt_raise(RT_X_INIT);
}
static R19 * r_CALL_ARGS(R11 * p_E) { 
R19 * l_HEAD_804; memset(&l_HEAD_804, 0, sizeof l_HEAD_804);
l_HEAD_804 = NULL;
R19 * l_TAIL_805; memset(&l_TAIL_805, 0, sizeof l_TAIL_805);
l_TAIL_805 = NULL;
rt_int l_G_806; memset(&l_G_806, 0, sizeof l_G_806);
l_G_806 = ((rt_int)0LL);
{ rt_int it808_lo = ((rt_int)0LL), it808_hi = ((rt_int)2LL);
for (rt_int it808 = it808_lo; it808 <= it808_hi; it808++) {
{
{
R11 * l_P_809; memset(&l_P_809, 0, sizeof l_P_809);
l_P_809 = ((*(R11 *)rt_nil_check(p_E))).f_A;
if ((it808 == ((rt_int)1LL)))
{
l_P_809 = ((*(R11 *)rt_nil_check(p_E))).f_B;
}
else if ((it808 == ((rt_int)2LL)))
{
l_P_809 = ((*(R11 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_809 == NULL)) goto L_end810;
{
{
R19 * l_A_811; memset(&l_A_811, 0, sizeof l_A_811);
l_A_811 = r_NODE_ARG(l_P_809, it808, NULL);
if ((l_TAIL_805 == NULL))
{
l_HEAD_804 = l_A_811;
}
else
{
((*(R19 *)rt_nil_check(l_TAIL_805))).f_NEXT = l_A_811;
}
l_TAIL_805 = l_A_811;
}
l_P_809 = ((*(R11 *)rt_nil_check(l_P_809))).f_NEXT;
}
} L_end810: ;
}
}
} } L_end807: ;
return l_HEAD_804;
rt_raise(RT_X_INIT);
}
static R18 r_CALL_EXPR(R11 * p_E, R14 * p_WANT) { 
R19 * l_ARGS_812; memset(&l_ARGS_812, 0, sizeof l_ARGS_812);
l_ARGS_812 = r_CALL_ARGS(p_E);
R13 * l_Y_813; memset(&l_Y_813, 0, sizeof l_Y_813);
l_Y_813 = r_BOUND_ROUTINE(((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_813 == NULL)))
{
if ((((*(R13 *)rt_nil_check(l_Y_813))).f_KIND == g_Y_BUILTIN))
{
return r_BUILTIN(p_E, p_WANT);
}
return r_CALL_SYM(l_Y_813, l_ARGS_812, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
}
l_Y_813 = r_FIND_ROUTINE(((*(R11 *)rt_nil_check(p_E))).f_NAME, l_ARGS_812, ((*(R11 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_813 == NULL))
{
{
R13 * l_B_814; memset(&l_B_814, 0, sizeof l_B_814);
l_B_814 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_814 == NULL)))
{
if ((((*(R13 *)rt_nil_check(l_B_814))).f_KIND == g_Y_BUILTIN))
{
return r_BUILTIN(p_E, p_WANT);
}
if (((((*(R13 *)rt_nil_check(l_B_814))).f_KIND == g_Y_ROUTINE) || (!(((*(R13 *)rt_nil_check(l_B_814))).f_ORIG == NULL))))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
}
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
return r_CALL_SYM(l_Y_813, l_ARGS_812, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
rt_raise(RT_X_INIT);
}
static R13 * r_BOUND_ROUTINE(R7 p_NAME) { 
R16 * l_B_815; memset(&l_B_815, 0, sizeof l_B_815);
l_B_815 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_815 == NULL)) goto L_end816;
{
if (((!(((*(R16 *)rt_nil_check(l_B_815))).f_R == NULL)) && r_TEQ(((*(R16 *)rt_nil_check(l_B_815))).f_NAME, p_NAME)))
{
return ((*(R16 *)rt_nil_check(l_B_815))).f_R;
}
l_B_815 = ((*(R16 *)rt_nil_check(l_B_815))).f_NEXT;
}
} L_end816: ;
return NULL;
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R13 * p_Y, R7 p_NAME) { 
if ((!(((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
return 0;
}
if ((((!(((*(R13 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R13 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R13 *)rt_nil_check(p_Y))).f_NAME, ((*(R13 *)rt_nil_check(((*(R13 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R13 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R13 *)rt_nil_check(p_Y))).f_MODL))
{
return 0;
}
}
}
return 1;
rt_raise(RT_X_INIT);
}
static R13 * r_FIND_ROUTINE(R7 p_NAME, R19 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { 
R13 * l_Y_817; memset(&l_Y_817, 0, sizeof l_Y_817);
l_Y_817 = r_LOOKUP(p_NAME);
R13 * l_BEST_818; memset(&l_BEST_818, 0, sizeof l_BEST_818);
l_BEST_818 = NULL;
rt_int l_BEST_SCORE_819; memset(&l_BEST_SCORE_819, 0, sizeof l_BEST_SCORE_819);
l_BEST_SCORE_819 = ((rt_int)0LL);
rt_int l_TIES_820; memset(&l_TIES_820, 0, sizeof l_TIES_820);
l_TIES_820 = ((rt_int)0LL);
rt_int l_COUNT_821; memset(&l_COUNT_821, 0, sizeof l_COUNT_821);
l_COUNT_821 = ((rt_int)0LL);
rt_int l_N_822; memset(&l_N_822, 0, sizeof l_N_822);
l_N_822 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_817 == NULL)) goto L_end823;
{
if ((!r_IS_ROUTINE(l_Y_817)))
{
if ((!(((*(R13 *)rt_nil_check(l_Y_817))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end823;
}
}
else if (r_CANDIDATE(l_Y_817, p_NAME))
{
{
R13 * l_R_824; memset(&l_R_824, 0, sizeof l_R_824);
l_R_824 = r_ORIGINAL(l_Y_817);
rt_int l_SCORE_825; memset(&l_SCORE_825, 0, sizeof l_SCORE_825);
r_ROUTINE_HEADER(l_R_824);
if (((r_PARAM_COUNT(l_R_824) == l_N_822) && (!r_SEEN_ROUTINE(l_R_824, p_NAME, l_Y_817))))
{
l_COUNT_821 = rt_add(l_COUNT_821, ((rt_int)1LL));
l_SCORE_825 = r_MATCH_SCORE(l_R_824, p_ARGS);
if ((l_SCORE_825 > l_BEST_SCORE_819))
{
l_BEST_818 = l_R_824;
l_BEST_SCORE_819 = l_SCORE_825;
l_TIES_820 = ((rt_int)0LL);
}
else if (((l_SCORE_825 == l_BEST_SCORE_819) && (l_SCORE_825 > ((rt_int)0LL))))
{
l_TIES_820 = rt_add(l_TIES_820, ((rt_int)1LL));
}
}
}
}
l_Y_817 = r_LOOKUP_NEXT(l_Y_817);
}
} L_end823: ;
if (((l_TIES_820 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
return l_BEST_818;
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R13 * p_R, R7 p_NAME, R13 * p_STOP) { 
R13 * l_Y_826; memset(&l_Y_826, 0, sizeof l_Y_826);
l_Y_826 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_826 == p_STOP) || (l_Y_826 == NULL))) goto L_end827;
{
if ((((*(R13 *)rt_nil_check(l_Y_826))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_826) == p_R))
{
return 1;
}
}
l_Y_826 = r_LOOKUP_NEXT(l_Y_826);
}
} L_end827: ;
return 0;
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R13 * p_R) { 
rt_int l_N_828; memset(&l_N_828, 0, sizeof l_N_828);
l_N_828 = ((rt_int)0LL);
R20 * l_P_829; memset(&l_P_829, 0, sizeof l_P_829);
l_P_829 = ((*(R13 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_829 == NULL)) goto L_end830;
{
l_N_828 = rt_add(l_N_828, ((rt_int)1LL));
l_P_829 = ((*(R20 *)rt_nil_check(l_P_829))).f_NEXT;
}
} L_end830: ;
return l_N_828;
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R13 * p_R, R19 * p_ARGS) { 
R20 * l_P_831; memset(&l_P_831, 0, sizeof l_P_831);
l_P_831 = ((*(R13 *)rt_nil_check(p_R))).f_PARAMS;
R19 * l_A_832; memset(&l_A_832, 0, sizeof l_A_832);
l_A_832 = p_ARGS;
rt_int l_EXACT_833; memset(&l_EXACT_833, 0, sizeof l_EXACT_833);
l_EXACT_833 = 1;
for (;;) {
if ((l_P_831 == NULL)) goto L_end834;
{
if ((!(((*(R20 *)rt_nil_check(l_P_831))).f_MODE == ((*(R19 *)rt_nil_check(l_A_832))).f_MODE)))
{
return ((rt_int)0LL);
}
if ((((*(R13 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R20 *)rt_nil_check(l_P_831))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_831, l_A_832)))
{
return ((rt_int)0LL);
}
}
else if ((((*(R20 *)rt_nil_check(l_P_831))).f_T == NULL))
{
if (((*(R19 *)rt_nil_check(l_A_832))).f_HAVE)
{
return ((rt_int)0LL);
}
}
else if (r_WANT_SENSITIVE(l_A_832))
{
if ((!r_LITERAL_FITS(((*(R19 *)rt_nil_check(l_A_832))).f_E, ((*(R20 *)rt_nil_check(l_P_831))).f_T)))
{
return ((rt_int)0LL);
}
}
else
{
r_TYPE_ARG(l_A_832);
{
R14 * l_AT_835; memset(&l_AT_835, 0, sizeof l_AT_835);
l_AT_835 = (((*(R19 *)rt_nil_check(l_A_832))).f_V).f_T;
if ((!((r_SAME_CLASS(((*(R20 *)rt_nil_check(l_P_831))).f_T, l_AT_835) || (((((*(R14 *)rt_nil_check(l_AT_835))).f_KIND == g_T_NIL) && (((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R20 *)rt_nil_check(l_P_831))).f_T)))).f_KIND == g_T_PTR)))))))
{
return ((rt_int)0LL);
}
if ((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_831))).f_T, l_AT_835)))
{
l_EXACT_833 = 0;
}
if (((((*(R14 *)rt_nil_check(r_REAL_TYPE(l_AT_835)))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R20 *)rt_nil_check(l_P_831))).f_T)))).f_KIND == g_T_INT)))
{
if ((((*(R14 *)rt_nil_check(l_AT_835))).f_SCALE > ((*(R14 *)rt_nil_check(((*(R20 *)rt_nil_check(l_P_831))).f_T))).f_SCALE))
{
return ((rt_int)0LL);
}
}
}
}
l_P_831 = ((*(R20 *)rt_nil_check(l_P_831))).f_NEXT;
l_A_832 = ((*(R19 *)rt_nil_check(l_A_832))).f_NEXT;
}
} L_end834: ;
if (l_EXACT_833)
{
return ((rt_int)2LL);
}
return ((rt_int)1LL);
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R11 * p_E, R14 * p_T) { 
R14 * l_RT_836; memset(&l_RT_836, 0, sizeof l_RT_836);
l_RT_836 = r_REAL_TYPE(p_T);
if (((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R14 *)rt_nil_check(l_RT_836))).f_KIND == g_T_ENUM))
{
return (!(r_FIND_LITERAL(((*(R11 *)rt_nil_check(p_E))).f_NAME, l_RT_836) == NULL));
}
return 0;
}
else if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
return (((*(R14 *)rt_nil_check(l_RT_836))).f_KIND == g_T_PTR);
}
else if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
return (((*(R14 *)rt_nil_check(l_RT_836))).f_KIND == g_T_REC);
}
else if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
return (((*(R14 *)rt_nil_check(l_RT_836))).f_KIND == g_T_ARR);
}
else if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
return (((*(R14 *)rt_nil_check(l_RT_836))).f_KIND == g_T_INT);
}
else if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
return ((((*(R14 *)rt_nil_check(l_RT_836))).f_KIND == g_T_PTR) || (((*(R14 *)rt_nil_check(l_RT_836))).f_KIND == g_T_SEM));
}
return 0;
rt_raise(RT_X_INIT);
}
static R18 r_CALL_SYM(R13 * p_Y0, R19 * p_ARGS, rt_int p_LINE) { 
R13 * l_Y_837; memset(&l_Y_837, 0, sizeof l_Y_837);
l_Y_837 = r_ORIGINAL(p_Y0);
R20 * l_P_838; memset(&l_P_838, 0, sizeof l_P_838);
R19 * l_A_839; memset(&l_A_839, 0, sizeof l_A_839);
l_A_839 = p_ARGS;
R7 l_C_840; memset(&l_C_840, 0, sizeof l_C_840);
S_R7(&l_C_840, r_MK(rt_str("", 0)), 0);
R7 l_SEP_841; memset(&l_SEP_841, 0, sizeof l_SEP_841);
S_R7(&l_SEP_841, r_MK(rt_str("", 0)), 0);
if (((*(R13 *)rt_nil_check(l_Y_837))).f_GENERIC)
{
l_Y_837 = r_INSTANCE(l_Y_837, p_ARGS, p_LINE);
}
r_CHECK_CALL_IMPORTS(l_Y_837, p_LINE);
if ((((*(R13 *)rt_nil_check(l_Y_837))).f_LEVEL >= ((rt_int)1LL)))
{
S_R7(&l_C_840, r_FRAME_OF(((*(R13 *)rt_nil_check(l_Y_837))).f_LEVEL), 0);
S_R7(&l_SEP_841, r_MK(rt_str(", ", 2)), 0);
}
l_P_838 = ((*(R13 *)rt_nil_check(l_Y_837))).f_PARAMS;
for (;;) {
if ((l_P_838 == NULL)) goto L_end842;
{
if ((l_A_839 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
if ((((*(R20 *)rt_nil_check(l_P_838))).f_T == NULL))
{
}
else if ((((*(R20 *)rt_nil_check(l_P_838))).f_MODE == g_M_IN))
{
if ((((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R20 *)rt_nil_check(l_P_838))).f_T)))).f_KIND == g_T_VOID))
{
}
else
{
{
R18 l_V_843; memset(&l_V_843, 0, sizeof l_V_843);
if ((((*(R19 *)rt_nil_check(l_A_839))).f_HAVE && (!r_WANT_SENSITIVE(l_A_839))))
{
S_R18(&l_V_843, ((*(R19 *)rt_nil_check(l_A_839))).f_V, 0);
}
else
{
S_R18(&l_V_843, r_EXPR(((*(R19 *)rt_nil_check(l_A_839))).f_E, ((*(R20 *)rt_nil_check(l_P_838))).f_T), 0);
}
S_R7(&l_C_840, r_FMT3(rt_str("@@@", 3), l_C_840, l_SEP_841, r_CONVERT(l_V_843, ((*(R20 *)rt_nil_check(l_P_838))).f_T, p_LINE, r_NO_TEXT())), 0);
S_R7(&l_SEP_841, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R18 l_V_844; memset(&l_V_844, 0, sizeof l_V_844);
if (((*(R19 *)rt_nil_check(l_A_839))).f_HAVE)
{
S_R18(&l_V_844, ((*(R19 *)rt_nil_check(l_A_839))).f_V, 0);
}
else
{
S_R18(&l_V_844, r_EXPR(((*(R19 *)rt_nil_check(l_A_839))).f_E, ((*(R20 *)rt_nil_check(l_P_838))).f_T), 0);
}
if ((!(l_V_844).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(((*(R20 *)rt_nil_check(l_P_838))).f_T, (l_V_844).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(((*(R20 *)rt_nil_check(l_P_838))).f_T));
}
if (((((*(R20 *)rt_nil_check(l_P_838))).f_MODE == g_M_INOUT) && (!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_838))).f_T, (l_V_844).f_T))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
S_R7(&l_C_840, r_FMT3(rt_str("@@&@", 4), l_C_840, l_SEP_841, (l_V_844).f_C), 0);
S_R7(&l_SEP_841, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_839 = ((*(R19 *)rt_nil_check(l_A_839))).f_NEXT;
l_P_838 = ((*(R20 *)rt_nil_check(l_P_838))).f_NEXT;
}
} L_end842: ;
if ((!(l_A_839 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
return r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R13 *)rt_nil_check(l_Y_837))).f_ACCESS, l_C_840), ((*(R13 *)rt_nil_check(l_Y_837))).f_RESULT);
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R11 * p_TS) { 
if ((p_TS == NULL))
{
return 0;
}
if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
return 1;
}
else if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
return 1;
}
else if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
return r_STATIC_GENERIC(((*(R11 *)rt_nil_check(p_TS))).f_C);
}
else if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((!(((*(R11 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_TS))).f_B))).f_A))).f_KIND == g_TS_GEN) || (((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_TS))).f_B))).f_B))).f_KIND == g_TS_GEN)))
{
return 1;
}
}
if ((r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
return r_HAS_GEN_ARG(((*(R11 *)rt_nil_check(p_TS))).f_A);
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
return r_STATIC_GENERIC(((*(R11 *)rt_nil_check(p_TS))).f_A);
}
else if ((((r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
return 0;
}
{
R13 * l_Y_845; memset(&l_Y_845, 0, sizeof l_Y_845);
l_Y_845 = r_ORIG_LOOKUP(((*(R11 *)rt_nil_check(p_TS))).f_NAME);
R11 * l_A_846; memset(&l_A_846, 0, sizeof l_A_846);
l_A_846 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
R11 * l_F_847; memset(&l_F_847, 0, sizeof l_F_847);
if ((l_Y_845 == NULL))
{
return 0;
}
if ((((*(R13 *)rt_nil_check(l_Y_845))).f_KIND == g_Y_GEN))
{
return 1;
}
if ((((*(R13 *)rt_nil_check(l_Y_845))).f_DECL == NULL))
{
return 0;
}
l_F_847 = ((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_845))).f_DECL))).f_A;
for (;;) {
if ((l_F_847 == NULL)) goto L_end848;
{
{
R11 * l_N_849; memset(&l_N_849, 0, sizeof l_N_849);
l_N_849 = ((*(R11 *)rt_nil_check(l_F_847))).f_A;
for (;;) {
if ((l_N_849 == NULL)) goto L_end850;
{
if ((l_A_846 == NULL))
{
return 0;
}
if (((((*(R11 *)rt_nil_check(l_F_847))).f_B == NULL) && ((((((*(R11 *)rt_nil_check(l_A_846))).f_KIND == g_TS_GEN) || (((*(R11 *)rt_nil_check(l_A_846))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_846)))))
{
return 1;
}
l_A_846 = ((*(R11 *)rt_nil_check(l_A_846))).f_NEXT;
l_N_849 = ((*(R11 *)rt_nil_check(l_N_849))).f_NEXT;
}
} L_end850: ;
}
l_F_847 = ((*(R11 *)rt_nil_check(l_F_847))).f_NEXT;
}
} L_end848: ;
}
}
return 0;
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_GEN_ARG(R11 * p_A) { 
R11 * l_P_851; memset(&l_P_851, 0, sizeof l_P_851);
l_P_851 = p_A;
for (;;) {
if ((l_P_851 == NULL)) goto L_end852;
{
if (((((*(R11 *)rt_nil_check(l_P_851))).f_KIND == g_TS_GEN) || (((*(R11 *)rt_nil_check(l_P_851))).f_KIND == g_N_DONTCARE)))
{
return 1;
}
l_P_851 = ((*(R11 *)rt_nil_check(l_P_851))).f_NEXT;
}
} L_end852: ;
return 0;
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R13 * p_Y) { 
R11 * l_R_853; memset(&l_R_853, 0, sizeof l_R_853);
l_R_853 = ((*(R13 *)rt_nil_check(p_Y))).f_DECL;
R11 * l_P_854; memset(&l_P_854, 0, sizeof l_P_854);
R20 * l_TAIL_855; memset(&l_TAIL_855, 0, sizeof l_TAIL_855);
l_TAIL_855 = NULL;
if (((*(R13 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
((*(R13 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_854 = ((*(R11 *)rt_nil_check(l_R_853))).f_A;
for (;;) {
if ((l_P_854 == NULL)) goto L_end856;
{
if (((((*(R11 *)rt_nil_check(l_P_854))).f_B == NULL) || r_STATIC_GENERIC(((*(R11 *)rt_nil_check(l_P_854))).f_B)))
{
((*(R13 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_854 = ((*(R11 *)rt_nil_check(l_P_854))).f_NEXT;
}
} L_end856: ;
if ((!(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_853))).f_D))).f_B == NULL)))
{
((*(R13 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_854 = ((*(R11 *)rt_nil_check(l_R_853))).f_A;
for (;;) {
if ((l_P_854 == NULL)) goto L_end857;
{
{
R20 * l_PM_858; memset(&l_PM_858, 0, sizeof l_PM_858);
l_PM_858 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_PM_858)), ({ R20 rc859; memset(&rc859, 0, sizeof rc859);  S_R7(&rc859.f_NAME, ((*(R11 *)rt_nil_check(l_P_854))).f_NAME, 0); rc859.f_MODE = ((*(R11 *)rt_nil_check(l_P_854))).f_IV; rc859.f_T = NULL; rc859.f_TS = ((*(R11 *)rt_nil_check(l_P_854))).f_B; rc859.f_NEXT = NULL; rc859; }), 0);
if (((((*(R11 *)rt_nil_check(l_R_853))).f_IV == ((rt_int)1LL)) && (!(((*(R11 *)rt_nil_check(l_P_854))).f_IV == g_M_IN))))
{
r_FAIL(((*(R11 *)rt_nil_check(l_P_854))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!((*(R13 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R20 *)rt_nil_check(l_PM_858))).f_T = r_RESOLVE(((*(R11 *)rt_nil_check(l_P_854))).f_B);
}
if ((l_TAIL_855 == NULL))
{
((*(R13 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_858;
}
else
{
((*(R20 *)rt_nil_check(l_TAIL_855))).f_NEXT = l_PM_858;
}
l_TAIL_855 = l_PM_858;
}
l_P_854 = ((*(R11 *)rt_nil_check(l_P_854))).f_NEXT;
}
} L_end857: ;
if ((!((*(R13 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R13 *)rt_nil_check(p_Y))).f_RESULT = r_RESULT_TYPE(p_Y);
S_R7(&((*(R13 *)rt_nil_check(p_Y))).f_FWD, r_C_HEADER(p_Y), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R13 *)rt_nil_check(p_Y))).f_FWD, rt_str(";", 1)));
}
}
static R14 * r_RESULT_TYPE(R13 * p_Y) { 
R11 * l_R_860; memset(&l_R_860, 0, sizeof l_R_860);
l_R_860 = ((*(R13 *)rt_nil_check(p_Y))).f_DECL;
R14 * l_T_861; memset(&l_T_861, 0, sizeof l_T_861);
if ((((*(R11 *)rt_nil_check(l_R_860))).f_B == NULL))
{
return ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID;
}
r_OPEN_SCOPE();
{
R20 * l_P_862; memset(&l_P_862, 0, sizeof l_P_862);
l_P_862 = ((*(R13 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_862 == NULL)) goto L_end863;
{
if ((!(((*(R20 *)rt_nil_check(l_P_862))).f_T == NULL)))
{
{
R13 * l_V_864; memset(&l_V_864, 0, sizeof l_V_864);
l_V_864 = r_NEW_SYM(g_Y_CONST, ((*(R20 *)rt_nil_check(l_P_862))).f_NAME);
((*(R13 *)rt_nil_check(l_V_864))).f_T = ((*(R20 *)rt_nil_check(l_P_862))).f_T;
S_R7(&((*(R13 *)rt_nil_check(l_V_864))).f_ACCESS, r_FMT1(rt_str("p_@", 3), ((*(R20 *)rt_nil_check(l_P_862))).f_NAME), 0);
((*(R13 *)rt_nil_check(l_V_864))).f_INPUT = 1;
r_DEFINE(l_V_864, ((*(R11 *)rt_nil_check(l_R_860))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R20 *)rt_nil_check(l_P_862))).f_T, ((*(R13 *)rt_nil_check(l_V_864))).f_ACCESS, ((*(R11 *)rt_nil_check(l_R_860))).f_LINE, 0);
}
}
l_P_862 = ((*(R20 *)rt_nil_check(l_P_862))).f_NEXT;
}
} L_end863: ;
}
l_T_861 = r_RESOLVE(((*(R11 *)rt_nil_check(l_R_860))).f_B);
r_CLOSE_SCOPE();
return l_T_861;
rt_raise(RT_X_INIT);
}
static R7 r_C_HEADER(R13 * p_Y) { 
R7 l_PS_865; memset(&l_PS_865, 0, sizeof l_PS_865);
S_R7(&l_PS_865, r_MK(rt_str("", 0)), 0);
R7 l_SEP_866; memset(&l_SEP_866, 0, sizeof l_SEP_866);
S_R7(&l_SEP_866, r_MK(rt_str("", 0)), 0);
R20 * l_P_867; memset(&l_P_867, 0, sizeof l_P_867);
l_P_867 = ((*(R13 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R13 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R7(&l_PS_865, r_FMT1(rt_str("@ *up_", 6), ((*(R13 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R7(&l_SEP_866, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_867 == NULL)) goto L_end868;
{
if ((((*(R20 *)rt_nil_check(l_P_867))).f_T == NULL))
{
}
else if ((((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R20 *)rt_nil_check(l_P_867))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R20 *)rt_nil_check(l_P_867))).f_MODE == g_M_IN))
{
S_R7(&l_PS_865, r_FMT4(rt_str("@@@ p_@", 7), l_PS_865, l_SEP_866, r_CTYPE(((*(R20 *)rt_nil_check(l_P_867))).f_T), ((*(R20 *)rt_nil_check(l_P_867))).f_NAME), 0);
S_R7(&l_SEP_866, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R7(&l_PS_865, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_865, l_SEP_866, r_CTYPE(((*(R20 *)rt_nil_check(l_P_867))).f_T), ((*(R20 *)rt_nil_check(l_P_867))).f_NAME), 0);
S_R7(&l_SEP_866, r_MK(rt_str(", ", 2)), 0);
}
l_P_867 = ((*(R20 *)rt_nil_check(l_P_867))).f_NEXT;
}
} L_end868: ;
if (((l_PS_865).f_LEN == ((rt_int)0LL)))
{
S_R7(&l_PS_865, r_MK(rt_str("void", 4)), 0);
}
return r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R13 *)rt_nil_check(p_Y))).f_RESULT), ((*(R13 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_865);
rt_raise(RT_X_INIT);
}
static void r_DEFINE_PARAM_GENS(R14 * p_T, R7 p_PC, rt_int p_LINE, rt_int p_CHECK) { 
if (((((*(R14 *)rt_nil_check(p_T))).f_GEN).f_LEN > ((rt_int)0LL)))
{
r_DEFINE_GEN(((*(R14 *)rt_nil_check(p_T))).f_GEN, r_FMT1(rt_str("(rt_int)(@).len", 15), p_PC), p_LINE, p_CHECK);
}
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{
R17 * l_B_869; memset(&l_B_869, 0, sizeof l_B_869);
l_B_869 = ((*(R14 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_870; memset(&l_I_870, 0, sizeof l_I_870);
l_I_870 = ((rt_int)0LL);
for (;;) {
if ((l_B_869 == NULL)) goto L_end871;
{
if (r_IS_GEN_TEXT(((*(R17 *)rt_nil_check(l_B_869))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R17 *)rt_nil_check(l_B_869))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_870)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R17 *)rt_nil_check(l_B_869))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R17 *)rt_nil_check(l_B_869))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_870)), p_LINE, p_CHECK);
}
l_I_870 = rt_add(l_I_870, ((rt_int)1LL));
l_B_869 = ((*(R17 *)rt_nil_check(l_B_869))).f_NEXT;
}
} L_end871: ;
}
}
if (((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R14 * l_U_872; memset(&l_U_872, 0, sizeof l_U_872);
l_U_872 = r_REAL_TYPE(p_T);
R15 * l_F_873; memset(&l_F_873, 0, sizeof l_F_873);
l_F_873 = ((*(R14 *)rt_nil_check(l_U_872))).f_FIELDS;
R17 * l_A_874; memset(&l_A_874, 0, sizeof l_A_874);
l_A_874 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_873 == NULL) || (l_A_874 == NULL))) goto L_end875;
{
if ((!(((*(R15 *)rt_nil_check(l_F_873))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R17 *)rt_nil_check(l_A_874))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R17 *)rt_nil_check(l_A_874))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R15 *)rt_nil_check(l_F_873))).f_CNAME), p_LINE, p_CHECK);
}
l_A_874 = ((*(R17 *)rt_nil_check(l_A_874))).f_NEXT;
}
l_F_873 = ((*(R15 *)rt_nil_check(l_F_873))).f_NEXT;
}
} L_end875: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R7 p_T) { 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
return 0;
}
return rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
rt_raise(RT_X_INIT);
}
static R7 r_GEN_TEXT_NAME(R7 p_T) { 
return r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R7 p_NAME, R7 p_C, rt_int p_LINE, rt_int p_CHECK) { 
R13 * l_OLD_876; memset(&l_OLD_876, 0, sizeof l_OLD_876);
l_OLD_876 = r_LOOKUP(p_NAME);
if ((!(l_OLD_876 == NULL)))
{
if (((((*(R13 *)rt_nil_check(l_OLD_876))).f_KIND == g_Y_GEN) && (((*(R13 *)rt_nil_check(l_OLD_876))).f_DEPTH == ((*(R22 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R13 *)rt_nil_check(l_OLD_876))).f_ACCESS, p_C));
}
return;
}
}
{
R13 * l_G_877; memset(&l_G_877, 0, sizeof l_G_877);
l_G_877 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R13 *)rt_nil_check(l_G_877))).f_T = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
S_R7(&((*(R13 *)rt_nil_check(l_G_877))).f_ACCESS, p_C, 0);
((*(R13 *)rt_nil_check(l_G_877))).f_INPUT = 1;
r_DEFINE(l_G_877, p_LINE);
}
}
static R16 * r_NEW_BINDS(void) { 
R16 * l_B_878; memset(&l_B_878, 0, sizeof l_B_878);
l_B_878 = ((R16 *)rt_alloc(sizeof (R16)));
S_R16(&(*(R16 *)rt_nil_check(l_B_878)), ({ R16 rc879; memset(&rc879, 0, sizeof rc879);  S_R7(&rc879.f_NAME, r_NO_TEXT(), 0); rc879.f_T = NULL; S_R7(&rc879.f_C, r_NO_TEXT(), 0); rc879.f_HASMV = 0; rc879.f_MV = ((rt_int)0LL); rc879.f_R = NULL; rc879.f_NEXT = NULL; rc879; }), 0);
return l_B_878;
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R7 p_NAME, R14 * p_T, R12 p_M, R13 * p_R, R16 * p_HEAD) { 
R16 * l_B_880; memset(&l_B_880, 0, sizeof l_B_880);
l_B_880 = ((R16 *)rt_alloc(sizeof (R16)));
S_R16(&(*(R16 *)rt_nil_check(l_B_880)), ({ R16 rc881; memset(&rc881, 0, sizeof rc881);  S_R7(&rc881.f_NAME, p_NAME, 0); rc881.f_T = p_T; S_R7(&rc881.f_C, r_NO_TEXT(), 0); rc881.f_HASMV = (p_M).f_OK; rc881.f_MV = (p_M).f_V; rc881.f_R = p_R; rc881.f_NEXT = ((*(R16 *)rt_nil_check(p_HEAD))).f_NEXT; rc881; }), 0);
if ((p_M).f_OK)
{
S_R7(&((*(R16 *)rt_nil_check(l_B_880))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R16 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_880;
}
static R16 * r_FIND_BIND(R16 * p_BS, R7 p_NAME) { 
R16 * l_B_882; memset(&l_B_882, 0, sizeof l_B_882);
l_B_882 = p_BS;
for (;;) {
if ((l_B_882 == NULL)) goto L_end883;
{
if (r_TEQ(((*(R16 *)rt_nil_check(l_B_882))).f_NAME, p_NAME))
{
return l_B_882;
}
l_B_882 = ((*(R16 *)rt_nil_check(l_B_882))).f_NEXT;
}
} L_end883: ;
return NULL;
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R11 * p_TS, R14 * p_T, R16 * p_BS) { 
R14 * l_RT_884; memset(&l_RT_884, 0, sizeof l_RT_884);
l_RT_884 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
return 1;
}
if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
return 1;
}
else if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R11 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
return 1;
}
{
R16 * l_B_885; memset(&l_B_885, 0, sizeof l_B_885);
l_B_885 = r_FIND_BIND(((*(R16 *)rt_nil_check(p_BS))).f_NEXT, ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_885 == NULL)))
{
if ((((*(R16 *)rt_nil_check(l_B_885))).f_T == NULL))
{
return 0;
}
return r_SAME_TYPE(((*(R16 *)rt_nil_check(l_B_885))).f_T, p_T);
}
r_ADD_BIND(((*(R11 *)rt_nil_check(p_TS))).f_NAME, p_T, r_NO_MVAL(), NULL, p_BS);
return 1;
}
}
else if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R14 *)rt_nil_check(l_RT_884))).f_KIND == g_T_ARR)))
{
return 0;
}
if ((!(r_LIST_LENGTH(((*(R11 *)rt_nil_check(p_TS))).f_A) == ((*(R14 *)rt_nil_check(l_RT_884))).f_DIMS)))
{
return 0;
}
return r_UNIFY(((*(R11 *)rt_nil_check(p_TS))).f_C, ((*(R14 *)rt_nil_check(l_RT_884))).f_ELEM, p_BS);
}
else if (((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
return r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
}
else if ((!(((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
return 0;
}
if ((!(((*(R11 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R14 *)rt_nil_check(l_RT_884))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R14 *)rt_nil_check(l_RT_884))).f_MHI, p_BS))))
{
return 0;
}
}
if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R14 *)rt_nil_check(l_RT_884))).f_KIND == g_T_INT)))
{
return 0;
}
return (r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R14 *)rt_nil_check(l_RT_884))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS));
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
return ((((*(R14 *)rt_nil_check(l_RT_884))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_RT_884))).f_SCALE == ((rt_int)0LL)));
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R14 *)rt_nil_check(l_RT_884))).f_KIND == g_T_FLOAT)))
{
return 0;
}
return r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R14 *)rt_nil_check(l_RT_884))).f_SCALE), p_BS);
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
return (((*(R14 *)rt_nil_check(l_RT_884))).f_KIND == g_T_BOOL);
}
else if ((r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8))))
{
return (((*(R14 *)rt_nil_check(l_RT_884))).f_KIND == g_T_STR);
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
return (((*(R14 *)rt_nil_check(l_RT_884))).f_KIND == g_T_BITS);
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
return (((*(R14 *)rt_nil_check(l_RT_884))).f_KIND == g_T_SEM);
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R14 *)rt_nil_check(l_RT_884))).f_KIND == g_T_PTR)))
{
return 0;
}
return r_UNIFY(((*(R11 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_884), p_BS);
}
{
R13 * l_Y_886; memset(&l_Y_886, 0, sizeof l_Y_886);
l_Y_886 = r_ORIG_LOOKUP(((*(R11 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_886 == NULL))
{
return 0;
}
if (((((*(R13 *)rt_nil_check(l_Y_886))).f_KIND == g_Y_TYPE) && (((*(R13 *)rt_nil_check(l_Y_886))).f_DECL == NULL)))
{
return r_SAME_CLASS(((*(R13 *)rt_nil_check(l_Y_886))).f_T, p_T);
}
if ((!(((*(R13 *)rt_nil_check(l_Y_886))).f_KIND == g_Y_TYPE)))
{
return 0;
}
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R14 *)rt_nil_check(p_T))).f_DECL) == l_Y_886)))
{
return 0;
}
}
else if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_886))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R14 *)rt_nil_check(l_RT_884))).f_KIND == g_T_REC)))
{
return 0;
}
if ((!(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_RT_884))).f_BASE))).f_DECL == l_Y_886)))
{
return 0;
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R11 *)rt_nil_check(p_TS))).f_A)))
{
return r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
}
}
{
R11 * l_F_887; memset(&l_F_887, 0, sizeof l_F_887);
l_F_887 = ((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_886))).f_DECL))).f_A;
R11 * l_A_888; memset(&l_A_888, 0, sizeof l_A_888);
l_A_888 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
R17 * l_V_889; memset(&l_V_889, 0, sizeof l_V_889);
l_V_889 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
R13 * l_CLASS_890; memset(&l_CLASS_890, 0, sizeof l_CLASS_890);
l_CLASS_890 = r_RECORD_CLASS_OF(l_RT_884);
for (;;) {
if ((l_F_887 == NULL)) goto L_end891;
{
{
R11 * l_N_892; memset(&l_N_892, 0, sizeof l_N_892);
l_N_892 = ((*(R11 *)rt_nil_check(l_F_887))).f_A;
for (;;) {
if ((l_N_892 == NULL)) goto L_end893;
{
if ((l_A_888 == NULL))
{
return 0;
}
if ((((*(R11 *)rt_nil_check(l_F_887))).f_B == NULL))
{
if ((!(l_CLASS_890 == NULL)))
{
{
R16 * l_B_894; memset(&l_B_894, 0, sizeof l_B_894);
l_B_894 = r_FIND_BIND(((*(R13 *)rt_nil_check(l_CLASS_890))).f_BINDINGS, ((*(R11 *)rt_nil_check(l_N_892))).f_NAME);
if ((!(l_B_894 == NULL)))
{
if ((!r_UNIFY(l_A_888, ((*(R16 *)rt_nil_check(l_B_894))).f_T, p_BS)))
{
return 0;
}
}
}
}
}
else
{
if ((!(l_V_889 == NULL)))
{
if ((((!(((*(R11 *)rt_nil_check(l_A_888))).f_KIND == g_TS_GEN)) && (!(((*(R11 *)rt_nil_check(l_A_888))).f_KIND == g_N_DONTCARE))) && (!(((*(R11 *)rt_nil_check(l_A_888))).f_KIND == g_N_ANY))))
{
{
R12 l_M_895; memset(&l_M_895, 0, sizeof l_M_895);
S_R12(&l_M_895, r_MANIFEST(l_A_888), 0);
if (((l_M_895).f_OK && (((*(R17 *)rt_nil_check(l_V_889))).f_MLO).f_OK))
{
if ((!((l_M_895).f_V == (((*(R17 *)rt_nil_check(l_V_889))).f_MLO).f_V)))
{
return 0;
}
}
}
}
l_V_889 = ((*(R17 *)rt_nil_check(l_V_889))).f_NEXT;
}
}
l_A_888 = ((*(R11 *)rt_nil_check(l_A_888))).f_NEXT;
l_N_892 = ((*(R11 *)rt_nil_check(l_N_892))).f_NEXT;
}
} L_end893: ;
}
l_F_887 = ((*(R11 *)rt_nil_check(l_F_887))).f_NEXT;
}
} L_end891: ;
}
return 1;
}
rt_raise(RT_X_INIT);
}
static R13 * r_RECORD_CLASS_OF(R14 * p_T) { 
R13 * l_R_896; memset(&l_R_896, 0, sizeof l_R_896);
l_R_896 = ((*(R22 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
return NULL;
}
for (;;) {
if ((l_R_896 == NULL)) goto L_end897;
{
if ((((*(R13 *)rt_nil_check(l_R_896))).f_T == ((*(R14 *)rt_nil_check(p_T))).f_BASE))
{
return l_R_896;
}
l_R_896 = ((*(R13 *)rt_nil_check(l_R_896))).f_INSTANCES;
}
} L_end897: ;
return NULL;
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R11 * p_A, R12 p_M, R16 * p_BS) { 
if ((p_A == NULL))
{
return 1;
}
if ((((*(R11 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return 1;
}
else if ((((*(R11 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R11 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
return 1;
}
{
R16 * l_B_898; memset(&l_B_898, 0, sizeof l_B_898);
l_B_898 = r_FIND_BIND(((*(R16 *)rt_nil_check(p_BS))).f_NEXT, ((*(R11 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_898 == NULL)))
{
return ((((*(R16 *)rt_nil_check(l_B_898))).f_HASMV && (p_M).f_OK) && (((*(R16 *)rt_nil_check(l_B_898))).f_MV == (p_M).f_V));
}
}
if ((!(p_M).f_OK))
{
return 0;
}
r_ADD_BIND(((*(R11 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
return 1;
}
{
R12 l_V_899; memset(&l_V_899, 0, sizeof l_V_899);
S_R12(&l_V_899, r_MANIFEST(p_A), 0);
if (((l_V_899).f_OK && (p_M).f_OK))
{
return ((l_V_899).f_V == (p_M).f_V);
}
}
return 1;
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R20 * p_P, R19 * p_A) { 
R16 * l_BS_900; memset(&l_BS_900, 0, sizeof l_BS_900);
l_BS_900 = r_NEW_BINDS();
if ((((*(R11 *)rt_nil_check(((*(R20 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R19 *)rt_nil_check(p_A))).f_HAVE)
{
return 0;
}
return (((*(R11 *)rt_nil_check(((*(R19 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME);
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R11 *)rt_nil_check(((*(R19 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
return 1;
}
r_TYPE_ARG(p_A);
return r_UNIFY(((*(R20 *)rt_nil_check(p_P))).f_TS, (((*(R19 *)rt_nil_check(p_A))).f_V).f_T, l_BS_900);
rt_raise(RT_X_INIT);
}
static R13 * r_INSTANCE(R13 * p_G, R19 * p_ARGS, rt_int p_LINE) { 
R16 * l_BS_901; memset(&l_BS_901, 0, sizeof l_BS_901);
l_BS_901 = r_NEW_BINDS();
R20 * l_P_902; memset(&l_P_902, 0, sizeof l_P_902);
l_P_902 = ((*(R13 *)rt_nil_check(p_G))).f_PARAMS;
R19 * l_A_903; memset(&l_A_903, 0, sizeof l_A_903);
l_A_903 = p_ARGS;
for (;;) {
if ((l_P_902 == NULL)) goto L_end904;
{
if ((((*(R20 *)rt_nil_check(l_P_902))).f_TS == NULL))
{
if (((*(R19 *)rt_nil_check(l_A_903))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R20 *)rt_nil_check(l_P_902))).f_NAME, r_ARG_TYPE(((*(R19 *)rt_nil_check(l_A_903))).f_E), r_NO_MVAL(), NULL, l_BS_901);
}
else if ((((*(R11 *)rt_nil_check(((*(R20 *)rt_nil_check(l_P_902))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R20 *)rt_nil_check(l_P_902))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R20 *)rt_nil_check(l_P_902))).f_TS, ((*(R19 *)rt_nil_check(l_A_903))).f_E, p_LINE), l_BS_901);
}
else
{
if ((!((*(R19 *)rt_nil_check(l_A_903))).f_HAVE))
{
S_R18(&((*(R19 *)rt_nil_check(l_A_903))).f_V, r_EXPR(((*(R19 *)rt_nil_check(l_A_903))).f_E, NULL), 0);
((*(R19 *)rt_nil_check(l_A_903))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R20 *)rt_nil_check(l_P_902))).f_TS, (((*(R19 *)rt_nil_check(l_A_903))).f_V).f_T, l_BS_901)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R20 *)rt_nil_check(l_P_902))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R20 *)rt_nil_check(l_P_902))).f_TS))
{
r_ADD_BIND(r_MKN(rt_str_cat(rt_str("\?", 1), r_STR(((*(R20 *)rt_nil_check(l_P_902))).f_NAME, (((*(R20 *)rt_nil_check(l_P_902))).f_NAME).f_LEN))), (((*(R19 *)rt_nil_check(l_A_903))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_901);
}
}
l_P_902 = ((*(R20 *)rt_nil_check(l_P_902))).f_NEXT;
l_A_903 = ((*(R19 *)rt_nil_check(l_A_903))).f_NEXT;
}
} L_end904: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_901);
{
R13 * l_I_905; memset(&l_I_905, 0, sizeof l_I_905);
l_I_905 = ((*(R13 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_905 == NULL)) goto L_end906;
{
if (r_SAME_STATIC_BINDS(((*(R13 *)rt_nil_check(l_I_905))).f_BINDINGS, ((*(R16 *)rt_nil_check(l_BS_901))).f_NEXT))
{
return l_I_905;
}
l_I_905 = ((*(R13 *)rt_nil_check(l_I_905))).f_INSTANCES;
}
} L_end906: ;
}
return r_NEW_INSTANCE(p_G, ((*(R16 *)rt_nil_check(l_BS_901))).f_NEXT, p_ARGS);
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R16 * p_A, R16 * p_B) { 
R16 * l_P_907; memset(&l_P_907, 0, sizeof l_P_907);
l_P_907 = p_A;
for (;;) {
if ((l_P_907 == NULL)) goto L_end908;
{
{
R16 * l_Q_909; memset(&l_Q_909, 0, sizeof l_Q_909);
l_Q_909 = r_FIND_BIND(p_B, ((*(R16 *)rt_nil_check(l_P_907))).f_NAME);
if ((l_Q_909 == NULL))
{
return 0;
}
if (((!(((*(R16 *)rt_nil_check(l_P_907))).f_T == NULL)) || (!(((*(R16 *)rt_nil_check(l_Q_909))).f_T == NULL))))
{
if (((((*(R16 *)rt_nil_check(l_P_907))).f_T == NULL) || (((*(R16 *)rt_nil_check(l_Q_909))).f_T == NULL)))
{
return 0;
}
if ((!r_SAME_TYPE(((*(R16 *)rt_nil_check(l_P_907))).f_T, ((*(R16 *)rt_nil_check(l_Q_909))).f_T)))
{
return 0;
}
}
if ((((!(((*(R16 *)rt_nil_check(l_P_907))).f_HASMV == ((*(R16 *)rt_nil_check(l_Q_909))).f_HASMV)) || (!(((*(R16 *)rt_nil_check(l_P_907))).f_MV == ((*(R16 *)rt_nil_check(l_Q_909))).f_MV))) || (!(((*(R16 *)rt_nil_check(l_P_907))).f_R == ((*(R16 *)rt_nil_check(l_Q_909))).f_R))))
{
return 0;
}
}
l_P_907 = ((*(R16 *)rt_nil_check(l_P_907))).f_NEXT;
}
} L_end908: ;
return 1;
rt_raise(RT_X_INIT);
}
static R13 * r_ROUTINE_ARGUMENT(R11 * p_TS, R11 * p_E, rt_int p_LINE) { 
R13 * l_Y_910; memset(&l_Y_910, 0, sizeof l_Y_910);
l_Y_910 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
R13 * l_FOUND_911; memset(&l_FOUND_911, 0, sizeof l_FOUND_911);
l_FOUND_911 = NULL;
if ((!(((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(p_LINE, rt_str("a routine name is expected as the argument", 42));
}
for (;;) {
if ((l_Y_910 == NULL)) goto L_end912;
{
if ((((*(R13 *)rt_nil_check(l_Y_910))).f_KIND == g_Y_ROUTINE))
{
{
R13 * l_R_913; memset(&l_R_913, 0, sizeof l_R_913);
l_R_913 = r_ORIGINAL(l_Y_910);
r_ROUTINE_HEADER(l_R_913);
if (((r_LIST_LENGTH(((*(R11 *)rt_nil_check(p_TS))).f_A) == r_PARAM_COUNT(l_R_913)) && (!((*(R13 *)rt_nil_check(l_R_913))).f_GENERIC)))
{
if (((!(l_FOUND_911 == NULL)) && (!(l_FOUND_911 == l_R_913))))
{
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_911 = l_R_913;
}
}
}
l_Y_910 = r_LOOKUP_NEXT(l_Y_910);
}
} L_end912: ;
if ((l_FOUND_911 == NULL))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter: ", 39), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R13 *)rt_nil_check(l_FOUND_911))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
return l_FOUND_911;
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R13 * p_G, rt_int p_LINE, R16 * p_BS) { 
R11 * l_NEEDL_914; memset(&l_NEEDL_914, 0, sizeof l_NEEDL_914);
l_NEEDL_914 = ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R16 * l_SAVED_915; memset(&l_SAVED_915, 0, sizeof l_SAVED_915);
l_SAVED_915 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
((*(R22 *)rt_nil_check(g_W))).f_BINDS = ((*(R16 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_914 == NULL)) goto L_end916;
{
{
R11 * l_T_917; memset(&l_T_917, 0, sizeof l_T_917);
l_T_917 = ((*(R11 *)rt_nil_check(l_NEEDL_914))).f_A;
for (;;) {
if ((l_T_917 == NULL)) goto L_end918;
{
if ((r_FIND_BIND(((*(R16 *)rt_nil_check(p_BS))).f_NEXT, ((*(R11 *)rt_nil_check(l_T_917))).f_NAME) == NULL))
{
{
R19 * l_ARGS_919; memset(&l_ARGS_919, 0, sizeof l_ARGS_919);
l_ARGS_919 = NULL;
R19 * l_TAIL_920; memset(&l_TAIL_920, 0, sizeof l_TAIL_920);
l_TAIL_920 = NULL;
R11 * l_P_921; memset(&l_P_921, 0, sizeof l_P_921);
l_P_921 = ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_T_917))).f_B))).f_A;
R13 * l_R_922; memset(&l_R_922, 0, sizeof l_R_922);
for (;;) {
if ((l_P_921 == NULL)) goto L_end923;
{
{
R19 * l_A_924; memset(&l_A_924, 0, sizeof l_A_924);
if ((((*(R11 *)rt_nil_check(l_P_921))).f_B == NULL))
{
l_A_924 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R22 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_924 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R11 *)rt_nil_check(l_P_921))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R19 *)rt_nil_check(l_A_924))).f_MODE = ((*(R11 *)rt_nil_check(l_P_921))).f_IV;
if ((l_TAIL_920 == NULL))
{
l_ARGS_919 = l_A_924;
}
else
{
((*(R19 *)rt_nil_check(l_TAIL_920))).f_NEXT = l_A_924;
}
l_TAIL_920 = l_A_924;
}
l_P_921 = ((*(R11 *)rt_nil_check(l_P_921))).f_NEXT;
}
} L_end923: ;
l_R_922 = r_FIND_ROUTINE(((*(R11 *)rt_nil_check(l_T_917))).f_NAME, l_ARGS_919, p_LINE, 0);
if ((l_R_922 == NULL))
{
l_R_922 = r_LOOKUP(((*(R11 *)rt_nil_check(l_T_917))).f_NAME);
if ((!(l_R_922 == NULL)))
{
if (((!(((*(R13 *)rt_nil_check(l_R_922))).f_KIND == g_Y_BUILTIN)) && (!(((*(R13 *)rt_nil_check(l_R_922))).f_KIND == g_Y_ROUTINE))))
{
l_R_922 = NULL;
}
}
if ((!(l_R_922 == NULL)))
{
if ((((*(R13 *)rt_nil_check(l_R_922))).f_KIND == g_Y_ROUTINE))
{
l_R_922 = NULL;
}
}
}
if (((l_R_922 == NULL) && (!r_IS_OPERATOR_NAME(((*(R11 *)rt_nil_check(l_T_917))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R11 *)rt_nil_check(l_T_917))).f_NAME);
}
if ((!(l_R_922 == NULL)))
{
r_ADD_BIND(((*(R11 *)rt_nil_check(l_T_917))).f_NAME, NULL, r_NO_MVAL(), l_R_922, p_BS);
}
((*(R22 *)rt_nil_check(g_W))).f_BINDS = ((*(R16 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_917 = ((*(R11 *)rt_nil_check(l_T_917))).f_NEXT;
}
} L_end918: ;
}
l_NEEDL_914 = ((*(R11 *)rt_nil_check(l_NEEDL_914))).f_NEXT;
}
} L_end916: ;
((*(R22 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_915;
}
static rt_int r_DONTCARE_TYPE_ARG(R11 * p_TS) { 
if ((!(((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
return 0;
}
{
R13 * l_Y_925; memset(&l_Y_925, 0, sizeof l_Y_925);
l_Y_925 = r_ORIG_LOOKUP(((*(R11 *)rt_nil_check(p_TS))).f_NAME);
R11 * l_A_926; memset(&l_A_926, 0, sizeof l_A_926);
l_A_926 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
R11 * l_F_927; memset(&l_F_927, 0, sizeof l_F_927);
if ((l_Y_925 == NULL))
{
return 0;
}
if (((!(((*(R13 *)rt_nil_check(l_Y_925))).f_KIND == g_Y_TYPE)) || (((*(R13 *)rt_nil_check(l_Y_925))).f_DECL == NULL)))
{
return 0;
}
l_F_927 = ((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_925))).f_DECL))).f_A;
for (;;) {
if ((l_F_927 == NULL)) goto L_end928;
{
{
R11 * l_N_929; memset(&l_N_929, 0, sizeof l_N_929);
l_N_929 = ((*(R11 *)rt_nil_check(l_F_927))).f_A;
for (;;) {
if ((l_N_929 == NULL)) goto L_end930;
{
if ((l_A_926 == NULL))
{
return 0;
}
if (((((*(R11 *)rt_nil_check(l_F_927))).f_B == NULL) && (((*(R11 *)rt_nil_check(l_A_926))).f_KIND == g_N_DONTCARE)))
{
return 1;
}
l_A_926 = ((*(R11 *)rt_nil_check(l_A_926))).f_NEXT;
l_N_929 = ((*(R11 *)rt_nil_check(l_N_929))).f_NEXT;
}
} L_end930: ;
}
l_F_927 = ((*(R11 *)rt_nil_check(l_F_927))).f_NEXT;
}
} L_end928: ;
}
return 0;
rt_raise(RT_X_INIT);
}
static R13 * r_NEW_INSTANCE(R13 * p_G, R16 * p_BS, R19 * p_ARGS) { 
R19 * l_A_931; memset(&l_A_931, 0, sizeof l_A_931);
l_A_931 = p_ARGS;
R13 * l_I_932; memset(&l_I_932, 0, sizeof l_I_932);
l_I_932 = r_NEW_SYM(g_Y_ROUTINE, ((*(R13 *)rt_nil_check(p_G))).f_NAME);
R16 * l_SAVED_933; memset(&l_SAVED_933, 0, sizeof l_SAVED_933);
l_SAVED_933 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
R20 * l_P_934; memset(&l_P_934, 0, sizeof l_P_934);
l_P_934 = ((*(R13 *)rt_nil_check(p_G))).f_PARAMS;
R20 * l_TAIL_935; memset(&l_TAIL_935, 0, sizeof l_TAIL_935);
l_TAIL_935 = NULL;
S_R13(&(*(R13 *)rt_nil_check(l_I_932)), (*(R13 *)rt_nil_check(p_G)), 0);
((*(R13 *)rt_nil_check(l_I_932))).f_GENERIC = 0;
((*(R13 *)rt_nil_check(l_I_932))).f_BINDINGS = p_BS;
((*(R13 *)rt_nil_check(l_I_932))).f_PARAMS = NULL;
S_R7(&((*(R13 *)rt_nil_check(l_I_932))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R13 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R13 *)rt_nil_check(l_I_932))).f_INSTANCES = ((*(R13 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R13 *)rt_nil_check(p_G))).f_INSTANCES = l_I_932;
((*(R22 *)rt_nil_check(g_W))).f_BINDS = p_BS;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_934 == NULL)) goto L_end936;
{
{
R20 * l_PM_937; memset(&l_PM_937, 0, sizeof l_PM_937);
l_PM_937 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_PM_937)), (*(R20 *)rt_nil_check(l_P_934)), 0);
((*(R20 *)rt_nil_check(l_PM_937))).f_NEXT = NULL;
if ((((*(R20 *)rt_nil_check(l_P_934))).f_TS == NULL))
{
((*(R20 *)rt_nil_check(l_PM_937))).f_T = NULL;
}
else if ((((*(R11 *)rt_nil_check(((*(R20 *)rt_nil_check(l_P_934))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R20 *)rt_nil_check(l_PM_937))).f_T = ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R20 *)rt_nil_check(l_P_934))).f_TS) && ((*(R19 *)rt_nil_check(l_A_931))).f_HAVE))
{
((*(R20 *)rt_nil_check(l_PM_937))).f_T = (((*(R19 *)rt_nil_check(l_A_931))).f_V).f_T;
if ((((*(R14 *)rt_nil_check(((*(R20 *)rt_nil_check(l_PM_937))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R14 *)rt_nil_check(((*(R20 *)rt_nil_check(l_PM_937))).f_T))).f_MODL == ((*(R13 *)rt_nil_check(p_G))).f_MODL))
{
((*(R20 *)rt_nil_check(l_PM_937))).f_T = ((*(R14 *)rt_nil_check(((*(R20 *)rt_nil_check(l_PM_937))).f_T))).f_BASE;
}
}
}
else
{
((*(R20 *)rt_nil_check(l_PM_937))).f_T = r_RESOLVE(((*(R20 *)rt_nil_check(l_P_934))).f_TS);
}
((*(R20 *)rt_nil_check(l_PM_937))).f_TS = NULL;
if ((l_TAIL_935 == NULL))
{
((*(R13 *)rt_nil_check(l_I_932))).f_PARAMS = l_PM_937;
}
else
{
((*(R20 *)rt_nil_check(l_TAIL_935))).f_NEXT = l_PM_937;
}
l_TAIL_935 = l_PM_937;
}
l_P_934 = ((*(R20 *)rt_nil_check(l_P_934))).f_NEXT;
l_A_931 = ((*(R19 *)rt_nil_check(l_A_931))).f_NEXT;
}
} L_end936: ;
((*(R13 *)rt_nil_check(l_I_932))).f_RESULT = r_RESULT_TYPE(l_I_932);
r_LEAVE_MODULE_OF(p_G);
((*(R22 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_933;
S_R7(&((*(R13 *)rt_nil_check(l_I_932))).f_FWD, r_C_HEADER(l_I_932), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R13 *)rt_nil_check(l_I_932))).f_FWD, rt_str(";", 1)));
((*(R13 *)rt_nil_check(l_I_932))).f_MEMBERS = ((*(R22 *)rt_nil_check(g_W))).f_PENDING;
((*(R22 *)rt_nil_check(g_W))).f_PENDING = l_I_932;
return l_I_932;
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R7 p_NAME) { 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
return 0;
}
return rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R11 * p_L, R7 p_NAME) { 
R11 * l_P_938; memset(&l_P_938, 0, sizeof l_P_938);
l_P_938 = p_L;
for (;;) {
if ((l_P_938 == NULL)) goto L_end939;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_P_938))).f_NAME, p_NAME))
{
return 1;
}
l_P_938 = ((*(R11 *)rt_nil_check(l_P_938))).f_NEXT;
}
} L_end939: ;
return 0;
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R13 * p_Y, rt_int p_LINE) { 
R28 * l_IS_940; memset(&l_IS_940, 0, sizeof l_IS_940);
l_IS_940 = ((*(R22 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R13 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
return (!((*(R13 *)rt_nil_check(p_Y))).f_INPUT);
}
if ((l_IS_940 == NULL))
{
return (!((*(R13 *)rt_nil_check(p_Y))).f_INPUT);
}
if (((((*(R13 *)rt_nil_check(p_Y))).f_OWNER == ((*(R28 *)rt_nil_check(l_IS_940))).f_ID) || (((*(R28 *)rt_nil_check(l_IS_940))).f_ID == ((rt_int)0LL))))
{
return (!((*(R13 *)rt_nil_check(p_Y))).f_INPUT);
}
if ((!(((*(R28 *)rt_nil_check(l_IS_940))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_940))).f_IMPORTS))).f_B, ((*(R13 *)rt_nil_check(p_Y))).f_NAME))
{
return (!((*(R13 *)rt_nil_check(p_Y))).f_INPUT);
}
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_940))).f_IMPORTS))).f_A, ((*(R13 *)rt_nil_check(p_Y))).f_NAME))
{
return 0;
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R13 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R13 * p_Y) { 
R11 * l_ITEMS_941; memset(&l_ITEMS_941, 0, sizeof l_ITEMS_941);
l_ITEMS_941 = ((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R11 * l_HEAD_942; memset(&l_HEAD_942, 0, sizeof l_HEAD_942);
l_HEAD_942 = NULL;
R11 * l_TAIL_943; memset(&l_TAIL_943, 0, sizeof l_TAIL_943);
l_TAIL_943 = NULL;
if ((!(((*(R13 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R13 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_941 == NULL))
{
((*(R13 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R11 *)rt_nil_check(l_ITEMS_941))).f_A, &l_HEAD_942, &l_TAIL_943);
r_ADD_USES(((*(R11 *)rt_nil_check(l_ITEMS_941))).f_B, &l_HEAD_942, &l_TAIL_943);
{
R11 * l_R_944; memset(&l_R_944, 0, sizeof l_R_944);
l_R_944 = ((*(R11 *)rt_nil_check(l_ITEMS_941))).f_C;
for (;;) {
if ((l_R_944 == NULL)) goto L_end945;
{
{
R13 * l_Z_946; memset(&l_Z_946, 0, sizeof l_Z_946);
l_Z_946 = r_LOOKUP(((*(R11 *)rt_nil_check(l_R_944))).f_NAME);
if ((l_Z_946 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(l_R_944))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R11 *)rt_nil_check(l_R_944))).f_NAME);
}
for (;;) {
if ((l_Z_946 == NULL)) goto L_end947;
{
if ((((*(R13 *)rt_nil_check(l_Z_946))).f_KIND == g_Y_ROUTINE))
{
{
R13 * l_O_948; memset(&l_O_948, 0, sizeof l_O_948);
l_O_948 = r_ORIGINAL(l_Z_946);
R11 * l_U_949; memset(&l_U_949, 0, sizeof l_U_949);
r_COMPUTE_USES(l_O_948);
l_U_949 = ((*(R13 *)rt_nil_check(l_O_948))).f_USES;
for (;;) {
if ((l_U_949 == NULL)) goto L_end950;
{
if ((!r_IN_IDENTS(l_HEAD_942, ((*(R11 *)rt_nil_check(l_U_949))).f_NAME)))
{
{
R11 * l_N_951; memset(&l_N_951, 0, sizeof l_N_951);
l_N_951 = r_NEW_NODE(g_N_IDENT, ((*(R11 *)rt_nil_check(l_U_949))).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_N_951))).f_NAME, ((*(R11 *)rt_nil_check(l_U_949))).f_NAME, 0);
((*(R11 *)rt_nil_check(l_N_951))).f_IV = ((*(R11 *)rt_nil_check(l_U_949))).f_IV;
r_ADD_LIST(l_N_951, &l_HEAD_942, &l_TAIL_943);
}
}
l_U_949 = ((*(R11 *)rt_nil_check(l_U_949))).f_NEXT;
}
} L_end950: ;
}
}
l_Z_946 = r_LOOKUP_NEXT(l_Z_946);
}
} L_end947: ;
}
l_R_944 = ((*(R11 *)rt_nil_check(l_R_944))).f_NEXT;
}
} L_end945: ;
}
((*(R13 *)rt_nil_check(p_Y))).f_USES = l_HEAD_942;
((*(R13 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static void r_ROUTINE_USES(R11 * p_RS) { 
R11 * l_R_952; memset(&l_R_952, 0, sizeof l_R_952);
l_R_952 = p_RS;
for (;;) {
if ((l_R_952 == NULL)) goto L_end953;
{
if ((((*(R11 *)rt_nil_check(l_R_952))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_952));
}
l_R_952 = ((*(R11 *)rt_nil_check(l_R_952))).f_NEXT;
}
} L_end953: ;
}
static void r_ADD_USES(R11 * p_L, R11 * *p_HEAD, R11 * *p_TAIL) { 
R11 * l_P_954; memset(&l_P_954, 0, sizeof l_P_954);
l_P_954 = p_L;
for (;;) {
if ((l_P_954 == NULL)) goto L_end955;
{
{
R13 * l_V_956; memset(&l_V_956, 0, sizeof l_V_956);
l_V_956 = r_LOOKUP(((*(R11 *)rt_nil_check(l_P_954))).f_NAME);
R11 * l_N_957; memset(&l_N_957, 0, sizeof l_N_957);
l_N_957 = r_NEW_NODE(g_N_IDENT, ((*(R11 *)rt_nil_check(l_P_954))).f_LINE);
if ((l_V_956 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(l_P_954))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R11 *)rt_nil_check(l_P_954))).f_NAME);
}
S_R7(&((*(R11 *)rt_nil_check(l_N_957))).f_NAME, ((*(R11 *)rt_nil_check(l_P_954))).f_NAME, 0);
((*(R11 *)rt_nil_check(l_N_957))).f_IV = ((*(R13 *)rt_nil_check(l_V_956))).f_OWNER;
if ((((*(R13 *)rt_nil_check(l_V_956))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_957, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_954 = ((*(R11 *)rt_nil_check(l_P_954))).f_NEXT;
}
} L_end955: ;
}
static void r_CHECK_CALL_IMPORTS(R13 * p_Y, rt_int p_LINE) { 
R28 * l_IS_958; memset(&l_IS_958, 0, sizeof l_IS_958);
l_IS_958 = ((*(R22 *)rt_nil_check(g_W))).f_IS;
R11 * l_U_959; memset(&l_U_959, 0, sizeof l_U_959);
l_U_959 = ((*(R13 *)rt_nil_check(p_Y))).f_USES;
if ((l_IS_958 == NULL))
{
return;
}
if ((((*(R28 *)rt_nil_check(l_IS_958))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_959 == NULL)) goto L_end960;
{
if ((!(((*(R11 *)rt_nil_check(l_U_959))).f_IV == ((*(R28 *)rt_nil_check(l_IS_958))).f_ID)))
{
if ((((*(R28 *)rt_nil_check(l_IS_958))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R13 *)rt_nil_check(p_Y))).f_NAME, (((*(R13 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R11 *)rt_nil_check(l_U_959))).f_NAME, (((*(R11 *)rt_nil_check(l_U_959))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!((((r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_958))).f_IMPORTS))).f_A, ((*(R11 *)rt_nil_check(l_U_959))).f_NAME) || r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_958))).f_IMPORTS))).f_B, ((*(R11 *)rt_nil_check(l_U_959))).f_NAME)) || r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_958))).f_IMPORTS))).f_C, ((*(R13 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_958))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))))))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R13 *)rt_nil_check(p_Y))).f_NAME, (((*(R13 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R11 *)rt_nil_check(l_U_959))).f_NAME, (((*(R11 *)rt_nil_check(l_U_959))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_959 = ((*(R11 *)rt_nil_check(l_U_959))).f_NEXT;
}
} L_end960: ;
}
static R7 r_BASE_NAME(R13 * p_Y) { 
if (((((*(R13 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)))
{
return ((*(R13 *)rt_nil_check(p_Y))).f_NAME;
}
return r_MKN(rt_b_slice(r_STR(((*(R13 *)rt_nil_check(p_Y))).f_NAME, (((*(R13 *)rt_nil_check(p_Y))).f_NAME).f_LEN), rt_add((((*(R13 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)), rt_sub((((*(R13 *)rt_nil_check(p_Y))).f_NAME).f_LEN, ((rt_int)1LL))));
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R7 p_NAME) { 
R21 * l_C_961; memset(&l_C_961, 0, sizeof l_C_961);
l_C_961 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_961 == NULL)) goto L_end962;
{
if ((((*(R21 *)rt_nil_check(l_C_961))).f_KIND == ((rt_int)1LL)))
{
goto L_end962;
}
if ((((*(R21 *)rt_nil_check(l_C_961))).f_KIND == ((rt_int)3LL)))
{
{
R11 * l_H_963; memset(&l_H_963, 0, sizeof l_H_963);
l_H_963 = ((*(R21 *)rt_nil_check(l_C_961))).f_HANDLERS;
for (;;) {
if ((l_H_963 == NULL)) goto L_end964;
{
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(l_H_963))).f_A, p_NAME))
{
return 1;
}
l_H_963 = ((*(R11 *)rt_nil_check(l_H_963))).f_NEXT;
}
} L_end964: ;
}
}
l_C_961 = ((*(R21 *)rt_nil_check(l_C_961))).f_NEXT;
}
} L_end962: ;
if ((!(((*(R22 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R28 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
return 1;
}
}
return r_TEQS(p_NAME, rt_str("TERMINATED", 10));
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R7 p_NAME) { 
R21 * l_C_965; memset(&l_C_965, 0, sizeof l_C_965);
l_C_965 = ((R21 *)rt_alloc(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_C_965)), ({ R21 rc966; memset(&rc966, 0, sizeof rc966);  rc966.f_KIND = p_KIND; S_R7(&rc966.f_NAME, p_NAME, 0); rc966.f_HANDLERS = NULL; rc966.f_NEXT = ((*(R22 *)rt_nil_check(g_W))).f_CTXS; rc966; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = l_C_965;
}
static void r_POP_CTX(void) { 
((*(R22 *)rt_nil_check(g_W))).f_CTXS = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R21 * r_LEAVE(rt_int p_KIND) { 
R21 * l_C_967; memset(&l_C_967, 0, sizeof l_C_967);
l_C_967 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_967 == NULL)) goto L_end968;
{
if ((((*(R21 *)rt_nil_check(l_C_967))).f_KIND == p_KIND))
{
return l_C_967;
}
if ((((*(R21 *)rt_nil_check(l_C_967))).f_KIND == ((rt_int)1LL)))
{
return NULL;
}
if ((((*(R21 *)rt_nil_check(l_C_967))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R21 *)rt_nil_check(l_C_967))).f_NAME));
}
l_C_967 = ((*(R21 *)rt_nil_check(l_C_967))).f_NEXT;
}
} L_end968: ;
return NULL;
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { 
R21 * l_C_969; memset(&l_C_969, 0, sizeof l_C_969);
l_C_969 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_970; memset(&l_N_970, 0, sizeof l_N_970);
l_N_970 = ((rt_int)0LL);
for (;;) {
if ((l_C_969 == NULL)) goto L_end971;
{
if ((((*(R21 *)rt_nil_check(l_C_969))).f_KIND == ((rt_int)1LL)))
{
goto L_end971;
}
if ((((*(R21 *)rt_nil_check(l_C_969))).f_KIND == ((rt_int)3LL)))
{
l_N_970 = rt_add(l_N_970, ((rt_int)1LL));
}
l_C_969 = ((*(R21 *)rt_nil_check(l_C_969))).f_NEXT;
}
} L_end971: ;
return l_N_970;
rt_raise(RT_X_INIT);
}
static R7 r_EXC_NAME(R7 p_NAME) { 
R11 * l_N_972; memset(&l_N_972, 0, sizeof l_N_972);
l_N_972 = ((*(R22 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_972 == NULL)) goto L_end973;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_N_972))).f_NAME, p_NAME))
{
return r_FMT1(rt_str("x_@", 3), p_NAME);
}
l_N_972 = ((*(R11 *)rt_nil_check(l_N_972))).f_NEXT;
}
} L_end973: ;
l_N_972 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R7(&((*(R11 *)rt_nil_check(l_N_972))).f_NAME, p_NAME, 0);
((*(R11 *)rt_nil_check(l_N_972))).f_NEXT = ((*(R22 *)rt_nil_check(g_W))).f_EXCS;
((*(R22 *)rt_nil_check(g_W))).f_EXCS = l_N_972;
return r_FMT1(rt_str("x_@", 3), p_NAME);
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R11 * p_DECLS) { 
R11 * l_D_974; memset(&l_D_974, 0, sizeof l_D_974);
l_D_974 = p_DECLS;
for (;;) {
if ((l_D_974 == NULL)) goto L_end975;
{
if (((((*(R11 *)rt_nil_check(l_D_974))).f_KIND == g_N_TYPE) || (((*(R11 *)rt_nil_check(l_D_974))).f_KIND == g_N_REPTYPE)))
{
{
R13 * l_Y_976; memset(&l_Y_976, 0, sizeof l_Y_976);
l_Y_976 = r_NEW_SYM(g_Y_TYPE, ((*(R11 *)rt_nil_check(l_D_974))).f_NAME);
if ((((*(R11 *)rt_nil_check(l_D_974))).f_KIND == g_N_REPTYPE))
{
((*(R13 *)rt_nil_check(l_Y_976))).f_KIND = g_Y_REPTYPE;
}
((*(R13 *)rt_nil_check(l_Y_976))).f_DECL = l_D_974;
r_DEFINE(l_Y_976, ((*(R11 *)rt_nil_check(l_D_974))).f_LINE);
}
}
l_D_974 = ((*(R11 *)rt_nil_check(l_D_974))).f_NEXT;
}
} L_end975: ;
}
static void r_DECLARE_LABELS(R11 * p_S0) { 
R11 * l_S_977; memset(&l_S_977, 0, sizeof l_S_977);
l_S_977 = p_S0;
for (;;) {
if ((l_S_977 == NULL)) goto L_end978;
{
{
R11 * l_L_979; memset(&l_L_979, 0, sizeof l_L_979);
l_L_979 = l_S_977;
for (;;) {
if ((!(((*(R11 *)rt_nil_check(l_L_979))).f_KIND == g_N_LABELED))) goto L_end980;
{
{
R13 * l_Y_981; memset(&l_Y_981, 0, sizeof l_Y_981);
l_Y_981 = r_NEW_SYM(g_Y_LABEL, ((*(R11 *)rt_nil_check(l_L_979))).f_NAME);
S_R7(&((*(R13 *)rt_nil_check(l_Y_981))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(((*(R11 *)rt_nil_check(l_L_979))).f_NAME, (((*(R11 *)rt_nil_check(l_L_979))).f_NAME).f_LEN))), 0);
((*(R13 *)rt_nil_check(l_Y_981))).f_MV = r_GUARDS();
r_DEFINE(l_Y_981, ((*(R11 *)rt_nil_check(l_L_979))).f_LINE);
}
l_L_979 = ((*(R11 *)rt_nil_check(l_L_979))).f_A;
}
} L_end980: ;
}
l_S_977 = ((*(R11 *)rt_nil_check(l_S_977))).f_NEXT;
}
} L_end978: ;
}
static void r_BODY(R11 * p_B) { 
R11 * l_D_982; memset(&l_D_982, 0, sizeof l_D_982);
l_D_982 = ((*(R11 *)rt_nil_check(p_B))).f_A;
R11 * l_S_983; memset(&l_S_983, 0, sizeof l_S_983);
l_S_983 = ((*(R11 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R11 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_982 == NULL)) goto L_end984;
{
if (((((*(R11 *)rt_nil_check(l_D_982))).f_KIND == g_N_VAR) || (((*(R11 *)rt_nil_check(l_D_982))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_982);
}
l_D_982 = ((*(R11 *)rt_nil_check(l_D_982))).f_NEXT;
}
} L_end984: ;
r_DECLARE_LABELS(((*(R11 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_983 == NULL)) goto L_end985;
{
r_STMT(l_S_983);
l_S_983 = ((*(R11 *)rt_nil_check(l_S_983))).f_NEXT;
}
} L_end985: ;
}
static void r_OPEN_BODY(R11 * p_B) { 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R11 * p_S, R11 * p_BODY_NODE, R11 * p_HANDLERS) { 
R7 l_F_986; memset(&l_F_986, 0, sizeof l_F_986);
S_R7(&l_F_986, r_NEW_NAME(rt_str("xf", 2)), 0);
R11 * l_H_987; memset(&l_H_987, 0, sizeof l_H_987);
l_H_987 = p_HANDLERS;
R7 l_WORD_988; memset(&l_WORD_988, 0, sizeof l_WORD_988);
S_R7(&l_WORD_988, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_986, l_F_986));
r_PUSH_CTX(((rt_int)3LL), l_F_986);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_986, l_F_986, l_F_986));
for (;;) {
if ((l_H_987 == NULL)) goto L_end989;
{
{
R11 * l_N_990; memset(&l_N_990, 0, sizeof l_N_990);
l_N_990 = ((*(R11 *)rt_nil_check(l_H_987))).f_A;
R7 l_COND_991; memset(&l_COND_991, 0, sizeof l_COND_991);
S_R7(&l_COND_991, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_990 == NULL)) goto L_end992;
{
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(l_N_990))).f_NEXT, ((*(R11 *)rt_nil_check(l_N_990))).f_NAME))
{
r_FAILT(((*(R11 *)rt_nil_check(l_N_990))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R11 *)rt_nil_check(l_N_990))).f_NAME);
}
S_R7(&l_COND_991, r_FMT3(rt_str("@ || @x == @", 12), l_COND_991, l_F_986, r_EXC_NAME(((*(R11 *)rt_nil_check(l_N_990))).f_NAME)), 0);
l_N_990 = ((*(R11 *)rt_nil_check(l_N_990))).f_NEXT;
}
} L_end992: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_988, l_COND_991));
S_R7(&l_WORD_988, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_986, rt_str("x", 1)));
r_OPEN_BODY(((*(R11 *)rt_nil_check(l_H_987))).f_B);
r_POP_CTX();
}
l_H_987 = ((*(R11 *)rt_nil_check(l_H_987))).f_NEXT;
}
} L_end989: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_986));
}
static void r_STMT(R11 * p_S) { 
rt_int l_K_993; memset(&l_K_993, 0, sizeof l_K_993);
l_K_993 = ((*(R11 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_993 == g_N_NULL))
{
return;
}
else if ((l_K_993 == g_N_LABELED))
{
{
R13 * l_Y_994; memset(&l_Y_994, 0, sizeof l_Y_994);
l_Y_994 = r_LOOKUP(((*(R11 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R13 *)rt_nil_check(l_Y_994))).f_ACCESS));
r_STMT(((*(R11 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_993 == g_N_GOTO))
{
{
R13 * l_Y_995; memset(&l_Y_995, 0, sizeof l_Y_995);
l_Y_995 = r_LOOKUP(((*(R11 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_996; memset(&l_N_996, 0, sizeof l_N_996);
R21 * l_C_997; memset(&l_C_997, 0, sizeof l_C_997);
l_C_997 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_995 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R11 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R13 *)rt_nil_check(l_Y_995))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R11 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R13 *)rt_nil_check(l_Y_995))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R11 *)rt_nil_check(p_S))).f_NAME);
}
l_N_996 = rt_sub(r_GUARDS(), ((*(R13 *)rt_nil_check(l_Y_995))).f_MV);
for (;;) {
if ((l_N_996 <= ((rt_int)0LL))) goto L_end998;
{
if ((((*(R21 *)rt_nil_check(l_C_997))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R21 *)rt_nil_check(l_C_997))).f_NAME));
l_N_996 = rt_sub(l_N_996, ((rt_int)1LL));
}
l_C_997 = ((*(R21 *)rt_nil_check(l_C_997))).f_NEXT;
}
} L_end998: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R13 *)rt_nil_check(l_Y_995))).f_ACCESS));
}
}
else if ((l_K_993 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_993 == g_N_CALL))
{
{
R18 l_V_999; memset(&l_V_999, 0, sizeof l_V_999);
S_R18(&l_V_999, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_999).f_T == NULL)))
{
if ((!(((*(R14 *)rt_nil_check((l_V_999).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R11 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_999).f_C, rt_str(";", 1)));
}
}
else if ((l_K_993 == g_N_IF))
{
r_IF_STMT(((*(R11 *)rt_nil_check(p_S))).f_A, ((*(R11 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_993 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_993 == g_N_LOOP))
{
{
R7 l_END_L_1000; memset(&l_END_L_1000, 0, sizeof l_END_L_1000);
S_R7(&l_END_L_1000, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R11 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R11 *)rt_nil_check(p_S))).f_A), l_END_L_1000));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_1000);
r_OPEN_BODY(((*(R11 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
if ((!(((*(R11 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R11 *)rt_nil_check(p_S))).f_C), l_END_L_1000));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_1000));
}
}
else if ((l_K_993 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_993 == g_N_EXIT))
{
{
R21 * l_C_1001; memset(&l_C_1001, 0, sizeof l_C_1001);
l_C_1001 = r_LEAVE(((rt_int)2LL));
if ((l_C_1001 == NULL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R21 *)rt_nil_check(l_C_1001))).f_NAME));
}
}
else if ((l_K_993 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_993 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R11 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_993 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_993 == g_N_ASSERT))
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R11 *)rt_nil_check(p_S))).f_A)));
}
else if ((l_K_993 == g_N_EXCEPT))
{
r_GUARDED(((*(R11 *)rt_nil_check(p_S))).f_A, NULL, ((*(R11 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_993 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_993 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_993 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R18 r_PROCEDURE_CALL(R11 * p_S) { 
R13 * l_Y_1002; memset(&l_Y_1002, 0, sizeof l_Y_1002);
l_Y_1002 = r_LOOKUP(((*(R11 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_1002 == NULL)))
{
if (((((*(R13 *)rt_nil_check(l_Y_1002))).f_KIND == g_Y_VAR) || (((*(R13 *)rt_nil_check(l_Y_1002))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R11 *)rt_nil_check(p_S))).f_NAME);
}
}
return r_CALL_EXPR(p_S, NULL);
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R11 * p_ARMS, R11 * p_ELSE_BODY) { 
R11 * l_ARM_1003; memset(&l_ARM_1003, 0, sizeof l_ARM_1003);
l_ARM_1003 = p_ARMS;
R7 l_WORD_1004; memset(&l_WORD_1004, 0, sizeof l_WORD_1004);
S_R7(&l_WORD_1004, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_1005; memset(&l_OPEN_1005, 0, sizeof l_OPEN_1005);
l_OPEN_1005 = ((rt_int)0LL);
for (;;) {
if ((l_ARM_1003 == NULL)) goto L_end1006;
{
{
R12 l_M_1007; memset(&l_M_1007, 0, sizeof l_M_1007);
S_R12(&l_M_1007, r_MANIFEST(((*(R11 *)rt_nil_check(l_ARM_1003))).f_A), 0);
if (((l_M_1007).f_OK && (!r_TEQS(l_WORD_1004, rt_str("if", 2)))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_1005 = rt_add(l_OPEN_1005, ((rt_int)1LL));
S_R7(&l_WORD_1004, r_MK(rt_str("if", 2)), 0);
}
if ((l_M_1007).f_OK)
{
if (((l_M_1007).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R11 *)rt_nil_check(l_ARM_1003))).f_B);
{ rt_int it1009_lo = ((rt_int)1LL), it1009_hi = l_OPEN_1005;
for (rt_int it1009 = it1009_lo; it1009 <= it1009_hi; it1009++) {
{
r_CODES(rt_str("}", 1));
}
} } L_end1008: ;
return;
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_1004, r_BOOL_EXPR(((*(R11 *)rt_nil_check(l_ARM_1003))).f_A)));
r_OPEN_BODY(((*(R11 *)rt_nil_check(l_ARM_1003))).f_B);
S_R7(&l_WORD_1004, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_1003 = ((*(R11 *)rt_nil_check(l_ARM_1003))).f_NEXT;
}
} L_end1006: ;
if ((!(p_ELSE_BODY == NULL)))
{
if ((!r_TEQS(l_WORD_1004, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
{ rt_int it1011_lo = ((rt_int)1LL), it1011_hi = l_OPEN_1005;
for (rt_int it1011 = it1011_lo; it1011 <= it1011_hi; it1011++) {
{
r_CODES(rt_str("}", 1));
}
} } L_end1010: ;
}
static void r_FOR_STMT(R11 * p_S) { 
R7 l_END_L_1012; memset(&l_END_L_1012, 0, sizeof l_END_L_1012);
S_R7(&l_END_L_1012, r_NEW_NAME(rt_str("L_end", 5)), 0);
R7 l_IT_1013; memset(&l_IT_1013, 0, sizeof l_IT_1013);
S_R7(&l_IT_1013, r_NEW_NAME(rt_str("it", 2)), 0);
R11 * l_R_1014; memset(&l_R_1014, 0, sizeof l_R_1014);
l_R_1014 = ((*(R11 *)rt_nil_check(p_S))).f_A;
R18 l_LO_1015; memset(&l_LO_1015, 0, sizeof l_LO_1015);
S_R18(&l_LO_1015, r_EXPR(((*(R11 *)rt_nil_check(l_R_1014))).f_A, NULL), 0);
R18 l_HI_1016; memset(&l_HI_1016, 0, sizeof l_HI_1016);
S_R18(&l_HI_1016, r_EXPR(((*(R11 *)rt_nil_check(l_R_1014))).f_B, (l_LO_1015).f_T), 0);
R14 * l_T_1017; memset(&l_T_1017, 0, sizeof l_T_1017);
l_T_1017 = r_REAL_TYPE((l_LO_1015).f_T);
R7 l_LOC_1018; memset(&l_LOC_1018, 0, sizeof l_LOC_1018);
R7 l_HIC_1019; memset(&l_HIC_1019, 0, sizeof l_HIC_1019);
if ((((*(R14 *)rt_nil_check(l_T_1017))).f_KIND == g_T_ENUM))
{
if (((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_1017))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R14 *)rt_nil_check(l_T_1017))).f_KIND == g_T_INT)) || (!(((*(R14 *)rt_nil_check(l_T_1017))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R7(&l_LOC_1018, (l_LO_1015).f_C, 0);
S_R7(&l_HIC_1019, (l_HI_1016).f_C, 0);
if (((((*(R11 *)rt_nil_check(l_R_1014))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(l_R_1014))).f_IV == ((rt_int)3LL))))
{
S_R7(&l_LOC_1018, r_FMT1(rt_str("(@) + 1", 7), l_LOC_1018), 0);
}
if ((((*(R11 *)rt_nil_check(l_R_1014))).f_IV >= ((rt_int)2LL)))
{
S_R7(&l_HIC_1019, r_FMT1(rt_str("(@) - 1", 7), l_HIC_1019), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_1013, l_LOC_1018, l_IT_1013, l_HIC_1019));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_1013, l_IT_1013, l_IT_1013, l_IT_1013));
r_OPEN_SCOPE();
if (((((*(R11 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R13 * l_Y_1020; memset(&l_Y_1020, 0, sizeof l_Y_1020);
l_Y_1020 = r_NEW_SYM(g_Y_CONST, ((*(R11 *)rt_nil_check(p_S))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_1020))).f_INPUT = 1;
if ((((*(R14 *)rt_nil_check(l_T_1017))).f_KIND == g_T_ENUM))
{
((*(R13 *)rt_nil_check(l_Y_1020))).f_T = ((*(R14 *)rt_nil_check(l_T_1017))).f_BASE;
}
else
{
((*(R13 *)rt_nil_check(l_Y_1020))).f_T = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_1020, rt_str("", 0)), l_IT_1013));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_1020, rt_str("", 0)), l_IT_1013));
}
else
{
S_R7(&((*(R13 *)rt_nil_check(l_Y_1020))).f_ACCESS, l_IT_1013, 0);
}
r_DEFINE(l_Y_1020, ((*(R11 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_1012);
r_OPEN_BODY(((*(R11 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_1012));
}
static void r_RETURN_STMT(R11 * p_S) { 
R27 * l_CS_1021; memset(&l_CS_1021, 0, sizeof l_CS_1021);
l_CS_1021 = ((*(R22 *)rt_nil_check(g_W))).f_CS;
R21 * l_C_1022; memset(&l_C_1022, 0, sizeof l_C_1022);
l_C_1022 = r_LEAVE(((rt_int)1LL));
if ((((*(R11 *)rt_nil_check(p_S))).f_A == NULL))
{
if ((!(((*(R27 *)rt_nil_check(l_CS_1021))).f_RESULT == NULL)))
{
if ((!(((*(R14 *)rt_nil_check(((*(R27 *)rt_nil_check(l_CS_1021))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R27 *)rt_nil_check(l_CS_1021))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R27 *)rt_nil_check(l_CS_1021))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODES(rt_str("return;", 7));
}
return;
}
if (((((*(R27 *)rt_nil_check(l_CS_1021))).f_RESULT == NULL) || ((*(R27 *)rt_nil_check(l_CS_1021))).f_IS_PATH))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R14 *)rt_nil_check(((*(R27 *)rt_nil_check(l_CS_1021))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
r_CODE(r_FMT1(rt_str("return @;", 9), r_CONVERT(r_EXPR(((*(R11 *)rt_nil_check(p_S))).f_A, ((*(R27 *)rt_nil_check(l_CS_1021))).f_RESULT), ((*(R27 *)rt_nil_check(l_CS_1021))).f_RESULT, ((*(R11 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
}
static void r_SIGNAL_STMT(R11 * p_S) { 
if (((((*(R11 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R21 * l_C_1023; memset(&l_C_1023, 0, sizeof l_C_1023);
l_C_1023 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_1023 == NULL)) goto L_end1024;
{
if ((((*(R21 *)rt_nil_check(l_C_1023))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R21 *)rt_nil_check(l_C_1023))).f_NAME));
return;
}
if ((((*(R21 *)rt_nil_check(l_C_1023))).f_KIND == ((rt_int)1LL)))
{
goto L_end1024;
}
l_C_1023 = ((*(R21 *)rt_nil_check(l_C_1023))).f_NEXT;
}
} L_end1024: ;
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
R11 * l_TG_1025; memset(&l_TG_1025, 0, sizeof l_TG_1025);
l_TG_1025 = ((*(R11 *)rt_nil_check(p_S))).f_A;
if ((((*(R11 *)rt_nil_check(l_TG_1025))).f_KIND == g_N_SUBSTR))
{
{
R18 l_B_1026; memset(&l_B_1026, 0, sizeof l_B_1026);
S_R18(&l_B_1026, r_EXPR(((*(R11 *)rt_nil_check(l_TG_1025))).f_A, NULL), 0);
if ((!(l_B_1026).f_LVAL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R14 *)rt_nil_check((l_B_1026).f_T))).f_KIND == g_T_ABS))
{
{
R19 * l_ARGS_1027; memset(&l_ARGS_1027, 0, sizeof l_ARGS_1027);
l_ARGS_1027 = r_NODE_ARG(((*(R11 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R11 *)rt_nil_check(l_TG_1025))).f_B, g_M_IN, r_NODE_ARG(((*(R11 *)rt_nil_check(l_TG_1025))).f_C, g_M_IN, r_VAL_ARG(l_B_1026, NULL))));
R13 * l_Y_1028; memset(&l_Y_1028, 0, sizeof l_Y_1028);
((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(l_ARGS_1027))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_1028 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_1027, ((*(R11 *)rt_nil_check(p_S))).f_LINE, 1);
if ((l_Y_1028 == NULL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_1028, l_ARGS_1027, ((*(R11 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R14 *)rt_nil_check((l_B_1026).f_T))).f_KIND == g_T_STR)) && (!(((*(R14 *)rt_nil_check((l_B_1026).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R18 l_V_1029; memset(&l_V_1029, 0, sizeof l_V_1029);
S_R18(&l_V_1029, r_EXPR(((*(R11 *)rt_nil_check(p_S))).f_B, (l_B_1026).f_T), 0);
if ((!(((*(R14 *)rt_nil_check((l_V_1029).f_T))).f_KIND == ((*(R14 *)rt_nil_check((l_B_1026).f_T))).f_KIND)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_1026).f_C, r_INT_EXPR(((*(R11 *)rt_nil_check(l_TG_1025))).f_B), r_INT_EXPR(((*(R11 *)rt_nil_check(l_TG_1025))).f_C), (l_V_1029).f_C));
}
}
return;
}
{
R18 l_LV_1030; memset(&l_LV_1030, 0, sizeof l_LV_1030);
S_R18(&l_LV_1030, r_EXPR(l_TG_1025, NULL), 0);
if ((!(l_LV_1030).f_LVAL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
r_CODE(r_STORE_CODE((l_LV_1030).f_T, (l_LV_1030).f_C, r_EXPR(((*(R11 *)rt_nil_check(p_S))).f_B, (l_LV_1030).f_T), ((*(R11 *)rt_nil_check(p_S))).f_LINE, (l_LV_1030).f_SELF));
}
}
static void r_WITH_STMT(R11 * p_S) { 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
{
R13 * l_Y_1031; memset(&l_Y_1031, 0, sizeof l_Y_1031);
l_Y_1031 = r_NEW_SYM(g_Y_VAR, ((*(R11 *)rt_nil_check(p_S))).f_NAME);
R18 l_V_1032; memset(&l_V_1032, 0, sizeof l_V_1032);
S_R18(&l_V_1032, r_EXPR(((*(R11 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R13 *)rt_nil_check(l_Y_1031))).f_T = (l_V_1032).f_T;
if ((((*(R11 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R7 l_CN_1033; memset(&l_CN_1033, 0, sizeof l_CN_1033);
S_R7(&l_CN_1033, r_NEW_OBJECT(l_Y_1031, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_1032).f_T))
{
r_CODE(r_INIT_CODE((l_V_1032).f_T, l_CN_1033));
}
r_CODE(r_ASSIGN_CODE((l_V_1032).f_T, l_CN_1033, (l_V_1032).f_C));
}
}
else
{
if ((!(l_V_1032).f_LVAL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R7 l_P_1034; memset(&l_P_1034, 0, sizeof l_P_1034);
S_R7(&l_P_1034, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_1032).f_T), l_P_1034, (l_V_1032).f_C));
S_R7(&((*(R13 *)rt_nil_check(l_Y_1031))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_1034), 0);
S_R7(&((*(R13 *)rt_nil_check(l_Y_1031))).f_FIELD, r_NO_TEXT(), 0);
((*(R13 *)rt_nil_check(l_Y_1031))).f_LEVEL = ((rt_int)0LL);
((*(R13 *)rt_nil_check(l_Y_1031))).f_OWNER = rt_neg(((rt_int)1LL));
}
}
r_DEFINE(l_Y_1031, ((*(R11 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R11 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R11 * p_S) { 
R11 * l_ARM_1035; memset(&l_ARM_1035, 0, sizeof l_ARM_1035);
l_ARM_1035 = ((*(R11 *)rt_nil_check(p_S))).f_B;
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R18 l_CH_1036; memset(&l_CH_1036, 0, sizeof l_CH_1036);
S_R18(&l_CH_1036, r_EXPR(((*(R11 *)rt_nil_check(p_S))).f_A, NULL), 0);
R14 * l_T_1037; memset(&l_T_1037, 0, sizeof l_T_1037);
l_T_1037 = r_REAL_TYPE((l_CH_1036).f_T);
R13 * l_BOUND_1038; memset(&l_BOUND_1038, 0, sizeof l_BOUND_1038);
l_BOUND_1038 = r_DISCRIMINATED(((*(R11 *)rt_nil_check(p_S))).f_A);
if (((((*(R14 *)rt_nil_check(l_T_1037))).f_KIND == g_T_STR) || (((*(R14 *)rt_nil_check(l_T_1037))).f_KIND == g_T_BITS)))
{
{
R7 l_TMP_1039; memset(&l_TMP_1039, 0, sizeof l_TMP_1039);
S_R7(&l_TMP_1039, r_NEW_NAME(rt_str("cs", 2)), 0);
R7 l_WORD_1040; memset(&l_WORD_1040, 0, sizeof l_WORD_1040);
S_R7(&l_WORD_1040, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_1039, (l_CH_1036).f_C));
for (;;) {
if ((l_ARM_1035 == NULL)) goto L_end1041;
{
{
R11 * l_L_1042; memset(&l_L_1042, 0, sizeof l_L_1042);
l_L_1042 = ((*(R11 *)rt_nil_check(l_ARM_1035))).f_A;
R7 l_COND_1043; memset(&l_COND_1043, 0, sizeof l_COND_1043);
S_R7(&l_COND_1043, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_1042 == NULL)) goto L_end1044;
{
S_R7(&l_COND_1043, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_1043, l_TMP_1039, (r_EXPR(l_L_1042, l_T_1037)).f_C), 0);
l_L_1042 = ((*(R11 *)rt_nil_check(l_L_1042))).f_NEXT;
}
} L_end1044: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_1040, l_COND_1043));
S_R7(&l_WORD_1040, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(l_ARM_1035))).f_B, ((*(R11 *)rt_nil_check(l_ARM_1035))).f_C);
}
l_ARM_1035 = ((*(R11 *)rt_nil_check(l_ARM_1035))).f_NEXT;
}
} L_end1041: ;
if ((!(((*(R11 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_1040, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(p_S))).f_C, ((*(R11 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if ((((!(((((*(R14 *)rt_nil_check(l_T_1037))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_T_1037))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R14 *)rt_nil_check(l_T_1037))).f_KIND == g_T_ENUM))) && (!(((*(R14 *)rt_nil_check(l_T_1037))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_1037));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_1036).f_C));
for (;;) {
if ((l_ARM_1035 == NULL)) goto L_end1045;
{
{
R11 * l_L_1046; memset(&l_L_1046, 0, sizeof l_L_1046);
l_L_1046 = ((*(R11 *)rt_nil_check(l_ARM_1035))).f_A;
R12 l_FIRST_1047; memset(&l_FIRST_1047, 0, sizeof l_FIRST_1047);
S_R12(&l_FIRST_1047, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_1046 == NULL)) goto L_end1048;
{
if ((((*(R11 *)rt_nil_check(l_L_1046))).f_KIND == g_N_RANGE))
{
{
R12 l_LO_1049; memset(&l_LO_1049, 0, sizeof l_LO_1049);
S_R12(&l_LO_1049, r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(l_L_1046))).f_A, l_T_1037), 0);
R12 l_HI_1050; memset(&l_HI_1050, 0, sizeof l_HI_1050);
S_R12(&l_HI_1050, r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(l_L_1046))).f_B, l_T_1037), 0);
rt_int l_A_1051; memset(&l_A_1051, 0, sizeof l_A_1051);
l_A_1051 = (l_LO_1049).f_V;
rt_int l_B_1052; memset(&l_B_1052, 0, sizeof l_B_1052);
l_B_1052 = (l_HI_1050).f_V;
if ((!(((l_LO_1049).f_OK && (l_HI_1050).f_OK))))
{
r_FAIL(((*(R11 *)rt_nil_check(l_L_1046))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R11 *)rt_nil_check(l_L_1046))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(l_L_1046))).f_IV == ((rt_int)3LL))))
{
l_A_1051 = rt_add(l_A_1051, ((rt_int)1LL));
}
if ((((*(R11 *)rt_nil_check(l_L_1046))).f_IV >= ((rt_int)2LL)))
{
l_B_1052 = rt_sub(l_B_1052, ((rt_int)1LL));
}
if ((!(l_FIRST_1047).f_OK))
{
S_R12(&l_FIRST_1047, r_SOME(l_A_1051), 0);
}
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_1051), r_NUM(l_B_1052)));
}
}
else
{
{
R12 l_M_1053; memset(&l_M_1053, 0, sizeof l_M_1053);
S_R12(&l_M_1053, r_ENUM_MANIFEST(l_L_1046, l_T_1037), 0);
if ((!(l_M_1053).f_OK))
{
r_FAIL(((*(R11 *)rt_nil_check(l_L_1046))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_1047).f_OK))
{
S_R12(&l_FIRST_1047, l_M_1053, 0);
}
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_1053).f_V)));
}
}
l_L_1046 = ((*(R11 *)rt_nil_check(l_L_1046))).f_NEXT;
}
} L_end1048: ;
if ((!(l_BOUND_1038 == NULL)))
{
{
R14 * l_SAVED_1054; memset(&l_SAVED_1054, 0, sizeof l_SAVED_1054);
l_SAVED_1054 = ((*(R13 *)rt_nil_check(l_BOUND_1038))).f_T;
((*(R13 *)rt_nil_check(l_BOUND_1038))).f_T = r_NARROW(l_SAVED_1054, ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_1047).f_V);
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(l_ARM_1035))).f_B, ((*(R11 *)rt_nil_check(l_ARM_1035))).f_C);
((*(R13 *)rt_nil_check(l_BOUND_1038))).f_T = l_SAVED_1054;
}
}
else
{
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(l_ARM_1035))).f_B, ((*(R11 *)rt_nil_check(l_ARM_1035))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_1035 = ((*(R11 *)rt_nil_check(l_ARM_1035))).f_NEXT;
}
} L_end1045: ;
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
return NULL;
}
if ((!(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
return NULL;
}
{
R13 * l_Y_1055; memset(&l_Y_1055, 0, sizeof l_Y_1055);
l_Y_1055 = r_LOOKUP(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_1055 == NULL))
{
return NULL;
}
if ((!(((*(R13 *)rt_nil_check(l_Y_1055))).f_KIND == g_Y_VAR)))
{
return NULL;
}
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R13 *)rt_nil_check(l_Y_1055))).f_T)))).f_KIND == g_T_REC)))
{
return NULL;
}
{
R15 * l_F_1056; memset(&l_F_1056, 0, sizeof l_F_1056);
l_F_1056 = r_FIND_FIELD(r_REAL_TYPE(((*(R13 *)rt_nil_check(l_Y_1055))).f_T), ((*(R11 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_1056 == NULL))
{
return NULL;
}
if ((!(((*(R15 *)rt_nil_check(l_F_1056))).f_KIND == ((rt_int)2LL))))
{
return NULL;
}
}
return l_Y_1055;
}
rt_raise(RT_X_INIT);
}
static R14 * r_NARROW(R14 * p_T, R7 p_TAGN, rt_int p_V) { 
R14 * l_N_1057; memset(&l_N_1057, 0, sizeof l_N_1057);
l_N_1057 = r_COPY_TYP(p_T);
R15 * l_F_1058; memset(&l_F_1058, 0, sizeof l_F_1058);
l_F_1058 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
R17 * l_A_1059; memset(&l_A_1059, 0, sizeof l_A_1059);
l_A_1059 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
R17 * l_HEAD_1060; memset(&l_HEAD_1060, 0, sizeof l_HEAD_1060);
l_HEAD_1060 = NULL;
R17 * l_TAIL_1061; memset(&l_TAIL_1061, 0, sizeof l_TAIL_1061);
l_TAIL_1061 = NULL;
for (;;) {
if ((l_F_1058 == NULL)) goto L_end1062;
{
if (((!(((*(R15 *)rt_nil_check(l_F_1058))).f_KIND == ((rt_int)0LL))) && (!(l_A_1059 == NULL))))
{
{
R17 * l_B_1063; memset(&l_B_1063, 0, sizeof l_B_1063);
l_B_1063 = ((R17 *)rt_alloc(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_B_1063)), (*(R17 *)rt_nil_check(l_A_1059)), 0);
((*(R17 *)rt_nil_check(l_B_1063))).f_NEXT = NULL;
if (r_TEQ(((*(R15 *)rt_nil_check(l_F_1058))).f_NAME, p_TAGN))
{
((*(R17 *)rt_nil_check(l_B_1063))).f_ANYARG = 0;
S_R12(&((*(R17 *)rt_nil_check(l_B_1063))).f_MLO, r_SOME(p_V), 0);
S_R7(&((*(R17 *)rt_nil_check(l_B_1063))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_1061 == NULL))
{
l_HEAD_1060 = l_B_1063;
}
else
{
((*(R17 *)rt_nil_check(l_TAIL_1061))).f_NEXT = l_B_1063;
}
l_TAIL_1061 = l_B_1063;
}
l_A_1059 = ((*(R17 *)rt_nil_check(l_A_1059))).f_NEXT;
}
l_F_1058 = ((*(R15 *)rt_nil_check(l_F_1058))).f_NEXT;
}
} L_end1062: ;
((*(R14 *)rt_nil_check(l_N_1057))).f_ARGS = l_HEAD_1060;
return l_N_1057;
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R11 * p_S) { 
R11 * l_ARM_1064; memset(&l_ARM_1064, 0, sizeof l_ARM_1064);
l_ARM_1064 = ((*(R11 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_1065; memset(&l_SAVED_1065, 0, sizeof l_SAVED_1065);
l_SAVED_1065 = ((*(R22 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_1064 == NULL)) goto L_end1066;
{
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(l_ARM_1064))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R22 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(l_ARM_1064))).f_B, ((*(R11 *)rt_nil_check(l_ARM_1064))).f_C);
((*(R22 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_1065;
return;
}
l_ARM_1064 = ((*(R11 *)rt_nil_check(l_ARM_1064))).f_NEXT;
}
} L_end1066: ;
if ((!(((*(R11 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R22 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(p_S))).f_C, ((*(R11 *)rt_nil_check(p_S))).f_D);
((*(R22 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_1065;
}
}
static R14 * r_PATHS_TYPE(void) { 
R14 * l_T_1067; memset(&l_T_1067, 0, sizeof l_T_1067);
l_T_1067 = r_NEW_TYP(g_T_PATHS);
S_R7(&((*(R14 *)rt_nil_check(l_T_1067))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
return l_T_1067;
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R11 * p_S) { 
R7 l_TD_1068; memset(&l_TD_1068, 0, sizeof l_TD_1068);
S_R7(&l_TD_1068, r_NEW_NAME(rt_str("td", 2)), 0);
R11 * l_P_1069; memset(&l_P_1069, 0, sizeof l_P_1069);
l_P_1069 = ((*(R11 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_1069 == NULL)) goto L_end1070;
{
{
R13 * l_Y_1071; memset(&l_Y_1071, 0, sizeof l_Y_1071);
l_Y_1071 = r_NEW_SYM(g_Y_PATH, ((*(R11 *)rt_nil_check(l_P_1069))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_1071))).f_T = r_PATHS_TYPE();
((*(R13 *)rt_nil_check(l_Y_1071))).f_DECL = l_P_1069;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_1071, rt_str("_path", 5))));
((*(R13 *)rt_nil_check(l_Y_1071))).f_INPUT = 1;
r_DEFINE(l_Y_1071, ((*(R11 *)rt_nil_check(l_P_1069))).f_LINE);
}
l_P_1069 = ((*(R11 *)rt_nil_check(l_P_1069))).f_NEXT;
}
} L_end1070: ;
r_CODE(r_FMT1(rt_str("rt_taskdecl @ = {0};", 20), l_TD_1068));
r_CODES(rt_str("rt_b_par_begin();", 17));
l_P_1069 = ((*(R11 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_P_1069 == NULL)) goto L_end1072;
{
r_ACTIVATE_PATH(l_P_1069, l_TD_1068);
l_P_1069 = ((*(R11 *)rt_nil_check(l_P_1069))).f_NEXT;
}
} L_end1072: ;
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_1068));
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_ACTIVATE_PATH(R11 * p_P, R7 p_TD) { 
R7 l_FN_1073; memset(&l_FN_1073, 0, sizeof l_FN_1073);
S_R7(&l_FN_1073, r_NEW_NAME(rt_str("path_", 5)), 0);
R7 l_FT_1074; memset(&l_FT_1074, 0, sizeof l_FT_1074);
S_R7(&l_FT_1074, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R13 * l_Y_1075; memset(&l_Y_1075, 0, sizeof l_Y_1075);
l_Y_1075 = r_LOOKUP(((*(R11 *)rt_nil_check(p_P))).f_NAME);
R7 l_H_1076; memset(&l_H_1076, 0, sizeof l_H_1076);
S_R7(&l_H_1076, r_OBJ_ACCESS(l_Y_1075), 0);
R7 l_IT_1077; memset(&l_IT_1077, 0, sizeof l_IT_1077);
S_R7(&l_IT_1077, r_NEW_NAME(rt_str("pi", 2)), 0);
R7 l_PRIO_1078; memset(&l_PRIO_1078, 0, sizeof l_PRIO_1078);
S_R7(&l_PRIO_1078, r_MK(rt_str("0", 1)), 0);
R7 l_START_1079; memset(&l_START_1079, 0, sizeof l_START_1079);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_1074, l_FT_1074));
if ((!(((*(R11 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R7(&l_PRIO_1078, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R11 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R11 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R11 * l_R_1080; memset(&l_R_1080, 0, sizeof l_R_1080);
l_R_1080 = ((*(R11 *)rt_nil_check(p_P))).f_A;
R7 l_LO_1081; memset(&l_LO_1081, 0, sizeof l_LO_1081);
S_R7(&l_LO_1081, r_INT_EXPR(((*(R11 *)rt_nil_check(l_R_1080))).f_A), 0);
R7 l_HI_1082; memset(&l_HI_1082, 0, sizeof l_HI_1082);
S_R7(&l_HI_1082, r_INT_EXPR(((*(R11 *)rt_nil_check(l_R_1080))).f_B), 0);
if (((((*(R11 *)rt_nil_check(l_R_1080))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(l_R_1080))).f_IV == ((rt_int)3LL))))
{
S_R7(&l_LO_1081, r_FMT1(rt_str("(@) + 1", 7), l_LO_1081), 0);
}
if ((((*(R11 *)rt_nil_check(l_R_1080))).f_IV >= ((rt_int)2LL)))
{
S_R7(&l_HI_1082, r_FMT1(rt_str("(@) - 1", 7), l_HI_1082), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_1076, l_LO_1081, l_HI_1082));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_1077, l_H_1076, l_IT_1077, l_H_1076), l_IT_1077));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_1077));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_1074, r_UP_FRAME()));
if ((((*(R11 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_NAME, l_IT_1077));
}
if ((!(((*(R11 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R18 l_V_1083; memset(&l_V_1083, 0, sizeof l_V_1083);
S_R18(&l_V_1083, r_EXPR(((*(R11 *)rt_nil_check(p_P))).f_D, NULL), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1083).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_1083).f_C));
}
}
S_R7(&l_START_1079, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_1076, l_IT_1077, l_FN_1073, p_TD), 0);
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_1079, p_TD, l_PRIO_1078));
r_PATH_BODY(p_P, l_FN_1073, l_FT_1074);
}
static R7 r_UP_FRAME(void) { 
if ((((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
return r_MK(rt_str("NULL", 4));
}
return r_MK(rt_str("F", 1));
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R11 * p_P, R7 p_FN, R7 p_FT) { 
R8 l_SAVED_CODE_1084; memset(&l_SAVED_CODE_1084, 0, sizeof l_SAVED_CODE_1084);
S_R8(&l_SAVED_CODE_1084, ((*(R22 *)rt_nil_check(g_W))).f_CODE, 0);
R21 * l_SAVED_CTXS_1085; memset(&l_SAVED_CTXS_1085, 0, sizeof l_SAVED_CTXS_1085);
l_SAVED_CTXS_1085 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
R27 * l_OUTER_1086; memset(&l_OUTER_1086, 0, sizeof l_OUTER_1086);
l_OUTER_1086 = ((*(R22 *)rt_nil_check(g_W))).f_CS;
R11 * l_H_1087; memset(&l_H_1087, 0, sizeof l_H_1087);
l_H_1087 = ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_A;
R27 * l_CS_1088; memset(&l_CS_1088, 0, sizeof l_CS_1088);
l_CS_1088 = ((R27 *)rt_alloc(sizeof (R27)));
R7 l_UPT_1089; memset(&l_UPT_1089, 0, sizeof l_UPT_1089);
S_R7(&l_UPT_1089, r_MK(rt_str("void", 4)), 0);
if ((((*(R27 *)rt_nil_check(l_OUTER_1086))).f_LEVEL > ((rt_int)0LL)))
{
S_R7(&l_UPT_1089, ((*(R27 *)rt_nil_check(l_OUTER_1086))).f_FTYPE, 0);
}
S_R27(&(*(R27 *)rt_nil_check(l_CS_1088)), ({ R27 rc1090; memset(&rc1090, 0, sizeof rc1090);  rc1090.f_LEVEL = rt_add(((*(R27 *)rt_nil_check(l_OUTER_1086))).f_LEVEL, ((rt_int)1LL)); rc1090.f_R = NULL; rc1090.f_FRAMED = 1; S_R7(&rc1090.f_FTYPE, p_FT, 0); S_R8(&rc1090.f_FIELDS, ({ R8 rc1091; memset(&rc1091, 0, sizeof rc1091);  rc1091.f_HEAD = NULL; rc1091.f_TAIL = NULL; rc1091; }), 0); rc1090.f_UP = l_OUTER_1086; rc1090.f_IMPORTS = ((*(R11 *)rt_nil_check(l_H_1087))).f_B; rc1090.f_SIGNALS = ((*(R11 *)rt_nil_check(l_H_1087))).f_A; rc1090.f_RESULT = NULL; rc1090.f_IS_PATH = 1; rc1090; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_1089), &((*(R27 *)rt_nil_check(l_CS_1088))).f_FIELDS);
((*(R22 *)rt_nil_check(g_W))).f_CS = l_CS_1088;
S_R8(&((*(R22 *)rt_nil_check(g_W))).f_CODE, ({ R8 rc1092; memset(&rc1092, 0, sizeof rc1092);  rc1092.f_HEAD = NULL; rc1092.f_TAIL = NULL; rc1092; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R11 *)rt_nil_check(l_H_1087))).f_B, ((*(R11 *)rt_nil_check(l_H_1087))).f_A, ((*(R11 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R11 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R13 * l_I_1093; memset(&l_I_1093, 0, sizeof l_I_1093);
l_I_1093 = r_NEW_SYM(g_Y_CONST, ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R13 *)rt_nil_check(l_I_1093))).f_T = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
((*(R13 *)rt_nil_check(l_I_1093))).f_INPUT = 1;
S_R7(&((*(R13 *)rt_nil_check(l_I_1093))).f_FIELD, r_FMT1(rt_str("l_@", 3), ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_NAME), 0);
S_R7(&((*(R13 *)rt_nil_check(l_I_1093))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_NAME), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_NAME), &((*(R27 *)rt_nil_check(l_CS_1088))).f_FIELDS);
r_DEFINE(l_I_1093, ((*(R11 *)rt_nil_check(p_P))).f_LINE);
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
R11 * l_L_1094; memset(&l_L_1094, 0, sizeof l_L_1094);
l_L_1094 = ((*(R11 *)rt_nil_check(l_H_1087))).f_A;
R7 l_C_1095; memset(&l_C_1095, 0, sizeof l_C_1095);
S_R7(&l_C_1095, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_1094 == NULL)) goto L_end1096;
{
S_R7(&l_C_1095, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_1095, r_EXC_NAME(((*(R11 *)rt_nil_check(l_L_1094))).f_NAME)), 0);
l_L_1094 = ((*(R11 *)rt_nil_check(l_L_1094))).f_NEXT;
}
} L_end1096: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_1095));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R27 *)rt_nil_check(l_CS_1088))).f_FIELDS)));
((*(R22 *)rt_nil_check(g_W))).f_CS = l_OUTER_1086;
S_R8(&((*(R22 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1084, 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_1085;
}
static R7 r_JOIN_BUF(R8 p_B) { 
R9 * l_C_1097; memset(&l_C_1097, 0, sizeof l_C_1097);
l_C_1097 = (p_B).f_HEAD;
R7 l_R_1098; memset(&l_R_1098, 0, sizeof l_R_1098);
S_R7(&l_R_1098, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_1097 == NULL)) goto L_end1099;
{
S_R7(&l_R_1098, r_CAT(l_R_1098, ((*(R9 *)rt_nil_check(l_C_1097))).f_T), 0);
l_C_1097 = ((*(R9 *)rt_nil_check(l_C_1097))).f_NEXT;
}
} L_end1099: ;
return l_R_1098;
rt_raise(RT_X_INIT);
}
static R7 r_PATH_REF(R11 * p_E) { 
R7 l_NAME_1100; memset(&l_NAME_1100, 0, sizeof l_NAME_1100);
S_R7(&l_NAME_1100, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
R7 l_SUB_1101; memset(&l_SUB_1101, 0, sizeof l_SUB_1101);
S_R7(&l_SUB_1101, r_MK(rt_str("0", 1)), 0);
if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R11 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R7(&l_SUB_1101, r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R13 * l_Y_1102; memset(&l_Y_1102, 0, sizeof l_Y_1102);
l_Y_1102 = r_LOOKUP(l_NAME_1100);
if ((l_Y_1102 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_1100);
}
if ((!(((*(R13 *)rt_nil_check(l_Y_1102))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_1100);
}
if (((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_1102))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
return r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_1102), l_SUB_1101);
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
R7 l_NAME_1103; memset(&l_NAME_1103, 0, sizeof l_NAME_1103);
S_R7(&l_NAME_1103, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1104; memset(&l_LINE_1104, 0, sizeof l_LINE_1104);
l_LINE_1104 = ((*(R11 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_1103, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R18 l_V_1105; memset(&l_V_1105, 0, sizeof l_V_1105);
S_R18(&l_V_1105, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1105).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_1104, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
return r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_1105).f_C, r_NUM(((*(R14 *)rt_nil_check((l_V_1105).f_T))).f_SCALE)), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
}
}
else if (r_TEQS(l_NAME_1103, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
return r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A)), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
}
return r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A)), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
}
else if (r_TEQS(l_NAME_1103, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R11 *)rt_nil_check(p_E))).f_A == NULL))
{
return r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
}
return r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R11 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
}
else if ((r_TEQS(l_NAME_1103, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_1103, rt_str("RELEASE", 7))))
{
if ((((!(((*(R11 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R11 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R11 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_1104, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_1103);
}
{
R18 l_V_1106; memset(&l_V_1106, 0, sizeof l_V_1106);
S_R18(&l_V_1106, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1106).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_1104, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_1106).f_LVAL))
{
r_FAIL(l_LINE_1104, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_1103, rt_str("REQUEST", 7)))
{
return r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_1106).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
}
return r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_1106).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
}
}
else if (r_TEQS(l_NAME_1103, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_1104);
return r_START_IO_CALL(p_E);
}
r_FAILT(l_LINE_1104, rt_str("unknown routine ", 16), l_NAME_1103);
rt_raise(RT_X_INIT);
}
static R18 r_START_IO_CALL(R11 * p_E) { 
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("this implementation has no devices for START_IO yet", 51));
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R11 * p_IMPORTS, R11 * p_SIGNALS, R7 p_NAME) { 
R28 * l_I_1107; memset(&l_I_1107, 0, sizeof l_I_1107);
l_I_1107 = ((R28 *)rt_alloc(sizeof (R28)));
((*(R22 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R22 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R28(&(*(R28 *)rt_nil_check(l_I_1107)), ({ R28 rc1108; memset(&rc1108, 0, sizeof rc1108);  rc1108.f_ID = ((*(R22 *)rt_nil_check(g_W))).f_NSCOPES; rc1108.f_IMPORTS = p_IMPORTS; rc1108.f_SIGNALS = p_SIGNALS; S_R7(&rc1108.f_NAME, p_NAME, 0); rc1108.f_UP = ((*(R22 *)rt_nil_check(g_W))).f_IS; rc1108; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_IS = l_I_1107;
}
static void r_LEAVE_ISCOPE(void) { 
((*(R22 *)rt_nil_check(g_W))).f_IS = ((*(R28 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R7 r_ROUTINE_CNAME(R7 p_NAME) { 
R7 l_BASE_1109; memset(&l_BASE_1109, 0, sizeof l_BASE_1109);
S_R7(&l_BASE_1109, r_FMT1(rt_str("r_@", 3), p_NAME), 0);
rstr l_S_1110; memset(&l_S_1110, 0, sizeof l_S_1110);
l_S_1110 = rt_str_new((l_BASE_1109).f_LEN);
rt_b_assign(&l_S_1110, r_STR(l_BASE_1109, (l_BASE_1109).f_LEN));
R11 * l_N_1111; memset(&l_N_1111, 0, sizeof l_N_1111);
l_N_1111 = ((*(R22 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it1113_lo = ((rt_int)0LL), it1113_hi = rt_sub((l_BASE_1109).f_LEN, ((rt_int)1LL));
for (rt_int it1113 = it1113_lo; it1113 <= it1113_hi; it1113++) {
{
if (rt_b_eq(rt_b_slice(l_S_1110, it1113, it1113), rt_str("$", 1)))
{
S_R7(&l_BASE_1109, r_MK(rt_str_cat(rt_str_cat(rt_b_slice(l_S_1110, ((rt_int)0LL), rt_sub(it1113, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_1110, rt_add(it1113, ((rt_int)1LL)), rt_sub((l_BASE_1109).f_LEN, ((rt_int)1LL))))), 0);
}
}
} } L_end1112: ;
for (;;) {
if ((l_N_1111 == NULL)) goto L_end1114;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_N_1111))).f_NAME, l_BASE_1109))
{
return r_FMT2(rt_str("@_@", 3), l_BASE_1109, r_NEW_NAME(rt_str("", 0)));
}
l_N_1111 = ((*(R11 *)rt_nil_check(l_N_1111))).f_NEXT;
}
} L_end1114: ;
l_N_1111 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R7(&((*(R11 *)rt_nil_check(l_N_1111))).f_NAME, l_BASE_1109, 0);
((*(R11 *)rt_nil_check(l_N_1111))).f_NEXT = ((*(R22 *)rt_nil_check(g_W))).f_CNAMES;
((*(R22 *)rt_nil_check(g_W))).f_CNAMES = l_N_1111;
return l_BASE_1109;
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R11 * p_B) { 
if ((p_B == NULL))
{
return 0;
}
if ((!(((*(R11 *)rt_nil_check(p_B))).f_C == NULL)))
{
return 1;
}
return r_HAS_HANDLERS(((*(R11 *)rt_nil_check(p_B))).f_B);
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R11 * p_S0) { 
R11 * l_S_1115; memset(&l_S_1115, 0, sizeof l_S_1115);
l_S_1115 = p_S0;
for (;;) {
if ((l_S_1115 == NULL)) goto L_end1116;
{
if (((((*(R11 *)rt_nil_check(l_S_1115))).f_KIND == g_N_EXCEPT) || (((*(R11 *)rt_nil_check(l_S_1115))).f_KIND == g_N_PAR)))
{
return 1;
}
if (((((*(R11 *)rt_nil_check(l_S_1115))).f_KIND == g_N_LABELED) || (((*(R11 *)rt_nil_check(l_S_1115))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R11 *)rt_nil_check(l_S_1115))).f_A) || r_HAS_HANDLERS(((*(R11 *)rt_nil_check(l_S_1115))).f_B)))
{
return 1;
}
}
else if ((((*(R11 *)rt_nil_check(l_S_1115))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_S_1115))).f_A))).f_B))
{
return 1;
}
}
else if (((((*(R11 *)rt_nil_check(l_S_1115))).f_KIND == g_N_LOOP) || (((*(R11 *)rt_nil_check(l_S_1115))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_S_1115))).f_B))).f_B))
{
return 1;
}
}
else if (((((*(R11 *)rt_nil_check(l_S_1115))).f_KIND == g_N_IF) || (((*(R11 *)rt_nil_check(l_S_1115))).f_KIND == g_N_CASE)))
{
{
R11 * l_A_1117; memset(&l_A_1117, 0, sizeof l_A_1117);
l_A_1117 = ((*(R11 *)rt_nil_check(l_S_1115))).f_A;
if ((((*(R11 *)rt_nil_check(l_S_1115))).f_KIND == g_N_CASE))
{
l_A_1117 = ((*(R11 *)rt_nil_check(l_S_1115))).f_B;
if ((!(((*(R11 *)rt_nil_check(l_S_1115))).f_D == NULL)))
{
return 1;
}
if ((!(((*(R11 *)rt_nil_check(l_S_1115))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_S_1115))).f_C))).f_B))
{
return 1;
}
}
}
else if ((!(((*(R11 *)rt_nil_check(l_S_1115))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_S_1115))).f_B))).f_B))
{
return 1;
}
}
for (;;) {
if ((l_A_1117 == NULL)) goto L_end1118;
{
if ((!(((*(R11 *)rt_nil_check(l_A_1117))).f_C == NULL)))
{
return 1;
}
if (r_HAS_HANDLERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_1117))).f_B))).f_B))
{
return 1;
}
l_A_1117 = ((*(R11 *)rt_nil_check(l_A_1117))).f_NEXT;
}
} L_end1118: ;
}
}
l_S_1115 = ((*(R11 *)rt_nil_check(l_S_1115))).f_NEXT;
}
} L_end1116: ;
return 0;
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R11 * p_R) { 
R13 * l_Y_1119; memset(&l_Y_1119, 0, sizeof l_Y_1119);
l_Y_1119 = r_NEW_SYM(g_Y_ROUTINE, ((*(R11 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_1120; memset(&l_S_1120, 0, sizeof l_S_1120);
l_S_1120 = rt_str_new((((*(R11 *)rt_nil_check(p_R))).f_NAME).f_LEN);
rt_b_assign(&l_S_1120, r_STR(((*(R11 *)rt_nil_check(p_R))).f_NAME, (((*(R11 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R13 *)rt_nil_check(l_Y_1119))).f_DECL = p_R;
S_R7(&((*(R13 *)rt_nil_check(l_Y_1119))).f_ACCESS, r_ROUTINE_CNAME(((*(R11 *)rt_nil_check(p_R))).f_NAME), 0);
((*(R13 *)rt_nil_check(l_Y_1119))).f_FRAMED = r_NEEDS_FRAME(((*(R11 *)rt_nil_check(p_R))).f_C);
if ((((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R7(&((*(R13 *)rt_nil_check(l_Y_1119))).f_FIELD, ((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_1119, ((*(R11 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it1122_lo = ((rt_int)1LL), it1122_hi = rt_sub((((*(R11 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it1122 = it1122_lo; it1122 <= it1122_hi; it1122++) {
{
if (rt_b_eq(rt_b_slice(l_S_1120, it1122, it1122), rt_str("$", 1)))
{
S_R7(&((*(R13 *)rt_nil_check(l_Y_1119))).f_PREFIX, r_MKN(rt_b_slice(l_S_1120, ((rt_int)0LL), rt_sub(it1122, ((rt_int)1LL)))), 0);
{
R13 * l_SHORT_1123; memset(&l_SHORT_1123, 0, sizeof l_SHORT_1123);
l_SHORT_1123 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_1120, rt_add(it1122, ((rt_int)1LL)), rt_sub((((*(R11 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R13 *)rt_nil_check(l_SHORT_1123))).f_ORIG = l_Y_1119;
S_R7(&((*(R13 *)rt_nil_check(l_SHORT_1123))).f_PREFIX, ((*(R13 *)rt_nil_check(l_Y_1119))).f_PREFIX, 0);
((*(R13 *)rt_nil_check(l_SHORT_1123))).f_DECL = p_R;
r_DEFINE(l_SHORT_1123, ((*(R11 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end1121;
}
}
} } L_end1121: ;
}
static void r_DECLARE_MEMBERS(R11 * p_RS) { 
R11 * l_R_1124; memset(&l_R_1124, 0, sizeof l_R_1124);
l_R_1124 = p_RS;
for (;;) {
if ((l_R_1124 == NULL)) goto L_end1125;
{
if ((((*(R11 *)rt_nil_check(l_R_1124))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_1124);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_1124);
}
l_R_1124 = ((*(R11 *)rt_nil_check(l_R_1124))).f_NEXT;
}
} L_end1125: ;
}
static void r_ROUTINE_HEADERS(R11 * p_RS) { 
R11 * l_R_1126; memset(&l_R_1126, 0, sizeof l_R_1126);
l_R_1126 = p_RS;
for (;;) {
if ((l_R_1126 == NULL)) goto L_end1127;
{
if ((((*(R11 *)rt_nil_check(l_R_1126))).f_KIND == g_N_MODULE))
{
{
R13 * l_M_1128; memset(&l_M_1128, 0, sizeof l_M_1128);
l_M_1128 = r_FIND_DECL(l_R_1126);
r_ENTER_MODULE(l_M_1128);
r_ROUTINE_HEADERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_1126))).f_C))).f_C);
r_LEAVE_MODULE(l_M_1128);
}
}
else
{
{
R13 * l_Y_1129; memset(&l_Y_1129, 0, sizeof l_Y_1129);
l_Y_1129 = r_FIND_DECL(l_R_1126);
r_ROUTINE_HEADER(l_Y_1129);
}
}
l_R_1126 = ((*(R11 *)rt_nil_check(l_R_1126))).f_NEXT;
}
} L_end1127: ;
}
static R13 * r_FIND_DECL(R11 * p_D) { 
R13 * l_Y_1130; memset(&l_Y_1130, 0, sizeof l_Y_1130);
l_Y_1130 = r_LOOKUP(((*(R11 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_1130 == NULL)) goto L_end1131;
{
if (((((*(R13 *)rt_nil_check(l_Y_1130))).f_DECL == p_D) && (((*(R13 *)rt_nil_check(l_Y_1130))).f_ORIG == NULL)))
{
return l_Y_1130;
}
l_Y_1130 = r_LOOKUP_NEXT(l_Y_1130);
}
} L_end1131: ;
r_FAILT(((*(R11 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R11 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R11 * p_DECLS) { 
R11 * l_D_1132; memset(&l_D_1132, 0, sizeof l_D_1132);
l_D_1132 = p_DECLS;
for (;;) {
if ((l_D_1132 == NULL)) goto L_end1133;
{
if (((((*(R11 *)rt_nil_check(l_D_1132))).f_KIND == g_N_TYPE) && (((*(R11 *)rt_nil_check(l_D_1132))).f_A == NULL)))
{
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_D_1132))).f_B))).f_KIND == g_TS_ENUM))
{
{
R13 * l_Y_1134; memset(&l_Y_1134, 0, sizeof l_Y_1134);
l_Y_1134 = r_FIND_DECL(l_D_1132);
R14 * l_T_1135; memset(&l_T_1135, 0, sizeof l_T_1135);
l_T_1135 = r_RESOLVE_USER(r_TYPE_REF(l_D_1132));
}
}
}
l_D_1132 = ((*(R11 *)rt_nil_check(l_D_1132))).f_NEXT;
}
} L_end1133: ;
}
static R11 * r_TYPE_REF(R11 * p_D) { 
R11 * l_TS_1136; memset(&l_TS_1136, 0, sizeof l_TS_1136);
l_TS_1136 = r_NEW_NODE(g_TS_NAME, ((*(R11 *)rt_nil_check(p_D))).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_TS_1136))).f_NAME, ((*(R11 *)rt_nil_check(p_D))).f_NAME, 0);
return l_TS_1136;
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R11 * p_M) { 
R13 * l_Y_1137; memset(&l_Y_1137, 0, sizeof l_Y_1137);
l_Y_1137 = r_NEW_SYM(g_Y_MODULE, ((*(R11 *)rt_nil_check(p_M))).f_NAME);
R13 * l_SAVED_1138; memset(&l_SAVED_1138, 0, sizeof l_SAVED_1138);
l_SAVED_1138 = ((*(R22 *)rt_nil_check(g_W))).f_MODL;
((*(R13 *)rt_nil_check(l_Y_1137))).f_DECL = p_M;
r_DEFINE(l_Y_1137, ((*(R11 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R13 * l_MARK_1139; memset(&l_MARK_1139, 0, sizeof l_MARK_1139);
l_MARK_1139 = ((*(R22 *)rt_nil_check(g_W))).f_SCOPE;
((*(R22 *)rt_nil_check(g_W))).f_MODL = l_Y_1137;
r_DECLARE_TYPES(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R13 *)rt_nil_check(l_Y_1137))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_1139);
}
((*(R22 *)rt_nil_check(g_W))).f_MODL = l_SAVED_1138;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_1137);
}
static void r_ENTER_MODULE(R13 * p_M) { 
R13 * l_Y_1140; memset(&l_Y_1140, 0, sizeof l_Y_1140);
l_Y_1140 = ((*(R13 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_1140 == NULL)) goto L_end1141;
{
{
R13 * l_NEXT_1142; memset(&l_NEXT_1142, 0, sizeof l_NEXT_1142);
l_NEXT_1142 = ((*(R13 *)rt_nil_check(l_Y_1140))).f_SNEXT;
r_DEFINE(l_Y_1140, ((rt_int)0LL));
l_Y_1140 = l_NEXT_1142;
}
}
} L_end1141: ;
((*(R13 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R13 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R13 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R13 *)rt_nil_check(p_M))).f_SAVED = ((*(R22 *)rt_nil_check(g_W))).f_MODL;
((*(R22 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R13 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R13 * p_M) { 
R13 * l_MARK_1143; memset(&l_MARK_1143, 0, sizeof l_MARK_1143);
l_MARK_1143 = ((*(R22 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R22 *)rt_nil_check(g_W))).f_MODL = ((*(R13 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_1143 == NULL)) goto L_end1144;
{
if ((((*(R13 *)rt_nil_check(l_MARK_1143))).f_DEPTH < ((*(R22 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end1144;
}
l_MARK_1143 = ((*(R13 *)rt_nil_check(l_MARK_1143))).f_SNEXT;
}
} L_end1144: ;
((*(R13 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_1143);
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
R11 * l_D_1145; memset(&l_D_1145, 0, sizeof l_D_1145);
l_D_1145 = ((*(R13 *)rt_nil_check(p_M))).f_DECL;
R13 * l_Y_1146; memset(&l_Y_1146, 0, sizeof l_Y_1146);
l_Y_1146 = ((*(R13 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_1146 == NULL)) goto L_end1147;
{
if (r_EXPORTED_BY(l_D_1145, l_Y_1146))
{
((*(R13 *)rt_nil_check(l_Y_1146))).f_EXPORTED = 1;
{
R13 * l_A_1148; memset(&l_A_1148, 0, sizeof l_A_1148);
l_A_1148 = r_NEW_SYM(((*(R13 *)rt_nil_check(l_Y_1146))).f_KIND, ((*(R13 *)rt_nil_check(l_Y_1146))).f_NAME);
S_R13(&(*(R13 *)rt_nil_check(l_A_1148)), (*(R13 *)rt_nil_check(l_Y_1146)), 0);
((*(R13 *)rt_nil_check(l_A_1148))).f_ORIG = r_ORIGINAL(l_Y_1146);
((*(R13 *)rt_nil_check(l_A_1148))).f_DEPTH = ((*(R22 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_1148, ((*(R11 *)rt_nil_check(l_D_1145))).f_LINE);
}
}
l_Y_1146 = ((*(R13 *)rt_nil_check(l_Y_1146))).f_SNEXT;
}
} L_end1147: ;
{
R11 * l_X_1149; memset(&l_X_1149, 0, sizeof l_X_1149);
l_X_1149 = ((*(R11 *)rt_nil_check(l_D_1145))).f_B;
for (;;) {
if ((l_X_1149 == NULL)) goto L_end1150;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R11 *)rt_nil_check(l_X_1149))).f_NAME)))
{
r_FAILT(((*(R11 *)rt_nil_check(l_X_1149))).f_LINE, rt_str("the module does not declare ", 28), ((*(R11 *)rt_nil_check(l_X_1149))).f_NAME);
}
l_X_1149 = ((*(R11 *)rt_nil_check(l_X_1149))).f_NEXT;
}
} L_end1150: ;
}
}
static rt_int r_MEMBER_NAMED(R13 * p_M, R7 p_NAME) { 
R13 * l_Y_1151; memset(&l_Y_1151, 0, sizeof l_Y_1151);
l_Y_1151 = ((*(R13 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_1151 == NULL)) goto L_end1152;
{
if ((r_TEQ(((*(R13 *)rt_nil_check(l_Y_1151))).f_NAME, p_NAME) || r_TEQ(((*(R13 *)rt_nil_check(l_Y_1151))).f_PREFIX, p_NAME)))
{
return 1;
}
l_Y_1151 = ((*(R13 *)rt_nil_check(l_Y_1151))).f_SNEXT;
}
} L_end1152: ;
return 0;
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R11 * p_D, R13 * p_Y) { 
R11 * l_X_1153; memset(&l_X_1153, 0, sizeof l_X_1153);
l_X_1153 = ((*(R11 *)rt_nil_check(p_D))).f_B;
if ((((((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
return 0;
}
if ((((*(R11 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
return ((((((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
}
for (;;) {
if ((l_X_1153 == NULL)) goto L_end1154;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_X_1153))).f_NAME, ((*(R13 *)rt_nil_check(p_Y))).f_NAME))
{
return 1;
}
if (((((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R11 *)rt_nil_check(l_X_1153))).f_NAME, ((*(R13 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R11 *)rt_nil_check(l_X_1153))).f_A == NULL))
{
return 1;
}
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(l_X_1153))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
return 1;
}
}
if ((((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R13 * l_T_1155; memset(&l_T_1155, 0, sizeof l_T_1155);
l_T_1155 = r_ORIG_LOOKUP_MEMBER(((*(R11 *)rt_nil_check(l_X_1153))).f_NAME, p_Y);
if ((!(l_T_1155 == NULL)))
{
return 1;
}
}
}
l_X_1153 = ((*(R11 *)rt_nil_check(l_X_1153))).f_NEXT;
}
} L_end1154: ;
return 0;
rt_raise(RT_X_INIT);
}
static R13 * r_ORIG_LOOKUP_MEMBER(R7 p_NAME, R13 * p_Y) { 
R13 * l_M_1156; memset(&l_M_1156, 0, sizeof l_M_1156);
l_M_1156 = ((*(R13 *)rt_nil_check(p_Y))).f_MODL;
R13 * l_Z_1157; memset(&l_Z_1157, 0, sizeof l_Z_1157);
if ((l_M_1156 == NULL))
{
return NULL;
}
l_Z_1157 = ((*(R13 *)rt_nil_check(l_M_1156))).f_MEMBERS;
for (;;) {
if ((l_Z_1157 == NULL)) goto L_end1158;
{
if (((((*(R13 *)rt_nil_check(l_Z_1157))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R13 *)rt_nil_check(l_Z_1157))).f_NAME, p_NAME)))
{
if ((!(((*(R13 *)rt_nil_check(l_Z_1157))).f_T == NULL)))
{
if ((((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Z_1157))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Z_1157))).f_T))).f_BASE == ((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
return l_Z_1157;
}
}
}
}
l_Z_1157 = ((*(R13 *)rt_nil_check(l_Z_1157))).f_SNEXT;
}
} L_end1158: ;
return NULL;
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R11 * p_RS) { 
R11 * l_R_1159; memset(&l_R_1159, 0, sizeof l_R_1159);
l_R_1159 = p_RS;
for (;;) {
if ((l_R_1159 == NULL)) goto L_end1160;
{
if ((((*(R11 *)rt_nil_check(l_R_1159))).f_KIND == g_N_MODULE))
{
{
R13 * l_M_1161; memset(&l_M_1161, 0, sizeof l_M_1161);
l_M_1161 = r_FIND_DECL(l_R_1159);
R11 * l_D_1162; memset(&l_D_1162, 0, sizeof l_D_1162);
l_D_1162 = ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_1159))).f_C))).f_A;
r_ENTER_MODULE(l_M_1161);
for (;;) {
if ((l_D_1162 == NULL)) goto L_end1163;
{
if (((((*(R11 *)rt_nil_check(l_D_1162))).f_KIND == g_N_VAR) || (((*(R11 *)rt_nil_check(l_D_1162))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_1162);
}
l_D_1162 = ((*(R11 *)rt_nil_check(l_D_1162))).f_NEXT;
}
} L_end1163: ;
r_MODULE_DATA(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_1159))).f_C))).f_C);
r_ROUTINE_USES(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_1159))).f_C))).f_C);
r_LEAVE_MODULE(l_M_1161);
}
}
l_R_1159 = ((*(R11 *)rt_nil_check(l_R_1159))).f_NEXT;
}
} L_end1160: ;
}
static void r_ROUTINE_BODIES(R11 * p_RS) { 
R11 * l_R_1164; memset(&l_R_1164, 0, sizeof l_R_1164);
l_R_1164 = p_RS;
for (;;) {
if ((l_R_1164 == NULL)) goto L_end1165;
{
if ((((*(R11 *)rt_nil_check(l_R_1164))).f_KIND == g_N_MODULE))
{
{
R13 * l_M_1166; memset(&l_M_1166, 0, sizeof l_M_1166);
l_M_1166 = r_FIND_DECL(l_R_1164);
r_ENTER_MODULE(l_M_1166);
r_ROUTINE_BODIES(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_1164))).f_C))).f_C);
r_LEAVE_MODULE(l_M_1166);
}
}
else
{
{
R13 * l_Y_1167; memset(&l_Y_1167, 0, sizeof l_Y_1167);
l_Y_1167 = r_FIND_DECL(l_R_1164);
if ((!((*(R13 *)rt_nil_check(l_Y_1167))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_1167);
}
}
}
l_R_1164 = ((*(R11 *)rt_nil_check(l_R_1164))).f_NEXT;
}
} L_end1165: ;
}
static void r_PENDING_BODIES(void) { 
rt_int l_LEVEL_1168; memset(&l_LEVEL_1168, 0, sizeof l_LEVEL_1168);
l_LEVEL_1168 = r_CUR_LEVEL();
rt_int l_MORE_1169; memset(&l_MORE_1169, 0, sizeof l_MORE_1169);
l_MORE_1169 = 1;
for (;;) {
if ((!l_MORE_1169)) goto L_end1170;
{
l_MORE_1169 = 0;
{
R13 * l_P_1171; memset(&l_P_1171, 0, sizeof l_P_1171);
l_P_1171 = ((*(R22 *)rt_nil_check(g_W))).f_PENDING;
R13 * l_PREV_1172; memset(&l_PREV_1172, 0, sizeof l_PREV_1172);
l_PREV_1172 = NULL;
for (;;) {
if ((l_P_1171 == NULL)) goto L_end1173;
{
if ((((*(R13 *)rt_nil_check(l_P_1171))).f_LEVEL == l_LEVEL_1168))
{
if ((l_PREV_1172 == NULL))
{
((*(R22 *)rt_nil_check(g_W))).f_PENDING = ((*(R13 *)rt_nil_check(l_P_1171))).f_MEMBERS;
}
else
{
((*(R13 *)rt_nil_check(l_PREV_1172))).f_MEMBERS = ((*(R13 *)rt_nil_check(l_P_1171))).f_MEMBERS;
}
r_ENTER_MODULE_OF(l_P_1171);
r_ROUTINE_BODY(l_P_1171);
r_LEAVE_MODULE_OF(l_P_1171);
l_MORE_1169 = 1;
goto L_end1173;
}
l_PREV_1172 = l_P_1171;
l_P_1171 = ((*(R13 *)rt_nil_check(l_P_1171))).f_MEMBERS;
}
} L_end1173: ;
}
}
} L_end1170: ;
}
static void r_CLOSED_BODY(R11 * p_B) { 
R11 * l_D_1174; memset(&l_D_1174, 0, sizeof l_D_1174);
l_D_1174 = ((*(R11 *)rt_nil_check(p_B))).f_A;
R11 * l_S_1175; memset(&l_S_1175, 0, sizeof l_S_1175);
l_S_1175 = ((*(R11 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R11 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R11 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R11 *)rt_nil_check(p_B))).f_A);
r_ROUTINE_HEADERS(((*(R11 *)rt_nil_check(p_B))).f_C);
for (;;) {
if ((l_D_1174 == NULL)) goto L_end1176;
{
if (((((*(R11 *)rt_nil_check(l_D_1174))).f_KIND == g_N_VAR) || (((*(R11 *)rt_nil_check(l_D_1174))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_1174);
}
l_D_1174 = ((*(R11 *)rt_nil_check(l_D_1174))).f_NEXT;
}
} L_end1176: ;
r_MODULE_DATA(((*(R11 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R11 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R11 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_1175 == NULL)) goto L_end1177;
{
r_STMT(l_S_1175);
l_S_1175 = ((*(R11 *)rt_nil_check(l_S_1175))).f_NEXT;
}
} L_end1177: ;
r_ROUTINE_BODIES(((*(R11 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R13 * p_Y) { 
R11 * l_R_1178; memset(&l_R_1178, 0, sizeof l_R_1178);
l_R_1178 = ((*(R13 *)rt_nil_check(p_Y))).f_DECL;
R8 l_SAVED_CODE_1179; memset(&l_SAVED_CODE_1179, 0, sizeof l_SAVED_CODE_1179);
S_R8(&l_SAVED_CODE_1179, ((*(R22 *)rt_nil_check(g_W))).f_CODE, 0);
R21 * l_SAVED_CTXS_1180; memset(&l_SAVED_CTXS_1180, 0, sizeof l_SAVED_CTXS_1180);
l_SAVED_CTXS_1180 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
R16 * l_SAVED_BINDS_1181; memset(&l_SAVED_BINDS_1181, 0, sizeof l_SAVED_BINDS_1181);
l_SAVED_BINDS_1181 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
R27 * l_OUTER_1182; memset(&l_OUTER_1182, 0, sizeof l_OUTER_1182);
l_OUTER_1182 = ((*(R22 *)rt_nil_check(g_W))).f_CS;
R27 * l_CS_1183; memset(&l_CS_1183, 0, sizeof l_CS_1183);
l_CS_1183 = ((R27 *)rt_alloc(sizeof (R27)));
R7 l_PROLOGUE_1184; memset(&l_PROLOGUE_1184, 0, sizeof l_PROLOGUE_1184);
S_R7(&l_PROLOGUE_1184, r_MK(rt_str("", 0)), 0);
S_R27(&(*(R27 *)rt_nil_check(l_CS_1183)), ({ R27 rc1185; memset(&rc1185, 0, sizeof rc1185);  rc1185.f_LEVEL = rt_add(((*(R13 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc1185.f_R = p_Y; rc1185.f_FRAMED = ((*(R13 *)rt_nil_check(p_Y))).f_FRAMED; S_R7(&rc1185.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R13 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R8(&rc1185.f_FIELDS, ({ R8 rc1186; memset(&rc1186, 0, sizeof rc1186);  rc1186.f_HEAD = NULL; rc1186.f_TAIL = NULL; rc1186; }), 0); rc1185.f_UP = l_OUTER_1182; rc1185.f_IMPORTS = ((*(R11 *)rt_nil_check(l_R_1178))).f_E; rc1185.f_SIGNALS = ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_1178))).f_D))).f_A; rc1185.f_RESULT = ((*(R13 *)rt_nil_check(p_Y))).f_RESULT; rc1185.f_IS_PATH = 0; rc1185; }), 0);
if (((*(R13 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R27 *)rt_nil_check(l_CS_1183))).f_FTYPE, ((*(R27 *)rt_nil_check(l_CS_1183))).f_FTYPE));
if ((((*(R13 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R13 *)rt_nil_check(p_Y))).f_FIELD), &((*(R27 *)rt_nil_check(l_CS_1183))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R27 *)rt_nil_check(l_CS_1183))).f_FIELDS);
}
S_R7(&l_PROLOGUE_1184, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R27 *)rt_nil_check(l_CS_1183))).f_FTYPE, ((*(R27 *)rt_nil_check(l_CS_1183))).f_FTYPE), 0);
if ((((*(R13 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R7(&l_PROLOGUE_1184, r_CATS(l_PROLOGUE_1184, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R22 *)rt_nil_check(g_W))).f_CS = l_CS_1183;
S_R8(&((*(R22 *)rt_nil_check(g_W))).f_CODE, ({ R8 rc1187; memset(&rc1187, 0, sizeof rc1187);  rc1187.f_HEAD = NULL; rc1187.f_TAIL = NULL; rc1187; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R22 *)rt_nil_check(g_W))).f_BINDS = ((*(R13 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R11 *)rt_nil_check(l_R_1178))).f_E, ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_1178))).f_D))).f_A, ((*(R13 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R13 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R11 *)rt_nil_check(l_R_1178))).f_LINE);
{
R20 * l_P_1188; memset(&l_P_1188, 0, sizeof l_P_1188);
l_P_1188 = ((*(R13 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_1188 == NULL)) goto L_end1189;
{
if ((!(((*(R20 *)rt_nil_check(l_P_1188))).f_T == NULL)))
{
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R20 *)rt_nil_check(l_P_1188))).f_T)))).f_KIND == g_T_VOID)))
{
{
R13 * l_V_1190; memset(&l_V_1190, 0, sizeof l_V_1190);
l_V_1190 = r_NEW_SYM(g_Y_VAR, ((*(R20 *)rt_nil_check(l_P_1188))).f_NAME);
((*(R13 *)rt_nil_check(l_V_1190))).f_T = ((*(R20 *)rt_nil_check(l_P_1188))).f_T;
((*(R13 *)rt_nil_check(l_V_1190))).f_INPUT = (((*(R20 *)rt_nil_check(l_P_1188))).f_MODE == g_M_IN);
((*(R13 *)rt_nil_check(l_V_1190))).f_BYREF = (!(((*(R20 *)rt_nil_check(l_P_1188))).f_MODE == g_M_IN));
S_R7(&((*(R13 *)rt_nil_check(l_V_1190))).f_FIELD, r_FMT1(rt_str("p_@", 3), ((*(R20 *)rt_nil_check(l_P_1188))).f_NAME), 0);
if (((*(R13 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R13 *)rt_nil_check(l_V_1190))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R20 *)rt_nil_check(l_P_1188))).f_T), ((*(R20 *)rt_nil_check(l_P_1188))).f_NAME), &((*(R27 *)rt_nil_check(l_CS_1183))).f_FIELDS);
S_R7(&((*(R13 *)rt_nil_check(l_V_1190))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), ((*(R20 *)rt_nil_check(l_P_1188))).f_NAME), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R20 *)rt_nil_check(l_P_1188))).f_T), ((*(R20 *)rt_nil_check(l_P_1188))).f_NAME), &((*(R27 *)rt_nil_check(l_CS_1183))).f_FIELDS);
S_R7(&((*(R13 *)rt_nil_check(l_V_1190))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), ((*(R20 *)rt_nil_check(l_P_1188))).f_NAME), 0);
}
S_R7(&l_PROLOGUE_1184, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_1184, ((*(R20 *)rt_nil_check(l_P_1188))).f_NAME, ((*(R20 *)rt_nil_check(l_P_1188))).f_NAME), 0);
}
else if (((*(R13 *)rt_nil_check(l_V_1190))).f_BYREF)
{
S_R7(&((*(R13 *)rt_nil_check(l_V_1190))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), ((*(R20 *)rt_nil_check(l_P_1188))).f_NAME), 0);
}
else
{
S_R7(&((*(R13 *)rt_nil_check(l_V_1190))).f_ACCESS, r_FMT1(rt_str("p_@", 3), ((*(R20 *)rt_nil_check(l_P_1188))).f_NAME), 0);
}
r_DEFINE(l_V_1190, ((*(R11 *)rt_nil_check(l_R_1178))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R20 *)rt_nil_check(l_P_1188))).f_T, ((*(R13 *)rt_nil_check(l_V_1190))).f_ACCESS, ((*(R11 *)rt_nil_check(l_R_1178))).f_LINE, 1);
}
}
}
l_P_1188 = ((*(R20 *)rt_nil_check(l_P_1188))).f_NEXT;
}
} L_end1189: ;
}
if ((((*(R11 *)rt_nil_check(l_R_1178))).f_FL >= ((rt_int)2LL)))
{
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R11 *)rt_nil_check(l_R_1178))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R11 *)rt_nil_check(l_R_1178))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R13 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R27 *)rt_nil_check(l_CS_1183))).f_FTYPE, r_JOIN_BUF(((*(R27 *)rt_nil_check(l_CS_1183))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { @", 5), ((*(R13 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_1184));
r_APPEND_BUF(((*(R22 *)rt_nil_check(g_W))).f_CODE, &(((*(R22 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R22 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R22 *)rt_nil_check(g_W))).f_CS = l_OUTER_1182;
S_R8(&((*(R22 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1179, 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_1180;
((*(R22 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_1181;
}
static void r_BIND_INSTANCE(R16 * p_BS, rt_int p_LINE) { 
R16 * l_B_1191; memset(&l_B_1191, 0, sizeof l_B_1191);
l_B_1191 = p_BS;
for (;;) {
if ((l_B_1191 == NULL)) goto L_end1192;
{
if ((!(((*(R16 *)rt_nil_check(l_B_1191))).f_T == NULL)))
{
{
R13 * l_Y_1193; memset(&l_Y_1193, 0, sizeof l_Y_1193);
l_Y_1193 = r_NEW_SYM(g_Y_TYPE, ((*(R16 *)rt_nil_check(l_B_1191))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_1193))).f_T = ((*(R16 *)rt_nil_check(l_B_1191))).f_T;
r_DEFINE(l_Y_1193, p_LINE);
}
}
else if (((*(R16 *)rt_nil_check(l_B_1191))).f_HASMV)
{
{
R13 * l_Y_1194; memset(&l_Y_1194, 0, sizeof l_Y_1194);
l_Y_1194 = r_NEW_SYM(g_Y_GEN, ((*(R16 *)rt_nil_check(l_B_1191))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_1194))).f_T = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
((*(R13 *)rt_nil_check(l_Y_1194))).f_HASMV = 1;
((*(R13 *)rt_nil_check(l_Y_1194))).f_MV = ((*(R16 *)rt_nil_check(l_B_1191))).f_MV;
S_R7(&((*(R13 *)rt_nil_check(l_Y_1194))).f_ACCESS, ((*(R16 *)rt_nil_check(l_B_1191))).f_C, 0);
((*(R13 *)rt_nil_check(l_Y_1194))).f_INPUT = 1;
r_DEFINE(l_Y_1194, p_LINE);
}
}
l_B_1191 = ((*(R16 *)rt_nil_check(l_B_1191))).f_NEXT;
}
} L_end1192: ;
}
static void r_APPEND_BUF(R8 p_SRC, R8 *p_DST) { 
R9 * l_C_1195; memset(&l_C_1195, 0, sizeof l_C_1195);
l_C_1195 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_1195 == NULL)) goto L_end1196;
{
r_APPEND(((*(R9 *)rt_nil_check(l_C_1195))).f_T, &(*p_DST));
l_C_1195 = ((*(R9 *)rt_nil_check(l_C_1195))).f_NEXT;
}
} L_end1196: ;
}
static rt_int r_USES_SEGMENT(R11 * p_S, rstr p_NAME) { 
R11 * l_U_1197; memset(&l_U_1197, 0, sizeof l_U_1197);
l_U_1197 = ((*(R11 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_1197 == NULL)) goto L_end1198;
{
if (r_TEQS(((*(R11 *)rt_nil_check(l_U_1197))).f_NAME, p_NAME))
{
return 1;
}
l_U_1197 = ((*(R11 *)rt_nil_check(l_U_1197))).f_NEXT;
}
} L_end1198: ;
return 0;
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R11 * p_SEGS) { 
R11 * l_S_1199; memset(&l_S_1199, 0, sizeof l_S_1199);
l_S_1199 = p_SEGS;
rt_int l_MAINS_1200; memset(&l_MAINS_1200, 0, sizeof l_MAINS_1200);
l_MAINS_1200 = ((rt_int)0LL);
R27 * l_ROOT_1201; memset(&l_ROOT_1201, 0, sizeof l_ROOT_1201);
l_ROOT_1201 = ((R27 *)rt_alloc(sizeof (R27)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R27(&(*(R27 *)rt_nil_check(l_ROOT_1201)), ({ R27 rc1202; memset(&rc1202, 0, sizeof rc1202);  rc1202.f_LEVEL = ((rt_int)0LL); rc1202.f_R = NULL; rc1202.f_FRAMED = 0; S_R7(&rc1202.f_FTYPE, r_NO_TEXT(), 0); S_R8(&rc1202.f_FIELDS, ({ R8 rc1203; memset(&rc1203, 0, sizeof rc1203);  rc1203.f_HEAD = NULL; rc1203.f_TAIL = NULL; rc1203; }), 0); rc1202.f_UP = NULL; rc1202.f_IMPORTS = NULL; rc1202.f_SIGNALS = NULL; rc1202.f_RESULT = NULL; rc1202.f_IS_PATH = 0; rc1202; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_CS = l_ROOT_1201;
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
S_R8(&((*(R22 *)rt_nil_check(g_W))).f_CODE, ({ R8 rc1204; memset(&rc1204, 0, sizeof rc1204);  rc1204.f_HEAD = NULL; rc1204.f_TAIL = NULL; rc1204; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
if ((l_S_1199 == NULL)) goto L_end1205;
{
l_MAINS_1200 = rt_add(l_MAINS_1200, ((*(R11 *)rt_nil_check(l_S_1199))).f_IV);
if (((((*(R11 *)rt_nil_check(l_S_1199))).f_IV == ((rt_int)0LL)) && (!(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_S_1199))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R11 *)rt_nil_check(l_S_1199))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
if (r_USES_SEGMENT(l_S_1199, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
r_CLOSED_BODY(((*(R11 *)rt_nil_check(l_S_1199))).f_B);
r_SEGMENT_EXPORTS(l_S_1199);
l_S_1199 = ((*(R11 *)rt_nil_check(l_S_1199))).f_NEXT;
}
} L_end1205: ;
if ((!(l_MAINS_1200 == ((rt_int)1LL))))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R11 * l_X_1206; memset(&l_X_1206, 0, sizeof l_X_1206);
l_X_1206 = ((*(R22 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_1206 == NULL)) goto L_end1207;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), ((*(R11 *)rt_nil_check(l_X_1206))).f_NAME));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), ((*(R11 *)rt_nil_check(l_X_1206))).f_NAME, r_CSTRING(((*(R11 *)rt_nil_check(l_X_1206))).f_NAME)));
l_X_1206 = ((*(R11 *)rt_nil_check(l_X_1206))).f_NEXT;
}
} L_end1207: ;
}
r_APPEND_BUF(((*(R22 *)rt_nil_check(g_W))).f_CODE, &(((*(R22 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R22 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static void r_SEGMENT_EXPORTS(R11 * p_S) { 
R13 * l_MARK_1208; memset(&l_MARK_1208, 0, sizeof l_MARK_1208);
l_MARK_1208 = ((*(R22 *)rt_nil_check(g_W))).f_SCOPE;
R13 * l_TAKEN_1209; memset(&l_TAKEN_1209, 0, sizeof l_TAKEN_1209);
for (;;) {
if ((l_MARK_1208 == NULL)) goto L_end1210;
{
if ((((*(R13 *)rt_nil_check(l_MARK_1208))).f_DEPTH < ((*(R22 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end1210;
}
l_MARK_1208 = ((*(R13 *)rt_nil_check(l_MARK_1208))).f_SNEXT;
}
} L_end1210: ;
l_TAKEN_1209 = r_TAKE_SCOPE(l_MARK_1208);
((*(R22 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((l_TAKEN_1209 == NULL)) goto L_end1211;
{
{
R13 * l_NEXT_1212; memset(&l_NEXT_1212, 0, sizeof l_NEXT_1212);
l_NEXT_1212 = ((*(R13 *)rt_nil_check(l_TAKEN_1209))).f_SNEXT;
if (((((((*(R11 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R11 *)rt_nil_check(p_S))).f_C, ((*(R13 *)rt_nil_check(l_TAKEN_1209))).f_NAME)) || r_IN_IDENTS(((*(R11 *)rt_nil_check(p_S))).f_C, ((*(R13 *)rt_nil_check(l_TAKEN_1209))).f_PREFIX)) || (((*(R13 *)rt_nil_check(l_TAKEN_1209))).f_KIND == g_Y_ENUMLIT)))
{
r_DEFINE(l_TAKEN_1209, ((*(R11 *)rt_nil_check(p_S))).f_LINE);
}
l_TAKEN_1209 = l_NEXT_1212;
}
}
} L_end1211: ;
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
