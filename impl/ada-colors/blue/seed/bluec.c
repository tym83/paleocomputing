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
static rt_int r_IS_KIND(rt_int p_K) { 
{ rt_int rv132 = (((((*(R22 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R22 *)rt_nil_check(g_W))).f_POS, (((*(R22 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_KIND == p_K);
return rv132; }
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
{ rt_int rv133 = 1;
return rv133; }
}
{ rt_int rv134 = 0;
return rv134; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT(rstr p_S) { 
if ((!r_ACCEPT(p_S)))
{
{
R7 l_T_135; memset(&l_T_135, 0, sizeof l_T_135);
S_R7(&l_T_135, (r_CUR()).f_TX, 0);
r_FAIL(r_LINE_NOW(), rt_str_cat(rt_str_cat(p_S, rt_str(" expected, not ", 15)), r_STR(l_T_135, (l_T_135).f_LEN)));
}
}
}
static R7 r_IDENT(void) { 
R10 l_T_136; memset(&l_T_136, 0, sizeof l_T_136);
S_R10(&l_T_136, r_CUR(), 0);
if ((!((l_T_136).f_KIND == g_K_ID)))
{
r_FAILT((l_T_136).f_LINE, rt_str("an identifier expected, not ", 28), (l_T_136).f_TX);
}
r_SKIP();
{ R7 rv137 = (l_T_136).f_TX;
return rv137; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT_NAME(R7 p_NAME) { 
if ((!r_TEQ(r_IDENT(), p_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), p_NAME);
}
}
static R11 * r_NEW_NODE(rt_int p_KIND, rt_int p_LINE) { 
R11 * l_N_138; memset(&l_N_138, 0, sizeof l_N_138);
l_N_138 = ((R11 *)rt_alloc(sizeof (R11)));
S_R11(&(*(R11 *)rt_nil_check(l_N_138)), ({ R11 rc139; memset(&rc139, 0, sizeof rc139);  rc139.f_KIND = p_KIND; rc139.f_LINE = p_LINE; rc139.f_IV = ((rt_int)0LL); S_R7(&rc139.f_NAME, ({ R7 rc140; memset(&rc140, 0, sizeof rc140);  rc140.f_AT = ((rt_int)0LL); rc140.f_LEN = ((rt_int)0LL); rc140.f_H = ((rt_int)0LL); rc140; }), 0); rc139.f_A = NULL; rc139.f_B = NULL; rc139.f_C = NULL; rc139.f_D = NULL; rc139.f_E = NULL; rc139.f_NEXT = NULL; rc139.f_FL = ((rt_int)0LL); rc139; }), 0);
{ R11 * rv141 = l_N_138;
return rv141; }
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
rt_int l_K_142; memset(&l_K_142, 0, sizeof l_K_142);
l_K_142 = ((rt_int)0LL);
R11 * l_P_143; memset(&l_P_143, 0, sizeof l_P_143);
l_P_143 = p_N;
for (;;) {
if ((l_P_143 == NULL)) goto L_end144;
{
l_K_142 = rt_add(l_K_142, ((rt_int)1LL));
l_P_143 = ((*(R11 *)rt_nil_check(l_P_143))).f_NEXT;
}
} L_end144: ;
{ rt_int rv145 = l_K_142;
return rv145; }
rt_raise(RT_X_INIT);
}
static R11 * r_IDENT_NODE(void) { 
R11 * l_N_146; memset(&l_N_146, 0, sizeof l_N_146);
l_N_146 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_N_146))).f_NAME, r_IDENT(), 0);
{ R11 * rv147 = l_N_146;
return rv147; }
rt_raise(RT_X_INIT);
}
static R11 * r_IDENT_LIST(void) { 
R11 * l_HEAD_148; memset(&l_HEAD_148, 0, sizeof l_HEAD_148);
l_HEAD_148 = NULL;
R11 * l_TAIL_149; memset(&l_TAIL_149, 0, sizeof l_TAIL_149);
l_TAIL_149 = NULL;
for (;;) {
{
r_ADD_LIST(r_ROUTINE_NAME_NODE(), &l_HEAD_148, &l_TAIL_149);
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end150;
} L_end150: ;
{ R11 * rv151 = l_HEAD_148;
return rv151; }
rt_raise(RT_X_INIT);
}
static R11 * r_ROUTINE_NAME_NODE(void) { 
R11 * l_N_152; memset(&l_N_152, 0, sizeof l_N_152);
l_N_152 = r_IDENT_NODE();
if ((r_IS(rt_str("$", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_SKIP();
S_R7(&((*(R11 *)rt_nil_check(l_N_152))).f_NAME, r_MKN(rt_str_cat(rt_str_cat(r_STR(((*(R11 *)rt_nil_check(l_N_152))).f_NAME, (((*(R11 *)rt_nil_check(l_N_152))).f_NAME).f_LEN), rt_str("$", 1)), r_STR((r_CUR()).f_TX, ((r_CUR()).f_TX).f_LEN))), 0);
r_SKIP();
}
{ R11 * rv153 = l_N_152;
return rv153; }
rt_raise(RT_X_INIT);
}
static R11 * r_PAREN_IDENTS(void) { 
R11 * l_L_154; memset(&l_L_154, 0, sizeof l_L_154);
l_L_154 = NULL;
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str(")", 1))))
{
l_L_154 = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
{ R11 * rv155 = l_L_154;
return rv155; }
rt_raise(RT_X_INIT);
}
static void r_SKIP_PARENS(void) { 
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
if ((l_DEPTH_156 == ((rt_int)0LL))) goto L_end157;
} L_end157: ;
}
static R11 * r_PARSE_COMPILATION(void) { 
R11 * l_HEAD_158; memset(&l_HEAD_158, 0, sizeof l_HEAD_158);
l_HEAD_158 = NULL;
R11 * l_TAIL_159; memset(&l_TAIL_159, 0, sizeof l_TAIL_159);
l_TAIL_159 = NULL;
for (;;) {
if (r_IS_KIND(g_K_EOF)) goto L_end160;
{
r_ADD_LIST(r_PARSE_SEGMENT(), &l_HEAD_158, &l_TAIL_159);
}
} L_end160: ;
{ R11 * rv161 = l_HEAD_158;
return rv161; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_ITEMS(void) { 
R11 * l_N_162; memset(&l_N_162, 0, sizeof l_N_162);
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
((*(R11 *)rt_nil_check(l_N_162))).f_A = r_IDENT_LIST();
}
if (r_ACCEPT(rt_str("#", 1)))
{
((*(R11 *)rt_nil_check(l_N_162))).f_B = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("ROUTINES", 8)))
{
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_N_162))).f_C = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("TYPES", 5)))
{
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_N_162))).f_D = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("MODULES", 7)))
{
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_N_162))).f_E = r_PAREN_IDENTS();
}
else
{
{
R7 l_T_164; memset(&l_T_164, 0, sizeof l_T_164);
S_R7(&l_T_164, (r_CUR()).f_TX, 0);
r_FAILT(r_LINE_NOW(), rt_str("DATA, ROUTINES, TYPES or MODULES expected, not ", 47), l_T_164);
}
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
} L_end163: ;
r_EXPECT(rt_str(")", 1));
{ R11 * rv165 = l_N_162;
return rv165; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_SEGMENT(void) { 
R11 * l_S_166; memset(&l_S_166, 0, sizeof l_S_166);
l_S_166 = r_NEW_NODE(g_N_SEGMENT, r_LINE_NOW());
R11 * l_HEAD_167; memset(&l_HEAD_167, 0, sizeof l_HEAD_167);
l_HEAD_167 = NULL;
R11 * l_TAIL_168; memset(&l_TAIL_168, 0, sizeof l_TAIL_168);
l_TAIL_168 = NULL;
if (r_ACCEPT(rt_str("MAIN", 4)))
{
((*(R11 *)rt_nil_check(l_S_166))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("SEGMENT", 7));
S_R7(&((*(R11 *)rt_nil_check(l_S_166))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("USES", 4)))
{
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R11 * l_U_170; memset(&l_U_170, 0, sizeof l_U_170);
l_U_170 = r_NEW_NODE(g_N_USE, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_U_170))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_U_170))).f_A = r_PARSE_ITEMS();
}
r_ADD_LIST(l_U_170, &l_HEAD_167, &l_TAIL_168);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end169;
} L_end169: ;
r_EXPECT(rt_str(")", 1));
((*(R11 *)rt_nil_check(l_S_166))).f_A = l_HEAD_167;
}
if (r_ACCEPT(rt_str("DEFINES", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R11 *)rt_nil_check(l_S_166))).f_FL = ((rt_int)1LL);
}
else
{
((*(R11 *)rt_nil_check(l_S_166))).f_C = r_PAREN_IDENTS();
}
}
r_EXPECT(rt_str(";", 1));
((*(R11 *)rt_nil_check(l_S_166))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SEGMENT", 7));
r_EXPECT_NAME(((*(R11 *)rt_nil_check(l_S_166))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R11 * rv171 = l_S_166;
return rv171; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_CLOSED_BODY(void) { 
R11 * l_B_172; memset(&l_B_172, 0, sizeof l_B_172);
l_B_172 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
R11 * l_HEAD_173; memset(&l_HEAD_173, 0, sizeof l_HEAD_173);
l_HEAD_173 = NULL;
R11 * l_TAIL_174; memset(&l_TAIL_174, 0, sizeof l_TAIL_174);
l_TAIL_174 = NULL;
((*(R11 *)rt_nil_check(l_B_172))).f_A = r_PARSE_DECLARATIONS();
((*(R11 *)rt_nil_check(l_B_172))).f_B = r_PARSE_STATEMENTS();
for (;;) {
{
if ((((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS(rt_str("TARGET", 6))))
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
} L_end175: ;
((*(R11 *)rt_nil_check(l_B_172))).f_C = l_HEAD_173;
{ R11 * rv176 = l_B_172;
return rv176; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_BODY(void) { 
R11 * l_B_177; memset(&l_B_177, 0, sizeof l_B_177);
l_B_177 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
((*(R11 *)rt_nil_check(l_B_177))).f_A = r_PARSE_DECLARATIONS();
((*(R11 *)rt_nil_check(l_B_177))).f_B = r_PARSE_STATEMENTS();
{ R11 * rv178 = l_B_177;
return rv178; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_MODULE(void) { 
R11 * l_M_179; memset(&l_M_179, 0, sizeof l_M_179);
l_M_179 = r_NEW_NODE(g_N_MODULE, r_LINE_NOW());
R11 * l_HEAD_180; memset(&l_HEAD_180, 0, sizeof l_HEAD_180);
l_HEAD_180 = NULL;
R11 * l_TAIL_181; memset(&l_TAIL_181, 0, sizeof l_TAIL_181);
l_TAIL_181 = NULL;
r_EXPECT(rt_str("MODULE", 6));
S_R7(&((*(R11 *)rt_nil_check(l_M_179))).f_NAME, r_IDENT(), 0);
for (;;) {
{
if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R11 *)rt_nil_check(l_M_179))).f_A = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("EXPORTS", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R11 *)rt_nil_check(l_M_179))).f_FL = ((rt_int)1LL);
}
else
{
{
rt_int l_PAREN_183; memset(&l_PAREN_183, 0, sizeof l_PAREN_183);
l_PAREN_183 = r_ACCEPT(rt_str("(", 1));
for (;;) {
{
{
R11 * l_X_185; memset(&l_X_185, 0, sizeof l_X_185);
l_X_185 = r_NEW_NODE(g_N_EXPORT, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_X_185))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("WITH", 4)))
{
((*(R11 *)rt_nil_check(l_X_185))).f_A = r_PAREN_IDENTS();
}
r_ADD_LIST(l_X_185, &l_HEAD_180, &l_TAIL_181);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end184;
} L_end184: ;
if (l_PAREN_183)
{
r_EXPECT(rt_str(")", 1));
}
}
((*(R11 *)rt_nil_check(l_M_179))).f_B = l_HEAD_180;
}
}
else
{
goto L_end182;
}
}
} L_end182: ;
r_EXPECT(rt_str(";", 1));
((*(R11 *)rt_nil_check(l_M_179))).f_C = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("MODULE", 6));
r_EXPECT_NAME(((*(R11 *)rt_nil_check(l_M_179))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R11 * rv186 = l_M_179;
return rv186; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_DECLARATIONS(void) { 
R11 * l_HEAD_187; memset(&l_HEAD_187, 0, sizeof l_HEAD_187);
l_HEAD_187 = NULL;
R11 * l_TAIL_188; memset(&l_TAIL_188, 0, sizeof l_TAIL_188);
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
} L_end189: ;
{ R11 * rv190 = l_HEAD_187;
return rv190; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_OBJECT_DECL(void) { 
R11 * l_D_191; memset(&l_D_191, 0, sizeof l_D_191);
l_D_191 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
if (r_ACCEPT(rt_str("CONST", 5)))
{
((*(R11 *)rt_nil_check(l_D_191))).f_KIND = g_N_CONST;
}
else
{
r_EXPECT(rt_str("VAR", 3));
}
((*(R11 *)rt_nil_check(l_D_191))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_D_191))).f_B = r_PARSE_TYPE_SPEC();
if (r_ACCEPT(rt_str(":=", 2)))
{
((*(R11 *)rt_nil_check(l_D_191))).f_C = r_PARSE_EXPR();
}
else if ((((*(R11 *)rt_nil_check(l_D_191))).f_KIND == g_N_CONST))
{
r_FAIL(((*(R11 *)rt_nil_check(l_D_191))).f_LINE, rt_str("a constant needs a value", 24));
}
r_EXPECT(rt_str(";", 1));
{ R11 * rv192 = l_D_191;
return rv192; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_FORMALS(void) { 
R11 * l_HEAD_193; memset(&l_HEAD_193, 0, sizeof l_HEAD_193);
l_HEAD_193 = NULL;
R11 * l_TAIL_194; memset(&l_TAIL_194, 0, sizeof l_TAIL_194);
l_TAIL_194 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R11 * l_F_196; memset(&l_F_196, 0, sizeof l_F_196);
l_F_196 = r_NEW_NODE(g_N_FORMAL, r_LINE_NOW());
if (r_ACCEPT(rt_str("TAG", 3)))
{
((*(R11 *)rt_nil_check(l_F_196))).f_IV = ((rt_int)1LL);
}
((*(R11 *)rt_nil_check(l_F_196))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
if ((!r_ACCEPT(rt_str("TYPE", 4))))
{
((*(R11 *)rt_nil_check(l_F_196))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_F_196, &l_HEAD_193, &l_TAIL_194);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end195;
} L_end195: ;
r_EXPECT(rt_str(")", 1));
{ R11 * rv197 = l_HEAD_193;
return rv197; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_TYPE_DECL(void) { 
R11 * l_D_198; memset(&l_D_198, 0, sizeof l_D_198);
l_D_198 = r_NEW_NODE(g_N_TYPE, r_LINE_NOW());
r_EXPECT(rt_str("TYPE", 4));
S_R7(&((*(R11 *)rt_nil_check(l_D_198))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_D_198))).f_A = r_PARSE_FORMALS();
}
r_EXPECT(rt_str("=", 1));
((*(R11 *)rt_nil_check(l_D_198))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(";", 1));
{ R11 * rv199 = l_D_198;
return rv199; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_REPTYPE_DECL(void) { 
R11 * l_D_200; memset(&l_D_200, 0, sizeof l_D_200);
l_D_200 = r_NEW_NODE(g_N_REPTYPE, r_LINE_NOW());
r_EXPECT(rt_str("REPTYPE", 7));
S_R7(&((*(R11 *)rt_nil_check(l_D_200))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_D_200))).f_A = r_PARSE_FORMALS();
}
if (r_ACCEPT(rt_str("OF", 2)))
{
((*(R11 *)rt_nil_check(l_D_200))).f_C = r_IDENT_NODE();
}
r_EXPECT(rt_str("=", 1));
((*(R11 *)rt_nil_check(l_D_200))).f_B = r_PARSE_REP();
r_EXPECT(rt_str(";", 1));
{ R11 * rv201 = l_D_200;
return rv201; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_REP(void) { 
R11 * l_R_202; memset(&l_R_202, 0, sizeof l_R_202);
l_R_202 = r_NEW_NODE(g_N_REP, r_LINE_NOW());
R11 * l_HEAD_203; memset(&l_HEAD_203, 0, sizeof l_HEAD_203);
l_HEAD_203 = NULL;
R11 * l_TAIL_204; memset(&l_TAIL_204, 0, sizeof l_TAIL_204);
l_TAIL_204 = NULL;
if (r_IS_KIND(g_K_GEN))
{
((*(R11 *)rt_nil_check(l_R_202))).f_KIND = g_TS_GEN;
S_R7(&((*(R11 *)rt_nil_check(l_R_202))).f_NAME, r_GEN_NAME(), 0);
{ R11 * rv205 = l_R_202;
return rv205; }
}
S_R7(&((*(R11 *)rt_nil_check(l_R_202))).f_NAME, r_IDENT(), 0);
if ((!r_IS(rt_str("(", 1))))
{
{ R11 * rv206 = l_R_202;
return rv206; }
}
if (r_TEQS(((*(R11 *)rt_nil_check(l_R_202))).f_NAME, rt_str("RECORD_REP", 10)))
{
r_SKIP_PARENS();
{ R11 * rv207 = l_R_202;
return rv207; }
}
r_SKIP();
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end208;
{
if (r_ACCEPT(rt_str("VALUES", 6)))
{
{
R11 * l_VH_209; memset(&l_VH_209, 0, sizeof l_VH_209);
l_VH_209 = NULL;
R11 * l_VT_210; memset(&l_VT_210, 0, sizeof l_VT_210);
l_VT_210 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R11 * l_V_212; memset(&l_V_212, 0, sizeof l_V_212);
l_V_212 = r_NEW_NODE(g_N_VALREP, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_V_212))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_EXPECT(rt_str("AS", 2));
((*(R11 *)rt_nil_check(l_V_212))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_V_212, &l_VH_209, &l_VT_210);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end211;
} L_end211: ;
r_EXPECT(rt_str(")", 1));
((*(R11 *)rt_nil_check(l_R_202))).f_B = l_VH_209;
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
} L_end208: ;
r_EXPECT(rt_str(")", 1));
((*(R11 *)rt_nil_check(l_R_202))).f_A = l_HEAD_203;
{ R11 * rv213 = l_R_202;
return rv213; }
rt_raise(RT_X_INIT);
}
static R7 r_GEN_NAME(void) { 
R7 l_T_214; memset(&l_T_214, 0, sizeof l_T_214);
S_R7(&l_T_214, (r_CUR()).f_TX, 0);
r_SKIP();
if (((l_T_214).f_LEN == ((rt_int)1LL)))
{
{ R7 rv215 = r_NO_TEXT();
return rv215; }
}
{ R7 rv216 = r_MKN(rt_b_slice(r_STR(l_T_214, (l_T_214).f_LEN), ((rt_int)1LL), rt_sub((l_T_214).f_LEN, ((rt_int)1LL))));
return rv216; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_TYPE_ARG(void) { 
R11 * l_N_217; memset(&l_N_217, 0, sizeof l_N_217);
if (r_IS_KIND(g_K_GEN))
{
{
R7 l_T_218; memset(&l_T_218, 0, sizeof l_T_218);
S_R7(&l_T_218, (r_CUR()).f_TX, 0);
if (((l_T_218).f_LEN == ((rt_int)1LL)))
{
r_SKIP();
{ R11 * rv219 = r_NEW_NODE(g_N_DONTCARE, r_LINE_NOW());
return rv219; }
}
}
l_N_217 = r_NEW_NODE(g_TS_GEN, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_N_217))).f_NAME, r_GEN_NAME(), 0);
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R11 *)rt_nil_check(l_N_217))).f_C = r_PARSE_REP();
}
{ R11 * rv220 = l_N_217;
return rv220; }
}
if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R11 * rv221 = r_NEW_NODE(g_N_ANY, r_LINE_NOW());
return rv221; }
}
if ((r_IS(rt_str("ARRAY", 5)) || r_IS(rt_str("RECORD", 6))))
{
{ R11 * rv222 = r_PARSE_TYPE_SPEC();
return rv222; }
}
if ((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM)))
{
{ R11 * rv223 = r_PARSE_TYPE_SPEC();
return rv223; }
}
l_N_217 = r_PARSE_EXPR();
if ((r_IS(rt_str("REP", 3)) || r_IS(rt_str("[", 1))))
{
{ R11 * rv224 = r_TYPE_SPEC_TAIL(r_EXPR_TO_TS(l_N_217));
return rv224; }
}
{ R11 * rv225 = l_N_217;
return rv225; }
rt_raise(RT_X_INIT);
}
static R11 * r_EXPR_TO_TS(R11 * p_E) { 
R11 * l_N_226; memset(&l_N_226, 0, sizeof l_N_226);
if ((((((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_TS_NAME) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_TS_ARRAY)) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_TS_RECORD)) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_TS_ENUM)) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN)))
{
{ R11 * rv227 = p_E;
return rv227; }
}
l_N_226 = r_NEW_NODE(g_TS_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME))
{
S_R7(&((*(R11 *)rt_nil_check(l_N_226))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
{ R11 * rv228 = l_N_226;
return rv228; }
}
if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
S_R7(&((*(R11 *)rt_nil_check(l_N_226))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R11 *)rt_nil_check(l_N_226))).f_A = ((*(R11 *)rt_nil_check(p_E))).f_A;
{ R11 * rv229 = l_N_226;
return rv229; }
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
{ R11 * rv230 = p_N;
return rv230; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_TYPE_SPEC(void) { 
R11 * l_N_231; memset(&l_N_231, 0, sizeof l_N_231);
R11 * l_HEAD_232; memset(&l_HEAD_232, 0, sizeof l_HEAD_232);
l_HEAD_232 = NULL;
R11 * l_TAIL_233; memset(&l_TAIL_233, 0, sizeof l_TAIL_233);
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
R11 * l_R_236; memset(&l_R_236, 0, sizeof l_R_236);
l_R_236 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
((*(R11 *)rt_nil_check(l_R_236))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_R_236))).f_B = r_PARSE_EXPR();
r_ADD_LIST(l_R_236, &l_HEAD_232, &l_TAIL_233);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end235;
} L_end235: ;
r_EXPECT(rt_str("]", 1));
((*(R11 *)rt_nil_check(l_N_231))).f_A = l_HEAD_232;
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R11 *)rt_nil_check(l_N_231))).f_D = r_PARSE_REP();
}
r_EXPECT(rt_str("OF", 2));
((*(R11 *)rt_nil_check(l_N_231))).f_C = r_PARSE_TYPE_SPEC();
{ R11 * rv237 = l_N_231;
return rv237; }
}
if (r_ACCEPT(rt_str("RECORD", 6)))
{
l_N_231 = r_NEW_NODE(g_TS_RECORD, l_LINE_234);
((*(R11 *)rt_nil_check(l_N_231))).f_A = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("RECORD", 6));
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R11 *)rt_nil_check(l_N_231))).f_D = r_PARSE_REP();
}
{ R11 * rv238 = l_N_231;
return rv238; }
}
if (r_IS_KIND(g_K_GEN))
{
{ R11 * rv239 = r_PARSE_TYPE_ARG();
return rv239; }
}
if (r_IS(rt_str("(", 1)))
{
l_N_231 = r_NEW_NODE(g_TS_ENUM, l_LINE_234);
((*(R11 *)rt_nil_check(l_N_231))).f_A = r_PARSE_LITERALS();
{ R11 * rv240 = r_TYPE_SPEC_TAIL(l_N_231);
return rv240; }
}
l_N_231 = r_NEW_NODE(g_TS_NAME, l_LINE_234);
S_R7(&((*(R11 *)rt_nil_check(l_N_231))).f_NAME, r_IDENT(), 0);
if ((r_TEQS(((*(R11 *)rt_nil_check(l_N_231))).f_NAME, rt_str("ENUM", 4)) || r_TEQS(((*(R11 *)rt_nil_check(l_N_231))).f_NAME, rt_str("UNORDERED", 9))))
{
if (r_TEQS(((*(R11 *)rt_nil_check(l_N_231))).f_NAME, rt_str("UNORDERED", 9)))
{
((*(R11 *)rt_nil_check(l_N_231))).f_IV = ((rt_int)1LL);
}
((*(R11 *)rt_nil_check(l_N_231))).f_KIND = g_TS_ENUM;
((*(R11 *)rt_nil_check(l_N_231))).f_A = r_PARSE_LITERALS();
{ R11 * rv241 = r_TYPE_SPEC_TAIL(l_N_231);
return rv241; }
}
if ((r_IS(rt_str("(", 1)) && (!r_RANGE_AHEAD())))
{
r_SKIP();
for (;;) {
{
if (r_TEQS(((*(R11 *)rt_nil_check(l_N_231))).f_NAME, rt_str("PTR", 3)))
{
r_ADD_LIST(r_PARSE_TYPE_SPEC(), &l_HEAD_232, &l_TAIL_233);
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_232, &l_TAIL_233);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end242;
} L_end242: ;
r_EXPECT(rt_str(")", 1));
((*(R11 *)rt_nil_check(l_N_231))).f_A = l_HEAD_232;
}
{ R11 * rv243 = r_TYPE_SPEC_TAIL(l_N_231);
return rv243; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_LITERALS(void) { 
R11 * l_HEAD_244; memset(&l_HEAD_244, 0, sizeof l_HEAD_244);
l_HEAD_244 = NULL;
R11 * l_TAIL_245; memset(&l_TAIL_245, 0, sizeof l_TAIL_245);
l_TAIL_245 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R11 * l_L_247; memset(&l_L_247, 0, sizeof l_L_247);
l_L_247 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
if ((!((r_IS_KIND(g_K_ENUM) || r_IS_KIND(g_K_ID)))))
{
r_FAIL(r_LINE_NOW(), rt_str("an enumerated literal expected", 30));
}
S_R7(&((*(R11 *)rt_nil_check(l_L_247))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_ADD_LIST(l_L_247, &l_HEAD_244, &l_TAIL_245);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end246;
} L_end246: ;
r_EXPECT(rt_str(")", 1));
{ R11 * rv248 = l_HEAD_244;
return rv248; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_FIELDS(void) { 
R11 * l_HEAD_249; memset(&l_HEAD_249, 0, sizeof l_HEAD_249);
l_HEAD_249 = NULL;
R11 * l_TAIL_250; memset(&l_TAIL_250, 0, sizeof l_TAIL_250);
l_TAIL_250 = NULL;
for (;;) {
{
if (r_IS(rt_str("VAR", 3)))
{
{
R11 * l_F_252; memset(&l_F_252, 0, sizeof l_F_252);
l_F_252 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
r_SKIP();
((*(R11 *)rt_nil_check(l_F_252))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_F_252))).f_B = r_PARSE_TYPE_SPEC();
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
R11 * l_V_253; memset(&l_V_253, 0, sizeof l_V_253);
l_V_253 = r_NEW_NODE(g_N_VARIANT, r_LINE_NOW());
R11 * l_VH_254; memset(&l_VH_254, 0, sizeof l_VH_254);
l_VH_254 = NULL;
R11 * l_VT_255; memset(&l_VT_255, 0, sizeof l_VT_255);
l_VT_255 = NULL;
r_SKIP();
S_R7(&((*(R11 *)rt_nil_check(l_V_253))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end256;
{
{
R11 * l_S_257; memset(&l_S_257, 0, sizeof l_S_257);
l_S_257 = r_NEW_NODE(g_N_VARSPEC, r_LINE_NOW());
R11 * l_LH_258; memset(&l_LH_258, 0, sizeof l_LH_258);
l_LH_258 = NULL;
R11 * l_LT_259; memset(&l_LT_259, 0, sizeof l_LT_259);
l_LT_259 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_258, &l_LT_259);
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end260;
} L_end260: ;
r_EXPECT(rt_str("-->", 3));
((*(R11 *)rt_nil_check(l_S_257))).f_A = l_LH_258;
((*(R11 *)rt_nil_check(l_S_257))).f_B = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_S_257, &l_VH_254, &l_VT_255);
}
}
} L_end256: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
r_EXPECT(rt_str(";", 1));
((*(R11 *)rt_nil_check(l_V_253))).f_A = l_VH_254;
r_ADD_LIST(l_V_253, &l_HEAD_249, &l_TAIL_250);
}
}
else
{
goto L_end251;
}
}
} L_end251: ;
{ R11 * rv261 = l_HEAD_249;
return rv261; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_RANGE(void) { 
R11 * l_R_262; memset(&l_R_262, 0, sizeof l_R_262);
l_R_262 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_R_262))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("[", 1));
}
((*(R11 *)rt_nil_check(l_R_262))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_R_262))).f_B = r_PARSE_EXPR();
if (r_ACCEPT(rt_str(")", 1)))
{
((*(R11 *)rt_nil_check(l_R_262))).f_IV = rt_add(((*(R11 *)rt_nil_check(l_R_262))).f_IV, ((rt_int)2LL));
}
else
{
r_EXPECT(rt_str("]", 1));
}
{ R11 * rv263 = l_R_262;
return rv263; }
rt_raise(RT_X_INIT);
}
static rt_int r_RANGE_AHEAD(void) { 
rt_int l_DEPTH_264; memset(&l_DEPTH_264, 0, sizeof l_DEPTH_264);
l_DEPTH_264 = ((rt_int)0LL);
rt_int l_K_265; memset(&l_K_265, 0, sizeof l_K_265);
l_K_265 = ((rt_int)0LL);
for (;;) {
{
{
R10 l_T_267; memset(&l_T_267, 0, sizeof l_T_267);
S_R10(&l_T_267, r_AHEAD(l_K_265), 0);
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
} L_end266: ;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_PARAMS(void) { 
R11 * l_HEAD_271; memset(&l_HEAD_271, 0, sizeof l_HEAD_271);
l_HEAD_271 = NULL;
R11 * l_TAIL_272; memset(&l_TAIL_272, 0, sizeof l_TAIL_272);
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
R11 * l_NAMES_275; memset(&l_NAMES_275, 0, sizeof l_NAMES_275);
l_NAMES_275 = r_IDENT_LIST();
R11 * l_TS_276; memset(&l_TS_276, 0, sizeof l_TS_276);
l_TS_276 = NULL;
R11 * l_P_277; memset(&l_P_277, 0, sizeof l_P_277);
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
R11 * l_PN_279; memset(&l_PN_279, 0, sizeof l_PN_279);
l_PN_279 = r_NEW_NODE(g_N_PARAM, ((*(R11 *)rt_nil_check(l_P_277))).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_PN_279))).f_NAME, ((*(R11 *)rt_nil_check(l_P_277))).f_NAME, 0);
((*(R11 *)rt_nil_check(l_PN_279))).f_IV = l_MODE_273;
((*(R11 *)rt_nil_check(l_PN_279))).f_B = l_TS_276;
r_ADD_LIST(l_PN_279, &l_HEAD_271, &l_TAIL_272);
}
l_P_277 = ((*(R11 *)rt_nil_check(l_P_277))).f_NEXT;
}
} L_end278: ;
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
} L_end274: ;
r_EXPECT(rt_str(")", 1));
{ R11 * rv280 = l_HEAD_271;
return rv280; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_TEMPLATE(rt_int p_FUNC) { 
R11 * l_R_281; memset(&l_R_281, 0, sizeof l_R_281);
l_R_281 = r_NEW_NODE(g_TS_ROUTINE, r_LINE_NOW());
R11 * l_HEAD_282; memset(&l_HEAD_282, 0, sizeof l_HEAD_282);
l_HEAD_282 = NULL;
R11 * l_TAIL_283; memset(&l_TAIL_283, 0, sizeof l_TAIL_283);
l_TAIL_283 = NULL;
rt_int l_MODE_284; memset(&l_MODE_284, 0, sizeof l_MODE_284);
l_MODE_284 = g_M_IN;
if (p_FUNC)
{
((*(R11 *)rt_nil_check(l_R_281))).f_IV = ((rt_int)1LL);
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
R11 * l_P_286; memset(&l_P_286, 0, sizeof l_P_286);
l_P_286 = r_NEW_NODE(g_N_PARAM, r_LINE_NOW());
((*(R11 *)rt_nil_check(l_P_286))).f_IV = l_MODE_284;
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else
{
((*(R11 *)rt_nil_check(l_P_286))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_P_286, &l_HEAD_282, &l_TAIL_283);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
} L_end285: ;
r_EXPECT(rt_str(")", 1));
((*(R11 *)rt_nil_check(l_R_281))).f_A = l_HEAD_282;
if (r_ACCEPT(rt_str("RETURNS", 7)))
{
((*(R11 *)rt_nil_check(l_R_281))).f_IV = ((rt_int)1LL);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_R_281))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R11 *)rt_nil_check(l_R_281))).f_B = r_PARSE_TYPE_SPEC();
}
}
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R11 *)rt_nil_check(l_R_281))).f_D = r_PAREN_IDENTS();
}
{ R11 * rv287 = l_R_281;
return rv287; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_ROUTINE_SPEC(void) { 
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
{ R11 * rv288 = r_PARSE_TEMPLATE(1);
return rv288; }
}
r_EXPECT(rt_str("PROCEDURE", 9));
{ R11 * rv289 = r_PARSE_TEMPLATE(0);
return rv289; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_WHERE(void) { 
R11 * l_HEAD_290; memset(&l_HEAD_290, 0, sizeof l_HEAD_290);
l_HEAD_290 = NULL;
R11 * l_TAIL_291; memset(&l_TAIL_291, 0, sizeof l_TAIL_291);
l_TAIL_291 = NULL;
for (;;) {
{
{
R11 * l_N_293; memset(&l_N_293, 0, sizeof l_N_293);
l_N_293 = r_NEW_NODE(g_N_NEEDS, r_LINE_NOW());
R11 * l_TH_294; memset(&l_TH_294, 0, sizeof l_TH_294);
l_TH_294 = NULL;
R11 * l_TT_295; memset(&l_TT_295, 0, sizeof l_TT_295);
l_TT_295 = NULL;
S_R7(&((*(R11 *)rt_nil_check(l_N_293))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("NEEDS", 5));
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R11 * l_T_297; memset(&l_T_297, 0, sizeof l_T_297);
l_T_297 = r_NEW_NODE(g_N_TEMPLATE, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_T_297))).f_NAME, ((*(R11 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
((*(R11 *)rt_nil_check(l_T_297))).f_B = r_PARSE_TEMPLATE(0);
r_ADD_LIST(l_T_297, &l_TH_294, &l_TT_295);
}
if (r_ACCEPT(rt_str(";", 1)))
{
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end296;
} L_end296: ;
r_EXPECT(rt_str(")", 1));
((*(R11 *)rt_nil_check(l_N_293))).f_A = l_TH_294;
r_ADD_LIST(l_N_293, &l_HEAD_290, &l_TAIL_291);
}
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end292;
} L_end292: ;
{ R11 * rv298 = l_HEAD_290;
return rv298; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_ROUTINE(void) { 
R11 * l_R_299; memset(&l_R_299, 0, sizeof l_R_299);
l_R_299 = r_NEW_NODE(g_N_ROUTINE, r_LINE_NOW());
R11 * l_H_300; memset(&l_H_300, 0, sizeof l_H_300);
l_H_300 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
if (r_ACCEPT(rt_str("TARGET", 6)))
{
((*(R11 *)rt_nil_check(l_R_299))).f_FL = ((rt_int)2LL);
}
if (r_ACCEPT(rt_str("INLINE", 6)))
{
((*(R11 *)rt_nil_check(l_R_299))).f_FL = rt_add(((*(R11 *)rt_nil_check(l_R_299))).f_FL, ((rt_int)1LL));
}
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
((*(R11 *)rt_nil_check(l_R_299))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
S_R7(&((*(R11 *)rt_nil_check(l_R_299))).f_NAME, ((*(R11 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (r_IS(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_R_299))).f_A = r_PARSE_PARAMS();
}
if ((((*(R11 *)rt_nil_check(l_R_299))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("RETURNS", 7));
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_R_299))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R11 *)rt_nil_check(l_R_299))).f_B = r_PARSE_TYPE_SPEC();
}
}
for (;;) {
{
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R11 *)rt_nil_check(l_H_300))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R11 *)rt_nil_check(l_R_299))).f_E = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("WHERE", 5)))
{
((*(R11 *)rt_nil_check(l_H_300))).f_B = r_PARSE_WHERE();
}
else
{
goto L_end301;
}
}
} L_end301: ;
((*(R11 *)rt_nil_check(l_R_299))).f_D = l_H_300;
r_EXPECT(rt_str(";", 1));
if ((((*(R11 *)rt_nil_check(l_R_299))).f_FL >= ((rt_int)2LL)))
{
r_EXPECT(rt_str("DYNSIZE", 7));
r_SKIP_PARENS();
r_EXPECT(rt_str(";", 1));
for (;;) {
if ((r_IS(rt_str("END", 3)) && ((r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PROCEDURE", 9)) || r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("FUNCTION", 8)))))) goto L_end302;
{
r_SKIP();
}
} L_end302: ;
}
else
{
((*(R11 *)rt_nil_check(l_R_299))).f_C = r_PARSE_CLOSED_BODY();
}
r_EXPECT(rt_str("END", 3));
if ((((*(R11 *)rt_nil_check(l_R_299))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("FUNCTION", 8));
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
if ((!r_TEQ(((*(R11 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, ((*(R11 *)rt_nil_check(l_R_299))).f_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), ((*(R11 *)rt_nil_check(l_R_299))).f_NAME);
}
r_EXPECT(rt_str(";", 1));
{ R11 * rv303 = l_R_299;
return rv303; }
rt_raise(RT_X_INIT);
}
static R11 * r_BIN_NODE(R7 p_OP, rt_int p_LINE, R11 * p_A, R11 * p_B) { 
R11 * l_N_304; memset(&l_N_304, 0, sizeof l_N_304);
l_N_304 = r_NEW_NODE(g_N_BINOP, p_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_N_304))).f_NAME, p_OP, 0);
((*(R11 *)rt_nil_check(l_N_304))).f_A = p_A;
((*(R11 *)rt_nil_check(l_N_304))).f_B = p_B;
{ R11 * rv305 = l_N_304;
return rv305; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_EXPR(void) { 
R11 * l_E_306; memset(&l_E_306, 0, sizeof l_E_306);
l_E_306 = r_PARSE_SIMPLE();
if ((((r_IS(rt_str("ROUNDED", 7)) || r_IS(rt_str("TRUNCATED", 9))) || r_IS(rt_str("NATIVE_R", 8))) || r_IS(rt_str("NATIVE_T", 8))))
{
{
R11 * l_Q_307; memset(&l_Q_307, 0, sizeof l_Q_307);
l_Q_307 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_Q_307))).f_NAME, r_IDENT(), 0);
((*(R11 *)rt_nil_check(l_Q_307))).f_A = l_E_306;
l_E_306 = l_Q_307;
}
}
if ((r_IS(rt_str("WITH", 4)) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PREC", 4))))
{
{
R11 * l_Q_308; memset(&l_Q_308, 0, sizeof l_Q_308);
l_Q_308 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
r_SKIP();
r_SKIP();
if ((((*(R11 *)rt_nil_check(l_E_306))).f_KIND == g_N_QUAL))
{
l_Q_308 = l_E_306;
}
else
{
((*(R11 *)rt_nil_check(l_Q_308))).f_A = l_E_306;
}
((*(R11 *)rt_nil_check(l_Q_308))).f_B = r_PARSE_SIMPLE();
l_E_306 = l_Q_308;
}
}
{ R11 * rv309 = l_E_306;
return rv309; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_SIMPLE(void) { 
R11 * l_LEFT_310; memset(&l_LEFT_310, 0, sizeof l_LEFT_310);
l_LEFT_310 = r_PARSE_CONJ();
for (;;) {
if ((!((((r_IS(rt_str("OR", 2)) || r_IS(rt_str("!", 1))) || r_IS(rt_str("XOR", 3))) || r_IS(rt_str("->", 2)))))) goto L_end311;
{
{
R10 l_T_312; memset(&l_T_312, 0, sizeof l_T_312);
S_R10(&l_T_312, r_CUR(), 0);
r_SKIP();
l_LEFT_310 = r_BIN_NODE((l_T_312).f_TX, (l_T_312).f_LINE, l_LEFT_310, r_PARSE_CONJ());
}
}
} L_end311: ;
{ R11 * rv313 = l_LEFT_310;
return rv313; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_CONJ(void) { 
R11 * l_LEFT_314; memset(&l_LEFT_314, 0, sizeof l_LEFT_314);
l_LEFT_314 = r_PARSE_RELATION();
for (;;) {
if ((!((r_IS(rt_str("AND", 3)) || r_IS(rt_str("&", 1)))))) goto L_end315;
{
{
R10 l_T_316; memset(&l_T_316, 0, sizeof l_T_316);
S_R10(&l_T_316, r_CUR(), 0);
r_SKIP();
l_LEFT_314 = r_BIN_NODE((l_T_316).f_TX, (l_T_316).f_LINE, l_LEFT_314, r_PARSE_RELATION());
}
}
} L_end315: ;
{ R11 * rv317 = l_LEFT_314;
return rv317; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_RELATION(void) { 
R11 * l_LEFT_318; memset(&l_LEFT_318, 0, sizeof l_LEFT_318);
l_LEFT_318 = r_PARSE_SUM();
for (;;) {
{
{
R10 l_T_320; memset(&l_T_320, 0, sizeof l_T_320);
S_R10(&l_T_320, r_CUR(), 0);
if ((((((r_IS(rt_str("=", 1)) || r_IS(rt_str("<", 1))) || r_IS(rt_str(">", 1))) || r_IS(rt_str("<=", 2))) || r_IS(rt_str(">=", 2))) || r_IS(rt_str("<>", 2))))
{
r_SKIP();
l_LEFT_318 = r_BIN_NODE((l_T_320).f_TX, (l_T_320).f_LINE, l_LEFT_318, r_PARSE_SUM());
}
else if (r_IS(rt_str("IN", 2)))
{
{
R11 * l_N_321; memset(&l_N_321, 0, sizeof l_N_321);
l_N_321 = r_NEW_NODE(g_N_IN, (l_T_320).f_LINE);
r_SKIP();
((*(R11 *)rt_nil_check(l_N_321))).f_A = l_LEFT_318;
((*(R11 *)rt_nil_check(l_N_321))).f_B = r_PARSE_RANGE();
l_LEFT_318 = l_N_321;
}
}
else
{
{ R11 * rv322 = l_LEFT_318;
return rv322; }
}
}
}
} L_end319: ;
rt_raise(RT_X_INIT);
}
static R11 * r_TRY_SCALED(R11 * p_LEFT, rstr p_OPS) { 
rt_int l_SAVED_323; memset(&l_SAVED_323, 0, sizeof l_SAVED_323);
l_SAVED_323 = ((*(R22 *)rt_nil_check(g_W))).f_POS;
rt_int l_LINE_324; memset(&l_LINE_324, 0, sizeof l_LINE_324);
l_LINE_324 = r_LINE_NOW();
R11 * l_N_325; memset(&l_N_325, 0, sizeof l_N_325);
if ((!r_IS(rt_str("!", 1))))
{
{ R11 * rv326 = NULL;
return rv326; }
}
{
R10 l_OP_327; memset(&l_OP_327, 0, sizeof l_OP_327);
S_R10(&l_OP_327, r_AHEAD(((rt_int)1LL)), 0);
R7 l_T_328; memset(&l_T_328, 0, sizeof l_T_328);
S_R7(&l_T_328, (l_OP_327).f_TX, 0);
rt_int l_FOUND_329; memset(&l_FOUND_329, 0, sizeof l_FOUND_329);
l_FOUND_329 = 0;
if (((!((l_OP_327).f_KIND == g_K_SYM)) && (!((l_OP_327).f_KIND == g_K_RES))))
{
{ R11 * rv330 = NULL;
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
} } L_end331: ;
if ((!l_FOUND_329))
{
{ R11 * rv333 = NULL;
return rv333; }
}
r_SKIP();
r_SKIP();
l_N_325 = r_BIN_NODE(l_T_328, l_LINE_324, p_LEFT, NULL);
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R11 *)rt_nil_check(l_N_325))).f_FL = ((rt_int)2LL);
{ R11 * rv334 = l_N_325;
return rv334; }
}
if (((((r_IS_KIND(g_K_NUM) || r_IS_KIND(g_K_ID)) || r_IS(rt_str("(", 1))) || r_IS(rt_str("-", 1))) || r_IS(rt_str("+", 1))))
{
((*(R11 *)rt_nil_check(l_N_325))).f_D = r_PARSE_SECONDARY();
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R11 *)rt_nil_check(l_N_325))).f_FL = ((rt_int)1LL);
{ R11 * rv335 = l_N_325;
return rv335; }
}
}
((*(R22 *)rt_nil_check(g_W))).f_POS = l_SAVED_323;
{ R11 * rv336 = NULL;
return rv336; }
}
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_SUM(void) { 
R11 * l_LEFT_337; memset(&l_LEFT_337, 0, sizeof l_LEFT_337);
l_LEFT_337 = r_PARSE_TERM();
for (;;) {
{
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("!!", 2))))
{
{
R10 l_T_339; memset(&l_T_339, 0, sizeof l_T_339);
S_R10(&l_T_339, r_CUR(), 0);
r_SKIP();
l_LEFT_337 = r_BIN_NODE((l_T_339).f_TX, (l_T_339).f_LINE, l_LEFT_337, r_PARSE_TERM());
}
}
else
{
{
R11 * l_N_340; memset(&l_N_340, 0, sizeof l_N_340);
l_N_340 = r_TRY_SCALED(l_LEFT_337, rt_str("+ -", 3));
if ((l_N_340 == NULL))
{
{ R11 * rv341 = l_LEFT_337;
return rv341; }
}
((*(R11 *)rt_nil_check(l_N_340))).f_B = r_PARSE_TERM();
l_LEFT_337 = l_N_340;
}
}
}
} L_end338: ;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_TERM(void) { 
R11 * l_LEFT_342; memset(&l_LEFT_342, 0, sizeof l_LEFT_342);
l_LEFT_342 = r_PARSE_FACTOR();
for (;;) {
{
if ((((r_IS(rt_str("*", 1)) || r_IS(rt_str("/", 1))) || r_IS(rt_str("//", 2))) || r_IS(rt_str("MOD", 3))))
{
{
R10 l_T_344; memset(&l_T_344, 0, sizeof l_T_344);
S_R10(&l_T_344, r_CUR(), 0);
r_SKIP();
l_LEFT_342 = r_BIN_NODE((l_T_344).f_TX, (l_T_344).f_LINE, l_LEFT_342, r_PARSE_FACTOR());
}
}
else
{
{
R11 * l_N_345; memset(&l_N_345, 0, sizeof l_N_345);
l_N_345 = r_TRY_SCALED(l_LEFT_342, rt_str("* / // MOD", 10));
if ((l_N_345 == NULL))
{
{ R11 * rv346 = l_LEFT_342;
return rv346; }
}
((*(R11 *)rt_nil_check(l_N_345))).f_B = r_PARSE_FACTOR();
l_LEFT_342 = l_N_345;
}
}
}
} L_end343: ;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_FACTOR(void) { 
R11 * l_LEFT_347; memset(&l_LEFT_347, 0, sizeof l_LEFT_347);
l_LEFT_347 = r_PARSE_SECONDARY();
for (;;) {
{
if (r_IS(rt_str("**", 2)))
{
{
R10 l_T_349; memset(&l_T_349, 0, sizeof l_T_349);
S_R10(&l_T_349, r_CUR(), 0);
r_SKIP();
l_LEFT_347 = r_BIN_NODE((l_T_349).f_TX, (l_T_349).f_LINE, l_LEFT_347, r_PARSE_SECONDARY());
}
}
else
{
{
R11 * l_N_350; memset(&l_N_350, 0, sizeof l_N_350);
l_N_350 = r_TRY_SCALED(l_LEFT_347, rt_str("**", 2));
if ((l_N_350 == NULL))
{
{ R11 * rv351 = l_LEFT_347;
return rv351; }
}
((*(R11 *)rt_nil_check(l_N_350))).f_B = r_PARSE_SECONDARY();
l_LEFT_347 = l_N_350;
}
}
}
} L_end348: ;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_SECONDARY(void) { 
R10 l_T_352; memset(&l_T_352, 0, sizeof l_T_352);
S_R10(&l_T_352, r_CUR(), 0);
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("NOT", 3))))
{
{
R11 * l_N_353; memset(&l_N_353, 0, sizeof l_N_353);
l_N_353 = r_NEW_NODE(g_N_UNOP, (l_T_352).f_LINE);
r_SKIP();
S_R7(&((*(R11 *)rt_nil_check(l_N_353))).f_NAME, (l_T_352).f_TX, 0);
((*(R11 *)rt_nil_check(l_N_353))).f_A = r_PARSE_POSTFIX();
{ R11 * rv354 = l_N_353;
return rv354; }
}
}
{ R11 * rv355 = r_PARSE_POSTFIX();
return rv355; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_ARGS(R11 * p_N) { 
R11 * l_HEAD_356; memset(&l_HEAD_356, 0, sizeof l_HEAD_356);
l_HEAD_356 = NULL;
R11 * l_TAIL_357; memset(&l_TAIL_357, 0, sizeof l_TAIL_357);
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
((*(R11 *)rt_nil_check(p_N))).f_A = l_HEAD_356;
}
break;
case 1:
{
((*(R11 *)rt_nil_check(p_N))).f_B = l_HEAD_356;
}
break;
default:
{
r_FAIL(((*(R11 *)rt_nil_check(p_N))).f_LINE, rt_str("too many # in an argument list", 30));
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
} L_end359: ;
r_EXPECT(rt_str(")", 1));
switch (l_GROUP_358) {
case 0:
{
((*(R11 *)rt_nil_check(p_N))).f_A = l_HEAD_356;
}
break;
case 1:
{
((*(R11 *)rt_nil_check(p_N))).f_B = l_HEAD_356;
}
break;
default:
{
((*(R11 *)rt_nil_check(p_N))).f_C = l_HEAD_356;
}
break;
}
{ R11 * rv360 = p_N;
return rv360; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_POSTFIX(void) { 
R11 * l_E_361; memset(&l_E_361, 0, sizeof l_E_361);
l_E_361 = r_PARSE_ATOM();
R11 * l_N_362; memset(&l_N_362, 0, sizeof l_N_362);
for (;;) {
{
{
rt_int l_LINE_364; memset(&l_LINE_364, 0, sizeof l_LINE_364);
l_LINE_364 = r_LINE_NOW();
if ((r_IS(rt_str("(", 1)) && (((*(R11 *)rt_nil_check(l_E_361))).f_KIND == g_N_NAME)))
{
((*(R11 *)rt_nil_check(l_E_361))).f_KIND = g_N_APPLY;
l_E_361 = r_PARSE_ARGS(l_E_361);
}
else if (r_IS(rt_str("(", 1)))
{
l_N_362 = r_NEW_NODE(g_N_INDEX, l_LINE_364);
l_N_362 = r_PARSE_ARGS(l_N_362);
((*(R11 *)rt_nil_check(l_N_362))).f_B = ((*(R11 *)rt_nil_check(l_N_362))).f_A;
((*(R11 *)rt_nil_check(l_N_362))).f_A = l_E_361;
l_E_361 = l_N_362;
}
else if (r_ACCEPT(rt_str(".", 1)))
{
l_N_362 = r_NEW_NODE(g_N_FIELD, l_LINE_364);
((*(R11 *)rt_nil_check(l_N_362))).f_A = l_E_361;
S_R7(&((*(R11 *)rt_nil_check(l_N_362))).f_NAME, r_IDENT(), 0);
l_E_361 = l_N_362;
}
else if (r_ACCEPT(rt_str("@", 1)))
{
l_N_362 = r_NEW_NODE(g_N_DEREF, l_LINE_364);
((*(R11 *)rt_nil_check(l_N_362))).f_A = l_E_361;
l_E_361 = l_N_362;
}
else if ((r_IS(rt_str("[", 1)) && (!r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("]", 1)))))
{
r_SKIP();
l_N_362 = r_NEW_NODE(g_N_SUBSTR, l_LINE_364);
((*(R11 *)rt_nil_check(l_N_362))).f_A = l_E_361;
((*(R11 *)rt_nil_check(l_N_362))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_N_362))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str("]", 1));
l_E_361 = l_N_362;
}
else
{
{ R11 * rv365 = l_E_361;
return rv365; }
}
}
}
} L_end363: ;
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_BITS(rt_int p_BITS_PER, rt_int p_LINE) { 
rt_int l_AT_366; memset(&l_AT_366, 0, sizeof l_AT_366);
l_AT_366 = ((*(R22 *)rt_nil_check(g_W))).f_TOP;
R11 * l_N_367; memset(&l_N_367, 0, sizeof l_N_367);
l_N_367 = r_NEW_NODE(g_N_BITS, p_LINE);
R7 l_R_368; memset(&l_R_368, 0, sizeof l_R_368);
if ((!r_IS_KIND(g_K_STR)))
{
r_FAIL(p_LINE, rt_str("a quoted bitstring expected", 27));
}
for (;;) {
if ((!r_IS_KIND(g_K_STR))) goto L_end369;
{
{
R7 l_T_370; memset(&l_T_370, 0, sizeof l_T_370);
S_R7(&l_T_370, (r_CUR()).f_TX, 0);
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
S_R7(&l_R_368, r_MK(rt_str("1", 1)), 0);
}
else
{
S_R7(&l_R_368, r_MK(rt_str("0", 1)), 0);
}
}
} } L_end379: ;
}
}
}
} } L_end372: ;
}
r_SKIP();
}
} L_end369: ;
S_R7(&((*(R11 *)rt_nil_check(l_N_367))).f_NAME, ({ R7 rc381; memset(&rc381, 0, sizeof rc381);  rc381.f_AT = l_AT_366; rc381.f_LEN = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_TOP, l_AT_366); rc381.f_H = rt_neg(((rt_int)1LL)); rc381; }), 0);
{ R11 * rv382 = l_N_367;
return rv382; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_ATOM(void) { 
R10 l_T_383; memset(&l_T_383, 0, sizeof l_T_383);
S_R10(&l_T_383, r_CUR(), 0);
R11 * l_N_384; memset(&l_N_384, 0, sizeof l_N_384);
if (((l_T_383).f_KIND == g_K_NUM))
{
l_N_384 = r_NEW_NODE(g_N_INT, (l_T_383).f_LINE);
((*(R11 *)rt_nil_check(l_N_384))).f_IV = (l_T_383).f_IV;
S_R7(&((*(R11 *)rt_nil_check(l_N_384))).f_NAME, (l_T_383).f_TX, 0);
r_SKIP();
{ R11 * rv385 = l_N_384;
return rv385; }
}
if ((((l_T_383).f_KIND == g_K_REAL) || ((l_T_383).f_KIND == g_K_FIX)))
{
l_N_384 = r_NEW_NODE(g_N_REAL, (l_T_383).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_N_384))).f_NAME, (l_T_383).f_TX, 0);
if (((l_T_383).f_KIND == g_K_FIX))
{
((*(R11 *)rt_nil_check(l_N_384))).f_FL = ((rt_int)1LL);
((*(R11 *)rt_nil_check(l_N_384))).f_IV = (l_T_383).f_IV;
}
r_SKIP();
{ R11 * rv386 = l_N_384;
return rv386; }
}
if (((l_T_383).f_KIND == g_K_GEN))
{
{ R11 * rv387 = r_PARSE_TYPE_ARG();
return rv387; }
}
if (((r_IS(rt_str("BIN", 3)) || r_IS(rt_str("OCT", 3))) || r_IS(rt_str("HEX", 3))))
{
r_SKIP();
if (r_TOK_IS(l_T_383, rt_str("BIN", 3)))
{
{ R11 * rv388 = r_PARSE_BITS(((rt_int)1LL), (l_T_383).f_LINE);
return rv388; }
}
else if (r_TOK_IS(l_T_383, rt_str("OCT", 3)))
{
{ R11 * rv389 = r_PARSE_BITS(((rt_int)3LL), (l_T_383).f_LINE);
return rv389; }
}
{ R11 * rv390 = r_PARSE_BITS(((rt_int)4LL), (l_T_383).f_LINE);
return rv390; }
}
if ((((l_T_383).f_KIND == g_K_STR) || ((l_T_383).f_KIND == g_K_ENUM)))
{
{ R11 * rv391 = r_PARSE_CHARSTRING(r_NO_TEXT());
return rv391; }
}
if ((((l_T_383).f_KIND == g_K_ID) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_STR)))
{
r_SKIP();
{ R11 * rv392 = r_PARSE_CHARSTRING((l_T_383).f_TX);
return rv392; }
}
if (r_ACCEPT(rt_str("TRUE", 4)))
{
l_N_384 = r_NEW_NODE(g_N_BOOL, (l_T_383).f_LINE);
((*(R11 *)rt_nil_check(l_N_384))).f_IV = ((rt_int)1LL);
{ R11 * rv393 = l_N_384;
return rv393; }
}
else if (r_ACCEPT(rt_str("FALSE", 5)))
{
{ R11 * rv394 = r_NEW_NODE(g_N_BOOL, (l_T_383).f_LINE);
return rv394; }
}
else if (r_ACCEPT(rt_str("NIL", 3)))
{
{ R11 * rv395 = r_NEW_NODE(g_N_NIL, (l_T_383).f_LINE);
return rv395; }
}
else if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R11 * rv396 = r_NEW_NODE(g_N_ANY, (l_T_383).f_LINE);
return rv396; }
}
if (r_ACCEPT(rt_str("[", 1)))
{
{
R11 * l_TS_397; memset(&l_TS_397, 0, sizeof l_TS_397);
l_TS_397 = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str("]", 1));
r_EXPECT(rt_str("$$", 2));
if (((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
l_N_384 = r_PARSE_ATOM();
((*(R11 *)rt_nil_check(l_N_384))).f_B = l_TS_397;
{ R11 * rv398 = l_N_384;
return rv398; }
}
l_N_384 = r_NEW_NODE(g_N_TYPESPEC, (l_T_383).f_LINE);
((*(R11 *)rt_nil_check(l_N_384))).f_A = l_TS_397;
r_EXPECT(rt_str("(", 1));
((*(R11 *)rt_nil_check(l_N_384))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
{ R11 * rv399 = l_N_384;
return rv399; }
}
}
if (r_IS(rt_str("(", 1)))
{
if ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
{
R11 * l_HEAD_400; memset(&l_HEAD_400, 0, sizeof l_HEAD_400);
l_HEAD_400 = NULL;
R11 * l_TAIL_401; memset(&l_TAIL_401, 0, sizeof l_TAIL_401);
l_TAIL_401 = NULL;
r_SKIP();
for (;;) {
{
l_N_384 = r_NEW_NODE(g_N_FINIT, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_N_384))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(":", 1));
((*(R11 *)rt_nil_check(l_N_384))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_N_384, &l_HEAD_400, &l_TAIL_401);
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end402;
} L_end402: ;
r_EXPECT(rt_str(")", 1));
l_N_384 = r_NEW_NODE(g_N_RECCONS, (l_T_383).f_LINE);
((*(R11 *)rt_nil_check(l_N_384))).f_A = l_HEAD_400;
{ R11 * rv403 = l_N_384;
return rv403; }
}
}
r_SKIP();
{
R11 * l_E_404; memset(&l_E_404, 0, sizeof l_E_404);
l_E_404 = r_PARSE_EXPR();
if (r_IS(rt_str(",", 1)))
{
{
R11 * l_HEAD_405; memset(&l_HEAD_405, 0, sizeof l_HEAD_405);
l_HEAD_405 = NULL;
R11 * l_TAIL_406; memset(&l_TAIL_406, 0, sizeof l_TAIL_406);
l_TAIL_406 = NULL;
r_ADD_LIST(l_E_404, &l_HEAD_405, &l_TAIL_406);
for (;;) {
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end407;
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_405, &l_TAIL_406);
}
} L_end407: ;
r_EXPECT(rt_str(")", 1));
l_N_384 = r_NEW_NODE(g_N_ARRCONS, (l_T_383).f_LINE);
((*(R11 *)rt_nil_check(l_N_384))).f_A = l_HEAD_405;
{ R11 * rv408 = l_N_384;
return rv408; }
}
}
r_EXPECT(rt_str(")", 1));
l_N_384 = r_NEW_NODE(g_N_PAREN, (l_T_383).f_LINE);
((*(R11 *)rt_nil_check(l_N_384))).f_A = l_E_404;
{ R11 * rv409 = l_N_384;
return rv409; }
}
}
if (((l_T_383).f_KIND == g_K_ID))
{
l_N_384 = r_NEW_NODE(g_N_NAME, (l_T_383).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_N_384))).f_NAME, ((*(R11 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (((r_TEQS(((*(R11 *)rt_nil_check(l_N_384))).f_NAME, rt_str("NEW", 3)) || r_TEQS(((*(R11 *)rt_nil_check(l_N_384))).f_NAME, rt_str("PTR$NEW", 7))) || r_TEQS(((*(R11 *)rt_nil_check(l_N_384))).f_NAME, rt_str("SEMAPHORE$NEW", 13))))
{
((*(R11 *)rt_nil_check(l_N_384))).f_KIND = g_N_NEW;
r_EXPECT(rt_str("(", 1));
((*(R11 *)rt_nil_check(l_N_384))).f_A = r_PARSE_TYPE_ARG();
r_EXPECT(rt_str(")", 1));
}
{ R11 * rv410 = l_N_384;
return rv410; }
}
r_FAILT((l_T_383).f_LINE, rt_str("an expression expected, not ", 28), (l_T_383).f_TX);
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_CHARSTRING(R7 p_CHARSET) { 
rt_int l_LINE_411; memset(&l_LINE_411, 0, sizeof l_LINE_411);
l_LINE_411 = r_LINE_NOW();
R11 * l_HEAD_412; memset(&l_HEAD_412, 0, sizeof l_HEAD_412);
l_HEAD_412 = NULL;
R11 * l_TAIL_413; memset(&l_TAIL_413, 0, sizeof l_TAIL_413);
l_TAIL_413 = NULL;
rt_int l_STRINGS_414; memset(&l_STRINGS_414, 0, sizeof l_STRINGS_414);
l_STRINGS_414 = ((rt_int)0LL);
R11 * l_N_415; memset(&l_N_415, 0, sizeof l_N_415);
for (;;) {
if ((!((r_IS_KIND(g_K_STR) || r_IS_KIND(g_K_ENUM))))) goto L_end416;
{
l_N_415 = r_NEW_NODE(g_N_PART, r_LINE_NOW());
((*(R11 *)rt_nil_check(l_N_415))).f_IV = (r_CUR()).f_KIND;
S_R7(&((*(R11 *)rt_nil_check(l_N_415))).f_NAME, (r_CUR()).f_TX, 0);
if ((((*(R11 *)rt_nil_check(l_N_415))).f_IV == g_K_STR))
{
l_STRINGS_414 = rt_add(l_STRINGS_414, ((rt_int)1LL));
}
r_SKIP();
r_ADD_LIST(l_N_415, &l_HEAD_412, &l_TAIL_413);
}
} L_end416: ;
if (((l_STRINGS_414 == ((rt_int)0LL)) && ((p_CHARSET).f_LEN == ((rt_int)0LL))))
{
if ((!(((*(R11 *)rt_nil_check(l_HEAD_412))).f_NEXT == NULL)))
{
r_FAIL(l_LINE_411, rt_str("two enumerated literals in a row", 32));
}
((*(R11 *)rt_nil_check(l_HEAD_412))).f_KIND = g_N_ENUMLIT;
{ R11 * rv417 = l_HEAD_412;
return rv417; }
}
l_N_415 = r_NEW_NODE(g_N_STR, l_LINE_411);
((*(R11 *)rt_nil_check(l_N_415))).f_A = l_HEAD_412;
S_R7(&((*(R11 *)rt_nil_check(l_N_415))).f_NAME, p_CHARSET, 0);
{ R11 * rv418 = l_N_415;
return rv418; }
rt_raise(RT_X_INIT);
}
static rt_int r_AT_BODY_END(void) { 
{ rt_int rv419 = ((((((((((r_IS_KIND(g_K_EOF) || r_IS(rt_str("END", 3))) || r_IS(rt_str("ELSE", 4))) || r_IS(rt_str("ORIF", 4))) || r_IS(rt_str("EXCEPT", 6))) || r_IS(rt_str("PROCEDURE", 9))) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS(rt_str("TARGET", 6))) || r_IS(rt_str("MODULE", 6))) || r_IS(rt_str("PATH", 4)));
return rv419; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_STATEMENTS(void) { 
R11 * l_HEAD_420; memset(&l_HEAD_420, 0, sizeof l_HEAD_420);
l_HEAD_420 = NULL;
R11 * l_TAIL_421; memset(&l_TAIL_421, 0, sizeof l_TAIL_421);
l_TAIL_421 = NULL;
for (;;) {
if (r_AT_BODY_END()) goto L_end422;
{
r_ADD_LIST(r_PARSE_STATEMENT(), &l_HEAD_420, &l_TAIL_421);
}
} L_end422: ;
{ R11 * rv423 = l_HEAD_420;
return rv423; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_HANDLERS(void) { 
R11 * l_HEAD_424; memset(&l_HEAD_424, 0, sizeof l_HEAD_424);
l_HEAD_424 = NULL;
R11 * l_TAIL_425; memset(&l_TAIL_425, 0, sizeof l_TAIL_425);
l_TAIL_425 = NULL;
r_EXPECT(rt_str("EXCEPT", 6));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end426;
{
{
R11 * l_H_427; memset(&l_H_427, 0, sizeof l_H_427);
l_H_427 = r_NEW_NODE(g_N_HANDLER, r_LINE_NOW());
((*(R11 *)rt_nil_check(l_H_427))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str("-->", 3));
((*(R11 *)rt_nil_check(l_H_427))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_H_427, &l_HEAD_424, &l_TAIL_425);
}
}
} L_end426: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("EXCEPT", 6));
r_EXPECT(rt_str(";", 1));
{ R11 * rv428 = l_HEAD_424;
return rv428; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_STATEMENT(void) { 
R11 * l_S_429; memset(&l_S_429, 0, sizeof l_S_429);
if ((r_IS_KIND(g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str(":", 1))))
{
l_S_429 = r_NEW_NODE(g_N_LABELED, r_LINE_NOW());
S_R7(&((*(R11 *)rt_nil_check(l_S_429))).f_NAME, r_IDENT(), 0);
r_SKIP();
((*(R11 *)rt_nil_check(l_S_429))).f_A = r_PARSE_STATEMENT();
{ R11 * rv430 = l_S_429;
return rv430; }
}
l_S_429 = r_PARSE_UNLABELED();
if (r_IS(rt_str("EXCEPT", 6)))
{
{
R11 * l_X_431; memset(&l_X_431, 0, sizeof l_X_431);
l_X_431 = r_NEW_NODE(g_N_EXCEPT, r_LINE_NOW());
((*(R11 *)rt_nil_check(l_X_431))).f_A = l_S_429;
((*(R11 *)rt_nil_check(l_X_431))).f_B = r_PARSE_HANDLERS();
{ R11 * rv432 = l_X_431;
return rv432; }
}
}
{ R11 * rv433 = l_S_429;
return rv433; }
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
rt_int l_LINE_434; memset(&l_LINE_434, 0, sizeof l_LINE_434);
l_LINE_434 = r_LINE_NOW();
R11 * l_S_435; memset(&l_S_435, 0, sizeof l_S_435);
R11 * l_T_436; memset(&l_T_436, 0, sizeof l_T_436);
if (r_ACCEPT(rt_str(";", 1)))
{
{ R11 * rv437 = r_NEW_NODE(g_N_NULL, l_LINE_434);
return rv437; }
}
else if (r_IS(rt_str("IF", 2)))
{
{ R11 * rv438 = r_PARSE_IF();
return rv438; }
}
else if (r_IS(rt_str("SELECT", 6)))
{
{ R11 * rv439 = r_PARSE_CASE();
return rv439; }
}
else if (r_IS(rt_str("LOOP", 4)))
{
{ R11 * rv440 = r_PARSE_LOOP();
return rv440; }
}
else if (r_IS(rt_str("PAR_BLOCK", 9)))
{
{ R11 * rv441 = r_PARSE_PAR();
return rv441; }
}
else if (r_ACCEPT(rt_str("BLOCK", 5)))
{
l_S_435 = r_NEW_NODE(g_N_BLOCK, l_LINE_434);
((*(R11 *)rt_nil_check(l_S_435))).f_A = r_PARSE_BODY();
r_EXPECT_END(rt_str("BLOCK", 5));
{ R11 * rv442 = l_S_435;
return rv442; }
}
else if (r_ACCEPT(rt_str("WITH", 4)))
{
l_S_435 = r_NEW_NODE(g_N_WITH, l_LINE_434);
S_R7(&((*(R11 *)rt_nil_check(l_S_435))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("NAMING", 6)))
{
((*(R11 *)rt_nil_check(l_S_435))).f_IV = ((rt_int)1LL);
((*(R11 *)rt_nil_check(l_S_435))).f_A = r_PARSE_POSTFIX();
}
else
{
r_EXPECT(rt_str(":=", 2));
((*(R11 *)rt_nil_check(l_S_435))).f_A = r_PARSE_EXPR();
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
((*(R11 *)rt_nil_check(l_S_435))).f_B = r_PARSE_UNLABELED();
{ R11 * rv443 = l_S_435;
return rv443; }
}
else if (r_ACCEPT(rt_str("EXIT", 4)))
{
r_EXPECT(rt_str(";", 1));
{ R11 * rv444 = r_NEW_NODE(g_N_EXIT, l_LINE_434);
return rv444; }
}
else if (r_ACCEPT(rt_str("GO", 2)))
{
r_EXPECT(rt_str("TO", 2));
l_S_435 = r_NEW_NODE(g_N_GOTO, l_LINE_434);
S_R7(&((*(R11 *)rt_nil_check(l_S_435))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(";", 1));
{ R11 * rv445 = l_S_435;
return rv445; }
}
else if (r_ACCEPT(rt_str("RETURN", 6)))
{
l_S_435 = r_NEW_NODE(g_N_RETURN, l_LINE_434);
if ((!r_IS(rt_str(";", 1))))
{
((*(R11 *)rt_nil_check(l_S_435))).f_A = r_PARSE_EXPR();
}
r_EXPECT(rt_str(";", 1));
{ R11 * rv446 = l_S_435;
return rv446; }
}
else if (r_ACCEPT(rt_str("SIGNAL", 6)))
{
l_S_435 = r_NEW_NODE(g_N_SIGNAL, l_LINE_434);
if (r_IS_KIND(g_K_ID))
{
S_R7(&((*(R11 *)rt_nil_check(l_S_435))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str(";", 1));
{ R11 * rv447 = l_S_435;
return rv447; }
}
else if (r_ACCEPT(rt_str("ASSERT", 6)))
{
l_S_435 = r_NEW_NODE(g_N_ASSERT, l_LINE_434);
((*(R11 *)rt_nil_check(l_S_435))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R11 * rv448 = l_S_435;
return rv448; }
}
else if (r_ACCEPT(rt_str("TERMINATE", 9)))
{
l_S_435 = r_NEW_NODE(g_N_TERMINATE, l_LINE_434);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R11 *)rt_nil_check(l_S_435))).f_A = r_PARSE_POSTFIX();
r_EXPECT(rt_str(")", 1));
}
r_EXPECT(rt_str(";", 1));
{ R11 * rv449 = l_S_435;
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
((*(R11 *)rt_nil_check(l_S_435))).f_A = l_T_436;
((*(R11 *)rt_nil_check(l_S_435))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R11 * rv450 = l_S_435;
return rv450; }
}
r_EXPECT(rt_str(";", 1));
if (((((*(R11 *)rt_nil_check(l_T_436))).f_KIND == g_N_NAME) || (((*(R11 *)rt_nil_check(l_T_436))).f_KIND == g_N_APPLY)))
{
((*(R11 *)rt_nil_check(l_T_436))).f_KIND = g_N_CALL;
}
else
{
r_FAIL(l_LINE_434, rt_str("a statement expected", 20));
}
{ R11 * rv451 = l_T_436;
return rv451; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_IF(void) { 
R11 * l_S_452; memset(&l_S_452, 0, sizeof l_S_452);
l_S_452 = r_NEW_NODE(g_N_IF, r_LINE_NOW());
R11 * l_HEAD_453; memset(&l_HEAD_453, 0, sizeof l_HEAD_453);
l_HEAD_453 = NULL;
R11 * l_TAIL_454; memset(&l_TAIL_454, 0, sizeof l_TAIL_454);
l_TAIL_454 = NULL;
r_EXPECT(rt_str("IF", 2));
for (;;) {
{
{
R11 * l_ARM_456; memset(&l_ARM_456, 0, sizeof l_ARM_456);
l_ARM_456 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
((*(R11 *)rt_nil_check(l_ARM_456))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("THEN", 4));
((*(R11 *)rt_nil_check(l_ARM_456))).f_B = r_PARSE_BODY();
r_ADD_LIST(l_ARM_456, &l_HEAD_453, &l_TAIL_454);
}
}
if ((!r_ACCEPT(rt_str("ORIF", 4)))) goto L_end455;
} L_end455: ;
((*(R11 *)rt_nil_check(l_S_452))).f_A = l_HEAD_453;
if (r_ACCEPT(rt_str("ELSE", 4)))
{
((*(R11 *)rt_nil_check(l_S_452))).f_B = r_PARSE_BODY();
}
r_EXPECT_END(rt_str("IF", 2));
{ R11 * rv457 = l_S_452;
return rv457; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_CASE_LABEL(void) { 
if ((r_IS(rt_str("[", 1)) || ((r_IS(rt_str("(", 1)) && r_RANGE_AHEAD()))))
{
{ R11 * rv458 = r_PARSE_RANGE();
return rv458; }
}
{ R11 * rv459 = r_PARSE_EXPR();
return rv459; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_CASE(void) { 
R11 * l_S_460; memset(&l_S_460, 0, sizeof l_S_460);
l_S_460 = r_NEW_NODE(g_N_CASE, r_LINE_NOW());
R11 * l_HEAD_461; memset(&l_HEAD_461, 0, sizeof l_HEAD_461);
l_HEAD_461 = NULL;
R11 * l_TAIL_462; memset(&l_TAIL_462, 0, sizeof l_TAIL_462);
l_TAIL_462 = NULL;
r_EXPECT(rt_str("SELECT", 6));
((*(R11 *)rt_nil_check(l_S_460))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end463;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R11 *)rt_nil_check(l_S_460))).f_C = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R11 *)rt_nil_check(l_S_460))).f_D = r_PARSE_HANDLERS();
}
}
else
{
{
R11 * l_ARM_464; memset(&l_ARM_464, 0, sizeof l_ARM_464);
l_ARM_464 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
R11 * l_LH_465; memset(&l_LH_465, 0, sizeof l_LH_465);
l_LH_465 = NULL;
R11 * l_LT_466; memset(&l_LT_466, 0, sizeof l_LT_466);
l_LT_466 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_465, &l_LT_466);
}
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end467;
} L_end467: ;
r_EXPECT(rt_str("-->", 3));
((*(R11 *)rt_nil_check(l_ARM_464))).f_A = l_LH_465;
((*(R11 *)rt_nil_check(l_ARM_464))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R11 *)rt_nil_check(l_ARM_464))).f_C = r_PARSE_HANDLERS();
}
r_ADD_LIST(l_ARM_464, &l_HEAD_461, &l_TAIL_462);
}
}
}
} L_end463: ;
((*(R11 *)rt_nil_check(l_S_460))).f_B = l_HEAD_461;
r_EXPECT_END(rt_str("SELECT", 6));
{ R11 * rv468 = l_S_460;
return rv468; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_LOOP(void) { 
R11 * l_S_469; memset(&l_S_469, 0, sizeof l_S_469);
l_S_469 = r_NEW_NODE(g_N_LOOP, r_LINE_NOW());
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("FOR", 3)))
{
((*(R11 *)rt_nil_check(l_S_469))).f_KIND = g_N_FOR;
if (r_IS_KIND(g_K_ID))
{
S_R7(&((*(R11 *)rt_nil_check(l_S_469))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("IN", 2));
}
((*(R11 *)rt_nil_check(l_S_469))).f_A = r_PARSE_RANGE();
r_EXPECT(rt_str("DO", 2));
((*(R11 *)rt_nil_check(l_S_469))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_IS_KIND(g_K_ID))
{
if ((!r_TEQ(r_IDENT(), ((*(R11 *)rt_nil_check(l_S_469))).f_NAME)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier", 38));
}
}
else if (((((*(R11 *)rt_nil_check(l_S_469))).f_NAME).f_LEN > ((rt_int)0LL)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier (4.5.6.3)", 48));
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R11 * rv470 = l_S_469;
return rv470; }
}
if (r_ACCEPT(rt_str("UNTIL", 5)))
{
((*(R11 *)rt_nil_check(l_S_469))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("DO", 2));
}
((*(R11 *)rt_nil_check(l_S_469))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("WHEN", 4)))
{
if ((!(((*(R11 *)rt_nil_check(l_S_469))).f_A == NULL)))
{
r_FAIL(r_LINE_NOW(), rt_str("only one of UNTIL and WHEN (4.5.6.1)", 36));
}
((*(R11 *)rt_nil_check(l_S_469))).f_C = r_PARSE_EXPR();
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R11 * rv471 = l_S_469;
return rv471; }
rt_raise(RT_X_INIT);
}
static R11 * r_PARSE_PAR(void) { 
R11 * l_S_472; memset(&l_S_472, 0, sizeof l_S_472);
l_S_472 = r_NEW_NODE(g_N_PAR, r_LINE_NOW());
R11 * l_HEAD_473; memset(&l_HEAD_473, 0, sizeof l_HEAD_473);
l_HEAD_473 = NULL;
R11 * l_TAIL_474; memset(&l_TAIL_474, 0, sizeof l_TAIL_474);
l_TAIL_474 = NULL;
r_EXPECT(rt_str("PAR_BLOCK", 9));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end475;
{
{
R11 * l_P_476; memset(&l_P_476, 0, sizeof l_P_476);
l_P_476 = r_NEW_NODE(g_N_PATH, r_LINE_NOW());
R11 * l_H_477; memset(&l_H_477, 0, sizeof l_H_477);
l_H_477 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
r_EXPECT(rt_str("PATH", 4));
S_R7(&((*(R11 *)rt_nil_check(l_P_476))).f_NAME, r_IDENT(), 0);
((*(R11 *)rt_nil_check(l_P_476))).f_E = r_NEW_NODE(g_N_IDENT, ((*(R11 *)rt_nil_check(l_P_476))).f_LINE);
((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_P_476))).f_E))).f_A = l_H_477;
if (r_ACCEPT(rt_str("FOR", 3)))
{
S_R7(&((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_P_476))).f_E))).f_NAME, r_IDENT(), 0);
((*(R11 *)rt_nil_check(l_P_476))).f_FL = ((rt_int)1LL);
r_EXPECT(rt_str("IN", 2));
((*(R11 *)rt_nil_check(l_P_476))).f_A = r_PARSE_RANGE();
}
for (;;) {
{
if (r_ACCEPT(rt_str("PRIORITY", 8)))
{
((*(R11 *)rt_nil_check(l_P_476))).f_C = r_PARSE_EXPR();
}
else if (r_ACCEPT(rt_str("CONNECT", 7)))
{
r_EXPECT(rt_str("(", 1));
((*(R11 *)rt_nil_check(l_P_476))).f_D = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R11 *)rt_nil_check(l_H_477))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R11 *)rt_nil_check(l_H_477))).f_B = r_PARSE_ITEMS();
}
else
{
goto L_end478;
}
}
} L_end478: ;
r_EXPECT(rt_str(";", 1));
((*(R11 *)rt_nil_check(l_P_476))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PATH", 4));
r_EXPECT_NAME(((*(R11 *)rt_nil_check(l_P_476))).f_NAME);
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_P_476, &l_HEAD_473, &l_TAIL_474);
}
}
} L_end475: ;
((*(R11 *)rt_nil_check(l_S_472))).f_A = l_HEAD_473;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PAR_BLOCK", 9));
r_EXPECT(rt_str(";", 1));
{ R11 * rv479 = l_S_472;
return rv479; }
rt_raise(RT_X_INIT);
}
static R7 r_NO_TEXT(void) { 
{ R7 rv480 = ({ R7 rc481; memset(&rc481, 0, sizeof rc481);  rc481.f_AT = ((rt_int)0LL); rc481.f_LEN = ((rt_int)0LL); rc481.f_H = ((rt_int)0LL); rc481; });
return rv480; }
rt_raise(RT_X_INIT);
}
static R12 r_NO_MVAL(void) { 
{ R12 rv482 = ({ R12 rc483; memset(&rc483, 0, sizeof rc483);  rc483.f_OK = 0; rc483.f_V = ((rt_int)0LL); rc483; });
return rv482; }
rt_raise(RT_X_INIT);
}
static R12 r_SOME(rt_int p_V) { 
{ R12 rv484 = ({ R12 rc485; memset(&rc485, 0, sizeof rc485);  rc485.f_OK = 1; rc485.f_V = p_V; rc485; });
return rv484; }
rt_raise(RT_X_INIT);
}
static R13 * r_NEW_SYM(rt_int p_KIND, R7 p_NAME) { 
R13 * l_Y_486; memset(&l_Y_486, 0, sizeof l_Y_486);
l_Y_486 = ((R13 *)rt_alloc(sizeof (R13)));
rt_int l_LEVEL_487; memset(&l_LEVEL_487, 0, sizeof l_LEVEL_487);
l_LEVEL_487 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(g_W))).f_CS == NULL)))
{
l_LEVEL_487 = ((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
}
S_R13(&(*(R13 *)rt_nil_check(l_Y_486)), ({ R13 rc488; memset(&rc488, 0, sizeof rc488);  rc488.f_KIND = p_KIND; rc488.f_DEPTH = ((*(R22 *)rt_nil_check(g_W))).f_DEPTH; rc488.f_LEVEL = l_LEVEL_487; S_R7(&rc488.f_NAME, p_NAME, 0); rc488.f_T = NULL; S_R7(&rc488.f_ACCESS, r_NO_TEXT(), 0); S_R7(&rc488.f_FIELD, r_NO_TEXT(), 0); rc488.f_INPUT = 0; rc488.f_BYREF = 0; rc488.f_HASMV = 0; rc488.f_MV = ((rt_int)0LL); rc488.f_TS = NULL; rc488.f_BUSY = 0; S_R7(&rc488.f_FWD, r_NO_TEXT(), 0); rc488.f_PARAMS = NULL; rc488.f_RESULT = NULL; rc488.f_DECL = NULL; S_R7(&rc488.f_PREFIX, r_NO_TEXT(), 0); rc488.f_MODL = ((*(R22 *)rt_nil_check(g_W))).f_MODL; rc488.f_EXPORTED = 0; rc488.f_GENERIC = 0; rc488.f_FRAMED = 0; rc488.f_USES = NULL; rc488.f_INSTANCES = NULL; rc488.f_BINDINGS = NULL; rc488.f_ORIG = NULL; rc488.f_MEMBERS = NULL; rc488.f_SAVED = NULL; rc488.f_OWNER = r_CUR_OWNER(); rc488.f_CHAIN = NULL; rc488.f_SNEXT = NULL; rc488; }), 0);
{ R13 * rv489 = l_Y_486;
return rv489; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_OWNER(void) { 
if ((((*(R22 *)rt_nil_check(g_W))).f_IS == NULL))
{
{ rt_int rv490 = ((rt_int)0LL);
return rv490; }
}
{ rt_int rv491 = ((*(R28 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_IS))).f_ID;
return rv491; }
rt_raise(RT_X_INIT);
}
static R13 * r_ORIGINAL(R13 * p_Y) { 
if ((!(((*(R13 *)rt_nil_check(p_Y))).f_ORIG == NULL)))
{
{ R13 * rv492 = ((*(R13 *)rt_nil_check(p_Y))).f_ORIG;
return rv492; }
}
{ R13 * rv493 = p_Y;
return rv493; }
rt_raise(RT_X_INIT);
}
static rt_int r_BUCKET(R7 p_NAME) { 
if (((p_NAME).f_H < ((rt_int)0LL)))
{
{ rt_int rv494 = r_HASH_OF(r_STR(p_NAME, (p_NAME).f_LEN));
return rv494; }
}
{ rt_int rv495 = (p_NAME).f_H;
return rv495; }
rt_raise(RT_X_INIT);
}
static R13 * r_LOOKUP(R7 p_NAME) { 
R13 * l_Y_496; memset(&l_Y_496, 0, sizeof l_Y_496);
l_Y_496 = (((*(R22 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(r_BUCKET(p_NAME), (((*(R22 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
for (;;) {
if ((l_Y_496 == NULL)) goto L_end497;
{
if (r_TEQ(((*(R13 *)rt_nil_check(l_Y_496))).f_NAME, p_NAME))
{
{ R13 * rv498 = l_Y_496;
return rv498; }
}
l_Y_496 = ((*(R13 *)rt_nil_check(l_Y_496))).f_CHAIN;
}
} L_end497: ;
{ R13 * rv499 = NULL;
return rv499; }
rt_raise(RT_X_INIT);
}
static R13 * r_ORIG_LOOKUP(R7 p_NAME) { 
R13 * l_Y_500; memset(&l_Y_500, 0, sizeof l_Y_500);
l_Y_500 = r_LOOKUP(p_NAME);
if ((l_Y_500 == NULL))
{
{ R13 * rv501 = NULL;
return rv501; }
}
{ R13 * rv502 = r_ORIGINAL(l_Y_500);
return rv502; }
rt_raise(RT_X_INIT);
}
static R13 * r_LOOKUPS(rstr p_NAME) { 
{ R13 * rv503 = r_LOOKUP(r_MKN(p_NAME));
return rv503; }
rt_raise(RT_X_INIT);
}
static R13 * r_LOOKUP_NEXT(R13 * p_Y) { 
R13 * l_Z_504; memset(&l_Z_504, 0, sizeof l_Z_504);
l_Z_504 = ((*(R13 *)rt_nil_check(p_Y))).f_CHAIN;
for (;;) {
if ((l_Z_504 == NULL)) goto L_end505;
{
if (r_TEQ(((*(R13 *)rt_nil_check(l_Z_504))).f_NAME, ((*(R13 *)rt_nil_check(p_Y))).f_NAME))
{
{ R13 * rv506 = l_Z_504;
return rv506; }
}
l_Z_504 = ((*(R13 *)rt_nil_check(l_Z_504))).f_CHAIN;
}
} L_end505: ;
{ R13 * rv507 = NULL;
return rv507; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUTINE(R13 * p_Y) { 
{ rt_int rv508 = ((((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_BUILTIN));
return rv508; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE(R13 * p_Y, rt_int p_LINE) { 
rt_int l_B_509; memset(&l_B_509, 0, sizeof l_B_509);
l_B_509 = r_BUCKET(((*(R13 *)rt_nil_check(p_Y))).f_NAME);
R13 * l_OLD_510; memset(&l_OLD_510, 0, sizeof l_OLD_510);
l_OLD_510 = r_LOOKUP(((*(R13 *)rt_nil_check(p_Y))).f_NAME);
for (;;) {
if ((l_OLD_510 == NULL)) goto L_end511;
{
if ((!(((*(R13 *)rt_nil_check(l_OLD_510))).f_DEPTH == ((*(R22 *)rt_nil_check(g_W))).f_DEPTH)))
{
goto L_end511;
}
if ((!((((r_IS_ROUTINE(l_OLD_510) && r_IS_ROUTINE(p_Y))) || (((((*(R13 *)rt_nil_check(l_OLD_510))).f_KIND == g_Y_ENUMLIT) && (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)))))))
{
r_FAILT(p_LINE, rt_str("redeclared in the same scope: ", 30), ((*(R13 *)rt_nil_check(p_Y))).f_NAME);
}
l_OLD_510 = r_LOOKUP_NEXT(l_OLD_510);
}
} L_end511: ;
((*(R13 *)rt_nil_check(p_Y))).f_DEPTH = ((*(R22 *)rt_nil_check(g_W))).f_DEPTH;
((*(R13 *)rt_nil_check(p_Y))).f_CHAIN = (((*(R22 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_509, (((*(R22 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R22 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_509, (((*(R22 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_Y;
((*(R13 *)rt_nil_check(p_Y))).f_SNEXT = ((*(R22 *)rt_nil_check(g_W))).f_SCOPE;
((*(R22 *)rt_nil_check(g_W))).f_SCOPE = p_Y;
}
static void r_OPEN_SCOPE(void) { 
((*(R22 *)rt_nil_check(g_W))).f_DEPTH = rt_add(((*(R22 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
}
static void r_CLOSE_SCOPE(void) { 
((*(R22 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((((*(R22 *)rt_nil_check(g_W))).f_SCOPE == NULL)) goto L_end512;
{
if ((((*(R13 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH <= ((*(R22 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end512;
}
r_UNLINK(((*(R22 *)rt_nil_check(g_W))).f_SCOPE);
((*(R22 *)rt_nil_check(g_W))).f_SCOPE = ((*(R13 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_SCOPE))).f_SNEXT;
}
} L_end512: ;
}
static void r_UNLINK(R13 * p_Y) { 
rt_int l_B_513; memset(&l_B_513, 0, sizeof l_B_513);
l_B_513 = r_BUCKET(((*(R13 *)rt_nil_check(p_Y))).f_NAME);
R13 * l_P_514; memset(&l_P_514, 0, sizeof l_P_514);
l_P_514 = (((*(R22 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_513, (((*(R22 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
if ((l_P_514 == p_Y))
{
(((*(R22 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_513, (((*(R22 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = ((*(R13 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
for (;;) {
if ((l_P_514 == NULL)) goto L_end515;
{
if ((((*(R13 *)rt_nil_check(l_P_514))).f_CHAIN == p_Y))
{
((*(R13 *)rt_nil_check(l_P_514))).f_CHAIN = ((*(R13 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
l_P_514 = ((*(R13 *)rt_nil_check(l_P_514))).f_CHAIN;
}
} L_end515: ;
}
static R13 * r_TAKE_SCOPE(R13 * p_MARK) { 
R13 * l_HEAD_516; memset(&l_HEAD_516, 0, sizeof l_HEAD_516);
l_HEAD_516 = NULL;
for (;;) {
if ((((*(R22 *)rt_nil_check(g_W))).f_SCOPE == p_MARK)) goto L_end517;
{
{
R13 * l_Y_518; memset(&l_Y_518, 0, sizeof l_Y_518);
l_Y_518 = ((*(R22 *)rt_nil_check(g_W))).f_SCOPE;
r_UNLINK(l_Y_518);
((*(R22 *)rt_nil_check(g_W))).f_SCOPE = ((*(R13 *)rt_nil_check(l_Y_518))).f_SNEXT;
((*(R13 *)rt_nil_check(l_Y_518))).f_SNEXT = l_HEAD_516;
l_HEAD_516 = l_Y_518;
}
}
} L_end517: ;
{ R13 * rv519 = l_HEAD_516;
return rv519; }
rt_raise(RT_X_INIT);
}
static R14 * r_NEW_TYP(rt_int p_KIND) { 
R14 * l_T_520; memset(&l_T_520, 0, sizeof l_T_520);
l_T_520 = ((R14 *)rt_alloc(sizeof (R14)));
S_R14(&(*(R14 *)rt_nil_check(l_T_520)), ({ R14 rc521; memset(&rc521, 0, sizeof rc521);  rc521.f_KIND = p_KIND; rc521.f_SCALE = ((rt_int)0LL); S_R7(&rc521.f_LO_C, r_NO_TEXT(), 0); S_R7(&rc521.f_HI_C, r_NO_TEXT(), 0); S_R12(&rc521.f_MLO, r_NO_MVAL(), 0); S_R12(&rc521.f_MHI, r_NO_MVAL(), 0); rc521.f_RLEVEL = ((rt_int)0LL); S_R7(&rc521.f_LEN_C, r_NO_TEXT(), 0); S_R12(&rc521.f_MLEN, r_NO_MVAL(), 0); S_R7(&rc521.f_GEN, r_NO_TEXT(), 0); rc521.f_BASE = NULL; rc521.f_ELEM = NULL; rc521.f_TARGET = NULL; rc521.f_TARGET_TS = NULL; rc521.f_FIELDS = NULL; rc521.f_LITS = NULL; rc521.f_NLITS = ((rt_int)0LL); rc521.f_UNORDERED = 0; rc521.f_BOUNDS = NULL; rc521.f_DIMS = ((rt_int)0LL); rc521.f_ARGS = NULL; S_R7(&rc521.f_NAME, r_NO_TEXT(), 0); S_R7(&rc521.f_CNAME, r_NO_TEXT(), 0); rc521.f_MODL = NULL; rc521.f_REPS = NULL; rc521.f_DECL = NULL; rc521; }), 0);
{ R14 * rv522 = l_T_520;
return rv522; }
rt_raise(RT_X_INIT);
}
static R14 * r_COPY_TYP(R14 * p_T) { 
R14 * l_C_523; memset(&l_C_523, 0, sizeof l_C_523);
l_C_523 = ((R14 *)rt_alloc(sizeof (R14)));
S_R14(&(*(R14 *)rt_nil_check(l_C_523)), (*(R14 *)rt_nil_check(p_T)), 0);
{ R14 * rv524 = l_C_523;
return rv524; }
rt_raise(RT_X_INIT);
}
static void r_PREDEF_TYPE(rstr p_NAME, R14 * p_T) { 
R13 * l_Y_525; memset(&l_Y_525, 0, sizeof l_Y_525);
l_Y_525 = r_NEW_SYM(g_Y_TYPE, r_MKN(p_NAME));
((*(R13 *)rt_nil_check(l_Y_525))).f_T = p_T;
if (((((*(R14 *)rt_nil_check(p_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R7(&((*(R14 *)rt_nil_check(p_T))).f_NAME, ((*(R13 *)rt_nil_check(l_Y_525))).f_NAME, 0);
}
r_DEFINE(l_Y_525, ((rt_int)0LL));
}
static void r_PREDEF_BUILTIN(rstr p_NAME) { 
r_DEFINE(r_NEW_SYM(g_Y_BUILTIN, r_MKN(p_NAME)), ((rt_int)0LL));
}
static void r_PREDEF_CONST(rstr p_NAME, R14 * p_T, rt_int p_V) { 
R13 * l_Y_526; memset(&l_Y_526, 0, sizeof l_Y_526);
l_Y_526 = r_NEW_SYM(g_Y_CONST, r_MKN(p_NAME));
((*(R13 *)rt_nil_check(l_Y_526))).f_T = p_T;
((*(R13 *)rt_nil_check(l_Y_526))).f_HASMV = 1;
((*(R13 *)rt_nil_check(l_Y_526))).f_MV = p_V;
((*(R13 *)rt_nil_check(l_Y_526))).f_INPUT = 1;
S_R7(&((*(R13 *)rt_nil_check(l_Y_526))).f_ACCESS, r_FMT1(rt_str("((rt_int)@)", 11), r_NUM(p_V)), 0);
r_DEFINE(l_Y_526, ((rt_int)0LL));
}
static R14 * r_PREDEF_ENUM(rstr p_NAME, rstr p_NAMES, rt_int p_UNORDERED) { 
R11 * l_HEAD_527; memset(&l_HEAD_527, 0, sizeof l_HEAD_527);
l_HEAD_527 = NULL;
R11 * l_TAIL_528; memset(&l_TAIL_528, 0, sizeof l_TAIL_528);
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
R11 * l_N_532; memset(&l_N_532, 0, sizeof l_N_532);
l_N_532 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R7(&((*(R11 *)rt_nil_check(l_N_532))).f_NAME, r_MKN(rt_b_slice(p_NAMES, l_START_529, rt_sub(it531, ((rt_int)1LL)))), 0);
r_ADD_LIST(l_N_532, &l_HEAD_527, &l_TAIL_528);
}
}
l_START_529 = rt_add(it531, ((rt_int)1LL));
}
}
} } L_end530: ;
{
R14 * l_T_533; memset(&l_T_533, 0, sizeof l_T_533);
l_T_533 = r_ENUM_CLASS(l_HEAD_527, p_UNORDERED, ((rt_int)0LL));
r_PREDEF_TYPE(p_NAME, l_T_533);
{ R14 * rv534 = l_T_533;
return rv534; }
}
rt_raise(RT_X_INIT);
}
static void r_PREDEFINE(void) { 
R14 * l_T_535; memset(&l_T_535, 0, sizeof l_T_535);
R11 * l_ASCII_LITS_536; memset(&l_ASCII_LITS_536, 0, sizeof l_ASCII_LITS_536);
l_ASCII_LITS_536 = NULL;
R11 * l_TAIL_537; memset(&l_TAIL_537, 0, sizeof l_TAIL_537);
l_TAIL_537 = NULL;
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
{ rt_int it539_lo = ((rt_int)0LL), it539_hi = ((rt_int)127LL);
for (rt_int it539 = it539_lo; it539 <= it539_hi; it539++) {
{
{
R11 * l_N_540; memset(&l_N_540, 0, sizeof l_N_540);
l_N_540 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R7(&((*(R11 *)rt_nil_check(l_N_540))).f_NAME, r_ASCII_NAME(it539), 0);
r_ADD_LIST(l_N_540, &l_ASCII_LITS_536, &l_TAIL_537);
}
}
} } L_end538: ;
((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII = r_ENUM_CLASS(l_ASCII_LITS_536, 0, ((rt_int)0LL));
r_PREDEF_TYPE(rt_str("ASCII", 5), ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII);
((*(R22 *)rt_nil_check(g_W))).f_TY_ROUNDINGS = r_PREDEF_ENUM(rt_str("ROUNDINGS", 9), rt_str("ROUNDED TRUNCATED NATIVE_R NATIVE_T", 35), 0);
l_T_535 = r_PREDEF_ENUM(rt_str("FIXED_PRECISIONS", 16), rt_str("STD", 3), 0);
l_T_535 = r_PREDEF_ENUM(rt_str("SIGNING", 7), rt_str("SIGNED UNSIGNED", 15), 1);
l_T_535 = r_PREDEF_ENUM(rt_str("PACKING", 7), rt_str("DENSE PACKED UNPACKED", 21), 1);
l_T_535 = r_PREDEF_ENUM(rt_str("USAGE", 5), rt_str("SYNCH REGION", 12), 1);
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
rstr l_CONTROLS_541; memset(&l_CONTROLS_541, 0, sizeof l_CONTROLS_541);
l_CONTROLS_541 = rt_str_new(((rt_int)128LL));
rt_b_assign(&l_CONTROLS_541, rt_str(" NUL SOH STX EXT EOT ENQ ACK BEL BS  HT  LF  VT  FF  CR  SO  SI  DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM  SUB ESC FS  GS  RS  US ", 128));
if ((p_C < ((rt_int)32LL)))
{
if (rt_b_eq(rt_b_slice(l_CONTROLS_541, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL))), rt_str(" ", 1)))
{
{ R7 rv542 = r_MKN(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_541, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)2LL)))));
return rv542; }
}
{ R7 rv543 = r_MKN(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_541, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)))));
return rv543; }
}
else if ((p_C == ((rt_int)39LL)))
{
{ R7 rv544 = r_MKN(rt_str("\\''''", 5));
return rv544; }
}
else if ((p_C < ((rt_int)96LL)))
{
{ R7 rv545 = r_MKN(rt_str_cat(rt_str_cat(rt_str("\\'", 2), r_CHAR_OF(p_C)), rt_str("'", 1)));
return rv545; }
}
else if ((p_C == ((rt_int)96LL)))
{
{ R7 rv546 = r_MKN(rt_str("\\ACCENT", 7));
return rv546; }
}
else if ((p_C <= ((rt_int)122LL)))
{
{ R7 rv547 = r_MKN(rt_str_cat(rt_str("\\", 1), r_CHAR_OF(rt_sub(p_C, ((rt_int)32LL)))));
return rv547; }
}
else if ((p_C == ((rt_int)123LL)))
{
{ R7 rv548 = r_MKN(rt_str("\\[", 2));
return rv548; }
}
else if ((p_C == ((rt_int)124LL)))
{
{ R7 rv549 = r_MKN(rt_str("\\BAR", 4));
return rv549; }
}
else if ((p_C == ((rt_int)125LL)))
{
{ R7 rv550 = r_MKN(rt_str("\\]", 2));
return rv550; }
}
else if ((p_C == ((rt_int)126LL)))
{
{ R7 rv551 = r_MKN(rt_str("\\TILDE", 6));
return rv551; }
}
{ R7 rv552 = r_MKN(rt_str("\\DEL", 4));
return rv552; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_SCALAR(R14 * p_T) { 
{ rt_int rv553 = (((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_BOOL)) || (((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv553; }
rt_raise(RT_X_INIT);
}
static R14 * r_REAL_TYPE(R14 * p_T) { 
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R14 * rv554 = r_REAL_TYPE(((*(R14 *)rt_nil_check(p_T))).f_BASE);
return rv554; }
}
{ R14 * rv555 = p_T;
return rv555; }
rt_raise(RT_X_INIT);
}
static R7 r_TYPE_NAME(R14 * p_T) { 
rt_int l_K_556; memset(&l_K_556, 0, sizeof l_K_556);
l_K_556 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if (((((*(R14 *)rt_nil_check(p_T))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{ R7 rv557 = ((*(R14 *)rt_nil_check(p_T))).f_NAME;
return rv557; }
}
else if ((l_K_556 == g_T_INT))
{
if ((((*(R14 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))
{
{ R7 rv558 = r_MK(rt_str("INTEGER", 7));
return rv558; }
}
{ R7 rv559 = r_FMT1(rt_str("FIXED (@, 2, STD)", 17), r_NUM(((*(R14 *)rt_nil_check(p_T))).f_SCALE));
return rv559; }
}
else if ((l_K_556 == g_T_BOOL))
{
{ R7 rv560 = r_MK(rt_str("BOOLEAN", 7));
return rv560; }
}
else if ((l_K_556 == g_T_ENUM))
{
if (((!(((*(R14 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R14 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R7 rv561 = r_TYPE_NAME(((*(R14 *)rt_nil_check(p_T))).f_BASE);
return rv561; }
}
{ R7 rv562 = r_MK(rt_str("an enumerated type", 18));
return rv562; }
}
else if ((l_K_556 == g_T_STR))
{
{ R7 rv563 = r_MK(rt_str("CHAR_STR", 8));
return rv563; }
}
else if ((l_K_556 == g_T_BITS))
{
{ R7 rv564 = r_MK(rt_str("BIT", 3));
return rv564; }
}
else if ((l_K_556 == g_T_FLOAT))
{
{ R7 rv565 = r_FMT1(rt_str("FLOAT (@)", 9), r_NUM(((*(R14 *)rt_nil_check(p_T))).f_SCALE));
return rv565; }
}
else if ((l_K_556 == g_T_ARR))
{
{ R7 rv566 = r_FMT1(rt_str("ARRAY OF @", 10), r_TYPE_NAME(((*(R14 *)rt_nil_check(p_T))).f_ELEM));
return rv566; }
}
else if ((l_K_556 == g_T_REC))
{
if (((!(((*(R14 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R14 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R7 rv567 = r_TYPE_NAME(((*(R14 *)rt_nil_check(p_T))).f_BASE);
return rv567; }
}
{ R7 rv568 = r_MK(rt_str("RECORD", 6));
return rv568; }
}
else if ((l_K_556 == g_T_PTR))
{
{ R7 rv569 = r_MK(rt_str("PTR", 3));
return rv569; }
}
else if ((l_K_556 == g_T_SEM))
{
{ R7 rv570 = r_MK(rt_str("SEMAPHORE", 9));
return rv570; }
}
else if ((l_K_556 == g_T_NIL))
{
{ R7 rv571 = r_MK(rt_str("NIL", 3));
return rv571; }
}
else if ((l_K_556 == g_T_VOID))
{
{ R7 rv572 = r_MK(rt_str("no value", 8));
return rv572; }
}
{ R7 rv573 = r_MK(rt_str("a type", 6));
return rv573; }
rt_raise(RT_X_INIT);
}
static R7 r_SUBST_SELF(R7 p_T, R7 p_SELF) { 
rstr l_S_574; memset(&l_S_574, 0, sizeof l_S_574);
l_S_574 = rt_str_new((p_T).f_LEN);
rt_b_assign(&l_S_574, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_575; memset(&l_AT_575, 0, sizeof l_AT_575);
l_AT_575 = ((*(R22 *)rt_nil_check(g_W))).f_TOP;
rt_int l_START_576; memset(&l_START_576, 0, sizeof l_START_576);
l_START_576 = ((rt_int)0LL);
R7 l_R_577; memset(&l_R_577, 0, sizeof l_R_577);
rt_int l_I_578; memset(&l_I_578, 0, sizeof l_I_578);
l_I_578 = ((rt_int)0LL);
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ R7 rv579 = p_T;
return rv579; }
}
for (;;) {
if ((l_I_578 >= rt_sub((p_T).f_LEN, ((rt_int)1LL)))) goto L_end580;
{
if (rt_b_eq(rt_b_slice(l_S_574, l_I_578, rt_add(l_I_578, ((rt_int)1LL))), rt_str("$S", 2)))
{
S_R7(&l_R_577, r_MK(rt_b_slice(l_S_574, l_START_576, rt_sub(l_I_578, ((rt_int)1LL)))), 0);
S_R7(&l_R_577, r_MK(r_STR(p_SELF, (p_SELF).f_LEN)), 0);
l_I_578 = rt_add(l_I_578, ((rt_int)2LL));
l_START_576 = l_I_578;
}
else
{
l_I_578 = rt_add(l_I_578, ((rt_int)1LL));
}
}
} L_end580: ;
if ((l_START_576 == ((rt_int)0LL)))
{
((*(R22 *)rt_nil_check(g_W))).f_TOP = l_AT_575;
{ R7 rv581 = p_T;
return rv581; }
}
S_R7(&l_R_577, r_MK(rt_b_slice(l_S_574, l_START_576, rt_sub((p_T).f_LEN, ((rt_int)1LL)))), 0);
{ R7 rv582 = ({ R7 rc583; memset(&rc583, 0, sizeof rc583);  rc583.f_AT = l_AT_575; rc583.f_LEN = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_TOP, l_AT_575); rc583.f_H = rt_neg(((rt_int)1LL)); rc583; });
return rv582; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LITERALS(R11 * p_A, R11 * p_B) { 
R11 * l_P_584; memset(&l_P_584, 0, sizeof l_P_584);
l_P_584 = p_A;
R11 * l_Q_585; memset(&l_Q_585, 0, sizeof l_Q_585);
l_Q_585 = p_B;
for (;;) {
if (((l_P_584 == NULL) || (l_Q_585 == NULL))) goto L_end586;
{
if ((!r_TEQ(((*(R11 *)rt_nil_check(l_P_584))).f_NAME, ((*(R11 *)rt_nil_check(l_Q_585))).f_NAME)))
{
{ rt_int rv587 = 0;
return rv587; }
}
l_P_584 = ((*(R11 *)rt_nil_check(l_P_584))).f_NEXT;
l_Q_585 = ((*(R11 *)rt_nil_check(l_Q_585))).f_NEXT;
}
} L_end586: ;
{ rt_int rv588 = ((l_P_584 == NULL) && (l_Q_585 == NULL));
return rv588; }
rt_raise(RT_X_INIT);
}
static R14 * r_ENUM_CLASS(R11 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE) { 
R13 * l_Y_589; memset(&l_Y_589, 0, sizeof l_Y_589);
l_Y_589 = ((*(R22 *)rt_nil_check(g_W))).f_ENUMS;
R14 * l_T_590; memset(&l_T_590, 0, sizeof l_T_590);
for (;;) {
if ((l_Y_589 == NULL)) goto L_end591;
{
if (((((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_589))).f_T))).f_UNORDERED == p_UNORDERED) && r_SAME_LITERALS(((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_589))).f_T))).f_LITS, p_LITS)))
{
r_DECLARE_LITERALS(((*(R13 *)rt_nil_check(l_Y_589))).f_T, p_LINE);
{ R14 * rv592 = ((*(R13 *)rt_nil_check(l_Y_589))).f_T;
return rv592; }
}
l_Y_589 = ((*(R13 *)rt_nil_check(l_Y_589))).f_INSTANCES;
}
} L_end591: ;
l_T_590 = r_NEW_TYP(g_T_ENUM);
((*(R14 *)rt_nil_check(l_T_590))).f_BASE = l_T_590;
((*(R14 *)rt_nil_check(l_T_590))).f_LITS = p_LITS;
((*(R14 *)rt_nil_check(l_T_590))).f_NLITS = r_LIST_LENGTH(p_LITS);
((*(R14 *)rt_nil_check(l_T_590))).f_UNORDERED = p_UNORDERED;
S_R7(&((*(R14 *)rt_nil_check(l_T_590))).f_CNAME, r_NEW_NAME(rt_str("E", 1)), 0);
l_Y_589 = r_NEW_SYM(g_Y_TYPE, r_NO_TEXT());
((*(R13 *)rt_nil_check(l_Y_589))).f_T = l_T_590;
((*(R13 *)rt_nil_check(l_Y_589))).f_INSTANCES = ((*(R22 *)rt_nil_check(g_W))).f_ENUMS;
((*(R22 *)rt_nil_check(g_W))).f_ENUMS = l_Y_589;
{
R11 * l_P_593; memset(&l_P_593, 0, sizeof l_P_593);
l_P_593 = p_LITS;
R7 l_NAMES_594; memset(&l_NAMES_594, 0, sizeof l_NAMES_594);
S_R7(&l_NAMES_594, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_P_593 == NULL)) goto L_end595;
{
S_R7(&l_NAMES_594, r_FMT2(rt_str("@@, ", 4), l_NAMES_594, r_CSTRING(((*(R11 *)rt_nil_check(l_P_593))).f_NAME)), 0);
l_P_593 = ((*(R11 *)rt_nil_check(l_P_593))).f_NEXT;
}
} L_end595: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static const char *@[] = { @0 };", 32), ((*(R14 *)rt_nil_check(l_T_590))).f_CNAME, l_NAMES_594));
}
r_DECLARE_LITERALS(l_T_590, p_LINE);
{ R14 * rv596 = l_T_590;
return rv596; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_LITERALS(R14 * p_T, rt_int p_LINE) { 
R11 * l_P_597; memset(&l_P_597, 0, sizeof l_P_597);
l_P_597 = ((*(R14 *)rt_nil_check(p_T))).f_LITS;
rt_int l_I_598; memset(&l_I_598, 0, sizeof l_I_598);
l_I_598 = ((rt_int)0LL);
for (;;) {
if ((l_P_597 == NULL)) goto L_end599;
{
if ((r_FIND_LITERAL(((*(R11 *)rt_nil_check(l_P_597))).f_NAME, p_T) == NULL))
{
{
R13 * l_Y_600; memset(&l_Y_600, 0, sizeof l_Y_600);
l_Y_600 = r_NEW_SYM(g_Y_ENUMLIT, ((*(R11 *)rt_nil_check(l_P_597))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_600))).f_T = p_T;
((*(R13 *)rt_nil_check(l_Y_600))).f_MV = l_I_598;
((*(R13 *)rt_nil_check(l_Y_600))).f_HASMV = 1;
((*(R13 *)rt_nil_check(l_Y_600))).f_INPUT = 1;
r_DEFINE(l_Y_600, p_LINE);
}
}
l_I_598 = rt_add(l_I_598, ((rt_int)1LL));
l_P_597 = ((*(R11 *)rt_nil_check(l_P_597))).f_NEXT;
}
} L_end599: ;
}
static R13 * r_FIND_LITERAL(R7 p_NAME, R14 * p_T) { 
R13 * l_Y_601; memset(&l_Y_601, 0, sizeof l_Y_601);
l_Y_601 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_601 == NULL)) goto L_end602;
{
if ((((*(R13 *)rt_nil_check(l_Y_601))).f_KIND == g_Y_ENUMLIT))
{
if ((p_T == NULL))
{
{ R13 * rv603 = l_Y_601;
return rv603; }
}
if ((((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_601))).f_T))).f_BASE == ((*(R14 *)rt_nil_check(p_T))).f_BASE))
{
{ R13 * rv604 = l_Y_601;
return rv604; }
}
}
l_Y_601 = r_LOOKUP_NEXT(l_Y_601);
}
} L_end602: ;
{ R13 * rv605 = NULL;
return rv605; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_CLASSES(R7 p_NAME) { 
R13 * l_Y_606; memset(&l_Y_606, 0, sizeof l_Y_606);
l_Y_606 = r_LOOKUP(p_NAME);
rt_int l_N_607; memset(&l_N_607, 0, sizeof l_N_607);
l_N_607 = ((rt_int)0LL);
for (;;) {
if ((l_Y_606 == NULL)) goto L_end608;
{
if ((((*(R13 *)rt_nil_check(l_Y_606))).f_KIND == g_Y_ENUMLIT))
{
l_N_607 = rt_add(l_N_607, ((rt_int)1LL));
}
l_Y_606 = r_LOOKUP_NEXT(l_Y_606);
}
} L_end608: ;
{ rt_int rv609 = l_N_607;
return rv609; }
rt_raise(RT_X_INIT);
}
static R14 * r_RESOLVE(R11 * p_TS) { 
{ R14 * rv610 = r_RESOLVE_NAMED(p_TS, r_NO_TEXT());
return rv610; }
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
R14 * l_N_611; memset(&l_N_611, 0, sizeof l_N_611);
if ((p_R == NULL))
{
{ R14 * rv612 = p_T;
return rv612; }
}
if ((r_IS_GENERIC_NODE(((*(R11 *)rt_nil_check(p_R))).f_A) || r_IS_GENERIC_NODE(((*(R11 *)rt_nil_check(p_R))).f_B)))
{
{ R14 * rv613 = p_T;
return rv613; }
}
if ((!((((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_R))).f_LINE, rt_str("a range is only for fixed, float and enumerated types (3.12.2)", 62));
}
l_N_611 = r_COPY_TYP(p_T);
S_R7(&((*(R14 *)rt_nil_check(l_N_611))).f_NAME, r_NO_TEXT(), 0);
((*(R14 *)rt_nil_check(l_N_611))).f_RLEVEL = r_CUR_LEVEL();
{
R18 l_LO_614; memset(&l_LO_614, 0, sizeof l_LO_614);
R18 l_HI_615; memset(&l_HI_615, 0, sizeof l_HI_615);
S_R18(&l_LO_614, r_EXPR(((*(R11 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R18(&l_HI_615, r_EXPR(((*(R11 *)rt_nil_check(p_R))).f_B, p_T), 0);
S_R7(&((*(R14 *)rt_nil_check(l_N_611))).f_LO_C, (l_LO_614).f_C, 0);
S_R7(&((*(R14 *)rt_nil_check(l_N_611))).f_HI_C, (l_HI_615).f_C, 0);
S_R12(&((*(R14 *)rt_nil_check(l_N_611))).f_MLO, r_MANIFEST(((*(R11 *)rt_nil_check(p_R))).f_A), 0);
S_R12(&((*(R14 *)rt_nil_check(l_N_611))).f_MHI, r_MANIFEST(((*(R11 *)rt_nil_check(p_R))).f_B), 0);
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
S_R12(&((*(R14 *)rt_nil_check(l_N_611))).f_MLO, r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R12(&((*(R14 *)rt_nil_check(l_N_611))).f_MHI, r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(p_R))).f_B, p_T), 0);
}
if (((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_INT) && (!(((*(R14 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))))
{
S_R7(&((*(R14 *)rt_nil_check(l_N_611))).f_LO_C, r_RESCALE(l_LO_614, ((*(R14 *)rt_nil_check(p_T))).f_SCALE, ((*(R11 *)rt_nil_check(p_R))).f_LINE), 0);
S_R7(&((*(R14 *)rt_nil_check(l_N_611))).f_HI_C, r_RESCALE(l_HI_615, ((*(R14 *)rt_nil_check(p_T))).f_SCALE, ((*(R11 *)rt_nil_check(p_R))).f_LINE), 0);
S_R12(&((*(R14 *)rt_nil_check(l_N_611))).f_MLO, r_NO_MVAL(), 0);
S_R12(&((*(R14 *)rt_nil_check(l_N_611))).f_MHI, r_NO_MVAL(), 0);
}
}
if (((((*(R11 *)rt_nil_check(p_R))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(p_R))).f_IV == ((rt_int)3LL))))
{
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R7(&((*(R14 *)rt_nil_check(l_N_611))).f_LO_C, r_FMT1(rt_str("nextafter(@, INFINITY)", 22), ((*(R14 *)rt_nil_check(l_N_611))).f_LO_C), 0);
}
else
{
S_R7(&((*(R14 *)rt_nil_check(l_N_611))).f_LO_C, r_FMT1(rt_str("((@) + 1)", 9), ((*(R14 *)rt_nil_check(l_N_611))).f_LO_C), 0);
(((*(R14 *)rt_nil_check(l_N_611))).f_MLO).f_V = rt_add((((*(R14 *)rt_nil_check(l_N_611))).f_MLO).f_V, ((rt_int)1LL));
}
}
if ((((*(R11 *)rt_nil_check(p_R))).f_IV >= ((rt_int)2LL)))
{
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R7(&((*(R14 *)rt_nil_check(l_N_611))).f_HI_C, r_FMT1(rt_str("nextafter(@, -INFINITY)", 23), ((*(R14 *)rt_nil_check(l_N_611))).f_HI_C), 0);
}
else
{
S_R7(&((*(R14 *)rt_nil_check(l_N_611))).f_HI_C, r_FMT1(rt_str("((@) - 1)", 9), ((*(R14 *)rt_nil_check(l_N_611))).f_HI_C), 0);
(((*(R14 *)rt_nil_check(l_N_611))).f_MHI).f_V = rt_sub((((*(R14 *)rt_nil_check(l_N_611))).f_MHI).f_V, ((rt_int)1LL));
}
}
{ R14 * rv616 = l_N_611;
return rv616; }
rt_raise(RT_X_INIT);
}
static R12 r_ENUM_MANIFEST(R11 * p_E, R14 * p_T) { 
if (((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{
R13 * l_Y_617; memset(&l_Y_617, 0, sizeof l_Y_617);
l_Y_617 = r_FIND_LITERAL(((*(R11 *)rt_nil_check(p_E))).f_NAME, p_T);
if ((!(l_Y_617 == NULL)))
{
{ R12 rv618 = r_SOME(((*(R13 *)rt_nil_check(l_Y_617))).f_MV);
return rv618; }
}
}
}
{ R12 rv619 = r_MANIFEST(p_E);
return rv619; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_LEVEL(void) { 
if ((((*(R22 *)rt_nil_check(g_W))).f_CS == NULL))
{
{ rt_int rv620 = ((rt_int)0LL);
return rv620; }
}
{ rt_int rv621 = ((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
return rv621; }
rt_raise(RT_X_INIT);
}
static R14 * r_ARG_TYPE(R11 * p_N) { 
{ R14 * rv622 = r_RESOLVE(r_EXPR_TO_TS(p_N));
return rv622; }
rt_raise(RT_X_INIT);
}
static R11 * r_NTH_ARG(R11 * p_TS, rt_int p_K) { 
R11 * l_A_623; memset(&l_A_623, 0, sizeof l_A_623);
l_A_623 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
{ rt_int it625_lo = ((rt_int)1LL), it625_hi = p_K;
for (rt_int it625 = it625_lo; it625 <= it625_hi; it625++) {
{
if ((l_A_623 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
l_A_623 = ((*(R11 *)rt_nil_check(l_A_623))).f_NEXT;
}
} } L_end624: ;
if ((l_A_623 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
{ R11 * rv626 = l_A_623;
return rv626; }
rt_raise(RT_X_INIT);
}
static R14 * r_RESOLVE_NAMED(R11 * p_TS, R7 p_CNAME) { 
R14 * l_T_627; memset(&l_T_627, 0, sizeof l_T_627);
rt_int l_K_628; memset(&l_K_628, 0, sizeof l_K_628);
l_K_628 = ((*(R11 *)rt_nil_check(p_TS))).f_KIND;
if ((l_K_628 == g_TS_ARRAY))
{
{ R14 * rv629 = r_RESOLVE_ARRAY(p_TS);
return rv629; }
}
else if ((l_K_628 == g_TS_RECORD))
{
{ R14 * rv630 = r_RESOLVE_RECORD(p_TS, p_CNAME, NULL, NULL);
return rv630; }
}
else if ((l_K_628 == g_TS_ENUM))
{
l_T_627 = r_ENUM_CLASS(((*(R11 *)rt_nil_check(p_TS))).f_A, (((*(R11 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)), ((*(R11 *)rt_nil_check(p_TS))).f_LINE);
if (((((*(R11 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)) && (!(((*(R11 *)rt_nil_check(p_TS))).f_B == NULL))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("an UNORDERED type has no range", 30));
}
l_T_627 = r_WITH_RANGE(l_T_627, ((*(R11 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R11 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_627 = r_COPY_TYP(l_T_627);
((*(R14 *)rt_nil_check(l_T_627))).f_REPS = ((*(R11 *)rt_nil_check(p_TS))).f_C;
}
{ R14 * rv631 = l_T_627;
return rv631; }
}
else if ((l_K_628 == g_TS_GEN))
{
{ R14 * rv632 = r_GEN_TYPE(p_TS);
return rv632; }
}
else if ((!(l_K_628 == g_TS_NAME)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("a type specification expected", 29));
}
l_T_627 = r_RESOLVE_PREDEFINED(p_TS);
if ((l_T_627 == NULL))
{
l_T_627 = r_RESOLVE_USER(p_TS);
}
l_T_627 = r_WITH_RANGE(l_T_627, ((*(R11 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R11 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_627 = r_COPY_TYP(l_T_627);
((*(R14 *)rt_nil_check(l_T_627))).f_REPS = ((*(R11 *)rt_nil_check(p_TS))).f_C;
if ((!(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_TS))).f_C))).f_B == NULL)))
{
if (((!(((*(R14 *)rt_nil_check(l_T_627))).f_KIND == g_T_ENUM)) || (!((*(R14 *)rt_nil_check(l_T_627))).f_UNORDERED)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("ENUM_VAL_REP is only for UNORDERED types (3.4.3)", 48));
}
}
}
{ R14 * rv633 = l_T_627;
return rv633; }
rt_raise(RT_X_INIT);
}
static R14 * r_GEN_TYPE(R11 * p_TS) { 
R16 * l_B_634; memset(&l_B_634, 0, sizeof l_B_634);
l_B_634 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_634 == NULL)) goto L_end635;
{
if ((r_TEQ(((*(R16 *)rt_nil_check(l_B_634))).f_NAME, ((*(R11 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R16 *)rt_nil_check(l_B_634))).f_T == NULL))))
{
{ R14 * rv636 = ((*(R16 *)rt_nil_check(l_B_634))).f_T;
return rv636; }
}
l_B_634 = ((*(R16 *)rt_nil_check(l_B_634))).f_NEXT;
}
} L_end635: ;
{
R13 * l_Y_637; memset(&l_Y_637, 0, sizeof l_Y_637);
l_Y_637 = r_LOOKUP(((*(R11 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_637 == NULL)))
{
if (((((*(R13 *)rt_nil_check(l_Y_637))).f_KIND == g_Y_TYPE) && (!(((*(R13 *)rt_nil_check(l_Y_637))).f_T == NULL))))
{
{ R14 * rv638 = ((*(R13 *)rt_nil_check(l_Y_637))).f_T;
return rv638; }
}
}
}
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("a derived generic type outside a formal parameter list: \?", 57), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
rt_raise(RT_X_INIT);
}
static R14 * r_RESOLVE_PREDEFINED(R11 * p_TS) { 
R7 l_NAME_639; memset(&l_NAME_639, 0, sizeof l_NAME_639);
S_R7(&l_NAME_639, ((*(R11 *)rt_nil_check(p_TS))).f_NAME, 0);
R14 * l_T_640; memset(&l_T_640, 0, sizeof l_T_640);
if (r_TEQS(l_NAME_639, rt_str("FIXED", 5)))
{
{
R12 l_S_641; memset(&l_S_641, 0, sizeof l_S_641);
S_R12(&l_S_641, r_MANIFEST(r_NTH_ARG(p_TS, ((rt_int)0LL))), 0);
R12 l_R_642; memset(&l_R_642, 0, sizeof l_R_642);
S_R12(&l_R_642, r_MANIFEST(r_NTH_ARG(p_TS, ((rt_int)1LL))), 0);
R11 * l_P_643; memset(&l_P_643, 0, sizeof l_P_643);
l_P_643 = r_NTH_ARG(p_TS, ((rt_int)2LL));
if ((!(l_S_641).f_OK))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("the scale must be manifest (3.2.1)", 34));
}
if (((!(l_R_642).f_OK) || (!((l_R_642).f_V == ((rt_int)2LL)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("only radix 2 is predefined (3.2.1)", 34));
}
if (((((*(R11 *)rt_nil_check(l_P_643))).f_KIND == g_N_NAME) || (((*(R11 *)rt_nil_check(l_P_643))).f_KIND == g_N_ENUMLIT)))
{
if (((!(r_FIND_LITERAL(((*(R11 *)rt_nil_check(l_P_643))).f_NAME, NULL) == NULL)) && (!r_TEQS(((*(R11 *)rt_nil_check(l_P_643))).f_NAME, rt_str("STD", 3)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("only STD precision is predefined (3.2.1)", 40));
}
}
if (((l_S_641).f_V == ((rt_int)0LL)))
{
{ R14 * rv644 = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
return rv644; }
}
l_T_640 = r_NEW_TYP(g_T_INT);
((*(R14 *)rt_nil_check(l_T_640))).f_SCALE = (l_S_641).f_V;
{ R14 * rv645 = l_T_640;
return rv645; }
}
}
else if (r_TEQS(l_NAME_639, rt_str("FLOAT", 5)))
{
{
R12 l_P_646; memset(&l_P_646, 0, sizeof l_P_646);
S_R12(&l_P_646, r_MANIFEST(r_NTH_ARG(p_TS, ((rt_int)0LL))), 0);
if ((!(l_P_646).f_OK))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("the precision must be manifest (3.3.1)", 38));
}
if ((((l_P_646).f_V < ((rt_int)1LL)) || ((l_P_646).f_V > ((rt_int)15LL))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("precisions from 1 to 15 are implemented (3.3.1)", 47));
}
l_T_640 = r_NEW_TYP(g_T_FLOAT);
((*(R14 *)rt_nil_check(l_T_640))).f_SCALE = (l_P_646).f_V;
{ R14 * rv647 = l_T_640;
return rv647; }
}
}
else if (r_TEQS(l_NAME_639, rt_str("BIT", 3)))
{
l_T_640 = r_NEW_TYP(g_T_BITS);
r_STRING_LENGTH(l_T_640, r_NTH_ARG(p_TS, ((rt_int)0LL)));
{ R14 * rv648 = l_T_640;
return rv648; }
}
else if ((r_TEQS(l_NAME_639, rt_str("CHAR_STR", 8)) || r_TEQS(l_NAME_639, rt_str("ASCII_STR", 9))))
{
l_T_640 = r_NEW_TYP(g_T_STR);
r_STRING_LENGTH(l_T_640, r_NTH_ARG(p_TS, ((rt_int)0LL)));
if (r_TEQS(l_NAME_639, rt_str("CHAR_STR", 8)))
{
{
R11 * l_CS_649; memset(&l_CS_649, 0, sizeof l_CS_649);
l_CS_649 = r_NTH_ARG(p_TS, ((rt_int)1LL));
if ((!r_TEQS(((*(R11 *)rt_nil_check(l_CS_649))).f_NAME, rt_str("ASCII", 5))))
{
if ((!(((*(R14 *)rt_nil_check(r_ARG_TYPE(l_CS_649)))).f_KIND == g_T_ENUM)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset must be an enumerated type (3.7.1)", 44));
}
}
}
}
{ R14 * rv650 = l_T_640;
return rv650; }
}
else if (r_TEQS(l_NAME_639, rt_str("PTR", 3)))
{
l_T_640 = r_NEW_TYP(g_T_PTR);
((*(R14 *)rt_nil_check(l_T_640))).f_TARGET_TS = r_NTH_ARG(p_TS, ((rt_int)0LL));
{ R14 * rv651 = l_T_640;
return rv651; }
}
else if (r_TEQS(l_NAME_639, rt_str("SEMAPHORE", 9)))
{
l_T_640 = r_NEW_TYP(g_T_SEM);
{
R11 * l_U_652; memset(&l_U_652, 0, sizeof l_U_652);
l_U_652 = r_NTH_ARG(p_TS, ((rt_int)0LL));
if (r_TEQS(((*(R11 *)rt_nil_check(l_U_652))).f_NAME, rt_str("REGION", 6)))
{
((*(R14 *)rt_nil_check(l_T_640))).f_SCALE = ((rt_int)1LL);
}
else if ((!r_TEQS(((*(R11 *)rt_nil_check(l_U_652))).f_NAME, rt_str("SYNCH", 5))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("the use mode is SYNCH or REGION (3.11.1)", 40));
}
}
{ R14 * rv653 = l_T_640;
return rv653; }
}
{ R14 * rv654 = NULL;
return rv654; }
rt_raise(RT_X_INIT);
}
static void r_STRING_LENGTH(R14 * p_T, R11 * p_A) { 
if ((((*(R11 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
{
R16 * l_B_655; memset(&l_B_655, 0, sizeof l_B_655);
l_B_655 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_655 == NULL)) goto L_end656;
{
if ((r_TEQ(((*(R16 *)rt_nil_check(l_B_655))).f_NAME, ((*(R11 *)rt_nil_check(p_A))).f_NAME) && ((((*(R16 *)rt_nil_check(l_B_655))).f_C).f_LEN > ((rt_int)0LL))))
{
S_R7(&((*(R14 *)rt_nil_check(p_T))).f_LEN_C, ((*(R16 *)rt_nil_check(l_B_655))).f_C, 0);
S_R12(&((*(R14 *)rt_nil_check(p_T))).f_MLEN, ({ R12 rc657; memset(&rc657, 0, sizeof rc657);  rc657.f_OK = ((*(R16 *)rt_nil_check(l_B_655))).f_HASMV; rc657.f_V = ((*(R16 *)rt_nil_check(l_B_655))).f_MV; rc657; }), 0);
return;
}
l_B_655 = ((*(R16 *)rt_nil_check(l_B_655))).f_NEXT;
}
} L_end656: ;
}
S_R7(&((*(R14 *)rt_nil_check(p_T))).f_GEN, ((*(R11 *)rt_nil_check(p_A))).f_NAME, 0);
return;
}
else if ((((*(R11 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return;
}
{
R7 l_C_658; memset(&l_C_658, 0, sizeof l_C_658);
R12 l_M_659; memset(&l_M_659, 0, sizeof l_M_659);
r_ATTR_VALUE(p_A, &l_C_658, &l_M_659);
S_R7(&((*(R14 *)rt_nil_check(p_T))).f_LEN_C, l_C_658, 0);
S_R12(&((*(R14 *)rt_nil_check(p_T))).f_MLEN, l_M_659, 0);
((*(R14 *)rt_nil_check(p_T))).f_RLEVEL = r_CUR_LEVEL();
}
}
static R14 * r_RESOLVE_ARRAY(R11 * p_TS) { 
R14 * l_T_660; memset(&l_T_660, 0, sizeof l_T_660);
l_T_660 = r_NEW_TYP(g_T_ARR);
R11 * l_R_661; memset(&l_R_661, 0, sizeof l_R_661);
l_R_661 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
R17 * l_TAIL_662; memset(&l_TAIL_662, 0, sizeof l_TAIL_662);
l_TAIL_662 = NULL;
for (;;) {
if ((l_R_661 == NULL)) goto L_end663;
{
{
R17 * l_B_664; memset(&l_B_664, 0, sizeof l_B_664);
l_B_664 = ((R17 *)rt_alloc(sizeof (R17)));
R18 l_LO_665; memset(&l_LO_665, 0, sizeof l_LO_665);
S_R18(&l_LO_665, r_EXPR(((*(R11 *)rt_nil_check(l_R_661))).f_A, NULL), 0);
R18 l_HI_666; memset(&l_HI_666, 0, sizeof l_HI_666);
S_R18(&l_HI_666, r_EXPR(((*(R11 *)rt_nil_check(l_R_661))).f_B, (l_LO_665).f_T), 0);
S_R17(&(*(R17 *)rt_nil_check(l_B_664)), ({ R17 rc667; memset(&rc667, 0, sizeof rc667);  S_R7(&rc667.f_LO, (l_LO_665).f_C, 0); S_R7(&rc667.f_HI, (l_HI_666).f_C, 0); S_R12(&rc667.f_MLO, r_MANIFEST(((*(R11 *)rt_nil_check(l_R_661))).f_A), 0); S_R12(&rc667.f_MHI, r_MANIFEST(((*(R11 *)rt_nil_check(l_R_661))).f_B), 0); rc667.f_ANYARG = 0; rc667.f_NEXT = NULL; rc667; }), 0);
if ((((*(R14 *)rt_nil_check((l_LO_665).f_T))).f_KIND == g_T_ENUM))
{
S_R12(&((*(R17 *)rt_nil_check(l_B_664))).f_MLO, r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(l_R_661))).f_A, (l_LO_665).f_T), 0);
S_R12(&((*(R17 *)rt_nil_check(l_B_664))).f_MHI, r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(l_R_661))).f_B, (l_LO_665).f_T), 0);
}
else if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_LO_665).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(((*(R11 *)rt_nil_check(l_R_661))).f_LINE, rt_str("array bounds are integer or enumerated (3.8.1)", 46));
}
if ((l_TAIL_662 == NULL))
{
((*(R14 *)rt_nil_check(l_T_660))).f_BOUNDS = l_B_664;
}
else
{
((*(R17 *)rt_nil_check(l_TAIL_662))).f_NEXT = l_B_664;
}
l_TAIL_662 = l_B_664;
((*(R14 *)rt_nil_check(l_T_660))).f_DIMS = rt_add(((*(R14 *)rt_nil_check(l_T_660))).f_DIMS, ((rt_int)1LL));
}
l_R_661 = ((*(R11 *)rt_nil_check(l_R_661))).f_NEXT;
}
} L_end663: ;
((*(R14 *)rt_nil_check(l_T_660))).f_RLEVEL = r_CUR_LEVEL();
((*(R14 *)rt_nil_check(l_T_660))).f_ELEM = r_RESOLVE(((*(R11 *)rt_nil_check(p_TS))).f_C);
if ((((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_660))).f_ELEM))).f_KIND == g_T_ARR))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("ARRAY ... OF ARRAY is forbidden (3.8.1)", 39));
}
((*(R14 *)rt_nil_check(l_T_660))).f_REPS = ((*(R11 *)rt_nil_check(p_TS))).f_D;
S_R7(&((*(R14 *)rt_nil_check(l_T_660))).f_CNAME, r_ARRAY_STRUCT(((*(R14 *)rt_nil_check(l_T_660))).f_ELEM, ((*(R14 *)rt_nil_check(l_T_660))).f_DIMS), 0);
{ R14 * rv668 = l_T_660;
return rv668; }
rt_raise(RT_X_INIT);
}
static R14 * r_RESOLVE_USER(R11 * p_TS) { 
R13 * l_Y_669; memset(&l_Y_669, 0, sizeof l_Y_669);
l_Y_669 = r_ORIG_LOOKUP(((*(R11 *)rt_nil_check(p_TS))).f_NAME);
if ((((*(R11 *)rt_nil_check(p_TS))).f_A == NULL))
{
{
R16 * l_B_670; memset(&l_B_670, 0, sizeof l_B_670);
l_B_670 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_670 == NULL)) goto L_end671;
{
if ((r_TEQ(((*(R16 *)rt_nil_check(l_B_670))).f_NAME, ((*(R11 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R16 *)rt_nil_check(l_B_670))).f_T == NULL))))
{
{ R14 * rv672 = ((*(R16 *)rt_nil_check(l_B_670))).f_T;
return rv672; }
}
l_B_670 = ((*(R16 *)rt_nil_check(l_B_670))).f_NEXT;
}
} L_end671: ;
}
}
if ((l_Y_669 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R13 *)rt_nil_check(l_Y_669))).f_KIND == g_Y_GEN))
{
{ R14 * rv673 = r_GEN_TYPE(p_TS);
return rv673; }
}
if ((!(((*(R13 *)rt_nil_check(l_Y_669))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R13 *)rt_nil_check(l_Y_669))).f_DECL == NULL))
{
if ((!(((*(R11 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
{ R14 * rv674 = ((*(R13 *)rt_nil_check(l_Y_669))).f_T;
return rv674; }
}
{
R11 * l_D_675; memset(&l_D_675, 0, sizeof l_D_675);
l_D_675 = ((*(R13 *)rt_nil_check(l_Y_669))).f_DECL;
R14 * l_T_676; memset(&l_T_676, 0, sizeof l_T_676);
if ((((*(R11 *)rt_nil_check(l_D_675))).f_A == NULL))
{
if ((!(((*(R11 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R13 *)rt_nil_check(l_Y_669))).f_T == NULL))
{
if (((*(R13 *)rt_nil_check(l_Y_669))).f_BUSY)
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R13 *)rt_nil_check(l_Y_669))).f_BUSY = 1;
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_D_675))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R13 *)rt_nil_check(l_Y_669))).f_T = r_RESOLVE_RECORD(((*(R11 *)rt_nil_check(l_D_675))).f_B, r_RECORD_NAME(l_Y_669), l_Y_669, NULL);
}
else
{
((*(R13 *)rt_nil_check(l_Y_669))).f_T = r_RESOLVE_IN_DECL(l_Y_669, NULL);
if ((((((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_669))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)) && (!(((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_669))).f_T))).f_KIND == g_T_ENUM))))
{
((*(R13 *)rt_nil_check(l_Y_669))).f_T = r_COPY_TYP(((*(R13 *)rt_nil_check(l_Y_669))).f_T);
}
}
if (((((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_669))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R7(&((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_669))).f_T))).f_NAME, ((*(R13 *)rt_nil_check(l_Y_669))).f_NAME, 0);
}
((*(R13 *)rt_nil_check(l_Y_669))).f_BUSY = 0;
}
l_T_676 = ((*(R13 *)rt_nil_check(l_Y_669))).f_T;
}
else
{
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_D_675))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_676 = r_RECORD_INSTANCE(l_Y_669, p_TS);
}
else
{
l_T_676 = r_RESOLVE_IN_DECL(l_Y_669, p_TS);
}
}
{ R14 * rv677 = r_ABSTRACT_VIEW(l_Y_669, l_T_676);
return rv677; }
}
rt_raise(RT_X_INIT);
}
static R14 * r_ABSTRACT_VIEW(R13 * p_Y, R14 * p_T) { 
R14 * l_A_678; memset(&l_A_678, 0, sizeof l_A_678);
if (((((*(R13 *)rt_nil_check(p_Y))).f_MODL == NULL) || (!((*(R13 *)rt_nil_check(p_Y))).f_EXPORTED)))
{
{ R14 * rv679 = p_T;
return rv679; }
}
if (r_IN_MODULE(((*(R13 *)rt_nil_check(p_Y))).f_MODL))
{
{ R14 * rv680 = p_T;
return rv680; }
}
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
{ R14 * rv681 = p_T;
return rv681; }
}
l_A_678 = r_NEW_TYP(g_T_ABS);
((*(R14 *)rt_nil_check(l_A_678))).f_BASE = p_T;
S_R7(&((*(R14 *)rt_nil_check(l_A_678))).f_NAME, ((*(R13 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R14 *)rt_nil_check(l_A_678))).f_MODL = ((*(R13 *)rt_nil_check(p_Y))).f_MODL;
((*(R14 *)rt_nil_check(l_A_678))).f_DECL = p_Y;
((*(R14 *)rt_nil_check(l_A_678))).f_ARGS = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
{ R14 * rv682 = l_A_678;
return rv682; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R13 * p_M) { 
R13 * l_P_683; memset(&l_P_683, 0, sizeof l_P_683);
l_P_683 = ((*(R22 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_683 == NULL)) goto L_end684;
{
if ((l_P_683 == p_M))
{
{ rt_int rv685 = 1;
return rv685; }
}
l_P_683 = ((*(R13 *)rt_nil_check(l_P_683))).f_MODL;
}
} L_end684: ;
{ rt_int rv686 = 0;
return rv686; }
rt_raise(RT_X_INIT);
}
static R14 * r_RESOLVE_IN_DECL(R13 * p_Y, R11 * p_TS) { 
R11 * l_D_687; memset(&l_D_687, 0, sizeof l_D_687);
l_D_687 = ((*(R13 *)rt_nil_check(p_Y))).f_DECL;
R14 * l_T_688; memset(&l_T_688, 0, sizeof l_T_688);
if ((p_TS == NULL))
{
{ R14 * rv689 = r_RESOLVE(((*(R11 *)rt_nil_check(l_D_687))).f_B);
return rv689; }
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R11 *)rt_nil_check(l_D_687))).f_A, p_TS);
l_T_688 = r_RESOLVE(((*(R11 *)rt_nil_check(l_D_687))).f_B);
r_CLOSE_SCOPE();
{ R14 * rv690 = l_T_688;
return rv690; }
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R11 * p_FORMALS, R11 * p_TS) { 
R11 * l_F_691; memset(&l_F_691, 0, sizeof l_F_691);
l_F_691 = p_FORMALS;
R11 * l_A_692; memset(&l_A_692, 0, sizeof l_A_692);
l_A_692 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_691 == NULL)) goto L_end693;
{
{
R11 * l_N_694; memset(&l_N_694, 0, sizeof l_N_694);
l_N_694 = ((*(R11 *)rt_nil_check(l_F_691))).f_A;
for (;;) {
if ((l_N_694 == NULL)) goto L_end695;
{
if ((l_A_692 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R11 *)rt_nil_check(l_F_691))).f_B == NULL))
{
{
R13 * l_Y_696; memset(&l_Y_696, 0, sizeof l_Y_696);
l_Y_696 = r_NEW_SYM(g_Y_TYPE, ((*(R11 *)rt_nil_check(l_N_694))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_696))).f_T = r_ARG_TYPE(l_A_692);
r_DEFINE(l_Y_696, ((*(R11 *)rt_nil_check(l_A_692))).f_LINE);
}
}
else
{
{
R13 * l_Y_697; memset(&l_Y_697, 0, sizeof l_Y_697);
l_Y_697 = r_NEW_SYM(g_Y_CONST, ((*(R11 *)rt_nil_check(l_N_694))).f_NAME);
R7 l_C_698; memset(&l_C_698, 0, sizeof l_C_698);
R12 l_M_699; memset(&l_M_699, 0, sizeof l_M_699);
((*(R13 *)rt_nil_check(l_Y_697))).f_T = r_RESOLVE(((*(R11 *)rt_nil_check(l_F_691))).f_B);
if ((((*(R11 *)rt_nil_check(l_A_692))).f_KIND == g_N_ANY))
{
r_FAIL(((*(R11 *)rt_nil_check(l_A_692))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
r_ATTR_VALUE(l_A_692, &l_C_698, &l_M_699);
if ((!(((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_697))).f_T))).f_KIND == g_T_INT)))
{
S_R7(&l_C_698, (r_EXPR(l_A_692, ((*(R13 *)rt_nil_check(l_Y_697))).f_T)).f_C, 0);
S_R12(&l_M_699, r_ENUM_MANIFEST(l_A_692, ((*(R13 *)rt_nil_check(l_Y_697))).f_T), 0);
}
S_R7(&((*(R13 *)rt_nil_check(l_Y_697))).f_ACCESS, l_C_698, 0);
((*(R13 *)rt_nil_check(l_Y_697))).f_HASMV = (l_M_699).f_OK;
((*(R13 *)rt_nil_check(l_Y_697))).f_MV = (l_M_699).f_V;
((*(R13 *)rt_nil_check(l_Y_697))).f_INPUT = 1;
r_DEFINE(l_Y_697, ((*(R11 *)rt_nil_check(l_A_692))).f_LINE);
}
}
l_A_692 = ((*(R11 *)rt_nil_check(l_A_692))).f_NEXT;
l_N_694 = ((*(R11 *)rt_nil_check(l_N_694))).f_NEXT;
}
} L_end695: ;
}
l_F_691 = ((*(R11 *)rt_nil_check(l_F_691))).f_NEXT;
}
} L_end693: ;
if ((!(l_A_692 == NULL)))
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
{ R7 rv700 = ((*(R13 *)rt_nil_check(p_Y))).f_FWD;
return rv700; }
rt_raise(RT_X_INIT);
}
static R14 * r_TARGET(R14 * p_T) { 
if ((((*(R14 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R14 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R14 *)rt_nil_check(p_T))).f_TARGET_TS);
}
{ R14 * rv701 = ((*(R14 *)rt_nil_check(p_T))).f_TARGET;
return rv701; }
rt_raise(RT_X_INIT);
}
static R7 r_CTYPE(R14 * p_T) { 
rt_int l_K_702; memset(&l_K_702, 0, sizeof l_K_702);
l_K_702 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
{ R7 rv703 = r_MK(rt_str("rt_int", 6));
return rv703; }
}
else if ((l_K_702 == g_T_FLOAT))
{
{ R7 rv704 = r_MK(rt_str("double", 6));
return rv704; }
}
else if (((l_K_702 == g_T_STR) || (l_K_702 == g_T_BITS)))
{
{ R7 rv705 = r_MK(rt_str("rstr", 4));
return rv705; }
}
else if (((l_K_702 == g_T_REC) || (l_K_702 == g_T_ARR)))
{
{ R7 rv706 = ((*(R14 *)rt_nil_check(p_T))).f_CNAME;
return rv706; }
}
else if ((l_K_702 == g_T_ABS))
{
{ R7 rv707 = r_CTYPE(((*(R14 *)rt_nil_check(p_T))).f_BASE);
return rv707; }
}
else if ((l_K_702 == g_T_SEM))
{
{ R7 rv708 = r_MK(rt_str("rt_b_sem *", 10));
return rv708; }
}
else if ((l_K_702 == g_T_PATHS))
{
{ R7 rv709 = r_MK(rt_str("rt_b_paths", 10));
return rv709; }
}
else if ((l_K_702 == g_T_VOID))
{
{ R7 rv710 = r_MK(rt_str("void", 4));
return rv710; }
}
else if ((l_K_702 == g_T_PTR))
{
if ((((*(R14 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R11 * l_TT_711; memset(&l_TT_711, 0, sizeof l_TT_711);
l_TT_711 = ((*(R14 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R11 *)rt_nil_check(l_TT_711))).f_KIND == g_TS_NAME) && (((*(R11 *)rt_nil_check(l_TT_711))).f_A == NULL)))
{
{
R13 * l_Y_712; memset(&l_Y_712, 0, sizeof l_Y_712);
l_Y_712 = r_ORIG_LOOKUP(((*(R11 *)rt_nil_check(l_TT_711))).f_NAME);
if ((!(l_Y_712 == NULL)))
{
if (((((*(R13 *)rt_nil_check(l_Y_712))).f_KIND == g_Y_TYPE) && (!(((*(R13 *)rt_nil_check(l_Y_712))).f_DECL == NULL))))
{
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_712))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_712))).f_DECL))).f_A == NULL)))
{
{ R7 rv713 = r_CATS(r_RECORD_NAME(l_Y_712), rt_str(" *", 2));
return rv713; }
}
}
}
}
}
}
}
{ R7 rv714 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv714; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R11 * p_E) { 
{ rt_int rv715 = ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv715; }
rt_raise(RT_X_INIT);
}
static R15 * r_NEW_FIELD(R7 p_NAME, R14 * p_T, rt_int p_KIND) { 
R15 * l_F_716; memset(&l_F_716, 0, sizeof l_F_716);
l_F_716 = ((R15 *)rt_alloc(sizeof (R15)));
S_R15(&(*(R15 *)rt_nil_check(l_F_716)), ({ R15 rc717; memset(&rc717, 0, sizeof rc717);  S_R7(&rc717.f_NAME, p_NAME, 0); S_R7(&rc717.f_CNAME, r_FMT1(rt_str("f_@", 3), p_NAME), 0); rc717.f_T = p_T; rc717.f_KIND = p_KIND; S_R7(&rc717.f_TAGF, r_NO_TEXT(), 0); rc717.f_LABELS = NULL; rc717.f_NEXT = NULL; rc717; }), 0);
{ R15 * rv718 = l_F_716;
return rv718; }
rt_raise(RT_X_INIT);
}
static R15 * r_FIND_FIELD(R14 * p_T, R7 p_NAME) { 
R15 * l_F_719; memset(&l_F_719, 0, sizeof l_F_719);
l_F_719 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_719 == NULL)) goto L_end720;
{
if (r_TEQ(((*(R15 *)rt_nil_check(l_F_719))).f_NAME, p_NAME))
{
{ R15 * rv721 = l_F_719;
return rv721; }
}
l_F_719 = ((*(R15 *)rt_nil_check(l_F_719))).f_NEXT;
}
} L_end720: ;
{ R15 * rv722 = NULL;
return rv722; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R14 * p_T, R15 * p_F, R15 * *p_TAIL) { 
R15 * l_P_723; memset(&l_P_723, 0, sizeof l_P_723);
l_P_723 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_724; memset(&l_N_724, 0, sizeof l_N_724);
l_N_724 = ((rt_int)0LL);
for (;;) {
if ((l_P_723 == NULL)) goto L_end725;
{
if (r_TEQ(((*(R15 *)rt_nil_check(l_P_723))).f_NAME, ((*(R15 *)rt_nil_check(p_F))).f_NAME))
{
l_N_724 = rt_add(l_N_724, ((rt_int)1LL));
}
l_P_723 = ((*(R15 *)rt_nil_check(l_P_723))).f_NEXT;
}
} L_end725: ;
if ((l_N_724 > ((rt_int)0LL)))
{
S_R7(&((*(R15 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R15 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_724)), 0);
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
R11 * l_D_726; memset(&l_D_726, 0, sizeof l_D_726);
l_D_726 = p_DECLS;
for (;;) {
if ((l_D_726 == NULL)) goto L_end727;
{
if ((((*(R11 *)rt_nil_check(l_D_726))).f_KIND == g_N_VAR))
{
{
R14 * l_FT_728; memset(&l_FT_728, 0, sizeof l_FT_728);
l_FT_728 = r_RESOLVE(((*(R11 *)rt_nil_check(l_D_726))).f_B);
R11 * l_N_729; memset(&l_N_729, 0, sizeof l_N_729);
l_N_729 = ((*(R11 *)rt_nil_check(l_D_726))).f_A;
for (;;) {
if ((l_N_729 == NULL)) goto L_end730;
{
{
R15 * l_F_731; memset(&l_F_731, 0, sizeof l_F_731);
l_F_731 = r_NEW_FIELD(((*(R11 *)rt_nil_check(l_N_729))).f_NAME, l_FT_728, ((rt_int)0LL));
S_R7(&((*(R15 *)rt_nil_check(l_F_731))).f_TAGF, p_TAGN, 0);
((*(R15 *)rt_nil_check(l_F_731))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_731, &(*p_TAIL));
}
l_N_729 = ((*(R11 *)rt_nil_check(l_N_729))).f_NEXT;
}
} L_end730: ;
}
}
else
{
{
R15 * l_TF_732; memset(&l_TF_732, 0, sizeof l_TF_732);
l_TF_732 = r_FIND_FIELD(p_T, ((*(R11 *)rt_nil_check(l_D_726))).f_NAME);
R11 * l_S_733; memset(&l_S_733, 0, sizeof l_S_733);
l_S_733 = ((*(R11 *)rt_nil_check(l_D_726))).f_A;
if ((l_TF_732 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(l_D_726))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R11 *)rt_nil_check(l_D_726))).f_NAME);
}
if ((!(((*(R15 *)rt_nil_check(l_TF_732))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R11 *)rt_nil_check(l_D_726))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R11 *)rt_nil_check(l_D_726))).f_NAME);
}
for (;;) {
if ((l_S_733 == NULL)) goto L_end734;
{
r_RECORD_FIELDS(p_T, ((*(R11 *)rt_nil_check(l_S_733))).f_B, ((*(R11 *)rt_nil_check(l_D_726))).f_NAME, ((*(R11 *)rt_nil_check(l_S_733))).f_A, &(*p_TAIL));
l_S_733 = ((*(R11 *)rt_nil_check(l_S_733))).f_NEXT;
}
} L_end734: ;
}
}
l_D_726 = ((*(R11 *)rt_nil_check(l_D_726))).f_NEXT;
}
} L_end727: ;
}
static R14 * r_RESOLVE_RECORD(R11 * p_TS, R7 p_CNAME, R13 * p_Y, R11 * p_FORMALS) { 
R14 * l_T_735; memset(&l_T_735, 0, sizeof l_T_735);
l_T_735 = r_NEW_TYP(g_T_REC);
R15 * l_TAIL_736; memset(&l_TAIL_736, 0, sizeof l_TAIL_736);
l_TAIL_736 = NULL;
((*(R14 *)rt_nil_check(l_T_735))).f_BASE = l_T_735;
((*(R14 *)rt_nil_check(l_T_735))).f_DECL = p_Y;
((*(R14 *)rt_nil_check(l_T_735))).f_REPS = ((*(R11 *)rt_nil_check(p_TS))).f_D;
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R7(&((*(R14 *)rt_nil_check(l_T_735))).f_CNAME, p_CNAME, 0);
}
else
{
S_R7(&((*(R14 *)rt_nil_check(l_T_735))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R14 *)rt_nil_check(l_T_735))).f_CNAME, ((*(R14 *)rt_nil_check(l_T_735))).f_CNAME));
}
{
R11 * l_F_737; memset(&l_F_737, 0, sizeof l_F_737);
l_F_737 = p_FORMALS;
for (;;) {
if ((l_F_737 == NULL)) goto L_end738;
{
if ((!(((*(R11 *)rt_nil_check(l_F_737))).f_B == NULL)))
{
{
R14 * l_FT_739; memset(&l_FT_739, 0, sizeof l_FT_739);
l_FT_739 = r_RESOLVE(((*(R11 *)rt_nil_check(l_F_737))).f_B);
R11 * l_N_740; memset(&l_N_740, 0, sizeof l_N_740);
l_N_740 = ((*(R11 *)rt_nil_check(l_F_737))).f_A;
rt_int l_KIND_741; memset(&l_KIND_741, 0, sizeof l_KIND_741);
l_KIND_741 = ((rt_int)1LL);
if ((((*(R11 *)rt_nil_check(l_F_737))).f_IV == ((rt_int)1LL)))
{
l_KIND_741 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_739))) || (!(((*(R14 *)rt_nil_check(l_FT_739))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R11 *)rt_nil_check(l_F_737))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_740 == NULL)) goto L_end742;
{
r_ADD_FIELD(l_T_735, r_NEW_FIELD(((*(R11 *)rt_nil_check(l_N_740))).f_NAME, l_FT_739, l_KIND_741), &l_TAIL_736);
l_N_740 = ((*(R11 *)rt_nil_check(l_N_740))).f_NEXT;
}
} L_end742: ;
}
}
l_F_737 = ((*(R11 *)rt_nil_check(l_F_737))).f_NEXT;
}
} L_end738: ;
}
r_RECORD_FIELDS(l_T_735, ((*(R11 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_736);
r_COMPLETE_RECORD(l_T_735);
{ R14 * rv743 = l_T_735;
return rv743; }
rt_raise(RT_X_INIT);
}
static R14 * r_RECORD_INSTANCE(R13 * p_Y, R11 * p_TS) { 
R11 * l_D_744; memset(&l_D_744, 0, sizeof l_D_744);
l_D_744 = ((*(R13 *)rt_nil_check(p_Y))).f_DECL;
R14 * l_CLASS_745; memset(&l_CLASS_745, 0, sizeof l_CLASS_745);
l_CLASS_745 = NULL;
R16 * l_TARGS_746; memset(&l_TARGS_746, 0, sizeof l_TARGS_746);
l_TARGS_746 = NULL;
R17 * l_VARGS_747; memset(&l_VARGS_747, 0, sizeof l_VARGS_747);
l_VARGS_747 = NULL;
R17 * l_VTAIL_748; memset(&l_VTAIL_748, 0, sizeof l_VTAIL_748);
l_VTAIL_748 = NULL;
R11 * l_A_749; memset(&l_A_749, 0, sizeof l_A_749);
l_A_749 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
R11 * l_F_750; memset(&l_F_750, 0, sizeof l_F_750);
l_F_750 = ((*(R11 *)rt_nil_check(l_D_744))).f_A;
for (;;) {
if ((l_F_750 == NULL)) goto L_end751;
{
{
R11 * l_N_752; memset(&l_N_752, 0, sizeof l_N_752);
l_N_752 = ((*(R11 *)rt_nil_check(l_F_750))).f_A;
for (;;) {
if ((l_N_752 == NULL)) goto L_end753;
{
if ((l_A_749 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R11 *)rt_nil_check(l_F_750))).f_B == NULL))
{
{
R16 * l_B_754; memset(&l_B_754, 0, sizeof l_B_754);
l_B_754 = ((R16 *)rt_alloc(sizeof (R16)));
S_R16(&(*(R16 *)rt_nil_check(l_B_754)), ({ R16 rc755; memset(&rc755, 0, sizeof rc755);  S_R7(&rc755.f_NAME, ((*(R11 *)rt_nil_check(l_N_752))).f_NAME, 0); rc755.f_T = r_ARG_TYPE(l_A_749); S_R7(&rc755.f_C, r_NO_TEXT(), 0); rc755.f_HASMV = 0; rc755.f_MV = ((rt_int)0LL); rc755.f_R = NULL; rc755.f_NEXT = l_TARGS_746; rc755; }), 0);
l_TARGS_746 = l_B_754;
}
}
else
{
{
R17 * l_V_756; memset(&l_V_756, 0, sizeof l_V_756);
l_V_756 = ((R17 *)rt_alloc(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_V_756)), ({ R17 rc757; memset(&rc757, 0, sizeof rc757);  S_R7(&rc757.f_LO, r_NO_TEXT(), 0); S_R7(&rc757.f_HI, r_NO_TEXT(), 0); S_R12(&rc757.f_MLO, r_NO_MVAL(), 0); S_R12(&rc757.f_MHI, r_NO_MVAL(), 0); rc757.f_ANYARG = 0; rc757.f_NEXT = NULL; rc757; }), 0);
if ((((*(R11 *)rt_nil_check(l_A_749))).f_KIND == g_N_ANY))
{
if ((!(((*(R11 *)rt_nil_check(l_F_750))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R11 *)rt_nil_check(l_A_749))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R17 *)rt_nil_check(l_V_756))).f_ANYARG = 1;
}
else if ((((*(R11 *)rt_nil_check(l_A_749))).f_KIND == g_N_DONTCARE))
{
((*(R17 *)rt_nil_check(l_V_756))).f_ANYARG = 1;
S_R7(&((*(R17 *)rt_nil_check(l_V_756))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R11 *)rt_nil_check(l_A_749))).f_KIND == g_TS_GEN))
{
((*(R17 *)rt_nil_check(l_V_756))).f_ANYARG = 1;
S_R7(&((*(R17 *)rt_nil_check(l_V_756))).f_HI, r_MK(rt_str_cat(rt_str("\?", 1), r_STR(((*(R11 *)rt_nil_check(l_A_749))).f_NAME, (((*(R11 *)rt_nil_check(l_A_749))).f_NAME).f_LEN))), 0);
}
else
{
{
R14 * l_FT_758; memset(&l_FT_758, 0, sizeof l_FT_758);
l_FT_758 = r_RESOLVE(((*(R11 *)rt_nil_check(l_F_750))).f_B);
S_R7(&((*(R17 *)rt_nil_check(l_V_756))).f_LO, (r_EXPR(l_A_749, l_FT_758)).f_C, 0);
S_R12(&((*(R17 *)rt_nil_check(l_V_756))).f_MLO, r_ENUM_MANIFEST(l_A_749, l_FT_758), 0);
if (((((*(R11 *)rt_nil_check(l_F_750))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(l_V_756))).f_MLO).f_OK)))
{
r_FAIL(((*(R11 *)rt_nil_check(l_A_749))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_748 == NULL))
{
l_VARGS_747 = l_V_756;
}
else
{
((*(R17 *)rt_nil_check(l_VTAIL_748))).f_NEXT = l_V_756;
}
l_VTAIL_748 = l_V_756;
}
}
l_A_749 = ((*(R11 *)rt_nil_check(l_A_749))).f_NEXT;
l_N_752 = ((*(R11 *)rt_nil_check(l_N_752))).f_NEXT;
}
} L_end753: ;
}
l_F_750 = ((*(R11 *)rt_nil_check(l_F_750))).f_NEXT;
}
} L_end751: ;
if ((!(l_A_749 == NULL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
{
R13 * l_R_759; memset(&l_R_759, 0, sizeof l_R_759);
l_R_759 = ((*(R22 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_759 == NULL)) goto L_end760;
{
if (((((*(R13 *)rt_nil_check(l_R_759))).f_DECL == l_D_744) && r_SAME_BINDS(((*(R13 *)rt_nil_check(l_R_759))).f_BINDINGS, l_TARGS_746)))
{
l_CLASS_745 = ((*(R13 *)rt_nil_check(l_R_759))).f_T;
goto L_end760;
}
l_R_759 = ((*(R13 *)rt_nil_check(l_R_759))).f_INSTANCES;
}
} L_end760: ;
}
if ((l_CLASS_745 == NULL))
{
{
R13 * l_R_761; memset(&l_R_761, 0, sizeof l_R_761);
l_R_761 = r_NEW_SYM(g_Y_TYPE, ((*(R13 *)rt_nil_check(p_Y))).f_NAME);
R16 * l_B_762; memset(&l_B_762, 0, sizeof l_B_762);
l_B_762 = l_TARGS_746;
R16 * l_SAVED_763; memset(&l_SAVED_763, 0, sizeof l_SAVED_763);
l_SAVED_763 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
((*(R13 *)rt_nil_check(l_R_761))).f_DECL = l_D_744;
((*(R13 *)rt_nil_check(l_R_761))).f_BINDINGS = l_TARGS_746;
((*(R13 *)rt_nil_check(l_R_761))).f_INSTANCES = ((*(R22 *)rt_nil_check(g_W))).f_RECS;
((*(R22 *)rt_nil_check(g_W))).f_RECS = l_R_761;
r_OPEN_SCOPE();
for (;;) {
if ((l_B_762 == NULL)) goto L_end764;
{
{
R13 * l_TY_765; memset(&l_TY_765, 0, sizeof l_TY_765);
l_TY_765 = r_NEW_SYM(g_Y_TYPE, ((*(R16 *)rt_nil_check(l_B_762))).f_NAME);
((*(R13 *)rt_nil_check(l_TY_765))).f_T = ((*(R16 *)rt_nil_check(l_B_762))).f_T;
r_DEFINE(l_TY_765, ((*(R11 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_762 = ((*(R16 *)rt_nil_check(l_B_762))).f_NEXT;
}
} L_end764: ;
l_F_750 = ((*(R11 *)rt_nil_check(l_D_744))).f_A;
for (;;) {
if ((l_F_750 == NULL)) goto L_end766;
{
if ((!(((*(R11 *)rt_nil_check(l_F_750))).f_B == NULL)))
{
{
R11 * l_N_767; memset(&l_N_767, 0, sizeof l_N_767);
l_N_767 = ((*(R11 *)rt_nil_check(l_F_750))).f_A;
for (;;) {
if ((l_N_767 == NULL)) goto L_end768;
{
{
R13 * l_P_769; memset(&l_P_769, 0, sizeof l_P_769);
l_P_769 = r_NEW_SYM(g_Y_CONST, ((*(R11 *)rt_nil_check(l_N_767))).f_NAME);
((*(R13 *)rt_nil_check(l_P_769))).f_T = r_RESOLVE(((*(R11 *)rt_nil_check(l_F_750))).f_B);
S_R7(&((*(R13 *)rt_nil_check(l_P_769))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), ((*(R11 *)rt_nil_check(l_N_767))).f_NAME), 0);
((*(R13 *)rt_nil_check(l_P_769))).f_INPUT = 1;
((*(R13 *)rt_nil_check(l_P_769))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_769, ((*(R11 *)rt_nil_check(l_F_750))).f_LINE);
}
l_N_767 = ((*(R11 *)rt_nil_check(l_N_767))).f_NEXT;
}
} L_end768: ;
}
}
l_F_750 = ((*(R11 *)rt_nil_check(l_F_750))).f_NEXT;
}
} L_end766: ;
if ((l_TARGS_746 == NULL))
{
l_CLASS_745 = r_RESOLVE_RECORD(((*(R11 *)rt_nil_check(l_D_744))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R11 *)rt_nil_check(l_D_744))).f_A);
}
else
{
l_CLASS_745 = r_RESOLVE_RECORD(((*(R11 *)rt_nil_check(l_D_744))).f_B, r_NO_TEXT(), p_Y, ((*(R11 *)rt_nil_check(l_D_744))).f_A);
}
S_R7(&((*(R14 *)rt_nil_check(l_CLASS_745))).f_NAME, ((*(R13 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R13 *)rt_nil_check(l_R_761))).f_T = l_CLASS_745;
r_CLOSE_SCOPE();
((*(R22 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_763;
}
}
{
R14 * l_T_770; memset(&l_T_770, 0, sizeof l_T_770);
l_T_770 = r_COPY_TYP(l_CLASS_745);
((*(R14 *)rt_nil_check(l_T_770))).f_ARGS = l_VARGS_747;
{ R14 * rv771 = l_T_770;
return rv771; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R16 * p_A, R16 * p_B) { 
R16 * l_P_772; memset(&l_P_772, 0, sizeof l_P_772);
l_P_772 = p_A;
R16 * l_Q_773; memset(&l_Q_773, 0, sizeof l_Q_773);
l_Q_773 = p_B;
for (;;) {
if (((l_P_772 == NULL) || (l_Q_773 == NULL))) goto L_end774;
{
if ((!r_SAME_TYPE(((*(R16 *)rt_nil_check(l_P_772))).f_T, ((*(R16 *)rt_nil_check(l_Q_773))).f_T)))
{
{ rt_int rv775 = 0;
return rv775; }
}
l_P_772 = ((*(R16 *)rt_nil_check(l_P_772))).f_NEXT;
l_Q_773 = ((*(R16 *)rt_nil_check(l_Q_773))).f_NEXT;
}
} L_end774: ;
{ rt_int rv776 = ((l_P_772 == NULL) && (l_Q_773 == NULL));
return rv776; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R14 * p_T) { 
R17 * l_A_777; memset(&l_A_777, 0, sizeof l_A_777);
l_A_777 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_777 == NULL)) goto L_end778;
{
if (((*(R17 *)rt_nil_check(l_A_777))).f_ANYARG)
{
{ rt_int rv779 = 1;
return rv779; }
}
l_A_777 = ((*(R17 *)rt_nil_check(l_A_777))).f_NEXT;
}
} L_end778: ;
{ rt_int rv780 = 0;
return rv780; }
rt_raise(RT_X_INIT);
}
static R7 r_VARIANT_COND(R15 * p_F, R14 * p_T, R7 p_SELF) { 
R11 * l_L_781; memset(&l_L_781, 0, sizeof l_L_781);
l_L_781 = ((*(R15 *)rt_nil_check(p_F))).f_LABELS;
R7 l_C_782; memset(&l_C_782, 0, sizeof l_C_782);
S_R7(&l_C_782, r_MK(rt_str("0", 1)), 0);
R15 * l_TF_783; memset(&l_TF_783, 0, sizeof l_TF_783);
l_TF_783 = r_FIND_FIELD(p_T, ((*(R15 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_781 == NULL)) goto L_end784;
{
if ((((*(R11 *)rt_nil_check(l_L_781))).f_KIND == g_N_RANGE))
{
S_R7(&l_C_782, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_782, p_SELF, ((*(R15 *)rt_nil_check(l_TF_783))).f_CNAME), 0);
S_R7(&l_C_782, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_782, (r_EXPR(((*(R11 *)rt_nil_check(l_L_781))).f_A, ((*(R15 *)rt_nil_check(l_TF_783))).f_T)).f_C, p_SELF, ((*(R15 *)rt_nil_check(l_TF_783))).f_CNAME), 0);
S_R7(&l_C_782, r_FMT2(rt_str("@@)", 3), l_C_782, (r_EXPR(((*(R11 *)rt_nil_check(l_L_781))).f_B, ((*(R15 *)rt_nil_check(l_TF_783))).f_T)).f_C), 0);
}
else
{
S_R7(&l_C_782, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_782, p_SELF, ((*(R15 *)rt_nil_check(l_TF_783))).f_CNAME, (r_EXPR(l_L_781, ((*(R15 *)rt_nil_check(l_TF_783))).f_T)).f_C), 0);
}
l_L_781 = ((*(R11 *)rt_nil_check(l_L_781))).f_NEXT;
}
} L_end784: ;
{ R7 rv785 = r_FMT1(rt_str("(@)", 3), l_C_782);
return rv785; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R14 * p_T) { 
R7 l_C_786; memset(&l_C_786, 0, sizeof l_C_786);
S_R7(&l_C_786, ((*(R14 *)rt_nil_check(p_T))).f_CNAME, 0);
R15 * l_F_787; memset(&l_F_787, 0, sizeof l_F_787);
l_F_787 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
R7 l_BODY_788; memset(&l_BODY_788, 0, sizeof l_BODY_788);
S_R7(&l_BODY_788, r_MK(rt_str("", 0)), 0);
R7 l_ASSIGN_789; memset(&l_ASSIGN_789, 0, sizeof l_ASSIGN_789);
S_R7(&l_ASSIGN_789, r_MK(rt_str("", 0)), 0);
R7 l_EQ_790; memset(&l_EQ_790, 0, sizeof l_EQ_790);
S_R7(&l_EQ_790, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_787 == NULL)) goto L_end791;
{
S_R7(&l_BODY_788, r_FMT3(rt_str("@ @ @;", 6), l_BODY_788, r_CTYPE(((*(R15 *)rt_nil_check(l_F_787))).f_T), ((*(R15 *)rt_nil_check(l_F_787))).f_CNAME), 0);
if ((((*(R15 *)rt_nil_check(l_F_787))).f_KIND == ((rt_int)1LL)))
{
S_R7(&l_ASSIGN_789, r_FMT3(rt_str("@ if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 48), l_ASSIGN_789, ((*(R15 *)rt_nil_check(l_F_787))).f_CNAME, ((*(R15 *)rt_nil_check(l_F_787))).f_CNAME), 0);
}
else if ((((*(R15 *)rt_nil_check(l_F_787))).f_KIND == ((rt_int)2LL)))
{
S_R7(&l_ASSIGN_789, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_789, ((*(R15 *)rt_nil_check(l_F_787))).f_CNAME, ((*(R15 *)rt_nil_check(l_F_787))).f_CNAME, ((*(R15 *)rt_nil_check(l_F_787))).f_CNAME), 0);
}
else
{
S_R7(&l_ASSIGN_789, r_FMT2(rt_str("@ @", 3), l_ASSIGN_789, r_ASSIGN_CODE(((*(R15 *)rt_nil_check(l_F_787))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R15 *)rt_nil_check(l_F_787))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R15 *)rt_nil_check(l_F_787))).f_CNAME))), 0);
}
if (((((*(R15 *)rt_nil_check(l_F_787))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R7(&l_EQ_790, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_790, r_VARIANT_COND(l_F_787, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R15 *)rt_nil_check(l_F_787))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R15 *)rt_nil_check(l_F_787))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R15 *)rt_nil_check(l_F_787))).f_CNAME))), 0);
}
else
{
S_R7(&l_EQ_790, r_FMT2(rt_str("@ && @", 6), l_EQ_790, r_EQUAL_CODE(((*(R15 *)rt_nil_check(l_F_787))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R15 *)rt_nil_check(l_F_787))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R15 *)rt_nil_check(l_F_787))).f_CNAME))), 0);
}
l_F_787 = ((*(R15 *)rt_nil_check(l_F_787))).f_NEXT;
}
} L_end791: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_786, l_BODY_788));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_786, l_C_786, l_C_786));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_786, l_C_786, l_C_786));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_786, l_C_786, l_C_786, l_ASSIGN_789));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_786, l_C_786, l_C_786, l_EQ_790));
}
static R7 r_ARRAY_STRUCT(R14 * p_ELEM, rt_int p_DIMS) { 
R7 l_ET_C_792; memset(&l_ET_C_792, 0, sizeof l_ET_C_792);
S_R7(&l_ET_C_792, r_CTYPE(p_ELEM), 0);
R7 l_KEY_793; memset(&l_KEY_793, 0, sizeof l_KEY_793);
S_R7(&l_KEY_793, r_FMT3(rt_str("@/@/@", 5), l_ET_C_792, r_NUM(p_DIMS), r_NUM(((*(R14 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R13 * l_Y_794; memset(&l_Y_794, 0, sizeof l_Y_794);
l_Y_794 = ((*(R22 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_794 == NULL)) goto L_end795;
{
if ((r_TEQ(((*(R13 *)rt_nil_check(l_Y_794))).f_NAME, l_KEY_793) && r_SAME_TYPE(((*(R13 *)rt_nil_check(l_Y_794))).f_T, p_ELEM)))
{
{ R7 rv796 = ((*(R13 *)rt_nil_check(l_Y_794))).f_ACCESS;
return rv796; }
}
l_Y_794 = ((*(R13 *)rt_nil_check(l_Y_794))).f_INSTANCES;
}
} L_end795: ;
l_Y_794 = r_NEW_SYM(g_Y_TYPE, l_KEY_793);
((*(R13 *)rt_nil_check(l_Y_794))).f_T = p_ELEM;
S_R7(&((*(R13 *)rt_nil_check(l_Y_794))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R13 *)rt_nil_check(l_Y_794))).f_INSTANCES = ((*(R22 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R22 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_794;
{
R7 l_C_797; memset(&l_C_797, 0, sizeof l_C_797);
S_R7(&l_C_797, ((*(R13 *)rt_nil_check(l_Y_794))).f_ACCESS, 0);
R7 l_D_798; memset(&l_D_798, 0, sizeof l_D_798);
S_R7(&l_D_798, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_797, l_C_797));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_797, l_D_798, l_D_798, l_ET_C_792));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_797, l_C_797, l_C_797));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_797, l_C_797, l_C_797));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_797, l_C_797, l_C_797, l_D_798));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_798, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_797, l_C_797, l_C_797, l_D_798));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_798, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
}
{ R7 rv799 = ((*(R13 *)rt_nil_check(l_Y_794))).f_ACCESS;
return rv799; }
rt_raise(RT_X_INIT);
}
static R7 r_INIT_CODE(R14 * p_T, R7 p_LV) { 
rt_int l_K_800; memset(&l_K_800, 0, sizeof l_K_800);
l_K_800 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_800 == g_T_STR))
{
if (((((*(R14 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R7 rv801 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv801; }
}
{ R7 rv802 = r_FMT2(rt_str("@ = rt_str_new(@);", 18), p_LV, ((*(R14 *)rt_nil_check(p_T))).f_LEN_C);
return rv802; }
}
else if ((l_K_800 == g_T_BITS))
{
if (((((*(R14 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R7 rv803 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv803; }
}
{ R7 rv804 = r_FMT2(rt_str("@ = rt_b_zeros(@);", 18), p_LV, ((*(R14 *)rt_nil_check(p_T))).f_LEN_C);
return rv804; }
}
else if ((l_K_800 == g_T_SEM))
{
{ R7 rv805 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R14 *)rt_nil_check(p_T))).f_SCALE));
return rv805; }
}
else if ((l_K_800 == g_T_ABS))
{
{ R7 rv806 = r_INIT_CODE(((*(R14 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv806; }
}
else if ((l_K_800 == g_T_ARR))
{
{
R17 * l_B_807; memset(&l_B_807, 0, sizeof l_B_807);
l_B_807 = ((*(R14 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_808; memset(&l_I_808, 0, sizeof l_I_808);
l_I_808 = ((rt_int)0LL);
R7 l_R_809; memset(&l_R_809, 0, sizeof l_R_809);
S_R7(&l_R_809, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_807 == NULL)) goto L_end810;
{
S_R7(&l_R_809, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_809, p_LV, r_NUM(l_I_808), ((*(R17 *)rt_nil_check(l_B_807))).f_LO), 0);
S_R7(&l_R_809, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_809, p_LV, r_NUM(l_I_808), ((*(R17 *)rt_nil_check(l_B_807))).f_HI), 0);
l_I_808 = rt_add(l_I_808, ((rt_int)1LL));
l_B_807 = ((*(R17 *)rt_nil_check(l_B_807))).f_NEXT;
}
} L_end810: ;
S_R7(&l_R_809, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_809, r_NUM(((*(R14 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R7(&l_R_809, r_FMT3(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)(n \? n : 1));", 52), l_R_809, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R14 *)rt_nil_check(p_T))).f_ELEM))
{
{
R7 l_IV_811; memset(&l_IV_811, 0, sizeof l_IV_811);
S_R7(&l_IV_811, r_NEW_NAME(rt_str("i", 1)), 0);
S_R7(&l_R_809, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_809, l_IV_811, l_IV_811, l_IV_811), 0);
S_R7(&l_R_809, r_FMT2(rt_str("@ @ }", 5), l_R_809, r_INIT_CODE(((*(R14 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_811))), 0);
}
}
{ R7 rv812 = r_CATS(l_R_809, rt_str(" }", 2));
return rv812; }
}
}
else if ((l_K_800 == g_T_REC))
{
{
R15 * l_F_813; memset(&l_F_813, 0, sizeof l_F_813);
l_F_813 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
R17 * l_A_814; memset(&l_A_814, 0, sizeof l_A_814);
l_A_814 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
R7 l_R_815; memset(&l_R_815, 0, sizeof l_R_815);
S_R7(&l_R_815, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_813 == NULL)) goto L_end816;
{
if ((!(((*(R15 *)rt_nil_check(l_F_813))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_814 == NULL)))
{
if ((!((*(R17 *)rt_nil_check(l_A_814))).f_ANYARG))
{
S_R7(&l_R_815, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_815, p_LV, ((*(R15 *)rt_nil_check(l_F_813))).f_CNAME, ((*(R17 *)rt_nil_check(l_A_814))).f_LO), 0);
}
l_A_814 = ((*(R17 *)rt_nil_check(l_A_814))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R15 *)rt_nil_check(l_F_813))).f_T))
{
S_R7(&l_R_815, r_FMT2(rt_str("@ @", 3), l_R_815, r_SUBST_SELF(r_INIT_CODE(((*(R15 *)rt_nil_check(l_F_813))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R15 *)rt_nil_check(l_F_813))).f_CNAME)), p_LV)), 0);
}
l_F_813 = ((*(R15 *)rt_nil_check(l_F_813))).f_NEXT;
}
} L_end816: ;
{ R7 rv817 = l_R_815;
return rv817; }
}
}
{ R7 rv818 = r_NO_TEXT();
return rv818; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R14 * p_T) { 
rt_int l_K_819; memset(&l_K_819, 0, sizeof l_K_819);
l_K_819 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_819 == g_T_STR) || (l_K_819 == g_T_BITS)) || (l_K_819 == g_T_ARR)) || (l_K_819 == g_T_SEM)))
{
{ rt_int rv820 = 1;
return rv820; }
}
else if ((l_K_819 == g_T_ABS))
{
{ rt_int rv821 = r_NEEDS_INIT(((*(R14 *)rt_nil_check(p_T))).f_BASE);
return rv821; }
}
else if ((l_K_819 == g_T_REC))
{
if ((!(((*(R14 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv822 = 1;
return rv822; }
}
{
R15 * l_F_823; memset(&l_F_823, 0, sizeof l_F_823);
l_F_823 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_823 == NULL)) goto L_end824;
{
if (r_NEEDS_INIT(((*(R15 *)rt_nil_check(l_F_823))).f_T))
{
{ rt_int rv825 = 1;
return rv825; }
}
l_F_823 = ((*(R15 *)rt_nil_check(l_F_823))).f_NEXT;
}
} L_end824: ;
}
}
{ rt_int rv826 = 0;
return rv826; }
rt_raise(RT_X_INIT);
}
static R7 r_ASSIGN_CODE(R14 * p_T, R7 p_LV, R7 p_RV) { 
rt_int l_K_827; memset(&l_K_827, 0, sizeof l_K_827);
l_K_827 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_827 == g_T_STR) || (l_K_827 == g_T_BITS)))
{
{ R7 rv828 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv828; }
}
else if ((l_K_827 == g_T_ABS))
{
{ R7 rv829 = r_ASSIGN_CODE(((*(R14 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv829; }
}
else if ((l_K_827 == g_T_SEM))
{
{ R7 rv830 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv830; }
}
else if ((l_K_827 == g_T_ARR))
{
{ R7 rv831 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R14 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv831; }
}
else if ((l_K_827 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R7 rv832 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R14 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv832; }
}
{ R7 rv833 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R14 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv833; }
}
{ R7 rv834 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv834; }
rt_raise(RT_X_INIT);
}
static R7 r_EQUAL_CODE(R14 * p_T, R7 p_A, R7 p_B) { 
rt_int l_K_835; memset(&l_K_835, 0, sizeof l_K_835);
l_K_835 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_835 == g_T_STR) || (l_K_835 == g_T_BITS)))
{
{ R7 rv836 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv836; }
}
else if ((l_K_835 == g_T_ABS))
{
{ R7 rv837 = r_EQUAL_CODE(((*(R14 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv837; }
}
else if (((l_K_835 == g_T_ARR) || (l_K_835 == g_T_REC)))
{
{ R7 rv838 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R14 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv838; }
}
else if ((l_K_835 == g_T_SEM))
{
{ R7 rv839 = r_MK(rt_str("0", 1));
return rv839; }
}
{ R7 rv840 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv840; }
rt_raise(RT_X_INIT);
}
static R7 r_RANGE_CHECK(R14 * p_T, R7 p_V, R7 p_SELF) { 
if ((((((*(R14 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))))
{
{ R7 rv841 = p_V;
return rv841; }
}
if ((((((*(R14 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R14 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R14 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R14 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R7 rv842 = p_V;
return rv842; }
}
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
{ R7 rv843 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R14 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R14 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv843; }
}
{ R7 rv844 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R14 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R14 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv844; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R14 * p_T) { 
{ rt_int rv845 = (((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv845; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R14 * p_A, R14 * p_B) { 
if ((p_A == p_B))
{
{ rt_int rv846 = 1;
return rv846; }
}
if (((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R14 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv847 = r_SAME_CLASS(((*(R14 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv847; }
}
else if (((((*(R14 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv848 = r_SAME_CLASS(p_A, ((*(R14 *)rt_nil_check(p_B))).f_BASE);
return rv848; }
}
if ((!(((*(R14 *)rt_nil_check(p_A))).f_KIND == ((*(R14 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv849 = 0;
return rv849; }
}
if (((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv850 = (((*(R14 *)rt_nil_check(p_A))).f_BASE == ((*(R14 *)rt_nil_check(p_B))).f_BASE);
return rv850; }
}
else if ((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv851 = ((((*(R14 *)rt_nil_check(p_A))).f_DIMS == ((*(R14 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R14 *)rt_nil_check(p_A))).f_ELEM, ((*(R14 *)rt_nil_check(p_B))).f_ELEM));
return rv851; }
}
else if ((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv852 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv852; }
}
else if ((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv853 = ((r_ORIGINAL(((*(R14 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R14 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R14 *)rt_nil_check(p_A))).f_BASE, ((*(R14 *)rt_nil_check(p_B))).f_BASE));
return rv853; }
}
{ rt_int rv854 = 1;
return rv854; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R14 * p_A, R14 * p_B) { 
if ((p_A == p_B))
{
{ rt_int rv855 = 1;
return rv855; }
}
if (((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R14 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv856 = r_SAME_TYPE(((*(R14 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv856; }
}
else if (((((*(R14 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv857 = r_SAME_TYPE(p_A, ((*(R14 *)rt_nil_check(p_B))).f_BASE);
return rv857; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv858 = 0;
return rv858; }
}
if (((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv859 = (((*(R14 *)rt_nil_check(p_A))).f_SCALE == ((*(R14 *)rt_nil_check(p_B))).f_SCALE);
return rv859; }
}
else if ((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv860 = r_SAME_TYPE(((*(R14 *)rt_nil_check(p_A))).f_ELEM, ((*(R14 *)rt_nil_check(p_B))).f_ELEM);
return rv860; }
}
else if ((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv861 = r_SAME_ARGS(((*(R14 *)rt_nil_check(p_A))).f_ARGS, ((*(R14 *)rt_nil_check(p_B))).f_ARGS);
return rv861; }
}
else if ((((*(R14 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv862 = r_SAME_TYPE(((*(R14 *)rt_nil_check(p_A))).f_BASE, ((*(R14 *)rt_nil_check(p_B))).f_BASE);
return rv862; }
}
{ rt_int rv863 = 1;
return rv863; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R17 * p_B) { 
if (((((*(R17 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv864 = 0;
return rv864; }
}
{ rt_int rv865 = rt_b_eq(rt_b_slice(r_STR(((*(R17 *)rt_nil_check(p_B))).f_HI, (((*(R17 *)rt_nil_check(p_B))).f_HI).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv865; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R17 * p_A, R17 * p_B) { 
R17 * l_P_866; memset(&l_P_866, 0, sizeof l_P_866);
l_P_866 = p_A;
R17 * l_Q_867; memset(&l_Q_867, 0, sizeof l_Q_867);
l_Q_867 = p_B;
for (;;) {
if (((l_P_866 == NULL) || (l_Q_867 == NULL))) goto L_end868;
{
if ((r_IS_GEN_ARG(l_P_866) || r_IS_GEN_ARG(l_Q_867)))
{
}
else if ((!(((*(R17 *)rt_nil_check(l_P_866))).f_ANYARG == ((*(R17 *)rt_nil_check(l_Q_867))).f_ANYARG)))
{
{ rt_int rv869 = 0;
return rv869; }
}
if (((((*(R17 *)rt_nil_check(l_P_866))).f_MLO).f_OK && (((*(R17 *)rt_nil_check(l_Q_867))).f_MLO).f_OK))
{
if ((!((((*(R17 *)rt_nil_check(l_P_866))).f_MLO).f_V == (((*(R17 *)rt_nil_check(l_Q_867))).f_MLO).f_V)))
{
{ rt_int rv870 = 0;
return rv870; }
}
}
l_P_866 = ((*(R17 *)rt_nil_check(l_P_866))).f_NEXT;
l_Q_867 = ((*(R17 *)rt_nil_check(l_Q_867))).f_NEXT;
}
} L_end868: ;
{ rt_int rv871 = ((l_P_866 == NULL) && (l_Q_867 == NULL));
return rv871; }
rt_raise(RT_X_INIT);
}
static R7 r_FRAME_OF(rt_int p_LEVEL) { 
R27 * l_CS_872; memset(&l_CS_872, 0, sizeof l_CS_872);
l_CS_872 = ((*(R22 *)rt_nil_check(g_W))).f_CS;
R7 l_T_873; memset(&l_T_873, 0, sizeof l_T_873);
rt_int l_LEV_874; memset(&l_LEV_874, 0, sizeof l_LEV_874);
if ((((*(R27 *)rt_nil_check(l_CS_872))).f_LEVEL == p_LEVEL))
{
{ R7 rv875 = r_MK(rt_str("F", 1));
return rv875; }
}
if (((*(R27 *)rt_nil_check(l_CS_872))).f_FRAMED)
{
S_R7(&l_T_873, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R7(&l_T_873, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_874 = rt_sub(((*(R27 *)rt_nil_check(l_CS_872))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_874 <= p_LEVEL)) goto L_end876;
{
S_R7(&l_T_873, r_CATS(l_T_873, rt_str("->up", 4)), 0);
l_LEV_874 = rt_sub(l_LEV_874, ((rt_int)1LL));
}
} L_end876: ;
{ R7 rv877 = l_T_873;
return rv877; }
rt_raise(RT_X_INIT);
}
static R7 r_OBJ_ACCESS(R13 * p_Y) { 
if (((((*(R13 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R13 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R7 rv878 = ((*(R13 *)rt_nil_check(p_Y))).f_ACCESS;
return rv878; }
}
if (((((*(R13 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R7 rv879 = ((*(R13 *)rt_nil_check(p_Y))).f_ACCESS;
return rv879; }
}
if (((*(R13 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R7 rv880 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R13 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R13 *)rt_nil_check(p_Y))).f_FIELD);
return rv880; }
}
{ R7 rv881 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R13 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R13 *)rt_nil_check(p_Y))).f_FIELD);
return rv881; }
rt_raise(RT_X_INIT);
}
static R7 r_NEW_OBJECT(R13 * p_Y, rstr p_BASE) { 
R27 * l_CS_882; memset(&l_CS_882, 0, sizeof l_CS_882);
l_CS_882 = ((*(R22 *)rt_nil_check(g_W))).f_CS;
R14 * l_T_883; memset(&l_T_883, 0, sizeof l_T_883);
l_T_883 = ((*(R13 *)rt_nil_check(p_Y))).f_T;
R7 l_CN_884; memset(&l_CN_884, 0, sizeof l_CN_884);
if ((((*(R27 *)rt_nil_check(l_CS_882))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R22 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R7(&l_CN_884, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), ((*(R13 *)rt_nil_check(p_Y))).f_NAME), 0);
}
else
{
S_R7(&l_CN_884, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), ((*(R13 *)rt_nil_check(p_Y))).f_NAME, r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_883), l_CN_884));
S_R7(&((*(R13 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_884, 0);
{ R7 rv885 = l_CN_884;
return rv885; }
}
S_R7(&l_CN_884, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), ((*(R13 *)rt_nil_check(p_Y))).f_NAME, r_NEW_NAME(rt_str("", 0))), 0);
S_R7(&((*(R13 *)rt_nil_check(p_Y))).f_FIELD, l_CN_884, 0);
if (((*(R27 *)rt_nil_check(l_CS_882))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_883), l_CN_884), &((*(R27 *)rt_nil_check(l_CS_882))).f_FIELDS);
S_R7(&((*(R13 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_884), 0);
{ R7 rv886 = ((*(R13 *)rt_nil_check(p_Y))).f_ACCESS;
return rv886; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_883), l_CN_884, l_CN_884, l_CN_884));
S_R7(&((*(R13 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_884, 0);
{ R7 rv887 = l_CN_884;
return rv887; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R11 * p_D) { 
R14 * l_T_888; memset(&l_T_888, 0, sizeof l_T_888);
l_T_888 = r_RESOLVE(((*(R11 *)rt_nil_check(p_D))).f_B);
R11 * l_N_889; memset(&l_N_889, 0, sizeof l_N_889);
l_N_889 = ((*(R11 *)rt_nil_check(p_D))).f_A;
R18 l_V_890; memset(&l_V_890, 0, sizeof l_V_890);
rt_int l_HAVE_V_891; memset(&l_HAVE_V_891, 0, sizeof l_HAVE_V_891);
l_HAVE_V_891 = 0;
if (((((*(R14 *)rt_nil_check(l_T_888))).f_KIND == g_T_TYPE) || (((*(R14 *)rt_nil_check(l_T_888))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_889 == NULL)) goto L_end892;
{
{
R13 * l_Y_893; memset(&l_Y_893, 0, sizeof l_Y_893);
l_Y_893 = r_NEW_SYM(g_Y_VAR, ((*(R11 *)rt_nil_check(l_N_889))).f_NAME);
R7 l_CN_894; memset(&l_CN_894, 0, sizeof l_CN_894);
if ((((*(R11 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R13 *)rt_nil_check(l_Y_893))).f_KIND = g_Y_CONST;
((*(R13 *)rt_nil_check(l_Y_893))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_888) && (((*(R14 *)rt_nil_check(l_T_888))).f_SCALE == ((rt_int)0LL))))
{
{
R12 l_M_895; memset(&l_M_895, 0, sizeof l_M_895);
S_R12(&l_M_895, r_MANIFEST(((*(R11 *)rt_nil_check(p_D))).f_C), 0);
((*(R13 *)rt_nil_check(l_Y_893))).f_HASMV = (l_M_895).f_OK;
((*(R13 *)rt_nil_check(l_Y_893))).f_MV = (l_M_895).f_V;
}
}
}
((*(R13 *)rt_nil_check(l_Y_893))).f_T = l_T_888;
S_R7(&l_CN_894, r_NEW_OBJECT(l_Y_893, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_888))
{
r_CODE(r_INIT_CODE(l_T_888, l_CN_894));
}
if ((!(((*(R11 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_891))
{
S_R18(&l_V_890, r_EXPR(((*(R11 *)rt_nil_check(p_D))).f_C, l_T_888), 0);
l_HAVE_V_891 = 1;
}
r_CODE(r_STORE_CODE(l_T_888, l_CN_894, l_V_890, ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_893, ((*(R11 *)rt_nil_check(l_N_889))).f_LINE);
}
l_N_889 = ((*(R11 *)rt_nil_check(l_N_889))).f_NEXT;
}
} L_end892: ;
}
static R18 r_MKET(R7 p_C, R14 * p_T) { 
{ R18 rv896 = ({ R18 rc897; memset(&rc897, 0, sizeof rc897);  S_R7(&rc897.f_C, p_C, 0); rc897.f_T = p_T; rc897.f_LVAL = 0; S_R7(&rc897.f_SELF, r_NO_TEXT(), 0); rc897; });
return rv896; }
rt_raise(RT_X_INIT);
}
static R18 r_MKLV(R7 p_C, R14 * p_T, rt_int p_LVAL, R7 p_SELF) { 
{ R18 rv898 = ({ R18 rc899; memset(&rc899, 0, sizeof rc899);  S_R7(&rc899.f_C, p_C, 0); rc899.f_T = p_T; rc899.f_LVAL = p_LVAL; S_R7(&rc899.f_SELF, p_SELF, 0); rc899; });
return rv898; }
rt_raise(RT_X_INIT);
}
static R14 * r_INT_TYPE(rt_int p_SCALE) { 
R14 * l_T_900; memset(&l_T_900, 0, sizeof l_T_900);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R14 * rv901 = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
return rv901; }
}
l_T_900 = r_NEW_TYP(g_T_INT);
((*(R14 *)rt_nil_check(l_T_900))).f_SCALE = p_SCALE;
{ R14 * rv902 = l_T_900;
return rv902; }
rt_raise(RT_X_INIT);
}
static R14 * r_STR_TYPE(R7 p_LEN, R12 p_M) { 
R14 * l_T_903; memset(&l_T_903, 0, sizeof l_T_903);
l_T_903 = r_NEW_TYP(g_T_STR);
S_R7(&((*(R14 *)rt_nil_check(l_T_903))).f_LEN_C, p_LEN, 0);
S_R12(&((*(R14 *)rt_nil_check(l_T_903))).f_MLEN, p_M, 0);
{ R14 * rv904 = l_T_903;
return rv904; }
rt_raise(RT_X_INIT);
}
static R7 r_CSTRING(R7 p_T) { 
rstr l_S_905; memset(&l_S_905, 0, sizeof l_S_905);
l_S_905 = rt_str_new((p_T).f_LEN);
rt_b_assign(&l_S_905, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_906; memset(&l_AT_906, 0, sizeof l_AT_906);
l_AT_906 = ((*(R22 *)rt_nil_check(g_W))).f_TOP;
R7 l_R_907; memset(&l_R_907, 0, sizeof l_R_907);
S_R7(&l_R_907, r_MK(rt_str("\"", 1)), 0);
{ rt_int it909_lo = ((rt_int)0LL), it909_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it909 = it909_lo; it909 <= it909_hi; it909++) {
{
if ((rt_b_eq(rt_b_slice(l_S_905, it909, it909), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_905, it909, it909), rt_str("\\", 1))))
{
S_R7(&l_R_907, r_MK(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_S_905, it909, it909))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_905, it909, it909), rt_str("\?", 1)))
{
S_R7(&l_R_907, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_910; memset(&l_C_910, 0, sizeof l_C_910);
l_C_910 = r_CODE_OF(rt_b_slice(l_S_905, it909, it909));
if (({ rt_int iv911 = l_C_910; (((rt_int)32LL)) <= iv911 && iv911 <= (((rt_int)126LL)); }))
{
S_R7(&l_R_907, r_MK(rt_b_slice(l_S_905, it909, it909)), 0);
}
else
{
S_R7(&l_R_907, r_MK(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_910, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_910, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_910, ((rt_int)8LL))))), 0);
}
}
}
}
} } L_end908: ;
S_R7(&l_R_907, r_MK(rt_str("\"", 1)), 0);
{ R7 rv912 = ({ R7 rc913; memset(&rc913, 0, sizeof rc913);  rc913.f_AT = l_AT_906; rc913.f_LEN = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_TOP, l_AT_906); rc913.f_H = rt_neg(((rt_int)1LL)); rc913; });
return rv912; }
rt_raise(RT_X_INIT);
}
static R12 r_MANIFEST(R11 * p_E) { 
rt_int l_K_914; memset(&l_K_914, 0, sizeof l_K_914);
l_K_914 = ((*(R11 *)rt_nil_check(p_E))).f_KIND;
R12 l_NO_915; memset(&l_NO_915, 0, sizeof l_NO_915);
S_R12(&l_NO_915, ({ R12 rc916; memset(&rc916, 0, sizeof rc916);  rc916.f_OK = 0; rc916.f_V = ((rt_int)0LL); rc916; }), 0);
if ((l_K_914 == g_N_INT))
{
{ R12 rv917 = ({ R12 rc918; memset(&rc918, 0, sizeof rc918);  rc918.f_OK = 1; rc918.f_V = ((*(R11 *)rt_nil_check(p_E))).f_IV; rc918; });
return rv917; }
}
else if ((l_K_914 == g_N_PAREN))
{
{ R12 rv919 = r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A);
return rv919; }
}
else if ((l_K_914 == g_N_BOOL))
{
{ R12 rv920 = ({ R12 rc921; memset(&rc921, 0, sizeof rc921);  rc921.f_OK = 1; rc921.f_V = ((*(R11 *)rt_nil_check(p_E))).f_IV; rc921; });
return rv920; }
}
else if ((l_K_914 == g_N_UNOP))
{
{
R12 l_A_922; memset(&l_A_922, 0, sizeof l_A_922);
S_R12(&l_A_922, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
{ R12 rv923 = ({ R12 rc924; memset(&rc924, 0, sizeof rc924);  rc924.f_OK = (l_A_922).f_OK; rc924.f_V = rt_neg((l_A_922).f_V); rc924; });
return rv923; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R12 rv925 = l_A_922;
return rv925; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R12 rv926 = ({ R12 rc927; memset(&rc927, 0, sizeof rc927);  rc927.f_OK = (l_A_922).f_OK; rc927.f_V = rt_sub(((rt_int)1LL), (l_A_922).f_V); rc927; });
return rv926; }
}
}
}
else if ((l_K_914 == g_N_BINOP))
{
if ((!(((*(R11 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R12 rv928 = l_NO_915;
return rv928; }
}
{
R12 l_A_929; memset(&l_A_929, 0, sizeof l_A_929);
S_R12(&l_A_929, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
R12 l_B_930; memset(&l_B_930, 0, sizeof l_B_930);
S_R12(&l_B_930, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_B), 0);
R7 l_OP_931; memset(&l_OP_931, 0, sizeof l_OP_931);
S_R7(&l_OP_931, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
if ((r_TEQS(l_OP_931, rt_str("&", 1)) && (l_A_929).f_OK))
{
if (((l_A_929).f_V == ((rt_int)0LL)))
{
{ R12 rv932 = l_A_929;
return rv932; }
}
{ R12 rv933 = l_B_930;
return rv933; }
}
else if ((r_TEQS(l_OP_931, rt_str("!", 1)) && (l_A_929).f_OK))
{
if (((l_A_929).f_V == ((rt_int)1LL)))
{
{ R12 rv934 = l_A_929;
return rv934; }
}
{ R12 rv935 = l_B_930;
return rv935; }
}
if ((!(((l_A_929).f_OK && (l_B_930).f_OK))))
{
{ R12 rv936 = l_NO_915;
return rv936; }
}
if ((!((r_MANIFEST_INT(((*(R11 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R11 *)rt_nil_check(p_E))).f_B)))))
{
{ R12 rv937 = l_NO_915;
return rv937; }
}
if (r_TEQS(l_OP_931, rt_str("+", 1)))
{
{ R12 rv938 = ({ R12 rc939; memset(&rc939, 0, sizeof rc939);  rc939.f_OK = 1; rc939.f_V = rt_add((l_A_929).f_V, (l_B_930).f_V); rc939; });
return rv938; }
}
else if (r_TEQS(l_OP_931, rt_str("-", 1)))
{
{ R12 rv940 = ({ R12 rc941; memset(&rc941, 0, sizeof rc941);  rc941.f_OK = 1; rc941.f_V = rt_sub((l_A_929).f_V, (l_B_930).f_V); rc941; });
return rv940; }
}
else if (r_TEQS(l_OP_931, rt_str("*", 1)))
{
{ R12 rv942 = ({ R12 rc943; memset(&rc943, 0, sizeof rc943);  rc943.f_OK = 1; rc943.f_V = rt_mul((l_A_929).f_V, (l_B_930).f_V); rc943; });
return rv942; }
}
else if ((r_TEQS(l_OP_931, rt_str("//", 2)) && (!((l_B_930).f_V == ((rt_int)0LL)))))
{
{ R12 rv944 = ({ R12 rc945; memset(&rc945, 0, sizeof rc945);  rc945.f_OK = 1; rc945.f_V = rt_quot((l_A_929).f_V, (l_B_930).f_V); rc945; });
return rv944; }
}
else if ((r_TEQS(l_OP_931, rt_str("MOD", 3)) && (!((l_B_930).f_V == ((rt_int)0LL)))))
{
{ R12 rv946 = ({ R12 rc947; memset(&rc947, 0, sizeof rc947);  rc947.f_OK = 1; rc947.f_V = rt_rem((l_A_929).f_V, (l_B_930).f_V); rc947; });
return rv946; }
}
else if (r_TEQS(l_OP_931, rt_str("=", 1)))
{
{ R12 rv948 = ({ R12 rc949; memset(&rc949, 0, sizeof rc949);  rc949.f_OK = 1; rc949.f_V = r_BOOL_INT(((l_A_929).f_V == (l_B_930).f_V)); rc949; });
return rv948; }
}
else if (r_TEQS(l_OP_931, rt_str("<>", 2)))
{
{ R12 rv950 = ({ R12 rc951; memset(&rc951, 0, sizeof rc951);  rc951.f_OK = 1; rc951.f_V = r_BOOL_INT((!((l_A_929).f_V == (l_B_930).f_V))); rc951; });
return rv950; }
}
else if (r_TEQS(l_OP_931, rt_str("<", 1)))
{
{ R12 rv952 = ({ R12 rc953; memset(&rc953, 0, sizeof rc953);  rc953.f_OK = 1; rc953.f_V = r_BOOL_INT(((l_A_929).f_V < (l_B_930).f_V)); rc953; });
return rv952; }
}
else if (r_TEQS(l_OP_931, rt_str(">", 1)))
{
{ R12 rv954 = ({ R12 rc955; memset(&rc955, 0, sizeof rc955);  rc955.f_OK = 1; rc955.f_V = r_BOOL_INT(((l_A_929).f_V > (l_B_930).f_V)); rc955; });
return rv954; }
}
else if (r_TEQS(l_OP_931, rt_str("<=", 2)))
{
{ R12 rv956 = ({ R12 rc957; memset(&rc957, 0, sizeof rc957);  rc957.f_OK = 1; rc957.f_V = r_BOOL_INT(((l_A_929).f_V <= (l_B_930).f_V)); rc957; });
return rv956; }
}
else if (r_TEQS(l_OP_931, rt_str(">=", 2)))
{
{ R12 rv958 = ({ R12 rc959; memset(&rc959, 0, sizeof rc959);  rc959.f_OK = 1; rc959.f_V = r_BOOL_INT(((l_A_929).f_V >= (l_B_930).f_V)); rc959; });
return rv958; }
}
}
}
else if ((l_K_914 == g_N_IN))
{
{
R12 l_A_960; memset(&l_A_960, 0, sizeof l_A_960);
S_R12(&l_A_960, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
R12 l_L_961; memset(&l_L_961, 0, sizeof l_L_961);
S_R12(&l_L_961, r_MANIFEST(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R12 l_U_962; memset(&l_U_962, 0, sizeof l_U_962);
S_R12(&l_U_962, r_MANIFEST(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_963; memset(&l_LO_963, 0, sizeof l_LO_963);
rt_int l_HI_964; memset(&l_HI_964, 0, sizeof l_HI_964);
if ((!(((((l_A_960).f_OK && (l_L_961).f_OK) && (l_U_962).f_OK) && r_MANIFEST_INT(((*(R11 *)rt_nil_check(p_E))).f_A)))))
{
{ R12 rv965 = l_NO_915;
return rv965; }
}
l_LO_963 = (l_L_961).f_V;
l_HI_964 = (l_U_962).f_V;
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_963 = rt_add(l_LO_963, ((rt_int)1LL));
}
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_964 = rt_sub(l_HI_964, ((rt_int)1LL));
}
{ R12 rv966 = ({ R12 rc967; memset(&rc967, 0, sizeof rc967);  rc967.f_OK = 1; rc967.f_V = r_BOOL_INT((((l_A_960).f_V >= l_LO_963) && ((l_A_960).f_V <= l_HI_964))); rc967; });
return rv966; }
}
}
else if (((l_K_914 == g_N_NAME) || (l_K_914 == g_TS_GEN)))
{
{
R13 * l_Y_968; memset(&l_Y_968, 0, sizeof l_Y_968);
l_Y_968 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
R16 * l_B_969; memset(&l_B_969, 0, sizeof l_B_969);
l_B_969 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_969 == NULL)) goto L_end970;
{
if ((r_TEQ(((*(R16 *)rt_nil_check(l_B_969))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME) && ((*(R16 *)rt_nil_check(l_B_969))).f_HASMV))
{
{ R12 rv971 = ({ R12 rc972; memset(&rc972, 0, sizeof rc972);  rc972.f_OK = 1; rc972.f_V = ((*(R16 *)rt_nil_check(l_B_969))).f_MV; rc972; });
return rv971; }
}
l_B_969 = ((*(R16 *)rt_nil_check(l_B_969))).f_NEXT;
}
} L_end970: ;
if ((!(l_Y_968 == NULL)))
{
if (((((((*(R13 *)rt_nil_check(l_Y_968))).f_KIND == g_Y_CONST) || (((*(R13 *)rt_nil_check(l_Y_968))).f_KIND == g_Y_GEN))) && ((*(R13 *)rt_nil_check(l_Y_968))).f_HASMV))
{
{ R12 rv973 = ({ R12 rc974; memset(&rc974, 0, sizeof rc974);  rc974.f_OK = 1; rc974.f_V = ((*(R13 *)rt_nil_check(l_Y_968))).f_MV; rc974; });
return rv973; }
}
if ((((*(R13 *)rt_nil_check(l_Y_968))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R11 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R12 rv975 = ({ R12 rc976; memset(&rc976, 0, sizeof rc976);  rc976.f_OK = 1; rc976.f_V = ((*(R13 *)rt_nil_check(l_Y_968))).f_MV; rc976; });
return rv975; }
}
}
}
}
}
else if ((l_K_914 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R11 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R12 rv977 = ({ R12 rc978; memset(&rc978, 0, sizeof rc978);  rc978.f_OK = 1; rc978.f_V = ((*(R13 *)rt_nil_check(r_FIND_LITERAL(((*(R11 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc978; });
return rv977; }
}
}
else if ((l_K_914 == g_N_APPLY))
{
if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R12 rv979 = ({ R12 rc980; memset(&rc980, 0, sizeof rc980);  rc980.f_OK = 1; rc980.f_V = r_BOOL_INT((r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A)).f_OK); rc980; });
return rv979; }
}
}
{ R12 rv981 = l_NO_915;
return rv981; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R11 * p_E) { 
{ rt_int rv982 = (!(((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv982; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { 
if (p_B)
{
{ rt_int rv983 = ((rt_int)1LL);
return rv983; }
}
{ rt_int rv984 = ((rt_int)0LL);
return rv984; }
rt_raise(RT_X_INIT);
}
static R18 r_EXPR(R11 * p_E, R14 * p_WANT) { 
rt_int l_K_985; memset(&l_K_985, 0, sizeof l_K_985);
l_K_985 = ((*(R11 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_985 == g_N_INT))
{
{ R18 rv986 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R11 *)rt_nil_check(p_E))).f_IV)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv986; }
}
else if ((l_K_985 == g_N_REAL))
{
{ R18 rv987 = r_REAL_LITERAL(p_E);
return rv987; }
}
else if ((l_K_985 == g_N_BOOL))
{
{ R18 rv988 = r_MKET(r_NUM(((*(R11 *)rt_nil_check(p_E))).f_IV), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv988; }
}
else if ((l_K_985 == g_N_NIL))
{
{ R18 rv989 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R22 *)rt_nil_check(g_W))).f_TY_NIL);
return rv989; }
}
else if ((l_K_985 == g_N_PAREN))
{
{
R18 l_V_990; memset(&l_V_990, 0, sizeof l_V_990);
S_R18(&l_V_990, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R7(&(l_V_990).f_C, r_FMT1(rt_str("(@)", 3), (l_V_990).f_C), 0);
{ R18 rv991 = l_V_990;
return rv991; }
}
}
else if ((l_K_985 == g_N_STR))
{
{ R18 rv992 = r_STRING_LITERAL(p_E);
return rv992; }
}
else if ((l_K_985 == g_N_BITS))
{
{ R18 rv993 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R11 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R11 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R11 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv993; }
}
else if ((l_K_985 == g_N_ENUMLIT))
{
{ R18 rv994 = r_ENUM_LITERAL(p_E, p_WANT);
return rv994; }
}
else if ((l_K_985 == g_N_RECCONS))
{
{ R18 rv995 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv995; }
}
else if ((l_K_985 == g_N_ARRCONS))
{
{ R18 rv996 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv996; }
}
else if ((l_K_985 == g_N_TYPESPEC))
{
{ R18 rv997 = r_TYPE_SPECIFIER(p_E);
return rv997; }
}
else if ((l_K_985 == g_N_QUAL))
{
{
rt_int l_SAVED_998; memset(&l_SAVED_998, 0, sizeof l_SAVED_998);
l_SAVED_998 = ((*(R22 *)rt_nil_check(g_W))).f_ROUNDED;
R18 l_V_999; memset(&l_V_999, 0, sizeof l_V_999);
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
S_R18(&l_V_999, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R22 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_998;
{ R18 rv1000 = l_V_999;
return rv1000; }
}
}
else if ((l_K_985 == g_N_NEW))
{
{ R18 rv1001 = r_NEW_EXPR(p_E, p_WANT);
return rv1001; }
}
else if ((l_K_985 == g_N_NAME))
{
{ R18 rv1002 = r_NAME_EXPR(p_E, p_WANT);
return rv1002; }
}
else if ((l_K_985 == g_N_APPLY))
{
{
R13 * l_Y_1003; memset(&l_Y_1003, 0, sizeof l_Y_1003);
l_Y_1003 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1003 == NULL)))
{
if (((((*(R13 *)rt_nil_check(l_Y_1003))).f_KIND == g_Y_VAR) || (((*(R13 *)rt_nil_check(l_Y_1003))).f_KIND == g_Y_CONST)))
{
{
R11 * l_N_1004; memset(&l_N_1004, 0, sizeof l_N_1004);
l_N_1004 = r_NEW_NODE(g_N_INDEX, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
R11 * l_A_1005; memset(&l_A_1005, 0, sizeof l_A_1005);
l_A_1005 = r_NEW_NODE(g_N_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_A_1005))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R11 *)rt_nil_check(l_N_1004))).f_A = l_A_1005;
((*(R11 *)rt_nil_check(l_N_1004))).f_B = ((*(R11 *)rt_nil_check(p_E))).f_A;
{ R18 rv1006 = r_EXPR(l_N_1004, p_WANT);
return rv1006; }
}
}
}
{ R18 rv1007 = r_CALL_EXPR(p_E, p_WANT);
return rv1007; }
}
}
else if ((l_K_985 == g_N_FIELD))
{
{ R18 rv1008 = r_FIELD_EXPR(p_E);
return rv1008; }
}
else if ((l_K_985 == g_N_DEREF))
{
{
R18 l_B_1009; memset(&l_B_1009, 0, sizeof l_B_1009);
S_R18(&l_B_1009, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R14 *)rt_nil_check((l_B_1009).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R14 * l_TT_1010; memset(&l_TT_1010, 0, sizeof l_TT_1010);
l_TT_1010 = r_TARGET((l_B_1009).f_T);
{ R18 rv1011 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1010), (l_B_1009).f_C), l_TT_1010, 1, r_NO_TEXT());
return rv1011; }
}
}
}
else if ((l_K_985 == g_N_INDEX))
{
{ R18 rv1012 = r_INDEX_EXPR(p_E);
return rv1012; }
}
else if ((l_K_985 == g_N_SUBSTR))
{
{
R18 l_B_1013; memset(&l_B_1013, 0, sizeof l_B_1013);
S_R18(&l_B_1013, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
R14 * l_BT_1014; memset(&l_BT_1014, 0, sizeof l_BT_1014);
l_BT_1014 = r_REAL_TYPE((l_B_1013).f_T);
R7 l_LO_1015; memset(&l_LO_1015, 0, sizeof l_LO_1015);
R7 l_HI_1016; memset(&l_HI_1016, 0, sizeof l_HI_1016);
if ((!(((((*(R14 *)rt_nil_check(l_BT_1014))).f_KIND == g_T_STR) || (((*(R14 *)rt_nil_check(l_BT_1014))).f_KIND == g_T_BITS)))))
{
if ((((*(R14 *)rt_nil_check((l_B_1013).f_T))).f_KIND == g_T_ABS))
{
{ R18 rv1017 = r_OPERATOR_CALL3(r_MK(rt_str("SUBSTRING_", 10)), l_B_1013, ((*(R11 *)rt_nil_check(p_E))).f_B, ((*(R11 *)rt_nil_check(p_E))).f_C, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
return rv1017; }
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R7(&l_LO_1015, r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B), 0);
S_R7(&l_HI_1016, r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_C), 0);
if ((((*(R14 *)rt_nil_check(l_BT_1014))).f_KIND == g_T_BITS))
{
{ R18 rv1018 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1013).f_C, l_LO_1015, l_HI_1016), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1018; }
}
{
R14 * l_T_1019; memset(&l_T_1019, 0, sizeof l_T_1019);
l_T_1019 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R14 *)rt_nil_check(l_T_1019))).f_BASE = ((*(R14 *)rt_nil_check(l_BT_1014))).f_BASE;
{ R18 rv1020 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1013).f_C, l_LO_1015, l_HI_1016), l_T_1019);
return rv1020; }
}
}
}
else if ((l_K_985 == g_N_UNOP))
{
{ R18 rv1021 = r_UNARY(p_E);
return rv1021; }
}
else if ((l_K_985 == g_N_BINOP))
{
{ R18 rv1022 = r_BINARY(p_E);
return rv1022; }
}
else if ((l_K_985 == g_N_IN))
{
{ R18 rv1023 = r_IN_EXPR(p_E);
return rv1023; }
}
else if (((l_K_985 == g_N_ANY) || (l_K_985 == g_N_DONTCARE)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((((((l_K_985 == g_TS_NAME) || (l_K_985 == g_TS_ARRAY)) || (l_K_985 == g_TS_RECORD)) || (l_K_985 == g_TS_ENUM)) || (l_K_985 == g_TS_GEN)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R7 r_INT_EXPR(R11 * p_E) { 
rt_int l_SAVED_1024; memset(&l_SAVED_1024, 0, sizeof l_SAVED_1024);
l_SAVED_1024 = ((*(R22 *)rt_nil_check(g_W))).f_ROUNDED;
R18 l_V_1025; memset(&l_V_1025, 0, sizeof l_V_1025);
((*(R22 *)rt_nil_check(g_W))).f_ROUNDED = 0;
S_R18(&l_V_1025, r_EXPR(p_E, ((*(R22 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R22 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1024;
if ((((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1025).f_T)))).f_KIND == g_T_ENUM))
{
{ R7 rv1026 = (l_V_1025).f_C;
return rv1026; }
}
if (((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1025).f_T)))).f_KIND == g_T_INT)) || (!(((*(R14 *)rt_nil_check((l_V_1025).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1025).f_T));
}
{ R7 rv1027 = (l_V_1025).f_C;
return rv1027; }
rt_raise(RT_X_INIT);
}
static R7 r_BOOL_EXPR(R11 * p_E) { 
R18 l_V_1028; memset(&l_V_1028, 0, sizeof l_V_1028);
S_R18(&l_V_1028, r_EXPR(p_E, ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1028).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1028).f_T));
}
{ R7 rv1029 = (l_V_1028).f_C;
return rv1029; }
rt_raise(RT_X_INIT);
}
static R14 * r_BITS_TYPE(rt_int p_LEN) { 
R14 * l_T_1030; memset(&l_T_1030, 0, sizeof l_T_1030);
l_T_1030 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R7(&((*(R14 *)rt_nil_check(l_T_1030))).f_LEN_C, r_NUM(p_LEN), 0);
S_R12(&((*(R14 *)rt_nil_check(l_T_1030))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R14 * rv1031 = l_T_1030;
return rv1031; }
rt_raise(RT_X_INIT);
}
static R18 r_REAL_LITERAL(R11 * p_E) { 
R7 l_T_1032; memset(&l_T_1032, 0, sizeof l_T_1032);
S_R7(&l_T_1032, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1033; memset(&l_S_1033, 0, sizeof l_S_1033);
l_S_1033 = rt_str_new((l_T_1032).f_LEN);
rt_b_assign(&l_S_1033, r_STR(l_T_1032, (l_T_1032).f_LEN));
rt_int l_POINT_1034; memset(&l_POINT_1034, 0, sizeof l_POINT_1034);
l_POINT_1034 = 0;
rt_int l_DIGITS_1035; memset(&l_DIGITS_1035, 0, sizeof l_DIGITS_1035);
l_DIGITS_1035 = ((rt_int)0LL);
{ rt_int it1037_lo = ((rt_int)0LL), it1037_hi = rt_sub((l_T_1032).f_LEN, ((rt_int)1LL));
for (rt_int it1037 = it1037_lo; it1037 <= it1037_hi; it1037++) {
{
if (rt_b_eq(rt_b_slice(l_S_1033, it1037, it1037), rt_str(".", 1)))
{
l_POINT_1034 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1033, it1037, it1037), rt_str("E", 1)))
{
goto L_end1036;
}
else
{
l_DIGITS_1035 = rt_add(l_DIGITS_1035, ((rt_int)1LL));
}
}
} } L_end1036: ;
if ((((*(R11 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R18 rv1038 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1032), r_NUM(((*(R11 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R11 *)rt_nil_check(p_E))).f_IV));
return rv1038; }
}
if ((!l_POINT_1034))
{
{ R18 rv1039 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1032)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1039; }
}
{
R14 * l_F_1040; memset(&l_F_1040, 0, sizeof l_F_1040);
l_F_1040 = r_NEW_TYP(g_T_FLOAT);
((*(R14 *)rt_nil_check(l_F_1040))).f_SCALE = l_DIGITS_1035;
if ((l_DIGITS_1035 > ((rt_int)15LL)))
{
((*(R14 *)rt_nil_check(l_F_1040))).f_SCALE = ((rt_int)15LL);
}
if ((l_DIGITS_1035 < ((rt_int)1LL)))
{
((*(R14 *)rt_nil_check(l_F_1040))).f_SCALE = ((rt_int)1LL);
}
if (rt_b_eq(rt_b_slice(l_S_1033, rt_sub((l_T_1032).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1032).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
{ R18 rv1041 = r_MKET(r_FMT1(rt_str("(@0)", 4), l_T_1032), l_F_1040);
return rv1041; }
}
if (rt_b_eq(rt_b_slice(l_S_1033, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
{ R18 rv1042 = r_MKET(r_FMT1(rt_str("(0@)", 4), l_T_1032), l_F_1040);
return rv1042; }
}
{ R18 rv1043 = r_MKET(r_FMT1(rt_str("(@)", 3), l_T_1032), l_F_1040);
return rv1043; }
}
rt_raise(RT_X_INIT);
}
static R18 r_STRING_LITERAL(R11 * p_E) { 
rt_int l_AT_1044; memset(&l_AT_1044, 0, sizeof l_AT_1044);
l_AT_1044 = ((*(R22 *)rt_nil_check(g_W))).f_TOP;
R14 * l_CS_1045; memset(&l_CS_1045, 0, sizeof l_CS_1045);
l_CS_1045 = ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII;
R11 * l_P_1046; memset(&l_P_1046, 0, sizeof l_P_1046);
l_P_1046 = ((*(R11 *)rt_nil_check(p_E))).f_A;
R7 l_R_1047; memset(&l_R_1047, 0, sizeof l_R_1047);
if (((((*(R11 *)rt_nil_check(p_E))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R13 * l_Y_1048; memset(&l_Y_1048, 0, sizeof l_Y_1048);
l_Y_1048 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1048 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R13 *)rt_nil_check(l_Y_1048))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1045 = r_RESOLVE_USER_NAME(((*(R11 *)rt_nil_check(p_E))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R14 *)rt_nil_check(l_CS_1045))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
}
}
for (;;) {
if ((l_P_1046 == NULL)) goto L_end1049;
{
if ((((*(R11 *)rt_nil_check(l_P_1046))).f_IV == g_K_STR))
{
if ((l_CS_1045 == ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R7(&l_R_1047, r_MK(r_STR(((*(R11 *)rt_nil_check(l_P_1046))).f_NAME, (((*(R11 *)rt_nil_check(l_P_1046))).f_NAME).f_LEN)), 0);
}
else
{
{
R7 l_Q_1050; memset(&l_Q_1050, 0, sizeof l_Q_1050);
S_R7(&l_Q_1050, ((*(R11 *)rt_nil_check(l_P_1046))).f_NAME, 0);
rstr l_QS_1051; memset(&l_QS_1051, 0, sizeof l_QS_1051);
l_QS_1051 = rt_str_new((l_Q_1050).f_LEN);
rt_b_assign(&l_QS_1051, r_STR(l_Q_1050, (l_Q_1050).f_LEN));
{ rt_int it1053_lo = ((rt_int)0LL), it1053_hi = rt_sub((l_Q_1050).f_LEN, ((rt_int)1LL));
for (rt_int it1053 = it1053_lo; it1053 <= it1053_hi; it1053++) {
{
{
R13 * l_Y_1054; memset(&l_Y_1054, 0, sizeof l_Y_1054);
l_Y_1054 = r_FIND_LITERAL(r_MKN(rt_str_cat(rt_str_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1051, it1053, it1053)), rt_str("'", 1))), l_CS_1045);
if ((l_Y_1054 == NULL))
{
r_FAIL(((*(R11 *)rt_nil_check(l_P_1046))).f_LINE, rt_str_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1051, it1053, it1053)));
}
S_R7(&l_R_1047, r_MK(r_CHAR_OF(((*(R13 *)rt_nil_check(l_Y_1054))).f_MV)), 0);
}
}
} } L_end1052: ;
}
}
}
else
{
{
R13 * l_Y_1055; memset(&l_Y_1055, 0, sizeof l_Y_1055);
l_Y_1055 = r_FIND_LITERAL(((*(R11 *)rt_nil_check(l_P_1046))).f_NAME, l_CS_1045);
if ((l_Y_1055 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(l_P_1046))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R11 *)rt_nil_check(l_P_1046))).f_NAME);
}
S_R7(&l_R_1047, r_MK(r_CHAR_OF(((*(R13 *)rt_nil_check(l_Y_1055))).f_MV)), 0);
}
}
l_P_1046 = ((*(R11 *)rt_nil_check(l_P_1046))).f_NEXT;
}
} L_end1049: ;
{
R7 l_S_1056; memset(&l_S_1056, 0, sizeof l_S_1056);
S_R7(&l_S_1056, ({ R7 rc1057; memset(&rc1057, 0, sizeof rc1057);  rc1057.f_AT = l_AT_1044; rc1057.f_LEN = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_TOP, l_AT_1044); rc1057.f_H = rt_neg(((rt_int)1LL)); rc1057; }), 0);
R14 * l_T_1058; memset(&l_T_1058, 0, sizeof l_T_1058);
l_T_1058 = r_STR_TYPE(r_NUM((l_S_1056).f_LEN), r_SOME((l_S_1056).f_LEN));
((*(R14 *)rt_nil_check(l_T_1058))).f_BASE = l_CS_1045;
{ R18 rv1059 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1056), r_NUM((l_S_1056).f_LEN)), l_T_1058);
return rv1059; }
}
rt_raise(RT_X_INIT);
}
static R14 * r_RESOLVE_USER_NAME(R7 p_NAME, rt_int p_LINE) { 
R11 * l_TS_1060; memset(&l_TS_1060, 0, sizeof l_TS_1060);
l_TS_1060 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_TS_1060))).f_NAME, p_NAME, 0);
{ R14 * rv1061 = r_RESOLVE(l_TS_1060);
return rv1061; }
rt_raise(RT_X_INIT);
}
static R18 r_ENUM_LITERAL(R11 * p_E, R14 * p_WANT) { 
R13 * l_Y_1062; memset(&l_Y_1062, 0, sizeof l_Y_1062);
if ((!(p_WANT == NULL)))
{
{
R14 * l_WT_1063; memset(&l_WT_1063, 0, sizeof l_WT_1063);
l_WT_1063 = r_REAL_TYPE(p_WANT);
if ((((*(R14 *)rt_nil_check(l_WT_1063))).f_KIND == g_T_ENUM))
{
l_Y_1062 = r_FIND_LITERAL(((*(R11 *)rt_nil_check(p_E))).f_NAME, l_WT_1063);
if ((!(l_Y_1062 == NULL)))
{
{ R18 rv1064 = r_MKET(r_NUM(((*(R13 *)rt_nil_check(l_Y_1062))).f_MV), r_ENUM_RESULT(l_Y_1062, p_WANT));
return rv1064; }
}
}
}
}
l_Y_1062 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
{
R13 * l_FOUND_1065; memset(&l_FOUND_1065, 0, sizeof l_FOUND_1065);
l_FOUND_1065 = NULL;
rt_int l_N_1066; memset(&l_N_1066, 0, sizeof l_N_1066);
l_N_1066 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1062 == NULL)) goto L_end1067;
{
if ((((*(R13 *)rt_nil_check(l_Y_1062))).f_KIND == g_Y_ENUMLIT))
{
if (((!(((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_1062))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII)) || (l_FOUND_1065 == NULL)))
{
if (((l_FOUND_1065 == NULL) || (((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_FOUND_1065))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII)))
{
l_FOUND_1065 = l_Y_1062;
}
else
{
l_N_1066 = rt_add(l_N_1066, ((rt_int)1LL));
}
}
}
l_Y_1062 = r_LOOKUP_NEXT(l_Y_1062);
}
} L_end1067: ;
if ((l_FOUND_1065 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1066 > ((rt_int)0LL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
{ R18 rv1068 = r_MKET(r_NUM(((*(R13 *)rt_nil_check(l_FOUND_1065))).f_MV), ((*(R13 *)rt_nil_check(l_FOUND_1065))).f_T);
return rv1068; }
}
rt_raise(RT_X_INIT);
}
static R14 * r_ENUM_RESULT(R13 * p_Y, R14 * p_WANT) { 
if ((((*(R14 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R14 * rv1069 = p_WANT;
return rv1069; }
}
{ R14 * rv1070 = ((*(R13 *)rt_nil_check(p_Y))).f_T;
return rv1070; }
rt_raise(RT_X_INIT);
}
static R18 r_NAME_EXPR(R11 * p_E, R14 * p_WANT) { 
R13 * l_Y_1071; memset(&l_Y_1071, 0, sizeof l_Y_1071);
l_Y_1071 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1071 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R13 *)rt_nil_check(l_Y_1071))).f_KIND == g_Y_VAR) || (((*(R13 *)rt_nil_check(l_Y_1071))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1072; memset(&l_WRITABLE_1072, 0, sizeof l_WRITABLE_1072);
l_WRITABLE_1072 = r_CHECK_IMPORTED(l_Y_1071, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
{ R18 rv1073 = r_MKLV(r_OBJ_ACCESS(l_Y_1071), ((*(R13 *)rt_nil_check(l_Y_1071))).f_T, ((((*(R13 *)rt_nil_check(l_Y_1071))).f_KIND == g_Y_VAR) && l_WRITABLE_1072), r_NO_TEXT());
return rv1073; }
}
}
else if ((((*(R13 *)rt_nil_check(l_Y_1071))).f_KIND == g_Y_GEN))
{
{ R18 rv1074 = r_MKET(((*(R13 *)rt_nil_check(l_Y_1071))).f_ACCESS, ((*(R13 *)rt_nil_check(l_Y_1071))).f_T);
return rv1074; }
}
else if ((((*(R13 *)rt_nil_check(l_Y_1071))).f_KIND == g_Y_ENUMLIT))
{
{ R18 rv1075 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1075; }
}
else if (((((*(R13 *)rt_nil_check(l_Y_1071))).f_KIND == g_Y_ROUTINE) || (((*(R13 *)rt_nil_check(l_Y_1071))).f_KIND == g_Y_BUILTIN)))
{
{
R11 * l_N_1076; memset(&l_N_1076, 0, sizeof l_N_1076);
l_N_1076 = r_NEW_NODE(g_N_APPLY, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_N_1076))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
{ R18 rv1077 = r_CALL_EXPR(l_N_1076, p_WANT);
return rv1077; }
}
}
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R18 r_FIELD_EXPR(R11 * p_E) { 
R11 * l_A_1078; memset(&l_A_1078, 0, sizeof l_A_1078);
l_A_1078 = ((*(R11 *)rt_nil_check(p_E))).f_A;
if ((((*(R11 *)rt_nil_check(l_A_1078))).f_KIND == g_N_INDEX))
{
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_1078))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_1078))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R18 l_B_1079; memset(&l_B_1079, 0, sizeof l_B_1079);
S_R18(&l_B_1079, r_EXPR(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_1078))).f_A))).f_A, NULL), 0);
R7 l_I_1080; memset(&l_I_1080, 0, sizeof l_I_1080);
S_R7(&l_I_1080, r_INT_EXPR(((*(R11 *)rt_nil_check(l_A_1078))).f_B), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_B_1079).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R18 rv1081 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1079).f_C, l_I_1080, r_NUM(rt_sub(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_B_1079).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1081; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R18 rv1082 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1079).f_C, l_I_1080, r_NUM(rt_sub(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_B_1079).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1082; }
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R11 *)rt_nil_check(l_A_1078))).f_KIND == g_N_PAREN))
{
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_1078))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_1078))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_1078))).f_A))).f_A))).f_NAME))
{
{ R18 rv1083 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_1078))).f_A))).f_A))).f_NAME, ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_1078))).f_A))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
return rv1083; }
}
}
}
}
if ((((*(R11 *)rt_nil_check(l_A_1078))).f_KIND == g_N_NAME))
{
{
R13 * l_Y_1084; memset(&l_Y_1084, 0, sizeof l_Y_1084);
l_Y_1084 = r_LOOKUP(((*(R11 *)rt_nil_check(l_A_1078))).f_NAME);
if ((!(l_Y_1084 == NULL)))
{
if ((((*(R13 *)rt_nil_check(l_Y_1084))).f_KIND == g_Y_TYPE))
{
{ R18 rv1085 = r_TYPE_ATTRIBUTE(((*(R11 *)rt_nil_check(l_A_1078))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
return rv1085; }
}
}
else if (r_IS_TYPE_WORD(((*(R11 *)rt_nil_check(l_A_1078))).f_NAME))
{
{ R18 rv1086 = r_TYPE_ATTRIBUTE(((*(R11 *)rt_nil_check(l_A_1078))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
return rv1086; }
}
}
}
{
R18 l_B_1087; memset(&l_B_1087, 0, sizeof l_B_1087);
S_R18(&l_B_1087, r_EXPR(l_A_1078, NULL), 0);
R14 * l_BT_1088; memset(&l_BT_1088, 0, sizeof l_BT_1088);
l_BT_1088 = (l_B_1087).f_T;
if ((((*(R14 *)rt_nil_check(l_BT_1088))).f_KIND == g_T_REC))
{
{
R15 * l_F_1089; memset(&l_F_1089, 0, sizeof l_F_1089);
l_F_1089 = r_FIND_FIELD(l_BT_1088, ((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1089 == NULL)))
{
r_CHECK_VARIANT(l_F_1089, l_BT_1088, l_A_1078, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
{ R18 rv1090 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1087).f_C, ((*(R15 *)rt_nil_check(l_F_1089))).f_CNAME), ((*(R15 *)rt_nil_check(l_F_1089))).f_T, ((l_B_1087).f_LVAL && (((*(R15 *)rt_nil_check(l_F_1089))).f_KIND == ((rt_int)0LL))), (l_B_1087).f_C);
return rv1090; }
}
}
}
{ R18 rv1091 = r_ATTRIBUTE(l_B_1087, ((*(R11 *)rt_nil_check(p_E))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
return rv1091; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R7 p_NAME) { 
{ rt_int rv1092 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1092; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R15 * p_F, R14 * p_T, R11 * p_BASE, rt_int p_LINE) { 
if (((((*(R15 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R12 l_TAGV_1093; memset(&l_TAGV_1093, 0, sizeof l_TAGV_1093);
S_R12(&l_TAGV_1093, r_TAG_VALUE(p_T, ((*(R15 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1093).f_OK))
{
r_FAILT(p_LINE, rt_str_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R15 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R15 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1093).f_V, ((*(R15 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R15 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R15 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R12 r_TAG_VALUE(R14 * p_T, R7 p_TAGN) { 
R15 * l_F_1094; memset(&l_F_1094, 0, sizeof l_F_1094);
l_F_1094 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
R17 * l_A_1095; memset(&l_A_1095, 0, sizeof l_A_1095);
l_A_1095 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1094 == NULL)) goto L_end1096;
{
if ((!(((*(R15 *)rt_nil_check(l_F_1094))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1095 == NULL))
{
{ R12 rv1097 = r_NO_MVAL();
return rv1097; }
}
if (r_TEQ(((*(R15 *)rt_nil_check(l_F_1094))).f_NAME, p_TAGN))
{
if (((*(R17 *)rt_nil_check(l_A_1095))).f_ANYARG)
{
{ R12 rv1098 = r_NO_MVAL();
return rv1098; }
}
{ R12 rv1099 = ((*(R17 *)rt_nil_check(l_A_1095))).f_MLO;
return rv1099; }
}
l_A_1095 = ((*(R17 *)rt_nil_check(l_A_1095))).f_NEXT;
}
l_F_1094 = ((*(R15 *)rt_nil_check(l_F_1094))).f_NEXT;
}
} L_end1096: ;
{ R12 rv1100 = r_NO_MVAL();
return rv1100; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R11 * p_L, rt_int p_V, R14 * p_T) { 
R11 * l_P_1101; memset(&l_P_1101, 0, sizeof l_P_1101);
l_P_1101 = p_L;
for (;;) {
if ((l_P_1101 == NULL)) goto L_end1102;
{
if ((((*(R11 *)rt_nil_check(l_P_1101))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(l_P_1101))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(l_P_1101))).f_B, p_T)).f_V)))
{
{ rt_int rv1103 = 1;
return rv1103; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1101, p_T)).f_V == p_V))
{
{ rt_int rv1104 = 1;
return rv1104; }
}
l_P_1101 = ((*(R11 *)rt_nil_check(l_P_1101))).f_NEXT;
}
} L_end1102: ;
{ rt_int rv1105 = 0;
return rv1105; }
rt_raise(RT_X_INIT);
}
static R18 r_INDEX_EXPR(R11 * p_E) { 
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R18 l_A_1106; memset(&l_A_1106, 0, sizeof l_A_1106);
S_R18(&l_A_1106, r_EXPR(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_A, NULL), 0);
R7 l_I_1107; memset(&l_I_1107, 0, sizeof l_I_1107);
S_R7(&l_I_1107, r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R14 *)rt_nil_check(r_REAL_TYPE((l_A_1106).f_T)))).f_KIND == g_T_ARR))
{
{ R18 rv1108 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1106).f_C, (l_A_1106).f_C, l_I_1107, r_NUM(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_A_1106).f_T)))).f_DIMS)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1108; }
}
}
}
{ R18 rv1109 = r_INDEX_EXPR2(p_E);
return rv1109; }
rt_raise(RT_X_INIT);
}
static R18 r_INDEX_EXPR2(R11 * p_E) { 
R18 l_B_1110; memset(&l_B_1110, 0, sizeof l_B_1110);
S_R18(&l_B_1110, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
R14 * l_T_1111; memset(&l_T_1111, 0, sizeof l_T_1111);
l_T_1111 = r_REAL_TYPE((l_B_1110).f_T);
R11 * l_S_1112; memset(&l_S_1112, 0, sizeof l_S_1112);
l_S_1112 = ((*(R11 *)rt_nil_check(p_E))).f_B;
R7 l_IX_1113; memset(&l_IX_1113, 0, sizeof l_IX_1113);
S_R7(&l_IX_1113, r_MK(rt_str("", 0)), 0);
rt_int l_N_1114; memset(&l_N_1114, 0, sizeof l_N_1114);
l_N_1114 = ((rt_int)0LL);
if ((!(((*(R14 *)rt_nil_check(l_T_1111))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1112 == NULL)) goto L_end1115;
{
if ((l_N_1114 > ((rt_int)0LL)))
{
S_R7(&l_IX_1113, r_CATS(l_IX_1113, rt_str(", ", 2)), 0);
}
S_R7(&l_IX_1113, r_CAT(l_IX_1113, r_INT_EXPR(l_S_1112)), 0);
l_N_1114 = rt_add(l_N_1114, ((rt_int)1LL));
l_S_1112 = ((*(R11 *)rt_nil_check(l_S_1112))).f_NEXT;
}
} L_end1115: ;
if ((!(l_N_1114 == ((*(R14 *)rt_nil_check(l_T_1111))).f_DIMS)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1114 == ((rt_int)1LL)))
{
{ R18 rv1116 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1110).f_C, l_IX_1113, (l_B_1110).f_C, (l_B_1110).f_C), ((*(R14 *)rt_nil_check(l_T_1111))).f_ELEM, (l_B_1110).f_LVAL, r_NO_TEXT());
return rv1116; }
}
{
R7 l_X_1117; memset(&l_X_1117, 0, sizeof l_X_1117);
S_R7(&l_X_1117, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1110).f_C, r_NUM(l_N_1114), (l_B_1110).f_C, (l_B_1110).f_C), 0);
{ R18 rv1118 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1117, l_IX_1113), ((*(R14 *)rt_nil_check(l_T_1111))).f_ELEM, (l_B_1110).f_LVAL, r_NO_TEXT());
return rv1118; }
}
rt_raise(RT_X_INIT);
}
static R7 r_OP_NAME(R7 p_OP, rt_int p_UNARY) { 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R7 rv1119 = r_MKN(rt_str("NEGATE_", 7));
return rv1119; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R7 rv1120 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1120; }
}
{ R7 rv1121 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1121; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R7 rv1122 = r_MKN(rt_str("ADD_", 4));
return rv1122; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R7 rv1123 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1123; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R7 rv1124 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1124; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R7 rv1125 = r_MKN(rt_str("DIVIDE_", 7));
return rv1125; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R7 rv1126 = r_MKN(rt_str("MODULUS_", 8));
return rv1126; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R7 rv1127 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1127; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R7 rv1128 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1128; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R7 rv1129 = r_MKN(rt_str("EQUAL_", 6));
return rv1129; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R7 rv1130 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1130; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R7 rv1131 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1131; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R7 rv1132 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1132; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R7 rv1133 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1133; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R7 rv1134 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1134; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R7 rv1135 = r_MKN(rt_str("AND_", 4));
return rv1135; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R7 rv1136 = r_MKN(rt_str("OR_", 3));
return rv1136; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R7 rv1137 = r_MKN(rt_str("XOR_", 4));
return rv1137; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R7 rv1138 = r_MKN(rt_str("IMPLIES_", 8));
return rv1138; }
}
{ R7 rv1139 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1139; }
rt_raise(RT_X_INIT);
}
static R19 * r_VAL_ARG(R18 p_V, R19 * p_NEXT) { 
R19 * l_A_1140; memset(&l_A_1140, 0, sizeof l_A_1140);
l_A_1140 = ((R19 *)rt_alloc(sizeof (R19)));
S_R19(&(*(R19 *)rt_nil_check(l_A_1140)), ({ R19 rc1141; memset(&rc1141, 0, sizeof rc1141);  rc1141.f_E = NULL; S_R18(&rc1141.f_V, p_V, 0); rc1141.f_HAVE = 1; rc1141.f_MODE = g_M_IN; rc1141.f_NEXT = p_NEXT; rc1141; }), 0);
{ R19 * rv1142 = l_A_1140;
return rv1142; }
rt_raise(RT_X_INIT);
}
static R19 * r_NODE_ARG(R11 * p_E, rt_int p_MODE, R19 * p_NEXT) { 
R19 * l_A_1143; memset(&l_A_1143, 0, sizeof l_A_1143);
l_A_1143 = ((R19 *)rt_alloc(sizeof (R19)));
S_R19(&(*(R19 *)rt_nil_check(l_A_1143)), ({ R19 rc1144; memset(&rc1144, 0, sizeof rc1144);  rc1144.f_E = p_E; S_R18(&rc1144.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1144.f_HAVE = 0; rc1144.f_MODE = p_MODE; rc1144.f_NEXT = p_NEXT; rc1144; }), 0);
{ R19 * rv1145 = l_A_1143;
return rv1145; }
rt_raise(RT_X_INIT);
}
static R13 * r_USER_OPERATOR(R7 p_NAME, R19 * p_ARGS, rt_int p_LINE) { 
R13 * l_Y_1146; memset(&l_Y_1146, 0, sizeof l_Y_1146);
l_Y_1146 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1146 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1146 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R13 * rv1147 = l_Y_1146;
return rv1147; }
rt_raise(RT_X_INIT);
}
static R18 r_OPERATOR_CALL3(R7 p_NAME, R18 p_A, R11 * p_B, R11 * p_C, rt_int p_LINE) { 
R19 * l_ARGS_1148; memset(&l_ARGS_1148, 0, sizeof l_ARGS_1148);
l_ARGS_1148 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R13 * l_Y_1149; memset(&l_Y_1149, 0, sizeof l_Y_1149);
l_Y_1149 = r_USER_OPERATOR(p_NAME, l_ARGS_1148, p_LINE);
if ((l_Y_1149 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R18 rv1150 = r_CALL_SYM(l_Y_1149, l_ARGS_1148, p_LINE);
return rv1150; }
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
{ R7 rv1151 = p_C;
return rv1151; }
}
if ((p_STO > p_SFROM))
{
{ R7 rv1152 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1152; }
}
if (((*(R22 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R7 rv1153 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1153; }
}
{ R7 rv1154 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1154; }
rt_raise(RT_X_INIT);
}
static R7 r_RESCALE(R18 p_V, rt_int p_S, rt_int p_LINE) { 
if ((((*(R14 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R7 rv1155 = r_RESCALE_C((p_V).f_C, ((*(R14 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1155; }
rt_raise(RT_X_INIT);
}
static R7 r_CONVERT(R18 p_V, R14 * p_T, rt_int p_LINE, R7 p_SELF) { 
R14 * l_RT_1156; memset(&l_RT_1156, 0, sizeof l_RT_1156);
l_RT_1156 = r_REAL_TYPE(p_T);
R14 * l_VT_1157; memset(&l_VT_1157, 0, sizeof l_VT_1157);
l_VT_1157 = (p_V).f_T;
if (((((*(R14 *)rt_nil_check(l_VT_1157))).f_KIND == g_T_NIL) && (((*(R14 *)rt_nil_check(l_RT_1156))).f_KIND == g_T_PTR)))
{
{ R7 rv1158 = (p_V).f_C;
return rv1158; }
}
if (((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R14 *)rt_nil_check(l_VT_1157))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1157)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R7 rv1159 = (p_V).f_C;
return rv1159; }
}
if ((!r_SAME_CLASS(l_RT_1156, l_VT_1157)))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1157), (r_TYPE_NAME(l_VT_1157)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1156), (r_TYPE_NAME(l_RT_1156)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R14 *)rt_nil_check(l_RT_1156))).f_KIND == g_T_INT))
{
{ R7 rv1160 = r_RANGE_CHECK(l_RT_1156, r_RESCALE(p_V, ((*(R14 *)rt_nil_check(l_RT_1156))).f_SCALE, p_LINE), p_SELF);
return rv1160; }
}
else if (((((*(R14 *)rt_nil_check(l_RT_1156))).f_KIND == g_T_FLOAT) || (((*(R14 *)rt_nil_check(l_RT_1156))).f_KIND == g_T_ENUM)))
{
{ R7 rv1161 = r_RANGE_CHECK(l_RT_1156, (p_V).f_C, p_SELF);
return rv1161; }
}
else if (((((*(R14 *)rt_nil_check(l_RT_1156))).f_KIND == g_T_STR) || (((*(R14 *)rt_nil_check(l_RT_1156))).f_KIND == g_T_BITS)))
{
if (((((*(R14 *)rt_nil_check(l_RT_1156))).f_MLEN).f_OK && (((*(R14 *)rt_nil_check(l_VT_1157))).f_MLEN).f_OK))
{
if ((!((((*(R14 *)rt_nil_check(l_RT_1156))).f_MLEN).f_V == (((*(R14 *)rt_nil_check(l_VT_1157))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R14 *)rt_nil_check(l_RT_1156))).f_KIND == g_T_PTR))
{
if ((!r_SAME_TYPE(r_TARGET(l_RT_1156), r_TARGET(l_VT_1157))))
{
r_FAIL(p_LINE, rt_str("the pointers are to different types (3.10.5)", 44));
}
}
else if ((((*(R14 *)rt_nil_check(l_RT_1156))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1156)) && (!r_HAS_ANY(l_VT_1157))))
{
if ((!r_SAME_ARGS(((*(R14 *)rt_nil_check(l_RT_1156))).f_ARGS, ((*(R14 *)rt_nil_check(l_VT_1157))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R14 *)rt_nil_check(l_RT_1156))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R14 *)rt_nil_check(l_RT_1156))).f_ELEM, ((*(R14 *)rt_nil_check(l_VT_1157))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
}
{ R7 rv1162 = (p_V).f_C;
return rv1162; }
rt_raise(RT_X_INIT);
}
static R7 r_STORE_CODE(R14 * p_T, R7 p_LV, R18 p_V, rt_int p_LINE, R7 p_SELF) { 
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R19 * l_ARGS_1163; memset(&l_ARGS_1163, 0, sizeof l_ARGS_1163);
l_ARGS_1163 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R13 * l_Y_1164; memset(&l_Y_1164, 0, sizeof l_Y_1164);
((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(l_ARGS_1163))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_1164 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1163, p_LINE, 0);
if ((l_Y_1164 == NULL))
{
((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(l_ARGS_1163))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_1164 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1163, p_LINE, 0);
}
if ((l_Y_1164 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R7 rv1165 = r_CATS((r_CALL_SYM(l_Y_1164, l_ARGS_1163, p_LINE)).f_C, rt_str(";", 1));
return rv1165; }
}
}
{ R7 rv1166 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1166; }
rt_raise(RT_X_INIT);
}
static R18 r_UNARY(R11 * p_E) { 
R18 l_A_1167; memset(&l_A_1167, 0, sizeof l_A_1167);
S_R18(&l_A_1167, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
R14 * l_T_1168; memset(&l_T_1168, 0, sizeof l_T_1168);
l_T_1168 = (l_A_1167).f_T;
R7 l_OP_1169; memset(&l_OP_1169, 0, sizeof l_OP_1169);
S_R7(&l_OP_1169, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
if ((((*(R14 *)rt_nil_check(l_T_1168))).f_KIND == g_T_ABS))
{
{
R19 * l_ARGS_1170; memset(&l_ARGS_1170, 0, sizeof l_ARGS_1170);
l_ARGS_1170 = r_VAL_ARG(l_A_1167, NULL);
R13 * l_Y_1171; memset(&l_Y_1171, 0, sizeof l_Y_1171);
l_Y_1171 = r_USER_OPERATOR(r_OP_NAME(l_OP_1169, 1), l_ARGS_1170, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
if ((l_Y_1171 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1168));
}
{ R18 rv1172 = r_CALL_SYM(l_Y_1171, l_ARGS_1170, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
return rv1172; }
}
}
if (r_TEQS(l_OP_1169, rt_str("NOT", 3)))
{
if ((((*(R14 *)rt_nil_check(l_T_1168))).f_KIND == g_T_BOOL))
{
{ R18 rv1173 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1167).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1173; }
}
else if ((((*(R14 *)rt_nil_check(l_T_1168))).f_KIND == g_T_BITS))
{
{ R18 rv1174 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1167).f_C), l_T_1168);
return rv1174; }
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R14 *)rt_nil_check(l_T_1168))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1169, rt_str("-", 1)))
{
{ R18 rv1175 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1167).f_C), r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_1168))).f_SCALE));
return rv1175; }
}
{ R18 rv1176 = r_MKET((l_A_1167).f_C, r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_1168))).f_SCALE));
return rv1176; }
}
else if ((((*(R14 *)rt_nil_check(l_T_1168))).f_KIND == g_T_FLOAT))
{
if (r_TEQS(l_OP_1169, rt_str("-", 1)))
{
{ R18 rv1177 = r_MKET(r_FMT1(rt_str("(-@)", 4), (l_A_1167).f_C), l_T_1168);
return rv1177; }
}
{ R18 rv1178 = l_A_1167;
return rv1178; }
}
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1168));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R11 * p_E) { 
{ rt_int rv1179 = (((((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R11 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1179; }
rt_raise(RT_X_INIT);
}
static R18 r_BINARY(R11 * p_E) { 
R7 l_OP_1180; memset(&l_OP_1180, 0, sizeof l_OP_1180);
S_R7(&l_OP_1180, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
R18 l_A_1181; memset(&l_A_1181, 0, sizeof l_A_1181);
R18 l_B_1182; memset(&l_B_1182, 0, sizeof l_B_1182);
if ((r_TEQS(l_OP_1180, rt_str("&", 1)) || r_TEQS(l_OP_1180, rt_str("!", 1))))
{
{
R12 l_MA_1183; memset(&l_MA_1183, 0, sizeof l_MA_1183);
S_R12(&l_MA_1183, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
R7 l_CA_1184; memset(&l_CA_1184, 0, sizeof l_CA_1184);
S_R7(&l_CA_1184, r_BOOL_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
R7 l_CB_1185; memset(&l_CB_1185, 0, sizeof l_CB_1185);
S_R7(&l_CB_1185, r_BOOL_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1180, rt_str("&", 1)))
{
{ R18 rv1186 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1184, l_CB_1185), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1186; }
}
{ R18 rv1187 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1184, l_CB_1185), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1187; }
}
}
if ((r_IS_LITERALISH(((*(R11 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R11 *)rt_nil_check(p_E))).f_B))))
{
S_R18(&l_B_1182, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R18(&l_A_1181, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, (l_B_1182).f_T), 0);
}
else
{
S_R18(&l_A_1181, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R18(&l_B_1182, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B, (l_A_1181).f_T), 0);
}
{ R18 rv1188 = r_APPLY_OPERATOR(p_E, l_OP_1180, l_A_1181, l_B_1182);
return rv1188; }
rt_raise(RT_X_INIT);
}
static R18 r_APPLY_OPERATOR(R11 * p_E, R7 p_OP, R18 p_A, R18 p_B) { 
R14 * l_AT_1189; memset(&l_AT_1189, 0, sizeof l_AT_1189);
l_AT_1189 = (p_A).f_T;
R14 * l_BT_1190; memset(&l_BT_1190, 0, sizeof l_BT_1190);
l_BT_1190 = (p_B).f_T;
rt_int l_LINE_1191; memset(&l_LINE_1191, 0, sizeof l_LINE_1191);
l_LINE_1191 = ((*(R11 *)rt_nil_check(p_E))).f_LINE;
if ((((*(R11 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL)))
{
{
R7 l_NAME_1192; memset(&l_NAME_1192, 0, sizeof l_NAME_1192);
S_R7(&l_NAME_1192, r_OP_NAME(p_OP, 0), 0);
if (((((!(r_LOOKUP(l_NAME_1192) == NULL)) || (!(r_LOOKUP(r_MKN(rt_b_slice(r_STR(l_NAME_1192, (l_NAME_1192).f_LEN), ((rt_int)0LL), rt_sub((l_NAME_1192).f_LEN, ((rt_int)2LL))))) == NULL))) || (((*(R14 *)rt_nil_check(l_AT_1189))).f_KIND == g_T_ABS)) || (((*(R14 *)rt_nil_check(l_BT_1190))).f_KIND == g_T_ABS)))
{
{
R19 * l_ARGS_1193; memset(&l_ARGS_1193, 0, sizeof l_ARGS_1193);
l_ARGS_1193 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R13 * l_Y_1194; memset(&l_Y_1194, 0, sizeof l_Y_1194);
l_Y_1194 = r_USER_OPERATOR(l_NAME_1192, l_ARGS_1193, l_LINE_1191);
if ((!(l_Y_1194 == NULL)))
{
{ R18 rv1195 = r_CALL_SYM(l_Y_1194, l_ARGS_1193, l_LINE_1191);
return rv1195; }
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{
R13 * l_Q_1196; memset(&l_Q_1196, 0, sizeof l_Q_1196);
l_Q_1196 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1193, l_LINE_1191);
if ((!(l_Q_1196 == NULL)))
{
{ R18 rv1197 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1196, l_ARGS_1193, l_LINE_1191)).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1197; }
}
}
}
if (((((*(R14 *)rt_nil_check(l_AT_1189))).f_KIND == g_T_ABS) || (((*(R14 *)rt_nil_check(l_BT_1190))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1191, rt_str("no such operation for the abstract type: ", 41), l_NAME_1192);
}
}
}
}
}
if ((!(((*(R11 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R18 rv1198 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1198; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R18 rv1199 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1199; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R14 *)rt_nil_check(l_AT_1189))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_BT_1190))).f_KIND == g_T_INT)))
{
{
rt_int l_S_1200; memset(&l_S_1200, 0, sizeof l_S_1200);
l_S_1200 = r_MAX_INT(((*(R14 *)rt_nil_check(l_AT_1189))).f_SCALE, ((*(R14 *)rt_nil_check(l_BT_1190))).f_SCALE);
{ R18 rv1201 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), r_RESCALE_C((p_A).f_C, ((*(R14 *)rt_nil_check(l_AT_1189))).f_SCALE, l_S_1200), p_OP, r_RESCALE_C((p_B).f_C, ((*(R14 *)rt_nil_check(l_BT_1190))).f_SCALE, l_S_1200)), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1201; }
}
}
else if (((((*(R14 *)rt_nil_check(l_AT_1189))).f_KIND == g_T_FLOAT) && (((*(R14 *)rt_nil_check(l_BT_1190))).f_KIND == g_T_FLOAT)))
{
{ R18 rv1202 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1202; }
}
else if (((((*(R14 *)rt_nil_check(l_AT_1189))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1189, l_BT_1190)))
{
if (((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_AT_1189))).f_BASE))).f_UNORDERED)
{
r_FAIL(l_LINE_1191, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R18 rv1203 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1203; }
}
r_FAILT(l_LINE_1191, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R14 *)rt_nil_check(l_AT_1189))).f_KIND == g_T_STR) && (((*(R14 *)rt_nil_check(l_BT_1190))).f_KIND == g_T_STR))) || (((((*(R14 *)rt_nil_check(l_AT_1189))).f_KIND == g_T_BITS) && (((*(R14 *)rt_nil_check(l_BT_1190))).f_KIND == g_T_BITS)))))
{
{
R14 * l_T_1204; memset(&l_T_1204, 0, sizeof l_T_1204);
l_T_1204 = r_NEW_TYP(((*(R14 *)rt_nil_check(l_AT_1189))).f_KIND);
((*(R14 *)rt_nil_check(l_T_1204))).f_BASE = ((*(R14 *)rt_nil_check(l_AT_1189))).f_BASE;
if (((((*(R14 *)rt_nil_check(l_AT_1189))).f_MLEN).f_OK && (((*(R14 *)rt_nil_check(l_BT_1190))).f_MLEN).f_OK))
{
S_R12(&((*(R14 *)rt_nil_check(l_T_1204))).f_MLEN, r_SOME(rt_add((((*(R14 *)rt_nil_check(l_AT_1189))).f_MLEN).f_V, (((*(R14 *)rt_nil_check(l_BT_1190))).f_MLEN).f_V)), 0);
S_R7(&((*(R14 *)rt_nil_check(l_T_1204))).f_LEN_C, r_NUM((((*(R14 *)rt_nil_check(l_T_1204))).f_MLEN).f_V), 0);
}
{ R18 rv1205 = r_MKET(r_FMT2(rt_str("rt_str_cat(@, @)", 16), (p_A).f_C, (p_B).f_C), l_T_1204);
return rv1205; }
}
}
r_FAIL(l_LINE_1191, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R14 *)rt_nil_check(l_AT_1189))).f_KIND == g_T_BITS) && (((*(R14 *)rt_nil_check(l_BT_1190))).f_KIND == g_T_BITS)))
{
{ R18 rv1206 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1189);
return rv1206; }
}
r_FAILT(l_LINE_1191, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R14 *)rt_nil_check(l_AT_1189))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_BT_1190))).f_KIND == g_T_INT)))
{
{ R18 rv1207 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1207; }
}
else if (((((*(R14 *)rt_nil_check(l_AT_1189))).f_KIND == g_T_FLOAT) && (((*(R14 *)rt_nil_check(l_BT_1190))).f_KIND == g_T_FLOAT)))
{
{
R14 * l_T_1208; memset(&l_T_1208, 0, sizeof l_T_1208);
l_T_1208 = r_NEW_TYP(g_T_FLOAT);
((*(R14 *)rt_nil_check(l_T_1208))).f_SCALE = r_MAX_INT(((*(R14 *)rt_nil_check(l_AT_1189))).f_SCALE, ((*(R14 *)rt_nil_check(l_BT_1190))).f_SCALE);
if (((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))))
{
{ R18 rv1209 = r_MKET(r_FMT3(rt_str("rt_b_fchk(@ @ @)", 16), (p_A).f_C, p_OP, (p_B).f_C), l_T_1208);
return rv1209; }
}
else if (r_TEQS(p_OP, rt_str("/", 1)))
{
{ R18 rv1210 = r_MKET(r_FMT2(rt_str("rt_b_fchk(rt_fdiv(@, @))", 24), (p_A).f_C, (p_B).f_C), l_T_1208);
return rv1210; }
}
}
}
if (((((((*(R14 *)rt_nil_check(l_AT_1189))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_BT_1190))).f_KIND == g_T_FLOAT))) || (((((*(R14 *)rt_nil_check(l_AT_1189))).f_KIND == g_T_FLOAT) && (((*(R14 *)rt_nil_check(l_BT_1190))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1191, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1191, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1189), (r_TYPE_NAME(l_AT_1189)).f_LEN)));
rt_raise(RT_X_INIT);
}
static R7 r_LOWER_OP(R7 p_OP) { 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R7 rv1211 = r_MK(rt_str("and", 3));
return rv1211; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R7 rv1212 = r_MK(rt_str("or", 2));
return rv1212; }
}
{ R7 rv1213 = r_MK(rt_str("xor", 3));
return rv1213; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { 
if ((p_A > p_B))
{
{ rt_int rv1214 = p_A;
return rv1214; }
}
{ rt_int rv1215 = p_B;
return rv1215; }
rt_raise(RT_X_INIT);
}
static R18 r_EQUALITY(R11 * p_E, R7 p_OP, R18 p_A, R18 p_B) { 
R14 * l_AT_1216; memset(&l_AT_1216, 0, sizeof l_AT_1216);
l_AT_1216 = r_REAL_TYPE((p_A).f_T);
R14 * l_BT_1217; memset(&l_BT_1217, 0, sizeof l_BT_1217);
l_BT_1217 = r_REAL_TYPE((p_B).f_T);
R7 l_R_1218; memset(&l_R_1218, 0, sizeof l_R_1218);
if (((((*(R14 *)rt_nil_check(l_AT_1216))).f_KIND == g_T_NIL) || (((*(R14 *)rt_nil_check(l_BT_1217))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R14 *)rt_nil_check(l_AT_1216))).f_KIND == g_T_PTR) || (((*(R14 *)rt_nil_check(l_BT_1217))).f_KIND == g_T_PTR)) || (((((*(R14 *)rt_nil_check(l_AT_1216))).f_KIND == g_T_NIL) && (((*(R14 *)rt_nil_check(l_BT_1217))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R7(&l_R_1218, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R14 *)rt_nil_check(l_AT_1216))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_BT_1217))).f_KIND == g_T_INT)))
{
{
rt_int l_S_1219; memset(&l_S_1219, 0, sizeof l_S_1219);
l_S_1219 = r_MAX_INT(((*(R14 *)rt_nil_check(l_AT_1216))).f_SCALE, ((*(R14 *)rt_nil_check(l_BT_1217))).f_SCALE);
S_R7(&l_R_1218, r_FMT2(rt_str("(@ == @)", 8), r_RESCALE_C((p_A).f_C, ((*(R14 *)rt_nil_check(l_AT_1216))).f_SCALE, l_S_1219), r_RESCALE_C((p_B).f_C, ((*(R14 *)rt_nil_check(l_BT_1217))).f_SCALE, l_S_1219)), 0);
}
}
else
{
if ((!r_SAME_CLASS(l_AT_1216, l_BT_1217)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R14 *)rt_nil_check(l_AT_1216))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
if (((((*(R14 *)rt_nil_check(l_AT_1216))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1216) || r_HAS_ANY(l_BT_1217)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
S_R7(&l_R_1218, r_EQUAL_CODE(l_AT_1216, (p_A).f_C, (p_B).f_C), 0);
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R7(&l_R_1218, r_FMT1(rt_str("(!@)", 4), l_R_1218), 0);
}
{ R18 rv1220 = r_MKET(l_R_1218, ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1220; }
rt_raise(RT_X_INIT);
}
static R18 r_FIXED_ARITH(R11 * p_E, R7 p_OP, R18 p_A, R18 p_B) { 
rt_int l_S1_1221; memset(&l_S1_1221, 0, sizeof l_S1_1221);
l_S1_1221 = ((*(R14 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1222; memset(&l_S2_1222, 0, sizeof l_S2_1222);
l_S2_1222 = ((*(R14 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1223; memset(&l_S_1223, 0, sizeof l_S_1223);
l_S_1223 = r_MAX_INT(l_S1_1221, l_S2_1222);
R7 l_FN_1224; memset(&l_FN_1224, 0, sizeof l_FN_1224);
S_R7(&l_FN_1224, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R7(&l_FN_1224, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R18 rv1225 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1224, r_RESCALE_C((p_A).f_C, l_S1_1221, l_S_1223), r_RESCALE_C((p_B).f_C, l_S2_1222, l_S_1223)), r_INT_TYPE(l_S_1223));
return rv1225; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R18 rv1226 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1221, l_S2_1222)));
return rv1226; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R22 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R18 rv1227 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1221, l_S2_1222)));
return rv1227; }
}
{ R18 rv1228 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1221, l_S2_1222)));
return rv1228; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R22 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R18 rv1229 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1221));
return rv1229; }
}
{ R18 rv1230 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1221));
return rv1230; }
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
rt_int l_S1_1231; memset(&l_S1_1231, 0, sizeof l_S1_1231);
l_S1_1231 = ((*(R14 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1232; memset(&l_S2_1232, 0, sizeof l_S2_1232);
l_S2_1232 = ((*(R14 *)rt_nil_check((p_B).f_T))).f_SCALE;
R7 l_RND_1233; memset(&l_RND_1233, 0, sizeof l_RND_1233);
S_R7(&l_RND_1233, r_MK(rt_str("0", 1)), 0);
if (((!(((*(R14 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R14 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R22 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R7(&l_RND_1233, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R11 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R11 *)rt_nil_check(p_E))).f_LINE);
{ R18 rv1234 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1234; }
}
{
R12 l_SM_1235; memset(&l_SM_1235, 0, sizeof l_SM_1235);
S_R12(&l_SM_1235, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1236; memset(&l_S_1236, 0, sizeof l_S_1236);
l_S_1236 = (l_SM_1235).f_V;
rt_int l_SR_1237; memset(&l_SR_1237, 0, sizeof l_SR_1237);
l_SR_1237 = r_MAX_INT(l_S1_1231, l_S2_1232);
if ((!(l_SM_1235).f_OK))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R18 rv1238 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1236, l_S1_1231), l_S2_1232)), l_RND_1233), r_INT_TYPE(l_S_1236));
return rv1238; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R18 rv1239 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1236, l_S1_1231), l_S2_1232)), l_RND_1233), r_INT_TYPE(l_S_1236));
return rv1239; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R18 rv1240 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1231), r_NUM(l_S_1236), l_RND_1233), r_INT_TYPE(l_S_1236));
return rv1240; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R7 l_FN_1241; memset(&l_FN_1241, 0, sizeof l_FN_1241);
S_R7(&l_FN_1241, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R7(&l_FN_1241, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R18 rv1242 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT3(rt_str("@(@, @)", 7), l_FN_1241, r_RESCALE_C((p_A).f_C, l_S1_1231, l_SR_1237), r_RESCALE_C((p_B).f_C, l_S2_1232, l_SR_1237)), r_NUM(l_SR_1237), r_NUM(l_S_1236), l_RND_1233), r_INT_TYPE(l_S_1236));
return rv1242; }
}
}
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R18 r_IN_EXPR(R11 * p_E) { 
R18 l_V_1243; memset(&l_V_1243, 0, sizeof l_V_1243);
S_R18(&l_V_1243, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
R14 * l_T_1244; memset(&l_T_1244, 0, sizeof l_T_1244);
l_T_1244 = r_REAL_TYPE((l_V_1243).f_T);
R11 * l_R_1245; memset(&l_R_1245, 0, sizeof l_R_1245);
l_R_1245 = ((*(R11 *)rt_nil_check(p_E))).f_B;
R7 l_TMP_1246; memset(&l_TMP_1246, 0, sizeof l_TMP_1246);
S_R7(&l_TMP_1246, r_NEW_NAME(rt_str("iv", 2)), 0);
R18 l_LO_1247; memset(&l_LO_1247, 0, sizeof l_LO_1247);
R18 l_HI_1248; memset(&l_HI_1248, 0, sizeof l_HI_1248);
R7 l_LOC_1249; memset(&l_LOC_1249, 0, sizeof l_LOC_1249);
R7 l_HIC_1250; memset(&l_HIC_1250, 0, sizeof l_HIC_1250);
R7 l_LO_OP_1251; memset(&l_LO_OP_1251, 0, sizeof l_LO_OP_1251);
S_R7(&l_LO_OP_1251, r_MK(rt_str("<=", 2)), 0);
R7 l_HI_OP_1252; memset(&l_HI_OP_1252, 0, sizeof l_HI_OP_1252);
S_R7(&l_HI_OP_1252, r_MK(rt_str("<=", 2)), 0);
S_R18(&l_LO_1247, r_EXPR(((*(R11 *)rt_nil_check(l_R_1245))).f_A, l_T_1244), 0);
S_R18(&l_HI_1248, r_EXPR(((*(R11 *)rt_nil_check(l_R_1245))).f_B, l_T_1244), 0);
if (((((*(R14 *)rt_nil_check(l_T_1244))).f_KIND == g_T_ENUM) && ((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_1244))).f_BASE))).f_UNORDERED))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R14 *)rt_nil_check(l_T_1244))).f_KIND == g_T_INT) || (((*(R14 *)rt_nil_check(l_T_1244))).f_KIND == g_T_FLOAT)) || (((*(R14 *)rt_nil_check(l_T_1244))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
S_R7(&l_LOC_1249, r_CONVERT_TO_SCALE(l_LO_1247, l_T_1244, ((*(R11 *)rt_nil_check(p_E))).f_LINE), 0);
S_R7(&l_HIC_1250, r_CONVERT_TO_SCALE(l_HI_1248, l_T_1244, ((*(R11 *)rt_nil_check(p_E))).f_LINE), 0);
if (((((*(R11 *)rt_nil_check(l_R_1245))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(l_R_1245))).f_IV == ((rt_int)3LL))))
{
S_R7(&l_LO_OP_1251, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R11 *)rt_nil_check(l_R_1245))).f_IV >= ((rt_int)2LL)))
{
S_R7(&l_HI_OP_1252, r_MK(rt_str("<", 1)), 0);
}
{
R7 l_P1_1253; memset(&l_P1_1253, 0, sizeof l_P1_1253);
S_R7(&l_P1_1253, r_FMT4(rt_str("({ @ @ = @; (@) ", 16), r_CTYPE(l_T_1244), l_TMP_1246, (l_V_1243).f_C, l_LOC_1249), 0);
R7 l_P2_1254; memset(&l_P2_1254, 0, sizeof l_P2_1254);
S_R7(&l_P2_1254, r_FMT4(rt_str("@@ @ && @ ", 10), l_P1_1253, l_LO_OP_1251, l_TMP_1246, l_TMP_1246), 0);
{ R18 rv1255 = r_MKET(r_FMT3(rt_str("@@ (@); })", 10), l_P2_1254, l_HI_OP_1252, l_HIC_1250), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1255; }
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
{ R7 rv1256 = r_RESCALE_C((p_V).f_C, ((*(R14 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R14 *)rt_nil_check(p_T))).f_SCALE);
return rv1256; }
}
{ R7 rv1257 = (p_V).f_C;
return rv1257; }
rt_raise(RT_X_INIT);
}
static R18 r_INT_ET(rt_int p_V) { 
{ R18 rv1258 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1258; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { 
rt_int l_B_1259; memset(&l_B_1259, 0, sizeof l_B_1259);
l_B_1259 = ((rt_int)0LL);
rt_int l_P_1260; memset(&l_P_1260, 0, sizeof l_P_1260);
l_P_1260 = ((rt_int)1LL);
for (;;) {
if ((l_P_1260 >= p_N)) goto L_end1261;
{
l_B_1259 = rt_add(l_B_1259, ((rt_int)1LL));
l_P_1260 = rt_mul(l_P_1260, ((rt_int)2LL));
}
} L_end1261: ;
{ rt_int rv1262 = l_B_1259;
return rv1262; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R14 * p_T) { 
if ((!(((*(R14 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R12 l_M_1263; memset(&l_M_1263, 0, sizeof l_M_1263);
S_R12(&l_M_1263, r_MANIFEST(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1263).f_OK)
{
{ rt_int rv1264 = (l_M_1263).f_V;
return rv1264; }
}
}
}
}
{ rt_int rv1265 = r_BITS_FOR(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1265; }
rt_raise(RT_X_INIT);
}
static R18 r_ATTRIBUTE(R18 p_B, R7 p_NAME, rt_int p_LINE) { 
R14 * l_T_1266; memset(&l_T_1266, 0, sizeof l_T_1266);
l_T_1266 = (p_B).f_T;
rt_int l_K_1267; memset(&l_K_1267, 0, sizeof l_K_1267);
l_K_1267 = ((*(R14 *)rt_nil_check(l_T_1266))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R18 rv1268 = r_SIZE_OF(l_T_1266, (p_B).f_C);
return rv1268; }
}
if ((l_K_1267 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R18 rv1269 = r_INT_ET(((*(R14 *)rt_nil_check(l_T_1266))).f_SCALE);
return rv1269; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R18 rv1270 = r_INT_ET(((rt_int)2LL));
return rv1270; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R18 rv1271 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1271; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
{ R18 rv1272 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1272; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R14 *)rt_nil_check(l_T_1266))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R18 rv1273 = r_MKET(((*(R14 *)rt_nil_check(l_T_1266))).f_LO_C, r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_1266))).f_SCALE));
return rv1273; }
}
{ R18 rv1274 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_1266))).f_SCALE));
return rv1274; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R14 *)rt_nil_check(l_T_1266))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R18 rv1275 = r_MKET(((*(R14 *)rt_nil_check(l_T_1266))).f_HI_C, r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_1266))).f_SCALE));
return rv1275; }
}
{ R18 rv1276 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_1266))).f_SCALE));
return rv1276; }
}
}
else if ((l_K_1267 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R18 rv1277 = r_INT_ET(((*(R14 *)rt_nil_check(l_T_1266))).f_SCALE);
return rv1277; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R18 rv1278 = r_INT_ET(((rt_int)15LL));
return rv1278; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R18 rv1279 = r_INT_ET(((rt_int)2LL));
return rv1279; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
{ R18 rv1280 = r_INT_ET(rt_neg(((rt_int)1022LL)));
return rv1280; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
{ R18 rv1281 = r_INT_ET(((rt_int)1023LL));
return rv1281; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
{ R18 rv1282 = r_INT_ET(((rt_int)53LL));
return rv1282; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
{ R18 rv1283 = r_INT_ET(((rt_int)11LL));
return rv1283; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R14 *)rt_nil_check(l_T_1266))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R18 rv1284 = r_MKET(((*(R14 *)rt_nil_check(l_T_1266))).f_LO_C, l_T_1266);
return rv1284; }
}
{ R18 rv1285 = r_MKET(r_MK(rt_str("(-DBL_MAX)", 10)), l_T_1266);
return rv1285; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R14 *)rt_nil_check(l_T_1266))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R18 rv1286 = r_MKET(((*(R14 *)rt_nil_check(l_T_1266))).f_HI_C, l_T_1266);
return rv1286; }
}
{ R18 rv1287 = r_MKET(r_MK(rt_str("DBL_MAX", 7)), l_T_1266);
return rv1287; }
}
}
else if ((l_K_1267 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R14 *)rt_nil_check(l_T_1266))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R18 rv1288 = r_MKET(((*(R14 *)rt_nil_check(l_T_1266))).f_LO_C, ((*(R14 *)rt_nil_check(l_T_1266))).f_BASE);
return rv1288; }
}
{ R18 rv1289 = r_MKET(r_MK(rt_str("0", 1)), ((*(R14 *)rt_nil_check(l_T_1266))).f_BASE);
return rv1289; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R14 *)rt_nil_check(l_T_1266))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R18 rv1290 = r_MKET(((*(R14 *)rt_nil_check(l_T_1266))).f_HI_C, ((*(R14 *)rt_nil_check(l_T_1266))).f_BASE);
return rv1290; }
}
{ R18 rv1291 = r_MKET(r_NUM(rt_sub(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_1266))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R14 *)rt_nil_check(l_T_1266))).f_BASE);
return rv1291; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R14 *)rt_nil_check(l_T_1266))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R18 rv1292 = r_MKET(r_FMT2(rt_str("((@) - (@) + 1)", 15), ((*(R14 *)rt_nil_check(l_T_1266))).f_HI_C, ((*(R14 *)rt_nil_check(l_T_1266))).f_LO_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1292; }
}
{ R18 rv1293 = r_INT_ET(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_1266))).f_BASE))).f_NLITS);
return rv1293; }
}
}
else if (((l_K_1267 == g_T_STR) || (l_K_1267 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R18 rv1294 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1294; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R18 rv1295 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1295; }
}
}
else if ((l_K_1267 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R18 rv1296 = r_INT_ET(((*(R14 *)rt_nil_check(l_T_1266))).f_DIMS);
return rv1296; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R14 *)rt_nil_check(l_T_1266))).f_DIMS == ((rt_int)1LL))))
{
{ R18 rv1297 = r_MKET(r_FMT1(rt_str("rt_b_extent(1, (@).lo, (@).hi)", 30), (p_B).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1297; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R18 rv1298 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1298; }
}
}
else if ((l_K_1267 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R14 *)rt_nil_check(l_T_1266))).f_SCALE == ((rt_int)1LL)))
{
{ R18 rv1299 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1299; }
}
{ R18 rv1300 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1300; }
}
}
else if (((l_K_1267 == g_T_ABS) || (l_K_1267 == g_T_REC)))
{
{
R14 * l_U_1301; memset(&l_U_1301, 0, sizeof l_U_1301);
l_U_1301 = l_T_1266;
if ((l_K_1267 == g_T_ABS))
{
l_U_1301 = ((*(R14 *)rt_nil_check(l_T_1266))).f_BASE;
}
if ((((*(R14 *)rt_nil_check(l_U_1301))).f_KIND == g_T_REC))
{
{
R15 * l_F_1302; memset(&l_F_1302, 0, sizeof l_F_1302);
l_F_1302 = r_FIND_FIELD(l_U_1301, p_NAME);
if ((!(l_F_1302 == NULL)))
{
if ((!(((*(R15 *)rt_nil_check(l_F_1302))).f_KIND == ((rt_int)0LL))))
{
{ R18 rv1303 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R15 *)rt_nil_check(l_F_1302))).f_CNAME), ((*(R15 *)rt_nil_check(l_F_1302))).f_T);
return rv1303; }
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
R11 * l_N_1304; memset(&l_N_1304, 0, sizeof l_N_1304);
l_N_1304 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_N_1304))).f_NAME, r_MKN(p_NAME), 0);
{ R11 * rv1305 = l_N_1304;
return rv1305; }
rt_raise(RT_X_INIT);
}
static R18 r_SIZE_OF(R14 * p_T, R7 p_C) { 
rt_int l_K_1306; memset(&l_K_1306, 0, sizeof l_K_1306);
l_K_1306 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1306 == g_T_INT))
{
if ((!(((*(R14 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R18 rv1307 = r_MKET((r_EXPR(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R22 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1307; }
}
}
{ R18 rv1308 = r_INT_ET(((rt_int)64LL));
return rv1308; }
}
else if ((l_K_1306 == g_T_FLOAT))
{
{ R18 rv1309 = r_INT_ET(((rt_int)64LL));
return rv1309; }
}
else if ((l_K_1306 == g_T_BOOL))
{
{ R18 rv1310 = r_INT_ET(((rt_int)1LL));
return rv1310; }
}
else if ((l_K_1306 == g_T_ENUM))
{
{ R18 rv1311 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1311; }
}
else if ((l_K_1306 == g_T_BITS))
{
{ R18 rv1312 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1312; }
}
else if ((l_K_1306 == g_T_STR))
{
{ R18 rv1313 = r_MKET(r_FMT1(rt_str("(rt_int)((@).len * 8)", 21), p_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1313; }
}
else if (((l_K_1306 == g_T_PTR) || (l_K_1306 == g_T_SEM)))
{
{ R18 rv1314 = r_INT_ET(((rt_int)64LL));
return rv1314; }
}
else if ((l_K_1306 == g_T_ABS))
{
{ R18 rv1315 = r_SIZE_OF(((*(R14 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1315; }
}
else if ((l_K_1306 == g_T_ARR))
{
{ R18 rv1316 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R14 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R14 *)rt_nil_check(p_T))).f_ELEM)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1316; }
}
{ R18 rv1317 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1317; }
rt_raise(RT_X_INIT);
}
static R18 r_TYPE_ATTRIBUTE(R7 p_TNAME, R7 p_NAME, rt_int p_LINE) { 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{
R14 * l_T_1318; memset(&l_T_1318, 0, sizeof l_T_1318);
l_T_1318 = r_RESOLVE_USER_NAME(p_TNAME, p_LINE);
{ R18 rv1319 = r_ATTRIBUTE(r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(l_T_1318)), l_T_1318), p_NAME, p_LINE);
return rv1319; }
}
rt_raise(RT_X_INIT);
}
static R18 r_ATTRIBUTE_OF_ATTRIBUTE(R7 p_TNAME, R7 p_A, R7 p_B, rt_int p_LINE) { 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R18 rv1320 = r_INT_ET(((rt_int)100000000LL));
return rv1320; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R18 rv1321 = r_INT_ET(((rt_int)15LL));
return rv1321; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R18 rv1322 = r_INT_ET(((rt_int)0LL));
return rv1322; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R18 r_RECORD_CONSTRUCTOR(R11 * p_E, R14 * p_WANT) { 
R14 * l_T_1323; memset(&l_T_1323, 0, sizeof l_T_1323);
l_T_1323 = p_WANT;
if ((!(((*(R11 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_1323 = r_RESOLVE(((*(R11 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_1323 == NULL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_1323 = r_REAL_TYPE(l_T_1323);
if ((!(((*(R14 *)rt_nil_check(l_T_1323))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_1323))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R7 l_TMP_1324; memset(&l_TMP_1324, 0, sizeof l_TMP_1324);
S_R7(&l_TMP_1324, r_NEW_NAME(rt_str("rc", 2)), 0);
R7 l_R_1325; memset(&l_R_1325, 0, sizeof l_R_1325);
S_R7(&l_R_1325, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R14 *)rt_nil_check(l_T_1323))).f_CNAME, l_TMP_1324, l_TMP_1324, l_TMP_1324), 0);
R15 * l_F_1326; memset(&l_F_1326, 0, sizeof l_F_1326);
l_F_1326 = ((*(R14 *)rt_nil_check(l_T_1323))).f_FIELDS;
S_R7(&l_R_1325, r_FMT2(rt_str("@@", 2), l_R_1325, r_INIT_CODE(l_T_1323, l_TMP_1324)), 0);
for (;;) {
if ((l_F_1326 == NULL)) goto L_end1327;
{
if ((((*(R15 *)rt_nil_check(l_F_1326))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R15 *)rt_nil_check(l_F_1326))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R15 *)rt_nil_check(l_F_1326))).f_LABELS, (r_TAG_VALUE(l_T_1323, ((*(R15 *)rt_nil_check(l_F_1326))).f_TAGF)).f_V, ((*(R15 *)rt_nil_check(r_FIND_FIELD(l_T_1323, ((*(R15 *)rt_nil_check(l_F_1326))).f_TAGF)))).f_T)))
{
{
R11 * l_INIT_1328; memset(&l_INIT_1328, 0, sizeof l_INIT_1328);
l_INIT_1328 = r_FIND_INIT(((*(R11 *)rt_nil_check(p_E))).f_A, ((*(R15 *)rt_nil_check(l_F_1326))).f_NAME);
if ((l_INIT_1328 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R15 *)rt_nil_check(l_F_1326))).f_NAME);
}
S_R7(&l_R_1325, r_FMT2(rt_str("@ @", 3), l_R_1325, r_STORE_CODE(((*(R15 *)rt_nil_check(l_F_1326))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_1324, ((*(R15 *)rt_nil_check(l_F_1326))).f_CNAME), r_EXPR(((*(R11 *)rt_nil_check(l_INIT_1328))).f_A, ((*(R15 *)rt_nil_check(l_F_1326))).f_T), ((*(R11 *)rt_nil_check(l_INIT_1328))).f_LINE, l_TMP_1324)), 0);
}
}
}
l_F_1326 = ((*(R15 *)rt_nil_check(l_F_1326))).f_NEXT;
}
} L_end1327: ;
{
R11 * l_P_1329; memset(&l_P_1329, 0, sizeof l_P_1329);
l_P_1329 = ((*(R11 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_1329 == NULL)) goto L_end1330;
{
{
R15 * l_G_1331; memset(&l_G_1331, 0, sizeof l_G_1331);
l_G_1331 = r_FIND_FIELD(l_T_1323, ((*(R11 *)rt_nil_check(l_P_1329))).f_NAME);
if ((l_G_1331 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(l_P_1329))).f_LINE, rt_str("no such field: ", 15), ((*(R11 *)rt_nil_check(l_P_1329))).f_NAME);
}
if ((!(((*(R15 *)rt_nil_check(l_G_1331))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R11 *)rt_nil_check(l_P_1329))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R11 *)rt_nil_check(l_P_1329))).f_NAME);
}
r_CHECK_VARIANT(l_G_1331, l_T_1323, NULL, ((*(R11 *)rt_nil_check(l_P_1329))).f_LINE);
}
l_P_1329 = ((*(R11 *)rt_nil_check(l_P_1329))).f_NEXT;
}
} L_end1330: ;
}
{ R18 rv1332 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1325, l_TMP_1324), l_T_1323);
return rv1332; }
}
rt_raise(RT_X_INIT);
}
static R11 * r_FIND_INIT(R11 * p_L, R7 p_NAME) { 
R11 * l_P_1333; memset(&l_P_1333, 0, sizeof l_P_1333);
l_P_1333 = p_L;
for (;;) {
if ((l_P_1333 == NULL)) goto L_end1334;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_P_1333))).f_NAME, p_NAME))
{
{ R11 * rv1335 = l_P_1333;
return rv1335; }
}
l_P_1333 = ((*(R11 *)rt_nil_check(l_P_1333))).f_NEXT;
}
} L_end1334: ;
{ R11 * rv1336 = NULL;
return rv1336; }
rt_raise(RT_X_INIT);
}
static R18 r_ARRAY_CONSTRUCTOR(R11 * p_E, R14 * p_WANT) { 
rt_int l_DIMS_1337; memset(&l_DIMS_1337, 0, sizeof l_DIMS_1337);
l_DIMS_1337 = ((rt_int)0LL);
R11 * l_P_1338; memset(&l_P_1338, 0, sizeof l_P_1338);
l_P_1338 = p_E;
R14 * l_ELEM_1339; memset(&l_ELEM_1339, 0, sizeof l_ELEM_1339);
l_ELEM_1339 = NULL;
for (;;) {
if ((!(((*(R11 *)rt_nil_check(l_P_1338))).f_KIND == g_N_ARRCONS))) goto L_end1340;
{
l_DIMS_1337 = rt_add(l_DIMS_1337, ((rt_int)1LL));
l_P_1338 = ((*(R11 *)rt_nil_check(l_P_1338))).f_A;
}
} L_end1340: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R14 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_1339 = ((*(R14 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_1339 == NULL))
{
l_ELEM_1339 = (r_EXPR(l_P_1338, NULL)).f_T;
if (((((*(R14 *)rt_nil_check(l_ELEM_1339))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_ELEM_1339))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_1339 = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
}
}
{
R14 * l_A_1341; memset(&l_A_1341, 0, sizeof l_A_1341);
l_A_1341 = r_ARRAY_OF(l_ELEM_1339, l_DIMS_1337);
R7 l_TMP_1342; memset(&l_TMP_1342, 0, sizeof l_TMP_1342);
S_R7(&l_TMP_1342, r_NEW_NAME(rt_str("ac", 2)), 0);
R7 l_R_1343; memset(&l_R_1343, 0, sizeof l_R_1343);
S_R7(&l_R_1343, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R14 *)rt_nil_check(l_A_1341))).f_CNAME, l_TMP_1342, l_TMP_1342), 0);
rt_int l_K_1344; memset(&l_K_1344, 0, sizeof l_K_1344);
l_K_1344 = ((rt_int)0LL);
S_R7(&l_R_1343, r_FMT2(rt_str("@@); ", 5), l_R_1343, l_TMP_1342), 0);
l_P_1338 = p_E;
{ rt_int it1346_lo = ((rt_int)0LL), it1346_hi = rt_sub(l_DIMS_1337, ((rt_int)1LL));
for (rt_int it1346 = it1346_lo; it1346 <= it1346_hi; it1346++) {
{
S_R7(&l_R_1343, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_1343, l_TMP_1342, r_NUM(it1346), l_TMP_1342), 0);
S_R7(&l_R_1343, r_FMT3(rt_str("@@] = @;", 8), l_R_1343, r_NUM(it1346), r_NUM(rt_sub(r_LIST_LENGTH(((*(R11 *)rt_nil_check(l_P_1338))).f_A), ((rt_int)1LL)))), 0);
l_P_1338 = ((*(R11 *)rt_nil_check(l_P_1338))).f_A;
}
} } L_end1345: ;
S_R7(&l_R_1343, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_1343, l_TMP_1342, l_TMP_1342, r_NUM(l_DIMS_1337)), 0);
S_R7(&l_R_1343, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_1343, l_TMP_1342, l_TMP_1342), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_1337, l_A_1341, l_TMP_1342, &l_R_1343, &l_K_1344);
{ R18 rv1347 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1343, l_TMP_1342), l_A_1341);
return rv1347; }
}
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R11 * p_E, rt_int p_DIMS, R14 * p_A, R7 p_TMP, R7 *p_R, rt_int *p_K) { 
R11 * l_P_1348; memset(&l_P_1348, 0, sizeof l_P_1348);
l_P_1348 = ((*(R11 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_1348 == NULL)) goto L_end1349;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_1348, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R11 *)rt_nil_check(l_P_1348))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R11 *)rt_nil_check(l_P_1348))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R14 *)rt_nil_check(p_A))).f_ELEM))
{
S_R7(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R14 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R7(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R14 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_1348, ((*(R14 *)rt_nil_check(p_A))).f_ELEM), ((*(R11 *)rt_nil_check(l_P_1348))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_1348 = ((*(R11 *)rt_nil_check(l_P_1348))).f_NEXT;
}
} L_end1349: ;
}
static R14 * r_ARRAY_OF(R14 * p_ELEM, rt_int p_DIMS) { 
R14 * l_T_1350; memset(&l_T_1350, 0, sizeof l_T_1350);
l_T_1350 = r_NEW_TYP(g_T_ARR);
((*(R14 *)rt_nil_check(l_T_1350))).f_ELEM = p_ELEM;
((*(R14 *)rt_nil_check(l_T_1350))).f_DIMS = p_DIMS;
S_R7(&((*(R14 *)rt_nil_check(l_T_1350))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R14 * rv1351 = l_T_1350;
return rv1351; }
rt_raise(RT_X_INIT);
}
static R18 r_TYPE_SPECIFIER(R11 * p_E) { 
R14 * l_T_1352; memset(&l_T_1352, 0, sizeof l_T_1352);
l_T_1352 = r_RESOLVE(((*(R11 *)rt_nil_check(p_E))).f_A);
R18 l_V_1353; memset(&l_V_1353, 0, sizeof l_V_1353);
S_R18(&l_V_1353, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B, l_T_1352), 0);
R14 * l_RT_1354; memset(&l_RT_1354, 0, sizeof l_RT_1354);
l_RT_1354 = r_REAL_TYPE(l_T_1352);
if (((((*(R14 *)rt_nil_check((l_V_1353).f_T))).f_KIND == g_T_BITS) && (!(((*(R14 *)rt_nil_check(l_RT_1354))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R11 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R14 *)rt_nil_check(l_RT_1354))).f_KIND == g_T_INT))
{
{ R18 rv1355 = r_MKET(r_RANGE_CHECK(l_RT_1354, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1353).f_C), r_NO_TEXT()), l_T_1352);
return rv1355; }
}
else if ((((*(R14 *)rt_nil_check(l_RT_1354))).f_KIND == g_T_BOOL))
{
{ R18 rv1356 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1353).f_C), l_T_1352);
return rv1356; }
}
else if ((((*(R14 *)rt_nil_check(l_RT_1354))).f_KIND == g_T_ENUM))
{
{ R18 rv1357 = r_MKET(r_ENUM_OF_BITS(l_RT_1354, (l_V_1353).f_C), l_T_1352);
return rv1357; }
}
else if ((((*(R14 *)rt_nil_check(l_RT_1354))).f_KIND == g_T_FLOAT))
{
{ R18 rv1358 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_1353).f_C), l_T_1352);
return rv1358; }
}
else if ((((*(R14 *)rt_nil_check(l_RT_1354))).f_KIND == g_T_STR))
{
{ R18 rv1359 = r_MKET(r_FMT1(rt_str("rt_b_str_of_bits(@)", 19), (l_V_1353).f_C), l_T_1352);
return rv1359; }
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{ R18 rv1360 = r_MKET(r_CONVERT(l_V_1353, l_T_1352, ((*(R11 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), l_T_1352);
return rv1360; }
rt_raise(RT_X_INIT);
}
static R7 r_ENUM_OF_BITS(R14 * p_T, R7 p_C) { 
if ((!(((*(R14 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R7 rv1361 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv1361; }
}
}
{ R7 rv1362 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv1362; }
rt_raise(RT_X_INIT);
}
static R7 r_REP_TABLE(R14 * p_T) { 
R7 l_NAME_1363; memset(&l_NAME_1363, 0, sizeof l_NAME_1363);
S_R7(&l_NAME_1363, r_NEW_NAME(rt_str("reps", 4)), 0);
R11 * l_L_1364; memset(&l_L_1364, 0, sizeof l_L_1364);
l_L_1364 = ((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R7 l_R_1365; memset(&l_R_1365, 0, sizeof l_R_1365);
S_R7(&l_R_1365, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1364 == NULL)) goto L_end1366;
{
{
R11 * l_V_1367; memset(&l_V_1367, 0, sizeof l_V_1367);
l_V_1367 = ((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_1368; memset(&l_FOUND_1368, 0, sizeof l_FOUND_1368);
l_FOUND_1368 = 0;
for (;;) {
if ((l_V_1367 == NULL)) goto L_end1369;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_V_1367))).f_NAME, ((*(R11 *)rt_nil_check(l_L_1364))).f_NAME))
{
S_R7(&l_R_1365, r_FMT2(rt_str("@@, ", 4), l_R_1365, (r_EXPR(((*(R11 *)rt_nil_check(l_V_1367))).f_A, NULL)).f_C), 0);
l_FOUND_1368 = 1;
}
l_V_1367 = ((*(R11 *)rt_nil_check(l_V_1367))).f_NEXT;
}
} L_end1369: ;
if ((!l_FOUND_1368))
{
r_FAILT(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R11 *)rt_nil_check(l_L_1364))).f_NAME);
}
}
l_L_1364 = ((*(R11 *)rt_nil_check(l_L_1364))).f_NEXT;
}
} L_end1366: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_1363, r_NUM(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_1365, l_NAME_1363, l_NAME_1363));
{ R7 rv1370 = r_FMT2(rt_str("@, @", 4), l_NAME_1363, r_NUM(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv1370; }
rt_raise(RT_X_INIT);
}
static R18 r_NEW_EXPR(R11 * p_E, R14 * p_WANT) { 
rt_int l_SEM_1371; memset(&l_SEM_1371, 0, sizeof l_SEM_1371);
l_SEM_1371 = r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_1371 = (((*(R14 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_1371)
{
{
R14 * l_T_1372; memset(&l_T_1372, 0, sizeof l_T_1372);
l_T_1372 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R14 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_1372 = p_WANT;
}
}
{ R18 rv1373 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R14 *)rt_nil_check(l_T_1372))).f_SCALE)), l_T_1372);
return rv1373; }
}
}
{
R14 * l_T_1374; memset(&l_T_1374, 0, sizeof l_T_1374);
l_T_1374 = r_RESOLVE(r_EXPR_TO_TS(((*(R11 *)rt_nil_check(p_E))).f_A));
R14 * l_P_1375; memset(&l_P_1375, 0, sizeof l_P_1375);
l_P_1375 = r_NEW_TYP(g_T_PTR);
((*(R14 *)rt_nil_check(l_P_1375))).f_TARGET = l_T_1374;
((*(R14 *)rt_nil_check(l_P_1375))).f_TARGET_TS = ((*(R11 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_1374))
{
{ R18 rv1376 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_alloc(sizeof *p); @ p; })", 38), r_CTYPE(l_T_1374), r_INIT_CODE(l_T_1374, r_MK(rt_str("(*p)", 4)))), l_P_1375);
return rv1376; }
}
{ R18 rv1377 = r_MKET(r_FMT2(rt_str("((@ *)rt_alloc(sizeof (@)))", 27), r_CTYPE(l_T_1374), r_CTYPE(l_T_1374)), l_P_1375);
return rv1377; }
}
rt_raise(RT_X_INIT);
}
static R11 * r_NTH(R11 * p_L, rt_int p_K) { 
R11 * l_P_1378; memset(&l_P_1378, 0, sizeof l_P_1378);
l_P_1378 = p_L;
{ rt_int it1380_lo = ((rt_int)1LL), it1380_hi = p_K;
for (rt_int it1380 = it1380_lo; it1380 <= it1380_hi; it1380++) {
{
if ((!(l_P_1378 == NULL)))
{
l_P_1378 = ((*(R11 *)rt_nil_check(l_P_1378))).f_NEXT;
}
}
} } L_end1379: ;
{ R11 * rv1381 = l_P_1378;
return rv1381; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R11 * p_E, rt_int p_LO, rt_int p_HI) { 
rt_int l_N_1382; memset(&l_N_1382, 0, sizeof l_N_1382);
l_N_1382 = r_LIST_LENGTH(((*(R11 *)rt_nil_check(p_E))).f_A);
if (((l_N_1382 < p_LO) || (l_N_1382 > p_HI)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R11 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R11 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
}
static R7 r_ROUNDING_ARG(R11 * p_E, rt_int p_N) { 
R11 * l_L_1383; memset(&l_L_1383, 0, sizeof l_L_1383);
l_L_1383 = r_NTH(((*(R11 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_1383 == NULL)))
{
if (((((*(R11 *)rt_nil_check(l_L_1383))).f_KIND == g_N_QUAL) && ((((*(R11 *)rt_nil_check(l_L_1383))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R11 *)rt_nil_check(l_L_1383))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R7 rv1384 = r_MK(rt_str("1", 1));
return rv1384; }
}
{ R7 rv1385 = r_MK(rt_str("0", 1));
return rv1385; }
}
if (((((*(R11 *)rt_nil_check(l_L_1383))).f_KIND == g_N_NAME) || (((*(R11 *)rt_nil_check(l_L_1383))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R11 *)rt_nil_check(l_L_1383))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R7 rv1386 = r_MK(rt_str("1", 1));
return rv1386; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(l_L_1383))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R7 rv1387 = r_MK(rt_str("0", 1));
return rv1387; }
}
}
}
if (((*(R22 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R7 rv1388 = r_MK(rt_str("1", 1));
return rv1388; }
}
{ R7 rv1389 = r_MK(rt_str("0", 1));
return rv1389; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R11 * p_E) { 
if ((p_E == NULL))
{
{ rt_int rv1390 = 0;
return rv1390; }
}
if (((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv1391 = (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv1391; }
}
{ rt_int rv1392 = 0;
return rv1392; }
rt_raise(RT_X_INIT);
}
static R11 * r_ARG_EXPR(R11 * p_E) { 
if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R11 * rv1393 = ((*(R11 *)rt_nil_check(p_E))).f_A;
return rv1393; }
}
{ R11 * rv1394 = p_E;
return rv1394; }
rt_raise(RT_X_INIT);
}
static R18 r_BUILTIN(R11 * p_E, R14 * p_WANT) { 
R7 l_NAME_1395; memset(&l_NAME_1395, 0, sizeof l_NAME_1395);
S_R7(&l_NAME_1395, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1396; memset(&l_LINE_1396, 0, sizeof l_LINE_1396);
l_LINE_1396 = ((*(R11 *)rt_nil_check(p_E))).f_LINE;
if ((r_TEQS(l_NAME_1395, rt_str("PUT", 3)) || r_TEQS(l_NAME_1395, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R18 l_V_1397; memset(&l_V_1397, 0, sizeof l_V_1397);
S_R18(&l_V_1397, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1397).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_1396, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
if (r_TEQS(l_NAME_1395, rt_str("PUT", 3)))
{
{ R18 rv1398 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_1397).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1398; }
}
{ R18 rv1399 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_1397).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1399; }
}
}
else if (r_TEQS(l_NAME_1395, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R18 rv1400 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1400; }
}
else if (r_TEQS(l_NAME_1395, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R18 rv1401 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
return rv1401; }
}
else if (r_TEQS(l_NAME_1395, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R18 rv1402 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1402; }
}
else if (r_TEQS(l_NAME_1395, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R18 rv1403 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1403; }
}
else if (r_TEQS(l_NAME_1395, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R18 rv1404 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A)), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1404; }
}
if (r_TEQS(l_NAME_1395, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R18 rv1405 = r_IMAGE_OF(r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1396);
return rv1405; }
}
else if (r_TEQS(l_NAME_1395, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R18 rv1406 = r_TO_FIXED_CALL(p_E);
return rv1406; }
}
else if (r_TEQS(l_NAME_1395, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R18 l_V_1407; memset(&l_V_1407, 0, sizeof l_V_1407);
S_R18(&l_V_1407, r_EXPR(r_ARG_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A), NULL), 0);
R12 l_P_1408; memset(&l_P_1408, 0, sizeof l_P_1408);
S_R12(&l_P_1408, r_MANIFEST(r_ARG_EXPR(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NEXT)), 0);
R14 * l_VT_1409; memset(&l_VT_1409, 0, sizeof l_VT_1409);
l_VT_1409 = r_REAL_TYPE((l_V_1407).f_T);
R14 * l_T_1410; memset(&l_T_1410, 0, sizeof l_T_1410);
l_T_1410 = r_NEW_TYP(g_T_FLOAT);
if ((!(l_P_1408).f_OK))
{
r_FAIL(l_LINE_1396, rt_str("the precision of TO_FLOAT must be manifest (3.3.6.1)", 52));
}
if ((((l_P_1408).f_V < ((rt_int)1LL)) || ((l_P_1408).f_V > ((rt_int)15LL))))
{
r_FAIL(l_LINE_1396, rt_str("precisions from 1 to 15 are implemented (3.3.1)", 47));
}
((*(R14 *)rt_nil_check(l_T_1410))).f_SCALE = (l_P_1408).f_V;
if ((((*(R14 *)rt_nil_check(l_VT_1409))).f_KIND == g_T_INT))
{
{ R18 rv1411 = r_MKET(r_FMT2(rt_str("rt_b_float_of_fix(@, @)", 23), (l_V_1407).f_C, r_NUM(((*(R14 *)rt_nil_check(l_VT_1409))).f_SCALE)), l_T_1410);
return rv1411; }
}
else if ((((*(R14 *)rt_nil_check(l_VT_1409))).f_KIND == g_T_FLOAT))
{
{ R18 rv1412 = r_MKET((l_V_1407).f_C, l_T_1410);
return rv1412; }
}
else if ((((*(R14 *)rt_nil_check(l_VT_1409))).f_KIND == g_T_STR))
{
{ R18 rv1413 = r_MKET(r_FMT1(rt_str("rt_b_float_of_str(@)", 20), (l_V_1407).f_C), l_T_1410);
return rv1413; }
}
r_FAIL(l_LINE_1396, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_1395, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R18 rv1414 = r_BITS_OF(r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_1396);
return rv1414; }
}
else if (r_TEQS(l_NAME_1395, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R18 l_V_1415; memset(&l_V_1415, 0, sizeof l_V_1415);
S_R18(&l_V_1415, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1415).f_T)))).f_KIND == g_T_INT))
{
{ R18 rv1416 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_1415).f_C), r_INT_TYPE(((*(R14 *)rt_nil_check((l_V_1415).f_T))).f_SCALE));
return rv1416; }
}
else if ((((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1415).f_T)))).f_KIND == g_T_FLOAT))
{
{ R18 rv1417 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_1415).f_C), (l_V_1415).f_T);
return rv1417; }
}
r_FAIL(l_LINE_1396, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_1395, rt_str("SUCC", 4)) || r_TEQS(l_NAME_1395, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R18 l_V_1418; memset(&l_V_1418, 0, sizeof l_V_1418);
S_R18(&l_V_1418, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
R14 * l_T_1419; memset(&l_T_1419, 0, sizeof l_T_1419);
l_T_1419 = r_REAL_TYPE((l_V_1418).f_T);
if ((!(((*(R14 *)rt_nil_check(l_T_1419))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_1396, rt_str("an enumerated value expected by ", 32), l_NAME_1395);
}
if (((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_1419))).f_BASE))).f_UNORDERED)
{
r_FAILT(l_LINE_1396, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_1395);
}
if (r_TEQS(l_NAME_1395, rt_str("SUCC", 4)))
{
{ R18 rv1420 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_1418).f_C, r_NUM(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_1419))).f_BASE))).f_NLITS)), ((*(R14 *)rt_nil_check(l_T_1419))).f_BASE);
return rv1420; }
}
{ R18 rv1421 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_1418).f_C), ((*(R14 *)rt_nil_check(l_T_1419))).f_BASE);
return rv1421; }
}
}
else if (r_TEQS(l_NAME_1395, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R18 l_V_1422; memset(&l_V_1422, 0, sizeof l_V_1422);
S_R18(&l_V_1422, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_1423; memset(&l_K_1423, 0, sizeof l_K_1423);
l_K_1423 = ((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1422).f_T)))).f_KIND;
R14 * l_T_1424; memset(&l_T_1424, 0, sizeof l_T_1424);
l_T_1424 = r_NEW_TYP(l_K_1423);
if (((!(l_K_1423 == g_T_STR)) && (!(l_K_1423 == g_T_BITS))))
{
r_FAIL(l_LINE_1396, rt_str("DUP of something not a string", 29));
}
((*(R14 *)rt_nil_check(l_T_1424))).f_BASE = ((*(R14 *)rt_nil_check((l_V_1422).f_T))).f_BASE;
{ R18 rv1425 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_1422).f_C, r_INT_EXPR(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_1424);
return rv1425; }
}
}
else if (r_TEQS(l_NAME_1395, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R18 rv1426 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv1426; }
}
else if (r_TEQS(l_NAME_1395, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R18 rv1427 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1427; }
}
else if (((r_TEQS(l_NAME_1395, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_1395, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_1395, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R7 l_BITS_1428; memset(&l_BITS_1428, 0, sizeof l_BITS_1428);
S_R7(&l_BITS_1428, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_1395, rt_str("OCT_OF", 6)))
{
S_R7(&l_BITS_1428, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_1395, rt_str("HEX_OF", 6)))
{
S_R7(&l_BITS_1428, r_MK(rt_str("4", 1)), 0);
}
{ R18 rv1429 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL)).f_C, l_BITS_1428), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1429; }
}
}
else if ((r_TEQS(l_NAME_1395, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_1395, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R12 l_S_1430; memset(&l_S_1430, 0, sizeof l_S_1430);
S_R12(&l_S_1430, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
if ((!(l_S_1430).f_OK))
{
r_FAIL(l_LINE_1396, rt_str("the scale must be manifest", 26));
}
if (r_TEQS(l_NAME_1395, rt_str("FIXED_MIN", 9)))
{
{ R18 rv1431 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE((l_S_1430).f_V));
return rv1431; }
}
{ R18 rv1432 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE((l_S_1430).f_V));
return rv1432; }
}
}
else if (((r_TEQS(l_NAME_1395, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_1395, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_1395, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R14 * l_T_1433; memset(&l_T_1433, 0, sizeof l_T_1433);
l_T_1433 = r_NEW_TYP(g_T_FLOAT);
R12 l_P_1434; memset(&l_P_1434, 0, sizeof l_P_1434);
S_R12(&l_P_1434, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
if ((!(l_P_1434).f_OK))
{
r_FAIL(l_LINE_1396, rt_str("the precision must be manifest", 30));
}
((*(R14 *)rt_nil_check(l_T_1433))).f_SCALE = (l_P_1434).f_V;
if (r_TEQS(l_NAME_1395, rt_str("FLOAT_MIN", 9)))
{
{ R18 rv1435 = r_MKET(r_MK(rt_str("(-DBL_MAX)", 10)), l_T_1433);
return rv1435; }
}
else if (r_TEQS(l_NAME_1395, rt_str("FLOAT_MAX", 9)))
{
{ R18 rv1436 = r_MKET(r_MK(rt_str("DBL_MAX", 7)), l_T_1433);
return rv1436; }
}
{ R18 rv1437 = r_MKET(r_MK(rt_str("DBL_EPSILON", 11)), l_T_1433);
return rv1437; }
}
}
else if (r_TEQS(l_NAME_1395, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R18 rv1438 = r_INT_ET(((rt_int)15LL));
return rv1438; }
}
else if (r_TEQS(l_NAME_1395, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R18 rv1439 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1439; }
}
else if (r_TEQS(l_NAME_1395, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R18 rv1440 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1440; }
}
{ R18 rv1441 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv1441; }
rt_raise(RT_X_INIT);
}
static R18 r_IMAGE_OF(R18 p_V, rt_int p_LINE) { 
R14 * l_T_1442; memset(&l_T_1442, 0, sizeof l_T_1442);
l_T_1442 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1443; memset(&l_K_1443, 0, sizeof l_K_1443);
l_K_1443 = ((*(R14 *)rt_nil_check(l_T_1442))).f_KIND;
R14 * l_S_1444; memset(&l_S_1444, 0, sizeof l_S_1444);
l_S_1444 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_1443 == g_T_INT))
{
if ((((*(R14 *)rt_nil_check(l_T_1442))).f_SCALE == ((rt_int)0LL)))
{
{ R18 rv1445 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_1444);
return rv1445; }
}
{ R18 rv1446 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R14 *)rt_nil_check(l_T_1442))).f_SCALE)), l_S_1444);
return rv1446; }
}
else if ((l_K_1443 == g_T_FLOAT))
{
{ R18 rv1447 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R14 *)rt_nil_check(l_T_1442))).f_SCALE)), l_S_1444);
return rv1447; }
}
else if ((l_K_1443 == g_T_BOOL))
{
{ R18 rv1448 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_1444);
return rv1448; }
}
else if ((l_K_1443 == g_T_ENUM))
{
if ((((*(R14 *)rt_nil_check(l_T_1442))).f_BASE == ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R18 rv1449 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_1444);
return rv1449; }
}
{ R18 rv1450 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_1442))).f_BASE))).f_CNAME, (p_V).f_C), l_S_1444);
return rv1450; }
}
else if (((l_K_1443 == g_T_STR) || (l_K_1443 == g_T_BITS)))
{
{ R18 rv1451 = r_MKET((p_V).f_C, l_S_1444);
return rv1451; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_1442));
rt_raise(RT_X_INIT);
}
static R18 r_TO_FIXED_CALL(R11 * p_E) { 
R18 l_V_1452; memset(&l_V_1452, 0, sizeof l_V_1452);
S_R18(&l_V_1452, r_EXPR(r_ARG_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A), NULL), 0);
R14 * l_T_1453; memset(&l_T_1453, 0, sizeof l_T_1453);
l_T_1453 = r_REAL_TYPE((l_V_1452).f_T);
rt_int l_N_1454; memset(&l_N_1454, 0, sizeof l_N_1454);
l_N_1454 = r_LIST_LENGTH(((*(R11 *)rt_nil_check(p_E))).f_A);
R7 l_RND_1455; memset(&l_RND_1455, 0, sizeof l_RND_1455);
S_R7(&l_RND_1455, r_ROUNDING_ARG(p_E, l_N_1454), 0);
rt_int l_S_1456; memset(&l_S_1456, 0, sizeof l_S_1456);
l_S_1456 = ((rt_int)0LL);
if (((l_N_1454 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R11 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
{
R12 l_SM_1457; memset(&l_SM_1457, 0, sizeof l_SM_1457);
S_R12(&l_SM_1457, r_MANIFEST(r_ARG_EXPR(r_NTH(((*(R11 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)))), 0);
if ((!(l_SM_1457).f_OK))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of TO_FIXED must be manifest (3.2.1)", 46));
}
l_S_1456 = (l_SM_1457).f_V;
}
}
if ((l_N_1454 >= ((rt_int)3LL)))
{
{
R11 * l_R_1458; memset(&l_R_1458, 0, sizeof l_R_1458);
l_R_1458 = r_ARG_EXPR(r_NTH(((*(R11 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)));
if (((!r_IS_ROUNDING(l_R_1458)) && (!r_TEQS(((*(R11 *)rt_nil_check(l_R_1458))).f_NAME, rt_str("STD", 3)))))
{
if ((!((r_MANIFEST(l_R_1458)).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 and STD precision are predefined (3.2.6.1)", 55));
}
}
}
}
if ((((*(R14 *)rt_nil_check(l_T_1453))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_1459; memset(&l_SAVED_1459, 0, sizeof l_SAVED_1459);
l_SAVED_1459 = ((*(R22 *)rt_nil_check(g_W))).f_ROUNDED;
R7 l_C_1460; memset(&l_C_1460, 0, sizeof l_C_1460);
((*(R22 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_1455, rt_str("1", 1));
S_R7(&l_C_1460, r_RESCALE_C((l_V_1452).f_C, ((*(R14 *)rt_nil_check(l_T_1453))).f_SCALE, l_S_1456), 0);
((*(R22 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1459;
{ R18 rv1461 = r_MKET(l_C_1460, r_INT_TYPE(l_S_1456));
return rv1461; }
}
}
else if ((((*(R14 *)rt_nil_check(l_T_1453))).f_KIND == g_T_FLOAT))
{
{ R18 rv1462 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_1452).f_C, r_NUM(l_S_1456), l_RND_1455), r_INT_TYPE(l_S_1456));
return rv1462; }
}
else if (((((*(R14 *)rt_nil_check(l_T_1453))).f_KIND == g_T_ENUM) || (((*(R14 *)rt_nil_check(l_T_1453))).f_KIND == g_T_BOOL)))
{
if ((((*(R14 *)rt_nil_check(l_T_1453))).f_KIND == g_T_ENUM))
{
if (((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_1453))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R14 *)rt_nil_check(l_T_1453))).f_REPS == NULL)))
{
if ((!(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_1453))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R18 rv1463 = r_MKET(r_RESCALE_C((l_V_1452).f_C, ((rt_int)0LL), l_S_1456), r_INT_TYPE(l_S_1456));
return rv1463; }
}
else if ((((*(R14 *)rt_nil_check(l_T_1453))).f_KIND == g_T_BITS))
{
{ R18 rv1464 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1452).f_C), ((rt_int)0LL), l_S_1456), r_INT_TYPE(l_S_1456));
return rv1464; }
}
else if ((((*(R14 *)rt_nil_check(l_T_1453))).f_KIND == g_T_STR))
{
{ R18 rv1465 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_1452).f_C, r_NUM(l_S_1456), l_RND_1455), r_INT_TYPE(l_S_1456));
return rv1465; }
}
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_1452).f_T));
rt_raise(RT_X_INIT);
}
static R18 r_BITS_OF(R18 p_V, rt_int p_LINE) { 
R14 * l_T_1466; memset(&l_T_1466, 0, sizeof l_T_1466);
l_T_1466 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_1467; memset(&l_K_1467, 0, sizeof l_K_1467);
l_K_1467 = ((*(R14 *)rt_nil_check(l_T_1466))).f_KIND;
if ((l_K_1467 == g_T_BITS))
{
{ R18 rv1468 = p_V;
return rv1468; }
}
else if ((l_K_1467 == g_T_ENUM))
{
if ((!(((*(R14 *)rt_nil_check(l_T_1466))).f_REPS == NULL)))
{
if ((!(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_1466))).f_REPS))).f_B == NULL)))
{
{ R18 rv1469 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_1466)), r_BITS_TYPE(r_ENUM_SIZE(l_T_1466)));
return rv1469; }
}
}
{ R18 rv1470 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_1466))), r_BITS_TYPE(r_ENUM_SIZE(l_T_1466)));
return rv1470; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_1467 == g_T_INT))
{
{ R18 rv1471 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 64)", 23), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1471; }
}
else if ((l_K_1467 == g_T_BOOL))
{
{ R18 rv1472 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv1472; }
}
else if ((l_K_1467 == g_T_FLOAT))
{
{ R18 rv1473 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1473; }
}
else if ((l_K_1467 == g_T_STR))
{
{ R18 rv1474 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1474; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_1466));
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
{ rt_int rv1475 = 0;
return rv1475; }
}
{ rt_int rv1476 = ((r_IS_LITERALISH(((*(R19 *)rt_nil_check(p_A))).f_E) || (((*(R11 *)rt_nil_check(((*(R19 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R11 *)rt_nil_check(((*(R19 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv1476; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R19 * p_A) { 
rt_int l_N_1477; memset(&l_N_1477, 0, sizeof l_N_1477);
l_N_1477 = ((rt_int)0LL);
R19 * l_P_1478; memset(&l_P_1478, 0, sizeof l_P_1478);
l_P_1478 = p_A;
for (;;) {
if ((l_P_1478 == NULL)) goto L_end1479;
{
l_N_1477 = rt_add(l_N_1477, ((rt_int)1LL));
l_P_1478 = ((*(R19 *)rt_nil_check(l_P_1478))).f_NEXT;
}
} L_end1479: ;
{ rt_int rv1480 = l_N_1477;
return rv1480; }
rt_raise(RT_X_INIT);
}
static R19 * r_CALL_ARGS(R11 * p_E) { 
R19 * l_HEAD_1481; memset(&l_HEAD_1481, 0, sizeof l_HEAD_1481);
l_HEAD_1481 = NULL;
R19 * l_TAIL_1482; memset(&l_TAIL_1482, 0, sizeof l_TAIL_1482);
l_TAIL_1482 = NULL;
rt_int l_G_1483; memset(&l_G_1483, 0, sizeof l_G_1483);
l_G_1483 = ((rt_int)0LL);
{ rt_int it1485_lo = ((rt_int)0LL), it1485_hi = ((rt_int)2LL);
for (rt_int it1485 = it1485_lo; it1485 <= it1485_hi; it1485++) {
{
{
R11 * l_P_1486; memset(&l_P_1486, 0, sizeof l_P_1486);
l_P_1486 = ((*(R11 *)rt_nil_check(p_E))).f_A;
if ((it1485 == ((rt_int)1LL)))
{
l_P_1486 = ((*(R11 *)rt_nil_check(p_E))).f_B;
}
else if ((it1485 == ((rt_int)2LL)))
{
l_P_1486 = ((*(R11 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_1486 == NULL)) goto L_end1487;
{
{
R19 * l_A_1488; memset(&l_A_1488, 0, sizeof l_A_1488);
l_A_1488 = r_NODE_ARG(l_P_1486, it1485, NULL);
if ((l_TAIL_1482 == NULL))
{
l_HEAD_1481 = l_A_1488;
}
else
{
((*(R19 *)rt_nil_check(l_TAIL_1482))).f_NEXT = l_A_1488;
}
l_TAIL_1482 = l_A_1488;
}
l_P_1486 = ((*(R11 *)rt_nil_check(l_P_1486))).f_NEXT;
}
} L_end1487: ;
}
}
} } L_end1484: ;
{ R19 * rv1489 = l_HEAD_1481;
return rv1489; }
rt_raise(RT_X_INIT);
}
static R18 r_CALL_EXPR(R11 * p_E, R14 * p_WANT) { 
R19 * l_ARGS_1490; memset(&l_ARGS_1490, 0, sizeof l_ARGS_1490);
l_ARGS_1490 = r_CALL_ARGS(p_E);
R13 * l_Y_1491; memset(&l_Y_1491, 0, sizeof l_Y_1491);
l_Y_1491 = r_BOUND_ROUTINE(((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1491 == NULL)))
{
if ((((*(R13 *)rt_nil_check(l_Y_1491))).f_KIND == g_Y_BUILTIN))
{
{ R18 rv1492 = r_BUILTIN(p_E, p_WANT);
return rv1492; }
}
{ R18 rv1493 = r_CALL_SYM(l_Y_1491, l_ARGS_1490, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
return rv1493; }
}
l_Y_1491 = r_FIND_ROUTINE(((*(R11 *)rt_nil_check(p_E))).f_NAME, l_ARGS_1490, ((*(R11 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_1491 == NULL))
{
{
R13 * l_P_1494; memset(&l_P_1494, 0, sizeof l_P_1494);
l_P_1494 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_1494 == NULL)) goto L_end1495;
{
if ((((*(R13 *)rt_nil_check(l_P_1494))).f_KIND == g_Y_BUILTIN))
{
{ R18 rv1496 = r_BUILTIN(p_E, p_WANT);
return rv1496; }
}
l_P_1494 = r_LOOKUP_NEXT(l_P_1494);
}
} L_end1495: ;
}
{
R13 * l_B_1497; memset(&l_B_1497, 0, sizeof l_B_1497);
l_B_1497 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_1497 == NULL)))
{
if ((((*(R13 *)rt_nil_check(l_B_1497))).f_KIND == g_Y_BUILTIN))
{
{ R18 rv1498 = r_BUILTIN(p_E, p_WANT);
return rv1498; }
}
if (((((*(R13 *)rt_nil_check(l_B_1497))).f_KIND == g_Y_ROUTINE) || (!(((*(R13 *)rt_nil_check(l_B_1497))).f_ORIG == NULL))))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
}
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
{ R18 rv1499 = r_CALL_SYM(l_Y_1491, l_ARGS_1490, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
return rv1499; }
rt_raise(RT_X_INIT);
}
static R13 * r_BOUND_ROUTINE(R7 p_NAME) { 
R16 * l_B_1500; memset(&l_B_1500, 0, sizeof l_B_1500);
l_B_1500 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_1500 == NULL)) goto L_end1501;
{
if (((!(((*(R16 *)rt_nil_check(l_B_1500))).f_R == NULL)) && r_TEQ(((*(R16 *)rt_nil_check(l_B_1500))).f_NAME, p_NAME)))
{
{ R13 * rv1502 = ((*(R16 *)rt_nil_check(l_B_1500))).f_R;
return rv1502; }
}
l_B_1500 = ((*(R16 *)rt_nil_check(l_B_1500))).f_NEXT;
}
} L_end1501: ;
{ R13 * rv1503 = NULL;
return rv1503; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R13 * p_Y, R7 p_NAME) { 
if ((!(((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv1504 = 0;
return rv1504; }
}
if ((((!(((*(R13 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R13 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R13 *)rt_nil_check(p_Y))).f_NAME, ((*(R13 *)rt_nil_check(((*(R13 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R13 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R13 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv1505 = 0;
return rv1505; }
}
}
}
{ rt_int rv1506 = 1;
return rv1506; }
rt_raise(RT_X_INIT);
}
static R13 * r_FIND_ROUTINE(R7 p_NAME, R19 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { 
R13 * l_Y_1507; memset(&l_Y_1507, 0, sizeof l_Y_1507);
l_Y_1507 = r_LOOKUP(p_NAME);
R13 * l_BEST_1508; memset(&l_BEST_1508, 0, sizeof l_BEST_1508);
l_BEST_1508 = NULL;
rt_int l_BEST_SCORE_1509; memset(&l_BEST_SCORE_1509, 0, sizeof l_BEST_SCORE_1509);
l_BEST_SCORE_1509 = ((rt_int)0LL);
rt_int l_TIES_1510; memset(&l_TIES_1510, 0, sizeof l_TIES_1510);
l_TIES_1510 = ((rt_int)0LL);
rt_int l_COUNT_1511; memset(&l_COUNT_1511, 0, sizeof l_COUNT_1511);
l_COUNT_1511 = ((rt_int)0LL);
rt_int l_N_1512; memset(&l_N_1512, 0, sizeof l_N_1512);
l_N_1512 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_1507 == NULL)) goto L_end1513;
{
if ((!r_IS_ROUTINE(l_Y_1507)))
{
if ((!(((*(R13 *)rt_nil_check(l_Y_1507))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end1513;
}
}
else if (r_CANDIDATE(l_Y_1507, p_NAME))
{
{
R13 * l_R_1514; memset(&l_R_1514, 0, sizeof l_R_1514);
l_R_1514 = r_ORIGINAL(l_Y_1507);
rt_int l_SCORE_1515; memset(&l_SCORE_1515, 0, sizeof l_SCORE_1515);
r_ROUTINE_HEADER(l_R_1514);
if (((r_PARAM_COUNT(l_R_1514) == l_N_1512) && (!r_SEEN_ROUTINE(l_R_1514, p_NAME, l_Y_1507))))
{
l_COUNT_1511 = rt_add(l_COUNT_1511, ((rt_int)1LL));
l_SCORE_1515 = r_MATCH_SCORE(l_R_1514, p_ARGS);
if ((l_SCORE_1515 > l_BEST_SCORE_1509))
{
l_BEST_1508 = l_R_1514;
l_BEST_SCORE_1509 = l_SCORE_1515;
l_TIES_1510 = ((rt_int)0LL);
}
else if (((l_SCORE_1515 == l_BEST_SCORE_1509) && (l_SCORE_1515 > ((rt_int)0LL))))
{
l_TIES_1510 = rt_add(l_TIES_1510, ((rt_int)1LL));
}
}
}
}
l_Y_1507 = r_LOOKUP_NEXT(l_Y_1507);
}
} L_end1513: ;
if (((l_TIES_1510 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R13 * rv1516 = l_BEST_1508;
return rv1516; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R13 * p_R, R7 p_NAME, R13 * p_STOP) { 
R13 * l_Y_1517; memset(&l_Y_1517, 0, sizeof l_Y_1517);
l_Y_1517 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_1517 == p_STOP) || (l_Y_1517 == NULL))) goto L_end1518;
{
if ((((*(R13 *)rt_nil_check(l_Y_1517))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_1517) == p_R))
{
{ rt_int rv1519 = 1;
return rv1519; }
}
}
l_Y_1517 = r_LOOKUP_NEXT(l_Y_1517);
}
} L_end1518: ;
{ rt_int rv1520 = 0;
return rv1520; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R13 * p_R) { 
rt_int l_N_1521; memset(&l_N_1521, 0, sizeof l_N_1521);
l_N_1521 = ((rt_int)0LL);
R20 * l_P_1522; memset(&l_P_1522, 0, sizeof l_P_1522);
l_P_1522 = ((*(R13 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_1522 == NULL)) goto L_end1523;
{
l_N_1521 = rt_add(l_N_1521, ((rt_int)1LL));
l_P_1522 = ((*(R20 *)rt_nil_check(l_P_1522))).f_NEXT;
}
} L_end1523: ;
{ rt_int rv1524 = l_N_1521;
return rv1524; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R13 * p_R, R19 * p_ARGS) { 
R20 * l_P_1525; memset(&l_P_1525, 0, sizeof l_P_1525);
l_P_1525 = ((*(R13 *)rt_nil_check(p_R))).f_PARAMS;
R19 * l_A_1526; memset(&l_A_1526, 0, sizeof l_A_1526);
l_A_1526 = p_ARGS;
rt_int l_EXACT_1527; memset(&l_EXACT_1527, 0, sizeof l_EXACT_1527);
l_EXACT_1527 = 1;
for (;;) {
if ((l_P_1525 == NULL)) goto L_end1528;
{
if ((!(((*(R20 *)rt_nil_check(l_P_1525))).f_MODE == ((*(R19 *)rt_nil_check(l_A_1526))).f_MODE)))
{
{ rt_int rv1529 = ((rt_int)0LL);
return rv1529; }
}
if ((((*(R13 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R20 *)rt_nil_check(l_P_1525))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_1525, l_A_1526)))
{
{ rt_int rv1530 = ((rt_int)0LL);
return rv1530; }
}
}
else if ((((*(R20 *)rt_nil_check(l_P_1525))).f_T == NULL))
{
if (((*(R19 *)rt_nil_check(l_A_1526))).f_HAVE)
{
{ rt_int rv1531 = ((rt_int)0LL);
return rv1531; }
}
}
else if (r_WANT_SENSITIVE(l_A_1526))
{
if ((!r_LITERAL_FITS(((*(R19 *)rt_nil_check(l_A_1526))).f_E, ((*(R20 *)rt_nil_check(l_P_1525))).f_T)))
{
{ rt_int rv1532 = ((rt_int)0LL);
return rv1532; }
}
}
else
{
r_TYPE_ARG(l_A_1526);
{
R14 * l_AT_1533; memset(&l_AT_1533, 0, sizeof l_AT_1533);
l_AT_1533 = (((*(R19 *)rt_nil_check(l_A_1526))).f_V).f_T;
if ((!((r_SAME_CLASS(((*(R20 *)rt_nil_check(l_P_1525))).f_T, l_AT_1533) || (((((*(R14 *)rt_nil_check(l_AT_1533))).f_KIND == g_T_NIL) && (((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R20 *)rt_nil_check(l_P_1525))).f_T)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv1534 = ((rt_int)0LL);
return rv1534; }
}
if ((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_1525))).f_T, l_AT_1533)))
{
l_EXACT_1527 = 0;
}
if (((((*(R14 *)rt_nil_check(r_REAL_TYPE(l_AT_1533)))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R20 *)rt_nil_check(l_P_1525))).f_T)))).f_KIND == g_T_INT)))
{
if ((((*(R14 *)rt_nil_check(l_AT_1533))).f_SCALE > ((*(R14 *)rt_nil_check(((*(R20 *)rt_nil_check(l_P_1525))).f_T))).f_SCALE))
{
{ rt_int rv1535 = ((rt_int)0LL);
return rv1535; }
}
}
}
}
l_P_1525 = ((*(R20 *)rt_nil_check(l_P_1525))).f_NEXT;
l_A_1526 = ((*(R19 *)rt_nil_check(l_A_1526))).f_NEXT;
}
} L_end1528: ;
if (l_EXACT_1527)
{
{ rt_int rv1536 = ((rt_int)2LL);
return rv1536; }
}
{ rt_int rv1537 = ((rt_int)1LL);
return rv1537; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R11 * p_E, R14 * p_T) { 
R14 * l_RT_1538; memset(&l_RT_1538, 0, sizeof l_RT_1538);
l_RT_1538 = r_REAL_TYPE(p_T);
if (((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R14 *)rt_nil_check(l_RT_1538))).f_KIND == g_T_ENUM))
{
{ rt_int rv1539 = (!(r_FIND_LITERAL(((*(R11 *)rt_nil_check(p_E))).f_NAME, l_RT_1538) == NULL));
return rv1539; }
}
{ rt_int rv1540 = 0;
return rv1540; }
}
else if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv1541 = (((*(R14 *)rt_nil_check(l_RT_1538))).f_KIND == g_T_PTR);
return rv1541; }
}
else if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv1542 = (((*(R14 *)rt_nil_check(l_RT_1538))).f_KIND == g_T_REC);
return rv1542; }
}
else if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv1543 = (((*(R14 *)rt_nil_check(l_RT_1538))).f_KIND == g_T_ARR);
return rv1543; }
}
else if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv1544 = (((*(R14 *)rt_nil_check(l_RT_1538))).f_KIND == g_T_INT);
return rv1544; }
}
else if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv1545 = ((((*(R14 *)rt_nil_check(l_RT_1538))).f_KIND == g_T_PTR) || (((*(R14 *)rt_nil_check(l_RT_1538))).f_KIND == g_T_SEM));
return rv1545; }
}
{ rt_int rv1546 = 0;
return rv1546; }
rt_raise(RT_X_INIT);
}
static R18 r_CALL_SYM(R13 * p_Y0, R19 * p_ARGS, rt_int p_LINE) { 
R13 * l_Y_1547; memset(&l_Y_1547, 0, sizeof l_Y_1547);
l_Y_1547 = r_ORIGINAL(p_Y0);
R20 * l_P_1548; memset(&l_P_1548, 0, sizeof l_P_1548);
R19 * l_A_1549; memset(&l_A_1549, 0, sizeof l_A_1549);
l_A_1549 = p_ARGS;
R7 l_C_1550; memset(&l_C_1550, 0, sizeof l_C_1550);
S_R7(&l_C_1550, r_MK(rt_str("", 0)), 0);
R7 l_SEP_1551; memset(&l_SEP_1551, 0, sizeof l_SEP_1551);
S_R7(&l_SEP_1551, r_MK(rt_str("", 0)), 0);
if (((*(R13 *)rt_nil_check(l_Y_1547))).f_GENERIC)
{
l_Y_1547 = r_INSTANCE(l_Y_1547, p_ARGS, p_LINE);
}
r_CHECK_CALL_IMPORTS(l_Y_1547, p_LINE);
if ((((*(R13 *)rt_nil_check(l_Y_1547))).f_LEVEL >= ((rt_int)1LL)))
{
S_R7(&l_C_1550, r_FRAME_OF(((*(R13 *)rt_nil_check(l_Y_1547))).f_LEVEL), 0);
S_R7(&l_SEP_1551, r_MK(rt_str(", ", 2)), 0);
}
l_P_1548 = ((*(R13 *)rt_nil_check(l_Y_1547))).f_PARAMS;
for (;;) {
if ((l_P_1548 == NULL)) goto L_end1552;
{
if ((l_A_1549 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
if ((((*(R20 *)rt_nil_check(l_P_1548))).f_T == NULL))
{
}
else if ((((*(R20 *)rt_nil_check(l_P_1548))).f_MODE == g_M_IN))
{
if ((((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R20 *)rt_nil_check(l_P_1548))).f_T)))).f_KIND == g_T_VOID))
{
}
else
{
{
R18 l_V_1553; memset(&l_V_1553, 0, sizeof l_V_1553);
if ((((*(R19 *)rt_nil_check(l_A_1549))).f_HAVE && (!r_WANT_SENSITIVE(l_A_1549))))
{
S_R18(&l_V_1553, ((*(R19 *)rt_nil_check(l_A_1549))).f_V, 0);
}
else
{
S_R18(&l_V_1553, r_EXPR(((*(R19 *)rt_nil_check(l_A_1549))).f_E, ((*(R20 *)rt_nil_check(l_P_1548))).f_T), 0);
}
S_R7(&l_C_1550, r_FMT3(rt_str("@@@", 3), l_C_1550, l_SEP_1551, r_CONVERT(l_V_1553, ((*(R20 *)rt_nil_check(l_P_1548))).f_T, p_LINE, r_NO_TEXT())), 0);
S_R7(&l_SEP_1551, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R18 l_V_1554; memset(&l_V_1554, 0, sizeof l_V_1554);
if (((*(R19 *)rt_nil_check(l_A_1549))).f_HAVE)
{
S_R18(&l_V_1554, ((*(R19 *)rt_nil_check(l_A_1549))).f_V, 0);
}
else
{
S_R18(&l_V_1554, r_EXPR(((*(R19 *)rt_nil_check(l_A_1549))).f_E, ((*(R20 *)rt_nil_check(l_P_1548))).f_T), 0);
}
if ((!(l_V_1554).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(((*(R20 *)rt_nil_check(l_P_1548))).f_T, (l_V_1554).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(((*(R20 *)rt_nil_check(l_P_1548))).f_T));
}
if (((((*(R20 *)rt_nil_check(l_P_1548))).f_MODE == g_M_INOUT) && (!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_1548))).f_T, (l_V_1554).f_T))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
S_R7(&l_C_1550, r_FMT3(rt_str("@@&@", 4), l_C_1550, l_SEP_1551, (l_V_1554).f_C), 0);
S_R7(&l_SEP_1551, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_1549 = ((*(R19 *)rt_nil_check(l_A_1549))).f_NEXT;
l_P_1548 = ((*(R20 *)rt_nil_check(l_P_1548))).f_NEXT;
}
} L_end1552: ;
if ((!(l_A_1549 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
{ R18 rv1555 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R13 *)rt_nil_check(l_Y_1547))).f_ACCESS, l_C_1550), ((*(R13 *)rt_nil_check(l_Y_1547))).f_RESULT);
return rv1555; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R11 * p_TS) { 
if ((p_TS == NULL))
{
{ rt_int rv1556 = 0;
return rv1556; }
}
if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv1557 = 1;
return rv1557; }
}
else if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv1558 = 1;
return rv1558; }
}
else if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv1559 = r_STATIC_GENERIC(((*(R11 *)rt_nil_check(p_TS))).f_C);
return rv1559; }
}
else if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((!(((*(R11 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_TS))).f_B))).f_A))).f_KIND == g_TS_GEN) || (((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_TS))).f_B))).f_B))).f_KIND == g_TS_GEN)))
{
{ rt_int rv1560 = 1;
return rv1560; }
}
}
if ((r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv1561 = r_HAS_GEN_ARG(((*(R11 *)rt_nil_check(p_TS))).f_A);
return rv1561; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv1562 = r_STATIC_GENERIC(((*(R11 *)rt_nil_check(p_TS))).f_A);
return rv1562; }
}
else if ((((r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv1563 = 0;
return rv1563; }
}
{
R13 * l_Y_1564; memset(&l_Y_1564, 0, sizeof l_Y_1564);
l_Y_1564 = r_ORIG_LOOKUP(((*(R11 *)rt_nil_check(p_TS))).f_NAME);
R11 * l_A_1565; memset(&l_A_1565, 0, sizeof l_A_1565);
l_A_1565 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
R11 * l_F_1566; memset(&l_F_1566, 0, sizeof l_F_1566);
if ((l_Y_1564 == NULL))
{
{ rt_int rv1567 = 0;
return rv1567; }
}
if ((((*(R13 *)rt_nil_check(l_Y_1564))).f_KIND == g_Y_GEN))
{
{ rt_int rv1568 = 1;
return rv1568; }
}
if ((((*(R13 *)rt_nil_check(l_Y_1564))).f_DECL == NULL))
{
{ rt_int rv1569 = 0;
return rv1569; }
}
l_F_1566 = ((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_1564))).f_DECL))).f_A;
for (;;) {
if ((l_F_1566 == NULL)) goto L_end1570;
{
{
R11 * l_N_1571; memset(&l_N_1571, 0, sizeof l_N_1571);
l_N_1571 = ((*(R11 *)rt_nil_check(l_F_1566))).f_A;
for (;;) {
if ((l_N_1571 == NULL)) goto L_end1572;
{
if ((l_A_1565 == NULL))
{
{ rt_int rv1573 = 0;
return rv1573; }
}
if (((((*(R11 *)rt_nil_check(l_F_1566))).f_B == NULL) && ((((((*(R11 *)rt_nil_check(l_A_1565))).f_KIND == g_TS_GEN) || (((*(R11 *)rt_nil_check(l_A_1565))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_1565)))))
{
{ rt_int rv1574 = 1;
return rv1574; }
}
l_A_1565 = ((*(R11 *)rt_nil_check(l_A_1565))).f_NEXT;
l_N_1571 = ((*(R11 *)rt_nil_check(l_N_1571))).f_NEXT;
}
} L_end1572: ;
}
l_F_1566 = ((*(R11 *)rt_nil_check(l_F_1566))).f_NEXT;
}
} L_end1570: ;
}
}
{ rt_int rv1575 = 0;
return rv1575; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_GEN_ARG(R11 * p_A) { 
R11 * l_P_1576; memset(&l_P_1576, 0, sizeof l_P_1576);
l_P_1576 = p_A;
for (;;) {
if ((l_P_1576 == NULL)) goto L_end1577;
{
if (((((*(R11 *)rt_nil_check(l_P_1576))).f_KIND == g_TS_GEN) || (((*(R11 *)rt_nil_check(l_P_1576))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv1578 = 1;
return rv1578; }
}
l_P_1576 = ((*(R11 *)rt_nil_check(l_P_1576))).f_NEXT;
}
} L_end1577: ;
{ rt_int rv1579 = 0;
return rv1579; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R13 * p_Y) { 
R11 * l_R_1580; memset(&l_R_1580, 0, sizeof l_R_1580);
l_R_1580 = ((*(R13 *)rt_nil_check(p_Y))).f_DECL;
R11 * l_P_1581; memset(&l_P_1581, 0, sizeof l_P_1581);
R20 * l_TAIL_1582; memset(&l_TAIL_1582, 0, sizeof l_TAIL_1582);
l_TAIL_1582 = NULL;
if (((*(R13 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
((*(R13 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_1581 = ((*(R11 *)rt_nil_check(l_R_1580))).f_A;
for (;;) {
if ((l_P_1581 == NULL)) goto L_end1583;
{
if (((((*(R11 *)rt_nil_check(l_P_1581))).f_B == NULL) || r_STATIC_GENERIC(((*(R11 *)rt_nil_check(l_P_1581))).f_B)))
{
((*(R13 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_1581 = ((*(R11 *)rt_nil_check(l_P_1581))).f_NEXT;
}
} L_end1583: ;
if ((!(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_1580))).f_D))).f_B == NULL)))
{
((*(R13 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_1581 = ((*(R11 *)rt_nil_check(l_R_1580))).f_A;
for (;;) {
if ((l_P_1581 == NULL)) goto L_end1584;
{
{
R20 * l_PM_1585; memset(&l_PM_1585, 0, sizeof l_PM_1585);
l_PM_1585 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_PM_1585)), ({ R20 rc1586; memset(&rc1586, 0, sizeof rc1586);  S_R7(&rc1586.f_NAME, ((*(R11 *)rt_nil_check(l_P_1581))).f_NAME, 0); rc1586.f_MODE = ((*(R11 *)rt_nil_check(l_P_1581))).f_IV; rc1586.f_T = NULL; rc1586.f_TS = ((*(R11 *)rt_nil_check(l_P_1581))).f_B; rc1586.f_NEXT = NULL; rc1586; }), 0);
if (((((*(R11 *)rt_nil_check(l_R_1580))).f_IV == ((rt_int)1LL)) && (!(((*(R11 *)rt_nil_check(l_P_1581))).f_IV == g_M_IN))))
{
r_FAIL(((*(R11 *)rt_nil_check(l_P_1581))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!((*(R13 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R20 *)rt_nil_check(l_PM_1585))).f_T = r_RESOLVE(((*(R11 *)rt_nil_check(l_P_1581))).f_B);
}
if ((l_TAIL_1582 == NULL))
{
((*(R13 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_1585;
}
else
{
((*(R20 *)rt_nil_check(l_TAIL_1582))).f_NEXT = l_PM_1585;
}
l_TAIL_1582 = l_PM_1585;
}
l_P_1581 = ((*(R11 *)rt_nil_check(l_P_1581))).f_NEXT;
}
} L_end1584: ;
if ((!((*(R13 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R13 *)rt_nil_check(p_Y))).f_RESULT = r_RESULT_TYPE(p_Y);
S_R7(&((*(R13 *)rt_nil_check(p_Y))).f_FWD, r_C_HEADER(p_Y), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R13 *)rt_nil_check(p_Y))).f_FWD, rt_str(";", 1)));
}
}
static R14 * r_RESULT_TYPE(R13 * p_Y) { 
R11 * l_R_1587; memset(&l_R_1587, 0, sizeof l_R_1587);
l_R_1587 = ((*(R13 *)rt_nil_check(p_Y))).f_DECL;
R14 * l_T_1588; memset(&l_T_1588, 0, sizeof l_T_1588);
if ((((*(R11 *)rt_nil_check(l_R_1587))).f_B == NULL))
{
{ R14 * rv1589 = ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID;
return rv1589; }
}
r_OPEN_SCOPE();
{
R20 * l_P_1590; memset(&l_P_1590, 0, sizeof l_P_1590);
l_P_1590 = ((*(R13 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_1590 == NULL)) goto L_end1591;
{
if ((!(((*(R20 *)rt_nil_check(l_P_1590))).f_T == NULL)))
{
{
R13 * l_V_1592; memset(&l_V_1592, 0, sizeof l_V_1592);
l_V_1592 = r_NEW_SYM(g_Y_CONST, ((*(R20 *)rt_nil_check(l_P_1590))).f_NAME);
((*(R13 *)rt_nil_check(l_V_1592))).f_T = ((*(R20 *)rt_nil_check(l_P_1590))).f_T;
S_R7(&((*(R13 *)rt_nil_check(l_V_1592))).f_ACCESS, r_FMT1(rt_str("p_@", 3), ((*(R20 *)rt_nil_check(l_P_1590))).f_NAME), 0);
((*(R13 *)rt_nil_check(l_V_1592))).f_INPUT = 1;
r_DEFINE(l_V_1592, ((*(R11 *)rt_nil_check(l_R_1587))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R20 *)rt_nil_check(l_P_1590))).f_T, ((*(R13 *)rt_nil_check(l_V_1592))).f_ACCESS, ((*(R11 *)rt_nil_check(l_R_1587))).f_LINE, 0);
}
}
l_P_1590 = ((*(R20 *)rt_nil_check(l_P_1590))).f_NEXT;
}
} L_end1591: ;
}
l_T_1588 = r_RESOLVE(((*(R11 *)rt_nil_check(l_R_1587))).f_B);
r_CLOSE_SCOPE();
{ R14 * rv1593 = l_T_1588;
return rv1593; }
rt_raise(RT_X_INIT);
}
static R7 r_C_HEADER(R13 * p_Y) { 
R7 l_PS_1594; memset(&l_PS_1594, 0, sizeof l_PS_1594);
S_R7(&l_PS_1594, r_MK(rt_str("", 0)), 0);
R7 l_SEP_1595; memset(&l_SEP_1595, 0, sizeof l_SEP_1595);
S_R7(&l_SEP_1595, r_MK(rt_str("", 0)), 0);
R20 * l_P_1596; memset(&l_P_1596, 0, sizeof l_P_1596);
l_P_1596 = ((*(R13 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R13 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R7(&l_PS_1594, r_FMT1(rt_str("@ *up_", 6), ((*(R13 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R7(&l_SEP_1595, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_1596 == NULL)) goto L_end1597;
{
if ((((*(R20 *)rt_nil_check(l_P_1596))).f_T == NULL))
{
}
else if ((((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R20 *)rt_nil_check(l_P_1596))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R20 *)rt_nil_check(l_P_1596))).f_MODE == g_M_IN))
{
S_R7(&l_PS_1594, r_FMT4(rt_str("@@@ p_@", 7), l_PS_1594, l_SEP_1595, r_CTYPE(((*(R20 *)rt_nil_check(l_P_1596))).f_T), ((*(R20 *)rt_nil_check(l_P_1596))).f_NAME), 0);
S_R7(&l_SEP_1595, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R7(&l_PS_1594, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_1594, l_SEP_1595, r_CTYPE(((*(R20 *)rt_nil_check(l_P_1596))).f_T), ((*(R20 *)rt_nil_check(l_P_1596))).f_NAME), 0);
S_R7(&l_SEP_1595, r_MK(rt_str(", ", 2)), 0);
}
l_P_1596 = ((*(R20 *)rt_nil_check(l_P_1596))).f_NEXT;
}
} L_end1597: ;
if (((l_PS_1594).f_LEN == ((rt_int)0LL)))
{
S_R7(&l_PS_1594, r_MK(rt_str("void", 4)), 0);
}
{ R7 rv1598 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R13 *)rt_nil_check(p_Y))).f_RESULT), ((*(R13 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_1594);
return rv1598; }
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
R17 * l_B_1599; memset(&l_B_1599, 0, sizeof l_B_1599);
l_B_1599 = ((*(R14 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_1600; memset(&l_I_1600, 0, sizeof l_I_1600);
l_I_1600 = ((rt_int)0LL);
for (;;) {
if ((l_B_1599 == NULL)) goto L_end1601;
{
if (r_IS_GEN_TEXT(((*(R17 *)rt_nil_check(l_B_1599))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R17 *)rt_nil_check(l_B_1599))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_1600)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R17 *)rt_nil_check(l_B_1599))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R17 *)rt_nil_check(l_B_1599))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_1600)), p_LINE, p_CHECK);
}
l_I_1600 = rt_add(l_I_1600, ((rt_int)1LL));
l_B_1599 = ((*(R17 *)rt_nil_check(l_B_1599))).f_NEXT;
}
} L_end1601: ;
}
}
if (((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R14 * l_U_1602; memset(&l_U_1602, 0, sizeof l_U_1602);
l_U_1602 = r_REAL_TYPE(p_T);
R15 * l_F_1603; memset(&l_F_1603, 0, sizeof l_F_1603);
l_F_1603 = ((*(R14 *)rt_nil_check(l_U_1602))).f_FIELDS;
R17 * l_A_1604; memset(&l_A_1604, 0, sizeof l_A_1604);
l_A_1604 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_1603 == NULL) || (l_A_1604 == NULL))) goto L_end1605;
{
if ((!(((*(R15 *)rt_nil_check(l_F_1603))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R17 *)rt_nil_check(l_A_1604))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R17 *)rt_nil_check(l_A_1604))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R15 *)rt_nil_check(l_F_1603))).f_CNAME), p_LINE, p_CHECK);
}
l_A_1604 = ((*(R17 *)rt_nil_check(l_A_1604))).f_NEXT;
}
l_F_1603 = ((*(R15 *)rt_nil_check(l_F_1603))).f_NEXT;
}
} L_end1605: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R7 p_T) { 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv1606 = 0;
return rv1606; }
}
{ rt_int rv1607 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv1607; }
rt_raise(RT_X_INIT);
}
static R7 r_GEN_TEXT_NAME(R7 p_T) { 
{ R7 rv1608 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv1608; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R7 p_NAME, R7 p_C, rt_int p_LINE, rt_int p_CHECK) { 
R13 * l_OLD_1609; memset(&l_OLD_1609, 0, sizeof l_OLD_1609);
l_OLD_1609 = r_LOOKUP(p_NAME);
if ((!(l_OLD_1609 == NULL)))
{
if (((((*(R13 *)rt_nil_check(l_OLD_1609))).f_KIND == g_Y_GEN) && (((*(R13 *)rt_nil_check(l_OLD_1609))).f_DEPTH == ((*(R22 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R13 *)rt_nil_check(l_OLD_1609))).f_ACCESS, p_C));
}
return;
}
}
{
R13 * l_G_1610; memset(&l_G_1610, 0, sizeof l_G_1610);
l_G_1610 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R13 *)rt_nil_check(l_G_1610))).f_T = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
S_R7(&((*(R13 *)rt_nil_check(l_G_1610))).f_ACCESS, p_C, 0);
((*(R13 *)rt_nil_check(l_G_1610))).f_INPUT = 1;
r_DEFINE(l_G_1610, p_LINE);
}
}
static R16 * r_NEW_BINDS(void) { 
R16 * l_B_1611; memset(&l_B_1611, 0, sizeof l_B_1611);
l_B_1611 = ((R16 *)rt_alloc(sizeof (R16)));
S_R16(&(*(R16 *)rt_nil_check(l_B_1611)), ({ R16 rc1612; memset(&rc1612, 0, sizeof rc1612);  S_R7(&rc1612.f_NAME, r_NO_TEXT(), 0); rc1612.f_T = NULL; S_R7(&rc1612.f_C, r_NO_TEXT(), 0); rc1612.f_HASMV = 0; rc1612.f_MV = ((rt_int)0LL); rc1612.f_R = NULL; rc1612.f_NEXT = NULL; rc1612; }), 0);
{ R16 * rv1613 = l_B_1611;
return rv1613; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R7 p_NAME, R14 * p_T, R12 p_M, R13 * p_R, R16 * p_HEAD) { 
R16 * l_B_1614; memset(&l_B_1614, 0, sizeof l_B_1614);
l_B_1614 = ((R16 *)rt_alloc(sizeof (R16)));
S_R16(&(*(R16 *)rt_nil_check(l_B_1614)), ({ R16 rc1615; memset(&rc1615, 0, sizeof rc1615);  S_R7(&rc1615.f_NAME, p_NAME, 0); rc1615.f_T = p_T; S_R7(&rc1615.f_C, r_NO_TEXT(), 0); rc1615.f_HASMV = (p_M).f_OK; rc1615.f_MV = (p_M).f_V; rc1615.f_R = p_R; rc1615.f_NEXT = ((*(R16 *)rt_nil_check(p_HEAD))).f_NEXT; rc1615; }), 0);
if ((p_M).f_OK)
{
S_R7(&((*(R16 *)rt_nil_check(l_B_1614))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R16 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_1614;
}
static R16 * r_FIND_BIND(R16 * p_BS, R7 p_NAME) { 
R16 * l_B_1616; memset(&l_B_1616, 0, sizeof l_B_1616);
l_B_1616 = p_BS;
for (;;) {
if ((l_B_1616 == NULL)) goto L_end1617;
{
if (r_TEQ(((*(R16 *)rt_nil_check(l_B_1616))).f_NAME, p_NAME))
{
{ R16 * rv1618 = l_B_1616;
return rv1618; }
}
l_B_1616 = ((*(R16 *)rt_nil_check(l_B_1616))).f_NEXT;
}
} L_end1617: ;
{ R16 * rv1619 = NULL;
return rv1619; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R11 * p_TS, R14 * p_T, R16 * p_BS) { 
R14 * l_RT_1620; memset(&l_RT_1620, 0, sizeof l_RT_1620);
l_RT_1620 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv1621 = 1;
return rv1621; }
}
if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv1622 = 1;
return rv1622; }
}
else if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R11 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1623 = 1;
return rv1623; }
}
{
R16 * l_B_1624; memset(&l_B_1624, 0, sizeof l_B_1624);
l_B_1624 = r_FIND_BIND(((*(R16 *)rt_nil_check(p_BS))).f_NEXT, ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_1624 == NULL)))
{
if ((((*(R16 *)rt_nil_check(l_B_1624))).f_T == NULL))
{
{ rt_int rv1625 = 0;
return rv1625; }
}
{ rt_int rv1626 = r_SAME_TYPE(((*(R16 *)rt_nil_check(l_B_1624))).f_T, p_T);
return rv1626; }
}
r_ADD_BIND(((*(R11 *)rt_nil_check(p_TS))).f_NAME, p_T, r_NO_MVAL(), NULL, p_BS);
{ rt_int rv1627 = 1;
return rv1627; }
}
}
else if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R14 *)rt_nil_check(l_RT_1620))).f_KIND == g_T_ARR)))
{
{ rt_int rv1628 = 0;
return rv1628; }
}
if ((!(r_LIST_LENGTH(((*(R11 *)rt_nil_check(p_TS))).f_A) == ((*(R14 *)rt_nil_check(l_RT_1620))).f_DIMS)))
{
{ rt_int rv1629 = 0;
return rv1629; }
}
{ rt_int rv1630 = r_UNIFY(((*(R11 *)rt_nil_check(p_TS))).f_C, ((*(R14 *)rt_nil_check(l_RT_1620))).f_ELEM, p_BS);
return rv1630; }
}
else if (((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv1631 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv1631; }
}
else if ((!(((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv1632 = 0;
return rv1632; }
}
if ((!(((*(R11 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R14 *)rt_nil_check(l_RT_1620))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R14 *)rt_nil_check(l_RT_1620))).f_MHI, p_BS))))
{
{ rt_int rv1633 = 0;
return rv1633; }
}
}
if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R14 *)rt_nil_check(l_RT_1620))).f_KIND == g_T_INT)))
{
{ rt_int rv1634 = 0;
return rv1634; }
}
{ rt_int rv1635 = (r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R14 *)rt_nil_check(l_RT_1620))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS));
return rv1635; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv1636 = ((((*(R14 *)rt_nil_check(l_RT_1620))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_RT_1620))).f_SCALE == ((rt_int)0LL)));
return rv1636; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R14 *)rt_nil_check(l_RT_1620))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv1637 = 0;
return rv1637; }
}
{ rt_int rv1638 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R14 *)rt_nil_check(l_RT_1620))).f_SCALE), p_BS);
return rv1638; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv1639 = (((*(R14 *)rt_nil_check(l_RT_1620))).f_KIND == g_T_BOOL);
return rv1639; }
}
else if ((r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8))))
{
{ rt_int rv1640 = (((*(R14 *)rt_nil_check(l_RT_1620))).f_KIND == g_T_STR);
return rv1640; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv1641 = (((*(R14 *)rt_nil_check(l_RT_1620))).f_KIND == g_T_BITS);
return rv1641; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv1642 = (((*(R14 *)rt_nil_check(l_RT_1620))).f_KIND == g_T_SEM);
return rv1642; }
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R14 *)rt_nil_check(l_RT_1620))).f_KIND == g_T_PTR)))
{
{ rt_int rv1643 = 0;
return rv1643; }
}
{ rt_int rv1644 = r_UNIFY(((*(R11 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_1620), p_BS);
return rv1644; }
}
{
R13 * l_Y_1645; memset(&l_Y_1645, 0, sizeof l_Y_1645);
l_Y_1645 = r_ORIG_LOOKUP(((*(R11 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_1645 == NULL))
{
{ rt_int rv1646 = 0;
return rv1646; }
}
if (((((*(R13 *)rt_nil_check(l_Y_1645))).f_KIND == g_Y_TYPE) && (((*(R13 *)rt_nil_check(l_Y_1645))).f_DECL == NULL)))
{
{ rt_int rv1647 = r_SAME_CLASS(((*(R13 *)rt_nil_check(l_Y_1645))).f_T, p_T);
return rv1647; }
}
if ((!(((*(R13 *)rt_nil_check(l_Y_1645))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv1648 = 0;
return rv1648; }
}
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R14 *)rt_nil_check(p_T))).f_DECL) == l_Y_1645)))
{
{ rt_int rv1649 = 0;
return rv1649; }
}
}
else if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_1645))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R14 *)rt_nil_check(l_RT_1620))).f_KIND == g_T_REC)))
{
{ rt_int rv1650 = 0;
return rv1650; }
}
if ((!(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_RT_1620))).f_BASE))).f_DECL == l_Y_1645)))
{
{ rt_int rv1651 = 0;
return rv1651; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R11 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv1652 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv1652; }
}
}
{
R11 * l_F_1653; memset(&l_F_1653, 0, sizeof l_F_1653);
l_F_1653 = ((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_1645))).f_DECL))).f_A;
R11 * l_A_1654; memset(&l_A_1654, 0, sizeof l_A_1654);
l_A_1654 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
R17 * l_V_1655; memset(&l_V_1655, 0, sizeof l_V_1655);
l_V_1655 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
R13 * l_CLASS_1656; memset(&l_CLASS_1656, 0, sizeof l_CLASS_1656);
l_CLASS_1656 = r_RECORD_CLASS_OF(l_RT_1620);
for (;;) {
if ((l_F_1653 == NULL)) goto L_end1657;
{
{
R11 * l_N_1658; memset(&l_N_1658, 0, sizeof l_N_1658);
l_N_1658 = ((*(R11 *)rt_nil_check(l_F_1653))).f_A;
for (;;) {
if ((l_N_1658 == NULL)) goto L_end1659;
{
if ((l_A_1654 == NULL))
{
{ rt_int rv1660 = 0;
return rv1660; }
}
if ((((*(R11 *)rt_nil_check(l_F_1653))).f_B == NULL))
{
if ((!(l_CLASS_1656 == NULL)))
{
{
R16 * l_B_1661; memset(&l_B_1661, 0, sizeof l_B_1661);
l_B_1661 = r_FIND_BIND(((*(R13 *)rt_nil_check(l_CLASS_1656))).f_BINDINGS, ((*(R11 *)rt_nil_check(l_N_1658))).f_NAME);
if ((!(l_B_1661 == NULL)))
{
if ((!r_UNIFY(l_A_1654, ((*(R16 *)rt_nil_check(l_B_1661))).f_T, p_BS)))
{
{ rt_int rv1662 = 0;
return rv1662; }
}
}
}
}
}
else
{
if ((!(l_V_1655 == NULL)))
{
if ((((!(((*(R11 *)rt_nil_check(l_A_1654))).f_KIND == g_TS_GEN)) && (!(((*(R11 *)rt_nil_check(l_A_1654))).f_KIND == g_N_DONTCARE))) && (!(((*(R11 *)rt_nil_check(l_A_1654))).f_KIND == g_N_ANY))))
{
{
R12 l_M_1663; memset(&l_M_1663, 0, sizeof l_M_1663);
S_R12(&l_M_1663, r_MANIFEST(l_A_1654), 0);
if (((l_M_1663).f_OK && (((*(R17 *)rt_nil_check(l_V_1655))).f_MLO).f_OK))
{
if ((!((l_M_1663).f_V == (((*(R17 *)rt_nil_check(l_V_1655))).f_MLO).f_V)))
{
{ rt_int rv1664 = 0;
return rv1664; }
}
}
}
}
l_V_1655 = ((*(R17 *)rt_nil_check(l_V_1655))).f_NEXT;
}
}
l_A_1654 = ((*(R11 *)rt_nil_check(l_A_1654))).f_NEXT;
l_N_1658 = ((*(R11 *)rt_nil_check(l_N_1658))).f_NEXT;
}
} L_end1659: ;
}
l_F_1653 = ((*(R11 *)rt_nil_check(l_F_1653))).f_NEXT;
}
} L_end1657: ;
}
{ rt_int rv1665 = 1;
return rv1665; }
}
rt_raise(RT_X_INIT);
}
static R13 * r_RECORD_CLASS_OF(R14 * p_T) { 
R13 * l_R_1666; memset(&l_R_1666, 0, sizeof l_R_1666);
l_R_1666 = ((*(R22 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R13 * rv1667 = NULL;
return rv1667; }
}
for (;;) {
if ((l_R_1666 == NULL)) goto L_end1668;
{
if ((((*(R13 *)rt_nil_check(l_R_1666))).f_T == ((*(R14 *)rt_nil_check(p_T))).f_BASE))
{
{ R13 * rv1669 = l_R_1666;
return rv1669; }
}
l_R_1666 = ((*(R13 *)rt_nil_check(l_R_1666))).f_INSTANCES;
}
} L_end1668: ;
{ R13 * rv1670 = NULL;
return rv1670; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R11 * p_A, R12 p_M, R16 * p_BS) { 
if ((p_A == NULL))
{
{ rt_int rv1671 = 1;
return rv1671; }
}
if ((((*(R11 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv1672 = 1;
return rv1672; }
}
else if ((((*(R11 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R11 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1673 = 1;
return rv1673; }
}
{
R16 * l_B_1674; memset(&l_B_1674, 0, sizeof l_B_1674);
l_B_1674 = r_FIND_BIND(((*(R16 *)rt_nil_check(p_BS))).f_NEXT, ((*(R11 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_1674 == NULL)))
{
{ rt_int rv1675 = ((((*(R16 *)rt_nil_check(l_B_1674))).f_HASMV && (p_M).f_OK) && (((*(R16 *)rt_nil_check(l_B_1674))).f_MV == (p_M).f_V));
return rv1675; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv1676 = 0;
return rv1676; }
}
r_ADD_BIND(((*(R11 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv1677 = 1;
return rv1677; }
}
{
R12 l_V_1678; memset(&l_V_1678, 0, sizeof l_V_1678);
S_R12(&l_V_1678, r_MANIFEST(p_A), 0);
if (((l_V_1678).f_OK && (p_M).f_OK))
{
{ rt_int rv1679 = ((l_V_1678).f_V == (p_M).f_V);
return rv1679; }
}
}
{ rt_int rv1680 = 1;
return rv1680; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R20 * p_P, R19 * p_A) { 
R16 * l_BS_1681; memset(&l_BS_1681, 0, sizeof l_BS_1681);
l_BS_1681 = r_NEW_BINDS();
if ((((*(R11 *)rt_nil_check(((*(R20 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R19 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv1682 = 0;
return rv1682; }
}
{ rt_int rv1683 = (((*(R11 *)rt_nil_check(((*(R19 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME);
return rv1683; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R11 *)rt_nil_check(((*(R19 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv1684 = 1;
return rv1684; }
}
r_TYPE_ARG(p_A);
{ rt_int rv1685 = r_UNIFY(((*(R20 *)rt_nil_check(p_P))).f_TS, (((*(R19 *)rt_nil_check(p_A))).f_V).f_T, l_BS_1681);
return rv1685; }
rt_raise(RT_X_INIT);
}
static R13 * r_INSTANCE(R13 * p_G, R19 * p_ARGS, rt_int p_LINE) { 
R16 * l_BS_1686; memset(&l_BS_1686, 0, sizeof l_BS_1686);
l_BS_1686 = r_NEW_BINDS();
R20 * l_P_1687; memset(&l_P_1687, 0, sizeof l_P_1687);
l_P_1687 = ((*(R13 *)rt_nil_check(p_G))).f_PARAMS;
R19 * l_A_1688; memset(&l_A_1688, 0, sizeof l_A_1688);
l_A_1688 = p_ARGS;
for (;;) {
if ((l_P_1687 == NULL)) goto L_end1689;
{
if ((((*(R20 *)rt_nil_check(l_P_1687))).f_TS == NULL))
{
if (((*(R19 *)rt_nil_check(l_A_1688))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R20 *)rt_nil_check(l_P_1687))).f_NAME, r_ARG_TYPE(((*(R19 *)rt_nil_check(l_A_1688))).f_E), r_NO_MVAL(), NULL, l_BS_1686);
}
else if ((((*(R11 *)rt_nil_check(((*(R20 *)rt_nil_check(l_P_1687))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R20 *)rt_nil_check(l_P_1687))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R20 *)rt_nil_check(l_P_1687))).f_TS, ((*(R19 *)rt_nil_check(l_A_1688))).f_E, p_LINE), l_BS_1686);
}
else
{
if ((!((*(R19 *)rt_nil_check(l_A_1688))).f_HAVE))
{
S_R18(&((*(R19 *)rt_nil_check(l_A_1688))).f_V, r_EXPR(((*(R19 *)rt_nil_check(l_A_1688))).f_E, NULL), 0);
((*(R19 *)rt_nil_check(l_A_1688))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R20 *)rt_nil_check(l_P_1687))).f_TS, (((*(R19 *)rt_nil_check(l_A_1688))).f_V).f_T, l_BS_1686)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R20 *)rt_nil_check(l_P_1687))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R20 *)rt_nil_check(l_P_1687))).f_TS))
{
r_ADD_BIND(r_MKN(rt_str_cat(rt_str("\?", 1), r_STR(((*(R20 *)rt_nil_check(l_P_1687))).f_NAME, (((*(R20 *)rt_nil_check(l_P_1687))).f_NAME).f_LEN))), (((*(R19 *)rt_nil_check(l_A_1688))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_1686);
}
}
l_P_1687 = ((*(R20 *)rt_nil_check(l_P_1687))).f_NEXT;
l_A_1688 = ((*(R19 *)rt_nil_check(l_A_1688))).f_NEXT;
}
} L_end1689: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_1686);
{
R13 * l_I_1690; memset(&l_I_1690, 0, sizeof l_I_1690);
l_I_1690 = ((*(R13 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_1690 == NULL)) goto L_end1691;
{
if (r_SAME_STATIC_BINDS(((*(R13 *)rt_nil_check(l_I_1690))).f_BINDINGS, ((*(R16 *)rt_nil_check(l_BS_1686))).f_NEXT))
{
{ R13 * rv1692 = l_I_1690;
return rv1692; }
}
l_I_1690 = ((*(R13 *)rt_nil_check(l_I_1690))).f_INSTANCES;
}
} L_end1691: ;
}
{ R13 * rv1693 = r_NEW_INSTANCE(p_G, ((*(R16 *)rt_nil_check(l_BS_1686))).f_NEXT, p_ARGS);
return rv1693; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R16 * p_A, R16 * p_B) { 
R16 * l_P_1694; memset(&l_P_1694, 0, sizeof l_P_1694);
l_P_1694 = p_A;
for (;;) {
if ((l_P_1694 == NULL)) goto L_end1695;
{
{
R16 * l_Q_1696; memset(&l_Q_1696, 0, sizeof l_Q_1696);
l_Q_1696 = r_FIND_BIND(p_B, ((*(R16 *)rt_nil_check(l_P_1694))).f_NAME);
if ((l_Q_1696 == NULL))
{
{ rt_int rv1697 = 0;
return rv1697; }
}
if (((!(((*(R16 *)rt_nil_check(l_P_1694))).f_T == NULL)) || (!(((*(R16 *)rt_nil_check(l_Q_1696))).f_T == NULL))))
{
if (((((*(R16 *)rt_nil_check(l_P_1694))).f_T == NULL) || (((*(R16 *)rt_nil_check(l_Q_1696))).f_T == NULL)))
{
{ rt_int rv1698 = 0;
return rv1698; }
}
if ((!r_SAME_TYPE(((*(R16 *)rt_nil_check(l_P_1694))).f_T, ((*(R16 *)rt_nil_check(l_Q_1696))).f_T)))
{
{ rt_int rv1699 = 0;
return rv1699; }
}
}
if ((((!(((*(R16 *)rt_nil_check(l_P_1694))).f_HASMV == ((*(R16 *)rt_nil_check(l_Q_1696))).f_HASMV)) || (!(((*(R16 *)rt_nil_check(l_P_1694))).f_MV == ((*(R16 *)rt_nil_check(l_Q_1696))).f_MV))) || (!(((*(R16 *)rt_nil_check(l_P_1694))).f_R == ((*(R16 *)rt_nil_check(l_Q_1696))).f_R))))
{
{ rt_int rv1700 = 0;
return rv1700; }
}
}
l_P_1694 = ((*(R16 *)rt_nil_check(l_P_1694))).f_NEXT;
}
} L_end1695: ;
{ rt_int rv1701 = 1;
return rv1701; }
rt_raise(RT_X_INIT);
}
static R13 * r_ROUTINE_ARGUMENT(R11 * p_TS, R11 * p_E, rt_int p_LINE) { 
R13 * l_Y_1702; memset(&l_Y_1702, 0, sizeof l_Y_1702);
l_Y_1702 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
R13 * l_FOUND_1703; memset(&l_FOUND_1703, 0, sizeof l_FOUND_1703);
l_FOUND_1703 = NULL;
if ((!(((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(p_LINE, rt_str("a routine name is expected as the argument", 42));
}
for (;;) {
if ((l_Y_1702 == NULL)) goto L_end1704;
{
if ((((*(R13 *)rt_nil_check(l_Y_1702))).f_KIND == g_Y_ROUTINE))
{
{
R13 * l_R_1705; memset(&l_R_1705, 0, sizeof l_R_1705);
l_R_1705 = r_ORIGINAL(l_Y_1702);
r_ROUTINE_HEADER(l_R_1705);
if (((r_LIST_LENGTH(((*(R11 *)rt_nil_check(p_TS))).f_A) == r_PARAM_COUNT(l_R_1705)) && (!((*(R13 *)rt_nil_check(l_R_1705))).f_GENERIC)))
{
if (((!(l_FOUND_1703 == NULL)) && (!(l_FOUND_1703 == l_R_1705))))
{
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_1703 = l_R_1705;
}
}
}
l_Y_1702 = r_LOOKUP_NEXT(l_Y_1702);
}
} L_end1704: ;
if ((l_FOUND_1703 == NULL))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter: ", 39), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R13 *)rt_nil_check(l_FOUND_1703))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
{ R13 * rv1706 = l_FOUND_1703;
return rv1706; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R13 * p_G, rt_int p_LINE, R16 * p_BS) { 
R11 * l_NEEDL_1707; memset(&l_NEEDL_1707, 0, sizeof l_NEEDL_1707);
l_NEEDL_1707 = ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R16 * l_SAVED_1708; memset(&l_SAVED_1708, 0, sizeof l_SAVED_1708);
l_SAVED_1708 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
((*(R22 *)rt_nil_check(g_W))).f_BINDS = ((*(R16 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_1707 == NULL)) goto L_end1709;
{
{
R11 * l_T_1710; memset(&l_T_1710, 0, sizeof l_T_1710);
l_T_1710 = ((*(R11 *)rt_nil_check(l_NEEDL_1707))).f_A;
for (;;) {
if ((l_T_1710 == NULL)) goto L_end1711;
{
if ((r_FIND_BIND(((*(R16 *)rt_nil_check(p_BS))).f_NEXT, ((*(R11 *)rt_nil_check(l_T_1710))).f_NAME) == NULL))
{
{
R19 * l_ARGS_1712; memset(&l_ARGS_1712, 0, sizeof l_ARGS_1712);
l_ARGS_1712 = NULL;
R19 * l_TAIL_1713; memset(&l_TAIL_1713, 0, sizeof l_TAIL_1713);
l_TAIL_1713 = NULL;
R11 * l_P_1714; memset(&l_P_1714, 0, sizeof l_P_1714);
l_P_1714 = ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_T_1710))).f_B))).f_A;
R13 * l_R_1715; memset(&l_R_1715, 0, sizeof l_R_1715);
for (;;) {
if ((l_P_1714 == NULL)) goto L_end1716;
{
{
R19 * l_A_1717; memset(&l_A_1717, 0, sizeof l_A_1717);
if ((((*(R11 *)rt_nil_check(l_P_1714))).f_B == NULL))
{
l_A_1717 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R22 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_1717 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R11 *)rt_nil_check(l_P_1714))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R19 *)rt_nil_check(l_A_1717))).f_MODE = ((*(R11 *)rt_nil_check(l_P_1714))).f_IV;
if ((l_TAIL_1713 == NULL))
{
l_ARGS_1712 = l_A_1717;
}
else
{
((*(R19 *)rt_nil_check(l_TAIL_1713))).f_NEXT = l_A_1717;
}
l_TAIL_1713 = l_A_1717;
}
l_P_1714 = ((*(R11 *)rt_nil_check(l_P_1714))).f_NEXT;
}
} L_end1716: ;
l_R_1715 = r_FIND_ROUTINE(((*(R11 *)rt_nil_check(l_T_1710))).f_NAME, l_ARGS_1712, p_LINE, 0);
if ((l_R_1715 == NULL))
{
l_R_1715 = r_LOOKUP(((*(R11 *)rt_nil_check(l_T_1710))).f_NAME);
if ((!(l_R_1715 == NULL)))
{
if (((!(((*(R13 *)rt_nil_check(l_R_1715))).f_KIND == g_Y_BUILTIN)) && (!(((*(R13 *)rt_nil_check(l_R_1715))).f_KIND == g_Y_ROUTINE))))
{
l_R_1715 = NULL;
}
}
if ((!(l_R_1715 == NULL)))
{
if ((((*(R13 *)rt_nil_check(l_R_1715))).f_KIND == g_Y_ROUTINE))
{
l_R_1715 = NULL;
}
}
}
if (((l_R_1715 == NULL) && (!r_IS_OPERATOR_NAME(((*(R11 *)rt_nil_check(l_T_1710))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R11 *)rt_nil_check(l_T_1710))).f_NAME);
}
if ((!(l_R_1715 == NULL)))
{
r_ADD_BIND(((*(R11 *)rt_nil_check(l_T_1710))).f_NAME, NULL, r_NO_MVAL(), l_R_1715, p_BS);
}
((*(R22 *)rt_nil_check(g_W))).f_BINDS = ((*(R16 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_1710 = ((*(R11 *)rt_nil_check(l_T_1710))).f_NEXT;
}
} L_end1711: ;
}
l_NEEDL_1707 = ((*(R11 *)rt_nil_check(l_NEEDL_1707))).f_NEXT;
}
} L_end1709: ;
((*(R22 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1708;
}
static rt_int r_DONTCARE_TYPE_ARG(R11 * p_TS) { 
if ((!(((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv1718 = 0;
return rv1718; }
}
{
R13 * l_Y_1719; memset(&l_Y_1719, 0, sizeof l_Y_1719);
l_Y_1719 = r_ORIG_LOOKUP(((*(R11 *)rt_nil_check(p_TS))).f_NAME);
R11 * l_A_1720; memset(&l_A_1720, 0, sizeof l_A_1720);
l_A_1720 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
R11 * l_F_1721; memset(&l_F_1721, 0, sizeof l_F_1721);
if ((l_Y_1719 == NULL))
{
{ rt_int rv1722 = 0;
return rv1722; }
}
if (((!(((*(R13 *)rt_nil_check(l_Y_1719))).f_KIND == g_Y_TYPE)) || (((*(R13 *)rt_nil_check(l_Y_1719))).f_DECL == NULL)))
{
{ rt_int rv1723 = 0;
return rv1723; }
}
l_F_1721 = ((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_1719))).f_DECL))).f_A;
for (;;) {
if ((l_F_1721 == NULL)) goto L_end1724;
{
{
R11 * l_N_1725; memset(&l_N_1725, 0, sizeof l_N_1725);
l_N_1725 = ((*(R11 *)rt_nil_check(l_F_1721))).f_A;
for (;;) {
if ((l_N_1725 == NULL)) goto L_end1726;
{
if ((l_A_1720 == NULL))
{
{ rt_int rv1727 = 0;
return rv1727; }
}
if (((((*(R11 *)rt_nil_check(l_F_1721))).f_B == NULL) && (((*(R11 *)rt_nil_check(l_A_1720))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv1728 = 1;
return rv1728; }
}
l_A_1720 = ((*(R11 *)rt_nil_check(l_A_1720))).f_NEXT;
l_N_1725 = ((*(R11 *)rt_nil_check(l_N_1725))).f_NEXT;
}
} L_end1726: ;
}
l_F_1721 = ((*(R11 *)rt_nil_check(l_F_1721))).f_NEXT;
}
} L_end1724: ;
}
{ rt_int rv1729 = 0;
return rv1729; }
rt_raise(RT_X_INIT);
}
static R13 * r_NEW_INSTANCE(R13 * p_G, R16 * p_BS, R19 * p_ARGS) { 
R19 * l_A_1730; memset(&l_A_1730, 0, sizeof l_A_1730);
l_A_1730 = p_ARGS;
R13 * l_I_1731; memset(&l_I_1731, 0, sizeof l_I_1731);
l_I_1731 = r_NEW_SYM(g_Y_ROUTINE, ((*(R13 *)rt_nil_check(p_G))).f_NAME);
R16 * l_SAVED_1732; memset(&l_SAVED_1732, 0, sizeof l_SAVED_1732);
l_SAVED_1732 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
R20 * l_P_1733; memset(&l_P_1733, 0, sizeof l_P_1733);
l_P_1733 = ((*(R13 *)rt_nil_check(p_G))).f_PARAMS;
R20 * l_TAIL_1734; memset(&l_TAIL_1734, 0, sizeof l_TAIL_1734);
l_TAIL_1734 = NULL;
S_R13(&(*(R13 *)rt_nil_check(l_I_1731)), (*(R13 *)rt_nil_check(p_G)), 0);
((*(R13 *)rt_nil_check(l_I_1731))).f_GENERIC = 0;
((*(R13 *)rt_nil_check(l_I_1731))).f_BINDINGS = p_BS;
((*(R13 *)rt_nil_check(l_I_1731))).f_PARAMS = NULL;
S_R7(&((*(R13 *)rt_nil_check(l_I_1731))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R13 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R13 *)rt_nil_check(l_I_1731))).f_INSTANCES = ((*(R13 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R13 *)rt_nil_check(p_G))).f_INSTANCES = l_I_1731;
((*(R22 *)rt_nil_check(g_W))).f_BINDS = p_BS;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_1733 == NULL)) goto L_end1735;
{
{
R20 * l_PM_1736; memset(&l_PM_1736, 0, sizeof l_PM_1736);
l_PM_1736 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_PM_1736)), (*(R20 *)rt_nil_check(l_P_1733)), 0);
((*(R20 *)rt_nil_check(l_PM_1736))).f_NEXT = NULL;
if ((((*(R20 *)rt_nil_check(l_P_1733))).f_TS == NULL))
{
((*(R20 *)rt_nil_check(l_PM_1736))).f_T = NULL;
}
else if ((((*(R11 *)rt_nil_check(((*(R20 *)rt_nil_check(l_P_1733))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R20 *)rt_nil_check(l_PM_1736))).f_T = ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R20 *)rt_nil_check(l_P_1733))).f_TS) && ((*(R19 *)rt_nil_check(l_A_1730))).f_HAVE))
{
((*(R20 *)rt_nil_check(l_PM_1736))).f_T = (((*(R19 *)rt_nil_check(l_A_1730))).f_V).f_T;
if ((((*(R14 *)rt_nil_check(((*(R20 *)rt_nil_check(l_PM_1736))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R14 *)rt_nil_check(((*(R20 *)rt_nil_check(l_PM_1736))).f_T))).f_MODL == ((*(R13 *)rt_nil_check(p_G))).f_MODL))
{
((*(R20 *)rt_nil_check(l_PM_1736))).f_T = ((*(R14 *)rt_nil_check(((*(R20 *)rt_nil_check(l_PM_1736))).f_T))).f_BASE;
}
}
}
else
{
((*(R20 *)rt_nil_check(l_PM_1736))).f_T = r_RESOLVE(((*(R20 *)rt_nil_check(l_P_1733))).f_TS);
}
((*(R20 *)rt_nil_check(l_PM_1736))).f_TS = NULL;
if ((l_TAIL_1734 == NULL))
{
((*(R13 *)rt_nil_check(l_I_1731))).f_PARAMS = l_PM_1736;
}
else
{
((*(R20 *)rt_nil_check(l_TAIL_1734))).f_NEXT = l_PM_1736;
}
l_TAIL_1734 = l_PM_1736;
}
l_P_1733 = ((*(R20 *)rt_nil_check(l_P_1733))).f_NEXT;
l_A_1730 = ((*(R19 *)rt_nil_check(l_A_1730))).f_NEXT;
}
} L_end1735: ;
((*(R13 *)rt_nil_check(l_I_1731))).f_RESULT = r_RESULT_TYPE(l_I_1731);
r_LEAVE_MODULE_OF(p_G);
((*(R22 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1732;
S_R7(&((*(R13 *)rt_nil_check(l_I_1731))).f_FWD, r_C_HEADER(l_I_1731), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R13 *)rt_nil_check(l_I_1731))).f_FWD, rt_str(";", 1)));
((*(R13 *)rt_nil_check(l_I_1731))).f_MEMBERS = ((*(R22 *)rt_nil_check(g_W))).f_PENDING;
((*(R22 *)rt_nil_check(g_W))).f_PENDING = l_I_1731;
{ R13 * rv1737 = l_I_1731;
return rv1737; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R7 p_NAME) { 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv1738 = 0;
return rv1738; }
}
{ rt_int rv1739 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv1739; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R11 * p_L, R7 p_NAME) { 
R11 * l_P_1740; memset(&l_P_1740, 0, sizeof l_P_1740);
l_P_1740 = p_L;
for (;;) {
if ((l_P_1740 == NULL)) goto L_end1741;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_P_1740))).f_NAME, p_NAME))
{
{ rt_int rv1742 = 1;
return rv1742; }
}
l_P_1740 = ((*(R11 *)rt_nil_check(l_P_1740))).f_NEXT;
}
} L_end1741: ;
{ rt_int rv1743 = 0;
return rv1743; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R13 * p_Y, rt_int p_LINE) { 
R28 * l_IS_1744; memset(&l_IS_1744, 0, sizeof l_IS_1744);
l_IS_1744 = ((*(R22 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R13 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv1745 = (!((*(R13 *)rt_nil_check(p_Y))).f_INPUT);
return rv1745; }
}
if ((l_IS_1744 == NULL))
{
{ rt_int rv1746 = (!((*(R13 *)rt_nil_check(p_Y))).f_INPUT);
return rv1746; }
}
if (((((*(R13 *)rt_nil_check(p_Y))).f_OWNER == ((*(R28 *)rt_nil_check(l_IS_1744))).f_ID) || (((*(R28 *)rt_nil_check(l_IS_1744))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv1747 = (!((*(R13 *)rt_nil_check(p_Y))).f_INPUT);
return rv1747; }
}
if ((!(((*(R28 *)rt_nil_check(l_IS_1744))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_1744))).f_IMPORTS))).f_B, ((*(R13 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv1748 = (!((*(R13 *)rt_nil_check(p_Y))).f_INPUT);
return rv1748; }
}
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_1744))).f_IMPORTS))).f_A, ((*(R13 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv1749 = 0;
return rv1749; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R13 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R13 * p_Y) { 
R11 * l_ITEMS_1750; memset(&l_ITEMS_1750, 0, sizeof l_ITEMS_1750);
l_ITEMS_1750 = ((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R11 * l_HEAD_1751; memset(&l_HEAD_1751, 0, sizeof l_HEAD_1751);
l_HEAD_1751 = NULL;
R11 * l_TAIL_1752; memset(&l_TAIL_1752, 0, sizeof l_TAIL_1752);
l_TAIL_1752 = NULL;
if ((!(((*(R13 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R13 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_1750 == NULL))
{
((*(R13 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R11 *)rt_nil_check(l_ITEMS_1750))).f_A, &l_HEAD_1751, &l_TAIL_1752);
r_ADD_USES(((*(R11 *)rt_nil_check(l_ITEMS_1750))).f_B, &l_HEAD_1751, &l_TAIL_1752);
{
R11 * l_R_1753; memset(&l_R_1753, 0, sizeof l_R_1753);
l_R_1753 = ((*(R11 *)rt_nil_check(l_ITEMS_1750))).f_C;
for (;;) {
if ((l_R_1753 == NULL)) goto L_end1754;
{
{
R13 * l_Z_1755; memset(&l_Z_1755, 0, sizeof l_Z_1755);
l_Z_1755 = r_LOOKUP(((*(R11 *)rt_nil_check(l_R_1753))).f_NAME);
if ((l_Z_1755 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(l_R_1753))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R11 *)rt_nil_check(l_R_1753))).f_NAME);
}
for (;;) {
if ((l_Z_1755 == NULL)) goto L_end1756;
{
if ((((*(R13 *)rt_nil_check(l_Z_1755))).f_KIND == g_Y_ROUTINE))
{
{
R13 * l_O_1757; memset(&l_O_1757, 0, sizeof l_O_1757);
l_O_1757 = r_ORIGINAL(l_Z_1755);
R11 * l_U_1758; memset(&l_U_1758, 0, sizeof l_U_1758);
r_COMPUTE_USES(l_O_1757);
l_U_1758 = ((*(R13 *)rt_nil_check(l_O_1757))).f_USES;
for (;;) {
if ((l_U_1758 == NULL)) goto L_end1759;
{
if ((!r_IN_IDENTS(l_HEAD_1751, ((*(R11 *)rt_nil_check(l_U_1758))).f_NAME)))
{
{
R11 * l_N_1760; memset(&l_N_1760, 0, sizeof l_N_1760);
l_N_1760 = r_NEW_NODE(g_N_IDENT, ((*(R11 *)rt_nil_check(l_U_1758))).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_N_1760))).f_NAME, ((*(R11 *)rt_nil_check(l_U_1758))).f_NAME, 0);
((*(R11 *)rt_nil_check(l_N_1760))).f_IV = ((*(R11 *)rt_nil_check(l_U_1758))).f_IV;
r_ADD_LIST(l_N_1760, &l_HEAD_1751, &l_TAIL_1752);
}
}
l_U_1758 = ((*(R11 *)rt_nil_check(l_U_1758))).f_NEXT;
}
} L_end1759: ;
}
}
l_Z_1755 = r_LOOKUP_NEXT(l_Z_1755);
}
} L_end1756: ;
}
l_R_1753 = ((*(R11 *)rt_nil_check(l_R_1753))).f_NEXT;
}
} L_end1754: ;
}
((*(R13 *)rt_nil_check(p_Y))).f_USES = l_HEAD_1751;
((*(R13 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static void r_ROUTINE_USES(R11 * p_RS) { 
R11 * l_R_1761; memset(&l_R_1761, 0, sizeof l_R_1761);
l_R_1761 = p_RS;
for (;;) {
if ((l_R_1761 == NULL)) goto L_end1762;
{
if ((((*(R11 *)rt_nil_check(l_R_1761))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_1761));
}
l_R_1761 = ((*(R11 *)rt_nil_check(l_R_1761))).f_NEXT;
}
} L_end1762: ;
}
static void r_ADD_USES(R11 * p_L, R11 * *p_HEAD, R11 * *p_TAIL) { 
R11 * l_P_1763; memset(&l_P_1763, 0, sizeof l_P_1763);
l_P_1763 = p_L;
for (;;) {
if ((l_P_1763 == NULL)) goto L_end1764;
{
{
R13 * l_V_1765; memset(&l_V_1765, 0, sizeof l_V_1765);
l_V_1765 = r_LOOKUP(((*(R11 *)rt_nil_check(l_P_1763))).f_NAME);
R11 * l_N_1766; memset(&l_N_1766, 0, sizeof l_N_1766);
l_N_1766 = r_NEW_NODE(g_N_IDENT, ((*(R11 *)rt_nil_check(l_P_1763))).f_LINE);
if ((l_V_1765 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(l_P_1763))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R11 *)rt_nil_check(l_P_1763))).f_NAME);
}
S_R7(&((*(R11 *)rt_nil_check(l_N_1766))).f_NAME, ((*(R11 *)rt_nil_check(l_P_1763))).f_NAME, 0);
((*(R11 *)rt_nil_check(l_N_1766))).f_IV = ((*(R13 *)rt_nil_check(l_V_1765))).f_OWNER;
if ((((*(R13 *)rt_nil_check(l_V_1765))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_1766, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_1763 = ((*(R11 *)rt_nil_check(l_P_1763))).f_NEXT;
}
} L_end1764: ;
}
static void r_CHECK_CALL_IMPORTS(R13 * p_Y, rt_int p_LINE) { 
R28 * l_IS_1767; memset(&l_IS_1767, 0, sizeof l_IS_1767);
l_IS_1767 = ((*(R22 *)rt_nil_check(g_W))).f_IS;
R11 * l_U_1768; memset(&l_U_1768, 0, sizeof l_U_1768);
l_U_1768 = ((*(R13 *)rt_nil_check(p_Y))).f_USES;
if ((l_IS_1767 == NULL))
{
return;
}
if ((((*(R28 *)rt_nil_check(l_IS_1767))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_1768 == NULL)) goto L_end1769;
{
if ((!(((*(R11 *)rt_nil_check(l_U_1768))).f_IV == ((*(R28 *)rt_nil_check(l_IS_1767))).f_ID)))
{
if ((((*(R28 *)rt_nil_check(l_IS_1767))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R13 *)rt_nil_check(p_Y))).f_NAME, (((*(R13 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R11 *)rt_nil_check(l_U_1768))).f_NAME, (((*(R11 *)rt_nil_check(l_U_1768))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!((((r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_1767))).f_IMPORTS))).f_A, ((*(R11 *)rt_nil_check(l_U_1768))).f_NAME) || r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_1767))).f_IMPORTS))).f_B, ((*(R11 *)rt_nil_check(l_U_1768))).f_NAME)) || r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_1767))).f_IMPORTS))).f_C, ((*(R13 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_1767))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))))))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R13 *)rt_nil_check(p_Y))).f_NAME, (((*(R13 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R11 *)rt_nil_check(l_U_1768))).f_NAME, (((*(R11 *)rt_nil_check(l_U_1768))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_1768 = ((*(R11 *)rt_nil_check(l_U_1768))).f_NEXT;
}
} L_end1769: ;
}
static R7 r_BASE_NAME(R13 * p_Y) { 
if (((((*(R13 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)))
{
{ R7 rv1770 = ((*(R13 *)rt_nil_check(p_Y))).f_NAME;
return rv1770; }
}
{ R7 rv1771 = r_MKN(rt_b_slice(r_STR(((*(R13 *)rt_nil_check(p_Y))).f_NAME, (((*(R13 *)rt_nil_check(p_Y))).f_NAME).f_LEN), rt_add((((*(R13 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)), rt_sub((((*(R13 *)rt_nil_check(p_Y))).f_NAME).f_LEN, ((rt_int)1LL))));
return rv1771; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R7 p_NAME) { 
R21 * l_C_1772; memset(&l_C_1772, 0, sizeof l_C_1772);
l_C_1772 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_1772 == NULL)) goto L_end1773;
{
if ((((*(R21 *)rt_nil_check(l_C_1772))).f_KIND == ((rt_int)1LL)))
{
goto L_end1773;
}
if ((((*(R21 *)rt_nil_check(l_C_1772))).f_KIND == ((rt_int)3LL)))
{
{
R11 * l_H_1774; memset(&l_H_1774, 0, sizeof l_H_1774);
l_H_1774 = ((*(R21 *)rt_nil_check(l_C_1772))).f_HANDLERS;
for (;;) {
if ((l_H_1774 == NULL)) goto L_end1775;
{
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(l_H_1774))).f_A, p_NAME))
{
{ rt_int rv1776 = 1;
return rv1776; }
}
l_H_1774 = ((*(R11 *)rt_nil_check(l_H_1774))).f_NEXT;
}
} L_end1775: ;
}
}
l_C_1772 = ((*(R21 *)rt_nil_check(l_C_1772))).f_NEXT;
}
} L_end1773: ;
if ((!(((*(R22 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R28 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv1777 = 1;
return rv1777; }
}
}
{ rt_int rv1778 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv1778; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R7 p_NAME) { 
R21 * l_C_1779; memset(&l_C_1779, 0, sizeof l_C_1779);
l_C_1779 = ((R21 *)rt_alloc(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_C_1779)), ({ R21 rc1780; memset(&rc1780, 0, sizeof rc1780);  rc1780.f_KIND = p_KIND; S_R7(&rc1780.f_NAME, p_NAME, 0); rc1780.f_HANDLERS = NULL; rc1780.f_NEXT = ((*(R22 *)rt_nil_check(g_W))).f_CTXS; rc1780; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = l_C_1779;
}
static void r_POP_CTX(void) { 
((*(R22 *)rt_nil_check(g_W))).f_CTXS = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R21 * r_LEAVE(rt_int p_KIND) { 
R21 * l_C_1781; memset(&l_C_1781, 0, sizeof l_C_1781);
l_C_1781 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_1781 == NULL)) goto L_end1782;
{
if ((((*(R21 *)rt_nil_check(l_C_1781))).f_KIND == p_KIND))
{
{ R21 * rv1783 = l_C_1781;
return rv1783; }
}
if ((((*(R21 *)rt_nil_check(l_C_1781))).f_KIND == ((rt_int)1LL)))
{
{ R21 * rv1784 = NULL;
return rv1784; }
}
if ((((*(R21 *)rt_nil_check(l_C_1781))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R21 *)rt_nil_check(l_C_1781))).f_NAME));
}
l_C_1781 = ((*(R21 *)rt_nil_check(l_C_1781))).f_NEXT;
}
} L_end1782: ;
{ R21 * rv1785 = NULL;
return rv1785; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { 
R21 * l_C_1786; memset(&l_C_1786, 0, sizeof l_C_1786);
l_C_1786 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_1787; memset(&l_N_1787, 0, sizeof l_N_1787);
l_N_1787 = ((rt_int)0LL);
for (;;) {
if ((l_C_1786 == NULL)) goto L_end1788;
{
if ((((*(R21 *)rt_nil_check(l_C_1786))).f_KIND == ((rt_int)1LL)))
{
goto L_end1788;
}
if ((((*(R21 *)rt_nil_check(l_C_1786))).f_KIND == ((rt_int)3LL)))
{
l_N_1787 = rt_add(l_N_1787, ((rt_int)1LL));
}
l_C_1786 = ((*(R21 *)rt_nil_check(l_C_1786))).f_NEXT;
}
} L_end1788: ;
{ rt_int rv1789 = l_N_1787;
return rv1789; }
rt_raise(RT_X_INIT);
}
static R7 r_EXC_NAME(R7 p_NAME) { 
R11 * l_N_1790; memset(&l_N_1790, 0, sizeof l_N_1790);
l_N_1790 = ((*(R22 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_1790 == NULL)) goto L_end1791;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_N_1790))).f_NAME, p_NAME))
{
{ R7 rv1792 = r_FMT1(rt_str("x_@", 3), p_NAME);
return rv1792; }
}
l_N_1790 = ((*(R11 *)rt_nil_check(l_N_1790))).f_NEXT;
}
} L_end1791: ;
l_N_1790 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R7(&((*(R11 *)rt_nil_check(l_N_1790))).f_NAME, p_NAME, 0);
((*(R11 *)rt_nil_check(l_N_1790))).f_NEXT = ((*(R22 *)rt_nil_check(g_W))).f_EXCS;
((*(R22 *)rt_nil_check(g_W))).f_EXCS = l_N_1790;
{ R7 rv1793 = r_FMT1(rt_str("x_@", 3), p_NAME);
return rv1793; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R11 * p_DECLS) { 
R11 * l_D_1794; memset(&l_D_1794, 0, sizeof l_D_1794);
l_D_1794 = p_DECLS;
for (;;) {
if ((l_D_1794 == NULL)) goto L_end1795;
{
if (((((*(R11 *)rt_nil_check(l_D_1794))).f_KIND == g_N_TYPE) || (((*(R11 *)rt_nil_check(l_D_1794))).f_KIND == g_N_REPTYPE)))
{
{
R13 * l_Y_1796; memset(&l_Y_1796, 0, sizeof l_Y_1796);
l_Y_1796 = r_NEW_SYM(g_Y_TYPE, ((*(R11 *)rt_nil_check(l_D_1794))).f_NAME);
if ((((*(R11 *)rt_nil_check(l_D_1794))).f_KIND == g_N_REPTYPE))
{
((*(R13 *)rt_nil_check(l_Y_1796))).f_KIND = g_Y_REPTYPE;
}
((*(R13 *)rt_nil_check(l_Y_1796))).f_DECL = l_D_1794;
r_DEFINE(l_Y_1796, ((*(R11 *)rt_nil_check(l_D_1794))).f_LINE);
}
}
l_D_1794 = ((*(R11 *)rt_nil_check(l_D_1794))).f_NEXT;
}
} L_end1795: ;
}
static void r_DECLARE_LABELS(R11 * p_S0) { 
R11 * l_S_1797; memset(&l_S_1797, 0, sizeof l_S_1797);
l_S_1797 = p_S0;
for (;;) {
if ((l_S_1797 == NULL)) goto L_end1798;
{
{
R11 * l_L_1799; memset(&l_L_1799, 0, sizeof l_L_1799);
l_L_1799 = l_S_1797;
for (;;) {
if ((!(((*(R11 *)rt_nil_check(l_L_1799))).f_KIND == g_N_LABELED))) goto L_end1800;
{
{
R13 * l_Y_1801; memset(&l_Y_1801, 0, sizeof l_Y_1801);
l_Y_1801 = r_NEW_SYM(g_Y_LABEL, ((*(R11 *)rt_nil_check(l_L_1799))).f_NAME);
S_R7(&((*(R13 *)rt_nil_check(l_Y_1801))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(((*(R11 *)rt_nil_check(l_L_1799))).f_NAME, (((*(R11 *)rt_nil_check(l_L_1799))).f_NAME).f_LEN))), 0);
((*(R13 *)rt_nil_check(l_Y_1801))).f_MV = r_GUARDS();
r_DEFINE(l_Y_1801, ((*(R11 *)rt_nil_check(l_L_1799))).f_LINE);
}
l_L_1799 = ((*(R11 *)rt_nil_check(l_L_1799))).f_A;
}
} L_end1800: ;
}
l_S_1797 = ((*(R11 *)rt_nil_check(l_S_1797))).f_NEXT;
}
} L_end1798: ;
}
static void r_BODY(R11 * p_B) { 
R11 * l_D_1802; memset(&l_D_1802, 0, sizeof l_D_1802);
l_D_1802 = ((*(R11 *)rt_nil_check(p_B))).f_A;
R11 * l_S_1803; memset(&l_S_1803, 0, sizeof l_S_1803);
l_S_1803 = ((*(R11 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R11 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_1802 == NULL)) goto L_end1804;
{
if (((((*(R11 *)rt_nil_check(l_D_1802))).f_KIND == g_N_VAR) || (((*(R11 *)rt_nil_check(l_D_1802))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_1802);
}
l_D_1802 = ((*(R11 *)rt_nil_check(l_D_1802))).f_NEXT;
}
} L_end1804: ;
r_DECLARE_LABELS(((*(R11 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_1803 == NULL)) goto L_end1805;
{
r_STMT(l_S_1803);
l_S_1803 = ((*(R11 *)rt_nil_check(l_S_1803))).f_NEXT;
}
} L_end1805: ;
}
static void r_OPEN_BODY(R11 * p_B) { 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R11 * p_S, R11 * p_BODY_NODE, R11 * p_HANDLERS) { 
R7 l_F_1806; memset(&l_F_1806, 0, sizeof l_F_1806);
S_R7(&l_F_1806, r_NEW_NAME(rt_str("xf", 2)), 0);
R11 * l_H_1807; memset(&l_H_1807, 0, sizeof l_H_1807);
l_H_1807 = p_HANDLERS;
R7 l_WORD_1808; memset(&l_WORD_1808, 0, sizeof l_WORD_1808);
S_R7(&l_WORD_1808, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_1806, l_F_1806));
r_PUSH_CTX(((rt_int)3LL), l_F_1806);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_1806, l_F_1806, l_F_1806));
for (;;) {
if ((l_H_1807 == NULL)) goto L_end1809;
{
{
R11 * l_N_1810; memset(&l_N_1810, 0, sizeof l_N_1810);
l_N_1810 = ((*(R11 *)rt_nil_check(l_H_1807))).f_A;
R7 l_COND_1811; memset(&l_COND_1811, 0, sizeof l_COND_1811);
S_R7(&l_COND_1811, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_1810 == NULL)) goto L_end1812;
{
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(l_N_1810))).f_NEXT, ((*(R11 *)rt_nil_check(l_N_1810))).f_NAME))
{
r_FAILT(((*(R11 *)rt_nil_check(l_N_1810))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R11 *)rt_nil_check(l_N_1810))).f_NAME);
}
S_R7(&l_COND_1811, r_FMT3(rt_str("@ || @x == @", 12), l_COND_1811, l_F_1806, r_EXC_NAME(((*(R11 *)rt_nil_check(l_N_1810))).f_NAME)), 0);
l_N_1810 = ((*(R11 *)rt_nil_check(l_N_1810))).f_NEXT;
}
} L_end1812: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_1808, l_COND_1811));
S_R7(&l_WORD_1808, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_1806, rt_str("x", 1)));
r_OPEN_BODY(((*(R11 *)rt_nil_check(l_H_1807))).f_B);
r_POP_CTX();
}
l_H_1807 = ((*(R11 *)rt_nil_check(l_H_1807))).f_NEXT;
}
} L_end1809: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_1806));
}
static void r_STMT(R11 * p_S) { 
rt_int l_K_1813; memset(&l_K_1813, 0, sizeof l_K_1813);
l_K_1813 = ((*(R11 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_1813 == g_N_NULL))
{
return;
}
else if ((l_K_1813 == g_N_LABELED))
{
{
R13 * l_Y_1814; memset(&l_Y_1814, 0, sizeof l_Y_1814);
l_Y_1814 = r_LOOKUP(((*(R11 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R13 *)rt_nil_check(l_Y_1814))).f_ACCESS));
r_STMT(((*(R11 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_1813 == g_N_GOTO))
{
{
R13 * l_Y_1815; memset(&l_Y_1815, 0, sizeof l_Y_1815);
l_Y_1815 = r_LOOKUP(((*(R11 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_1816; memset(&l_N_1816, 0, sizeof l_N_1816);
R21 * l_C_1817; memset(&l_C_1817, 0, sizeof l_C_1817);
l_C_1817 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_1815 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R11 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R13 *)rt_nil_check(l_Y_1815))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R11 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R13 *)rt_nil_check(l_Y_1815))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R11 *)rt_nil_check(p_S))).f_NAME);
}
l_N_1816 = rt_sub(r_GUARDS(), ((*(R13 *)rt_nil_check(l_Y_1815))).f_MV);
for (;;) {
if ((l_N_1816 <= ((rt_int)0LL))) goto L_end1818;
{
if ((((*(R21 *)rt_nil_check(l_C_1817))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R21 *)rt_nil_check(l_C_1817))).f_NAME));
l_N_1816 = rt_sub(l_N_1816, ((rt_int)1LL));
}
l_C_1817 = ((*(R21 *)rt_nil_check(l_C_1817))).f_NEXT;
}
} L_end1818: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R13 *)rt_nil_check(l_Y_1815))).f_ACCESS));
}
}
else if ((l_K_1813 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_1813 == g_N_CALL))
{
{
R18 l_V_1819; memset(&l_V_1819, 0, sizeof l_V_1819);
S_R18(&l_V_1819, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_1819).f_T == NULL)))
{
if ((!(((*(R14 *)rt_nil_check((l_V_1819).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R11 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_1819).f_C, rt_str(";", 1)));
}
}
else if ((l_K_1813 == g_N_IF))
{
r_IF_STMT(((*(R11 *)rt_nil_check(p_S))).f_A, ((*(R11 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_1813 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_1813 == g_N_LOOP))
{
{
R7 l_END_L_1820; memset(&l_END_L_1820, 0, sizeof l_END_L_1820);
S_R7(&l_END_L_1820, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R11 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R11 *)rt_nil_check(p_S))).f_A), l_END_L_1820));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_1820);
r_OPEN_BODY(((*(R11 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
if ((!(((*(R11 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R11 *)rt_nil_check(p_S))).f_C), l_END_L_1820));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_1820));
}
}
else if ((l_K_1813 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_1813 == g_N_EXIT))
{
{
R21 * l_C_1821; memset(&l_C_1821, 0, sizeof l_C_1821);
l_C_1821 = r_LEAVE(((rt_int)2LL));
if ((l_C_1821 == NULL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R21 *)rt_nil_check(l_C_1821))).f_NAME));
}
}
else if ((l_K_1813 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_1813 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R11 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_1813 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_1813 == g_N_ASSERT))
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R11 *)rt_nil_check(p_S))).f_A)));
}
else if ((l_K_1813 == g_N_EXCEPT))
{
r_GUARDED(((*(R11 *)rt_nil_check(p_S))).f_A, NULL, ((*(R11 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_1813 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_1813 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_1813 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R18 r_PROCEDURE_CALL(R11 * p_S) { 
R13 * l_Y_1822; memset(&l_Y_1822, 0, sizeof l_Y_1822);
l_Y_1822 = r_LOOKUP(((*(R11 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_1822 == NULL)))
{
if (((((*(R13 *)rt_nil_check(l_Y_1822))).f_KIND == g_Y_VAR) || (((*(R13 *)rt_nil_check(l_Y_1822))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R11 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R18 rv1823 = r_CALL_EXPR(p_S, NULL);
return rv1823; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R11 * p_ARMS, R11 * p_ELSE_BODY) { 
R11 * l_ARM_1824; memset(&l_ARM_1824, 0, sizeof l_ARM_1824);
l_ARM_1824 = p_ARMS;
R7 l_WORD_1825; memset(&l_WORD_1825, 0, sizeof l_WORD_1825);
S_R7(&l_WORD_1825, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_1826; memset(&l_OPEN_1826, 0, sizeof l_OPEN_1826);
l_OPEN_1826 = ((rt_int)0LL);
for (;;) {
if ((l_ARM_1824 == NULL)) goto L_end1827;
{
{
R12 l_M_1828; memset(&l_M_1828, 0, sizeof l_M_1828);
S_R12(&l_M_1828, r_MANIFEST(((*(R11 *)rt_nil_check(l_ARM_1824))).f_A), 0);
if (((l_M_1828).f_OK && (!r_TEQS(l_WORD_1825, rt_str("if", 2)))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_1826 = rt_add(l_OPEN_1826, ((rt_int)1LL));
S_R7(&l_WORD_1825, r_MK(rt_str("if", 2)), 0);
}
if ((l_M_1828).f_OK)
{
if (((l_M_1828).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R11 *)rt_nil_check(l_ARM_1824))).f_B);
{ rt_int it1830_lo = ((rt_int)1LL), it1830_hi = l_OPEN_1826;
for (rt_int it1830 = it1830_lo; it1830 <= it1830_hi; it1830++) {
{
r_CODES(rt_str("}", 1));
}
} } L_end1829: ;
return;
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_1825, r_BOOL_EXPR(((*(R11 *)rt_nil_check(l_ARM_1824))).f_A)));
r_OPEN_BODY(((*(R11 *)rt_nil_check(l_ARM_1824))).f_B);
S_R7(&l_WORD_1825, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_1824 = ((*(R11 *)rt_nil_check(l_ARM_1824))).f_NEXT;
}
} L_end1827: ;
if ((!(p_ELSE_BODY == NULL)))
{
if ((!r_TEQS(l_WORD_1825, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
{ rt_int it1832_lo = ((rt_int)1LL), it1832_hi = l_OPEN_1826;
for (rt_int it1832 = it1832_lo; it1832 <= it1832_hi; it1832++) {
{
r_CODES(rt_str("}", 1));
}
} } L_end1831: ;
}
static void r_FOR_STMT(R11 * p_S) { 
R7 l_END_L_1833; memset(&l_END_L_1833, 0, sizeof l_END_L_1833);
S_R7(&l_END_L_1833, r_NEW_NAME(rt_str("L_end", 5)), 0);
R7 l_IT_1834; memset(&l_IT_1834, 0, sizeof l_IT_1834);
S_R7(&l_IT_1834, r_NEW_NAME(rt_str("it", 2)), 0);
R11 * l_R_1835; memset(&l_R_1835, 0, sizeof l_R_1835);
l_R_1835 = ((*(R11 *)rt_nil_check(p_S))).f_A;
R18 l_LO_1836; memset(&l_LO_1836, 0, sizeof l_LO_1836);
S_R18(&l_LO_1836, r_EXPR(((*(R11 *)rt_nil_check(l_R_1835))).f_A, NULL), 0);
R18 l_HI_1837; memset(&l_HI_1837, 0, sizeof l_HI_1837);
S_R18(&l_HI_1837, r_EXPR(((*(R11 *)rt_nil_check(l_R_1835))).f_B, (l_LO_1836).f_T), 0);
R14 * l_T_1838; memset(&l_T_1838, 0, sizeof l_T_1838);
l_T_1838 = r_REAL_TYPE((l_LO_1836).f_T);
R7 l_LOC_1839; memset(&l_LOC_1839, 0, sizeof l_LOC_1839);
R7 l_HIC_1840; memset(&l_HIC_1840, 0, sizeof l_HIC_1840);
if ((((*(R14 *)rt_nil_check(l_T_1838))).f_KIND == g_T_ENUM))
{
if (((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_1838))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R14 *)rt_nil_check(l_T_1838))).f_KIND == g_T_INT)) || (!(((*(R14 *)rt_nil_check(l_T_1838))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R7(&l_LOC_1839, (l_LO_1836).f_C, 0);
S_R7(&l_HIC_1840, (l_HI_1837).f_C, 0);
if (((((*(R11 *)rt_nil_check(l_R_1835))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(l_R_1835))).f_IV == ((rt_int)3LL))))
{
S_R7(&l_LOC_1839, r_FMT1(rt_str("(@) + 1", 7), l_LOC_1839), 0);
}
if ((((*(R11 *)rt_nil_check(l_R_1835))).f_IV >= ((rt_int)2LL)))
{
S_R7(&l_HIC_1840, r_FMT1(rt_str("(@) - 1", 7), l_HIC_1840), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_1834, l_LOC_1839, l_IT_1834, l_HIC_1840));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_1834, l_IT_1834, l_IT_1834, l_IT_1834));
r_OPEN_SCOPE();
if (((((*(R11 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R13 * l_Y_1841; memset(&l_Y_1841, 0, sizeof l_Y_1841);
l_Y_1841 = r_NEW_SYM(g_Y_CONST, ((*(R11 *)rt_nil_check(p_S))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_1841))).f_INPUT = 1;
if ((((*(R14 *)rt_nil_check(l_T_1838))).f_KIND == g_T_ENUM))
{
((*(R13 *)rt_nil_check(l_Y_1841))).f_T = ((*(R14 *)rt_nil_check(l_T_1838))).f_BASE;
}
else
{
((*(R13 *)rt_nil_check(l_Y_1841))).f_T = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_1841, rt_str("", 0)), l_IT_1834));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_1841, rt_str("", 0)), l_IT_1834));
}
else
{
S_R7(&((*(R13 *)rt_nil_check(l_Y_1841))).f_ACCESS, l_IT_1834, 0);
}
r_DEFINE(l_Y_1841, ((*(R11 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_1833);
r_OPEN_BODY(((*(R11 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_1833));
}
static void r_RETURN_STMT(R11 * p_S) { 
R27 * l_CS_1842; memset(&l_CS_1842, 0, sizeof l_CS_1842);
l_CS_1842 = ((*(R22 *)rt_nil_check(g_W))).f_CS;
R21 * l_C_1843; memset(&l_C_1843, 0, sizeof l_C_1843);
if ((((*(R11 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_1843 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R27 *)rt_nil_check(l_CS_1842))).f_RESULT == NULL)))
{
if ((!(((*(R14 *)rt_nil_check(((*(R27 *)rt_nil_check(l_CS_1842))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R27 *)rt_nil_check(l_CS_1842))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R27 *)rt_nil_check(l_CS_1842))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODES(rt_str("return;", 7));
}
return;
}
if (((((*(R27 *)rt_nil_check(l_CS_1842))).f_RESULT == NULL) || ((*(R27 *)rt_nil_check(l_CS_1842))).f_IS_PATH))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R14 *)rt_nil_check(((*(R27 *)rt_nil_check(l_CS_1842))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R7 l_V_1844; memset(&l_V_1844, 0, sizeof l_V_1844);
S_R7(&l_V_1844, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R27 *)rt_nil_check(l_CS_1842))).f_RESULT), l_V_1844, r_CONVERT(r_EXPR(((*(R11 *)rt_nil_check(p_S))).f_A, ((*(R27 *)rt_nil_check(l_CS_1842))).f_RESULT), ((*(R27 *)rt_nil_check(l_CS_1842))).f_RESULT, ((*(R11 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_1843 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_1844));
}
}
static void r_SIGNAL_STMT(R11 * p_S) { 
if (((((*(R11 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R21 * l_C_1845; memset(&l_C_1845, 0, sizeof l_C_1845);
l_C_1845 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_1845 == NULL)) goto L_end1846;
{
if ((((*(R21 *)rt_nil_check(l_C_1845))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R21 *)rt_nil_check(l_C_1845))).f_NAME));
return;
}
if ((((*(R21 *)rt_nil_check(l_C_1845))).f_KIND == ((rt_int)1LL)))
{
goto L_end1846;
}
l_C_1845 = ((*(R21 *)rt_nil_check(l_C_1845))).f_NEXT;
}
} L_end1846: ;
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
R11 * l_TG_1847; memset(&l_TG_1847, 0, sizeof l_TG_1847);
l_TG_1847 = ((*(R11 *)rt_nil_check(p_S))).f_A;
if ((((*(R11 *)rt_nil_check(l_TG_1847))).f_KIND == g_N_SUBSTR))
{
{
R18 l_B_1848; memset(&l_B_1848, 0, sizeof l_B_1848);
S_R18(&l_B_1848, r_EXPR(((*(R11 *)rt_nil_check(l_TG_1847))).f_A, NULL), 0);
if ((!(l_B_1848).f_LVAL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R14 *)rt_nil_check((l_B_1848).f_T))).f_KIND == g_T_ABS))
{
{
R19 * l_ARGS_1849; memset(&l_ARGS_1849, 0, sizeof l_ARGS_1849);
l_ARGS_1849 = r_NODE_ARG(((*(R11 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R11 *)rt_nil_check(l_TG_1847))).f_B, g_M_IN, r_NODE_ARG(((*(R11 *)rt_nil_check(l_TG_1847))).f_C, g_M_IN, r_VAL_ARG(l_B_1848, NULL))));
R13 * l_Y_1850; memset(&l_Y_1850, 0, sizeof l_Y_1850);
((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(l_ARGS_1849))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_1850 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_1849, ((*(R11 *)rt_nil_check(p_S))).f_LINE, 1);
if ((l_Y_1850 == NULL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_1850, l_ARGS_1849, ((*(R11 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R14 *)rt_nil_check((l_B_1848).f_T))).f_KIND == g_T_STR)) && (!(((*(R14 *)rt_nil_check((l_B_1848).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R18 l_V_1851; memset(&l_V_1851, 0, sizeof l_V_1851);
S_R18(&l_V_1851, r_EXPR(((*(R11 *)rt_nil_check(p_S))).f_B, (l_B_1848).f_T), 0);
if ((!(((*(R14 *)rt_nil_check((l_V_1851).f_T))).f_KIND == ((*(R14 *)rt_nil_check((l_B_1848).f_T))).f_KIND)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_1848).f_C, r_INT_EXPR(((*(R11 *)rt_nil_check(l_TG_1847))).f_B), r_INT_EXPR(((*(R11 *)rt_nil_check(l_TG_1847))).f_C), (l_V_1851).f_C));
}
}
return;
}
{
R18 l_LV_1852; memset(&l_LV_1852, 0, sizeof l_LV_1852);
S_R18(&l_LV_1852, r_EXPR(l_TG_1847, NULL), 0);
if ((!(l_LV_1852).f_LVAL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
r_CODE(r_STORE_CODE((l_LV_1852).f_T, (l_LV_1852).f_C, r_EXPR(((*(R11 *)rt_nil_check(p_S))).f_B, (l_LV_1852).f_T), ((*(R11 *)rt_nil_check(p_S))).f_LINE, (l_LV_1852).f_SELF));
}
}
static void r_WITH_STMT(R11 * p_S) { 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
{
R13 * l_Y_1853; memset(&l_Y_1853, 0, sizeof l_Y_1853);
l_Y_1853 = r_NEW_SYM(g_Y_VAR, ((*(R11 *)rt_nil_check(p_S))).f_NAME);
R18 l_V_1854; memset(&l_V_1854, 0, sizeof l_V_1854);
S_R18(&l_V_1854, r_EXPR(((*(R11 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R13 *)rt_nil_check(l_Y_1853))).f_T = (l_V_1854).f_T;
if ((((*(R11 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R7 l_CN_1855; memset(&l_CN_1855, 0, sizeof l_CN_1855);
S_R7(&l_CN_1855, r_NEW_OBJECT(l_Y_1853, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_1854).f_T))
{
r_CODE(r_INIT_CODE((l_V_1854).f_T, l_CN_1855));
}
r_CODE(r_ASSIGN_CODE((l_V_1854).f_T, l_CN_1855, (l_V_1854).f_C));
}
}
else
{
if ((!(l_V_1854).f_LVAL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R7 l_P_1856; memset(&l_P_1856, 0, sizeof l_P_1856);
S_R7(&l_P_1856, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_1854).f_T), l_P_1856, (l_V_1854).f_C));
S_R7(&((*(R13 *)rt_nil_check(l_Y_1853))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_1856), 0);
S_R7(&((*(R13 *)rt_nil_check(l_Y_1853))).f_FIELD, r_NO_TEXT(), 0);
((*(R13 *)rt_nil_check(l_Y_1853))).f_LEVEL = ((rt_int)0LL);
((*(R13 *)rt_nil_check(l_Y_1853))).f_OWNER = rt_neg(((rt_int)1LL));
}
}
r_DEFINE(l_Y_1853, ((*(R11 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R11 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R11 * p_S) { 
R11 * l_ARM_1857; memset(&l_ARM_1857, 0, sizeof l_ARM_1857);
l_ARM_1857 = ((*(R11 *)rt_nil_check(p_S))).f_B;
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R18 l_CH_1858; memset(&l_CH_1858, 0, sizeof l_CH_1858);
S_R18(&l_CH_1858, r_EXPR(((*(R11 *)rt_nil_check(p_S))).f_A, NULL), 0);
R14 * l_T_1859; memset(&l_T_1859, 0, sizeof l_T_1859);
l_T_1859 = r_REAL_TYPE((l_CH_1858).f_T);
R13 * l_BOUND_1860; memset(&l_BOUND_1860, 0, sizeof l_BOUND_1860);
l_BOUND_1860 = r_DISCRIMINATED(((*(R11 *)rt_nil_check(p_S))).f_A);
if (((((*(R14 *)rt_nil_check(l_T_1859))).f_KIND == g_T_STR) || (((*(R14 *)rt_nil_check(l_T_1859))).f_KIND == g_T_BITS)))
{
{
R7 l_TMP_1861; memset(&l_TMP_1861, 0, sizeof l_TMP_1861);
S_R7(&l_TMP_1861, r_NEW_NAME(rt_str("cs", 2)), 0);
R7 l_WORD_1862; memset(&l_WORD_1862, 0, sizeof l_WORD_1862);
S_R7(&l_WORD_1862, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_1861, (l_CH_1858).f_C));
for (;;) {
if ((l_ARM_1857 == NULL)) goto L_end1863;
{
{
R11 * l_L_1864; memset(&l_L_1864, 0, sizeof l_L_1864);
l_L_1864 = ((*(R11 *)rt_nil_check(l_ARM_1857))).f_A;
R7 l_COND_1865; memset(&l_COND_1865, 0, sizeof l_COND_1865);
S_R7(&l_COND_1865, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_1864 == NULL)) goto L_end1866;
{
S_R7(&l_COND_1865, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_1865, l_TMP_1861, (r_EXPR(l_L_1864, l_T_1859)).f_C), 0);
l_L_1864 = ((*(R11 *)rt_nil_check(l_L_1864))).f_NEXT;
}
} L_end1866: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_1862, l_COND_1865));
S_R7(&l_WORD_1862, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(l_ARM_1857))).f_B, ((*(R11 *)rt_nil_check(l_ARM_1857))).f_C);
}
l_ARM_1857 = ((*(R11 *)rt_nil_check(l_ARM_1857))).f_NEXT;
}
} L_end1863: ;
if ((!(((*(R11 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_1862, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(p_S))).f_C, ((*(R11 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if ((((!(((((*(R14 *)rt_nil_check(l_T_1859))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_T_1859))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R14 *)rt_nil_check(l_T_1859))).f_KIND == g_T_ENUM))) && (!(((*(R14 *)rt_nil_check(l_T_1859))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_1859));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_1858).f_C));
for (;;) {
if ((l_ARM_1857 == NULL)) goto L_end1867;
{
{
R11 * l_L_1868; memset(&l_L_1868, 0, sizeof l_L_1868);
l_L_1868 = ((*(R11 *)rt_nil_check(l_ARM_1857))).f_A;
R12 l_FIRST_1869; memset(&l_FIRST_1869, 0, sizeof l_FIRST_1869);
S_R12(&l_FIRST_1869, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_1868 == NULL)) goto L_end1870;
{
if ((((*(R11 *)rt_nil_check(l_L_1868))).f_KIND == g_N_RANGE))
{
{
R12 l_LO_1871; memset(&l_LO_1871, 0, sizeof l_LO_1871);
S_R12(&l_LO_1871, r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(l_L_1868))).f_A, l_T_1859), 0);
R12 l_HI_1872; memset(&l_HI_1872, 0, sizeof l_HI_1872);
S_R12(&l_HI_1872, r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(l_L_1868))).f_B, l_T_1859), 0);
rt_int l_A_1873; memset(&l_A_1873, 0, sizeof l_A_1873);
l_A_1873 = (l_LO_1871).f_V;
rt_int l_B_1874; memset(&l_B_1874, 0, sizeof l_B_1874);
l_B_1874 = (l_HI_1872).f_V;
if ((!(((l_LO_1871).f_OK && (l_HI_1872).f_OK))))
{
r_FAIL(((*(R11 *)rt_nil_check(l_L_1868))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R11 *)rt_nil_check(l_L_1868))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(l_L_1868))).f_IV == ((rt_int)3LL))))
{
l_A_1873 = rt_add(l_A_1873, ((rt_int)1LL));
}
if ((((*(R11 *)rt_nil_check(l_L_1868))).f_IV >= ((rt_int)2LL)))
{
l_B_1874 = rt_sub(l_B_1874, ((rt_int)1LL));
}
if ((!(l_FIRST_1869).f_OK))
{
S_R12(&l_FIRST_1869, r_SOME(l_A_1873), 0);
}
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_1873), r_NUM(l_B_1874)));
}
}
else
{
{
R12 l_M_1875; memset(&l_M_1875, 0, sizeof l_M_1875);
S_R12(&l_M_1875, r_ENUM_MANIFEST(l_L_1868, l_T_1859), 0);
if ((!(l_M_1875).f_OK))
{
r_FAIL(((*(R11 *)rt_nil_check(l_L_1868))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_1869).f_OK))
{
S_R12(&l_FIRST_1869, l_M_1875, 0);
}
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_1875).f_V)));
}
}
l_L_1868 = ((*(R11 *)rt_nil_check(l_L_1868))).f_NEXT;
}
} L_end1870: ;
if ((!(l_BOUND_1860 == NULL)))
{
{
R14 * l_SAVED_1876; memset(&l_SAVED_1876, 0, sizeof l_SAVED_1876);
l_SAVED_1876 = ((*(R13 *)rt_nil_check(l_BOUND_1860))).f_T;
((*(R13 *)rt_nil_check(l_BOUND_1860))).f_T = r_NARROW(l_SAVED_1876, ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_1869).f_V);
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(l_ARM_1857))).f_B, ((*(R11 *)rt_nil_check(l_ARM_1857))).f_C);
((*(R13 *)rt_nil_check(l_BOUND_1860))).f_T = l_SAVED_1876;
}
}
else
{
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(l_ARM_1857))).f_B, ((*(R11 *)rt_nil_check(l_ARM_1857))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_1857 = ((*(R11 *)rt_nil_check(l_ARM_1857))).f_NEXT;
}
} L_end1867: ;
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
{ R13 * rv1877 = NULL;
return rv1877; }
}
if ((!(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R13 * rv1878 = NULL;
return rv1878; }
}
{
R13 * l_Y_1879; memset(&l_Y_1879, 0, sizeof l_Y_1879);
l_Y_1879 = r_LOOKUP(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_1879 == NULL))
{
{ R13 * rv1880 = NULL;
return rv1880; }
}
if ((!(((*(R13 *)rt_nil_check(l_Y_1879))).f_KIND == g_Y_VAR)))
{
{ R13 * rv1881 = NULL;
return rv1881; }
}
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R13 *)rt_nil_check(l_Y_1879))).f_T)))).f_KIND == g_T_REC)))
{
{ R13 * rv1882 = NULL;
return rv1882; }
}
{
R15 * l_F_1883; memset(&l_F_1883, 0, sizeof l_F_1883);
l_F_1883 = r_FIND_FIELD(r_REAL_TYPE(((*(R13 *)rt_nil_check(l_Y_1879))).f_T), ((*(R11 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_1883 == NULL))
{
{ R13 * rv1884 = NULL;
return rv1884; }
}
if ((!(((*(R15 *)rt_nil_check(l_F_1883))).f_KIND == ((rt_int)2LL))))
{
{ R13 * rv1885 = NULL;
return rv1885; }
}
}
{ R13 * rv1886 = l_Y_1879;
return rv1886; }
}
rt_raise(RT_X_INIT);
}
static R14 * r_NARROW(R14 * p_T, R7 p_TAGN, rt_int p_V) { 
R14 * l_N_1887; memset(&l_N_1887, 0, sizeof l_N_1887);
l_N_1887 = r_COPY_TYP(p_T);
R15 * l_F_1888; memset(&l_F_1888, 0, sizeof l_F_1888);
l_F_1888 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
R17 * l_A_1889; memset(&l_A_1889, 0, sizeof l_A_1889);
l_A_1889 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
R17 * l_HEAD_1890; memset(&l_HEAD_1890, 0, sizeof l_HEAD_1890);
l_HEAD_1890 = NULL;
R17 * l_TAIL_1891; memset(&l_TAIL_1891, 0, sizeof l_TAIL_1891);
l_TAIL_1891 = NULL;
for (;;) {
if ((l_F_1888 == NULL)) goto L_end1892;
{
if (((!(((*(R15 *)rt_nil_check(l_F_1888))).f_KIND == ((rt_int)0LL))) && (!(l_A_1889 == NULL))))
{
{
R17 * l_B_1893; memset(&l_B_1893, 0, sizeof l_B_1893);
l_B_1893 = ((R17 *)rt_alloc(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_B_1893)), (*(R17 *)rt_nil_check(l_A_1889)), 0);
((*(R17 *)rt_nil_check(l_B_1893))).f_NEXT = NULL;
if (r_TEQ(((*(R15 *)rt_nil_check(l_F_1888))).f_NAME, p_TAGN))
{
((*(R17 *)rt_nil_check(l_B_1893))).f_ANYARG = 0;
S_R12(&((*(R17 *)rt_nil_check(l_B_1893))).f_MLO, r_SOME(p_V), 0);
S_R7(&((*(R17 *)rt_nil_check(l_B_1893))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_1891 == NULL))
{
l_HEAD_1890 = l_B_1893;
}
else
{
((*(R17 *)rt_nil_check(l_TAIL_1891))).f_NEXT = l_B_1893;
}
l_TAIL_1891 = l_B_1893;
}
l_A_1889 = ((*(R17 *)rt_nil_check(l_A_1889))).f_NEXT;
}
l_F_1888 = ((*(R15 *)rt_nil_check(l_F_1888))).f_NEXT;
}
} L_end1892: ;
((*(R14 *)rt_nil_check(l_N_1887))).f_ARGS = l_HEAD_1890;
{ R14 * rv1894 = l_N_1887;
return rv1894; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R11 * p_S) { 
R11 * l_ARM_1895; memset(&l_ARM_1895, 0, sizeof l_ARM_1895);
l_ARM_1895 = ((*(R11 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_1896; memset(&l_SAVED_1896, 0, sizeof l_SAVED_1896);
l_SAVED_1896 = ((*(R22 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_1895 == NULL)) goto L_end1897;
{
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(l_ARM_1895))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R22 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(l_ARM_1895))).f_B, ((*(R11 *)rt_nil_check(l_ARM_1895))).f_C);
((*(R22 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_1896;
return;
}
l_ARM_1895 = ((*(R11 *)rt_nil_check(l_ARM_1895))).f_NEXT;
}
} L_end1897: ;
if ((!(((*(R11 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R22 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(p_S))).f_C, ((*(R11 *)rt_nil_check(p_S))).f_D);
((*(R22 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_1896;
}
}
static R14 * r_PATHS_TYPE(void) { 
R14 * l_T_1898; memset(&l_T_1898, 0, sizeof l_T_1898);
l_T_1898 = r_NEW_TYP(g_T_PATHS);
S_R7(&((*(R14 *)rt_nil_check(l_T_1898))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R14 * rv1899 = l_T_1898;
return rv1899; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R11 * p_S) { 
R7 l_TD_1900; memset(&l_TD_1900, 0, sizeof l_TD_1900);
S_R7(&l_TD_1900, r_NEW_NAME(rt_str("td", 2)), 0);
R11 * l_P_1901; memset(&l_P_1901, 0, sizeof l_P_1901);
l_P_1901 = ((*(R11 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_1901 == NULL)) goto L_end1902;
{
{
R13 * l_Y_1903; memset(&l_Y_1903, 0, sizeof l_Y_1903);
l_Y_1903 = r_NEW_SYM(g_Y_PATH, ((*(R11 *)rt_nil_check(l_P_1901))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_1903))).f_T = r_PATHS_TYPE();
((*(R13 *)rt_nil_check(l_Y_1903))).f_DECL = l_P_1901;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_1903, rt_str("_path", 5))));
((*(R13 *)rt_nil_check(l_Y_1903))).f_INPUT = 1;
r_DEFINE(l_Y_1903, ((*(R11 *)rt_nil_check(l_P_1901))).f_LINE);
}
l_P_1901 = ((*(R11 *)rt_nil_check(l_P_1901))).f_NEXT;
}
} L_end1902: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_1900));
r_CODES(rt_str("rt_b_par_begin();", 17));
l_P_1901 = ((*(R11 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_P_1901 == NULL)) goto L_end1904;
{
r_ACTIVATE_PATH(l_P_1901, l_TD_1900);
l_P_1901 = ((*(R11 *)rt_nil_check(l_P_1901))).f_NEXT;
}
} L_end1904: ;
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_1900));
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_ACTIVATE_PATH(R11 * p_P, R7 p_TD) { 
R7 l_FN_1905; memset(&l_FN_1905, 0, sizeof l_FN_1905);
S_R7(&l_FN_1905, r_NEW_NAME(rt_str("path_", 5)), 0);
R7 l_FT_1906; memset(&l_FT_1906, 0, sizeof l_FT_1906);
S_R7(&l_FT_1906, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R13 * l_Y_1907; memset(&l_Y_1907, 0, sizeof l_Y_1907);
l_Y_1907 = r_LOOKUP(((*(R11 *)rt_nil_check(p_P))).f_NAME);
R7 l_H_1908; memset(&l_H_1908, 0, sizeof l_H_1908);
S_R7(&l_H_1908, r_OBJ_ACCESS(l_Y_1907), 0);
R7 l_IT_1909; memset(&l_IT_1909, 0, sizeof l_IT_1909);
S_R7(&l_IT_1909, r_NEW_NAME(rt_str("pi", 2)), 0);
R7 l_PRIO_1910; memset(&l_PRIO_1910, 0, sizeof l_PRIO_1910);
S_R7(&l_PRIO_1910, r_MK(rt_str("0", 1)), 0);
R7 l_START_1911; memset(&l_START_1911, 0, sizeof l_START_1911);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_1906, l_FT_1906));
if ((!(((*(R11 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R7(&l_PRIO_1910, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R11 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R11 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R11 * l_R_1912; memset(&l_R_1912, 0, sizeof l_R_1912);
l_R_1912 = ((*(R11 *)rt_nil_check(p_P))).f_A;
R7 l_LO_1913; memset(&l_LO_1913, 0, sizeof l_LO_1913);
S_R7(&l_LO_1913, r_INT_EXPR(((*(R11 *)rt_nil_check(l_R_1912))).f_A), 0);
R7 l_HI_1914; memset(&l_HI_1914, 0, sizeof l_HI_1914);
S_R7(&l_HI_1914, r_INT_EXPR(((*(R11 *)rt_nil_check(l_R_1912))).f_B), 0);
if (((((*(R11 *)rt_nil_check(l_R_1912))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(l_R_1912))).f_IV == ((rt_int)3LL))))
{
S_R7(&l_LO_1913, r_FMT1(rt_str("(@) + 1", 7), l_LO_1913), 0);
}
if ((((*(R11 *)rt_nil_check(l_R_1912))).f_IV >= ((rt_int)2LL)))
{
S_R7(&l_HI_1914, r_FMT1(rt_str("(@) - 1", 7), l_HI_1914), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_1908, l_LO_1913, l_HI_1914));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_1909, l_H_1908, l_IT_1909, l_H_1908), l_IT_1909));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_1909));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_1906, r_UP_FRAME()));
if ((((*(R11 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_NAME, l_IT_1909));
}
if ((!(((*(R11 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R18 l_V_1915; memset(&l_V_1915, 0, sizeof l_V_1915);
S_R18(&l_V_1915, r_EXPR(((*(R11 *)rt_nil_check(p_P))).f_D, NULL), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1915).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_1915).f_C));
}
}
S_R7(&l_START_1911, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_1908, l_IT_1909, l_FN_1905, p_TD), 0);
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_1911, p_TD, l_PRIO_1910));
r_PATH_BODY(p_P, l_FN_1905, l_FT_1906);
}
static R7 r_UP_FRAME(void) { 
if ((((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R7 rv1916 = r_MK(rt_str("NULL", 4));
return rv1916; }
}
{ R7 rv1917 = r_MK(rt_str("F", 1));
return rv1917; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R11 * p_P, R7 p_FN, R7 p_FT) { 
R8 l_SAVED_CODE_1918; memset(&l_SAVED_CODE_1918, 0, sizeof l_SAVED_CODE_1918);
S_R8(&l_SAVED_CODE_1918, ((*(R22 *)rt_nil_check(g_W))).f_CODE, 0);
R21 * l_SAVED_CTXS_1919; memset(&l_SAVED_CTXS_1919, 0, sizeof l_SAVED_CTXS_1919);
l_SAVED_CTXS_1919 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
R27 * l_OUTER_1920; memset(&l_OUTER_1920, 0, sizeof l_OUTER_1920);
l_OUTER_1920 = ((*(R22 *)rt_nil_check(g_W))).f_CS;
R11 * l_H_1921; memset(&l_H_1921, 0, sizeof l_H_1921);
l_H_1921 = ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_A;
R27 * l_CS_1922; memset(&l_CS_1922, 0, sizeof l_CS_1922);
l_CS_1922 = ((R27 *)rt_alloc(sizeof (R27)));
R7 l_UPT_1923; memset(&l_UPT_1923, 0, sizeof l_UPT_1923);
S_R7(&l_UPT_1923, r_MK(rt_str("void", 4)), 0);
if ((((*(R27 *)rt_nil_check(l_OUTER_1920))).f_LEVEL > ((rt_int)0LL)))
{
S_R7(&l_UPT_1923, ((*(R27 *)rt_nil_check(l_OUTER_1920))).f_FTYPE, 0);
}
S_R27(&(*(R27 *)rt_nil_check(l_CS_1922)), ({ R27 rc1924; memset(&rc1924, 0, sizeof rc1924);  rc1924.f_LEVEL = rt_add(((*(R27 *)rt_nil_check(l_OUTER_1920))).f_LEVEL, ((rt_int)1LL)); rc1924.f_R = NULL; rc1924.f_FRAMED = 1; S_R7(&rc1924.f_FTYPE, p_FT, 0); S_R8(&rc1924.f_FIELDS, ({ R8 rc1925; memset(&rc1925, 0, sizeof rc1925);  rc1925.f_HEAD = NULL; rc1925.f_TAIL = NULL; rc1925; }), 0); rc1924.f_UP = l_OUTER_1920; rc1924.f_IMPORTS = ((*(R11 *)rt_nil_check(l_H_1921))).f_B; rc1924.f_SIGNALS = ((*(R11 *)rt_nil_check(l_H_1921))).f_A; rc1924.f_RESULT = NULL; rc1924.f_IS_PATH = 1; rc1924; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_1923), &((*(R27 *)rt_nil_check(l_CS_1922))).f_FIELDS);
((*(R22 *)rt_nil_check(g_W))).f_CS = l_CS_1922;
S_R8(&((*(R22 *)rt_nil_check(g_W))).f_CODE, ({ R8 rc1926; memset(&rc1926, 0, sizeof rc1926);  rc1926.f_HEAD = NULL; rc1926.f_TAIL = NULL; rc1926; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R11 *)rt_nil_check(l_H_1921))).f_B, ((*(R11 *)rt_nil_check(l_H_1921))).f_A, ((*(R11 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R11 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R13 * l_I_1927; memset(&l_I_1927, 0, sizeof l_I_1927);
l_I_1927 = r_NEW_SYM(g_Y_CONST, ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R13 *)rt_nil_check(l_I_1927))).f_T = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
((*(R13 *)rt_nil_check(l_I_1927))).f_INPUT = 1;
S_R7(&((*(R13 *)rt_nil_check(l_I_1927))).f_FIELD, r_FMT1(rt_str("l_@", 3), ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_NAME), 0);
S_R7(&((*(R13 *)rt_nil_check(l_I_1927))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_NAME), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_NAME), &((*(R27 *)rt_nil_check(l_CS_1922))).f_FIELDS);
r_DEFINE(l_I_1927, ((*(R11 *)rt_nil_check(p_P))).f_LINE);
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
R11 * l_L_1928; memset(&l_L_1928, 0, sizeof l_L_1928);
l_L_1928 = ((*(R11 *)rt_nil_check(l_H_1921))).f_A;
R7 l_C_1929; memset(&l_C_1929, 0, sizeof l_C_1929);
S_R7(&l_C_1929, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_1928 == NULL)) goto L_end1930;
{
S_R7(&l_C_1929, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_1929, r_EXC_NAME(((*(R11 *)rt_nil_check(l_L_1928))).f_NAME)), 0);
l_L_1928 = ((*(R11 *)rt_nil_check(l_L_1928))).f_NEXT;
}
} L_end1930: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_1929));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R27 *)rt_nil_check(l_CS_1922))).f_FIELDS)));
((*(R22 *)rt_nil_check(g_W))).f_CS = l_OUTER_1920;
S_R8(&((*(R22 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1918, 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_1919;
}
static R7 r_JOIN_BUF(R8 p_B) { 
R9 * l_C_1931; memset(&l_C_1931, 0, sizeof l_C_1931);
l_C_1931 = (p_B).f_HEAD;
R7 l_R_1932; memset(&l_R_1932, 0, sizeof l_R_1932);
S_R7(&l_R_1932, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_1931 == NULL)) goto L_end1933;
{
S_R7(&l_R_1932, r_CAT(l_R_1932, ((*(R9 *)rt_nil_check(l_C_1931))).f_T), 0);
l_C_1931 = ((*(R9 *)rt_nil_check(l_C_1931))).f_NEXT;
}
} L_end1933: ;
{ R7 rv1934 = l_R_1932;
return rv1934; }
rt_raise(RT_X_INIT);
}
static R7 r_PATH_REF(R11 * p_E) { 
R7 l_NAME_1935; memset(&l_NAME_1935, 0, sizeof l_NAME_1935);
S_R7(&l_NAME_1935, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
R7 l_SUB_1936; memset(&l_SUB_1936, 0, sizeof l_SUB_1936);
S_R7(&l_SUB_1936, r_MK(rt_str("0", 1)), 0);
if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R11 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R7(&l_SUB_1936, r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R13 * l_Y_1937; memset(&l_Y_1937, 0, sizeof l_Y_1937);
l_Y_1937 = r_LOOKUP(l_NAME_1935);
if ((l_Y_1937 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_1935);
}
if ((!(((*(R13 *)rt_nil_check(l_Y_1937))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_1935);
}
if (((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_1937))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R7 rv1938 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_1937), l_SUB_1936);
return rv1938; }
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
R7 l_NAME_1939; memset(&l_NAME_1939, 0, sizeof l_NAME_1939);
S_R7(&l_NAME_1939, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1940; memset(&l_LINE_1940, 0, sizeof l_LINE_1940);
l_LINE_1940 = ((*(R11 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_1939, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R18 l_V_1941; memset(&l_V_1941, 0, sizeof l_V_1941);
S_R18(&l_V_1941, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1941).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_1940, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R18 rv1942 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_1941).f_C, r_NUM(((*(R14 *)rt_nil_check((l_V_1941).f_T))).f_SCALE)), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1942; }
}
}
else if (r_TEQS(l_NAME_1939, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R18 rv1943 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A)), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1943; }
}
{ R18 rv1944 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A)), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1944; }
}
else if (r_TEQS(l_NAME_1939, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R11 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R18 rv1945 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv1945; }
}
{ R18 rv1946 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R11 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv1946; }
}
else if ((r_TEQS(l_NAME_1939, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_1939, rt_str("RELEASE", 7))))
{
if ((((!(((*(R11 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R11 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R11 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_1940, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_1939);
}
{
R18 l_V_1947; memset(&l_V_1947, 0, sizeof l_V_1947);
S_R18(&l_V_1947, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1947).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_1940, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_1947).f_LVAL))
{
r_FAIL(l_LINE_1940, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_1939, rt_str("REQUEST", 7)))
{
{ R18 rv1948 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_1947).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1948; }
}
{ R18 rv1949 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_1947).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
return rv1949; }
}
}
else if (r_TEQS(l_NAME_1939, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_1940);
{ R18 rv1950 = r_START_IO_CALL(p_E);
return rv1950; }
}
r_FAILT(l_LINE_1940, rt_str("unknown routine ", 16), l_NAME_1939);
rt_raise(RT_X_INIT);
}
static R18 r_START_IO_CALL(R11 * p_E) { 
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("this implementation has no devices for START_IO yet", 51));
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R11 * p_IMPORTS, R11 * p_SIGNALS, R7 p_NAME) { 
R28 * l_I_1951; memset(&l_I_1951, 0, sizeof l_I_1951);
l_I_1951 = ((R28 *)rt_alloc(sizeof (R28)));
((*(R22 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R22 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R28(&(*(R28 *)rt_nil_check(l_I_1951)), ({ R28 rc1952; memset(&rc1952, 0, sizeof rc1952);  rc1952.f_ID = ((*(R22 *)rt_nil_check(g_W))).f_NSCOPES; rc1952.f_IMPORTS = p_IMPORTS; rc1952.f_SIGNALS = p_SIGNALS; S_R7(&rc1952.f_NAME, p_NAME, 0); rc1952.f_UP = ((*(R22 *)rt_nil_check(g_W))).f_IS; rc1952; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_IS = l_I_1951;
}
static void r_LEAVE_ISCOPE(void) { 
((*(R22 *)rt_nil_check(g_W))).f_IS = ((*(R28 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R7 r_ROUTINE_CNAME(R7 p_NAME) { 
R7 l_BASE_1953; memset(&l_BASE_1953, 0, sizeof l_BASE_1953);
S_R7(&l_BASE_1953, r_FMT1(rt_str("r_@", 3), p_NAME), 0);
rstr l_S_1954; memset(&l_S_1954, 0, sizeof l_S_1954);
l_S_1954 = rt_str_new((l_BASE_1953).f_LEN);
rt_b_assign(&l_S_1954, r_STR(l_BASE_1953, (l_BASE_1953).f_LEN));
R11 * l_N_1955; memset(&l_N_1955, 0, sizeof l_N_1955);
l_N_1955 = ((*(R22 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it1957_lo = ((rt_int)0LL), it1957_hi = rt_sub((l_BASE_1953).f_LEN, ((rt_int)1LL));
for (rt_int it1957 = it1957_lo; it1957 <= it1957_hi; it1957++) {
{
if (rt_b_eq(rt_b_slice(l_S_1954, it1957, it1957), rt_str("$", 1)))
{
S_R7(&l_BASE_1953, r_MK(rt_str_cat(rt_str_cat(rt_b_slice(l_S_1954, ((rt_int)0LL), rt_sub(it1957, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_1954, rt_add(it1957, ((rt_int)1LL)), rt_sub((l_BASE_1953).f_LEN, ((rt_int)1LL))))), 0);
}
}
} } L_end1956: ;
for (;;) {
if ((l_N_1955 == NULL)) goto L_end1958;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_N_1955))).f_NAME, l_BASE_1953))
{
{ R7 rv1959 = r_FMT2(rt_str("@_@", 3), l_BASE_1953, r_NEW_NAME(rt_str("", 0)));
return rv1959; }
}
l_N_1955 = ((*(R11 *)rt_nil_check(l_N_1955))).f_NEXT;
}
} L_end1958: ;
l_N_1955 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R7(&((*(R11 *)rt_nil_check(l_N_1955))).f_NAME, l_BASE_1953, 0);
((*(R11 *)rt_nil_check(l_N_1955))).f_NEXT = ((*(R22 *)rt_nil_check(g_W))).f_CNAMES;
((*(R22 *)rt_nil_check(g_W))).f_CNAMES = l_N_1955;
{ R7 rv1960 = l_BASE_1953;
return rv1960; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R11 * p_B) { 
if ((p_B == NULL))
{
{ rt_int rv1961 = 0;
return rv1961; }
}
if ((!(((*(R11 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv1962 = 1;
return rv1962; }
}
{ rt_int rv1963 = r_HAS_HANDLERS(((*(R11 *)rt_nil_check(p_B))).f_B);
return rv1963; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R11 * p_S0) { 
R11 * l_S_1964; memset(&l_S_1964, 0, sizeof l_S_1964);
l_S_1964 = p_S0;
for (;;) {
if ((l_S_1964 == NULL)) goto L_end1965;
{
if (((((*(R11 *)rt_nil_check(l_S_1964))).f_KIND == g_N_EXCEPT) || (((*(R11 *)rt_nil_check(l_S_1964))).f_KIND == g_N_PAR)))
{
{ rt_int rv1966 = 1;
return rv1966; }
}
if (((((*(R11 *)rt_nil_check(l_S_1964))).f_KIND == g_N_LABELED) || (((*(R11 *)rt_nil_check(l_S_1964))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R11 *)rt_nil_check(l_S_1964))).f_A) || r_HAS_HANDLERS(((*(R11 *)rt_nil_check(l_S_1964))).f_B)))
{
{ rt_int rv1967 = 1;
return rv1967; }
}
}
else if ((((*(R11 *)rt_nil_check(l_S_1964))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_S_1964))).f_A))).f_B))
{
{ rt_int rv1968 = 1;
return rv1968; }
}
}
else if (((((*(R11 *)rt_nil_check(l_S_1964))).f_KIND == g_N_LOOP) || (((*(R11 *)rt_nil_check(l_S_1964))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_S_1964))).f_B))).f_B))
{
{ rt_int rv1969 = 1;
return rv1969; }
}
}
else if (((((*(R11 *)rt_nil_check(l_S_1964))).f_KIND == g_N_IF) || (((*(R11 *)rt_nil_check(l_S_1964))).f_KIND == g_N_CASE)))
{
{
R11 * l_A_1970; memset(&l_A_1970, 0, sizeof l_A_1970);
l_A_1970 = ((*(R11 *)rt_nil_check(l_S_1964))).f_A;
if ((((*(R11 *)rt_nil_check(l_S_1964))).f_KIND == g_N_CASE))
{
l_A_1970 = ((*(R11 *)rt_nil_check(l_S_1964))).f_B;
if ((!(((*(R11 *)rt_nil_check(l_S_1964))).f_D == NULL)))
{
{ rt_int rv1971 = 1;
return rv1971; }
}
if ((!(((*(R11 *)rt_nil_check(l_S_1964))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_S_1964))).f_C))).f_B))
{
{ rt_int rv1972 = 1;
return rv1972; }
}
}
}
else if ((!(((*(R11 *)rt_nil_check(l_S_1964))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_S_1964))).f_B))).f_B))
{
{ rt_int rv1973 = 1;
return rv1973; }
}
}
for (;;) {
if ((l_A_1970 == NULL)) goto L_end1974;
{
if ((!(((*(R11 *)rt_nil_check(l_A_1970))).f_C == NULL)))
{
{ rt_int rv1975 = 1;
return rv1975; }
}
if (r_HAS_HANDLERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_1970))).f_B))).f_B))
{
{ rt_int rv1976 = 1;
return rv1976; }
}
l_A_1970 = ((*(R11 *)rt_nil_check(l_A_1970))).f_NEXT;
}
} L_end1974: ;
}
}
l_S_1964 = ((*(R11 *)rt_nil_check(l_S_1964))).f_NEXT;
}
} L_end1965: ;
{ rt_int rv1977 = 0;
return rv1977; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R11 * p_R) { 
R13 * l_Y_1978; memset(&l_Y_1978, 0, sizeof l_Y_1978);
l_Y_1978 = r_NEW_SYM(g_Y_ROUTINE, ((*(R11 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_1979; memset(&l_S_1979, 0, sizeof l_S_1979);
l_S_1979 = rt_str_new((((*(R11 *)rt_nil_check(p_R))).f_NAME).f_LEN);
rt_b_assign(&l_S_1979, r_STR(((*(R11 *)rt_nil_check(p_R))).f_NAME, (((*(R11 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R13 *)rt_nil_check(l_Y_1978))).f_DECL = p_R;
S_R7(&((*(R13 *)rt_nil_check(l_Y_1978))).f_ACCESS, r_ROUTINE_CNAME(((*(R11 *)rt_nil_check(p_R))).f_NAME), 0);
((*(R13 *)rt_nil_check(l_Y_1978))).f_FRAMED = r_NEEDS_FRAME(((*(R11 *)rt_nil_check(p_R))).f_C);
if ((((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R7(&((*(R13 *)rt_nil_check(l_Y_1978))).f_FIELD, ((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_1978, ((*(R11 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it1981_lo = ((rt_int)1LL), it1981_hi = rt_sub((((*(R11 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it1981 = it1981_lo; it1981 <= it1981_hi; it1981++) {
{
if (rt_b_eq(rt_b_slice(l_S_1979, it1981, it1981), rt_str("$", 1)))
{
S_R7(&((*(R13 *)rt_nil_check(l_Y_1978))).f_PREFIX, r_MKN(rt_b_slice(l_S_1979, ((rt_int)0LL), rt_sub(it1981, ((rt_int)1LL)))), 0);
{
R13 * l_SHORT_1982; memset(&l_SHORT_1982, 0, sizeof l_SHORT_1982);
l_SHORT_1982 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_1979, rt_add(it1981, ((rt_int)1LL)), rt_sub((((*(R11 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R13 *)rt_nil_check(l_SHORT_1982))).f_ORIG = l_Y_1978;
S_R7(&((*(R13 *)rt_nil_check(l_SHORT_1982))).f_PREFIX, ((*(R13 *)rt_nil_check(l_Y_1978))).f_PREFIX, 0);
((*(R13 *)rt_nil_check(l_SHORT_1982))).f_DECL = p_R;
r_DEFINE(l_SHORT_1982, ((*(R11 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end1980;
}
}
} } L_end1980: ;
}
static void r_DECLARE_MEMBERS(R11 * p_RS) { 
R11 * l_R_1983; memset(&l_R_1983, 0, sizeof l_R_1983);
l_R_1983 = p_RS;
for (;;) {
if ((l_R_1983 == NULL)) goto L_end1984;
{
if ((((*(R11 *)rt_nil_check(l_R_1983))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_1983);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_1983);
}
l_R_1983 = ((*(R11 *)rt_nil_check(l_R_1983))).f_NEXT;
}
} L_end1984: ;
}
static void r_ROUTINE_HEADERS(R11 * p_RS) { 
R11 * l_R_1985; memset(&l_R_1985, 0, sizeof l_R_1985);
l_R_1985 = p_RS;
for (;;) {
if ((l_R_1985 == NULL)) goto L_end1986;
{
if ((((*(R11 *)rt_nil_check(l_R_1985))).f_KIND == g_N_MODULE))
{
{
R13 * l_M_1987; memset(&l_M_1987, 0, sizeof l_M_1987);
l_M_1987 = r_FIND_DECL(l_R_1985);
r_ENTER_MODULE(l_M_1987);
r_ROUTINE_HEADERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_1985))).f_C))).f_C);
r_LEAVE_MODULE(l_M_1987);
}
}
else
{
{
R13 * l_Y_1988; memset(&l_Y_1988, 0, sizeof l_Y_1988);
l_Y_1988 = r_FIND_DECL(l_R_1985);
r_ROUTINE_HEADER(l_Y_1988);
}
}
l_R_1985 = ((*(R11 *)rt_nil_check(l_R_1985))).f_NEXT;
}
} L_end1986: ;
}
static R13 * r_FIND_DECL(R11 * p_D) { 
R13 * l_Y_1989; memset(&l_Y_1989, 0, sizeof l_Y_1989);
l_Y_1989 = r_LOOKUP(((*(R11 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_1989 == NULL)) goto L_end1990;
{
if (((((*(R13 *)rt_nil_check(l_Y_1989))).f_DECL == p_D) && (((*(R13 *)rt_nil_check(l_Y_1989))).f_ORIG == NULL)))
{
{ R13 * rv1991 = l_Y_1989;
return rv1991; }
}
l_Y_1989 = r_LOOKUP_NEXT(l_Y_1989);
}
} L_end1990: ;
r_FAILT(((*(R11 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R11 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R11 * p_DECLS) { 
R11 * l_D_1992; memset(&l_D_1992, 0, sizeof l_D_1992);
l_D_1992 = p_DECLS;
for (;;) {
if ((l_D_1992 == NULL)) goto L_end1993;
{
if (((((*(R11 *)rt_nil_check(l_D_1992))).f_KIND == g_N_TYPE) && (((*(R11 *)rt_nil_check(l_D_1992))).f_A == NULL)))
{
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_D_1992))).f_B))).f_KIND == g_TS_ENUM))
{
{
R13 * l_Y_1994; memset(&l_Y_1994, 0, sizeof l_Y_1994);
l_Y_1994 = r_FIND_DECL(l_D_1992);
R14 * l_T_1995; memset(&l_T_1995, 0, sizeof l_T_1995);
l_T_1995 = r_RESOLVE_USER(r_TYPE_REF(l_D_1992));
}
}
}
l_D_1992 = ((*(R11 *)rt_nil_check(l_D_1992))).f_NEXT;
}
} L_end1993: ;
}
static R11 * r_TYPE_REF(R11 * p_D) { 
R11 * l_TS_1996; memset(&l_TS_1996, 0, sizeof l_TS_1996);
l_TS_1996 = r_NEW_NODE(g_TS_NAME, ((*(R11 *)rt_nil_check(p_D))).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_TS_1996))).f_NAME, ((*(R11 *)rt_nil_check(p_D))).f_NAME, 0);
{ R11 * rv1997 = l_TS_1996;
return rv1997; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R11 * p_M) { 
R13 * l_Y_1998; memset(&l_Y_1998, 0, sizeof l_Y_1998);
l_Y_1998 = r_NEW_SYM(g_Y_MODULE, ((*(R11 *)rt_nil_check(p_M))).f_NAME);
R13 * l_SAVED_1999; memset(&l_SAVED_1999, 0, sizeof l_SAVED_1999);
l_SAVED_1999 = ((*(R22 *)rt_nil_check(g_W))).f_MODL;
((*(R13 *)rt_nil_check(l_Y_1998))).f_DECL = p_M;
r_DEFINE(l_Y_1998, ((*(R11 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R13 * l_MARK_2000; memset(&l_MARK_2000, 0, sizeof l_MARK_2000);
l_MARK_2000 = ((*(R22 *)rt_nil_check(g_W))).f_SCOPE;
((*(R22 *)rt_nil_check(g_W))).f_MODL = l_Y_1998;
r_DECLARE_TYPES(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R13 *)rt_nil_check(l_Y_1998))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2000);
}
((*(R22 *)rt_nil_check(g_W))).f_MODL = l_SAVED_1999;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_1998);
}
static void r_ENTER_MODULE(R13 * p_M) { 
R13 * l_Y_2001; memset(&l_Y_2001, 0, sizeof l_Y_2001);
l_Y_2001 = ((*(R13 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_2001 == NULL)) goto L_end2002;
{
{
R13 * l_NEXT_2003; memset(&l_NEXT_2003, 0, sizeof l_NEXT_2003);
l_NEXT_2003 = ((*(R13 *)rt_nil_check(l_Y_2001))).f_SNEXT;
r_DEFINE(l_Y_2001, ((rt_int)0LL));
l_Y_2001 = l_NEXT_2003;
}
}
} L_end2002: ;
((*(R13 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R13 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R13 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R13 *)rt_nil_check(p_M))).f_SAVED = ((*(R22 *)rt_nil_check(g_W))).f_MODL;
((*(R22 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R13 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R13 * p_M) { 
R13 * l_MARK_2004; memset(&l_MARK_2004, 0, sizeof l_MARK_2004);
l_MARK_2004 = ((*(R22 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R22 *)rt_nil_check(g_W))).f_MODL = ((*(R13 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_2004 == NULL)) goto L_end2005;
{
if ((((*(R13 *)rt_nil_check(l_MARK_2004))).f_DEPTH < ((*(R22 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2005;
}
l_MARK_2004 = ((*(R13 *)rt_nil_check(l_MARK_2004))).f_SNEXT;
}
} L_end2005: ;
((*(R13 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_2004);
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
R11 * l_D_2006; memset(&l_D_2006, 0, sizeof l_D_2006);
l_D_2006 = ((*(R13 *)rt_nil_check(p_M))).f_DECL;
R13 * l_Y_2007; memset(&l_Y_2007, 0, sizeof l_Y_2007);
l_Y_2007 = ((*(R13 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2007 == NULL)) goto L_end2008;
{
if (r_EXPORTED_BY(l_D_2006, l_Y_2007))
{
((*(R13 *)rt_nil_check(l_Y_2007))).f_EXPORTED = 1;
{
R13 * l_A_2009; memset(&l_A_2009, 0, sizeof l_A_2009);
l_A_2009 = r_NEW_SYM(((*(R13 *)rt_nil_check(l_Y_2007))).f_KIND, ((*(R13 *)rt_nil_check(l_Y_2007))).f_NAME);
S_R13(&(*(R13 *)rt_nil_check(l_A_2009)), (*(R13 *)rt_nil_check(l_Y_2007)), 0);
((*(R13 *)rt_nil_check(l_A_2009))).f_ORIG = r_ORIGINAL(l_Y_2007);
((*(R13 *)rt_nil_check(l_A_2009))).f_DEPTH = ((*(R22 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_2009, ((*(R11 *)rt_nil_check(l_D_2006))).f_LINE);
}
}
l_Y_2007 = ((*(R13 *)rt_nil_check(l_Y_2007))).f_SNEXT;
}
} L_end2008: ;
{
R11 * l_X_2010; memset(&l_X_2010, 0, sizeof l_X_2010);
l_X_2010 = ((*(R11 *)rt_nil_check(l_D_2006))).f_B;
for (;;) {
if ((l_X_2010 == NULL)) goto L_end2011;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R11 *)rt_nil_check(l_X_2010))).f_NAME)))
{
r_FAILT(((*(R11 *)rt_nil_check(l_X_2010))).f_LINE, rt_str("the module does not declare ", 28), ((*(R11 *)rt_nil_check(l_X_2010))).f_NAME);
}
l_X_2010 = ((*(R11 *)rt_nil_check(l_X_2010))).f_NEXT;
}
} L_end2011: ;
}
}
static rt_int r_MEMBER_NAMED(R13 * p_M, R7 p_NAME) { 
R13 * l_Y_2012; memset(&l_Y_2012, 0, sizeof l_Y_2012);
l_Y_2012 = ((*(R13 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_2012 == NULL)) goto L_end2013;
{
if ((r_TEQ(((*(R13 *)rt_nil_check(l_Y_2012))).f_NAME, p_NAME) || r_TEQ(((*(R13 *)rt_nil_check(l_Y_2012))).f_PREFIX, p_NAME)))
{
{ rt_int rv2014 = 1;
return rv2014; }
}
l_Y_2012 = ((*(R13 *)rt_nil_check(l_Y_2012))).f_SNEXT;
}
} L_end2013: ;
{ rt_int rv2015 = 0;
return rv2015; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R11 * p_D, R13 * p_Y) { 
R11 * l_X_2016; memset(&l_X_2016, 0, sizeof l_X_2016);
l_X_2016 = ((*(R11 *)rt_nil_check(p_D))).f_B;
if ((((((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv2017 = 0;
return rv2017; }
}
if ((((*(R11 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv2018 = ((((((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv2018; }
}
for (;;) {
if ((l_X_2016 == NULL)) goto L_end2019;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_X_2016))).f_NAME, ((*(R13 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2020 = 1;
return rv2020; }
}
if (((((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R11 *)rt_nil_check(l_X_2016))).f_NAME, ((*(R13 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R11 *)rt_nil_check(l_X_2016))).f_A == NULL))
{
{ rt_int rv2021 = 1;
return rv2021; }
}
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(l_X_2016))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv2022 = 1;
return rv2022; }
}
}
if ((((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R13 * l_T_2023; memset(&l_T_2023, 0, sizeof l_T_2023);
l_T_2023 = r_ORIG_LOOKUP_MEMBER(((*(R11 *)rt_nil_check(l_X_2016))).f_NAME, p_Y);
if ((!(l_T_2023 == NULL)))
{
{ rt_int rv2024 = 1;
return rv2024; }
}
}
}
l_X_2016 = ((*(R11 *)rt_nil_check(l_X_2016))).f_NEXT;
}
} L_end2019: ;
{ rt_int rv2025 = 0;
return rv2025; }
rt_raise(RT_X_INIT);
}
static R13 * r_ORIG_LOOKUP_MEMBER(R7 p_NAME, R13 * p_Y) { 
R13 * l_M_2026; memset(&l_M_2026, 0, sizeof l_M_2026);
l_M_2026 = ((*(R13 *)rt_nil_check(p_Y))).f_MODL;
R13 * l_Z_2027; memset(&l_Z_2027, 0, sizeof l_Z_2027);
if ((l_M_2026 == NULL))
{
{ R13 * rv2028 = NULL;
return rv2028; }
}
l_Z_2027 = ((*(R13 *)rt_nil_check(l_M_2026))).f_MEMBERS;
for (;;) {
if ((l_Z_2027 == NULL)) goto L_end2029;
{
if (((((*(R13 *)rt_nil_check(l_Z_2027))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R13 *)rt_nil_check(l_Z_2027))).f_NAME, p_NAME)))
{
if ((!(((*(R13 *)rt_nil_check(l_Z_2027))).f_T == NULL)))
{
if ((((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Z_2027))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Z_2027))).f_T))).f_BASE == ((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R13 * rv2030 = l_Z_2027;
return rv2030; }
}
}
}
}
l_Z_2027 = ((*(R13 *)rt_nil_check(l_Z_2027))).f_SNEXT;
}
} L_end2029: ;
{ R13 * rv2031 = NULL;
return rv2031; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R11 * p_RS) { 
R11 * l_R_2032; memset(&l_R_2032, 0, sizeof l_R_2032);
l_R_2032 = p_RS;
for (;;) {
if ((l_R_2032 == NULL)) goto L_end2033;
{
if ((((*(R11 *)rt_nil_check(l_R_2032))).f_KIND == g_N_MODULE))
{
{
R13 * l_M_2034; memset(&l_M_2034, 0, sizeof l_M_2034);
l_M_2034 = r_FIND_DECL(l_R_2032);
R11 * l_D_2035; memset(&l_D_2035, 0, sizeof l_D_2035);
l_D_2035 = ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_2032))).f_C))).f_A;
r_ENTER_MODULE(l_M_2034);
for (;;) {
if ((l_D_2035 == NULL)) goto L_end2036;
{
if (((((*(R11 *)rt_nil_check(l_D_2035))).f_KIND == g_N_VAR) || (((*(R11 *)rt_nil_check(l_D_2035))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2035);
}
l_D_2035 = ((*(R11 *)rt_nil_check(l_D_2035))).f_NEXT;
}
} L_end2036: ;
r_MODULE_DATA(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_2032))).f_C))).f_C);
r_ROUTINE_USES(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_2032))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2034);
}
}
l_R_2032 = ((*(R11 *)rt_nil_check(l_R_2032))).f_NEXT;
}
} L_end2033: ;
}
static void r_ROUTINE_BODIES(R11 * p_RS) { 
R11 * l_R_2037; memset(&l_R_2037, 0, sizeof l_R_2037);
l_R_2037 = p_RS;
for (;;) {
if ((l_R_2037 == NULL)) goto L_end2038;
{
if ((((*(R11 *)rt_nil_check(l_R_2037))).f_KIND == g_N_MODULE))
{
{
R13 * l_M_2039; memset(&l_M_2039, 0, sizeof l_M_2039);
l_M_2039 = r_FIND_DECL(l_R_2037);
r_ENTER_MODULE(l_M_2039);
r_ROUTINE_BODIES(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_2037))).f_C))).f_C);
r_LEAVE_MODULE(l_M_2039);
}
}
else
{
{
R13 * l_Y_2040; memset(&l_Y_2040, 0, sizeof l_Y_2040);
l_Y_2040 = r_FIND_DECL(l_R_2037);
if ((!((*(R13 *)rt_nil_check(l_Y_2040))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_2040);
}
}
}
l_R_2037 = ((*(R11 *)rt_nil_check(l_R_2037))).f_NEXT;
}
} L_end2038: ;
}
static void r_PENDING_BODIES(void) { 
rt_int l_LEVEL_2041; memset(&l_LEVEL_2041, 0, sizeof l_LEVEL_2041);
l_LEVEL_2041 = r_CUR_LEVEL();
rt_int l_MORE_2042; memset(&l_MORE_2042, 0, sizeof l_MORE_2042);
l_MORE_2042 = 1;
for (;;) {
if ((!l_MORE_2042)) goto L_end2043;
{
l_MORE_2042 = 0;
{
R13 * l_P_2044; memset(&l_P_2044, 0, sizeof l_P_2044);
l_P_2044 = ((*(R22 *)rt_nil_check(g_W))).f_PENDING;
R13 * l_PREV_2045; memset(&l_PREV_2045, 0, sizeof l_PREV_2045);
l_PREV_2045 = NULL;
for (;;) {
if ((l_P_2044 == NULL)) goto L_end2046;
{
if ((((*(R13 *)rt_nil_check(l_P_2044))).f_LEVEL == l_LEVEL_2041))
{
if ((l_PREV_2045 == NULL))
{
((*(R22 *)rt_nil_check(g_W))).f_PENDING = ((*(R13 *)rt_nil_check(l_P_2044))).f_MEMBERS;
}
else
{
((*(R13 *)rt_nil_check(l_PREV_2045))).f_MEMBERS = ((*(R13 *)rt_nil_check(l_P_2044))).f_MEMBERS;
}
r_ENTER_MODULE_OF(l_P_2044);
r_ROUTINE_BODY(l_P_2044);
r_LEAVE_MODULE_OF(l_P_2044);
l_MORE_2042 = 1;
goto L_end2046;
}
l_PREV_2045 = l_P_2044;
l_P_2044 = ((*(R13 *)rt_nil_check(l_P_2044))).f_MEMBERS;
}
} L_end2046: ;
}
}
} L_end2043: ;
}
static void r_CLOSED_BODY(R11 * p_B) { 
R11 * l_D_2047; memset(&l_D_2047, 0, sizeof l_D_2047);
l_D_2047 = ((*(R11 *)rt_nil_check(p_B))).f_A;
R11 * l_S_2048; memset(&l_S_2048, 0, sizeof l_S_2048);
l_S_2048 = ((*(R11 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R11 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R11 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R11 *)rt_nil_check(p_B))).f_A);
r_ROUTINE_HEADERS(((*(R11 *)rt_nil_check(p_B))).f_C);
for (;;) {
if ((l_D_2047 == NULL)) goto L_end2049;
{
if (((((*(R11 *)rt_nil_check(l_D_2047))).f_KIND == g_N_VAR) || (((*(R11 *)rt_nil_check(l_D_2047))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2047);
}
l_D_2047 = ((*(R11 *)rt_nil_check(l_D_2047))).f_NEXT;
}
} L_end2049: ;
r_MODULE_DATA(((*(R11 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R11 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R11 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2048 == NULL)) goto L_end2050;
{
r_STMT(l_S_2048);
l_S_2048 = ((*(R11 *)rt_nil_check(l_S_2048))).f_NEXT;
}
} L_end2050: ;
r_ROUTINE_BODIES(((*(R11 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R13 * p_Y) { 
R11 * l_R_2051; memset(&l_R_2051, 0, sizeof l_R_2051);
l_R_2051 = ((*(R13 *)rt_nil_check(p_Y))).f_DECL;
R8 l_SAVED_CODE_2052; memset(&l_SAVED_CODE_2052, 0, sizeof l_SAVED_CODE_2052);
S_R8(&l_SAVED_CODE_2052, ((*(R22 *)rt_nil_check(g_W))).f_CODE, 0);
R21 * l_SAVED_CTXS_2053; memset(&l_SAVED_CTXS_2053, 0, sizeof l_SAVED_CTXS_2053);
l_SAVED_CTXS_2053 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
R16 * l_SAVED_BINDS_2054; memset(&l_SAVED_BINDS_2054, 0, sizeof l_SAVED_BINDS_2054);
l_SAVED_BINDS_2054 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
R27 * l_OUTER_2055; memset(&l_OUTER_2055, 0, sizeof l_OUTER_2055);
l_OUTER_2055 = ((*(R22 *)rt_nil_check(g_W))).f_CS;
R27 * l_CS_2056; memset(&l_CS_2056, 0, sizeof l_CS_2056);
l_CS_2056 = ((R27 *)rt_alloc(sizeof (R27)));
R7 l_PROLOGUE_2057; memset(&l_PROLOGUE_2057, 0, sizeof l_PROLOGUE_2057);
S_R7(&l_PROLOGUE_2057, r_MK(rt_str("", 0)), 0);
S_R27(&(*(R27 *)rt_nil_check(l_CS_2056)), ({ R27 rc2058; memset(&rc2058, 0, sizeof rc2058);  rc2058.f_LEVEL = rt_add(((*(R13 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc2058.f_R = p_Y; rc2058.f_FRAMED = ((*(R13 *)rt_nil_check(p_Y))).f_FRAMED; S_R7(&rc2058.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R13 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R8(&rc2058.f_FIELDS, ({ R8 rc2059; memset(&rc2059, 0, sizeof rc2059);  rc2059.f_HEAD = NULL; rc2059.f_TAIL = NULL; rc2059; }), 0); rc2058.f_UP = l_OUTER_2055; rc2058.f_IMPORTS = ((*(R11 *)rt_nil_check(l_R_2051))).f_E; rc2058.f_SIGNALS = ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_2051))).f_D))).f_A; rc2058.f_RESULT = ((*(R13 *)rt_nil_check(p_Y))).f_RESULT; rc2058.f_IS_PATH = 0; rc2058; }), 0);
if (((*(R13 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R27 *)rt_nil_check(l_CS_2056))).f_FTYPE, ((*(R27 *)rt_nil_check(l_CS_2056))).f_FTYPE));
if ((((*(R13 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R13 *)rt_nil_check(p_Y))).f_FIELD), &((*(R27 *)rt_nil_check(l_CS_2056))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R27 *)rt_nil_check(l_CS_2056))).f_FIELDS);
}
S_R7(&l_PROLOGUE_2057, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R27 *)rt_nil_check(l_CS_2056))).f_FTYPE, ((*(R27 *)rt_nil_check(l_CS_2056))).f_FTYPE), 0);
if ((((*(R13 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R7(&l_PROLOGUE_2057, r_CATS(l_PROLOGUE_2057, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R22 *)rt_nil_check(g_W))).f_CS = l_CS_2056;
S_R8(&((*(R22 *)rt_nil_check(g_W))).f_CODE, ({ R8 rc2060; memset(&rc2060, 0, sizeof rc2060);  rc2060.f_HEAD = NULL; rc2060.f_TAIL = NULL; rc2060; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R22 *)rt_nil_check(g_W))).f_BINDS = ((*(R13 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R11 *)rt_nil_check(l_R_2051))).f_E, ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_2051))).f_D))).f_A, ((*(R13 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R13 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R11 *)rt_nil_check(l_R_2051))).f_LINE);
{
R20 * l_P_2061; memset(&l_P_2061, 0, sizeof l_P_2061);
l_P_2061 = ((*(R13 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2061 == NULL)) goto L_end2062;
{
if ((!(((*(R20 *)rt_nil_check(l_P_2061))).f_T == NULL)))
{
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R20 *)rt_nil_check(l_P_2061))).f_T)))).f_KIND == g_T_VOID)))
{
{
R13 * l_V_2063; memset(&l_V_2063, 0, sizeof l_V_2063);
l_V_2063 = r_NEW_SYM(g_Y_VAR, ((*(R20 *)rt_nil_check(l_P_2061))).f_NAME);
((*(R13 *)rt_nil_check(l_V_2063))).f_T = ((*(R20 *)rt_nil_check(l_P_2061))).f_T;
((*(R13 *)rt_nil_check(l_V_2063))).f_INPUT = (((*(R20 *)rt_nil_check(l_P_2061))).f_MODE == g_M_IN);
((*(R13 *)rt_nil_check(l_V_2063))).f_BYREF = (!(((*(R20 *)rt_nil_check(l_P_2061))).f_MODE == g_M_IN));
S_R7(&((*(R13 *)rt_nil_check(l_V_2063))).f_FIELD, r_FMT1(rt_str("p_@", 3), ((*(R20 *)rt_nil_check(l_P_2061))).f_NAME), 0);
if (((*(R13 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R13 *)rt_nil_check(l_V_2063))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R20 *)rt_nil_check(l_P_2061))).f_T), ((*(R20 *)rt_nil_check(l_P_2061))).f_NAME), &((*(R27 *)rt_nil_check(l_CS_2056))).f_FIELDS);
S_R7(&((*(R13 *)rt_nil_check(l_V_2063))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), ((*(R20 *)rt_nil_check(l_P_2061))).f_NAME), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R20 *)rt_nil_check(l_P_2061))).f_T), ((*(R20 *)rt_nil_check(l_P_2061))).f_NAME), &((*(R27 *)rt_nil_check(l_CS_2056))).f_FIELDS);
S_R7(&((*(R13 *)rt_nil_check(l_V_2063))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), ((*(R20 *)rt_nil_check(l_P_2061))).f_NAME), 0);
}
S_R7(&l_PROLOGUE_2057, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_2057, ((*(R20 *)rt_nil_check(l_P_2061))).f_NAME, ((*(R20 *)rt_nil_check(l_P_2061))).f_NAME), 0);
}
else if (((*(R13 *)rt_nil_check(l_V_2063))).f_BYREF)
{
S_R7(&((*(R13 *)rt_nil_check(l_V_2063))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), ((*(R20 *)rt_nil_check(l_P_2061))).f_NAME), 0);
}
else
{
S_R7(&((*(R13 *)rt_nil_check(l_V_2063))).f_ACCESS, r_FMT1(rt_str("p_@", 3), ((*(R20 *)rt_nil_check(l_P_2061))).f_NAME), 0);
}
r_DEFINE(l_V_2063, ((*(R11 *)rt_nil_check(l_R_2051))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R20 *)rt_nil_check(l_P_2061))).f_T, ((*(R13 *)rt_nil_check(l_V_2063))).f_ACCESS, ((*(R11 *)rt_nil_check(l_R_2051))).f_LINE, 1);
}
}
}
l_P_2061 = ((*(R20 *)rt_nil_check(l_P_2061))).f_NEXT;
}
} L_end2062: ;
}
if ((((*(R11 *)rt_nil_check(l_R_2051))).f_FL >= ((rt_int)2LL)))
{
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R11 *)rt_nil_check(l_R_2051))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R11 *)rt_nil_check(l_R_2051))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R13 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R27 *)rt_nil_check(l_CS_2056))).f_FTYPE, r_JOIN_BUF(((*(R27 *)rt_nil_check(l_CS_2056))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { @", 5), ((*(R13 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_2057));
r_APPEND_BUF(((*(R22 *)rt_nil_check(g_W))).f_CODE, &(((*(R22 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R22 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R22 *)rt_nil_check(g_W))).f_CS = l_OUTER_2055;
S_R8(&((*(R22 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2052, 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_2053;
((*(R22 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_2054;
}
static void r_BIND_INSTANCE(R16 * p_BS, rt_int p_LINE) { 
R16 * l_B_2064; memset(&l_B_2064, 0, sizeof l_B_2064);
l_B_2064 = p_BS;
for (;;) {
if ((l_B_2064 == NULL)) goto L_end2065;
{
if ((!(((*(R16 *)rt_nil_check(l_B_2064))).f_T == NULL)))
{
{
R13 * l_Y_2066; memset(&l_Y_2066, 0, sizeof l_Y_2066);
l_Y_2066 = r_NEW_SYM(g_Y_TYPE, ((*(R16 *)rt_nil_check(l_B_2064))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_2066))).f_T = ((*(R16 *)rt_nil_check(l_B_2064))).f_T;
r_DEFINE(l_Y_2066, p_LINE);
}
}
else if (((*(R16 *)rt_nil_check(l_B_2064))).f_HASMV)
{
{
R13 * l_Y_2067; memset(&l_Y_2067, 0, sizeof l_Y_2067);
l_Y_2067 = r_NEW_SYM(g_Y_GEN, ((*(R16 *)rt_nil_check(l_B_2064))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_2067))).f_T = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
((*(R13 *)rt_nil_check(l_Y_2067))).f_HASMV = 1;
((*(R13 *)rt_nil_check(l_Y_2067))).f_MV = ((*(R16 *)rt_nil_check(l_B_2064))).f_MV;
S_R7(&((*(R13 *)rt_nil_check(l_Y_2067))).f_ACCESS, ((*(R16 *)rt_nil_check(l_B_2064))).f_C, 0);
((*(R13 *)rt_nil_check(l_Y_2067))).f_INPUT = 1;
r_DEFINE(l_Y_2067, p_LINE);
}
}
l_B_2064 = ((*(R16 *)rt_nil_check(l_B_2064))).f_NEXT;
}
} L_end2065: ;
}
static void r_APPEND_BUF(R8 p_SRC, R8 *p_DST) { 
R9 * l_C_2068; memset(&l_C_2068, 0, sizeof l_C_2068);
l_C_2068 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_2068 == NULL)) goto L_end2069;
{
r_APPEND(((*(R9 *)rt_nil_check(l_C_2068))).f_T, &(*p_DST));
l_C_2068 = ((*(R9 *)rt_nil_check(l_C_2068))).f_NEXT;
}
} L_end2069: ;
}
static rt_int r_USES_SEGMENT(R11 * p_S, rstr p_NAME) { 
R11 * l_U_2070; memset(&l_U_2070, 0, sizeof l_U_2070);
l_U_2070 = ((*(R11 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_2070 == NULL)) goto L_end2071;
{
if (r_TEQS(((*(R11 *)rt_nil_check(l_U_2070))).f_NAME, p_NAME))
{
{ rt_int rv2072 = 1;
return rv2072; }
}
l_U_2070 = ((*(R11 *)rt_nil_check(l_U_2070))).f_NEXT;
}
} L_end2071: ;
{ rt_int rv2073 = 0;
return rv2073; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R11 * p_SEGS) { 
R11 * l_S_2074; memset(&l_S_2074, 0, sizeof l_S_2074);
l_S_2074 = p_SEGS;
rt_int l_MAINS_2075; memset(&l_MAINS_2075, 0, sizeof l_MAINS_2075);
l_MAINS_2075 = ((rt_int)0LL);
R27 * l_ROOT_2076; memset(&l_ROOT_2076, 0, sizeof l_ROOT_2076);
l_ROOT_2076 = ((R27 *)rt_alloc(sizeof (R27)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R27(&(*(R27 *)rt_nil_check(l_ROOT_2076)), ({ R27 rc2077; memset(&rc2077, 0, sizeof rc2077);  rc2077.f_LEVEL = ((rt_int)0LL); rc2077.f_R = NULL; rc2077.f_FRAMED = 0; S_R7(&rc2077.f_FTYPE, r_NO_TEXT(), 0); S_R8(&rc2077.f_FIELDS, ({ R8 rc2078; memset(&rc2078, 0, sizeof rc2078);  rc2078.f_HEAD = NULL; rc2078.f_TAIL = NULL; rc2078; }), 0); rc2077.f_UP = NULL; rc2077.f_IMPORTS = NULL; rc2077.f_SIGNALS = NULL; rc2077.f_RESULT = NULL; rc2077.f_IS_PATH = 0; rc2077; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_CS = l_ROOT_2076;
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
S_R8(&((*(R22 *)rt_nil_check(g_W))).f_CODE, ({ R8 rc2079; memset(&rc2079, 0, sizeof rc2079);  rc2079.f_HEAD = NULL; rc2079.f_TAIL = NULL; rc2079; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
if ((l_S_2074 == NULL)) goto L_end2080;
{
l_MAINS_2075 = rt_add(l_MAINS_2075, ((*(R11 *)rt_nil_check(l_S_2074))).f_IV);
if (((((*(R11 *)rt_nil_check(l_S_2074))).f_IV == ((rt_int)0LL)) && (!(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_S_2074))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R11 *)rt_nil_check(l_S_2074))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
if (r_USES_SEGMENT(l_S_2074, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
r_CLOSED_BODY(((*(R11 *)rt_nil_check(l_S_2074))).f_B);
r_SEGMENT_EXPORTS(l_S_2074);
l_S_2074 = ((*(R11 *)rt_nil_check(l_S_2074))).f_NEXT;
}
} L_end2080: ;
if ((!(l_MAINS_2075 == ((rt_int)1LL))))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R11 * l_X_2081; memset(&l_X_2081, 0, sizeof l_X_2081);
l_X_2081 = ((*(R22 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_2081 == NULL)) goto L_end2082;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), ((*(R11 *)rt_nil_check(l_X_2081))).f_NAME));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), ((*(R11 *)rt_nil_check(l_X_2081))).f_NAME, r_CSTRING(((*(R11 *)rt_nil_check(l_X_2081))).f_NAME)));
l_X_2081 = ((*(R11 *)rt_nil_check(l_X_2081))).f_NEXT;
}
} L_end2082: ;
}
r_APPEND_BUF(((*(R22 *)rt_nil_check(g_W))).f_CODE, &(((*(R22 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R22 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static void r_SEGMENT_EXPORTS(R11 * p_S) { 
R13 * l_MARK_2083; memset(&l_MARK_2083, 0, sizeof l_MARK_2083);
l_MARK_2083 = ((*(R22 *)rt_nil_check(g_W))).f_SCOPE;
R13 * l_TAKEN_2084; memset(&l_TAKEN_2084, 0, sizeof l_TAKEN_2084);
for (;;) {
if ((l_MARK_2083 == NULL)) goto L_end2085;
{
if ((((*(R13 *)rt_nil_check(l_MARK_2083))).f_DEPTH < ((*(R22 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end2085;
}
l_MARK_2083 = ((*(R13 *)rt_nil_check(l_MARK_2083))).f_SNEXT;
}
} L_end2085: ;
l_TAKEN_2084 = r_TAKE_SCOPE(l_MARK_2083);
((*(R22 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((l_TAKEN_2084 == NULL)) goto L_end2086;
{
{
R13 * l_NEXT_2087; memset(&l_NEXT_2087, 0, sizeof l_NEXT_2087);
l_NEXT_2087 = ((*(R13 *)rt_nil_check(l_TAKEN_2084))).f_SNEXT;
if (((((((*(R11 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R11 *)rt_nil_check(p_S))).f_C, ((*(R13 *)rt_nil_check(l_TAKEN_2084))).f_NAME)) || r_IN_IDENTS(((*(R11 *)rt_nil_check(p_S))).f_C, ((*(R13 *)rt_nil_check(l_TAKEN_2084))).f_PREFIX)) || (((*(R13 *)rt_nil_check(l_TAKEN_2084))).f_KIND == g_Y_ENUMLIT)))
{
r_DEFINE(l_TAKEN_2084, ((*(R11 *)rt_nil_check(p_S))).f_LINE);
}
l_TAKEN_2084 = l_NEXT_2087;
}
}
} L_end2086: ;
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
