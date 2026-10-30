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
struct R7 { int dummy_; rstr f_ARENA; rt_int f_TOP; A8 f_SRC; rt_int f_NSRC; rt_int f_LEXED; rt_int f_LEXLINE; R9 f_LIBDIR; rt_int f_SUPPRESS; rt_int f_WORD; A11 f_TOKS; rt_int f_NTOKS; rt_int f_POS; A13 f_TABLE; R12 * f_SCOPE; rt_int f_DEPTH; A16 f_OUT; R14 f_CODE; R17 * f_CTXS; R18 * f_CS; R19 * f_IS; rt_int f_NSCOPES; R12 * f_MODL; R20 * f_BINDS; rt_int f_ROUNDED; R21 * f_QUAL; R21 * f_SQUAL; rt_int f_TYPECHECK; rt_int f_CHARSETS; rt_int f_IN_RECORD; rt_int f_IN_TYPEDECL; rt_int f_REPCONV; R21 * f_LDONE; R21 * f_NEW_OK; rt_int f_START_IO; rt_int f_MACHINE; rt_int f_SERIAL; R21 * f_EXCS; R22 * f_TY_INT; R22 * f_TY_BOOL; R22 * f_TY_STR; R22 * f_TY_VOID; R22 * f_TY_NIL; R22 * f_TY_ASCII; R22 * f_TY_FLOAT; R22 * f_TY_BITS; R22 * f_TY_ROUNDINGS; R22 * f_TY_TYPE; R12 * f_PENDING; R21 * f_CNAMES; R12 * f_ENUMS; R12 * f_SEGS; R12 * f_CURSEG; R12 * f_TRSEG; R12 * f_ARRAYS; R12 * f_RECS; };
struct R23 { int dummy_; rt_int f_OK; rt_int f_V; };
struct R26 { int dummy_; R9 f_C; R22 * f_T; rt_int f_LVAL; R9 f_SELF; };
struct R21 { int dummy_; rt_int f_KIND; rt_int f_LINE; rt_int f_IV; R9 f_NAME; R21 * f_A; R21 * f_B; R21 * f_C; R21 * f_D; R21 * f_E; R21 * f_NEXT; rt_int f_FL; };
struct R15 { int dummy_; R9 f_T; R15 * f_NEXT; };
struct R12 { int dummy_; rt_int f_KIND; rt_int f_DEPTH; rt_int f_LEVEL; R9 f_NAME; R22 * f_T; R9 f_ACCESS; R9 f_FIELD; rt_int f_INPUT; rt_int f_BYREF; rt_int f_HASMV; rt_int f_MV; R21 * f_TS; rt_int f_BUSY; R9 f_FWD; R28 * f_PARAMS; R22 * f_RESULT; R21 * f_DECL; R9 f_PREFIX; R12 * f_MODL; rt_int f_EXPORTED; rt_int f_GENERIC; rt_int f_FRAMED; R21 * f_USES; R12 * f_INSTANCES; R20 * f_BINDINGS; R12 * f_ORIG; R12 * f_MEMBERS; R12 * f_SAVED; rt_int f_OWNER; rt_int f_WITHV; rt_int f_LAZY; R12 * f_SEGM; R12 * f_HOME; R12 * f_CHAIN; R12 * f_SNEXT; };
struct R18 { int dummy_; rt_int f_LEVEL; R12 * f_R; rt_int f_FRAMED; R9 f_FTYPE; R14 f_FIELDS; R18 * f_UP; R21 * f_IMPORTS; R21 * f_SIGNALS; R22 * f_RESULT; rt_int f_IS_PATH; R9 f_COPYOUT; };
struct R19 { int dummy_; rt_int f_ID; R21 * f_IMPORTS; R21 * f_SIGNALS; R9 f_NAME; R19 * f_UP; };
struct R22 { int dummy_; rt_int f_KIND; rt_int f_SCALE; R9 f_LO_C; R9 f_HI_C; R23 f_MLO; R23 f_MHI; rt_int f_RLEVEL; R9 f_LEN_C; R23 f_MLEN; R9 f_GEN; R22 * f_BASE; R22 * f_ELEM; R22 * f_TARGET; R21 * f_TARGET_TS; R24 * f_FIELDS; R21 * f_LITS; rt_int f_NLITS; rt_int f_UNORDERED; R25 * f_BOUNDS; rt_int f_DIMS; R25 * f_ARGS; R9 f_NAME; R9 f_CNAME; R12 * f_MODL; R21 * f_REPS; R12 * f_DECL; R9 f_GENP; };
struct R20 { int dummy_; R9 f_NAME; R22 * f_T; R9 f_C; rt_int f_HASMV; rt_int f_MV; R12 * f_R; R20 * f_NEXT; };
struct R25 { int dummy_; R9 f_LO; R9 f_HI; R23 f_MLO; R23 f_MHI; rt_int f_ANYARG; R25 * f_NEXT; };
struct R24 { int dummy_; R9 f_NAME; R9 f_CNAME; R22 * f_T; rt_int f_KIND; R9 f_TAGF; R21 * f_LABELS; R24 * f_NEXT; };
struct fr_r_MANIFEST_ARITH { void *up; R9 p_OP; rt_int p_A; rt_int p_B; rt_int p_LINE; rt_int l_R_1342; };
struct R27 { int dummy_; R21 * f_E; R26 f_V; rt_int f_HAVE; rt_int f_MODE; R27 * f_NEXT; };
struct R28 { int dummy_; R9 f_NAME; rt_int f_MODE; R22 * f_T; R21 * f_TS; R28 * f_NEXT; };
struct R17 { int dummy_; rt_int f_KIND; R9 f_NAME; R21 * f_HANDLERS; R17 * f_NEXT; };
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
static R21 * g_SEGS_29;
static R9 g_NAME_31;
static R21 * g_MORE_32;
static R21 * g_LAST_33;
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
static void r_PARSE_RECORD_REP(R21 * p_R);
static R21 * r_PARSE_PACKING_SPEC(void);
static R21 * r_PARSE_ELEMENT_SPEC(void);
static R21 * r_PARSE_VARIANT_PACKING(void);
static R9 r_GEN_NAME(void);
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
static R21 * r_BIN_NODE(R9 p_OP, rt_int p_LINE, R21 * p_A, R21 * p_B);
static R21 * r_PARSE_EXPR(void);
static rt_int r_ROUNDING_AHEAD(void);
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
static R21 * r_PARSE_CHARSTRING(R9 p_CHARSET);
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
static void r_CONNECT_KNOWN(R21 * p_E, R21 * p_H);
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
static rt_int r_SAME_LITERALS(R21 * p_A, R21 * p_B);
static R22 * r_ENUM_CLASS(R21 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE);
static void r_DECLARE_LITERALS(R22 * p_T, rt_int p_LINE);
static R12 * r_FIND_LITERAL(R9 p_NAME, R22 * p_T);
static R12 * r_VISIBLE_LITERAL(R9 p_NAME, R22 * p_T);
static rt_int r_LITERAL_CLASSES(R9 p_NAME);
static R22 * r_RESOLVE(R21 * p_TS);
static void r_ATTR_VALUE(R21 * p_E, R9 *p_C, R23 *p_M);
static R22 * r_WITH_RANGE(R22 * p_T, R21 * p_R);
static R23 r_ENUM_MANIFEST(R21 * p_E, R22 * p_T);
static rt_int r_CUR_LEVEL(void);
static R22 * r_ARG_TYPE(R21 * p_N);
static R21 * r_NTH_ARG(R21 * p_TS, rt_int p_K);
static R22 * r_RESOLVE_NAMED(R21 * p_TS, R9 p_CNAME);
static R22 * r_APPLY_REP(R22 * p_T0, R21 * p_R0, rt_int p_LINE);
static R21 * r_EXPAND_REP(R21 * p_R, R22 * p_T, rt_int p_LINE);
static R21 * r_REP_ARG_VALUE(R21 * p_A);
static void r_CHECK_REP_CLASS(R22 * p_T, rt_int p_LINE);
static rt_int r_POW2(rt_int p_N);
static void r_CHECK_FIXED_REP(R22 * p_T, rt_int p_LINE);
static R22 * r_TYPE_ATTR_TYPE(R21 * p_E);
static rt_int r_IS_TYPE_ATTR(R21 * p_E);
static R22 * r_GEN_TYPE(R21 * p_TS);
static R22 * r_RESOLVE_PREDEFINED(R21 * p_TS);
static void r_TYPE_ARG_COUNT(R21 * p_TS, rt_int p_N);
static R23 r_MANIFEST_INTEGER_ARG(R21 * p_A, rstr p_WHAT, rt_int p_LO, rt_int p_HI);
static rt_int r_BOUND_NAME(R21 * p_A);
static void r_CHECK_PRECISION_ARG(R21 * p_P, rt_int p_LINE);
static void r_CHECK_ENUM_REP(R22 * p_T, rt_int p_LINE);
static void r_STRING_LENGTH(R22 * p_T, R21 * p_A);
static R22 * r_RESOLVE_ARRAY(R21 * p_TS);
static R22 * r_RESOLVE_USER(R21 * p_TS);
static R22 * r_ABSTRACT_VIEW(R12 * p_Y, R22 * p_T);
static rt_int r_EXPORTS_ORDER(R12 * p_Y);
static rt_int r_EXPORTS_OP(R12 * p_Y, rstr p_OP);
static rt_int r_IS_UNORDERED(R22 * p_T);
static rt_int r_IN_MODULE(R12 * p_M);
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R21 * p_TS);
static void r_BIND_FORMALS(R21 * p_FORMALS, R21 * p_TS);
static R9 r_RECORD_NAME(R12 * p_Y);
static R22 * r_TARGET(R22 * p_T);
static R9 r_CTYPE(R22 * p_T);
static rt_int r_IS_GENERIC_NODE(R21 * p_E);
static R24 * r_NEW_FIELD(R9 p_NAME, R22 * p_T, rt_int p_KIND);
static R24 * r_FIND_FIELD(R22 * p_T, R9 p_NAME);
static R24 * r_FIND_VFIELD(R22 * p_T, R9 p_NAME);
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL);
static void r_RECORD_FIELDS(R22 * p_T, R21 * p_DECLS, R9 p_TAGN, R21 * p_LABELS, R24 * *p_TAIL);
static void r_CHECK_VARIANT_NAMES(R21 * p_D, R22 * p_TT);
static R22 * r_RESOLVE_RECORD(R21 * p_TS, R9 p_CNAME, R12 * p_Y, R21 * p_FORMALS);
static rt_int r_IS_RECORD_REP(R22 * p_T);
static void r_CHECK_RECORD_REP(R22 * p_T, rt_int p_LINE);
static void r_CHECK_ELEMENTS(R22 * p_T, R21 * p_L, R9 p_TAGN, R21 * p_LABELS, R21 * *p_SEEN);
static R9 r_RECORD_SIZE(R22 * p_T, R9 p_C);
static R9 r_FIELD_SIZE_C(R24 * p_F, R9 p_C);
static R9 r_LAYOUT_ALL(R22 * p_T, R9 p_C, R9 p_TAGN, rt_int p_MODE);
static R9 r_LAYOUT_PARTS(R22 * p_T, R9 p_C);
static R9 r_LAYOUT_SPEC(R22 * p_T, R9 p_C, R21 * p_P, R9 p_TAGN);
static R9 r_LAYOUT_VARIANTS(R22 * p_T, R9 p_C, R9 p_TAGN);
static rt_int r_ARG_MANIFEST(R22 * p_T, R24 * p_F);
static rt_int r_IS_ANY_TAG(R21 * p_A);
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R21 * p_TS);
static rt_int r_SAME_BINDS(R20 * p_A, R20 * p_B);
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
static void r_DECLARE_OBJECTS(R21 * p_D);
static void S_R26(R26 *d, R26 s, int any);
static int E_R26(R26 a, R26 b);
static R26 C_R26(R26 s);
static R26 r_MKET(R9 p_C, R22 * p_T);
static R26 r_MKLV(R9 p_C, R22 * p_T, rt_int p_LVAL, R9 p_SELF);
static R22 * r_INT_TYPE(rt_int p_SCALE);
static R22 * r_STR_TYPE(R9 p_LEN, R23 p_M);
static R9 r_CSTRING(R9 p_T);
static R23 r_MANIFEST(R21 * p_E);
static R23 r_ATTR_MANIFEST(R21 * p_E);
static R23 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R9 p_NAME);
static rt_int r_MANIFEST_ARITH(R9 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE);
static rt_int r_MANIFEST_INT(R21 * p_E);
static rt_int r_BOOL_INT(rt_int p_B);
static R26 r_EXPR(R21 * p_E, R22 * p_WANT);
static R9 r_INT_EXPR(R21 * p_E);
static R9 r_BOOL_EXPR(R21 * p_E);
static R22 * r_BITS_TYPE(rt_int p_LEN);
static R26 r_REAL_LITERAL(R21 * p_E);
static rt_int r_FLOAT_LITERAL_FITS(R21 * p_E, rt_int p_P);
static void r_CHECK_FIXED_LITERAL(R21 * p_E);
static R26 r_STRING_LITERAL(R21 * p_E);
static R22 * r_RESOLVE_USER_NAME(R9 p_NAME, rt_int p_LINE);
static R26 r_ENUM_LITERAL(R21 * p_E, R22 * p_WANT);
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT);
static rt_int r_NAMES_OBJECT(R9 p_NAME);
static rt_int r_IS_STD_REPTYPE(R9 p_NAME);
static rt_int r_IS_REPTYPE_NAME(R9 p_NAME);
static R26 r_REP_CONVERTER(R21 * p_S, R21 * p_E, rt_int p_LINE);
static R26 r_NAME_EXPR(R21 * p_E, R22 * p_WANT);
static R26 r_FIELD_EXPR(R21 * p_E);
static rt_int r_IS_FIXED_LITERAL(R21 * p_A);
static rt_int r_IS_NUMBER_LITERAL(R21 * p_A);
static rt_int r_IS_TYPE_WORD(R9 p_NAME);
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R21 * p_BASE, rt_int p_LINE);
static R23 r_TAG_VALUE(R22 * p_T, R9 p_TAGN);
static rt_int r_LABELS_HAVE(R21 * p_L, rt_int p_V, R22 * p_T);
static R26 r_VALUE_OR_TYPE(R21 * p_E);
static R26 r_INDEX_EXPR(R21 * p_E);
static R9 r_INDEX_VALUE(R21 * p_E);
static R9 r_INDEX_OF(R26 p_V, rt_int p_LINE);
static R26 r_INDEX_EXPR2(R21 * p_E);
static R9 r_OP_NAME(R9 p_OP, rt_int p_UNARY);
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT);
static R27 * r_NODE_ARG(R21 * p_E, rt_int p_MODE, R27 * p_NEXT);
static R12 * r_USER_OPERATOR(R9 p_NAME, R27 * p_ARGS, rt_int p_LINE);
static rt_int r_HAS_USER_ROUTINE(R9 p_NAME);
static R27 * r_QUAL_ARGS(rt_int p_LINE);
static R26 r_OPERATOR_CALL3(R9 p_NAME, R26 p_A, R21 * p_B, R21 * p_C, rt_int p_LINE);
static void r_REQUIRE_MACHINE(rt_int p_LINE);
static R9 r_RESCALE_C(R9 p_C, rt_int p_SFROM, rt_int p_STO);
static R9 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE);
static R9 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R9 p_SELF);
static R9 r_STORE_CODE(R22 * p_T, R9 p_LV, R26 p_V, rt_int p_LINE, R9 p_SELF);
static rt_int r_HAS_ABS_PART(R22 * p_T);
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT);
static R9 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R9 p_LV, R9 p_RV, rt_int p_LINE);
static R9 r_COMPONENT_EQUAL(R22 * p_T, R9 p_A, R9 p_B, rt_int p_LINE);
static R26 r_UNARY(R21 * p_E);
static R26 r_UNARY1(R21 * p_E);
static rt_int r_IS_LITERALISH(R21 * p_E);
static R26 r_BINARY(R21 * p_E);
static R26 r_STD_RESULT(R26 p_V);
static R26 r_APPLY_OPERATOR(R21 * p_E, R9 p_OP, R26 p_A, R26 p_B);
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
static R26 r_EQUALITY(R21 * p_E, R9 p_OP, R26 p_A, R26 p_B);
static R26 r_FIXED_ARITH(R21 * p_E, R9 p_OP, R26 p_A, R26 p_B);
static R26 r_SCALED_OPERATOR(R21 * p_E, R9 p_OP, R26 p_A, R26 p_B);
static R26 r_IN_EXPR(R21 * p_E);
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
static R21 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE);
static R26 r_SIZE_OF(R22 * p_T, R9 p_C);
static R26 r_TYPE_ATTRIBUTE(R9 p_TNAME, R9 p_NAME, rt_int p_LINE);
static R26 r_TYPE_VALUE(R9 p_TNAME, rt_int p_LINE);
static R26 r_TYPE_VALUE_OF(R22 * p_T);
static rt_int r_IS_TYPE_NAME(R21 * p_E);
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R9 p_TNAME, R9 p_A, R9 p_B, rt_int p_LINE);
static R26 r_RECORD_CONSTRUCTOR(R21 * p_E, R22 * p_WANT);
static R21 * r_FIND_INIT(R21 * p_L, R9 p_NAME);
static R26 r_ARRAY_CONSTRUCTOR(R21 * p_E, R22 * p_WANT);
static void r_CHECK_SHAPE(R21 * p_E, rt_int p_DIMS);
static rt_int r_SAME_SHAPE(R21 * p_A, R21 * p_B);
static void r_ARRAY_ELEMENTS(R21 * p_E, rt_int p_DIMS, R22 * p_A, R9 p_TMP, R9 *p_R, rt_int *p_K);
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS);
static R26 r_TYPE_SPECIFIER(R21 * p_E);
static R9 r_ENUM_OF_BITS(R22 * p_T, R9 p_C);
static R9 r_REP_TABLE(R22 * p_T);
static R26 r_NEW_EXPR(R21 * p_E, R22 * p_WANT);
static R21 * r_NTH(R21 * p_L, rt_int p_K);
static void r_NEED_ARGS(R21 * p_E, rt_int p_LO, rt_int p_HI);
static R9 r_ROUNDING_ARG(R21 * p_E, rt_int p_N);
static rt_int r_IS_ROUNDING(R21 * p_E);
static R21 * r_ARG_EXPR(R21 * p_E);
static R9 r_OPERATOR_SYMBOL(R9 p_NAME);
static R26 r_OPERATOR_BUILTIN(R21 * p_E, R22 * p_WANT);
static R21 * r_QUALIFIED(R21 * p_X, R21 * p_Q, rt_int p_LINE);
static rt_int r_IS_ROUNDING_NAME(R9 p_NAME);
static R22 * r_ROUNDINGS_TYPE(void);
static rt_int r_PREDEFINED_ROUNDING(void);
static R21 * r_FIRST_OUT_ARG(R21 * p_E);
static rt_int r_GENERIC_OBJECT_ARG(R21 * p_L);
static R26 r_BUILTIN(R21 * p_E, R22 * p_WANT);
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE);
static R26 r_TO_FIXED_CALL(R21 * p_E);
static rt_int r_STATIC_SIZE_OR(R22 * p_T);
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE);
static void r_TYPE_ARG(R27 * p_A);
static rt_int r_WANT_SENSITIVE(R27 * p_A);
static rt_int r_COUNT_ARGS(R27 * p_A);
static R27 * r_CALL_ARGS(R21 * p_E);
static R26 r_CALL_EXPR(R21 * p_E, R22 * p_WANT);
static R26 r_CALL_EXPR1(R21 * p_E, R22 * p_WANT);
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
static rt_int r_LITERAL_FITS(R21 * p_E, R22 * p_T);
static R12 * r_ARG_ROOT(R21 * p_E);
static R21 * r_PATH_OF(R21 * p_E);
static rt_int r_DISJOINT_PATHS(R21 * p_A, R21 * p_B);
static void r_EXPLICIT_GENERIC_ARGS(R12 * p_Y, R27 * p_ARGS, rt_int p_LINE);
static void r_NAMES_IN(R21 * p_L, R21 * *p_HEAD);
static rt_int r_CONSTANT_EXPR(R21 * p_E);
static rt_int r_CONSTANT_LIST(R21 * p_L);
static rt_int r_PACKED_ELEMENT(R21 * p_E);
static void r_NO_ALIASING(R12 * p_Y, R27 * p_ARGS, rt_int p_LINE);
static void r_NEED_BODY(R12 * p_G);
static R12 * r_INLINE_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE);
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE);
static R22 * r_FORMAL_VIEW(R12 * p_R, R28 * p_P);
static R22 * r_RESULT_VIEW(R12 * p_R);
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R21 * p_TS, R22 * p_T);
static R12 * r_MEMBER_TYPE(R12 * p_M, R9 p_NAME);
static rt_int r_IS_STRUCTURED(R22 * p_T);
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B);
static rt_int r_STATIC_GENERIC(R21 * p_TS);
static R21 * r_OWN_NAMES(R21 * p_R);
static rt_int r_DECLARES_DERIVED(R21 * p_L);
static R22 * r_MARK_GENP(R22 * p_T, R9 p_NAME);
static R12 * r_CUR_GENERIC(void);
static rt_int r_IN_WHERE(R12 * p_G, R9 p_NAME);
static void r_REQUIRE_WHERE(R9 p_NAME, rt_int p_LINE);
static void r_REQUIRE_WHERE_SUBSET(R12 * p_Y, rt_int p_LINE);
static rt_int r_HAS_GEN_ARG(R21 * p_A);
static void r_ROUTINE_HEADER(R12 * p_Y);
static void r_ROUTINE_HEADER1(R12 * p_Y);
static R22 * r_RESULT_TYPE(R12 * p_Y);
static R9 r_C_HEADER(R12 * p_Y);
static void r_DEFINE_PARAM_GENS(R22 * p_T, R9 p_PC, rt_int p_LINE, rt_int p_CHECK);
static rt_int r_IS_GEN_TEXT(R9 p_T);
static R9 r_GEN_TEXT_NAME(R9 p_T);
static void r_DEFINE_GEN(R9 p_NAME, R9 p_C, rt_int p_LINE, rt_int p_CHECK);
static R20 * r_NEW_BINDS(void);
static void r_ADD_BIND(R9 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R20 * p_HEAD);
static R20 * r_FIND_BIND(R20 * p_BS, R9 p_NAME);
static rt_int r_UNIFY(R21 * p_TS, R22 * p_T, R20 * p_BS);
static rt_int r_SAME_DERIVED_LENGTH(R21 * p_A, R22 * p_RT, R20 * p_BS);
static rt_int r_UNIFY_REP(R21 * p_R, R22 * p_RT, R20 * p_BS);
static rt_int r_NONSTANDARD_REP(R22 * p_T);
static R12 * r_RECORD_CLASS_OF(R22 * p_T);
static rt_int r_UNIFY_VALUE(R21 * p_A, R23 p_M, R20 * p_BS);
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R20 * p_BS);
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE);
static rt_int r_SAME_STATIC_BINDS(R20 * p_A, R20 * p_B);
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B);
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B);
static R12 * r_ROUTINE_ARGUMENT(R21 * p_TS, R21 * p_E, rt_int p_LINE);
static R12 * r_FIND_ROUTINE_ARG(R21 * p_TS, R21 * p_E, R20 * p_BS0, rt_int p_LINE, rt_int p_STRICT);
static rt_int r_EXPLICIT_TEMPLATE_FITS(R21 * p_E, R12 * p_R);
static rt_int r_TEMPLATE_FITS(R21 * p_TS, R12 * p_R, R20 * p_BS);
static rt_int r_TYPE_FITS_SPEC(R21 * p_TS, R22 * p_T, R20 * p_BS);
static rt_int r_HAS_DERIVED(R21 * p_TS);
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R20 * p_BS);
static rt_int r_DONTCARE_TYPE_ARG(R21 * p_TS);
static R12 * r_NEW_INSTANCE(R12 * p_G, R20 * p_BS, R27 * p_ARGS);
static rt_int r_IS_OPERATOR_NAME(R9 p_NAME);
static R21 * r_SUBST_FORMALS(R21 * p_TS, R21 * p_FORMALS, R21 * p_ARGS);
static R21 * r_COPY_NODE(R21 * p_N);
static rt_int r_IN_IDENTS(R21 * p_L, R9 p_NAME);
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE);
static void r_COMPUTE_USES(R12 * p_Y);
static rt_int r_LOCAL_MODULE_EXPORTS(R21 * p_B, R9 p_NAME);
static void r_ROUTINE_USES(R21 * p_RS);
static void r_IMPORTS_KNOWN(R21 * p_L, rt_int p_INOUT);
static void r_INPUT_IMPORT_CONFLICT(R21 * p_ITEMS, rt_int p_LINE);
static void r_ADD_USES(R21 * p_L, R21 * *p_HEAD, R21 * *p_TAIL);
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE);
static rt_int r_IMPORTED_ROUTINE_USES(R21 * p_RS, R9 p_NAME);
static rt_int r_MODULE_IMPORTED(R21 * p_MODS, R12 * p_Y);
static R9 r_BASE_NAME(R12 * p_Y);
static rt_int r_HANDLER_EXISTS(R9 p_NAME);
static void r_PUSH_CTX(rt_int p_KIND, R9 p_NAME);
static void r_POP_CTX(void);
static R17 * r_LEAVE(rt_int p_KIND);
static rt_int r_GUARDS(void);
static R9 r_EXC_NAME(R9 p_NAME);
static void r_DECLARE_TYPES(R21 * p_DECLS);
static void r_REFERS(R21 * p_L, R9 p_TARGET, R21 * p_DECLS, R21 * *p_SEEN, rt_int *p_FOUND);
static rt_int r_TAG_MISUSED(R21 * p_L, R9 p_NAME);
static rt_int r_TAG_MISUSED1(R21 * p_N, R9 p_NAME);
static rt_int r_NAMES_VARIABLE(R21 * p_L, R21 * p_DECLS);
static void r_GEN_NAMES(R21 * p_L, R21 * *p_HEAD);
static rt_int r_NAMES_VARIABLE_BUT(R21 * p_L, R21 * p_DECLS, R21 * p_EXCL);
static rt_int r_HAS_PRINTING_CHAR(R21 * p_L);
static R22 * r_DEFAULT_CHARSET(rt_int p_LINE);
static R22 * r_CHARSET_OF(R22 * p_T);
static void r_SAME_CHARSET(R22 * p_A, R22 * p_B, rt_int p_LINE);
static void r_ASCII_ONLY(R22 * p_T, rstr p_WHAT, rt_int p_LINE);
static void r_DECLARE_LABELS(R21 * p_S0);
static void r_BODY(R21 * p_B);
static void r_OPEN_BODY(R21 * p_B);
static void r_GUARDED(R21 * p_S, R21 * p_BODY_NODE, R21 * p_HANDLERS);
static void r_INTERFERENCE(R21 * p_S);
static void r_COLLECT_LIST(R21 * p_L, R21 * *p_NAMES, R21 * *p_CALLS);
static void r_COLLECT_REFS(R21 * p_E, R21 * *p_NAMES, R21 * *p_CALLS);
static R21 * r_NAME_REF(R9 p_NAME, rt_int p_OWNER, R21 * p_A, R21 * p_L);
static R21 * r_ROUTINE_DATA(R9 p_NAME, rt_int p_INOUT);
static R21 * r_DATA_OF(R12 * p_Y, rt_int p_INOUT, rt_int p_DEPTH);
static rt_int r_HAS_REF(R21 * p_L, R9 p_NAME, rt_int p_OWNER);
static R21 * r_INTERSECT_REFS(R21 * p_A, R21 * p_B);
static void r_CHECK_INTERFERENCE(R21 * p_NAMES, R21 * p_CALLS, rt_int p_LINE, rt_int p_ASSERTION);
static rt_int r_IN_HANDLERS(R21 * p_HS, R9 p_NAME);
static rt_int r_IS_STRUCTURED_STMT(R21 * p_S);
static R21 * r_NAMED_ROOT(R21 * p_E);
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
static R25 * r_DISTINCT_LABEL(R25 * p_SEEN, rt_int p_A, rt_int p_B, rt_int p_LINE);
static void r_VALUE_CASE(R21 * p_S, R26 p_CH);
static R26 r_CASE_LABEL(R21 * p_L, R22 * p_T);
static R9 r_VALUE_COMPARE(R26 p_A, R26 p_B, R9 p_OP);
static void r_CASE_ELEMENT(R21 * p_B, R21 * p_HANDLERS);
static R12 * r_DISCRIMINATED(R21 * p_CH);
static R22 * r_NARROW(R22 * p_T, R9 p_TAGN, rt_int p_V);
static void r_MACHINE_CASE(R21 * p_S);
static R22 * r_PATHS_TYPE(void);
static void r_PARALLEL_BLOCK(R21 * p_S);
static void r_ACTIVATE_PATH(R21 * p_P, R9 p_TD);
static R9 r_UP_FRAME(void);
static void r_PATH_BODY(R21 * p_P, R9 p_FN, R9 p_FT, R22 * p_LT);
static R9 r_JOIN_BUF(R14 p_B);
static R9 r_PATH_REF(R21 * p_E);
static void r_TERMINATE_STMT(R21 * p_S);
static R26 r_PARALLEL_BUILTIN(R21 * p_E, R22 * p_WANT);
static R26 r_START_IO_CALL(R21 * p_E);
static void r_ENTER_ISCOPE(R21 * p_IMPORTS, R21 * p_SIGNALS, R9 p_NAME);
static void r_LEAVE_ISCOPE(void);
static R9 r_ROUTINE_CNAME(R9 p_NAME);
static rt_int r_NEEDS_FRAME(R21 * p_B);
static rt_int r_HAS_HANDLERS(R21 * p_S0);
static void r_DECLARE_ROUTINE_SYM(R21 * p_R);
static void r_DECLARE_MEMBERS(R21 * p_RS);
static void r_ROUTINE_HEADERS(R21 * p_RS);
static void r_DISTINCT_SIGNATURES(R21 * p_RS);
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
static void r_CHECK_EXPORT_ITEM(R12 * p_M, R21 * p_X);
static rt_int r_MEMBER_NAMED(R12 * p_M, R9 p_NAME);
static rt_int r_EXPORTED_BY(R21 * p_D, R12 * p_Y);
static R12 * r_ORIG_LOOKUP_MEMBER(R9 p_NAME, R12 * p_Y);
static void r_MODULE_DATA(R21 * p_RS);
static void r_ROUTINE_BODIES(R21 * p_RS);
static void r_PENDING_BODIES(void);
static void r_CLOSED_BODY(R21 * p_B);
static void r_ROUTINE_BODY(R12 * p_Y);
static void r_BIND_INSTANCE(R20 * p_BS, rt_int p_LINE);
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST);
static rt_int r_USES_SEGMENT(R21 * p_S, rstr p_NAME);
static rt_int r_SEGMENT_READY(R21 * p_S, R21 * p_SEGS);
static R9 r_MISSING_SEGMENT(R21 * p_SEGS);
static void r_TRANSLATE(R21 * p_SEGS);
static rt_int r_FROM_DEFINED_MODULE(R21 * p_S, R12 * p_Y);
static void r_SEGMENT_EXPORTS(R21 * p_S);
static void r_BEGIN_SEGMENT(R21 * p_S);
static R12 * r_ENTER_HOME(R12 * p_Y);
static void r_DEFINE_ALIAS(R12 * p_A);
static void r_LEAVE_HOME(R12 * p_Y, R12 * p_SAVED);
static R12 * r_FIND_SEGMENT(R9 p_NAME);
static void r_CHECK_ITEMS_DEFINED(R12 * p_T, R21 * p_L);
static rt_int r_SEG_VISIBLE(R12 * p_Y, rt_int p_LINE);
static rt_int r_FROM_MODULES(R21 * p_MODS, R12 * p_Y);
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
static void S_R7(R7 *d, R7 s, int any) {  rt_b_assign(&d->f_ARENA, s.f_ARENA); d->f_TOP = s.f_TOP; S_A8(&d->f_SRC, s.f_SRC, 0); d->f_NSRC = s.f_NSRC; d->f_LEXED = s.f_LEXED; d->f_LEXLINE = s.f_LEXLINE; S_R9(&d->f_LIBDIR, s.f_LIBDIR, 0); d->f_SUPPRESS = s.f_SUPPRESS; d->f_WORD = s.f_WORD; S_A11(&d->f_TOKS, s.f_TOKS, 0); d->f_NTOKS = s.f_NTOKS; d->f_POS = s.f_POS; S_A13(&d->f_TABLE, s.f_TABLE, 0); d->f_SCOPE = s.f_SCOPE; d->f_DEPTH = s.f_DEPTH; S_A16(&d->f_OUT, s.f_OUT, 0); S_R14(&d->f_CODE, s.f_CODE, 0); d->f_CTXS = s.f_CTXS; d->f_CS = s.f_CS; d->f_IS = s.f_IS; d->f_NSCOPES = s.f_NSCOPES; d->f_MODL = s.f_MODL; d->f_BINDS = s.f_BINDS; d->f_ROUNDED = s.f_ROUNDED; d->f_QUAL = s.f_QUAL; d->f_SQUAL = s.f_SQUAL; d->f_TYPECHECK = s.f_TYPECHECK; d->f_CHARSETS = s.f_CHARSETS; d->f_IN_RECORD = s.f_IN_RECORD; d->f_IN_TYPEDECL = s.f_IN_TYPEDECL; d->f_REPCONV = s.f_REPCONV; d->f_LDONE = s.f_LDONE; d->f_NEW_OK = s.f_NEW_OK; d->f_START_IO = s.f_START_IO; d->f_MACHINE = s.f_MACHINE; d->f_SERIAL = s.f_SERIAL; d->f_EXCS = s.f_EXCS; d->f_TY_INT = s.f_TY_INT; d->f_TY_BOOL = s.f_TY_BOOL; d->f_TY_STR = s.f_TY_STR; d->f_TY_VOID = s.f_TY_VOID; d->f_TY_NIL = s.f_TY_NIL; d->f_TY_ASCII = s.f_TY_ASCII; d->f_TY_FLOAT = s.f_TY_FLOAT; d->f_TY_BITS = s.f_TY_BITS; d->f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d->f_TY_TYPE = s.f_TY_TYPE; d->f_PENDING = s.f_PENDING; d->f_CNAMES = s.f_CNAMES; d->f_ENUMS = s.f_ENUMS; d->f_SEGS = s.f_SEGS; d->f_CURSEG = s.f_CURSEG; d->f_TRSEG = s.f_TRSEG; d->f_ARRAYS = s.f_ARRAYS; d->f_RECS = s.f_RECS; }
static int E_R7(R7 a, R7 b) { return 1 && rt_b_eq(a.f_ARENA, b.f_ARENA) && (a.f_TOP == b.f_TOP) && E_A8(a.f_SRC, b.f_SRC) && (a.f_NSRC == b.f_NSRC) && (a.f_LEXED == b.f_LEXED) && (a.f_LEXLINE == b.f_LEXLINE) && E_R9(a.f_LIBDIR, b.f_LIBDIR) && (a.f_SUPPRESS == b.f_SUPPRESS) && (a.f_WORD == b.f_WORD) && E_A11(a.f_TOKS, b.f_TOKS) && (a.f_NTOKS == b.f_NTOKS) && (a.f_POS == b.f_POS) && E_A13(a.f_TABLE, b.f_TABLE) && (a.f_SCOPE == b.f_SCOPE) && (a.f_DEPTH == b.f_DEPTH) && E_A16(a.f_OUT, b.f_OUT) && E_R14(a.f_CODE, b.f_CODE) && (a.f_CTXS == b.f_CTXS) && (a.f_CS == b.f_CS) && (a.f_IS == b.f_IS) && (a.f_NSCOPES == b.f_NSCOPES) && (a.f_MODL == b.f_MODL) && (a.f_BINDS == b.f_BINDS) && (a.f_ROUNDED == b.f_ROUNDED) && (a.f_QUAL == b.f_QUAL) && (a.f_SQUAL == b.f_SQUAL) && (a.f_TYPECHECK == b.f_TYPECHECK) && (a.f_CHARSETS == b.f_CHARSETS) && (a.f_IN_RECORD == b.f_IN_RECORD) && (a.f_IN_TYPEDECL == b.f_IN_TYPEDECL) && (a.f_REPCONV == b.f_REPCONV) && (a.f_LDONE == b.f_LDONE) && (a.f_NEW_OK == b.f_NEW_OK) && (a.f_START_IO == b.f_START_IO) && (a.f_MACHINE == b.f_MACHINE) && (a.f_SERIAL == b.f_SERIAL) && (a.f_EXCS == b.f_EXCS) && (a.f_TY_INT == b.f_TY_INT) && (a.f_TY_BOOL == b.f_TY_BOOL) && (a.f_TY_STR == b.f_TY_STR) && (a.f_TY_VOID == b.f_TY_VOID) && (a.f_TY_NIL == b.f_TY_NIL) && (a.f_TY_ASCII == b.f_TY_ASCII) && (a.f_TY_FLOAT == b.f_TY_FLOAT) && (a.f_TY_BITS == b.f_TY_BITS) && (a.f_TY_ROUNDINGS == b.f_TY_ROUNDINGS) && (a.f_TY_TYPE == b.f_TY_TYPE) && (a.f_PENDING == b.f_PENDING) && (a.f_CNAMES == b.f_CNAMES) && (a.f_ENUMS == b.f_ENUMS) && (a.f_SEGS == b.f_SEGS) && (a.f_CURSEG == b.f_CURSEG) && (a.f_TRSEG == b.f_TRSEG) && (a.f_ARRAYS == b.f_ARRAYS) && (a.f_RECS == b.f_RECS); }
static R7 C_R7(R7 s) { R7 d = s;
 d.f_ARENA = rt_str_copy(s.f_ARENA); d.f_TOP = s.f_TOP; d.f_SRC = C_A8(s.f_SRC); d.f_NSRC = s.f_NSRC; d.f_LEXED = s.f_LEXED; d.f_LEXLINE = s.f_LEXLINE; d.f_LIBDIR = C_R9(s.f_LIBDIR); d.f_SUPPRESS = s.f_SUPPRESS; d.f_WORD = s.f_WORD; d.f_TOKS = C_A11(s.f_TOKS); d.f_NTOKS = s.f_NTOKS; d.f_POS = s.f_POS; d.f_TABLE = C_A13(s.f_TABLE); d.f_SCOPE = s.f_SCOPE; d.f_DEPTH = s.f_DEPTH; d.f_OUT = C_A16(s.f_OUT); d.f_CODE = C_R14(s.f_CODE); d.f_CTXS = s.f_CTXS; d.f_CS = s.f_CS; d.f_IS = s.f_IS; d.f_NSCOPES = s.f_NSCOPES; d.f_MODL = s.f_MODL; d.f_BINDS = s.f_BINDS; d.f_ROUNDED = s.f_ROUNDED; d.f_QUAL = s.f_QUAL; d.f_SQUAL = s.f_SQUAL; d.f_TYPECHECK = s.f_TYPECHECK; d.f_CHARSETS = s.f_CHARSETS; d.f_IN_RECORD = s.f_IN_RECORD; d.f_IN_TYPEDECL = s.f_IN_TYPEDECL; d.f_REPCONV = s.f_REPCONV; d.f_LDONE = s.f_LDONE; d.f_NEW_OK = s.f_NEW_OK; d.f_START_IO = s.f_START_IO; d.f_MACHINE = s.f_MACHINE; d.f_SERIAL = s.f_SERIAL; d.f_EXCS = s.f_EXCS; d.f_TY_INT = s.f_TY_INT; d.f_TY_BOOL = s.f_TY_BOOL; d.f_TY_STR = s.f_TY_STR; d.f_TY_VOID = s.f_TY_VOID; d.f_TY_NIL = s.f_TY_NIL; d.f_TY_ASCII = s.f_TY_ASCII; d.f_TY_FLOAT = s.f_TY_FLOAT; d.f_TY_BITS = s.f_TY_BITS; d.f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d.f_TY_TYPE = s.f_TY_TYPE; d.f_PENDING = s.f_PENDING; d.f_CNAMES = s.f_CNAMES; d.f_ENUMS = s.f_ENUMS; d.f_SEGS = s.f_SEGS; d.f_CURSEG = s.f_CURSEG; d.f_TRSEG = s.f_TRSEG; d.f_ARRAYS = s.f_ARRAYS; d.f_RECS = s.f_RECS; return d; }
static void S_R23(R23 *d, R23 s, int any) {  d->f_OK = s.f_OK; d->f_V = s.f_V; }
static int E_R23(R23 a, R23 b) { return 1 && (a.f_OK == b.f_OK) && (a.f_V == b.f_V); }
static R23 C_R23(R23 s) { R23 d = s;
 d.f_OK = s.f_OK; d.f_V = s.f_V; return d; }
static void S_R26(R26 *d, R26 s, int any) {  S_R9(&d->f_C, s.f_C, 0); d->f_T = s.f_T; d->f_LVAL = s.f_LVAL; S_R9(&d->f_SELF, s.f_SELF, 0); }
static int E_R26(R26 a, R26 b) { return 1 && E_R9(a.f_C, b.f_C) && (a.f_T == b.f_T) && (a.f_LVAL == b.f_LVAL) && E_R9(a.f_SELF, b.f_SELF); }
static R26 C_R26(R26 s) { R26 d = s;
 d.f_C = C_R9(s.f_C); d.f_T = s.f_T; d.f_LVAL = s.f_LVAL; d.f_SELF = C_R9(s.f_SELF); return d; }
static void S_R21(R21 *d, R21 s, int any) {  d->f_KIND = s.f_KIND; d->f_LINE = s.f_LINE; d->f_IV = s.f_IV; S_R9(&d->f_NAME, s.f_NAME, 0); d->f_A = s.f_A; d->f_B = s.f_B; d->f_C = s.f_C; d->f_D = s.f_D; d->f_E = s.f_E; d->f_NEXT = s.f_NEXT; d->f_FL = s.f_FL; }
static int E_R21(R21 a, R21 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_LINE == b.f_LINE) && (a.f_IV == b.f_IV) && E_R9(a.f_NAME, b.f_NAME) && (a.f_A == b.f_A) && (a.f_B == b.f_B) && (a.f_C == b.f_C) && (a.f_D == b.f_D) && (a.f_E == b.f_E) && (a.f_NEXT == b.f_NEXT) && (a.f_FL == b.f_FL); }
static R21 C_R21(R21 s) { R21 d = s;
 d.f_KIND = s.f_KIND; d.f_LINE = s.f_LINE; d.f_IV = s.f_IV; d.f_NAME = C_R9(s.f_NAME); d.f_A = s.f_A; d.f_B = s.f_B; d.f_C = s.f_C; d.f_D = s.f_D; d.f_E = s.f_E; d.f_NEXT = s.f_NEXT; d.f_FL = s.f_FL; return d; }
static void S_R15(R15 *d, R15 s, int any) {  S_R9(&d->f_T, s.f_T, 0); d->f_NEXT = s.f_NEXT; }
static int E_R15(R15 a, R15 b) { return 1 && E_R9(a.f_T, b.f_T) && (a.f_NEXT == b.f_NEXT); }
static R15 C_R15(R15 s) { R15 d = s;
 d.f_T = C_R9(s.f_T); d.f_NEXT = s.f_NEXT; return d; }
static void S_R12(R12 *d, R12 s, int any) {  d->f_KIND = s.f_KIND; d->f_DEPTH = s.f_DEPTH; d->f_LEVEL = s.f_LEVEL; S_R9(&d->f_NAME, s.f_NAME, 0); d->f_T = s.f_T; S_R9(&d->f_ACCESS, s.f_ACCESS, 0); S_R9(&d->f_FIELD, s.f_FIELD, 0); d->f_INPUT = s.f_INPUT; d->f_BYREF = s.f_BYREF; d->f_HASMV = s.f_HASMV; d->f_MV = s.f_MV; d->f_TS = s.f_TS; d->f_BUSY = s.f_BUSY; S_R9(&d->f_FWD, s.f_FWD, 0); d->f_PARAMS = s.f_PARAMS; d->f_RESULT = s.f_RESULT; d->f_DECL = s.f_DECL; S_R9(&d->f_PREFIX, s.f_PREFIX, 0); d->f_MODL = s.f_MODL; d->f_EXPORTED = s.f_EXPORTED; d->f_GENERIC = s.f_GENERIC; d->f_FRAMED = s.f_FRAMED; d->f_USES = s.f_USES; d->f_INSTANCES = s.f_INSTANCES; d->f_BINDINGS = s.f_BINDINGS; d->f_ORIG = s.f_ORIG; d->f_MEMBERS = s.f_MEMBERS; d->f_SAVED = s.f_SAVED; d->f_OWNER = s.f_OWNER; d->f_WITHV = s.f_WITHV; d->f_LAZY = s.f_LAZY; d->f_SEGM = s.f_SEGM; d->f_HOME = s.f_HOME; d->f_CHAIN = s.f_CHAIN; d->f_SNEXT = s.f_SNEXT; }
static int E_R12(R12 a, R12 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_DEPTH == b.f_DEPTH) && (a.f_LEVEL == b.f_LEVEL) && E_R9(a.f_NAME, b.f_NAME) && (a.f_T == b.f_T) && E_R9(a.f_ACCESS, b.f_ACCESS) && E_R9(a.f_FIELD, b.f_FIELD) && (a.f_INPUT == b.f_INPUT) && (a.f_BYREF == b.f_BYREF) && (a.f_HASMV == b.f_HASMV) && (a.f_MV == b.f_MV) && (a.f_TS == b.f_TS) && (a.f_BUSY == b.f_BUSY) && E_R9(a.f_FWD, b.f_FWD) && (a.f_PARAMS == b.f_PARAMS) && (a.f_RESULT == b.f_RESULT) && (a.f_DECL == b.f_DECL) && E_R9(a.f_PREFIX, b.f_PREFIX) && (a.f_MODL == b.f_MODL) && (a.f_EXPORTED == b.f_EXPORTED) && (a.f_GENERIC == b.f_GENERIC) && (a.f_FRAMED == b.f_FRAMED) && (a.f_USES == b.f_USES) && (a.f_INSTANCES == b.f_INSTANCES) && (a.f_BINDINGS == b.f_BINDINGS) && (a.f_ORIG == b.f_ORIG) && (a.f_MEMBERS == b.f_MEMBERS) && (a.f_SAVED == b.f_SAVED) && (a.f_OWNER == b.f_OWNER) && (a.f_WITHV == b.f_WITHV) && (a.f_LAZY == b.f_LAZY) && (a.f_SEGM == b.f_SEGM) && (a.f_HOME == b.f_HOME) && (a.f_CHAIN == b.f_CHAIN) && (a.f_SNEXT == b.f_SNEXT); }
static R12 C_R12(R12 s) { R12 d = s;
 d.f_KIND = s.f_KIND; d.f_DEPTH = s.f_DEPTH; d.f_LEVEL = s.f_LEVEL; d.f_NAME = C_R9(s.f_NAME); d.f_T = s.f_T; d.f_ACCESS = C_R9(s.f_ACCESS); d.f_FIELD = C_R9(s.f_FIELD); d.f_INPUT = s.f_INPUT; d.f_BYREF = s.f_BYREF; d.f_HASMV = s.f_HASMV; d.f_MV = s.f_MV; d.f_TS = s.f_TS; d.f_BUSY = s.f_BUSY; d.f_FWD = C_R9(s.f_FWD); d.f_PARAMS = s.f_PARAMS; d.f_RESULT = s.f_RESULT; d.f_DECL = s.f_DECL; d.f_PREFIX = C_R9(s.f_PREFIX); d.f_MODL = s.f_MODL; d.f_EXPORTED = s.f_EXPORTED; d.f_GENERIC = s.f_GENERIC; d.f_FRAMED = s.f_FRAMED; d.f_USES = s.f_USES; d.f_INSTANCES = s.f_INSTANCES; d.f_BINDINGS = s.f_BINDINGS; d.f_ORIG = s.f_ORIG; d.f_MEMBERS = s.f_MEMBERS; d.f_SAVED = s.f_SAVED; d.f_OWNER = s.f_OWNER; d.f_WITHV = s.f_WITHV; d.f_LAZY = s.f_LAZY; d.f_SEGM = s.f_SEGM; d.f_HOME = s.f_HOME; d.f_CHAIN = s.f_CHAIN; d.f_SNEXT = s.f_SNEXT; return d; }
static void S_R18(R18 *d, R18 s, int any) {  d->f_LEVEL = s.f_LEVEL; d->f_R = s.f_R; d->f_FRAMED = s.f_FRAMED; S_R9(&d->f_FTYPE, s.f_FTYPE, 0); S_R14(&d->f_FIELDS, s.f_FIELDS, 0); d->f_UP = s.f_UP; d->f_IMPORTS = s.f_IMPORTS; d->f_SIGNALS = s.f_SIGNALS; d->f_RESULT = s.f_RESULT; d->f_IS_PATH = s.f_IS_PATH; S_R9(&d->f_COPYOUT, s.f_COPYOUT, 0); }
static int E_R18(R18 a, R18 b) { return 1 && (a.f_LEVEL == b.f_LEVEL) && (a.f_R == b.f_R) && (a.f_FRAMED == b.f_FRAMED) && E_R9(a.f_FTYPE, b.f_FTYPE) && E_R14(a.f_FIELDS, b.f_FIELDS) && (a.f_UP == b.f_UP) && (a.f_IMPORTS == b.f_IMPORTS) && (a.f_SIGNALS == b.f_SIGNALS) && (a.f_RESULT == b.f_RESULT) && (a.f_IS_PATH == b.f_IS_PATH) && E_R9(a.f_COPYOUT, b.f_COPYOUT); }
static R18 C_R18(R18 s) { R18 d = s;
 d.f_LEVEL = s.f_LEVEL; d.f_R = s.f_R; d.f_FRAMED = s.f_FRAMED; d.f_FTYPE = C_R9(s.f_FTYPE); d.f_FIELDS = C_R14(s.f_FIELDS); d.f_UP = s.f_UP; d.f_IMPORTS = s.f_IMPORTS; d.f_SIGNALS = s.f_SIGNALS; d.f_RESULT = s.f_RESULT; d.f_IS_PATH = s.f_IS_PATH; d.f_COPYOUT = C_R9(s.f_COPYOUT); return d; }
static void S_R19(R19 *d, R19 s, int any) {  d->f_ID = s.f_ID; d->f_IMPORTS = s.f_IMPORTS; d->f_SIGNALS = s.f_SIGNALS; S_R9(&d->f_NAME, s.f_NAME, 0); d->f_UP = s.f_UP; }
static int E_R19(R19 a, R19 b) { return 1 && (a.f_ID == b.f_ID) && (a.f_IMPORTS == b.f_IMPORTS) && (a.f_SIGNALS == b.f_SIGNALS) && E_R9(a.f_NAME, b.f_NAME) && (a.f_UP == b.f_UP); }
static R19 C_R19(R19 s) { R19 d = s;
 d.f_ID = s.f_ID; d.f_IMPORTS = s.f_IMPORTS; d.f_SIGNALS = s.f_SIGNALS; d.f_NAME = C_R9(s.f_NAME); d.f_UP = s.f_UP; return d; }
static void S_R22(R22 *d, R22 s, int any) {  d->f_KIND = s.f_KIND; d->f_SCALE = s.f_SCALE; S_R9(&d->f_LO_C, s.f_LO_C, 0); S_R9(&d->f_HI_C, s.f_HI_C, 0); S_R23(&d->f_MLO, s.f_MLO, 0); S_R23(&d->f_MHI, s.f_MHI, 0); d->f_RLEVEL = s.f_RLEVEL; S_R9(&d->f_LEN_C, s.f_LEN_C, 0); S_R23(&d->f_MLEN, s.f_MLEN, 0); S_R9(&d->f_GEN, s.f_GEN, 0); d->f_BASE = s.f_BASE; d->f_ELEM = s.f_ELEM; d->f_TARGET = s.f_TARGET; d->f_TARGET_TS = s.f_TARGET_TS; d->f_FIELDS = s.f_FIELDS; d->f_LITS = s.f_LITS; d->f_NLITS = s.f_NLITS; d->f_UNORDERED = s.f_UNORDERED; d->f_BOUNDS = s.f_BOUNDS; d->f_DIMS = s.f_DIMS; d->f_ARGS = s.f_ARGS; S_R9(&d->f_NAME, s.f_NAME, 0); S_R9(&d->f_CNAME, s.f_CNAME, 0); d->f_MODL = s.f_MODL; d->f_REPS = s.f_REPS; d->f_DECL = s.f_DECL; S_R9(&d->f_GENP, s.f_GENP, 0); }
static int E_R22(R22 a, R22 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_SCALE == b.f_SCALE) && E_R9(a.f_LO_C, b.f_LO_C) && E_R9(a.f_HI_C, b.f_HI_C) && E_R23(a.f_MLO, b.f_MLO) && E_R23(a.f_MHI, b.f_MHI) && (a.f_RLEVEL == b.f_RLEVEL) && E_R9(a.f_LEN_C, b.f_LEN_C) && E_R23(a.f_MLEN, b.f_MLEN) && E_R9(a.f_GEN, b.f_GEN) && (a.f_BASE == b.f_BASE) && (a.f_ELEM == b.f_ELEM) && (a.f_TARGET == b.f_TARGET) && (a.f_TARGET_TS == b.f_TARGET_TS) && (a.f_FIELDS == b.f_FIELDS) && (a.f_LITS == b.f_LITS) && (a.f_NLITS == b.f_NLITS) && (a.f_UNORDERED == b.f_UNORDERED) && (a.f_BOUNDS == b.f_BOUNDS) && (a.f_DIMS == b.f_DIMS) && (a.f_ARGS == b.f_ARGS) && E_R9(a.f_NAME, b.f_NAME) && E_R9(a.f_CNAME, b.f_CNAME) && (a.f_MODL == b.f_MODL) && (a.f_REPS == b.f_REPS) && (a.f_DECL == b.f_DECL) && E_R9(a.f_GENP, b.f_GENP); }
static R22 C_R22(R22 s) { R22 d = s;
 d.f_KIND = s.f_KIND; d.f_SCALE = s.f_SCALE; d.f_LO_C = C_R9(s.f_LO_C); d.f_HI_C = C_R9(s.f_HI_C); d.f_MLO = C_R23(s.f_MLO); d.f_MHI = C_R23(s.f_MHI); d.f_RLEVEL = s.f_RLEVEL; d.f_LEN_C = C_R9(s.f_LEN_C); d.f_MLEN = C_R23(s.f_MLEN); d.f_GEN = C_R9(s.f_GEN); d.f_BASE = s.f_BASE; d.f_ELEM = s.f_ELEM; d.f_TARGET = s.f_TARGET; d.f_TARGET_TS = s.f_TARGET_TS; d.f_FIELDS = s.f_FIELDS; d.f_LITS = s.f_LITS; d.f_NLITS = s.f_NLITS; d.f_UNORDERED = s.f_UNORDERED; d.f_BOUNDS = s.f_BOUNDS; d.f_DIMS = s.f_DIMS; d.f_ARGS = s.f_ARGS; d.f_NAME = C_R9(s.f_NAME); d.f_CNAME = C_R9(s.f_CNAME); d.f_MODL = s.f_MODL; d.f_REPS = s.f_REPS; d.f_DECL = s.f_DECL; d.f_GENP = C_R9(s.f_GENP); return d; }
static void S_R20(R20 *d, R20 s, int any) {  S_R9(&d->f_NAME, s.f_NAME, 0); d->f_T = s.f_T; S_R9(&d->f_C, s.f_C, 0); d->f_HASMV = s.f_HASMV; d->f_MV = s.f_MV; d->f_R = s.f_R; d->f_NEXT = s.f_NEXT; }
static int E_R20(R20 a, R20 b) { return 1 && E_R9(a.f_NAME, b.f_NAME) && (a.f_T == b.f_T) && E_R9(a.f_C, b.f_C) && (a.f_HASMV == b.f_HASMV) && (a.f_MV == b.f_MV) && (a.f_R == b.f_R) && (a.f_NEXT == b.f_NEXT); }
static R20 C_R20(R20 s) { R20 d = s;
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
static void S_R17(R17 *d, R17 s, int any) {  d->f_KIND = s.f_KIND; S_R9(&d->f_NAME, s.f_NAME, 0); d->f_HANDLERS = s.f_HANDLERS; d->f_NEXT = s.f_NEXT; }
static int E_R17(R17 a, R17 b) { return 1 && (a.f_KIND == b.f_KIND) && E_R9(a.f_NAME, b.f_NAME) && (a.f_HANDLERS == b.f_HANDLERS) && (a.f_NEXT == b.f_NEXT); }
static R17 C_R17(R17 s) { R17 d = s;
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
rstr l_T_141; memset(&l_T_141, 0, sizeof l_T_141);
l_T_141 = rt_b_str_new((rt_int)(rt_read_file(l_FNAME_140)).len, 0);
rt_b_assign(&l_T_141, rt_read_file(l_FNAME_140));
if ((rt_add(rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (rt_int)(l_T_141).len), ((rt_int)1LL)) >= g_MAX_SOURCE))
{
r_FAIL(((rt_int)0LL), rt_str("the source is too long", 22));
}
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = ((rt_int)10LL);
((*(R7 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
{ rt_int it143_lo = ((rt_int)0LL), it143_hi = rt_sub((rt_int)(l_T_141).len, ((rt_int)1LL));
for (rt_int it143 = it143_lo; it143 <= it143_hi; it143++) {
{
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = r_CODE_OF(rt_b_slice(l_T_141, it143, it143));
((*(R7 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
}
RT_B_TICK();
if (it143 == it143_hi) break;
} } L_end142: ;
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = ((rt_int)0LL);
}
}
static R10 r_CUR(void) { RT_B_TICK(); 
{ R10 rv144 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv144; }
rt_raise(RT_X_INIT);
}
static R10 r_AHEAD(rt_int p_K) { RT_B_TICK(); 
if ((rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, p_K) >= ((*(R7 *)rt_nil_check(g_W))).f_NTOKS))
{
{ R10 rv145 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv145; }
}
{ R10 rv146 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, p_K), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv146; }
rt_raise(RT_X_INIT);
}
static rt_int r_LINE_NOW(void) { RT_B_TICK(); 
{ rt_int rv147 = ((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_LINE;
return rv147; }
rt_raise(RT_X_INIT);
}
static rt_int r_TOK_IS(R10 p_T, rstr p_S) { RT_B_TICK(); 
if (((((p_T).f_KIND == g_K_SYM) || ((p_T).f_KIND == g_K_RES)) || ((p_T).f_KIND == g_K_ID)))
{
{ rt_int rv148 = r_TEQS((p_T).f_TX, p_S);
return rv148; }
}
{ rt_int rv149 = 0;
return rv149; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS(rstr p_S) { RT_B_TICK(); 
{ rt_int rv150 = r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], p_S);
return rv150; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TARGET_DECL(void) { RT_B_TICK(); 
if (((!r_IS(rt_str("TARGET", 6))) || (((*(R7 *)rt_nil_check(g_W))).f_POS >= rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)))))
{
{ rt_int rv151 = 0;
return rv151; }
}
{ rt_int rv152 = ((r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("PROCEDURE", 9)) || r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("FUNCTION", 8))) || r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("INLINE", 6)));
return rv152; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_KIND(rt_int p_K) { RT_B_TICK(); 
{ rt_int rv153 = (((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_KIND == p_K);
return rv153; }
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
{ rt_int rv154 = 1;
return rv154; }
}
{ rt_int rv155 = 0;
return rv155; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT(rstr p_S) { RT_B_TICK(); 
if ((!r_ACCEPT(p_S)))
{
{
R9 l_T_156; memset(&l_T_156, 0, sizeof l_T_156);
S_R9(&l_T_156, (r_CUR()).f_TX, 0);
r_FAIL(r_LINE_NOW(), rt_b_cat(rt_b_cat(p_S, rt_str(" expected, not ", 15)), r_STR(l_T_156, (l_T_156).f_LEN)));
}
}
}
static R9 r_IDENT(void) { RT_B_TICK(); 
R10 l_T_157; memset(&l_T_157, 0, sizeof l_T_157);
S_R10(&l_T_157, r_CUR(), 0);
if (((!((l_T_157).f_KIND == g_K_ID)) && (!r_IDENT_TOKEN(l_T_157))))
{
r_FAILT((l_T_157).f_LINE, rt_str("an identifier expected, not ", 28), (l_T_157).f_TX);
}
r_SKIP();
{ R9 rv158 = (l_T_157).f_TX;
return rv158; }
rt_raise(RT_X_INIT);
}
static rt_int r_IDENT_TOKEN(R10 p_T) { RT_B_TICK(); 
if ((((((p_T).f_KIND == g_K_ENUM) || ((p_T).f_KIND == g_K_GEN))) && (((p_T).f_TX).f_LEN >= ((rt_int)2LL))))
{
{
rstr l_S_159; memset(&l_S_159, 0, sizeof l_S_159);
l_S_159 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_S_159, r_STR((p_T).f_TX, ((rt_int)2LL)));
{ rt_int rv160 = (((!rt_b_eq(rt_b_slice(l_S_159, ((rt_int)1LL), ((rt_int)1LL)), rt_str("'", 1))) && (!rt_b_eq(rt_b_slice(l_S_159, ((rt_int)1LL), ((rt_int)1LL)), rt_str("[", 1)))) && (!rt_b_eq(rt_b_slice(l_S_159, ((rt_int)1LL), ((rt_int)1LL)), rt_str("]", 1))));
return rv160; }
}
}
{ rt_int rv161 = 0;
return rv161; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT_NAME(R9 p_NAME) { RT_B_TICK(); 
if ((!r_TEQ(r_IDENT(), p_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), p_NAME);
}
}
static R21 * r_NEW_NODE(rt_int p_KIND, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_N_162; memset(&l_N_162, 0, sizeof l_N_162);
l_N_162 = ((R21 *)rt_b_new(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_N_162)), ({ R21 rc163; memset(&rc163, 0, sizeof rc163);  rc163.f_KIND = p_KIND; rc163.f_LINE = p_LINE; rc163.f_IV = ((rt_int)0LL); S_R9(&rc163.f_NAME, ({ R9 rc164; memset(&rc164, 0, sizeof rc164);  rc164.f_AT = ((rt_int)0LL); rc164.f_LEN = ((rt_int)0LL); rc164.f_H = ((rt_int)0LL); rc164; }), 0); rc163.f_A = NULL; rc163.f_B = NULL; rc163.f_C = NULL; rc163.f_D = NULL; rc163.f_E = NULL; rc163.f_NEXT = NULL; rc163.f_FL = ((rt_int)0LL); rc163; }), 0);
{ R21 * rv165 = l_N_162;
return rv165; }
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
rt_int l_K_166; memset(&l_K_166, 0, sizeof l_K_166);
l_K_166 = ((rt_int)0LL);
R21 * l_P_167; memset(&l_P_167, 0, sizeof l_P_167);
l_P_167 = p_N;
for (;;) {
if ((l_P_167 == NULL)) goto L_end168;
{
l_K_166 = rt_add(l_K_166, ((rt_int)1LL));
l_P_167 = ((*(R21 *)rt_nil_check(l_P_167))).f_NEXT;
}
RT_B_TICK();
} L_end168: ;
{ rt_int rv169 = l_K_166;
return rv169; }
rt_raise(RT_X_INIT);
}
static R21 * r_IDENT_NODE(void) { RT_B_TICK(); 
R21 * l_N_170; memset(&l_N_170, 0, sizeof l_N_170);
l_N_170 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
S_R9(&((*(R21 *)rt_nil_check(l_N_170))).f_NAME, r_IDENT(), 0);
{ R21 * rv171 = l_N_170;
return rv171; }
rt_raise(RT_X_INIT);
}
static R21 * r_IDENT_LIST(void) { RT_B_TICK(); 
R21 * l_HEAD_172; memset(&l_HEAD_172, 0, sizeof l_HEAD_172);
l_HEAD_172 = NULL;
R21 * l_TAIL_173; memset(&l_TAIL_173, 0, sizeof l_TAIL_173);
l_TAIL_173 = NULL;
for (;;) {
{
r_ADD_LIST(r_ROUTINE_NAME_NODE(), &l_HEAD_172, &l_TAIL_173);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end174;
} L_end174: ;
{ R21 * rv175 = l_HEAD_172;
return rv175; }
rt_raise(RT_X_INIT);
}
static R21 * r_ROUTINE_NAME_NODE(void) { RT_B_TICK(); 
R21 * l_N_176; memset(&l_N_176, 0, sizeof l_N_176);
l_N_176 = r_IDENT_NODE();
if ((r_IS(rt_str("$", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_SKIP();
S_R9(&((*(R21 *)rt_nil_check(l_N_176))).f_NAME, r_MKN(rt_b_cat(rt_b_cat(r_STR(((*(R21 *)rt_nil_check(l_N_176))).f_NAME, (((*(R21 *)rt_nil_check(l_N_176))).f_NAME).f_LEN), rt_str("$", 1)), r_STR((r_CUR()).f_TX, ((r_CUR()).f_TX).f_LEN))), 0);
r_SKIP();
}
{ R21 * rv177 = l_N_176;
return rv177; }
rt_raise(RT_X_INIT);
}
static R21 * r_PAREN_IDENTS(void) { RT_B_TICK(); 
R21 * l_L_178; memset(&l_L_178, 0, sizeof l_L_178);
l_L_178 = NULL;
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str(")", 1))))
{
l_L_178 = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
{ R21 * rv179 = l_L_178;
return rv179; }
rt_raise(RT_X_INIT);
}
static void r_SKIP_PARENS(void) { RT_B_TICK(); 
rt_int l_DEPTH_180; memset(&l_DEPTH_180, 0, sizeof l_DEPTH_180);
l_DEPTH_180 = ((rt_int)0LL);
for (;;) {
{
if (r_IS(rt_str("(", 1)))
{
l_DEPTH_180 = rt_add(l_DEPTH_180, ((rt_int)1LL));
}
else if (r_IS(rt_str(")", 1)))
{
l_DEPTH_180 = rt_sub(l_DEPTH_180, ((rt_int)1LL));
}
r_SKIP();
}
RT_B_TICK();
if ((l_DEPTH_180 == ((rt_int)0LL))) goto L_end181;
} L_end181: ;
}
static R21 * r_PARSE_COMPILATION(void) { RT_B_TICK(); 
R21 * l_HEAD_182; memset(&l_HEAD_182, 0, sizeof l_HEAD_182);
l_HEAD_182 = NULL;
R21 * l_TAIL_183; memset(&l_TAIL_183, 0, sizeof l_TAIL_183);
l_TAIL_183 = NULL;
for (;;) {
if (r_IS_KIND(g_K_EOF)) goto L_end184;
{
r_ADD_LIST(r_PARSE_SEGMENT(), &l_HEAD_182, &l_TAIL_183);
}
RT_B_TICK();
} L_end184: ;
{ R21 * rv185 = l_HEAD_182;
return rv185; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ITEMS(void) { RT_B_TICK(); 
R21 * l_N_186; memset(&l_N_186, 0, sizeof l_N_186);
l_N_186 = r_NEW_NODE(g_N_ITEMS, r_LINE_NOW());
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end187;
{
if (r_ACCEPT(rt_str("DATA", 4)))
{
r_EXPECT(rt_str(":", 1));
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str("#", 1))))
{
((*(R21 *)rt_nil_check(l_N_186))).f_A = r_IDENT_LIST();
}
if (r_ACCEPT(rt_str("#", 1)))
{
((*(R21 *)rt_nil_check(l_N_186))).f_B = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("ROUTINES", 8)))
{
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_186))).f_C = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("TYPES", 5)))
{
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_186))).f_D = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("MODULES", 7)))
{
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_186))).f_E = r_PAREN_IDENTS();
}
else
{
{
R9 l_T_188; memset(&l_T_188, 0, sizeof l_T_188);
S_R9(&l_T_188, (r_CUR()).f_TX, 0);
r_FAILT(r_LINE_NOW(), rt_str("DATA, ROUTINES, TYPES or MODULES expected, not ", 47), l_T_188);
}
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end187: ;
r_EXPECT(rt_str(")", 1));
{
R21 * l_L_189; memset(&l_L_189, 0, sizeof l_L_189);
l_L_189 = ((*(R21 *)rt_nil_check(l_N_186))).f_A;
rt_int l_PASS_190; memset(&l_PASS_190, 0, sizeof l_PASS_190);
l_PASS_190 = ((rt_int)0LL);
for (;;) {
if ((l_PASS_190 == ((rt_int)5LL))) goto L_end191;
{
if ((l_PASS_190 == ((rt_int)1LL)))
{
l_L_189 = ((*(R21 *)rt_nil_check(l_N_186))).f_B;
}
else if ((l_PASS_190 == ((rt_int)2LL)))
{
l_L_189 = ((*(R21 *)rt_nil_check(l_N_186))).f_C;
}
else if ((l_PASS_190 == ((rt_int)3LL)))
{
l_L_189 = ((*(R21 *)rt_nil_check(l_N_186))).f_D;
}
else if ((l_PASS_190 == ((rt_int)4LL)))
{
l_L_189 = ((*(R21 *)rt_nil_check(l_N_186))).f_E;
}
for (;;) {
if ((l_L_189 == NULL)) goto L_end192;
{
if ((r_IN_IDENTS(((*(R21 *)rt_nil_check(l_L_189))).f_NEXT, ((*(R21 *)rt_nil_check(l_L_189))).f_NAME) || (((l_PASS_190 == ((rt_int)0LL)) && r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_186))).f_B, ((*(R21 *)rt_nil_check(l_L_189))).f_NAME)))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_L_189))).f_LINE, rt_str("a name appears only once in an imports-clause (4.3.1): ", 55), ((*(R21 *)rt_nil_check(l_L_189))).f_NAME);
}
l_L_189 = ((*(R21 *)rt_nil_check(l_L_189))).f_NEXT;
}
RT_B_TICK();
} L_end192: ;
l_PASS_190 = rt_add(l_PASS_190, ((rt_int)1LL));
}
RT_B_TICK();
} L_end191: ;
}
{ R21 * rv193 = l_N_186;
return rv193; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SEGMENT(void) { RT_B_TICK(); 
R21 * l_S_194; memset(&l_S_194, 0, sizeof l_S_194);
l_S_194 = r_NEW_NODE(g_N_SEGMENT, r_LINE_NOW());
R21 * l_HEAD_195; memset(&l_HEAD_195, 0, sizeof l_HEAD_195);
l_HEAD_195 = NULL;
R21 * l_TAIL_196; memset(&l_TAIL_196, 0, sizeof l_TAIL_196);
l_TAIL_196 = NULL;
if (r_ACCEPT(rt_str("MAIN", 4)))
{
((*(R21 *)rt_nil_check(l_S_194))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("SEGMENT", 7));
S_R9(&((*(R21 *)rt_nil_check(l_S_194))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("USES", 4)))
{
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_U_198; memset(&l_U_198, 0, sizeof l_U_198);
l_U_198 = r_NEW_NODE(g_N_USE, r_LINE_NOW());
S_R9(&((*(R21 *)rt_nil_check(l_U_198))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_U_198))).f_A = r_PARSE_ITEMS();
}
r_ADD_LIST(l_U_198, &l_HEAD_195, &l_TAIL_196);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end197;
} L_end197: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_S_194))).f_A = l_HEAD_195;
}
if (r_ACCEPT(rt_str("DEFINES", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R21 *)rt_nil_check(l_S_194))).f_FL = ((rt_int)1LL);
}
else
{
((*(R21 *)rt_nil_check(l_S_194))).f_C = r_PAREN_IDENTS();
}
}
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_S_194))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SEGMENT", 7));
r_EXPECT_NAME(((*(R21 *)rt_nil_check(l_S_194))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R21 * rv199 = l_S_194;
return rv199; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CLOSED_BODY(void) { RT_B_TICK(); 
R21 * l_B_200; memset(&l_B_200, 0, sizeof l_B_200);
l_B_200 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
R21 * l_HEAD_201; memset(&l_HEAD_201, 0, sizeof l_HEAD_201);
l_HEAD_201 = NULL;
R21 * l_TAIL_202; memset(&l_TAIL_202, 0, sizeof l_TAIL_202);
l_TAIL_202 = NULL;
((*(R21 *)rt_nil_check(l_B_200))).f_A = r_PARSE_DECLARATIONS();
((*(R21 *)rt_nil_check(l_B_200))).f_B = r_PARSE_STATEMENTS();
for (;;) {
{
if ((((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()))
{
r_ADD_LIST(r_PARSE_ROUTINE(), &l_HEAD_201, &l_TAIL_202);
}
else if (r_IS(rt_str("MODULE", 6)))
{
r_ADD_LIST(r_PARSE_MODULE(), &l_HEAD_201, &l_TAIL_202);
}
else
{
goto L_end203;
}
}
RT_B_TICK();
} L_end203: ;
((*(R21 *)rt_nil_check(l_B_200))).f_C = l_HEAD_201;
{ R21 * rv204 = l_B_200;
return rv204; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_BODY(void) { RT_B_TICK(); 
R21 * l_B_205; memset(&l_B_205, 0, sizeof l_B_205);
l_B_205 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_B_205))).f_A = r_PARSE_DECLARATIONS();
((*(R21 *)rt_nil_check(l_B_205))).f_B = r_PARSE_STATEMENTS();
{ R21 * rv206 = l_B_205;
return rv206; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_MODULE(void) { RT_B_TICK(); 
R21 * l_M_207; memset(&l_M_207, 0, sizeof l_M_207);
l_M_207 = r_NEW_NODE(g_N_MODULE, r_LINE_NOW());
R21 * l_HEAD_208; memset(&l_HEAD_208, 0, sizeof l_HEAD_208);
l_HEAD_208 = NULL;
R21 * l_TAIL_209; memset(&l_TAIL_209, 0, sizeof l_TAIL_209);
l_TAIL_209 = NULL;
r_EXPECT(rt_str("MODULE", 6));
S_R9(&((*(R21 *)rt_nil_check(l_M_207))).f_NAME, r_IDENT(), 0);
for (;;) {
{
if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_M_207))).f_A = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("EXPORTS", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R21 *)rt_nil_check(l_M_207))).f_FL = ((rt_int)1LL);
}
else
{
{
rt_int l_PAREN_211; memset(&l_PAREN_211, 0, sizeof l_PAREN_211);
l_PAREN_211 = r_ACCEPT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_X_213; memset(&l_X_213, 0, sizeof l_X_213);
l_X_213 = r_NEW_NODE(g_N_EXPORT, r_LINE_NOW());
S_R9(&((*(R21 *)rt_nil_check(l_X_213))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("WITH", 4)))
{
((*(R21 *)rt_nil_check(l_X_213))).f_A = r_PAREN_IDENTS();
}
r_ADD_LIST(l_X_213, &l_HEAD_208, &l_TAIL_209);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end212;
} L_end212: ;
if (l_PAREN_211)
{
r_EXPECT(rt_str(")", 1));
}
}
((*(R21 *)rt_nil_check(l_M_207))).f_B = l_HEAD_208;
}
}
else
{
goto L_end210;
}
}
RT_B_TICK();
} L_end210: ;
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_M_207))).f_C = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("MODULE", 6));
r_EXPECT_NAME(((*(R21 *)rt_nil_check(l_M_207))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R21 * rv214 = l_M_207;
return rv214; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_DECLARATIONS(void) { RT_B_TICK(); 
R21 * l_HEAD_215; memset(&l_HEAD_215, 0, sizeof l_HEAD_215);
l_HEAD_215 = NULL;
R21 * l_TAIL_216; memset(&l_TAIL_216, 0, sizeof l_TAIL_216);
l_TAIL_216 = NULL;
for (;;) {
{
if ((r_IS(rt_str("CONST", 5)) || r_IS(rt_str("VAR", 3))))
{
r_ADD_LIST(r_PARSE_OBJECT_DECL(), &l_HEAD_215, &l_TAIL_216);
}
else if (r_IS(rt_str("TYPE", 4)))
{
r_ADD_LIST(r_PARSE_TYPE_DECL(), &l_HEAD_215, &l_TAIL_216);
}
else if ((r_IS(rt_str("REPTYPE", 7)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_ADD_LIST(r_PARSE_REPTYPE_DECL(), &l_HEAD_215, &l_TAIL_216);
}
else
{
goto L_end217;
}
}
RT_B_TICK();
} L_end217: ;
{ R21 * rv218 = l_HEAD_215;
return rv218; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_OBJECT_DECL(void) { RT_B_TICK(); 
R21 * l_D_219; memset(&l_D_219, 0, sizeof l_D_219);
l_D_219 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
if (r_ACCEPT(rt_str("CONST", 5)))
{
((*(R21 *)rt_nil_check(l_D_219))).f_KIND = g_N_CONST;
}
else
{
r_EXPECT(rt_str("VAR", 3));
}
((*(R21 *)rt_nil_check(l_D_219))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_D_219))).f_B = r_PARSE_TYPE_SPEC();
if (r_ACCEPT(rt_str(":=", 2)))
{
((*(R21 *)rt_nil_check(l_D_219))).f_C = r_PARSE_EXPR();
}
else if ((((*(R21 *)rt_nil_check(l_D_219))).f_KIND == g_N_CONST))
{
r_FAIL(((*(R21 *)rt_nil_check(l_D_219))).f_LINE, rt_str("a constant needs a value", 24));
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv220 = l_D_219;
return rv220; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FORMALS(void) { RT_B_TICK(); 
R21 * l_HEAD_221; memset(&l_HEAD_221, 0, sizeof l_HEAD_221);
l_HEAD_221 = NULL;
R21 * l_TAIL_222; memset(&l_TAIL_222, 0, sizeof l_TAIL_222);
l_TAIL_222 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_F_224; memset(&l_F_224, 0, sizeof l_F_224);
l_F_224 = r_NEW_NODE(g_N_FORMAL, r_LINE_NOW());
if (r_ACCEPT(rt_str("TAG", 3)))
{
((*(R21 *)rt_nil_check(l_F_224))).f_IV = ((rt_int)1LL);
}
((*(R21 *)rt_nil_check(l_F_224))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
if ((!r_ACCEPT(rt_str("TYPE", 4))))
{
((*(R21 *)rt_nil_check(l_F_224))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_F_224, &l_HEAD_221, &l_TAIL_222);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end223;
} L_end223: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv225 = l_HEAD_221;
return rv225; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TYPE_DECL(void) { RT_B_TICK(); 
R21 * l_D_226; memset(&l_D_226, 0, sizeof l_D_226);
l_D_226 = r_NEW_NODE(g_N_TYPE, r_LINE_NOW());
r_EXPECT(rt_str("TYPE", 4));
S_R9(&((*(R21 *)rt_nil_check(l_D_226))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_D_226))).f_A = r_PARSE_FORMALS();
}
r_EXPECT(rt_str("=", 1));
((*(R21 *)rt_nil_check(l_D_226))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(";", 1));
{ R21 * rv227 = l_D_226;
return rv227; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_REPTYPE_DECL(void) { RT_B_TICK(); 
R21 * l_D_228; memset(&l_D_228, 0, sizeof l_D_228);
l_D_228 = r_NEW_NODE(g_N_REPTYPE, r_LINE_NOW());
r_EXPECT(rt_str("REPTYPE", 7));
S_R9(&((*(R21 *)rt_nil_check(l_D_228))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_D_228))).f_A = r_PARSE_FORMALS();
}
if (r_ACCEPT(rt_str("OF", 2)))
{
((*(R21 *)rt_nil_check(l_D_228))).f_C = r_IDENT_NODE();
}
r_EXPECT(rt_str("=", 1));
((*(R21 *)rt_nil_check(l_D_228))).f_B = r_PARSE_REP();
r_EXPECT(rt_str(";", 1));
{ R21 * rv229 = l_D_228;
return rv229; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_REP(void) { RT_B_TICK(); 
R21 * l_R_230; memset(&l_R_230, 0, sizeof l_R_230);
l_R_230 = r_NEW_NODE(g_N_REP, r_LINE_NOW());
R21 * l_HEAD_231; memset(&l_HEAD_231, 0, sizeof l_HEAD_231);
l_HEAD_231 = NULL;
R21 * l_TAIL_232; memset(&l_TAIL_232, 0, sizeof l_TAIL_232);
l_TAIL_232 = NULL;
if (r_IS_KIND(g_K_GEN))
{
((*(R21 *)rt_nil_check(l_R_230))).f_KIND = g_TS_GEN;
S_R9(&((*(R21 *)rt_nil_check(l_R_230))).f_NAME, r_GEN_NAME(), 0);
{ R21 * rv233 = l_R_230;
return rv233; }
}
S_R9(&((*(R21 *)rt_nil_check(l_R_230))).f_NAME, r_IDENT(), 0);
if ((!r_IS(rt_str("(", 1))))
{
{ R21 * rv234 = l_R_230;
return rv234; }
}
if (r_TEQS(((*(R21 *)rt_nil_check(l_R_230))).f_NAME, rt_str("RECORD_REP", 10)))
{
r_PARSE_RECORD_REP(l_R_230);
{ R21 * rv235 = l_R_230;
return rv235; }
}
r_SKIP();
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end236;
{
if (r_ACCEPT(rt_str("VALUES", 6)))
{
{
R21 * l_VH_237; memset(&l_VH_237, 0, sizeof l_VH_237);
l_VH_237 = NULL;
R21 * l_VT_238; memset(&l_VT_238, 0, sizeof l_VT_238);
l_VT_238 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_V_240; memset(&l_V_240, 0, sizeof l_V_240);
l_V_240 = r_NEW_NODE(g_N_VALREP, r_LINE_NOW());
S_R9(&((*(R21 *)rt_nil_check(l_V_240))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_EXPECT(rt_str("AS", 2));
((*(R21 *)rt_nil_check(l_V_240))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_V_240, &l_VH_237, &l_VT_238);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end239;
} L_end239: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_R_230))).f_B = l_VH_237;
}
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_231, &l_TAIL_232);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end236: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_R_230))).f_A = l_HEAD_231;
{ R21 * rv241 = l_R_230;
return rv241; }
rt_raise(RT_X_INIT);
}
static void r_PARSE_RECORD_REP(R21 * p_R) { RT_B_TICK(); 
R21 * l_HEAD_242; memset(&l_HEAD_242, 0, sizeof l_HEAD_242);
l_HEAD_242 = NULL;
R21 * l_TAIL_243; memset(&l_TAIL_243, 0, sizeof l_TAIL_243);
l_TAIL_243 = NULL;
R21 * l_VH_244; memset(&l_VH_244, 0, sizeof l_VH_244);
l_VH_244 = NULL;
R21 * l_VT_245; memset(&l_VT_245, 0, sizeof l_VT_245);
l_VT_245 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end246;
{
if (r_IS(rt_str("SELECT", 6)))
{
r_ADD_LIST(r_PARSE_VARIANT_PACKING(), &l_VH_244, &l_VT_245);
}
else
{
r_ADD_LIST(r_PARSE_PACKING_SPEC(), &l_HEAD_242, &l_TAIL_243);
}
if ((r_ACCEPT(rt_str(",", 1)) || r_ACCEPT(rt_str(";", 1))))
{
}
}
RT_B_TICK();
} L_end246: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(p_R))).f_A = l_HEAD_242;
((*(R21 *)rt_nil_check(p_R))).f_C = l_VH_244;
}
static R21 * r_PARSE_PACKING_SPEC(void) { RT_B_TICK(); 
R21 * l_P_247; memset(&l_P_247, 0, sizeof l_P_247);
l_P_247 = r_NEW_NODE(g_N_PSPEC, r_LINE_NOW());
R21 * l_HEAD_248; memset(&l_HEAD_248, 0, sizeof l_HEAD_248);
l_HEAD_248 = NULL;
R21 * l_TAIL_249; memset(&l_TAIL_249, 0, sizeof l_TAIL_249);
l_TAIL_249 = NULL;
if ((r_IS_KIND(g_K_ID) && (((r_IS(rt_str("DENSE", 5)) || r_IS(rt_str("PACKED", 6))) || r_IS(rt_str("UNPACKED", 8))))))
{
S_R9(&((*(R21 *)rt_nil_check(l_P_247))).f_NAME, r_IDENT(), 0);
}
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_P_247))).f_IV = ((rt_int)1LL);
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end250;
{
r_ADD_LIST(r_PARSE_ELEMENT_SPEC(), &l_HEAD_248, &l_TAIL_249);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end250: ;
r_EXPECT(rt_str(")", 1));
}
else if (((((*(R21 *)rt_nil_check(l_P_247))).f_NAME).f_LEN == ((rt_int)0LL)))
{
((*(R21 *)rt_nil_check(l_P_247))).f_IV = ((rt_int)1LL);
r_ADD_LIST(r_PARSE_ELEMENT_SPEC(), &l_HEAD_248, &l_TAIL_249);
}
((*(R21 *)rt_nil_check(l_P_247))).f_A = l_HEAD_248;
{ R21 * rv251 = l_P_247;
return rv251; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ELEMENT_SPEC(void) { RT_B_TICK(); 
R21 * l_E_252; memset(&l_E_252, 0, sizeof l_E_252);
l_E_252 = r_NEW_NODE(g_N_ELEM, r_LINE_NOW());
S_R9(&((*(R21 *)rt_nil_check(l_E_252))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(l_E_252))).f_NAME, rt_str("VARIANTS", 8)) || r_TEQS(((*(R21 *)rt_nil_check(l_E_252))).f_NAME, rt_str("OMIT", 4))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_E_252))).f_NAME, rt_str("VARIANTS", 8)))
{
((*(R21 *)rt_nil_check(l_E_252))).f_FL = ((rt_int)1LL);
}
else
{
((*(R21 *)rt_nil_check(l_E_252))).f_FL = ((rt_int)2LL);
}
r_SKIP();
S_R9(&((*(R21 *)rt_nil_check(l_E_252))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(")", 1));
}
else if (((r_TEQS(((*(R21 *)rt_nil_check(l_E_252))).f_NAME, rt_str("FILLER", 6)) || r_TEQS(((*(R21 *)rt_nil_check(l_E_252))).f_NAME, rt_str("ZEROS", 5))) || r_TEQS(((*(R21 *)rt_nil_check(l_E_252))).f_NAME, rt_str("BLANKS", 6))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_E_252))).f_NAME, rt_str("FILLER", 6)))
{
((*(R21 *)rt_nil_check(l_E_252))).f_FL = ((rt_int)3LL);
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_E_252))).f_NAME, rt_str("ZEROS", 5)))
{
((*(R21 *)rt_nil_check(l_E_252))).f_FL = ((rt_int)4LL);
}
else
{
((*(R21 *)rt_nil_check(l_E_252))).f_FL = ((rt_int)5LL);
}
r_SKIP();
((*(R21 *)rt_nil_check(l_E_252))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
}
{ R21 * rv253 = l_E_252;
return rv253; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_VARIANT_PACKING(void) { RT_B_TICK(); 
R21 * l_V_254; memset(&l_V_254, 0, sizeof l_V_254);
l_V_254 = r_NEW_NODE(g_N_VPACK, r_LINE_NOW());
R21 * l_HEAD_255; memset(&l_HEAD_255, 0, sizeof l_HEAD_255);
l_HEAD_255 = NULL;
R21 * l_TAIL_256; memset(&l_TAIL_256, 0, sizeof l_TAIL_256);
l_TAIL_256 = NULL;
r_EXPECT(rt_str("SELECT", 6));
S_R9(&((*(R21 *)rt_nil_check(l_V_254))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end257;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_V_254))).f_IV = ((rt_int)1LL);
if ((!r_IS(rt_str("END", 3))))
{
((*(R21 *)rt_nil_check(l_V_254))).f_B = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
S_R9(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_254))).f_B))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
}
else
{
{
R21 * l_S_258; memset(&l_S_258, 0, sizeof l_S_258);
l_S_258 = r_NEW_NODE(g_N_VPSPEC, r_LINE_NOW());
R21 * l_LH_259; memset(&l_LH_259, 0, sizeof l_LH_259);
l_LH_259 = NULL;
R21 * l_LT_260; memset(&l_LT_260, 0, sizeof l_LT_260);
l_LT_260 = NULL;
R21 * l_PH_261; memset(&l_PH_261, 0, sizeof l_PH_261);
l_PH_261 = NULL;
R21 * l_PT_262; memset(&l_PT_262, 0, sizeof l_PT_262);
l_PT_262 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_259, &l_LT_260);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end263;
} L_end263: ;
r_EXPECT(rt_str("-->", 3));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end264;
{
r_ADD_LIST(r_PARSE_PACKING_SPEC(), &l_PH_261, &l_PT_262);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end264: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_S_258))).f_A = l_LH_259;
((*(R21 *)rt_nil_check(l_S_258))).f_B = l_PH_261;
r_ADD_LIST(l_S_258, &l_HEAD_255, &l_TAIL_256);
}
}
}
RT_B_TICK();
} L_end257: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
((*(R21 *)rt_nil_check(l_V_254))).f_A = l_HEAD_255;
{ R21 * rv265 = l_V_254;
return rv265; }
rt_raise(RT_X_INIT);
}
static R9 r_GEN_NAME(void) { RT_B_TICK(); 
R9 l_T_266; memset(&l_T_266, 0, sizeof l_T_266);
S_R9(&l_T_266, (r_CUR()).f_TX, 0);
r_SKIP();
if (((l_T_266).f_LEN == ((rt_int)1LL)))
{
{ R9 rv267 = r_NO_TEXT();
return rv267; }
}
{ R9 rv268 = r_MKN(rt_b_slice(r_STR(l_T_266, (l_T_266).f_LEN), ((rt_int)1LL), rt_sub((l_T_266).f_LEN, ((rt_int)1LL))));
return rv268; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TYPE_ARG(void) { RT_B_TICK(); 
R21 * l_N_269; memset(&l_N_269, 0, sizeof l_N_269);
if (r_IS_KIND(g_K_GEN))
{
{
R9 l_T_270; memset(&l_T_270, 0, sizeof l_T_270);
S_R9(&l_T_270, (r_CUR()).f_TX, 0);
if (((l_T_270).f_LEN == ((rt_int)1LL)))
{
r_SKIP();
{ R21 * rv271 = r_NEW_NODE(g_N_DONTCARE, r_LINE_NOW());
return rv271; }
}
}
l_N_269 = r_NEW_NODE(g_TS_GEN, r_LINE_NOW());
S_R9(&((*(R21 *)rt_nil_check(l_N_269))).f_NAME, r_GEN_NAME(), 0);
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(l_N_269))).f_C = r_PARSE_REP();
}
{ R21 * rv272 = l_N_269;
return rv272; }
}
if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R21 * rv273 = r_NEW_NODE(g_N_ANY, r_LINE_NOW());
return rv273; }
}
if ((r_IS(rt_str("ARRAY", 5)) || r_IS(rt_str("RECORD", 6))))
{
{ R21 * rv274 = r_PARSE_TYPE_SPEC();
return rv274; }
}
if ((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM)))
{
{ R21 * rv275 = r_PARSE_TYPE_SPEC();
return rv275; }
}
l_N_269 = r_PARSE_EXPR();
if ((r_IS(rt_str("REP", 3)) || r_IS(rt_str("[", 1))))
{
{ R21 * rv276 = r_TYPE_SPEC_TAIL(r_EXPR_TO_TS(l_N_269));
return rv276; }
}
{ R21 * rv277 = l_N_269;
return rv277; }
rt_raise(RT_X_INIT);
}
static R21 * r_EXPR_TO_TS(R21 * p_E) { RT_B_TICK(); 
R21 * l_N_278; memset(&l_N_278, 0, sizeof l_N_278);
if ((((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_ARRAY)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_RECORD)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_ENUM)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN)))
{
{ R21 * rv279 = p_E;
return rv279; }
}
l_N_278 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME))
{
S_R9(&((*(R21 *)rt_nil_check(l_N_278))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R21 * rv280 = l_N_278;
return rv280; }
}
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
S_R9(&((*(R21 *)rt_nil_check(l_N_278))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_278))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R21 * rv281 = l_N_278;
return rv281; }
}
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD))
{
((*(R21 *)rt_nil_check(l_N_278))).f_FL = ((rt_int)3LL);
((*(R21 *)rt_nil_check(l_N_278))).f_E = p_E;
{ R21 * rv282 = l_N_278;
return rv282; }
}
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_SUBSTR))
{
l_N_278 = r_EXPR_TO_TS(((*(R21 *)rt_nil_check(p_E))).f_A);
if (((!(((*(R21 *)rt_nil_check(l_N_278))).f_KIND == g_TS_NAME)) || (!(((*(R21 *)rt_nil_check(l_N_278))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type specification expected", 29));
}
((*(R21 *)rt_nil_check(l_N_278))).f_B = r_NEW_NODE(g_N_RANGE, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_N_278))).f_B))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_B;
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_N_278))).f_B))).f_B = ((*(R21 *)rt_nil_check(p_E))).f_C;
{ R21 * rv283 = l_N_278;
return rv283; }
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
{ R21 * rv284 = p_N;
return rv284; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TYPE_SPEC(void) { RT_B_TICK(); 
R21 * l_N_285; memset(&l_N_285, 0, sizeof l_N_285);
R21 * l_HEAD_286; memset(&l_HEAD_286, 0, sizeof l_HEAD_286);
l_HEAD_286 = NULL;
R21 * l_TAIL_287; memset(&l_TAIL_287, 0, sizeof l_TAIL_287);
l_TAIL_287 = NULL;
rt_int l_LINE_288; memset(&l_LINE_288, 0, sizeof l_LINE_288);
l_LINE_288 = r_LINE_NOW();
if (r_ACCEPT(rt_str("ARRAY", 5)))
{
l_N_285 = r_NEW_NODE(g_TS_ARRAY, l_LINE_288);
r_EXPECT(rt_str("[", 1));
for (;;) {
{
{
R21 * l_R_290; memset(&l_R_290, 0, sizeof l_R_290);
l_R_290 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_R_290))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_R_290))).f_B = r_PARSE_EXPR();
r_ADD_LIST(l_R_290, &l_HEAD_286, &l_TAIL_287);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end289;
} L_end289: ;
r_EXPECT(rt_str("]", 1));
((*(R21 *)rt_nil_check(l_N_285))).f_A = l_HEAD_286;
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(l_N_285))).f_D = r_PARSE_REP();
}
r_EXPECT(rt_str("OF", 2));
((*(R21 *)rt_nil_check(l_N_285))).f_C = r_PARSE_TYPE_SPEC();
{ R21 * rv291 = l_N_285;
return rv291; }
}
if (r_ACCEPT(rt_str("RECORD", 6)))
{
l_N_285 = r_NEW_NODE(g_TS_RECORD, l_LINE_288);
((*(R21 *)rt_nil_check(l_N_285))).f_A = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("RECORD", 6));
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(l_N_285))).f_D = r_PARSE_REP();
}
{ R21 * rv292 = l_N_285;
return rv292; }
}
if (r_IS_KIND(g_K_GEN))
{
{ R21 * rv293 = r_PARSE_TYPE_ARG();
return rv293; }
}
if (r_IS(rt_str("(", 1)))
{
l_N_285 = r_NEW_NODE(g_TS_ENUM, l_LINE_288);
((*(R21 *)rt_nil_check(l_N_285))).f_A = r_PARSE_LITERALS();
{ R21 * rv294 = r_TYPE_SPEC_TAIL(l_N_285);
return rv294; }
}
l_N_285 = r_NEW_NODE(g_TS_NAME, l_LINE_288);
S_R9(&((*(R21 *)rt_nil_check(l_N_285))).f_NAME, r_IDENT(), 0);
if ((r_IS(rt_str(".", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
{
R21 * l_X_295; memset(&l_X_295, 0, sizeof l_X_295);
l_X_295 = r_NEW_NODE(g_N_NAME, l_LINE_288);
S_R9(&((*(R21 *)rt_nil_check(l_X_295))).f_NAME, ((*(R21 *)rt_nil_check(l_N_285))).f_NAME, 0);
for (;;) {
if ((!((r_IS(rt_str(".", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID))))) goto L_end296;
{
r_SKIP();
{
R21 * l_F_297; memset(&l_F_297, 0, sizeof l_F_297);
l_F_297 = r_NEW_NODE(g_N_FIELD, l_LINE_288);
((*(R21 *)rt_nil_check(l_F_297))).f_A = l_X_295;
S_R9(&((*(R21 *)rt_nil_check(l_F_297))).f_NAME, r_IDENT(), 0);
l_X_295 = l_F_297;
}
}
RT_B_TICK();
} L_end296: ;
((*(R21 *)rt_nil_check(l_N_285))).f_FL = ((rt_int)3LL);
((*(R21 *)rt_nil_check(l_N_285))).f_E = l_X_295;
{ R21 * rv298 = r_TYPE_SPEC_TAIL(l_N_285);
return rv298; }
}
}
if ((r_TEQS(((*(R21 *)rt_nil_check(l_N_285))).f_NAME, rt_str("ENUM", 4)) || r_TEQS(((*(R21 *)rt_nil_check(l_N_285))).f_NAME, rt_str("UNORDERED", 9))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_N_285))).f_NAME, rt_str("UNORDERED", 9)))
{
((*(R21 *)rt_nil_check(l_N_285))).f_IV = ((rt_int)1LL);
}
((*(R21 *)rt_nil_check(l_N_285))).f_KIND = g_TS_ENUM;
((*(R21 *)rt_nil_check(l_N_285))).f_A = r_PARSE_LITERALS();
{ R21 * rv299 = r_TYPE_SPEC_TAIL(l_N_285);
return rv299; }
}
if ((r_IS(rt_str("(", 1)) && (!r_RANGE_AHEAD())))
{
r_SKIP();
for (;;) {
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_N_285))).f_NAME, rt_str("PTR", 3)))
{
r_ADD_LIST(r_PARSE_TYPE_SPEC(), &l_HEAD_286, &l_TAIL_287);
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_286, &l_TAIL_287);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end300;
} L_end300: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_N_285))).f_A = l_HEAD_286;
}
{ R21 * rv301 = r_TYPE_SPEC_TAIL(l_N_285);
return rv301; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_LITERALS(void) { RT_B_TICK(); 
R21 * l_HEAD_302; memset(&l_HEAD_302, 0, sizeof l_HEAD_302);
l_HEAD_302 = NULL;
R21 * l_TAIL_303; memset(&l_TAIL_303, 0, sizeof l_TAIL_303);
l_TAIL_303 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_L_305; memset(&l_L_305, 0, sizeof l_L_305);
l_L_305 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
if ((!((r_IS_KIND(g_K_ENUM) || r_IS_KIND(g_K_ID)))))
{
r_FAIL(r_LINE_NOW(), rt_str("an enumerated literal expected", 30));
}
S_R9(&((*(R21 *)rt_nil_check(l_L_305))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_ADD_LIST(l_L_305, &l_HEAD_302, &l_TAIL_303);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end304;
} L_end304: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv306 = l_HEAD_302;
return rv306; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FIELDS(void) { RT_B_TICK(); 
R21 * l_HEAD_307; memset(&l_HEAD_307, 0, sizeof l_HEAD_307);
l_HEAD_307 = NULL;
R21 * l_TAIL_308; memset(&l_TAIL_308, 0, sizeof l_TAIL_308);
l_TAIL_308 = NULL;
for (;;) {
{
if (r_IS(rt_str("VAR", 3)))
{
{
R21 * l_F_310; memset(&l_F_310, 0, sizeof l_F_310);
l_F_310 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
r_SKIP();
((*(R21 *)rt_nil_check(l_F_310))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_F_310))).f_B = r_PARSE_TYPE_SPEC();
if ((!r_ACCEPT(rt_str(";", 1))))
{
r_EXPECT(rt_str(",", 1));
}
r_ADD_LIST(l_F_310, &l_HEAD_307, &l_TAIL_308);
}
}
else if (r_IS(rt_str("SELECT", 6)))
{
{
R21 * l_V_311; memset(&l_V_311, 0, sizeof l_V_311);
l_V_311 = r_NEW_NODE(g_N_VARIANT, r_LINE_NOW());
R21 * l_VH_312; memset(&l_VH_312, 0, sizeof l_VH_312);
l_VH_312 = NULL;
R21 * l_VT_313; memset(&l_VT_313, 0, sizeof l_VT_313);
l_VT_313 = NULL;
r_SKIP();
S_R9(&((*(R21 *)rt_nil_check(l_V_311))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end314;
{
{
R21 * l_S_315; memset(&l_S_315, 0, sizeof l_S_315);
l_S_315 = r_NEW_NODE(g_N_VARSPEC, r_LINE_NOW());
R21 * l_LH_316; memset(&l_LH_316, 0, sizeof l_LH_316);
l_LH_316 = NULL;
R21 * l_LT_317; memset(&l_LT_317, 0, sizeof l_LT_317);
l_LT_317 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_316, &l_LT_317);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end318;
} L_end318: ;
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_S_315))).f_A = l_LH_316;
((*(R21 *)rt_nil_check(l_S_315))).f_B = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_S_315, &l_VH_312, &l_VT_313);
}
}
RT_B_TICK();
} L_end314: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_V_311))).f_A = l_VH_312;
r_ADD_LIST(l_V_311, &l_HEAD_307, &l_TAIL_308);
}
}
else
{
goto L_end309;
}
}
RT_B_TICK();
} L_end309: ;
{ R21 * rv319 = l_HEAD_307;
return rv319; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_RANGE(void) { RT_B_TICK(); 
R21 * l_R_320; memset(&l_R_320, 0, sizeof l_R_320);
l_R_320 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_320))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("[", 1));
}
((*(R21 *)rt_nil_check(l_R_320))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_R_320))).f_B = r_PARSE_EXPR();
if (r_ACCEPT(rt_str(")", 1)))
{
((*(R21 *)rt_nil_check(l_R_320))).f_IV = rt_add(((*(R21 *)rt_nil_check(l_R_320))).f_IV, ((rt_int)2LL));
}
else
{
r_EXPECT(rt_str("]", 1));
}
{ R21 * rv321 = l_R_320;
return rv321; }
rt_raise(RT_X_INIT);
}
static rt_int r_RANGE_AHEAD(void) { RT_B_TICK(); 
rt_int l_DEPTH_322; memset(&l_DEPTH_322, 0, sizeof l_DEPTH_322);
l_DEPTH_322 = ((rt_int)0LL);
rt_int l_K_323; memset(&l_K_323, 0, sizeof l_K_323);
l_K_323 = ((rt_int)0LL);
for (;;) {
{
{
R10 l_T_325; memset(&l_T_325, 0, sizeof l_T_325);
S_R10(&l_T_325, r_AHEAD(l_K_323), 0);
if (((l_T_325).f_KIND == g_K_EOF))
{
{ rt_int rv326 = 0;
return rv326; }
}
if (((l_T_325).f_KIND == g_K_SYM))
{
if ((r_TEQS((l_T_325).f_TX, rt_str("(", 1)) || r_TEQS((l_T_325).f_TX, rt_str("[", 1))))
{
l_DEPTH_322 = rt_add(l_DEPTH_322, ((rt_int)1LL));
}
else if ((r_TEQS((l_T_325).f_TX, rt_str(")", 1)) || r_TEQS((l_T_325).f_TX, rt_str("]", 1))))
{
l_DEPTH_322 = rt_sub(l_DEPTH_322, ((rt_int)1LL));
if ((l_DEPTH_322 == ((rt_int)0LL)))
{
{ rt_int rv327 = 0;
return rv327; }
}
}
else if (((l_DEPTH_322 == ((rt_int)1LL)) && ((r_TEQS((l_T_325).f_TX, rt_str(":", 1)) || r_TEQS((l_T_325).f_TX, rt_str(",", 1))))))
{
{ rt_int rv328 = r_TEQS((l_T_325).f_TX, rt_str(":", 1));
return rv328; }
}
}
}
l_K_323 = rt_add(l_K_323, ((rt_int)1LL));
}
RT_B_TICK();
} L_end324: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_PARAMS(void) { RT_B_TICK(); 
R21 * l_HEAD_329; memset(&l_HEAD_329, 0, sizeof l_HEAD_329);
l_HEAD_329 = NULL;
R21 * l_TAIL_330; memset(&l_TAIL_330, 0, sizeof l_TAIL_330);
l_TAIL_330 = NULL;
rt_int l_MODE_331; memset(&l_MODE_331, 0, sizeof l_MODE_331);
l_MODE_331 = g_M_IN;
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end332;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_331 = rt_add(l_MODE_331, ((rt_int)1LL));
}
else
{
{
R21 * l_NAMES_333; memset(&l_NAMES_333, 0, sizeof l_NAMES_333);
l_NAMES_333 = r_IDENT_LIST();
R21 * l_TS_334; memset(&l_TS_334, 0, sizeof l_TS_334);
l_TS_334 = NULL;
R21 * l_P_335; memset(&l_P_335, 0, sizeof l_P_335);
l_P_335 = l_NAMES_333;
r_EXPECT(rt_str(":", 1));
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else if ((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))))
{
l_TS_334 = r_PARSE_ROUTINE_SPEC();
}
else
{
l_TS_334 = r_PARSE_TYPE_SPEC();
}
for (;;) {
if ((l_P_335 == NULL)) goto L_end336;
{
{
R21 * l_PN_337; memset(&l_PN_337, 0, sizeof l_PN_337);
l_PN_337 = r_NEW_NODE(g_N_PARAM, ((*(R21 *)rt_nil_check(l_P_335))).f_LINE);
S_R9(&((*(R21 *)rt_nil_check(l_PN_337))).f_NAME, ((*(R21 *)rt_nil_check(l_P_335))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_PN_337))).f_IV = l_MODE_331;
((*(R21 *)rt_nil_check(l_PN_337))).f_B = l_TS_334;
r_ADD_LIST(l_PN_337, &l_HEAD_329, &l_TAIL_330);
}
l_P_335 = ((*(R21 *)rt_nil_check(l_P_335))).f_NEXT;
}
RT_B_TICK();
} L_end336: ;
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end332: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv338 = l_HEAD_329;
return rv338; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TEMPLATE(rt_int p_FUNC) { RT_B_TICK(); 
R21 * l_R_339; memset(&l_R_339, 0, sizeof l_R_339);
l_R_339 = r_NEW_NODE(g_TS_ROUTINE, r_LINE_NOW());
R21 * l_HEAD_340; memset(&l_HEAD_340, 0, sizeof l_HEAD_340);
l_HEAD_340 = NULL;
R21 * l_TAIL_341; memset(&l_TAIL_341, 0, sizeof l_TAIL_341);
l_TAIL_341 = NULL;
rt_int l_MODE_342; memset(&l_MODE_342, 0, sizeof l_MODE_342);
l_MODE_342 = g_M_IN;
if (p_FUNC)
{
((*(R21 *)rt_nil_check(l_R_339))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end343;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_342 = rt_add(l_MODE_342, ((rt_int)1LL));
if (r_IS(rt_str(")", 1)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_339))).f_LINE, rt_str("a # must not be the last symbol of a proc-template (5.1)", 56));
}
}
else
{
{
R21 * l_P_344; memset(&l_P_344, 0, sizeof l_P_344);
l_P_344 = r_NEW_NODE(g_N_PARAM, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_P_344))).f_IV = l_MODE_342;
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else
{
((*(R21 *)rt_nil_check(l_P_344))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_P_344, &l_HEAD_340, &l_TAIL_341);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end343: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_R_339))).f_A = l_HEAD_340;
if (r_ACCEPT(rt_str("RETURNS", 7)))
{
((*(R21 *)rt_nil_check(l_R_339))).f_IV = ((rt_int)1LL);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_339))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R21 *)rt_nil_check(l_R_339))).f_B = r_PARSE_TYPE_SPEC();
}
}
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_R_339))).f_D = r_PAREN_IDENTS();
}
{ R21 * rv345 = l_R_339;
return rv345; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ROUTINE_SPEC(void) { RT_B_TICK(); 
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
{ R21 * rv346 = r_PARSE_TEMPLATE(1);
return rv346; }
}
r_EXPECT(rt_str("PROCEDURE", 9));
{ R21 * rv347 = r_PARSE_TEMPLATE(0);
return rv347; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_WHERE(void) { RT_B_TICK(); 
R21 * l_HEAD_348; memset(&l_HEAD_348, 0, sizeof l_HEAD_348);
l_HEAD_348 = NULL;
R21 * l_TAIL_349; memset(&l_TAIL_349, 0, sizeof l_TAIL_349);
l_TAIL_349 = NULL;
for (;;) {
{
{
R21 * l_N_351; memset(&l_N_351, 0, sizeof l_N_351);
l_N_351 = r_NEW_NODE(g_N_NEEDS, r_LINE_NOW());
R21 * l_TH_352; memset(&l_TH_352, 0, sizeof l_TH_352);
l_TH_352 = NULL;
R21 * l_TT_353; memset(&l_TT_353, 0, sizeof l_TT_353);
l_TT_353 = NULL;
S_R9(&((*(R21 *)rt_nil_check(l_N_351))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("NEEDS", 5));
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_T_355; memset(&l_T_355, 0, sizeof l_T_355);
l_T_355 = r_NEW_NODE(g_N_TEMPLATE, r_LINE_NOW());
S_R9(&((*(R21 *)rt_nil_check(l_T_355))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_T_355))).f_B = r_PARSE_TEMPLATE(0);
r_ADD_LIST(l_T_355, &l_TH_352, &l_TT_353);
}
if (r_ACCEPT(rt_str(";", 1)))
{
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end354;
} L_end354: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_N_351))).f_A = l_TH_352;
r_ADD_LIST(l_N_351, &l_HEAD_348, &l_TAIL_349);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end350;
} L_end350: ;
{ R21 * rv356 = l_HEAD_348;
return rv356; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ROUTINE(void) { RT_B_TICK(); 
R21 * l_R_357; memset(&l_R_357, 0, sizeof l_R_357);
l_R_357 = r_NEW_NODE(g_N_ROUTINE, r_LINE_NOW());
R21 * l_H_358; memset(&l_H_358, 0, sizeof l_H_358);
l_H_358 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
if (r_IS_TARGET_DECL())
{
r_SKIP();
((*(R21 *)rt_nil_check(l_R_357))).f_FL = ((rt_int)2LL);
}
if (r_ACCEPT(rt_str("INLINE", 6)))
{
if ((((*(R21 *)rt_nil_check(l_R_357))).f_FL == ((rt_int)2LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_357))).f_LINE, rt_str("target routines cannot be INLINE (4.8.2)", 40));
}
((*(R21 *)rt_nil_check(l_R_357))).f_FL = rt_add(((*(R21 *)rt_nil_check(l_R_357))).f_FL, ((rt_int)1LL));
}
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
((*(R21 *)rt_nil_check(l_R_357))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
S_R9(&((*(R21 *)rt_nil_check(l_R_357))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_357))).f_A = r_PARSE_PARAMS();
}
if ((((*(R21 *)rt_nil_check(l_R_357))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("RETURNS", 7));
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_357))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R21 *)rt_nil_check(l_R_357))).f_B = r_PARSE_TYPE_SPEC();
}
}
for (;;) {
{
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_H_358))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_R_357))).f_E = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("WHERE", 5)))
{
((*(R21 *)rt_nil_check(l_H_358))).f_B = r_PARSE_WHERE();
}
else
{
goto L_end359;
}
}
RT_B_TICK();
} L_end359: ;
((*(R21 *)rt_nil_check(l_R_357))).f_D = l_H_358;
r_EXPECT(rt_str(";", 1));
if ((((*(R21 *)rt_nil_check(l_R_357))).f_FL >= ((rt_int)2LL)))
{
r_EXPECT(rt_str("DYNSIZE", 7));
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_H_358))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
r_EXPECT(rt_str(";", 1));
for (;;) {
if ((r_IS(rt_str("END", 3)) && ((r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PROCEDURE", 9)) || r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("FUNCTION", 8)))))) goto L_end360;
{
r_SKIP();
}
RT_B_TICK();
} L_end360: ;
}
else
{
((*(R21 *)rt_nil_check(l_R_357))).f_C = r_PARSE_CLOSED_BODY();
}
r_EXPECT(rt_str("END", 3));
if ((((*(R21 *)rt_nil_check(l_R_357))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("FUNCTION", 8));
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, ((*(R21 *)rt_nil_check(l_R_357))).f_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), ((*(R21 *)rt_nil_check(l_R_357))).f_NAME);
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv361 = l_R_357;
return rv361; }
rt_raise(RT_X_INIT);
}
static R21 * r_BIN_NODE(R9 p_OP, rt_int p_LINE, R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_N_362; memset(&l_N_362, 0, sizeof l_N_362);
l_N_362 = r_NEW_NODE(g_N_BINOP, p_LINE);
S_R9(&((*(R21 *)rt_nil_check(l_N_362))).f_NAME, p_OP, 0);
((*(R21 *)rt_nil_check(l_N_362))).f_A = p_A;
((*(R21 *)rt_nil_check(l_N_362))).f_B = p_B;
{ R21 * rv363 = l_N_362;
return rv363; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_EXPR(void) { RT_B_TICK(); 
R21 * l_E_364; memset(&l_E_364, 0, sizeof l_E_364);
l_E_364 = r_PARSE_SIMPLE();
if (((((r_IS(rt_str("ROUNDED", 7)) || r_IS(rt_str("TRUNCATED", 9))) || r_IS(rt_str("NATIVE_R", 8))) || r_IS(rt_str("NATIVE_T", 8))) || r_ROUNDING_AHEAD()))
{
{
R21 * l_Q_365; memset(&l_Q_365, 0, sizeof l_Q_365);
l_Q_365 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
S_R9(&((*(R21 *)rt_nil_check(l_Q_365))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_Q_365))).f_A = l_E_364;
l_E_364 = l_Q_365;
}
}
if ((r_IS(rt_str("WITH", 4)) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PREC", 4))))
{
{
R21 * l_Q_366; memset(&l_Q_366, 0, sizeof l_Q_366);
l_Q_366 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
r_SKIP();
r_SKIP();
if ((((*(R21 *)rt_nil_check(l_E_364))).f_KIND == g_N_QUAL))
{
l_Q_366 = l_E_364;
}
else
{
((*(R21 *)rt_nil_check(l_Q_366))).f_A = l_E_364;
}
((*(R21 *)rt_nil_check(l_Q_366))).f_B = r_PARSE_SIMPLE();
l_E_364 = l_Q_366;
}
}
{ R21 * rv367 = l_E_364;
return rv367; }
rt_raise(RT_X_INIT);
}
static rt_int r_ROUNDING_AHEAD(void) { RT_B_TICK(); 
R10 l_N_368; memset(&l_N_368, 0, sizeof l_N_368);
S_R10(&l_N_368, r_AHEAD(((rt_int)1LL)), 0);
if ((!r_IS_KIND(g_K_ID)))
{
{ rt_int rv369 = 0;
return rv369; }
}
if ((((((((r_IS(rt_str("CONNECT", 7)) || r_IS(rt_str("SIGNALS", 7))) || r_IS(rt_str("IMPORTS", 7))) || r_IS(rt_str("PRIORITY", 8))) || r_IS(rt_str("WHERE", 5))) || r_IS(rt_str("NEEDS", 5))) || r_IS(rt_str("AS", 2))) || r_IS(rt_str("PREC", 4))))
{
{ rt_int rv370 = 0;
return rv370; }
}
{ rt_int rv371 = (!(((((((r_TOK_IS(l_N_368, rt_str("(", 1)) || r_TOK_IS(l_N_368, rt_str(".", 1))) || r_TOK_IS(l_N_368, rt_str(":=", 2))) || r_TOK_IS(l_N_368, rt_str(":", 1))) || r_TOK_IS(l_N_368, rt_str("$", 1))) || r_TOK_IS(l_N_368, rt_str("@", 1))) || r_TOK_IS(l_N_368, rt_str("[", 1)))));
return rv371; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SIMPLE(void) { RT_B_TICK(); 
R21 * l_LEFT_372; memset(&l_LEFT_372, 0, sizeof l_LEFT_372);
l_LEFT_372 = r_PARSE_CONJ();
for (;;) {
if ((!((((r_IS(rt_str("OR", 2)) || r_IS(rt_str("!", 1))) || r_IS(rt_str("XOR", 3))) || r_IS(rt_str("->", 2)))))) goto L_end373;
{
{
R10 l_T_374; memset(&l_T_374, 0, sizeof l_T_374);
S_R10(&l_T_374, r_CUR(), 0);
r_SKIP();
l_LEFT_372 = r_BIN_NODE((l_T_374).f_TX, (l_T_374).f_LINE, l_LEFT_372, r_PARSE_CONJ());
}
}
RT_B_TICK();
} L_end373: ;
{ R21 * rv375 = l_LEFT_372;
return rv375; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CONJ(void) { RT_B_TICK(); 
R21 * l_LEFT_376; memset(&l_LEFT_376, 0, sizeof l_LEFT_376);
l_LEFT_376 = r_PARSE_RELATION();
for (;;) {
if ((!((r_IS(rt_str("AND", 3)) || r_IS(rt_str("&", 1)))))) goto L_end377;
{
{
R10 l_T_378; memset(&l_T_378, 0, sizeof l_T_378);
S_R10(&l_T_378, r_CUR(), 0);
r_SKIP();
l_LEFT_376 = r_BIN_NODE((l_T_378).f_TX, (l_T_378).f_LINE, l_LEFT_376, r_PARSE_RELATION());
}
}
RT_B_TICK();
} L_end377: ;
{ R21 * rv379 = l_LEFT_376;
return rv379; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_RELATION(void) { RT_B_TICK(); 
R21 * l_LEFT_380; memset(&l_LEFT_380, 0, sizeof l_LEFT_380);
l_LEFT_380 = r_PARSE_SUM();
for (;;) {
{
{
R10 l_T_382; memset(&l_T_382, 0, sizeof l_T_382);
S_R10(&l_T_382, r_CUR(), 0);
if ((((((r_IS(rt_str("=", 1)) || r_IS(rt_str("<", 1))) || r_IS(rt_str(">", 1))) || r_IS(rt_str("<=", 2))) || r_IS(rt_str(">=", 2))) || r_IS(rt_str("<>", 2))))
{
r_SKIP();
l_LEFT_380 = r_BIN_NODE((l_T_382).f_TX, (l_T_382).f_LINE, l_LEFT_380, r_PARSE_SUM());
}
else if (r_IS(rt_str("IN", 2)))
{
{
R21 * l_N_383; memset(&l_N_383, 0, sizeof l_N_383);
l_N_383 = r_NEW_NODE(g_N_IN, (l_T_382).f_LINE);
r_SKIP();
((*(R21 *)rt_nil_check(l_N_383))).f_A = l_LEFT_380;
((*(R21 *)rt_nil_check(l_N_383))).f_B = r_PARSE_RANGE();
l_LEFT_380 = l_N_383;
}
}
else
{
{ R21 * rv384 = l_LEFT_380;
return rv384; }
}
}
}
RT_B_TICK();
} L_end381: ;
rt_raise(RT_X_INIT);
}
static R21 * r_TRY_SCALED(R21 * p_LEFT, rstr p_OPS) { RT_B_TICK(); 
rt_int l_SAVED_385; memset(&l_SAVED_385, 0, sizeof l_SAVED_385);
l_SAVED_385 = ((*(R7 *)rt_nil_check(g_W))).f_POS;
rt_int l_LINE_386; memset(&l_LINE_386, 0, sizeof l_LINE_386);
l_LINE_386 = r_LINE_NOW();
R21 * l_N_387; memset(&l_N_387, 0, sizeof l_N_387);
if ((!r_IS(rt_str("!", 1))))
{
{ R21 * rv388 = NULL;
return rv388; }
}
{
R10 l_OP_389; memset(&l_OP_389, 0, sizeof l_OP_389);
S_R10(&l_OP_389, r_AHEAD(((rt_int)1LL)), 0);
R9 l_T_390; memset(&l_T_390, 0, sizeof l_T_390);
S_R9(&l_T_390, (l_OP_389).f_TX, 0);
rt_int l_FOUND_391; memset(&l_FOUND_391, 0, sizeof l_FOUND_391);
l_FOUND_391 = 0;
if (((!((l_OP_389).f_KIND == g_K_SYM)) && (!((l_OP_389).f_KIND == g_K_RES))))
{
{ R21 * rv392 = NULL;
return rv392; }
}
{ rt_int it394_lo = ((rt_int)0LL), it394_hi = rt_sub((rt_int)(p_OPS).len, (l_T_390).f_LEN);
for (rt_int it394 = it394_lo; it394 <= it394_hi; it394++) {
{
if (rt_b_eq(rt_b_slice(p_OPS, it394, rt_sub(rt_add(it394, (l_T_390).f_LEN), ((rt_int)1LL))), r_STR(l_T_390, (l_T_390).f_LEN)))
{
if (((((it394 == ((rt_int)0LL)) || rt_b_eq(rt_b_slice(p_OPS, rt_sub(it394, ((rt_int)1LL)), rt_sub(it394, ((rt_int)1LL))), rt_str(" ", 1)))) && (((rt_add(it394, (l_T_390).f_LEN) == (rt_int)(p_OPS).len) || rt_b_eq(rt_b_slice(p_OPS, rt_add(it394, (l_T_390).f_LEN), rt_add(it394, (l_T_390).f_LEN)), rt_str(" ", 1))))))
{
l_FOUND_391 = 1;
}
}
}
RT_B_TICK();
if (it394 == it394_hi) break;
} } L_end393: ;
if ((!l_FOUND_391))
{
{ R21 * rv395 = NULL;
return rv395; }
}
r_SKIP();
r_SKIP();
l_N_387 = r_BIN_NODE(l_T_390, l_LINE_386, p_LEFT, NULL);
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R21 *)rt_nil_check(l_N_387))).f_FL = ((rt_int)2LL);
{ R21 * rv396 = l_N_387;
return rv396; }
}
if (((((r_IS_KIND(g_K_NUM) || r_IS_KIND(g_K_ID)) || r_IS(rt_str("(", 1))) || r_IS(rt_str("-", 1))) || r_IS(rt_str("+", 1))))
{
((*(R21 *)rt_nil_check(l_N_387))).f_D = r_PARSE_SECONDARY();
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R21 *)rt_nil_check(l_N_387))).f_FL = ((rt_int)1LL);
{ R21 * rv397 = l_N_387;
return rv397; }
}
}
((*(R7 *)rt_nil_check(g_W))).f_POS = l_SAVED_385;
{ R21 * rv398 = NULL;
return rv398; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SUM(void) { RT_B_TICK(); 
R21 * l_LEFT_399; memset(&l_LEFT_399, 0, sizeof l_LEFT_399);
l_LEFT_399 = r_PARSE_TERM();
for (;;) {
{
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("!!", 2))))
{
{
R10 l_T_401; memset(&l_T_401, 0, sizeof l_T_401);
S_R10(&l_T_401, r_CUR(), 0);
r_SKIP();
l_LEFT_399 = r_BIN_NODE((l_T_401).f_TX, (l_T_401).f_LINE, l_LEFT_399, r_PARSE_TERM());
}
}
else
{
{
R21 * l_N_402; memset(&l_N_402, 0, sizeof l_N_402);
l_N_402 = r_TRY_SCALED(l_LEFT_399, rt_str("+ -", 3));
if ((l_N_402 == NULL))
{
{ R21 * rv403 = l_LEFT_399;
return rv403; }
}
((*(R21 *)rt_nil_check(l_N_402))).f_B = r_PARSE_TERM();
l_LEFT_399 = l_N_402;
}
}
}
RT_B_TICK();
} L_end400: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TERM(void) { RT_B_TICK(); 
R21 * l_LEFT_404; memset(&l_LEFT_404, 0, sizeof l_LEFT_404);
l_LEFT_404 = r_PARSE_FACTOR();
for (;;) {
{
if ((((r_IS(rt_str("*", 1)) || r_IS(rt_str("/", 1))) || r_IS(rt_str("//", 2))) || r_IS(rt_str("MOD", 3))))
{
{
R10 l_T_406; memset(&l_T_406, 0, sizeof l_T_406);
S_R10(&l_T_406, r_CUR(), 0);
r_SKIP();
l_LEFT_404 = r_BIN_NODE((l_T_406).f_TX, (l_T_406).f_LINE, l_LEFT_404, r_PARSE_FACTOR());
}
}
else
{
{
R21 * l_N_407; memset(&l_N_407, 0, sizeof l_N_407);
l_N_407 = r_TRY_SCALED(l_LEFT_404, rt_str("* / // MOD", 10));
if ((l_N_407 == NULL))
{
{ R21 * rv408 = l_LEFT_404;
return rv408; }
}
((*(R21 *)rt_nil_check(l_N_407))).f_B = r_PARSE_FACTOR();
l_LEFT_404 = l_N_407;
}
}
}
RT_B_TICK();
} L_end405: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FACTOR(void) { RT_B_TICK(); 
R21 * l_LEFT_409; memset(&l_LEFT_409, 0, sizeof l_LEFT_409);
l_LEFT_409 = r_PARSE_SECONDARY();
for (;;) {
{
if (r_IS(rt_str("**", 2)))
{
{
R10 l_T_411; memset(&l_T_411, 0, sizeof l_T_411);
S_R10(&l_T_411, r_CUR(), 0);
r_SKIP();
l_LEFT_409 = r_BIN_NODE((l_T_411).f_TX, (l_T_411).f_LINE, l_LEFT_409, r_PARSE_SECONDARY());
}
}
else
{
{
R21 * l_N_412; memset(&l_N_412, 0, sizeof l_N_412);
l_N_412 = r_TRY_SCALED(l_LEFT_409, rt_str("**", 2));
if ((l_N_412 == NULL))
{
{ R21 * rv413 = l_LEFT_409;
return rv413; }
}
((*(R21 *)rt_nil_check(l_N_412))).f_B = r_PARSE_SECONDARY();
l_LEFT_409 = l_N_412;
}
}
}
RT_B_TICK();
} L_end410: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SECONDARY(void) { RT_B_TICK(); 
R10 l_T_414; memset(&l_T_414, 0, sizeof l_T_414);
S_R10(&l_T_414, r_CUR(), 0);
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("NOT", 3))))
{
{
R21 * l_N_415; memset(&l_N_415, 0, sizeof l_N_415);
l_N_415 = r_NEW_NODE(g_N_UNOP, (l_T_414).f_LINE);
r_SKIP();
S_R9(&((*(R21 *)rt_nil_check(l_N_415))).f_NAME, (l_T_414).f_TX, 0);
((*(R21 *)rt_nil_check(l_N_415))).f_A = r_PARSE_POSTFIX();
{ R21 * rv416 = l_N_415;
return rv416; }
}
}
{ R21 * rv417 = r_PARSE_POSTFIX();
return rv417; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ARGS(R21 * p_N) { RT_B_TICK(); 
R21 * l_HEAD_418; memset(&l_HEAD_418, 0, sizeof l_HEAD_418);
l_HEAD_418 = NULL;
R21 * l_TAIL_419; memset(&l_TAIL_419, 0, sizeof l_TAIL_419);
l_TAIL_419 = NULL;
rt_int l_GROUP_420; memset(&l_GROUP_420, 0, sizeof l_GROUP_420);
l_GROUP_420 = ((rt_int)0LL);
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end421;
{
if (r_ACCEPT(rt_str("#", 1)))
{
switch (l_GROUP_420) {
case 0:
{
((*(R21 *)rt_nil_check(p_N))).f_A = l_HEAD_418;
}
break;
case 1:
{
((*(R21 *)rt_nil_check(p_N))).f_B = l_HEAD_418;
}
break;
default:
{
r_FAIL(((*(R21 *)rt_nil_check(p_N))).f_LINE, rt_str("too many # in an argument list", 30));
}
break;
}
l_GROUP_420 = rt_add(l_GROUP_420, ((rt_int)1LL));
l_HEAD_418 = NULL;
l_TAIL_419 = NULL;
}
else
{
if ((l_GROUP_420 == ((rt_int)0LL)))
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_418, &l_TAIL_419);
if ((r_IS(rt_str("RETURNS", 7)) && (((*(R21 *)rt_nil_check(l_TAIL_419))).f_KIND == g_N_APPLY)))
{
r_SKIP();
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_TAIL_419))).f_E = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
}
else
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_418, &l_TAIL_419);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
RT_B_TICK();
} L_end421: ;
r_EXPECT(rt_str(")", 1));
switch (l_GROUP_420) {
case 0:
{
((*(R21 *)rt_nil_check(p_N))).f_A = l_HEAD_418;
}
break;
case 1:
{
((*(R21 *)rt_nil_check(p_N))).f_B = l_HEAD_418;
}
break;
default:
{
((*(R21 *)rt_nil_check(p_N))).f_C = l_HEAD_418;
}
break;
}
{ R21 * rv422 = p_N;
return rv422; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_POSTFIX(void) { RT_B_TICK(); 
R21 * l_E_423; memset(&l_E_423, 0, sizeof l_E_423);
l_E_423 = r_PARSE_ATOM();
R21 * l_N_424; memset(&l_N_424, 0, sizeof l_N_424);
for (;;) {
{
{
rt_int l_LINE_426; memset(&l_LINE_426, 0, sizeof l_LINE_426);
l_LINE_426 = r_LINE_NOW();
if ((r_IS(rt_str("(", 1)) && (((*(R21 *)rt_nil_check(l_E_423))).f_KIND == g_N_ENUMLIT)))
{
((*(R21 *)rt_nil_check(l_E_423))).f_KIND = g_N_NAME;
}
if ((r_IS(rt_str("(", 1)) && (((*(R21 *)rt_nil_check(l_E_423))).f_KIND == g_N_NAME)))
{
((*(R21 *)rt_nil_check(l_E_423))).f_KIND = g_N_APPLY;
l_E_423 = r_PARSE_ARGS(l_E_423);
}
else if (r_IS(rt_str("(", 1)))
{
l_N_424 = r_NEW_NODE(g_N_INDEX, l_LINE_426);
l_N_424 = r_PARSE_ARGS(l_N_424);
((*(R21 *)rt_nil_check(l_N_424))).f_B = ((*(R21 *)rt_nil_check(l_N_424))).f_A;
((*(R21 *)rt_nil_check(l_N_424))).f_A = l_E_423;
l_E_423 = l_N_424;
}
else if (r_ACCEPT(rt_str(".", 1)))
{
l_N_424 = r_NEW_NODE(g_N_FIELD, l_LINE_426);
((*(R21 *)rt_nil_check(l_N_424))).f_A = l_E_423;
S_R9(&((*(R21 *)rt_nil_check(l_N_424))).f_NAME, r_IDENT(), 0);
l_E_423 = l_N_424;
}
else if (r_ACCEPT(rt_str("@", 1)))
{
l_N_424 = r_NEW_NODE(g_N_DEREF, l_LINE_426);
((*(R21 *)rt_nil_check(l_N_424))).f_A = l_E_423;
l_E_423 = l_N_424;
}
else if ((r_IS(rt_str("[", 1)) && (!r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("]", 1)))))
{
r_SKIP();
l_N_424 = r_NEW_NODE(g_N_SUBSTR, l_LINE_426);
((*(R21 *)rt_nil_check(l_N_424))).f_A = l_E_423;
((*(R21 *)rt_nil_check(l_N_424))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_424))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str("]", 1));
l_E_423 = l_N_424;
}
else
{
{ R21 * rv427 = l_E_423;
return rv427; }
}
}
}
RT_B_TICK();
} L_end425: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_BITS(rt_int p_BITS_PER, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_AT_428; memset(&l_AT_428, 0, sizeof l_AT_428);
l_AT_428 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R21 * l_N_429; memset(&l_N_429, 0, sizeof l_N_429);
l_N_429 = r_NEW_NODE(g_N_BITS, p_LINE);
R9 l_R_430; memset(&l_R_430, 0, sizeof l_R_430);
if ((!r_IS_KIND(g_K_STR)))
{
r_FAIL(p_LINE, rt_str("a quoted bitstring expected", 27));
}
for (;;) {
if ((!r_IS_KIND(g_K_STR))) goto L_end431;
{
{
R9 l_T_432; memset(&l_T_432, 0, sizeof l_T_432);
S_R9(&l_T_432, (r_CUR()).f_TX, 0);
rstr l_S_433; memset(&l_S_433, 0, sizeof l_S_433);
l_S_433 = rt_b_str_new((l_T_432).f_LEN, 0);
rt_b_assign(&l_S_433, r_STR(l_T_432, (l_T_432).f_LEN));
{ rt_int it435_lo = ((rt_int)0LL), it435_hi = rt_sub((l_T_432).f_LEN, ((rt_int)1LL));
for (rt_int it435 = it435_lo; it435 <= it435_hi; it435++) {
{
if ((!rt_b_eq(rt_b_slice(l_S_433, it435, it435), rt_str(" ", 1))))
{
{
rt_int l_C_436; memset(&l_C_436, 0, sizeof l_C_436);
l_C_436 = r_CODE_OF(rt_b_slice(l_S_433, it435, it435));
rt_int l_V_437; memset(&l_V_437, 0, sizeof l_V_437);
l_V_437 = rt_sub(l_C_436, ((rt_int)48LL));
rt_int l_P_438; memset(&l_P_438, 0, sizeof l_P_438);
l_P_438 = ((rt_int)1LL);
if ((l_C_436 >= ((rt_int)65LL)))
{
l_V_437 = rt_sub(l_C_436, ((rt_int)55LL));
}
{ rt_int it440_lo = ((rt_int)1LL), it440_hi = p_BITS_PER;
for (rt_int it440 = it440_lo; it440 <= it440_hi; it440++) {
{
l_P_438 = rt_mul(l_P_438, ((rt_int)2LL));
}
RT_B_TICK();
if (it440 == it440_hi) break;
} } L_end439: ;
if (((l_V_437 < ((rt_int)0LL)) || (l_V_437 >= l_P_438)))
{
r_FAIL(p_LINE, rt_str("a bad digit in a bitstring literal", 34));
}
{ rt_int it442_lo = ((rt_int)1LL), it442_hi = p_BITS_PER;
for (rt_int it442 = it442_lo; it442 <= it442_hi; it442++) {
{
l_P_438 = rt_quot(l_P_438, ((rt_int)2LL));
if ((rt_rem((rt_quot(l_V_437, l_P_438)), ((rt_int)2LL)) == ((rt_int)1LL)))
{
S_R9(&l_R_430, r_MK(rt_str("1", 1)), 0);
}
else
{
S_R9(&l_R_430, r_MK(rt_str("0", 1)), 0);
}
}
RT_B_TICK();
if (it442 == it442_hi) break;
} } L_end441: ;
}
}
}
RT_B_TICK();
if (it435 == it435_hi) break;
} } L_end434: ;
}
r_SKIP();
}
RT_B_TICK();
} L_end431: ;
S_R9(&((*(R21 *)rt_nil_check(l_N_429))).f_NAME, ({ R9 rc443; memset(&rc443, 0, sizeof rc443);  rc443.f_AT = l_AT_428; rc443.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_428); rc443.f_H = rt_neg(((rt_int)1LL)); rc443; }), 0);
{ R21 * rv444 = l_N_429;
return rv444; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ATOM(void) { RT_B_TICK(); 
R10 l_T_445; memset(&l_T_445, 0, sizeof l_T_445);
S_R10(&l_T_445, r_CUR(), 0);
R21 * l_N_446; memset(&l_N_446, 0, sizeof l_N_446);
if (((l_T_445).f_KIND == g_K_NUM))
{
l_N_446 = r_NEW_NODE(g_N_INT, (l_T_445).f_LINE);
((*(R21 *)rt_nil_check(l_N_446))).f_IV = (l_T_445).f_IV;
S_R9(&((*(R21 *)rt_nil_check(l_N_446))).f_NAME, (l_T_445).f_TX, 0);
r_SKIP();
{ R21 * rv447 = l_N_446;
return rv447; }
}
if ((((l_T_445).f_KIND == g_K_REAL) || ((l_T_445).f_KIND == g_K_FIX)))
{
l_N_446 = r_NEW_NODE(g_N_REAL, (l_T_445).f_LINE);
S_R9(&((*(R21 *)rt_nil_check(l_N_446))).f_NAME, (l_T_445).f_TX, 0);
if (((l_T_445).f_KIND == g_K_FIX))
{
((*(R21 *)rt_nil_check(l_N_446))).f_FL = ((rt_int)1LL);
((*(R21 *)rt_nil_check(l_N_446))).f_IV = (l_T_445).f_IV;
}
r_SKIP();
{ R21 * rv448 = l_N_446;
return rv448; }
}
if (((l_T_445).f_KIND == g_K_GEN))
{
{ R21 * rv449 = r_PARSE_TYPE_ARG();
return rv449; }
}
if (((r_IS(rt_str("BIN", 3)) || r_IS(rt_str("OCT", 3))) || r_IS(rt_str("HEX", 3))))
{
r_SKIP();
if (r_TOK_IS(l_T_445, rt_str("BIN", 3)))
{
{ R21 * rv450 = r_PARSE_BITS(((rt_int)1LL), (l_T_445).f_LINE);
return rv450; }
}
else if (r_TOK_IS(l_T_445, rt_str("OCT", 3)))
{
{ R21 * rv451 = r_PARSE_BITS(((rt_int)3LL), (l_T_445).f_LINE);
return rv451; }
}
{ R21 * rv452 = r_PARSE_BITS(((rt_int)4LL), (l_T_445).f_LINE);
return rv452; }
}
if ((((l_T_445).f_KIND == g_K_STR) || ((l_T_445).f_KIND == g_K_ENUM)))
{
{ R21 * rv453 = r_PARSE_CHARSTRING(r_NO_TEXT());
return rv453; }
}
if ((((l_T_445).f_KIND == g_K_ID) && ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_STR) || (((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM) && (!r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str("(", 1)))) && (!r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":=", 2)))))))))
{
r_SKIP();
{ R21 * rv454 = r_PARSE_CHARSTRING((l_T_445).f_TX);
return rv454; }
}
if (r_ACCEPT(rt_str("TRUE", 4)))
{
l_N_446 = r_NEW_NODE(g_N_BOOL, (l_T_445).f_LINE);
((*(R21 *)rt_nil_check(l_N_446))).f_IV = ((rt_int)1LL);
{ R21 * rv455 = l_N_446;
return rv455; }
}
else if (r_ACCEPT(rt_str("FALSE", 5)))
{
{ R21 * rv456 = r_NEW_NODE(g_N_BOOL, (l_T_445).f_LINE);
return rv456; }
}
else if (r_ACCEPT(rt_str("NIL", 3)))
{
{ R21 * rv457 = r_NEW_NODE(g_N_NIL, (l_T_445).f_LINE);
return rv457; }
}
else if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R21 * rv458 = r_NEW_NODE(g_N_ANY, (l_T_445).f_LINE);
return rv458; }
}
if (r_ACCEPT(rt_str("[", 1)))
{
{
R21 * l_TS_459; memset(&l_TS_459, 0, sizeof l_TS_459);
l_TS_459 = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str("]", 1));
r_EXPECT(rt_str("$$", 2));
if (((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
l_N_446 = r_PARSE_ATOM();
((*(R21 *)rt_nil_check(l_N_446))).f_B = l_TS_459;
{ R21 * rv460 = l_N_446;
return rv460; }
}
l_N_446 = r_NEW_NODE(g_N_TYPESPEC, (l_T_445).f_LINE);
((*(R21 *)rt_nil_check(l_N_446))).f_A = l_TS_459;
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_N_446))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
{ R21 * rv461 = l_N_446;
return rv461; }
}
}
if (r_IS(rt_str("(", 1)))
{
if ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
{
R21 * l_HEAD_462; memset(&l_HEAD_462, 0, sizeof l_HEAD_462);
l_HEAD_462 = NULL;
R21 * l_TAIL_463; memset(&l_TAIL_463, 0, sizeof l_TAIL_463);
l_TAIL_463 = NULL;
r_SKIP();
for (;;) {
{
l_N_446 = r_NEW_NODE(g_N_FINIT, r_LINE_NOW());
S_R9(&((*(R21 *)rt_nil_check(l_N_446))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_446))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_N_446, &l_HEAD_462, &l_TAIL_463);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end464;
} L_end464: ;
r_EXPECT(rt_str(")", 1));
l_N_446 = r_NEW_NODE(g_N_RECCONS, (l_T_445).f_LINE);
((*(R21 *)rt_nil_check(l_N_446))).f_A = l_HEAD_462;
{ R21 * rv465 = l_N_446;
return rv465; }
}
}
r_SKIP();
{
R21 * l_E_466; memset(&l_E_466, 0, sizeof l_E_466);
l_E_466 = r_PARSE_EXPR();
if (r_IS(rt_str(",", 1)))
{
{
R21 * l_HEAD_467; memset(&l_HEAD_467, 0, sizeof l_HEAD_467);
l_HEAD_467 = NULL;
R21 * l_TAIL_468; memset(&l_TAIL_468, 0, sizeof l_TAIL_468);
l_TAIL_468 = NULL;
r_ADD_LIST(l_E_466, &l_HEAD_467, &l_TAIL_468);
for (;;) {
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end469;
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_467, &l_TAIL_468);
}
RT_B_TICK();
} L_end469: ;
r_EXPECT(rt_str(")", 1));
l_N_446 = r_NEW_NODE(g_N_ARRCONS, (l_T_445).f_LINE);
((*(R21 *)rt_nil_check(l_N_446))).f_A = l_HEAD_467;
{ R21 * rv470 = l_N_446;
return rv470; }
}
}
r_EXPECT(rt_str(")", 1));
l_N_446 = r_NEW_NODE(g_N_PAREN, (l_T_445).f_LINE);
((*(R21 *)rt_nil_check(l_N_446))).f_A = l_E_466;
{ R21 * rv471 = l_N_446;
return rv471; }
}
}
if (((l_T_445).f_KIND == g_K_ID))
{
l_N_446 = r_NEW_NODE(g_N_NAME, (l_T_445).f_LINE);
S_R9(&((*(R21 *)rt_nil_check(l_N_446))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (((((r_TEQS(((*(R21 *)rt_nil_check(l_N_446))).f_NAME, rt_str("NEW", 3)) || r_TEQS(((*(R21 *)rt_nil_check(l_N_446))).f_NAME, rt_str("PTR$NEW", 7))) || r_TEQS(((*(R21 *)rt_nil_check(l_N_446))).f_NAME, rt_str("SEMAPHORE$NEW", 13)))) && r_IS(rt_str("(", 1))))
{
((*(R21 *)rt_nil_check(l_N_446))).f_KIND = g_N_NEW;
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_N_446))).f_A = r_PARSE_TYPE_ARG();
r_EXPECT(rt_str(")", 1));
}
{ R21 * rv472 = l_N_446;
return rv472; }
}
r_FAILT((l_T_445).f_LINE, rt_str("an expression expected, not ", 28), (l_T_445).f_TX);
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CHARSTRING(R9 p_CHARSET) { RT_B_TICK(); 
rt_int l_LINE_473; memset(&l_LINE_473, 0, sizeof l_LINE_473);
l_LINE_473 = r_LINE_NOW();
R21 * l_HEAD_474; memset(&l_HEAD_474, 0, sizeof l_HEAD_474);
l_HEAD_474 = NULL;
R21 * l_TAIL_475; memset(&l_TAIL_475, 0, sizeof l_TAIL_475);
l_TAIL_475 = NULL;
rt_int l_STRINGS_476; memset(&l_STRINGS_476, 0, sizeof l_STRINGS_476);
l_STRINGS_476 = ((rt_int)0LL);
R21 * l_N_477; memset(&l_N_477, 0, sizeof l_N_477);
for (;;) {
if ((!((r_IS_KIND(g_K_STR) || r_IS_KIND(g_K_ENUM))))) goto L_end478;
{
l_N_477 = r_NEW_NODE(g_N_PART, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_N_477))).f_IV = (r_CUR()).f_KIND;
S_R9(&((*(R21 *)rt_nil_check(l_N_477))).f_NAME, (r_CUR()).f_TX, 0);
if ((((*(R21 *)rt_nil_check(l_N_477))).f_IV == g_K_STR))
{
l_STRINGS_476 = rt_add(l_STRINGS_476, ((rt_int)1LL));
}
r_SKIP();
r_ADD_LIST(l_N_477, &l_HEAD_474, &l_TAIL_475);
}
RT_B_TICK();
} L_end478: ;
if ((((l_STRINGS_476 == ((rt_int)0LL)) && ((p_CHARSET).f_LEN == ((rt_int)0LL))) && (((*(R21 *)rt_nil_check(l_HEAD_474))).f_NEXT == NULL)))
{
((*(R21 *)rt_nil_check(l_HEAD_474))).f_KIND = g_N_ENUMLIT;
{ R21 * rv479 = l_HEAD_474;
return rv479; }
}
l_N_477 = r_NEW_NODE(g_N_STR, l_LINE_473);
((*(R21 *)rt_nil_check(l_N_477))).f_A = l_HEAD_474;
S_R9(&((*(R21 *)rt_nil_check(l_N_477))).f_NAME, p_CHARSET, 0);
{ R21 * rv480 = l_N_477;
return rv480; }
rt_raise(RT_X_INIT);
}
static rt_int r_AT_BODY_END(void) { RT_B_TICK(); 
{ rt_int rv481 = ((((((((((r_IS_KIND(g_K_EOF) || r_IS(rt_str("END", 3))) || r_IS(rt_str("ELSE", 4))) || r_IS(rt_str("ORIF", 4))) || r_IS(rt_str("EXCEPT", 6))) || r_IS(rt_str("PROCEDURE", 9))) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()) || r_IS(rt_str("MODULE", 6))) || r_IS(rt_str("PATH", 4)));
return rv481; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_STATEMENTS(void) { RT_B_TICK(); 
R21 * l_HEAD_482; memset(&l_HEAD_482, 0, sizeof l_HEAD_482);
l_HEAD_482 = NULL;
R21 * l_TAIL_483; memset(&l_TAIL_483, 0, sizeof l_TAIL_483);
l_TAIL_483 = NULL;
for (;;) {
if (r_AT_BODY_END()) goto L_end484;
{
r_ADD_LIST(r_PARSE_STATEMENT(), &l_HEAD_482, &l_TAIL_483);
}
RT_B_TICK();
} L_end484: ;
{ R21 * rv485 = l_HEAD_482;
return rv485; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_HANDLERS(void) { RT_B_TICK(); 
R21 * l_HEAD_486; memset(&l_HEAD_486, 0, sizeof l_HEAD_486);
l_HEAD_486 = NULL;
R21 * l_TAIL_487; memset(&l_TAIL_487, 0, sizeof l_TAIL_487);
l_TAIL_487 = NULL;
r_EXPECT(rt_str("EXCEPT", 6));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end488;
{
{
R21 * l_H_489; memset(&l_H_489, 0, sizeof l_H_489);
l_H_489 = r_NEW_NODE(g_N_HANDLER, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_H_489))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_H_489))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_H_489, &l_HEAD_486, &l_TAIL_487);
}
}
RT_B_TICK();
} L_end488: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("EXCEPT", 6));
r_EXPECT(rt_str(";", 1));
{ R21 * rv490 = l_HEAD_486;
return rv490; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_STATEMENT(void) { RT_B_TICK(); 
R21 * l_S_491; memset(&l_S_491, 0, sizeof l_S_491);
if ((r_IS_KIND(g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str(":", 1))))
{
l_S_491 = r_NEW_NODE(g_N_LABELED, r_LINE_NOW());
S_R9(&((*(R21 *)rt_nil_check(l_S_491))).f_NAME, r_IDENT(), 0);
r_SKIP();
((*(R21 *)rt_nil_check(l_S_491))).f_A = r_PARSE_STATEMENT();
{ R21 * rv492 = l_S_491;
return rv492; }
}
l_S_491 = r_PARSE_UNLABELED();
if (r_IS(rt_str("EXCEPT", 6)))
{
{
R21 * l_X_493; memset(&l_X_493, 0, sizeof l_X_493);
l_X_493 = r_NEW_NODE(g_N_EXCEPT, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_X_493))).f_A = l_S_491;
((*(R21 *)rt_nil_check(l_X_493))).f_B = r_PARSE_HANDLERS();
{ R21 * rv494 = l_X_493;
return rv494; }
}
}
{ R21 * rv495 = l_S_491;
return rv495; }
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
rt_int l_LINE_496; memset(&l_LINE_496, 0, sizeof l_LINE_496);
l_LINE_496 = r_LINE_NOW();
R21 * l_S_497; memset(&l_S_497, 0, sizeof l_S_497);
R21 * l_T_498; memset(&l_T_498, 0, sizeof l_T_498);
if (r_ACCEPT(rt_str(";", 1)))
{
{ R21 * rv499 = r_NEW_NODE(g_N_NULL, l_LINE_496);
return rv499; }
}
else if (r_IS(rt_str("IF", 2)))
{
{ R21 * rv500 = r_PARSE_IF();
return rv500; }
}
else if (r_IS(rt_str("SELECT", 6)))
{
{ R21 * rv501 = r_PARSE_CASE();
return rv501; }
}
else if (r_IS(rt_str("LOOP", 4)))
{
{ R21 * rv502 = r_PARSE_LOOP();
return rv502; }
}
else if (r_IS(rt_str("PAR_BLOCK", 9)))
{
{ R21 * rv503 = r_PARSE_PAR();
return rv503; }
}
else if (r_ACCEPT(rt_str("BLOCK", 5)))
{
l_S_497 = r_NEW_NODE(g_N_BLOCK, l_LINE_496);
((*(R21 *)rt_nil_check(l_S_497))).f_A = r_PARSE_BODY();
r_EXPECT_END(rt_str("BLOCK", 5));
{ R21 * rv504 = l_S_497;
return rv504; }
}
else if (r_ACCEPT(rt_str("WITH", 4)))
{
l_S_497 = r_NEW_NODE(g_N_WITH, l_LINE_496);
S_R9(&((*(R21 *)rt_nil_check(l_S_497))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("NAMING", 6)))
{
((*(R21 *)rt_nil_check(l_S_497))).f_IV = ((rt_int)1LL);
((*(R21 *)rt_nil_check(l_S_497))).f_A = r_PARSE_POSTFIX();
}
else
{
r_EXPECT(rt_str(":=", 2));
((*(R21 *)rt_nil_check(l_S_497))).f_A = r_PARSE_EXPR();
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
((*(R21 *)rt_nil_check(l_S_497))).f_B = r_PARSE_UNLABELED();
{ R21 * rv505 = l_S_497;
return rv505; }
}
else if (r_ACCEPT(rt_str("EXIT", 4)))
{
r_EXPECT(rt_str(";", 1));
{ R21 * rv506 = r_NEW_NODE(g_N_EXIT, l_LINE_496);
return rv506; }
}
else if (r_ACCEPT(rt_str("GO", 2)))
{
r_EXPECT(rt_str("TO", 2));
l_S_497 = r_NEW_NODE(g_N_GOTO, l_LINE_496);
S_R9(&((*(R21 *)rt_nil_check(l_S_497))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(";", 1));
{ R21 * rv507 = l_S_497;
return rv507; }
}
else if (r_ACCEPT(rt_str("RETURN", 6)))
{
l_S_497 = r_NEW_NODE(g_N_RETURN, l_LINE_496);
if ((!r_IS(rt_str(";", 1))))
{
((*(R21 *)rt_nil_check(l_S_497))).f_A = r_PARSE_EXPR();
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv508 = l_S_497;
return rv508; }
}
else if (r_ACCEPT(rt_str("SIGNAL", 6)))
{
l_S_497 = r_NEW_NODE(g_N_SIGNAL, l_LINE_496);
if (r_IS_KIND(g_K_ID))
{
S_R9(&((*(R21 *)rt_nil_check(l_S_497))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv509 = l_S_497;
return rv509; }
}
else if (r_ACCEPT(rt_str("ASSERT", 6)))
{
l_S_497 = r_NEW_NODE(g_N_ASSERT, l_LINE_496);
((*(R21 *)rt_nil_check(l_S_497))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R21 * rv510 = l_S_497;
return rv510; }
}
else if (r_ACCEPT(rt_str("TERMINATE", 9)))
{
l_S_497 = r_NEW_NODE(g_N_TERMINATE, l_LINE_496);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_S_497))).f_A = r_PARSE_POSTFIX();
r_EXPECT(rt_str(")", 1));
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv511 = l_S_497;
return rv511; }
}
l_T_498 = r_PARSE_POSTFIX();
if (r_IS(rt_str("[", 1)))
{
r_FAIL(l_LINE_496, rt_str("a substring of a substring", 26));
}
if (r_ACCEPT(rt_str(":=", 2)))
{
l_S_497 = r_NEW_NODE(g_N_ASSIGN, l_LINE_496);
((*(R21 *)rt_nil_check(l_S_497))).f_A = l_T_498;
((*(R21 *)rt_nil_check(l_S_497))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R21 * rv512 = l_S_497;
return rv512; }
}
r_EXPECT(rt_str(";", 1));
if ((((((*(R21 *)rt_nil_check(l_T_498))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_T_498))).f_KIND == g_N_APPLY)) || (((*(R21 *)rt_nil_check(l_T_498))).f_KIND == g_N_ENUMLIT)))
{
((*(R21 *)rt_nil_check(l_T_498))).f_KIND = g_N_CALL;
}
else
{
r_FAIL(l_LINE_496, rt_str("a statement expected", 20));
}
{ R21 * rv513 = l_T_498;
return rv513; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_IF(void) { RT_B_TICK(); 
R21 * l_S_514; memset(&l_S_514, 0, sizeof l_S_514);
l_S_514 = r_NEW_NODE(g_N_IF, r_LINE_NOW());
R21 * l_HEAD_515; memset(&l_HEAD_515, 0, sizeof l_HEAD_515);
l_HEAD_515 = NULL;
R21 * l_TAIL_516; memset(&l_TAIL_516, 0, sizeof l_TAIL_516);
l_TAIL_516 = NULL;
r_EXPECT(rt_str("IF", 2));
for (;;) {
{
{
R21 * l_ARM_518; memset(&l_ARM_518, 0, sizeof l_ARM_518);
l_ARM_518 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_ARM_518))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("THEN", 4));
((*(R21 *)rt_nil_check(l_ARM_518))).f_B = r_PARSE_BODY();
r_ADD_LIST(l_ARM_518, &l_HEAD_515, &l_TAIL_516);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str("ORIF", 4)))) goto L_end517;
} L_end517: ;
((*(R21 *)rt_nil_check(l_S_514))).f_A = l_HEAD_515;
if (r_ACCEPT(rt_str("ELSE", 4)))
{
((*(R21 *)rt_nil_check(l_S_514))).f_B = r_PARSE_BODY();
}
r_EXPECT_END(rt_str("IF", 2));
{ R21 * rv519 = l_S_514;
return rv519; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CASE_LABEL(void) { RT_B_TICK(); 
if ((r_IS(rt_str("[", 1)) || ((r_IS(rt_str("(", 1)) && r_RANGE_AHEAD()))))
{
{ R21 * rv520 = r_PARSE_RANGE();
return rv520; }
}
{ R21 * rv521 = r_PARSE_EXPR();
return rv521; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CASE(void) { RT_B_TICK(); 
R21 * l_S_522; memset(&l_S_522, 0, sizeof l_S_522);
l_S_522 = r_NEW_NODE(g_N_CASE, r_LINE_NOW());
R21 * l_HEAD_523; memset(&l_HEAD_523, 0, sizeof l_HEAD_523);
l_HEAD_523 = NULL;
R21 * l_TAIL_524; memset(&l_TAIL_524, 0, sizeof l_TAIL_524);
l_TAIL_524 = NULL;
r_EXPECT(rt_str("SELECT", 6));
((*(R21 *)rt_nil_check(l_S_522))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end525;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_S_522))).f_C = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R21 *)rt_nil_check(l_S_522))).f_D = r_PARSE_HANDLERS();
}
}
else
{
{
R21 * l_ARM_526; memset(&l_ARM_526, 0, sizeof l_ARM_526);
l_ARM_526 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
R21 * l_LH_527; memset(&l_LH_527, 0, sizeof l_LH_527);
l_LH_527 = NULL;
R21 * l_LT_528; memset(&l_LT_528, 0, sizeof l_LT_528);
l_LT_528 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_527, &l_LT_528);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end529;
} L_end529: ;
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_ARM_526))).f_A = l_LH_527;
((*(R21 *)rt_nil_check(l_ARM_526))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R21 *)rt_nil_check(l_ARM_526))).f_C = r_PARSE_HANDLERS();
}
r_ADD_LIST(l_ARM_526, &l_HEAD_523, &l_TAIL_524);
}
}
}
RT_B_TICK();
} L_end525: ;
((*(R21 *)rt_nil_check(l_S_522))).f_B = l_HEAD_523;
r_EXPECT_END(rt_str("SELECT", 6));
{ R21 * rv530 = l_S_522;
return rv530; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_LOOP(void) { RT_B_TICK(); 
R21 * l_S_531; memset(&l_S_531, 0, sizeof l_S_531);
l_S_531 = r_NEW_NODE(g_N_LOOP, r_LINE_NOW());
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("FOR", 3)))
{
((*(R21 *)rt_nil_check(l_S_531))).f_KIND = g_N_FOR;
if (r_IS_KIND(g_K_ID))
{
S_R9(&((*(R21 *)rt_nil_check(l_S_531))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("IN", 2));
}
((*(R21 *)rt_nil_check(l_S_531))).f_A = r_PARSE_RANGE();
r_EXPECT(rt_str("DO", 2));
((*(R21 *)rt_nil_check(l_S_531))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_IS_KIND(g_K_ID))
{
if ((!r_TEQ(r_IDENT(), ((*(R21 *)rt_nil_check(l_S_531))).f_NAME)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier", 38));
}
}
else if (((((*(R21 *)rt_nil_check(l_S_531))).f_NAME).f_LEN > ((rt_int)0LL)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier (4.5.6.3)", 48));
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R21 * rv532 = l_S_531;
return rv532; }
}
if (r_ACCEPT(rt_str("UNTIL", 5)))
{
((*(R21 *)rt_nil_check(l_S_531))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("DO", 2));
}
((*(R21 *)rt_nil_check(l_S_531))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("WHEN", 4)))
{
if ((!(((*(R21 *)rt_nil_check(l_S_531))).f_A == NULL)))
{
r_FAIL(r_LINE_NOW(), rt_str("only one of UNTIL and WHEN (4.5.6.1)", 36));
}
((*(R21 *)rt_nil_check(l_S_531))).f_C = r_PARSE_EXPR();
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R21 * rv533 = l_S_531;
return rv533; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_PAR(void) { RT_B_TICK(); 
R21 * l_S_534; memset(&l_S_534, 0, sizeof l_S_534);
l_S_534 = r_NEW_NODE(g_N_PAR, r_LINE_NOW());
R21 * l_HEAD_535; memset(&l_HEAD_535, 0, sizeof l_HEAD_535);
l_HEAD_535 = NULL;
R21 * l_TAIL_536; memset(&l_TAIL_536, 0, sizeof l_TAIL_536);
l_TAIL_536 = NULL;
r_EXPECT(rt_str("PAR_BLOCK", 9));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end537;
{
{
R21 * l_P_538; memset(&l_P_538, 0, sizeof l_P_538);
l_P_538 = r_NEW_NODE(g_N_PATH, r_LINE_NOW());
R21 * l_H_539; memset(&l_H_539, 0, sizeof l_H_539);
l_H_539 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
r_EXPECT(rt_str("PATH", 4));
S_R9(&((*(R21 *)rt_nil_check(l_P_538))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_P_538))).f_E = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_538))).f_LINE);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_538))).f_E))).f_A = l_H_539;
if (r_ACCEPT(rt_str("FOR", 3)))
{
S_R9(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_538))).f_E))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_P_538))).f_FL = ((rt_int)1LL);
r_EXPECT(rt_str("IN", 2));
((*(R21 *)rt_nil_check(l_P_538))).f_A = r_PARSE_RANGE();
}
for (;;) {
{
if (r_ACCEPT(rt_str("PRIORITY", 8)))
{
((*(R21 *)rt_nil_check(l_P_538))).f_C = r_PARSE_EXPR();
}
else if (r_ACCEPT(rt_str("CONNECT", 7)))
{
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_P_538))).f_D = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_H_539))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_H_539))).f_B = r_PARSE_ITEMS();
}
else
{
goto L_end540;
}
}
RT_B_TICK();
} L_end540: ;
if ((!(((*(R21 *)rt_nil_check(l_P_538))).f_D == NULL)))
{
r_CONNECT_KNOWN(((*(R21 *)rt_nil_check(l_P_538))).f_D, l_H_539);
}
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_P_538))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PATH", 4));
r_EXPECT_NAME(((*(R21 *)rt_nil_check(l_P_538))).f_NAME);
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_P_538, &l_HEAD_535, &l_TAIL_536);
}
}
RT_B_TICK();
} L_end537: ;
((*(R21 *)rt_nil_check(l_S_534))).f_A = l_HEAD_535;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PAR_BLOCK", 9));
r_EXPECT(rt_str(";", 1));
{ R21 * rv541 = l_S_534;
return rv541; }
rt_raise(RT_X_INIT);
}
static void r_CONNECT_KNOWN(R21 * p_E, R21 * p_H) { RT_B_TICK(); 
R21 * l_R_542; memset(&l_R_542, 0, sizeof l_R_542);
l_R_542 = p_E;
for (;;) {
if (((((*(R21 *)rt_nil_check(l_R_542))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_R_542))).f_KIND == g_N_APPLY))) goto L_end543;
{
if (((!(((*(R21 *)rt_nil_check(l_R_542))).f_KIND == g_N_INDEX)) && (!(((*(R21 *)rt_nil_check(l_R_542))).f_KIND == g_N_FIELD))))
{
return;
}
l_R_542 = ((*(R21 *)rt_nil_check(l_R_542))).f_A;
}
RT_B_TICK();
} L_end543: ;
if ((((*(R21 *)rt_nil_check(p_H))).f_B == NULL))
{
((*(R21 *)rt_nil_check(p_H))).f_B = r_NEW_NODE(g_N_ITEMS, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
{
R21 * l_P_544; memset(&l_P_544, 0, sizeof l_P_544);
l_P_544 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_H))).f_B))).f_A;
for (;;) {
if ((l_P_544 == NULL)) goto L_end545;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_544))).f_NAME, ((*(R21 *)rt_nil_check(l_R_542))).f_NAME))
{
return;
}
l_P_544 = ((*(R21 *)rt_nil_check(l_P_544))).f_NEXT;
}
RT_B_TICK();
} L_end545: ;
l_P_544 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_H))).f_B))).f_B;
for (;;) {
if ((l_P_544 == NULL)) goto L_end546;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_544))).f_NAME, ((*(R21 *)rt_nil_check(l_R_542))).f_NAME))
{
return;
}
l_P_544 = ((*(R21 *)rt_nil_check(l_P_544))).f_NEXT;
}
RT_B_TICK();
} L_end546: ;
}
{
R21 * l_N_547; memset(&l_N_547, 0, sizeof l_N_547);
l_N_547 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R21 *)rt_nil_check(l_N_547))).f_NAME, ((*(R21 *)rt_nil_check(l_R_542))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_547))).f_NEXT = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_H))).f_B))).f_B;
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_H))).f_B))).f_B = l_N_547;
}
}
static R9 r_NO_TEXT(void) { RT_B_TICK(); 
{ R9 rv548 = ({ R9 rc549; memset(&rc549, 0, sizeof rc549);  rc549.f_AT = ((rt_int)0LL); rc549.f_LEN = ((rt_int)0LL); rc549.f_H = ((rt_int)0LL); rc549; });
return rv548; }
rt_raise(RT_X_INIT);
}
static R23 r_NO_MVAL(void) { RT_B_TICK(); 
{ R23 rv550 = ({ R23 rc551; memset(&rc551, 0, sizeof rc551);  rc551.f_OK = 0; rc551.f_V = ((rt_int)0LL); rc551; });
return rv550; }
rt_raise(RT_X_INIT);
}
static R23 r_SOME(rt_int p_V) { RT_B_TICK(); 
{ R23 rv552 = ({ R23 rc553; memset(&rc553, 0, sizeof rc553);  rc553.f_OK = 1; rc553.f_V = p_V; rc553; });
return rv552; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_SYM(rt_int p_KIND, R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_554; memset(&l_Y_554, 0, sizeof l_Y_554);
l_Y_554 = ((R12 *)rt_b_new(sizeof (R12)));
rt_int l_LEVEL_555; memset(&l_LEVEL_555, 0, sizeof l_LEVEL_555);
l_LEVEL_555 = ((rt_int)0LL);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_CS == NULL)))
{
l_LEVEL_555 = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
}
S_R12(&(*(R12 *)rt_nil_check(l_Y_554)), ({ R12 rc556; memset(&rc556, 0, sizeof rc556);  rc556.f_KIND = p_KIND; rc556.f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH; rc556.f_LEVEL = l_LEVEL_555; S_R9(&rc556.f_NAME, p_NAME, 0); rc556.f_T = NULL; S_R9(&rc556.f_ACCESS, r_NO_TEXT(), 0); S_R9(&rc556.f_FIELD, r_NO_TEXT(), 0); rc556.f_INPUT = 0; rc556.f_BYREF = 0; rc556.f_HASMV = 0; rc556.f_MV = ((rt_int)0LL); rc556.f_TS = NULL; rc556.f_BUSY = 0; S_R9(&rc556.f_FWD, r_NO_TEXT(), 0); rc556.f_PARAMS = NULL; rc556.f_RESULT = NULL; rc556.f_DECL = NULL; S_R9(&rc556.f_PREFIX, r_NO_TEXT(), 0); rc556.f_MODL = ((*(R7 *)rt_nil_check(g_W))).f_MODL; rc556.f_EXPORTED = 0; rc556.f_GENERIC = 0; rc556.f_FRAMED = 0; rc556.f_USES = NULL; rc556.f_INSTANCES = NULL; rc556.f_BINDINGS = NULL; rc556.f_ORIG = NULL; rc556.f_MEMBERS = NULL; rc556.f_SAVED = NULL; rc556.f_OWNER = r_CUR_OWNER(); rc556.f_WITHV = ((rt_int)0LL); rc556.f_LAZY = ((rt_int)0LL); rc556.f_SEGM = NULL; rc556.f_HOME = ((*(R7 *)rt_nil_check(g_W))).f_TRSEG; rc556.f_CHAIN = NULL; rc556.f_SNEXT = NULL; rc556; }), 0);
{ R12 * rv557 = l_Y_554;
return rv557; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_OWNER(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_IS == NULL))
{
{ rt_int rv558 = ((rt_int)0LL);
return rv558; }
}
{ rt_int rv559 = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_ID;
return rv559; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIGINAL(R12 * p_Y) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)))
{
{ R12 * rv560 = ((*(R12 *)rt_nil_check(p_Y))).f_ORIG;
return rv560; }
}
{ R12 * rv561 = p_Y;
return rv561; }
rt_raise(RT_X_INIT);
}
static rt_int r_BUCKET(R9 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_H < ((rt_int)0LL)))
{
{ rt_int rv562 = r_HASH_OF(r_STR(p_NAME, (p_NAME).f_LEN));
return rv562; }
}
{ rt_int rv563 = (p_NAME).f_H;
return rv563; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_564; memset(&l_Y_564, 0, sizeof l_Y_564);
l_Y_564 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(r_BUCKET(p_NAME), (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
for (;;) {
if ((l_Y_564 == NULL)) goto L_end565;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_564))).f_NAME, p_NAME))
{
{ R12 * rv566 = l_Y_564;
return rv566; }
}
l_Y_564 = ((*(R12 *)rt_nil_check(l_Y_564))).f_CHAIN;
}
RT_B_TICK();
} L_end565: ;
{ R12 * rv567 = NULL;
return rv567; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_568; memset(&l_Y_568, 0, sizeof l_Y_568);
l_Y_568 = r_LOOKUP(p_NAME);
if ((l_Y_568 == NULL))
{
{ R12 * rv569 = NULL;
return rv569; }
}
{ R12 * rv570 = r_ORIGINAL(l_Y_568);
return rv570; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUPS(rstr p_NAME) { RT_B_TICK(); 
{ R12 * rv571 = r_LOOKUP(r_MKN(p_NAME));
return rv571; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP_NEXT(R12 * p_Y) { RT_B_TICK(); 
R12 * l_Z_572; memset(&l_Z_572, 0, sizeof l_Z_572);
l_Z_572 = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
for (;;) {
if ((l_Z_572 == NULL)) goto L_end573;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Z_572))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ R12 * rv574 = l_Z_572;
return rv574; }
}
l_Z_572 = ((*(R12 *)rt_nil_check(l_Z_572))).f_CHAIN;
}
RT_B_TICK();
} L_end573: ;
{ R12 * rv575 = NULL;
return rv575; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUTINE(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv576 = ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_BUILTIN));
return rv576; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_B_577; memset(&l_B_577, 0, sizeof l_B_577);
l_B_577 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_OLD_578; memset(&l_OLD_578, 0, sizeof l_OLD_578);
l_OLD_578 = r_LOOKUP(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
for (;;) {
if ((l_OLD_578 == NULL)) goto L_end579;
{
if ((!(((*(R12 *)rt_nil_check(l_OLD_578))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
goto L_end579;
}
if ((!((((r_IS_ROUTINE(l_OLD_578) && r_IS_ROUTINE(p_Y))) || (((((*(R12 *)rt_nil_check(l_OLD_578))).f_KIND == g_Y_ENUMLIT) && (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)))))))
{
r_FAILT(p_LINE, rt_str("redeclared in the same scope: ", 30), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
}
l_OLD_578 = r_LOOKUP_NEXT(l_OLD_578);
}
RT_B_TICK();
} L_end579: ;
((*(R12 *)rt_nil_check(p_Y))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_Y))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_577, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_577, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_Y;
((*(R12 *)rt_nil_check(p_Y))).f_SNEXT = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = p_Y;
}
static void r_OPEN_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_add(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
}
static void r_CLOSE_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == NULL)) goto L_end580;
{
if ((((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH <= ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end580;
}
r_UNLINK(((*(R7 *)rt_nil_check(g_W))).f_SCOPE);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_SNEXT;
}
RT_B_TICK();
} L_end580: ;
}
static void r_UNLINK(R12 * p_Y) { RT_B_TICK(); 
rt_int l_B_581; memset(&l_B_581, 0, sizeof l_B_581);
l_B_581 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_P_582; memset(&l_P_582, 0, sizeof l_P_582);
l_P_582 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_581, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
if ((l_P_582 == p_Y))
{
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_581, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
for (;;) {
if ((l_P_582 == NULL)) goto L_end583;
{
if ((((*(R12 *)rt_nil_check(l_P_582))).f_CHAIN == p_Y))
{
((*(R12 *)rt_nil_check(l_P_582))).f_CHAIN = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
l_P_582 = ((*(R12 *)rt_nil_check(l_P_582))).f_CHAIN;
}
RT_B_TICK();
} L_end583: ;
}
static R12 * r_TAKE_SCOPE(R12 * p_MARK) { RT_B_TICK(); 
R12 * l_HEAD_584; memset(&l_HEAD_584, 0, sizeof l_HEAD_584);
l_HEAD_584 = NULL;
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == p_MARK)) goto L_end585;
{
{
R12 * l_Y_586; memset(&l_Y_586, 0, sizeof l_Y_586);
l_Y_586 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_UNLINK(l_Y_586);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(l_Y_586))).f_SNEXT;
((*(R12 *)rt_nil_check(l_Y_586))).f_SNEXT = l_HEAD_584;
l_HEAD_584 = l_Y_586;
}
}
RT_B_TICK();
} L_end585: ;
{ R12 * rv587 = l_HEAD_584;
return rv587; }
rt_raise(RT_X_INIT);
}
static R22 * r_NEW_TYP(rt_int p_KIND) { RT_B_TICK(); 
R22 * l_T_588; memset(&l_T_588, 0, sizeof l_T_588);
l_T_588 = ((R22 *)rt_b_new(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_T_588)), ({ R22 rc589; memset(&rc589, 0, sizeof rc589);  rc589.f_KIND = p_KIND; rc589.f_SCALE = ((rt_int)0LL); S_R9(&rc589.f_LO_C, r_NO_TEXT(), 0); S_R9(&rc589.f_HI_C, r_NO_TEXT(), 0); S_R23(&rc589.f_MLO, r_NO_MVAL(), 0); S_R23(&rc589.f_MHI, r_NO_MVAL(), 0); rc589.f_RLEVEL = ((rt_int)0LL); S_R9(&rc589.f_LEN_C, r_NO_TEXT(), 0); S_R23(&rc589.f_MLEN, r_NO_MVAL(), 0); S_R9(&rc589.f_GEN, r_NO_TEXT(), 0); rc589.f_BASE = NULL; rc589.f_ELEM = NULL; rc589.f_TARGET = NULL; rc589.f_TARGET_TS = NULL; rc589.f_FIELDS = NULL; rc589.f_LITS = NULL; rc589.f_NLITS = ((rt_int)0LL); rc589.f_UNORDERED = 0; rc589.f_BOUNDS = NULL; rc589.f_DIMS = ((rt_int)0LL); rc589.f_ARGS = NULL; S_R9(&rc589.f_NAME, r_NO_TEXT(), 0); S_R9(&rc589.f_CNAME, r_NO_TEXT(), 0); rc589.f_MODL = NULL; rc589.f_REPS = NULL; rc589.f_DECL = NULL; S_R9(&rc589.f_GENP, r_NO_TEXT(), 0); rc589; }), 0);
{ R22 * rv590 = l_T_588;
return rv590; }
rt_raise(RT_X_INIT);
}
static R22 * r_COPY_TYP(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_591; memset(&l_C_591, 0, sizeof l_C_591);
l_C_591 = ((R22 *)rt_b_new(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_C_591)), (*(R22 *)rt_nil_check(p_T)), 0);
{ R22 * rv592 = l_C_591;
return rv592; }
rt_raise(RT_X_INIT);
}
static void r_PREDEF_TYPE(rstr p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_593; memset(&l_Y_593, 0, sizeof l_Y_593);
l_Y_593 = r_NEW_SYM(g_Y_TYPE, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_593))).f_T = p_T;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_593))).f_NAME, 0);
}
r_DEFINE(l_Y_593, ((rt_int)0LL));
}
static void r_PREDEF_BUILTIN(rstr p_NAME) { RT_B_TICK(); 
r_DEFINE(r_NEW_SYM(g_Y_BUILTIN, r_MKN(p_NAME)), ((rt_int)0LL));
}
static void r_PREDEF_CONST(rstr p_NAME, R22 * p_T, rt_int p_V) { RT_B_TICK(); 
R12 * l_Y_594; memset(&l_Y_594, 0, sizeof l_Y_594);
l_Y_594 = r_NEW_SYM(g_Y_CONST, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_594))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_594))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_594))).f_MV = p_V;
((*(R12 *)rt_nil_check(l_Y_594))).f_INPUT = 1;
S_R9(&((*(R12 *)rt_nil_check(l_Y_594))).f_ACCESS, r_FMT1(rt_str("((rt_int)@)", 11), r_NUM(p_V)), 0);
r_DEFINE(l_Y_594, ((rt_int)0LL));
}
static R22 * r_PREDEF_ENUM(rstr p_NAME, rstr p_NAMES, rt_int p_UNORDERED) { RT_B_TICK(); 
R21 * l_HEAD_595; memset(&l_HEAD_595, 0, sizeof l_HEAD_595);
l_HEAD_595 = NULL;
R21 * l_TAIL_596; memset(&l_TAIL_596, 0, sizeof l_TAIL_596);
l_TAIL_596 = NULL;
rt_int l_START_597; memset(&l_START_597, 0, sizeof l_START_597);
l_START_597 = ((rt_int)0LL);
{ rt_int it599_lo = ((rt_int)0LL), it599_hi = (rt_int)(p_NAMES).len;
for (rt_int it599 = it599_lo; it599 <= it599_hi; it599++) {
{
if (((it599 == (rt_int)(p_NAMES).len) || rt_b_eq(rt_b_slice(p_NAMES, it599, it599), rt_str(" ", 1))))
{
if ((it599 > l_START_597))
{
{
R21 * l_N_600; memset(&l_N_600, 0, sizeof l_N_600);
l_N_600 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R21 *)rt_nil_check(l_N_600))).f_NAME, r_MKN(rt_b_slice(p_NAMES, l_START_597, rt_sub(it599, ((rt_int)1LL)))), 0);
r_ADD_LIST(l_N_600, &l_HEAD_595, &l_TAIL_596);
}
}
l_START_597 = rt_add(it599, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it599 == it599_hi) break;
} } L_end598: ;
{
R22 * l_T_601; memset(&l_T_601, 0, sizeof l_T_601);
l_T_601 = r_ENUM_CLASS(l_HEAD_595, p_UNORDERED, ((rt_int)0LL));
r_PREDEF_TYPE(p_NAME, l_T_601);
{ R22 * rv602 = l_T_601;
return rv602; }
}
rt_raise(RT_X_INIT);
}
static void r_PREDEFINE(void) { RT_B_TICK(); 
R22 * l_T_603; memset(&l_T_603, 0, sizeof l_T_603);
R21 * l_ASCII_LITS_604; memset(&l_ASCII_LITS_604, 0, sizeof l_ASCII_LITS_604);
l_ASCII_LITS_604 = NULL;
R21 * l_TAIL_605; memset(&l_TAIL_605, 0, sizeof l_TAIL_605);
l_TAIL_605 = NULL;
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
{ rt_int it607_lo = ((rt_int)0LL), it607_hi = ((rt_int)127LL);
for (rt_int it607 = it607_lo; it607 <= it607_hi; it607++) {
{
{
R21 * l_N_608; memset(&l_N_608, 0, sizeof l_N_608);
l_N_608 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R21 *)rt_nil_check(l_N_608))).f_NAME, r_ASCII_NAME(it607), 0);
r_ADD_LIST(l_N_608, &l_ASCII_LITS_604, &l_TAIL_605);
}
}
RT_B_TICK();
if (it607 == it607_hi) break;
} } L_end606: ;
((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII = r_ENUM_CLASS(l_ASCII_LITS_604, 0, ((rt_int)0LL));
r_PREDEF_TYPE(rt_str("ASCII", 5), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII);
((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS = r_PREDEF_ENUM(rt_str("ROUNDINGS", 9), rt_str("ROUNDED TRUNCATED NATIVE_R NATIVE_T", 35), 0);
l_T_603 = r_PREDEF_ENUM(rt_str("FIXED_PRECISIONS", 16), rt_str("STD", 3), 0);
r_PREDEF_BOUNDS_DEF();
l_T_603 = r_PREDEF_ENUM(rt_str("SIGNING", 7), rt_str("SIGNED UNSIGNED", 15), 1);
l_T_603 = r_PREDEF_ENUM(rt_str("PACKING", 7), rt_str("DENSE PACKED UNPACKED", 21), 1);
l_T_603 = r_PREDEF_ENUM(rt_str("USAGE", 5), rt_str("SYNCH REGION", 12), 1);
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
rstr l_OPS_609; memset(&l_OPS_609, 0, sizeof l_OPS_609);
l_OPS_609 = rt_b_str_new(((rt_int)271LL), 0);
rt_b_assign(&l_OPS_609, rt_str(" ADD_ SUBTRACT_ MULTIPLY_ DIVIDE_ MODULUS_ EXPONENTIATE_ CONCATENATE_ EQUAL_ UNEQUAL_ GREATER_THAN_ LESS_THAN_ GREATER_EQUAL_ LESS_EQUAL_ AND_ OR_ XOR_ IMPLIES_ MD_ADD_ MD_SUBTRACT_ MD_MULTIPLY_ MD_DIVIDE_ NEGATE_ MON_PLUS_ COMPLEMENT_ STORE_ SUBSTRING_ SUBSTRING_STORE_ ", 271));
rt_int l_START_610; memset(&l_START_610, 0, sizeof l_START_610);
l_START_610 = ((rt_int)1LL);
{ rt_int it612_lo = ((rt_int)1LL), it612_hi = ((rt_int)270LL);
for (rt_int it612 = it612_lo; it612 <= it612_hi; it612++) {
{
if (rt_b_eq(rt_b_slice(l_OPS_609, it612, it612), rt_str(" ", 1)))
{
if ((it612 > l_START_610))
{
r_PREDEF_BUILTIN(rt_b_slice(l_OPS_609, l_START_610, rt_sub(it612, ((rt_int)1LL))));
}
l_START_610 = rt_add(it612, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it612 == it612_hi) break;
} } L_end611: ;
}
r_PREDEF_CONST(rt_str("MAX_NOM_PREC", 12), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)15LL));
r_PREDEF_CONST(rt_str("CLOCK_SCALE", 11), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)20LL));
r_OPEN_SCOPE();
}
static void r_PREDEF_BOUNDS_DEF(void) { RT_B_TICK(); 
R21 * l_F_613; memset(&l_F_613, 0, sizeof l_F_613);
l_F_613 = r_NEW_NODE(g_N_FORMAL, ((rt_int)0LL));
R21 * l_V_614; memset(&l_V_614, 0, sizeof l_V_614);
l_V_614 = r_NEW_NODE(g_N_VAR, ((rt_int)0LL));
R21 * l_R_615; memset(&l_R_615, 0, sizeof l_R_615);
l_R_615 = r_NEW_NODE(g_TS_RECORD, ((rt_int)0LL));
R21 * l_D_616; memset(&l_D_616, 0, sizeof l_D_616);
l_D_616 = r_NEW_NODE(g_N_TYPE, ((rt_int)0LL));
R21 * l_FX_617; memset(&l_FX_617, 0, sizeof l_FX_617);
l_FX_617 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
R12 * l_Y_618; memset(&l_Y_618, 0, sizeof l_Y_618);
l_Y_618 = r_NEW_SYM(g_Y_TYPE, r_MKN(rt_str("BOUNDS_DEF", 10)));
((*(R21 *)rt_nil_check(l_F_613))).f_A = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_F_613))).f_A))).f_NAME, r_MKN(rt_str("MAX_P", 5)), 0);
((*(R21 *)rt_nil_check(l_F_613))).f_B = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R9(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_F_613))).f_B))).f_NAME, r_MKN(rt_str("FIXED_PRECISIONS", 16)), 0);
S_R9(&((*(R21 *)rt_nil_check(l_FX_617))).f_NAME, r_MKN(rt_str("FIXED", 5)), 0);
((*(R21 *)rt_nil_check(l_FX_617))).f_A = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_617))).f_A))).f_NEXT = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_617))).f_A))).f_NEXT))).f_IV = ((rt_int)2LL);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_617))).f_A))).f_NEXT))).f_NEXT = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R9(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_617))).f_A))).f_NEXT))).f_NEXT))).f_NAME, r_MKN(rt_str("MAX_P", 5)), 0);
((*(R21 *)rt_nil_check(l_V_614))).f_A = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_614))).f_A))).f_NAME, r_MKN(rt_str("MIN", 3)), 0);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_614))).f_A))).f_NEXT = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_614))).f_A))).f_NEXT))).f_NAME, r_MKN(rt_str("MAX", 3)), 0);
((*(R21 *)rt_nil_check(l_V_614))).f_B = l_FX_617;
((*(R21 *)rt_nil_check(l_R_615))).f_A = l_V_614;
S_R9(&((*(R21 *)rt_nil_check(l_D_616))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_618))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_D_616))).f_A = l_F_613;
((*(R21 *)rt_nil_check(l_D_616))).f_B = l_R_615;
((*(R12 *)rt_nil_check(l_Y_618))).f_DECL = l_D_616;
r_DEFINE(l_Y_618, ((rt_int)0LL));
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
rstr l_CONTROLS_619; memset(&l_CONTROLS_619, 0, sizeof l_CONTROLS_619);
l_CONTROLS_619 = rt_b_str_new(((rt_int)128LL), 0);
rt_b_assign(&l_CONTROLS_619, rt_str(" NUL SOH STX EXT EOT ENQ ACK BEL BS  HT  LF  VT  FF  CR  SO  SI  DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM  SUB ESC FS  GS  RS  US ", 128));
if ((p_C < ((rt_int)32LL)))
{
if (rt_b_eq(rt_b_slice(l_CONTROLS_619, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL))), rt_str(" ", 1)))
{
{ R9 rv620 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_619, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)2LL)))));
return rv620; }
}
{ R9 rv621 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_619, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)))));
return rv621; }
}
else if ((p_C == ((rt_int)39LL)))
{
{ R9 rv622 = r_MKN(rt_str("\\''''", 5));
return rv622; }
}
else if ((p_C < ((rt_int)96LL)))
{
{ R9 rv623 = r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), r_CHAR_OF(p_C)), rt_str("'", 1)));
return rv623; }
}
else if ((p_C == ((rt_int)96LL)))
{
{ R9 rv624 = r_MKN(rt_str("\\ACCENT", 7));
return rv624; }
}
else if ((p_C <= ((rt_int)122LL)))
{
{ R9 rv625 = r_MKN(rt_b_cat(rt_str("\\", 1), r_CHAR_OF(rt_sub(p_C, ((rt_int)32LL)))));
return rv625; }
}
else if ((p_C == ((rt_int)123LL)))
{
{ R9 rv626 = r_MKN(rt_str("\\[", 2));
return rv626; }
}
else if ((p_C == ((rt_int)124LL)))
{
{ R9 rv627 = r_MKN(rt_str("\\BAR", 4));
return rv627; }
}
else if ((p_C == ((rt_int)125LL)))
{
{ R9 rv628 = r_MKN(rt_str("\\]", 2));
return rv628; }
}
else if ((p_C == ((rt_int)126LL)))
{
{ R9 rv629 = r_MKN(rt_str("\\TILDE", 6));
return rv629; }
}
{ R9 rv630 = r_MKN(rt_str("\\DEL", 4));
return rv630; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_SCALAR(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv631 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_BOOL)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv631; }
rt_raise(RT_X_INIT);
}
static R22 * r_REAL_TYPE(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R22 * rv632 = r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv632; }
}
{ R22 * rv633 = p_T;
return rv633; }
rt_raise(RT_X_INIT);
}
static R9 r_TYPE_NAME(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_634; memset(&l_K_634, 0, sizeof l_K_634);
l_K_634 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{ R9 rv635 = ((*(R22 *)rt_nil_check(p_T))).f_NAME;
return rv635; }
}
else if ((l_K_634 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))
{
{ R9 rv636 = r_MK(rt_str("INTEGER", 7));
return rv636; }
}
{ R9 rv637 = r_FMT1(rt_str("FIXED (@, 2, STD)", 17), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv637; }
}
else if ((l_K_634 == g_T_BOOL))
{
{ R9 rv638 = r_MK(rt_str("BOOLEAN", 7));
return rv638; }
}
else if ((l_K_634 == g_T_ENUM))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R9 rv639 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv639; }
}
{ R9 rv640 = r_MK(rt_str("an enumerated type", 18));
return rv640; }
}
else if ((l_K_634 == g_T_STR))
{
{ R9 rv641 = r_MK(rt_str("CHAR_STR", 8));
return rv641; }
}
else if ((l_K_634 == g_T_BITS))
{
{ R9 rv642 = r_MK(rt_str("BIT", 3));
return rv642; }
}
else if ((l_K_634 == g_T_FLOAT))
{
{ R9 rv643 = r_FMT1(rt_str("FLOAT (@)", 9), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv643; }
}
else if ((l_K_634 == g_T_ARR))
{
{ R9 rv644 = r_FMT1(rt_str("ARRAY OF @", 10), r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_ELEM));
return rv644; }
}
else if ((l_K_634 == g_T_REC))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R9 rv645 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv645; }
}
{ R9 rv646 = r_MK(rt_str("RECORD", 6));
return rv646; }
}
else if ((l_K_634 == g_T_PTR))
{
{ R9 rv647 = r_MK(rt_str("PTR", 3));
return rv647; }
}
else if ((l_K_634 == g_T_SEM))
{
{ R9 rv648 = r_MK(rt_str("SEMAPHORE", 9));
return rv648; }
}
else if ((l_K_634 == g_T_NIL))
{
{ R9 rv649 = r_MK(rt_str("NIL", 3));
return rv649; }
}
else if ((l_K_634 == g_T_VOID))
{
{ R9 rv650 = r_MK(rt_str("no value", 8));
return rv650; }
}
{ R9 rv651 = r_MK(rt_str("a type", 6));
return rv651; }
rt_raise(RT_X_INIT);
}
static R9 r_SUBST_SELF(R9 p_T, R9 p_SELF) { RT_B_TICK(); 
rstr l_S_652; memset(&l_S_652, 0, sizeof l_S_652);
l_S_652 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_652, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_653; memset(&l_AT_653, 0, sizeof l_AT_653);
l_AT_653 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_START_654; memset(&l_START_654, 0, sizeof l_START_654);
l_START_654 = ((rt_int)0LL);
R9 l_R_655; memset(&l_R_655, 0, sizeof l_R_655);
rt_int l_I_656; memset(&l_I_656, 0, sizeof l_I_656);
l_I_656 = ((rt_int)0LL);
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ R9 rv657 = p_T;
return rv657; }
}
for (;;) {
if ((l_I_656 >= rt_sub((p_T).f_LEN, ((rt_int)1LL)))) goto L_end658;
{
if (rt_b_eq(rt_b_slice(l_S_652, l_I_656, rt_add(l_I_656, ((rt_int)1LL))), rt_str("$S", 2)))
{
S_R9(&l_R_655, r_MK(rt_b_slice(l_S_652, l_START_654, rt_sub(l_I_656, ((rt_int)1LL)))), 0);
S_R9(&l_R_655, r_MK(r_STR(p_SELF, (p_SELF).f_LEN)), 0);
l_I_656 = rt_add(l_I_656, ((rt_int)2LL));
l_START_654 = l_I_656;
}
else
{
l_I_656 = rt_add(l_I_656, ((rt_int)1LL));
}
}
RT_B_TICK();
} L_end658: ;
if ((l_START_654 == ((rt_int)0LL)))
{
((*(R7 *)rt_nil_check(g_W))).f_TOP = l_AT_653;
{ R9 rv659 = p_T;
return rv659; }
}
S_R9(&l_R_655, r_MK(rt_b_slice(l_S_652, l_START_654, rt_sub((p_T).f_LEN, ((rt_int)1LL)))), 0);
{ R9 rv660 = ({ R9 rc661; memset(&rc661, 0, sizeof rc661);  rc661.f_AT = l_AT_653; rc661.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_653); rc661.f_H = rt_neg(((rt_int)1LL)); rc661; });
return rv660; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LITERALS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_662; memset(&l_P_662, 0, sizeof l_P_662);
l_P_662 = p_A;
R21 * l_Q_663; memset(&l_Q_663, 0, sizeof l_Q_663);
l_Q_663 = p_B;
for (;;) {
if (((l_P_662 == NULL) || (l_Q_663 == NULL))) goto L_end664;
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_P_662))).f_NAME, ((*(R21 *)rt_nil_check(l_Q_663))).f_NAME)))
{
{ rt_int rv665 = 0;
return rv665; }
}
l_P_662 = ((*(R21 *)rt_nil_check(l_P_662))).f_NEXT;
l_Q_663 = ((*(R21 *)rt_nil_check(l_Q_663))).f_NEXT;
}
RT_B_TICK();
} L_end664: ;
{ rt_int rv666 = ((l_P_662 == NULL) && (l_Q_663 == NULL));
return rv666; }
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_CLASS(R21 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_667; memset(&l_Y_667, 0, sizeof l_Y_667);
l_Y_667 = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
R22 * l_T_668; memset(&l_T_668, 0, sizeof l_T_668);
{
R21 * l_P_669; memset(&l_P_669, 0, sizeof l_P_669);
l_P_669 = p_LITS;
for (;;) {
if ((l_P_669 == NULL)) goto L_end670;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_P_669))).f_NEXT, ((*(R21 *)rt_nil_check(l_P_669))).f_NAME))
{
r_FAILT(p_LINE, rt_str("an enumerated literal must be unique in its list (3.4.1): ", 58), ((*(R21 *)rt_nil_check(l_P_669))).f_NAME);
}
l_P_669 = ((*(R21 *)rt_nil_check(l_P_669))).f_NEXT;
}
RT_B_TICK();
} L_end670: ;
}
for (;;) {
if ((l_Y_667 == NULL)) goto L_end671;
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_667))).f_T))).f_UNORDERED == p_UNORDERED) && r_SAME_LITERALS(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_667))).f_T))).f_LITS, p_LITS)))
{
r_DECLARE_LITERALS(((*(R12 *)rt_nil_check(l_Y_667))).f_T, p_LINE);
{ R22 * rv672 = ((*(R12 *)rt_nil_check(l_Y_667))).f_T;
return rv672; }
}
l_Y_667 = ((*(R12 *)rt_nil_check(l_Y_667))).f_INSTANCES;
}
RT_B_TICK();
} L_end671: ;
l_T_668 = r_NEW_TYP(g_T_ENUM);
((*(R22 *)rt_nil_check(l_T_668))).f_BASE = l_T_668;
((*(R22 *)rt_nil_check(l_T_668))).f_LITS = p_LITS;
((*(R22 *)rt_nil_check(l_T_668))).f_NLITS = r_LIST_LENGTH(p_LITS);
((*(R22 *)rt_nil_check(l_T_668))).f_UNORDERED = p_UNORDERED;
S_R9(&((*(R22 *)rt_nil_check(l_T_668))).f_CNAME, r_NEW_NAME(rt_str("E", 1)), 0);
l_Y_667 = r_NEW_SYM(g_Y_TYPE, r_NO_TEXT());
((*(R12 *)rt_nil_check(l_Y_667))).f_T = l_T_668;
((*(R12 *)rt_nil_check(l_Y_667))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
((*(R7 *)rt_nil_check(g_W))).f_ENUMS = l_Y_667;
{
R21 * l_P_673; memset(&l_P_673, 0, sizeof l_P_673);
l_P_673 = p_LITS;
R9 l_NAMES_674; memset(&l_NAMES_674, 0, sizeof l_NAMES_674);
S_R9(&l_NAMES_674, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_P_673 == NULL)) goto L_end675;
{
S_R9(&l_NAMES_674, r_FMT2(rt_str("@@, ", 4), l_NAMES_674, r_CSTRING(((*(R21 *)rt_nil_check(l_P_673))).f_NAME)), 0);
l_P_673 = ((*(R21 *)rt_nil_check(l_P_673))).f_NEXT;
}
RT_B_TICK();
} L_end675: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static const char *@[] = { @0 };", 32), ((*(R22 *)rt_nil_check(l_T_668))).f_CNAME, l_NAMES_674));
}
r_DECLARE_LITERALS(l_T_668, p_LINE);
{ R22 * rv676 = l_T_668;
return rv676; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_LITERALS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_P_677; memset(&l_P_677, 0, sizeof l_P_677);
l_P_677 = ((*(R22 *)rt_nil_check(p_T))).f_LITS;
rt_int l_I_678; memset(&l_I_678, 0, sizeof l_I_678);
l_I_678 = ((rt_int)0LL);
for (;;) {
if ((l_P_677 == NULL)) goto L_end679;
{
if ((r_VISIBLE_LITERAL(((*(R21 *)rt_nil_check(l_P_677))).f_NAME, p_T) == NULL))
{
{
R12 * l_Y_680; memset(&l_Y_680, 0, sizeof l_Y_680);
l_Y_680 = r_NEW_SYM(g_Y_ENUMLIT, ((*(R21 *)rt_nil_check(l_P_677))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_680))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_680))).f_MV = l_I_678;
((*(R12 *)rt_nil_check(l_Y_680))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_680))).f_INPUT = 1;
r_DEFINE(l_Y_680, p_LINE);
}
}
l_I_678 = rt_add(l_I_678, ((rt_int)1LL));
l_P_677 = ((*(R21 *)rt_nil_check(l_P_677))).f_NEXT;
}
RT_B_TICK();
} L_end679: ;
}
static R12 * r_FIND_LITERAL(R9 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_V_681; memset(&l_V_681, 0, sizeof l_V_681);
l_V_681 = r_VISIBLE_LITERAL(p_NAME, p_T);
if (((!(l_V_681 == NULL)) || (p_T == NULL)))
{
{ R12 * rv682 = l_V_681;
return rv682; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL))
{
{ R12 * rv683 = NULL;
return rv683; }
}
{
R21 * l_P_684; memset(&l_P_684, 0, sizeof l_P_684);
l_P_684 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
rt_int l_I_685; memset(&l_I_685, 0, sizeof l_I_685);
l_I_685 = ((rt_int)0LL);
for (;;) {
if ((l_P_684 == NULL)) goto L_end686;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_684))).f_NAME, p_NAME))
{
{
R12 * l_Y_687; memset(&l_Y_687, 0, sizeof l_Y_687);
l_Y_687 = r_NEW_SYM(g_Y_ENUMLIT, p_NAME);
((*(R12 *)rt_nil_check(l_Y_687))).f_T = ((*(R22 *)rt_nil_check(p_T))).f_BASE;
((*(R12 *)rt_nil_check(l_Y_687))).f_MV = l_I_685;
((*(R12 *)rt_nil_check(l_Y_687))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_687))).f_INPUT = 1;
{ R12 * rv688 = l_Y_687;
return rv688; }
}
}
l_I_685 = rt_add(l_I_685, ((rt_int)1LL));
l_P_684 = ((*(R21 *)rt_nil_check(l_P_684))).f_NEXT;
}
RT_B_TICK();
} L_end686: ;
}
{ R12 * rv689 = NULL;
return rv689; }
rt_raise(RT_X_INIT);
}
static R12 * r_VISIBLE_LITERAL(R9 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_690; memset(&l_Y_690, 0, sizeof l_Y_690);
l_Y_690 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_690 == NULL)) goto L_end691;
{
if ((((*(R12 *)rt_nil_check(l_Y_690))).f_KIND == g_Y_ENUMLIT))
{
if ((p_T == NULL))
{
{ R12 * rv692 = l_Y_690;
return rv692; }
}
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_690))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv693 = l_Y_690;
return rv693; }
}
}
l_Y_690 = r_LOOKUP_NEXT(l_Y_690);
}
RT_B_TICK();
} L_end691: ;
{ R12 * rv694 = NULL;
return rv694; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_CLASSES(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_695; memset(&l_Y_695, 0, sizeof l_Y_695);
l_Y_695 = r_LOOKUP(p_NAME);
rt_int l_N_696; memset(&l_N_696, 0, sizeof l_N_696);
l_N_696 = ((rt_int)0LL);
for (;;) {
if ((l_Y_695 == NULL)) goto L_end697;
{
if ((((*(R12 *)rt_nil_check(l_Y_695))).f_KIND == g_Y_ENUMLIT))
{
l_N_696 = rt_add(l_N_696, ((rt_int)1LL));
}
l_Y_695 = r_LOOKUP_NEXT(l_Y_695);
}
RT_B_TICK();
} L_end697: ;
{ rt_int rv698 = l_N_696;
return rv698; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE(R21 * p_TS) { RT_B_TICK(); 
{ R22 * rv699 = r_RESOLVE_NAMED(p_TS, r_NO_TEXT());
return rv699; }
rt_raise(RT_X_INIT);
}
static void r_ATTR_VALUE(R21 * p_E, R9 *p_C, R23 *p_M) { RT_B_TICK(); 
S_R9(&(*p_C), (r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, 0);
S_R23(&(*p_M), r_MANIFEST(p_E), 0);
if (((*p_M)).f_OK)
{
S_R9(&(*p_C), r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*p_M)).f_V)), 0);
}
}
static R22 * r_WITH_RANGE(R22 * p_T, R21 * p_R) { RT_B_TICK(); 
R22 * l_N_700; memset(&l_N_700, 0, sizeof l_N_700);
if ((p_R == NULL))
{
{ R22 * rv701 = p_T;
return rv701; }
}
if ((r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(p_R))).f_A) || r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(p_R))).f_B)))
{
l_N_700 = r_COPY_TYP(p_T);
S_R9(&((*(R22 *)rt_nil_check(l_N_700))).f_NAME, r_NO_TEXT(), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_700))).f_LO_C, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN))), 0);
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_700))).f_HI_C, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN))), 0);
}
{ R22 * rv702 = l_N_700;
return rv702; }
}
if ((!((((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_R))).f_LINE, rt_str("a range is only for fixed, float and enumerated types (3.12.2)", 62));
}
l_N_700 = r_COPY_TYP(p_T);
S_R9(&((*(R22 *)rt_nil_check(l_N_700))).f_NAME, r_NO_TEXT(), 0);
((*(R22 *)rt_nil_check(l_N_700))).f_RLEVEL = r_CUR_LEVEL();
{
R26 l_LO_703; memset(&l_LO_703, 0, sizeof l_LO_703);
R26 l_HI_704; memset(&l_HI_704, 0, sizeof l_HI_704);
S_R26(&l_LO_703, r_EXPR(((*(R21 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R26(&l_HI_704, r_EXPR(((*(R21 *)rt_nil_check(p_R))).f_B, p_T), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_700))).f_LO_C, (l_LO_703).f_C, 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_700))).f_HI_C, (l_HI_704).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_700))).f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_A), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_700))).f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_B), 0);
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_700))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_700))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_B, p_T), 0);
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_703).f_T), r_REAL_TYPE(p_T))) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_704).f_T), r_REAL_TYPE(p_T)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_R))).f_LINE, rt_str("the bounds of a range must be of the class of the type (3.2.1, 3.3.1, 3.4.1)", 76));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_700))).f_LO_C, r_RESCALE(l_LO_703, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R21 *)rt_nil_check(p_R))).f_LINE), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_700))).f_HI_C, r_RESCALE(l_HI_704, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R21 *)rt_nil_check(p_R))).f_LINE), 0);
if ((((!(((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL))) || (!(((*(R22 *)rt_nil_check((l_LO_703).f_T))).f_SCALE == ((rt_int)0LL)))) || (!(((*(R22 *)rt_nil_check((l_HI_704).f_T))).f_SCALE == ((rt_int)0LL)))))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_700))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_700))).f_MHI, r_NO_MVAL(), 0);
}
}
}
if (((((*(R21 *)rt_nil_check(p_R))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(p_R))).f_IV == ((rt_int)3LL))))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_700))).f_LO_C, r_FMT1(rt_str("nextafter(@, INFINITY)", 22), ((*(R22 *)rt_nil_check(l_N_700))).f_LO_C), 0);
}
else
{
S_R9(&((*(R22 *)rt_nil_check(l_N_700))).f_LO_C, r_FMT1(rt_str("((@) + 1)", 9), ((*(R22 *)rt_nil_check(l_N_700))).f_LO_C), 0);
(((*(R22 *)rt_nil_check(l_N_700))).f_MLO).f_V = rt_add((((*(R22 *)rt_nil_check(l_N_700))).f_MLO).f_V, ((rt_int)1LL));
}
}
if ((((*(R21 *)rt_nil_check(p_R))).f_IV >= ((rt_int)2LL)))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_700))).f_HI_C, r_FMT1(rt_str("nextafter(@, -INFINITY)", 23), ((*(R22 *)rt_nil_check(l_N_700))).f_HI_C), 0);
}
else
{
S_R9(&((*(R22 *)rt_nil_check(l_N_700))).f_HI_C, r_FMT1(rt_str("((@) - 1)", 9), ((*(R22 *)rt_nil_check(l_N_700))).f_HI_C), 0);
(((*(R22 *)rt_nil_check(l_N_700))).f_MHI).f_V = rt_sub((((*(R22 *)rt_nil_check(l_N_700))).f_MHI).f_V, ((rt_int)1LL));
}
}
{ R22 * rv705 = l_N_700;
return rv705; }
rt_raise(RT_X_INIT);
}
static R23 r_ENUM_MANIFEST(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{
R12 * l_Y_706; memset(&l_Y_706, 0, sizeof l_Y_706);
l_Y_706 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, p_T);
if ((!(l_Y_706 == NULL)))
{
{ R23 rv707 = r_SOME(((*(R12 *)rt_nil_check(l_Y_706))).f_MV);
return rv707; }
}
}
}
{ R23 rv708 = r_MANIFEST(p_E);
return rv708; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_LEVEL(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_CS == NULL))
{
{ rt_int rv709 = ((rt_int)0LL);
return rv709; }
}
{ rt_int rv710 = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
return rv710; }
rt_raise(RT_X_INIT);
}
static R22 * r_ARG_TYPE(R21 * p_N) { RT_B_TICK(); 
{ R22 * rv711 = r_RESOLVE(r_EXPR_TO_TS(p_N));
return rv711; }
rt_raise(RT_X_INIT);
}
static R21 * r_NTH_ARG(R21 * p_TS, rt_int p_K) { RT_B_TICK(); 
R21 * l_A_712; memset(&l_A_712, 0, sizeof l_A_712);
l_A_712 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
{ rt_int it714_lo = ((rt_int)1LL), it714_hi = p_K;
for (rt_int it714 = it714_lo; it714 <= it714_hi; it714++) {
{
if ((l_A_712 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
l_A_712 = ((*(R21 *)rt_nil_check(l_A_712))).f_NEXT;
}
RT_B_TICK();
if (it714 == it714_hi) break;
} } L_end713: ;
if ((l_A_712 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R21 * rv715 = l_A_712;
return rv715; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_NAMED(R21 * p_TS, R9 p_CNAME) { RT_B_TICK(); 
R22 * l_T_716; memset(&l_T_716, 0, sizeof l_T_716);
rt_int l_K_717; memset(&l_K_717, 0, sizeof l_K_717);
l_K_717 = ((*(R21 *)rt_nil_check(p_TS))).f_KIND;
if ((l_K_717 == g_TS_ARRAY))
{
{ R22 * rv718 = r_RESOLVE_ARRAY(p_TS);
return rv718; }
}
else if ((l_K_717 == g_TS_RECORD))
{
{ R22 * rv719 = r_RESOLVE_RECORD(p_TS, p_CNAME, NULL, NULL);
return rv719; }
}
else if ((l_K_717 == g_TS_ENUM))
{
l_T_716 = r_ENUM_CLASS(((*(R21 *)rt_nil_check(p_TS))).f_A, (((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)), ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
if (((((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("an UNORDERED type has no range", 30));
}
l_T_716 = r_WITH_RANGE(l_T_716, ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_716 = r_APPLY_REP(l_T_716, ((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv720 = l_T_716;
return rv720; }
}
else if ((l_K_717 == g_TS_GEN))
{
{ R22 * rv721 = r_GEN_TYPE(p_TS);
return rv721; }
}
else if ((!(l_K_717 == g_TS_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a type specification expected", 29));
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_FL == ((rt_int)3LL)))
{
l_T_716 = r_WITH_RANGE(r_TYPE_ATTR_TYPE(((*(R21 *)rt_nil_check(p_TS))).f_E), ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_716 = r_APPLY_REP(l_T_716, ((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv722 = l_T_716;
return rv722; }
}
l_T_716 = r_RESOLVE_PREDEFINED(p_TS);
if ((l_T_716 == NULL))
{
l_T_716 = r_RESOLVE_USER(p_TS);
}
l_T_716 = r_WITH_RANGE(l_T_716, ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_716 = r_APPLY_REP(l_T_716, ((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv723 = l_T_716;
return rv723; }
rt_raise(RT_X_INIT);
}
static R22 * r_APPLY_REP(R22 * p_T0, R21 * p_R0, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_724; memset(&l_T_724, 0, sizeof l_T_724);
l_T_724 = r_COPY_TYP(p_T0);
if ((((*(R22 *)rt_nil_check(p_T0))).f_KIND == g_T_ABS))
{
r_FAIL(p_LINE, rt_str("a REP clause is only for a member of a predefined type class (3.12.2)", 69));
}
((*(R22 *)rt_nil_check(l_T_724))).f_REPS = r_EXPAND_REP(p_R0, p_T0, p_LINE);
r_CHECK_REP_CLASS(l_T_724, p_LINE);
if ((((*(R22 *)rt_nil_check(l_T_724))).f_KIND == g_T_ENUM))
{
r_CHECK_ENUM_REP(l_T_724, p_LINE);
}
else if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_724))).f_REPS))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("ENUM_VAL_REP is only for UNORDERED types (3.4.3)", 48));
}
{ R22 * rv725 = l_T_724;
return rv725; }
rt_raise(RT_X_INIT);
}
static R21 * r_EXPAND_REP(R21 * p_R, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_726; memset(&l_Y_726, 0, sizeof l_Y_726);
if ((p_R == NULL))
{
{ R21 * rv727 = p_R;
return rv727; }
}
if ((((*(R21 *)rt_nil_check(p_R))).f_KIND == g_TS_GEN))
{
{ R21 * rv728 = p_R;
return rv728; }
}
l_Y_726 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_R))).f_NAME);
if ((l_Y_726 == NULL))
{
{ R21 * rv729 = p_R;
return rv729; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_726))).f_KIND == g_Y_REPTYPE)))
{
{ R21 * rv730 = p_R;
return rv730; }
}
if (((*(R12 *)rt_nil_check(l_Y_726))).f_BUSY)
{
r_FAILT(p_LINE, rt_str("a circular reptype declaration (3.12.3): ", 41), ((*(R21 *)rt_nil_check(p_R))).f_NAME);
}
{
R21 * l_D_731; memset(&l_D_731, 0, sizeof l_D_731);
l_D_731 = ((*(R12 *)rt_nil_check(l_Y_726))).f_DECL;
R21 * l_X_732; memset(&l_X_732, 0, sizeof l_X_732);
l_X_732 = r_NEW_NODE(g_N_REP, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
R21 * l_HEAD_733; memset(&l_HEAD_733, 0, sizeof l_HEAD_733);
l_HEAD_733 = NULL;
R21 * l_TAIL_734; memset(&l_TAIL_734, 0, sizeof l_TAIL_734);
l_TAIL_734 = NULL;
((*(R12 *)rt_nil_check(l_Y_726))).f_BUSY = 1;
r_OPEN_SCOPE();
if (((!(((*(R21 *)rt_nil_check(l_D_731))).f_A == NULL)) || (!(((*(R21 *)rt_nil_check(p_R))).f_A == NULL))))
{
r_BIND_FORMALS(((*(R21 *)rt_nil_check(l_D_731))).f_A, p_R);
}
if ((!(((*(R21 *)rt_nil_check(l_D_731))).f_C == NULL)))
{
{
R12 * l_B_735; memset(&l_B_735, 0, sizeof l_B_735);
l_B_735 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_731))).f_C))).f_NAME);
((*(R12 *)rt_nil_check(l_B_735))).f_T = p_T;
r_DEFINE(l_B_735, p_LINE);
}
}
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
S_R9(&((*(R21 *)rt_nil_check(l_X_732))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_731))).f_B))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_X_732))).f_B = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_731))).f_B))).f_B;
((*(R21 *)rt_nil_check(l_X_732))).f_C = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_731))).f_B))).f_C;
if (r_TEQS(((*(R21 *)rt_nil_check(l_X_732))).f_NAME, rt_str("RECORD_REP", 10)))
{
l_HEAD_733 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_731))).f_B))).f_A;
}
else
{
{
R21 * l_A_736; memset(&l_A_736, 0, sizeof l_A_736);
l_A_736 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_731))).f_B))).f_A;
for (;;) {
if ((l_A_736 == NULL)) goto L_end737;
{
r_ADD_LIST(r_REP_ARG_VALUE(l_A_736), &l_HEAD_733, &l_TAIL_734);
l_A_736 = ((*(R21 *)rt_nil_check(l_A_736))).f_NEXT;
}
RT_B_TICK();
} L_end737: ;
}
}
((*(R21 *)rt_nil_check(l_X_732))).f_A = l_HEAD_733;
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
r_CLOSE_SCOPE();
l_X_732 = r_EXPAND_REP(l_X_732, p_T, p_LINE);
((*(R12 *)rt_nil_check(l_Y_726))).f_BUSY = 0;
{ R21 * rv738 = l_X_732;
return rv738; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_REP_ARG_VALUE(R21 * p_A) { RT_B_TICK(); 
R21 * l_N_739; memset(&l_N_739, 0, sizeof l_N_739);
R23 l_M_740; memset(&l_M_740, 0, sizeof l_M_740);
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_741; memset(&l_Y_741, 0, sizeof l_Y_741);
l_Y_741 = r_LOOKUP(((*(R21 *)rt_nil_check(p_A))).f_NAME);
if (((l_Y_741 == NULL) || (((!(l_Y_741 == NULL)) && (((*(R12 *)rt_nil_check(l_Y_741))).f_KIND == g_Y_ENUMLIT)))))
{
l_N_739 = r_NEW_NODE(((*(R21 *)rt_nil_check(p_A))).f_KIND, ((*(R21 *)rt_nil_check(p_A))).f_LINE);
S_R9(&((*(R21 *)rt_nil_check(l_N_739))).f_NAME, ((*(R21 *)rt_nil_check(p_A))).f_NAME, 0);
{ R21 * rv742 = l_N_739;
return rv742; }
}
if (((((*(R12 *)rt_nil_check(l_Y_741))).f_KIND == g_Y_CONST) && (!(((*(R12 *)rt_nil_check(l_Y_741))).f_T == NULL))))
{
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_741))).f_T)))).f_KIND == g_T_ENUM) && ((*(R12 *)rt_nil_check(l_Y_741))).f_HASMV))
{
{
R21 * l_L_743; memset(&l_L_743, 0, sizeof l_L_743);
l_L_743 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_741))).f_T)))).f_BASE))).f_LITS;
rt_int l_I_744; memset(&l_I_744, 0, sizeof l_I_744);
l_I_744 = ((rt_int)0LL);
for (;;) {
if (((l_L_743 == NULL) || (l_I_744 == ((*(R12 *)rt_nil_check(l_Y_741))).f_MV))) goto L_end745;
{
l_I_744 = rt_add(l_I_744, ((rt_int)1LL));
l_L_743 = ((*(R21 *)rt_nil_check(l_L_743))).f_NEXT;
}
RT_B_TICK();
} L_end745: ;
if ((!(l_L_743 == NULL)))
{
l_N_739 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_A))).f_LINE);
S_R9(&((*(R21 *)rt_nil_check(l_N_739))).f_NAME, ((*(R21 *)rt_nil_check(l_L_743))).f_NAME, 0);
{ R21 * rv746 = l_N_739;
return rv746; }
}
}
}
}
}
}
S_R23(&l_M_740, r_MANIFEST(p_A), 0);
if ((!(l_M_740).f_OK))
{
{
R14 l_SAVED_CODE_747; memset(&l_SAVED_CODE_747, 0, sizeof l_SAVED_CODE_747);
S_R14(&l_SAVED_CODE_747, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_748; memset(&l_V_748, 0, sizeof l_V_748);
S_R26(&l_V_748, r_EXPR(p_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_747, 0);
}
{ R21 * rv749 = p_A;
return rv749; }
}
l_N_739 = r_NEW_NODE(g_N_INT, ((*(R21 *)rt_nil_check(p_A))).f_LINE);
if (((l_M_740).f_V < ((rt_int)0LL)))
{
((*(R21 *)rt_nil_check(l_N_739))).f_IV = rt_neg((l_M_740).f_V);
S_R9(&((*(R21 *)rt_nil_check(l_N_739))).f_NAME, r_NUM(rt_neg((l_M_740).f_V)), 0);
{
R21 * l_U_750; memset(&l_U_750, 0, sizeof l_U_750);
l_U_750 = r_NEW_NODE(g_N_UNOP, ((*(R21 *)rt_nil_check(p_A))).f_LINE);
S_R9(&((*(R21 *)rt_nil_check(l_U_750))).f_NAME, r_MK(rt_str("-", 1)), 0);
((*(R21 *)rt_nil_check(l_U_750))).f_A = l_N_739;
{ R21 * rv751 = l_U_750;
return rv751; }
}
}
((*(R21 *)rt_nil_check(l_N_739))).f_IV = (l_M_740).f_V;
S_R9(&((*(R21 *)rt_nil_check(l_N_739))).f_NAME, r_NUM((l_M_740).f_V), 0);
{ R21 * rv752 = l_N_739;
return rv752; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_REP_CLASS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_753; memset(&l_R_753, 0, sizeof l_R_753);
l_R_753 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
rt_int l_K_754; memset(&l_K_754, 0, sizeof l_K_754);
l_K_754 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
rt_int l_OK_755; memset(&l_OK_755, 0, sizeof l_OK_755);
l_OK_755 = 0;
if ((((*(R21 *)rt_nil_check(l_R_753))).f_KIND == g_TS_GEN))
{
return;
}
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(l_R_753))).f_NAME) == NULL)))
{
return;
}
if ((!(r_LOOKUP(((*(R21 *)rt_nil_check(l_R_753))).f_NAME) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_LOOKUP(((*(R21 *)rt_nil_check(l_R_753))).f_NAME)))).f_KIND == g_Y_GEN))
{
return;
}
}
{
R9 l_N_756; memset(&l_N_756, 0, sizeof l_N_756);
S_R9(&l_N_756, ((*(R21 *)rt_nil_check(l_R_753))).f_NAME, 0);
if ((l_K_754 == g_T_INT))
{
l_OK_755 = (r_TEQS(l_N_756, rt_str("FIXED_STD", 9)) || r_TEQS(l_N_756, rt_str("FIXED_REP", 9)));
}
else if ((l_K_754 == g_T_FLOAT))
{
l_OK_755 = r_TEQS(l_N_756, rt_str("FLOAT_STD", 9));
}
else if ((l_K_754 == g_T_BOOL))
{
l_OK_755 = r_TEQS(l_N_756, rt_str("BOOLEAN_STD", 11));
}
else if ((l_K_754 == g_T_ENUM))
{
l_OK_755 = ((r_TEQS(l_N_756, rt_str("ENUM_STD", 8)) || r_TEQS(l_N_756, rt_str("ENUM_REP", 8))) || r_TEQS(l_N_756, rt_str("ENUM_VAL_REP", 12)));
}
else if ((l_K_754 == g_T_STR))
{
l_OK_755 = (r_TEQS(l_N_756, rt_str("CHAR_STR_STD", 12)) || r_TEQS(l_N_756, rt_str("CHAR_STR_REP", 12)));
}
else if ((l_K_754 == g_T_BITS))
{
l_OK_755 = r_TEQS(l_N_756, rt_str("BIT_STD", 7));
}
else if ((l_K_754 == g_T_ARR))
{
l_OK_755 = (r_TEQS(l_N_756, rt_str("ARRAY_STD", 9)) || r_TEQS(l_N_756, rt_str("ARRAY_REP", 9)));
}
else if ((l_K_754 == g_T_REC))
{
l_OK_755 = (r_TEQS(l_N_756, rt_str("RECORD_STD", 10)) || r_TEQS(l_N_756, rt_str("RECORD_REP", 10)));
}
else if ((l_K_754 == g_T_PTR))
{
l_OK_755 = r_TEQS(l_N_756, rt_str("PTR_STD", 7));
}
else if ((l_K_754 == g_T_SEM))
{
l_OK_755 = r_TEQS(l_N_756, rt_str("SEMAPHORE_STD", 13));
}
else if ((l_K_754 == g_T_TYPE))
{
l_OK_755 = 1;
}
if ((!l_OK_755))
{
r_FAILT(p_LINE, rt_str("the representation does not suit the type class (3.12.4): ", 58), l_N_756);
}
if (r_TEQS(l_N_756, rt_str("FIXED_REP", 9)))
{
r_CHECK_FIXED_REP(p_T, p_LINE);
}
}
}
static rt_int r_POW2(rt_int p_N) { RT_B_TICK(); 
rt_int l_P_757; memset(&l_P_757, 0, sizeof l_P_757);
l_P_757 = ((rt_int)1LL);
{ rt_int it759_lo = ((rt_int)1LL), it759_hi = p_N;
for (rt_int it759 = it759_lo; it759 <= it759_hi; it759++) {
{
l_P_757 = rt_mul(l_P_757, ((rt_int)2LL));
}
RT_B_TICK();
if (it759 == it759_hi) break;
} } L_end758: ;
{ rt_int rv760 = l_P_757;
return rv760; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_761; memset(&l_R_761, 0, sizeof l_R_761);
l_R_761 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
rt_int l_UNSIGNED_762; memset(&l_UNSIGNED_762, 0, sizeof l_UNSIGNED_762);
l_UNSIGNED_762 = 0;
if ((((*(R21 *)rt_nil_check(l_R_761))).f_A == NULL))
{
r_FAIL(p_LINE, rt_str("FIXED_REP takes a size and a signing (3.2.3 [3-55])", 51));
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_761))).f_A))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_761))).f_A))).f_KIND == g_N_DONTCARE)))
{
return;
}
{
R23 l_N_763; memset(&l_N_763, 0, sizeof l_N_763);
S_R23(&l_N_763, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_761))).f_A), 0);
if ((!(l_N_763).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of FIXED_REP is a manifest integer (3.2.3 [3-56])", 58));
}
if ((((l_N_763).f_V < ((rt_int)0LL)) || ((l_N_763).f_V > ((*(R7 *)rt_nil_check(g_W))).f_WORD)))
{
r_FAIL(p_LINE, rt_str("the size of FIXED_REP is in [0:P], P the default size (3.2.3)", 61));
}
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_761))).f_A))).f_NEXT == NULL)))
{
{
R21 * l_S_764; memset(&l_S_764, 0, sizeof l_S_764);
l_S_764 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_761))).f_A))).f_NEXT;
if (((((*(R21 *)rt_nil_check(l_S_764))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_S_764))).f_KIND == g_N_DONTCARE)))
{
return;
}
if ((!(((((((*(R21 *)rt_nil_check(l_S_764))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_S_764))).f_KIND == g_N_ENUMLIT))) && ((r_TEQS(((*(R21 *)rt_nil_check(l_S_764))).f_NAME, rt_str("SIGNED", 6)) || r_TEQS(((*(R21 *)rt_nil_check(l_S_764))).f_NAME, rt_str("UNSIGNED", 8))))))))
{
r_FAIL(p_LINE, rt_str("the signing of FIXED_REP is a manifest value of SIGNING (3.2.3 [3-57])", 70));
}
l_UNSIGNED_762 = r_TEQS(((*(R21 *)rt_nil_check(l_S_764))).f_NAME, rt_str("UNSIGNED", 8));
if ((!(((*(R21 *)rt_nil_check(l_S_764))).f_NEXT == NULL)))
{
r_FAIL(p_LINE, rt_str("FIXED_REP takes a size and a signing (3.2.3 [3-55])", 51));
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_REPCONV)
{
return;
}
if (l_UNSIGNED_762)
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
if (((((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK) && ((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN > ((rt_int)0LL))) && ((l_N_763).f_V < ((rt_int)63LL))))
{
{
rt_int l_LO_765; memset(&l_LO_765, 0, sizeof l_LO_765);
l_LO_765 = ((rt_int)0LL);
rt_int l_HI_766; memset(&l_HI_766, 0, sizeof l_HI_766);
l_HI_766 = ((rt_int)0LL);
if (l_UNSIGNED_762)
{
l_HI_766 = rt_sub(r_POW2((l_N_763).f_V), ((rt_int)1LL));
}
else if (((l_N_763).f_V > ((rt_int)0LL)))
{
l_LO_765 = rt_neg(r_POW2(rt_sub((l_N_763).f_V, ((rt_int)1LL))));
l_HI_766 = rt_sub(r_POW2(rt_sub((l_N_763).f_V, ((rt_int)1LL))), ((rt_int)1LL));
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_V < l_LO_765) || ((((*(R22 *)rt_nil_check(p_T))).f_MHI).f_V > l_HI_766)))
{
r_FAIL(p_LINE, rt_str("the range of the type exceeds what the size of FIXED_REP represents (3.2.3)", 75));
}
}
}
}
}
static R22 * r_TYPE_ATTR_TYPE(R21 * p_E) { RT_B_TICK(); 
R22 * l_T_767; memset(&l_T_767, 0, sizeof l_T_767);
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type-valued attribute expected", 32));
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_IS_TYPE_ATTR(((*(R21 *)rt_nil_check(p_E))).f_A)))
{
l_T_767 = r_TYPE_ATTR_TYPE(((*(R21 *)rt_nil_check(p_E))).f_A);
}
else
{
{
R14 l_SAVED_CODE_768; memset(&l_SAVED_CODE_768, 0, sizeof l_SAVED_CODE_768);
S_R14(&l_SAVED_CODE_768, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
l_T_767 = (r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(p_E))).f_A)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_768, 0);
}
}
{
R22 * l_R_769; memset(&l_R_769, 0, sizeof l_R_769);
l_R_769 = r_REAL_TYPE(l_T_767);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)))
{
if ((((*(R22 *)rt_nil_check(l_R_769))).f_KIND == g_T_ARR))
{
{ R22 * rv770 = ((*(R22 *)rt_nil_check(l_R_769))).f_ELEM;
return rv770; }
}
else if ((((*(R22 *)rt_nil_check(l_R_769))).f_KIND == g_T_PTR))
{
{ R22 * rv771 = r_TARGET(l_R_769);
return rv771; }
}
}
else if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7)) && (((*(R22 *)rt_nil_check(l_R_769))).f_KIND == g_T_STR)))
{
{ R22 * rv772 = r_CHARSET_OF(l_R_769);
return rv772; }
}
if ((((*(R22 *)rt_nil_check(l_R_769))).f_KIND == g_T_REC))
{
{
R12 * l_C_773; memset(&l_C_773, 0, sizeof l_C_773);
l_C_773 = r_RECORD_CLASS_OF(l_R_769);
if ((!(l_C_773 == NULL)))
{
{
R20 * l_B_774; memset(&l_B_774, 0, sizeof l_B_774);
l_B_774 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_773))).f_BINDINGS, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_774 == NULL)))
{
if ((!(((*(R20 *)rt_nil_check(l_B_774))).f_T == NULL)))
{
{ R22 * rv775 = ((*(R20 *)rt_nil_check(l_B_774))).f_T;
return rv775; }
}
}
}
}
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a type-valued attribute: ", 29), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_ATTR(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD)))
{
{ rt_int rv776 = 0;
return rv776; }
}
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7))))
{
{ rt_int rv777 = 1;
return rv777; }
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_778; memset(&l_Y_778, 0, sizeof l_Y_778);
l_Y_778 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME);
if ((!(l_Y_778 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_778))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_778))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_778))).f_T == NULL))))
{
{
R22 * l_R_779; memset(&l_R_779, 0, sizeof l_R_779);
l_R_779 = r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_778))).f_T);
if ((((*(R22 *)rt_nil_check(l_R_779))).f_KIND == g_T_REC))
{
{
R12 * l_C_780; memset(&l_C_780, 0, sizeof l_C_780);
l_C_780 = r_RECORD_CLASS_OF(l_R_779);
if ((!(l_C_780 == NULL)))
{
if ((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_780))).f_BINDINGS, ((*(R21 *)rt_nil_check(p_E))).f_NAME) == NULL)))
{
{ rt_int rv781 = 1;
return rv781; }
}
}
}
}
}
}
}
}
}
{ rt_int rv782 = 0;
return rv782; }
rt_raise(RT_X_INIT);
}
static R22 * r_GEN_TYPE(R21 * p_TS) { RT_B_TICK(); 
R20 * l_B_783; memset(&l_B_783, 0, sizeof l_B_783);
l_B_783 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_783 == NULL)) goto L_end784;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_783))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_783))).f_T == NULL))))
{
{ R22 * rv785 = ((*(R20 *)rt_nil_check(l_B_783))).f_T;
return rv785; }
}
l_B_783 = ((*(R20 *)rt_nil_check(l_B_783))).f_NEXT;
}
RT_B_TICK();
} L_end784: ;
{
R12 * l_Y_786; memset(&l_Y_786, 0, sizeof l_Y_786);
l_Y_786 = r_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_786 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_786))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_786))).f_T == NULL))))
{
{ R22 * rv787 = ((*(R12 *)rt_nil_check(l_Y_786))).f_T;
return rv787; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a derived generic type outside a formal parameter list: \?", 57), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_PREDEFINED(R21 * p_TS) { RT_B_TICK(); 
R9 l_NAME_788; memset(&l_NAME_788, 0, sizeof l_NAME_788);
S_R9(&l_NAME_788, ((*(R21 *)rt_nil_check(p_TS))).f_NAME, 0);
R22 * l_T_789; memset(&l_T_789, 0, sizeof l_T_789);
if (r_TEQS(l_NAME_788, rt_str("FIXED", 5)))
{
{
R23 l_S_790; memset(&l_S_790, 0, sizeof l_S_790);
S_R23(&l_S_790, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_791; memset(&l_R_791, 0, sizeof l_R_791);
S_R23(&l_R_791, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
R21 * l_P_792; memset(&l_P_792, 0, sizeof l_P_792);
l_P_792 = r_NTH_ARG(p_TS, ((rt_int)2LL));
r_TYPE_ARG_COUNT(p_TS, ((rt_int)3LL));
if ((!((l_R_791).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("only radix 2 is predefined (3.2.1)", 34));
}
r_CHECK_PRECISION_ARG(l_P_792, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
if (((l_S_790).f_V == ((rt_int)0LL)))
{
{ R22 * rv793 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv793; }
}
l_T_789 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_789))).f_SCALE = (l_S_790).f_V;
{ R22 * rv794 = l_T_789;
return rv794; }
}
}
else if (r_TEQS(l_NAME_788, rt_str("FLOAT", 5)))
{
{
R23 l_P_795; memset(&l_P_795, 0, sizeof l_P_795);
S_R23(&l_P_795, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
l_T_789 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_789))).f_SCALE = (l_P_795).f_V;
{ R22 * rv796 = l_T_789;
return rv796; }
}
}
else if (r_TEQS(l_NAME_788, rt_str("BIT", 3)))
{
l_T_789 = r_NEW_TYP(g_T_BITS);
r_STRING_LENGTH(l_T_789, r_NTH_ARG(p_TS, ((rt_int)0LL)));
{ R22 * rv797 = l_T_789;
return rv797; }
}
else if ((r_TEQS(l_NAME_788, rt_str("CHAR_STR", 8)) || r_TEQS(l_NAME_788, rt_str("ASCII_STR", 9))))
{
l_T_789 = r_NEW_TYP(g_T_STR);
r_STRING_LENGTH(l_T_789, r_NTH_ARG(p_TS, ((rt_int)0LL)));
((*(R22 *)rt_nil_check(l_T_789))).f_BASE = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
if (r_TEQS(l_NAME_788, rt_str("CHAR_STR", 8)))
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)2LL));
{
R21 * l_CS_798; memset(&l_CS_798, 0, sizeof l_CS_798);
l_CS_798 = r_NTH_ARG(p_TS, ((rt_int)1LL));
R22 * l_C_799; memset(&l_C_799, 0, sizeof l_C_799);
if (((((*(R21 *)rt_nil_check(l_CS_798))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_CS_798))).f_KIND == g_N_DONTCARE)))
{
((*(R22 *)rt_nil_check(l_T_789))).f_BASE = NULL;
{ R22 * rv800 = l_T_789;
return rv800; }
}
if (((((*(R21 *)rt_nil_check(l_CS_798))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(l_CS_798))).f_NAME, rt_str("CHARSET", 7))))
{
{
R14 l_SAVED_CODE_801; memset(&l_SAVED_CODE_801, 0, sizeof l_SAVED_CODE_801);
S_R14(&l_SAVED_CODE_801, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_802; memset(&l_V_802, 0, sizeof l_V_802);
S_R26(&l_V_802, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(l_CS_798))).f_A), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_801, 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_802).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("CHARSET is an attribute of character strings (3.7.1)", 52));
}
((*(R22 *)rt_nil_check(l_T_789))).f_BASE = r_CHARSET_OF((l_V_802).f_T);
}
{ R22 * rv803 = l_T_789;
return rv803; }
}
l_C_799 = r_REAL_TYPE(r_ARG_TYPE(l_CS_798));
if ((!(((*(R22 *)rt_nil_check(l_C_799))).f_KIND == g_T_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset must be an enumerated type (3.7.1)", 44));
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_799))).f_BASE))).f_UNORDERED || (!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_799))).f_BASE))).f_LITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset is an ordered enumerated type with a literal \\'C' (3.7.1, 3.7.2)", 74));
}
((*(R22 *)rt_nil_check(l_T_789))).f_BASE = ((*(R22 *)rt_nil_check(l_C_799))).f_BASE;
}
}
else
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
}
{ R22 * rv804 = l_T_789;
return rv804; }
}
else if (r_TEQS(l_NAME_788, rt_str("PTR", 3)))
{
l_T_789 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_T_789))).f_TARGET_TS = r_NTH_ARG(p_TS, ((rt_int)0LL));
{ R22 * rv805 = l_T_789;
return rv805; }
}
else if (r_TEQS(l_NAME_788, rt_str("SEMAPHORE", 9)))
{
l_T_789 = r_NEW_TYP(g_T_SEM);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
{
R21 * l_U_806; memset(&l_U_806, 0, sizeof l_U_806);
l_U_806 = r_NTH_ARG(p_TS, ((rt_int)0LL));
R22 * l_UT_807; memset(&l_UT_807, 0, sizeof l_UT_807);
l_UT_807 = r_RESOLVE_USER_NAME(r_MK(rt_str("USAGE", 5)), ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
R23 l_M_808; memset(&l_M_808, 0, sizeof l_M_808);
S_R23(&l_M_808, r_NO_MVAL(), 0);
if (((((*(R21 *)rt_nil_check(l_U_806))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_U_806))).f_KIND == g_N_DONTCARE)))
{
S_R23(&l_M_808, r_SOME(((rt_int)0LL)), 0);
}
else if (((((((*(R21 *)rt_nil_check(l_U_806))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_U_806))).f_KIND == g_N_ENUMLIT))) && (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_U_806))).f_NAME, l_UT_807) == NULL))))
{
S_R23(&l_M_808, r_ENUM_MANIFEST(l_U_806, l_UT_807), 0);
}
else
{
{
R14 l_SAVED_CODE_809; memset(&l_SAVED_CODE_809, 0, sizeof l_SAVED_CODE_809);
S_R14(&l_SAVED_CODE_809, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_810; memset(&l_V_810, 0, sizeof l_V_810);
S_R26(&l_V_810, r_EXPR(l_U_806, l_UT_807), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_809, 0);
if (r_SAME_CLASS(r_REAL_TYPE((l_V_810).f_T), r_REAL_TYPE(l_UT_807)))
{
S_R23(&l_M_808, r_MANIFEST(l_U_806), 0);
}
}
}
if ((!(l_M_808).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the use mode is a manifest value of USAGE, SYNCH or REGION (3.11.1)", 67));
}
((*(R22 *)rt_nil_check(l_T_789))).f_SCALE = (l_M_808).f_V;
}
{ R22 * rv811 = l_T_789;
return rv811; }
}
{ R22 * rv812 = NULL;
return rv812; }
rt_raise(RT_X_INIT);
}
static void r_TYPE_ARG_COUNT(R21 * p_TS, rt_int p_N) { RT_B_TICK(); 
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == p_N)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the wrong number of arguments for the type ", 43), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
}
static R23 r_MANIFEST_INTEGER_ARG(R21 * p_A, rstr p_WHAT, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
R23 l_M_813; memset(&l_M_813, 0, sizeof l_M_813);
S_R23(&l_M_813, r_MANIFEST(p_A), 0);
if ((!(l_M_813).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" must be manifest (3.2.1, 3.3.1)", 32)));
}
if ((((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))) && (!r_BOUND_NAME(p_A))))
{
{
R14 l_SAVED_CODE_814; memset(&l_SAVED_CODE_814, 0, sizeof l_SAVED_CODE_814);
S_R14(&l_SAVED_CODE_814, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R22 * l_T_815; memset(&l_T_815, 0, sizeof l_T_815);
l_T_815 = (r_EXPR(p_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_814, 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_T_815)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_815))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is an integer (3.2.1, 3.3.1)", 29)));
}
}
}
if ((((l_M_813).f_V < p_LO) || ((l_M_813).f_V > p_HI)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is out of the range of the attribute (3.2.1, 3.3.1)", 52)));
}
{ R23 rv816 = l_M_813;
return rv816; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOUND_NAME(R21 * p_A) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv817 = 0;
return rv817; }
}
{ rt_int rv818 = (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(p_A))).f_NAME) == NULL));
return rv818; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_PRECISION_ARG(R21 * p_P, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_P))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(p_P))).f_KIND == g_N_DONTCARE)))
{
return;
}
if ((((((*(R21 *)rt_nil_check(p_P))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_P))).f_KIND == g_N_ENUMLIT))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(p_P))).f_NAME, rt_str("STD", 3)))
{
return;
}
{
R12 * l_Y_819; memset(&l_Y_819, 0, sizeof l_Y_819);
l_Y_819 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
if ((!(l_Y_819 == NULL)))
{
if ((((((*(R12 *)rt_nil_check(l_Y_819))).f_KIND == g_Y_GEN) || (((*(R12 *)rt_nil_check(l_Y_819))).f_KIND == g_Y_CONST)) || (((((*(R12 *)rt_nil_check(l_Y_819))).f_KIND == g_Y_TYPE) && (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(p_P))).f_NAME) == NULL))))))
{
return;
}
}
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(p_P))).f_NAME) == NULL)))
{
return;
}
}
if ((!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_P))).f_NAME, NULL) == NULL)))
{
r_FAIL(p_LINE, rt_str("only STD precision is predefined (3.2.1)", 40));
}
}
r_FAIL(p_LINE, rt_str("the precision of a fixed point type is a value of FIXED_PRECISIONS (3.2.1)", 74));
}
static void r_CHECK_ENUM_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_820; memset(&l_R_820, 0, sizeof l_R_820);
l_R_820 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
R9 l_NAME_821; memset(&l_NAME_821, 0, sizeof l_NAME_821);
S_R9(&l_NAME_821, ((*(R21 *)rt_nil_check(l_R_820))).f_NAME, 0);
if ((((*(R21 *)rt_nil_check(l_R_820))).f_KIND == g_TS_GEN))
{
return;
}
if ((r_TEQS(l_NAME_821, rt_str("ENUM_STD", 8)) || (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, l_NAME_821) == NULL))))
{
return;
}
if ((!((r_TEQS(l_NAME_821, rt_str("ENUM_REP", 8)) || r_TEQS(l_NAME_821, rt_str("ENUM_VAL_REP", 12))))))
{
if ((!(r_ORIG_LOOKUP(l_NAME_821) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(l_NAME_821)))).f_KIND == g_Y_REPTYPE))
{
return;
}
}
r_FAILT(p_LINE, rt_str("not a representation of an enumerated type (3.4.3): ", 52), l_NAME_821);
}
if ((((*(R21 *)rt_nil_check(l_R_820))).f_A == NULL))
{
r_FAILT(p_LINE, rt_str("the size of the representation is missing: ", 43), l_NAME_821);
}
{
R23 l_N_822; memset(&l_N_822, 0, sizeof l_N_822);
S_R23(&l_N_822, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_820))).f_A), 0);
rt_int l_NL_823; memset(&l_NL_823, 0, sizeof l_NL_823);
l_NL_823 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS;
if ((!(l_N_822).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is manifest (3.4.3)", 60));
}
if ((((l_N_822).f_V > ((rt_int)64LL)) || ((l_N_822).f_V < ((rt_int)0LL))))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is in [0:(FIXED.SIZE).MAX] (3.4.3)", 75));
}
if (r_TEQS(l_NAME_821, rt_str("ENUM_REP", 8)))
{
if ((!(((*(R21 *)rt_nil_check(l_R_820))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("VALUES belong to ENUM_VAL_REP (3.4.3)", 37));
}
if (((l_N_822).f_V < r_BITS_FOR(l_NL_823)))
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
R21 * l_L_824; memset(&l_L_824, 0, sizeof l_L_824);
l_L_824 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
for (;;) {
if ((l_L_824 == NULL)) goto L_end825;
{
{
R21 * l_V_826; memset(&l_V_826, 0, sizeof l_V_826);
l_V_826 = ((*(R21 *)rt_nil_check(l_R_820))).f_B;
rt_int l_FOUND_827; memset(&l_FOUND_827, 0, sizeof l_FOUND_827);
l_FOUND_827 = ((rt_int)0LL);
for (;;) {
if ((l_V_826 == NULL)) goto L_end828;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_826))).f_NAME, ((*(R21 *)rt_nil_check(l_L_824))).f_NAME))
{
l_FOUND_827 = rt_add(l_FOUND_827, ((rt_int)1LL));
}
l_V_826 = ((*(R21 *)rt_nil_check(l_V_826))).f_NEXT;
}
RT_B_TICK();
} L_end828: ;
if ((!(l_FOUND_827 == ((rt_int)1LL))))
{
r_FAILT(p_LINE, rt_str("VALUES must give every literal once (3.4.3): ", 45), ((*(R21 *)rt_nil_check(l_L_824))).f_NAME);
}
}
l_L_824 = ((*(R21 *)rt_nil_check(l_L_824))).f_NEXT;
}
RT_B_TICK();
} L_end825: ;
}
{
R21 * l_V_829; memset(&l_V_829, 0, sizeof l_V_829);
l_V_829 = ((*(R21 *)rt_nil_check(l_R_820))).f_B;
for (;;) {
if ((l_V_829 == NULL)) goto L_end830;
{
if ((r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_V_829))).f_NAME, ((*(R22 *)rt_nil_check(p_T))).f_BASE) == NULL))
{
r_FAILT(p_LINE, rt_str("not a literal of the type: ", 27), ((*(R21 *)rt_nil_check(l_V_829))).f_NAME);
}
{
R14 l_SAVED_CODE_831; memset(&l_SAVED_CODE_831, 0, sizeof l_SAVED_CODE_831);
S_R14(&l_SAVED_CODE_831, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_B_832; memset(&l_B_832, 0, sizeof l_B_832);
S_R26(&l_B_832, r_EXPR(((*(R21 *)rt_nil_check(l_V_829))).f_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_831, 0);
if ((!(((*(R22 *)rt_nil_check((l_B_832).f_T))).f_KIND == g_T_BITS)))
{
r_FAIL(p_LINE, rt_str("a representation in VALUES is a bitstring (3.4.3)", 49));
}
if ((((*(R22 *)rt_nil_check((l_B_832).f_T))).f_MLEN).f_OK)
{
if ((!((((*(R22 *)rt_nil_check((l_B_832).f_T))).f_MLEN).f_V == (l_N_822).f_V)))
{
r_FAILT(p_LINE, rt_str("the representation must have SIZE bits (3.4.3): ", 48), ((*(R21 *)rt_nil_check(l_V_829))).f_NAME);
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_829))).f_A))).f_KIND == g_N_BITS))
{
{
R21 * l_U_833; memset(&l_U_833, 0, sizeof l_U_833);
l_U_833 = ((*(R21 *)rt_nil_check(l_V_829))).f_NEXT;
for (;;) {
if ((l_U_833 == NULL)) goto L_end834;
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_833))).f_A))).f_KIND == g_N_BITS))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_833))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_829))).f_A))).f_NAME))
{
r_FAILT(p_LINE, rt_str("two literals have the same representation (3.4.3): ", 51), ((*(R21 *)rt_nil_check(l_U_833))).f_NAME);
}
}
l_U_833 = ((*(R21 *)rt_nil_check(l_U_833))).f_NEXT;
}
RT_B_TICK();
} L_end834: ;
}
}
}
l_V_829 = ((*(R21 *)rt_nil_check(l_V_829))).f_NEXT;
}
RT_B_TICK();
} L_end830: ;
}
}
}
static void r_STRING_LENGTH(R22 * p_T, R21 * p_A) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
{
R20 * l_B_835; memset(&l_B_835, 0, sizeof l_B_835);
l_B_835 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_835 == NULL)) goto L_end836;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_835))).f_NAME, ((*(R21 *)rt_nil_check(p_A))).f_NAME) && ((((*(R20 *)rt_nil_check(l_B_835))).f_C).f_LEN > ((rt_int)0LL))))
{
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, ((*(R20 *)rt_nil_check(l_B_835))).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, ({ R23 rc837; memset(&rc837, 0, sizeof rc837);  rc837.f_OK = ((*(R20 *)rt_nil_check(l_B_835))).f_HASMV; rc837.f_V = ((*(R20 *)rt_nil_check(l_B_835))).f_MV; rc837; }), 0);
return;
}
l_B_835 = ((*(R20 *)rt_nil_check(l_B_835))).f_NEXT;
}
RT_B_TICK();
} L_end836: ;
}
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_GEN, ((*(R21 *)rt_nil_check(p_A))).f_NAME, 0);
return;
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return;
}
{
R9 l_C_838; memset(&l_C_838, 0, sizeof l_C_838);
R23 l_M_839; memset(&l_M_839, 0, sizeof l_M_839);
r_ATTR_VALUE(p_A, &l_C_838, &l_M_839);
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, l_C_838, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, l_M_839, 0);
((*(R22 *)rt_nil_check(p_T))).f_RLEVEL = r_CUR_LEVEL();
}
}
static R22 * r_RESOLVE_ARRAY(R21 * p_TS) { RT_B_TICK(); 
R22 * l_T_840; memset(&l_T_840, 0, sizeof l_T_840);
l_T_840 = r_NEW_TYP(g_T_ARR);
R21 * l_R_841; memset(&l_R_841, 0, sizeof l_R_841);
l_R_841 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_TAIL_842; memset(&l_TAIL_842, 0, sizeof l_TAIL_842);
l_TAIL_842 = NULL;
for (;;) {
if ((l_R_841 == NULL)) goto L_end843;
{
{
R25 * l_B_844; memset(&l_B_844, 0, sizeof l_B_844);
l_B_844 = ((R25 *)rt_b_new(sizeof (R25)));
R26 l_LO_845; memset(&l_LO_845, 0, sizeof l_LO_845);
R26 l_HI_846; memset(&l_HI_846, 0, sizeof l_HI_846);
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_841))).f_A))
{
S_R26(&l_LO_845, r_MKET(r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_841))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_841))).f_A))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_LO_845, r_EXPR(((*(R21 *)rt_nil_check(l_R_841))).f_A, NULL), 0);
}
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_841))).f_B))
{
S_R26(&l_HI_846, r_MKET(r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_841))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_841))).f_B))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_HI_846, r_EXPR(((*(R21 *)rt_nil_check(l_R_841))).f_B, (l_LO_845).f_T), 0);
}
S_R25(&(*(R25 *)rt_nil_check(l_B_844)), ({ R25 rc847; memset(&rc847, 0, sizeof rc847);  S_R9(&rc847.f_LO, (l_LO_845).f_C, 0); S_R9(&rc847.f_HI, (l_HI_846).f_C, 0); S_R23(&rc847.f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_841))).f_A), 0); S_R23(&rc847.f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_841))).f_B), 0); rc847.f_ANYARG = 0; rc847.f_NEXT = NULL; rc847; }), 0);
if (((!r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_841))).f_A)) && (!r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_841))).f_B))))
{
if ((!r_SAME_CLASS(r_REAL_TYPE((l_LO_845).f_T), r_REAL_TYPE((l_HI_846).f_T))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_841))).f_LINE, rt_str("the bounds of an array-bound are of one type class (3.8.1)", 58));
}
S_R9(&((*(R25 *)rt_nil_check(l_B_844))).f_LO, r_INDEX_OF(l_LO_845, ((*(R21 *)rt_nil_check(l_R_841))).f_LINE), 0);
S_R9(&((*(R25 *)rt_nil_check(l_B_844))).f_HI, r_INDEX_OF(l_HI_846, ((*(R21 *)rt_nil_check(l_R_841))).f_LINE), 0);
}
if (((((*(R22 *)rt_nil_check((l_LO_845).f_T))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check((l_LO_845).f_T))).f_KIND == g_T_ABS)))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_844))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_841))).f_A, (l_LO_845).f_T), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_844))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_841))).f_B, (l_LO_845).f_T), 0);
if ((!r_TEQ(((*(R25 *)rt_nil_check(l_B_844))).f_LO, (l_LO_845).f_C)))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_844))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_844))).f_MHI, r_NO_MVAL(), 0);
}
}
else if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_LO_845).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_841))).f_LINE, rt_str("array bounds are integer or enumerated (3.8.1)", 46));
}
if ((l_TAIL_842 == NULL))
{
((*(R22 *)rt_nil_check(l_T_840))).f_BOUNDS = l_B_844;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_842))).f_NEXT = l_B_844;
}
l_TAIL_842 = l_B_844;
((*(R22 *)rt_nil_check(l_T_840))).f_DIMS = rt_add(((*(R22 *)rt_nil_check(l_T_840))).f_DIMS, ((rt_int)1LL));
}
l_R_841 = ((*(R21 *)rt_nil_check(l_R_841))).f_NEXT;
}
RT_B_TICK();
} L_end843: ;
((*(R22 *)rt_nil_check(l_T_840))).f_RLEVEL = r_CUR_LEVEL();
((*(R22 *)rt_nil_check(l_T_840))).f_ELEM = r_RESOLVE(((*(R21 *)rt_nil_check(p_TS))).f_C);
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_840))).f_ELEM))).f_KIND == g_T_ARR))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("ARRAY ... OF ARRAY is forbidden (3.8.1)", 39));
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_D == NULL)))
{
((*(R22 *)rt_nil_check(l_T_840))).f_REPS = r_EXPAND_REP(((*(R21 *)rt_nil_check(p_TS))).f_D, l_T_840, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
r_CHECK_REP_CLASS(l_T_840, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
S_R9(&((*(R22 *)rt_nil_check(l_T_840))).f_CNAME, r_ARRAY_STRUCT(((*(R22 *)rt_nil_check(l_T_840))).f_ELEM, ((*(R22 *)rt_nil_check(l_T_840))).f_DIMS), 0);
{ R22 * rv848 = l_T_840;
return rv848; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER(R21 * p_TS) { RT_B_TICK(); 
R12 * l_Y_849; memset(&l_Y_849, 0, sizeof l_Y_849);
l_Y_849 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((((*(R21 *)rt_nil_check(p_TS))).f_A == NULL))
{
{
R20 * l_B_850; memset(&l_B_850, 0, sizeof l_B_850);
l_B_850 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_850 == NULL)) goto L_end851;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_850))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_850))).f_T == NULL))))
{
if ((!(r_CUR_GENERIC() == NULL)))
{
if ((r_FIND_BIND(((*(R12 *)rt_nil_check(r_CUR_GENERIC()))).f_BINDINGS, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) == l_B_850))
{
{ R22 * rv852 = r_MARK_GENP(((*(R20 *)rt_nil_check(l_B_850))).f_T, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
return rv852; }
}
}
{ R22 * rv853 = ((*(R20 *)rt_nil_check(l_B_850))).f_T;
return rv853; }
}
l_B_850 = ((*(R20 *)rt_nil_check(l_B_850))).f_NEXT;
}
RT_B_TICK();
} L_end851: ;
}
}
if ((l_Y_849 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_849))).f_KIND == g_Y_GEN))
{
{ R22 * rv854 = r_GEN_TYPE(p_TS);
return rv854; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_849))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((!r_SEG_VISIBLE(l_Y_849, ((*(R21 *)rt_nil_check(p_TS))).f_LINE)))
{
}
if ((((*(R12 *)rt_nil_check(l_Y_849))).f_DECL == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R22 * rv855 = ((*(R12 *)rt_nil_check(l_Y_849))).f_T;
return rv855; }
}
{
R21 * l_D_856; memset(&l_D_856, 0, sizeof l_D_856);
l_D_856 = ((*(R12 *)rt_nil_check(l_Y_849))).f_DECL;
R22 * l_T_857; memset(&l_T_857, 0, sizeof l_T_857);
if ((((*(R21 *)rt_nil_check(l_D_856))).f_A == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_849))).f_T == NULL))
{
if (((*(R12 *)rt_nil_check(l_Y_849))).f_BUSY)
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R12 *)rt_nil_check(l_Y_849))).f_BUSY = 1;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_856))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R12 *)rt_nil_check(l_Y_849))).f_T = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_856))).f_B, r_RECORD_NAME(l_Y_849), l_Y_849, NULL);
}
else
{
((*(R12 *)rt_nil_check(l_Y_849))).f_T = r_RESOLVE_IN_DECL(l_Y_849, NULL);
if ((((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_849))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_849))).f_T))).f_KIND == g_T_ENUM))))
{
((*(R12 *)rt_nil_check(l_Y_849))).f_T = r_COPY_TYP(((*(R12 *)rt_nil_check(l_Y_849))).f_T);
}
}
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_849))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_849))).f_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_849))).f_NAME, 0);
}
((*(R12 *)rt_nil_check(l_Y_849))).f_BUSY = 0;
}
l_T_857 = ((*(R12 *)rt_nil_check(l_Y_849))).f_T;
}
else
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_856))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_857 = r_RECORD_INSTANCE(l_Y_849, p_TS);
}
else
{
l_T_857 = r_RESOLVE_IN_DECL(l_Y_849, p_TS);
}
}
{ R22 * rv858 = r_ABSTRACT_VIEW(l_Y_849, l_T_857);
return rv858; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ABSTRACT_VIEW(R12 * p_Y, R22 * p_T) { RT_B_TICK(); 
R22 * l_A_859; memset(&l_A_859, 0, sizeof l_A_859);
if (((((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL) || (!((*(R12 *)rt_nil_check(p_Y))).f_EXPORTED)))
{
{ R22 * rv860 = p_T;
return rv860; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ R22 * rv861 = p_T;
return rv861; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
if (r_EXPORTS_ORDER(p_Y))
{
{ R22 * rv862 = p_T;
return rv862; }
}
l_A_859 = r_COPY_TYP(p_T);
((*(R22 *)rt_nil_check(l_A_859))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_859))).f_DECL = p_Y;
{ R22 * rv863 = l_A_859;
return rv863; }
}
l_A_859 = r_NEW_TYP(g_T_ABS);
((*(R22 *)rt_nil_check(l_A_859))).f_BASE = p_T;
S_R9(&((*(R22 *)rt_nil_check(l_A_859))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R22 *)rt_nil_check(l_A_859))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_859))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_A_859))).f_ARGS = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
{ R22 * rv864 = l_A_859;
return rv864; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTS_ORDER(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv865 = (((((r_EXPORTS_OP(p_Y, rt_str("LESS_THAN_", 10)) && r_EXPORTS_OP(p_Y, rt_str("LESS_EQUAL_", 11))) && r_EXPORTS_OP(p_Y, rt_str("GREATER_THAN_", 13))) && r_EXPORTS_OP(p_Y, rt_str("GREATER_EQUAL_", 14))) && r_EXPORTS_OP(p_Y, rt_str("SUCC", 4))) && r_EXPORTS_OP(p_Y, rt_str("PRED", 4)));
return rv865; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTS_OP(R12 * p_Y, rstr p_OP) { RT_B_TICK(); 
R12 * l_R_866; memset(&l_R_866, 0, sizeof l_R_866);
l_R_866 = ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_MODL))).f_MEMBERS;
for (;;) {
if ((l_R_866 == NULL)) goto L_end867;
{
if ((((((*(R12 *)rt_nil_check(l_R_866))).f_KIND == g_Y_ROUTINE) && ((*(R12 *)rt_nil_check(l_R_866))).f_EXPORTED) && r_TEQ(((*(R12 *)rt_nil_check(l_R_866))).f_PREFIX, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)))
{
if (r_TEQS(r_BASE_NAME(r_ORIGINAL(l_R_866)), p_OP))
{
{ rt_int rv868 = 1;
return rv868; }
}
}
l_R_866 = ((*(R12 *)rt_nil_check(l_R_866))).f_SNEXT;
}
RT_B_TICK();
} L_end867: ;
{ rt_int rv869 = 0;
return rv869; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_UNORDERED(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))
{
{ rt_int rv870 = 0;
return rv870; }
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_UNORDERED)
{
{ rt_int rv871 = 1;
return rv871; }
}
if (((!(((*(R22 *)rt_nil_check(p_T))).f_DECL == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_MODL == NULL))))
{
{ rt_int rv872 = (!r_IN_MODULE(((*(R22 *)rt_nil_check(p_T))).f_MODL));
return rv872; }
}
{ rt_int rv873 = 0;
return rv873; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_P_874; memset(&l_P_874, 0, sizeof l_P_874);
l_P_874 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_874 == NULL)) goto L_end875;
{
if ((l_P_874 == p_M))
{
{ rt_int rv876 = 1;
return rv876; }
}
l_P_874 = ((*(R12 *)rt_nil_check(l_P_874))).f_MODL;
}
RT_B_TICK();
} L_end875: ;
{ rt_int rv877 = 0;
return rv877; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_878; memset(&l_D_878, 0, sizeof l_D_878);
l_D_878 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_879; memset(&l_T_879, 0, sizeof l_T_879);
if ((p_TS == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
l_T_879 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_878))).f_B);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
{ R22 * rv880 = l_T_879;
return rv880; }
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R21 *)rt_nil_check(l_D_878))).f_A, p_TS);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
l_T_879 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_878))).f_B);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
r_CLOSE_SCOPE();
{ R22 * rv881 = l_T_879;
return rv881; }
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R21 * p_FORMALS, R21 * p_TS) { RT_B_TICK(); 
R21 * l_F_882; memset(&l_F_882, 0, sizeof l_F_882);
l_F_882 = p_FORMALS;
R21 * l_A_883; memset(&l_A_883, 0, sizeof l_A_883);
l_A_883 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_882 == NULL)) goto L_end884;
{
{
R21 * l_N_885; memset(&l_N_885, 0, sizeof l_N_885);
l_N_885 = ((*(R21 *)rt_nil_check(l_F_882))).f_A;
for (;;) {
if ((l_N_885 == NULL)) goto L_end886;
{
if ((l_A_883 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_882))).f_B == NULL))
{
{
R12 * l_Y_887; memset(&l_Y_887, 0, sizeof l_Y_887);
l_Y_887 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_N_885))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_887))).f_T = r_ARG_TYPE(l_A_883);
r_DEFINE(l_Y_887, ((*(R21 *)rt_nil_check(l_A_883))).f_LINE);
}
}
else
{
{
R12 * l_Y_888; memset(&l_Y_888, 0, sizeof l_Y_888);
l_Y_888 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_885))).f_NAME);
R9 l_C_889; memset(&l_C_889, 0, sizeof l_C_889);
R23 l_M_890; memset(&l_M_890, 0, sizeof l_M_890);
((*(R12 *)rt_nil_check(l_Y_888))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_882))).f_B);
if (((((*(R21 *)rt_nil_check(l_A_883))).f_KIND == g_N_ANY) && (!(((*(R21 *)rt_nil_check(l_F_882))).f_IV == ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_883))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
if ((((*(R21 *)rt_nil_check(l_A_883))).f_KIND == g_N_ANY))
{
S_R9(&l_C_889, r_MK(rt_str("ANY", 3)), 0);
S_R23(&l_M_890, r_NO_MVAL(), 0);
}
else if (((((*(R21 *)rt_nil_check(l_A_883))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_883))).f_KIND == g_N_DONTCARE)))
{
S_R9(&l_C_889, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_883))).f_NAME, (((*(R21 *)rt_nil_check(l_A_883))).f_NAME).f_LEN))), 0);
S_R23(&l_M_890, r_NO_MVAL(), 0);
}
else
{
r_ATTR_VALUE(l_A_883, &l_C_889, &l_M_890);
}
if (((((l_M_890).f_OK && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_888))).f_T))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_888))).f_T))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_888))).f_T))).f_SCALE == ((rt_int)0LL))))
{
if ((((l_M_890).f_V < (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_888))).f_T))).f_MLO).f_V) || ((l_M_890).f_V > (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_888))).f_T))).f_MHI).f_V)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_883))).f_LINE, rt_str("the argument is outside the range of the type formal (3.12.2)", 61));
}
}
if ((((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_888))).f_T))).f_KIND == g_T_INT)) && (!r_IS_GEN_TEXT(l_C_889))) && (!(((*(R21 *)rt_nil_check(l_A_883))).f_KIND == g_N_ANY))))
{
S_R9(&l_C_889, (r_EXPR(l_A_883, ((*(R12 *)rt_nil_check(l_Y_888))).f_T)).f_C, 0);
S_R23(&l_M_890, r_ENUM_MANIFEST(l_A_883, ((*(R12 *)rt_nil_check(l_Y_888))).f_T), 0);
}
S_R9(&((*(R12 *)rt_nil_check(l_Y_888))).f_ACCESS, l_C_889, 0);
((*(R12 *)rt_nil_check(l_Y_888))).f_HASMV = (l_M_890).f_OK;
((*(R12 *)rt_nil_check(l_Y_888))).f_MV = (l_M_890).f_V;
((*(R12 *)rt_nil_check(l_Y_888))).f_INPUT = 1;
r_DEFINE(l_Y_888, ((*(R21 *)rt_nil_check(l_A_883))).f_LINE);
}
}
l_A_883 = ((*(R21 *)rt_nil_check(l_A_883))).f_NEXT;
l_N_885 = ((*(R21 *)rt_nil_check(l_N_885))).f_NEXT;
}
RT_B_TICK();
} L_end886: ;
}
l_F_882 = ((*(R21 *)rt_nil_check(l_F_882))).f_NEXT;
}
RT_B_TICK();
} L_end884: ;
if ((!(l_A_883 == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
}
static R9 r_RECORD_NAME(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_FWD).f_LEN == ((rt_int)0LL)))
{
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_FWD, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, ((*(R12 *)rt_nil_check(p_Y))).f_FWD));
}
{ R9 rv891 = ((*(R12 *)rt_nil_check(p_Y))).f_FWD;
return rv891; }
rt_raise(RT_X_INIT);
}
static R22 * r_TARGET(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS);
}
{ R22 * rv892 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET;
return rv892; }
rt_raise(RT_X_INIT);
}
static R9 r_CTYPE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_893; memset(&l_K_893, 0, sizeof l_K_893);
l_K_893 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
{ R9 rv894 = r_MK(rt_str("rt_int", 6));
return rv894; }
}
else if ((l_K_893 == g_T_FLOAT))
{
{ R9 rv895 = r_MK(rt_str("double", 6));
return rv895; }
}
else if (((l_K_893 == g_T_STR) || (l_K_893 == g_T_BITS)))
{
{ R9 rv896 = r_MK(rt_str("rstr", 4));
return rv896; }
}
else if (((l_K_893 == g_T_REC) || (l_K_893 == g_T_ARR)))
{
{ R9 rv897 = ((*(R22 *)rt_nil_check(p_T))).f_CNAME;
return rv897; }
}
else if ((l_K_893 == g_T_ABS))
{
{ R9 rv898 = r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv898; }
}
else if ((l_K_893 == g_T_SEM))
{
{ R9 rv899 = r_MK(rt_str("rt_b_sem *", 10));
return rv899; }
}
else if ((l_K_893 == g_T_PATHS))
{
{ R9 rv900 = r_MK(rt_str("rt_b_paths", 10));
return rv900; }
}
else if ((l_K_893 == g_T_VOID))
{
{ R9 rv901 = r_MK(rt_str("void", 4));
return rv901; }
}
else if ((l_K_893 == g_T_PTR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R21 * l_TT_902; memset(&l_TT_902, 0, sizeof l_TT_902);
l_TT_902 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R21 *)rt_nil_check(l_TT_902))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(l_TT_902))).f_A == NULL)))
{
{
R12 * l_Y_903; memset(&l_Y_903, 0, sizeof l_Y_903);
l_Y_903 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(l_TT_902))).f_NAME);
if ((!(l_Y_903 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_903))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_903))).f_DECL == NULL))))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_903))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_903))).f_DECL))).f_A == NULL)))
{
{ R9 rv904 = r_CATS(r_RECORD_NAME(l_Y_903), rt_str(" *", 2));
return rv904; }
}
}
}
}
}
}
}
{ R9 rv905 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv905; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv906 = ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv906; }
rt_raise(RT_X_INIT);
}
static R24 * r_NEW_FIELD(R9 p_NAME, R22 * p_T, rt_int p_KIND) { RT_B_TICK(); 
R24 * l_F_907; memset(&l_F_907, 0, sizeof l_F_907);
l_F_907 = ((R24 *)rt_b_new(sizeof (R24)));
S_R24(&(*(R24 *)rt_nil_check(l_F_907)), ({ R24 rc908; memset(&rc908, 0, sizeof rc908);  S_R9(&rc908.f_NAME, p_NAME, 0); S_R9(&rc908.f_CNAME, r_FMT1(rt_str("f_@", 3), r_CID(p_NAME)), 0); rc908.f_T = p_T; rc908.f_KIND = p_KIND; S_R9(&rc908.f_TAGF, r_NO_TEXT(), 0); rc908.f_LABELS = NULL; rc908.f_NEXT = NULL; rc908; }), 0);
{ R24 * rv909 = l_F_907;
return rv909; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_FIELD(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R24 * l_F_910; memset(&l_F_910, 0, sizeof l_F_910);
l_F_910 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_910 == NULL)) goto L_end911;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_910))).f_NAME, p_NAME))
{
{ R24 * rv912 = l_F_910;
return rv912; }
}
l_F_910 = ((*(R24 *)rt_nil_check(l_F_910))).f_NEXT;
}
RT_B_TICK();
} L_end911: ;
{ R24 * rv913 = NULL;
return rv913; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_VFIELD(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R24 * l_F_914; memset(&l_F_914, 0, sizeof l_F_914);
l_F_914 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FIRST_915; memset(&l_FIRST_915, 0, sizeof l_FIRST_915);
l_FIRST_915 = NULL;
for (;;) {
if ((l_F_914 == NULL)) goto L_end916;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_914))).f_NAME, p_NAME))
{
if ((l_FIRST_915 == NULL))
{
l_FIRST_915 = l_F_914;
}
if (((((*(R24 *)rt_nil_check(l_F_914))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
{ R24 * rv917 = l_F_914;
return rv917; }
}
{
R23 l_TAGV_918; memset(&l_TAGV_918, 0, sizeof l_TAGV_918);
S_R23(&l_TAGV_918, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(l_F_914))).f_TAGF), 0);
if ((l_TAGV_918).f_OK)
{
if (r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_914))).f_LABELS, (l_TAGV_918).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(l_F_914))).f_TAGF)))).f_T))
{
{ R24 * rv919 = l_F_914;
return rv919; }
}
}
}
}
l_F_914 = ((*(R24 *)rt_nil_check(l_F_914))).f_NEXT;
}
RT_B_TICK();
} L_end916: ;
{ R24 * rv920 = l_FIRST_915;
return rv920; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL) { RT_B_TICK(); 
R24 * l_P_921; memset(&l_P_921, 0, sizeof l_P_921);
l_P_921 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_922; memset(&l_N_922, 0, sizeof l_N_922);
l_N_922 = ((rt_int)0LL);
for (;;) {
if ((l_P_921 == NULL)) goto L_end923;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_P_921))).f_NAME, ((*(R24 *)rt_nil_check(p_F))).f_NAME))
{
if ((((((((*(R24 *)rt_nil_check(l_P_921))).f_TAGF).f_LEN == ((rt_int)0LL)) || ((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL))) || (!r_TEQ(((*(R24 *)rt_nil_check(l_P_921))).f_TAGF, ((*(R24 *)rt_nil_check(p_F))).f_TAGF))) || (((*(R24 *)rt_nil_check(l_P_921))).f_LABELS == ((*(R24 *)rt_nil_check(p_F))).f_LABELS)))
{
r_FAILT(((rt_int)0LL), rt_str("the field names of a record must be distinct (3.9.1): ", 54), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
l_N_922 = rt_add(l_N_922, ((rt_int)1LL));
}
l_P_921 = ((*(R24 *)rt_nil_check(l_P_921))).f_NEXT;
}
RT_B_TICK();
} L_end923: ;
if ((l_N_922 > ((rt_int)0LL)))
{
S_R9(&((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_922)), 0);
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
static void r_RECORD_FIELDS(R22 * p_T, R21 * p_DECLS, R9 p_TAGN, R21 * p_LABELS, R24 * *p_TAIL) { RT_B_TICK(); 
R21 * l_D_924; memset(&l_D_924, 0, sizeof l_D_924);
l_D_924 = p_DECLS;
for (;;) {
if ((l_D_924 == NULL)) goto L_end925;
{
if ((((*(R21 *)rt_nil_check(l_D_924))).f_KIND == g_N_VAR))
{
{
R22 * l_FT_926; memset(&l_FT_926, 0, sizeof l_FT_926);
l_FT_926 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_924))).f_B);
R21 * l_N_927; memset(&l_N_927, 0, sizeof l_N_927);
l_N_927 = ((*(R21 *)rt_nil_check(l_D_924))).f_A;
for (;;) {
if ((l_N_927 == NULL)) goto L_end928;
{
{
R24 * l_F_929; memset(&l_F_929, 0, sizeof l_F_929);
l_F_929 = r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_927))).f_NAME, l_FT_926, ((rt_int)0LL));
S_R9(&((*(R24 *)rt_nil_check(l_F_929))).f_TAGF, p_TAGN, 0);
((*(R24 *)rt_nil_check(l_F_929))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_929, &(*p_TAIL));
if (((r_LOOKUP(((*(R21 *)rt_nil_check(l_N_927))).f_NAME) == NULL) || (!(((*(R12 *)rt_nil_check(r_LOOKUP(((*(R21 *)rt_nil_check(l_N_927))).f_NAME)))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))))
{
{
R12 * l_Y_930; memset(&l_Y_930, 0, sizeof l_Y_930);
l_Y_930 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_927))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_930))).f_T = l_FT_926;
S_R9(&((*(R12 *)rt_nil_check(l_Y_930))).f_ACCESS, r_FMT1(rt_str("$S.@", 4), ((*(R24 *)rt_nil_check(l_F_929))).f_CNAME), 0);
((*(R12 *)rt_nil_check(l_Y_930))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_Y_930))).f_LEVEL = rt_neg(((rt_int)1LL));
((*(R12 *)rt_nil_check(l_Y_930))).f_OWNER = rt_neg(((rt_int)1LL));
r_DEFINE(l_Y_930, ((*(R21 *)rt_nil_check(l_D_924))).f_LINE);
}
}
}
l_N_927 = ((*(R21 *)rt_nil_check(l_N_927))).f_NEXT;
}
RT_B_TICK();
} L_end928: ;
}
}
else
{
{
R24 * l_TF_931; memset(&l_TF_931, 0, sizeof l_TF_931);
l_TF_931 = r_FIND_FIELD(p_T, ((*(R21 *)rt_nil_check(l_D_924))).f_NAME);
R21 * l_S_932; memset(&l_S_932, 0, sizeof l_S_932);
l_S_932 = ((*(R21 *)rt_nil_check(l_D_924))).f_A;
if ((l_TF_931 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_924))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R21 *)rt_nil_check(l_D_924))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_931))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_924))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R21 *)rt_nil_check(l_D_924))).f_NAME);
}
{
R21 * l_O_933; memset(&l_O_933, 0, sizeof l_O_933);
l_O_933 = p_DECLS;
for (;;) {
if ((l_O_933 == l_D_924)) goto L_end934;
{
if ((((*(R21 *)rt_nil_check(l_O_933))).f_KIND == g_N_VARIANT))
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_O_933))).f_NAME, ((*(R21 *)rt_nil_check(l_D_924))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_924))).f_LINE, rt_str("two variant parts discriminate on the tag ", 42), ((*(R21 *)rt_nil_check(l_D_924))).f_NAME);
}
}
l_O_933 = ((*(R21 *)rt_nil_check(l_O_933))).f_NEXT;
}
RT_B_TICK();
} L_end934: ;
}
r_CHECK_VARIANT_NAMES(l_D_924, ((*(R24 *)rt_nil_check(l_TF_931))).f_T);
for (;;) {
if ((l_S_932 == NULL)) goto L_end935;
{
r_OPEN_SCOPE();
r_RECORD_FIELDS(p_T, ((*(R21 *)rt_nil_check(l_S_932))).f_B, C_R9(((*(R21 *)rt_nil_check(l_D_924))).f_NAME), ((*(R21 *)rt_nil_check(l_S_932))).f_A, &(*p_TAIL));
r_CLOSE_SCOPE();
l_S_932 = ((*(R21 *)rt_nil_check(l_S_932))).f_NEXT;
}
RT_B_TICK();
} L_end935: ;
}
}
l_D_924 = ((*(R21 *)rt_nil_check(l_D_924))).f_NEXT;
}
RT_B_TICK();
} L_end925: ;
}
static void r_CHECK_VARIANT_NAMES(R21 * p_D, R22 * p_TT) { RT_B_TICK(); 
R21 * l_S_936; memset(&l_S_936, 0, sizeof l_S_936);
l_S_936 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R21 * l_LOS_937; memset(&l_LOS_937, 0, sizeof l_LOS_937);
l_LOS_937 = NULL;
R21 * l_HIS_938; memset(&l_HIS_938, 0, sizeof l_HIS_938);
l_HIS_938 = NULL;
rt_int l_LO_LIM_939; memset(&l_LO_LIM_939, 0, sizeof l_LO_LIM_939);
rt_int l_HI_LIM_940; memset(&l_HI_LIM_940, 0, sizeof l_HI_LIM_940);
R22 * l_R_941; memset(&l_R_941, 0, sizeof l_R_941);
l_R_941 = r_REAL_TYPE(p_TT);
l_LO_LIM_939 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
l_HI_LIM_940 = INT64_MAX;
if ((((*(R22 *)rt_nil_check(l_R_941))).f_KIND == g_T_ENUM))
{
l_LO_LIM_939 = ((rt_int)0LL);
l_HI_LIM_940 = rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_R_941))).f_BASE))).f_NLITS, ((rt_int)1LL));
}
else if ((((*(R22 *)rt_nil_check(l_R_941))).f_KIND == g_T_BOOL))
{
l_LO_LIM_939 = ((rt_int)0LL);
l_HI_LIM_940 = ((rt_int)1LL);
}
if ((((*(R22 *)rt_nil_check(l_R_941))).f_MLO).f_OK)
{
l_LO_LIM_939 = (((*(R22 *)rt_nil_check(l_R_941))).f_MLO).f_V;
}
if ((((*(R22 *)rt_nil_check(l_R_941))).f_MHI).f_OK)
{
l_HI_LIM_940 = (((*(R22 *)rt_nil_check(l_R_941))).f_MHI).f_V;
}
for (;;) {
if ((l_S_936 == NULL)) goto L_end942;
{
{
R21 * l_L_943; memset(&l_L_943, 0, sizeof l_L_943);
l_L_943 = ((*(R21 *)rt_nil_check(l_S_936))).f_A;
for (;;) {
if ((l_L_943 == NULL)) goto L_end944;
{
{
R23 l_A_945; memset(&l_A_945, 0, sizeof l_A_945);
R23 l_B_946; memset(&l_B_946, 0, sizeof l_B_946);
if ((((*(R21 *)rt_nil_check(l_L_943))).f_KIND == g_N_RANGE))
{
S_R23(&l_A_945, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_943))).f_A, p_TT), 0);
S_R23(&l_B_946, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_943))).f_B, p_TT), 0);
if (((l_A_945).f_OK && (((((*(R21 *)rt_nil_check(l_L_943))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_943))).f_IV == ((rt_int)3LL))))))
{
(l_A_945).f_V = rt_add((l_A_945).f_V, ((rt_int)1LL));
}
if (((l_B_946).f_OK && (((*(R21 *)rt_nil_check(l_L_943))).f_IV >= ((rt_int)2LL))))
{
(l_B_946).f_V = rt_sub((l_B_946).f_V, ((rt_int)1LL));
}
}
else
{
S_R23(&l_A_945, r_ENUM_MANIFEST(l_L_943, p_TT), 0);
S_R23(&l_B_946, l_A_945, 0);
}
if ((!(((l_A_945).f_OK && (l_B_946).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_943))).f_LINE, rt_str("a variant-name is manifest (3.9.1)", 34));
}
if (((((l_A_945).f_V < l_LO_LIM_939) || ((l_B_946).f_V > l_HI_LIM_940)) || ((l_A_945).f_V > (l_B_946).f_V)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_943))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.1)", 49));
}
{
R21 * l_P_947; memset(&l_P_947, 0, sizeof l_P_947);
l_P_947 = l_LOS_937;
R21 * l_Q_948; memset(&l_Q_948, 0, sizeof l_Q_948);
l_Q_948 = l_HIS_938;
for (;;) {
if ((l_P_947 == NULL)) goto L_end949;
{
if ((((l_A_945).f_V <= ((*(R21 *)rt_nil_check(l_Q_948))).f_IV) && ((l_B_946).f_V >= ((*(R21 *)rt_nil_check(l_P_947))).f_IV)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_943))).f_LINE, rt_str("a value of the tag names two variants (3.9.1)", 45));
}
l_P_947 = ((*(R21 *)rt_nil_check(l_P_947))).f_NEXT;
l_Q_948 = ((*(R21 *)rt_nil_check(l_Q_948))).f_NEXT;
}
RT_B_TICK();
} L_end949: ;
}
{
R21 * l_P_950; memset(&l_P_950, 0, sizeof l_P_950);
l_P_950 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
R21 * l_Q_951; memset(&l_Q_951, 0, sizeof l_Q_951);
l_Q_951 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R21 *)rt_nil_check(l_P_950))).f_IV = (l_A_945).f_V;
((*(R21 *)rt_nil_check(l_Q_951))).f_IV = (l_B_946).f_V;
((*(R21 *)rt_nil_check(l_P_950))).f_NEXT = l_LOS_937;
((*(R21 *)rt_nil_check(l_Q_951))).f_NEXT = l_HIS_938;
l_LOS_937 = l_P_950;
l_HIS_938 = l_Q_951;
}
}
l_L_943 = ((*(R21 *)rt_nil_check(l_L_943))).f_NEXT;
}
RT_B_TICK();
} L_end944: ;
}
l_S_936 = ((*(R21 *)rt_nil_check(l_S_936))).f_NEXT;
}
RT_B_TICK();
} L_end942: ;
}
static R22 * r_RESOLVE_RECORD(R21 * p_TS, R9 p_CNAME, R12 * p_Y, R21 * p_FORMALS) { RT_B_TICK(); 
R22 * l_T_952; memset(&l_T_952, 0, sizeof l_T_952);
l_T_952 = r_NEW_TYP(g_T_REC);
R24 * l_TAIL_953; memset(&l_TAIL_953, 0, sizeof l_TAIL_953);
l_TAIL_953 = NULL;
((*(R22 *)rt_nil_check(l_T_952))).f_BASE = l_T_952;
((*(R22 *)rt_nil_check(l_T_952))).f_DECL = p_Y;
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_D == NULL)))
{
((*(R22 *)rt_nil_check(l_T_952))).f_REPS = r_EXPAND_REP(((*(R21 *)rt_nil_check(p_TS))).f_D, l_T_952, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
r_CHECK_REP_CLASS(l_T_952, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(l_T_952))).f_CNAME, p_CNAME, 0);
}
else
{
S_R9(&((*(R22 *)rt_nil_check(l_T_952))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R22 *)rt_nil_check(l_T_952))).f_CNAME, ((*(R22 *)rt_nil_check(l_T_952))).f_CNAME));
}
{
R21 * l_F_954; memset(&l_F_954, 0, sizeof l_F_954);
l_F_954 = p_FORMALS;
for (;;) {
if ((l_F_954 == NULL)) goto L_end955;
{
if ((!(((*(R21 *)rt_nil_check(l_F_954))).f_B == NULL)))
{
{
R22 * l_FT_956; memset(&l_FT_956, 0, sizeof l_FT_956);
l_FT_956 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_954))).f_B);
R21 * l_N_957; memset(&l_N_957, 0, sizeof l_N_957);
l_N_957 = ((*(R21 *)rt_nil_check(l_F_954))).f_A;
rt_int l_KIND_958; memset(&l_KIND_958, 0, sizeof l_KIND_958);
l_KIND_958 = ((rt_int)1LL);
if ((((*(R21 *)rt_nil_check(l_F_954))).f_IV == ((rt_int)1LL)))
{
l_KIND_958 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_956))) || (!(((*(R22 *)rt_nil_check(l_FT_956))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_954))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_957 == NULL)) goto L_end959;
{
r_ADD_FIELD(l_T_952, r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_957))).f_NAME, l_FT_956, l_KIND_958), &l_TAIL_953);
l_N_957 = ((*(R21 *)rt_nil_check(l_N_957))).f_NEXT;
}
RT_B_TICK();
} L_end959: ;
}
}
l_F_954 = ((*(R21 *)rt_nil_check(l_F_954))).f_NEXT;
}
RT_B_TICK();
} L_end955: ;
}
r_OPEN_SCOPE();
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_RECORD_FIELDS(l_T_952, ((*(R21 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_953);
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_CLOSE_SCOPE();
r_CHECK_RECORD_REP(l_T_952, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
r_COMPLETE_RECORD(l_T_952);
{ R22 * rv960 = l_T_952;
return rv960; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_RECORD_REP(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv961 = 0;
return rv961; }
}
{ rt_int rv962 = ((((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_KIND == g_N_REP) && r_TEQS(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_NAME, rt_str("RECORD_REP", 10)));
return rv962; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_RECORD_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_SEEN_963; memset(&l_SEEN_963, 0, sizeof l_SEEN_963);
l_SEEN_963 = NULL;
rt_int l_LISTED_964; memset(&l_LISTED_964, 0, sizeof l_LISTED_964);
l_LISTED_964 = 0;
if ((!r_IS_RECORD_REP(p_T)))
{
return;
}
{
R21 * l_P_965; memset(&l_P_965, 0, sizeof l_P_965);
l_P_965 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A;
for (;;) {
if ((l_P_965 == NULL)) goto L_end966;
{
if ((((*(R21 *)rt_nil_check(l_P_965))).f_IV == ((rt_int)1LL)))
{
l_LISTED_964 = 1;
}
r_CHECK_ELEMENTS(p_T, ((*(R21 *)rt_nil_check(l_P_965))).f_A, r_NO_TEXT(), NULL, &l_SEEN_963);
l_P_965 = ((*(R21 *)rt_nil_check(l_P_965))).f_NEXT;
}
RT_B_TICK();
} L_end966: ;
}
if (l_LISTED_964)
{
{
R24 * l_F_967; memset(&l_F_967, 0, sizeof l_F_967);
l_F_967 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_967 == NULL)) goto L_end968;
{
if ((((((*(R24 *)rt_nil_check(l_F_967))).f_TAGF).f_LEN == ((rt_int)0LL)) && (!r_IN_IDENTS(l_SEEN_963, ((*(R24 *)rt_nil_check(l_F_967))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("a record-reptype with element-specs positions every field (3.9.3): ", 67), ((*(R24 *)rt_nil_check(l_F_967))).f_NAME);
}
if ((((((*(R24 *)rt_nil_check(l_F_967))).f_TAGF).f_LEN > ((rt_int)0LL)) && (!r_IN_IDENTS(l_SEEN_963, r_CAT(r_MK(rt_str("|", 1)), ((*(R24 *)rt_nil_check(l_F_967))).f_TAGF)))))
{
r_FAILT(p_LINE, rt_str("a record-reptype with element-specs positions every variant part (3.9.3): ", 74), ((*(R24 *)rt_nil_check(l_F_967))).f_TAGF);
}
l_F_967 = ((*(R24 *)rt_nil_check(l_F_967))).f_NEXT;
}
RT_B_TICK();
} L_end968: ;
}
}
{
R21 * l_V_969; memset(&l_V_969, 0, sizeof l_V_969);
l_V_969 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_C;
for (;;) {
if ((l_V_969 == NULL)) goto L_end970;
{
{
R24 * l_TF_971; memset(&l_TF_971, 0, sizeof l_TF_971);
l_TF_971 = r_FIND_FIELD(p_T, ((*(R21 *)rt_nil_check(l_V_969))).f_NAME);
R21 * l_S_972; memset(&l_S_972, 0, sizeof l_S_972);
l_S_972 = ((*(R21 *)rt_nil_check(l_V_969))).f_A;
if ((l_TF_971 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_V_969))).f_LINE, rt_str("not a tag of the record (3.9.3): ", 33), ((*(R21 *)rt_nil_check(l_V_969))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_971))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_V_969))).f_LINE, rt_str("not a tag of the record (3.9.3): ", 33), ((*(R21 *)rt_nil_check(l_V_969))).f_NAME);
}
if ((!(((*(R21 *)rt_nil_check(l_V_969))).f_B == NULL)))
{
if ((r_PACKING_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_969))).f_B))).f_NAME) < ((rt_int)0LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_V_969))).f_LINE, rt_str("a packing-mode is DENSE, PACKED or UNPACKED (3.9.3): ", 53), ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_969))).f_B))).f_NAME);
}
}
for (;;) {
if ((l_S_972 == NULL)) goto L_end973;
{
{
R21 * l_L_974; memset(&l_L_974, 0, sizeof l_L_974);
l_L_974 = ((*(R21 *)rt_nil_check(l_S_972))).f_A;
R21 * l_P_975; memset(&l_P_975, 0, sizeof l_P_975);
l_P_975 = ((*(R21 *)rt_nil_check(l_S_972))).f_B;
R21 * l_VSEEN_976; memset(&l_VSEEN_976, 0, sizeof l_VSEEN_976);
l_VSEEN_976 = NULL;
for (;;) {
if ((l_L_974 == NULL)) goto L_end977;
{
{
R14 l_SAVED_CODE_978; memset(&l_SAVED_CODE_978, 0, sizeof l_SAVED_CODE_978);
S_R14(&l_SAVED_CODE_978, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_LV_979; memset(&l_LV_979, 0, sizeof l_LV_979);
S_R26(&l_LV_979, r_EXPR(l_L_974, ((*(R24 *)rt_nil_check(l_TF_971))).f_T), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_978, 0);
if ((!r_SAME_CLASS(r_REAL_TYPE((l_LV_979).f_T), r_REAL_TYPE(((*(R24 *)rt_nil_check(l_TF_971))).f_T))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_974))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.3)", 49));
}
}
l_L_974 = ((*(R21 *)rt_nil_check(l_L_974))).f_NEXT;
}
RT_B_TICK();
} L_end977: ;
for (;;) {
if ((l_P_975 == NULL)) goto L_end980;
{
r_CHECK_ELEMENTS(p_T, ((*(R21 *)rt_nil_check(l_P_975))).f_A, C_R9(((*(R21 *)rt_nil_check(l_V_969))).f_NAME), ((*(R21 *)rt_nil_check(l_S_972))).f_A, &l_VSEEN_976);
l_P_975 = ((*(R21 *)rt_nil_check(l_P_975))).f_NEXT;
}
RT_B_TICK();
} L_end980: ;
}
l_S_972 = ((*(R21 *)rt_nil_check(l_S_972))).f_NEXT;
}
RT_B_TICK();
} L_end973: ;
}
l_V_969 = ((*(R21 *)rt_nil_check(l_V_969))).f_NEXT;
}
RT_B_TICK();
} L_end970: ;
}
}
static void r_CHECK_ELEMENTS(R22 * p_T, R21 * p_L, R9 p_TAGN, R21 * p_LABELS, R21 * *p_SEEN) { RT_B_TICK(); 
R21 * l_E_981; memset(&l_E_981, 0, sizeof l_E_981);
l_E_981 = p_L;
for (;;) {
if ((l_E_981 == NULL)) goto L_end982;
{
if (((((*(R21 *)rt_nil_check(l_E_981))).f_FL == ((rt_int)0LL)) || (((*(R21 *)rt_nil_check(l_E_981))).f_FL == ((rt_int)2LL))))
{
{
R24 * l_F_983; memset(&l_F_983, 0, sizeof l_F_983);
l_F_983 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FOUND_984; memset(&l_FOUND_984, 0, sizeof l_FOUND_984);
l_FOUND_984 = NULL;
for (;;) {
if ((l_F_983 == NULL)) goto L_end985;
{
if ((r_TEQ(((*(R24 *)rt_nil_check(l_F_983))).f_NAME, ((*(R21 *)rt_nil_check(l_E_981))).f_NAME) && r_TEQ(((*(R24 *)rt_nil_check(l_F_983))).f_TAGF, p_TAGN)))
{
l_FOUND_984 = l_F_983;
}
l_F_983 = ((*(R24 *)rt_nil_check(l_F_983))).f_NEXT;
}
RT_B_TICK();
} L_end985: ;
if ((l_FOUND_984 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_E_981))).f_LINE, rt_str("not a field of the record accessible here (3.9.3): ", 51), ((*(R21 *)rt_nil_check(l_E_981))).f_NAME);
}
if (((((*(R21 *)rt_nil_check(l_E_981))).f_FL == ((rt_int)2LL)) && (((*(R24 *)rt_nil_check(l_FOUND_984))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_E_981))).f_LINE, rt_str("OMIT names a constant or tag field (3.9.3): ", 44), ((*(R21 *)rt_nil_check(l_E_981))).f_NAME);
}
if (r_IN_IDENTS((*p_SEEN), ((*(R21 *)rt_nil_check(l_E_981))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_E_981))).f_LINE, rt_str("a field is positioned once in a record-reptype (3.9.3): ", 56), ((*(R21 *)rt_nil_check(l_E_981))).f_NAME);
}
(*p_SEEN) = r_NAME_REF(((*(R21 *)rt_nil_check(l_E_981))).f_NAME, ((rt_int)0LL), NULL, (*p_SEEN));
}
}
else if ((((*(R21 *)rt_nil_check(l_E_981))).f_FL == ((rt_int)1LL)))
{
{
R24 * l_TF_986; memset(&l_TF_986, 0, sizeof l_TF_986);
l_TF_986 = r_FIND_FIELD(p_T, ((*(R21 *)rt_nil_check(l_E_981))).f_NAME);
R9 l_KEY_987; memset(&l_KEY_987, 0, sizeof l_KEY_987);
S_R9(&l_KEY_987, r_CAT(r_MK(rt_str("|", 1)), ((*(R21 *)rt_nil_check(l_E_981))).f_NAME), 0);
if ((l_TF_986 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_E_981))).f_LINE, rt_str("VARIANTS names a tag of the record (3.9.3): ", 44), ((*(R21 *)rt_nil_check(l_E_981))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_986))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_E_981))).f_LINE, rt_str("VARIANTS names a tag of the record (3.9.3): ", 44), ((*(R21 *)rt_nil_check(l_E_981))).f_NAME);
}
if (r_IN_IDENTS((*p_SEEN), l_KEY_987))
{
r_FAILT(((*(R21 *)rt_nil_check(l_E_981))).f_LINE, rt_str("a variant part is positioned once in a record-reptype (3.9.3): ", 63), ((*(R21 *)rt_nil_check(l_E_981))).f_NAME);
}
(*p_SEEN) = r_NAME_REF(l_KEY_987, ((rt_int)0LL), NULL, (*p_SEEN));
}
}
else
{
{
R23 l_M_988; memset(&l_M_988, 0, sizeof l_M_988);
S_R23(&l_M_988, r_MANIFEST(((*(R21 *)rt_nil_check(l_E_981))).f_B), 0);
if (((!(l_M_988).f_OK) || ((l_M_988).f_V < ((rt_int)0LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_E_981))).f_LINE, rt_str("the length of a filler-spec is a manifest integer, not negative (3.9.3)", 71));
}
}
}
l_E_981 = ((*(R21 *)rt_nil_check(l_E_981))).f_NEXT;
}
RT_B_TICK();
} L_end982: ;
}
static R9 r_RECORD_SIZE(R22 * p_T, R9 p_C) { RT_B_TICK(); 
R9 l_R_989; memset(&l_R_989, 0, sizeof l_R_989);
S_R9(&l_R_989, r_MK(rt_str("({ rt_int sz = 0;", 17)), 0);
R21 * l_SAVED_990; memset(&l_SAVED_990, 0, sizeof l_SAVED_990);
l_SAVED_990 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
((*(R7 *)rt_nil_check(g_W))).f_LDONE = NULL;
if ((!r_IS_RECORD_REP(p_T)))
{
S_R9(&l_R_989, r_CAT(l_R_989, r_LAYOUT_ALL(p_T, p_C, r_NO_TEXT(), ((rt_int)2LL))), 0);
S_R9(&l_R_989, r_CAT(l_R_989, r_LAYOUT_PARTS(p_T, p_C)), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_SAVED_990;
{ R9 rv991 = r_CATS(l_R_989, rt_str(" sz; })", 7));
return rv991; }
}
{
R21 * l_P_992; memset(&l_P_992, 0, sizeof l_P_992);
l_P_992 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A;
for (;;) {
if ((l_P_992 == NULL)) goto L_end993;
{
S_R9(&l_R_989, r_CAT(l_R_989, r_LAYOUT_SPEC(p_T, p_C, l_P_992, r_NO_TEXT())), 0);
l_P_992 = ((*(R21 *)rt_nil_check(l_P_992))).f_NEXT;
}
RT_B_TICK();
} L_end993: ;
}
S_R9(&l_R_989, r_CAT(l_R_989, r_LAYOUT_ALL(p_T, p_C, r_NO_TEXT(), ((rt_int)2LL))), 0);
S_R9(&l_R_989, r_CAT(l_R_989, r_LAYOUT_PARTS(p_T, p_C)), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_SAVED_990;
{ R9 rv994 = r_CATS(l_R_989, rt_str(" sz; })", 7));
return rv994; }
rt_raise(RT_X_INIT);
}
static R9 r_FIELD_SIZE_C(R24 * p_F, R9 p_C) { RT_B_TICK(); 
{ R9 rv995 = (r_SIZE_OF(((*(R24 *)rt_nil_check(p_F))).f_T, r_FMT2(rt_str("(@).@", 5), p_C, ((*(R24 *)rt_nil_check(p_F))).f_CNAME))).f_C;
return rv995; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_ALL(R22 * p_T, R9 p_C, R9 p_TAGN, rt_int p_MODE) { RT_B_TICK(); 
R9 l_R_996; memset(&l_R_996, 0, sizeof l_R_996);
S_R9(&l_R_996, r_MK(rt_str("", 0)), 0);
R24 * l_F_997; memset(&l_F_997, 0, sizeof l_F_997);
l_F_997 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_997 == NULL)) goto L_end998;
{
if ((r_TEQ(((*(R24 *)rt_nil_check(l_F_997))).f_TAGF, p_TAGN) && (!r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LDONE, ((*(R24 *)rt_nil_check(l_F_997))).f_NAME))))
{
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(((*(R24 *)rt_nil_check(l_F_997))).f_NAME, ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_996, r_FMT4(rt_str("@ sz = rt_b_layout(sz, @, @);", 29), l_R_996, r_FIELD_SIZE_C(l_F_997, p_C), r_NUM(p_MODE), r_MK(rt_str("", 0))), 0);
}
else
{
S_R9(&l_R_996, r_CAT(l_R_996, r_FMT4(rt_str(" if (@) sz = rt_b_layout(sz, @, @);@", 36), r_VARIANT_COND(l_F_997, p_T, p_C), r_FIELD_SIZE_C(l_F_997, p_C), r_NUM(p_MODE), r_MK(rt_str("", 0)))), 0);
}
}
l_F_997 = ((*(R24 *)rt_nil_check(l_F_997))).f_NEXT;
}
RT_B_TICK();
} L_end998: ;
{ R9 rv999 = l_R_996;
return rv999; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_PARTS(R22 * p_T, R9 p_C) { RT_B_TICK(); 
R9 l_R_1000; memset(&l_R_1000, 0, sizeof l_R_1000);
S_R9(&l_R_1000, r_MK(rt_str("", 0)), 0);
R24 * l_F_1001; memset(&l_F_1001, 0, sizeof l_F_1001);
l_F_1001 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1001 == NULL)) goto L_end1002;
{
if ((((((*(R24 *)rt_nil_check(l_F_1001))).f_TAGF).f_LEN > ((rt_int)0LL)) && (!r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LDONE, r_CAT(r_MK(rt_str("|", 1)), ((*(R24 *)rt_nil_check(l_F_1001))).f_TAGF)))))
{
S_R9(&l_R_1000, r_CAT(l_R_1000, r_LAYOUT_VARIANTS(p_T, p_C, ((*(R24 *)rt_nil_check(l_F_1001))).f_TAGF)), 0);
}
l_F_1001 = ((*(R24 *)rt_nil_check(l_F_1001))).f_NEXT;
}
RT_B_TICK();
} L_end1002: ;
{ R9 rv1003 = l_R_1000;
return rv1003; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_SPEC(R22 * p_T, R9 p_C, R21 * p_P, R9 p_TAGN) { RT_B_TICK(); 
rt_int l_MODE_1004; memset(&l_MODE_1004, 0, sizeof l_MODE_1004);
l_MODE_1004 = ((rt_int)2LL);
R9 l_R_1005; memset(&l_R_1005, 0, sizeof l_R_1005);
S_R9(&l_R_1005, r_MK(rt_str("", 0)), 0);
if (((((*(R21 *)rt_nil_check(p_P))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_MODE_1004 = r_PACKING_VALUE(((*(R21 *)rt_nil_check(p_P))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(p_P))).f_IV == ((rt_int)0LL)))
{
S_R9(&l_R_1005, r_LAYOUT_ALL(p_T, p_C, p_TAGN, l_MODE_1004), 0);
if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_1005, r_CAT(l_R_1005, r_LAYOUT_PARTS(p_T, p_C)), 0);
}
{ R9 rv1006 = l_R_1005;
return rv1006; }
}
{
R21 * l_E_1007; memset(&l_E_1007, 0, sizeof l_E_1007);
l_E_1007 = ((*(R21 *)rt_nil_check(p_P))).f_A;
for (;;) {
if ((l_E_1007 == NULL)) goto L_end1008;
{
if (((((*(R21 *)rt_nil_check(l_E_1007))).f_FL == ((rt_int)0LL)) || (((*(R21 *)rt_nil_check(l_E_1007))).f_FL == ((rt_int)2LL))))
{
{
R24 * l_F_1009; memset(&l_F_1009, 0, sizeof l_F_1009);
l_F_1009 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1009 == NULL)) goto L_end1010;
{
if ((r_TEQ(((*(R24 *)rt_nil_check(l_F_1009))).f_NAME, ((*(R21 *)rt_nil_check(l_E_1007))).f_NAME) && r_TEQ(((*(R24 *)rt_nil_check(l_F_1009))).f_TAGF, p_TAGN)))
{
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(((*(R24 *)rt_nil_check(l_F_1009))).f_NAME, ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (((((*(R21 *)rt_nil_check(l_E_1007))).f_FL == ((rt_int)2LL)) && r_ARG_MANIFEST(p_T, l_F_1009)))
{
}
else if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_1005, r_FMT3(rt_str("@ sz = rt_b_layout(sz, @, @);", 29), l_R_1005, r_FIELD_SIZE_C(l_F_1009, p_C), r_NUM(l_MODE_1004)), 0);
}
else
{
S_R9(&l_R_1005, r_CAT(l_R_1005, r_FMT4(rt_str(" if (@) sz = rt_b_layout(sz, @, @);@", 36), r_VARIANT_COND(l_F_1009, p_T, p_C), r_FIELD_SIZE_C(l_F_1009, p_C), r_NUM(l_MODE_1004), r_MK(rt_str("", 0)))), 0);
}
}
l_F_1009 = ((*(R24 *)rt_nil_check(l_F_1009))).f_NEXT;
}
RT_B_TICK();
} L_end1010: ;
}
}
else if ((((*(R21 *)rt_nil_check(l_E_1007))).f_FL == ((rt_int)1LL)))
{
S_R9(&l_R_1005, r_CAT(l_R_1005, r_LAYOUT_VARIANTS(p_T, p_C, ((*(R21 *)rt_nil_check(l_E_1007))).f_NAME)), 0);
}
else if ((((*(R21 *)rt_nil_check(l_E_1007))).f_FL == ((rt_int)5LL)))
{
S_R9(&l_R_1005, r_FMT3(rt_str("@ sz = rt_b_layout(sz, rt_b_pack_size(@, 7, @), ", 48), l_R_1005, r_NUM((r_MANIFEST(((*(R21 *)rt_nil_check(l_E_1007))).f_B)).f_V), r_NUM(l_MODE_1004)), 0);
S_R9(&l_R_1005, r_FMT2(rt_str("@@);", 4), l_R_1005, r_NUM(l_MODE_1004)), 0);
}
else
{
S_R9(&l_R_1005, r_FMT3(rt_str("@ sz = rt_b_layout(sz, @, @);", 29), l_R_1005, r_NUM((r_MANIFEST(((*(R21 *)rt_nil_check(l_E_1007))).f_B)).f_V), r_NUM(l_MODE_1004)), 0);
}
l_E_1007 = ((*(R21 *)rt_nil_check(l_E_1007))).f_NEXT;
}
RT_B_TICK();
} L_end1008: ;
}
{ R9 rv1011 = l_R_1005;
return rv1011; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_VARIANTS(R22 * p_T, R9 p_C, R9 p_TAGN) { RT_B_TICK(); 
R9 l_R_1012; memset(&l_R_1012, 0, sizeof l_R_1012);
S_R9(&l_R_1012, r_MK(rt_str("", 0)), 0);
R9 l_WORD_1013; memset(&l_WORD_1013, 0, sizeof l_WORD_1013);
S_R9(&l_WORD_1013, r_MK(rt_str(" if", 3)), 0);
rt_int l_ELSE_MODE_1014; memset(&l_ELSE_MODE_1014, 0, sizeof l_ELSE_MODE_1014);
l_ELSE_MODE_1014 = ((rt_int)2LL);
R24 * l_TF_1015; memset(&l_TF_1015, 0, sizeof l_TF_1015);
l_TF_1015 = r_FIND_FIELD(p_T, p_TAGN);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(r_CAT(r_MK(rt_str("|", 1)), p_TAGN), ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (r_IS_RECORD_REP(p_T))
{
{
R21 * l_V_1016; memset(&l_V_1016, 0, sizeof l_V_1016);
l_V_1016 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_C;
for (;;) {
if ((l_V_1016 == NULL)) goto L_end1017;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_1016))).f_NAME, p_TAGN))
{
{
R21 * l_S_1018; memset(&l_S_1018, 0, sizeof l_S_1018);
l_S_1018 = ((*(R21 *)rt_nil_check(l_V_1016))).f_A;
if ((!(((*(R21 *)rt_nil_check(l_V_1016))).f_B == NULL)))
{
l_ELSE_MODE_1014 = r_PACKING_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_1016))).f_B))).f_NAME);
}
for (;;) {
if ((l_S_1018 == NULL)) goto L_end1019;
{
{
R9 l_COND_1020; memset(&l_COND_1020, 0, sizeof l_COND_1020);
S_R9(&l_COND_1020, r_MK(rt_str("0", 1)), 0);
R21 * l_L_1021; memset(&l_L_1021, 0, sizeof l_L_1021);
l_L_1021 = ((*(R21 *)rt_nil_check(l_S_1018))).f_A;
R21 * l_P_1022; memset(&l_P_1022, 0, sizeof l_P_1022);
l_P_1022 = ((*(R21 *)rt_nil_check(l_S_1018))).f_B;
R21 * l_OUTER_1023; memset(&l_OUTER_1023, 0, sizeof l_OUTER_1023);
l_OUTER_1023 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
R9 l_BODY_1024; memset(&l_BODY_1024, 0, sizeof l_BODY_1024);
S_R9(&l_BODY_1024, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1021 == NULL)) goto L_end1025;
{
S_R9(&l_COND_1020, r_FMT4(rt_str("@ || (@).@ == @", 15), l_COND_1020, p_C, ((*(R24 *)rt_nil_check(l_TF_1015))).f_CNAME, (r_EXPR(l_L_1021, ((*(R24 *)rt_nil_check(l_TF_1015))).f_T)).f_C), 0);
l_L_1021 = ((*(R21 *)rt_nil_check(l_L_1021))).f_NEXT;
}
RT_B_TICK();
} L_end1025: ;
for (;;) {
if ((l_P_1022 == NULL)) goto L_end1026;
{
S_R9(&l_BODY_1024, r_CAT(l_BODY_1024, r_LAYOUT_SPEC(p_T, p_C, l_P_1022, p_TAGN)), 0);
l_P_1022 = ((*(R21 *)rt_nil_check(l_P_1022))).f_NEXT;
}
RT_B_TICK();
} L_end1026: ;
S_R9(&l_BODY_1024, r_CAT(l_BODY_1024, r_LAYOUT_ALL(p_T, p_C, p_TAGN, ((rt_int)2LL))), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_OUTER_1023;
S_R9(&l_R_1012, r_CAT(l_R_1012, r_FMT3(rt_str("@ (@) {@ }", 10), l_WORD_1013, l_COND_1020, l_BODY_1024)), 0);
S_R9(&l_WORD_1013, r_MK(rt_str(" else if", 8)), 0);
}
l_S_1018 = ((*(R21 *)rt_nil_check(l_S_1018))).f_NEXT;
}
RT_B_TICK();
} L_end1019: ;
}
}
l_V_1016 = ((*(R21 *)rt_nil_check(l_V_1016))).f_NEXT;
}
RT_B_TICK();
} L_end1017: ;
}
}
{
R21 * l_OUTER_1027; memset(&l_OUTER_1027, 0, sizeof l_OUTER_1027);
l_OUTER_1027 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
R9 l_REST_1028; memset(&l_REST_1028, 0, sizeof l_REST_1028);
S_R9(&l_REST_1028, r_LAYOUT_ALL(p_T, p_C, p_TAGN, l_ELSE_MODE_1014), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_OUTER_1027;
if (r_TEQS(l_WORD_1013, rt_str(" if", 3)))
{
{ R9 rv1029 = l_REST_1028;
return rv1029; }
}
{ R9 rv1030 = r_FMT2(rt_str("@ else {@ }", 11), l_R_1012, l_REST_1028);
return rv1030; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_ARG_MANIFEST(R22 * p_T, R24 * p_F) { RT_B_TICK(); 
R24 * l_G_1031; memset(&l_G_1031, 0, sizeof l_G_1031);
l_G_1031 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1032; memset(&l_A_1032, 0, sizeof l_A_1032);
l_A_1032 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_G_1031 == NULL) || (l_A_1032 == NULL))) goto L_end1033;
{
if ((!(((*(R24 *)rt_nil_check(l_G_1031))).f_KIND == ((rt_int)0LL))))
{
if ((l_G_1031 == p_F))
{
{ rt_int rv1034 = ((((*(R25 *)rt_nil_check(l_A_1032))).f_MLO).f_OK && (!((*(R25 *)rt_nil_check(l_A_1032))).f_ANYARG));
return rv1034; }
}
l_A_1032 = ((*(R25 *)rt_nil_check(l_A_1032))).f_NEXT;
}
l_G_1031 = ((*(R24 *)rt_nil_check(l_G_1031))).f_NEXT;
}
RT_B_TICK();
} L_end1033: ;
{ rt_int rv1035 = 0;
return rv1035; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ANY_TAG(R21 * p_A) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv1036 = 0;
return rv1036; }
}
{
R12 * l_Y_1037; memset(&l_Y_1037, 0, sizeof l_Y_1037);
l_Y_1037 = r_LOOKUP(((*(R21 *)rt_nil_check(p_A))).f_NAME);
if ((l_Y_1037 == NULL))
{
{ rt_int rv1038 = 0;
return rv1038; }
}
{ rt_int rv1039 = ((((*(R12 *)rt_nil_check(l_Y_1037))).f_KIND == g_Y_CONST) && r_TEQS(((*(R12 *)rt_nil_check(l_Y_1037))).f_ACCESS, rt_str("ANY", 3)));
return rv1039; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_1040; memset(&l_D_1040, 0, sizeof l_D_1040);
l_D_1040 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_CLASS_1041; memset(&l_CLASS_1041, 0, sizeof l_CLASS_1041);
l_CLASS_1041 = NULL;
R20 * l_TARGS_1042; memset(&l_TARGS_1042, 0, sizeof l_TARGS_1042);
l_TARGS_1042 = NULL;
R25 * l_VARGS_1043; memset(&l_VARGS_1043, 0, sizeof l_VARGS_1043);
l_VARGS_1043 = NULL;
R25 * l_VTAIL_1044; memset(&l_VTAIL_1044, 0, sizeof l_VTAIL_1044);
l_VTAIL_1044 = NULL;
R21 * l_A_1045; memset(&l_A_1045, 0, sizeof l_A_1045);
l_A_1045 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_1046; memset(&l_F_1046, 0, sizeof l_F_1046);
l_F_1046 = ((*(R21 *)rt_nil_check(l_D_1040))).f_A;
for (;;) {
if ((l_F_1046 == NULL)) goto L_end1047;
{
{
R21 * l_N_1048; memset(&l_N_1048, 0, sizeof l_N_1048);
l_N_1048 = ((*(R21 *)rt_nil_check(l_F_1046))).f_A;
for (;;) {
if ((l_N_1048 == NULL)) goto L_end1049;
{
if ((l_A_1045 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_1046))).f_B == NULL))
{
{
R20 * l_B_1050; memset(&l_B_1050, 0, sizeof l_B_1050);
l_B_1050 = ((R20 *)rt_b_new(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_1050)), ({ R20 rc1051; memset(&rc1051, 0, sizeof rc1051);  S_R9(&rc1051.f_NAME, ((*(R21 *)rt_nil_check(l_N_1048))).f_NAME, 0); rc1051.f_T = r_ARG_TYPE(l_A_1045); S_R9(&rc1051.f_C, r_NO_TEXT(), 0); rc1051.f_HASMV = 0; rc1051.f_MV = ((rt_int)0LL); rc1051.f_R = NULL; rc1051.f_NEXT = l_TARGS_1042; rc1051; }), 0);
l_TARGS_1042 = l_B_1050;
}
}
else
{
{
R25 * l_V_1052; memset(&l_V_1052, 0, sizeof l_V_1052);
l_V_1052 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_V_1052)), ({ R25 rc1053; memset(&rc1053, 0, sizeof rc1053);  S_R9(&rc1053.f_LO, r_NO_TEXT(), 0); S_R9(&rc1053.f_HI, r_NO_TEXT(), 0); S_R23(&rc1053.f_MLO, r_NO_MVAL(), 0); S_R23(&rc1053.f_MHI, r_NO_MVAL(), 0); rc1053.f_ANYARG = 0; rc1053.f_NEXT = NULL; rc1053; }), 0);
if (((((*(R21 *)rt_nil_check(l_A_1045))).f_KIND == g_N_ANY) || r_IS_ANY_TAG(l_A_1045)))
{
if ((!(((*(R21 *)rt_nil_check(l_F_1046))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_1045))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R25 *)rt_nil_check(l_V_1052))).f_ANYARG = 1;
}
else if ((((*(R21 *)rt_nil_check(l_A_1045))).f_KIND == g_N_DONTCARE))
{
((*(R25 *)rt_nil_check(l_V_1052))).f_ANYARG = 1;
S_R9(&((*(R25 *)rt_nil_check(l_V_1052))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R21 *)rt_nil_check(l_A_1045))).f_KIND == g_TS_GEN))
{
((*(R25 *)rt_nil_check(l_V_1052))).f_ANYARG = 1;
S_R9(&((*(R25 *)rt_nil_check(l_V_1052))).f_HI, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_1045))).f_NAME, (((*(R21 *)rt_nil_check(l_A_1045))).f_NAME).f_LEN))), 0);
}
else
{
{
R22 * l_FT_1054; memset(&l_FT_1054, 0, sizeof l_FT_1054);
l_FT_1054 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_1046))).f_B);
S_R9(&((*(R25 *)rt_nil_check(l_V_1052))).f_LO, r_CONVERT(r_EXPR(l_A_1045, l_FT_1054), l_FT_1054, ((*(R21 *)rt_nil_check(l_A_1045))).f_LINE, r_NO_TEXT()), 0);
S_R23(&((*(R25 *)rt_nil_check(l_V_1052))).f_MLO, r_ENUM_MANIFEST(l_A_1045, l_FT_1054), 0);
if ((((((*(R25 *)rt_nil_check(l_V_1052))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_FT_1054))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_FT_1054))).f_MHI).f_OK))
{
if ((((((*(R25 *)rt_nil_check(l_V_1052))).f_MLO).f_V < (((*(R22 *)rt_nil_check(l_FT_1054))).f_MLO).f_V) || ((((*(R25 *)rt_nil_check(l_V_1052))).f_MLO).f_V > (((*(R22 *)rt_nil_check(l_FT_1054))).f_MHI).f_V)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_1045))).f_LINE, rt_str("the argument is outside the range of the parameter (3.9.1)", 58));
}
}
if (((((*(R21 *)rt_nil_check(l_F_1046))).f_IV == ((rt_int)1LL)) && (!(((*(R25 *)rt_nil_check(l_V_1052))).f_MLO).f_OK)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_1045))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_1044 == NULL))
{
l_VARGS_1043 = l_V_1052;
}
else
{
((*(R25 *)rt_nil_check(l_VTAIL_1044))).f_NEXT = l_V_1052;
}
l_VTAIL_1044 = l_V_1052;
}
}
l_A_1045 = ((*(R21 *)rt_nil_check(l_A_1045))).f_NEXT;
l_N_1048 = ((*(R21 *)rt_nil_check(l_N_1048))).f_NEXT;
}
RT_B_TICK();
} L_end1049: ;
}
l_F_1046 = ((*(R21 *)rt_nil_check(l_F_1046))).f_NEXT;
}
RT_B_TICK();
} L_end1047: ;
if ((!(l_A_1045 == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{
R12 * l_R_1055; memset(&l_R_1055, 0, sizeof l_R_1055);
l_R_1055 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_1055 == NULL)) goto L_end1056;
{
if (((((*(R12 *)rt_nil_check(l_R_1055))).f_DECL == l_D_1040) && r_SAME_BINDS(((*(R12 *)rt_nil_check(l_R_1055))).f_BINDINGS, l_TARGS_1042)))
{
l_CLASS_1041 = ((*(R12 *)rt_nil_check(l_R_1055))).f_T;
goto L_end1056;
}
l_R_1055 = ((*(R12 *)rt_nil_check(l_R_1055))).f_INSTANCES;
}
RT_B_TICK();
} L_end1056: ;
}
if ((l_CLASS_1041 == NULL))
{
{
R12 * l_R_1057; memset(&l_R_1057, 0, sizeof l_R_1057);
l_R_1057 = r_NEW_SYM(g_Y_TYPE, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R20 * l_B_1058; memset(&l_B_1058, 0, sizeof l_B_1058);
l_B_1058 = l_TARGS_1042;
R20 * l_SAVED_1059; memset(&l_SAVED_1059, 0, sizeof l_SAVED_1059);
l_SAVED_1059 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
rt_int l_ENTERED_1060; memset(&l_ENTERED_1060, 0, sizeof l_ENTERED_1060);
((*(R12 *)rt_nil_check(l_R_1057))).f_DECL = l_D_1040;
((*(R12 *)rt_nil_check(l_R_1057))).f_BINDINGS = l_TARGS_1042;
((*(R12 *)rt_nil_check(l_R_1057))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
((*(R7 *)rt_nil_check(g_W))).f_RECS = l_R_1057;
l_ENTERED_1060 = r_ENTER_MODULE_FOR(p_Y);
r_OPEN_SCOPE();
for (;;) {
if ((l_B_1058 == NULL)) goto L_end1061;
{
{
R12 * l_TY_1062; memset(&l_TY_1062, 0, sizeof l_TY_1062);
l_TY_1062 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_1058))).f_NAME);
((*(R12 *)rt_nil_check(l_TY_1062))).f_T = ((*(R20 *)rt_nil_check(l_B_1058))).f_T;
r_DEFINE(l_TY_1062, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_1058 = ((*(R20 *)rt_nil_check(l_B_1058))).f_NEXT;
}
RT_B_TICK();
} L_end1061: ;
l_F_1046 = ((*(R21 *)rt_nil_check(l_D_1040))).f_A;
for (;;) {
if ((l_F_1046 == NULL)) goto L_end1063;
{
if ((!(((*(R21 *)rt_nil_check(l_F_1046))).f_B == NULL)))
{
{
R21 * l_N_1064; memset(&l_N_1064, 0, sizeof l_N_1064);
l_N_1064 = ((*(R21 *)rt_nil_check(l_F_1046))).f_A;
for (;;) {
if ((l_N_1064 == NULL)) goto L_end1065;
{
{
R12 * l_P_1066; memset(&l_P_1066, 0, sizeof l_P_1066);
l_P_1066 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_1064))).f_NAME);
((*(R12 *)rt_nil_check(l_P_1066))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_1046))).f_B);
S_R9(&((*(R12 *)rt_nil_check(l_P_1066))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), r_CID(((*(R21 *)rt_nil_check(l_N_1064))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_P_1066))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_P_1066))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_1066, ((*(R21 *)rt_nil_check(l_F_1046))).f_LINE);
}
l_N_1064 = ((*(R21 *)rt_nil_check(l_N_1064))).f_NEXT;
}
RT_B_TICK();
} L_end1065: ;
}
}
l_F_1046 = ((*(R21 *)rt_nil_check(l_F_1046))).f_NEXT;
}
RT_B_TICK();
} L_end1063: ;
if ((l_TARGS_1042 == NULL))
{
l_CLASS_1041 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_1040))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R21 *)rt_nil_check(l_D_1040))).f_A);
}
else
{
l_CLASS_1041 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_1040))).f_B, r_NO_TEXT(), p_Y, ((*(R21 *)rt_nil_check(l_D_1040))).f_A);
}
S_R9(&((*(R22 *)rt_nil_check(l_CLASS_1041))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R12 *)rt_nil_check(l_R_1057))).f_T = l_CLASS_1041;
r_CLOSE_SCOPE();
if (l_ENTERED_1060)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1059;
}
}
{
R22 * l_T_1067; memset(&l_T_1067, 0, sizeof l_T_1067);
l_T_1067 = r_COPY_TYP(l_CLASS_1041);
((*(R22 *)rt_nil_check(l_T_1067))).f_ARGS = l_VARGS_1043;
{ R22 * rv1068 = l_T_1067;
return rv1068; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_1069; memset(&l_P_1069, 0, sizeof l_P_1069);
l_P_1069 = p_A;
R20 * l_Q_1070; memset(&l_Q_1070, 0, sizeof l_Q_1070);
l_Q_1070 = p_B;
for (;;) {
if (((l_P_1069 == NULL) || (l_Q_1070 == NULL))) goto L_end1071;
{
if ((((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_1069))).f_T, ((*(R20 *)rt_nil_check(l_Q_1070))).f_T)) || (!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_1069))).f_T, ((*(R20 *)rt_nil_check(l_Q_1070))).f_T))) || (!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_1069))).f_T, ((*(R20 *)rt_nil_check(l_Q_1070))).f_T))))
{
{ rt_int rv1072 = 0;
return rv1072; }
}
l_P_1069 = ((*(R20 *)rt_nil_check(l_P_1069))).f_NEXT;
l_Q_1070 = ((*(R20 *)rt_nil_check(l_Q_1070))).f_NEXT;
}
RT_B_TICK();
} L_end1071: ;
{ rt_int rv1073 = ((l_P_1069 == NULL) && (l_Q_1070 == NULL));
return rv1073; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R22 * p_T) { RT_B_TICK(); 
R25 * l_A_1074; memset(&l_A_1074, 0, sizeof l_A_1074);
l_A_1074 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_1074 == NULL)) goto L_end1075;
{
if (((*(R25 *)rt_nil_check(l_A_1074))).f_ANYARG)
{
{ rt_int rv1076 = 1;
return rv1076; }
}
l_A_1074 = ((*(R25 *)rt_nil_check(l_A_1074))).f_NEXT;
}
RT_B_TICK();
} L_end1075: ;
{ rt_int rv1077 = 0;
return rv1077; }
rt_raise(RT_X_INIT);
}
static R9 r_VARIANT_COND(R24 * p_F, R22 * p_T, R9 p_SELF) { RT_B_TICK(); 
R21 * l_L_1078; memset(&l_L_1078, 0, sizeof l_L_1078);
l_L_1078 = ((*(R24 *)rt_nil_check(p_F))).f_LABELS;
R9 l_C_1079; memset(&l_C_1079, 0, sizeof l_C_1079);
S_R9(&l_C_1079, r_MK(rt_str("0", 1)), 0);
R24 * l_TF_1080; memset(&l_TF_1080, 0, sizeof l_TF_1080);
l_TF_1080 = r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_1078 == NULL)) goto L_end1081;
{
if ((((*(R21 *)rt_nil_check(l_L_1078))).f_KIND == g_N_RANGE))
{
S_R9(&l_C_1079, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_1079, p_SELF, ((*(R24 *)rt_nil_check(l_TF_1080))).f_CNAME), 0);
S_R9(&l_C_1079, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_1079, (r_EXPR(((*(R21 *)rt_nil_check(l_L_1078))).f_A, ((*(R24 *)rt_nil_check(l_TF_1080))).f_T)).f_C, p_SELF, ((*(R24 *)rt_nil_check(l_TF_1080))).f_CNAME), 0);
S_R9(&l_C_1079, r_FMT2(rt_str("@@)", 3), l_C_1079, (r_EXPR(((*(R21 *)rt_nil_check(l_L_1078))).f_B, ((*(R24 *)rt_nil_check(l_TF_1080))).f_T)).f_C), 0);
}
else
{
S_R9(&l_C_1079, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_1079, p_SELF, ((*(R24 *)rt_nil_check(l_TF_1080))).f_CNAME, (r_EXPR(l_L_1078, ((*(R24 *)rt_nil_check(l_TF_1080))).f_T)).f_C), 0);
}
l_L_1078 = ((*(R21 *)rt_nil_check(l_L_1078))).f_NEXT;
}
RT_B_TICK();
} L_end1081: ;
{ R9 rv1082 = r_FMT1(rt_str("(@)", 3), l_C_1079);
return rv1082; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R22 * p_T) { RT_B_TICK(); 
R9 l_C_1083; memset(&l_C_1083, 0, sizeof l_C_1083);
S_R9(&l_C_1083, ((*(R22 *)rt_nil_check(p_T))).f_CNAME, 0);
R24 * l_F_1084; memset(&l_F_1084, 0, sizeof l_F_1084);
l_F_1084 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_BODY_1085; memset(&l_BODY_1085, 0, sizeof l_BODY_1085);
S_R9(&l_BODY_1085, r_MK(rt_str("", 0)), 0);
R9 l_ASSIGN_1086; memset(&l_ASSIGN_1086, 0, sizeof l_ASSIGN_1086);
S_R9(&l_ASSIGN_1086, r_MK(rt_str("", 0)), 0);
R9 l_COPY_1087; memset(&l_COPY_1087, 0, sizeof l_COPY_1087);
S_R9(&l_COPY_1087, r_MK(rt_str("", 0)), 0);
R9 l_EQ_1088; memset(&l_EQ_1088, 0, sizeof l_EQ_1088);
S_R9(&l_EQ_1088, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_1084 == NULL)) goto L_end1089;
{
S_R9(&l_BODY_1085, r_FMT3(rt_str("@ @ @;", 6), l_BODY_1085, r_CTYPE(((*(R24 *)rt_nil_check(l_F_1084))).f_T), ((*(R24 *)rt_nil_check(l_F_1084))).f_CNAME), 0);
S_R9(&l_COPY_1087, r_FMT3(rt_str("@ d.@ = @;", 10), l_COPY_1087, ((*(R24 *)rt_nil_check(l_F_1084))).f_CNAME, r_COPY_OF(((*(R24 *)rt_nil_check(l_F_1084))).f_T, r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_1084))).f_CNAME))), 0);
if ((((*(R24 *)rt_nil_check(l_F_1084))).f_KIND == ((rt_int)1LL)))
{
S_R9(&l_ASSIGN_1086, r_FMT2(rt_str("@ if (!(@)) rt_raise(RT_B_TYPE_MISMATCH);", 41), l_ASSIGN_1086, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1084))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_1084))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_1084))).f_CNAME))), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1084))).f_KIND == ((rt_int)2LL)))
{
S_R9(&l_ASSIGN_1086, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_1086, ((*(R24 *)rt_nil_check(l_F_1084))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_1084))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_1084))).f_CNAME), 0);
}
else
{
S_R9(&l_ASSIGN_1086, r_FMT2(rt_str("@ @", 3), l_ASSIGN_1086, r_ASSIGN_CODE(((*(R24 *)rt_nil_check(l_F_1084))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_1084))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_1084))).f_CNAME))), 0);
}
if (((((*(R24 *)rt_nil_check(l_F_1084))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R9(&l_EQ_1088, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1088, r_VARIANT_COND(l_F_1084, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1084))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_1084))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_1084))).f_CNAME))), 0);
}
else
{
S_R9(&l_EQ_1088, r_FMT2(rt_str("@ && @", 6), l_EQ_1088, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1084))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_1084))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_1084))).f_CNAME))), 0);
}
l_F_1084 = ((*(R24 *)rt_nil_check(l_F_1084))).f_NEXT;
}
RT_B_TICK();
} L_end1089: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_1083, l_BODY_1085));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_1083, l_C_1083, l_C_1083));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_1083, l_C_1083, l_C_1083));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_1083, l_C_1083, l_C_1083, l_ASSIGN_1086));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_1083, l_C_1083, l_C_1083, l_EQ_1088));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_1083, l_C_1083, l_C_1083));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s;", 28), l_C_1083, l_C_1083, l_C_1083, l_C_1083));
r_EMIT(g_O_HELPERS, r_FMT1(rt_str("@ return d; }", 13), l_COPY_1087));
}
static R9 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R9 l_ET_C_1090; memset(&l_ET_C_1090, 0, sizeof l_ET_C_1090);
S_R9(&l_ET_C_1090, r_CTYPE(p_ELEM), 0);
R9 l_KEY_1091; memset(&l_KEY_1091, 0, sizeof l_KEY_1091);
S_R9(&l_KEY_1091, r_FMT3(rt_str("@/@/@", 5), l_ET_C_1090, r_NUM(p_DIMS), r_NUM(((*(R22 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R12 * l_Y_1092; memset(&l_Y_1092, 0, sizeof l_Y_1092);
l_Y_1092 = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_1092 == NULL)) goto L_end1093;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_1092))).f_NAME, l_KEY_1091) && r_SAME_TYPE(((*(R12 *)rt_nil_check(l_Y_1092))).f_T, p_ELEM)))
{
{ R9 rv1094 = ((*(R12 *)rt_nil_check(l_Y_1092))).f_ACCESS;
return rv1094; }
}
l_Y_1092 = ((*(R12 *)rt_nil_check(l_Y_1092))).f_INSTANCES;
}
RT_B_TICK();
} L_end1093: ;
l_Y_1092 = r_NEW_SYM(g_Y_TYPE, l_KEY_1091);
((*(R12 *)rt_nil_check(l_Y_1092))).f_T = p_ELEM;
S_R9(&((*(R12 *)rt_nil_check(l_Y_1092))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R12 *)rt_nil_check(l_Y_1092))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R7 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_1092;
{
R9 l_C_1095; memset(&l_C_1095, 0, sizeof l_C_1095);
S_R9(&l_C_1095, ((*(R12 *)rt_nil_check(l_Y_1092))).f_ACCESS, 0);
R9 l_D_1096; memset(&l_D_1096, 0, sizeof l_D_1096);
S_R9(&l_D_1096, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_1095, l_C_1095));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_1095, l_D_1096, l_D_1096, l_ET_C_1090));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_1095, l_C_1095, l_C_1095));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_1095, l_C_1095, l_C_1095));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_1095, l_C_1095, l_C_1095, l_D_1096));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_1096, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_1095, l_C_1095, l_C_1095, l_D_1096));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_1096, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_1095, l_C_1095, l_C_1095));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s; ", 29), l_C_1095, l_C_1095, l_C_1095, l_C_1095));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("rt_int n = rt_b_extent(@, s.lo, s.hi); d.p = rt_alloc((n > 0 \? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = @; return d; }", 140), l_D_1096, r_COPY_OF(p_ELEM, r_MK(rt_str("s.p[i]", 6)))));
}
{ R9 rv1097 = ((*(R12 *)rt_nil_check(l_Y_1092))).f_ACCESS;
return rv1097; }
rt_raise(RT_X_INIT);
}
static R9 r_INIT_CODE(R22 * p_T, R9 p_LV) { RT_B_TICK(); 
rt_int l_K_1098; memset(&l_K_1098, 0, sizeof l_K_1098);
l_K_1098 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1098 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1099 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv1099; }
}
{ R9 rv1100 = r_FMT2(rt_str("@ = rt_b_str_new(@, 0);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv1100; }
}
else if ((l_K_1098 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1101 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv1101; }
}
{ R9 rv1102 = r_FMT2(rt_str("@ = rt_b_str_new(@, 1);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv1102; }
}
else if ((l_K_1098 == g_T_SEM))
{
{ R9 rv1103 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv1103; }
}
else if ((l_K_1098 == g_T_ABS))
{
{ R9 rv1104 = r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv1104; }
}
else if ((l_K_1098 == g_T_ARR))
{
{
R25 * l_B_1105; memset(&l_B_1105, 0, sizeof l_B_1105);
l_B_1105 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_1106; memset(&l_I_1106, 0, sizeof l_I_1106);
l_I_1106 = ((rt_int)0LL);
R9 l_R_1107; memset(&l_R_1107, 0, sizeof l_R_1107);
S_R9(&l_R_1107, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_1105 == NULL)) goto L_end1108;
{
S_R9(&l_R_1107, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_1107, p_LV, r_NUM(l_I_1106), ((*(R25 *)rt_nil_check(l_B_1105))).f_LO), 0);
S_R9(&l_R_1107, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_1107, p_LV, r_NUM(l_I_1106), ((*(R25 *)rt_nil_check(l_B_1105))).f_HI), 0);
l_I_1106 = rt_add(l_I_1106, ((rt_int)1LL));
l_B_1105 = ((*(R25 *)rt_nil_check(l_B_1105))).f_NEXT;
}
RT_B_TICK();
} L_end1108: ;
S_R9(&l_R_1107, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_1107, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R9(&l_R_1107, r_FMT4(rt_str("@ @.p = rt_b_array_alloc(n, sizeof *@.p);", 41), l_R_1107, p_LV, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_ELEM))
{
{
R9 l_IV_1109; memset(&l_IV_1109, 0, sizeof l_IV_1109);
S_R9(&l_IV_1109, r_NEW_NAME(rt_str("i", 1)), 0);
S_R9(&l_R_1107, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_1107, l_IV_1109, l_IV_1109, l_IV_1109), 0);
S_R9(&l_R_1107, r_FMT2(rt_str("@ @ }", 5), l_R_1107, r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_1109))), 0);
}
}
{ R9 rv1110 = r_CATS(l_R_1107, rt_str(" }", 2));
return rv1110; }
}
}
else if ((l_K_1098 == g_T_REC))
{
{
R24 * l_F_1111; memset(&l_F_1111, 0, sizeof l_F_1111);
l_F_1111 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1112; memset(&l_A_1112, 0, sizeof l_A_1112);
l_A_1112 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R9 l_R_1113; memset(&l_R_1113, 0, sizeof l_R_1113);
S_R9(&l_R_1113, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_1111 == NULL)) goto L_end1114;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1111))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_1112 == NULL)))
{
if ((!((*(R25 *)rt_nil_check(l_A_1112))).f_ANYARG))
{
S_R9(&l_R_1113, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_1113, p_LV, ((*(R24 *)rt_nil_check(l_F_1111))).f_CNAME, ((*(R25 *)rt_nil_check(l_A_1112))).f_LO), 0);
}
else if (((((*(R24 *)rt_nil_check(l_F_1111))).f_KIND == ((rt_int)2LL)) && ((((*(R25 *)rt_nil_check(l_A_1112))).f_HI).f_LEN == ((rt_int)0LL))))
{
S_R9(&l_R_1113, r_FMT3(rt_str("@ @.@ = INT64_MIN;", 18), l_R_1113, p_LV, ((*(R24 *)rt_nil_check(l_F_1111))).f_CNAME), 0);
}
l_A_1112 = ((*(R25 *)rt_nil_check(l_A_1112))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_1111))).f_T))
{
S_R9(&l_R_1113, r_FMT2(rt_str("@ @", 3), l_R_1113, r_SUBST_SELF(r_INIT_CODE(((*(R24 *)rt_nil_check(l_F_1111))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R24 *)rt_nil_check(l_F_1111))).f_CNAME)), p_LV)), 0);
}
l_F_1111 = ((*(R24 *)rt_nil_check(l_F_1111))).f_NEXT;
}
RT_B_TICK();
} L_end1114: ;
{ R9 rv1115 = l_R_1113;
return rv1115; }
}
}
{ R9 rv1116 = r_NO_TEXT();
return rv1116; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1117; memset(&l_K_1117, 0, sizeof l_K_1117);
l_K_1117 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_1117 == g_T_STR) || (l_K_1117 == g_T_BITS)) || (l_K_1117 == g_T_ARR)) || (l_K_1117 == g_T_SEM)))
{
{ rt_int rv1118 = 1;
return rv1118; }
}
else if ((l_K_1117 == g_T_ABS))
{
{ rt_int rv1119 = r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1119; }
}
else if ((l_K_1117 == g_T_REC))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv1120 = 1;
return rv1120; }
}
{
R24 * l_F_1121; memset(&l_F_1121, 0, sizeof l_F_1121);
l_F_1121 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1121 == NULL)) goto L_end1122;
{
if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_1121))).f_T))
{
{ rt_int rv1123 = 1;
return rv1123; }
}
l_F_1121 = ((*(R24 *)rt_nil_check(l_F_1121))).f_NEXT;
}
RT_B_TICK();
} L_end1122: ;
}
}
{ rt_int rv1124 = 0;
return rv1124; }
rt_raise(RT_X_INIT);
}
static R9 r_COPY_OF(R22 * p_T, R9 p_V) { RT_B_TICK(); 
rt_int l_K_1125; memset(&l_K_1125, 0, sizeof l_K_1125);
l_K_1125 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1125 == g_T_STR) || (l_K_1125 == g_T_BITS)))
{
{ R9 rv1126 = r_FMT1(rt_str("rt_str_copy(@)", 14), p_V);
return rv1126; }
}
else if ((l_K_1125 == g_T_ABS))
{
{ R9 rv1127 = r_COPY_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_V);
return rv1127; }
}
else if (((l_K_1125 == g_T_ARR) || (l_K_1125 == g_T_REC)))
{
{ R9 rv1128 = r_FMT2(rt_str("C_@(@)", 6), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_V);
return rv1128; }
}
{ R9 rv1129 = p_V;
return rv1129; }
rt_raise(RT_X_INIT);
}
static R9 r_ASSIGN_CODE(R22 * p_T, R9 p_LV, R9 p_RV) { RT_B_TICK(); 
rt_int l_K_1130; memset(&l_K_1130, 0, sizeof l_K_1130);
l_K_1130 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1130 == g_T_STR) || (l_K_1130 == g_T_BITS)))
{
{ R9 rv1131 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv1131; }
}
else if ((l_K_1130 == g_T_ABS))
{
{ R9 rv1132 = r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv1132; }
}
else if ((l_K_1130 == g_T_SEM))
{
{ R9 rv1133 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv1133; }
}
else if ((l_K_1130 == g_T_ARR))
{
{ R9 rv1134 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1134; }
}
else if ((l_K_1130 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R9 rv1135 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1135; }
}
{ R9 rv1136 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1136; }
}
{ R9 rv1137 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv1137; }
rt_raise(RT_X_INIT);
}
static R9 r_EQUAL_CODE(R22 * p_T, R9 p_A, R9 p_B) { RT_B_TICK(); 
rt_int l_K_1138; memset(&l_K_1138, 0, sizeof l_K_1138);
l_K_1138 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1138 == g_T_STR) || (l_K_1138 == g_T_BITS)))
{
{ R9 rv1139 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv1139; }
}
else if ((l_K_1138 == g_T_ABS))
{
{ R9 rv1140 = r_EQUAL_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv1140; }
}
else if (((l_K_1138 == g_T_ARR) || (l_K_1138 == g_T_REC)))
{
{ R9 rv1141 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv1141; }
}
else if ((l_K_1138 == g_T_SEM))
{
{ R9 rv1142 = r_MK(rt_str("0", 1));
return rv1142; }
}
{ R9 rv1143 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv1143; }
rt_raise(RT_X_INIT);
}
static R9 r_RANGE_CHECK(R22 * p_T, R9 p_V, R9 p_SELF) { RT_B_TICK(); 
if (((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))) || ((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS))
{
{ R9 rv1144 = p_V;
return rv1144; }
}
if ((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R9 rv1145 = p_V;
return rv1145; }
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R9 rv1146 = p_V;
return rv1146; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R9 rv1147 = r_FMT3(rt_str("rt_b_tfrange(@, @, @)", 21), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1147; }
}
{ R9 rv1148 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1148; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R9 rv1149 = r_FMT3(rt_str("rt_b_trange(@, @, @)", 20), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1149; }
}
{ R9 rv1150 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1150; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv1151 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv1151; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv1152 = 1;
return rv1152; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv1153 = r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv1153; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv1154 = r_SAME_CLASS(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1154; }
}
if ((!(((*(R22 *)rt_nil_check(p_A))).f_KIND == ((*(R22 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv1155 = 0;
return rv1155; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv1156 = (((*(R22 *)rt_nil_check(p_A))).f_BASE == ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1156; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1157 = ((((*(R22 *)rt_nil_check(p_A))).f_DIMS == ((*(R22 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM));
return rv1157; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv1158 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv1158; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1159 = ((r_ORIGINAL(((*(R22 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R22 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE));
return rv1159; }
}
{ rt_int rv1160 = 1;
return rv1160; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv1161 = 1;
return rv1161; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv1162 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv1162; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv1163 = r_SAME_TYPE(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1163; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv1164 = 0;
return rv1164; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv1165 = (((*(R22 *)rt_nil_check(p_A))).f_SCALE == ((*(R22 *)rt_nil_check(p_B))).f_SCALE);
return rv1165; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1166 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM);
return rv1166; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv1167 = r_SAME_ARGS(((*(R22 *)rt_nil_check(p_A))).f_ARGS, ((*(R22 *)rt_nil_check(p_B))).f_ARGS);
return rv1167; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1168 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1168; }
}
{ rt_int rv1169 = 1;
return rv1169; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R25 * p_B) { RT_B_TICK(); 
if (((((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1170 = 0;
return rv1170; }
}
{ rt_int rv1171 = rt_b_eq(rt_b_slice(r_STR(((*(R25 *)rt_nil_check(p_B))).f_HI, (((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv1171; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R25 * p_A, R25 * p_B) { RT_B_TICK(); 
R25 * l_P_1172; memset(&l_P_1172, 0, sizeof l_P_1172);
l_P_1172 = p_A;
R25 * l_Q_1173; memset(&l_Q_1173, 0, sizeof l_Q_1173);
l_Q_1173 = p_B;
for (;;) {
if (((l_P_1172 == NULL) || (l_Q_1173 == NULL))) goto L_end1174;
{
if ((r_IS_GEN_ARG(l_P_1172) || r_IS_GEN_ARG(l_Q_1173)))
{
}
else if ((!(((*(R25 *)rt_nil_check(l_P_1172))).f_ANYARG == ((*(R25 *)rt_nil_check(l_Q_1173))).f_ANYARG)))
{
{ rt_int rv1175 = 0;
return rv1175; }
}
if (((((*(R25 *)rt_nil_check(l_P_1172))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_1173))).f_MLO).f_OK))
{
if ((!((((*(R25 *)rt_nil_check(l_P_1172))).f_MLO).f_V == (((*(R25 *)rt_nil_check(l_Q_1173))).f_MLO).f_V)))
{
{ rt_int rv1176 = 0;
return rv1176; }
}
}
l_P_1172 = ((*(R25 *)rt_nil_check(l_P_1172))).f_NEXT;
l_Q_1173 = ((*(R25 *)rt_nil_check(l_Q_1173))).f_NEXT;
}
RT_B_TICK();
} L_end1174: ;
{ rt_int rv1177 = ((l_P_1172 == NULL) && (l_Q_1173 == NULL));
return rv1177; }
rt_raise(RT_X_INIT);
}
static R9 r_FRAME_OF(rt_int p_LEVEL) { RT_B_TICK(); 
R18 * l_CS_1178; memset(&l_CS_1178, 0, sizeof l_CS_1178);
l_CS_1178 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R9 l_T_1179; memset(&l_T_1179, 0, sizeof l_T_1179);
rt_int l_LEV_1180; memset(&l_LEV_1180, 0, sizeof l_LEV_1180);
if ((((*(R18 *)rt_nil_check(l_CS_1178))).f_LEVEL == p_LEVEL))
{
{ R9 rv1181 = r_MK(rt_str("F", 1));
return rv1181; }
}
if (((*(R18 *)rt_nil_check(l_CS_1178))).f_FRAMED)
{
S_R9(&l_T_1179, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R9(&l_T_1179, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_1180 = rt_sub(((*(R18 *)rt_nil_check(l_CS_1178))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_1180 <= p_LEVEL)) goto L_end1182;
{
S_R9(&l_T_1179, r_CATS(l_T_1179, rt_str("->up", 4)), 0);
l_LEV_1180 = rt_sub(l_LEV_1180, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1182: ;
{ R9 rv1183 = l_T_1179;
return rv1183; }
rt_raise(RT_X_INIT);
}
static R9 r_OBJ_ACCESS(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R12 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R9 rv1184 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1184; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1185 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1185; }
}
if (((*(R12 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R9 rv1186 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1186; }
}
{ R9 rv1187 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1187; }
rt_raise(RT_X_INIT);
}
static R9 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE) { RT_B_TICK(); 
R18 * l_CS_1188; memset(&l_CS_1188, 0, sizeof l_CS_1188);
l_CS_1188 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R22 * l_T_1189; memset(&l_T_1189, 0, sizeof l_T_1189);
l_T_1189 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
R9 l_CN_1190; memset(&l_CN_1190, 0, sizeof l_CN_1190);
if ((((*(R18 *)rt_nil_check(l_CS_1188))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R7 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R7 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R9(&l_CN_1190, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
}
else
{
S_R9(&l_CN_1190, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_1189), l_CN_1190));
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1190, 0);
{ R9 rv1191 = l_CN_1190;
return rv1191; }
}
S_R9(&l_CN_1190, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_FIELD, l_CN_1190, 0);
if (((*(R18 *)rt_nil_check(l_CS_1188))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_1189), l_CN_1190), &((*(R18 *)rt_nil_check(l_CS_1188))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_1190), 0);
{ R9 rv1192 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1192; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_1189), l_CN_1190, l_CN_1190, l_CN_1190));
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1190, 0);
{ R9 rv1193 = l_CN_1190;
return rv1193; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R21 * p_D) { RT_B_TICK(); 
R22 * l_T_1194; memset(&l_T_1194, 0, sizeof l_T_1194);
l_T_1194 = r_RESOLVE(((*(R21 *)rt_nil_check(p_D))).f_B);
R21 * l_N_1195; memset(&l_N_1195, 0, sizeof l_N_1195);
l_N_1195 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R26 l_V_1196; memset(&l_V_1196, 0, sizeof l_V_1196);
rt_int l_HAVE_V_1197; memset(&l_HAVE_V_1197, 0, sizeof l_HAVE_V_1197);
l_HAVE_V_1197 = 0;
if (((((*(R22 *)rt_nil_check(l_T_1194))).f_KIND == g_T_TYPE) || (((*(R22 *)rt_nil_check(l_T_1194))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_1195 == NULL)) goto L_end1198;
{
{
R12 * l_Y_1199; memset(&l_Y_1199, 0, sizeof l_Y_1199);
l_Y_1199 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(l_N_1195))).f_NAME);
R9 l_CN_1200; memset(&l_CN_1200, 0, sizeof l_CN_1200);
if ((((*(R21 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R12 *)rt_nil_check(l_Y_1199))).f_KIND = g_Y_CONST;
((*(R12 *)rt_nil_check(l_Y_1199))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_1194) && (((*(R22 *)rt_nil_check(l_T_1194))).f_SCALE == ((rt_int)0LL))))
{
{
R23 l_M_1201; memset(&l_M_1201, 0, sizeof l_M_1201);
S_R23(&l_M_1201, r_MANIFEST(((*(R21 *)rt_nil_check(p_D))).f_C), 0);
((*(R12 *)rt_nil_check(l_Y_1199))).f_HASMV = (l_M_1201).f_OK;
((*(R12 *)rt_nil_check(l_Y_1199))).f_MV = (l_M_1201).f_V;
}
}
}
((*(R12 *)rt_nil_check(l_Y_1199))).f_T = l_T_1194;
S_R9(&l_CN_1200, r_NEW_OBJECT(l_Y_1199, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_1194))
{
r_CODE(r_INIT_CODE(l_T_1194, l_CN_1200));
}
if ((!(((*(R21 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_1197))
{
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R21 *)rt_nil_check(p_D))).f_C;
S_R26(&l_V_1196, r_EXPR(((*(R21 *)rt_nil_check(p_D))).f_C, l_T_1194), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
l_HAVE_V_1197 = 1;
}
r_CODE(r_STORE_CODE(l_T_1194, l_CN_1200, l_V_1196, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_1199, ((*(R21 *)rt_nil_check(l_N_1195))).f_LINE);
}
l_N_1195 = ((*(R21 *)rt_nil_check(l_N_1195))).f_NEXT;
}
RT_B_TICK();
} L_end1198: ;
}
static R26 r_MKET(R9 p_C, R22 * p_T) { RT_B_TICK(); 
{ R26 rv1202 = ({ R26 rc1203; memset(&rc1203, 0, sizeof rc1203);  S_R9(&rc1203.f_C, p_C, 0); rc1203.f_T = p_T; rc1203.f_LVAL = 0; S_R9(&rc1203.f_SELF, r_NO_TEXT(), 0); rc1203; });
return rv1202; }
rt_raise(RT_X_INIT);
}
static R26 r_MKLV(R9 p_C, R22 * p_T, rt_int p_LVAL, R9 p_SELF) { RT_B_TICK(); 
{ R26 rv1204 = ({ R26 rc1205; memset(&rc1205, 0, sizeof rc1205);  S_R9(&rc1205.f_C, p_C, 0); rc1205.f_T = p_T; rc1205.f_LVAL = p_LVAL; S_R9(&rc1205.f_SELF, p_SELF, 0); rc1205; });
return rv1204; }
rt_raise(RT_X_INIT);
}
static R22 * r_INT_TYPE(rt_int p_SCALE) { RT_B_TICK(); 
R22 * l_T_1206; memset(&l_T_1206, 0, sizeof l_T_1206);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R22 * rv1207 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv1207; }
}
l_T_1206 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_1206))).f_SCALE = p_SCALE;
{ R22 * rv1208 = l_T_1206;
return rv1208; }
rt_raise(RT_X_INIT);
}
static R22 * r_STR_TYPE(R9 p_LEN, R23 p_M) { RT_B_TICK(); 
R22 * l_T_1209; memset(&l_T_1209, 0, sizeof l_T_1209);
l_T_1209 = r_NEW_TYP(g_T_STR);
S_R9(&((*(R22 *)rt_nil_check(l_T_1209))).f_LEN_C, p_LEN, 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1209))).f_MLEN, p_M, 0);
{ R22 * rv1210 = l_T_1209;
return rv1210; }
rt_raise(RT_X_INIT);
}
static R9 r_CSTRING(R9 p_T) { RT_B_TICK(); 
rstr l_S_1211; memset(&l_S_1211, 0, sizeof l_S_1211);
l_S_1211 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_1211, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_1212; memset(&l_AT_1212, 0, sizeof l_AT_1212);
l_AT_1212 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R9 l_R_1213; memset(&l_R_1213, 0, sizeof l_R_1213);
S_R9(&l_R_1213, r_MK(rt_str("\"", 1)), 0);
{ rt_int it1215_lo = ((rt_int)0LL), it1215_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it1215 = it1215_lo; it1215 <= it1215_hi; it1215++) {
{
if ((rt_b_eq(rt_b_slice(l_S_1211, it1215, it1215), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_1211, it1215, it1215), rt_str("\\", 1))))
{
S_R9(&l_R_1213, r_MK(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_S_1211, it1215, it1215))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1211, it1215, it1215), rt_str("\?", 1)))
{
S_R9(&l_R_1213, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_1216; memset(&l_C_1216, 0, sizeof l_C_1216);
l_C_1216 = r_CODE_OF(rt_b_slice(l_S_1211, it1215, it1215));
if (({ rt_int iv1217 = l_C_1216; (((rt_int)32LL) <= iv1217) && (iv1217 <= ((rt_int)126LL)); }))
{
S_R9(&l_R_1213, r_MK(rt_b_slice(l_S_1211, it1215, it1215)), 0);
}
else
{
S_R9(&l_R_1213, r_MK(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_1216, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_1216, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_1216, ((rt_int)8LL))))), 0);
}
}
}
}
RT_B_TICK();
if (it1215 == it1215_hi) break;
} } L_end1214: ;
S_R9(&l_R_1213, r_MK(rt_str("\"", 1)), 0);
{ R9 rv1218 = ({ R9 rc1219; memset(&rc1219, 0, sizeof rc1219);  rc1219.f_AT = l_AT_1212; rc1219.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_1212); rc1219.f_H = rt_neg(((rt_int)1LL)); rc1219; });
return rv1218; }
rt_raise(RT_X_INIT);
}
static R23 r_MANIFEST(R21 * p_E) { RT_B_TICK(); 
rt_int l_K_1220; memset(&l_K_1220, 0, sizeof l_K_1220);
l_K_1220 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
R23 l_NO_1221; memset(&l_NO_1221, 0, sizeof l_NO_1221);
S_R23(&l_NO_1221, ({ R23 rc1222; memset(&rc1222, 0, sizeof rc1222);  rc1222.f_OK = 0; rc1222.f_V = ((rt_int)0LL); rc1222; }), 0);
if ((l_K_1220 == g_N_INT))
{
{ R23 rv1223 = ({ R23 rc1224; memset(&rc1224, 0, sizeof rc1224);  rc1224.f_OK = 1; rc1224.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc1224; });
return rv1223; }
}
else if ((l_K_1220 == g_N_PAREN))
{
{ R23 rv1225 = r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv1225; }
}
else if ((l_K_1220 == g_N_BOOL))
{
{ R23 rv1226 = ({ R23 rc1227; memset(&rc1227, 0, sizeof rc1227);  rc1227.f_OK = 1; rc1227.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc1227; });
return rv1226; }
}
else if ((l_K_1220 == g_N_UNOP))
{
{
R23 l_A_1228; memset(&l_A_1228, 0, sizeof l_A_1228);
S_R23(&l_A_1228, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
if ((!(l_A_1228).f_OK))
{
{ R23 rv1229 = l_NO_1221;
return rv1229; }
}
{ R23 rv1230 = ({ R23 rc1231; memset(&rc1231, 0, sizeof rc1231);  rc1231.f_OK = 1; rc1231.f_V = r_MANIFEST_ARITH(r_MK(rt_str("-", 1)), ((rt_int)0LL), (l_A_1228).f_V, ((*(R21 *)rt_nil_check(p_E))).f_LINE); rc1231; });
return rv1230; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R23 rv1232 = l_A_1228;
return rv1232; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R23 rv1233 = ({ R23 rc1234; memset(&rc1234, 0, sizeof rc1234);  rc1234.f_OK = (l_A_1228).f_OK; rc1234.f_V = rt_sub(((rt_int)1LL), (l_A_1228).f_V); rc1234; });
return rv1233; }
}
}
}
else if ((l_K_1220 == g_N_BINOP))
{
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R23 rv1235 = l_NO_1221;
return rv1235; }
}
{
R23 l_A_1236; memset(&l_A_1236, 0, sizeof l_A_1236);
S_R23(&l_A_1236, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_B_1237; memset(&l_B_1237, 0, sizeof l_B_1237);
S_R23(&l_B_1237, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
R9 l_OP_1238; memset(&l_OP_1238, 0, sizeof l_OP_1238);
S_R9(&l_OP_1238, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if (r_TEQS(l_OP_1238, rt_str("&", 1)))
{
if (((((l_A_1236).f_OK && ((l_A_1236).f_V == ((rt_int)0LL)))) || (((l_B_1237).f_OK && ((l_B_1237).f_V == ((rt_int)0LL))))))
{
{ R23 rv1239 = ({ R23 rc1240; memset(&rc1240, 0, sizeof rc1240);  rc1240.f_OK = 1; rc1240.f_V = ((rt_int)0LL); rc1240; });
return rv1239; }
}
if (((l_A_1236).f_OK && (l_B_1237).f_OK))
{
{ R23 rv1241 = ({ R23 rc1242; memset(&rc1242, 0, sizeof rc1242);  rc1242.f_OK = 1; rc1242.f_V = ((rt_int)1LL); rc1242; });
return rv1241; }
}
{ R23 rv1243 = l_NO_1221;
return rv1243; }
}
else if (r_TEQS(l_OP_1238, rt_str("!", 1)))
{
if (((((l_A_1236).f_OK && ((l_A_1236).f_V == ((rt_int)1LL)))) || (((l_B_1237).f_OK && ((l_B_1237).f_V == ((rt_int)1LL))))))
{
{ R23 rv1244 = ({ R23 rc1245; memset(&rc1245, 0, sizeof rc1245);  rc1245.f_OK = 1; rc1245.f_V = ((rt_int)1LL); rc1245; });
return rv1244; }
}
if (((l_A_1236).f_OK && (l_B_1237).f_OK))
{
{ R23 rv1246 = ({ R23 rc1247; memset(&rc1247, 0, sizeof rc1247);  rc1247.f_OK = 1; rc1247.f_V = ((rt_int)0LL); rc1247; });
return rv1246; }
}
{ R23 rv1248 = l_NO_1221;
return rv1248; }
}
if ((!(((l_A_1236).f_OK && (l_B_1237).f_OK))))
{
{ R23 rv1249 = l_NO_1221;
return rv1249; }
}
if ((!((r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_B)))))
{
{ R23 rv1250 = l_NO_1221;
return rv1250; }
}
if (((r_TEQS(l_OP_1238, rt_str("+", 1)) || r_TEQS(l_OP_1238, rt_str("-", 1))) || r_TEQS(l_OP_1238, rt_str("*", 1))))
{
{ R23 rv1251 = ({ R23 rc1252; memset(&rc1252, 0, sizeof rc1252);  rc1252.f_OK = 1; rc1252.f_V = r_MANIFEST_ARITH(l_OP_1238, (l_A_1236).f_V, (l_B_1237).f_V, ((*(R21 *)rt_nil_check(p_E))).f_LINE); rc1252; });
return rv1251; }
}
else if ((r_TEQS(l_OP_1238, rt_str("//", 2)) && (!((l_B_1237).f_V == ((rt_int)0LL)))))
{
{ R23 rv1253 = ({ R23 rc1254; memset(&rc1254, 0, sizeof rc1254);  rc1254.f_OK = 1; rc1254.f_V = rt_quot((l_A_1236).f_V, (l_B_1237).f_V); rc1254; });
return rv1253; }
}
else if ((r_TEQS(l_OP_1238, rt_str("MOD", 3)) && (!((l_B_1237).f_V == ((rt_int)0LL)))))
{
{ R23 rv1255 = ({ R23 rc1256; memset(&rc1256, 0, sizeof rc1256);  rc1256.f_OK = 1; rc1256.f_V = rt_rem((l_A_1236).f_V, (l_B_1237).f_V); rc1256; });
return rv1255; }
}
else if (r_TEQS(l_OP_1238, rt_str("=", 1)))
{
{ R23 rv1257 = ({ R23 rc1258; memset(&rc1258, 0, sizeof rc1258);  rc1258.f_OK = 1; rc1258.f_V = r_BOOL_INT(((l_A_1236).f_V == (l_B_1237).f_V)); rc1258; });
return rv1257; }
}
else if (r_TEQS(l_OP_1238, rt_str("<>", 2)))
{
{ R23 rv1259 = ({ R23 rc1260; memset(&rc1260, 0, sizeof rc1260);  rc1260.f_OK = 1; rc1260.f_V = r_BOOL_INT((!((l_A_1236).f_V == (l_B_1237).f_V))); rc1260; });
return rv1259; }
}
else if (r_TEQS(l_OP_1238, rt_str("<", 1)))
{
{ R23 rv1261 = ({ R23 rc1262; memset(&rc1262, 0, sizeof rc1262);  rc1262.f_OK = 1; rc1262.f_V = r_BOOL_INT(((l_A_1236).f_V < (l_B_1237).f_V)); rc1262; });
return rv1261; }
}
else if (r_TEQS(l_OP_1238, rt_str(">", 1)))
{
{ R23 rv1263 = ({ R23 rc1264; memset(&rc1264, 0, sizeof rc1264);  rc1264.f_OK = 1; rc1264.f_V = r_BOOL_INT(((l_A_1236).f_V > (l_B_1237).f_V)); rc1264; });
return rv1263; }
}
else if (r_TEQS(l_OP_1238, rt_str("<=", 2)))
{
{ R23 rv1265 = ({ R23 rc1266; memset(&rc1266, 0, sizeof rc1266);  rc1266.f_OK = 1; rc1266.f_V = r_BOOL_INT(((l_A_1236).f_V <= (l_B_1237).f_V)); rc1266; });
return rv1265; }
}
else if (r_TEQS(l_OP_1238, rt_str(">=", 2)))
{
{ R23 rv1267 = ({ R23 rc1268; memset(&rc1268, 0, sizeof rc1268);  rc1268.f_OK = 1; rc1268.f_V = r_BOOL_INT(((l_A_1236).f_V >= (l_B_1237).f_V)); rc1268; });
return rv1267; }
}
}
}
else if ((l_K_1220 == g_N_IN))
{
{
R23 l_A_1269; memset(&l_A_1269, 0, sizeof l_A_1269);
S_R23(&l_A_1269, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_L_1270; memset(&l_L_1270, 0, sizeof l_L_1270);
S_R23(&l_L_1270, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R23 l_U_1271; memset(&l_U_1271, 0, sizeof l_U_1271);
S_R23(&l_U_1271, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_1272; memset(&l_LO_1272, 0, sizeof l_LO_1272);
rt_int l_HI_1273; memset(&l_HI_1273, 0, sizeof l_HI_1273);
if ((!(((((l_A_1269).f_OK && (l_L_1270).f_OK) && (l_U_1271).f_OK) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A)))))
{
{ R23 rv1274 = l_NO_1221;
return rv1274; }
}
l_LO_1272 = (l_L_1270).f_V;
l_HI_1273 = (l_U_1271).f_V;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_1272 = rt_add(l_LO_1272, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_1273 = rt_sub(l_HI_1273, ((rt_int)1LL));
}
{ R23 rv1275 = ({ R23 rc1276; memset(&rc1276, 0, sizeof rc1276);  rc1276.f_OK = 1; rc1276.f_V = r_BOOL_INT((((l_A_1269).f_V >= l_LO_1272) && ((l_A_1269).f_V <= l_HI_1273))); rc1276; });
return rv1275; }
}
}
else if (((l_K_1220 == g_N_NAME) || (l_K_1220 == g_TS_GEN)))
{
{
R12 * l_Y_1277; memset(&l_Y_1277, 0, sizeof l_Y_1277);
l_Y_1277 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R20 * l_B_1278; memset(&l_B_1278, 0, sizeof l_B_1278);
l_B_1278 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_1278 == NULL)) goto L_end1279;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_1278))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME) && ((*(R20 *)rt_nil_check(l_B_1278))).f_HASMV))
{
{ R23 rv1280 = ({ R23 rc1281; memset(&rc1281, 0, sizeof rc1281);  rc1281.f_OK = 1; rc1281.f_V = ((*(R20 *)rt_nil_check(l_B_1278))).f_MV; rc1281; });
return rv1280; }
}
l_B_1278 = ((*(R20 *)rt_nil_check(l_B_1278))).f_NEXT;
}
RT_B_TICK();
} L_end1279: ;
if ((!(l_Y_1277 == NULL)))
{
if ((((((((*(R12 *)rt_nil_check(l_Y_1277))).f_KIND == g_Y_CONST) || (((*(R12 *)rt_nil_check(l_Y_1277))).f_KIND == g_Y_GEN)) || (((((*(R12 *)rt_nil_check(l_Y_1277))).f_KIND == g_Y_VAR) && ((*(R12 *)rt_nil_check(l_Y_1277))).f_INPUT)))) && ((*(R12 *)rt_nil_check(l_Y_1277))).f_HASMV))
{
{ R23 rv1282 = ({ R23 rc1283; memset(&rc1283, 0, sizeof rc1283);  rc1283.f_OK = 1; rc1283.f_V = ((*(R12 *)rt_nil_check(l_Y_1277))).f_MV; rc1283; });
return rv1282; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1277))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1284 = ({ R23 rc1285; memset(&rc1285, 0, sizeof rc1285);  rc1285.f_OK = 1; rc1285.f_V = ((*(R12 *)rt_nil_check(l_Y_1277))).f_MV; rc1285; });
return rv1284; }
}
}
}
}
}
else if ((l_K_1220 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1286 = ({ R23 rc1287; memset(&rc1287, 0, sizeof rc1287);  rc1287.f_OK = 1; rc1287.f_V = ((*(R12 *)rt_nil_check(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc1287; });
return rv1286; }
}
}
else if ((l_K_1220 == g_N_FIELD))
{
{ R23 rv1288 = r_ATTR_MANIFEST(p_E);
return rv1288; }
}
else if ((l_K_1220 == g_N_APPLY))
{
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R23 rv1289 = ({ R23 rc1290; memset(&rc1290, 0, sizeof rc1290);  rc1290.f_OK = 1; rc1290.f_V = r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK); rc1290; });
return rv1289; }
}
}
{ R23 rv1291 = l_NO_1221;
return rv1291; }
rt_raise(RT_X_INIT);
}
static R23 r_ATTR_MANIFEST(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1292; memset(&l_A_1292, 0, sizeof l_A_1292);
l_A_1292 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R9 l_NAME_1293; memset(&l_NAME_1293, 0, sizeof l_NAME_1293);
S_R9(&l_NAME_1293, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R22 * l_T_1294; memset(&l_T_1294, 0, sizeof l_T_1294);
l_T_1294 = NULL;
if ((((*(R21 *)rt_nil_check(l_A_1292))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1292))).f_A))).f_KIND == g_N_FIELD))
{
{
R21 * l_INNER_1295; memset(&l_INNER_1295, 0, sizeof l_INNER_1295);
l_INNER_1295 = ((*(R21 *)rt_nil_check(l_A_1292))).f_A;
if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1295))).f_NAME, rt_str("LENGTH", 6)))
{
if (r_TEQS(l_NAME_1293, rt_str("MAX", 3)))
{
{ R23 rv1296 = r_SOME(r_MAX_LENGTH());
return rv1296; }
}
else if (r_TEQS(l_NAME_1293, rt_str("MIN", 3)))
{
{ R23 rv1297 = r_SOME(((rt_int)0LL));
return rv1297; }
}
}
else if ((r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1295))).f_NAME, rt_str("NOM_PRECISION", 13)) || r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1295))).f_NAME, rt_str("IMP_PRECISION", 13))))
{
if (r_TEQS(l_NAME_1293, rt_str("MAX", 3)))
{
{ R23 rv1298 = r_SOME(r_MAX_FLOAT_PRECISION());
return rv1298; }
}
else if (r_TEQS(l_NAME_1293, rt_str("MIN", 3)))
{
{ R23 rv1299 = r_SOME(((rt_int)1LL));
return rv1299; }
}
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1295))).f_NAME, rt_str("SCALE", 5)))
{
if (r_TEQS(l_NAME_1293, rt_str("MAX", 3)))
{
{ R23 rv1300 = r_SOME(((rt_int)1000LL));
return rv1300; }
}
else if (r_TEQS(l_NAME_1293, rt_str("MIN", 3)))
{
{ R23 rv1301 = r_SOME(rt_neg(((rt_int)1000LL)));
return rv1301; }
}
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1295))).f_NAME, rt_str("RADIX", 5)))
{
if (r_TEQS(l_NAME_1293, rt_str("MAX", 3)))
{
{ R23 rv1302 = r_SOME(((rt_int)1000LL));
return rv1302; }
}
else if (r_TEQS(l_NAME_1293, rt_str("MIN", 3)))
{
{ R23 rv1303 = r_SOME(((rt_int)2LL));
return rv1303; }
}
}
}
}
}
if (((((*(R21 *)rt_nil_check(l_A_1292))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_A_1292))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_1304; memset(&l_Y_1304, 0, sizeof l_Y_1304);
l_Y_1304 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1292))).f_NAME);
if ((l_Y_1304 == NULL))
{
{ R23 rv1305 = r_NO_MVAL();
return rv1305; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1304))).f_KIND == g_Y_TYPE))
{
l_T_1294 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(l_A_1292))).f_NAME, ((*(R21 *)rt_nil_check(l_A_1292))).f_LINE);
}
else if ((((((*(R12 *)rt_nil_check(l_Y_1304))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1304))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1304))).f_KIND == g_Y_GEN)))
{
l_T_1294 = ((*(R12 *)rt_nil_check(l_Y_1304))).f_T;
}
else
{
{ R23 rv1306 = r_NO_MVAL();
return rv1306; }
}
}
}
else if ((((*(R21 *)rt_nil_check(l_A_1292))).f_KIND == g_N_INT))
{
if ((r_TEQS(l_NAME_1293, rt_str("MIN", 3)) || r_TEQS(l_NAME_1293, rt_str("MAX", 3))))
{
{ R23 rv1307 = r_SOME(((*(R21 *)rt_nil_check(l_A_1292))).f_IV);
return rv1307; }
}
l_T_1294 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
else if ((((((((((((((*(R21 *)rt_nil_check(l_A_1292))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(l_A_1292))).f_KIND == g_N_BINOP)) || (((*(R21 *)rt_nil_check(l_A_1292))).f_KIND == g_N_UNOP)) || (((*(R21 *)rt_nil_check(l_A_1292))).f_KIND == g_N_FIELD)) || (((*(R21 *)rt_nil_check(l_A_1292))).f_KIND == g_N_INDEX)) || (((*(R21 *)rt_nil_check(l_A_1292))).f_KIND == g_N_APPLY)) || (((*(R21 *)rt_nil_check(l_A_1292))).f_KIND == g_N_REAL)) || (((*(R21 *)rt_nil_check(l_A_1292))).f_KIND == g_N_STR)) || (((*(R21 *)rt_nil_check(l_A_1292))).f_KIND == g_N_SUBSTR)) || (((*(R21 *)rt_nil_check(l_A_1292))).f_KIND == g_N_DEREF)) || (((*(R21 *)rt_nil_check(l_A_1292))).f_KIND == g_N_TYPESPEC)))
{
if ((((*(R21 *)rt_nil_check(l_A_1292))).f_KIND == g_N_PAREN))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1292))).f_A))).f_KIND == g_N_INT) && ((r_TEQS(l_NAME_1293, rt_str("MIN", 3)) || r_TEQS(l_NAME_1293, rt_str("MAX", 3))))))
{
{ R23 rv1308 = r_SOME(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1292))).f_A))).f_IV);
return rv1308; }
}
}
{
R14 l_SAVED_CODE_1309; memset(&l_SAVED_CODE_1309, 0, sizeof l_SAVED_CODE_1309);
S_R14(&l_SAVED_CODE_1309, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1310; memset(&rc1310, 0, sizeof rc1310);  rc1310.f_HEAD = NULL; rc1310.f_TAIL = NULL; rc1310; }), 0);
l_T_1294 = (r_EXPR(l_A_1292, NULL)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1309, 0);
}
}
else
{
{ R23 rv1311 = r_NO_MVAL();
return rv1311; }
}
if ((l_T_1294 == NULL))
{
{ R23 rv1312 = r_NO_MVAL();
return rv1312; }
}
{ R23 rv1313 = r_TYPE_ATTR_MANIFEST(l_T_1294, l_NAME_1293);
return rv1313; }
rt_raise(RT_X_INIT);
}
static R23 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R9 p_NAME) { RT_B_TICK(); 
R22 * l_T_1314; memset(&l_T_1314, 0, sizeof l_T_1314);
l_T_1314 = r_REAL_TYPE(p_T0);
rt_int l_K_1315; memset(&l_K_1315, 0, sizeof l_K_1315);
l_K_1315 = ((*(R22 *)rt_nil_check(l_T_1314))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R23 rv1316 = r_STATIC_SIZE(p_T0);
return rv1316; }
}
if ((l_K_1315 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R23 rv1317 = r_SOME(((*(R22 *)rt_nil_check(l_T_1314))).f_SCALE);
return rv1317; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1318 = r_SOME(((rt_int)2LL));
return rv1318; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && ((((*(R22 *)rt_nil_check(l_T_1314))).f_LO_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1319 = ((*(R22 *)rt_nil_check(l_T_1314))).f_MLO;
return rv1319; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && ((((*(R22 *)rt_nil_check(l_T_1314))).f_HI_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1320 = ((*(R22 *)rt_nil_check(l_T_1314))).f_MHI;
return rv1320; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && (((*(R22 *)rt_nil_check(l_T_1314))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1321 = r_SOME(r_STD_MIN());
return rv1321; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && (((*(R22 *)rt_nil_check(l_T_1314))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1322 = r_SOME(r_STD_MAX());
return rv1322; }
}
}
else if ((l_K_1315 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R23 rv1323 = r_SOME(((*(R22 *)rt_nil_check(l_T_1314))).f_SCALE);
return rv1323; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R23 rv1324 = r_SOME(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1314))).f_SCALE));
return rv1324; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1325 = r_SOME(((rt_int)2LL));
return rv1325; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R23 rv1326 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1314))).f_SCALE, p_NAME));
return rv1326; }
}
}
else if ((l_K_1315 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1314))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1327 = ((*(R22 *)rt_nil_check(l_T_1314))).f_MLO;
return rv1327; }
}
{ R23 rv1328 = r_SOME(((rt_int)0LL));
return rv1328; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1314))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1329 = ((*(R22 *)rt_nil_check(l_T_1314))).f_MHI;
return rv1329; }
}
{ R23 rv1330 = r_SOME(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1314))).f_BASE))).f_NLITS, ((rt_int)1LL)));
return rv1330; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1314))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ R23 rv1331 = r_SOME(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1314))).f_BASE))).f_NLITS);
return rv1331; }
}
if (((((*(R22 *)rt_nil_check(l_T_1314))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_T_1314))).f_MHI).f_OK))
{
{ R23 rv1332 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R22 *)rt_nil_check(l_T_1314))).f_MHI).f_V, (((*(R22 *)rt_nil_check(l_T_1314))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1332; }
}
}
}
else if (((l_K_1315 == g_T_STR) || (l_K_1315 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R23 rv1333 = ((*(R22 *)rt_nil_check(l_T_1314))).f_MLEN;
return rv1333; }
}
}
else if ((l_K_1315 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R23 rv1334 = r_SOME(((*(R22 *)rt_nil_check(l_T_1314))).f_DIMS);
return rv1334; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1314))).f_DIMS == ((rt_int)1LL))))
{
if (((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1314))).f_BOUNDS))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1314))).f_BOUNDS))).f_MHI).f_OK))
{
{ R23 rv1335 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1314))).f_BOUNDS))).f_MHI).f_V, (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1314))).f_BOUNDS))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1335; }
}
}
}
else if ((l_K_1315 == g_T_REC))
{
{
R24 * l_F_1336; memset(&l_F_1336, 0, sizeof l_F_1336);
l_F_1336 = ((*(R22 *)rt_nil_check(l_T_1314))).f_FIELDS;
R25 * l_B_1337; memset(&l_B_1337, 0, sizeof l_B_1337);
l_B_1337 = ((*(R22 *)rt_nil_check(l_T_1314))).f_ARGS;
for (;;) {
if (((l_F_1336 == NULL) || (l_B_1337 == NULL))) goto L_end1338;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1336))).f_KIND == ((rt_int)0LL))))
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1336))).f_NAME, p_NAME))
{
if (((*(R25 *)rt_nil_check(l_B_1337))).f_ANYARG)
{
{ R23 rv1339 = r_NO_MVAL();
return rv1339; }
}
{ R23 rv1340 = ((*(R25 *)rt_nil_check(l_B_1337))).f_MLO;
return rv1340; }
}
l_B_1337 = ((*(R25 *)rt_nil_check(l_B_1337))).f_NEXT;
}
l_F_1336 = ((*(R24 *)rt_nil_check(l_F_1336))).f_NEXT;
}
RT_B_TICK();
} L_end1338: ;
}
}
{ R23 rv1341 = r_NO_MVAL();
return rv1341; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_ARITH(R9 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); fr_r_MANIFEST_ARITH *F = rt_alloc(sizeof *F); (void)F; F->p_OP = p_OP; F->p_A = p_A; F->p_B = p_B; F->p_LINE = p_LINE;
F->l_R_1342 = ((rt_int)0LL);
{ rt_frame xf1343; if (RT_TRY(xf1343)) {
{
if (r_TEQS(F->p_OP, rt_str("+", 1)))
{
F->l_R_1342 = rt_add(F->p_A, F->p_B);
}
else if (r_TEQS(F->p_OP, rt_str("-", 1)))
{
F->l_R_1342 = rt_sub(F->p_A, F->p_B);
}
else
{
F->l_R_1342 = rt_mul(F->p_A, F->p_B);
}
}
RT_POP(xf1343); } else { RT_POP(xf1343); int xf1343x = rt_xcur;
if (0 || xf1343x == x_OVERFLOW)
{
r_FAIL(F->p_LINE, rt_str("a manifest expression overflows (3.2.4.2)", 41));
}
else rt_raise(xf1343x); } }
{ rt_int rv1344 = F->l_R_1342;
return rv1344; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1345 = (!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv1345; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { RT_B_TICK(); 
if (p_B)
{
{ rt_int rv1346 = ((rt_int)1LL);
return rv1346; }
}
{ rt_int rv1347 = ((rt_int)0LL);
return rv1347; }
rt_raise(RT_X_INIT);
}
static R26 r_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_K_1348; memset(&l_K_1348, 0, sizeof l_K_1348);
l_K_1348 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_1348 == g_N_INT))
{
{ R26 rv1349 = r_MKET(r_STD_CHECK(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1349; }
}
else if ((l_K_1348 == g_N_REAL))
{
{ R26 rv1350 = r_REAL_LITERAL(p_E);
return rv1350; }
}
else if ((l_K_1348 == g_N_BOOL))
{
{ R26 rv1351 = r_MKET(r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1351; }
}
else if ((l_K_1348 == g_N_NIL))
{
{ R26 rv1352 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1352; }
}
else if ((l_K_1348 == g_N_PAREN))
{
{
R26 l_V_1353; memset(&l_V_1353, 0, sizeof l_V_1353);
S_R26(&l_V_1353, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R9(&(l_V_1353).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1353).f_C), 0);
{ R26 rv1354 = l_V_1353;
return rv1354; }
}
}
else if ((l_K_1348 == g_N_STR))
{
{ R26 rv1355 = r_STRING_LITERAL(p_E);
return rv1355; }
}
else if ((l_K_1348 == g_N_BITS))
{
{ R26 rv1356 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R21 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1356; }
}
else if ((l_K_1348 == g_N_ENUMLIT))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{ R26 rv1357 = r_NAME_EXPR(p_E, p_WANT);
return rv1357; }
}
{ R26 rv1358 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1358; }
}
else if ((l_K_1348 == g_N_RECCONS))
{
{ R26 rv1359 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1359; }
}
else if ((l_K_1348 == g_N_ARRCONS))
{
{ R26 rv1360 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1360; }
}
else if ((l_K_1348 == g_N_TYPESPEC))
{
{ R26 rv1361 = r_TYPE_SPECIFIER(p_E);
return rv1361; }
}
else if ((l_K_1348 == g_N_QUAL))
{
{
rt_int l_SAVED_1362; memset(&l_SAVED_1362, 0, sizeof l_SAVED_1362);
l_SAVED_1362 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1363; memset(&l_SAVED_Q_1363, 0, sizeof l_SAVED_Q_1363);
l_SAVED_Q_1363 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1364; memset(&l_V_1364, 0, sizeof l_V_1364);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = p_E;
if (((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN > ((rt_int)0LL)))
{
if ((!r_IS_ROUNDING_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a rounding mode is a value of ROUNDINGS (3.1.4.1): ", 51), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NATIVE_R", 8)));
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NATIVE_R", 8)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NATIVE_T", 8))))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)))
{
{
R23 l_P_1365; memset(&l_P_1365, 0, sizeof l_P_1365);
S_R23(&l_P_1365, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
}
}
S_R26(&l_V_1364, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1362;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1363;
{ R26 rv1366 = l_V_1364;
return rv1366; }
}
}
else if ((l_K_1348 == g_N_NEW))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{
R21 * l_N_1367; memset(&l_N_1367, 0, sizeof l_N_1367);
l_N_1367 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R21 *)rt_nil_check(l_N_1367))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1367))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1368 = r_EXPR(l_N_1367, p_WANT);
return rv1368; }
}
}
{ R26 rv1369 = r_NEW_EXPR(p_E, p_WANT);
return rv1369; }
}
else if ((l_K_1348 == g_N_NAME))
{
{ R26 rv1370 = r_NAME_EXPR(p_E, p_WANT);
return rv1370; }
}
else if (((l_K_1348 == g_N_APPLY) && r_IS_STD_REPTYPE(((*(R21 *)rt_nil_check(p_E))).f_NAME)))
{
if (((((((*(R21 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))) || (!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL))) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an explicit-rep-converter converts one expression [3-41]", 56));
}
{
R21 * l_R_1371; memset(&l_R_1371, 0, sizeof l_R_1371);
l_R_1371 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R21 *)rt_nil_check(l_R_1371))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1372 = r_REP_CONVERTER(l_R_1371, ((*(R21 *)rt_nil_check(p_E))).f_A, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1372; }
}
}
else if ((l_K_1348 == g_N_APPLY))
{
{
R12 * l_Y_1373; memset(&l_Y_1373, 0, sizeof l_Y_1373);
l_Y_1373 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1373 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1373))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1373))).f_KIND == g_Y_CONST)))
{
{
R21 * l_N_1374; memset(&l_N_1374, 0, sizeof l_N_1374);
l_N_1374 = r_NEW_NODE(g_N_INDEX, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
R21 * l_A_1375; memset(&l_A_1375, 0, sizeof l_A_1375);
l_A_1375 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R21 *)rt_nil_check(l_A_1375))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1374))).f_A = l_A_1375;
((*(R21 *)rt_nil_check(l_N_1374))).f_B = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1376 = r_EXPR(l_N_1374, p_WANT);
return rv1376; }
}
}
}
{ R26 rv1377 = r_CALL_EXPR(p_E, p_WANT);
return rv1377; }
}
}
else if ((l_K_1348 == g_N_FIELD))
{
{ R26 rv1378 = r_FIELD_EXPR(p_E);
return rv1378; }
}
else if ((l_K_1348 == g_N_DEREF))
{
{
R26 l_B_1379; memset(&l_B_1379, 0, sizeof l_B_1379);
S_R26(&l_B_1379, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1379).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1380; memset(&l_TT_1380, 0, sizeof l_TT_1380);
l_TT_1380 = r_TARGET((l_B_1379).f_T);
{ R26 rv1381 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1380), (l_B_1379).f_C), l_TT_1380, 1, r_NO_TEXT());
return rv1381; }
}
}
}
else if ((l_K_1348 == g_N_INDEX))
{
if (((((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_APPLY) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME))) && r_IS_REPTYPE_NAME(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME)))
{
if (((((*(R21 *)rt_nil_check(p_E))).f_B == NULL) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_NEXT == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an explicit-rep-converter converts one expression [3-41]", 56));
}
{ R26 rv1382 = r_REP_CONVERTER(((*(R21 *)rt_nil_check(p_E))).f_A, ((*(R21 *)rt_nil_check(p_E))).f_B, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1382; }
}
{ R26 rv1383 = r_INDEX_EXPR(p_E);
return rv1383; }
}
else if ((l_K_1348 == g_N_SUBSTR))
{
{
R26 l_B_1384; memset(&l_B_1384, 0, sizeof l_B_1384);
S_R26(&l_B_1384, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1385; memset(&l_BT_1385, 0, sizeof l_BT_1385);
l_BT_1385 = r_REAL_TYPE((l_B_1384).f_T);
R9 l_LO_1386; memset(&l_LO_1386, 0, sizeof l_LO_1386);
R9 l_HI_1387; memset(&l_HI_1387, 0, sizeof l_HI_1387);
if (((((*(R22 *)rt_nil_check((l_B_1384).f_T))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_MKN(rt_str("SUBSTRING_", 10)))))
{
{
R27 * l_ARGS_1388; memset(&l_ARGS_1388, 0, sizeof l_ARGS_1388);
l_ARGS_1388 = r_VAL_ARG(l_B_1384, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_C, g_M_IN, NULL)));
R12 * l_Y_1389; memset(&l_Y_1389, 0, sizeof l_Y_1389);
l_Y_1389 = r_USER_OPERATOR(r_MKN(rt_str("SUBSTRING_", 10)), l_ARGS_1388, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(l_Y_1389 == NULL)))
{
{ R26 rv1390 = r_CALL_SYM(l_Y_1389, l_ARGS_1388, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1390; }
}
if ((((*(R22 *)rt_nil_check((l_B_1384).f_T))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no operation for this abstract type: ", 37), r_MK(rt_str("SUBSTRING_", 10)));
}
}
}
if ((!(((((*(R22 *)rt_nil_check(l_BT_1385))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1385))).f_KIND == g_T_BITS)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R9(&l_LO_1386, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
S_R9(&l_HI_1387, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1385))).f_KIND == g_T_BITS))
{
{ R26 rv1391 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1384).f_C, l_LO_1386, l_HI_1387), r_BITS_TYPE(((rt_int)1LL)));
return rv1391; }
}
{
R22 * l_T_1392; memset(&l_T_1392, 0, sizeof l_T_1392);
l_T_1392 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1392))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1385))).f_BASE;
{ R26 rv1393 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1384).f_C, l_LO_1386, l_HI_1387), l_T_1392);
return rv1393; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1385))).f_KIND == g_T_BITS))
{
{ R26 rv1394 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1384).f_C, l_LO_1386, l_HI_1387), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1394; }
}
{
R22 * l_T_1395; memset(&l_T_1395, 0, sizeof l_T_1395);
l_T_1395 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1395))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1385))).f_BASE;
{ R26 rv1396 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1384).f_C, l_LO_1386, l_HI_1387), l_T_1395);
return rv1396; }
}
}
}
else if ((l_K_1348 == g_N_UNOP))
{
{ R26 rv1397 = r_UNARY(p_E);
return rv1397; }
}
else if ((l_K_1348 == g_N_BINOP))
{
{ R26 rv1398 = r_BINARY(p_E);
return rv1398; }
}
else if ((l_K_1348 == g_N_IN))
{
{ R26 rv1399 = r_IN_EXPR(p_E);
return rv1399; }
}
else if (((l_K_1348 == g_N_ANY) || (l_K_1348 == g_N_DONTCARE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((l_K_1348 == g_TS_GEN))
{
{
R21 * l_N_1400; memset(&l_N_1400, 0, sizeof l_N_1400);
l_N_1400 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R21 *)rt_nil_check(l_N_1400))).f_NAME, r_MKN(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(p_E))).f_NAME, (((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN))), 0);
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_N_1400))).f_NAME))
{
{ R26 rv1401 = r_NAME_EXPR(l_N_1400, p_WANT);
return rv1401; }
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
else if (((((l_K_1348 == g_TS_NAME) || (l_K_1348 == g_TS_ARRAY)) || (l_K_1348 == g_TS_RECORD)) || (l_K_1348 == g_TS_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R9 r_INT_EXPR(R21 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1402; memset(&l_SAVED_1402, 0, sizeof l_SAVED_1402);
l_SAVED_1402 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1403; memset(&l_SAVED_Q_1403, 0, sizeof l_SAVED_Q_1403);
l_SAVED_Q_1403 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1404; memset(&l_V_1404, 0, sizeof l_V_1404);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1404, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1402;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1403;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1404).f_T)))).f_KIND == g_T_ENUM))
{
{ R9 rv1405 = (l_V_1404).f_C;
return rv1405; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1404).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1404).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1404).f_T));
}
{ R9 rv1406 = (l_V_1404).f_C;
return rv1406; }
rt_raise(RT_X_INIT);
}
static R9 r_BOOL_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1407; memset(&l_V_1407, 0, sizeof l_V_1407);
S_R26(&l_V_1407, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1407).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1407).f_T));
}
{ R9 rv1408 = (l_V_1407).f_C;
return rv1408; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { RT_B_TICK(); 
R22 * l_T_1409; memset(&l_T_1409, 0, sizeof l_T_1409);
l_T_1409 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(l_T_1409))).f_LEN_C, r_NUM(p_LEN), 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1409))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1410 = l_T_1409;
return rv1410; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R21 * p_E) { RT_B_TICK(); 
R9 l_T_1411; memset(&l_T_1411, 0, sizeof l_T_1411);
S_R9(&l_T_1411, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1412; memset(&l_S_1412, 0, sizeof l_S_1412);
l_S_1412 = rt_b_str_new((l_T_1411).f_LEN, 0);
rt_b_assign(&l_S_1412, r_STR(l_T_1411, (l_T_1411).f_LEN));
rt_int l_POINT_1413; memset(&l_POINT_1413, 0, sizeof l_POINT_1413);
l_POINT_1413 = 0;
rt_int l_DIGITS_1414; memset(&l_DIGITS_1414, 0, sizeof l_DIGITS_1414);
l_DIGITS_1414 = ((rt_int)0LL);
{ rt_int it1416_lo = ((rt_int)0LL), it1416_hi = rt_sub((l_T_1411).f_LEN, ((rt_int)1LL));
for (rt_int it1416 = it1416_lo; it1416 <= it1416_hi; it1416++) {
{
if (rt_b_eq(rt_b_slice(l_S_1412, it1416, it1416), rt_str(".", 1)))
{
l_POINT_1413 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1412, it1416, it1416), rt_str("E", 1)))
{
goto L_end1415;
}
else
{
l_DIGITS_1414 = rt_add(l_DIGITS_1414, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it1416 == it1416_hi) break;
} } L_end1415: ;
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) || (!l_POINT_1413)))
{
r_CHECK_FIXED_LITERAL(p_E);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1417 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1411), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R21 *)rt_nil_check(p_E))).f_IV));
return rv1417; }
}
if ((!l_POINT_1413))
{
{ R26 rv1418 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1411)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1418; }
}
{
R22 * l_F_1419; memset(&l_F_1419, 0, sizeof l_F_1419);
l_F_1419 = r_NEW_TYP(g_T_FLOAT);
R9 l_C_1420; memset(&l_C_1420, 0, sizeof l_C_1420);
S_R9(&l_C_1420, l_T_1411, 0);
((*(R22 *)rt_nil_check(l_F_1419))).f_SCALE = r_MAX_INT(l_DIGITS_1414, r_QUAL_PREC());
if ((((*(R22 *)rt_nil_check(l_F_1419))).f_SCALE > r_MAX_FLOAT_PRECISION()))
{
((*(R22 *)rt_nil_check(l_F_1419))).f_SCALE = r_MAX_FLOAT_PRECISION();
}
if ((((*(R22 *)rt_nil_check(l_F_1419))).f_SCALE < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1419))).f_SCALE = ((rt_int)1LL);
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1419))).f_SCALE)))
{
((*(R22 *)rt_nil_check(l_F_1419))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_F_1419))).f_SCALE, ((rt_int)8LL));
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1419))).f_SCALE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the float-literal is outside the range of FLOAT (3.3.2)", 68));
}
if (rt_b_eq(rt_b_slice(l_S_1412, rt_sub((l_T_1411).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1411).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
S_R9(&l_C_1420, r_FMT1(rt_str("@0", 2), l_T_1411), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1412, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
S_R9(&l_C_1420, r_FMT1(rt_str("0@", 2), l_T_1411), 0);
}
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_F_1419))).f_SCALE) == ((rt_int)7LL)))
{
{ R26 rv1421 = r_MKET(r_FMT1(rt_str("((double)(float)@)", 18), l_C_1420), l_F_1419);
return rv1421; }
}
{ R26 rv1422 = r_MKET(r_FMT1(rt_str("(@)", 3), l_C_1420), l_F_1419);
return rv1422; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_LITERAL_FITS(R21 * p_E, rt_int p_P) { RT_B_TICK(); 
R9 l_T_1423; memset(&l_T_1423, 0, sizeof l_T_1423);
S_R9(&l_T_1423, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1424; memset(&l_S_1424, 0, sizeof l_S_1424);
l_S_1424 = rt_b_str_new((l_T_1423).f_LEN, 0);
rt_b_assign(&l_S_1424, r_STR(l_T_1423, (l_T_1423).f_LEN));
rt_int l_INT_1425; memset(&l_INT_1425, 0, sizeof l_INT_1425);
l_INT_1425 = ((rt_int)0LL);
rt_int l_SIG_1426; memset(&l_SIG_1426, 0, sizeof l_SIG_1426);
l_SIG_1426 = 0;
rt_int l_POINT_1427; memset(&l_POINT_1427, 0, sizeof l_POINT_1427);
l_POINT_1427 = 0;
rt_int l_LEAD_1428; memset(&l_LEAD_1428, 0, sizeof l_LEAD_1428);
l_LEAD_1428 = ((rt_int)0LL);
rt_int l_I_1429; memset(&l_I_1429, 0, sizeof l_I_1429);
l_I_1429 = ((rt_int)0LL);
rt_int l_EXP_1430; memset(&l_EXP_1430, 0, sizeof l_EXP_1430);
l_EXP_1430 = ((rt_int)0LL);
for (;;) {
if ((l_I_1429 >= (l_T_1423).f_LEN)) goto L_end1431;
{
if (rt_b_eq(rt_b_slice(l_S_1424, l_I_1429, l_I_1429), rt_str("E", 1)))
{
goto L_end1431;
}
else if (rt_b_eq(rt_b_slice(l_S_1424, l_I_1429, l_I_1429), rt_str(".", 1)))
{
l_POINT_1427 = 1;
}
else if ((!rt_b_eq(rt_b_slice(l_S_1424, l_I_1429, l_I_1429), rt_str("0", 1))))
{
if ((!l_POINT_1427))
{
l_INT_1425 = rt_add(l_INT_1425, ((rt_int)1LL));
}
l_SIG_1426 = 1;
}
else if ((l_SIG_1426 && (!l_POINT_1427)))
{
l_INT_1425 = rt_add(l_INT_1425, ((rt_int)1LL));
}
else if ((l_POINT_1427 && (!l_SIG_1426)))
{
l_LEAD_1428 = rt_add(l_LEAD_1428, ((rt_int)1LL));
}
l_I_1429 = rt_add(l_I_1429, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1431: ;
if ((!l_SIG_1426))
{
{ rt_int rv1432 = 1;
return rv1432; }
}
if ((l_I_1429 < (l_T_1423).f_LEN))
{
{
rt_int l_NEG_1433; memset(&l_NEG_1433, 0, sizeof l_NEG_1433);
l_NEG_1433 = 0;
l_I_1429 = rt_add(l_I_1429, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1424, l_I_1429, l_I_1429), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1424, l_I_1429, l_I_1429), rt_str("+", 1))))
{
l_NEG_1433 = rt_b_eq(rt_b_slice(l_S_1424, l_I_1429, l_I_1429), rt_str("-", 1));
l_I_1429 = rt_add(l_I_1429, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1429 >= (l_T_1423).f_LEN)) goto L_end1434;
{
if ((l_EXP_1430 <= ((rt_int)100000LL)))
{
l_EXP_1430 = rt_add(rt_mul(l_EXP_1430, ((rt_int)10LL)), (rt_sub(r_CODE_OF(rt_b_slice(l_S_1424, l_I_1429, l_I_1429)), ((rt_int)48LL))));
}
l_I_1429 = rt_add(l_I_1429, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1434: ;
if (l_NEG_1433)
{
l_EXP_1430 = rt_neg(l_EXP_1430);
}
}
}
{
rt_int l_D_1435; memset(&l_D_1435, 0, sizeof l_D_1435);
l_D_1435 = rt_add(rt_sub(l_INT_1425, ((rt_int)1LL)), l_EXP_1430);
rt_int l_LIM_1436; memset(&l_LIM_1436, 0, sizeof l_LIM_1436);
l_LIM_1436 = ((rt_int)308LL);
if ((l_INT_1425 == ((rt_int)0LL)))
{
l_D_1435 = rt_add(rt_sub(rt_neg(l_LEAD_1428), ((rt_int)1LL)), l_EXP_1430);
}
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
l_LIM_1436 = ((rt_int)38LL);
}
{ rt_int rv1437 = ((l_D_1435 <= l_LIM_1436) && (l_D_1435 >= rt_add(rt_neg(l_LIM_1436), ((rt_int)1LL))));
return rv1437; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_LITERAL(R21 * p_E) { RT_B_TICK(); 
R9 l_T_1438; memset(&l_T_1438, 0, sizeof l_T_1438);
S_R9(&l_T_1438, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1439; memset(&l_S_1439, 0, sizeof l_S_1439);
l_S_1439 = rt_b_str_new((l_T_1438).f_LEN, 0);
rt_b_assign(&l_S_1439, r_STR(l_T_1438, (l_T_1438).f_LEN));
rt_int l_SIG_1440; memset(&l_SIG_1440, 0, sizeof l_SIG_1440);
l_SIG_1440 = ((rt_int)0LL);
rt_int l_FRAC_1441; memset(&l_FRAC_1441, 0, sizeof l_FRAC_1441);
l_FRAC_1441 = ((rt_int)0LL);
rt_int l_POINT_1442; memset(&l_POINT_1442, 0, sizeof l_POINT_1442);
l_POINT_1442 = 0;
rt_int l_EXP_1443; memset(&l_EXP_1443, 0, sizeof l_EXP_1443);
l_EXP_1443 = ((rt_int)0LL);
rt_int l_I_1444; memset(&l_I_1444, 0, sizeof l_I_1444);
l_I_1444 = ((rt_int)0LL);
for (;;) {
if ((l_I_1444 >= (l_T_1438).f_LEN)) goto L_end1445;
{
if (rt_b_eq(rt_b_slice(l_S_1439, l_I_1444, l_I_1444), rt_str("E", 1)))
{
goto L_end1445;
}
if (rt_b_eq(rt_b_slice(l_S_1439, l_I_1444, l_I_1444), rt_str(".", 1)))
{
l_POINT_1442 = 1;
}
else
{
if (((l_SIG_1440 > ((rt_int)0LL)) || (!rt_b_eq(rt_b_slice(l_S_1439, l_I_1444, l_I_1444), rt_str("0", 1)))))
{
l_SIG_1440 = rt_add(l_SIG_1440, ((rt_int)1LL));
}
if (l_POINT_1442)
{
l_FRAC_1441 = rt_add(l_FRAC_1441, ((rt_int)1LL));
}
}
l_I_1444 = rt_add(l_I_1444, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1445: ;
if ((rt_sub(l_I_1444, r_BOOL_INT(l_POINT_1442)) > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a fixed-literal has at most 1000 digits (3.2.2)", 47));
}
if ((l_I_1444 < (l_T_1438).f_LEN))
{
{
rt_int l_NEG_1446; memset(&l_NEG_1446, 0, sizeof l_NEG_1446);
l_NEG_1446 = 0;
l_I_1444 = rt_add(l_I_1444, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1439, l_I_1444, l_I_1444), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1439, l_I_1444, l_I_1444), rt_str("+", 1))))
{
l_NEG_1446 = rt_b_eq(rt_b_slice(l_S_1439, l_I_1444, l_I_1444), rt_str("-", 1));
l_I_1444 = rt_add(l_I_1444, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1444 >= (l_T_1438).f_LEN)) goto L_end1447;
{
if ((l_EXP_1443 <= ((rt_int)1000LL)))
{
l_EXP_1443 = rt_sub(rt_add(rt_mul(l_EXP_1443, ((rt_int)10LL)), r_CODE_OF(rt_b_slice(l_S_1439, l_I_1444, l_I_1444))), ((rt_int)48LL));
}
l_I_1444 = rt_add(l_I_1444, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1447: ;
if ((l_EXP_1443 > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the exponent of a literal must not exceed 1000 (3.2.2)", 54));
}
if (l_NEG_1446)
{
l_EXP_1443 = rt_neg(l_EXP_1443);
}
}
}
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) && (((((*(R21 *)rt_nil_check(p_E))).f_IV > ((rt_int)1000LL)) || (((*(R21 *)rt_nil_check(p_E))).f_IV < rt_neg(((rt_int)1000LL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a literal must not exceed 1000 (3.2.2)", 51));
}
if ((l_SIG_1440 > ((rt_int)0LL)))
{
{
rt_int l_P10_1448; memset(&l_P10_1448, 0, sizeof l_P10_1448);
l_P10_1448 = rt_sub(rt_add(rt_sub(l_SIG_1440, ((rt_int)1LL)), l_EXP_1443), l_FRAC_1441);
rt_int l_BITS_1449; memset(&l_BITS_1449, 0, sizeof l_BITS_1449);
l_BITS_1449 = rt_add(rt_quot((rt_mul(l_P10_1448, ((rt_int)3321928LL))), ((rt_int)1000000LL)), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
if ((l_P10_1448 < ((rt_int)0LL)))
{
l_BITS_1449 = rt_add(rt_neg((rt_quot((rt_add(rt_mul(rt_neg(l_P10_1448), ((rt_int)3321929LL)), ((rt_int)999999LL))), ((rt_int)1000000LL)))), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
}
if ((l_BITS_1449 >= ((rt_int)63LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the literal is outside FIXED_MIN .. FIXED_MAX (3.2.2)", 66));
}
}
}
}
static R26 r_STRING_LITERAL(R21 * p_E) { RT_B_TICK(); 
R22 * l_CS_1450; memset(&l_CS_1450, 0, sizeof l_CS_1450);
l_CS_1450 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R21 * l_P_1451; memset(&l_P_1451, 0, sizeof l_P_1451);
l_P_1451 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R9 l_S_1452; memset(&l_S_1452, 0, sizeof l_S_1452);
S_R9(&l_S_1452, r_MK(rt_str("", 0)), 0);
if (((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN == ((rt_int)0LL)))
{
l_CS_1450 = r_DEFAULT_CHARSET(((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
else
{
{
R12 * l_Y_1453; memset(&l_Y_1453, 0, sizeof l_Y_1453);
l_Y_1453 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1453 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1453))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1450 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1450)))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1450 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1450)))).f_BASE;
if ((!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(l_CS_1450))).f_LITS)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a character set has a literal of the form \\'C' (3.7.2): ", 56), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
}
for (;;) {
if ((l_P_1451 == NULL)) goto L_end1454;
{
if ((((*(R21 *)rt_nil_check(l_P_1451))).f_IV == g_K_STR))
{
if ((l_CS_1450 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R9(&l_S_1452, r_CAT(l_S_1452, ((*(R21 *)rt_nil_check(l_P_1451))).f_NAME), 0);
}
else
{
{
R9 l_Q_1455; memset(&l_Q_1455, 0, sizeof l_Q_1455);
S_R9(&l_Q_1455, ((*(R21 *)rt_nil_check(l_P_1451))).f_NAME, 0);
rstr l_QS_1456; memset(&l_QS_1456, 0, sizeof l_QS_1456);
l_QS_1456 = rt_b_str_new((l_Q_1455).f_LEN, 0);
rt_b_assign(&l_QS_1456, r_STR(l_Q_1455, (l_Q_1455).f_LEN));
{ rt_int it1458_lo = ((rt_int)0LL), it1458_hi = rt_sub((l_Q_1455).f_LEN, ((rt_int)1LL));
for (rt_int it1458 = it1458_lo; it1458 <= it1458_hi; it1458++) {
{
{
R9 l_LIT_1459; memset(&l_LIT_1459, 0, sizeof l_LIT_1459);
R12 * l_Y_1460; memset(&l_Y_1460, 0, sizeof l_Y_1460);
if (rt_b_eq(rt_b_slice(l_QS_1456, it1458, it1458), rt_str("'", 1)))
{
S_R9(&l_LIT_1459, r_MKN(rt_str("\\''''", 5)), 0);
}
else
{
S_R9(&l_LIT_1459, r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1456, it1458, it1458)), rt_str("'", 1))), 0);
}
l_Y_1460 = r_FIND_LITERAL(l_LIT_1459, l_CS_1450);
if ((l_Y_1460 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1451))).f_LINE, rt_b_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1456, it1458, it1458)));
}
S_R9(&l_S_1452, r_CATS(l_S_1452, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1460))).f_MV)), 0);
}
}
RT_B_TICK();
if (it1458 == it1458_hi) break;
} } L_end1457: ;
}
}
}
else
{
{
R12 * l_Y_1461; memset(&l_Y_1461, 0, sizeof l_Y_1461);
l_Y_1461 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_P_1451))).f_NAME, l_CS_1450);
if ((l_Y_1461 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1451))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R21 *)rt_nil_check(l_P_1451))).f_NAME);
}
S_R9(&l_S_1452, r_CATS(l_S_1452, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1461))).f_MV)), 0);
}
}
l_P_1451 = ((*(R21 *)rt_nil_check(l_P_1451))).f_NEXT;
}
RT_B_TICK();
} L_end1454: ;
{
R22 * l_T_1462; memset(&l_T_1462, 0, sizeof l_T_1462);
l_T_1462 = r_STR_TYPE(r_NUM((l_S_1452).f_LEN), r_SOME((l_S_1452).f_LEN));
((*(R22 *)rt_nil_check(l_T_1462))).f_BASE = l_CS_1450;
{ R26 rv1463 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1452), r_NUM((l_S_1452).f_LEN)), l_T_1462);
return rv1463; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_TS_1464; memset(&l_TS_1464, 0, sizeof l_TS_1464);
l_TS_1464 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R9(&((*(R21 *)rt_nil_check(l_TS_1464))).f_NAME, p_NAME, 0);
{ R22 * rv1465 = r_RESOLVE(l_TS_1464);
return rv1465; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1466; memset(&l_Y_1466, 0, sizeof l_Y_1466);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1467; memset(&l_WT_1467, 0, sizeof l_WT_1467);
l_WT_1467 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1467))).f_KIND == g_T_ENUM))
{
l_Y_1466 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_WT_1467);
if ((!(l_Y_1466 == NULL)))
{
{ R26 rv1468 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1466))).f_MV), r_ENUM_RESULT(l_Y_1466, p_WANT));
return rv1468; }
}
}
}
}
l_Y_1466 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1469; memset(&l_FOUND_1469, 0, sizeof l_FOUND_1469);
l_FOUND_1469 = NULL;
rt_int l_N_1470; memset(&l_N_1470, 0, sizeof l_N_1470);
l_N_1470 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1466 == NULL)) goto L_end1471;
{
if ((((*(R12 *)rt_nil_check(l_Y_1466))).f_KIND == g_Y_ENUMLIT))
{
if ((l_FOUND_1469 == NULL))
{
l_FOUND_1469 = l_Y_1466;
}
else if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1469))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1466))).f_T))).f_BASE)))
{
l_N_1470 = rt_add(l_N_1470, ((rt_int)1LL));
}
}
l_Y_1466 = r_LOOKUP_NEXT(l_Y_1466);
}
RT_B_TICK();
} L_end1471: ;
if ((l_FOUND_1469 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1470 > ((rt_int)0LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1472 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1469))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1469))).f_T);
return rv1472; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1473 = p_WANT;
return rv1473; }
}
if ((!(((*(R22 *)rt_nil_check(p_WANT))).f_REPS == NULL)))
{
{
R22 * l_T_1474; memset(&l_T_1474, 0, sizeof l_T_1474);
l_T_1474 = r_COPY_TYP(((*(R12 *)rt_nil_check(p_Y))).f_T);
((*(R22 *)rt_nil_check(l_T_1474))).f_REPS = ((*(R22 *)rt_nil_check(p_WANT))).f_REPS;
{ R22 * rv1475 = l_T_1474;
return rv1475; }
}
}
{ R22 * rv1476 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1476; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_OBJECT(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1477; memset(&l_Y_1477, 0, sizeof l_Y_1477);
l_Y_1477 = r_LOOKUP(p_NAME);
if ((l_Y_1477 == NULL))
{
{ rt_int rv1478 = 0;
return rv1478; }
}
{ rt_int rv1479 = (((((*(R12 *)rt_nil_check(l_Y_1477))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1477))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1477))).f_KIND == g_Y_ROUTINE));
return rv1479; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STD_REPTYPE(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv1480 = (((((((((r_TEQS(p_NAME, rt_str("FIXED_STD", 9)) || r_TEQS(p_NAME, rt_str("FLOAT_STD", 9))) || r_TEQS(p_NAME, rt_str("BOOLEAN_STD", 11))) || r_TEQS(p_NAME, rt_str("ENUM_STD", 8))) || r_TEQS(p_NAME, rt_str("CHAR_STR_STD", 12))) || r_TEQS(p_NAME, rt_str("BIT_STD", 7))) || r_TEQS(p_NAME, rt_str("ARRAY_STD", 9))) || r_TEQS(p_NAME, rt_str("RECORD_STD", 10))) || r_TEQS(p_NAME, rt_str("PTR_STD", 7))) || r_TEQS(p_NAME, rt_str("SEMAPHORE_STD", 13)));
return rv1480; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_REPTYPE_NAME(R9 p_NAME) { RT_B_TICK(); 
if (((((((r_IS_STD_REPTYPE(p_NAME) || r_TEQS(p_NAME, rt_str("FIXED_REP", 9))) || r_TEQS(p_NAME, rt_str("ENUM_REP", 8))) || r_TEQS(p_NAME, rt_str("ENUM_VAL_REP", 12))) || r_TEQS(p_NAME, rt_str("CHAR_STR_REP", 12))) || r_TEQS(p_NAME, rt_str("ARRAY_REP", 9))) || r_TEQS(p_NAME, rt_str("RECORD_REP", 10))))
{
{ rt_int rv1481 = (r_LOOKUP(p_NAME) == NULL);
return rv1481; }
}
if ((!(r_ORIG_LOOKUP(p_NAME) == NULL)))
{
{ rt_int rv1482 = (((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(p_NAME)))).f_KIND == g_Y_REPTYPE);
return rv1482; }
}
{ rt_int rv1483 = 0;
return rv1483; }
rt_raise(RT_X_INIT);
}
static R26 r_REP_CONVERTER(R21 * p_S, R21 * p_E, rt_int p_LINE) { RT_B_TICK(); 
R26 l_V_1484; memset(&l_V_1484, 0, sizeof l_V_1484);
S_R26(&l_V_1484, r_EXPR(p_E, NULL), 0);
R21 * l_R_1485; memset(&l_R_1485, 0, sizeof l_R_1485);
l_R_1485 = r_NEW_NODE(g_N_REP, p_LINE);
R22 * l_T_1486; memset(&l_T_1486, 0, sizeof l_T_1486);
S_R9(&((*(R21 *)rt_nil_check(l_R_1485))).f_NAME, ((*(R21 *)rt_nil_check(p_S))).f_NAME, 0);
if ((((*(R21 *)rt_nil_check(p_S))).f_KIND == g_N_APPLY))
{
((*(R21 *)rt_nil_check(l_R_1485))).f_A = ((*(R21 *)rt_nil_check(p_S))).f_A;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1484).f_T)))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check((l_V_1484).f_T))).f_KIND == g_T_ABS)))
{
r_FAIL(p_LINE, rt_str("a representation is only for a member of a predefined type class (3.12.2)", 73));
}
l_T_1486 = r_COPY_TYP(r_REAL_TYPE((l_V_1484).f_T));
((*(R22 *)rt_nil_check(l_T_1486))).f_REPS = r_EXPAND_REP(l_R_1485, l_T_1486, p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_REPCONV = 1;
r_CHECK_REP_CLASS(l_T_1486, p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_REPCONV = 0;
if ((r_TEQS(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1486))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1486))).f_REPS))).f_A == NULL))))
{
{
R23 l_N_1487; memset(&l_N_1487, 0, sizeof l_N_1487);
S_R23(&l_N_1487, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1486))).f_REPS))).f_A), 0);
rt_int l_UNS_1488; memset(&l_UNS_1488, 0, sizeof l_UNS_1488);
l_UNS_1488 = ((rt_int)0LL);
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1486))).f_REPS))).f_A))).f_NEXT == NULL)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1486))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8)))
{
l_UNS_1488 = ((rt_int)1LL);
}
}
if ((l_N_1487).f_OK)
{
{ R26 rv1489 = r_MKET(r_FMT3(rt_str("rt_b_fixed_rep(@, @, @)", 23), (l_V_1484).f_C, r_NUM((l_N_1487).f_V), r_NUM(l_UNS_1488)), l_T_1486);
return rv1489; }
}
}
}
{ R26 rv1490 = r_MKET((l_V_1484).f_C, l_T_1486);
return rv1490; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1491; memset(&l_Y_1491, 0, sizeof l_Y_1491);
l_Y_1491 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1491 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_1491))).f_WITHV == ((rt_int)2LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the variable is named by a WITH NAMING and not known in its statement (4.5.4): ", 79), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((((((*(R12 *)rt_nil_check(l_Y_1491))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL))) && (!((*(R12 *)rt_nil_check(l_Y_1491))).f_INPUT)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type or reptype declaration is a closed scope: no variable from outside (3.12.1, 3.12.3): ", 92), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1491))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record-spec is a closed scope: no variable from outside (3.9.1): ", 67), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1491))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1491))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1492; memset(&l_WRITABLE_1492, 0, sizeof l_WRITABLE_1492);
l_WRITABLE_1492 = (r_SEG_VISIBLE(l_Y_1491, ((*(R21 *)rt_nil_check(p_E))).f_LINE) && r_CHECK_IMPORTED(l_Y_1491, ((*(R21 *)rt_nil_check(p_E))).f_LINE));
{ R26 rv1493 = r_MKLV(r_OBJ_ACCESS(l_Y_1491), ((*(R12 *)rt_nil_check(l_Y_1491))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1491))).f_KIND == g_Y_VAR) && l_WRITABLE_1492), r_NO_TEXT());
return rv1493; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1491))).f_KIND == g_Y_GEN))
{
{ R26 rv1494 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1491))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1491))).f_T);
return rv1494; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1491))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1495 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1495; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1491))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1491))).f_KIND == g_Y_BUILTIN)))
{
{
R21 * l_N_1496; memset(&l_N_1496, 0, sizeof l_N_1496);
l_N_1496 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R21 *)rt_nil_check(l_N_1496))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1497 = r_CALL_EXPR(l_N_1496, p_WANT);
return rv1497; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1498; memset(&l_A_1498, 0, sizeof l_A_1498);
l_A_1498 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))) && r_IS_NUMBER_LITERAL(l_A_1498)))
{
{ R26 rv1499 = r_EXPR(l_A_1498, NULL);
return rv1499; }
}
if ((((*(R21 *)rt_nil_check(l_A_1498))).f_KIND == g_N_INDEX))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1498))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1498))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1500; memset(&l_B_1500, 0, sizeof l_B_1500);
S_R26(&l_B_1500, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1498))).f_A))).f_A), 0);
R9 l_I_1501; memset(&l_I_1501, 0, sizeof l_I_1501);
S_R9(&l_I_1501, r_INT_EXPR(((*(R21 *)rt_nil_check(l_A_1498))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1500).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1502 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1500).f_C, l_I_1501, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1500).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1502; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1503 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1500).f_C, l_I_1501, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1500).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1503; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1498))).f_KIND == g_N_PAREN))
{
if (r_IS_TYPE_ATTR(((*(R21 *)rt_nil_check(l_A_1498))).f_A))
{
{ R26 rv1504 = r_ATTRIBUTE(r_TYPE_VALUE_OF(r_TYPE_ATTR_TYPE(((*(R21 *)rt_nil_check(l_A_1498))).f_A)), ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1504; }
}
}
if ((((*(R21 *)rt_nil_check(l_A_1498))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1498))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1498))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1498))).f_A))).f_A))).f_NAME))
{
{ R26 rv1505 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1498))).f_A))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1498))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1505; }
}
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1498))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1506; memset(&l_Y_1506, 0, sizeof l_Y_1506);
l_Y_1506 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1498))).f_NAME);
if ((!(l_Y_1506 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1506))).f_KIND == g_Y_TYPE))
{
{ R26 rv1507 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1498))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1507; }
}
}
else if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(l_A_1498))).f_NAME))
{
{ R26 rv1508 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1498))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1508; }
}
}
}
{
R26 l_B_1509; memset(&l_B_1509, 0, sizeof l_B_1509);
S_R26(&l_B_1509, r_EXPR(l_A_1498, NULL), 0);
R22 * l_BT_1510; memset(&l_BT_1510, 0, sizeof l_BT_1510);
l_BT_1510 = (l_B_1509).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1510))).f_KIND == g_T_REC))
{
{
R24 * l_F_1511; memset(&l_F_1511, 0, sizeof l_F_1511);
l_F_1511 = r_FIND_VFIELD(l_BT_1510, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1511 == NULL)))
{
r_CHECK_VARIANT(l_F_1511, l_BT_1510, l_A_1498, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R24 *)rt_nil_check(l_F_1511))).f_KIND == ((rt_int)2LL)) && r_HAS_ANY(l_BT_1510)))
{
{ R26 rv1512 = r_MKET(r_FMT2(rt_str("rt_b_tag((@).@)", 15), (l_B_1509).f_C, ((*(R24 *)rt_nil_check(l_F_1511))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1511))).f_T);
return rv1512; }
}
{ R26 rv1513 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1509).f_C, ((*(R24 *)rt_nil_check(l_F_1511))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1511))).f_T, ((l_B_1509).f_LVAL && (((*(R24 *)rt_nil_check(l_F_1511))).f_KIND == ((rt_int)0LL))), (l_B_1509).f_C);
return rv1513; }
}
}
}
{ R26 rv1514 = r_ATTRIBUTE(l_B_1509, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1514; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_FIXED_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1515 = (r_IS_FIXED_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1515; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT))
{
{ rt_int rv1516 = 1;
return rv1516; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL))
{
if ((((*(R21 *)rt_nil_check(p_A))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv1517 = 1;
return rv1517; }
}
{
rstr l_S_1518; memset(&l_S_1518, 0, sizeof l_S_1518);
l_S_1518 = rt_b_str_new((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN, 0);
rt_b_assign(&l_S_1518, r_STR(((*(R21 *)rt_nil_check(p_A))).f_NAME, (((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN));
{ rt_int it1520_lo = ((rt_int)0LL), it1520_hi = rt_sub((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN, ((rt_int)1LL));
for (rt_int it1520 = it1520_lo; it1520 <= it1520_hi; it1520++) {
{
if (rt_b_eq(rt_b_slice(l_S_1518, it1520, it1520), rt_str(".", 1)))
{
{ rt_int rv1521 = 0;
return rv1521; }
}
}
RT_B_TICK();
if (it1520 == it1520_hi) break;
} } L_end1519: ;
}
{ rt_int rv1522 = 1;
return rv1522; }
}
{ rt_int rv1523 = 0;
return rv1523; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMBER_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1524 = (r_IS_NUMBER_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1524; }
}
{ rt_int rv1525 = ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL));
return rv1525; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv1526 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1526; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R21 * p_BASE, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R23 l_TAGV_1527; memset(&l_TAGV_1527, 0, sizeof l_TAGV_1527);
S_R23(&l_TAGV_1527, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1527).f_OK))
{
r_FAILT(p_LINE, rt_b_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R24 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1527).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R23 r_TAG_VALUE(R22 * p_T, R9 p_TAGN) { RT_B_TICK(); 
R24 * l_F_1528; memset(&l_F_1528, 0, sizeof l_F_1528);
l_F_1528 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1529; memset(&l_A_1529, 0, sizeof l_A_1529);
l_A_1529 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1528 == NULL)) goto L_end1530;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1528))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1529 == NULL))
{
{ R23 rv1531 = r_NO_MVAL();
return rv1531; }
}
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1528))).f_NAME, p_TAGN))
{
if (((*(R25 *)rt_nil_check(l_A_1529))).f_ANYARG)
{
{ R23 rv1532 = r_NO_MVAL();
return rv1532; }
}
{ R23 rv1533 = ((*(R25 *)rt_nil_check(l_A_1529))).f_MLO;
return rv1533; }
}
l_A_1529 = ((*(R25 *)rt_nil_check(l_A_1529))).f_NEXT;
}
l_F_1528 = ((*(R24 *)rt_nil_check(l_F_1528))).f_NEXT;
}
RT_B_TICK();
} L_end1530: ;
{ R23 rv1534 = r_NO_MVAL();
return rv1534; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R21 * p_L, rt_int p_V, R22 * p_T) { RT_B_TICK(); 
R21 * l_P_1535; memset(&l_P_1535, 0, sizeof l_P_1535);
l_P_1535 = p_L;
for (;;) {
if ((l_P_1535 == NULL)) goto L_end1536;
{
if ((((*(R21 *)rt_nil_check(l_P_1535))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1535))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1535))).f_B, p_T)).f_V)))
{
{ rt_int rv1537 = 1;
return rv1537; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1535, p_T)).f_V == p_V))
{
{ rt_int rv1538 = 1;
return rv1538; }
}
l_P_1535 = ((*(R21 *)rt_nil_check(l_P_1535))).f_NEXT;
}
RT_B_TICK();
} L_end1536: ;
{ rt_int rv1539 = 0;
return rv1539; }
rt_raise(RT_X_INIT);
}
static R26 r_VALUE_OR_TYPE(R21 * p_E) { RT_B_TICK(); 
if (r_IS_TYPE_NAME(p_E))
{
{ R26 rv1540 = r_TYPE_VALUE(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1540; }
}
{ R26 rv1541 = r_EXPR(p_E, NULL);
return rv1541; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R21 * p_E) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1542; memset(&l_A_1542, 0, sizeof l_A_1542);
S_R26(&l_A_1542, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_A), 0);
R9 l_I_1543; memset(&l_I_1543, 0, sizeof l_I_1543);
S_R9(&l_I_1543, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1542).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1544 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1542).f_C, (l_A_1542).f_C, l_I_1543, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1542).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1544; }
}
}
}
{ R26 rv1545 = r_INDEX_EXPR2(p_E);
return rv1545; }
rt_raise(RT_X_INIT);
}
static R9 r_INDEX_VALUE(R21 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1546; memset(&l_SAVED_1546, 0, sizeof l_SAVED_1546);
l_SAVED_1546 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1547; memset(&l_SAVED_Q_1547, 0, sizeof l_SAVED_Q_1547);
l_SAVED_Q_1547 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1548; memset(&l_V_1548, 0, sizeof l_V_1548);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1548, r_EXPR(p_E, NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1546;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1547;
{ R9 rv1549 = r_INDEX_OF(l_V_1548, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1549; }
rt_raise(RT_X_INIT);
}
static R9 r_INDEX_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1550; memset(&l_T_1550, 0, sizeof l_T_1550);
l_T_1550 = r_REAL_TYPE((p_V).f_T);
if (((((*(R22 *)rt_nil_check((p_V).f_T))).f_KIND == g_T_ABS) || (((((*(R22 *)rt_nil_check(l_T_1550))).f_KIND == g_T_ENUM) && ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1550))).f_BASE))).f_UNORDERED || (!(((*(R22 *)rt_nil_check(l_T_1550))).f_REPS == NULL))))))))
{
{
R27 * l_ARGS_1551; memset(&l_ARGS_1551, 0, sizeof l_ARGS_1551);
l_ARGS_1551 = r_VAL_ARG(p_V, NULL);
R12 * l_Y_1552; memset(&l_Y_1552, 0, sizeof l_Y_1552);
l_Y_1552 = r_FIND_ROUTINE(r_MKN(rt_str("TO_FIXED", 8)), l_ARGS_1551, p_LINE, 0);
if ((l_Y_1552 == NULL))
{
r_FAILT(p_LINE, rt_str("an index of this type needs a TO_FIXED of the program (3.8.1): ", 63), r_TYPE_NAME((p_V).f_T));
}
{ R9 rv1553 = (r_CALL_SYM(l_Y_1552, l_ARGS_1551, p_LINE)).f_C;
return rv1553; }
}
}
if ((((*(R22 *)rt_nil_check(l_T_1550))).f_KIND == g_T_ENUM))
{
{ R9 rv1554 = (p_V).f_C;
return rv1554; }
}
if (((!(((*(R22 *)rt_nil_check(l_T_1550))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_1550))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(p_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((p_V).f_T));
}
{ R9 rv1555 = (p_V).f_C;
return rv1555; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R21 * p_E) { RT_B_TICK(); 
R26 l_B_1556; memset(&l_B_1556, 0, sizeof l_B_1556);
S_R26(&l_B_1556, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1557; memset(&l_T_1557, 0, sizeof l_T_1557);
l_T_1557 = r_REAL_TYPE((l_B_1556).f_T);
R21 * l_S_1558; memset(&l_S_1558, 0, sizeof l_S_1558);
l_S_1558 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R9 l_IX_1559; memset(&l_IX_1559, 0, sizeof l_IX_1559);
S_R9(&l_IX_1559, r_MK(rt_str("", 0)), 0);
rt_int l_N_1560; memset(&l_N_1560, 0, sizeof l_N_1560);
l_N_1560 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1557))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1558 == NULL)) goto L_end1561;
{
if ((l_N_1560 > ((rt_int)0LL)))
{
S_R9(&l_IX_1559, r_CATS(l_IX_1559, rt_str(", ", 2)), 0);
}
S_R9(&l_IX_1559, r_CAT(l_IX_1559, r_INDEX_VALUE(l_S_1558)), 0);
l_N_1560 = rt_add(l_N_1560, ((rt_int)1LL));
l_S_1558 = ((*(R21 *)rt_nil_check(l_S_1558))).f_NEXT;
}
RT_B_TICK();
} L_end1561: ;
if ((!(l_N_1560 == ((*(R22 *)rt_nil_check(l_T_1557))).f_DIMS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1560 == ((rt_int)1LL)))
{
{ R26 rv1562 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1556).f_C, l_IX_1559, (l_B_1556).f_C, (l_B_1556).f_C), ((*(R22 *)rt_nil_check(l_T_1557))).f_ELEM, (l_B_1556).f_LVAL, r_NO_TEXT());
return rv1562; }
}
{
R9 l_X_1563; memset(&l_X_1563, 0, sizeof l_X_1563);
S_R9(&l_X_1563, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1556).f_C, r_NUM(l_N_1560), (l_B_1556).f_C, (l_B_1556).f_C), 0);
{ R26 rv1564 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1563, l_IX_1559), ((*(R22 *)rt_nil_check(l_T_1557))).f_ELEM, (l_B_1556).f_LVAL, r_NO_TEXT());
return rv1564; }
}
rt_raise(RT_X_INIT);
}
static R9 r_OP_NAME(R9 p_OP, rt_int p_UNARY) { RT_B_TICK(); 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R9 rv1565 = r_MKN(rt_str("NEGATE_", 7));
return rv1565; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R9 rv1566 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1566; }
}
{ R9 rv1567 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1567; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R9 rv1568 = r_MKN(rt_str("ADD_", 4));
return rv1568; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R9 rv1569 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1569; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R9 rv1570 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1570; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R9 rv1571 = r_MKN(rt_str("DIVIDE_", 7));
return rv1571; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R9 rv1572 = r_MKN(rt_str("MODULUS_", 8));
return rv1572; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R9 rv1573 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1573; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R9 rv1574 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1574; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R9 rv1575 = r_MKN(rt_str("EQUAL_", 6));
return rv1575; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R9 rv1576 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1576; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R9 rv1577 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1577; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R9 rv1578 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1578; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R9 rv1579 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1579; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R9 rv1580 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1580; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R9 rv1581 = r_MKN(rt_str("AND_", 4));
return rv1581; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R9 rv1582 = r_MKN(rt_str("OR_", 3));
return rv1582; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R9 rv1583 = r_MKN(rt_str("XOR_", 4));
return rv1583; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R9 rv1584 = r_MKN(rt_str("IMPLIES_", 8));
return rv1584; }
}
{ R9 rv1585 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1585; }
rt_raise(RT_X_INIT);
}
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1586; memset(&l_A_1586, 0, sizeof l_A_1586);
l_A_1586 = ((R27 *)rt_b_new(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1586)), ({ R27 rc1587; memset(&rc1587, 0, sizeof rc1587);  rc1587.f_E = NULL; S_R26(&rc1587.f_V, p_V, 0); rc1587.f_HAVE = 1; rc1587.f_MODE = g_M_IN; rc1587.f_NEXT = p_NEXT; rc1587; }), 0);
{ R27 * rv1588 = l_A_1586;
return rv1588; }
rt_raise(RT_X_INIT);
}
static R27 * r_NODE_ARG(R21 * p_E, rt_int p_MODE, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1589; memset(&l_A_1589, 0, sizeof l_A_1589);
l_A_1589 = ((R27 *)rt_b_new(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1589)), ({ R27 rc1590; memset(&rc1590, 0, sizeof rc1590);  rc1590.f_E = p_E; S_R26(&rc1590.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1590.f_HAVE = 0; rc1590.f_MODE = p_MODE; rc1590.f_NEXT = p_NEXT; rc1590; }), 0);
{ R27 * rv1591 = l_A_1589;
return rv1591; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R9 p_NAME, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1592; memset(&l_Y_1592, 0, sizeof l_Y_1592);
l_Y_1592 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1592 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1592 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1593 = l_Y_1592;
return rv1593; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_USER_ROUTINE(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1594; memset(&l_Y_1594, 0, sizeof l_Y_1594);
l_Y_1594 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_1594 == NULL)) goto L_end1595;
{
if ((((*(R12 *)rt_nil_check(l_Y_1594))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1596 = 1;
return rv1596; }
}
l_Y_1594 = r_LOOKUP_NEXT(l_Y_1594);
}
RT_B_TICK();
} L_end1595: ;
l_Y_1594 = r_LOOKUP(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))));
for (;;) {
if ((l_Y_1594 == NULL)) goto L_end1597;
{
if ((((*(R12 *)rt_nil_check(l_Y_1594))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1598 = 1;
return rv1598; }
}
l_Y_1594 = r_LOOKUP_NEXT(l_Y_1594);
}
RT_B_TICK();
} L_end1597: ;
{ rt_int rv1599 = 0;
return rv1599; }
rt_raise(RT_X_INIT);
}
static R27 * r_QUAL_ARGS(rt_int p_LINE) { RT_B_TICK(); 
R21 * l_Q_1600; memset(&l_Q_1600, 0, sizeof l_Q_1600);
l_Q_1600 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_R_1601; memset(&l_R_1601, 0, sizeof l_R_1601);
l_R_1601 = NULL;
if ((l_Q_1600 == NULL))
{
{ R27 * rv1602 = NULL;
return rv1602; }
}
if (((((*(R21 *)rt_nil_check(l_Q_1600))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_R_1601 = r_VAL_ARG(r_ENUM_LITERAL(r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_Q_1600))).f_NAME, (((*(R21 *)rt_nil_check(l_Q_1600))).f_NAME).f_LEN), p_LINE), r_ROUNDINGS_TYPE()), NULL);
}
if ((!(((*(R21 *)rt_nil_check(l_Q_1600))).f_B == NULL)))
{
l_R_1601 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(l_Q_1600))).f_B, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_R_1601);
}
{ R27 * rv1603 = l_R_1601;
return rv1603; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R9 p_NAME, R26 p_A, R21 * p_B, R21 * p_C, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_ARGS_1604; memset(&l_ARGS_1604, 0, sizeof l_ARGS_1604);
l_ARGS_1604 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1605; memset(&l_Y_1605, 0, sizeof l_Y_1605);
l_Y_1605 = r_USER_OPERATOR(p_NAME, l_ARGS_1604, p_LINE);
if ((l_Y_1605 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1606 = r_CALL_SYM(l_Y_1605, l_ARGS_1604, p_LINE);
return rv1606; }
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
{ R9 rv1607 = p_C;
return rv1607; }
}
if ((p_STO > p_SFROM))
{
{ R9 rv1608 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1608; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R9 rv1609 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1609; }
}
{ R9 rv1610 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1610; }
rt_raise(RT_X_INIT);
}
static R9 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R9 rv1611 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1611; }
rt_raise(RT_X_INIT);
}
static R9 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R9 p_SELF) { RT_B_TICK(); 
R22 * l_RT_1612; memset(&l_RT_1612, 0, sizeof l_RT_1612);
l_RT_1612 = r_REAL_TYPE(p_T);
R22 * l_VT_1613; memset(&l_VT_1613, 0, sizeof l_VT_1613);
l_VT_1613 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1613))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1612))).f_KIND == g_T_PTR)))
{
{ R9 rv1614 = (p_V).f_C;
return rv1614; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1613))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1613)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R9 rv1615 = (p_V).f_C;
return rv1615; }
}
if ((!r_SAME_CLASS(l_RT_1612, l_VT_1613)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1613), (r_TYPE_NAME(l_VT_1613)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1612), (r_TYPE_NAME(l_RT_1612)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1612))).f_KIND == g_T_INT))
{
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_RT_1612))).f_SCALE))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE == ((*(R22 *)rt_nil_check(l_RT_1612))).f_SCALE))
{
{ R9 rv1616 = r_RANGE_CHECK(l_RT_1612, (p_V).f_C, p_SELF);
return rv1616; }
}
{ R9 rv1617 = r_RANGE_CHECK(l_RT_1612, r_FMT3(rt_str("rt_b_conv(@, @, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(l_RT_1612))).f_SCALE)), p_SELF);
return rv1617; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1612))).f_KIND == g_T_FLOAT))
{
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_RT_1612))).f_SCALE) < r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1613))).f_SCALE)))
{
{ R9 rv1618 = r_RANGE_CHECK(l_RT_1612, r_FMT3(rt_str("rt_b_fconv(@, @, @, 1)", 22), (p_V).f_C, r_SINGLE_C(((*(R22 *)rt_nil_check(l_RT_1612))).f_SCALE), r_FLOAT_TRUNC()), p_SELF);
return rv1618; }
}
{ R9 rv1619 = r_RANGE_CHECK(l_RT_1612, (p_V).f_C, p_SELF);
return rv1619; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1612))).f_KIND == g_T_ENUM))
{
if (((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1612))).f_BASE))).f_UNORDERED && ((r_HAS_VALUES(l_RT_1612) || r_HAS_VALUES(l_VT_1613)))) && (!r_SAME_REPS(l_RT_1612, l_VT_1613))))
{
r_FAIL(p_LINE, rt_str("an UNORDERED value with ENUM_VAL_REP is assigned only with the same reptype (3.4.5)", 83));
}
{ R9 rv1620 = r_RANGE_CHECK(l_RT_1612, (p_V).f_C, p_SELF);
return rv1620; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1612))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1612))).f_KIND == g_T_BITS)))
{
r_SAME_CHARSET(l_RT_1612, l_VT_1613, p_LINE);
if (((((*(R22 *)rt_nil_check(l_RT_1612))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1613))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1612))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1613))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1612))).f_KIND == g_T_PTR))
{
if ((!r_IDENTICAL_TYPE(r_TARGET(l_RT_1612), r_TARGET(l_VT_1613))))
{
r_FAIL(p_LINE, rt_str("the ELEMENT_TYPE of the pointers are not identical (3.10.5)", 59));
}
{ R9 rv1621 = r_TARGET_ARGS_CHECK(r_TARGET(l_RT_1612), r_TARGET(l_VT_1613), (p_V).f_C);
return rv1621; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1612))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1612)) && (!r_HAS_ANY(l_VT_1613))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1612))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1613))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1612))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1612))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1613))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
if ((!r_SAME_EXTENTS(l_RT_1612, l_VT_1613)))
{
r_FAIL(p_LINE, rt_str("the arrays have different EXTENT attributes (3.8.5)", 51));
}
}
{ R9 rv1622 = (p_V).f_C;
return rv1622; }
rt_raise(RT_X_INIT);
}
static R9 r_STORE_CODE(R22 * p_T, R9 p_LV, R26 p_V, rt_int p_LINE, R9 p_SELF) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1623; memset(&l_ARGS_1623, 0, sizeof l_ARGS_1623);
l_ARGS_1623 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1624; memset(&l_Y_1624, 0, sizeof l_Y_1624);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_SQUAL == NULL)))
{
{
R21 * l_SAVED_Q_1625; memset(&l_SAVED_Q_1625, 0, sizeof l_SAVED_Q_1625);
l_SAVED_Q_1625 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_X_1626; memset(&l_X_1626, 0, sizeof l_X_1626);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
l_X_1626 = r_QUAL_ARGS(p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1625;
if ((!(l_X_1626 == NULL)))
{
{
R27 * l_P_1627; memset(&l_P_1627, 0, sizeof l_P_1627);
l_P_1627 = l_X_1626;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_P_1627))).f_NEXT == NULL)) goto L_end1628;
{
l_P_1627 = ((*(R27 *)rt_nil_check(l_P_1627))).f_NEXT;
}
RT_B_TICK();
} L_end1628: ;
((*(R27 *)rt_nil_check(l_P_1627))).f_NEXT = ((*(R27 *)rt_nil_check(l_ARGS_1623))).f_NEXT;
((*(R27 *)rt_nil_check(l_ARGS_1623))).f_NEXT = l_X_1626;
}
}
}
}
{
R27 * l_LAST_1629; memset(&l_LAST_1629, 0, sizeof l_LAST_1629);
l_LAST_1629 = l_ARGS_1623;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_LAST_1629))).f_NEXT == NULL)) goto L_end1630;
{
l_LAST_1629 = ((*(R27 *)rt_nil_check(l_LAST_1629))).f_NEXT;
}
RT_B_TICK();
} L_end1630: ;
((*(R27 *)rt_nil_check(l_LAST_1629))).f_MODE = g_M_OUT;
l_Y_1624 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1623, p_LINE, 0);
if ((l_Y_1624 == NULL))
{
((*(R27 *)rt_nil_check(l_LAST_1629))).f_MODE = g_M_INOUT;
l_Y_1624 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1623, p_LINE, 0);
}
}
if ((l_Y_1624 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R9 rv1631 = r_CATS((r_CALL_SYM(l_Y_1624, l_ARGS_1623, p_LINE)).f_C, rt_str(";", 1));
return rv1631; }
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
if ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, (p_V).f_T)))
{
{ R9 rv1632 = r_COMPONENT_STORE(p_T, (p_V).f_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF), p_LINE);
return rv1632; }
}
}
{ R9 rv1633 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1633; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ABS_PART(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ rt_int rv1634 = 1;
return rv1634; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{ rt_int rv1635 = r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM);
return rv1635; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R24 * l_F_1636; memset(&l_F_1636, 0, sizeof l_F_1636);
l_F_1636 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1636 == NULL)) goto L_end1637;
{
if ((((*(R24 *)rt_nil_check(l_F_1636))).f_KIND == ((rt_int)0LL)))
{
if (r_HAS_ABS_PART(((*(R24 *)rt_nil_check(l_F_1636))).f_T))
{
{ rt_int rv1638 = 1;
return rv1638; }
}
}
l_F_1636 = ((*(R24 *)rt_nil_check(l_F_1636))).f_NEXT;
}
RT_B_TICK();
} L_end1637: ;
}
}
{ rt_int rv1639 = 0;
return rv1639; }
rt_raise(RT_X_INIT);
}
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT) { RT_B_TICK(); 
if (((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_KIND == g_T_ARR))))
{
{ rt_int rv1640 = 0;
return rv1640; }
}
if ((!r_IS_NUMERIC_OR_ENUM(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM))))
{
{ rt_int rv1641 = 0;
return rv1641; }
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1642 = 0;
return rv1642; }
}
{ rt_int rv1643 = (!r_SAME_RANGE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM));
return rv1643; }
rt_raise(RT_X_INIT);
}
static R9 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R9 p_LV, R9 p_RV, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R9 rv1644 = r_STORE_CODE(p_T, p_LV, r_MKET(p_RV, p_VT), p_LINE, r_NO_TEXT());
return rv1644; }
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, p_VT)))))
{
{
R9 l_D_1645; memset(&l_D_1645, 0, sizeof l_D_1645);
S_R9(&l_D_1645, r_NEW_NAME(rt_str("ad", 2)), 0);
R9 l_S_1646; memset(&l_S_1646, 0, sizeof l_S_1646);
S_R9(&l_S_1646, r_NEW_NAME(rt_str("as", 2)), 0);
R9 l_I_1647; memset(&l_I_1647, 0, sizeof l_I_1647);
S_R9(&l_I_1647, r_NEW_NAME(rt_str("ai", 2)), 0);
R9 l_N_1648; memset(&l_N_1648, 0, sizeof l_N_1648);
S_R9(&l_N_1648, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R22 * l_VE_1649; memset(&l_VE_1649, 0, sizeof l_VE_1649);
l_VE_1649 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM;
R9 l_R_1650; memset(&l_R_1650, 0, sizeof l_R_1650);
S_R9(&l_R_1650, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1645, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R9(&l_R_1650, r_FMT3(rt_str("@@ = @; if (!rt_b_same_extents(", 31), l_R_1650, l_S_1646, p_RV), 0);
S_R9(&l_R_1650, r_FMT4(rt_str("@@, @->lo, @->hi, ", 18), l_R_1650, l_N_1648, l_D_1645, l_D_1645), 0);
S_R9(&l_R_1650, r_FMT3(rt_str("@@.lo, @.hi)) rt_raise(RT_B_SIZE); ", 35), l_R_1650, l_S_1646, l_S_1646), 0);
S_R9(&l_R_1650, r_FMT4(rt_str("@rt_int @n = rt_b_extent(@, @->lo, ", 35), l_R_1650, l_I_1647, l_N_1648, l_D_1645), 0);
S_R9(&l_R_1650, r_FMT2(rt_str("@@->hi);", 8), l_R_1650, l_D_1645), 0);
if (r_ELEMENTS_NEED_CHECK(p_T, p_VT))
{
S_R9(&l_R_1650, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1650, l_I_1647, l_I_1647, l_I_1647), 0);
S_R9(&l_R_1650, r_FMT3(rt_str("@@++) (void)@;", 14), l_R_1650, l_I_1647, r_RANGE_CHECK(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_S_1646, l_I_1647), r_NO_TEXT())), 0);
}
S_R9(&l_R_1650, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1650, l_I_1647, l_I_1647, l_I_1647), 0);
if (((r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_REC)) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_ARR)))
{
S_R9(&l_R_1650, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1650, l_I_1647, r_COMPONENT_STORE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, l_VE_1649, r_FMT2(rt_str("@->p[@]", 7), l_D_1645, l_I_1647), r_FMT2(rt_str("@.p[@]", 6), l_S_1646, l_I_1647), p_LINE)), 0);
}
else
{
S_R9(&l_R_1650, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1650, l_I_1647, r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@->p[@]", 7), l_D_1645, l_I_1647), r_FMT2(rt_str("@.p[@]", 6), l_S_1646, l_I_1647))), 0);
}
{ R9 rv1651 = l_R_1650;
return rv1651; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_D_1652; memset(&l_D_1652, 0, sizeof l_D_1652);
S_R9(&l_D_1652, r_NEW_NAME(rt_str("rd", 2)), 0);
R9 l_S_1653; memset(&l_S_1653, 0, sizeof l_S_1653);
S_R9(&l_S_1653, r_NEW_NAME(rt_str("rs", 2)), 0);
R24 * l_F_1654; memset(&l_F_1654, 0, sizeof l_F_1654);
l_F_1654 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_R_1655; memset(&l_R_1655, 0, sizeof l_R_1655);
S_R9(&l_R_1655, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1652, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R9(&l_R_1655, r_FMT3(rt_str("@@ = @;", 7), l_R_1655, l_S_1653, p_RV), 0);
for (;;) {
if ((l_F_1654 == NULL)) goto L_end1656;
{
{
R9 l_DF_1657; memset(&l_DF_1657, 0, sizeof l_DF_1657);
S_R9(&l_DF_1657, r_FMT2(rt_str("@->@", 4), l_D_1652, ((*(R24 *)rt_nil_check(l_F_1654))).f_CNAME), 0);
R9 l_SF_1658; memset(&l_SF_1658, 0, sizeof l_SF_1658);
S_R9(&l_SF_1658, r_FMT2(rt_str("@.@", 3), l_S_1653, ((*(R24 *)rt_nil_check(l_F_1654))).f_CNAME), 0);
if (((((*(R24 *)rt_nil_check(l_F_1654))).f_KIND == ((rt_int)1LL)) || (((((*(R24 *)rt_nil_check(l_F_1654))).f_KIND == ((rt_int)2LL)) && (!r_HAS_ANY(p_T))))))
{
S_R9(&l_R_1655, r_FMT2(rt_str("@ if (!(@)) rt_raise(RT_B_TYPE_MISMATCH);", 41), l_R_1655, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1654))).f_T, l_DF_1657, l_SF_1658)), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1654))).f_KIND == ((rt_int)2LL)))
{
S_R9(&l_R_1655, r_FMT3(rt_str("@ @ = @;", 8), l_R_1655, l_DF_1657, l_SF_1658), 0);
}
else
{
S_R9(&l_R_1655, r_FMT2(rt_str("@ @", 3), l_R_1655, r_COMPONENT_STORE(((*(R24 *)rt_nil_check(l_F_1654))).f_T, ((*(R24 *)rt_nil_check(l_F_1654))).f_T, l_DF_1657, l_SF_1658, p_LINE)), 0);
}
}
l_F_1654 = ((*(R24 *)rt_nil_check(l_F_1654))).f_NEXT;
}
RT_B_TICK();
} L_end1656: ;
{ R9 rv1659 = r_CATS(l_R_1655, rt_str(" }", 2));
return rv1659; }
}
}
{ R9 rv1660 = r_ASSIGN_CODE(p_T, p_LV, p_RV);
return rv1660; }
rt_raise(RT_X_INIT);
}
static R9 r_COMPONENT_EQUAL(R22 * p_T, R9 p_A, R9 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1661; memset(&l_ARGS_1661, 0, sizeof l_ARGS_1661);
l_ARGS_1661 = r_VAL_ARG(r_MKET(p_A, p_T), r_VAL_ARG(r_MKET(p_B, p_T), NULL));
R12 * l_Y_1662; memset(&l_Y_1662, 0, sizeof l_Y_1662);
l_Y_1662 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1661, p_LINE);
if ((l_Y_1662 == NULL))
{
r_FAILT(p_LINE, rt_str("no EQUAL_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R9 rv1663 = (r_CALL_SYM(l_Y_1662, l_ARGS_1661, p_LINE)).f_C;
return rv1663; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_X_1664; memset(&l_X_1664, 0, sizeof l_X_1664);
S_R9(&l_X_1664, r_NEW_NAME(rt_str("ea", 2)), 0);
R9 l_Z_1665; memset(&l_Z_1665, 0, sizeof l_Z_1665);
S_R9(&l_Z_1665, r_NEW_NAME(rt_str("eb", 2)), 0);
R9 l_I_1666; memset(&l_I_1666, 0, sizeof l_I_1666);
S_R9(&l_I_1666, r_NEW_NAME(rt_str("ei", 2)), 0);
R9 l_N_1667; memset(&l_N_1667, 0, sizeof l_N_1667);
S_R9(&l_N_1667, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R9 l_R_1668; memset(&l_R_1668, 0, sizeof l_R_1668);
S_R9(&l_R_1668, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1664, p_A, l_Z_1665), 0);
S_R9(&l_R_1668, r_FMT4(rt_str("@@; int @r = rt_b_same_extents(@, ", 34), l_R_1668, p_B, l_I_1666, l_N_1667), 0);
S_R9(&l_R_1668, r_FMT4(rt_str("@@.lo, @.hi, @.lo, ", 19), l_R_1668, l_X_1664, l_X_1664, l_Z_1665), 0);
S_R9(&l_R_1668, r_FMT4(rt_str("@@.hi); rt_int @n = rt_b_extent(@, ", 35), l_R_1668, l_Z_1665, l_I_1666, l_N_1667), 0);
S_R9(&l_R_1668, r_FMT3(rt_str("@@.lo, @.hi);", 13), l_R_1668, l_X_1664, l_X_1664), 0);
S_R9(&l_R_1668, r_FMT4(rt_str("@ for (rt_int @ = 0; @r && @ < ", 31), l_R_1668, l_I_1666, l_I_1666, l_I_1666), 0);
S_R9(&l_R_1668, r_FMT4(rt_str("@@n; @++) @r = ", 15), l_R_1668, l_I_1666, l_I_1666, l_I_1666), 0);
S_R9(&l_R_1668, r_FMT2(rt_str("@@;", 3), l_R_1668, r_COMPONENT_EQUAL(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_X_1664, l_I_1666), r_FMT2(rt_str("@.p[@]", 6), l_Z_1665, l_I_1666), p_LINE)), 0);
{ R9 rv1669 = r_FMT2(rt_str("@ @r; })", 8), l_R_1668, l_I_1666);
return rv1669; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_X_1670; memset(&l_X_1670, 0, sizeof l_X_1670);
S_R9(&l_X_1670, r_NEW_NAME(rt_str("ra", 2)), 0);
R9 l_Z_1671; memset(&l_Z_1671, 0, sizeof l_Z_1671);
S_R9(&l_Z_1671, r_NEW_NAME(rt_str("rb", 2)), 0);
R24 * l_F_1672; memset(&l_F_1672, 0, sizeof l_F_1672);
l_F_1672 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_R_1673; memset(&l_R_1673, 0, sizeof l_R_1673);
S_R9(&l_R_1673, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1670, p_A, l_Z_1671), 0);
R9 l_EQ_1674; memset(&l_EQ_1674, 0, sizeof l_EQ_1674);
S_R9(&l_EQ_1674, r_MK(rt_str("1", 1)), 0);
S_R9(&l_R_1673, r_FMT2(rt_str("@@;", 3), l_R_1673, p_B), 0);
for (;;) {
if ((l_F_1672 == NULL)) goto L_end1675;
{
{
R9 l_C_1676; memset(&l_C_1676, 0, sizeof l_C_1676);
S_R9(&l_C_1676, r_COMPONENT_EQUAL(((*(R24 *)rt_nil_check(l_F_1672))).f_T, r_FMT2(rt_str("@.@", 3), l_X_1670, ((*(R24 *)rt_nil_check(l_F_1672))).f_CNAME), r_FMT2(rt_str("@.@", 3), l_Z_1671, ((*(R24 *)rt_nil_check(l_F_1672))).f_CNAME), p_LINE), 0);
if (((((*(R24 *)rt_nil_check(l_F_1672))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R9(&l_EQ_1674, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1674, r_VARIANT_COND(l_F_1672, p_T, l_X_1670), l_C_1676), 0);
}
else
{
S_R9(&l_EQ_1674, r_FMT2(rt_str("@ && @", 6), l_EQ_1674, l_C_1676), 0);
}
}
l_F_1672 = ((*(R24 *)rt_nil_check(l_F_1672))).f_NEXT;
}
RT_B_TICK();
} L_end1675: ;
{ R9 rv1677 = r_FMT2(rt_str("@ @; })", 7), l_R_1673, l_EQ_1674);
return rv1677; }
}
}
{ R9 rv1678 = r_EQUAL_CODE(p_T, p_A, p_B);
return rv1678; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R21 * p_E) { RT_B_TICK(); 
{ R26 rv1679 = r_STD_RESULT(r_UNARY1(p_E));
return rv1679; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY1(R21 * p_E) { RT_B_TICK(); 
R26 l_A_1680; memset(&l_A_1680, 0, sizeof l_A_1680);
S_R26(&l_A_1680, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1681; memset(&l_T_1681, 0, sizeof l_T_1681);
l_T_1681 = (l_A_1680).f_T;
R9 l_OP_1682; memset(&l_OP_1682, 0, sizeof l_OP_1682);
S_R9(&l_OP_1682, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if (((((*(R22 *)rt_nil_check(l_T_1681))).f_GENP).f_LEN > ((rt_int)0LL)))
{
r_REQUIRE_WHERE(r_OP_NAME(l_OP_1682, 1), ((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
if (((((*(R22 *)rt_nil_check(l_T_1681))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_OP_NAME(l_OP_1682, 1))))
{
{
R27 * l_ARGS_1683; memset(&l_ARGS_1683, 0, sizeof l_ARGS_1683);
l_ARGS_1683 = r_VAL_ARG(l_A_1680, r_QUAL_ARGS(((*(R21 *)rt_nil_check(p_E))).f_LINE));
R12 * l_Y_1684; memset(&l_Y_1684, 0, sizeof l_Y_1684);
l_Y_1684 = r_USER_OPERATOR(r_OP_NAME(l_OP_1682, 1), l_ARGS_1683, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((l_Y_1684 == NULL) && (!(((*(R27 *)rt_nil_check(l_ARGS_1683))).f_NEXT == NULL))))
{
((*(R27 *)rt_nil_check(l_ARGS_1683))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(r_OP_NAME(l_OP_1682, 1), l_ARGS_1683, ((*(R21 *)rt_nil_check(p_E))).f_LINE) == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("no operation takes the precision or rounding of the expression ", 63), rt_str("as arguments (D.5): ", 20)), r_OP_NAME(l_OP_1682, 1));
}
}
if ((!(l_Y_1684 == NULL)))
{
{ R26 rv1685 = r_CALL_SYM(l_Y_1684, l_ARGS_1683, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1685; }
}
if ((((*(R22 *)rt_nil_check(l_T_1681))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1681));
}
}
}
if (r_TEQS(l_OP_1682, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1681))).f_KIND == g_T_BOOL))
{
{ R26 rv1686 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1680).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1686; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1681))).f_KIND == g_T_BITS))
{
{ R26 rv1687 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1680).f_C), l_T_1681);
return rv1687; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1681))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1682, rt_str("-", 1)))
{
{ R26 rv1688 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1680).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1681))).f_SCALE));
return rv1688; }
}
{ R26 rv1689 = r_MKET((l_A_1680).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1681))).f_SCALE));
return rv1689; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1681))).f_KIND == g_T_FLOAT))
{
{
R22 * l_FT_1690; memset(&l_FT_1690, 0, sizeof l_FT_1690);
l_FT_1690 = r_FLOAT_TYPE(r_MAX_INT(((*(R22 *)rt_nil_check(l_T_1681))).f_SCALE, r_QUAL_PREC()));
if (r_TEQS(l_OP_1682, rt_str("-", 1)))
{
{ R26 rv1691 = r_MKET(r_FLOAT_OP(l_OP_1682, r_MK(rt_str("0.0", 3)), (l_A_1680).f_C, l_FT_1690), l_FT_1690);
return rv1691; }
}
{ R26 rv1692 = r_MKET((l_A_1680).f_C, l_FT_1690);
return rv1692; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1681));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1693 = (((((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME)))) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1693; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R21 * p_E) { RT_B_TICK(); 
R9 l_OP_1694; memset(&l_OP_1694, 0, sizeof l_OP_1694);
S_R9(&l_OP_1694, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1695; memset(&l_A_1695, 0, sizeof l_A_1695);
R26 l_B_1696; memset(&l_B_1696, 0, sizeof l_B_1696);
if ((r_TEQS(l_OP_1694, rt_str("&", 1)) || r_TEQS(l_OP_1694, rt_str("!", 1))))
{
{
R23 l_MA_1697; memset(&l_MA_1697, 0, sizeof l_MA_1697);
S_R23(&l_MA_1697, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R9 l_CA_1698; memset(&l_CA_1698, 0, sizeof l_CA_1698);
S_R9(&l_CA_1698, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R9 l_CB_1699; memset(&l_CB_1699, 0, sizeof l_CB_1699);
S_R9(&l_CB_1699, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1694, rt_str("&", 1)))
{
{ R26 rv1700 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1698, l_CB_1699), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1700; }
}
{ R26 rv1701 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1698, l_CB_1699), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1701; }
}
}
if ((r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1696, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1695, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, (l_B_1696).f_T), 0);
}
else
{
S_R26(&l_A_1695, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1696, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, (l_A_1695).f_T), 0);
}
{ R26 rv1702 = r_STD_RESULT(r_APPLY_OPERATOR(p_E, l_OP_1694, l_A_1695, l_B_1696));
return rv1702; }
rt_raise(RT_X_INIT);
}
static R26 r_STD_RESULT(R26 p_V) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R26 rv1703 = p_V;
return rv1703; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((p_V).f_T)))).f_KIND == g_T_INT)))
{
{ R26 rv1704 = p_V;
return rv1704; }
}
{ R26 rv1705 = ({ R26 rc1706; memset(&rc1706, 0, sizeof rc1706);  S_R9(&rc1706.f_C, r_STD_CHECK((p_V).f_C), 0); rc1706.f_T = (p_V).f_T; rc1706.f_LVAL = 0; S_R9(&rc1706.f_SELF, (p_V).f_SELF, 0); rc1706; });
return rv1705; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R21 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1707; memset(&l_AT_1707, 0, sizeof l_AT_1707);
l_AT_1707 = (p_A).f_T;
R22 * l_BT_1708; memset(&l_BT_1708, 0, sizeof l_BT_1708);
l_BT_1708 = (p_B).f_T;
rt_int l_LINE_1709; memset(&l_LINE_1709, 0, sizeof l_LINE_1709);
l_LINE_1709 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
{
R9 l_NAME_1710; memset(&l_NAME_1710, 0, sizeof l_NAME_1710);
S_R9(&l_NAME_1710, r_OP_NAME(p_OP, 0), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
S_R9(&l_NAME_1710, r_MKN(rt_b_cat(rt_str("MD_", 3), r_STR(l_NAME_1710, (l_NAME_1710).f_LEN))), 0);
}
if ((((((*(R22 *)rt_nil_check(l_AT_1707))).f_GENP).f_LEN > ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_BT_1708))).f_GENP).f_LEN > ((rt_int)0LL))))
{
r_REQUIRE_WHERE(l_NAME_1710, l_LINE_1709);
}
if (((r_HAS_USER_ROUTINE(l_NAME_1710) || (((*(R22 *)rt_nil_check(l_AT_1707))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1708))).f_KIND == g_T_ABS)))
{
{
R27 * l_ARGS_1711; memset(&l_ARGS_1711, 0, sizeof l_ARGS_1711);
l_ARGS_1711 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R27 * l_EXTRA_1712; memset(&l_EXTRA_1712, 0, sizeof l_EXTRA_1712);
l_EXTRA_1712 = r_QUAL_ARGS(l_LINE_1709);
R12 * l_Y_1713; memset(&l_Y_1713, 0, sizeof l_Y_1713);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
l_EXTRA_1712 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_D, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_EXTRA_1712);
}
if ((!(l_EXTRA_1712 == NULL)))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1711))).f_NEXT))).f_NEXT = l_EXTRA_1712;
l_Y_1713 = r_USER_OPERATOR(l_NAME_1710, l_ARGS_1711, l_LINE_1709);
if ((!(l_Y_1713 == NULL)))
{
{ R26 rv1714 = r_CALL_SYM(l_Y_1713, l_ARGS_1711, l_LINE_1709);
return rv1714; }
}
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1711))).f_NEXT))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(l_NAME_1710, l_ARGS_1711, l_LINE_1709) == NULL)))
{
r_FAILT(l_LINE_1709, rt_b_cat(rt_str("no operation takes the scale, precision or rounding of the ", 59), rt_str("expression as arguments (D.5): ", 31)), l_NAME_1710);
}
}
else
{
l_Y_1713 = r_USER_OPERATOR(l_NAME_1710, l_ARGS_1711, l_LINE_1709);
if ((!(l_Y_1713 == NULL)))
{
{ R26 rv1715 = r_CALL_SYM(l_Y_1713, l_ARGS_1711, l_LINE_1709);
return rv1715; }
}
}
if ((r_TEQS(p_OP, rt_str("<>", 2)) && (((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{
R12 * l_Q_1716; memset(&l_Q_1716, 0, sizeof l_Q_1716);
l_Q_1716 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1711, l_LINE_1709);
if ((!(l_Q_1716 == NULL)))
{
{ R26 rv1717 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1716, l_ARGS_1711, l_LINE_1709)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1717; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1707))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1708))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1709, rt_str("no such operation for the abstract type: ", 41), l_NAME_1710);
}
}
}
}
if ((!r_PREDEFINED_ROUNDING()))
{
r_FAILT(l_LINE_1709, rt_str("no operation is defined for the rounding mode ", 46), ((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME);
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1718 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1718; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1719 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1719; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1707))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1708))).f_KIND == g_T_INT)))
{
{ R26 rv1720 = r_MKET(r_FIXED_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1720; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1707))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1708))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1721 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1721; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1707))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1707, l_BT_1708)))
{
if ((r_IS_UNORDERED(l_AT_1707) || r_IS_UNORDERED(l_BT_1708)))
{
r_FAIL(l_LINE_1709, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1722 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1722; }
}
r_FAILT(l_LINE_1709, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1707))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1708))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1707))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1708))).f_KIND == g_T_BITS)))))
{
r_SAME_CHARSET(l_AT_1707, l_BT_1708, l_LINE_1709);
{
R22 * l_T_1723; memset(&l_T_1723, 0, sizeof l_T_1723);
l_T_1723 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1707))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1723))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1707))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1707))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1708))).f_MLEN).f_OK))
{
S_R23(&((*(R22 *)rt_nil_check(l_T_1723))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1707))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1708))).f_MLEN).f_V)), 0);
S_R9(&((*(R22 *)rt_nil_check(l_T_1723))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1723))).f_MLEN).f_V), 0);
}
{ R26 rv1724 = r_MKET(r_FMT2(rt_str("rt_b_cat(@, @)", 14), (p_A).f_C, (p_B).f_C), l_T_1723);
return rv1724; }
}
}
r_FAIL(l_LINE_1709, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1707))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1708))).f_KIND == g_T_BITS)))
{
{ R26 rv1725 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1707);
return rv1725; }
}
r_FAILT(l_LINE_1709, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1707))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1708))).f_KIND == g_T_INT)))
{
{ R26 rv1726 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1726; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1707))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1708))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1727; memset(&l_T_1727, 0, sizeof l_T_1727);
l_T_1727 = r_FLOAT_TYPE(r_MAX_INT(r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1707))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1708))).f_SCALE), r_QUAL_PREC()));
if ((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))
{
{ R26 rv1728 = r_MKET(r_FLOAT_OP(p_OP, (p_A).f_C, (p_B).f_C, l_T_1727), l_T_1727);
return rv1728; }
}
if (r_TEQS(p_OP, rt_str("**", 2)))
{
r_FAIL(l_LINE_1709, rt_str("** has no predefined meaning for floating point values (3.3.4.2)", 64));
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1707))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1708))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1707))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1708))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1709, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1709, rt_b_cat(rt_b_cat(rt_b_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1707), (r_TYPE_NAME(l_AT_1707)).f_LEN)));
rt_raise(RT_X_INIT);
}
static rt_int r_IDENTICAL_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1729; memset(&l_RA_1729, 0, sizeof l_RA_1729);
l_RA_1729 = r_REAL_TYPE(p_A);
R22 * l_RB_1730; memset(&l_RB_1730, 0, sizeof l_RB_1730);
l_RB_1730 = r_REAL_TYPE(p_B);
if ((p_A == p_B))
{
{ rt_int rv1731 = 1;
return rv1731; }
}
if (((!r_SAME_TYPE(p_A, p_B)) || (!r_SAME_RANGE(p_A, p_B))))
{
{ rt_int rv1732 = 0;
return rv1732; }
}
if (((((*(R22 *)rt_nil_check(l_RA_1729))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RA_1729))).f_KIND == g_T_BITS)))
{
if (((((*(R22 *)rt_nil_check(l_RA_1729))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_1730))).f_MLEN).f_OK))
{
{ rt_int rv1733 = ((((*(R22 *)rt_nil_check(l_RA_1729))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_1730))).f_MLEN).f_V);
return rv1733; }
}
}
else if ((((*(R22 *)rt_nil_check(l_RA_1729))).f_KIND == g_T_ARR))
{
{ rt_int rv1734 = (r_SAME_EXTENTS(l_RA_1729, l_RB_1730) && r_IDENTICAL_TYPE(((*(R22 *)rt_nil_check(l_RA_1729))).f_ELEM, ((*(R22 *)rt_nil_check(l_RB_1730))).f_ELEM));
return rv1734; }
}
{ rt_int rv1735 = 1;
return rv1735; }
rt_raise(RT_X_INIT);
}
static R9 r_TARGET_ARGS_CHECK(R22 * p_RT, R22 * p_VT, R9 p_C) { RT_B_TICK(); 
R22 * l_A_1736; memset(&l_A_1736, 0, sizeof l_A_1736);
l_A_1736 = r_REAL_TYPE(p_RT);
R22 * l_B_1737; memset(&l_B_1737, 0, sizeof l_B_1737);
l_B_1737 = r_REAL_TYPE(p_VT);
R9 l_R_1738; memset(&l_R_1738, 0, sizeof l_R_1738);
S_R9(&l_R_1738, r_MK(rt_str("", 0)), 0);
if (((!(((*(R22 *)rt_nil_check(l_A_1736))).f_KIND == g_T_REC)) || (!(((*(R22 *)rt_nil_check(l_B_1737))).f_KIND == g_T_REC))))
{
{ R9 rv1739 = p_C;
return rv1739; }
}
{
R24 * l_F_1740; memset(&l_F_1740, 0, sizeof l_F_1740);
l_F_1740 = ((*(R22 *)rt_nil_check(l_A_1736))).f_FIELDS;
R25 * l_P_1741; memset(&l_P_1741, 0, sizeof l_P_1741);
l_P_1741 = ((*(R22 *)rt_nil_check(l_A_1736))).f_ARGS;
R25 * l_Q_1742; memset(&l_Q_1742, 0, sizeof l_Q_1742);
l_Q_1742 = ((*(R22 *)rt_nil_check(l_B_1737))).f_ARGS;
for (;;) {
if ((((l_F_1740 == NULL) || (l_P_1741 == NULL)) || (l_Q_1742 == NULL))) goto L_end1743;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1740))).f_KIND == ((rt_int)0LL))))
{
if (((((!((*(R25 *)rt_nil_check(l_P_1741))).f_ANYARG) && (!r_IS_GEN_ARG(l_P_1741))) && (!r_IS_GEN_ARG(l_Q_1742))) && (!(((((*(R25 *)rt_nil_check(l_P_1741))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_1742))).f_MLO).f_OK)))))
{
S_R9(&l_R_1738, r_FMT3(rt_str("@ if (p && p->@ != (@)) rt_raise(RT_B_TYPE_MISMATCH);", 53), l_R_1738, ((*(R24 *)rt_nil_check(l_F_1740))).f_CNAME, ((*(R25 *)rt_nil_check(l_P_1741))).f_LO), 0);
}
l_P_1741 = ((*(R25 *)rt_nil_check(l_P_1741))).f_NEXT;
l_Q_1742 = ((*(R25 *)rt_nil_check(l_Q_1742))).f_NEXT;
}
l_F_1740 = ((*(R24 *)rt_nil_check(l_F_1740))).f_NEXT;
}
RT_B_TICK();
} L_end1743: ;
}
if (((l_R_1738).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1744 = p_C;
return rv1744; }
}
{ R9 rv1745 = r_FMT3(rt_str("({ __typeof__(@) p = (@);@ p; })", 32), p_C, p_C, l_R_1738);
return rv1745; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_EXTENTS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R25 * l_P_1746; memset(&l_P_1746, 0, sizeof l_P_1746);
l_P_1746 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_A)))).f_BOUNDS;
R25 * l_Q_1747; memset(&l_Q_1747, 0, sizeof l_Q_1747);
l_Q_1747 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_B)))).f_BOUNDS;
for (;;) {
if (((l_P_1746 == NULL) || (l_Q_1747 == NULL))) goto L_end1748;
{
if (((((((((((*(R25 *)rt_nil_check(l_P_1746))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_P_1746))).f_MHI).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1747))).f_MLO).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1747))).f_MHI).f_OK) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1746))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1746))).f_HI))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1747))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1747))).f_HI))))
{
if ((!(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_P_1746))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_P_1746))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)) == r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_Q_1747))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_Q_1747))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)))))
{
{ rt_int rv1749 = 0;
return rv1749; }
}
}
l_P_1746 = ((*(R25 *)rt_nil_check(l_P_1746))).f_NEXT;
l_Q_1747 = ((*(R25 *)rt_nil_check(l_Q_1747))).f_NEXT;
}
RT_B_TICK();
} L_end1748: ;
{ rt_int rv1750 = 1;
return rv1750; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_VALUES(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv1751 = 0;
return rv1751; }
}
{ rt_int rv1752 = (!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL));
return rv1752; }
rt_raise(RT_X_INIT);
}
static R22 * r_FLOAT_TYPE(rt_int p_P) { RT_B_TICK(); 
R22 * l_T_1753; memset(&l_T_1753, 0, sizeof l_T_1753);
l_T_1753 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1753))).f_SCALE = p_P;
{ R22 * rv1754 = l_T_1753;
return rv1754; }
rt_raise(RT_X_INIT);
}
static R9 r_SINGLE_C(rt_int p_P) { RT_B_TICK(); 
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
{ R9 rv1755 = r_MK(rt_str("1", 1));
return rv1755; }
}
{ R9 rv1756 = r_MK(rt_str("0", 1));
return rv1756; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_TRUNC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8))))
{
{ R9 rv1757 = r_MK(rt_str("1", 1));
return rv1757; }
}
}
{ R9 rv1758 = r_MK(rt_str("0", 1));
return rv1758; }
rt_raise(RT_X_INIT);
}
static rt_int r_QUAL_PREC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B == NULL)))
{
{ rt_int rv1759 = (r_MANIFEST(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B)).f_V;
return rv1759; }
}
}
{ rt_int rv1760 = ((rt_int)0LL);
return rv1760; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_OP(R9 p_OP, R9 p_A, R9 p_B, R22 * p_T) { RT_B_TICK(); 
{ R9 rv1761 = r_CAT(r_FMT3(rt_str("rt_b_fop('@', @, @, ", 20), p_OP, p_A, p_B), r_FMT2(rt_str("@, @)", 5), r_SINGLE_C(((*(R22 *)rt_nil_check(p_T))).f_SCALE), r_FLOAT_TRUNC()));
return rv1761; }
rt_raise(RT_X_INIT);
}
static R9 r_LOWER_OP(R9 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R9 rv1762 = r_MK(rt_str("and", 3));
return rv1762; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R9 rv1763 = r_MK(rt_str("or", 2));
return rv1763; }
}
{ R9 rv1764 = r_MK(rt_str("xor", 3));
return rv1764; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { RT_B_TICK(); 
if ((p_A > p_B))
{
{ rt_int rv1765 = p_A;
return rv1765; }
}
{ rt_int rv1766 = p_B;
return rv1766; }
rt_raise(RT_X_INIT);
}
static R9 r_FIXED_COMPARE(R26 p_A, R26 p_B, R9 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE == ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE))
{
{ R9 rv1767 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv1767; }
}
{ R9 rv1768 = r_CAT(r_FMT3(rt_str("(rt_b_cmp(@, @, @", 17), (p_A).f_C, r_NUM(((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE), (p_B).f_C), r_FMT2(rt_str(", @) @ 0)", 9), r_NUM(((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE), p_OP));
return rv1768; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R21 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1769; memset(&l_AT_1769, 0, sizeof l_AT_1769);
l_AT_1769 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1770; memset(&l_BT_1770, 0, sizeof l_BT_1770);
l_BT_1770 = r_REAL_TYPE((p_B).f_T);
R9 l_R_1771; memset(&l_R_1771, 0, sizeof l_R_1771);
if (((((*(R22 *)rt_nil_check(l_AT_1769))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1770))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1769))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1770))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1769))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1770))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R9(&l_R_1771, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1769))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1770))).f_KIND == g_T_INT)))
{
S_R9(&l_R_1771, r_FIXED_COMPARE(p_A, p_B, r_MK(rt_str("==", 2))), 0);
}
else
{
if ((!r_SAME_CLASS(l_AT_1769, l_BT_1770)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1769))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
r_SAME_CHARSET(l_AT_1769, l_BT_1770, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R22 *)rt_nil_check(l_AT_1769))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1769) || r_HAS_ANY(l_BT_1770)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
if ((((*(R22 *)rt_nil_check(l_AT_1769))).f_KIND == g_T_ARR))
{
if ((!r_SAME_EXTENTS(l_AT_1769, l_BT_1770)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("arrays of different EXTENT attributes are compared (3.8.4.1)", 60));
}
}
if ((((*(R22 *)rt_nil_check(l_AT_1769))).f_KIND == g_T_REC))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_AT_1769))).f_ARGS, ((*(R22 *)rt_nil_check(l_BT_1770))).f_ARGS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("records of different types are compared (3.9.4.1)", 49));
}
}
if (r_HAS_ABS_PART(l_AT_1769))
{
S_R9(&l_R_1771, r_COMPONENT_EQUAL(l_AT_1769, (p_A).f_C, (p_B).f_C, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
}
else
{
S_R9(&l_R_1771, r_EQUAL_CODE(l_AT_1769, (p_A).f_C, (p_B).f_C), 0);
}
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R9(&l_R_1771, r_FMT1(rt_str("(!@)", 4), l_R_1771), 0);
}
{ R26 rv1772 = r_MKET(l_R_1771, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1772; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R21 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1773; memset(&l_S1_1773, 0, sizeof l_S1_1773);
l_S1_1773 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1774; memset(&l_S2_1774, 0, sizeof l_S2_1774);
l_S2_1774 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1775; memset(&l_S_1775, 0, sizeof l_S_1775);
l_S_1775 = r_MAX_INT(l_S1_1773, l_S2_1774);
R9 l_FN_1776; memset(&l_FN_1776, 0, sizeof l_FN_1776);
S_R9(&l_FN_1776, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R9(&l_FN_1776, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1777 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1776, r_RESCALE_C((p_A).f_C, l_S1_1773, l_S_1775), r_RESCALE_C((p_B).f_C, l_S2_1774, l_S_1775)), r_INT_TYPE(l_S_1775));
return rv1777; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1778 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1773, l_S2_1774)));
return rv1778; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1779 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1773, l_S2_1774)));
return rv1779; }
}
{ R26 rv1780 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1773, l_S2_1774)));
return rv1780; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1781 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1773));
return rv1781; }
}
{ R26 rv1782 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1773));
return rv1782; }
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
static R26 r_SCALED_OPERATOR(R21 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1783; memset(&l_S1_1783, 0, sizeof l_S1_1783);
l_S1_1783 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1784; memset(&l_S2_1784, 0, sizeof l_S2_1784);
l_S2_1784 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R9 l_RND_1785; memset(&l_RND_1785, 0, sizeof l_RND_1785);
S_R9(&l_RND_1785, r_MK(rt_str("0", 1)), 0);
if ((((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_B).f_T)))).f_KIND == g_T_FLOAT)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no machine-dependent float operator ", 36), p_OP);
}
{ R26 rv1786 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1786; }
}
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R9(&l_RND_1785, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("//", 2))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the machine-dependent fixed point operators are !+! !-! !*! !//! (3.2.4.5), not ", 80), p_OP);
}
{ R26 rv1787 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1787; }
}
{
R23 l_SM_1788; memset(&l_SM_1788, 0, sizeof l_SM_1788);
S_R23(&l_SM_1788, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1789; memset(&l_S_1789, 0, sizeof l_S_1789);
l_S_1789 = (l_SM_1788).f_V;
rt_int l_SR_1790; memset(&l_SR_1790, 0, sizeof l_SR_1790);
l_SR_1790 = r_MAX_INT(l_S1_1783, l_S2_1784);
if ((!(l_SM_1788).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1791 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1789, l_S1_1783), l_S2_1784)), l_RND_1785), r_INT_TYPE(l_S_1789));
return rv1791; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1792 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1789, l_S1_1783), l_S2_1784)), l_RND_1785), r_INT_TYPE(l_S_1789));
return rv1792; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1793 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1783), r_NUM(l_S_1789), l_RND_1785), r_INT_TYPE(l_S_1789));
return rv1793; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R9 l_SUB_1794; memset(&l_SUB_1794, 0, sizeof l_SUB_1794);
S_R9(&l_SUB_1794, r_MK(rt_str("0", 1)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R9(&l_SUB_1794, r_MK(rt_str("1", 1)), 0);
}
{ R26 rv1795 = r_MKET(r_CAT(r_FMT4(rt_str("rt_b_addsc(@, @, @, @, ", 23), (p_A).f_C, r_NUM(l_S1_1783), (p_B).f_C, r_NUM(l_S2_1784)), r_FMT3(rt_str("@, @, @)", 8), r_NUM(l_S_1789), l_SUB_1794, l_RND_1785)), r_INT_TYPE(l_S_1789));
return rv1795; }
}
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1796; memset(&l_V_1796, 0, sizeof l_V_1796);
S_R26(&l_V_1796, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1797; memset(&l_T_1797, 0, sizeof l_T_1797);
l_T_1797 = r_REAL_TYPE((l_V_1796).f_T);
R21 * l_R_1798; memset(&l_R_1798, 0, sizeof l_R_1798);
l_R_1798 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R9 l_TMP_1799; memset(&l_TMP_1799, 0, sizeof l_TMP_1799);
S_R9(&l_TMP_1799, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1800; memset(&l_LO_1800, 0, sizeof l_LO_1800);
R26 l_HI_1801; memset(&l_HI_1801, 0, sizeof l_HI_1801);
R9 l_LOC_1802; memset(&l_LOC_1802, 0, sizeof l_LOC_1802);
R9 l_HIC_1803; memset(&l_HIC_1803, 0, sizeof l_HIC_1803);
R9 l_LO_OP_1804; memset(&l_LO_OP_1804, 0, sizeof l_LO_OP_1804);
S_R9(&l_LO_OP_1804, r_MK(rt_str("<=", 2)), 0);
R9 l_HI_OP_1805; memset(&l_HI_OP_1805, 0, sizeof l_HI_OP_1805);
S_R9(&l_HI_OP_1805, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1800, r_EXPR(((*(R21 *)rt_nil_check(l_R_1798))).f_A, l_T_1797), 0);
S_R26(&l_HI_1801, r_EXPR(((*(R21 *)rt_nil_check(l_R_1798))).f_B, l_T_1797), 0);
if (r_IS_UNORDERED(l_T_1797))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1797))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1797))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1797))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_1800).f_T), l_T_1797)) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_1801).f_T), l_T_1797))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if (((((*(R21 *)rt_nil_check(l_R_1798))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_1798))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LO_OP_1804, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_1798))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HI_OP_1805, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R22 *)rt_nil_check(l_T_1797))).f_KIND == g_T_INT))
{
{
R26 l_X_1806; memset(&l_X_1806, 0, sizeof l_X_1806);
S_R26(&l_X_1806, r_MKET(l_TMP_1799, (l_V_1796).f_T), 0);
S_R9(&l_LOC_1802, r_FIXED_COMPARE(l_LO_1800, l_X_1806, l_LO_OP_1804), 0);
S_R9(&l_HIC_1803, r_FIXED_COMPARE(l_X_1806, l_HI_1801, l_HI_OP_1805), 0);
}
}
else
{
S_R9(&l_LOC_1802, r_FMT3(rt_str("(@ @ @)", 7), (l_LO_1800).f_C, l_LO_OP_1804, l_TMP_1799), 0);
S_R9(&l_HIC_1803, r_FMT3(rt_str("(@ @ @)", 7), l_TMP_1799, l_HI_OP_1805, (l_HI_1801).f_C), 0);
}
{ R26 rv1807 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; @ && ", 17), r_CTYPE(l_T_1797), l_TMP_1799, (l_V_1796).f_C, l_LOC_1802), r_FMT1(rt_str("@; })", 5), l_HIC_1803)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1807; }
rt_raise(RT_X_INIT);
}
static R9 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R9 rv1808 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1808; }
}
{ R9 rv1809 = (p_V).f_C;
return rv1809; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { RT_B_TICK(); 
{ R26 rv1810 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1810; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { RT_B_TICK(); 
rt_int l_B_1811; memset(&l_B_1811, 0, sizeof l_B_1811);
l_B_1811 = ((rt_int)0LL);
rt_int l_P_1812; memset(&l_P_1812, 0, sizeof l_P_1812);
l_P_1812 = ((rt_int)1LL);
for (;;) {
if ((l_P_1812 >= p_N)) goto L_end1813;
{
l_B_1811 = rt_add(l_B_1811, ((rt_int)1LL));
l_P_1812 = rt_mul(l_P_1812, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1813: ;
{ rt_int rv1814 = l_B_1811;
return rv1814; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R23 l_M_1815; memset(&l_M_1815, 0, sizeof l_M_1815);
S_R23(&l_M_1815, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1815).f_OK)
{
{ rt_int rv1816 = (l_M_1815).f_V;
return rv1816; }
}
}
}
}
{ rt_int rv1817 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1817; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKING_OF(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1818; memset(&l_K_1818, 0, sizeof l_K_1818);
l_K_1818 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
rt_int l_MODE_1819; memset(&l_MODE_1819, 0, sizeof l_MODE_1819);
l_MODE_1819 = ((rt_int)2LL);
if ((l_K_1818 == g_T_STR))
{
l_MODE_1819 = ((rt_int)1LL);
}
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_KIND == g_N_REP) && (!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL))))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_KIND == g_N_ENUMLIT)))
{
{
rt_int l_P_1820; memset(&l_P_1820, 0, sizeof l_P_1820);
l_P_1820 = r_PACKING_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_NAME);
if ((l_P_1820 >= ((rt_int)0LL)))
{
l_MODE_1819 = l_P_1820;
}
}
}
}
}
{ rt_int rv1821 = l_MODE_1819;
return rv1821; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKING_VALUE(R9 p_NAME) { RT_B_TICK(); 
if (r_TEQS(p_NAME, rt_str("DENSE", 5)))
{
{ rt_int rv1822 = ((rt_int)0LL);
return rv1822; }
}
else if (r_TEQS(p_NAME, rt_str("PACKED", 6)))
{
{ rt_int rv1823 = ((rt_int)1LL);
return rv1823; }
}
else if (r_TEQS(p_NAME, rt_str("UNPACKED", 8)))
{
{ rt_int rv1824 = ((rt_int)2LL);
return rv1824; }
}
{ rt_int rv1825 = rt_neg(((rt_int)1LL));
return rv1825; }
rt_raise(RT_X_INIT);
}
static R26 r_PACKING_LITERAL(rt_int p_MODE, rt_int p_LINE) { RT_B_TICK(); 
if ((p_MODE == ((rt_int)0LL)))
{
{ R26 rv1826 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("DENSE", 5), p_LINE), NULL);
return rv1826; }
}
else if ((p_MODE == ((rt_int)1LL)))
{
{ R26 rv1827 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1827; }
}
{ R26 rv1828 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1828; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACK_SLOT(rt_int p_ES, rt_int p_MODE) { RT_B_TICK(); 
rt_int l_U_1829; memset(&l_U_1829, 0, sizeof l_U_1829);
l_U_1829 = ((rt_int)8LL);
if ((p_ES <= ((rt_int)0LL)))
{
if ((p_MODE == ((rt_int)0LL)))
{
{ rt_int rv1830 = ((rt_int)0LL);
return rv1830; }
}
{ rt_int rv1831 = ((rt_int)8LL);
return rv1831; }
}
if ((p_MODE == ((rt_int)0LL)))
{
{ rt_int rv1832 = p_ES;
return rv1832; }
}
if (((p_MODE == ((rt_int)1LL)) && (p_ES <= ((*(R7 *)rt_nil_check(g_W))).f_WORD)))
{
for (;;) {
if ((l_U_1829 >= p_ES)) goto L_end1833;
{
l_U_1829 = rt_mul(l_U_1829, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1833: ;
{ rt_int rv1834 = l_U_1829;
return rv1834; }
}
{ rt_int rv1835 = rt_mul((rt_quot((rt_sub(rt_add(p_ES, ((*(R7 *)rt_nil_check(g_W))).f_WORD), ((rt_int)1LL))), ((*(R7 *)rt_nil_check(g_W))).f_WORD)), ((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1835; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_MIN_C(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1836 = r_MK(rt_str("INT64_MIN", 9));
return rv1836; }
}
{ R9 rv1837 = r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(rt_neg(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))))));
return rv1837; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_MAX_C(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1838 = r_MK(rt_str("INT64_MAX", 9));
return rv1838; }
}
{ R9 rv1839 = r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(rt_sub(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))), ((rt_int)1LL))));
return rv1839; }
rt_raise(RT_X_INIT);
}
static rt_int r_STD_MIN(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ rt_int rv1840 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
return rv1840; }
}
{ rt_int rv1841 = rt_neg(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))));
return rv1841; }
rt_raise(RT_X_INIT);
}
static rt_int r_STD_MAX(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ rt_int rv1842 = INT64_MAX;
return rv1842; }
}
{ rt_int rv1843 = rt_sub(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))), ((rt_int)1LL));
return rv1843; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_CHECK(R9 p_C) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1844 = p_C;
return rv1844; }
}
{ R9 rv1845 = r_FMT1(rt_str("rt_b_std(@)", 11), p_C);
return rv1845; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACK_SIZE(rt_int p_N, rt_int p_ES, rt_int p_MODE) { RT_B_TICK(); 
if ((p_N <= ((rt_int)0LL)))
{
{ rt_int rv1846 = ((rt_int)0LL);
return rv1846; }
}
{ rt_int rv1847 = rt_mul(p_N, r_PACK_SLOT(p_ES, p_MODE));
return rv1847; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHAR_SIZE(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv1848 = r_ENUM_SIZE(r_CHARSET_OF(p_T));
return rv1848; }
rt_raise(RT_X_INIT);
}
static R9 r_CHAR_REPS(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_1849; memset(&l_C_1849, 0, sizeof l_C_1849);
l_C_1849 = r_CHARSET_OF(p_T);
if ((!(((*(R22 *)rt_nil_check(l_C_1849))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_1849))).f_REPS))).f_B == NULL)))
{
{ R9 rv1850 = r_REP_TABLE(l_C_1849);
return rv1850; }
}
}
{ R9 rv1851 = r_FMT1(rt_str("NULL, @", 7), r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_1849))).f_BASE))).f_NLITS));
return rv1851; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_LENGTH(void) { RT_B_TICK(); 
{ rt_int rv1852 = ((rt_int)100000000LL);
return rv1852; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_FLOAT_PRECISION(void) { RT_B_TICK(); 
{ rt_int rv1853 = ((rt_int)15LL);
return rv1853; }
rt_raise(RT_X_INIT);
}
static rt_int r_IMP_PRECISION_OF(rt_int p_P) { RT_B_TICK(); 
if ((p_P <= ((rt_int)7LL)))
{
{ rt_int rv1854 = ((rt_int)7LL);
return rv1854; }
}
{ rt_int rv1855 = ((rt_int)15LL);
return rv1855; }
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_FORMAT(rt_int p_P, R9 p_NAME) { RT_B_TICK(); 
rt_int l_SINGLE_1856; memset(&l_SINGLE_1856, 0, sizeof l_SINGLE_1856);
l_SINGLE_1856 = (r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL));
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
{ rt_int rv1857 = rt_neg(((rt_int)127LL));
return rv1857; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
{ rt_int rv1858 = ((rt_int)127LL);
return rv1858; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
{ rt_int rv1859 = ((rt_int)8LL);
return rv1859; }
}
}
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
if (l_SINGLE_1856)
{
{ rt_int rv1860 = rt_neg(((rt_int)125LL));
return rv1860; }
}
{ rt_int rv1861 = rt_neg(((rt_int)1021LL));
return rv1861; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
if (l_SINGLE_1856)
{
{ rt_int rv1862 = ((rt_int)128LL);
return rv1862; }
}
{ rt_int rv1863 = ((rt_int)1024LL);
return rv1863; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
if (l_SINGLE_1856)
{
{ rt_int rv1864 = ((rt_int)25LL);
return rv1864; }
}
{ rt_int rv1865 = ((rt_int)54LL);
return rv1865; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
if (l_SINGLE_1856)
{
{ rt_int rv1866 = ((rt_int)8LL);
return rv1866; }
}
{ rt_int rv1867 = ((rt_int)11LL);
return rv1867; }
}
else if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
if (l_SINGLE_1856)
{
{ rt_int rv1868 = ((rt_int)32LL);
return rv1868; }
}
{ rt_int rv1869 = ((rt_int)64LL);
return rv1869; }
}
{ rt_int rv1870 = ((rt_int)0LL);
return rv1870; }
rt_raise(RT_X_INIT);
}
static R23 r_STATIC_SIZE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1871; memset(&l_K_1871, 0, sizeof l_K_1871);
l_K_1871 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1871 == g_T_ABS))
{
{ R23 rv1872 = r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1872; }
}
else if ((l_K_1871 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R23 rv1873 = r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A);
return rv1873; }
}
}
{ R23 rv1874 = r_SOME(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1874; }
}
else if ((l_K_1871 == g_T_FLOAT))
{
{ R23 rv1875 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1875; }
}
else if ((l_K_1871 == g_T_BOOL))
{
{ R23 rv1876 = r_SOME(((rt_int)1LL));
return rv1876; }
}
else if ((l_K_1871 == g_T_ENUM))
{
{ R23 rv1877 = r_SOME(r_ENUM_SIZE(p_T));
return rv1877; }
}
else if ((l_K_1871 == g_T_BITS))
{
{ R23 rv1878 = ((*(R22 *)rt_nil_check(p_T))).f_MLEN;
return rv1878; }
}
else if ((l_K_1871 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R23 rv1879 = r_SOME(r_PACK_SIZE((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_V, r_CHAR_SIZE(p_T), r_PACKING_OF(p_T)));
return rv1879; }
}
}
else if (((l_K_1871 == g_T_PTR) || (l_K_1871 == g_T_SEM)))
{
{ R23 rv1880 = r_SOME(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1880; }
}
else if ((l_K_1871 == g_T_ARR))
{
{
R23 l_ES_1881; memset(&l_ES_1881, 0, sizeof l_ES_1881);
S_R23(&l_ES_1881, r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM), 0);
rt_int l_N_1882; memset(&l_N_1882, 0, sizeof l_N_1882);
l_N_1882 = ((rt_int)1LL);
R25 * l_B_1883; memset(&l_B_1883, 0, sizeof l_B_1883);
l_B_1883 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
if ((!(l_ES_1881).f_OK))
{
{ R23 rv1884 = r_NO_MVAL();
return rv1884; }
}
for (;;) {
if ((l_B_1883 == NULL)) goto L_end1885;
{
if ((((!(((((*(R25 *)rt_nil_check(l_B_1883))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_B_1883))).f_MHI).f_OK))) || r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1883))).f_LO)) || r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1883))).f_HI)))
{
{ R23 rv1886 = r_NO_MVAL();
return rv1886; }
}
l_N_1882 = rt_mul(l_N_1882, r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_B_1883))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_B_1883))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
l_B_1883 = ((*(R25 *)rt_nil_check(l_B_1883))).f_NEXT;
}
RT_B_TICK();
} L_end1885: ;
{ R23 rv1887 = r_SOME(r_PACK_SIZE(l_N_1882, (l_ES_1881).f_V, r_PACKING_OF(p_T)));
return rv1887; }
}
}
{ R23 rv1888 = r_NO_MVAL();
return rv1888; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1889; memset(&l_T_1889, 0, sizeof l_T_1889);
l_T_1889 = (p_B).f_T;
rt_int l_K_1890; memset(&l_K_1890, 0, sizeof l_K_1890);
l_K_1890 = ((*(R22 *)rt_nil_check(l_T_1889))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv1891 = r_SIZE_OF(l_T_1889, (p_B).f_C);
return rv1891; }
}
if ((l_K_1890 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv1892 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1889))).f_SCALE);
return rv1892; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1893 = r_INT_ET(((rt_int)2LL));
return rv1893; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv1894 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1894; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
if ((!(((*(R22 *)rt_nil_check(l_T_1889))).f_REPS == NULL)))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1889))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1889))).f_REPS))).f_A == NULL))))
{
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1889))).f_REPS))).f_A))).f_NEXT == NULL)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1889))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8)))
{
{ R26 rv1895 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNSIGNED", 8), p_LINE), NULL);
return rv1895; }
}
}
}
}
{ R26 rv1896 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1896; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1889))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1897 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1889))).f_LO_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1889))).f_SCALE));
return rv1897; }
}
{ R26 rv1898 = r_MKET(r_STD_MIN_C(), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1889))).f_SCALE));
return rv1898; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1889))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1899 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1889))).f_HI_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1889))).f_SCALE));
return rv1899; }
}
{ R26 rv1900 = r_MKET(r_STD_MAX_C(), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1889))).f_SCALE));
return rv1900; }
}
}
else if ((l_K_1890 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv1901 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1889))).f_SCALE);
return rv1901; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv1902 = r_INT_ET(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1889))).f_SCALE));
return rv1902; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1903 = r_INT_ET(((rt_int)2LL));
return rv1903; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R26 rv1904 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1889))).f_SCALE, p_NAME));
return rv1904; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) || r_TEQS(p_NAME, rt_str("MAX", 3))))
{
{
R22 * l_MT_1905; memset(&l_MT_1905, 0, sizeof l_MT_1905);
l_MT_1905 = r_FLOAT_TYPE(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1889))).f_SCALE));
R9 l_C_1906; memset(&l_C_1906, 0, sizeof l_C_1906);
S_R9(&l_C_1906, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1889))).f_SCALE) == ((rt_int)7LL)))
{
S_R9(&l_C_1906, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1889))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1907 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1889))).f_LO_C, (p_B).f_SELF), l_MT_1905);
return rv1907; }
}
{ R26 rv1908 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1906), l_MT_1905);
return rv1908; }
}
if (((((*(R22 *)rt_nil_check(l_T_1889))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1909 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1889))).f_HI_C, (p_B).f_SELF), l_MT_1905);
return rv1909; }
}
{ R26 rv1910 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1906), l_MT_1905);
return rv1910; }
}
}
}
else if ((l_K_1890 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1889))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1911 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1889))).f_LO_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1889))).f_BASE);
return rv1911; }
}
{ R26 rv1912 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_1889))).f_BASE);
return rv1912; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1889))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1913 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1889))).f_HI_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1889))).f_BASE);
return rv1913; }
}
{ R26 rv1914 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1889))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_1889))).f_BASE);
return rv1914; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1889))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1915 = r_MKET(r_SUBST_SELF(r_FMT4(rt_str("((@) >= (@) \? (@) - (@) + 1 : 0)", 32), ((*(R22 *)rt_nil_check(l_T_1889))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1889))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1889))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1889))).f_LO_C), (p_B).f_SELF), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1915; }
}
{ R26 rv1916 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1889))).f_BASE))).f_NLITS);
return rv1916; }
}
}
else if (((l_K_1890 == g_T_STR) || (l_K_1890 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv1917 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1917; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1918 = r_PACKING_LITERAL(r_PACKING_OF(l_T_1889), p_LINE);
return rv1918; }
}
}
else if ((l_K_1890 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv1919 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1889))).f_DIMS);
return rv1919; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) || r_TEQS(p_NAME, rt_str("BOUNDS", 6))))
{
{ R26 rv1920 = r_ARRAY_SHAPE(p_B, p_NAME);
return rv1920; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1921 = r_PACKING_LITERAL(r_PACKING_OF(l_T_1889), p_LINE);
return rv1921; }
}
}
else if ((l_K_1890 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_1889))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv1922 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1922; }
}
{ R26 rv1923 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1923; }
}
}
else if (((l_K_1890 == g_T_ABS) || (l_K_1890 == g_T_REC)))
{
{
R22 * l_U_1924; memset(&l_U_1924, 0, sizeof l_U_1924);
l_U_1924 = l_T_1889;
if ((l_K_1890 == g_T_ABS))
{
l_U_1924 = ((*(R22 *)rt_nil_check(l_T_1889))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_1924))).f_KIND == g_T_REC))
{
{
R24 * l_F_1925; memset(&l_F_1925, 0, sizeof l_F_1925);
l_F_1925 = r_FIND_FIELD(l_U_1924, p_NAME);
if ((!(l_F_1925 == NULL)))
{
if ((!(((*(R24 *)rt_nil_check(l_F_1925))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv1926 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R24 *)rt_nil_check(l_F_1925))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1925))).f_T);
return rv1926; }
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
R22 * l_T_1927; memset(&l_T_1927, 0, sizeof l_T_1927);
l_T_1927 = r_REAL_TYPE((p_B).f_T);
R9 l_D_1928; memset(&l_D_1928, 0, sizeof l_D_1928);
S_R9(&l_D_1928, r_NUM(((*(R22 *)rt_nil_check(l_T_1927))).f_DIMS), 0);
R9 l_X_1929; memset(&l_X_1929, 0, sizeof l_X_1929);
S_R9(&l_X_1929, r_NEW_NAME(rt_str("sx", 2)), 0);
R9 l_R_1930; memset(&l_R_1930, 0, sizeof l_R_1930);
S_R9(&l_R_1930, r_NEW_NAME(rt_str("sr", 2)), 0);
R22 * l_ELEM_1931; memset(&l_ELEM_1931, 0, sizeof l_ELEM_1931);
l_ELEM_1931 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
R9 l_C_1932; memset(&l_C_1932, 0, sizeof l_C_1932);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
{
R21 * l_TS_1933; memset(&l_TS_1933, 0, sizeof l_TS_1933);
l_TS_1933 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R9(&((*(R21 *)rt_nil_check(l_TS_1933))).f_NAME, r_MKN(rt_str("BOUNDS_DEF", 10)), 0);
((*(R21 *)rt_nil_check(l_TS_1933))).f_A = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R9(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_TS_1933))).f_A))).f_NAME, r_MKN(rt_str("STD", 3)), 0);
l_ELEM_1931 = r_RESOLVE(l_TS_1933);
}
}
{
R22 * l_A_1934; memset(&l_A_1934, 0, sizeof l_A_1934);
l_A_1934 = r_ARRAY_OF(l_ELEM_1931, ((rt_int)1LL));
S_R9(&l_C_1932, r_FMT4(rt_str("({ @ @ = @; @ ", 14), r_CTYPE(l_T_1927), l_X_1929, (p_B).f_C, ((*(R22 *)rt_nil_check(l_A_1934))).f_CNAME), 0);
S_R9(&l_C_1932, r_FMT4(rt_str("@@; memset(&@, 0, sizeof @);", 28), l_C_1932, l_R_1930, l_R_1930, l_R_1930), 0);
S_R9(&l_C_1932, r_FMT4(rt_str("@ @.lo[0] = 0; @.hi[0] = @ - 1;", 31), l_C_1932, l_R_1930, l_R_1930, l_D_1928), 0);
S_R9(&l_C_1932, r_FMT4(rt_str("@ @.p = rt_alloc(@ * sizeof *@.p);", 34), l_C_1932, l_R_1930, l_D_1928, l_R_1930), 0);
S_R9(&l_C_1932, r_FMT2(rt_str("@ for (int i = 0; i < @; i++) {", 31), l_C_1932, l_D_1928), 0);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
S_R9(&l_C_1932, r_FMT2(rt_str("@ @", 3), l_C_1932, r_INIT_CODE(l_ELEM_1931, r_FMT1(rt_str("@.p[i]", 6), l_R_1930))), 0);
S_R9(&l_C_1932, r_FMT4(rt_str("@ @.p[i].f_MIN = @.lo[i]; @.p[i].f_MAX = ", 41), l_C_1932, l_R_1930, l_X_1929, l_R_1930), 0);
S_R9(&l_C_1932, r_FMT2(rt_str("@@.hi[i]; }", 11), l_C_1932, l_X_1929), 0);
}
else
{
S_R9(&l_C_1932, r_FMT4(rt_str("@ @.p[i] = @.hi[i] >= @.lo[i] \? ", 32), l_C_1932, l_R_1930, l_X_1929, l_X_1929), 0);
S_R9(&l_C_1932, r_FMT4(rt_str("@@.hi[i] - @.lo[i] + 1 : 0; }", 29), l_C_1932, l_X_1929, l_X_1929, l_X_1929), 0);
}
{ R26 rv1935 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_C_1932, l_R_1930), l_A_1934);
return rv1935; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_N_1936; memset(&l_N_1936, 0, sizeof l_N_1936);
l_N_1936 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R9(&((*(R21 *)rt_nil_check(l_N_1936))).f_NAME, r_MKN(p_NAME), 0);
{ R21 * rv1937 = l_N_1936;
return rv1937; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R9 p_C) { RT_B_TICK(); 
rt_int l_K_1938; memset(&l_K_1938, 0, sizeof l_K_1938);
l_K_1938 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1938 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv1939 = r_MKET((r_EXPR(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1939; }
}
}
{ R26 rv1940 = r_INT_ET(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1940; }
}
else if ((l_K_1938 == g_T_FLOAT))
{
{ R26 rv1941 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1941; }
}
else if ((l_K_1938 == g_T_BOOL))
{
{ R26 rv1942 = r_INT_ET(((rt_int)1LL));
return rv1942; }
}
else if ((l_K_1938 == g_T_ENUM))
{
{ R26 rv1943 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1943; }
}
else if ((l_K_1938 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1944 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1944; }
}
{ R26 rv1945 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1945; }
}
else if ((l_K_1938 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R26 rv1946 = r_INT_ET((r_STATIC_SIZE(p_T)).f_V);
return rv1946; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1947 = r_MKET(r_FMT3(rt_str("rt_b_pack_size(@, @, @)", 23), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C, r_NUM(r_CHAR_SIZE(p_T)), r_NUM(r_PACKING_OF(p_T))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1947; }
}
{ R26 rv1948 = r_MKET(r_FMT3(rt_str("rt_b_pack_size((@).len, @, @)", 29), p_C, r_NUM(r_CHAR_SIZE(p_T)), r_NUM(r_PACKING_OF(p_T))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1948; }
}
else if (((l_K_1938 == g_T_PTR) || (l_K_1938 == g_T_SEM)))
{
{ R26 rv1949 = r_INT_ET(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1949; }
}
else if ((l_K_1938 == g_T_ABS))
{
{ R26 rv1950 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1950; }
}
else if ((l_K_1938 == g_T_REC))
{
{ R26 rv1951 = r_MKET(r_RECORD_SIZE(p_T, p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1951; }
}
else if ((l_K_1938 == g_T_ARR))
{
{
R23 l_ES_1952; memset(&l_ES_1952, 0, sizeof l_ES_1952);
S_R23(&l_ES_1952, r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM), 0);
if ((l_ES_1952).f_OK)
{
{ R26 rv1953 = r_MKET(r_CAT(r_FMT3(rt_str("rt_b_pack_size(rt_b_extent(@, (@).lo, (@).hi), ", 47), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C), r_FMT2(rt_str("@, @)", 5), r_NUM((l_ES_1952).f_V), r_NUM(r_PACKING_OF(p_T)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1953; }
}
}
{ R26 rv1954 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1954; }
}
{ R26 rv1955 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1955; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R9 p_TNAME, R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{ R26 rv1956 = r_ATTRIBUTE(r_TYPE_VALUE(p_TNAME, p_LINE), p_NAME, p_LINE);
return rv1956; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE(R9 p_TNAME, rt_int p_LINE) { RT_B_TICK(); 
{ R26 rv1957 = r_TYPE_VALUE_OF(r_RESOLVE_USER_NAME(p_TNAME, p_LINE));
return rv1957; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_1958; memset(&l_RT_1958, 0, sizeof l_RT_1958);
l_RT_1958 = r_REAL_TYPE(p_T);
if (((((*(R22 *)rt_nil_check(l_RT_1958))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(l_RT_1958))).f_KIND == g_T_REC)))
{
{
R9 l_TMP_1959; memset(&l_TMP_1959, 0, sizeof l_TMP_1959);
S_R9(&l_TMP_1959, r_NEW_NAME(rt_str("tq", 2)), 0);
R9 l_C_1960; memset(&l_C_1960, 0, sizeof l_C_1960);
S_R9(&l_C_1960, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), r_CTYPE(p_T), l_TMP_1959, l_TMP_1959, l_TMP_1959), 0);
S_R9(&l_C_1960, r_FMT3(rt_str("@@ @; })", 8), l_C_1960, r_INIT_CODE(l_RT_1958, l_TMP_1959), l_TMP_1959), 0);
{ R26 rv1961 = r_MKET(l_C_1960, p_T);
return rv1961; }
}
}
{ R26 rv1962 = r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(p_T)), p_T);
return rv1962; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_NAME(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{ rt_int rv1963 = 0;
return rv1963; }
}
{
R12 * l_Y_1964; memset(&l_Y_1964, 0, sizeof l_Y_1964);
l_Y_1964 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1964 == NULL))
{
{ rt_int rv1965 = 0;
return rv1965; }
}
{ rt_int rv1966 = (((*(R12 *)rt_nil_check(l_Y_1964))).f_KIND == g_Y_TYPE);
return rv1966; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R9 p_TNAME, R9 p_A, R9 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1967 = r_INT_ET(((rt_int)100000000LL));
return rv1967; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1968 = r_INT_ET(((rt_int)15LL));
return rv1968; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv1969 = r_INT_ET(((rt_int)0LL));
return rv1969; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R22 * l_T_1970; memset(&l_T_1970, 0, sizeof l_T_1970);
l_T_1970 = p_WANT;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_1970 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_1970 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_1970 = r_REAL_TYPE(l_T_1970);
if ((!(((*(R22 *)rt_nil_check(l_T_1970))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_1970))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R9 l_TMP_1971; memset(&l_TMP_1971, 0, sizeof l_TMP_1971);
S_R9(&l_TMP_1971, r_NEW_NAME(rt_str("rc", 2)), 0);
R9 l_R_1972; memset(&l_R_1972, 0, sizeof l_R_1972);
S_R9(&l_R_1972, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_1970))).f_CNAME, l_TMP_1971, l_TMP_1971, l_TMP_1971), 0);
R24 * l_F_1973; memset(&l_F_1973, 0, sizeof l_F_1973);
l_F_1973 = ((*(R22 *)rt_nil_check(l_T_1970))).f_FIELDS;
S_R9(&l_R_1972, r_FMT2(rt_str("@@", 2), l_R_1972, r_INIT_CODE(l_T_1970, l_TMP_1971)), 0);
for (;;) {
if ((l_F_1973 == NULL)) goto L_end1974;
{
if ((((*(R24 *)rt_nil_check(l_F_1973))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R24 *)rt_nil_check(l_F_1973))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_1973))).f_LABELS, (r_TAG_VALUE(l_T_1970, ((*(R24 *)rt_nil_check(l_F_1973))).f_TAGF)).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_T_1970, ((*(R24 *)rt_nil_check(l_F_1973))).f_TAGF)))).f_T)))
{
{
R21 * l_INIT_1975; memset(&l_INIT_1975, 0, sizeof l_INIT_1975);
l_INIT_1975 = r_FIND_INIT(((*(R21 *)rt_nil_check(p_E))).f_A, ((*(R24 *)rt_nil_check(l_F_1973))).f_NAME);
if ((l_INIT_1975 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R24 *)rt_nil_check(l_F_1973))).f_NAME);
}
S_R9(&l_R_1972, r_FMT2(rt_str("@ @", 3), l_R_1972, r_STORE_CODE(((*(R24 *)rt_nil_check(l_F_1973))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_1971, ((*(R24 *)rt_nil_check(l_F_1973))).f_CNAME), r_EXPR(((*(R21 *)rt_nil_check(l_INIT_1975))).f_A, ((*(R24 *)rt_nil_check(l_F_1973))).f_T), ((*(R21 *)rt_nil_check(l_INIT_1975))).f_LINE, l_TMP_1971)), 0);
}
}
}
l_F_1973 = ((*(R24 *)rt_nil_check(l_F_1973))).f_NEXT;
}
RT_B_TICK();
} L_end1974: ;
{
R21 * l_P_1976; memset(&l_P_1976, 0, sizeof l_P_1976);
l_P_1976 = ((*(R21 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_1976 == NULL)) goto L_end1977;
{
{
R24 * l_G_1978; memset(&l_G_1978, 0, sizeof l_G_1978);
l_G_1978 = r_FIND_VFIELD(l_T_1970, ((*(R21 *)rt_nil_check(l_P_1976))).f_NAME);
if ((l_G_1978 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1976))).f_LINE, rt_str("no such field: ", 15), ((*(R21 *)rt_nil_check(l_P_1976))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_G_1978))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1976))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R21 *)rt_nil_check(l_P_1976))).f_NAME);
}
r_CHECK_VARIANT(l_G_1978, l_T_1970, NULL, ((*(R21 *)rt_nil_check(l_P_1976))).f_LINE);
}
l_P_1976 = ((*(R21 *)rt_nil_check(l_P_1976))).f_NEXT;
}
RT_B_TICK();
} L_end1977: ;
}
{ R26 rv1979 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1972, l_TMP_1971), l_T_1970);
return rv1979; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_FIND_INIT(R21 * p_L, R9 p_NAME) { RT_B_TICK(); 
R21 * l_P_1980; memset(&l_P_1980, 0, sizeof l_P_1980);
l_P_1980 = p_L;
for (;;) {
if ((l_P_1980 == NULL)) goto L_end1981;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_1980))).f_NAME, p_NAME))
{
{ R21 * rv1982 = l_P_1980;
return rv1982; }
}
l_P_1980 = ((*(R21 *)rt_nil_check(l_P_1980))).f_NEXT;
}
RT_B_TICK();
} L_end1981: ;
{ R21 * rv1983 = NULL;
return rv1983; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_DIMS_1984; memset(&l_DIMS_1984, 0, sizeof l_DIMS_1984);
l_DIMS_1984 = ((rt_int)0LL);
R21 * l_P_1985; memset(&l_P_1985, 0, sizeof l_P_1985);
l_P_1985 = p_E;
R22 * l_ELEM_1986; memset(&l_ELEM_1986, 0, sizeof l_ELEM_1986);
l_ELEM_1986 = NULL;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_P_1985))).f_KIND == g_N_ARRCONS))) goto L_end1987;
{
l_DIMS_1984 = rt_add(l_DIMS_1984, ((rt_int)1LL));
l_P_1985 = ((*(R21 *)rt_nil_check(l_P_1985))).f_A;
}
RT_B_TICK();
} L_end1987: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_1986 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_1986 == NULL))
{
l_ELEM_1986 = (r_EXPR(l_P_1985, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_1986))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_1986))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_1986 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
r_CHECK_SHAPE(p_E, l_DIMS_1984);
{
R22 * l_A_1988; memset(&l_A_1988, 0, sizeof l_A_1988);
l_A_1988 = r_ARRAY_OF(l_ELEM_1986, l_DIMS_1984);
R9 l_TMP_1989; memset(&l_TMP_1989, 0, sizeof l_TMP_1989);
S_R9(&l_TMP_1989, r_NEW_NAME(rt_str("ac", 2)), 0);
R9 l_R_1990; memset(&l_R_1990, 0, sizeof l_R_1990);
S_R9(&l_R_1990, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_1988))).f_CNAME, l_TMP_1989, l_TMP_1989), 0);
rt_int l_K_1991; memset(&l_K_1991, 0, sizeof l_K_1991);
l_K_1991 = ((rt_int)0LL);
{
R21 * l_Q_1992; memset(&l_Q_1992, 0, sizeof l_Q_1992);
l_Q_1992 = p_E;
R25 * l_TAIL_1993; memset(&l_TAIL_1993, 0, sizeof l_TAIL_1993);
l_TAIL_1993 = NULL;
{ rt_int it1995_lo = ((rt_int)1LL), it1995_hi = l_DIMS_1984;
for (rt_int it1995 = it1995_lo; it1995 <= it1995_hi; it1995++) {
{
{
R25 * l_B_1996; memset(&l_B_1996, 0, sizeof l_B_1996);
l_B_1996 = ((R25 *)rt_b_new(sizeof (R25)));
rt_int l_N_1997; memset(&l_N_1997, 0, sizeof l_N_1997);
l_N_1997 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_Q_1992))).f_A);
S_R25(&(*(R25 *)rt_nil_check(l_B_1996)), ({ R25 rc1998; memset(&rc1998, 0, sizeof rc1998);  S_R9(&rc1998.f_LO, r_MK(rt_str("0", 1)), 0); S_R9(&rc1998.f_HI, r_NUM(rt_sub(l_N_1997, ((rt_int)1LL))), 0); S_R23(&rc1998.f_MLO, r_SOME(((rt_int)0LL)), 0); S_R23(&rc1998.f_MHI, r_SOME(rt_sub(l_N_1997, ((rt_int)1LL))), 0); rc1998.f_ANYARG = 0; rc1998.f_NEXT = NULL; rc1998; }), 0);
if ((l_TAIL_1993 == NULL))
{
((*(R22 *)rt_nil_check(l_A_1988))).f_BOUNDS = l_B_1996;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_1993))).f_NEXT = l_B_1996;
}
l_TAIL_1993 = l_B_1996;
}
l_Q_1992 = ((*(R21 *)rt_nil_check(l_Q_1992))).f_A;
}
RT_B_TICK();
if (it1995 == it1995_hi) break;
} } L_end1994: ;
}
S_R9(&l_R_1990, r_FMT2(rt_str("@@); ", 5), l_R_1990, l_TMP_1989), 0);
l_P_1985 = p_E;
{ rt_int it2000_lo = ((rt_int)0LL), it2000_hi = rt_sub(l_DIMS_1984, ((rt_int)1LL));
for (rt_int it2000 = it2000_lo; it2000 <= it2000_hi; it2000++) {
{
S_R9(&l_R_1990, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_1990, l_TMP_1989, r_NUM(it2000), l_TMP_1989), 0);
S_R9(&l_R_1990, r_FMT3(rt_str("@@] = @;", 8), l_R_1990, r_NUM(it2000), r_NUM(rt_sub(r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_P_1985))).f_A), ((rt_int)1LL)))), 0);
l_P_1985 = ((*(R21 *)rt_nil_check(l_P_1985))).f_A;
}
RT_B_TICK();
if (it2000 == it2000_hi) break;
} } L_end1999: ;
S_R9(&l_R_1990, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_1990, l_TMP_1989, l_TMP_1989, r_NUM(l_DIMS_1984)), 0);
S_R9(&l_R_1990, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_1990, l_TMP_1989, l_TMP_1989), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_1984, l_A_1988, l_TMP_1989, &l_R_1990, &l_K_1991);
{ R26 rv2001 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1990, l_TMP_1989), l_A_1988);
return rv2001; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_SHAPE(R21 * p_E, rt_int p_DIMS) { RT_B_TICK(); 
R21 * l_P_2002; memset(&l_P_2002, 0, sizeof l_P_2002);
l_P_2002 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((p_DIMS <= ((rt_int)1LL)))
{
return;
}
for (;;) {
if ((l_P_2002 == NULL)) goto L_end2003;
{
if (((!(((*(R21 *)rt_nil_check(l_P_2002))).f_KIND == g_N_ARRCONS)) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_ARRCONS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
if ((!r_SAME_SHAPE(l_P_2002, ((*(R21 *)rt_nil_check(p_E))).f_A)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
r_CHECK_SHAPE(l_P_2002, rt_sub(p_DIMS, ((rt_int)1LL)));
l_P_2002 = ((*(R21 *)rt_nil_check(l_P_2002))).f_NEXT;
}
RT_B_TICK();
} L_end2003: ;
}
static rt_int r_SAME_SHAPE(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
if (((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) || (!(((*(R21 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS))))
{
{ rt_int rv2004 = ((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) && (!(((*(R21 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS)));
return rv2004; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_A))).f_A) == r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_B))).f_A))))
{
{ rt_int rv2005 = 0;
return rv2005; }
}
{ rt_int rv2006 = r_SAME_SHAPE(((*(R21 *)rt_nil_check(p_A))).f_A, ((*(R21 *)rt_nil_check(p_B))).f_A);
return rv2006; }
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R21 * p_E, rt_int p_DIMS, R22 * p_A, R9 p_TMP, R9 *p_R, rt_int *p_K) { RT_B_TICK(); 
R21 * l_P_2007; memset(&l_P_2007, 0, sizeof l_P_2007);
l_P_2007 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_2007 == NULL)) goto L_end2008;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_2007, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R21 *)rt_nil_check(l_P_2007))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_2007))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R9(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R9(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_2007, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R21 *)rt_nil_check(l_P_2007))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_2007 = ((*(R21 *)rt_nil_check(l_P_2007))).f_NEXT;
}
RT_B_TICK();
} L_end2008: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R22 * l_T_2009; memset(&l_T_2009, 0, sizeof l_T_2009);
l_T_2009 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_2009))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_2009))).f_DIMS = p_DIMS;
S_R9(&((*(R22 *)rt_nil_check(l_T_2009))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv2010 = l_T_2009;
return rv2010; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R21 * p_E) { RT_B_TICK(); 
R22 * l_T_2011; memset(&l_T_2011, 0, sizeof l_T_2011);
l_T_2011 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_A);
R26 l_V_2012; memset(&l_V_2012, 0, sizeof l_V_2012);
S_R26(&l_V_2012, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, l_T_2011), 0);
R22 * l_RT_2013; memset(&l_RT_2013, 0, sizeof l_RT_2013);
l_RT_2013 = r_REAL_TYPE(l_T_2011);
if (((((*(R22 *)rt_nil_check((l_V_2012).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_2013))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R22 *)rt_nil_check(l_RT_2013))).f_KIND == g_T_INT))
{
{ R26 rv2014 = r_MKET(r_RANGE_CHECK(l_RT_2013, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_2012).f_C), r_NO_TEXT()), l_T_2011);
return rv2014; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_2013))).f_KIND == g_T_BOOL))
{
{ R26 rv2015 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_2012).f_C), l_T_2011);
return rv2015; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_2013))).f_KIND == g_T_ENUM))
{
{ R26 rv2016 = r_MKET(r_ENUM_OF_BITS(l_RT_2013, (l_V_2012).f_C), l_T_2011);
return rv2016; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_2013))).f_KIND == g_T_FLOAT))
{
{ R26 rv2017 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_2012).f_C), l_T_2011);
return rv2017; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_2013))).f_KIND == g_T_STR))
{
{ R26 rv2018 = r_MKET(r_FMT4(rt_str("rt_b_chars_of_bits(@, @, @, @)", 30), (l_V_2012).f_C, r_NUM(r_CHAR_SIZE(l_RT_2013)), r_NUM(r_PACKING_OF(l_RT_2013)), r_CHAR_REPS(l_RT_2013)), l_T_2011);
return rv2018; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{
R9 l_C_2019; memset(&l_C_2019, 0, sizeof l_C_2019);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 1;
S_R9(&l_C_2019, r_CONVERT(l_V_2012, l_T_2011, ((*(R21 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), 0);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 0;
if ((((((((*(R22 *)rt_nil_check(l_RT_2013))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_2013))).f_KIND == g_T_BITS))) && ((((*(R22 *)rt_nil_check(l_RT_2013))).f_LEN_C).f_LEN > ((rt_int)0LL))) && (!(((((*(R22 *)rt_nil_check(l_RT_2013))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check((l_V_2012).f_T))).f_MLEN).f_OK)))))
{
S_R9(&l_C_2019, r_FMT2(rt_str("rt_b_tlen(@, @)", 15), l_C_2019, ((*(R22 *)rt_nil_check(l_RT_2013))).f_LEN_C), 0);
}
{ R26 rv2020 = r_MKET(l_C_2019, l_T_2011);
return rv2020; }
}
rt_raise(RT_X_INIT);
}
static R9 r_ENUM_OF_BITS(R22 * p_T, R9 p_C) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R9 rv2021 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv2021; }
}
}
{ R9 rv2022 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv2022; }
rt_raise(RT_X_INIT);
}
static R9 r_REP_TABLE(R22 * p_T) { RT_B_TICK(); 
R9 l_NAME_2023; memset(&l_NAME_2023, 0, sizeof l_NAME_2023);
S_R9(&l_NAME_2023, r_NEW_NAME(rt_str("reps", 4)), 0);
R21 * l_L_2024; memset(&l_L_2024, 0, sizeof l_L_2024);
l_L_2024 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R9 l_R_2025; memset(&l_R_2025, 0, sizeof l_R_2025);
S_R9(&l_R_2025, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_2024 == NULL)) goto L_end2026;
{
{
R21 * l_V_2027; memset(&l_V_2027, 0, sizeof l_V_2027);
l_V_2027 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_2028; memset(&l_FOUND_2028, 0, sizeof l_FOUND_2028);
l_FOUND_2028 = 0;
for (;;) {
if ((l_V_2027 == NULL)) goto L_end2029;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_2027))).f_NAME, ((*(R21 *)rt_nil_check(l_L_2024))).f_NAME))
{
S_R9(&l_R_2025, r_FMT2(rt_str("@@, ", 4), l_R_2025, (r_EXPR(((*(R21 *)rt_nil_check(l_V_2027))).f_A, NULL)).f_C), 0);
l_FOUND_2028 = 1;
}
l_V_2027 = ((*(R21 *)rt_nil_check(l_V_2027))).f_NEXT;
}
RT_B_TICK();
} L_end2029: ;
if ((!l_FOUND_2028))
{
r_FAILT(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R21 *)rt_nil_check(l_L_2024))).f_NAME);
}
}
l_L_2024 = ((*(R21 *)rt_nil_check(l_L_2024))).f_NEXT;
}
RT_B_TICK();
} L_end2026: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_2023, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_2025, l_NAME_2023, l_NAME_2023));
{ R9 rv2030 = r_FMT2(rt_str("@, @", 4), l_NAME_2023, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv2030; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SEM_2031; memset(&l_SEM_2031, 0, sizeof l_SEM_2031);
l_SEM_2031 = r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(((*(R7 *)rt_nil_check(g_W))).f_NEW_OK == p_E))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("NEW without PTR$ or SEMAPHORE$ only initializes a declaration or is the source ", 79), rt_str("of an assignment (3.10.2, 3.11.2)", 33)));
}
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_2031 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_2031)
{
{
R22 * l_T_2032; memset(&l_T_2032, 0, sizeof l_T_2032);
l_T_2032 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_2032 = p_WANT;
}
}
{ R26 rv2033 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_2032))).f_SCALE)), l_T_2032);
return rv2033; }
}
}
{
R22 * l_T_2034; memset(&l_T_2034, 0, sizeof l_T_2034);
l_T_2034 = r_RESOLVE(r_EXPR_TO_TS(((*(R21 *)rt_nil_check(p_E))).f_A));
R22 * l_P_2035; memset(&l_P_2035, 0, sizeof l_P_2035);
l_P_2035 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_2035))).f_TARGET = l_T_2034;
((*(R22 *)rt_nil_check(l_P_2035))).f_TARGET_TS = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_2034))
{
{ R26 rv2036 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_b_new(sizeof *p); @ p; })", 38), r_CTYPE(l_T_2034), r_INIT_CODE(l_T_2034, r_MK(rt_str("(*p)", 4)))), l_P_2035);
return rv2036; }
}
{ R26 rv2037 = r_MKET(r_FMT2(rt_str("((@ *)rt_b_new(sizeof (@)))", 27), r_CTYPE(l_T_2034), r_CTYPE(l_T_2034)), l_P_2035);
return rv2037; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_NTH(R21 * p_L, rt_int p_K) { RT_B_TICK(); 
R21 * l_P_2038; memset(&l_P_2038, 0, sizeof l_P_2038);
l_P_2038 = p_L;
{ rt_int it2040_lo = ((rt_int)1LL), it2040_hi = p_K;
for (rt_int it2040 = it2040_lo; it2040 <= it2040_hi; it2040++) {
{
if ((!(l_P_2038 == NULL)))
{
l_P_2038 = ((*(R21 *)rt_nil_check(l_P_2038))).f_NEXT;
}
}
RT_B_TICK();
if (it2040 == it2040_hi) break;
} } L_end2039: ;
{ R21 * rv2041 = l_P_2038;
return rv2041; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R21 * p_E, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
rt_int l_N_2042; memset(&l_N_2042, 0, sizeof l_N_2042);
l_N_2042 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if (((l_N_2042 < p_LO) || (l_N_2042 > p_HI)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
static R9 r_ROUNDING_ARG(R21 * p_E, rt_int p_N) { RT_B_TICK(); 
R21 * l_L_2043; memset(&l_L_2043, 0, sizeof l_L_2043);
l_L_2043 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_2043 == NULL)))
{
if (((((*(R21 *)rt_nil_check(l_L_2043))).f_KIND == g_N_QUAL) && ((((*(R21 *)rt_nil_check(l_L_2043))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_2043))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R9 rv2044 = r_MK(rt_str("1", 1));
return rv2044; }
}
{ R9 rv2045 = r_MK(rt_str("0", 1));
return rv2045; }
}
if (((((*(R21 *)rt_nil_check(l_L_2043))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_L_2043))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_2043))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R9 rv2046 = r_MK(rt_str("1", 1));
return rv2046; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_L_2043))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R9 rv2047 = r_MK(rt_str("0", 1));
return rv2047; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R9 rv2048 = r_MK(rt_str("1", 1));
return rv2048; }
}
{ R9 rv2049 = r_MK(rt_str("0", 1));
return rv2049; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R21 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv2050 = 0;
return rv2050; }
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv2051 = (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv2051; }
}
{ rt_int rv2052 = 0;
return rv2052; }
rt_raise(RT_X_INIT);
}
static R21 * r_ARG_EXPR(R21 * p_E) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R21 * rv2053 = ((*(R21 *)rt_nil_check(p_E))).f_A;
return rv2053; }
}
{ R21 * rv2054 = p_E;
return rv2054; }
rt_raise(RT_X_INIT);
}
static R9 r_OPERATOR_SYMBOL(R9 p_NAME) { RT_B_TICK(); 
rstr l_NAMES_2055; memset(&l_NAMES_2055, 0, sizeof l_NAMES_2055);
l_NAMES_2055 = rt_b_str_new(((rt_int)299LL), 0);
rt_b_assign(&l_NAMES_2055, rt_str(" ADD_:+ SUBTRACT_:- MULTIPLY_:* DIVIDE_:/ MODULUS_:MOD EXPONENTIATE_:** CONCATENATE_:!! EQUAL_:= UNEQUAL_:<> GREATER_THAN_:> LESS_THAN_:< GREATER_EQUAL_:>= LESS_EQUAL_:<= AND_:AND OR_:OR XOR_:XOR IMPLIES_:-> MD_ADD_:+ MD_SUBTRACT_:- MD_MULTIPLY_:* MD_DIVIDE_:/ NEGATE_:- MON_PLUS_:+ COMPLEMENT_:NOT ", 299));
rt_int l_L_2056; memset(&l_L_2056, 0, sizeof l_L_2056);
l_L_2056 = (p_NAME).f_LEN;
{ rt_int it2058_lo = ((rt_int)0LL), it2058_hi = rt_sub(rt_sub(((rt_int)299LL), l_L_2056), ((rt_int)2LL));
for (rt_int it2058 = it2058_lo; it2058 <= it2058_hi; it2058++) {
{
if ((rt_b_eq(rt_b_slice(l_NAMES_2055, it2058, it2058), rt_str(" ", 1)) && rt_b_eq(rt_b_slice(l_NAMES_2055, rt_add(rt_add(it2058, l_L_2056), ((rt_int)1LL)), rt_add(rt_add(it2058, l_L_2056), ((rt_int)1LL))), rt_str(":", 1))))
{
if (rt_b_eq(rt_b_slice(l_NAMES_2055, rt_add(it2058, ((rt_int)1LL)), rt_add(it2058, l_L_2056)), r_STR(p_NAME, l_L_2056)))
{
{
rt_int l_J_2059; memset(&l_J_2059, 0, sizeof l_J_2059);
l_J_2059 = rt_add(rt_add(it2058, l_L_2056), ((rt_int)2LL));
for (;;) {
if (rt_b_eq(rt_b_slice(l_NAMES_2055, l_J_2059, l_J_2059), rt_str(" ", 1))) goto L_end2060;
{
l_J_2059 = rt_add(l_J_2059, ((rt_int)1LL));
}
RT_B_TICK();
} L_end2060: ;
{ R9 rv2061 = r_MKN(rt_b_slice(l_NAMES_2055, rt_add(rt_add(it2058, l_L_2056), ((rt_int)2LL)), rt_sub(l_J_2059, ((rt_int)1LL))));
return rv2061; }
}
}
}
}
RT_B_TICK();
if (it2058 == it2058_hi) break;
} } L_end2057: ;
{ R9 rv2062 = r_NO_TEXT();
return rv2062; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R9 l_NAME_2063; memset(&l_NAME_2063, 0, sizeof l_NAME_2063);
S_R9(&l_NAME_2063, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2064; memset(&l_LINE_2064, 0, sizeof l_LINE_2064);
l_LINE_2064 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
rt_int l_N_2065; memset(&l_N_2065, 0, sizeof l_N_2065);
l_N_2065 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if ((r_TEQS(l_NAME_2063, rt_str("STORE_", 6)) || r_TEQS(l_NAME_2063, rt_str("SUBSTRING_STORE_", 16))))
{
{
R21 * l_TGT_2066; memset(&l_TGT_2066, 0, sizeof l_TGT_2066);
l_TGT_2066 = r_FIRST_OUT_ARG(p_E);
R21 * l_S_2067; memset(&l_S_2067, 0, sizeof l_S_2067);
l_S_2067 = r_NEW_NODE(g_N_ASSIGN, l_LINE_2064);
R21 * l_SRC_2068; memset(&l_SRC_2068, 0, sizeof l_SRC_2068);
l_SRC_2068 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (((l_TGT_2066 == NULL) || (l_SRC_2068 == NULL)))
{
r_FAILT(l_LINE_2064, rt_str("the wrong arguments for ", 24), l_NAME_2063);
}
if (r_TEQS(l_NAME_2063, rt_str("STORE_", 6)))
{
((*(R21 *)rt_nil_check(l_S_2067))).f_A = l_TGT_2066;
}
else
{
if ((l_N_2065 < ((rt_int)3LL)))
{
r_FAIL(l_LINE_2064, rt_str("SUBSTRING_STORE_ (V, L, U # X) (D.5)", 36));
}
((*(R21 *)rt_nil_check(l_S_2067))).f_A = r_NEW_NODE(g_N_SUBSTR, l_LINE_2064);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2067))).f_A))).f_A = l_TGT_2066;
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2067))).f_A))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2067))).f_A))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
}
((*(R21 *)rt_nil_check(l_S_2067))).f_B = r_QUALIFIED(r_COPY_NODE(l_SRC_2068), r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_add(((rt_int)1LL), rt_mul(((rt_int)2LL), r_BOOL_INT(r_TEQS(l_NAME_2063, rt_str("SUBSTRING_STORE_", 16)))))), l_LINE_2064);
{
R14 l_SAVED_CODE_2069; memset(&l_SAVED_CODE_2069, 0, sizeof l_SAVED_CODE_2069);
S_R14(&l_SAVED_CODE_2069, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R9 l_C_2070; memset(&l_C_2070, 0, sizeof l_C_2070);
S_R9(&l_C_2070, r_MK(rt_str("({", 2)), 0);
R15 * l_P_2071; memset(&l_P_2071, 0, sizeof l_P_2071);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2072; memset(&rc2072, 0, sizeof rc2072);  rc2072.f_HEAD = NULL; rc2072.f_TAIL = NULL; rc2072; }), 0);
r_ASSIGN_STMT(l_S_2067);
l_P_2071 = (((*(R7 *)rt_nil_check(g_W))).f_CODE).f_HEAD;
for (;;) {
if ((l_P_2071 == NULL)) goto L_end2073;
{
S_R9(&l_C_2070, r_FMT2(rt_str("@ @", 3), l_C_2070, ((*(R15 *)rt_nil_check(l_P_2071))).f_T), 0);
l_P_2071 = ((*(R15 *)rt_nil_check(l_P_2071))).f_NEXT;
}
RT_B_TICK();
} L_end2073: ;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2069, 0);
{ R26 rv2074 = r_MKET(r_CATS(l_C_2070, rt_str(" })", 3)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2074; }
}
}
}
if (r_TEQS(l_NAME_2063, rt_str("SUBSTRING_", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R21 * l_S_2075; memset(&l_S_2075, 0, sizeof l_S_2075);
l_S_2075 = r_NEW_NODE(g_N_SUBSTR, l_LINE_2064);
((*(R21 *)rt_nil_check(l_S_2075))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
((*(R21 *)rt_nil_check(l_S_2075))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(l_S_2075))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
((*(R21 *)rt_nil_check(l_S_2075))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv2076 = r_EXPR(l_S_2075, p_WANT);
return rv2076; }
}
}
{
R9 l_SYM__2077; memset(&l_SYM__2077, 0, sizeof l_SYM__2077);
S_R9(&l_SYM__2077, r_OPERATOR_SYMBOL(l_NAME_2063), 0);
rt_int l_UNARY_OP_2078; memset(&l_UNARY_OP_2078, 0, sizeof l_UNARY_OP_2078);
l_UNARY_OP_2078 = ((r_TEQS(l_NAME_2063, rt_str("NEGATE_", 7)) || r_TEQS(l_NAME_2063, rt_str("MON_PLUS_", 9))) || r_TEQS(l_NAME_2063, rt_str("COMPLEMENT_", 11)));
R21 * l_X_2079; memset(&l_X_2079, 0, sizeof l_X_2079);
if (l_UNARY_OP_2078)
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)3LL));
l_X_2079 = r_NEW_NODE(g_N_UNOP, l_LINE_2064);
S_R9(&((*(R21 *)rt_nil_check(l_X_2079))).f_NAME, l_SYM__2077, 0);
((*(R21 *)rt_nil_check(l_X_2079))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv2080 = r_EXPR(r_QUALIFIED(l_X_2079, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), l_LINE_2064), p_WANT);
return rv2080; }
}
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)4LL));
l_X_2079 = r_BIN_NODE(l_SYM__2077, l_LINE_2064, r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A), r_COPY_NODE(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))));
if (r_TEQS(l_SYM__2077, rt_str("/", 1)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL)).f_T)))).f_KIND == g_T_FLOAT)))
{
S_R9(&((*(R21 *)rt_nil_check(l_X_2079))).f_NAME, r_MK(rt_str("//", 2)), 0);
}
}
if (rt_b_eq(rt_b_slice(r_STR(l_NAME_2063, (l_NAME_2063).f_LEN), ((rt_int)0LL), ((rt_int)2LL)), rt_str("MD_", 3)))
{
((*(R21 *)rt_nil_check(l_X_2079))).f_FL = ((rt_int)2LL);
}
{ R26 rv2081 = r_EXPR(r_QUALIFIED(l_X_2079, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_2064), p_WANT);
return rv2081; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_QUALIFIED(R21 * p_X, R21 * p_Q, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_2082; memset(&l_R_2082, 0, sizeof l_R_2082);
l_R_2082 = p_X;
R21 * l_P_2083; memset(&l_P_2083, 0, sizeof l_P_2083);
l_P_2083 = p_Q;
for (;;) {
if ((l_P_2083 == NULL)) goto L_end2084;
{
if ((l_R_2082 == p_X))
{
l_R_2082 = r_NEW_NODE(g_N_QUAL, p_LINE);
((*(R21 *)rt_nil_check(l_R_2082))).f_A = p_X;
}
if (((((((*(R21 *)rt_nil_check(l_P_2083))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_P_2083))).f_KIND == g_N_ENUMLIT))) && r_IS_ROUNDING_NAME(((*(R21 *)rt_nil_check(l_P_2083))).f_NAME)))
{
S_R9(&((*(R21 *)rt_nil_check(l_R_2082))).f_NAME, ((*(R21 *)rt_nil_check(l_P_2083))).f_NAME, 0);
}
else
{
((*(R21 *)rt_nil_check(l_R_2082))).f_B = l_P_2083;
}
l_P_2083 = ((*(R21 *)rt_nil_check(l_P_2083))).f_NEXT;
}
RT_B_TICK();
} L_end2084: ;
{ R21 * rv2085 = l_R_2082;
return rv2085; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING_NAME(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv2086 = (!(r_FIND_LITERAL(p_NAME, r_ROUNDINGS_TYPE()) == NULL));
return rv2086; }
rt_raise(RT_X_INIT);
}
static R22 * r_ROUNDINGS_TYPE(void) { RT_B_TICK(); 
R12 * l_Y_2087; memset(&l_Y_2087, 0, sizeof l_Y_2087);
l_Y_2087 = r_LOOKUP(r_MKN(rt_str("ROUNDINGS", 9)));
if ((!(l_Y_2087 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2087))).f_KIND == g_Y_TYPE))
{
{
R22 * l_T_2088; memset(&l_T_2088, 0, sizeof l_T_2088);
l_T_2088 = r_REAL_TYPE(r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_2087))).f_NAME, ((rt_int)0LL)));
if ((((*(R22 *)rt_nil_check(l_T_2088))).f_KIND == g_T_ENUM))
{
{ R22 * rv2089 = l_T_2088;
return rv2089; }
}
}
}
}
{ R22 * rv2090 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS;
return rv2090; }
rt_raise(RT_X_INIT);
}
static rt_int r_PREDEFINED_ROUNDING(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL))
{
{ rt_int rv2091 = 1;
return rv2091; }
}
if (((((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2092 = 1;
return rv2092; }
}
{ rt_int rv2093 = (((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_R", 8))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8)));
return rv2093; }
rt_raise(RT_X_INIT);
}
static R21 * r_FIRST_OUT_ARG(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))
{
{ R21 * rv2094 = ((*(R21 *)rt_nil_check(p_E))).f_C;
return rv2094; }
}
{ R21 * rv2095 = ((*(R21 *)rt_nil_check(p_E))).f_B;
return rv2095; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_OBJECT_ARG(R21 * p_L) { RT_B_TICK(); 
R21 * l_A_2096; memset(&l_A_2096, 0, sizeof l_A_2096);
l_A_2096 = p_L;
for (;;) {
if ((l_A_2096 == NULL)) goto L_end2097;
{
if ((((*(R21 *)rt_nil_check(l_A_2096))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_2098; memset(&l_Y_2098, 0, sizeof l_Y_2098);
l_Y_2098 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_2096))).f_NAME);
if ((!(l_Y_2098 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_2098))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_2098))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_2098))).f_T == NULL))))
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2098))).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
{ rt_int rv2099 = 1;
return rv2099; }
}
}
}
}
}
l_A_2096 = ((*(R21 *)rt_nil_check(l_A_2096))).f_NEXT;
}
RT_B_TICK();
} L_end2097: ;
{ rt_int rv2100 = 0;
return rv2100; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R9 l_NAME_2101; memset(&l_NAME_2101, 0, sizeof l_NAME_2101);
S_R9(&l_NAME_2101, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2102; memset(&l_LINE_2102, 0, sizeof l_LINE_2102);
l_LINE_2102 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if ((!(r_CUR_GENERIC() == NULL)))
{
if (r_GENERIC_OBJECT_ARG(((*(R21 *)rt_nil_check(p_E))).f_A))
{
r_REQUIRE_WHERE(l_NAME_2101, l_LINE_2102);
}
}
if ((((((r_OPERATOR_SYMBOL(l_NAME_2101)).f_LEN > ((rt_int)0LL)) || r_TEQS(l_NAME_2101, rt_str("STORE_", 6))) || r_TEQS(l_NAME_2101, rt_str("SUBSTRING_", 10))) || r_TEQS(l_NAME_2101, rt_str("SUBSTRING_STORE_", 16))))
{
{ R26 rv2103 = r_OPERATOR_BUILTIN(p_E, p_WANT);
return rv2103; }
}
if ((r_TEQS(l_NAME_2101, rt_str("PUT", 3)) || r_TEQS(l_NAME_2101, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2104; memset(&l_V_2104, 0, sizeof l_V_2104);
S_R26(&l_V_2104, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2104).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_2102, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
r_ASCII_ONLY((l_V_2104).f_T, rt_str("the terminal", 12), l_LINE_2102);
if (r_TEQS(l_NAME_2101, rt_str("PUT", 3)))
{
{ R26 rv2105 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_2104).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2105; }
}
{ R26 rv2106 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_2104).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2106; }
}
}
else if (r_TEQS(l_NAME_2101, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2107 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2107; }
}
else if (r_TEQS(l_NAME_2101, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2108 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2108; }
}
else if (r_TEQS(l_NAME_2101, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2109 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2109; }
}
else if (r_TEQS(l_NAME_2101, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2110 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2110; }
}
else if (r_TEQS(l_NAME_2101, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2111 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2111; }
}
else if (r_TEQS(l_NAME_2101, rt_str("REAL_TIME", 9)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2112 = r_MKET(r_MK(rt_str("rt_b_real_time()", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2112; }
}
else if (r_TEQS(l_NAME_2101, rt_str("ARGUMENT_COUNT", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2113 = r_MKET(r_MK(rt_str("rt_argc()", 9)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2113; }
}
else if (r_TEQS(l_NAME_2101, rt_str("ARGUMENT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2114 = r_MKET(r_FMT1(rt_str("rt_arg(@)", 9), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2114; }
}
else if ((r_TEQS(l_NAME_2101, rt_str("FILE_EXISTS", 11)) || r_TEQS(l_NAME_2101, rt_str("READ_FILE", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2115; memset(&l_V_2115, 0, sizeof l_V_2115);
S_R26(&l_V_2115, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2115).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_2102, rt_str("a file is named by a character string: ", 39), l_NAME_2101);
}
if (r_TEQS(l_NAME_2101, rt_str("FILE_EXISTS", 11)))
{
{ R26 rv2116 = r_MKET(r_FMT1(rt_str("rt_b_file_exists(@)", 19), (l_V_2115).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2116; }
}
{ R26 rv2117 = r_MKET(r_FMT1(rt_str("rt_read_file(@)", 15), (l_V_2115).f_C), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2117; }
}
}
else if (r_TEQS(l_NAME_2101, rt_str("WRITE_FILE", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_N_2118; memset(&l_N_2118, 0, sizeof l_N_2118);
S_R26(&l_N_2118, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R26 l_V_2119; memset(&l_V_2119, 0, sizeof l_V_2119);
S_R26(&l_V_2119, r_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT, NULL), 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_N_2118).f_T)))).f_KIND == g_T_STR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2119).f_T)))).f_KIND == g_T_STR))))
{
r_FAIL(l_LINE_2102, rt_str("WRITE_FILE (name, text) takes two character strings", 51));
}
{ R26 rv2120 = r_MKET(r_FMT2(rt_str("rt_write_file(@, @)", 19), (l_N_2118).f_C, (l_V_2119).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2120; }
}
}
if (r_TEQS(l_NAME_2101, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2121 = r_IMAGE_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_2102);
return rv2121; }
}
else if (r_TEQS(l_NAME_2101, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv2122 = r_TO_FIXED_CALL(p_E);
return rv2122; }
}
else if (r_TEQS(l_NAME_2101, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_2123; memset(&l_V_2123, 0, sizeof l_V_2123);
S_R26(&l_V_2123, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R23 l_P_2124; memset(&l_P_2124, 0, sizeof l_P_2124);
S_R23(&l_P_2124, r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_VT_2125; memset(&l_VT_2125, 0, sizeof l_VT_2125);
l_VT_2125 = r_REAL_TYPE((l_V_2123).f_T);
R22 * l_T_2126; memset(&l_T_2126, 0, sizeof l_T_2126);
l_T_2126 = r_FLOAT_TYPE((l_P_2124).f_V);
R9 l_SINGLE_2127; memset(&l_SINGLE_2127, 0, sizeof l_SINGLE_2127);
S_R9(&l_SINGLE_2127, r_SINGLE_C((l_P_2124).f_V), 0);
R9 l_TR_2128; memset(&l_TR_2128, 0, sizeof l_TR_2128);
S_R9(&l_TR_2128, r_MK(rt_str("0", 1)), 0);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A) == ((rt_int)3LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT))).f_KIND == g_N_QUAL)))
{
{
R21 * l_R_2129; memset(&l_R_2129, 0, sizeof l_R_2129);
l_R_2129 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
if ((l_R_2129 == NULL))
{
l_R_2129 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT;
}
if ((((*(R21 *)rt_nil_check(l_R_2129))).f_KIND == g_N_QUAL))
{
l_R_2129 = r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_R_2129))).f_NAME, (((*(R21 *)rt_nil_check(l_R_2129))).f_NAME).f_LEN), l_LINE_2102);
}
if (r_TEQS(((*(R21 *)rt_nil_check(l_R_2129))).f_NAME, rt_str("TRUNCATED", 9)))
{
S_R9(&l_TR_2128, r_MK(rt_str("1", 1)), 0);
}
else if ((!r_TEQS(((*(R21 *)rt_nil_check(l_R_2129))).f_NAME, rt_str("ROUNDED", 7))))
{
r_FAIL(l_LINE_2102, rt_str("TO_FLOAT is predefined for ROUNDED and TRUNCATED (3.3.6.1)", 58));
}
}
}
if ((((*(R22 *)rt_nil_check(l_VT_2125))).f_KIND == g_T_INT))
{
{ R26 rv2130 = r_MKET(r_FMT4(rt_str("rt_b_float_of_fix_r(@, @, @, @)", 31), (l_V_2123).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_2125))).f_SCALE), l_SINGLE_2127, l_TR_2128), l_T_2126);
return rv2130; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_2125))).f_KIND == g_T_FLOAT))
{
if (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) && (r_IMP_PRECISION_OF((l_P_2124).f_V) > r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_2125))).f_SCALE))))
{
{
R21 * l_Q_2131; memset(&l_Q_2131, 0, sizeof l_Q_2131);
l_Q_2131 = r_NEW_NODE(g_N_QUAL, l_LINE_2102);
R21 * l_SAVED_Q_2132; memset(&l_SAVED_Q_2132, 0, sizeof l_SAVED_Q_2132);
l_SAVED_Q_2132 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_L_2133; memset(&l_L_2133, 0, sizeof l_L_2133);
((*(R21 *)rt_nil_check(l_Q_2131))).f_B = r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_Q_2131;
S_R26(&l_L_2133, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_2132;
{ R26 rv2134 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_L_2133).f_C, l_SINGLE_2127, l_TR_2128), l_T_2126);
return rv2134; }
}
}
{ R26 rv2135 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_V_2123).f_C, l_SINGLE_2127, l_TR_2128), l_T_2126);
return rv2135; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_2125))).f_KIND == g_T_STR))
{
if (((!(((*(R22 *)rt_nil_check(l_VT_2125))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(l_VT_2125))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))))
{
r_FAIL(l_LINE_2102, rt_str("TO_FLOAT is predefined for ASCII strings only (3.3.6.1)", 55));
}
{ R26 rv2136 = r_MKET(r_FMT3(rt_str("rt_b_fconv(rt_b_float_of_str(@), @, @, 0)", 41), (l_V_2123).f_C, l_SINGLE_2127, l_TR_2128), l_T_2126);
return rv2136; }
}
r_FAIL(l_LINE_2102, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_2101, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2137 = r_BITS_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_2102);
return rv2137; }
}
else if (r_TEQS(l_NAME_2101, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2138; memset(&l_V_2138, 0, sizeof l_V_2138);
S_R26(&l_V_2138, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2138).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv2139 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_2138).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_2138).f_T))).f_SCALE));
return rv2139; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2138).f_T)))).f_KIND == g_T_FLOAT))
{
{ R26 rv2140 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_2138).f_C), (l_V_2138).f_T);
return rv2140; }
}
r_FAIL(l_LINE_2102, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_2101, rt_str("SUCC", 4)) || r_TEQS(l_NAME_2101, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2141; memset(&l_V_2141, 0, sizeof l_V_2141);
S_R26(&l_V_2141, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_2142; memset(&l_T_2142, 0, sizeof l_T_2142);
l_T_2142 = r_REAL_TYPE((l_V_2141).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_2142))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_2102, rt_str("an enumerated value expected by ", 32), l_NAME_2101);
}
if (r_IS_UNORDERED(l_T_2142))
{
r_FAILT(l_LINE_2102, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_2101);
}
if (r_TEQS(l_NAME_2101, rt_str("SUCC", 4)))
{
{ R26 rv2143 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_2141).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2142))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_2142))).f_BASE);
return rv2143; }
}
{ R26 rv2144 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_2141).f_C), ((*(R22 *)rt_nil_check(l_T_2142))).f_BASE);
return rv2144; }
}
}
else if (r_TEQS(l_NAME_2101, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_2145; memset(&l_V_2145, 0, sizeof l_V_2145);
S_R26(&l_V_2145, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_2146; memset(&l_K_2146, 0, sizeof l_K_2146);
l_K_2146 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2145).f_T)))).f_KIND;
R22 * l_T_2147; memset(&l_T_2147, 0, sizeof l_T_2147);
l_T_2147 = r_NEW_TYP(l_K_2146);
if (((!(l_K_2146 == g_T_STR)) && (!(l_K_2146 == g_T_BITS))))
{
r_FAIL(l_LINE_2102, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_2147))).f_BASE = ((*(R22 *)rt_nil_check((l_V_2145).f_T))).f_BASE;
{ R26 rv2148 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_2145).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_2147);
return rv2148; }
}
}
else if (r_TEQS(l_NAME_2101, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2149 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2149; }
}
else if (r_TEQS(l_NAME_2101, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2150 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv2150; }
}
else if (((r_TEQS(l_NAME_2101, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_2101, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_2101, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R9 l_BITS_2151; memset(&l_BITS_2151, 0, sizeof l_BITS_2151);
S_R9(&l_BITS_2151, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_2101, rt_str("OCT_OF", 6)))
{
S_R9(&l_BITS_2151, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_2101, rt_str("HEX_OF", 6)))
{
S_R9(&l_BITS_2151, r_MK(rt_str("4", 1)), 0);
}
{
R26 l_V_2152; memset(&l_V_2152, 0, sizeof l_V_2152);
S_R26(&l_V_2152, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2152).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_2102, rt_str("a character string expected by ", 31), l_NAME_2101);
}
r_ASCII_ONLY((l_V_2152).f_T, r_STR(l_NAME_2101, (l_NAME_2101).f_LEN), l_LINE_2102);
{ R26 rv2153 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (l_V_2152).f_C, l_BITS_2151), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv2153; }
}
}
}
else if ((r_TEQS(l_NAME_2101, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_2101, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R23 l_S_2154; memset(&l_S_2154, 0, sizeof l_S_2154);
S_R23(&l_S_2154, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_2155; memset(&l_R_2155, 0, sizeof l_R_2155);
S_R23(&l_R_2155, r_MANIFEST_INTEGER_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
if ((!((l_R_2155).f_V == ((rt_int)2LL))))
{
r_FAIL(l_LINE_2102, rt_str("only radix 2 is predefined (3.2.6.3)", 36));
}
r_CHECK_PRECISION_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_2102);
if (r_TEQS(l_NAME_2101, rt_str("FIXED_MIN", 9)))
{
{ R26 rv2156 = r_MKET(r_STD_MIN_C(), r_INT_TYPE((l_S_2154).f_V));
return rv2156; }
}
{ R26 rv2157 = r_MKET(r_STD_MAX_C(), r_INT_TYPE((l_S_2154).f_V));
return rv2157; }
}
}
else if (((r_TEQS(l_NAME_2101, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_2101, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_2101, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R23 l_P_2158; memset(&l_P_2158, 0, sizeof l_P_2158);
S_R23(&l_P_2158, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_T_2159; memset(&l_T_2159, 0, sizeof l_T_2159);
l_T_2159 = r_FLOAT_TYPE((l_P_2158).f_V);
R9 l_C_2160; memset(&l_C_2160, 0, sizeof l_C_2160);
S_R9(&l_C_2160, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF((l_P_2158).f_V) == ((rt_int)7LL)))
{
S_R9(&l_C_2160, r_MK(rt_str("FLT", 3)), 0);
}
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
if (r_TEQS(l_C_2160, rt_str("FLT", 3)))
{
S_R9(&l_C_2160, r_MK(rt_str("0x1.fffffep+126", 15)), 0);
}
else
{
S_R9(&l_C_2160, r_MK(rt_str("0x1.fffffffffffffp+126", 22)), 0);
}
if (r_TEQS(l_NAME_2101, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv2161 = r_MKET(r_FMT1(rt_str("(-@)", 4), l_C_2160), l_T_2159);
return rv2161; }
}
else if (r_TEQS(l_NAME_2101, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv2162 = r_MKET(l_C_2160, l_T_2159);
return rv2162; }
}
S_R9(&l_C_2160, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF((l_P_2158).f_V) == ((rt_int)7LL)))
{
S_R9(&l_C_2160, r_MK(rt_str("FLT", 3)), 0);
}
}
if (r_TEQS(l_NAME_2101, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv2163 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_2160), l_T_2159);
return rv2163; }
}
else if (r_TEQS(l_NAME_2101, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv2164 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_2160), l_T_2159);
return rv2164; }
}
{ R26 rv2165 = r_MKET(r_FMT1(rt_str("@_EPSILON", 9), l_C_2160), l_T_2159);
return rv2165; }
}
}
else if (r_TEQS(l_NAME_2101, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2166 = r_INT_ET(r_IMP_PRECISION_OF((r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION())).f_V));
return rv2166; }
}
else if (r_TEQS(l_NAME_2101, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2167 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2167; }
}
else if (r_TEQS(l_NAME_2101, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2168 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2168; }
}
{ R26 rv2169 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv2169; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_2170; memset(&l_T_2170, 0, sizeof l_T_2170);
l_T_2170 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_2171; memset(&l_K_2171, 0, sizeof l_K_2171);
l_K_2171 = ((*(R22 *)rt_nil_check(l_T_2170))).f_KIND;
R22 * l_S_2172; memset(&l_S_2172, 0, sizeof l_S_2172);
l_S_2172 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_2171 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_2170))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv2173 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_2172);
return rv2173; }
}
{ R26 rv2174 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_2170))).f_SCALE)), l_S_2172);
return rv2174; }
}
else if ((l_K_2171 == g_T_FLOAT))
{
{ R26 rv2175 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_2170))).f_SCALE)), l_S_2172);
return rv2175; }
}
else if ((l_K_2171 == g_T_BOOL))
{
{ R26 rv2176 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_2172);
return rv2176; }
}
else if ((l_K_2171 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_2170))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv2177 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_2172);
return rv2177; }
}
{ R26 rv2178 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2170))).f_BASE))).f_CNAME, (p_V).f_C), l_S_2172);
return rv2178; }
}
else if (((l_K_2171 == g_T_STR) || (l_K_2171 == g_T_BITS)))
{
{ R26 rv2179 = r_MKET((p_V).f_C, l_S_2172);
return rv2179; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_2170));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R21 * p_E) { RT_B_TICK(); 
R26 l_V_2180; memset(&l_V_2180, 0, sizeof l_V_2180);
S_R26(&l_V_2180, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_2181; memset(&l_T_2181, 0, sizeof l_T_2181);
l_T_2181 = r_REAL_TYPE((l_V_2180).f_T);
rt_int l_N_2182; memset(&l_N_2182, 0, sizeof l_N_2182);
l_N_2182 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
R9 l_RND_2183; memset(&l_RND_2183, 0, sizeof l_RND_2183);
S_R9(&l_RND_2183, r_ROUNDING_ARG(p_E, l_N_2182), 0);
rt_int l_S_2184; memset(&l_S_2184, 0, sizeof l_S_2184);
l_S_2184 = ((rt_int)0LL);
if (((l_N_2182 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
l_S_2184 = (r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL))).f_V;
}
{
rt_int l_K_2185; memset(&l_K_2185, 0, sizeof l_K_2185);
l_K_2185 = ((rt_int)2LL);
for (;;) {
if ((l_K_2185 >= l_N_2182)) goto L_end2186;
{
{
R21 * l_R_2187; memset(&l_R_2187, 0, sizeof l_R_2187);
l_R_2187 = r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_2185));
if ((r_IS_ROUNDING(l_R_2187) || (((((*(R21 *)rt_nil_check(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_2185)))).f_KIND == g_N_QUAL) && (l_K_2185 == rt_sub(l_N_2182, ((rt_int)1LL)))))))
{
if ((!(l_K_2185 == rt_sub(l_N_2182, ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the rounding mode is the last argument of TO_FIXED (3.2.6.1)", 60));
}
}
else if (((((((*(R21 *)rt_nil_check(l_R_2187))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_R_2187))).f_KIND == g_N_ENUMLIT))) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_R_2187))).f_NAME))))
{
r_CHECK_PRECISION_ARG(l_R_2187, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
else if (((((*(R21 *)rt_nil_check(l_R_2187))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(l_R_2187))).f_NAME, rt_str("PRECISION", 9))))
{
}
else
{
if ((!((r_MANIFEST_INTEGER_ARG(l_R_2187, rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL))).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 is predefined (3.2.6.1)", 36));
}
}
}
l_K_2185 = rt_add(l_K_2185, ((rt_int)1LL));
}
RT_B_TICK();
} L_end2186: ;
}
if (((((*(R22 *)rt_nil_check(l_T_2181))).f_KIND == g_T_INT) && (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) || (((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_INT)))))
{
{ R26 rv2188 = r_MKET(r_FMT3(rt_str("rt_b_fix_val(@, @, @)", 21), r_CSTRING(((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_NAME), r_NUM(l_S_2184), l_RND_2183), r_INT_TYPE(l_S_2184));
return rv2188; }
}
if ((((*(R22 *)rt_nil_check(l_T_2181))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_2189; memset(&l_SAVED_2189, 0, sizeof l_SAVED_2189);
l_SAVED_2189 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R9 l_C_2190; memset(&l_C_2190, 0, sizeof l_C_2190);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_2183, rt_str("1", 1));
S_R9(&l_C_2190, r_RESCALE_C((l_V_2180).f_C, ((*(R22 *)rt_nil_check(l_T_2181))).f_SCALE, l_S_2184), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_2189;
{ R26 rv2191 = r_MKET(l_C_2190, r_INT_TYPE(l_S_2184));
return rv2191; }
}
}
else if ((((*(R22 *)rt_nil_check(l_T_2181))).f_KIND == g_T_FLOAT))
{
{ R26 rv2192 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_2180).f_C, r_NUM(l_S_2184), l_RND_2183), r_INT_TYPE(l_S_2184));
return rv2192; }
}
else if (((((*(R22 *)rt_nil_check(l_T_2181))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_2181))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_2181))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_2181))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_2181))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2181))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv2193 = r_MKET(r_RESCALE_C((l_V_2180).f_C, ((rt_int)0LL), l_S_2184), r_INT_TYPE(l_S_2184));
return rv2193; }
}
else if ((((*(R22 *)rt_nil_check(l_T_2181))).f_KIND == g_T_BITS))
{
{ R26 rv2194 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_2180).f_C), ((rt_int)0LL), l_S_2184), r_INT_TYPE(l_S_2184));
return rv2194; }
}
else if ((((*(R22 *)rt_nil_check(l_T_2181))).f_KIND == g_T_STR))
{
r_ASCII_ONLY(l_T_2181, rt_str("TO_FIXED", 8), ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv2195 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_2180).f_C, r_NUM(l_S_2184), l_RND_2183), r_INT_TYPE(l_S_2184));
return rv2195; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_2180).f_T));
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_SIZE_OR(R22 * p_T) { RT_B_TICK(); 
R23 l_M_2196; memset(&l_M_2196, 0, sizeof l_M_2196);
S_R23(&l_M_2196, r_STATIC_SIZE(p_T), 0);
if ((l_M_2196).f_OK)
{
{ rt_int rv2197 = (l_M_2196).f_V;
return rv2197; }
}
{ rt_int rv2198 = rt_neg(((rt_int)1LL));
return rv2198; }
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_2199; memset(&l_T_2199, 0, sizeof l_T_2199);
l_T_2199 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_2200; memset(&l_K_2200, 0, sizeof l_K_2200);
l_K_2200 = ((*(R22 *)rt_nil_check(l_T_2199))).f_KIND;
if ((l_K_2200 == g_T_BITS))
{
{ R26 rv2201 = p_V;
return rv2201; }
}
else if ((l_K_2200 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_2199))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2199))).f_REPS))).f_B == NULL)))
{
{ R26 rv2202 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_2199)), r_BITS_TYPE(r_ENUM_SIZE(l_T_2199)));
return rv2202; }
}
}
{ R26 rv2203 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_2199))), r_BITS_TYPE(r_ENUM_SIZE(l_T_2199)));
return rv2203; }
}
else if ((l_K_2200 == g_T_STR))
{
{ R26 rv2204 = r_MKET(r_FMT4(rt_str("rt_b_bits_of_chars(@, @, @, @)", 30), (p_V).f_C, r_NUM(r_CHAR_SIZE(l_T_2199)), r_NUM(r_PACKING_OF(l_T_2199)), r_CHAR_REPS(l_T_2199)), r_BITS_TYPE(r_STATIC_SIZE_OR(l_T_2199)));
return rv2204; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_2200 == g_T_INT))
{
{ R26 rv2205 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(((*(R7 *)rt_nil_check(g_W))).f_WORD)), r_BITS_TYPE(((*(R7 *)rt_nil_check(g_W))).f_WORD));
return rv2205; }
}
else if ((l_K_2200 == g_T_BOOL))
{
{ R26 rv2206 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv2206; }
}
else if ((l_K_2200 == g_T_FLOAT))
{
{ R26 rv2207 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv2207; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_2199));
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
{ rt_int rv2208 = 0;
return rv2208; }
}
{ rt_int rv2209 = ((r_IS_LITERALISH(((*(R27 *)rt_nil_check(p_A))).f_E) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv2209; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R27 * p_A) { RT_B_TICK(); 
rt_int l_N_2210; memset(&l_N_2210, 0, sizeof l_N_2210);
l_N_2210 = ((rt_int)0LL);
R27 * l_P_2211; memset(&l_P_2211, 0, sizeof l_P_2211);
l_P_2211 = p_A;
for (;;) {
if ((l_P_2211 == NULL)) goto L_end2212;
{
l_N_2210 = rt_add(l_N_2210, ((rt_int)1LL));
l_P_2211 = ((*(R27 *)rt_nil_check(l_P_2211))).f_NEXT;
}
RT_B_TICK();
} L_end2212: ;
{ rt_int rv2213 = l_N_2210;
return rv2213; }
rt_raise(RT_X_INIT);
}
static R27 * r_CALL_ARGS(R21 * p_E) { RT_B_TICK(); 
R27 * l_HEAD_2214; memset(&l_HEAD_2214, 0, sizeof l_HEAD_2214);
l_HEAD_2214 = NULL;
R27 * l_TAIL_2215; memset(&l_TAIL_2215, 0, sizeof l_TAIL_2215);
l_TAIL_2215 = NULL;
rt_int l_G_2216; memset(&l_G_2216, 0, sizeof l_G_2216);
l_G_2216 = ((rt_int)0LL);
{ rt_int it2218_lo = ((rt_int)0LL), it2218_hi = ((rt_int)2LL);
for (rt_int it2218 = it2218_lo; it2218 <= it2218_hi; it2218++) {
{
{
R21 * l_P_2219; memset(&l_P_2219, 0, sizeof l_P_2219);
l_P_2219 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((it2218 == ((rt_int)1LL)))
{
l_P_2219 = ((*(R21 *)rt_nil_check(p_E))).f_B;
}
else if ((it2218 == ((rt_int)2LL)))
{
l_P_2219 = ((*(R21 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_2219 == NULL)) goto L_end2220;
{
{
R27 * l_A_2221; memset(&l_A_2221, 0, sizeof l_A_2221);
l_A_2221 = r_NODE_ARG(l_P_2219, it2218, NULL);
if ((l_TAIL_2215 == NULL))
{
l_HEAD_2214 = l_A_2221;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2215))).f_NEXT = l_A_2221;
}
l_TAIL_2215 = l_A_2221;
}
l_P_2219 = ((*(R21 *)rt_nil_check(l_P_2219))).f_NEXT;
}
RT_B_TICK();
} L_end2220: ;
}
}
RT_B_TICK();
if (it2218 == it2218_hi) break;
} } L_end2217: ;
{ R27 * rv2222 = l_HEAD_2214;
return rv2222; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SAVED_2223; memset(&l_SAVED_2223, 0, sizeof l_SAVED_2223);
l_SAVED_2223 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_2224; memset(&l_SAVED_Q_2224, 0, sizeof l_SAVED_Q_2224);
l_SAVED_Q_2224 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_2225; memset(&l_V_2225, 0, sizeof l_V_2225);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_2225, r_CALL_EXPR1(p_E, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_2223;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_2224;
{ R26 rv2226 = l_V_2225;
return rv2226; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR1(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R27 * l_ARGS_2227; memset(&l_ARGS_2227, 0, sizeof l_ARGS_2227);
l_ARGS_2227 = r_CALL_ARGS(p_E);
R12 * l_Y_2228; memset(&l_Y_2228, 0, sizeof l_Y_2228);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv2229 = r_START_IO_CALL(p_E);
return rv2229; }
}
l_Y_2228 = r_BOUND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2228 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2228))).f_KIND == g_Y_BUILTIN))
{
{
R21 * l_N_2230; memset(&l_N_2230, 0, sizeof l_N_2230);
l_N_2230 = r_COPY_NODE(p_E);
S_R9(&((*(R21 *)rt_nil_check(l_N_2230))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2228))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2230))).f_NEXT = ((*(R21 *)rt_nil_check(p_E))).f_NEXT;
{ R26 rv2231 = r_BUILTIN(l_N_2230, p_WANT);
return rv2231; }
}
}
{ R26 rv2232 = r_CALL_SYM(l_Y_2228, l_ARGS_2227, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv2232; }
}
{
R9 l_SHORT_2233; memset(&l_SHORT_2233, 0, sizeof l_SHORT_2233);
S_R9(&l_SHORT_2233, r_WHERE_SHORT_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME), 0);
if ((!r_TEQ(l_SHORT_2233, ((*(R21 *)rt_nil_check(p_E))).f_NAME)))
{
{
R21 * l_N_2234; memset(&l_N_2234, 0, sizeof l_N_2234);
l_N_2234 = r_COPY_NODE(p_E);
S_R9(&((*(R21 *)rt_nil_check(l_N_2234))).f_NAME, l_SHORT_2233, 0);
((*(R21 *)rt_nil_check(l_N_2234))).f_NEXT = ((*(R21 *)rt_nil_check(p_E))).f_NEXT;
{ R26 rv2235 = r_CALL_EXPR1(l_N_2234, p_WANT);
return rv2235; }
}
}
}
l_Y_2228 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2227, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_2228 == NULL))
{
{
R12 * l_P_2236; memset(&l_P_2236, 0, sizeof l_P_2236);
l_P_2236 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_2236 == NULL)) goto L_end2237;
{
if ((((*(R12 *)rt_nil_check(l_P_2236))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv2238 = r_BUILTIN(p_E, p_WANT);
return rv2238; }
}
l_P_2236 = r_LOOKUP_NEXT(l_P_2236);
}
RT_B_TICK();
} L_end2237: ;
}
{
R12 * l_B_2239; memset(&l_B_2239, 0, sizeof l_B_2239);
l_B_2239 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_2239 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_2239))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv2240 = r_BUILTIN(p_E, p_WANT);
return rv2240; }
}
if (((((*(R12 *)rt_nil_check(l_B_2239))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_2239))).f_ORIG == NULL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
{
R9 l_BASE_2241; memset(&l_BASE_2241, 0, sizeof l_BASE_2241);
S_R9(&l_BASE_2241, r_CLASS_OPERATION(((*(R21 *)rt_nil_check(p_E))).f_NAME), 0);
if (((l_BASE_2241).f_LEN > ((rt_int)0LL)))
{
{
R21 * l_N_2242; memset(&l_N_2242, 0, sizeof l_N_2242);
l_N_2242 = r_COPY_NODE(p_E);
S_R9(&((*(R21 *)rt_nil_check(l_N_2242))).f_NAME, l_BASE_2241, 0);
{ R26 rv2243 = r_BUILTIN(l_N_2242, p_WANT);
return rv2243; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv2244 = r_CALL_SYM(l_Y_2228, l_ARGS_2227, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv2244; }
rt_raise(RT_X_INIT);
}
static R9 r_CLASS_OPERATION(R9 p_NAME) { RT_B_TICK(); 
rstr l_S_2245; memset(&l_S_2245, 0, sizeof l_S_2245);
l_S_2245 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2245, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2247_lo = ((rt_int)1LL), it2247_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2247 = it2247_lo; it2247 <= it2247_hi; it2247++) {
{
if (rt_b_eq(rt_b_slice(l_S_2245, it2247, it2247), rt_str("$", 1)))
{
{
R9 l_P_2248; memset(&l_P_2248, 0, sizeof l_P_2248);
S_R9(&l_P_2248, r_MKN(rt_b_slice(l_S_2245, ((rt_int)0LL), rt_sub(it2247, ((rt_int)1LL)))), 0);
R9 l_B_2249; memset(&l_B_2249, 0, sizeof l_B_2249);
S_R9(&l_B_2249, r_MKN(rt_b_slice(l_S_2245, rt_add(it2247, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))), 0);
if ((((((((r_IS_TYPE_WORD(l_P_2248) || r_TEQS(l_P_2248, rt_str("INTEGER", 7))) || r_TEQS(l_P_2248, rt_str("BOOLEAN", 7))) || r_TEQS(l_P_2248, rt_str("ENUM", 4))) || r_TEQS(l_P_2248, rt_str("ARRAY", 5))) || r_TEQS(l_P_2248, rt_str("RECORD", 6))) || r_TEQS(l_P_2248, rt_str("PTR", 3))) || r_TEQS(l_P_2248, rt_str("SEMAPHORE", 9))))
{
{
R12 * l_Y_2250; memset(&l_Y_2250, 0, sizeof l_Y_2250);
l_Y_2250 = r_LOOKUP(l_B_2249);
for (;;) {
if ((l_Y_2250 == NULL)) goto L_end2251;
{
if ((((*(R12 *)rt_nil_check(l_Y_2250))).f_KIND == g_Y_BUILTIN))
{
{ R9 rv2252 = l_B_2249;
return rv2252; }
}
l_Y_2250 = r_LOOKUP_NEXT(l_Y_2250);
}
RT_B_TICK();
} L_end2251: ;
}
}
}
{ R9 rv2253 = r_NO_TEXT();
return rv2253; }
}
}
RT_B_TICK();
if (it2247 == it2247_hi) break;
} } L_end2246: ;
{ R9 rv2254 = r_NO_TEXT();
return rv2254; }
rt_raise(RT_X_INIT);
}
static R9 r_WHERE_SHORT_NAME(R9 p_NAME) { RT_B_TICK(); 
R12 * l_G_2255; memset(&l_G_2255, 0, sizeof l_G_2255);
l_G_2255 = r_CUR_GENERIC();
rstr l_S_2256; memset(&l_S_2256, 0, sizeof l_S_2256);
l_S_2256 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2256, r_STR(p_NAME, (p_NAME).f_LEN));
if ((l_G_2255 == NULL))
{
{ R9 rv2257 = p_NAME;
return rv2257; }
}
{ rt_int it2259_lo = ((rt_int)1LL), it2259_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2259 = it2259_lo; it2259 <= it2259_hi; it2259++) {
{
if (rt_b_eq(rt_b_slice(l_S_2256, it2259, it2259), rt_str("$", 1)))
{
if (((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_G_2255))).f_BINDINGS, r_MKN(rt_b_slice(l_S_2256, ((rt_int)0LL), rt_sub(it2259, ((rt_int)1LL))))) == NULL)) && r_IN_WHERE(l_G_2255, r_MKN(rt_b_slice(l_S_2256, rt_add(it2259, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))))))
{
{ R9 rv2260 = r_MKN(rt_b_slice(l_S_2256, rt_add(it2259, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))));
return rv2260; }
}
{ R9 rv2261 = p_NAME;
return rv2261; }
}
}
RT_B_TICK();
if (it2259 == it2259_hi) break;
} } L_end2258: ;
{ R9 rv2262 = p_NAME;
return rv2262; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R9 p_NAME) { RT_B_TICK(); 
R20 * l_B_2263; memset(&l_B_2263, 0, sizeof l_B_2263);
l_B_2263 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_2264; memset(&l_S_2264, 0, sizeof l_S_2264);
l_S_2264 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2264, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2266_lo = ((rt_int)1LL), it2266_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2266 = it2266_lo; it2266 <= it2266_hi; it2266++) {
{
if (rt_b_eq(rt_b_slice(l_S_2264, it2266, it2266), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_2264, ((rt_int)0LL), rt_sub(it2266, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv2267 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_2264, rt_add(it2266, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv2267; }
}
goto L_end2265;
}
}
RT_B_TICK();
if (it2266 == it2266_hi) break;
} } L_end2265: ;
}
for (;;) {
if ((l_B_2263 == NULL)) goto L_end2268;
{
if (((!(((*(R20 *)rt_nil_check(l_B_2263))).f_R == NULL)) && r_TEQ(((*(R20 *)rt_nil_check(l_B_2263))).f_NAME, p_NAME)))
{
{ R12 * rv2269 = ((*(R20 *)rt_nil_check(l_B_2263))).f_R;
return rv2269; }
}
l_B_2263 = ((*(R20 *)rt_nil_check(l_B_2263))).f_NEXT;
}
RT_B_TICK();
} L_end2268: ;
{ R12 * rv2270 = NULL;
return rv2270; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R9 p_NAME) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv2271 = 0;
return rv2271; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv2272 = 0;
return rv2272; }
}
}
}
{ rt_int rv2273 = 1;
return rv2273; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R9 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { RT_B_TICK(); 
R12 * l_Y_2274; memset(&l_Y_2274, 0, sizeof l_Y_2274);
l_Y_2274 = r_LOOKUP(p_NAME);
R12 * l_BEST_2275; memset(&l_BEST_2275, 0, sizeof l_BEST_2275);
l_BEST_2275 = NULL;
rt_int l_BEST_SCORE_2276; memset(&l_BEST_SCORE_2276, 0, sizeof l_BEST_SCORE_2276);
l_BEST_SCORE_2276 = ((rt_int)0LL);
rt_int l_TIES_2277; memset(&l_TIES_2277, 0, sizeof l_TIES_2277);
l_TIES_2277 = ((rt_int)0LL);
rt_int l_COUNT_2278; memset(&l_COUNT_2278, 0, sizeof l_COUNT_2278);
l_COUNT_2278 = ((rt_int)0LL);
rt_int l_N_2279; memset(&l_N_2279, 0, sizeof l_N_2279);
l_N_2279 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_2274 == NULL)) goto L_end2280;
{
if ((!r_IS_ROUTINE(l_Y_2274)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2274))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end2280;
}
}
else if (r_CANDIDATE(l_Y_2274, p_NAME))
{
{
R12 * l_R_2281; memset(&l_R_2281, 0, sizeof l_R_2281);
l_R_2281 = r_ORIGINAL(l_Y_2274);
rt_int l_SCORE_2282; memset(&l_SCORE_2282, 0, sizeof l_SCORE_2282);
r_ROUTINE_HEADER(l_R_2281);
if ((((r_PARAM_COUNT(l_R_2281) == l_N_2279) && (!r_SEEN_ROUTINE(l_R_2281, p_NAME, l_Y_2274))) && (!r_HIDDEN_ROUTINE(l_R_2281, p_NAME, l_Y_2274))))
{
l_COUNT_2278 = rt_add(l_COUNT_2278, ((rt_int)1LL));
l_SCORE_2282 = r_MATCH_SCORE(l_R_2281, p_ARGS);
if ((l_SCORE_2282 > l_BEST_SCORE_2276))
{
l_BEST_2275 = l_R_2281;
l_BEST_SCORE_2276 = l_SCORE_2282;
l_TIES_2277 = ((rt_int)0LL);
}
else if (((l_SCORE_2282 == l_BEST_SCORE_2276) && (l_SCORE_2282 > ((rt_int)0LL))))
{
l_TIES_2277 = rt_add(l_TIES_2277, ((rt_int)1LL));
}
}
}
}
l_Y_2274 = r_LOOKUP_NEXT(l_Y_2274);
}
RT_B_TICK();
} L_end2280: ;
if (((l_TIES_2277 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv2283 = l_BEST_2275;
return rv2283; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R9 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2284; memset(&l_Y_2284, 0, sizeof l_Y_2284);
l_Y_2284 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2284 == p_STOP) || (l_Y_2284 == NULL))) goto L_end2285;
{
if ((((*(R12 *)rt_nil_check(l_Y_2284))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_2284) == p_R))
{
{ rt_int rv2286 = 1;
return rv2286; }
}
}
l_Y_2284 = r_LOOKUP_NEXT(l_Y_2284);
}
RT_B_TICK();
} L_end2285: ;
{ rt_int rv2287 = 0;
return rv2287; }
rt_raise(RT_X_INIT);
}
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R9 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2288; memset(&l_Y_2288, 0, sizeof l_Y_2288);
l_Y_2288 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2288 == p_STOP) || (l_Y_2288 == NULL))) goto L_end2289;
{
if (((((*(R12 *)rt_nil_check(l_Y_2288))).f_KIND == g_Y_ROUTINE) && (((*(R12 *)rt_nil_check(l_Y_2288))).f_DEPTH > ((*(R12 *)rt_nil_check(p_STOP))).f_DEPTH)))
{
{
R12 * l_O_2290; memset(&l_O_2290, 0, sizeof l_O_2290);
l_O_2290 = r_ORIGINAL(l_Y_2288);
if ((!(l_O_2290 == p_R)))
{
r_ROUTINE_HEADER(l_O_2290);
if (r_SAME_SIGNATURE(l_O_2290, p_R))
{
{ rt_int rv2291 = 1;
return rv2291; }
}
}
}
}
l_Y_2288 = r_LOOKUP_NEXT(l_Y_2288);
}
RT_B_TICK();
} L_end2289: ;
{ rt_int rv2292 = 0;
return rv2292; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B) { RT_B_TICK(); 
R28 * l_P_2293; memset(&l_P_2293, 0, sizeof l_P_2293);
l_P_2293 = ((*(R12 *)rt_nil_check(p_A))).f_PARAMS;
R28 * l_Q_2294; memset(&l_Q_2294, 0, sizeof l_Q_2294);
l_Q_2294 = ((*(R12 *)rt_nil_check(p_B))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_A))).f_GENERIC || ((*(R12 *)rt_nil_check(p_B))).f_GENERIC))
{
{ rt_int rv2295 = 0;
return rv2295; }
}
for (;;) {
if (((l_P_2293 == NULL) || (l_Q_2294 == NULL))) goto L_end2296;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2293))).f_MODE == ((*(R28 *)rt_nil_check(l_Q_2294))).f_MODE)))
{
{ rt_int rv2297 = 0;
return rv2297; }
}
if (((((*(R28 *)rt_nil_check(l_P_2293))).f_T == NULL) || (((*(R28 *)rt_nil_check(l_Q_2294))).f_T == NULL)))
{
if ((!(((*(R28 *)rt_nil_check(l_P_2293))).f_T == ((*(R28 *)rt_nil_check(l_Q_2294))).f_T)))
{
{ rt_int rv2298 = 0;
return rv2298; }
}
}
else if ((!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_2293))).f_T, ((*(R28 *)rt_nil_check(l_Q_2294))).f_T)))
{
{ rt_int rv2299 = 0;
return rv2299; }
}
l_P_2293 = ((*(R28 *)rt_nil_check(l_P_2293))).f_NEXT;
l_Q_2294 = ((*(R28 *)rt_nil_check(l_Q_2294))).f_NEXT;
}
RT_B_TICK();
} L_end2296: ;
{ rt_int rv2300 = ((l_P_2293 == NULL) && (l_Q_2294 == NULL));
return rv2300; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { RT_B_TICK(); 
rt_int l_N_2301; memset(&l_N_2301, 0, sizeof l_N_2301);
l_N_2301 = ((rt_int)0LL);
R28 * l_P_2302; memset(&l_P_2302, 0, sizeof l_P_2302);
l_P_2302 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_2302 == NULL)) goto L_end2303;
{
l_N_2301 = rt_add(l_N_2301, ((rt_int)1LL));
l_P_2302 = ((*(R28 *)rt_nil_check(l_P_2302))).f_NEXT;
}
RT_B_TICK();
} L_end2303: ;
{ rt_int rv2304 = l_N_2301;
return rv2304; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS) { RT_B_TICK(); 
R28 * l_P_2305; memset(&l_P_2305, 0, sizeof l_P_2305);
l_P_2305 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R27 * l_A_2306; memset(&l_A_2306, 0, sizeof l_A_2306);
l_A_2306 = p_ARGS;
rt_int l_EXACT_2307; memset(&l_EXACT_2307, 0, sizeof l_EXACT_2307);
l_EXACT_2307 = 1;
R20 * l_BS_2308; memset(&l_BS_2308, 0, sizeof l_BS_2308);
l_BS_2308 = r_NEW_BINDS();
R22 * l_PT_2309; memset(&l_PT_2309, 0, sizeof l_PT_2309);
for (;;) {
if ((l_P_2305 == NULL)) goto L_end2310;
{
l_PT_2309 = r_FORMAL_VIEW(p_R, l_P_2305);
if ((!(((*(R28 *)rt_nil_check(l_P_2305))).f_MODE == ((*(R27 *)rt_nil_check(l_A_2306))).f_MODE)))
{
{ rt_int rv2311 = ((rt_int)0LL);
return rv2311; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R28 *)rt_nil_check(l_P_2305))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_2305, l_A_2306, l_BS_2308)))
{
{ rt_int rv2312 = ((rt_int)0LL);
return rv2312; }
}
}
else if ((l_PT_2309 == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2306))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_A_2306))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv2313 = ((rt_int)0LL);
return rv2313; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_2306))
{
if ((!r_LITERAL_FITS(((*(R27 *)rt_nil_check(l_A_2306))).f_E, l_PT_2309)))
{
{ rt_int rv2314 = ((rt_int)0LL);
return rv2314; }
}
}
else
{
r_TYPE_ARG(l_A_2306);
{
R22 * l_AT_2315; memset(&l_AT_2315, 0, sizeof l_AT_2315);
l_AT_2315 = (((*(R27 *)rt_nil_check(l_A_2306))).f_V).f_T;
if ((!((r_SAME_CLASS(l_PT_2309, l_AT_2315) || (((((*(R22 *)rt_nil_check(l_AT_2315))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2309)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv2316 = ((rt_int)0LL);
return rv2316; }
}
if ((((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2309)))).f_GEN).f_LEN > ((rt_int)0LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2315)))).f_MLEN).f_OK))
{
{
R9 l_KEY_2317; memset(&l_KEY_2317, 0, sizeof l_KEY_2317);
S_R9(&l_KEY_2317, r_MKN(rt_b_cat(rt_str("%", 1), r_STR(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2309)))).f_GEN, (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2309)))).f_GEN).f_LEN))), 0);
R20 * l_B_2318; memset(&l_B_2318, 0, sizeof l_B_2318);
l_B_2318 = r_FIND_BIND(((*(R20 *)rt_nil_check(l_BS_2308))).f_NEXT, l_KEY_2317);
if ((!(l_B_2318 == NULL)))
{
if ((!(((*(R20 *)rt_nil_check(l_B_2318))).f_MV == (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2315)))).f_MLEN).f_V)))
{
{ rt_int rv2319 = ((rt_int)0LL);
return rv2319; }
}
}
else
{
r_ADD_BIND(l_KEY_2317, NULL, ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2315)))).f_MLEN, NULL, l_BS_2308);
}
}
}
if ((!r_SAME_TYPE(l_PT_2309, l_AT_2315)))
{
if ((((*(R28 *)rt_nil_check(l_P_2305))).f_MODE == g_M_INOUT))
{
{ rt_int rv2320 = ((rt_int)0LL);
return rv2320; }
}
l_EXACT_2307 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2315)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2309)))).f_KIND == g_T_INT)))
{
if (((((*(R28 *)rt_nil_check(l_P_2305))).f_MODE == g_M_IN) && (((*(R22 *)rt_nil_check(l_AT_2315))).f_SCALE > ((*(R22 *)rt_nil_check(l_PT_2309))).f_SCALE)))
{
{ rt_int rv2321 = ((rt_int)0LL);
return rv2321; }
}
else if (((((*(R28 *)rt_nil_check(l_P_2305))).f_MODE == g_M_OUT) && (((*(R22 *)rt_nil_check(l_PT_2309))).f_SCALE > ((*(R22 *)rt_nil_check(l_AT_2315))).f_SCALE)))
{
{ rt_int rv2322 = ((rt_int)0LL);
return rv2322; }
}
}
}
}
l_P_2305 = ((*(R28 *)rt_nil_check(l_P_2305))).f_NEXT;
l_A_2306 = ((*(R27 *)rt_nil_check(l_A_2306))).f_NEXT;
}
RT_B_TICK();
} L_end2310: ;
if (l_EXACT_2307)
{
{ rt_int rv2323 = ((rt_int)2LL);
return rv2323; }
}
{ rt_int rv2324 = ((rt_int)1LL);
return rv2324; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_2325; memset(&l_RT_2325, 0, sizeof l_RT_2325);
l_RT_2325 = r_REAL_TYPE(p_T);
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_2325))).f_KIND == g_T_ENUM))
{
{ rt_int rv2326 = (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_RT_2325) == NULL));
return rv2326; }
}
{ rt_int rv2327 = 0;
return rv2327; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv2328 = (((*(R22 *)rt_nil_check(l_RT_2325))).f_KIND == g_T_PTR);
return rv2328; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv2329 = (((*(R22 *)rt_nil_check(l_RT_2325))).f_KIND == g_T_REC);
return rv2329; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv2330 = (((*(R22 *)rt_nil_check(l_RT_2325))).f_KIND == g_T_ARR);
return rv2330; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv2331 = (((*(R22 *)rt_nil_check(l_RT_2325))).f_KIND == g_T_INT);
return rv2331; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv2332 = ((((*(R22 *)rt_nil_check(l_RT_2325))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_2325))).f_KIND == g_T_SEM));
return rv2332; }
}
{ rt_int rv2333 = 0;
return rv2333; }
rt_raise(RT_X_INIT);
}
static R12 * r_ARG_ROOT(R21 * p_E) { RT_B_TICK(); 
R21 * l_N_2334; memset(&l_N_2334, 0, sizeof l_N_2334);
l_N_2334 = p_E;
for (;;) {
if ((l_N_2334 == NULL)) goto L_end2335;
{
if (((((*(R21 *)rt_nil_check(l_N_2334))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_N_2334))).f_KIND == g_N_APPLY)))
{
{
R12 * l_Y_2336; memset(&l_Y_2336, 0, sizeof l_Y_2336);
l_Y_2336 = r_LOOKUP(((*(R21 *)rt_nil_check(l_N_2334))).f_NAME);
if ((l_Y_2336 == NULL))
{
{ R12 * rv2337 = NULL;
return rv2337; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2336))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2338 = NULL;
return rv2338; }
}
{ R12 * rv2339 = l_Y_2336;
return rv2339; }
}
}
else if (((((((*(R21 *)rt_nil_check(l_N_2334))).f_KIND == g_N_INDEX) || (((*(R21 *)rt_nil_check(l_N_2334))).f_KIND == g_N_FIELD)) || (((*(R21 *)rt_nil_check(l_N_2334))).f_KIND == g_N_SUBSTR)) || (((*(R21 *)rt_nil_check(l_N_2334))).f_KIND == g_N_PAREN)))
{
l_N_2334 = ((*(R21 *)rt_nil_check(l_N_2334))).f_A;
}
else
{
{ R12 * rv2340 = NULL;
return rv2340; }
}
}
RT_B_TICK();
} L_end2335: ;
{ R12 * rv2341 = NULL;
return rv2341; }
rt_raise(RT_X_INIT);
}
static R21 * r_PATH_OF(R21 * p_E) { RT_B_TICK(); 
R21 * l_N_2342; memset(&l_N_2342, 0, sizeof l_N_2342);
l_N_2342 = p_E;
R21 * l_P_2343; memset(&l_P_2343, 0, sizeof l_P_2343);
l_P_2343 = NULL;
for (;;) {
if ((l_N_2342 == NULL)) goto L_end2344;
{
if ((((*(R21 *)rt_nil_check(l_N_2342))).f_KIND == g_N_FIELD))
{
l_P_2343 = r_NAME_REF(((*(R21 *)rt_nil_check(l_N_2342))).f_NAME, ((rt_int)0LL), NULL, l_P_2343);
l_N_2342 = ((*(R21 *)rt_nil_check(l_N_2342))).f_A;
}
else if (((((*(R21 *)rt_nil_check(l_N_2342))).f_KIND == g_N_INDEX) || (((*(R21 *)rt_nil_check(l_N_2342))).f_KIND == g_N_SUBSTR)))
{
l_P_2343 = r_NAME_REF(r_MKN(rt_str("*", 1)), ((rt_int)0LL), NULL, l_P_2343);
l_N_2342 = ((*(R21 *)rt_nil_check(l_N_2342))).f_A;
}
else if ((((*(R21 *)rt_nil_check(l_N_2342))).f_KIND == g_N_APPLY))
{
l_P_2343 = r_NAME_REF(r_MKN(rt_str("*", 1)), ((rt_int)0LL), NULL, l_P_2343);
{ R21 * rv2345 = l_P_2343;
return rv2345; }
}
else if ((((*(R21 *)rt_nil_check(l_N_2342))).f_KIND == g_N_PAREN))
{
l_N_2342 = ((*(R21 *)rt_nil_check(l_N_2342))).f_A;
}
else
{
{ R21 * rv2346 = l_P_2343;
return rv2346; }
}
}
RT_B_TICK();
} L_end2344: ;
{ R21 * rv2347 = l_P_2343;
return rv2347; }
rt_raise(RT_X_INIT);
}
static rt_int r_DISJOINT_PATHS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_2348; memset(&l_P_2348, 0, sizeof l_P_2348);
l_P_2348 = p_A;
R21 * l_Q_2349; memset(&l_Q_2349, 0, sizeof l_Q_2349);
l_Q_2349 = p_B;
for (;;) {
if (((l_P_2348 == NULL) || (l_Q_2349 == NULL))) goto L_end2350;
{
if ((((!r_TEQS(((*(R21 *)rt_nil_check(l_P_2348))).f_NAME, rt_str("*", 1))) && (!r_TEQS(((*(R21 *)rt_nil_check(l_Q_2349))).f_NAME, rt_str("*", 1)))) && (!r_TEQ(((*(R21 *)rt_nil_check(l_P_2348))).f_NAME, ((*(R21 *)rt_nil_check(l_Q_2349))).f_NAME))))
{
{ rt_int rv2351 = 1;
return rv2351; }
}
l_P_2348 = ((*(R21 *)rt_nil_check(l_P_2348))).f_NEXT;
l_Q_2349 = ((*(R21 *)rt_nil_check(l_Q_2349))).f_NEXT;
}
RT_B_TICK();
} L_end2350: ;
{ rt_int rv2352 = 0;
return rv2352; }
rt_raise(RT_X_INIT);
}
static void r_EXPLICIT_GENERIC_ARGS(R12 * p_Y, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_USED_2353; memset(&l_USED_2353, 0, sizeof l_USED_2353);
l_USED_2353 = NULL;
R28 * l_P_2354; memset(&l_P_2354, 0, sizeof l_P_2354);
l_P_2354 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
R27 * l_A_2355; memset(&l_A_2355, 0, sizeof l_A_2355);
l_A_2355 = p_ARGS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_DECL == NULL))
{
return;
}
if (((!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_B == NULL)))
{
return;
}
r_NAMES_IN(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_B, &l_USED_2353);
for (;;) {
if (((l_P_2354 == NULL) || (l_A_2355 == NULL))) goto L_end2356;
{
if ((((((*(R28 *)rt_nil_check(l_P_2354))).f_MODE == g_M_IN) && r_IN_IDENTS(l_USED_2353, ((*(R28 *)rt_nil_check(l_P_2354))).f_NAME)) && (!(((*(R27 *)rt_nil_check(l_A_2355))).f_E == NULL))))
{
if ((!r_CONSTANT_EXPR(((*(R27 *)rt_nil_check(l_A_2355))).f_E)))
{
r_FAILT(p_LINE, rt_str("the argument of an explicit generic parameter invokes only pure functions (5): ", 79), ((*(R28 *)rt_nil_check(l_P_2354))).f_NAME);
}
}
l_P_2354 = ((*(R28 *)rt_nil_check(l_P_2354))).f_NEXT;
l_A_2355 = ((*(R27 *)rt_nil_check(l_A_2355))).f_NEXT;
}
RT_B_TICK();
} L_end2356: ;
}
static void r_NAMES_IN(R21 * p_L, R21 * *p_HEAD) { RT_B_TICK(); 
R21 * l_N_2357; memset(&l_N_2357, 0, sizeof l_N_2357);
l_N_2357 = p_L;
for (;;) {
if ((l_N_2357 == NULL)) goto L_end2358;
{
if (((((*(R21 *)rt_nil_check(l_N_2357))).f_KIND == g_N_NAME) || (((((*(R21 *)rt_nil_check(l_N_2357))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(l_N_2357))).f_A == NULL)))))
{
(*p_HEAD) = r_NAME_REF(((*(R21 *)rt_nil_check(l_N_2357))).f_NAME, ((rt_int)0LL), NULL, (*p_HEAD));
}
r_NAMES_IN(((*(R21 *)rt_nil_check(l_N_2357))).f_A, &(*p_HEAD));
r_NAMES_IN(((*(R21 *)rt_nil_check(l_N_2357))).f_B, &(*p_HEAD));
r_NAMES_IN(((*(R21 *)rt_nil_check(l_N_2357))).f_C, &(*p_HEAD));
l_N_2357 = ((*(R21 *)rt_nil_check(l_N_2357))).f_NEXT;
}
RT_B_TICK();
} L_end2358: ;
}
static rt_int r_CONSTANT_EXPR(R21 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv2359 = 1;
return rv2359; }
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY)))
{
{
R12 * l_Y_2360; memset(&l_Y_2360, 0, sizeof l_Y_2360);
l_Y_2360 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2360 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2360))).f_KIND == g_Y_ROUTINE))
{
if ((!(((*(R12 *)rt_nil_check(r_ORIGINAL(l_Y_2360)))).f_USES == NULL)))
{
{ rt_int rv2361 = 0;
return rv2361; }
}
}
}
}
}
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD))
{
{ rt_int rv2362 = r_CONSTANT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv2362; }
}
{ rt_int rv2363 = ((r_CONSTANT_LIST(((*(R21 *)rt_nil_check(p_E))).f_A) && r_CONSTANT_LIST(((*(R21 *)rt_nil_check(p_E))).f_B)) && r_CONSTANT_LIST(((*(R21 *)rt_nil_check(p_E))).f_C));
return rv2363; }
rt_raise(RT_X_INIT);
}
static rt_int r_CONSTANT_LIST(R21 * p_L) { RT_B_TICK(); 
R21 * l_N_2364; memset(&l_N_2364, 0, sizeof l_N_2364);
l_N_2364 = p_L;
for (;;) {
if ((l_N_2364 == NULL)) goto L_end2365;
{
if ((!r_CONSTANT_EXPR(l_N_2364)))
{
{ rt_int rv2366 = 0;
return rv2366; }
}
l_N_2364 = ((*(R21 *)rt_nil_check(l_N_2364))).f_NEXT;
}
RT_B_TICK();
} L_end2365: ;
{ rt_int rv2367 = 1;
return rv2367; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKED_ELEMENT(R21 * p_E) { RT_B_TICK(); 
R22 * l_AT_2368; memset(&l_AT_2368, 0, sizeof l_AT_2368);
l_AT_2368 = NULL;
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
{
R12 * l_Y_2369; memset(&l_Y_2369, 0, sizeof l_Y_2369);
l_Y_2369 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_2369 == NULL))
{
{ rt_int rv2370 = 0;
return rv2370; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2369))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(l_Y_2369))).f_T == NULL)))
{
{ rt_int rv2371 = 0;
return rv2371; }
}
l_AT_2368 = r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2369))).f_T);
}
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_INDEX))
{
{
R14 l_SAVED_CODE_2372; memset(&l_SAVED_CODE_2372, 0, sizeof l_SAVED_CODE_2372);
S_R14(&l_SAVED_CODE_2372, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
l_AT_2368 = r_REAL_TYPE((r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL)).f_T);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2372, 0);
}
}
else
{
{ rt_int rv2373 = 0;
return rv2373; }
}
if ((!(((*(R22 *)rt_nil_check(l_AT_2368))).f_KIND == g_T_ARR)))
{
{ rt_int rv2374 = 0;
return rv2374; }
}
{ rt_int rv2375 = (!(r_PACKING_OF(l_AT_2368) == ((rt_int)2LL)));
return rv2375; }
rt_raise(RT_X_INIT);
}
static void r_NO_ALIASING(R12 * p_Y, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_A_2376; memset(&l_A_2376, 0, sizeof l_A_2376);
l_A_2376 = p_ARGS;
for (;;) {
if ((l_A_2376 == NULL)) goto L_end2377;
{
if (((((*(R27 *)rt_nil_check(l_A_2376))).f_MODE == g_M_INOUT) && (!(((*(R27 *)rt_nil_check(l_A_2376))).f_E == NULL))))
{
if (r_PACKED_ELEMENT(((*(R27 *)rt_nil_check(l_A_2376))).f_E))
{
r_FAIL(p_LINE, rt_str("only elements of ARRAY_STD arrays are inout arguments (3.8.3)", 61));
}
}
l_A_2376 = ((*(R27 *)rt_nil_check(l_A_2376))).f_NEXT;
}
RT_B_TICK();
} L_end2377: ;
l_A_2376 = p_ARGS;
for (;;) {
if ((l_A_2376 == NULL)) goto L_end2378;
{
if (((((((*(R27 *)rt_nil_check(l_A_2376))).f_MODE == g_M_INOUT) || (((*(R27 *)rt_nil_check(l_A_2376))).f_MODE == g_M_OUT))) && (!(((*(R27 *)rt_nil_check(l_A_2376))).f_E == NULL))))
{
{
R12 * l_V_2379; memset(&l_V_2379, 0, sizeof l_V_2379);
l_V_2379 = r_ARG_ROOT(((*(R27 *)rt_nil_check(l_A_2376))).f_E);
R27 * l_B_2380; memset(&l_B_2380, 0, sizeof l_B_2380);
l_B_2380 = ((*(R27 *)rt_nil_check(l_A_2376))).f_NEXT;
if ((!(l_V_2379 == NULL)))
{
for (;;) {
if ((l_B_2380 == NULL)) goto L_end2381;
{
if (((((*(R27 *)rt_nil_check(l_B_2380))).f_MODE == ((*(R27 *)rt_nil_check(l_A_2376))).f_MODE) && (!(((*(R27 *)rt_nil_check(l_B_2380))).f_E == NULL))))
{
if (((r_ARG_ROOT(((*(R27 *)rt_nil_check(l_B_2380))).f_E) == l_V_2379) && (!r_DISJOINT_PATHS(r_PATH_OF(((*(R27 *)rt_nil_check(l_A_2376))).f_E), r_PATH_OF(((*(R27 *)rt_nil_check(l_B_2380))).f_E)))))
{
r_FAILT(p_LINE, rt_str("a variable is more than one inout or output argument (4.3.3): ", 62), ((*(R12 *)rt_nil_check(l_V_2379))).f_NAME);
}
}
l_B_2380 = ((*(R27 *)rt_nil_check(l_B_2380))).f_NEXT;
}
RT_B_TICK();
} L_end2381: ;
if (((((*(R27 *)rt_nil_check(l_A_2376))).f_MODE == g_M_INOUT) && (!(((*(R12 *)rt_nil_check(p_Y))).f_USES == NULL))))
{
{
R21 * l_U_2382; memset(&l_U_2382, 0, sizeof l_U_2382);
l_U_2382 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_2382 == NULL)) goto L_end2383;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_U_2382))).f_NAME, ((*(R12 *)rt_nil_check(l_V_2379))).f_NAME) && (((*(R21 *)rt_nil_check(l_U_2382))).f_IV == ((*(R12 *)rt_nil_check(l_V_2379))).f_OWNER)))
{
r_FAILT(p_LINE, rt_str("an inout argument the procedure also imports (4.3.3): ", 54), ((*(R12 *)rt_nil_check(l_V_2379))).f_NAME);
}
l_U_2382 = ((*(R21 *)rt_nil_check(l_U_2382))).f_NEXT;
}
RT_B_TICK();
} L_end2383: ;
}
}
}
}
}
l_A_2376 = ((*(R27 *)rt_nil_check(l_A_2376))).f_NEXT;
}
RT_B_TICK();
} L_end2378: ;
}
static void r_NEED_BODY(R12 * p_G) { RT_B_TICK(); 
if (((!(((*(R12 *)rt_nil_check(p_G))).f_LAZY == ((rt_int)2LL))) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_FL == ((rt_int)1LL))))
{
((*(R12 *)rt_nil_check(p_G))).f_LAZY = ((rt_int)2LL);
((*(R12 *)rt_nil_check(p_G))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = p_G;
}
}
static R12 * r_INLINE_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_BS_2384; memset(&l_BS_2384, 0, sizeof l_BS_2384);
l_BS_2384 = r_NEW_BINDS();
R28 * l_P_2385; memset(&l_P_2385, 0, sizeof l_P_2385);
l_P_2385 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2386; memset(&l_A_2386, 0, sizeof l_A_2386);
l_A_2386 = p_ARGS;
rt_int l_SOME_M_2387; memset(&l_SOME_M_2387, 0, sizeof l_SOME_M_2387);
l_SOME_M_2387 = 0;
rt_int l_N_2388; memset(&l_N_2388, 0, sizeof l_N_2388);
l_N_2388 = ((rt_int)0LL);
for (;;) {
if (((l_P_2385 == NULL) || (l_A_2386 == NULL))) goto L_end2389;
{
if ((((((*(R28 *)rt_nil_check(l_P_2385))).f_MODE == g_M_IN) && (!(((*(R27 *)rt_nil_check(l_A_2386))).f_E == NULL))) && (!(((*(R28 *)rt_nil_check(l_P_2385))).f_T == NULL))))
{
{
R22 * l_RT_2390; memset(&l_RT_2390, 0, sizeof l_RT_2390);
l_RT_2390 = r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2385))).f_T);
R23 l_M_2391; memset(&l_M_2391, 0, sizeof l_M_2391);
S_R23(&l_M_2391, r_NO_MVAL(), 0);
if (((((*(R22 *)rt_nil_check(l_RT_2390))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2390))).f_SCALE == ((rt_int)0LL))))
{
if (r_MANIFEST_INT(((*(R27 *)rt_nil_check(l_A_2386))).f_E))
{
S_R23(&l_M_2391, r_MANIFEST(((*(R27 *)rt_nil_check(l_A_2386))).f_E), 0);
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_2390))).f_KIND == g_T_BOOL))
{
S_R23(&l_M_2391, r_MANIFEST(((*(R27 *)rt_nil_check(l_A_2386))).f_E), 0);
}
else if ((((*(R22 *)rt_nil_check(l_RT_2390))).f_KIND == g_T_ENUM))
{
S_R23(&l_M_2391, r_ENUM_MANIFEST(((*(R27 *)rt_nil_check(l_A_2386))).f_E, l_RT_2390), 0);
}
if ((l_M_2391).f_OK)
{
r_ADD_BIND(r_MKN(rt_b_cat(rt_str("=", 1), r_STR(((*(R28 *)rt_nil_check(l_P_2385))).f_NAME, (((*(R28 *)rt_nil_check(l_P_2385))).f_NAME).f_LEN))), NULL, l_M_2391, NULL, l_BS_2384);
l_SOME_M_2387 = 1;
}
}
}
l_P_2385 = ((*(R28 *)rt_nil_check(l_P_2385))).f_NEXT;
l_A_2386 = ((*(R27 *)rt_nil_check(l_A_2386))).f_NEXT;
}
RT_B_TICK();
} L_end2389: ;
if ((!l_SOME_M_2387))
{
r_NEED_BODY(p_G);
{ R12 * rv2392 = p_G;
return rv2392; }
}
{
R12 * l_I_2393; memset(&l_I_2393, 0, sizeof l_I_2393);
l_I_2393 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2393 == NULL)) goto L_end2394;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2393))).f_BINDINGS, ((*(R20 *)rt_nil_check(l_BS_2384))).f_NEXT))
{
{ R12 * rv2395 = l_I_2393;
return rv2395; }
}
l_N_2388 = rt_add(l_N_2388, ((rt_int)1LL));
l_I_2393 = ((*(R12 *)rt_nil_check(l_I_2393))).f_INSTANCES;
}
RT_B_TICK();
} L_end2394: ;
}
if ((l_N_2388 > ((rt_int)256LL)))
{
r_FAILT(p_LINE, rt_str("the INLINE expansions of the routine do not end (4.3.1): ", 57), ((*(R12 *)rt_nil_check(p_G))).f_NAME);
}
{ R12 * rv2396 = r_NEW_INSTANCE(p_G, ((*(R20 *)rt_nil_check(l_BS_2384))).f_NEXT, p_ARGS);
return rv2396; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_VISIBLE_2397; memset(&l_VISIBLE_2397, 0, sizeof l_VISIBLE_2397);
l_VISIBLE_2397 = r_SEG_VISIBLE(p_Y0, p_LINE);
R12 * l_Y_2398; memset(&l_Y_2398, 0, sizeof l_Y_2398);
l_Y_2398 = r_ORIGINAL(p_Y0);
R28 * l_P_2399; memset(&l_P_2399, 0, sizeof l_P_2399);
R27 * l_A_2400; memset(&l_A_2400, 0, sizeof l_A_2400);
l_A_2400 = p_ARGS;
R9 l_C_2401; memset(&l_C_2401, 0, sizeof l_C_2401);
S_R9(&l_C_2401, r_MK(rt_str("", 0)), 0);
R9 l_SEP_2402; memset(&l_SEP_2402, 0, sizeof l_SEP_2402);
S_R9(&l_SEP_2402, r_MK(rt_str("", 0)), 0);
R9 l_PRE_2403; memset(&l_PRE_2403, 0, sizeof l_PRE_2403);
S_R9(&l_PRE_2403, r_MK(rt_str("", 0)), 0);
R9 l_POST_2404; memset(&l_POST_2404, 0, sizeof l_POST_2404);
S_R9(&l_POST_2404, r_MK(rt_str("", 0)), 0);
rt_int l_SHARED_2405; memset(&l_SHARED_2405, 0, sizeof l_SHARED_2405);
l_SHARED_2405 = 0;
R22 * l_PT_2406; memset(&l_PT_2406, 0, sizeof l_PT_2406);
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
if (((((*(R12 *)rt_nil_check(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R))).f_DECL == ((*(R12 *)rt_nil_check(l_Y_2398))).f_DECL) && (!(((*(R12 *)rt_nil_check(l_Y_2398))).f_DECL == NULL))))
{
if ((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2398))).f_DECL))).f_FL == ((rt_int)1LL)))
{
r_FAILT(p_LINE, rt_str("an INLINE routine cannot be recursive (4.3.1): ", 47), ((*(R12 *)rt_nil_check(l_Y_2398))).f_NAME);
}
}
}
if (((*(R12 *)rt_nil_check(l_Y_2398))).f_GENERIC)
{
l_Y_2398 = r_INSTANCE(l_Y_2398, p_ARGS, p_LINE);
}
else if (((!(((*(R12 *)rt_nil_check(l_Y_2398))).f_DECL == NULL)) && (((*(R12 *)rt_nil_check(l_Y_2398))).f_BINDINGS == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2398))).f_DECL))).f_KIND == g_N_ROUTINE) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2398))).f_DECL))).f_FL == ((rt_int)1LL))))
{
l_Y_2398 = r_INLINE_INSTANCE(l_Y_2398, p_ARGS, p_LINE);
}
}
r_CHECK_CALL_IMPORTS(l_Y_2398, p_LINE);
r_NO_ALIASING(l_Y_2398, p_ARGS, p_LINE);
r_EXPLICIT_GENERIC_ARGS(l_Y_2398, p_ARGS, p_LINE);
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
if (((((*(R12 *)rt_nil_check(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R))).f_DECL == ((*(R12 *)rt_nil_check(l_Y_2398))).f_DECL) && (!(((*(R12 *)rt_nil_check(l_Y_2398))).f_DECL == NULL))))
{
if ((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2398))).f_DECL))).f_FL == ((rt_int)1LL)))
{
r_FAILT(p_LINE, rt_str("an INLINE routine cannot be recursive (4.3.1): ", 47), ((*(R12 *)rt_nil_check(l_Y_2398))).f_NAME);
}
{
R21 * l_U_2407; memset(&l_U_2407, 0, sizeof l_U_2407);
l_U_2407 = ((*(R12 *)rt_nil_check(l_Y_2398))).f_USES;
for (;;) {
if ((l_U_2407 == NULL)) goto L_end2408;
{
if ((!(r_LOOKUP(((*(R21 *)rt_nil_check(l_U_2407))).f_NAME) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_LOOKUP(((*(R21 *)rt_nil_check(l_U_2407))).f_NAME)))).f_LEVEL > ((rt_int)0LL)))
{
r_FAILT(p_LINE, rt_str("a recursive routine imports only static data (4.3.1): ", 54), ((*(R21 *)rt_nil_check(l_U_2407))).f_NAME);
}
}
l_U_2407 = ((*(R21 *)rt_nil_check(l_U_2407))).f_NEXT;
}
RT_B_TICK();
} L_end2408: ;
}
}
}
if ((!(r_CUR_GENERIC() == NULL)))
{
{
R27 * l_Q_2409; memset(&l_Q_2409, 0, sizeof l_Q_2409);
l_Q_2409 = p_ARGS;
rt_int l_GEN_ARG_2410; memset(&l_GEN_ARG_2410, 0, sizeof l_GEN_ARG_2410);
l_GEN_ARG_2410 = 0;
for (;;) {
if ((l_Q_2409 == NULL)) goto L_end2411;
{
if (((*(R27 *)rt_nil_check(l_Q_2409))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_Q_2409))).f_V).f_T == NULL)))
{
if (((((*(R22 *)rt_nil_check((((*(R27 *)rt_nil_check(l_Q_2409))).f_V).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
l_GEN_ARG_2410 = 1;
}
}
}
l_Q_2409 = ((*(R27 *)rt_nil_check(l_Q_2409))).f_NEXT;
}
RT_B_TICK();
} L_end2411: ;
if (l_GEN_ARG_2410)
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2398))).f_BINDINGS == NULL)))
{
r_REQUIRE_WHERE_SUBSET(l_Y_2398, p_LINE);
}
else
{
r_REQUIRE_WHERE(r_BASE_NAME(l_Y_2398), p_LINE);
}
}
}
}
{
R21 * l_U_2412; memset(&l_U_2412, 0, sizeof l_U_2412);
l_U_2412 = ((*(R12 *)rt_nil_check(l_Y_2398))).f_USES;
for (;;) {
if ((l_U_2412 == NULL)) goto L_end2413;
{
{
R12 * l_H_2414; memset(&l_H_2414, 0, sizeof l_H_2414);
l_H_2414 = r_LOOKUP(((*(R21 *)rt_nil_check(l_U_2412))).f_NAME);
if ((!(l_H_2414 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_H_2414))).f_WITHV == ((rt_int)2LL)) && (((*(R12 *)rt_nil_check(l_H_2414))).f_OWNER == ((*(R21 *)rt_nil_check(l_U_2412))).f_IV)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(l_Y_2398))).f_NAME, (((*(R12 *)rt_nil_check(l_Y_2398))).f_NAME).f_LEN)), rt_str(" imports ", 9)), r_STR(((*(R21 *)rt_nil_check(l_U_2412))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2412))).f_NAME).f_LEN)), rt_str(", which a WITH NAMING hides (4.5.4)", 35)));
}
}
}
l_U_2412 = ((*(R21 *)rt_nil_check(l_U_2412))).f_NEXT;
}
RT_B_TICK();
} L_end2413: ;
}
if (((((((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL)) || (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL)))) && (!(((*(R12 *)rt_nil_check(l_Y_2398))).f_USES == NULL))))
{
r_FAILT(p_LINE, rt_str("a record-spec is a closed scope: no function importing a variable (3.9.1): ", 75), ((*(R12 *)rt_nil_check(l_Y_2398))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_2398))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_C_2401, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_2398))).f_LEVEL), 0);
S_R9(&l_SEP_2402, r_MK(rt_str(", ", 2)), 0);
}
{
R27 * l_Q_2415; memset(&l_Q_2415, 0, sizeof l_Q_2415);
l_Q_2415 = p_ARGS;
for (;;) {
if ((l_Q_2415 == NULL)) goto L_end2416;
{
if ((!(((*(R27 *)rt_nil_check(l_Q_2415))).f_MODE == g_M_IN)))
{
l_SHARED_2405 = 1;
}
l_Q_2415 = ((*(R27 *)rt_nil_check(l_Q_2415))).f_NEXT;
}
RT_B_TICK();
} L_end2416: ;
if ((!(((*(R12 *)rt_nil_check(l_Y_2398))).f_USES == NULL)))
{
l_SHARED_2405 = 1;
}
}
l_P_2399 = ((*(R12 *)rt_nil_check(l_Y_2398))).f_PARAMS;
for (;;) {
if ((l_P_2399 == NULL)) goto L_end2417;
{
if ((l_A_2400 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
l_PT_2406 = r_FORMAL_VIEW(l_Y_2398, l_P_2399);
if ((l_PT_2406 == NULL))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2399))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2406)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_2418; memset(&l_V_2418, 0, sizeof l_V_2418);
R9 l_CV_2419; memset(&l_CV_2419, 0, sizeof l_CV_2419);
if ((((*(R27 *)rt_nil_check(l_A_2400))).f_HAVE && (!r_WANT_SENSITIVE(l_A_2400))))
{
S_R26(&l_V_2418, ((*(R27 *)rt_nil_check(l_A_2400))).f_V, 0);
}
else
{
S_R26(&l_V_2418, r_EXPR(((*(R27 *)rt_nil_check(l_A_2400))).f_E, l_PT_2406), 0);
}
S_R9(&l_CV_2419, r_CONVERT(l_V_2418, l_PT_2406, p_LINE, r_NO_TEXT()), 0);
if (((l_SHARED_2405 && (l_V_2418).f_LVAL) && r_IS_STRUCTURED(l_PT_2406)))
{
S_R9(&l_CV_2419, r_COPY_OF(l_PT_2406, l_CV_2419), 0);
}
S_R9(&l_C_2401, r_FMT3(rt_str("@@@", 3), l_C_2401, l_SEP_2402, l_CV_2419), 0);
S_R9(&l_SEP_2402, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_2420; memset(&l_V_2420, 0, sizeof l_V_2420);
if (((*(R27 *)rt_nil_check(l_A_2400))).f_HAVE)
{
S_R26(&l_V_2420, ((*(R27 *)rt_nil_check(l_A_2400))).f_V, 0);
}
else
{
S_R26(&l_V_2420, r_EXPR(((*(R27 *)rt_nil_check(l_A_2400))).f_E, l_PT_2406), 0);
}
if (((!(((*(R27 *)rt_nil_check(l_A_2400))).f_E == NULL)) && (!(l_V_2420).f_LVAL)))
{
if ((((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2400))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2400))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_2420, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_2420).f_C), (l_V_2420).f_T), 0);
(l_V_2420).f_LVAL = 1;
}
}
if ((!(l_V_2420).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(l_PT_2406, (l_V_2420).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(l_PT_2406));
}
if (((((*(R28 *)rt_nil_check(l_P_2399))).f_MODE == g_M_INOUT) && (!((r_SAME_TYPE(l_PT_2406, (l_V_2420).f_T) && r_SAME_RANGE(l_PT_2406, (l_V_2420).f_T))))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
if (((((*(R28 *)rt_nil_check(l_P_2399))).f_MODE == g_M_OUT) && (!((r_SAME_TYPE(l_PT_2406, (l_V_2420).f_T) && r_SAME_RANGE(l_PT_2406, (l_V_2420).f_T))))))
{
{
R9 l_TMP_2421; memset(&l_TMP_2421, 0, sizeof l_TMP_2421);
S_R9(&l_TMP_2421, r_NEW_NAME(rt_str("oa", 2)), 0);
R9 l_AP_2422; memset(&l_AP_2422, 0, sizeof l_AP_2422);
S_R9(&l_AP_2422, r_NEW_NAME(rt_str("op", 2)), 0);
S_R9(&l_PRE_2403, r_FMT4(rt_str("@ @ *@ = &@;", 12), l_PRE_2403, r_CTYPE((l_V_2420).f_T), l_AP_2422, (l_V_2420).f_C), 0);
S_R9(&l_PRE_2403, r_FMT4(rt_str("@ @ @ = @;", 10), l_PRE_2403, r_CTYPE(l_PT_2406), l_TMP_2421, r_COPY_OF((l_V_2420).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2422))), 0);
S_R9(&l_POST_2404, r_FMT2(rt_str("@ @", 3), l_POST_2404, r_STORE_CODE((l_V_2420).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2422), r_MKET(l_TMP_2421, l_PT_2406), p_LINE, r_NO_TEXT())), 0);
S_R9(&l_C_2401, r_FMT3(rt_str("@@&@", 4), l_C_2401, l_SEP_2402, l_TMP_2421), 0);
}
}
else
{
S_R9(&l_C_2401, r_FMT3(rt_str("@@&@", 4), l_C_2401, l_SEP_2402, (l_V_2420).f_C), 0);
}
S_R9(&l_SEP_2402, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_2400 = ((*(R27 *)rt_nil_check(l_A_2400))).f_NEXT;
l_P_2399 = ((*(R28 *)rt_nil_check(l_P_2399))).f_NEXT;
}
RT_B_TICK();
} L_end2417: ;
if ((!(l_A_2400 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
if (((l_PRE_2403).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2423 = r_MKET(r_FMT4(rt_str("({ @ @(@); @ })", 15), l_PRE_2403, ((*(R12 *)rt_nil_check(l_Y_2398))).f_ACCESS, l_C_2401, l_POST_2404), r_RESULT_VIEW(l_Y_2398));
return rv2423; }
}
{ R26 rv2424 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_2398))).f_ACCESS, l_C_2401), r_RESULT_VIEW(l_Y_2398));
return rv2424; }
rt_raise(RT_X_INIT);
}
static R22 * r_FORMAL_VIEW(R12 * p_R, R28 * p_P) { RT_B_TICK(); 
if (((((*(R28 *)rt_nil_check(p_P))).f_T == NULL) || (((*(R28 *)rt_nil_check(p_P))).f_TS == NULL)))
{
{ R22 * rv2425 = ((*(R28 *)rt_nil_check(p_P))).f_T;
return rv2425; }
}
{ R22 * rv2426 = r_OUTSIDE_VIEW(p_R, ((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R28 *)rt_nil_check(p_P))).f_T);
return rv2426; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESULT_VIEW(R12 * p_R) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_R))).f_DECL == NULL) || (((*(R12 *)rt_nil_check(p_R))).f_RESULT == NULL)))
{
{ R22 * rv2427 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2427; }
}
if (((!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B == NULL)))
{
{ R22 * rv2428 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2428; }
}
{ R22 * rv2429 = r_OUTSIDE_VIEW(p_R, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2429; }
rt_raise(RT_X_INIT);
}
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R21 * p_TS, R22 * p_T) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_R))).f_MODL == NULL) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)) || (!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))))
{
{ R22 * rv2430 = p_T;
return rv2430; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_R))).f_MODL))
{
{ R22 * rv2431 = p_T;
return rv2431; }
}
{
R12 * l_M_2432; memset(&l_M_2432, 0, sizeof l_M_2432);
l_M_2432 = ((*(R12 *)rt_nil_check(p_R))).f_MODL;
for (;;) {
if ((l_M_2432 == NULL)) goto L_end2433;
{
{
R12 * l_Y_2434; memset(&l_Y_2434, 0, sizeof l_Y_2434);
l_Y_2434 = r_MEMBER_TYPE(l_M_2432, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_2434 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_2434))).f_EXPORTED)
{
{ R22 * rv2435 = r_ABSTRACT_VIEW(l_Y_2434, p_T);
return rv2435; }
}
{ R22 * rv2436 = p_T;
return rv2436; }
}
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(l_M_2432))).f_MODL))
{
goto L_end2433;
}
l_M_2432 = ((*(R12 *)rt_nil_check(l_M_2432))).f_MODL;
}
RT_B_TICK();
} L_end2433: ;
}
{ R22 * rv2437 = p_T;
return rv2437; }
rt_raise(RT_X_INIT);
}
static R12 * r_MEMBER_TYPE(R12 * p_M, R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2438; memset(&l_Y_2438, 0, sizeof l_Y_2438);
l_Y_2438 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
if (((*(R12 *)rt_nil_check(p_M))).f_BUSY)
{
{
R12 * l_Z_2439; memset(&l_Z_2439, 0, sizeof l_Z_2439);
l_Z_2439 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Z_2439 == NULL)) goto L_end2440;
{
if ((((((*(R12 *)rt_nil_check(l_Z_2439))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Z_2439))).f_MODL == p_M)) && (((*(R12 *)rt_nil_check(l_Z_2439))).f_ORIG == NULL)))
{
{ R12 * rv2441 = l_Z_2439;
return rv2441; }
}
l_Z_2439 = r_LOOKUP_NEXT(l_Z_2439);
}
RT_B_TICK();
} L_end2440: ;
}
{ R12 * rv2442 = NULL;
return rv2442; }
}
for (;;) {
if ((l_Y_2438 == NULL)) goto L_end2443;
{
if (((((*(R12 *)rt_nil_check(l_Y_2438))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_2438))).f_NAME, p_NAME)))
{
{ R12 * rv2444 = l_Y_2438;
return rv2444; }
}
l_Y_2438 = ((*(R12 *)rt_nil_check(l_Y_2438))).f_SNEXT;
}
RT_B_TICK();
} L_end2443: ;
{ R12 * rv2445 = NULL;
return rv2445; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_2446; memset(&l_K_2446, 0, sizeof l_K_2446);
l_K_2446 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND;
{ rt_int rv2447 = ((((l_K_2446 == g_T_STR) || (l_K_2446 == g_T_BITS)) || (l_K_2446 == g_T_ARR)) || (l_K_2446 == g_T_REC));
return rv2447; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2448; memset(&l_RA_2448, 0, sizeof l_RA_2448);
l_RA_2448 = r_REAL_TYPE(p_A);
R22 * l_RB_2449; memset(&l_RB_2449, 0, sizeof l_RB_2449);
l_RB_2449 = r_REAL_TYPE(p_B);
if ((!r_IS_NUMERIC_OR_ENUM(l_RA_2448)))
{
{ rt_int rv2450 = 1;
return rv2450; }
}
if ((((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2448))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2448))).f_HI_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2449))).f_LO_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2449))).f_HI_C)))
{
{ rt_int rv2451 = 1;
return rv2451; }
}
if ((((((*(R22 *)rt_nil_check(l_RA_2448))).f_LO_C).f_LEN == ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_RB_2449))).f_LO_C).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2452 = ((((*(R22 *)rt_nil_check(l_RA_2448))).f_LO_C).f_LEN == (((*(R22 *)rt_nil_check(l_RB_2449))).f_LO_C).f_LEN);
return rv2452; }
}
if (((((((*(R22 *)rt_nil_check(l_RA_2448))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_RB_2449))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_RA_2448))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(l_RB_2449))).f_MHI).f_OK))
{
{ rt_int rv2453 = (((((*(R22 *)rt_nil_check(l_RA_2448))).f_MLO).f_V == (((*(R22 *)rt_nil_check(l_RB_2449))).f_MLO).f_V) && ((((*(R22 *)rt_nil_check(l_RA_2448))).f_MHI).f_V == (((*(R22 *)rt_nil_check(l_RB_2449))).f_MHI).f_V));
return rv2453; }
}
{ rt_int rv2454 = (r_TEQ(((*(R22 *)rt_nil_check(l_RA_2448))).f_LO_C, ((*(R22 *)rt_nil_check(l_RB_2449))).f_LO_C) && r_TEQ(((*(R22 *)rt_nil_check(l_RA_2448))).f_HI_C, ((*(R22 *)rt_nil_check(l_RB_2449))).f_HI_C));
return rv2454; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R21 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2455 = 0;
return rv2455; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv2456 = 1;
return rv2456; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2457 = 1;
return rv2457; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2458 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_C);
return rv2458; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_N_REP) && r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_A)))
{
{ rt_int rv2459 = 1;
return rv2459; }
}
}
if ((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv2460 = r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv2460; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv2461 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv2461; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv2462 = ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv2462; }
}
else if (((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv2463 = 0;
return rv2463; }
}
{
R12 * l_Y_2464; memset(&l_Y_2464, 0, sizeof l_Y_2464);
l_Y_2464 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_2465; memset(&l_A_2465, 0, sizeof l_A_2465);
l_A_2465 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_2466; memset(&l_F_2466, 0, sizeof l_F_2466);
if ((l_Y_2464 == NULL))
{
{ rt_int rv2467 = 0;
return rv2467; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2464))).f_KIND == g_Y_GEN))
{
{ rt_int rv2468 = 1;
return rv2468; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2464))).f_DECL == NULL))
{
{ rt_int rv2469 = 0;
return rv2469; }
}
l_F_2466 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2464))).f_DECL))).f_A;
for (;;) {
if ((l_F_2466 == NULL)) goto L_end2470;
{
{
R21 * l_N_2471; memset(&l_N_2471, 0, sizeof l_N_2471);
l_N_2471 = ((*(R21 *)rt_nil_check(l_F_2466))).f_A;
for (;;) {
if ((l_N_2471 == NULL)) goto L_end2472;
{
if ((l_A_2465 == NULL))
{
{ rt_int rv2473 = 0;
return rv2473; }
}
if (((((*(R21 *)rt_nil_check(l_F_2466))).f_B == NULL) && ((((((*(R21 *)rt_nil_check(l_A_2465))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_2465))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_2465)))))
{
{ rt_int rv2474 = 1;
return rv2474; }
}
l_A_2465 = ((*(R21 *)rt_nil_check(l_A_2465))).f_NEXT;
l_N_2471 = ((*(R21 *)rt_nil_check(l_N_2471))).f_NEXT;
}
RT_B_TICK();
} L_end2472: ;
}
l_F_2466 = ((*(R21 *)rt_nil_check(l_F_2466))).f_NEXT;
}
RT_B_TICK();
} L_end2470: ;
}
}
{ rt_int rv2475 = 0;
return rv2475; }
rt_raise(RT_X_INIT);
}
static R21 * r_OWN_NAMES(R21 * p_R) { RT_B_TICK(); 
R21 * l_HEAD_2476; memset(&l_HEAD_2476, 0, sizeof l_HEAD_2476);
l_HEAD_2476 = NULL;
r_GEN_NAMES(((*(R21 *)rt_nil_check(p_R))).f_A, &l_HEAD_2476);
{ R21 * rv2477 = l_HEAD_2476;
return rv2477; }
rt_raise(RT_X_INIT);
}
static rt_int r_DECLARES_DERIVED(R21 * p_L) { RT_B_TICK(); 
R21 * l_N_2478; memset(&l_N_2478, 0, sizeof l_N_2478);
l_N_2478 = p_L;
for (;;) {
if ((l_N_2478 == NULL)) goto L_end2479;
{
if (((((*(R21 *)rt_nil_check(l_N_2478))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(l_N_2478))).f_NAME).f_LEN > ((rt_int)0LL))))
{
{ rt_int rv2480 = 1;
return rv2480; }
}
if ((((*(R21 *)rt_nil_check(l_N_2478))).f_KIND == g_N_PARAM))
{
if (r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(l_N_2478))).f_B))
{
{ rt_int rv2481 = 1;
return rv2481; }
}
}
else if ((!(((*(R21 *)rt_nil_check(l_N_2478))).f_KIND == g_TS_GEN)))
{
if ((r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(l_N_2478))).f_A) || r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(l_N_2478))).f_C)))
{
{ rt_int rv2482 = 1;
return rv2482; }
}
if ((!(((*(R21 *)rt_nil_check(l_N_2478))).f_B == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_N_2478))).f_B))).f_KIND == g_N_RANGE))
{
if ((r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_N_2478))).f_B))).f_A) || r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_N_2478))).f_B))).f_B)))
{
{ rt_int rv2483 = 1;
return rv2483; }
}
}
else if (r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(l_N_2478))).f_B))
{
{ rt_int rv2484 = 1;
return rv2484; }
}
}
}
l_N_2478 = ((*(R21 *)rt_nil_check(l_N_2478))).f_NEXT;
}
RT_B_TICK();
} L_end2479: ;
{ rt_int rv2485 = 0;
return rv2485; }
rt_raise(RT_X_INIT);
}
static R22 * r_MARK_GENP(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R22 * l_C_2486; memset(&l_C_2486, 0, sizeof l_C_2486);
l_C_2486 = r_COPY_TYP(p_T);
S_R9(&((*(R22 *)rt_nil_check(l_C_2486))).f_GENP, p_NAME, 0);
{ R22 * rv2487 = l_C_2486;
return rv2487; }
rt_raise(RT_X_INIT);
}
static R12 * r_CUR_GENERIC(void) { RT_B_TICK(); 
R18 * l_CS_2488; memset(&l_CS_2488, 0, sizeof l_CS_2488);
l_CS_2488 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
for (;;) {
if ((l_CS_2488 == NULL)) goto L_end2489;
{
if ((!(((*(R18 *)rt_nil_check(l_CS_2488))).f_R == NULL)))
{
if ((!(((*(R12 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2488))).f_R))).f_BINDINGS == NULL)))
{
{ R12 * rv2490 = ((*(R18 *)rt_nil_check(l_CS_2488))).f_R;
return rv2490; }
}
}
l_CS_2488 = ((*(R18 *)rt_nil_check(l_CS_2488))).f_UP;
}
RT_B_TICK();
} L_end2489: ;
{ R12 * rv2491 = NULL;
return rv2491; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_WHERE(R12 * p_G, R9 p_NAME) { RT_B_TICK(); 
R21 * l_N_2492; memset(&l_N_2492, 0, sizeof l_N_2492);
l_N_2492 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
for (;;) {
if ((l_N_2492 == NULL)) goto L_end2493;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_2492))).f_A, p_NAME))
{
{ rt_int rv2494 = 1;
return rv2494; }
}
l_N_2492 = ((*(R21 *)rt_nil_check(l_N_2492))).f_NEXT;
}
RT_B_TICK();
} L_end2493: ;
{ rt_int rv2495 = 0;
return rv2495; }
rt_raise(RT_X_INIT);
}
static void r_REQUIRE_WHERE(R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_G_2496; memset(&l_G_2496, 0, sizeof l_G_2496);
l_G_2496 = r_CUR_GENERIC();
if ((l_G_2496 == NULL))
{
return;
}
if ((!r_IN_WHERE(l_G_2496, p_NAME)))
{
r_FAILT(p_LINE, rt_str("invoked with objects of a TYPE parameter, so named in the WHERE clause (5.2): ", 78), p_NAME);
}
}
static void r_REQUIRE_WHERE_SUBSET(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_N_2497; memset(&l_N_2497, 0, sizeof l_N_2497);
l_N_2497 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_D))).f_B;
R12 * l_G_2498; memset(&l_G_2498, 0, sizeof l_G_2498);
l_G_2498 = r_CUR_GENERIC();
if ((l_G_2498 == NULL))
{
return;
}
for (;;) {
if ((l_N_2497 == NULL)) goto L_end2499;
{
{
R21 * l_T_2500; memset(&l_T_2500, 0, sizeof l_T_2500);
l_T_2500 = ((*(R21 *)rt_nil_check(l_N_2497))).f_A;
for (;;) {
if ((l_T_2500 == NULL)) goto L_end2501;
{
if ((!r_IN_WHERE(l_G_2498, ((*(R21 *)rt_nil_check(l_T_2500))).f_NAME)))
{
r_FAILT(p_LINE, rt_str("the WHERE routines of the invoked generic routine are among the caller's (5.2): ", 80), ((*(R21 *)rt_nil_check(l_T_2500))).f_NAME);
}
l_T_2500 = ((*(R21 *)rt_nil_check(l_T_2500))).f_NEXT;
}
RT_B_TICK();
} L_end2501: ;
}
l_N_2497 = ((*(R21 *)rt_nil_check(l_N_2497))).f_NEXT;
}
RT_B_TICK();
} L_end2499: ;
}
static rt_int r_HAS_GEN_ARG(R21 * p_A) { RT_B_TICK(); 
R21 * l_P_2502; memset(&l_P_2502, 0, sizeof l_P_2502);
l_P_2502 = p_A;
for (;;) {
if ((l_P_2502 == NULL)) goto L_end2503;
{
if (((((*(R21 *)rt_nil_check(l_P_2502))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_P_2502))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2504 = 1;
return rv2504; }
}
l_P_2502 = ((*(R21 *)rt_nil_check(l_P_2502))).f_NEXT;
}
RT_B_TICK();
} L_end2503: ;
{ rt_int rv2505 = 0;
return rv2505; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { RT_B_TICK(); 
rt_int l_ENTERED_2506; memset(&l_ENTERED_2506, 0, sizeof l_ENTERED_2506);
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
l_ENTERED_2506 = r_ENTER_MODULE_FOR(p_Y);
{
R12 * l_SAVED_SEG_2507; memset(&l_SAVED_SEG_2507, 0, sizeof l_SAVED_SEG_2507);
l_SAVED_SEG_2507 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(p_Y))).f_HOME;
r_ROUTINE_HEADER1(p_Y);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_2507;
}
if (l_ENTERED_2506)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
}
static void r_ROUTINE_HEADER1(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2508; memset(&l_R_2508, 0, sizeof l_R_2508);
l_R_2508 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R21 * l_P_2509; memset(&l_P_2509, 0, sizeof l_P_2509);
R28 * l_TAIL_2510; memset(&l_TAIL_2510, 0, sizeof l_TAIL_2510);
l_TAIL_2510 = NULL;
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_2509 = ((*(R21 *)rt_nil_check(l_R_2508))).f_A;
for (;;) {
if ((l_P_2509 == NULL)) goto L_end2511;
{
if (((((*(R21 *)rt_nil_check(l_P_2509))).f_B == NULL) || r_STATIC_GENERIC(((*(R21 *)rt_nil_check(l_P_2509))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2509 = ((*(R21 *)rt_nil_check(l_P_2509))).f_NEXT;
}
RT_B_TICK();
} L_end2511: ;
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2508))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
{
R21 * l_N_2512; memset(&l_N_2512, 0, sizeof l_N_2512);
l_N_2512 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2508))).f_D))).f_B;
for (;;) {
if ((l_N_2512 == NULL)) goto L_end2513;
{
{
R21 * l_T_2514; memset(&l_T_2514, 0, sizeof l_T_2514);
l_T_2514 = ((*(R21 *)rt_nil_check(l_N_2512))).f_A;
for (;;) {
if ((l_T_2514 == NULL)) goto L_end2515;
{
if ((r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_2514))).f_B))).f_A) || r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_2514))).f_B))).f_B)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_T_2514))).f_LINE, rt_str("a WHERE template declares no derived generic parameter (5.2): ", 62), ((*(R21 *)rt_nil_check(l_T_2514))).f_NAME);
}
l_T_2514 = ((*(R21 *)rt_nil_check(l_T_2514))).f_NEXT;
}
RT_B_TICK();
} L_end2515: ;
}
l_N_2512 = ((*(R21 *)rt_nil_check(l_N_2512))).f_NEXT;
}
RT_B_TICK();
} L_end2513: ;
}
}
l_P_2509 = ((*(R21 *)rt_nil_check(l_R_2508))).f_A;
for (;;) {
if ((l_P_2509 == NULL)) goto L_end2516;
{
{
R28 * l_PM_2517; memset(&l_PM_2517, 0, sizeof l_PM_2517);
l_PM_2517 = ((R28 *)rt_b_new(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2517)), ({ R28 rc2518; memset(&rc2518, 0, sizeof rc2518);  S_R9(&rc2518.f_NAME, ((*(R21 *)rt_nil_check(l_P_2509))).f_NAME, 0); rc2518.f_MODE = ((*(R21 *)rt_nil_check(l_P_2509))).f_IV; rc2518.f_T = NULL; rc2518.f_TS = ((*(R21 *)rt_nil_check(l_P_2509))).f_B; rc2518.f_NEXT = NULL; rc2518; }), 0);
if (((((*(R21 *)rt_nil_check(l_R_2508))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_P_2509))).f_IV == g_M_IN))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_2509))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!(((*(R21 *)rt_nil_check(l_P_2509))).f_B == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_2509))).f_B))).f_KIND == g_TS_ROUTINE) && (!(((*(R21 *)rt_nil_check(l_P_2509))).f_IV == g_M_IN))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_2509))).f_LINE, rt_str("a routine-spec declares only input parameters (5.1)", 51));
}
if (r_NAMES_VARIABLE_BUT(((*(R21 *)rt_nil_check(l_P_2509))).f_B, NULL, r_OWN_NAMES(l_R_2508)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_2509))).f_LINE, rt_str("the attributes in the type of a formal are manifest (4.3.1)", 59));
}
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R28 *)rt_nil_check(l_PM_2517))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_P_2509))).f_B);
}
if ((l_TAIL_2510 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_2517;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2510))).f_NEXT = l_PM_2517;
}
l_TAIL_2510 = l_PM_2517;
}
l_P_2509 = ((*(R21 *)rt_nil_check(l_P_2509))).f_NEXT;
}
RT_B_TICK();
} L_end2516: ;
if ((!(((*(R21 *)rt_nil_check(l_R_2508))).f_B == NULL)))
{
if (r_NAMES_VARIABLE_BUT(((*(R21 *)rt_nil_check(l_R_2508))).f_B, NULL, r_OWN_NAMES(l_R_2508)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_2508))).f_LINE, rt_str("the returns-clause may not refer to a variable (4.3.1)", 54));
}
}
if ((((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC) && r_TEQS(r_BASE_NAME(p_Y), rt_str("STORE_", 6))) && (!(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS == NULL))))
{
{
R28 * l_LAST_2519; memset(&l_LAST_2519, 0, sizeof l_LAST_2519);
l_LAST_2519 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((((*(R28 *)rt_nil_check(l_LAST_2519))).f_NEXT == NULL)) goto L_end2520;
{
l_LAST_2519 = ((*(R28 *)rt_nil_check(l_LAST_2519))).f_NEXT;
}
RT_B_TICK();
} L_end2520: ;
if ((((!(l_LAST_2519 == ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS)) && (!(((*(R28 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS))).f_T == NULL))) && (!(((*(R28 *)rt_nil_check(l_LAST_2519))).f_T == NULL))))
{
if ((!r_SAME_CLASS(((*(R28 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS))).f_T, ((*(R28 *)rt_nil_check(l_LAST_2519))).f_T)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_2508))).f_LINE, rt_str("both arguments of STORE_ belong to the same type class (D.4)", 60));
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
R21 * l_R_2521; memset(&l_R_2521, 0, sizeof l_R_2521);
l_R_2521 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_2522; memset(&l_T_2522, 0, sizeof l_T_2522);
if ((((*(R21 *)rt_nil_check(l_R_2521))).f_B == NULL))
{
{ R22 * rv2523 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv2523; }
}
r_OPEN_SCOPE();
{
R28 * l_P_2524; memset(&l_P_2524, 0, sizeof l_P_2524);
l_P_2524 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2524 == NULL)) goto L_end2525;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2524))).f_T == NULL)))
{
{
R12 * l_V_2526; memset(&l_V_2526, 0, sizeof l_V_2526);
l_V_2526 = r_NEW_SYM(g_Y_CONST, ((*(R28 *)rt_nil_check(l_P_2524))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2526))).f_T = ((*(R28 *)rt_nil_check(l_P_2524))).f_T;
S_R9(&((*(R12 *)rt_nil_check(l_V_2526))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2524))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_V_2526))).f_INPUT = 1;
r_DEFINE(l_V_2526, ((*(R21 *)rt_nil_check(l_R_2521))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2524))).f_T, ((*(R12 *)rt_nil_check(l_V_2526))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2521))).f_LINE, 0);
}
}
l_P_2524 = ((*(R28 *)rt_nil_check(l_P_2524))).f_NEXT;
}
RT_B_TICK();
} L_end2525: ;
}
l_T_2522 = r_RESOLVE(((*(R21 *)rt_nil_check(l_R_2521))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv2527 = l_T_2522;
return rv2527; }
rt_raise(RT_X_INIT);
}
static R9 r_C_HEADER(R12 * p_Y) { RT_B_TICK(); 
R9 l_PS_2528; memset(&l_PS_2528, 0, sizeof l_PS_2528);
S_R9(&l_PS_2528, r_MK(rt_str("", 0)), 0);
R9 l_SEP_2529; memset(&l_SEP_2529, 0, sizeof l_SEP_2529);
S_R9(&l_SEP_2529, r_MK(rt_str("", 0)), 0);
R28 * l_P_2530; memset(&l_P_2530, 0, sizeof l_P_2530);
l_P_2530 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_PS_2528, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R9(&l_SEP_2529, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_2530 == NULL)) goto L_end2531;
{
if ((((*(R28 *)rt_nil_check(l_P_2530))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2530))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2530))).f_MODE == g_M_IN))
{
S_R9(&l_PS_2528, r_FMT4(rt_str("@@@ p_@", 7), l_PS_2528, l_SEP_2529, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2530))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2530))).f_NAME)), 0);
S_R9(&l_SEP_2529, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R9(&l_PS_2528, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_2528, l_SEP_2529, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2530))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2530))).f_NAME)), 0);
S_R9(&l_SEP_2529, r_MK(rt_str(", ", 2)), 0);
}
l_P_2530 = ((*(R28 *)rt_nil_check(l_P_2530))).f_NEXT;
}
RT_B_TICK();
} L_end2531: ;
if (((l_PS_2528).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_PS_2528, r_MK(rt_str("void", 4)), 0);
}
{ R9 rv2532 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2528);
return rv2532; }
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
R25 * l_B_2533; memset(&l_B_2533, 0, sizeof l_B_2533);
l_B_2533 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_2534; memset(&l_I_2534, 0, sizeof l_I_2534);
l_I_2534 = ((rt_int)0LL);
for (;;) {
if ((l_B_2533 == NULL)) goto L_end2535;
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2533))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2533))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_2534)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2533))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2533))).f_LO) || ((((*(R25 *)rt_nil_check(l_B_2533))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2533))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_2534)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2533))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_2534), p_PC, r_NUM(l_I_2534)), ((*(R25 *)rt_nil_check(l_B_2533))).f_LO), p_LINE, p_CHECK);
}
}
l_I_2534 = rt_add(l_I_2534, ((rt_int)1LL));
l_B_2533 = ((*(R25 *)rt_nil_check(l_B_2533))).f_NEXT;
}
RT_B_TICK();
} L_end2535: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_2536; memset(&l_U_2536, 0, sizeof l_U_2536);
l_U_2536 = r_REAL_TYPE(p_T);
R24 * l_F_2537; memset(&l_F_2537, 0, sizeof l_F_2537);
l_F_2537 = ((*(R22 *)rt_nil_check(l_U_2536))).f_FIELDS;
R25 * l_A_2538; memset(&l_A_2538, 0, sizeof l_A_2538);
l_A_2538 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_2537 == NULL) || (l_A_2538 == NULL))) goto L_end2539;
{
if ((!(((*(R24 *)rt_nil_check(l_F_2537))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_A_2538))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_A_2538))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R24 *)rt_nil_check(l_F_2537))).f_CNAME), p_LINE, p_CHECK);
}
l_A_2538 = ((*(R25 *)rt_nil_check(l_A_2538))).f_NEXT;
}
l_F_2537 = ((*(R24 *)rt_nil_check(l_F_2537))).f_NEXT;
}
RT_B_TICK();
} L_end2539: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R9 p_T) { RT_B_TICK(); 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2540 = 0;
return rv2540; }
}
{ rt_int rv2541 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv2541; }
rt_raise(RT_X_INIT);
}
static R9 r_GEN_TEXT_NAME(R9 p_T) { RT_B_TICK(); 
{ R9 rv2542 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv2542; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R9 p_NAME, R9 p_C, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
R12 * l_OLD_2543; memset(&l_OLD_2543, 0, sizeof l_OLD_2543);
l_OLD_2543 = r_LOOKUP(p_NAME);
if ((!(l_OLD_2543 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_2543))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_2543))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_2543))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_2544; memset(&l_G_2544, 0, sizeof l_G_2544);
l_G_2544 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_2544))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R9(&((*(R12 *)rt_nil_check(l_G_2544))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_2544))).f_INPUT = 1;
r_DEFINE(l_G_2544, p_LINE);
}
}
static R20 * r_NEW_BINDS(void) { RT_B_TICK(); 
R20 * l_B_2545; memset(&l_B_2545, 0, sizeof l_B_2545);
l_B_2545 = ((R20 *)rt_b_new(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_2545)), ({ R20 rc2546; memset(&rc2546, 0, sizeof rc2546);  S_R9(&rc2546.f_NAME, r_NO_TEXT(), 0); rc2546.f_T = NULL; S_R9(&rc2546.f_C, r_NO_TEXT(), 0); rc2546.f_HASMV = 0; rc2546.f_MV = ((rt_int)0LL); rc2546.f_R = NULL; rc2546.f_NEXT = NULL; rc2546; }), 0);
{ R20 * rv2547 = l_B_2545;
return rv2547; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R9 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R20 * p_HEAD) { RT_B_TICK(); 
R20 * l_B_2548; memset(&l_B_2548, 0, sizeof l_B_2548);
l_B_2548 = ((R20 *)rt_b_new(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_2548)), ({ R20 rc2549; memset(&rc2549, 0, sizeof rc2549);  S_R9(&rc2549.f_NAME, p_NAME, 0); rc2549.f_T = p_T; S_R9(&rc2549.f_C, r_NO_TEXT(), 0); rc2549.f_HASMV = (p_M).f_OK; rc2549.f_MV = (p_M).f_V; rc2549.f_R = p_R; rc2549.f_NEXT = ((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT; rc2549; }), 0);
if ((p_M).f_OK)
{
S_R9(&((*(R20 *)rt_nil_check(l_B_2548))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_2548;
}
static R20 * r_FIND_BIND(R20 * p_BS, R9 p_NAME) { RT_B_TICK(); 
R20 * l_B_2550; memset(&l_B_2550, 0, sizeof l_B_2550);
l_B_2550 = p_BS;
for (;;) {
if ((l_B_2550 == NULL)) goto L_end2551;
{
if (r_TEQ(((*(R20 *)rt_nil_check(l_B_2550))).f_NAME, p_NAME))
{
{ R20 * rv2552 = l_B_2550;
return rv2552; }
}
l_B_2550 = ((*(R20 *)rt_nil_check(l_B_2550))).f_NEXT;
}
RT_B_TICK();
} L_end2551: ;
{ R20 * rv2553 = NULL;
return rv2553; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R21 * p_TS, R22 * p_T, R20 * p_BS) { RT_B_TICK(); 
R22 * l_RT_2554; memset(&l_RT_2554, 0, sizeof l_RT_2554);
l_RT_2554 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv2555 = 1;
return rv2555; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv2556 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv2556; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2557 = 1;
return rv2557; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2558 = 1;
return rv2558; }
}
{
R20 * l_B_2559; memset(&l_B_2559, 0, sizeof l_B_2559);
l_B_2559 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_2559 == NULL)))
{
if ((((*(R20 *)rt_nil_check(l_B_2559))).f_T == NULL))
{
{ rt_int rv2560 = 0;
return rv2560; }
}
{ rt_int rv2561 = r_SAME_TYPE(((*(R20 *)rt_nil_check(l_B_2559))).f_T, p_T);
return rv2561; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_C == NULL) && r_NONSTANDARD_REP(p_T)))
{
{ rt_int rv2562 = 0;
return rv2562; }
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
{ rt_int rv2563 = 1;
return rv2563; }
}
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2554))).f_KIND == g_T_ARR)))
{
{ rt_int rv2564 = 0;
return rv2564; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_2554))).f_DIMS)))
{
{ rt_int rv2565 = 0;
return rv2565; }
}
{ rt_int rv2566 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_2554))).f_ELEM, p_BS);
return rv2566; }
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv2567 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2567; }
}
else if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2568 = 0;
return rv2568; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_2554))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_2554))).f_MHI, p_BS))))
{
{ rt_int rv2569 = 0;
return rv2569; }
}
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_N_REP) && (!r_UNIFY_REP(((*(R21 *)rt_nil_check(p_TS))).f_C, l_RT_2554, p_BS))))
{
{ rt_int rv2570 = 0;
return rv2570; }
}
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2554))).f_KIND == g_T_INT)))
{
{ rt_int rv2571 = 0;
return rv2571; }
}
{ rt_int rv2572 = ((r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2554))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS)) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)2LL)), r_SOME(((rt_int)0LL)), p_BS));
return rv2572; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv2573 = ((((*(R22 *)rt_nil_check(l_RT_2554))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2554))).f_SCALE == ((rt_int)0LL)));
return rv2573; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2554))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv2574 = 0;
return rv2574; }
}
{ rt_int rv2575 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2554))).f_SCALE), p_BS);
return rv2575; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv2576 = (((*(R22 *)rt_nil_check(l_RT_2554))).f_KIND == g_T_BOOL);
return rv2576; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv2577 = ((((*(R22 *)rt_nil_check(l_RT_2554))).f_KIND == g_T_STR) && r_SAME_DERIVED_LENGTH(r_NTH_ARG(p_TS, ((rt_int)0LL)), l_RT_2554, p_BS));
return rv2577; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2554))).f_KIND == g_T_STR)))
{
{ rt_int rv2578 = 0;
return rv2578; }
}
if ((!(((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv2579 = 1;
return rv2579; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_2554))).f_BASE == NULL)))
{
{ rt_int rv2580 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_2554))).f_BASE, p_BS);
return rv2580; }
}
{ rt_int rv2581 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv2581; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv2582 = ((((*(R22 *)rt_nil_check(l_RT_2554))).f_KIND == g_T_BITS) && r_SAME_DERIVED_LENGTH(r_NTH_ARG(p_TS, ((rt_int)0LL)), l_RT_2554, p_BS));
return rv2582; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv2583 = (((*(R22 *)rt_nil_check(l_RT_2554))).f_KIND == g_T_SEM);
return rv2583; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2554))).f_KIND == g_T_PTR)))
{
{ rt_int rv2584 = 0;
return rv2584; }
}
{ rt_int rv2585 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_2554), p_BS);
return rv2585; }
}
{
R12 * l_Y_2586; memset(&l_Y_2586, 0, sizeof l_Y_2586);
l_Y_2586 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_2586 == NULL))
{
{ rt_int rv2587 = 0;
return rv2587; }
}
if (((((*(R12 *)rt_nil_check(l_Y_2586))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_2586))).f_DECL == NULL)))
{
{ rt_int rv2588 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_2586))).f_T, p_T);
return rv2588; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2586))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv2589 = 0;
return rv2589; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_2586))))
{
{ rt_int rv2590 = 0;
return rv2590; }
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2586))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2554))).f_KIND == g_T_REC)))
{
{ rt_int rv2591 = 0;
return rv2591; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2554))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv2592 = 0;
return rv2592; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2554))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_2586))))
{
{ rt_int rv2593 = 0;
return rv2593; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv2594 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2594; }
}
{ rt_int rv2595 = r_UNIFY(r_SUBST_FORMALS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2586))).f_DECL))).f_B, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2586))).f_DECL))).f_A, ((*(R21 *)rt_nil_check(p_TS))).f_A), l_RT_2554, p_BS);
return rv2595; }
}
{
R21 * l_F_2596; memset(&l_F_2596, 0, sizeof l_F_2596);
l_F_2596 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2586))).f_DECL))).f_A;
R21 * l_A_2597; memset(&l_A_2597, 0, sizeof l_A_2597);
l_A_2597 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_V_2598; memset(&l_V_2598, 0, sizeof l_V_2598);
l_V_2598 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_2599; memset(&l_CLASS_2599, 0, sizeof l_CLASS_2599);
l_CLASS_2599 = r_RECORD_CLASS_OF(l_RT_2554);
for (;;) {
if ((l_F_2596 == NULL)) goto L_end2600;
{
{
R21 * l_N_2601; memset(&l_N_2601, 0, sizeof l_N_2601);
l_N_2601 = ((*(R21 *)rt_nil_check(l_F_2596))).f_A;
for (;;) {
if ((l_N_2601 == NULL)) goto L_end2602;
{
if ((l_A_2597 == NULL))
{
{ rt_int rv2603 = 0;
return rv2603; }
}
if ((((*(R21 *)rt_nil_check(l_F_2596))).f_B == NULL))
{
if ((!(l_CLASS_2599 == NULL)))
{
{
R20 * l_B_2604; memset(&l_B_2604, 0, sizeof l_B_2604);
l_B_2604 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_2599))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_N_2601))).f_NAME);
if ((!(l_B_2604 == NULL)))
{
if ((!r_UNIFY(l_A_2597, ((*(R20 *)rt_nil_check(l_B_2604))).f_T, p_BS)))
{
{ rt_int rv2605 = 0;
return rv2605; }
}
}
}
}
}
else
{
if ((!(l_V_2598 == NULL)))
{
if ((((!(((*(R21 *)rt_nil_check(l_A_2597))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(l_A_2597))).f_KIND == g_N_DONTCARE))) && (!(((*(R21 *)rt_nil_check(l_A_2597))).f_KIND == g_N_ANY))))
{
{
R23 l_M_2606; memset(&l_M_2606, 0, sizeof l_M_2606);
S_R23(&l_M_2606, r_MANIFEST(l_A_2597), 0);
if (((l_M_2606).f_OK && (((*(R25 *)rt_nil_check(l_V_2598))).f_MLO).f_OK))
{
if ((!((l_M_2606).f_V == (((*(R25 *)rt_nil_check(l_V_2598))).f_MLO).f_V)))
{
{ rt_int rv2607 = 0;
return rv2607; }
}
}
}
}
l_V_2598 = ((*(R25 *)rt_nil_check(l_V_2598))).f_NEXT;
}
}
l_A_2597 = ((*(R21 *)rt_nil_check(l_A_2597))).f_NEXT;
l_N_2601 = ((*(R21 *)rt_nil_check(l_N_2601))).f_NEXT;
}
RT_B_TICK();
} L_end2602: ;
}
l_F_2596 = ((*(R21 *)rt_nil_check(l_F_2596))).f_NEXT;
}
RT_B_TICK();
} L_end2600: ;
}
{ rt_int rv2608 = 1;
return rv2608; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_DERIVED_LENGTH(R21 * p_A, R22 * p_RT, R20 * p_BS) { RT_B_TICK(); 
if (((p_A == NULL) || (!(((*(R22 *)rt_nil_check(p_RT))).f_MLEN).f_OK)))
{
{ rt_int rv2609 = 1;
return rv2609; }
}
if (((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) || ((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2610 = 1;
return rv2610; }
}
{
R9 l_KEY_2611; memset(&l_KEY_2611, 0, sizeof l_KEY_2611);
S_R9(&l_KEY_2611, r_MKN(rt_b_cat(rt_str("%", 1), r_STR(((*(R21 *)rt_nil_check(p_A))).f_NAME, (((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN))), 0);
R20 * l_B_2612; memset(&l_B_2612, 0, sizeof l_B_2612);
l_B_2612 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, l_KEY_2611);
if ((!(l_B_2612 == NULL)))
{
{ rt_int rv2613 = (((*(R20 *)rt_nil_check(l_B_2612))).f_MV == (((*(R22 *)rt_nil_check(p_RT))).f_MLEN).f_V);
return rv2613; }
}
r_ADD_BIND(l_KEY_2611, NULL, ((*(R22 *)rt_nil_check(p_RT))).f_MLEN, NULL, p_BS);
{ rt_int rv2614 = 1;
return rv2614; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_REP(R21 * p_R, R22 * p_RT, R20 * p_BS) { RT_B_TICK(); 
R21 * l_A_2615; memset(&l_A_2615, 0, sizeof l_A_2615);
l_A_2615 = ((*(R22 *)rt_nil_check(p_RT))).f_REPS;
if (r_TEQS(((*(R21 *)rt_nil_check(p_R))).f_NAME, rt_str("FIXED_REP", 9)))
{
if ((!(((*(R22 *)rt_nil_check(p_RT))).f_KIND == g_T_INT)))
{
{ rt_int rv2616 = 0;
return rv2616; }
}
{
R9 l_SIGNING_2617; memset(&l_SIGNING_2617, 0, sizeof l_SIGNING_2617);
S_R9(&l_SIGNING_2617, r_MK(rt_str("SIGNED", 6)), 0);
if ((!(l_A_2615 == NULL)))
{
if ((!((r_TEQS(((*(R21 *)rt_nil_check(l_A_2615))).f_NAME, rt_str("FIXED_REP", 9)) || r_TEQS(((*(R21 *)rt_nil_check(l_A_2615))).f_NAME, rt_str("FIXED_STD", 9))))))
{
{ rt_int rv2618 = 1;
return rv2618; }
}
if ((r_TEQS(((*(R21 *)rt_nil_check(l_A_2615))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R21 *)rt_nil_check(l_A_2615))).f_A == NULL))))
{
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2615))).f_A))).f_NEXT == NULL)))
{
S_R9(&l_SIGNING_2617, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2615))).f_A))).f_NEXT))).f_NAME, 0);
}
}
}
if ((!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(p_R))).f_A, r_STATIC_SIZE(p_RT), p_BS)))
{
{ rt_int rv2619 = 0;
return rv2619; }
}
if ((!(((*(R21 *)rt_nil_check(p_R))).f_A == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NEXT == NULL)))
{
if (((((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_KIND == g_N_ENUMLIT))) && (!r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_NAME, l_SIGNING_2617))))
{
{ rt_int rv2620 = 0;
return rv2620; }
}
}
}
{ rt_int rv2621 = 1;
return rv2621; }
}
}
if ((l_A_2615 == NULL))
{
{ rt_int rv2622 = 1;
return rv2622; }
}
{ rt_int rv2623 = r_TEQ(((*(R21 *)rt_nil_check(p_R))).f_NAME, ((*(R21 *)rt_nil_check(l_A_2615))).f_NAME);
return rv2623; }
rt_raise(RT_X_INIT);
}
static rt_int r_NONSTANDARD_REP(R22 * p_T) { RT_B_TICK(); 
R21 * l_R_2624; memset(&l_R_2624, 0, sizeof l_R_2624);
l_R_2624 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
if ((l_R_2624 == NULL))
{
{ rt_int rv2625 = 0;
return rv2625; }
}
if ((((*(R21 *)rt_nil_check(l_R_2624))).f_KIND == g_TS_GEN))
{
{ rt_int rv2626 = 0;
return rv2626; }
}
{ rt_int rv2627 = (((((r_TEQS(((*(R21 *)rt_nil_check(l_R_2624))).f_NAME, rt_str("FIXED_REP", 9)) || r_TEQS(((*(R21 *)rt_nil_check(l_R_2624))).f_NAME, rt_str("ENUM_REP", 8))) || r_TEQS(((*(R21 *)rt_nil_check(l_R_2624))).f_NAME, rt_str("ENUM_VAL_REP", 12))) || r_TEQS(((*(R21 *)rt_nil_check(l_R_2624))).f_NAME, rt_str("CHAR_STR_REP", 12))) || r_TEQS(((*(R21 *)rt_nil_check(l_R_2624))).f_NAME, rt_str("ARRAY_REP", 9))) || r_TEQS(((*(R21 *)rt_nil_check(l_R_2624))).f_NAME, rt_str("RECORD_REP", 10)));
return rv2627; }
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { RT_B_TICK(); 
R12 * l_R_2628; memset(&l_R_2628, 0, sizeof l_R_2628);
l_R_2628 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv2629 = NULL;
return rv2629; }
}
for (;;) {
if ((l_R_2628 == NULL)) goto L_end2630;
{
if ((((*(R12 *)rt_nil_check(l_R_2628))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv2631 = l_R_2628;
return rv2631; }
}
l_R_2628 = ((*(R12 *)rt_nil_check(l_R_2628))).f_INSTANCES;
}
RT_B_TICK();
} L_end2630: ;
{ R12 * rv2632 = NULL;
return rv2632; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R21 * p_A, R23 p_M, R20 * p_BS) { RT_B_TICK(); 
if ((p_A == NULL))
{
{ rt_int rv2633 = 1;
return rv2633; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2634 = 1;
return rv2634; }
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2635 = 1;
return rv2635; }
}
{
R20 * l_B_2636; memset(&l_B_2636, 0, sizeof l_B_2636);
l_B_2636 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_2636 == NULL)))
{
{ rt_int rv2637 = ((((*(R20 *)rt_nil_check(l_B_2636))).f_HASMV && (p_M).f_OK) && (((*(R20 *)rt_nil_check(l_B_2636))).f_MV == (p_M).f_V));
return rv2637; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv2638 = 0;
return rv2638; }
}
r_ADD_BIND(((*(R21 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv2639 = 1;
return rv2639; }
}
{
R23 l_V_2640; memset(&l_V_2640, 0, sizeof l_V_2640);
S_R23(&l_V_2640, r_MANIFEST(p_A), 0);
if (((l_V_2640).f_OK && (p_M).f_OK))
{
{ rt_int rv2641 = ((l_V_2640).f_V == (p_M).f_V);
return rv2641; }
}
}
{ rt_int rv2642 = 1;
return rv2642; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R20 * p_BS) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv2643 = 0;
return rv2643; }
}
if (((!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME)) && (!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_APPLY))))
{
{ rt_int rv2644 = 0;
return rv2644; }
}
{ rt_int rv2645 = (!(r_FIND_ROUTINE_ARG(((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R27 *)rt_nil_check(p_A))).f_E, p_BS, ((rt_int)0LL), 0) == NULL));
return rv2645; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv2646 = 1;
return rv2646; }
}
r_TYPE_ARG(p_A);
{ rt_int rv2647 = r_UNIFY(((*(R28 *)rt_nil_check(p_P))).f_TS, (((*(R27 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv2647; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_BS_2648; memset(&l_BS_2648, 0, sizeof l_BS_2648);
l_BS_2648 = r_NEW_BINDS();
R28 * l_P_2649; memset(&l_P_2649, 0, sizeof l_P_2649);
l_P_2649 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2650; memset(&l_A_2650, 0, sizeof l_A_2650);
l_A_2650 = p_ARGS;
for (;;) {
if ((l_P_2649 == NULL)) goto L_end2651;
{
if ((((*(R28 *)rt_nil_check(l_P_2649))).f_TS == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2650))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2649))).f_NAME, r_ARG_TYPE(((*(R27 *)rt_nil_check(l_A_2650))).f_E), r_NO_MVAL(), NULL, l_BS_2648);
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2649))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2649))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R28 *)rt_nil_check(l_P_2649))).f_TS, ((*(R27 *)rt_nil_check(l_A_2650))).f_E, p_LINE), l_BS_2648);
}
else if (((((!(((*(R27 *)rt_nil_check(l_A_2650))).f_E == NULL)) && (!((*(R27 *)rt_nil_check(l_A_2650))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R28 *)rt_nil_check(l_P_2649))).f_TS))) && (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2650))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R27 *)rt_nil_check(l_A_2650))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(l_A_2650))).f_V, r_EXPR(((*(R27 *)rt_nil_check(l_A_2650))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(l_A_2650))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R28 *)rt_nil_check(l_P_2649))).f_TS, (((*(R27 *)rt_nil_check(l_A_2650))).f_V).f_T, l_BS_2648)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R28 *)rt_nil_check(l_P_2649))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2649))).f_TS))
{
r_ADD_BIND(r_MKN(rt_b_cat(rt_str("\?", 1), r_STR(((*(R28 *)rt_nil_check(l_P_2649))).f_NAME, (((*(R28 *)rt_nil_check(l_P_2649))).f_NAME).f_LEN))), (((*(R27 *)rt_nil_check(l_A_2650))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_2648);
}
}
l_P_2649 = ((*(R28 *)rt_nil_check(l_P_2649))).f_NEXT;
l_A_2650 = ((*(R27 *)rt_nil_check(l_A_2650))).f_NEXT;
}
RT_B_TICK();
} L_end2651: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_2648);
{
R12 * l_I_2652; memset(&l_I_2652, 0, sizeof l_I_2652);
l_I_2652 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2652 == NULL)) goto L_end2653;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2652))).f_BINDINGS, ((*(R20 *)rt_nil_check(l_BS_2648))).f_NEXT))
{
{ R12 * rv2654 = l_I_2652;
return rv2654; }
}
l_I_2652 = ((*(R12 *)rt_nil_check(l_I_2652))).f_INSTANCES;
}
RT_B_TICK();
} L_end2653: ;
}
{ R12 * rv2655 = r_NEW_INSTANCE(p_G, ((*(R20 *)rt_nil_check(l_BS_2648))).f_NEXT, p_ARGS);
return rv2655; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_2656; memset(&l_P_2656, 0, sizeof l_P_2656);
l_P_2656 = p_A;
for (;;) {
if ((l_P_2656 == NULL)) goto L_end2657;
{
{
R20 * l_Q_2658; memset(&l_Q_2658, 0, sizeof l_Q_2658);
l_Q_2658 = r_FIND_BIND(p_B, ((*(R20 *)rt_nil_check(l_P_2656))).f_NAME);
if ((l_Q_2658 == NULL))
{
{ rt_int rv2659 = 0;
return rv2659; }
}
if (((!(((*(R20 *)rt_nil_check(l_P_2656))).f_T == NULL)) || (!(((*(R20 *)rt_nil_check(l_Q_2658))).f_T == NULL))))
{
if (((((*(R20 *)rt_nil_check(l_P_2656))).f_T == NULL) || (((*(R20 *)rt_nil_check(l_Q_2658))).f_T == NULL)))
{
{ rt_int rv2660 = 0;
return rv2660; }
}
if ((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_2656))).f_T, ((*(R20 *)rt_nil_check(l_Q_2658))).f_T)))
{
{ rt_int rv2661 = 0;
return rv2661; }
}
if ((!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_2656))).f_T, ((*(R20 *)rt_nil_check(l_Q_2658))).f_T)))
{
{ rt_int rv2662 = 0;
return rv2662; }
}
if ((!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_2656))).f_T, ((*(R20 *)rt_nil_check(l_Q_2658))).f_T)))
{
{ rt_int rv2663 = 0;
return rv2663; }
}
}
if ((((!(((*(R20 *)rt_nil_check(l_P_2656))).f_HASMV == ((*(R20 *)rt_nil_check(l_Q_2658))).f_HASMV)) || (!(((*(R20 *)rt_nil_check(l_P_2656))).f_MV == ((*(R20 *)rt_nil_check(l_Q_2658))).f_MV))) || (!(((*(R20 *)rt_nil_check(l_P_2656))).f_R == ((*(R20 *)rt_nil_check(l_Q_2658))).f_R))))
{
{ rt_int rv2664 = 0;
return rv2664; }
}
}
l_P_2656 = ((*(R20 *)rt_nil_check(l_P_2656))).f_NEXT;
}
RT_B_TICK();
} L_end2657: ;
{ rt_int rv2665 = 1;
return rv2665; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2666; memset(&l_RA_2666, 0, sizeof l_RA_2666);
l_RA_2666 = r_REAL_TYPE(p_A);
R22 * l_RB_2667; memset(&l_RB_2667, 0, sizeof l_RB_2667);
l_RB_2667 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_2666))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_2666))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_2666))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_2667))).f_KIND))))
{
{ rt_int rv2668 = 1;
return rv2668; }
}
if (((((*(R22 *)rt_nil_check(l_RA_2666))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_2667))).f_MLEN).f_OK))
{
{ rt_int rv2669 = ((((*(R22 *)rt_nil_check(l_RA_2666))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_2667))).f_MLEN).f_V);
return rv2669; }
}
{ rt_int rv2670 = ((((*(R22 *)rt_nil_check(l_RA_2666))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_2667))).f_MLEN).f_OK);
return rv2670; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R21 * l_RA_2671; memset(&l_RA_2671, 0, sizeof l_RA_2671);
l_RA_2671 = ((*(R22 *)rt_nil_check(p_A))).f_REPS;
R21 * l_RB_2672; memset(&l_RB_2672, 0, sizeof l_RB_2672);
l_RB_2672 = ((*(R22 *)rt_nil_check(p_B))).f_REPS;
if (((l_RA_2671 == NULL) || (l_RB_2672 == NULL)))
{
{ rt_int rv2673 = (l_RA_2671 == l_RB_2672);
return rv2673; }
}
if ((l_RA_2671 == l_RB_2672))
{
{ rt_int rv2674 = 1;
return rv2674; }
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_RA_2671))).f_NAME, ((*(R21 *)rt_nil_check(l_RB_2672))).f_NAME)))
{
{ rt_int rv2675 = 0;
return rv2675; }
}
{
R21 * l_X_2676; memset(&l_X_2676, 0, sizeof l_X_2676);
l_X_2676 = ((*(R21 *)rt_nil_check(l_RA_2671))).f_A;
R21 * l_Y_2677; memset(&l_Y_2677, 0, sizeof l_Y_2677);
l_Y_2677 = ((*(R21 *)rt_nil_check(l_RB_2672))).f_A;
for (;;) {
if (((l_X_2676 == NULL) || (l_Y_2677 == NULL))) goto L_end2678;
{
if (((((((*(R21 *)rt_nil_check(l_X_2676))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_X_2676))).f_KIND == g_N_ENUMLIT))) && (((((*(R21 *)rt_nil_check(l_Y_2677))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_Y_2677))).f_KIND == g_N_ENUMLIT)))))
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_X_2676))).f_NAME, ((*(R21 *)rt_nil_check(l_Y_2677))).f_NAME)))
{
{ rt_int rv2679 = 0;
return rv2679; }
}
}
else
{
{
R23 l_MX_2680; memset(&l_MX_2680, 0, sizeof l_MX_2680);
S_R23(&l_MX_2680, r_MANIFEST(l_X_2676), 0);
R23 l_MY_2681; memset(&l_MY_2681, 0, sizeof l_MY_2681);
S_R23(&l_MY_2681, r_MANIFEST(l_Y_2677), 0);
if (((!((l_MX_2680).f_OK == (l_MY_2681).f_OK)) || (!((l_MX_2680).f_V == (l_MY_2681).f_V))))
{
{ rt_int rv2682 = 0;
return rv2682; }
}
}
}
l_X_2676 = ((*(R21 *)rt_nil_check(l_X_2676))).f_NEXT;
l_Y_2677 = ((*(R21 *)rt_nil_check(l_Y_2677))).f_NEXT;
}
RT_B_TICK();
} L_end2678: ;
{ rt_int rv2683 = ((((l_X_2676 == NULL) && (l_Y_2677 == NULL)) && (((*(R21 *)rt_nil_check(l_RA_2671))).f_B == NULL)) && (((*(R21 *)rt_nil_check(l_RB_2672))).f_B == NULL));
return rv2683; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R21 * p_TS, R21 * p_E, rt_int p_LINE) { RT_B_TICK(); 
{ R12 * rv2684 = r_FIND_ROUTINE_ARG(p_TS, p_E, NULL, p_LINE, 1);
return rv2684; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE_ARG(R21 * p_TS, R21 * p_E, R20 * p_BS0, rt_int p_LINE, rt_int p_STRICT) { RT_B_TICK(); 
R12 * l_Y_2685; memset(&l_Y_2685, 0, sizeof l_Y_2685);
l_Y_2685 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_2686; memset(&l_FOUND_2686, 0, sizeof l_FOUND_2686);
l_FOUND_2686 = NULL;
R20 * l_BS_2687; memset(&l_BS_2687, 0, sizeof l_BS_2687);
l_BS_2687 = p_BS0;
if ((l_BS_2687 == NULL))
{
l_BS_2687 = r_NEW_BINDS();
}
for (;;) {
if ((l_Y_2685 == NULL)) goto L_end2688;
{
if ((((*(R12 *)rt_nil_check(l_Y_2685))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_2689; memset(&l_R_2689, 0, sizeof l_R_2689);
l_R_2689 = r_ORIGINAL(l_Y_2685);
R20 * l_TRY_2690; memset(&l_TRY_2690, 0, sizeof l_TRY_2690);
l_TRY_2690 = r_NEW_BINDS();
((*(R20 *)rt_nil_check(l_TRY_2690))).f_NEXT = ((*(R20 *)rt_nil_check(l_BS_2687))).f_NEXT;
r_ROUTINE_HEADER(l_R_2689);
if ((((!((*(R12 *)rt_nil_check(l_R_2689))).f_GENERIC) && r_EXPLICIT_TEMPLATE_FITS(p_E, l_R_2689)) && r_TEMPLATE_FITS(p_TS, l_R_2689, l_TRY_2690)))
{
if (((!(l_FOUND_2686 == NULL)) && (!(l_FOUND_2686 == l_R_2689))))
{
if ((!p_STRICT))
{
{ R12 * rv2691 = NULL;
return rv2691; }
}
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_2686 = l_R_2689;
}
}
}
l_Y_2685 = r_LOOKUP_NEXT(l_Y_2685);
}
RT_B_TICK();
} L_end2688: ;
if ((l_FOUND_2686 == NULL))
{
if ((!p_STRICT))
{
{ R12 * rv2692 = NULL;
return rv2692; }
}
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter (5.1): ", 45), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_2686))).f_USES == NULL)))
{
if ((!p_STRICT))
{
{ R12 * rv2693 = NULL;
return rv2693; }
}
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (p_STRICT)
{
if ((!r_TEMPLATE_FITS(p_TS, l_FOUND_2686, l_BS_2687)))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter (5.1): ", 45), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
r_NEED_BODY(l_FOUND_2686);
}
{ R12 * rv2694 = l_FOUND_2686;
return rv2694; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPLICIT_TEMPLATE_FITS(R21 * p_E, R12 * p_R) { RT_B_TICK(); 
R21 * l_A_2695; memset(&l_A_2695, 0, sizeof l_A_2695);
l_A_2695 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R28 * l_Q_2696; memset(&l_Q_2696, 0, sizeof l_Q_2696);
l_Q_2696 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY)))
{
{ rt_int rv2697 = 1;
return rv2697; }
}
if (((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
{ rt_int rv2698 = 0;
return rv2698; }
}
for (;;) {
if (((l_A_2695 == NULL) || (l_Q_2696 == NULL))) goto L_end2699;
{
if ((((*(R28 *)rt_nil_check(l_Q_2696))).f_T == NULL))
{
{ rt_int rv2700 = 0;
return rv2700; }
}
if ((!r_IDENTICAL_TYPE(r_RESOLVE(r_EXPR_TO_TS(l_A_2695)), ((*(R28 *)rt_nil_check(l_Q_2696))).f_T)))
{
{ rt_int rv2701 = 0;
return rv2701; }
}
l_A_2695 = ((*(R21 *)rt_nil_check(l_A_2695))).f_NEXT;
l_Q_2696 = ((*(R28 *)rt_nil_check(l_Q_2696))).f_NEXT;
}
RT_B_TICK();
} L_end2699: ;
if (((!(l_A_2695 == NULL)) || (!(l_Q_2696 == NULL))))
{
{ rt_int rv2702 = 0;
return rv2702; }
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_E == NULL)))
{
{ rt_int rv2703 = r_IDENTICAL_TYPE(r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_E), ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2703; }
}
{ rt_int rv2704 = 1;
return rv2704; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEMPLATE_FITS(R21 * p_TS, R12 * p_R, R20 * p_BS) { RT_B_TICK(); 
R21 * l_P_2705; memset(&l_P_2705, 0, sizeof l_P_2705);
l_P_2705 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R28 * l_Q_2706; memset(&l_Q_2706, 0, sizeof l_Q_2706);
l_Q_2706 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
if ((!(((((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL))) == ((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_IV == ((rt_int)1LL))))))
{
{ rt_int rv2707 = 0;
return rv2707; }
}
for (;;) {
if (((l_P_2705 == NULL) || (l_Q_2706 == NULL))) goto L_end2708;
{
if ((!(((*(R21 *)rt_nil_check(l_P_2705))).f_IV == ((*(R28 *)rt_nil_check(l_Q_2706))).f_MODE)))
{
{ rt_int rv2709 = 0;
return rv2709; }
}
if (((((*(R21 *)rt_nil_check(l_P_2705))).f_B == NULL) || (((*(R28 *)rt_nil_check(l_Q_2706))).f_T == NULL)))
{
if (((!(((*(R21 *)rt_nil_check(l_P_2705))).f_B == NULL)) || (!(((*(R28 *)rt_nil_check(l_Q_2706))).f_T == NULL))))
{
{ rt_int rv2710 = 0;
return rv2710; }
}
}
else if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_2705))).f_B))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2711 = 0;
return rv2711; }
}
else if ((!r_TYPE_FITS_SPEC(((*(R21 *)rt_nil_check(l_P_2705))).f_B, ((*(R28 *)rt_nil_check(l_Q_2706))).f_T, p_BS)))
{
{ rt_int rv2712 = 0;
return rv2712; }
}
l_P_2705 = ((*(R21 *)rt_nil_check(l_P_2705))).f_NEXT;
l_Q_2706 = ((*(R28 *)rt_nil_check(l_Q_2706))).f_NEXT;
}
RT_B_TICK();
} L_end2708: ;
if (((!(l_P_2705 == NULL)) || (!(l_Q_2706 == NULL))))
{
{ rt_int rv2713 = 0;
return rv2713; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if ((!r_TYPE_FITS_SPEC(((*(R21 *)rt_nil_check(p_TS))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT, p_BS)))
{
{ rt_int rv2714 = 0;
return rv2714; }
}
}
{
R21 * l_X_2715; memset(&l_X_2715, 0, sizeof l_X_2715);
l_X_2715 = ((*(R21 *)rt_nil_check(p_TS))).f_D;
for (;;) {
if ((l_X_2715 == NULL)) goto L_end2716;
{
if ((!r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_D))).f_A, ((*(R21 *)rt_nil_check(l_X_2715))).f_NAME)))
{
{ rt_int rv2717 = 0;
return rv2717; }
}
l_X_2715 = ((*(R21 *)rt_nil_check(l_X_2715))).f_NEXT;
}
RT_B_TICK();
} L_end2716: ;
}
{ rt_int rv2718 = 1;
return rv2718; }
rt_raise(RT_X_INIT);
}
static rt_int r_TYPE_FITS_SPEC(R21 * p_TS, R22 * p_T, R20 * p_BS) { RT_B_TICK(); 
if ((r_STATIC_GENERIC(p_TS) || r_HAS_DERIVED(p_TS)))
{
{ rt_int rv2719 = r_UNIFY(p_TS, p_T, p_BS);
return rv2719; }
}
{ rt_int rv2720 = r_IDENTICAL_TYPE(r_RESOLVE(p_TS), p_T);
return rv2720; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_DERIVED(R21 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2721 = 0;
return rv2721; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2722 = 1;
return rv2722; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if (r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A))
{
{ rt_int rv2723 = 1;
return rv2723; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if ((r_HAS_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_A) || r_HAS_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_B)))
{
{ rt_int rv2724 = 1;
return rv2724; }
}
}
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2725 = 1;
return rv2725; }
}
{ rt_int rv2726 = 0;
return rv2726; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R20 * p_BS) { RT_B_TICK(); 
R21 * l_NEEDL_2727; memset(&l_NEEDL_2727, 0, sizeof l_NEEDL_2727);
l_NEEDL_2727 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R20 * l_SAVED_2728; memset(&l_SAVED_2728, 0, sizeof l_SAVED_2728);
l_SAVED_2728 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_2727 == NULL)) goto L_end2729;
{
{
R21 * l_T_2730; memset(&l_T_2730, 0, sizeof l_T_2730);
l_T_2730 = ((*(R21 *)rt_nil_check(l_NEEDL_2727))).f_A;
for (;;) {
if ((l_T_2730 == NULL)) goto L_end2731;
{
if ((r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(l_T_2730))).f_NAME) == NULL))
{
{
R27 * l_ARGS_2732; memset(&l_ARGS_2732, 0, sizeof l_ARGS_2732);
l_ARGS_2732 = NULL;
R27 * l_TAIL_2733; memset(&l_TAIL_2733, 0, sizeof l_TAIL_2733);
l_TAIL_2733 = NULL;
R21 * l_P_2734; memset(&l_P_2734, 0, sizeof l_P_2734);
l_P_2734 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_2730))).f_B))).f_A;
R12 * l_R_2735; memset(&l_R_2735, 0, sizeof l_R_2735);
rt_int l_ENTERED_2736; memset(&l_ENTERED_2736, 0, sizeof l_ENTERED_2736);
l_ENTERED_2736 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_2734 == NULL)) goto L_end2737;
{
{
R27 * l_A_2738; memset(&l_A_2738, 0, sizeof l_A_2738);
if ((((*(R21 *)rt_nil_check(l_P_2734))).f_B == NULL))
{
l_A_2738 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_2738 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R21 *)rt_nil_check(l_P_2734))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R27 *)rt_nil_check(l_A_2738))).f_MODE = ((*(R21 *)rt_nil_check(l_P_2734))).f_IV;
if ((l_TAIL_2733 == NULL))
{
l_ARGS_2732 = l_A_2738;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2733))).f_NEXT = l_A_2738;
}
l_TAIL_2733 = l_A_2738;
}
l_P_2734 = ((*(R21 *)rt_nil_check(l_P_2734))).f_NEXT;
}
RT_B_TICK();
} L_end2737: ;
if (l_ENTERED_2736)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_2735 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(l_T_2730))).f_NAME, l_ARGS_2732, p_LINE, 0);
if ((l_R_2735 == NULL))
{
l_R_2735 = r_LOOKUP(((*(R21 *)rt_nil_check(l_T_2730))).f_NAME);
for (;;) {
if ((l_R_2735 == NULL)) goto L_end2739;
{
if ((((*(R12 *)rt_nil_check(l_R_2735))).f_KIND == g_Y_BUILTIN))
{
goto L_end2739;
}
l_R_2735 = r_LOOKUP_NEXT(l_R_2735);
}
RT_B_TICK();
} L_end2739: ;
}
if (((l_R_2735 == NULL) && (!r_IS_OPERATOR_NAME(((*(R21 *)rt_nil_check(l_T_2730))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R21 *)rt_nil_check(l_T_2730))).f_NAME);
}
if ((!(l_R_2735 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_R_2735))).f_KIND == g_Y_ROUTINE))
{
r_COMPUTE_USES(r_ORIGINAL(l_R_2735));
if ((!(((*(R12 *)rt_nil_check(r_ORIGINAL(l_R_2735)))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine named in a WHERE clause may not import data (5.2): ", 61), ((*(R21 *)rt_nil_check(l_T_2730))).f_NAME);
}
}
r_ADD_BIND(((*(R21 *)rt_nil_check(l_T_2730))).f_NAME, NULL, r_NO_MVAL(), l_R_2735, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_2730 = ((*(R21 *)rt_nil_check(l_T_2730))).f_NEXT;
}
RT_B_TICK();
} L_end2731: ;
}
l_NEEDL_2727 = ((*(R21 *)rt_nil_check(l_NEEDL_2727))).f_NEXT;
}
RT_B_TICK();
} L_end2729: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2728;
}
static rt_int r_DONTCARE_TYPE_ARG(R21 * p_TS) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2740 = 0;
return rv2740; }
}
if ((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{
R21 * l_A_2741; memset(&l_A_2741, 0, sizeof l_A_2741);
l_A_2741 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_A_2741 == NULL)) goto L_end2742;
{
if ((((*(R21 *)rt_nil_check(l_A_2741))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2743 = 1;
return rv2743; }
}
l_A_2741 = ((*(R21 *)rt_nil_check(l_A_2741))).f_NEXT;
}
RT_B_TICK();
} L_end2742: ;
}
{ rt_int rv2744 = 0;
return rv2744; }
}
{
R12 * l_Y_2745; memset(&l_Y_2745, 0, sizeof l_Y_2745);
l_Y_2745 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_2746; memset(&l_A_2746, 0, sizeof l_A_2746);
l_A_2746 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_2747; memset(&l_F_2747, 0, sizeof l_F_2747);
if ((l_Y_2745 == NULL))
{
{ rt_int rv2748 = 0;
return rv2748; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2745))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_2745))).f_DECL == NULL)))
{
{ rt_int rv2749 = 0;
return rv2749; }
}
l_F_2747 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2745))).f_DECL))).f_A;
for (;;) {
if ((l_F_2747 == NULL)) goto L_end2750;
{
{
R21 * l_N_2751; memset(&l_N_2751, 0, sizeof l_N_2751);
l_N_2751 = ((*(R21 *)rt_nil_check(l_F_2747))).f_A;
for (;;) {
if ((l_N_2751 == NULL)) goto L_end2752;
{
if ((l_A_2746 == NULL))
{
{ rt_int rv2753 = 0;
return rv2753; }
}
if (((((*(R21 *)rt_nil_check(l_F_2747))).f_B == NULL) && (((*(R21 *)rt_nil_check(l_A_2746))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2754 = 1;
return rv2754; }
}
l_A_2746 = ((*(R21 *)rt_nil_check(l_A_2746))).f_NEXT;
l_N_2751 = ((*(R21 *)rt_nil_check(l_N_2751))).f_NEXT;
}
RT_B_TICK();
} L_end2752: ;
}
l_F_2747 = ((*(R21 *)rt_nil_check(l_F_2747))).f_NEXT;
}
RT_B_TICK();
} L_end2750: ;
}
{ rt_int rv2755 = 0;
return rv2755; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R20 * p_BS, R27 * p_ARGS) { RT_B_TICK(); 
R27 * l_A_2756; memset(&l_A_2756, 0, sizeof l_A_2756);
l_A_2756 = p_ARGS;
R12 * l_I_2757; memset(&l_I_2757, 0, sizeof l_I_2757);
l_I_2757 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R20 * l_SAVED_2758; memset(&l_SAVED_2758, 0, sizeof l_SAVED_2758);
l_SAVED_2758 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R12 * l_SAVED_SEG_2759; memset(&l_SAVED_SEG_2759, 0, sizeof l_SAVED_SEG_2759);
l_SAVED_SEG_2759 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R12 * l_HOME_2760; memset(&l_HOME_2760, 0, sizeof l_HOME_2760);
l_HOME_2760 = r_ENTER_HOME(p_G);
R28 * l_P_2761; memset(&l_P_2761, 0, sizeof l_P_2761);
l_P_2761 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R28 * l_TAIL_2762; memset(&l_TAIL_2762, 0, sizeof l_TAIL_2762);
l_TAIL_2762 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_2757)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_2757))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_2757))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_2757))).f_PARAMS = NULL;
S_R9(&((*(R12 *)rt_nil_check(l_I_2757))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_2757))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_2757;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(p_G))).f_HOME;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_2761 == NULL)) goto L_end2763;
{
{
R28 * l_PM_2764; memset(&l_PM_2764, 0, sizeof l_PM_2764);
l_PM_2764 = ((R28 *)rt_b_new(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2764)), (*(R28 *)rt_nil_check(l_P_2761)), 0);
((*(R28 *)rt_nil_check(l_PM_2764))).f_NEXT = NULL;
if ((((*(R28 *)rt_nil_check(l_P_2761))).f_TS == NULL))
{
((*(R28 *)rt_nil_check(l_PM_2764))).f_T = NULL;
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2761))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R28 *)rt_nil_check(l_PM_2764))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2761))).f_TS) && ((*(R27 *)rt_nil_check(l_A_2756))).f_HAVE))
{
((*(R28 *)rt_nil_check(l_PM_2764))).f_T = (((*(R27 *)rt_nil_check(l_A_2756))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2764))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2764))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R28 *)rt_nil_check(l_PM_2764))).f_T = ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2764))).f_T))).f_BASE;
}
}
}
else
{
((*(R28 *)rt_nil_check(l_PM_2764))).f_T = r_RESOLVE(((*(R28 *)rt_nil_check(l_P_2761))).f_TS);
}
if ((!(((*(R28 *)rt_nil_check(l_P_2761))).f_TS == NULL)))
{
if (((((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2761))).f_TS))).f_KIND == g_TS_GEN) || (((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2761))).f_TS))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2761))).f_TS))).f_A == NULL))))) && ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2761))).f_TS))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((!(r_FIND_BIND(p_BS, ((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2761))).f_TS))).f_NAME) == NULL)))
{
if ((!(((*(R20 *)rt_nil_check(r_FIND_BIND(p_BS, ((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2761))).f_TS))).f_NAME)))).f_T == NULL)))
{
((*(R28 *)rt_nil_check(l_PM_2764))).f_T = r_MARK_GENP(((*(R28 *)rt_nil_check(l_PM_2764))).f_T, ((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2761))).f_TS))).f_NAME);
}
}
}
}
((*(R28 *)rt_nil_check(l_PM_2764))).f_TS = NULL;
if ((l_TAIL_2762 == NULL))
{
((*(R12 *)rt_nil_check(l_I_2757))).f_PARAMS = l_PM_2764;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2762))).f_NEXT = l_PM_2764;
}
l_TAIL_2762 = l_PM_2764;
}
l_P_2761 = ((*(R28 *)rt_nil_check(l_P_2761))).f_NEXT;
l_A_2756 = ((*(R27 *)rt_nil_check(l_A_2756))).f_NEXT;
}
RT_B_TICK();
} L_end2763: ;
((*(R12 *)rt_nil_check(l_I_2757))).f_RESULT = r_RESULT_TYPE(l_I_2757);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2758;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_2759;
r_LEAVE_HOME(p_G, l_HOME_2760);
S_R9(&((*(R12 *)rt_nil_check(l_I_2757))).f_FWD, r_C_HEADER(l_I_2757), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_2757))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_2757))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_2757;
{ R12 * rv2765 = l_I_2757;
return rv2765; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R9 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2766 = 0;
return rv2766; }
}
{ rt_int rv2767 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv2767; }
rt_raise(RT_X_INIT);
}
static R21 * r_SUBST_FORMALS(R21 * p_TS, R21 * p_FORMALS, R21 * p_ARGS) { RT_B_TICK(); 
R21 * l_C_2768; memset(&l_C_2768, 0, sizeof l_C_2768);
if ((p_TS == NULL))
{
{ R21 * rv2769 = NULL;
return rv2769; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R21 * l_F_2770; memset(&l_F_2770, 0, sizeof l_F_2770);
l_F_2770 = p_FORMALS;
R21 * l_A_2771; memset(&l_A_2771, 0, sizeof l_A_2771);
l_A_2771 = p_ARGS;
for (;;) {
if ((l_F_2770 == NULL)) goto L_end2772;
{
{
R21 * l_N_2773; memset(&l_N_2773, 0, sizeof l_N_2773);
l_N_2773 = ((*(R21 *)rt_nil_check(l_F_2770))).f_A;
for (;;) {
if ((l_N_2773 == NULL)) goto L_end2774;
{
if ((l_A_2771 == NULL))
{
{ R21 * rv2775 = p_TS;
return rv2775; }
}
if (((((*(R21 *)rt_nil_check(l_F_2770))).f_B == NULL) && r_TEQ(((*(R21 *)rt_nil_check(l_N_2773))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R21 * rv2776 = l_A_2771;
return rv2776; }
}
l_A_2771 = ((*(R21 *)rt_nil_check(l_A_2771))).f_NEXT;
l_N_2773 = ((*(R21 *)rt_nil_check(l_N_2773))).f_NEXT;
}
RT_B_TICK();
} L_end2774: ;
}
l_F_2770 = ((*(R21 *)rt_nil_check(l_F_2770))).f_NEXT;
}
RT_B_TICK();
} L_end2772: ;
}
{ R21 * rv2777 = p_TS;
return rv2777; }
}
l_C_2768 = r_COPY_NODE(p_TS);
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R21 *)rt_nil_check(l_C_2768))).f_C = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R21 *)rt_nil_check(l_C_2768))).f_A = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R21 * rv2778 = l_C_2768;
return rv2778; }
rt_raise(RT_X_INIT);
}
static R21 * r_COPY_NODE(R21 * p_N) { RT_B_TICK(); 
R21 * l_C_2779; memset(&l_C_2779, 0, sizeof l_C_2779);
l_C_2779 = ((R21 *)rt_b_new(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_C_2779)), (*(R21 *)rt_nil_check(p_N)), 0);
((*(R21 *)rt_nil_check(l_C_2779))).f_NEXT = NULL;
{ R21 * rv2780 = l_C_2779;
return rv2780; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R21 * p_L, R9 p_NAME) { RT_B_TICK(); 
R21 * l_P_2781; memset(&l_P_2781, 0, sizeof l_P_2781);
l_P_2781 = p_L;
for (;;) {
if ((l_P_2781 == NULL)) goto L_end2782;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_2781))).f_NAME, p_NAME))
{
{ rt_int rv2783 = 1;
return rv2783; }
}
l_P_2781 = ((*(R21 *)rt_nil_check(l_P_2781))).f_NEXT;
}
RT_B_TICK();
} L_end2782: ;
{ rt_int rv2784 = 0;
return rv2784; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2785; memset(&l_IS_2785, 0, sizeof l_IS_2785);
l_IS_2785 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv2786 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2786; }
}
if ((l_IS_2785 == NULL))
{
{ rt_int rv2787 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2787; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R19 *)rt_nil_check(l_IS_2785))).f_ID) || (((*(R19 *)rt_nil_check(l_IS_2785))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv2788 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2788; }
}
if ((!(((*(R19 *)rt_nil_check(l_IS_2785))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2785))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2789 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2789; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2785))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2790 = 0;
return rv2790; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { RT_B_TICK(); 
R21 * l_ITEMS_2791; memset(&l_ITEMS_2791, 0, sizeof l_ITEMS_2791);
l_ITEMS_2791 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R21 * l_HEAD_2792; memset(&l_HEAD_2792, 0, sizeof l_HEAD_2792);
l_HEAD_2792 = NULL;
R21 * l_TAIL_2793; memset(&l_TAIL_2793, 0, sizeof l_TAIL_2793);
l_TAIL_2793 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_2791 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2791))).f_A, &l_HEAD_2792, &l_TAIL_2793);
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2791))).f_B, &l_HEAD_2792, &l_TAIL_2793);
{
R21 * l_R_2794; memset(&l_R_2794, 0, sizeof l_R_2794);
l_R_2794 = ((*(R21 *)rt_nil_check(l_ITEMS_2791))).f_C;
for (;;) {
if ((l_R_2794 == NULL)) goto L_end2795;
{
{
R12 * l_Z_2796; memset(&l_Z_2796, 0, sizeof l_Z_2796);
l_Z_2796 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2794))).f_NAME);
if (((l_Z_2796 == NULL) && (!r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_C, ((*(R21 *)rt_nil_check(l_R_2794))).f_NAME))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_R_2794))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R21 *)rt_nil_check(l_R_2794))).f_NAME);
}
for (;;) {
if ((l_Z_2796 == NULL)) goto L_end2797;
{
if ((((*(R12 *)rt_nil_check(l_Z_2796))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2798; memset(&l_O_2798, 0, sizeof l_O_2798);
l_O_2798 = r_ORIGINAL(l_Z_2796);
R21 * l_U_2799; memset(&l_U_2799, 0, sizeof l_U_2799);
r_COMPUTE_USES(l_O_2798);
l_U_2799 = ((*(R12 *)rt_nil_check(l_O_2798))).f_USES;
for (;;) {
if ((l_U_2799 == NULL)) goto L_end2800;
{
if ((!r_IN_IDENTS(l_HEAD_2792, ((*(R21 *)rt_nil_check(l_U_2799))).f_NAME)))
{
{
R21 * l_N_2801; memset(&l_N_2801, 0, sizeof l_N_2801);
l_N_2801 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_U_2799))).f_LINE);
S_R9(&((*(R21 *)rt_nil_check(l_N_2801))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2799))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2801))).f_IV = ((*(R21 *)rt_nil_check(l_U_2799))).f_IV;
r_ADD_LIST(l_N_2801, &l_HEAD_2792, &l_TAIL_2793);
}
}
l_U_2799 = ((*(R21 *)rt_nil_check(l_U_2799))).f_NEXT;
}
RT_B_TICK();
} L_end2800: ;
}
}
l_Z_2796 = r_LOOKUP_NEXT(l_Z_2796);
}
RT_B_TICK();
} L_end2797: ;
}
l_R_2794 = ((*(R21 *)rt_nil_check(l_R_2794))).f_NEXT;
}
RT_B_TICK();
} L_end2795: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_2792;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static rt_int r_LOCAL_MODULE_EXPORTS(R21 * p_B, R9 p_NAME) { RT_B_TICK(); 
R21 * l_M_2802; memset(&l_M_2802, 0, sizeof l_M_2802);
if ((p_B == NULL))
{
{ rt_int rv2803 = 0;
return rv2803; }
}
l_M_2802 = ((*(R21 *)rt_nil_check(p_B))).f_C;
for (;;) {
if ((l_M_2802 == NULL)) goto L_end2804;
{
if ((((*(R21 *)rt_nil_check(l_M_2802))).f_KIND == g_N_MODULE))
{
if ((((((*(R21 *)rt_nil_check(l_M_2802))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(l_M_2802))).f_B, p_NAME)) || r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(l_M_2802))).f_C, p_NAME)))
{
{ rt_int rv2805 = 1;
return rv2805; }
}
}
l_M_2802 = ((*(R21 *)rt_nil_check(l_M_2802))).f_NEXT;
}
RT_B_TICK();
} L_end2804: ;
{ rt_int rv2806 = 0;
return rv2806; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_USES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2807; memset(&l_R_2807, 0, sizeof l_R_2807);
l_R_2807 = p_RS;
for (;;) {
if ((l_R_2807 == NULL)) goto L_end2808;
{
if ((((*(R21 *)rt_nil_check(l_R_2807))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_2807));
if ((!(((*(R21 *)rt_nil_check(l_R_2807))).f_E == NULL)))
{
r_IMPORTS_KNOWN(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2807))).f_E))).f_A, 0);
r_IMPORTS_KNOWN(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2807))).f_E))).f_B, 1);
r_INPUT_IMPORT_CONFLICT(((*(R21 *)rt_nil_check(l_R_2807))).f_E, ((*(R21 *)rt_nil_check(l_R_2807))).f_LINE);
}
}
l_R_2807 = ((*(R21 *)rt_nil_check(l_R_2807))).f_NEXT;
}
RT_B_TICK();
} L_end2808: ;
}
static void r_IMPORTS_KNOWN(R21 * p_L, rt_int p_INOUT) { RT_B_TICK(); 
R21 * l_P_2809; memset(&l_P_2809, 0, sizeof l_P_2809);
l_P_2809 = p_L;
for (;;) {
if ((l_P_2809 == NULL)) goto L_end2810;
{
{
R12 * l_V_2811; memset(&l_V_2811, 0, sizeof l_V_2811);
l_V_2811 = r_LOOKUP(((*(R21 *)rt_nil_check(l_P_2809))).f_NAME);
if ((!(l_V_2811 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_V_2811))).f_KIND == g_Y_VAR))
{
if ((((!r_CHECK_IMPORTED(l_V_2811, ((*(R21 *)rt_nil_check(l_P_2809))).f_LINE)) && p_INOUT) && (!((*(R12 *)rt_nil_check(l_V_2811))).f_INPUT)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_2809))).f_LINE, rt_str("imported for change, but only for input in the enclosing scope (4.1.1): ", 72), ((*(R21 *)rt_nil_check(l_P_2809))).f_NAME);
}
}
}
}
l_P_2809 = ((*(R21 *)rt_nil_check(l_P_2809))).f_NEXT;
}
RT_B_TICK();
} L_end2810: ;
}
static void r_INPUT_IMPORT_CONFLICT(R21 * p_ITEMS, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_2812; memset(&l_R_2812, 0, sizeof l_R_2812);
l_R_2812 = ((*(R21 *)rt_nil_check(p_ITEMS))).f_C;
for (;;) {
if ((l_R_2812 == NULL)) goto L_end2813;
{
{
R12 * l_Z_2814; memset(&l_Z_2814, 0, sizeof l_Z_2814);
l_Z_2814 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2812))).f_NAME);
for (;;) {
if ((l_Z_2814 == NULL)) goto L_end2815;
{
if ((((*(R12 *)rt_nil_check(l_Z_2814))).f_KIND == g_Y_ROUTINE))
{
{
R21 * l_D_2816; memset(&l_D_2816, 0, sizeof l_D_2816);
l_D_2816 = ((*(R12 *)rt_nil_check(r_ORIGINAL(l_Z_2814)))).f_DECL;
if ((!(l_D_2816 == NULL)))
{
if (((((*(R21 *)rt_nil_check(l_D_2816))).f_KIND == g_N_ROUTINE) && (!(((*(R21 *)rt_nil_check(l_D_2816))).f_E == NULL))))
{
{
R21 * l_V_2817; memset(&l_V_2817, 0, sizeof l_V_2817);
l_V_2817 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2816))).f_E))).f_B;
for (;;) {
if ((l_V_2817 == NULL)) goto L_end2818;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(p_ITEMS))).f_A, ((*(R21 *)rt_nil_check(l_V_2817))).f_NAME))
{
r_FAILT(p_LINE, rt_str("imported for input, and inout by an imported routine (4.3.1): ", 62), ((*(R21 *)rt_nil_check(l_V_2817))).f_NAME);
}
l_V_2817 = ((*(R21 *)rt_nil_check(l_V_2817))).f_NEXT;
}
RT_B_TICK();
} L_end2818: ;
}
}
}
}
}
l_Z_2814 = r_LOOKUP_NEXT(l_Z_2814);
}
RT_B_TICK();
} L_end2815: ;
}
l_R_2812 = ((*(R21 *)rt_nil_check(l_R_2812))).f_NEXT;
}
RT_B_TICK();
} L_end2813: ;
}
static void r_ADD_USES(R21 * p_L, R21 * *p_HEAD, R21 * *p_TAIL) { RT_B_TICK(); 
R21 * l_P_2819; memset(&l_P_2819, 0, sizeof l_P_2819);
l_P_2819 = p_L;
for (;;) {
if ((l_P_2819 == NULL)) goto L_end2820;
{
{
R12 * l_V_2821; memset(&l_V_2821, 0, sizeof l_V_2821);
l_V_2821 = r_LOOKUP(((*(R21 *)rt_nil_check(l_P_2819))).f_NAME);
R21 * l_N_2822; memset(&l_N_2822, 0, sizeof l_N_2822);
l_N_2822 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_2819))).f_LINE);
if ((l_V_2821 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_2819))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R21 *)rt_nil_check(l_P_2819))).f_NAME);
}
S_R9(&((*(R21 *)rt_nil_check(l_N_2822))).f_NAME, ((*(R21 *)rt_nil_check(l_P_2819))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2822))).f_IV = ((*(R12 *)rt_nil_check(l_V_2821))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_2821))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_2822, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_2819 = ((*(R21 *)rt_nil_check(l_P_2819))).f_NEXT;
}
RT_B_TICK();
} L_end2820: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2823; memset(&l_IS_2823, 0, sizeof l_IS_2823);
l_IS_2823 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R21 * l_U_2824; memset(&l_U_2824, 0, sizeof l_U_2824);
l_U_2824 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_2823 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R19 *)rt_nil_check(l_IS_2823))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_2824 == NULL)) goto L_end2825;
{
if ((!(((*(R21 *)rt_nil_check(l_U_2824))).f_IV == ((*(R19 *)rt_nil_check(l_IS_2823))).f_ID)))
{
if ((((*(R19 *)rt_nil_check(l_IS_2823))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2824))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2824))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!(((((((r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2823))).f_IMPORTS))).f_A, ((*(R21 *)rt_nil_check(l_U_2824))).f_NAME) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2823))).f_IMPORTS))).f_B, ((*(R21 *)rt_nil_check(l_U_2824))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2823))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2823))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2823))).f_IMPORTS))).f_E, p_Y)) || ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL)) && r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2823))).f_IMPORTS))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))) || r_IMPORTED_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2823))).f_IMPORTS))).f_C, ((*(R21 *)rt_nil_check(l_U_2824))).f_NAME)))))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2824))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2824))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_2824 = ((*(R21 *)rt_nil_check(l_U_2824))).f_NEXT;
}
RT_B_TICK();
} L_end2825: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R21 * p_RS, R9 p_NAME) { RT_B_TICK(); 
R21 * l_R_2826; memset(&l_R_2826, 0, sizeof l_R_2826);
l_R_2826 = p_RS;
for (;;) {
if ((l_R_2826 == NULL)) goto L_end2827;
{
{
R12 * l_Z_2828; memset(&l_Z_2828, 0, sizeof l_Z_2828);
l_Z_2828 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2826))).f_NAME);
for (;;) {
if ((l_Z_2828 == NULL)) goto L_end2829;
{
if ((((*(R12 *)rt_nil_check(l_Z_2828))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2830; memset(&l_O_2830, 0, sizeof l_O_2830);
l_O_2830 = r_ORIGINAL(l_Z_2828);
r_COMPUTE_USES(l_O_2830);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_2830))).f_USES, p_NAME))
{
{ rt_int rv2831 = 1;
return rv2831; }
}
}
}
l_Z_2828 = r_LOOKUP_NEXT(l_Z_2828);
}
RT_B_TICK();
} L_end2829: ;
}
l_R_2826 = ((*(R21 *)rt_nil_check(l_R_2826))).f_NEXT;
}
RT_B_TICK();
} L_end2827: ;
{ rt_int rv2832 = 0;
return rv2832; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R21 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2833; memset(&l_M_2833, 0, sizeof l_M_2833);
l_M_2833 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_2833 == NULL)) goto L_end2834;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_2833))).f_NAME))
{
{ rt_int rv2835 = 1;
return rv2835; }
}
l_M_2833 = ((*(R12 *)rt_nil_check(l_M_2833))).f_MODL;
}
RT_B_TICK();
} L_end2834: ;
{ rt_int rv2836 = 0;
return rv2836; }
rt_raise(RT_X_INIT);
}
static R9 r_BASE_NAME(R12 * p_Y) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R9 rv2837 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv2837; }
}
{ R9 rv2838 = r_MKN(rt_b_slice(r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN), rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)), rt_sub((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN, ((rt_int)1LL))));
return rv2838; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R9 p_NAME) { RT_B_TICK(); 
R17 * l_C_2839; memset(&l_C_2839, 0, sizeof l_C_2839);
l_C_2839 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2839 == NULL)) goto L_end2840;
{
if ((((*(R17 *)rt_nil_check(l_C_2839))).f_KIND == ((rt_int)1LL)))
{
goto L_end2840;
}
if ((((*(R17 *)rt_nil_check(l_C_2839))).f_KIND == ((rt_int)3LL)))
{
{
R21 * l_H_2841; memset(&l_H_2841, 0, sizeof l_H_2841);
l_H_2841 = ((*(R17 *)rt_nil_check(l_C_2839))).f_HANDLERS;
for (;;) {
if ((l_H_2841 == NULL)) goto L_end2842;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_2841))).f_A, p_NAME))
{
{ rt_int rv2843 = 1;
return rv2843; }
}
l_H_2841 = ((*(R21 *)rt_nil_check(l_H_2841))).f_NEXT;
}
RT_B_TICK();
} L_end2842: ;
}
}
l_C_2839 = ((*(R17 *)rt_nil_check(l_C_2839))).f_NEXT;
}
RT_B_TICK();
} L_end2840: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv2844 = 1;
return rv2844; }
}
}
{ rt_int rv2845 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv2845; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R9 p_NAME) { RT_B_TICK(); 
R17 * l_C_2846; memset(&l_C_2846, 0, sizeof l_C_2846);
l_C_2846 = ((R17 *)rt_b_new(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_C_2846)), ({ R17 rc2847; memset(&rc2847, 0, sizeof rc2847);  rc2847.f_KIND = p_KIND; S_R9(&rc2847.f_NAME, p_NAME, 0); rc2847.f_HANDLERS = NULL; rc2847.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc2847; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_2846;
}
static void r_POP_CTX(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R17 * r_LEAVE(rt_int p_KIND) { RT_B_TICK(); 
R17 * l_C_2848; memset(&l_C_2848, 0, sizeof l_C_2848);
l_C_2848 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2848 == NULL)) goto L_end2849;
{
if ((((*(R17 *)rt_nil_check(l_C_2848))).f_KIND == p_KIND))
{
{ R17 * rv2850 = l_C_2848;
return rv2850; }
}
if ((((*(R17 *)rt_nil_check(l_C_2848))).f_KIND == ((rt_int)1LL)))
{
{ R17 * rv2851 = NULL;
return rv2851; }
}
if ((((*(R17 *)rt_nil_check(l_C_2848))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2848))).f_NAME));
}
l_C_2848 = ((*(R17 *)rt_nil_check(l_C_2848))).f_NEXT;
}
RT_B_TICK();
} L_end2849: ;
{ R17 * rv2852 = NULL;
return rv2852; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { RT_B_TICK(); 
R17 * l_C_2853; memset(&l_C_2853, 0, sizeof l_C_2853);
l_C_2853 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_2854; memset(&l_N_2854, 0, sizeof l_N_2854);
l_N_2854 = ((rt_int)0LL);
for (;;) {
if ((l_C_2853 == NULL)) goto L_end2855;
{
if ((((*(R17 *)rt_nil_check(l_C_2853))).f_KIND == ((rt_int)1LL)))
{
goto L_end2855;
}
if ((((*(R17 *)rt_nil_check(l_C_2853))).f_KIND == ((rt_int)3LL)))
{
l_N_2854 = rt_add(l_N_2854, ((rt_int)1LL));
}
l_C_2853 = ((*(R17 *)rt_nil_check(l_C_2853))).f_NEXT;
}
RT_B_TICK();
} L_end2855: ;
{ rt_int rv2856 = l_N_2854;
return rv2856; }
rt_raise(RT_X_INIT);
}
static R9 r_EXC_NAME(R9 p_NAME) { RT_B_TICK(); 
R21 * l_N_2857; memset(&l_N_2857, 0, sizeof l_N_2857);
l_N_2857 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_2857 == NULL)) goto L_end2858;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2857))).f_NAME, p_NAME))
{
{ R9 rv2859 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2859; }
}
l_N_2857 = ((*(R21 *)rt_nil_check(l_N_2857))).f_NEXT;
}
RT_B_TICK();
} L_end2858: ;
l_N_2857 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R21 *)rt_nil_check(l_N_2857))).f_NAME, p_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2857))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_2857;
{ R9 rv2860 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2860; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2861; memset(&l_D_2861, 0, sizeof l_D_2861);
l_D_2861 = p_DECLS;
for (;;) {
if ((l_D_2861 == NULL)) goto L_end2862;
{
if (((((*(R21 *)rt_nil_check(l_D_2861))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_2861))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_2863; memset(&l_Y_2863, 0, sizeof l_Y_2863);
l_Y_2863 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_D_2861))).f_NAME);
if ((((*(R21 *)rt_nil_check(l_D_2861))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_2863))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_2863))).f_DECL = l_D_2861;
r_DEFINE(l_Y_2863, ((*(R21 *)rt_nil_check(l_D_2861))).f_LINE);
if ((((*(R21 *)rt_nil_check(l_D_2861))).f_KIND == g_N_TYPE))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2861))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2861))).f_B))).f_A)))
{
((*(R7 *)rt_nil_check(g_W))).f_CHARSETS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_CHARSETS, ((rt_int)1LL));
}
}
}
}
l_D_2861 = ((*(R21 *)rt_nil_check(l_D_2861))).f_NEXT;
}
RT_B_TICK();
} L_end2862: ;
l_D_2861 = p_DECLS;
for (;;) {
if ((l_D_2861 == NULL)) goto L_end2864;
{
if (((((*(R21 *)rt_nil_check(l_D_2861))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_2861))).f_KIND == g_N_REPTYPE)))
{
{
R21 * l_SEEN_2865; memset(&l_SEEN_2865, 0, sizeof l_SEEN_2865);
l_SEEN_2865 = NULL;
rt_int l_FOUND_2866; memset(&l_FOUND_2866, 0, sizeof l_FOUND_2866);
l_FOUND_2866 = 0;
r_REFERS(((*(R21 *)rt_nil_check(l_D_2861))).f_B, C_R9(((*(R21 *)rt_nil_check(l_D_2861))).f_NAME), p_DECLS, &l_SEEN_2865, &l_FOUND_2866);
if (l_FOUND_2866)
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_2861))).f_LINE, rt_str("a circular type declaration (3.12.1, 3.12.3): ", 46), ((*(R21 *)rt_nil_check(l_D_2861))).f_NAME);
}
}
{
R21 * l_F_2867; memset(&l_F_2867, 0, sizeof l_F_2867);
l_F_2867 = ((*(R21 *)rt_nil_check(l_D_2861))).f_A;
for (;;) {
if ((l_F_2867 == NULL)) goto L_end2868;
{
if (((((*(R21 *)rt_nil_check(l_F_2867))).f_IV == ((rt_int)1LL)) && (((*(R21 *)rt_nil_check(l_D_2861))).f_KIND == g_N_TYPE)))
{
{
R21 * l_N_2869; memset(&l_N_2869, 0, sizeof l_N_2869);
l_N_2869 = ((*(R21 *)rt_nil_check(l_F_2867))).f_A;
for (;;) {
if ((l_N_2869 == NULL)) goto L_end2870;
{
if (r_TAG_MISUSED(((*(R21 *)rt_nil_check(l_D_2861))).f_B, ((*(R21 *)rt_nil_check(l_N_2869))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_2861))).f_LINE, rt_str("a TAG formal is only a tag-name or an argument for a TAG formal (3.12.1): ", 74), ((*(R21 *)rt_nil_check(l_N_2869))).f_NAME);
}
l_N_2869 = ((*(R21 *)rt_nil_check(l_N_2869))).f_NEXT;
}
RT_B_TICK();
} L_end2870: ;
}
}
if ((!(((*(R21 *)rt_nil_check(l_F_2867))).f_B == NULL)))
{
if (r_NAMES_VARIABLE(((*(R21 *)rt_nil_check(l_F_2867))).f_B, p_DECLS))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_2867))).f_LINE, rt_str("the type-arguments in the type of a formal must be manifest (3.12.1)", 68));
}
}
l_F_2867 = ((*(R21 *)rt_nil_check(l_F_2867))).f_NEXT;
}
RT_B_TICK();
} L_end2868: ;
}
}
l_D_2861 = ((*(R21 *)rt_nil_check(l_D_2861))).f_NEXT;
}
RT_B_TICK();
} L_end2864: ;
l_D_2861 = p_DECLS;
for (;;) {
if ((l_D_2861 == NULL)) goto L_end2871;
{
if ((((*(R21 *)rt_nil_check(l_D_2861))).f_KIND == g_N_TYPE))
{
{
R21 * l_F_2872; memset(&l_F_2872, 0, sizeof l_F_2872);
l_F_2872 = ((*(R21 *)rt_nil_check(l_D_2861))).f_A;
for (;;) {
if ((l_F_2872 == NULL)) goto L_end2873;
{
if (((((*(R21 *)rt_nil_check(l_F_2872))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_F_2872))).f_B == NULL))))
{
{
R22 * l_FT_2874; memset(&l_FT_2874, 0, sizeof l_FT_2874);
l_FT_2874 = r_REAL_TYPE(r_RESOLVE(((*(R21 *)rt_nil_check(l_F_2872))).f_B));
if (((!r_IS_SCALAR(l_FT_2874)) || (!(((*(R22 *)rt_nil_check(l_FT_2874))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_2872))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
}
l_F_2872 = ((*(R21 *)rt_nil_check(l_F_2872))).f_NEXT;
}
RT_B_TICK();
} L_end2873: ;
}
}
l_D_2861 = ((*(R21 *)rt_nil_check(l_D_2861))).f_NEXT;
}
RT_B_TICK();
} L_end2871: ;
}
static void r_REFERS(R21 * p_L, R9 p_TARGET, R21 * p_DECLS, R21 * *p_SEEN, rt_int *p_FOUND) { RT_B_TICK(); 
R21 * l_N_2875; memset(&l_N_2875, 0, sizeof l_N_2875);
l_N_2875 = p_L;
for (;;) {
if (((l_N_2875 == NULL) || (*p_FOUND))) goto L_end2876;
{
if (((((*(R21 *)rt_nil_check(l_N_2875))).f_KIND == g_TS_NAME) || (((*(R21 *)rt_nil_check(l_N_2875))).f_KIND == g_N_REP)))
{
if ((!r_TEQS(((*(R21 *)rt_nil_check(l_N_2875))).f_NAME, rt_str("PTR", 3))))
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2875))).f_NAME, p_TARGET))
{
(*p_FOUND) = 1;
return;
}
if ((!r_IN_IDENTS((*p_SEEN), ((*(R21 *)rt_nil_check(l_N_2875))).f_NAME)))
{
{
R21 * l_M_2877; memset(&l_M_2877, 0, sizeof l_M_2877);
l_M_2877 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_N_2875))).f_LINE);
R21 * l_D_2878; memset(&l_D_2878, 0, sizeof l_D_2878);
l_D_2878 = p_DECLS;
S_R9(&((*(R21 *)rt_nil_check(l_M_2877))).f_NAME, ((*(R21 *)rt_nil_check(l_N_2875))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_M_2877))).f_NEXT = (*p_SEEN);
(*p_SEEN) = l_M_2877;
for (;;) {
if ((l_D_2878 == NULL)) goto L_end2879;
{
if (((((((*(R21 *)rt_nil_check(l_D_2878))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_2878))).f_KIND == g_N_REPTYPE))) && r_TEQ(((*(R21 *)rt_nil_check(l_D_2878))).f_NAME, ((*(R21 *)rt_nil_check(l_N_2875))).f_NAME)))
{
r_REFERS(((*(R21 *)rt_nil_check(l_D_2878))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
l_D_2878 = ((*(R21 *)rt_nil_check(l_D_2878))).f_NEXT;
}
RT_B_TICK();
} L_end2879: ;
}
}
r_REFERS(((*(R21 *)rt_nil_check(l_N_2875))).f_A, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R21 *)rt_nil_check(l_N_2875))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R21 *)rt_nil_check(l_N_2875))).f_C, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
}
else
{
r_REFERS(((*(R21 *)rt_nil_check(l_N_2875))).f_A, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R21 *)rt_nil_check(l_N_2875))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R21 *)rt_nil_check(l_N_2875))).f_C, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R21 *)rt_nil_check(l_N_2875))).f_D, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
l_N_2875 = ((*(R21 *)rt_nil_check(l_N_2875))).f_NEXT;
}
RT_B_TICK();
} L_end2876: ;
}
static rt_int r_TAG_MISUSED(R21 * p_L, R9 p_NAME) { RT_B_TICK(); 
R21 * l_N_2880; memset(&l_N_2880, 0, sizeof l_N_2880);
l_N_2880 = p_L;
for (;;) {
if ((l_N_2880 == NULL)) goto L_end2881;
{
if ((((*(R21 *)rt_nil_check(l_N_2880))).f_KIND == g_TS_NAME))
{
{
R21 * l_A_2882; memset(&l_A_2882, 0, sizeof l_A_2882);
l_A_2882 = ((*(R21 *)rt_nil_check(l_N_2880))).f_A;
for (;;) {
if ((l_A_2882 == NULL)) goto L_end2883;
{
if ((!((((((((*(R21 *)rt_nil_check(l_A_2882))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_A_2882))).f_KIND == g_TS_NAME))) && r_TEQ(((*(R21 *)rt_nil_check(l_A_2882))).f_NAME, p_NAME)) && (((*(R21 *)rt_nil_check(l_A_2882))).f_A == NULL)))))
{
if (r_TAG_MISUSED1(l_A_2882, p_NAME))
{
{ rt_int rv2884 = 1;
return rv2884; }
}
}
l_A_2882 = ((*(R21 *)rt_nil_check(l_A_2882))).f_NEXT;
}
RT_B_TICK();
} L_end2883: ;
}
if (((r_TAG_MISUSED(((*(R21 *)rt_nil_check(l_N_2880))).f_B, p_NAME) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(l_N_2880))).f_C, p_NAME)) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(l_N_2880))).f_E, p_NAME)))
{
{ rt_int rv2885 = 1;
return rv2885; }
}
}
else if (r_TAG_MISUSED1(l_N_2880, p_NAME))
{
{ rt_int rv2886 = 1;
return rv2886; }
}
l_N_2880 = ((*(R21 *)rt_nil_check(l_N_2880))).f_NEXT;
}
RT_B_TICK();
} L_end2881: ;
{ rt_int rv2887 = 0;
return rv2887; }
rt_raise(RT_X_INIT);
}
static rt_int r_TAG_MISUSED1(R21 * p_N, R9 p_NAME) { RT_B_TICK(); 
rt_int l_K_2888; memset(&l_K_2888, 0, sizeof l_K_2888);
l_K_2888 = ((*(R21 *)rt_nil_check(p_N))).f_KIND;
if ((l_K_2888 == g_TS_NAME))
{
{ rt_int rv2889 = (r_TAG_MISUSED(p_N, p_NAME) && 1);
return rv2889; }
}
if ((((((l_K_2888 == g_N_NAME) || (l_K_2888 == g_N_ENUMLIT)) || (l_K_2888 == g_N_APPLY))) && r_TEQ(((*(R21 *)rt_nil_check(p_N))).f_NAME, p_NAME)))
{
{ rt_int rv2890 = 1;
return rv2890; }
}
{ rt_int rv2891 = ((((r_TAG_MISUSED(((*(R21 *)rt_nil_check(p_N))).f_A, p_NAME) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(p_N))).f_B, p_NAME)) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(p_N))).f_C, p_NAME)) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(p_N))).f_D, p_NAME)) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(p_N))).f_E, p_NAME));
return rv2891; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_VARIABLE(R21 * p_L, R21 * p_DECLS) { RT_B_TICK(); 
{ rt_int rv2892 = r_NAMES_VARIABLE_BUT(p_L, p_DECLS, NULL);
return rv2892; }
rt_raise(RT_X_INIT);
}
static void r_GEN_NAMES(R21 * p_L, R21 * *p_HEAD) { RT_B_TICK(); 
R21 * l_N_2893; memset(&l_N_2893, 0, sizeof l_N_2893);
l_N_2893 = p_L;
for (;;) {
if ((l_N_2893 == NULL)) goto L_end2894;
{
if (((((((*(R21 *)rt_nil_check(l_N_2893))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_N_2893))).f_KIND == g_N_PARAM))) && ((((*(R21 *)rt_nil_check(l_N_2893))).f_NAME).f_LEN > ((rt_int)0LL))))
{
{
R21 * l_M_2895; memset(&l_M_2895, 0, sizeof l_M_2895);
l_M_2895 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_N_2893))).f_LINE);
S_R9(&((*(R21 *)rt_nil_check(l_M_2895))).f_NAME, ((*(R21 *)rt_nil_check(l_N_2893))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_M_2895))).f_NEXT = (*p_HEAD);
(*p_HEAD) = l_M_2895;
}
}
r_GEN_NAMES(((*(R21 *)rt_nil_check(l_N_2893))).f_A, &(*p_HEAD));
r_GEN_NAMES(((*(R21 *)rt_nil_check(l_N_2893))).f_B, &(*p_HEAD));
r_GEN_NAMES(((*(R21 *)rt_nil_check(l_N_2893))).f_C, &(*p_HEAD));
r_GEN_NAMES(((*(R21 *)rt_nil_check(l_N_2893))).f_D, &(*p_HEAD));
l_N_2893 = ((*(R21 *)rt_nil_check(l_N_2893))).f_NEXT;
}
RT_B_TICK();
} L_end2894: ;
}
static rt_int r_NAMES_VARIABLE_BUT(R21 * p_L, R21 * p_DECLS, R21 * p_EXCL) { RT_B_TICK(); 
R21 * l_N_2896; memset(&l_N_2896, 0, sizeof l_N_2896);
l_N_2896 = p_L;
for (;;) {
if ((l_N_2896 == NULL)) goto L_end2897;
{
if (((((*(R21 *)rt_nil_check(l_N_2896))).f_KIND == g_N_NAME) && r_IN_IDENTS(p_EXCL, ((*(R21 *)rt_nil_check(l_N_2896))).f_NAME)))
{
}
else if ((((*(R21 *)rt_nil_check(l_N_2896))).f_KIND == g_N_NAME))
{
{
R21 * l_D_2898; memset(&l_D_2898, 0, sizeof l_D_2898);
l_D_2898 = p_DECLS;
R12 * l_Y_2899; memset(&l_Y_2899, 0, sizeof l_Y_2899);
l_Y_2899 = r_LOOKUP(((*(R21 *)rt_nil_check(l_N_2896))).f_NAME);
for (;;) {
if ((l_D_2898 == NULL)) goto L_end2900;
{
if (((((*(R21 *)rt_nil_check(l_D_2898))).f_KIND == g_N_VAR) && r_IN_IDENTS(((*(R21 *)rt_nil_check(l_D_2898))).f_A, ((*(R21 *)rt_nil_check(l_N_2896))).f_NAME)))
{
{ rt_int rv2901 = 1;
return rv2901; }
}
l_D_2898 = ((*(R21 *)rt_nil_check(l_D_2898))).f_NEXT;
}
RT_B_TICK();
} L_end2900: ;
if ((!(l_Y_2899 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_2899))).f_KIND == g_Y_VAR) && (!((*(R12 *)rt_nil_check(l_Y_2899))).f_INPUT)))
{
{ rt_int rv2902 = 1;
return rv2902; }
}
}
}
}
else if ((((r_NAMES_VARIABLE_BUT(((*(R21 *)rt_nil_check(l_N_2896))).f_A, p_DECLS, p_EXCL) || r_NAMES_VARIABLE_BUT(((*(R21 *)rt_nil_check(l_N_2896))).f_B, p_DECLS, p_EXCL)) || r_NAMES_VARIABLE_BUT(((*(R21 *)rt_nil_check(l_N_2896))).f_C, p_DECLS, p_EXCL)) || r_NAMES_VARIABLE_BUT(((*(R21 *)rt_nil_check(l_N_2896))).f_D, p_DECLS, p_EXCL)))
{
{ rt_int rv2903 = 1;
return rv2903; }
}
l_N_2896 = ((*(R21 *)rt_nil_check(l_N_2896))).f_NEXT;
}
RT_B_TICK();
} L_end2897: ;
{ rt_int rv2904 = 0;
return rv2904; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_PRINTING_CHAR(R21 * p_L) { RT_B_TICK(); 
R21 * l_P_2905; memset(&l_P_2905, 0, sizeof l_P_2905);
l_P_2905 = p_L;
for (;;) {
if ((l_P_2905 == NULL)) goto L_end2906;
{
if (((((*(R21 *)rt_nil_check(l_P_2905))).f_NAME).f_LEN >= ((rt_int)3LL)))
{
if (rt_b_eq(r_STR(((*(R21 *)rt_nil_check(l_P_2905))).f_NAME, ((rt_int)2LL)), rt_str("\\'", 2)))
{
{ rt_int rv2907 = 1;
return rv2907; }
}
}
l_P_2905 = ((*(R21 *)rt_nil_check(l_P_2905))).f_NEXT;
}
RT_B_TICK();
} L_end2906: ;
{ rt_int rv2908 = 0;
return rv2908; }
rt_raise(RT_X_INIT);
}
static R22 * r_DEFAULT_CHARSET(rt_int p_LINE) { RT_B_TICK(); 
R12 * l_A_2909; memset(&l_A_2909, 0, sizeof l_A_2909);
l_A_2909 = r_LOOKUP(r_MKN(rt_str("ASCII", 5)));
R22 * l_FOUND_2910; memset(&l_FOUND_2910, 0, sizeof l_FOUND_2910);
l_FOUND_2910 = NULL;
rt_int l_N_2911; memset(&l_N_2911, 0, sizeof l_N_2911);
l_N_2911 = ((rt_int)0LL);
R12 * l_Y_2912; memset(&l_Y_2912, 0, sizeof l_Y_2912);
l_Y_2912 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
if (((((*(R7 *)rt_nil_check(g_W))).f_CHARSETS == ((rt_int)0LL)) && (!(l_A_2909 == NULL))))
{
if (((((*(R12 *)rt_nil_check(l_A_2909))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_A_2909))).f_DECL == NULL)))
{
{ R22 * rv2913 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2913; }
}
}
for (;;) {
if ((l_Y_2912 == NULL)) goto L_end2914;
{
if (((((*(R12 *)rt_nil_check(l_Y_2912))).f_KIND == g_Y_TYPE) && ((((*(R12 *)rt_nil_check(l_Y_2912))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((r_LOOKUP(((*(R12 *)rt_nil_check(l_Y_2912))).f_NAME) == l_Y_2912))
{
{
R22 * l_T_2915; memset(&l_T_2915, 0, sizeof l_T_2915);
l_T_2915 = NULL;
if ((((*(R12 *)rt_nil_check(l_Y_2912))).f_DECL == NULL))
{
l_T_2915 = ((*(R12 *)rt_nil_check(l_Y_2912))).f_T;
}
else if (((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2912))).f_DECL))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2912))).f_DECL))).f_A == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2912))).f_DECL))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2912))).f_DECL))).f_B))).f_A)))
{
l_T_2915 = r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_2912))).f_NAME, p_LINE);
}
}
if ((!(l_T_2915 == NULL)))
{
l_T_2915 = r_REAL_TYPE(l_T_2915);
if ((((*(R22 *)rt_nil_check(l_T_2915))).f_KIND == g_T_ENUM))
{
if ((r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2915))).f_BASE))).f_LITS) && (!(((*(R22 *)rt_nil_check(l_T_2915))).f_BASE == l_FOUND_2910))))
{
if ((!(l_FOUND_2910 == NULL)))
{
r_FAIL(p_LINE, rt_b_cat(rt_str("two character sets are available here: the literal needs ", 57), rt_str("a charset-name (3.7.2)", 22)));
}
l_FOUND_2910 = ((*(R22 *)rt_nil_check(l_T_2915))).f_BASE;
}
}
}
}
}
}
l_Y_2912 = ((*(R12 *)rt_nil_check(l_Y_2912))).f_SNEXT;
}
RT_B_TICK();
} L_end2914: ;
if ((l_FOUND_2910 == NULL))
{
r_FAIL(p_LINE, rt_str("no character set is available for the literal (3.7.2)", 53));
}
{ R22 * rv2916 = l_FOUND_2910;
return rv2916; }
rt_raise(RT_X_INIT);
}
static R22 * r_CHARSET_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_R_2917; memset(&l_R_2917, 0, sizeof l_R_2917);
l_R_2917 = r_REAL_TYPE(p_T);
if ((((*(R22 *)rt_nil_check(l_R_2917))).f_BASE == NULL))
{
{ R22 * rv2918 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2918; }
}
{ R22 * rv2919 = ((*(R22 *)rt_nil_check(l_R_2917))).f_BASE;
return rv2919; }
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
static void r_DECLARE_LABELS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_2920; memset(&l_S_2920, 0, sizeof l_S_2920);
l_S_2920 = p_S0;
for (;;) {
if ((l_S_2920 == NULL)) goto L_end2921;
{
{
R21 * l_L_2922; memset(&l_L_2922, 0, sizeof l_L_2922);
l_L_2922 = l_S_2920;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_L_2922))).f_KIND == g_N_LABELED))) goto L_end2923;
{
{
R12 * l_Y_2924; memset(&l_Y_2924, 0, sizeof l_Y_2924);
l_Y_2924 = r_NEW_SYM(g_Y_LABEL, ((*(R21 *)rt_nil_check(l_L_2922))).f_NAME);
S_R9(&((*(R12 *)rt_nil_check(l_Y_2924))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(r_CID(((*(R21 *)rt_nil_check(l_L_2922))).f_NAME), (r_CID(((*(R21 *)rt_nil_check(l_L_2922))).f_NAME)).f_LEN))), 0);
((*(R12 *)rt_nil_check(l_Y_2924))).f_MV = r_GUARDS();
r_DEFINE(l_Y_2924, ((*(R21 *)rt_nil_check(l_L_2922))).f_LINE);
}
l_L_2922 = ((*(R21 *)rt_nil_check(l_L_2922))).f_A;
}
RT_B_TICK();
} L_end2923: ;
}
l_S_2920 = ((*(R21 *)rt_nil_check(l_S_2920))).f_NEXT;
}
RT_B_TICK();
} L_end2921: ;
}
static void r_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2925; memset(&l_D_2925, 0, sizeof l_D_2925);
l_D_2925 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2926; memset(&l_S_2926, 0, sizeof l_S_2926);
l_S_2926 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2925 == NULL)) goto L_end2927;
{
if (((((*(R21 *)rt_nil_check(l_D_2925))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2925))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2925);
}
l_D_2925 = ((*(R21 *)rt_nil_check(l_D_2925))).f_NEXT;
}
RT_B_TICK();
} L_end2927: ;
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2926 == NULL)) goto L_end2928;
{
r_STMT(l_S_2926);
l_S_2926 = ((*(R21 *)rt_nil_check(l_S_2926))).f_NEXT;
}
RT_B_TICK();
} L_end2928: ;
}
static void r_OPEN_BODY(R21 * p_B) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R21 * p_S, R21 * p_BODY_NODE, R21 * p_HANDLERS) { RT_B_TICK(); 
R9 l_F_2929; memset(&l_F_2929, 0, sizeof l_F_2929);
S_R9(&l_F_2929, r_NEW_NAME(rt_str("xf", 2)), 0);
R21 * l_H_2930; memset(&l_H_2930, 0, sizeof l_H_2930);
l_H_2930 = p_HANDLERS;
R9 l_WORD_2931; memset(&l_WORD_2931, 0, sizeof l_WORD_2931);
S_R9(&l_WORD_2931, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_2929, l_F_2929));
r_PUSH_CTX(((rt_int)3LL), l_F_2929);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_2929, l_F_2929, l_F_2929));
for (;;) {
if ((l_H_2930 == NULL)) goto L_end2932;
{
{
R21 * l_N_2933; memset(&l_N_2933, 0, sizeof l_N_2933);
l_N_2933 = ((*(R21 *)rt_nil_check(l_H_2930))).f_A;
R9 l_COND_2934; memset(&l_COND_2934, 0, sizeof l_COND_2934);
S_R9(&l_COND_2934, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_2933 == NULL)) goto L_end2935;
{
if ((r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_2933))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_2933))).f_NAME) || r_IN_HANDLERS(((*(R21 *)rt_nil_check(l_H_2930))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_2933))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_N_2933))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R21 *)rt_nil_check(l_N_2933))).f_NAME);
}
S_R9(&l_COND_2934, r_FMT3(rt_str("@ || @x == @", 12), l_COND_2934, l_F_2929, r_EXC_NAME(((*(R21 *)rt_nil_check(l_N_2933))).f_NAME)), 0);
l_N_2933 = ((*(R21 *)rt_nil_check(l_N_2933))).f_NEXT;
}
RT_B_TICK();
} L_end2935: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2931, l_COND_2934));
S_R9(&l_WORD_2931, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_2929, rt_str("x", 1)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_H_2930))).f_B);
r_POP_CTX();
}
l_H_2930 = ((*(R21 *)rt_nil_check(l_H_2930))).f_NEXT;
}
RT_B_TICK();
} L_end2932: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_2929));
}
static void r_INTERFERENCE(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_2936; memset(&l_K_2936, 0, sizeof l_K_2936);
l_K_2936 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2936 == g_N_ASSIGN))
{
{
R21 * l_NAMES_2937; memset(&l_NAMES_2937, 0, sizeof l_NAMES_2937);
l_NAMES_2937 = NULL;
R21 * l_CALLS_2938; memset(&l_CALLS_2938, 0, sizeof l_CALLS_2938);
l_CALLS_2938 = NULL;
r_COLLECT_REFS(((*(R21 *)rt_nil_check(p_S))).f_A, &l_NAMES_2937, &l_CALLS_2938);
r_COLLECT_REFS(((*(R21 *)rt_nil_check(p_S))).f_B, &l_NAMES_2937, &l_CALLS_2938);
r_CHECK_INTERFERENCE(l_NAMES_2937, l_CALLS_2938, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
}
}
else if ((l_K_2936 == g_N_CALL))
{
{
R21 * l_NAMES_2939; memset(&l_NAMES_2939, 0, sizeof l_NAMES_2939);
l_NAMES_2939 = NULL;
R21 * l_CALLS_2940; memset(&l_CALLS_2940, 0, sizeof l_CALLS_2940);
l_CALLS_2940 = NULL;
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_S))).f_A, &l_NAMES_2939, &l_CALLS_2940);
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_S))).f_B, &l_NAMES_2939, &l_CALLS_2940);
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_S))).f_C, &l_NAMES_2939, &l_CALLS_2940);
r_CHECK_INTERFERENCE(l_NAMES_2939, l_CALLS_2940, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
}
}
else if (((l_K_2936 == g_N_RETURN) || (l_K_2936 == g_N_ASSERT)))
{
if ((!(((*(R21 *)rt_nil_check(p_S))).f_A == NULL)))
{
{
R21 * l_NAMES_2941; memset(&l_NAMES_2941, 0, sizeof l_NAMES_2941);
l_NAMES_2941 = NULL;
R21 * l_CALLS_2942; memset(&l_CALLS_2942, 0, sizeof l_CALLS_2942);
l_CALLS_2942 = NULL;
r_COLLECT_REFS(((*(R21 *)rt_nil_check(p_S))).f_A, &l_NAMES_2941, &l_CALLS_2942);
r_CHECK_INTERFERENCE(l_NAMES_2941, l_CALLS_2942, ((*(R21 *)rt_nil_check(p_S))).f_LINE, (l_K_2936 == g_N_ASSERT));
}
}
}
else if ((l_K_2936 == g_N_IF))
{
{
R21 * l_ARM_2943; memset(&l_ARM_2943, 0, sizeof l_ARM_2943);
l_ARM_2943 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_ARM_2943 == NULL)) goto L_end2944;
{
{
R21 * l_NAMES_2945; memset(&l_NAMES_2945, 0, sizeof l_NAMES_2945);
l_NAMES_2945 = NULL;
R21 * l_CALLS_2946; memset(&l_CALLS_2946, 0, sizeof l_CALLS_2946);
l_CALLS_2946 = NULL;
r_COLLECT_REFS(((*(R21 *)rt_nil_check(l_ARM_2943))).f_A, &l_NAMES_2945, &l_CALLS_2946);
r_CHECK_INTERFERENCE(l_NAMES_2945, l_CALLS_2946, ((*(R21 *)rt_nil_check(l_ARM_2943))).f_LINE, 0);
}
l_ARM_2943 = ((*(R21 *)rt_nil_check(l_ARM_2943))).f_NEXT;
}
RT_B_TICK();
} L_end2944: ;
}
}
}
static void r_COLLECT_LIST(R21 * p_L, R21 * *p_NAMES, R21 * *p_CALLS) { RT_B_TICK(); 
R21 * l_N_2947; memset(&l_N_2947, 0, sizeof l_N_2947);
l_N_2947 = p_L;
for (;;) {
if ((l_N_2947 == NULL)) goto L_end2948;
{
r_COLLECT_REFS(l_N_2947, &(*p_NAMES), &(*p_CALLS));
l_N_2947 = ((*(R21 *)rt_nil_check(l_N_2947))).f_NEXT;
}
RT_B_TICK();
} L_end2948: ;
}
static void r_COLLECT_REFS(R21 * p_E, R21 * *p_NAMES, R21 * *p_CALLS) { RT_B_TICK(); 
rt_int l_K_2949; memset(&l_K_2949, 0, sizeof l_K_2949);
if ((p_E == NULL))
{
return;
}
l_K_2949 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_2949 == g_N_NAME))
{
{
R12 * l_Y_2950; memset(&l_Y_2950, 0, sizeof l_Y_2950);
l_Y_2950 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2950 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2950))).f_KIND == g_Y_VAR))
{
(*p_NAMES) = r_NAME_REF(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2950))).f_OWNER, NULL, (*p_NAMES));
}
}
}
}
else if ((l_K_2949 == g_N_APPLY))
{
{
R12 * l_Y_2951; memset(&l_Y_2951, 0, sizeof l_Y_2951);
l_Y_2951 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2951 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2951))).f_KIND == g_Y_VAR))
{
(*p_NAMES) = r_NAME_REF(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2951))).f_OWNER, NULL, (*p_NAMES));
}
else if ((((*(R12 *)rt_nil_check(l_Y_2951))).f_KIND == g_Y_ROUTINE))
{
(*p_CALLS) = r_NAME_REF(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((rt_int)0LL), p_E, (*p_CALLS));
}
}
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_E))).f_B, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_E))).f_C, &(*p_NAMES), &(*p_CALLS));
}
}
else if ((((((l_K_2949 == g_N_FIELD) || (l_K_2949 == g_N_DEREF)) || (l_K_2949 == g_N_UNOP)) || (l_K_2949 == g_N_PAREN)) || (l_K_2949 == g_N_QUAL)))
{
r_COLLECT_REFS(((*(R21 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
}
else if (((((l_K_2949 == g_N_INDEX) || (l_K_2949 == g_N_SUBSTR)) || (l_K_2949 == g_N_BINOP)) || (l_K_2949 == g_N_IN)))
{
r_COLLECT_REFS(((*(R21 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
if ((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_RANGE))
{
r_COLLECT_REFS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_A, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_REFS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_B, &(*p_NAMES), &(*p_CALLS));
}
else
{
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_E))).f_B, &(*p_NAMES), &(*p_CALLS));
}
}
r_COLLECT_REFS(((*(R21 *)rt_nil_check(p_E))).f_C, &(*p_NAMES), &(*p_CALLS));
}
else if ((l_K_2949 == g_N_RECCONS))
{
{
R21 * l_F_2952; memset(&l_F_2952, 0, sizeof l_F_2952);
l_F_2952 = ((*(R21 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_F_2952 == NULL)) goto L_end2953;
{
r_COLLECT_REFS(((*(R21 *)rt_nil_check(l_F_2952))).f_A, &(*p_NAMES), &(*p_CALLS));
l_F_2952 = ((*(R21 *)rt_nil_check(l_F_2952))).f_NEXT;
}
RT_B_TICK();
} L_end2953: ;
}
}
else if ((l_K_2949 == g_N_ARRCONS))
{
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
}
}
static R21 * r_NAME_REF(R9 p_NAME, rt_int p_OWNER, R21 * p_A, R21 * p_L) { RT_B_TICK(); 
R21 * l_N_2954; memset(&l_N_2954, 0, sizeof l_N_2954);
l_N_2954 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R21 *)rt_nil_check(l_N_2954))).f_NAME, p_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2954))).f_IV = p_OWNER;
((*(R21 *)rt_nil_check(l_N_2954))).f_A = p_A;
((*(R21 *)rt_nil_check(l_N_2954))).f_NEXT = p_L;
{ R21 * rv2955 = l_N_2954;
return rv2955; }
rt_raise(RT_X_INIT);
}
static R21 * r_ROUTINE_DATA(R9 p_NAME, rt_int p_INOUT) { RT_B_TICK(); 
R12 * l_Y_2956; memset(&l_Y_2956, 0, sizeof l_Y_2956);
l_Y_2956 = r_LOOKUP(p_NAME);
R21 * l_R_2957; memset(&l_R_2957, 0, sizeof l_R_2957);
l_R_2957 = NULL;
rt_int l_FIRST_2958; memset(&l_FIRST_2958, 0, sizeof l_FIRST_2958);
l_FIRST_2958 = 1;
for (;;) {
if ((l_Y_2956 == NULL)) goto L_end2959;
{
if ((((*(R12 *)rt_nil_check(l_Y_2956))).f_KIND == g_Y_ROUTINE))
{
{
R21 * l_D_2960; memset(&l_D_2960, 0, sizeof l_D_2960);
l_D_2960 = r_DATA_OF(r_ORIGINAL(l_Y_2956), p_INOUT, ((rt_int)0LL));
if (l_FIRST_2958)
{
l_R_2957 = l_D_2960;
l_FIRST_2958 = 0;
}
else
{
l_R_2957 = r_INTERSECT_REFS(l_R_2957, l_D_2960);
}
}
}
else if (((!(((*(R12 *)rt_nil_check(l_Y_2956))).f_KIND == g_Y_ROUTINE)) && (!l_FIRST_2958)))
{
}
l_Y_2956 = r_LOOKUP_NEXT(l_Y_2956);
}
RT_B_TICK();
} L_end2959: ;
{ R21 * rv2961 = l_R_2957;
return rv2961; }
rt_raise(RT_X_INIT);
}
static R21 * r_DATA_OF(R12 * p_Y, rt_int p_INOUT, rt_int p_DEPTH) { RT_B_TICK(); 
R21 * l_R_2962; memset(&l_R_2962, 0, sizeof l_R_2962);
l_R_2962 = NULL;
if (((((*(R12 *)rt_nil_check(p_Y))).f_DECL == NULL) || (p_DEPTH > ((rt_int)20LL))))
{
{ R21 * rv2963 = NULL;
return rv2963; }
}
if ((!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_KIND == g_N_ROUTINE)))
{
{ R21 * rv2964 = NULL;
return rv2964; }
}
r_COMPUTE_USES(p_Y);
if ((!p_INOUT))
{
{
R21 * l_U_2965; memset(&l_U_2965, 0, sizeof l_U_2965);
l_U_2965 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_2965 == NULL)) goto L_end2966;
{
l_R_2962 = r_NAME_REF(((*(R21 *)rt_nil_check(l_U_2965))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2965))).f_IV, NULL, l_R_2962);
l_U_2965 = ((*(R21 *)rt_nil_check(l_U_2965))).f_NEXT;
}
RT_B_TICK();
} L_end2966: ;
}
{ R21 * rv2967 = l_R_2962;
return rv2967; }
}
if ((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E == NULL))
{
{ R21 * rv2968 = NULL;
return rv2968; }
}
{
R21 * l_U_2969; memset(&l_U_2969, 0, sizeof l_U_2969);
l_U_2969 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_2969 == NULL)) goto L_end2970;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E))).f_B, ((*(R21 *)rt_nil_check(l_U_2969))).f_NAME))
{
l_R_2962 = r_NAME_REF(((*(R21 *)rt_nil_check(l_U_2969))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2969))).f_IV, NULL, l_R_2962);
}
l_U_2969 = ((*(R21 *)rt_nil_check(l_U_2969))).f_NEXT;
}
RT_B_TICK();
} L_end2970: ;
}
{
R21 * l_C_2971; memset(&l_C_2971, 0, sizeof l_C_2971);
l_C_2971 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E))).f_C;
for (;;) {
if ((l_C_2971 == NULL)) goto L_end2972;
{
{
R12 * l_Z_2973; memset(&l_Z_2973, 0, sizeof l_Z_2973);
l_Z_2973 = r_LOOKUP(((*(R21 *)rt_nil_check(l_C_2971))).f_NAME);
for (;;) {
if ((l_Z_2973 == NULL)) goto L_end2974;
{
if ((((*(R12 *)rt_nil_check(l_Z_2973))).f_KIND == g_Y_ROUTINE))
{
{
R21 * l_D_2975; memset(&l_D_2975, 0, sizeof l_D_2975);
l_D_2975 = r_DATA_OF(r_ORIGINAL(l_Z_2973), 1, rt_add(p_DEPTH, ((rt_int)1LL)));
for (;;) {
if ((l_D_2975 == NULL)) goto L_end2976;
{
if ((!r_HAS_REF(l_R_2962, ((*(R21 *)rt_nil_check(l_D_2975))).f_NAME, ((*(R21 *)rt_nil_check(l_D_2975))).f_IV)))
{
l_R_2962 = r_NAME_REF(((*(R21 *)rt_nil_check(l_D_2975))).f_NAME, ((*(R21 *)rt_nil_check(l_D_2975))).f_IV, NULL, l_R_2962);
}
l_D_2975 = ((*(R21 *)rt_nil_check(l_D_2975))).f_NEXT;
}
RT_B_TICK();
} L_end2976: ;
}
}
l_Z_2973 = r_LOOKUP_NEXT(l_Z_2973);
}
RT_B_TICK();
} L_end2974: ;
}
l_C_2971 = ((*(R21 *)rt_nil_check(l_C_2971))).f_NEXT;
}
RT_B_TICK();
} L_end2972: ;
}
{ R21 * rv2977 = l_R_2962;
return rv2977; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_REF(R21 * p_L, R9 p_NAME, rt_int p_OWNER) { RT_B_TICK(); 
R21 * l_P_2978; memset(&l_P_2978, 0, sizeof l_P_2978);
l_P_2978 = p_L;
for (;;) {
if ((l_P_2978 == NULL)) goto L_end2979;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_P_2978))).f_NAME, p_NAME) && (((*(R21 *)rt_nil_check(l_P_2978))).f_IV == p_OWNER)))
{
{ rt_int rv2980 = 1;
return rv2980; }
}
l_P_2978 = ((*(R21 *)rt_nil_check(l_P_2978))).f_NEXT;
}
RT_B_TICK();
} L_end2979: ;
{ rt_int rv2981 = 0;
return rv2981; }
rt_raise(RT_X_INIT);
}
static R21 * r_INTERSECT_REFS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_R_2982; memset(&l_R_2982, 0, sizeof l_R_2982);
l_R_2982 = NULL;
R21 * l_P_2983; memset(&l_P_2983, 0, sizeof l_P_2983);
l_P_2983 = p_A;
for (;;) {
if ((l_P_2983 == NULL)) goto L_end2984;
{
if (r_HAS_REF(p_B, ((*(R21 *)rt_nil_check(l_P_2983))).f_NAME, ((*(R21 *)rt_nil_check(l_P_2983))).f_IV))
{
l_R_2982 = r_NAME_REF(((*(R21 *)rt_nil_check(l_P_2983))).f_NAME, ((*(R21 *)rt_nil_check(l_P_2983))).f_IV, NULL, l_R_2982);
}
l_P_2983 = ((*(R21 *)rt_nil_check(l_P_2983))).f_NEXT;
}
RT_B_TICK();
} L_end2984: ;
{ R21 * rv2985 = l_R_2982;
return rv2985; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_INTERFERENCE(R21 * p_NAMES, R21 * p_CALLS, rt_int p_LINE, rt_int p_ASSERTION) { RT_B_TICK(); 
R21 * l_C_2986; memset(&l_C_2986, 0, sizeof l_C_2986);
l_C_2986 = p_CALLS;
for (;;) {
if ((l_C_2986 == NULL)) goto L_end2987;
{
{
R21 * l_V_2988; memset(&l_V_2988, 0, sizeof l_V_2988);
l_V_2988 = r_ROUTINE_DATA(((*(R21 *)rt_nil_check(l_C_2986))).f_NAME, 1);
if (((!(l_V_2988 == NULL)) && p_ASSERTION))
{
r_FAILT(p_LINE, rt_str("the expression of ASSERT must be free of side-effects (4.5.8): ", 63), ((*(R21 *)rt_nil_check(l_C_2986))).f_NAME);
}
for (;;) {
if ((l_V_2988 == NULL)) goto L_end2989;
{
if (r_HAS_REF(p_NAMES, ((*(R21 *)rt_nil_check(l_V_2988))).f_NAME, ((*(R21 *)rt_nil_check(l_V_2988))).f_IV))
{
r_FAILT(p_LINE, rt_str("a function invocation modifies a variable the expression also names (4.3.4): ", 77), ((*(R21 *)rt_nil_check(l_V_2988))).f_NAME);
}
{
R21 * l_D_2990; memset(&l_D_2990, 0, sizeof l_D_2990);
l_D_2990 = p_CALLS;
for (;;) {
if ((l_D_2990 == NULL)) goto L_end2991;
{
if ((!(l_D_2990 == l_C_2986)))
{
if (r_HAS_REF(r_ROUTINE_DATA(((*(R21 *)rt_nil_check(l_D_2990))).f_NAME, 0), ((*(R21 *)rt_nil_check(l_V_2988))).f_NAME, ((*(R21 *)rt_nil_check(l_V_2988))).f_IV))
{
r_FAILT(p_LINE, rt_str("two function invocations of one expression interfere on (4.3.4): ", 65), ((*(R21 *)rt_nil_check(l_V_2988))).f_NAME);
}
}
l_D_2990 = ((*(R21 *)rt_nil_check(l_D_2990))).f_NEXT;
}
RT_B_TICK();
} L_end2991: ;
}
l_V_2988 = ((*(R21 *)rt_nil_check(l_V_2988))).f_NEXT;
}
RT_B_TICK();
} L_end2989: ;
}
l_C_2986 = ((*(R21 *)rt_nil_check(l_C_2986))).f_NEXT;
}
RT_B_TICK();
} L_end2987: ;
}
static rt_int r_IN_HANDLERS(R21 * p_HS, R9 p_NAME) { RT_B_TICK(); 
R21 * l_H_2992; memset(&l_H_2992, 0, sizeof l_H_2992);
l_H_2992 = p_HS;
for (;;) {
if ((l_H_2992 == NULL)) goto L_end2993;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_2992))).f_A, p_NAME))
{
{ rt_int rv2994 = 1;
return rv2994; }
}
l_H_2992 = ((*(R21 *)rt_nil_check(l_H_2992))).f_NEXT;
}
RT_B_TICK();
} L_end2993: ;
{ rt_int rv2995 = 0;
return rv2995; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED_STMT(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_2996; memset(&l_K_2996, 0, sizeof l_K_2996);
l_K_2996 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2996 == g_N_EXCEPT))
{
{ rt_int rv2997 = r_IS_STRUCTURED_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
return rv2997; }
}
{ rt_int rv2998 = (((((((l_K_2996 == g_N_BLOCK) || (l_K_2996 == g_N_IF)) || (l_K_2996 == g_N_CASE)) || (l_K_2996 == g_N_LOOP)) || (l_K_2996 == g_N_FOR)) || (l_K_2996 == g_N_PAR)) || (l_K_2996 == g_N_WITH));
return rv2998; }
rt_raise(RT_X_INIT);
}
static R21 * r_NAMED_ROOT(R21 * p_E) { RT_B_TICK(); 
rt_int l_K_2999; memset(&l_K_2999, 0, sizeof l_K_2999);
l_K_2999 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if (((l_K_2999 == g_N_NAME) || (l_K_2999 == g_N_APPLY)))
{
{ R21 * rv3000 = p_E;
return rv3000; }
}
else if ((((l_K_2999 == g_N_INDEX) || (l_K_2999 == g_N_FIELD)) || (l_K_2999 == g_N_SUBSTR)))
{
{ R21 * rv3001 = r_NAMED_ROOT(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv3001; }
}
{ R21 * rv3002 = NULL;
return rv3002; }
rt_raise(RT_X_INIT);
}
static void r_STMT(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_3003; memset(&l_K_3003, 0, sizeof l_K_3003);
l_K_3003 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
r_INTERFERENCE(p_S);
if ((l_K_3003 == g_N_NULL))
{
return;
}
else if ((l_K_3003 == g_N_LABELED))
{
{
R12 * l_Y_3004; memset(&l_Y_3004, 0, sizeof l_Y_3004);
l_Y_3004 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_3004))).f_ACCESS));
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_3003 == g_N_GOTO))
{
{
R12 * l_Y_3005; memset(&l_Y_3005, 0, sizeof l_Y_3005);
l_Y_3005 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_3006; memset(&l_N_3006, 0, sizeof l_N_3006);
R17 * l_C_3007; memset(&l_C_3007, 0, sizeof l_C_3007);
l_C_3007 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_3005 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3005))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3005))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
l_N_3006 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_3005))).f_MV);
for (;;) {
if ((l_N_3006 <= ((rt_int)0LL))) goto L_end3008;
{
if ((((*(R17 *)rt_nil_check(l_C_3007))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_3007))).f_NAME));
l_N_3006 = rt_sub(l_N_3006, ((rt_int)1LL));
}
l_C_3007 = ((*(R17 *)rt_nil_check(l_C_3007))).f_NEXT;
}
RT_B_TICK();
} L_end3008: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_3005))).f_ACCESS));
}
}
else if ((l_K_3003 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_3003 == g_N_CALL))
{
{
R26 l_V_3009; memset(&l_V_3009, 0, sizeof l_V_3009);
S_R26(&l_V_3009, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_3009).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_3009).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_3009).f_C, rt_str(";", 1)));
}
}
else if ((l_K_3003 == g_N_IF))
{
r_IF_STMT(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_3003 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_3003 == g_N_LOOP))
{
{
R9 l_END_L_3010; memset(&l_END_L_3010, 0, sizeof l_END_L_3010);
S_R9(&l_END_L_3010, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A), l_END_L_3010));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_3010);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CODES(rt_str("RT_B_TICK();", 12));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_C), l_END_L_3010));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_3010));
}
}
else if ((l_K_3003 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_3003 == g_N_EXIT))
{
{
R17 * l_C_3011; memset(&l_C_3011, 0, sizeof l_C_3011);
l_C_3011 = r_LEAVE(((rt_int)2LL));
if ((l_C_3011 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R17 *)rt_nil_check(l_C_3011))).f_NAME));
}
}
else if ((l_K_3003 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_3003 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_3003 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_3003 == g_N_ASSERT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS)
{
{
R14 l_SAVED_CODE_3012; memset(&l_SAVED_CODE_3012, 0, sizeof l_SAVED_CODE_3012);
S_R14(&l_SAVED_CODE_3012, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R9 l_C_3013; memset(&l_C_3013, 0, sizeof l_C_3013);
S_R9(&l_C_3013, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3012, 0);
}
}
else
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A)));
}
}
else if ((l_K_3003 == g_N_EXCEPT))
{
r_GUARDED(((*(R21 *)rt_nil_check(p_S))).f_A, NULL, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_3003 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_3003 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_3003 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R21 * p_S) { RT_B_TICK(); 
R12 * l_Y_3014; memset(&l_Y_3014, 0, sizeof l_Y_3014);
l_Y_3014 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_3014 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_3014))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_3014))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv3015 = r_CALL_EXPR(p_S, NULL);
return rv3015; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R21 * p_ARMS, R21 * p_ELSE_BODY) { RT_B_TICK(); 
R21 * l_ARM_3016; memset(&l_ARM_3016, 0, sizeof l_ARM_3016);
l_ARM_3016 = p_ARMS;
R9 l_WORD_3017; memset(&l_WORD_3017, 0, sizeof l_WORD_3017);
S_R9(&l_WORD_3017, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_3018; memset(&l_OPEN_3018, 0, sizeof l_OPEN_3018);
l_OPEN_3018 = ((rt_int)0LL);
rt_int l_CHOSEN_3019; memset(&l_CHOSEN_3019, 0, sizeof l_CHOSEN_3019);
l_CHOSEN_3019 = 0;
for (;;) {
if ((l_ARM_3016 == NULL)) goto L_end3020;
{
{
R23 l_M_3021; memset(&l_M_3021, 0, sizeof l_M_3021);
S_R23(&l_M_3021, r_MANIFEST(((*(R21 *)rt_nil_check(l_ARM_3016))).f_A), 0);
if (l_CHOSEN_3019)
{
r_CHECK_COND(((*(R21 *)rt_nil_check(l_ARM_3016))).f_A);
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_3016))).f_B);
}
else if ((l_M_3021).f_OK)
{
if ((!r_TEQS(l_WORD_3017, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_3018 = rt_add(l_OPEN_3018, ((rt_int)1LL));
S_R9(&l_WORD_3017, r_MK(rt_str("if", 2)), 0);
}
r_CODE(r_FMT1(rt_str("(void)(@);", 10), r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_3016))).f_A)));
if (((l_M_3021).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_3016))).f_B);
l_CHOSEN_3019 = 1;
}
else
{
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_3016))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3017, r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_3016))).f_A)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_3016))).f_B);
S_R9(&l_WORD_3017, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_3016 = ((*(R21 *)rt_nil_check(l_ARM_3016))).f_NEXT;
}
RT_B_TICK();
} L_end3020: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_3019)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_3017, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it3023_lo = ((rt_int)1LL), it3023_hi = l_OPEN_3018;
for (rt_int it3023 = it3023_lo; it3023 <= it3023_hi; it3023++) {
{
r_CODES(rt_str("}", 1));
}
RT_B_TICK();
if (it3023 == it3023_hi) break;
} } L_end3022: ;
}
static void r_CHECK_BODY(R21 * p_B) { RT_B_TICK(); 
R14 l_SAVED_CODE_3024; memset(&l_SAVED_CODE_3024, 0, sizeof l_SAVED_CODE_3024);
S_R14(&l_SAVED_CODE_3024, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3025; memset(&rc3025, 0, sizeof rc3025);  rc3025.f_HEAD = NULL; rc3025.f_TAIL = NULL; rc3025; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3024, 0);
}
static void r_CHECK_COND(R21 * p_E) { RT_B_TICK(); 
R9 l_C_3026; memset(&l_C_3026, 0, sizeof l_C_3026);
S_R9(&l_C_3026, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R21 * p_S) { RT_B_TICK(); 
R9 l_END_L_3027; memset(&l_END_L_3027, 0, sizeof l_END_L_3027);
S_R9(&l_END_L_3027, r_NEW_NAME(rt_str("L_end", 5)), 0);
R9 l_IT_3028; memset(&l_IT_3028, 0, sizeof l_IT_3028);
S_R9(&l_IT_3028, r_NEW_NAME(rt_str("it", 2)), 0);
R21 * l_R_3029; memset(&l_R_3029, 0, sizeof l_R_3029);
l_R_3029 = ((*(R21 *)rt_nil_check(p_S))).f_A;
R26 l_LO_3030; memset(&l_LO_3030, 0, sizeof l_LO_3030);
S_R26(&l_LO_3030, r_EXPR(((*(R21 *)rt_nil_check(l_R_3029))).f_A, NULL), 0);
R26 l_HI_3031; memset(&l_HI_3031, 0, sizeof l_HI_3031);
S_R26(&l_HI_3031, r_EXPR(((*(R21 *)rt_nil_check(l_R_3029))).f_B, (l_LO_3030).f_T), 0);
R22 * l_T_3032; memset(&l_T_3032, 0, sizeof l_T_3032);
l_T_3032 = r_REAL_TYPE((l_LO_3030).f_T);
R9 l_LOC_3033; memset(&l_LOC_3033, 0, sizeof l_LOC_3033);
R9 l_HIC_3034; memset(&l_HIC_3034, 0, sizeof l_HIC_3034);
if ((((*(R22 *)rt_nil_check(l_T_3032))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_3032))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_3032))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_3032))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R9(&l_LOC_3033, (l_LO_3030).f_C, 0);
S_R9(&l_HIC_3034, (l_HI_3031).f_C, 0);
if (((((*(R21 *)rt_nil_check(l_R_3029))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_3029))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LOC_3033, r_FMT1(rt_str("(@) + 1", 7), l_LOC_3033), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_3029))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HIC_3034, r_FMT1(rt_str("(@) - 1", 7), l_HIC_3034), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_3028, l_LOC_3033, l_IT_3028, l_HIC_3034));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_3028, l_IT_3028, l_IT_3028, l_IT_3028));
r_OPEN_SCOPE();
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_3035; memset(&l_Y_3035, 0, sizeof l_Y_3035);
l_Y_3035 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3035))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_3032))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_3035))).f_T = ((*(R22 *)rt_nil_check(l_T_3032))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_3035))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_3035, rt_str("", 0)), l_IT_3028));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_3035, rt_str("", 0)), l_IT_3028));
}
else
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3035))).f_ACCESS, l_IT_3028, 0);
}
r_DEFINE(l_Y_3035, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_3027);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODES(rt_str("RT_B_TICK();", 12));
r_CODE(r_FMT2(rt_str("if (@ == @_hi) break;", 21), l_IT_3028, l_IT_3028));
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_3027));
}
static void r_RETURN_STMT(R21 * p_S) { RT_B_TICK(); 
R18 * l_CS_3036; memset(&l_CS_3036, 0, sizeof l_CS_3036);
l_CS_3036 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_C_3037; memset(&l_C_3037, 0, sizeof l_C_3037);
if ((((*(R21 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_3037 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R18 *)rt_nil_check(l_CS_3036))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_3036))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R18 *)rt_nil_check(l_CS_3036))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R18 *)rt_nil_check(l_CS_3036))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODE(r_CATS(((*(R18 *)rt_nil_check(l_CS_3036))).f_COPYOUT, rt_str("return;", 7)));
}
return;
}
if (((((*(R18 *)rt_nil_check(l_CS_3036))).f_RESULT == NULL) || ((*(R18 *)rt_nil_check(l_CS_3036))).f_IS_PATH))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_3036))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R9 l_V_3038; memset(&l_V_3038, 0, sizeof l_V_3038);
S_R9(&l_V_3038, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R18 *)rt_nil_check(l_CS_3036))).f_RESULT), l_V_3038, r_CONVERT(r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R18 *)rt_nil_check(l_CS_3036))).f_RESULT), ((*(R18 *)rt_nil_check(l_CS_3036))).f_RESULT, ((*(R21 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_3037 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_3038));
}
}
static void r_SIGNAL_STMT(R21 * p_S) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R17 * l_C_3039; memset(&l_C_3039, 0, sizeof l_C_3039);
l_C_3039 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_3039 == NULL)) goto L_end3040;
{
if ((((*(R17 *)rt_nil_check(l_C_3039))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R17 *)rt_nil_check(l_C_3039))).f_NAME));
return;
}
if ((((*(R17 *)rt_nil_check(l_C_3039))).f_KIND == ((rt_int)1LL)))
{
goto L_end3040;
}
l_C_3039 = ((*(R17 *)rt_nil_check(l_C_3039))).f_NEXT;
}
RT_B_TICK();
} L_end3040: ;
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
R21 * l_TG_3041; memset(&l_TG_3041, 0, sizeof l_TG_3041);
l_TG_3041 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((((*(R21 *)rt_nil_check(l_TG_3041))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_3042; memset(&l_B_3042, 0, sizeof l_B_3042);
S_R26(&l_B_3042, r_EXPR(((*(R21 *)rt_nil_check(l_TG_3041))).f_A, NULL), 0);
if ((!(l_B_3042).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_3042).f_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_3043; memset(&l_ARGS_3043, 0, sizeof l_ARGS_3043);
l_ARGS_3043 = r_NODE_ARG(((*(R21 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_3041))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_3041))).f_C, g_M_IN, r_VAL_ARG(l_B_3042, NULL))));
R12 * l_Y_3044; memset(&l_Y_3044, 0, sizeof l_Y_3044);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_3043))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_3044 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_3043, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_3044 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_3043))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_3044 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_3043, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_3044 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_3044, l_ARGS_3043, ((*(R21 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_3042).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_3042).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_3045; memset(&l_V_3045, 0, sizeof l_V_3045);
S_R26(&l_V_3045, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_B_3042).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_3045).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_3042).f_T))).f_KIND)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_3042).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_3041))).f_B), r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_3041))).f_C), (l_V_3045).f_C));
}
}
return;
}
{
R26 l_LV_3046; memset(&l_LV_3046, 0, sizeof l_LV_3046);
S_R26(&l_LV_3046, r_EXPR(l_TG_3041, NULL), 0);
R21 * l_SAVED_Q_3047; memset(&l_SAVED_Q_3047, 0, sizeof l_SAVED_Q_3047);
l_SAVED_Q_3047 = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
if ((!(l_LV_3046).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = NULL;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_B))).f_KIND == g_N_QUAL))
{
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = ((*(R21 *)rt_nil_check(p_S))).f_B;
}
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R21 *)rt_nil_check(p_S))).f_B;
if (((((*(R22 *)rt_nil_check((l_LV_3046).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
r_REQUIRE_WHERE(r_MKN(rt_str("STORE_", 6)), ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
{
R26 l_V_3048; memset(&l_V_3048, 0, sizeof l_V_3048);
S_R26(&l_V_3048, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_LV_3046).f_T), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
r_CODE(r_STORE_CODE((l_LV_3046).f_T, (l_LV_3046).f_C, l_V_3048, ((*(R21 *)rt_nil_check(p_S))).f_LINE, (l_LV_3046).f_SELF));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = l_SAVED_Q_3047;
}
}
static void r_WITH_STMT(R21 * p_S) { RT_B_TICK(); 
if ((!r_IS_STRUCTURED_STMT(((*(R21 *)rt_nil_check(p_S))).f_B)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a with-clause prefixes a structured statement (4.5.3 [4-58])", 60));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
{
R12 * l_Y_3049; memset(&l_Y_3049, 0, sizeof l_Y_3049);
l_Y_3049 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_3050; memset(&l_V_3050, 0, sizeof l_V_3050);
S_R26(&l_V_3050, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_3049))).f_T = (l_V_3050).f_T;
((*(R12 *)rt_nil_check(l_Y_3049))).f_WITHV = ((rt_int)1LL);
if ((((*(R21 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R9 l_CN_3051; memset(&l_CN_3051, 0, sizeof l_CN_3051);
S_R9(&l_CN_3051, r_NEW_OBJECT(l_Y_3049, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_3050).f_T))
{
r_CODE(r_INIT_CODE((l_V_3050).f_T, l_CN_3051));
}
r_CODE(r_ASSIGN_CODE((l_V_3050).f_T, l_CN_3051, (l_V_3050).f_C));
}
}
else
{
if ((!(l_V_3050).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R9 l_P_3052; memset(&l_P_3052, 0, sizeof l_P_3052);
S_R9(&l_P_3052, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_3050).f_T), l_P_3052, (l_V_3050).f_C));
S_R9(&((*(R12 *)rt_nil_check(l_Y_3049))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_3052), 0);
S_R9(&((*(R12 *)rt_nil_check(l_Y_3049))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_3049))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_3049))).f_OWNER = rt_neg(((rt_int)1LL));
}
{
R21 * l_R_3053; memset(&l_R_3053, 0, sizeof l_R_3053);
l_R_3053 = r_NAMED_ROOT(((*(R21 *)rt_nil_check(p_S))).f_A);
if ((!(l_R_3053 == NULL)))
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_R_3053))).f_NAME, ((*(R21 *)rt_nil_check(p_S))).f_NAME)))
{
{
R12 * l_OLD_3054; memset(&l_OLD_3054, 0, sizeof l_OLD_3054);
l_OLD_3054 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_3053))).f_NAME);
if ((!(l_OLD_3054 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_OLD_3054))).f_KIND == g_Y_VAR))
{
{
R12 * l_H_3055; memset(&l_H_3055, 0, sizeof l_H_3055);
l_H_3055 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(l_R_3053))).f_NAME);
((*(R12 *)rt_nil_check(l_H_3055))).f_T = ((*(R12 *)rt_nil_check(l_OLD_3054))).f_T;
((*(R12 *)rt_nil_check(l_H_3055))).f_WITHV = ((rt_int)2LL);
((*(R12 *)rt_nil_check(l_H_3055))).f_OWNER = ((*(R12 *)rt_nil_check(l_OLD_3054))).f_OWNER;
r_DEFINE(l_H_3055, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
}
}
}
}
}
}
r_DEFINE(l_Y_3049, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_3056; memset(&l_ARM_3056, 0, sizeof l_ARM_3056);
l_ARM_3056 = ((*(R21 *)rt_nil_check(p_S))).f_B;
R25 * l_SEEN_3057; memset(&l_SEEN_3057, 0, sizeof l_SEEN_3057);
l_SEEN_3057 = NULL;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_3058; memset(&l_CH_3058, 0, sizeof l_CH_3058);
S_R26(&l_CH_3058, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_3059; memset(&l_T_3059, 0, sizeof l_T_3059);
l_T_3059 = r_REAL_TYPE((l_CH_3058).f_T);
R12 * l_BOUND_3060; memset(&l_BOUND_3060, 0, sizeof l_BOUND_3060);
l_BOUND_3060 = r_DISCRIMINATED(((*(R21 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_3059))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_3059))).f_KIND == g_T_BITS)))
{
{
R9 l_TMP_3061; memset(&l_TMP_3061, 0, sizeof l_TMP_3061);
S_R9(&l_TMP_3061, r_NEW_NAME(rt_str("cs", 2)), 0);
R9 l_WORD_3062; memset(&l_WORD_3062, 0, sizeof l_WORD_3062);
S_R9(&l_WORD_3062, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_3061, (l_CH_3058).f_C));
for (;;) {
if ((l_ARM_3056 == NULL)) goto L_end3063;
{
{
R21 * l_L_3064; memset(&l_L_3064, 0, sizeof l_L_3064);
l_L_3064 = ((*(R21 *)rt_nil_check(l_ARM_3056))).f_A;
R9 l_COND_3065; memset(&l_COND_3065, 0, sizeof l_COND_3065);
S_R9(&l_COND_3065, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3064 == NULL)) goto L_end3066;
{
S_R9(&l_COND_3065, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_3065, l_TMP_3061, (r_EXPR(l_L_3064, l_T_3059)).f_C), 0);
l_L_3064 = ((*(R21 *)rt_nil_check(l_L_3064))).f_NEXT;
}
RT_B_TICK();
} L_end3066: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3062, l_COND_3065));
S_R9(&l_WORD_3062, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_3056))).f_B, ((*(R21 *)rt_nil_check(l_ARM_3056))).f_C);
}
l_ARM_3056 = ((*(R21 *)rt_nil_check(l_ARM_3056))).f_NEXT;
}
RT_B_TICK();
} L_end3063: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_3062, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if (((((*(R22 *)rt_nil_check(l_T_3059))).f_KIND == g_T_FLOAT) || (((((*(R22 *)rt_nil_check(l_T_3059))).f_KIND == g_T_INT) && (!(((*(R22 *)rt_nil_check(l_T_3059))).f_SCALE == ((rt_int)0LL)))))))
{
r_VALUE_CASE(p_S, l_CH_3058);
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_3059))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_3059))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_3059))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_3059))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_3059));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_3058).f_C));
for (;;) {
if ((l_ARM_3056 == NULL)) goto L_end3067;
{
{
R21 * l_L_3068; memset(&l_L_3068, 0, sizeof l_L_3068);
l_L_3068 = ((*(R21 *)rt_nil_check(l_ARM_3056))).f_A;
R23 l_FIRST_3069; memset(&l_FIRST_3069, 0, sizeof l_FIRST_3069);
S_R23(&l_FIRST_3069, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_3068 == NULL)) goto L_end3070;
{
if ((((*(R21 *)rt_nil_check(l_L_3068))).f_KIND == g_N_RANGE))
{
{
R23 l_LO_3071; memset(&l_LO_3071, 0, sizeof l_LO_3071);
S_R23(&l_LO_3071, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_3068))).f_A, l_T_3059), 0);
R23 l_HI_3072; memset(&l_HI_3072, 0, sizeof l_HI_3072);
S_R23(&l_HI_3072, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_3068))).f_B, l_T_3059), 0);
rt_int l_A_3073; memset(&l_A_3073, 0, sizeof l_A_3073);
l_A_3073 = (l_LO_3071).f_V;
rt_int l_B_3074; memset(&l_B_3074, 0, sizeof l_B_3074);
l_B_3074 = (l_HI_3072).f_V;
if ((!(((l_LO_3071).f_OK && (l_HI_3072).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_3068))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R21 *)rt_nil_check(l_L_3068))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_3068))).f_IV == ((rt_int)3LL))))
{
l_A_3073 = rt_add(l_A_3073, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(l_L_3068))).f_IV >= ((rt_int)2LL)))
{
l_B_3074 = rt_sub(l_B_3074, ((rt_int)1LL));
}
if ((!(l_FIRST_3069).f_OK))
{
S_R23(&l_FIRST_3069, r_SOME(l_A_3073), 0);
}
l_SEEN_3057 = r_DISTINCT_LABEL(l_SEEN_3057, l_A_3073, l_B_3074, ((*(R21 *)rt_nil_check(l_L_3068))).f_LINE);
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_3073), r_NUM(l_B_3074)));
}
}
else
{
{
R23 l_M_3075; memset(&l_M_3075, 0, sizeof l_M_3075);
S_R23(&l_M_3075, r_ENUM_MANIFEST(l_L_3068, l_T_3059), 0);
if ((!(l_M_3075).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_3068))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_3069).f_OK))
{
S_R23(&l_FIRST_3069, l_M_3075, 0);
}
l_SEEN_3057 = r_DISTINCT_LABEL(l_SEEN_3057, (l_M_3075).f_V, (l_M_3075).f_V, ((*(R21 *)rt_nil_check(l_L_3068))).f_LINE);
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_3075).f_V)));
}
}
l_L_3068 = ((*(R21 *)rt_nil_check(l_L_3068))).f_NEXT;
}
RT_B_TICK();
} L_end3070: ;
if ((!(l_BOUND_3060 == NULL)))
{
{
R22 * l_SAVED_3076; memset(&l_SAVED_3076, 0, sizeof l_SAVED_3076);
l_SAVED_3076 = ((*(R12 *)rt_nil_check(l_BOUND_3060))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_3060))).f_T = r_NARROW(l_SAVED_3076, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_3069).f_V);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_3056))).f_B, ((*(R21 *)rt_nil_check(l_ARM_3056))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_3060))).f_T = l_SAVED_3076;
}
}
else
{
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_3056))).f_B, ((*(R21 *)rt_nil_check(l_ARM_3056))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_3056 = ((*(R21 *)rt_nil_check(l_ARM_3056))).f_NEXT;
}
RT_B_TICK();
} L_end3067: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODES(rt_str("default:", 8));
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
r_CODES(rt_str("break;", 6));
}
r_CODES(rt_str("}", 1));
}
}
static R25 * r_DISTINCT_LABEL(R25 * p_SEEN, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); 
R25 * l_P_3077; memset(&l_P_3077, 0, sizeof l_P_3077);
l_P_3077 = p_SEEN;
if ((p_A > p_B))
{
{ R25 * rv3078 = p_SEEN;
return rv3078; }
}
for (;;) {
if ((l_P_3077 == NULL)) goto L_end3079;
{
if (((p_A <= (((*(R25 *)rt_nil_check(l_P_3077))).f_MHI).f_V) && ((((*(R25 *)rt_nil_check(l_P_3077))).f_MLO).f_V <= p_B)))
{
r_FAIL(p_LINE, rt_str("the choice-label values must be distinct (4.5.5.2)", 50));
}
l_P_3077 = ((*(R25 *)rt_nil_check(l_P_3077))).f_NEXT;
}
RT_B_TICK();
} L_end3079: ;
l_P_3077 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_P_3077)), ({ R25 rc3080; memset(&rc3080, 0, sizeof rc3080);  S_R9(&rc3080.f_LO, r_NO_TEXT(), 0); S_R9(&rc3080.f_HI, r_NO_TEXT(), 0); S_R23(&rc3080.f_MLO, r_SOME(p_A), 0); S_R23(&rc3080.f_MHI, r_SOME(p_B), 0); rc3080.f_ANYARG = 0; rc3080.f_NEXT = p_SEEN; rc3080; }), 0);
{ R25 * rv3081 = l_P_3077;
return rv3081; }
rt_raise(RT_X_INIT);
}
static void r_VALUE_CASE(R21 * p_S, R26 p_CH) { RT_B_TICK(); 
R9 l_TMP_3082; memset(&l_TMP_3082, 0, sizeof l_TMP_3082);
S_R9(&l_TMP_3082, r_NEW_NAME(rt_str("cs", 2)), 0);
R26 l_X_3083; memset(&l_X_3083, 0, sizeof l_X_3083);
S_R26(&l_X_3083, r_MKET(l_TMP_3082, (p_CH).f_T), 0);
R21 * l_ARM_3084; memset(&l_ARM_3084, 0, sizeof l_ARM_3084);
l_ARM_3084 = ((*(R21 *)rt_nil_check(p_S))).f_B;
R9 l_WORD_3085; memset(&l_WORD_3085, 0, sizeof l_WORD_3085);
S_R9(&l_WORD_3085, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(r_REAL_TYPE((p_CH).f_T)), l_TMP_3082, (p_CH).f_C));
for (;;) {
if ((l_ARM_3084 == NULL)) goto L_end3086;
{
{
R21 * l_L_3087; memset(&l_L_3087, 0, sizeof l_L_3087);
l_L_3087 = ((*(R21 *)rt_nil_check(l_ARM_3084))).f_A;
R9 l_COND_3088; memset(&l_COND_3088, 0, sizeof l_COND_3088);
S_R9(&l_COND_3088, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3087 == NULL)) goto L_end3089;
{
if ((((*(R21 *)rt_nil_check(l_L_3087))).f_KIND == g_N_RANGE))
{
{
R26 l_LO_3090; memset(&l_LO_3090, 0, sizeof l_LO_3090);
S_R26(&l_LO_3090, r_CASE_LABEL(((*(R21 *)rt_nil_check(l_L_3087))).f_A, (p_CH).f_T), 0);
R26 l_HI_3091; memset(&l_HI_3091, 0, sizeof l_HI_3091);
S_R26(&l_HI_3091, r_CASE_LABEL(((*(R21 *)rt_nil_check(l_L_3087))).f_B, (p_CH).f_T), 0);
rstr l_GE_3092; memset(&l_GE_3092, 0, sizeof l_GE_3092);
l_GE_3092 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_GE_3092, rt_str(">=", 2));
rstr l_LE_3093; memset(&l_LE_3093, 0, sizeof l_LE_3093);
l_LE_3093 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_LE_3093, rt_str("<=", 2));
if (((((*(R21 *)rt_nil_check(l_L_3087))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_3087))).f_IV == ((rt_int)3LL))))
{
rt_b_assign(&l_GE_3092, rt_str("> ", 2));
}
if ((((*(R21 *)rt_nil_check(l_L_3087))).f_IV >= ((rt_int)2LL)))
{
rt_b_assign(&l_LE_3093, rt_str("< ", 2));
}
S_R9(&l_COND_3088, r_FMT3(rt_str("@ || (@ && @)", 13), l_COND_3088, r_VALUE_COMPARE(l_X_3083, l_LO_3090, r_MK(l_GE_3092)), r_VALUE_COMPARE(l_X_3083, l_HI_3091, r_MK(l_LE_3093))), 0);
}
}
else
{
S_R9(&l_COND_3088, r_FMT2(rt_str("@ || @", 6), l_COND_3088, r_VALUE_COMPARE(l_X_3083, r_CASE_LABEL(l_L_3087, (p_CH).f_T), r_MK(rt_str("==", 2)))), 0);
}
l_L_3087 = ((*(R21 *)rt_nil_check(l_L_3087))).f_NEXT;
}
RT_B_TICK();
} L_end3089: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3085, l_COND_3088));
S_R9(&l_WORD_3085, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_3084))).f_B, ((*(R21 *)rt_nil_check(l_ARM_3084))).f_C);
}
l_ARM_3084 = ((*(R21 *)rt_nil_check(l_ARM_3084))).f_NEXT;
}
RT_B_TICK();
} L_end3086: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_3085, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
static R26 r_CASE_LABEL(R21 * p_L, R22 * p_T) { RT_B_TICK(); 
R26 l_V_3094; memset(&l_V_3094, 0, sizeof l_V_3094);
S_R26(&l_V_3094, r_EXPR(p_L, p_T), 0);
if ((!r_SAME_CLASS(r_REAL_TYPE((l_V_3094).f_T), r_REAL_TYPE(p_T))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_L))).f_LINE, rt_str("a case label is a value of the type of the choice (4.5.5.2)", 59));
}
{ R26 rv3095 = l_V_3094;
return rv3095; }
rt_raise(RT_X_INIT);
}
static R9 r_VALUE_COMPARE(R26 p_A, R26 p_B, R9 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT))
{
{ R9 rv3096 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv3096; }
}
{ R9 rv3097 = r_FIXED_COMPARE(p_A, p_B, p_OP);
return rv3097; }
rt_raise(RT_X_INIT);
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
{ R12 * rv3098 = NULL;
return rv3098; }
}
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv3099 = NULL;
return rv3099; }
}
{
R12 * l_Y_3100; memset(&l_Y_3100, 0, sizeof l_Y_3100);
l_Y_3100 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_3100 == NULL))
{
{ R12 * rv3101 = NULL;
return rv3101; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3100))).f_KIND == g_Y_VAR)))
{
{ R12 * rv3102 = NULL;
return rv3102; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3100))).f_WITHV == ((rt_int)1LL))))
{
{ R12 * rv3103 = NULL;
return rv3103; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_3100))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv3104 = NULL;
return rv3104; }
}
{
R24 * l_F_3105; memset(&l_F_3105, 0, sizeof l_F_3105);
l_F_3105 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_3100))).f_T), ((*(R21 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_3105 == NULL))
{
{ R12 * rv3106 = NULL;
return rv3106; }
}
if ((!(((*(R24 *)rt_nil_check(l_F_3105))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv3107 = NULL;
return rv3107; }
}
}
{ R12 * rv3108 = l_Y_3100;
return rv3108; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R9 p_TAGN, rt_int p_V) { RT_B_TICK(); 
R22 * l_N_3109; memset(&l_N_3109, 0, sizeof l_N_3109);
l_N_3109 = r_COPY_TYP(p_T);
R24 * l_F_3110; memset(&l_F_3110, 0, sizeof l_F_3110);
l_F_3110 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_3111; memset(&l_A_3111, 0, sizeof l_A_3111);
l_A_3111 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R25 * l_HEAD_3112; memset(&l_HEAD_3112, 0, sizeof l_HEAD_3112);
l_HEAD_3112 = NULL;
R25 * l_TAIL_3113; memset(&l_TAIL_3113, 0, sizeof l_TAIL_3113);
l_TAIL_3113 = NULL;
for (;;) {
if ((l_F_3110 == NULL)) goto L_end3114;
{
if (((!(((*(R24 *)rt_nil_check(l_F_3110))).f_KIND == ((rt_int)0LL))) && (!(l_A_3111 == NULL))))
{
{
R25 * l_B_3115; memset(&l_B_3115, 0, sizeof l_B_3115);
l_B_3115 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_B_3115)), (*(R25 *)rt_nil_check(l_A_3111)), 0);
((*(R25 *)rt_nil_check(l_B_3115))).f_NEXT = NULL;
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_3110))).f_NAME, p_TAGN))
{
((*(R25 *)rt_nil_check(l_B_3115))).f_ANYARG = 0;
S_R23(&((*(R25 *)rt_nil_check(l_B_3115))).f_MLO, r_SOME(p_V), 0);
S_R9(&((*(R25 *)rt_nil_check(l_B_3115))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_3113 == NULL))
{
l_HEAD_3112 = l_B_3115;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_3113))).f_NEXT = l_B_3115;
}
l_TAIL_3113 = l_B_3115;
}
l_A_3111 = ((*(R25 *)rt_nil_check(l_A_3111))).f_NEXT;
}
l_F_3110 = ((*(R24 *)rt_nil_check(l_F_3110))).f_NEXT;
}
RT_B_TICK();
} L_end3114: ;
((*(R22 *)rt_nil_check(l_N_3109))).f_ARGS = l_HEAD_3112;
{ R22 * rv3116 = l_N_3109;
return rv3116; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_3117; memset(&l_ARM_3117, 0, sizeof l_ARM_3117);
l_ARM_3117 = ((*(R21 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_3118; memset(&l_SAVED_3118, 0, sizeof l_SAVED_3118);
l_SAVED_3118 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_3117 == NULL)) goto L_end3119;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_ARM_3117))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_3117))).f_B, ((*(R21 *)rt_nil_check(l_ARM_3117))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_3118;
return;
}
l_ARM_3117 = ((*(R21 *)rt_nil_check(l_ARM_3117))).f_NEXT;
}
RT_B_TICK();
} L_end3119: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_3118;
}
}
static R22 * r_PATHS_TYPE(void) { RT_B_TICK(); 
R22 * l_T_3120; memset(&l_T_3120, 0, sizeof l_T_3120);
l_T_3120 = r_NEW_TYP(g_T_PATHS);
S_R9(&((*(R22 *)rt_nil_check(l_T_3120))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv3121 = l_T_3120;
return rv3121; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R21 * p_S) { RT_B_TICK(); 
R9 l_TD_3122; memset(&l_TD_3122, 0, sizeof l_TD_3122);
S_R9(&l_TD_3122, r_NEW_NAME(rt_str("td", 2)), 0);
R21 * l_P_3123; memset(&l_P_3123, 0, sizeof l_P_3123);
l_P_3123 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_3123 == NULL)) goto L_end3124;
{
{
R12 * l_Y_3125; memset(&l_Y_3125, 0, sizeof l_Y_3125);
l_Y_3125 = r_NEW_SYM(g_Y_PATH, ((*(R21 *)rt_nil_check(l_P_3123))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3125))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_3125))).f_DECL = l_P_3123;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_3125, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_3125))).f_INPUT = 1;
r_DEFINE(l_Y_3125, ((*(R21 *)rt_nil_check(l_P_3123))).f_LINE);
}
l_P_3123 = ((*(R21 *)rt_nil_check(l_P_3123))).f_NEXT;
}
RT_B_TICK();
} L_end3124: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_3122));
r_CODES(rt_str("rt_b_par_begin();", 17));
r_CODE(r_FMT2(rt_str("{ rt_frame @a; if (RT_TRY(@a)) {", 32), l_TD_3122, l_TD_3122));
l_P_3123 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_P_3123 == NULL)) goto L_end3126;
{
r_ACTIVATE_PATH(l_P_3123, l_TD_3122);
l_P_3123 = ((*(R21 *)rt_nil_check(l_P_3123))).f_NEXT;
}
RT_B_TICK();
} L_end3126: ;
r_CODE(r_FMT3(rt_str("RT_POP(@a); } else { RT_POP(@a); rt_b_par_abandon(&@);", 54), l_TD_3122, l_TD_3122, l_TD_3122));
r_CODES(rt_str("rt_raise(rt_xcur); } }", 22));
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_3122));
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_ACTIVATE_PATH(R21 * p_P, R9 p_TD) { RT_B_TICK(); 
R9 l_FN_3127; memset(&l_FN_3127, 0, sizeof l_FN_3127);
S_R9(&l_FN_3127, r_NEW_NAME(rt_str("path_", 5)), 0);
R9 l_FT_3128; memset(&l_FT_3128, 0, sizeof l_FT_3128);
S_R9(&l_FT_3128, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_3129; memset(&l_Y_3129, 0, sizeof l_Y_3129);
l_Y_3129 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
R9 l_H_3130; memset(&l_H_3130, 0, sizeof l_H_3130);
S_R9(&l_H_3130, r_OBJ_ACCESS(l_Y_3129), 0);
R9 l_IT_3131; memset(&l_IT_3131, 0, sizeof l_IT_3131);
S_R9(&l_IT_3131, r_NEW_NAME(rt_str("pi", 2)), 0);
R9 l_PRIO_3132; memset(&l_PRIO_3132, 0, sizeof l_PRIO_3132);
S_R9(&l_PRIO_3132, r_MK(rt_str("0", 1)), 0);
R9 l_START_3133; memset(&l_START_3133, 0, sizeof l_START_3133);
R22 * l_LT_3134; memset(&l_LT_3134, 0, sizeof l_LT_3134);
l_LT_3134 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_3128, l_FT_3128));
if ((!(((*(R21 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R9(&l_PRIO_3132, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R21 * l_R_3135; memset(&l_R_3135, 0, sizeof l_R_3135);
l_R_3135 = ((*(R21 *)rt_nil_check(p_P))).f_A;
R26 l_LV_3136; memset(&l_LV_3136, 0, sizeof l_LV_3136);
S_R26(&l_LV_3136, r_EXPR(((*(R21 *)rt_nil_check(l_R_3135))).f_A, NULL), 0);
R9 l_LO_3137; memset(&l_LO_3137, 0, sizeof l_LO_3137);
S_R9(&l_LO_3137, (l_LV_3136).f_C, 0);
R9 l_HI_3138; memset(&l_HI_3138, 0, sizeof l_HI_3138);
S_R9(&l_HI_3138, (r_EXPR(((*(R21 *)rt_nil_check(l_R_3135))).f_B, (l_LV_3136).f_T)).f_C, 0);
R22 * l_RT_3139; memset(&l_RT_3139, 0, sizeof l_RT_3139);
l_RT_3139 = r_REAL_TYPE((l_LV_3136).f_T);
if ((((*(R22 *)rt_nil_check(l_RT_3139))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_RT_3139))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("a loop prefix over an UNORDERED type (4.6.1)", 44));
}
l_LT_3134 = ((*(R22 *)rt_nil_check(l_RT_3139))).f_BASE;
S_R9(&l_HI_3138, (r_EXPR(((*(R21 *)rt_nil_check(l_R_3135))).f_B, l_LT_3134)).f_C, 0);
}
else if (((!(((*(R22 *)rt_nil_check(l_RT_3139))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_RT_3139))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("the range of a loop prefix is integer or enumerated (4.6.1)", 59));
}
if (((((*(R21 *)rt_nil_check(l_R_3135))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_3135))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LO_3137, r_FMT1(rt_str("(@) + 1", 7), l_LO_3137), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_3135))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HI_3138, r_FMT1(rt_str("(@) - 1", 7), l_HI_3138), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_3130, l_LO_3137, l_HI_3138));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_3131, l_H_3130, l_IT_3131, l_H_3130), l_IT_3131));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_3131));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_3128, r_UP_FRAME()));
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), l_IT_3131));
}
if ((!(((*(R21 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_3140; memset(&l_V_3140, 0, sizeof l_V_3140);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_3141; memset(&l_I_3141, 0, sizeof l_I_3141);
l_I_3141 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_3141))).f_T = l_LT_3134;
((*(R12 *)rt_nil_check(l_I_3141))).f_INPUT = 1;
S_R9(&((*(R12 *)rt_nil_check(l_I_3141))).f_ACCESS, l_IT_3131, 0);
((*(R12 *)rt_nil_check(l_I_3141))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_3141, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_3140, r_EXPR(((*(R21 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3140).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_3140).f_C));
}
}
S_R9(&l_START_3133, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_3130, l_IT_3131, l_FN_3127, p_TD), 0);
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT4(rt_str("@@, @); if (@ == ", 17), l_START_3133, p_TD, l_PRIO_3132, l_IT_3131));
r_CODE(r_FMT1(rt_str("@.hi) break; }", 14), l_H_3130));
}
else
{
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_3133, p_TD, l_PRIO_3132));
}
r_PATH_BODY(p_P, l_FN_3127, l_FT_3128, l_LT_3134);
}
static R9 r_UP_FRAME(void) { RT_B_TICK(); 
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R9 rv3142 = r_MK(rt_str("NULL", 4));
return rv3142; }
}
{ R9 rv3143 = r_MK(rt_str("F", 1));
return rv3143; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R21 * p_P, R9 p_FN, R9 p_FT, R22 * p_LT) { RT_B_TICK(); 
R14 l_SAVED_CODE_3144; memset(&l_SAVED_CODE_3144, 0, sizeof l_SAVED_CODE_3144);
S_R14(&l_SAVED_CODE_3144, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_3145; memset(&l_SAVED_CTXS_3145, 0, sizeof l_SAVED_CTXS_3145);
l_SAVED_CTXS_3145 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R18 * l_OUTER_3146; memset(&l_OUTER_3146, 0, sizeof l_OUTER_3146);
l_OUTER_3146 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R21 * l_H_3147; memset(&l_H_3147, 0, sizeof l_H_3147);
l_H_3147 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_A;
R18 * l_CS_3148; memset(&l_CS_3148, 0, sizeof l_CS_3148);
l_CS_3148 = ((R18 *)rt_b_new(sizeof (R18)));
R9 l_UPT_3149; memset(&l_UPT_3149, 0, sizeof l_UPT_3149);
S_R9(&l_UPT_3149, r_MK(rt_str("void", 4)), 0);
if ((((*(R18 *)rt_nil_check(l_OUTER_3146))).f_LEVEL > ((rt_int)0LL)))
{
S_R9(&l_UPT_3149, ((*(R18 *)rt_nil_check(l_OUTER_3146))).f_FTYPE, 0);
}
S_R18(&(*(R18 *)rt_nil_check(l_CS_3148)), ({ R18 rc3150; memset(&rc3150, 0, sizeof rc3150);  rc3150.f_LEVEL = rt_add(((*(R18 *)rt_nil_check(l_OUTER_3146))).f_LEVEL, ((rt_int)1LL)); rc3150.f_R = NULL; rc3150.f_FRAMED = 1; S_R9(&rc3150.f_FTYPE, p_FT, 0); S_R14(&rc3150.f_FIELDS, ({ R14 rc3151; memset(&rc3151, 0, sizeof rc3151);  rc3151.f_HEAD = NULL; rc3151.f_TAIL = NULL; rc3151; }), 0); rc3150.f_UP = l_OUTER_3146; rc3150.f_IMPORTS = ((*(R21 *)rt_nil_check(l_H_3147))).f_B; rc3150.f_SIGNALS = ((*(R21 *)rt_nil_check(l_H_3147))).f_A; rc3150.f_RESULT = NULL; rc3150.f_IS_PATH = 1; S_R9(&rc3150.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3150; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_3149), &((*(R18 *)rt_nil_check(l_CS_3148))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_3148;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3152; memset(&rc3152, 0, sizeof rc3152);  rc3152.f_HEAD = NULL; rc3152.f_TAIL = NULL; rc3152; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_H_3147))).f_B, ((*(R21 *)rt_nil_check(l_H_3147))).f_A, ((*(R21 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_3153; memset(&l_I_3153, 0, sizeof l_I_3153);
l_I_3153 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_3153))).f_T = p_LT;
((*(R12 *)rt_nil_check(l_I_3153))).f_INPUT = 1;
S_R9(&((*(R12 *)rt_nil_check(l_I_3153))).f_FIELD, r_FMT1(rt_str("l_@", 3), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
S_R9(&((*(R12 *)rt_nil_check(l_I_3153))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_3148))).f_FIELDS);
r_DEFINE(l_I_3153, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
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
R21 * l_L_3154; memset(&l_L_3154, 0, sizeof l_L_3154);
l_L_3154 = ((*(R21 *)rt_nil_check(l_H_3147))).f_A;
R9 l_C_3155; memset(&l_C_3155, 0, sizeof l_C_3155);
S_R9(&l_C_3155, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3154 == NULL)) goto L_end3156;
{
S_R9(&l_C_3155, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_3155, r_EXC_NAME(((*(R21 *)rt_nil_check(l_L_3154))).f_NAME)), 0);
l_L_3154 = ((*(R21 *)rt_nil_check(l_L_3154))).f_NEXT;
}
RT_B_TICK();
} L_end3156: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_3155));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_3148))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_3146;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3144, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_3145;
}
static R9 r_JOIN_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_3157; memset(&l_C_3157, 0, sizeof l_C_3157);
l_C_3157 = (p_B).f_HEAD;
R9 l_R_3158; memset(&l_R_3158, 0, sizeof l_R_3158);
S_R9(&l_R_3158, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_3157 == NULL)) goto L_end3159;
{
S_R9(&l_R_3158, r_CAT(l_R_3158, ((*(R15 *)rt_nil_check(l_C_3157))).f_T), 0);
l_C_3157 = ((*(R15 *)rt_nil_check(l_C_3157))).f_NEXT;
}
RT_B_TICK();
} L_end3159: ;
{ R9 rv3160 = l_R_3158;
return rv3160; }
rt_raise(RT_X_INIT);
}
static R9 r_PATH_REF(R21 * p_E) { RT_B_TICK(); 
R9 l_NAME_3161; memset(&l_NAME_3161, 0, sizeof l_NAME_3161);
S_R9(&l_NAME_3161, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R9 l_SUB_3162; memset(&l_SUB_3162, 0, sizeof l_SUB_3162);
S_R9(&l_SUB_3162, r_MK(rt_str("0", 1)), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R21 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R9(&l_SUB_3162, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_3163; memset(&l_Y_3163, 0, sizeof l_Y_3163);
l_Y_3163 = r_LOOKUP(l_NAME_3161);
if ((l_Y_3163 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_3161);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3163))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_3161);
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3163))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R9 rv3164 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_3163), l_SUB_3162);
return rv3164; }
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
R9 l_NAME_3165; memset(&l_NAME_3165, 0, sizeof l_NAME_3165);
S_R9(&l_NAME_3165, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_3166; memset(&l_LINE_3166, 0, sizeof l_LINE_3166);
l_LINE_3166 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_3165, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_3167; memset(&l_V_3167, 0, sizeof l_V_3167);
S_R26(&l_V_3167, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3167).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_3166, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv3168 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_3167).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_3167).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3168; }
}
}
else if (r_TEQS(l_NAME_3165, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv3169 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3169; }
}
{ R26 rv3170 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3170; }
}
else if (r_TEQS(l_NAME_3165, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R21 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv3171 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv3171; }
}
{ R26 rv3172 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R21 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv3172; }
}
else if ((r_TEQS(l_NAME_3165, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_3165, rt_str("RELEASE", 7))))
{
if ((((!(((*(R21 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_3166, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_3165);
}
{
R26 l_V_3173; memset(&l_V_3173, 0, sizeof l_V_3173);
S_R26(&l_V_3173, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3173).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_3166, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_3173).f_LVAL))
{
r_FAIL(l_LINE_3166, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_3165, rt_str("REQUEST", 7)))
{
{ R26 rv3174 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_3173).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3174; }
}
{ R26 rv3175 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_3173).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3175; }
}
}
else if (r_TEQS(l_NAME_3165, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_3166);
{ R26 rv3176 = r_START_IO_CALL(p_E);
return rv3176; }
}
r_FAILT(l_LINE_3166, rt_str("unknown routine ", 16), l_NAME_3165);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R21 * p_E) { RT_B_TICK(); 
R27 * l_ARGS_3177; memset(&l_ARGS_3177, 0, sizeof l_ARGS_3177);
l_ARGS_3177 = r_CALL_ARGS(p_E);
R12 * l_Y_3178; memset(&l_Y_3178, 0, sizeof l_Y_3178);
l_Y_3178 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_3177, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_3179; memset(&l_R_3179, 0, sizeof l_R_3179);
if ((l_Y_3178 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_3179, r_CALL_SYM(l_Y_3178, l_ARGS_3177, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv3180 = l_R_3179;
return rv3180; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R21 * p_IMPORTS, R21 * p_SIGNALS, R9 p_NAME) { RT_B_TICK(); 
R19 * l_I_3181; memset(&l_I_3181, 0, sizeof l_I_3181);
l_I_3181 = ((R19 *)rt_b_new(sizeof (R19)));
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R19(&(*(R19 *)rt_nil_check(l_I_3181)), ({ R19 rc3182; memset(&rc3182, 0, sizeof rc3182);  rc3182.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc3182.f_IMPORTS = p_IMPORTS; rc3182.f_SIGNALS = p_SIGNALS; S_R9(&rc3182.f_NAME, p_NAME, 0); rc3182.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc3182; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_3181;
}
static void r_LEAVE_ISCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R9 r_ROUTINE_CNAME(R9 p_NAME) { RT_B_TICK(); 
R9 l_BASE_3183; memset(&l_BASE_3183, 0, sizeof l_BASE_3183);
S_R9(&l_BASE_3183, r_FMT1(rt_str("r_@", 3), r_CID(p_NAME)), 0);
rstr l_S_3184; memset(&l_S_3184, 0, sizeof l_S_3184);
l_S_3184 = rt_b_str_new((l_BASE_3183).f_LEN, 0);
rt_b_assign(&l_S_3184, r_STR(l_BASE_3183, (l_BASE_3183).f_LEN));
R21 * l_N_3185; memset(&l_N_3185, 0, sizeof l_N_3185);
l_N_3185 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it3187_lo = ((rt_int)0LL), it3187_hi = rt_sub((l_BASE_3183).f_LEN, ((rt_int)1LL));
for (rt_int it3187 = it3187_lo; it3187 <= it3187_hi; it3187++) {
{
if (rt_b_eq(rt_b_slice(l_S_3184, it3187, it3187), rt_str("$", 1)))
{
S_R9(&l_BASE_3183, r_MK(rt_b_cat(rt_b_cat(rt_b_slice(l_S_3184, ((rt_int)0LL), rt_sub(it3187, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_3184, rt_add(it3187, ((rt_int)1LL)), rt_sub((l_BASE_3183).f_LEN, ((rt_int)1LL))))), 0);
}
}
RT_B_TICK();
if (it3187 == it3187_hi) break;
} } L_end3186: ;
for (;;) {
if ((l_N_3185 == NULL)) goto L_end3188;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_3185))).f_NAME, l_BASE_3183))
{
{ R9 rv3189 = r_FMT2(rt_str("@_@", 3), l_BASE_3183, r_NEW_NAME(rt_str("", 0)));
return rv3189; }
}
l_N_3185 = ((*(R21 *)rt_nil_check(l_N_3185))).f_NEXT;
}
RT_B_TICK();
} L_end3188: ;
l_N_3185 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R21 *)rt_nil_check(l_N_3185))).f_NAME, l_BASE_3183, 0);
((*(R21 *)rt_nil_check(l_N_3185))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_3185;
{ R9 rv3190 = l_BASE_3183;
return rv3190; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R21 * p_B) { RT_B_TICK(); 
if ((p_B == NULL))
{
{ rt_int rv3191 = 0;
return rv3191; }
}
if ((!(((*(R21 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv3192 = 1;
return rv3192; }
}
{ rt_int rv3193 = r_HAS_HANDLERS(((*(R21 *)rt_nil_check(p_B))).f_B);
return rv3193; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_3194; memset(&l_S_3194, 0, sizeof l_S_3194);
l_S_3194 = p_S0;
for (;;) {
if ((l_S_3194 == NULL)) goto L_end3195;
{
if (((((*(R21 *)rt_nil_check(l_S_3194))).f_KIND == g_N_EXCEPT) || (((*(R21 *)rt_nil_check(l_S_3194))).f_KIND == g_N_PAR)))
{
{ rt_int rv3196 = 1;
return rv3196; }
}
if (((((*(R21 *)rt_nil_check(l_S_3194))).f_KIND == g_N_LABELED) || (((*(R21 *)rt_nil_check(l_S_3194))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_3194))).f_A) || r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_3194))).f_B)))
{
{ rt_int rv3197 = 1;
return rv3197; }
}
}
else if ((((*(R21 *)rt_nil_check(l_S_3194))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_3194))).f_A))).f_B))
{
{ rt_int rv3198 = 1;
return rv3198; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_3194))).f_KIND == g_N_LOOP) || (((*(R21 *)rt_nil_check(l_S_3194))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_3194))).f_B))).f_B))
{
{ rt_int rv3199 = 1;
return rv3199; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_3194))).f_KIND == g_N_IF) || (((*(R21 *)rt_nil_check(l_S_3194))).f_KIND == g_N_CASE)))
{
{
R21 * l_A_3200; memset(&l_A_3200, 0, sizeof l_A_3200);
l_A_3200 = ((*(R21 *)rt_nil_check(l_S_3194))).f_A;
if ((((*(R21 *)rt_nil_check(l_S_3194))).f_KIND == g_N_CASE))
{
l_A_3200 = ((*(R21 *)rt_nil_check(l_S_3194))).f_B;
if ((!(((*(R21 *)rt_nil_check(l_S_3194))).f_D == NULL)))
{
{ rt_int rv3201 = 1;
return rv3201; }
}
if ((!(((*(R21 *)rt_nil_check(l_S_3194))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_3194))).f_C))).f_B))
{
{ rt_int rv3202 = 1;
return rv3202; }
}
}
}
else if ((!(((*(R21 *)rt_nil_check(l_S_3194))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_3194))).f_B))).f_B))
{
{ rt_int rv3203 = 1;
return rv3203; }
}
}
for (;;) {
if ((l_A_3200 == NULL)) goto L_end3204;
{
if ((!(((*(R21 *)rt_nil_check(l_A_3200))).f_C == NULL)))
{
{ rt_int rv3205 = 1;
return rv3205; }
}
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_3200))).f_B))).f_B))
{
{ rt_int rv3206 = 1;
return rv3206; }
}
l_A_3200 = ((*(R21 *)rt_nil_check(l_A_3200))).f_NEXT;
}
RT_B_TICK();
} L_end3204: ;
}
}
l_S_3194 = ((*(R21 *)rt_nil_check(l_S_3194))).f_NEXT;
}
RT_B_TICK();
} L_end3195: ;
{ rt_int rv3207 = 0;
return rv3207; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R21 * p_R) { RT_B_TICK(); 
R12 * l_Y_3208; memset(&l_Y_3208, 0, sizeof l_Y_3208);
l_Y_3208 = r_NEW_SYM(g_Y_ROUTINE, ((*(R21 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_3209; memset(&l_S_3209, 0, sizeof l_S_3209);
l_S_3209 = rt_b_str_new((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, 0);
rt_b_assign(&l_S_3209, r_STR(((*(R21 *)rt_nil_check(p_R))).f_NAME, (((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R12 *)rt_nil_check(l_Y_3208))).f_DECL = p_R;
S_R9(&((*(R12 *)rt_nil_check(l_Y_3208))).f_ACCESS, r_ROUTINE_CNAME(((*(R21 *)rt_nil_check(p_R))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_Y_3208))).f_FRAMED = r_NEEDS_FRAME(((*(R21 *)rt_nil_check(p_R))).f_C);
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3208))).f_FIELD, ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_3208, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it3211_lo = ((rt_int)1LL), it3211_hi = rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it3211 = it3211_lo; it3211 <= it3211_hi; it3211++) {
{
if (rt_b_eq(rt_b_slice(l_S_3209, it3211, it3211), rt_str("$", 1)))
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3208))).f_PREFIX, r_MKN(rt_b_slice(l_S_3209, ((rt_int)0LL), rt_sub(it3211, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_3212; memset(&l_SHORT_3212, 0, sizeof l_SHORT_3212);
l_SHORT_3212 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_3209, rt_add(it3211, ((rt_int)1LL)), rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_3212))).f_ORIG = l_Y_3208;
S_R9(&((*(R12 *)rt_nil_check(l_SHORT_3212))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_3208))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_3212))).f_DECL = p_R;
r_DEFINE(l_SHORT_3212, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end3210;
}
}
RT_B_TICK();
if (it3211 == it3211_hi) break;
} } L_end3210: ;
}
static void r_DECLARE_MEMBERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_3213; memset(&l_R_3213, 0, sizeof l_R_3213);
l_R_3213 = p_RS;
for (;;) {
if ((l_R_3213 == NULL)) goto L_end3214;
{
if ((((*(R21 *)rt_nil_check(l_R_3213))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_3213);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_3213);
}
l_R_3213 = ((*(R21 *)rt_nil_check(l_R_3213))).f_NEXT;
}
RT_B_TICK();
} L_end3214: ;
}
static void r_ROUTINE_HEADERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_3215; memset(&l_R_3215, 0, sizeof l_R_3215);
l_R_3215 = p_RS;
for (;;) {
if ((l_R_3215 == NULL)) goto L_end3216;
{
if ((((*(R21 *)rt_nil_check(l_R_3215))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3217; memset(&l_M_3217, 0, sizeof l_M_3217);
l_M_3217 = r_FIND_DECL(l_R_3215);
r_ENTER_MODULE(l_M_3217);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3215))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3217);
}
}
else
{
{
R12 * l_Y_3218; memset(&l_Y_3218, 0, sizeof l_Y_3218);
l_Y_3218 = r_FIND_DECL(l_R_3215);
r_ROUTINE_HEADER(l_Y_3218);
}
}
l_R_3215 = ((*(R21 *)rt_nil_check(l_R_3215))).f_NEXT;
}
RT_B_TICK();
} L_end3216: ;
}
static void r_DISTINCT_SIGNATURES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_3219; memset(&l_R_3219, 0, sizeof l_R_3219);
l_R_3219 = p_RS;
for (;;) {
if ((l_R_3219 == NULL)) goto L_end3220;
{
if ((((*(R21 *)rt_nil_check(l_R_3219))).f_KIND == g_N_ROUTINE))
{
{
R21 * l_Q_3221; memset(&l_Q_3221, 0, sizeof l_Q_3221);
l_Q_3221 = ((*(R21 *)rt_nil_check(l_R_3219))).f_NEXT;
for (;;) {
if ((l_Q_3221 == NULL)) goto L_end3222;
{
if (((((*(R21 *)rt_nil_check(l_Q_3221))).f_KIND == g_N_ROUTINE) && r_TEQ(((*(R21 *)rt_nil_check(l_Q_3221))).f_NAME, ((*(R21 *)rt_nil_check(l_R_3219))).f_NAME)))
{
{
R12 * l_A_3223; memset(&l_A_3223, 0, sizeof l_A_3223);
l_A_3223 = r_FIND_DECL(l_R_3219);
R12 * l_B_3224; memset(&l_B_3224, 0, sizeof l_B_3224);
l_B_3224 = r_FIND_DECL(l_Q_3221);
r_ROUTINE_HEADER(l_A_3223);
r_ROUTINE_HEADER(l_B_3224);
if (r_SAME_SIGNATURE(l_A_3223, l_B_3224))
{
r_FAILT(((*(R21 *)rt_nil_check(l_Q_3221))).f_LINE, rt_str("two routines of one scope with the same signature (4.1): ", 57), ((*(R21 *)rt_nil_check(l_Q_3221))).f_NAME);
}
}
}
l_Q_3221 = ((*(R21 *)rt_nil_check(l_Q_3221))).f_NEXT;
}
RT_B_TICK();
} L_end3222: ;
}
}
l_R_3219 = ((*(R21 *)rt_nil_check(l_R_3219))).f_NEXT;
}
RT_B_TICK();
} L_end3220: ;
}
static R12 * r_FIND_DECL(R21 * p_D) { RT_B_TICK(); 
R12 * l_Y_3225; memset(&l_Y_3225, 0, sizeof l_Y_3225);
l_Y_3225 = r_LOOKUP(((*(R21 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_3225 == NULL)) goto L_end3226;
{
if (((((*(R12 *)rt_nil_check(l_Y_3225))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_3225))).f_ORIG == NULL)))
{
{ R12 * rv3227 = l_Y_3225;
return rv3227; }
}
l_Y_3225 = r_LOOKUP_NEXT(l_Y_3225);
}
RT_B_TICK();
} L_end3226: ;
r_FAILT(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R21 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_3228; memset(&l_D_3228, 0, sizeof l_D_3228);
l_D_3228 = p_DECLS;
for (;;) {
if ((l_D_3228 == NULL)) goto L_end3229;
{
if (((((*(R21 *)rt_nil_check(l_D_3228))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(l_D_3228))).f_A == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_3228))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_3230; memset(&l_Y_3230, 0, sizeof l_Y_3230);
l_Y_3230 = r_FIND_DECL(l_D_3228);
R22 * l_T_3231; memset(&l_T_3231, 0, sizeof l_T_3231);
l_T_3231 = r_RESOLVE_USER(r_TYPE_REF(l_D_3228));
}
}
}
l_D_3228 = ((*(R21 *)rt_nil_check(l_D_3228))).f_NEXT;
}
RT_B_TICK();
} L_end3229: ;
}
static R21 * r_TYPE_REF(R21 * p_D) { RT_B_TICK(); 
R21 * l_TS_3232; memset(&l_TS_3232, 0, sizeof l_TS_3232);
l_TS_3232 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_D))).f_LINE);
S_R9(&((*(R21 *)rt_nil_check(l_TS_3232))).f_NAME, ((*(R21 *)rt_nil_check(p_D))).f_NAME, 0);
{ R21 * rv3233 = l_TS_3232;
return rv3233; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R21 * p_M) { RT_B_TICK(); 
R12 * l_Y_3234; memset(&l_Y_3234, 0, sizeof l_Y_3234);
l_Y_3234 = r_NEW_SYM(g_Y_MODULE, ((*(R21 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_3235; memset(&l_SAVED_3235, 0, sizeof l_SAVED_3235);
l_SAVED_3235 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_3234))).f_DECL = p_M;
r_DEFINE(l_Y_3234, ((*(R21 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_3236; memset(&l_MARK_3236, 0, sizeof l_MARK_3236);
l_MARK_3236 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_3234;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_3234))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_3236);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_3235;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_3234);
}
static void r_ENTER_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_Y_3237; memset(&l_Y_3237, 0, sizeof l_Y_3237);
l_Y_3237 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_3237 == NULL)) goto L_end3238;
{
{
R12 * l_NEXT_3239; memset(&l_NEXT_3239, 0, sizeof l_NEXT_3239);
l_NEXT_3239 = ((*(R12 *)rt_nil_check(l_Y_3237))).f_SNEXT;
r_DEFINE(l_Y_3237, ((rt_int)0LL));
l_Y_3237 = l_NEXT_3239;
}
}
RT_B_TICK();
} L_end3238: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_MARK_3240; memset(&l_MARK_3240, 0, sizeof l_MARK_3240);
l_MARK_3240 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_3240 == NULL)) goto L_end3241;
{
if ((((*(R12 *)rt_nil_check(l_MARK_3240))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end3241;
}
l_MARK_3240 = ((*(R12 *)rt_nil_check(l_MARK_3240))).f_SNEXT;
}
RT_B_TICK();
} L_end3241: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_3240);
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
{ rt_int rv3242 = 1;
return rv3242; }
}
}
{ rt_int rv3243 = 0;
return rv3243; }
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
R21 * l_D_3244; memset(&l_D_3244, 0, sizeof l_D_3244);
l_D_3244 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_3245; memset(&l_Y_3245, 0, sizeof l_Y_3245);
l_Y_3245 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3245 == NULL)) goto L_end3246;
{
if (r_EXPORTED_BY(l_D_3244, l_Y_3245))
{
((*(R12 *)rt_nil_check(l_Y_3245))).f_EXPORTED = 1;
{
R12 * l_A_3247; memset(&l_A_3247, 0, sizeof l_A_3247);
l_A_3247 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_3245))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_3245))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_3247)), (*(R12 *)rt_nil_check(l_Y_3245)), 0);
((*(R12 *)rt_nil_check(l_A_3247))).f_ORIG = r_ORIGINAL(l_Y_3245);
((*(R12 *)rt_nil_check(l_A_3247))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_3247, ((*(R21 *)rt_nil_check(l_D_3244))).f_LINE);
}
}
l_Y_3245 = ((*(R12 *)rt_nil_check(l_Y_3245))).f_SNEXT;
}
RT_B_TICK();
} L_end3246: ;
{
R21 * l_X_3248; memset(&l_X_3248, 0, sizeof l_X_3248);
l_X_3248 = ((*(R21 *)rt_nil_check(l_D_3244))).f_B;
for (;;) {
if ((l_X_3248 == NULL)) goto L_end3249;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R21 *)rt_nil_check(l_X_3248))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_X_3248))).f_LINE, rt_str("the module does not declare ", 28), ((*(R21 *)rt_nil_check(l_X_3248))).f_NAME);
}
r_CHECK_EXPORT_ITEM(p_M, l_X_3248);
l_X_3248 = ((*(R21 *)rt_nil_check(l_X_3248))).f_NEXT;
}
RT_B_TICK();
} L_end3249: ;
}
}
static void r_CHECK_EXPORT_ITEM(R12 * p_M, R21 * p_X) { RT_B_TICK(); 
R12 * l_Y_3250; memset(&l_Y_3250, 0, sizeof l_Y_3250);
l_Y_3250 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
rt_int l_IS_TYPE_3251; memset(&l_IS_TYPE_3251, 0, sizeof l_IS_TYPE_3251);
l_IS_TYPE_3251 = 0;
rt_int l_IS_ROUTINE_3252; memset(&l_IS_ROUTINE_3252, 0, sizeof l_IS_ROUTINE_3252);
l_IS_ROUTINE_3252 = 0;
for (;;) {
if ((l_Y_3250 == NULL)) goto L_end3253;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_3250))).f_NAME, ((*(R21 *)rt_nil_check(p_X))).f_NAME))
{
if ((((*(R12 *)rt_nil_check(l_Y_3250))).f_KIND == g_Y_TYPE))
{
l_IS_TYPE_3251 = 1;
}
else if ((((((*(R12 *)rt_nil_check(l_Y_3250))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_3250))).f_KIND == g_Y_MODULE)) || (((*(R12 *)rt_nil_check(l_Y_3250))).f_KIND == g_Y_ENUMLIT)))
{
l_IS_ROUTINE_3252 = 1;
}
}
else if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_3250))).f_PREFIX, ((*(R21 *)rt_nil_check(p_X))).f_NAME))
{
l_IS_ROUTINE_3252 = 1;
}
l_Y_3250 = ((*(R12 *)rt_nil_check(l_Y_3250))).f_SNEXT;
}
RT_B_TICK();
} L_end3253: ;
if (((!l_IS_TYPE_3251) && (!l_IS_ROUTINE_3252)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_X))).f_LINE, rt_str("only type and routine names are exported (4.4): ", 48), ((*(R21 *)rt_nil_check(p_X))).f_NAME);
}
if ((!(((*(R21 *)rt_nil_check(p_X))).f_A == NULL)))
{
if ((!l_IS_TYPE_3251))
{
r_FAILT(((*(R21 *)rt_nil_check(p_X))).f_LINE, rt_str("only a type-name is followed by a WITH clause (4.4): ", 53), ((*(R21 *)rt_nil_check(p_X))).f_NAME);
}
{
R21 * l_OP_3254; memset(&l_OP_3254, 0, sizeof l_OP_3254);
l_OP_3254 = ((*(R21 *)rt_nil_check(p_X))).f_A;
for (;;) {
if ((l_OP_3254 == NULL)) goto L_end3255;
{
{
rt_int l_FOUND_3256; memset(&l_FOUND_3256, 0, sizeof l_FOUND_3256);
l_FOUND_3256 = 0;
l_Y_3250 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3250 == NULL)) goto L_end3257;
{
if (((((*(R12 *)rt_nil_check(l_Y_3250))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_3250))).f_PREFIX, ((*(R21 *)rt_nil_check(p_X))).f_NAME)))
{
if (r_TEQ(r_BASE_NAME(r_ORIGINAL(l_Y_3250)), ((*(R21 *)rt_nil_check(l_OP_3254))).f_NAME))
{
l_FOUND_3256 = 1;
}
}
l_Y_3250 = ((*(R12 *)rt_nil_check(l_Y_3250))).f_SNEXT;
}
RT_B_TICK();
} L_end3257: ;
if ((!l_FOUND_3256))
{
r_FAILT(((*(R21 *)rt_nil_check(l_OP_3254))).f_LINE, rt_str("a WITH clause lists operations of the type (4.4): ", 50), ((*(R21 *)rt_nil_check(l_OP_3254))).f_NAME);
}
}
l_OP_3254 = ((*(R21 *)rt_nil_check(l_OP_3254))).f_NEXT;
}
RT_B_TICK();
} L_end3255: ;
}
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_3258; memset(&l_Y_3258, 0, sizeof l_Y_3258);
l_Y_3258 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3258 == NULL)) goto L_end3259;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_3258))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_3258))).f_PREFIX, p_NAME)))
{
{ rt_int rv3260 = 1;
return rv3260; }
}
l_Y_3258 = ((*(R12 *)rt_nil_check(l_Y_3258))).f_SNEXT;
}
RT_B_TICK();
} L_end3259: ;
{ rt_int rv3261 = 0;
return rv3261; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R21 * p_D, R12 * p_Y) { RT_B_TICK(); 
R21 * l_X_3262; memset(&l_X_3262, 0, sizeof l_X_3262);
l_X_3262 = ((*(R21 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv3263 = 0;
return rv3263; }
}
if ((((*(R21 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv3264 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv3264; }
}
for (;;) {
if ((l_X_3262 == NULL)) goto L_end3265;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_X_3262))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3266 = 1;
return rv3266; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R21 *)rt_nil_check(l_X_3262))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R21 *)rt_nil_check(l_X_3262))).f_A == NULL))
{
{ rt_int rv3267 = 1;
return rv3267; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_X_3262))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv3268 = 1;
return rv3268; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_3269; memset(&l_T_3269, 0, sizeof l_T_3269);
l_T_3269 = r_ORIG_LOOKUP_MEMBER(((*(R21 *)rt_nil_check(l_X_3262))).f_NAME, p_Y);
if ((!(l_T_3269 == NULL)))
{
{ rt_int rv3270 = 1;
return rv3270; }
}
}
}
l_X_3262 = ((*(R21 *)rt_nil_check(l_X_3262))).f_NEXT;
}
RT_B_TICK();
} L_end3265: ;
{ rt_int rv3271 = 0;
return rv3271; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R9 p_NAME, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3272; memset(&l_M_3272, 0, sizeof l_M_3272);
l_M_3272 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_3273; memset(&l_Z_3273, 0, sizeof l_Z_3273);
if ((l_M_3272 == NULL))
{
{ R12 * rv3274 = NULL;
return rv3274; }
}
l_Z_3273 = ((*(R12 *)rt_nil_check(l_M_3272))).f_MEMBERS;
for (;;) {
if ((l_Z_3273 == NULL)) goto L_end3275;
{
if (((((*(R12 *)rt_nil_check(l_Z_3273))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_3273))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_3273))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_3273))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_3273))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv3276 = l_Z_3273;
return rv3276; }
}
}
}
}
l_Z_3273 = ((*(R12 *)rt_nil_check(l_Z_3273))).f_SNEXT;
}
RT_B_TICK();
} L_end3275: ;
{ R12 * rv3277 = NULL;
return rv3277; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_3278; memset(&l_R_3278, 0, sizeof l_R_3278);
l_R_3278 = p_RS;
for (;;) {
if ((l_R_3278 == NULL)) goto L_end3279;
{
if ((((*(R21 *)rt_nil_check(l_R_3278))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3280; memset(&l_M_3280, 0, sizeof l_M_3280);
l_M_3280 = r_FIND_DECL(l_R_3278);
R21 * l_D_3281; memset(&l_D_3281, 0, sizeof l_D_3281);
l_D_3281 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3278))).f_C))).f_A;
r_ENTER_MODULE(l_M_3280);
for (;;) {
if ((l_D_3281 == NULL)) goto L_end3282;
{
if (((((*(R21 *)rt_nil_check(l_D_3281))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_3281))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3281);
}
l_D_3281 = ((*(R21 *)rt_nil_check(l_D_3281))).f_NEXT;
}
RT_B_TICK();
} L_end3282: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3278))).f_C))).f_C);
r_DISTINCT_SIGNATURES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3278))).f_C))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3278))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3280);
}
}
l_R_3278 = ((*(R21 *)rt_nil_check(l_R_3278))).f_NEXT;
}
RT_B_TICK();
} L_end3279: ;
}
static void r_ROUTINE_BODIES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_3283; memset(&l_R_3283, 0, sizeof l_R_3283);
l_R_3283 = p_RS;
for (;;) {
if ((l_R_3283 == NULL)) goto L_end3284;
{
if ((((*(R21 *)rt_nil_check(l_R_3283))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3285; memset(&l_M_3285, 0, sizeof l_M_3285);
l_M_3285 = r_FIND_DECL(l_R_3283);
r_ENTER_MODULE(l_M_3285);
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3283))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3285);
}
}
else
{
{
R12 * l_Y_3286; memset(&l_Y_3286, 0, sizeof l_Y_3286);
l_Y_3286 = r_FIND_DECL(l_R_3283);
if (((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3286))).f_DECL))).f_FL == ((rt_int)1LL)) && (!((*(R12 *)rt_nil_check(l_Y_3286))).f_GENERIC)))
{
}
else if ((!((*(R12 *)rt_nil_check(l_Y_3286))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_3286);
}
}
}
l_R_3283 = ((*(R21 *)rt_nil_check(l_R_3283))).f_NEXT;
}
RT_B_TICK();
} L_end3284: ;
}
static void r_PENDING_BODIES(void) { RT_B_TICK(); 
rt_int l_LEVEL_3287; memset(&l_LEVEL_3287, 0, sizeof l_LEVEL_3287);
l_LEVEL_3287 = r_CUR_LEVEL();
rt_int l_MORE_3288; memset(&l_MORE_3288, 0, sizeof l_MORE_3288);
l_MORE_3288 = 1;
for (;;) {
if ((!l_MORE_3288)) goto L_end3289;
{
l_MORE_3288 = 0;
{
R12 * l_P_3290; memset(&l_P_3290, 0, sizeof l_P_3290);
l_P_3290 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_3291; memset(&l_PREV_3291, 0, sizeof l_PREV_3291);
l_PREV_3291 = NULL;
for (;;) {
if ((l_P_3290 == NULL)) goto L_end3292;
{
if ((((*(R12 *)rt_nil_check(l_P_3290))).f_LEVEL == l_LEVEL_3287))
{
if ((l_PREV_3291 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_3290))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_3291))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_3290))).f_MEMBERS;
}
{
R12 * l_SAVED_SEG_3293; memset(&l_SAVED_SEG_3293, 0, sizeof l_SAVED_SEG_3293);
l_SAVED_SEG_3293 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R12 * l_HOME_3294; memset(&l_HOME_3294, 0, sizeof l_HOME_3294);
l_HOME_3294 = r_ENTER_HOME(l_P_3290);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(l_P_3290))).f_HOME;
r_ENTER_MODULE_OF(l_P_3290);
r_ROUTINE_BODY(l_P_3290);
r_LEAVE_MODULE_OF(l_P_3290);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_3293;
r_LEAVE_HOME(l_P_3290, l_HOME_3294);
}
l_MORE_3288 = 1;
goto L_end3292;
}
l_PREV_3291 = l_P_3290;
l_P_3290 = ((*(R12 *)rt_nil_check(l_P_3290))).f_MEMBERS;
}
RT_B_TICK();
} L_end3292: ;
}
}
RT_B_TICK();
} L_end3289: ;
}
static void r_CLOSED_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_3295; memset(&l_D_3295, 0, sizeof l_D_3295);
l_D_3295 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_3296; memset(&l_S_3296, 0, sizeof l_S_3296);
l_S_3296 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_3295 == NULL)) goto L_end3297;
{
if (((((*(R21 *)rt_nil_check(l_D_3295))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_3295))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3295);
}
l_D_3295 = ((*(R21 *)rt_nil_check(l_D_3295))).f_NEXT;
}
RT_B_TICK();
} L_end3297: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_DISTINCT_SIGNATURES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_3296 == NULL)) goto L_end3298;
{
r_STMT(l_S_3296);
l_S_3296 = ((*(R21 *)rt_nil_check(l_S_3296))).f_NEXT;
}
RT_B_TICK();
} L_end3298: ;
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_3299; memset(&l_R_3299, 0, sizeof l_R_3299);
l_R_3299 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_3300; memset(&l_SAVED_CODE_3300, 0, sizeof l_SAVED_CODE_3300);
S_R14(&l_SAVED_CODE_3300, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_3301; memset(&l_SAVED_CTXS_3301, 0, sizeof l_SAVED_CTXS_3301);
l_SAVED_CTXS_3301 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R20 * l_SAVED_BINDS_3302; memset(&l_SAVED_BINDS_3302, 0, sizeof l_SAVED_BINDS_3302);
l_SAVED_BINDS_3302 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R18 * l_OUTER_3303; memset(&l_OUTER_3303, 0, sizeof l_OUTER_3303);
l_OUTER_3303 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_CS_3304; memset(&l_CS_3304, 0, sizeof l_CS_3304);
l_CS_3304 = ((R18 *)rt_b_new(sizeof (R18)));
R9 l_PROLOGUE_3305; memset(&l_PROLOGUE_3305, 0, sizeof l_PROLOGUE_3305);
S_R9(&l_PROLOGUE_3305, r_MK(rt_str("", 0)), 0);
S_R18(&(*(R18 *)rt_nil_check(l_CS_3304)), ({ R18 rc3306; memset(&rc3306, 0, sizeof rc3306);  rc3306.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc3306.f_R = p_Y; rc3306.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R9(&rc3306.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc3306.f_FIELDS, ({ R14 rc3307; memset(&rc3307, 0, sizeof rc3307);  rc3307.f_HEAD = NULL; rc3307.f_TAIL = NULL; rc3307; }), 0); rc3306.f_UP = l_OUTER_3303; rc3306.f_IMPORTS = ((*(R21 *)rt_nil_check(l_R_3299))).f_E; rc3306.f_SIGNALS = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3299))).f_D))).f_A; rc3306.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc3306.f_IS_PATH = 0; S_R9(&rc3306.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3306; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R18 *)rt_nil_check(l_CS_3304))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_3304))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R18 *)rt_nil_check(l_CS_3304))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R18 *)rt_nil_check(l_CS_3304))).f_FIELDS);
}
S_R9(&l_PROLOGUE_3305, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R18 *)rt_nil_check(l_CS_3304))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_3304))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_PROLOGUE_3305, r_CATS(l_PROLOGUE_3305, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_3304;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3308; memset(&rc3308, 0, sizeof rc3308);  rc3308.f_HEAD = NULL; rc3308.f_TAIL = NULL; rc3308; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_R_3299))).f_E, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3299))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_R_3299))).f_LINE);
{
R28 * l_P_3309; memset(&l_P_3309, 0, sizeof l_P_3309);
l_P_3309 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_3309 == NULL)) goto L_end3310;
{
if ((!(((*(R28 *)rt_nil_check(l_P_3309))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_3309))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_3311; memset(&l_V_3311, 0, sizeof l_V_3311);
l_V_3311 = r_NEW_SYM(g_Y_VAR, ((*(R28 *)rt_nil_check(l_P_3309))).f_NAME);
R20 * l_MB_3312; memset(&l_MB_3312, 0, sizeof l_MB_3312);
l_MB_3312 = r_FIND_BIND(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, r_MKN(rt_b_cat(rt_str("=", 1), r_STR(((*(R28 *)rt_nil_check(l_P_3309))).f_NAME, (((*(R28 *)rt_nil_check(l_P_3309))).f_NAME).f_LEN))));
((*(R12 *)rt_nil_check(l_V_3311))).f_T = ((*(R28 *)rt_nil_check(l_P_3309))).f_T;
((*(R12 *)rt_nil_check(l_V_3311))).f_INPUT = (((*(R28 *)rt_nil_check(l_P_3309))).f_MODE == g_M_IN);
if ((!(l_MB_3312 == NULL)))
{
((*(R12 *)rt_nil_check(l_V_3311))).f_HASMV = ((*(R20 *)rt_nil_check(l_MB_3312))).f_HASMV;
((*(R12 *)rt_nil_check(l_V_3311))).f_MV = ((*(R20 *)rt_nil_check(l_MB_3312))).f_MV;
}
((*(R12 *)rt_nil_check(l_V_3311))).f_BYREF = (!(((*(R28 *)rt_nil_check(l_P_3309))).f_MODE == g_M_IN));
S_R9(&((*(R12 *)rt_nil_check(l_V_3311))).f_FIELD, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_3309))).f_NAME)), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_3311))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R28 *)rt_nil_check(l_P_3309))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3309))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_3304))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3311))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), r_CID(((*(R28 *)rt_nil_check(l_P_3309))).f_NAME)), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_3309))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3309))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_3304))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3311))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_3309))).f_NAME)), 0);
}
S_R9(&l_PROLOGUE_3305, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_3305, r_CID(((*(R28 *)rt_nil_check(l_P_3309))).f_NAME), r_CID(((*(R28 *)rt_nil_check(l_P_3309))).f_NAME)), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_3311))).f_BYREF)
{
S_R9(&((*(R12 *)rt_nil_check(l_V_3311))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), r_CID(((*(R28 *)rt_nil_check(l_P_3309))).f_NAME)), 0);
}
else
{
S_R9(&((*(R12 *)rt_nil_check(l_V_3311))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_3309))).f_NAME)), 0);
}
if ((((*(R28 *)rt_nil_check(l_P_3309))).f_MODE == g_M_OUT))
{
{
R9 l_ARGA_3313; memset(&l_ARGA_3313, 0, sizeof l_ARGA_3313);
S_R9(&l_ARGA_3313, ((*(R12 *)rt_nil_check(l_V_3311))).f_ACCESS, 0);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_3309))).f_T, l_ARGA_3313, ((*(R21 *)rt_nil_check(l_R_3299))).f_LINE, 1);
((*(R12 *)rt_nil_check(l_V_3311))).f_BYREF = 0;
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ o_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_3309))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3309))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_3304))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3311))).f_ACCESS, r_FMT1(rt_str("F->o_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_3309))).f_NAME)), 0);
}
else
{
S_R9(&l_PROLOGUE_3305, r_FMT3(rt_str("@ @ o_@;", 8), l_PROLOGUE_3305, r_CTYPE(((*(R28 *)rt_nil_check(l_P_3309))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3309))).f_NAME)), 0);
S_R9(&((*(R12 *)rt_nil_check(l_V_3311))).f_ACCESS, r_FMT1(rt_str("o_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_3309))).f_NAME)), 0);
}
S_R9(&l_PROLOGUE_3305, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_3305, ((*(R12 *)rt_nil_check(l_V_3311))).f_ACCESS, l_ARGA_3313), 0);
if (r_NEEDS_INIT(((*(R28 *)rt_nil_check(l_P_3309))).f_T))
{
S_R9(&l_PROLOGUE_3305, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_3305, ((*(R12 *)rt_nil_check(l_V_3311))).f_ACCESS, r_COPY_OF(((*(R28 *)rt_nil_check(l_P_3309))).f_T, l_ARGA_3313)), 0);
}
S_R9(&((*(R18 *)rt_nil_check(l_CS_3304))).f_COPYOUT, r_CAT(((*(R18 *)rt_nil_check(l_CS_3304))).f_COPYOUT, r_ASSIGN_CODE(((*(R28 *)rt_nil_check(l_P_3309))).f_T, l_ARGA_3313, ((*(R12 *)rt_nil_check(l_V_3311))).f_ACCESS)), 0);
r_DEFINE(l_V_3311, ((*(R21 *)rt_nil_check(l_R_3299))).f_LINE);
}
}
else
{
r_DEFINE(l_V_3311, ((*(R21 *)rt_nil_check(l_R_3299))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_3309))).f_T, ((*(R12 *)rt_nil_check(l_V_3311))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_3299))).f_LINE, 1);
}
}
}
}
l_P_3309 = ((*(R28 *)rt_nil_check(l_P_3309))).f_NEXT;
}
RT_B_TICK();
} L_end3310: ;
}
if ((((*(R21 *)rt_nil_check(l_R_3299))).f_FL >= ((rt_int)2LL)))
{
{
R21 * l_N_3314; memset(&l_N_3314, 0, sizeof l_N_3314);
l_N_3314 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3299))).f_D))).f_C;
R14 l_SAVED_CODE_3315; memset(&l_SAVED_CODE_3315, 0, sizeof l_SAVED_CODE_3315);
S_R14(&l_SAVED_CODE_3315, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_3316; memset(&l_V_3316, 0, sizeof l_V_3316);
S_R26(&l_V_3316, r_EXPR(l_N_3314, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
R23 l_M_3317; memset(&l_M_3317, 0, sizeof l_M_3317);
S_R23(&l_M_3317, r_MANIFEST(l_N_3314), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3315, 0);
if ((((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3316).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3316).f_T)))).f_SCALE == ((rt_int)0LL)))) || (!(l_M_3317).f_OK)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_N_3314))).f_LINE, rt_str("the stack-size is a manifest integer expression (4.8.2 [4-111])", 63));
}
if (((l_M_3317).f_V < ((rt_int)0LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_N_3314))).f_LINE, rt_str("the stack-size must be greater than or equal to zero (4.8.2)", 60));
}
}
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R21 *)rt_nil_check(l_R_3299))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_R_3299))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R18 *)rt_nil_check(l_CS_3304))).f_FTYPE, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_3304))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { RT_B_TICK(); @", 18), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_3305));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
else if (((((*(R18 *)rt_nil_check(l_CS_3304))).f_COPYOUT).f_LEN > ((rt_int)0LL)))
{
r_EMIT(g_O_FUNCS, ((*(R18 *)rt_nil_check(l_CS_3304))).f_COPYOUT);
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_3303;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3300, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_3301;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_3302;
}
static void r_BIND_INSTANCE(R20 * p_BS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_B_3318; memset(&l_B_3318, 0, sizeof l_B_3318);
l_B_3318 = p_BS;
for (;;) {
if ((l_B_3318 == NULL)) goto L_end3319;
{
if ((!(((*(R20 *)rt_nil_check(l_B_3318))).f_T == NULL)))
{
{
R12 * l_Y_3320; memset(&l_Y_3320, 0, sizeof l_Y_3320);
l_Y_3320 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_3318))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3320))).f_T = ((*(R20 *)rt_nil_check(l_B_3318))).f_T;
r_DEFINE(l_Y_3320, p_LINE);
}
}
else if (((*(R20 *)rt_nil_check(l_B_3318))).f_HASMV)
{
{
R12 * l_Y_3321; memset(&l_Y_3321, 0, sizeof l_Y_3321);
l_Y_3321 = r_NEW_SYM(g_Y_GEN, ((*(R20 *)rt_nil_check(l_B_3318))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3321))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_3321))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_3321))).f_MV = ((*(R20 *)rt_nil_check(l_B_3318))).f_MV;
S_R9(&((*(R12 *)rt_nil_check(l_Y_3321))).f_ACCESS, ((*(R20 *)rt_nil_check(l_B_3318))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_3321))).f_INPUT = 1;
r_DEFINE(l_Y_3321, p_LINE);
}
}
l_B_3318 = ((*(R20 *)rt_nil_check(l_B_3318))).f_NEXT;
}
RT_B_TICK();
} L_end3319: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { RT_B_TICK(); 
R15 * l_C_3322; memset(&l_C_3322, 0, sizeof l_C_3322);
l_C_3322 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_3322 == NULL)) goto L_end3323;
{
r_APPEND(C_R9(((*(R15 *)rt_nil_check(l_C_3322))).f_T), &(*p_DST));
l_C_3322 = ((*(R15 *)rt_nil_check(l_C_3322))).f_NEXT;
}
RT_B_TICK();
} L_end3323: ;
}
static rt_int r_USES_SEGMENT(R21 * p_S, rstr p_NAME) { RT_B_TICK(); 
R21 * l_U_3324; memset(&l_U_3324, 0, sizeof l_U_3324);
l_U_3324 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3324 == NULL)) goto L_end3325;
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_3324))).f_NAME, p_NAME))
{
{ rt_int rv3326 = 1;
return rv3326; }
}
l_U_3324 = ((*(R21 *)rt_nil_check(l_U_3324))).f_NEXT;
}
RT_B_TICK();
} L_end3325: ;
{ rt_int rv3327 = 0;
return rv3327; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R21 * p_S, R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_U_3328; memset(&l_U_3328, 0, sizeof l_U_3328);
l_U_3328 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3328 == NULL)) goto L_end3329;
{
{
R21 * l_T_3330; memset(&l_T_3330, 0, sizeof l_T_3330);
l_T_3330 = p_SEGS;
for (;;) {
if ((l_T_3330 == NULL)) goto L_end3331;
{
if ((((!(l_T_3330 == p_S)) && (((*(R21 *)rt_nil_check(l_T_3330))).f_D == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_T_3330))).f_NAME, ((*(R21 *)rt_nil_check(l_U_3328))).f_NAME)))
{
{ rt_int rv3332 = 0;
return rv3332; }
}
l_T_3330 = ((*(R21 *)rt_nil_check(l_T_3330))).f_NEXT;
}
RT_B_TICK();
} L_end3331: ;
}
l_U_3328 = ((*(R21 *)rt_nil_check(l_U_3328))).f_NEXT;
}
RT_B_TICK();
} L_end3329: ;
{ rt_int rv3333 = 1;
return rv3333; }
rt_raise(RT_X_INIT);
}
static R9 r_MISSING_SEGMENT(R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_S_3334; memset(&l_S_3334, 0, sizeof l_S_3334);
l_S_3334 = p_SEGS;
for (;;) {
if ((l_S_3334 == NULL)) goto L_end3335;
{
{
R21 * l_U_3336; memset(&l_U_3336, 0, sizeof l_U_3336);
l_U_3336 = ((*(R21 *)rt_nil_check(l_S_3334))).f_A;
for (;;) {
if ((l_U_3336 == NULL)) goto L_end3337;
{
if ((!r_TEQS(((*(R21 *)rt_nil_check(l_U_3336))).f_NAME, rt_str("TERMINAL", 8))))
{
{
R21 * l_T_3338; memset(&l_T_3338, 0, sizeof l_T_3338);
l_T_3338 = p_SEGS;
rt_int l_FOUND_3339; memset(&l_FOUND_3339, 0, sizeof l_FOUND_3339);
l_FOUND_3339 = 0;
for (;;) {
if ((l_T_3338 == NULL)) goto L_end3340;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_T_3338))).f_NAME, ((*(R21 *)rt_nil_check(l_U_3336))).f_NAME))
{
l_FOUND_3339 = 1;
}
l_T_3338 = ((*(R21 *)rt_nil_check(l_T_3338))).f_NEXT;
}
RT_B_TICK();
} L_end3340: ;
if ((!l_FOUND_3339))
{
{ R9 rv3341 = ((*(R21 *)rt_nil_check(l_U_3336))).f_NAME;
return rv3341; }
}
}
}
l_U_3336 = ((*(R21 *)rt_nil_check(l_U_3336))).f_NEXT;
}
RT_B_TICK();
} L_end3337: ;
}
l_S_3334 = ((*(R21 *)rt_nil_check(l_S_3334))).f_NEXT;
}
RT_B_TICK();
} L_end3335: ;
{ R9 rv3342 = r_NO_TEXT();
return rv3342; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_S_3343; memset(&l_S_3343, 0, sizeof l_S_3343);
l_S_3343 = p_SEGS;
rt_int l_MAINS_3344; memset(&l_MAINS_3344, 0, sizeof l_MAINS_3344);
l_MAINS_3344 = ((rt_int)0LL);
R18 * l_ROOT_3345; memset(&l_ROOT_3345, 0, sizeof l_ROOT_3345);
l_ROOT_3345 = ((R18 *)rt_b_new(sizeof (R18)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R18(&(*(R18 *)rt_nil_check(l_ROOT_3345)), ({ R18 rc3346; memset(&rc3346, 0, sizeof rc3346);  rc3346.f_LEVEL = ((rt_int)0LL); rc3346.f_R = NULL; rc3346.f_FRAMED = 0; S_R9(&rc3346.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc3346.f_FIELDS, ({ R14 rc3347; memset(&rc3347, 0, sizeof rc3347);  rc3347.f_HEAD = NULL; rc3347.f_TAIL = NULL; rc3347; }), 0); rc3346.f_UP = NULL; rc3346.f_IMPORTS = NULL; rc3346.f_SIGNALS = NULL; rc3346.f_RESULT = NULL; rc3346.f_IS_PATH = 0; S_R9(&rc3346.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3346; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_3345;
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
if ((!(((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL))))
{
r_EMIT(g_O_MAINHEAD, r_FMT1(rt_str("rt_b_machine(@);", 16), r_NUM(((*(R7 *)rt_nil_check(g_W))).f_WORD)));
}
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3348; memset(&rc3348, 0, sizeof rc3348);  rc3348.f_HEAD = NULL; rc3348.f_TAIL = NULL; rc3348; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_3343 = p_SEGS;
for (;;) {
if ((l_S_3343 == NULL)) goto L_end3350;
{
if ((((*(R21 *)rt_nil_check(l_S_3343))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_3343, p_SEGS))
{
goto L_end3350;
}
}
l_S_3343 = ((*(R21 *)rt_nil_check(l_S_3343))).f_NEXT;
}
RT_B_TICK();
} L_end3350: ;
if ((l_S_3343 == NULL))
{
goto L_end3349;
}
((*(R21 *)rt_nil_check(l_S_3343))).f_D = l_S_3343;
l_MAINS_3344 = rt_add(l_MAINS_3344, ((*(R21 *)rt_nil_check(l_S_3343))).f_IV);
if (((((*(R21 *)rt_nil_check(l_S_3343))).f_IV == ((rt_int)0LL)) && (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_3343))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_S_3343))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
r_BEGIN_SEGMENT(l_S_3343);
if (r_USES_SEGMENT(l_S_3343, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_S_3343))).f_B);
r_SEGMENT_EXPORTS(l_S_3343);
}
RT_B_TICK();
} L_end3349: ;
l_S_3343 = p_SEGS;
for (;;) {
if ((l_S_3343 == NULL)) goto L_end3351;
{
if ((((*(R21 *)rt_nil_check(l_S_3343))).f_D == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_S_3343))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R21 *)rt_nil_check(l_S_3343))).f_NAME);
}
l_S_3343 = ((*(R21 *)rt_nil_check(l_S_3343))).f_NEXT;
}
RT_B_TICK();
} L_end3351: ;
if ((!(l_MAINS_3344 == ((rt_int)1LL))))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R21 * l_X_3352; memset(&l_X_3352, 0, sizeof l_X_3352);
l_X_3352 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_3352 == NULL)) goto L_end3353;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), r_CID(((*(R21 *)rt_nil_check(l_X_3352))).f_NAME)));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), r_CID(((*(R21 *)rt_nil_check(l_X_3352))).f_NAME), r_CSTRING(((*(R21 *)rt_nil_check(l_X_3352))).f_NAME)));
l_X_3352 = ((*(R21 *)rt_nil_check(l_X_3352))).f_NEXT;
}
RT_B_TICK();
} L_end3353: ;
}
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static rt_int r_FROM_DEFINED_MODULE(R21 * p_S, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3354; memset(&l_M_3354, 0, sizeof l_M_3354);
l_M_3354 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv3355 = 0;
return rv3355; }
}
for (;;) {
if ((l_M_3354 == NULL)) goto L_end3356;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_3354))).f_NAME))
{
{ rt_int rv3357 = 1;
return rv3357; }
}
l_M_3354 = ((*(R12 *)rt_nil_check(l_M_3354))).f_MODL;
}
RT_B_TICK();
} L_end3356: ;
{ rt_int rv3358 = 0;
return rv3358; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R21 * p_S) { RT_B_TICK(); 
R12 * l_MARK_3359; memset(&l_MARK_3359, 0, sizeof l_MARK_3359);
l_MARK_3359 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_3360; memset(&l_TAKEN_3360, 0, sizeof l_TAKEN_3360);
R12 * l_SEG_3361; memset(&l_SEG_3361, 0, sizeof l_SEG_3361);
l_SEG_3361 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R21 * l_NAMES_3362; memset(&l_NAMES_3362, 0, sizeof l_NAMES_3362);
l_NAMES_3362 = NULL;
for (;;) {
if ((l_MARK_3359 == NULL)) goto L_end3363;
{
if ((((*(R12 *)rt_nil_check(l_MARK_3359))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end3363;
}
l_MARK_3359 = ((*(R12 *)rt_nil_check(l_MARK_3359))).f_SNEXT;
}
RT_B_TICK();
} L_end3363: ;
l_TAKEN_3360 = r_TAKE_SCOPE(l_MARK_3359);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
{
R21 * l_X_3364; memset(&l_X_3364, 0, sizeof l_X_3364);
l_X_3364 = ((*(R21 *)rt_nil_check(p_S))).f_C;
for (;;) {
if ((l_X_3364 == NULL)) goto L_end3365;
{
{
R12 * l_Y_3366; memset(&l_Y_3366, 0, sizeof l_Y_3366);
l_Y_3366 = l_TAKEN_3360;
rt_int l_FOUND_3367; memset(&l_FOUND_3367, 0, sizeof l_FOUND_3367);
l_FOUND_3367 = (!(r_LOOKUP(((*(R21 *)rt_nil_check(l_X_3364))).f_NAME) == NULL));
for (;;) {
if ((l_Y_3366 == NULL)) goto L_end3368;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_3366))).f_NAME, ((*(R21 *)rt_nil_check(l_X_3364))).f_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_3366))).f_PREFIX, ((*(R21 *)rt_nil_check(l_X_3364))).f_NAME)))
{
l_FOUND_3367 = 1;
}
else if ((((*(R12 *)rt_nil_check(l_Y_3366))).f_KIND == g_Y_ROUTINE))
{
if (r_TEQ(r_BASE_NAME(l_Y_3366), ((*(R21 *)rt_nil_check(l_X_3364))).f_NAME))
{
l_FOUND_3367 = 1;
}
}
l_Y_3366 = ((*(R12 *)rt_nil_check(l_Y_3366))).f_SNEXT;
}
RT_B_TICK();
} L_end3368: ;
if ((!l_FOUND_3367))
{
r_FAILT(((*(R21 *)rt_nil_check(l_X_3364))).f_LINE, rt_str("DEFINES names a name local to the segment or imported into it (4.2): ", 69), ((*(R21 *)rt_nil_check(l_X_3364))).f_NAME);
}
l_NAMES_3362 = r_NAME_REF(((*(R21 *)rt_nil_check(l_X_3364))).f_NAME, ((rt_int)0LL), NULL, l_NAMES_3362);
}
l_X_3364 = ((*(R21 *)rt_nil_check(l_X_3364))).f_NEXT;
}
RT_B_TICK();
} L_end3365: ;
}
for (;;) {
if ((l_TAKEN_3360 == NULL)) goto L_end3369;
{
{
R12 * l_NEXT_3370; memset(&l_NEXT_3370, 0, sizeof l_NEXT_3370);
l_NEXT_3370 = ((*(R12 *)rt_nil_check(l_TAKEN_3360))).f_SNEXT;
if (((!(((*(R12 *)rt_nil_check(l_TAKEN_3360))).f_KIND == g_Y_BUILTIN)) && (((((((((*(R21 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_3360))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_3360))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_3360))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_3360)) || (((((*(R12 *)rt_nil_check(l_TAKEN_3360))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_3360))))))))
{
((*(R12 *)rt_nil_check(l_TAKEN_3360))).f_SEGM = l_SEG_3361;
l_NAMES_3362 = r_NAME_REF(((*(R12 *)rt_nil_check(l_TAKEN_3360))).f_NAME, ((rt_int)0LL), NULL, l_NAMES_3362);
r_DEFINE(l_TAKEN_3360, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
else if ((!(((*(R12 *)rt_nil_check(l_TAKEN_3360))).f_KIND == g_Y_BUILTIN)))
{
((*(R12 *)rt_nil_check(l_TAKEN_3360))).f_SNEXT = ((*(R12 *)rt_nil_check(l_SEG_3361))).f_MEMBERS;
((*(R12 *)rt_nil_check(l_SEG_3361))).f_MEMBERS = l_TAKEN_3360;
}
l_TAKEN_3360 = l_NEXT_3370;
}
}
RT_B_TICK();
} L_end3369: ;
((*(R12 *)rt_nil_check(l_SEG_3361))).f_USES = l_NAMES_3362;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = NULL;
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = NULL;
}
static void r_BEGIN_SEGMENT(R21 * p_S) { RT_B_TICK(); 
R12 * l_SEG_3371; memset(&l_SEG_3371, 0, sizeof l_SEG_3371);
l_SEG_3371 = r_NEW_SYM(g_Y_SEGMENT, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
R21 * l_U_3372; memset(&l_U_3372, 0, sizeof l_U_3372);
l_U_3372 = ((*(R21 *)rt_nil_check(p_S))).f_A;
((*(R12 *)rt_nil_check(l_SEG_3371))).f_DECL = p_S;
((*(R12 *)rt_nil_check(l_SEG_3371))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_SEGS;
((*(R7 *)rt_nil_check(g_W))).f_SEGS = l_SEG_3371;
for (;;) {
if ((l_U_3372 == NULL)) goto L_end3373;
{
if ((!r_TEQS(((*(R21 *)rt_nil_check(l_U_3372))).f_NAME, rt_str("TERMINAL", 8))))
{
{
R12 * l_T_3374; memset(&l_T_3374, 0, sizeof l_T_3374);
l_T_3374 = r_FIND_SEGMENT(((*(R21 *)rt_nil_check(l_U_3372))).f_NAME);
if ((l_T_3374 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_U_3372))).f_LINE, rt_str("USES names a segment of the program (4.2): ", 43), ((*(R21 *)rt_nil_check(l_U_3372))).f_NAME);
}
if ((!(((*(R21 *)rt_nil_check(l_U_3372))).f_A == NULL)))
{
r_CHECK_ITEMS_DEFINED(l_T_3374, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_3372))).f_A))).f_A);
r_CHECK_ITEMS_DEFINED(l_T_3374, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_3372))).f_A))).f_B);
r_CHECK_ITEMS_DEFINED(l_T_3374, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_3372))).f_A))).f_C);
r_CHECK_ITEMS_DEFINED(l_T_3374, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_3372))).f_A))).f_D);
r_CHECK_ITEMS_DEFINED(l_T_3374, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_3372))).f_A))).f_E);
}
}
}
l_U_3372 = ((*(R21 *)rt_nil_check(l_U_3372))).f_NEXT;
}
RT_B_TICK();
} L_end3373: ;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SEG_3371;
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = l_SEG_3371;
l_U_3372 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3372 == NULL)) goto L_end3375;
{
if ((!(((*(R21 *)rt_nil_check(l_U_3372))).f_A == NULL)))
{
r_INPUT_IMPORT_CONFLICT(((*(R21 *)rt_nil_check(l_U_3372))).f_A, ((*(R21 *)rt_nil_check(l_U_3372))).f_LINE);
}
l_U_3372 = ((*(R21 *)rt_nil_check(l_U_3372))).f_NEXT;
}
RT_B_TICK();
} L_end3375: ;
}
static R12 * r_ENTER_HOME(R12 * p_Y) { RT_B_TICK(); 
R12 * l_SAVED_3376; memset(&l_SAVED_3376, 0, sizeof l_SAVED_3376);
l_SAVED_3376 = ((*(R7 *)rt_nil_check(g_W))).f_TRSEG;
if (((((*(R12 *)rt_nil_check(p_Y))).f_HOME == NULL) || (((*(R12 *)rt_nil_check(p_Y))).f_HOME == ((*(R7 *)rt_nil_check(g_W))).f_TRSEG)))
{
{ R12 * rv3377 = l_SAVED_3376;
return rv3377; }
}
r_OPEN_SCOPE();
{
R12 * l_X_3378; memset(&l_X_3378, 0, sizeof l_X_3378);
l_X_3378 = ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_HOME))).f_MEMBERS;
for (;;) {
if ((l_X_3378 == NULL)) goto L_end3379;
{
{
R12 * l_A_3380; memset(&l_A_3380, 0, sizeof l_A_3380);
l_A_3380 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_X_3378))).f_KIND, ((*(R12 *)rt_nil_check(l_X_3378))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_3380)), (*(R12 *)rt_nil_check(l_X_3378)), 0);
((*(R12 *)rt_nil_check(l_A_3380))).f_ORIG = r_ORIGINAL(l_X_3378);
r_DEFINE_ALIAS(l_A_3380);
}
l_X_3378 = ((*(R12 *)rt_nil_check(l_X_3378))).f_SNEXT;
}
RT_B_TICK();
} L_end3379: ;
}
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = ((*(R12 *)rt_nil_check(p_Y))).f_HOME;
{ R12 * rv3381 = l_SAVED_3376;
return rv3381; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_ALIAS(R12 * p_A) { RT_B_TICK(); 
rt_int l_B_3382; memset(&l_B_3382, 0, sizeof l_B_3382);
l_B_3382 = r_BUCKET(((*(R12 *)rt_nil_check(p_A))).f_NAME);
((*(R12 *)rt_nil_check(p_A))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_A))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_3382, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_3382, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_A;
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
R12 * l_T_3383; memset(&l_T_3383, 0, sizeof l_T_3383);
l_T_3383 = ((*(R7 *)rt_nil_check(g_W))).f_SEGS;
for (;;) {
if ((l_T_3383 == NULL)) goto L_end3384;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_T_3383))).f_NAME, p_NAME))
{
{ R12 * rv3385 = l_T_3383;
return rv3385; }
}
l_T_3383 = ((*(R12 *)rt_nil_check(l_T_3383))).f_INSTANCES;
}
RT_B_TICK();
} L_end3384: ;
{ R12 * rv3386 = NULL;
return rv3386; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_ITEMS_DEFINED(R12 * p_T, R21 * p_L) { RT_B_TICK(); 
R21 * l_N_3387; memset(&l_N_3387, 0, sizeof l_N_3387);
l_N_3387 = p_L;
for (;;) {
if ((l_N_3387 == NULL)) goto L_end3388;
{
if ((!r_IN_IDENTS(((*(R12 *)rt_nil_check(p_T))).f_USES, ((*(R21 *)rt_nil_check(l_N_3387))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_N_3387))).f_LINE, rt_str("the segment does not define ", 28), ((*(R21 *)rt_nil_check(l_N_3387))).f_NAME);
}
l_N_3387 = ((*(R21 *)rt_nil_check(l_N_3387))).f_NEXT;
}
RT_B_TICK();
} L_end3388: ;
}
static rt_int r_SEG_VISIBLE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_U_3389; memset(&l_U_3389, 0, sizeof l_U_3389);
rt_int l_INPUT_ONLY_3390; memset(&l_INPUT_ONLY_3390, 0, sizeof l_INPUT_ONLY_3390);
l_INPUT_ONLY_3390 = 0;
if (((((((*(R7 *)rt_nil_check(g_W))).f_CURSEG == NULL) || (((*(R12 *)rt_nil_check(p_Y))).f_SEGM == NULL)) || (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL))) || (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
{ rt_int rv3391 = 1;
return rv3391; }
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_SEGM == ((*(R7 *)rt_nil_check(g_W))).f_CURSEG))
{
{ rt_int rv3392 = 1;
return rv3392; }
}
l_U_3389 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CURSEG))).f_DECL))).f_A;
for (;;) {
if ((l_U_3389 == NULL)) goto L_end3393;
{
{
R12 * l_T_3394; memset(&l_T_3394, 0, sizeof l_T_3394);
l_T_3394 = r_FIND_SEGMENT(((*(R21 *)rt_nil_check(l_U_3389))).f_NAME);
if ((!(l_T_3394 == NULL)))
{
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_T_3394))).f_USES, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
if ((((*(R21 *)rt_nil_check(l_U_3389))).f_A == NULL))
{
{ rt_int rv3395 = 1;
return rv3395; }
}
{
R21 * l_I_3396; memset(&l_I_3396, 0, sizeof l_I_3396);
l_I_3396 = ((*(R21 *)rt_nil_check(l_U_3389))).f_A;
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)))
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_I_3396))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3397 = 1;
return rv3397; }
}
else if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_I_3396))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
l_INPUT_ONLY_3390 = 1;
}
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE))
{
if ((((r_IN_IDENTS(((*(R21 *)rt_nil_check(l_I_3396))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME) || r_IN_IDENTS(((*(R21 *)rt_nil_check(l_I_3396))).f_C, r_BASE_NAME(p_Y))) || r_IN_IDENTS(((*(R21 *)rt_nil_check(l_I_3396))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)) || r_FROM_MODULES(((*(R21 *)rt_nil_check(l_I_3396))).f_E, p_Y)))
{
{ rt_int rv3398 = 1;
return rv3398; }
}
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE))
{
if ((r_IN_IDENTS(((*(R21 *)rt_nil_check(l_I_3396))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_NAME) || r_FROM_MODULES(((*(R21 *)rt_nil_check(l_I_3396))).f_E, p_Y)))
{
{ rt_int rv3399 = 1;
return rv3399; }
}
}
else
{
{ rt_int rv3400 = 1;
return rv3400; }
}
}
}
}
}
l_U_3389 = ((*(R21 *)rt_nil_check(l_U_3389))).f_NEXT;
}
RT_B_TICK();
} L_end3393: ;
if (l_INPUT_ONLY_3390)
{
{ rt_int rv3401 = 0;
return rv3401; }
}
r_FAILT(p_LINE, rt_str("not imported by the USES clause of the segment (4.2): ", 54), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static rt_int r_FROM_MODULES(R21 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3402; memset(&l_M_3402, 0, sizeof l_M_3402);
l_M_3402 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((p_MODS == NULL))
{
{ rt_int rv3403 = 0;
return rv3403; }
}
for (;;) {
if ((l_M_3402 == NULL)) goto L_end3404;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_3402))).f_NAME))
{
{ rt_int rv3405 = 1;
return rv3405; }
}
l_M_3402 = ((*(R12 *)rt_nil_check(l_M_3402))).f_MODL;
}
RT_B_TICK();
} L_end3404: ;
{ rt_int rv3406 = 0;
return rv3406; }
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
if ((((*(R21 *)rt_nil_check(g_LAST_33))).f_NEXT == NULL)) goto L_end34;
{
g_LAST_33 = ((*(R21 *)rt_nil_check(g_LAST_33))).f_NEXT;
}
RT_B_TICK();
} L_end34: ;
((*(R21 *)rt_nil_check(g_LAST_33))).f_NEXT = g_MORE_32;
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
