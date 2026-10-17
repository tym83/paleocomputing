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
static R13 * r_NEW_INSTANCE(R13 * p_G, R16 * p_BS);
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
if ((!r_TEQS(((*(R11 *)rt_nil_check(l_P_394))).f_NAME, rt_str("STD", 3))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("only STD precision is predefined (3.2.1)", 40));
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
R11 * l_D_412; memset(&l_D_412, 0, sizeof l_D_412);
l_D_412 = ((*(R13 *)rt_nil_check(l_Y_411))).f_DECL;
R14 * l_T_413; memset(&l_T_413, 0, sizeof l_T_413);
if ((((*(R11 *)rt_nil_check(l_D_412))).f_A == NULL))
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
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_D_412))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R13 *)rt_nil_check(l_Y_411))).f_T = r_RESOLVE_RECORD(((*(R11 *)rt_nil_check(l_D_412))).f_B, r_RECORD_NAME(l_Y_411), l_Y_411, NULL);
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
l_T_413 = ((*(R13 *)rt_nil_check(l_Y_411))).f_T;
}
else
{
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_D_412))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_413 = r_RECORD_INSTANCE(l_Y_411, p_TS);
}
else
{
l_T_413 = r_RESOLVE_IN_DECL(l_Y_411, p_TS);
}
}
return r_ABSTRACT_VIEW(l_Y_411, l_T_413);
}
rt_raise(RT_X_INIT);
}
static R14 * r_ABSTRACT_VIEW(R13 * p_Y, R14 * p_T) { 
R14 * l_A_414; memset(&l_A_414, 0, sizeof l_A_414);
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
l_A_414 = r_NEW_TYP(g_T_ABS);
((*(R14 *)rt_nil_check(l_A_414))).f_BASE = p_T;
S_R7(&((*(R14 *)rt_nil_check(l_A_414))).f_NAME, ((*(R13 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R14 *)rt_nil_check(l_A_414))).f_MODL = ((*(R13 *)rt_nil_check(p_Y))).f_MODL;
((*(R14 *)rt_nil_check(l_A_414))).f_DECL = p_Y;
((*(R14 *)rt_nil_check(l_A_414))).f_ARGS = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
return l_A_414;
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R13 * p_M) { 
R13 * l_P_415; memset(&l_P_415, 0, sizeof l_P_415);
l_P_415 = ((*(R22 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_415 == NULL)) goto L_end416;
{
if ((l_P_415 == p_M))
{
return 1;
}
l_P_415 = ((*(R13 *)rt_nil_check(l_P_415))).f_MODL;
}
} L_end416: ;
return 0;
rt_raise(RT_X_INIT);
}
static R14 * r_RESOLVE_IN_DECL(R13 * p_Y, R11 * p_TS) { 
R11 * l_D_417; memset(&l_D_417, 0, sizeof l_D_417);
l_D_417 = ((*(R13 *)rt_nil_check(p_Y))).f_DECL;
R14 * l_T_418; memset(&l_T_418, 0, sizeof l_T_418);
if ((p_TS == NULL))
{
return r_RESOLVE(((*(R11 *)rt_nil_check(l_D_417))).f_B);
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R11 *)rt_nil_check(l_D_417))).f_A, p_TS);
l_T_418 = r_RESOLVE(((*(R11 *)rt_nil_check(l_D_417))).f_B);
r_CLOSE_SCOPE();
return l_T_418;
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R11 * p_FORMALS, R11 * p_TS) { 
R11 * l_F_419; memset(&l_F_419, 0, sizeof l_F_419);
l_F_419 = p_FORMALS;
R11 * l_A_420; memset(&l_A_420, 0, sizeof l_A_420);
l_A_420 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_419 == NULL)) goto L_end421;
{
{
R11 * l_N_422; memset(&l_N_422, 0, sizeof l_N_422);
l_N_422 = ((*(R11 *)rt_nil_check(l_F_419))).f_A;
for (;;) {
if ((l_N_422 == NULL)) goto L_end423;
{
if ((l_A_420 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R11 *)rt_nil_check(l_F_419))).f_B == NULL))
{
{
R13 * l_Y_424; memset(&l_Y_424, 0, sizeof l_Y_424);
l_Y_424 = r_NEW_SYM(g_Y_TYPE, ((*(R11 *)rt_nil_check(l_N_422))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_424))).f_T = r_ARG_TYPE(l_A_420);
r_DEFINE(l_Y_424, ((*(R11 *)rt_nil_check(l_A_420))).f_LINE);
}
}
else
{
{
R13 * l_Y_425; memset(&l_Y_425, 0, sizeof l_Y_425);
l_Y_425 = r_NEW_SYM(g_Y_CONST, ((*(R11 *)rt_nil_check(l_N_422))).f_NAME);
R7 l_C_426; memset(&l_C_426, 0, sizeof l_C_426);
R12 l_M_427; memset(&l_M_427, 0, sizeof l_M_427);
((*(R13 *)rt_nil_check(l_Y_425))).f_T = r_RESOLVE(((*(R11 *)rt_nil_check(l_F_419))).f_B);
if ((((*(R11 *)rt_nil_check(l_A_420))).f_KIND == g_N_ANY))
{
r_FAIL(((*(R11 *)rt_nil_check(l_A_420))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
r_ATTR_VALUE(l_A_420, &l_C_426, &l_M_427);
if ((!(((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_425))).f_T))).f_KIND == g_T_INT)))
{
S_R7(&l_C_426, (r_EXPR(l_A_420, ((*(R13 *)rt_nil_check(l_Y_425))).f_T)).f_C, 0);
S_R12(&l_M_427, r_ENUM_MANIFEST(l_A_420, ((*(R13 *)rt_nil_check(l_Y_425))).f_T), 0);
}
S_R7(&((*(R13 *)rt_nil_check(l_Y_425))).f_ACCESS, l_C_426, 0);
((*(R13 *)rt_nil_check(l_Y_425))).f_HASMV = (l_M_427).f_OK;
((*(R13 *)rt_nil_check(l_Y_425))).f_MV = (l_M_427).f_V;
((*(R13 *)rt_nil_check(l_Y_425))).f_INPUT = 1;
r_DEFINE(l_Y_425, ((*(R11 *)rt_nil_check(l_A_420))).f_LINE);
}
}
l_A_420 = ((*(R11 *)rt_nil_check(l_A_420))).f_NEXT;
l_N_422 = ((*(R11 *)rt_nil_check(l_N_422))).f_NEXT;
}
} L_end423: ;
}
l_F_419 = ((*(R11 *)rt_nil_check(l_F_419))).f_NEXT;
}
} L_end421: ;
if ((!(l_A_420 == NULL)))
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
rt_int l_K_428; memset(&l_K_428, 0, sizeof l_K_428);
l_K_428 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
return r_MK(rt_str("rt_int", 6));
}
else if ((l_K_428 == g_T_FLOAT))
{
return r_MK(rt_str("double", 6));
}
else if (((l_K_428 == g_T_STR) || (l_K_428 == g_T_BITS)))
{
return r_MK(rt_str("rstr", 4));
}
else if (((l_K_428 == g_T_REC) || (l_K_428 == g_T_ARR)))
{
return ((*(R14 *)rt_nil_check(p_T))).f_CNAME;
}
else if ((l_K_428 == g_T_ABS))
{
return r_CTYPE(((*(R14 *)rt_nil_check(p_T))).f_BASE);
}
else if ((l_K_428 == g_T_SEM))
{
return r_MK(rt_str("rt_b_sem *", 10));
}
else if ((l_K_428 == g_T_PATHS))
{
return r_MK(rt_str("rt_b_paths", 10));
}
else if ((l_K_428 == g_T_VOID))
{
return r_MK(rt_str("void", 4));
}
else if ((l_K_428 == g_T_PTR))
{
if ((((*(R14 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R11 * l_TT_429; memset(&l_TT_429, 0, sizeof l_TT_429);
l_TT_429 = ((*(R14 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R11 *)rt_nil_check(l_TT_429))).f_KIND == g_TS_NAME) && (((*(R11 *)rt_nil_check(l_TT_429))).f_A == NULL)))
{
{
R13 * l_Y_430; memset(&l_Y_430, 0, sizeof l_Y_430);
l_Y_430 = r_ORIG_LOOKUP(((*(R11 *)rt_nil_check(l_TT_429))).f_NAME);
if ((!(l_Y_430 == NULL)))
{
if (((((*(R13 *)rt_nil_check(l_Y_430))).f_KIND == g_Y_TYPE) && (!(((*(R13 *)rt_nil_check(l_Y_430))).f_DECL == NULL))))
{
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_430))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_430))).f_DECL))).f_A == NULL)))
{
return r_CATS(r_RECORD_NAME(l_Y_430), rt_str(" *", 2));
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
static R15 * r_NEW_FIELD(R7 p_NAME, R14 * p_T, rt_int p_KIND) { 
R15 * l_F_431; memset(&l_F_431, 0, sizeof l_F_431);
l_F_431 = ((R15 *)rt_alloc(sizeof (R15)));
S_R15(&(*(R15 *)rt_nil_check(l_F_431)), ({ R15 rc432; memset(&rc432, 0, sizeof rc432);  S_R7(&rc432.f_NAME, p_NAME, 0); S_R7(&rc432.f_CNAME, r_FMT1(rt_str("f_@", 3), p_NAME), 0); rc432.f_T = p_T; rc432.f_KIND = p_KIND; S_R7(&rc432.f_TAGF, r_NO_TEXT(), 0); rc432.f_LABELS = NULL; rc432.f_NEXT = NULL; rc432; }), 0);
return l_F_431;
rt_raise(RT_X_INIT);
}
static R15 * r_FIND_FIELD(R14 * p_T, R7 p_NAME) { 
R15 * l_F_433; memset(&l_F_433, 0, sizeof l_F_433);
l_F_433 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_433 == NULL)) goto L_end434;
{
if (r_TEQ(((*(R15 *)rt_nil_check(l_F_433))).f_NAME, p_NAME))
{
return l_F_433;
}
l_F_433 = ((*(R15 *)rt_nil_check(l_F_433))).f_NEXT;
}
} L_end434: ;
return NULL;
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R14 * p_T, R15 * p_F, R15 * *p_TAIL) { 
R15 * l_P_435; memset(&l_P_435, 0, sizeof l_P_435);
l_P_435 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_436; memset(&l_N_436, 0, sizeof l_N_436);
l_N_436 = ((rt_int)0LL);
for (;;) {
if ((l_P_435 == NULL)) goto L_end437;
{
if (r_TEQ(((*(R15 *)rt_nil_check(l_P_435))).f_NAME, ((*(R15 *)rt_nil_check(p_F))).f_NAME))
{
l_N_436 = rt_add(l_N_436, ((rt_int)1LL));
}
l_P_435 = ((*(R15 *)rt_nil_check(l_P_435))).f_NEXT;
}
} L_end437: ;
if ((l_N_436 > ((rt_int)0LL)))
{
S_R7(&((*(R15 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R15 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_436)), 0);
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
R11 * l_D_438; memset(&l_D_438, 0, sizeof l_D_438);
l_D_438 = p_DECLS;
for (;;) {
if ((l_D_438 == NULL)) goto L_end439;
{
if ((((*(R11 *)rt_nil_check(l_D_438))).f_KIND == g_N_VAR))
{
{
R14 * l_FT_440; memset(&l_FT_440, 0, sizeof l_FT_440);
l_FT_440 = r_RESOLVE(((*(R11 *)rt_nil_check(l_D_438))).f_B);
R11 * l_N_441; memset(&l_N_441, 0, sizeof l_N_441);
l_N_441 = ((*(R11 *)rt_nil_check(l_D_438))).f_A;
for (;;) {
if ((l_N_441 == NULL)) goto L_end442;
{
{
R15 * l_F_443; memset(&l_F_443, 0, sizeof l_F_443);
l_F_443 = r_NEW_FIELD(((*(R11 *)rt_nil_check(l_N_441))).f_NAME, l_FT_440, ((rt_int)0LL));
S_R7(&((*(R15 *)rt_nil_check(l_F_443))).f_TAGF, p_TAGN, 0);
((*(R15 *)rt_nil_check(l_F_443))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_443, &(*p_TAIL));
}
l_N_441 = ((*(R11 *)rt_nil_check(l_N_441))).f_NEXT;
}
} L_end442: ;
}
}
else
{
{
R15 * l_TF_444; memset(&l_TF_444, 0, sizeof l_TF_444);
l_TF_444 = r_FIND_FIELD(p_T, ((*(R11 *)rt_nil_check(l_D_438))).f_NAME);
R11 * l_S_445; memset(&l_S_445, 0, sizeof l_S_445);
l_S_445 = ((*(R11 *)rt_nil_check(l_D_438))).f_A;
if ((l_TF_444 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(l_D_438))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R11 *)rt_nil_check(l_D_438))).f_NAME);
}
if ((!(((*(R15 *)rt_nil_check(l_TF_444))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R11 *)rt_nil_check(l_D_438))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R11 *)rt_nil_check(l_D_438))).f_NAME);
}
for (;;) {
if ((l_S_445 == NULL)) goto L_end446;
{
r_RECORD_FIELDS(p_T, ((*(R11 *)rt_nil_check(l_S_445))).f_B, ((*(R11 *)rt_nil_check(l_D_438))).f_NAME, ((*(R11 *)rt_nil_check(l_S_445))).f_A, &(*p_TAIL));
l_S_445 = ((*(R11 *)rt_nil_check(l_S_445))).f_NEXT;
}
} L_end446: ;
}
}
l_D_438 = ((*(R11 *)rt_nil_check(l_D_438))).f_NEXT;
}
} L_end439: ;
}
static R14 * r_RESOLVE_RECORD(R11 * p_TS, R7 p_CNAME, R13 * p_Y, R11 * p_FORMALS) { 
R14 * l_T_447; memset(&l_T_447, 0, sizeof l_T_447);
l_T_447 = r_NEW_TYP(g_T_REC);
R15 * l_TAIL_448; memset(&l_TAIL_448, 0, sizeof l_TAIL_448);
l_TAIL_448 = NULL;
((*(R14 *)rt_nil_check(l_T_447))).f_BASE = l_T_447;
((*(R14 *)rt_nil_check(l_T_447))).f_DECL = p_Y;
((*(R14 *)rt_nil_check(l_T_447))).f_REPS = ((*(R11 *)rt_nil_check(p_TS))).f_D;
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R7(&((*(R14 *)rt_nil_check(l_T_447))).f_CNAME, p_CNAME, 0);
}
else
{
S_R7(&((*(R14 *)rt_nil_check(l_T_447))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R14 *)rt_nil_check(l_T_447))).f_CNAME, ((*(R14 *)rt_nil_check(l_T_447))).f_CNAME));
}
{
R11 * l_F_449; memset(&l_F_449, 0, sizeof l_F_449);
l_F_449 = p_FORMALS;
for (;;) {
if ((l_F_449 == NULL)) goto L_end450;
{
if ((!(((*(R11 *)rt_nil_check(l_F_449))).f_B == NULL)))
{
{
R14 * l_FT_451; memset(&l_FT_451, 0, sizeof l_FT_451);
l_FT_451 = r_RESOLVE(((*(R11 *)rt_nil_check(l_F_449))).f_B);
R11 * l_N_452; memset(&l_N_452, 0, sizeof l_N_452);
l_N_452 = ((*(R11 *)rt_nil_check(l_F_449))).f_A;
rt_int l_KIND_453; memset(&l_KIND_453, 0, sizeof l_KIND_453);
l_KIND_453 = ((rt_int)1LL);
if ((((*(R11 *)rt_nil_check(l_F_449))).f_IV == ((rt_int)1LL)))
{
l_KIND_453 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_451))) || (!(((*(R14 *)rt_nil_check(l_FT_451))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R11 *)rt_nil_check(l_F_449))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_452 == NULL)) goto L_end454;
{
r_ADD_FIELD(l_T_447, r_NEW_FIELD(((*(R11 *)rt_nil_check(l_N_452))).f_NAME, l_FT_451, l_KIND_453), &l_TAIL_448);
l_N_452 = ((*(R11 *)rt_nil_check(l_N_452))).f_NEXT;
}
} L_end454: ;
}
}
l_F_449 = ((*(R11 *)rt_nil_check(l_F_449))).f_NEXT;
}
} L_end450: ;
}
r_RECORD_FIELDS(l_T_447, ((*(R11 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_448);
r_COMPLETE_RECORD(l_T_447);
return l_T_447;
rt_raise(RT_X_INIT);
}
static R14 * r_RECORD_INSTANCE(R13 * p_Y, R11 * p_TS) { 
R11 * l_D_455; memset(&l_D_455, 0, sizeof l_D_455);
l_D_455 = ((*(R13 *)rt_nil_check(p_Y))).f_DECL;
R14 * l_CLASS_456; memset(&l_CLASS_456, 0, sizeof l_CLASS_456);
l_CLASS_456 = NULL;
R16 * l_TARGS_457; memset(&l_TARGS_457, 0, sizeof l_TARGS_457);
l_TARGS_457 = NULL;
R17 * l_VARGS_458; memset(&l_VARGS_458, 0, sizeof l_VARGS_458);
l_VARGS_458 = NULL;
R17 * l_VTAIL_459; memset(&l_VTAIL_459, 0, sizeof l_VTAIL_459);
l_VTAIL_459 = NULL;
R11 * l_A_460; memset(&l_A_460, 0, sizeof l_A_460);
l_A_460 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
R11 * l_F_461; memset(&l_F_461, 0, sizeof l_F_461);
l_F_461 = ((*(R11 *)rt_nil_check(l_D_455))).f_A;
for (;;) {
if ((l_F_461 == NULL)) goto L_end462;
{
{
R11 * l_N_463; memset(&l_N_463, 0, sizeof l_N_463);
l_N_463 = ((*(R11 *)rt_nil_check(l_F_461))).f_A;
for (;;) {
if ((l_N_463 == NULL)) goto L_end464;
{
if ((l_A_460 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R11 *)rt_nil_check(l_F_461))).f_B == NULL))
{
{
R16 * l_B_465; memset(&l_B_465, 0, sizeof l_B_465);
l_B_465 = ((R16 *)rt_alloc(sizeof (R16)));
S_R16(&(*(R16 *)rt_nil_check(l_B_465)), ({ R16 rc466; memset(&rc466, 0, sizeof rc466);  S_R7(&rc466.f_NAME, ((*(R11 *)rt_nil_check(l_N_463))).f_NAME, 0); rc466.f_T = r_ARG_TYPE(l_A_460); S_R7(&rc466.f_C, r_NO_TEXT(), 0); rc466.f_HASMV = 0; rc466.f_MV = ((rt_int)0LL); rc466.f_R = NULL; rc466.f_NEXT = l_TARGS_457; rc466; }), 0);
l_TARGS_457 = l_B_465;
}
}
else
{
{
R17 * l_V_467; memset(&l_V_467, 0, sizeof l_V_467);
l_V_467 = ((R17 *)rt_alloc(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_V_467)), ({ R17 rc468; memset(&rc468, 0, sizeof rc468);  S_R7(&rc468.f_LO, r_NO_TEXT(), 0); S_R7(&rc468.f_HI, r_NO_TEXT(), 0); S_R12(&rc468.f_MLO, r_NO_MVAL(), 0); S_R12(&rc468.f_MHI, r_NO_MVAL(), 0); rc468.f_ANYARG = 0; rc468.f_NEXT = NULL; rc468; }), 0);
if ((((*(R11 *)rt_nil_check(l_A_460))).f_KIND == g_N_ANY))
{
if ((!(((*(R11 *)rt_nil_check(l_F_461))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R11 *)rt_nil_check(l_A_460))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R17 *)rt_nil_check(l_V_467))).f_ANYARG = 1;
}
else
{
{
R14 * l_FT_469; memset(&l_FT_469, 0, sizeof l_FT_469);
l_FT_469 = r_RESOLVE(((*(R11 *)rt_nil_check(l_F_461))).f_B);
S_R7(&((*(R17 *)rt_nil_check(l_V_467))).f_LO, (r_EXPR(l_A_460, l_FT_469)).f_C, 0);
S_R12(&((*(R17 *)rt_nil_check(l_V_467))).f_MLO, r_ENUM_MANIFEST(l_A_460, l_FT_469), 0);
if (((((*(R11 *)rt_nil_check(l_F_461))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(l_V_467))).f_MLO).f_OK)))
{
r_FAIL(((*(R11 *)rt_nil_check(l_A_460))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_459 == NULL))
{
l_VARGS_458 = l_V_467;
}
else
{
((*(R17 *)rt_nil_check(l_VTAIL_459))).f_NEXT = l_V_467;
}
l_VTAIL_459 = l_V_467;
}
}
l_A_460 = ((*(R11 *)rt_nil_check(l_A_460))).f_NEXT;
l_N_463 = ((*(R11 *)rt_nil_check(l_N_463))).f_NEXT;
}
} L_end464: ;
}
l_F_461 = ((*(R11 *)rt_nil_check(l_F_461))).f_NEXT;
}
} L_end462: ;
if ((!(l_A_460 == NULL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
}
{
R13 * l_R_470; memset(&l_R_470, 0, sizeof l_R_470);
l_R_470 = ((*(R22 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_470 == NULL)) goto L_end471;
{
if (((((*(R13 *)rt_nil_check(l_R_470))).f_DECL == l_D_455) && r_SAME_BINDS(((*(R13 *)rt_nil_check(l_R_470))).f_BINDINGS, l_TARGS_457)))
{
l_CLASS_456 = ((*(R13 *)rt_nil_check(l_R_470))).f_T;
goto L_end471;
}
l_R_470 = ((*(R13 *)rt_nil_check(l_R_470))).f_INSTANCES;
}
} L_end471: ;
}
if ((l_CLASS_456 == NULL))
{
{
R13 * l_R_472; memset(&l_R_472, 0, sizeof l_R_472);
l_R_472 = r_NEW_SYM(g_Y_TYPE, ((*(R13 *)rt_nil_check(p_Y))).f_NAME);
R16 * l_B_473; memset(&l_B_473, 0, sizeof l_B_473);
l_B_473 = l_TARGS_457;
R16 * l_SAVED_474; memset(&l_SAVED_474, 0, sizeof l_SAVED_474);
l_SAVED_474 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
((*(R13 *)rt_nil_check(l_R_472))).f_DECL = l_D_455;
((*(R13 *)rt_nil_check(l_R_472))).f_BINDINGS = l_TARGS_457;
((*(R13 *)rt_nil_check(l_R_472))).f_INSTANCES = ((*(R22 *)rt_nil_check(g_W))).f_RECS;
((*(R22 *)rt_nil_check(g_W))).f_RECS = l_R_472;
r_OPEN_SCOPE();
for (;;) {
if ((l_B_473 == NULL)) goto L_end475;
{
{
R13 * l_TY_476; memset(&l_TY_476, 0, sizeof l_TY_476);
l_TY_476 = r_NEW_SYM(g_Y_TYPE, ((*(R16 *)rt_nil_check(l_B_473))).f_NAME);
((*(R13 *)rt_nil_check(l_TY_476))).f_T = ((*(R16 *)rt_nil_check(l_B_473))).f_T;
r_DEFINE(l_TY_476, ((*(R11 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_473 = ((*(R16 *)rt_nil_check(l_B_473))).f_NEXT;
}
} L_end475: ;
l_F_461 = ((*(R11 *)rt_nil_check(l_D_455))).f_A;
for (;;) {
if ((l_F_461 == NULL)) goto L_end477;
{
if ((!(((*(R11 *)rt_nil_check(l_F_461))).f_B == NULL)))
{
{
R11 * l_N_478; memset(&l_N_478, 0, sizeof l_N_478);
l_N_478 = ((*(R11 *)rt_nil_check(l_F_461))).f_A;
for (;;) {
if ((l_N_478 == NULL)) goto L_end479;
{
{
R13 * l_P_480; memset(&l_P_480, 0, sizeof l_P_480);
l_P_480 = r_NEW_SYM(g_Y_CONST, ((*(R11 *)rt_nil_check(l_N_478))).f_NAME);
((*(R13 *)rt_nil_check(l_P_480))).f_T = r_RESOLVE(((*(R11 *)rt_nil_check(l_F_461))).f_B);
S_R7(&((*(R13 *)rt_nil_check(l_P_480))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), ((*(R11 *)rt_nil_check(l_N_478))).f_NAME), 0);
((*(R13 *)rt_nil_check(l_P_480))).f_INPUT = 1;
((*(R13 *)rt_nil_check(l_P_480))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_480, ((*(R11 *)rt_nil_check(l_F_461))).f_LINE);
}
l_N_478 = ((*(R11 *)rt_nil_check(l_N_478))).f_NEXT;
}
} L_end479: ;
}
}
l_F_461 = ((*(R11 *)rt_nil_check(l_F_461))).f_NEXT;
}
} L_end477: ;
if ((l_TARGS_457 == NULL))
{
l_CLASS_456 = r_RESOLVE_RECORD(((*(R11 *)rt_nil_check(l_D_455))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R11 *)rt_nil_check(l_D_455))).f_A);
}
else
{
l_CLASS_456 = r_RESOLVE_RECORD(((*(R11 *)rt_nil_check(l_D_455))).f_B, r_NO_TEXT(), p_Y, ((*(R11 *)rt_nil_check(l_D_455))).f_A);
}
S_R7(&((*(R14 *)rt_nil_check(l_CLASS_456))).f_NAME, ((*(R13 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R13 *)rt_nil_check(l_R_472))).f_T = l_CLASS_456;
r_CLOSE_SCOPE();
((*(R22 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_474;
}
}
{
R14 * l_T_481; memset(&l_T_481, 0, sizeof l_T_481);
l_T_481 = r_COPY_TYP(l_CLASS_456);
((*(R14 *)rt_nil_check(l_T_481))).f_ARGS = l_VARGS_458;
return l_T_481;
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R16 * p_A, R16 * p_B) { 
R16 * l_P_482; memset(&l_P_482, 0, sizeof l_P_482);
l_P_482 = p_A;
R16 * l_Q_483; memset(&l_Q_483, 0, sizeof l_Q_483);
l_Q_483 = p_B;
for (;;) {
if (((l_P_482 == NULL) || (l_Q_483 == NULL))) goto L_end484;
{
if ((!r_SAME_TYPE(((*(R16 *)rt_nil_check(l_P_482))).f_T, ((*(R16 *)rt_nil_check(l_Q_483))).f_T)))
{
return 0;
}
l_P_482 = ((*(R16 *)rt_nil_check(l_P_482))).f_NEXT;
l_Q_483 = ((*(R16 *)rt_nil_check(l_Q_483))).f_NEXT;
}
} L_end484: ;
return ((l_P_482 == NULL) && (l_Q_483 == NULL));
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R14 * p_T) { 
R17 * l_A_485; memset(&l_A_485, 0, sizeof l_A_485);
l_A_485 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_485 == NULL)) goto L_end486;
{
if (((*(R17 *)rt_nil_check(l_A_485))).f_ANYARG)
{
return 1;
}
l_A_485 = ((*(R17 *)rt_nil_check(l_A_485))).f_NEXT;
}
} L_end486: ;
return 0;
rt_raise(RT_X_INIT);
}
static R7 r_VARIANT_COND(R15 * p_F, R14 * p_T, R7 p_SELF) { 
R11 * l_L_487; memset(&l_L_487, 0, sizeof l_L_487);
l_L_487 = ((*(R15 *)rt_nil_check(p_F))).f_LABELS;
R7 l_C_488; memset(&l_C_488, 0, sizeof l_C_488);
S_R7(&l_C_488, r_MK(rt_str("0", 1)), 0);
R15 * l_TF_489; memset(&l_TF_489, 0, sizeof l_TF_489);
l_TF_489 = r_FIND_FIELD(p_T, ((*(R15 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_487 == NULL)) goto L_end490;
{
if ((((*(R11 *)rt_nil_check(l_L_487))).f_KIND == g_N_RANGE))
{
S_R7(&l_C_488, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_488, p_SELF, ((*(R15 *)rt_nil_check(l_TF_489))).f_CNAME), 0);
S_R7(&l_C_488, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_488, (r_EXPR(((*(R11 *)rt_nil_check(l_L_487))).f_A, ((*(R15 *)rt_nil_check(l_TF_489))).f_T)).f_C, p_SELF, ((*(R15 *)rt_nil_check(l_TF_489))).f_CNAME), 0);
S_R7(&l_C_488, r_FMT2(rt_str("@@)", 3), l_C_488, (r_EXPR(((*(R11 *)rt_nil_check(l_L_487))).f_B, ((*(R15 *)rt_nil_check(l_TF_489))).f_T)).f_C), 0);
}
else
{
S_R7(&l_C_488, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_488, p_SELF, ((*(R15 *)rt_nil_check(l_TF_489))).f_CNAME, (r_EXPR(l_L_487, ((*(R15 *)rt_nil_check(l_TF_489))).f_T)).f_C), 0);
}
l_L_487 = ((*(R11 *)rt_nil_check(l_L_487))).f_NEXT;
}
} L_end490: ;
return r_FMT1(rt_str("(@)", 3), l_C_488);
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R14 * p_T) { 
R7 l_C_491; memset(&l_C_491, 0, sizeof l_C_491);
S_R7(&l_C_491, ((*(R14 *)rt_nil_check(p_T))).f_CNAME, 0);
R15 * l_F_492; memset(&l_F_492, 0, sizeof l_F_492);
l_F_492 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
R7 l_BODY_493; memset(&l_BODY_493, 0, sizeof l_BODY_493);
S_R7(&l_BODY_493, r_MK(rt_str("", 0)), 0);
R7 l_ASSIGN_494; memset(&l_ASSIGN_494, 0, sizeof l_ASSIGN_494);
S_R7(&l_ASSIGN_494, r_MK(rt_str("", 0)), 0);
R7 l_EQ_495; memset(&l_EQ_495, 0, sizeof l_EQ_495);
S_R7(&l_EQ_495, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_492 == NULL)) goto L_end496;
{
S_R7(&l_BODY_493, r_FMT3(rt_str("@ @ @;", 6), l_BODY_493, r_CTYPE(((*(R15 *)rt_nil_check(l_F_492))).f_T), ((*(R15 *)rt_nil_check(l_F_492))).f_CNAME), 0);
if ((((*(R15 *)rt_nil_check(l_F_492))).f_KIND == ((rt_int)1LL)))
{
S_R7(&l_ASSIGN_494, r_FMT3(rt_str("@ if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 48), l_ASSIGN_494, ((*(R15 *)rt_nil_check(l_F_492))).f_CNAME, ((*(R15 *)rt_nil_check(l_F_492))).f_CNAME), 0);
}
else if ((((*(R15 *)rt_nil_check(l_F_492))).f_KIND == ((rt_int)2LL)))
{
S_R7(&l_ASSIGN_494, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_494, ((*(R15 *)rt_nil_check(l_F_492))).f_CNAME, ((*(R15 *)rt_nil_check(l_F_492))).f_CNAME, ((*(R15 *)rt_nil_check(l_F_492))).f_CNAME), 0);
}
else
{
S_R7(&l_ASSIGN_494, r_FMT2(rt_str("@ @", 3), l_ASSIGN_494, r_ASSIGN_CODE(((*(R15 *)rt_nil_check(l_F_492))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R15 *)rt_nil_check(l_F_492))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R15 *)rt_nil_check(l_F_492))).f_CNAME))), 0);
}
if (((((*(R15 *)rt_nil_check(l_F_492))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R7(&l_EQ_495, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_495, r_VARIANT_COND(l_F_492, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R15 *)rt_nil_check(l_F_492))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R15 *)rt_nil_check(l_F_492))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R15 *)rt_nil_check(l_F_492))).f_CNAME))), 0);
}
else
{
S_R7(&l_EQ_495, r_FMT2(rt_str("@ && @", 6), l_EQ_495, r_EQUAL_CODE(((*(R15 *)rt_nil_check(l_F_492))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R15 *)rt_nil_check(l_F_492))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R15 *)rt_nil_check(l_F_492))).f_CNAME))), 0);
}
l_F_492 = ((*(R15 *)rt_nil_check(l_F_492))).f_NEXT;
}
} L_end496: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_491, l_BODY_493));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_491, l_C_491, l_C_491));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_491, l_C_491, l_C_491));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_491, l_C_491, l_C_491, l_ASSIGN_494));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_491, l_C_491, l_C_491, l_EQ_495));
}
static R7 r_ARRAY_STRUCT(R14 * p_ELEM, rt_int p_DIMS) { 
R7 l_ET_C_497; memset(&l_ET_C_497, 0, sizeof l_ET_C_497);
S_R7(&l_ET_C_497, r_CTYPE(p_ELEM), 0);
R7 l_KEY_498; memset(&l_KEY_498, 0, sizeof l_KEY_498);
S_R7(&l_KEY_498, r_FMT3(rt_str("@/@/@", 5), l_ET_C_497, r_NUM(p_DIMS), r_NUM(((*(R14 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R13 * l_Y_499; memset(&l_Y_499, 0, sizeof l_Y_499);
l_Y_499 = ((*(R22 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_499 == NULL)) goto L_end500;
{
if ((r_TEQ(((*(R13 *)rt_nil_check(l_Y_499))).f_NAME, l_KEY_498) && r_SAME_TYPE(((*(R13 *)rt_nil_check(l_Y_499))).f_T, p_ELEM)))
{
return ((*(R13 *)rt_nil_check(l_Y_499))).f_ACCESS;
}
l_Y_499 = ((*(R13 *)rt_nil_check(l_Y_499))).f_INSTANCES;
}
} L_end500: ;
l_Y_499 = r_NEW_SYM(g_Y_TYPE, l_KEY_498);
((*(R13 *)rt_nil_check(l_Y_499))).f_T = p_ELEM;
S_R7(&((*(R13 *)rt_nil_check(l_Y_499))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R13 *)rt_nil_check(l_Y_499))).f_INSTANCES = ((*(R22 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R22 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_499;
{
R7 l_C_501; memset(&l_C_501, 0, sizeof l_C_501);
S_R7(&l_C_501, ((*(R13 *)rt_nil_check(l_Y_499))).f_ACCESS, 0);
R7 l_D_502; memset(&l_D_502, 0, sizeof l_D_502);
S_R7(&l_D_502, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_501, l_C_501));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_501, l_D_502, l_D_502, l_ET_C_497));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_501, l_C_501, l_C_501));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_501, l_C_501, l_C_501));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_501, l_C_501, l_C_501, l_D_502));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_502, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_501, l_C_501, l_C_501, l_D_502));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_502, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
}
return ((*(R13 *)rt_nil_check(l_Y_499))).f_ACCESS;
rt_raise(RT_X_INIT);
}
static R7 r_INIT_CODE(R14 * p_T, R7 p_LV) { 
rt_int l_K_503; memset(&l_K_503, 0, sizeof l_K_503);
l_K_503 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_503 == g_T_STR))
{
if (((((*(R14 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
return r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
}
return r_FMT2(rt_str("@ = rt_str_new(@);", 18), p_LV, ((*(R14 *)rt_nil_check(p_T))).f_LEN_C);
}
else if ((l_K_503 == g_T_BITS))
{
if (((((*(R14 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
return r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
}
return r_FMT2(rt_str("@ = rt_b_zeros(@);", 18), p_LV, ((*(R14 *)rt_nil_check(p_T))).f_LEN_C);
}
else if ((l_K_503 == g_T_SEM))
{
return r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R14 *)rt_nil_check(p_T))).f_SCALE));
}
else if ((l_K_503 == g_T_ABS))
{
return r_INIT_CODE(((*(R14 *)rt_nil_check(p_T))).f_BASE, p_LV);
}
else if ((l_K_503 == g_T_ARR))
{
{
R17 * l_B_504; memset(&l_B_504, 0, sizeof l_B_504);
l_B_504 = ((*(R14 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_505; memset(&l_I_505, 0, sizeof l_I_505);
l_I_505 = ((rt_int)0LL);
R7 l_R_506; memset(&l_R_506, 0, sizeof l_R_506);
S_R7(&l_R_506, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_504 == NULL)) goto L_end507;
{
S_R7(&l_R_506, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_506, p_LV, r_NUM(l_I_505), ((*(R17 *)rt_nil_check(l_B_504))).f_LO), 0);
S_R7(&l_R_506, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_506, p_LV, r_NUM(l_I_505), ((*(R17 *)rt_nil_check(l_B_504))).f_HI), 0);
l_I_505 = rt_add(l_I_505, ((rt_int)1LL));
l_B_504 = ((*(R17 *)rt_nil_check(l_B_504))).f_NEXT;
}
} L_end507: ;
S_R7(&l_R_506, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_506, r_NUM(((*(R14 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R7(&l_R_506, r_FMT3(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)(n \? n : 1));", 52), l_R_506, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R14 *)rt_nil_check(p_T))).f_ELEM))
{
{
R7 l_IV_508; memset(&l_IV_508, 0, sizeof l_IV_508);
S_R7(&l_IV_508, r_NEW_NAME(rt_str("i", 1)), 0);
S_R7(&l_R_506, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_506, l_IV_508, l_IV_508, l_IV_508), 0);
S_R7(&l_R_506, r_FMT2(rt_str("@ @ }", 5), l_R_506, r_INIT_CODE(((*(R14 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_508))), 0);
}
}
return r_CATS(l_R_506, rt_str(" }", 2));
}
}
else if ((l_K_503 == g_T_REC))
{
{
R15 * l_F_509; memset(&l_F_509, 0, sizeof l_F_509);
l_F_509 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
R17 * l_A_510; memset(&l_A_510, 0, sizeof l_A_510);
l_A_510 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
R7 l_R_511; memset(&l_R_511, 0, sizeof l_R_511);
S_R7(&l_R_511, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_509 == NULL)) goto L_end512;
{
if ((!(((*(R15 *)rt_nil_check(l_F_509))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_510 == NULL)))
{
if ((!((*(R17 *)rt_nil_check(l_A_510))).f_ANYARG))
{
S_R7(&l_R_511, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_511, p_LV, ((*(R15 *)rt_nil_check(l_F_509))).f_CNAME, ((*(R17 *)rt_nil_check(l_A_510))).f_LO), 0);
}
l_A_510 = ((*(R17 *)rt_nil_check(l_A_510))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R15 *)rt_nil_check(l_F_509))).f_T))
{
S_R7(&l_R_511, r_FMT2(rt_str("@ @", 3), l_R_511, r_SUBST_SELF(r_INIT_CODE(((*(R15 *)rt_nil_check(l_F_509))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R15 *)rt_nil_check(l_F_509))).f_CNAME)), p_LV)), 0);
}
l_F_509 = ((*(R15 *)rt_nil_check(l_F_509))).f_NEXT;
}
} L_end512: ;
return l_R_511;
}
}
return r_NO_TEXT();
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R14 * p_T) { 
rt_int l_K_513; memset(&l_K_513, 0, sizeof l_K_513);
l_K_513 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_513 == g_T_STR) || (l_K_513 == g_T_BITS)) || (l_K_513 == g_T_ARR)) || (l_K_513 == g_T_SEM)))
{
return 1;
}
else if ((l_K_513 == g_T_ABS))
{
return r_NEEDS_INIT(((*(R14 *)rt_nil_check(p_T))).f_BASE);
}
else if ((l_K_513 == g_T_REC))
{
if ((!(((*(R14 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
return 1;
}
{
R15 * l_F_514; memset(&l_F_514, 0, sizeof l_F_514);
l_F_514 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_514 == NULL)) goto L_end515;
{
if (r_NEEDS_INIT(((*(R15 *)rt_nil_check(l_F_514))).f_T))
{
return 1;
}
l_F_514 = ((*(R15 *)rt_nil_check(l_F_514))).f_NEXT;
}
} L_end515: ;
}
}
return 0;
rt_raise(RT_X_INIT);
}
static R7 r_ASSIGN_CODE(R14 * p_T, R7 p_LV, R7 p_RV) { 
rt_int l_K_516; memset(&l_K_516, 0, sizeof l_K_516);
l_K_516 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_516 == g_T_STR) || (l_K_516 == g_T_BITS)))
{
return r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
}
else if ((l_K_516 == g_T_ABS))
{
return r_ASSIGN_CODE(((*(R14 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
}
else if ((l_K_516 == g_T_SEM))
{
return r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
}
else if ((l_K_516 == g_T_ARR))
{
return r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R14 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
}
else if ((l_K_516 == g_T_REC))
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
rt_int l_K_517; memset(&l_K_517, 0, sizeof l_K_517);
l_K_517 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_517 == g_T_STR) || (l_K_517 == g_T_BITS)))
{
return r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
}
else if ((l_K_517 == g_T_ABS))
{
return r_EQUAL_CODE(((*(R14 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
}
else if (((l_K_517 == g_T_ARR) || (l_K_517 == g_T_REC)))
{
return r_FMT3(rt_str("E_@(@, @)", 9), ((*(R14 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
}
else if ((l_K_517 == g_T_SEM))
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
return (((*(R14 *)rt_nil_check(p_A))).f_DECL == ((*(R14 *)rt_nil_check(p_B))).f_DECL);
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
return 1;
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R17 * p_A, R17 * p_B) { 
R17 * l_P_518; memset(&l_P_518, 0, sizeof l_P_518);
l_P_518 = p_A;
R17 * l_Q_519; memset(&l_Q_519, 0, sizeof l_Q_519);
l_Q_519 = p_B;
for (;;) {
if (((l_P_518 == NULL) || (l_Q_519 == NULL))) goto L_end520;
{
if ((!(((*(R17 *)rt_nil_check(l_P_518))).f_ANYARG == ((*(R17 *)rt_nil_check(l_Q_519))).f_ANYARG)))
{
return 0;
}
if (((((*(R17 *)rt_nil_check(l_P_518))).f_MLO).f_OK && (((*(R17 *)rt_nil_check(l_Q_519))).f_MLO).f_OK))
{
if ((!((((*(R17 *)rt_nil_check(l_P_518))).f_MLO).f_V == (((*(R17 *)rt_nil_check(l_Q_519))).f_MLO).f_V)))
{
return 0;
}
}
l_P_518 = ((*(R17 *)rt_nil_check(l_P_518))).f_NEXT;
l_Q_519 = ((*(R17 *)rt_nil_check(l_Q_519))).f_NEXT;
}
} L_end520: ;
return ((l_P_518 == NULL) && (l_Q_519 == NULL));
rt_raise(RT_X_INIT);
}
static R7 r_FRAME_OF(rt_int p_LEVEL) { 
R27 * l_CS_521; memset(&l_CS_521, 0, sizeof l_CS_521);
l_CS_521 = ((*(R22 *)rt_nil_check(g_W))).f_CS;
R7 l_T_522; memset(&l_T_522, 0, sizeof l_T_522);
rt_int l_LEV_523; memset(&l_LEV_523, 0, sizeof l_LEV_523);
if ((((*(R27 *)rt_nil_check(l_CS_521))).f_LEVEL == p_LEVEL))
{
return r_MK(rt_str("F", 1));
}
if (((*(R27 *)rt_nil_check(l_CS_521))).f_FRAMED)
{
S_R7(&l_T_522, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R7(&l_T_522, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_523 = rt_sub(((*(R27 *)rt_nil_check(l_CS_521))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_523 <= p_LEVEL)) goto L_end524;
{
S_R7(&l_T_522, r_CATS(l_T_522, rt_str("->up", 4)), 0);
l_LEV_523 = rt_sub(l_LEV_523, ((rt_int)1LL));
}
} L_end524: ;
return l_T_522;
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
R27 * l_CS_525; memset(&l_CS_525, 0, sizeof l_CS_525);
l_CS_525 = ((*(R22 *)rt_nil_check(g_W))).f_CS;
R14 * l_T_526; memset(&l_T_526, 0, sizeof l_T_526);
l_T_526 = ((*(R13 *)rt_nil_check(p_Y))).f_T;
R7 l_CN_527; memset(&l_CN_527, 0, sizeof l_CN_527);
if ((((*(R27 *)rt_nil_check(l_CS_525))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R22 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R7(&l_CN_527, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), ((*(R13 *)rt_nil_check(p_Y))).f_NAME), 0);
}
else
{
S_R7(&l_CN_527, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), ((*(R13 *)rt_nil_check(p_Y))).f_NAME, r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_526), l_CN_527));
S_R7(&((*(R13 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_527, 0);
return l_CN_527;
}
S_R7(&l_CN_527, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), ((*(R13 *)rt_nil_check(p_Y))).f_NAME, r_NEW_NAME(rt_str("", 0))), 0);
S_R7(&((*(R13 *)rt_nil_check(p_Y))).f_FIELD, l_CN_527, 0);
if (((*(R27 *)rt_nil_check(l_CS_525))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_526), l_CN_527), &((*(R27 *)rt_nil_check(l_CS_525))).f_FIELDS);
S_R7(&((*(R13 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_527), 0);
return ((*(R13 *)rt_nil_check(p_Y))).f_ACCESS;
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_526), l_CN_527, l_CN_527, l_CN_527));
S_R7(&((*(R13 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_527, 0);
return l_CN_527;
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R11 * p_D) { 
R14 * l_T_528; memset(&l_T_528, 0, sizeof l_T_528);
l_T_528 = r_RESOLVE(((*(R11 *)rt_nil_check(p_D))).f_B);
R11 * l_N_529; memset(&l_N_529, 0, sizeof l_N_529);
l_N_529 = ((*(R11 *)rt_nil_check(p_D))).f_A;
R18 l_V_530; memset(&l_V_530, 0, sizeof l_V_530);
rt_int l_HAVE_V_531; memset(&l_HAVE_V_531, 0, sizeof l_HAVE_V_531);
l_HAVE_V_531 = 0;
if (((((*(R14 *)rt_nil_check(l_T_528))).f_KIND == g_T_TYPE) || (((*(R14 *)rt_nil_check(l_T_528))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_529 == NULL)) goto L_end532;
{
{
R13 * l_Y_533; memset(&l_Y_533, 0, sizeof l_Y_533);
l_Y_533 = r_NEW_SYM(g_Y_VAR, ((*(R11 *)rt_nil_check(l_N_529))).f_NAME);
R7 l_CN_534; memset(&l_CN_534, 0, sizeof l_CN_534);
if ((((*(R11 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R13 *)rt_nil_check(l_Y_533))).f_KIND = g_Y_CONST;
((*(R13 *)rt_nil_check(l_Y_533))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_528) && (((*(R14 *)rt_nil_check(l_T_528))).f_SCALE == ((rt_int)0LL))))
{
{
R12 l_M_535; memset(&l_M_535, 0, sizeof l_M_535);
S_R12(&l_M_535, r_MANIFEST(((*(R11 *)rt_nil_check(p_D))).f_C), 0);
((*(R13 *)rt_nil_check(l_Y_533))).f_HASMV = (l_M_535).f_OK;
((*(R13 *)rt_nil_check(l_Y_533))).f_MV = (l_M_535).f_V;
}
}
}
((*(R13 *)rt_nil_check(l_Y_533))).f_T = l_T_528;
S_R7(&l_CN_534, r_NEW_OBJECT(l_Y_533, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_528))
{
r_CODE(r_INIT_CODE(l_T_528, l_CN_534));
}
if ((!(((*(R11 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_531))
{
S_R18(&l_V_530, r_EXPR(((*(R11 *)rt_nil_check(p_D))).f_C, l_T_528), 0);
l_HAVE_V_531 = 1;
}
r_CODE(r_STORE_CODE(l_T_528, l_CN_534, l_V_530, ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_533, ((*(R11 *)rt_nil_check(l_N_529))).f_LINE);
}
l_N_529 = ((*(R11 *)rt_nil_check(l_N_529))).f_NEXT;
}
} L_end532: ;
}
static R18 r_MKET(R7 p_C, R14 * p_T) { 
return ({ R18 rc536; memset(&rc536, 0, sizeof rc536);  S_R7(&rc536.f_C, p_C, 0); rc536.f_T = p_T; rc536.f_LVAL = 0; S_R7(&rc536.f_SELF, r_NO_TEXT(), 0); rc536; });
rt_raise(RT_X_INIT);
}
static R18 r_MKLV(R7 p_C, R14 * p_T, rt_int p_LVAL, R7 p_SELF) { 
return ({ R18 rc537; memset(&rc537, 0, sizeof rc537);  S_R7(&rc537.f_C, p_C, 0); rc537.f_T = p_T; rc537.f_LVAL = p_LVAL; S_R7(&rc537.f_SELF, p_SELF, 0); rc537; });
rt_raise(RT_X_INIT);
}
static R14 * r_INT_TYPE(rt_int p_SCALE) { 
R14 * l_T_538; memset(&l_T_538, 0, sizeof l_T_538);
if ((p_SCALE == ((rt_int)0LL)))
{
return ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
}
l_T_538 = r_NEW_TYP(g_T_INT);
((*(R14 *)rt_nil_check(l_T_538))).f_SCALE = p_SCALE;
return l_T_538;
rt_raise(RT_X_INIT);
}
static R14 * r_STR_TYPE(R7 p_LEN, R12 p_M) { 
R14 * l_T_539; memset(&l_T_539, 0, sizeof l_T_539);
l_T_539 = r_NEW_TYP(g_T_STR);
S_R7(&((*(R14 *)rt_nil_check(l_T_539))).f_LEN_C, p_LEN, 0);
S_R12(&((*(R14 *)rt_nil_check(l_T_539))).f_MLEN, p_M, 0);
return l_T_539;
rt_raise(RT_X_INIT);
}
static R7 r_CSTRING(R7 p_T) { 
rstr l_S_540; memset(&l_S_540, 0, sizeof l_S_540);
l_S_540 = rt_str_new((p_T).f_LEN);
rt_b_assign(&l_S_540, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_541; memset(&l_AT_541, 0, sizeof l_AT_541);
l_AT_541 = ((*(R22 *)rt_nil_check(g_W))).f_TOP;
R7 l_R_542; memset(&l_R_542, 0, sizeof l_R_542);
S_R7(&l_R_542, r_MK(rt_str("\"", 1)), 0);
{ rt_int it544_lo = ((rt_int)0LL), it544_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it544 = it544_lo; it544 <= it544_hi; it544++) {
{
if ((rt_b_eq(rt_b_slice(l_S_540, it544, it544), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_540, it544, it544), rt_str("\\", 1))))
{
S_R7(&l_R_542, r_MK(rt_str_cat(rt_str("\\", 1), rt_b_slice(l_S_540, it544, it544))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_540, it544, it544), rt_str("\?", 1)))
{
S_R7(&l_R_542, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_545; memset(&l_C_545, 0, sizeof l_C_545);
l_C_545 = r_CODE_OF(rt_b_slice(l_S_540, it544, it544));
if (({ rt_int iv546 = l_C_545; (((rt_int)32LL)) <= iv546 && iv546 <= (((rt_int)126LL)); }))
{
S_R7(&l_R_542, r_MK(rt_b_slice(l_S_540, it544, it544)), 0);
}
else
{
S_R7(&l_R_542, r_MK(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_545, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_545, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_545, ((rt_int)8LL))))), 0);
}
}
}
}
} } L_end543: ;
S_R7(&l_R_542, r_MK(rt_str("\"", 1)), 0);
return ({ R7 rc547; memset(&rc547, 0, sizeof rc547);  rc547.f_AT = l_AT_541; rc547.f_LEN = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_TOP, l_AT_541); rc547.f_H = rt_neg(((rt_int)1LL)); rc547; });
rt_raise(RT_X_INIT);
}
static R12 r_MANIFEST(R11 * p_E) { 
rt_int l_K_548; memset(&l_K_548, 0, sizeof l_K_548);
l_K_548 = ((*(R11 *)rt_nil_check(p_E))).f_KIND;
R12 l_NO_549; memset(&l_NO_549, 0, sizeof l_NO_549);
S_R12(&l_NO_549, ({ R12 rc550; memset(&rc550, 0, sizeof rc550);  rc550.f_OK = 0; rc550.f_V = ((rt_int)0LL); rc550; }), 0);
if ((l_K_548 == g_N_INT))
{
return ({ R12 rc551; memset(&rc551, 0, sizeof rc551);  rc551.f_OK = 1; rc551.f_V = ((*(R11 *)rt_nil_check(p_E))).f_IV; rc551; });
}
else if ((l_K_548 == g_N_PAREN))
{
return r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A);
}
else if ((l_K_548 == g_N_BOOL))
{
return ({ R12 rc552; memset(&rc552, 0, sizeof rc552);  rc552.f_OK = 1; rc552.f_V = ((*(R11 *)rt_nil_check(p_E))).f_IV; rc552; });
}
else if ((l_K_548 == g_N_UNOP))
{
{
R12 l_A_553; memset(&l_A_553, 0, sizeof l_A_553);
S_R12(&l_A_553, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
return ({ R12 rc554; memset(&rc554, 0, sizeof rc554);  rc554.f_OK = (l_A_553).f_OK; rc554.f_V = rt_neg((l_A_553).f_V); rc554; });
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
return l_A_553;
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
return ({ R12 rc555; memset(&rc555, 0, sizeof rc555);  rc555.f_OK = (l_A_553).f_OK; rc555.f_V = rt_sub(((rt_int)1LL), (l_A_553).f_V); rc555; });
}
}
}
else if ((l_K_548 == g_N_BINOP))
{
if ((!(((*(R11 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
return l_NO_549;
}
{
R12 l_A_556; memset(&l_A_556, 0, sizeof l_A_556);
S_R12(&l_A_556, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
R12 l_B_557; memset(&l_B_557, 0, sizeof l_B_557);
S_R12(&l_B_557, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_B), 0);
R7 l_OP_558; memset(&l_OP_558, 0, sizeof l_OP_558);
S_R7(&l_OP_558, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
if ((r_TEQS(l_OP_558, rt_str("&", 1)) && (l_A_556).f_OK))
{
if (((l_A_556).f_V == ((rt_int)0LL)))
{
return l_A_556;
}
return l_B_557;
}
else if ((r_TEQS(l_OP_558, rt_str("!", 1)) && (l_A_556).f_OK))
{
if (((l_A_556).f_V == ((rt_int)1LL)))
{
return l_A_556;
}
return l_B_557;
}
if ((!(((l_A_556).f_OK && (l_B_557).f_OK))))
{
return l_NO_549;
}
if ((!((r_MANIFEST_INT(((*(R11 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R11 *)rt_nil_check(p_E))).f_B)))))
{
return l_NO_549;
}
if (r_TEQS(l_OP_558, rt_str("+", 1)))
{
return ({ R12 rc559; memset(&rc559, 0, sizeof rc559);  rc559.f_OK = 1; rc559.f_V = rt_add((l_A_556).f_V, (l_B_557).f_V); rc559; });
}
else if (r_TEQS(l_OP_558, rt_str("-", 1)))
{
return ({ R12 rc560; memset(&rc560, 0, sizeof rc560);  rc560.f_OK = 1; rc560.f_V = rt_sub((l_A_556).f_V, (l_B_557).f_V); rc560; });
}
else if (r_TEQS(l_OP_558, rt_str("*", 1)))
{
return ({ R12 rc561; memset(&rc561, 0, sizeof rc561);  rc561.f_OK = 1; rc561.f_V = rt_mul((l_A_556).f_V, (l_B_557).f_V); rc561; });
}
else if ((r_TEQS(l_OP_558, rt_str("//", 2)) && (!((l_B_557).f_V == ((rt_int)0LL)))))
{
return ({ R12 rc562; memset(&rc562, 0, sizeof rc562);  rc562.f_OK = 1; rc562.f_V = rt_quot((l_A_556).f_V, (l_B_557).f_V); rc562; });
}
else if ((r_TEQS(l_OP_558, rt_str("MOD", 3)) && (!((l_B_557).f_V == ((rt_int)0LL)))))
{
return ({ R12 rc563; memset(&rc563, 0, sizeof rc563);  rc563.f_OK = 1; rc563.f_V = rt_rem((l_A_556).f_V, (l_B_557).f_V); rc563; });
}
else if (r_TEQS(l_OP_558, rt_str("=", 1)))
{
return ({ R12 rc564; memset(&rc564, 0, sizeof rc564);  rc564.f_OK = 1; rc564.f_V = r_BOOL_INT(((l_A_556).f_V == (l_B_557).f_V)); rc564; });
}
else if (r_TEQS(l_OP_558, rt_str("<>", 2)))
{
return ({ R12 rc565; memset(&rc565, 0, sizeof rc565);  rc565.f_OK = 1; rc565.f_V = r_BOOL_INT((!((l_A_556).f_V == (l_B_557).f_V))); rc565; });
}
else if (r_TEQS(l_OP_558, rt_str("<", 1)))
{
return ({ R12 rc566; memset(&rc566, 0, sizeof rc566);  rc566.f_OK = 1; rc566.f_V = r_BOOL_INT(((l_A_556).f_V < (l_B_557).f_V)); rc566; });
}
else if (r_TEQS(l_OP_558, rt_str(">", 1)))
{
return ({ R12 rc567; memset(&rc567, 0, sizeof rc567);  rc567.f_OK = 1; rc567.f_V = r_BOOL_INT(((l_A_556).f_V > (l_B_557).f_V)); rc567; });
}
else if (r_TEQS(l_OP_558, rt_str("<=", 2)))
{
return ({ R12 rc568; memset(&rc568, 0, sizeof rc568);  rc568.f_OK = 1; rc568.f_V = r_BOOL_INT(((l_A_556).f_V <= (l_B_557).f_V)); rc568; });
}
else if (r_TEQS(l_OP_558, rt_str(">=", 2)))
{
return ({ R12 rc569; memset(&rc569, 0, sizeof rc569);  rc569.f_OK = 1; rc569.f_V = r_BOOL_INT(((l_A_556).f_V >= (l_B_557).f_V)); rc569; });
}
}
}
else if ((l_K_548 == g_N_IN))
{
{
R12 l_A_570; memset(&l_A_570, 0, sizeof l_A_570);
S_R12(&l_A_570, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
R12 l_L_571; memset(&l_L_571, 0, sizeof l_L_571);
S_R12(&l_L_571, r_MANIFEST(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R12 l_U_572; memset(&l_U_572, 0, sizeof l_U_572);
S_R12(&l_U_572, r_MANIFEST(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_573; memset(&l_LO_573, 0, sizeof l_LO_573);
rt_int l_HI_574; memset(&l_HI_574, 0, sizeof l_HI_574);
if ((!(((((l_A_570).f_OK && (l_L_571).f_OK) && (l_U_572).f_OK) && r_MANIFEST_INT(((*(R11 *)rt_nil_check(p_E))).f_A)))))
{
return l_NO_549;
}
l_LO_573 = (l_L_571).f_V;
l_HI_574 = (l_U_572).f_V;
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_573 = rt_add(l_LO_573, ((rt_int)1LL));
}
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_574 = rt_sub(l_HI_574, ((rt_int)1LL));
}
return ({ R12 rc575; memset(&rc575, 0, sizeof rc575);  rc575.f_OK = 1; rc575.f_V = r_BOOL_INT((((l_A_570).f_V >= l_LO_573) && ((l_A_570).f_V <= l_HI_574))); rc575; });
}
}
else if ((l_K_548 == g_N_NAME))
{
{
R13 * l_Y_576; memset(&l_Y_576, 0, sizeof l_Y_576);
l_Y_576 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_576 == NULL)))
{
if (((((((*(R13 *)rt_nil_check(l_Y_576))).f_KIND == g_Y_CONST) || (((*(R13 *)rt_nil_check(l_Y_576))).f_KIND == g_Y_GEN))) && ((*(R13 *)rt_nil_check(l_Y_576))).f_HASMV))
{
return ({ R12 rc577; memset(&rc577, 0, sizeof rc577);  rc577.f_OK = 1; rc577.f_V = ((*(R13 *)rt_nil_check(l_Y_576))).f_MV; rc577; });
}
if ((((*(R13 *)rt_nil_check(l_Y_576))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R11 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
return ({ R12 rc578; memset(&rc578, 0, sizeof rc578);  rc578.f_OK = 1; rc578.f_V = ((*(R13 *)rt_nil_check(l_Y_576))).f_MV; rc578; });
}
}
}
}
}
else if ((l_K_548 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R11 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
return ({ R12 rc579; memset(&rc579, 0, sizeof rc579);  rc579.f_OK = 1; rc579.f_V = ((*(R13 *)rt_nil_check(r_FIND_LITERAL(((*(R11 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc579; });
}
}
else if ((l_K_548 == g_N_APPLY))
{
if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
return ({ R12 rc580; memset(&rc580, 0, sizeof rc580);  rc580.f_OK = 1; rc580.f_V = r_BOOL_INT((r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A)).f_OK); rc580; });
}
}
return l_NO_549;
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
rt_int l_K_581; memset(&l_K_581, 0, sizeof l_K_581);
l_K_581 = ((*(R11 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_581 == g_N_INT))
{
return r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R11 *)rt_nil_check(p_E))).f_IV)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
else if ((l_K_581 == g_N_REAL))
{
return r_REAL_LITERAL(p_E);
}
else if ((l_K_581 == g_N_BOOL))
{
return r_MKET(r_NUM(((*(R11 *)rt_nil_check(p_E))).f_IV), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
}
else if ((l_K_581 == g_N_NIL))
{
return r_MKET(r_MK(rt_str("NULL", 4)), ((*(R22 *)rt_nil_check(g_W))).f_TY_NIL);
}
else if ((l_K_581 == g_N_PAREN))
{
{
R18 l_V_582; memset(&l_V_582, 0, sizeof l_V_582);
S_R18(&l_V_582, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R7(&(l_V_582).f_C, r_FMT1(rt_str("(@)", 3), (l_V_582).f_C), 0);
return l_V_582;
}
}
else if ((l_K_581 == g_N_STR))
{
return r_STRING_LITERAL(p_E);
}
else if ((l_K_581 == g_N_BITS))
{
return r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R11 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R11 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R11 *)rt_nil_check(p_E))).f_NAME).f_LEN));
}
else if ((l_K_581 == g_N_ENUMLIT))
{
return r_ENUM_LITERAL(p_E, p_WANT);
}
else if ((l_K_581 == g_N_RECCONS))
{
return r_RECORD_CONSTRUCTOR(p_E, p_WANT);
}
else if ((l_K_581 == g_N_ARRCONS))
{
return r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
}
else if ((l_K_581 == g_N_TYPESPEC))
{
return r_TYPE_SPECIFIER(p_E);
}
else if ((l_K_581 == g_N_QUAL))
{
{
rt_int l_SAVED_583; memset(&l_SAVED_583, 0, sizeof l_SAVED_583);
l_SAVED_583 = ((*(R22 *)rt_nil_check(g_W))).f_ROUNDED;
R18 l_V_584; memset(&l_V_584, 0, sizeof l_V_584);
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
S_R18(&l_V_584, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R22 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_583;
return l_V_584;
}
}
else if ((l_K_581 == g_N_NEW))
{
return r_NEW_EXPR(p_E, p_WANT);
}
else if ((l_K_581 == g_N_NAME))
{
return r_NAME_EXPR(p_E, p_WANT);
}
else if ((l_K_581 == g_N_APPLY))
{
{
R13 * l_Y_585; memset(&l_Y_585, 0, sizeof l_Y_585);
l_Y_585 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_585 == NULL)))
{
if (((((*(R13 *)rt_nil_check(l_Y_585))).f_KIND == g_Y_VAR) || (((*(R13 *)rt_nil_check(l_Y_585))).f_KIND == g_Y_CONST)))
{
{
R11 * l_N_586; memset(&l_N_586, 0, sizeof l_N_586);
l_N_586 = r_NEW_NODE(g_N_INDEX, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
R11 * l_A_587; memset(&l_A_587, 0, sizeof l_A_587);
l_A_587 = r_NEW_NODE(g_N_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_A_587))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R11 *)rt_nil_check(l_N_586))).f_A = l_A_587;
((*(R11 *)rt_nil_check(l_N_586))).f_B = ((*(R11 *)rt_nil_check(p_E))).f_A;
return r_EXPR(l_N_586, p_WANT);
}
}
}
return r_CALL_EXPR(p_E, p_WANT);
}
}
else if ((l_K_581 == g_N_FIELD))
{
return r_FIELD_EXPR(p_E);
}
else if ((l_K_581 == g_N_DEREF))
{
{
R18 l_B_588; memset(&l_B_588, 0, sizeof l_B_588);
S_R18(&l_B_588, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R14 *)rt_nil_check((l_B_588).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R14 * l_TT_589; memset(&l_TT_589, 0, sizeof l_TT_589);
l_TT_589 = r_TARGET((l_B_588).f_T);
return r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_589), (l_B_588).f_C), l_TT_589, 1, r_NO_TEXT());
}
}
}
else if ((l_K_581 == g_N_INDEX))
{
return r_INDEX_EXPR(p_E);
}
else if ((l_K_581 == g_N_SUBSTR))
{
{
R18 l_B_590; memset(&l_B_590, 0, sizeof l_B_590);
S_R18(&l_B_590, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
R14 * l_BT_591; memset(&l_BT_591, 0, sizeof l_BT_591);
l_BT_591 = r_REAL_TYPE((l_B_590).f_T);
R7 l_LO_592; memset(&l_LO_592, 0, sizeof l_LO_592);
R7 l_HI_593; memset(&l_HI_593, 0, sizeof l_HI_593);
if ((!(((((*(R14 *)rt_nil_check(l_BT_591))).f_KIND == g_T_STR) || (((*(R14 *)rt_nil_check(l_BT_591))).f_KIND == g_T_BITS)))))
{
if ((((*(R14 *)rt_nil_check((l_B_590).f_T))).f_KIND == g_T_ABS))
{
return r_OPERATOR_CALL3(r_MK(rt_str("SUBSTRING_", 10)), l_B_590, ((*(R11 *)rt_nil_check(p_E))).f_B, ((*(R11 *)rt_nil_check(p_E))).f_C, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R7(&l_LO_592, r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B), 0);
S_R7(&l_HI_593, r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_C), 0);
if ((((*(R14 *)rt_nil_check(l_BT_591))).f_KIND == g_T_BITS))
{
return r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_590).f_C, l_LO_592, l_HI_593), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
}
{
R14 * l_T_594; memset(&l_T_594, 0, sizeof l_T_594);
l_T_594 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R14 *)rt_nil_check(l_T_594))).f_BASE = ((*(R14 *)rt_nil_check(l_BT_591))).f_BASE;
return r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_590).f_C, l_LO_592, l_HI_593), l_T_594);
}
}
}
else if ((l_K_581 == g_N_UNOP))
{
return r_UNARY(p_E);
}
else if ((l_K_581 == g_N_BINOP))
{
return r_BINARY(p_E);
}
else if ((l_K_581 == g_N_IN))
{
return r_IN_EXPR(p_E);
}
else if (((l_K_581 == g_N_ANY) || (l_K_581 == g_N_DONTCARE)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((((((l_K_581 == g_TS_NAME) || (l_K_581 == g_TS_ARRAY)) || (l_K_581 == g_TS_RECORD)) || (l_K_581 == g_TS_ENUM)) || (l_K_581 == g_TS_GEN)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R7 r_INT_EXPR(R11 * p_E) { 
rt_int l_SAVED_595; memset(&l_SAVED_595, 0, sizeof l_SAVED_595);
l_SAVED_595 = ((*(R22 *)rt_nil_check(g_W))).f_ROUNDED;
R18 l_V_596; memset(&l_V_596, 0, sizeof l_V_596);
((*(R22 *)rt_nil_check(g_W))).f_ROUNDED = 0;
S_R18(&l_V_596, r_EXPR(p_E, ((*(R22 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R22 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_595;
if ((((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_596).f_T)))).f_KIND == g_T_ENUM))
{
return (l_V_596).f_C;
}
if (((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_596).f_T)))).f_KIND == g_T_INT)) || (!(((*(R14 *)rt_nil_check((l_V_596).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_596).f_T));
}
return (l_V_596).f_C;
rt_raise(RT_X_INIT);
}
static R7 r_BOOL_EXPR(R11 * p_E) { 
R18 l_V_597; memset(&l_V_597, 0, sizeof l_V_597);
S_R18(&l_V_597, r_EXPR(p_E, ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_597).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_597).f_T));
}
return (l_V_597).f_C;
rt_raise(RT_X_INIT);
}
static R14 * r_BITS_TYPE(rt_int p_LEN) { 
R14 * l_T_598; memset(&l_T_598, 0, sizeof l_T_598);
l_T_598 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R7(&((*(R14 *)rt_nil_check(l_T_598))).f_LEN_C, r_NUM(p_LEN), 0);
S_R12(&((*(R14 *)rt_nil_check(l_T_598))).f_MLEN, r_SOME(p_LEN), 0);
}
return l_T_598;
rt_raise(RT_X_INIT);
}
static R18 r_REAL_LITERAL(R11 * p_E) { 
R7 l_T_599; memset(&l_T_599, 0, sizeof l_T_599);
S_R7(&l_T_599, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_600; memset(&l_S_600, 0, sizeof l_S_600);
l_S_600 = rt_str_new((l_T_599).f_LEN);
rt_b_assign(&l_S_600, r_STR(l_T_599, (l_T_599).f_LEN));
rt_int l_POINT_601; memset(&l_POINT_601, 0, sizeof l_POINT_601);
l_POINT_601 = 0;
rt_int l_DIGITS_602; memset(&l_DIGITS_602, 0, sizeof l_DIGITS_602);
l_DIGITS_602 = ((rt_int)0LL);
{ rt_int it604_lo = ((rt_int)0LL), it604_hi = rt_sub((l_T_599).f_LEN, ((rt_int)1LL));
for (rt_int it604 = it604_lo; it604 <= it604_hi; it604++) {
{
if (rt_b_eq(rt_b_slice(l_S_600, it604, it604), rt_str(".", 1)))
{
l_POINT_601 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_600, it604, it604), rt_str("E", 1)))
{
goto L_end603;
}
else
{
l_DIGITS_602 = rt_add(l_DIGITS_602, ((rt_int)1LL));
}
}
} } L_end603: ;
if ((((*(R11 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
return r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_599), r_NUM(((*(R11 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R11 *)rt_nil_check(p_E))).f_IV));
}
if ((!l_POINT_601))
{
return r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_599)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
{
R14 * l_F_605; memset(&l_F_605, 0, sizeof l_F_605);
l_F_605 = r_NEW_TYP(g_T_FLOAT);
((*(R14 *)rt_nil_check(l_F_605))).f_SCALE = l_DIGITS_602;
if ((l_DIGITS_602 > ((rt_int)15LL)))
{
((*(R14 *)rt_nil_check(l_F_605))).f_SCALE = ((rt_int)15LL);
}
if ((l_DIGITS_602 < ((rt_int)1LL)))
{
((*(R14 *)rt_nil_check(l_F_605))).f_SCALE = ((rt_int)1LL);
}
if (rt_b_eq(rt_b_slice(l_S_600, rt_sub((l_T_599).f_LEN, ((rt_int)1LL)), rt_sub((l_T_599).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
return r_MKET(r_FMT1(rt_str("(@0)", 4), l_T_599), l_F_605);
}
if (rt_b_eq(rt_b_slice(l_S_600, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
return r_MKET(r_FMT1(rt_str("(0@)", 4), l_T_599), l_F_605);
}
return r_MKET(r_FMT1(rt_str("(@)", 3), l_T_599), l_F_605);
}
rt_raise(RT_X_INIT);
}
static R18 r_STRING_LITERAL(R11 * p_E) { 
rt_int l_AT_606; memset(&l_AT_606, 0, sizeof l_AT_606);
l_AT_606 = ((*(R22 *)rt_nil_check(g_W))).f_TOP;
R14 * l_CS_607; memset(&l_CS_607, 0, sizeof l_CS_607);
l_CS_607 = ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII;
R11 * l_P_608; memset(&l_P_608, 0, sizeof l_P_608);
l_P_608 = ((*(R11 *)rt_nil_check(p_E))).f_A;
R7 l_R_609; memset(&l_R_609, 0, sizeof l_R_609);
if (((((*(R11 *)rt_nil_check(p_E))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R13 * l_Y_610; memset(&l_Y_610, 0, sizeof l_Y_610);
l_Y_610 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_610 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R13 *)rt_nil_check(l_Y_610))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_607 = r_RESOLVE_USER_NAME(((*(R11 *)rt_nil_check(p_E))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R14 *)rt_nil_check(l_CS_607))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
}
}
for (;;) {
if ((l_P_608 == NULL)) goto L_end611;
{
if ((((*(R11 *)rt_nil_check(l_P_608))).f_IV == g_K_STR))
{
if ((l_CS_607 == ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R7(&l_R_609, r_MK(r_STR(((*(R11 *)rt_nil_check(l_P_608))).f_NAME, (((*(R11 *)rt_nil_check(l_P_608))).f_NAME).f_LEN)), 0);
}
else
{
{
R7 l_Q_612; memset(&l_Q_612, 0, sizeof l_Q_612);
S_R7(&l_Q_612, ((*(R11 *)rt_nil_check(l_P_608))).f_NAME, 0);
rstr l_QS_613; memset(&l_QS_613, 0, sizeof l_QS_613);
l_QS_613 = rt_str_new((l_Q_612).f_LEN);
rt_b_assign(&l_QS_613, r_STR(l_Q_612, (l_Q_612).f_LEN));
{ rt_int it615_lo = ((rt_int)0LL), it615_hi = rt_sub((l_Q_612).f_LEN, ((rt_int)1LL));
for (rt_int it615 = it615_lo; it615 <= it615_hi; it615++) {
{
{
R13 * l_Y_616; memset(&l_Y_616, 0, sizeof l_Y_616);
l_Y_616 = r_FIND_LITERAL(r_MKN(rt_str_cat(rt_str_cat(rt_str("\\'", 2), rt_b_slice(l_QS_613, it615, it615)), rt_str("'", 1))), l_CS_607);
if ((l_Y_616 == NULL))
{
r_FAIL(((*(R11 *)rt_nil_check(l_P_608))).f_LINE, rt_str_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_613, it615, it615)));
}
S_R7(&l_R_609, r_MK(r_CHAR_OF(((*(R13 *)rt_nil_check(l_Y_616))).f_MV)), 0);
}
}
} } L_end614: ;
}
}
}
else
{
{
R13 * l_Y_617; memset(&l_Y_617, 0, sizeof l_Y_617);
l_Y_617 = r_FIND_LITERAL(((*(R11 *)rt_nil_check(l_P_608))).f_NAME, l_CS_607);
if ((l_Y_617 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(l_P_608))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R11 *)rt_nil_check(l_P_608))).f_NAME);
}
S_R7(&l_R_609, r_MK(r_CHAR_OF(((*(R13 *)rt_nil_check(l_Y_617))).f_MV)), 0);
}
}
l_P_608 = ((*(R11 *)rt_nil_check(l_P_608))).f_NEXT;
}
} L_end611: ;
{
R7 l_S_618; memset(&l_S_618, 0, sizeof l_S_618);
S_R7(&l_S_618, ({ R7 rc619; memset(&rc619, 0, sizeof rc619);  rc619.f_AT = l_AT_606; rc619.f_LEN = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_TOP, l_AT_606); rc619.f_H = rt_neg(((rt_int)1LL)); rc619; }), 0);
R14 * l_T_620; memset(&l_T_620, 0, sizeof l_T_620);
l_T_620 = r_STR_TYPE(r_NUM((l_S_618).f_LEN), r_SOME((l_S_618).f_LEN));
((*(R14 *)rt_nil_check(l_T_620))).f_BASE = l_CS_607;
return r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_618), r_NUM((l_S_618).f_LEN)), l_T_620);
}
rt_raise(RT_X_INIT);
}
static R14 * r_RESOLVE_USER_NAME(R7 p_NAME, rt_int p_LINE) { 
R11 * l_TS_621; memset(&l_TS_621, 0, sizeof l_TS_621);
l_TS_621 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_TS_621))).f_NAME, p_NAME, 0);
return r_RESOLVE(l_TS_621);
rt_raise(RT_X_INIT);
}
static R18 r_ENUM_LITERAL(R11 * p_E, R14 * p_WANT) { 
R13 * l_Y_622; memset(&l_Y_622, 0, sizeof l_Y_622);
if ((!(p_WANT == NULL)))
{
{
R14 * l_WT_623; memset(&l_WT_623, 0, sizeof l_WT_623);
l_WT_623 = r_REAL_TYPE(p_WANT);
if ((((*(R14 *)rt_nil_check(l_WT_623))).f_KIND == g_T_ENUM))
{
l_Y_622 = r_FIND_LITERAL(((*(R11 *)rt_nil_check(p_E))).f_NAME, l_WT_623);
if ((!(l_Y_622 == NULL)))
{
return r_MKET(r_NUM(((*(R13 *)rt_nil_check(l_Y_622))).f_MV), r_ENUM_RESULT(l_Y_622, p_WANT));
}
}
}
}
l_Y_622 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
{
R13 * l_FOUND_624; memset(&l_FOUND_624, 0, sizeof l_FOUND_624);
l_FOUND_624 = NULL;
rt_int l_N_625; memset(&l_N_625, 0, sizeof l_N_625);
l_N_625 = ((rt_int)0LL);
for (;;) {
if ((l_Y_622 == NULL)) goto L_end626;
{
if ((((*(R13 *)rt_nil_check(l_Y_622))).f_KIND == g_Y_ENUMLIT))
{
if (((!(((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_622))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII)) || (l_FOUND_624 == NULL)))
{
if (((l_FOUND_624 == NULL) || (((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_FOUND_624))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII)))
{
l_FOUND_624 = l_Y_622;
}
else
{
l_N_625 = rt_add(l_N_625, ((rt_int)1LL));
}
}
}
l_Y_622 = r_LOOKUP_NEXT(l_Y_622);
}
} L_end626: ;
if ((l_FOUND_624 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_625 > ((rt_int)0LL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
return r_MKET(r_NUM(((*(R13 *)rt_nil_check(l_FOUND_624))).f_MV), ((*(R13 *)rt_nil_check(l_FOUND_624))).f_T);
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
R13 * l_Y_627; memset(&l_Y_627, 0, sizeof l_Y_627);
l_Y_627 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_627 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R13 *)rt_nil_check(l_Y_627))).f_KIND == g_Y_VAR) || (((*(R13 *)rt_nil_check(l_Y_627))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_628; memset(&l_WRITABLE_628, 0, sizeof l_WRITABLE_628);
l_WRITABLE_628 = r_CHECK_IMPORTED(l_Y_627, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
return r_MKLV(r_OBJ_ACCESS(l_Y_627), ((*(R13 *)rt_nil_check(l_Y_627))).f_T, ((((*(R13 *)rt_nil_check(l_Y_627))).f_KIND == g_Y_VAR) && l_WRITABLE_628), r_NO_TEXT());
}
}
else if ((((*(R13 *)rt_nil_check(l_Y_627))).f_KIND == g_Y_GEN))
{
return r_MKET(((*(R13 *)rt_nil_check(l_Y_627))).f_ACCESS, ((*(R13 *)rt_nil_check(l_Y_627))).f_T);
}
else if ((((*(R13 *)rt_nil_check(l_Y_627))).f_KIND == g_Y_ENUMLIT))
{
return r_ENUM_LITERAL(p_E, p_WANT);
}
else if (((((*(R13 *)rt_nil_check(l_Y_627))).f_KIND == g_Y_ROUTINE) || (((*(R13 *)rt_nil_check(l_Y_627))).f_KIND == g_Y_BUILTIN)))
{
{
R11 * l_N_629; memset(&l_N_629, 0, sizeof l_N_629);
l_N_629 = r_NEW_NODE(g_N_APPLY, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_N_629))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
return r_CALL_EXPR(l_N_629, p_WANT);
}
}
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R18 r_FIELD_EXPR(R11 * p_E) { 
R11 * l_A_630; memset(&l_A_630, 0, sizeof l_A_630);
l_A_630 = ((*(R11 *)rt_nil_check(p_E))).f_A;
if ((((*(R11 *)rt_nil_check(l_A_630))).f_KIND == g_N_INDEX))
{
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_630))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_630))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R18 l_B_631; memset(&l_B_631, 0, sizeof l_B_631);
S_R18(&l_B_631, r_EXPR(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_630))).f_A))).f_A, NULL), 0);
R7 l_I_632; memset(&l_I_632, 0, sizeof l_I_632);
S_R7(&l_I_632, r_INT_EXPR(((*(R11 *)rt_nil_check(l_A_630))).f_B), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_B_631).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
return r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_631).f_C, l_I_632, r_NUM(rt_sub(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_B_631).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
return r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_631).f_C, l_I_632, r_NUM(rt_sub(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_B_631).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R11 *)rt_nil_check(l_A_630))).f_KIND == g_N_PAREN))
{
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_630))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_630))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_630))).f_A))).f_A))).f_NAME))
{
return r_ATTRIBUTE_OF_ATTRIBUTE(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_630))).f_A))).f_A))).f_NAME, ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_630))).f_A))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
}
}
}
}
if ((((*(R11 *)rt_nil_check(l_A_630))).f_KIND == g_N_NAME))
{
{
R13 * l_Y_633; memset(&l_Y_633, 0, sizeof l_Y_633);
l_Y_633 = r_LOOKUP(((*(R11 *)rt_nil_check(l_A_630))).f_NAME);
if ((!(l_Y_633 == NULL)))
{
if ((((*(R13 *)rt_nil_check(l_Y_633))).f_KIND == g_Y_TYPE))
{
return r_TYPE_ATTRIBUTE(((*(R11 *)rt_nil_check(l_A_630))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
}
}
else if (r_IS_TYPE_WORD(((*(R11 *)rt_nil_check(l_A_630))).f_NAME))
{
return r_TYPE_ATTRIBUTE(((*(R11 *)rt_nil_check(l_A_630))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
}
}
}
{
R18 l_B_634; memset(&l_B_634, 0, sizeof l_B_634);
S_R18(&l_B_634, r_EXPR(l_A_630, NULL), 0);
R14 * l_BT_635; memset(&l_BT_635, 0, sizeof l_BT_635);
l_BT_635 = (l_B_634).f_T;
if ((((*(R14 *)rt_nil_check(l_BT_635))).f_KIND == g_T_REC))
{
{
R15 * l_F_636; memset(&l_F_636, 0, sizeof l_F_636);
l_F_636 = r_FIND_FIELD(l_BT_635, ((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_636 == NULL)))
{
r_CHECK_VARIANT(l_F_636, l_BT_635, l_A_630, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
return r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_634).f_C, ((*(R15 *)rt_nil_check(l_F_636))).f_CNAME), ((*(R15 *)rt_nil_check(l_F_636))).f_T, ((l_B_634).f_LVAL && (((*(R15 *)rt_nil_check(l_F_636))).f_KIND == ((rt_int)0LL))), (l_B_634).f_C);
}
}
}
return r_ATTRIBUTE(l_B_634, ((*(R11 *)rt_nil_check(p_E))).f_NAME, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
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
R12 l_TAGV_637; memset(&l_TAGV_637, 0, sizeof l_TAGV_637);
S_R12(&l_TAGV_637, r_TAG_VALUE(p_T, ((*(R15 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_637).f_OK))
{
r_FAILT(p_LINE, rt_str_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R15 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R15 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_637).f_V, ((*(R15 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R15 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R15 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R12 r_TAG_VALUE(R14 * p_T, R7 p_TAGN) { 
R15 * l_F_638; memset(&l_F_638, 0, sizeof l_F_638);
l_F_638 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
R17 * l_A_639; memset(&l_A_639, 0, sizeof l_A_639);
l_A_639 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_638 == NULL)) goto L_end640;
{
if ((!(((*(R15 *)rt_nil_check(l_F_638))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_639 == NULL))
{
return r_NO_MVAL();
}
if (r_TEQ(((*(R15 *)rt_nil_check(l_F_638))).f_NAME, p_TAGN))
{
if (((*(R17 *)rt_nil_check(l_A_639))).f_ANYARG)
{
return r_NO_MVAL();
}
return ((*(R17 *)rt_nil_check(l_A_639))).f_MLO;
}
l_A_639 = ((*(R17 *)rt_nil_check(l_A_639))).f_NEXT;
}
l_F_638 = ((*(R15 *)rt_nil_check(l_F_638))).f_NEXT;
}
} L_end640: ;
return r_NO_MVAL();
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R11 * p_L, rt_int p_V, R14 * p_T) { 
R11 * l_P_641; memset(&l_P_641, 0, sizeof l_P_641);
l_P_641 = p_L;
for (;;) {
if ((l_P_641 == NULL)) goto L_end642;
{
if ((((*(R11 *)rt_nil_check(l_P_641))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(l_P_641))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(l_P_641))).f_B, p_T)).f_V)))
{
return 1;
}
}
else if (((r_ENUM_MANIFEST(l_P_641, p_T)).f_V == p_V))
{
return 1;
}
l_P_641 = ((*(R11 *)rt_nil_check(l_P_641))).f_NEXT;
}
} L_end642: ;
return 0;
rt_raise(RT_X_INIT);
}
static R18 r_INDEX_EXPR(R11 * p_E) { 
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R18 l_A_643; memset(&l_A_643, 0, sizeof l_A_643);
S_R18(&l_A_643, r_EXPR(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_A, NULL), 0);
R7 l_I_644; memset(&l_I_644, 0, sizeof l_I_644);
S_R7(&l_I_644, r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R14 *)rt_nil_check(r_REAL_TYPE((l_A_643).f_T)))).f_KIND == g_T_ARR))
{
return r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_643).f_C, (l_A_643).f_C, l_I_644, r_NUM(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_A_643).f_T)))).f_DIMS)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
}
}
return r_INDEX_EXPR2(p_E);
rt_raise(RT_X_INIT);
}
static R18 r_INDEX_EXPR2(R11 * p_E) { 
R18 l_B_645; memset(&l_B_645, 0, sizeof l_B_645);
S_R18(&l_B_645, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
R14 * l_T_646; memset(&l_T_646, 0, sizeof l_T_646);
l_T_646 = r_REAL_TYPE((l_B_645).f_T);
R11 * l_S_647; memset(&l_S_647, 0, sizeof l_S_647);
l_S_647 = ((*(R11 *)rt_nil_check(p_E))).f_B;
R7 l_IX_648; memset(&l_IX_648, 0, sizeof l_IX_648);
S_R7(&l_IX_648, r_MK(rt_str("", 0)), 0);
rt_int l_N_649; memset(&l_N_649, 0, sizeof l_N_649);
l_N_649 = ((rt_int)0LL);
if ((!(((*(R14 *)rt_nil_check(l_T_646))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_647 == NULL)) goto L_end650;
{
if ((l_N_649 > ((rt_int)0LL)))
{
S_R7(&l_IX_648, r_CATS(l_IX_648, rt_str(", ", 2)), 0);
}
S_R7(&l_IX_648, r_CAT(l_IX_648, r_INT_EXPR(l_S_647)), 0);
l_N_649 = rt_add(l_N_649, ((rt_int)1LL));
l_S_647 = ((*(R11 *)rt_nil_check(l_S_647))).f_NEXT;
}
} L_end650: ;
if ((!(l_N_649 == ((*(R14 *)rt_nil_check(l_T_646))).f_DIMS)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_649 == ((rt_int)1LL)))
{
return r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_645).f_C, l_IX_648, (l_B_645).f_C, (l_B_645).f_C), ((*(R14 *)rt_nil_check(l_T_646))).f_ELEM, (l_B_645).f_LVAL, r_NO_TEXT());
}
{
R7 l_X_651; memset(&l_X_651, 0, sizeof l_X_651);
S_R7(&l_X_651, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_645).f_C, r_NUM(l_N_649), (l_B_645).f_C, (l_B_645).f_C), 0);
return r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_651, l_IX_648), ((*(R14 *)rt_nil_check(l_T_646))).f_ELEM, (l_B_645).f_LVAL, r_NO_TEXT());
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
R19 * l_A_652; memset(&l_A_652, 0, sizeof l_A_652);
l_A_652 = ((R19 *)rt_alloc(sizeof (R19)));
S_R19(&(*(R19 *)rt_nil_check(l_A_652)), ({ R19 rc653; memset(&rc653, 0, sizeof rc653);  rc653.f_E = NULL; S_R18(&rc653.f_V, p_V, 0); rc653.f_HAVE = 1; rc653.f_MODE = g_M_IN; rc653.f_NEXT = p_NEXT; rc653; }), 0);
return l_A_652;
rt_raise(RT_X_INIT);
}
static R19 * r_NODE_ARG(R11 * p_E, rt_int p_MODE, R19 * p_NEXT) { 
R19 * l_A_654; memset(&l_A_654, 0, sizeof l_A_654);
l_A_654 = ((R19 *)rt_alloc(sizeof (R19)));
S_R19(&(*(R19 *)rt_nil_check(l_A_654)), ({ R19 rc655; memset(&rc655, 0, sizeof rc655);  rc655.f_E = p_E; S_R18(&rc655.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc655.f_HAVE = 0; rc655.f_MODE = p_MODE; rc655.f_NEXT = p_NEXT; rc655; }), 0);
return l_A_654;
rt_raise(RT_X_INIT);
}
static R13 * r_USER_OPERATOR(R7 p_NAME, R19 * p_ARGS, rt_int p_LINE) { 
R13 * l_Y_656; memset(&l_Y_656, 0, sizeof l_Y_656);
l_Y_656 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_656 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_656 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
return l_Y_656;
rt_raise(RT_X_INIT);
}
static R18 r_OPERATOR_CALL3(R7 p_NAME, R18 p_A, R11 * p_B, R11 * p_C, rt_int p_LINE) { 
R19 * l_ARGS_657; memset(&l_ARGS_657, 0, sizeof l_ARGS_657);
l_ARGS_657 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R13 * l_Y_658; memset(&l_Y_658, 0, sizeof l_Y_658);
l_Y_658 = r_USER_OPERATOR(p_NAME, l_ARGS_657, p_LINE);
if ((l_Y_658 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
return r_CALL_SYM(l_Y_658, l_ARGS_657, p_LINE);
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
R14 * l_RT_659; memset(&l_RT_659, 0, sizeof l_RT_659);
l_RT_659 = r_REAL_TYPE(p_T);
R14 * l_VT_660; memset(&l_VT_660, 0, sizeof l_VT_660);
l_VT_660 = (p_V).f_T;
if (((((*(R14 *)rt_nil_check(l_VT_660))).f_KIND == g_T_NIL) && (((*(R14 *)rt_nil_check(l_RT_659))).f_KIND == g_T_PTR)))
{
return (p_V).f_C;
}
if (((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R14 *)rt_nil_check(l_VT_660))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_660)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
return (p_V).f_C;
}
if ((!r_SAME_CLASS(l_RT_659, l_VT_660)))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_660), (r_TYPE_NAME(l_VT_660)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_659), (r_TYPE_NAME(l_RT_659)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R14 *)rt_nil_check(l_RT_659))).f_KIND == g_T_INT))
{
return r_RANGE_CHECK(l_RT_659, r_RESCALE(p_V, ((*(R14 *)rt_nil_check(l_RT_659))).f_SCALE, p_LINE), p_SELF);
}
else if (((((*(R14 *)rt_nil_check(l_RT_659))).f_KIND == g_T_FLOAT) || (((*(R14 *)rt_nil_check(l_RT_659))).f_KIND == g_T_ENUM)))
{
return r_RANGE_CHECK(l_RT_659, (p_V).f_C, p_SELF);
}
else if (((((*(R14 *)rt_nil_check(l_RT_659))).f_KIND == g_T_STR) || (((*(R14 *)rt_nil_check(l_RT_659))).f_KIND == g_T_BITS)))
{
if (((((*(R14 *)rt_nil_check(l_RT_659))).f_MLEN).f_OK && (((*(R14 *)rt_nil_check(l_VT_660))).f_MLEN).f_OK))
{
if ((!((((*(R14 *)rt_nil_check(l_RT_659))).f_MLEN).f_V == (((*(R14 *)rt_nil_check(l_VT_660))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R14 *)rt_nil_check(l_RT_659))).f_KIND == g_T_PTR))
{
if ((!r_SAME_TYPE(r_TARGET(l_RT_659), r_TARGET(l_VT_660))))
{
r_FAIL(p_LINE, rt_str("the pointers are to different types (3.10.5)", 44));
}
}
else if ((((*(R14 *)rt_nil_check(l_RT_659))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_659)) && (!r_HAS_ANY(l_VT_660))))
{
if ((!r_SAME_ARGS(((*(R14 *)rt_nil_check(l_RT_659))).f_ARGS, ((*(R14 *)rt_nil_check(l_VT_660))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R14 *)rt_nil_check(l_RT_659))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R14 *)rt_nil_check(l_RT_659))).f_ELEM, ((*(R14 *)rt_nil_check(l_VT_660))).f_ELEM)))
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
R19 * l_ARGS_661; memset(&l_ARGS_661, 0, sizeof l_ARGS_661);
l_ARGS_661 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R13 * l_Y_662; memset(&l_Y_662, 0, sizeof l_Y_662);
((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(l_ARGS_661))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_662 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_661, p_LINE, 0);
if ((l_Y_662 == NULL))
{
((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(l_ARGS_661))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_662 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_661, p_LINE, 0);
}
if ((l_Y_662 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
return r_CATS((r_CALL_SYM(l_Y_662, l_ARGS_661, p_LINE)).f_C, rt_str(";", 1));
}
}
return r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
rt_raise(RT_X_INIT);
}
static R18 r_UNARY(R11 * p_E) { 
R18 l_A_663; memset(&l_A_663, 0, sizeof l_A_663);
S_R18(&l_A_663, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
R14 * l_T_664; memset(&l_T_664, 0, sizeof l_T_664);
l_T_664 = (l_A_663).f_T;
R7 l_OP_665; memset(&l_OP_665, 0, sizeof l_OP_665);
S_R7(&l_OP_665, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
if ((((*(R14 *)rt_nil_check(l_T_664))).f_KIND == g_T_ABS))
{
{
R19 * l_ARGS_666; memset(&l_ARGS_666, 0, sizeof l_ARGS_666);
l_ARGS_666 = r_VAL_ARG(l_A_663, NULL);
R13 * l_Y_667; memset(&l_Y_667, 0, sizeof l_Y_667);
l_Y_667 = r_USER_OPERATOR(r_OP_NAME(l_OP_665, 1), l_ARGS_666, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
if ((l_Y_667 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_664));
}
return r_CALL_SYM(l_Y_667, l_ARGS_666, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
}
}
if (r_TEQS(l_OP_665, rt_str("NOT", 3)))
{
if ((((*(R14 *)rt_nil_check(l_T_664))).f_KIND == g_T_BOOL))
{
return r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_663).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
}
else if ((((*(R14 *)rt_nil_check(l_T_664))).f_KIND == g_T_BITS))
{
return r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_663).f_C), l_T_664);
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R14 *)rt_nil_check(l_T_664))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_665, rt_str("-", 1)))
{
return r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_663).f_C), r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_664))).f_SCALE));
}
return r_MKET((l_A_663).f_C, r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_664))).f_SCALE));
}
else if ((((*(R14 *)rt_nil_check(l_T_664))).f_KIND == g_T_FLOAT))
{
if (r_TEQS(l_OP_665, rt_str("-", 1)))
{
return r_MKET(r_FMT1(rt_str("(-@)", 4), (l_A_663).f_C), l_T_664);
}
return l_A_663;
}
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_664));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R11 * p_E) { 
return (((((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R11 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
rt_raise(RT_X_INIT);
}
static R18 r_BINARY(R11 * p_E) { 
R7 l_OP_668; memset(&l_OP_668, 0, sizeof l_OP_668);
S_R7(&l_OP_668, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
R18 l_A_669; memset(&l_A_669, 0, sizeof l_A_669);
R18 l_B_670; memset(&l_B_670, 0, sizeof l_B_670);
if ((r_TEQS(l_OP_668, rt_str("&", 1)) || r_TEQS(l_OP_668, rt_str("!", 1))))
{
{
R12 l_MA_671; memset(&l_MA_671, 0, sizeof l_MA_671);
S_R12(&l_MA_671, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
R7 l_CA_672; memset(&l_CA_672, 0, sizeof l_CA_672);
S_R7(&l_CA_672, r_BOOL_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
R7 l_CB_673; memset(&l_CB_673, 0, sizeof l_CB_673);
S_R7(&l_CB_673, r_BOOL_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_668, rt_str("&", 1)))
{
return r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_672, l_CB_673), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
}
return r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_672, l_CB_673), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
}
}
if ((r_IS_LITERALISH(((*(R11 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R11 *)rt_nil_check(p_E))).f_B))))
{
S_R18(&l_B_670, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R18(&l_A_669, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, (l_B_670).f_T), 0);
}
else
{
S_R18(&l_A_669, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R18(&l_B_670, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B, (l_A_669).f_T), 0);
}
return r_APPLY_OPERATOR(p_E, l_OP_668, l_A_669, l_B_670);
rt_raise(RT_X_INIT);
}
static R18 r_APPLY_OPERATOR(R11 * p_E, R7 p_OP, R18 p_A, R18 p_B) { 
R14 * l_AT_674; memset(&l_AT_674, 0, sizeof l_AT_674);
l_AT_674 = (p_A).f_T;
R14 * l_BT_675; memset(&l_BT_675, 0, sizeof l_BT_675);
l_BT_675 = (p_B).f_T;
rt_int l_LINE_676; memset(&l_LINE_676, 0, sizeof l_LINE_676);
l_LINE_676 = ((*(R11 *)rt_nil_check(p_E))).f_LINE;
if ((((*(R11 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL)))
{
{
R7 l_NAME_677; memset(&l_NAME_677, 0, sizeof l_NAME_677);
S_R7(&l_NAME_677, r_OP_NAME(p_OP, 0), 0);
if ((((!(r_LOOKUP(l_NAME_677) == NULL)) || (((*(R14 *)rt_nil_check(l_AT_674))).f_KIND == g_T_ABS)) || (((*(R14 *)rt_nil_check(l_BT_675))).f_KIND == g_T_ABS)))
{
{
R19 * l_ARGS_678; memset(&l_ARGS_678, 0, sizeof l_ARGS_678);
l_ARGS_678 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R13 * l_Y_679; memset(&l_Y_679, 0, sizeof l_Y_679);
l_Y_679 = r_USER_OPERATOR(l_NAME_677, l_ARGS_678, l_LINE_676);
if ((!(l_Y_679 == NULL)))
{
return r_CALL_SYM(l_Y_679, l_ARGS_678, l_LINE_676);
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{
R13 * l_Q_680; memset(&l_Q_680, 0, sizeof l_Q_680);
l_Q_680 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_678, l_LINE_676);
if ((!(l_Q_680 == NULL)))
{
return r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_680, l_ARGS_678, l_LINE_676)).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
}
}
}
if (((((*(R14 *)rt_nil_check(l_AT_674))).f_KIND == g_T_ABS) || (((*(R14 *)rt_nil_check(l_BT_675))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_676, rt_str("no such operation for the abstract type: ", 41), l_NAME_677);
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
if (((((*(R14 *)rt_nil_check(l_AT_674))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_BT_675))).f_KIND == g_T_INT)))
{
{
rt_int l_S_681; memset(&l_S_681, 0, sizeof l_S_681);
l_S_681 = r_MAX_INT(((*(R14 *)rt_nil_check(l_AT_674))).f_SCALE, ((*(R14 *)rt_nil_check(l_BT_675))).f_SCALE);
return r_MKET(r_FMT3(rt_str("(@ @ @)", 7), r_RESCALE_C((p_A).f_C, ((*(R14 *)rt_nil_check(l_AT_674))).f_SCALE, l_S_681), p_OP, r_RESCALE_C((p_B).f_C, ((*(R14 *)rt_nil_check(l_BT_675))).f_SCALE, l_S_681)), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
}
}
else if (((((*(R14 *)rt_nil_check(l_AT_674))).f_KIND == g_T_FLOAT) && (((*(R14 *)rt_nil_check(l_BT_675))).f_KIND == g_T_FLOAT)))
{
return r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
}
else if (((((*(R14 *)rt_nil_check(l_AT_674))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_674, l_BT_675)))
{
if (((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_AT_674))).f_BASE))).f_UNORDERED)
{
r_FAIL(l_LINE_676, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
return r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
}
r_FAILT(l_LINE_676, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R14 *)rt_nil_check(l_AT_674))).f_KIND == g_T_STR) && (((*(R14 *)rt_nil_check(l_BT_675))).f_KIND == g_T_STR))) || (((((*(R14 *)rt_nil_check(l_AT_674))).f_KIND == g_T_BITS) && (((*(R14 *)rt_nil_check(l_BT_675))).f_KIND == g_T_BITS)))))
{
{
R14 * l_T_682; memset(&l_T_682, 0, sizeof l_T_682);
l_T_682 = r_NEW_TYP(((*(R14 *)rt_nil_check(l_AT_674))).f_KIND);
((*(R14 *)rt_nil_check(l_T_682))).f_BASE = ((*(R14 *)rt_nil_check(l_AT_674))).f_BASE;
if (((((*(R14 *)rt_nil_check(l_AT_674))).f_MLEN).f_OK && (((*(R14 *)rt_nil_check(l_BT_675))).f_MLEN).f_OK))
{
S_R12(&((*(R14 *)rt_nil_check(l_T_682))).f_MLEN, r_SOME(rt_add((((*(R14 *)rt_nil_check(l_AT_674))).f_MLEN).f_V, (((*(R14 *)rt_nil_check(l_BT_675))).f_MLEN).f_V)), 0);
S_R7(&((*(R14 *)rt_nil_check(l_T_682))).f_LEN_C, r_NUM((((*(R14 *)rt_nil_check(l_T_682))).f_MLEN).f_V), 0);
}
return r_MKET(r_FMT2(rt_str("rt_str_cat(@, @)", 16), (p_A).f_C, (p_B).f_C), l_T_682);
}
}
r_FAIL(l_LINE_676, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R14 *)rt_nil_check(l_AT_674))).f_KIND == g_T_BITS) && (((*(R14 *)rt_nil_check(l_BT_675))).f_KIND == g_T_BITS)))
{
return r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_674);
}
r_FAILT(l_LINE_676, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R14 *)rt_nil_check(l_AT_674))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_BT_675))).f_KIND == g_T_INT)))
{
return r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
}
else if (((((*(R14 *)rt_nil_check(l_AT_674))).f_KIND == g_T_FLOAT) && (((*(R14 *)rt_nil_check(l_BT_675))).f_KIND == g_T_FLOAT)))
{
{
R14 * l_T_683; memset(&l_T_683, 0, sizeof l_T_683);
l_T_683 = r_NEW_TYP(g_T_FLOAT);
((*(R14 *)rt_nil_check(l_T_683))).f_SCALE = r_MAX_INT(((*(R14 *)rt_nil_check(l_AT_674))).f_SCALE, ((*(R14 *)rt_nil_check(l_BT_675))).f_SCALE);
if (((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))))
{
return r_MKET(r_FMT3(rt_str("rt_b_fchk(@ @ @)", 16), (p_A).f_C, p_OP, (p_B).f_C), l_T_683);
}
else if (r_TEQS(p_OP, rt_str("/", 1)))
{
return r_MKET(r_FMT2(rt_str("rt_b_fchk(rt_fdiv(@, @))", 24), (p_A).f_C, (p_B).f_C), l_T_683);
}
}
}
if (((((((*(R14 *)rt_nil_check(l_AT_674))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_BT_675))).f_KIND == g_T_FLOAT))) || (((((*(R14 *)rt_nil_check(l_AT_674))).f_KIND == g_T_FLOAT) && (((*(R14 *)rt_nil_check(l_BT_675))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_676, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_676, rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_674), (r_TYPE_NAME(l_AT_674)).f_LEN)));
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
R14 * l_AT_684; memset(&l_AT_684, 0, sizeof l_AT_684);
l_AT_684 = r_REAL_TYPE((p_A).f_T);
R14 * l_BT_685; memset(&l_BT_685, 0, sizeof l_BT_685);
l_BT_685 = r_REAL_TYPE((p_B).f_T);
R7 l_R_686; memset(&l_R_686, 0, sizeof l_R_686);
if (((((*(R14 *)rt_nil_check(l_AT_684))).f_KIND == g_T_NIL) || (((*(R14 *)rt_nil_check(l_BT_685))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R14 *)rt_nil_check(l_AT_684))).f_KIND == g_T_PTR) || (((*(R14 *)rt_nil_check(l_BT_685))).f_KIND == g_T_PTR)) || (((((*(R14 *)rt_nil_check(l_AT_684))).f_KIND == g_T_NIL) && (((*(R14 *)rt_nil_check(l_BT_685))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R7(&l_R_686, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R14 *)rt_nil_check(l_AT_684))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_BT_685))).f_KIND == g_T_INT)))
{
{
rt_int l_S_687; memset(&l_S_687, 0, sizeof l_S_687);
l_S_687 = r_MAX_INT(((*(R14 *)rt_nil_check(l_AT_684))).f_SCALE, ((*(R14 *)rt_nil_check(l_BT_685))).f_SCALE);
S_R7(&l_R_686, r_FMT2(rt_str("(@ == @)", 8), r_RESCALE_C((p_A).f_C, ((*(R14 *)rt_nil_check(l_AT_684))).f_SCALE, l_S_687), r_RESCALE_C((p_B).f_C, ((*(R14 *)rt_nil_check(l_BT_685))).f_SCALE, l_S_687)), 0);
}
}
else
{
if ((!r_SAME_CLASS(l_AT_684, l_BT_685)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R14 *)rt_nil_check(l_AT_684))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
if (((((*(R14 *)rt_nil_check(l_AT_684))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_684) || r_HAS_ANY(l_BT_685)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
S_R7(&l_R_686, r_EQUAL_CODE(l_AT_684, (p_A).f_C, (p_B).f_C), 0);
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R7(&l_R_686, r_FMT1(rt_str("(!@)", 4), l_R_686), 0);
}
return r_MKET(l_R_686, ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
rt_raise(RT_X_INIT);
}
static R18 r_FIXED_ARITH(R11 * p_E, R7 p_OP, R18 p_A, R18 p_B) { 
rt_int l_S1_688; memset(&l_S1_688, 0, sizeof l_S1_688);
l_S1_688 = ((*(R14 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_689; memset(&l_S2_689, 0, sizeof l_S2_689);
l_S2_689 = ((*(R14 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_690; memset(&l_S_690, 0, sizeof l_S_690);
l_S_690 = r_MAX_INT(l_S1_688, l_S2_689);
R7 l_FN_691; memset(&l_FN_691, 0, sizeof l_FN_691);
S_R7(&l_FN_691, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R7(&l_FN_691, r_MK(rt_str("rt_sub", 6)), 0);
}
return r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_691, r_RESCALE_C((p_A).f_C, l_S1_688, l_S_690), r_RESCALE_C((p_B).f_C, l_S2_689, l_S_690)), r_INT_TYPE(l_S_690));
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
return r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_688, l_S2_689)));
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R22 *)rt_nil_check(g_W))).f_ROUNDED)
{
return r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_688, l_S2_689)));
}
return r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_688, l_S2_689)));
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R22 *)rt_nil_check(g_W))).f_ROUNDED)
{
return r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_688));
}
return r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_688));
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
rt_int l_S1_692; memset(&l_S1_692, 0, sizeof l_S1_692);
l_S1_692 = ((*(R14 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_693; memset(&l_S2_693, 0, sizeof l_S2_693);
l_S2_693 = ((*(R14 *)rt_nil_check((p_B).f_T))).f_SCALE;
R7 l_RND_694; memset(&l_RND_694, 0, sizeof l_RND_694);
S_R7(&l_RND_694, r_MK(rt_str("0", 1)), 0);
if (((!(((*(R14 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R14 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R22 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R7(&l_RND_694, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R11 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R11 *)rt_nil_check(p_E))).f_LINE);
return r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
}
{
R12 l_SM_695; memset(&l_SM_695, 0, sizeof l_SM_695);
S_R12(&l_SM_695, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_696; memset(&l_S_696, 0, sizeof l_S_696);
l_S_696 = (l_SM_695).f_V;
rt_int l_SR_697; memset(&l_SR_697, 0, sizeof l_SR_697);
l_SR_697 = r_MAX_INT(l_S1_692, l_S2_693);
if ((!(l_SM_695).f_OK))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
return r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_696, l_S1_692), l_S2_693)), l_RND_694), r_INT_TYPE(l_S_696));
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
return r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_696, l_S1_692), l_S2_693)), l_RND_694), r_INT_TYPE(l_S_696));
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
return r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_692), r_NUM(l_S_696), l_RND_694), r_INT_TYPE(l_S_696));
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R7 l_FN_698; memset(&l_FN_698, 0, sizeof l_FN_698);
S_R7(&l_FN_698, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R7(&l_FN_698, r_MK(rt_str("rt_sub", 6)), 0);
}
return r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT3(rt_str("@(@, @)", 7), l_FN_698, r_RESCALE_C((p_A).f_C, l_S1_692, l_SR_697), r_RESCALE_C((p_B).f_C, l_S2_693, l_SR_697)), r_NUM(l_SR_697), r_NUM(l_S_696), l_RND_694), r_INT_TYPE(l_S_696));
}
}
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R18 r_IN_EXPR(R11 * p_E) { 
R18 l_V_699; memset(&l_V_699, 0, sizeof l_V_699);
S_R18(&l_V_699, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
R14 * l_T_700; memset(&l_T_700, 0, sizeof l_T_700);
l_T_700 = r_REAL_TYPE((l_V_699).f_T);
R11 * l_R_701; memset(&l_R_701, 0, sizeof l_R_701);
l_R_701 = ((*(R11 *)rt_nil_check(p_E))).f_B;
R7 l_TMP_702; memset(&l_TMP_702, 0, sizeof l_TMP_702);
S_R7(&l_TMP_702, r_NEW_NAME(rt_str("iv", 2)), 0);
R18 l_LO_703; memset(&l_LO_703, 0, sizeof l_LO_703);
R18 l_HI_704; memset(&l_HI_704, 0, sizeof l_HI_704);
R7 l_LOC_705; memset(&l_LOC_705, 0, sizeof l_LOC_705);
R7 l_HIC_706; memset(&l_HIC_706, 0, sizeof l_HIC_706);
R7 l_LO_OP_707; memset(&l_LO_OP_707, 0, sizeof l_LO_OP_707);
S_R7(&l_LO_OP_707, r_MK(rt_str("<=", 2)), 0);
R7 l_HI_OP_708; memset(&l_HI_OP_708, 0, sizeof l_HI_OP_708);
S_R7(&l_HI_OP_708, r_MK(rt_str("<=", 2)), 0);
S_R18(&l_LO_703, r_EXPR(((*(R11 *)rt_nil_check(l_R_701))).f_A, l_T_700), 0);
S_R18(&l_HI_704, r_EXPR(((*(R11 *)rt_nil_check(l_R_701))).f_B, l_T_700), 0);
if (((((*(R14 *)rt_nil_check(l_T_700))).f_KIND == g_T_ENUM) && ((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_700))).f_BASE))).f_UNORDERED))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R14 *)rt_nil_check(l_T_700))).f_KIND == g_T_INT) || (((*(R14 *)rt_nil_check(l_T_700))).f_KIND == g_T_FLOAT)) || (((*(R14 *)rt_nil_check(l_T_700))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
S_R7(&l_LOC_705, r_CONVERT_TO_SCALE(l_LO_703, l_T_700, ((*(R11 *)rt_nil_check(p_E))).f_LINE), 0);
S_R7(&l_HIC_706, r_CONVERT_TO_SCALE(l_HI_704, l_T_700, ((*(R11 *)rt_nil_check(p_E))).f_LINE), 0);
if (((((*(R11 *)rt_nil_check(l_R_701))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(l_R_701))).f_IV == ((rt_int)3LL))))
{
S_R7(&l_LO_OP_707, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R11 *)rt_nil_check(l_R_701))).f_IV >= ((rt_int)2LL)))
{
S_R7(&l_HI_OP_708, r_MK(rt_str("<", 1)), 0);
}
{
R7 l_P1_709; memset(&l_P1_709, 0, sizeof l_P1_709);
S_R7(&l_P1_709, r_FMT4(rt_str("({ @ @ = @; (@) ", 16), r_CTYPE(l_T_700), l_TMP_702, (l_V_699).f_C, l_LOC_705), 0);
R7 l_P2_710; memset(&l_P2_710, 0, sizeof l_P2_710);
S_R7(&l_P2_710, r_FMT4(rt_str("@@ @ && @ ", 10), l_P1_709, l_LO_OP_707, l_TMP_702, l_TMP_702), 0);
return r_MKET(r_FMT3(rt_str("@@ (@); })", 10), l_P2_710, l_HI_OP_708, l_HIC_706), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
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
rt_int l_B_711; memset(&l_B_711, 0, sizeof l_B_711);
l_B_711 = ((rt_int)0LL);
rt_int l_P_712; memset(&l_P_712, 0, sizeof l_P_712);
l_P_712 = ((rt_int)1LL);
for (;;) {
if ((l_P_712 >= p_N)) goto L_end713;
{
l_B_711 = rt_add(l_B_711, ((rt_int)1LL));
l_P_712 = rt_mul(l_P_712, ((rt_int)2LL));
}
} L_end713: ;
return l_B_711;
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R14 * p_T) { 
if ((!(((*(R14 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R12 l_M_714; memset(&l_M_714, 0, sizeof l_M_714);
S_R12(&l_M_714, r_MANIFEST(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_714).f_OK)
{
return (l_M_714).f_V;
}
}
}
}
return r_BITS_FOR(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
rt_raise(RT_X_INIT);
}
static R18 r_ATTRIBUTE(R18 p_B, R7 p_NAME, rt_int p_LINE) { 
R14 * l_T_715; memset(&l_T_715, 0, sizeof l_T_715);
l_T_715 = (p_B).f_T;
rt_int l_K_716; memset(&l_K_716, 0, sizeof l_K_716);
l_K_716 = ((*(R14 *)rt_nil_check(l_T_715))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
return r_SIZE_OF(l_T_715, (p_B).f_C);
}
if ((l_K_716 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
return r_INT_ET(((*(R14 *)rt_nil_check(l_T_715))).f_SCALE);
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
if (((((*(R14 *)rt_nil_check(l_T_715))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
return r_MKET(((*(R14 *)rt_nil_check(l_T_715))).f_LO_C, r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_715))).f_SCALE));
}
return r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_715))).f_SCALE));
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R14 *)rt_nil_check(l_T_715))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
return r_MKET(((*(R14 *)rt_nil_check(l_T_715))).f_HI_C, r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_715))).f_SCALE));
}
return r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE(((*(R14 *)rt_nil_check(l_T_715))).f_SCALE));
}
}
else if ((l_K_716 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
return r_INT_ET(((*(R14 *)rt_nil_check(l_T_715))).f_SCALE);
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
if (((((*(R14 *)rt_nil_check(l_T_715))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
return r_MKET(((*(R14 *)rt_nil_check(l_T_715))).f_LO_C, l_T_715);
}
return r_MKET(r_MK(rt_str("(-DBL_MAX)", 10)), l_T_715);
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R14 *)rt_nil_check(l_T_715))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
return r_MKET(((*(R14 *)rt_nil_check(l_T_715))).f_HI_C, l_T_715);
}
return r_MKET(r_MK(rt_str("DBL_MAX", 7)), l_T_715);
}
}
else if ((l_K_716 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R14 *)rt_nil_check(l_T_715))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
return r_MKET(((*(R14 *)rt_nil_check(l_T_715))).f_LO_C, ((*(R14 *)rt_nil_check(l_T_715))).f_BASE);
}
return r_MKET(r_MK(rt_str("0", 1)), ((*(R14 *)rt_nil_check(l_T_715))).f_BASE);
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R14 *)rt_nil_check(l_T_715))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
return r_MKET(((*(R14 *)rt_nil_check(l_T_715))).f_HI_C, ((*(R14 *)rt_nil_check(l_T_715))).f_BASE);
}
return r_MKET(r_NUM(rt_sub(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_715))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R14 *)rt_nil_check(l_T_715))).f_BASE);
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R14 *)rt_nil_check(l_T_715))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
return r_MKET(r_FMT2(rt_str("((@) - (@) + 1)", 15), ((*(R14 *)rt_nil_check(l_T_715))).f_HI_C, ((*(R14 *)rt_nil_check(l_T_715))).f_LO_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
return r_INT_ET(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_715))).f_BASE))).f_NLITS);
}
}
else if (((l_K_716 == g_T_STR) || (l_K_716 == g_T_BITS)))
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
else if ((l_K_716 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
return r_INT_ET(((*(R14 *)rt_nil_check(l_T_715))).f_DIMS);
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R14 *)rt_nil_check(l_T_715))).f_DIMS == ((rt_int)1LL))))
{
return r_MKET(r_FMT1(rt_str("rt_b_extent(1, (@).lo, (@).hi)", 30), (p_B).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
return r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
}
}
else if ((l_K_716 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R14 *)rt_nil_check(l_T_715))).f_SCALE == ((rt_int)1LL)))
{
return r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
}
return r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
}
}
else if (((l_K_716 == g_T_ABS) || (l_K_716 == g_T_REC)))
{
{
R14 * l_U_717; memset(&l_U_717, 0, sizeof l_U_717);
l_U_717 = l_T_715;
if ((l_K_716 == g_T_ABS))
{
l_U_717 = ((*(R14 *)rt_nil_check(l_T_715))).f_BASE;
}
if ((((*(R14 *)rt_nil_check(l_U_717))).f_KIND == g_T_REC))
{
{
R15 * l_F_718; memset(&l_F_718, 0, sizeof l_F_718);
l_F_718 = r_FIND_FIELD(l_U_717, p_NAME);
if ((!(l_F_718 == NULL)))
{
if ((!(((*(R15 *)rt_nil_check(l_F_718))).f_KIND == ((rt_int)0LL))))
{
return r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R15 *)rt_nil_check(l_F_718))).f_CNAME), ((*(R15 *)rt_nil_check(l_F_718))).f_T);
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
R11 * l_N_719; memset(&l_N_719, 0, sizeof l_N_719);
l_N_719 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_N_719))).f_NAME, r_MKN(p_NAME), 0);
return l_N_719;
rt_raise(RT_X_INIT);
}
static R18 r_SIZE_OF(R14 * p_T, R7 p_C) { 
rt_int l_K_720; memset(&l_K_720, 0, sizeof l_K_720);
l_K_720 = ((*(R14 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_720 == g_T_INT))
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
else if ((l_K_720 == g_T_FLOAT))
{
return r_INT_ET(((rt_int)64LL));
}
else if ((l_K_720 == g_T_BOOL))
{
return r_INT_ET(((rt_int)1LL));
}
else if ((l_K_720 == g_T_ENUM))
{
return r_INT_ET(r_ENUM_SIZE(p_T));
}
else if ((l_K_720 == g_T_BITS))
{
return r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
else if ((l_K_720 == g_T_STR))
{
return r_MKET(r_FMT1(rt_str("(rt_int)((@).len * 8)", 21), p_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
else if (((l_K_720 == g_T_PTR) || (l_K_720 == g_T_SEM)))
{
return r_INT_ET(((rt_int)64LL));
}
else if ((l_K_720 == g_T_ABS))
{
return r_SIZE_OF(((*(R14 *)rt_nil_check(p_T))).f_BASE, p_C);
}
else if ((l_K_720 == g_T_ARR))
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
R14 * l_T_721; memset(&l_T_721, 0, sizeof l_T_721);
l_T_721 = r_RESOLVE_USER_NAME(p_TNAME, p_LINE);
return r_ATTRIBUTE(r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(l_T_721)), l_T_721), p_NAME, p_LINE);
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
R14 * l_T_722; memset(&l_T_722, 0, sizeof l_T_722);
l_T_722 = p_WANT;
if ((!(((*(R11 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_722 = r_RESOLVE(((*(R11 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_722 == NULL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_722 = r_REAL_TYPE(l_T_722);
if ((!(((*(R14 *)rt_nil_check(l_T_722))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_722))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R7 l_TMP_723; memset(&l_TMP_723, 0, sizeof l_TMP_723);
S_R7(&l_TMP_723, r_NEW_NAME(rt_str("rc", 2)), 0);
R7 l_R_724; memset(&l_R_724, 0, sizeof l_R_724);
S_R7(&l_R_724, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R14 *)rt_nil_check(l_T_722))).f_CNAME, l_TMP_723, l_TMP_723, l_TMP_723), 0);
R15 * l_F_725; memset(&l_F_725, 0, sizeof l_F_725);
l_F_725 = ((*(R14 *)rt_nil_check(l_T_722))).f_FIELDS;
S_R7(&l_R_724, r_FMT2(rt_str("@@", 2), l_R_724, r_INIT_CODE(l_T_722, l_TMP_723)), 0);
for (;;) {
if ((l_F_725 == NULL)) goto L_end726;
{
if ((((*(R15 *)rt_nil_check(l_F_725))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R15 *)rt_nil_check(l_F_725))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R15 *)rt_nil_check(l_F_725))).f_LABELS, (r_TAG_VALUE(l_T_722, ((*(R15 *)rt_nil_check(l_F_725))).f_TAGF)).f_V, ((*(R15 *)rt_nil_check(r_FIND_FIELD(l_T_722, ((*(R15 *)rt_nil_check(l_F_725))).f_TAGF)))).f_T)))
{
{
R11 * l_INIT_727; memset(&l_INIT_727, 0, sizeof l_INIT_727);
l_INIT_727 = r_FIND_INIT(((*(R11 *)rt_nil_check(p_E))).f_A, ((*(R15 *)rt_nil_check(l_F_725))).f_NAME);
if ((l_INIT_727 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R15 *)rt_nil_check(l_F_725))).f_NAME);
}
S_R7(&l_R_724, r_FMT2(rt_str("@ @", 3), l_R_724, r_STORE_CODE(((*(R15 *)rt_nil_check(l_F_725))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_723, ((*(R15 *)rt_nil_check(l_F_725))).f_CNAME), r_EXPR(((*(R11 *)rt_nil_check(l_INIT_727))).f_A, ((*(R15 *)rt_nil_check(l_F_725))).f_T), ((*(R11 *)rt_nil_check(l_INIT_727))).f_LINE, l_TMP_723)), 0);
}
}
}
l_F_725 = ((*(R15 *)rt_nil_check(l_F_725))).f_NEXT;
}
} L_end726: ;
{
R11 * l_P_728; memset(&l_P_728, 0, sizeof l_P_728);
l_P_728 = ((*(R11 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_728 == NULL)) goto L_end729;
{
{
R15 * l_G_730; memset(&l_G_730, 0, sizeof l_G_730);
l_G_730 = r_FIND_FIELD(l_T_722, ((*(R11 *)rt_nil_check(l_P_728))).f_NAME);
if ((l_G_730 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(l_P_728))).f_LINE, rt_str("no such field: ", 15), ((*(R11 *)rt_nil_check(l_P_728))).f_NAME);
}
if ((!(((*(R15 *)rt_nil_check(l_G_730))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R11 *)rt_nil_check(l_P_728))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R11 *)rt_nil_check(l_P_728))).f_NAME);
}
r_CHECK_VARIANT(l_G_730, l_T_722, NULL, ((*(R11 *)rt_nil_check(l_P_728))).f_LINE);
}
l_P_728 = ((*(R11 *)rt_nil_check(l_P_728))).f_NEXT;
}
} L_end729: ;
}
return r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_724, l_TMP_723), l_T_722);
}
rt_raise(RT_X_INIT);
}
static R11 * r_FIND_INIT(R11 * p_L, R7 p_NAME) { 
R11 * l_P_731; memset(&l_P_731, 0, sizeof l_P_731);
l_P_731 = p_L;
for (;;) {
if ((l_P_731 == NULL)) goto L_end732;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_P_731))).f_NAME, p_NAME))
{
return l_P_731;
}
l_P_731 = ((*(R11 *)rt_nil_check(l_P_731))).f_NEXT;
}
} L_end732: ;
return NULL;
rt_raise(RT_X_INIT);
}
static R18 r_ARRAY_CONSTRUCTOR(R11 * p_E, R14 * p_WANT) { 
rt_int l_DIMS_733; memset(&l_DIMS_733, 0, sizeof l_DIMS_733);
l_DIMS_733 = ((rt_int)0LL);
R11 * l_P_734; memset(&l_P_734, 0, sizeof l_P_734);
l_P_734 = p_E;
R14 * l_ELEM_735; memset(&l_ELEM_735, 0, sizeof l_ELEM_735);
l_ELEM_735 = NULL;
for (;;) {
if ((!(((*(R11 *)rt_nil_check(l_P_734))).f_KIND == g_N_ARRCONS))) goto L_end736;
{
l_DIMS_733 = rt_add(l_DIMS_733, ((rt_int)1LL));
l_P_734 = ((*(R11 *)rt_nil_check(l_P_734))).f_A;
}
} L_end736: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R14 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_735 = ((*(R14 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_735 == NULL))
{
l_ELEM_735 = (r_EXPR(l_P_734, NULL)).f_T;
if (((((*(R14 *)rt_nil_check(l_ELEM_735))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_ELEM_735))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_735 = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
}
}
{
R14 * l_A_737; memset(&l_A_737, 0, sizeof l_A_737);
l_A_737 = r_ARRAY_OF(l_ELEM_735, l_DIMS_733);
R7 l_TMP_738; memset(&l_TMP_738, 0, sizeof l_TMP_738);
S_R7(&l_TMP_738, r_NEW_NAME(rt_str("ac", 2)), 0);
R7 l_R_739; memset(&l_R_739, 0, sizeof l_R_739);
S_R7(&l_R_739, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R14 *)rt_nil_check(l_A_737))).f_CNAME, l_TMP_738, l_TMP_738), 0);
rt_int l_K_740; memset(&l_K_740, 0, sizeof l_K_740);
l_K_740 = ((rt_int)0LL);
S_R7(&l_R_739, r_FMT2(rt_str("@@); ", 5), l_R_739, l_TMP_738), 0);
l_P_734 = p_E;
{ rt_int it742_lo = ((rt_int)0LL), it742_hi = rt_sub(l_DIMS_733, ((rt_int)1LL));
for (rt_int it742 = it742_lo; it742 <= it742_hi; it742++) {
{
S_R7(&l_R_739, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_739, l_TMP_738, r_NUM(it742), l_TMP_738), 0);
S_R7(&l_R_739, r_FMT3(rt_str("@@] = @;", 8), l_R_739, r_NUM(it742), r_NUM(rt_sub(r_LIST_LENGTH(((*(R11 *)rt_nil_check(l_P_734))).f_A), ((rt_int)1LL)))), 0);
l_P_734 = ((*(R11 *)rt_nil_check(l_P_734))).f_A;
}
} } L_end741: ;
S_R7(&l_R_739, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_739, l_TMP_738, l_TMP_738, r_NUM(l_DIMS_733)), 0);
S_R7(&l_R_739, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_739, l_TMP_738, l_TMP_738), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_733, l_A_737, l_TMP_738, &l_R_739, &l_K_740);
return r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_739, l_TMP_738), l_A_737);
}
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R11 * p_E, rt_int p_DIMS, R14 * p_A, R7 p_TMP, R7 *p_R, rt_int *p_K) { 
R11 * l_P_743; memset(&l_P_743, 0, sizeof l_P_743);
l_P_743 = ((*(R11 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_743 == NULL)) goto L_end744;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_743, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R11 *)rt_nil_check(l_P_743))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R11 *)rt_nil_check(l_P_743))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R14 *)rt_nil_check(p_A))).f_ELEM))
{
S_R7(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R14 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R7(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R14 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_743, ((*(R14 *)rt_nil_check(p_A))).f_ELEM), ((*(R11 *)rt_nil_check(l_P_743))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_743 = ((*(R11 *)rt_nil_check(l_P_743))).f_NEXT;
}
} L_end744: ;
}
static R14 * r_ARRAY_OF(R14 * p_ELEM, rt_int p_DIMS) { 
R14 * l_T_745; memset(&l_T_745, 0, sizeof l_T_745);
l_T_745 = r_NEW_TYP(g_T_ARR);
((*(R14 *)rt_nil_check(l_T_745))).f_ELEM = p_ELEM;
((*(R14 *)rt_nil_check(l_T_745))).f_DIMS = p_DIMS;
S_R7(&((*(R14 *)rt_nil_check(l_T_745))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
return l_T_745;
rt_raise(RT_X_INIT);
}
static R18 r_TYPE_SPECIFIER(R11 * p_E) { 
R14 * l_T_746; memset(&l_T_746, 0, sizeof l_T_746);
l_T_746 = r_RESOLVE(((*(R11 *)rt_nil_check(p_E))).f_A);
R18 l_V_747; memset(&l_V_747, 0, sizeof l_V_747);
S_R18(&l_V_747, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B, l_T_746), 0);
R14 * l_RT_748; memset(&l_RT_748, 0, sizeof l_RT_748);
l_RT_748 = r_REAL_TYPE(l_T_746);
if (((((*(R14 *)rt_nil_check((l_V_747).f_T))).f_KIND == g_T_BITS) && (!(((*(R14 *)rt_nil_check(l_RT_748))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R11 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R14 *)rt_nil_check(l_RT_748))).f_KIND == g_T_INT))
{
return r_MKET(r_RANGE_CHECK(l_RT_748, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_747).f_C), r_NO_TEXT()), l_T_746);
}
else if ((((*(R14 *)rt_nil_check(l_RT_748))).f_KIND == g_T_BOOL))
{
return r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_747).f_C), l_T_746);
}
else if ((((*(R14 *)rt_nil_check(l_RT_748))).f_KIND == g_T_ENUM))
{
return r_MKET(r_ENUM_OF_BITS(l_RT_748, (l_V_747).f_C), l_T_746);
}
else if ((((*(R14 *)rt_nil_check(l_RT_748))).f_KIND == g_T_FLOAT))
{
return r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_747).f_C), l_T_746);
}
else if ((((*(R14 *)rt_nil_check(l_RT_748))).f_KIND == g_T_STR))
{
return r_MKET(r_FMT1(rt_str("rt_b_str_of_bits(@)", 19), (l_V_747).f_C), l_T_746);
}
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
return r_MKET(r_CONVERT(l_V_747, l_T_746, ((*(R11 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), l_T_746);
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
R7 l_NAME_749; memset(&l_NAME_749, 0, sizeof l_NAME_749);
S_R7(&l_NAME_749, r_NEW_NAME(rt_str("reps", 4)), 0);
R11 * l_L_750; memset(&l_L_750, 0, sizeof l_L_750);
l_L_750 = ((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R7 l_R_751; memset(&l_R_751, 0, sizeof l_R_751);
S_R7(&l_R_751, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_750 == NULL)) goto L_end752;
{
{
R11 * l_V_753; memset(&l_V_753, 0, sizeof l_V_753);
l_V_753 = ((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_754; memset(&l_FOUND_754, 0, sizeof l_FOUND_754);
l_FOUND_754 = 0;
for (;;) {
if ((l_V_753 == NULL)) goto L_end755;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_V_753))).f_NAME, ((*(R11 *)rt_nil_check(l_L_750))).f_NAME))
{
S_R7(&l_R_751, r_FMT2(rt_str("@@, ", 4), l_R_751, (r_EXPR(((*(R11 *)rt_nil_check(l_V_753))).f_A, NULL)).f_C), 0);
l_FOUND_754 = 1;
}
l_V_753 = ((*(R11 *)rt_nil_check(l_V_753))).f_NEXT;
}
} L_end755: ;
if ((!l_FOUND_754))
{
r_FAILT(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R11 *)rt_nil_check(l_L_750))).f_NAME);
}
}
l_L_750 = ((*(R11 *)rt_nil_check(l_L_750))).f_NEXT;
}
} L_end752: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_749, r_NUM(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_751, l_NAME_749, l_NAME_749));
return r_FMT2(rt_str("@, @", 4), l_NAME_749, r_NUM(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
rt_raise(RT_X_INIT);
}
static R18 r_NEW_EXPR(R11 * p_E, R14 * p_WANT) { 
rt_int l_SEM_756; memset(&l_SEM_756, 0, sizeof l_SEM_756);
l_SEM_756 = r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_756 = (((*(R14 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_756)
{
{
R14 * l_T_757; memset(&l_T_757, 0, sizeof l_T_757);
l_T_757 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R14 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_757 = p_WANT;
}
}
return r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R14 *)rt_nil_check(l_T_757))).f_SCALE)), l_T_757);
}
}
{
R14 * l_T_758; memset(&l_T_758, 0, sizeof l_T_758);
l_T_758 = r_RESOLVE(r_EXPR_TO_TS(((*(R11 *)rt_nil_check(p_E))).f_A));
R14 * l_P_759; memset(&l_P_759, 0, sizeof l_P_759);
l_P_759 = r_NEW_TYP(g_T_PTR);
((*(R14 *)rt_nil_check(l_P_759))).f_TARGET = l_T_758;
((*(R14 *)rt_nil_check(l_P_759))).f_TARGET_TS = ((*(R11 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_758))
{
return r_MKET(r_FMT2(rt_str("({ @ *p = rt_alloc(sizeof *p); @ p; })", 38), r_CTYPE(l_T_758), r_INIT_CODE(l_T_758, r_MK(rt_str("(*p)", 4)))), l_P_759);
}
return r_MKET(r_FMT2(rt_str("((@ *)rt_alloc(sizeof (@)))", 27), r_CTYPE(l_T_758), r_CTYPE(l_T_758)), l_P_759);
}
rt_raise(RT_X_INIT);
}
static R11 * r_NTH(R11 * p_L, rt_int p_K) { 
R11 * l_P_760; memset(&l_P_760, 0, sizeof l_P_760);
l_P_760 = p_L;
{ rt_int it762_lo = ((rt_int)1LL), it762_hi = p_K;
for (rt_int it762 = it762_lo; it762 <= it762_hi; it762++) {
{
if ((!(l_P_760 == NULL)))
{
l_P_760 = ((*(R11 *)rt_nil_check(l_P_760))).f_NEXT;
}
}
} } L_end761: ;
return l_P_760;
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R11 * p_E, rt_int p_LO, rt_int p_HI) { 
rt_int l_N_763; memset(&l_N_763, 0, sizeof l_N_763);
l_N_763 = r_LIST_LENGTH(((*(R11 *)rt_nil_check(p_E))).f_A);
if (((l_N_763 < p_LO) || (l_N_763 > p_HI)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R11 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R11 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R11 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
}
static R7 r_ROUNDING_ARG(R11 * p_E, rt_int p_N) { 
R11 * l_L_764; memset(&l_L_764, 0, sizeof l_L_764);
l_L_764 = r_NTH(((*(R11 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_764 == NULL)))
{
if (((((*(R11 *)rt_nil_check(l_L_764))).f_KIND == g_N_QUAL) && ((((*(R11 *)rt_nil_check(l_L_764))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R11 *)rt_nil_check(l_L_764))).f_NAME, rt_str("ROUNDED", 7)))
{
return r_MK(rt_str("1", 1));
}
return r_MK(rt_str("0", 1));
}
if (((((*(R11 *)rt_nil_check(l_L_764))).f_KIND == g_N_NAME) || (((*(R11 *)rt_nil_check(l_L_764))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R11 *)rt_nil_check(l_L_764))).f_NAME, rt_str("ROUNDED", 7)))
{
return r_MK(rt_str("1", 1));
}
else if (r_TEQS(((*(R11 *)rt_nil_check(l_L_764))).f_NAME, rt_str("TRUNCATED", 9)))
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
R7 l_NAME_765; memset(&l_NAME_765, 0, sizeof l_NAME_765);
S_R7(&l_NAME_765, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_766; memset(&l_LINE_766, 0, sizeof l_LINE_766);
l_LINE_766 = ((*(R11 *)rt_nil_check(p_E))).f_LINE;
if ((r_TEQS(l_NAME_765, rt_str("PUT", 3)) || r_TEQS(l_NAME_765, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R18 l_V_767; memset(&l_V_767, 0, sizeof l_V_767);
S_R18(&l_V_767, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_767).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_766, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
if (r_TEQS(l_NAME_765, rt_str("PUT", 3)))
{
return r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_767).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
}
return r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_767).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
}
}
else if (r_TEQS(l_NAME_765, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
return r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
}
else if (r_TEQS(l_NAME_765, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
return r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R22 *)rt_nil_check(g_W))).f_TY_INT);
}
else if (r_TEQS(l_NAME_765, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
return r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
}
else if (r_TEQS(l_NAME_765, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
return r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
}
else if (r_TEQS(l_NAME_765, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
return r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A)), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
}
if (r_TEQS(l_NAME_765, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
return r_IMAGE_OF(r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_766);
}
else if (r_TEQS(l_NAME_765, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
return r_TO_FIXED_CALL(p_E);
}
else if (r_TEQS(l_NAME_765, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R18 l_V_768; memset(&l_V_768, 0, sizeof l_V_768);
S_R18(&l_V_768, r_EXPR(r_ARG_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A), NULL), 0);
R12 l_P_769; memset(&l_P_769, 0, sizeof l_P_769);
S_R12(&l_P_769, r_MANIFEST(r_ARG_EXPR(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NEXT)), 0);
R14 * l_VT_770; memset(&l_VT_770, 0, sizeof l_VT_770);
l_VT_770 = r_REAL_TYPE((l_V_768).f_T);
R14 * l_T_771; memset(&l_T_771, 0, sizeof l_T_771);
l_T_771 = r_NEW_TYP(g_T_FLOAT);
if ((!(l_P_769).f_OK))
{
r_FAIL(l_LINE_766, rt_str("the precision of TO_FLOAT must be manifest (3.3.6.1)", 52));
}
if ((((l_P_769).f_V < ((rt_int)1LL)) || ((l_P_769).f_V > ((rt_int)15LL))))
{
r_FAIL(l_LINE_766, rt_str("precisions from 1 to 15 are implemented (3.3.1)", 47));
}
((*(R14 *)rt_nil_check(l_T_771))).f_SCALE = (l_P_769).f_V;
if ((((*(R14 *)rt_nil_check(l_VT_770))).f_KIND == g_T_INT))
{
return r_MKET(r_FMT2(rt_str("rt_b_float_of_fix(@, @)", 23), (l_V_768).f_C, r_NUM(((*(R14 *)rt_nil_check(l_VT_770))).f_SCALE)), l_T_771);
}
else if ((((*(R14 *)rt_nil_check(l_VT_770))).f_KIND == g_T_FLOAT))
{
return r_MKET((l_V_768).f_C, l_T_771);
}
else if ((((*(R14 *)rt_nil_check(l_VT_770))).f_KIND == g_T_STR))
{
return r_MKET(r_FMT1(rt_str("rt_b_float_of_str(@)", 20), (l_V_768).f_C), l_T_771);
}
r_FAIL(l_LINE_766, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_765, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
return r_BITS_OF(r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_766);
}
else if (r_TEQS(l_NAME_765, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R18 l_V_772; memset(&l_V_772, 0, sizeof l_V_772);
S_R18(&l_V_772, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_772).f_T)))).f_KIND == g_T_INT))
{
return r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_772).f_C), r_INT_TYPE(((*(R14 *)rt_nil_check((l_V_772).f_T))).f_SCALE));
}
else if ((((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_772).f_T)))).f_KIND == g_T_FLOAT))
{
return r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_772).f_C), (l_V_772).f_T);
}
r_FAIL(l_LINE_766, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_765, rt_str("SUCC", 4)) || r_TEQS(l_NAME_765, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R18 l_V_773; memset(&l_V_773, 0, sizeof l_V_773);
S_R18(&l_V_773, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
R14 * l_T_774; memset(&l_T_774, 0, sizeof l_T_774);
l_T_774 = r_REAL_TYPE((l_V_773).f_T);
if ((!(((*(R14 *)rt_nil_check(l_T_774))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_766, rt_str("an enumerated value expected by ", 32), l_NAME_765);
}
if (((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_774))).f_BASE))).f_UNORDERED)
{
r_FAILT(l_LINE_766, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_765);
}
if (r_TEQS(l_NAME_765, rt_str("SUCC", 4)))
{
return r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_773).f_C, r_NUM(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_774))).f_BASE))).f_NLITS)), ((*(R14 *)rt_nil_check(l_T_774))).f_BASE);
}
return r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_773).f_C), ((*(R14 *)rt_nil_check(l_T_774))).f_BASE);
}
}
else if (r_TEQS(l_NAME_765, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R18 l_V_775; memset(&l_V_775, 0, sizeof l_V_775);
S_R18(&l_V_775, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_776; memset(&l_K_776, 0, sizeof l_K_776);
l_K_776 = ((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_775).f_T)))).f_KIND;
R14 * l_T_777; memset(&l_T_777, 0, sizeof l_T_777);
l_T_777 = r_NEW_TYP(l_K_776);
if (((!(l_K_776 == g_T_STR)) && (!(l_K_776 == g_T_BITS))))
{
r_FAIL(l_LINE_766, rt_str("DUP of something not a string", 29));
}
((*(R14 *)rt_nil_check(l_T_777))).f_BASE = ((*(R14 *)rt_nil_check((l_V_775).f_T))).f_BASE;
return r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_775).f_C, r_INT_EXPR(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_777);
}
}
else if (r_TEQS(l_NAME_765, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
return r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
}
else if (r_TEQS(l_NAME_765, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
return r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
}
else if (((r_TEQS(l_NAME_765, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_765, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_765, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R7 l_BITS_778; memset(&l_BITS_778, 0, sizeof l_BITS_778);
S_R7(&l_BITS_778, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_765, rt_str("OCT_OF", 6)))
{
S_R7(&l_BITS_778, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_765, rt_str("HEX_OF", 6)))
{
S_R7(&l_BITS_778, r_MK(rt_str("4", 1)), 0);
}
return r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL)).f_C, l_BITS_778), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
}
}
else if ((r_TEQS(l_NAME_765, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_765, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R12 l_S_779; memset(&l_S_779, 0, sizeof l_S_779);
S_R12(&l_S_779, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
if ((!(l_S_779).f_OK))
{
r_FAIL(l_LINE_766, rt_str("the scale must be manifest", 26));
}
if (r_TEQS(l_NAME_765, rt_str("FIXED_MIN", 9)))
{
return r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE((l_S_779).f_V));
}
return r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE((l_S_779).f_V));
}
}
else if (((r_TEQS(l_NAME_765, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_765, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_765, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R14 * l_T_780; memset(&l_T_780, 0, sizeof l_T_780);
l_T_780 = r_NEW_TYP(g_T_FLOAT);
R12 l_P_781; memset(&l_P_781, 0, sizeof l_P_781);
S_R12(&l_P_781, r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
if ((!(l_P_781).f_OK))
{
r_FAIL(l_LINE_766, rt_str("the precision must be manifest", 30));
}
((*(R14 *)rt_nil_check(l_T_780))).f_SCALE = (l_P_781).f_V;
if (r_TEQS(l_NAME_765, rt_str("FLOAT_MIN", 9)))
{
return r_MKET(r_MK(rt_str("(-DBL_MAX)", 10)), l_T_780);
}
else if (r_TEQS(l_NAME_765, rt_str("FLOAT_MAX", 9)))
{
return r_MKET(r_MK(rt_str("DBL_MAX", 7)), l_T_780);
}
return r_MKET(r_MK(rt_str("DBL_EPSILON", 11)), l_T_780);
}
}
else if (r_TEQS(l_NAME_765, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
return r_INT_ET(((rt_int)15LL));
}
else if (r_TEQS(l_NAME_765, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
return r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R11 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
}
else if (r_TEQS(l_NAME_765, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
return r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R22 *)rt_nil_check(g_W))).f_TY_BOOL);
}
return r_PARALLEL_BUILTIN(p_E, p_WANT);
rt_raise(RT_X_INIT);
}
static R18 r_IMAGE_OF(R18 p_V, rt_int p_LINE) { 
R14 * l_T_782; memset(&l_T_782, 0, sizeof l_T_782);
l_T_782 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_783; memset(&l_K_783, 0, sizeof l_K_783);
l_K_783 = ((*(R14 *)rt_nil_check(l_T_782))).f_KIND;
R14 * l_S_784; memset(&l_S_784, 0, sizeof l_S_784);
l_S_784 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_783 == g_T_INT))
{
if ((((*(R14 *)rt_nil_check(l_T_782))).f_SCALE == ((rt_int)0LL)))
{
return r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_784);
}
return r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R14 *)rt_nil_check(l_T_782))).f_SCALE)), l_S_784);
}
else if ((l_K_783 == g_T_FLOAT))
{
return r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R14 *)rt_nil_check(l_T_782))).f_SCALE)), l_S_784);
}
else if ((l_K_783 == g_T_BOOL))
{
return r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_784);
}
else if ((l_K_783 == g_T_ENUM))
{
if ((((*(R14 *)rt_nil_check(l_T_782))).f_BASE == ((*(R22 *)rt_nil_check(g_W))).f_TY_ASCII))
{
return r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_784);
}
return r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_782))).f_BASE))).f_CNAME, (p_V).f_C), l_S_784);
}
else if (((l_K_783 == g_T_STR) || (l_K_783 == g_T_BITS)))
{
return r_MKET((p_V).f_C, l_S_784);
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_782));
rt_raise(RT_X_INIT);
}
static R18 r_TO_FIXED_CALL(R11 * p_E) { 
R18 l_V_785; memset(&l_V_785, 0, sizeof l_V_785);
S_R18(&l_V_785, r_EXPR(r_ARG_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A), NULL), 0);
R14 * l_T_786; memset(&l_T_786, 0, sizeof l_T_786);
l_T_786 = r_REAL_TYPE((l_V_785).f_T);
rt_int l_N_787; memset(&l_N_787, 0, sizeof l_N_787);
l_N_787 = r_LIST_LENGTH(((*(R11 *)rt_nil_check(p_E))).f_A);
R7 l_RND_788; memset(&l_RND_788, 0, sizeof l_RND_788);
S_R7(&l_RND_788, r_ROUNDING_ARG(p_E, l_N_787), 0);
rt_int l_S_789; memset(&l_S_789, 0, sizeof l_S_789);
l_S_789 = ((rt_int)0LL);
if (((l_N_787 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R11 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
{
R12 l_SM_790; memset(&l_SM_790, 0, sizeof l_SM_790);
S_R12(&l_SM_790, r_MANIFEST(r_ARG_EXPR(r_NTH(((*(R11 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)))), 0);
if ((!(l_SM_790).f_OK))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of TO_FIXED must be manifest (3.2.1)", 46));
}
l_S_789 = (l_SM_790).f_V;
}
}
if ((l_N_787 >= ((rt_int)3LL)))
{
{
R11 * l_R_791; memset(&l_R_791, 0, sizeof l_R_791);
l_R_791 = r_ARG_EXPR(r_NTH(((*(R11 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)));
if (((!r_IS_ROUNDING(l_R_791)) && (!r_TEQS(((*(R11 *)rt_nil_check(l_R_791))).f_NAME, rt_str("STD", 3)))))
{
if ((!((r_MANIFEST(l_R_791)).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 and STD precision are predefined (3.2.6.1)", 55));
}
}
}
}
if ((((*(R14 *)rt_nil_check(l_T_786))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_792; memset(&l_SAVED_792, 0, sizeof l_SAVED_792);
l_SAVED_792 = ((*(R22 *)rt_nil_check(g_W))).f_ROUNDED;
R7 l_C_793; memset(&l_C_793, 0, sizeof l_C_793);
((*(R22 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_788, rt_str("1", 1));
S_R7(&l_C_793, r_RESCALE_C((l_V_785).f_C, ((*(R14 *)rt_nil_check(l_T_786))).f_SCALE, l_S_789), 0);
((*(R22 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_792;
return r_MKET(l_C_793, r_INT_TYPE(l_S_789));
}
}
else if ((((*(R14 *)rt_nil_check(l_T_786))).f_KIND == g_T_FLOAT))
{
return r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_785).f_C, r_NUM(l_S_789), l_RND_788), r_INT_TYPE(l_S_789));
}
else if (((((*(R14 *)rt_nil_check(l_T_786))).f_KIND == g_T_ENUM) || (((*(R14 *)rt_nil_check(l_T_786))).f_KIND == g_T_BOOL)))
{
if ((((*(R14 *)rt_nil_check(l_T_786))).f_KIND == g_T_ENUM))
{
if (((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_786))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R14 *)rt_nil_check(l_T_786))).f_REPS == NULL)))
{
if ((!(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_786))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
return r_MKET(r_RESCALE_C((l_V_785).f_C, ((rt_int)0LL), l_S_789), r_INT_TYPE(l_S_789));
}
else if ((((*(R14 *)rt_nil_check(l_T_786))).f_KIND == g_T_BITS))
{
return r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_785).f_C), ((rt_int)0LL), l_S_789), r_INT_TYPE(l_S_789));
}
else if ((((*(R14 *)rt_nil_check(l_T_786))).f_KIND == g_T_STR))
{
return r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_785).f_C, r_NUM(l_S_789), l_RND_788), r_INT_TYPE(l_S_789));
}
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_785).f_T));
rt_raise(RT_X_INIT);
}
static R18 r_BITS_OF(R18 p_V, rt_int p_LINE) { 
R14 * l_T_794; memset(&l_T_794, 0, sizeof l_T_794);
l_T_794 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_795; memset(&l_K_795, 0, sizeof l_K_795);
l_K_795 = ((*(R14 *)rt_nil_check(l_T_794))).f_KIND;
if ((l_K_795 == g_T_BITS))
{
return p_V;
}
else if ((l_K_795 == g_T_ENUM))
{
if ((!(((*(R14 *)rt_nil_check(l_T_794))).f_REPS == NULL)))
{
if ((!(((*(R11 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_794))).f_REPS))).f_B == NULL)))
{
return r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_794)), r_BITS_TYPE(r_ENUM_SIZE(l_T_794)));
}
}
return r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_794))), r_BITS_TYPE(r_ENUM_SIZE(l_T_794)));
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_795 == g_T_INT))
{
return r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 64)", 23), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
}
else if ((l_K_795 == g_T_BOOL))
{
return r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
}
else if ((l_K_795 == g_T_FLOAT))
{
return r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
}
else if ((l_K_795 == g_T_STR))
{
return r_MKET(r_FMT1(rt_str("rt_b_bits_of_str(@)", 19), (p_V).f_C), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_794));
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
rt_int l_N_796; memset(&l_N_796, 0, sizeof l_N_796);
l_N_796 = ((rt_int)0LL);
R19 * l_P_797; memset(&l_P_797, 0, sizeof l_P_797);
l_P_797 = p_A;
for (;;) {
if ((l_P_797 == NULL)) goto L_end798;
{
l_N_796 = rt_add(l_N_796, ((rt_int)1LL));
l_P_797 = ((*(R19 *)rt_nil_check(l_P_797))).f_NEXT;
}
} L_end798: ;
return l_N_796;
rt_raise(RT_X_INIT);
}
static R19 * r_CALL_ARGS(R11 * p_E) { 
R19 * l_HEAD_799; memset(&l_HEAD_799, 0, sizeof l_HEAD_799);
l_HEAD_799 = NULL;
R19 * l_TAIL_800; memset(&l_TAIL_800, 0, sizeof l_TAIL_800);
l_TAIL_800 = NULL;
rt_int l_G_801; memset(&l_G_801, 0, sizeof l_G_801);
l_G_801 = ((rt_int)0LL);
{ rt_int it803_lo = ((rt_int)0LL), it803_hi = ((rt_int)2LL);
for (rt_int it803 = it803_lo; it803 <= it803_hi; it803++) {
{
{
R11 * l_P_804; memset(&l_P_804, 0, sizeof l_P_804);
l_P_804 = ((*(R11 *)rt_nil_check(p_E))).f_A;
if ((it803 == ((rt_int)1LL)))
{
l_P_804 = ((*(R11 *)rt_nil_check(p_E))).f_B;
}
else if ((it803 == ((rt_int)2LL)))
{
l_P_804 = ((*(R11 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_804 == NULL)) goto L_end805;
{
{
R19 * l_A_806; memset(&l_A_806, 0, sizeof l_A_806);
l_A_806 = r_NODE_ARG(l_P_804, it803, NULL);
if ((l_TAIL_800 == NULL))
{
l_HEAD_799 = l_A_806;
}
else
{
((*(R19 *)rt_nil_check(l_TAIL_800))).f_NEXT = l_A_806;
}
l_TAIL_800 = l_A_806;
}
l_P_804 = ((*(R11 *)rt_nil_check(l_P_804))).f_NEXT;
}
} L_end805: ;
}
}
} } L_end802: ;
return l_HEAD_799;
rt_raise(RT_X_INIT);
}
static R18 r_CALL_EXPR(R11 * p_E, R14 * p_WANT) { 
R19 * l_ARGS_807; memset(&l_ARGS_807, 0, sizeof l_ARGS_807);
l_ARGS_807 = r_CALL_ARGS(p_E);
R13 * l_Y_808; memset(&l_Y_808, 0, sizeof l_Y_808);
l_Y_808 = r_BOUND_ROUTINE(((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_808 == NULL)))
{
if ((((*(R13 *)rt_nil_check(l_Y_808))).f_KIND == g_Y_BUILTIN))
{
return r_BUILTIN(p_E, p_WANT);
}
return r_CALL_SYM(l_Y_808, l_ARGS_807, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
}
l_Y_808 = r_FIND_ROUTINE(((*(R11 *)rt_nil_check(p_E))).f_NAME, l_ARGS_807, ((*(R11 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_808 == NULL))
{
{
R13 * l_B_809; memset(&l_B_809, 0, sizeof l_B_809);
l_B_809 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_809 == NULL)))
{
if ((((*(R13 *)rt_nil_check(l_B_809))).f_KIND == g_Y_BUILTIN))
{
return r_BUILTIN(p_E, p_WANT);
}
if (((((*(R13 *)rt_nil_check(l_B_809))).f_KIND == g_Y_ROUTINE) || (!(((*(R13 *)rt_nil_check(l_B_809))).f_ORIG == NULL))))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
}
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
return r_CALL_SYM(l_Y_808, l_ARGS_807, ((*(R11 *)rt_nil_check(p_E))).f_LINE);
rt_raise(RT_X_INIT);
}
static R13 * r_BOUND_ROUTINE(R7 p_NAME) { 
R16 * l_B_810; memset(&l_B_810, 0, sizeof l_B_810);
l_B_810 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_810 == NULL)) goto L_end811;
{
if (((!(((*(R16 *)rt_nil_check(l_B_810))).f_R == NULL)) && r_TEQ(((*(R16 *)rt_nil_check(l_B_810))).f_NAME, p_NAME)))
{
return ((*(R16 *)rt_nil_check(l_B_810))).f_R;
}
l_B_810 = ((*(R16 *)rt_nil_check(l_B_810))).f_NEXT;
}
} L_end811: ;
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
R13 * l_Y_812; memset(&l_Y_812, 0, sizeof l_Y_812);
l_Y_812 = r_LOOKUP(p_NAME);
R13 * l_BEST_813; memset(&l_BEST_813, 0, sizeof l_BEST_813);
l_BEST_813 = NULL;
rt_int l_BEST_SCORE_814; memset(&l_BEST_SCORE_814, 0, sizeof l_BEST_SCORE_814);
l_BEST_SCORE_814 = ((rt_int)0LL);
rt_int l_TIES_815; memset(&l_TIES_815, 0, sizeof l_TIES_815);
l_TIES_815 = ((rt_int)0LL);
rt_int l_COUNT_816; memset(&l_COUNT_816, 0, sizeof l_COUNT_816);
l_COUNT_816 = ((rt_int)0LL);
rt_int l_N_817; memset(&l_N_817, 0, sizeof l_N_817);
l_N_817 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_812 == NULL)) goto L_end818;
{
if ((!r_IS_ROUTINE(l_Y_812)))
{
if ((!(((*(R13 *)rt_nil_check(l_Y_812))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end818;
}
}
else if (r_CANDIDATE(l_Y_812, p_NAME))
{
{
R13 * l_R_819; memset(&l_R_819, 0, sizeof l_R_819);
l_R_819 = r_ORIGINAL(l_Y_812);
rt_int l_SCORE_820; memset(&l_SCORE_820, 0, sizeof l_SCORE_820);
r_ROUTINE_HEADER(l_R_819);
if (((r_PARAM_COUNT(l_R_819) == l_N_817) && (!r_SEEN_ROUTINE(l_R_819, p_NAME, l_Y_812))))
{
l_COUNT_816 = rt_add(l_COUNT_816, ((rt_int)1LL));
l_SCORE_820 = r_MATCH_SCORE(l_R_819, p_ARGS);
if ((l_SCORE_820 > l_BEST_SCORE_814))
{
l_BEST_813 = l_R_819;
l_BEST_SCORE_814 = l_SCORE_820;
l_TIES_815 = ((rt_int)0LL);
}
else if (((l_SCORE_820 == l_BEST_SCORE_814) && (l_SCORE_820 > ((rt_int)0LL))))
{
l_TIES_815 = rt_add(l_TIES_815, ((rt_int)1LL));
}
}
}
}
l_Y_812 = r_LOOKUP_NEXT(l_Y_812);
}
} L_end818: ;
if (((l_TIES_815 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
return l_BEST_813;
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R13 * p_R, R7 p_NAME, R13 * p_STOP) { 
R13 * l_Y_821; memset(&l_Y_821, 0, sizeof l_Y_821);
l_Y_821 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_821 == p_STOP) || (l_Y_821 == NULL))) goto L_end822;
{
if ((((*(R13 *)rt_nil_check(l_Y_821))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_821) == p_R))
{
return 1;
}
}
l_Y_821 = r_LOOKUP_NEXT(l_Y_821);
}
} L_end822: ;
return 0;
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R13 * p_R) { 
rt_int l_N_823; memset(&l_N_823, 0, sizeof l_N_823);
l_N_823 = ((rt_int)0LL);
R20 * l_P_824; memset(&l_P_824, 0, sizeof l_P_824);
l_P_824 = ((*(R13 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_824 == NULL)) goto L_end825;
{
l_N_823 = rt_add(l_N_823, ((rt_int)1LL));
l_P_824 = ((*(R20 *)rt_nil_check(l_P_824))).f_NEXT;
}
} L_end825: ;
return l_N_823;
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R13 * p_R, R19 * p_ARGS) { 
R20 * l_P_826; memset(&l_P_826, 0, sizeof l_P_826);
l_P_826 = ((*(R13 *)rt_nil_check(p_R))).f_PARAMS;
R19 * l_A_827; memset(&l_A_827, 0, sizeof l_A_827);
l_A_827 = p_ARGS;
rt_int l_EXACT_828; memset(&l_EXACT_828, 0, sizeof l_EXACT_828);
l_EXACT_828 = 1;
for (;;) {
if ((l_P_826 == NULL)) goto L_end829;
{
if ((!(((*(R20 *)rt_nil_check(l_P_826))).f_MODE == ((*(R19 *)rt_nil_check(l_A_827))).f_MODE)))
{
return ((rt_int)0LL);
}
if ((((*(R13 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R20 *)rt_nil_check(l_P_826))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_826, l_A_827)))
{
return ((rt_int)0LL);
}
}
else if ((((*(R20 *)rt_nil_check(l_P_826))).f_T == NULL))
{
if (((*(R19 *)rt_nil_check(l_A_827))).f_HAVE)
{
return ((rt_int)0LL);
}
}
else if (r_WANT_SENSITIVE(l_A_827))
{
if ((!r_LITERAL_FITS(((*(R19 *)rt_nil_check(l_A_827))).f_E, ((*(R20 *)rt_nil_check(l_P_826))).f_T)))
{
return ((rt_int)0LL);
}
}
else
{
r_TYPE_ARG(l_A_827);
{
R14 * l_AT_830; memset(&l_AT_830, 0, sizeof l_AT_830);
l_AT_830 = (((*(R19 *)rt_nil_check(l_A_827))).f_V).f_T;
if ((!((r_SAME_CLASS(((*(R20 *)rt_nil_check(l_P_826))).f_T, l_AT_830) || (((((*(R14 *)rt_nil_check(l_AT_830))).f_KIND == g_T_NIL) && (((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R20 *)rt_nil_check(l_P_826))).f_T)))).f_KIND == g_T_PTR)))))))
{
return ((rt_int)0LL);
}
if ((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_826))).f_T, l_AT_830)))
{
l_EXACT_828 = 0;
}
if (((((*(R14 *)rt_nil_check(r_REAL_TYPE(l_AT_830)))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R20 *)rt_nil_check(l_P_826))).f_T)))).f_KIND == g_T_INT)))
{
if ((((*(R14 *)rt_nil_check(l_AT_830))).f_SCALE > ((*(R14 *)rt_nil_check(((*(R20 *)rt_nil_check(l_P_826))).f_T))).f_SCALE))
{
return ((rt_int)0LL);
}
}
}
}
l_P_826 = ((*(R20 *)rt_nil_check(l_P_826))).f_NEXT;
l_A_827 = ((*(R19 *)rt_nil_check(l_A_827))).f_NEXT;
}
} L_end829: ;
if (l_EXACT_828)
{
return ((rt_int)2LL);
}
return ((rt_int)1LL);
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R11 * p_E, R14 * p_T) { 
R14 * l_RT_831; memset(&l_RT_831, 0, sizeof l_RT_831);
l_RT_831 = r_REAL_TYPE(p_T);
if (((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R14 *)rt_nil_check(l_RT_831))).f_KIND == g_T_ENUM))
{
return (!(r_FIND_LITERAL(((*(R11 *)rt_nil_check(p_E))).f_NAME, l_RT_831) == NULL));
}
return 0;
}
else if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
return (((*(R14 *)rt_nil_check(l_RT_831))).f_KIND == g_T_PTR);
}
else if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
return (((*(R14 *)rt_nil_check(l_RT_831))).f_KIND == g_T_REC);
}
else if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
return (((*(R14 *)rt_nil_check(l_RT_831))).f_KIND == g_T_ARR);
}
else if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
return (((*(R14 *)rt_nil_check(l_RT_831))).f_KIND == g_T_INT);
}
else if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
return ((((*(R14 *)rt_nil_check(l_RT_831))).f_KIND == g_T_PTR) || (((*(R14 *)rt_nil_check(l_RT_831))).f_KIND == g_T_SEM));
}
return 0;
rt_raise(RT_X_INIT);
}
static R18 r_CALL_SYM(R13 * p_Y0, R19 * p_ARGS, rt_int p_LINE) { 
R13 * l_Y_832; memset(&l_Y_832, 0, sizeof l_Y_832);
l_Y_832 = r_ORIGINAL(p_Y0);
R20 * l_P_833; memset(&l_P_833, 0, sizeof l_P_833);
R19 * l_A_834; memset(&l_A_834, 0, sizeof l_A_834);
l_A_834 = p_ARGS;
R7 l_C_835; memset(&l_C_835, 0, sizeof l_C_835);
S_R7(&l_C_835, r_MK(rt_str("", 0)), 0);
R7 l_SEP_836; memset(&l_SEP_836, 0, sizeof l_SEP_836);
S_R7(&l_SEP_836, r_MK(rt_str("", 0)), 0);
if (((*(R13 *)rt_nil_check(l_Y_832))).f_GENERIC)
{
l_Y_832 = r_INSTANCE(l_Y_832, p_ARGS, p_LINE);
}
r_CHECK_CALL_IMPORTS(l_Y_832, p_LINE);
if ((((*(R13 *)rt_nil_check(l_Y_832))).f_LEVEL >= ((rt_int)1LL)))
{
S_R7(&l_C_835, r_FRAME_OF(((*(R13 *)rt_nil_check(l_Y_832))).f_LEVEL), 0);
S_R7(&l_SEP_836, r_MK(rt_str(", ", 2)), 0);
}
l_P_833 = ((*(R13 *)rt_nil_check(l_Y_832))).f_PARAMS;
for (;;) {
if ((l_P_833 == NULL)) goto L_end837;
{
if ((l_A_834 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
if ((((*(R20 *)rt_nil_check(l_P_833))).f_T == NULL))
{
}
else if ((((*(R20 *)rt_nil_check(l_P_833))).f_MODE == g_M_IN))
{
if ((((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R20 *)rt_nil_check(l_P_833))).f_T)))).f_KIND == g_T_VOID))
{
}
else
{
{
R18 l_V_838; memset(&l_V_838, 0, sizeof l_V_838);
if ((((*(R19 *)rt_nil_check(l_A_834))).f_HAVE && (!r_WANT_SENSITIVE(l_A_834))))
{
S_R18(&l_V_838, ((*(R19 *)rt_nil_check(l_A_834))).f_V, 0);
}
else
{
S_R18(&l_V_838, r_EXPR(((*(R19 *)rt_nil_check(l_A_834))).f_E, ((*(R20 *)rt_nil_check(l_P_833))).f_T), 0);
}
S_R7(&l_C_835, r_FMT3(rt_str("@@@", 3), l_C_835, l_SEP_836, r_CONVERT(l_V_838, ((*(R20 *)rt_nil_check(l_P_833))).f_T, p_LINE, r_NO_TEXT())), 0);
S_R7(&l_SEP_836, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R18 l_V_839; memset(&l_V_839, 0, sizeof l_V_839);
if (((*(R19 *)rt_nil_check(l_A_834))).f_HAVE)
{
S_R18(&l_V_839, ((*(R19 *)rt_nil_check(l_A_834))).f_V, 0);
}
else
{
S_R18(&l_V_839, r_EXPR(((*(R19 *)rt_nil_check(l_A_834))).f_E, ((*(R20 *)rt_nil_check(l_P_833))).f_T), 0);
}
if ((!(l_V_839).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(((*(R20 *)rt_nil_check(l_P_833))).f_T, (l_V_839).f_T)))
{
r_FAIL(p_LINE, rt_str("the inout or output argument is not of the type of the parameter", 64));
}
if (((((*(R20 *)rt_nil_check(l_P_833))).f_MODE == g_M_INOUT) && (!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_833))).f_T, (l_V_839).f_T))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
S_R7(&l_C_835, r_FMT3(rt_str("@@&@", 4), l_C_835, l_SEP_836, (l_V_839).f_C), 0);
S_R7(&l_SEP_836, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_834 = ((*(R19 *)rt_nil_check(l_A_834))).f_NEXT;
l_P_833 = ((*(R20 *)rt_nil_check(l_P_833))).f_NEXT;
}
} L_end837: ;
if ((!(l_A_834 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
return r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R13 *)rt_nil_check(l_Y_832))).f_ACCESS, l_C_835), ((*(R13 *)rt_nil_check(l_Y_832))).f_RESULT);
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
R13 * l_Y_840; memset(&l_Y_840, 0, sizeof l_Y_840);
l_Y_840 = r_ORIG_LOOKUP(((*(R11 *)rt_nil_check(p_TS))).f_NAME);
R11 * l_A_841; memset(&l_A_841, 0, sizeof l_A_841);
l_A_841 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
R11 * l_F_842; memset(&l_F_842, 0, sizeof l_F_842);
if ((l_Y_840 == NULL))
{
return 0;
}
if ((((*(R13 *)rt_nil_check(l_Y_840))).f_KIND == g_Y_GEN))
{
return 1;
}
if ((((*(R13 *)rt_nil_check(l_Y_840))).f_DECL == NULL))
{
return 0;
}
l_F_842 = ((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_840))).f_DECL))).f_A;
for (;;) {
if ((l_F_842 == NULL)) goto L_end843;
{
{
R11 * l_N_844; memset(&l_N_844, 0, sizeof l_N_844);
l_N_844 = ((*(R11 *)rt_nil_check(l_F_842))).f_A;
for (;;) {
if ((l_N_844 == NULL)) goto L_end845;
{
if ((l_A_841 == NULL))
{
return 0;
}
if (((((*(R11 *)rt_nil_check(l_F_842))).f_B == NULL) && ((((((*(R11 *)rt_nil_check(l_A_841))).f_KIND == g_TS_GEN) || (((*(R11 *)rt_nil_check(l_A_841))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_841)))))
{
return 1;
}
l_A_841 = ((*(R11 *)rt_nil_check(l_A_841))).f_NEXT;
l_N_844 = ((*(R11 *)rt_nil_check(l_N_844))).f_NEXT;
}
} L_end845: ;
}
l_F_842 = ((*(R11 *)rt_nil_check(l_F_842))).f_NEXT;
}
} L_end843: ;
}
}
return 0;
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_GEN_ARG(R11 * p_A) { 
R11 * l_P_846; memset(&l_P_846, 0, sizeof l_P_846);
l_P_846 = p_A;
for (;;) {
if ((l_P_846 == NULL)) goto L_end847;
{
if (((((*(R11 *)rt_nil_check(l_P_846))).f_KIND == g_TS_GEN) || (((*(R11 *)rt_nil_check(l_P_846))).f_KIND == g_N_DONTCARE)))
{
return 1;
}
l_P_846 = ((*(R11 *)rt_nil_check(l_P_846))).f_NEXT;
}
} L_end847: ;
return 0;
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R13 * p_Y) { 
R11 * l_R_848; memset(&l_R_848, 0, sizeof l_R_848);
l_R_848 = ((*(R13 *)rt_nil_check(p_Y))).f_DECL;
R11 * l_P_849; memset(&l_P_849, 0, sizeof l_P_849);
R20 * l_TAIL_850; memset(&l_TAIL_850, 0, sizeof l_TAIL_850);
l_TAIL_850 = NULL;
if (((*(R13 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
((*(R13 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_849 = ((*(R11 *)rt_nil_check(l_R_848))).f_A;
for (;;) {
if ((l_P_849 == NULL)) goto L_end851;
{
if (((((*(R11 *)rt_nil_check(l_P_849))).f_B == NULL) || r_STATIC_GENERIC(((*(R11 *)rt_nil_check(l_P_849))).f_B)))
{
((*(R13 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_849 = ((*(R11 *)rt_nil_check(l_P_849))).f_NEXT;
}
} L_end851: ;
if ((!(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_848))).f_D))).f_B == NULL)))
{
((*(R13 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_849 = ((*(R11 *)rt_nil_check(l_R_848))).f_A;
for (;;) {
if ((l_P_849 == NULL)) goto L_end852;
{
{
R20 * l_PM_853; memset(&l_PM_853, 0, sizeof l_PM_853);
l_PM_853 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_PM_853)), ({ R20 rc854; memset(&rc854, 0, sizeof rc854);  S_R7(&rc854.f_NAME, ((*(R11 *)rt_nil_check(l_P_849))).f_NAME, 0); rc854.f_MODE = ((*(R11 *)rt_nil_check(l_P_849))).f_IV; rc854.f_T = NULL; rc854.f_TS = ((*(R11 *)rt_nil_check(l_P_849))).f_B; rc854.f_NEXT = NULL; rc854; }), 0);
if (((((*(R11 *)rt_nil_check(l_R_848))).f_IV == ((rt_int)1LL)) && (!(((*(R11 *)rt_nil_check(l_P_849))).f_IV == g_M_IN))))
{
r_FAIL(((*(R11 *)rt_nil_check(l_P_849))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!((*(R13 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R20 *)rt_nil_check(l_PM_853))).f_T = r_RESOLVE(((*(R11 *)rt_nil_check(l_P_849))).f_B);
}
if ((l_TAIL_850 == NULL))
{
((*(R13 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_853;
}
else
{
((*(R20 *)rt_nil_check(l_TAIL_850))).f_NEXT = l_PM_853;
}
l_TAIL_850 = l_PM_853;
}
l_P_849 = ((*(R11 *)rt_nil_check(l_P_849))).f_NEXT;
}
} L_end852: ;
if ((!((*(R13 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R13 *)rt_nil_check(p_Y))).f_RESULT = r_RESULT_TYPE(p_Y);
S_R7(&((*(R13 *)rt_nil_check(p_Y))).f_FWD, r_C_HEADER(p_Y), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R13 *)rt_nil_check(p_Y))).f_FWD, rt_str(";", 1)));
}
}
static R14 * r_RESULT_TYPE(R13 * p_Y) { 
R11 * l_R_855; memset(&l_R_855, 0, sizeof l_R_855);
l_R_855 = ((*(R13 *)rt_nil_check(p_Y))).f_DECL;
R14 * l_T_856; memset(&l_T_856, 0, sizeof l_T_856);
if ((((*(R11 *)rt_nil_check(l_R_855))).f_B == NULL))
{
return ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID;
}
r_OPEN_SCOPE();
{
R20 * l_P_857; memset(&l_P_857, 0, sizeof l_P_857);
l_P_857 = ((*(R13 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_857 == NULL)) goto L_end858;
{
if ((!(((*(R20 *)rt_nil_check(l_P_857))).f_T == NULL)))
{
{
R13 * l_V_859; memset(&l_V_859, 0, sizeof l_V_859);
l_V_859 = r_NEW_SYM(g_Y_CONST, ((*(R20 *)rt_nil_check(l_P_857))).f_NAME);
((*(R13 *)rt_nil_check(l_V_859))).f_T = ((*(R20 *)rt_nil_check(l_P_857))).f_T;
S_R7(&((*(R13 *)rt_nil_check(l_V_859))).f_ACCESS, r_FMT1(rt_str("p_@", 3), ((*(R20 *)rt_nil_check(l_P_857))).f_NAME), 0);
((*(R13 *)rt_nil_check(l_V_859))).f_INPUT = 1;
r_DEFINE(l_V_859, ((*(R11 *)rt_nil_check(l_R_855))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R20 *)rt_nil_check(l_P_857))).f_T, ((*(R13 *)rt_nil_check(l_V_859))).f_ACCESS, ((*(R11 *)rt_nil_check(l_R_855))).f_LINE, 0);
}
}
l_P_857 = ((*(R20 *)rt_nil_check(l_P_857))).f_NEXT;
}
} L_end858: ;
}
l_T_856 = r_RESOLVE(((*(R11 *)rt_nil_check(l_R_855))).f_B);
r_CLOSE_SCOPE();
return l_T_856;
rt_raise(RT_X_INIT);
}
static R7 r_C_HEADER(R13 * p_Y) { 
R7 l_PS_860; memset(&l_PS_860, 0, sizeof l_PS_860);
S_R7(&l_PS_860, r_MK(rt_str("", 0)), 0);
R7 l_SEP_861; memset(&l_SEP_861, 0, sizeof l_SEP_861);
S_R7(&l_SEP_861, r_MK(rt_str("", 0)), 0);
R20 * l_P_862; memset(&l_P_862, 0, sizeof l_P_862);
l_P_862 = ((*(R13 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R13 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R7(&l_PS_860, r_FMT1(rt_str("@ *up_", 6), ((*(R13 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R7(&l_SEP_861, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_862 == NULL)) goto L_end863;
{
if ((((*(R20 *)rt_nil_check(l_P_862))).f_T == NULL))
{
}
else if ((((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R20 *)rt_nil_check(l_P_862))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R20 *)rt_nil_check(l_P_862))).f_MODE == g_M_IN))
{
S_R7(&l_PS_860, r_FMT4(rt_str("@@@ p_@", 7), l_PS_860, l_SEP_861, r_CTYPE(((*(R20 *)rt_nil_check(l_P_862))).f_T), ((*(R20 *)rt_nil_check(l_P_862))).f_NAME), 0);
S_R7(&l_SEP_861, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R7(&l_PS_860, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_860, l_SEP_861, r_CTYPE(((*(R20 *)rt_nil_check(l_P_862))).f_T), ((*(R20 *)rt_nil_check(l_P_862))).f_NAME), 0);
S_R7(&l_SEP_861, r_MK(rt_str(", ", 2)), 0);
}
l_P_862 = ((*(R20 *)rt_nil_check(l_P_862))).f_NEXT;
}
} L_end863: ;
if (((l_PS_860).f_LEN == ((rt_int)0LL)))
{
S_R7(&l_PS_860, r_MK(rt_str("void", 4)), 0);
}
return r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R13 *)rt_nil_check(p_Y))).f_RESULT), ((*(R13 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_860);
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
R17 * l_B_864; memset(&l_B_864, 0, sizeof l_B_864);
l_B_864 = ((*(R14 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_865; memset(&l_I_865, 0, sizeof l_I_865);
l_I_865 = ((rt_int)0LL);
for (;;) {
if ((l_B_864 == NULL)) goto L_end866;
{
if (r_IS_GEN_TEXT(((*(R17 *)rt_nil_check(l_B_864))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R17 *)rt_nil_check(l_B_864))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_865)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R17 *)rt_nil_check(l_B_864))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R17 *)rt_nil_check(l_B_864))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_865)), p_LINE, p_CHECK);
}
l_I_865 = rt_add(l_I_865, ((rt_int)1LL));
l_B_864 = ((*(R17 *)rt_nil_check(l_B_864))).f_NEXT;
}
} L_end866: ;
}
}
if (((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R14 * l_U_867; memset(&l_U_867, 0, sizeof l_U_867);
l_U_867 = r_REAL_TYPE(p_T);
R15 * l_F_868; memset(&l_F_868, 0, sizeof l_F_868);
l_F_868 = ((*(R14 *)rt_nil_check(l_U_867))).f_FIELDS;
R17 * l_A_869; memset(&l_A_869, 0, sizeof l_A_869);
l_A_869 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_868 == NULL) || (l_A_869 == NULL))) goto L_end870;
{
if ((!(((*(R15 *)rt_nil_check(l_F_868))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R17 *)rt_nil_check(l_A_869))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R17 *)rt_nil_check(l_A_869))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R15 *)rt_nil_check(l_F_868))).f_CNAME), p_LINE, p_CHECK);
}
l_A_869 = ((*(R17 *)rt_nil_check(l_A_869))).f_NEXT;
}
l_F_868 = ((*(R15 *)rt_nil_check(l_F_868))).f_NEXT;
}
} L_end870: ;
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
R13 * l_OLD_871; memset(&l_OLD_871, 0, sizeof l_OLD_871);
l_OLD_871 = r_LOOKUP(p_NAME);
if ((!(l_OLD_871 == NULL)))
{
if (((((*(R13 *)rt_nil_check(l_OLD_871))).f_KIND == g_Y_GEN) && (((*(R13 *)rt_nil_check(l_OLD_871))).f_DEPTH == ((*(R22 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R13 *)rt_nil_check(l_OLD_871))).f_ACCESS, p_C));
}
return;
}
}
{
R13 * l_G_872; memset(&l_G_872, 0, sizeof l_G_872);
l_G_872 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R13 *)rt_nil_check(l_G_872))).f_T = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
S_R7(&((*(R13 *)rt_nil_check(l_G_872))).f_ACCESS, p_C, 0);
((*(R13 *)rt_nil_check(l_G_872))).f_INPUT = 1;
r_DEFINE(l_G_872, p_LINE);
}
}
static R16 * r_NEW_BINDS(void) { 
R16 * l_B_873; memset(&l_B_873, 0, sizeof l_B_873);
l_B_873 = ((R16 *)rt_alloc(sizeof (R16)));
S_R16(&(*(R16 *)rt_nil_check(l_B_873)), ({ R16 rc874; memset(&rc874, 0, sizeof rc874);  S_R7(&rc874.f_NAME, r_NO_TEXT(), 0); rc874.f_T = NULL; S_R7(&rc874.f_C, r_NO_TEXT(), 0); rc874.f_HASMV = 0; rc874.f_MV = ((rt_int)0LL); rc874.f_R = NULL; rc874.f_NEXT = NULL; rc874; }), 0);
return l_B_873;
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R7 p_NAME, R14 * p_T, R12 p_M, R13 * p_R, R16 * p_HEAD) { 
R16 * l_B_875; memset(&l_B_875, 0, sizeof l_B_875);
l_B_875 = ((R16 *)rt_alloc(sizeof (R16)));
S_R16(&(*(R16 *)rt_nil_check(l_B_875)), ({ R16 rc876; memset(&rc876, 0, sizeof rc876);  S_R7(&rc876.f_NAME, p_NAME, 0); rc876.f_T = p_T; S_R7(&rc876.f_C, r_NO_TEXT(), 0); rc876.f_HASMV = (p_M).f_OK; rc876.f_MV = (p_M).f_V; rc876.f_R = p_R; rc876.f_NEXT = ((*(R16 *)rt_nil_check(p_HEAD))).f_NEXT; rc876; }), 0);
if ((p_M).f_OK)
{
S_R7(&((*(R16 *)rt_nil_check(l_B_875))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R16 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_875;
}
static R16 * r_FIND_BIND(R16 * p_BS, R7 p_NAME) { 
R16 * l_B_877; memset(&l_B_877, 0, sizeof l_B_877);
l_B_877 = p_BS;
for (;;) {
if ((l_B_877 == NULL)) goto L_end878;
{
if (r_TEQ(((*(R16 *)rt_nil_check(l_B_877))).f_NAME, p_NAME))
{
return l_B_877;
}
l_B_877 = ((*(R16 *)rt_nil_check(l_B_877))).f_NEXT;
}
} L_end878: ;
return NULL;
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R11 * p_TS, R14 * p_T, R16 * p_BS) { 
R14 * l_RT_879; memset(&l_RT_879, 0, sizeof l_RT_879);
l_RT_879 = r_REAL_TYPE(p_T);
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
R16 * l_B_880; memset(&l_B_880, 0, sizeof l_B_880);
l_B_880 = r_FIND_BIND(((*(R16 *)rt_nil_check(p_BS))).f_NEXT, ((*(R11 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_880 == NULL)))
{
if ((((*(R16 *)rt_nil_check(l_B_880))).f_T == NULL))
{
return 0;
}
return r_SAME_TYPE(((*(R16 *)rt_nil_check(l_B_880))).f_T, p_T);
}
r_ADD_BIND(((*(R11 *)rt_nil_check(p_TS))).f_NAME, p_T, r_NO_MVAL(), NULL, p_BS);
return 1;
}
}
else if ((((*(R11 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R14 *)rt_nil_check(l_RT_879))).f_KIND == g_T_ARR)))
{
return 0;
}
if ((!(r_LIST_LENGTH(((*(R11 *)rt_nil_check(p_TS))).f_A) == ((*(R14 *)rt_nil_check(l_RT_879))).f_DIMS)))
{
return 0;
}
return r_UNIFY(((*(R11 *)rt_nil_check(p_TS))).f_C, ((*(R14 *)rt_nil_check(l_RT_879))).f_ELEM, p_BS);
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
if (((!r_UNIFY_VALUE(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R14 *)rt_nil_check(l_RT_879))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R14 *)rt_nil_check(l_RT_879))).f_MHI, p_BS))))
{
return 0;
}
}
if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R14 *)rt_nil_check(l_RT_879))).f_KIND == g_T_INT)))
{
return 0;
}
return (r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R14 *)rt_nil_check(l_RT_879))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS));
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
return ((((*(R14 *)rt_nil_check(l_RT_879))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_RT_879))).f_SCALE == ((rt_int)0LL)));
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R14 *)rt_nil_check(l_RT_879))).f_KIND == g_T_FLOAT)))
{
return 0;
}
return r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R14 *)rt_nil_check(l_RT_879))).f_SCALE), p_BS);
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
return (((*(R14 *)rt_nil_check(l_RT_879))).f_KIND == g_T_BOOL);
}
else if ((r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8))))
{
return (((*(R14 *)rt_nil_check(l_RT_879))).f_KIND == g_T_STR);
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
return (((*(R14 *)rt_nil_check(l_RT_879))).f_KIND == g_T_BITS);
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
return (((*(R14 *)rt_nil_check(l_RT_879))).f_KIND == g_T_SEM);
}
else if (r_TEQS(((*(R11 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R14 *)rt_nil_check(l_RT_879))).f_KIND == g_T_PTR)))
{
return 0;
}
return r_UNIFY(((*(R11 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_879), p_BS);
}
{
R13 * l_Y_881; memset(&l_Y_881, 0, sizeof l_Y_881);
l_Y_881 = r_ORIG_LOOKUP(((*(R11 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_881 == NULL))
{
return 0;
}
if (((((*(R13 *)rt_nil_check(l_Y_881))).f_KIND == g_Y_TYPE) && (((*(R13 *)rt_nil_check(l_Y_881))).f_DECL == NULL)))
{
return r_SAME_CLASS(((*(R13 *)rt_nil_check(l_Y_881))).f_T, p_T);
}
if ((!(((*(R13 *)rt_nil_check(l_Y_881))).f_KIND == g_Y_TYPE)))
{
return 0;
}
if ((((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R14 *)rt_nil_check(p_T))).f_DECL) == l_Y_881)))
{
return 0;
}
}
else if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_881))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R14 *)rt_nil_check(l_RT_879))).f_KIND == g_T_REC)))
{
return 0;
}
if ((!(((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_RT_879))).f_BASE))).f_DECL == l_Y_881)))
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
R11 * l_F_882; memset(&l_F_882, 0, sizeof l_F_882);
l_F_882 = ((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_881))).f_DECL))).f_A;
R11 * l_A_883; memset(&l_A_883, 0, sizeof l_A_883);
l_A_883 = ((*(R11 *)rt_nil_check(p_TS))).f_A;
R17 * l_V_884; memset(&l_V_884, 0, sizeof l_V_884);
l_V_884 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
R13 * l_CLASS_885; memset(&l_CLASS_885, 0, sizeof l_CLASS_885);
l_CLASS_885 = r_RECORD_CLASS_OF(l_RT_879);
for (;;) {
if ((l_F_882 == NULL)) goto L_end886;
{
{
R11 * l_N_887; memset(&l_N_887, 0, sizeof l_N_887);
l_N_887 = ((*(R11 *)rt_nil_check(l_F_882))).f_A;
for (;;) {
if ((l_N_887 == NULL)) goto L_end888;
{
if ((l_A_883 == NULL))
{
return 0;
}
if ((((*(R11 *)rt_nil_check(l_F_882))).f_B == NULL))
{
if ((!(l_CLASS_885 == NULL)))
{
{
R16 * l_B_889; memset(&l_B_889, 0, sizeof l_B_889);
l_B_889 = r_FIND_BIND(((*(R13 *)rt_nil_check(l_CLASS_885))).f_BINDINGS, ((*(R11 *)rt_nil_check(l_N_887))).f_NAME);
if ((!(l_B_889 == NULL)))
{
if ((!r_UNIFY(l_A_883, ((*(R16 *)rt_nil_check(l_B_889))).f_T, p_BS)))
{
return 0;
}
}
}
}
}
else
{
if ((!(l_V_884 == NULL)))
{
if ((((!(((*(R11 *)rt_nil_check(l_A_883))).f_KIND == g_TS_GEN)) && (!(((*(R11 *)rt_nil_check(l_A_883))).f_KIND == g_N_DONTCARE))) && (!(((*(R11 *)rt_nil_check(l_A_883))).f_KIND == g_N_ANY))))
{
{
R12 l_M_890; memset(&l_M_890, 0, sizeof l_M_890);
S_R12(&l_M_890, r_MANIFEST(l_A_883), 0);
if (((l_M_890).f_OK && (((*(R17 *)rt_nil_check(l_V_884))).f_MLO).f_OK))
{
if ((!((l_M_890).f_V == (((*(R17 *)rt_nil_check(l_V_884))).f_MLO).f_V)))
{
return 0;
}
}
}
}
l_V_884 = ((*(R17 *)rt_nil_check(l_V_884))).f_NEXT;
}
}
l_A_883 = ((*(R11 *)rt_nil_check(l_A_883))).f_NEXT;
l_N_887 = ((*(R11 *)rt_nil_check(l_N_887))).f_NEXT;
}
} L_end888: ;
}
l_F_882 = ((*(R11 *)rt_nil_check(l_F_882))).f_NEXT;
}
} L_end886: ;
}
return 1;
}
rt_raise(RT_X_INIT);
}
static R13 * r_RECORD_CLASS_OF(R14 * p_T) { 
R13 * l_R_891; memset(&l_R_891, 0, sizeof l_R_891);
l_R_891 = ((*(R22 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R14 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
return NULL;
}
for (;;) {
if ((l_R_891 == NULL)) goto L_end892;
{
if ((((*(R13 *)rt_nil_check(l_R_891))).f_T == ((*(R14 *)rt_nil_check(p_T))).f_BASE))
{
return l_R_891;
}
l_R_891 = ((*(R13 *)rt_nil_check(l_R_891))).f_INSTANCES;
}
} L_end892: ;
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
R16 * l_B_893; memset(&l_B_893, 0, sizeof l_B_893);
l_B_893 = r_FIND_BIND(((*(R16 *)rt_nil_check(p_BS))).f_NEXT, ((*(R11 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_893 == NULL)))
{
return ((((*(R16 *)rt_nil_check(l_B_893))).f_HASMV && (p_M).f_OK) && (((*(R16 *)rt_nil_check(l_B_893))).f_MV == (p_M).f_V));
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
R12 l_V_894; memset(&l_V_894, 0, sizeof l_V_894);
S_R12(&l_V_894, r_MANIFEST(p_A), 0);
if (((l_V_894).f_OK && (p_M).f_OK))
{
return ((l_V_894).f_V == (p_M).f_V);
}
}
return 1;
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R20 * p_P, R19 * p_A) { 
R16 * l_BS_895; memset(&l_BS_895, 0, sizeof l_BS_895);
l_BS_895 = r_NEW_BINDS();
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
return r_UNIFY(((*(R20 *)rt_nil_check(p_P))).f_TS, (((*(R19 *)rt_nil_check(p_A))).f_V).f_T, l_BS_895);
rt_raise(RT_X_INIT);
}
static R13 * r_INSTANCE(R13 * p_G, R19 * p_ARGS, rt_int p_LINE) { 
R16 * l_BS_896; memset(&l_BS_896, 0, sizeof l_BS_896);
l_BS_896 = r_NEW_BINDS();
R20 * l_P_897; memset(&l_P_897, 0, sizeof l_P_897);
l_P_897 = ((*(R13 *)rt_nil_check(p_G))).f_PARAMS;
R19 * l_A_898; memset(&l_A_898, 0, sizeof l_A_898);
l_A_898 = p_ARGS;
for (;;) {
if ((l_P_897 == NULL)) goto L_end899;
{
if ((((*(R20 *)rt_nil_check(l_P_897))).f_TS == NULL))
{
if (((*(R19 *)rt_nil_check(l_A_898))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R20 *)rt_nil_check(l_P_897))).f_NAME, r_ARG_TYPE(((*(R19 *)rt_nil_check(l_A_898))).f_E), r_NO_MVAL(), NULL, l_BS_896);
}
else if ((((*(R11 *)rt_nil_check(((*(R20 *)rt_nil_check(l_P_897))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R20 *)rt_nil_check(l_P_897))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R20 *)rt_nil_check(l_P_897))).f_TS, ((*(R19 *)rt_nil_check(l_A_898))).f_E, p_LINE), l_BS_896);
}
else
{
if ((!((*(R19 *)rt_nil_check(l_A_898))).f_HAVE))
{
S_R18(&((*(R19 *)rt_nil_check(l_A_898))).f_V, r_EXPR(((*(R19 *)rt_nil_check(l_A_898))).f_E, NULL), 0);
((*(R19 *)rt_nil_check(l_A_898))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R20 *)rt_nil_check(l_P_897))).f_TS, (((*(R19 *)rt_nil_check(l_A_898))).f_V).f_T, l_BS_896)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R20 *)rt_nil_check(l_P_897))).f_NAME);
}
}
l_P_897 = ((*(R20 *)rt_nil_check(l_P_897))).f_NEXT;
l_A_898 = ((*(R19 *)rt_nil_check(l_A_898))).f_NEXT;
}
} L_end899: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_896);
{
R13 * l_I_900; memset(&l_I_900, 0, sizeof l_I_900);
l_I_900 = ((*(R13 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_900 == NULL)) goto L_end901;
{
if (r_SAME_STATIC_BINDS(((*(R13 *)rt_nil_check(l_I_900))).f_BINDINGS, ((*(R16 *)rt_nil_check(l_BS_896))).f_NEXT))
{
return l_I_900;
}
l_I_900 = ((*(R13 *)rt_nil_check(l_I_900))).f_INSTANCES;
}
} L_end901: ;
}
return r_NEW_INSTANCE(p_G, ((*(R16 *)rt_nil_check(l_BS_896))).f_NEXT);
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R16 * p_A, R16 * p_B) { 
R16 * l_P_902; memset(&l_P_902, 0, sizeof l_P_902);
l_P_902 = p_A;
for (;;) {
if ((l_P_902 == NULL)) goto L_end903;
{
{
R16 * l_Q_904; memset(&l_Q_904, 0, sizeof l_Q_904);
l_Q_904 = r_FIND_BIND(p_B, ((*(R16 *)rt_nil_check(l_P_902))).f_NAME);
if ((l_Q_904 == NULL))
{
return 0;
}
if (((!(((*(R16 *)rt_nil_check(l_P_902))).f_T == NULL)) || (!(((*(R16 *)rt_nil_check(l_Q_904))).f_T == NULL))))
{
if (((((*(R16 *)rt_nil_check(l_P_902))).f_T == NULL) || (((*(R16 *)rt_nil_check(l_Q_904))).f_T == NULL)))
{
return 0;
}
if ((!r_SAME_TYPE(((*(R16 *)rt_nil_check(l_P_902))).f_T, ((*(R16 *)rt_nil_check(l_Q_904))).f_T)))
{
return 0;
}
}
if ((((!(((*(R16 *)rt_nil_check(l_P_902))).f_HASMV == ((*(R16 *)rt_nil_check(l_Q_904))).f_HASMV)) || (!(((*(R16 *)rt_nil_check(l_P_902))).f_MV == ((*(R16 *)rt_nil_check(l_Q_904))).f_MV))) || (!(((*(R16 *)rt_nil_check(l_P_902))).f_R == ((*(R16 *)rt_nil_check(l_Q_904))).f_R))))
{
return 0;
}
}
l_P_902 = ((*(R16 *)rt_nil_check(l_P_902))).f_NEXT;
}
} L_end903: ;
return 1;
rt_raise(RT_X_INIT);
}
static R13 * r_ROUTINE_ARGUMENT(R11 * p_TS, R11 * p_E, rt_int p_LINE) { 
R13 * l_Y_905; memset(&l_Y_905, 0, sizeof l_Y_905);
l_Y_905 = r_LOOKUP(((*(R11 *)rt_nil_check(p_E))).f_NAME);
R13 * l_FOUND_906; memset(&l_FOUND_906, 0, sizeof l_FOUND_906);
l_FOUND_906 = NULL;
if ((!(((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(p_LINE, rt_str("a routine name is expected as the argument", 42));
}
for (;;) {
if ((l_Y_905 == NULL)) goto L_end907;
{
if ((((*(R13 *)rt_nil_check(l_Y_905))).f_KIND == g_Y_ROUTINE))
{
{
R13 * l_R_908; memset(&l_R_908, 0, sizeof l_R_908);
l_R_908 = r_ORIGINAL(l_Y_905);
r_ROUTINE_HEADER(l_R_908);
if (((r_LIST_LENGTH(((*(R11 *)rt_nil_check(p_TS))).f_A) == r_PARAM_COUNT(l_R_908)) && (!((*(R13 *)rt_nil_check(l_R_908))).f_GENERIC)))
{
if (((!(l_FOUND_906 == NULL)) && (!(l_FOUND_906 == l_R_908))))
{
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_906 = l_R_908;
}
}
}
l_Y_905 = r_LOOKUP_NEXT(l_Y_905);
}
} L_end907: ;
if ((l_FOUND_906 == NULL))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter: ", 39), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R13 *)rt_nil_check(l_FOUND_906))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R11 *)rt_nil_check(p_E))).f_NAME);
}
return l_FOUND_906;
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R13 * p_G, rt_int p_LINE, R16 * p_BS) { 
R11 * l_NEEDL_909; memset(&l_NEEDL_909, 0, sizeof l_NEEDL_909);
l_NEEDL_909 = ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R16 * l_SAVED_910; memset(&l_SAVED_910, 0, sizeof l_SAVED_910);
l_SAVED_910 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
((*(R22 *)rt_nil_check(g_W))).f_BINDS = ((*(R16 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_909 == NULL)) goto L_end911;
{
{
R11 * l_T_912; memset(&l_T_912, 0, sizeof l_T_912);
l_T_912 = ((*(R11 *)rt_nil_check(l_NEEDL_909))).f_A;
for (;;) {
if ((l_T_912 == NULL)) goto L_end913;
{
if ((r_FIND_BIND(((*(R16 *)rt_nil_check(p_BS))).f_NEXT, ((*(R11 *)rt_nil_check(l_T_912))).f_NAME) == NULL))
{
{
R19 * l_ARGS_914; memset(&l_ARGS_914, 0, sizeof l_ARGS_914);
l_ARGS_914 = NULL;
R19 * l_TAIL_915; memset(&l_TAIL_915, 0, sizeof l_TAIL_915);
l_TAIL_915 = NULL;
R11 * l_P_916; memset(&l_P_916, 0, sizeof l_P_916);
l_P_916 = ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_T_912))).f_B))).f_A;
R13 * l_R_917; memset(&l_R_917, 0, sizeof l_R_917);
for (;;) {
if ((l_P_916 == NULL)) goto L_end918;
{
{
R19 * l_A_919; memset(&l_A_919, 0, sizeof l_A_919);
if ((((*(R11 *)rt_nil_check(l_P_916))).f_B == NULL))
{
l_A_919 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R22 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_919 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R11 *)rt_nil_check(l_P_916))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R19 *)rt_nil_check(l_A_919))).f_MODE = ((*(R11 *)rt_nil_check(l_P_916))).f_IV;
if ((l_TAIL_915 == NULL))
{
l_ARGS_914 = l_A_919;
}
else
{
((*(R19 *)rt_nil_check(l_TAIL_915))).f_NEXT = l_A_919;
}
l_TAIL_915 = l_A_919;
}
l_P_916 = ((*(R11 *)rt_nil_check(l_P_916))).f_NEXT;
}
} L_end918: ;
l_R_917 = r_FIND_ROUTINE(((*(R11 *)rt_nil_check(l_T_912))).f_NAME, l_ARGS_914, p_LINE, 0);
if ((l_R_917 == NULL))
{
l_R_917 = r_LOOKUP(((*(R11 *)rt_nil_check(l_T_912))).f_NAME);
if ((!(l_R_917 == NULL)))
{
if (((!(((*(R13 *)rt_nil_check(l_R_917))).f_KIND == g_Y_BUILTIN)) && (!(((*(R13 *)rt_nil_check(l_R_917))).f_KIND == g_Y_ROUTINE))))
{
l_R_917 = NULL;
}
}
if ((!(l_R_917 == NULL)))
{
if ((((*(R13 *)rt_nil_check(l_R_917))).f_KIND == g_Y_ROUTINE))
{
l_R_917 = NULL;
}
}
}
if ((l_R_917 == NULL))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R11 *)rt_nil_check(l_T_912))).f_NAME);
}
r_ADD_BIND(((*(R11 *)rt_nil_check(l_T_912))).f_NAME, NULL, r_NO_MVAL(), l_R_917, p_BS);
((*(R22 *)rt_nil_check(g_W))).f_BINDS = ((*(R16 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_912 = ((*(R11 *)rt_nil_check(l_T_912))).f_NEXT;
}
} L_end913: ;
}
l_NEEDL_909 = ((*(R11 *)rt_nil_check(l_NEEDL_909))).f_NEXT;
}
} L_end911: ;
((*(R22 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_910;
}
static R13 * r_NEW_INSTANCE(R13 * p_G, R16 * p_BS) { 
R13 * l_I_920; memset(&l_I_920, 0, sizeof l_I_920);
l_I_920 = r_NEW_SYM(g_Y_ROUTINE, ((*(R13 *)rt_nil_check(p_G))).f_NAME);
R16 * l_SAVED_921; memset(&l_SAVED_921, 0, sizeof l_SAVED_921);
l_SAVED_921 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
R20 * l_P_922; memset(&l_P_922, 0, sizeof l_P_922);
l_P_922 = ((*(R13 *)rt_nil_check(p_G))).f_PARAMS;
R20 * l_TAIL_923; memset(&l_TAIL_923, 0, sizeof l_TAIL_923);
l_TAIL_923 = NULL;
S_R13(&(*(R13 *)rt_nil_check(l_I_920)), (*(R13 *)rt_nil_check(p_G)), 0);
((*(R13 *)rt_nil_check(l_I_920))).f_GENERIC = 0;
((*(R13 *)rt_nil_check(l_I_920))).f_BINDINGS = p_BS;
((*(R13 *)rt_nil_check(l_I_920))).f_PARAMS = NULL;
S_R7(&((*(R13 *)rt_nil_check(l_I_920))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R13 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R13 *)rt_nil_check(l_I_920))).f_INSTANCES = ((*(R13 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R13 *)rt_nil_check(p_G))).f_INSTANCES = l_I_920;
((*(R22 *)rt_nil_check(g_W))).f_BINDS = p_BS;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_922 == NULL)) goto L_end924;
{
{
R20 * l_PM_925; memset(&l_PM_925, 0, sizeof l_PM_925);
l_PM_925 = ((R20 *)rt_alloc(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_PM_925)), (*(R20 *)rt_nil_check(l_P_922)), 0);
((*(R20 *)rt_nil_check(l_PM_925))).f_NEXT = NULL;
if ((((*(R20 *)rt_nil_check(l_P_922))).f_TS == NULL))
{
((*(R20 *)rt_nil_check(l_PM_925))).f_T = NULL;
}
else if ((((*(R11 *)rt_nil_check(((*(R20 *)rt_nil_check(l_P_922))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R20 *)rt_nil_check(l_PM_925))).f_T = ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID;
}
else
{
((*(R20 *)rt_nil_check(l_PM_925))).f_T = r_RESOLVE(((*(R20 *)rt_nil_check(l_P_922))).f_TS);
}
((*(R20 *)rt_nil_check(l_PM_925))).f_TS = NULL;
if ((l_TAIL_923 == NULL))
{
((*(R13 *)rt_nil_check(l_I_920))).f_PARAMS = l_PM_925;
}
else
{
((*(R20 *)rt_nil_check(l_TAIL_923))).f_NEXT = l_PM_925;
}
l_TAIL_923 = l_PM_925;
}
l_P_922 = ((*(R20 *)rt_nil_check(l_P_922))).f_NEXT;
}
} L_end924: ;
((*(R13 *)rt_nil_check(l_I_920))).f_RESULT = r_RESULT_TYPE(l_I_920);
r_LEAVE_MODULE_OF(p_G);
((*(R22 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_921;
S_R7(&((*(R13 *)rt_nil_check(l_I_920))).f_FWD, r_C_HEADER(l_I_920), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R13 *)rt_nil_check(l_I_920))).f_FWD, rt_str(";", 1)));
((*(R13 *)rt_nil_check(l_I_920))).f_MEMBERS = ((*(R22 *)rt_nil_check(g_W))).f_PENDING;
((*(R22 *)rt_nil_check(g_W))).f_PENDING = l_I_920;
return l_I_920;
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R11 * p_L, R7 p_NAME) { 
R11 * l_P_926; memset(&l_P_926, 0, sizeof l_P_926);
l_P_926 = p_L;
for (;;) {
if ((l_P_926 == NULL)) goto L_end927;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_P_926))).f_NAME, p_NAME))
{
return 1;
}
l_P_926 = ((*(R11 *)rt_nil_check(l_P_926))).f_NEXT;
}
} L_end927: ;
return 0;
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R13 * p_Y, rt_int p_LINE) { 
R28 * l_IS_928; memset(&l_IS_928, 0, sizeof l_IS_928);
l_IS_928 = ((*(R22 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R13 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
return (!((*(R13 *)rt_nil_check(p_Y))).f_INPUT);
}
if ((l_IS_928 == NULL))
{
return (!((*(R13 *)rt_nil_check(p_Y))).f_INPUT);
}
if (((((*(R13 *)rt_nil_check(p_Y))).f_OWNER == ((*(R28 *)rt_nil_check(l_IS_928))).f_ID) || (((*(R28 *)rt_nil_check(l_IS_928))).f_ID == ((rt_int)0LL))))
{
return (!((*(R13 *)rt_nil_check(p_Y))).f_INPUT);
}
if ((!(((*(R28 *)rt_nil_check(l_IS_928))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_928))).f_IMPORTS))).f_B, ((*(R13 *)rt_nil_check(p_Y))).f_NAME))
{
return (!((*(R13 *)rt_nil_check(p_Y))).f_INPUT);
}
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_928))).f_IMPORTS))).f_A, ((*(R13 *)rt_nil_check(p_Y))).f_NAME))
{
return 0;
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R13 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R13 * p_Y) { 
R11 * l_ITEMS_929; memset(&l_ITEMS_929, 0, sizeof l_ITEMS_929);
l_ITEMS_929 = ((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R11 * l_HEAD_930; memset(&l_HEAD_930, 0, sizeof l_HEAD_930);
l_HEAD_930 = NULL;
R11 * l_TAIL_931; memset(&l_TAIL_931, 0, sizeof l_TAIL_931);
l_TAIL_931 = NULL;
if ((!(((*(R13 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R13 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_929 == NULL))
{
((*(R13 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R11 *)rt_nil_check(l_ITEMS_929))).f_A, &l_HEAD_930, &l_TAIL_931);
r_ADD_USES(((*(R11 *)rt_nil_check(l_ITEMS_929))).f_B, &l_HEAD_930, &l_TAIL_931);
{
R11 * l_R_932; memset(&l_R_932, 0, sizeof l_R_932);
l_R_932 = ((*(R11 *)rt_nil_check(l_ITEMS_929))).f_C;
for (;;) {
if ((l_R_932 == NULL)) goto L_end933;
{
{
R13 * l_Z_934; memset(&l_Z_934, 0, sizeof l_Z_934);
l_Z_934 = r_LOOKUP(((*(R11 *)rt_nil_check(l_R_932))).f_NAME);
if ((l_Z_934 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(l_R_932))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R11 *)rt_nil_check(l_R_932))).f_NAME);
}
for (;;) {
if ((l_Z_934 == NULL)) goto L_end935;
{
if ((((*(R13 *)rt_nil_check(l_Z_934))).f_KIND == g_Y_ROUTINE))
{
{
R13 * l_O_936; memset(&l_O_936, 0, sizeof l_O_936);
l_O_936 = r_ORIGINAL(l_Z_934);
R11 * l_U_937; memset(&l_U_937, 0, sizeof l_U_937);
r_COMPUTE_USES(l_O_936);
l_U_937 = ((*(R13 *)rt_nil_check(l_O_936))).f_USES;
for (;;) {
if ((l_U_937 == NULL)) goto L_end938;
{
if ((!r_IN_IDENTS(l_HEAD_930, ((*(R11 *)rt_nil_check(l_U_937))).f_NAME)))
{
{
R11 * l_N_939; memset(&l_N_939, 0, sizeof l_N_939);
l_N_939 = r_NEW_NODE(g_N_IDENT, ((*(R11 *)rt_nil_check(l_U_937))).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_N_939))).f_NAME, ((*(R11 *)rt_nil_check(l_U_937))).f_NAME, 0);
((*(R11 *)rt_nil_check(l_N_939))).f_IV = ((*(R11 *)rt_nil_check(l_U_937))).f_IV;
r_ADD_LIST(l_N_939, &l_HEAD_930, &l_TAIL_931);
}
}
l_U_937 = ((*(R11 *)rt_nil_check(l_U_937))).f_NEXT;
}
} L_end938: ;
}
}
l_Z_934 = r_LOOKUP_NEXT(l_Z_934);
}
} L_end935: ;
}
l_R_932 = ((*(R11 *)rt_nil_check(l_R_932))).f_NEXT;
}
} L_end933: ;
}
((*(R13 *)rt_nil_check(p_Y))).f_USES = l_HEAD_930;
((*(R13 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static void r_ROUTINE_USES(R11 * p_RS) { 
R11 * l_R_940; memset(&l_R_940, 0, sizeof l_R_940);
l_R_940 = p_RS;
for (;;) {
if ((l_R_940 == NULL)) goto L_end941;
{
if ((((*(R11 *)rt_nil_check(l_R_940))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_940));
}
l_R_940 = ((*(R11 *)rt_nil_check(l_R_940))).f_NEXT;
}
} L_end941: ;
}
static void r_ADD_USES(R11 * p_L, R11 * *p_HEAD, R11 * *p_TAIL) { 
R11 * l_P_942; memset(&l_P_942, 0, sizeof l_P_942);
l_P_942 = p_L;
for (;;) {
if ((l_P_942 == NULL)) goto L_end943;
{
{
R13 * l_V_944; memset(&l_V_944, 0, sizeof l_V_944);
l_V_944 = r_LOOKUP(((*(R11 *)rt_nil_check(l_P_942))).f_NAME);
R11 * l_N_945; memset(&l_N_945, 0, sizeof l_N_945);
l_N_945 = r_NEW_NODE(g_N_IDENT, ((*(R11 *)rt_nil_check(l_P_942))).f_LINE);
if ((l_V_944 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(l_P_942))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R11 *)rt_nil_check(l_P_942))).f_NAME);
}
S_R7(&((*(R11 *)rt_nil_check(l_N_945))).f_NAME, ((*(R11 *)rt_nil_check(l_P_942))).f_NAME, 0);
((*(R11 *)rt_nil_check(l_N_945))).f_IV = ((*(R13 *)rt_nil_check(l_V_944))).f_OWNER;
if ((((*(R13 *)rt_nil_check(l_V_944))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_945, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_942 = ((*(R11 *)rt_nil_check(l_P_942))).f_NEXT;
}
} L_end943: ;
}
static void r_CHECK_CALL_IMPORTS(R13 * p_Y, rt_int p_LINE) { 
R28 * l_IS_946; memset(&l_IS_946, 0, sizeof l_IS_946);
l_IS_946 = ((*(R22 *)rt_nil_check(g_W))).f_IS;
R11 * l_U_947; memset(&l_U_947, 0, sizeof l_U_947);
l_U_947 = ((*(R13 *)rt_nil_check(p_Y))).f_USES;
if ((l_IS_946 == NULL))
{
return;
}
if ((((*(R28 *)rt_nil_check(l_IS_946))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_947 == NULL)) goto L_end948;
{
if ((!(((*(R11 *)rt_nil_check(l_U_947))).f_IV == ((*(R28 *)rt_nil_check(l_IS_946))).f_ID)))
{
if ((((*(R28 *)rt_nil_check(l_IS_946))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R13 *)rt_nil_check(p_Y))).f_NAME, (((*(R13 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R11 *)rt_nil_check(l_U_947))).f_NAME, (((*(R11 *)rt_nil_check(l_U_947))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!((((r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_946))).f_IMPORTS))).f_A, ((*(R11 *)rt_nil_check(l_U_947))).f_NAME) || r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_946))).f_IMPORTS))).f_B, ((*(R11 *)rt_nil_check(l_U_947))).f_NAME)) || r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_946))).f_IMPORTS))).f_C, ((*(R13 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R11 *)rt_nil_check(((*(R28 *)rt_nil_check(l_IS_946))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))))))
{
r_FAIL(p_LINE, rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("the routine ", 12), r_STR(((*(R13 *)rt_nil_check(p_Y))).f_NAME, (((*(R13 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R11 *)rt_nil_check(l_U_947))).f_NAME, (((*(R11 *)rt_nil_check(l_U_947))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_947 = ((*(R11 *)rt_nil_check(l_U_947))).f_NEXT;
}
} L_end948: ;
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
R21 * l_C_949; memset(&l_C_949, 0, sizeof l_C_949);
l_C_949 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_949 == NULL)) goto L_end950;
{
if ((((*(R21 *)rt_nil_check(l_C_949))).f_KIND == ((rt_int)1LL)))
{
goto L_end950;
}
if ((((*(R21 *)rt_nil_check(l_C_949))).f_KIND == ((rt_int)3LL)))
{
{
R11 * l_H_951; memset(&l_H_951, 0, sizeof l_H_951);
l_H_951 = ((*(R21 *)rt_nil_check(l_C_949))).f_HANDLERS;
for (;;) {
if ((l_H_951 == NULL)) goto L_end952;
{
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(l_H_951))).f_A, p_NAME))
{
return 1;
}
l_H_951 = ((*(R11 *)rt_nil_check(l_H_951))).f_NEXT;
}
} L_end952: ;
}
}
l_C_949 = ((*(R21 *)rt_nil_check(l_C_949))).f_NEXT;
}
} L_end950: ;
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
R21 * l_C_953; memset(&l_C_953, 0, sizeof l_C_953);
l_C_953 = ((R21 *)rt_alloc(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_C_953)), ({ R21 rc954; memset(&rc954, 0, sizeof rc954);  rc954.f_KIND = p_KIND; S_R7(&rc954.f_NAME, p_NAME, 0); rc954.f_HANDLERS = NULL; rc954.f_NEXT = ((*(R22 *)rt_nil_check(g_W))).f_CTXS; rc954; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = l_C_953;
}
static void r_POP_CTX(void) { 
((*(R22 *)rt_nil_check(g_W))).f_CTXS = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R21 * r_LEAVE(rt_int p_KIND) { 
R21 * l_C_955; memset(&l_C_955, 0, sizeof l_C_955);
l_C_955 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_955 == NULL)) goto L_end956;
{
if ((((*(R21 *)rt_nil_check(l_C_955))).f_KIND == p_KIND))
{
return l_C_955;
}
if ((((*(R21 *)rt_nil_check(l_C_955))).f_KIND == ((rt_int)1LL)))
{
return NULL;
}
if ((((*(R21 *)rt_nil_check(l_C_955))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R21 *)rt_nil_check(l_C_955))).f_NAME));
}
l_C_955 = ((*(R21 *)rt_nil_check(l_C_955))).f_NEXT;
}
} L_end956: ;
return NULL;
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { 
R21 * l_C_957; memset(&l_C_957, 0, sizeof l_C_957);
l_C_957 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_958; memset(&l_N_958, 0, sizeof l_N_958);
l_N_958 = ((rt_int)0LL);
for (;;) {
if ((l_C_957 == NULL)) goto L_end959;
{
if ((((*(R21 *)rt_nil_check(l_C_957))).f_KIND == ((rt_int)1LL)))
{
goto L_end959;
}
if ((((*(R21 *)rt_nil_check(l_C_957))).f_KIND == ((rt_int)3LL)))
{
l_N_958 = rt_add(l_N_958, ((rt_int)1LL));
}
l_C_957 = ((*(R21 *)rt_nil_check(l_C_957))).f_NEXT;
}
} L_end959: ;
return l_N_958;
rt_raise(RT_X_INIT);
}
static R7 r_EXC_NAME(R7 p_NAME) { 
R11 * l_N_960; memset(&l_N_960, 0, sizeof l_N_960);
l_N_960 = ((*(R22 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_960 == NULL)) goto L_end961;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_N_960))).f_NAME, p_NAME))
{
return r_FMT1(rt_str("x_@", 3), p_NAME);
}
l_N_960 = ((*(R11 *)rt_nil_check(l_N_960))).f_NEXT;
}
} L_end961: ;
l_N_960 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R7(&((*(R11 *)rt_nil_check(l_N_960))).f_NAME, p_NAME, 0);
((*(R11 *)rt_nil_check(l_N_960))).f_NEXT = ((*(R22 *)rt_nil_check(g_W))).f_EXCS;
((*(R22 *)rt_nil_check(g_W))).f_EXCS = l_N_960;
return r_FMT1(rt_str("x_@", 3), p_NAME);
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R11 * p_DECLS) { 
R11 * l_D_962; memset(&l_D_962, 0, sizeof l_D_962);
l_D_962 = p_DECLS;
for (;;) {
if ((l_D_962 == NULL)) goto L_end963;
{
if (((((*(R11 *)rt_nil_check(l_D_962))).f_KIND == g_N_TYPE) || (((*(R11 *)rt_nil_check(l_D_962))).f_KIND == g_N_REPTYPE)))
{
{
R13 * l_Y_964; memset(&l_Y_964, 0, sizeof l_Y_964);
l_Y_964 = r_NEW_SYM(g_Y_TYPE, ((*(R11 *)rt_nil_check(l_D_962))).f_NAME);
if ((((*(R11 *)rt_nil_check(l_D_962))).f_KIND == g_N_REPTYPE))
{
((*(R13 *)rt_nil_check(l_Y_964))).f_KIND = g_Y_REPTYPE;
}
((*(R13 *)rt_nil_check(l_Y_964))).f_DECL = l_D_962;
r_DEFINE(l_Y_964, ((*(R11 *)rt_nil_check(l_D_962))).f_LINE);
}
}
l_D_962 = ((*(R11 *)rt_nil_check(l_D_962))).f_NEXT;
}
} L_end963: ;
}
static void r_DECLARE_LABELS(R11 * p_S0) { 
R11 * l_S_965; memset(&l_S_965, 0, sizeof l_S_965);
l_S_965 = p_S0;
for (;;) {
if ((l_S_965 == NULL)) goto L_end966;
{
{
R11 * l_L_967; memset(&l_L_967, 0, sizeof l_L_967);
l_L_967 = l_S_965;
for (;;) {
if ((!(((*(R11 *)rt_nil_check(l_L_967))).f_KIND == g_N_LABELED))) goto L_end968;
{
{
R13 * l_Y_969; memset(&l_Y_969, 0, sizeof l_Y_969);
l_Y_969 = r_NEW_SYM(g_Y_LABEL, ((*(R11 *)rt_nil_check(l_L_967))).f_NAME);
S_R7(&((*(R13 *)rt_nil_check(l_Y_969))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(((*(R11 *)rt_nil_check(l_L_967))).f_NAME, (((*(R11 *)rt_nil_check(l_L_967))).f_NAME).f_LEN))), 0);
((*(R13 *)rt_nil_check(l_Y_969))).f_MV = r_GUARDS();
r_DEFINE(l_Y_969, ((*(R11 *)rt_nil_check(l_L_967))).f_LINE);
}
l_L_967 = ((*(R11 *)rt_nil_check(l_L_967))).f_A;
}
} L_end968: ;
}
l_S_965 = ((*(R11 *)rt_nil_check(l_S_965))).f_NEXT;
}
} L_end966: ;
}
static void r_BODY(R11 * p_B) { 
R11 * l_D_970; memset(&l_D_970, 0, sizeof l_D_970);
l_D_970 = ((*(R11 *)rt_nil_check(p_B))).f_A;
R11 * l_S_971; memset(&l_S_971, 0, sizeof l_S_971);
l_S_971 = ((*(R11 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R11 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_970 == NULL)) goto L_end972;
{
if (((((*(R11 *)rt_nil_check(l_D_970))).f_KIND == g_N_VAR) || (((*(R11 *)rt_nil_check(l_D_970))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_970);
}
l_D_970 = ((*(R11 *)rt_nil_check(l_D_970))).f_NEXT;
}
} L_end972: ;
r_DECLARE_LABELS(((*(R11 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_971 == NULL)) goto L_end973;
{
r_STMT(l_S_971);
l_S_971 = ((*(R11 *)rt_nil_check(l_S_971))).f_NEXT;
}
} L_end973: ;
}
static void r_OPEN_BODY(R11 * p_B) { 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R11 * p_S, R11 * p_BODY_NODE, R11 * p_HANDLERS) { 
R7 l_F_974; memset(&l_F_974, 0, sizeof l_F_974);
S_R7(&l_F_974, r_NEW_NAME(rt_str("xf", 2)), 0);
R11 * l_H_975; memset(&l_H_975, 0, sizeof l_H_975);
l_H_975 = p_HANDLERS;
R7 l_WORD_976; memset(&l_WORD_976, 0, sizeof l_WORD_976);
S_R7(&l_WORD_976, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_974, l_F_974));
r_PUSH_CTX(((rt_int)3LL), l_F_974);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_974, l_F_974, l_F_974));
for (;;) {
if ((l_H_975 == NULL)) goto L_end977;
{
{
R11 * l_N_978; memset(&l_N_978, 0, sizeof l_N_978);
l_N_978 = ((*(R11 *)rt_nil_check(l_H_975))).f_A;
R7 l_COND_979; memset(&l_COND_979, 0, sizeof l_COND_979);
S_R7(&l_COND_979, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_978 == NULL)) goto L_end980;
{
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(l_N_978))).f_NEXT, ((*(R11 *)rt_nil_check(l_N_978))).f_NAME))
{
r_FAILT(((*(R11 *)rt_nil_check(l_N_978))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R11 *)rt_nil_check(l_N_978))).f_NAME);
}
S_R7(&l_COND_979, r_FMT3(rt_str("@ || @x == @", 12), l_COND_979, l_F_974, r_EXC_NAME(((*(R11 *)rt_nil_check(l_N_978))).f_NAME)), 0);
l_N_978 = ((*(R11 *)rt_nil_check(l_N_978))).f_NEXT;
}
} L_end980: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_976, l_COND_979));
S_R7(&l_WORD_976, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_974, rt_str("x", 1)));
r_OPEN_BODY(((*(R11 *)rt_nil_check(l_H_975))).f_B);
r_POP_CTX();
}
l_H_975 = ((*(R11 *)rt_nil_check(l_H_975))).f_NEXT;
}
} L_end977: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_974));
}
static void r_STMT(R11 * p_S) { 
rt_int l_K_981; memset(&l_K_981, 0, sizeof l_K_981);
l_K_981 = ((*(R11 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_981 == g_N_NULL))
{
return;
}
else if ((l_K_981 == g_N_LABELED))
{
{
R13 * l_Y_982; memset(&l_Y_982, 0, sizeof l_Y_982);
l_Y_982 = r_LOOKUP(((*(R11 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R13 *)rt_nil_check(l_Y_982))).f_ACCESS));
r_STMT(((*(R11 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_981 == g_N_GOTO))
{
{
R13 * l_Y_983; memset(&l_Y_983, 0, sizeof l_Y_983);
l_Y_983 = r_LOOKUP(((*(R11 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_984; memset(&l_N_984, 0, sizeof l_N_984);
R21 * l_C_985; memset(&l_C_985, 0, sizeof l_C_985);
l_C_985 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_983 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R11 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R13 *)rt_nil_check(l_Y_983))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R11 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R13 *)rt_nil_check(l_Y_983))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R11 *)rt_nil_check(p_S))).f_NAME);
}
l_N_984 = rt_sub(r_GUARDS(), ((*(R13 *)rt_nil_check(l_Y_983))).f_MV);
for (;;) {
if ((l_N_984 <= ((rt_int)0LL))) goto L_end986;
{
if ((((*(R21 *)rt_nil_check(l_C_985))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R21 *)rt_nil_check(l_C_985))).f_NAME));
l_N_984 = rt_sub(l_N_984, ((rt_int)1LL));
}
l_C_985 = ((*(R21 *)rt_nil_check(l_C_985))).f_NEXT;
}
} L_end986: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R13 *)rt_nil_check(l_Y_983))).f_ACCESS));
}
}
else if ((l_K_981 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_981 == g_N_CALL))
{
((*(R11 *)rt_nil_check(p_S))).f_KIND = g_N_APPLY;
{
R18 l_V_987; memset(&l_V_987, 0, sizeof l_V_987);
S_R18(&l_V_987, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_987).f_T == NULL)))
{
if ((!(((*(R14 *)rt_nil_check((l_V_987).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R11 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_987).f_C, rt_str(";", 1)));
}
}
else if ((l_K_981 == g_N_IF))
{
r_IF_STMT(((*(R11 *)rt_nil_check(p_S))).f_A, ((*(R11 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_981 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_981 == g_N_LOOP))
{
{
R7 l_END_L_988; memset(&l_END_L_988, 0, sizeof l_END_L_988);
S_R7(&l_END_L_988, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R11 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R11 *)rt_nil_check(p_S))).f_A), l_END_L_988));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_988);
r_OPEN_BODY(((*(R11 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
if ((!(((*(R11 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R11 *)rt_nil_check(p_S))).f_C), l_END_L_988));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_988));
}
}
else if ((l_K_981 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_981 == g_N_EXIT))
{
{
R21 * l_C_989; memset(&l_C_989, 0, sizeof l_C_989);
l_C_989 = r_LEAVE(((rt_int)2LL));
if ((l_C_989 == NULL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R21 *)rt_nil_check(l_C_989))).f_NAME));
}
}
else if ((l_K_981 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_981 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R11 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_981 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_981 == g_N_ASSERT))
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R11 *)rt_nil_check(p_S))).f_A)));
}
else if ((l_K_981 == g_N_EXCEPT))
{
r_GUARDED(((*(R11 *)rt_nil_check(p_S))).f_A, NULL, ((*(R11 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_981 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_981 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_981 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R18 r_PROCEDURE_CALL(R11 * p_S) { 
R13 * l_Y_990; memset(&l_Y_990, 0, sizeof l_Y_990);
l_Y_990 = r_LOOKUP(((*(R11 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_990 == NULL)))
{
if (((((*(R13 *)rt_nil_check(l_Y_990))).f_KIND == g_Y_VAR) || (((*(R13 *)rt_nil_check(l_Y_990))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R11 *)rt_nil_check(p_S))).f_NAME);
}
}
return r_CALL_EXPR(p_S, NULL);
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R11 * p_ARMS, R11 * p_ELSE_BODY) { 
R11 * l_ARM_991; memset(&l_ARM_991, 0, sizeof l_ARM_991);
l_ARM_991 = p_ARMS;
R7 l_WORD_992; memset(&l_WORD_992, 0, sizeof l_WORD_992);
S_R7(&l_WORD_992, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_993; memset(&l_OPEN_993, 0, sizeof l_OPEN_993);
l_OPEN_993 = ((rt_int)0LL);
for (;;) {
if ((l_ARM_991 == NULL)) goto L_end994;
{
{
R12 l_M_995; memset(&l_M_995, 0, sizeof l_M_995);
S_R12(&l_M_995, r_MANIFEST(((*(R11 *)rt_nil_check(l_ARM_991))).f_A), 0);
if (((l_M_995).f_OK && (!r_TEQS(l_WORD_992, rt_str("if", 2)))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_993 = rt_add(l_OPEN_993, ((rt_int)1LL));
S_R7(&l_WORD_992, r_MK(rt_str("if", 2)), 0);
}
if ((l_M_995).f_OK)
{
if (((l_M_995).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R11 *)rt_nil_check(l_ARM_991))).f_B);
{ rt_int it997_lo = ((rt_int)1LL), it997_hi = l_OPEN_993;
for (rt_int it997 = it997_lo; it997 <= it997_hi; it997++) {
{
r_CODES(rt_str("}", 1));
}
} } L_end996: ;
return;
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_992, r_BOOL_EXPR(((*(R11 *)rt_nil_check(l_ARM_991))).f_A)));
r_OPEN_BODY(((*(R11 *)rt_nil_check(l_ARM_991))).f_B);
S_R7(&l_WORD_992, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_991 = ((*(R11 *)rt_nil_check(l_ARM_991))).f_NEXT;
}
} L_end994: ;
if ((!(p_ELSE_BODY == NULL)))
{
if ((!r_TEQS(l_WORD_992, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
{ rt_int it999_lo = ((rt_int)1LL), it999_hi = l_OPEN_993;
for (rt_int it999 = it999_lo; it999 <= it999_hi; it999++) {
{
r_CODES(rt_str("}", 1));
}
} } L_end998: ;
}
static void r_FOR_STMT(R11 * p_S) { 
R7 l_END_L_1000; memset(&l_END_L_1000, 0, sizeof l_END_L_1000);
S_R7(&l_END_L_1000, r_NEW_NAME(rt_str("L_end", 5)), 0);
R7 l_IT_1001; memset(&l_IT_1001, 0, sizeof l_IT_1001);
S_R7(&l_IT_1001, r_NEW_NAME(rt_str("it", 2)), 0);
R11 * l_R_1002; memset(&l_R_1002, 0, sizeof l_R_1002);
l_R_1002 = ((*(R11 *)rt_nil_check(p_S))).f_A;
R18 l_LO_1003; memset(&l_LO_1003, 0, sizeof l_LO_1003);
S_R18(&l_LO_1003, r_EXPR(((*(R11 *)rt_nil_check(l_R_1002))).f_A, NULL), 0);
R18 l_HI_1004; memset(&l_HI_1004, 0, sizeof l_HI_1004);
S_R18(&l_HI_1004, r_EXPR(((*(R11 *)rt_nil_check(l_R_1002))).f_B, (l_LO_1003).f_T), 0);
R14 * l_T_1005; memset(&l_T_1005, 0, sizeof l_T_1005);
l_T_1005 = r_REAL_TYPE((l_LO_1003).f_T);
R7 l_LOC_1006; memset(&l_LOC_1006, 0, sizeof l_LOC_1006);
R7 l_HIC_1007; memset(&l_HIC_1007, 0, sizeof l_HIC_1007);
if ((((*(R14 *)rt_nil_check(l_T_1005))).f_KIND == g_T_ENUM))
{
if (((*(R14 *)rt_nil_check(((*(R14 *)rt_nil_check(l_T_1005))).f_BASE))).f_UNORDERED)
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R14 *)rt_nil_check(l_T_1005))).f_KIND == g_T_INT)) || (!(((*(R14 *)rt_nil_check(l_T_1005))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R7(&l_LOC_1006, (l_LO_1003).f_C, 0);
S_R7(&l_HIC_1007, (l_HI_1004).f_C, 0);
if (((((*(R11 *)rt_nil_check(l_R_1002))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(l_R_1002))).f_IV == ((rt_int)3LL))))
{
S_R7(&l_LOC_1006, r_FMT1(rt_str("(@) + 1", 7), l_LOC_1006), 0);
}
if ((((*(R11 *)rt_nil_check(l_R_1002))).f_IV >= ((rt_int)2LL)))
{
S_R7(&l_HIC_1007, r_FMT1(rt_str("(@) - 1", 7), l_HIC_1007), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_1001, l_LOC_1006, l_IT_1001, l_HIC_1007));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_1001, l_IT_1001, l_IT_1001, l_IT_1001));
r_OPEN_SCOPE();
if (((((*(R11 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R13 * l_Y_1008; memset(&l_Y_1008, 0, sizeof l_Y_1008);
l_Y_1008 = r_NEW_SYM(g_Y_CONST, ((*(R11 *)rt_nil_check(p_S))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_1008))).f_INPUT = 1;
if ((((*(R14 *)rt_nil_check(l_T_1005))).f_KIND == g_T_ENUM))
{
((*(R13 *)rt_nil_check(l_Y_1008))).f_T = ((*(R14 *)rt_nil_check(l_T_1005))).f_BASE;
}
else
{
((*(R13 *)rt_nil_check(l_Y_1008))).f_T = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_1008, rt_str("", 0)), l_IT_1001));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_1008, rt_str("", 0)), l_IT_1001));
}
else
{
S_R7(&((*(R13 *)rt_nil_check(l_Y_1008))).f_ACCESS, l_IT_1001, 0);
}
r_DEFINE(l_Y_1008, ((*(R11 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_1000);
r_OPEN_BODY(((*(R11 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_1000));
}
static void r_RETURN_STMT(R11 * p_S) { 
R27 * l_CS_1009; memset(&l_CS_1009, 0, sizeof l_CS_1009);
l_CS_1009 = ((*(R22 *)rt_nil_check(g_W))).f_CS;
R21 * l_C_1010; memset(&l_C_1010, 0, sizeof l_C_1010);
l_C_1010 = r_LEAVE(((rt_int)1LL));
if ((((*(R11 *)rt_nil_check(p_S))).f_A == NULL))
{
if ((!(((*(R27 *)rt_nil_check(l_CS_1009))).f_RESULT == NULL)))
{
if ((!(((*(R14 *)rt_nil_check(((*(R27 *)rt_nil_check(l_CS_1009))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R27 *)rt_nil_check(l_CS_1009))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R27 *)rt_nil_check(l_CS_1009))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODES(rt_str("return;", 7));
}
return;
}
if (((((*(R27 *)rt_nil_check(l_CS_1009))).f_RESULT == NULL) || ((*(R27 *)rt_nil_check(l_CS_1009))).f_IS_PATH))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R14 *)rt_nil_check(((*(R27 *)rt_nil_check(l_CS_1009))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
r_CODE(r_FMT1(rt_str("return @;", 9), r_CONVERT(r_EXPR(((*(R11 *)rt_nil_check(p_S))).f_A, ((*(R27 *)rt_nil_check(l_CS_1009))).f_RESULT), ((*(R27 *)rt_nil_check(l_CS_1009))).f_RESULT, ((*(R11 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
}
static void r_SIGNAL_STMT(R11 * p_S) { 
if (((((*(R11 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R21 * l_C_1011; memset(&l_C_1011, 0, sizeof l_C_1011);
l_C_1011 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_1011 == NULL)) goto L_end1012;
{
if ((((*(R21 *)rt_nil_check(l_C_1011))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R21 *)rt_nil_check(l_C_1011))).f_NAME));
return;
}
if ((((*(R21 *)rt_nil_check(l_C_1011))).f_KIND == ((rt_int)1LL)))
{
goto L_end1012;
}
l_C_1011 = ((*(R21 *)rt_nil_check(l_C_1011))).f_NEXT;
}
} L_end1012: ;
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
R11 * l_TG_1013; memset(&l_TG_1013, 0, sizeof l_TG_1013);
l_TG_1013 = ((*(R11 *)rt_nil_check(p_S))).f_A;
if ((((*(R11 *)rt_nil_check(l_TG_1013))).f_KIND == g_N_SUBSTR))
{
{
R18 l_B_1014; memset(&l_B_1014, 0, sizeof l_B_1014);
S_R18(&l_B_1014, r_EXPR(((*(R11 *)rt_nil_check(l_TG_1013))).f_A, NULL), 0);
if ((!(l_B_1014).f_LVAL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R14 *)rt_nil_check((l_B_1014).f_T))).f_KIND == g_T_ABS))
{
{
R19 * l_ARGS_1015; memset(&l_ARGS_1015, 0, sizeof l_ARGS_1015);
l_ARGS_1015 = r_NODE_ARG(((*(R11 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R11 *)rt_nil_check(l_TG_1013))).f_B, g_M_IN, r_NODE_ARG(((*(R11 *)rt_nil_check(l_TG_1013))).f_C, g_M_IN, r_VAL_ARG(l_B_1014, NULL))));
R13 * l_Y_1016; memset(&l_Y_1016, 0, sizeof l_Y_1016);
((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R19 *)rt_nil_check(l_ARGS_1015))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_1016 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_1015, ((*(R11 *)rt_nil_check(p_S))).f_LINE, 1);
if ((l_Y_1016 == NULL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_1016, l_ARGS_1015, ((*(R11 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R14 *)rt_nil_check((l_B_1014).f_T))).f_KIND == g_T_STR)) && (!(((*(R14 *)rt_nil_check((l_B_1014).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R18 l_V_1017; memset(&l_V_1017, 0, sizeof l_V_1017);
S_R18(&l_V_1017, r_EXPR(((*(R11 *)rt_nil_check(p_S))).f_B, (l_B_1014).f_T), 0);
if ((!(((*(R14 *)rt_nil_check((l_V_1017).f_T))).f_KIND == ((*(R14 *)rt_nil_check((l_B_1014).f_T))).f_KIND)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_1014).f_C, r_INT_EXPR(((*(R11 *)rt_nil_check(l_TG_1013))).f_B), r_INT_EXPR(((*(R11 *)rt_nil_check(l_TG_1013))).f_C), (l_V_1017).f_C));
}
}
return;
}
{
R18 l_LV_1018; memset(&l_LV_1018, 0, sizeof l_LV_1018);
S_R18(&l_LV_1018, r_EXPR(l_TG_1013, NULL), 0);
if ((!(l_LV_1018).f_LVAL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
r_CODE(r_STORE_CODE((l_LV_1018).f_T, (l_LV_1018).f_C, r_EXPR(((*(R11 *)rt_nil_check(p_S))).f_B, (l_LV_1018).f_T), ((*(R11 *)rt_nil_check(p_S))).f_LINE, (l_LV_1018).f_SELF));
}
}
static void r_WITH_STMT(R11 * p_S) { 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
{
R13 * l_Y_1019; memset(&l_Y_1019, 0, sizeof l_Y_1019);
l_Y_1019 = r_NEW_SYM(g_Y_VAR, ((*(R11 *)rt_nil_check(p_S))).f_NAME);
R18 l_V_1020; memset(&l_V_1020, 0, sizeof l_V_1020);
S_R18(&l_V_1020, r_EXPR(((*(R11 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R13 *)rt_nil_check(l_Y_1019))).f_T = (l_V_1020).f_T;
if ((((*(R11 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R7 l_CN_1021; memset(&l_CN_1021, 0, sizeof l_CN_1021);
S_R7(&l_CN_1021, r_NEW_OBJECT(l_Y_1019, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_1020).f_T))
{
r_CODE(r_INIT_CODE((l_V_1020).f_T, l_CN_1021));
}
r_CODE(r_ASSIGN_CODE((l_V_1020).f_T, l_CN_1021, (l_V_1020).f_C));
}
}
else
{
if ((!(l_V_1020).f_LVAL))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R7 l_P_1022; memset(&l_P_1022, 0, sizeof l_P_1022);
S_R7(&l_P_1022, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_1020).f_T), l_P_1022, (l_V_1020).f_C));
S_R7(&((*(R13 *)rt_nil_check(l_Y_1019))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_1022), 0);
S_R7(&((*(R13 *)rt_nil_check(l_Y_1019))).f_FIELD, r_NO_TEXT(), 0);
((*(R13 *)rt_nil_check(l_Y_1019))).f_LEVEL = ((rt_int)0LL);
((*(R13 *)rt_nil_check(l_Y_1019))).f_OWNER = rt_neg(((rt_int)1LL));
}
}
r_DEFINE(l_Y_1019, ((*(R11 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R11 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R11 * p_S) { 
R11 * l_ARM_1023; memset(&l_ARM_1023, 0, sizeof l_ARM_1023);
l_ARM_1023 = ((*(R11 *)rt_nil_check(p_S))).f_B;
if (((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R18 l_CH_1024; memset(&l_CH_1024, 0, sizeof l_CH_1024);
S_R18(&l_CH_1024, r_EXPR(((*(R11 *)rt_nil_check(p_S))).f_A, NULL), 0);
R14 * l_T_1025; memset(&l_T_1025, 0, sizeof l_T_1025);
l_T_1025 = r_REAL_TYPE((l_CH_1024).f_T);
R13 * l_BOUND_1026; memset(&l_BOUND_1026, 0, sizeof l_BOUND_1026);
l_BOUND_1026 = r_DISCRIMINATED(((*(R11 *)rt_nil_check(p_S))).f_A);
if (((((*(R14 *)rt_nil_check(l_T_1025))).f_KIND == g_T_STR) || (((*(R14 *)rt_nil_check(l_T_1025))).f_KIND == g_T_BITS)))
{
{
R7 l_TMP_1027; memset(&l_TMP_1027, 0, sizeof l_TMP_1027);
S_R7(&l_TMP_1027, r_NEW_NAME(rt_str("cs", 2)), 0);
R7 l_WORD_1028; memset(&l_WORD_1028, 0, sizeof l_WORD_1028);
S_R7(&l_WORD_1028, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_1027, (l_CH_1024).f_C));
for (;;) {
if ((l_ARM_1023 == NULL)) goto L_end1029;
{
{
R11 * l_L_1030; memset(&l_L_1030, 0, sizeof l_L_1030);
l_L_1030 = ((*(R11 *)rt_nil_check(l_ARM_1023))).f_A;
R7 l_COND_1031; memset(&l_COND_1031, 0, sizeof l_COND_1031);
S_R7(&l_COND_1031, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_1030 == NULL)) goto L_end1032;
{
S_R7(&l_COND_1031, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_1031, l_TMP_1027, (r_EXPR(l_L_1030, l_T_1025)).f_C), 0);
l_L_1030 = ((*(R11 *)rt_nil_check(l_L_1030))).f_NEXT;
}
} L_end1032: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_1028, l_COND_1031));
S_R7(&l_WORD_1028, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(l_ARM_1023))).f_B, ((*(R11 *)rt_nil_check(l_ARM_1023))).f_C);
}
l_ARM_1023 = ((*(R11 *)rt_nil_check(l_ARM_1023))).f_NEXT;
}
} L_end1029: ;
if ((!(((*(R11 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_1028, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(p_S))).f_C, ((*(R11 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if ((((!(((((*(R14 *)rt_nil_check(l_T_1025))).f_KIND == g_T_INT) && (((*(R14 *)rt_nil_check(l_T_1025))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R14 *)rt_nil_check(l_T_1025))).f_KIND == g_T_ENUM))) && (!(((*(R14 *)rt_nil_check(l_T_1025))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_1025));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_1024).f_C));
for (;;) {
if ((l_ARM_1023 == NULL)) goto L_end1033;
{
{
R11 * l_L_1034; memset(&l_L_1034, 0, sizeof l_L_1034);
l_L_1034 = ((*(R11 *)rt_nil_check(l_ARM_1023))).f_A;
R12 l_FIRST_1035; memset(&l_FIRST_1035, 0, sizeof l_FIRST_1035);
S_R12(&l_FIRST_1035, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_1034 == NULL)) goto L_end1036;
{
if ((((*(R11 *)rt_nil_check(l_L_1034))).f_KIND == g_N_RANGE))
{
{
R12 l_LO_1037; memset(&l_LO_1037, 0, sizeof l_LO_1037);
S_R12(&l_LO_1037, r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(l_L_1034))).f_A, l_T_1025), 0);
R12 l_HI_1038; memset(&l_HI_1038, 0, sizeof l_HI_1038);
S_R12(&l_HI_1038, r_ENUM_MANIFEST(((*(R11 *)rt_nil_check(l_L_1034))).f_B, l_T_1025), 0);
rt_int l_A_1039; memset(&l_A_1039, 0, sizeof l_A_1039);
l_A_1039 = (l_LO_1037).f_V;
rt_int l_B_1040; memset(&l_B_1040, 0, sizeof l_B_1040);
l_B_1040 = (l_HI_1038).f_V;
if ((!(((l_LO_1037).f_OK && (l_HI_1038).f_OK))))
{
r_FAIL(((*(R11 *)rt_nil_check(l_L_1034))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R11 *)rt_nil_check(l_L_1034))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(l_L_1034))).f_IV == ((rt_int)3LL))))
{
l_A_1039 = rt_add(l_A_1039, ((rt_int)1LL));
}
if ((((*(R11 *)rt_nil_check(l_L_1034))).f_IV >= ((rt_int)2LL)))
{
l_B_1040 = rt_sub(l_B_1040, ((rt_int)1LL));
}
if ((!(l_FIRST_1035).f_OK))
{
S_R12(&l_FIRST_1035, r_SOME(l_A_1039), 0);
}
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_1039), r_NUM(l_B_1040)));
}
}
else
{
{
R12 l_M_1041; memset(&l_M_1041, 0, sizeof l_M_1041);
S_R12(&l_M_1041, r_ENUM_MANIFEST(l_L_1034, l_T_1025), 0);
if ((!(l_M_1041).f_OK))
{
r_FAIL(((*(R11 *)rt_nil_check(l_L_1034))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_1035).f_OK))
{
S_R12(&l_FIRST_1035, l_M_1041, 0);
}
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_1041).f_V)));
}
}
l_L_1034 = ((*(R11 *)rt_nil_check(l_L_1034))).f_NEXT;
}
} L_end1036: ;
if ((!(l_BOUND_1026 == NULL)))
{
{
R14 * l_SAVED_1042; memset(&l_SAVED_1042, 0, sizeof l_SAVED_1042);
l_SAVED_1042 = ((*(R13 *)rt_nil_check(l_BOUND_1026))).f_T;
((*(R13 *)rt_nil_check(l_BOUND_1026))).f_T = r_NARROW(l_SAVED_1042, ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_1035).f_V);
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(l_ARM_1023))).f_B, ((*(R11 *)rt_nil_check(l_ARM_1023))).f_C);
((*(R13 *)rt_nil_check(l_BOUND_1026))).f_T = l_SAVED_1042;
}
}
else
{
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(l_ARM_1023))).f_B, ((*(R11 *)rt_nil_check(l_ARM_1023))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_1023 = ((*(R11 *)rt_nil_check(l_ARM_1023))).f_NEXT;
}
} L_end1033: ;
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
R13 * l_Y_1043; memset(&l_Y_1043, 0, sizeof l_Y_1043);
l_Y_1043 = r_LOOKUP(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_1043 == NULL))
{
return NULL;
}
if ((!(((*(R13 *)rt_nil_check(l_Y_1043))).f_KIND == g_Y_VAR)))
{
return NULL;
}
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R13 *)rt_nil_check(l_Y_1043))).f_T)))).f_KIND == g_T_REC)))
{
return NULL;
}
{
R15 * l_F_1044; memset(&l_F_1044, 0, sizeof l_F_1044);
l_F_1044 = r_FIND_FIELD(r_REAL_TYPE(((*(R13 *)rt_nil_check(l_Y_1043))).f_T), ((*(R11 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_1044 == NULL))
{
return NULL;
}
if ((!(((*(R15 *)rt_nil_check(l_F_1044))).f_KIND == ((rt_int)2LL))))
{
return NULL;
}
}
return l_Y_1043;
}
rt_raise(RT_X_INIT);
}
static R14 * r_NARROW(R14 * p_T, R7 p_TAGN, rt_int p_V) { 
R14 * l_N_1045; memset(&l_N_1045, 0, sizeof l_N_1045);
l_N_1045 = r_COPY_TYP(p_T);
R15 * l_F_1046; memset(&l_F_1046, 0, sizeof l_F_1046);
l_F_1046 = ((*(R14 *)rt_nil_check(p_T))).f_FIELDS;
R17 * l_A_1047; memset(&l_A_1047, 0, sizeof l_A_1047);
l_A_1047 = ((*(R14 *)rt_nil_check(p_T))).f_ARGS;
R17 * l_HEAD_1048; memset(&l_HEAD_1048, 0, sizeof l_HEAD_1048);
l_HEAD_1048 = NULL;
R17 * l_TAIL_1049; memset(&l_TAIL_1049, 0, sizeof l_TAIL_1049);
l_TAIL_1049 = NULL;
for (;;) {
if ((l_F_1046 == NULL)) goto L_end1050;
{
if (((!(((*(R15 *)rt_nil_check(l_F_1046))).f_KIND == ((rt_int)0LL))) && (!(l_A_1047 == NULL))))
{
{
R17 * l_B_1051; memset(&l_B_1051, 0, sizeof l_B_1051);
l_B_1051 = ((R17 *)rt_alloc(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_B_1051)), (*(R17 *)rt_nil_check(l_A_1047)), 0);
((*(R17 *)rt_nil_check(l_B_1051))).f_NEXT = NULL;
if (r_TEQ(((*(R15 *)rt_nil_check(l_F_1046))).f_NAME, p_TAGN))
{
((*(R17 *)rt_nil_check(l_B_1051))).f_ANYARG = 0;
S_R12(&((*(R17 *)rt_nil_check(l_B_1051))).f_MLO, r_SOME(p_V), 0);
S_R7(&((*(R17 *)rt_nil_check(l_B_1051))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_1049 == NULL))
{
l_HEAD_1048 = l_B_1051;
}
else
{
((*(R17 *)rt_nil_check(l_TAIL_1049))).f_NEXT = l_B_1051;
}
l_TAIL_1049 = l_B_1051;
}
l_A_1047 = ((*(R17 *)rt_nil_check(l_A_1047))).f_NEXT;
}
l_F_1046 = ((*(R15 *)rt_nil_check(l_F_1046))).f_NEXT;
}
} L_end1050: ;
((*(R14 *)rt_nil_check(l_N_1045))).f_ARGS = l_HEAD_1048;
return l_N_1045;
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R11 * p_S) { 
R11 * l_ARM_1052; memset(&l_ARM_1052, 0, sizeof l_ARM_1052);
l_ARM_1052 = ((*(R11 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_1053; memset(&l_SAVED_1053, 0, sizeof l_SAVED_1053);
l_SAVED_1053 = ((*(R22 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_1052 == NULL)) goto L_end1054;
{
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(l_ARM_1052))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R22 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(l_ARM_1052))).f_B, ((*(R11 *)rt_nil_check(l_ARM_1052))).f_C);
((*(R22 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_1053;
return;
}
l_ARM_1052 = ((*(R11 *)rt_nil_check(l_ARM_1052))).f_NEXT;
}
} L_end1054: ;
if ((!(((*(R11 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R22 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R11 *)rt_nil_check(p_S))).f_C, ((*(R11 *)rt_nil_check(p_S))).f_D);
((*(R22 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_1053;
}
}
static R14 * r_PATHS_TYPE(void) { 
R14 * l_T_1055; memset(&l_T_1055, 0, sizeof l_T_1055);
l_T_1055 = r_NEW_TYP(g_T_PATHS);
S_R7(&((*(R14 *)rt_nil_check(l_T_1055))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
return l_T_1055;
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R11 * p_S) { 
R7 l_TD_1056; memset(&l_TD_1056, 0, sizeof l_TD_1056);
S_R7(&l_TD_1056, r_NEW_NAME(rt_str("td", 2)), 0);
R11 * l_P_1057; memset(&l_P_1057, 0, sizeof l_P_1057);
l_P_1057 = ((*(R11 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_1057 == NULL)) goto L_end1058;
{
{
R13 * l_Y_1059; memset(&l_Y_1059, 0, sizeof l_Y_1059);
l_Y_1059 = r_NEW_SYM(g_Y_PATH, ((*(R11 *)rt_nil_check(l_P_1057))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_1059))).f_T = r_PATHS_TYPE();
((*(R13 *)rt_nil_check(l_Y_1059))).f_DECL = l_P_1057;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_1059, rt_str("_path", 5))));
((*(R13 *)rt_nil_check(l_Y_1059))).f_INPUT = 1;
r_DEFINE(l_Y_1059, ((*(R11 *)rt_nil_check(l_P_1057))).f_LINE);
}
l_P_1057 = ((*(R11 *)rt_nil_check(l_P_1057))).f_NEXT;
}
} L_end1058: ;
r_CODE(r_FMT1(rt_str("rt_taskdecl @ = {0};", 20), l_TD_1056));
r_CODES(rt_str("rt_b_par_begin();", 17));
l_P_1057 = ((*(R11 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_P_1057 == NULL)) goto L_end1060;
{
r_ACTIVATE_PATH(l_P_1057, l_TD_1056);
l_P_1057 = ((*(R11 *)rt_nil_check(l_P_1057))).f_NEXT;
}
} L_end1060: ;
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_1056));
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_ACTIVATE_PATH(R11 * p_P, R7 p_TD) { 
R7 l_FN_1061; memset(&l_FN_1061, 0, sizeof l_FN_1061);
S_R7(&l_FN_1061, r_NEW_NAME(rt_str("path_", 5)), 0);
R7 l_FT_1062; memset(&l_FT_1062, 0, sizeof l_FT_1062);
S_R7(&l_FT_1062, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R13 * l_Y_1063; memset(&l_Y_1063, 0, sizeof l_Y_1063);
l_Y_1063 = r_LOOKUP(((*(R11 *)rt_nil_check(p_P))).f_NAME);
R7 l_H_1064; memset(&l_H_1064, 0, sizeof l_H_1064);
S_R7(&l_H_1064, r_OBJ_ACCESS(l_Y_1063), 0);
R7 l_IT_1065; memset(&l_IT_1065, 0, sizeof l_IT_1065);
S_R7(&l_IT_1065, r_NEW_NAME(rt_str("pi", 2)), 0);
R7 l_PRIO_1066; memset(&l_PRIO_1066, 0, sizeof l_PRIO_1066);
S_R7(&l_PRIO_1066, r_MK(rt_str("0", 1)), 0);
R7 l_START_1067; memset(&l_START_1067, 0, sizeof l_START_1067);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_1062, l_FT_1062));
if ((!(((*(R11 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R7(&l_PRIO_1066, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R11 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R11 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R11 * l_R_1068; memset(&l_R_1068, 0, sizeof l_R_1068);
l_R_1068 = ((*(R11 *)rt_nil_check(p_P))).f_A;
R7 l_LO_1069; memset(&l_LO_1069, 0, sizeof l_LO_1069);
S_R7(&l_LO_1069, r_INT_EXPR(((*(R11 *)rt_nil_check(l_R_1068))).f_A), 0);
R7 l_HI_1070; memset(&l_HI_1070, 0, sizeof l_HI_1070);
S_R7(&l_HI_1070, r_INT_EXPR(((*(R11 *)rt_nil_check(l_R_1068))).f_B), 0);
if (((((*(R11 *)rt_nil_check(l_R_1068))).f_IV == ((rt_int)1LL)) || (((*(R11 *)rt_nil_check(l_R_1068))).f_IV == ((rt_int)3LL))))
{
S_R7(&l_LO_1069, r_FMT1(rt_str("(@) + 1", 7), l_LO_1069), 0);
}
if ((((*(R11 *)rt_nil_check(l_R_1068))).f_IV >= ((rt_int)2LL)))
{
S_R7(&l_HI_1070, r_FMT1(rt_str("(@) - 1", 7), l_HI_1070), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_1064, l_LO_1069, l_HI_1070));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_1065, l_H_1064, l_IT_1065, l_H_1064), l_IT_1065));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_1065));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_1062, r_UP_FRAME()));
if ((((*(R11 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_NAME, l_IT_1065));
}
if ((!(((*(R11 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R18 l_V_1071; memset(&l_V_1071, 0, sizeof l_V_1071);
S_R18(&l_V_1071, r_EXPR(((*(R11 *)rt_nil_check(p_P))).f_D, NULL), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1071).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_1071).f_C));
}
}
S_R7(&l_START_1067, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_1064, l_IT_1065, l_FN_1061, p_TD), 0);
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_1067, p_TD, l_PRIO_1066));
r_PATH_BODY(p_P, l_FN_1061, l_FT_1062);
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
R8 l_SAVED_CODE_1072; memset(&l_SAVED_CODE_1072, 0, sizeof l_SAVED_CODE_1072);
S_R8(&l_SAVED_CODE_1072, ((*(R22 *)rt_nil_check(g_W))).f_CODE, 0);
R21 * l_SAVED_CTXS_1073; memset(&l_SAVED_CTXS_1073, 0, sizeof l_SAVED_CTXS_1073);
l_SAVED_CTXS_1073 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
R27 * l_OUTER_1074; memset(&l_OUTER_1074, 0, sizeof l_OUTER_1074);
l_OUTER_1074 = ((*(R22 *)rt_nil_check(g_W))).f_CS;
R11 * l_H_1075; memset(&l_H_1075, 0, sizeof l_H_1075);
l_H_1075 = ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_A;
R27 * l_CS_1076; memset(&l_CS_1076, 0, sizeof l_CS_1076);
l_CS_1076 = ((R27 *)rt_alloc(sizeof (R27)));
R7 l_UPT_1077; memset(&l_UPT_1077, 0, sizeof l_UPT_1077);
S_R7(&l_UPT_1077, r_MK(rt_str("void", 4)), 0);
if ((((*(R27 *)rt_nil_check(l_OUTER_1074))).f_LEVEL > ((rt_int)0LL)))
{
S_R7(&l_UPT_1077, ((*(R27 *)rt_nil_check(l_OUTER_1074))).f_FTYPE, 0);
}
S_R27(&(*(R27 *)rt_nil_check(l_CS_1076)), ({ R27 rc1078; memset(&rc1078, 0, sizeof rc1078);  rc1078.f_LEVEL = rt_add(((*(R27 *)rt_nil_check(l_OUTER_1074))).f_LEVEL, ((rt_int)1LL)); rc1078.f_R = NULL; rc1078.f_FRAMED = 1; S_R7(&rc1078.f_FTYPE, p_FT, 0); S_R8(&rc1078.f_FIELDS, ({ R8 rc1079; memset(&rc1079, 0, sizeof rc1079);  rc1079.f_HEAD = NULL; rc1079.f_TAIL = NULL; rc1079; }), 0); rc1078.f_UP = l_OUTER_1074; rc1078.f_IMPORTS = ((*(R11 *)rt_nil_check(l_H_1075))).f_B; rc1078.f_SIGNALS = ((*(R11 *)rt_nil_check(l_H_1075))).f_A; rc1078.f_RESULT = NULL; rc1078.f_IS_PATH = 1; rc1078; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_1077), &((*(R27 *)rt_nil_check(l_CS_1076))).f_FIELDS);
((*(R22 *)rt_nil_check(g_W))).f_CS = l_CS_1076;
S_R8(&((*(R22 *)rt_nil_check(g_W))).f_CODE, ({ R8 rc1080; memset(&rc1080, 0, sizeof rc1080);  rc1080.f_HEAD = NULL; rc1080.f_TAIL = NULL; rc1080; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R11 *)rt_nil_check(l_H_1075))).f_B, ((*(R11 *)rt_nil_check(l_H_1075))).f_A, ((*(R11 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R11 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R13 * l_I_1081; memset(&l_I_1081, 0, sizeof l_I_1081);
l_I_1081 = r_NEW_SYM(g_Y_CONST, ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R13 *)rt_nil_check(l_I_1081))).f_T = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
((*(R13 *)rt_nil_check(l_I_1081))).f_INPUT = 1;
S_R7(&((*(R13 *)rt_nil_check(l_I_1081))).f_FIELD, r_FMT1(rt_str("l_@", 3), ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_NAME), 0);
S_R7(&((*(R13 *)rt_nil_check(l_I_1081))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_NAME), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_P))).f_E))).f_NAME), &((*(R27 *)rt_nil_check(l_CS_1076))).f_FIELDS);
r_DEFINE(l_I_1081, ((*(R11 *)rt_nil_check(p_P))).f_LINE);
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
R11 * l_L_1082; memset(&l_L_1082, 0, sizeof l_L_1082);
l_L_1082 = ((*(R11 *)rt_nil_check(l_H_1075))).f_A;
R7 l_C_1083; memset(&l_C_1083, 0, sizeof l_C_1083);
S_R7(&l_C_1083, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_1082 == NULL)) goto L_end1084;
{
S_R7(&l_C_1083, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_1083, r_EXC_NAME(((*(R11 *)rt_nil_check(l_L_1082))).f_NAME)), 0);
l_L_1082 = ((*(R11 *)rt_nil_check(l_L_1082))).f_NEXT;
}
} L_end1084: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_1083));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R27 *)rt_nil_check(l_CS_1076))).f_FIELDS)));
((*(R22 *)rt_nil_check(g_W))).f_CS = l_OUTER_1074;
S_R8(&((*(R22 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1072, 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_1073;
}
static R7 r_JOIN_BUF(R8 p_B) { 
R9 * l_C_1085; memset(&l_C_1085, 0, sizeof l_C_1085);
l_C_1085 = (p_B).f_HEAD;
R7 l_R_1086; memset(&l_R_1086, 0, sizeof l_R_1086);
S_R7(&l_R_1086, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_1085 == NULL)) goto L_end1087;
{
S_R7(&l_R_1086, r_CAT(l_R_1086, ((*(R9 *)rt_nil_check(l_C_1085))).f_T), 0);
l_C_1085 = ((*(R9 *)rt_nil_check(l_C_1085))).f_NEXT;
}
} L_end1087: ;
return l_R_1086;
rt_raise(RT_X_INIT);
}
static R7 r_PATH_REF(R11 * p_E) { 
R7 l_NAME_1088; memset(&l_NAME_1088, 0, sizeof l_NAME_1088);
S_R7(&l_NAME_1088, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
R7 l_SUB_1089; memset(&l_SUB_1089, 0, sizeof l_SUB_1089);
S_R7(&l_SUB_1089, r_MK(rt_str("0", 1)), 0);
if ((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R11 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R7(&l_SUB_1089, r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R13 * l_Y_1090; memset(&l_Y_1090, 0, sizeof l_Y_1090);
l_Y_1090 = r_LOOKUP(l_NAME_1088);
if ((l_Y_1090 == NULL))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_1088);
}
if ((!(((*(R13 *)rt_nil_check(l_Y_1090))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_1088);
}
if (((((*(R11 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Y_1090))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
return r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_1090), l_SUB_1089);
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
R7 l_NAME_1091; memset(&l_NAME_1091, 0, sizeof l_NAME_1091);
S_R7(&l_NAME_1091, ((*(R11 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_1092; memset(&l_LINE_1092, 0, sizeof l_LINE_1092);
l_LINE_1092 = ((*(R11 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_1091, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R18 l_V_1093; memset(&l_V_1093, 0, sizeof l_V_1093);
S_R18(&l_V_1093, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1093).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_1092, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
return r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_1093).f_C, r_NUM(((*(R14 *)rt_nil_check((l_V_1093).f_T))).f_SCALE)), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
}
}
else if (r_TEQS(l_NAME_1091, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
return r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A)), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
}
return r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R11 *)rt_nil_check(p_E))).f_A)), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
}
else if (r_TEQS(l_NAME_1091, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R11 *)rt_nil_check(p_E))).f_A == NULL))
{
return r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
}
return r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R11 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
}
else if ((r_TEQS(l_NAME_1091, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_1091, rt_str("RELEASE", 7))))
{
if ((((!(((*(R11 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R11 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R11 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_1092, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_1091);
}
{
R18 l_V_1094; memset(&l_V_1094, 0, sizeof l_V_1094);
S_R18(&l_V_1094, r_EXPR(((*(R11 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE((l_V_1094).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_1092, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_1094).f_LVAL))
{
r_FAIL(l_LINE_1092, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_1091, rt_str("REQUEST", 7)))
{
return r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_1094).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
}
return r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_1094).f_C), ((*(R22 *)rt_nil_check(g_W))).f_TY_VOID);
}
}
else if (r_TEQS(l_NAME_1091, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_1092);
return r_START_IO_CALL(p_E);
}
r_FAILT(l_LINE_1092, rt_str("unknown routine ", 16), l_NAME_1091);
rt_raise(RT_X_INIT);
}
static R18 r_START_IO_CALL(R11 * p_E) { 
r_FAIL(((*(R11 *)rt_nil_check(p_E))).f_LINE, rt_str("this implementation has no devices for START_IO yet", 51));
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R11 * p_IMPORTS, R11 * p_SIGNALS, R7 p_NAME) { 
R28 * l_I_1095; memset(&l_I_1095, 0, sizeof l_I_1095);
l_I_1095 = ((R28 *)rt_alloc(sizeof (R28)));
((*(R22 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R22 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R28(&(*(R28 *)rt_nil_check(l_I_1095)), ({ R28 rc1096; memset(&rc1096, 0, sizeof rc1096);  rc1096.f_ID = ((*(R22 *)rt_nil_check(g_W))).f_NSCOPES; rc1096.f_IMPORTS = p_IMPORTS; rc1096.f_SIGNALS = p_SIGNALS; S_R7(&rc1096.f_NAME, p_NAME, 0); rc1096.f_UP = ((*(R22 *)rt_nil_check(g_W))).f_IS; rc1096; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_IS = l_I_1095;
}
static void r_LEAVE_ISCOPE(void) { 
((*(R22 *)rt_nil_check(g_W))).f_IS = ((*(R28 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R7 r_ROUTINE_CNAME(R7 p_NAME) { 
R7 l_BASE_1097; memset(&l_BASE_1097, 0, sizeof l_BASE_1097);
S_R7(&l_BASE_1097, r_FMT1(rt_str("r_@", 3), p_NAME), 0);
rstr l_S_1098; memset(&l_S_1098, 0, sizeof l_S_1098);
l_S_1098 = rt_str_new((l_BASE_1097).f_LEN);
rt_b_assign(&l_S_1098, r_STR(l_BASE_1097, (l_BASE_1097).f_LEN));
R11 * l_N_1099; memset(&l_N_1099, 0, sizeof l_N_1099);
l_N_1099 = ((*(R22 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it1101_lo = ((rt_int)0LL), it1101_hi = rt_sub((l_BASE_1097).f_LEN, ((rt_int)1LL));
for (rt_int it1101 = it1101_lo; it1101 <= it1101_hi; it1101++) {
{
if (rt_b_eq(rt_b_slice(l_S_1098, it1101, it1101), rt_str("$", 1)))
{
S_R7(&l_BASE_1097, r_MK(rt_str_cat(rt_str_cat(rt_b_slice(l_S_1098, ((rt_int)0LL), rt_sub(it1101, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_1098, rt_add(it1101, ((rt_int)1LL)), rt_sub((l_BASE_1097).f_LEN, ((rt_int)1LL))))), 0);
}
}
} } L_end1100: ;
for (;;) {
if ((l_N_1099 == NULL)) goto L_end1102;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_N_1099))).f_NAME, l_BASE_1097))
{
return r_FMT2(rt_str("@_@", 3), l_BASE_1097, r_NEW_NAME(rt_str("", 0)));
}
l_N_1099 = ((*(R11 *)rt_nil_check(l_N_1099))).f_NEXT;
}
} L_end1102: ;
l_N_1099 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R7(&((*(R11 *)rt_nil_check(l_N_1099))).f_NAME, l_BASE_1097, 0);
((*(R11 *)rt_nil_check(l_N_1099))).f_NEXT = ((*(R22 *)rt_nil_check(g_W))).f_CNAMES;
((*(R22 *)rt_nil_check(g_W))).f_CNAMES = l_N_1099;
return l_BASE_1097;
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
R11 * l_S_1103; memset(&l_S_1103, 0, sizeof l_S_1103);
l_S_1103 = p_S0;
for (;;) {
if ((l_S_1103 == NULL)) goto L_end1104;
{
if (((((*(R11 *)rt_nil_check(l_S_1103))).f_KIND == g_N_EXCEPT) || (((*(R11 *)rt_nil_check(l_S_1103))).f_KIND == g_N_PAR)))
{
return 1;
}
if (((((*(R11 *)rt_nil_check(l_S_1103))).f_KIND == g_N_LABELED) || (((*(R11 *)rt_nil_check(l_S_1103))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R11 *)rt_nil_check(l_S_1103))).f_A) || r_HAS_HANDLERS(((*(R11 *)rt_nil_check(l_S_1103))).f_B)))
{
return 1;
}
}
else if ((((*(R11 *)rt_nil_check(l_S_1103))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_S_1103))).f_A))).f_B))
{
return 1;
}
}
else if (((((*(R11 *)rt_nil_check(l_S_1103))).f_KIND == g_N_LOOP) || (((*(R11 *)rt_nil_check(l_S_1103))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_S_1103))).f_B))).f_B))
{
return 1;
}
}
else if (((((*(R11 *)rt_nil_check(l_S_1103))).f_KIND == g_N_IF) || (((*(R11 *)rt_nil_check(l_S_1103))).f_KIND == g_N_CASE)))
{
{
R11 * l_A_1105; memset(&l_A_1105, 0, sizeof l_A_1105);
l_A_1105 = ((*(R11 *)rt_nil_check(l_S_1103))).f_A;
if ((((*(R11 *)rt_nil_check(l_S_1103))).f_KIND == g_N_CASE))
{
l_A_1105 = ((*(R11 *)rt_nil_check(l_S_1103))).f_B;
if ((!(((*(R11 *)rt_nil_check(l_S_1103))).f_D == NULL)))
{
return 1;
}
if ((!(((*(R11 *)rt_nil_check(l_S_1103))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_S_1103))).f_C))).f_B))
{
return 1;
}
}
}
else if ((!(((*(R11 *)rt_nil_check(l_S_1103))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_S_1103))).f_B))).f_B))
{
return 1;
}
}
for (;;) {
if ((l_A_1105 == NULL)) goto L_end1106;
{
if ((!(((*(R11 *)rt_nil_check(l_A_1105))).f_C == NULL)))
{
return 1;
}
if (r_HAS_HANDLERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_A_1105))).f_B))).f_B))
{
return 1;
}
l_A_1105 = ((*(R11 *)rt_nil_check(l_A_1105))).f_NEXT;
}
} L_end1106: ;
}
}
l_S_1103 = ((*(R11 *)rt_nil_check(l_S_1103))).f_NEXT;
}
} L_end1104: ;
return 0;
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R11 * p_R) { 
R13 * l_Y_1107; memset(&l_Y_1107, 0, sizeof l_Y_1107);
l_Y_1107 = r_NEW_SYM(g_Y_ROUTINE, ((*(R11 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_1108; memset(&l_S_1108, 0, sizeof l_S_1108);
l_S_1108 = rt_str_new((((*(R11 *)rt_nil_check(p_R))).f_NAME).f_LEN);
rt_b_assign(&l_S_1108, r_STR(((*(R11 *)rt_nil_check(p_R))).f_NAME, (((*(R11 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R13 *)rt_nil_check(l_Y_1107))).f_DECL = p_R;
S_R7(&((*(R13 *)rt_nil_check(l_Y_1107))).f_ACCESS, r_ROUTINE_CNAME(((*(R11 *)rt_nil_check(p_R))).f_NAME), 0);
((*(R13 *)rt_nil_check(l_Y_1107))).f_FRAMED = r_NEEDS_FRAME(((*(R11 *)rt_nil_check(p_R))).f_C);
if ((((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R7(&((*(R13 *)rt_nil_check(l_Y_1107))).f_FIELD, ((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_1107, ((*(R11 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it1110_lo = ((rt_int)1LL), it1110_hi = rt_sub((((*(R11 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it1110 = it1110_lo; it1110 <= it1110_hi; it1110++) {
{
if (rt_b_eq(rt_b_slice(l_S_1108, it1110, it1110), rt_str("$", 1)))
{
S_R7(&((*(R13 *)rt_nil_check(l_Y_1107))).f_PREFIX, r_MKN(rt_b_slice(l_S_1108, ((rt_int)0LL), rt_sub(it1110, ((rt_int)1LL)))), 0);
{
R13 * l_SHORT_1111; memset(&l_SHORT_1111, 0, sizeof l_SHORT_1111);
l_SHORT_1111 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_1108, rt_add(it1110, ((rt_int)1LL)), rt_sub((((*(R11 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R13 *)rt_nil_check(l_SHORT_1111))).f_ORIG = l_Y_1107;
S_R7(&((*(R13 *)rt_nil_check(l_SHORT_1111))).f_PREFIX, ((*(R13 *)rt_nil_check(l_Y_1107))).f_PREFIX, 0);
((*(R13 *)rt_nil_check(l_SHORT_1111))).f_DECL = p_R;
r_DEFINE(l_SHORT_1111, ((*(R11 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end1109;
}
}
} } L_end1109: ;
}
static void r_DECLARE_MEMBERS(R11 * p_RS) { 
R11 * l_R_1112; memset(&l_R_1112, 0, sizeof l_R_1112);
l_R_1112 = p_RS;
for (;;) {
if ((l_R_1112 == NULL)) goto L_end1113;
{
if ((((*(R11 *)rt_nil_check(l_R_1112))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_1112);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_1112);
}
l_R_1112 = ((*(R11 *)rt_nil_check(l_R_1112))).f_NEXT;
}
} L_end1113: ;
}
static void r_ROUTINE_HEADERS(R11 * p_RS) { 
R11 * l_R_1114; memset(&l_R_1114, 0, sizeof l_R_1114);
l_R_1114 = p_RS;
for (;;) {
if ((l_R_1114 == NULL)) goto L_end1115;
{
if ((((*(R11 *)rt_nil_check(l_R_1114))).f_KIND == g_N_MODULE))
{
{
R13 * l_M_1116; memset(&l_M_1116, 0, sizeof l_M_1116);
l_M_1116 = r_FIND_DECL(l_R_1114);
r_ENTER_MODULE(l_M_1116);
r_ROUTINE_HEADERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_1114))).f_C))).f_C);
r_LEAVE_MODULE(l_M_1116);
}
}
else
{
{
R13 * l_Y_1117; memset(&l_Y_1117, 0, sizeof l_Y_1117);
l_Y_1117 = r_FIND_DECL(l_R_1114);
r_ROUTINE_HEADER(l_Y_1117);
}
}
l_R_1114 = ((*(R11 *)rt_nil_check(l_R_1114))).f_NEXT;
}
} L_end1115: ;
}
static R13 * r_FIND_DECL(R11 * p_D) { 
R13 * l_Y_1118; memset(&l_Y_1118, 0, sizeof l_Y_1118);
l_Y_1118 = r_LOOKUP(((*(R11 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_1118 == NULL)) goto L_end1119;
{
if (((((*(R13 *)rt_nil_check(l_Y_1118))).f_DECL == p_D) && (((*(R13 *)rt_nil_check(l_Y_1118))).f_ORIG == NULL)))
{
return l_Y_1118;
}
l_Y_1118 = r_LOOKUP_NEXT(l_Y_1118);
}
} L_end1119: ;
r_FAILT(((*(R11 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R11 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R11 * p_DECLS) { 
R11 * l_D_1120; memset(&l_D_1120, 0, sizeof l_D_1120);
l_D_1120 = p_DECLS;
for (;;) {
if ((l_D_1120 == NULL)) goto L_end1121;
{
if (((((*(R11 *)rt_nil_check(l_D_1120))).f_KIND == g_N_TYPE) && (((*(R11 *)rt_nil_check(l_D_1120))).f_A == NULL)))
{
if ((((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_D_1120))).f_B))).f_KIND == g_TS_ENUM))
{
{
R13 * l_Y_1122; memset(&l_Y_1122, 0, sizeof l_Y_1122);
l_Y_1122 = r_FIND_DECL(l_D_1120);
R14 * l_T_1123; memset(&l_T_1123, 0, sizeof l_T_1123);
l_T_1123 = r_RESOLVE_USER(r_TYPE_REF(l_D_1120));
}
}
}
l_D_1120 = ((*(R11 *)rt_nil_check(l_D_1120))).f_NEXT;
}
} L_end1121: ;
}
static R11 * r_TYPE_REF(R11 * p_D) { 
R11 * l_TS_1124; memset(&l_TS_1124, 0, sizeof l_TS_1124);
l_TS_1124 = r_NEW_NODE(g_TS_NAME, ((*(R11 *)rt_nil_check(p_D))).f_LINE);
S_R7(&((*(R11 *)rt_nil_check(l_TS_1124))).f_NAME, ((*(R11 *)rt_nil_check(p_D))).f_NAME, 0);
return l_TS_1124;
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R11 * p_M) { 
R13 * l_Y_1125; memset(&l_Y_1125, 0, sizeof l_Y_1125);
l_Y_1125 = r_NEW_SYM(g_Y_MODULE, ((*(R11 *)rt_nil_check(p_M))).f_NAME);
R13 * l_SAVED_1126; memset(&l_SAVED_1126, 0, sizeof l_SAVED_1126);
l_SAVED_1126 = ((*(R22 *)rt_nil_check(g_W))).f_MODL;
((*(R13 *)rt_nil_check(l_Y_1125))).f_DECL = p_M;
r_DEFINE(l_Y_1125, ((*(R11 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R11 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R13 * l_MARK_1127; memset(&l_MARK_1127, 0, sizeof l_MARK_1127);
l_MARK_1127 = ((*(R22 *)rt_nil_check(g_W))).f_SCOPE;
((*(R22 *)rt_nil_check(g_W))).f_MODL = l_Y_1125;
r_DECLARE_TYPES(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R13 *)rt_nil_check(l_Y_1125))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_1127);
}
((*(R22 *)rt_nil_check(g_W))).f_MODL = l_SAVED_1126;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_1125);
}
static void r_ENTER_MODULE(R13 * p_M) { 
R13 * l_Y_1128; memset(&l_Y_1128, 0, sizeof l_Y_1128);
l_Y_1128 = ((*(R13 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_1128 == NULL)) goto L_end1129;
{
{
R13 * l_NEXT_1130; memset(&l_NEXT_1130, 0, sizeof l_NEXT_1130);
l_NEXT_1130 = ((*(R13 *)rt_nil_check(l_Y_1128))).f_SNEXT;
r_DEFINE(l_Y_1128, ((rt_int)0LL));
l_Y_1128 = l_NEXT_1130;
}
}
} L_end1129: ;
((*(R13 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R13 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R13 *)rt_nil_check(((*(R22 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R13 *)rt_nil_check(p_M))).f_SAVED = ((*(R22 *)rt_nil_check(g_W))).f_MODL;
((*(R22 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R11 *)rt_nil_check(((*(R13 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R13 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R13 * p_M) { 
R13 * l_MARK_1131; memset(&l_MARK_1131, 0, sizeof l_MARK_1131);
l_MARK_1131 = ((*(R22 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R22 *)rt_nil_check(g_W))).f_MODL = ((*(R13 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_1131 == NULL)) goto L_end1132;
{
if ((((*(R13 *)rt_nil_check(l_MARK_1131))).f_DEPTH < ((*(R22 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end1132;
}
l_MARK_1131 = ((*(R13 *)rt_nil_check(l_MARK_1131))).f_SNEXT;
}
} L_end1132: ;
((*(R13 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_1131);
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
R11 * l_D_1133; memset(&l_D_1133, 0, sizeof l_D_1133);
l_D_1133 = ((*(R13 *)rt_nil_check(p_M))).f_DECL;
R13 * l_Y_1134; memset(&l_Y_1134, 0, sizeof l_Y_1134);
l_Y_1134 = ((*(R13 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_1134 == NULL)) goto L_end1135;
{
if (r_EXPORTED_BY(l_D_1133, l_Y_1134))
{
((*(R13 *)rt_nil_check(l_Y_1134))).f_EXPORTED = 1;
{
R13 * l_A_1136; memset(&l_A_1136, 0, sizeof l_A_1136);
l_A_1136 = r_NEW_SYM(((*(R13 *)rt_nil_check(l_Y_1134))).f_KIND, ((*(R13 *)rt_nil_check(l_Y_1134))).f_NAME);
S_R13(&(*(R13 *)rt_nil_check(l_A_1136)), (*(R13 *)rt_nil_check(l_Y_1134)), 0);
((*(R13 *)rt_nil_check(l_A_1136))).f_ORIG = r_ORIGINAL(l_Y_1134);
((*(R13 *)rt_nil_check(l_A_1136))).f_DEPTH = ((*(R22 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_1136, ((*(R11 *)rt_nil_check(l_D_1133))).f_LINE);
}
}
l_Y_1134 = ((*(R13 *)rt_nil_check(l_Y_1134))).f_SNEXT;
}
} L_end1135: ;
{
R11 * l_X_1137; memset(&l_X_1137, 0, sizeof l_X_1137);
l_X_1137 = ((*(R11 *)rt_nil_check(l_D_1133))).f_B;
for (;;) {
if ((l_X_1137 == NULL)) goto L_end1138;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R11 *)rt_nil_check(l_X_1137))).f_NAME)))
{
r_FAILT(((*(R11 *)rt_nil_check(l_X_1137))).f_LINE, rt_str("the module does not declare ", 28), ((*(R11 *)rt_nil_check(l_X_1137))).f_NAME);
}
l_X_1137 = ((*(R11 *)rt_nil_check(l_X_1137))).f_NEXT;
}
} L_end1138: ;
}
}
static rt_int r_MEMBER_NAMED(R13 * p_M, R7 p_NAME) { 
R13 * l_Y_1139; memset(&l_Y_1139, 0, sizeof l_Y_1139);
l_Y_1139 = ((*(R13 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_1139 == NULL)) goto L_end1140;
{
if ((r_TEQ(((*(R13 *)rt_nil_check(l_Y_1139))).f_NAME, p_NAME) || r_TEQ(((*(R13 *)rt_nil_check(l_Y_1139))).f_PREFIX, p_NAME)))
{
return 1;
}
l_Y_1139 = ((*(R13 *)rt_nil_check(l_Y_1139))).f_SNEXT;
}
} L_end1140: ;
return 0;
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R11 * p_D, R13 * p_Y) { 
R11 * l_X_1141; memset(&l_X_1141, 0, sizeof l_X_1141);
l_X_1141 = ((*(R11 *)rt_nil_check(p_D))).f_B;
if ((((((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
return 0;
}
if ((((*(R11 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
return ((((((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
}
for (;;) {
if ((l_X_1141 == NULL)) goto L_end1142;
{
if (r_TEQ(((*(R11 *)rt_nil_check(l_X_1141))).f_NAME, ((*(R13 *)rt_nil_check(p_Y))).f_NAME))
{
return 1;
}
if (((((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R11 *)rt_nil_check(l_X_1141))).f_NAME, ((*(R13 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R11 *)rt_nil_check(l_X_1141))).f_A == NULL))
{
return 1;
}
if (r_IN_IDENTS(((*(R11 *)rt_nil_check(l_X_1141))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
return 1;
}
}
if ((((*(R13 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R13 * l_T_1143; memset(&l_T_1143, 0, sizeof l_T_1143);
l_T_1143 = r_ORIG_LOOKUP_MEMBER(((*(R11 *)rt_nil_check(l_X_1141))).f_NAME, p_Y);
if ((!(l_T_1143 == NULL)))
{
return 1;
}
}
}
l_X_1141 = ((*(R11 *)rt_nil_check(l_X_1141))).f_NEXT;
}
} L_end1142: ;
return 0;
rt_raise(RT_X_INIT);
}
static R13 * r_ORIG_LOOKUP_MEMBER(R7 p_NAME, R13 * p_Y) { 
R13 * l_M_1144; memset(&l_M_1144, 0, sizeof l_M_1144);
l_M_1144 = ((*(R13 *)rt_nil_check(p_Y))).f_MODL;
R13 * l_Z_1145; memset(&l_Z_1145, 0, sizeof l_Z_1145);
if ((l_M_1144 == NULL))
{
return NULL;
}
l_Z_1145 = ((*(R13 *)rt_nil_check(l_M_1144))).f_MEMBERS;
for (;;) {
if ((l_Z_1145 == NULL)) goto L_end1146;
{
if (((((*(R13 *)rt_nil_check(l_Z_1145))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R13 *)rt_nil_check(l_Z_1145))).f_NAME, p_NAME)))
{
if ((!(((*(R13 *)rt_nil_check(l_Z_1145))).f_T == NULL)))
{
if ((((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Z_1145))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(l_Z_1145))).f_T))).f_BASE == ((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
return l_Z_1145;
}
}
}
}
l_Z_1145 = ((*(R13 *)rt_nil_check(l_Z_1145))).f_SNEXT;
}
} L_end1146: ;
return NULL;
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R11 * p_RS) { 
R11 * l_R_1147; memset(&l_R_1147, 0, sizeof l_R_1147);
l_R_1147 = p_RS;
for (;;) {
if ((l_R_1147 == NULL)) goto L_end1148;
{
if ((((*(R11 *)rt_nil_check(l_R_1147))).f_KIND == g_N_MODULE))
{
{
R13 * l_M_1149; memset(&l_M_1149, 0, sizeof l_M_1149);
l_M_1149 = r_FIND_DECL(l_R_1147);
R11 * l_D_1150; memset(&l_D_1150, 0, sizeof l_D_1150);
l_D_1150 = ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_1147))).f_C))).f_A;
r_ENTER_MODULE(l_M_1149);
for (;;) {
if ((l_D_1150 == NULL)) goto L_end1151;
{
if (((((*(R11 *)rt_nil_check(l_D_1150))).f_KIND == g_N_VAR) || (((*(R11 *)rt_nil_check(l_D_1150))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_1150);
}
l_D_1150 = ((*(R11 *)rt_nil_check(l_D_1150))).f_NEXT;
}
} L_end1151: ;
r_MODULE_DATA(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_1147))).f_C))).f_C);
r_ROUTINE_USES(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_1147))).f_C))).f_C);
r_LEAVE_MODULE(l_M_1149);
}
}
l_R_1147 = ((*(R11 *)rt_nil_check(l_R_1147))).f_NEXT;
}
} L_end1148: ;
}
static void r_ROUTINE_BODIES(R11 * p_RS) { 
R11 * l_R_1152; memset(&l_R_1152, 0, sizeof l_R_1152);
l_R_1152 = p_RS;
for (;;) {
if ((l_R_1152 == NULL)) goto L_end1153;
{
if ((((*(R11 *)rt_nil_check(l_R_1152))).f_KIND == g_N_MODULE))
{
{
R13 * l_M_1154; memset(&l_M_1154, 0, sizeof l_M_1154);
l_M_1154 = r_FIND_DECL(l_R_1152);
r_ENTER_MODULE(l_M_1154);
r_ROUTINE_BODIES(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_1152))).f_C))).f_C);
r_LEAVE_MODULE(l_M_1154);
}
}
else
{
{
R13 * l_Y_1155; memset(&l_Y_1155, 0, sizeof l_Y_1155);
l_Y_1155 = r_FIND_DECL(l_R_1152);
if ((!((*(R13 *)rt_nil_check(l_Y_1155))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_1155);
}
}
}
l_R_1152 = ((*(R11 *)rt_nil_check(l_R_1152))).f_NEXT;
}
} L_end1153: ;
}
static void r_PENDING_BODIES(void) { 
rt_int l_LEVEL_1156; memset(&l_LEVEL_1156, 0, sizeof l_LEVEL_1156);
l_LEVEL_1156 = r_CUR_LEVEL();
rt_int l_MORE_1157; memset(&l_MORE_1157, 0, sizeof l_MORE_1157);
l_MORE_1157 = 1;
for (;;) {
if ((!l_MORE_1157)) goto L_end1158;
{
l_MORE_1157 = 0;
{
R13 * l_P_1159; memset(&l_P_1159, 0, sizeof l_P_1159);
l_P_1159 = ((*(R22 *)rt_nil_check(g_W))).f_PENDING;
R13 * l_PREV_1160; memset(&l_PREV_1160, 0, sizeof l_PREV_1160);
l_PREV_1160 = NULL;
for (;;) {
if ((l_P_1159 == NULL)) goto L_end1161;
{
if ((((*(R13 *)rt_nil_check(l_P_1159))).f_LEVEL == l_LEVEL_1156))
{
if ((l_PREV_1160 == NULL))
{
((*(R22 *)rt_nil_check(g_W))).f_PENDING = ((*(R13 *)rt_nil_check(l_P_1159))).f_MEMBERS;
}
else
{
((*(R13 *)rt_nil_check(l_PREV_1160))).f_MEMBERS = ((*(R13 *)rt_nil_check(l_P_1159))).f_MEMBERS;
}
r_ENTER_MODULE_OF(l_P_1159);
r_ROUTINE_BODY(l_P_1159);
r_LEAVE_MODULE_OF(l_P_1159);
l_MORE_1157 = 1;
goto L_end1161;
}
l_PREV_1160 = l_P_1159;
l_P_1159 = ((*(R13 *)rt_nil_check(l_P_1159))).f_MEMBERS;
}
} L_end1161: ;
}
}
} L_end1158: ;
}
static void r_CLOSED_BODY(R11 * p_B) { 
R11 * l_D_1162; memset(&l_D_1162, 0, sizeof l_D_1162);
l_D_1162 = ((*(R11 *)rt_nil_check(p_B))).f_A;
R11 * l_S_1163; memset(&l_S_1163, 0, sizeof l_S_1163);
l_S_1163 = ((*(R11 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R11 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R11 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R11 *)rt_nil_check(p_B))).f_A);
r_ROUTINE_HEADERS(((*(R11 *)rt_nil_check(p_B))).f_C);
for (;;) {
if ((l_D_1162 == NULL)) goto L_end1164;
{
if (((((*(R11 *)rt_nil_check(l_D_1162))).f_KIND == g_N_VAR) || (((*(R11 *)rt_nil_check(l_D_1162))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_1162);
}
l_D_1162 = ((*(R11 *)rt_nil_check(l_D_1162))).f_NEXT;
}
} L_end1164: ;
r_MODULE_DATA(((*(R11 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R11 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R11 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_1163 == NULL)) goto L_end1165;
{
r_STMT(l_S_1163);
l_S_1163 = ((*(R11 *)rt_nil_check(l_S_1163))).f_NEXT;
}
} L_end1165: ;
r_ROUTINE_BODIES(((*(R11 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R13 * p_Y) { 
R11 * l_R_1166; memset(&l_R_1166, 0, sizeof l_R_1166);
l_R_1166 = ((*(R13 *)rt_nil_check(p_Y))).f_DECL;
R8 l_SAVED_CODE_1167; memset(&l_SAVED_CODE_1167, 0, sizeof l_SAVED_CODE_1167);
S_R8(&l_SAVED_CODE_1167, ((*(R22 *)rt_nil_check(g_W))).f_CODE, 0);
R21 * l_SAVED_CTXS_1168; memset(&l_SAVED_CTXS_1168, 0, sizeof l_SAVED_CTXS_1168);
l_SAVED_CTXS_1168 = ((*(R22 *)rt_nil_check(g_W))).f_CTXS;
R16 * l_SAVED_BINDS_1169; memset(&l_SAVED_BINDS_1169, 0, sizeof l_SAVED_BINDS_1169);
l_SAVED_BINDS_1169 = ((*(R22 *)rt_nil_check(g_W))).f_BINDS;
R27 * l_OUTER_1170; memset(&l_OUTER_1170, 0, sizeof l_OUTER_1170);
l_OUTER_1170 = ((*(R22 *)rt_nil_check(g_W))).f_CS;
R27 * l_CS_1171; memset(&l_CS_1171, 0, sizeof l_CS_1171);
l_CS_1171 = ((R27 *)rt_alloc(sizeof (R27)));
R7 l_PROLOGUE_1172; memset(&l_PROLOGUE_1172, 0, sizeof l_PROLOGUE_1172);
S_R7(&l_PROLOGUE_1172, r_MK(rt_str("", 0)), 0);
S_R27(&(*(R27 *)rt_nil_check(l_CS_1171)), ({ R27 rc1173; memset(&rc1173, 0, sizeof rc1173);  rc1173.f_LEVEL = rt_add(((*(R13 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc1173.f_R = p_Y; rc1173.f_FRAMED = ((*(R13 *)rt_nil_check(p_Y))).f_FRAMED; S_R7(&rc1173.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R13 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R8(&rc1173.f_FIELDS, ({ R8 rc1174; memset(&rc1174, 0, sizeof rc1174);  rc1174.f_HEAD = NULL; rc1174.f_TAIL = NULL; rc1174; }), 0); rc1173.f_UP = l_OUTER_1170; rc1173.f_IMPORTS = ((*(R11 *)rt_nil_check(l_R_1166))).f_E; rc1173.f_SIGNALS = ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_1166))).f_D))).f_A; rc1173.f_RESULT = ((*(R13 *)rt_nil_check(p_Y))).f_RESULT; rc1173.f_IS_PATH = 0; rc1173; }), 0);
if (((*(R13 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R27 *)rt_nil_check(l_CS_1171))).f_FTYPE, ((*(R27 *)rt_nil_check(l_CS_1171))).f_FTYPE));
if ((((*(R13 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R13 *)rt_nil_check(p_Y))).f_FIELD), &((*(R27 *)rt_nil_check(l_CS_1171))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R27 *)rt_nil_check(l_CS_1171))).f_FIELDS);
}
S_R7(&l_PROLOGUE_1172, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R27 *)rt_nil_check(l_CS_1171))).f_FTYPE, ((*(R27 *)rt_nil_check(l_CS_1171))).f_FTYPE), 0);
if ((((*(R13 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R7(&l_PROLOGUE_1172, r_CATS(l_PROLOGUE_1172, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R22 *)rt_nil_check(g_W))).f_CS = l_CS_1171;
S_R8(&((*(R22 *)rt_nil_check(g_W))).f_CODE, ({ R8 rc1175; memset(&rc1175, 0, sizeof rc1175);  rc1175.f_HEAD = NULL; rc1175.f_TAIL = NULL; rc1175; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R22 *)rt_nil_check(g_W))).f_BINDS = ((*(R13 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R11 *)rt_nil_check(l_R_1166))).f_E, ((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_R_1166))).f_D))).f_A, ((*(R13 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R13 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R11 *)rt_nil_check(l_R_1166))).f_LINE);
{
R20 * l_P_1176; memset(&l_P_1176, 0, sizeof l_P_1176);
l_P_1176 = ((*(R13 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_1176 == NULL)) goto L_end1177;
{
if ((!(((*(R20 *)rt_nil_check(l_P_1176))).f_T == NULL)))
{
if ((!(((*(R14 *)rt_nil_check(r_REAL_TYPE(((*(R20 *)rt_nil_check(l_P_1176))).f_T)))).f_KIND == g_T_VOID)))
{
{
R13 * l_V_1178; memset(&l_V_1178, 0, sizeof l_V_1178);
l_V_1178 = r_NEW_SYM(g_Y_VAR, ((*(R20 *)rt_nil_check(l_P_1176))).f_NAME);
((*(R13 *)rt_nil_check(l_V_1178))).f_T = ((*(R20 *)rt_nil_check(l_P_1176))).f_T;
((*(R13 *)rt_nil_check(l_V_1178))).f_INPUT = (((*(R20 *)rt_nil_check(l_P_1176))).f_MODE == g_M_IN);
((*(R13 *)rt_nil_check(l_V_1178))).f_BYREF = (!(((*(R20 *)rt_nil_check(l_P_1176))).f_MODE == g_M_IN));
S_R7(&((*(R13 *)rt_nil_check(l_V_1178))).f_FIELD, r_FMT1(rt_str("p_@", 3), ((*(R20 *)rt_nil_check(l_P_1176))).f_NAME), 0);
if (((*(R13 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R13 *)rt_nil_check(l_V_1178))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R20 *)rt_nil_check(l_P_1176))).f_T), ((*(R20 *)rt_nil_check(l_P_1176))).f_NAME), &((*(R27 *)rt_nil_check(l_CS_1171))).f_FIELDS);
S_R7(&((*(R13 *)rt_nil_check(l_V_1178))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), ((*(R20 *)rt_nil_check(l_P_1176))).f_NAME), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R20 *)rt_nil_check(l_P_1176))).f_T), ((*(R20 *)rt_nil_check(l_P_1176))).f_NAME), &((*(R27 *)rt_nil_check(l_CS_1171))).f_FIELDS);
S_R7(&((*(R13 *)rt_nil_check(l_V_1178))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), ((*(R20 *)rt_nil_check(l_P_1176))).f_NAME), 0);
}
S_R7(&l_PROLOGUE_1172, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_1172, ((*(R20 *)rt_nil_check(l_P_1176))).f_NAME, ((*(R20 *)rt_nil_check(l_P_1176))).f_NAME), 0);
}
else if (((*(R13 *)rt_nil_check(l_V_1178))).f_BYREF)
{
S_R7(&((*(R13 *)rt_nil_check(l_V_1178))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), ((*(R20 *)rt_nil_check(l_P_1176))).f_NAME), 0);
}
else
{
S_R7(&((*(R13 *)rt_nil_check(l_V_1178))).f_ACCESS, r_FMT1(rt_str("p_@", 3), ((*(R20 *)rt_nil_check(l_P_1176))).f_NAME), 0);
}
r_DEFINE(l_V_1178, ((*(R11 *)rt_nil_check(l_R_1166))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R20 *)rt_nil_check(l_P_1176))).f_T, ((*(R13 *)rt_nil_check(l_V_1178))).f_ACCESS, ((*(R11 *)rt_nil_check(l_R_1166))).f_LINE, 1);
}
}
}
l_P_1176 = ((*(R20 *)rt_nil_check(l_P_1176))).f_NEXT;
}
} L_end1177: ;
}
if ((((*(R11 *)rt_nil_check(l_R_1166))).f_FL >= ((rt_int)2LL)))
{
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R11 *)rt_nil_check(l_R_1166))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R11 *)rt_nil_check(l_R_1166))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R13 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R27 *)rt_nil_check(l_CS_1171))).f_FTYPE, r_JOIN_BUF(((*(R27 *)rt_nil_check(l_CS_1171))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { @", 5), ((*(R13 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_1172));
r_APPEND_BUF(((*(R22 *)rt_nil_check(g_W))).f_CODE, &(((*(R22 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R22 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R14 *)rt_nil_check(((*(R13 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R22 *)rt_nil_check(g_W))).f_CS = l_OUTER_1170;
S_R8(&((*(R22 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1167, 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_1168;
((*(R22 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_1169;
}
static void r_BIND_INSTANCE(R16 * p_BS, rt_int p_LINE) { 
R16 * l_B_1179; memset(&l_B_1179, 0, sizeof l_B_1179);
l_B_1179 = p_BS;
for (;;) {
if ((l_B_1179 == NULL)) goto L_end1180;
{
if ((!(((*(R16 *)rt_nil_check(l_B_1179))).f_T == NULL)))
{
{
R13 * l_Y_1181; memset(&l_Y_1181, 0, sizeof l_Y_1181);
l_Y_1181 = r_NEW_SYM(g_Y_TYPE, ((*(R16 *)rt_nil_check(l_B_1179))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_1181))).f_T = ((*(R16 *)rt_nil_check(l_B_1179))).f_T;
r_DEFINE(l_Y_1181, p_LINE);
}
}
else if (((*(R16 *)rt_nil_check(l_B_1179))).f_HASMV)
{
{
R13 * l_Y_1182; memset(&l_Y_1182, 0, sizeof l_Y_1182);
l_Y_1182 = r_NEW_SYM(g_Y_GEN, ((*(R16 *)rt_nil_check(l_B_1179))).f_NAME);
((*(R13 *)rt_nil_check(l_Y_1182))).f_T = ((*(R22 *)rt_nil_check(g_W))).f_TY_INT;
((*(R13 *)rt_nil_check(l_Y_1182))).f_HASMV = 1;
((*(R13 *)rt_nil_check(l_Y_1182))).f_MV = ((*(R16 *)rt_nil_check(l_B_1179))).f_MV;
S_R7(&((*(R13 *)rt_nil_check(l_Y_1182))).f_ACCESS, ((*(R16 *)rt_nil_check(l_B_1179))).f_C, 0);
((*(R13 *)rt_nil_check(l_Y_1182))).f_INPUT = 1;
r_DEFINE(l_Y_1182, p_LINE);
}
}
l_B_1179 = ((*(R16 *)rt_nil_check(l_B_1179))).f_NEXT;
}
} L_end1180: ;
}
static void r_APPEND_BUF(R8 p_SRC, R8 *p_DST) { 
R9 * l_C_1183; memset(&l_C_1183, 0, sizeof l_C_1183);
l_C_1183 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_1183 == NULL)) goto L_end1184;
{
r_APPEND(((*(R9 *)rt_nil_check(l_C_1183))).f_T, &(*p_DST));
l_C_1183 = ((*(R9 *)rt_nil_check(l_C_1183))).f_NEXT;
}
} L_end1184: ;
}
static rt_int r_USES_SEGMENT(R11 * p_S, rstr p_NAME) { 
R11 * l_U_1185; memset(&l_U_1185, 0, sizeof l_U_1185);
l_U_1185 = ((*(R11 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_1185 == NULL)) goto L_end1186;
{
if (r_TEQS(((*(R11 *)rt_nil_check(l_U_1185))).f_NAME, p_NAME))
{
return 1;
}
l_U_1185 = ((*(R11 *)rt_nil_check(l_U_1185))).f_NEXT;
}
} L_end1186: ;
return 0;
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R11 * p_SEGS) { 
R11 * l_S_1187; memset(&l_S_1187, 0, sizeof l_S_1187);
l_S_1187 = p_SEGS;
rt_int l_MAINS_1188; memset(&l_MAINS_1188, 0, sizeof l_MAINS_1188);
l_MAINS_1188 = ((rt_int)0LL);
R27 * l_ROOT_1189; memset(&l_ROOT_1189, 0, sizeof l_ROOT_1189);
l_ROOT_1189 = ((R27 *)rt_alloc(sizeof (R27)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R27(&(*(R27 *)rt_nil_check(l_ROOT_1189)), ({ R27 rc1190; memset(&rc1190, 0, sizeof rc1190);  rc1190.f_LEVEL = ((rt_int)0LL); rc1190.f_R = NULL; rc1190.f_FRAMED = 0; S_R7(&rc1190.f_FTYPE, r_NO_TEXT(), 0); S_R8(&rc1190.f_FIELDS, ({ R8 rc1191; memset(&rc1191, 0, sizeof rc1191);  rc1191.f_HEAD = NULL; rc1191.f_TAIL = NULL; rc1191; }), 0); rc1190.f_UP = NULL; rc1190.f_IMPORTS = NULL; rc1190.f_SIGNALS = NULL; rc1190.f_RESULT = NULL; rc1190.f_IS_PATH = 0; rc1190; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_CS = l_ROOT_1189;
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
S_R8(&((*(R22 *)rt_nil_check(g_W))).f_CODE, ({ R8 rc1192; memset(&rc1192, 0, sizeof rc1192);  rc1192.f_HEAD = NULL; rc1192.f_TAIL = NULL; rc1192; }), 0);
((*(R22 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
if ((l_S_1187 == NULL)) goto L_end1193;
{
l_MAINS_1188 = rt_add(l_MAINS_1188, ((*(R11 *)rt_nil_check(l_S_1187))).f_IV);
if (((((*(R11 *)rt_nil_check(l_S_1187))).f_IV == ((rt_int)0LL)) && (!(((*(R11 *)rt_nil_check(((*(R11 *)rt_nil_check(l_S_1187))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R11 *)rt_nil_check(l_S_1187))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
if (r_USES_SEGMENT(l_S_1187, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
r_CLOSED_BODY(((*(R11 *)rt_nil_check(l_S_1187))).f_B);
r_SEGMENT_EXPORTS(l_S_1187);
l_S_1187 = ((*(R11 *)rt_nil_check(l_S_1187))).f_NEXT;
}
} L_end1193: ;
if ((!(l_MAINS_1188 == ((rt_int)1LL))))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R11 * l_X_1194; memset(&l_X_1194, 0, sizeof l_X_1194);
l_X_1194 = ((*(R22 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_1194 == NULL)) goto L_end1195;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), ((*(R11 *)rt_nil_check(l_X_1194))).f_NAME));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), ((*(R11 *)rt_nil_check(l_X_1194))).f_NAME, r_CSTRING(((*(R11 *)rt_nil_check(l_X_1194))).f_NAME)));
l_X_1194 = ((*(R11 *)rt_nil_check(l_X_1194))).f_NEXT;
}
} L_end1195: ;
}
r_APPEND_BUF(((*(R22 *)rt_nil_check(g_W))).f_CODE, &(((*(R22 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R22 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R22 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static void r_SEGMENT_EXPORTS(R11 * p_S) { 
R13 * l_MARK_1196; memset(&l_MARK_1196, 0, sizeof l_MARK_1196);
l_MARK_1196 = ((*(R22 *)rt_nil_check(g_W))).f_SCOPE;
R13 * l_TAKEN_1197; memset(&l_TAKEN_1197, 0, sizeof l_TAKEN_1197);
for (;;) {
if ((l_MARK_1196 == NULL)) goto L_end1198;
{
if ((((*(R13 *)rt_nil_check(l_MARK_1196))).f_DEPTH < ((*(R22 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end1198;
}
l_MARK_1196 = ((*(R13 *)rt_nil_check(l_MARK_1196))).f_SNEXT;
}
} L_end1198: ;
l_TAKEN_1197 = r_TAKE_SCOPE(l_MARK_1196);
((*(R22 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R22 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((l_TAKEN_1197 == NULL)) goto L_end1199;
{
{
R13 * l_NEXT_1200; memset(&l_NEXT_1200, 0, sizeof l_NEXT_1200);
l_NEXT_1200 = ((*(R13 *)rt_nil_check(l_TAKEN_1197))).f_SNEXT;
if (((((((*(R11 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R11 *)rt_nil_check(p_S))).f_C, ((*(R13 *)rt_nil_check(l_TAKEN_1197))).f_NAME)) || r_IN_IDENTS(((*(R11 *)rt_nil_check(p_S))).f_C, ((*(R13 *)rt_nil_check(l_TAKEN_1197))).f_PREFIX)) || (((*(R13 *)rt_nil_check(l_TAKEN_1197))).f_KIND == g_Y_ENUMLIT)))
{
r_DEFINE(l_TAKEN_1197, ((*(R11 *)rt_nil_check(p_S))).f_LINE);
}
l_TAKEN_1197 = l_NEXT_1200;
}
}
} L_end1199: ;
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
