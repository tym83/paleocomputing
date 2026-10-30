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
struct R9 { int dummy_; rt_int f_AT; rt_int f_LEN; rt_int f_H; };
struct R10 { int dummy_; rt_int f_KIND; rt_int f_LINE; rt_int f_IV; R9 f_TX; };
struct A11 { rt_int lo[1], hi[1]; R10 *p; };
struct A13 { rt_int lo[1], hi[1]; R12 * *p; };
struct R14 { int dummy_; R15 * f_HEAD; R15 * f_TAIL; };
struct A16 { rt_int lo[1], hi[1]; R14 *p; };
struct R7 { int dummy_; rstr f_ARENA; rt_int f_TOP; A8 f_SRC; rt_int f_NSRC; rt_int f_LEXED; rt_int f_LEXLINE; R9 f_LIBDIR; R17 * f_LIBSEGS; rt_int f_SUPPRESS; rt_int f_WORD; A11 f_TOKS; rt_int f_NTOKS; rt_int f_POS; A13 f_TABLE; R12 * f_SCOPE; rt_int f_DEPTH; A16 f_OUT; R14 f_CODE; R18 * f_CTXS; R19 * f_CS; R20 * f_IS; rt_int f_NSCOPES; R12 * f_MODL; R21 * f_BINDS; rt_int f_ROUNDED; R17 * f_QUAL; R17 * f_SQUAL; rt_int f_TYPECHECK; rt_int f_CHARSETS; rt_int f_IN_RECORD; rt_int f_IN_TYPEDECL; rt_int f_REPCONV; R17 * f_LDONE; R17 * f_NEW_OK; rt_int f_START_IO; rt_int f_MACHINE; rt_int f_SERIAL; R17 * f_EXCS; R22 * f_TY_INT; R22 * f_TY_BOOL; R22 * f_TY_STR; R22 * f_TY_VOID; R22 * f_TY_NIL; R22 * f_TY_ASCII; R22 * f_TY_FLOAT; R22 * f_TY_BITS; R22 * f_TY_ROUNDINGS; R22 * f_TY_TYPE; R12 * f_PENDING; R17 * f_CNAMES; R12 * f_ENUMS; R12 * f_SEGS; R12 * f_CURSEG; R12 * f_TRSEG; R12 * f_ARRAYS; R12 * f_RECS; };
struct R23 { int dummy_; rt_int f_OK; rt_int f_V; };
struct R26 { int dummy_; R9 f_C; R22 * f_T; rt_int f_LVAL; R9 f_SELF; };
struct R17 { int dummy_; rt_int f_KIND; rt_int f_LINE; rt_int f_IV; R9 f_NAME; R17 * f_A; R17 * f_B; R17 * f_C; R17 * f_D; R17 * f_E; R17 * f_NEXT; rt_int f_FL; };
struct R15 { int dummy_; R9 f_T; R15 * f_NEXT; };
struct R12 { int dummy_; rt_int f_KIND; rt_int f_DEPTH; rt_int f_LEVEL; R9 f_NAME; R22 * f_T; R9 f_ACCESS; R9 f_FIELD; rt_int f_INPUT; rt_int f_BYREF; rt_int f_HASMV; rt_int f_MV; R17 * f_TS; rt_int f_BUSY; R9 f_FWD; R28 * f_PARAMS; R22 * f_RESULT; R17 * f_DECL; R9 f_PREFIX; R12 * f_MODL; rt_int f_EXPORTED; rt_int f_GENERIC; rt_int f_FRAMED; R17 * f_USES; R12 * f_INSTANCES; R21 * f_BINDINGS; R12 * f_ORIG; R12 * f_MEMBERS; R12 * f_SAVED; rt_int f_OWNER; rt_int f_WITHV; rt_int f_LAZY; R12 * f_SEGM; R12 * f_HOME; R12 * f_CHAIN; R12 * f_SNEXT; };
struct R19 { int dummy_; rt_int f_LEVEL; R12 * f_R; rt_int f_FRAMED; R9 f_FTYPE; R14 f_FIELDS; R19 * f_UP; R17 * f_IMPORTS; R17 * f_SIGNALS; R22 * f_RESULT; rt_int f_IS_PATH; R9 f_COPYOUT; };
struct R20 { int dummy_; rt_int f_ID; R17 * f_IMPORTS; R17 * f_SIGNALS; R9 f_NAME; R20 * f_UP; };
struct R22 { int dummy_; rt_int f_KIND; rt_int f_SCALE; R9 f_LO_C; R9 f_HI_C; R23 f_MLO; R23 f_MHI; rt_int f_RLEVEL; R9 f_LEN_C; R23 f_MLEN; R9 f_GEN; R22 * f_BASE; R22 * f_ELEM; R22 * f_TARGET; R17 * f_TARGET_TS; R24 * f_FIELDS; R17 * f_LITS; rt_int f_NLITS; rt_int f_UNORDERED; R25 * f_BOUNDS; rt_int f_DIMS; R25 * f_ARGS; R9 f_NAME; R9 f_CNAME; R12 * f_MODL; R17 * f_REPS; R12 * f_DECL; R9 f_GENP; };
struct R21 { int dummy_; R9 f_NAME; R22 * f_T; R9 f_C; rt_int f_HASMV; rt_int f_MV; R12 * f_R; R21 * f_NEXT; };
struct R25 { int dummy_; R9 f_LO; R9 f_HI; R23 f_MLO; R23 f_MHI; rt_int f_ANYARG; R25 * f_NEXT; };
struct R24 { int dummy_; R9 f_NAME; R9 f_CNAME; R22 * f_T; rt_int f_KIND; R9 f_TAGF; R17 * f_LABELS; R24 * f_NEXT; };
struct fr_r_MANIFEST_ARITH { void *up; R9 p_OP; rt_int p_A; rt_int p_B; rt_int p_LINE; rt_int l_R_1343; };
struct R27 { int dummy_; R17 * f_E; R26 f_V; rt_int f_HAVE; rt_int f_MODE; R27 * f_NEXT; };
struct R28 { int dummy_; R9 f_NAME; rt_int f_MODE; R22 * f_T; R17 * f_TS; R28 * f_NEXT; };
struct R18 { int dummy_; rt_int f_KIND; R9 f_NAME; R17 * f_HANDLERS; R18 * f_NEXT; };
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
static rt_int g_N_PSPEC;
static rt_int g_N_ELEM;
static rt_int g_N_VPACK;
static rt_int g_N_VPSPEC;
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
static R17 * g_SEGS_29;
static R9 g_NAME_31;
static R17 * g_MORE_32;
static R17 * g_LAST_33;
static int x_OVERFLOW;
static void S_A8(A8 *d, A8 s, int any);
static int E_A8(A8 a, A8 b);
static A8 C_A8(A8 s);
static void S_R9(R9 *d, R9 s, int any);
static int E_R9(R9 a, R9 b);
static R9 C_R9(R9 s);
static void S_R10(R10 *d, R10 s, int any);
static int E_R10(R10 a, R10 b);
static R10 C_R10(R10 s);
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
static R9 r_MK(rstr p_S);
static R9 r_MKN(rstr p_S);
static rstr r_STR(R9 p_T, rt_int p_L);
static rt_int r_TEQ(R9 p_A, R9 p_B);
static rt_int r_TEQS(R9 p_A, rstr p_S);
static R9 r_CAT(R9 p_A, R9 p_B);
static R9 r_CATS(R9 p_A, rstr p_S);
static R9 r_FMT4(rstr p_P, R9 p_A, R9 p_B, R9 p_C, R9 p_D);
static R9 r_FMT1(rstr p_P, R9 p_A);
static R9 r_FMT2(rstr p_P, R9 p_A, R9 p_B);
static R9 r_FMT3(rstr p_P, R9 p_A, R9 p_B, R9 p_C);
static R9 r_NUM(rt_int p_V);
static R9 r_CID(R9 p_T);
static R9 r_NEW_NAME(rstr p_BASE);
static void r_APPEND(R9 p_T, R14 *p_B);
static void r_EMIT(rt_int p_SEC, R9 p_T);
static void r_EMITS(rt_int p_SEC, rstr p_S);
static void r_CODE(R9 p_T);
static void r_CODES(rstr p_S);
static void r_PUT_BUF(R14 p_B);
static void r_WRITE_OUTPUT(void);
static void r_FAIL(rt_int p_LINE, rstr p_MSG);
static void r_FAILT(rt_int p_LINE, rstr p_MSG, R9 p_T);
static void r_READ_SOURCE(void);
static rt_int r_AT_SRC(rt_int p_I);
static rt_int r_IS_LETTER(rt_int p_C);
static rt_int r_IS_DIGIT(rt_int p_C);
static rt_int r_IS_IDCHAR(rt_int p_C);
static R9 r_SOURCE_TEXT(rt_int p_FIRST, rt_int p_BEYOND);
static rt_int r_IS_RESERVED(R9 p_T);
static void r_ADD_TOKEN(rt_int p_KIND, rt_int p_LINE, rt_int p_IV, R9 p_TX);
static rt_int r_SYMBOL_LENGTH(rt_int p_I);
static void r_LEX(void);
static void r_OPTIONS(void);
static void r_LOAD_LIBRARY(R9 p_NAME);
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
static R9 r_IDENT(void);
static rt_int r_IDENT_TOKEN(R10 p_T);
static void r_EXPECT_NAME(R9 p_NAME);
static R17 * r_NEW_NODE(rt_int p_KIND, rt_int p_LINE);
static void r_ADD_LIST(R17 * p_N, R17 * *p_HEAD, R17 * *p_TAIL);
static rt_int r_LIST_LENGTH(R17 * p_N);
static R17 * r_IDENT_NODE(void);
static R17 * r_IDENT_LIST(void);
static R17 * r_ROUTINE_NAME_NODE(void);
static R17 * r_PAREN_IDENTS(void);
static void r_SKIP_PARENS(void);
static R17 * r_PARSE_COMPILATION(void);
static R17 * r_PARSE_ITEMS(void);
static R17 * r_PARSE_SEGMENT(void);
static R17 * r_PARSE_CLOSED_BODY(void);
static R17 * r_PARSE_BODY(void);
static R17 * r_PARSE_MODULE(void);
static R17 * r_PARSE_DECLARATIONS(void);
static R17 * r_PARSE_OBJECT_DECL(void);
static R17 * r_PARSE_FORMALS(void);
static R17 * r_PARSE_TYPE_DECL(void);
static R17 * r_PARSE_REPTYPE_DECL(void);
static R17 * r_PARSE_REP(void);
static void r_PARSE_RECORD_REP(R17 * p_R);
static R17 * r_PARSE_PACKING_SPEC(void);
static R17 * r_PARSE_ELEMENT_SPEC(void);
static R17 * r_PARSE_VARIANT_PACKING(void);
static R9 r_GEN_NAME(void);
static R17 * r_PARSE_TYPE_ARG(void);
static R17 * r_EXPR_TO_TS(R17 * p_E);
static R17 * r_TYPE_SPEC_TAIL(R17 * p_N);
static R17 * r_PARSE_TYPE_SPEC(void);
static R17 * r_PARSE_LITERALS(void);
static R17 * r_PARSE_FIELDS(void);
static R17 * r_PARSE_RANGE(void);
static rt_int r_RANGE_AHEAD(void);
static R17 * r_PARSE_PARAMS(void);
static R17 * r_PARSE_TEMPLATE(rt_int p_FUNC);
static R17 * r_PARSE_ROUTINE_SPEC(void);
static R17 * r_PARSE_WHERE(void);
static R17 * r_PARSE_ROUTINE(void);
static R17 * r_BIN_NODE(R9 p_OP, rt_int p_LINE, R17 * p_A, R17 * p_B);
static R17 * r_PARSE_EXPR(void);
static rt_int r_ROUNDING_AHEAD(void);
static R17 * r_PARSE_SIMPLE(void);
static R17 * r_PARSE_CONJ(void);
static R17 * r_PARSE_RELATION(void);
static R17 * r_TRY_SCALED(R17 * p_LEFT, rstr p_OPS);
static R17 * r_PARSE_SUM(void);
static R17 * r_PARSE_TERM(void);
static R17 * r_PARSE_FACTOR(void);
static R17 * r_PARSE_SECONDARY(void);
static R17 * r_PARSE_ARGS(R17 * p_N);
static R17 * r_PARSE_POSTFIX(void);
static R17 * r_PARSE_BITS(rt_int p_BITS_PER, rt_int p_LINE);
static R17 * r_PARSE_ATOM(void);
static R17 * r_PARSE_CHARSTRING(R9 p_CHARSET);
static rt_int r_AT_BODY_END(void);
static R17 * r_PARSE_STATEMENTS(void);
static R17 * r_PARSE_HANDLERS(void);
static R17 * r_PARSE_STATEMENT(void);
static void r_EXPECT_END(rstr p_WORD);
static R17 * r_PARSE_UNLABELED(void);
static R17 * r_PARSE_IF(void);
static R17 * r_PARSE_CASE_LABEL(void);
static R17 * r_PARSE_CASE(void);
static R17 * r_PARSE_LOOP(void);
static R17 * r_PARSE_PAR(void);
static void r_CONNECT_KNOWN(R17 * p_E, R17 * p_H);
static R9 r_NO_TEXT(void);
static void S_R23(R23 *d, R23 s, int any);
static int E_R23(R23 a, R23 b);
static R23 C_R23(R23 s);
static R23 r_NO_MVAL(void);
static R23 r_SOME(rt_int p_V);
static R12 * r_NEW_SYM(rt_int p_KIND, R9 p_NAME);
static rt_int r_CUR_OWNER(void);
static R12 * r_ORIGINAL(R12 * p_Y);
static rt_int r_BUCKET(R9 p_NAME);
static R12 * r_LOOKUP(R9 p_NAME);
static R12 * r_ORIG_LOOKUP(R9 p_NAME);
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
static R9 r_ASCII_NAME(rt_int p_C);
static rt_int r_IS_SCALAR(R22 * p_T);
static R22 * r_REAL_TYPE(R22 * p_T);
static R9 r_TYPE_NAME(R22 * p_T);
static R9 r_SUBST_SELF(R9 p_T, R9 p_SELF);
static rt_int r_SAME_LITERALS(R17 * p_A, R17 * p_B);
static R22 * r_ENUM_CLASS(R17 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE);
static void r_DECLARE_LITERALS(R22 * p_T, rt_int p_LINE);
static R12 * r_FIND_LITERAL(R9 p_NAME, R22 * p_T);
static R12 * r_VISIBLE_LITERAL(R9 p_NAME, R22 * p_T);
static rt_int r_LITERAL_CLASSES(R9 p_NAME);
static R22 * r_RESOLVE(R17 * p_TS);
static void r_ATTR_VALUE(R17 * p_E, R9 *p_C, R23 *p_M);
static R22 * r_WITH_RANGE(R22 * p_T, R17 * p_R);
static R23 r_ENUM_MANIFEST(R17 * p_E, R22 * p_T);
static rt_int r_CUR_LEVEL(void);
static R22 * r_ARG_TYPE(R17 * p_N);
static R17 * r_NTH_ARG(R17 * p_TS, rt_int p_K);
static R22 * r_RESOLVE_NAMED(R17 * p_TS, R9 p_CNAME);
static R22 * r_APPLY_REP(R22 * p_T0, R17 * p_R0, rt_int p_LINE);
static R17 * r_EXPAND_REP(R17 * p_R, R22 * p_T, rt_int p_LINE);
static R17 * r_REP_ARG_VALUE(R17 * p_A);
static void r_CHECK_REP_CLASS(R22 * p_T, rt_int p_LINE);
static rt_int r_POW2(rt_int p_N);
static void r_CHECK_FIXED_REP(R22 * p_T, rt_int p_LINE);
static R22 * r_TYPE_ATTR_TYPE(R17 * p_E);
static rt_int r_IS_TYPE_ATTR(R17 * p_E);
static R22 * r_GEN_TYPE(R17 * p_TS);
static R22 * r_RESOLVE_PREDEFINED(R17 * p_TS);
static void r_TYPE_ARG_COUNT(R17 * p_TS, rt_int p_N);
static R23 r_MANIFEST_INTEGER_ARG(R17 * p_A, rstr p_WHAT, rt_int p_LO, rt_int p_HI);
static rt_int r_BOUND_NAME(R17 * p_A);
static void r_CHECK_PRECISION_ARG(R17 * p_P, rt_int p_LINE);
static void r_CHECK_ENUM_REP(R22 * p_T, rt_int p_LINE);
static void r_STRING_LENGTH(R22 * p_T, R17 * p_A);
static R22 * r_RESOLVE_ARRAY(R17 * p_TS);
static R22 * r_RESOLVE_USER(R17 * p_TS);
static R22 * r_ABSTRACT_VIEW(R12 * p_Y, R22 * p_T);
static rt_int r_EXPORTS_ORDER(R12 * p_Y);
static rt_int r_EXPORTS_OP(R12 * p_Y, rstr p_OP);
static rt_int r_IS_UNORDERED(R22 * p_T);
static rt_int r_IN_MODULE(R12 * p_M);
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R17 * p_TS);
static void r_BIND_FORMALS(R17 * p_FORMALS, R17 * p_TS);
static R9 r_RECORD_NAME(R12 * p_Y);
static R22 * r_TARGET(R22 * p_T);
static R9 r_CTYPE(R22 * p_T);
static rt_int r_IS_GENERIC_NODE(R17 * p_E);
static R24 * r_NEW_FIELD(R9 p_NAME, R22 * p_T, rt_int p_KIND);
static R24 * r_FIND_FIELD(R22 * p_T, R9 p_NAME);
static R24 * r_FIND_VFIELD(R22 * p_T, R9 p_NAME);
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL);
static void r_RECORD_FIELDS(R22 * p_T, R17 * p_DECLS, R9 p_TAGN, R17 * p_LABELS, R24 * *p_TAIL);
static void r_CHECK_VARIANT_NAMES(R17 * p_D, R22 * p_TT);
static R22 * r_RESOLVE_RECORD(R17 * p_TS, R9 p_CNAME, R12 * p_Y, R17 * p_FORMALS);
static rt_int r_IS_RECORD_REP(R22 * p_T);
static void r_CHECK_RECORD_REP(R22 * p_T, rt_int p_LINE);
static void r_CHECK_ELEMENTS(R22 * p_T, R17 * p_L, R9 p_TAGN, R17 * p_LABELS, R17 * *p_SEEN);
static R9 r_RECORD_SIZE(R22 * p_T, R9 p_C);
static R9 r_FIELD_SIZE_C(R24 * p_F, R9 p_C);
static R9 r_LAYOUT_ALL(R22 * p_T, R9 p_C, R9 p_TAGN, rt_int p_MODE);
static R9 r_LAYOUT_PARTS(R22 * p_T, R9 p_C);
static R9 r_LAYOUT_SPEC(R22 * p_T, R9 p_C, R17 * p_P, R9 p_TAGN);
static R9 r_LAYOUT_VARIANTS(R22 * p_T, R9 p_C, R9 p_TAGN);
static rt_int r_ARG_MANIFEST(R22 * p_T, R24 * p_F);
static rt_int r_IS_ANY_TAG(R17 * p_A);
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R17 * p_TS);
static rt_int r_SAME_BINDS(R21 * p_A, R21 * p_B);
static rt_int r_HAS_ANY(R22 * p_T);
static R9 r_VARIANT_COND(R24 * p_F, R22 * p_T, R9 p_SELF);
static void r_COMPLETE_RECORD(R22 * p_T);
static R9 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS);
static R9 r_INIT_CODE(R22 * p_T, R9 p_LV);
static rt_int r_NEEDS_INIT(R22 * p_T);
static R9 r_COPY_OF(R22 * p_T, R9 p_V);
static R9 r_ASSIGN_CODE(R22 * p_T, R9 p_LV, R9 p_RV);
static R9 r_EQUAL_CODE(R22 * p_T, R9 p_A, R9 p_B);
static R9 r_RANGE_CHECK(R22 * p_T, R9 p_V, R9 p_SELF);
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T);
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B);
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B);
static rt_int r_IS_GEN_ARG(R25 * p_B);
static rt_int r_SAME_ARGS(R25 * p_A, R25 * p_B);
static R9 r_FRAME_OF(rt_int p_LEVEL);
static R9 r_OBJ_ACCESS(R12 * p_Y);
static R9 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE);
static void r_DECLARE_OBJECTS(R17 * p_D);
static void S_R26(R26 *d, R26 s, int any);
static int E_R26(R26 a, R26 b);
static R26 C_R26(R26 s);
static R26 r_MKET(R9 p_C, R22 * p_T);
static R26 r_MKLV(R9 p_C, R22 * p_T, rt_int p_LVAL, R9 p_SELF);
static R22 * r_INT_TYPE(rt_int p_SCALE);
static R22 * r_STR_TYPE(R9 p_LEN, R23 p_M);
static R9 r_CSTRING(R9 p_T);
static R23 r_MANIFEST(R17 * p_E);
static R23 r_ATTR_MANIFEST(R17 * p_E);
static R23 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R9 p_NAME);
static rt_int r_MANIFEST_ARITH(R9 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE);
static rt_int r_MANIFEST_INT(R17 * p_E);
static rt_int r_BOOL_INT(rt_int p_B);
static R26 r_EXPR(R17 * p_E, R22 * p_WANT);
static R9 r_INT_EXPR(R17 * p_E);
static R9 r_BOOL_EXPR(R17 * p_E);
static R22 * r_BITS_TYPE(rt_int p_LEN);
static R26 r_REAL_LITERAL(R17 * p_E);
static rt_int r_FLOAT_LITERAL_FITS(R17 * p_E, rt_int p_P);
static void r_CHECK_FIXED_LITERAL(R17 * p_E);
static R26 r_STRING_LITERAL(R17 * p_E);
static R22 * r_RESOLVE_USER_NAME(R9 p_NAME, rt_int p_LINE);
static R26 r_ENUM_LITERAL(R17 * p_E, R22 * p_WANT);
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT);
static rt_int r_CONSTRUCTOR_WANTED(R22 * p_WANT);
static rt_int r_NAMES_OBJECT(R9 p_NAME);
static rt_int r_IS_STD_REPTYPE(R9 p_NAME);
static rt_int r_IS_REPTYPE_NAME(R9 p_NAME);
static R26 r_REP_CONVERTER(R17 * p_S, R17 * p_E, rt_int p_LINE);
static R26 r_NAME_EXPR(R17 * p_E, R22 * p_WANT);
static R26 r_FIELD_EXPR(R17 * p_E);
static rt_int r_IS_FIXED_LITERAL(R17 * p_A);
static rt_int r_IS_NUMBER_LITERAL(R17 * p_A);
static rt_int r_IS_TYPE_WORD(R9 p_NAME);
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R17 * p_BASE, rt_int p_LINE);
static R23 r_TAG_VALUE(R22 * p_T, R9 p_TAGN);
static rt_int r_LABELS_HAVE(R17 * p_L, rt_int p_V, R22 * p_T);
static R26 r_VALUE_OR_TYPE(R17 * p_E);
static R26 r_INDEX_EXPR(R17 * p_E);
static R9 r_INDEX_VALUE(R17 * p_E);
static R9 r_INDEX_OF(R26 p_V, rt_int p_LINE);
static R26 r_INDEX_EXPR2(R17 * p_E);
static R9 r_OP_NAME(R9 p_OP, rt_int p_UNARY);
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT);
static R27 * r_NODE_ARG(R17 * p_E, rt_int p_MODE, R27 * p_NEXT);
static R12 * r_USER_OPERATOR(R9 p_NAME, R27 * p_ARGS, rt_int p_LINE);
static rt_int r_HAS_USER_ROUTINE(R9 p_NAME);
static R27 * r_QUAL_ARGS(rt_int p_LINE);
static R26 r_OPERATOR_CALL3(R9 p_NAME, R26 p_A, R17 * p_B, R17 * p_C, rt_int p_LINE);
static void r_REQUIRE_MACHINE(rt_int p_LINE);
static R9 r_RESCALE_C(R9 p_C, rt_int p_SFROM, rt_int p_STO);
static R9 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE);
static R9 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R9 p_SELF);
static R9 r_STORE_CODE(R22 * p_T, R9 p_LV, R26 p_V, rt_int p_LINE, R9 p_SELF);
static rt_int r_HAS_ABS_PART(R22 * p_T);
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT);
static R9 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R9 p_LV, R9 p_RV, rt_int p_LINE);
static R9 r_COMPONENT_EQUAL(R22 * p_T, R9 p_A, R9 p_B, rt_int p_LINE);
static R26 r_UNARY(R17 * p_E);
static R26 r_UNARY1(R17 * p_E);
static rt_int r_IS_LITERALISH(R17 * p_E);
static R26 r_BINARY(R17 * p_E);
static R26 r_STD_RESULT(R26 p_V);
static R26 r_APPLY_OPERATOR(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B);
static rt_int r_IDENTICAL_TYPE(R22 * p_A, R22 * p_B);
static R9 r_TARGET_ARGS_CHECK(R22 * p_RT, R22 * p_VT, R9 p_C);
static rt_int r_SAME_EXTENTS(R22 * p_A, R22 * p_B);
static rt_int r_HAS_VALUES(R22 * p_T);
static R22 * r_FLOAT_TYPE(rt_int p_P);
static R9 r_SINGLE_C(rt_int p_P);
static R9 r_FLOAT_TRUNC(void);
static rt_int r_QUAL_PREC(void);
static R9 r_FLOAT_OP(R9 p_OP, R9 p_A, R9 p_B, R22 * p_T);
static R9 r_LOWER_OP(R9 p_OP);
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B);
static R9 r_FIXED_COMPARE(R26 p_A, R26 p_B, R9 p_OP);
static R26 r_EQUALITY(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B);
static R26 r_FIXED_ARITH(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B);
static R26 r_SCALED_OPERATOR(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B);
static R26 r_IN_EXPR(R17 * p_E);
static R9 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE);
static R26 r_INT_ET(rt_int p_V);
static rt_int r_BITS_FOR(rt_int p_N);
static rt_int r_ENUM_SIZE(R22 * p_T);
static rt_int r_PACKING_OF(R22 * p_T);
static rt_int r_PACKING_VALUE(R9 p_NAME);
static R26 r_PACKING_LITERAL(rt_int p_MODE, rt_int p_LINE);
static rt_int r_PACK_SLOT(rt_int p_ES, rt_int p_MODE);
static R9 r_STD_MIN_C(void);
static R9 r_STD_MAX_C(void);
static rt_int r_STD_MIN(void);
static rt_int r_STD_MAX(void);
static R9 r_STD_CHECK(R9 p_C);
static rt_int r_PACK_SIZE(rt_int p_N, rt_int p_ES, rt_int p_MODE);
static rt_int r_CHAR_SIZE(R22 * p_T);
static R9 r_CHAR_REPS(R22 * p_T);
static rt_int r_MAX_LENGTH(void);
static rt_int r_MAX_FLOAT_PRECISION(void);
static rt_int r_IMP_PRECISION_OF(rt_int p_P);
static rt_int r_FLOAT_FORMAT(rt_int p_P, R9 p_NAME);
static R23 r_STATIC_SIZE(R22 * p_T);
static R26 r_ATTRIBUTE(R26 p_B, R9 p_NAME, rt_int p_LINE);
static R26 r_ARRAY_SHAPE(R26 p_B, R9 p_NAME);
static R17 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE);
static R26 r_SIZE_OF(R22 * p_T, R9 p_C);
static R26 r_TYPE_ATTRIBUTE(R9 p_TNAME, R9 p_NAME, rt_int p_LINE);
static R26 r_TYPE_VALUE(R9 p_TNAME, rt_int p_LINE);
static R26 r_TYPE_VALUE_OF(R22 * p_T);
static rt_int r_IS_TYPE_NAME(R17 * p_E);
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R9 p_TNAME, R9 p_A, R9 p_B, rt_int p_LINE);
static R26 r_RECORD_CONSTRUCTOR(R17 * p_E, R22 * p_WANT);
static R17 * r_FIND_INIT(R17 * p_L, R9 p_NAME);
static R26 r_ARRAY_CONSTRUCTOR(R17 * p_E, R22 * p_WANT);
static void r_CHECK_SHAPE(R17 * p_E, rt_int p_DIMS);
static rt_int r_SAME_SHAPE(R17 * p_A, R17 * p_B);
static void r_ARRAY_ELEMENTS(R17 * p_E, rt_int p_DIMS, R22 * p_A, R9 p_TMP, R9 *p_R, rt_int *p_K);
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS);
static R26 r_TYPE_SPECIFIER(R17 * p_E);
static R9 r_ENUM_OF_BITS(R22 * p_T, R9 p_C);
static R9 r_REP_TABLE(R22 * p_T);
static R26 r_NEW_EXPR(R17 * p_E, R22 * p_WANT);
static R17 * r_NTH(R17 * p_L, rt_int p_K);
static void r_NEED_ARGS(R17 * p_E, rt_int p_LO, rt_int p_HI);
static R9 r_ROUNDING_ARG(R17 * p_E, rt_int p_N);
static rt_int r_IS_ROUNDING(R17 * p_E);
static R17 * r_ARG_EXPR(R17 * p_E);
static R9 r_OPERATOR_SYMBOL(R9 p_NAME);
static R26 r_OPERATOR_BUILTIN(R17 * p_E, R22 * p_WANT);
static R17 * r_QUALIFIED(R17 * p_X, R17 * p_Q, rt_int p_LINE);
static rt_int r_IS_ROUNDING_NAME(R9 p_NAME);
static R22 * r_ROUNDINGS_TYPE(void);
static rt_int r_PREDEFINED_ROUNDING(void);
static R17 * r_FIRST_OUT_ARG(R17 * p_E);
static rt_int r_GENERIC_OBJECT_ARG(R17 * p_L);
static R26 r_BUILTIN(R17 * p_E, R22 * p_WANT);
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE);
static R26 r_TO_FIXED_CALL(R17 * p_E);
static rt_int r_STATIC_SIZE_OR(R22 * p_T);
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE);
static void r_TYPE_ARG(R27 * p_A);
static rt_int r_WANT_SENSITIVE(R27 * p_A);
static rt_int r_COUNT_ARGS(R27 * p_A);
static R27 * r_CALL_ARGS(R17 * p_E);
static R26 r_CALL_EXPR(R17 * p_E, R22 * p_WANT);
static R26 r_CALL_EXPR1(R17 * p_E, R22 * p_WANT);
static R9 r_CLASS_OPERATION(R9 p_NAME);
static R9 r_WHERE_SHORT_NAME(R9 p_NAME);
static R12 * r_BOUND_ROUTINE(R9 p_NAME);
static rt_int r_CANDIDATE(R12 * p_Y, R9 p_NAME);
static R12 * r_FIND_ROUTINE(R9 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST);
static rt_int r_SEEN_ROUTINE(R12 * p_R, R9 p_NAME, R12 * p_STOP);
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R9 p_NAME, R12 * p_STOP);
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B);
static rt_int r_PARAM_COUNT(R12 * p_R);
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS);
static rt_int r_LITERAL_FITS(R17 * p_E, R22 * p_T);
static R12 * r_ARG_ROOT(R17 * p_E);
static R17 * r_PATH_OF(R17 * p_E);
static rt_int r_DISJOINT_PATHS(R17 * p_A, R17 * p_B);
static void r_EXPLICIT_GENERIC_ARGS(R12 * p_Y, R27 * p_ARGS, rt_int p_LINE);
static void r_NAMES_IN(R17 * p_L, R17 * *p_HEAD);
static rt_int r_CONSTANT_EXPR(R17 * p_E);
static rt_int r_CONSTANT_LIST(R17 * p_L);
static rt_int r_PACKED_ELEMENT(R17 * p_E);
static void r_NO_ALIASING(R12 * p_Y, R27 * p_ARGS, rt_int p_LINE);
static void r_NEED_BODY(R12 * p_G);
static R12 * r_INLINE_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE);
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE);
static R22 * r_FORMAL_VIEW(R12 * p_R, R28 * p_P);
static R22 * r_RESULT_VIEW(R12 * p_R);
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R17 * p_TS, R22 * p_T);
static R12 * r_MEMBER_TYPE(R12 * p_M, R9 p_NAME);
static rt_int r_IS_STRUCTURED(R22 * p_T);
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B);
static rt_int r_STATIC_GENERIC(R17 * p_TS);
static R17 * r_OWN_NAMES(R17 * p_R);
static rt_int r_DECLARES_DERIVED(R17 * p_L);
static R22 * r_MARK_GENP(R22 * p_T, R9 p_NAME);
static R12 * r_CUR_GENERIC(void);
static rt_int r_IN_WHERE(R12 * p_G, R9 p_NAME);
static void r_REQUIRE_WHERE(R9 p_NAME, rt_int p_LINE);
static void r_REQUIRE_WHERE_SUBSET(R12 * p_Y, rt_int p_LINE);
static rt_int r_HAS_GEN_ARG(R17 * p_A);
static void r_ROUTINE_HEADER(R12 * p_Y);
static void r_ROUTINE_HEADER1(R12 * p_Y);
static R22 * r_RESULT_TYPE(R12 * p_Y);
static R9 r_C_HEADER(R12 * p_Y);
static void r_DEFINE_PARAM_GENS(R22 * p_T, R9 p_PC, rt_int p_LINE, rt_int p_CHECK);
static rt_int r_IS_GEN_TEXT(R9 p_T);
static R9 r_GEN_TEXT_NAME(R9 p_T);
static void r_DEFINE_GEN(R9 p_NAME, R9 p_C, rt_int p_LINE, rt_int p_CHECK);
static R21 * r_NEW_BINDS(void);
static void r_ADD_BIND(R9 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R21 * p_HEAD);
static R21 * r_FIND_BIND(R21 * p_BS, R9 p_NAME);
static rt_int r_UNIFY(R17 * p_TS, R22 * p_T, R21 * p_BS);
static rt_int r_SAME_DERIVED_LENGTH(R17 * p_A, R22 * p_RT, R21 * p_BS);
static rt_int r_UNIFY_REP(R17 * p_R, R22 * p_RT, R21 * p_BS);
static rt_int r_NONSTANDARD_REP(R22 * p_T);
static R12 * r_RECORD_CLASS_OF(R22 * p_T);
static rt_int r_UNIFY_VALUE(R17 * p_A, R23 p_M, R21 * p_BS);
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R21 * p_BS);
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE);
static rt_int r_SAME_STATIC_BINDS(R21 * p_A, R21 * p_B);
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B);
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B);
static R12 * r_ROUTINE_ARGUMENT(R17 * p_TS, R17 * p_E, rt_int p_LINE);
static R12 * r_FIND_ROUTINE_ARG(R17 * p_TS, R17 * p_E, R21 * p_BS0, rt_int p_LINE, rt_int p_STRICT);
static rt_int r_EXPLICIT_TEMPLATE_FITS(R17 * p_E, R12 * p_R);
static rt_int r_TEMPLATE_FITS(R17 * p_TS, R12 * p_R, R21 * p_BS);
static rt_int r_TYPE_FITS_SPEC(R17 * p_TS, R22 * p_T, R21 * p_BS);
static rt_int r_HAS_DERIVED(R17 * p_TS);
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R21 * p_BS);
static rt_int r_DONTCARE_TYPE_ARG(R17 * p_TS);
static R12 * r_NEW_INSTANCE(R12 * p_G, R21 * p_BS, R27 * p_ARGS);
static rt_int r_IS_OPERATOR_NAME(R9 p_NAME);
static R17 * r_SUBST_FORMALS(R17 * p_TS, R17 * p_FORMALS, R17 * p_ARGS);
static R17 * r_COPY_NODE(R17 * p_N);
static rt_int r_IN_IDENTS(R17 * p_L, R9 p_NAME);
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE);
static void r_COMPUTE_USES(R12 * p_Y);
static rt_int r_LOCAL_MODULE_EXPORTS(R17 * p_B, R9 p_NAME);
static void r_ROUTINE_USES(R17 * p_RS);
static void r_IMPORTS_KNOWN(R17 * p_L, rt_int p_INOUT);
static void r_INPUT_IMPORT_CONFLICT(R17 * p_ITEMS, rt_int p_LINE);
static void r_ADD_USES(R17 * p_L, R17 * *p_HEAD, R17 * *p_TAIL);
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE);
static rt_int r_IMPORTED_ROUTINE_USES(R17 * p_RS, R9 p_NAME);
static rt_int r_MODULE_IMPORTED(R17 * p_MODS, R12 * p_Y);
static R9 r_BASE_NAME(R12 * p_Y);
static rt_int r_HANDLER_EXISTS(R9 p_NAME);
static void r_PUSH_CTX(rt_int p_KIND, R9 p_NAME);
static void r_POP_CTX(void);
static R18 * r_LEAVE(rt_int p_KIND);
static rt_int r_GUARDS(void);
static R9 r_EXC_NAME(R9 p_NAME);
static void r_DECLARE_TYPES(R17 * p_DECLS);
static void r_REFERS(R17 * p_L, R9 p_TARGET, R17 * p_DECLS, R17 * *p_SEEN, rt_int *p_FOUND);
static rt_int r_TAG_MISUSED(R17 * p_L, R9 p_NAME);
static rt_int r_TAG_MISUSED1(R17 * p_N, R9 p_NAME);
static rt_int r_NAMES_VARIABLE(R17 * p_L, R17 * p_DECLS);
static void r_GEN_NAMES(R17 * p_L, R17 * *p_HEAD);
static rt_int r_NAMES_VARIABLE_BUT(R17 * p_L, R17 * p_DECLS, R17 * p_EXCL);
static rt_int r_HAS_PRINTING_CHAR(R17 * p_L);
static R22 * r_DEFAULT_CHARSET(rt_int p_LINE);
static R22 * r_CHARSET_OF(R22 * p_T);
static void r_SAME_CHARSET(R22 * p_A, R22 * p_B, rt_int p_LINE);
static void r_ASCII_ONLY(R22 * p_T, rstr p_WHAT, rt_int p_LINE);
static void r_DECLARE_LABELS(R17 * p_S0);
static void r_BODY(R17 * p_B);
static void r_OPEN_BODY(R17 * p_B);
static void r_GUARDED(R17 * p_S, R17 * p_BODY_NODE, R17 * p_HANDLERS);
static void r_INTERFERENCE(R17 * p_S);
static void r_COLLECT_LIST(R17 * p_L, R17 * *p_NAMES, R17 * *p_CALLS);
static void r_COLLECT_REFS(R17 * p_E, R17 * *p_NAMES, R17 * *p_CALLS);
static R17 * r_NAME_REF(R9 p_NAME, rt_int p_OWNER, R17 * p_A, R17 * p_L);
static R17 * r_ROUTINE_DATA(R9 p_NAME, rt_int p_INOUT);
static R17 * r_DATA_OF(R12 * p_Y, rt_int p_INOUT, rt_int p_DEPTH);
static rt_int r_HAS_REF(R17 * p_L, R9 p_NAME, rt_int p_OWNER);
static R17 * r_INTERSECT_REFS(R17 * p_A, R17 * p_B);
static void r_CHECK_INTERFERENCE(R17 * p_NAMES, R17 * p_CALLS, rt_int p_LINE, rt_int p_ASSERTION);
static rt_int r_IN_HANDLERS(R17 * p_HS, R9 p_NAME);
static rt_int r_IS_STRUCTURED_STMT(R17 * p_S);
static R17 * r_NAMED_ROOT(R17 * p_E);
static void r_STMT(R17 * p_S);
static R26 r_PROCEDURE_CALL(R17 * p_S);
static void r_IF_STMT(R17 * p_ARMS, R17 * p_ELSE_BODY);
static void r_CHECK_BODY(R17 * p_B);
static void r_CHECK_COND(R17 * p_E);
static void r_FOR_STMT(R17 * p_S);
static void r_RETURN_STMT(R17 * p_S);
static void r_SIGNAL_STMT(R17 * p_S);
static void r_ASSIGN_STMT(R17 * p_S);
static void r_WITH_STMT(R17 * p_S);
static void r_CASE_STMT(R17 * p_S);
static R25 * r_DISTINCT_LABEL(R25 * p_SEEN, rt_int p_A, rt_int p_B, rt_int p_LINE);
static void r_VALUE_CASE(R17 * p_S, R26 p_CH);
static R26 r_CASE_LABEL(R17 * p_L, R22 * p_T);
static R9 r_VALUE_COMPARE(R26 p_A, R26 p_B, R9 p_OP);
static void r_CASE_ELEMENT(R17 * p_B, R17 * p_HANDLERS);
static R12 * r_DISCRIMINATED(R17 * p_CH);
static R22 * r_NARROW(R22 * p_T, R9 p_TAGN, rt_int p_V);
static void r_MACHINE_CASE(R17 * p_S);
static R22 * r_PATHS_TYPE(void);
static void r_PARALLEL_BLOCK(R17 * p_S);
static void r_ACTIVATE_PATH(R17 * p_P, R9 p_TD);
static rt_int r_IMPLEMENTATION_SEMAPHORE(R17 * p_E);
static R9 r_UP_FRAME(void);
static void r_PATH_BODY(R17 * p_P, R9 p_FN, R9 p_FT, R22 * p_LT);
static R9 r_JOIN_BUF(R14 p_B);
static R9 r_PATH_REF(R17 * p_E);
static void r_TERMINATE_STMT(R17 * p_S);
static R26 r_PARALLEL_BUILTIN(R17 * p_E, R22 * p_WANT);
static R26 r_START_IO_CALL(R17 * p_E);
static void r_ENTER_ISCOPE(R17 * p_IMPORTS, R17 * p_SIGNALS, R9 p_NAME);
static void r_LEAVE_ISCOPE(void);
static R9 r_ROUTINE_CNAME(R9 p_NAME);
static rt_int r_NEEDS_FRAME(R17 * p_B);
static rt_int r_HAS_HANDLERS(R17 * p_S0);
static void r_DECLARE_ROUTINE_SYM(R17 * p_R);
static void r_DECLARE_MEMBERS(R17 * p_RS);
static void r_ROUTINE_HEADERS(R17 * p_RS);
static void r_DISTINCT_SIGNATURES(R17 * p_RS);
static R12 * r_FIND_DECL(R17 * p_D);
static void r_RESOLVE_ENUM_TYPES(R17 * p_DECLS);
static R17 * r_TYPE_REF(R17 * p_D);
static void r_PREDECLARE_MODULE(R17 * p_M);
static void r_ENTER_MODULE(R12 * p_M);
static void r_LEAVE_MODULE(R12 * p_M);
static void r_ENTER_MODULE_OF(R12 * p_G);
static rt_int r_ENTER_MODULE_FOR(R12 * p_G);
static void r_LEAVE_MODULE_OF(R12 * p_G);
static void r_EXPORT_MODULE(R12 * p_M);
static void r_CHECK_EXPORT_ITEM(R12 * p_M, R17 * p_X);
static rt_int r_MEMBER_NAMED(R12 * p_M, R9 p_NAME);
static rt_int r_EXPORTED_BY(R17 * p_D, R12 * p_Y);
static R12 * r_ORIG_LOOKUP_MEMBER(R9 p_NAME, R12 * p_Y);
static void r_MODULE_DATA(R17 * p_RS);
static void r_ROUTINE_BODIES(R17 * p_RS);
static void r_PENDING_BODIES(void);
static void r_CLOSED_BODY(R17 * p_B);
static void r_ROUTINE_BODY(R12 * p_Y);
static void r_BIND_INSTANCE(R21 * p_BS, rt_int p_LINE);
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST);
static rt_int r_USES_SEGMENT(R17 * p_S, rstr p_NAME);
static rt_int r_SEGMENT_READY(R17 * p_S, R17 * p_SEGS);
static R9 r_MISSING_SEGMENT(R17 * p_SEGS);
static void r_TRANSLATE(R17 * p_SEGS);
static rt_int r_FROM_DEFINED_MODULE(R17 * p_S, R12 * p_Y);
static void r_SEGMENT_EXPORTS(R17 * p_S);
static void r_BEGIN_SEGMENT(R17 * p_S);
static R12 * r_ENTER_HOME(R12 * p_Y);
static void r_DEFINE_ALIAS(R12 * p_A);
static void r_LEAVE_HOME(R12 * p_Y, R12 * p_SAVED);
static R12 * r_FIND_SEGMENT(R9 p_NAME);
static void r_CHECK_ITEMS_DEFINED(R12 * p_T, R17 * p_L);
static rt_int r_SEG_VISIBLE(R12 * p_Y, rt_int p_LINE);
static rt_int r_FROM_MODULES(R17 * p_MODS, R12 * p_Y);
static void S_R17(R17 *d, R17 s, int any);
static int E_R17(R17 a, R17 b);
static R17 C_R17(R17 s);
static void S_R15(R15 *d, R15 s, int any);
static int E_R15(R15 a, R15 b);
static R15 C_R15(R15 s);
static void S_R12(R12 *d, R12 s, int any);
static int E_R12(R12 a, R12 b);
static R12 C_R12(R12 s);
static void S_R19(R19 *d, R19 s, int any);
static int E_R19(R19 a, R19 b);
static R19 C_R19(R19 s);
static void S_R20(R20 *d, R20 s, int any);
static int E_R20(R20 a, R20 b);
static R20 C_R20(R20 s);
static void S_R22(R22 *d, R22 s, int any);
static int E_R22(R22 a, R22 b);
static R22 C_R22(R22 s);
static void S_R21(R21 *d, R21 s, int any);
static int E_R21(R21 a, R21 b);
static R21 C_R21(R21 s);
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
static void S_R18(R18 *d, R18 s, int any);
static int E_R18(R18 a, R18 b);
static R18 C_R18(R18 s);
static void S_A8(A8 *d, A8 s, int any) { rt_int n = rt_b_extent(1, d->lo, d->hi);
if (!rt_b_same_extents(1, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) d->p[i] = s.p[i]; }
static int E_A8(A8 a, A8 b) { rt_int n = rt_b_extent(1, a.lo, a.hi);
if (!rt_b_same_extents(1, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!(a.p[i] == b.p[i])) return 0; return 1; }
static A8 C_A8(A8 s) { A8 d = s; 
rt_int n = rt_b_extent(1, s.lo, s.hi); d.p = rt_alloc((n > 0 ? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = s.p[i]; return d; }
static void S_R9(R9 *d, R9 s, int any) {  d->f_AT = s.f_AT; d->f_LEN = s.f_LEN; d->f_H = s.f_H; }
static int E_R9(R9 a, R9 b) { return 1 && (a.f_AT == b.f_AT) && (a.f_LEN == b.f_LEN) && (a.f_H == b.f_H); }
static R9 C_R9(R9 s) { R9 d = s;
 d.f_AT = s.f_AT; d.f_LEN = s.f_LEN; d.f_H = s.f_H; return d; }
static void S_R10(R10 *d, R10 s, int any) {  d->f_KIND = s.f_KIND; d->f_LINE = s.f_LINE; d->f_IV = s.f_IV; S_R9(&d->f_TX, s.f_TX, 0); }
static int E_R10(R10 a, R10 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_LINE == b.f_LINE) && (a.f_IV == b.f_IV) && E_R9(a.f_TX, b.f_TX); }
static R10 C_R10(R10 s) { R10 d = s;
 d.f_KIND = s.f_KIND; d.f_LINE = s.f_LINE; d.f_IV = s.f_IV; d.f_TX = C_R9(s.f_TX); return d; }
static void S_A11(A11 *d, A11 s, int any) { rt_int n = rt_b_extent(1, d->lo, d->hi);
if (!rt_b_same_extents(1, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) S_R10(&d->p[i], s.p[i], 0); }
static int E_A11(A11 a, A11 b) { rt_int n = rt_b_extent(1, a.lo, a.hi);
if (!rt_b_same_extents(1, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!E_R10(a.p[i], b.p[i])) return 0; return 1; }
static A11 C_A11(A11 s) { A11 d = s; 
rt_int n = rt_b_extent(1, s.lo, s.hi); d.p = rt_alloc((n > 0 ? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = C_R10(s.p[i]); return d; }
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
static void S_R7(R7 *d, R7 s, int any) {  rt_b_assign(&d->f_ARENA, s.f_ARENA); d->f_TOP = s.f_TOP; S_A8(&d->f_SRC, s.f_SRC, 0); d->f_NSRC = s.f_NSRC; d->f_LEXED = s.f_LEXED; d->f_LEXLINE = s.f_LEXLINE; S_R9(&d->f_LIBDIR, s.f_LIBDIR, 0); d->f_LIBSEGS = s.f_LIBSEGS; d->f_SUPPRESS = s.f_SUPPRESS; d->f_WORD = s.f_WORD; S_A11(&d->f_TOKS, s.f_TOKS, 0); d->f_NTOKS = s.f_NTOKS; d->f_POS = s.f_POS; S_A13(&d->f_TABLE, s.f_TABLE, 0); d->f_SCOPE = s.f_SCOPE; d->f_DEPTH = s.f_DEPTH; S_A16(&d->f_OUT, s.f_OUT, 0); S_R14(&d->f_CODE, s.f_CODE, 0); d->f_CTXS = s.f_CTXS; d->f_CS = s.f_CS; d->f_IS = s.f_IS; d->f_NSCOPES = s.f_NSCOPES; d->f_MODL = s.f_MODL; d->f_BINDS = s.f_BINDS; d->f_ROUNDED = s.f_ROUNDED; d->f_QUAL = s.f_QUAL; d->f_SQUAL = s.f_SQUAL; d->f_TYPECHECK = s.f_TYPECHECK; d->f_CHARSETS = s.f_CHARSETS; d->f_IN_RECORD = s.f_IN_RECORD; d->f_IN_TYPEDECL = s.f_IN_TYPEDECL; d->f_REPCONV = s.f_REPCONV; d->f_LDONE = s.f_LDONE; d->f_NEW_OK = s.f_NEW_OK; d->f_START_IO = s.f_START_IO; d->f_MACHINE = s.f_MACHINE; d->f_SERIAL = s.f_SERIAL; d->f_EXCS = s.f_EXCS; d->f_TY_INT = s.f_TY_INT; d->f_TY_BOOL = s.f_TY_BOOL; d->f_TY_STR = s.f_TY_STR; d->f_TY_VOID = s.f_TY_VOID; d->f_TY_NIL = s.f_TY_NIL; d->f_TY_ASCII = s.f_TY_ASCII; d->f_TY_FLOAT = s.f_TY_FLOAT; d->f_TY_BITS = s.f_TY_BITS; d->f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d->f_TY_TYPE = s.f_TY_TYPE; d->f_PENDING = s.f_PENDING; d->f_CNAMES = s.f_CNAMES; d->f_ENUMS = s.f_ENUMS; d->f_SEGS = s.f_SEGS; d->f_CURSEG = s.f_CURSEG; d->f_TRSEG = s.f_TRSEG; d->f_ARRAYS = s.f_ARRAYS; d->f_RECS = s.f_RECS; }
static int E_R7(R7 a, R7 b) { return 1 && rt_b_eq(a.f_ARENA, b.f_ARENA) && (a.f_TOP == b.f_TOP) && E_A8(a.f_SRC, b.f_SRC) && (a.f_NSRC == b.f_NSRC) && (a.f_LEXED == b.f_LEXED) && (a.f_LEXLINE == b.f_LEXLINE) && E_R9(a.f_LIBDIR, b.f_LIBDIR) && (a.f_LIBSEGS == b.f_LIBSEGS) && (a.f_SUPPRESS == b.f_SUPPRESS) && (a.f_WORD == b.f_WORD) && E_A11(a.f_TOKS, b.f_TOKS) && (a.f_NTOKS == b.f_NTOKS) && (a.f_POS == b.f_POS) && E_A13(a.f_TABLE, b.f_TABLE) && (a.f_SCOPE == b.f_SCOPE) && (a.f_DEPTH == b.f_DEPTH) && E_A16(a.f_OUT, b.f_OUT) && E_R14(a.f_CODE, b.f_CODE) && (a.f_CTXS == b.f_CTXS) && (a.f_CS == b.f_CS) && (a.f_IS == b.f_IS) && (a.f_NSCOPES == b.f_NSCOPES) && (a.f_MODL == b.f_MODL) && (a.f_BINDS == b.f_BINDS) && (a.f_ROUNDED == b.f_ROUNDED) && (a.f_QUAL == b.f_QUAL) && (a.f_SQUAL == b.f_SQUAL) && (a.f_TYPECHECK == b.f_TYPECHECK) && (a.f_CHARSETS == b.f_CHARSETS) && (a.f_IN_RECORD == b.f_IN_RECORD) && (a.f_IN_TYPEDECL == b.f_IN_TYPEDECL) && (a.f_REPCONV == b.f_REPCONV) && (a.f_LDONE == b.f_LDONE) && (a.f_NEW_OK == b.f_NEW_OK) && (a.f_START_IO == b.f_START_IO) && (a.f_MACHINE == b.f_MACHINE) && (a.f_SERIAL == b.f_SERIAL) && (a.f_EXCS == b.f_EXCS) && (a.f_TY_INT == b.f_TY_INT) && (a.f_TY_BOOL == b.f_TY_BOOL) && (a.f_TY_STR == b.f_TY_STR) && (a.f_TY_VOID == b.f_TY_VOID) && (a.f_TY_NIL == b.f_TY_NIL) && (a.f_TY_ASCII == b.f_TY_ASCII) && (a.f_TY_FLOAT == b.f_TY_FLOAT) && (a.f_TY_BITS == b.f_TY_BITS) && (a.f_TY_ROUNDINGS == b.f_TY_ROUNDINGS) && (a.f_TY_TYPE == b.f_TY_TYPE) && (a.f_PENDING == b.f_PENDING) && (a.f_CNAMES == b.f_CNAMES) && (a.f_ENUMS == b.f_ENUMS) && (a.f_SEGS == b.f_SEGS) && (a.f_CURSEG == b.f_CURSEG) && (a.f_TRSEG == b.f_TRSEG) && (a.f_ARRAYS == b.f_ARRAYS) && (a.f_RECS == b.f_RECS); }
static R7 C_R7(R7 s) { R7 d = s;
 d.f_ARENA = rt_str_copy(s.f_ARENA); d.f_TOP = s.f_TOP; d.f_SRC = C_A8(s.f_SRC); d.f_NSRC = s.f_NSRC; d.f_LEXED = s.f_LEXED; d.f_LEXLINE = s.f_LEXLINE; d.f_LIBDIR = C_R9(s.f_LIBDIR); d.f_LIBSEGS = s.f_LIBSEGS; d.f_SUPPRESS = s.f_SUPPRESS; d.f_WORD = s.f_WORD; d.f_TOKS = C_A11(s.f_TOKS); d.f_NTOKS = s.f_NTOKS; d.f_POS = s.f_POS; d.f_TABLE = C_A13(s.f_TABLE); d.f_SCOPE = s.f_SCOPE; d.f_DEPTH = s.f_DEPTH; d.f_OUT = C_A16(s.f_OUT); d.f_CODE = C_R14(s.f_CODE); d.f_CTXS = s.f_CTXS; d.f_CS = s.f_CS; d.f_IS = s.f_IS; d.f_NSCOPES = s.f_NSCOPES; d.f_MODL = s.f_MODL; d.f_BINDS = s.f_BINDS; d.f_ROUNDED = s.f_ROUNDED; d.f_QUAL = s.f_QUAL; d.f_SQUAL = s.f_SQUAL; d.f_TYPECHECK = s.f_TYPECHECK; d.f_CHARSETS = s.f_CHARSETS; d.f_IN_RECORD = s.f_IN_RECORD; d.f_IN_TYPEDECL = s.f_IN_TYPEDECL; d.f_REPCONV = s.f_REPCONV; d.f_LDONE = s.f_LDONE; d.f_NEW_OK = s.f_NEW_OK; d.f_START_IO = s.f_START_IO; d.f_MACHINE = s.f_MACHINE; d.f_SERIAL = s.f_SERIAL; d.f_EXCS = s.f_EXCS; d.f_TY_INT = s.f_TY_INT; d.f_TY_BOOL = s.f_TY_BOOL; d.f_TY_STR = s.f_TY_STR; d.f_TY_VOID = s.f_TY_VOID; d.f_TY_NIL = s.f_TY_NIL; d.f_TY_ASCII = s.f_TY_ASCII; d.f_TY_FLOAT = s.f_TY_FLOAT; d.f_TY_BITS = s.f_TY_BITS; d.f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d.f_TY_TYPE = s.f_TY_TYPE; d.f_PENDING = s.f_PENDING; d.f_CNAMES = s.f_CNAMES; d.f_ENUMS = s.f_ENUMS; d.f_SEGS = s.f_SEGS; d.f_CURSEG = s.f_CURSEG; d.f_TRSEG = s.f_TRSEG; d.f_ARRAYS = s.f_ARRAYS; d.f_RECS = s.f_RECS; return d; }
static void S_R23(R23 *d, R23 s, int any) {  d->f_OK = s.f_OK; d->f_V = s.f_V; }
static int E_R23(R23 a, R23 b) { return 1 && (a.f_OK == b.f_OK) && (a.f_V == b.f_V); }
static R23 C_R23(R23 s) { R23 d = s;
 d.f_OK = s.f_OK; d.f_V = s.f_V; return d; }
static void S_R26(R26 *d, R26 s, int any) {  S_R9(&d->f_C, s.f_C, 0); d->f_T = s.f_T; d->f_LVAL = s.f_LVAL; S_R9(&d->f_SELF, s.f_SELF, 0); }
static int E_R26(R26 a, R26 b) { return 1 && E_R9(a.f_C, b.f_C) && (a.f_T == b.f_T) && (a.f_LVAL == b.f_LVAL) && E_R9(a.f_SELF, b.f_SELF); }
static R26 C_R26(R26 s) { R26 d = s;
 d.f_C = C_R9(s.f_C); d.f_T = s.f_T; d.f_LVAL = s.f_LVAL; d.f_SELF = C_R9(s.f_SELF); return d; }
static void S_R17(R17 *d, R17 s, int any) {  d->f_KIND = s.f_KIND; d->f_LINE = s.f_LINE; d->f_IV = s.f_IV; S_R9(&d->f_NAME, s.f_NAME, 0); d->f_A = s.f_A; d->f_B = s.f_B; d->f_C = s.f_C; d->f_D = s.f_D; d->f_E = s.f_E; d->f_NEXT = s.f_NEXT; d->f_FL = s.f_FL; }
static int E_R17(R17 a, R17 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_LINE == b.f_LINE) && (a.f_IV == b.f_IV) && E_R9(a.f_NAME, b.f_NAME) && (a.f_A == b.f_A) && (a.f_B == b.f_B) && (a.f_C == b.f_C) && (a.f_D == b.f_D) && (a.f_E == b.f_E) && (a.f_NEXT == b.f_NEXT) && (a.f_FL == b.f_FL); }
static R17 C_R17(R17 s) { R17 d = s;
 d.f_KIND = s.f_KIND; d.f_LINE = s.f_LINE; d.f_IV = s.f_IV; d.f_NAME = C_R9(s.f_NAME); d.f_A = s.f_A; d.f_B = s.f_B; d.f_C = s.f_C; d.f_D = s.f_D; d.f_E = s.f_E; d.f_NEXT = s.f_NEXT; d.f_FL = s.f_FL; return d; }
static void S_R15(R15 *d, R15 s, int any) {  S_R9(&d->f_T, s.f_T, 0); d->f_NEXT = s.f_NEXT; }
static int E_R15(R15 a, R15 b) { return 1 && E_R9(a.f_T, b.f_T) && (a.f_NEXT == b.f_NEXT); }
static R15 C_R15(R15 s) { R15 d = s;
 d.f_T = C_R9(s.f_T); d.f_NEXT = s.f_NEXT; return d; }
static void S_R12(R12 *d, R12 s, int any) {  d->f_KIND = s.f_KIND; d->f_DEPTH = s.f_DEPTH; d->f_LEVEL = s.f_LEVEL; S_R9(&d->f_NAME, s.f_NAME, 0); d->f_T = s.f_T; S_R9(&d->f_ACCESS, s.f_ACCESS, 0); S_R9(&d->f_FIELD, s.f_FIELD, 0); d->f_INPUT = s.f_INPUT; d->f_BYREF = s.f_BYREF; d->f_HASMV = s.f_HASMV; d->f_MV = s.f_MV; d->f_TS = s.f_TS; d->f_BUSY = s.f_BUSY; S_R9(&d->f_FWD, s.f_FWD, 0); d->f_PARAMS = s.f_PARAMS; d->f_RESULT = s.f_RESULT; d->f_DECL = s.f_DECL; S_R9(&d->f_PREFIX, s.f_PREFIX, 0); d->f_MODL = s.f_MODL; d->f_EXPORTED = s.f_EXPORTED; d->f_GENERIC = s.f_GENERIC; d->f_FRAMED = s.f_FRAMED; d->f_USES = s.f_USES; d->f_INSTANCES = s.f_INSTANCES; d->f_BINDINGS = s.f_BINDINGS; d->f_ORIG = s.f_ORIG; d->f_MEMBERS = s.f_MEMBERS; d->f_SAVED = s.f_SAVED; d->f_OWNER = s.f_OWNER; d->f_WITHV = s.f_WITHV; d->f_LAZY = s.f_LAZY; d->f_SEGM = s.f_SEGM; d->f_HOME = s.f_HOME; d->f_CHAIN = s.f_CHAIN; d->f_SNEXT = s.f_SNEXT; }
static int E_R12(R12 a, R12 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_DEPTH == b.f_DEPTH) && (a.f_LEVEL == b.f_LEVEL) && E_R9(a.f_NAME, b.f_NAME) && (a.f_T == b.f_T) && E_R9(a.f_ACCESS, b.f_ACCESS) && E_R9(a.f_FIELD, b.f_FIELD) && (a.f_INPUT == b.f_INPUT) && (a.f_BYREF == b.f_BYREF) && (a.f_HASMV == b.f_HASMV) && (a.f_MV == b.f_MV) && (a.f_TS == b.f_TS) && (a.f_BUSY == b.f_BUSY) && E_R9(a.f_FWD, b.f_FWD) && (a.f_PARAMS == b.f_PARAMS) && (a.f_RESULT == b.f_RESULT) && (a.f_DECL == b.f_DECL) && E_R9(a.f_PREFIX, b.f_PREFIX) && (a.f_MODL == b.f_MODL) && (a.f_EXPORTED == b.f_EXPORTED) && (a.f_GENERIC == b.f_GENERIC) && (a.f_FRAMED == b.f_FRAMED) && (a.f_USES == b.f_USES) && (a.f_INSTANCES == b.f_INSTANCES) && (a.f_BINDINGS == b.f_BINDINGS) && (a.f_ORIG == b.f_ORIG) && (a.f_MEMBERS == b.f_MEMBERS) && (a.f_SAVED == b.f_SAVED) && (a.f_OWNER == b.f_OWNER) && (a.f_WITHV == b.f_WITHV) && (a.f_LAZY == b.f_LAZY) && (a.f_SEGM == b.f_SEGM) && (a.f_HOME == b.f_HOME) && (a.f_CHAIN == b.f_CHAIN) && (a.f_SNEXT == b.f_SNEXT); }
static R12 C_R12(R12 s) { R12 d = s;
 d.f_KIND = s.f_KIND; d.f_DEPTH = s.f_DEPTH; d.f_LEVEL = s.f_LEVEL; d.f_NAME = C_R9(s.f_NAME); d.f_T = s.f_T; d.f_ACCESS = C_R9(s.f_ACCESS); d.f_FIELD = C_R9(s.f_FIELD); d.f_INPUT = s.f_INPUT; d.f_BYREF = s.f_BYREF; d.f_HASMV = s.f_HASMV; d.f_MV = s.f_MV; d.f_TS = s.f_TS; d.f_BUSY = s.f_BUSY; d.f_FWD = C_R9(s.f_FWD); d.f_PARAMS = s.f_PARAMS; d.f_RESULT = s.f_RESULT; d.f_DECL = s.f_DECL; d.f_PREFIX = C_R9(s.f_PREFIX); d.f_MODL = s.f_MODL; d.f_EXPORTED = s.f_EXPORTED; d.f_GENERIC = s.f_GENERIC; d.f_FRAMED = s.f_FRAMED; d.f_USES = s.f_USES; d.f_INSTANCES = s.f_INSTANCES; d.f_BINDINGS = s.f_BINDINGS; d.f_ORIG = s.f_ORIG; d.f_MEMBERS = s.f_MEMBERS; d.f_SAVED = s.f_SAVED; d.f_OWNER = s.f_OWNER; d.f_WITHV = s.f_WITHV; d.f_LAZY = s.f_LAZY; d.f_SEGM = s.f_SEGM; d.f_HOME = s.f_HOME; d.f_CHAIN = s.f_CHAIN; d.f_SNEXT = s.f_SNEXT; return d; }
static void S_R19(R19 *d, R19 s, int any) {  d->f_LEVEL = s.f_LEVEL; d->f_R = s.f_R; d->f_FRAMED = s.f_FRAMED; S_R9(&d->f_FTYPE, s.f_FTYPE, 0); S_R14(&d->f_FIELDS, s.f_FIELDS, 0); d->f_UP = s.f_UP; d->f_IMPORTS = s.f_IMPORTS; d->f_SIGNALS = s.f_SIGNALS; d->f_RESULT = s.f_RESULT; d->f_IS_PATH = s.f_IS_PATH; S_R9(&d->f_COPYOUT, s.f_COPYOUT, 0); }
static int E_R19(R19 a, R19 b) { return 1 && (a.f_LEVEL == b.f_LEVEL) && (a.f_R == b.f_R) && (a.f_FRAMED == b.f_FRAMED) && E_R9(a.f_FTYPE, b.f_FTYPE) && E_R14(a.f_FIELDS, b.f_FIELDS) && (a.f_UP == b.f_UP) && (a.f_IMPORTS == b.f_IMPORTS) && (a.f_SIGNALS == b.f_SIGNALS) && (a.f_RESULT == b.f_RESULT) && (a.f_IS_PATH == b.f_IS_PATH) && E_R9(a.f_COPYOUT, b.f_COPYOUT); }
static R19 C_R19(R19 s) { R19 d = s;
 d.f_LEVEL = s.f_LEVEL; d.f_R = s.f_R; d.f_FRAMED = s.f_FRAMED; d.f_FTYPE = C_R9(s.f_FTYPE); d.f_FIELDS = C_R14(s.f_FIELDS); d.f_UP = s.f_UP; d.f_IMPORTS = s.f_IMPORTS; d.f_SIGNALS = s.f_SIGNALS; d.f_RESULT = s.f_RESULT; d.f_IS_PATH = s.f_IS_PATH; d.f_COPYOUT = C_R9(s.f_COPYOUT); return d; }
static void S_R20(R20 *d, R20 s, int any) {  d->f_ID = s.f_ID; d->f_IMPORTS = s.f_IMPORTS; d->f_SIGNALS = s.f_SIGNALS; S_R9(&d->f_NAME, s.f_NAME, 0); d->f_UP = s.f_UP; }
static int E_R20(R20 a, R20 b) { return 1 && (a.f_ID == b.f_ID) && (a.f_IMPORTS == b.f_IMPORTS) && (a.f_SIGNALS == b.f_SIGNALS) && E_R9(a.f_NAME, b.f_NAME) && (a.f_UP == b.f_UP); }
static R20 C_R20(R20 s) { R20 d = s;
 d.f_ID = s.f_ID; d.f_IMPORTS = s.f_IMPORTS; d.f_SIGNALS = s.f_SIGNALS; d.f_NAME = C_R9(s.f_NAME); d.f_UP = s.f_UP; return d; }
static void S_R22(R22 *d, R22 s, int any) {  d->f_KIND = s.f_KIND; d->f_SCALE = s.f_SCALE; S_R9(&d->f_LO_C, s.f_LO_C, 0); S_R9(&d->f_HI_C, s.f_HI_C, 0); S_R23(&d->f_MLO, s.f_MLO, 0); S_R23(&d->f_MHI, s.f_MHI, 0); d->f_RLEVEL = s.f_RLEVEL; S_R9(&d->f_LEN_C, s.f_LEN_C, 0); S_R23(&d->f_MLEN, s.f_MLEN, 0); S_R9(&d->f_GEN, s.f_GEN, 0); d->f_BASE = s.f_BASE; d->f_ELEM = s.f_ELEM; d->f_TARGET = s.f_TARGET; d->f_TARGET_TS = s.f_TARGET_TS; d->f_FIELDS = s.f_FIELDS; d->f_LITS = s.f_LITS; d->f_NLITS = s.f_NLITS; d->f_UNORDERED = s.f_UNORDERED; d->f_BOUNDS = s.f_BOUNDS; d->f_DIMS = s.f_DIMS; d->f_ARGS = s.f_ARGS; S_R9(&d->f_NAME, s.f_NAME, 0); S_R9(&d->f_CNAME, s.f_CNAME, 0); d->f_MODL = s.f_MODL; d->f_REPS = s.f_REPS; d->f_DECL = s.f_DECL; S_R9(&d->f_GENP, s.f_GENP, 0); }
static int E_R22(R22 a, R22 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_SCALE == b.f_SCALE) && E_R9(a.f_LO_C, b.f_LO_C) && E_R9(a.f_HI_C, b.f_HI_C) && E_R23(a.f_MLO, b.f_MLO) && E_R23(a.f_MHI, b.f_MHI) && (a.f_RLEVEL == b.f_RLEVEL) && E_R9(a.f_LEN_C, b.f_LEN_C) && E_R23(a.f_MLEN, b.f_MLEN) && E_R9(a.f_GEN, b.f_GEN) && (a.f_BASE == b.f_BASE) && (a.f_ELEM == b.f_ELEM) && (a.f_TARGET == b.f_TARGET) && (a.f_TARGET_TS == b.f_TARGET_TS) && (a.f_FIELDS == b.f_FIELDS) && (a.f_LITS == b.f_LITS) && (a.f_NLITS == b.f_NLITS) && (a.f_UNORDERED == b.f_UNORDERED) && (a.f_BOUNDS == b.f_BOUNDS) && (a.f_DIMS == b.f_DIMS) && (a.f_ARGS == b.f_ARGS) && E_R9(a.f_NAME, b.f_NAME) && E_R9(a.f_CNAME, b.f_CNAME) && (a.f_MODL == b.f_MODL) && (a.f_REPS == b.f_REPS) && (a.f_DECL == b.f_DECL) && E_R9(a.f_GENP, b.f_GENP); }
static R22 C_R22(R22 s) { R22 d = s;
 d.f_KIND = s.f_KIND; d.f_SCALE = s.f_SCALE; d.f_LO_C = C_R9(s.f_LO_C); d.f_HI_C = C_R9(s.f_HI_C); d.f_MLO = C_R23(s.f_MLO); d.f_MHI = C_R23(s.f_MHI); d.f_RLEVEL = s.f_RLEVEL; d.f_LEN_C = C_R9(s.f_LEN_C); d.f_MLEN = C_R23(s.f_MLEN); d.f_GEN = C_R9(s.f_GEN); d.f_BASE = s.f_BASE; d.f_ELEM = s.f_ELEM; d.f_TARGET = s.f_TARGET; d.f_TARGET_TS = s.f_TARGET_TS; d.f_FIELDS = s.f_FIELDS; d.f_LITS = s.f_LITS; d.f_NLITS = s.f_NLITS; d.f_UNORDERED = s.f_UNORDERED; d.f_BOUNDS = s.f_BOUNDS; d.f_DIMS = s.f_DIMS; d.f_ARGS = s.f_ARGS; d.f_NAME = C_R9(s.f_NAME); d.f_CNAME = C_R9(s.f_CNAME); d.f_MODL = s.f_MODL; d.f_REPS = s.f_REPS; d.f_DECL = s.f_DECL; d.f_GENP = C_R9(s.f_GENP); return d; }
static void S_R21(R21 *d, R21 s, int any) {  S_R9(&d->f_NAME, s.f_NAME, 0); d->f_T = s.f_T; S_R9(&d->f_C, s.f_C, 0); d->f_HASMV = s.f_HASMV; d->f_MV = s.f_MV; d->f_R = s.f_R; d->f_NEXT = s.f_NEXT; }
static int E_R21(R21 a, R21 b) { return 1 && E_R9(a.f_NAME, b.f_NAME) && (a.f_T == b.f_T) && E_R9(a.f_C, b.f_C) && (a.f_HASMV == b.f_HASMV) && (a.f_MV == b.f_MV) && (a.f_R == b.f_R) && (a.f_NEXT == b.f_NEXT); }
static R21 C_R21(R21 s) { R21 d = s;
 d.f_NAME = C_R9(s.f_NAME); d.f_T = s.f_T; d.f_C = C_R9(s.f_C); d.f_HASMV = s.f_HASMV; d.f_MV = s.f_MV; d.f_R = s.f_R; d.f_NEXT = s.f_NEXT; return d; }
static void S_R25(R25 *d, R25 s, int any) {  S_R9(&d->f_LO, s.f_LO, 0); S_R9(&d->f_HI, s.f_HI, 0); S_R23(&d->f_MLO, s.f_MLO, 0); S_R23(&d->f_MHI, s.f_MHI, 0); d->f_ANYARG = s.f_ANYARG; d->f_NEXT = s.f_NEXT; }
static int E_R25(R25 a, R25 b) { return 1 && E_R9(a.f_LO, b.f_LO) && E_R9(a.f_HI, b.f_HI) && E_R23(a.f_MLO, b.f_MLO) && E_R23(a.f_MHI, b.f_MHI) && (a.f_ANYARG == b.f_ANYARG) && (a.f_NEXT == b.f_NEXT); }
static R25 C_R25(R25 s) { R25 d = s;
 d.f_LO = C_R9(s.f_LO); d.f_HI = C_R9(s.f_HI); d.f_MLO = C_R23(s.f_MLO); d.f_MHI = C_R23(s.f_MHI); d.f_ANYARG = s.f_ANYARG; d.f_NEXT = s.f_NEXT; return d; }
static void S_R24(R24 *d, R24 s, int any) {  S_R9(&d->f_NAME, s.f_NAME, 0); S_R9(&d->f_CNAME, s.f_CNAME, 0); d->f_T = s.f_T; d->f_KIND = s.f_KIND; S_R9(&d->f_TAGF, s.f_TAGF, 0); d->f_LABELS = s.f_LABELS; d->f_NEXT = s.f_NEXT; }
static int E_R24(R24 a, R24 b) { return 1 && E_R9(a.f_NAME, b.f_NAME) && E_R9(a.f_CNAME, b.f_CNAME) && (a.f_T == b.f_T) && (a.f_KIND == b.f_KIND) && E_R9(a.f_TAGF, b.f_TAGF) && (a.f_LABELS == b.f_LABELS) && (a.f_NEXT == b.f_NEXT); }
static R24 C_R24(R24 s) { R24 d = s;
 d.f_NAME = C_R9(s.f_NAME); d.f_CNAME = C_R9(s.f_CNAME); d.f_T = s.f_T; d.f_KIND = s.f_KIND; d.f_TAGF = C_R9(s.f_TAGF); d.f_LABELS = s.f_LABELS; d.f_NEXT = s.f_NEXT; return d; }
static void S_R27(R27 *d, R27 s, int any) {  d->f_E = s.f_E; S_R26(&d->f_V, s.f_V, 0); d->f_HAVE = s.f_HAVE; d->f_MODE = s.f_MODE; d->f_NEXT = s.f_NEXT; }
static int E_R27(R27 a, R27 b) { return 1 && (a.f_E == b.f_E) && E_R26(a.f_V, b.f_V) && (a.f_HAVE == b.f_HAVE) && (a.f_MODE == b.f_MODE) && (a.f_NEXT == b.f_NEXT); }
static R27 C_R27(R27 s) { R27 d = s;
 d.f_E = s.f_E; d.f_V = C_R26(s.f_V); d.f_HAVE = s.f_HAVE; d.f_MODE = s.f_MODE; d.f_NEXT = s.f_NEXT; return d; }
static void S_R28(R28 *d, R28 s, int any) {  S_R9(&d->f_NAME, s.f_NAME, 0); d->f_MODE = s.f_MODE; d->f_T = s.f_T; d->f_TS = s.f_TS; d->f_NEXT = s.f_NEXT; }
static int E_R28(R28 a, R28 b) { return 1 && E_R9(a.f_NAME, b.f_NAME) && (a.f_MODE == b.f_MODE) && (a.f_T == b.f_T) && (a.f_TS == b.f_TS) && (a.f_NEXT == b.f_NEXT); }
static R28 C_R28(R28 s) { R28 d = s;
 d.f_NAME = C_R9(s.f_NAME); d.f_MODE = s.f_MODE; d.f_T = s.f_T; d.f_TS = s.f_TS; d.f_NEXT = s.f_NEXT; return d; }
static void S_R18(R18 *d, R18 s, int any) {  d->f_KIND = s.f_KIND; S_R9(&d->f_NAME, s.f_NAME, 0); d->f_HANDLERS = s.f_HANDLERS; d->f_NEXT = s.f_NEXT; }
static int E_R18(R18 a, R18 b) { return 1 && (a.f_KIND == b.f_KIND) && E_R9(a.f_NAME, b.f_NAME) && (a.f_HANDLERS == b.f_HANDLERS) && (a.f_NEXT == b.f_NEXT); }
static R18 C_R18(R18 s) { R18 d = s;
 d.f_KIND = s.f_KIND; d.f_NAME = C_R9(s.f_NAME); d.f_HANDLERS = s.f_HANDLERS; d.f_NEXT = s.f_NEXT; return d; }
static rstr r_CHAR_OF(rt_int p_C) { RT_B_TICK(); 
if (({ rt_int iv35 = p_C; (((rt_int)32LL) <= iv35) && (iv35 <= ((rt_int)126LL)); }))
{
{ rstr rv36 = rt_b_slice(g_GRAPHIC, rt_sub(p_C, ((rt_int)32LL)), rt_sub(p_C, ((rt_int)32LL)));
return rv36; }
}
{
rt_int l_N_37; memset(&l_N_37, 0, sizeof l_N_37);
l_N_37 = (rt_int)(8);
rstr l_B_38; memset(&l_B_38, 0, sizeof l_B_38);
l_B_38 = rt_b_str_new(((rt_int)8LL), 1);
rt_b_assign(&l_B_38, rt_b_zeros(l_N_37));
rt_int l_V_39; memset(&l_V_39, 0, sizeof l_V_39);
l_V_39 = p_C;
{ rt_int it41_lo = ((rt_int)0LL), it41_hi = rt_sub(l_N_37, ((rt_int)1LL));
for (rt_int it41 = it41_lo; it41 <= it41_hi; it41++) {
{
if ((rt_rem(l_V_39, ((rt_int)2LL)) == ((rt_int)1LL)))
{
rt_b_slice_assign(&l_B_38, rt_sub(rt_sub(l_N_37, ((rt_int)1LL)), it41), rt_sub(rt_sub(l_N_37, ((rt_int)1LL)), it41), rt_str("1", 1));
}
l_V_39 = rt_quot(l_V_39, ((rt_int)2LL));
}
RT_B_TICK();
if (it41 == it41_hi) break;
} } L_end40: ;
if ((l_V_39 == ((rt_int)0LL)))
{
{
{ rstr rv42 = rt_b_chars_of_bits(l_B_38, 7, 1, NULL, 128);
return rv42; }
}
}
}
{ rstr rv43 = rt_str("\?", 1);
return rv43; }
rt_raise(RT_X_INIT);
}
static rt_int r_CODE_OF(rstr p_S) { RT_B_TICK(); 
{ rt_int rv44 = rt_b_int_of_bits(rt_b_bits_of_chars(p_S, 7, 1, NULL, 128));
return rv44; }
rt_raise(RT_X_INIT);
}
static rt_int r_HASH_CODES(rt_int p_L, rt_int p_C1, rt_int p_C2, rt_int p_C3) { RT_B_TICK(); 
{ rt_int rv45 = rt_rem((rt_add(rt_add(rt_add(rt_mul(p_L, ((rt_int)31LL)), rt_mul(p_C1, ((rt_int)7LL))), rt_mul(p_C2, ((rt_int)3LL))), p_C3)), g_HASH_SIZE);
return rv45; }
rt_raise(RT_X_INIT);
}
static rt_int r_HASH_OF(rstr p_S) { RT_B_TICK(); 
if (((rt_int)(p_S).len == ((rt_int)0LL)))
{
{ rt_int rv46 = ((rt_int)0LL);
return rv46; }
}
{ rt_int rv47 = r_HASH_CODES((rt_int)(p_S).len, r_CODE_OF(rt_b_slice(p_S, ((rt_int)0LL), ((rt_int)0LL))), r_CODE_OF(rt_b_slice(p_S, rt_quot((rt_int)(p_S).len, ((rt_int)2LL)), rt_quot((rt_int)(p_S).len, ((rt_int)2LL)))), r_CODE_OF(rt_b_slice(p_S, rt_sub((rt_int)(p_S).len, ((rt_int)1LL)), rt_sub((rt_int)(p_S).len, ((rt_int)1LL)))));
return rv47; }
rt_raise(RT_X_INIT);
}
static R9 r_MK(rstr p_S) { RT_B_TICK(); 
rt_int l_AT_48; memset(&l_AT_48, 0, sizeof l_AT_48);
l_AT_48 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
if ((rt_add(l_AT_48, (rt_int)(p_S).len) > g_ARENA_SIZE))
{
rt_putln(rt_str("*** the arena is full", 21));
rt_exit(((rt_int)2LL));
}
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, l_AT_48, rt_sub(rt_add(l_AT_48, (rt_int)(p_S).len), ((rt_int)1LL)), p_S);
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(l_AT_48, (rt_int)(p_S).len);
{ R9 rv49 = ({ R9 rc50; memset(&rc50, 0, sizeof rc50);  rc50.f_AT = l_AT_48; rc50.f_LEN = (rt_int)(p_S).len; rc50.f_H = rt_neg(((rt_int)1LL)); rc50; });
return rv49; }
rt_raise(RT_X_INIT);
}
static R9 r_MKN(rstr p_S) { RT_B_TICK(); 
R9 l_T_51; memset(&l_T_51, 0, sizeof l_T_51);
S_R9(&l_T_51, r_MK(p_S), 0);
(l_T_51).f_H = r_HASH_OF(p_S);
{ R9 rv52 = l_T_51;
return rv52; }
rt_raise(RT_X_INIT);
}
static rstr r_STR(R9 p_T, rt_int p_L) { RT_B_TICK(); 
{ rstr rv53 = rt_b_slice(((*(R7 *)rt_nil_check(g_W))).f_ARENA, (p_T).f_AT, rt_sub(rt_add((p_T).f_AT, p_L), ((rt_int)1LL)));
return rv53; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEQ(R9 p_A, R9 p_B) { RT_B_TICK(); 
if ((!((p_A).f_LEN == (p_B).f_LEN)))
{
{ rt_int rv54 = 0;
return rv54; }
}
{ rt_int rv55 = rt_b_eq(r_STR(p_A, (p_A).f_LEN), r_STR(p_B, (p_B).f_LEN));
return rv55; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEQS(R9 p_A, rstr p_S) { RT_B_TICK(); 
if ((!((p_A).f_LEN == (rt_int)(p_S).len)))
{
{ rt_int rv56 = 0;
return rv56; }
}
{ rt_int rv57 = rt_b_eq(r_STR(p_A, (p_A).f_LEN), p_S);
return rv57; }
rt_raise(RT_X_INIT);
}
static R9 r_CAT(R9 p_A, R9 p_B) { RT_B_TICK(); 
{ R9 rv58 = r_MK(rt_b_cat(r_STR(p_A, (p_A).f_LEN), r_STR(p_B, (p_B).f_LEN)));
return rv58; }
rt_raise(RT_X_INIT);
}
static R9 r_CATS(R9 p_A, rstr p_S) { RT_B_TICK(); 
{ R9 rv59 = r_MK(rt_b_cat(r_STR(p_A, (p_A).f_LEN), p_S));
return rv59; }
rt_raise(RT_X_INIT);
}
static R9 r_FMT4(rstr p_P, R9 p_A, R9 p_B, R9 p_C, R9 p_D) { RT_B_TICK(); 
rt_int l_AT_60; memset(&l_AT_60, 0, sizeof l_AT_60);
l_AT_60 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_N_61; memset(&l_N_61, 0, sizeof l_N_61);
l_N_61 = ((rt_int)0LL);
rt_int l_START_62; memset(&l_START_62, 0, sizeof l_START_62);
l_START_62 = ((rt_int)0LL);
R9 l_R_63; memset(&l_R_63, 0, sizeof l_R_63);
{ rt_int it65_lo = ((rt_int)0LL), it65_hi = rt_sub((rt_int)(p_P).len, ((rt_int)1LL));
for (rt_int it65 = it65_lo; it65 <= it65_hi; it65++) {
{
if (rt_b_eq(rt_b_slice(p_P, it65, it65), rt_str("@", 1)))
{
S_R9(&l_R_63, r_MK(rt_b_slice(p_P, l_START_62, rt_sub(it65, ((rt_int)1LL)))), 0);
switch (l_N_61) {
case 0:
{
S_R9(&l_R_63, r_MK(r_STR(p_A, (p_A).f_LEN)), 0);
}
break;
case 1:
{
S_R9(&l_R_63, r_MK(r_STR(p_B, (p_B).f_LEN)), 0);
}
break;
case 2:
{
S_R9(&l_R_63, r_MK(r_STR(p_C, (p_C).f_LEN)), 0);
}
break;
default:
{
S_R9(&l_R_63, r_MK(r_STR(p_D, (p_D).f_LEN)), 0);
}
break;
}
l_N_61 = rt_add(l_N_61, ((rt_int)1LL));
l_START_62 = rt_add(it65, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it65 == it65_hi) break;
} } L_end64: ;
S_R9(&l_R_63, r_MK(rt_b_slice(p_P, l_START_62, rt_sub((rt_int)(p_P).len, ((rt_int)1LL)))), 0);
{ R9 rv66 = ({ R9 rc67; memset(&rc67, 0, sizeof rc67);  rc67.f_AT = l_AT_60; rc67.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_60); rc67.f_H = rt_neg(((rt_int)1LL)); rc67; });
return rv66; }
rt_raise(RT_X_INIT);
}
static R9 r_FMT1(rstr p_P, R9 p_A) { RT_B_TICK(); 
{ R9 rv68 = r_FMT4(p_P, p_A, p_A, p_A, p_A);
return rv68; }
rt_raise(RT_X_INIT);
}
static R9 r_FMT2(rstr p_P, R9 p_A, R9 p_B) { RT_B_TICK(); 
{ R9 rv69 = r_FMT4(p_P, p_A, p_B, p_B, p_B);
return rv69; }
rt_raise(RT_X_INIT);
}
static R9 r_FMT3(rstr p_P, R9 p_A, R9 p_B, R9 p_C) { RT_B_TICK(); 
{ R9 rv70 = r_FMT4(p_P, p_A, p_B, p_C, p_C);
return rv70; }
rt_raise(RT_X_INIT);
}
static R9 r_NUM(rt_int p_V) { RT_B_TICK(); 
{ R9 rv71 = r_MK(rt_b_image(p_V));
return rv71; }
rt_raise(RT_X_INIT);
}
static R9 r_CID(R9 p_T) { RT_B_TICK(); 
rstr l_S_72; memset(&l_S_72, 0, sizeof l_S_72);
l_S_72 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_72, r_STR(p_T, (p_T).f_LEN));
R9 l_R_73; memset(&l_R_73, 0, sizeof l_R_73);
if (((p_T).f_LEN == ((rt_int)0LL)))
{
{ R9 rv74 = p_T;
return rv74; }
}
if (((!rt_b_eq(rt_b_slice(l_S_72, ((rt_int)0LL), ((rt_int)0LL)), rt_str("\\", 1))) && (!rt_b_eq(rt_b_slice(l_S_72, ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1)))))
{
{ R9 rv75 = p_T;
return rv75; }
}
if (rt_b_eq(rt_b_slice(l_S_72, ((rt_int)0LL), ((rt_int)0LL)), rt_str("\\", 1)))
{
S_R9(&l_R_73, r_MK(rt_str("bs_", 3)), 0);
}
else
{
S_R9(&l_R_73, r_MK(rt_str("qm_", 3)), 0);
}
if (((p_T).f_LEN == ((rt_int)1LL)))
{
{ R9 rv76 = l_R_73;
return rv76; }
}
{ R9 rv77 = r_CATS(l_R_73, rt_b_slice(l_S_72, ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv77; }
rt_raise(RT_X_INIT);
}
static R9 r_NEW_NAME(rstr p_BASE) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_SERIAL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_SERIAL, ((rt_int)1LL));
{ R9 rv78 = r_MK(rt_b_cat(p_BASE, rt_b_image(((*(R7 *)rt_nil_check(g_W))).f_SERIAL)));
return rv78; }
rt_raise(RT_X_INIT);
}
static void r_APPEND(R9 p_T, R14 *p_B) { RT_B_TICK(); 
R15 * l_C_79; memset(&l_C_79, 0, sizeof l_C_79);
l_C_79 = ((R15 *)rt_b_new(sizeof (R15)));
S_R9(&((*(R15 *)rt_nil_check(l_C_79))).f_T, p_T, 0);
((*(R15 *)rt_nil_check(l_C_79))).f_NEXT = NULL;
if ((((*p_B)).f_TAIL == NULL))
{
((*p_B)).f_HEAD = l_C_79;
}
else
{
((*(R15 *)rt_nil_check(((*p_B)).f_TAIL))).f_NEXT = l_C_79;
}
((*p_B)).f_TAIL = l_C_79;
}
static void r_EMIT(rt_int p_SEC, R9 p_T) { RT_B_TICK(); 
r_APPEND(p_T, &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(p_SEC, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
}
static void r_EMITS(rt_int p_SEC, rstr p_S) { RT_B_TICK(); 
r_APPEND(r_MK(p_S), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(p_SEC, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
}
static void r_CODE(R9 p_T) { RT_B_TICK(); 
r_APPEND(p_T, &((*(R7 *)rt_nil_check(g_W))).f_CODE);
}
static void r_CODES(rstr p_S) { RT_B_TICK(); 
r_APPEND(r_MK(p_S), &((*(R7 *)rt_nil_check(g_W))).f_CODE);
}
static void r_PUT_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_80; memset(&l_C_80, 0, sizeof l_C_80);
l_C_80 = (p_B).f_HEAD;
for (;;) {
if ((l_C_80 == NULL)) goto L_end81;
{
{
R9 l_T_82; memset(&l_T_82, 0, sizeof l_T_82);
S_R9(&l_T_82, ((*(R15 *)rt_nil_check(l_C_80))).f_T, 0);
rt_putln(r_STR(l_T_82, (l_T_82).f_LEN));
}
l_C_80 = ((*(R15 *)rt_nil_check(l_C_80))).f_NEXT;
}
RT_B_TICK();
} L_end81: ;
}
static void r_WRITE_OUTPUT(void) { RT_B_TICK(); 
{ rt_int it84_lo = ((rt_int)0LL), it84_hi = g_O_LAST;
for (rt_int it84 = it84_lo; it84 <= it84_hi; it84++) {
{
r_PUT_BUF((((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(it84, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
}
RT_B_TICK();
if (it84 == it84_hi) break;
} } L_end83: ;
}
static void r_FAIL(rt_int p_LINE, rstr p_MSG) { RT_B_TICK(); 
rt_putln(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("line ", 5), rt_b_image(p_LINE)), rt_str(": ", 2)), p_MSG));
rt_exit(((rt_int)1LL));
}
static void r_FAILT(rt_int p_LINE, rstr p_MSG, R9 p_T) { RT_B_TICK(); 
r_FAIL(p_LINE, rt_b_cat(p_MSG, r_STR(p_T, (p_T).f_LEN)));
}
static void r_READ_SOURCE(void) { RT_B_TICK(); 
rt_int l_C_85; memset(&l_C_85, 0, sizeof l_C_85);
l_C_85 = rt_b_get_code();
for (;;) {
if ((l_C_85 < ((rt_int)0LL))) goto L_end86;
{
if ((((*(R7 *)rt_nil_check(g_W))).f_NSRC >= g_MAX_SOURCE))
{
r_FAIL(((rt_int)0LL), rt_str("the source is too long", 22));
}
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = l_C_85;
((*(R7 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
l_C_85 = rt_b_get_code();
}
RT_B_TICK();
} L_end86: ;
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = ((rt_int)0LL);
}
static rt_int r_AT_SRC(rt_int p_I) { RT_B_TICK(); 
if ((p_I >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC))
{
{ rt_int rv87 = ((rt_int)0LL);
return rv87; }
}
{ rt_int rv88 = (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(p_I, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])];
return rv88; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LETTER(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv89 = ({ rt_int iv90 = p_C; (((rt_int)65LL) <= iv90) && (iv90 <= ((rt_int)90LL)); });
return rv89; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_DIGIT(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv91 = ({ rt_int iv92 = p_C; (((rt_int)48LL) <= iv92) && (iv92 <= ((rt_int)57LL)); });
return rv91; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_IDCHAR(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv93 = ((r_IS_LETTER(p_C) || r_IS_DIGIT(p_C)) || (p_C == ((rt_int)95LL)));
return rv93; }
rt_raise(RT_X_INIT);
}
static R9 r_SOURCE_TEXT(rt_int p_FIRST, rt_int p_BEYOND) { RT_B_TICK(); 
rt_int l_AT_94; memset(&l_AT_94, 0, sizeof l_AT_94);
l_AT_94 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_L_95; memset(&l_L_95, 0, sizeof l_L_95);
l_L_95 = rt_sub(p_BEYOND, p_FIRST);
R9 l_T_96; memset(&l_T_96, 0, sizeof l_T_96);
if ((rt_add(l_AT_94, l_L_95) > g_ARENA_SIZE))
{
r_FAIL(((rt_int)0LL), rt_str("the arena is full", 17));
}
{ rt_int it98_lo = p_FIRST, it98_hi = rt_sub(p_BEYOND, ((rt_int)1LL));
for (rt_int it98 = it98_lo; it98 <= it98_hi; it98++) {
{
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, ((*(R7 *)rt_nil_check(g_W))).f_TOP, ((*(R7 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(it98, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]));
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R7 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
}
RT_B_TICK();
if (it98 == it98_hi) break;
} } L_end97: ;
S_R9(&l_T_96, ({ R9 rc99; memset(&rc99, 0, sizeof rc99);  rc99.f_AT = l_AT_94; rc99.f_LEN = l_L_95; rc99.f_H = ((rt_int)0LL); rc99; }), 0);
if ((l_L_95 > ((rt_int)0LL)))
{
(l_T_96).f_H = r_HASH_CODES(l_L_95, (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(p_FIRST, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])], (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(rt_add(p_FIRST, rt_quot(l_L_95, ((rt_int)2LL))), (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])], (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(rt_sub(p_BEYOND, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]);
}
{ R9 rv100 = l_T_96;
return rv100; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_RESERVED(R9 p_T) { RT_B_TICK(); 
rstr l_WORDS_101; memset(&l_WORDS_101, 0, sizeof l_WORDS_101);
l_WORDS_101 = rt_b_str_new(((rt_int)290LL), 0);
rt_b_assign(&l_WORDS_101, rt_str(" AND ANY ARRAY ASSERT BIN BLOCK CONST DO ELSE END EXCEPT EXIT FALSE FOR FROM FUNCTION GO HEX IF IN INLINE LOOP MAIN MOD MODULE NAMING NEEDS NIL NOT OCT OF OR ORIF PAR_BLOCK PATH PROCEDURE RECORD REP RETURN SEGMENT SELECT SIGNAL TAG TERMINATE THEN TO TRUE TYPE UNTIL VAR WHEN WHERE WITH XOR ", 290));
rt_int l_L_102; memset(&l_L_102, 0, sizeof l_L_102);
l_L_102 = (p_T).f_LEN;
{ rt_int it104_lo = ((rt_int)0LL), it104_hi = rt_sub(rt_sub(((rt_int)290LL), l_L_102), ((rt_int)2LL));
for (rt_int it104 = it104_lo; it104 <= it104_hi; it104++) {
{
if (rt_b_eq(rt_b_slice(l_WORDS_101, it104, it104), rt_str(" ", 1)))
{
if (rt_b_eq(rt_b_slice(l_WORDS_101, rt_add(rt_add(it104, l_L_102), ((rt_int)1LL)), rt_add(rt_add(it104, l_L_102), ((rt_int)1LL))), rt_str(" ", 1)))
{
if (rt_b_eq(rt_b_slice(l_WORDS_101, rt_add(it104, ((rt_int)1LL)), rt_add(it104, l_L_102)), r_STR(p_T, l_L_102)))
{
{ rt_int rv105 = 1;
return rv105; }
}
}
}
}
RT_B_TICK();
if (it104 == it104_hi) break;
} } L_end103: ;
{ rt_int rv106 = 0;
return rv106; }
rt_raise(RT_X_INIT);
}
static void r_ADD_TOKEN(rt_int p_KIND, rt_int p_LINE, rt_int p_IV, R9 p_TX) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_NTOKS >= g_MAX_TOKENS))
{
r_FAIL(p_LINE, rt_str("too many tokens", 15));
}
S_R10(&(((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], ({ R10 rc107; memset(&rc107, 0, sizeof rc107);  rc107.f_KIND = p_KIND; rc107.f_LINE = p_LINE; rc107.f_IV = p_IV; S_R9(&rc107.f_TX, p_TX, 0); rc107; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_NTOKS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL));
}
static rt_int r_SYMBOL_LENGTH(rt_int p_I) { RT_B_TICK(); 
rt_int l_C_108; memset(&l_C_108, 0, sizeof l_C_108);
l_C_108 = r_AT_SRC(p_I);
rt_int l_D_109; memset(&l_D_109, 0, sizeof l_D_109);
l_D_109 = r_AT_SRC(rt_add(p_I, ((rt_int)1LL)));
if ((((l_C_108 == ((rt_int)45LL)) && (l_D_109 == ((rt_int)45LL))) && (r_AT_SRC(rt_add(p_I, ((rt_int)2LL))) == ((rt_int)62LL))))
{
{ rt_int rv110 = ((rt_int)3LL);
return rv110; }
}
if ((((((((((((l_C_108 == ((rt_int)58LL)) && (l_D_109 == ((rt_int)61LL)))) || (((l_C_108 == ((rt_int)45LL)) && (l_D_109 == ((rt_int)62LL))))) || (((l_C_108 == ((rt_int)60LL)) && (l_D_109 == ((rt_int)61LL))))) || (((l_C_108 == ((rt_int)62LL)) && (l_D_109 == ((rt_int)61LL))))) || (((l_C_108 == ((rt_int)60LL)) && (l_D_109 == ((rt_int)62LL))))) || (((l_C_108 == ((rt_int)42LL)) && (l_D_109 == ((rt_int)42LL))))) || (((l_C_108 == ((rt_int)47LL)) && (l_D_109 == ((rt_int)47LL))))) || (((l_C_108 == ((rt_int)36LL)) && (l_D_109 == ((rt_int)36LL))))) || (((l_C_108 == ((rt_int)33LL)) && (l_D_109 == ((rt_int)33LL))))))
{
{ rt_int rv111 = ((rt_int)2LL);
return rv111; }
}
{ rt_int rv112 = ((rt_int)1LL);
return rv112; }
rt_raise(RT_X_INIT);
}
static void r_LEX(void) { RT_B_TICK(); 
rt_int l_I_113; memset(&l_I_113, 0, sizeof l_I_113);
l_I_113 = ((*(R7 *)rt_nil_check(g_W))).f_LEXED;
rt_int l_LINE_114; memset(&l_LINE_114, 0, sizeof l_LINE_114);
l_LINE_114 = rt_add(((*(R7 *)rt_nil_check(g_W))).f_LEXLINE, ((rt_int)1LL));
rt_int l_C_115; memset(&l_C_115, 0, sizeof l_C_115);
rt_int l_J_116; memset(&l_J_116, 0, sizeof l_J_116);
rt_int l_V_117; memset(&l_V_117, 0, sizeof l_V_117);
if ((((*(R7 *)rt_nil_check(g_W))).f_NTOKS > ((rt_int)0LL)))
{
((*(R7 *)rt_nil_check(g_W))).f_NTOKS = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL));
}
for (;;) {
if ((l_I_113 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC)) goto L_end118;
{
l_C_115 = (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_113, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])];
if ((l_C_115 == ((rt_int)10LL)))
{
l_LINE_114 = rt_add(l_LINE_114, ((rt_int)1LL));
l_I_113 = rt_add(l_I_113, ((rt_int)1LL));
}
else if (((((l_C_115 == ((rt_int)32LL)) || (l_C_115 == ((rt_int)9LL))) || (l_C_115 == ((rt_int)13LL))) || (l_C_115 == ((rt_int)12LL))))
{
l_I_113 = rt_add(l_I_113, ((rt_int)1LL));
}
else if ((l_C_115 == ((rt_int)37LL)))
{
l_I_113 = rt_add(l_I_113, ((rt_int)1LL));
for (;;) {
if ((((l_I_113 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_113, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)37LL))) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_113, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)10LL)))) goto L_end119;
{
l_I_113 = rt_add(l_I_113, ((rt_int)1LL));
}
RT_B_TICK();
} L_end119: ;
if ((r_AT_SRC(l_I_113) == ((rt_int)37LL)))
{
l_I_113 = rt_add(l_I_113, ((rt_int)1LL));
}
}
else if ((l_C_115 == ((rt_int)39LL)))
{
{
rt_int l_AT_120; memset(&l_AT_120, 0, sizeof l_AT_120);
l_AT_120 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
l_I_113 = rt_add(l_I_113, ((rt_int)1LL));
for (;;) {
{
if (((l_I_113 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_113, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)10LL))))
{
r_FAIL(l_LINE_114, rt_str("a string must end on its line", 29));
}
if (((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_113, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)39LL)))
{
if ((!(r_AT_SRC(rt_add(l_I_113, ((rt_int)1LL))) == ((rt_int)39LL))))
{
l_I_113 = rt_add(l_I_113, ((rt_int)1LL));
goto L_end121;
}
l_I_113 = rt_add(l_I_113, ((rt_int)1LL));
}
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, ((*(R7 *)rt_nil_check(g_W))).f_TOP, ((*(R7 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_113, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]));
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R7 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
l_I_113 = rt_add(l_I_113, ((rt_int)1LL));
}
RT_B_TICK();
} L_end121: ;
r_ADD_TOKEN(g_K_STR, l_LINE_114, ((rt_int)0LL), ({ R9 rc122; memset(&rc122, 0, sizeof rc122);  rc122.f_AT = l_AT_120; rc122.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_120); rc122.f_H = rt_neg(((rt_int)1LL)); rc122; }));
}
}
else if ((l_C_115 == ((rt_int)92LL)))
{
l_J_116 = rt_add(l_I_113, ((rt_int)1LL));
if (((((r_AT_SRC(l_J_116) == ((rt_int)39LL)) && (r_AT_SRC(rt_add(l_J_116, ((rt_int)1LL))) == ((rt_int)39LL))) && (r_AT_SRC(rt_add(l_J_116, ((rt_int)2LL))) == ((rt_int)39LL))) && (r_AT_SRC(rt_add(l_J_116, ((rt_int)3LL))) == ((rt_int)39LL))))
{
l_J_116 = rt_add(l_I_113, ((rt_int)5LL));
}
else if (((r_AT_SRC(l_J_116) == ((rt_int)39LL)) && (r_AT_SRC(rt_add(l_J_116, ((rt_int)2LL))) == ((rt_int)39LL))))
{
l_J_116 = rt_add(l_I_113, ((rt_int)4LL));
}
else if (((r_AT_SRC(l_J_116) == ((rt_int)91LL)) || (r_AT_SRC(l_J_116) == ((rt_int)93LL))))
{
l_J_116 = rt_add(l_I_113, ((rt_int)2LL));
}
else
{
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_116)))) goto L_end123;
{
l_J_116 = rt_add(l_J_116, ((rt_int)1LL));
}
RT_B_TICK();
} L_end123: ;
if ((l_J_116 == rt_add(l_I_113, ((rt_int)1LL))))
{
r_FAIL(l_LINE_114, rt_str("a stray backslash", 17));
}
}
r_ADD_TOKEN(g_K_ENUM, l_LINE_114, ((rt_int)0LL), r_SOURCE_TEXT(l_I_113, l_J_116));
l_I_113 = l_J_116;
}
else if ((l_C_115 == ((rt_int)63LL)))
{
l_J_116 = rt_add(l_I_113, ((rt_int)1LL));
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_116)))) goto L_end124;
{
l_J_116 = rt_add(l_J_116, ((rt_int)1LL));
}
RT_B_TICK();
} L_end124: ;
r_ADD_TOKEN(g_K_GEN, l_LINE_114, ((rt_int)0LL), r_SOURCE_TEXT(l_I_113, l_J_116));
l_I_113 = l_J_116;
}
else if (r_IS_LETTER(l_C_115))
{
l_J_116 = l_I_113;
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_116)))) goto L_end125;
{
l_J_116 = rt_add(l_J_116, ((rt_int)1LL));
}
RT_B_TICK();
} L_end125: ;
{
R9 l_T_126; memset(&l_T_126, 0, sizeof l_T_126);
S_R9(&l_T_126, r_SOURCE_TEXT(l_I_113, l_J_116), 0);
if (r_IS_RESERVED(l_T_126))
{
r_ADD_TOKEN(g_K_RES, l_LINE_114, ((rt_int)0LL), l_T_126);
}
else
{
r_ADD_TOKEN(g_K_ID, l_LINE_114, ((rt_int)0LL), l_T_126);
}
}
l_I_113 = l_J_116;
}
else if ((r_IS_DIGIT(l_C_115) || (((l_C_115 == ((rt_int)46LL)) && r_IS_DIGIT(r_AT_SRC(rt_add(l_I_113, ((rt_int)1LL))))))))
{
{
rt_int l_KIND_127; memset(&l_KIND_127, 0, sizeof l_KIND_127);
l_KIND_127 = g_K_NUM;
rt_int l_SCALE_128; memset(&l_SCALE_128, 0, sizeof l_SCALE_128);
l_SCALE_128 = ((rt_int)0LL);
rt_int l_NEG_129; memset(&l_NEG_129, 0, sizeof l_NEG_129);
l_NEG_129 = 0;
rt_int l_BIG_130; memset(&l_BIG_130, 0, sizeof l_BIG_130);
l_BIG_130 = 0;
l_J_116 = l_I_113;
l_V_117 = ((rt_int)0LL);
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_116)))) goto L_end131;
{
if ((l_V_117 > rt_quot((rt_sub(INT64_MAX, (rt_sub(r_AT_SRC(l_J_116), ((rt_int)48LL))))), ((rt_int)10LL))))
{
l_BIG_130 = 1;
}
else
{
l_V_117 = rt_add(rt_mul(l_V_117, ((rt_int)10LL)), (rt_sub(r_AT_SRC(l_J_116), ((rt_int)48LL))));
}
l_J_116 = rt_add(l_J_116, ((rt_int)1LL));
}
RT_B_TICK();
} L_end131: ;
if ((r_AT_SRC(l_J_116) == ((rt_int)46LL)))
{
l_KIND_127 = g_K_REAL;
l_J_116 = rt_add(l_J_116, ((rt_int)1LL));
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_116)))) goto L_end132;
{
l_J_116 = rt_add(l_J_116, ((rt_int)1LL));
}
RT_B_TICK();
} L_end132: ;
}
if (((r_AT_SRC(l_J_116) == ((rt_int)69LL)) && ((r_IS_DIGIT(r_AT_SRC(rt_add(l_J_116, ((rt_int)1LL)))) || (((((r_AT_SRC(rt_add(l_J_116, ((rt_int)1LL))) == ((rt_int)43LL)) || (r_AT_SRC(rt_add(l_J_116, ((rt_int)1LL))) == ((rt_int)45LL)))) && r_IS_DIGIT(r_AT_SRC(rt_add(l_J_116, ((rt_int)2LL))))))))))
{
l_KIND_127 = g_K_REAL;
l_J_116 = rt_add(l_J_116, ((rt_int)2LL));
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_116)))) goto L_end133;
{
l_J_116 = rt_add(l_J_116, ((rt_int)1LL));
}
RT_B_TICK();
} L_end133: ;
}
{
R9 l_T_134; memset(&l_T_134, 0, sizeof l_T_134);
S_R9(&l_T_134, r_SOURCE_TEXT(l_I_113, l_J_116), 0);
if (((r_AT_SRC(l_J_116) == ((rt_int)92LL)) && (r_AT_SRC(rt_add(l_J_116, ((rt_int)1LL))) == ((rt_int)83LL))))
{
l_KIND_127 = g_K_FIX;
l_J_116 = rt_add(l_J_116, ((rt_int)2LL));
if ((r_AT_SRC(l_J_116) == ((rt_int)45LL)))
{
l_NEG_129 = 1;
l_J_116 = rt_add(l_J_116, ((rt_int)1LL));
}
else if ((r_AT_SRC(l_J_116) == ((rt_int)43LL)))
{
l_J_116 = rt_add(l_J_116, ((rt_int)1LL));
}
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_116)))) goto L_end135;
{
if ((l_SCALE_128 <= ((rt_int)100000LL)))
{
l_SCALE_128 = rt_add(rt_mul(l_SCALE_128, ((rt_int)10LL)), (rt_sub(r_AT_SRC(l_J_116), ((rt_int)48LL))));
}
l_J_116 = rt_add(l_J_116, ((rt_int)1LL));
}
RT_B_TICK();
} L_end135: ;
if (l_NEG_129)
{
l_SCALE_128 = rt_neg(l_SCALE_128);
}
l_V_117 = l_SCALE_128;
}
if (((l_KIND_127 == g_K_NUM) && l_BIG_130))
{
r_FAIL(l_LINE_114, rt_str("an integer literal exceeds the largest INTEGER (3.2.2)", 54));
}
r_ADD_TOKEN(l_KIND_127, l_LINE_114, l_V_117, l_T_134);
}
}
l_I_113 = l_J_116;
}
else
{
l_J_116 = rt_add(l_I_113, r_SYMBOL_LENGTH(l_I_113));
r_ADD_TOKEN(g_K_SYM, l_LINE_114, ((rt_int)0LL), r_SOURCE_TEXT(l_I_113, l_J_116));
l_I_113 = l_J_116;
}
}
RT_B_TICK();
} L_end118: ;
r_ADD_TOKEN(g_K_EOF, l_LINE_114, ((rt_int)0LL), r_MK(rt_str("", 0)));
((*(R7 *)rt_nil_check(g_W))).f_LEXED = l_I_113;
((*(R7 *)rt_nil_check(g_W))).f_LEXLINE = l_LINE_114;
}
static void r_OPTIONS(void) { RT_B_TICK(); 
rt_int l_I_136; memset(&l_I_136, 0, sizeof l_I_136);
l_I_136 = ((rt_int)1LL);
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, r_MK(rt_str("lib", 3)), 0);
((*(R7 *)rt_nil_check(g_W))).f_WORD = ((rt_int)64LL);
for (;;) {
if ((l_I_136 >= rt_argc())) goto L_end137;
{
{
R9 l_A_138; memset(&l_A_138, 0, sizeof l_A_138);
S_R9(&l_A_138, r_MK(rt_arg(l_I_136)), 0);
if ((r_TEQS(l_A_138, rt_str("-L", 2)) && (rt_add(l_I_136, ((rt_int)1LL)) < rt_argc())))
{
l_I_136 = rt_add(l_I_136, ((rt_int)1LL));
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, r_MK(rt_arg(l_I_136)), 0);
}
else if (r_TEQS(l_A_138, rt_str("-suppress", 9)))
{
((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS = 1;
}
else if (r_TEQS(l_A_138, rt_str("-pdp11", 6)))
{
((*(R7 *)rt_nil_check(g_W))).f_WORD = ((rt_int)16LL);
}
else
{
r_FAIL(((rt_int)0LL), rt_str("bluec [-L library-directory] [-suppress] [-pdp11] < program.blu > program.c", 75));
}
}
l_I_136 = rt_add(l_I_136, ((rt_int)1LL));
}
RT_B_TICK();
} L_end137: ;
}
static void r_LOAD_LIBRARY(R9 p_NAME) { RT_B_TICK(); 
R9 l_FILE_139; memset(&l_FILE_139, 0, sizeof l_FILE_139);
S_R9(&l_FILE_139, r_CAT(r_CATS(((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, rt_str("/", 1)), r_CATS(p_NAME, rt_str(".blu", 4))), 0);
rstr l_FNAME_140; memset(&l_FNAME_140, 0, sizeof l_FNAME_140);
l_FNAME_140 = rt_b_str_new((l_FILE_139).f_LEN, 0);
rt_b_assign(&l_FNAME_140, r_STR(l_FILE_139, (l_FILE_139).f_LEN));
if ((!rt_b_file_exists(l_FNAME_140)))
{
r_FAILT(((rt_int)0LL), rt_str("USES names a segment that is neither in the program nor in the library: ", 72), p_NAME);
}
{
R17 * l_N_141; memset(&l_N_141, 0, sizeof l_N_141);
l_N_141 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_141))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_141))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_LIBSEGS;
((*(R7 *)rt_nil_check(g_W))).f_LIBSEGS = l_N_141;
}
{
rstr l_T_142; memset(&l_T_142, 0, sizeof l_T_142);
l_T_142 = rt_b_str_new((rt_int)(rt_read_file(l_FNAME_140)).len, 0);
rt_b_assign(&l_T_142, rt_read_file(l_FNAME_140));
if ((rt_add(rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (rt_int)(l_T_142).len), ((rt_int)1LL)) >= g_MAX_SOURCE))
{
r_FAIL(((rt_int)0LL), rt_str("the source is too long", 22));
}
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = ((rt_int)10LL);
((*(R7 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
{ rt_int it144_lo = ((rt_int)0LL), it144_hi = rt_sub((rt_int)(l_T_142).len, ((rt_int)1LL));
for (rt_int it144 = it144_lo; it144 <= it144_hi; it144++) {
{
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = r_CODE_OF(rt_b_slice(l_T_142, it144, it144));
((*(R7 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
}
RT_B_TICK();
if (it144 == it144_hi) break;
} } L_end143: ;
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = ((rt_int)0LL);
}
}
static R10 r_CUR(void) { RT_B_TICK(); 
{ R10 rv145 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv145; }
rt_raise(RT_X_INIT);
}
static R10 r_AHEAD(rt_int p_K) { RT_B_TICK(); 
if ((rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, p_K) >= ((*(R7 *)rt_nil_check(g_W))).f_NTOKS))
{
{ R10 rv146 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv146; }
}
{ R10 rv147 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, p_K), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv147; }
rt_raise(RT_X_INIT);
}
static rt_int r_LINE_NOW(void) { RT_B_TICK(); 
{ rt_int rv148 = ((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_LINE;
return rv148; }
rt_raise(RT_X_INIT);
}
static rt_int r_TOK_IS(R10 p_T, rstr p_S) { RT_B_TICK(); 
if (((((p_T).f_KIND == g_K_SYM) || ((p_T).f_KIND == g_K_RES)) || ((p_T).f_KIND == g_K_ID)))
{
{ rt_int rv149 = r_TEQS((p_T).f_TX, p_S);
return rv149; }
}
{ rt_int rv150 = 0;
return rv150; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS(rstr p_S) { RT_B_TICK(); 
{ rt_int rv151 = r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], p_S);
return rv151; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TARGET_DECL(void) { RT_B_TICK(); 
if (((!r_IS(rt_str("TARGET", 6))) || (((*(R7 *)rt_nil_check(g_W))).f_POS >= rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)))))
{
{ rt_int rv152 = 0;
return rv152; }
}
{ rt_int rv153 = ((r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("PROCEDURE", 9)) || r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("FUNCTION", 8))) || r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("INLINE", 6)));
return rv153; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_KIND(rt_int p_K) { RT_B_TICK(); 
{ rt_int rv154 = (((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_KIND == p_K);
return rv154; }
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
{ rt_int rv155 = 1;
return rv155; }
}
{ rt_int rv156 = 0;
return rv156; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT(rstr p_S) { RT_B_TICK(); 
if ((!r_ACCEPT(p_S)))
{
{
R9 l_T_157; memset(&l_T_157, 0, sizeof l_T_157);
S_R9(&l_T_157, (r_CUR()).f_TX, 0);
r_FAIL(r_LINE_NOW(), rt_b_cat(rt_b_cat(p_S, rt_str(" expected, not ", 15)), r_STR(l_T_157, (l_T_157).f_LEN)));
}
}
}
static R9 r_IDENT(void) { RT_B_TICK(); 
R10 l_T_158; memset(&l_T_158, 0, sizeof l_T_158);
S_R10(&l_T_158, r_CUR(), 0);
if (((!((l_T_158).f_KIND == g_K_ID)) && (!r_IDENT_TOKEN(l_T_158))))
{
r_FAILT((l_T_158).f_LINE, rt_str("an identifier expected, not ", 28), (l_T_158).f_TX);
}
r_SKIP();
{ R9 rv159 = (l_T_158).f_TX;
return rv159; }
rt_raise(RT_X_INIT);
}
static rt_int r_IDENT_TOKEN(R10 p_T) { RT_B_TICK(); 
if ((((((p_T).f_KIND == g_K_ENUM) || ((p_T).f_KIND == g_K_GEN))) && (((p_T).f_TX).f_LEN >= ((rt_int)2LL))))
{
{
rstr l_S_160; memset(&l_S_160, 0, sizeof l_S_160);
l_S_160 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_S_160, r_STR((p_T).f_TX, ((rt_int)2LL)));
{ rt_int rv161 = (((!rt_b_eq(rt_b_slice(l_S_160, ((rt_int)1LL), ((rt_int)1LL)), rt_str("'", 1))) && (!rt_b_eq(rt_b_slice(l_S_160, ((rt_int)1LL), ((rt_int)1LL)), rt_str("[", 1)))) && (!rt_b_eq(rt_b_slice(l_S_160, ((rt_int)1LL), ((rt_int)1LL)), rt_str("]", 1))));
return rv161; }
}
}
{ rt_int rv162 = 0;
return rv162; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT_NAME(R9 p_NAME) { RT_B_TICK(); 
if ((!r_TEQ(r_IDENT(), p_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), p_NAME);
}
}
static R17 * r_NEW_NODE(rt_int p_KIND, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_N_163; memset(&l_N_163, 0, sizeof l_N_163);
l_N_163 = ((R17 *)rt_b_new(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_N_163)), ({ R17 rc164; memset(&rc164, 0, sizeof rc164);  rc164.f_KIND = p_KIND; rc164.f_LINE = p_LINE; rc164.f_IV = ((rt_int)0LL); S_R9(&rc164.f_NAME, ({ R9 rc165; memset(&rc165, 0, sizeof rc165);  rc165.f_AT = ((rt_int)0LL); rc165.f_LEN = ((rt_int)0LL); rc165.f_H = ((rt_int)0LL); rc165; }), 0); rc164.f_A = NULL; rc164.f_B = NULL; rc164.f_C = NULL; rc164.f_D = NULL; rc164.f_E = NULL; rc164.f_NEXT = NULL; rc164.f_FL = ((rt_int)0LL); rc164; }), 0);
{ R17 * rv166 = l_N_163;
return rv166; }
rt_raise(RT_X_INIT);
}
static void r_ADD_LIST(R17 * p_N, R17 * *p_HEAD, R17 * *p_TAIL) { RT_B_TICK(); 
if (((*p_HEAD) == NULL))
{
(*p_HEAD) = p_N;
}
else
{
((*(R17 *)rt_nil_check((*p_TAIL)))).f_NEXT = p_N;
}
(*p_TAIL) = p_N;
}
static rt_int r_LIST_LENGTH(R17 * p_N) { RT_B_TICK(); 
rt_int l_K_167; memset(&l_K_167, 0, sizeof l_K_167);
l_K_167 = ((rt_int)0LL);
R17 * l_P_168; memset(&l_P_168, 0, sizeof l_P_168);
l_P_168 = p_N;
for (;;) {
if ((l_P_168 == NULL)) goto L_end169;
{
l_K_167 = rt_add(l_K_167, ((rt_int)1LL));
l_P_168 = ((*(R17 *)rt_nil_check(l_P_168))).f_NEXT;
}
RT_B_TICK();
} L_end169: ;
{ rt_int rv170 = l_K_167;
return rv170; }
rt_raise(RT_X_INIT);
}
static R17 * r_IDENT_NODE(void) { RT_B_TICK(); 
R17 * l_N_171; memset(&l_N_171, 0, sizeof l_N_171);
l_N_171 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_N_171))).f_NAME, r_IDENT(), 0);
{ R17 * rv172 = l_N_171;
return rv172; }
rt_raise(RT_X_INIT);
}
static R17 * r_IDENT_LIST(void) { RT_B_TICK(); 
R17 * l_HEAD_173; memset(&l_HEAD_173, 0, sizeof l_HEAD_173);
l_HEAD_173 = NULL;
R17 * l_TAIL_174; memset(&l_TAIL_174, 0, sizeof l_TAIL_174);
l_TAIL_174 = NULL;
for (;;) {
{
r_ADD_LIST(r_ROUTINE_NAME_NODE(), &l_HEAD_173, &l_TAIL_174);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end175;
} L_end175: ;
{ R17 * rv176 = l_HEAD_173;
return rv176; }
rt_raise(RT_X_INIT);
}
static R17 * r_ROUTINE_NAME_NODE(void) { RT_B_TICK(); 
R17 * l_N_177; memset(&l_N_177, 0, sizeof l_N_177);
l_N_177 = r_IDENT_NODE();
if ((r_IS(rt_str("$", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_SKIP();
S_R9(&((*(R17 *)rt_nil_check(l_N_177))).f_NAME, r_MKN(rt_b_cat(rt_b_cat(r_STR(((*(R17 *)rt_nil_check(l_N_177))).f_NAME, (((*(R17 *)rt_nil_check(l_N_177))).f_NAME).f_LEN), rt_str("$", 1)), r_STR((r_CUR()).f_TX, ((r_CUR()).f_TX).f_LEN))), 0);
r_SKIP();
}
{ R17 * rv178 = l_N_177;
return rv178; }
rt_raise(RT_X_INIT);
}
static R17 * r_PAREN_IDENTS(void) { RT_B_TICK(); 
R17 * l_L_179; memset(&l_L_179, 0, sizeof l_L_179);
l_L_179 = NULL;
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str(")", 1))))
{
l_L_179 = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
{ R17 * rv180 = l_L_179;
return rv180; }
rt_raise(RT_X_INIT);
}
static void r_SKIP_PARENS(void) { RT_B_TICK(); 
rt_int l_DEPTH_181; memset(&l_DEPTH_181, 0, sizeof l_DEPTH_181);
l_DEPTH_181 = ((rt_int)0LL);
for (;;) {
{
if (r_IS(rt_str("(", 1)))
{
l_DEPTH_181 = rt_add(l_DEPTH_181, ((rt_int)1LL));
}
else if (r_IS(rt_str(")", 1)))
{
l_DEPTH_181 = rt_sub(l_DEPTH_181, ((rt_int)1LL));
}
r_SKIP();
}
RT_B_TICK();
if ((l_DEPTH_181 == ((rt_int)0LL))) goto L_end182;
} L_end182: ;
}
static R17 * r_PARSE_COMPILATION(void) { RT_B_TICK(); 
R17 * l_HEAD_183; memset(&l_HEAD_183, 0, sizeof l_HEAD_183);
l_HEAD_183 = NULL;
R17 * l_TAIL_184; memset(&l_TAIL_184, 0, sizeof l_TAIL_184);
l_TAIL_184 = NULL;
for (;;) {
if (r_IS_KIND(g_K_EOF)) goto L_end185;
{
r_ADD_LIST(r_PARSE_SEGMENT(), &l_HEAD_183, &l_TAIL_184);
}
RT_B_TICK();
} L_end185: ;
{ R17 * rv186 = l_HEAD_183;
return rv186; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ITEMS(void) { RT_B_TICK(); 
R17 * l_N_187; memset(&l_N_187, 0, sizeof l_N_187);
l_N_187 = r_NEW_NODE(g_N_ITEMS, r_LINE_NOW());
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end188;
{
if (r_ACCEPT(rt_str("DATA", 4)))
{
r_EXPECT(rt_str(":", 1));
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str("#", 1))))
{
((*(R17 *)rt_nil_check(l_N_187))).f_A = r_IDENT_LIST();
}
if (r_ACCEPT(rt_str("#", 1)))
{
((*(R17 *)rt_nil_check(l_N_187))).f_B = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("ROUTINES", 8)))
{
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_187))).f_C = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("TYPES", 5)))
{
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_187))).f_D = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("MODULES", 7)))
{
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_187))).f_E = r_PAREN_IDENTS();
}
else
{
{
R9 l_T_189; memset(&l_T_189, 0, sizeof l_T_189);
S_R9(&l_T_189, (r_CUR()).f_TX, 0);
r_FAILT(r_LINE_NOW(), rt_str("DATA, ROUTINES, TYPES or MODULES expected, not ", 47), l_T_189);
}
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end188: ;
r_EXPECT(rt_str(")", 1));
{
R17 * l_L_190; memset(&l_L_190, 0, sizeof l_L_190);
l_L_190 = ((*(R17 *)rt_nil_check(l_N_187))).f_A;
rt_int l_PASS_191; memset(&l_PASS_191, 0, sizeof l_PASS_191);
l_PASS_191 = ((rt_int)0LL);
for (;;) {
if ((l_PASS_191 == ((rt_int)5LL))) goto L_end192;
{
if ((l_PASS_191 == ((rt_int)1LL)))
{
l_L_190 = ((*(R17 *)rt_nil_check(l_N_187))).f_B;
}
else if ((l_PASS_191 == ((rt_int)2LL)))
{
l_L_190 = ((*(R17 *)rt_nil_check(l_N_187))).f_C;
}
else if ((l_PASS_191 == ((rt_int)3LL)))
{
l_L_190 = ((*(R17 *)rt_nil_check(l_N_187))).f_D;
}
else if ((l_PASS_191 == ((rt_int)4LL)))
{
l_L_190 = ((*(R17 *)rt_nil_check(l_N_187))).f_E;
}
for (;;) {
if ((l_L_190 == NULL)) goto L_end193;
{
if ((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_L_190))).f_NEXT, ((*(R17 *)rt_nil_check(l_L_190))).f_NAME) || (((l_PASS_191 == ((rt_int)0LL)) && r_IN_IDENTS(((*(R17 *)rt_nil_check(l_N_187))).f_B, ((*(R17 *)rt_nil_check(l_L_190))).f_NAME)))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_L_190))).f_LINE, rt_str("a name appears only once in an imports-clause (4.3.1): ", 55), ((*(R17 *)rt_nil_check(l_L_190))).f_NAME);
}
l_L_190 = ((*(R17 *)rt_nil_check(l_L_190))).f_NEXT;
}
RT_B_TICK();
} L_end193: ;
l_PASS_191 = rt_add(l_PASS_191, ((rt_int)1LL));
}
RT_B_TICK();
} L_end192: ;
}
{ R17 * rv194 = l_N_187;
return rv194; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_SEGMENT(void) { RT_B_TICK(); 
R17 * l_S_195; memset(&l_S_195, 0, sizeof l_S_195);
l_S_195 = r_NEW_NODE(g_N_SEGMENT, r_LINE_NOW());
R17 * l_HEAD_196; memset(&l_HEAD_196, 0, sizeof l_HEAD_196);
l_HEAD_196 = NULL;
R17 * l_TAIL_197; memset(&l_TAIL_197, 0, sizeof l_TAIL_197);
l_TAIL_197 = NULL;
if (r_ACCEPT(rt_str("MAIN", 4)))
{
((*(R17 *)rt_nil_check(l_S_195))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("SEGMENT", 7));
S_R9(&((*(R17 *)rt_nil_check(l_S_195))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("USES", 4)))
{
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_U_199; memset(&l_U_199, 0, sizeof l_U_199);
l_U_199 = r_NEW_NODE(g_N_USE, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_U_199))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_U_199))).f_A = r_PARSE_ITEMS();
}
r_ADD_LIST(l_U_199, &l_HEAD_196, &l_TAIL_197);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end198;
} L_end198: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_S_195))).f_A = l_HEAD_196;
}
if (r_ACCEPT(rt_str("DEFINES", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R17 *)rt_nil_check(l_S_195))).f_FL = ((rt_int)1LL);
}
else
{
((*(R17 *)rt_nil_check(l_S_195))).f_C = r_PAREN_IDENTS();
}
}
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_S_195))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SEGMENT", 7));
r_EXPECT_NAME(((*(R17 *)rt_nil_check(l_S_195))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R17 * rv200 = l_S_195;
return rv200; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CLOSED_BODY(void) { RT_B_TICK(); 
R17 * l_B_201; memset(&l_B_201, 0, sizeof l_B_201);
l_B_201 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
R17 * l_HEAD_202; memset(&l_HEAD_202, 0, sizeof l_HEAD_202);
l_HEAD_202 = NULL;
R17 * l_TAIL_203; memset(&l_TAIL_203, 0, sizeof l_TAIL_203);
l_TAIL_203 = NULL;
((*(R17 *)rt_nil_check(l_B_201))).f_A = r_PARSE_DECLARATIONS();
((*(R17 *)rt_nil_check(l_B_201))).f_B = r_PARSE_STATEMENTS();
for (;;) {
{
if ((((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()))
{
r_ADD_LIST(r_PARSE_ROUTINE(), &l_HEAD_202, &l_TAIL_203);
}
else if (r_IS(rt_str("MODULE", 6)))
{
r_ADD_LIST(r_PARSE_MODULE(), &l_HEAD_202, &l_TAIL_203);
}
else
{
goto L_end204;
}
}
RT_B_TICK();
} L_end204: ;
((*(R17 *)rt_nil_check(l_B_201))).f_C = l_HEAD_202;
{ R17 * rv205 = l_B_201;
return rv205; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_BODY(void) { RT_B_TICK(); 
R17 * l_B_206; memset(&l_B_206, 0, sizeof l_B_206);
l_B_206 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_B_206))).f_A = r_PARSE_DECLARATIONS();
((*(R17 *)rt_nil_check(l_B_206))).f_B = r_PARSE_STATEMENTS();
{ R17 * rv207 = l_B_206;
return rv207; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_MODULE(void) { RT_B_TICK(); 
R17 * l_M_208; memset(&l_M_208, 0, sizeof l_M_208);
l_M_208 = r_NEW_NODE(g_N_MODULE, r_LINE_NOW());
R17 * l_HEAD_209; memset(&l_HEAD_209, 0, sizeof l_HEAD_209);
l_HEAD_209 = NULL;
R17 * l_TAIL_210; memset(&l_TAIL_210, 0, sizeof l_TAIL_210);
l_TAIL_210 = NULL;
r_EXPECT(rt_str("MODULE", 6));
S_R9(&((*(R17 *)rt_nil_check(l_M_208))).f_NAME, r_IDENT(), 0);
for (;;) {
{
if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R17 *)rt_nil_check(l_M_208))).f_A = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("EXPORTS", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R17 *)rt_nil_check(l_M_208))).f_FL = ((rt_int)1LL);
}
else
{
{
rt_int l_PAREN_212; memset(&l_PAREN_212, 0, sizeof l_PAREN_212);
l_PAREN_212 = r_ACCEPT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_X_214; memset(&l_X_214, 0, sizeof l_X_214);
l_X_214 = r_NEW_NODE(g_N_EXPORT, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_X_214))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("WITH", 4)))
{
((*(R17 *)rt_nil_check(l_X_214))).f_A = r_PAREN_IDENTS();
}
r_ADD_LIST(l_X_214, &l_HEAD_209, &l_TAIL_210);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end213;
} L_end213: ;
if (l_PAREN_212)
{
r_EXPECT(rt_str(")", 1));
}
}
((*(R17 *)rt_nil_check(l_M_208))).f_B = l_HEAD_209;
}
}
else
{
goto L_end211;
}
}
RT_B_TICK();
} L_end211: ;
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_M_208))).f_C = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("MODULE", 6));
r_EXPECT_NAME(((*(R17 *)rt_nil_check(l_M_208))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R17 * rv215 = l_M_208;
return rv215; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_DECLARATIONS(void) { RT_B_TICK(); 
R17 * l_HEAD_216; memset(&l_HEAD_216, 0, sizeof l_HEAD_216);
l_HEAD_216 = NULL;
R17 * l_TAIL_217; memset(&l_TAIL_217, 0, sizeof l_TAIL_217);
l_TAIL_217 = NULL;
for (;;) {
{
if ((r_IS(rt_str("CONST", 5)) || r_IS(rt_str("VAR", 3))))
{
r_ADD_LIST(r_PARSE_OBJECT_DECL(), &l_HEAD_216, &l_TAIL_217);
}
else if (r_IS(rt_str("TYPE", 4)))
{
r_ADD_LIST(r_PARSE_TYPE_DECL(), &l_HEAD_216, &l_TAIL_217);
}
else if ((r_IS(rt_str("REPTYPE", 7)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_ADD_LIST(r_PARSE_REPTYPE_DECL(), &l_HEAD_216, &l_TAIL_217);
}
else
{
goto L_end218;
}
}
RT_B_TICK();
} L_end218: ;
{ R17 * rv219 = l_HEAD_216;
return rv219; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_OBJECT_DECL(void) { RT_B_TICK(); 
R17 * l_D_220; memset(&l_D_220, 0, sizeof l_D_220);
l_D_220 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
if (r_ACCEPT(rt_str("CONST", 5)))
{
((*(R17 *)rt_nil_check(l_D_220))).f_KIND = g_N_CONST;
}
else
{
r_EXPECT(rt_str("VAR", 3));
}
((*(R17 *)rt_nil_check(l_D_220))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_D_220))).f_B = r_PARSE_TYPE_SPEC();
if (r_ACCEPT(rt_str(":=", 2)))
{
((*(R17 *)rt_nil_check(l_D_220))).f_C = r_PARSE_EXPR();
}
else if ((((*(R17 *)rt_nil_check(l_D_220))).f_KIND == g_N_CONST))
{
r_FAIL(((*(R17 *)rt_nil_check(l_D_220))).f_LINE, rt_str("a constant needs a value", 24));
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv221 = l_D_220;
return rv221; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_FORMALS(void) { RT_B_TICK(); 
R17 * l_HEAD_222; memset(&l_HEAD_222, 0, sizeof l_HEAD_222);
l_HEAD_222 = NULL;
R17 * l_TAIL_223; memset(&l_TAIL_223, 0, sizeof l_TAIL_223);
l_TAIL_223 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_F_225; memset(&l_F_225, 0, sizeof l_F_225);
l_F_225 = r_NEW_NODE(g_N_FORMAL, r_LINE_NOW());
if (r_ACCEPT(rt_str("TAG", 3)))
{
((*(R17 *)rt_nil_check(l_F_225))).f_IV = ((rt_int)1LL);
}
((*(R17 *)rt_nil_check(l_F_225))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
if ((!r_ACCEPT(rt_str("TYPE", 4))))
{
((*(R17 *)rt_nil_check(l_F_225))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_F_225, &l_HEAD_222, &l_TAIL_223);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end224;
} L_end224: ;
r_EXPECT(rt_str(")", 1));
{ R17 * rv226 = l_HEAD_222;
return rv226; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TYPE_DECL(void) { RT_B_TICK(); 
R17 * l_D_227; memset(&l_D_227, 0, sizeof l_D_227);
l_D_227 = r_NEW_NODE(g_N_TYPE, r_LINE_NOW());
r_EXPECT(rt_str("TYPE", 4));
S_R9(&((*(R17 *)rt_nil_check(l_D_227))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_D_227))).f_A = r_PARSE_FORMALS();
}
r_EXPECT(rt_str("=", 1));
((*(R17 *)rt_nil_check(l_D_227))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(";", 1));
{ R17 * rv228 = l_D_227;
return rv228; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_REPTYPE_DECL(void) { RT_B_TICK(); 
R17 * l_D_229; memset(&l_D_229, 0, sizeof l_D_229);
l_D_229 = r_NEW_NODE(g_N_REPTYPE, r_LINE_NOW());
r_EXPECT(rt_str("REPTYPE", 7));
S_R9(&((*(R17 *)rt_nil_check(l_D_229))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_D_229))).f_A = r_PARSE_FORMALS();
}
if (r_ACCEPT(rt_str("OF", 2)))
{
((*(R17 *)rt_nil_check(l_D_229))).f_C = r_IDENT_NODE();
}
r_EXPECT(rt_str("=", 1));
((*(R17 *)rt_nil_check(l_D_229))).f_B = r_PARSE_REP();
r_EXPECT(rt_str(";", 1));
{ R17 * rv230 = l_D_229;
return rv230; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_REP(void) { RT_B_TICK(); 
R17 * l_R_231; memset(&l_R_231, 0, sizeof l_R_231);
l_R_231 = r_NEW_NODE(g_N_REP, r_LINE_NOW());
R17 * l_HEAD_232; memset(&l_HEAD_232, 0, sizeof l_HEAD_232);
l_HEAD_232 = NULL;
R17 * l_TAIL_233; memset(&l_TAIL_233, 0, sizeof l_TAIL_233);
l_TAIL_233 = NULL;
if (r_IS_KIND(g_K_GEN))
{
((*(R17 *)rt_nil_check(l_R_231))).f_KIND = g_TS_GEN;
S_R9(&((*(R17 *)rt_nil_check(l_R_231))).f_NAME, r_GEN_NAME(), 0);
{ R17 * rv234 = l_R_231;
return rv234; }
}
S_R9(&((*(R17 *)rt_nil_check(l_R_231))).f_NAME, r_IDENT(), 0);
if ((!r_IS(rt_str("(", 1))))
{
{ R17 * rv235 = l_R_231;
return rv235; }
}
if (r_TEQS(((*(R17 *)rt_nil_check(l_R_231))).f_NAME, rt_str("RECORD_REP", 10)))
{
r_PARSE_RECORD_REP(l_R_231);
{ R17 * rv236 = l_R_231;
return rv236; }
}
r_SKIP();
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end237;
{
if (r_ACCEPT(rt_str("VALUES", 6)))
{
{
R17 * l_VH_238; memset(&l_VH_238, 0, sizeof l_VH_238);
l_VH_238 = NULL;
R17 * l_VT_239; memset(&l_VT_239, 0, sizeof l_VT_239);
l_VT_239 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_V_241; memset(&l_V_241, 0, sizeof l_V_241);
l_V_241 = r_NEW_NODE(g_N_VALREP, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_V_241))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_EXPECT(rt_str("AS", 2));
((*(R17 *)rt_nil_check(l_V_241))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_V_241, &l_VH_238, &l_VT_239);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end240;
} L_end240: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_R_231))).f_B = l_VH_238;
}
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_232, &l_TAIL_233);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end237: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_R_231))).f_A = l_HEAD_232;
{ R17 * rv242 = l_R_231;
return rv242; }
rt_raise(RT_X_INIT);
}
static void r_PARSE_RECORD_REP(R17 * p_R) { RT_B_TICK(); 
R17 * l_HEAD_243; memset(&l_HEAD_243, 0, sizeof l_HEAD_243);
l_HEAD_243 = NULL;
R17 * l_TAIL_244; memset(&l_TAIL_244, 0, sizeof l_TAIL_244);
l_TAIL_244 = NULL;
R17 * l_VH_245; memset(&l_VH_245, 0, sizeof l_VH_245);
l_VH_245 = NULL;
R17 * l_VT_246; memset(&l_VT_246, 0, sizeof l_VT_246);
l_VT_246 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end247;
{
if (r_IS(rt_str("SELECT", 6)))
{
r_ADD_LIST(r_PARSE_VARIANT_PACKING(), &l_VH_245, &l_VT_246);
}
else
{
r_ADD_LIST(r_PARSE_PACKING_SPEC(), &l_HEAD_243, &l_TAIL_244);
}
if ((r_ACCEPT(rt_str(",", 1)) || r_ACCEPT(rt_str(";", 1))))
{
}
}
RT_B_TICK();
} L_end247: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(p_R))).f_A = l_HEAD_243;
((*(R17 *)rt_nil_check(p_R))).f_C = l_VH_245;
}
static R17 * r_PARSE_PACKING_SPEC(void) { RT_B_TICK(); 
R17 * l_P_248; memset(&l_P_248, 0, sizeof l_P_248);
l_P_248 = r_NEW_NODE(g_N_PSPEC, r_LINE_NOW());
R17 * l_HEAD_249; memset(&l_HEAD_249, 0, sizeof l_HEAD_249);
l_HEAD_249 = NULL;
R17 * l_TAIL_250; memset(&l_TAIL_250, 0, sizeof l_TAIL_250);
l_TAIL_250 = NULL;
if ((r_IS_KIND(g_K_ID) && (((r_IS(rt_str("DENSE", 5)) || r_IS(rt_str("PACKED", 6))) || r_IS(rt_str("UNPACKED", 8))))))
{
S_R9(&((*(R17 *)rt_nil_check(l_P_248))).f_NAME, r_IDENT(), 0);
}
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_P_248))).f_IV = ((rt_int)1LL);
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end251;
{
r_ADD_LIST(r_PARSE_ELEMENT_SPEC(), &l_HEAD_249, &l_TAIL_250);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end251: ;
r_EXPECT(rt_str(")", 1));
}
else if (((((*(R17 *)rt_nil_check(l_P_248))).f_NAME).f_LEN == ((rt_int)0LL)))
{
((*(R17 *)rt_nil_check(l_P_248))).f_IV = ((rt_int)1LL);
r_ADD_LIST(r_PARSE_ELEMENT_SPEC(), &l_HEAD_249, &l_TAIL_250);
}
((*(R17 *)rt_nil_check(l_P_248))).f_A = l_HEAD_249;
{ R17 * rv252 = l_P_248;
return rv252; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ELEMENT_SPEC(void) { RT_B_TICK(); 
R17 * l_E_253; memset(&l_E_253, 0, sizeof l_E_253);
l_E_253 = r_NEW_NODE(g_N_ELEM, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_E_253))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
if ((r_TEQS(((*(R17 *)rt_nil_check(l_E_253))).f_NAME, rt_str("VARIANTS", 8)) || r_TEQS(((*(R17 *)rt_nil_check(l_E_253))).f_NAME, rt_str("OMIT", 4))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_E_253))).f_NAME, rt_str("VARIANTS", 8)))
{
((*(R17 *)rt_nil_check(l_E_253))).f_FL = ((rt_int)1LL);
}
else
{
((*(R17 *)rt_nil_check(l_E_253))).f_FL = ((rt_int)2LL);
}
r_SKIP();
S_R9(&((*(R17 *)rt_nil_check(l_E_253))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(")", 1));
}
else if (((r_TEQS(((*(R17 *)rt_nil_check(l_E_253))).f_NAME, rt_str("FILLER", 6)) || r_TEQS(((*(R17 *)rt_nil_check(l_E_253))).f_NAME, rt_str("ZEROS", 5))) || r_TEQS(((*(R17 *)rt_nil_check(l_E_253))).f_NAME, rt_str("BLANKS", 6))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_E_253))).f_NAME, rt_str("FILLER", 6)))
{
((*(R17 *)rt_nil_check(l_E_253))).f_FL = ((rt_int)3LL);
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_E_253))).f_NAME, rt_str("ZEROS", 5)))
{
((*(R17 *)rt_nil_check(l_E_253))).f_FL = ((rt_int)4LL);
}
else
{
((*(R17 *)rt_nil_check(l_E_253))).f_FL = ((rt_int)5LL);
}
r_SKIP();
((*(R17 *)rt_nil_check(l_E_253))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
}
{ R17 * rv254 = l_E_253;
return rv254; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_VARIANT_PACKING(void) { RT_B_TICK(); 
R17 * l_V_255; memset(&l_V_255, 0, sizeof l_V_255);
l_V_255 = r_NEW_NODE(g_N_VPACK, r_LINE_NOW());
R17 * l_HEAD_256; memset(&l_HEAD_256, 0, sizeof l_HEAD_256);
l_HEAD_256 = NULL;
R17 * l_TAIL_257; memset(&l_TAIL_257, 0, sizeof l_TAIL_257);
l_TAIL_257 = NULL;
r_EXPECT(rt_str("SELECT", 6));
S_R9(&((*(R17 *)rt_nil_check(l_V_255))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end258;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_V_255))).f_IV = ((rt_int)1LL);
if ((!r_IS(rt_str("END", 3))))
{
((*(R17 *)rt_nil_check(l_V_255))).f_B = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_255))).f_B))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
}
else
{
{
R17 * l_S_259; memset(&l_S_259, 0, sizeof l_S_259);
l_S_259 = r_NEW_NODE(g_N_VPSPEC, r_LINE_NOW());
R17 * l_LH_260; memset(&l_LH_260, 0, sizeof l_LH_260);
l_LH_260 = NULL;
R17 * l_LT_261; memset(&l_LT_261, 0, sizeof l_LT_261);
l_LT_261 = NULL;
R17 * l_PH_262; memset(&l_PH_262, 0, sizeof l_PH_262);
l_PH_262 = NULL;
R17 * l_PT_263; memset(&l_PT_263, 0, sizeof l_PT_263);
l_PT_263 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_260, &l_LT_261);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end264;
} L_end264: ;
r_EXPECT(rt_str("-->", 3));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end265;
{
r_ADD_LIST(r_PARSE_PACKING_SPEC(), &l_PH_262, &l_PT_263);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end265: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_S_259))).f_A = l_LH_260;
((*(R17 *)rt_nil_check(l_S_259))).f_B = l_PH_262;
r_ADD_LIST(l_S_259, &l_HEAD_256, &l_TAIL_257);
}
}
}
RT_B_TICK();
} L_end258: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
((*(R17 *)rt_nil_check(l_V_255))).f_A = l_HEAD_256;
{ R17 * rv266 = l_V_255;
return rv266; }
rt_raise(RT_X_INIT);
}
static R9 r_GEN_NAME(void) { RT_B_TICK(); 
R9 l_T_267; memset(&l_T_267, 0, sizeof l_T_267);
S_R9(&l_T_267, (r_CUR()).f_TX, 0);
r_SKIP();
if (((l_T_267).f_LEN == ((rt_int)1LL)))
{
{ R9 rv268 = r_NO_TEXT();
return rv268; }
}
{ R9 rv269 = r_MKN(rt_b_slice(r_STR(l_T_267, (l_T_267).f_LEN), ((rt_int)1LL), rt_sub((l_T_267).f_LEN, ((rt_int)1LL))));
return rv269; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TYPE_ARG(void) { RT_B_TICK(); 
R17 * l_N_270; memset(&l_N_270, 0, sizeof l_N_270);
if (r_IS_KIND(g_K_GEN))
{
{
R9 l_T_271; memset(&l_T_271, 0, sizeof l_T_271);
S_R9(&l_T_271, (r_CUR()).f_TX, 0);
if (((l_T_271).f_LEN == ((rt_int)1LL)))
{
r_SKIP();
{ R17 * rv272 = r_NEW_NODE(g_N_DONTCARE, r_LINE_NOW());
return rv272; }
}
}
l_N_270 = r_NEW_NODE(g_TS_GEN, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_N_270))).f_NAME, r_GEN_NAME(), 0);
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R17 *)rt_nil_check(l_N_270))).f_C = r_PARSE_REP();
}
{ R17 * rv273 = l_N_270;
return rv273; }
}
if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R17 * rv274 = r_NEW_NODE(g_N_ANY, r_LINE_NOW());
return rv274; }
}
if ((r_IS(rt_str("ARRAY", 5)) || r_IS(rt_str("RECORD", 6))))
{
{ R17 * rv275 = r_PARSE_TYPE_SPEC();
return rv275; }
}
if ((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM)))
{
{ R17 * rv276 = r_PARSE_TYPE_SPEC();
return rv276; }
}
l_N_270 = r_PARSE_EXPR();
if ((r_IS(rt_str("REP", 3)) || r_IS(rt_str("[", 1))))
{
{ R17 * rv277 = r_TYPE_SPEC_TAIL(r_EXPR_TO_TS(l_N_270));
return rv277; }
}
{ R17 * rv278 = l_N_270;
return rv278; }
rt_raise(RT_X_INIT);
}
static R17 * r_EXPR_TO_TS(R17 * p_E) { RT_B_TICK(); 
R17 * l_N_279; memset(&l_N_279, 0, sizeof l_N_279);
if ((((((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_NAME) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_ARRAY)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_RECORD)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_ENUM)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN)))
{
{ R17 * rv280 = p_E;
return rv280; }
}
l_N_279 = r_NEW_NODE(g_TS_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME))
{
S_R9(&((*(R17 *)rt_nil_check(l_N_279))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
{ R17 * rv281 = l_N_279;
return rv281; }
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
S_R9(&((*(R17 *)rt_nil_check(l_N_279))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_279))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_A;
{ R17 * rv282 = l_N_279;
return rv282; }
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD))
{
((*(R17 *)rt_nil_check(l_N_279))).f_FL = ((rt_int)3LL);
((*(R17 *)rt_nil_check(l_N_279))).f_E = p_E;
{ R17 * rv283 = l_N_279;
return rv283; }
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_SUBSTR))
{
l_N_279 = r_EXPR_TO_TS(((*(R17 *)rt_nil_check(p_E))).f_A);
if (((!(((*(R17 *)rt_nil_check(l_N_279))).f_KIND == g_TS_NAME)) || (!(((*(R17 *)rt_nil_check(l_N_279))).f_B == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type specification expected", 29));
}
((*(R17 *)rt_nil_check(l_N_279))).f_B = r_NEW_NODE(g_N_RANGE, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_279))).f_B))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_B;
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_279))).f_B))).f_B = ((*(R17 *)rt_nil_check(p_E))).f_C;
{ R17 * rv284 = l_N_279;
return rv284; }
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type specification expected", 29));
rt_raise(RT_X_INIT);
}
static R17 * r_TYPE_SPEC_TAIL(R17 * p_N) { RT_B_TICK(); 
if ((r_IS(rt_str("[", 1)) || ((r_IS(rt_str("(", 1)) && r_RANGE_AHEAD()))))
{
((*(R17 *)rt_nil_check(p_N))).f_B = r_PARSE_RANGE();
}
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R17 *)rt_nil_check(p_N))).f_C = r_PARSE_REP();
}
{ R17 * rv285 = p_N;
return rv285; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TYPE_SPEC(void) { RT_B_TICK(); 
R17 * l_N_286; memset(&l_N_286, 0, sizeof l_N_286);
R17 * l_HEAD_287; memset(&l_HEAD_287, 0, sizeof l_HEAD_287);
l_HEAD_287 = NULL;
R17 * l_TAIL_288; memset(&l_TAIL_288, 0, sizeof l_TAIL_288);
l_TAIL_288 = NULL;
rt_int l_LINE_289; memset(&l_LINE_289, 0, sizeof l_LINE_289);
l_LINE_289 = r_LINE_NOW();
if (r_ACCEPT(rt_str("ARRAY", 5)))
{
l_N_286 = r_NEW_NODE(g_TS_ARRAY, l_LINE_289);
r_EXPECT(rt_str("[", 1));
for (;;) {
{
{
R17 * l_R_291; memset(&l_R_291, 0, sizeof l_R_291);
l_R_291 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_R_291))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_R_291))).f_B = r_PARSE_EXPR();
r_ADD_LIST(l_R_291, &l_HEAD_287, &l_TAIL_288);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end290;
} L_end290: ;
r_EXPECT(rt_str("]", 1));
((*(R17 *)rt_nil_check(l_N_286))).f_A = l_HEAD_287;
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R17 *)rt_nil_check(l_N_286))).f_D = r_PARSE_REP();
}
r_EXPECT(rt_str("OF", 2));
((*(R17 *)rt_nil_check(l_N_286))).f_C = r_PARSE_TYPE_SPEC();
{ R17 * rv292 = l_N_286;
return rv292; }
}
if (r_ACCEPT(rt_str("RECORD", 6)))
{
l_N_286 = r_NEW_NODE(g_TS_RECORD, l_LINE_289);
((*(R17 *)rt_nil_check(l_N_286))).f_A = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("RECORD", 6));
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R17 *)rt_nil_check(l_N_286))).f_D = r_PARSE_REP();
}
{ R17 * rv293 = l_N_286;
return rv293; }
}
if (r_IS_KIND(g_K_GEN))
{
{ R17 * rv294 = r_PARSE_TYPE_ARG();
return rv294; }
}
if (r_IS(rt_str("(", 1)))
{
l_N_286 = r_NEW_NODE(g_TS_ENUM, l_LINE_289);
((*(R17 *)rt_nil_check(l_N_286))).f_A = r_PARSE_LITERALS();
{ R17 * rv295 = r_TYPE_SPEC_TAIL(l_N_286);
return rv295; }
}
l_N_286 = r_NEW_NODE(g_TS_NAME, l_LINE_289);
S_R9(&((*(R17 *)rt_nil_check(l_N_286))).f_NAME, r_IDENT(), 0);
if ((r_IS(rt_str(".", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
{
R17 * l_X_296; memset(&l_X_296, 0, sizeof l_X_296);
l_X_296 = r_NEW_NODE(g_N_NAME, l_LINE_289);
S_R9(&((*(R17 *)rt_nil_check(l_X_296))).f_NAME, ((*(R17 *)rt_nil_check(l_N_286))).f_NAME, 0);
for (;;) {
if ((!((r_IS(rt_str(".", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID))))) goto L_end297;
{
r_SKIP();
{
R17 * l_F_298; memset(&l_F_298, 0, sizeof l_F_298);
l_F_298 = r_NEW_NODE(g_N_FIELD, l_LINE_289);
((*(R17 *)rt_nil_check(l_F_298))).f_A = l_X_296;
S_R9(&((*(R17 *)rt_nil_check(l_F_298))).f_NAME, r_IDENT(), 0);
l_X_296 = l_F_298;
}
}
RT_B_TICK();
} L_end297: ;
((*(R17 *)rt_nil_check(l_N_286))).f_FL = ((rt_int)3LL);
((*(R17 *)rt_nil_check(l_N_286))).f_E = l_X_296;
{ R17 * rv299 = r_TYPE_SPEC_TAIL(l_N_286);
return rv299; }
}
}
if ((r_TEQS(((*(R17 *)rt_nil_check(l_N_286))).f_NAME, rt_str("ENUM", 4)) || r_TEQS(((*(R17 *)rt_nil_check(l_N_286))).f_NAME, rt_str("UNORDERED", 9))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_N_286))).f_NAME, rt_str("UNORDERED", 9)))
{
((*(R17 *)rt_nil_check(l_N_286))).f_IV = ((rt_int)1LL);
}
((*(R17 *)rt_nil_check(l_N_286))).f_KIND = g_TS_ENUM;
((*(R17 *)rt_nil_check(l_N_286))).f_A = r_PARSE_LITERALS();
{ R17 * rv300 = r_TYPE_SPEC_TAIL(l_N_286);
return rv300; }
}
if ((r_IS(rt_str("(", 1)) && (!r_RANGE_AHEAD())))
{
r_SKIP();
for (;;) {
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_N_286))).f_NAME, rt_str("PTR", 3)))
{
r_ADD_LIST(r_PARSE_TYPE_SPEC(), &l_HEAD_287, &l_TAIL_288);
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_287, &l_TAIL_288);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end301;
} L_end301: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_N_286))).f_A = l_HEAD_287;
}
{ R17 * rv302 = r_TYPE_SPEC_TAIL(l_N_286);
return rv302; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_LITERALS(void) { RT_B_TICK(); 
R17 * l_HEAD_303; memset(&l_HEAD_303, 0, sizeof l_HEAD_303);
l_HEAD_303 = NULL;
R17 * l_TAIL_304; memset(&l_TAIL_304, 0, sizeof l_TAIL_304);
l_TAIL_304 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_L_306; memset(&l_L_306, 0, sizeof l_L_306);
l_L_306 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
if ((!((r_IS_KIND(g_K_ENUM) || r_IS_KIND(g_K_ID)))))
{
r_FAIL(r_LINE_NOW(), rt_str("an enumerated literal expected", 30));
}
S_R9(&((*(R17 *)rt_nil_check(l_L_306))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_ADD_LIST(l_L_306, &l_HEAD_303, &l_TAIL_304);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end305;
} L_end305: ;
r_EXPECT(rt_str(")", 1));
{ R17 * rv307 = l_HEAD_303;
return rv307; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_FIELDS(void) { RT_B_TICK(); 
R17 * l_HEAD_308; memset(&l_HEAD_308, 0, sizeof l_HEAD_308);
l_HEAD_308 = NULL;
R17 * l_TAIL_309; memset(&l_TAIL_309, 0, sizeof l_TAIL_309);
l_TAIL_309 = NULL;
for (;;) {
{
if (r_IS(rt_str("VAR", 3)))
{
{
R17 * l_F_311; memset(&l_F_311, 0, sizeof l_F_311);
l_F_311 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
r_SKIP();
((*(R17 *)rt_nil_check(l_F_311))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_F_311))).f_B = r_PARSE_TYPE_SPEC();
if ((!r_ACCEPT(rt_str(";", 1))))
{
r_EXPECT(rt_str(",", 1));
}
r_ADD_LIST(l_F_311, &l_HEAD_308, &l_TAIL_309);
}
}
else if (r_IS(rt_str("SELECT", 6)))
{
{
R17 * l_V_312; memset(&l_V_312, 0, sizeof l_V_312);
l_V_312 = r_NEW_NODE(g_N_VARIANT, r_LINE_NOW());
R17 * l_VH_313; memset(&l_VH_313, 0, sizeof l_VH_313);
l_VH_313 = NULL;
R17 * l_VT_314; memset(&l_VT_314, 0, sizeof l_VT_314);
l_VT_314 = NULL;
r_SKIP();
S_R9(&((*(R17 *)rt_nil_check(l_V_312))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end315;
{
{
R17 * l_S_316; memset(&l_S_316, 0, sizeof l_S_316);
l_S_316 = r_NEW_NODE(g_N_VARSPEC, r_LINE_NOW());
R17 * l_LH_317; memset(&l_LH_317, 0, sizeof l_LH_317);
l_LH_317 = NULL;
R17 * l_LT_318; memset(&l_LT_318, 0, sizeof l_LT_318);
l_LT_318 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_317, &l_LT_318);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end319;
} L_end319: ;
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_S_316))).f_A = l_LH_317;
((*(R17 *)rt_nil_check(l_S_316))).f_B = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_S_316, &l_VH_313, &l_VT_314);
}
}
RT_B_TICK();
} L_end315: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_V_312))).f_A = l_VH_313;
r_ADD_LIST(l_V_312, &l_HEAD_308, &l_TAIL_309);
}
}
else
{
goto L_end310;
}
}
RT_B_TICK();
} L_end310: ;
{ R17 * rv320 = l_HEAD_308;
return rv320; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_RANGE(void) { RT_B_TICK(); 
R17 * l_R_321; memset(&l_R_321, 0, sizeof l_R_321);
l_R_321 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_R_321))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("[", 1));
}
((*(R17 *)rt_nil_check(l_R_321))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_R_321))).f_B = r_PARSE_EXPR();
if (r_ACCEPT(rt_str(")", 1)))
{
((*(R17 *)rt_nil_check(l_R_321))).f_IV = rt_add(((*(R17 *)rt_nil_check(l_R_321))).f_IV, ((rt_int)2LL));
}
else
{
r_EXPECT(rt_str("]", 1));
}
{ R17 * rv322 = l_R_321;
return rv322; }
rt_raise(RT_X_INIT);
}
static rt_int r_RANGE_AHEAD(void) { RT_B_TICK(); 
rt_int l_DEPTH_323; memset(&l_DEPTH_323, 0, sizeof l_DEPTH_323);
l_DEPTH_323 = ((rt_int)0LL);
rt_int l_K_324; memset(&l_K_324, 0, sizeof l_K_324);
l_K_324 = ((rt_int)0LL);
for (;;) {
{
{
R10 l_T_326; memset(&l_T_326, 0, sizeof l_T_326);
S_R10(&l_T_326, r_AHEAD(l_K_324), 0);
if (((l_T_326).f_KIND == g_K_EOF))
{
{ rt_int rv327 = 0;
return rv327; }
}
if (((l_T_326).f_KIND == g_K_SYM))
{
if ((r_TEQS((l_T_326).f_TX, rt_str("(", 1)) || r_TEQS((l_T_326).f_TX, rt_str("[", 1))))
{
l_DEPTH_323 = rt_add(l_DEPTH_323, ((rt_int)1LL));
}
else if ((r_TEQS((l_T_326).f_TX, rt_str(")", 1)) || r_TEQS((l_T_326).f_TX, rt_str("]", 1))))
{
l_DEPTH_323 = rt_sub(l_DEPTH_323, ((rt_int)1LL));
if ((l_DEPTH_323 == ((rt_int)0LL)))
{
{ rt_int rv328 = 0;
return rv328; }
}
}
else if (((l_DEPTH_323 == ((rt_int)1LL)) && ((r_TEQS((l_T_326).f_TX, rt_str(":", 1)) || r_TEQS((l_T_326).f_TX, rt_str(",", 1))))))
{
{ rt_int rv329 = r_TEQS((l_T_326).f_TX, rt_str(":", 1));
return rv329; }
}
}
}
l_K_324 = rt_add(l_K_324, ((rt_int)1LL));
}
RT_B_TICK();
} L_end325: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_PARAMS(void) { RT_B_TICK(); 
R17 * l_HEAD_330; memset(&l_HEAD_330, 0, sizeof l_HEAD_330);
l_HEAD_330 = NULL;
R17 * l_TAIL_331; memset(&l_TAIL_331, 0, sizeof l_TAIL_331);
l_TAIL_331 = NULL;
rt_int l_MODE_332; memset(&l_MODE_332, 0, sizeof l_MODE_332);
l_MODE_332 = g_M_IN;
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end333;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_332 = rt_add(l_MODE_332, ((rt_int)1LL));
}
else
{
{
R17 * l_NAMES_334; memset(&l_NAMES_334, 0, sizeof l_NAMES_334);
l_NAMES_334 = r_IDENT_LIST();
R17 * l_TS_335; memset(&l_TS_335, 0, sizeof l_TS_335);
l_TS_335 = NULL;
R17 * l_P_336; memset(&l_P_336, 0, sizeof l_P_336);
l_P_336 = l_NAMES_334;
r_EXPECT(rt_str(":", 1));
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else if ((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))))
{
l_TS_335 = r_PARSE_ROUTINE_SPEC();
}
else
{
l_TS_335 = r_PARSE_TYPE_SPEC();
}
for (;;) {
if ((l_P_336 == NULL)) goto L_end337;
{
{
R17 * l_PN_338; memset(&l_PN_338, 0, sizeof l_PN_338);
l_PN_338 = r_NEW_NODE(g_N_PARAM, ((*(R17 *)rt_nil_check(l_P_336))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_PN_338))).f_NAME, ((*(R17 *)rt_nil_check(l_P_336))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_PN_338))).f_IV = l_MODE_332;
((*(R17 *)rt_nil_check(l_PN_338))).f_B = l_TS_335;
r_ADD_LIST(l_PN_338, &l_HEAD_330, &l_TAIL_331);
}
l_P_336 = ((*(R17 *)rt_nil_check(l_P_336))).f_NEXT;
}
RT_B_TICK();
} L_end337: ;
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end333: ;
r_EXPECT(rt_str(")", 1));
{ R17 * rv339 = l_HEAD_330;
return rv339; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TEMPLATE(rt_int p_FUNC) { RT_B_TICK(); 
R17 * l_R_340; memset(&l_R_340, 0, sizeof l_R_340);
l_R_340 = r_NEW_NODE(g_TS_ROUTINE, r_LINE_NOW());
R17 * l_HEAD_341; memset(&l_HEAD_341, 0, sizeof l_HEAD_341);
l_HEAD_341 = NULL;
R17 * l_TAIL_342; memset(&l_TAIL_342, 0, sizeof l_TAIL_342);
l_TAIL_342 = NULL;
rt_int l_MODE_343; memset(&l_MODE_343, 0, sizeof l_MODE_343);
l_MODE_343 = g_M_IN;
if (p_FUNC)
{
((*(R17 *)rt_nil_check(l_R_340))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end344;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_343 = rt_add(l_MODE_343, ((rt_int)1LL));
if (r_IS(rt_str(")", 1)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_340))).f_LINE, rt_str("a # must not be the last symbol of a proc-template (5.1)", 56));
}
}
else
{
{
R17 * l_P_345; memset(&l_P_345, 0, sizeof l_P_345);
l_P_345 = r_NEW_NODE(g_N_PARAM, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_P_345))).f_IV = l_MODE_343;
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else
{
((*(R17 *)rt_nil_check(l_P_345))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_P_345, &l_HEAD_341, &l_TAIL_342);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end344: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_R_340))).f_A = l_HEAD_341;
if (r_ACCEPT(rt_str("RETURNS", 7)))
{
((*(R17 *)rt_nil_check(l_R_340))).f_IV = ((rt_int)1LL);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_R_340))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R17 *)rt_nil_check(l_R_340))).f_B = r_PARSE_TYPE_SPEC();
}
}
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R17 *)rt_nil_check(l_R_340))).f_D = r_PAREN_IDENTS();
}
{ R17 * rv346 = l_R_340;
return rv346; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ROUTINE_SPEC(void) { RT_B_TICK(); 
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
{ R17 * rv347 = r_PARSE_TEMPLATE(1);
return rv347; }
}
r_EXPECT(rt_str("PROCEDURE", 9));
{ R17 * rv348 = r_PARSE_TEMPLATE(0);
return rv348; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_WHERE(void) { RT_B_TICK(); 
R17 * l_HEAD_349; memset(&l_HEAD_349, 0, sizeof l_HEAD_349);
l_HEAD_349 = NULL;
R17 * l_TAIL_350; memset(&l_TAIL_350, 0, sizeof l_TAIL_350);
l_TAIL_350 = NULL;
for (;;) {
{
{
R17 * l_N_352; memset(&l_N_352, 0, sizeof l_N_352);
l_N_352 = r_NEW_NODE(g_N_NEEDS, r_LINE_NOW());
R17 * l_TH_353; memset(&l_TH_353, 0, sizeof l_TH_353);
l_TH_353 = NULL;
R17 * l_TT_354; memset(&l_TT_354, 0, sizeof l_TT_354);
l_TT_354 = NULL;
S_R9(&((*(R17 *)rt_nil_check(l_N_352))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("NEEDS", 5));
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_T_356; memset(&l_T_356, 0, sizeof l_T_356);
l_T_356 = r_NEW_NODE(g_N_TEMPLATE, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_T_356))).f_NAME, ((*(R17 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_T_356))).f_B = r_PARSE_TEMPLATE(0);
r_ADD_LIST(l_T_356, &l_TH_353, &l_TT_354);
}
if (r_ACCEPT(rt_str(";", 1)))
{
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end355;
} L_end355: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_N_352))).f_A = l_TH_353;
r_ADD_LIST(l_N_352, &l_HEAD_349, &l_TAIL_350);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end351;
} L_end351: ;
{ R17 * rv357 = l_HEAD_349;
return rv357; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ROUTINE(void) { RT_B_TICK(); 
R17 * l_R_358; memset(&l_R_358, 0, sizeof l_R_358);
l_R_358 = r_NEW_NODE(g_N_ROUTINE, r_LINE_NOW());
R17 * l_H_359; memset(&l_H_359, 0, sizeof l_H_359);
l_H_359 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
if (r_IS_TARGET_DECL())
{
r_SKIP();
((*(R17 *)rt_nil_check(l_R_358))).f_FL = ((rt_int)2LL);
}
if (r_ACCEPT(rt_str("INLINE", 6)))
{
if ((((*(R17 *)rt_nil_check(l_R_358))).f_FL == ((rt_int)2LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_358))).f_LINE, rt_str("target routines cannot be INLINE (4.8.2)", 40));
}
((*(R17 *)rt_nil_check(l_R_358))).f_FL = rt_add(((*(R17 *)rt_nil_check(l_R_358))).f_FL, ((rt_int)1LL));
}
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
((*(R17 *)rt_nil_check(l_R_358))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
S_R9(&((*(R17 *)rt_nil_check(l_R_358))).f_NAME, ((*(R17 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (r_IS(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_R_358))).f_A = r_PARSE_PARAMS();
}
if ((((*(R17 *)rt_nil_check(l_R_358))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("RETURNS", 7));
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_R_358))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R17 *)rt_nil_check(l_R_358))).f_B = r_PARSE_TYPE_SPEC();
}
}
for (;;) {
{
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R17 *)rt_nil_check(l_H_359))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R17 *)rt_nil_check(l_R_358))).f_E = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("WHERE", 5)))
{
((*(R17 *)rt_nil_check(l_H_359))).f_B = r_PARSE_WHERE();
}
else
{
goto L_end360;
}
}
RT_B_TICK();
} L_end360: ;
((*(R17 *)rt_nil_check(l_R_358))).f_D = l_H_359;
r_EXPECT(rt_str(";", 1));
if ((((*(R17 *)rt_nil_check(l_R_358))).f_FL >= ((rt_int)2LL)))
{
r_EXPECT(rt_str("DYNSIZE", 7));
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_H_359))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
r_EXPECT(rt_str(";", 1));
for (;;) {
if ((r_IS(rt_str("END", 3)) && ((r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PROCEDURE", 9)) || r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("FUNCTION", 8)))))) goto L_end361;
{
r_SKIP();
}
RT_B_TICK();
} L_end361: ;
}
else
{
((*(R17 *)rt_nil_check(l_R_358))).f_C = r_PARSE_CLOSED_BODY();
}
r_EXPECT(rt_str("END", 3));
if ((((*(R17 *)rt_nil_check(l_R_358))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("FUNCTION", 8));
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
if ((!r_TEQ(((*(R17 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, ((*(R17 *)rt_nil_check(l_R_358))).f_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), ((*(R17 *)rt_nil_check(l_R_358))).f_NAME);
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv362 = l_R_358;
return rv362; }
rt_raise(RT_X_INIT);
}
static R17 * r_BIN_NODE(R9 p_OP, rt_int p_LINE, R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_N_363; memset(&l_N_363, 0, sizeof l_N_363);
l_N_363 = r_NEW_NODE(g_N_BINOP, p_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_363))).f_NAME, p_OP, 0);
((*(R17 *)rt_nil_check(l_N_363))).f_A = p_A;
((*(R17 *)rt_nil_check(l_N_363))).f_B = p_B;
{ R17 * rv364 = l_N_363;
return rv364; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_EXPR(void) { RT_B_TICK(); 
R17 * l_E_365; memset(&l_E_365, 0, sizeof l_E_365);
l_E_365 = r_PARSE_SIMPLE();
if (((((r_IS(rt_str("ROUNDED", 7)) || r_IS(rt_str("TRUNCATED", 9))) || r_IS(rt_str("NATIVE_R", 8))) || r_IS(rt_str("NATIVE_T", 8))) || r_ROUNDING_AHEAD()))
{
{
R17 * l_Q_366; memset(&l_Q_366, 0, sizeof l_Q_366);
l_Q_366 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_Q_366))).f_NAME, r_IDENT(), 0);
((*(R17 *)rt_nil_check(l_Q_366))).f_A = l_E_365;
l_E_365 = l_Q_366;
}
}
if ((r_IS(rt_str("WITH", 4)) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PREC", 4))))
{
{
R17 * l_Q_367; memset(&l_Q_367, 0, sizeof l_Q_367);
l_Q_367 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
r_SKIP();
r_SKIP();
if ((((*(R17 *)rt_nil_check(l_E_365))).f_KIND == g_N_QUAL))
{
l_Q_367 = l_E_365;
}
else
{
((*(R17 *)rt_nil_check(l_Q_367))).f_A = l_E_365;
}
((*(R17 *)rt_nil_check(l_Q_367))).f_B = r_PARSE_SIMPLE();
l_E_365 = l_Q_367;
}
}
{ R17 * rv368 = l_E_365;
return rv368; }
rt_raise(RT_X_INIT);
}
static rt_int r_ROUNDING_AHEAD(void) { RT_B_TICK(); 
R10 l_N_369; memset(&l_N_369, 0, sizeof l_N_369);
S_R10(&l_N_369, r_AHEAD(((rt_int)1LL)), 0);
if ((!r_IS_KIND(g_K_ID)))
{
{ rt_int rv370 = 0;
return rv370; }
}
if ((((((((r_IS(rt_str("CONNECT", 7)) || r_IS(rt_str("SIGNALS", 7))) || r_IS(rt_str("IMPORTS", 7))) || r_IS(rt_str("PRIORITY", 8))) || r_IS(rt_str("WHERE", 5))) || r_IS(rt_str("NEEDS", 5))) || r_IS(rt_str("AS", 2))) || r_IS(rt_str("PREC", 4))))
{
{ rt_int rv371 = 0;
return rv371; }
}
{ rt_int rv372 = (!(((((((r_TOK_IS(l_N_369, rt_str("(", 1)) || r_TOK_IS(l_N_369, rt_str(".", 1))) || r_TOK_IS(l_N_369, rt_str(":=", 2))) || r_TOK_IS(l_N_369, rt_str(":", 1))) || r_TOK_IS(l_N_369, rt_str("$", 1))) || r_TOK_IS(l_N_369, rt_str("@", 1))) || r_TOK_IS(l_N_369, rt_str("[", 1)))));
return rv372; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_SIMPLE(void) { RT_B_TICK(); 
R17 * l_LEFT_373; memset(&l_LEFT_373, 0, sizeof l_LEFT_373);
l_LEFT_373 = r_PARSE_CONJ();
for (;;) {
if ((!((((r_IS(rt_str("OR", 2)) || r_IS(rt_str("!", 1))) || r_IS(rt_str("XOR", 3))) || r_IS(rt_str("->", 2)))))) goto L_end374;
{
{
R10 l_T_375; memset(&l_T_375, 0, sizeof l_T_375);
S_R10(&l_T_375, r_CUR(), 0);
r_SKIP();
l_LEFT_373 = r_BIN_NODE((l_T_375).f_TX, (l_T_375).f_LINE, l_LEFT_373, r_PARSE_CONJ());
}
}
RT_B_TICK();
} L_end374: ;
{ R17 * rv376 = l_LEFT_373;
return rv376; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CONJ(void) { RT_B_TICK(); 
R17 * l_LEFT_377; memset(&l_LEFT_377, 0, sizeof l_LEFT_377);
l_LEFT_377 = r_PARSE_RELATION();
for (;;) {
if ((!((r_IS(rt_str("AND", 3)) || r_IS(rt_str("&", 1)))))) goto L_end378;
{
{
R10 l_T_379; memset(&l_T_379, 0, sizeof l_T_379);
S_R10(&l_T_379, r_CUR(), 0);
r_SKIP();
l_LEFT_377 = r_BIN_NODE((l_T_379).f_TX, (l_T_379).f_LINE, l_LEFT_377, r_PARSE_RELATION());
}
}
RT_B_TICK();
} L_end378: ;
{ R17 * rv380 = l_LEFT_377;
return rv380; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_RELATION(void) { RT_B_TICK(); 
R17 * l_LEFT_381; memset(&l_LEFT_381, 0, sizeof l_LEFT_381);
l_LEFT_381 = r_PARSE_SUM();
for (;;) {
{
{
R10 l_T_383; memset(&l_T_383, 0, sizeof l_T_383);
S_R10(&l_T_383, r_CUR(), 0);
if ((((((r_IS(rt_str("=", 1)) || r_IS(rt_str("<", 1))) || r_IS(rt_str(">", 1))) || r_IS(rt_str("<=", 2))) || r_IS(rt_str(">=", 2))) || r_IS(rt_str("<>", 2))))
{
r_SKIP();
l_LEFT_381 = r_BIN_NODE((l_T_383).f_TX, (l_T_383).f_LINE, l_LEFT_381, r_PARSE_SUM());
}
else if (r_IS(rt_str("IN", 2)))
{
{
R17 * l_N_384; memset(&l_N_384, 0, sizeof l_N_384);
l_N_384 = r_NEW_NODE(g_N_IN, (l_T_383).f_LINE);
r_SKIP();
((*(R17 *)rt_nil_check(l_N_384))).f_A = l_LEFT_381;
((*(R17 *)rt_nil_check(l_N_384))).f_B = r_PARSE_RANGE();
l_LEFT_381 = l_N_384;
}
}
else
{
{ R17 * rv385 = l_LEFT_381;
return rv385; }
}
}
}
RT_B_TICK();
} L_end382: ;
rt_raise(RT_X_INIT);
}
static R17 * r_TRY_SCALED(R17 * p_LEFT, rstr p_OPS) { RT_B_TICK(); 
rt_int l_SAVED_386; memset(&l_SAVED_386, 0, sizeof l_SAVED_386);
l_SAVED_386 = ((*(R7 *)rt_nil_check(g_W))).f_POS;
rt_int l_LINE_387; memset(&l_LINE_387, 0, sizeof l_LINE_387);
l_LINE_387 = r_LINE_NOW();
R17 * l_N_388; memset(&l_N_388, 0, sizeof l_N_388);
if ((!r_IS(rt_str("!", 1))))
{
{ R17 * rv389 = NULL;
return rv389; }
}
{
R10 l_OP_390; memset(&l_OP_390, 0, sizeof l_OP_390);
S_R10(&l_OP_390, r_AHEAD(((rt_int)1LL)), 0);
R9 l_T_391; memset(&l_T_391, 0, sizeof l_T_391);
S_R9(&l_T_391, (l_OP_390).f_TX, 0);
rt_int l_FOUND_392; memset(&l_FOUND_392, 0, sizeof l_FOUND_392);
l_FOUND_392 = 0;
if (((!((l_OP_390).f_KIND == g_K_SYM)) && (!((l_OP_390).f_KIND == g_K_RES))))
{
{ R17 * rv393 = NULL;
return rv393; }
}
{ rt_int it395_lo = ((rt_int)0LL), it395_hi = rt_sub((rt_int)(p_OPS).len, (l_T_391).f_LEN);
for (rt_int it395 = it395_lo; it395 <= it395_hi; it395++) {
{
if (rt_b_eq(rt_b_slice(p_OPS, it395, rt_sub(rt_add(it395, (l_T_391).f_LEN), ((rt_int)1LL))), r_STR(l_T_391, (l_T_391).f_LEN)))
{
if (((((it395 == ((rt_int)0LL)) || rt_b_eq(rt_b_slice(p_OPS, rt_sub(it395, ((rt_int)1LL)), rt_sub(it395, ((rt_int)1LL))), rt_str(" ", 1)))) && (((rt_add(it395, (l_T_391).f_LEN) == (rt_int)(p_OPS).len) || rt_b_eq(rt_b_slice(p_OPS, rt_add(it395, (l_T_391).f_LEN), rt_add(it395, (l_T_391).f_LEN)), rt_str(" ", 1))))))
{
l_FOUND_392 = 1;
}
}
}
RT_B_TICK();
if (it395 == it395_hi) break;
} } L_end394: ;
if ((!l_FOUND_392))
{
{ R17 * rv396 = NULL;
return rv396; }
}
r_SKIP();
r_SKIP();
l_N_388 = r_BIN_NODE(l_T_391, l_LINE_387, p_LEFT, NULL);
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R17 *)rt_nil_check(l_N_388))).f_FL = ((rt_int)2LL);
{ R17 * rv397 = l_N_388;
return rv397; }
}
if (((((r_IS_KIND(g_K_NUM) || r_IS_KIND(g_K_ID)) || r_IS(rt_str("(", 1))) || r_IS(rt_str("-", 1))) || r_IS(rt_str("+", 1))))
{
((*(R17 *)rt_nil_check(l_N_388))).f_D = r_PARSE_SECONDARY();
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R17 *)rt_nil_check(l_N_388))).f_FL = ((rt_int)1LL);
{ R17 * rv398 = l_N_388;
return rv398; }
}
}
((*(R7 *)rt_nil_check(g_W))).f_POS = l_SAVED_386;
{ R17 * rv399 = NULL;
return rv399; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_SUM(void) { RT_B_TICK(); 
R17 * l_LEFT_400; memset(&l_LEFT_400, 0, sizeof l_LEFT_400);
l_LEFT_400 = r_PARSE_TERM();
for (;;) {
{
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("!!", 2))))
{
{
R10 l_T_402; memset(&l_T_402, 0, sizeof l_T_402);
S_R10(&l_T_402, r_CUR(), 0);
r_SKIP();
l_LEFT_400 = r_BIN_NODE((l_T_402).f_TX, (l_T_402).f_LINE, l_LEFT_400, r_PARSE_TERM());
}
}
else
{
{
R17 * l_N_403; memset(&l_N_403, 0, sizeof l_N_403);
l_N_403 = r_TRY_SCALED(l_LEFT_400, rt_str("+ -", 3));
if ((l_N_403 == NULL))
{
{ R17 * rv404 = l_LEFT_400;
return rv404; }
}
((*(R17 *)rt_nil_check(l_N_403))).f_B = r_PARSE_TERM();
l_LEFT_400 = l_N_403;
}
}
}
RT_B_TICK();
} L_end401: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TERM(void) { RT_B_TICK(); 
R17 * l_LEFT_405; memset(&l_LEFT_405, 0, sizeof l_LEFT_405);
l_LEFT_405 = r_PARSE_FACTOR();
for (;;) {
{
if ((((r_IS(rt_str("*", 1)) || r_IS(rt_str("/", 1))) || r_IS(rt_str("//", 2))) || r_IS(rt_str("MOD", 3))))
{
{
R10 l_T_407; memset(&l_T_407, 0, sizeof l_T_407);
S_R10(&l_T_407, r_CUR(), 0);
r_SKIP();
l_LEFT_405 = r_BIN_NODE((l_T_407).f_TX, (l_T_407).f_LINE, l_LEFT_405, r_PARSE_FACTOR());
}
}
else
{
{
R17 * l_N_408; memset(&l_N_408, 0, sizeof l_N_408);
l_N_408 = r_TRY_SCALED(l_LEFT_405, rt_str("* / // MOD", 10));
if ((l_N_408 == NULL))
{
{ R17 * rv409 = l_LEFT_405;
return rv409; }
}
((*(R17 *)rt_nil_check(l_N_408))).f_B = r_PARSE_FACTOR();
l_LEFT_405 = l_N_408;
}
}
}
RT_B_TICK();
} L_end406: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_FACTOR(void) { RT_B_TICK(); 
R17 * l_LEFT_410; memset(&l_LEFT_410, 0, sizeof l_LEFT_410);
l_LEFT_410 = r_PARSE_SECONDARY();
for (;;) {
{
if (r_IS(rt_str("**", 2)))
{
{
R10 l_T_412; memset(&l_T_412, 0, sizeof l_T_412);
S_R10(&l_T_412, r_CUR(), 0);
r_SKIP();
l_LEFT_410 = r_BIN_NODE((l_T_412).f_TX, (l_T_412).f_LINE, l_LEFT_410, r_PARSE_SECONDARY());
}
}
else
{
{
R17 * l_N_413; memset(&l_N_413, 0, sizeof l_N_413);
l_N_413 = r_TRY_SCALED(l_LEFT_410, rt_str("**", 2));
if ((l_N_413 == NULL))
{
{ R17 * rv414 = l_LEFT_410;
return rv414; }
}
((*(R17 *)rt_nil_check(l_N_413))).f_B = r_PARSE_SECONDARY();
l_LEFT_410 = l_N_413;
}
}
}
RT_B_TICK();
} L_end411: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_SECONDARY(void) { RT_B_TICK(); 
R10 l_T_415; memset(&l_T_415, 0, sizeof l_T_415);
S_R10(&l_T_415, r_CUR(), 0);
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("NOT", 3))))
{
{
R17 * l_N_416; memset(&l_N_416, 0, sizeof l_N_416);
l_N_416 = r_NEW_NODE(g_N_UNOP, (l_T_415).f_LINE);
r_SKIP();
S_R9(&((*(R17 *)rt_nil_check(l_N_416))).f_NAME, (l_T_415).f_TX, 0);
((*(R17 *)rt_nil_check(l_N_416))).f_A = r_PARSE_POSTFIX();
{ R17 * rv417 = l_N_416;
return rv417; }
}
}
{ R17 * rv418 = r_PARSE_POSTFIX();
return rv418; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ARGS(R17 * p_N) { RT_B_TICK(); 
R17 * l_HEAD_419; memset(&l_HEAD_419, 0, sizeof l_HEAD_419);
l_HEAD_419 = NULL;
R17 * l_TAIL_420; memset(&l_TAIL_420, 0, sizeof l_TAIL_420);
l_TAIL_420 = NULL;
rt_int l_GROUP_421; memset(&l_GROUP_421, 0, sizeof l_GROUP_421);
l_GROUP_421 = ((rt_int)0LL);
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end422;
{
if (r_ACCEPT(rt_str("#", 1)))
{
switch (l_GROUP_421) {
case 0:
{
((*(R17 *)rt_nil_check(p_N))).f_A = l_HEAD_419;
}
break;
case 1:
{
((*(R17 *)rt_nil_check(p_N))).f_B = l_HEAD_419;
}
break;
default:
{
r_FAIL(((*(R17 *)rt_nil_check(p_N))).f_LINE, rt_str("too many # in an argument list", 30));
}
break;
}
l_GROUP_421 = rt_add(l_GROUP_421, ((rt_int)1LL));
l_HEAD_419 = NULL;
l_TAIL_420 = NULL;
}
else
{
if ((l_GROUP_421 == ((rt_int)0LL)))
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_419, &l_TAIL_420);
if ((r_IS(rt_str("RETURNS", 7)) && (((*(R17 *)rt_nil_check(l_TAIL_420))).f_KIND == g_N_APPLY)))
{
r_SKIP();
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_TAIL_420))).f_E = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
}
else
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_419, &l_TAIL_420);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
RT_B_TICK();
} L_end422: ;
r_EXPECT(rt_str(")", 1));
switch (l_GROUP_421) {
case 0:
{
((*(R17 *)rt_nil_check(p_N))).f_A = l_HEAD_419;
}
break;
case 1:
{
((*(R17 *)rt_nil_check(p_N))).f_B = l_HEAD_419;
}
break;
default:
{
((*(R17 *)rt_nil_check(p_N))).f_C = l_HEAD_419;
}
break;
}
{ R17 * rv423 = p_N;
return rv423; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_POSTFIX(void) { RT_B_TICK(); 
R17 * l_E_424; memset(&l_E_424, 0, sizeof l_E_424);
l_E_424 = r_PARSE_ATOM();
R17 * l_N_425; memset(&l_N_425, 0, sizeof l_N_425);
for (;;) {
{
{
rt_int l_LINE_427; memset(&l_LINE_427, 0, sizeof l_LINE_427);
l_LINE_427 = r_LINE_NOW();
if ((r_IS(rt_str("(", 1)) && (((*(R17 *)rt_nil_check(l_E_424))).f_KIND == g_N_ENUMLIT)))
{
((*(R17 *)rt_nil_check(l_E_424))).f_KIND = g_N_NAME;
}
if ((r_IS(rt_str("(", 1)) && (((*(R17 *)rt_nil_check(l_E_424))).f_KIND == g_N_NAME)))
{
((*(R17 *)rt_nil_check(l_E_424))).f_KIND = g_N_APPLY;
l_E_424 = r_PARSE_ARGS(l_E_424);
}
else if (r_IS(rt_str("(", 1)))
{
l_N_425 = r_NEW_NODE(g_N_INDEX, l_LINE_427);
l_N_425 = r_PARSE_ARGS(l_N_425);
((*(R17 *)rt_nil_check(l_N_425))).f_B = ((*(R17 *)rt_nil_check(l_N_425))).f_A;
((*(R17 *)rt_nil_check(l_N_425))).f_A = l_E_424;
l_E_424 = l_N_425;
}
else if (r_ACCEPT(rt_str(".", 1)))
{
l_N_425 = r_NEW_NODE(g_N_FIELD, l_LINE_427);
((*(R17 *)rt_nil_check(l_N_425))).f_A = l_E_424;
S_R9(&((*(R17 *)rt_nil_check(l_N_425))).f_NAME, r_IDENT(), 0);
l_E_424 = l_N_425;
}
else if (r_ACCEPT(rt_str("@", 1)))
{
l_N_425 = r_NEW_NODE(g_N_DEREF, l_LINE_427);
((*(R17 *)rt_nil_check(l_N_425))).f_A = l_E_424;
l_E_424 = l_N_425;
}
else if ((r_IS(rt_str("[", 1)) && (!r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("]", 1)))))
{
r_SKIP();
l_N_425 = r_NEW_NODE(g_N_SUBSTR, l_LINE_427);
((*(R17 *)rt_nil_check(l_N_425))).f_A = l_E_424;
((*(R17 *)rt_nil_check(l_N_425))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_425))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str("]", 1));
l_E_424 = l_N_425;
}
else
{
{ R17 * rv428 = l_E_424;
return rv428; }
}
}
}
RT_B_TICK();
} L_end426: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_BITS(rt_int p_BITS_PER, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_AT_429; memset(&l_AT_429, 0, sizeof l_AT_429);
l_AT_429 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R17 * l_N_430; memset(&l_N_430, 0, sizeof l_N_430);
l_N_430 = r_NEW_NODE(g_N_BITS, p_LINE);
R9 l_R_431; memset(&l_R_431, 0, sizeof l_R_431);
if ((!r_IS_KIND(g_K_STR)))
{
r_FAIL(p_LINE, rt_str("a quoted bitstring expected", 27));
}
for (;;) {
if ((!r_IS_KIND(g_K_STR))) goto L_end432;
{
{
R9 l_T_433; memset(&l_T_433, 0, sizeof l_T_433);
S_R9(&l_T_433, (r_CUR()).f_TX, 0);
rstr l_S_434; memset(&l_S_434, 0, sizeof l_S_434);
l_S_434 = rt_b_str_new((l_T_433).f_LEN, 0);
rt_b_assign(&l_S_434, r_STR(l_T_433, (l_T_433).f_LEN));
{ rt_int it436_lo = ((rt_int)0LL), it436_hi = rt_sub((l_T_433).f_LEN, ((rt_int)1LL));
for (rt_int it436 = it436_lo; it436 <= it436_hi; it436++) {
{
if ((!rt_b_eq(rt_b_slice(l_S_434, it436, it436), rt_str(" ", 1))))
{
{
rt_int l_C_437; memset(&l_C_437, 0, sizeof l_C_437);
l_C_437 = r_CODE_OF(rt_b_slice(l_S_434, it436, it436));
rt_int l_V_438; memset(&l_V_438, 0, sizeof l_V_438);
l_V_438 = rt_sub(l_C_437, ((rt_int)48LL));
rt_int l_P_439; memset(&l_P_439, 0, sizeof l_P_439);
l_P_439 = ((rt_int)1LL);
if ((l_C_437 >= ((rt_int)65LL)))
{
l_V_438 = rt_sub(l_C_437, ((rt_int)55LL));
}
{ rt_int it441_lo = ((rt_int)1LL), it441_hi = p_BITS_PER;
for (rt_int it441 = it441_lo; it441 <= it441_hi; it441++) {
{
l_P_439 = rt_mul(l_P_439, ((rt_int)2LL));
}
RT_B_TICK();
if (it441 == it441_hi) break;
} } L_end440: ;
if (((l_V_438 < ((rt_int)0LL)) || (l_V_438 >= l_P_439)))
{
r_FAIL(p_LINE, rt_str("a bad digit in a bitstring literal", 34));
}
{ rt_int it443_lo = ((rt_int)1LL), it443_hi = p_BITS_PER;
for (rt_int it443 = it443_lo; it443 <= it443_hi; it443++) {
{
l_P_439 = rt_quot(l_P_439, ((rt_int)2LL));
if ((rt_rem((rt_quot(l_V_438, l_P_439)), ((rt_int)2LL)) == ((rt_int)1LL)))
{
S_R9(&l_R_431, r_MK(rt_str("1", 1)), 0);
}
else
{
S_R9(&l_R_431, r_MK(rt_str("0", 1)), 0);
}
}
RT_B_TICK();
if (it443 == it443_hi) break;
} } L_end442: ;
}
}
}
RT_B_TICK();
if (it436 == it436_hi) break;
} } L_end435: ;
}
r_SKIP();
}
RT_B_TICK();
} L_end432: ;
S_R9(&((*(R17 *)rt_nil_check(l_N_430))).f_NAME, ({ R9 rc444; memset(&rc444, 0, sizeof rc444);  rc444.f_AT = l_AT_429; rc444.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_429); rc444.f_H = rt_neg(((rt_int)1LL)); rc444; }), 0);
{ R17 * rv445 = l_N_430;
return rv445; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ATOM(void) { RT_B_TICK(); 
R10 l_T_446; memset(&l_T_446, 0, sizeof l_T_446);
S_R10(&l_T_446, r_CUR(), 0);
R17 * l_N_447; memset(&l_N_447, 0, sizeof l_N_447);
if (((l_T_446).f_KIND == g_K_NUM))
{
l_N_447 = r_NEW_NODE(g_N_INT, (l_T_446).f_LINE);
((*(R17 *)rt_nil_check(l_N_447))).f_IV = (l_T_446).f_IV;
S_R9(&((*(R17 *)rt_nil_check(l_N_447))).f_NAME, (l_T_446).f_TX, 0);
r_SKIP();
{ R17 * rv448 = l_N_447;
return rv448; }
}
if ((((l_T_446).f_KIND == g_K_REAL) || ((l_T_446).f_KIND == g_K_FIX)))
{
l_N_447 = r_NEW_NODE(g_N_REAL, (l_T_446).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_447))).f_NAME, (l_T_446).f_TX, 0);
if (((l_T_446).f_KIND == g_K_FIX))
{
((*(R17 *)rt_nil_check(l_N_447))).f_FL = ((rt_int)1LL);
((*(R17 *)rt_nil_check(l_N_447))).f_IV = (l_T_446).f_IV;
}
r_SKIP();
{ R17 * rv449 = l_N_447;
return rv449; }
}
if (((l_T_446).f_KIND == g_K_GEN))
{
{ R17 * rv450 = r_PARSE_TYPE_ARG();
return rv450; }
}
if (((r_IS(rt_str("BIN", 3)) || r_IS(rt_str("OCT", 3))) || r_IS(rt_str("HEX", 3))))
{
r_SKIP();
if (r_TOK_IS(l_T_446, rt_str("BIN", 3)))
{
{ R17 * rv451 = r_PARSE_BITS(((rt_int)1LL), (l_T_446).f_LINE);
return rv451; }
}
else if (r_TOK_IS(l_T_446, rt_str("OCT", 3)))
{
{ R17 * rv452 = r_PARSE_BITS(((rt_int)3LL), (l_T_446).f_LINE);
return rv452; }
}
{ R17 * rv453 = r_PARSE_BITS(((rt_int)4LL), (l_T_446).f_LINE);
return rv453; }
}
if ((((l_T_446).f_KIND == g_K_STR) || ((l_T_446).f_KIND == g_K_ENUM)))
{
{ R17 * rv454 = r_PARSE_CHARSTRING(r_NO_TEXT());
return rv454; }
}
if ((((l_T_446).f_KIND == g_K_ID) && ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_STR) || (((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM) && (!r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str("(", 1)))) && (!r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":=", 2)))))))))
{
r_SKIP();
{ R17 * rv455 = r_PARSE_CHARSTRING((l_T_446).f_TX);
return rv455; }
}
if (r_ACCEPT(rt_str("TRUE", 4)))
{
l_N_447 = r_NEW_NODE(g_N_BOOL, (l_T_446).f_LINE);
((*(R17 *)rt_nil_check(l_N_447))).f_IV = ((rt_int)1LL);
{ R17 * rv456 = l_N_447;
return rv456; }
}
else if (r_ACCEPT(rt_str("FALSE", 5)))
{
{ R17 * rv457 = r_NEW_NODE(g_N_BOOL, (l_T_446).f_LINE);
return rv457; }
}
else if (r_ACCEPT(rt_str("NIL", 3)))
{
{ R17 * rv458 = r_NEW_NODE(g_N_NIL, (l_T_446).f_LINE);
return rv458; }
}
else if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R17 * rv459 = r_NEW_NODE(g_N_ANY, (l_T_446).f_LINE);
return rv459; }
}
if (r_ACCEPT(rt_str("[", 1)))
{
{
R17 * l_TS_460; memset(&l_TS_460, 0, sizeof l_TS_460);
l_TS_460 = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str("]", 1));
r_EXPECT(rt_str("$$", 2));
if (((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
l_N_447 = r_PARSE_ATOM();
((*(R17 *)rt_nil_check(l_N_447))).f_B = l_TS_460;
{ R17 * rv461 = l_N_447;
return rv461; }
}
l_N_447 = r_NEW_NODE(g_N_TYPESPEC, (l_T_446).f_LINE);
((*(R17 *)rt_nil_check(l_N_447))).f_A = l_TS_460;
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_N_447))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
{ R17 * rv462 = l_N_447;
return rv462; }
}
}
if (r_IS(rt_str("(", 1)))
{
if ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
{
R17 * l_HEAD_463; memset(&l_HEAD_463, 0, sizeof l_HEAD_463);
l_HEAD_463 = NULL;
R17 * l_TAIL_464; memset(&l_TAIL_464, 0, sizeof l_TAIL_464);
l_TAIL_464 = NULL;
r_SKIP();
for (;;) {
{
l_N_447 = r_NEW_NODE(g_N_FINIT, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_N_447))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_447))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_N_447, &l_HEAD_463, &l_TAIL_464);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end465;
} L_end465: ;
r_EXPECT(rt_str(")", 1));
l_N_447 = r_NEW_NODE(g_N_RECCONS, (l_T_446).f_LINE);
((*(R17 *)rt_nil_check(l_N_447))).f_A = l_HEAD_463;
{ R17 * rv466 = l_N_447;
return rv466; }
}
}
r_SKIP();
{
R17 * l_E_467; memset(&l_E_467, 0, sizeof l_E_467);
l_E_467 = r_PARSE_EXPR();
if (r_IS(rt_str(",", 1)))
{
{
R17 * l_HEAD_468; memset(&l_HEAD_468, 0, sizeof l_HEAD_468);
l_HEAD_468 = NULL;
R17 * l_TAIL_469; memset(&l_TAIL_469, 0, sizeof l_TAIL_469);
l_TAIL_469 = NULL;
r_ADD_LIST(l_E_467, &l_HEAD_468, &l_TAIL_469);
for (;;) {
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end470;
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_468, &l_TAIL_469);
}
RT_B_TICK();
} L_end470: ;
r_EXPECT(rt_str(")", 1));
l_N_447 = r_NEW_NODE(g_N_ARRCONS, (l_T_446).f_LINE);
((*(R17 *)rt_nil_check(l_N_447))).f_A = l_HEAD_468;
{ R17 * rv471 = l_N_447;
return rv471; }
}
}
r_EXPECT(rt_str(")", 1));
l_N_447 = r_NEW_NODE(g_N_PAREN, (l_T_446).f_LINE);
((*(R17 *)rt_nil_check(l_N_447))).f_A = l_E_467;
{ R17 * rv472 = l_N_447;
return rv472; }
}
}
if (((l_T_446).f_KIND == g_K_ID))
{
l_N_447 = r_NEW_NODE(g_N_NAME, (l_T_446).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_447))).f_NAME, ((*(R17 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (((((r_TEQS(((*(R17 *)rt_nil_check(l_N_447))).f_NAME, rt_str("NEW", 3)) || r_TEQS(((*(R17 *)rt_nil_check(l_N_447))).f_NAME, rt_str("PTR$NEW", 7))) || r_TEQS(((*(R17 *)rt_nil_check(l_N_447))).f_NAME, rt_str("SEMAPHORE$NEW", 13)))) && r_IS(rt_str("(", 1))))
{
((*(R17 *)rt_nil_check(l_N_447))).f_KIND = g_N_NEW;
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_N_447))).f_A = r_PARSE_TYPE_ARG();
r_EXPECT(rt_str(")", 1));
}
{ R17 * rv473 = l_N_447;
return rv473; }
}
r_FAILT((l_T_446).f_LINE, rt_str("an expression expected, not ", 28), (l_T_446).f_TX);
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CHARSTRING(R9 p_CHARSET) { RT_B_TICK(); 
rt_int l_LINE_474; memset(&l_LINE_474, 0, sizeof l_LINE_474);
l_LINE_474 = r_LINE_NOW();
R17 * l_HEAD_475; memset(&l_HEAD_475, 0, sizeof l_HEAD_475);
l_HEAD_475 = NULL;
R17 * l_TAIL_476; memset(&l_TAIL_476, 0, sizeof l_TAIL_476);
l_TAIL_476 = NULL;
rt_int l_STRINGS_477; memset(&l_STRINGS_477, 0, sizeof l_STRINGS_477);
l_STRINGS_477 = ((rt_int)0LL);
R17 * l_N_478; memset(&l_N_478, 0, sizeof l_N_478);
for (;;) {
if ((!((r_IS_KIND(g_K_STR) || r_IS_KIND(g_K_ENUM))))) goto L_end479;
{
l_N_478 = r_NEW_NODE(g_N_PART, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_N_478))).f_IV = (r_CUR()).f_KIND;
S_R9(&((*(R17 *)rt_nil_check(l_N_478))).f_NAME, (r_CUR()).f_TX, 0);
if ((((*(R17 *)rt_nil_check(l_N_478))).f_IV == g_K_STR))
{
l_STRINGS_477 = rt_add(l_STRINGS_477, ((rt_int)1LL));
}
r_SKIP();
r_ADD_LIST(l_N_478, &l_HEAD_475, &l_TAIL_476);
}
RT_B_TICK();
} L_end479: ;
if ((((l_STRINGS_477 == ((rt_int)0LL)) && ((p_CHARSET).f_LEN == ((rt_int)0LL))) && (((*(R17 *)rt_nil_check(l_HEAD_475))).f_NEXT == NULL)))
{
((*(R17 *)rt_nil_check(l_HEAD_475))).f_KIND = g_N_ENUMLIT;
{ R17 * rv480 = l_HEAD_475;
return rv480; }
}
l_N_478 = r_NEW_NODE(g_N_STR, l_LINE_474);
((*(R17 *)rt_nil_check(l_N_478))).f_A = l_HEAD_475;
S_R9(&((*(R17 *)rt_nil_check(l_N_478))).f_NAME, p_CHARSET, 0);
{ R17 * rv481 = l_N_478;
return rv481; }
rt_raise(RT_X_INIT);
}
static rt_int r_AT_BODY_END(void) { RT_B_TICK(); 
{ rt_int rv482 = ((((((((((r_IS_KIND(g_K_EOF) || r_IS(rt_str("END", 3))) || r_IS(rt_str("ELSE", 4))) || r_IS(rt_str("ORIF", 4))) || r_IS(rt_str("EXCEPT", 6))) || r_IS(rt_str("PROCEDURE", 9))) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()) || r_IS(rt_str("MODULE", 6))) || r_IS(rt_str("PATH", 4)));
return rv482; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_STATEMENTS(void) { RT_B_TICK(); 
R17 * l_HEAD_483; memset(&l_HEAD_483, 0, sizeof l_HEAD_483);
l_HEAD_483 = NULL;
R17 * l_TAIL_484; memset(&l_TAIL_484, 0, sizeof l_TAIL_484);
l_TAIL_484 = NULL;
for (;;) {
if (r_AT_BODY_END()) goto L_end485;
{
r_ADD_LIST(r_PARSE_STATEMENT(), &l_HEAD_483, &l_TAIL_484);
}
RT_B_TICK();
} L_end485: ;
{ R17 * rv486 = l_HEAD_483;
return rv486; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_HANDLERS(void) { RT_B_TICK(); 
R17 * l_HEAD_487; memset(&l_HEAD_487, 0, sizeof l_HEAD_487);
l_HEAD_487 = NULL;
R17 * l_TAIL_488; memset(&l_TAIL_488, 0, sizeof l_TAIL_488);
l_TAIL_488 = NULL;
r_EXPECT(rt_str("EXCEPT", 6));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end489;
{
{
R17 * l_H_490; memset(&l_H_490, 0, sizeof l_H_490);
l_H_490 = r_NEW_NODE(g_N_HANDLER, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_H_490))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_H_490))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_H_490, &l_HEAD_487, &l_TAIL_488);
}
}
RT_B_TICK();
} L_end489: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("EXCEPT", 6));
r_EXPECT(rt_str(";", 1));
{ R17 * rv491 = l_HEAD_487;
return rv491; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_STATEMENT(void) { RT_B_TICK(); 
R17 * l_S_492; memset(&l_S_492, 0, sizeof l_S_492);
if ((r_IS_KIND(g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str(":", 1))))
{
l_S_492 = r_NEW_NODE(g_N_LABELED, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_S_492))).f_NAME, r_IDENT(), 0);
r_SKIP();
((*(R17 *)rt_nil_check(l_S_492))).f_A = r_PARSE_STATEMENT();
{ R17 * rv493 = l_S_492;
return rv493; }
}
l_S_492 = r_PARSE_UNLABELED();
if (r_IS(rt_str("EXCEPT", 6)))
{
{
R17 * l_X_494; memset(&l_X_494, 0, sizeof l_X_494);
l_X_494 = r_NEW_NODE(g_N_EXCEPT, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_X_494))).f_A = l_S_492;
((*(R17 *)rt_nil_check(l_X_494))).f_B = r_PARSE_HANDLERS();
{ R17 * rv495 = l_X_494;
return rv495; }
}
}
{ R17 * rv496 = l_S_492;
return rv496; }
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
static R17 * r_PARSE_UNLABELED(void) { RT_B_TICK(); 
rt_int l_LINE_497; memset(&l_LINE_497, 0, sizeof l_LINE_497);
l_LINE_497 = r_LINE_NOW();
R17 * l_S_498; memset(&l_S_498, 0, sizeof l_S_498);
R17 * l_T_499; memset(&l_T_499, 0, sizeof l_T_499);
if (r_ACCEPT(rt_str(";", 1)))
{
{ R17 * rv500 = r_NEW_NODE(g_N_NULL, l_LINE_497);
return rv500; }
}
else if (r_IS(rt_str("IF", 2)))
{
{ R17 * rv501 = r_PARSE_IF();
return rv501; }
}
else if (r_IS(rt_str("SELECT", 6)))
{
{ R17 * rv502 = r_PARSE_CASE();
return rv502; }
}
else if (r_IS(rt_str("LOOP", 4)))
{
{ R17 * rv503 = r_PARSE_LOOP();
return rv503; }
}
else if (r_IS(rt_str("PAR_BLOCK", 9)))
{
{ R17 * rv504 = r_PARSE_PAR();
return rv504; }
}
else if (r_ACCEPT(rt_str("BLOCK", 5)))
{
l_S_498 = r_NEW_NODE(g_N_BLOCK, l_LINE_497);
((*(R17 *)rt_nil_check(l_S_498))).f_A = r_PARSE_BODY();
r_EXPECT_END(rt_str("BLOCK", 5));
{ R17 * rv505 = l_S_498;
return rv505; }
}
else if (r_ACCEPT(rt_str("WITH", 4)))
{
l_S_498 = r_NEW_NODE(g_N_WITH, l_LINE_497);
S_R9(&((*(R17 *)rt_nil_check(l_S_498))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("NAMING", 6)))
{
((*(R17 *)rt_nil_check(l_S_498))).f_IV = ((rt_int)1LL);
((*(R17 *)rt_nil_check(l_S_498))).f_A = r_PARSE_POSTFIX();
}
else
{
r_EXPECT(rt_str(":=", 2));
((*(R17 *)rt_nil_check(l_S_498))).f_A = r_PARSE_EXPR();
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
((*(R17 *)rt_nil_check(l_S_498))).f_B = r_PARSE_UNLABELED();
{ R17 * rv506 = l_S_498;
return rv506; }
}
else if (r_ACCEPT(rt_str("EXIT", 4)))
{
r_EXPECT(rt_str(";", 1));
{ R17 * rv507 = r_NEW_NODE(g_N_EXIT, l_LINE_497);
return rv507; }
}
else if (r_ACCEPT(rt_str("GO", 2)))
{
r_EXPECT(rt_str("TO", 2));
l_S_498 = r_NEW_NODE(g_N_GOTO, l_LINE_497);
S_R9(&((*(R17 *)rt_nil_check(l_S_498))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(";", 1));
{ R17 * rv508 = l_S_498;
return rv508; }
}
else if (r_ACCEPT(rt_str("RETURN", 6)))
{
l_S_498 = r_NEW_NODE(g_N_RETURN, l_LINE_497);
if ((!r_IS(rt_str(";", 1))))
{
((*(R17 *)rt_nil_check(l_S_498))).f_A = r_PARSE_EXPR();
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv509 = l_S_498;
return rv509; }
}
else if (r_ACCEPT(rt_str("SIGNAL", 6)))
{
l_S_498 = r_NEW_NODE(g_N_SIGNAL, l_LINE_497);
if (r_IS_KIND(g_K_ID))
{
S_R9(&((*(R17 *)rt_nil_check(l_S_498))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv510 = l_S_498;
return rv510; }
}
else if (r_ACCEPT(rt_str("ASSERT", 6)))
{
l_S_498 = r_NEW_NODE(g_N_ASSERT, l_LINE_497);
((*(R17 *)rt_nil_check(l_S_498))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R17 * rv511 = l_S_498;
return rv511; }
}
else if (r_ACCEPT(rt_str("TERMINATE", 9)))
{
l_S_498 = r_NEW_NODE(g_N_TERMINATE, l_LINE_497);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_S_498))).f_A = r_PARSE_POSTFIX();
r_EXPECT(rt_str(")", 1));
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv512 = l_S_498;
return rv512; }
}
l_T_499 = r_PARSE_POSTFIX();
if (r_IS(rt_str("[", 1)))
{
r_FAIL(l_LINE_497, rt_str("a substring of a substring", 26));
}
if (r_ACCEPT(rt_str(":=", 2)))
{
l_S_498 = r_NEW_NODE(g_N_ASSIGN, l_LINE_497);
((*(R17 *)rt_nil_check(l_S_498))).f_A = l_T_499;
((*(R17 *)rt_nil_check(l_S_498))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R17 * rv513 = l_S_498;
return rv513; }
}
r_EXPECT(rt_str(";", 1));
if ((((((*(R17 *)rt_nil_check(l_T_499))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_T_499))).f_KIND == g_N_APPLY)) || (((*(R17 *)rt_nil_check(l_T_499))).f_KIND == g_N_ENUMLIT)))
{
((*(R17 *)rt_nil_check(l_T_499))).f_KIND = g_N_CALL;
}
else
{
r_FAIL(l_LINE_497, rt_str("a statement expected", 20));
}
{ R17 * rv514 = l_T_499;
return rv514; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_IF(void) { RT_B_TICK(); 
R17 * l_S_515; memset(&l_S_515, 0, sizeof l_S_515);
l_S_515 = r_NEW_NODE(g_N_IF, r_LINE_NOW());
R17 * l_HEAD_516; memset(&l_HEAD_516, 0, sizeof l_HEAD_516);
l_HEAD_516 = NULL;
R17 * l_TAIL_517; memset(&l_TAIL_517, 0, sizeof l_TAIL_517);
l_TAIL_517 = NULL;
r_EXPECT(rt_str("IF", 2));
for (;;) {
{
{
R17 * l_ARM_519; memset(&l_ARM_519, 0, sizeof l_ARM_519);
l_ARM_519 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_ARM_519))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("THEN", 4));
((*(R17 *)rt_nil_check(l_ARM_519))).f_B = r_PARSE_BODY();
r_ADD_LIST(l_ARM_519, &l_HEAD_516, &l_TAIL_517);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str("ORIF", 4)))) goto L_end518;
} L_end518: ;
((*(R17 *)rt_nil_check(l_S_515))).f_A = l_HEAD_516;
if (r_ACCEPT(rt_str("ELSE", 4)))
{
((*(R17 *)rt_nil_check(l_S_515))).f_B = r_PARSE_BODY();
}
r_EXPECT_END(rt_str("IF", 2));
{ R17 * rv520 = l_S_515;
return rv520; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CASE_LABEL(void) { RT_B_TICK(); 
if ((r_IS(rt_str("[", 1)) || ((r_IS(rt_str("(", 1)) && r_RANGE_AHEAD()))))
{
{ R17 * rv521 = r_PARSE_RANGE();
return rv521; }
}
{ R17 * rv522 = r_PARSE_EXPR();
return rv522; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CASE(void) { RT_B_TICK(); 
R17 * l_S_523; memset(&l_S_523, 0, sizeof l_S_523);
l_S_523 = r_NEW_NODE(g_N_CASE, r_LINE_NOW());
R17 * l_HEAD_524; memset(&l_HEAD_524, 0, sizeof l_HEAD_524);
l_HEAD_524 = NULL;
R17 * l_TAIL_525; memset(&l_TAIL_525, 0, sizeof l_TAIL_525);
l_TAIL_525 = NULL;
r_EXPECT(rt_str("SELECT", 6));
((*(R17 *)rt_nil_check(l_S_523))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end526;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_S_523))).f_C = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R17 *)rt_nil_check(l_S_523))).f_D = r_PARSE_HANDLERS();
}
}
else
{
{
R17 * l_ARM_527; memset(&l_ARM_527, 0, sizeof l_ARM_527);
l_ARM_527 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
R17 * l_LH_528; memset(&l_LH_528, 0, sizeof l_LH_528);
l_LH_528 = NULL;
R17 * l_LT_529; memset(&l_LT_529, 0, sizeof l_LT_529);
l_LT_529 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_528, &l_LT_529);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end530;
} L_end530: ;
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_ARM_527))).f_A = l_LH_528;
((*(R17 *)rt_nil_check(l_ARM_527))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R17 *)rt_nil_check(l_ARM_527))).f_C = r_PARSE_HANDLERS();
}
r_ADD_LIST(l_ARM_527, &l_HEAD_524, &l_TAIL_525);
}
}
}
RT_B_TICK();
} L_end526: ;
((*(R17 *)rt_nil_check(l_S_523))).f_B = l_HEAD_524;
r_EXPECT_END(rt_str("SELECT", 6));
{ R17 * rv531 = l_S_523;
return rv531; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_LOOP(void) { RT_B_TICK(); 
R17 * l_S_532; memset(&l_S_532, 0, sizeof l_S_532);
l_S_532 = r_NEW_NODE(g_N_LOOP, r_LINE_NOW());
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("FOR", 3)))
{
((*(R17 *)rt_nil_check(l_S_532))).f_KIND = g_N_FOR;
if (r_IS_KIND(g_K_ID))
{
S_R9(&((*(R17 *)rt_nil_check(l_S_532))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("IN", 2));
}
((*(R17 *)rt_nil_check(l_S_532))).f_A = r_PARSE_RANGE();
r_EXPECT(rt_str("DO", 2));
((*(R17 *)rt_nil_check(l_S_532))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_IS_KIND(g_K_ID))
{
if ((!r_TEQ(r_IDENT(), ((*(R17 *)rt_nil_check(l_S_532))).f_NAME)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier", 38));
}
}
else if (((((*(R17 *)rt_nil_check(l_S_532))).f_NAME).f_LEN > ((rt_int)0LL)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier (4.5.6.3)", 48));
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R17 * rv533 = l_S_532;
return rv533; }
}
if (r_ACCEPT(rt_str("UNTIL", 5)))
{
((*(R17 *)rt_nil_check(l_S_532))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("DO", 2));
}
((*(R17 *)rt_nil_check(l_S_532))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("WHEN", 4)))
{
if ((!(((*(R17 *)rt_nil_check(l_S_532))).f_A == NULL)))
{
r_FAIL(r_LINE_NOW(), rt_str("only one of UNTIL and WHEN (4.5.6.1)", 36));
}
((*(R17 *)rt_nil_check(l_S_532))).f_C = r_PARSE_EXPR();
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R17 * rv534 = l_S_532;
return rv534; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_PAR(void) { RT_B_TICK(); 
R17 * l_S_535; memset(&l_S_535, 0, sizeof l_S_535);
l_S_535 = r_NEW_NODE(g_N_PAR, r_LINE_NOW());
R17 * l_HEAD_536; memset(&l_HEAD_536, 0, sizeof l_HEAD_536);
l_HEAD_536 = NULL;
R17 * l_TAIL_537; memset(&l_TAIL_537, 0, sizeof l_TAIL_537);
l_TAIL_537 = NULL;
r_EXPECT(rt_str("PAR_BLOCK", 9));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end538;
{
{
R17 * l_P_539; memset(&l_P_539, 0, sizeof l_P_539);
l_P_539 = r_NEW_NODE(g_N_PATH, r_LINE_NOW());
R17 * l_H_540; memset(&l_H_540, 0, sizeof l_H_540);
l_H_540 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
r_EXPECT(rt_str("PATH", 4));
S_R9(&((*(R17 *)rt_nil_check(l_P_539))).f_NAME, r_IDENT(), 0);
((*(R17 *)rt_nil_check(l_P_539))).f_E = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_P_539))).f_LINE);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_539))).f_E))).f_A = l_H_540;
if (r_ACCEPT(rt_str("FOR", 3)))
{
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_539))).f_E))).f_NAME, r_IDENT(), 0);
((*(R17 *)rt_nil_check(l_P_539))).f_FL = ((rt_int)1LL);
r_EXPECT(rt_str("IN", 2));
((*(R17 *)rt_nil_check(l_P_539))).f_A = r_PARSE_RANGE();
}
for (;;) {
{
if (r_ACCEPT(rt_str("PRIORITY", 8)))
{
((*(R17 *)rt_nil_check(l_P_539))).f_C = r_PARSE_EXPR();
}
else if (r_ACCEPT(rt_str("CONNECT", 7)))
{
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_P_539))).f_D = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R17 *)rt_nil_check(l_H_540))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R17 *)rt_nil_check(l_H_540))).f_B = r_PARSE_ITEMS();
}
else
{
goto L_end541;
}
}
RT_B_TICK();
} L_end541: ;
if ((!(((*(R17 *)rt_nil_check(l_P_539))).f_D == NULL)))
{
r_CONNECT_KNOWN(((*(R17 *)rt_nil_check(l_P_539))).f_D, l_H_540);
}
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_P_539))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PATH", 4));
r_EXPECT_NAME(((*(R17 *)rt_nil_check(l_P_539))).f_NAME);
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_P_539, &l_HEAD_536, &l_TAIL_537);
}
}
RT_B_TICK();
} L_end538: ;
((*(R17 *)rt_nil_check(l_S_535))).f_A = l_HEAD_536;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PAR_BLOCK", 9));
r_EXPECT(rt_str(";", 1));
{ R17 * rv542 = l_S_535;
return rv542; }
rt_raise(RT_X_INIT);
}
static void r_CONNECT_KNOWN(R17 * p_E, R17 * p_H) { RT_B_TICK(); 
R17 * l_R_543; memset(&l_R_543, 0, sizeof l_R_543);
l_R_543 = p_E;
for (;;) {
if (((((*(R17 *)rt_nil_check(l_R_543))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_543))).f_KIND == g_N_APPLY))) goto L_end544;
{
if (((!(((*(R17 *)rt_nil_check(l_R_543))).f_KIND == g_N_INDEX)) && (!(((*(R17 *)rt_nil_check(l_R_543))).f_KIND == g_N_FIELD))))
{
return;
}
l_R_543 = ((*(R17 *)rt_nil_check(l_R_543))).f_A;
}
RT_B_TICK();
} L_end544: ;
if ((((*(R17 *)rt_nil_check(p_H))).f_B == NULL))
{
((*(R17 *)rt_nil_check(p_H))).f_B = r_NEW_NODE(g_N_ITEMS, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
{
R17 * l_P_545; memset(&l_P_545, 0, sizeof l_P_545);
l_P_545 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_H))).f_B))).f_A;
for (;;) {
if ((l_P_545 == NULL)) goto L_end546;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_545))).f_NAME, ((*(R17 *)rt_nil_check(l_R_543))).f_NAME))
{
return;
}
l_P_545 = ((*(R17 *)rt_nil_check(l_P_545))).f_NEXT;
}
RT_B_TICK();
} L_end546: ;
l_P_545 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_H))).f_B))).f_B;
for (;;) {
if ((l_P_545 == NULL)) goto L_end547;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_545))).f_NAME, ((*(R17 *)rt_nil_check(l_R_543))).f_NAME))
{
return;
}
l_P_545 = ((*(R17 *)rt_nil_check(l_P_545))).f_NEXT;
}
RT_B_TICK();
} L_end547: ;
}
{
R17 * l_N_548; memset(&l_N_548, 0, sizeof l_N_548);
l_N_548 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_548))).f_NAME, ((*(R17 *)rt_nil_check(l_R_543))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_548))).f_NEXT = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_H))).f_B))).f_B;
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_H))).f_B))).f_B = l_N_548;
}
}
static R9 r_NO_TEXT(void) { RT_B_TICK(); 
{ R9 rv549 = ({ R9 rc550; memset(&rc550, 0, sizeof rc550);  rc550.f_AT = ((rt_int)0LL); rc550.f_LEN = ((rt_int)0LL); rc550.f_H = ((rt_int)0LL); rc550; });
return rv549; }
rt_raise(RT_X_INIT);
}
static R23 r_NO_MVAL(void) { RT_B_TICK(); 
{ R23 rv551 = ({ R23 rc552; memset(&rc552, 0, sizeof rc552);  rc552.f_OK = 0; rc552.f_V = ((rt_int)0LL); rc552; });
return rv551; }
rt_raise(RT_X_INIT);
}
static R23 r_SOME(rt_int p_V) { RT_B_TICK(); 
{ R23 rv553 = ({ R23 rc554; memset(&rc554, 0, sizeof rc554);  rc554.f_OK = 1; rc554.f_V = p_V; rc554; });
return rv553; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_SYM(rt_int p_KIND, R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_555; memset(&l_Y_555, 0, sizeof l_Y_555);
l_Y_555 = ((R12 *)rt_b_new(sizeof (R12)));
rt_int l_LEVEL_556; memset(&l_LEVEL_556, 0, sizeof l_LEVEL_556);
l_LEVEL_556 = ((rt_int)0LL);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_CS == NULL)))
{
l_LEVEL_556 = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
}
S_R12(&(*(R12 *)rt_nil_check(l_Y_555)), ({ R12 rc557; memset(&rc557, 0, sizeof rc557);  rc557.f_KIND = p_KIND; rc557.f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH; rc557.f_LEVEL = l_LEVEL_556; S_R9(&rc557.f_NAME, p_NAME, 0); rc557.f_T = NULL; S_R9(&rc557.f_ACCESS, r_NO_TEXT(), 0); S_R9(&rc557.f_FIELD, r_NO_TEXT(), 0); rc557.f_INPUT = 0; rc557.f_BYREF = 0; rc557.f_HASMV = 0; rc557.f_MV = ((rt_int)0LL); rc557.f_TS = NULL; rc557.f_BUSY = 0; S_R9(&rc557.f_FWD, r_NO_TEXT(), 0); rc557.f_PARAMS = NULL; rc557.f_RESULT = NULL; rc557.f_DECL = NULL; S_R9(&rc557.f_PREFIX, r_NO_TEXT(), 0); rc557.f_MODL = ((*(R7 *)rt_nil_check(g_W))).f_MODL; rc557.f_EXPORTED = 0; rc557.f_GENERIC = 0; rc557.f_FRAMED = 0; rc557.f_USES = NULL; rc557.f_INSTANCES = NULL; rc557.f_BINDINGS = NULL; rc557.f_ORIG = NULL; rc557.f_MEMBERS = NULL; rc557.f_SAVED = NULL; rc557.f_OWNER = r_CUR_OWNER(); rc557.f_WITHV = ((rt_int)0LL); rc557.f_LAZY = ((rt_int)0LL); rc557.f_SEGM = NULL; rc557.f_HOME = ((*(R7 *)rt_nil_check(g_W))).f_TRSEG; rc557.f_CHAIN = NULL; rc557.f_SNEXT = NULL; rc557; }), 0);
{ R12 * rv558 = l_Y_555;
return rv558; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_OWNER(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_IS == NULL))
{
{ rt_int rv559 = ((rt_int)0LL);
return rv559; }
}
{ rt_int rv560 = ((*(R20 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_ID;
return rv560; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIGINAL(R12 * p_Y) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)))
{
{ R12 * rv561 = ((*(R12 *)rt_nil_check(p_Y))).f_ORIG;
return rv561; }
}
{ R12 * rv562 = p_Y;
return rv562; }
rt_raise(RT_X_INIT);
}
static rt_int r_BUCKET(R9 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_H < ((rt_int)0LL)))
{
{ rt_int rv563 = r_HASH_OF(r_STR(p_NAME, (p_NAME).f_LEN));
return rv563; }
}
{ rt_int rv564 = (p_NAME).f_H;
return rv564; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_565; memset(&l_Y_565, 0, sizeof l_Y_565);
l_Y_565 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(r_BUCKET(p_NAME), (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
for (;;) {
if ((l_Y_565 == NULL)) goto L_end566;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_565))).f_NAME, p_NAME))
{
{ R12 * rv567 = l_Y_565;
return rv567; }
}
l_Y_565 = ((*(R12 *)rt_nil_check(l_Y_565))).f_CHAIN;
}
RT_B_TICK();
} L_end566: ;
{ R12 * rv568 = NULL;
return rv568; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_569; memset(&l_Y_569, 0, sizeof l_Y_569);
l_Y_569 = r_LOOKUP(p_NAME);
if ((l_Y_569 == NULL))
{
{ R12 * rv570 = NULL;
return rv570; }
}
{ R12 * rv571 = r_ORIGINAL(l_Y_569);
return rv571; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUPS(rstr p_NAME) { RT_B_TICK(); 
{ R12 * rv572 = r_LOOKUP(r_MKN(p_NAME));
return rv572; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP_NEXT(R12 * p_Y) { RT_B_TICK(); 
R12 * l_Z_573; memset(&l_Z_573, 0, sizeof l_Z_573);
l_Z_573 = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
for (;;) {
if ((l_Z_573 == NULL)) goto L_end574;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Z_573))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ R12 * rv575 = l_Z_573;
return rv575; }
}
l_Z_573 = ((*(R12 *)rt_nil_check(l_Z_573))).f_CHAIN;
}
RT_B_TICK();
} L_end574: ;
{ R12 * rv576 = NULL;
return rv576; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUTINE(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv577 = ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_BUILTIN));
return rv577; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_B_578; memset(&l_B_578, 0, sizeof l_B_578);
l_B_578 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_OLD_579; memset(&l_OLD_579, 0, sizeof l_OLD_579);
l_OLD_579 = r_LOOKUP(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
for (;;) {
if ((l_OLD_579 == NULL)) goto L_end580;
{
if ((!(((*(R12 *)rt_nil_check(l_OLD_579))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
goto L_end580;
}
if ((!((((r_IS_ROUTINE(l_OLD_579) && r_IS_ROUTINE(p_Y))) || (((((*(R12 *)rt_nil_check(l_OLD_579))).f_KIND == g_Y_ENUMLIT) && (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)))))))
{
r_FAILT(p_LINE, rt_str("redeclared in the same scope: ", 30), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
}
l_OLD_579 = r_LOOKUP_NEXT(l_OLD_579);
}
RT_B_TICK();
} L_end580: ;
((*(R12 *)rt_nil_check(p_Y))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_Y))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_578, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_578, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_Y;
((*(R12 *)rt_nil_check(p_Y))).f_SNEXT = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = p_Y;
}
static void r_OPEN_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_add(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
}
static void r_CLOSE_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == NULL)) goto L_end581;
{
if ((((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH <= ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end581;
}
r_UNLINK(((*(R7 *)rt_nil_check(g_W))).f_SCOPE);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_SNEXT;
}
RT_B_TICK();
} L_end581: ;
}
static void r_UNLINK(R12 * p_Y) { RT_B_TICK(); 
rt_int l_B_582; memset(&l_B_582, 0, sizeof l_B_582);
l_B_582 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_P_583; memset(&l_P_583, 0, sizeof l_P_583);
l_P_583 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_582, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
if ((l_P_583 == p_Y))
{
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_582, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
for (;;) {
if ((l_P_583 == NULL)) goto L_end584;
{
if ((((*(R12 *)rt_nil_check(l_P_583))).f_CHAIN == p_Y))
{
((*(R12 *)rt_nil_check(l_P_583))).f_CHAIN = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
l_P_583 = ((*(R12 *)rt_nil_check(l_P_583))).f_CHAIN;
}
RT_B_TICK();
} L_end584: ;
}
static R12 * r_TAKE_SCOPE(R12 * p_MARK) { RT_B_TICK(); 
R12 * l_HEAD_585; memset(&l_HEAD_585, 0, sizeof l_HEAD_585);
l_HEAD_585 = NULL;
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == p_MARK)) goto L_end586;
{
{
R12 * l_Y_587; memset(&l_Y_587, 0, sizeof l_Y_587);
l_Y_587 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_UNLINK(l_Y_587);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(l_Y_587))).f_SNEXT;
((*(R12 *)rt_nil_check(l_Y_587))).f_SNEXT = l_HEAD_585;
l_HEAD_585 = l_Y_587;
}
}
RT_B_TICK();
} L_end586: ;
{ R12 * rv588 = l_HEAD_585;
return rv588; }
rt_raise(RT_X_INIT);
}
static R22 * r_NEW_TYP(rt_int p_KIND) { RT_B_TICK(); 
R22 * l_T_589; memset(&l_T_589, 0, sizeof l_T_589);
l_T_589 = ((R22 *)rt_b_new(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_T_589)), ({ R22 rc590; memset(&rc590, 0, sizeof rc590);  rc590.f_KIND = p_KIND; rc590.f_SCALE = ((rt_int)0LL); S_R9(&rc590.f_LO_C, r_NO_TEXT(), 0); S_R9(&rc590.f_HI_C, r_NO_TEXT(), 0); S_R23(&rc590.f_MLO, r_NO_MVAL(), 0); S_R23(&rc590.f_MHI, r_NO_MVAL(), 0); rc590.f_RLEVEL = ((rt_int)0LL); S_R9(&rc590.f_LEN_C, r_NO_TEXT(), 0); S_R23(&rc590.f_MLEN, r_NO_MVAL(), 0); S_R9(&rc590.f_GEN, r_NO_TEXT(), 0); rc590.f_BASE = NULL; rc590.f_ELEM = NULL; rc590.f_TARGET = NULL; rc590.f_TARGET_TS = NULL; rc590.f_FIELDS = NULL; rc590.f_LITS = NULL; rc590.f_NLITS = ((rt_int)0LL); rc590.f_UNORDERED = 0; rc590.f_BOUNDS = NULL; rc590.f_DIMS = ((rt_int)0LL); rc590.f_ARGS = NULL; S_R9(&rc590.f_NAME, r_NO_TEXT(), 0); S_R9(&rc590.f_CNAME, r_NO_TEXT(), 0); rc590.f_MODL = NULL; rc590.f_REPS = NULL; rc590.f_DECL = NULL; S_R9(&rc590.f_GENP, r_NO_TEXT(), 0); rc590; }), 0);
{ R22 * rv591 = l_T_589;
return rv591; }
rt_raise(RT_X_INIT);
}
static R22 * r_COPY_TYP(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_592; memset(&l_C_592, 0, sizeof l_C_592);
l_C_592 = ((R22 *)rt_b_new(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_C_592)), (*(R22 *)rt_nil_check(p_T)), 0);
{ R22 * rv593 = l_C_592;
return rv593; }
rt_raise(RT_X_INIT);
}
static void r_PREDEF_TYPE(rstr p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_594; memset(&l_Y_594, 0, sizeof l_Y_594);
l_Y_594 = r_NEW_SYM(g_Y_TYPE, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_594))).f_T = p_T;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_594))).f_NAME, 0);
}
r_DEFINE(l_Y_594, ((rt_int)0LL));
}
static void r_PREDEF_BUILTIN(rstr p_NAME) { RT_B_TICK(); 
r_DEFINE(r_NEW_SYM(g_Y_BUILTIN, r_MKN(p_NAME)), ((rt_int)0LL));
}
static void r_PREDEF_CONST(rstr p_NAME, R22 * p_T, rt_int p_V) { RT_B_TICK(); 
R12 * l_Y_595; memset(&l_Y_595, 0, sizeof l_Y_595);
l_Y_595 = r_NEW_SYM(g_Y_CONST, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_595))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_595))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_595))).f_MV = p_V;
((*(R12 *)rt_nil_check(l_Y_595))).f_INPUT = 1;
S_R9(&((*(R12 *)rt_nil_check(l_Y_595))).f_ACCESS, r_FMT1(rt_str("((rt_int)@)", 11), r_NUM(p_V)), 0);
r_DEFINE(l_Y_595, ((rt_int)0LL));
}
static R22 * r_PREDEF_ENUM(rstr p_NAME, rstr p_NAMES, rt_int p_UNORDERED) { RT_B_TICK(); 
R17 * l_HEAD_596; memset(&l_HEAD_596, 0, sizeof l_HEAD_596);
l_HEAD_596 = NULL;
R17 * l_TAIL_597; memset(&l_TAIL_597, 0, sizeof l_TAIL_597);
l_TAIL_597 = NULL;
rt_int l_START_598; memset(&l_START_598, 0, sizeof l_START_598);
l_START_598 = ((rt_int)0LL);
{ rt_int it600_lo = ((rt_int)0LL), it600_hi = (rt_int)(p_NAMES).len;
for (rt_int it600 = it600_lo; it600 <= it600_hi; it600++) {
{
if (((it600 == (rt_int)(p_NAMES).len) || rt_b_eq(rt_b_slice(p_NAMES, it600, it600), rt_str(" ", 1))))
{
if ((it600 > l_START_598))
{
{
R17 * l_N_601; memset(&l_N_601, 0, sizeof l_N_601);
l_N_601 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_601))).f_NAME, r_MKN(rt_b_slice(p_NAMES, l_START_598, rt_sub(it600, ((rt_int)1LL)))), 0);
r_ADD_LIST(l_N_601, &l_HEAD_596, &l_TAIL_597);
}
}
l_START_598 = rt_add(it600, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it600 == it600_hi) break;
} } L_end599: ;
{
R22 * l_T_602; memset(&l_T_602, 0, sizeof l_T_602);
l_T_602 = r_ENUM_CLASS(l_HEAD_596, p_UNORDERED, ((rt_int)0LL));
r_PREDEF_TYPE(p_NAME, l_T_602);
{ R22 * rv603 = l_T_602;
return rv603; }
}
rt_raise(RT_X_INIT);
}
static void r_PREDEFINE(void) { RT_B_TICK(); 
R22 * l_T_604; memset(&l_T_604, 0, sizeof l_T_604);
R17 * l_ASCII_LITS_605; memset(&l_ASCII_LITS_605, 0, sizeof l_ASCII_LITS_605);
l_ASCII_LITS_605 = NULL;
R17 * l_TAIL_606; memset(&l_TAIL_606, 0, sizeof l_TAIL_606);
l_TAIL_606 = NULL;
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
{ rt_int it608_lo = ((rt_int)0LL), it608_hi = ((rt_int)127LL);
for (rt_int it608 = it608_lo; it608 <= it608_hi; it608++) {
{
{
R17 * l_N_609; memset(&l_N_609, 0, sizeof l_N_609);
l_N_609 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_609))).f_NAME, r_ASCII_NAME(it608), 0);
r_ADD_LIST(l_N_609, &l_ASCII_LITS_605, &l_TAIL_606);
}
}
RT_B_TICK();
if (it608 == it608_hi) break;
} } L_end607: ;
((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII = r_ENUM_CLASS(l_ASCII_LITS_605, 0, ((rt_int)0LL));
r_PREDEF_TYPE(rt_str("ASCII", 5), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII);
((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS = r_PREDEF_ENUM(rt_str("ROUNDINGS", 9), rt_str("ROUNDED TRUNCATED NATIVE_R NATIVE_T", 35), 0);
l_T_604 = r_PREDEF_ENUM(rt_str("FIXED_PRECISIONS", 16), rt_str("STD", 3), 0);
r_PREDEF_BOUNDS_DEF();
l_T_604 = r_PREDEF_ENUM(rt_str("SIGNING", 7), rt_str("SIGNED UNSIGNED", 15), 1);
l_T_604 = r_PREDEF_ENUM(rt_str("PACKING", 7), rt_str("DENSE PACKED UNPACKED", 21), 1);
l_T_604 = r_PREDEF_ENUM(rt_str("USAGE", 5), rt_str("SYNCH REGION", 12), 1);
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
rstr l_OPS_610; memset(&l_OPS_610, 0, sizeof l_OPS_610);
l_OPS_610 = rt_b_str_new(((rt_int)271LL), 0);
rt_b_assign(&l_OPS_610, rt_str(" ADD_ SUBTRACT_ MULTIPLY_ DIVIDE_ MODULUS_ EXPONENTIATE_ CONCATENATE_ EQUAL_ UNEQUAL_ GREATER_THAN_ LESS_THAN_ GREATER_EQUAL_ LESS_EQUAL_ AND_ OR_ XOR_ IMPLIES_ MD_ADD_ MD_SUBTRACT_ MD_MULTIPLY_ MD_DIVIDE_ NEGATE_ MON_PLUS_ COMPLEMENT_ STORE_ SUBSTRING_ SUBSTRING_STORE_ ", 271));
rt_int l_START_611; memset(&l_START_611, 0, sizeof l_START_611);
l_START_611 = ((rt_int)1LL);
{ rt_int it613_lo = ((rt_int)1LL), it613_hi = ((rt_int)270LL);
for (rt_int it613 = it613_lo; it613 <= it613_hi; it613++) {
{
if (rt_b_eq(rt_b_slice(l_OPS_610, it613, it613), rt_str(" ", 1)))
{
if ((it613 > l_START_611))
{
r_PREDEF_BUILTIN(rt_b_slice(l_OPS_610, l_START_611, rt_sub(it613, ((rt_int)1LL))));
}
l_START_611 = rt_add(it613, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it613 == it613_hi) break;
} } L_end612: ;
}
r_PREDEF_CONST(rt_str("MAX_NOM_PREC", 12), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)15LL));
r_PREDEF_CONST(rt_str("CLOCK_SCALE", 11), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)20LL));
r_OPEN_SCOPE();
}
static void r_PREDEF_BOUNDS_DEF(void) { RT_B_TICK(); 
R17 * l_F_614; memset(&l_F_614, 0, sizeof l_F_614);
l_F_614 = r_NEW_NODE(g_N_FORMAL, ((rt_int)0LL));
R17 * l_V_615; memset(&l_V_615, 0, sizeof l_V_615);
l_V_615 = r_NEW_NODE(g_N_VAR, ((rt_int)0LL));
R17 * l_R_616; memset(&l_R_616, 0, sizeof l_R_616);
l_R_616 = r_NEW_NODE(g_TS_RECORD, ((rt_int)0LL));
R17 * l_D_617; memset(&l_D_617, 0, sizeof l_D_617);
l_D_617 = r_NEW_NODE(g_N_TYPE, ((rt_int)0LL));
R17 * l_FX_618; memset(&l_FX_618, 0, sizeof l_FX_618);
l_FX_618 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
R12 * l_Y_619; memset(&l_Y_619, 0, sizeof l_Y_619);
l_Y_619 = r_NEW_SYM(g_Y_TYPE, r_MKN(rt_str("BOUNDS_DEF", 10)));
((*(R17 *)rt_nil_check(l_F_614))).f_A = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_F_614))).f_A))).f_NAME, r_MKN(rt_str("MAX_P", 5)), 0);
((*(R17 *)rt_nil_check(l_F_614))).f_B = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_F_614))).f_B))).f_NAME, r_MKN(rt_str("FIXED_PRECISIONS", 16)), 0);
S_R9(&((*(R17 *)rt_nil_check(l_FX_618))).f_NAME, r_MKN(rt_str("FIXED", 5)), 0);
((*(R17 *)rt_nil_check(l_FX_618))).f_A = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_FX_618))).f_A))).f_NEXT = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_FX_618))).f_A))).f_NEXT))).f_IV = ((rt_int)2LL);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_FX_618))).f_A))).f_NEXT))).f_NEXT = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_FX_618))).f_A))).f_NEXT))).f_NEXT))).f_NAME, r_MKN(rt_str("MAX_P", 5)), 0);
((*(R17 *)rt_nil_check(l_V_615))).f_A = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_615))).f_A))).f_NAME, r_MKN(rt_str("MIN", 3)), 0);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_615))).f_A))).f_NEXT = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_615))).f_A))).f_NEXT))).f_NAME, r_MKN(rt_str("MAX", 3)), 0);
((*(R17 *)rt_nil_check(l_V_615))).f_B = l_FX_618;
((*(R17 *)rt_nil_check(l_R_616))).f_A = l_V_615;
S_R9(&((*(R17 *)rt_nil_check(l_D_617))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_619))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_D_617))).f_A = l_F_614;
((*(R17 *)rt_nil_check(l_D_617))).f_B = l_R_616;
((*(R12 *)rt_nil_check(l_Y_619))).f_DECL = l_D_617;
r_DEFINE(l_Y_619, ((rt_int)0LL));
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
r_PREDEF_BUILTIN(rt_str("ARGUMENT_COUNT", 14));
r_PREDEF_BUILTIN(rt_str("ARGUMENT", 8));
r_PREDEF_BUILTIN(rt_str("FILE_EXISTS", 11));
r_PREDEF_BUILTIN(rt_str("READ_FILE", 9));
r_PREDEF_BUILTIN(rt_str("WRITE_FILE", 10));
}
static R9 r_ASCII_NAME(rt_int p_C) { RT_B_TICK(); 
rstr l_CONTROLS_620; memset(&l_CONTROLS_620, 0, sizeof l_CONTROLS_620);
l_CONTROLS_620 = rt_b_str_new(((rt_int)128LL), 0);
rt_b_assign(&l_CONTROLS_620, rt_str(" NUL SOH STX EXT EOT ENQ ACK BEL BS  HT  LF  VT  FF  CR  SO  SI  DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM  SUB ESC FS  GS  RS  US ", 128));
if ((p_C < ((rt_int)32LL)))
{
if (rt_b_eq(rt_b_slice(l_CONTROLS_620, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL))), rt_str(" ", 1)))
{
{ R9 rv621 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_620, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)2LL)))));
return rv621; }
}
{ R9 rv622 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_620, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)))));
return rv622; }
}
else if ((p_C == ((rt_int)39LL)))
{
{ R9 rv623 = r_MKN(rt_str("\\''''", 5));
return rv623; }
}
else if ((p_C < ((rt_int)96LL)))
{
{ R9 rv624 = r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), r_CHAR_OF(p_C)), rt_str("'", 1)));
return rv624; }
}
else if ((p_C == ((rt_int)96LL)))
{
{ R9 rv625 = r_MKN(rt_str("\\ACCENT", 7));
return rv625; }
}
else if ((p_C <= ((rt_int)122LL)))
{
{ R9 rv626 = r_MKN(rt_b_cat(rt_str("\\", 1), r_CHAR_OF(rt_sub(p_C, ((rt_int)32LL)))));
return rv626; }
}
else if ((p_C == ((rt_int)123LL)))
{
{ R9 rv627 = r_MKN(rt_str("\\[", 2));
return rv627; }
}
else if ((p_C == ((rt_int)124LL)))
{
{ R9 rv628 = r_MKN(rt_str("\\BAR", 4));
return rv628; }
}
else if ((p_C == ((rt_int)125LL)))
{
{ R9 rv629 = r_MKN(rt_str("\\]", 2));
return rv629; }
}
else if ((p_C == ((rt_int)126LL)))
{
{ R9 rv630 = r_MKN(rt_str("\\TILDE", 6));
return rv630; }
}
{ R9 rv631 = r_MKN(rt_str("\\DEL", 4));
return rv631; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_SCALAR(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv632 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_BOOL)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv632; }
rt_raise(RT_X_INIT);
}
static R22 * r_REAL_TYPE(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R22 * rv633 = r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv633; }
}
{ R22 * rv634 = p_T;
return rv634; }
rt_raise(RT_X_INIT);
}
static R9 r_TYPE_NAME(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_635; memset(&l_K_635, 0, sizeof l_K_635);
l_K_635 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{ R9 rv636 = ((*(R22 *)rt_nil_check(p_T))).f_NAME;
return rv636; }
}
else if ((l_K_635 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))
{
{ R9 rv637 = r_MK(rt_str("INTEGER", 7));
return rv637; }
}
{ R9 rv638 = r_FMT1(rt_str("FIXED (@, 2, STD)", 17), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv638; }
}
else if ((l_K_635 == g_T_BOOL))
{
{ R9 rv639 = r_MK(rt_str("BOOLEAN", 7));
return rv639; }
}
else if ((l_K_635 == g_T_ENUM))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R9 rv640 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv640; }
}
{ R9 rv641 = r_MK(rt_str("an enumerated type", 18));
return rv641; }
}
else if ((l_K_635 == g_T_STR))
{
{ R9 rv642 = r_MK(rt_str("CHAR_STR", 8));
return rv642; }
}
else if ((l_K_635 == g_T_BITS))
{
{ R9 rv643 = r_MK(rt_str("BIT", 3));
return rv643; }
}
else if ((l_K_635 == g_T_FLOAT))
{
{ R9 rv644 = r_FMT1(rt_str("FLOAT (@)", 9), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv644; }
}
else if ((l_K_635 == g_T_ARR))
{
{ R9 rv645 = r_FMT1(rt_str("ARRAY OF @", 10), r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_ELEM));
return rv645; }
}
else if ((l_K_635 == g_T_REC))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R9 rv646 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv646; }
}
{ R9 rv647 = r_MK(rt_str("RECORD", 6));
return rv647; }
}
else if ((l_K_635 == g_T_PTR))
{
{ R9 rv648 = r_MK(rt_str("PTR", 3));
return rv648; }
}
else if ((l_K_635 == g_T_SEM))
{
{ R9 rv649 = r_MK(rt_str("SEMAPHORE", 9));
return rv649; }
}
else if ((l_K_635 == g_T_NIL))
{
{ R9 rv650 = r_MK(rt_str("NIL", 3));
return rv650; }
}
else if ((l_K_635 == g_T_VOID))
{
{ R9 rv651 = r_MK(rt_str("no value", 8));
return rv651; }
}
{ R9 rv652 = r_MK(rt_str("a type", 6));
return rv652; }
rt_raise(RT_X_INIT);
}
static R9 r_SUBST_SELF(R9 p_T, R9 p_SELF) { RT_B_TICK(); 
rstr l_S_653; memset(&l_S_653, 0, sizeof l_S_653);
l_S_653 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_653, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_654; memset(&l_AT_654, 0, sizeof l_AT_654);
l_AT_654 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_START_655; memset(&l_START_655, 0, sizeof l_START_655);
l_START_655 = ((rt_int)0LL);
R9 l_R_656; memset(&l_R_656, 0, sizeof l_R_656);
rt_int l_I_657; memset(&l_I_657, 0, sizeof l_I_657);
l_I_657 = ((rt_int)0LL);
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ R9 rv658 = p_T;
return rv658; }
}
for (;;) {
if ((l_I_657 >= rt_sub((p_T).f_LEN, ((rt_int)1LL)))) goto L_end659;
{
if (rt_b_eq(rt_b_slice(l_S_653, l_I_657, rt_add(l_I_657, ((rt_int)1LL))), rt_str("$S", 2)))
{
S_R9(&l_R_656, r_MK(rt_b_slice(l_S_653, l_START_655, rt_sub(l_I_657, ((rt_int)1LL)))), 0);
S_R9(&l_R_656, r_MK(r_STR(p_SELF, (p_SELF).f_LEN)), 0);
l_I_657 = rt_add(l_I_657, ((rt_int)2LL));
l_START_655 = l_I_657;
}
else
{
l_I_657 = rt_add(l_I_657, ((rt_int)1LL));
}
}
RT_B_TICK();
} L_end659: ;
if ((l_START_655 == ((rt_int)0LL)))
{
((*(R7 *)rt_nil_check(g_W))).f_TOP = l_AT_654;
{ R9 rv660 = p_T;
return rv660; }
}
S_R9(&l_R_656, r_MK(rt_b_slice(l_S_653, l_START_655, rt_sub((p_T).f_LEN, ((rt_int)1LL)))), 0);
{ R9 rv661 = ({ R9 rc662; memset(&rc662, 0, sizeof rc662);  rc662.f_AT = l_AT_654; rc662.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_654); rc662.f_H = rt_neg(((rt_int)1LL)); rc662; });
return rv661; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LITERALS(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_P_663; memset(&l_P_663, 0, sizeof l_P_663);
l_P_663 = p_A;
R17 * l_Q_664; memset(&l_Q_664, 0, sizeof l_Q_664);
l_Q_664 = p_B;
for (;;) {
if (((l_P_663 == NULL) || (l_Q_664 == NULL))) goto L_end665;
{
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_P_663))).f_NAME, ((*(R17 *)rt_nil_check(l_Q_664))).f_NAME)))
{
{ rt_int rv666 = 0;
return rv666; }
}
l_P_663 = ((*(R17 *)rt_nil_check(l_P_663))).f_NEXT;
l_Q_664 = ((*(R17 *)rt_nil_check(l_Q_664))).f_NEXT;
}
RT_B_TICK();
} L_end665: ;
{ rt_int rv667 = ((l_P_663 == NULL) && (l_Q_664 == NULL));
return rv667; }
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_CLASS(R17 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_668; memset(&l_Y_668, 0, sizeof l_Y_668);
l_Y_668 = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
R22 * l_T_669; memset(&l_T_669, 0, sizeof l_T_669);
{
R17 * l_P_670; memset(&l_P_670, 0, sizeof l_P_670);
l_P_670 = p_LITS;
for (;;) {
if ((l_P_670 == NULL)) goto L_end671;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_P_670))).f_NEXT, ((*(R17 *)rt_nil_check(l_P_670))).f_NAME))
{
r_FAILT(p_LINE, rt_str("an enumerated literal must be unique in its list (3.4.1): ", 58), ((*(R17 *)rt_nil_check(l_P_670))).f_NAME);
}
l_P_670 = ((*(R17 *)rt_nil_check(l_P_670))).f_NEXT;
}
RT_B_TICK();
} L_end671: ;
}
for (;;) {
if ((l_Y_668 == NULL)) goto L_end672;
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_668))).f_T))).f_UNORDERED == p_UNORDERED) && r_SAME_LITERALS(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_668))).f_T))).f_LITS, p_LITS)))
{
r_DECLARE_LITERALS(((*(R12 *)rt_nil_check(l_Y_668))).f_T, p_LINE);
{ R22 * rv673 = ((*(R12 *)rt_nil_check(l_Y_668))).f_T;
return rv673; }
}
l_Y_668 = ((*(R12 *)rt_nil_check(l_Y_668))).f_INSTANCES;
}
RT_B_TICK();
} L_end672: ;
l_T_669 = r_NEW_TYP(g_T_ENUM);
((*(R22 *)rt_nil_check(l_T_669))).f_BASE = l_T_669;
((*(R22 *)rt_nil_check(l_T_669))).f_LITS = p_LITS;
((*(R22 *)rt_nil_check(l_T_669))).f_NLITS = r_LIST_LENGTH(p_LITS);
((*(R22 *)rt_nil_check(l_T_669))).f_UNORDERED = p_UNORDERED;
S_R9(&((*(R22 *)rt_nil_check(l_T_669))).f_CNAME, r_NEW_NAME(rt_str("E", 1)), 0);
l_Y_668 = r_NEW_SYM(g_Y_TYPE, r_NO_TEXT());
((*(R12 *)rt_nil_check(l_Y_668))).f_T = l_T_669;
((*(R12 *)rt_nil_check(l_Y_668))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
((*(R7 *)rt_nil_check(g_W))).f_ENUMS = l_Y_668;
{
R17 * l_P_674; memset(&l_P_674, 0, sizeof l_P_674);
l_P_674 = p_LITS;
R9 l_NAMES_675; memset(&l_NAMES_675, 0, sizeof l_NAMES_675);
S_R9(&l_NAMES_675, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_P_674 == NULL)) goto L_end676;
{
S_R9(&l_NAMES_675, r_FMT2(rt_str("@@, ", 4), l_NAMES_675, r_CSTRING(((*(R17 *)rt_nil_check(l_P_674))).f_NAME)), 0);
l_P_674 = ((*(R17 *)rt_nil_check(l_P_674))).f_NEXT;
}
RT_B_TICK();
} L_end676: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static const char *@[] = { @0 };", 32), ((*(R22 *)rt_nil_check(l_T_669))).f_CNAME, l_NAMES_675));
}
r_DECLARE_LITERALS(l_T_669, p_LINE);
{ R22 * rv677 = l_T_669;
return rv677; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_LITERALS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_P_678; memset(&l_P_678, 0, sizeof l_P_678);
l_P_678 = ((*(R22 *)rt_nil_check(p_T))).f_LITS;
rt_int l_I_679; memset(&l_I_679, 0, sizeof l_I_679);
l_I_679 = ((rt_int)0LL);
for (;;) {
if ((l_P_678 == NULL)) goto L_end680;
{
if ((r_VISIBLE_LITERAL(((*(R17 *)rt_nil_check(l_P_678))).f_NAME, p_T) == NULL))
{
{
R12 * l_Y_681; memset(&l_Y_681, 0, sizeof l_Y_681);
l_Y_681 = r_NEW_SYM(g_Y_ENUMLIT, ((*(R17 *)rt_nil_check(l_P_678))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_681))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_681))).f_MV = l_I_679;
((*(R12 *)rt_nil_check(l_Y_681))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_681))).f_INPUT = 1;
r_DEFINE(l_Y_681, p_LINE);
}
}
l_I_679 = rt_add(l_I_679, ((rt_int)1LL));
l_P_678 = ((*(R17 *)rt_nil_check(l_P_678))).f_NEXT;
}
RT_B_TICK();
} L_end680: ;
}
static R12 * r_FIND_LITERAL(R9 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_V_682; memset(&l_V_682, 0, sizeof l_V_682);
l_V_682 = r_VISIBLE_LITERAL(p_NAME, p_T);
if (((!(l_V_682 == NULL)) || (p_T == NULL)))
{
{ R12 * rv683 = l_V_682;
return rv683; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL))
{
{ R12 * rv684 = NULL;
return rv684; }
}
{
R17 * l_P_685; memset(&l_P_685, 0, sizeof l_P_685);
l_P_685 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
rt_int l_I_686; memset(&l_I_686, 0, sizeof l_I_686);
l_I_686 = ((rt_int)0LL);
for (;;) {
if ((l_P_685 == NULL)) goto L_end687;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_685))).f_NAME, p_NAME))
{
{
R12 * l_Y_688; memset(&l_Y_688, 0, sizeof l_Y_688);
l_Y_688 = r_NEW_SYM(g_Y_ENUMLIT, p_NAME);
((*(R12 *)rt_nil_check(l_Y_688))).f_T = ((*(R22 *)rt_nil_check(p_T))).f_BASE;
((*(R12 *)rt_nil_check(l_Y_688))).f_MV = l_I_686;
((*(R12 *)rt_nil_check(l_Y_688))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_688))).f_INPUT = 1;
{ R12 * rv689 = l_Y_688;
return rv689; }
}
}
l_I_686 = rt_add(l_I_686, ((rt_int)1LL));
l_P_685 = ((*(R17 *)rt_nil_check(l_P_685))).f_NEXT;
}
RT_B_TICK();
} L_end687: ;
}
{ R12 * rv690 = NULL;
return rv690; }
rt_raise(RT_X_INIT);
}
static R12 * r_VISIBLE_LITERAL(R9 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_691; memset(&l_Y_691, 0, sizeof l_Y_691);
l_Y_691 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_691 == NULL)) goto L_end692;
{
if ((((*(R12 *)rt_nil_check(l_Y_691))).f_KIND == g_Y_ENUMLIT))
{
if ((p_T == NULL))
{
{ R12 * rv693 = l_Y_691;
return rv693; }
}
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_691))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv694 = l_Y_691;
return rv694; }
}
}
l_Y_691 = r_LOOKUP_NEXT(l_Y_691);
}
RT_B_TICK();
} L_end692: ;
{ R12 * rv695 = NULL;
return rv695; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_CLASSES(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_696; memset(&l_Y_696, 0, sizeof l_Y_696);
l_Y_696 = r_LOOKUP(p_NAME);
rt_int l_N_697; memset(&l_N_697, 0, sizeof l_N_697);
l_N_697 = ((rt_int)0LL);
for (;;) {
if ((l_Y_696 == NULL)) goto L_end698;
{
if ((((*(R12 *)rt_nil_check(l_Y_696))).f_KIND == g_Y_ENUMLIT))
{
l_N_697 = rt_add(l_N_697, ((rt_int)1LL));
}
l_Y_696 = r_LOOKUP_NEXT(l_Y_696);
}
RT_B_TICK();
} L_end698: ;
{ rt_int rv699 = l_N_697;
return rv699; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE(R17 * p_TS) { RT_B_TICK(); 
{ R22 * rv700 = r_RESOLVE_NAMED(p_TS, r_NO_TEXT());
return rv700; }
rt_raise(RT_X_INIT);
}
static void r_ATTR_VALUE(R17 * p_E, R9 *p_C, R23 *p_M) { RT_B_TICK(); 
S_R9(&(*p_C), (r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, 0);
S_R23(&(*p_M), r_MANIFEST(p_E), 0);
if (((*p_M)).f_OK)
{
S_R9(&(*p_C), r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*p_M)).f_V)), 0);
}
}
static R22 * r_WITH_RANGE(R22 * p_T, R17 * p_R) { RT_B_TICK(); 
R22 * l_N_701; memset(&l_N_701, 0, sizeof l_N_701);
if ((p_R == NULL))
{
{ R22 * rv702 = p_T;
return rv702; }
}
if ((r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(p_R))).f_A) || r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(p_R))).f_B)))
{
l_N_701 = r_COPY_TYP(p_T);
S_R9(&((*(R22 *)rt_nil_check(l_N_701))).f_NAME, r_NO_TEXT(), 0);
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_701))).f_LO_C, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NAME, (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN))), 0);
}
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_B))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_701))).f_HI_C, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_B))).f_NAME, (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN))), 0);
}
{ R22 * rv703 = l_N_701;
return rv703; }
}
if ((!((((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_R))).f_LINE, rt_str("a range is only for fixed, float and enumerated types (3.12.2)", 62));
}
l_N_701 = r_COPY_TYP(p_T);
S_R9(&((*(R22 *)rt_nil_check(l_N_701))).f_NAME, r_NO_TEXT(), 0);
((*(R22 *)rt_nil_check(l_N_701))).f_RLEVEL = r_CUR_LEVEL();
{
R26 l_LO_704; memset(&l_LO_704, 0, sizeof l_LO_704);
R26 l_HI_705; memset(&l_HI_705, 0, sizeof l_HI_705);
S_R26(&l_LO_704, r_EXPR(((*(R17 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R26(&l_HI_705, r_EXPR(((*(R17 *)rt_nil_check(p_R))).f_B, p_T), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_701))).f_LO_C, (l_LO_704).f_C, 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_701))).f_HI_C, (l_HI_705).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_701))).f_MLO, r_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_A), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_701))).f_MHI, r_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_B), 0);
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_701))).f_MLO, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_701))).f_MHI, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_B, p_T), 0);
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_704).f_T), r_REAL_TYPE(p_T))) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_705).f_T), r_REAL_TYPE(p_T)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_R))).f_LINE, rt_str("the bounds of a range must be of the class of the type (3.2.1, 3.3.1, 3.4.1)", 76));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_701))).f_LO_C, r_RESCALE(l_LO_704, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R17 *)rt_nil_check(p_R))).f_LINE), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_701))).f_HI_C, r_RESCALE(l_HI_705, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R17 *)rt_nil_check(p_R))).f_LINE), 0);
if ((((!(((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL))) || (!(((*(R22 *)rt_nil_check((l_LO_704).f_T))).f_SCALE == ((rt_int)0LL)))) || (!(((*(R22 *)rt_nil_check((l_HI_705).f_T))).f_SCALE == ((rt_int)0LL)))))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_701))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_701))).f_MHI, r_NO_MVAL(), 0);
}
}
}
if (((((*(R17 *)rt_nil_check(p_R))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(p_R))).f_IV == ((rt_int)3LL))))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_701))).f_LO_C, r_FMT1(rt_str("nextafter(@, INFINITY)", 22), ((*(R22 *)rt_nil_check(l_N_701))).f_LO_C), 0);
}
else
{
S_R9(&((*(R22 *)rt_nil_check(l_N_701))).f_LO_C, r_FMT1(rt_str("((@) + 1)", 9), ((*(R22 *)rt_nil_check(l_N_701))).f_LO_C), 0);
(((*(R22 *)rt_nil_check(l_N_701))).f_MLO).f_V = rt_add((((*(R22 *)rt_nil_check(l_N_701))).f_MLO).f_V, ((rt_int)1LL));
}
}
if ((((*(R17 *)rt_nil_check(p_R))).f_IV >= ((rt_int)2LL)))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_701))).f_HI_C, r_FMT1(rt_str("nextafter(@, -INFINITY)", 23), ((*(R22 *)rt_nil_check(l_N_701))).f_HI_C), 0);
}
else
{
S_R9(&((*(R22 *)rt_nil_check(l_N_701))).f_HI_C, r_FMT1(rt_str("((@) - 1)", 9), ((*(R22 *)rt_nil_check(l_N_701))).f_HI_C), 0);
(((*(R22 *)rt_nil_check(l_N_701))).f_MHI).f_V = rt_sub((((*(R22 *)rt_nil_check(l_N_701))).f_MHI).f_V, ((rt_int)1LL));
}
}
{ R22 * rv706 = l_N_701;
return rv706; }
rt_raise(RT_X_INIT);
}
static R23 r_ENUM_MANIFEST(R17 * p_E, R22 * p_T) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{
R12 * l_Y_707; memset(&l_Y_707, 0, sizeof l_Y_707);
l_Y_707 = r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, p_T);
if ((!(l_Y_707 == NULL)))
{
{ R23 rv708 = r_SOME(((*(R12 *)rt_nil_check(l_Y_707))).f_MV);
return rv708; }
}
}
}
{ R23 rv709 = r_MANIFEST(p_E);
return rv709; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_LEVEL(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_CS == NULL))
{
{ rt_int rv710 = ((rt_int)0LL);
return rv710; }
}
{ rt_int rv711 = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
return rv711; }
rt_raise(RT_X_INIT);
}
static R22 * r_ARG_TYPE(R17 * p_N) { RT_B_TICK(); 
{ R22 * rv712 = r_RESOLVE(r_EXPR_TO_TS(p_N));
return rv712; }
rt_raise(RT_X_INIT);
}
static R17 * r_NTH_ARG(R17 * p_TS, rt_int p_K) { RT_B_TICK(); 
R17 * l_A_713; memset(&l_A_713, 0, sizeof l_A_713);
l_A_713 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
{ rt_int it715_lo = ((rt_int)1LL), it715_hi = p_K;
for (rt_int it715 = it715_lo; it715 <= it715_hi; it715++) {
{
if ((l_A_713 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
l_A_713 = ((*(R17 *)rt_nil_check(l_A_713))).f_NEXT;
}
RT_B_TICK();
if (it715 == it715_hi) break;
} } L_end714: ;
if ((l_A_713 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
{ R17 * rv716 = l_A_713;
return rv716; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_NAMED(R17 * p_TS, R9 p_CNAME) { RT_B_TICK(); 
R22 * l_T_717; memset(&l_T_717, 0, sizeof l_T_717);
rt_int l_K_718; memset(&l_K_718, 0, sizeof l_K_718);
l_K_718 = ((*(R17 *)rt_nil_check(p_TS))).f_KIND;
if ((l_K_718 == g_TS_ARRAY))
{
{ R22 * rv719 = r_RESOLVE_ARRAY(p_TS);
return rv719; }
}
else if ((l_K_718 == g_TS_RECORD))
{
{ R22 * rv720 = r_RESOLVE_RECORD(p_TS, p_CNAME, NULL, NULL);
return rv720; }
}
else if ((l_K_718 == g_TS_ENUM))
{
l_T_717 = r_ENUM_CLASS(((*(R17 *)rt_nil_check(p_TS))).f_A, (((*(R17 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)), ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
if (((((*(R17 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("an UNORDERED type has no range", 30));
}
l_T_717 = r_WITH_RANGE(l_T_717, ((*(R17 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_717 = r_APPLY_REP(l_T_717, ((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv721 = l_T_717;
return rv721; }
}
else if ((l_K_718 == g_TS_GEN))
{
{ R22 * rv722 = r_GEN_TYPE(p_TS);
return rv722; }
}
else if ((!(l_K_718 == g_TS_NAME)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a type specification expected", 29));
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_FL == ((rt_int)3LL)))
{
l_T_717 = r_WITH_RANGE(r_TYPE_ATTR_TYPE(((*(R17 *)rt_nil_check(p_TS))).f_E), ((*(R17 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_717 = r_APPLY_REP(l_T_717, ((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv723 = l_T_717;
return rv723; }
}
l_T_717 = r_RESOLVE_PREDEFINED(p_TS);
if ((l_T_717 == NULL))
{
l_T_717 = r_RESOLVE_USER(p_TS);
}
l_T_717 = r_WITH_RANGE(l_T_717, ((*(R17 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_717 = r_APPLY_REP(l_T_717, ((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv724 = l_T_717;
return rv724; }
rt_raise(RT_X_INIT);
}
static R22 * r_APPLY_REP(R22 * p_T0, R17 * p_R0, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_725; memset(&l_T_725, 0, sizeof l_T_725);
l_T_725 = r_COPY_TYP(p_T0);
if ((((*(R22 *)rt_nil_check(p_T0))).f_KIND == g_T_ABS))
{
r_FAIL(p_LINE, rt_str("a REP clause is only for a member of a predefined type class (3.12.2)", 69));
}
((*(R22 *)rt_nil_check(l_T_725))).f_REPS = r_EXPAND_REP(p_R0, p_T0, p_LINE);
r_CHECK_REP_CLASS(l_T_725, p_LINE);
if ((((*(R22 *)rt_nil_check(l_T_725))).f_KIND == g_T_ENUM))
{
r_CHECK_ENUM_REP(l_T_725, p_LINE);
}
else if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_725))).f_REPS))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("ENUM_VAL_REP is only for UNORDERED types (3.4.3)", 48));
}
{ R22 * rv726 = l_T_725;
return rv726; }
rt_raise(RT_X_INIT);
}
static R17 * r_EXPAND_REP(R17 * p_R, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_727; memset(&l_Y_727, 0, sizeof l_Y_727);
if ((p_R == NULL))
{
{ R17 * rv728 = p_R;
return rv728; }
}
if ((((*(R17 *)rt_nil_check(p_R))).f_KIND == g_TS_GEN))
{
{ R17 * rv729 = p_R;
return rv729; }
}
l_Y_727 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_R))).f_NAME);
if ((l_Y_727 == NULL))
{
{ R17 * rv730 = p_R;
return rv730; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_727))).f_KIND == g_Y_REPTYPE)))
{
{ R17 * rv731 = p_R;
return rv731; }
}
if (((*(R12 *)rt_nil_check(l_Y_727))).f_BUSY)
{
r_FAILT(p_LINE, rt_str("a circular reptype declaration (3.12.3): ", 41), ((*(R17 *)rt_nil_check(p_R))).f_NAME);
}
{
R17 * l_D_732; memset(&l_D_732, 0, sizeof l_D_732);
l_D_732 = ((*(R12 *)rt_nil_check(l_Y_727))).f_DECL;
R17 * l_X_733; memset(&l_X_733, 0, sizeof l_X_733);
l_X_733 = r_NEW_NODE(g_N_REP, ((*(R17 *)rt_nil_check(p_R))).f_LINE);
R17 * l_HEAD_734; memset(&l_HEAD_734, 0, sizeof l_HEAD_734);
l_HEAD_734 = NULL;
R17 * l_TAIL_735; memset(&l_TAIL_735, 0, sizeof l_TAIL_735);
l_TAIL_735 = NULL;
((*(R12 *)rt_nil_check(l_Y_727))).f_BUSY = 1;
r_OPEN_SCOPE();
if (((!(((*(R17 *)rt_nil_check(l_D_732))).f_A == NULL)) || (!(((*(R17 *)rt_nil_check(p_R))).f_A == NULL))))
{
r_BIND_FORMALS(((*(R17 *)rt_nil_check(l_D_732))).f_A, p_R);
}
if ((!(((*(R17 *)rt_nil_check(l_D_732))).f_C == NULL)))
{
{
R12 * l_B_736; memset(&l_B_736, 0, sizeof l_B_736);
l_B_736 = r_NEW_SYM(g_Y_TYPE, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_732))).f_C))).f_NAME);
((*(R12 *)rt_nil_check(l_B_736))).f_T = p_T;
r_DEFINE(l_B_736, p_LINE);
}
}
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
S_R9(&((*(R17 *)rt_nil_check(l_X_733))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_732))).f_B))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_X_733))).f_B = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_732))).f_B))).f_B;
((*(R17 *)rt_nil_check(l_X_733))).f_C = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_732))).f_B))).f_C;
if (r_TEQS(((*(R17 *)rt_nil_check(l_X_733))).f_NAME, rt_str("RECORD_REP", 10)))
{
l_HEAD_734 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_732))).f_B))).f_A;
}
else
{
{
R17 * l_A_737; memset(&l_A_737, 0, sizeof l_A_737);
l_A_737 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_732))).f_B))).f_A;
for (;;) {
if ((l_A_737 == NULL)) goto L_end738;
{
r_ADD_LIST(r_REP_ARG_VALUE(l_A_737), &l_HEAD_734, &l_TAIL_735);
l_A_737 = ((*(R17 *)rt_nil_check(l_A_737))).f_NEXT;
}
RT_B_TICK();
} L_end738: ;
}
}
((*(R17 *)rt_nil_check(l_X_733))).f_A = l_HEAD_734;
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
r_CLOSE_SCOPE();
l_X_733 = r_EXPAND_REP(l_X_733, p_T, p_LINE);
((*(R12 *)rt_nil_check(l_Y_727))).f_BUSY = 0;
{ R17 * rv739 = l_X_733;
return rv739; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_REP_ARG_VALUE(R17 * p_A) { RT_B_TICK(); 
R17 * l_N_740; memset(&l_N_740, 0, sizeof l_N_740);
R23 l_M_741; memset(&l_M_741, 0, sizeof l_M_741);
if (((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_742; memset(&l_Y_742, 0, sizeof l_Y_742);
l_Y_742 = r_LOOKUP(((*(R17 *)rt_nil_check(p_A))).f_NAME);
if (((l_Y_742 == NULL) || (((!(l_Y_742 == NULL)) && (((*(R12 *)rt_nil_check(l_Y_742))).f_KIND == g_Y_ENUMLIT)))))
{
l_N_740 = r_NEW_NODE(((*(R17 *)rt_nil_check(p_A))).f_KIND, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_740))).f_NAME, ((*(R17 *)rt_nil_check(p_A))).f_NAME, 0);
{ R17 * rv743 = l_N_740;
return rv743; }
}
if (((((*(R12 *)rt_nil_check(l_Y_742))).f_KIND == g_Y_CONST) && (!(((*(R12 *)rt_nil_check(l_Y_742))).f_T == NULL))))
{
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_742))).f_T)))).f_KIND == g_T_ENUM) && ((*(R12 *)rt_nil_check(l_Y_742))).f_HASMV))
{
{
R17 * l_L_744; memset(&l_L_744, 0, sizeof l_L_744);
l_L_744 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_742))).f_T)))).f_BASE))).f_LITS;
rt_int l_I_745; memset(&l_I_745, 0, sizeof l_I_745);
l_I_745 = ((rt_int)0LL);
for (;;) {
if (((l_L_744 == NULL) || (l_I_745 == ((*(R12 *)rt_nil_check(l_Y_742))).f_MV))) goto L_end746;
{
l_I_745 = rt_add(l_I_745, ((rt_int)1LL));
l_L_744 = ((*(R17 *)rt_nil_check(l_L_744))).f_NEXT;
}
RT_B_TICK();
} L_end746: ;
if ((!(l_L_744 == NULL)))
{
l_N_740 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_740))).f_NAME, ((*(R17 *)rt_nil_check(l_L_744))).f_NAME, 0);
{ R17 * rv747 = l_N_740;
return rv747; }
}
}
}
}
}
}
S_R23(&l_M_741, r_MANIFEST(p_A), 0);
if ((!(l_M_741).f_OK))
{
{
R14 l_SAVED_CODE_748; memset(&l_SAVED_CODE_748, 0, sizeof l_SAVED_CODE_748);
S_R14(&l_SAVED_CODE_748, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_749; memset(&l_V_749, 0, sizeof l_V_749);
S_R26(&l_V_749, r_EXPR(p_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_748, 0);
}
{ R17 * rv750 = p_A;
return rv750; }
}
l_N_740 = r_NEW_NODE(g_N_INT, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
if (((l_M_741).f_V < ((rt_int)0LL)))
{
((*(R17 *)rt_nil_check(l_N_740))).f_IV = rt_neg((l_M_741).f_V);
S_R9(&((*(R17 *)rt_nil_check(l_N_740))).f_NAME, r_NUM(rt_neg((l_M_741).f_V)), 0);
{
R17 * l_U_751; memset(&l_U_751, 0, sizeof l_U_751);
l_U_751 = r_NEW_NODE(g_N_UNOP, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_U_751))).f_NAME, r_MK(rt_str("-", 1)), 0);
((*(R17 *)rt_nil_check(l_U_751))).f_A = l_N_740;
{ R17 * rv752 = l_U_751;
return rv752; }
}
}
((*(R17 *)rt_nil_check(l_N_740))).f_IV = (l_M_741).f_V;
S_R9(&((*(R17 *)rt_nil_check(l_N_740))).f_NAME, r_NUM((l_M_741).f_V), 0);
{ R17 * rv753 = l_N_740;
return rv753; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_REP_CLASS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_754; memset(&l_R_754, 0, sizeof l_R_754);
l_R_754 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
rt_int l_K_755; memset(&l_K_755, 0, sizeof l_K_755);
l_K_755 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
rt_int l_OK_756; memset(&l_OK_756, 0, sizeof l_OK_756);
l_OK_756 = 0;
if ((((*(R17 *)rt_nil_check(l_R_754))).f_KIND == g_TS_GEN))
{
return;
}
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R17 *)rt_nil_check(l_R_754))).f_NAME) == NULL)))
{
return;
}
if ((!(r_LOOKUP(((*(R17 *)rt_nil_check(l_R_754))).f_NAME) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_LOOKUP(((*(R17 *)rt_nil_check(l_R_754))).f_NAME)))).f_KIND == g_Y_GEN))
{
return;
}
}
{
R9 l_N_757; memset(&l_N_757, 0, sizeof l_N_757);
S_R9(&l_N_757, ((*(R17 *)rt_nil_check(l_R_754))).f_NAME, 0);
if ((l_K_755 == g_T_INT))
{
l_OK_756 = (r_TEQS(l_N_757, rt_str("FIXED_STD", 9)) || r_TEQS(l_N_757, rt_str("FIXED_REP", 9)));
}
else if ((l_K_755 == g_T_FLOAT))
{
l_OK_756 = r_TEQS(l_N_757, rt_str("FLOAT_STD", 9));
}
else if ((l_K_755 == g_T_BOOL))
{
l_OK_756 = r_TEQS(l_N_757, rt_str("BOOLEAN_STD", 11));
}
else if ((l_K_755 == g_T_ENUM))
{
l_OK_756 = ((r_TEQS(l_N_757, rt_str("ENUM_STD", 8)) || r_TEQS(l_N_757, rt_str("ENUM_REP", 8))) || r_TEQS(l_N_757, rt_str("ENUM_VAL_REP", 12)));
}
else if ((l_K_755 == g_T_STR))
{
l_OK_756 = (r_TEQS(l_N_757, rt_str("CHAR_STR_STD", 12)) || r_TEQS(l_N_757, rt_str("CHAR_STR_REP", 12)));
}
else if ((l_K_755 == g_T_BITS))
{
l_OK_756 = r_TEQS(l_N_757, rt_str("BIT_STD", 7));
}
else if ((l_K_755 == g_T_ARR))
{
l_OK_756 = (r_TEQS(l_N_757, rt_str("ARRAY_STD", 9)) || r_TEQS(l_N_757, rt_str("ARRAY_REP", 9)));
}
else if ((l_K_755 == g_T_REC))
{
l_OK_756 = (r_TEQS(l_N_757, rt_str("RECORD_STD", 10)) || r_TEQS(l_N_757, rt_str("RECORD_REP", 10)));
}
else if ((l_K_755 == g_T_PTR))
{
l_OK_756 = r_TEQS(l_N_757, rt_str("PTR_STD", 7));
}
else if ((l_K_755 == g_T_SEM))
{
l_OK_756 = r_TEQS(l_N_757, rt_str("SEMAPHORE_STD", 13));
}
else if ((l_K_755 == g_T_TYPE))
{
l_OK_756 = 1;
}
if ((!l_OK_756))
{
r_FAILT(p_LINE, rt_str("the representation does not suit the type class (3.12.4): ", 58), l_N_757);
}
if (r_TEQS(l_N_757, rt_str("FIXED_REP", 9)))
{
r_CHECK_FIXED_REP(p_T, p_LINE);
}
}
}
static rt_int r_POW2(rt_int p_N) { RT_B_TICK(); 
rt_int l_P_758; memset(&l_P_758, 0, sizeof l_P_758);
l_P_758 = ((rt_int)1LL);
{ rt_int it760_lo = ((rt_int)1LL), it760_hi = p_N;
for (rt_int it760 = it760_lo; it760 <= it760_hi; it760++) {
{
l_P_758 = rt_mul(l_P_758, ((rt_int)2LL));
}
RT_B_TICK();
if (it760 == it760_hi) break;
} } L_end759: ;
{ rt_int rv761 = l_P_758;
return rv761; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_762; memset(&l_R_762, 0, sizeof l_R_762);
l_R_762 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
rt_int l_UNSIGNED_763; memset(&l_UNSIGNED_763, 0, sizeof l_UNSIGNED_763);
l_UNSIGNED_763 = 0;
if ((((*(R17 *)rt_nil_check(l_R_762))).f_A == NULL))
{
r_FAIL(p_LINE, rt_str("FIXED_REP takes a size and a signing (3.2.3 [3-55])", 51));
}
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_762))).f_A))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_762))).f_A))).f_KIND == g_N_DONTCARE)))
{
return;
}
{
R23 l_N_764; memset(&l_N_764, 0, sizeof l_N_764);
S_R23(&l_N_764, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_762))).f_A), 0);
if ((!(l_N_764).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of FIXED_REP is a manifest integer (3.2.3 [3-56])", 58));
}
if ((((l_N_764).f_V < ((rt_int)0LL)) || ((l_N_764).f_V > ((*(R7 *)rt_nil_check(g_W))).f_WORD)))
{
r_FAIL(p_LINE, rt_str("the size of FIXED_REP is in [0:P], P the default size (3.2.3)", 61));
}
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_762))).f_A))).f_NEXT == NULL)))
{
{
R17 * l_S_765; memset(&l_S_765, 0, sizeof l_S_765);
l_S_765 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_762))).f_A))).f_NEXT;
if (((((*(R17 *)rt_nil_check(l_S_765))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_S_765))).f_KIND == g_N_DONTCARE)))
{
return;
}
if ((!(((((((*(R17 *)rt_nil_check(l_S_765))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_S_765))).f_KIND == g_N_ENUMLIT))) && ((r_TEQS(((*(R17 *)rt_nil_check(l_S_765))).f_NAME, rt_str("SIGNED", 6)) || r_TEQS(((*(R17 *)rt_nil_check(l_S_765))).f_NAME, rt_str("UNSIGNED", 8))))))))
{
r_FAIL(p_LINE, rt_str("the signing of FIXED_REP is a manifest value of SIGNING (3.2.3 [3-57])", 70));
}
l_UNSIGNED_763 = r_TEQS(((*(R17 *)rt_nil_check(l_S_765))).f_NAME, rt_str("UNSIGNED", 8));
if ((!(((*(R17 *)rt_nil_check(l_S_765))).f_NEXT == NULL)))
{
r_FAIL(p_LINE, rt_str("FIXED_REP takes a size and a signing (3.2.3 [3-55])", 51));
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_REPCONV)
{
return;
}
if (l_UNSIGNED_763)
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
if (((((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK) && ((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN > ((rt_int)0LL))) && ((l_N_764).f_V < ((rt_int)63LL))))
{
{
rt_int l_LO_766; memset(&l_LO_766, 0, sizeof l_LO_766);
l_LO_766 = ((rt_int)0LL);
rt_int l_HI_767; memset(&l_HI_767, 0, sizeof l_HI_767);
l_HI_767 = ((rt_int)0LL);
if (l_UNSIGNED_763)
{
l_HI_767 = rt_sub(r_POW2((l_N_764).f_V), ((rt_int)1LL));
}
else if (((l_N_764).f_V > ((rt_int)0LL)))
{
l_LO_766 = rt_neg(r_POW2(rt_sub((l_N_764).f_V, ((rt_int)1LL))));
l_HI_767 = rt_sub(r_POW2(rt_sub((l_N_764).f_V, ((rt_int)1LL))), ((rt_int)1LL));
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_V < l_LO_766) || ((((*(R22 *)rt_nil_check(p_T))).f_MHI).f_V > l_HI_767)))
{
r_FAIL(p_LINE, rt_str("the range of the type exceeds what the size of FIXED_REP represents (3.2.3)", 75));
}
}
}
}
}
static R22 * r_TYPE_ATTR_TYPE(R17 * p_E) { RT_B_TICK(); 
R22 * l_T_768; memset(&l_T_768, 0, sizeof l_T_768);
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type-valued attribute expected", 32));
}
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_IS_TYPE_ATTR(((*(R17 *)rt_nil_check(p_E))).f_A)))
{
l_T_768 = r_TYPE_ATTR_TYPE(((*(R17 *)rt_nil_check(p_E))).f_A);
}
else
{
{
R14 l_SAVED_CODE_769; memset(&l_SAVED_CODE_769, 0, sizeof l_SAVED_CODE_769);
S_R14(&l_SAVED_CODE_769, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
l_T_768 = (r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(p_E))).f_A)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_769, 0);
}
}
{
R22 * l_R_770; memset(&l_R_770, 0, sizeof l_R_770);
l_R_770 = r_REAL_TYPE(l_T_768);
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)))
{
if ((((*(R22 *)rt_nil_check(l_R_770))).f_KIND == g_T_ARR))
{
{ R22 * rv771 = ((*(R22 *)rt_nil_check(l_R_770))).f_ELEM;
return rv771; }
}
else if ((((*(R22 *)rt_nil_check(l_R_770))).f_KIND == g_T_PTR))
{
{ R22 * rv772 = r_TARGET(l_R_770);
return rv772; }
}
}
else if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7)) && (((*(R22 *)rt_nil_check(l_R_770))).f_KIND == g_T_STR)))
{
{ R22 * rv773 = r_CHARSET_OF(l_R_770);
return rv773; }
}
if ((((*(R22 *)rt_nil_check(l_R_770))).f_KIND == g_T_REC))
{
{
R12 * l_C_774; memset(&l_C_774, 0, sizeof l_C_774);
l_C_774 = r_RECORD_CLASS_OF(l_R_770);
if ((!(l_C_774 == NULL)))
{
{
R21 * l_B_775; memset(&l_B_775, 0, sizeof l_B_775);
l_B_775 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_774))).f_BINDINGS, ((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_775 == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(l_B_775))).f_T == NULL)))
{
{ R22 * rv776 = ((*(R21 *)rt_nil_check(l_B_775))).f_T;
return rv776; }
}
}
}
}
}
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a type-valued attribute: ", 29), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_ATTR(R17 * p_E) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD)))
{
{ rt_int rv777 = 0;
return rv777; }
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7))))
{
{ rt_int rv778 = 1;
return rv778; }
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_779; memset(&l_Y_779, 0, sizeof l_Y_779);
l_Y_779 = r_LOOKUP(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME);
if ((!(l_Y_779 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_779))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_779))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_779))).f_T == NULL))))
{
{
R22 * l_R_780; memset(&l_R_780, 0, sizeof l_R_780);
l_R_780 = r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_779))).f_T);
if ((((*(R22 *)rt_nil_check(l_R_780))).f_KIND == g_T_REC))
{
{
R12 * l_C_781; memset(&l_C_781, 0, sizeof l_C_781);
l_C_781 = r_RECORD_CLASS_OF(l_R_780);
if ((!(l_C_781 == NULL)))
{
if ((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_781))).f_BINDINGS, ((*(R17 *)rt_nil_check(p_E))).f_NAME) == NULL)))
{
{ rt_int rv782 = 1;
return rv782; }
}
}
}
}
}
}
}
}
}
{ rt_int rv783 = 0;
return rv783; }
rt_raise(RT_X_INIT);
}
static R22 * r_GEN_TYPE(R17 * p_TS) { RT_B_TICK(); 
R21 * l_B_784; memset(&l_B_784, 0, sizeof l_B_784);
l_B_784 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_784 == NULL)) goto L_end785;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_784))).f_NAME, ((*(R17 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R21 *)rt_nil_check(l_B_784))).f_T == NULL))))
{
{ R22 * rv786 = ((*(R21 *)rt_nil_check(l_B_784))).f_T;
return rv786; }
}
l_B_784 = ((*(R21 *)rt_nil_check(l_B_784))).f_NEXT;
}
RT_B_TICK();
} L_end785: ;
{
R12 * l_Y_787; memset(&l_Y_787, 0, sizeof l_Y_787);
l_Y_787 = r_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_787 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_787))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_787))).f_T == NULL))))
{
{ R22 * rv788 = ((*(R12 *)rt_nil_check(l_Y_787))).f_T;
return rv788; }
}
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a derived generic type outside a formal parameter list: \?", 57), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_PREDEFINED(R17 * p_TS) { RT_B_TICK(); 
R9 l_NAME_789; memset(&l_NAME_789, 0, sizeof l_NAME_789);
S_R9(&l_NAME_789, ((*(R17 *)rt_nil_check(p_TS))).f_NAME, 0);
R22 * l_T_790; memset(&l_T_790, 0, sizeof l_T_790);
if (r_TEQS(l_NAME_789, rt_str("FIXED", 5)))
{
{
R23 l_S_791; memset(&l_S_791, 0, sizeof l_S_791);
S_R23(&l_S_791, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_792; memset(&l_R_792, 0, sizeof l_R_792);
S_R23(&l_R_792, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
R17 * l_P_793; memset(&l_P_793, 0, sizeof l_P_793);
l_P_793 = r_NTH_ARG(p_TS, ((rt_int)2LL));
r_TYPE_ARG_COUNT(p_TS, ((rt_int)3LL));
if ((!((l_R_792).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("only radix 2 is predefined (3.2.1)", 34));
}
r_CHECK_PRECISION_ARG(l_P_793, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
if (((l_S_791).f_V == ((rt_int)0LL)))
{
{ R22 * rv794 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv794; }
}
l_T_790 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_790))).f_SCALE = (l_S_791).f_V;
{ R22 * rv795 = l_T_790;
return rv795; }
}
}
else if (r_TEQS(l_NAME_789, rt_str("FLOAT", 5)))
{
{
R23 l_P_796; memset(&l_P_796, 0, sizeof l_P_796);
S_R23(&l_P_796, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
l_T_790 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_790))).f_SCALE = (l_P_796).f_V;
{ R22 * rv797 = l_T_790;
return rv797; }
}
}
else if (r_TEQS(l_NAME_789, rt_str("BIT", 3)))
{
l_T_790 = r_NEW_TYP(g_T_BITS);
r_STRING_LENGTH(l_T_790, r_NTH_ARG(p_TS, ((rt_int)0LL)));
{ R22 * rv798 = l_T_790;
return rv798; }
}
else if ((r_TEQS(l_NAME_789, rt_str("CHAR_STR", 8)) || r_TEQS(l_NAME_789, rt_str("ASCII_STR", 9))))
{
l_T_790 = r_NEW_TYP(g_T_STR);
r_STRING_LENGTH(l_T_790, r_NTH_ARG(p_TS, ((rt_int)0LL)));
((*(R22 *)rt_nil_check(l_T_790))).f_BASE = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
if (r_TEQS(l_NAME_789, rt_str("CHAR_STR", 8)))
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)2LL));
{
R17 * l_CS_799; memset(&l_CS_799, 0, sizeof l_CS_799);
l_CS_799 = r_NTH_ARG(p_TS, ((rt_int)1LL));
R22 * l_C_800; memset(&l_C_800, 0, sizeof l_C_800);
if (((((*(R17 *)rt_nil_check(l_CS_799))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_CS_799))).f_KIND == g_N_DONTCARE)))
{
((*(R22 *)rt_nil_check(l_T_790))).f_BASE = NULL;
{ R22 * rv801 = l_T_790;
return rv801; }
}
if (((((*(R17 *)rt_nil_check(l_CS_799))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(l_CS_799))).f_NAME, rt_str("CHARSET", 7))))
{
{
R14 l_SAVED_CODE_802; memset(&l_SAVED_CODE_802, 0, sizeof l_SAVED_CODE_802);
S_R14(&l_SAVED_CODE_802, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_803; memset(&l_V_803, 0, sizeof l_V_803);
S_R26(&l_V_803, r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(l_CS_799))).f_A), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_802, 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_803).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("CHARSET is an attribute of character strings (3.7.1)", 52));
}
((*(R22 *)rt_nil_check(l_T_790))).f_BASE = r_CHARSET_OF((l_V_803).f_T);
}
{ R22 * rv804 = l_T_790;
return rv804; }
}
l_C_800 = r_REAL_TYPE(r_ARG_TYPE(l_CS_799));
if ((!(((*(R22 *)rt_nil_check(l_C_800))).f_KIND == g_T_ENUM)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset must be an enumerated type (3.7.1)", 44));
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_800))).f_BASE))).f_UNORDERED || (!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_800))).f_BASE))).f_LITS))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset is an ordered enumerated type with a literal \\'C' (3.7.1, 3.7.2)", 74));
}
((*(R22 *)rt_nil_check(l_T_790))).f_BASE = ((*(R22 *)rt_nil_check(l_C_800))).f_BASE;
}
}
else
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
}
{ R22 * rv805 = l_T_790;
return rv805; }
}
else if (r_TEQS(l_NAME_789, rt_str("PTR", 3)))
{
l_T_790 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_T_790))).f_TARGET_TS = r_NTH_ARG(p_TS, ((rt_int)0LL));
{ R22 * rv806 = l_T_790;
return rv806; }
}
else if (r_TEQS(l_NAME_789, rt_str("SEMAPHORE", 9)))
{
l_T_790 = r_NEW_TYP(g_T_SEM);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
{
R17 * l_U_807; memset(&l_U_807, 0, sizeof l_U_807);
l_U_807 = r_NTH_ARG(p_TS, ((rt_int)0LL));
R22 * l_UT_808; memset(&l_UT_808, 0, sizeof l_UT_808);
l_UT_808 = r_RESOLVE_USER_NAME(r_MK(rt_str("USAGE", 5)), ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
R23 l_M_809; memset(&l_M_809, 0, sizeof l_M_809);
S_R23(&l_M_809, r_NO_MVAL(), 0);
if (((((*(R17 *)rt_nil_check(l_U_807))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_U_807))).f_KIND == g_N_DONTCARE)))
{
S_R23(&l_M_809, r_SOME(((rt_int)0LL)), 0);
}
else if (((((((*(R17 *)rt_nil_check(l_U_807))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_U_807))).f_KIND == g_N_ENUMLIT))) && (!(r_FIND_LITERAL(((*(R17 *)rt_nil_check(l_U_807))).f_NAME, l_UT_808) == NULL))))
{
S_R23(&l_M_809, r_ENUM_MANIFEST(l_U_807, l_UT_808), 0);
}
else
{
{
R14 l_SAVED_CODE_810; memset(&l_SAVED_CODE_810, 0, sizeof l_SAVED_CODE_810);
S_R14(&l_SAVED_CODE_810, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_811; memset(&l_V_811, 0, sizeof l_V_811);
S_R26(&l_V_811, r_EXPR(l_U_807, l_UT_808), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_810, 0);
if (r_SAME_CLASS(r_REAL_TYPE((l_V_811).f_T), r_REAL_TYPE(l_UT_808)))
{
S_R23(&l_M_809, r_MANIFEST(l_U_807), 0);
}
}
}
if ((!(l_M_809).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("the use mode is a manifest value of USAGE, SYNCH or REGION (3.11.1)", 67));
}
((*(R22 *)rt_nil_check(l_T_790))).f_SCALE = (l_M_809).f_V;
}
{ R22 * rv812 = l_T_790;
return rv812; }
}
{ R22 * rv813 = NULL;
return rv813; }
rt_raise(RT_X_INIT);
}
static void r_TYPE_ARG_COUNT(R17 * p_TS, rt_int p_N) { RT_B_TICK(); 
if ((!(r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_TS))).f_A) == p_N)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("the wrong number of arguments for the type ", 43), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
}
static R23 r_MANIFEST_INTEGER_ARG(R17 * p_A, rstr p_WHAT, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
R23 l_M_814; memset(&l_M_814, 0, sizeof l_M_814);
S_R23(&l_M_814, r_MANIFEST(p_A), 0);
if ((!(l_M_814).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" must be manifest (3.2.1, 3.3.1)", 32)));
}
if ((((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) && (!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))) && (!r_BOUND_NAME(p_A))))
{
{
R14 l_SAVED_CODE_815; memset(&l_SAVED_CODE_815, 0, sizeof l_SAVED_CODE_815);
S_R14(&l_SAVED_CODE_815, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R22 * l_T_816; memset(&l_T_816, 0, sizeof l_T_816);
l_T_816 = (r_EXPR(p_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_815, 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_T_816)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_816))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is an integer (3.2.1, 3.3.1)", 29)));
}
}
}
if ((((l_M_814).f_V < p_LO) || ((l_M_814).f_V > p_HI)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is out of the range of the attribute (3.2.1, 3.3.1)", 52)));
}
{ R23 rv817 = l_M_814;
return rv817; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOUND_NAME(R17 * p_A) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv818 = 0;
return rv818; }
}
{ rt_int rv819 = (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R17 *)rt_nil_check(p_A))).f_NAME) == NULL));
return rv819; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_PRECISION_ARG(R17 * p_P, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_P))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(p_P))).f_KIND == g_N_DONTCARE)))
{
return;
}
if ((((((*(R17 *)rt_nil_check(p_P))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_P))).f_KIND == g_N_ENUMLIT))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(p_P))).f_NAME, rt_str("STD", 3)))
{
return;
}
{
R12 * l_Y_820; memset(&l_Y_820, 0, sizeof l_Y_820);
l_Y_820 = r_LOOKUP(((*(R17 *)rt_nil_check(p_P))).f_NAME);
if ((!(l_Y_820 == NULL)))
{
if ((((((*(R12 *)rt_nil_check(l_Y_820))).f_KIND == g_Y_GEN) || (((*(R12 *)rt_nil_check(l_Y_820))).f_KIND == g_Y_CONST)) || (((((*(R12 *)rt_nil_check(l_Y_820))).f_KIND == g_Y_TYPE) && (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R17 *)rt_nil_check(p_P))).f_NAME) == NULL))))))
{
return;
}
}
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R17 *)rt_nil_check(p_P))).f_NAME) == NULL)))
{
return;
}
}
if ((!(r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_P))).f_NAME, NULL) == NULL)))
{
r_FAIL(p_LINE, rt_str("only STD precision is predefined (3.2.1)", 40));
}
}
r_FAIL(p_LINE, rt_str("the precision of a fixed point type is a value of FIXED_PRECISIONS (3.2.1)", 74));
}
static void r_CHECK_ENUM_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_821; memset(&l_R_821, 0, sizeof l_R_821);
l_R_821 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
R9 l_NAME_822; memset(&l_NAME_822, 0, sizeof l_NAME_822);
S_R9(&l_NAME_822, ((*(R17 *)rt_nil_check(l_R_821))).f_NAME, 0);
if ((((*(R17 *)rt_nil_check(l_R_821))).f_KIND == g_TS_GEN))
{
return;
}
if ((r_TEQS(l_NAME_822, rt_str("ENUM_STD", 8)) || (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, l_NAME_822) == NULL))))
{
return;
}
if ((!((r_TEQS(l_NAME_822, rt_str("ENUM_REP", 8)) || r_TEQS(l_NAME_822, rt_str("ENUM_VAL_REP", 12))))))
{
if ((!(r_ORIG_LOOKUP(l_NAME_822) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(l_NAME_822)))).f_KIND == g_Y_REPTYPE))
{
return;
}
}
r_FAILT(p_LINE, rt_str("not a representation of an enumerated type (3.4.3): ", 52), l_NAME_822);
}
if ((((*(R17 *)rt_nil_check(l_R_821))).f_A == NULL))
{
r_FAILT(p_LINE, rt_str("the size of the representation is missing: ", 43), l_NAME_822);
}
{
R23 l_N_823; memset(&l_N_823, 0, sizeof l_N_823);
S_R23(&l_N_823, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_821))).f_A), 0);
rt_int l_NL_824; memset(&l_NL_824, 0, sizeof l_NL_824);
l_NL_824 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS;
if ((!(l_N_823).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is manifest (3.4.3)", 60));
}
if ((((l_N_823).f_V > ((rt_int)64LL)) || ((l_N_823).f_V < ((rt_int)0LL))))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is in [0:(FIXED.SIZE).MAX] (3.4.3)", 75));
}
if (r_TEQS(l_NAME_822, rt_str("ENUM_REP", 8)))
{
if ((!(((*(R17 *)rt_nil_check(l_R_821))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("VALUES belong to ENUM_VAL_REP (3.4.3)", 37));
}
if (((l_N_823).f_V < r_BITS_FOR(l_NL_824)))
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
R17 * l_L_825; memset(&l_L_825, 0, sizeof l_L_825);
l_L_825 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
for (;;) {
if ((l_L_825 == NULL)) goto L_end826;
{
{
R17 * l_V_827; memset(&l_V_827, 0, sizeof l_V_827);
l_V_827 = ((*(R17 *)rt_nil_check(l_R_821))).f_B;
rt_int l_FOUND_828; memset(&l_FOUND_828, 0, sizeof l_FOUND_828);
l_FOUND_828 = ((rt_int)0LL);
for (;;) {
if ((l_V_827 == NULL)) goto L_end829;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_V_827))).f_NAME, ((*(R17 *)rt_nil_check(l_L_825))).f_NAME))
{
l_FOUND_828 = rt_add(l_FOUND_828, ((rt_int)1LL));
}
l_V_827 = ((*(R17 *)rt_nil_check(l_V_827))).f_NEXT;
}
RT_B_TICK();
} L_end829: ;
if ((!(l_FOUND_828 == ((rt_int)1LL))))
{
r_FAILT(p_LINE, rt_str("VALUES must give every literal once (3.4.3): ", 45), ((*(R17 *)rt_nil_check(l_L_825))).f_NAME);
}
}
l_L_825 = ((*(R17 *)rt_nil_check(l_L_825))).f_NEXT;
}
RT_B_TICK();
} L_end826: ;
}
{
R17 * l_V_830; memset(&l_V_830, 0, sizeof l_V_830);
l_V_830 = ((*(R17 *)rt_nil_check(l_R_821))).f_B;
for (;;) {
if ((l_V_830 == NULL)) goto L_end831;
{
if ((r_FIND_LITERAL(((*(R17 *)rt_nil_check(l_V_830))).f_NAME, ((*(R22 *)rt_nil_check(p_T))).f_BASE) == NULL))
{
r_FAILT(p_LINE, rt_str("not a literal of the type: ", 27), ((*(R17 *)rt_nil_check(l_V_830))).f_NAME);
}
{
R14 l_SAVED_CODE_832; memset(&l_SAVED_CODE_832, 0, sizeof l_SAVED_CODE_832);
S_R14(&l_SAVED_CODE_832, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_B_833; memset(&l_B_833, 0, sizeof l_B_833);
S_R26(&l_B_833, r_EXPR(((*(R17 *)rt_nil_check(l_V_830))).f_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_832, 0);
if ((!(((*(R22 *)rt_nil_check((l_B_833).f_T))).f_KIND == g_T_BITS)))
{
r_FAIL(p_LINE, rt_str("a representation in VALUES is a bitstring (3.4.3)", 49));
}
if ((((*(R22 *)rt_nil_check((l_B_833).f_T))).f_MLEN).f_OK)
{
if ((!((((*(R22 *)rt_nil_check((l_B_833).f_T))).f_MLEN).f_V == (l_N_823).f_V)))
{
r_FAILT(p_LINE, rt_str("the representation must have SIZE bits (3.4.3): ", 48), ((*(R17 *)rt_nil_check(l_V_830))).f_NAME);
}
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_830))).f_A))).f_KIND == g_N_BITS))
{
{
R17 * l_U_834; memset(&l_U_834, 0, sizeof l_U_834);
l_U_834 = ((*(R17 *)rt_nil_check(l_V_830))).f_NEXT;
for (;;) {
if ((l_U_834 == NULL)) goto L_end835;
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_834))).f_A))).f_KIND == g_N_BITS))
{
if (r_TEQ(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_834))).f_A))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_830))).f_A))).f_NAME))
{
r_FAILT(p_LINE, rt_str("two literals have the same representation (3.4.3): ", 51), ((*(R17 *)rt_nil_check(l_U_834))).f_NAME);
}
}
l_U_834 = ((*(R17 *)rt_nil_check(l_U_834))).f_NEXT;
}
RT_B_TICK();
} L_end835: ;
}
}
}
l_V_830 = ((*(R17 *)rt_nil_check(l_V_830))).f_NEXT;
}
RT_B_TICK();
} L_end831: ;
}
}
}
static void r_STRING_LENGTH(R22 * p_T, R17 * p_A) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
{
R21 * l_B_836; memset(&l_B_836, 0, sizeof l_B_836);
l_B_836 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_836 == NULL)) goto L_end837;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_836))).f_NAME, ((*(R17 *)rt_nil_check(p_A))).f_NAME) && ((((*(R21 *)rt_nil_check(l_B_836))).f_C).f_LEN > ((rt_int)0LL))))
{
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, ((*(R21 *)rt_nil_check(l_B_836))).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, ({ R23 rc838; memset(&rc838, 0, sizeof rc838);  rc838.f_OK = ((*(R21 *)rt_nil_check(l_B_836))).f_HASMV; rc838.f_V = ((*(R21 *)rt_nil_check(l_B_836))).f_MV; rc838; }), 0);
return;
}
l_B_836 = ((*(R21 *)rt_nil_check(l_B_836))).f_NEXT;
}
RT_B_TICK();
} L_end837: ;
}
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_GEN, ((*(R17 *)rt_nil_check(p_A))).f_NAME, 0);
return;
}
else if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return;
}
{
R9 l_C_839; memset(&l_C_839, 0, sizeof l_C_839);
R23 l_M_840; memset(&l_M_840, 0, sizeof l_M_840);
r_ATTR_VALUE(p_A, &l_C_839, &l_M_840);
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, l_C_839, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, l_M_840, 0);
((*(R22 *)rt_nil_check(p_T))).f_RLEVEL = r_CUR_LEVEL();
}
}
static R22 * r_RESOLVE_ARRAY(R17 * p_TS) { RT_B_TICK(); 
R22 * l_T_841; memset(&l_T_841, 0, sizeof l_T_841);
l_T_841 = r_NEW_TYP(g_T_ARR);
R17 * l_R_842; memset(&l_R_842, 0, sizeof l_R_842);
l_R_842 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R25 * l_TAIL_843; memset(&l_TAIL_843, 0, sizeof l_TAIL_843);
l_TAIL_843 = NULL;
for (;;) {
if ((l_R_842 == NULL)) goto L_end844;
{
{
R25 * l_B_845; memset(&l_B_845, 0, sizeof l_B_845);
l_B_845 = ((R25 *)rt_b_new(sizeof (R25)));
R26 l_LO_846; memset(&l_LO_846, 0, sizeof l_LO_846);
R26 l_HI_847; memset(&l_HI_847, 0, sizeof l_HI_847);
if (r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_842))).f_A))
{
S_R26(&l_LO_846, r_MKET(r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_842))).f_A))).f_NAME, (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_842))).f_A))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_LO_846, r_EXPR(((*(R17 *)rt_nil_check(l_R_842))).f_A, NULL), 0);
}
if (r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_842))).f_B))
{
S_R26(&l_HI_847, r_MKET(r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_842))).f_B))).f_NAME, (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_842))).f_B))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_HI_847, r_EXPR(((*(R17 *)rt_nil_check(l_R_842))).f_B, (l_LO_846).f_T), 0);
}
S_R25(&(*(R25 *)rt_nil_check(l_B_845)), ({ R25 rc848; memset(&rc848, 0, sizeof rc848);  S_R9(&rc848.f_LO, (l_LO_846).f_C, 0); S_R9(&rc848.f_HI, (l_HI_847).f_C, 0); S_R23(&rc848.f_MLO, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_842))).f_A), 0); S_R23(&rc848.f_MHI, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_842))).f_B), 0); rc848.f_ANYARG = 0; rc848.f_NEXT = NULL; rc848; }), 0);
if (((!r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_842))).f_A)) && (!r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_842))).f_B))))
{
if ((!r_SAME_CLASS(r_REAL_TYPE((l_LO_846).f_T), r_REAL_TYPE((l_HI_847).f_T))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_842))).f_LINE, rt_str("the bounds of an array-bound are of one type class (3.8.1)", 58));
}
S_R9(&((*(R25 *)rt_nil_check(l_B_845))).f_LO, r_INDEX_OF(l_LO_846, ((*(R17 *)rt_nil_check(l_R_842))).f_LINE), 0);
S_R9(&((*(R25 *)rt_nil_check(l_B_845))).f_HI, r_INDEX_OF(l_HI_847, ((*(R17 *)rt_nil_check(l_R_842))).f_LINE), 0);
}
if (((((*(R22 *)rt_nil_check((l_LO_846).f_T))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check((l_LO_846).f_T))).f_KIND == g_T_ABS)))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_845))).f_MLO, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_R_842))).f_A, (l_LO_846).f_T), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_845))).f_MHI, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_R_842))).f_B, (l_LO_846).f_T), 0);
if ((!r_TEQ(((*(R25 *)rt_nil_check(l_B_845))).f_LO, (l_LO_846).f_C)))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_845))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_845))).f_MHI, r_NO_MVAL(), 0);
}
}
else if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_LO_846).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_842))).f_LINE, rt_str("array bounds are integer or enumerated (3.8.1)", 46));
}
if ((l_TAIL_843 == NULL))
{
((*(R22 *)rt_nil_check(l_T_841))).f_BOUNDS = l_B_845;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_843))).f_NEXT = l_B_845;
}
l_TAIL_843 = l_B_845;
((*(R22 *)rt_nil_check(l_T_841))).f_DIMS = rt_add(((*(R22 *)rt_nil_check(l_T_841))).f_DIMS, ((rt_int)1LL));
}
l_R_842 = ((*(R17 *)rt_nil_check(l_R_842))).f_NEXT;
}
RT_B_TICK();
} L_end844: ;
((*(R22 *)rt_nil_check(l_T_841))).f_RLEVEL = r_CUR_LEVEL();
((*(R22 *)rt_nil_check(l_T_841))).f_ELEM = r_RESOLVE(((*(R17 *)rt_nil_check(p_TS))).f_C);
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_841))).f_ELEM))).f_KIND == g_T_ARR))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("ARRAY ... OF ARRAY is forbidden (3.8.1)", 39));
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_D == NULL)))
{
((*(R22 *)rt_nil_check(l_T_841))).f_REPS = r_EXPAND_REP(((*(R17 *)rt_nil_check(p_TS))).f_D, l_T_841, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
r_CHECK_REP_CLASS(l_T_841, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
S_R9(&((*(R22 *)rt_nil_check(l_T_841))).f_CNAME, r_ARRAY_STRUCT(((*(R22 *)rt_nil_check(l_T_841))).f_ELEM, ((*(R22 *)rt_nil_check(l_T_841))).f_DIMS), 0);
{ R22 * rv849 = l_T_841;
return rv849; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER(R17 * p_TS) { RT_B_TICK(); 
R12 * l_Y_850; memset(&l_Y_850, 0, sizeof l_Y_850);
l_Y_850 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((((*(R17 *)rt_nil_check(p_TS))).f_A == NULL))
{
{
R21 * l_B_851; memset(&l_B_851, 0, sizeof l_B_851);
l_B_851 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_851 == NULL)) goto L_end852;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_851))).f_NAME, ((*(R17 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R21 *)rt_nil_check(l_B_851))).f_T == NULL))))
{
if ((!(r_CUR_GENERIC() == NULL)))
{
if ((r_FIND_BIND(((*(R12 *)rt_nil_check(r_CUR_GENERIC()))).f_BINDINGS, ((*(R17 *)rt_nil_check(p_TS))).f_NAME) == l_B_851))
{
{ R22 * rv853 = r_MARK_GENP(((*(R21 *)rt_nil_check(l_B_851))).f_T, ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
return rv853; }
}
}
{ R22 * rv854 = ((*(R21 *)rt_nil_check(l_B_851))).f_T;
return rv854; }
}
l_B_851 = ((*(R21 *)rt_nil_check(l_B_851))).f_NEXT;
}
RT_B_TICK();
} L_end852: ;
}
}
if ((l_Y_850 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_850))).f_KIND == g_Y_GEN))
{
{ R22 * rv855 = r_GEN_TYPE(p_TS);
return rv855; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_850))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((!r_SEG_VISIBLE(l_Y_850, ((*(R17 *)rt_nil_check(p_TS))).f_LINE)))
{
}
if ((((*(R12 *)rt_nil_check(l_Y_850))).f_DECL == NULL))
{
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
{ R22 * rv856 = ((*(R12 *)rt_nil_check(l_Y_850))).f_T;
return rv856; }
}
{
R17 * l_D_857; memset(&l_D_857, 0, sizeof l_D_857);
l_D_857 = ((*(R12 *)rt_nil_check(l_Y_850))).f_DECL;
R22 * l_T_858; memset(&l_T_858, 0, sizeof l_T_858);
if ((((*(R17 *)rt_nil_check(l_D_857))).f_A == NULL))
{
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_850))).f_T == NULL))
{
if (((*(R12 *)rt_nil_check(l_Y_850))).f_BUSY)
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R12 *)rt_nil_check(l_Y_850))).f_BUSY = 1;
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_857))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R12 *)rt_nil_check(l_Y_850))).f_T = r_RESOLVE_RECORD(((*(R17 *)rt_nil_check(l_D_857))).f_B, r_RECORD_NAME(l_Y_850), l_Y_850, NULL);
}
else
{
((*(R12 *)rt_nil_check(l_Y_850))).f_T = r_RESOLVE_IN_DECL(l_Y_850, NULL);
if ((((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_850))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_850))).f_T))).f_KIND == g_T_ENUM))))
{
((*(R12 *)rt_nil_check(l_Y_850))).f_T = r_COPY_TYP(((*(R12 *)rt_nil_check(l_Y_850))).f_T);
}
}
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_850))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_850))).f_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_850))).f_NAME, 0);
}
((*(R12 *)rt_nil_check(l_Y_850))).f_BUSY = 0;
}
l_T_858 = ((*(R12 *)rt_nil_check(l_Y_850))).f_T;
}
else
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_857))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_858 = r_RECORD_INSTANCE(l_Y_850, p_TS);
}
else
{
l_T_858 = r_RESOLVE_IN_DECL(l_Y_850, p_TS);
}
}
{ R22 * rv859 = r_ABSTRACT_VIEW(l_Y_850, l_T_858);
return rv859; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ABSTRACT_VIEW(R12 * p_Y, R22 * p_T) { RT_B_TICK(); 
R22 * l_A_860; memset(&l_A_860, 0, sizeof l_A_860);
if (((((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL) || (!((*(R12 *)rt_nil_check(p_Y))).f_EXPORTED)))
{
{ R22 * rv861 = p_T;
return rv861; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ R22 * rv862 = p_T;
return rv862; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
if (r_EXPORTS_ORDER(p_Y))
{
{ R22 * rv863 = p_T;
return rv863; }
}
l_A_860 = r_COPY_TYP(p_T);
((*(R22 *)rt_nil_check(l_A_860))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_860))).f_DECL = p_Y;
{ R22 * rv864 = l_A_860;
return rv864; }
}
l_A_860 = r_NEW_TYP(g_T_ABS);
((*(R22 *)rt_nil_check(l_A_860))).f_BASE = p_T;
S_R9(&((*(R22 *)rt_nil_check(l_A_860))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R22 *)rt_nil_check(l_A_860))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_860))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_A_860))).f_ARGS = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
{ R22 * rv865 = l_A_860;
return rv865; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTS_ORDER(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv866 = (((((r_EXPORTS_OP(p_Y, rt_str("LESS_THAN_", 10)) && r_EXPORTS_OP(p_Y, rt_str("LESS_EQUAL_", 11))) && r_EXPORTS_OP(p_Y, rt_str("GREATER_THAN_", 13))) && r_EXPORTS_OP(p_Y, rt_str("GREATER_EQUAL_", 14))) && r_EXPORTS_OP(p_Y, rt_str("SUCC", 4))) && r_EXPORTS_OP(p_Y, rt_str("PRED", 4)));
return rv866; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTS_OP(R12 * p_Y, rstr p_OP) { RT_B_TICK(); 
R12 * l_R_867; memset(&l_R_867, 0, sizeof l_R_867);
l_R_867 = ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_MODL))).f_MEMBERS;
for (;;) {
if ((l_R_867 == NULL)) goto L_end868;
{
if ((((((*(R12 *)rt_nil_check(l_R_867))).f_KIND == g_Y_ROUTINE) && ((*(R12 *)rt_nil_check(l_R_867))).f_EXPORTED) && r_TEQ(((*(R12 *)rt_nil_check(l_R_867))).f_PREFIX, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)))
{
if (r_TEQS(r_BASE_NAME(r_ORIGINAL(l_R_867)), p_OP))
{
{ rt_int rv869 = 1;
return rv869; }
}
}
l_R_867 = ((*(R12 *)rt_nil_check(l_R_867))).f_SNEXT;
}
RT_B_TICK();
} L_end868: ;
{ rt_int rv870 = 0;
return rv870; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_UNORDERED(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))
{
{ rt_int rv871 = 0;
return rv871; }
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_UNORDERED)
{
{ rt_int rv872 = 1;
return rv872; }
}
if (((!(((*(R22 *)rt_nil_check(p_T))).f_DECL == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_MODL == NULL))))
{
{ rt_int rv873 = (!r_IN_MODULE(((*(R22 *)rt_nil_check(p_T))).f_MODL));
return rv873; }
}
{ rt_int rv874 = 0;
return rv874; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_P_875; memset(&l_P_875, 0, sizeof l_P_875);
l_P_875 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_875 == NULL)) goto L_end876;
{
if ((l_P_875 == p_M))
{
{ rt_int rv877 = 1;
return rv877; }
}
l_P_875 = ((*(R12 *)rt_nil_check(l_P_875))).f_MODL;
}
RT_B_TICK();
} L_end876: ;
{ rt_int rv878 = 0;
return rv878; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R17 * p_TS) { RT_B_TICK(); 
R17 * l_D_879; memset(&l_D_879, 0, sizeof l_D_879);
l_D_879 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_880; memset(&l_T_880, 0, sizeof l_T_880);
if ((p_TS == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
l_T_880 = r_RESOLVE(((*(R17 *)rt_nil_check(l_D_879))).f_B);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
{ R22 * rv881 = l_T_880;
return rv881; }
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R17 *)rt_nil_check(l_D_879))).f_A, p_TS);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
l_T_880 = r_RESOLVE(((*(R17 *)rt_nil_check(l_D_879))).f_B);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
r_CLOSE_SCOPE();
{ R22 * rv882 = l_T_880;
return rv882; }
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R17 * p_FORMALS, R17 * p_TS) { RT_B_TICK(); 
R17 * l_F_883; memset(&l_F_883, 0, sizeof l_F_883);
l_F_883 = p_FORMALS;
R17 * l_A_884; memset(&l_A_884, 0, sizeof l_A_884);
l_A_884 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_883 == NULL)) goto L_end885;
{
{
R17 * l_N_886; memset(&l_N_886, 0, sizeof l_N_886);
l_N_886 = ((*(R17 *)rt_nil_check(l_F_883))).f_A;
for (;;) {
if ((l_N_886 == NULL)) goto L_end887;
{
if ((l_A_884 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R17 *)rt_nil_check(l_F_883))).f_B == NULL))
{
{
R12 * l_Y_888; memset(&l_Y_888, 0, sizeof l_Y_888);
l_Y_888 = r_NEW_SYM(g_Y_TYPE, ((*(R17 *)rt_nil_check(l_N_886))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_888))).f_T = r_ARG_TYPE(l_A_884);
r_DEFINE(l_Y_888, ((*(R17 *)rt_nil_check(l_A_884))).f_LINE);
}
}
else
{
{
R12 * l_Y_889; memset(&l_Y_889, 0, sizeof l_Y_889);
l_Y_889 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(l_N_886))).f_NAME);
R9 l_C_890; memset(&l_C_890, 0, sizeof l_C_890);
R23 l_M_891; memset(&l_M_891, 0, sizeof l_M_891);
((*(R12 *)rt_nil_check(l_Y_889))).f_T = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_883))).f_B);
if (((((*(R17 *)rt_nil_check(l_A_884))).f_KIND == g_N_ANY) && (!(((*(R17 *)rt_nil_check(l_F_883))).f_IV == ((rt_int)1LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_884))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
if ((((*(R17 *)rt_nil_check(l_A_884))).f_KIND == g_N_ANY))
{
S_R9(&l_C_890, r_MK(rt_str("ANY", 3)), 0);
S_R23(&l_M_891, r_NO_MVAL(), 0);
}
else if (((((*(R17 *)rt_nil_check(l_A_884))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_A_884))).f_KIND == g_N_DONTCARE)))
{
S_R9(&l_C_890, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R17 *)rt_nil_check(l_A_884))).f_NAME, (((*(R17 *)rt_nil_check(l_A_884))).f_NAME).f_LEN))), 0);
S_R23(&l_M_891, r_NO_MVAL(), 0);
}
else
{
r_ATTR_VALUE(l_A_884, &l_C_890, &l_M_891);
}
if (((((l_M_891).f_OK && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_889))).f_T))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_889))).f_T))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_889))).f_T))).f_SCALE == ((rt_int)0LL))))
{
if ((((l_M_891).f_V < (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_889))).f_T))).f_MLO).f_V) || ((l_M_891).f_V > (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_889))).f_T))).f_MHI).f_V)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_884))).f_LINE, rt_str("the argument is outside the range of the type formal (3.12.2)", 61));
}
}
if ((((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_889))).f_T))).f_KIND == g_T_INT)) && (!r_IS_GEN_TEXT(l_C_890))) && (!(((*(R17 *)rt_nil_check(l_A_884))).f_KIND == g_N_ANY))))
{
S_R9(&l_C_890, (r_EXPR(l_A_884, ((*(R12 *)rt_nil_check(l_Y_889))).f_T)).f_C, 0);
S_R23(&l_M_891, r_ENUM_MANIFEST(l_A_884, ((*(R12 *)rt_nil_check(l_Y_889))).f_T), 0);
}
S_R9(&((*(R12 *)rt_nil_check(l_Y_889))).f_ACCESS, l_C_890, 0);
((*(R12 *)rt_nil_check(l_Y_889))).f_HASMV = (l_M_891).f_OK;
((*(R12 *)rt_nil_check(l_Y_889))).f_MV = (l_M_891).f_V;
((*(R12 *)rt_nil_check(l_Y_889))).f_INPUT = 1;
r_DEFINE(l_Y_889, ((*(R17 *)rt_nil_check(l_A_884))).f_LINE);
}
}
l_A_884 = ((*(R17 *)rt_nil_check(l_A_884))).f_NEXT;
l_N_886 = ((*(R17 *)rt_nil_check(l_N_886))).f_NEXT;
}
RT_B_TICK();
} L_end887: ;
}
l_F_883 = ((*(R17 *)rt_nil_check(l_F_883))).f_NEXT;
}
RT_B_TICK();
} L_end885: ;
if ((!(l_A_884 == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
}
static R9 r_RECORD_NAME(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_FWD).f_LEN == ((rt_int)0LL)))
{
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_FWD, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, ((*(R12 *)rt_nil_check(p_Y))).f_FWD));
}
{ R9 rv892 = ((*(R12 *)rt_nil_check(p_Y))).f_FWD;
return rv892; }
rt_raise(RT_X_INIT);
}
static R22 * r_TARGET(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS);
}
{ R22 * rv893 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET;
return rv893; }
rt_raise(RT_X_INIT);
}
static R9 r_CTYPE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_894; memset(&l_K_894, 0, sizeof l_K_894);
l_K_894 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
{ R9 rv895 = r_MK(rt_str("rt_int", 6));
return rv895; }
}
else if ((l_K_894 == g_T_FLOAT))
{
{ R9 rv896 = r_MK(rt_str("double", 6));
return rv896; }
}
else if (((l_K_894 == g_T_STR) || (l_K_894 == g_T_BITS)))
{
{ R9 rv897 = r_MK(rt_str("rstr", 4));
return rv897; }
}
else if (((l_K_894 == g_T_REC) || (l_K_894 == g_T_ARR)))
{
{ R9 rv898 = ((*(R22 *)rt_nil_check(p_T))).f_CNAME;
return rv898; }
}
else if ((l_K_894 == g_T_ABS))
{
{ R9 rv899 = r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv899; }
}
else if ((l_K_894 == g_T_SEM))
{
{ R9 rv900 = r_MK(rt_str("rt_b_sem *", 10));
return rv900; }
}
else if ((l_K_894 == g_T_PATHS))
{
{ R9 rv901 = r_MK(rt_str("rt_b_paths", 10));
return rv901; }
}
else if ((l_K_894 == g_T_VOID))
{
{ R9 rv902 = r_MK(rt_str("void", 4));
return rv902; }
}
else if ((l_K_894 == g_T_PTR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R17 * l_TT_903; memset(&l_TT_903, 0, sizeof l_TT_903);
l_TT_903 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R17 *)rt_nil_check(l_TT_903))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(l_TT_903))).f_A == NULL)))
{
{
R12 * l_Y_904; memset(&l_Y_904, 0, sizeof l_Y_904);
l_Y_904 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(l_TT_903))).f_NAME);
if ((!(l_Y_904 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_904))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_904))).f_DECL == NULL))))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_904))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_904))).f_DECL))).f_A == NULL)))
{
{ R9 rv905 = r_CATS(r_RECORD_NAME(l_Y_904), rt_str(" *", 2));
return rv905; }
}
}
}
}
}
}
}
{ R9 rv906 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv906; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R17 * p_E) { RT_B_TICK(); 
{ rt_int rv907 = ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv907; }
rt_raise(RT_X_INIT);
}
static R24 * r_NEW_FIELD(R9 p_NAME, R22 * p_T, rt_int p_KIND) { RT_B_TICK(); 
R24 * l_F_908; memset(&l_F_908, 0, sizeof l_F_908);
l_F_908 = ((R24 *)rt_b_new(sizeof (R24)));
S_R24(&(*(R24 *)rt_nil_check(l_F_908)), ({ R24 rc909; memset(&rc909, 0, sizeof rc909);  S_R9(&rc909.f_NAME, p_NAME, 0); S_R9(&rc909.f_CNAME, r_FMT1(rt_str("f_@", 3), r_CID(p_NAME)), 0); rc909.f_T = p_T; rc909.f_KIND = p_KIND; S_R9(&rc909.f_TAGF, r_NO_TEXT(), 0); rc909.f_LABELS = NULL; rc909.f_NEXT = NULL; rc909; }), 0);
{ R24 * rv910 = l_F_908;
return rv910; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_FIELD(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R24 * l_F_911; memset(&l_F_911, 0, sizeof l_F_911);
l_F_911 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_911 == NULL)) goto L_end912;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_911))).f_NAME, p_NAME))
{
{ R24 * rv913 = l_F_911;
return rv913; }
}
l_F_911 = ((*(R24 *)rt_nil_check(l_F_911))).f_NEXT;
}
RT_B_TICK();
} L_end912: ;
{ R24 * rv914 = NULL;
return rv914; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_VFIELD(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R24 * l_F_915; memset(&l_F_915, 0, sizeof l_F_915);
l_F_915 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FIRST_916; memset(&l_FIRST_916, 0, sizeof l_FIRST_916);
l_FIRST_916 = NULL;
for (;;) {
if ((l_F_915 == NULL)) goto L_end917;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_915))).f_NAME, p_NAME))
{
if ((l_FIRST_916 == NULL))
{
l_FIRST_916 = l_F_915;
}
if (((((*(R24 *)rt_nil_check(l_F_915))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
{ R24 * rv918 = l_F_915;
return rv918; }
}
{
R23 l_TAGV_919; memset(&l_TAGV_919, 0, sizeof l_TAGV_919);
S_R23(&l_TAGV_919, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(l_F_915))).f_TAGF), 0);
if ((l_TAGV_919).f_OK)
{
if (r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_915))).f_LABELS, (l_TAGV_919).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(l_F_915))).f_TAGF)))).f_T))
{
{ R24 * rv920 = l_F_915;
return rv920; }
}
}
}
}
l_F_915 = ((*(R24 *)rt_nil_check(l_F_915))).f_NEXT;
}
RT_B_TICK();
} L_end917: ;
{ R24 * rv921 = l_FIRST_916;
return rv921; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL) { RT_B_TICK(); 
R24 * l_P_922; memset(&l_P_922, 0, sizeof l_P_922);
l_P_922 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_923; memset(&l_N_923, 0, sizeof l_N_923);
l_N_923 = ((rt_int)0LL);
for (;;) {
if ((l_P_922 == NULL)) goto L_end924;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_P_922))).f_NAME, ((*(R24 *)rt_nil_check(p_F))).f_NAME))
{
if ((((((((*(R24 *)rt_nil_check(l_P_922))).f_TAGF).f_LEN == ((rt_int)0LL)) || ((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL))) || (!r_TEQ(((*(R24 *)rt_nil_check(l_P_922))).f_TAGF, ((*(R24 *)rt_nil_check(p_F))).f_TAGF))) || (((*(R24 *)rt_nil_check(l_P_922))).f_LABELS == ((*(R24 *)rt_nil_check(p_F))).f_LABELS)))
{
r_FAILT(((rt_int)0LL), rt_str("the field names of a record must be distinct (3.9.1): ", 54), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
l_N_923 = rt_add(l_N_923, ((rt_int)1LL));
}
l_P_922 = ((*(R24 *)rt_nil_check(l_P_922))).f_NEXT;
}
RT_B_TICK();
} L_end924: ;
if ((l_N_923 > ((rt_int)0LL)))
{
S_R9(&((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_923)), 0);
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
static void r_RECORD_FIELDS(R22 * p_T, R17 * p_DECLS, R9 p_TAGN, R17 * p_LABELS, R24 * *p_TAIL) { RT_B_TICK(); 
R17 * l_D_925; memset(&l_D_925, 0, sizeof l_D_925);
l_D_925 = p_DECLS;
for (;;) {
if ((l_D_925 == NULL)) goto L_end926;
{
if ((((*(R17 *)rt_nil_check(l_D_925))).f_KIND == g_N_VAR))
{
{
R22 * l_FT_927; memset(&l_FT_927, 0, sizeof l_FT_927);
l_FT_927 = r_RESOLVE(((*(R17 *)rt_nil_check(l_D_925))).f_B);
R17 * l_N_928; memset(&l_N_928, 0, sizeof l_N_928);
l_N_928 = ((*(R17 *)rt_nil_check(l_D_925))).f_A;
for (;;) {
if ((l_N_928 == NULL)) goto L_end929;
{
{
R24 * l_F_930; memset(&l_F_930, 0, sizeof l_F_930);
l_F_930 = r_NEW_FIELD(((*(R17 *)rt_nil_check(l_N_928))).f_NAME, l_FT_927, ((rt_int)0LL));
S_R9(&((*(R24 *)rt_nil_check(l_F_930))).f_TAGF, p_TAGN, 0);
((*(R24 *)rt_nil_check(l_F_930))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_930, &(*p_TAIL));
if (((r_LOOKUP(((*(R17 *)rt_nil_check(l_N_928))).f_NAME) == NULL) || (!(((*(R12 *)rt_nil_check(r_LOOKUP(((*(R17 *)rt_nil_check(l_N_928))).f_NAME)))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))))
{
{
R12 * l_Y_931; memset(&l_Y_931, 0, sizeof l_Y_931);
l_Y_931 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(l_N_928))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_931))).f_T = l_FT_927;
S_R9(&((*(R12 *)rt_nil_check(l_Y_931))).f_ACCESS, r_FMT1(rt_str("$S.@", 4), ((*(R24 *)rt_nil_check(l_F_930))).f_CNAME), 0);
((*(R12 *)rt_nil_check(l_Y_931))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_Y_931))).f_LEVEL = rt_neg(((rt_int)1LL));
((*(R12 *)rt_nil_check(l_Y_931))).f_OWNER = rt_neg(((rt_int)1LL));
r_DEFINE(l_Y_931, ((*(R17 *)rt_nil_check(l_D_925))).f_LINE);
}
}
}
l_N_928 = ((*(R17 *)rt_nil_check(l_N_928))).f_NEXT;
}
RT_B_TICK();
} L_end929: ;
}
}
else
{
{
R24 * l_TF_932; memset(&l_TF_932, 0, sizeof l_TF_932);
l_TF_932 = r_FIND_FIELD(p_T, ((*(R17 *)rt_nil_check(l_D_925))).f_NAME);
R17 * l_S_933; memset(&l_S_933, 0, sizeof l_S_933);
l_S_933 = ((*(R17 *)rt_nil_check(l_D_925))).f_A;
if ((l_TF_932 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_925))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R17 *)rt_nil_check(l_D_925))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_932))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_925))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R17 *)rt_nil_check(l_D_925))).f_NAME);
}
{
R17 * l_O_934; memset(&l_O_934, 0, sizeof l_O_934);
l_O_934 = p_DECLS;
for (;;) {
if ((l_O_934 == l_D_925)) goto L_end935;
{
if ((((*(R17 *)rt_nil_check(l_O_934))).f_KIND == g_N_VARIANT))
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_O_934))).f_NAME, ((*(R17 *)rt_nil_check(l_D_925))).f_NAME))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_925))).f_LINE, rt_str("two variant parts discriminate on the tag ", 42), ((*(R17 *)rt_nil_check(l_D_925))).f_NAME);
}
}
l_O_934 = ((*(R17 *)rt_nil_check(l_O_934))).f_NEXT;
}
RT_B_TICK();
} L_end935: ;
}
r_CHECK_VARIANT_NAMES(l_D_925, ((*(R24 *)rt_nil_check(l_TF_932))).f_T);
for (;;) {
if ((l_S_933 == NULL)) goto L_end936;
{
r_OPEN_SCOPE();
r_RECORD_FIELDS(p_T, ((*(R17 *)rt_nil_check(l_S_933))).f_B, C_R9(((*(R17 *)rt_nil_check(l_D_925))).f_NAME), ((*(R17 *)rt_nil_check(l_S_933))).f_A, &(*p_TAIL));
r_CLOSE_SCOPE();
l_S_933 = ((*(R17 *)rt_nil_check(l_S_933))).f_NEXT;
}
RT_B_TICK();
} L_end936: ;
}
}
l_D_925 = ((*(R17 *)rt_nil_check(l_D_925))).f_NEXT;
}
RT_B_TICK();
} L_end926: ;
}
static void r_CHECK_VARIANT_NAMES(R17 * p_D, R22 * p_TT) { RT_B_TICK(); 
R17 * l_S_937; memset(&l_S_937, 0, sizeof l_S_937);
l_S_937 = ((*(R17 *)rt_nil_check(p_D))).f_A;
R17 * l_LOS_938; memset(&l_LOS_938, 0, sizeof l_LOS_938);
l_LOS_938 = NULL;
R17 * l_HIS_939; memset(&l_HIS_939, 0, sizeof l_HIS_939);
l_HIS_939 = NULL;
rt_int l_LO_LIM_940; memset(&l_LO_LIM_940, 0, sizeof l_LO_LIM_940);
rt_int l_HI_LIM_941; memset(&l_HI_LIM_941, 0, sizeof l_HI_LIM_941);
R22 * l_R_942; memset(&l_R_942, 0, sizeof l_R_942);
l_R_942 = r_REAL_TYPE(p_TT);
l_LO_LIM_940 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
l_HI_LIM_941 = INT64_MAX;
if ((((*(R22 *)rt_nil_check(l_R_942))).f_KIND == g_T_ENUM))
{
l_LO_LIM_940 = ((rt_int)0LL);
l_HI_LIM_941 = rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_R_942))).f_BASE))).f_NLITS, ((rt_int)1LL));
}
else if ((((*(R22 *)rt_nil_check(l_R_942))).f_KIND == g_T_BOOL))
{
l_LO_LIM_940 = ((rt_int)0LL);
l_HI_LIM_941 = ((rt_int)1LL);
}
if ((((*(R22 *)rt_nil_check(l_R_942))).f_MLO).f_OK)
{
l_LO_LIM_940 = (((*(R22 *)rt_nil_check(l_R_942))).f_MLO).f_V;
}
if ((((*(R22 *)rt_nil_check(l_R_942))).f_MHI).f_OK)
{
l_HI_LIM_941 = (((*(R22 *)rt_nil_check(l_R_942))).f_MHI).f_V;
}
for (;;) {
if ((l_S_937 == NULL)) goto L_end943;
{
{
R17 * l_L_944; memset(&l_L_944, 0, sizeof l_L_944);
l_L_944 = ((*(R17 *)rt_nil_check(l_S_937))).f_A;
for (;;) {
if ((l_L_944 == NULL)) goto L_end945;
{
{
R23 l_A_946; memset(&l_A_946, 0, sizeof l_A_946);
R23 l_B_947; memset(&l_B_947, 0, sizeof l_B_947);
if ((((*(R17 *)rt_nil_check(l_L_944))).f_KIND == g_N_RANGE))
{
S_R23(&l_A_946, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_944))).f_A, p_TT), 0);
S_R23(&l_B_947, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_944))).f_B, p_TT), 0);
if (((l_A_946).f_OK && (((((*(R17 *)rt_nil_check(l_L_944))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_L_944))).f_IV == ((rt_int)3LL))))))
{
(l_A_946).f_V = rt_add((l_A_946).f_V, ((rt_int)1LL));
}
if (((l_B_947).f_OK && (((*(R17 *)rt_nil_check(l_L_944))).f_IV >= ((rt_int)2LL))))
{
(l_B_947).f_V = rt_sub((l_B_947).f_V, ((rt_int)1LL));
}
}
else
{
S_R23(&l_A_946, r_ENUM_MANIFEST(l_L_944, p_TT), 0);
S_R23(&l_B_947, l_A_946, 0);
}
if ((!(((l_A_946).f_OK && (l_B_947).f_OK))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_944))).f_LINE, rt_str("a variant-name is manifest (3.9.1)", 34));
}
if (((((l_A_946).f_V < l_LO_LIM_940) || ((l_B_947).f_V > l_HI_LIM_941)) || ((l_A_946).f_V > (l_B_947).f_V)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_944))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.1)", 49));
}
{
R17 * l_P_948; memset(&l_P_948, 0, sizeof l_P_948);
l_P_948 = l_LOS_938;
R17 * l_Q_949; memset(&l_Q_949, 0, sizeof l_Q_949);
l_Q_949 = l_HIS_939;
for (;;) {
if ((l_P_948 == NULL)) goto L_end950;
{
if ((((l_A_946).f_V <= ((*(R17 *)rt_nil_check(l_Q_949))).f_IV) && ((l_B_947).f_V >= ((*(R17 *)rt_nil_check(l_P_948))).f_IV)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_944))).f_LINE, rt_str("a value of the tag names two variants (3.9.1)", 45));
}
l_P_948 = ((*(R17 *)rt_nil_check(l_P_948))).f_NEXT;
l_Q_949 = ((*(R17 *)rt_nil_check(l_Q_949))).f_NEXT;
}
RT_B_TICK();
} L_end950: ;
}
{
R17 * l_P_951; memset(&l_P_951, 0, sizeof l_P_951);
l_P_951 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
R17 * l_Q_952; memset(&l_Q_952, 0, sizeof l_Q_952);
l_Q_952 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R17 *)rt_nil_check(l_P_951))).f_IV = (l_A_946).f_V;
((*(R17 *)rt_nil_check(l_Q_952))).f_IV = (l_B_947).f_V;
((*(R17 *)rt_nil_check(l_P_951))).f_NEXT = l_LOS_938;
((*(R17 *)rt_nil_check(l_Q_952))).f_NEXT = l_HIS_939;
l_LOS_938 = l_P_951;
l_HIS_939 = l_Q_952;
}
}
l_L_944 = ((*(R17 *)rt_nil_check(l_L_944))).f_NEXT;
}
RT_B_TICK();
} L_end945: ;
}
l_S_937 = ((*(R17 *)rt_nil_check(l_S_937))).f_NEXT;
}
RT_B_TICK();
} L_end943: ;
}
static R22 * r_RESOLVE_RECORD(R17 * p_TS, R9 p_CNAME, R12 * p_Y, R17 * p_FORMALS) { RT_B_TICK(); 
R22 * l_T_953; memset(&l_T_953, 0, sizeof l_T_953);
l_T_953 = r_NEW_TYP(g_T_REC);
R24 * l_TAIL_954; memset(&l_TAIL_954, 0, sizeof l_TAIL_954);
l_TAIL_954 = NULL;
((*(R22 *)rt_nil_check(l_T_953))).f_BASE = l_T_953;
((*(R22 *)rt_nil_check(l_T_953))).f_DECL = p_Y;
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_D == NULL)))
{
((*(R22 *)rt_nil_check(l_T_953))).f_REPS = r_EXPAND_REP(((*(R17 *)rt_nil_check(p_TS))).f_D, l_T_953, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
r_CHECK_REP_CLASS(l_T_953, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(l_T_953))).f_CNAME, p_CNAME, 0);
}
else
{
S_R9(&((*(R22 *)rt_nil_check(l_T_953))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R22 *)rt_nil_check(l_T_953))).f_CNAME, ((*(R22 *)rt_nil_check(l_T_953))).f_CNAME));
}
{
R17 * l_F_955; memset(&l_F_955, 0, sizeof l_F_955);
l_F_955 = p_FORMALS;
for (;;) {
if ((l_F_955 == NULL)) goto L_end956;
{
if ((!(((*(R17 *)rt_nil_check(l_F_955))).f_B == NULL)))
{
{
R22 * l_FT_957; memset(&l_FT_957, 0, sizeof l_FT_957);
l_FT_957 = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_955))).f_B);
R17 * l_N_958; memset(&l_N_958, 0, sizeof l_N_958);
l_N_958 = ((*(R17 *)rt_nil_check(l_F_955))).f_A;
rt_int l_KIND_959; memset(&l_KIND_959, 0, sizeof l_KIND_959);
l_KIND_959 = ((rt_int)1LL);
if ((((*(R17 *)rt_nil_check(l_F_955))).f_IV == ((rt_int)1LL)))
{
l_KIND_959 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_957))) || (!(((*(R22 *)rt_nil_check(l_FT_957))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_F_955))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_958 == NULL)) goto L_end960;
{
r_ADD_FIELD(l_T_953, r_NEW_FIELD(((*(R17 *)rt_nil_check(l_N_958))).f_NAME, l_FT_957, l_KIND_959), &l_TAIL_954);
l_N_958 = ((*(R17 *)rt_nil_check(l_N_958))).f_NEXT;
}
RT_B_TICK();
} L_end960: ;
}
}
l_F_955 = ((*(R17 *)rt_nil_check(l_F_955))).f_NEXT;
}
RT_B_TICK();
} L_end956: ;
}
r_OPEN_SCOPE();
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_RECORD_FIELDS(l_T_953, ((*(R17 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_954);
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_CLOSE_SCOPE();
r_CHECK_RECORD_REP(l_T_953, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
r_COMPLETE_RECORD(l_T_953);
{ R22 * rv961 = l_T_953;
return rv961; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_RECORD_REP(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv962 = 0;
return rv962; }
}
{ rt_int rv963 = ((((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_KIND == g_N_REP) && r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_NAME, rt_str("RECORD_REP", 10)));
return rv963; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_RECORD_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_SEEN_964; memset(&l_SEEN_964, 0, sizeof l_SEEN_964);
l_SEEN_964 = NULL;
rt_int l_LISTED_965; memset(&l_LISTED_965, 0, sizeof l_LISTED_965);
l_LISTED_965 = 0;
if ((!r_IS_RECORD_REP(p_T)))
{
return;
}
{
R17 * l_P_966; memset(&l_P_966, 0, sizeof l_P_966);
l_P_966 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A;
for (;;) {
if ((l_P_966 == NULL)) goto L_end967;
{
if ((((*(R17 *)rt_nil_check(l_P_966))).f_IV == ((rt_int)1LL)))
{
l_LISTED_965 = 1;
}
r_CHECK_ELEMENTS(p_T, ((*(R17 *)rt_nil_check(l_P_966))).f_A, r_NO_TEXT(), NULL, &l_SEEN_964);
l_P_966 = ((*(R17 *)rt_nil_check(l_P_966))).f_NEXT;
}
RT_B_TICK();
} L_end967: ;
}
if (l_LISTED_965)
{
{
R24 * l_F_968; memset(&l_F_968, 0, sizeof l_F_968);
l_F_968 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_968 == NULL)) goto L_end969;
{
if ((((((*(R24 *)rt_nil_check(l_F_968))).f_TAGF).f_LEN == ((rt_int)0LL)) && (!r_IN_IDENTS(l_SEEN_964, ((*(R24 *)rt_nil_check(l_F_968))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("a record-reptype with element-specs positions every field (3.9.3): ", 67), ((*(R24 *)rt_nil_check(l_F_968))).f_NAME);
}
if ((((((*(R24 *)rt_nil_check(l_F_968))).f_TAGF).f_LEN > ((rt_int)0LL)) && (!r_IN_IDENTS(l_SEEN_964, r_CAT(r_MK(rt_str("|", 1)), ((*(R24 *)rt_nil_check(l_F_968))).f_TAGF)))))
{
r_FAILT(p_LINE, rt_str("a record-reptype with element-specs positions every variant part (3.9.3): ", 74), ((*(R24 *)rt_nil_check(l_F_968))).f_TAGF);
}
l_F_968 = ((*(R24 *)rt_nil_check(l_F_968))).f_NEXT;
}
RT_B_TICK();
} L_end969: ;
}
}
{
R17 * l_V_970; memset(&l_V_970, 0, sizeof l_V_970);
l_V_970 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_C;
for (;;) {
if ((l_V_970 == NULL)) goto L_end971;
{
{
R24 * l_TF_972; memset(&l_TF_972, 0, sizeof l_TF_972);
l_TF_972 = r_FIND_FIELD(p_T, ((*(R17 *)rt_nil_check(l_V_970))).f_NAME);
R17 * l_S_973; memset(&l_S_973, 0, sizeof l_S_973);
l_S_973 = ((*(R17 *)rt_nil_check(l_V_970))).f_A;
if ((l_TF_972 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_V_970))).f_LINE, rt_str("not a tag of the record (3.9.3): ", 33), ((*(R17 *)rt_nil_check(l_V_970))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_972))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_V_970))).f_LINE, rt_str("not a tag of the record (3.9.3): ", 33), ((*(R17 *)rt_nil_check(l_V_970))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(l_V_970))).f_B == NULL)))
{
if ((r_PACKING_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_970))).f_B))).f_NAME) < ((rt_int)0LL)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_V_970))).f_LINE, rt_str("a packing-mode is DENSE, PACKED or UNPACKED (3.9.3): ", 53), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_970))).f_B))).f_NAME);
}
}
for (;;) {
if ((l_S_973 == NULL)) goto L_end974;
{
{
R17 * l_L_975; memset(&l_L_975, 0, sizeof l_L_975);
l_L_975 = ((*(R17 *)rt_nil_check(l_S_973))).f_A;
R17 * l_P_976; memset(&l_P_976, 0, sizeof l_P_976);
l_P_976 = ((*(R17 *)rt_nil_check(l_S_973))).f_B;
R17 * l_VSEEN_977; memset(&l_VSEEN_977, 0, sizeof l_VSEEN_977);
l_VSEEN_977 = NULL;
for (;;) {
if ((l_L_975 == NULL)) goto L_end978;
{
{
R14 l_SAVED_CODE_979; memset(&l_SAVED_CODE_979, 0, sizeof l_SAVED_CODE_979);
S_R14(&l_SAVED_CODE_979, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_LV_980; memset(&l_LV_980, 0, sizeof l_LV_980);
S_R26(&l_LV_980, r_EXPR(l_L_975, ((*(R24 *)rt_nil_check(l_TF_972))).f_T), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_979, 0);
if ((!r_SAME_CLASS(r_REAL_TYPE((l_LV_980).f_T), r_REAL_TYPE(((*(R24 *)rt_nil_check(l_TF_972))).f_T))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_975))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.3)", 49));
}
}
l_L_975 = ((*(R17 *)rt_nil_check(l_L_975))).f_NEXT;
}
RT_B_TICK();
} L_end978: ;
for (;;) {
if ((l_P_976 == NULL)) goto L_end981;
{
r_CHECK_ELEMENTS(p_T, ((*(R17 *)rt_nil_check(l_P_976))).f_A, C_R9(((*(R17 *)rt_nil_check(l_V_970))).f_NAME), ((*(R17 *)rt_nil_check(l_S_973))).f_A, &l_VSEEN_977);
l_P_976 = ((*(R17 *)rt_nil_check(l_P_976))).f_NEXT;
}
RT_B_TICK();
} L_end981: ;
}
l_S_973 = ((*(R17 *)rt_nil_check(l_S_973))).f_NEXT;
}
RT_B_TICK();
} L_end974: ;
}
l_V_970 = ((*(R17 *)rt_nil_check(l_V_970))).f_NEXT;
}
RT_B_TICK();
} L_end971: ;
}
}
static void r_CHECK_ELEMENTS(R22 * p_T, R17 * p_L, R9 p_TAGN, R17 * p_LABELS, R17 * *p_SEEN) { RT_B_TICK(); 
R17 * l_E_982; memset(&l_E_982, 0, sizeof l_E_982);
l_E_982 = p_L;
for (;;) {
if ((l_E_982 == NULL)) goto L_end983;
{
if (((((*(R17 *)rt_nil_check(l_E_982))).f_FL == ((rt_int)0LL)) || (((*(R17 *)rt_nil_check(l_E_982))).f_FL == ((rt_int)2LL))))
{
{
R24 * l_F_984; memset(&l_F_984, 0, sizeof l_F_984);
l_F_984 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FOUND_985; memset(&l_FOUND_985, 0, sizeof l_FOUND_985);
l_FOUND_985 = NULL;
for (;;) {
if ((l_F_984 == NULL)) goto L_end986;
{
if ((r_TEQ(((*(R24 *)rt_nil_check(l_F_984))).f_NAME, ((*(R17 *)rt_nil_check(l_E_982))).f_NAME) && r_TEQ(((*(R24 *)rt_nil_check(l_F_984))).f_TAGF, p_TAGN)))
{
l_FOUND_985 = l_F_984;
}
l_F_984 = ((*(R24 *)rt_nil_check(l_F_984))).f_NEXT;
}
RT_B_TICK();
} L_end986: ;
if ((l_FOUND_985 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_982))).f_LINE, rt_str("not a field of the record accessible here (3.9.3): ", 51), ((*(R17 *)rt_nil_check(l_E_982))).f_NAME);
}
if (((((*(R17 *)rt_nil_check(l_E_982))).f_FL == ((rt_int)2LL)) && (((*(R24 *)rt_nil_check(l_FOUND_985))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_982))).f_LINE, rt_str("OMIT names a constant or tag field (3.9.3): ", 44), ((*(R17 *)rt_nil_check(l_E_982))).f_NAME);
}
if (r_IN_IDENTS((*p_SEEN), ((*(R17 *)rt_nil_check(l_E_982))).f_NAME))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_982))).f_LINE, rt_str("a field is positioned once in a record-reptype (3.9.3): ", 56), ((*(R17 *)rt_nil_check(l_E_982))).f_NAME);
}
(*p_SEEN) = r_NAME_REF(((*(R17 *)rt_nil_check(l_E_982))).f_NAME, ((rt_int)0LL), NULL, (*p_SEEN));
}
}
else if ((((*(R17 *)rt_nil_check(l_E_982))).f_FL == ((rt_int)1LL)))
{
{
R24 * l_TF_987; memset(&l_TF_987, 0, sizeof l_TF_987);
l_TF_987 = r_FIND_FIELD(p_T, ((*(R17 *)rt_nil_check(l_E_982))).f_NAME);
R9 l_KEY_988; memset(&l_KEY_988, 0, sizeof l_KEY_988);
S_R9(&l_KEY_988, r_CAT(r_MK(rt_str("|", 1)), ((*(R17 *)rt_nil_check(l_E_982))).f_NAME), 0);
if ((l_TF_987 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_982))).f_LINE, rt_str("VARIANTS names a tag of the record (3.9.3): ", 44), ((*(R17 *)rt_nil_check(l_E_982))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_987))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_982))).f_LINE, rt_str("VARIANTS names a tag of the record (3.9.3): ", 44), ((*(R17 *)rt_nil_check(l_E_982))).f_NAME);
}
if (r_IN_IDENTS((*p_SEEN), l_KEY_988))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_982))).f_LINE, rt_str("a variant part is positioned once in a record-reptype (3.9.3): ", 63), ((*(R17 *)rt_nil_check(l_E_982))).f_NAME);
}
(*p_SEEN) = r_NAME_REF(l_KEY_988, ((rt_int)0LL), NULL, (*p_SEEN));
}
}
else
{
{
R23 l_M_989; memset(&l_M_989, 0, sizeof l_M_989);
S_R23(&l_M_989, r_MANIFEST(((*(R17 *)rt_nil_check(l_E_982))).f_B), 0);
if (((!(l_M_989).f_OK) || ((l_M_989).f_V < ((rt_int)0LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_E_982))).f_LINE, rt_str("the length of a filler-spec is a manifest integer, not negative (3.9.3)", 71));
}
}
}
l_E_982 = ((*(R17 *)rt_nil_check(l_E_982))).f_NEXT;
}
RT_B_TICK();
} L_end983: ;
}
static R9 r_RECORD_SIZE(R22 * p_T, R9 p_C) { RT_B_TICK(); 
R9 l_R_990; memset(&l_R_990, 0, sizeof l_R_990);
S_R9(&l_R_990, r_MK(rt_str("({ rt_int sz = 0;", 17)), 0);
R17 * l_SAVED_991; memset(&l_SAVED_991, 0, sizeof l_SAVED_991);
l_SAVED_991 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
((*(R7 *)rt_nil_check(g_W))).f_LDONE = NULL;
if ((!r_IS_RECORD_REP(p_T)))
{
S_R9(&l_R_990, r_CAT(l_R_990, r_LAYOUT_ALL(p_T, p_C, r_NO_TEXT(), ((rt_int)2LL))), 0);
S_R9(&l_R_990, r_CAT(l_R_990, r_LAYOUT_PARTS(p_T, p_C)), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_SAVED_991;
{ R9 rv992 = r_CATS(l_R_990, rt_str(" sz; })", 7));
return rv992; }
}
{
R17 * l_P_993; memset(&l_P_993, 0, sizeof l_P_993);
l_P_993 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A;
for (;;) {
if ((l_P_993 == NULL)) goto L_end994;
{
S_R9(&l_R_990, r_CAT(l_R_990, r_LAYOUT_SPEC(p_T, p_C, l_P_993, r_NO_TEXT())), 0);
l_P_993 = ((*(R17 *)rt_nil_check(l_P_993))).f_NEXT;
}
RT_B_TICK();
} L_end994: ;
}
S_R9(&l_R_990, r_CAT(l_R_990, r_LAYOUT_ALL(p_T, p_C, r_NO_TEXT(), ((rt_int)2LL))), 0);
S_R9(&l_R_990, r_CAT(l_R_990, r_LAYOUT_PARTS(p_T, p_C)), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_SAVED_991;
{ R9 rv995 = r_CATS(l_R_990, rt_str(" sz; })", 7));
return rv995; }
rt_raise(RT_X_INIT);
}
static R9 r_FIELD_SIZE_C(R24 * p_F, R9 p_C) { RT_B_TICK(); 
{ R9 rv996 = (r_SIZE_OF(((*(R24 *)rt_nil_check(p_F))).f_T, r_FMT2(rt_str("(@).@", 5), p_C, ((*(R24 *)rt_nil_check(p_F))).f_CNAME))).f_C;
return rv996; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_ALL(R22 * p_T, R9 p_C, R9 p_TAGN, rt_int p_MODE) { RT_B_TICK(); 
R9 l_R_997; memset(&l_R_997, 0, sizeof l_R_997);
S_R9(&l_R_997, r_MK(rt_str("", 0)), 0);
R24 * l_F_998; memset(&l_F_998, 0, sizeof l_F_998);
l_F_998 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_998 == NULL)) goto L_end999;
{
if ((r_TEQ(((*(R24 *)rt_nil_check(l_F_998))).f_TAGF, p_TAGN) && (!r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LDONE, ((*(R24 *)rt_nil_check(l_F_998))).f_NAME))))
{
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(((*(R24 *)rt_nil_check(l_F_998))).f_NAME, ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_997, r_FMT4(rt_str("@ sz = rt_b_layout(sz, @, @);", 29), l_R_997, r_FIELD_SIZE_C(l_F_998, p_C), r_NUM(p_MODE), r_MK(rt_str("", 0))), 0);
}
else
{
S_R9(&l_R_997, r_CAT(l_R_997, r_FMT4(rt_str(" if (@) sz = rt_b_layout(sz, @, @);@", 36), r_VARIANT_COND(l_F_998, p_T, p_C), r_FIELD_SIZE_C(l_F_998, p_C), r_NUM(p_MODE), r_MK(rt_str("", 0)))), 0);
}
}
l_F_998 = ((*(R24 *)rt_nil_check(l_F_998))).f_NEXT;
}
RT_B_TICK();
} L_end999: ;
{ R9 rv1000 = l_R_997;
return rv1000; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_PARTS(R22 * p_T, R9 p_C) { RT_B_TICK(); 
R9 l_R_1001; memset(&l_R_1001, 0, sizeof l_R_1001);
S_R9(&l_R_1001, r_MK(rt_str("", 0)), 0);
R24 * l_F_1002; memset(&l_F_1002, 0, sizeof l_F_1002);
l_F_1002 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1002 == NULL)) goto L_end1003;
{
if ((((((*(R24 *)rt_nil_check(l_F_1002))).f_TAGF).f_LEN > ((rt_int)0LL)) && (!r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LDONE, r_CAT(r_MK(rt_str("|", 1)), ((*(R24 *)rt_nil_check(l_F_1002))).f_TAGF)))))
{
S_R9(&l_R_1001, r_CAT(l_R_1001, r_LAYOUT_VARIANTS(p_T, p_C, ((*(R24 *)rt_nil_check(l_F_1002))).f_TAGF)), 0);
}
l_F_1002 = ((*(R24 *)rt_nil_check(l_F_1002))).f_NEXT;
}
RT_B_TICK();
} L_end1003: ;
{ R9 rv1004 = l_R_1001;
return rv1004; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_SPEC(R22 * p_T, R9 p_C, R17 * p_P, R9 p_TAGN) { RT_B_TICK(); 
rt_int l_MODE_1005; memset(&l_MODE_1005, 0, sizeof l_MODE_1005);
l_MODE_1005 = ((rt_int)2LL);
R9 l_R_1006; memset(&l_R_1006, 0, sizeof l_R_1006);
S_R9(&l_R_1006, r_MK(rt_str("", 0)), 0);
if (((((*(R17 *)rt_nil_check(p_P))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_MODE_1005 = r_PACKING_VALUE(((*(R17 *)rt_nil_check(p_P))).f_NAME);
}
if ((((*(R17 *)rt_nil_check(p_P))).f_IV == ((rt_int)0LL)))
{
S_R9(&l_R_1006, r_LAYOUT_ALL(p_T, p_C, p_TAGN, l_MODE_1005), 0);
if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_1006, r_CAT(l_R_1006, r_LAYOUT_PARTS(p_T, p_C)), 0);
}
{ R9 rv1007 = l_R_1006;
return rv1007; }
}
{
R17 * l_E_1008; memset(&l_E_1008, 0, sizeof l_E_1008);
l_E_1008 = ((*(R17 *)rt_nil_check(p_P))).f_A;
for (;;) {
if ((l_E_1008 == NULL)) goto L_end1009;
{
if (((((*(R17 *)rt_nil_check(l_E_1008))).f_FL == ((rt_int)0LL)) || (((*(R17 *)rt_nil_check(l_E_1008))).f_FL == ((rt_int)2LL))))
{
{
R24 * l_F_1010; memset(&l_F_1010, 0, sizeof l_F_1010);
l_F_1010 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1010 == NULL)) goto L_end1011;
{
if ((r_TEQ(((*(R24 *)rt_nil_check(l_F_1010))).f_NAME, ((*(R17 *)rt_nil_check(l_E_1008))).f_NAME) && r_TEQ(((*(R24 *)rt_nil_check(l_F_1010))).f_TAGF, p_TAGN)))
{
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(((*(R24 *)rt_nil_check(l_F_1010))).f_NAME, ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (((((*(R17 *)rt_nil_check(l_E_1008))).f_FL == ((rt_int)2LL)) && r_ARG_MANIFEST(p_T, l_F_1010)))
{
}
else if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_1006, r_FMT3(rt_str("@ sz = rt_b_layout(sz, @, @);", 29), l_R_1006, r_FIELD_SIZE_C(l_F_1010, p_C), r_NUM(l_MODE_1005)), 0);
}
else
{
S_R9(&l_R_1006, r_CAT(l_R_1006, r_FMT4(rt_str(" if (@) sz = rt_b_layout(sz, @, @);@", 36), r_VARIANT_COND(l_F_1010, p_T, p_C), r_FIELD_SIZE_C(l_F_1010, p_C), r_NUM(l_MODE_1005), r_MK(rt_str("", 0)))), 0);
}
}
l_F_1010 = ((*(R24 *)rt_nil_check(l_F_1010))).f_NEXT;
}
RT_B_TICK();
} L_end1011: ;
}
}
else if ((((*(R17 *)rt_nil_check(l_E_1008))).f_FL == ((rt_int)1LL)))
{
S_R9(&l_R_1006, r_CAT(l_R_1006, r_LAYOUT_VARIANTS(p_T, p_C, ((*(R17 *)rt_nil_check(l_E_1008))).f_NAME)), 0);
}
else if ((((*(R17 *)rt_nil_check(l_E_1008))).f_FL == ((rt_int)5LL)))
{
S_R9(&l_R_1006, r_FMT3(rt_str("@ sz = rt_b_layout(sz, rt_b_pack_size(@, 7, @), ", 48), l_R_1006, r_NUM((r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1008))).f_B)).f_V), r_NUM(l_MODE_1005)), 0);
S_R9(&l_R_1006, r_FMT2(rt_str("@@);", 4), l_R_1006, r_NUM(l_MODE_1005)), 0);
}
else
{
S_R9(&l_R_1006, r_FMT3(rt_str("@ sz = rt_b_layout(sz, @, @);", 29), l_R_1006, r_NUM((r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1008))).f_B)).f_V), r_NUM(l_MODE_1005)), 0);
}
l_E_1008 = ((*(R17 *)rt_nil_check(l_E_1008))).f_NEXT;
}
RT_B_TICK();
} L_end1009: ;
}
{ R9 rv1012 = l_R_1006;
return rv1012; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_VARIANTS(R22 * p_T, R9 p_C, R9 p_TAGN) { RT_B_TICK(); 
R9 l_R_1013; memset(&l_R_1013, 0, sizeof l_R_1013);
S_R9(&l_R_1013, r_MK(rt_str("", 0)), 0);
R9 l_WORD_1014; memset(&l_WORD_1014, 0, sizeof l_WORD_1014);
S_R9(&l_WORD_1014, r_MK(rt_str(" if", 3)), 0);
rt_int l_ELSE_MODE_1015; memset(&l_ELSE_MODE_1015, 0, sizeof l_ELSE_MODE_1015);
l_ELSE_MODE_1015 = ((rt_int)2LL);
R24 * l_TF_1016; memset(&l_TF_1016, 0, sizeof l_TF_1016);
l_TF_1016 = r_FIND_FIELD(p_T, p_TAGN);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(r_CAT(r_MK(rt_str("|", 1)), p_TAGN), ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (r_IS_RECORD_REP(p_T))
{
{
R17 * l_V_1017; memset(&l_V_1017, 0, sizeof l_V_1017);
l_V_1017 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_C;
for (;;) {
if ((l_V_1017 == NULL)) goto L_end1018;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_V_1017))).f_NAME, p_TAGN))
{
{
R17 * l_S_1019; memset(&l_S_1019, 0, sizeof l_S_1019);
l_S_1019 = ((*(R17 *)rt_nil_check(l_V_1017))).f_A;
if ((!(((*(R17 *)rt_nil_check(l_V_1017))).f_B == NULL)))
{
l_ELSE_MODE_1015 = r_PACKING_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_1017))).f_B))).f_NAME);
}
for (;;) {
if ((l_S_1019 == NULL)) goto L_end1020;
{
{
R9 l_COND_1021; memset(&l_COND_1021, 0, sizeof l_COND_1021);
S_R9(&l_COND_1021, r_MK(rt_str("0", 1)), 0);
R17 * l_L_1022; memset(&l_L_1022, 0, sizeof l_L_1022);
l_L_1022 = ((*(R17 *)rt_nil_check(l_S_1019))).f_A;
R17 * l_P_1023; memset(&l_P_1023, 0, sizeof l_P_1023);
l_P_1023 = ((*(R17 *)rt_nil_check(l_S_1019))).f_B;
R17 * l_OUTER_1024; memset(&l_OUTER_1024, 0, sizeof l_OUTER_1024);
l_OUTER_1024 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
R9 l_BODY_1025; memset(&l_BODY_1025, 0, sizeof l_BODY_1025);
S_R9(&l_BODY_1025, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1022 == NULL)) goto L_end1026;
{
S_R9(&l_COND_1021, r_FMT4(rt_str("@ || (@).@ == @", 15), l_COND_1021, p_C, ((*(R24 *)rt_nil_check(l_TF_1016))).f_CNAME, (r_EXPR(l_L_1022, ((*(R24 *)rt_nil_check(l_TF_1016))).f_T)).f_C), 0);
l_L_1022 = ((*(R17 *)rt_nil_check(l_L_1022))).f_NEXT;
}
RT_B_TICK();
} L_end1026: ;
for (;;) {
if ((l_P_1023 == NULL)) goto L_end1027;
{
S_R9(&l_BODY_1025, r_CAT(l_BODY_1025, r_LAYOUT_SPEC(p_T, p_C, l_P_1023, p_TAGN)), 0);
l_P_1023 = ((*(R17 *)rt_nil_check(l_P_1023))).f_NEXT;
}
RT_B_TICK();
} L_end1027: ;
S_R9(&l_BODY_1025, r_CAT(l_BODY_1025, r_LAYOUT_ALL(p_T, p_C, p_TAGN, ((rt_int)2LL))), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_OUTER_1024;
S_R9(&l_R_1013, r_CAT(l_R_1013, r_FMT3(rt_str("@ (@) {@ }", 10), l_WORD_1014, l_COND_1021, l_BODY_1025)), 0);
S_R9(&l_WORD_1014, r_MK(rt_str(" else if", 8)), 0);
}
l_S_1019 = ((*(R17 *)rt_nil_check(l_S_1019))).f_NEXT;
}
RT_B_TICK();
} L_end1020: ;
}
}
l_V_1017 = ((*(R17 *)rt_nil_check(l_V_1017))).f_NEXT;
}
RT_B_TICK();
} L_end1018: ;
}
}
{
R17 * l_OUTER_1028; memset(&l_OUTER_1028, 0, sizeof l_OUTER_1028);
l_OUTER_1028 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
R9 l_REST_1029; memset(&l_REST_1029, 0, sizeof l_REST_1029);
S_R9(&l_REST_1029, r_LAYOUT_ALL(p_T, p_C, p_TAGN, l_ELSE_MODE_1015), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_OUTER_1028;
if (r_TEQS(l_WORD_1014, rt_str(" if", 3)))
{
{ R9 rv1030 = l_REST_1029;
return rv1030; }
}
{ R9 rv1031 = r_FMT2(rt_str("@ else {@ }", 11), l_R_1013, l_REST_1029);
return rv1031; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_ARG_MANIFEST(R22 * p_T, R24 * p_F) { RT_B_TICK(); 
R24 * l_G_1032; memset(&l_G_1032, 0, sizeof l_G_1032);
l_G_1032 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1033; memset(&l_A_1033, 0, sizeof l_A_1033);
l_A_1033 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_G_1032 == NULL) || (l_A_1033 == NULL))) goto L_end1034;
{
if ((!(((*(R24 *)rt_nil_check(l_G_1032))).f_KIND == ((rt_int)0LL))))
{
if ((l_G_1032 == p_F))
{
{ rt_int rv1035 = ((((*(R25 *)rt_nil_check(l_A_1033))).f_MLO).f_OK && (!((*(R25 *)rt_nil_check(l_A_1033))).f_ANYARG));
return rv1035; }
}
l_A_1033 = ((*(R25 *)rt_nil_check(l_A_1033))).f_NEXT;
}
l_G_1032 = ((*(R24 *)rt_nil_check(l_G_1032))).f_NEXT;
}
RT_B_TICK();
} L_end1034: ;
{ rt_int rv1036 = 0;
return rv1036; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ANY_TAG(R17 * p_A) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv1037 = 0;
return rv1037; }
}
{
R12 * l_Y_1038; memset(&l_Y_1038, 0, sizeof l_Y_1038);
l_Y_1038 = r_LOOKUP(((*(R17 *)rt_nil_check(p_A))).f_NAME);
if ((l_Y_1038 == NULL))
{
{ rt_int rv1039 = 0;
return rv1039; }
}
{ rt_int rv1040 = ((((*(R12 *)rt_nil_check(l_Y_1038))).f_KIND == g_Y_CONST) && r_TEQS(((*(R12 *)rt_nil_check(l_Y_1038))).f_ACCESS, rt_str("ANY", 3)));
return rv1040; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R17 * p_TS) { RT_B_TICK(); 
R17 * l_D_1041; memset(&l_D_1041, 0, sizeof l_D_1041);
l_D_1041 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_CLASS_1042; memset(&l_CLASS_1042, 0, sizeof l_CLASS_1042);
l_CLASS_1042 = NULL;
R21 * l_TARGS_1043; memset(&l_TARGS_1043, 0, sizeof l_TARGS_1043);
l_TARGS_1043 = NULL;
R25 * l_VARGS_1044; memset(&l_VARGS_1044, 0, sizeof l_VARGS_1044);
l_VARGS_1044 = NULL;
R25 * l_VTAIL_1045; memset(&l_VTAIL_1045, 0, sizeof l_VTAIL_1045);
l_VTAIL_1045 = NULL;
R17 * l_A_1046; memset(&l_A_1046, 0, sizeof l_A_1046);
l_A_1046 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R17 * l_F_1047; memset(&l_F_1047, 0, sizeof l_F_1047);
l_F_1047 = ((*(R17 *)rt_nil_check(l_D_1041))).f_A;
for (;;) {
if ((l_F_1047 == NULL)) goto L_end1048;
{
{
R17 * l_N_1049; memset(&l_N_1049, 0, sizeof l_N_1049);
l_N_1049 = ((*(R17 *)rt_nil_check(l_F_1047))).f_A;
for (;;) {
if ((l_N_1049 == NULL)) goto L_end1050;
{
if ((l_A_1046 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R17 *)rt_nil_check(l_F_1047))).f_B == NULL))
{
{
R21 * l_B_1051; memset(&l_B_1051, 0, sizeof l_B_1051);
l_B_1051 = ((R21 *)rt_b_new(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_B_1051)), ({ R21 rc1052; memset(&rc1052, 0, sizeof rc1052);  S_R9(&rc1052.f_NAME, ((*(R17 *)rt_nil_check(l_N_1049))).f_NAME, 0); rc1052.f_T = r_ARG_TYPE(l_A_1046); S_R9(&rc1052.f_C, r_NO_TEXT(), 0); rc1052.f_HASMV = 0; rc1052.f_MV = ((rt_int)0LL); rc1052.f_R = NULL; rc1052.f_NEXT = l_TARGS_1043; rc1052; }), 0);
l_TARGS_1043 = l_B_1051;
}
}
else
{
{
R25 * l_V_1053; memset(&l_V_1053, 0, sizeof l_V_1053);
l_V_1053 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_V_1053)), ({ R25 rc1054; memset(&rc1054, 0, sizeof rc1054);  S_R9(&rc1054.f_LO, r_NO_TEXT(), 0); S_R9(&rc1054.f_HI, r_NO_TEXT(), 0); S_R23(&rc1054.f_MLO, r_NO_MVAL(), 0); S_R23(&rc1054.f_MHI, r_NO_MVAL(), 0); rc1054.f_ANYARG = 0; rc1054.f_NEXT = NULL; rc1054; }), 0);
if (((((*(R17 *)rt_nil_check(l_A_1046))).f_KIND == g_N_ANY) || r_IS_ANY_TAG(l_A_1046)))
{
if ((!(((*(R17 *)rt_nil_check(l_F_1047))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_1046))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R25 *)rt_nil_check(l_V_1053))).f_ANYARG = 1;
}
else if ((((*(R17 *)rt_nil_check(l_A_1046))).f_KIND == g_N_DONTCARE))
{
((*(R25 *)rt_nil_check(l_V_1053))).f_ANYARG = 1;
S_R9(&((*(R25 *)rt_nil_check(l_V_1053))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R17 *)rt_nil_check(l_A_1046))).f_KIND == g_TS_GEN))
{
((*(R25 *)rt_nil_check(l_V_1053))).f_ANYARG = 1;
S_R9(&((*(R25 *)rt_nil_check(l_V_1053))).f_HI, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R17 *)rt_nil_check(l_A_1046))).f_NAME, (((*(R17 *)rt_nil_check(l_A_1046))).f_NAME).f_LEN))), 0);
}
else
{
{
R22 * l_FT_1055; memset(&l_FT_1055, 0, sizeof l_FT_1055);
l_FT_1055 = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_1047))).f_B);
S_R9(&((*(R25 *)rt_nil_check(l_V_1053))).f_LO, r_CONVERT(r_EXPR(l_A_1046, l_FT_1055), l_FT_1055, ((*(R17 *)rt_nil_check(l_A_1046))).f_LINE, r_NO_TEXT()), 0);
S_R23(&((*(R25 *)rt_nil_check(l_V_1053))).f_MLO, r_ENUM_MANIFEST(l_A_1046, l_FT_1055), 0);
if ((((((*(R25 *)rt_nil_check(l_V_1053))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_FT_1055))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_FT_1055))).f_MHI).f_OK))
{
if ((((((*(R25 *)rt_nil_check(l_V_1053))).f_MLO).f_V < (((*(R22 *)rt_nil_check(l_FT_1055))).f_MLO).f_V) || ((((*(R25 *)rt_nil_check(l_V_1053))).f_MLO).f_V > (((*(R22 *)rt_nil_check(l_FT_1055))).f_MHI).f_V)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_1046))).f_LINE, rt_str("the argument is outside the range of the parameter (3.9.1)", 58));
}
}
if (((((*(R17 *)rt_nil_check(l_F_1047))).f_IV == ((rt_int)1LL)) && (!(((*(R25 *)rt_nil_check(l_V_1053))).f_MLO).f_OK)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_1046))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_1045 == NULL))
{
l_VARGS_1044 = l_V_1053;
}
else
{
((*(R25 *)rt_nil_check(l_VTAIL_1045))).f_NEXT = l_V_1053;
}
l_VTAIL_1045 = l_V_1053;
}
}
l_A_1046 = ((*(R17 *)rt_nil_check(l_A_1046))).f_NEXT;
l_N_1049 = ((*(R17 *)rt_nil_check(l_N_1049))).f_NEXT;
}
RT_B_TICK();
} L_end1050: ;
}
l_F_1047 = ((*(R17 *)rt_nil_check(l_F_1047))).f_NEXT;
}
RT_B_TICK();
} L_end1048: ;
if ((!(l_A_1046 == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
{
R12 * l_R_1056; memset(&l_R_1056, 0, sizeof l_R_1056);
l_R_1056 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_1056 == NULL)) goto L_end1057;
{
if (((((*(R12 *)rt_nil_check(l_R_1056))).f_DECL == l_D_1041) && r_SAME_BINDS(((*(R12 *)rt_nil_check(l_R_1056))).f_BINDINGS, l_TARGS_1043)))
{
l_CLASS_1042 = ((*(R12 *)rt_nil_check(l_R_1056))).f_T;
goto L_end1057;
}
l_R_1056 = ((*(R12 *)rt_nil_check(l_R_1056))).f_INSTANCES;
}
RT_B_TICK();
} L_end1057: ;
}
if ((l_CLASS_1042 == NULL))
{
{
R12 * l_R_1058; memset(&l_R_1058, 0, sizeof l_R_1058);
l_R_1058 = r_NEW_SYM(g_Y_TYPE, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R21 * l_B_1059; memset(&l_B_1059, 0, sizeof l_B_1059);
l_B_1059 = l_TARGS_1043;
R21 * l_SAVED_1060; memset(&l_SAVED_1060, 0, sizeof l_SAVED_1060);
l_SAVED_1060 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
rt_int l_ENTERED_1061; memset(&l_ENTERED_1061, 0, sizeof l_ENTERED_1061);
((*(R12 *)rt_nil_check(l_R_1058))).f_DECL = l_D_1041;
((*(R12 *)rt_nil_check(l_R_1058))).f_BINDINGS = l_TARGS_1043;
((*(R12 *)rt_nil_check(l_R_1058))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
((*(R7 *)rt_nil_check(g_W))).f_RECS = l_R_1058;
l_ENTERED_1061 = r_ENTER_MODULE_FOR(p_Y);
r_OPEN_SCOPE();
for (;;) {
if ((l_B_1059 == NULL)) goto L_end1062;
{
{
R12 * l_TY_1063; memset(&l_TY_1063, 0, sizeof l_TY_1063);
l_TY_1063 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_B_1059))).f_NAME);
((*(R12 *)rt_nil_check(l_TY_1063))).f_T = ((*(R21 *)rt_nil_check(l_B_1059))).f_T;
r_DEFINE(l_TY_1063, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_1059 = ((*(R21 *)rt_nil_check(l_B_1059))).f_NEXT;
}
RT_B_TICK();
} L_end1062: ;
l_F_1047 = ((*(R17 *)rt_nil_check(l_D_1041))).f_A;
for (;;) {
if ((l_F_1047 == NULL)) goto L_end1064;
{
if ((!(((*(R17 *)rt_nil_check(l_F_1047))).f_B == NULL)))
{
{
R17 * l_N_1065; memset(&l_N_1065, 0, sizeof l_N_1065);
l_N_1065 = ((*(R17 *)rt_nil_check(l_F_1047))).f_A;
for (;;) {
if ((l_N_1065 == NULL)) goto L_end1066;
{
{
R12 * l_P_1067; memset(&l_P_1067, 0, sizeof l_P_1067);
l_P_1067 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(l_N_1065))).f_NAME);
((*(R12 *)rt_nil_check(l_P_1067))).f_T = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_1047))).f_B);
S_R9(&((*(R12 *)rt_nil_check(l_P_1067))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), r_CID(((*(R17 *)rt_nil_check(l_N_1065))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_P_1067))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_P_1067))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_1067, ((*(R17 *)rt_nil_check(l_F_1047))).f_LINE);
}
l_N_1065 = ((*(R17 *)rt_nil_check(l_N_1065))).f_NEXT;
}
RT_B_TICK();
} L_end1066: ;
}
}
l_F_1047 = ((*(R17 *)rt_nil_check(l_F_1047))).f_NEXT;
}
RT_B_TICK();
} L_end1064: ;
if ((l_TARGS_1043 == NULL))
{
l_CLASS_1042 = r_RESOLVE_RECORD(((*(R17 *)rt_nil_check(l_D_1041))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R17 *)rt_nil_check(l_D_1041))).f_A);
}
else
{
l_CLASS_1042 = r_RESOLVE_RECORD(((*(R17 *)rt_nil_check(l_D_1041))).f_B, r_NO_TEXT(), p_Y, ((*(R17 *)rt_nil_check(l_D_1041))).f_A);
}
S_R9(&((*(R22 *)rt_nil_check(l_CLASS_1042))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R12 *)rt_nil_check(l_R_1058))).f_T = l_CLASS_1042;
r_CLOSE_SCOPE();
if (l_ENTERED_1061)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1060;
}
}
{
R22 * l_T_1068; memset(&l_T_1068, 0, sizeof l_T_1068);
l_T_1068 = r_COPY_TYP(l_CLASS_1042);
((*(R22 *)rt_nil_check(l_T_1068))).f_ARGS = l_VARGS_1044;
{ R22 * rv1069 = l_T_1068;
return rv1069; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_1070; memset(&l_P_1070, 0, sizeof l_P_1070);
l_P_1070 = p_A;
R21 * l_Q_1071; memset(&l_Q_1071, 0, sizeof l_Q_1071);
l_Q_1071 = p_B;
for (;;) {
if (((l_P_1070 == NULL) || (l_Q_1071 == NULL))) goto L_end1072;
{
if ((((!r_SAME_TYPE(((*(R21 *)rt_nil_check(l_P_1070))).f_T, ((*(R21 *)rt_nil_check(l_Q_1071))).f_T)) || (!r_SAME_LENGTH(((*(R21 *)rt_nil_check(l_P_1070))).f_T, ((*(R21 *)rt_nil_check(l_Q_1071))).f_T))) || (!r_SAME_REPS(((*(R21 *)rt_nil_check(l_P_1070))).f_T, ((*(R21 *)rt_nil_check(l_Q_1071))).f_T))))
{
{ rt_int rv1073 = 0;
return rv1073; }
}
l_P_1070 = ((*(R21 *)rt_nil_check(l_P_1070))).f_NEXT;
l_Q_1071 = ((*(R21 *)rt_nil_check(l_Q_1071))).f_NEXT;
}
RT_B_TICK();
} L_end1072: ;
{ rt_int rv1074 = ((l_P_1070 == NULL) && (l_Q_1071 == NULL));
return rv1074; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R22 * p_T) { RT_B_TICK(); 
R25 * l_A_1075; memset(&l_A_1075, 0, sizeof l_A_1075);
l_A_1075 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_1075 == NULL)) goto L_end1076;
{
if (((*(R25 *)rt_nil_check(l_A_1075))).f_ANYARG)
{
{ rt_int rv1077 = 1;
return rv1077; }
}
l_A_1075 = ((*(R25 *)rt_nil_check(l_A_1075))).f_NEXT;
}
RT_B_TICK();
} L_end1076: ;
{ rt_int rv1078 = 0;
return rv1078; }
rt_raise(RT_X_INIT);
}
static R9 r_VARIANT_COND(R24 * p_F, R22 * p_T, R9 p_SELF) { RT_B_TICK(); 
R17 * l_L_1079; memset(&l_L_1079, 0, sizeof l_L_1079);
l_L_1079 = ((*(R24 *)rt_nil_check(p_F))).f_LABELS;
R9 l_C_1080; memset(&l_C_1080, 0, sizeof l_C_1080);
S_R9(&l_C_1080, r_MK(rt_str("0", 1)), 0);
R24 * l_TF_1081; memset(&l_TF_1081, 0, sizeof l_TF_1081);
l_TF_1081 = r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_1079 == NULL)) goto L_end1082;
{
if ((((*(R17 *)rt_nil_check(l_L_1079))).f_KIND == g_N_RANGE))
{
S_R9(&l_C_1080, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_1080, p_SELF, ((*(R24 *)rt_nil_check(l_TF_1081))).f_CNAME), 0);
S_R9(&l_C_1080, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_1080, (r_EXPR(((*(R17 *)rt_nil_check(l_L_1079))).f_A, ((*(R24 *)rt_nil_check(l_TF_1081))).f_T)).f_C, p_SELF, ((*(R24 *)rt_nil_check(l_TF_1081))).f_CNAME), 0);
S_R9(&l_C_1080, r_FMT2(rt_str("@@)", 3), l_C_1080, (r_EXPR(((*(R17 *)rt_nil_check(l_L_1079))).f_B, ((*(R24 *)rt_nil_check(l_TF_1081))).f_T)).f_C), 0);
}
else
{
S_R9(&l_C_1080, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_1080, p_SELF, ((*(R24 *)rt_nil_check(l_TF_1081))).f_CNAME, (r_EXPR(l_L_1079, ((*(R24 *)rt_nil_check(l_TF_1081))).f_T)).f_C), 0);
}
l_L_1079 = ((*(R17 *)rt_nil_check(l_L_1079))).f_NEXT;
}
RT_B_TICK();
} L_end1082: ;
{ R9 rv1083 = r_FMT1(rt_str("(@)", 3), l_C_1080);
return rv1083; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R22 * p_T) { RT_B_TICK(); 
R9 l_C_1084; memset(&l_C_1084, 0, sizeof l_C_1084);
S_R9(&l_C_1084, ((*(R22 *)rt_nil_check(p_T))).f_CNAME, 0);
R24 * l_F_1085; memset(&l_F_1085, 0, sizeof l_F_1085);
l_F_1085 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_BODY_1086; memset(&l_BODY_1086, 0, sizeof l_BODY_1086);
S_R9(&l_BODY_1086, r_MK(rt_str("", 0)), 0);
R9 l_ASSIGN_1087; memset(&l_ASSIGN_1087, 0, sizeof l_ASSIGN_1087);
S_R9(&l_ASSIGN_1087, r_MK(rt_str("", 0)), 0);
R9 l_COPY_1088; memset(&l_COPY_1088, 0, sizeof l_COPY_1088);
S_R9(&l_COPY_1088, r_MK(rt_str("", 0)), 0);
R9 l_EQ_1089; memset(&l_EQ_1089, 0, sizeof l_EQ_1089);
S_R9(&l_EQ_1089, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_1085 == NULL)) goto L_end1090;
{
S_R9(&l_BODY_1086, r_FMT3(rt_str("@ @ @;", 6), l_BODY_1086, r_CTYPE(((*(R24 *)rt_nil_check(l_F_1085))).f_T), ((*(R24 *)rt_nil_check(l_F_1085))).f_CNAME), 0);
S_R9(&l_COPY_1088, r_FMT3(rt_str("@ d.@ = @;", 10), l_COPY_1088, ((*(R24 *)rt_nil_check(l_F_1085))).f_CNAME, r_COPY_OF(((*(R24 *)rt_nil_check(l_F_1085))).f_T, r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_1085))).f_CNAME))), 0);
if ((((*(R24 *)rt_nil_check(l_F_1085))).f_KIND == ((rt_int)1LL)))
{
S_R9(&l_ASSIGN_1087, r_FMT2(rt_str("@ if (!(@)) rt_raise(RT_B_TYPE_MISMATCH);", 41), l_ASSIGN_1087, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1085))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_1085))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_1085))).f_CNAME))), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1085))).f_KIND == ((rt_int)2LL)))
{
S_R9(&l_ASSIGN_1087, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_1087, ((*(R24 *)rt_nil_check(l_F_1085))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_1085))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_1085))).f_CNAME), 0);
}
else
{
S_R9(&l_ASSIGN_1087, r_FMT2(rt_str("@ @", 3), l_ASSIGN_1087, r_ASSIGN_CODE(((*(R24 *)rt_nil_check(l_F_1085))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_1085))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_1085))).f_CNAME))), 0);
}
if (((((*(R24 *)rt_nil_check(l_F_1085))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R9(&l_EQ_1089, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1089, r_VARIANT_COND(l_F_1085, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1085))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_1085))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_1085))).f_CNAME))), 0);
}
else
{
S_R9(&l_EQ_1089, r_FMT2(rt_str("@ && @", 6), l_EQ_1089, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1085))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_1085))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_1085))).f_CNAME))), 0);
}
l_F_1085 = ((*(R24 *)rt_nil_check(l_F_1085))).f_NEXT;
}
RT_B_TICK();
} L_end1090: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_1084, l_BODY_1086));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_1084, l_C_1084, l_C_1084));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_1084, l_C_1084, l_C_1084));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_1084, l_C_1084, l_C_1084, l_ASSIGN_1087));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_1084, l_C_1084, l_C_1084, l_EQ_1089));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_1084, l_C_1084, l_C_1084));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s;", 28), l_C_1084, l_C_1084, l_C_1084, l_C_1084));
r_EMIT(g_O_HELPERS, r_FMT1(rt_str("@ return d; }", 13), l_COPY_1088));
}
static R9 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R9 l_ET_C_1091; memset(&l_ET_C_1091, 0, sizeof l_ET_C_1091);
S_R9(&l_ET_C_1091, r_CTYPE(p_ELEM), 0);
R9 l_KEY_1092; memset(&l_KEY_1092, 0, sizeof l_KEY_1092);
S_R9(&l_KEY_1092, r_FMT3(rt_str("@/@/@", 5), l_ET_C_1091, r_NUM(p_DIMS), r_NUM(((*(R22 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R12 * l_Y_1093; memset(&l_Y_1093, 0, sizeof l_Y_1093);
l_Y_1093 = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_1093 == NULL)) goto L_end1094;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_1093))).f_NAME, l_KEY_1092) && r_SAME_TYPE(((*(R12 *)rt_nil_check(l_Y_1093))).f_T, p_ELEM)))
{
{ R9 rv1095 = ((*(R12 *)rt_nil_check(l_Y_1093))).f_ACCESS;
return rv1095; }
}
l_Y_1093 = ((*(R12 *)rt_nil_check(l_Y_1093))).f_INSTANCES;
}
RT_B_TICK();
} L_end1094: ;
l_Y_1093 = r_NEW_SYM(g_Y_TYPE, l_KEY_1092);
((*(R12 *)rt_nil_check(l_Y_1093))).f_T = p_ELEM;
S_R9(&((*(R12 *)rt_nil_check(l_Y_1093))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R12 *)rt_nil_check(l_Y_1093))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R7 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_1093;
{
R9 l_C_1096; memset(&l_C_1096, 0, sizeof l_C_1096);
S_R9(&l_C_1096, ((*(R12 *)rt_nil_check(l_Y_1093))).f_ACCESS, 0);
R9 l_D_1097; memset(&l_D_1097, 0, sizeof l_D_1097);
S_R9(&l_D_1097, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_1096, l_C_1096));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_1096, l_D_1097, l_D_1097, l_ET_C_1091));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_1096, l_C_1096, l_C_1096));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_1096, l_C_1096, l_C_1096));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_1096, l_C_1096, l_C_1096, l_D_1097));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_1097, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_1096, l_C_1096, l_C_1096, l_D_1097));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_1097, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_1096, l_C_1096, l_C_1096));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s; ", 29), l_C_1096, l_C_1096, l_C_1096, l_C_1096));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("rt_int n = rt_b_extent(@, s.lo, s.hi); d.p = rt_alloc((n > 0 \? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = @; return d; }", 140), l_D_1097, r_COPY_OF(p_ELEM, r_MK(rt_str("s.p[i]", 6)))));
}
{ R9 rv1098 = ((*(R12 *)rt_nil_check(l_Y_1093))).f_ACCESS;
return rv1098; }
rt_raise(RT_X_INIT);
}
static R9 r_INIT_CODE(R22 * p_T, R9 p_LV) { RT_B_TICK(); 
rt_int l_K_1099; memset(&l_K_1099, 0, sizeof l_K_1099);
l_K_1099 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1099 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1100 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv1100; }
}
{ R9 rv1101 = r_FMT2(rt_str("@ = rt_b_str_new(@, 0);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv1101; }
}
else if ((l_K_1099 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1102 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv1102; }
}
{ R9 rv1103 = r_FMT2(rt_str("@ = rt_b_str_new(@, 1);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv1103; }
}
else if ((l_K_1099 == g_T_SEM))
{
{ R9 rv1104 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv1104; }
}
else if ((l_K_1099 == g_T_ABS))
{
{ R9 rv1105 = r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv1105; }
}
else if ((l_K_1099 == g_T_ARR))
{
{
R25 * l_B_1106; memset(&l_B_1106, 0, sizeof l_B_1106);
l_B_1106 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_1107; memset(&l_I_1107, 0, sizeof l_I_1107);
l_I_1107 = ((rt_int)0LL);
R9 l_R_1108; memset(&l_R_1108, 0, sizeof l_R_1108);
S_R9(&l_R_1108, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_1106 == NULL)) goto L_end1109;
{
S_R9(&l_R_1108, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_1108, p_LV, r_NUM(l_I_1107), ((*(R25 *)rt_nil_check(l_B_1106))).f_LO), 0);
S_R9(&l_R_1108, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_1108, p_LV, r_NUM(l_I_1107), ((*(R25 *)rt_nil_check(l_B_1106))).f_HI), 0);
l_I_1107 = rt_add(l_I_1107, ((rt_int)1LL));
l_B_1106 = ((*(R25 *)rt_nil_check(l_B_1106))).f_NEXT;
}
RT_B_TICK();
} L_end1109: ;
S_R9(&l_R_1108, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_1108, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R9(&l_R_1108, r_FMT4(rt_str("@ @.p = rt_b_array_alloc(n, sizeof *@.p);", 41), l_R_1108, p_LV, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_ELEM))
{
{
R9 l_IV_1110; memset(&l_IV_1110, 0, sizeof l_IV_1110);
S_R9(&l_IV_1110, r_NEW_NAME(rt_str("i", 1)), 0);
S_R9(&l_R_1108, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_1108, l_IV_1110, l_IV_1110, l_IV_1110), 0);
S_R9(&l_R_1108, r_FMT2(rt_str("@ @ }", 5), l_R_1108, r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_1110))), 0);
}
}
{ R9 rv1111 = r_CATS(l_R_1108, rt_str(" }", 2));
return rv1111; }
}
}
else if ((l_K_1099 == g_T_REC))
{
{
R24 * l_F_1112; memset(&l_F_1112, 0, sizeof l_F_1112);
l_F_1112 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1113; memset(&l_A_1113, 0, sizeof l_A_1113);
l_A_1113 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R9 l_R_1114; memset(&l_R_1114, 0, sizeof l_R_1114);
S_R9(&l_R_1114, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_1112 == NULL)) goto L_end1115;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1112))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_1113 == NULL)))
{
if ((!((*(R25 *)rt_nil_check(l_A_1113))).f_ANYARG))
{
S_R9(&l_R_1114, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_1114, p_LV, ((*(R24 *)rt_nil_check(l_F_1112))).f_CNAME, ((*(R25 *)rt_nil_check(l_A_1113))).f_LO), 0);
}
else if (((((*(R24 *)rt_nil_check(l_F_1112))).f_KIND == ((rt_int)2LL)) && ((((*(R25 *)rt_nil_check(l_A_1113))).f_HI).f_LEN == ((rt_int)0LL))))
{
S_R9(&l_R_1114, r_FMT3(rt_str("@ @.@ = INT64_MIN;", 18), l_R_1114, p_LV, ((*(R24 *)rt_nil_check(l_F_1112))).f_CNAME), 0);
}
l_A_1113 = ((*(R25 *)rt_nil_check(l_A_1113))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_1112))).f_T))
{
S_R9(&l_R_1114, r_FMT2(rt_str("@ @", 3), l_R_1114, r_SUBST_SELF(r_INIT_CODE(((*(R24 *)rt_nil_check(l_F_1112))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R24 *)rt_nil_check(l_F_1112))).f_CNAME)), p_LV)), 0);
}
l_F_1112 = ((*(R24 *)rt_nil_check(l_F_1112))).f_NEXT;
}
RT_B_TICK();
} L_end1115: ;
{ R9 rv1116 = l_R_1114;
return rv1116; }
}
}
{ R9 rv1117 = r_NO_TEXT();
return rv1117; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1118; memset(&l_K_1118, 0, sizeof l_K_1118);
l_K_1118 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_1118 == g_T_STR) || (l_K_1118 == g_T_BITS)) || (l_K_1118 == g_T_ARR)) || (l_K_1118 == g_T_SEM)))
{
{ rt_int rv1119 = 1;
return rv1119; }
}
else if ((l_K_1118 == g_T_ABS))
{
{ rt_int rv1120 = r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1120; }
}
else if ((l_K_1118 == g_T_REC))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv1121 = 1;
return rv1121; }
}
{
R24 * l_F_1122; memset(&l_F_1122, 0, sizeof l_F_1122);
l_F_1122 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1122 == NULL)) goto L_end1123;
{
if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_1122))).f_T))
{
{ rt_int rv1124 = 1;
return rv1124; }
}
l_F_1122 = ((*(R24 *)rt_nil_check(l_F_1122))).f_NEXT;
}
RT_B_TICK();
} L_end1123: ;
}
}
{ rt_int rv1125 = 0;
return rv1125; }
rt_raise(RT_X_INIT);
}
static R9 r_COPY_OF(R22 * p_T, R9 p_V) { RT_B_TICK(); 
rt_int l_K_1126; memset(&l_K_1126, 0, sizeof l_K_1126);
l_K_1126 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1126 == g_T_STR) || (l_K_1126 == g_T_BITS)))
{
{ R9 rv1127 = r_FMT1(rt_str("rt_str_copy(@)", 14), p_V);
return rv1127; }
}
else if ((l_K_1126 == g_T_ABS))
{
{ R9 rv1128 = r_COPY_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_V);
return rv1128; }
}
else if (((l_K_1126 == g_T_ARR) || (l_K_1126 == g_T_REC)))
{
{ R9 rv1129 = r_FMT2(rt_str("C_@(@)", 6), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_V);
return rv1129; }
}
{ R9 rv1130 = p_V;
return rv1130; }
rt_raise(RT_X_INIT);
}
static R9 r_ASSIGN_CODE(R22 * p_T, R9 p_LV, R9 p_RV) { RT_B_TICK(); 
rt_int l_K_1131; memset(&l_K_1131, 0, sizeof l_K_1131);
l_K_1131 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1131 == g_T_STR) || (l_K_1131 == g_T_BITS)))
{
{ R9 rv1132 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv1132; }
}
else if ((l_K_1131 == g_T_ABS))
{
{ R9 rv1133 = r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv1133; }
}
else if ((l_K_1131 == g_T_SEM))
{
{ R9 rv1134 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv1134; }
}
else if ((l_K_1131 == g_T_ARR))
{
{ R9 rv1135 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1135; }
}
else if ((l_K_1131 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R9 rv1136 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1136; }
}
{ R9 rv1137 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1137; }
}
{ R9 rv1138 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv1138; }
rt_raise(RT_X_INIT);
}
static R9 r_EQUAL_CODE(R22 * p_T, R9 p_A, R9 p_B) { RT_B_TICK(); 
rt_int l_K_1139; memset(&l_K_1139, 0, sizeof l_K_1139);
l_K_1139 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1139 == g_T_STR) || (l_K_1139 == g_T_BITS)))
{
{ R9 rv1140 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv1140; }
}
else if ((l_K_1139 == g_T_ABS))
{
{ R9 rv1141 = r_EQUAL_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv1141; }
}
else if (((l_K_1139 == g_T_ARR) || (l_K_1139 == g_T_REC)))
{
{ R9 rv1142 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv1142; }
}
else if ((l_K_1139 == g_T_SEM))
{
{ R9 rv1143 = r_MK(rt_str("0", 1));
return rv1143; }
}
{ R9 rv1144 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv1144; }
rt_raise(RT_X_INIT);
}
static R9 r_RANGE_CHECK(R22 * p_T, R9 p_V, R9 p_SELF) { RT_B_TICK(); 
if (((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))) || ((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS))
{
{ R9 rv1145 = p_V;
return rv1145; }
}
if ((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R9 rv1146 = p_V;
return rv1146; }
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R9 rv1147 = p_V;
return rv1147; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R9 rv1148 = r_FMT3(rt_str("rt_b_tfrange(@, @, @)", 21), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1148; }
}
{ R9 rv1149 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1149; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R9 rv1150 = r_FMT3(rt_str("rt_b_trange(@, @, @)", 20), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1150; }
}
{ R9 rv1151 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1151; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv1152 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv1152; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv1153 = 1;
return rv1153; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv1154 = r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv1154; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv1155 = r_SAME_CLASS(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1155; }
}
if ((!(((*(R22 *)rt_nil_check(p_A))).f_KIND == ((*(R22 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv1156 = 0;
return rv1156; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv1157 = (((*(R22 *)rt_nil_check(p_A))).f_BASE == ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1157; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1158 = ((((*(R22 *)rt_nil_check(p_A))).f_DIMS == ((*(R22 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM));
return rv1158; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv1159 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv1159; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1160 = ((r_ORIGINAL(((*(R22 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R22 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE));
return rv1160; }
}
{ rt_int rv1161 = 1;
return rv1161; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv1162 = 1;
return rv1162; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv1163 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv1163; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv1164 = r_SAME_TYPE(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1164; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv1165 = 0;
return rv1165; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv1166 = (((*(R22 *)rt_nil_check(p_A))).f_SCALE == ((*(R22 *)rt_nil_check(p_B))).f_SCALE);
return rv1166; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1167 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM);
return rv1167; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv1168 = r_SAME_ARGS(((*(R22 *)rt_nil_check(p_A))).f_ARGS, ((*(R22 *)rt_nil_check(p_B))).f_ARGS);
return rv1168; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1169 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1169; }
}
{ rt_int rv1170 = 1;
return rv1170; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R25 * p_B) { RT_B_TICK(); 
if (((((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1171 = 0;
return rv1171; }
}
{ rt_int rv1172 = rt_b_eq(rt_b_slice(r_STR(((*(R25 *)rt_nil_check(p_B))).f_HI, (((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv1172; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R25 * p_A, R25 * p_B) { RT_B_TICK(); 
R25 * l_P_1173; memset(&l_P_1173, 0, sizeof l_P_1173);
l_P_1173 = p_A;
R25 * l_Q_1174; memset(&l_Q_1174, 0, sizeof l_Q_1174);
l_Q_1174 = p_B;
for (;;) {
if (((l_P_1173 == NULL) || (l_Q_1174 == NULL))) goto L_end1175;
{
if ((r_IS_GEN_ARG(l_P_1173) || r_IS_GEN_ARG(l_Q_1174)))
{
}
else if ((!(((*(R25 *)rt_nil_check(l_P_1173))).f_ANYARG == ((*(R25 *)rt_nil_check(l_Q_1174))).f_ANYARG)))
{
{ rt_int rv1176 = 0;
return rv1176; }
}
if (((((*(R25 *)rt_nil_check(l_P_1173))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_1174))).f_MLO).f_OK))
{
if ((!((((*(R25 *)rt_nil_check(l_P_1173))).f_MLO).f_V == (((*(R25 *)rt_nil_check(l_Q_1174))).f_MLO).f_V)))
{
{ rt_int rv1177 = 0;
return rv1177; }
}
}
l_P_1173 = ((*(R25 *)rt_nil_check(l_P_1173))).f_NEXT;
l_Q_1174 = ((*(R25 *)rt_nil_check(l_Q_1174))).f_NEXT;
}
RT_B_TICK();
} L_end1175: ;
{ rt_int rv1178 = ((l_P_1173 == NULL) && (l_Q_1174 == NULL));
return rv1178; }
rt_raise(RT_X_INIT);
}
static R9 r_FRAME_OF(rt_int p_LEVEL) { RT_B_TICK(); 
R19 * l_CS_1179; memset(&l_CS_1179, 0, sizeof l_CS_1179);
l_CS_1179 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R9 l_T_1180; memset(&l_T_1180, 0, sizeof l_T_1180);
rt_int l_LEV_1181; memset(&l_LEV_1181, 0, sizeof l_LEV_1181);
if ((((*(R19 *)rt_nil_check(l_CS_1179))).f_LEVEL == p_LEVEL))
{
{ R9 rv1182 = r_MK(rt_str("F", 1));
return rv1182; }
}
if (((*(R19 *)rt_nil_check(l_CS_1179))).f_FRAMED)
{
S_R9(&l_T_1180, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R9(&l_T_1180, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_1181 = rt_sub(((*(R19 *)rt_nil_check(l_CS_1179))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_1181 <= p_LEVEL)) goto L_end1183;
{
S_R9(&l_T_1180, r_CATS(l_T_1180, rt_str("->up", 4)), 0);
l_LEV_1181 = rt_sub(l_LEV_1181, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1183: ;
{ R9 rv1184 = l_T_1180;
return rv1184; }
rt_raise(RT_X_INIT);
}
static R9 r_OBJ_ACCESS(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R12 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R9 rv1185 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1185; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1186 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1186; }
}
if (((*(R12 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R9 rv1187 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1187; }
}
{ R9 rv1188 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1188; }
rt_raise(RT_X_INIT);
}
static R9 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE) { RT_B_TICK(); 
R19 * l_CS_1189; memset(&l_CS_1189, 0, sizeof l_CS_1189);
l_CS_1189 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R22 * l_T_1190; memset(&l_T_1190, 0, sizeof l_T_1190);
l_T_1190 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
R9 l_CN_1191; memset(&l_CN_1191, 0, sizeof l_CN_1191);
if ((((*(R19 *)rt_nil_check(l_CS_1189))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R7 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R7 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R9(&l_CN_1191, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
}
else
{
S_R9(&l_CN_1191, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_1190), l_CN_1191));
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1191, 0);
{ R9 rv1192 = l_CN_1191;
return rv1192; }
}
S_R9(&l_CN_1191, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_FIELD, l_CN_1191, 0);
if (((*(R19 *)rt_nil_check(l_CS_1189))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_1190), l_CN_1191), &((*(R19 *)rt_nil_check(l_CS_1189))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_1191), 0);
{ R9 rv1193 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1193; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_1190), l_CN_1191, l_CN_1191, l_CN_1191));
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1191, 0);
{ R9 rv1194 = l_CN_1191;
return rv1194; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R17 * p_D) { RT_B_TICK(); 
R22 * l_T_1195; memset(&l_T_1195, 0, sizeof l_T_1195);
l_T_1195 = r_RESOLVE(((*(R17 *)rt_nil_check(p_D))).f_B);
R17 * l_N_1196; memset(&l_N_1196, 0, sizeof l_N_1196);
l_N_1196 = ((*(R17 *)rt_nil_check(p_D))).f_A;
R26 l_V_1197; memset(&l_V_1197, 0, sizeof l_V_1197);
rt_int l_HAVE_V_1198; memset(&l_HAVE_V_1198, 0, sizeof l_HAVE_V_1198);
l_HAVE_V_1198 = 0;
if (((((*(R22 *)rt_nil_check(l_T_1195))).f_KIND == g_T_TYPE) || (((*(R22 *)rt_nil_check(l_T_1195))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_1196 == NULL)) goto L_end1199;
{
{
R12 * l_Y_1200; memset(&l_Y_1200, 0, sizeof l_Y_1200);
l_Y_1200 = r_NEW_SYM(g_Y_VAR, ((*(R17 *)rt_nil_check(l_N_1196))).f_NAME);
R9 l_CN_1201; memset(&l_CN_1201, 0, sizeof l_CN_1201);
if ((((*(R17 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R12 *)rt_nil_check(l_Y_1200))).f_KIND = g_Y_CONST;
((*(R12 *)rt_nil_check(l_Y_1200))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_1195) && (((*(R22 *)rt_nil_check(l_T_1195))).f_SCALE == ((rt_int)0LL))))
{
{
R23 l_M_1202; memset(&l_M_1202, 0, sizeof l_M_1202);
S_R23(&l_M_1202, r_MANIFEST(((*(R17 *)rt_nil_check(p_D))).f_C), 0);
((*(R12 *)rt_nil_check(l_Y_1200))).f_HASMV = (l_M_1202).f_OK;
((*(R12 *)rt_nil_check(l_Y_1200))).f_MV = (l_M_1202).f_V;
}
}
}
((*(R12 *)rt_nil_check(l_Y_1200))).f_T = l_T_1195;
S_R9(&l_CN_1201, r_NEW_OBJECT(l_Y_1200, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_1195))
{
r_CODE(r_INIT_CODE(l_T_1195, l_CN_1201));
}
if ((!(((*(R17 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_1198))
{
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R17 *)rt_nil_check(p_D))).f_C;
S_R26(&l_V_1197, r_EXPR(((*(R17 *)rt_nil_check(p_D))).f_C, l_T_1195), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
l_HAVE_V_1198 = 1;
}
r_CODE(r_STORE_CODE(l_T_1195, l_CN_1201, l_V_1197, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_1200, ((*(R17 *)rt_nil_check(l_N_1196))).f_LINE);
}
l_N_1196 = ((*(R17 *)rt_nil_check(l_N_1196))).f_NEXT;
}
RT_B_TICK();
} L_end1199: ;
}
static R26 r_MKET(R9 p_C, R22 * p_T) { RT_B_TICK(); 
{ R26 rv1203 = ({ R26 rc1204; memset(&rc1204, 0, sizeof rc1204);  S_R9(&rc1204.f_C, p_C, 0); rc1204.f_T = p_T; rc1204.f_LVAL = 0; S_R9(&rc1204.f_SELF, r_NO_TEXT(), 0); rc1204; });
return rv1203; }
rt_raise(RT_X_INIT);
}
static R26 r_MKLV(R9 p_C, R22 * p_T, rt_int p_LVAL, R9 p_SELF) { RT_B_TICK(); 
{ R26 rv1205 = ({ R26 rc1206; memset(&rc1206, 0, sizeof rc1206);  S_R9(&rc1206.f_C, p_C, 0); rc1206.f_T = p_T; rc1206.f_LVAL = p_LVAL; S_R9(&rc1206.f_SELF, p_SELF, 0); rc1206; });
return rv1205; }
rt_raise(RT_X_INIT);
}
static R22 * r_INT_TYPE(rt_int p_SCALE) { RT_B_TICK(); 
R22 * l_T_1207; memset(&l_T_1207, 0, sizeof l_T_1207);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R22 * rv1208 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv1208; }
}
l_T_1207 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_1207))).f_SCALE = p_SCALE;
{ R22 * rv1209 = l_T_1207;
return rv1209; }
rt_raise(RT_X_INIT);
}
static R22 * r_STR_TYPE(R9 p_LEN, R23 p_M) { RT_B_TICK(); 
R22 * l_T_1210; memset(&l_T_1210, 0, sizeof l_T_1210);
l_T_1210 = r_NEW_TYP(g_T_STR);
S_R9(&((*(R22 *)rt_nil_check(l_T_1210))).f_LEN_C, p_LEN, 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1210))).f_MLEN, p_M, 0);
{ R22 * rv1211 = l_T_1210;
return rv1211; }
rt_raise(RT_X_INIT);
}
static R9 r_CSTRING(R9 p_T) { RT_B_TICK(); 
rstr l_S_1212; memset(&l_S_1212, 0, sizeof l_S_1212);
l_S_1212 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_1212, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_1213; memset(&l_AT_1213, 0, sizeof l_AT_1213);
l_AT_1213 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R9 l_R_1214; memset(&l_R_1214, 0, sizeof l_R_1214);
S_R9(&l_R_1214, r_MK(rt_str("\"", 1)), 0);
{ rt_int it1216_lo = ((rt_int)0LL), it1216_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it1216 = it1216_lo; it1216 <= it1216_hi; it1216++) {
{
if ((rt_b_eq(rt_b_slice(l_S_1212, it1216, it1216), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_1212, it1216, it1216), rt_str("\\", 1))))
{
S_R9(&l_R_1214, r_MK(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_S_1212, it1216, it1216))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1212, it1216, it1216), rt_str("\?", 1)))
{
S_R9(&l_R_1214, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_1217; memset(&l_C_1217, 0, sizeof l_C_1217);
l_C_1217 = r_CODE_OF(rt_b_slice(l_S_1212, it1216, it1216));
if (({ rt_int iv1218 = l_C_1217; (((rt_int)32LL) <= iv1218) && (iv1218 <= ((rt_int)126LL)); }))
{
S_R9(&l_R_1214, r_MK(rt_b_slice(l_S_1212, it1216, it1216)), 0);
}
else
{
S_R9(&l_R_1214, r_MK(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_1217, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_1217, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_1217, ((rt_int)8LL))))), 0);
}
}
}
}
RT_B_TICK();
if (it1216 == it1216_hi) break;
} } L_end1215: ;
S_R9(&l_R_1214, r_MK(rt_str("\"", 1)), 0);
{ R9 rv1219 = ({ R9 rc1220; memset(&rc1220, 0, sizeof rc1220);  rc1220.f_AT = l_AT_1213; rc1220.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_1213); rc1220.f_H = rt_neg(((rt_int)1LL)); rc1220; });
return rv1219; }
rt_raise(RT_X_INIT);
}
static R23 r_MANIFEST(R17 * p_E) { RT_B_TICK(); 
rt_int l_K_1221; memset(&l_K_1221, 0, sizeof l_K_1221);
l_K_1221 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
R23 l_NO_1222; memset(&l_NO_1222, 0, sizeof l_NO_1222);
S_R23(&l_NO_1222, ({ R23 rc1223; memset(&rc1223, 0, sizeof rc1223);  rc1223.f_OK = 0; rc1223.f_V = ((rt_int)0LL); rc1223; }), 0);
if ((l_K_1221 == g_N_INT))
{
{ R23 rv1224 = ({ R23 rc1225; memset(&rc1225, 0, sizeof rc1225);  rc1225.f_OK = 1; rc1225.f_V = ((*(R17 *)rt_nil_check(p_E))).f_IV; rc1225; });
return rv1224; }
}
else if ((l_K_1221 == g_N_PAREN))
{
{ R23 rv1226 = r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A);
return rv1226; }
}
else if ((l_K_1221 == g_N_BOOL))
{
{ R23 rv1227 = ({ R23 rc1228; memset(&rc1228, 0, sizeof rc1228);  rc1228.f_OK = 1; rc1228.f_V = ((*(R17 *)rt_nil_check(p_E))).f_IV; rc1228; });
return rv1227; }
}
else if ((l_K_1221 == g_N_UNOP))
{
{
R23 l_A_1229; memset(&l_A_1229, 0, sizeof l_A_1229);
S_R23(&l_A_1229, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
if ((!(l_A_1229).f_OK))
{
{ R23 rv1230 = l_NO_1222;
return rv1230; }
}
{ R23 rv1231 = ({ R23 rc1232; memset(&rc1232, 0, sizeof rc1232);  rc1232.f_OK = 1; rc1232.f_V = r_MANIFEST_ARITH(r_MK(rt_str("-", 1)), ((rt_int)0LL), (l_A_1229).f_V, ((*(R17 *)rt_nil_check(p_E))).f_LINE); rc1232; });
return rv1231; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R23 rv1233 = l_A_1229;
return rv1233; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R23 rv1234 = ({ R23 rc1235; memset(&rc1235, 0, sizeof rc1235);  rc1235.f_OK = (l_A_1229).f_OK; rc1235.f_V = rt_sub(((rt_int)1LL), (l_A_1229).f_V); rc1235; });
return rv1234; }
}
}
}
else if ((l_K_1221 == g_N_BINOP))
{
if ((!(((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R23 rv1236 = l_NO_1222;
return rv1236; }
}
{
R23 l_A_1237; memset(&l_A_1237, 0, sizeof l_A_1237);
S_R23(&l_A_1237, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R23 l_B_1238; memset(&l_B_1238, 0, sizeof l_B_1238);
S_R23(&l_B_1238, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
R9 l_OP_1239; memset(&l_OP_1239, 0, sizeof l_OP_1239);
S_R9(&l_OP_1239, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
if (r_TEQS(l_OP_1239, rt_str("&", 1)))
{
if (((((l_A_1237).f_OK && ((l_A_1237).f_V == ((rt_int)0LL)))) || (((l_B_1238).f_OK && ((l_B_1238).f_V == ((rt_int)0LL))))))
{
{ R23 rv1240 = ({ R23 rc1241; memset(&rc1241, 0, sizeof rc1241);  rc1241.f_OK = 1; rc1241.f_V = ((rt_int)0LL); rc1241; });
return rv1240; }
}
if (((l_A_1237).f_OK && (l_B_1238).f_OK))
{
{ R23 rv1242 = ({ R23 rc1243; memset(&rc1243, 0, sizeof rc1243);  rc1243.f_OK = 1; rc1243.f_V = ((rt_int)1LL); rc1243; });
return rv1242; }
}
{ R23 rv1244 = l_NO_1222;
return rv1244; }
}
else if (r_TEQS(l_OP_1239, rt_str("!", 1)))
{
if (((((l_A_1237).f_OK && ((l_A_1237).f_V == ((rt_int)1LL)))) || (((l_B_1238).f_OK && ((l_B_1238).f_V == ((rt_int)1LL))))))
{
{ R23 rv1245 = ({ R23 rc1246; memset(&rc1246, 0, sizeof rc1246);  rc1246.f_OK = 1; rc1246.f_V = ((rt_int)1LL); rc1246; });
return rv1245; }
}
if (((l_A_1237).f_OK && (l_B_1238).f_OK))
{
{ R23 rv1247 = ({ R23 rc1248; memset(&rc1248, 0, sizeof rc1248);  rc1248.f_OK = 1; rc1248.f_V = ((rt_int)0LL); rc1248; });
return rv1247; }
}
{ R23 rv1249 = l_NO_1222;
return rv1249; }
}
if ((!(((l_A_1237).f_OK && (l_B_1238).f_OK))))
{
{ R23 rv1250 = l_NO_1222;
return rv1250; }
}
if ((!((r_MANIFEST_INT(((*(R17 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R17 *)rt_nil_check(p_E))).f_B)))))
{
{ R23 rv1251 = l_NO_1222;
return rv1251; }
}
if (((r_TEQS(l_OP_1239, rt_str("+", 1)) || r_TEQS(l_OP_1239, rt_str("-", 1))) || r_TEQS(l_OP_1239, rt_str("*", 1))))
{
{ R23 rv1252 = ({ R23 rc1253; memset(&rc1253, 0, sizeof rc1253);  rc1253.f_OK = 1; rc1253.f_V = r_MANIFEST_ARITH(l_OP_1239, (l_A_1237).f_V, (l_B_1238).f_V, ((*(R17 *)rt_nil_check(p_E))).f_LINE); rc1253; });
return rv1252; }
}
else if ((r_TEQS(l_OP_1239, rt_str("//", 2)) && (!((l_B_1238).f_V == ((rt_int)0LL)))))
{
{ R23 rv1254 = ({ R23 rc1255; memset(&rc1255, 0, sizeof rc1255);  rc1255.f_OK = 1; rc1255.f_V = rt_quot((l_A_1237).f_V, (l_B_1238).f_V); rc1255; });
return rv1254; }
}
else if ((r_TEQS(l_OP_1239, rt_str("MOD", 3)) && (!((l_B_1238).f_V == ((rt_int)0LL)))))
{
{ R23 rv1256 = ({ R23 rc1257; memset(&rc1257, 0, sizeof rc1257);  rc1257.f_OK = 1; rc1257.f_V = rt_rem((l_A_1237).f_V, (l_B_1238).f_V); rc1257; });
return rv1256; }
}
else if (r_TEQS(l_OP_1239, rt_str("=", 1)))
{
{ R23 rv1258 = ({ R23 rc1259; memset(&rc1259, 0, sizeof rc1259);  rc1259.f_OK = 1; rc1259.f_V = r_BOOL_INT(((l_A_1237).f_V == (l_B_1238).f_V)); rc1259; });
return rv1258; }
}
else if (r_TEQS(l_OP_1239, rt_str("<>", 2)))
{
{ R23 rv1260 = ({ R23 rc1261; memset(&rc1261, 0, sizeof rc1261);  rc1261.f_OK = 1; rc1261.f_V = r_BOOL_INT((!((l_A_1237).f_V == (l_B_1238).f_V))); rc1261; });
return rv1260; }
}
else if (r_TEQS(l_OP_1239, rt_str("<", 1)))
{
{ R23 rv1262 = ({ R23 rc1263; memset(&rc1263, 0, sizeof rc1263);  rc1263.f_OK = 1; rc1263.f_V = r_BOOL_INT(((l_A_1237).f_V < (l_B_1238).f_V)); rc1263; });
return rv1262; }
}
else if (r_TEQS(l_OP_1239, rt_str(">", 1)))
{
{ R23 rv1264 = ({ R23 rc1265; memset(&rc1265, 0, sizeof rc1265);  rc1265.f_OK = 1; rc1265.f_V = r_BOOL_INT(((l_A_1237).f_V > (l_B_1238).f_V)); rc1265; });
return rv1264; }
}
else if (r_TEQS(l_OP_1239, rt_str("<=", 2)))
{
{ R23 rv1266 = ({ R23 rc1267; memset(&rc1267, 0, sizeof rc1267);  rc1267.f_OK = 1; rc1267.f_V = r_BOOL_INT(((l_A_1237).f_V <= (l_B_1238).f_V)); rc1267; });
return rv1266; }
}
else if (r_TEQS(l_OP_1239, rt_str(">=", 2)))
{
{ R23 rv1268 = ({ R23 rc1269; memset(&rc1269, 0, sizeof rc1269);  rc1269.f_OK = 1; rc1269.f_V = r_BOOL_INT(((l_A_1237).f_V >= (l_B_1238).f_V)); rc1269; });
return rv1268; }
}
}
}
else if ((l_K_1221 == g_N_IN))
{
{
R23 l_A_1270; memset(&l_A_1270, 0, sizeof l_A_1270);
S_R23(&l_A_1270, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R23 l_L_1271; memset(&l_L_1271, 0, sizeof l_L_1271);
S_R23(&l_L_1271, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R23 l_U_1272; memset(&l_U_1272, 0, sizeof l_U_1272);
S_R23(&l_U_1272, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_1273; memset(&l_LO_1273, 0, sizeof l_LO_1273);
rt_int l_HI_1274; memset(&l_HI_1274, 0, sizeof l_HI_1274);
if ((!(((((l_A_1270).f_OK && (l_L_1271).f_OK) && (l_U_1272).f_OK) && r_MANIFEST_INT(((*(R17 *)rt_nil_check(p_E))).f_A)))))
{
{ R23 rv1275 = l_NO_1222;
return rv1275; }
}
l_LO_1273 = (l_L_1271).f_V;
l_HI_1274 = (l_U_1272).f_V;
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_1273 = rt_add(l_LO_1273, ((rt_int)1LL));
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_1274 = rt_sub(l_HI_1274, ((rt_int)1LL));
}
{ R23 rv1276 = ({ R23 rc1277; memset(&rc1277, 0, sizeof rc1277);  rc1277.f_OK = 1; rc1277.f_V = r_BOOL_INT((((l_A_1270).f_V >= l_LO_1273) && ((l_A_1270).f_V <= l_HI_1274))); rc1277; });
return rv1276; }
}
}
else if (((l_K_1221 == g_N_NAME) || (l_K_1221 == g_TS_GEN)))
{
{
R12 * l_Y_1278; memset(&l_Y_1278, 0, sizeof l_Y_1278);
l_Y_1278 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
R21 * l_B_1279; memset(&l_B_1279, 0, sizeof l_B_1279);
l_B_1279 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_1279 == NULL)) goto L_end1280;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_1279))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME) && ((*(R21 *)rt_nil_check(l_B_1279))).f_HASMV))
{
{ R23 rv1281 = ({ R23 rc1282; memset(&rc1282, 0, sizeof rc1282);  rc1282.f_OK = 1; rc1282.f_V = ((*(R21 *)rt_nil_check(l_B_1279))).f_MV; rc1282; });
return rv1281; }
}
l_B_1279 = ((*(R21 *)rt_nil_check(l_B_1279))).f_NEXT;
}
RT_B_TICK();
} L_end1280: ;
if ((!(l_Y_1278 == NULL)))
{
if ((((((((*(R12 *)rt_nil_check(l_Y_1278))).f_KIND == g_Y_CONST) || (((*(R12 *)rt_nil_check(l_Y_1278))).f_KIND == g_Y_GEN)) || (((((*(R12 *)rt_nil_check(l_Y_1278))).f_KIND == g_Y_VAR) && ((*(R12 *)rt_nil_check(l_Y_1278))).f_INPUT)))) && ((*(R12 *)rt_nil_check(l_Y_1278))).f_HASMV))
{
{ R23 rv1283 = ({ R23 rc1284; memset(&rc1284, 0, sizeof rc1284);  rc1284.f_OK = 1; rc1284.f_V = ((*(R12 *)rt_nil_check(l_Y_1278))).f_MV; rc1284; });
return rv1283; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1278))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R17 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1285 = ({ R23 rc1286; memset(&rc1286, 0, sizeof rc1286);  rc1286.f_OK = 1; rc1286.f_V = ((*(R12 *)rt_nil_check(l_Y_1278))).f_MV; rc1286; });
return rv1285; }
}
}
}
}
}
else if ((l_K_1221 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R17 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1287 = ({ R23 rc1288; memset(&rc1288, 0, sizeof rc1288);  rc1288.f_OK = 1; rc1288.f_V = ((*(R12 *)rt_nil_check(r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc1288; });
return rv1287; }
}
}
else if ((l_K_1221 == g_N_FIELD))
{
{ R23 rv1289 = r_ATTR_MANIFEST(p_E);
return rv1289; }
}
else if ((l_K_1221 == g_N_APPLY))
{
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R23 rv1290 = ({ R23 rc1291; memset(&rc1291, 0, sizeof rc1291);  rc1291.f_OK = 1; rc1291.f_V = r_BOOL_INT((r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A)).f_OK); rc1291; });
return rv1290; }
}
}
{ R23 rv1292 = l_NO_1222;
return rv1292; }
rt_raise(RT_X_INIT);
}
static R23 r_ATTR_MANIFEST(R17 * p_E) { RT_B_TICK(); 
R17 * l_A_1293; memset(&l_A_1293, 0, sizeof l_A_1293);
l_A_1293 = ((*(R17 *)rt_nil_check(p_E))).f_A;
R9 l_NAME_1294; memset(&l_NAME_1294, 0, sizeof l_NAME_1294);
S_R9(&l_NAME_1294, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
R22 * l_T_1295; memset(&l_T_1295, 0, sizeof l_T_1295);
l_T_1295 = NULL;
if ((((*(R17 *)rt_nil_check(l_A_1293))).f_KIND == g_N_PAREN))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1293))).f_A))).f_KIND == g_N_FIELD))
{
{
R17 * l_INNER_1296; memset(&l_INNER_1296, 0, sizeof l_INNER_1296);
l_INNER_1296 = ((*(R17 *)rt_nil_check(l_A_1293))).f_A;
if (r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1296))).f_NAME, rt_str("LENGTH", 6)))
{
if (r_TEQS(l_NAME_1294, rt_str("MAX", 3)))
{
{ R23 rv1297 = r_SOME(r_MAX_LENGTH());
return rv1297; }
}
else if (r_TEQS(l_NAME_1294, rt_str("MIN", 3)))
{
{ R23 rv1298 = r_SOME(((rt_int)0LL));
return rv1298; }
}
}
else if ((r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1296))).f_NAME, rt_str("NOM_PRECISION", 13)) || r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1296))).f_NAME, rt_str("IMP_PRECISION", 13))))
{
if (r_TEQS(l_NAME_1294, rt_str("MAX", 3)))
{
{ R23 rv1299 = r_SOME(r_MAX_FLOAT_PRECISION());
return rv1299; }
}
else if (r_TEQS(l_NAME_1294, rt_str("MIN", 3)))
{
{ R23 rv1300 = r_SOME(((rt_int)1LL));
return rv1300; }
}
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1296))).f_NAME, rt_str("SCALE", 5)))
{
if (r_TEQS(l_NAME_1294, rt_str("MAX", 3)))
{
{ R23 rv1301 = r_SOME(((rt_int)1000LL));
return rv1301; }
}
else if (r_TEQS(l_NAME_1294, rt_str("MIN", 3)))
{
{ R23 rv1302 = r_SOME(rt_neg(((rt_int)1000LL)));
return rv1302; }
}
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1296))).f_NAME, rt_str("RADIX", 5)))
{
if (r_TEQS(l_NAME_1294, rt_str("MAX", 3)))
{
{ R23 rv1303 = r_SOME(((rt_int)1000LL));
return rv1303; }
}
else if (r_TEQS(l_NAME_1294, rt_str("MIN", 3)))
{
{ R23 rv1304 = r_SOME(((rt_int)2LL));
return rv1304; }
}
}
}
}
}
if (((((*(R17 *)rt_nil_check(l_A_1293))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_A_1293))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_1305; memset(&l_Y_1305, 0, sizeof l_Y_1305);
l_Y_1305 = r_LOOKUP(((*(R17 *)rt_nil_check(l_A_1293))).f_NAME);
if ((l_Y_1305 == NULL))
{
{ R23 rv1306 = r_NO_MVAL();
return rv1306; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1305))).f_KIND == g_Y_TYPE))
{
l_T_1295 = r_RESOLVE_USER_NAME(((*(R17 *)rt_nil_check(l_A_1293))).f_NAME, ((*(R17 *)rt_nil_check(l_A_1293))).f_LINE);
}
else if ((((((*(R12 *)rt_nil_check(l_Y_1305))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1305))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1305))).f_KIND == g_Y_GEN)))
{
l_T_1295 = ((*(R12 *)rt_nil_check(l_Y_1305))).f_T;
}
else
{
{ R23 rv1307 = r_NO_MVAL();
return rv1307; }
}
}
}
else if ((((*(R17 *)rt_nil_check(l_A_1293))).f_KIND == g_N_INT))
{
if ((r_TEQS(l_NAME_1294, rt_str("MIN", 3)) || r_TEQS(l_NAME_1294, rt_str("MAX", 3))))
{
{ R23 rv1308 = r_SOME(((*(R17 *)rt_nil_check(l_A_1293))).f_IV);
return rv1308; }
}
l_T_1295 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
else if ((((((((((((((*(R17 *)rt_nil_check(l_A_1293))).f_KIND == g_N_PAREN) || (((*(R17 *)rt_nil_check(l_A_1293))).f_KIND == g_N_BINOP)) || (((*(R17 *)rt_nil_check(l_A_1293))).f_KIND == g_N_UNOP)) || (((*(R17 *)rt_nil_check(l_A_1293))).f_KIND == g_N_FIELD)) || (((*(R17 *)rt_nil_check(l_A_1293))).f_KIND == g_N_INDEX)) || (((*(R17 *)rt_nil_check(l_A_1293))).f_KIND == g_N_APPLY)) || (((*(R17 *)rt_nil_check(l_A_1293))).f_KIND == g_N_REAL)) || (((*(R17 *)rt_nil_check(l_A_1293))).f_KIND == g_N_STR)) || (((*(R17 *)rt_nil_check(l_A_1293))).f_KIND == g_N_SUBSTR)) || (((*(R17 *)rt_nil_check(l_A_1293))).f_KIND == g_N_DEREF)) || (((*(R17 *)rt_nil_check(l_A_1293))).f_KIND == g_N_TYPESPEC)))
{
if ((((*(R17 *)rt_nil_check(l_A_1293))).f_KIND == g_N_PAREN))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1293))).f_A))).f_KIND == g_N_INT) && ((r_TEQS(l_NAME_1294, rt_str("MIN", 3)) || r_TEQS(l_NAME_1294, rt_str("MAX", 3))))))
{
{ R23 rv1309 = r_SOME(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1293))).f_A))).f_IV);
return rv1309; }
}
}
{
R14 l_SAVED_CODE_1310; memset(&l_SAVED_CODE_1310, 0, sizeof l_SAVED_CODE_1310);
S_R14(&l_SAVED_CODE_1310, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1311; memset(&rc1311, 0, sizeof rc1311);  rc1311.f_HEAD = NULL; rc1311.f_TAIL = NULL; rc1311; }), 0);
l_T_1295 = (r_EXPR(l_A_1293, NULL)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1310, 0);
}
}
else
{
{ R23 rv1312 = r_NO_MVAL();
return rv1312; }
}
if ((l_T_1295 == NULL))
{
{ R23 rv1313 = r_NO_MVAL();
return rv1313; }
}
{ R23 rv1314 = r_TYPE_ATTR_MANIFEST(l_T_1295, l_NAME_1294);
return rv1314; }
rt_raise(RT_X_INIT);
}
static R23 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R9 p_NAME) { RT_B_TICK(); 
R22 * l_T_1315; memset(&l_T_1315, 0, sizeof l_T_1315);
l_T_1315 = r_REAL_TYPE(p_T0);
rt_int l_K_1316; memset(&l_K_1316, 0, sizeof l_K_1316);
l_K_1316 = ((*(R22 *)rt_nil_check(l_T_1315))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R23 rv1317 = r_STATIC_SIZE(p_T0);
return rv1317; }
}
if ((l_K_1316 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R23 rv1318 = r_SOME(((*(R22 *)rt_nil_check(l_T_1315))).f_SCALE);
return rv1318; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1319 = r_SOME(((rt_int)2LL));
return rv1319; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && ((((*(R22 *)rt_nil_check(l_T_1315))).f_LO_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1320 = ((*(R22 *)rt_nil_check(l_T_1315))).f_MLO;
return rv1320; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && ((((*(R22 *)rt_nil_check(l_T_1315))).f_HI_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1321 = ((*(R22 *)rt_nil_check(l_T_1315))).f_MHI;
return rv1321; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && (((*(R22 *)rt_nil_check(l_T_1315))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1322 = r_SOME(r_STD_MIN());
return rv1322; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && (((*(R22 *)rt_nil_check(l_T_1315))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1323 = r_SOME(r_STD_MAX());
return rv1323; }
}
}
else if ((l_K_1316 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R23 rv1324 = r_SOME(((*(R22 *)rt_nil_check(l_T_1315))).f_SCALE);
return rv1324; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R23 rv1325 = r_SOME(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1315))).f_SCALE));
return rv1325; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1326 = r_SOME(((rt_int)2LL));
return rv1326; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R23 rv1327 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1315))).f_SCALE, p_NAME));
return rv1327; }
}
}
else if ((l_K_1316 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1315))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1328 = ((*(R22 *)rt_nil_check(l_T_1315))).f_MLO;
return rv1328; }
}
{ R23 rv1329 = r_SOME(((rt_int)0LL));
return rv1329; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1315))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1330 = ((*(R22 *)rt_nil_check(l_T_1315))).f_MHI;
return rv1330; }
}
{ R23 rv1331 = r_SOME(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1315))).f_BASE))).f_NLITS, ((rt_int)1LL)));
return rv1331; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1315))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ R23 rv1332 = r_SOME(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1315))).f_BASE))).f_NLITS);
return rv1332; }
}
if (((((*(R22 *)rt_nil_check(l_T_1315))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_T_1315))).f_MHI).f_OK))
{
{ R23 rv1333 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R22 *)rt_nil_check(l_T_1315))).f_MHI).f_V, (((*(R22 *)rt_nil_check(l_T_1315))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1333; }
}
}
}
else if (((l_K_1316 == g_T_STR) || (l_K_1316 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R23 rv1334 = ((*(R22 *)rt_nil_check(l_T_1315))).f_MLEN;
return rv1334; }
}
}
else if ((l_K_1316 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R23 rv1335 = r_SOME(((*(R22 *)rt_nil_check(l_T_1315))).f_DIMS);
return rv1335; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1315))).f_DIMS == ((rt_int)1LL))))
{
if (((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1315))).f_BOUNDS))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1315))).f_BOUNDS))).f_MHI).f_OK))
{
{ R23 rv1336 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1315))).f_BOUNDS))).f_MHI).f_V, (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1315))).f_BOUNDS))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1336; }
}
}
}
else if ((l_K_1316 == g_T_REC))
{
{
R24 * l_F_1337; memset(&l_F_1337, 0, sizeof l_F_1337);
l_F_1337 = ((*(R22 *)rt_nil_check(l_T_1315))).f_FIELDS;
R25 * l_B_1338; memset(&l_B_1338, 0, sizeof l_B_1338);
l_B_1338 = ((*(R22 *)rt_nil_check(l_T_1315))).f_ARGS;
for (;;) {
if (((l_F_1337 == NULL) || (l_B_1338 == NULL))) goto L_end1339;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1337))).f_KIND == ((rt_int)0LL))))
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1337))).f_NAME, p_NAME))
{
if (((*(R25 *)rt_nil_check(l_B_1338))).f_ANYARG)
{
{ R23 rv1340 = r_NO_MVAL();
return rv1340; }
}
{ R23 rv1341 = ((*(R25 *)rt_nil_check(l_B_1338))).f_MLO;
return rv1341; }
}
l_B_1338 = ((*(R25 *)rt_nil_check(l_B_1338))).f_NEXT;
}
l_F_1337 = ((*(R24 *)rt_nil_check(l_F_1337))).f_NEXT;
}
RT_B_TICK();
} L_end1339: ;
}
}
{ R23 rv1342 = r_NO_MVAL();
return rv1342; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_ARITH(R9 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); fr_r_MANIFEST_ARITH *F = rt_alloc(sizeof *F); (void)F; F->p_OP = p_OP; F->p_A = p_A; F->p_B = p_B; F->p_LINE = p_LINE;
F->l_R_1343 = ((rt_int)0LL);
{ rt_frame xf1344; if (RT_TRY(xf1344)) {
{
if (r_TEQS(F->p_OP, rt_str("+", 1)))
{
F->l_R_1343 = rt_add(F->p_A, F->p_B);
}
else if (r_TEQS(F->p_OP, rt_str("-", 1)))
{
F->l_R_1343 = rt_sub(F->p_A, F->p_B);
}
else
{
F->l_R_1343 = rt_mul(F->p_A, F->p_B);
}
}
RT_POP(xf1344); } else { RT_POP(xf1344); int xf1344x = rt_xcur;
if (0 || xf1344x == x_OVERFLOW)
{
r_FAIL(F->p_LINE, rt_str("a manifest expression overflows (3.2.4.2)", 41));
}
else rt_raise(xf1344x); } }
{ rt_int rv1345 = F->l_R_1343;
return rv1345; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R17 * p_E) { RT_B_TICK(); 
{ rt_int rv1346 = (!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv1346; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { RT_B_TICK(); 
if (p_B)
{
{ rt_int rv1347 = ((rt_int)1LL);
return rv1347; }
}
{ rt_int rv1348 = ((rt_int)0LL);
return rv1348; }
rt_raise(RT_X_INIT);
}
static R26 r_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_K_1349; memset(&l_K_1349, 0, sizeof l_K_1349);
l_K_1349 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_1349 == g_N_INT))
{
{ R26 rv1350 = r_MKET(r_STD_CHECK(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R17 *)rt_nil_check(p_E))).f_IV))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1350; }
}
else if ((l_K_1349 == g_N_REAL))
{
{ R26 rv1351 = r_REAL_LITERAL(p_E);
return rv1351; }
}
else if ((l_K_1349 == g_N_BOOL))
{
{ R26 rv1352 = r_MKET(r_NUM(((*(R17 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1352; }
}
else if ((l_K_1349 == g_N_NIL))
{
{ R26 rv1353 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1353; }
}
else if ((l_K_1349 == g_N_PAREN))
{
{
R26 l_V_1354; memset(&l_V_1354, 0, sizeof l_V_1354);
S_R26(&l_V_1354, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R9(&(l_V_1354).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1354).f_C), 0);
{ R26 rv1355 = l_V_1354;
return rv1355; }
}
}
else if ((l_K_1349 == g_N_STR))
{
{ R26 rv1356 = r_STRING_LITERAL(p_E);
return rv1356; }
}
else if ((l_K_1349 == g_N_BITS))
{
{ R26 rv1357 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R17 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1357; }
}
else if ((l_K_1349 == g_N_ENUMLIT))
{
if (r_NAMES_OBJECT(((*(R17 *)rt_nil_check(p_E))).f_NAME))
{
{ R26 rv1358 = r_NAME_EXPR(p_E, p_WANT);
return rv1358; }
}
{ R26 rv1359 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1359; }
}
else if ((l_K_1349 == g_N_RECCONS))
{
{ R26 rv1360 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1360; }
}
else if ((l_K_1349 == g_N_ARRCONS))
{
{ R26 rv1361 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1361; }
}
else if ((l_K_1349 == g_N_TYPESPEC))
{
{ R26 rv1362 = r_TYPE_SPECIFIER(p_E);
return rv1362; }
}
else if ((l_K_1349 == g_N_QUAL))
{
{
rt_int l_SAVED_1363; memset(&l_SAVED_1363, 0, sizeof l_SAVED_1363);
l_SAVED_1363 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_1364; memset(&l_SAVED_Q_1364, 0, sizeof l_SAVED_Q_1364);
l_SAVED_Q_1364 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1365; memset(&l_V_1365, 0, sizeof l_V_1365);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = p_E;
if (((((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN > ((rt_int)0LL)))
{
if ((!r_IS_ROUNDING_NAME(((*(R17 *)rt_nil_check(p_E))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a rounding mode is a value of ROUNDINGS (3.1.4.1): ", 51), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NATIVE_R", 8)));
if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NATIVE_R", 8)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NATIVE_T", 8))))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
}
if ((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)))
{
{
R23 l_P_1366; memset(&l_P_1366, 0, sizeof l_P_1366);
S_R23(&l_P_1366, r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_B, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
}
}
S_R26(&l_V_1365, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1363;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1364;
{ R26 rv1367 = l_V_1365;
return rv1367; }
}
}
else if ((l_K_1349 == g_N_NEW))
{
if ((r_NAMES_OBJECT(((*(R17 *)rt_nil_check(p_E))).f_NAME) && (!r_CONSTRUCTOR_WANTED(p_WANT))))
{
{
R17 * l_N_1368; memset(&l_N_1368, 0, sizeof l_N_1368);
l_N_1368 = r_NEW_NODE(g_N_APPLY, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1368))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_1368))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_A;
{ R26 rv1369 = r_EXPR(l_N_1368, p_WANT);
return rv1369; }
}
}
{ R26 rv1370 = r_NEW_EXPR(p_E, p_WANT);
return rv1370; }
}
else if ((l_K_1349 == g_N_NAME))
{
{ R26 rv1371 = r_NAME_EXPR(p_E, p_WANT);
return rv1371; }
}
else if (((l_K_1349 == g_N_APPLY) && r_IS_STD_REPTYPE(((*(R17 *)rt_nil_check(p_E))).f_NAME)))
{
if (((((((*(R17 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))) || (!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL))) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an explicit-rep-converter converts one expression [3-41]", 56));
}
{
R17 * l_R_1372; memset(&l_R_1372, 0, sizeof l_R_1372);
l_R_1372 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_R_1372))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1373 = r_REP_CONVERTER(l_R_1372, ((*(R17 *)rt_nil_check(p_E))).f_A, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1373; }
}
}
else if ((l_K_1349 == g_N_APPLY))
{
{
R12 * l_Y_1374; memset(&l_Y_1374, 0, sizeof l_Y_1374);
l_Y_1374 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1374 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1374))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1374))).f_KIND == g_Y_CONST)))
{
{
R17 * l_N_1375; memset(&l_N_1375, 0, sizeof l_N_1375);
l_N_1375 = r_NEW_NODE(g_N_INDEX, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
R17 * l_A_1376; memset(&l_A_1376, 0, sizeof l_A_1376);
l_A_1376 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_A_1376))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_1375))).f_A = l_A_1376;
((*(R17 *)rt_nil_check(l_N_1375))).f_B = ((*(R17 *)rt_nil_check(p_E))).f_A;
{ R26 rv1377 = r_EXPR(l_N_1375, p_WANT);
return rv1377; }
}
}
}
{ R26 rv1378 = r_CALL_EXPR(p_E, p_WANT);
return rv1378; }
}
}
else if ((l_K_1349 == g_N_FIELD))
{
{ R26 rv1379 = r_FIELD_EXPR(p_E);
return rv1379; }
}
else if ((l_K_1349 == g_N_DEREF))
{
{
R26 l_B_1380; memset(&l_B_1380, 0, sizeof l_B_1380);
S_R26(&l_B_1380, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1380).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1381; memset(&l_TT_1381, 0, sizeof l_TT_1381);
l_TT_1381 = r_TARGET((l_B_1380).f_T);
{ R26 rv1382 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1381), (l_B_1380).f_C), l_TT_1381, 1, r_NO_TEXT());
return rv1382; }
}
}
}
else if ((l_K_1349 == g_N_INDEX))
{
if (((((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_APPLY) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME))) && r_IS_REPTYPE_NAME(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME)))
{
if (((((*(R17 *)rt_nil_check(p_E))).f_B == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_NEXT == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an explicit-rep-converter converts one expression [3-41]", 56));
}
{ R26 rv1383 = r_REP_CONVERTER(((*(R17 *)rt_nil_check(p_E))).f_A, ((*(R17 *)rt_nil_check(p_E))).f_B, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1383; }
}
{ R26 rv1384 = r_INDEX_EXPR(p_E);
return rv1384; }
}
else if ((l_K_1349 == g_N_SUBSTR))
{
{
R26 l_B_1385; memset(&l_B_1385, 0, sizeof l_B_1385);
S_R26(&l_B_1385, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1386; memset(&l_BT_1386, 0, sizeof l_BT_1386);
l_BT_1386 = r_REAL_TYPE((l_B_1385).f_T);
R9 l_LO_1387; memset(&l_LO_1387, 0, sizeof l_LO_1387);
R9 l_HI_1388; memset(&l_HI_1388, 0, sizeof l_HI_1388);
if (((((*(R22 *)rt_nil_check((l_B_1385).f_T))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_MKN(rt_str("SUBSTRING_", 10)))))
{
{
R27 * l_ARGS_1389; memset(&l_ARGS_1389, 0, sizeof l_ARGS_1389);
l_ARGS_1389 = r_VAL_ARG(l_B_1385, r_NODE_ARG(((*(R17 *)rt_nil_check(p_E))).f_B, g_M_IN, r_NODE_ARG(((*(R17 *)rt_nil_check(p_E))).f_C, g_M_IN, NULL)));
R12 * l_Y_1390; memset(&l_Y_1390, 0, sizeof l_Y_1390);
l_Y_1390 = r_USER_OPERATOR(r_MKN(rt_str("SUBSTRING_", 10)), l_ARGS_1389, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!(l_Y_1390 == NULL)))
{
{ R26 rv1391 = r_CALL_SYM(l_Y_1390, l_ARGS_1389, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1391; }
}
if ((((*(R22 *)rt_nil_check((l_B_1385).f_T))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no operation for this abstract type: ", 37), r_MK(rt_str("SUBSTRING_", 10)));
}
}
}
if ((!(((((*(R22 *)rt_nil_check(l_BT_1386))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1386))).f_KIND == g_T_BITS)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R9(&l_LO_1387, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
S_R9(&l_HI_1388, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1386))).f_KIND == g_T_BITS))
{
{ R26 rv1392 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1385).f_C, l_LO_1387, l_HI_1388), r_BITS_TYPE(((rt_int)1LL)));
return rv1392; }
}
{
R22 * l_T_1393; memset(&l_T_1393, 0, sizeof l_T_1393);
l_T_1393 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1393))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1386))).f_BASE;
{ R26 rv1394 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1385).f_C, l_LO_1387, l_HI_1388), l_T_1393);
return rv1394; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1386))).f_KIND == g_T_BITS))
{
{ R26 rv1395 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1385).f_C, l_LO_1387, l_HI_1388), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1395; }
}
{
R22 * l_T_1396; memset(&l_T_1396, 0, sizeof l_T_1396);
l_T_1396 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1396))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1386))).f_BASE;
{ R26 rv1397 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1385).f_C, l_LO_1387, l_HI_1388), l_T_1396);
return rv1397; }
}
}
}
else if ((l_K_1349 == g_N_UNOP))
{
{ R26 rv1398 = r_UNARY(p_E);
return rv1398; }
}
else if ((l_K_1349 == g_N_BINOP))
{
{ R26 rv1399 = r_BINARY(p_E);
return rv1399; }
}
else if ((l_K_1349 == g_N_IN))
{
{ R26 rv1400 = r_IN_EXPR(p_E);
return rv1400; }
}
else if (((l_K_1349 == g_N_ANY) || (l_K_1349 == g_N_DONTCARE)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((l_K_1349 == g_TS_GEN))
{
{
R17 * l_N_1401; memset(&l_N_1401, 0, sizeof l_N_1401);
l_N_1401 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1401))).f_NAME, r_MKN(rt_b_cat(rt_str("\?", 1), r_STR(((*(R17 *)rt_nil_check(p_E))).f_NAME, (((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN))), 0);
if (r_NAMES_OBJECT(((*(R17 *)rt_nil_check(l_N_1401))).f_NAME))
{
{ R26 rv1402 = r_NAME_EXPR(l_N_1401, p_WANT);
return rv1402; }
}
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
else if (((((l_K_1349 == g_TS_NAME) || (l_K_1349 == g_TS_ARRAY)) || (l_K_1349 == g_TS_RECORD)) || (l_K_1349 == g_TS_ENUM)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R9 r_INT_EXPR(R17 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1403; memset(&l_SAVED_1403, 0, sizeof l_SAVED_1403);
l_SAVED_1403 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_1404; memset(&l_SAVED_Q_1404, 0, sizeof l_SAVED_Q_1404);
l_SAVED_Q_1404 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1405; memset(&l_V_1405, 0, sizeof l_V_1405);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1405, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1403;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1404;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1405).f_T)))).f_KIND == g_T_ENUM))
{
{ R9 rv1406 = (l_V_1405).f_C;
return rv1406; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1405).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1405).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1405).f_T));
}
{ R9 rv1407 = (l_V_1405).f_C;
return rv1407; }
rt_raise(RT_X_INIT);
}
static R9 r_BOOL_EXPR(R17 * p_E) { RT_B_TICK(); 
R26 l_V_1408; memset(&l_V_1408, 0, sizeof l_V_1408);
S_R26(&l_V_1408, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1408).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1408).f_T));
}
{ R9 rv1409 = (l_V_1408).f_C;
return rv1409; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { RT_B_TICK(); 
R22 * l_T_1410; memset(&l_T_1410, 0, sizeof l_T_1410);
l_T_1410 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(l_T_1410))).f_LEN_C, r_NUM(p_LEN), 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1410))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1411 = l_T_1410;
return rv1411; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R17 * p_E) { RT_B_TICK(); 
R9 l_T_1412; memset(&l_T_1412, 0, sizeof l_T_1412);
S_R9(&l_T_1412, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1413; memset(&l_S_1413, 0, sizeof l_S_1413);
l_S_1413 = rt_b_str_new((l_T_1412).f_LEN, 0);
rt_b_assign(&l_S_1413, r_STR(l_T_1412, (l_T_1412).f_LEN));
rt_int l_POINT_1414; memset(&l_POINT_1414, 0, sizeof l_POINT_1414);
l_POINT_1414 = 0;
rt_int l_DIGITS_1415; memset(&l_DIGITS_1415, 0, sizeof l_DIGITS_1415);
l_DIGITS_1415 = ((rt_int)0LL);
{ rt_int it1417_lo = ((rt_int)0LL), it1417_hi = rt_sub((l_T_1412).f_LEN, ((rt_int)1LL));
for (rt_int it1417 = it1417_lo; it1417 <= it1417_hi; it1417++) {
{
if (rt_b_eq(rt_b_slice(l_S_1413, it1417, it1417), rt_str(".", 1)))
{
l_POINT_1414 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1413, it1417, it1417), rt_str("E", 1)))
{
goto L_end1416;
}
else
{
l_DIGITS_1415 = rt_add(l_DIGITS_1415, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it1417 == it1417_hi) break;
} } L_end1416: ;
if (((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) || (!l_POINT_1414)))
{
r_CHECK_FIXED_LITERAL(p_E);
}
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1418 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1412), r_NUM(((*(R17 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R17 *)rt_nil_check(p_E))).f_IV));
return rv1418; }
}
if ((!l_POINT_1414))
{
{ R26 rv1419 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1412)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1419; }
}
{
R22 * l_F_1420; memset(&l_F_1420, 0, sizeof l_F_1420);
l_F_1420 = r_NEW_TYP(g_T_FLOAT);
R9 l_C_1421; memset(&l_C_1421, 0, sizeof l_C_1421);
S_R9(&l_C_1421, l_T_1412, 0);
((*(R22 *)rt_nil_check(l_F_1420))).f_SCALE = r_MAX_INT(l_DIGITS_1415, r_QUAL_PREC());
if ((((*(R22 *)rt_nil_check(l_F_1420))).f_SCALE > r_MAX_FLOAT_PRECISION()))
{
((*(R22 *)rt_nil_check(l_F_1420))).f_SCALE = r_MAX_FLOAT_PRECISION();
}
if ((((*(R22 *)rt_nil_check(l_F_1420))).f_SCALE < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1420))).f_SCALE = ((rt_int)1LL);
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1420))).f_SCALE)))
{
((*(R22 *)rt_nil_check(l_F_1420))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_F_1420))).f_SCALE, ((rt_int)8LL));
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1420))).f_SCALE)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the float-literal is outside the range of FLOAT (3.3.2)", 68));
}
if (rt_b_eq(rt_b_slice(l_S_1413, rt_sub((l_T_1412).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1412).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
S_R9(&l_C_1421, r_FMT1(rt_str("@0", 2), l_T_1412), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1413, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
S_R9(&l_C_1421, r_FMT1(rt_str("0@", 2), l_T_1412), 0);
}
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_F_1420))).f_SCALE) == ((rt_int)7LL)))
{
{ R26 rv1422 = r_MKET(r_FMT1(rt_str("((double)(float)@)", 18), l_C_1421), l_F_1420);
return rv1422; }
}
{ R26 rv1423 = r_MKET(r_FMT1(rt_str("(@)", 3), l_C_1421), l_F_1420);
return rv1423; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_LITERAL_FITS(R17 * p_E, rt_int p_P) { RT_B_TICK(); 
R9 l_T_1424; memset(&l_T_1424, 0, sizeof l_T_1424);
S_R9(&l_T_1424, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1425; memset(&l_S_1425, 0, sizeof l_S_1425);
l_S_1425 = rt_b_str_new((l_T_1424).f_LEN, 0);
rt_b_assign(&l_S_1425, r_STR(l_T_1424, (l_T_1424).f_LEN));
rt_int l_INT_1426; memset(&l_INT_1426, 0, sizeof l_INT_1426);
l_INT_1426 = ((rt_int)0LL);
rt_int l_SIG_1427; memset(&l_SIG_1427, 0, sizeof l_SIG_1427);
l_SIG_1427 = 0;
rt_int l_POINT_1428; memset(&l_POINT_1428, 0, sizeof l_POINT_1428);
l_POINT_1428 = 0;
rt_int l_LEAD_1429; memset(&l_LEAD_1429, 0, sizeof l_LEAD_1429);
l_LEAD_1429 = ((rt_int)0LL);
rt_int l_I_1430; memset(&l_I_1430, 0, sizeof l_I_1430);
l_I_1430 = ((rt_int)0LL);
rt_int l_EXP_1431; memset(&l_EXP_1431, 0, sizeof l_EXP_1431);
l_EXP_1431 = ((rt_int)0LL);
for (;;) {
if ((l_I_1430 >= (l_T_1424).f_LEN)) goto L_end1432;
{
if (rt_b_eq(rt_b_slice(l_S_1425, l_I_1430, l_I_1430), rt_str("E", 1)))
{
goto L_end1432;
}
else if (rt_b_eq(rt_b_slice(l_S_1425, l_I_1430, l_I_1430), rt_str(".", 1)))
{
l_POINT_1428 = 1;
}
else if ((!rt_b_eq(rt_b_slice(l_S_1425, l_I_1430, l_I_1430), rt_str("0", 1))))
{
if ((!l_POINT_1428))
{
l_INT_1426 = rt_add(l_INT_1426, ((rt_int)1LL));
}
l_SIG_1427 = 1;
}
else if ((l_SIG_1427 && (!l_POINT_1428)))
{
l_INT_1426 = rt_add(l_INT_1426, ((rt_int)1LL));
}
else if ((l_POINT_1428 && (!l_SIG_1427)))
{
l_LEAD_1429 = rt_add(l_LEAD_1429, ((rt_int)1LL));
}
l_I_1430 = rt_add(l_I_1430, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1432: ;
if ((!l_SIG_1427))
{
{ rt_int rv1433 = 1;
return rv1433; }
}
if ((l_I_1430 < (l_T_1424).f_LEN))
{
{
rt_int l_NEG_1434; memset(&l_NEG_1434, 0, sizeof l_NEG_1434);
l_NEG_1434 = 0;
l_I_1430 = rt_add(l_I_1430, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1425, l_I_1430, l_I_1430), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1425, l_I_1430, l_I_1430), rt_str("+", 1))))
{
l_NEG_1434 = rt_b_eq(rt_b_slice(l_S_1425, l_I_1430, l_I_1430), rt_str("-", 1));
l_I_1430 = rt_add(l_I_1430, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1430 >= (l_T_1424).f_LEN)) goto L_end1435;
{
if ((l_EXP_1431 <= ((rt_int)100000LL)))
{
l_EXP_1431 = rt_add(rt_mul(l_EXP_1431, ((rt_int)10LL)), (rt_sub(r_CODE_OF(rt_b_slice(l_S_1425, l_I_1430, l_I_1430)), ((rt_int)48LL))));
}
l_I_1430 = rt_add(l_I_1430, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1435: ;
if (l_NEG_1434)
{
l_EXP_1431 = rt_neg(l_EXP_1431);
}
}
}
{
rt_int l_D_1436; memset(&l_D_1436, 0, sizeof l_D_1436);
l_D_1436 = rt_add(rt_sub(l_INT_1426, ((rt_int)1LL)), l_EXP_1431);
rt_int l_LIM_1437; memset(&l_LIM_1437, 0, sizeof l_LIM_1437);
l_LIM_1437 = ((rt_int)308LL);
if ((l_INT_1426 == ((rt_int)0LL)))
{
l_D_1436 = rt_add(rt_sub(rt_neg(l_LEAD_1429), ((rt_int)1LL)), l_EXP_1431);
}
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
l_LIM_1437 = ((rt_int)38LL);
}
{ rt_int rv1438 = ((l_D_1436 <= l_LIM_1437) && (l_D_1436 >= rt_add(rt_neg(l_LIM_1437), ((rt_int)1LL))));
return rv1438; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_LITERAL(R17 * p_E) { RT_B_TICK(); 
R9 l_T_1439; memset(&l_T_1439, 0, sizeof l_T_1439);
S_R9(&l_T_1439, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1440; memset(&l_S_1440, 0, sizeof l_S_1440);
l_S_1440 = rt_b_str_new((l_T_1439).f_LEN, 0);
rt_b_assign(&l_S_1440, r_STR(l_T_1439, (l_T_1439).f_LEN));
rt_int l_SIG_1441; memset(&l_SIG_1441, 0, sizeof l_SIG_1441);
l_SIG_1441 = ((rt_int)0LL);
rt_int l_FRAC_1442; memset(&l_FRAC_1442, 0, sizeof l_FRAC_1442);
l_FRAC_1442 = ((rt_int)0LL);
rt_int l_POINT_1443; memset(&l_POINT_1443, 0, sizeof l_POINT_1443);
l_POINT_1443 = 0;
rt_int l_EXP_1444; memset(&l_EXP_1444, 0, sizeof l_EXP_1444);
l_EXP_1444 = ((rt_int)0LL);
rt_int l_I_1445; memset(&l_I_1445, 0, sizeof l_I_1445);
l_I_1445 = ((rt_int)0LL);
for (;;) {
if ((l_I_1445 >= (l_T_1439).f_LEN)) goto L_end1446;
{
if (rt_b_eq(rt_b_slice(l_S_1440, l_I_1445, l_I_1445), rt_str("E", 1)))
{
goto L_end1446;
}
if (rt_b_eq(rt_b_slice(l_S_1440, l_I_1445, l_I_1445), rt_str(".", 1)))
{
l_POINT_1443 = 1;
}
else
{
if (((l_SIG_1441 > ((rt_int)0LL)) || (!rt_b_eq(rt_b_slice(l_S_1440, l_I_1445, l_I_1445), rt_str("0", 1)))))
{
l_SIG_1441 = rt_add(l_SIG_1441, ((rt_int)1LL));
}
if (l_POINT_1443)
{
l_FRAC_1442 = rt_add(l_FRAC_1442, ((rt_int)1LL));
}
}
l_I_1445 = rt_add(l_I_1445, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1446: ;
if ((rt_sub(l_I_1445, r_BOOL_INT(l_POINT_1443)) > ((rt_int)1000LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a fixed-literal has at most 1000 digits (3.2.2)", 47));
}
if ((l_I_1445 < (l_T_1439).f_LEN))
{
{
rt_int l_NEG_1447; memset(&l_NEG_1447, 0, sizeof l_NEG_1447);
l_NEG_1447 = 0;
l_I_1445 = rt_add(l_I_1445, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1440, l_I_1445, l_I_1445), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1440, l_I_1445, l_I_1445), rt_str("+", 1))))
{
l_NEG_1447 = rt_b_eq(rt_b_slice(l_S_1440, l_I_1445, l_I_1445), rt_str("-", 1));
l_I_1445 = rt_add(l_I_1445, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1445 >= (l_T_1439).f_LEN)) goto L_end1448;
{
if ((l_EXP_1444 <= ((rt_int)1000LL)))
{
l_EXP_1444 = rt_sub(rt_add(rt_mul(l_EXP_1444, ((rt_int)10LL)), r_CODE_OF(rt_b_slice(l_S_1440, l_I_1445, l_I_1445))), ((rt_int)48LL));
}
l_I_1445 = rt_add(l_I_1445, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1448: ;
if ((l_EXP_1444 > ((rt_int)1000LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the exponent of a literal must not exceed 1000 (3.2.2)", 54));
}
if (l_NEG_1447)
{
l_EXP_1444 = rt_neg(l_EXP_1444);
}
}
}
if (((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) && (((((*(R17 *)rt_nil_check(p_E))).f_IV > ((rt_int)1000LL)) || (((*(R17 *)rt_nil_check(p_E))).f_IV < rt_neg(((rt_int)1000LL)))))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a literal must not exceed 1000 (3.2.2)", 51));
}
if ((l_SIG_1441 > ((rt_int)0LL)))
{
{
rt_int l_P10_1449; memset(&l_P10_1449, 0, sizeof l_P10_1449);
l_P10_1449 = rt_sub(rt_add(rt_sub(l_SIG_1441, ((rt_int)1LL)), l_EXP_1444), l_FRAC_1442);
rt_int l_BITS_1450; memset(&l_BITS_1450, 0, sizeof l_BITS_1450);
l_BITS_1450 = rt_add(rt_quot((rt_mul(l_P10_1449, ((rt_int)3321928LL))), ((rt_int)1000000LL)), rt_mul(((*(R17 *)rt_nil_check(p_E))).f_IV, ((*(R17 *)rt_nil_check(p_E))).f_FL));
if ((l_P10_1449 < ((rt_int)0LL)))
{
l_BITS_1450 = rt_add(rt_neg((rt_quot((rt_add(rt_mul(rt_neg(l_P10_1449), ((rt_int)3321929LL)), ((rt_int)999999LL))), ((rt_int)1000000LL)))), rt_mul(((*(R17 *)rt_nil_check(p_E))).f_IV, ((*(R17 *)rt_nil_check(p_E))).f_FL));
}
if ((l_BITS_1450 >= ((rt_int)63LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the literal is outside FIXED_MIN .. FIXED_MAX (3.2.2)", 66));
}
}
}
}
static R26 r_STRING_LITERAL(R17 * p_E) { RT_B_TICK(); 
R22 * l_CS_1451; memset(&l_CS_1451, 0, sizeof l_CS_1451);
l_CS_1451 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R17 * l_P_1452; memset(&l_P_1452, 0, sizeof l_P_1452);
l_P_1452 = ((*(R17 *)rt_nil_check(p_E))).f_A;
R9 l_S_1453; memset(&l_S_1453, 0, sizeof l_S_1453);
S_R9(&l_S_1453, r_MK(rt_str("", 0)), 0);
if (((((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN == ((rt_int)0LL)))
{
l_CS_1451 = r_DEFAULT_CHARSET(((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
else
{
{
R12 * l_Y_1454; memset(&l_Y_1454, 0, sizeof l_Y_1454);
l_Y_1454 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1454 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1454))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1451 = r_RESOLVE_USER_NAME(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1451)))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1451 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1451)))).f_BASE;
if ((!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(l_CS_1451))).f_LITS)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a character set has a literal of the form \\'C' (3.7.2): ", 56), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
}
}
for (;;) {
if ((l_P_1452 == NULL)) goto L_end1455;
{
if ((((*(R17 *)rt_nil_check(l_P_1452))).f_IV == g_K_STR))
{
if ((l_CS_1451 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R9(&l_S_1453, r_CAT(l_S_1453, ((*(R17 *)rt_nil_check(l_P_1452))).f_NAME), 0);
}
else
{
{
R9 l_Q_1456; memset(&l_Q_1456, 0, sizeof l_Q_1456);
S_R9(&l_Q_1456, ((*(R17 *)rt_nil_check(l_P_1452))).f_NAME, 0);
rstr l_QS_1457; memset(&l_QS_1457, 0, sizeof l_QS_1457);
l_QS_1457 = rt_b_str_new((l_Q_1456).f_LEN, 0);
rt_b_assign(&l_QS_1457, r_STR(l_Q_1456, (l_Q_1456).f_LEN));
{ rt_int it1459_lo = ((rt_int)0LL), it1459_hi = rt_sub((l_Q_1456).f_LEN, ((rt_int)1LL));
for (rt_int it1459 = it1459_lo; it1459 <= it1459_hi; it1459++) {
{
{
R9 l_LIT_1460; memset(&l_LIT_1460, 0, sizeof l_LIT_1460);
R12 * l_Y_1461; memset(&l_Y_1461, 0, sizeof l_Y_1461);
if (rt_b_eq(rt_b_slice(l_QS_1457, it1459, it1459), rt_str("'", 1)))
{
S_R9(&l_LIT_1460, r_MKN(rt_str("\\''''", 5)), 0);
}
else
{
S_R9(&l_LIT_1460, r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1457, it1459, it1459)), rt_str("'", 1))), 0);
}
l_Y_1461 = r_FIND_LITERAL(l_LIT_1460, l_CS_1451);
if ((l_Y_1461 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_1452))).f_LINE, rt_b_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1457, it1459, it1459)));
}
S_R9(&l_S_1453, r_CATS(l_S_1453, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1461))).f_MV)), 0);
}
}
RT_B_TICK();
if (it1459 == it1459_hi) break;
} } L_end1458: ;
}
}
}
else
{
{
R12 * l_Y_1462; memset(&l_Y_1462, 0, sizeof l_Y_1462);
l_Y_1462 = r_FIND_LITERAL(((*(R17 *)rt_nil_check(l_P_1452))).f_NAME, l_CS_1451);
if ((l_Y_1462 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_1452))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R17 *)rt_nil_check(l_P_1452))).f_NAME);
}
S_R9(&l_S_1453, r_CATS(l_S_1453, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1462))).f_MV)), 0);
}
}
l_P_1452 = ((*(R17 *)rt_nil_check(l_P_1452))).f_NEXT;
}
RT_B_TICK();
} L_end1455: ;
{
R22 * l_T_1463; memset(&l_T_1463, 0, sizeof l_T_1463);
l_T_1463 = r_STR_TYPE(r_NUM((l_S_1453).f_LEN), r_SOME((l_S_1453).f_LEN));
((*(R22 *)rt_nil_check(l_T_1463))).f_BASE = l_CS_1451;
{ R26 rv1464 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1453), r_NUM((l_S_1453).f_LEN)), l_T_1463);
return rv1464; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_TS_1465; memset(&l_TS_1465, 0, sizeof l_TS_1465);
l_TS_1465 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_TS_1465))).f_NAME, p_NAME, 0);
{ R22 * rv1466 = r_RESOLVE(l_TS_1465);
return rv1466; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1467; memset(&l_Y_1467, 0, sizeof l_Y_1467);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1468; memset(&l_WT_1468, 0, sizeof l_WT_1468);
l_WT_1468 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1468))).f_KIND == g_T_ENUM))
{
l_Y_1467 = r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_WT_1468);
if ((!(l_Y_1467 == NULL)))
{
{ R26 rv1469 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1467))).f_MV), r_ENUM_RESULT(l_Y_1467, p_WANT));
return rv1469; }
}
}
}
}
l_Y_1467 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1470; memset(&l_FOUND_1470, 0, sizeof l_FOUND_1470);
l_FOUND_1470 = NULL;
rt_int l_N_1471; memset(&l_N_1471, 0, sizeof l_N_1471);
l_N_1471 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1467 == NULL)) goto L_end1472;
{
if ((((*(R12 *)rt_nil_check(l_Y_1467))).f_KIND == g_Y_ENUMLIT))
{
if ((l_FOUND_1470 == NULL))
{
l_FOUND_1470 = l_Y_1467;
}
else if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1470))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1467))).f_T))).f_BASE)))
{
l_N_1471 = rt_add(l_N_1471, ((rt_int)1LL));
}
}
l_Y_1467 = r_LOOKUP_NEXT(l_Y_1467);
}
RT_B_TICK();
} L_end1472: ;
if ((l_FOUND_1470 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1471 > ((rt_int)0LL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1473 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1470))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1470))).f_T);
return rv1473; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1474 = p_WANT;
return rv1474; }
}
if ((!(((*(R22 *)rt_nil_check(p_WANT))).f_REPS == NULL)))
{
{
R22 * l_T_1475; memset(&l_T_1475, 0, sizeof l_T_1475);
l_T_1475 = r_COPY_TYP(((*(R12 *)rt_nil_check(p_Y))).f_T);
((*(R22 *)rt_nil_check(l_T_1475))).f_REPS = ((*(R22 *)rt_nil_check(p_WANT))).f_REPS;
{ R22 * rv1476 = l_T_1475;
return rv1476; }
}
}
{ R22 * rv1477 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1477; }
rt_raise(RT_X_INIT);
}
static rt_int r_CONSTRUCTOR_WANTED(R22 * p_WANT) { RT_B_TICK(); 
if ((p_WANT == NULL))
{
{ rt_int rv1478 = 0;
return rv1478; }
}
{ rt_int rv1479 = ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM));
return rv1479; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_OBJECT(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1480; memset(&l_Y_1480, 0, sizeof l_Y_1480);
l_Y_1480 = r_LOOKUP(p_NAME);
if ((l_Y_1480 == NULL))
{
{ rt_int rv1481 = 0;
return rv1481; }
}
{ rt_int rv1482 = (((((*(R12 *)rt_nil_check(l_Y_1480))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1480))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1480))).f_KIND == g_Y_ROUTINE));
return rv1482; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STD_REPTYPE(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv1483 = (((((((((r_TEQS(p_NAME, rt_str("FIXED_STD", 9)) || r_TEQS(p_NAME, rt_str("FLOAT_STD", 9))) || r_TEQS(p_NAME, rt_str("BOOLEAN_STD", 11))) || r_TEQS(p_NAME, rt_str("ENUM_STD", 8))) || r_TEQS(p_NAME, rt_str("CHAR_STR_STD", 12))) || r_TEQS(p_NAME, rt_str("BIT_STD", 7))) || r_TEQS(p_NAME, rt_str("ARRAY_STD", 9))) || r_TEQS(p_NAME, rt_str("RECORD_STD", 10))) || r_TEQS(p_NAME, rt_str("PTR_STD", 7))) || r_TEQS(p_NAME, rt_str("SEMAPHORE_STD", 13)));
return rv1483; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_REPTYPE_NAME(R9 p_NAME) { RT_B_TICK(); 
if (((((((r_IS_STD_REPTYPE(p_NAME) || r_TEQS(p_NAME, rt_str("FIXED_REP", 9))) || r_TEQS(p_NAME, rt_str("ENUM_REP", 8))) || r_TEQS(p_NAME, rt_str("ENUM_VAL_REP", 12))) || r_TEQS(p_NAME, rt_str("CHAR_STR_REP", 12))) || r_TEQS(p_NAME, rt_str("ARRAY_REP", 9))) || r_TEQS(p_NAME, rt_str("RECORD_REP", 10))))
{
{ rt_int rv1484 = (r_LOOKUP(p_NAME) == NULL);
return rv1484; }
}
if ((!(r_ORIG_LOOKUP(p_NAME) == NULL)))
{
{ rt_int rv1485 = (((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(p_NAME)))).f_KIND == g_Y_REPTYPE);
return rv1485; }
}
{ rt_int rv1486 = 0;
return rv1486; }
rt_raise(RT_X_INIT);
}
static R26 r_REP_CONVERTER(R17 * p_S, R17 * p_E, rt_int p_LINE) { RT_B_TICK(); 
R26 l_V_1487; memset(&l_V_1487, 0, sizeof l_V_1487);
S_R26(&l_V_1487, r_EXPR(p_E, NULL), 0);
R17 * l_R_1488; memset(&l_R_1488, 0, sizeof l_R_1488);
l_R_1488 = r_NEW_NODE(g_N_REP, p_LINE);
R22 * l_T_1489; memset(&l_T_1489, 0, sizeof l_T_1489);
S_R9(&((*(R17 *)rt_nil_check(l_R_1488))).f_NAME, ((*(R17 *)rt_nil_check(p_S))).f_NAME, 0);
if ((((*(R17 *)rt_nil_check(p_S))).f_KIND == g_N_APPLY))
{
((*(R17 *)rt_nil_check(l_R_1488))).f_A = ((*(R17 *)rt_nil_check(p_S))).f_A;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1487).f_T)))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check((l_V_1487).f_T))).f_KIND == g_T_ABS)))
{
r_FAIL(p_LINE, rt_str("a representation is only for a member of a predefined type class (3.12.2)", 73));
}
l_T_1489 = r_COPY_TYP(r_REAL_TYPE((l_V_1487).f_T));
((*(R22 *)rt_nil_check(l_T_1489))).f_REPS = r_EXPAND_REP(l_R_1488, l_T_1489, p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_REPCONV = 1;
r_CHECK_REP_CLASS(l_T_1489, p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_REPCONV = 0;
if ((r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1489))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1489))).f_REPS))).f_A == NULL))))
{
{
R23 l_N_1490; memset(&l_N_1490, 0, sizeof l_N_1490);
S_R23(&l_N_1490, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1489))).f_REPS))).f_A), 0);
rt_int l_UNS_1491; memset(&l_UNS_1491, 0, sizeof l_UNS_1491);
l_UNS_1491 = ((rt_int)0LL);
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1489))).f_REPS))).f_A))).f_NEXT == NULL)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1489))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8)))
{
l_UNS_1491 = ((rt_int)1LL);
}
}
if ((l_N_1490).f_OK)
{
{ R26 rv1492 = r_MKET(r_FMT3(rt_str("rt_b_fixed_rep(@, @, @)", 23), (l_V_1487).f_C, r_NUM((l_N_1490).f_V), r_NUM(l_UNS_1491)), l_T_1489);
return rv1492; }
}
}
}
{ R26 rv1493 = r_MKET((l_V_1487).f_C, l_T_1489);
return rv1493; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1494; memset(&l_Y_1494, 0, sizeof l_Y_1494);
l_Y_1494 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1494 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_1494))).f_WITHV == ((rt_int)2LL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the variable is named by a WITH NAMING and not known in its statement (4.5.4): ", 79), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((((((*(R12 *)rt_nil_check(l_Y_1494))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL))) && (!((*(R12 *)rt_nil_check(l_Y_1494))).f_INPUT)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type or reptype declaration is a closed scope: no variable from outside (3.12.1, 3.12.3): ", 92), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1494))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a record-spec is a closed scope: no variable from outside (3.9.1): ", 67), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1494))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1494))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1495; memset(&l_WRITABLE_1495, 0, sizeof l_WRITABLE_1495);
l_WRITABLE_1495 = (r_SEG_VISIBLE(l_Y_1494, ((*(R17 *)rt_nil_check(p_E))).f_LINE) && r_CHECK_IMPORTED(l_Y_1494, ((*(R17 *)rt_nil_check(p_E))).f_LINE));
{ R26 rv1496 = r_MKLV(r_OBJ_ACCESS(l_Y_1494), ((*(R12 *)rt_nil_check(l_Y_1494))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1494))).f_KIND == g_Y_VAR) && l_WRITABLE_1495), r_NO_TEXT());
return rv1496; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1494))).f_KIND == g_Y_GEN))
{
{ R26 rv1497 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1494))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1494))).f_T);
return rv1497; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1494))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1498 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1498; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1494))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1494))).f_KIND == g_Y_BUILTIN)))
{
{
R17 * l_N_1499; memset(&l_N_1499, 0, sizeof l_N_1499);
l_N_1499 = r_NEW_NODE(g_N_APPLY, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1499))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1500 = r_CALL_EXPR(l_N_1499, p_WANT);
return rv1500; }
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R17 * p_E) { RT_B_TICK(); 
R17 * l_A_1501; memset(&l_A_1501, 0, sizeof l_A_1501);
l_A_1501 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))) && r_IS_NUMBER_LITERAL(l_A_1501)))
{
{ R26 rv1502 = r_EXPR(l_A_1501, NULL);
return rv1502; }
}
if ((((*(R17 *)rt_nil_check(l_A_1501))).f_KIND == g_N_INDEX))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1501))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1501))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1503; memset(&l_B_1503, 0, sizeof l_B_1503);
S_R26(&l_B_1503, r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1501))).f_A))).f_A), 0);
R9 l_I_1504; memset(&l_I_1504, 0, sizeof l_I_1504);
S_R9(&l_I_1504, r_INT_EXPR(((*(R17 *)rt_nil_check(l_A_1501))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1503).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1505 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1503).f_C, l_I_1504, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1503).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1505; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1506 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1503).f_C, l_I_1504, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1503).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1506; }
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R17 *)rt_nil_check(l_A_1501))).f_KIND == g_N_PAREN))
{
if (r_IS_TYPE_ATTR(((*(R17 *)rt_nil_check(l_A_1501))).f_A))
{
{ R26 rv1507 = r_ATTRIBUTE(r_TYPE_VALUE_OF(r_TYPE_ATTR_TYPE(((*(R17 *)rt_nil_check(l_A_1501))).f_A)), ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1507; }
}
}
if ((((*(R17 *)rt_nil_check(l_A_1501))).f_KIND == g_N_PAREN))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1501))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1501))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1501))).f_A))).f_A))).f_NAME))
{
{ R26 rv1508 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1501))).f_A))).f_A))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1501))).f_A))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1508; }
}
}
}
}
if ((((*(R17 *)rt_nil_check(l_A_1501))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1509; memset(&l_Y_1509, 0, sizeof l_Y_1509);
l_Y_1509 = r_LOOKUP(((*(R17 *)rt_nil_check(l_A_1501))).f_NAME);
if ((!(l_Y_1509 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1509))).f_KIND == g_Y_TYPE))
{
{ R26 rv1510 = r_TYPE_ATTRIBUTE(((*(R17 *)rt_nil_check(l_A_1501))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1510; }
}
}
else if (r_IS_TYPE_WORD(((*(R17 *)rt_nil_check(l_A_1501))).f_NAME))
{
{ R26 rv1511 = r_TYPE_ATTRIBUTE(((*(R17 *)rt_nil_check(l_A_1501))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1511; }
}
}
}
{
R26 l_B_1512; memset(&l_B_1512, 0, sizeof l_B_1512);
S_R26(&l_B_1512, r_EXPR(l_A_1501, NULL), 0);
R22 * l_BT_1513; memset(&l_BT_1513, 0, sizeof l_BT_1513);
l_BT_1513 = (l_B_1512).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1513))).f_KIND == g_T_REC))
{
{
R24 * l_F_1514; memset(&l_F_1514, 0, sizeof l_F_1514);
l_F_1514 = r_FIND_VFIELD(l_BT_1513, ((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1514 == NULL)))
{
r_CHECK_VARIANT(l_F_1514, l_BT_1513, l_A_1501, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R24 *)rt_nil_check(l_F_1514))).f_KIND == ((rt_int)2LL)) && r_HAS_ANY(l_BT_1513)))
{
{ R26 rv1515 = r_MKET(r_FMT2(rt_str("rt_b_tag((@).@)", 15), (l_B_1512).f_C, ((*(R24 *)rt_nil_check(l_F_1514))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1514))).f_T);
return rv1515; }
}
{ R26 rv1516 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1512).f_C, ((*(R24 *)rt_nil_check(l_F_1514))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1514))).f_T, ((l_B_1512).f_LVAL && (((*(R24 *)rt_nil_check(l_F_1514))).f_KIND == ((rt_int)0LL))), (l_B_1512).f_C);
return rv1516; }
}
}
}
{ R26 rv1517 = r_ATTRIBUTE(l_B_1512, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1517; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_FIXED_LITERAL(R17 * p_A) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1518 = (r_IS_FIXED_LITERAL(((*(R17 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R17 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1518; }
}
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_INT))
{
{ rt_int rv1519 = 1;
return rv1519; }
}
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_REAL))
{
if ((((*(R17 *)rt_nil_check(p_A))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv1520 = 1;
return rv1520; }
}
{
rstr l_S_1521; memset(&l_S_1521, 0, sizeof l_S_1521);
l_S_1521 = rt_b_str_new((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN, 0);
rt_b_assign(&l_S_1521, r_STR(((*(R17 *)rt_nil_check(p_A))).f_NAME, (((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN));
{ rt_int it1523_lo = ((rt_int)0LL), it1523_hi = rt_sub((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN, ((rt_int)1LL));
for (rt_int it1523 = it1523_lo; it1523 <= it1523_hi; it1523++) {
{
if (rt_b_eq(rt_b_slice(l_S_1521, it1523, it1523), rt_str(".", 1)))
{
{ rt_int rv1524 = 0;
return rv1524; }
}
}
RT_B_TICK();
if (it1523 == it1523_hi) break;
} } L_end1522: ;
}
{ rt_int rv1525 = 1;
return rv1525; }
}
{ rt_int rv1526 = 0;
return rv1526; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMBER_LITERAL(R17 * p_A) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1527 = (r_IS_NUMBER_LITERAL(((*(R17 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R17 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1527; }
}
{ rt_int rv1528 = ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_INT) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_REAL));
return rv1528; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv1529 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1529; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R17 * p_BASE, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R23 l_TAGV_1530; memset(&l_TAGV_1530, 0, sizeof l_TAGV_1530);
S_R23(&l_TAGV_1530, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1530).f_OK))
{
r_FAILT(p_LINE, rt_b_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R24 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1530).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R23 r_TAG_VALUE(R22 * p_T, R9 p_TAGN) { RT_B_TICK(); 
R24 * l_F_1531; memset(&l_F_1531, 0, sizeof l_F_1531);
l_F_1531 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1532; memset(&l_A_1532, 0, sizeof l_A_1532);
l_A_1532 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1531 == NULL)) goto L_end1533;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1531))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1532 == NULL))
{
{ R23 rv1534 = r_NO_MVAL();
return rv1534; }
}
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1531))).f_NAME, p_TAGN))
{
if (((*(R25 *)rt_nil_check(l_A_1532))).f_ANYARG)
{
{ R23 rv1535 = r_NO_MVAL();
return rv1535; }
}
{ R23 rv1536 = ((*(R25 *)rt_nil_check(l_A_1532))).f_MLO;
return rv1536; }
}
l_A_1532 = ((*(R25 *)rt_nil_check(l_A_1532))).f_NEXT;
}
l_F_1531 = ((*(R24 *)rt_nil_check(l_F_1531))).f_NEXT;
}
RT_B_TICK();
} L_end1533: ;
{ R23 rv1537 = r_NO_MVAL();
return rv1537; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R17 * p_L, rt_int p_V, R22 * p_T) { RT_B_TICK(); 
R17 * l_P_1538; memset(&l_P_1538, 0, sizeof l_P_1538);
l_P_1538 = p_L;
for (;;) {
if ((l_P_1538 == NULL)) goto L_end1539;
{
if ((((*(R17 *)rt_nil_check(l_P_1538))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_P_1538))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_P_1538))).f_B, p_T)).f_V)))
{
{ rt_int rv1540 = 1;
return rv1540; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1538, p_T)).f_V == p_V))
{
{ rt_int rv1541 = 1;
return rv1541; }
}
l_P_1538 = ((*(R17 *)rt_nil_check(l_P_1538))).f_NEXT;
}
RT_B_TICK();
} L_end1539: ;
{ rt_int rv1542 = 0;
return rv1542; }
rt_raise(RT_X_INIT);
}
static R26 r_VALUE_OR_TYPE(R17 * p_E) { RT_B_TICK(); 
if (r_IS_TYPE_NAME(p_E))
{
{ R26 rv1543 = r_TYPE_VALUE(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1543; }
}
{ R26 rv1544 = r_EXPR(p_E, NULL);
return rv1544; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R17 * p_E) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1545; memset(&l_A_1545, 0, sizeof l_A_1545);
S_R26(&l_A_1545, r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_A), 0);
R9 l_I_1546; memset(&l_I_1546, 0, sizeof l_I_1546);
S_R9(&l_I_1546, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1545).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1547 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1545).f_C, (l_A_1545).f_C, l_I_1546, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1545).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1547; }
}
}
}
{ R26 rv1548 = r_INDEX_EXPR2(p_E);
return rv1548; }
rt_raise(RT_X_INIT);
}
static R9 r_INDEX_VALUE(R17 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1549; memset(&l_SAVED_1549, 0, sizeof l_SAVED_1549);
l_SAVED_1549 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_1550; memset(&l_SAVED_Q_1550, 0, sizeof l_SAVED_Q_1550);
l_SAVED_Q_1550 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1551; memset(&l_V_1551, 0, sizeof l_V_1551);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1551, r_EXPR(p_E, NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1549;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1550;
{ R9 rv1552 = r_INDEX_OF(l_V_1551, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1552; }
rt_raise(RT_X_INIT);
}
static R9 r_INDEX_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1553; memset(&l_T_1553, 0, sizeof l_T_1553);
l_T_1553 = r_REAL_TYPE((p_V).f_T);
if (((((*(R22 *)rt_nil_check((p_V).f_T))).f_KIND == g_T_ABS) || (((((*(R22 *)rt_nil_check(l_T_1553))).f_KIND == g_T_ENUM) && ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1553))).f_BASE))).f_UNORDERED || (!(((*(R22 *)rt_nil_check(l_T_1553))).f_REPS == NULL))))))))
{
{
R27 * l_ARGS_1554; memset(&l_ARGS_1554, 0, sizeof l_ARGS_1554);
l_ARGS_1554 = r_VAL_ARG(p_V, NULL);
R12 * l_Y_1555; memset(&l_Y_1555, 0, sizeof l_Y_1555);
l_Y_1555 = r_FIND_ROUTINE(r_MKN(rt_str("TO_FIXED", 8)), l_ARGS_1554, p_LINE, 0);
if ((l_Y_1555 == NULL))
{
r_FAILT(p_LINE, rt_str("an index of this type needs a TO_FIXED of the program (3.8.1): ", 63), r_TYPE_NAME((p_V).f_T));
}
{ R9 rv1556 = (r_CALL_SYM(l_Y_1555, l_ARGS_1554, p_LINE)).f_C;
return rv1556; }
}
}
if ((((*(R22 *)rt_nil_check(l_T_1553))).f_KIND == g_T_ENUM))
{
{ R9 rv1557 = (p_V).f_C;
return rv1557; }
}
if (((!(((*(R22 *)rt_nil_check(l_T_1553))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_1553))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(p_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((p_V).f_T));
}
{ R9 rv1558 = (p_V).f_C;
return rv1558; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R17 * p_E) { RT_B_TICK(); 
R26 l_B_1559; memset(&l_B_1559, 0, sizeof l_B_1559);
S_R26(&l_B_1559, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1560; memset(&l_T_1560, 0, sizeof l_T_1560);
l_T_1560 = r_REAL_TYPE((l_B_1559).f_T);
R17 * l_S_1561; memset(&l_S_1561, 0, sizeof l_S_1561);
l_S_1561 = ((*(R17 *)rt_nil_check(p_E))).f_B;
R9 l_IX_1562; memset(&l_IX_1562, 0, sizeof l_IX_1562);
S_R9(&l_IX_1562, r_MK(rt_str("", 0)), 0);
rt_int l_N_1563; memset(&l_N_1563, 0, sizeof l_N_1563);
l_N_1563 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1560))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1561 == NULL)) goto L_end1564;
{
if ((l_N_1563 > ((rt_int)0LL)))
{
S_R9(&l_IX_1562, r_CATS(l_IX_1562, rt_str(", ", 2)), 0);
}
S_R9(&l_IX_1562, r_CAT(l_IX_1562, r_INDEX_VALUE(l_S_1561)), 0);
l_N_1563 = rt_add(l_N_1563, ((rt_int)1LL));
l_S_1561 = ((*(R17 *)rt_nil_check(l_S_1561))).f_NEXT;
}
RT_B_TICK();
} L_end1564: ;
if ((!(l_N_1563 == ((*(R22 *)rt_nil_check(l_T_1560))).f_DIMS)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1563 == ((rt_int)1LL)))
{
{ R26 rv1565 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1559).f_C, l_IX_1562, (l_B_1559).f_C, (l_B_1559).f_C), ((*(R22 *)rt_nil_check(l_T_1560))).f_ELEM, (l_B_1559).f_LVAL, r_NO_TEXT());
return rv1565; }
}
{
R9 l_X_1566; memset(&l_X_1566, 0, sizeof l_X_1566);
S_R9(&l_X_1566, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1559).f_C, r_NUM(l_N_1563), (l_B_1559).f_C, (l_B_1559).f_C), 0);
{ R26 rv1567 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1566, l_IX_1562), ((*(R22 *)rt_nil_check(l_T_1560))).f_ELEM, (l_B_1559).f_LVAL, r_NO_TEXT());
return rv1567; }
}
rt_raise(RT_X_INIT);
}
static R9 r_OP_NAME(R9 p_OP, rt_int p_UNARY) { RT_B_TICK(); 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R9 rv1568 = r_MKN(rt_str("NEGATE_", 7));
return rv1568; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R9 rv1569 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1569; }
}
{ R9 rv1570 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1570; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R9 rv1571 = r_MKN(rt_str("ADD_", 4));
return rv1571; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R9 rv1572 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1572; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R9 rv1573 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1573; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R9 rv1574 = r_MKN(rt_str("DIVIDE_", 7));
return rv1574; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R9 rv1575 = r_MKN(rt_str("MODULUS_", 8));
return rv1575; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R9 rv1576 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1576; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R9 rv1577 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1577; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R9 rv1578 = r_MKN(rt_str("EQUAL_", 6));
return rv1578; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R9 rv1579 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1579; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R9 rv1580 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1580; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R9 rv1581 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1581; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R9 rv1582 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1582; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R9 rv1583 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1583; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R9 rv1584 = r_MKN(rt_str("AND_", 4));
return rv1584; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R9 rv1585 = r_MKN(rt_str("OR_", 3));
return rv1585; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R9 rv1586 = r_MKN(rt_str("XOR_", 4));
return rv1586; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R9 rv1587 = r_MKN(rt_str("IMPLIES_", 8));
return rv1587; }
}
{ R9 rv1588 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1588; }
rt_raise(RT_X_INIT);
}
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1589; memset(&l_A_1589, 0, sizeof l_A_1589);
l_A_1589 = ((R27 *)rt_b_new(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1589)), ({ R27 rc1590; memset(&rc1590, 0, sizeof rc1590);  rc1590.f_E = NULL; S_R26(&rc1590.f_V, p_V, 0); rc1590.f_HAVE = 1; rc1590.f_MODE = g_M_IN; rc1590.f_NEXT = p_NEXT; rc1590; }), 0);
{ R27 * rv1591 = l_A_1589;
return rv1591; }
rt_raise(RT_X_INIT);
}
static R27 * r_NODE_ARG(R17 * p_E, rt_int p_MODE, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1592; memset(&l_A_1592, 0, sizeof l_A_1592);
l_A_1592 = ((R27 *)rt_b_new(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1592)), ({ R27 rc1593; memset(&rc1593, 0, sizeof rc1593);  rc1593.f_E = p_E; S_R26(&rc1593.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1593.f_HAVE = 0; rc1593.f_MODE = p_MODE; rc1593.f_NEXT = p_NEXT; rc1593; }), 0);
{ R27 * rv1594 = l_A_1592;
return rv1594; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R9 p_NAME, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1595; memset(&l_Y_1595, 0, sizeof l_Y_1595);
l_Y_1595 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1595 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1595 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1596 = l_Y_1595;
return rv1596; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_USER_ROUTINE(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1597; memset(&l_Y_1597, 0, sizeof l_Y_1597);
l_Y_1597 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_1597 == NULL)) goto L_end1598;
{
if ((((*(R12 *)rt_nil_check(l_Y_1597))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1599 = 1;
return rv1599; }
}
l_Y_1597 = r_LOOKUP_NEXT(l_Y_1597);
}
RT_B_TICK();
} L_end1598: ;
l_Y_1597 = r_LOOKUP(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))));
for (;;) {
if ((l_Y_1597 == NULL)) goto L_end1600;
{
if ((((*(R12 *)rt_nil_check(l_Y_1597))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1601 = 1;
return rv1601; }
}
l_Y_1597 = r_LOOKUP_NEXT(l_Y_1597);
}
RT_B_TICK();
} L_end1600: ;
{ rt_int rv1602 = 0;
return rv1602; }
rt_raise(RT_X_INIT);
}
static R27 * r_QUAL_ARGS(rt_int p_LINE) { RT_B_TICK(); 
R17 * l_Q_1603; memset(&l_Q_1603, 0, sizeof l_Q_1603);
l_Q_1603 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_R_1604; memset(&l_R_1604, 0, sizeof l_R_1604);
l_R_1604 = NULL;
if ((l_Q_1603 == NULL))
{
{ R27 * rv1605 = NULL;
return rv1605; }
}
if (((((*(R17 *)rt_nil_check(l_Q_1603))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_R_1604 = r_VAL_ARG(r_ENUM_LITERAL(r_LIT_NODE(r_STR(((*(R17 *)rt_nil_check(l_Q_1603))).f_NAME, (((*(R17 *)rt_nil_check(l_Q_1603))).f_NAME).f_LEN), p_LINE), r_ROUNDINGS_TYPE()), NULL);
}
if ((!(((*(R17 *)rt_nil_check(l_Q_1603))).f_B == NULL)))
{
l_R_1604 = r_VAL_ARG(r_EXPR(((*(R17 *)rt_nil_check(l_Q_1603))).f_B, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_R_1604);
}
{ R27 * rv1606 = l_R_1604;
return rv1606; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R9 p_NAME, R26 p_A, R17 * p_B, R17 * p_C, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_ARGS_1607; memset(&l_ARGS_1607, 0, sizeof l_ARGS_1607);
l_ARGS_1607 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1608; memset(&l_Y_1608, 0, sizeof l_Y_1608);
l_Y_1608 = r_USER_OPERATOR(p_NAME, l_ARGS_1607, p_LINE);
if ((l_Y_1608 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1609 = r_CALL_SYM(l_Y_1608, l_ARGS_1607, p_LINE);
return rv1609; }
rt_raise(RT_X_INIT);
}
static void r_REQUIRE_MACHINE(rt_int p_LINE) { RT_B_TICK(); 
if ((!((*(R7 *)rt_nil_check(g_W))).f_MACHINE))
{
r_FAIL(p_LINE, rt_str("this is only permitted in a machine-dependent part (4.5.5.2)", 60));
}
}
static R9 r_RESCALE_C(R9 p_C, rt_int p_SFROM, rt_int p_STO) { RT_B_TICK(); 
if ((p_SFROM == p_STO))
{
{ R9 rv1610 = p_C;
return rv1610; }
}
if ((p_STO > p_SFROM))
{
{ R9 rv1611 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1611; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R9 rv1612 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1612; }
}
{ R9 rv1613 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1613; }
rt_raise(RT_X_INIT);
}
static R9 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R9 rv1614 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1614; }
rt_raise(RT_X_INIT);
}
static R9 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R9 p_SELF) { RT_B_TICK(); 
R22 * l_RT_1615; memset(&l_RT_1615, 0, sizeof l_RT_1615);
l_RT_1615 = r_REAL_TYPE(p_T);
R22 * l_VT_1616; memset(&l_VT_1616, 0, sizeof l_VT_1616);
l_VT_1616 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1616))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1615))).f_KIND == g_T_PTR)))
{
{ R9 rv1617 = (p_V).f_C;
return rv1617; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1616))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1616)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R9 rv1618 = (p_V).f_C;
return rv1618; }
}
if ((!r_SAME_CLASS(l_RT_1615, l_VT_1616)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1616), (r_TYPE_NAME(l_VT_1616)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1615), (r_TYPE_NAME(l_RT_1615)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1615))).f_KIND == g_T_INT))
{
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_RT_1615))).f_SCALE))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE == ((*(R22 *)rt_nil_check(l_RT_1615))).f_SCALE))
{
{ R9 rv1619 = r_RANGE_CHECK(l_RT_1615, (p_V).f_C, p_SELF);
return rv1619; }
}
{ R9 rv1620 = r_RANGE_CHECK(l_RT_1615, r_FMT3(rt_str("rt_b_conv(@, @, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(l_RT_1615))).f_SCALE)), p_SELF);
return rv1620; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1615))).f_KIND == g_T_FLOAT))
{
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_RT_1615))).f_SCALE) < r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1616))).f_SCALE)))
{
{ R9 rv1621 = r_RANGE_CHECK(l_RT_1615, r_FMT3(rt_str("rt_b_fconv(@, @, @, 1)", 22), (p_V).f_C, r_SINGLE_C(((*(R22 *)rt_nil_check(l_RT_1615))).f_SCALE), r_FLOAT_TRUNC()), p_SELF);
return rv1621; }
}
{ R9 rv1622 = r_RANGE_CHECK(l_RT_1615, (p_V).f_C, p_SELF);
return rv1622; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1615))).f_KIND == g_T_ENUM))
{
if (((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1615))).f_BASE))).f_UNORDERED && ((r_HAS_VALUES(l_RT_1615) || r_HAS_VALUES(l_VT_1616)))) && (!r_SAME_REPS(l_RT_1615, l_VT_1616))))
{
r_FAIL(p_LINE, rt_str("an UNORDERED value with ENUM_VAL_REP is assigned only with the same reptype (3.4.5)", 83));
}
{ R9 rv1623 = r_RANGE_CHECK(l_RT_1615, (p_V).f_C, p_SELF);
return rv1623; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1615))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1615))).f_KIND == g_T_BITS)))
{
r_SAME_CHARSET(l_RT_1615, l_VT_1616, p_LINE);
if (((((*(R22 *)rt_nil_check(l_RT_1615))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1616))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1615))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1616))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1615))).f_KIND == g_T_PTR))
{
if ((!r_IDENTICAL_TYPE(r_TARGET(l_RT_1615), r_TARGET(l_VT_1616))))
{
r_FAIL(p_LINE, rt_str("the ELEMENT_TYPE of the pointers are not identical (3.10.5)", 59));
}
{ R9 rv1624 = r_TARGET_ARGS_CHECK(r_TARGET(l_RT_1615), r_TARGET(l_VT_1616), (p_V).f_C);
return rv1624; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1615))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1615)) && (!r_HAS_ANY(l_VT_1616))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1615))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1616))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1615))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1615))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1616))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
if ((!r_SAME_EXTENTS(l_RT_1615, l_VT_1616)))
{
r_FAIL(p_LINE, rt_str("the arrays have different EXTENT attributes (3.8.5)", 51));
}
}
{ R9 rv1625 = (p_V).f_C;
return rv1625; }
rt_raise(RT_X_INIT);
}
static R9 r_STORE_CODE(R22 * p_T, R9 p_LV, R26 p_V, rt_int p_LINE, R9 p_SELF) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1626; memset(&l_ARGS_1626, 0, sizeof l_ARGS_1626);
l_ARGS_1626 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1627; memset(&l_Y_1627, 0, sizeof l_Y_1627);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_SQUAL == NULL)))
{
{
R17 * l_SAVED_Q_1628; memset(&l_SAVED_Q_1628, 0, sizeof l_SAVED_Q_1628);
l_SAVED_Q_1628 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_X_1629; memset(&l_X_1629, 0, sizeof l_X_1629);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
l_X_1629 = r_QUAL_ARGS(p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1628;
if ((!(l_X_1629 == NULL)))
{
{
R27 * l_P_1630; memset(&l_P_1630, 0, sizeof l_P_1630);
l_P_1630 = l_X_1629;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_P_1630))).f_NEXT == NULL)) goto L_end1631;
{
l_P_1630 = ((*(R27 *)rt_nil_check(l_P_1630))).f_NEXT;
}
RT_B_TICK();
} L_end1631: ;
((*(R27 *)rt_nil_check(l_P_1630))).f_NEXT = ((*(R27 *)rt_nil_check(l_ARGS_1626))).f_NEXT;
((*(R27 *)rt_nil_check(l_ARGS_1626))).f_NEXT = l_X_1629;
}
}
}
}
{
R27 * l_LAST_1632; memset(&l_LAST_1632, 0, sizeof l_LAST_1632);
l_LAST_1632 = l_ARGS_1626;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_LAST_1632))).f_NEXT == NULL)) goto L_end1633;
{
l_LAST_1632 = ((*(R27 *)rt_nil_check(l_LAST_1632))).f_NEXT;
}
RT_B_TICK();
} L_end1633: ;
((*(R27 *)rt_nil_check(l_LAST_1632))).f_MODE = g_M_OUT;
l_Y_1627 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1626, p_LINE, 0);
if ((l_Y_1627 == NULL))
{
((*(R27 *)rt_nil_check(l_LAST_1632))).f_MODE = g_M_INOUT;
l_Y_1627 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1626, p_LINE, 0);
}
}
if ((l_Y_1627 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R9 rv1634 = r_CATS((r_CALL_SYM(l_Y_1627, l_ARGS_1626, p_LINE)).f_C, rt_str(";", 1));
return rv1634; }
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
if ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, (p_V).f_T)))
{
{ R9 rv1635 = r_COMPONENT_STORE(p_T, (p_V).f_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF), p_LINE);
return rv1635; }
}
}
{ R9 rv1636 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1636; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ABS_PART(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ rt_int rv1637 = 1;
return rv1637; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{ rt_int rv1638 = r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM);
return rv1638; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R24 * l_F_1639; memset(&l_F_1639, 0, sizeof l_F_1639);
l_F_1639 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1639 == NULL)) goto L_end1640;
{
if ((((*(R24 *)rt_nil_check(l_F_1639))).f_KIND == ((rt_int)0LL)))
{
if (r_HAS_ABS_PART(((*(R24 *)rt_nil_check(l_F_1639))).f_T))
{
{ rt_int rv1641 = 1;
return rv1641; }
}
}
l_F_1639 = ((*(R24 *)rt_nil_check(l_F_1639))).f_NEXT;
}
RT_B_TICK();
} L_end1640: ;
}
}
{ rt_int rv1642 = 0;
return rv1642; }
rt_raise(RT_X_INIT);
}
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT) { RT_B_TICK(); 
if (((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_KIND == g_T_ARR))))
{
{ rt_int rv1643 = 0;
return rv1643; }
}
if ((!r_IS_NUMERIC_OR_ENUM(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM))))
{
{ rt_int rv1644 = 0;
return rv1644; }
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1645 = 0;
return rv1645; }
}
{ rt_int rv1646 = (!r_SAME_RANGE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM));
return rv1646; }
rt_raise(RT_X_INIT);
}
static R9 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R9 p_LV, R9 p_RV, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R9 rv1647 = r_STORE_CODE(p_T, p_LV, r_MKET(p_RV, p_VT), p_LINE, r_NO_TEXT());
return rv1647; }
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, p_VT)))))
{
{
R9 l_D_1648; memset(&l_D_1648, 0, sizeof l_D_1648);
S_R9(&l_D_1648, r_NEW_NAME(rt_str("ad", 2)), 0);
R9 l_S_1649; memset(&l_S_1649, 0, sizeof l_S_1649);
S_R9(&l_S_1649, r_NEW_NAME(rt_str("as", 2)), 0);
R9 l_I_1650; memset(&l_I_1650, 0, sizeof l_I_1650);
S_R9(&l_I_1650, r_NEW_NAME(rt_str("ai", 2)), 0);
R9 l_N_1651; memset(&l_N_1651, 0, sizeof l_N_1651);
S_R9(&l_N_1651, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R22 * l_VE_1652; memset(&l_VE_1652, 0, sizeof l_VE_1652);
l_VE_1652 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM;
R9 l_R_1653; memset(&l_R_1653, 0, sizeof l_R_1653);
S_R9(&l_R_1653, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1648, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R9(&l_R_1653, r_FMT3(rt_str("@@ = @; if (!rt_b_same_extents(", 31), l_R_1653, l_S_1649, p_RV), 0);
S_R9(&l_R_1653, r_FMT4(rt_str("@@, @->lo, @->hi, ", 18), l_R_1653, l_N_1651, l_D_1648, l_D_1648), 0);
S_R9(&l_R_1653, r_FMT3(rt_str("@@.lo, @.hi)) rt_raise(RT_B_SIZE); ", 35), l_R_1653, l_S_1649, l_S_1649), 0);
S_R9(&l_R_1653, r_FMT4(rt_str("@rt_int @n = rt_b_extent(@, @->lo, ", 35), l_R_1653, l_I_1650, l_N_1651, l_D_1648), 0);
S_R9(&l_R_1653, r_FMT2(rt_str("@@->hi);", 8), l_R_1653, l_D_1648), 0);
if (r_ELEMENTS_NEED_CHECK(p_T, p_VT))
{
S_R9(&l_R_1653, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1653, l_I_1650, l_I_1650, l_I_1650), 0);
S_R9(&l_R_1653, r_FMT3(rt_str("@@++) (void)@;", 14), l_R_1653, l_I_1650, r_RANGE_CHECK(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_S_1649, l_I_1650), r_NO_TEXT())), 0);
}
S_R9(&l_R_1653, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1653, l_I_1650, l_I_1650, l_I_1650), 0);
if (((r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_REC)) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_ARR)))
{
S_R9(&l_R_1653, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1653, l_I_1650, r_COMPONENT_STORE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, l_VE_1652, r_FMT2(rt_str("@->p[@]", 7), l_D_1648, l_I_1650), r_FMT2(rt_str("@.p[@]", 6), l_S_1649, l_I_1650), p_LINE)), 0);
}
else
{
S_R9(&l_R_1653, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1653, l_I_1650, r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@->p[@]", 7), l_D_1648, l_I_1650), r_FMT2(rt_str("@.p[@]", 6), l_S_1649, l_I_1650))), 0);
}
{ R9 rv1654 = l_R_1653;
return rv1654; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_D_1655; memset(&l_D_1655, 0, sizeof l_D_1655);
S_R9(&l_D_1655, r_NEW_NAME(rt_str("rd", 2)), 0);
R9 l_S_1656; memset(&l_S_1656, 0, sizeof l_S_1656);
S_R9(&l_S_1656, r_NEW_NAME(rt_str("rs", 2)), 0);
R24 * l_F_1657; memset(&l_F_1657, 0, sizeof l_F_1657);
l_F_1657 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_R_1658; memset(&l_R_1658, 0, sizeof l_R_1658);
S_R9(&l_R_1658, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1655, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R9(&l_R_1658, r_FMT3(rt_str("@@ = @;", 7), l_R_1658, l_S_1656, p_RV), 0);
for (;;) {
if ((l_F_1657 == NULL)) goto L_end1659;
{
{
R9 l_DF_1660; memset(&l_DF_1660, 0, sizeof l_DF_1660);
S_R9(&l_DF_1660, r_FMT2(rt_str("@->@", 4), l_D_1655, ((*(R24 *)rt_nil_check(l_F_1657))).f_CNAME), 0);
R9 l_SF_1661; memset(&l_SF_1661, 0, sizeof l_SF_1661);
S_R9(&l_SF_1661, r_FMT2(rt_str("@.@", 3), l_S_1656, ((*(R24 *)rt_nil_check(l_F_1657))).f_CNAME), 0);
if (((((*(R24 *)rt_nil_check(l_F_1657))).f_KIND == ((rt_int)1LL)) || (((((*(R24 *)rt_nil_check(l_F_1657))).f_KIND == ((rt_int)2LL)) && (!r_HAS_ANY(p_T))))))
{
S_R9(&l_R_1658, r_FMT2(rt_str("@ if (!(@)) rt_raise(RT_B_TYPE_MISMATCH);", 41), l_R_1658, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1657))).f_T, l_DF_1660, l_SF_1661)), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1657))).f_KIND == ((rt_int)2LL)))
{
S_R9(&l_R_1658, r_FMT3(rt_str("@ @ = @;", 8), l_R_1658, l_DF_1660, l_SF_1661), 0);
}
else
{
S_R9(&l_R_1658, r_FMT2(rt_str("@ @", 3), l_R_1658, r_COMPONENT_STORE(((*(R24 *)rt_nil_check(l_F_1657))).f_T, ((*(R24 *)rt_nil_check(l_F_1657))).f_T, l_DF_1660, l_SF_1661, p_LINE)), 0);
}
}
l_F_1657 = ((*(R24 *)rt_nil_check(l_F_1657))).f_NEXT;
}
RT_B_TICK();
} L_end1659: ;
{ R9 rv1662 = r_CATS(l_R_1658, rt_str(" }", 2));
return rv1662; }
}
}
{ R9 rv1663 = r_ASSIGN_CODE(p_T, p_LV, p_RV);
return rv1663; }
rt_raise(RT_X_INIT);
}
static R9 r_COMPONENT_EQUAL(R22 * p_T, R9 p_A, R9 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1664; memset(&l_ARGS_1664, 0, sizeof l_ARGS_1664);
l_ARGS_1664 = r_VAL_ARG(r_MKET(p_A, p_T), r_VAL_ARG(r_MKET(p_B, p_T), NULL));
R12 * l_Y_1665; memset(&l_Y_1665, 0, sizeof l_Y_1665);
l_Y_1665 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1664, p_LINE);
if ((l_Y_1665 == NULL))
{
r_FAILT(p_LINE, rt_str("no EQUAL_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R9 rv1666 = (r_CALL_SYM(l_Y_1665, l_ARGS_1664, p_LINE)).f_C;
return rv1666; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_X_1667; memset(&l_X_1667, 0, sizeof l_X_1667);
S_R9(&l_X_1667, r_NEW_NAME(rt_str("ea", 2)), 0);
R9 l_Z_1668; memset(&l_Z_1668, 0, sizeof l_Z_1668);
S_R9(&l_Z_1668, r_NEW_NAME(rt_str("eb", 2)), 0);
R9 l_I_1669; memset(&l_I_1669, 0, sizeof l_I_1669);
S_R9(&l_I_1669, r_NEW_NAME(rt_str("ei", 2)), 0);
R9 l_N_1670; memset(&l_N_1670, 0, sizeof l_N_1670);
S_R9(&l_N_1670, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R9 l_R_1671; memset(&l_R_1671, 0, sizeof l_R_1671);
S_R9(&l_R_1671, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1667, p_A, l_Z_1668), 0);
S_R9(&l_R_1671, r_FMT4(rt_str("@@; int @r = rt_b_same_extents(@, ", 34), l_R_1671, p_B, l_I_1669, l_N_1670), 0);
S_R9(&l_R_1671, r_FMT4(rt_str("@@.lo, @.hi, @.lo, ", 19), l_R_1671, l_X_1667, l_X_1667, l_Z_1668), 0);
S_R9(&l_R_1671, r_FMT4(rt_str("@@.hi); rt_int @n = rt_b_extent(@, ", 35), l_R_1671, l_Z_1668, l_I_1669, l_N_1670), 0);
S_R9(&l_R_1671, r_FMT3(rt_str("@@.lo, @.hi);", 13), l_R_1671, l_X_1667, l_X_1667), 0);
S_R9(&l_R_1671, r_FMT4(rt_str("@ for (rt_int @ = 0; @r && @ < ", 31), l_R_1671, l_I_1669, l_I_1669, l_I_1669), 0);
S_R9(&l_R_1671, r_FMT4(rt_str("@@n; @++) @r = ", 15), l_R_1671, l_I_1669, l_I_1669, l_I_1669), 0);
S_R9(&l_R_1671, r_FMT2(rt_str("@@;", 3), l_R_1671, r_COMPONENT_EQUAL(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_X_1667, l_I_1669), r_FMT2(rt_str("@.p[@]", 6), l_Z_1668, l_I_1669), p_LINE)), 0);
{ R9 rv1672 = r_FMT2(rt_str("@ @r; })", 8), l_R_1671, l_I_1669);
return rv1672; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_X_1673; memset(&l_X_1673, 0, sizeof l_X_1673);
S_R9(&l_X_1673, r_NEW_NAME(rt_str("ra", 2)), 0);
R9 l_Z_1674; memset(&l_Z_1674, 0, sizeof l_Z_1674);
S_R9(&l_Z_1674, r_NEW_NAME(rt_str("rb", 2)), 0);
R24 * l_F_1675; memset(&l_F_1675, 0, sizeof l_F_1675);
l_F_1675 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_R_1676; memset(&l_R_1676, 0, sizeof l_R_1676);
S_R9(&l_R_1676, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1673, p_A, l_Z_1674), 0);
R9 l_EQ_1677; memset(&l_EQ_1677, 0, sizeof l_EQ_1677);
S_R9(&l_EQ_1677, r_MK(rt_str("1", 1)), 0);
S_R9(&l_R_1676, r_FMT2(rt_str("@@;", 3), l_R_1676, p_B), 0);
for (;;) {
if ((l_F_1675 == NULL)) goto L_end1678;
{
{
R9 l_C_1679; memset(&l_C_1679, 0, sizeof l_C_1679);
S_R9(&l_C_1679, r_COMPONENT_EQUAL(((*(R24 *)rt_nil_check(l_F_1675))).f_T, r_FMT2(rt_str("@.@", 3), l_X_1673, ((*(R24 *)rt_nil_check(l_F_1675))).f_CNAME), r_FMT2(rt_str("@.@", 3), l_Z_1674, ((*(R24 *)rt_nil_check(l_F_1675))).f_CNAME), p_LINE), 0);
if (((((*(R24 *)rt_nil_check(l_F_1675))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R9(&l_EQ_1677, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1677, r_VARIANT_COND(l_F_1675, p_T, l_X_1673), l_C_1679), 0);
}
else
{
S_R9(&l_EQ_1677, r_FMT2(rt_str("@ && @", 6), l_EQ_1677, l_C_1679), 0);
}
}
l_F_1675 = ((*(R24 *)rt_nil_check(l_F_1675))).f_NEXT;
}
RT_B_TICK();
} L_end1678: ;
{ R9 rv1680 = r_FMT2(rt_str("@ @; })", 7), l_R_1676, l_EQ_1677);
return rv1680; }
}
}
{ R9 rv1681 = r_EQUAL_CODE(p_T, p_A, p_B);
return rv1681; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R17 * p_E) { RT_B_TICK(); 
{ R26 rv1682 = r_STD_RESULT(r_UNARY1(p_E));
return rv1682; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY1(R17 * p_E) { RT_B_TICK(); 
R26 l_A_1683; memset(&l_A_1683, 0, sizeof l_A_1683);
S_R26(&l_A_1683, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1684; memset(&l_T_1684, 0, sizeof l_T_1684);
l_T_1684 = (l_A_1683).f_T;
R9 l_OP_1685; memset(&l_OP_1685, 0, sizeof l_OP_1685);
S_R9(&l_OP_1685, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
if (((((*(R22 *)rt_nil_check(l_T_1684))).f_GENP).f_LEN > ((rt_int)0LL)))
{
r_REQUIRE_WHERE(r_OP_NAME(l_OP_1685, 1), ((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
if (((((*(R22 *)rt_nil_check(l_T_1684))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_OP_NAME(l_OP_1685, 1))))
{
{
R27 * l_ARGS_1686; memset(&l_ARGS_1686, 0, sizeof l_ARGS_1686);
l_ARGS_1686 = r_VAL_ARG(l_A_1683, r_QUAL_ARGS(((*(R17 *)rt_nil_check(p_E))).f_LINE));
R12 * l_Y_1687; memset(&l_Y_1687, 0, sizeof l_Y_1687);
l_Y_1687 = r_USER_OPERATOR(r_OP_NAME(l_OP_1685, 1), l_ARGS_1686, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if (((l_Y_1687 == NULL) && (!(((*(R27 *)rt_nil_check(l_ARGS_1686))).f_NEXT == NULL))))
{
((*(R27 *)rt_nil_check(l_ARGS_1686))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(r_OP_NAME(l_OP_1685, 1), l_ARGS_1686, ((*(R17 *)rt_nil_check(p_E))).f_LINE) == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("no operation takes the precision or rounding of the expression ", 63), rt_str("as arguments (D.5): ", 20)), r_OP_NAME(l_OP_1685, 1));
}
}
if ((!(l_Y_1687 == NULL)))
{
{ R26 rv1688 = r_CALL_SYM(l_Y_1687, l_ARGS_1686, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1688; }
}
if ((((*(R22 *)rt_nil_check(l_T_1684))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1684));
}
}
}
if (r_TEQS(l_OP_1685, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1684))).f_KIND == g_T_BOOL))
{
{ R26 rv1689 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1683).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1689; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1684))).f_KIND == g_T_BITS))
{
{ R26 rv1690 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1683).f_C), l_T_1684);
return rv1690; }
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1684))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1685, rt_str("-", 1)))
{
{ R26 rv1691 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1683).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1684))).f_SCALE));
return rv1691; }
}
{ R26 rv1692 = r_MKET((l_A_1683).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1684))).f_SCALE));
return rv1692; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1684))).f_KIND == g_T_FLOAT))
{
{
R22 * l_FT_1693; memset(&l_FT_1693, 0, sizeof l_FT_1693);
l_FT_1693 = r_FLOAT_TYPE(r_MAX_INT(((*(R22 *)rt_nil_check(l_T_1684))).f_SCALE, r_QUAL_PREC()));
if (r_TEQS(l_OP_1685, rt_str("-", 1)))
{
{ R26 rv1694 = r_MKET(r_FLOAT_OP(l_OP_1685, r_MK(rt_str("0.0", 3)), (l_A_1683).f_C, l_FT_1693), l_FT_1693);
return rv1694; }
}
{ R26 rv1695 = r_MKET((l_A_1683).f_C, l_FT_1693);
return rv1695; }
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1684));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R17 * p_E) { RT_B_TICK(); 
{ rt_int rv1696 = (((((((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) && (!r_NAMES_OBJECT(((*(R17 *)rt_nil_check(p_E))).f_NAME)))) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R17 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1696; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R17 * p_E) { RT_B_TICK(); 
R9 l_OP_1697; memset(&l_OP_1697, 0, sizeof l_OP_1697);
S_R9(&l_OP_1697, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1698; memset(&l_A_1698, 0, sizeof l_A_1698);
R26 l_B_1699; memset(&l_B_1699, 0, sizeof l_B_1699);
if ((r_TEQS(l_OP_1697, rt_str("&", 1)) || r_TEQS(l_OP_1697, rt_str("!", 1))))
{
{
R23 l_MA_1700; memset(&l_MA_1700, 0, sizeof l_MA_1700);
S_R23(&l_MA_1700, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R9 l_CA_1701; memset(&l_CA_1701, 0, sizeof l_CA_1701);
S_R9(&l_CA_1701, r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R9 l_CB_1702; memset(&l_CB_1702, 0, sizeof l_CB_1702);
S_R9(&l_CB_1702, r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1697, rt_str("&", 1)))
{
{ R26 rv1703 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1701, l_CB_1702), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1703; }
}
{ R26 rv1704 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1701, l_CB_1702), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1704; }
}
}
if ((r_IS_LITERALISH(((*(R17 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R17 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1699, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1698, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, (l_B_1699).f_T), 0);
}
else
{
S_R26(&l_A_1698, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1699, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, (l_A_1698).f_T), 0);
}
{ R26 rv1705 = r_STD_RESULT(r_APPLY_OPERATOR(p_E, l_OP_1697, l_A_1698, l_B_1699));
return rv1705; }
rt_raise(RT_X_INIT);
}
static R26 r_STD_RESULT(R26 p_V) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R26 rv1706 = p_V;
return rv1706; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((p_V).f_T)))).f_KIND == g_T_INT)))
{
{ R26 rv1707 = p_V;
return rv1707; }
}
{ R26 rv1708 = ({ R26 rc1709; memset(&rc1709, 0, sizeof rc1709);  S_R9(&rc1709.f_C, r_STD_CHECK((p_V).f_C), 0); rc1709.f_T = (p_V).f_T; rc1709.f_LVAL = 0; S_R9(&rc1709.f_SELF, (p_V).f_SELF, 0); rc1709; });
return rv1708; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1710; memset(&l_AT_1710, 0, sizeof l_AT_1710);
l_AT_1710 = (p_A).f_T;
R22 * l_BT_1711; memset(&l_BT_1711, 0, sizeof l_BT_1711);
l_BT_1711 = (p_B).f_T;
rt_int l_LINE_1712; memset(&l_LINE_1712, 0, sizeof l_LINE_1712);
l_LINE_1712 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
{
R9 l_NAME_1713; memset(&l_NAME_1713, 0, sizeof l_NAME_1713);
S_R9(&l_NAME_1713, r_OP_NAME(p_OP, 0), 0);
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
S_R9(&l_NAME_1713, r_MKN(rt_b_cat(rt_str("MD_", 3), r_STR(l_NAME_1713, (l_NAME_1713).f_LEN))), 0);
}
if ((((((*(R22 *)rt_nil_check(l_AT_1710))).f_GENP).f_LEN > ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_BT_1711))).f_GENP).f_LEN > ((rt_int)0LL))))
{
r_REQUIRE_WHERE(l_NAME_1713, l_LINE_1712);
}
if (((r_HAS_USER_ROUTINE(l_NAME_1713) || (((*(R22 *)rt_nil_check(l_AT_1710))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1711))).f_KIND == g_T_ABS)))
{
{
R27 * l_ARGS_1714; memset(&l_ARGS_1714, 0, sizeof l_ARGS_1714);
l_ARGS_1714 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R27 * l_EXTRA_1715; memset(&l_EXTRA_1715, 0, sizeof l_EXTRA_1715);
l_EXTRA_1715 = r_QUAL_ARGS(l_LINE_1712);
R12 * l_Y_1716; memset(&l_Y_1716, 0, sizeof l_Y_1716);
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
l_EXTRA_1715 = r_VAL_ARG(r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_D, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_EXTRA_1715);
}
if ((!(l_EXTRA_1715 == NULL)))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1714))).f_NEXT))).f_NEXT = l_EXTRA_1715;
l_Y_1716 = r_USER_OPERATOR(l_NAME_1713, l_ARGS_1714, l_LINE_1712);
if ((!(l_Y_1716 == NULL)))
{
{ R26 rv1717 = r_CALL_SYM(l_Y_1716, l_ARGS_1714, l_LINE_1712);
return rv1717; }
}
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1714))).f_NEXT))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(l_NAME_1713, l_ARGS_1714, l_LINE_1712) == NULL)))
{
r_FAILT(l_LINE_1712, rt_b_cat(rt_str("no operation takes the scale, precision or rounding of the ", 59), rt_str("expression as arguments (D.5): ", 31)), l_NAME_1713);
}
}
else
{
l_Y_1716 = r_USER_OPERATOR(l_NAME_1713, l_ARGS_1714, l_LINE_1712);
if ((!(l_Y_1716 == NULL)))
{
{ R26 rv1718 = r_CALL_SYM(l_Y_1716, l_ARGS_1714, l_LINE_1712);
return rv1718; }
}
}
if ((r_TEQS(p_OP, rt_str("<>", 2)) && (((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{
R12 * l_Q_1719; memset(&l_Q_1719, 0, sizeof l_Q_1719);
l_Q_1719 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1714, l_LINE_1712);
if ((!(l_Q_1719 == NULL)))
{
{ R26 rv1720 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1719, l_ARGS_1714, l_LINE_1712)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1720; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1710))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1711))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1712, rt_str("no such operation for the abstract type: ", 41), l_NAME_1713);
}
}
}
}
if ((!r_PREDEFINED_ROUNDING()))
{
r_FAILT(l_LINE_1712, rt_str("no operation is defined for the rounding mode ", 46), ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1721 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1721; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1722 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1722; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1710))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1711))).f_KIND == g_T_INT)))
{
{ R26 rv1723 = r_MKET(r_FIXED_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1723; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1710))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1711))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1724 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1724; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1710))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1710, l_BT_1711)))
{
if ((r_IS_UNORDERED(l_AT_1710) || r_IS_UNORDERED(l_BT_1711)))
{
r_FAIL(l_LINE_1712, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1725 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1725; }
}
r_FAILT(l_LINE_1712, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1710))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1711))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1710))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1711))).f_KIND == g_T_BITS)))))
{
r_SAME_CHARSET(l_AT_1710, l_BT_1711, l_LINE_1712);
{
R22 * l_T_1726; memset(&l_T_1726, 0, sizeof l_T_1726);
l_T_1726 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1710))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1726))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1710))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1710))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1711))).f_MLEN).f_OK))
{
S_R23(&((*(R22 *)rt_nil_check(l_T_1726))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1710))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1711))).f_MLEN).f_V)), 0);
S_R9(&((*(R22 *)rt_nil_check(l_T_1726))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1726))).f_MLEN).f_V), 0);
}
{ R26 rv1727 = r_MKET(r_FMT2(rt_str("rt_b_cat(@, @)", 14), (p_A).f_C, (p_B).f_C), l_T_1726);
return rv1727; }
}
}
r_FAIL(l_LINE_1712, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1710))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1711))).f_KIND == g_T_BITS)))
{
{ R26 rv1728 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1710);
return rv1728; }
}
r_FAILT(l_LINE_1712, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1710))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1711))).f_KIND == g_T_INT)))
{
{ R26 rv1729 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1729; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1710))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1711))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1730; memset(&l_T_1730, 0, sizeof l_T_1730);
l_T_1730 = r_FLOAT_TYPE(r_MAX_INT(r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1710))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1711))).f_SCALE), r_QUAL_PREC()));
if ((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))
{
{ R26 rv1731 = r_MKET(r_FLOAT_OP(p_OP, (p_A).f_C, (p_B).f_C, l_T_1730), l_T_1730);
return rv1731; }
}
if (r_TEQS(p_OP, rt_str("**", 2)))
{
r_FAIL(l_LINE_1712, rt_str("** has no predefined meaning for floating point values (3.3.4.2)", 64));
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1710))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1711))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1710))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1711))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1712, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1712, rt_b_cat(rt_b_cat(rt_b_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1710), (r_TYPE_NAME(l_AT_1710)).f_LEN)));
rt_raise(RT_X_INIT);
}
static rt_int r_IDENTICAL_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1732; memset(&l_RA_1732, 0, sizeof l_RA_1732);
l_RA_1732 = r_REAL_TYPE(p_A);
R22 * l_RB_1733; memset(&l_RB_1733, 0, sizeof l_RB_1733);
l_RB_1733 = r_REAL_TYPE(p_B);
if ((p_A == p_B))
{
{ rt_int rv1734 = 1;
return rv1734; }
}
if (((!r_SAME_TYPE(p_A, p_B)) || (!r_SAME_RANGE(p_A, p_B))))
{
{ rt_int rv1735 = 0;
return rv1735; }
}
if (((((*(R22 *)rt_nil_check(l_RA_1732))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RA_1732))).f_KIND == g_T_BITS)))
{
if (((((*(R22 *)rt_nil_check(l_RA_1732))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_1733))).f_MLEN).f_OK))
{
{ rt_int rv1736 = ((((*(R22 *)rt_nil_check(l_RA_1732))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_1733))).f_MLEN).f_V);
return rv1736; }
}
}
else if ((((*(R22 *)rt_nil_check(l_RA_1732))).f_KIND == g_T_ARR))
{
{ rt_int rv1737 = (r_SAME_EXTENTS(l_RA_1732, l_RB_1733) && r_IDENTICAL_TYPE(((*(R22 *)rt_nil_check(l_RA_1732))).f_ELEM, ((*(R22 *)rt_nil_check(l_RB_1733))).f_ELEM));
return rv1737; }
}
{ rt_int rv1738 = 1;
return rv1738; }
rt_raise(RT_X_INIT);
}
static R9 r_TARGET_ARGS_CHECK(R22 * p_RT, R22 * p_VT, R9 p_C) { RT_B_TICK(); 
R22 * l_A_1739; memset(&l_A_1739, 0, sizeof l_A_1739);
l_A_1739 = r_REAL_TYPE(p_RT);
R22 * l_B_1740; memset(&l_B_1740, 0, sizeof l_B_1740);
l_B_1740 = r_REAL_TYPE(p_VT);
R9 l_R_1741; memset(&l_R_1741, 0, sizeof l_R_1741);
S_R9(&l_R_1741, r_MK(rt_str("", 0)), 0);
if (((!(((*(R22 *)rt_nil_check(l_A_1739))).f_KIND == g_T_REC)) || (!(((*(R22 *)rt_nil_check(l_B_1740))).f_KIND == g_T_REC))))
{
{ R9 rv1742 = p_C;
return rv1742; }
}
{
R24 * l_F_1743; memset(&l_F_1743, 0, sizeof l_F_1743);
l_F_1743 = ((*(R22 *)rt_nil_check(l_A_1739))).f_FIELDS;
R25 * l_P_1744; memset(&l_P_1744, 0, sizeof l_P_1744);
l_P_1744 = ((*(R22 *)rt_nil_check(l_A_1739))).f_ARGS;
R25 * l_Q_1745; memset(&l_Q_1745, 0, sizeof l_Q_1745);
l_Q_1745 = ((*(R22 *)rt_nil_check(l_B_1740))).f_ARGS;
for (;;) {
if ((((l_F_1743 == NULL) || (l_P_1744 == NULL)) || (l_Q_1745 == NULL))) goto L_end1746;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1743))).f_KIND == ((rt_int)0LL))))
{
if (((((!((*(R25 *)rt_nil_check(l_P_1744))).f_ANYARG) && (!r_IS_GEN_ARG(l_P_1744))) && (!r_IS_GEN_ARG(l_Q_1745))) && (!(((((*(R25 *)rt_nil_check(l_P_1744))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_1745))).f_MLO).f_OK)))))
{
S_R9(&l_R_1741, r_FMT3(rt_str("@ if (p && p->@ != (@)) rt_raise(RT_B_TYPE_MISMATCH);", 53), l_R_1741, ((*(R24 *)rt_nil_check(l_F_1743))).f_CNAME, ((*(R25 *)rt_nil_check(l_P_1744))).f_LO), 0);
}
l_P_1744 = ((*(R25 *)rt_nil_check(l_P_1744))).f_NEXT;
l_Q_1745 = ((*(R25 *)rt_nil_check(l_Q_1745))).f_NEXT;
}
l_F_1743 = ((*(R24 *)rt_nil_check(l_F_1743))).f_NEXT;
}
RT_B_TICK();
} L_end1746: ;
}
if (((l_R_1741).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1747 = p_C;
return rv1747; }
}
{ R9 rv1748 = r_FMT3(rt_str("({ __typeof__(@) p = (@);@ p; })", 32), p_C, p_C, l_R_1741);
return rv1748; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_EXTENTS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R25 * l_P_1749; memset(&l_P_1749, 0, sizeof l_P_1749);
l_P_1749 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_A)))).f_BOUNDS;
R25 * l_Q_1750; memset(&l_Q_1750, 0, sizeof l_Q_1750);
l_Q_1750 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_B)))).f_BOUNDS;
for (;;) {
if (((l_P_1749 == NULL) || (l_Q_1750 == NULL))) goto L_end1751;
{
if (((((((((((*(R25 *)rt_nil_check(l_P_1749))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_P_1749))).f_MHI).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1750))).f_MLO).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1750))).f_MHI).f_OK) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1749))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1749))).f_HI))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1750))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1750))).f_HI))))
{
if ((!(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_P_1749))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_P_1749))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)) == r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_Q_1750))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_Q_1750))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)))))
{
{ rt_int rv1752 = 0;
return rv1752; }
}
}
l_P_1749 = ((*(R25 *)rt_nil_check(l_P_1749))).f_NEXT;
l_Q_1750 = ((*(R25 *)rt_nil_check(l_Q_1750))).f_NEXT;
}
RT_B_TICK();
} L_end1751: ;
{ rt_int rv1753 = 1;
return rv1753; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_VALUES(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv1754 = 0;
return rv1754; }
}
{ rt_int rv1755 = (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL));
return rv1755; }
rt_raise(RT_X_INIT);
}
static R22 * r_FLOAT_TYPE(rt_int p_P) { RT_B_TICK(); 
R22 * l_T_1756; memset(&l_T_1756, 0, sizeof l_T_1756);
l_T_1756 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1756))).f_SCALE = p_P;
{ R22 * rv1757 = l_T_1756;
return rv1757; }
rt_raise(RT_X_INIT);
}
static R9 r_SINGLE_C(rt_int p_P) { RT_B_TICK(); 
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
{ R9 rv1758 = r_MK(rt_str("1", 1));
return rv1758; }
}
{ R9 rv1759 = r_MK(rt_str("0", 1));
return rv1759; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_TRUNC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9)) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8))))
{
{ R9 rv1760 = r_MK(rt_str("1", 1));
return rv1760; }
}
}
{ R9 rv1761 = r_MK(rt_str("0", 1));
return rv1761; }
rt_raise(RT_X_INIT);
}
static rt_int r_QUAL_PREC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B == NULL)))
{
{ rt_int rv1762 = (r_MANIFEST(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B)).f_V;
return rv1762; }
}
}
{ rt_int rv1763 = ((rt_int)0LL);
return rv1763; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_OP(R9 p_OP, R9 p_A, R9 p_B, R22 * p_T) { RT_B_TICK(); 
{ R9 rv1764 = r_CAT(r_FMT3(rt_str("rt_b_fop('@', @, @, ", 20), p_OP, p_A, p_B), r_FMT2(rt_str("@, @)", 5), r_SINGLE_C(((*(R22 *)rt_nil_check(p_T))).f_SCALE), r_FLOAT_TRUNC()));
return rv1764; }
rt_raise(RT_X_INIT);
}
static R9 r_LOWER_OP(R9 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R9 rv1765 = r_MK(rt_str("and", 3));
return rv1765; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R9 rv1766 = r_MK(rt_str("or", 2));
return rv1766; }
}
{ R9 rv1767 = r_MK(rt_str("xor", 3));
return rv1767; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { RT_B_TICK(); 
if ((p_A > p_B))
{
{ rt_int rv1768 = p_A;
return rv1768; }
}
{ rt_int rv1769 = p_B;
return rv1769; }
rt_raise(RT_X_INIT);
}
static R9 r_FIXED_COMPARE(R26 p_A, R26 p_B, R9 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE == ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE))
{
{ R9 rv1770 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv1770; }
}
{ R9 rv1771 = r_CAT(r_FMT3(rt_str("(rt_b_cmp(@, @, @", 17), (p_A).f_C, r_NUM(((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE), (p_B).f_C), r_FMT2(rt_str(", @) @ 0)", 9), r_NUM(((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE), p_OP));
return rv1771; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1772; memset(&l_AT_1772, 0, sizeof l_AT_1772);
l_AT_1772 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1773; memset(&l_BT_1773, 0, sizeof l_BT_1773);
l_BT_1773 = r_REAL_TYPE((p_B).f_T);
R9 l_R_1774; memset(&l_R_1774, 0, sizeof l_R_1774);
if (((((*(R22 *)rt_nil_check(l_AT_1772))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1773))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1772))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1773))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1772))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1773))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R9(&l_R_1774, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1772))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1773))).f_KIND == g_T_INT)))
{
S_R9(&l_R_1774, r_FIXED_COMPARE(p_A, p_B, r_MK(rt_str("==", 2))), 0);
}
else
{
if ((!r_SAME_CLASS(l_AT_1772, l_BT_1773)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1772))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
r_SAME_CHARSET(l_AT_1772, l_BT_1773, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R22 *)rt_nil_check(l_AT_1772))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1772) || r_HAS_ANY(l_BT_1773)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
if ((((*(R22 *)rt_nil_check(l_AT_1772))).f_KIND == g_T_ARR))
{
if ((!r_SAME_EXTENTS(l_AT_1772, l_BT_1773)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("arrays of different EXTENT attributes are compared (3.8.4.1)", 60));
}
}
if ((((*(R22 *)rt_nil_check(l_AT_1772))).f_KIND == g_T_REC))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_AT_1772))).f_ARGS, ((*(R22 *)rt_nil_check(l_BT_1773))).f_ARGS)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("records of different types are compared (3.9.4.1)", 49));
}
}
if (r_HAS_ABS_PART(l_AT_1772))
{
S_R9(&l_R_1774, r_COMPONENT_EQUAL(l_AT_1772, (p_A).f_C, (p_B).f_C, ((*(R17 *)rt_nil_check(p_E))).f_LINE), 0);
}
else
{
S_R9(&l_R_1774, r_EQUAL_CODE(l_AT_1772, (p_A).f_C, (p_B).f_C), 0);
}
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R9(&l_R_1774, r_FMT1(rt_str("(!@)", 4), l_R_1774), 0);
}
{ R26 rv1775 = r_MKET(l_R_1774, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1775; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1776; memset(&l_S1_1776, 0, sizeof l_S1_1776);
l_S1_1776 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1777; memset(&l_S2_1777, 0, sizeof l_S2_1777);
l_S2_1777 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1778; memset(&l_S_1778, 0, sizeof l_S_1778);
l_S_1778 = r_MAX_INT(l_S1_1776, l_S2_1777);
R9 l_FN_1779; memset(&l_FN_1779, 0, sizeof l_FN_1779);
S_R9(&l_FN_1779, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R9(&l_FN_1779, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1780 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1779, r_RESCALE_C((p_A).f_C, l_S1_1776, l_S_1778), r_RESCALE_C((p_B).f_C, l_S2_1777, l_S_1778)), r_INT_TYPE(l_S_1778));
return rv1780; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1781 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1776, l_S2_1777)));
return rv1781; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1782 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1776, l_S2_1777)));
return rv1782; }
}
{ R26 rv1783 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1776, l_S2_1777)));
return rv1783; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1784 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1776));
return rv1784; }
}
{ R26 rv1785 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1776));
return rv1785; }
}
else if (r_TEQS(p_OP, rt_str("/", 1)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("/ is for floating point; fixed point division is // (3.2.4.2)", 61));
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("** has no predefined meaning (3.2.4.2)", 38));
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no such operator for fixed point values: ", 41), p_OP);
rt_raise(RT_X_INIT);
}
static R26 r_SCALED_OPERATOR(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1786; memset(&l_S1_1786, 0, sizeof l_S1_1786);
l_S1_1786 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1787; memset(&l_S2_1787, 0, sizeof l_S2_1787);
l_S2_1787 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R9 l_RND_1788; memset(&l_RND_1788, 0, sizeof l_RND_1788);
S_R9(&l_RND_1788, r_MK(rt_str("0", 1)), 0);
if ((((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_B).f_T)))).f_KIND == g_T_FLOAT)))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no machine-dependent float operator ", 36), p_OP);
}
{ R26 rv1789 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1789; }
}
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R9(&l_RND_1788, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("//", 2))))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the machine-dependent fixed point operators are !+! !-! !*! !//! (3.2.4.5), not ", 80), p_OP);
}
{ R26 rv1790 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1790; }
}
{
R23 l_SM_1791; memset(&l_SM_1791, 0, sizeof l_SM_1791);
S_R23(&l_SM_1791, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1792; memset(&l_S_1792, 0, sizeof l_S_1792);
l_S_1792 = (l_SM_1791).f_V;
rt_int l_SR_1793; memset(&l_SR_1793, 0, sizeof l_SR_1793);
l_SR_1793 = r_MAX_INT(l_S1_1786, l_S2_1787);
if ((!(l_SM_1791).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1794 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1792, l_S1_1786), l_S2_1787)), l_RND_1788), r_INT_TYPE(l_S_1792));
return rv1794; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1795 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1792, l_S1_1786), l_S2_1787)), l_RND_1788), r_INT_TYPE(l_S_1792));
return rv1795; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1796 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1786), r_NUM(l_S_1792), l_RND_1788), r_INT_TYPE(l_S_1792));
return rv1796; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R9 l_SUB_1797; memset(&l_SUB_1797, 0, sizeof l_SUB_1797);
S_R9(&l_SUB_1797, r_MK(rt_str("0", 1)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R9(&l_SUB_1797, r_MK(rt_str("1", 1)), 0);
}
{ R26 rv1798 = r_MKET(r_CAT(r_FMT4(rt_str("rt_b_addsc(@, @, @, @, ", 23), (p_A).f_C, r_NUM(l_S1_1786), (p_B).f_C, r_NUM(l_S2_1787)), r_FMT3(rt_str("@, @, @)", 8), r_NUM(l_S_1792), l_SUB_1797, l_RND_1788)), r_INT_TYPE(l_S_1792));
return rv1798; }
}
}
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R17 * p_E) { RT_B_TICK(); 
R26 l_V_1799; memset(&l_V_1799, 0, sizeof l_V_1799);
S_R26(&l_V_1799, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1800; memset(&l_T_1800, 0, sizeof l_T_1800);
l_T_1800 = r_REAL_TYPE((l_V_1799).f_T);
R17 * l_R_1801; memset(&l_R_1801, 0, sizeof l_R_1801);
l_R_1801 = ((*(R17 *)rt_nil_check(p_E))).f_B;
R9 l_TMP_1802; memset(&l_TMP_1802, 0, sizeof l_TMP_1802);
S_R9(&l_TMP_1802, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1803; memset(&l_LO_1803, 0, sizeof l_LO_1803);
R26 l_HI_1804; memset(&l_HI_1804, 0, sizeof l_HI_1804);
R9 l_LOC_1805; memset(&l_LOC_1805, 0, sizeof l_LOC_1805);
R9 l_HIC_1806; memset(&l_HIC_1806, 0, sizeof l_HIC_1806);
R9 l_LO_OP_1807; memset(&l_LO_OP_1807, 0, sizeof l_LO_OP_1807);
S_R9(&l_LO_OP_1807, r_MK(rt_str("<=", 2)), 0);
R9 l_HI_OP_1808; memset(&l_HI_OP_1808, 0, sizeof l_HI_OP_1808);
S_R9(&l_HI_OP_1808, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1803, r_EXPR(((*(R17 *)rt_nil_check(l_R_1801))).f_A, l_T_1800), 0);
S_R26(&l_HI_1804, r_EXPR(((*(R17 *)rt_nil_check(l_R_1801))).f_B, l_T_1800), 0);
if (r_IS_UNORDERED(l_T_1800))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1800))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1800))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1800))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_1803).f_T), l_T_1800)) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_1804).f_T), l_T_1800))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if (((((*(R17 *)rt_nil_check(l_R_1801))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_R_1801))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LO_OP_1807, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R17 *)rt_nil_check(l_R_1801))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HI_OP_1808, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R22 *)rt_nil_check(l_T_1800))).f_KIND == g_T_INT))
{
{
R26 l_X_1809; memset(&l_X_1809, 0, sizeof l_X_1809);
S_R26(&l_X_1809, r_MKET(l_TMP_1802, (l_V_1799).f_T), 0);
S_R9(&l_LOC_1805, r_FIXED_COMPARE(l_LO_1803, l_X_1809, l_LO_OP_1807), 0);
S_R9(&l_HIC_1806, r_FIXED_COMPARE(l_X_1809, l_HI_1804, l_HI_OP_1808), 0);
}
}
else
{
S_R9(&l_LOC_1805, r_FMT3(rt_str("(@ @ @)", 7), (l_LO_1803).f_C, l_LO_OP_1807, l_TMP_1802), 0);
S_R9(&l_HIC_1806, r_FMT3(rt_str("(@ @ @)", 7), l_TMP_1802, l_HI_OP_1808, (l_HI_1804).f_C), 0);
}
{ R26 rv1810 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; @ && ", 17), r_CTYPE(l_T_1800), l_TMP_1802, (l_V_1799).f_C, l_LOC_1805), r_FMT1(rt_str("@; })", 5), l_HIC_1806)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1810; }
rt_raise(RT_X_INIT);
}
static R9 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R9 rv1811 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1811; }
}
{ R9 rv1812 = (p_V).f_C;
return rv1812; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { RT_B_TICK(); 
{ R26 rv1813 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1813; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { RT_B_TICK(); 
rt_int l_B_1814; memset(&l_B_1814, 0, sizeof l_B_1814);
l_B_1814 = ((rt_int)0LL);
rt_int l_P_1815; memset(&l_P_1815, 0, sizeof l_P_1815);
l_P_1815 = ((rt_int)1LL);
for (;;) {
if ((l_P_1815 >= p_N)) goto L_end1816;
{
l_B_1814 = rt_add(l_B_1814, ((rt_int)1LL));
l_P_1815 = rt_mul(l_P_1815, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1816: ;
{ rt_int rv1817 = l_B_1814;
return rv1817; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R23 l_M_1818; memset(&l_M_1818, 0, sizeof l_M_1818);
S_R23(&l_M_1818, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1818).f_OK)
{
{ rt_int rv1819 = (l_M_1818).f_V;
return rv1819; }
}
}
}
}
{ rt_int rv1820 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1820; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKING_OF(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1821; memset(&l_K_1821, 0, sizeof l_K_1821);
l_K_1821 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
rt_int l_MODE_1822; memset(&l_MODE_1822, 0, sizeof l_MODE_1822);
l_MODE_1822 = ((rt_int)2LL);
if ((l_K_1821 == g_T_STR))
{
l_MODE_1822 = ((rt_int)1LL);
}
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_KIND == g_N_REP) && (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL))))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_KIND == g_N_ENUMLIT)))
{
{
rt_int l_P_1823; memset(&l_P_1823, 0, sizeof l_P_1823);
l_P_1823 = r_PACKING_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_NAME);
if ((l_P_1823 >= ((rt_int)0LL)))
{
l_MODE_1822 = l_P_1823;
}
}
}
}
}
{ rt_int rv1824 = l_MODE_1822;
return rv1824; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKING_VALUE(R9 p_NAME) { RT_B_TICK(); 
if (r_TEQS(p_NAME, rt_str("DENSE", 5)))
{
{ rt_int rv1825 = ((rt_int)0LL);
return rv1825; }
}
else if (r_TEQS(p_NAME, rt_str("PACKED", 6)))
{
{ rt_int rv1826 = ((rt_int)1LL);
return rv1826; }
}
else if (r_TEQS(p_NAME, rt_str("UNPACKED", 8)))
{
{ rt_int rv1827 = ((rt_int)2LL);
return rv1827; }
}
{ rt_int rv1828 = rt_neg(((rt_int)1LL));
return rv1828; }
rt_raise(RT_X_INIT);
}
static R26 r_PACKING_LITERAL(rt_int p_MODE, rt_int p_LINE) { RT_B_TICK(); 
if ((p_MODE == ((rt_int)0LL)))
{
{ R26 rv1829 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("DENSE", 5), p_LINE), NULL);
return rv1829; }
}
else if ((p_MODE == ((rt_int)1LL)))
{
{ R26 rv1830 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1830; }
}
{ R26 rv1831 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1831; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACK_SLOT(rt_int p_ES, rt_int p_MODE) { RT_B_TICK(); 
rt_int l_U_1832; memset(&l_U_1832, 0, sizeof l_U_1832);
l_U_1832 = ((rt_int)8LL);
if ((p_ES <= ((rt_int)0LL)))
{
if ((p_MODE == ((rt_int)0LL)))
{
{ rt_int rv1833 = ((rt_int)0LL);
return rv1833; }
}
{ rt_int rv1834 = ((rt_int)8LL);
return rv1834; }
}
if ((p_MODE == ((rt_int)0LL)))
{
{ rt_int rv1835 = p_ES;
return rv1835; }
}
if (((p_MODE == ((rt_int)1LL)) && (p_ES <= ((*(R7 *)rt_nil_check(g_W))).f_WORD)))
{
for (;;) {
if ((l_U_1832 >= p_ES)) goto L_end1836;
{
l_U_1832 = rt_mul(l_U_1832, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1836: ;
{ rt_int rv1837 = l_U_1832;
return rv1837; }
}
{ rt_int rv1838 = rt_mul((rt_quot((rt_sub(rt_add(p_ES, ((*(R7 *)rt_nil_check(g_W))).f_WORD), ((rt_int)1LL))), ((*(R7 *)rt_nil_check(g_W))).f_WORD)), ((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1838; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_MIN_C(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1839 = r_MK(rt_str("INT64_MIN", 9));
return rv1839; }
}
{ R9 rv1840 = r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(rt_neg(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))))));
return rv1840; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_MAX_C(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1841 = r_MK(rt_str("INT64_MAX", 9));
return rv1841; }
}
{ R9 rv1842 = r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(rt_sub(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))), ((rt_int)1LL))));
return rv1842; }
rt_raise(RT_X_INIT);
}
static rt_int r_STD_MIN(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ rt_int rv1843 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
return rv1843; }
}
{ rt_int rv1844 = rt_neg(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))));
return rv1844; }
rt_raise(RT_X_INIT);
}
static rt_int r_STD_MAX(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ rt_int rv1845 = INT64_MAX;
return rv1845; }
}
{ rt_int rv1846 = rt_sub(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))), ((rt_int)1LL));
return rv1846; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_CHECK(R9 p_C) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1847 = p_C;
return rv1847; }
}
{ R9 rv1848 = r_FMT1(rt_str("rt_b_std(@)", 11), p_C);
return rv1848; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACK_SIZE(rt_int p_N, rt_int p_ES, rt_int p_MODE) { RT_B_TICK(); 
if ((p_N <= ((rt_int)0LL)))
{
{ rt_int rv1849 = ((rt_int)0LL);
return rv1849; }
}
{ rt_int rv1850 = rt_mul(p_N, r_PACK_SLOT(p_ES, p_MODE));
return rv1850; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHAR_SIZE(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv1851 = r_ENUM_SIZE(r_CHARSET_OF(p_T));
return rv1851; }
rt_raise(RT_X_INIT);
}
static R9 r_CHAR_REPS(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_1852; memset(&l_C_1852, 0, sizeof l_C_1852);
l_C_1852 = r_CHARSET_OF(p_T);
if ((!(((*(R22 *)rt_nil_check(l_C_1852))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_1852))).f_REPS))).f_B == NULL)))
{
{ R9 rv1853 = r_REP_TABLE(l_C_1852);
return rv1853; }
}
}
{ R9 rv1854 = r_FMT1(rt_str("NULL, @", 7), r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_1852))).f_BASE))).f_NLITS));
return rv1854; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_LENGTH(void) { RT_B_TICK(); 
{ rt_int rv1855 = ((rt_int)100000000LL);
return rv1855; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_FLOAT_PRECISION(void) { RT_B_TICK(); 
{ rt_int rv1856 = ((rt_int)15LL);
return rv1856; }
rt_raise(RT_X_INIT);
}
static rt_int r_IMP_PRECISION_OF(rt_int p_P) { RT_B_TICK(); 
if ((p_P <= ((rt_int)7LL)))
{
{ rt_int rv1857 = ((rt_int)7LL);
return rv1857; }
}
{ rt_int rv1858 = ((rt_int)15LL);
return rv1858; }
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_FORMAT(rt_int p_P, R9 p_NAME) { RT_B_TICK(); 
rt_int l_SINGLE_1859; memset(&l_SINGLE_1859, 0, sizeof l_SINGLE_1859);
l_SINGLE_1859 = (r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL));
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
{ rt_int rv1860 = rt_neg(((rt_int)127LL));
return rv1860; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
{ rt_int rv1861 = ((rt_int)127LL);
return rv1861; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
{ rt_int rv1862 = ((rt_int)8LL);
return rv1862; }
}
}
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
if (l_SINGLE_1859)
{
{ rt_int rv1863 = rt_neg(((rt_int)125LL));
return rv1863; }
}
{ rt_int rv1864 = rt_neg(((rt_int)1021LL));
return rv1864; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
if (l_SINGLE_1859)
{
{ rt_int rv1865 = ((rt_int)128LL);
return rv1865; }
}
{ rt_int rv1866 = ((rt_int)1024LL);
return rv1866; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
if (l_SINGLE_1859)
{
{ rt_int rv1867 = ((rt_int)25LL);
return rv1867; }
}
{ rt_int rv1868 = ((rt_int)54LL);
return rv1868; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
if (l_SINGLE_1859)
{
{ rt_int rv1869 = ((rt_int)8LL);
return rv1869; }
}
{ rt_int rv1870 = ((rt_int)11LL);
return rv1870; }
}
else if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
if (l_SINGLE_1859)
{
{ rt_int rv1871 = ((rt_int)32LL);
return rv1871; }
}
{ rt_int rv1872 = ((rt_int)64LL);
return rv1872; }
}
{ rt_int rv1873 = ((rt_int)0LL);
return rv1873; }
rt_raise(RT_X_INIT);
}
static R23 r_STATIC_SIZE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1874; memset(&l_K_1874, 0, sizeof l_K_1874);
l_K_1874 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1874 == g_T_ABS))
{
{ R23 rv1875 = r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1875; }
}
else if ((l_K_1874 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R23 rv1876 = r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A);
return rv1876; }
}
}
{ R23 rv1877 = r_SOME(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1877; }
}
else if ((l_K_1874 == g_T_FLOAT))
{
{ R23 rv1878 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1878; }
}
else if ((l_K_1874 == g_T_BOOL))
{
{ R23 rv1879 = r_SOME(((rt_int)1LL));
return rv1879; }
}
else if ((l_K_1874 == g_T_ENUM))
{
{ R23 rv1880 = r_SOME(r_ENUM_SIZE(p_T));
return rv1880; }
}
else if ((l_K_1874 == g_T_BITS))
{
{ R23 rv1881 = ((*(R22 *)rt_nil_check(p_T))).f_MLEN;
return rv1881; }
}
else if ((l_K_1874 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R23 rv1882 = r_SOME(r_PACK_SIZE((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_V, r_CHAR_SIZE(p_T), r_PACKING_OF(p_T)));
return rv1882; }
}
}
else if (((l_K_1874 == g_T_PTR) || (l_K_1874 == g_T_SEM)))
{
{ R23 rv1883 = r_SOME(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1883; }
}
else if ((l_K_1874 == g_T_ARR))
{
{
R23 l_ES_1884; memset(&l_ES_1884, 0, sizeof l_ES_1884);
S_R23(&l_ES_1884, r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM), 0);
rt_int l_N_1885; memset(&l_N_1885, 0, sizeof l_N_1885);
l_N_1885 = ((rt_int)1LL);
R25 * l_B_1886; memset(&l_B_1886, 0, sizeof l_B_1886);
l_B_1886 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
if ((!(l_ES_1884).f_OK))
{
{ R23 rv1887 = r_NO_MVAL();
return rv1887; }
}
for (;;) {
if ((l_B_1886 == NULL)) goto L_end1888;
{
if ((((!(((((*(R25 *)rt_nil_check(l_B_1886))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_B_1886))).f_MHI).f_OK))) || r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1886))).f_LO)) || r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1886))).f_HI)))
{
{ R23 rv1889 = r_NO_MVAL();
return rv1889; }
}
l_N_1885 = rt_mul(l_N_1885, r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_B_1886))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_B_1886))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
l_B_1886 = ((*(R25 *)rt_nil_check(l_B_1886))).f_NEXT;
}
RT_B_TICK();
} L_end1888: ;
{ R23 rv1890 = r_SOME(r_PACK_SIZE(l_N_1885, (l_ES_1884).f_V, r_PACKING_OF(p_T)));
return rv1890; }
}
}
{ R23 rv1891 = r_NO_MVAL();
return rv1891; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1892; memset(&l_T_1892, 0, sizeof l_T_1892);
l_T_1892 = (p_B).f_T;
rt_int l_K_1893; memset(&l_K_1893, 0, sizeof l_K_1893);
l_K_1893 = ((*(R22 *)rt_nil_check(l_T_1892))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv1894 = r_SIZE_OF(l_T_1892, (p_B).f_C);
return rv1894; }
}
if ((l_K_1893 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv1895 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1892))).f_SCALE);
return rv1895; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1896 = r_INT_ET(((rt_int)2LL));
return rv1896; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv1897 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1897; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
if ((!(((*(R22 *)rt_nil_check(l_T_1892))).f_REPS == NULL)))
{
if ((r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1892))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1892))).f_REPS))).f_A == NULL))))
{
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1892))).f_REPS))).f_A))).f_NEXT == NULL)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1892))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8)))
{
{ R26 rv1898 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNSIGNED", 8), p_LINE), NULL);
return rv1898; }
}
}
}
}
{ R26 rv1899 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1899; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1892))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1900 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1892))).f_LO_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1892))).f_SCALE));
return rv1900; }
}
{ R26 rv1901 = r_MKET(r_STD_MIN_C(), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1892))).f_SCALE));
return rv1901; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1892))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1902 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1892))).f_HI_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1892))).f_SCALE));
return rv1902; }
}
{ R26 rv1903 = r_MKET(r_STD_MAX_C(), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1892))).f_SCALE));
return rv1903; }
}
}
else if ((l_K_1893 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv1904 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1892))).f_SCALE);
return rv1904; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv1905 = r_INT_ET(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1892))).f_SCALE));
return rv1905; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1906 = r_INT_ET(((rt_int)2LL));
return rv1906; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R26 rv1907 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1892))).f_SCALE, p_NAME));
return rv1907; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) || r_TEQS(p_NAME, rt_str("MAX", 3))))
{
{
R22 * l_MT_1908; memset(&l_MT_1908, 0, sizeof l_MT_1908);
l_MT_1908 = r_FLOAT_TYPE(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1892))).f_SCALE));
R9 l_C_1909; memset(&l_C_1909, 0, sizeof l_C_1909);
S_R9(&l_C_1909, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1892))).f_SCALE) == ((rt_int)7LL)))
{
S_R9(&l_C_1909, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1892))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1910 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1892))).f_LO_C, (p_B).f_SELF), l_MT_1908);
return rv1910; }
}
{ R26 rv1911 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1909), l_MT_1908);
return rv1911; }
}
if (((((*(R22 *)rt_nil_check(l_T_1892))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1912 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1892))).f_HI_C, (p_B).f_SELF), l_MT_1908);
return rv1912; }
}
{ R26 rv1913 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1909), l_MT_1908);
return rv1913; }
}
}
}
else if ((l_K_1893 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1892))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1914 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1892))).f_LO_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1892))).f_BASE);
return rv1914; }
}
{ R26 rv1915 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_1892))).f_BASE);
return rv1915; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1892))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1916 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1892))).f_HI_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1892))).f_BASE);
return rv1916; }
}
{ R26 rv1917 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1892))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_1892))).f_BASE);
return rv1917; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1892))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1918 = r_MKET(r_SUBST_SELF(r_FMT4(rt_str("((@) >= (@) \? (@) - (@) + 1 : 0)", 32), ((*(R22 *)rt_nil_check(l_T_1892))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1892))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1892))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1892))).f_LO_C), (p_B).f_SELF), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1918; }
}
{ R26 rv1919 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1892))).f_BASE))).f_NLITS);
return rv1919; }
}
}
else if (((l_K_1893 == g_T_STR) || (l_K_1893 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv1920 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1920; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1921 = r_PACKING_LITERAL(r_PACKING_OF(l_T_1892), p_LINE);
return rv1921; }
}
}
else if ((l_K_1893 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv1922 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1892))).f_DIMS);
return rv1922; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) || r_TEQS(p_NAME, rt_str("BOUNDS", 6))))
{
{ R26 rv1923 = r_ARRAY_SHAPE(p_B, p_NAME);
return rv1923; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1924 = r_PACKING_LITERAL(r_PACKING_OF(l_T_1892), p_LINE);
return rv1924; }
}
}
else if ((l_K_1893 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_1892))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv1925 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1925; }
}
{ R26 rv1926 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1926; }
}
}
else if (((l_K_1893 == g_T_ABS) || (l_K_1893 == g_T_REC)))
{
{
R22 * l_U_1927; memset(&l_U_1927, 0, sizeof l_U_1927);
l_U_1927 = l_T_1892;
if ((l_K_1893 == g_T_ABS))
{
l_U_1927 = ((*(R22 *)rt_nil_check(l_T_1892))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_1927))).f_KIND == g_T_REC))
{
{
R24 * l_F_1928; memset(&l_F_1928, 0, sizeof l_F_1928);
l_F_1928 = r_FIND_FIELD(l_U_1927, p_NAME);
if ((!(l_F_1928 == NULL)))
{
if ((!(((*(R24 *)rt_nil_check(l_F_1928))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv1929 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R24 *)rt_nil_check(l_F_1928))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1928))).f_T);
return rv1929; }
}
}
}
}
}
}
r_FAILT(p_LINE, rt_str("no such field or attribute: ", 28), p_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_SHAPE(R26 p_B, R9 p_NAME) { RT_B_TICK(); 
R22 * l_T_1930; memset(&l_T_1930, 0, sizeof l_T_1930);
l_T_1930 = r_REAL_TYPE((p_B).f_T);
R9 l_D_1931; memset(&l_D_1931, 0, sizeof l_D_1931);
S_R9(&l_D_1931, r_NUM(((*(R22 *)rt_nil_check(l_T_1930))).f_DIMS), 0);
R9 l_X_1932; memset(&l_X_1932, 0, sizeof l_X_1932);
S_R9(&l_X_1932, r_NEW_NAME(rt_str("sx", 2)), 0);
R9 l_R_1933; memset(&l_R_1933, 0, sizeof l_R_1933);
S_R9(&l_R_1933, r_NEW_NAME(rt_str("sr", 2)), 0);
R22 * l_ELEM_1934; memset(&l_ELEM_1934, 0, sizeof l_ELEM_1934);
l_ELEM_1934 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
R9 l_C_1935; memset(&l_C_1935, 0, sizeof l_C_1935);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
{
R17 * l_TS_1936; memset(&l_TS_1936, 0, sizeof l_TS_1936);
l_TS_1936 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_TS_1936))).f_NAME, r_MKN(rt_str("BOUNDS_DEF", 10)), 0);
((*(R17 *)rt_nil_check(l_TS_1936))).f_A = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_TS_1936))).f_A))).f_NAME, r_MKN(rt_str("STD", 3)), 0);
l_ELEM_1934 = r_RESOLVE(l_TS_1936);
}
}
{
R22 * l_A_1937; memset(&l_A_1937, 0, sizeof l_A_1937);
l_A_1937 = r_ARRAY_OF(l_ELEM_1934, ((rt_int)1LL));
S_R9(&l_C_1935, r_FMT4(rt_str("({ @ @ = @; @ ", 14), r_CTYPE(l_T_1930), l_X_1932, (p_B).f_C, ((*(R22 *)rt_nil_check(l_A_1937))).f_CNAME), 0);
S_R9(&l_C_1935, r_FMT4(rt_str("@@; memset(&@, 0, sizeof @);", 28), l_C_1935, l_R_1933, l_R_1933, l_R_1933), 0);
S_R9(&l_C_1935, r_FMT4(rt_str("@ @.lo[0] = 0; @.hi[0] = @ - 1;", 31), l_C_1935, l_R_1933, l_R_1933, l_D_1931), 0);
S_R9(&l_C_1935, r_FMT4(rt_str("@ @.p = rt_alloc(@ * sizeof *@.p);", 34), l_C_1935, l_R_1933, l_D_1931, l_R_1933), 0);
S_R9(&l_C_1935, r_FMT2(rt_str("@ for (int i = 0; i < @; i++) {", 31), l_C_1935, l_D_1931), 0);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
S_R9(&l_C_1935, r_FMT2(rt_str("@ @", 3), l_C_1935, r_INIT_CODE(l_ELEM_1934, r_FMT1(rt_str("@.p[i]", 6), l_R_1933))), 0);
S_R9(&l_C_1935, r_FMT4(rt_str("@ @.p[i].f_MIN = @.lo[i]; @.p[i].f_MAX = ", 41), l_C_1935, l_R_1933, l_X_1932, l_R_1933), 0);
S_R9(&l_C_1935, r_FMT2(rt_str("@@.hi[i]; }", 11), l_C_1935, l_X_1932), 0);
}
else
{
S_R9(&l_C_1935, r_FMT4(rt_str("@ @.p[i] = @.hi[i] >= @.lo[i] \? ", 32), l_C_1935, l_R_1933, l_X_1932, l_X_1932), 0);
S_R9(&l_C_1935, r_FMT4(rt_str("@@.hi[i] - @.lo[i] + 1 : 0; }", 29), l_C_1935, l_X_1932, l_X_1932, l_X_1932), 0);
}
{ R26 rv1938 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_C_1935, l_R_1933), l_A_1937);
return rv1938; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_N_1939; memset(&l_N_1939, 0, sizeof l_N_1939);
l_N_1939 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1939))).f_NAME, r_MKN(p_NAME), 0);
{ R17 * rv1940 = l_N_1939;
return rv1940; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R9 p_C) { RT_B_TICK(); 
rt_int l_K_1941; memset(&l_K_1941, 0, sizeof l_K_1941);
l_K_1941 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1941 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv1942 = r_MKET((r_EXPR(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1942; }
}
}
{ R26 rv1943 = r_INT_ET(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1943; }
}
else if ((l_K_1941 == g_T_FLOAT))
{
{ R26 rv1944 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1944; }
}
else if ((l_K_1941 == g_T_BOOL))
{
{ R26 rv1945 = r_INT_ET(((rt_int)1LL));
return rv1945; }
}
else if ((l_K_1941 == g_T_ENUM))
{
{ R26 rv1946 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1946; }
}
else if ((l_K_1941 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1947 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1947; }
}
{ R26 rv1948 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1948; }
}
else if ((l_K_1941 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R26 rv1949 = r_INT_ET((r_STATIC_SIZE(p_T)).f_V);
return rv1949; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1950 = r_MKET(r_FMT3(rt_str("rt_b_pack_size(@, @, @)", 23), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C, r_NUM(r_CHAR_SIZE(p_T)), r_NUM(r_PACKING_OF(p_T))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1950; }
}
{ R26 rv1951 = r_MKET(r_FMT3(rt_str("rt_b_pack_size((@).len, @, @)", 29), p_C, r_NUM(r_CHAR_SIZE(p_T)), r_NUM(r_PACKING_OF(p_T))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1951; }
}
else if (((l_K_1941 == g_T_PTR) || (l_K_1941 == g_T_SEM)))
{
{ R26 rv1952 = r_INT_ET(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1952; }
}
else if ((l_K_1941 == g_T_ABS))
{
{ R26 rv1953 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1953; }
}
else if ((l_K_1941 == g_T_REC))
{
{ R26 rv1954 = r_MKET(r_RECORD_SIZE(p_T, p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1954; }
}
else if ((l_K_1941 == g_T_ARR))
{
{
R23 l_ES_1955; memset(&l_ES_1955, 0, sizeof l_ES_1955);
S_R23(&l_ES_1955, r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM), 0);
if ((l_ES_1955).f_OK)
{
{ R26 rv1956 = r_MKET(r_CAT(r_FMT3(rt_str("rt_b_pack_size(rt_b_extent(@, (@).lo, (@).hi), ", 47), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C), r_FMT2(rt_str("@, @)", 5), r_NUM((l_ES_1955).f_V), r_NUM(r_PACKING_OF(p_T)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1956; }
}
}
{ R26 rv1957 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1957; }
}
{ R26 rv1958 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1958; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R9 p_TNAME, R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{ R26 rv1959 = r_ATTRIBUTE(r_TYPE_VALUE(p_TNAME, p_LINE), p_NAME, p_LINE);
return rv1959; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE(R9 p_TNAME, rt_int p_LINE) { RT_B_TICK(); 
{ R26 rv1960 = r_TYPE_VALUE_OF(r_RESOLVE_USER_NAME(p_TNAME, p_LINE));
return rv1960; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_1961; memset(&l_RT_1961, 0, sizeof l_RT_1961);
l_RT_1961 = r_REAL_TYPE(p_T);
if (((((*(R22 *)rt_nil_check(l_RT_1961))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(l_RT_1961))).f_KIND == g_T_REC)))
{
{
R9 l_TMP_1962; memset(&l_TMP_1962, 0, sizeof l_TMP_1962);
S_R9(&l_TMP_1962, r_NEW_NAME(rt_str("tq", 2)), 0);
R9 l_C_1963; memset(&l_C_1963, 0, sizeof l_C_1963);
S_R9(&l_C_1963, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), r_CTYPE(p_T), l_TMP_1962, l_TMP_1962, l_TMP_1962), 0);
S_R9(&l_C_1963, r_FMT3(rt_str("@@ @; })", 8), l_C_1963, r_INIT_CODE(l_RT_1961, l_TMP_1962), l_TMP_1962), 0);
{ R26 rv1964 = r_MKET(l_C_1963, p_T);
return rv1964; }
}
}
{ R26 rv1965 = r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(p_T)), p_T);
return rv1965; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_NAME(R17 * p_E) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{ rt_int rv1966 = 0;
return rv1966; }
}
{
R12 * l_Y_1967; memset(&l_Y_1967, 0, sizeof l_Y_1967);
l_Y_1967 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1967 == NULL))
{
{ rt_int rv1968 = 0;
return rv1968; }
}
{ rt_int rv1969 = (((*(R12 *)rt_nil_check(l_Y_1967))).f_KIND == g_Y_TYPE);
return rv1969; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R9 p_TNAME, R9 p_A, R9 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1970 = r_INT_ET(((rt_int)100000000LL));
return rv1970; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1971 = r_INT_ET(((rt_int)15LL));
return rv1971; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv1972 = r_INT_ET(((rt_int)0LL));
return rv1972; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R22 * l_T_1973; memset(&l_T_1973, 0, sizeof l_T_1973);
l_T_1973 = p_WANT;
if ((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_1973 = r_RESOLVE(((*(R17 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_1973 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_1973 = r_REAL_TYPE(l_T_1973);
if ((!(((*(R22 *)rt_nil_check(l_T_1973))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_1973))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R9 l_TMP_1974; memset(&l_TMP_1974, 0, sizeof l_TMP_1974);
S_R9(&l_TMP_1974, r_NEW_NAME(rt_str("rc", 2)), 0);
R9 l_R_1975; memset(&l_R_1975, 0, sizeof l_R_1975);
S_R9(&l_R_1975, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_1973))).f_CNAME, l_TMP_1974, l_TMP_1974, l_TMP_1974), 0);
R24 * l_F_1976; memset(&l_F_1976, 0, sizeof l_F_1976);
l_F_1976 = ((*(R22 *)rt_nil_check(l_T_1973))).f_FIELDS;
S_R9(&l_R_1975, r_FMT2(rt_str("@@", 2), l_R_1975, r_INIT_CODE(l_T_1973, l_TMP_1974)), 0);
for (;;) {
if ((l_F_1976 == NULL)) goto L_end1977;
{
if ((((*(R24 *)rt_nil_check(l_F_1976))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R24 *)rt_nil_check(l_F_1976))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_1976))).f_LABELS, (r_TAG_VALUE(l_T_1973, ((*(R24 *)rt_nil_check(l_F_1976))).f_TAGF)).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_T_1973, ((*(R24 *)rt_nil_check(l_F_1976))).f_TAGF)))).f_T)))
{
{
R17 * l_INIT_1978; memset(&l_INIT_1978, 0, sizeof l_INIT_1978);
l_INIT_1978 = r_FIND_INIT(((*(R17 *)rt_nil_check(p_E))).f_A, ((*(R24 *)rt_nil_check(l_F_1976))).f_NAME);
if ((l_INIT_1978 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R24 *)rt_nil_check(l_F_1976))).f_NAME);
}
S_R9(&l_R_1975, r_FMT2(rt_str("@ @", 3), l_R_1975, r_STORE_CODE(((*(R24 *)rt_nil_check(l_F_1976))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_1974, ((*(R24 *)rt_nil_check(l_F_1976))).f_CNAME), r_EXPR(((*(R17 *)rt_nil_check(l_INIT_1978))).f_A, ((*(R24 *)rt_nil_check(l_F_1976))).f_T), ((*(R17 *)rt_nil_check(l_INIT_1978))).f_LINE, l_TMP_1974)), 0);
}
}
}
l_F_1976 = ((*(R24 *)rt_nil_check(l_F_1976))).f_NEXT;
}
RT_B_TICK();
} L_end1977: ;
{
R17 * l_P_1979; memset(&l_P_1979, 0, sizeof l_P_1979);
l_P_1979 = ((*(R17 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_1979 == NULL)) goto L_end1980;
{
{
R24 * l_G_1981; memset(&l_G_1981, 0, sizeof l_G_1981);
l_G_1981 = r_FIND_VFIELD(l_T_1973, ((*(R17 *)rt_nil_check(l_P_1979))).f_NAME);
if ((l_G_1981 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_1979))).f_LINE, rt_str("no such field: ", 15), ((*(R17 *)rt_nil_check(l_P_1979))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_G_1981))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_1979))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R17 *)rt_nil_check(l_P_1979))).f_NAME);
}
r_CHECK_VARIANT(l_G_1981, l_T_1973, NULL, ((*(R17 *)rt_nil_check(l_P_1979))).f_LINE);
}
l_P_1979 = ((*(R17 *)rt_nil_check(l_P_1979))).f_NEXT;
}
RT_B_TICK();
} L_end1980: ;
}
{ R26 rv1982 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1975, l_TMP_1974), l_T_1973);
return rv1982; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_FIND_INIT(R17 * p_L, R9 p_NAME) { RT_B_TICK(); 
R17 * l_P_1983; memset(&l_P_1983, 0, sizeof l_P_1983);
l_P_1983 = p_L;
for (;;) {
if ((l_P_1983 == NULL)) goto L_end1984;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_1983))).f_NAME, p_NAME))
{
{ R17 * rv1985 = l_P_1983;
return rv1985; }
}
l_P_1983 = ((*(R17 *)rt_nil_check(l_P_1983))).f_NEXT;
}
RT_B_TICK();
} L_end1984: ;
{ R17 * rv1986 = NULL;
return rv1986; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_DIMS_1987; memset(&l_DIMS_1987, 0, sizeof l_DIMS_1987);
l_DIMS_1987 = ((rt_int)0LL);
R17 * l_P_1988; memset(&l_P_1988, 0, sizeof l_P_1988);
l_P_1988 = p_E;
R22 * l_ELEM_1989; memset(&l_ELEM_1989, 0, sizeof l_ELEM_1989);
l_ELEM_1989 = NULL;
for (;;) {
if ((!(((*(R17 *)rt_nil_check(l_P_1988))).f_KIND == g_N_ARRCONS))) goto L_end1990;
{
l_DIMS_1987 = rt_add(l_DIMS_1987, ((rt_int)1LL));
l_P_1988 = ((*(R17 *)rt_nil_check(l_P_1988))).f_A;
}
RT_B_TICK();
} L_end1990: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_1989 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_1989 == NULL))
{
l_ELEM_1989 = (r_EXPR(l_P_1988, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_1989))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_1989))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_1989 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
r_CHECK_SHAPE(p_E, l_DIMS_1987);
{
R22 * l_A_1991; memset(&l_A_1991, 0, sizeof l_A_1991);
l_A_1991 = r_ARRAY_OF(l_ELEM_1989, l_DIMS_1987);
R9 l_TMP_1992; memset(&l_TMP_1992, 0, sizeof l_TMP_1992);
S_R9(&l_TMP_1992, r_NEW_NAME(rt_str("ac", 2)), 0);
R9 l_R_1993; memset(&l_R_1993, 0, sizeof l_R_1993);
S_R9(&l_R_1993, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_1991))).f_CNAME, l_TMP_1992, l_TMP_1992), 0);
rt_int l_K_1994; memset(&l_K_1994, 0, sizeof l_K_1994);
l_K_1994 = ((rt_int)0LL);
{
R17 * l_Q_1995; memset(&l_Q_1995, 0, sizeof l_Q_1995);
l_Q_1995 = p_E;
R25 * l_TAIL_1996; memset(&l_TAIL_1996, 0, sizeof l_TAIL_1996);
l_TAIL_1996 = NULL;
{ rt_int it1998_lo = ((rt_int)1LL), it1998_hi = l_DIMS_1987;
for (rt_int it1998 = it1998_lo; it1998 <= it1998_hi; it1998++) {
{
{
R25 * l_B_1999; memset(&l_B_1999, 0, sizeof l_B_1999);
l_B_1999 = ((R25 *)rt_b_new(sizeof (R25)));
rt_int l_N_2000; memset(&l_N_2000, 0, sizeof l_N_2000);
l_N_2000 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(l_Q_1995))).f_A);
S_R25(&(*(R25 *)rt_nil_check(l_B_1999)), ({ R25 rc2001; memset(&rc2001, 0, sizeof rc2001);  S_R9(&rc2001.f_LO, r_MK(rt_str("0", 1)), 0); S_R9(&rc2001.f_HI, r_NUM(rt_sub(l_N_2000, ((rt_int)1LL))), 0); S_R23(&rc2001.f_MLO, r_SOME(((rt_int)0LL)), 0); S_R23(&rc2001.f_MHI, r_SOME(rt_sub(l_N_2000, ((rt_int)1LL))), 0); rc2001.f_ANYARG = 0; rc2001.f_NEXT = NULL; rc2001; }), 0);
if ((l_TAIL_1996 == NULL))
{
((*(R22 *)rt_nil_check(l_A_1991))).f_BOUNDS = l_B_1999;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_1996))).f_NEXT = l_B_1999;
}
l_TAIL_1996 = l_B_1999;
}
l_Q_1995 = ((*(R17 *)rt_nil_check(l_Q_1995))).f_A;
}
RT_B_TICK();
if (it1998 == it1998_hi) break;
} } L_end1997: ;
}
S_R9(&l_R_1993, r_FMT2(rt_str("@@); ", 5), l_R_1993, l_TMP_1992), 0);
l_P_1988 = p_E;
{ rt_int it2003_lo = ((rt_int)0LL), it2003_hi = rt_sub(l_DIMS_1987, ((rt_int)1LL));
for (rt_int it2003 = it2003_lo; it2003 <= it2003_hi; it2003++) {
{
S_R9(&l_R_1993, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_1993, l_TMP_1992, r_NUM(it2003), l_TMP_1992), 0);
S_R9(&l_R_1993, r_FMT3(rt_str("@@] = @;", 8), l_R_1993, r_NUM(it2003), r_NUM(rt_sub(r_LIST_LENGTH(((*(R17 *)rt_nil_check(l_P_1988))).f_A), ((rt_int)1LL)))), 0);
l_P_1988 = ((*(R17 *)rt_nil_check(l_P_1988))).f_A;
}
RT_B_TICK();
if (it2003 == it2003_hi) break;
} } L_end2002: ;
S_R9(&l_R_1993, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_1993, l_TMP_1992, l_TMP_1992, r_NUM(l_DIMS_1987)), 0);
S_R9(&l_R_1993, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_1993, l_TMP_1992, l_TMP_1992), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_1987, l_A_1991, l_TMP_1992, &l_R_1993, &l_K_1994);
{ R26 rv2004 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1993, l_TMP_1992), l_A_1991);
return rv2004; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_SHAPE(R17 * p_E, rt_int p_DIMS) { RT_B_TICK(); 
R17 * l_P_2005; memset(&l_P_2005, 0, sizeof l_P_2005);
l_P_2005 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((p_DIMS <= ((rt_int)1LL)))
{
return;
}
for (;;) {
if ((l_P_2005 == NULL)) goto L_end2006;
{
if (((!(((*(R17 *)rt_nil_check(l_P_2005))).f_KIND == g_N_ARRCONS)) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_ARRCONS))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
if ((!r_SAME_SHAPE(l_P_2005, ((*(R17 *)rt_nil_check(p_E))).f_A)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
r_CHECK_SHAPE(l_P_2005, rt_sub(p_DIMS, ((rt_int)1LL)));
l_P_2005 = ((*(R17 *)rt_nil_check(l_P_2005))).f_NEXT;
}
RT_B_TICK();
} L_end2006: ;
}
static rt_int r_SAME_SHAPE(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
if (((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) || (!(((*(R17 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS))))
{
{ rt_int rv2007 = ((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) && (!(((*(R17 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS)));
return rv2007; }
}
if ((!(r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_A))).f_A) == r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_B))).f_A))))
{
{ rt_int rv2008 = 0;
return rv2008; }
}
{ rt_int rv2009 = r_SAME_SHAPE(((*(R17 *)rt_nil_check(p_A))).f_A, ((*(R17 *)rt_nil_check(p_B))).f_A);
return rv2009; }
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R17 * p_E, rt_int p_DIMS, R22 * p_A, R9 p_TMP, R9 *p_R, rt_int *p_K) { RT_B_TICK(); 
R17 * l_P_2010; memset(&l_P_2010, 0, sizeof l_P_2010);
l_P_2010 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_2010 == NULL)) goto L_end2011;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_2010, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R17 *)rt_nil_check(l_P_2010))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2010))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R9(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R9(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_2010, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R17 *)rt_nil_check(l_P_2010))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_2010 = ((*(R17 *)rt_nil_check(l_P_2010))).f_NEXT;
}
RT_B_TICK();
} L_end2011: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R22 * l_T_2012; memset(&l_T_2012, 0, sizeof l_T_2012);
l_T_2012 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_2012))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_2012))).f_DIMS = p_DIMS;
S_R9(&((*(R22 *)rt_nil_check(l_T_2012))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv2013 = l_T_2012;
return rv2013; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R17 * p_E) { RT_B_TICK(); 
R22 * l_T_2014; memset(&l_T_2014, 0, sizeof l_T_2014);
l_T_2014 = r_RESOLVE(((*(R17 *)rt_nil_check(p_E))).f_A);
R26 l_V_2015; memset(&l_V_2015, 0, sizeof l_V_2015);
S_R26(&l_V_2015, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, l_T_2014), 0);
R22 * l_RT_2016; memset(&l_RT_2016, 0, sizeof l_RT_2016);
l_RT_2016 = r_REAL_TYPE(l_T_2014);
if (((((*(R22 *)rt_nil_check((l_V_2015).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_2016))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R22 *)rt_nil_check(l_RT_2016))).f_KIND == g_T_INT))
{
{ R26 rv2017 = r_MKET(r_RANGE_CHECK(l_RT_2016, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_2015).f_C), r_NO_TEXT()), l_T_2014);
return rv2017; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_2016))).f_KIND == g_T_BOOL))
{
{ R26 rv2018 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_2015).f_C), l_T_2014);
return rv2018; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_2016))).f_KIND == g_T_ENUM))
{
{ R26 rv2019 = r_MKET(r_ENUM_OF_BITS(l_RT_2016, (l_V_2015).f_C), l_T_2014);
return rv2019; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_2016))).f_KIND == g_T_FLOAT))
{
{ R26 rv2020 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_2015).f_C), l_T_2014);
return rv2020; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_2016))).f_KIND == g_T_STR))
{
{ R26 rv2021 = r_MKET(r_FMT4(rt_str("rt_b_chars_of_bits(@, @, @, @)", 30), (l_V_2015).f_C, r_NUM(r_CHAR_SIZE(l_RT_2016)), r_NUM(r_PACKING_OF(l_RT_2016)), r_CHAR_REPS(l_RT_2016)), l_T_2014);
return rv2021; }
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{
R9 l_C_2022; memset(&l_C_2022, 0, sizeof l_C_2022);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 1;
S_R9(&l_C_2022, r_CONVERT(l_V_2015, l_T_2014, ((*(R17 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), 0);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 0;
if ((((((((*(R22 *)rt_nil_check(l_RT_2016))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_2016))).f_KIND == g_T_BITS))) && ((((*(R22 *)rt_nil_check(l_RT_2016))).f_LEN_C).f_LEN > ((rt_int)0LL))) && (!(((((*(R22 *)rt_nil_check(l_RT_2016))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check((l_V_2015).f_T))).f_MLEN).f_OK)))))
{
S_R9(&l_C_2022, r_FMT2(rt_str("rt_b_tlen(@, @)", 15), l_C_2022, ((*(R22 *)rt_nil_check(l_RT_2016))).f_LEN_C), 0);
}
{ R26 rv2023 = r_MKET(l_C_2022, l_T_2014);
return rv2023; }
}
rt_raise(RT_X_INIT);
}
static R9 r_ENUM_OF_BITS(R22 * p_T, R9 p_C) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R9 rv2024 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv2024; }
}
}
{ R9 rv2025 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv2025; }
rt_raise(RT_X_INIT);
}
static R9 r_REP_TABLE(R22 * p_T) { RT_B_TICK(); 
R9 l_NAME_2026; memset(&l_NAME_2026, 0, sizeof l_NAME_2026);
S_R9(&l_NAME_2026, r_NEW_NAME(rt_str("reps", 4)), 0);
R17 * l_L_2027; memset(&l_L_2027, 0, sizeof l_L_2027);
l_L_2027 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R9 l_R_2028; memset(&l_R_2028, 0, sizeof l_R_2028);
S_R9(&l_R_2028, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_2027 == NULL)) goto L_end2029;
{
{
R17 * l_V_2030; memset(&l_V_2030, 0, sizeof l_V_2030);
l_V_2030 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_2031; memset(&l_FOUND_2031, 0, sizeof l_FOUND_2031);
l_FOUND_2031 = 0;
for (;;) {
if ((l_V_2030 == NULL)) goto L_end2032;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_V_2030))).f_NAME, ((*(R17 *)rt_nil_check(l_L_2027))).f_NAME))
{
S_R9(&l_R_2028, r_FMT2(rt_str("@@, ", 4), l_R_2028, (r_EXPR(((*(R17 *)rt_nil_check(l_V_2030))).f_A, NULL)).f_C), 0);
l_FOUND_2031 = 1;
}
l_V_2030 = ((*(R17 *)rt_nil_check(l_V_2030))).f_NEXT;
}
RT_B_TICK();
} L_end2032: ;
if ((!l_FOUND_2031))
{
r_FAILT(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R17 *)rt_nil_check(l_L_2027))).f_NAME);
}
}
l_L_2027 = ((*(R17 *)rt_nil_check(l_L_2027))).f_NEXT;
}
RT_B_TICK();
} L_end2029: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_2026, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_2028, l_NAME_2026, l_NAME_2026));
{ R9 rv2033 = r_FMT2(rt_str("@, @", 4), l_NAME_2026, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv2033; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SEM_2034; memset(&l_SEM_2034, 0, sizeof l_SEM_2034);
l_SEM_2034 = r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(((*(R7 *)rt_nil_check(g_W))).f_NEW_OK == p_E))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("NEW without PTR$ or SEMAPHORE$ only initializes a declaration or is the source ", 79), rt_str("of an assignment (3.10.2, 3.11.2)", 33)));
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_2034 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_2034)
{
{
R22 * l_T_2035; memset(&l_T_2035, 0, sizeof l_T_2035);
l_T_2035 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_2035 = p_WANT;
}
}
{ R26 rv2036 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_2035))).f_SCALE)), l_T_2035);
return rv2036; }
}
}
{
R22 * l_T_2037; memset(&l_T_2037, 0, sizeof l_T_2037);
l_T_2037 = r_RESOLVE(r_EXPR_TO_TS(((*(R17 *)rt_nil_check(p_E))).f_A));
R22 * l_P_2038; memset(&l_P_2038, 0, sizeof l_P_2038);
l_P_2038 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_2038))).f_TARGET = l_T_2037;
((*(R22 *)rt_nil_check(l_P_2038))).f_TARGET_TS = ((*(R17 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_2037))
{
{ R26 rv2039 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_b_new(sizeof *p); @ p; })", 38), r_CTYPE(l_T_2037), r_INIT_CODE(l_T_2037, r_MK(rt_str("(*p)", 4)))), l_P_2038);
return rv2039; }
}
{ R26 rv2040 = r_MKET(r_FMT2(rt_str("((@ *)rt_b_new(sizeof (@)))", 27), r_CTYPE(l_T_2037), r_CTYPE(l_T_2037)), l_P_2038);
return rv2040; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_NTH(R17 * p_L, rt_int p_K) { RT_B_TICK(); 
R17 * l_P_2041; memset(&l_P_2041, 0, sizeof l_P_2041);
l_P_2041 = p_L;
{ rt_int it2043_lo = ((rt_int)1LL), it2043_hi = p_K;
for (rt_int it2043 = it2043_lo; it2043 <= it2043_hi; it2043++) {
{
if ((!(l_P_2041 == NULL)))
{
l_P_2041 = ((*(R17 *)rt_nil_check(l_P_2041))).f_NEXT;
}
}
RT_B_TICK();
if (it2043 == it2043_hi) break;
} } L_end2042: ;
{ R17 * rv2044 = l_P_2041;
return rv2044; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R17 * p_E, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
rt_int l_N_2045; memset(&l_N_2045, 0, sizeof l_N_2045);
l_N_2045 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A);
if (((l_N_2045 < p_LO) || (l_N_2045 > p_HI)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
}
static R9 r_ROUNDING_ARG(R17 * p_E, rt_int p_N) { RT_B_TICK(); 
R17 * l_L_2046; memset(&l_L_2046, 0, sizeof l_L_2046);
l_L_2046 = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_2046 == NULL)))
{
if (((((*(R17 *)rt_nil_check(l_L_2046))).f_KIND == g_N_QUAL) && ((((*(R17 *)rt_nil_check(l_L_2046))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_L_2046))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R9 rv2047 = r_MK(rt_str("1", 1));
return rv2047; }
}
{ R9 rv2048 = r_MK(rt_str("0", 1));
return rv2048; }
}
if (((((*(R17 *)rt_nil_check(l_L_2046))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_L_2046))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_L_2046))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R9 rv2049 = r_MK(rt_str("1", 1));
return rv2049; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_L_2046))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R9 rv2050 = r_MK(rt_str("0", 1));
return rv2050; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R9 rv2051 = r_MK(rt_str("1", 1));
return rv2051; }
}
{ R9 rv2052 = r_MK(rt_str("0", 1));
return rv2052; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R17 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv2053 = 0;
return rv2053; }
}
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv2054 = (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv2054; }
}
{ rt_int rv2055 = 0;
return rv2055; }
rt_raise(RT_X_INIT);
}
static R17 * r_ARG_EXPR(R17 * p_E) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R17 * rv2056 = ((*(R17 *)rt_nil_check(p_E))).f_A;
return rv2056; }
}
{ R17 * rv2057 = p_E;
return rv2057; }
rt_raise(RT_X_INIT);
}
static R9 r_OPERATOR_SYMBOL(R9 p_NAME) { RT_B_TICK(); 
rstr l_NAMES_2058; memset(&l_NAMES_2058, 0, sizeof l_NAMES_2058);
l_NAMES_2058 = rt_b_str_new(((rt_int)299LL), 0);
rt_b_assign(&l_NAMES_2058, rt_str(" ADD_:+ SUBTRACT_:- MULTIPLY_:* DIVIDE_:/ MODULUS_:MOD EXPONENTIATE_:** CONCATENATE_:!! EQUAL_:= UNEQUAL_:<> GREATER_THAN_:> LESS_THAN_:< GREATER_EQUAL_:>= LESS_EQUAL_:<= AND_:AND OR_:OR XOR_:XOR IMPLIES_:-> MD_ADD_:+ MD_SUBTRACT_:- MD_MULTIPLY_:* MD_DIVIDE_:/ NEGATE_:- MON_PLUS_:+ COMPLEMENT_:NOT ", 299));
rt_int l_L_2059; memset(&l_L_2059, 0, sizeof l_L_2059);
l_L_2059 = (p_NAME).f_LEN;
{ rt_int it2061_lo = ((rt_int)0LL), it2061_hi = rt_sub(rt_sub(((rt_int)299LL), l_L_2059), ((rt_int)2LL));
for (rt_int it2061 = it2061_lo; it2061 <= it2061_hi; it2061++) {
{
if ((rt_b_eq(rt_b_slice(l_NAMES_2058, it2061, it2061), rt_str(" ", 1)) && rt_b_eq(rt_b_slice(l_NAMES_2058, rt_add(rt_add(it2061, l_L_2059), ((rt_int)1LL)), rt_add(rt_add(it2061, l_L_2059), ((rt_int)1LL))), rt_str(":", 1))))
{
if (rt_b_eq(rt_b_slice(l_NAMES_2058, rt_add(it2061, ((rt_int)1LL)), rt_add(it2061, l_L_2059)), r_STR(p_NAME, l_L_2059)))
{
{
rt_int l_J_2062; memset(&l_J_2062, 0, sizeof l_J_2062);
l_J_2062 = rt_add(rt_add(it2061, l_L_2059), ((rt_int)2LL));
for (;;) {
if (rt_b_eq(rt_b_slice(l_NAMES_2058, l_J_2062, l_J_2062), rt_str(" ", 1))) goto L_end2063;
{
l_J_2062 = rt_add(l_J_2062, ((rt_int)1LL));
}
RT_B_TICK();
} L_end2063: ;
{ R9 rv2064 = r_MKN(rt_b_slice(l_NAMES_2058, rt_add(rt_add(it2061, l_L_2059), ((rt_int)2LL)), rt_sub(l_J_2062, ((rt_int)1LL))));
return rv2064; }
}
}
}
}
RT_B_TICK();
if (it2061 == it2061_hi) break;
} } L_end2060: ;
{ R9 rv2065 = r_NO_TEXT();
return rv2065; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_BUILTIN(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R9 l_NAME_2066; memset(&l_NAME_2066, 0, sizeof l_NAME_2066);
S_R9(&l_NAME_2066, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2067; memset(&l_LINE_2067, 0, sizeof l_LINE_2067);
l_LINE_2067 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
rt_int l_N_2068; memset(&l_N_2068, 0, sizeof l_N_2068);
l_N_2068 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A);
if ((r_TEQS(l_NAME_2066, rt_str("STORE_", 6)) || r_TEQS(l_NAME_2066, rt_str("SUBSTRING_STORE_", 16))))
{
{
R17 * l_TGT_2069; memset(&l_TGT_2069, 0, sizeof l_TGT_2069);
l_TGT_2069 = r_FIRST_OUT_ARG(p_E);
R17 * l_S_2070; memset(&l_S_2070, 0, sizeof l_S_2070);
l_S_2070 = r_NEW_NODE(g_N_ASSIGN, l_LINE_2067);
R17 * l_SRC_2071; memset(&l_SRC_2071, 0, sizeof l_SRC_2071);
l_SRC_2071 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if (((l_TGT_2069 == NULL) || (l_SRC_2071 == NULL)))
{
r_FAILT(l_LINE_2067, rt_str("the wrong arguments for ", 24), l_NAME_2066);
}
if (r_TEQS(l_NAME_2066, rt_str("STORE_", 6)))
{
((*(R17 *)rt_nil_check(l_S_2070))).f_A = l_TGT_2069;
}
else
{
if ((l_N_2068 < ((rt_int)3LL)))
{
r_FAIL(l_LINE_2067, rt_str("SUBSTRING_STORE_ (V, L, U # X) (D.5)", 36));
}
((*(R17 *)rt_nil_check(l_S_2070))).f_A = r_NEW_NODE(g_N_SUBSTR, l_LINE_2067);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_2070))).f_A))).f_A = l_TGT_2069;
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_2070))).f_A))).f_B = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_2070))).f_A))).f_C = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
}
((*(R17 *)rt_nil_check(l_S_2070))).f_B = r_QUALIFIED(r_COPY_NODE(l_SRC_2071), r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, rt_add(((rt_int)1LL), rt_mul(((rt_int)2LL), r_BOOL_INT(r_TEQS(l_NAME_2066, rt_str("SUBSTRING_STORE_", 16)))))), l_LINE_2067);
{
R14 l_SAVED_CODE_2072; memset(&l_SAVED_CODE_2072, 0, sizeof l_SAVED_CODE_2072);
S_R14(&l_SAVED_CODE_2072, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R9 l_C_2073; memset(&l_C_2073, 0, sizeof l_C_2073);
S_R9(&l_C_2073, r_MK(rt_str("({", 2)), 0);
R15 * l_P_2074; memset(&l_P_2074, 0, sizeof l_P_2074);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2075; memset(&rc2075, 0, sizeof rc2075);  rc2075.f_HEAD = NULL; rc2075.f_TAIL = NULL; rc2075; }), 0);
r_ASSIGN_STMT(l_S_2070);
l_P_2074 = (((*(R7 *)rt_nil_check(g_W))).f_CODE).f_HEAD;
for (;;) {
if ((l_P_2074 == NULL)) goto L_end2076;
{
S_R9(&l_C_2073, r_FMT2(rt_str("@ @", 3), l_C_2073, ((*(R15 *)rt_nil_check(l_P_2074))).f_T), 0);
l_P_2074 = ((*(R15 *)rt_nil_check(l_P_2074))).f_NEXT;
}
RT_B_TICK();
} L_end2076: ;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2072, 0);
{ R26 rv2077 = r_MKET(r_CATS(l_C_2073, rt_str(" })", 3)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2077; }
}
}
}
if (r_TEQS(l_NAME_2066, rt_str("SUBSTRING_", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R17 * l_S_2078; memset(&l_S_2078, 0, sizeof l_S_2078);
l_S_2078 = r_NEW_NODE(g_N_SUBSTR, l_LINE_2067);
((*(R17 *)rt_nil_check(l_S_2078))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_A;
((*(R17 *)rt_nil_check(l_S_2078))).f_B = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R17 *)rt_nil_check(l_S_2078))).f_C = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
((*(R17 *)rt_nil_check(l_S_2078))).f_A = r_COPY_NODE(((*(R17 *)rt_nil_check(p_E))).f_A);
{ R26 rv2079 = r_EXPR(l_S_2078, p_WANT);
return rv2079; }
}
}
{
R9 l_SYM__2080; memset(&l_SYM__2080, 0, sizeof l_SYM__2080);
S_R9(&l_SYM__2080, r_OPERATOR_SYMBOL(l_NAME_2066), 0);
rt_int l_UNARY_OP_2081; memset(&l_UNARY_OP_2081, 0, sizeof l_UNARY_OP_2081);
l_UNARY_OP_2081 = ((r_TEQS(l_NAME_2066, rt_str("NEGATE_", 7)) || r_TEQS(l_NAME_2066, rt_str("MON_PLUS_", 9))) || r_TEQS(l_NAME_2066, rt_str("COMPLEMENT_", 11)));
R17 * l_X_2082; memset(&l_X_2082, 0, sizeof l_X_2082);
if (l_UNARY_OP_2081)
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)3LL));
l_X_2082 = r_NEW_NODE(g_N_UNOP, l_LINE_2067);
S_R9(&((*(R17 *)rt_nil_check(l_X_2082))).f_NAME, l_SYM__2080, 0);
((*(R17 *)rt_nil_check(l_X_2082))).f_A = r_COPY_NODE(((*(R17 *)rt_nil_check(p_E))).f_A);
{ R26 rv2083 = r_EXPR(r_QUALIFIED(l_X_2082, r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), l_LINE_2067), p_WANT);
return rv2083; }
}
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)4LL));
l_X_2082 = r_BIN_NODE(l_SYM__2080, l_LINE_2067, r_COPY_NODE(((*(R17 *)rt_nil_check(p_E))).f_A), r_COPY_NODE(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))));
if (r_TEQS(l_SYM__2080, rt_str("/", 1)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL)).f_T)))).f_KIND == g_T_FLOAT)))
{
S_R9(&((*(R17 *)rt_nil_check(l_X_2082))).f_NAME, r_MK(rt_str("//", 2)), 0);
}
}
if (rt_b_eq(rt_b_slice(r_STR(l_NAME_2066, (l_NAME_2066).f_LEN), ((rt_int)0LL), ((rt_int)2LL)), rt_str("MD_", 3)))
{
((*(R17 *)rt_nil_check(l_X_2082))).f_FL = ((rt_int)2LL);
}
{ R26 rv2084 = r_EXPR(r_QUALIFIED(l_X_2082, r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_2067), p_WANT);
return rv2084; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_QUALIFIED(R17 * p_X, R17 * p_Q, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_2085; memset(&l_R_2085, 0, sizeof l_R_2085);
l_R_2085 = p_X;
R17 * l_P_2086; memset(&l_P_2086, 0, sizeof l_P_2086);
l_P_2086 = p_Q;
for (;;) {
if ((l_P_2086 == NULL)) goto L_end2087;
{
if ((l_R_2085 == p_X))
{
l_R_2085 = r_NEW_NODE(g_N_QUAL, p_LINE);
((*(R17 *)rt_nil_check(l_R_2085))).f_A = p_X;
}
if (((((((*(R17 *)rt_nil_check(l_P_2086))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_P_2086))).f_KIND == g_N_ENUMLIT))) && r_IS_ROUNDING_NAME(((*(R17 *)rt_nil_check(l_P_2086))).f_NAME)))
{
S_R9(&((*(R17 *)rt_nil_check(l_R_2085))).f_NAME, ((*(R17 *)rt_nil_check(l_P_2086))).f_NAME, 0);
}
else
{
((*(R17 *)rt_nil_check(l_R_2085))).f_B = l_P_2086;
}
l_P_2086 = ((*(R17 *)rt_nil_check(l_P_2086))).f_NEXT;
}
RT_B_TICK();
} L_end2087: ;
{ R17 * rv2088 = l_R_2085;
return rv2088; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING_NAME(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv2089 = (!(r_FIND_LITERAL(p_NAME, r_ROUNDINGS_TYPE()) == NULL));
return rv2089; }
rt_raise(RT_X_INIT);
}
static R22 * r_ROUNDINGS_TYPE(void) { RT_B_TICK(); 
R12 * l_Y_2090; memset(&l_Y_2090, 0, sizeof l_Y_2090);
l_Y_2090 = r_LOOKUP(r_MKN(rt_str("ROUNDINGS", 9)));
if ((!(l_Y_2090 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2090))).f_KIND == g_Y_TYPE))
{
{
R22 * l_T_2091; memset(&l_T_2091, 0, sizeof l_T_2091);
l_T_2091 = r_REAL_TYPE(r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_2090))).f_NAME, ((rt_int)0LL)));
if ((((*(R22 *)rt_nil_check(l_T_2091))).f_KIND == g_T_ENUM))
{
{ R22 * rv2092 = l_T_2091;
return rv2092; }
}
}
}
}
{ R22 * rv2093 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS;
return rv2093; }
rt_raise(RT_X_INIT);
}
static rt_int r_PREDEFINED_ROUNDING(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL))
{
{ rt_int rv2094 = 1;
return rv2094; }
}
if (((((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2095 = 1;
return rv2095; }
}
{ rt_int rv2096 = (((r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9))) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_R", 8))) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8)));
return rv2096; }
rt_raise(RT_X_INIT);
}
static R17 * r_FIRST_OUT_ARG(R17 * p_E) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL)))
{
{ R17 * rv2097 = ((*(R17 *)rt_nil_check(p_E))).f_C;
return rv2097; }
}
{ R17 * rv2098 = ((*(R17 *)rt_nil_check(p_E))).f_B;
return rv2098; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_OBJECT_ARG(R17 * p_L) { RT_B_TICK(); 
R17 * l_A_2099; memset(&l_A_2099, 0, sizeof l_A_2099);
l_A_2099 = p_L;
for (;;) {
if ((l_A_2099 == NULL)) goto L_end2100;
{
if ((((*(R17 *)rt_nil_check(l_A_2099))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_2101; memset(&l_Y_2101, 0, sizeof l_Y_2101);
l_Y_2101 = r_LOOKUP(((*(R17 *)rt_nil_check(l_A_2099))).f_NAME);
if ((!(l_Y_2101 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_2101))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_2101))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_2101))).f_T == NULL))))
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2101))).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
{ rt_int rv2102 = 1;
return rv2102; }
}
}
}
}
}
l_A_2099 = ((*(R17 *)rt_nil_check(l_A_2099))).f_NEXT;
}
RT_B_TICK();
} L_end2100: ;
{ rt_int rv2103 = 0;
return rv2103; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R9 l_NAME_2104; memset(&l_NAME_2104, 0, sizeof l_NAME_2104);
S_R9(&l_NAME_2104, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2105; memset(&l_LINE_2105, 0, sizeof l_LINE_2105);
l_LINE_2105 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
if ((!(r_CUR_GENERIC() == NULL)))
{
if (r_GENERIC_OBJECT_ARG(((*(R17 *)rt_nil_check(p_E))).f_A))
{
r_REQUIRE_WHERE(l_NAME_2104, l_LINE_2105);
}
}
if ((((((r_OPERATOR_SYMBOL(l_NAME_2104)).f_LEN > ((rt_int)0LL)) || r_TEQS(l_NAME_2104, rt_str("STORE_", 6))) || r_TEQS(l_NAME_2104, rt_str("SUBSTRING_", 10))) || r_TEQS(l_NAME_2104, rt_str("SUBSTRING_STORE_", 16))))
{
{ R26 rv2106 = r_OPERATOR_BUILTIN(p_E, p_WANT);
return rv2106; }
}
if ((r_TEQS(l_NAME_2104, rt_str("PUT", 3)) || r_TEQS(l_NAME_2104, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2107; memset(&l_V_2107, 0, sizeof l_V_2107);
S_R26(&l_V_2107, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2107).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_2105, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
r_ASCII_ONLY((l_V_2107).f_T, rt_str("the terminal", 12), l_LINE_2105);
if (r_TEQS(l_NAME_2104, rt_str("PUT", 3)))
{
{ R26 rv2108 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_2107).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2108; }
}
{ R26 rv2109 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_2107).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2109; }
}
}
else if (r_TEQS(l_NAME_2104, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2110 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2110; }
}
else if (r_TEQS(l_NAME_2104, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2111 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2111; }
}
else if (r_TEQS(l_NAME_2104, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2112 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2112; }
}
else if (r_TEQS(l_NAME_2104, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2113 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2113; }
}
else if (r_TEQS(l_NAME_2104, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2114 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2114; }
}
else if (r_TEQS(l_NAME_2104, rt_str("REAL_TIME", 9)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2115 = r_MKET(r_MK(rt_str("rt_b_real_time()", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2115; }
}
else if (r_TEQS(l_NAME_2104, rt_str("ARGUMENT_COUNT", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2116 = r_MKET(r_MK(rt_str("rt_argc()", 9)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2116; }
}
else if (r_TEQS(l_NAME_2104, rt_str("ARGUMENT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2117 = r_MKET(r_FMT1(rt_str("rt_arg(@)", 9), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2117; }
}
else if ((r_TEQS(l_NAME_2104, rt_str("FILE_EXISTS", 11)) || r_TEQS(l_NAME_2104, rt_str("READ_FILE", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2118; memset(&l_V_2118, 0, sizeof l_V_2118);
S_R26(&l_V_2118, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2118).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_2105, rt_str("a file is named by a character string: ", 39), l_NAME_2104);
}
if (r_TEQS(l_NAME_2104, rt_str("FILE_EXISTS", 11)))
{
{ R26 rv2119 = r_MKET(r_FMT1(rt_str("rt_b_file_exists(@)", 19), (l_V_2118).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2119; }
}
{ R26 rv2120 = r_MKET(r_FMT1(rt_str("rt_read_file(@)", 15), (l_V_2118).f_C), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2120; }
}
}
else if (r_TEQS(l_NAME_2104, rt_str("WRITE_FILE", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_N_2121; memset(&l_N_2121, 0, sizeof l_N_2121);
S_R26(&l_N_2121, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R26 l_V_2122; memset(&l_V_2122, 0, sizeof l_V_2122);
S_R26(&l_V_2122, r_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT, NULL), 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_N_2121).f_T)))).f_KIND == g_T_STR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2122).f_T)))).f_KIND == g_T_STR))))
{
r_FAIL(l_LINE_2105, rt_str("WRITE_FILE (name, text) takes two character strings", 51));
}
{ R26 rv2123 = r_MKET(r_FMT2(rt_str("rt_write_file(@, @)", 19), (l_N_2121).f_C, (l_V_2122).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2123; }
}
}
if (r_TEQS(l_NAME_2104, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2124 = r_IMAGE_OF(r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_2105);
return rv2124; }
}
else if (r_TEQS(l_NAME_2104, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv2125 = r_TO_FIXED_CALL(p_E);
return rv2125; }
}
else if (r_TEQS(l_NAME_2104, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_2126; memset(&l_V_2126, 0, sizeof l_V_2126);
S_R26(&l_V_2126, r_EXPR(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), NULL), 0);
R23 l_P_2127; memset(&l_P_2127, 0, sizeof l_P_2127);
S_R23(&l_P_2127, r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_VT_2128; memset(&l_VT_2128, 0, sizeof l_VT_2128);
l_VT_2128 = r_REAL_TYPE((l_V_2126).f_T);
R22 * l_T_2129; memset(&l_T_2129, 0, sizeof l_T_2129);
l_T_2129 = r_FLOAT_TYPE((l_P_2127).f_V);
R9 l_SINGLE_2130; memset(&l_SINGLE_2130, 0, sizeof l_SINGLE_2130);
S_R9(&l_SINGLE_2130, r_SINGLE_C((l_P_2127).f_V), 0);
R9 l_TR_2131; memset(&l_TR_2131, 0, sizeof l_TR_2131);
S_R9(&l_TR_2131, r_MK(rt_str("0", 1)), 0);
if (((r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A) == ((rt_int)3LL)) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT))).f_KIND == g_N_QUAL)))
{
{
R17 * l_R_2132; memset(&l_R_2132, 0, sizeof l_R_2132);
l_R_2132 = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
if ((l_R_2132 == NULL))
{
l_R_2132 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT;
}
if ((((*(R17 *)rt_nil_check(l_R_2132))).f_KIND == g_N_QUAL))
{
l_R_2132 = r_LIT_NODE(r_STR(((*(R17 *)rt_nil_check(l_R_2132))).f_NAME, (((*(R17 *)rt_nil_check(l_R_2132))).f_NAME).f_LEN), l_LINE_2105);
}
if (r_TEQS(((*(R17 *)rt_nil_check(l_R_2132))).f_NAME, rt_str("TRUNCATED", 9)))
{
S_R9(&l_TR_2131, r_MK(rt_str("1", 1)), 0);
}
else if ((!r_TEQS(((*(R17 *)rt_nil_check(l_R_2132))).f_NAME, rt_str("ROUNDED", 7))))
{
r_FAIL(l_LINE_2105, rt_str("TO_FLOAT is predefined for ROUNDED and TRUNCATED (3.3.6.1)", 58));
}
}
}
if ((((*(R22 *)rt_nil_check(l_VT_2128))).f_KIND == g_T_INT))
{
{ R26 rv2133 = r_MKET(r_FMT4(rt_str("rt_b_float_of_fix_r(@, @, @, @)", 31), (l_V_2126).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_2128))).f_SCALE), l_SINGLE_2130, l_TR_2131), l_T_2129);
return rv2133; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_2128))).f_KIND == g_T_FLOAT))
{
if (((((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) && (r_IMP_PRECISION_OF((l_P_2127).f_V) > r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_2128))).f_SCALE))))
{
{
R17 * l_Q_2134; memset(&l_Q_2134, 0, sizeof l_Q_2134);
l_Q_2134 = r_NEW_NODE(g_N_QUAL, l_LINE_2105);
R17 * l_SAVED_Q_2135; memset(&l_SAVED_Q_2135, 0, sizeof l_SAVED_Q_2135);
l_SAVED_Q_2135 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_L_2136; memset(&l_L_2136, 0, sizeof l_L_2136);
((*(R17 *)rt_nil_check(l_Q_2134))).f_B = r_ARG_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_Q_2134;
S_R26(&l_L_2136, r_EXPR(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_2135;
{ R26 rv2137 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_L_2136).f_C, l_SINGLE_2130, l_TR_2131), l_T_2129);
return rv2137; }
}
}
{ R26 rv2138 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_V_2126).f_C, l_SINGLE_2130, l_TR_2131), l_T_2129);
return rv2138; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_2128))).f_KIND == g_T_STR))
{
if (((!(((*(R22 *)rt_nil_check(l_VT_2128))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(l_VT_2128))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))))
{
r_FAIL(l_LINE_2105, rt_str("TO_FLOAT is predefined for ASCII strings only (3.3.6.1)", 55));
}
{ R26 rv2139 = r_MKET(r_FMT3(rt_str("rt_b_fconv(rt_b_float_of_str(@), @, @, 0)", 41), (l_V_2126).f_C, l_SINGLE_2130, l_TR_2131), l_T_2129);
return rv2139; }
}
r_FAIL(l_LINE_2105, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_2104, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2140 = r_BITS_OF(r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_2105);
return rv2140; }
}
else if (r_TEQS(l_NAME_2104, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2141; memset(&l_V_2141, 0, sizeof l_V_2141);
S_R26(&l_V_2141, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2141).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv2142 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_2141).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_2141).f_T))).f_SCALE));
return rv2142; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2141).f_T)))).f_KIND == g_T_FLOAT))
{
{ R26 rv2143 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_2141).f_C), (l_V_2141).f_T);
return rv2143; }
}
r_FAIL(l_LINE_2105, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_2104, rt_str("SUCC", 4)) || r_TEQS(l_NAME_2104, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2144; memset(&l_V_2144, 0, sizeof l_V_2144);
S_R26(&l_V_2144, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_2145; memset(&l_T_2145, 0, sizeof l_T_2145);
l_T_2145 = r_REAL_TYPE((l_V_2144).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_2145))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_2105, rt_str("an enumerated value expected by ", 32), l_NAME_2104);
}
if (r_IS_UNORDERED(l_T_2145))
{
r_FAILT(l_LINE_2105, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_2104);
}
if (r_TEQS(l_NAME_2104, rt_str("SUCC", 4)))
{
{ R26 rv2146 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_2144).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2145))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_2145))).f_BASE);
return rv2146; }
}
{ R26 rv2147 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_2144).f_C), ((*(R22 *)rt_nil_check(l_T_2145))).f_BASE);
return rv2147; }
}
}
else if (r_TEQS(l_NAME_2104, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_2148; memset(&l_V_2148, 0, sizeof l_V_2148);
S_R26(&l_V_2148, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_2149; memset(&l_K_2149, 0, sizeof l_K_2149);
l_K_2149 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2148).f_T)))).f_KIND;
R22 * l_T_2150; memset(&l_T_2150, 0, sizeof l_T_2150);
l_T_2150 = r_NEW_TYP(l_K_2149);
if (((!(l_K_2149 == g_T_STR)) && (!(l_K_2149 == g_T_BITS))))
{
r_FAIL(l_LINE_2105, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_2150))).f_BASE = ((*(R22 *)rt_nil_check((l_V_2148).f_T))).f_BASE;
{ R26 rv2151 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_2148).f_C, r_INT_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_2150);
return rv2151; }
}
}
else if (r_TEQS(l_NAME_2104, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2152 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2152; }
}
else if (r_TEQS(l_NAME_2104, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2153 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv2153; }
}
else if (((r_TEQS(l_NAME_2104, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_2104, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_2104, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R9 l_BITS_2154; memset(&l_BITS_2154, 0, sizeof l_BITS_2154);
S_R9(&l_BITS_2154, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_2104, rt_str("OCT_OF", 6)))
{
S_R9(&l_BITS_2154, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_2104, rt_str("HEX_OF", 6)))
{
S_R9(&l_BITS_2154, r_MK(rt_str("4", 1)), 0);
}
{
R26 l_V_2155; memset(&l_V_2155, 0, sizeof l_V_2155);
S_R26(&l_V_2155, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2155).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_2105, rt_str("a character string expected by ", 31), l_NAME_2104);
}
r_ASCII_ONLY((l_V_2155).f_T, r_STR(l_NAME_2104, (l_NAME_2104).f_LEN), l_LINE_2105);
{ R26 rv2156 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (l_V_2155).f_C, l_BITS_2154), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv2156; }
}
}
}
else if ((r_TEQS(l_NAME_2104, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_2104, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R23 l_S_2157; memset(&l_S_2157, 0, sizeof l_S_2157);
S_R23(&l_S_2157, r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_A, rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_2158; memset(&l_R_2158, 0, sizeof l_R_2158);
S_R23(&l_R_2158, r_MANIFEST_INTEGER_ARG(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
if ((!((l_R_2158).f_V == ((rt_int)2LL))))
{
r_FAIL(l_LINE_2105, rt_str("only radix 2 is predefined (3.2.6.3)", 36));
}
r_CHECK_PRECISION_ARG(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_2105);
if (r_TEQS(l_NAME_2104, rt_str("FIXED_MIN", 9)))
{
{ R26 rv2159 = r_MKET(r_STD_MIN_C(), r_INT_TYPE((l_S_2157).f_V));
return rv2159; }
}
{ R26 rv2160 = r_MKET(r_STD_MAX_C(), r_INT_TYPE((l_S_2157).f_V));
return rv2160; }
}
}
else if (((r_TEQS(l_NAME_2104, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_2104, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_2104, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R23 l_P_2161; memset(&l_P_2161, 0, sizeof l_P_2161);
S_R23(&l_P_2161, r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_T_2162; memset(&l_T_2162, 0, sizeof l_T_2162);
l_T_2162 = r_FLOAT_TYPE((l_P_2161).f_V);
R9 l_C_2163; memset(&l_C_2163, 0, sizeof l_C_2163);
S_R9(&l_C_2163, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF((l_P_2161).f_V) == ((rt_int)7LL)))
{
S_R9(&l_C_2163, r_MK(rt_str("FLT", 3)), 0);
}
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
if (r_TEQS(l_C_2163, rt_str("FLT", 3)))
{
S_R9(&l_C_2163, r_MK(rt_str("0x1.fffffep+126", 15)), 0);
}
else
{
S_R9(&l_C_2163, r_MK(rt_str("0x1.fffffffffffffp+126", 22)), 0);
}
if (r_TEQS(l_NAME_2104, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv2164 = r_MKET(r_FMT1(rt_str("(-@)", 4), l_C_2163), l_T_2162);
return rv2164; }
}
else if (r_TEQS(l_NAME_2104, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv2165 = r_MKET(l_C_2163, l_T_2162);
return rv2165; }
}
S_R9(&l_C_2163, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF((l_P_2161).f_V) == ((rt_int)7LL)))
{
S_R9(&l_C_2163, r_MK(rt_str("FLT", 3)), 0);
}
}
if (r_TEQS(l_NAME_2104, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv2166 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_2163), l_T_2162);
return rv2166; }
}
else if (r_TEQS(l_NAME_2104, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv2167 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_2163), l_T_2162);
return rv2167; }
}
{ R26 rv2168 = r_MKET(r_FMT1(rt_str("@_EPSILON", 9), l_C_2163), l_T_2162);
return rv2168; }
}
}
else if (r_TEQS(l_NAME_2104, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2169 = r_INT_ET(r_IMP_PRECISION_OF((r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION())).f_V));
return rv2169; }
}
else if (r_TEQS(l_NAME_2104, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2170 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2170; }
}
else if (r_TEQS(l_NAME_2104, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2171 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2171; }
}
{ R26 rv2172 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv2172; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_2173; memset(&l_T_2173, 0, sizeof l_T_2173);
l_T_2173 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_2174; memset(&l_K_2174, 0, sizeof l_K_2174);
l_K_2174 = ((*(R22 *)rt_nil_check(l_T_2173))).f_KIND;
R22 * l_S_2175; memset(&l_S_2175, 0, sizeof l_S_2175);
l_S_2175 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_2174 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_2173))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv2176 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_2175);
return rv2176; }
}
{ R26 rv2177 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_2173))).f_SCALE)), l_S_2175);
return rv2177; }
}
else if ((l_K_2174 == g_T_FLOAT))
{
{ R26 rv2178 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_2173))).f_SCALE)), l_S_2175);
return rv2178; }
}
else if ((l_K_2174 == g_T_BOOL))
{
{ R26 rv2179 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_2175);
return rv2179; }
}
else if ((l_K_2174 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_2173))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv2180 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_2175);
return rv2180; }
}
{ R26 rv2181 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2173))).f_BASE))).f_CNAME, (p_V).f_C), l_S_2175);
return rv2181; }
}
else if (((l_K_2174 == g_T_STR) || (l_K_2174 == g_T_BITS)))
{
{ R26 rv2182 = r_MKET((p_V).f_C, l_S_2175);
return rv2182; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_2173));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R17 * p_E) { RT_B_TICK(); 
R26 l_V_2183; memset(&l_V_2183, 0, sizeof l_V_2183);
S_R26(&l_V_2183, r_EXPR(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_2184; memset(&l_T_2184, 0, sizeof l_T_2184);
l_T_2184 = r_REAL_TYPE((l_V_2183).f_T);
rt_int l_N_2185; memset(&l_N_2185, 0, sizeof l_N_2185);
l_N_2185 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A);
R9 l_RND_2186; memset(&l_RND_2186, 0, sizeof l_RND_2186);
S_R9(&l_RND_2186, r_ROUNDING_ARG(p_E, l_N_2185), 0);
rt_int l_S_2187; memset(&l_S_2187, 0, sizeof l_S_2187);
l_S_2187 = ((rt_int)0LL);
if (((l_N_2185 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
l_S_2187 = (r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL))).f_V;
}
{
rt_int l_K_2188; memset(&l_K_2188, 0, sizeof l_K_2188);
l_K_2188 = ((rt_int)2LL);
for (;;) {
if ((l_K_2188 >= l_N_2185)) goto L_end2189;
{
{
R17 * l_R_2190; memset(&l_R_2190, 0, sizeof l_R_2190);
l_R_2190 = r_ARG_EXPR(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, l_K_2188));
if ((r_IS_ROUNDING(l_R_2190) || (((((*(R17 *)rt_nil_check(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, l_K_2188)))).f_KIND == g_N_QUAL) && (l_K_2188 == rt_sub(l_N_2185, ((rt_int)1LL)))))))
{
if ((!(l_K_2188 == rt_sub(l_N_2185, ((rt_int)1LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the rounding mode is the last argument of TO_FIXED (3.2.6.1)", 60));
}
}
else if (((((((*(R17 *)rt_nil_check(l_R_2190))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_2190))).f_KIND == g_N_ENUMLIT))) && (!r_NAMES_OBJECT(((*(R17 *)rt_nil_check(l_R_2190))).f_NAME))))
{
r_CHECK_PRECISION_ARG(l_R_2190, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
else if (((((*(R17 *)rt_nil_check(l_R_2190))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(l_R_2190))).f_NAME, rt_str("PRECISION", 9))))
{
}
else
{
if ((!((r_MANIFEST_INTEGER_ARG(l_R_2190, rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL))).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 is predefined (3.2.6.1)", 36));
}
}
}
l_K_2188 = rt_add(l_K_2188, ((rt_int)1LL));
}
RT_B_TICK();
} L_end2189: ;
}
if (((((*(R22 *)rt_nil_check(l_T_2184))).f_KIND == g_T_INT) && (((((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) || (((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_INT)))))
{
{ R26 rv2191 = r_MKET(r_FMT3(rt_str("rt_b_fix_val(@, @, @)", 21), r_CSTRING(((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_NAME), r_NUM(l_S_2187), l_RND_2186), r_INT_TYPE(l_S_2187));
return rv2191; }
}
if ((((*(R22 *)rt_nil_check(l_T_2184))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_2192; memset(&l_SAVED_2192, 0, sizeof l_SAVED_2192);
l_SAVED_2192 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R9 l_C_2193; memset(&l_C_2193, 0, sizeof l_C_2193);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_2186, rt_str("1", 1));
S_R9(&l_C_2193, r_RESCALE_C((l_V_2183).f_C, ((*(R22 *)rt_nil_check(l_T_2184))).f_SCALE, l_S_2187), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_2192;
{ R26 rv2194 = r_MKET(l_C_2193, r_INT_TYPE(l_S_2187));
return rv2194; }
}
}
else if ((((*(R22 *)rt_nil_check(l_T_2184))).f_KIND == g_T_FLOAT))
{
{ R26 rv2195 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_2183).f_C, r_NUM(l_S_2187), l_RND_2186), r_INT_TYPE(l_S_2187));
return rv2195; }
}
else if (((((*(R22 *)rt_nil_check(l_T_2184))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_2184))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_2184))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_2184))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_2184))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2184))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv2196 = r_MKET(r_RESCALE_C((l_V_2183).f_C, ((rt_int)0LL), l_S_2187), r_INT_TYPE(l_S_2187));
return rv2196; }
}
else if ((((*(R22 *)rt_nil_check(l_T_2184))).f_KIND == g_T_BITS))
{
{ R26 rv2197 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_2183).f_C), ((rt_int)0LL), l_S_2187), r_INT_TYPE(l_S_2187));
return rv2197; }
}
else if ((((*(R22 *)rt_nil_check(l_T_2184))).f_KIND == g_T_STR))
{
r_ASCII_ONLY(l_T_2184, rt_str("TO_FIXED", 8), ((*(R17 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv2198 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_2183).f_C, r_NUM(l_S_2187), l_RND_2186), r_INT_TYPE(l_S_2187));
return rv2198; }
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_2183).f_T));
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_SIZE_OR(R22 * p_T) { RT_B_TICK(); 
R23 l_M_2199; memset(&l_M_2199, 0, sizeof l_M_2199);
S_R23(&l_M_2199, r_STATIC_SIZE(p_T), 0);
if ((l_M_2199).f_OK)
{
{ rt_int rv2200 = (l_M_2199).f_V;
return rv2200; }
}
{ rt_int rv2201 = rt_neg(((rt_int)1LL));
return rv2201; }
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_2202; memset(&l_T_2202, 0, sizeof l_T_2202);
l_T_2202 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_2203; memset(&l_K_2203, 0, sizeof l_K_2203);
l_K_2203 = ((*(R22 *)rt_nil_check(l_T_2202))).f_KIND;
if ((l_K_2203 == g_T_BITS))
{
{ R26 rv2204 = p_V;
return rv2204; }
}
else if ((l_K_2203 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_2202))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2202))).f_REPS))).f_B == NULL)))
{
{ R26 rv2205 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_2202)), r_BITS_TYPE(r_ENUM_SIZE(l_T_2202)));
return rv2205; }
}
}
{ R26 rv2206 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_2202))), r_BITS_TYPE(r_ENUM_SIZE(l_T_2202)));
return rv2206; }
}
else if ((l_K_2203 == g_T_STR))
{
{ R26 rv2207 = r_MKET(r_FMT4(rt_str("rt_b_bits_of_chars(@, @, @, @)", 30), (p_V).f_C, r_NUM(r_CHAR_SIZE(l_T_2202)), r_NUM(r_PACKING_OF(l_T_2202)), r_CHAR_REPS(l_T_2202)), r_BITS_TYPE(r_STATIC_SIZE_OR(l_T_2202)));
return rv2207; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_2203 == g_T_INT))
{
{ R26 rv2208 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(((*(R7 *)rt_nil_check(g_W))).f_WORD)), r_BITS_TYPE(((*(R7 *)rt_nil_check(g_W))).f_WORD));
return rv2208; }
}
else if ((l_K_2203 == g_T_BOOL))
{
{ R26 rv2209 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv2209; }
}
else if ((l_K_2203 == g_T_FLOAT))
{
{ R26 rv2210 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv2210; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_2202));
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
{ rt_int rv2211 = 0;
return rv2211; }
}
{ rt_int rv2212 = ((r_IS_LITERALISH(((*(R27 *)rt_nil_check(p_A))).f_E) || (((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv2212; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R27 * p_A) { RT_B_TICK(); 
rt_int l_N_2213; memset(&l_N_2213, 0, sizeof l_N_2213);
l_N_2213 = ((rt_int)0LL);
R27 * l_P_2214; memset(&l_P_2214, 0, sizeof l_P_2214);
l_P_2214 = p_A;
for (;;) {
if ((l_P_2214 == NULL)) goto L_end2215;
{
l_N_2213 = rt_add(l_N_2213, ((rt_int)1LL));
l_P_2214 = ((*(R27 *)rt_nil_check(l_P_2214))).f_NEXT;
}
RT_B_TICK();
} L_end2215: ;
{ rt_int rv2216 = l_N_2213;
return rv2216; }
rt_raise(RT_X_INIT);
}
static R27 * r_CALL_ARGS(R17 * p_E) { RT_B_TICK(); 
R27 * l_HEAD_2217; memset(&l_HEAD_2217, 0, sizeof l_HEAD_2217);
l_HEAD_2217 = NULL;
R27 * l_TAIL_2218; memset(&l_TAIL_2218, 0, sizeof l_TAIL_2218);
l_TAIL_2218 = NULL;
rt_int l_G_2219; memset(&l_G_2219, 0, sizeof l_G_2219);
l_G_2219 = ((rt_int)0LL);
{ rt_int it2221_lo = ((rt_int)0LL), it2221_hi = ((rt_int)2LL);
for (rt_int it2221 = it2221_lo; it2221 <= it2221_hi; it2221++) {
{
{
R17 * l_P_2222; memset(&l_P_2222, 0, sizeof l_P_2222);
l_P_2222 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((it2221 == ((rt_int)1LL)))
{
l_P_2222 = ((*(R17 *)rt_nil_check(p_E))).f_B;
}
else if ((it2221 == ((rt_int)2LL)))
{
l_P_2222 = ((*(R17 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_2222 == NULL)) goto L_end2223;
{
{
R27 * l_A_2224; memset(&l_A_2224, 0, sizeof l_A_2224);
l_A_2224 = r_NODE_ARG(l_P_2222, it2221, NULL);
if ((l_TAIL_2218 == NULL))
{
l_HEAD_2217 = l_A_2224;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2218))).f_NEXT = l_A_2224;
}
l_TAIL_2218 = l_A_2224;
}
l_P_2222 = ((*(R17 *)rt_nil_check(l_P_2222))).f_NEXT;
}
RT_B_TICK();
} L_end2223: ;
}
}
RT_B_TICK();
if (it2221 == it2221_hi) break;
} } L_end2220: ;
{ R27 * rv2225 = l_HEAD_2217;
return rv2225; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SAVED_2226; memset(&l_SAVED_2226, 0, sizeof l_SAVED_2226);
l_SAVED_2226 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_2227; memset(&l_SAVED_Q_2227, 0, sizeof l_SAVED_Q_2227);
l_SAVED_Q_2227 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_2228; memset(&l_V_2228, 0, sizeof l_V_2228);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_2228, r_CALL_EXPR1(p_E, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_2226;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_2227;
{ R26 rv2229 = l_V_2228;
return rv2229; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR1(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R27 * l_ARGS_2230; memset(&l_ARGS_2230, 0, sizeof l_ARGS_2230);
l_ARGS_2230 = r_CALL_ARGS(p_E);
R12 * l_Y_2231; memset(&l_Y_2231, 0, sizeof l_Y_2231);
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv2232 = r_START_IO_CALL(p_E);
return rv2232; }
}
l_Y_2231 = r_BOUND_ROUTINE(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2231 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2231))).f_KIND == g_Y_BUILTIN))
{
{
R17 * l_N_2233; memset(&l_N_2233, 0, sizeof l_N_2233);
l_N_2233 = r_COPY_NODE(p_E);
S_R9(&((*(R17 *)rt_nil_check(l_N_2233))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2231))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2233))).f_NEXT = ((*(R17 *)rt_nil_check(p_E))).f_NEXT;
{ R26 rv2234 = r_BUILTIN(l_N_2233, p_WANT);
return rv2234; }
}
}
{ R26 rv2235 = r_CALL_SYM(l_Y_2231, l_ARGS_2230, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv2235; }
}
{
R9 l_SHORT_2236; memset(&l_SHORT_2236, 0, sizeof l_SHORT_2236);
S_R9(&l_SHORT_2236, r_WHERE_SHORT_NAME(((*(R17 *)rt_nil_check(p_E))).f_NAME), 0);
if ((!r_TEQ(l_SHORT_2236, ((*(R17 *)rt_nil_check(p_E))).f_NAME)))
{
{
R17 * l_N_2237; memset(&l_N_2237, 0, sizeof l_N_2237);
l_N_2237 = r_COPY_NODE(p_E);
S_R9(&((*(R17 *)rt_nil_check(l_N_2237))).f_NAME, l_SHORT_2236, 0);
((*(R17 *)rt_nil_check(l_N_2237))).f_NEXT = ((*(R17 *)rt_nil_check(p_E))).f_NEXT;
{ R26 rv2238 = r_CALL_EXPR1(l_N_2237, p_WANT);
return rv2238; }
}
}
}
l_Y_2231 = r_FIND_ROUTINE(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2230, ((*(R17 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_2231 == NULL))
{
{
R12 * l_P_2239; memset(&l_P_2239, 0, sizeof l_P_2239);
l_P_2239 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_2239 == NULL)) goto L_end2240;
{
if ((((*(R12 *)rt_nil_check(l_P_2239))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv2241 = r_BUILTIN(p_E, p_WANT);
return rv2241; }
}
l_P_2239 = r_LOOKUP_NEXT(l_P_2239);
}
RT_B_TICK();
} L_end2240: ;
}
{
R12 * l_B_2242; memset(&l_B_2242, 0, sizeof l_B_2242);
l_B_2242 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_2242 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_2242))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv2243 = r_BUILTIN(p_E, p_WANT);
return rv2243; }
}
if (((((*(R12 *)rt_nil_check(l_B_2242))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_2242))).f_ORIG == NULL))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
}
{
R9 l_BASE_2244; memset(&l_BASE_2244, 0, sizeof l_BASE_2244);
S_R9(&l_BASE_2244, r_CLASS_OPERATION(((*(R17 *)rt_nil_check(p_E))).f_NAME), 0);
if (((l_BASE_2244).f_LEN > ((rt_int)0LL)))
{
{
R17 * l_N_2245; memset(&l_N_2245, 0, sizeof l_N_2245);
l_N_2245 = r_COPY_NODE(p_E);
S_R9(&((*(R17 *)rt_nil_check(l_N_2245))).f_NAME, l_BASE_2244, 0);
{ R26 rv2246 = r_BUILTIN(l_N_2245, p_WANT);
return rv2246; }
}
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv2247 = r_CALL_SYM(l_Y_2231, l_ARGS_2230, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv2247; }
rt_raise(RT_X_INIT);
}
static R9 r_CLASS_OPERATION(R9 p_NAME) { RT_B_TICK(); 
rstr l_S_2248; memset(&l_S_2248, 0, sizeof l_S_2248);
l_S_2248 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2248, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2250_lo = ((rt_int)1LL), it2250_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2250 = it2250_lo; it2250 <= it2250_hi; it2250++) {
{
if (rt_b_eq(rt_b_slice(l_S_2248, it2250, it2250), rt_str("$", 1)))
{
{
R9 l_P_2251; memset(&l_P_2251, 0, sizeof l_P_2251);
S_R9(&l_P_2251, r_MKN(rt_b_slice(l_S_2248, ((rt_int)0LL), rt_sub(it2250, ((rt_int)1LL)))), 0);
R9 l_B_2252; memset(&l_B_2252, 0, sizeof l_B_2252);
S_R9(&l_B_2252, r_MKN(rt_b_slice(l_S_2248, rt_add(it2250, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))), 0);
if ((((((((r_IS_TYPE_WORD(l_P_2251) || r_TEQS(l_P_2251, rt_str("INTEGER", 7))) || r_TEQS(l_P_2251, rt_str("BOOLEAN", 7))) || r_TEQS(l_P_2251, rt_str("ENUM", 4))) || r_TEQS(l_P_2251, rt_str("ARRAY", 5))) || r_TEQS(l_P_2251, rt_str("RECORD", 6))) || r_TEQS(l_P_2251, rt_str("PTR", 3))) || r_TEQS(l_P_2251, rt_str("SEMAPHORE", 9))))
{
{
R12 * l_Y_2253; memset(&l_Y_2253, 0, sizeof l_Y_2253);
l_Y_2253 = r_LOOKUP(l_B_2252);
for (;;) {
if ((l_Y_2253 == NULL)) goto L_end2254;
{
if ((((*(R12 *)rt_nil_check(l_Y_2253))).f_KIND == g_Y_BUILTIN))
{
{ R9 rv2255 = l_B_2252;
return rv2255; }
}
l_Y_2253 = r_LOOKUP_NEXT(l_Y_2253);
}
RT_B_TICK();
} L_end2254: ;
}
}
}
{ R9 rv2256 = r_NO_TEXT();
return rv2256; }
}
}
RT_B_TICK();
if (it2250 == it2250_hi) break;
} } L_end2249: ;
{ R9 rv2257 = r_NO_TEXT();
return rv2257; }
rt_raise(RT_X_INIT);
}
static R9 r_WHERE_SHORT_NAME(R9 p_NAME) { RT_B_TICK(); 
R12 * l_G_2258; memset(&l_G_2258, 0, sizeof l_G_2258);
l_G_2258 = r_CUR_GENERIC();
rstr l_S_2259; memset(&l_S_2259, 0, sizeof l_S_2259);
l_S_2259 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2259, r_STR(p_NAME, (p_NAME).f_LEN));
if ((l_G_2258 == NULL))
{
{ R9 rv2260 = p_NAME;
return rv2260; }
}
{ rt_int it2262_lo = ((rt_int)1LL), it2262_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2262 = it2262_lo; it2262 <= it2262_hi; it2262++) {
{
if (rt_b_eq(rt_b_slice(l_S_2259, it2262, it2262), rt_str("$", 1)))
{
if (((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_G_2258))).f_BINDINGS, r_MKN(rt_b_slice(l_S_2259, ((rt_int)0LL), rt_sub(it2262, ((rt_int)1LL))))) == NULL)) && r_IN_WHERE(l_G_2258, r_MKN(rt_b_slice(l_S_2259, rt_add(it2262, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))))))
{
{ R9 rv2263 = r_MKN(rt_b_slice(l_S_2259, rt_add(it2262, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))));
return rv2263; }
}
{ R9 rv2264 = p_NAME;
return rv2264; }
}
}
RT_B_TICK();
if (it2262 == it2262_hi) break;
} } L_end2261: ;
{ R9 rv2265 = p_NAME;
return rv2265; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R9 p_NAME) { RT_B_TICK(); 
R21 * l_B_2266; memset(&l_B_2266, 0, sizeof l_B_2266);
l_B_2266 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_2267; memset(&l_S_2267, 0, sizeof l_S_2267);
l_S_2267 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2267, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2269_lo = ((rt_int)1LL), it2269_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2269 = it2269_lo; it2269 <= it2269_hi; it2269++) {
{
if (rt_b_eq(rt_b_slice(l_S_2267, it2269, it2269), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_2267, ((rt_int)0LL), rt_sub(it2269, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv2270 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_2267, rt_add(it2269, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv2270; }
}
goto L_end2268;
}
}
RT_B_TICK();
if (it2269 == it2269_hi) break;
} } L_end2268: ;
}
for (;;) {
if ((l_B_2266 == NULL)) goto L_end2271;
{
if (((!(((*(R21 *)rt_nil_check(l_B_2266))).f_R == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_B_2266))).f_NAME, p_NAME)))
{
{ R12 * rv2272 = ((*(R21 *)rt_nil_check(l_B_2266))).f_R;
return rv2272; }
}
l_B_2266 = ((*(R21 *)rt_nil_check(l_B_2266))).f_NEXT;
}
RT_B_TICK();
} L_end2271: ;
{ R12 * rv2273 = NULL;
return rv2273; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R9 p_NAME) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv2274 = 0;
return rv2274; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv2275 = 0;
return rv2275; }
}
}
}
{ rt_int rv2276 = 1;
return rv2276; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R9 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { RT_B_TICK(); 
R12 * l_Y_2277; memset(&l_Y_2277, 0, sizeof l_Y_2277);
l_Y_2277 = r_LOOKUP(p_NAME);
R12 * l_BEST_2278; memset(&l_BEST_2278, 0, sizeof l_BEST_2278);
l_BEST_2278 = NULL;
rt_int l_BEST_SCORE_2279; memset(&l_BEST_SCORE_2279, 0, sizeof l_BEST_SCORE_2279);
l_BEST_SCORE_2279 = ((rt_int)0LL);
rt_int l_TIES_2280; memset(&l_TIES_2280, 0, sizeof l_TIES_2280);
l_TIES_2280 = ((rt_int)0LL);
rt_int l_COUNT_2281; memset(&l_COUNT_2281, 0, sizeof l_COUNT_2281);
l_COUNT_2281 = ((rt_int)0LL);
rt_int l_N_2282; memset(&l_N_2282, 0, sizeof l_N_2282);
l_N_2282 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_2277 == NULL)) goto L_end2283;
{
if ((!r_IS_ROUTINE(l_Y_2277)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2277))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end2283;
}
}
else if (r_CANDIDATE(l_Y_2277, p_NAME))
{
{
R12 * l_R_2284; memset(&l_R_2284, 0, sizeof l_R_2284);
l_R_2284 = r_ORIGINAL(l_Y_2277);
rt_int l_SCORE_2285; memset(&l_SCORE_2285, 0, sizeof l_SCORE_2285);
r_ROUTINE_HEADER(l_R_2284);
if ((((r_PARAM_COUNT(l_R_2284) == l_N_2282) && (!r_SEEN_ROUTINE(l_R_2284, p_NAME, l_Y_2277))) && (!r_HIDDEN_ROUTINE(l_R_2284, p_NAME, l_Y_2277))))
{
l_COUNT_2281 = rt_add(l_COUNT_2281, ((rt_int)1LL));
l_SCORE_2285 = r_MATCH_SCORE(l_R_2284, p_ARGS);
if ((l_SCORE_2285 > l_BEST_SCORE_2279))
{
l_BEST_2278 = l_R_2284;
l_BEST_SCORE_2279 = l_SCORE_2285;
l_TIES_2280 = ((rt_int)0LL);
}
else if (((l_SCORE_2285 == l_BEST_SCORE_2279) && (l_SCORE_2285 > ((rt_int)0LL))))
{
l_TIES_2280 = rt_add(l_TIES_2280, ((rt_int)1LL));
}
}
}
}
l_Y_2277 = r_LOOKUP_NEXT(l_Y_2277);
}
RT_B_TICK();
} L_end2283: ;
if (((l_TIES_2280 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv2286 = l_BEST_2278;
return rv2286; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R9 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2287; memset(&l_Y_2287, 0, sizeof l_Y_2287);
l_Y_2287 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2287 == p_STOP) || (l_Y_2287 == NULL))) goto L_end2288;
{
if ((((*(R12 *)rt_nil_check(l_Y_2287))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_2287) == p_R))
{
{ rt_int rv2289 = 1;
return rv2289; }
}
}
l_Y_2287 = r_LOOKUP_NEXT(l_Y_2287);
}
RT_B_TICK();
} L_end2288: ;
{ rt_int rv2290 = 0;
return rv2290; }
rt_raise(RT_X_INIT);
}
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R9 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2291; memset(&l_Y_2291, 0, sizeof l_Y_2291);
l_Y_2291 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2291 == p_STOP) || (l_Y_2291 == NULL))) goto L_end2292;
{
if (((((*(R12 *)rt_nil_check(l_Y_2291))).f_KIND == g_Y_ROUTINE) && (((*(R12 *)rt_nil_check(l_Y_2291))).f_DEPTH > ((*(R12 *)rt_nil_check(p_STOP))).f_DEPTH)))
{
{
R12 * l_O_2293; memset(&l_O_2293, 0, sizeof l_O_2293);
l_O_2293 = r_ORIGINAL(l_Y_2291);
if ((!(l_O_2293 == p_R)))
{
r_ROUTINE_HEADER(l_O_2293);
if (r_SAME_SIGNATURE(l_O_2293, p_R))
{
{ rt_int rv2294 = 1;
return rv2294; }
}
}
}
}
l_Y_2291 = r_LOOKUP_NEXT(l_Y_2291);
}
RT_B_TICK();
} L_end2292: ;
{ rt_int rv2295 = 0;
return rv2295; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B) { RT_B_TICK(); 
R28 * l_P_2296; memset(&l_P_2296, 0, sizeof l_P_2296);
l_P_2296 = ((*(R12 *)rt_nil_check(p_A))).f_PARAMS;
R28 * l_Q_2297; memset(&l_Q_2297, 0, sizeof l_Q_2297);
l_Q_2297 = ((*(R12 *)rt_nil_check(p_B))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_A))).f_GENERIC || ((*(R12 *)rt_nil_check(p_B))).f_GENERIC))
{
{ rt_int rv2298 = 0;
return rv2298; }
}
for (;;) {
if (((l_P_2296 == NULL) || (l_Q_2297 == NULL))) goto L_end2299;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2296))).f_MODE == ((*(R28 *)rt_nil_check(l_Q_2297))).f_MODE)))
{
{ rt_int rv2300 = 0;
return rv2300; }
}
if (((((*(R28 *)rt_nil_check(l_P_2296))).f_T == NULL) || (((*(R28 *)rt_nil_check(l_Q_2297))).f_T == NULL)))
{
if ((!(((*(R28 *)rt_nil_check(l_P_2296))).f_T == ((*(R28 *)rt_nil_check(l_Q_2297))).f_T)))
{
{ rt_int rv2301 = 0;
return rv2301; }
}
}
else if ((!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_2296))).f_T, ((*(R28 *)rt_nil_check(l_Q_2297))).f_T)))
{
{ rt_int rv2302 = 0;
return rv2302; }
}
l_P_2296 = ((*(R28 *)rt_nil_check(l_P_2296))).f_NEXT;
l_Q_2297 = ((*(R28 *)rt_nil_check(l_Q_2297))).f_NEXT;
}
RT_B_TICK();
} L_end2299: ;
{ rt_int rv2303 = ((l_P_2296 == NULL) && (l_Q_2297 == NULL));
return rv2303; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { RT_B_TICK(); 
rt_int l_N_2304; memset(&l_N_2304, 0, sizeof l_N_2304);
l_N_2304 = ((rt_int)0LL);
R28 * l_P_2305; memset(&l_P_2305, 0, sizeof l_P_2305);
l_P_2305 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_2305 == NULL)) goto L_end2306;
{
l_N_2304 = rt_add(l_N_2304, ((rt_int)1LL));
l_P_2305 = ((*(R28 *)rt_nil_check(l_P_2305))).f_NEXT;
}
RT_B_TICK();
} L_end2306: ;
{ rt_int rv2307 = l_N_2304;
return rv2307; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS) { RT_B_TICK(); 
R28 * l_P_2308; memset(&l_P_2308, 0, sizeof l_P_2308);
l_P_2308 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R27 * l_A_2309; memset(&l_A_2309, 0, sizeof l_A_2309);
l_A_2309 = p_ARGS;
rt_int l_EXACT_2310; memset(&l_EXACT_2310, 0, sizeof l_EXACT_2310);
l_EXACT_2310 = 1;
R21 * l_BS_2311; memset(&l_BS_2311, 0, sizeof l_BS_2311);
l_BS_2311 = r_NEW_BINDS();
R22 * l_PT_2312; memset(&l_PT_2312, 0, sizeof l_PT_2312);
for (;;) {
if ((l_P_2308 == NULL)) goto L_end2313;
{
l_PT_2312 = r_FORMAL_VIEW(p_R, l_P_2308);
if ((!(((*(R28 *)rt_nil_check(l_P_2308))).f_MODE == ((*(R27 *)rt_nil_check(l_A_2309))).f_MODE)))
{
{ rt_int rv2314 = ((rt_int)0LL);
return rv2314; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R28 *)rt_nil_check(l_P_2308))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_2308, l_A_2309, l_BS_2311)))
{
{ rt_int rv2315 = ((rt_int)0LL);
return rv2315; }
}
}
else if ((l_PT_2312 == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2309))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_A_2309))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv2316 = ((rt_int)0LL);
return rv2316; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_2309))
{
if ((!r_LITERAL_FITS(((*(R27 *)rt_nil_check(l_A_2309))).f_E, l_PT_2312)))
{
{ rt_int rv2317 = ((rt_int)0LL);
return rv2317; }
}
}
else
{
r_TYPE_ARG(l_A_2309);
{
R22 * l_AT_2318; memset(&l_AT_2318, 0, sizeof l_AT_2318);
l_AT_2318 = (((*(R27 *)rt_nil_check(l_A_2309))).f_V).f_T;
if ((!((r_SAME_CLASS(l_PT_2312, l_AT_2318) || (((((*(R22 *)rt_nil_check(l_AT_2318))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2312)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv2319 = ((rt_int)0LL);
return rv2319; }
}
if ((((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2312)))).f_GEN).f_LEN > ((rt_int)0LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2318)))).f_MLEN).f_OK))
{
{
R9 l_KEY_2320; memset(&l_KEY_2320, 0, sizeof l_KEY_2320);
S_R9(&l_KEY_2320, r_MKN(rt_b_cat(rt_str("%", 1), r_STR(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2312)))).f_GEN, (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2312)))).f_GEN).f_LEN))), 0);
R21 * l_B_2321; memset(&l_B_2321, 0, sizeof l_B_2321);
l_B_2321 = r_FIND_BIND(((*(R21 *)rt_nil_check(l_BS_2311))).f_NEXT, l_KEY_2320);
if ((!(l_B_2321 == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(l_B_2321))).f_MV == (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2318)))).f_MLEN).f_V)))
{
{ rt_int rv2322 = ((rt_int)0LL);
return rv2322; }
}
}
else
{
r_ADD_BIND(l_KEY_2320, NULL, ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2318)))).f_MLEN, NULL, l_BS_2311);
}
}
}
if ((!r_SAME_TYPE(l_PT_2312, l_AT_2318)))
{
if ((((*(R28 *)rt_nil_check(l_P_2308))).f_MODE == g_M_INOUT))
{
{ rt_int rv2323 = ((rt_int)0LL);
return rv2323; }
}
l_EXACT_2310 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2318)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2312)))).f_KIND == g_T_INT)))
{
if (((((*(R28 *)rt_nil_check(l_P_2308))).f_MODE == g_M_IN) && (((*(R22 *)rt_nil_check(l_AT_2318))).f_SCALE > ((*(R22 *)rt_nil_check(l_PT_2312))).f_SCALE)))
{
{ rt_int rv2324 = ((rt_int)0LL);
return rv2324; }
}
else if (((((*(R28 *)rt_nil_check(l_P_2308))).f_MODE == g_M_OUT) && (((*(R22 *)rt_nil_check(l_PT_2312))).f_SCALE > ((*(R22 *)rt_nil_check(l_AT_2318))).f_SCALE)))
{
{ rt_int rv2325 = ((rt_int)0LL);
return rv2325; }
}
}
}
}
l_P_2308 = ((*(R28 *)rt_nil_check(l_P_2308))).f_NEXT;
l_A_2309 = ((*(R27 *)rt_nil_check(l_A_2309))).f_NEXT;
}
RT_B_TICK();
} L_end2313: ;
if (l_EXACT_2310)
{
{ rt_int rv2326 = ((rt_int)2LL);
return rv2326; }
}
{ rt_int rv2327 = ((rt_int)1LL);
return rv2327; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R17 * p_E, R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_2328; memset(&l_RT_2328, 0, sizeof l_RT_2328);
l_RT_2328 = r_REAL_TYPE(p_T);
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_2328))).f_KIND == g_T_ENUM))
{
{ rt_int rv2329 = (!(r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_RT_2328) == NULL));
return rv2329; }
}
{ rt_int rv2330 = 0;
return rv2330; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv2331 = (((*(R22 *)rt_nil_check(l_RT_2328))).f_KIND == g_T_PTR);
return rv2331; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv2332 = (((*(R22 *)rt_nil_check(l_RT_2328))).f_KIND == g_T_REC);
return rv2332; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv2333 = (((*(R22 *)rt_nil_check(l_RT_2328))).f_KIND == g_T_ARR);
return rv2333; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv2334 = (((*(R22 *)rt_nil_check(l_RT_2328))).f_KIND == g_T_INT);
return rv2334; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv2335 = ((((*(R22 *)rt_nil_check(l_RT_2328))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_2328))).f_KIND == g_T_SEM));
return rv2335; }
}
{ rt_int rv2336 = 0;
return rv2336; }
rt_raise(RT_X_INIT);
}
static R12 * r_ARG_ROOT(R17 * p_E) { RT_B_TICK(); 
R17 * l_N_2337; memset(&l_N_2337, 0, sizeof l_N_2337);
l_N_2337 = p_E;
for (;;) {
if ((l_N_2337 == NULL)) goto L_end2338;
{
if (((((*(R17 *)rt_nil_check(l_N_2337))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_N_2337))).f_KIND == g_N_APPLY)))
{
{
R12 * l_Y_2339; memset(&l_Y_2339, 0, sizeof l_Y_2339);
l_Y_2339 = r_LOOKUP(((*(R17 *)rt_nil_check(l_N_2337))).f_NAME);
if ((l_Y_2339 == NULL))
{
{ R12 * rv2340 = NULL;
return rv2340; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2339))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2341 = NULL;
return rv2341; }
}
{ R12 * rv2342 = l_Y_2339;
return rv2342; }
}
}
else if (((((((*(R17 *)rt_nil_check(l_N_2337))).f_KIND == g_N_INDEX) || (((*(R17 *)rt_nil_check(l_N_2337))).f_KIND == g_N_FIELD)) || (((*(R17 *)rt_nil_check(l_N_2337))).f_KIND == g_N_SUBSTR)) || (((*(R17 *)rt_nil_check(l_N_2337))).f_KIND == g_N_PAREN)))
{
l_N_2337 = ((*(R17 *)rt_nil_check(l_N_2337))).f_A;
}
else
{
{ R12 * rv2343 = NULL;
return rv2343; }
}
}
RT_B_TICK();
} L_end2338: ;
{ R12 * rv2344 = NULL;
return rv2344; }
rt_raise(RT_X_INIT);
}
static R17 * r_PATH_OF(R17 * p_E) { RT_B_TICK(); 
R17 * l_N_2345; memset(&l_N_2345, 0, sizeof l_N_2345);
l_N_2345 = p_E;
R17 * l_P_2346; memset(&l_P_2346, 0, sizeof l_P_2346);
l_P_2346 = NULL;
for (;;) {
if ((l_N_2345 == NULL)) goto L_end2347;
{
if ((((*(R17 *)rt_nil_check(l_N_2345))).f_KIND == g_N_FIELD))
{
l_P_2346 = r_NAME_REF(((*(R17 *)rt_nil_check(l_N_2345))).f_NAME, ((rt_int)0LL), NULL, l_P_2346);
l_N_2345 = ((*(R17 *)rt_nil_check(l_N_2345))).f_A;
}
else if (((((*(R17 *)rt_nil_check(l_N_2345))).f_KIND == g_N_INDEX) || (((*(R17 *)rt_nil_check(l_N_2345))).f_KIND == g_N_SUBSTR)))
{
l_P_2346 = r_NAME_REF(r_MKN(rt_str("*", 1)), ((rt_int)0LL), NULL, l_P_2346);
l_N_2345 = ((*(R17 *)rt_nil_check(l_N_2345))).f_A;
}
else if ((((*(R17 *)rt_nil_check(l_N_2345))).f_KIND == g_N_APPLY))
{
l_P_2346 = r_NAME_REF(r_MKN(rt_str("*", 1)), ((rt_int)0LL), NULL, l_P_2346);
{ R17 * rv2348 = l_P_2346;
return rv2348; }
}
else if ((((*(R17 *)rt_nil_check(l_N_2345))).f_KIND == g_N_PAREN))
{
l_N_2345 = ((*(R17 *)rt_nil_check(l_N_2345))).f_A;
}
else
{
{ R17 * rv2349 = l_P_2346;
return rv2349; }
}
}
RT_B_TICK();
} L_end2347: ;
{ R17 * rv2350 = l_P_2346;
return rv2350; }
rt_raise(RT_X_INIT);
}
static rt_int r_DISJOINT_PATHS(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_P_2351; memset(&l_P_2351, 0, sizeof l_P_2351);
l_P_2351 = p_A;
R17 * l_Q_2352; memset(&l_Q_2352, 0, sizeof l_Q_2352);
l_Q_2352 = p_B;
for (;;) {
if (((l_P_2351 == NULL) || (l_Q_2352 == NULL))) goto L_end2353;
{
if ((((!r_TEQS(((*(R17 *)rt_nil_check(l_P_2351))).f_NAME, rt_str("*", 1))) && (!r_TEQS(((*(R17 *)rt_nil_check(l_Q_2352))).f_NAME, rt_str("*", 1)))) && (!r_TEQ(((*(R17 *)rt_nil_check(l_P_2351))).f_NAME, ((*(R17 *)rt_nil_check(l_Q_2352))).f_NAME))))
{
{ rt_int rv2354 = 1;
return rv2354; }
}
l_P_2351 = ((*(R17 *)rt_nil_check(l_P_2351))).f_NEXT;
l_Q_2352 = ((*(R17 *)rt_nil_check(l_Q_2352))).f_NEXT;
}
RT_B_TICK();
} L_end2353: ;
{ rt_int rv2355 = 0;
return rv2355; }
rt_raise(RT_X_INIT);
}
static void r_EXPLICIT_GENERIC_ARGS(R12 * p_Y, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_USED_2356; memset(&l_USED_2356, 0, sizeof l_USED_2356);
l_USED_2356 = NULL;
R28 * l_P_2357; memset(&l_P_2357, 0, sizeof l_P_2357);
l_P_2357 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
R27 * l_A_2358; memset(&l_A_2358, 0, sizeof l_A_2358);
l_A_2358 = p_ARGS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_DECL == NULL))
{
return;
}
if (((!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_B == NULL)))
{
return;
}
r_NAMES_IN(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_B, &l_USED_2356);
for (;;) {
if (((l_P_2357 == NULL) || (l_A_2358 == NULL))) goto L_end2359;
{
if ((((((*(R28 *)rt_nil_check(l_P_2357))).f_MODE == g_M_IN) && r_IN_IDENTS(l_USED_2356, ((*(R28 *)rt_nil_check(l_P_2357))).f_NAME)) && (!(((*(R27 *)rt_nil_check(l_A_2358))).f_E == NULL))))
{
if ((!r_CONSTANT_EXPR(((*(R27 *)rt_nil_check(l_A_2358))).f_E)))
{
r_FAILT(p_LINE, rt_str("the argument of an explicit generic parameter invokes only pure functions (5): ", 79), ((*(R28 *)rt_nil_check(l_P_2357))).f_NAME);
}
}
l_P_2357 = ((*(R28 *)rt_nil_check(l_P_2357))).f_NEXT;
l_A_2358 = ((*(R27 *)rt_nil_check(l_A_2358))).f_NEXT;
}
RT_B_TICK();
} L_end2359: ;
}
static void r_NAMES_IN(R17 * p_L, R17 * *p_HEAD) { RT_B_TICK(); 
R17 * l_N_2360; memset(&l_N_2360, 0, sizeof l_N_2360);
l_N_2360 = p_L;
for (;;) {
if ((l_N_2360 == NULL)) goto L_end2361;
{
if (((((*(R17 *)rt_nil_check(l_N_2360))).f_KIND == g_N_NAME) || (((((*(R17 *)rt_nil_check(l_N_2360))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(l_N_2360))).f_A == NULL)))))
{
(*p_HEAD) = r_NAME_REF(((*(R17 *)rt_nil_check(l_N_2360))).f_NAME, ((rt_int)0LL), NULL, (*p_HEAD));
}
r_NAMES_IN(((*(R17 *)rt_nil_check(l_N_2360))).f_A, &(*p_HEAD));
r_NAMES_IN(((*(R17 *)rt_nil_check(l_N_2360))).f_B, &(*p_HEAD));
r_NAMES_IN(((*(R17 *)rt_nil_check(l_N_2360))).f_C, &(*p_HEAD));
l_N_2360 = ((*(R17 *)rt_nil_check(l_N_2360))).f_NEXT;
}
RT_B_TICK();
} L_end2361: ;
}
static rt_int r_CONSTANT_EXPR(R17 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv2362 = 1;
return rv2362; }
}
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY)))
{
{
R12 * l_Y_2363; memset(&l_Y_2363, 0, sizeof l_Y_2363);
l_Y_2363 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2363 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2363))).f_KIND == g_Y_ROUTINE))
{
if ((!(((*(R12 *)rt_nil_check(r_ORIGINAL(l_Y_2363)))).f_USES == NULL)))
{
{ rt_int rv2364 = 0;
return rv2364; }
}
}
}
}
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD))
{
{ rt_int rv2365 = r_CONSTANT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A);
return rv2365; }
}
{ rt_int rv2366 = ((r_CONSTANT_LIST(((*(R17 *)rt_nil_check(p_E))).f_A) && r_CONSTANT_LIST(((*(R17 *)rt_nil_check(p_E))).f_B)) && r_CONSTANT_LIST(((*(R17 *)rt_nil_check(p_E))).f_C));
return rv2366; }
rt_raise(RT_X_INIT);
}
static rt_int r_CONSTANT_LIST(R17 * p_L) { RT_B_TICK(); 
R17 * l_N_2367; memset(&l_N_2367, 0, sizeof l_N_2367);
l_N_2367 = p_L;
for (;;) {
if ((l_N_2367 == NULL)) goto L_end2368;
{
if ((!r_CONSTANT_EXPR(l_N_2367)))
{
{ rt_int rv2369 = 0;
return rv2369; }
}
l_N_2367 = ((*(R17 *)rt_nil_check(l_N_2367))).f_NEXT;
}
RT_B_TICK();
} L_end2368: ;
{ rt_int rv2370 = 1;
return rv2370; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKED_ELEMENT(R17 * p_E) { RT_B_TICK(); 
R22 * l_AT_2371; memset(&l_AT_2371, 0, sizeof l_AT_2371);
l_AT_2371 = NULL;
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
{
R12 * l_Y_2372; memset(&l_Y_2372, 0, sizeof l_Y_2372);
l_Y_2372 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_2372 == NULL))
{
{ rt_int rv2373 = 0;
return rv2373; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2372))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(l_Y_2372))).f_T == NULL)))
{
{ rt_int rv2374 = 0;
return rv2374; }
}
l_AT_2371 = r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2372))).f_T);
}
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_INDEX))
{
{
R14 l_SAVED_CODE_2375; memset(&l_SAVED_CODE_2375, 0, sizeof l_SAVED_CODE_2375);
S_R14(&l_SAVED_CODE_2375, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
l_AT_2371 = r_REAL_TYPE((r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL)).f_T);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2375, 0);
}
}
else
{
{ rt_int rv2376 = 0;
return rv2376; }
}
if ((!(((*(R22 *)rt_nil_check(l_AT_2371))).f_KIND == g_T_ARR)))
{
{ rt_int rv2377 = 0;
return rv2377; }
}
{ rt_int rv2378 = (!(r_PACKING_OF(l_AT_2371) == ((rt_int)2LL)));
return rv2378; }
rt_raise(RT_X_INIT);
}
static void r_NO_ALIASING(R12 * p_Y, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_A_2379; memset(&l_A_2379, 0, sizeof l_A_2379);
l_A_2379 = p_ARGS;
for (;;) {
if ((l_A_2379 == NULL)) goto L_end2380;
{
if (((((*(R27 *)rt_nil_check(l_A_2379))).f_MODE == g_M_INOUT) && (!(((*(R27 *)rt_nil_check(l_A_2379))).f_E == NULL))))
{
if (r_PACKED_ELEMENT(((*(R27 *)rt_nil_check(l_A_2379))).f_E))
{
r_FAIL(p_LINE, rt_str("only elements of ARRAY_STD arrays are inout arguments (3.8.3)", 61));
}
}
l_A_2379 = ((*(R27 *)rt_nil_check(l_A_2379))).f_NEXT;
}
RT_B_TICK();
} L_end2380: ;
l_A_2379 = p_ARGS;
for (;;) {
if ((l_A_2379 == NULL)) goto L_end2381;
{
if (((((((*(R27 *)rt_nil_check(l_A_2379))).f_MODE == g_M_INOUT) || (((*(R27 *)rt_nil_check(l_A_2379))).f_MODE == g_M_OUT))) && (!(((*(R27 *)rt_nil_check(l_A_2379))).f_E == NULL))))
{
{
R12 * l_V_2382; memset(&l_V_2382, 0, sizeof l_V_2382);
l_V_2382 = r_ARG_ROOT(((*(R27 *)rt_nil_check(l_A_2379))).f_E);
R27 * l_B_2383; memset(&l_B_2383, 0, sizeof l_B_2383);
l_B_2383 = ((*(R27 *)rt_nil_check(l_A_2379))).f_NEXT;
if ((!(l_V_2382 == NULL)))
{
for (;;) {
if ((l_B_2383 == NULL)) goto L_end2384;
{
if (((((*(R27 *)rt_nil_check(l_B_2383))).f_MODE == ((*(R27 *)rt_nil_check(l_A_2379))).f_MODE) && (!(((*(R27 *)rt_nil_check(l_B_2383))).f_E == NULL))))
{
if (((r_ARG_ROOT(((*(R27 *)rt_nil_check(l_B_2383))).f_E) == l_V_2382) && (!r_DISJOINT_PATHS(r_PATH_OF(((*(R27 *)rt_nil_check(l_A_2379))).f_E), r_PATH_OF(((*(R27 *)rt_nil_check(l_B_2383))).f_E)))))
{
r_FAILT(p_LINE, rt_str("a variable is more than one inout or output argument (4.3.3): ", 62), ((*(R12 *)rt_nil_check(l_V_2382))).f_NAME);
}
}
l_B_2383 = ((*(R27 *)rt_nil_check(l_B_2383))).f_NEXT;
}
RT_B_TICK();
} L_end2384: ;
if (((((*(R27 *)rt_nil_check(l_A_2379))).f_MODE == g_M_INOUT) && (!(((*(R12 *)rt_nil_check(p_Y))).f_USES == NULL))))
{
{
R17 * l_U_2385; memset(&l_U_2385, 0, sizeof l_U_2385);
l_U_2385 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_2385 == NULL)) goto L_end2386;
{
if ((r_TEQ(((*(R17 *)rt_nil_check(l_U_2385))).f_NAME, ((*(R12 *)rt_nil_check(l_V_2382))).f_NAME) && (((*(R17 *)rt_nil_check(l_U_2385))).f_IV == ((*(R12 *)rt_nil_check(l_V_2382))).f_OWNER)))
{
r_FAILT(p_LINE, rt_str("an inout argument the procedure also imports (4.3.3): ", 54), ((*(R12 *)rt_nil_check(l_V_2382))).f_NAME);
}
l_U_2385 = ((*(R17 *)rt_nil_check(l_U_2385))).f_NEXT;
}
RT_B_TICK();
} L_end2386: ;
}
}
}
}
}
l_A_2379 = ((*(R27 *)rt_nil_check(l_A_2379))).f_NEXT;
}
RT_B_TICK();
} L_end2381: ;
}
static void r_NEED_BODY(R12 * p_G) { RT_B_TICK(); 
if (((!(((*(R12 *)rt_nil_check(p_G))).f_LAZY == ((rt_int)2LL))) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_FL == ((rt_int)1LL))))
{
((*(R12 *)rt_nil_check(p_G))).f_LAZY = ((rt_int)2LL);
((*(R12 *)rt_nil_check(p_G))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = p_G;
}
}
static R12 * r_INLINE_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_BS_2387; memset(&l_BS_2387, 0, sizeof l_BS_2387);
l_BS_2387 = r_NEW_BINDS();
R28 * l_P_2388; memset(&l_P_2388, 0, sizeof l_P_2388);
l_P_2388 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2389; memset(&l_A_2389, 0, sizeof l_A_2389);
l_A_2389 = p_ARGS;
rt_int l_SOME_M_2390; memset(&l_SOME_M_2390, 0, sizeof l_SOME_M_2390);
l_SOME_M_2390 = 0;
rt_int l_N_2391; memset(&l_N_2391, 0, sizeof l_N_2391);
l_N_2391 = ((rt_int)0LL);
for (;;) {
if (((l_P_2388 == NULL) || (l_A_2389 == NULL))) goto L_end2392;
{
if ((((((*(R28 *)rt_nil_check(l_P_2388))).f_MODE == g_M_IN) && (!(((*(R27 *)rt_nil_check(l_A_2389))).f_E == NULL))) && (!(((*(R28 *)rt_nil_check(l_P_2388))).f_T == NULL))))
{
{
R22 * l_RT_2393; memset(&l_RT_2393, 0, sizeof l_RT_2393);
l_RT_2393 = r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2388))).f_T);
R23 l_M_2394; memset(&l_M_2394, 0, sizeof l_M_2394);
S_R23(&l_M_2394, r_NO_MVAL(), 0);
if (((((*(R22 *)rt_nil_check(l_RT_2393))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2393))).f_SCALE == ((rt_int)0LL))))
{
if (r_MANIFEST_INT(((*(R27 *)rt_nil_check(l_A_2389))).f_E))
{
S_R23(&l_M_2394, r_MANIFEST(((*(R27 *)rt_nil_check(l_A_2389))).f_E), 0);
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_2393))).f_KIND == g_T_BOOL))
{
S_R23(&l_M_2394, r_MANIFEST(((*(R27 *)rt_nil_check(l_A_2389))).f_E), 0);
}
else if ((((*(R22 *)rt_nil_check(l_RT_2393))).f_KIND == g_T_ENUM))
{
S_R23(&l_M_2394, r_ENUM_MANIFEST(((*(R27 *)rt_nil_check(l_A_2389))).f_E, l_RT_2393), 0);
}
if ((l_M_2394).f_OK)
{
r_ADD_BIND(r_MKN(rt_b_cat(rt_str("=", 1), r_STR(((*(R28 *)rt_nil_check(l_P_2388))).f_NAME, (((*(R28 *)rt_nil_check(l_P_2388))).f_NAME).f_LEN))), NULL, l_M_2394, NULL, l_BS_2387);
l_SOME_M_2390 = 1;
}
}
}
l_P_2388 = ((*(R28 *)rt_nil_check(l_P_2388))).f_NEXT;
l_A_2389 = ((*(R27 *)rt_nil_check(l_A_2389))).f_NEXT;
}
RT_B_TICK();
} L_end2392: ;
if ((!l_SOME_M_2390))
{
r_NEED_BODY(p_G);
{ R12 * rv2395 = p_G;
return rv2395; }
}
{
R12 * l_I_2396; memset(&l_I_2396, 0, sizeof l_I_2396);
l_I_2396 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2396 == NULL)) goto L_end2397;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2396))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_BS_2387))).f_NEXT))
{
{ R12 * rv2398 = l_I_2396;
return rv2398; }
}
l_N_2391 = rt_add(l_N_2391, ((rt_int)1LL));
l_I_2396 = ((*(R12 *)rt_nil_check(l_I_2396))).f_INSTANCES;
}
RT_B_TICK();
} L_end2397: ;
}
if ((l_N_2391 > ((rt_int)256LL)))
{
r_FAILT(p_LINE, rt_str("the INLINE expansions of the routine do not end (4.3.1): ", 57), ((*(R12 *)rt_nil_check(p_G))).f_NAME);
}
{ R12 * rv2399 = r_NEW_INSTANCE(p_G, ((*(R21 *)rt_nil_check(l_BS_2387))).f_NEXT, p_ARGS);
return rv2399; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_VISIBLE_2400; memset(&l_VISIBLE_2400, 0, sizeof l_VISIBLE_2400);
l_VISIBLE_2400 = r_SEG_VISIBLE(p_Y0, p_LINE);
R12 * l_Y_2401; memset(&l_Y_2401, 0, sizeof l_Y_2401);
l_Y_2401 = r_ORIGINAL(p_Y0);
R28 * l_P_2402; memset(&l_P_2402, 0, sizeof l_P_2402);
R27 * l_A_2403; memset(&l_A_2403, 0, sizeof l_A_2403);
l_A_2403 = p_ARGS;
R9 l_C_2404; memset(&l_C_2404, 0, sizeof l_C_2404);
S_R9(&l_C_2404, r_MK(rt_str("", 0)), 0);
R9 l_SEP_2405; memset(&l_SEP_2405, 0, sizeof l_SEP_2405);
S_R9(&l_SEP_2405, r_MK(rt_str("", 0)), 0);
R9 l_PRE_2406; memset(&l_PRE_2406, 0, sizeof l_PRE_2406);
S_R9(&l_PRE_2406, r_MK(rt_str("", 0)), 0);
R9 l_POST_2407; memset(&l_POST_2407, 0, sizeof l_POST_2407);
S_R9(&l_POST_2407, r_MK(rt_str("", 0)), 0);
rt_int l_SHARED_2408; memset(&l_SHARED_2408, 0, sizeof l_SHARED_2408);
l_SHARED_2408 = 0;
R22 * l_PT_2409; memset(&l_PT_2409, 0, sizeof l_PT_2409);
if ((!(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
if (((((*(R12 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R))).f_DECL == ((*(R12 *)rt_nil_check(l_Y_2401))).f_DECL) && (!(((*(R12 *)rt_nil_check(l_Y_2401))).f_DECL == NULL))))
{
if ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2401))).f_DECL))).f_FL == ((rt_int)1LL)))
{
r_FAILT(p_LINE, rt_str("an INLINE routine cannot be recursive (4.3.1): ", 47), ((*(R12 *)rt_nil_check(l_Y_2401))).f_NAME);
}
}
}
if (((*(R12 *)rt_nil_check(l_Y_2401))).f_GENERIC)
{
l_Y_2401 = r_INSTANCE(l_Y_2401, p_ARGS, p_LINE);
}
else if (((!(((*(R12 *)rt_nil_check(l_Y_2401))).f_DECL == NULL)) && (((*(R12 *)rt_nil_check(l_Y_2401))).f_BINDINGS == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2401))).f_DECL))).f_KIND == g_N_ROUTINE) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2401))).f_DECL))).f_FL == ((rt_int)1LL))))
{
l_Y_2401 = r_INLINE_INSTANCE(l_Y_2401, p_ARGS, p_LINE);
}
}
r_CHECK_CALL_IMPORTS(l_Y_2401, p_LINE);
r_NO_ALIASING(l_Y_2401, p_ARGS, p_LINE);
r_EXPLICIT_GENERIC_ARGS(l_Y_2401, p_ARGS, p_LINE);
if ((!(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
if (((((*(R12 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R))).f_DECL == ((*(R12 *)rt_nil_check(l_Y_2401))).f_DECL) && (!(((*(R12 *)rt_nil_check(l_Y_2401))).f_DECL == NULL))))
{
if ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2401))).f_DECL))).f_FL == ((rt_int)1LL)))
{
r_FAILT(p_LINE, rt_str("an INLINE routine cannot be recursive (4.3.1): ", 47), ((*(R12 *)rt_nil_check(l_Y_2401))).f_NAME);
}
{
R17 * l_U_2410; memset(&l_U_2410, 0, sizeof l_U_2410);
l_U_2410 = ((*(R12 *)rt_nil_check(l_Y_2401))).f_USES;
for (;;) {
if ((l_U_2410 == NULL)) goto L_end2411;
{
if ((!(r_LOOKUP(((*(R17 *)rt_nil_check(l_U_2410))).f_NAME) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_LOOKUP(((*(R17 *)rt_nil_check(l_U_2410))).f_NAME)))).f_LEVEL > ((rt_int)0LL)))
{
r_FAILT(p_LINE, rt_str("a recursive routine imports only static data (4.3.1): ", 54), ((*(R17 *)rt_nil_check(l_U_2410))).f_NAME);
}
}
l_U_2410 = ((*(R17 *)rt_nil_check(l_U_2410))).f_NEXT;
}
RT_B_TICK();
} L_end2411: ;
}
}
}
if ((!(r_CUR_GENERIC() == NULL)))
{
{
R27 * l_Q_2412; memset(&l_Q_2412, 0, sizeof l_Q_2412);
l_Q_2412 = p_ARGS;
rt_int l_GEN_ARG_2413; memset(&l_GEN_ARG_2413, 0, sizeof l_GEN_ARG_2413);
l_GEN_ARG_2413 = 0;
for (;;) {
if ((l_Q_2412 == NULL)) goto L_end2414;
{
if (((*(R27 *)rt_nil_check(l_Q_2412))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_Q_2412))).f_V).f_T == NULL)))
{
if (((((*(R22 *)rt_nil_check((((*(R27 *)rt_nil_check(l_Q_2412))).f_V).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
l_GEN_ARG_2413 = 1;
}
}
}
l_Q_2412 = ((*(R27 *)rt_nil_check(l_Q_2412))).f_NEXT;
}
RT_B_TICK();
} L_end2414: ;
if (l_GEN_ARG_2413)
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2401))).f_BINDINGS == NULL)))
{
r_REQUIRE_WHERE_SUBSET(l_Y_2401, p_LINE);
}
else
{
r_REQUIRE_WHERE(r_BASE_NAME(l_Y_2401), p_LINE);
}
}
}
}
{
R17 * l_U_2415; memset(&l_U_2415, 0, sizeof l_U_2415);
l_U_2415 = ((*(R12 *)rt_nil_check(l_Y_2401))).f_USES;
for (;;) {
if ((l_U_2415 == NULL)) goto L_end2416;
{
{
R12 * l_H_2417; memset(&l_H_2417, 0, sizeof l_H_2417);
l_H_2417 = r_LOOKUP(((*(R17 *)rt_nil_check(l_U_2415))).f_NAME);
if ((!(l_H_2417 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_H_2417))).f_WITHV == ((rt_int)2LL)) && (((*(R12 *)rt_nil_check(l_H_2417))).f_OWNER == ((*(R17 *)rt_nil_check(l_U_2415))).f_IV)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(l_Y_2401))).f_NAME, (((*(R12 *)rt_nil_check(l_Y_2401))).f_NAME).f_LEN)), rt_str(" imports ", 9)), r_STR(((*(R17 *)rt_nil_check(l_U_2415))).f_NAME, (((*(R17 *)rt_nil_check(l_U_2415))).f_NAME).f_LEN)), rt_str(", which a WITH NAMING hides (4.5.4)", 35)));
}
}
}
l_U_2415 = ((*(R17 *)rt_nil_check(l_U_2415))).f_NEXT;
}
RT_B_TICK();
} L_end2416: ;
}
if (((((((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL)) || (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL)))) && (!(((*(R12 *)rt_nil_check(l_Y_2401))).f_USES == NULL))))
{
r_FAILT(p_LINE, rt_str("a record-spec is a closed scope: no function importing a variable (3.9.1): ", 75), ((*(R12 *)rt_nil_check(l_Y_2401))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_2401))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_C_2404, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_2401))).f_LEVEL), 0);
S_R9(&l_SEP_2405, r_MK(rt_str(", ", 2)), 0);
}
{
R27 * l_Q_2418; memset(&l_Q_2418, 0, sizeof l_Q_2418);
l_Q_2418 = p_ARGS;
for (;;) {
if ((l_Q_2418 == NULL)) goto L_end2419;
{
if ((!(((*(R27 *)rt_nil_check(l_Q_2418))).f_MODE == g_M_IN)))
{
l_SHARED_2408 = 1;
}
l_Q_2418 = ((*(R27 *)rt_nil_check(l_Q_2418))).f_NEXT;
}
RT_B_TICK();
} L_end2419: ;
if ((!(((*(R12 *)rt_nil_check(l_Y_2401))).f_USES == NULL)))
{
l_SHARED_2408 = 1;
}
}
l_P_2402 = ((*(R12 *)rt_nil_check(l_Y_2401))).f_PARAMS;
for (;;) {
if ((l_P_2402 == NULL)) goto L_end2420;
{
if ((l_A_2403 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
l_PT_2409 = r_FORMAL_VIEW(l_Y_2401, l_P_2402);
if ((l_PT_2409 == NULL))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2402))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2409)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_2421; memset(&l_V_2421, 0, sizeof l_V_2421);
R9 l_CV_2422; memset(&l_CV_2422, 0, sizeof l_CV_2422);
if ((((*(R27 *)rt_nil_check(l_A_2403))).f_HAVE && (!r_WANT_SENSITIVE(l_A_2403))))
{
S_R26(&l_V_2421, ((*(R27 *)rt_nil_check(l_A_2403))).f_V, 0);
}
else
{
S_R26(&l_V_2421, r_EXPR(((*(R27 *)rt_nil_check(l_A_2403))).f_E, l_PT_2409), 0);
}
S_R9(&l_CV_2422, r_CONVERT(l_V_2421, l_PT_2409, p_LINE, r_NO_TEXT()), 0);
if (((l_SHARED_2408 && (l_V_2421).f_LVAL) && r_IS_STRUCTURED(l_PT_2409)))
{
S_R9(&l_CV_2422, r_COPY_OF(l_PT_2409, l_CV_2422), 0);
}
S_R9(&l_C_2404, r_FMT3(rt_str("@@@", 3), l_C_2404, l_SEP_2405, l_CV_2422), 0);
S_R9(&l_SEP_2405, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_2423; memset(&l_V_2423, 0, sizeof l_V_2423);
if (((*(R27 *)rt_nil_check(l_A_2403))).f_HAVE)
{
S_R26(&l_V_2423, ((*(R27 *)rt_nil_check(l_A_2403))).f_V, 0);
}
else
{
S_R26(&l_V_2423, r_EXPR(((*(R27 *)rt_nil_check(l_A_2403))).f_E, l_PT_2409), 0);
}
if (((!(((*(R27 *)rt_nil_check(l_A_2403))).f_E == NULL)) && (!(l_V_2423).f_LVAL)))
{
if ((((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2403))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2403))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_2423, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_2423).f_C), (l_V_2423).f_T), 0);
(l_V_2423).f_LVAL = 1;
}
}
if ((!(l_V_2423).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(l_PT_2409, (l_V_2423).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(l_PT_2409));
}
if (((((*(R28 *)rt_nil_check(l_P_2402))).f_MODE == g_M_INOUT) && (!((r_SAME_TYPE(l_PT_2409, (l_V_2423).f_T) && r_SAME_RANGE(l_PT_2409, (l_V_2423).f_T))))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
if (((((*(R28 *)rt_nil_check(l_P_2402))).f_MODE == g_M_OUT) && (!((r_SAME_TYPE(l_PT_2409, (l_V_2423).f_T) && r_SAME_RANGE(l_PT_2409, (l_V_2423).f_T))))))
{
{
R9 l_TMP_2424; memset(&l_TMP_2424, 0, sizeof l_TMP_2424);
S_R9(&l_TMP_2424, r_NEW_NAME(rt_str("oa", 2)), 0);
R9 l_AP_2425; memset(&l_AP_2425, 0, sizeof l_AP_2425);
S_R9(&l_AP_2425, r_NEW_NAME(rt_str("op", 2)), 0);
S_R9(&l_PRE_2406, r_FMT4(rt_str("@ @ *@ = &@;", 12), l_PRE_2406, r_CTYPE((l_V_2423).f_T), l_AP_2425, (l_V_2423).f_C), 0);
S_R9(&l_PRE_2406, r_FMT4(rt_str("@ @ @ = @;", 10), l_PRE_2406, r_CTYPE(l_PT_2409), l_TMP_2424, r_COPY_OF((l_V_2423).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2425))), 0);
S_R9(&l_POST_2407, r_FMT2(rt_str("@ @", 3), l_POST_2407, r_STORE_CODE((l_V_2423).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2425), r_MKET(l_TMP_2424, l_PT_2409), p_LINE, r_NO_TEXT())), 0);
S_R9(&l_C_2404, r_FMT3(rt_str("@@&@", 4), l_C_2404, l_SEP_2405, l_TMP_2424), 0);
}
}
else
{
S_R9(&l_C_2404, r_FMT3(rt_str("@@&@", 4), l_C_2404, l_SEP_2405, (l_V_2423).f_C), 0);
}
S_R9(&l_SEP_2405, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_2403 = ((*(R27 *)rt_nil_check(l_A_2403))).f_NEXT;
l_P_2402 = ((*(R28 *)rt_nil_check(l_P_2402))).f_NEXT;
}
RT_B_TICK();
} L_end2420: ;
if ((!(l_A_2403 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
if (((l_PRE_2406).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2426 = r_MKET(r_FMT4(rt_str("({ @ @(@); @ })", 15), l_PRE_2406, ((*(R12 *)rt_nil_check(l_Y_2401))).f_ACCESS, l_C_2404, l_POST_2407), r_RESULT_VIEW(l_Y_2401));
return rv2426; }
}
{ R26 rv2427 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_2401))).f_ACCESS, l_C_2404), r_RESULT_VIEW(l_Y_2401));
return rv2427; }
rt_raise(RT_X_INIT);
}
static R22 * r_FORMAL_VIEW(R12 * p_R, R28 * p_P) { RT_B_TICK(); 
if (((((*(R28 *)rt_nil_check(p_P))).f_T == NULL) || (((*(R28 *)rt_nil_check(p_P))).f_TS == NULL)))
{
{ R22 * rv2428 = ((*(R28 *)rt_nil_check(p_P))).f_T;
return rv2428; }
}
{ R22 * rv2429 = r_OUTSIDE_VIEW(p_R, ((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R28 *)rt_nil_check(p_P))).f_T);
return rv2429; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESULT_VIEW(R12 * p_R) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_R))).f_DECL == NULL) || (((*(R12 *)rt_nil_check(p_R))).f_RESULT == NULL)))
{
{ R22 * rv2430 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2430; }
}
if (((!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B == NULL)))
{
{ R22 * rv2431 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2431; }
}
{ R22 * rv2432 = r_OUTSIDE_VIEW(p_R, ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2432; }
rt_raise(RT_X_INIT);
}
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R17 * p_TS, R22 * p_T) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_R))).f_MODL == NULL) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)) || (!(((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))))
{
{ R22 * rv2433 = p_T;
return rv2433; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_R))).f_MODL))
{
{ R22 * rv2434 = p_T;
return rv2434; }
}
{
R12 * l_M_2435; memset(&l_M_2435, 0, sizeof l_M_2435);
l_M_2435 = ((*(R12 *)rt_nil_check(p_R))).f_MODL;
for (;;) {
if ((l_M_2435 == NULL)) goto L_end2436;
{
{
R12 * l_Y_2437; memset(&l_Y_2437, 0, sizeof l_Y_2437);
l_Y_2437 = r_MEMBER_TYPE(l_M_2435, ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_2437 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_2437))).f_EXPORTED)
{
{ R22 * rv2438 = r_ABSTRACT_VIEW(l_Y_2437, p_T);
return rv2438; }
}
{ R22 * rv2439 = p_T;
return rv2439; }
}
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(l_M_2435))).f_MODL))
{
goto L_end2436;
}
l_M_2435 = ((*(R12 *)rt_nil_check(l_M_2435))).f_MODL;
}
RT_B_TICK();
} L_end2436: ;
}
{ R22 * rv2440 = p_T;
return rv2440; }
rt_raise(RT_X_INIT);
}
static R12 * r_MEMBER_TYPE(R12 * p_M, R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2441; memset(&l_Y_2441, 0, sizeof l_Y_2441);
l_Y_2441 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
if (((*(R12 *)rt_nil_check(p_M))).f_BUSY)
{
{
R12 * l_Z_2442; memset(&l_Z_2442, 0, sizeof l_Z_2442);
l_Z_2442 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Z_2442 == NULL)) goto L_end2443;
{
if ((((((*(R12 *)rt_nil_check(l_Z_2442))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Z_2442))).f_MODL == p_M)) && (((*(R12 *)rt_nil_check(l_Z_2442))).f_ORIG == NULL)))
{
{ R12 * rv2444 = l_Z_2442;
return rv2444; }
}
l_Z_2442 = r_LOOKUP_NEXT(l_Z_2442);
}
RT_B_TICK();
} L_end2443: ;
}
{ R12 * rv2445 = NULL;
return rv2445; }
}
for (;;) {
if ((l_Y_2441 == NULL)) goto L_end2446;
{
if (((((*(R12 *)rt_nil_check(l_Y_2441))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_2441))).f_NAME, p_NAME)))
{
{ R12 * rv2447 = l_Y_2441;
return rv2447; }
}
l_Y_2441 = ((*(R12 *)rt_nil_check(l_Y_2441))).f_SNEXT;
}
RT_B_TICK();
} L_end2446: ;
{ R12 * rv2448 = NULL;
return rv2448; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_2449; memset(&l_K_2449, 0, sizeof l_K_2449);
l_K_2449 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND;
{ rt_int rv2450 = ((((l_K_2449 == g_T_STR) || (l_K_2449 == g_T_BITS)) || (l_K_2449 == g_T_ARR)) || (l_K_2449 == g_T_REC));
return rv2450; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2451; memset(&l_RA_2451, 0, sizeof l_RA_2451);
l_RA_2451 = r_REAL_TYPE(p_A);
R22 * l_RB_2452; memset(&l_RB_2452, 0, sizeof l_RB_2452);
l_RB_2452 = r_REAL_TYPE(p_B);
if ((!r_IS_NUMERIC_OR_ENUM(l_RA_2451)))
{
{ rt_int rv2453 = 1;
return rv2453; }
}
if ((((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2451))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2451))).f_HI_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2452))).f_LO_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2452))).f_HI_C)))
{
{ rt_int rv2454 = 1;
return rv2454; }
}
if ((((((*(R22 *)rt_nil_check(l_RA_2451))).f_LO_C).f_LEN == ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_RB_2452))).f_LO_C).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2455 = ((((*(R22 *)rt_nil_check(l_RA_2451))).f_LO_C).f_LEN == (((*(R22 *)rt_nil_check(l_RB_2452))).f_LO_C).f_LEN);
return rv2455; }
}
if (((((((*(R22 *)rt_nil_check(l_RA_2451))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_RB_2452))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_RA_2451))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(l_RB_2452))).f_MHI).f_OK))
{
{ rt_int rv2456 = (((((*(R22 *)rt_nil_check(l_RA_2451))).f_MLO).f_V == (((*(R22 *)rt_nil_check(l_RB_2452))).f_MLO).f_V) && ((((*(R22 *)rt_nil_check(l_RA_2451))).f_MHI).f_V == (((*(R22 *)rt_nil_check(l_RB_2452))).f_MHI).f_V));
return rv2456; }
}
{ rt_int rv2457 = (r_TEQ(((*(R22 *)rt_nil_check(l_RA_2451))).f_LO_C, ((*(R22 *)rt_nil_check(l_RB_2452))).f_LO_C) && r_TEQ(((*(R22 *)rt_nil_check(l_RA_2451))).f_HI_C, ((*(R22 *)rt_nil_check(l_RB_2452))).f_HI_C));
return rv2457; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R17 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2458 = 0;
return rv2458; }
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv2459 = 1;
return rv2459; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2460 = 1;
return rv2460; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2461 = r_STATIC_GENERIC(((*(R17 *)rt_nil_check(p_TS))).f_C);
return rv2461; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_N_REP) && r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_A)))
{
{ rt_int rv2462 = 1;
return rv2462; }
}
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv2463 = r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(p_TS))).f_A);
return rv2463; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv2464 = r_STATIC_GENERIC(((*(R17 *)rt_nil_check(p_TS))).f_A);
return rv2464; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv2465 = ((((*(R17 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv2465; }
}
else if (((r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv2466 = 0;
return rv2466; }
}
{
R12 * l_Y_2467; memset(&l_Y_2467, 0, sizeof l_Y_2467);
l_Y_2467 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
R17 * l_A_2468; memset(&l_A_2468, 0, sizeof l_A_2468);
l_A_2468 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R17 * l_F_2469; memset(&l_F_2469, 0, sizeof l_F_2469);
if ((l_Y_2467 == NULL))
{
{ rt_int rv2470 = 0;
return rv2470; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2467))).f_KIND == g_Y_GEN))
{
{ rt_int rv2471 = 1;
return rv2471; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2467))).f_DECL == NULL))
{
{ rt_int rv2472 = 0;
return rv2472; }
}
l_F_2469 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2467))).f_DECL))).f_A;
for (;;) {
if ((l_F_2469 == NULL)) goto L_end2473;
{
{
R17 * l_N_2474; memset(&l_N_2474, 0, sizeof l_N_2474);
l_N_2474 = ((*(R17 *)rt_nil_check(l_F_2469))).f_A;
for (;;) {
if ((l_N_2474 == NULL)) goto L_end2475;
{
if ((l_A_2468 == NULL))
{
{ rt_int rv2476 = 0;
return rv2476; }
}
if (((((*(R17 *)rt_nil_check(l_F_2469))).f_B == NULL) && ((((((*(R17 *)rt_nil_check(l_A_2468))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_A_2468))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_2468)))))
{
{ rt_int rv2477 = 1;
return rv2477; }
}
l_A_2468 = ((*(R17 *)rt_nil_check(l_A_2468))).f_NEXT;
l_N_2474 = ((*(R17 *)rt_nil_check(l_N_2474))).f_NEXT;
}
RT_B_TICK();
} L_end2475: ;
}
l_F_2469 = ((*(R17 *)rt_nil_check(l_F_2469))).f_NEXT;
}
RT_B_TICK();
} L_end2473: ;
}
}
{ rt_int rv2478 = 0;
return rv2478; }
rt_raise(RT_X_INIT);
}
static R17 * r_OWN_NAMES(R17 * p_R) { RT_B_TICK(); 
R17 * l_HEAD_2479; memset(&l_HEAD_2479, 0, sizeof l_HEAD_2479);
l_HEAD_2479 = NULL;
r_GEN_NAMES(((*(R17 *)rt_nil_check(p_R))).f_A, &l_HEAD_2479);
{ R17 * rv2480 = l_HEAD_2479;
return rv2480; }
rt_raise(RT_X_INIT);
}
static rt_int r_DECLARES_DERIVED(R17 * p_L) { RT_B_TICK(); 
R17 * l_N_2481; memset(&l_N_2481, 0, sizeof l_N_2481);
l_N_2481 = p_L;
for (;;) {
if ((l_N_2481 == NULL)) goto L_end2482;
{
if (((((*(R17 *)rt_nil_check(l_N_2481))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(l_N_2481))).f_NAME).f_LEN > ((rt_int)0LL))))
{
{ rt_int rv2483 = 1;
return rv2483; }
}
if ((((*(R17 *)rt_nil_check(l_N_2481))).f_KIND == g_N_PARAM))
{
if (r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2481))).f_B))
{
{ rt_int rv2484 = 1;
return rv2484; }
}
}
else if ((!(((*(R17 *)rt_nil_check(l_N_2481))).f_KIND == g_TS_GEN)))
{
if ((r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2481))).f_A) || r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2481))).f_C)))
{
{ rt_int rv2485 = 1;
return rv2485; }
}
if ((!(((*(R17 *)rt_nil_check(l_N_2481))).f_B == NULL)))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_2481))).f_B))).f_KIND == g_N_RANGE))
{
if ((r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_2481))).f_B))).f_A) || r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_2481))).f_B))).f_B)))
{
{ rt_int rv2486 = 1;
return rv2486; }
}
}
else if (r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2481))).f_B))
{
{ rt_int rv2487 = 1;
return rv2487; }
}
}
}
l_N_2481 = ((*(R17 *)rt_nil_check(l_N_2481))).f_NEXT;
}
RT_B_TICK();
} L_end2482: ;
{ rt_int rv2488 = 0;
return rv2488; }
rt_raise(RT_X_INIT);
}
static R22 * r_MARK_GENP(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R22 * l_C_2489; memset(&l_C_2489, 0, sizeof l_C_2489);
l_C_2489 = r_COPY_TYP(p_T);
S_R9(&((*(R22 *)rt_nil_check(l_C_2489))).f_GENP, p_NAME, 0);
{ R22 * rv2490 = l_C_2489;
return rv2490; }
rt_raise(RT_X_INIT);
}
static R12 * r_CUR_GENERIC(void) { RT_B_TICK(); 
R19 * l_CS_2491; memset(&l_CS_2491, 0, sizeof l_CS_2491);
l_CS_2491 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
for (;;) {
if ((l_CS_2491 == NULL)) goto L_end2492;
{
if ((!(((*(R19 *)rt_nil_check(l_CS_2491))).f_R == NULL)))
{
if ((!(((*(R12 *)rt_nil_check(((*(R19 *)rt_nil_check(l_CS_2491))).f_R))).f_BINDINGS == NULL)))
{
{ R12 * rv2493 = ((*(R19 *)rt_nil_check(l_CS_2491))).f_R;
return rv2493; }
}
}
l_CS_2491 = ((*(R19 *)rt_nil_check(l_CS_2491))).f_UP;
}
RT_B_TICK();
} L_end2492: ;
{ R12 * rv2494 = NULL;
return rv2494; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_WHERE(R12 * p_G, R9 p_NAME) { RT_B_TICK(); 
R17 * l_N_2495; memset(&l_N_2495, 0, sizeof l_N_2495);
l_N_2495 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
for (;;) {
if ((l_N_2495 == NULL)) goto L_end2496;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_N_2495))).f_A, p_NAME))
{
{ rt_int rv2497 = 1;
return rv2497; }
}
l_N_2495 = ((*(R17 *)rt_nil_check(l_N_2495))).f_NEXT;
}
RT_B_TICK();
} L_end2496: ;
{ rt_int rv2498 = 0;
return rv2498; }
rt_raise(RT_X_INIT);
}
static void r_REQUIRE_WHERE(R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_G_2499; memset(&l_G_2499, 0, sizeof l_G_2499);
l_G_2499 = r_CUR_GENERIC();
if ((l_G_2499 == NULL))
{
return;
}
if ((!r_IN_WHERE(l_G_2499, p_NAME)))
{
r_FAILT(p_LINE, rt_str("invoked with objects of a TYPE parameter, so named in the WHERE clause (5.2): ", 78), p_NAME);
}
}
static void r_REQUIRE_WHERE_SUBSET(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_N_2500; memset(&l_N_2500, 0, sizeof l_N_2500);
l_N_2500 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_D))).f_B;
R12 * l_G_2501; memset(&l_G_2501, 0, sizeof l_G_2501);
l_G_2501 = r_CUR_GENERIC();
if ((l_G_2501 == NULL))
{
return;
}
for (;;) {
if ((l_N_2500 == NULL)) goto L_end2502;
{
{
R17 * l_T_2503; memset(&l_T_2503, 0, sizeof l_T_2503);
l_T_2503 = ((*(R17 *)rt_nil_check(l_N_2500))).f_A;
for (;;) {
if ((l_T_2503 == NULL)) goto L_end2504;
{
if ((!r_IN_WHERE(l_G_2501, ((*(R17 *)rt_nil_check(l_T_2503))).f_NAME)))
{
r_FAILT(p_LINE, rt_str("the WHERE routines of the invoked generic routine are among the caller's (5.2): ", 80), ((*(R17 *)rt_nil_check(l_T_2503))).f_NAME);
}
l_T_2503 = ((*(R17 *)rt_nil_check(l_T_2503))).f_NEXT;
}
RT_B_TICK();
} L_end2504: ;
}
l_N_2500 = ((*(R17 *)rt_nil_check(l_N_2500))).f_NEXT;
}
RT_B_TICK();
} L_end2502: ;
}
static rt_int r_HAS_GEN_ARG(R17 * p_A) { RT_B_TICK(); 
R17 * l_P_2505; memset(&l_P_2505, 0, sizeof l_P_2505);
l_P_2505 = p_A;
for (;;) {
if ((l_P_2505 == NULL)) goto L_end2506;
{
if (((((*(R17 *)rt_nil_check(l_P_2505))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_P_2505))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2507 = 1;
return rv2507; }
}
l_P_2505 = ((*(R17 *)rt_nil_check(l_P_2505))).f_NEXT;
}
RT_B_TICK();
} L_end2506: ;
{ rt_int rv2508 = 0;
return rv2508; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { RT_B_TICK(); 
rt_int l_ENTERED_2509; memset(&l_ENTERED_2509, 0, sizeof l_ENTERED_2509);
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
l_ENTERED_2509 = r_ENTER_MODULE_FOR(p_Y);
{
R12 * l_SAVED_SEG_2510; memset(&l_SAVED_SEG_2510, 0, sizeof l_SAVED_SEG_2510);
l_SAVED_SEG_2510 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(p_Y))).f_HOME;
r_ROUTINE_HEADER1(p_Y);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_2510;
}
if (l_ENTERED_2509)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
}
static void r_ROUTINE_HEADER1(R12 * p_Y) { RT_B_TICK(); 
R17 * l_R_2511; memset(&l_R_2511, 0, sizeof l_R_2511);
l_R_2511 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R17 * l_P_2512; memset(&l_P_2512, 0, sizeof l_P_2512);
R28 * l_TAIL_2513; memset(&l_TAIL_2513, 0, sizeof l_TAIL_2513);
l_TAIL_2513 = NULL;
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_2512 = ((*(R17 *)rt_nil_check(l_R_2511))).f_A;
for (;;) {
if ((l_P_2512 == NULL)) goto L_end2514;
{
if (((((*(R17 *)rt_nil_check(l_P_2512))).f_B == NULL) || r_STATIC_GENERIC(((*(R17 *)rt_nil_check(l_P_2512))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2512 = ((*(R17 *)rt_nil_check(l_P_2512))).f_NEXT;
}
RT_B_TICK();
} L_end2514: ;
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2511))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
{
R17 * l_N_2515; memset(&l_N_2515, 0, sizeof l_N_2515);
l_N_2515 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2511))).f_D))).f_B;
for (;;) {
if ((l_N_2515 == NULL)) goto L_end2516;
{
{
R17 * l_T_2517; memset(&l_T_2517, 0, sizeof l_T_2517);
l_T_2517 = ((*(R17 *)rt_nil_check(l_N_2515))).f_A;
for (;;) {
if ((l_T_2517 == NULL)) goto L_end2518;
{
if ((r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_T_2517))).f_B))).f_A) || r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_T_2517))).f_B))).f_B)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_T_2517))).f_LINE, rt_str("a WHERE template declares no derived generic parameter (5.2): ", 62), ((*(R17 *)rt_nil_check(l_T_2517))).f_NAME);
}
l_T_2517 = ((*(R17 *)rt_nil_check(l_T_2517))).f_NEXT;
}
RT_B_TICK();
} L_end2518: ;
}
l_N_2515 = ((*(R17 *)rt_nil_check(l_N_2515))).f_NEXT;
}
RT_B_TICK();
} L_end2516: ;
}
}
l_P_2512 = ((*(R17 *)rt_nil_check(l_R_2511))).f_A;
for (;;) {
if ((l_P_2512 == NULL)) goto L_end2519;
{
{
R28 * l_PM_2520; memset(&l_PM_2520, 0, sizeof l_PM_2520);
l_PM_2520 = ((R28 *)rt_b_new(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2520)), ({ R28 rc2521; memset(&rc2521, 0, sizeof rc2521);  S_R9(&rc2521.f_NAME, ((*(R17 *)rt_nil_check(l_P_2512))).f_NAME, 0); rc2521.f_MODE = ((*(R17 *)rt_nil_check(l_P_2512))).f_IV; rc2521.f_T = NULL; rc2521.f_TS = ((*(R17 *)rt_nil_check(l_P_2512))).f_B; rc2521.f_NEXT = NULL; rc2521; }), 0);
if (((((*(R17 *)rt_nil_check(l_R_2511))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(l_P_2512))).f_IV == g_M_IN))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2512))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!(((*(R17 *)rt_nil_check(l_P_2512))).f_B == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_2512))).f_B))).f_KIND == g_TS_ROUTINE) && (!(((*(R17 *)rt_nil_check(l_P_2512))).f_IV == g_M_IN))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2512))).f_LINE, rt_str("a routine-spec declares only input parameters (5.1)", 51));
}
if (r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_P_2512))).f_B, NULL, r_OWN_NAMES(l_R_2511)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2512))).f_LINE, rt_str("the attributes in the type of a formal are manifest (4.3.1)", 59));
}
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R28 *)rt_nil_check(l_PM_2520))).f_T = r_RESOLVE(((*(R17 *)rt_nil_check(l_P_2512))).f_B);
}
if ((l_TAIL_2513 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_2520;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2513))).f_NEXT = l_PM_2520;
}
l_TAIL_2513 = l_PM_2520;
}
l_P_2512 = ((*(R17 *)rt_nil_check(l_P_2512))).f_NEXT;
}
RT_B_TICK();
} L_end2519: ;
if ((!(((*(R17 *)rt_nil_check(l_R_2511))).f_B == NULL)))
{
if (r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_R_2511))).f_B, NULL, r_OWN_NAMES(l_R_2511)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_2511))).f_LINE, rt_str("the returns-clause may not refer to a variable (4.3.1)", 54));
}
}
if ((((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC) && r_TEQS(r_BASE_NAME(p_Y), rt_str("STORE_", 6))) && (!(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS == NULL))))
{
{
R28 * l_LAST_2522; memset(&l_LAST_2522, 0, sizeof l_LAST_2522);
l_LAST_2522 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((((*(R28 *)rt_nil_check(l_LAST_2522))).f_NEXT == NULL)) goto L_end2523;
{
l_LAST_2522 = ((*(R28 *)rt_nil_check(l_LAST_2522))).f_NEXT;
}
RT_B_TICK();
} L_end2523: ;
if ((((!(l_LAST_2522 == ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS)) && (!(((*(R28 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS))).f_T == NULL))) && (!(((*(R28 *)rt_nil_check(l_LAST_2522))).f_T == NULL))))
{
if ((!r_SAME_CLASS(((*(R28 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS))).f_T, ((*(R28 *)rt_nil_check(l_LAST_2522))).f_T)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_2511))).f_LINE, rt_str("both arguments of STORE_ belong to the same type class (D.4)", 60));
}
}
}
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R12 *)rt_nil_check(p_Y))).f_RESULT = r_RESULT_TYPE(p_Y);
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_FWD, r_C_HEADER(p_Y), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(p_Y))).f_FWD, rt_str(";", 1)));
}
}
static R22 * r_RESULT_TYPE(R12 * p_Y) { RT_B_TICK(); 
R17 * l_R_2524; memset(&l_R_2524, 0, sizeof l_R_2524);
l_R_2524 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_2525; memset(&l_T_2525, 0, sizeof l_T_2525);
if ((((*(R17 *)rt_nil_check(l_R_2524))).f_B == NULL))
{
{ R22 * rv2526 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv2526; }
}
r_OPEN_SCOPE();
{
R28 * l_P_2527; memset(&l_P_2527, 0, sizeof l_P_2527);
l_P_2527 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2527 == NULL)) goto L_end2528;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2527))).f_T == NULL)))
{
{
R12 * l_V_2529; memset(&l_V_2529, 0, sizeof l_V_2529);
l_V_2529 = r_NEW_SYM(g_Y_CONST, ((*(R28 *)rt_nil_check(l_P_2527))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2529))).f_T = ((*(R28 *)rt_nil_check(l_P_2527))).f_T;
S_R9(&((*(R12 *)rt_nil_check(l_V_2529))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2527))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_V_2529))).f_INPUT = 1;
r_DEFINE(l_V_2529, ((*(R17 *)rt_nil_check(l_R_2524))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2527))).f_T, ((*(R12 *)rt_nil_check(l_V_2529))).f_ACCESS, ((*(R17 *)rt_nil_check(l_R_2524))).f_LINE, 0);
}
}
l_P_2527 = ((*(R28 *)rt_nil_check(l_P_2527))).f_NEXT;
}
RT_B_TICK();
} L_end2528: ;
}
l_T_2525 = r_RESOLVE(((*(R17 *)rt_nil_check(l_R_2524))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv2530 = l_T_2525;
return rv2530; }
rt_raise(RT_X_INIT);
}
static R9 r_C_HEADER(R12 * p_Y) { RT_B_TICK(); 
R9 l_PS_2531; memset(&l_PS_2531, 0, sizeof l_PS_2531);
S_R9(&l_PS_2531, r_MK(rt_str("", 0)), 0);
R9 l_SEP_2532; memset(&l_SEP_2532, 0, sizeof l_SEP_2532);
S_R9(&l_SEP_2532, r_MK(rt_str("", 0)), 0);
R28 * l_P_2533; memset(&l_P_2533, 0, sizeof l_P_2533);
l_P_2533 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_PS_2531, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R9(&l_SEP_2532, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_2533 == NULL)) goto L_end2534;
{
if ((((*(R28 *)rt_nil_check(l_P_2533))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2533))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2533))).f_MODE == g_M_IN))
{
S_R9(&l_PS_2531, r_FMT4(rt_str("@@@ p_@", 7), l_PS_2531, l_SEP_2532, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2533))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2533))).f_NAME)), 0);
S_R9(&l_SEP_2532, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R9(&l_PS_2531, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_2531, l_SEP_2532, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2533))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2533))).f_NAME)), 0);
S_R9(&l_SEP_2532, r_MK(rt_str(", ", 2)), 0);
}
l_P_2533 = ((*(R28 *)rt_nil_check(l_P_2533))).f_NEXT;
}
RT_B_TICK();
} L_end2534: ;
if (((l_PS_2531).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_PS_2531, r_MK(rt_str("void", 4)), 0);
}
{ R9 rv2535 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2531);
return rv2535; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_PARAM_GENS(R22 * p_T, R9 p_PC, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
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
R25 * l_B_2536; memset(&l_B_2536, 0, sizeof l_B_2536);
l_B_2536 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_2537; memset(&l_I_2537, 0, sizeof l_I_2537);
l_I_2537 = ((rt_int)0LL);
for (;;) {
if ((l_B_2536 == NULL)) goto L_end2538;
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2536))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2536))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_2537)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2536))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2536))).f_LO) || ((((*(R25 *)rt_nil_check(l_B_2536))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2536))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_2537)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2536))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_2537), p_PC, r_NUM(l_I_2537)), ((*(R25 *)rt_nil_check(l_B_2536))).f_LO), p_LINE, p_CHECK);
}
}
l_I_2537 = rt_add(l_I_2537, ((rt_int)1LL));
l_B_2536 = ((*(R25 *)rt_nil_check(l_B_2536))).f_NEXT;
}
RT_B_TICK();
} L_end2538: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_2539; memset(&l_U_2539, 0, sizeof l_U_2539);
l_U_2539 = r_REAL_TYPE(p_T);
R24 * l_F_2540; memset(&l_F_2540, 0, sizeof l_F_2540);
l_F_2540 = ((*(R22 *)rt_nil_check(l_U_2539))).f_FIELDS;
R25 * l_A_2541; memset(&l_A_2541, 0, sizeof l_A_2541);
l_A_2541 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_2540 == NULL) || (l_A_2541 == NULL))) goto L_end2542;
{
if ((!(((*(R24 *)rt_nil_check(l_F_2540))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_A_2541))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_A_2541))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R24 *)rt_nil_check(l_F_2540))).f_CNAME), p_LINE, p_CHECK);
}
l_A_2541 = ((*(R25 *)rt_nil_check(l_A_2541))).f_NEXT;
}
l_F_2540 = ((*(R24 *)rt_nil_check(l_F_2540))).f_NEXT;
}
RT_B_TICK();
} L_end2542: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R9 p_T) { RT_B_TICK(); 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2543 = 0;
return rv2543; }
}
{ rt_int rv2544 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv2544; }
rt_raise(RT_X_INIT);
}
static R9 r_GEN_TEXT_NAME(R9 p_T) { RT_B_TICK(); 
{ R9 rv2545 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv2545; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R9 p_NAME, R9 p_C, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
R12 * l_OLD_2546; memset(&l_OLD_2546, 0, sizeof l_OLD_2546);
l_OLD_2546 = r_LOOKUP(p_NAME);
if ((!(l_OLD_2546 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_2546))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_2546))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_2546))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_2547; memset(&l_G_2547, 0, sizeof l_G_2547);
l_G_2547 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_2547))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R9(&((*(R12 *)rt_nil_check(l_G_2547))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_2547))).f_INPUT = 1;
r_DEFINE(l_G_2547, p_LINE);
}
}
static R21 * r_NEW_BINDS(void) { RT_B_TICK(); 
R21 * l_B_2548; memset(&l_B_2548, 0, sizeof l_B_2548);
l_B_2548 = ((R21 *)rt_b_new(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_B_2548)), ({ R21 rc2549; memset(&rc2549, 0, sizeof rc2549);  S_R9(&rc2549.f_NAME, r_NO_TEXT(), 0); rc2549.f_T = NULL; S_R9(&rc2549.f_C, r_NO_TEXT(), 0); rc2549.f_HASMV = 0; rc2549.f_MV = ((rt_int)0LL); rc2549.f_R = NULL; rc2549.f_NEXT = NULL; rc2549; }), 0);
{ R21 * rv2550 = l_B_2548;
return rv2550; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R9 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R21 * p_HEAD) { RT_B_TICK(); 
R21 * l_B_2551; memset(&l_B_2551, 0, sizeof l_B_2551);
l_B_2551 = ((R21 *)rt_b_new(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_B_2551)), ({ R21 rc2552; memset(&rc2552, 0, sizeof rc2552);  S_R9(&rc2552.f_NAME, p_NAME, 0); rc2552.f_T = p_T; S_R9(&rc2552.f_C, r_NO_TEXT(), 0); rc2552.f_HASMV = (p_M).f_OK; rc2552.f_MV = (p_M).f_V; rc2552.f_R = p_R; rc2552.f_NEXT = ((*(R21 *)rt_nil_check(p_HEAD))).f_NEXT; rc2552; }), 0);
if ((p_M).f_OK)
{
S_R9(&((*(R21 *)rt_nil_check(l_B_2551))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R21 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_2551;
}
static R21 * r_FIND_BIND(R21 * p_BS, R9 p_NAME) { RT_B_TICK(); 
R21 * l_B_2553; memset(&l_B_2553, 0, sizeof l_B_2553);
l_B_2553 = p_BS;
for (;;) {
if ((l_B_2553 == NULL)) goto L_end2554;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_B_2553))).f_NAME, p_NAME))
{
{ R21 * rv2555 = l_B_2553;
return rv2555; }
}
l_B_2553 = ((*(R21 *)rt_nil_check(l_B_2553))).f_NEXT;
}
RT_B_TICK();
} L_end2554: ;
{ R21 * rv2556 = NULL;
return rv2556; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R17 * p_TS, R22 * p_T, R21 * p_BS) { RT_B_TICK(); 
R22 * l_RT_2557; memset(&l_RT_2557, 0, sizeof l_RT_2557);
l_RT_2557 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv2558 = 1;
return rv2558; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv2559 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv2559; }
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2560 = 1;
return rv2560; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R17 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2561 = 1;
return rv2561; }
}
{
R21 * l_B_2562; memset(&l_B_2562, 0, sizeof l_B_2562);
l_B_2562 = r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_2562 == NULL)))
{
if ((((*(R21 *)rt_nil_check(l_B_2562))).f_T == NULL))
{
{ rt_int rv2563 = 0;
return rv2563; }
}
{ rt_int rv2564 = r_SAME_TYPE(((*(R21 *)rt_nil_check(l_B_2562))).f_T, p_T);
return rv2564; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_C == NULL) && r_NONSTANDARD_REP(p_T)))
{
{ rt_int rv2565 = 0;
return rv2565; }
}
r_ADD_BIND(((*(R17 *)rt_nil_check(p_TS))).f_NAME, p_T, r_NO_MVAL(), NULL, p_BS);
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_NAME) == NULL))
{
r_ADD_BIND(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_NAME, p_T, r_NO_MVAL(), NULL, p_BS);
}
}
}
{ rt_int rv2566 = 1;
return rv2566; }
}
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2557))).f_KIND == g_T_ARR)))
{
{ rt_int rv2567 = 0;
return rv2567; }
}
if ((!(r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_2557))).f_DIMS)))
{
{ rt_int rv2568 = 0;
return rv2568; }
}
{ rt_int rv2569 = r_UNIFY(((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_2557))).f_ELEM, p_BS);
return rv2569; }
}
else if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv2570 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2570; }
}
else if ((!(((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2571 = 0;
return rv2571; }
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_2557))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_2557))).f_MHI, p_BS))))
{
{ rt_int rv2572 = 0;
return rv2572; }
}
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_N_REP) && (!r_UNIFY_REP(((*(R17 *)rt_nil_check(p_TS))).f_C, l_RT_2557, p_BS))))
{
{ rt_int rv2573 = 0;
return rv2573; }
}
}
if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2557))).f_KIND == g_T_INT)))
{
{ rt_int rv2574 = 0;
return rv2574; }
}
{ rt_int rv2575 = ((r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2557))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS)) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)2LL)), r_SOME(((rt_int)0LL)), p_BS));
return rv2575; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv2576 = ((((*(R22 *)rt_nil_check(l_RT_2557))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2557))).f_SCALE == ((rt_int)0LL)));
return rv2576; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2557))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv2577 = 0;
return rv2577; }
}
{ rt_int rv2578 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2557))).f_SCALE), p_BS);
return rv2578; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv2579 = (((*(R22 *)rt_nil_check(l_RT_2557))).f_KIND == g_T_BOOL);
return rv2579; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv2580 = ((((*(R22 *)rt_nil_check(l_RT_2557))).f_KIND == g_T_STR) && r_SAME_DERIVED_LENGTH(r_NTH_ARG(p_TS, ((rt_int)0LL)), l_RT_2557, p_BS));
return rv2580; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2557))).f_KIND == g_T_STR)))
{
{ rt_int rv2581 = 0;
return rv2581; }
}
if ((!(((*(R17 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv2582 = 1;
return rv2582; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_2557))).f_BASE == NULL)))
{
{ rt_int rv2583 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_2557))).f_BASE, p_BS);
return rv2583; }
}
{ rt_int rv2584 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv2584; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv2585 = ((((*(R22 *)rt_nil_check(l_RT_2557))).f_KIND == g_T_BITS) && r_SAME_DERIVED_LENGTH(r_NTH_ARG(p_TS, ((rt_int)0LL)), l_RT_2557, p_BS));
return rv2585; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv2586 = (((*(R22 *)rt_nil_check(l_RT_2557))).f_KIND == g_T_SEM);
return rv2586; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2557))).f_KIND == g_T_PTR)))
{
{ rt_int rv2587 = 0;
return rv2587; }
}
{ rt_int rv2588 = r_UNIFY(((*(R17 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_2557), p_BS);
return rv2588; }
}
{
R12 * l_Y_2589; memset(&l_Y_2589, 0, sizeof l_Y_2589);
l_Y_2589 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_2589 == NULL))
{
{ rt_int rv2590 = 0;
return rv2590; }
}
if (((((*(R12 *)rt_nil_check(l_Y_2589))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_2589))).f_DECL == NULL)))
{
{ rt_int rv2591 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_2589))).f_T, p_T);
return rv2591; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2589))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv2592 = 0;
return rv2592; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_2589))))
{
{ rt_int rv2593 = 0;
return rv2593; }
}
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2589))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2557))).f_KIND == g_T_REC)))
{
{ rt_int rv2594 = 0;
return rv2594; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2557))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv2595 = 0;
return rv2595; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2557))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_2589))))
{
{ rt_int rv2596 = 0;
return rv2596; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv2597 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2597; }
}
{ rt_int rv2598 = r_UNIFY(r_SUBST_FORMALS(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2589))).f_DECL))).f_B, ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2589))).f_DECL))).f_A, ((*(R17 *)rt_nil_check(p_TS))).f_A), l_RT_2557, p_BS);
return rv2598; }
}
{
R17 * l_F_2599; memset(&l_F_2599, 0, sizeof l_F_2599);
l_F_2599 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2589))).f_DECL))).f_A;
R17 * l_A_2600; memset(&l_A_2600, 0, sizeof l_A_2600);
l_A_2600 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R25 * l_V_2601; memset(&l_V_2601, 0, sizeof l_V_2601);
l_V_2601 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_2602; memset(&l_CLASS_2602, 0, sizeof l_CLASS_2602);
l_CLASS_2602 = r_RECORD_CLASS_OF(l_RT_2557);
for (;;) {
if ((l_F_2599 == NULL)) goto L_end2603;
{
{
R17 * l_N_2604; memset(&l_N_2604, 0, sizeof l_N_2604);
l_N_2604 = ((*(R17 *)rt_nil_check(l_F_2599))).f_A;
for (;;) {
if ((l_N_2604 == NULL)) goto L_end2605;
{
if ((l_A_2600 == NULL))
{
{ rt_int rv2606 = 0;
return rv2606; }
}
if ((((*(R17 *)rt_nil_check(l_F_2599))).f_B == NULL))
{
if ((!(l_CLASS_2602 == NULL)))
{
{
R21 * l_B_2607; memset(&l_B_2607, 0, sizeof l_B_2607);
l_B_2607 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_2602))).f_BINDINGS, ((*(R17 *)rt_nil_check(l_N_2604))).f_NAME);
if ((!(l_B_2607 == NULL)))
{
if ((!r_UNIFY(l_A_2600, ((*(R21 *)rt_nil_check(l_B_2607))).f_T, p_BS)))
{
{ rt_int rv2608 = 0;
return rv2608; }
}
}
}
}
}
else
{
if ((!(l_V_2601 == NULL)))
{
if ((((!(((*(R17 *)rt_nil_check(l_A_2600))).f_KIND == g_TS_GEN)) && (!(((*(R17 *)rt_nil_check(l_A_2600))).f_KIND == g_N_DONTCARE))) && (!(((*(R17 *)rt_nil_check(l_A_2600))).f_KIND == g_N_ANY))))
{
{
R23 l_M_2609; memset(&l_M_2609, 0, sizeof l_M_2609);
S_R23(&l_M_2609, r_MANIFEST(l_A_2600), 0);
if (((l_M_2609).f_OK && (((*(R25 *)rt_nil_check(l_V_2601))).f_MLO).f_OK))
{
if ((!((l_M_2609).f_V == (((*(R25 *)rt_nil_check(l_V_2601))).f_MLO).f_V)))
{
{ rt_int rv2610 = 0;
return rv2610; }
}
}
}
}
l_V_2601 = ((*(R25 *)rt_nil_check(l_V_2601))).f_NEXT;
}
}
l_A_2600 = ((*(R17 *)rt_nil_check(l_A_2600))).f_NEXT;
l_N_2604 = ((*(R17 *)rt_nil_check(l_N_2604))).f_NEXT;
}
RT_B_TICK();
} L_end2605: ;
}
l_F_2599 = ((*(R17 *)rt_nil_check(l_F_2599))).f_NEXT;
}
RT_B_TICK();
} L_end2603: ;
}
{ rt_int rv2611 = 1;
return rv2611; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_DERIVED_LENGTH(R17 * p_A, R22 * p_RT, R21 * p_BS) { RT_B_TICK(); 
if (((p_A == NULL) || (!(((*(R22 *)rt_nil_check(p_RT))).f_MLEN).f_OK)))
{
{ rt_int rv2612 = 1;
return rv2612; }
}
if (((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) || ((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2613 = 1;
return rv2613; }
}
{
R9 l_KEY_2614; memset(&l_KEY_2614, 0, sizeof l_KEY_2614);
S_R9(&l_KEY_2614, r_MKN(rt_b_cat(rt_str("%", 1), r_STR(((*(R17 *)rt_nil_check(p_A))).f_NAME, (((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN))), 0);
R21 * l_B_2615; memset(&l_B_2615, 0, sizeof l_B_2615);
l_B_2615 = r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, l_KEY_2614);
if ((!(l_B_2615 == NULL)))
{
{ rt_int rv2616 = (((*(R21 *)rt_nil_check(l_B_2615))).f_MV == (((*(R22 *)rt_nil_check(p_RT))).f_MLEN).f_V);
return rv2616; }
}
r_ADD_BIND(l_KEY_2614, NULL, ((*(R22 *)rt_nil_check(p_RT))).f_MLEN, NULL, p_BS);
{ rt_int rv2617 = 1;
return rv2617; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_REP(R17 * p_R, R22 * p_RT, R21 * p_BS) { RT_B_TICK(); 
R17 * l_A_2618; memset(&l_A_2618, 0, sizeof l_A_2618);
l_A_2618 = ((*(R22 *)rt_nil_check(p_RT))).f_REPS;
if (r_TEQS(((*(R17 *)rt_nil_check(p_R))).f_NAME, rt_str("FIXED_REP", 9)))
{
if ((!(((*(R22 *)rt_nil_check(p_RT))).f_KIND == g_T_INT)))
{
{ rt_int rv2619 = 0;
return rv2619; }
}
{
R9 l_SIGNING_2620; memset(&l_SIGNING_2620, 0, sizeof l_SIGNING_2620);
S_R9(&l_SIGNING_2620, r_MK(rt_str("SIGNED", 6)), 0);
if ((!(l_A_2618 == NULL)))
{
if ((!((r_TEQS(((*(R17 *)rt_nil_check(l_A_2618))).f_NAME, rt_str("FIXED_REP", 9)) || r_TEQS(((*(R17 *)rt_nil_check(l_A_2618))).f_NAME, rt_str("FIXED_STD", 9))))))
{
{ rt_int rv2621 = 1;
return rv2621; }
}
if ((r_TEQS(((*(R17 *)rt_nil_check(l_A_2618))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R17 *)rt_nil_check(l_A_2618))).f_A == NULL))))
{
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_2618))).f_A))).f_NEXT == NULL)))
{
S_R9(&l_SIGNING_2620, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_2618))).f_A))).f_NEXT))).f_NAME, 0);
}
}
}
if ((!r_UNIFY_VALUE(((*(R17 *)rt_nil_check(p_R))).f_A, r_STATIC_SIZE(p_RT), p_BS)))
{
{ rt_int rv2622 = 0;
return rv2622; }
}
if ((!(((*(R17 *)rt_nil_check(p_R))).f_A == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT == NULL)))
{
if (((((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_KIND == g_N_ENUMLIT))) && (!r_TEQ(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_NAME, l_SIGNING_2620))))
{
{ rt_int rv2623 = 0;
return rv2623; }
}
}
}
{ rt_int rv2624 = 1;
return rv2624; }
}
}
if ((l_A_2618 == NULL))
{
{ rt_int rv2625 = 1;
return rv2625; }
}
{ rt_int rv2626 = r_TEQ(((*(R17 *)rt_nil_check(p_R))).f_NAME, ((*(R17 *)rt_nil_check(l_A_2618))).f_NAME);
return rv2626; }
rt_raise(RT_X_INIT);
}
static rt_int r_NONSTANDARD_REP(R22 * p_T) { RT_B_TICK(); 
R17 * l_R_2627; memset(&l_R_2627, 0, sizeof l_R_2627);
l_R_2627 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
if ((l_R_2627 == NULL))
{
{ rt_int rv2628 = 0;
return rv2628; }
}
if ((((*(R17 *)rt_nil_check(l_R_2627))).f_KIND == g_TS_GEN))
{
{ rt_int rv2629 = 0;
return rv2629; }
}
{ rt_int rv2630 = (((((r_TEQS(((*(R17 *)rt_nil_check(l_R_2627))).f_NAME, rt_str("FIXED_REP", 9)) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2627))).f_NAME, rt_str("ENUM_REP", 8))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2627))).f_NAME, rt_str("ENUM_VAL_REP", 12))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2627))).f_NAME, rt_str("CHAR_STR_REP", 12))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2627))).f_NAME, rt_str("ARRAY_REP", 9))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2627))).f_NAME, rt_str("RECORD_REP", 10)));
return rv2630; }
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { RT_B_TICK(); 
R12 * l_R_2631; memset(&l_R_2631, 0, sizeof l_R_2631);
l_R_2631 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv2632 = NULL;
return rv2632; }
}
for (;;) {
if ((l_R_2631 == NULL)) goto L_end2633;
{
if ((((*(R12 *)rt_nil_check(l_R_2631))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv2634 = l_R_2631;
return rv2634; }
}
l_R_2631 = ((*(R12 *)rt_nil_check(l_R_2631))).f_INSTANCES;
}
RT_B_TICK();
} L_end2633: ;
{ R12 * rv2635 = NULL;
return rv2635; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R17 * p_A, R23 p_M, R21 * p_BS) { RT_B_TICK(); 
if ((p_A == NULL))
{
{ rt_int rv2636 = 1;
return rv2636; }
}
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2637 = 1;
return rv2637; }
}
else if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2638 = 1;
return rv2638; }
}
{
R21 * l_B_2639; memset(&l_B_2639, 0, sizeof l_B_2639);
l_B_2639 = r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, ((*(R17 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_2639 == NULL)))
{
{ rt_int rv2640 = ((((*(R21 *)rt_nil_check(l_B_2639))).f_HASMV && (p_M).f_OK) && (((*(R21 *)rt_nil_check(l_B_2639))).f_MV == (p_M).f_V));
return rv2640; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv2641 = 0;
return rv2641; }
}
r_ADD_BIND(((*(R17 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv2642 = 1;
return rv2642; }
}
{
R23 l_V_2643; memset(&l_V_2643, 0, sizeof l_V_2643);
S_R23(&l_V_2643, r_MANIFEST(p_A), 0);
if (((l_V_2643).f_OK && (p_M).f_OK))
{
{ rt_int rv2644 = ((l_V_2643).f_V == (p_M).f_V);
return rv2644; }
}
}
{ rt_int rv2645 = 1;
return rv2645; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R21 * p_BS) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv2646 = 0;
return rv2646; }
}
if (((!(((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME)) && (!(((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_APPLY))))
{
{ rt_int rv2647 = 0;
return rv2647; }
}
{ rt_int rv2648 = (!(r_FIND_ROUTINE_ARG(((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R27 *)rt_nil_check(p_A))).f_E, p_BS, ((rt_int)0LL), 0) == NULL));
return rv2648; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv2649 = 1;
return rv2649; }
}
r_TYPE_ARG(p_A);
{ rt_int rv2650 = r_UNIFY(((*(R28 *)rt_nil_check(p_P))).f_TS, (((*(R27 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv2650; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_BS_2651; memset(&l_BS_2651, 0, sizeof l_BS_2651);
l_BS_2651 = r_NEW_BINDS();
R28 * l_P_2652; memset(&l_P_2652, 0, sizeof l_P_2652);
l_P_2652 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2653; memset(&l_A_2653, 0, sizeof l_A_2653);
l_A_2653 = p_ARGS;
for (;;) {
if ((l_P_2652 == NULL)) goto L_end2654;
{
if ((((*(R28 *)rt_nil_check(l_P_2652))).f_TS == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2653))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2652))).f_NAME, r_ARG_TYPE(((*(R27 *)rt_nil_check(l_A_2653))).f_E), r_NO_MVAL(), NULL, l_BS_2651);
}
else if ((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2652))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2652))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R28 *)rt_nil_check(l_P_2652))).f_TS, ((*(R27 *)rt_nil_check(l_A_2653))).f_E, p_LINE), l_BS_2651);
}
else if (((((!(((*(R27 *)rt_nil_check(l_A_2653))).f_E == NULL)) && (!((*(R27 *)rt_nil_check(l_A_2653))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R28 *)rt_nil_check(l_P_2652))).f_TS))) && (((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2653))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R27 *)rt_nil_check(l_A_2653))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(l_A_2653))).f_V, r_EXPR(((*(R27 *)rt_nil_check(l_A_2653))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(l_A_2653))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R28 *)rt_nil_check(l_P_2652))).f_TS, (((*(R27 *)rt_nil_check(l_A_2653))).f_V).f_T, l_BS_2651)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R28 *)rt_nil_check(l_P_2652))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2652))).f_TS))
{
r_ADD_BIND(r_MKN(rt_b_cat(rt_str("\?", 1), r_STR(((*(R28 *)rt_nil_check(l_P_2652))).f_NAME, (((*(R28 *)rt_nil_check(l_P_2652))).f_NAME).f_LEN))), (((*(R27 *)rt_nil_check(l_A_2653))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_2651);
}
}
l_P_2652 = ((*(R28 *)rt_nil_check(l_P_2652))).f_NEXT;
l_A_2653 = ((*(R27 *)rt_nil_check(l_A_2653))).f_NEXT;
}
RT_B_TICK();
} L_end2654: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_2651);
{
R12 * l_I_2655; memset(&l_I_2655, 0, sizeof l_I_2655);
l_I_2655 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2655 == NULL)) goto L_end2656;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2655))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_BS_2651))).f_NEXT))
{
{ R12 * rv2657 = l_I_2655;
return rv2657; }
}
l_I_2655 = ((*(R12 *)rt_nil_check(l_I_2655))).f_INSTANCES;
}
RT_B_TICK();
} L_end2656: ;
}
{ R12 * rv2658 = r_NEW_INSTANCE(p_G, ((*(R21 *)rt_nil_check(l_BS_2651))).f_NEXT, p_ARGS);
return rv2658; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_2659; memset(&l_P_2659, 0, sizeof l_P_2659);
l_P_2659 = p_A;
for (;;) {
if ((l_P_2659 == NULL)) goto L_end2660;
{
{
R21 * l_Q_2661; memset(&l_Q_2661, 0, sizeof l_Q_2661);
l_Q_2661 = r_FIND_BIND(p_B, ((*(R21 *)rt_nil_check(l_P_2659))).f_NAME);
if ((l_Q_2661 == NULL))
{
{ rt_int rv2662 = 0;
return rv2662; }
}
if (((!(((*(R21 *)rt_nil_check(l_P_2659))).f_T == NULL)) || (!(((*(R21 *)rt_nil_check(l_Q_2661))).f_T == NULL))))
{
if (((((*(R21 *)rt_nil_check(l_P_2659))).f_T == NULL) || (((*(R21 *)rt_nil_check(l_Q_2661))).f_T == NULL)))
{
{ rt_int rv2663 = 0;
return rv2663; }
}
if ((!r_SAME_TYPE(((*(R21 *)rt_nil_check(l_P_2659))).f_T, ((*(R21 *)rt_nil_check(l_Q_2661))).f_T)))
{
{ rt_int rv2664 = 0;
return rv2664; }
}
if ((!r_SAME_LENGTH(((*(R21 *)rt_nil_check(l_P_2659))).f_T, ((*(R21 *)rt_nil_check(l_Q_2661))).f_T)))
{
{ rt_int rv2665 = 0;
return rv2665; }
}
if ((!r_SAME_REPS(((*(R21 *)rt_nil_check(l_P_2659))).f_T, ((*(R21 *)rt_nil_check(l_Q_2661))).f_T)))
{
{ rt_int rv2666 = 0;
return rv2666; }
}
}
if ((((!(((*(R21 *)rt_nil_check(l_P_2659))).f_HASMV == ((*(R21 *)rt_nil_check(l_Q_2661))).f_HASMV)) || (!(((*(R21 *)rt_nil_check(l_P_2659))).f_MV == ((*(R21 *)rt_nil_check(l_Q_2661))).f_MV))) || (!(((*(R21 *)rt_nil_check(l_P_2659))).f_R == ((*(R21 *)rt_nil_check(l_Q_2661))).f_R))))
{
{ rt_int rv2667 = 0;
return rv2667; }
}
}
l_P_2659 = ((*(R21 *)rt_nil_check(l_P_2659))).f_NEXT;
}
RT_B_TICK();
} L_end2660: ;
{ rt_int rv2668 = 1;
return rv2668; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2669; memset(&l_RA_2669, 0, sizeof l_RA_2669);
l_RA_2669 = r_REAL_TYPE(p_A);
R22 * l_RB_2670; memset(&l_RB_2670, 0, sizeof l_RB_2670);
l_RB_2670 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_2669))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_2669))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_2669))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_2670))).f_KIND))))
{
{ rt_int rv2671 = 1;
return rv2671; }
}
if (((((*(R22 *)rt_nil_check(l_RA_2669))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_2670))).f_MLEN).f_OK))
{
{ rt_int rv2672 = ((((*(R22 *)rt_nil_check(l_RA_2669))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_2670))).f_MLEN).f_V);
return rv2672; }
}
{ rt_int rv2673 = ((((*(R22 *)rt_nil_check(l_RA_2669))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_2670))).f_MLEN).f_OK);
return rv2673; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R17 * l_RA_2674; memset(&l_RA_2674, 0, sizeof l_RA_2674);
l_RA_2674 = ((*(R22 *)rt_nil_check(p_A))).f_REPS;
R17 * l_RB_2675; memset(&l_RB_2675, 0, sizeof l_RB_2675);
l_RB_2675 = ((*(R22 *)rt_nil_check(p_B))).f_REPS;
if (((l_RA_2674 == NULL) || (l_RB_2675 == NULL)))
{
{ rt_int rv2676 = (l_RA_2674 == l_RB_2675);
return rv2676; }
}
if ((l_RA_2674 == l_RB_2675))
{
{ rt_int rv2677 = 1;
return rv2677; }
}
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_RA_2674))).f_NAME, ((*(R17 *)rt_nil_check(l_RB_2675))).f_NAME)))
{
{ rt_int rv2678 = 0;
return rv2678; }
}
{
R17 * l_X_2679; memset(&l_X_2679, 0, sizeof l_X_2679);
l_X_2679 = ((*(R17 *)rt_nil_check(l_RA_2674))).f_A;
R17 * l_Y_2680; memset(&l_Y_2680, 0, sizeof l_Y_2680);
l_Y_2680 = ((*(R17 *)rt_nil_check(l_RB_2675))).f_A;
for (;;) {
if (((l_X_2679 == NULL) || (l_Y_2680 == NULL))) goto L_end2681;
{
if (((((((*(R17 *)rt_nil_check(l_X_2679))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_X_2679))).f_KIND == g_N_ENUMLIT))) && (((((*(R17 *)rt_nil_check(l_Y_2680))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_Y_2680))).f_KIND == g_N_ENUMLIT)))))
{
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_X_2679))).f_NAME, ((*(R17 *)rt_nil_check(l_Y_2680))).f_NAME)))
{
{ rt_int rv2682 = 0;
return rv2682; }
}
}
else
{
{
R23 l_MX_2683; memset(&l_MX_2683, 0, sizeof l_MX_2683);
S_R23(&l_MX_2683, r_MANIFEST(l_X_2679), 0);
R23 l_MY_2684; memset(&l_MY_2684, 0, sizeof l_MY_2684);
S_R23(&l_MY_2684, r_MANIFEST(l_Y_2680), 0);
if (((!((l_MX_2683).f_OK == (l_MY_2684).f_OK)) || (!((l_MX_2683).f_V == (l_MY_2684).f_V))))
{
{ rt_int rv2685 = 0;
return rv2685; }
}
}
}
l_X_2679 = ((*(R17 *)rt_nil_check(l_X_2679))).f_NEXT;
l_Y_2680 = ((*(R17 *)rt_nil_check(l_Y_2680))).f_NEXT;
}
RT_B_TICK();
} L_end2681: ;
{ rt_int rv2686 = ((((l_X_2679 == NULL) && (l_Y_2680 == NULL)) && (((*(R17 *)rt_nil_check(l_RA_2674))).f_B == NULL)) && (((*(R17 *)rt_nil_check(l_RB_2675))).f_B == NULL));
return rv2686; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R17 * p_TS, R17 * p_E, rt_int p_LINE) { RT_B_TICK(); 
{ R12 * rv2687 = r_FIND_ROUTINE_ARG(p_TS, p_E, NULL, p_LINE, 1);
return rv2687; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE_ARG(R17 * p_TS, R17 * p_E, R21 * p_BS0, rt_int p_LINE, rt_int p_STRICT) { RT_B_TICK(); 
R12 * l_Y_2688; memset(&l_Y_2688, 0, sizeof l_Y_2688);
l_Y_2688 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_2689; memset(&l_FOUND_2689, 0, sizeof l_FOUND_2689);
l_FOUND_2689 = NULL;
R21 * l_BS_2690; memset(&l_BS_2690, 0, sizeof l_BS_2690);
l_BS_2690 = p_BS0;
if ((l_BS_2690 == NULL))
{
l_BS_2690 = r_NEW_BINDS();
}
for (;;) {
if ((l_Y_2688 == NULL)) goto L_end2691;
{
if ((((*(R12 *)rt_nil_check(l_Y_2688))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_2692; memset(&l_R_2692, 0, sizeof l_R_2692);
l_R_2692 = r_ORIGINAL(l_Y_2688);
R21 * l_TRY_2693; memset(&l_TRY_2693, 0, sizeof l_TRY_2693);
l_TRY_2693 = r_NEW_BINDS();
((*(R21 *)rt_nil_check(l_TRY_2693))).f_NEXT = ((*(R21 *)rt_nil_check(l_BS_2690))).f_NEXT;
r_ROUTINE_HEADER(l_R_2692);
if ((((!((*(R12 *)rt_nil_check(l_R_2692))).f_GENERIC) && r_EXPLICIT_TEMPLATE_FITS(p_E, l_R_2692)) && r_TEMPLATE_FITS(p_TS, l_R_2692, l_TRY_2693)))
{
if (((!(l_FOUND_2689 == NULL)) && (!(l_FOUND_2689 == l_R_2692))))
{
if ((!p_STRICT))
{
{ R12 * rv2694 = NULL;
return rv2694; }
}
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_2689 = l_R_2692;
}
}
}
l_Y_2688 = r_LOOKUP_NEXT(l_Y_2688);
}
RT_B_TICK();
} L_end2691: ;
if ((l_FOUND_2689 == NULL))
{
if ((!p_STRICT))
{
{ R12 * rv2695 = NULL;
return rv2695; }
}
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter (5.1): ", 45), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_2689))).f_USES == NULL)))
{
if ((!p_STRICT))
{
{ R12 * rv2696 = NULL;
return rv2696; }
}
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (p_STRICT)
{
if ((!r_TEMPLATE_FITS(p_TS, l_FOUND_2689, l_BS_2690)))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter (5.1): ", 45), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
r_NEED_BODY(l_FOUND_2689);
}
{ R12 * rv2697 = l_FOUND_2689;
return rv2697; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPLICIT_TEMPLATE_FITS(R17 * p_E, R12 * p_R) { RT_B_TICK(); 
R17 * l_A_2698; memset(&l_A_2698, 0, sizeof l_A_2698);
l_A_2698 = ((*(R17 *)rt_nil_check(p_E))).f_A;
R28 * l_Q_2699; memset(&l_Q_2699, 0, sizeof l_Q_2699);
l_Q_2699 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY)))
{
{ rt_int rv2700 = 1;
return rv2700; }
}
if (((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
{ rt_int rv2701 = 0;
return rv2701; }
}
for (;;) {
if (((l_A_2698 == NULL) || (l_Q_2699 == NULL))) goto L_end2702;
{
if ((((*(R28 *)rt_nil_check(l_Q_2699))).f_T == NULL))
{
{ rt_int rv2703 = 0;
return rv2703; }
}
if ((!r_IDENTICAL_TYPE(r_RESOLVE(r_EXPR_TO_TS(l_A_2698)), ((*(R28 *)rt_nil_check(l_Q_2699))).f_T)))
{
{ rt_int rv2704 = 0;
return rv2704; }
}
l_A_2698 = ((*(R17 *)rt_nil_check(l_A_2698))).f_NEXT;
l_Q_2699 = ((*(R28 *)rt_nil_check(l_Q_2699))).f_NEXT;
}
RT_B_TICK();
} L_end2702: ;
if (((!(l_A_2698 == NULL)) || (!(l_Q_2699 == NULL))))
{
{ rt_int rv2705 = 0;
return rv2705; }
}
if ((!(((*(R17 *)rt_nil_check(p_E))).f_E == NULL)))
{
{ rt_int rv2706 = r_IDENTICAL_TYPE(r_RESOLVE(((*(R17 *)rt_nil_check(p_E))).f_E), ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2706; }
}
{ rt_int rv2707 = 1;
return rv2707; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEMPLATE_FITS(R17 * p_TS, R12 * p_R, R21 * p_BS) { RT_B_TICK(); 
R17 * l_P_2708; memset(&l_P_2708, 0, sizeof l_P_2708);
l_P_2708 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R28 * l_Q_2709; memset(&l_Q_2709, 0, sizeof l_Q_2709);
l_Q_2709 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
if ((!(((((*(R17 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL))) == ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_IV == ((rt_int)1LL))))))
{
{ rt_int rv2710 = 0;
return rv2710; }
}
for (;;) {
if (((l_P_2708 == NULL) || (l_Q_2709 == NULL))) goto L_end2711;
{
if ((!(((*(R17 *)rt_nil_check(l_P_2708))).f_IV == ((*(R28 *)rt_nil_check(l_Q_2709))).f_MODE)))
{
{ rt_int rv2712 = 0;
return rv2712; }
}
if (((((*(R17 *)rt_nil_check(l_P_2708))).f_B == NULL) || (((*(R28 *)rt_nil_check(l_Q_2709))).f_T == NULL)))
{
if (((!(((*(R17 *)rt_nil_check(l_P_2708))).f_B == NULL)) || (!(((*(R28 *)rt_nil_check(l_Q_2709))).f_T == NULL))))
{
{ rt_int rv2713 = 0;
return rv2713; }
}
}
else if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_2708))).f_B))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2714 = 0;
return rv2714; }
}
else if ((!r_TYPE_FITS_SPEC(((*(R17 *)rt_nil_check(l_P_2708))).f_B, ((*(R28 *)rt_nil_check(l_Q_2709))).f_T, p_BS)))
{
{ rt_int rv2715 = 0;
return rv2715; }
}
l_P_2708 = ((*(R17 *)rt_nil_check(l_P_2708))).f_NEXT;
l_Q_2709 = ((*(R28 *)rt_nil_check(l_Q_2709))).f_NEXT;
}
RT_B_TICK();
} L_end2711: ;
if (((!(l_P_2708 == NULL)) || (!(l_Q_2709 == NULL))))
{
{ rt_int rv2716 = 0;
return rv2716; }
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if ((!r_TYPE_FITS_SPEC(((*(R17 *)rt_nil_check(p_TS))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT, p_BS)))
{
{ rt_int rv2717 = 0;
return rv2717; }
}
}
{
R17 * l_X_2718; memset(&l_X_2718, 0, sizeof l_X_2718);
l_X_2718 = ((*(R17 *)rt_nil_check(p_TS))).f_D;
for (;;) {
if ((l_X_2718 == NULL)) goto L_end2719;
{
if ((!r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_D))).f_A, ((*(R17 *)rt_nil_check(l_X_2718))).f_NAME)))
{
{ rt_int rv2720 = 0;
return rv2720; }
}
l_X_2718 = ((*(R17 *)rt_nil_check(l_X_2718))).f_NEXT;
}
RT_B_TICK();
} L_end2719: ;
}
{ rt_int rv2721 = 1;
return rv2721; }
rt_raise(RT_X_INIT);
}
static rt_int r_TYPE_FITS_SPEC(R17 * p_TS, R22 * p_T, R21 * p_BS) { RT_B_TICK(); 
if ((r_STATIC_GENERIC(p_TS) || r_HAS_DERIVED(p_TS)))
{
{ rt_int rv2722 = r_UNIFY(p_TS, p_T, p_BS);
return rv2722; }
}
{ rt_int rv2723 = r_IDENTICAL_TYPE(r_RESOLVE(p_TS), p_T);
return rv2723; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_DERIVED(R17 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2724 = 0;
return rv2724; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2725 = 1;
return rv2725; }
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if (r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(p_TS))).f_A))
{
{ rt_int rv2726 = 1;
return rv2726; }
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if ((r_HAS_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_A) || r_HAS_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_B)))
{
{ rt_int rv2727 = 1;
return rv2727; }
}
}
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2728 = 1;
return rv2728; }
}
{ rt_int rv2729 = 0;
return rv2729; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R21 * p_BS) { RT_B_TICK(); 
R17 * l_NEEDL_2730; memset(&l_NEEDL_2730, 0, sizeof l_NEEDL_2730);
l_NEEDL_2730 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R21 * l_SAVED_2731; memset(&l_SAVED_2731, 0, sizeof l_SAVED_2731);
l_SAVED_2731 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R21 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_2730 == NULL)) goto L_end2732;
{
{
R17 * l_T_2733; memset(&l_T_2733, 0, sizeof l_T_2733);
l_T_2733 = ((*(R17 *)rt_nil_check(l_NEEDL_2730))).f_A;
for (;;) {
if ((l_T_2733 == NULL)) goto L_end2734;
{
if ((r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, ((*(R17 *)rt_nil_check(l_T_2733))).f_NAME) == NULL))
{
{
R27 * l_ARGS_2735; memset(&l_ARGS_2735, 0, sizeof l_ARGS_2735);
l_ARGS_2735 = NULL;
R27 * l_TAIL_2736; memset(&l_TAIL_2736, 0, sizeof l_TAIL_2736);
l_TAIL_2736 = NULL;
R17 * l_P_2737; memset(&l_P_2737, 0, sizeof l_P_2737);
l_P_2737 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_T_2733))).f_B))).f_A;
R12 * l_R_2738; memset(&l_R_2738, 0, sizeof l_R_2738);
rt_int l_ENTERED_2739; memset(&l_ENTERED_2739, 0, sizeof l_ENTERED_2739);
l_ENTERED_2739 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_2737 == NULL)) goto L_end2740;
{
{
R27 * l_A_2741; memset(&l_A_2741, 0, sizeof l_A_2741);
if ((((*(R17 *)rt_nil_check(l_P_2737))).f_B == NULL))
{
l_A_2741 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_2741 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R17 *)rt_nil_check(l_P_2737))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R27 *)rt_nil_check(l_A_2741))).f_MODE = ((*(R17 *)rt_nil_check(l_P_2737))).f_IV;
if ((l_TAIL_2736 == NULL))
{
l_ARGS_2735 = l_A_2741;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2736))).f_NEXT = l_A_2741;
}
l_TAIL_2736 = l_A_2741;
}
l_P_2737 = ((*(R17 *)rt_nil_check(l_P_2737))).f_NEXT;
}
RT_B_TICK();
} L_end2740: ;
if (l_ENTERED_2739)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_2738 = r_FIND_ROUTINE(((*(R17 *)rt_nil_check(l_T_2733))).f_NAME, l_ARGS_2735, p_LINE, 0);
if ((l_R_2738 == NULL))
{
l_R_2738 = r_LOOKUP(((*(R17 *)rt_nil_check(l_T_2733))).f_NAME);
for (;;) {
if ((l_R_2738 == NULL)) goto L_end2742;
{
if ((((*(R12 *)rt_nil_check(l_R_2738))).f_KIND == g_Y_BUILTIN))
{
goto L_end2742;
}
l_R_2738 = r_LOOKUP_NEXT(l_R_2738);
}
RT_B_TICK();
} L_end2742: ;
}
if (((l_R_2738 == NULL) && (!r_IS_OPERATOR_NAME(((*(R17 *)rt_nil_check(l_T_2733))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R17 *)rt_nil_check(l_T_2733))).f_NAME);
}
if ((!(l_R_2738 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_R_2738))).f_KIND == g_Y_ROUTINE))
{
r_COMPUTE_USES(r_ORIGINAL(l_R_2738));
if ((!(((*(R12 *)rt_nil_check(r_ORIGINAL(l_R_2738)))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine named in a WHERE clause may not import data (5.2): ", 61), ((*(R17 *)rt_nil_check(l_T_2733))).f_NAME);
}
}
r_ADD_BIND(((*(R17 *)rt_nil_check(l_T_2733))).f_NAME, NULL, r_NO_MVAL(), l_R_2738, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R21 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_2733 = ((*(R17 *)rt_nil_check(l_T_2733))).f_NEXT;
}
RT_B_TICK();
} L_end2734: ;
}
l_NEEDL_2730 = ((*(R17 *)rt_nil_check(l_NEEDL_2730))).f_NEXT;
}
RT_B_TICK();
} L_end2732: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2731;
}
static rt_int r_DONTCARE_TYPE_ARG(R17 * p_TS) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2743 = 0;
return rv2743; }
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{
R17 * l_A_2744; memset(&l_A_2744, 0, sizeof l_A_2744);
l_A_2744 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_A_2744 == NULL)) goto L_end2745;
{
if ((((*(R17 *)rt_nil_check(l_A_2744))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2746 = 1;
return rv2746; }
}
l_A_2744 = ((*(R17 *)rt_nil_check(l_A_2744))).f_NEXT;
}
RT_B_TICK();
} L_end2745: ;
}
{ rt_int rv2747 = 0;
return rv2747; }
}
{
R12 * l_Y_2748; memset(&l_Y_2748, 0, sizeof l_Y_2748);
l_Y_2748 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
R17 * l_A_2749; memset(&l_A_2749, 0, sizeof l_A_2749);
l_A_2749 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R17 * l_F_2750; memset(&l_F_2750, 0, sizeof l_F_2750);
if ((l_Y_2748 == NULL))
{
{ rt_int rv2751 = 0;
return rv2751; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2748))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_2748))).f_DECL == NULL)))
{
{ rt_int rv2752 = 0;
return rv2752; }
}
l_F_2750 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2748))).f_DECL))).f_A;
for (;;) {
if ((l_F_2750 == NULL)) goto L_end2753;
{
{
R17 * l_N_2754; memset(&l_N_2754, 0, sizeof l_N_2754);
l_N_2754 = ((*(R17 *)rt_nil_check(l_F_2750))).f_A;
for (;;) {
if ((l_N_2754 == NULL)) goto L_end2755;
{
if ((l_A_2749 == NULL))
{
{ rt_int rv2756 = 0;
return rv2756; }
}
if (((((*(R17 *)rt_nil_check(l_F_2750))).f_B == NULL) && (((*(R17 *)rt_nil_check(l_A_2749))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2757 = 1;
return rv2757; }
}
l_A_2749 = ((*(R17 *)rt_nil_check(l_A_2749))).f_NEXT;
l_N_2754 = ((*(R17 *)rt_nil_check(l_N_2754))).f_NEXT;
}
RT_B_TICK();
} L_end2755: ;
}
l_F_2750 = ((*(R17 *)rt_nil_check(l_F_2750))).f_NEXT;
}
RT_B_TICK();
} L_end2753: ;
}
{ rt_int rv2758 = 0;
return rv2758; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R21 * p_BS, R27 * p_ARGS) { RT_B_TICK(); 
R27 * l_A_2759; memset(&l_A_2759, 0, sizeof l_A_2759);
l_A_2759 = p_ARGS;
R12 * l_I_2760; memset(&l_I_2760, 0, sizeof l_I_2760);
l_I_2760 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R21 * l_SAVED_2761; memset(&l_SAVED_2761, 0, sizeof l_SAVED_2761);
l_SAVED_2761 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R12 * l_SAVED_SEG_2762; memset(&l_SAVED_SEG_2762, 0, sizeof l_SAVED_SEG_2762);
l_SAVED_SEG_2762 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R12 * l_HOME_2763; memset(&l_HOME_2763, 0, sizeof l_HOME_2763);
l_HOME_2763 = r_ENTER_HOME(p_G);
R28 * l_P_2764; memset(&l_P_2764, 0, sizeof l_P_2764);
l_P_2764 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R28 * l_TAIL_2765; memset(&l_TAIL_2765, 0, sizeof l_TAIL_2765);
l_TAIL_2765 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_2760)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_2760))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_2760))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_2760))).f_PARAMS = NULL;
S_R9(&((*(R12 *)rt_nil_check(l_I_2760))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_2760))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_2760;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(p_G))).f_HOME;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_2764 == NULL)) goto L_end2766;
{
{
R28 * l_PM_2767; memset(&l_PM_2767, 0, sizeof l_PM_2767);
l_PM_2767 = ((R28 *)rt_b_new(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2767)), (*(R28 *)rt_nil_check(l_P_2764)), 0);
((*(R28 *)rt_nil_check(l_PM_2767))).f_NEXT = NULL;
if ((((*(R28 *)rt_nil_check(l_P_2764))).f_TS == NULL))
{
((*(R28 *)rt_nil_check(l_PM_2767))).f_T = NULL;
}
else if ((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2764))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R28 *)rt_nil_check(l_PM_2767))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2764))).f_TS) && ((*(R27 *)rt_nil_check(l_A_2759))).f_HAVE))
{
((*(R28 *)rt_nil_check(l_PM_2767))).f_T = (((*(R27 *)rt_nil_check(l_A_2759))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2767))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2767))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R28 *)rt_nil_check(l_PM_2767))).f_T = ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2767))).f_T))).f_BASE;
}
}
}
else
{
((*(R28 *)rt_nil_check(l_PM_2767))).f_T = r_RESOLVE(((*(R28 *)rt_nil_check(l_P_2764))).f_TS);
}
if ((!(((*(R28 *)rt_nil_check(l_P_2764))).f_TS == NULL)))
{
if (((((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2764))).f_TS))).f_KIND == g_TS_GEN) || (((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2764))).f_TS))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2764))).f_TS))).f_A == NULL))))) && ((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2764))).f_TS))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((!(r_FIND_BIND(p_BS, ((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2764))).f_TS))).f_NAME) == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(r_FIND_BIND(p_BS, ((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2764))).f_TS))).f_NAME)))).f_T == NULL)))
{
((*(R28 *)rt_nil_check(l_PM_2767))).f_T = r_MARK_GENP(((*(R28 *)rt_nil_check(l_PM_2767))).f_T, ((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2764))).f_TS))).f_NAME);
}
}
}
}
((*(R28 *)rt_nil_check(l_PM_2767))).f_TS = NULL;
if ((l_TAIL_2765 == NULL))
{
((*(R12 *)rt_nil_check(l_I_2760))).f_PARAMS = l_PM_2767;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2765))).f_NEXT = l_PM_2767;
}
l_TAIL_2765 = l_PM_2767;
}
l_P_2764 = ((*(R28 *)rt_nil_check(l_P_2764))).f_NEXT;
l_A_2759 = ((*(R27 *)rt_nil_check(l_A_2759))).f_NEXT;
}
RT_B_TICK();
} L_end2766: ;
((*(R12 *)rt_nil_check(l_I_2760))).f_RESULT = r_RESULT_TYPE(l_I_2760);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2761;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_2762;
r_LEAVE_HOME(p_G, l_HOME_2763);
S_R9(&((*(R12 *)rt_nil_check(l_I_2760))).f_FWD, r_C_HEADER(l_I_2760), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_2760))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_2760))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_2760;
{ R12 * rv2768 = l_I_2760;
return rv2768; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R9 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2769 = 0;
return rv2769; }
}
{ rt_int rv2770 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv2770; }
rt_raise(RT_X_INIT);
}
static R17 * r_SUBST_FORMALS(R17 * p_TS, R17 * p_FORMALS, R17 * p_ARGS) { RT_B_TICK(); 
R17 * l_C_2771; memset(&l_C_2771, 0, sizeof l_C_2771);
if ((p_TS == NULL))
{
{ R17 * rv2772 = NULL;
return rv2772; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R17 * l_F_2773; memset(&l_F_2773, 0, sizeof l_F_2773);
l_F_2773 = p_FORMALS;
R17 * l_A_2774; memset(&l_A_2774, 0, sizeof l_A_2774);
l_A_2774 = p_ARGS;
for (;;) {
if ((l_F_2773 == NULL)) goto L_end2775;
{
{
R17 * l_N_2776; memset(&l_N_2776, 0, sizeof l_N_2776);
l_N_2776 = ((*(R17 *)rt_nil_check(l_F_2773))).f_A;
for (;;) {
if ((l_N_2776 == NULL)) goto L_end2777;
{
if ((l_A_2774 == NULL))
{
{ R17 * rv2778 = p_TS;
return rv2778; }
}
if (((((*(R17 *)rt_nil_check(l_F_2773))).f_B == NULL) && r_TEQ(((*(R17 *)rt_nil_check(l_N_2776))).f_NAME, ((*(R17 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R17 * rv2779 = l_A_2774;
return rv2779; }
}
l_A_2774 = ((*(R17 *)rt_nil_check(l_A_2774))).f_NEXT;
l_N_2776 = ((*(R17 *)rt_nil_check(l_N_2776))).f_NEXT;
}
RT_B_TICK();
} L_end2777: ;
}
l_F_2773 = ((*(R17 *)rt_nil_check(l_F_2773))).f_NEXT;
}
RT_B_TICK();
} L_end2775: ;
}
{ R17 * rv2780 = p_TS;
return rv2780; }
}
l_C_2771 = r_COPY_NODE(p_TS);
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R17 *)rt_nil_check(l_C_2771))).f_C = r_SUBST_FORMALS(((*(R17 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R17 *)rt_nil_check(l_C_2771))).f_A = r_SUBST_FORMALS(((*(R17 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R17 * rv2781 = l_C_2771;
return rv2781; }
rt_raise(RT_X_INIT);
}
static R17 * r_COPY_NODE(R17 * p_N) { RT_B_TICK(); 
R17 * l_C_2782; memset(&l_C_2782, 0, sizeof l_C_2782);
l_C_2782 = ((R17 *)rt_b_new(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_C_2782)), (*(R17 *)rt_nil_check(p_N)), 0);
((*(R17 *)rt_nil_check(l_C_2782))).f_NEXT = NULL;
{ R17 * rv2783 = l_C_2782;
return rv2783; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R17 * p_L, R9 p_NAME) { RT_B_TICK(); 
R17 * l_P_2784; memset(&l_P_2784, 0, sizeof l_P_2784);
l_P_2784 = p_L;
for (;;) {
if ((l_P_2784 == NULL)) goto L_end2785;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_2784))).f_NAME, p_NAME))
{
{ rt_int rv2786 = 1;
return rv2786; }
}
l_P_2784 = ((*(R17 *)rt_nil_check(l_P_2784))).f_NEXT;
}
RT_B_TICK();
} L_end2785: ;
{ rt_int rv2787 = 0;
return rv2787; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_IS_2788; memset(&l_IS_2788, 0, sizeof l_IS_2788);
l_IS_2788 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv2789 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2789; }
}
if ((l_IS_2788 == NULL))
{
{ rt_int rv2790 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2790; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R20 *)rt_nil_check(l_IS_2788))).f_ID) || (((*(R20 *)rt_nil_check(l_IS_2788))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv2791 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2791; }
}
if ((!(((*(R20 *)rt_nil_check(l_IS_2788))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2788))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2792 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2792; }
}
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2788))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2793 = 0;
return rv2793; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { RT_B_TICK(); 
R17 * l_ITEMS_2794; memset(&l_ITEMS_2794, 0, sizeof l_ITEMS_2794);
l_ITEMS_2794 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R17 * l_HEAD_2795; memset(&l_HEAD_2795, 0, sizeof l_HEAD_2795);
l_HEAD_2795 = NULL;
R17 * l_TAIL_2796; memset(&l_TAIL_2796, 0, sizeof l_TAIL_2796);
l_TAIL_2796 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_2794 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R17 *)rt_nil_check(l_ITEMS_2794))).f_A, &l_HEAD_2795, &l_TAIL_2796);
r_ADD_USES(((*(R17 *)rt_nil_check(l_ITEMS_2794))).f_B, &l_HEAD_2795, &l_TAIL_2796);
{
R17 * l_R_2797; memset(&l_R_2797, 0, sizeof l_R_2797);
l_R_2797 = ((*(R17 *)rt_nil_check(l_ITEMS_2794))).f_C;
for (;;) {
if ((l_R_2797 == NULL)) goto L_end2798;
{
{
R12 * l_Z_2799; memset(&l_Z_2799, 0, sizeof l_Z_2799);
l_Z_2799 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_2797))).f_NAME);
if (((l_Z_2799 == NULL) && (!r_LOCAL_MODULE_EXPORTS(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_C, ((*(R17 *)rt_nil_check(l_R_2797))).f_NAME))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_R_2797))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R17 *)rt_nil_check(l_R_2797))).f_NAME);
}
for (;;) {
if ((l_Z_2799 == NULL)) goto L_end2800;
{
if ((((*(R12 *)rt_nil_check(l_Z_2799))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2801; memset(&l_O_2801, 0, sizeof l_O_2801);
l_O_2801 = r_ORIGINAL(l_Z_2799);
R17 * l_U_2802; memset(&l_U_2802, 0, sizeof l_U_2802);
r_COMPUTE_USES(l_O_2801);
l_U_2802 = ((*(R12 *)rt_nil_check(l_O_2801))).f_USES;
for (;;) {
if ((l_U_2802 == NULL)) goto L_end2803;
{
if ((!r_IN_IDENTS(l_HEAD_2795, ((*(R17 *)rt_nil_check(l_U_2802))).f_NAME)))
{
{
R17 * l_N_2804; memset(&l_N_2804, 0, sizeof l_N_2804);
l_N_2804 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_U_2802))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_2804))).f_NAME, ((*(R17 *)rt_nil_check(l_U_2802))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2804))).f_IV = ((*(R17 *)rt_nil_check(l_U_2802))).f_IV;
r_ADD_LIST(l_N_2804, &l_HEAD_2795, &l_TAIL_2796);
}
}
l_U_2802 = ((*(R17 *)rt_nil_check(l_U_2802))).f_NEXT;
}
RT_B_TICK();
} L_end2803: ;
}
}
l_Z_2799 = r_LOOKUP_NEXT(l_Z_2799);
}
RT_B_TICK();
} L_end2800: ;
}
l_R_2797 = ((*(R17 *)rt_nil_check(l_R_2797))).f_NEXT;
}
RT_B_TICK();
} L_end2798: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_2795;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static rt_int r_LOCAL_MODULE_EXPORTS(R17 * p_B, R9 p_NAME) { RT_B_TICK(); 
R17 * l_M_2805; memset(&l_M_2805, 0, sizeof l_M_2805);
if ((p_B == NULL))
{
{ rt_int rv2806 = 0;
return rv2806; }
}
l_M_2805 = ((*(R17 *)rt_nil_check(p_B))).f_C;
for (;;) {
if ((l_M_2805 == NULL)) goto L_end2807;
{
if ((((*(R17 *)rt_nil_check(l_M_2805))).f_KIND == g_N_MODULE))
{
if ((((((*(R17 *)rt_nil_check(l_M_2805))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(l_M_2805))).f_B, p_NAME)) || r_LOCAL_MODULE_EXPORTS(((*(R17 *)rt_nil_check(l_M_2805))).f_C, p_NAME)))
{
{ rt_int rv2808 = 1;
return rv2808; }
}
}
l_M_2805 = ((*(R17 *)rt_nil_check(l_M_2805))).f_NEXT;
}
RT_B_TICK();
} L_end2807: ;
{ rt_int rv2809 = 0;
return rv2809; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_USES(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_2810; memset(&l_R_2810, 0, sizeof l_R_2810);
l_R_2810 = p_RS;
for (;;) {
if ((l_R_2810 == NULL)) goto L_end2811;
{
if ((((*(R17 *)rt_nil_check(l_R_2810))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_2810));
if ((!(((*(R17 *)rt_nil_check(l_R_2810))).f_E == NULL)))
{
r_IMPORTS_KNOWN(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2810))).f_E))).f_A, 0);
r_IMPORTS_KNOWN(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2810))).f_E))).f_B, 1);
r_INPUT_IMPORT_CONFLICT(((*(R17 *)rt_nil_check(l_R_2810))).f_E, ((*(R17 *)rt_nil_check(l_R_2810))).f_LINE);
}
}
l_R_2810 = ((*(R17 *)rt_nil_check(l_R_2810))).f_NEXT;
}
RT_B_TICK();
} L_end2811: ;
}
static void r_IMPORTS_KNOWN(R17 * p_L, rt_int p_INOUT) { RT_B_TICK(); 
R17 * l_P_2812; memset(&l_P_2812, 0, sizeof l_P_2812);
l_P_2812 = p_L;
for (;;) {
if ((l_P_2812 == NULL)) goto L_end2813;
{
{
R12 * l_V_2814; memset(&l_V_2814, 0, sizeof l_V_2814);
l_V_2814 = r_LOOKUP(((*(R17 *)rt_nil_check(l_P_2812))).f_NAME);
if ((!(l_V_2814 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_V_2814))).f_KIND == g_Y_VAR))
{
if ((((!r_CHECK_IMPORTED(l_V_2814, ((*(R17 *)rt_nil_check(l_P_2812))).f_LINE)) && p_INOUT) && (!((*(R12 *)rt_nil_check(l_V_2814))).f_INPUT)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_2812))).f_LINE, rt_str("imported for change, but only for input in the enclosing scope (4.1.1): ", 72), ((*(R17 *)rt_nil_check(l_P_2812))).f_NAME);
}
}
}
}
l_P_2812 = ((*(R17 *)rt_nil_check(l_P_2812))).f_NEXT;
}
RT_B_TICK();
} L_end2813: ;
}
static void r_INPUT_IMPORT_CONFLICT(R17 * p_ITEMS, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_2815; memset(&l_R_2815, 0, sizeof l_R_2815);
l_R_2815 = ((*(R17 *)rt_nil_check(p_ITEMS))).f_C;
for (;;) {
if ((l_R_2815 == NULL)) goto L_end2816;
{
{
R12 * l_Z_2817; memset(&l_Z_2817, 0, sizeof l_Z_2817);
l_Z_2817 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_2815))).f_NAME);
for (;;) {
if ((l_Z_2817 == NULL)) goto L_end2818;
{
if ((((*(R12 *)rt_nil_check(l_Z_2817))).f_KIND == g_Y_ROUTINE))
{
{
R17 * l_D_2819; memset(&l_D_2819, 0, sizeof l_D_2819);
l_D_2819 = ((*(R12 *)rt_nil_check(r_ORIGINAL(l_Z_2817)))).f_DECL;
if ((!(l_D_2819 == NULL)))
{
if (((((*(R17 *)rt_nil_check(l_D_2819))).f_KIND == g_N_ROUTINE) && (!(((*(R17 *)rt_nil_check(l_D_2819))).f_E == NULL))))
{
{
R17 * l_V_2820; memset(&l_V_2820, 0, sizeof l_V_2820);
l_V_2820 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_2819))).f_E))).f_B;
for (;;) {
if ((l_V_2820 == NULL)) goto L_end2821;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(p_ITEMS))).f_A, ((*(R17 *)rt_nil_check(l_V_2820))).f_NAME))
{
r_FAILT(p_LINE, rt_str("imported for input, and inout by an imported routine (4.3.1): ", 62), ((*(R17 *)rt_nil_check(l_V_2820))).f_NAME);
}
l_V_2820 = ((*(R17 *)rt_nil_check(l_V_2820))).f_NEXT;
}
RT_B_TICK();
} L_end2821: ;
}
}
}
}
}
l_Z_2817 = r_LOOKUP_NEXT(l_Z_2817);
}
RT_B_TICK();
} L_end2818: ;
}
l_R_2815 = ((*(R17 *)rt_nil_check(l_R_2815))).f_NEXT;
}
RT_B_TICK();
} L_end2816: ;
}
static void r_ADD_USES(R17 * p_L, R17 * *p_HEAD, R17 * *p_TAIL) { RT_B_TICK(); 
R17 * l_P_2822; memset(&l_P_2822, 0, sizeof l_P_2822);
l_P_2822 = p_L;
for (;;) {
if ((l_P_2822 == NULL)) goto L_end2823;
{
{
R12 * l_V_2824; memset(&l_V_2824, 0, sizeof l_V_2824);
l_V_2824 = r_LOOKUP(((*(R17 *)rt_nil_check(l_P_2822))).f_NAME);
R17 * l_N_2825; memset(&l_N_2825, 0, sizeof l_N_2825);
l_N_2825 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_P_2822))).f_LINE);
if ((l_V_2824 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_2822))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R17 *)rt_nil_check(l_P_2822))).f_NAME);
}
S_R9(&((*(R17 *)rt_nil_check(l_N_2825))).f_NAME, ((*(R17 *)rt_nil_check(l_P_2822))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2825))).f_IV = ((*(R12 *)rt_nil_check(l_V_2824))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_2824))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_2825, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_2822 = ((*(R17 *)rt_nil_check(l_P_2822))).f_NEXT;
}
RT_B_TICK();
} L_end2823: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_IS_2826; memset(&l_IS_2826, 0, sizeof l_IS_2826);
l_IS_2826 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R17 * l_U_2827; memset(&l_U_2827, 0, sizeof l_U_2827);
l_U_2827 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_2826 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R20 *)rt_nil_check(l_IS_2826))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_2827 == NULL)) goto L_end2828;
{
if ((!(((*(R17 *)rt_nil_check(l_U_2827))).f_IV == ((*(R20 *)rt_nil_check(l_IS_2826))).f_ID)))
{
if ((((*(R20 *)rt_nil_check(l_IS_2826))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R17 *)rt_nil_check(l_U_2827))).f_NAME, (((*(R17 *)rt_nil_check(l_U_2827))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!(((((((r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2826))).f_IMPORTS))).f_A, ((*(R17 *)rt_nil_check(l_U_2827))).f_NAME) || r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2826))).f_IMPORTS))).f_B, ((*(R17 *)rt_nil_check(l_U_2827))).f_NAME)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2826))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2826))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2826))).f_IMPORTS))).f_E, p_Y)) || ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL)) && r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2826))).f_IMPORTS))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))) || r_IMPORTED_ROUTINE_USES(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2826))).f_IMPORTS))).f_C, ((*(R17 *)rt_nil_check(l_U_2827))).f_NAME)))))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R17 *)rt_nil_check(l_U_2827))).f_NAME, (((*(R17 *)rt_nil_check(l_U_2827))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_2827 = ((*(R17 *)rt_nil_check(l_U_2827))).f_NEXT;
}
RT_B_TICK();
} L_end2828: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R17 * p_RS, R9 p_NAME) { RT_B_TICK(); 
R17 * l_R_2829; memset(&l_R_2829, 0, sizeof l_R_2829);
l_R_2829 = p_RS;
for (;;) {
if ((l_R_2829 == NULL)) goto L_end2830;
{
{
R12 * l_Z_2831; memset(&l_Z_2831, 0, sizeof l_Z_2831);
l_Z_2831 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_2829))).f_NAME);
for (;;) {
if ((l_Z_2831 == NULL)) goto L_end2832;
{
if ((((*(R12 *)rt_nil_check(l_Z_2831))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2833; memset(&l_O_2833, 0, sizeof l_O_2833);
l_O_2833 = r_ORIGINAL(l_Z_2831);
r_COMPUTE_USES(l_O_2833);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_2833))).f_USES, p_NAME))
{
{ rt_int rv2834 = 1;
return rv2834; }
}
}
}
l_Z_2831 = r_LOOKUP_NEXT(l_Z_2831);
}
RT_B_TICK();
} L_end2832: ;
}
l_R_2829 = ((*(R17 *)rt_nil_check(l_R_2829))).f_NEXT;
}
RT_B_TICK();
} L_end2830: ;
{ rt_int rv2835 = 0;
return rv2835; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R17 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2836; memset(&l_M_2836, 0, sizeof l_M_2836);
l_M_2836 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_2836 == NULL)) goto L_end2837;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_2836))).f_NAME))
{
{ rt_int rv2838 = 1;
return rv2838; }
}
l_M_2836 = ((*(R12 *)rt_nil_check(l_M_2836))).f_MODL;
}
RT_B_TICK();
} L_end2837: ;
{ rt_int rv2839 = 0;
return rv2839; }
rt_raise(RT_X_INIT);
}
static R9 r_BASE_NAME(R12 * p_Y) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R9 rv2840 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv2840; }
}
{ R9 rv2841 = r_MKN(rt_b_slice(r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN), rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)), rt_sub((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN, ((rt_int)1LL))));
return rv2841; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R9 p_NAME) { RT_B_TICK(); 
R18 * l_C_2842; memset(&l_C_2842, 0, sizeof l_C_2842);
l_C_2842 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2842 == NULL)) goto L_end2843;
{
if ((((*(R18 *)rt_nil_check(l_C_2842))).f_KIND == ((rt_int)1LL)))
{
goto L_end2843;
}
if ((((*(R18 *)rt_nil_check(l_C_2842))).f_KIND == ((rt_int)3LL)))
{
{
R17 * l_H_2844; memset(&l_H_2844, 0, sizeof l_H_2844);
l_H_2844 = ((*(R18 *)rt_nil_check(l_C_2842))).f_HANDLERS;
for (;;) {
if ((l_H_2844 == NULL)) goto L_end2845;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_H_2844))).f_A, p_NAME))
{
{ rt_int rv2846 = 1;
return rv2846; }
}
l_H_2844 = ((*(R17 *)rt_nil_check(l_H_2844))).f_NEXT;
}
RT_B_TICK();
} L_end2845: ;
}
}
l_C_2842 = ((*(R18 *)rt_nil_check(l_C_2842))).f_NEXT;
}
RT_B_TICK();
} L_end2843: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R20 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv2847 = 1;
return rv2847; }
}
}
{ rt_int rv2848 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv2848; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R9 p_NAME) { RT_B_TICK(); 
R18 * l_C_2849; memset(&l_C_2849, 0, sizeof l_C_2849);
l_C_2849 = ((R18 *)rt_b_new(sizeof (R18)));
S_R18(&(*(R18 *)rt_nil_check(l_C_2849)), ({ R18 rc2850; memset(&rc2850, 0, sizeof rc2850);  rc2850.f_KIND = p_KIND; S_R9(&rc2850.f_NAME, p_NAME, 0); rc2850.f_HANDLERS = NULL; rc2850.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc2850; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_2849;
}
static void r_POP_CTX(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R18 * r_LEAVE(rt_int p_KIND) { RT_B_TICK(); 
R18 * l_C_2851; memset(&l_C_2851, 0, sizeof l_C_2851);
l_C_2851 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2851 == NULL)) goto L_end2852;
{
if ((((*(R18 *)rt_nil_check(l_C_2851))).f_KIND == p_KIND))
{
{ R18 * rv2853 = l_C_2851;
return rv2853; }
}
if ((((*(R18 *)rt_nil_check(l_C_2851))).f_KIND == ((rt_int)1LL)))
{
{ R18 * rv2854 = NULL;
return rv2854; }
}
if ((((*(R18 *)rt_nil_check(l_C_2851))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R18 *)rt_nil_check(l_C_2851))).f_NAME));
}
l_C_2851 = ((*(R18 *)rt_nil_check(l_C_2851))).f_NEXT;
}
RT_B_TICK();
} L_end2852: ;
{ R18 * rv2855 = NULL;
return rv2855; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { RT_B_TICK(); 
R18 * l_C_2856; memset(&l_C_2856, 0, sizeof l_C_2856);
l_C_2856 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_2857; memset(&l_N_2857, 0, sizeof l_N_2857);
l_N_2857 = ((rt_int)0LL);
for (;;) {
if ((l_C_2856 == NULL)) goto L_end2858;
{
if ((((*(R18 *)rt_nil_check(l_C_2856))).f_KIND == ((rt_int)1LL)))
{
goto L_end2858;
}
if ((((*(R18 *)rt_nil_check(l_C_2856))).f_KIND == ((rt_int)3LL)))
{
l_N_2857 = rt_add(l_N_2857, ((rt_int)1LL));
}
l_C_2856 = ((*(R18 *)rt_nil_check(l_C_2856))).f_NEXT;
}
RT_B_TICK();
} L_end2858: ;
{ rt_int rv2859 = l_N_2857;
return rv2859; }
rt_raise(RT_X_INIT);
}
static R9 r_EXC_NAME(R9 p_NAME) { RT_B_TICK(); 
R17 * l_N_2860; memset(&l_N_2860, 0, sizeof l_N_2860);
l_N_2860 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_2860 == NULL)) goto L_end2861;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_N_2860))).f_NAME, p_NAME))
{
{ R9 rv2862 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2862; }
}
l_N_2860 = ((*(R17 *)rt_nil_check(l_N_2860))).f_NEXT;
}
RT_B_TICK();
} L_end2861: ;
l_N_2860 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_2860))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2860))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_2860;
{ R9 rv2863 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2863; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R17 * p_DECLS) { RT_B_TICK(); 
R17 * l_D_2864; memset(&l_D_2864, 0, sizeof l_D_2864);
l_D_2864 = p_DECLS;
for (;;) {
if ((l_D_2864 == NULL)) goto L_end2865;
{
if (((((*(R17 *)rt_nil_check(l_D_2864))).f_KIND == g_N_TYPE) || (((*(R17 *)rt_nil_check(l_D_2864))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_2866; memset(&l_Y_2866, 0, sizeof l_Y_2866);
l_Y_2866 = r_NEW_SYM(g_Y_TYPE, ((*(R17 *)rt_nil_check(l_D_2864))).f_NAME);
if ((((*(R17 *)rt_nil_check(l_D_2864))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_2866))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_2866))).f_DECL = l_D_2864;
r_DEFINE(l_Y_2866, ((*(R17 *)rt_nil_check(l_D_2864))).f_LINE);
if ((((*(R17 *)rt_nil_check(l_D_2864))).f_KIND == g_N_TYPE))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_2864))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_2864))).f_B))).f_A)))
{
((*(R7 *)rt_nil_check(g_W))).f_CHARSETS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_CHARSETS, ((rt_int)1LL));
}
}
}
}
l_D_2864 = ((*(R17 *)rt_nil_check(l_D_2864))).f_NEXT;
}
RT_B_TICK();
} L_end2865: ;
l_D_2864 = p_DECLS;
for (;;) {
if ((l_D_2864 == NULL)) goto L_end2867;
{
if (((((*(R17 *)rt_nil_check(l_D_2864))).f_KIND == g_N_TYPE) || (((*(R17 *)rt_nil_check(l_D_2864))).f_KIND == g_N_REPTYPE)))
{
{
R17 * l_SEEN_2868; memset(&l_SEEN_2868, 0, sizeof l_SEEN_2868);
l_SEEN_2868 = NULL;
rt_int l_FOUND_2869; memset(&l_FOUND_2869, 0, sizeof l_FOUND_2869);
l_FOUND_2869 = 0;
r_REFERS(((*(R17 *)rt_nil_check(l_D_2864))).f_B, C_R9(((*(R17 *)rt_nil_check(l_D_2864))).f_NAME), p_DECLS, &l_SEEN_2868, &l_FOUND_2869);
if (l_FOUND_2869)
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_2864))).f_LINE, rt_str("a circular type declaration (3.12.1, 3.12.3): ", 46), ((*(R17 *)rt_nil_check(l_D_2864))).f_NAME);
}
}
{
R17 * l_F_2870; memset(&l_F_2870, 0, sizeof l_F_2870);
l_F_2870 = ((*(R17 *)rt_nil_check(l_D_2864))).f_A;
for (;;) {
if ((l_F_2870 == NULL)) goto L_end2871;
{
if (((((*(R17 *)rt_nil_check(l_F_2870))).f_IV == ((rt_int)1LL)) && (((*(R17 *)rt_nil_check(l_D_2864))).f_KIND == g_N_TYPE)))
{
{
R17 * l_N_2872; memset(&l_N_2872, 0, sizeof l_N_2872);
l_N_2872 = ((*(R17 *)rt_nil_check(l_F_2870))).f_A;
for (;;) {
if ((l_N_2872 == NULL)) goto L_end2873;
{
if (r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_D_2864))).f_B, ((*(R17 *)rt_nil_check(l_N_2872))).f_NAME))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_2864))).f_LINE, rt_str("a TAG formal is only a tag-name or an argument for a TAG formal (3.12.1): ", 74), ((*(R17 *)rt_nil_check(l_N_2872))).f_NAME);
}
l_N_2872 = ((*(R17 *)rt_nil_check(l_N_2872))).f_NEXT;
}
RT_B_TICK();
} L_end2873: ;
}
}
if ((!(((*(R17 *)rt_nil_check(l_F_2870))).f_B == NULL)))
{
if (r_NAMES_VARIABLE(((*(R17 *)rt_nil_check(l_F_2870))).f_B, p_DECLS))
{
r_FAIL(((*(R17 *)rt_nil_check(l_F_2870))).f_LINE, rt_str("the type-arguments in the type of a formal must be manifest (3.12.1)", 68));
}
}
l_F_2870 = ((*(R17 *)rt_nil_check(l_F_2870))).f_NEXT;
}
RT_B_TICK();
} L_end2871: ;
}
}
l_D_2864 = ((*(R17 *)rt_nil_check(l_D_2864))).f_NEXT;
}
RT_B_TICK();
} L_end2867: ;
l_D_2864 = p_DECLS;
for (;;) {
if ((l_D_2864 == NULL)) goto L_end2874;
{
if ((((*(R17 *)rt_nil_check(l_D_2864))).f_KIND == g_N_TYPE))
{
{
R17 * l_F_2875; memset(&l_F_2875, 0, sizeof l_F_2875);
l_F_2875 = ((*(R17 *)rt_nil_check(l_D_2864))).f_A;
for (;;) {
if ((l_F_2875 == NULL)) goto L_end2876;
{
if (((((*(R17 *)rt_nil_check(l_F_2875))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(l_F_2875))).f_B == NULL))))
{
{
R22 * l_FT_2877; memset(&l_FT_2877, 0, sizeof l_FT_2877);
l_FT_2877 = r_REAL_TYPE(r_RESOLVE(((*(R17 *)rt_nil_check(l_F_2875))).f_B));
if (((!r_IS_SCALAR(l_FT_2877)) || (!(((*(R22 *)rt_nil_check(l_FT_2877))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_F_2875))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
}
l_F_2875 = ((*(R17 *)rt_nil_check(l_F_2875))).f_NEXT;
}
RT_B_TICK();
} L_end2876: ;
}
}
l_D_2864 = ((*(R17 *)rt_nil_check(l_D_2864))).f_NEXT;
}
RT_B_TICK();
} L_end2874: ;
}
static void r_REFERS(R17 * p_L, R9 p_TARGET, R17 * p_DECLS, R17 * *p_SEEN, rt_int *p_FOUND) { RT_B_TICK(); 
R17 * l_N_2878; memset(&l_N_2878, 0, sizeof l_N_2878);
l_N_2878 = p_L;
for (;;) {
if (((l_N_2878 == NULL) || (*p_FOUND))) goto L_end2879;
{
if (((((*(R17 *)rt_nil_check(l_N_2878))).f_KIND == g_TS_NAME) || (((*(R17 *)rt_nil_check(l_N_2878))).f_KIND == g_N_REP)))
{
if ((!r_TEQS(((*(R17 *)rt_nil_check(l_N_2878))).f_NAME, rt_str("PTR", 3))))
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_N_2878))).f_NAME, p_TARGET))
{
(*p_FOUND) = 1;
return;
}
if ((!r_IN_IDENTS((*p_SEEN), ((*(R17 *)rt_nil_check(l_N_2878))).f_NAME)))
{
{
R17 * l_M_2880; memset(&l_M_2880, 0, sizeof l_M_2880);
l_M_2880 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_N_2878))).f_LINE);
R17 * l_D_2881; memset(&l_D_2881, 0, sizeof l_D_2881);
l_D_2881 = p_DECLS;
S_R9(&((*(R17 *)rt_nil_check(l_M_2880))).f_NAME, ((*(R17 *)rt_nil_check(l_N_2878))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_M_2880))).f_NEXT = (*p_SEEN);
(*p_SEEN) = l_M_2880;
for (;;) {
if ((l_D_2881 == NULL)) goto L_end2882;
{
if (((((((*(R17 *)rt_nil_check(l_D_2881))).f_KIND == g_N_TYPE) || (((*(R17 *)rt_nil_check(l_D_2881))).f_KIND == g_N_REPTYPE))) && r_TEQ(((*(R17 *)rt_nil_check(l_D_2881))).f_NAME, ((*(R17 *)rt_nil_check(l_N_2878))).f_NAME)))
{
r_REFERS(((*(R17 *)rt_nil_check(l_D_2881))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
l_D_2881 = ((*(R17 *)rt_nil_check(l_D_2881))).f_NEXT;
}
RT_B_TICK();
} L_end2882: ;
}
}
r_REFERS(((*(R17 *)rt_nil_check(l_N_2878))).f_A, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_2878))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_2878))).f_C, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
}
else
{
r_REFERS(((*(R17 *)rt_nil_check(l_N_2878))).f_A, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_2878))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_2878))).f_C, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_2878))).f_D, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
l_N_2878 = ((*(R17 *)rt_nil_check(l_N_2878))).f_NEXT;
}
RT_B_TICK();
} L_end2879: ;
}
static rt_int r_TAG_MISUSED(R17 * p_L, R9 p_NAME) { RT_B_TICK(); 
R17 * l_N_2883; memset(&l_N_2883, 0, sizeof l_N_2883);
l_N_2883 = p_L;
for (;;) {
if ((l_N_2883 == NULL)) goto L_end2884;
{
if ((((*(R17 *)rt_nil_check(l_N_2883))).f_KIND == g_TS_NAME))
{
{
R17 * l_A_2885; memset(&l_A_2885, 0, sizeof l_A_2885);
l_A_2885 = ((*(R17 *)rt_nil_check(l_N_2883))).f_A;
for (;;) {
if ((l_A_2885 == NULL)) goto L_end2886;
{
if ((!((((((((*(R17 *)rt_nil_check(l_A_2885))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_A_2885))).f_KIND == g_TS_NAME))) && r_TEQ(((*(R17 *)rt_nil_check(l_A_2885))).f_NAME, p_NAME)) && (((*(R17 *)rt_nil_check(l_A_2885))).f_A == NULL)))))
{
if (r_TAG_MISUSED1(l_A_2885, p_NAME))
{
{ rt_int rv2887 = 1;
return rv2887; }
}
}
l_A_2885 = ((*(R17 *)rt_nil_check(l_A_2885))).f_NEXT;
}
RT_B_TICK();
} L_end2886: ;
}
if (((r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_N_2883))).f_B, p_NAME) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_N_2883))).f_C, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_N_2883))).f_E, p_NAME)))
{
{ rt_int rv2888 = 1;
return rv2888; }
}
}
else if (r_TAG_MISUSED1(l_N_2883, p_NAME))
{
{ rt_int rv2889 = 1;
return rv2889; }
}
l_N_2883 = ((*(R17 *)rt_nil_check(l_N_2883))).f_NEXT;
}
RT_B_TICK();
} L_end2884: ;
{ rt_int rv2890 = 0;
return rv2890; }
rt_raise(RT_X_INIT);
}
static rt_int r_TAG_MISUSED1(R17 * p_N, R9 p_NAME) { RT_B_TICK(); 
rt_int l_K_2891; memset(&l_K_2891, 0, sizeof l_K_2891);
l_K_2891 = ((*(R17 *)rt_nil_check(p_N))).f_KIND;
if ((l_K_2891 == g_TS_NAME))
{
{ rt_int rv2892 = (r_TAG_MISUSED(p_N, p_NAME) && 1);
return rv2892; }
}
if ((((((l_K_2891 == g_N_NAME) || (l_K_2891 == g_N_ENUMLIT)) || (l_K_2891 == g_N_APPLY))) && r_TEQ(((*(R17 *)rt_nil_check(p_N))).f_NAME, p_NAME)))
{
{ rt_int rv2893 = 1;
return rv2893; }
}
{ rt_int rv2894 = ((((r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_A, p_NAME) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_B, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_C, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_D, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_E, p_NAME));
return rv2894; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_VARIABLE(R17 * p_L, R17 * p_DECLS) { RT_B_TICK(); 
{ rt_int rv2895 = r_NAMES_VARIABLE_BUT(p_L, p_DECLS, NULL);
return rv2895; }
rt_raise(RT_X_INIT);
}
static void r_GEN_NAMES(R17 * p_L, R17 * *p_HEAD) { RT_B_TICK(); 
R17 * l_N_2896; memset(&l_N_2896, 0, sizeof l_N_2896);
l_N_2896 = p_L;
for (;;) {
if ((l_N_2896 == NULL)) goto L_end2897;
{
if (((((((*(R17 *)rt_nil_check(l_N_2896))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_N_2896))).f_KIND == g_N_PARAM))) && ((((*(R17 *)rt_nil_check(l_N_2896))).f_NAME).f_LEN > ((rt_int)0LL))))
{
{
R17 * l_M_2898; memset(&l_M_2898, 0, sizeof l_M_2898);
l_M_2898 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_N_2896))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_M_2898))).f_NAME, ((*(R17 *)rt_nil_check(l_N_2896))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_M_2898))).f_NEXT = (*p_HEAD);
(*p_HEAD) = l_M_2898;
}
}
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_2896))).f_A, &(*p_HEAD));
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_2896))).f_B, &(*p_HEAD));
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_2896))).f_C, &(*p_HEAD));
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_2896))).f_D, &(*p_HEAD));
l_N_2896 = ((*(R17 *)rt_nil_check(l_N_2896))).f_NEXT;
}
RT_B_TICK();
} L_end2897: ;
}
static rt_int r_NAMES_VARIABLE_BUT(R17 * p_L, R17 * p_DECLS, R17 * p_EXCL) { RT_B_TICK(); 
R17 * l_N_2899; memset(&l_N_2899, 0, sizeof l_N_2899);
l_N_2899 = p_L;
for (;;) {
if ((l_N_2899 == NULL)) goto L_end2900;
{
if (((((*(R17 *)rt_nil_check(l_N_2899))).f_KIND == g_N_NAME) && r_IN_IDENTS(p_EXCL, ((*(R17 *)rt_nil_check(l_N_2899))).f_NAME)))
{
}
else if ((((*(R17 *)rt_nil_check(l_N_2899))).f_KIND == g_N_NAME))
{
{
R17 * l_D_2901; memset(&l_D_2901, 0, sizeof l_D_2901);
l_D_2901 = p_DECLS;
R12 * l_Y_2902; memset(&l_Y_2902, 0, sizeof l_Y_2902);
l_Y_2902 = r_LOOKUP(((*(R17 *)rt_nil_check(l_N_2899))).f_NAME);
for (;;) {
if ((l_D_2901 == NULL)) goto L_end2903;
{
if (((((*(R17 *)rt_nil_check(l_D_2901))).f_KIND == g_N_VAR) && r_IN_IDENTS(((*(R17 *)rt_nil_check(l_D_2901))).f_A, ((*(R17 *)rt_nil_check(l_N_2899))).f_NAME)))
{
{ rt_int rv2904 = 1;
return rv2904; }
}
l_D_2901 = ((*(R17 *)rt_nil_check(l_D_2901))).f_NEXT;
}
RT_B_TICK();
} L_end2903: ;
if ((!(l_Y_2902 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_2902))).f_KIND == g_Y_VAR) && (!((*(R12 *)rt_nil_check(l_Y_2902))).f_INPUT)))
{
{ rt_int rv2905 = 1;
return rv2905; }
}
}
}
}
else if ((((r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_2899))).f_A, p_DECLS, p_EXCL) || r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_2899))).f_B, p_DECLS, p_EXCL)) || r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_2899))).f_C, p_DECLS, p_EXCL)) || r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_2899))).f_D, p_DECLS, p_EXCL)))
{
{ rt_int rv2906 = 1;
return rv2906; }
}
l_N_2899 = ((*(R17 *)rt_nil_check(l_N_2899))).f_NEXT;
}
RT_B_TICK();
} L_end2900: ;
{ rt_int rv2907 = 0;
return rv2907; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_PRINTING_CHAR(R17 * p_L) { RT_B_TICK(); 
R17 * l_P_2908; memset(&l_P_2908, 0, sizeof l_P_2908);
l_P_2908 = p_L;
for (;;) {
if ((l_P_2908 == NULL)) goto L_end2909;
{
if (((((*(R17 *)rt_nil_check(l_P_2908))).f_NAME).f_LEN >= ((rt_int)3LL)))
{
if (rt_b_eq(r_STR(((*(R17 *)rt_nil_check(l_P_2908))).f_NAME, ((rt_int)2LL)), rt_str("\\'", 2)))
{
{ rt_int rv2910 = 1;
return rv2910; }
}
}
l_P_2908 = ((*(R17 *)rt_nil_check(l_P_2908))).f_NEXT;
}
RT_B_TICK();
} L_end2909: ;
{ rt_int rv2911 = 0;
return rv2911; }
rt_raise(RT_X_INIT);
}
static R22 * r_DEFAULT_CHARSET(rt_int p_LINE) { RT_B_TICK(); 
R12 * l_A_2912; memset(&l_A_2912, 0, sizeof l_A_2912);
l_A_2912 = r_LOOKUP(r_MKN(rt_str("ASCII", 5)));
R22 * l_FOUND_2913; memset(&l_FOUND_2913, 0, sizeof l_FOUND_2913);
l_FOUND_2913 = NULL;
rt_int l_N_2914; memset(&l_N_2914, 0, sizeof l_N_2914);
l_N_2914 = ((rt_int)0LL);
R12 * l_Y_2915; memset(&l_Y_2915, 0, sizeof l_Y_2915);
l_Y_2915 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
if (((((*(R7 *)rt_nil_check(g_W))).f_CHARSETS == ((rt_int)0LL)) && (!(l_A_2912 == NULL))))
{
if (((((*(R12 *)rt_nil_check(l_A_2912))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_A_2912))).f_DECL == NULL)))
{
{ R22 * rv2916 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2916; }
}
}
for (;;) {
if ((l_Y_2915 == NULL)) goto L_end2917;
{
if (((((*(R12 *)rt_nil_check(l_Y_2915))).f_KIND == g_Y_TYPE) && ((((*(R12 *)rt_nil_check(l_Y_2915))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((r_LOOKUP(((*(R12 *)rt_nil_check(l_Y_2915))).f_NAME) == l_Y_2915))
{
{
R22 * l_T_2918; memset(&l_T_2918, 0, sizeof l_T_2918);
l_T_2918 = NULL;
if ((((*(R12 *)rt_nil_check(l_Y_2915))).f_DECL == NULL))
{
l_T_2918 = ((*(R12 *)rt_nil_check(l_Y_2915))).f_T;
}
else if (((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2915))).f_DECL))).f_KIND == g_N_TYPE) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2915))).f_DECL))).f_A == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2915))).f_DECL))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2915))).f_DECL))).f_B))).f_A)))
{
l_T_2918 = r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_2915))).f_NAME, p_LINE);
}
}
if ((!(l_T_2918 == NULL)))
{
l_T_2918 = r_REAL_TYPE(l_T_2918);
if ((((*(R22 *)rt_nil_check(l_T_2918))).f_KIND == g_T_ENUM))
{
if ((r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2918))).f_BASE))).f_LITS) && (!(((*(R22 *)rt_nil_check(l_T_2918))).f_BASE == l_FOUND_2913))))
{
if ((!(l_FOUND_2913 == NULL)))
{
r_FAIL(p_LINE, rt_b_cat(rt_str("two character sets are available here: the literal needs ", 57), rt_str("a charset-name (3.7.2)", 22)));
}
l_FOUND_2913 = ((*(R22 *)rt_nil_check(l_T_2918))).f_BASE;
}
}
}
}
}
}
l_Y_2915 = ((*(R12 *)rt_nil_check(l_Y_2915))).f_SNEXT;
}
RT_B_TICK();
} L_end2917: ;
if ((l_FOUND_2913 == NULL))
{
r_FAIL(p_LINE, rt_str("no character set is available for the literal (3.7.2)", 53));
}
{ R22 * rv2919 = l_FOUND_2913;
return rv2919; }
rt_raise(RT_X_INIT);
}
static R22 * r_CHARSET_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_R_2920; memset(&l_R_2920, 0, sizeof l_R_2920);
l_R_2920 = r_REAL_TYPE(p_T);
if ((((*(R22 *)rt_nil_check(l_R_2920))).f_BASE == NULL))
{
{ R22 * rv2921 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2921; }
}
{ R22 * rv2922 = ((*(R22 *)rt_nil_check(l_R_2920))).f_BASE;
return rv2922; }
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
static void r_DECLARE_LABELS(R17 * p_S0) { RT_B_TICK(); 
R17 * l_S_2923; memset(&l_S_2923, 0, sizeof l_S_2923);
l_S_2923 = p_S0;
for (;;) {
if ((l_S_2923 == NULL)) goto L_end2924;
{
{
R17 * l_L_2925; memset(&l_L_2925, 0, sizeof l_L_2925);
l_L_2925 = l_S_2923;
for (;;) {
if ((!(((*(R17 *)rt_nil_check(l_L_2925))).f_KIND == g_N_LABELED))) goto L_end2926;
{
{
R12 * l_Y_2927; memset(&l_Y_2927, 0, sizeof l_Y_2927);
l_Y_2927 = r_NEW_SYM(g_Y_LABEL, ((*(R17 *)rt_nil_check(l_L_2925))).f_NAME);
S_R9(&((*(R12 *)rt_nil_check(l_Y_2927))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(r_CID(((*(R17 *)rt_nil_check(l_L_2925))).f_NAME), (r_CID(((*(R17 *)rt_nil_check(l_L_2925))).f_NAME)).f_LEN))), 0);
((*(R12 *)rt_nil_check(l_Y_2927))).f_MV = r_GUARDS();
r_DEFINE(l_Y_2927, ((*(R17 *)rt_nil_check(l_L_2925))).f_LINE);
}
l_L_2925 = ((*(R17 *)rt_nil_check(l_L_2925))).f_A;
}
RT_B_TICK();
} L_end2926: ;
}
l_S_2923 = ((*(R17 *)rt_nil_check(l_S_2923))).f_NEXT;
}
RT_B_TICK();
} L_end2924: ;
}
static void r_BODY(R17 * p_B) { RT_B_TICK(); 
R17 * l_D_2928; memset(&l_D_2928, 0, sizeof l_D_2928);
l_D_2928 = ((*(R17 *)rt_nil_check(p_B))).f_A;
R17 * l_S_2929; memset(&l_S_2929, 0, sizeof l_S_2929);
l_S_2929 = ((*(R17 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R17 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2928 == NULL)) goto L_end2930;
{
if (((((*(R17 *)rt_nil_check(l_D_2928))).f_KIND == g_N_VAR) || (((*(R17 *)rt_nil_check(l_D_2928))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2928);
}
l_D_2928 = ((*(R17 *)rt_nil_check(l_D_2928))).f_NEXT;
}
RT_B_TICK();
} L_end2930: ;
r_DECLARE_LABELS(((*(R17 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2929 == NULL)) goto L_end2931;
{
r_STMT(l_S_2929);
l_S_2929 = ((*(R17 *)rt_nil_check(l_S_2929))).f_NEXT;
}
RT_B_TICK();
} L_end2931: ;
}
static void r_OPEN_BODY(R17 * p_B) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R17 * p_S, R17 * p_BODY_NODE, R17 * p_HANDLERS) { RT_B_TICK(); 
R9 l_F_2932; memset(&l_F_2932, 0, sizeof l_F_2932);
S_R9(&l_F_2932, r_NEW_NAME(rt_str("xf", 2)), 0);
R17 * l_H_2933; memset(&l_H_2933, 0, sizeof l_H_2933);
l_H_2933 = p_HANDLERS;
R9 l_WORD_2934; memset(&l_WORD_2934, 0, sizeof l_WORD_2934);
S_R9(&l_WORD_2934, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_2932, l_F_2932));
r_PUSH_CTX(((rt_int)3LL), l_F_2932);
((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_HANDLERS = p_HANDLERS;
if ((!(p_S == NULL)))
{
r_STMT(p_S);
}
else
{
r_OPEN_BODY(p_BODY_NODE);
}
r_POP_CTX();
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_2932, l_F_2932, l_F_2932));
for (;;) {
if ((l_H_2933 == NULL)) goto L_end2935;
{
{
R17 * l_N_2936; memset(&l_N_2936, 0, sizeof l_N_2936);
l_N_2936 = ((*(R17 *)rt_nil_check(l_H_2933))).f_A;
R9 l_COND_2937; memset(&l_COND_2937, 0, sizeof l_COND_2937);
S_R9(&l_COND_2937, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_2936 == NULL)) goto L_end2938;
{
if ((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_N_2936))).f_NEXT, ((*(R17 *)rt_nil_check(l_N_2936))).f_NAME) || r_IN_HANDLERS(((*(R17 *)rt_nil_check(l_H_2933))).f_NEXT, ((*(R17 *)rt_nil_check(l_N_2936))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_N_2936))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R17 *)rt_nil_check(l_N_2936))).f_NAME);
}
S_R9(&l_COND_2937, r_FMT3(rt_str("@ || @x == @", 12), l_COND_2937, l_F_2932, r_EXC_NAME(((*(R17 *)rt_nil_check(l_N_2936))).f_NAME)), 0);
l_N_2936 = ((*(R17 *)rt_nil_check(l_N_2936))).f_NEXT;
}
RT_B_TICK();
} L_end2938: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2934, l_COND_2937));
S_R9(&l_WORD_2934, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_2932, rt_str("x", 1)));
r_OPEN_BODY(((*(R17 *)rt_nil_check(l_H_2933))).f_B);
r_POP_CTX();
}
l_H_2933 = ((*(R17 *)rt_nil_check(l_H_2933))).f_NEXT;
}
RT_B_TICK();
} L_end2935: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_2932));
}
static void r_INTERFERENCE(R17 * p_S) { RT_B_TICK(); 
rt_int l_K_2939; memset(&l_K_2939, 0, sizeof l_K_2939);
l_K_2939 = ((*(R17 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2939 == g_N_ASSIGN))
{
{
R17 * l_NAMES_2940; memset(&l_NAMES_2940, 0, sizeof l_NAMES_2940);
l_NAMES_2940 = NULL;
R17 * l_CALLS_2941; memset(&l_CALLS_2941, 0, sizeof l_CALLS_2941);
l_CALLS_2941 = NULL;
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_S))).f_A, &l_NAMES_2940, &l_CALLS_2941);
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_S))).f_B, &l_NAMES_2940, &l_CALLS_2941);
r_CHECK_INTERFERENCE(l_NAMES_2940, l_CALLS_2941, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 0);
}
}
else if ((l_K_2939 == g_N_CALL))
{
{
R17 * l_NAMES_2942; memset(&l_NAMES_2942, 0, sizeof l_NAMES_2942);
l_NAMES_2942 = NULL;
R17 * l_CALLS_2943; memset(&l_CALLS_2943, 0, sizeof l_CALLS_2943);
l_CALLS_2943 = NULL;
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_S))).f_A, &l_NAMES_2942, &l_CALLS_2943);
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_S))).f_B, &l_NAMES_2942, &l_CALLS_2943);
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_S))).f_C, &l_NAMES_2942, &l_CALLS_2943);
r_CHECK_INTERFERENCE(l_NAMES_2942, l_CALLS_2943, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 0);
}
}
else if (((l_K_2939 == g_N_RETURN) || (l_K_2939 == g_N_ASSERT)))
{
if ((!(((*(R17 *)rt_nil_check(p_S))).f_A == NULL)))
{
{
R17 * l_NAMES_2944; memset(&l_NAMES_2944, 0, sizeof l_NAMES_2944);
l_NAMES_2944 = NULL;
R17 * l_CALLS_2945; memset(&l_CALLS_2945, 0, sizeof l_CALLS_2945);
l_CALLS_2945 = NULL;
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_S))).f_A, &l_NAMES_2944, &l_CALLS_2945);
r_CHECK_INTERFERENCE(l_NAMES_2944, l_CALLS_2945, ((*(R17 *)rt_nil_check(p_S))).f_LINE, (l_K_2939 == g_N_ASSERT));
}
}
}
else if ((l_K_2939 == g_N_IF))
{
{
R17 * l_ARM_2946; memset(&l_ARM_2946, 0, sizeof l_ARM_2946);
l_ARM_2946 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_ARM_2946 == NULL)) goto L_end2947;
{
{
R17 * l_NAMES_2948; memset(&l_NAMES_2948, 0, sizeof l_NAMES_2948);
l_NAMES_2948 = NULL;
R17 * l_CALLS_2949; memset(&l_CALLS_2949, 0, sizeof l_CALLS_2949);
l_CALLS_2949 = NULL;
r_COLLECT_REFS(((*(R17 *)rt_nil_check(l_ARM_2946))).f_A, &l_NAMES_2948, &l_CALLS_2949);
r_CHECK_INTERFERENCE(l_NAMES_2948, l_CALLS_2949, ((*(R17 *)rt_nil_check(l_ARM_2946))).f_LINE, 0);
}
l_ARM_2946 = ((*(R17 *)rt_nil_check(l_ARM_2946))).f_NEXT;
}
RT_B_TICK();
} L_end2947: ;
}
}
}
static void r_COLLECT_LIST(R17 * p_L, R17 * *p_NAMES, R17 * *p_CALLS) { RT_B_TICK(); 
R17 * l_N_2950; memset(&l_N_2950, 0, sizeof l_N_2950);
l_N_2950 = p_L;
for (;;) {
if ((l_N_2950 == NULL)) goto L_end2951;
{
r_COLLECT_REFS(l_N_2950, &(*p_NAMES), &(*p_CALLS));
l_N_2950 = ((*(R17 *)rt_nil_check(l_N_2950))).f_NEXT;
}
RT_B_TICK();
} L_end2951: ;
}
static void r_COLLECT_REFS(R17 * p_E, R17 * *p_NAMES, R17 * *p_CALLS) { RT_B_TICK(); 
rt_int l_K_2952; memset(&l_K_2952, 0, sizeof l_K_2952);
if ((p_E == NULL))
{
return;
}
l_K_2952 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_2952 == g_N_NAME))
{
{
R12 * l_Y_2953; memset(&l_Y_2953, 0, sizeof l_Y_2953);
l_Y_2953 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2953 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2953))).f_KIND == g_Y_VAR))
{
(*p_NAMES) = r_NAME_REF(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2953))).f_OWNER, NULL, (*p_NAMES));
}
}
}
}
else if ((l_K_2952 == g_N_APPLY))
{
{
R12 * l_Y_2954; memset(&l_Y_2954, 0, sizeof l_Y_2954);
l_Y_2954 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2954 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2954))).f_KIND == g_Y_VAR))
{
(*p_NAMES) = r_NAME_REF(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2954))).f_OWNER, NULL, (*p_NAMES));
}
else if ((((*(R12 *)rt_nil_check(l_Y_2954))).f_KIND == g_Y_ROUTINE))
{
(*p_CALLS) = r_NAME_REF(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((rt_int)0LL), p_E, (*p_CALLS));
}
}
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_B, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_C, &(*p_NAMES), &(*p_CALLS));
}
}
else if ((((((l_K_2952 == g_N_FIELD) || (l_K_2952 == g_N_DEREF)) || (l_K_2952 == g_N_UNOP)) || (l_K_2952 == g_N_PAREN)) || (l_K_2952 == g_N_QUAL)))
{
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
}
else if (((((l_K_2952 == g_N_INDEX) || (l_K_2952 == g_N_SUBSTR)) || (l_K_2952 == g_N_BINOP)) || (l_K_2952 == g_N_IN)))
{
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
if ((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_RANGE))
{
r_COLLECT_REFS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_A, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_REFS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_B, &(*p_NAMES), &(*p_CALLS));
}
else
{
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_B, &(*p_NAMES), &(*p_CALLS));
}
}
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_E))).f_C, &(*p_NAMES), &(*p_CALLS));
}
else if ((l_K_2952 == g_N_RECCONS))
{
{
R17 * l_F_2955; memset(&l_F_2955, 0, sizeof l_F_2955);
l_F_2955 = ((*(R17 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_F_2955 == NULL)) goto L_end2956;
{
r_COLLECT_REFS(((*(R17 *)rt_nil_check(l_F_2955))).f_A, &(*p_NAMES), &(*p_CALLS));
l_F_2955 = ((*(R17 *)rt_nil_check(l_F_2955))).f_NEXT;
}
RT_B_TICK();
} L_end2956: ;
}
}
else if ((l_K_2952 == g_N_ARRCONS))
{
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
}
}
static R17 * r_NAME_REF(R9 p_NAME, rt_int p_OWNER, R17 * p_A, R17 * p_L) { RT_B_TICK(); 
R17 * l_N_2957; memset(&l_N_2957, 0, sizeof l_N_2957);
l_N_2957 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_2957))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2957))).f_IV = p_OWNER;
((*(R17 *)rt_nil_check(l_N_2957))).f_A = p_A;
((*(R17 *)rt_nil_check(l_N_2957))).f_NEXT = p_L;
{ R17 * rv2958 = l_N_2957;
return rv2958; }
rt_raise(RT_X_INIT);
}
static R17 * r_ROUTINE_DATA(R9 p_NAME, rt_int p_INOUT) { RT_B_TICK(); 
R12 * l_Y_2959; memset(&l_Y_2959, 0, sizeof l_Y_2959);
l_Y_2959 = r_LOOKUP(p_NAME);
R17 * l_R_2960; memset(&l_R_2960, 0, sizeof l_R_2960);
l_R_2960 = NULL;
rt_int l_FIRST_2961; memset(&l_FIRST_2961, 0, sizeof l_FIRST_2961);
l_FIRST_2961 = 1;
for (;;) {
if ((l_Y_2959 == NULL)) goto L_end2962;
{
if ((((*(R12 *)rt_nil_check(l_Y_2959))).f_KIND == g_Y_ROUTINE))
{
{
R17 * l_D_2963; memset(&l_D_2963, 0, sizeof l_D_2963);
l_D_2963 = r_DATA_OF(r_ORIGINAL(l_Y_2959), p_INOUT, ((rt_int)0LL));
if (l_FIRST_2961)
{
l_R_2960 = l_D_2963;
l_FIRST_2961 = 0;
}
else
{
l_R_2960 = r_INTERSECT_REFS(l_R_2960, l_D_2963);
}
}
}
else if (((!(((*(R12 *)rt_nil_check(l_Y_2959))).f_KIND == g_Y_ROUTINE)) && (!l_FIRST_2961)))
{
}
l_Y_2959 = r_LOOKUP_NEXT(l_Y_2959);
}
RT_B_TICK();
} L_end2962: ;
{ R17 * rv2964 = l_R_2960;
return rv2964; }
rt_raise(RT_X_INIT);
}
static R17 * r_DATA_OF(R12 * p_Y, rt_int p_INOUT, rt_int p_DEPTH) { RT_B_TICK(); 
R17 * l_R_2965; memset(&l_R_2965, 0, sizeof l_R_2965);
l_R_2965 = NULL;
if (((((*(R12 *)rt_nil_check(p_Y))).f_DECL == NULL) || (p_DEPTH > ((rt_int)20LL))))
{
{ R17 * rv2966 = NULL;
return rv2966; }
}
if ((!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_KIND == g_N_ROUTINE)))
{
{ R17 * rv2967 = NULL;
return rv2967; }
}
r_COMPUTE_USES(p_Y);
if ((!p_INOUT))
{
{
R17 * l_U_2968; memset(&l_U_2968, 0, sizeof l_U_2968);
l_U_2968 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_2968 == NULL)) goto L_end2969;
{
l_R_2965 = r_NAME_REF(((*(R17 *)rt_nil_check(l_U_2968))).f_NAME, ((*(R17 *)rt_nil_check(l_U_2968))).f_IV, NULL, l_R_2965);
l_U_2968 = ((*(R17 *)rt_nil_check(l_U_2968))).f_NEXT;
}
RT_B_TICK();
} L_end2969: ;
}
{ R17 * rv2970 = l_R_2965;
return rv2970; }
}
if ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E == NULL))
{
{ R17 * rv2971 = NULL;
return rv2971; }
}
{
R17 * l_U_2972; memset(&l_U_2972, 0, sizeof l_U_2972);
l_U_2972 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_2972 == NULL)) goto L_end2973;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E))).f_B, ((*(R17 *)rt_nil_check(l_U_2972))).f_NAME))
{
l_R_2965 = r_NAME_REF(((*(R17 *)rt_nil_check(l_U_2972))).f_NAME, ((*(R17 *)rt_nil_check(l_U_2972))).f_IV, NULL, l_R_2965);
}
l_U_2972 = ((*(R17 *)rt_nil_check(l_U_2972))).f_NEXT;
}
RT_B_TICK();
} L_end2973: ;
}
{
R17 * l_C_2974; memset(&l_C_2974, 0, sizeof l_C_2974);
l_C_2974 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E))).f_C;
for (;;) {
if ((l_C_2974 == NULL)) goto L_end2975;
{
{
R12 * l_Z_2976; memset(&l_Z_2976, 0, sizeof l_Z_2976);
l_Z_2976 = r_LOOKUP(((*(R17 *)rt_nil_check(l_C_2974))).f_NAME);
for (;;) {
if ((l_Z_2976 == NULL)) goto L_end2977;
{
if ((((*(R12 *)rt_nil_check(l_Z_2976))).f_KIND == g_Y_ROUTINE))
{
{
R17 * l_D_2978; memset(&l_D_2978, 0, sizeof l_D_2978);
l_D_2978 = r_DATA_OF(r_ORIGINAL(l_Z_2976), 1, rt_add(p_DEPTH, ((rt_int)1LL)));
for (;;) {
if ((l_D_2978 == NULL)) goto L_end2979;
{
if ((!r_HAS_REF(l_R_2965, ((*(R17 *)rt_nil_check(l_D_2978))).f_NAME, ((*(R17 *)rt_nil_check(l_D_2978))).f_IV)))
{
l_R_2965 = r_NAME_REF(((*(R17 *)rt_nil_check(l_D_2978))).f_NAME, ((*(R17 *)rt_nil_check(l_D_2978))).f_IV, NULL, l_R_2965);
}
l_D_2978 = ((*(R17 *)rt_nil_check(l_D_2978))).f_NEXT;
}
RT_B_TICK();
} L_end2979: ;
}
}
l_Z_2976 = r_LOOKUP_NEXT(l_Z_2976);
}
RT_B_TICK();
} L_end2977: ;
}
l_C_2974 = ((*(R17 *)rt_nil_check(l_C_2974))).f_NEXT;
}
RT_B_TICK();
} L_end2975: ;
}
{ R17 * rv2980 = l_R_2965;
return rv2980; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_REF(R17 * p_L, R9 p_NAME, rt_int p_OWNER) { RT_B_TICK(); 
R17 * l_P_2981; memset(&l_P_2981, 0, sizeof l_P_2981);
l_P_2981 = p_L;
for (;;) {
if ((l_P_2981 == NULL)) goto L_end2982;
{
if ((r_TEQ(((*(R17 *)rt_nil_check(l_P_2981))).f_NAME, p_NAME) && (((*(R17 *)rt_nil_check(l_P_2981))).f_IV == p_OWNER)))
{
{ rt_int rv2983 = 1;
return rv2983; }
}
l_P_2981 = ((*(R17 *)rt_nil_check(l_P_2981))).f_NEXT;
}
RT_B_TICK();
} L_end2982: ;
{ rt_int rv2984 = 0;
return rv2984; }
rt_raise(RT_X_INIT);
}
static R17 * r_INTERSECT_REFS(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_R_2985; memset(&l_R_2985, 0, sizeof l_R_2985);
l_R_2985 = NULL;
R17 * l_P_2986; memset(&l_P_2986, 0, sizeof l_P_2986);
l_P_2986 = p_A;
for (;;) {
if ((l_P_2986 == NULL)) goto L_end2987;
{
if (r_HAS_REF(p_B, ((*(R17 *)rt_nil_check(l_P_2986))).f_NAME, ((*(R17 *)rt_nil_check(l_P_2986))).f_IV))
{
l_R_2985 = r_NAME_REF(((*(R17 *)rt_nil_check(l_P_2986))).f_NAME, ((*(R17 *)rt_nil_check(l_P_2986))).f_IV, NULL, l_R_2985);
}
l_P_2986 = ((*(R17 *)rt_nil_check(l_P_2986))).f_NEXT;
}
RT_B_TICK();
} L_end2987: ;
{ R17 * rv2988 = l_R_2985;
return rv2988; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_INTERFERENCE(R17 * p_NAMES, R17 * p_CALLS, rt_int p_LINE, rt_int p_ASSERTION) { RT_B_TICK(); 
R17 * l_C_2989; memset(&l_C_2989, 0, sizeof l_C_2989);
l_C_2989 = p_CALLS;
for (;;) {
if ((l_C_2989 == NULL)) goto L_end2990;
{
{
R17 * l_V_2991; memset(&l_V_2991, 0, sizeof l_V_2991);
l_V_2991 = r_ROUTINE_DATA(((*(R17 *)rt_nil_check(l_C_2989))).f_NAME, 1);
if (((!(l_V_2991 == NULL)) && p_ASSERTION))
{
r_FAILT(p_LINE, rt_str("the expression of ASSERT must be free of side-effects (4.5.8): ", 63), ((*(R17 *)rt_nil_check(l_C_2989))).f_NAME);
}
for (;;) {
if ((l_V_2991 == NULL)) goto L_end2992;
{
if (r_HAS_REF(p_NAMES, ((*(R17 *)rt_nil_check(l_V_2991))).f_NAME, ((*(R17 *)rt_nil_check(l_V_2991))).f_IV))
{
r_FAILT(p_LINE, rt_str("a function invocation modifies a variable the expression also names (4.3.4): ", 77), ((*(R17 *)rt_nil_check(l_V_2991))).f_NAME);
}
{
R17 * l_D_2993; memset(&l_D_2993, 0, sizeof l_D_2993);
l_D_2993 = p_CALLS;
for (;;) {
if ((l_D_2993 == NULL)) goto L_end2994;
{
if ((!(l_D_2993 == l_C_2989)))
{
if (r_HAS_REF(r_ROUTINE_DATA(((*(R17 *)rt_nil_check(l_D_2993))).f_NAME, 0), ((*(R17 *)rt_nil_check(l_V_2991))).f_NAME, ((*(R17 *)rt_nil_check(l_V_2991))).f_IV))
{
r_FAILT(p_LINE, rt_str("two function invocations of one expression interfere on (4.3.4): ", 65), ((*(R17 *)rt_nil_check(l_V_2991))).f_NAME);
}
}
l_D_2993 = ((*(R17 *)rt_nil_check(l_D_2993))).f_NEXT;
}
RT_B_TICK();
} L_end2994: ;
}
l_V_2991 = ((*(R17 *)rt_nil_check(l_V_2991))).f_NEXT;
}
RT_B_TICK();
} L_end2992: ;
}
l_C_2989 = ((*(R17 *)rt_nil_check(l_C_2989))).f_NEXT;
}
RT_B_TICK();
} L_end2990: ;
}
static rt_int r_IN_HANDLERS(R17 * p_HS, R9 p_NAME) { RT_B_TICK(); 
R17 * l_H_2995; memset(&l_H_2995, 0, sizeof l_H_2995);
l_H_2995 = p_HS;
for (;;) {
if ((l_H_2995 == NULL)) goto L_end2996;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_H_2995))).f_A, p_NAME))
{
{ rt_int rv2997 = 1;
return rv2997; }
}
l_H_2995 = ((*(R17 *)rt_nil_check(l_H_2995))).f_NEXT;
}
RT_B_TICK();
} L_end2996: ;
{ rt_int rv2998 = 0;
return rv2998; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED_STMT(R17 * p_S) { RT_B_TICK(); 
rt_int l_K_2999; memset(&l_K_2999, 0, sizeof l_K_2999);
l_K_2999 = ((*(R17 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2999 == g_N_EXCEPT))
{
{ rt_int rv3000 = r_IS_STRUCTURED_STMT(((*(R17 *)rt_nil_check(p_S))).f_A);
return rv3000; }
}
{ rt_int rv3001 = (((((((l_K_2999 == g_N_BLOCK) || (l_K_2999 == g_N_IF)) || (l_K_2999 == g_N_CASE)) || (l_K_2999 == g_N_LOOP)) || (l_K_2999 == g_N_FOR)) || (l_K_2999 == g_N_PAR)) || (l_K_2999 == g_N_WITH));
return rv3001; }
rt_raise(RT_X_INIT);
}
static R17 * r_NAMED_ROOT(R17 * p_E) { RT_B_TICK(); 
rt_int l_K_3002; memset(&l_K_3002, 0, sizeof l_K_3002);
l_K_3002 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
if (((l_K_3002 == g_N_NAME) || (l_K_3002 == g_N_APPLY)))
{
{ R17 * rv3003 = p_E;
return rv3003; }
}
else if ((((l_K_3002 == g_N_INDEX) || (l_K_3002 == g_N_FIELD)) || (l_K_3002 == g_N_SUBSTR)))
{
{ R17 * rv3004 = r_NAMED_ROOT(((*(R17 *)rt_nil_check(p_E))).f_A);
return rv3004; }
}
{ R17 * rv3005 = NULL;
return rv3005; }
rt_raise(RT_X_INIT);
}
static void r_STMT(R17 * p_S) { RT_B_TICK(); 
rt_int l_K_3006; memset(&l_K_3006, 0, sizeof l_K_3006);
l_K_3006 = ((*(R17 *)rt_nil_check(p_S))).f_KIND;
r_INTERFERENCE(p_S);
if ((l_K_3006 == g_N_NULL))
{
return;
}
else if ((l_K_3006 == g_N_LABELED))
{
{
R12 * l_Y_3007; memset(&l_Y_3007, 0, sizeof l_Y_3007);
l_Y_3007 = r_LOOKUP(((*(R17 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_3007))).f_ACCESS));
r_STMT(((*(R17 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_3006 == g_N_GOTO))
{
{
R12 * l_Y_3008; memset(&l_Y_3008, 0, sizeof l_Y_3008);
l_Y_3008 = r_LOOKUP(((*(R17 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_3009; memset(&l_N_3009, 0, sizeof l_N_3009);
R18 * l_C_3010; memset(&l_C_3010, 0, sizeof l_C_3010);
l_C_3010 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_3008 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3008))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3008))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
l_N_3009 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_3008))).f_MV);
for (;;) {
if ((l_N_3009 <= ((rt_int)0LL))) goto L_end3011;
{
if ((((*(R18 *)rt_nil_check(l_C_3010))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R18 *)rt_nil_check(l_C_3010))).f_NAME));
l_N_3009 = rt_sub(l_N_3009, ((rt_int)1LL));
}
l_C_3010 = ((*(R18 *)rt_nil_check(l_C_3010))).f_NEXT;
}
RT_B_TICK();
} L_end3011: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_3008))).f_ACCESS));
}
}
else if ((l_K_3006 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_3006 == g_N_CALL))
{
{
R26 l_V_3012; memset(&l_V_3012, 0, sizeof l_V_3012);
S_R26(&l_V_3012, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_3012).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_3012).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_3012).f_C, rt_str(";", 1)));
}
}
else if ((l_K_3006 == g_N_IF))
{
r_IF_STMT(((*(R17 *)rt_nil_check(p_S))).f_A, ((*(R17 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_3006 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_3006 == g_N_LOOP))
{
{
R9 l_END_L_3013; memset(&l_END_L_3013, 0, sizeof l_END_L_3013);
S_R9(&l_END_L_3013, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R17 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A), l_END_L_3013));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_3013);
r_OPEN_BODY(((*(R17 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CODES(rt_str("RT_B_TICK();", 12));
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_C), l_END_L_3013));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_3013));
}
}
else if ((l_K_3006 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_3006 == g_N_EXIT))
{
{
R18 * l_C_3014; memset(&l_C_3014, 0, sizeof l_C_3014);
l_C_3014 = r_LEAVE(((rt_int)2LL));
if ((l_C_3014 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R18 *)rt_nil_check(l_C_3014))).f_NAME));
}
}
else if ((l_K_3006 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_3006 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R17 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_3006 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_3006 == g_N_ASSERT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS)
{
{
R14 l_SAVED_CODE_3015; memset(&l_SAVED_CODE_3015, 0, sizeof l_SAVED_CODE_3015);
S_R14(&l_SAVED_CODE_3015, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R9 l_C_3016; memset(&l_C_3016, 0, sizeof l_C_3016);
S_R9(&l_C_3016, r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3015, 0);
}
}
else
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A)));
}
}
else if ((l_K_3006 == g_N_EXCEPT))
{
r_GUARDED(((*(R17 *)rt_nil_check(p_S))).f_A, NULL, ((*(R17 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_3006 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_3006 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_3006 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R17 * p_S) { RT_B_TICK(); 
R12 * l_Y_3017; memset(&l_Y_3017, 0, sizeof l_Y_3017);
l_Y_3017 = r_LOOKUP(((*(R17 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_3017 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_3017))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_3017))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv3018 = r_CALL_EXPR(p_S, NULL);
return rv3018; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R17 * p_ARMS, R17 * p_ELSE_BODY) { RT_B_TICK(); 
R17 * l_ARM_3019; memset(&l_ARM_3019, 0, sizeof l_ARM_3019);
l_ARM_3019 = p_ARMS;
R9 l_WORD_3020; memset(&l_WORD_3020, 0, sizeof l_WORD_3020);
S_R9(&l_WORD_3020, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_3021; memset(&l_OPEN_3021, 0, sizeof l_OPEN_3021);
l_OPEN_3021 = ((rt_int)0LL);
rt_int l_CHOSEN_3022; memset(&l_CHOSEN_3022, 0, sizeof l_CHOSEN_3022);
l_CHOSEN_3022 = 0;
for (;;) {
if ((l_ARM_3019 == NULL)) goto L_end3023;
{
{
R23 l_M_3024; memset(&l_M_3024, 0, sizeof l_M_3024);
S_R23(&l_M_3024, r_MANIFEST(((*(R17 *)rt_nil_check(l_ARM_3019))).f_A), 0);
if (l_CHOSEN_3022)
{
r_CHECK_COND(((*(R17 *)rt_nil_check(l_ARM_3019))).f_A);
r_CHECK_BODY(((*(R17 *)rt_nil_check(l_ARM_3019))).f_B);
}
else if ((l_M_3024).f_OK)
{
if ((!r_TEQS(l_WORD_3020, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_3021 = rt_add(l_OPEN_3021, ((rt_int)1LL));
S_R9(&l_WORD_3020, r_MK(rt_str("if", 2)), 0);
}
r_CODE(r_FMT1(rt_str("(void)(@);", 10), r_BOOL_EXPR(((*(R17 *)rt_nil_check(l_ARM_3019))).f_A)));
if (((l_M_3024).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R17 *)rt_nil_check(l_ARM_3019))).f_B);
l_CHOSEN_3022 = 1;
}
else
{
r_CHECK_BODY(((*(R17 *)rt_nil_check(l_ARM_3019))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3020, r_BOOL_EXPR(((*(R17 *)rt_nil_check(l_ARM_3019))).f_A)));
r_OPEN_BODY(((*(R17 *)rt_nil_check(l_ARM_3019))).f_B);
S_R9(&l_WORD_3020, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_3019 = ((*(R17 *)rt_nil_check(l_ARM_3019))).f_NEXT;
}
RT_B_TICK();
} L_end3023: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_3022)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_3020, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it3026_lo = ((rt_int)1LL), it3026_hi = l_OPEN_3021;
for (rt_int it3026 = it3026_lo; it3026 <= it3026_hi; it3026++) {
{
r_CODES(rt_str("}", 1));
}
RT_B_TICK();
if (it3026 == it3026_hi) break;
} } L_end3025: ;
}
static void r_CHECK_BODY(R17 * p_B) { RT_B_TICK(); 
R14 l_SAVED_CODE_3027; memset(&l_SAVED_CODE_3027, 0, sizeof l_SAVED_CODE_3027);
S_R14(&l_SAVED_CODE_3027, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3028; memset(&rc3028, 0, sizeof rc3028);  rc3028.f_HEAD = NULL; rc3028.f_TAIL = NULL; rc3028; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3027, 0);
}
static void r_CHECK_COND(R17 * p_E) { RT_B_TICK(); 
R9 l_C_3029; memset(&l_C_3029, 0, sizeof l_C_3029);
S_R9(&l_C_3029, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R17 * p_S) { RT_B_TICK(); 
R9 l_END_L_3030; memset(&l_END_L_3030, 0, sizeof l_END_L_3030);
S_R9(&l_END_L_3030, r_NEW_NAME(rt_str("L_end", 5)), 0);
R9 l_IT_3031; memset(&l_IT_3031, 0, sizeof l_IT_3031);
S_R9(&l_IT_3031, r_NEW_NAME(rt_str("it", 2)), 0);
R17 * l_R_3032; memset(&l_R_3032, 0, sizeof l_R_3032);
l_R_3032 = ((*(R17 *)rt_nil_check(p_S))).f_A;
R26 l_LO_3033; memset(&l_LO_3033, 0, sizeof l_LO_3033);
S_R26(&l_LO_3033, r_EXPR(((*(R17 *)rt_nil_check(l_R_3032))).f_A, NULL), 0);
R26 l_HI_3034; memset(&l_HI_3034, 0, sizeof l_HI_3034);
S_R26(&l_HI_3034, r_EXPR(((*(R17 *)rt_nil_check(l_R_3032))).f_B, (l_LO_3033).f_T), 0);
R22 * l_T_3035; memset(&l_T_3035, 0, sizeof l_T_3035);
l_T_3035 = r_REAL_TYPE((l_LO_3033).f_T);
R9 l_LOC_3036; memset(&l_LOC_3036, 0, sizeof l_LOC_3036);
R9 l_HIC_3037; memset(&l_HIC_3037, 0, sizeof l_HIC_3037);
if ((((*(R22 *)rt_nil_check(l_T_3035))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_3035))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_3035))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_3035))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R9(&l_LOC_3036, (l_LO_3033).f_C, 0);
S_R9(&l_HIC_3037, (l_HI_3034).f_C, 0);
if (((((*(R17 *)rt_nil_check(l_R_3032))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_R_3032))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LOC_3036, r_FMT1(rt_str("(@) + 1", 7), l_LOC_3036), 0);
}
if ((((*(R17 *)rt_nil_check(l_R_3032))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HIC_3037, r_FMT1(rt_str("(@) - 1", 7), l_HIC_3037), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_3031, l_LOC_3036, l_IT_3031, l_HIC_3037));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_3031, l_IT_3031, l_IT_3031, l_IT_3031));
r_OPEN_SCOPE();
if (((((*(R17 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_3038; memset(&l_Y_3038, 0, sizeof l_Y_3038);
l_Y_3038 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3038))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_3035))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_3038))).f_T = ((*(R22 *)rt_nil_check(l_T_3035))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_3038))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_3038, rt_str("", 0)), l_IT_3031));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_3038, rt_str("", 0)), l_IT_3031));
}
else
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3038))).f_ACCESS, l_IT_3031, 0);
}
r_DEFINE(l_Y_3038, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_3030);
r_OPEN_BODY(((*(R17 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODES(rt_str("RT_B_TICK();", 12));
r_CODE(r_FMT2(rt_str("if (@ == @_hi) break;", 21), l_IT_3031, l_IT_3031));
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_3030));
}
static void r_RETURN_STMT(R17 * p_S) { RT_B_TICK(); 
R19 * l_CS_3039; memset(&l_CS_3039, 0, sizeof l_CS_3039);
l_CS_3039 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_C_3040; memset(&l_C_3040, 0, sizeof l_C_3040);
if ((((*(R17 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_3040 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R19 *)rt_nil_check(l_CS_3039))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R19 *)rt_nil_check(l_CS_3039))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R19 *)rt_nil_check(l_CS_3039))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R19 *)rt_nil_check(l_CS_3039))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODE(r_CATS(((*(R19 *)rt_nil_check(l_CS_3039))).f_COPYOUT, rt_str("return;", 7)));
}
return;
}
if (((((*(R19 *)rt_nil_check(l_CS_3039))).f_RESULT == NULL) || ((*(R19 *)rt_nil_check(l_CS_3039))).f_IS_PATH))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R19 *)rt_nil_check(l_CS_3039))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R9 l_V_3041; memset(&l_V_3041, 0, sizeof l_V_3041);
S_R9(&l_V_3041, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R19 *)rt_nil_check(l_CS_3039))).f_RESULT), l_V_3041, r_CONVERT(r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A, ((*(R19 *)rt_nil_check(l_CS_3039))).f_RESULT), ((*(R19 *)rt_nil_check(l_CS_3039))).f_RESULT, ((*(R17 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_3040 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_3041));
}
}
static void r_SIGNAL_STMT(R17 * p_S) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R18 * l_C_3042; memset(&l_C_3042, 0, sizeof l_C_3042);
l_C_3042 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_3042 == NULL)) goto L_end3043;
{
if ((((*(R18 *)rt_nil_check(l_C_3042))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R18 *)rt_nil_check(l_C_3042))).f_NAME));
return;
}
if ((((*(R18 *)rt_nil_check(l_C_3042))).f_KIND == ((rt_int)1LL)))
{
goto L_end3043;
}
l_C_3042 = ((*(R18 *)rt_nil_check(l_C_3042))).f_NEXT;
}
RT_B_TICK();
} L_end3043: ;
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("SIGNAL without a name outside a handler (4.5.7)", 47));
}
}
if (r_TEQS(((*(R17 *)rt_nil_check(p_S))).f_NAME, rt_str("TERMINATED", 10)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("TERMINATED is raised by TERMINATE only (4.5.7)", 46));
}
if ((!r_HANDLER_EXISTS(((*(R17 *)rt_nil_check(p_S))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("no handler for the exception here, and it is not in the SIGNALS clause (4.5.7): ", 80), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), r_EXC_NAME(((*(R17 *)rt_nil_check(p_S))).f_NAME)));
}
static void r_ASSIGN_STMT(R17 * p_S) { RT_B_TICK(); 
R17 * l_TG_3044; memset(&l_TG_3044, 0, sizeof l_TG_3044);
l_TG_3044 = ((*(R17 *)rt_nil_check(p_S))).f_A;
if ((((*(R17 *)rt_nil_check(l_TG_3044))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_3045; memset(&l_B_3045, 0, sizeof l_B_3045);
S_R26(&l_B_3045, r_EXPR(((*(R17 *)rt_nil_check(l_TG_3044))).f_A, NULL), 0);
if ((!(l_B_3045).f_LVAL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_3045).f_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_3046; memset(&l_ARGS_3046, 0, sizeof l_ARGS_3046);
l_ARGS_3046 = r_NODE_ARG(((*(R17 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R17 *)rt_nil_check(l_TG_3044))).f_B, g_M_IN, r_NODE_ARG(((*(R17 *)rt_nil_check(l_TG_3044))).f_C, g_M_IN, r_VAL_ARG(l_B_3045, NULL))));
R12 * l_Y_3047; memset(&l_Y_3047, 0, sizeof l_Y_3047);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_3046))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_3047 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_3046, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_3047 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_3046))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_3047 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_3046, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_3047 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_3047, l_ARGS_3046, ((*(R17 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_3045).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_3045).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_3048; memset(&l_V_3048, 0, sizeof l_V_3048);
S_R26(&l_V_3048, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_B, (l_B_3045).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_3048).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_3045).f_T))).f_KIND)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_3045).f_C, r_INT_EXPR(((*(R17 *)rt_nil_check(l_TG_3044))).f_B), r_INT_EXPR(((*(R17 *)rt_nil_check(l_TG_3044))).f_C), (l_V_3048).f_C));
}
}
return;
}
{
R26 l_LV_3049; memset(&l_LV_3049, 0, sizeof l_LV_3049);
S_R26(&l_LV_3049, r_EXPR(l_TG_3044, NULL), 0);
R17 * l_SAVED_Q_3050; memset(&l_SAVED_Q_3050, 0, sizeof l_SAVED_Q_3050);
l_SAVED_Q_3050 = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
if ((!(l_LV_3049).f_LVAL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = NULL;
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_B))).f_KIND == g_N_QUAL))
{
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = ((*(R17 *)rt_nil_check(p_S))).f_B;
}
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R17 *)rt_nil_check(p_S))).f_B;
if (((((*(R22 *)rt_nil_check((l_LV_3049).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
r_REQUIRE_WHERE(r_MKN(rt_str("STORE_", 6)), ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
{
R26 l_V_3051; memset(&l_V_3051, 0, sizeof l_V_3051);
S_R26(&l_V_3051, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_B, (l_LV_3049).f_T), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
r_CODE(r_STORE_CODE((l_LV_3049).f_T, (l_LV_3049).f_C, l_V_3051, ((*(R17 *)rt_nil_check(p_S))).f_LINE, (l_LV_3049).f_SELF));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = l_SAVED_Q_3050;
}
}
static void r_WITH_STMT(R17 * p_S) { RT_B_TICK(); 
if ((!r_IS_STRUCTURED_STMT(((*(R17 *)rt_nil_check(p_S))).f_B)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a with-clause prefixes a structured statement (4.5.3 [4-58])", 60));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
{
R12 * l_Y_3052; memset(&l_Y_3052, 0, sizeof l_Y_3052);
l_Y_3052 = r_NEW_SYM(g_Y_VAR, ((*(R17 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_3053; memset(&l_V_3053, 0, sizeof l_V_3053);
S_R26(&l_V_3053, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_3052))).f_T = (l_V_3053).f_T;
((*(R12 *)rt_nil_check(l_Y_3052))).f_WITHV = ((rt_int)1LL);
if ((((*(R17 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R9 l_CN_3054; memset(&l_CN_3054, 0, sizeof l_CN_3054);
S_R9(&l_CN_3054, r_NEW_OBJECT(l_Y_3052, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_3053).f_T))
{
r_CODE(r_INIT_CODE((l_V_3053).f_T, l_CN_3054));
}
r_CODE(r_ASSIGN_CODE((l_V_3053).f_T, l_CN_3054, (l_V_3053).f_C));
}
}
else
{
if ((!(l_V_3053).f_LVAL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R9 l_P_3055; memset(&l_P_3055, 0, sizeof l_P_3055);
S_R9(&l_P_3055, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_3053).f_T), l_P_3055, (l_V_3053).f_C));
S_R9(&((*(R12 *)rt_nil_check(l_Y_3052))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_3055), 0);
S_R9(&((*(R12 *)rt_nil_check(l_Y_3052))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_3052))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_3052))).f_OWNER = rt_neg(((rt_int)1LL));
}
{
R17 * l_R_3056; memset(&l_R_3056, 0, sizeof l_R_3056);
l_R_3056 = r_NAMED_ROOT(((*(R17 *)rt_nil_check(p_S))).f_A);
if ((!(l_R_3056 == NULL)))
{
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_R_3056))).f_NAME, ((*(R17 *)rt_nil_check(p_S))).f_NAME)))
{
{
R12 * l_OLD_3057; memset(&l_OLD_3057, 0, sizeof l_OLD_3057);
l_OLD_3057 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_3056))).f_NAME);
if ((!(l_OLD_3057 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_OLD_3057))).f_KIND == g_Y_VAR))
{
{
R12 * l_H_3058; memset(&l_H_3058, 0, sizeof l_H_3058);
l_H_3058 = r_NEW_SYM(g_Y_VAR, ((*(R17 *)rt_nil_check(l_R_3056))).f_NAME);
((*(R12 *)rt_nil_check(l_H_3058))).f_T = ((*(R12 *)rt_nil_check(l_OLD_3057))).f_T;
((*(R12 *)rt_nil_check(l_H_3058))).f_WITHV = ((rt_int)2LL);
((*(R12 *)rt_nil_check(l_H_3058))).f_OWNER = ((*(R12 *)rt_nil_check(l_OLD_3057))).f_OWNER;
r_DEFINE(l_H_3058, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
}
}
}
}
}
}
}
r_DEFINE(l_Y_3052, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R17 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R17 * p_S) { RT_B_TICK(); 
R17 * l_ARM_3059; memset(&l_ARM_3059, 0, sizeof l_ARM_3059);
l_ARM_3059 = ((*(R17 *)rt_nil_check(p_S))).f_B;
R25 * l_SEEN_3060; memset(&l_SEEN_3060, 0, sizeof l_SEEN_3060);
l_SEEN_3060 = NULL;
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_3061; memset(&l_CH_3061, 0, sizeof l_CH_3061);
S_R26(&l_CH_3061, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_3062; memset(&l_T_3062, 0, sizeof l_T_3062);
l_T_3062 = r_REAL_TYPE((l_CH_3061).f_T);
R12 * l_BOUND_3063; memset(&l_BOUND_3063, 0, sizeof l_BOUND_3063);
l_BOUND_3063 = r_DISCRIMINATED(((*(R17 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_3062))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_3062))).f_KIND == g_T_BITS)))
{
{
R9 l_TMP_3064; memset(&l_TMP_3064, 0, sizeof l_TMP_3064);
S_R9(&l_TMP_3064, r_NEW_NAME(rt_str("cs", 2)), 0);
R9 l_WORD_3065; memset(&l_WORD_3065, 0, sizeof l_WORD_3065);
S_R9(&l_WORD_3065, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_3064, (l_CH_3061).f_C));
for (;;) {
if ((l_ARM_3059 == NULL)) goto L_end3066;
{
{
R17 * l_L_3067; memset(&l_L_3067, 0, sizeof l_L_3067);
l_L_3067 = ((*(R17 *)rt_nil_check(l_ARM_3059))).f_A;
R9 l_COND_3068; memset(&l_COND_3068, 0, sizeof l_COND_3068);
S_R9(&l_COND_3068, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3067 == NULL)) goto L_end3069;
{
S_R9(&l_COND_3068, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_3068, l_TMP_3064, (r_EXPR(l_L_3067, l_T_3062)).f_C), 0);
l_L_3067 = ((*(R17 *)rt_nil_check(l_L_3067))).f_NEXT;
}
RT_B_TICK();
} L_end3069: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3065, l_COND_3068));
S_R9(&l_WORD_3065, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3059))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3059))).f_C);
}
l_ARM_3059 = ((*(R17 *)rt_nil_check(l_ARM_3059))).f_NEXT;
}
RT_B_TICK();
} L_end3066: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_3065, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if (((((*(R22 *)rt_nil_check(l_T_3062))).f_KIND == g_T_FLOAT) || (((((*(R22 *)rt_nil_check(l_T_3062))).f_KIND == g_T_INT) && (!(((*(R22 *)rt_nil_check(l_T_3062))).f_SCALE == ((rt_int)0LL)))))))
{
r_VALUE_CASE(p_S, l_CH_3061);
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_3062))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_3062))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_3062))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_3062))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_3062));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_3061).f_C));
for (;;) {
if ((l_ARM_3059 == NULL)) goto L_end3070;
{
{
R17 * l_L_3071; memset(&l_L_3071, 0, sizeof l_L_3071);
l_L_3071 = ((*(R17 *)rt_nil_check(l_ARM_3059))).f_A;
R23 l_FIRST_3072; memset(&l_FIRST_3072, 0, sizeof l_FIRST_3072);
S_R23(&l_FIRST_3072, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_3071 == NULL)) goto L_end3073;
{
if ((((*(R17 *)rt_nil_check(l_L_3071))).f_KIND == g_N_RANGE))
{
{
R23 l_LO_3074; memset(&l_LO_3074, 0, sizeof l_LO_3074);
S_R23(&l_LO_3074, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_3071))).f_A, l_T_3062), 0);
R23 l_HI_3075; memset(&l_HI_3075, 0, sizeof l_HI_3075);
S_R23(&l_HI_3075, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_3071))).f_B, l_T_3062), 0);
rt_int l_A_3076; memset(&l_A_3076, 0, sizeof l_A_3076);
l_A_3076 = (l_LO_3074).f_V;
rt_int l_B_3077; memset(&l_B_3077, 0, sizeof l_B_3077);
l_B_3077 = (l_HI_3075).f_V;
if ((!(((l_LO_3074).f_OK && (l_HI_3075).f_OK))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_3071))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R17 *)rt_nil_check(l_L_3071))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_L_3071))).f_IV == ((rt_int)3LL))))
{
l_A_3076 = rt_add(l_A_3076, ((rt_int)1LL));
}
if ((((*(R17 *)rt_nil_check(l_L_3071))).f_IV >= ((rt_int)2LL)))
{
l_B_3077 = rt_sub(l_B_3077, ((rt_int)1LL));
}
if ((!(l_FIRST_3072).f_OK))
{
S_R23(&l_FIRST_3072, r_SOME(l_A_3076), 0);
}
l_SEEN_3060 = r_DISTINCT_LABEL(l_SEEN_3060, l_A_3076, l_B_3077, ((*(R17 *)rt_nil_check(l_L_3071))).f_LINE);
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_3076), r_NUM(l_B_3077)));
}
}
else
{
{
R23 l_M_3078; memset(&l_M_3078, 0, sizeof l_M_3078);
S_R23(&l_M_3078, r_ENUM_MANIFEST(l_L_3071, l_T_3062), 0);
if ((!(l_M_3078).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_3071))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_3072).f_OK))
{
S_R23(&l_FIRST_3072, l_M_3078, 0);
}
l_SEEN_3060 = r_DISTINCT_LABEL(l_SEEN_3060, (l_M_3078).f_V, (l_M_3078).f_V, ((*(R17 *)rt_nil_check(l_L_3071))).f_LINE);
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_3078).f_V)));
}
}
l_L_3071 = ((*(R17 *)rt_nil_check(l_L_3071))).f_NEXT;
}
RT_B_TICK();
} L_end3073: ;
if ((!(l_BOUND_3063 == NULL)))
{
{
R22 * l_SAVED_3079; memset(&l_SAVED_3079, 0, sizeof l_SAVED_3079);
l_SAVED_3079 = ((*(R12 *)rt_nil_check(l_BOUND_3063))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_3063))).f_T = r_NARROW(l_SAVED_3079, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_3072).f_V);
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3059))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3059))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_3063))).f_T = l_SAVED_3079;
}
}
else
{
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3059))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3059))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_3059 = ((*(R17 *)rt_nil_check(l_ARM_3059))).f_NEXT;
}
RT_B_TICK();
} L_end3070: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODES(rt_str("default:", 8));
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
r_CODES(rt_str("break;", 6));
}
r_CODES(rt_str("}", 1));
}
}
static R25 * r_DISTINCT_LABEL(R25 * p_SEEN, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); 
R25 * l_P_3080; memset(&l_P_3080, 0, sizeof l_P_3080);
l_P_3080 = p_SEEN;
if ((p_A > p_B))
{
{ R25 * rv3081 = p_SEEN;
return rv3081; }
}
for (;;) {
if ((l_P_3080 == NULL)) goto L_end3082;
{
if (((p_A <= (((*(R25 *)rt_nil_check(l_P_3080))).f_MHI).f_V) && ((((*(R25 *)rt_nil_check(l_P_3080))).f_MLO).f_V <= p_B)))
{
r_FAIL(p_LINE, rt_str("the choice-label values must be distinct (4.5.5.2)", 50));
}
l_P_3080 = ((*(R25 *)rt_nil_check(l_P_3080))).f_NEXT;
}
RT_B_TICK();
} L_end3082: ;
l_P_3080 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_P_3080)), ({ R25 rc3083; memset(&rc3083, 0, sizeof rc3083);  S_R9(&rc3083.f_LO, r_NO_TEXT(), 0); S_R9(&rc3083.f_HI, r_NO_TEXT(), 0); S_R23(&rc3083.f_MLO, r_SOME(p_A), 0); S_R23(&rc3083.f_MHI, r_SOME(p_B), 0); rc3083.f_ANYARG = 0; rc3083.f_NEXT = p_SEEN; rc3083; }), 0);
{ R25 * rv3084 = l_P_3080;
return rv3084; }
rt_raise(RT_X_INIT);
}
static void r_VALUE_CASE(R17 * p_S, R26 p_CH) { RT_B_TICK(); 
R9 l_TMP_3085; memset(&l_TMP_3085, 0, sizeof l_TMP_3085);
S_R9(&l_TMP_3085, r_NEW_NAME(rt_str("cs", 2)), 0);
R26 l_X_3086; memset(&l_X_3086, 0, sizeof l_X_3086);
S_R26(&l_X_3086, r_MKET(l_TMP_3085, (p_CH).f_T), 0);
R17 * l_ARM_3087; memset(&l_ARM_3087, 0, sizeof l_ARM_3087);
l_ARM_3087 = ((*(R17 *)rt_nil_check(p_S))).f_B;
R9 l_WORD_3088; memset(&l_WORD_3088, 0, sizeof l_WORD_3088);
S_R9(&l_WORD_3088, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(r_REAL_TYPE((p_CH).f_T)), l_TMP_3085, (p_CH).f_C));
for (;;) {
if ((l_ARM_3087 == NULL)) goto L_end3089;
{
{
R17 * l_L_3090; memset(&l_L_3090, 0, sizeof l_L_3090);
l_L_3090 = ((*(R17 *)rt_nil_check(l_ARM_3087))).f_A;
R9 l_COND_3091; memset(&l_COND_3091, 0, sizeof l_COND_3091);
S_R9(&l_COND_3091, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3090 == NULL)) goto L_end3092;
{
if ((((*(R17 *)rt_nil_check(l_L_3090))).f_KIND == g_N_RANGE))
{
{
R26 l_LO_3093; memset(&l_LO_3093, 0, sizeof l_LO_3093);
S_R26(&l_LO_3093, r_CASE_LABEL(((*(R17 *)rt_nil_check(l_L_3090))).f_A, (p_CH).f_T), 0);
R26 l_HI_3094; memset(&l_HI_3094, 0, sizeof l_HI_3094);
S_R26(&l_HI_3094, r_CASE_LABEL(((*(R17 *)rt_nil_check(l_L_3090))).f_B, (p_CH).f_T), 0);
rstr l_GE_3095; memset(&l_GE_3095, 0, sizeof l_GE_3095);
l_GE_3095 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_GE_3095, rt_str(">=", 2));
rstr l_LE_3096; memset(&l_LE_3096, 0, sizeof l_LE_3096);
l_LE_3096 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_LE_3096, rt_str("<=", 2));
if (((((*(R17 *)rt_nil_check(l_L_3090))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_L_3090))).f_IV == ((rt_int)3LL))))
{
rt_b_assign(&l_GE_3095, rt_str("> ", 2));
}
if ((((*(R17 *)rt_nil_check(l_L_3090))).f_IV >= ((rt_int)2LL)))
{
rt_b_assign(&l_LE_3096, rt_str("< ", 2));
}
S_R9(&l_COND_3091, r_FMT3(rt_str("@ || (@ && @)", 13), l_COND_3091, r_VALUE_COMPARE(l_X_3086, l_LO_3093, r_MK(l_GE_3095)), r_VALUE_COMPARE(l_X_3086, l_HI_3094, r_MK(l_LE_3096))), 0);
}
}
else
{
S_R9(&l_COND_3091, r_FMT2(rt_str("@ || @", 6), l_COND_3091, r_VALUE_COMPARE(l_X_3086, r_CASE_LABEL(l_L_3090, (p_CH).f_T), r_MK(rt_str("==", 2)))), 0);
}
l_L_3090 = ((*(R17 *)rt_nil_check(l_L_3090))).f_NEXT;
}
RT_B_TICK();
} L_end3092: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3088, l_COND_3091));
S_R9(&l_WORD_3088, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3087))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3087))).f_C);
}
l_ARM_3087 = ((*(R17 *)rt_nil_check(l_ARM_3087))).f_NEXT;
}
RT_B_TICK();
} L_end3089: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_3088, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
static R26 r_CASE_LABEL(R17 * p_L, R22 * p_T) { RT_B_TICK(); 
R26 l_V_3097; memset(&l_V_3097, 0, sizeof l_V_3097);
S_R26(&l_V_3097, r_EXPR(p_L, p_T), 0);
if ((!r_SAME_CLASS(r_REAL_TYPE((l_V_3097).f_T), r_REAL_TYPE(p_T))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_L))).f_LINE, rt_str("a case label is a value of the type of the choice (4.5.5.2)", 59));
}
{ R26 rv3098 = l_V_3097;
return rv3098; }
rt_raise(RT_X_INIT);
}
static R9 r_VALUE_COMPARE(R26 p_A, R26 p_B, R9 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT))
{
{ R9 rv3099 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv3099; }
}
{ R9 rv3100 = r_FIXED_COMPARE(p_A, p_B, p_OP);
return rv3100; }
rt_raise(RT_X_INIT);
}
static void r_CASE_ELEMENT(R17 * p_B, R17 * p_HANDLERS) { RT_B_TICK(); 
if ((p_HANDLERS == NULL))
{
r_OPEN_BODY(p_B);
}
else
{
r_GUARDED(NULL, p_B, p_HANDLERS);
}
}
static R12 * r_DISCRIMINATED(R17 * p_CH) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_CH))).f_KIND == g_N_FIELD)))
{
{ R12 * rv3101 = NULL;
return rv3101; }
}
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv3102 = NULL;
return rv3102; }
}
{
R12 * l_Y_3103; memset(&l_Y_3103, 0, sizeof l_Y_3103);
l_Y_3103 = r_LOOKUP(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_3103 == NULL))
{
{ R12 * rv3104 = NULL;
return rv3104; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3103))).f_KIND == g_Y_VAR)))
{
{ R12 * rv3105 = NULL;
return rv3105; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3103))).f_WITHV == ((rt_int)1LL))))
{
{ R12 * rv3106 = NULL;
return rv3106; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_3103))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv3107 = NULL;
return rv3107; }
}
{
R24 * l_F_3108; memset(&l_F_3108, 0, sizeof l_F_3108);
l_F_3108 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_3103))).f_T), ((*(R17 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_3108 == NULL))
{
{ R12 * rv3109 = NULL;
return rv3109; }
}
if ((!(((*(R24 *)rt_nil_check(l_F_3108))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv3110 = NULL;
return rv3110; }
}
}
{ R12 * rv3111 = l_Y_3103;
return rv3111; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R9 p_TAGN, rt_int p_V) { RT_B_TICK(); 
R22 * l_N_3112; memset(&l_N_3112, 0, sizeof l_N_3112);
l_N_3112 = r_COPY_TYP(p_T);
R24 * l_F_3113; memset(&l_F_3113, 0, sizeof l_F_3113);
l_F_3113 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_3114; memset(&l_A_3114, 0, sizeof l_A_3114);
l_A_3114 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R25 * l_HEAD_3115; memset(&l_HEAD_3115, 0, sizeof l_HEAD_3115);
l_HEAD_3115 = NULL;
R25 * l_TAIL_3116; memset(&l_TAIL_3116, 0, sizeof l_TAIL_3116);
l_TAIL_3116 = NULL;
for (;;) {
if ((l_F_3113 == NULL)) goto L_end3117;
{
if (((!(((*(R24 *)rt_nil_check(l_F_3113))).f_KIND == ((rt_int)0LL))) && (!(l_A_3114 == NULL))))
{
{
R25 * l_B_3118; memset(&l_B_3118, 0, sizeof l_B_3118);
l_B_3118 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_B_3118)), (*(R25 *)rt_nil_check(l_A_3114)), 0);
((*(R25 *)rt_nil_check(l_B_3118))).f_NEXT = NULL;
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_3113))).f_NAME, p_TAGN))
{
((*(R25 *)rt_nil_check(l_B_3118))).f_ANYARG = 0;
S_R23(&((*(R25 *)rt_nil_check(l_B_3118))).f_MLO, r_SOME(p_V), 0);
S_R9(&((*(R25 *)rt_nil_check(l_B_3118))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_3116 == NULL))
{
l_HEAD_3115 = l_B_3118;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_3116))).f_NEXT = l_B_3118;
}
l_TAIL_3116 = l_B_3118;
}
l_A_3114 = ((*(R25 *)rt_nil_check(l_A_3114))).f_NEXT;
}
l_F_3113 = ((*(R24 *)rt_nil_check(l_F_3113))).f_NEXT;
}
RT_B_TICK();
} L_end3117: ;
((*(R22 *)rt_nil_check(l_N_3112))).f_ARGS = l_HEAD_3115;
{ R22 * rv3119 = l_N_3112;
return rv3119; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R17 * p_S) { RT_B_TICK(); 
R17 * l_ARM_3120; memset(&l_ARM_3120, 0, sizeof l_ARM_3120);
l_ARM_3120 = ((*(R17 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_3121; memset(&l_SAVED_3121, 0, sizeof l_SAVED_3121);
l_SAVED_3121 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_3120 == NULL)) goto L_end3122;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_ARM_3120))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3120))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3120))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_3121;
return;
}
l_ARM_3120 = ((*(R17 *)rt_nil_check(l_ARM_3120))).f_NEXT;
}
RT_B_TICK();
} L_end3122: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_3121;
}
}
static R22 * r_PATHS_TYPE(void) { RT_B_TICK(); 
R22 * l_T_3123; memset(&l_T_3123, 0, sizeof l_T_3123);
l_T_3123 = r_NEW_TYP(g_T_PATHS);
S_R9(&((*(R22 *)rt_nil_check(l_T_3123))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv3124 = l_T_3123;
return rv3124; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R17 * p_S) { RT_B_TICK(); 
R9 l_TD_3125; memset(&l_TD_3125, 0, sizeof l_TD_3125);
S_R9(&l_TD_3125, r_NEW_NAME(rt_str("td", 2)), 0);
R17 * l_P_3126; memset(&l_P_3126, 0, sizeof l_P_3126);
l_P_3126 = ((*(R17 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_3126 == NULL)) goto L_end3127;
{
{
R12 * l_Y_3128; memset(&l_Y_3128, 0, sizeof l_Y_3128);
l_Y_3128 = r_NEW_SYM(g_Y_PATH, ((*(R17 *)rt_nil_check(l_P_3126))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3128))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_3128))).f_DECL = l_P_3126;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_3128, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_3128))).f_INPUT = 1;
r_DEFINE(l_Y_3128, ((*(R17 *)rt_nil_check(l_P_3126))).f_LINE);
}
l_P_3126 = ((*(R17 *)rt_nil_check(l_P_3126))).f_NEXT;
}
RT_B_TICK();
} L_end3127: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_3125));
r_CODES(rt_str("rt_b_par_begin();", 17));
r_CODE(r_FMT2(rt_str("{ rt_frame @a; if (RT_TRY(@a)) {", 32), l_TD_3125, l_TD_3125));
l_P_3126 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_P_3126 == NULL)) goto L_end3129;
{
r_ACTIVATE_PATH(l_P_3126, l_TD_3125);
l_P_3126 = ((*(R17 *)rt_nil_check(l_P_3126))).f_NEXT;
}
RT_B_TICK();
} L_end3129: ;
r_CODE(r_FMT3(rt_str("RT_POP(@a); } else { RT_POP(@a); rt_b_par_abandon(&@);", 54), l_TD_3125, l_TD_3125, l_TD_3125));
r_CODES(rt_str("rt_raise(rt_xcur); } }", 22));
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_3125));
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_ACTIVATE_PATH(R17 * p_P, R9 p_TD) { RT_B_TICK(); 
R9 l_FN_3130; memset(&l_FN_3130, 0, sizeof l_FN_3130);
S_R9(&l_FN_3130, r_NEW_NAME(rt_str("path_", 5)), 0);
R9 l_FT_3131; memset(&l_FT_3131, 0, sizeof l_FT_3131);
S_R9(&l_FT_3131, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_3132; memset(&l_Y_3132, 0, sizeof l_Y_3132);
l_Y_3132 = r_LOOKUP(((*(R17 *)rt_nil_check(p_P))).f_NAME);
R9 l_H_3133; memset(&l_H_3133, 0, sizeof l_H_3133);
S_R9(&l_H_3133, r_OBJ_ACCESS(l_Y_3132), 0);
R9 l_IT_3134; memset(&l_IT_3134, 0, sizeof l_IT_3134);
S_R9(&l_IT_3134, r_NEW_NAME(rt_str("pi", 2)), 0);
R9 l_PRIO_3135; memset(&l_PRIO_3135, 0, sizeof l_PRIO_3135);
S_R9(&l_PRIO_3135, r_MK(rt_str("0", 1)), 0);
R9 l_START_3136; memset(&l_START_3136, 0, sizeof l_START_3136);
R22 * l_LT_3137; memset(&l_LT_3137, 0, sizeof l_LT_3137);
l_LT_3137 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_3131, l_FT_3131));
if ((!(((*(R17 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R9(&l_PRIO_3135, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R17 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R17 * l_R_3138; memset(&l_R_3138, 0, sizeof l_R_3138);
l_R_3138 = ((*(R17 *)rt_nil_check(p_P))).f_A;
R26 l_LV_3139; memset(&l_LV_3139, 0, sizeof l_LV_3139);
S_R26(&l_LV_3139, r_EXPR(((*(R17 *)rt_nil_check(l_R_3138))).f_A, NULL), 0);
R9 l_LO_3140; memset(&l_LO_3140, 0, sizeof l_LO_3140);
S_R9(&l_LO_3140, (l_LV_3139).f_C, 0);
R9 l_HI_3141; memset(&l_HI_3141, 0, sizeof l_HI_3141);
S_R9(&l_HI_3141, (r_EXPR(((*(R17 *)rt_nil_check(l_R_3138))).f_B, (l_LV_3139).f_T)).f_C, 0);
R22 * l_RT_3142; memset(&l_RT_3142, 0, sizeof l_RT_3142);
l_RT_3142 = r_REAL_TYPE((l_LV_3139).f_T);
if ((((*(R22 *)rt_nil_check(l_RT_3142))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_RT_3142))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_str("a loop prefix over an UNORDERED type (4.6.1)", 44));
}
l_LT_3137 = ((*(R22 *)rt_nil_check(l_RT_3142))).f_BASE;
S_R9(&l_HI_3141, (r_EXPR(((*(R17 *)rt_nil_check(l_R_3138))).f_B, l_LT_3137)).f_C, 0);
}
else if (((!(((*(R22 *)rt_nil_check(l_RT_3142))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_RT_3142))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_str("the range of a loop prefix is integer or enumerated (4.6.1)", 59));
}
if (((((*(R17 *)rt_nil_check(l_R_3138))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_R_3138))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LO_3140, r_FMT1(rt_str("(@) + 1", 7), l_LO_3140), 0);
}
if ((((*(R17 *)rt_nil_check(l_R_3138))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HI_3141, r_FMT1(rt_str("(@) - 1", 7), l_HI_3141), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_3133, l_LO_3140, l_HI_3141));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_3134, l_H_3133, l_IT_3134, l_H_3133), l_IT_3134));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_3134));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_3131, r_UP_FRAME()));
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME), l_IT_3134));
}
if ((!(((*(R17 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_3143; memset(&l_V_3143, 0, sizeof l_V_3143);
r_OPEN_SCOPE();
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_3144; memset(&l_I_3144, 0, sizeof l_I_3144);
l_I_3144 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_3144))).f_T = l_LT_3137;
((*(R12 *)rt_nil_check(l_I_3144))).f_INPUT = 1;
S_R9(&((*(R12 *)rt_nil_check(l_I_3144))).f_ACCESS, l_IT_3134, 0);
((*(R12 *)rt_nil_check(l_I_3144))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_3144, ((*(R17 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_3143, r_EXPR(((*(R17 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3143).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
if ((!r_IMPLEMENTATION_SEMAPHORE(((*(R17 *)rt_nil_check(p_P))).f_D)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_b_cat(rt_str("CONNECT names an implementation-defined semaphore, of the machine's ", 68), rt_str("library segment (4.6.1)", 23)));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_3143).f_C));
}
}
S_R9(&l_START_3136, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_3133, l_IT_3134, l_FN_3130, p_TD), 0);
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT4(rt_str("@@, @); if (@ == ", 17), l_START_3136, p_TD, l_PRIO_3135, l_IT_3134));
r_CODE(r_FMT1(rt_str("@.hi) break; }", 14), l_H_3133));
}
else
{
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_3136, p_TD, l_PRIO_3135));
}
r_PATH_BODY(p_P, l_FN_3130, l_FT_3131, l_LT_3137);
}
static rt_int r_IMPLEMENTATION_SEMAPHORE(R17 * p_E) { RT_B_TICK(); 
R17 * l_R_3145; memset(&l_R_3145, 0, sizeof l_R_3145);
l_R_3145 = p_E;
for (;;) {
if (((((*(R17 *)rt_nil_check(l_R_3145))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_3145))).f_KIND == g_N_APPLY))) goto L_end3146;
{
if (((!(((*(R17 *)rt_nil_check(l_R_3145))).f_KIND == g_N_INDEX)) && (!(((*(R17 *)rt_nil_check(l_R_3145))).f_KIND == g_N_FIELD))))
{
{ rt_int rv3147 = 0;
return rv3147; }
}
l_R_3145 = ((*(R17 *)rt_nil_check(l_R_3145))).f_A;
}
RT_B_TICK();
} L_end3146: ;
{
R12 * l_Y_3148; memset(&l_Y_3148, 0, sizeof l_Y_3148);
l_Y_3148 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(l_R_3145))).f_NAME);
if ((l_Y_3148 == NULL))
{
{ rt_int rv3149 = 0;
return rv3149; }
}
if ((((*(R12 *)rt_nil_check(l_Y_3148))).f_HOME == NULL))
{
{ rt_int rv3150 = 0;
return rv3150; }
}
{ rt_int rv3151 = r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LIBSEGS, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3148))).f_HOME))).f_NAME);
return rv3151; }
}
rt_raise(RT_X_INIT);
}
static R9 r_UP_FRAME(void) { RT_B_TICK(); 
if ((((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R9 rv3152 = r_MK(rt_str("NULL", 4));
return rv3152; }
}
{ R9 rv3153 = r_MK(rt_str("F", 1));
return rv3153; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R17 * p_P, R9 p_FN, R9 p_FT, R22 * p_LT) { RT_B_TICK(); 
R14 l_SAVED_CODE_3154; memset(&l_SAVED_CODE_3154, 0, sizeof l_SAVED_CODE_3154);
S_R14(&l_SAVED_CODE_3154, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R18 * l_SAVED_CTXS_3155; memset(&l_SAVED_CTXS_3155, 0, sizeof l_SAVED_CTXS_3155);
l_SAVED_CTXS_3155 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R19 * l_OUTER_3156; memset(&l_OUTER_3156, 0, sizeof l_OUTER_3156);
l_OUTER_3156 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_H_3157; memset(&l_H_3157, 0, sizeof l_H_3157);
l_H_3157 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_A;
R19 * l_CS_3158; memset(&l_CS_3158, 0, sizeof l_CS_3158);
l_CS_3158 = ((R19 *)rt_b_new(sizeof (R19)));
R9 l_UPT_3159; memset(&l_UPT_3159, 0, sizeof l_UPT_3159);
S_R9(&l_UPT_3159, r_MK(rt_str("void", 4)), 0);
if ((((*(R19 *)rt_nil_check(l_OUTER_3156))).f_LEVEL > ((rt_int)0LL)))
{
S_R9(&l_UPT_3159, ((*(R19 *)rt_nil_check(l_OUTER_3156))).f_FTYPE, 0);
}
S_R19(&(*(R19 *)rt_nil_check(l_CS_3158)), ({ R19 rc3160; memset(&rc3160, 0, sizeof rc3160);  rc3160.f_LEVEL = rt_add(((*(R19 *)rt_nil_check(l_OUTER_3156))).f_LEVEL, ((rt_int)1LL)); rc3160.f_R = NULL; rc3160.f_FRAMED = 1; S_R9(&rc3160.f_FTYPE, p_FT, 0); S_R14(&rc3160.f_FIELDS, ({ R14 rc3161; memset(&rc3161, 0, sizeof rc3161);  rc3161.f_HEAD = NULL; rc3161.f_TAIL = NULL; rc3161; }), 0); rc3160.f_UP = l_OUTER_3156; rc3160.f_IMPORTS = ((*(R17 *)rt_nil_check(l_H_3157))).f_B; rc3160.f_SIGNALS = ((*(R17 *)rt_nil_check(l_H_3157))).f_A; rc3160.f_RESULT = NULL; rc3160.f_IS_PATH = 1; S_R9(&rc3160.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3160; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_3159), &((*(R19 *)rt_nil_check(l_CS_3158))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_3158;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3162; memset(&rc3162, 0, sizeof rc3162);  rc3162.f_HEAD = NULL; rc3162.f_TAIL = NULL; rc3162; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R17 *)rt_nil_check(l_H_3157))).f_B, ((*(R17 *)rt_nil_check(l_H_3157))).f_A, ((*(R17 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_3163; memset(&l_I_3163, 0, sizeof l_I_3163);
l_I_3163 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_3163))).f_T = p_LT;
((*(R12 *)rt_nil_check(l_I_3163))).f_INPUT = 1;
S_R9(&((*(R12 *)rt_nil_check(l_I_3163))).f_FIELD, r_FMT1(rt_str("l_@", 3), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
S_R9(&((*(R12 *)rt_nil_check(l_I_3163))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3158))).f_FIELDS);
r_DEFINE(l_I_3163, ((*(R17 *)rt_nil_check(p_P))).f_LINE);
}
}
r_CLOSED_BODY(((*(R17 *)rt_nil_check(p_P))).f_B);
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
r_EMIT(g_O_PROTOS, r_FMT1(rt_str("static void @(void *arg);", 25), p_FN));
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("static void @(void *arg) { @ *F = arg; (void)F;", 47), p_FN, p_FT));
r_EMIT(g_O_FUNCS, r_MK(rt_str("rt_frame pf; if (RT_TRY(pf)) { rt_b_path_begin();", 49)));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMIT(g_O_FUNCS, r_MK(rt_str("RT_POP(pf); } else { RT_POP(pf); rt_b_path_failed(rt_xcur, ", 59)));
{
R17 * l_L_3164; memset(&l_L_3164, 0, sizeof l_L_3164);
l_L_3164 = ((*(R17 *)rt_nil_check(l_H_3157))).f_A;
R9 l_C_3165; memset(&l_C_3165, 0, sizeof l_C_3165);
S_R9(&l_C_3165, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3164 == NULL)) goto L_end3166;
{
S_R9(&l_C_3165, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_3165, r_EXC_NAME(((*(R17 *)rt_nil_check(l_L_3164))).f_NAME)), 0);
l_L_3164 = ((*(R17 *)rt_nil_check(l_L_3164))).f_NEXT;
}
RT_B_TICK();
} L_end3166: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_3165));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R19 *)rt_nil_check(l_CS_3158))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_3156;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3154, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_3155;
}
static R9 r_JOIN_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_3167; memset(&l_C_3167, 0, sizeof l_C_3167);
l_C_3167 = (p_B).f_HEAD;
R9 l_R_3168; memset(&l_R_3168, 0, sizeof l_R_3168);
S_R9(&l_R_3168, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_3167 == NULL)) goto L_end3169;
{
S_R9(&l_R_3168, r_CAT(l_R_3168, ((*(R15 *)rt_nil_check(l_C_3167))).f_T), 0);
l_C_3167 = ((*(R15 *)rt_nil_check(l_C_3167))).f_NEXT;
}
RT_B_TICK();
} L_end3169: ;
{ R9 rv3170 = l_R_3168;
return rv3170; }
rt_raise(RT_X_INIT);
}
static R9 r_PATH_REF(R17 * p_E) { RT_B_TICK(); 
R9 l_NAME_3171; memset(&l_NAME_3171, 0, sizeof l_NAME_3171);
S_R9(&l_NAME_3171, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
R9 l_SUB_3172; memset(&l_SUB_3172, 0, sizeof l_SUB_3172);
S_R9(&l_SUB_3172, r_MK(rt_str("0", 1)), 0);
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R17 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R9(&l_SUB_3172, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_3173; memset(&l_Y_3173, 0, sizeof l_Y_3173);
l_Y_3173 = r_LOOKUP(l_NAME_3171);
if ((l_Y_3173 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_3171);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3173))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_3171);
}
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3173))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R9 rv3174 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_3173), l_SUB_3172);
return rv3174; }
}
rt_raise(RT_X_INIT);
}
static void r_TERMINATE_STMT(R17 * p_S) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(p_S))).f_A == NULL))
{
r_CODES(rt_str("rt_b_terminate(NULL);", 21));
}
else
{
r_CODE(r_FMT1(rt_str("rt_b_terminate(@);", 18), r_PATH_REF(((*(R17 *)rt_nil_check(p_S))).f_A)));
}
}
static R26 r_PARALLEL_BUILTIN(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R9 l_NAME_3175; memset(&l_NAME_3175, 0, sizeof l_NAME_3175);
S_R9(&l_NAME_3175, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_3176; memset(&l_LINE_3176, 0, sizeof l_LINE_3176);
l_LINE_3176 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_3175, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_3177; memset(&l_V_3177, 0, sizeof l_V_3177);
S_R26(&l_V_3177, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3177).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_3176, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv3178 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_3177).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_3177).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3178; }
}
}
else if (r_TEQS(l_NAME_3175, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv3179 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3179; }
}
{ R26 rv3180 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3180; }
}
else if (r_TEQS(l_NAME_3175, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R17 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv3181 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv3181; }
}
{ R26 rv3182 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R17 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv3182; }
}
else if ((r_TEQS(l_NAME_3175, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_3175, rt_str("RELEASE", 7))))
{
if ((((!(((*(R17 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_3176, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_3175);
}
{
R26 l_V_3183; memset(&l_V_3183, 0, sizeof l_V_3183);
S_R26(&l_V_3183, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3183).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_3176, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_3183).f_LVAL))
{
r_FAIL(l_LINE_3176, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_3175, rt_str("REQUEST", 7)))
{
{ R26 rv3184 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_3183).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3184; }
}
{ R26 rv3185 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_3183).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3185; }
}
}
else if (r_TEQS(l_NAME_3175, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_3176);
{ R26 rv3186 = r_START_IO_CALL(p_E);
return rv3186; }
}
r_FAILT(l_LINE_3176, rt_str("unknown routine ", 16), l_NAME_3175);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R17 * p_E) { RT_B_TICK(); 
R27 * l_ARGS_3187; memset(&l_ARGS_3187, 0, sizeof l_ARGS_3187);
l_ARGS_3187 = r_CALL_ARGS(p_E);
R12 * l_Y_3188; memset(&l_Y_3188, 0, sizeof l_Y_3188);
l_Y_3188 = r_FIND_ROUTINE(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_ARGS_3187, ((*(R17 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_3189; memset(&l_R_3189, 0, sizeof l_R_3189);
if ((l_Y_3188 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_3189, r_CALL_SYM(l_Y_3188, l_ARGS_3187, ((*(R17 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv3190 = l_R_3189;
return rv3190; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R17 * p_IMPORTS, R17 * p_SIGNALS, R9 p_NAME) { RT_B_TICK(); 
R20 * l_I_3191; memset(&l_I_3191, 0, sizeof l_I_3191);
l_I_3191 = ((R20 *)rt_b_new(sizeof (R20)));
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R20(&(*(R20 *)rt_nil_check(l_I_3191)), ({ R20 rc3192; memset(&rc3192, 0, sizeof rc3192);  rc3192.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc3192.f_IMPORTS = p_IMPORTS; rc3192.f_SIGNALS = p_SIGNALS; S_R9(&rc3192.f_NAME, p_NAME, 0); rc3192.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc3192; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_3191;
}
static void r_LEAVE_ISCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R20 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R9 r_ROUTINE_CNAME(R9 p_NAME) { RT_B_TICK(); 
R9 l_BASE_3193; memset(&l_BASE_3193, 0, sizeof l_BASE_3193);
S_R9(&l_BASE_3193, r_FMT1(rt_str("r_@", 3), r_CID(p_NAME)), 0);
rstr l_S_3194; memset(&l_S_3194, 0, sizeof l_S_3194);
l_S_3194 = rt_b_str_new((l_BASE_3193).f_LEN, 0);
rt_b_assign(&l_S_3194, r_STR(l_BASE_3193, (l_BASE_3193).f_LEN));
R17 * l_N_3195; memset(&l_N_3195, 0, sizeof l_N_3195);
l_N_3195 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it3197_lo = ((rt_int)0LL), it3197_hi = rt_sub((l_BASE_3193).f_LEN, ((rt_int)1LL));
for (rt_int it3197 = it3197_lo; it3197 <= it3197_hi; it3197++) {
{
if (rt_b_eq(rt_b_slice(l_S_3194, it3197, it3197), rt_str("$", 1)))
{
S_R9(&l_BASE_3193, r_MK(rt_b_cat(rt_b_cat(rt_b_slice(l_S_3194, ((rt_int)0LL), rt_sub(it3197, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_3194, rt_add(it3197, ((rt_int)1LL)), rt_sub((l_BASE_3193).f_LEN, ((rt_int)1LL))))), 0);
}
}
RT_B_TICK();
if (it3197 == it3197_hi) break;
} } L_end3196: ;
for (;;) {
if ((l_N_3195 == NULL)) goto L_end3198;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_N_3195))).f_NAME, l_BASE_3193))
{
{ R9 rv3199 = r_FMT2(rt_str("@_@", 3), l_BASE_3193, r_NEW_NAME(rt_str("", 0)));
return rv3199; }
}
l_N_3195 = ((*(R17 *)rt_nil_check(l_N_3195))).f_NEXT;
}
RT_B_TICK();
} L_end3198: ;
l_N_3195 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_3195))).f_NAME, l_BASE_3193, 0);
((*(R17 *)rt_nil_check(l_N_3195))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_3195;
{ R9 rv3200 = l_BASE_3193;
return rv3200; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R17 * p_B) { RT_B_TICK(); 
if ((p_B == NULL))
{
{ rt_int rv3201 = 0;
return rv3201; }
}
if ((!(((*(R17 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv3202 = 1;
return rv3202; }
}
{ rt_int rv3203 = r_HAS_HANDLERS(((*(R17 *)rt_nil_check(p_B))).f_B);
return rv3203; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R17 * p_S0) { RT_B_TICK(); 
R17 * l_S_3204; memset(&l_S_3204, 0, sizeof l_S_3204);
l_S_3204 = p_S0;
for (;;) {
if ((l_S_3204 == NULL)) goto L_end3205;
{
if (((((*(R17 *)rt_nil_check(l_S_3204))).f_KIND == g_N_EXCEPT) || (((*(R17 *)rt_nil_check(l_S_3204))).f_KIND == g_N_PAR)))
{
{ rt_int rv3206 = 1;
return rv3206; }
}
if (((((*(R17 *)rt_nil_check(l_S_3204))).f_KIND == g_N_LABELED) || (((*(R17 *)rt_nil_check(l_S_3204))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R17 *)rt_nil_check(l_S_3204))).f_A) || r_HAS_HANDLERS(((*(R17 *)rt_nil_check(l_S_3204))).f_B)))
{
{ rt_int rv3207 = 1;
return rv3207; }
}
}
else if ((((*(R17 *)rt_nil_check(l_S_3204))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3204))).f_A))).f_B))
{
{ rt_int rv3208 = 1;
return rv3208; }
}
}
else if (((((*(R17 *)rt_nil_check(l_S_3204))).f_KIND == g_N_LOOP) || (((*(R17 *)rt_nil_check(l_S_3204))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3204))).f_B))).f_B))
{
{ rt_int rv3209 = 1;
return rv3209; }
}
}
else if (((((*(R17 *)rt_nil_check(l_S_3204))).f_KIND == g_N_IF) || (((*(R17 *)rt_nil_check(l_S_3204))).f_KIND == g_N_CASE)))
{
{
R17 * l_A_3210; memset(&l_A_3210, 0, sizeof l_A_3210);
l_A_3210 = ((*(R17 *)rt_nil_check(l_S_3204))).f_A;
if ((((*(R17 *)rt_nil_check(l_S_3204))).f_KIND == g_N_CASE))
{
l_A_3210 = ((*(R17 *)rt_nil_check(l_S_3204))).f_B;
if ((!(((*(R17 *)rt_nil_check(l_S_3204))).f_D == NULL)))
{
{ rt_int rv3211 = 1;
return rv3211; }
}
if ((!(((*(R17 *)rt_nil_check(l_S_3204))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3204))).f_C))).f_B))
{
{ rt_int rv3212 = 1;
return rv3212; }
}
}
}
else if ((!(((*(R17 *)rt_nil_check(l_S_3204))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3204))).f_B))).f_B))
{
{ rt_int rv3213 = 1;
return rv3213; }
}
}
for (;;) {
if ((l_A_3210 == NULL)) goto L_end3214;
{
if ((!(((*(R17 *)rt_nil_check(l_A_3210))).f_C == NULL)))
{
{ rt_int rv3215 = 1;
return rv3215; }
}
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_3210))).f_B))).f_B))
{
{ rt_int rv3216 = 1;
return rv3216; }
}
l_A_3210 = ((*(R17 *)rt_nil_check(l_A_3210))).f_NEXT;
}
RT_B_TICK();
} L_end3214: ;
}
}
l_S_3204 = ((*(R17 *)rt_nil_check(l_S_3204))).f_NEXT;
}
RT_B_TICK();
} L_end3205: ;
{ rt_int rv3217 = 0;
return rv3217; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R17 * p_R) { RT_B_TICK(); 
R12 * l_Y_3218; memset(&l_Y_3218, 0, sizeof l_Y_3218);
l_Y_3218 = r_NEW_SYM(g_Y_ROUTINE, ((*(R17 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_3219; memset(&l_S_3219, 0, sizeof l_S_3219);
l_S_3219 = rt_b_str_new((((*(R17 *)rt_nil_check(p_R))).f_NAME).f_LEN, 0);
rt_b_assign(&l_S_3219, r_STR(((*(R17 *)rt_nil_check(p_R))).f_NAME, (((*(R17 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R12 *)rt_nil_check(l_Y_3218))).f_DECL = p_R;
S_R9(&((*(R12 *)rt_nil_check(l_Y_3218))).f_ACCESS, r_ROUTINE_CNAME(((*(R17 *)rt_nil_check(p_R))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_Y_3218))).f_FRAMED = r_NEEDS_FRAME(((*(R17 *)rt_nil_check(p_R))).f_C);
if ((((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3218))).f_FIELD, ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_3218, ((*(R17 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it3221_lo = ((rt_int)1LL), it3221_hi = rt_sub((((*(R17 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it3221 = it3221_lo; it3221 <= it3221_hi; it3221++) {
{
if (rt_b_eq(rt_b_slice(l_S_3219, it3221, it3221), rt_str("$", 1)))
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3218))).f_PREFIX, r_MKN(rt_b_slice(l_S_3219, ((rt_int)0LL), rt_sub(it3221, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_3222; memset(&l_SHORT_3222, 0, sizeof l_SHORT_3222);
l_SHORT_3222 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_3219, rt_add(it3221, ((rt_int)1LL)), rt_sub((((*(R17 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_3222))).f_ORIG = l_Y_3218;
S_R9(&((*(R12 *)rt_nil_check(l_SHORT_3222))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_3218))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_3222))).f_DECL = p_R;
r_DEFINE(l_SHORT_3222, ((*(R17 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end3220;
}
}
RT_B_TICK();
if (it3221 == it3221_hi) break;
} } L_end3220: ;
}
static void r_DECLARE_MEMBERS(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3223; memset(&l_R_3223, 0, sizeof l_R_3223);
l_R_3223 = p_RS;
for (;;) {
if ((l_R_3223 == NULL)) goto L_end3224;
{
if ((((*(R17 *)rt_nil_check(l_R_3223))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_3223);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_3223);
}
l_R_3223 = ((*(R17 *)rt_nil_check(l_R_3223))).f_NEXT;
}
RT_B_TICK();
} L_end3224: ;
}
static void r_ROUTINE_HEADERS(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3225; memset(&l_R_3225, 0, sizeof l_R_3225);
l_R_3225 = p_RS;
for (;;) {
if ((l_R_3225 == NULL)) goto L_end3226;
{
if ((((*(R17 *)rt_nil_check(l_R_3225))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3227; memset(&l_M_3227, 0, sizeof l_M_3227);
l_M_3227 = r_FIND_DECL(l_R_3225);
r_ENTER_MODULE(l_M_3227);
r_ROUTINE_HEADERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3225))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3227);
}
}
else
{
{
R12 * l_Y_3228; memset(&l_Y_3228, 0, sizeof l_Y_3228);
l_Y_3228 = r_FIND_DECL(l_R_3225);
r_ROUTINE_HEADER(l_Y_3228);
}
}
l_R_3225 = ((*(R17 *)rt_nil_check(l_R_3225))).f_NEXT;
}
RT_B_TICK();
} L_end3226: ;
}
static void r_DISTINCT_SIGNATURES(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3229; memset(&l_R_3229, 0, sizeof l_R_3229);
l_R_3229 = p_RS;
for (;;) {
if ((l_R_3229 == NULL)) goto L_end3230;
{
if ((((*(R17 *)rt_nil_check(l_R_3229))).f_KIND == g_N_ROUTINE))
{
{
R17 * l_Q_3231; memset(&l_Q_3231, 0, sizeof l_Q_3231);
l_Q_3231 = ((*(R17 *)rt_nil_check(l_R_3229))).f_NEXT;
for (;;) {
if ((l_Q_3231 == NULL)) goto L_end3232;
{
if (((((*(R17 *)rt_nil_check(l_Q_3231))).f_KIND == g_N_ROUTINE) && r_TEQ(((*(R17 *)rt_nil_check(l_Q_3231))).f_NAME, ((*(R17 *)rt_nil_check(l_R_3229))).f_NAME)))
{
{
R12 * l_A_3233; memset(&l_A_3233, 0, sizeof l_A_3233);
l_A_3233 = r_FIND_DECL(l_R_3229);
R12 * l_B_3234; memset(&l_B_3234, 0, sizeof l_B_3234);
l_B_3234 = r_FIND_DECL(l_Q_3231);
r_ROUTINE_HEADER(l_A_3233);
r_ROUTINE_HEADER(l_B_3234);
if (r_SAME_SIGNATURE(l_A_3233, l_B_3234))
{
r_FAILT(((*(R17 *)rt_nil_check(l_Q_3231))).f_LINE, rt_str("two routines of one scope with the same signature (4.1): ", 57), ((*(R17 *)rt_nil_check(l_Q_3231))).f_NAME);
}
}
}
l_Q_3231 = ((*(R17 *)rt_nil_check(l_Q_3231))).f_NEXT;
}
RT_B_TICK();
} L_end3232: ;
}
}
l_R_3229 = ((*(R17 *)rt_nil_check(l_R_3229))).f_NEXT;
}
RT_B_TICK();
} L_end3230: ;
}
static R12 * r_FIND_DECL(R17 * p_D) { RT_B_TICK(); 
R12 * l_Y_3235; memset(&l_Y_3235, 0, sizeof l_Y_3235);
l_Y_3235 = r_LOOKUP(((*(R17 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_3235 == NULL)) goto L_end3236;
{
if (((((*(R12 *)rt_nil_check(l_Y_3235))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_3235))).f_ORIG == NULL)))
{
{ R12 * rv3237 = l_Y_3235;
return rv3237; }
}
l_Y_3235 = r_LOOKUP_NEXT(l_Y_3235);
}
RT_B_TICK();
} L_end3236: ;
r_FAILT(((*(R17 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R17 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R17 * p_DECLS) { RT_B_TICK(); 
R17 * l_D_3238; memset(&l_D_3238, 0, sizeof l_D_3238);
l_D_3238 = p_DECLS;
for (;;) {
if ((l_D_3238 == NULL)) goto L_end3239;
{
if (((((*(R17 *)rt_nil_check(l_D_3238))).f_KIND == g_N_TYPE) && (((*(R17 *)rt_nil_check(l_D_3238))).f_A == NULL)))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_3238))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_3240; memset(&l_Y_3240, 0, sizeof l_Y_3240);
l_Y_3240 = r_FIND_DECL(l_D_3238);
R22 * l_T_3241; memset(&l_T_3241, 0, sizeof l_T_3241);
l_T_3241 = r_RESOLVE_USER(r_TYPE_REF(l_D_3238));
}
}
}
l_D_3238 = ((*(R17 *)rt_nil_check(l_D_3238))).f_NEXT;
}
RT_B_TICK();
} L_end3239: ;
}
static R17 * r_TYPE_REF(R17 * p_D) { RT_B_TICK(); 
R17 * l_TS_3242; memset(&l_TS_3242, 0, sizeof l_TS_3242);
l_TS_3242 = r_NEW_NODE(g_TS_NAME, ((*(R17 *)rt_nil_check(p_D))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_TS_3242))).f_NAME, ((*(R17 *)rt_nil_check(p_D))).f_NAME, 0);
{ R17 * rv3243 = l_TS_3242;
return rv3243; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R17 * p_M) { RT_B_TICK(); 
R12 * l_Y_3244; memset(&l_Y_3244, 0, sizeof l_Y_3244);
l_Y_3244 = r_NEW_SYM(g_Y_MODULE, ((*(R17 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_3245; memset(&l_SAVED_3245, 0, sizeof l_SAVED_3245);
l_SAVED_3245 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_3244))).f_DECL = p_M;
r_DEFINE(l_Y_3244, ((*(R17 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_3246; memset(&l_MARK_3246, 0, sizeof l_MARK_3246);
l_MARK_3246 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_3244;
r_DECLARE_TYPES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_3244))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_3246);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_3245;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_3244);
}
static void r_ENTER_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_Y_3247; memset(&l_Y_3247, 0, sizeof l_Y_3247);
l_Y_3247 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_3247 == NULL)) goto L_end3248;
{
{
R12 * l_NEXT_3249; memset(&l_NEXT_3249, 0, sizeof l_NEXT_3249);
l_NEXT_3249 = ((*(R12 *)rt_nil_check(l_Y_3247))).f_SNEXT;
r_DEFINE(l_Y_3247, ((rt_int)0LL));
l_Y_3247 = l_NEXT_3249;
}
}
RT_B_TICK();
} L_end3248: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_MARK_3250; memset(&l_MARK_3250, 0, sizeof l_MARK_3250);
l_MARK_3250 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_3250 == NULL)) goto L_end3251;
{
if ((((*(R12 *)rt_nil_check(l_MARK_3250))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end3251;
}
l_MARK_3250 = ((*(R12 *)rt_nil_check(l_MARK_3250))).f_SNEXT;
}
RT_B_TICK();
} L_end3251: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_3250);
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
{ rt_int rv3252 = 1;
return rv3252; }
}
}
{ rt_int rv3253 = 0;
return rv3253; }
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
R17 * l_D_3254; memset(&l_D_3254, 0, sizeof l_D_3254);
l_D_3254 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_3255; memset(&l_Y_3255, 0, sizeof l_Y_3255);
l_Y_3255 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3255 == NULL)) goto L_end3256;
{
if (r_EXPORTED_BY(l_D_3254, l_Y_3255))
{
((*(R12 *)rt_nil_check(l_Y_3255))).f_EXPORTED = 1;
{
R12 * l_A_3257; memset(&l_A_3257, 0, sizeof l_A_3257);
l_A_3257 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_3255))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_3255))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_3257)), (*(R12 *)rt_nil_check(l_Y_3255)), 0);
((*(R12 *)rt_nil_check(l_A_3257))).f_ORIG = r_ORIGINAL(l_Y_3255);
((*(R12 *)rt_nil_check(l_A_3257))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_3257, ((*(R17 *)rt_nil_check(l_D_3254))).f_LINE);
}
}
l_Y_3255 = ((*(R12 *)rt_nil_check(l_Y_3255))).f_SNEXT;
}
RT_B_TICK();
} L_end3256: ;
{
R17 * l_X_3258; memset(&l_X_3258, 0, sizeof l_X_3258);
l_X_3258 = ((*(R17 *)rt_nil_check(l_D_3254))).f_B;
for (;;) {
if ((l_X_3258 == NULL)) goto L_end3259;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R17 *)rt_nil_check(l_X_3258))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_X_3258))).f_LINE, rt_str("the module does not declare ", 28), ((*(R17 *)rt_nil_check(l_X_3258))).f_NAME);
}
r_CHECK_EXPORT_ITEM(p_M, l_X_3258);
l_X_3258 = ((*(R17 *)rt_nil_check(l_X_3258))).f_NEXT;
}
RT_B_TICK();
} L_end3259: ;
}
}
static void r_CHECK_EXPORT_ITEM(R12 * p_M, R17 * p_X) { RT_B_TICK(); 
R12 * l_Y_3260; memset(&l_Y_3260, 0, sizeof l_Y_3260);
l_Y_3260 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
rt_int l_IS_TYPE_3261; memset(&l_IS_TYPE_3261, 0, sizeof l_IS_TYPE_3261);
l_IS_TYPE_3261 = 0;
rt_int l_IS_ROUTINE_3262; memset(&l_IS_ROUTINE_3262, 0, sizeof l_IS_ROUTINE_3262);
l_IS_ROUTINE_3262 = 0;
for (;;) {
if ((l_Y_3260 == NULL)) goto L_end3263;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_3260))).f_NAME, ((*(R17 *)rt_nil_check(p_X))).f_NAME))
{
if ((((*(R12 *)rt_nil_check(l_Y_3260))).f_KIND == g_Y_TYPE))
{
l_IS_TYPE_3261 = 1;
}
else if ((((((*(R12 *)rt_nil_check(l_Y_3260))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_3260))).f_KIND == g_Y_MODULE)) || (((*(R12 *)rt_nil_check(l_Y_3260))).f_KIND == g_Y_ENUMLIT)))
{
l_IS_ROUTINE_3262 = 1;
}
}
else if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_3260))).f_PREFIX, ((*(R17 *)rt_nil_check(p_X))).f_NAME))
{
l_IS_ROUTINE_3262 = 1;
}
l_Y_3260 = ((*(R12 *)rt_nil_check(l_Y_3260))).f_SNEXT;
}
RT_B_TICK();
} L_end3263: ;
if (((!l_IS_TYPE_3261) && (!l_IS_ROUTINE_3262)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_X))).f_LINE, rt_str("only type and routine names are exported (4.4): ", 48), ((*(R17 *)rt_nil_check(p_X))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(p_X))).f_A == NULL)))
{
if ((!l_IS_TYPE_3261))
{
r_FAILT(((*(R17 *)rt_nil_check(p_X))).f_LINE, rt_str("only a type-name is followed by a WITH clause (4.4): ", 53), ((*(R17 *)rt_nil_check(p_X))).f_NAME);
}
{
R17 * l_OP_3264; memset(&l_OP_3264, 0, sizeof l_OP_3264);
l_OP_3264 = ((*(R17 *)rt_nil_check(p_X))).f_A;
for (;;) {
if ((l_OP_3264 == NULL)) goto L_end3265;
{
{
rt_int l_FOUND_3266; memset(&l_FOUND_3266, 0, sizeof l_FOUND_3266);
l_FOUND_3266 = 0;
l_Y_3260 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3260 == NULL)) goto L_end3267;
{
if (((((*(R12 *)rt_nil_check(l_Y_3260))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_3260))).f_PREFIX, ((*(R17 *)rt_nil_check(p_X))).f_NAME)))
{
if (r_TEQ(r_BASE_NAME(r_ORIGINAL(l_Y_3260)), ((*(R17 *)rt_nil_check(l_OP_3264))).f_NAME))
{
l_FOUND_3266 = 1;
}
}
l_Y_3260 = ((*(R12 *)rt_nil_check(l_Y_3260))).f_SNEXT;
}
RT_B_TICK();
} L_end3267: ;
if ((!l_FOUND_3266))
{
r_FAILT(((*(R17 *)rt_nil_check(l_OP_3264))).f_LINE, rt_str("a WITH clause lists operations of the type (4.4): ", 50), ((*(R17 *)rt_nil_check(l_OP_3264))).f_NAME);
}
}
l_OP_3264 = ((*(R17 *)rt_nil_check(l_OP_3264))).f_NEXT;
}
RT_B_TICK();
} L_end3265: ;
}
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_3268; memset(&l_Y_3268, 0, sizeof l_Y_3268);
l_Y_3268 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3268 == NULL)) goto L_end3269;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_3268))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_3268))).f_PREFIX, p_NAME)))
{
{ rt_int rv3270 = 1;
return rv3270; }
}
l_Y_3268 = ((*(R12 *)rt_nil_check(l_Y_3268))).f_SNEXT;
}
RT_B_TICK();
} L_end3269: ;
{ rt_int rv3271 = 0;
return rv3271; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R17 * p_D, R12 * p_Y) { RT_B_TICK(); 
R17 * l_X_3272; memset(&l_X_3272, 0, sizeof l_X_3272);
l_X_3272 = ((*(R17 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv3273 = 0;
return rv3273; }
}
if ((((*(R17 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv3274 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv3274; }
}
for (;;) {
if ((l_X_3272 == NULL)) goto L_end3275;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_X_3272))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3276 = 1;
return rv3276; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R17 *)rt_nil_check(l_X_3272))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R17 *)rt_nil_check(l_X_3272))).f_A == NULL))
{
{ rt_int rv3277 = 1;
return rv3277; }
}
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_X_3272))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv3278 = 1;
return rv3278; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_3279; memset(&l_T_3279, 0, sizeof l_T_3279);
l_T_3279 = r_ORIG_LOOKUP_MEMBER(((*(R17 *)rt_nil_check(l_X_3272))).f_NAME, p_Y);
if ((!(l_T_3279 == NULL)))
{
{ rt_int rv3280 = 1;
return rv3280; }
}
}
}
l_X_3272 = ((*(R17 *)rt_nil_check(l_X_3272))).f_NEXT;
}
RT_B_TICK();
} L_end3275: ;
{ rt_int rv3281 = 0;
return rv3281; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R9 p_NAME, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3282; memset(&l_M_3282, 0, sizeof l_M_3282);
l_M_3282 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_3283; memset(&l_Z_3283, 0, sizeof l_Z_3283);
if ((l_M_3282 == NULL))
{
{ R12 * rv3284 = NULL;
return rv3284; }
}
l_Z_3283 = ((*(R12 *)rt_nil_check(l_M_3282))).f_MEMBERS;
for (;;) {
if ((l_Z_3283 == NULL)) goto L_end3285;
{
if (((((*(R12 *)rt_nil_check(l_Z_3283))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_3283))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_3283))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_3283))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_3283))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv3286 = l_Z_3283;
return rv3286; }
}
}
}
}
l_Z_3283 = ((*(R12 *)rt_nil_check(l_Z_3283))).f_SNEXT;
}
RT_B_TICK();
} L_end3285: ;
{ R12 * rv3287 = NULL;
return rv3287; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3288; memset(&l_R_3288, 0, sizeof l_R_3288);
l_R_3288 = p_RS;
for (;;) {
if ((l_R_3288 == NULL)) goto L_end3289;
{
if ((((*(R17 *)rt_nil_check(l_R_3288))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3290; memset(&l_M_3290, 0, sizeof l_M_3290);
l_M_3290 = r_FIND_DECL(l_R_3288);
R17 * l_D_3291; memset(&l_D_3291, 0, sizeof l_D_3291);
l_D_3291 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3288))).f_C))).f_A;
r_ENTER_MODULE(l_M_3290);
for (;;) {
if ((l_D_3291 == NULL)) goto L_end3292;
{
if (((((*(R17 *)rt_nil_check(l_D_3291))).f_KIND == g_N_VAR) || (((*(R17 *)rt_nil_check(l_D_3291))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3291);
}
l_D_3291 = ((*(R17 *)rt_nil_check(l_D_3291))).f_NEXT;
}
RT_B_TICK();
} L_end3292: ;
r_MODULE_DATA(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3288))).f_C))).f_C);
r_DISTINCT_SIGNATURES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3288))).f_C))).f_C);
r_ROUTINE_USES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3288))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3290);
}
}
l_R_3288 = ((*(R17 *)rt_nil_check(l_R_3288))).f_NEXT;
}
RT_B_TICK();
} L_end3289: ;
}
static void r_ROUTINE_BODIES(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3293; memset(&l_R_3293, 0, sizeof l_R_3293);
l_R_3293 = p_RS;
for (;;) {
if ((l_R_3293 == NULL)) goto L_end3294;
{
if ((((*(R17 *)rt_nil_check(l_R_3293))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3295; memset(&l_M_3295, 0, sizeof l_M_3295);
l_M_3295 = r_FIND_DECL(l_R_3293);
r_ENTER_MODULE(l_M_3295);
r_ROUTINE_BODIES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3293))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3295);
}
}
else
{
{
R12 * l_Y_3296; memset(&l_Y_3296, 0, sizeof l_Y_3296);
l_Y_3296 = r_FIND_DECL(l_R_3293);
if (((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3296))).f_DECL))).f_FL == ((rt_int)1LL)) && (!((*(R12 *)rt_nil_check(l_Y_3296))).f_GENERIC)))
{
}
else if ((!((*(R12 *)rt_nil_check(l_Y_3296))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_3296);
}
}
}
l_R_3293 = ((*(R17 *)rt_nil_check(l_R_3293))).f_NEXT;
}
RT_B_TICK();
} L_end3294: ;
}
static void r_PENDING_BODIES(void) { RT_B_TICK(); 
rt_int l_LEVEL_3297; memset(&l_LEVEL_3297, 0, sizeof l_LEVEL_3297);
l_LEVEL_3297 = r_CUR_LEVEL();
rt_int l_MORE_3298; memset(&l_MORE_3298, 0, sizeof l_MORE_3298);
l_MORE_3298 = 1;
for (;;) {
if ((!l_MORE_3298)) goto L_end3299;
{
l_MORE_3298 = 0;
{
R12 * l_P_3300; memset(&l_P_3300, 0, sizeof l_P_3300);
l_P_3300 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_3301; memset(&l_PREV_3301, 0, sizeof l_PREV_3301);
l_PREV_3301 = NULL;
for (;;) {
if ((l_P_3300 == NULL)) goto L_end3302;
{
if ((((*(R12 *)rt_nil_check(l_P_3300))).f_LEVEL == l_LEVEL_3297))
{
if ((l_PREV_3301 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_3300))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_3301))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_3300))).f_MEMBERS;
}
{
R12 * l_SAVED_SEG_3303; memset(&l_SAVED_SEG_3303, 0, sizeof l_SAVED_SEG_3303);
l_SAVED_SEG_3303 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R12 * l_HOME_3304; memset(&l_HOME_3304, 0, sizeof l_HOME_3304);
l_HOME_3304 = r_ENTER_HOME(l_P_3300);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(l_P_3300))).f_HOME;
r_ENTER_MODULE_OF(l_P_3300);
r_ROUTINE_BODY(l_P_3300);
r_LEAVE_MODULE_OF(l_P_3300);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_3303;
r_LEAVE_HOME(l_P_3300, l_HOME_3304);
}
l_MORE_3298 = 1;
goto L_end3302;
}
l_PREV_3301 = l_P_3300;
l_P_3300 = ((*(R12 *)rt_nil_check(l_P_3300))).f_MEMBERS;
}
RT_B_TICK();
} L_end3302: ;
}
}
RT_B_TICK();
} L_end3299: ;
}
static void r_CLOSED_BODY(R17 * p_B) { RT_B_TICK(); 
R17 * l_D_3305; memset(&l_D_3305, 0, sizeof l_D_3305);
l_D_3305 = ((*(R17 *)rt_nil_check(p_B))).f_A;
R17 * l_S_3306; memset(&l_S_3306, 0, sizeof l_S_3306);
l_S_3306 = ((*(R17 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R17 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R17 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R17 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_3305 == NULL)) goto L_end3307;
{
if (((((*(R17 *)rt_nil_check(l_D_3305))).f_KIND == g_N_VAR) || (((*(R17 *)rt_nil_check(l_D_3305))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3305);
}
l_D_3305 = ((*(R17 *)rt_nil_check(l_D_3305))).f_NEXT;
}
RT_B_TICK();
} L_end3307: ;
r_MODULE_DATA(((*(R17 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R17 *)rt_nil_check(p_B))).f_C);
r_DISTINCT_SIGNATURES(((*(R17 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R17 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R17 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_3306 == NULL)) goto L_end3308;
{
r_STMT(l_S_3306);
l_S_3306 = ((*(R17 *)rt_nil_check(l_S_3306))).f_NEXT;
}
RT_B_TICK();
} L_end3308: ;
r_ROUTINE_BODIES(((*(R17 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { RT_B_TICK(); 
R17 * l_R_3309; memset(&l_R_3309, 0, sizeof l_R_3309);
l_R_3309 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_3310; memset(&l_SAVED_CODE_3310, 0, sizeof l_SAVED_CODE_3310);
S_R14(&l_SAVED_CODE_3310, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R18 * l_SAVED_CTXS_3311; memset(&l_SAVED_CTXS_3311, 0, sizeof l_SAVED_CTXS_3311);
l_SAVED_CTXS_3311 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R21 * l_SAVED_BINDS_3312; memset(&l_SAVED_BINDS_3312, 0, sizeof l_SAVED_BINDS_3312);
l_SAVED_BINDS_3312 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R19 * l_OUTER_3313; memset(&l_OUTER_3313, 0, sizeof l_OUTER_3313);
l_OUTER_3313 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R19 * l_CS_3314; memset(&l_CS_3314, 0, sizeof l_CS_3314);
l_CS_3314 = ((R19 *)rt_b_new(sizeof (R19)));
R9 l_PROLOGUE_3315; memset(&l_PROLOGUE_3315, 0, sizeof l_PROLOGUE_3315);
S_R9(&l_PROLOGUE_3315, r_MK(rt_str("", 0)), 0);
S_R19(&(*(R19 *)rt_nil_check(l_CS_3314)), ({ R19 rc3316; memset(&rc3316, 0, sizeof rc3316);  rc3316.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc3316.f_R = p_Y; rc3316.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R9(&rc3316.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc3316.f_FIELDS, ({ R14 rc3317; memset(&rc3317, 0, sizeof rc3317);  rc3317.f_HEAD = NULL; rc3317.f_TAIL = NULL; rc3317; }), 0); rc3316.f_UP = l_OUTER_3313; rc3316.f_IMPORTS = ((*(R17 *)rt_nil_check(l_R_3309))).f_E; rc3316.f_SIGNALS = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3309))).f_D))).f_A; rc3316.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc3316.f_IS_PATH = 0; S_R9(&rc3316.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3316; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R19 *)rt_nil_check(l_CS_3314))).f_FTYPE, ((*(R19 *)rt_nil_check(l_CS_3314))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R19 *)rt_nil_check(l_CS_3314))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R19 *)rt_nil_check(l_CS_3314))).f_FIELDS);
}
S_R9(&l_PROLOGUE_3315, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R19 *)rt_nil_check(l_CS_3314))).f_FTYPE, ((*(R19 *)rt_nil_check(l_CS_3314))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_PROLOGUE_3315, r_CATS(l_PROLOGUE_3315, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_3314;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3318; memset(&rc3318, 0, sizeof rc3318);  rc3318.f_HEAD = NULL; rc3318.f_TAIL = NULL; rc3318; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R17 *)rt_nil_check(l_R_3309))).f_E, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3309))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R17 *)rt_nil_check(l_R_3309))).f_LINE);
{
R28 * l_P_3319; memset(&l_P_3319, 0, sizeof l_P_3319);
l_P_3319 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_3319 == NULL)) goto L_end3320;
{
if ((!(((*(R28 *)rt_nil_check(l_P_3319))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_3319))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_3321; memset(&l_V_3321, 0, sizeof l_V_3321);
l_V_3321 = r_NEW_SYM(g_Y_VAR, ((*(R28 *)rt_nil_check(l_P_3319))).f_NAME);
R21 * l_MB_3322; memset(&l_MB_3322, 0, sizeof l_MB_3322);
l_MB_3322 = r_FIND_BIND(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, r_MKN(rt_b_cat(rt_str("=", 1), r_STR(((*(R28 *)rt_nil_check(l_P_3319))).f_NAME, (((*(R28 *)rt_nil_check(l_P_3319))).f_NAME).f_LEN))));
((*(R12 *)rt_nil_check(l_V_3321))).f_T = ((*(R28 *)rt_nil_check(l_P_3319))).f_T;
((*(R12 *)rt_nil_check(l_V_3321))).f_INPUT = (((*(R28 *)rt_nil_check(l_P_3319))).f_MODE == g_M_IN);
if ((!(l_MB_3322 == NULL)))
{
((*(R12 *)rt_nil_check(l_V_3321))).f_HASMV = ((*(R21 *)rt_nil_check(l_MB_3322))).f_HASMV;
((*(R12 *)rt_nil_check(l_V_3321))).f_MV = ((*(R21 *)rt_nil_check(l_MB_3322))).f_MV;
}
((*(R12 *)rt_nil_check(l_V_3321))).f_BYREF = (!(((*(R28 *)rt_nil_check(l_P_3319))).f_MODE == g_M_IN));
S_R9(&((*(R12 *)rt_nil_check(l_V_3321))).f_FIELD, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_3319))).f_NAME)), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_3321))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R28 *)rt_nil_check(l_P_3319))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3319))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3314))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3321))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), r_CID(((*(R28 *)rt_nil_check(l_P_3319))).f_NAME)), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_3319))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3319))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3314))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3321))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_3319))).f_NAME)), 0);
}
S_R9(&l_PROLOGUE_3315, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_3315, r_CID(((*(R28 *)rt_nil_check(l_P_3319))).f_NAME), r_CID(((*(R28 *)rt_nil_check(l_P_3319))).f_NAME)), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_3321))).f_BYREF)
{
S_R9(&((*(R12 *)rt_nil_check(l_V_3321))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), r_CID(((*(R28 *)rt_nil_check(l_P_3319))).f_NAME)), 0);
}
else
{
S_R9(&((*(R12 *)rt_nil_check(l_V_3321))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_3319))).f_NAME)), 0);
}
if ((((*(R28 *)rt_nil_check(l_P_3319))).f_MODE == g_M_OUT))
{
{
R9 l_ARGA_3323; memset(&l_ARGA_3323, 0, sizeof l_ARGA_3323);
S_R9(&l_ARGA_3323, ((*(R12 *)rt_nil_check(l_V_3321))).f_ACCESS, 0);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_3319))).f_T, l_ARGA_3323, ((*(R17 *)rt_nil_check(l_R_3309))).f_LINE, 1);
((*(R12 *)rt_nil_check(l_V_3321))).f_BYREF = 0;
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ o_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_3319))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3319))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3314))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3321))).f_ACCESS, r_FMT1(rt_str("F->o_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_3319))).f_NAME)), 0);
}
else
{
S_R9(&l_PROLOGUE_3315, r_FMT3(rt_str("@ @ o_@;", 8), l_PROLOGUE_3315, r_CTYPE(((*(R28 *)rt_nil_check(l_P_3319))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3319))).f_NAME)), 0);
S_R9(&((*(R12 *)rt_nil_check(l_V_3321))).f_ACCESS, r_FMT1(rt_str("o_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_3319))).f_NAME)), 0);
}
S_R9(&l_PROLOGUE_3315, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_3315, ((*(R12 *)rt_nil_check(l_V_3321))).f_ACCESS, l_ARGA_3323), 0);
if (r_NEEDS_INIT(((*(R28 *)rt_nil_check(l_P_3319))).f_T))
{
S_R9(&l_PROLOGUE_3315, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_3315, ((*(R12 *)rt_nil_check(l_V_3321))).f_ACCESS, r_COPY_OF(((*(R28 *)rt_nil_check(l_P_3319))).f_T, l_ARGA_3323)), 0);
}
S_R9(&((*(R19 *)rt_nil_check(l_CS_3314))).f_COPYOUT, r_CAT(((*(R19 *)rt_nil_check(l_CS_3314))).f_COPYOUT, r_ASSIGN_CODE(((*(R28 *)rt_nil_check(l_P_3319))).f_T, l_ARGA_3323, ((*(R12 *)rt_nil_check(l_V_3321))).f_ACCESS)), 0);
r_DEFINE(l_V_3321, ((*(R17 *)rt_nil_check(l_R_3309))).f_LINE);
}
}
else
{
r_DEFINE(l_V_3321, ((*(R17 *)rt_nil_check(l_R_3309))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_3319))).f_T, ((*(R12 *)rt_nil_check(l_V_3321))).f_ACCESS, ((*(R17 *)rt_nil_check(l_R_3309))).f_LINE, 1);
}
}
}
}
l_P_3319 = ((*(R28 *)rt_nil_check(l_P_3319))).f_NEXT;
}
RT_B_TICK();
} L_end3320: ;
}
if ((((*(R17 *)rt_nil_check(l_R_3309))).f_FL >= ((rt_int)2LL)))
{
{
R17 * l_N_3324; memset(&l_N_3324, 0, sizeof l_N_3324);
l_N_3324 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3309))).f_D))).f_C;
R14 l_SAVED_CODE_3325; memset(&l_SAVED_CODE_3325, 0, sizeof l_SAVED_CODE_3325);
S_R14(&l_SAVED_CODE_3325, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_3326; memset(&l_V_3326, 0, sizeof l_V_3326);
S_R26(&l_V_3326, r_EXPR(l_N_3324, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
R23 l_M_3327; memset(&l_M_3327, 0, sizeof l_M_3327);
S_R23(&l_M_3327, r_MANIFEST(l_N_3324), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3325, 0);
if ((((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3326).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3326).f_T)))).f_SCALE == ((rt_int)0LL)))) || (!(l_M_3327).f_OK)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_N_3324))).f_LINE, rt_str("the stack-size is a manifest integer expression (4.8.2 [4-111])", 63));
}
if (((l_M_3327).f_V < ((rt_int)0LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_N_3324))).f_LINE, rt_str("the stack-size must be greater than or equal to zero (4.8.2)", 60));
}
}
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R17 *)rt_nil_check(l_R_3309))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R17 *)rt_nil_check(l_R_3309))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R19 *)rt_nil_check(l_CS_3314))).f_FTYPE, r_JOIN_BUF(((*(R19 *)rt_nil_check(l_CS_3314))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { RT_B_TICK(); @", 18), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_3315));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
else if (((((*(R19 *)rt_nil_check(l_CS_3314))).f_COPYOUT).f_LEN > ((rt_int)0LL)))
{
r_EMIT(g_O_FUNCS, ((*(R19 *)rt_nil_check(l_CS_3314))).f_COPYOUT);
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_3313;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3310, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_3311;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_3312;
}
static void r_BIND_INSTANCE(R21 * p_BS, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_B_3328; memset(&l_B_3328, 0, sizeof l_B_3328);
l_B_3328 = p_BS;
for (;;) {
if ((l_B_3328 == NULL)) goto L_end3329;
{
if ((!(((*(R21 *)rt_nil_check(l_B_3328))).f_T == NULL)))
{
{
R12 * l_Y_3330; memset(&l_Y_3330, 0, sizeof l_Y_3330);
l_Y_3330 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_B_3328))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3330))).f_T = ((*(R21 *)rt_nil_check(l_B_3328))).f_T;
r_DEFINE(l_Y_3330, p_LINE);
}
}
else if (((*(R21 *)rt_nil_check(l_B_3328))).f_HASMV)
{
{
R12 * l_Y_3331; memset(&l_Y_3331, 0, sizeof l_Y_3331);
l_Y_3331 = r_NEW_SYM(g_Y_GEN, ((*(R21 *)rt_nil_check(l_B_3328))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3331))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_3331))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_3331))).f_MV = ((*(R21 *)rt_nil_check(l_B_3328))).f_MV;
S_R9(&((*(R12 *)rt_nil_check(l_Y_3331))).f_ACCESS, ((*(R21 *)rt_nil_check(l_B_3328))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_3331))).f_INPUT = 1;
r_DEFINE(l_Y_3331, p_LINE);
}
}
l_B_3328 = ((*(R21 *)rt_nil_check(l_B_3328))).f_NEXT;
}
RT_B_TICK();
} L_end3329: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { RT_B_TICK(); 
R15 * l_C_3332; memset(&l_C_3332, 0, sizeof l_C_3332);
l_C_3332 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_3332 == NULL)) goto L_end3333;
{
r_APPEND(C_R9(((*(R15 *)rt_nil_check(l_C_3332))).f_T), &(*p_DST));
l_C_3332 = ((*(R15 *)rt_nil_check(l_C_3332))).f_NEXT;
}
RT_B_TICK();
} L_end3333: ;
}
static rt_int r_USES_SEGMENT(R17 * p_S, rstr p_NAME) { RT_B_TICK(); 
R17 * l_U_3334; memset(&l_U_3334, 0, sizeof l_U_3334);
l_U_3334 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3334 == NULL)) goto L_end3335;
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_U_3334))).f_NAME, p_NAME))
{
{ rt_int rv3336 = 1;
return rv3336; }
}
l_U_3334 = ((*(R17 *)rt_nil_check(l_U_3334))).f_NEXT;
}
RT_B_TICK();
} L_end3335: ;
{ rt_int rv3337 = 0;
return rv3337; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R17 * p_S, R17 * p_SEGS) { RT_B_TICK(); 
R17 * l_U_3338; memset(&l_U_3338, 0, sizeof l_U_3338);
l_U_3338 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3338 == NULL)) goto L_end3339;
{
{
R17 * l_T_3340; memset(&l_T_3340, 0, sizeof l_T_3340);
l_T_3340 = p_SEGS;
for (;;) {
if ((l_T_3340 == NULL)) goto L_end3341;
{
if ((((!(l_T_3340 == p_S)) && (((*(R17 *)rt_nil_check(l_T_3340))).f_D == NULL)) && r_TEQ(((*(R17 *)rt_nil_check(l_T_3340))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3338))).f_NAME)))
{
{ rt_int rv3342 = 0;
return rv3342; }
}
l_T_3340 = ((*(R17 *)rt_nil_check(l_T_3340))).f_NEXT;
}
RT_B_TICK();
} L_end3341: ;
}
l_U_3338 = ((*(R17 *)rt_nil_check(l_U_3338))).f_NEXT;
}
RT_B_TICK();
} L_end3339: ;
{ rt_int rv3343 = 1;
return rv3343; }
rt_raise(RT_X_INIT);
}
static R9 r_MISSING_SEGMENT(R17 * p_SEGS) { RT_B_TICK(); 
R17 * l_S_3344; memset(&l_S_3344, 0, sizeof l_S_3344);
l_S_3344 = p_SEGS;
for (;;) {
if ((l_S_3344 == NULL)) goto L_end3345;
{
{
R17 * l_U_3346; memset(&l_U_3346, 0, sizeof l_U_3346);
l_U_3346 = ((*(R17 *)rt_nil_check(l_S_3344))).f_A;
for (;;) {
if ((l_U_3346 == NULL)) goto L_end3347;
{
if ((!r_TEQS(((*(R17 *)rt_nil_check(l_U_3346))).f_NAME, rt_str("TERMINAL", 8))))
{
{
R17 * l_T_3348; memset(&l_T_3348, 0, sizeof l_T_3348);
l_T_3348 = p_SEGS;
rt_int l_FOUND_3349; memset(&l_FOUND_3349, 0, sizeof l_FOUND_3349);
l_FOUND_3349 = 0;
for (;;) {
if ((l_T_3348 == NULL)) goto L_end3350;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_T_3348))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3346))).f_NAME))
{
l_FOUND_3349 = 1;
}
l_T_3348 = ((*(R17 *)rt_nil_check(l_T_3348))).f_NEXT;
}
RT_B_TICK();
} L_end3350: ;
if ((!l_FOUND_3349))
{
{ R9 rv3351 = ((*(R17 *)rt_nil_check(l_U_3346))).f_NAME;
return rv3351; }
}
}
}
l_U_3346 = ((*(R17 *)rt_nil_check(l_U_3346))).f_NEXT;
}
RT_B_TICK();
} L_end3347: ;
}
l_S_3344 = ((*(R17 *)rt_nil_check(l_S_3344))).f_NEXT;
}
RT_B_TICK();
} L_end3345: ;
{ R9 rv3352 = r_NO_TEXT();
return rv3352; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R17 * p_SEGS) { RT_B_TICK(); 
R17 * l_S_3353; memset(&l_S_3353, 0, sizeof l_S_3353);
l_S_3353 = p_SEGS;
rt_int l_MAINS_3354; memset(&l_MAINS_3354, 0, sizeof l_MAINS_3354);
l_MAINS_3354 = ((rt_int)0LL);
R19 * l_ROOT_3355; memset(&l_ROOT_3355, 0, sizeof l_ROOT_3355);
l_ROOT_3355 = ((R19 *)rt_b_new(sizeof (R19)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R19(&(*(R19 *)rt_nil_check(l_ROOT_3355)), ({ R19 rc3356; memset(&rc3356, 0, sizeof rc3356);  rc3356.f_LEVEL = ((rt_int)0LL); rc3356.f_R = NULL; rc3356.f_FRAMED = 0; S_R9(&rc3356.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc3356.f_FIELDS, ({ R14 rc3357; memset(&rc3357, 0, sizeof rc3357);  rc3357.f_HEAD = NULL; rc3357.f_TAIL = NULL; rc3357; }), 0); rc3356.f_UP = NULL; rc3356.f_IMPORTS = NULL; rc3356.f_SIGNALS = NULL; rc3356.f_RESULT = NULL; rc3356.f_IS_PATH = 0; S_R9(&rc3356.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3356; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_3355;
((*(R7 *)rt_nil_check(g_W))).f_IS = NULL;
r_ENTER_ISCOPE(NULL, NULL, r_MK(rt_str("segment", 7)));
((*(R20 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_ID = ((rt_int)0LL);
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = ((rt_int)0LL);
r_EMITS(g_O_TYPEDEFS, rt_str("#include \"paleo.h\"", 18));
r_EMITS(g_O_TYPEDEFS, rt_str("#include <float.h>", 18));
r_EMITS(g_O_TYPEDEFS, rt_str("#include <math.h>", 17));
r_EMITS(g_O_TYPEDEFS, rt_str("#include <string.h>", 19));
r_EMITS(g_O_MAINHEAD, rt_str("int main(int argc, char **argv) {", 33));
r_EMITS(g_O_MAINHEAD, rt_str("rt_b_lang();", 12));
r_EMITS(g_O_MAINHEAD, rt_str("rt_init(argc, argv);", 20));
if ((!(((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL))))
{
r_EMIT(g_O_MAINHEAD, r_FMT1(rt_str("rt_b_machine(@);", 16), r_NUM(((*(R7 *)rt_nil_check(g_W))).f_WORD)));
}
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3358; memset(&rc3358, 0, sizeof rc3358);  rc3358.f_HEAD = NULL; rc3358.f_TAIL = NULL; rc3358; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_3353 = p_SEGS;
for (;;) {
if ((l_S_3353 == NULL)) goto L_end3360;
{
if ((((*(R17 *)rt_nil_check(l_S_3353))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_3353, p_SEGS))
{
goto L_end3360;
}
}
l_S_3353 = ((*(R17 *)rt_nil_check(l_S_3353))).f_NEXT;
}
RT_B_TICK();
} L_end3360: ;
if ((l_S_3353 == NULL))
{
goto L_end3359;
}
((*(R17 *)rt_nil_check(l_S_3353))).f_D = l_S_3353;
l_MAINS_3354 = rt_add(l_MAINS_3354, ((*(R17 *)rt_nil_check(l_S_3353))).f_IV);
if (((((*(R17 *)rt_nil_check(l_S_3353))).f_IV == ((rt_int)0LL)) && (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3353))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_S_3353))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
r_BEGIN_SEGMENT(l_S_3353);
if (r_USES_SEGMENT(l_S_3353, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
r_CLOSED_BODY(((*(R17 *)rt_nil_check(l_S_3353))).f_B);
r_SEGMENT_EXPORTS(l_S_3353);
}
RT_B_TICK();
} L_end3359: ;
l_S_3353 = p_SEGS;
for (;;) {
if ((l_S_3353 == NULL)) goto L_end3361;
{
if ((((*(R17 *)rt_nil_check(l_S_3353))).f_D == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_S_3353))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R17 *)rt_nil_check(l_S_3353))).f_NAME);
}
l_S_3353 = ((*(R17 *)rt_nil_check(l_S_3353))).f_NEXT;
}
RT_B_TICK();
} L_end3361: ;
if ((!(l_MAINS_3354 == ((rt_int)1LL))))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R17 * l_X_3362; memset(&l_X_3362, 0, sizeof l_X_3362);
l_X_3362 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_3362 == NULL)) goto L_end3363;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), r_CID(((*(R17 *)rt_nil_check(l_X_3362))).f_NAME)));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), r_CID(((*(R17 *)rt_nil_check(l_X_3362))).f_NAME), r_CSTRING(((*(R17 *)rt_nil_check(l_X_3362))).f_NAME)));
l_X_3362 = ((*(R17 *)rt_nil_check(l_X_3362))).f_NEXT;
}
RT_B_TICK();
} L_end3363: ;
}
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static rt_int r_FROM_DEFINED_MODULE(R17 * p_S, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3364; memset(&l_M_3364, 0, sizeof l_M_3364);
l_M_3364 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv3365 = 0;
return rv3365; }
}
for (;;) {
if ((l_M_3364 == NULL)) goto L_end3366;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_3364))).f_NAME))
{
{ rt_int rv3367 = 1;
return rv3367; }
}
l_M_3364 = ((*(R12 *)rt_nil_check(l_M_3364))).f_MODL;
}
RT_B_TICK();
} L_end3366: ;
{ rt_int rv3368 = 0;
return rv3368; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R17 * p_S) { RT_B_TICK(); 
R12 * l_MARK_3369; memset(&l_MARK_3369, 0, sizeof l_MARK_3369);
l_MARK_3369 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_3370; memset(&l_TAKEN_3370, 0, sizeof l_TAKEN_3370);
R12 * l_SEG_3371; memset(&l_SEG_3371, 0, sizeof l_SEG_3371);
l_SEG_3371 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R17 * l_NAMES_3372; memset(&l_NAMES_3372, 0, sizeof l_NAMES_3372);
l_NAMES_3372 = NULL;
for (;;) {
if ((l_MARK_3369 == NULL)) goto L_end3373;
{
if ((((*(R12 *)rt_nil_check(l_MARK_3369))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end3373;
}
l_MARK_3369 = ((*(R12 *)rt_nil_check(l_MARK_3369))).f_SNEXT;
}
RT_B_TICK();
} L_end3373: ;
l_TAKEN_3370 = r_TAKE_SCOPE(l_MARK_3369);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
{
R17 * l_X_3374; memset(&l_X_3374, 0, sizeof l_X_3374);
l_X_3374 = ((*(R17 *)rt_nil_check(p_S))).f_C;
for (;;) {
if ((l_X_3374 == NULL)) goto L_end3375;
{
{
R12 * l_Y_3376; memset(&l_Y_3376, 0, sizeof l_Y_3376);
l_Y_3376 = l_TAKEN_3370;
rt_int l_FOUND_3377; memset(&l_FOUND_3377, 0, sizeof l_FOUND_3377);
l_FOUND_3377 = (!(r_LOOKUP(((*(R17 *)rt_nil_check(l_X_3374))).f_NAME) == NULL));
for (;;) {
if ((l_Y_3376 == NULL)) goto L_end3378;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_3376))).f_NAME, ((*(R17 *)rt_nil_check(l_X_3374))).f_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_3376))).f_PREFIX, ((*(R17 *)rt_nil_check(l_X_3374))).f_NAME)))
{
l_FOUND_3377 = 1;
}
else if ((((*(R12 *)rt_nil_check(l_Y_3376))).f_KIND == g_Y_ROUTINE))
{
if (r_TEQ(r_BASE_NAME(l_Y_3376), ((*(R17 *)rt_nil_check(l_X_3374))).f_NAME))
{
l_FOUND_3377 = 1;
}
}
l_Y_3376 = ((*(R12 *)rt_nil_check(l_Y_3376))).f_SNEXT;
}
RT_B_TICK();
} L_end3378: ;
if ((!l_FOUND_3377))
{
r_FAILT(((*(R17 *)rt_nil_check(l_X_3374))).f_LINE, rt_str("DEFINES names a name local to the segment or imported into it (4.2): ", 69), ((*(R17 *)rt_nil_check(l_X_3374))).f_NAME);
}
l_NAMES_3372 = r_NAME_REF(((*(R17 *)rt_nil_check(l_X_3374))).f_NAME, ((rt_int)0LL), NULL, l_NAMES_3372);
}
l_X_3374 = ((*(R17 *)rt_nil_check(l_X_3374))).f_NEXT;
}
RT_B_TICK();
} L_end3375: ;
}
for (;;) {
if ((l_TAKEN_3370 == NULL)) goto L_end3379;
{
{
R12 * l_NEXT_3380; memset(&l_NEXT_3380, 0, sizeof l_NEXT_3380);
l_NEXT_3380 = ((*(R12 *)rt_nil_check(l_TAKEN_3370))).f_SNEXT;
if (((!(((*(R12 *)rt_nil_check(l_TAKEN_3370))).f_KIND == g_Y_BUILTIN)) && (((((((((*(R17 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_3370))).f_NAME)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_3370))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_3370))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_3370)) || (((((*(R12 *)rt_nil_check(l_TAKEN_3370))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_3370))))))))
{
((*(R12 *)rt_nil_check(l_TAKEN_3370))).f_SEGM = l_SEG_3371;
l_NAMES_3372 = r_NAME_REF(((*(R12 *)rt_nil_check(l_TAKEN_3370))).f_NAME, ((rt_int)0LL), NULL, l_NAMES_3372);
r_DEFINE(l_TAKEN_3370, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
else if ((!(((*(R12 *)rt_nil_check(l_TAKEN_3370))).f_KIND == g_Y_BUILTIN)))
{
((*(R12 *)rt_nil_check(l_TAKEN_3370))).f_SNEXT = ((*(R12 *)rt_nil_check(l_SEG_3371))).f_MEMBERS;
((*(R12 *)rt_nil_check(l_SEG_3371))).f_MEMBERS = l_TAKEN_3370;
}
l_TAKEN_3370 = l_NEXT_3380;
}
}
RT_B_TICK();
} L_end3379: ;
((*(R12 *)rt_nil_check(l_SEG_3371))).f_USES = l_NAMES_3372;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = NULL;
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = NULL;
}
static void r_BEGIN_SEGMENT(R17 * p_S) { RT_B_TICK(); 
R12 * l_SEG_3381; memset(&l_SEG_3381, 0, sizeof l_SEG_3381);
l_SEG_3381 = r_NEW_SYM(g_Y_SEGMENT, ((*(R17 *)rt_nil_check(p_S))).f_NAME);
R17 * l_U_3382; memset(&l_U_3382, 0, sizeof l_U_3382);
l_U_3382 = ((*(R17 *)rt_nil_check(p_S))).f_A;
((*(R12 *)rt_nil_check(l_SEG_3381))).f_DECL = p_S;
((*(R12 *)rt_nil_check(l_SEG_3381))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_SEGS;
((*(R7 *)rt_nil_check(g_W))).f_SEGS = l_SEG_3381;
for (;;) {
if ((l_U_3382 == NULL)) goto L_end3383;
{
if ((!r_TEQS(((*(R17 *)rt_nil_check(l_U_3382))).f_NAME, rt_str("TERMINAL", 8))))
{
{
R12 * l_T_3384; memset(&l_T_3384, 0, sizeof l_T_3384);
l_T_3384 = r_FIND_SEGMENT(((*(R17 *)rt_nil_check(l_U_3382))).f_NAME);
if ((l_T_3384 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_U_3382))).f_LINE, rt_str("USES names a segment of the program (4.2): ", 43), ((*(R17 *)rt_nil_check(l_U_3382))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(l_U_3382))).f_A == NULL)))
{
r_CHECK_ITEMS_DEFINED(l_T_3384, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3382))).f_A))).f_A);
r_CHECK_ITEMS_DEFINED(l_T_3384, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3382))).f_A))).f_B);
r_CHECK_ITEMS_DEFINED(l_T_3384, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3382))).f_A))).f_C);
r_CHECK_ITEMS_DEFINED(l_T_3384, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3382))).f_A))).f_D);
r_CHECK_ITEMS_DEFINED(l_T_3384, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3382))).f_A))).f_E);
}
}
}
l_U_3382 = ((*(R17 *)rt_nil_check(l_U_3382))).f_NEXT;
}
RT_B_TICK();
} L_end3383: ;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SEG_3381;
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = l_SEG_3381;
l_U_3382 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3382 == NULL)) goto L_end3385;
{
if ((!(((*(R17 *)rt_nil_check(l_U_3382))).f_A == NULL)))
{
r_INPUT_IMPORT_CONFLICT(((*(R17 *)rt_nil_check(l_U_3382))).f_A, ((*(R17 *)rt_nil_check(l_U_3382))).f_LINE);
}
l_U_3382 = ((*(R17 *)rt_nil_check(l_U_3382))).f_NEXT;
}
RT_B_TICK();
} L_end3385: ;
}
static R12 * r_ENTER_HOME(R12 * p_Y) { RT_B_TICK(); 
R12 * l_SAVED_3386; memset(&l_SAVED_3386, 0, sizeof l_SAVED_3386);
l_SAVED_3386 = ((*(R7 *)rt_nil_check(g_W))).f_TRSEG;
if (((((*(R12 *)rt_nil_check(p_Y))).f_HOME == NULL) || (((*(R12 *)rt_nil_check(p_Y))).f_HOME == ((*(R7 *)rt_nil_check(g_W))).f_TRSEG)))
{
{ R12 * rv3387 = l_SAVED_3386;
return rv3387; }
}
r_OPEN_SCOPE();
{
R12 * l_X_3388; memset(&l_X_3388, 0, sizeof l_X_3388);
l_X_3388 = ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_HOME))).f_MEMBERS;
for (;;) {
if ((l_X_3388 == NULL)) goto L_end3389;
{
{
R12 * l_A_3390; memset(&l_A_3390, 0, sizeof l_A_3390);
l_A_3390 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_X_3388))).f_KIND, ((*(R12 *)rt_nil_check(l_X_3388))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_3390)), (*(R12 *)rt_nil_check(l_X_3388)), 0);
((*(R12 *)rt_nil_check(l_A_3390))).f_ORIG = r_ORIGINAL(l_X_3388);
r_DEFINE_ALIAS(l_A_3390);
}
l_X_3388 = ((*(R12 *)rt_nil_check(l_X_3388))).f_SNEXT;
}
RT_B_TICK();
} L_end3389: ;
}
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = ((*(R12 *)rt_nil_check(p_Y))).f_HOME;
{ R12 * rv3391 = l_SAVED_3386;
return rv3391; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_ALIAS(R12 * p_A) { RT_B_TICK(); 
rt_int l_B_3392; memset(&l_B_3392, 0, sizeof l_B_3392);
l_B_3392 = r_BUCKET(((*(R12 *)rt_nil_check(p_A))).f_NAME);
((*(R12 *)rt_nil_check(p_A))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_A))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_3392, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_3392, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_A;
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
static R12 * r_FIND_SEGMENT(R9 p_NAME) { RT_B_TICK(); 
R12 * l_T_3393; memset(&l_T_3393, 0, sizeof l_T_3393);
l_T_3393 = ((*(R7 *)rt_nil_check(g_W))).f_SEGS;
for (;;) {
if ((l_T_3393 == NULL)) goto L_end3394;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_T_3393))).f_NAME, p_NAME))
{
{ R12 * rv3395 = l_T_3393;
return rv3395; }
}
l_T_3393 = ((*(R12 *)rt_nil_check(l_T_3393))).f_INSTANCES;
}
RT_B_TICK();
} L_end3394: ;
{ R12 * rv3396 = NULL;
return rv3396; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_ITEMS_DEFINED(R12 * p_T, R17 * p_L) { RT_B_TICK(); 
R17 * l_N_3397; memset(&l_N_3397, 0, sizeof l_N_3397);
l_N_3397 = p_L;
for (;;) {
if ((l_N_3397 == NULL)) goto L_end3398;
{
if ((!r_IN_IDENTS(((*(R12 *)rt_nil_check(p_T))).f_USES, ((*(R17 *)rt_nil_check(l_N_3397))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_N_3397))).f_LINE, rt_str("the segment does not define ", 28), ((*(R17 *)rt_nil_check(l_N_3397))).f_NAME);
}
l_N_3397 = ((*(R17 *)rt_nil_check(l_N_3397))).f_NEXT;
}
RT_B_TICK();
} L_end3398: ;
}
static rt_int r_SEG_VISIBLE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_U_3399; memset(&l_U_3399, 0, sizeof l_U_3399);
rt_int l_INPUT_ONLY_3400; memset(&l_INPUT_ONLY_3400, 0, sizeof l_INPUT_ONLY_3400);
l_INPUT_ONLY_3400 = 0;
if (((((((*(R7 *)rt_nil_check(g_W))).f_CURSEG == NULL) || (((*(R12 *)rt_nil_check(p_Y))).f_SEGM == NULL)) || (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL))) || (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
{ rt_int rv3401 = 1;
return rv3401; }
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_SEGM == ((*(R7 *)rt_nil_check(g_W))).f_CURSEG))
{
{ rt_int rv3402 = 1;
return rv3402; }
}
l_U_3399 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CURSEG))).f_DECL))).f_A;
for (;;) {
if ((l_U_3399 == NULL)) goto L_end3403;
{
{
R12 * l_T_3404; memset(&l_T_3404, 0, sizeof l_T_3404);
l_T_3404 = r_FIND_SEGMENT(((*(R17 *)rt_nil_check(l_U_3399))).f_NAME);
if ((!(l_T_3404 == NULL)))
{
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_T_3404))).f_USES, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
if ((((*(R17 *)rt_nil_check(l_U_3399))).f_A == NULL))
{
{ rt_int rv3405 = 1;
return rv3405; }
}
{
R17 * l_I_3406; memset(&l_I_3406, 0, sizeof l_I_3406);
l_I_3406 = ((*(R17 *)rt_nil_check(l_U_3399))).f_A;
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)))
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3406))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3407 = 1;
return rv3407; }
}
else if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3406))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
l_INPUT_ONLY_3400 = 1;
}
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE))
{
if ((((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3406))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME) || r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3406))).f_C, r_BASE_NAME(p_Y))) || r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3406))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)) || r_FROM_MODULES(((*(R17 *)rt_nil_check(l_I_3406))).f_E, p_Y)))
{
{ rt_int rv3408 = 1;
return rv3408; }
}
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE))
{
if ((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3406))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_NAME) || r_FROM_MODULES(((*(R17 *)rt_nil_check(l_I_3406))).f_E, p_Y)))
{
{ rt_int rv3409 = 1;
return rv3409; }
}
}
else
{
{ rt_int rv3410 = 1;
return rv3410; }
}
}
}
}
}
l_U_3399 = ((*(R17 *)rt_nil_check(l_U_3399))).f_NEXT;
}
RT_B_TICK();
} L_end3403: ;
if (l_INPUT_ONLY_3400)
{
{ rt_int rv3411 = 0;
return rv3411; }
}
r_FAILT(p_LINE, rt_str("not imported by the USES clause of the segment (4.2): ", 54), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static rt_int r_FROM_MODULES(R17 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3412; memset(&l_M_3412, 0, sizeof l_M_3412);
l_M_3412 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((p_MODS == NULL))
{
{ rt_int rv3413 = 0;
return rv3413; }
}
for (;;) {
if ((l_M_3412 == NULL)) goto L_end3414;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_3412))).f_NAME))
{
{ rt_int rv3415 = 1;
return rv3415; }
}
l_M_3412 = ((*(R12 *)rt_nil_check(l_M_3412))).f_MODL;
}
RT_B_TICK();
} L_end3414: ;
{ rt_int rv3416 = 0;
return rv3416; }
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
g_N_PSPEC = ((rt_int)101LL);
g_N_ELEM = ((rt_int)102LL);
g_N_VPACK = ((rt_int)103LL);
g_N_VPSPEC = ((rt_int)104LL);
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
r_OPTIONS();
r_LEX();
{
g_SEGS_29 = r_PARSE_COMPILATION();
for (;;) {
{
{
S_R9(&g_NAME_31, r_MISSING_SEGMENT(g_SEGS_29), 0);
if (((g_NAME_31).f_LEN == ((rt_int)0LL)))
{
goto L_end30;
}
r_LOAD_LIBRARY(g_NAME_31);
r_LEX();
{
g_MORE_32 = r_PARSE_COMPILATION();
g_LAST_33 = g_SEGS_29;
for (;;) {
if ((((*(R17 *)rt_nil_check(g_LAST_33))).f_NEXT == NULL)) goto L_end34;
{
g_LAST_33 = ((*(R17 *)rt_nil_check(g_LAST_33))).f_NEXT;
}
RT_B_TICK();
} L_end34: ;
((*(R17 *)rt_nil_check(g_LAST_33))).f_NEXT = g_MORE_32;
}
}
}
RT_B_TICK();
} L_end30: ;
r_PREDEFINE();
r_TRANSLATE(g_SEGS_29);
}
r_WRITE_OUTPUT();
rt_main_done();
return 0;
}
