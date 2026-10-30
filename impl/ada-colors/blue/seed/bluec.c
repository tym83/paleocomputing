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
struct R10 { int dummy_; rt_int f_AT; rt_int f_LEN; rt_int f_H; };
struct R9 { int dummy_; rt_int f_KIND; rt_int f_LINE; rt_int f_IV; R10 f_TX; };
struct A11 { rt_int lo[1], hi[1]; R9 *p; };
struct A13 { rt_int lo[1], hi[1]; R12 * *p; };
struct R14 { int dummy_; R15 * f_HEAD; R15 * f_TAIL; };
struct A16 { rt_int lo[1], hi[1]; R14 *p; };
struct R7 { int dummy_; rstr f_ARENA; rt_int f_TOP; A8 f_SRC; rt_int f_NSRC; A11 f_TOKS; rt_int f_NTOKS; rt_int f_POS; A13 f_TABLE; R12 * f_SCOPE; rt_int f_DEPTH; A16 f_OUT; R14 f_CODE; R17 * f_CTXS; R18 * f_CS; R19 * f_IS; rt_int f_NSCOPES; R12 * f_MODL; R20 * f_BINDS; rt_int f_ROUNDED; R21 * f_QUAL; R21 * f_SQUAL; rt_int f_TYPECHECK; rt_int f_CHARSETS; rt_int f_IN_RECORD; rt_int f_IN_TYPEDECL; rt_int f_REPCONV; R21 * f_LDONE; R21 * f_NEW_OK; rt_int f_START_IO; rt_int f_MACHINE; rt_int f_SERIAL; R21 * f_EXCS; R22 * f_TY_INT; R22 * f_TY_BOOL; R22 * f_TY_STR; R22 * f_TY_VOID; R22 * f_TY_NIL; R22 * f_TY_ASCII; R22 * f_TY_FLOAT; R22 * f_TY_BITS; R22 * f_TY_ROUNDINGS; R22 * f_TY_TYPE; R12 * f_PENDING; R21 * f_CNAMES; R12 * f_ENUMS; R12 * f_SEGS; R12 * f_CURSEG; R12 * f_TRSEG; R12 * f_ARRAYS; R12 * f_RECS; };
struct R23 { int dummy_; rt_int f_OK; rt_int f_V; };
struct R26 { int dummy_; R10 f_C; R22 * f_T; rt_int f_LVAL; R10 f_SELF; };
struct R21 { int dummy_; rt_int f_KIND; rt_int f_LINE; rt_int f_IV; R10 f_NAME; R21 * f_A; R21 * f_B; R21 * f_C; R21 * f_D; R21 * f_E; R21 * f_NEXT; rt_int f_FL; };
struct R15 { int dummy_; R10 f_T; R15 * f_NEXT; };
struct R12 { int dummy_; rt_int f_KIND; rt_int f_DEPTH; rt_int f_LEVEL; R10 f_NAME; R22 * f_T; R10 f_ACCESS; R10 f_FIELD; rt_int f_INPUT; rt_int f_BYREF; rt_int f_HASMV; rt_int f_MV; R21 * f_TS; rt_int f_BUSY; R10 f_FWD; R28 * f_PARAMS; R22 * f_RESULT; R21 * f_DECL; R10 f_PREFIX; R12 * f_MODL; rt_int f_EXPORTED; rt_int f_GENERIC; rt_int f_FRAMED; R21 * f_USES; R12 * f_INSTANCES; R20 * f_BINDINGS; R12 * f_ORIG; R12 * f_MEMBERS; R12 * f_SAVED; rt_int f_OWNER; rt_int f_WITHV; rt_int f_LAZY; R12 * f_SEGM; R12 * f_HOME; R12 * f_CHAIN; R12 * f_SNEXT; };
struct R18 { int dummy_; rt_int f_LEVEL; R12 * f_R; rt_int f_FRAMED; R10 f_FTYPE; R14 f_FIELDS; R18 * f_UP; R21 * f_IMPORTS; R21 * f_SIGNALS; R22 * f_RESULT; rt_int f_IS_PATH; R10 f_COPYOUT; };
struct R19 { int dummy_; rt_int f_ID; R21 * f_IMPORTS; R21 * f_SIGNALS; R10 f_NAME; R19 * f_UP; };
struct R22 { int dummy_; rt_int f_KIND; rt_int f_SCALE; R10 f_LO_C; R10 f_HI_C; R23 f_MLO; R23 f_MHI; rt_int f_RLEVEL; R10 f_LEN_C; R23 f_MLEN; R10 f_GEN; R22 * f_BASE; R22 * f_ELEM; R22 * f_TARGET; R21 * f_TARGET_TS; R24 * f_FIELDS; R21 * f_LITS; rt_int f_NLITS; rt_int f_UNORDERED; R25 * f_BOUNDS; rt_int f_DIMS; R25 * f_ARGS; R10 f_NAME; R10 f_CNAME; R12 * f_MODL; R21 * f_REPS; R12 * f_DECL; R10 f_GENP; };
struct R20 { int dummy_; R10 f_NAME; R22 * f_T; R10 f_C; rt_int f_HASMV; rt_int f_MV; R12 * f_R; R20 * f_NEXT; };
struct R25 { int dummy_; R10 f_LO; R10 f_HI; R23 f_MLO; R23 f_MHI; rt_int f_ANYARG; R25 * f_NEXT; };
struct R24 { int dummy_; R10 f_NAME; R10 f_CNAME; R22 * f_T; rt_int f_KIND; R10 f_TAGF; R21 * f_LABELS; R24 * f_NEXT; };
struct fr_r_MANIFEST_ARITH { void *up; R10 p_OP; rt_int p_A; rt_int p_B; rt_int p_LINE; rt_int l_R_1328; };
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
static int x_OVERFLOW;
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
static void r_PARSE_RECORD_REP(R21 * p_R);
static R21 * r_PARSE_PACKING_SPEC(void);
static R21 * r_PARSE_ELEMENT_SPEC(void);
static R21 * r_PARSE_VARIANT_PACKING(void);
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
static void r_CONNECT_KNOWN(R21 * p_E, R21 * p_H);
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
static void r_PREDEF_BOUNDS_DEF(void);
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
static R10 r_RECORD_NAME(R12 * p_Y);
static R22 * r_TARGET(R22 * p_T);
static R10 r_CTYPE(R22 * p_T);
static rt_int r_IS_GENERIC_NODE(R21 * p_E);
static R24 * r_NEW_FIELD(R10 p_NAME, R22 * p_T, rt_int p_KIND);
static R24 * r_FIND_FIELD(R22 * p_T, R10 p_NAME);
static R24 * r_FIND_VFIELD(R22 * p_T, R10 p_NAME);
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL);
static void r_RECORD_FIELDS(R22 * p_T, R21 * p_DECLS, R10 p_TAGN, R21 * p_LABELS, R24 * *p_TAIL);
static void r_CHECK_VARIANT_NAMES(R21 * p_D, R22 * p_TT);
static R22 * r_RESOLVE_RECORD(R21 * p_TS, R10 p_CNAME, R12 * p_Y, R21 * p_FORMALS);
static rt_int r_IS_RECORD_REP(R22 * p_T);
static void r_CHECK_RECORD_REP(R22 * p_T, rt_int p_LINE);
static void r_CHECK_ELEMENTS(R22 * p_T, R21 * p_L, R10 p_TAGN, R21 * p_LABELS, R21 * *p_SEEN);
static R10 r_RECORD_SIZE(R22 * p_T, R10 p_C);
static R10 r_FIELD_SIZE_C(R24 * p_F, R10 p_C);
static R10 r_LAYOUT_ALL(R22 * p_T, R10 p_C, R10 p_TAGN, rt_int p_MODE);
static R10 r_LAYOUT_PARTS(R22 * p_T, R10 p_C);
static R10 r_LAYOUT_SPEC(R22 * p_T, R10 p_C, R21 * p_P, R10 p_TAGN);
static R10 r_LAYOUT_VARIANTS(R22 * p_T, R10 p_C, R10 p_TAGN);
static rt_int r_ARG_MANIFEST(R22 * p_T, R24 * p_F);
static rt_int r_IS_ANY_TAG(R21 * p_A);
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
static R23 r_ATTR_MANIFEST(R21 * p_E);
static R23 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R10 p_NAME);
static rt_int r_MANIFEST_ARITH(R10 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE);
static rt_int r_MANIFEST_INT(R21 * p_E);
static rt_int r_BOOL_INT(rt_int p_B);
static R26 r_EXPR(R21 * p_E, R22 * p_WANT);
static R10 r_INT_EXPR(R21 * p_E);
static R10 r_BOOL_EXPR(R21 * p_E);
static R22 * r_BITS_TYPE(rt_int p_LEN);
static R26 r_REAL_LITERAL(R21 * p_E);
static rt_int r_FLOAT_LITERAL_FITS(R21 * p_E, rt_int p_P);
static void r_CHECK_FIXED_LITERAL(R21 * p_E);
static R26 r_STRING_LITERAL(R21 * p_E);
static R22 * r_RESOLVE_USER_NAME(R10 p_NAME, rt_int p_LINE);
static R26 r_ENUM_LITERAL(R21 * p_E, R22 * p_WANT);
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT);
static rt_int r_NAMES_OBJECT(R10 p_NAME);
static rt_int r_IS_STD_REPTYPE(R10 p_NAME);
static rt_int r_IS_REPTYPE_NAME(R10 p_NAME);
static R26 r_REP_CONVERTER(R21 * p_S, R21 * p_E, rt_int p_LINE);
static R26 r_NAME_EXPR(R21 * p_E, R22 * p_WANT);
static R26 r_FIELD_EXPR(R21 * p_E);
static rt_int r_IS_FIXED_LITERAL(R21 * p_A);
static rt_int r_IS_NUMBER_LITERAL(R21 * p_A);
static rt_int r_IS_TYPE_WORD(R10 p_NAME);
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R21 * p_BASE, rt_int p_LINE);
static R23 r_TAG_VALUE(R22 * p_T, R10 p_TAGN);
static rt_int r_LABELS_HAVE(R21 * p_L, rt_int p_V, R22 * p_T);
static R26 r_VALUE_OR_TYPE(R21 * p_E);
static R26 r_INDEX_EXPR(R21 * p_E);
static R10 r_INDEX_VALUE(R21 * p_E);
static R10 r_INDEX_OF(R26 p_V, rt_int p_LINE);
static R26 r_INDEX_EXPR2(R21 * p_E);
static R10 r_OP_NAME(R10 p_OP, rt_int p_UNARY);
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT);
static R27 * r_NODE_ARG(R21 * p_E, rt_int p_MODE, R27 * p_NEXT);
static R12 * r_USER_OPERATOR(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE);
static rt_int r_HAS_USER_ROUTINE(R10 p_NAME);
static R27 * r_QUAL_ARGS(rt_int p_LINE);
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
static rt_int r_IDENTICAL_TYPE(R22 * p_A, R22 * p_B);
static R10 r_TARGET_ARGS_CHECK(R22 * p_RT, R22 * p_VT, R10 p_C);
static rt_int r_SAME_EXTENTS(R22 * p_A, R22 * p_B);
static rt_int r_HAS_VALUES(R22 * p_T);
static R22 * r_FLOAT_TYPE(rt_int p_P);
static R10 r_SINGLE_C(rt_int p_P);
static R10 r_FLOAT_TRUNC(void);
static rt_int r_QUAL_PREC(void);
static R10 r_FLOAT_OP(R10 p_OP, R10 p_A, R10 p_B, R22 * p_T);
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
static rt_int r_PACKING_OF(R22 * p_T);
static rt_int r_PACKING_VALUE(R10 p_NAME);
static R26 r_PACKING_LITERAL(rt_int p_MODE, rt_int p_LINE);
static rt_int r_PACK_SLOT(rt_int p_ES, rt_int p_MODE);
static rt_int r_PACK_SIZE(rt_int p_N, rt_int p_ES, rt_int p_MODE);
static rt_int r_CHAR_SIZE(R22 * p_T);
static R10 r_CHAR_REPS(R22 * p_T);
static rt_int r_MAX_LENGTH(void);
static rt_int r_MAX_FLOAT_PRECISION(void);
static rt_int r_IMP_PRECISION_OF(rt_int p_P);
static rt_int r_FLOAT_FORMAT(rt_int p_P, R10 p_NAME);
static R23 r_STATIC_SIZE(R22 * p_T);
static R26 r_ATTRIBUTE(R26 p_B, R10 p_NAME, rt_int p_LINE);
static R26 r_ARRAY_SHAPE(R26 p_B, R10 p_NAME);
static R21 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE);
static R26 r_SIZE_OF(R22 * p_T, R10 p_C);
static R26 r_TYPE_ATTRIBUTE(R10 p_TNAME, R10 p_NAME, rt_int p_LINE);
static R26 r_TYPE_VALUE(R10 p_TNAME, rt_int p_LINE);
static R26 r_TYPE_VALUE_OF(R22 * p_T);
static rt_int r_IS_TYPE_NAME(R21 * p_E);
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R10 p_TNAME, R10 p_A, R10 p_B, rt_int p_LINE);
static R26 r_RECORD_CONSTRUCTOR(R21 * p_E, R22 * p_WANT);
static R21 * r_FIND_INIT(R21 * p_L, R10 p_NAME);
static R26 r_ARRAY_CONSTRUCTOR(R21 * p_E, R22 * p_WANT);
static void r_CHECK_SHAPE(R21 * p_E, rt_int p_DIMS);
static rt_int r_SAME_SHAPE(R21 * p_A, R21 * p_B);
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
static R10 r_OPERATOR_SYMBOL(R10 p_NAME);
static R26 r_OPERATOR_BUILTIN(R21 * p_E, R22 * p_WANT);
static R21 * r_QUALIFIED(R21 * p_X, R21 * p_Q, rt_int p_LINE);
static rt_int r_IS_ROUNDING_NAME(R10 p_NAME);
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
static R10 r_CLASS_OPERATION(R10 p_NAME);
static R10 r_WHERE_SHORT_NAME(R10 p_NAME);
static R12 * r_BOUND_ROUTINE(R10 p_NAME);
static rt_int r_CANDIDATE(R12 * p_Y, R10 p_NAME);
static R12 * r_FIND_ROUTINE(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST);
static rt_int r_SEEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP);
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP);
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
static R12 * r_MEMBER_TYPE(R12 * p_M, R10 p_NAME);
static rt_int r_IS_STRUCTURED(R22 * p_T);
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B);
static rt_int r_STATIC_GENERIC(R21 * p_TS);
static R21 * r_OWN_NAMES(R21 * p_R);
static rt_int r_DECLARES_DERIVED(R21 * p_L);
static R22 * r_MARK_GENP(R22 * p_T, R10 p_NAME);
static R12 * r_CUR_GENERIC(void);
static rt_int r_IN_WHERE(R12 * p_G, R10 p_NAME);
static void r_REQUIRE_WHERE(R10 p_NAME, rt_int p_LINE);
static void r_REQUIRE_WHERE_SUBSET(R12 * p_Y, rt_int p_LINE);
static rt_int r_HAS_GEN_ARG(R21 * p_A);
static void r_ROUTINE_HEADER(R12 * p_Y);
static void r_ROUTINE_HEADER1(R12 * p_Y);
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
static rt_int r_IS_OPERATOR_NAME(R10 p_NAME);
static R21 * r_SUBST_FORMALS(R21 * p_TS, R21 * p_FORMALS, R21 * p_ARGS);
static R21 * r_COPY_NODE(R21 * p_N);
static rt_int r_IN_IDENTS(R21 * p_L, R10 p_NAME);
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE);
static void r_COMPUTE_USES(R12 * p_Y);
static rt_int r_LOCAL_MODULE_EXPORTS(R21 * p_B, R10 p_NAME);
static void r_ROUTINE_USES(R21 * p_RS);
static void r_IMPORTS_KNOWN(R21 * p_L, rt_int p_INOUT);
static void r_INPUT_IMPORT_CONFLICT(R21 * p_ITEMS, rt_int p_LINE);
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
static void r_REFERS(R21 * p_L, R10 p_TARGET, R21 * p_DECLS, R21 * *p_SEEN, rt_int *p_FOUND);
static rt_int r_TAG_MISUSED(R21 * p_L, R10 p_NAME);
static rt_int r_TAG_MISUSED1(R21 * p_N, R10 p_NAME);
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
static R21 * r_NAME_REF(R10 p_NAME, rt_int p_OWNER, R21 * p_A, R21 * p_L);
static R21 * r_ROUTINE_DATA(R10 p_NAME, rt_int p_INOUT);
static R21 * r_DATA_OF(R12 * p_Y, rt_int p_INOUT, rt_int p_DEPTH);
static rt_int r_HAS_REF(R21 * p_L, R10 p_NAME, rt_int p_OWNER);
static R21 * r_INTERSECT_REFS(R21 * p_A, R21 * p_B);
static void r_CHECK_INTERFERENCE(R21 * p_NAMES, R21 * p_CALLS, rt_int p_LINE, rt_int p_ASSERTION);
static rt_int r_IN_HANDLERS(R21 * p_HS, R10 p_NAME);
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
static R10 r_VALUE_COMPARE(R26 p_A, R26 p_B, R10 p_OP);
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
static void r_BEGIN_SEGMENT(R21 * p_S);
static R12 * r_ENTER_HOME(R12 * p_Y);
static void r_DEFINE_ALIAS(R12 * p_A);
static void r_LEAVE_HOME(R12 * p_Y, R12 * p_SAVED);
static R12 * r_FIND_SEGMENT(R10 p_NAME);
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
static void S_R7(R7 *d, R7 s, int any) {  rt_b_assign(&d->f_ARENA, s.f_ARENA); d->f_TOP = s.f_TOP; S_A8(&d->f_SRC, s.f_SRC, 0); d->f_NSRC = s.f_NSRC; S_A11(&d->f_TOKS, s.f_TOKS, 0); d->f_NTOKS = s.f_NTOKS; d->f_POS = s.f_POS; S_A13(&d->f_TABLE, s.f_TABLE, 0); d->f_SCOPE = s.f_SCOPE; d->f_DEPTH = s.f_DEPTH; S_A16(&d->f_OUT, s.f_OUT, 0); S_R14(&d->f_CODE, s.f_CODE, 0); d->f_CTXS = s.f_CTXS; d->f_CS = s.f_CS; d->f_IS = s.f_IS; d->f_NSCOPES = s.f_NSCOPES; d->f_MODL = s.f_MODL; d->f_BINDS = s.f_BINDS; d->f_ROUNDED = s.f_ROUNDED; d->f_QUAL = s.f_QUAL; d->f_SQUAL = s.f_SQUAL; d->f_TYPECHECK = s.f_TYPECHECK; d->f_CHARSETS = s.f_CHARSETS; d->f_IN_RECORD = s.f_IN_RECORD; d->f_IN_TYPEDECL = s.f_IN_TYPEDECL; d->f_REPCONV = s.f_REPCONV; d->f_LDONE = s.f_LDONE; d->f_NEW_OK = s.f_NEW_OK; d->f_START_IO = s.f_START_IO; d->f_MACHINE = s.f_MACHINE; d->f_SERIAL = s.f_SERIAL; d->f_EXCS = s.f_EXCS; d->f_TY_INT = s.f_TY_INT; d->f_TY_BOOL = s.f_TY_BOOL; d->f_TY_STR = s.f_TY_STR; d->f_TY_VOID = s.f_TY_VOID; d->f_TY_NIL = s.f_TY_NIL; d->f_TY_ASCII = s.f_TY_ASCII; d->f_TY_FLOAT = s.f_TY_FLOAT; d->f_TY_BITS = s.f_TY_BITS; d->f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d->f_TY_TYPE = s.f_TY_TYPE; d->f_PENDING = s.f_PENDING; d->f_CNAMES = s.f_CNAMES; d->f_ENUMS = s.f_ENUMS; d->f_SEGS = s.f_SEGS; d->f_CURSEG = s.f_CURSEG; d->f_TRSEG = s.f_TRSEG; d->f_ARRAYS = s.f_ARRAYS; d->f_RECS = s.f_RECS; }
static int E_R7(R7 a, R7 b) { return 1 && rt_b_eq(a.f_ARENA, b.f_ARENA) && (a.f_TOP == b.f_TOP) && E_A8(a.f_SRC, b.f_SRC) && (a.f_NSRC == b.f_NSRC) && E_A11(a.f_TOKS, b.f_TOKS) && (a.f_NTOKS == b.f_NTOKS) && (a.f_POS == b.f_POS) && E_A13(a.f_TABLE, b.f_TABLE) && (a.f_SCOPE == b.f_SCOPE) && (a.f_DEPTH == b.f_DEPTH) && E_A16(a.f_OUT, b.f_OUT) && E_R14(a.f_CODE, b.f_CODE) && (a.f_CTXS == b.f_CTXS) && (a.f_CS == b.f_CS) && (a.f_IS == b.f_IS) && (a.f_NSCOPES == b.f_NSCOPES) && (a.f_MODL == b.f_MODL) && (a.f_BINDS == b.f_BINDS) && (a.f_ROUNDED == b.f_ROUNDED) && (a.f_QUAL == b.f_QUAL) && (a.f_SQUAL == b.f_SQUAL) && (a.f_TYPECHECK == b.f_TYPECHECK) && (a.f_CHARSETS == b.f_CHARSETS) && (a.f_IN_RECORD == b.f_IN_RECORD) && (a.f_IN_TYPEDECL == b.f_IN_TYPEDECL) && (a.f_REPCONV == b.f_REPCONV) && (a.f_LDONE == b.f_LDONE) && (a.f_NEW_OK == b.f_NEW_OK) && (a.f_START_IO == b.f_START_IO) && (a.f_MACHINE == b.f_MACHINE) && (a.f_SERIAL == b.f_SERIAL) && (a.f_EXCS == b.f_EXCS) && (a.f_TY_INT == b.f_TY_INT) && (a.f_TY_BOOL == b.f_TY_BOOL) && (a.f_TY_STR == b.f_TY_STR) && (a.f_TY_VOID == b.f_TY_VOID) && (a.f_TY_NIL == b.f_TY_NIL) && (a.f_TY_ASCII == b.f_TY_ASCII) && (a.f_TY_FLOAT == b.f_TY_FLOAT) && (a.f_TY_BITS == b.f_TY_BITS) && (a.f_TY_ROUNDINGS == b.f_TY_ROUNDINGS) && (a.f_TY_TYPE == b.f_TY_TYPE) && (a.f_PENDING == b.f_PENDING) && (a.f_CNAMES == b.f_CNAMES) && (a.f_ENUMS == b.f_ENUMS) && (a.f_SEGS == b.f_SEGS) && (a.f_CURSEG == b.f_CURSEG) && (a.f_TRSEG == b.f_TRSEG) && (a.f_ARRAYS == b.f_ARRAYS) && (a.f_RECS == b.f_RECS); }
static R7 C_R7(R7 s) { R7 d = s;
 d.f_ARENA = rt_str_copy(s.f_ARENA); d.f_TOP = s.f_TOP; d.f_SRC = C_A8(s.f_SRC); d.f_NSRC = s.f_NSRC; d.f_TOKS = C_A11(s.f_TOKS); d.f_NTOKS = s.f_NTOKS; d.f_POS = s.f_POS; d.f_TABLE = C_A13(s.f_TABLE); d.f_SCOPE = s.f_SCOPE; d.f_DEPTH = s.f_DEPTH; d.f_OUT = C_A16(s.f_OUT); d.f_CODE = C_R14(s.f_CODE); d.f_CTXS = s.f_CTXS; d.f_CS = s.f_CS; d.f_IS = s.f_IS; d.f_NSCOPES = s.f_NSCOPES; d.f_MODL = s.f_MODL; d.f_BINDS = s.f_BINDS; d.f_ROUNDED = s.f_ROUNDED; d.f_QUAL = s.f_QUAL; d.f_SQUAL = s.f_SQUAL; d.f_TYPECHECK = s.f_TYPECHECK; d.f_CHARSETS = s.f_CHARSETS; d.f_IN_RECORD = s.f_IN_RECORD; d.f_IN_TYPEDECL = s.f_IN_TYPEDECL; d.f_REPCONV = s.f_REPCONV; d.f_LDONE = s.f_LDONE; d.f_NEW_OK = s.f_NEW_OK; d.f_START_IO = s.f_START_IO; d.f_MACHINE = s.f_MACHINE; d.f_SERIAL = s.f_SERIAL; d.f_EXCS = s.f_EXCS; d.f_TY_INT = s.f_TY_INT; d.f_TY_BOOL = s.f_TY_BOOL; d.f_TY_STR = s.f_TY_STR; d.f_TY_VOID = s.f_TY_VOID; d.f_TY_NIL = s.f_TY_NIL; d.f_TY_ASCII = s.f_TY_ASCII; d.f_TY_FLOAT = s.f_TY_FLOAT; d.f_TY_BITS = s.f_TY_BITS; d.f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d.f_TY_TYPE = s.f_TY_TYPE; d.f_PENDING = s.f_PENDING; d.f_CNAMES = s.f_CNAMES; d.f_ENUMS = s.f_ENUMS; d.f_SEGS = s.f_SEGS; d.f_CURSEG = s.f_CURSEG; d.f_TRSEG = s.f_TRSEG; d.f_ARRAYS = s.f_ARRAYS; d.f_RECS = s.f_RECS; return d; }
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
static void S_R12(R12 *d, R12 s, int any) {  d->f_KIND = s.f_KIND; d->f_DEPTH = s.f_DEPTH; d->f_LEVEL = s.f_LEVEL; S_R10(&d->f_NAME, s.f_NAME, 0); d->f_T = s.f_T; S_R10(&d->f_ACCESS, s.f_ACCESS, 0); S_R10(&d->f_FIELD, s.f_FIELD, 0); d->f_INPUT = s.f_INPUT; d->f_BYREF = s.f_BYREF; d->f_HASMV = s.f_HASMV; d->f_MV = s.f_MV; d->f_TS = s.f_TS; d->f_BUSY = s.f_BUSY; S_R10(&d->f_FWD, s.f_FWD, 0); d->f_PARAMS = s.f_PARAMS; d->f_RESULT = s.f_RESULT; d->f_DECL = s.f_DECL; S_R10(&d->f_PREFIX, s.f_PREFIX, 0); d->f_MODL = s.f_MODL; d->f_EXPORTED = s.f_EXPORTED; d->f_GENERIC = s.f_GENERIC; d->f_FRAMED = s.f_FRAMED; d->f_USES = s.f_USES; d->f_INSTANCES = s.f_INSTANCES; d->f_BINDINGS = s.f_BINDINGS; d->f_ORIG = s.f_ORIG; d->f_MEMBERS = s.f_MEMBERS; d->f_SAVED = s.f_SAVED; d->f_OWNER = s.f_OWNER; d->f_WITHV = s.f_WITHV; d->f_LAZY = s.f_LAZY; d->f_SEGM = s.f_SEGM; d->f_HOME = s.f_HOME; d->f_CHAIN = s.f_CHAIN; d->f_SNEXT = s.f_SNEXT; }
static int E_R12(R12 a, R12 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_DEPTH == b.f_DEPTH) && (a.f_LEVEL == b.f_LEVEL) && E_R10(a.f_NAME, b.f_NAME) && (a.f_T == b.f_T) && E_R10(a.f_ACCESS, b.f_ACCESS) && E_R10(a.f_FIELD, b.f_FIELD) && (a.f_INPUT == b.f_INPUT) && (a.f_BYREF == b.f_BYREF) && (a.f_HASMV == b.f_HASMV) && (a.f_MV == b.f_MV) && (a.f_TS == b.f_TS) && (a.f_BUSY == b.f_BUSY) && E_R10(a.f_FWD, b.f_FWD) && (a.f_PARAMS == b.f_PARAMS) && (a.f_RESULT == b.f_RESULT) && (a.f_DECL == b.f_DECL) && E_R10(a.f_PREFIX, b.f_PREFIX) && (a.f_MODL == b.f_MODL) && (a.f_EXPORTED == b.f_EXPORTED) && (a.f_GENERIC == b.f_GENERIC) && (a.f_FRAMED == b.f_FRAMED) && (a.f_USES == b.f_USES) && (a.f_INSTANCES == b.f_INSTANCES) && (a.f_BINDINGS == b.f_BINDINGS) && (a.f_ORIG == b.f_ORIG) && (a.f_MEMBERS == b.f_MEMBERS) && (a.f_SAVED == b.f_SAVED) && (a.f_OWNER == b.f_OWNER) && (a.f_WITHV == b.f_WITHV) && (a.f_LAZY == b.f_LAZY) && (a.f_SEGM == b.f_SEGM) && (a.f_HOME == b.f_HOME) && (a.f_CHAIN == b.f_CHAIN) && (a.f_SNEXT == b.f_SNEXT); }
static R12 C_R12(R12 s) { R12 d = s;
 d.f_KIND = s.f_KIND; d.f_DEPTH = s.f_DEPTH; d.f_LEVEL = s.f_LEVEL; d.f_NAME = C_R10(s.f_NAME); d.f_T = s.f_T; d.f_ACCESS = C_R10(s.f_ACCESS); d.f_FIELD = C_R10(s.f_FIELD); d.f_INPUT = s.f_INPUT; d.f_BYREF = s.f_BYREF; d.f_HASMV = s.f_HASMV; d.f_MV = s.f_MV; d.f_TS = s.f_TS; d.f_BUSY = s.f_BUSY; d.f_FWD = C_R10(s.f_FWD); d.f_PARAMS = s.f_PARAMS; d.f_RESULT = s.f_RESULT; d.f_DECL = s.f_DECL; d.f_PREFIX = C_R10(s.f_PREFIX); d.f_MODL = s.f_MODL; d.f_EXPORTED = s.f_EXPORTED; d.f_GENERIC = s.f_GENERIC; d.f_FRAMED = s.f_FRAMED; d.f_USES = s.f_USES; d.f_INSTANCES = s.f_INSTANCES; d.f_BINDINGS = s.f_BINDINGS; d.f_ORIG = s.f_ORIG; d.f_MEMBERS = s.f_MEMBERS; d.f_SAVED = s.f_SAVED; d.f_OWNER = s.f_OWNER; d.f_WITHV = s.f_WITHV; d.f_LAZY = s.f_LAZY; d.f_SEGM = s.f_SEGM; d.f_HOME = s.f_HOME; d.f_CHAIN = s.f_CHAIN; d.f_SNEXT = s.f_SNEXT; return d; }
static void S_R18(R18 *d, R18 s, int any) {  d->f_LEVEL = s.f_LEVEL; d->f_R = s.f_R; d->f_FRAMED = s.f_FRAMED; S_R10(&d->f_FTYPE, s.f_FTYPE, 0); S_R14(&d->f_FIELDS, s.f_FIELDS, 0); d->f_UP = s.f_UP; d->f_IMPORTS = s.f_IMPORTS; d->f_SIGNALS = s.f_SIGNALS; d->f_RESULT = s.f_RESULT; d->f_IS_PATH = s.f_IS_PATH; S_R10(&d->f_COPYOUT, s.f_COPYOUT, 0); }
static int E_R18(R18 a, R18 b) { return 1 && (a.f_LEVEL == b.f_LEVEL) && (a.f_R == b.f_R) && (a.f_FRAMED == b.f_FRAMED) && E_R10(a.f_FTYPE, b.f_FTYPE) && E_R14(a.f_FIELDS, b.f_FIELDS) && (a.f_UP == b.f_UP) && (a.f_IMPORTS == b.f_IMPORTS) && (a.f_SIGNALS == b.f_SIGNALS) && (a.f_RESULT == b.f_RESULT) && (a.f_IS_PATH == b.f_IS_PATH) && E_R10(a.f_COPYOUT, b.f_COPYOUT); }
static R18 C_R18(R18 s) { R18 d = s;
 d.f_LEVEL = s.f_LEVEL; d.f_R = s.f_R; d.f_FRAMED = s.f_FRAMED; d.f_FTYPE = C_R10(s.f_FTYPE); d.f_FIELDS = C_R14(s.f_FIELDS); d.f_UP = s.f_UP; d.f_IMPORTS = s.f_IMPORTS; d.f_SIGNALS = s.f_SIGNALS; d.f_RESULT = s.f_RESULT; d.f_IS_PATH = s.f_IS_PATH; d.f_COPYOUT = C_R10(s.f_COPYOUT); return d; }
static void S_R19(R19 *d, R19 s, int any) {  d->f_ID = s.f_ID; d->f_IMPORTS = s.f_IMPORTS; d->f_SIGNALS = s.f_SIGNALS; S_R10(&d->f_NAME, s.f_NAME, 0); d->f_UP = s.f_UP; }
static int E_R19(R19 a, R19 b) { return 1 && (a.f_ID == b.f_ID) && (a.f_IMPORTS == b.f_IMPORTS) && (a.f_SIGNALS == b.f_SIGNALS) && E_R10(a.f_NAME, b.f_NAME) && (a.f_UP == b.f_UP); }
static R19 C_R19(R19 s) { R19 d = s;
 d.f_ID = s.f_ID; d.f_IMPORTS = s.f_IMPORTS; d.f_SIGNALS = s.f_SIGNALS; d.f_NAME = C_R10(s.f_NAME); d.f_UP = s.f_UP; return d; }
static void S_R22(R22 *d, R22 s, int any) {  d->f_KIND = s.f_KIND; d->f_SCALE = s.f_SCALE; S_R10(&d->f_LO_C, s.f_LO_C, 0); S_R10(&d->f_HI_C, s.f_HI_C, 0); S_R23(&d->f_MLO, s.f_MLO, 0); S_R23(&d->f_MHI, s.f_MHI, 0); d->f_RLEVEL = s.f_RLEVEL; S_R10(&d->f_LEN_C, s.f_LEN_C, 0); S_R23(&d->f_MLEN, s.f_MLEN, 0); S_R10(&d->f_GEN, s.f_GEN, 0); d->f_BASE = s.f_BASE; d->f_ELEM = s.f_ELEM; d->f_TARGET = s.f_TARGET; d->f_TARGET_TS = s.f_TARGET_TS; d->f_FIELDS = s.f_FIELDS; d->f_LITS = s.f_LITS; d->f_NLITS = s.f_NLITS; d->f_UNORDERED = s.f_UNORDERED; d->f_BOUNDS = s.f_BOUNDS; d->f_DIMS = s.f_DIMS; d->f_ARGS = s.f_ARGS; S_R10(&d->f_NAME, s.f_NAME, 0); S_R10(&d->f_CNAME, s.f_CNAME, 0); d->f_MODL = s.f_MODL; d->f_REPS = s.f_REPS; d->f_DECL = s.f_DECL; S_R10(&d->f_GENP, s.f_GENP, 0); }
static int E_R22(R22 a, R22 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_SCALE == b.f_SCALE) && E_R10(a.f_LO_C, b.f_LO_C) && E_R10(a.f_HI_C, b.f_HI_C) && E_R23(a.f_MLO, b.f_MLO) && E_R23(a.f_MHI, b.f_MHI) && (a.f_RLEVEL == b.f_RLEVEL) && E_R10(a.f_LEN_C, b.f_LEN_C) && E_R23(a.f_MLEN, b.f_MLEN) && E_R10(a.f_GEN, b.f_GEN) && (a.f_BASE == b.f_BASE) && (a.f_ELEM == b.f_ELEM) && (a.f_TARGET == b.f_TARGET) && (a.f_TARGET_TS == b.f_TARGET_TS) && (a.f_FIELDS == b.f_FIELDS) && (a.f_LITS == b.f_LITS) && (a.f_NLITS == b.f_NLITS) && (a.f_UNORDERED == b.f_UNORDERED) && (a.f_BOUNDS == b.f_BOUNDS) && (a.f_DIMS == b.f_DIMS) && (a.f_ARGS == b.f_ARGS) && E_R10(a.f_NAME, b.f_NAME) && E_R10(a.f_CNAME, b.f_CNAME) && (a.f_MODL == b.f_MODL) && (a.f_REPS == b.f_REPS) && (a.f_DECL == b.f_DECL) && E_R10(a.f_GENP, b.f_GENP); }
static R22 C_R22(R22 s) { R22 d = s;
 d.f_KIND = s.f_KIND; d.f_SCALE = s.f_SCALE; d.f_LO_C = C_R10(s.f_LO_C); d.f_HI_C = C_R10(s.f_HI_C); d.f_MLO = C_R23(s.f_MLO); d.f_MHI = C_R23(s.f_MHI); d.f_RLEVEL = s.f_RLEVEL; d.f_LEN_C = C_R10(s.f_LEN_C); d.f_MLEN = C_R23(s.f_MLEN); d.f_GEN = C_R10(s.f_GEN); d.f_BASE = s.f_BASE; d.f_ELEM = s.f_ELEM; d.f_TARGET = s.f_TARGET; d.f_TARGET_TS = s.f_TARGET_TS; d.f_FIELDS = s.f_FIELDS; d.f_LITS = s.f_LITS; d.f_NLITS = s.f_NLITS; d.f_UNORDERED = s.f_UNORDERED; d.f_BOUNDS = s.f_BOUNDS; d.f_DIMS = s.f_DIMS; d.f_ARGS = s.f_ARGS; d.f_NAME = C_R10(s.f_NAME); d.f_CNAME = C_R10(s.f_CNAME); d.f_MODL = s.f_MODL; d.f_REPS = s.f_REPS; d.f_DECL = s.f_DECL; d.f_GENP = C_R10(s.f_GENP); return d; }
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
rt_int l_N_31; memset(&l_N_31, 0, sizeof l_N_31);
l_N_31 = (rt_int)(8);
rstr l_B_32; memset(&l_B_32, 0, sizeof l_B_32);
l_B_32 = rt_b_str_new(((rt_int)8LL), 1);
rt_b_assign(&l_B_32, rt_b_zeros(l_N_31));
rt_int l_V_33; memset(&l_V_33, 0, sizeof l_V_33);
l_V_33 = p_C;
{ rt_int it35_lo = ((rt_int)0LL), it35_hi = rt_sub(l_N_31, ((rt_int)1LL));
for (rt_int it35 = it35_lo; it35 <= it35_hi; it35++) {
{
if ((rt_rem(l_V_33, ((rt_int)2LL)) == ((rt_int)1LL)))
{
rt_b_slice_assign(&l_B_32, rt_sub(rt_sub(l_N_31, ((rt_int)1LL)), it35), rt_sub(rt_sub(l_N_31, ((rt_int)1LL)), it35), rt_str("1", 1));
}
l_V_33 = rt_quot(l_V_33, ((rt_int)2LL));
}
RT_B_TICK();
if (it35 == it35_hi) break;
} } L_end34: ;
if ((l_V_33 == ((rt_int)0LL)))
{
{
{ rstr rv36 = rt_b_chars_of_bits(l_B_32, 7, 1, NULL, 128);
return rv36; }
}
}
}
{ rstr rv37 = rt_str("\?", 1);
return rv37; }
rt_raise(RT_X_INIT);
}
static rt_int r_CODE_OF(rstr p_S) { RT_B_TICK(); 
{ rt_int rv38 = rt_b_int_of_bits(rt_b_bits_of_chars(p_S, 7, 1, NULL, 128));
return rv38; }
rt_raise(RT_X_INIT);
}
static rt_int r_HASH_CODES(rt_int p_L, rt_int p_C1, rt_int p_C2, rt_int p_C3) { RT_B_TICK(); 
{ rt_int rv39 = rt_rem((rt_add(rt_add(rt_add(rt_mul(p_L, ((rt_int)31LL)), rt_mul(p_C1, ((rt_int)7LL))), rt_mul(p_C2, ((rt_int)3LL))), p_C3)), g_HASH_SIZE);
return rv39; }
rt_raise(RT_X_INIT);
}
static rt_int r_HASH_OF(rstr p_S) { RT_B_TICK(); 
if (((rt_int)(p_S).len == ((rt_int)0LL)))
{
{ rt_int rv40 = ((rt_int)0LL);
return rv40; }
}
{ rt_int rv41 = r_HASH_CODES((rt_int)(p_S).len, r_CODE_OF(rt_b_slice(p_S, ((rt_int)0LL), ((rt_int)0LL))), r_CODE_OF(rt_b_slice(p_S, rt_quot((rt_int)(p_S).len, ((rt_int)2LL)), rt_quot((rt_int)(p_S).len, ((rt_int)2LL)))), r_CODE_OF(rt_b_slice(p_S, rt_sub((rt_int)(p_S).len, ((rt_int)1LL)), rt_sub((rt_int)(p_S).len, ((rt_int)1LL)))));
return rv41; }
rt_raise(RT_X_INIT);
}
static R10 r_MK(rstr p_S) { RT_B_TICK(); 
rt_int l_AT_42; memset(&l_AT_42, 0, sizeof l_AT_42);
l_AT_42 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
if ((rt_add(l_AT_42, (rt_int)(p_S).len) > g_ARENA_SIZE))
{
rt_putln(rt_str("*** the arena is full", 21));
rt_exit(((rt_int)2LL));
}
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, l_AT_42, rt_sub(rt_add(l_AT_42, (rt_int)(p_S).len), ((rt_int)1LL)), p_S);
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(l_AT_42, (rt_int)(p_S).len);
{ R10 rv43 = ({ R10 rc44; memset(&rc44, 0, sizeof rc44);  rc44.f_AT = l_AT_42; rc44.f_LEN = (rt_int)(p_S).len; rc44.f_H = rt_neg(((rt_int)1LL)); rc44; });
return rv43; }
rt_raise(RT_X_INIT);
}
static R10 r_MKN(rstr p_S) { RT_B_TICK(); 
R10 l_T_45; memset(&l_T_45, 0, sizeof l_T_45);
S_R10(&l_T_45, r_MK(p_S), 0);
(l_T_45).f_H = r_HASH_OF(p_S);
{ R10 rv46 = l_T_45;
return rv46; }
rt_raise(RT_X_INIT);
}
static rstr r_STR(R10 p_T, rt_int p_L) { RT_B_TICK(); 
{ rstr rv47 = rt_b_slice(((*(R7 *)rt_nil_check(g_W))).f_ARENA, (p_T).f_AT, rt_sub(rt_add((p_T).f_AT, p_L), ((rt_int)1LL)));
return rv47; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEQ(R10 p_A, R10 p_B) { RT_B_TICK(); 
if ((!((p_A).f_LEN == (p_B).f_LEN)))
{
{ rt_int rv48 = 0;
return rv48; }
}
{ rt_int rv49 = rt_b_eq(r_STR(p_A, (p_A).f_LEN), r_STR(p_B, (p_B).f_LEN));
return rv49; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEQS(R10 p_A, rstr p_S) { RT_B_TICK(); 
if ((!((p_A).f_LEN == (rt_int)(p_S).len)))
{
{ rt_int rv50 = 0;
return rv50; }
}
{ rt_int rv51 = rt_b_eq(r_STR(p_A, (p_A).f_LEN), p_S);
return rv51; }
rt_raise(RT_X_INIT);
}
static R10 r_CAT(R10 p_A, R10 p_B) { RT_B_TICK(); 
{ R10 rv52 = r_MK(rt_b_cat(r_STR(p_A, (p_A).f_LEN), r_STR(p_B, (p_B).f_LEN)));
return rv52; }
rt_raise(RT_X_INIT);
}
static R10 r_CATS(R10 p_A, rstr p_S) { RT_B_TICK(); 
{ R10 rv53 = r_MK(rt_b_cat(r_STR(p_A, (p_A).f_LEN), p_S));
return rv53; }
rt_raise(RT_X_INIT);
}
static R10 r_FMT4(rstr p_P, R10 p_A, R10 p_B, R10 p_C, R10 p_D) { RT_B_TICK(); 
rt_int l_AT_54; memset(&l_AT_54, 0, sizeof l_AT_54);
l_AT_54 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_N_55; memset(&l_N_55, 0, sizeof l_N_55);
l_N_55 = ((rt_int)0LL);
rt_int l_START_56; memset(&l_START_56, 0, sizeof l_START_56);
l_START_56 = ((rt_int)0LL);
R10 l_R_57; memset(&l_R_57, 0, sizeof l_R_57);
{ rt_int it59_lo = ((rt_int)0LL), it59_hi = rt_sub((rt_int)(p_P).len, ((rt_int)1LL));
for (rt_int it59 = it59_lo; it59 <= it59_hi; it59++) {
{
if (rt_b_eq(rt_b_slice(p_P, it59, it59), rt_str("@", 1)))
{
S_R10(&l_R_57, r_MK(rt_b_slice(p_P, l_START_56, rt_sub(it59, ((rt_int)1LL)))), 0);
switch (l_N_55) {
case 0:
{
S_R10(&l_R_57, r_MK(r_STR(p_A, (p_A).f_LEN)), 0);
}
break;
case 1:
{
S_R10(&l_R_57, r_MK(r_STR(p_B, (p_B).f_LEN)), 0);
}
break;
case 2:
{
S_R10(&l_R_57, r_MK(r_STR(p_C, (p_C).f_LEN)), 0);
}
break;
default:
{
S_R10(&l_R_57, r_MK(r_STR(p_D, (p_D).f_LEN)), 0);
}
break;
}
l_N_55 = rt_add(l_N_55, ((rt_int)1LL));
l_START_56 = rt_add(it59, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it59 == it59_hi) break;
} } L_end58: ;
S_R10(&l_R_57, r_MK(rt_b_slice(p_P, l_START_56, rt_sub((rt_int)(p_P).len, ((rt_int)1LL)))), 0);
{ R10 rv60 = ({ R10 rc61; memset(&rc61, 0, sizeof rc61);  rc61.f_AT = l_AT_54; rc61.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_54); rc61.f_H = rt_neg(((rt_int)1LL)); rc61; });
return rv60; }
rt_raise(RT_X_INIT);
}
static R10 r_FMT1(rstr p_P, R10 p_A) { RT_B_TICK(); 
{ R10 rv62 = r_FMT4(p_P, p_A, p_A, p_A, p_A);
return rv62; }
rt_raise(RT_X_INIT);
}
static R10 r_FMT2(rstr p_P, R10 p_A, R10 p_B) { RT_B_TICK(); 
{ R10 rv63 = r_FMT4(p_P, p_A, p_B, p_B, p_B);
return rv63; }
rt_raise(RT_X_INIT);
}
static R10 r_FMT3(rstr p_P, R10 p_A, R10 p_B, R10 p_C) { RT_B_TICK(); 
{ R10 rv64 = r_FMT4(p_P, p_A, p_B, p_C, p_C);
return rv64; }
rt_raise(RT_X_INIT);
}
static R10 r_NUM(rt_int p_V) { RT_B_TICK(); 
{ R10 rv65 = r_MK(rt_b_image(p_V));
return rv65; }
rt_raise(RT_X_INIT);
}
static R10 r_CID(R10 p_T) { RT_B_TICK(); 
rstr l_S_66; memset(&l_S_66, 0, sizeof l_S_66);
l_S_66 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_66, r_STR(p_T, (p_T).f_LEN));
R10 l_R_67; memset(&l_R_67, 0, sizeof l_R_67);
if (((p_T).f_LEN == ((rt_int)0LL)))
{
{ R10 rv68 = p_T;
return rv68; }
}
if (((!rt_b_eq(rt_b_slice(l_S_66, ((rt_int)0LL), ((rt_int)0LL)), rt_str("\\", 1))) && (!rt_b_eq(rt_b_slice(l_S_66, ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1)))))
{
{ R10 rv69 = p_T;
return rv69; }
}
if (rt_b_eq(rt_b_slice(l_S_66, ((rt_int)0LL), ((rt_int)0LL)), rt_str("\\", 1)))
{
S_R10(&l_R_67, r_MK(rt_str("bs_", 3)), 0);
}
else
{
S_R10(&l_R_67, r_MK(rt_str("qm_", 3)), 0);
}
if (((p_T).f_LEN == ((rt_int)1LL)))
{
{ R10 rv70 = l_R_67;
return rv70; }
}
{ R10 rv71 = r_CATS(l_R_67, rt_b_slice(l_S_66, ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv71; }
rt_raise(RT_X_INIT);
}
static R10 r_NEW_NAME(rstr p_BASE) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_SERIAL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_SERIAL, ((rt_int)1LL));
{ R10 rv72 = r_MK(rt_b_cat(p_BASE, rt_b_image(((*(R7 *)rt_nil_check(g_W))).f_SERIAL)));
return rv72; }
rt_raise(RT_X_INIT);
}
static void r_APPEND(R10 p_T, R14 *p_B) { RT_B_TICK(); 
R15 * l_C_73; memset(&l_C_73, 0, sizeof l_C_73);
l_C_73 = ((R15 *)rt_b_new(sizeof (R15)));
S_R10(&((*(R15 *)rt_nil_check(l_C_73))).f_T, p_T, 0);
((*(R15 *)rt_nil_check(l_C_73))).f_NEXT = NULL;
if ((((*p_B)).f_TAIL == NULL))
{
((*p_B)).f_HEAD = l_C_73;
}
else
{
((*(R15 *)rt_nil_check(((*p_B)).f_TAIL))).f_NEXT = l_C_73;
}
((*p_B)).f_TAIL = l_C_73;
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
R15 * l_C_74; memset(&l_C_74, 0, sizeof l_C_74);
l_C_74 = (p_B).f_HEAD;
for (;;) {
if ((l_C_74 == NULL)) goto L_end75;
{
{
R10 l_T_76; memset(&l_T_76, 0, sizeof l_T_76);
S_R10(&l_T_76, ((*(R15 *)rt_nil_check(l_C_74))).f_T, 0);
rt_putln(r_STR(l_T_76, (l_T_76).f_LEN));
}
l_C_74 = ((*(R15 *)rt_nil_check(l_C_74))).f_NEXT;
}
RT_B_TICK();
} L_end75: ;
}
static void r_WRITE_OUTPUT(void) { RT_B_TICK(); 
{ rt_int it78_lo = ((rt_int)0LL), it78_hi = g_O_LAST;
for (rt_int it78 = it78_lo; it78 <= it78_hi; it78++) {
{
r_PUT_BUF((((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(it78, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
}
RT_B_TICK();
if (it78 == it78_hi) break;
} } L_end77: ;
}
static void r_FAIL(rt_int p_LINE, rstr p_MSG) { RT_B_TICK(); 
rt_putln(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("line ", 5), rt_b_image(p_LINE)), rt_str(": ", 2)), p_MSG));
rt_exit(((rt_int)1LL));
}
static void r_FAILT(rt_int p_LINE, rstr p_MSG, R10 p_T) { RT_B_TICK(); 
r_FAIL(p_LINE, rt_b_cat(p_MSG, r_STR(p_T, (p_T).f_LEN)));
}
static void r_READ_SOURCE(void) { RT_B_TICK(); 
rt_int l_C_79; memset(&l_C_79, 0, sizeof l_C_79);
l_C_79 = rt_b_get_code();
for (;;) {
if ((l_C_79 < ((rt_int)0LL))) goto L_end80;
{
if ((((*(R7 *)rt_nil_check(g_W))).f_NSRC >= g_MAX_SOURCE))
{
r_FAIL(((rt_int)0LL), rt_str("the source is too long", 22));
}
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = l_C_79;
((*(R7 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
l_C_79 = rt_b_get_code();
}
RT_B_TICK();
} L_end80: ;
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = ((rt_int)0LL);
}
static rt_int r_AT_SRC(rt_int p_I) { RT_B_TICK(); 
if ((p_I >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC))
{
{ rt_int rv81 = ((rt_int)0LL);
return rv81; }
}
{ rt_int rv82 = (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(p_I, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])];
return rv82; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LETTER(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv83 = ({ rt_int iv84 = p_C; (((rt_int)65LL) <= iv84) && (iv84 <= ((rt_int)90LL)); });
return rv83; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_DIGIT(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv85 = ({ rt_int iv86 = p_C; (((rt_int)48LL) <= iv86) && (iv86 <= ((rt_int)57LL)); });
return rv85; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_IDCHAR(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv87 = ((r_IS_LETTER(p_C) || r_IS_DIGIT(p_C)) || (p_C == ((rt_int)95LL)));
return rv87; }
rt_raise(RT_X_INIT);
}
static R10 r_SOURCE_TEXT(rt_int p_FIRST, rt_int p_BEYOND) { RT_B_TICK(); 
rt_int l_AT_88; memset(&l_AT_88, 0, sizeof l_AT_88);
l_AT_88 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_L_89; memset(&l_L_89, 0, sizeof l_L_89);
l_L_89 = rt_sub(p_BEYOND, p_FIRST);
R10 l_T_90; memset(&l_T_90, 0, sizeof l_T_90);
if ((rt_add(l_AT_88, l_L_89) > g_ARENA_SIZE))
{
r_FAIL(((rt_int)0LL), rt_str("the arena is full", 17));
}
{ rt_int it92_lo = p_FIRST, it92_hi = rt_sub(p_BEYOND, ((rt_int)1LL));
for (rt_int it92 = it92_lo; it92 <= it92_hi; it92++) {
{
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, ((*(R7 *)rt_nil_check(g_W))).f_TOP, ((*(R7 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(it92, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]));
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R7 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
}
RT_B_TICK();
if (it92 == it92_hi) break;
} } L_end91: ;
S_R10(&l_T_90, ({ R10 rc93; memset(&rc93, 0, sizeof rc93);  rc93.f_AT = l_AT_88; rc93.f_LEN = l_L_89; rc93.f_H = ((rt_int)0LL); rc93; }), 0);
if ((l_L_89 > ((rt_int)0LL)))
{
(l_T_90).f_H = r_HASH_CODES(l_L_89, (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(p_FIRST, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])], (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(rt_add(p_FIRST, rt_quot(l_L_89, ((rt_int)2LL))), (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])], (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(rt_sub(p_BEYOND, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]);
}
{ R10 rv94 = l_T_90;
return rv94; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_RESERVED(R10 p_T) { RT_B_TICK(); 
rstr l_WORDS_95; memset(&l_WORDS_95, 0, sizeof l_WORDS_95);
l_WORDS_95 = rt_b_str_new(((rt_int)290LL), 0);
rt_b_assign(&l_WORDS_95, rt_str(" AND ANY ARRAY ASSERT BIN BLOCK CONST DO ELSE END EXCEPT EXIT FALSE FOR FROM FUNCTION GO HEX IF IN INLINE LOOP MAIN MOD MODULE NAMING NEEDS NIL NOT OCT OF OR ORIF PAR_BLOCK PATH PROCEDURE RECORD REP RETURN SEGMENT SELECT SIGNAL TAG TERMINATE THEN TO TRUE TYPE UNTIL VAR WHEN WHERE WITH XOR ", 290));
rt_int l_L_96; memset(&l_L_96, 0, sizeof l_L_96);
l_L_96 = (p_T).f_LEN;
{ rt_int it98_lo = ((rt_int)0LL), it98_hi = rt_sub(rt_sub(((rt_int)290LL), l_L_96), ((rt_int)2LL));
for (rt_int it98 = it98_lo; it98 <= it98_hi; it98++) {
{
if (rt_b_eq(rt_b_slice(l_WORDS_95, it98, it98), rt_str(" ", 1)))
{
if (rt_b_eq(rt_b_slice(l_WORDS_95, rt_add(rt_add(it98, l_L_96), ((rt_int)1LL)), rt_add(rt_add(it98, l_L_96), ((rt_int)1LL))), rt_str(" ", 1)))
{
if (rt_b_eq(rt_b_slice(l_WORDS_95, rt_add(it98, ((rt_int)1LL)), rt_add(it98, l_L_96)), r_STR(p_T, l_L_96)))
{
{ rt_int rv99 = 1;
return rv99; }
}
}
}
}
RT_B_TICK();
if (it98 == it98_hi) break;
} } L_end97: ;
{ rt_int rv100 = 0;
return rv100; }
rt_raise(RT_X_INIT);
}
static void r_ADD_TOKEN(rt_int p_KIND, rt_int p_LINE, rt_int p_IV, R10 p_TX) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_NTOKS >= g_MAX_TOKENS))
{
r_FAIL(p_LINE, rt_str("too many tokens", 15));
}
S_R9(&(((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], ({ R9 rc101; memset(&rc101, 0, sizeof rc101);  rc101.f_KIND = p_KIND; rc101.f_LINE = p_LINE; rc101.f_IV = p_IV; S_R10(&rc101.f_TX, p_TX, 0); rc101; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_NTOKS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL));
}
static rt_int r_SYMBOL_LENGTH(rt_int p_I) { RT_B_TICK(); 
rt_int l_C_102; memset(&l_C_102, 0, sizeof l_C_102);
l_C_102 = r_AT_SRC(p_I);
rt_int l_D_103; memset(&l_D_103, 0, sizeof l_D_103);
l_D_103 = r_AT_SRC(rt_add(p_I, ((rt_int)1LL)));
if ((((l_C_102 == ((rt_int)45LL)) && (l_D_103 == ((rt_int)45LL))) && (r_AT_SRC(rt_add(p_I, ((rt_int)2LL))) == ((rt_int)62LL))))
{
{ rt_int rv104 = ((rt_int)3LL);
return rv104; }
}
if ((((((((((((l_C_102 == ((rt_int)58LL)) && (l_D_103 == ((rt_int)61LL)))) || (((l_C_102 == ((rt_int)45LL)) && (l_D_103 == ((rt_int)62LL))))) || (((l_C_102 == ((rt_int)60LL)) && (l_D_103 == ((rt_int)61LL))))) || (((l_C_102 == ((rt_int)62LL)) && (l_D_103 == ((rt_int)61LL))))) || (((l_C_102 == ((rt_int)60LL)) && (l_D_103 == ((rt_int)62LL))))) || (((l_C_102 == ((rt_int)42LL)) && (l_D_103 == ((rt_int)42LL))))) || (((l_C_102 == ((rt_int)47LL)) && (l_D_103 == ((rt_int)47LL))))) || (((l_C_102 == ((rt_int)36LL)) && (l_D_103 == ((rt_int)36LL))))) || (((l_C_102 == ((rt_int)33LL)) && (l_D_103 == ((rt_int)33LL))))))
{
{ rt_int rv105 = ((rt_int)2LL);
return rv105; }
}
{ rt_int rv106 = ((rt_int)1LL);
return rv106; }
rt_raise(RT_X_INIT);
}
static void r_LEX(void) { RT_B_TICK(); 
rt_int l_I_107; memset(&l_I_107, 0, sizeof l_I_107);
l_I_107 = ((rt_int)0LL);
rt_int l_LINE_108; memset(&l_LINE_108, 0, sizeof l_LINE_108);
l_LINE_108 = ((rt_int)1LL);
rt_int l_C_109; memset(&l_C_109, 0, sizeof l_C_109);
rt_int l_J_110; memset(&l_J_110, 0, sizeof l_J_110);
rt_int l_V_111; memset(&l_V_111, 0, sizeof l_V_111);
for (;;) {
if ((l_I_107 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC)) goto L_end112;
{
l_C_109 = (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_107, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])];
if ((l_C_109 == ((rt_int)10LL)))
{
l_LINE_108 = rt_add(l_LINE_108, ((rt_int)1LL));
l_I_107 = rt_add(l_I_107, ((rt_int)1LL));
}
else if (((((l_C_109 == ((rt_int)32LL)) || (l_C_109 == ((rt_int)9LL))) || (l_C_109 == ((rt_int)13LL))) || (l_C_109 == ((rt_int)12LL))))
{
l_I_107 = rt_add(l_I_107, ((rt_int)1LL));
}
else if ((l_C_109 == ((rt_int)37LL)))
{
l_I_107 = rt_add(l_I_107, ((rt_int)1LL));
for (;;) {
if ((((l_I_107 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_107, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)37LL))) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_107, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)10LL)))) goto L_end113;
{
l_I_107 = rt_add(l_I_107, ((rt_int)1LL));
}
RT_B_TICK();
} L_end113: ;
if ((r_AT_SRC(l_I_107) == ((rt_int)37LL)))
{
l_I_107 = rt_add(l_I_107, ((rt_int)1LL));
}
}
else if ((l_C_109 == ((rt_int)39LL)))
{
{
rt_int l_AT_114; memset(&l_AT_114, 0, sizeof l_AT_114);
l_AT_114 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
l_I_107 = rt_add(l_I_107, ((rt_int)1LL));
for (;;) {
{
if (((l_I_107 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_107, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)10LL))))
{
r_FAIL(l_LINE_108, rt_str("a string must end on its line", 29));
}
if (((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_107, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)39LL)))
{
if ((!(r_AT_SRC(rt_add(l_I_107, ((rt_int)1LL))) == ((rt_int)39LL))))
{
l_I_107 = rt_add(l_I_107, ((rt_int)1LL));
goto L_end115;
}
l_I_107 = rt_add(l_I_107, ((rt_int)1LL));
}
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, ((*(R7 *)rt_nil_check(g_W))).f_TOP, ((*(R7 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_107, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]));
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R7 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
l_I_107 = rt_add(l_I_107, ((rt_int)1LL));
}
RT_B_TICK();
} L_end115: ;
r_ADD_TOKEN(g_K_STR, l_LINE_108, ((rt_int)0LL), ({ R10 rc116; memset(&rc116, 0, sizeof rc116);  rc116.f_AT = l_AT_114; rc116.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_114); rc116.f_H = rt_neg(((rt_int)1LL)); rc116; }));
}
}
else if ((l_C_109 == ((rt_int)92LL)))
{
l_J_110 = rt_add(l_I_107, ((rt_int)1LL));
if (((((r_AT_SRC(l_J_110) == ((rt_int)39LL)) && (r_AT_SRC(rt_add(l_J_110, ((rt_int)1LL))) == ((rt_int)39LL))) && (r_AT_SRC(rt_add(l_J_110, ((rt_int)2LL))) == ((rt_int)39LL))) && (r_AT_SRC(rt_add(l_J_110, ((rt_int)3LL))) == ((rt_int)39LL))))
{
l_J_110 = rt_add(l_I_107, ((rt_int)5LL));
}
else if (((r_AT_SRC(l_J_110) == ((rt_int)39LL)) && (r_AT_SRC(rt_add(l_J_110, ((rt_int)2LL))) == ((rt_int)39LL))))
{
l_J_110 = rt_add(l_I_107, ((rt_int)4LL));
}
else if (((r_AT_SRC(l_J_110) == ((rt_int)91LL)) || (r_AT_SRC(l_J_110) == ((rt_int)93LL))))
{
l_J_110 = rt_add(l_I_107, ((rt_int)2LL));
}
else
{
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_110)))) goto L_end117;
{
l_J_110 = rt_add(l_J_110, ((rt_int)1LL));
}
RT_B_TICK();
} L_end117: ;
if ((l_J_110 == rt_add(l_I_107, ((rt_int)1LL))))
{
r_FAIL(l_LINE_108, rt_str("a stray backslash", 17));
}
}
r_ADD_TOKEN(g_K_ENUM, l_LINE_108, ((rt_int)0LL), r_SOURCE_TEXT(l_I_107, l_J_110));
l_I_107 = l_J_110;
}
else if ((l_C_109 == ((rt_int)63LL)))
{
l_J_110 = rt_add(l_I_107, ((rt_int)1LL));
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_110)))) goto L_end118;
{
l_J_110 = rt_add(l_J_110, ((rt_int)1LL));
}
RT_B_TICK();
} L_end118: ;
r_ADD_TOKEN(g_K_GEN, l_LINE_108, ((rt_int)0LL), r_SOURCE_TEXT(l_I_107, l_J_110));
l_I_107 = l_J_110;
}
else if (r_IS_LETTER(l_C_109))
{
l_J_110 = l_I_107;
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_110)))) goto L_end119;
{
l_J_110 = rt_add(l_J_110, ((rt_int)1LL));
}
RT_B_TICK();
} L_end119: ;
{
R10 l_T_120; memset(&l_T_120, 0, sizeof l_T_120);
S_R10(&l_T_120, r_SOURCE_TEXT(l_I_107, l_J_110), 0);
if (r_IS_RESERVED(l_T_120))
{
r_ADD_TOKEN(g_K_RES, l_LINE_108, ((rt_int)0LL), l_T_120);
}
else
{
r_ADD_TOKEN(g_K_ID, l_LINE_108, ((rt_int)0LL), l_T_120);
}
}
l_I_107 = l_J_110;
}
else if ((r_IS_DIGIT(l_C_109) || (((l_C_109 == ((rt_int)46LL)) && r_IS_DIGIT(r_AT_SRC(rt_add(l_I_107, ((rt_int)1LL))))))))
{
{
rt_int l_KIND_121; memset(&l_KIND_121, 0, sizeof l_KIND_121);
l_KIND_121 = g_K_NUM;
rt_int l_SCALE_122; memset(&l_SCALE_122, 0, sizeof l_SCALE_122);
l_SCALE_122 = ((rt_int)0LL);
rt_int l_NEG_123; memset(&l_NEG_123, 0, sizeof l_NEG_123);
l_NEG_123 = 0;
rt_int l_BIG_124; memset(&l_BIG_124, 0, sizeof l_BIG_124);
l_BIG_124 = 0;
l_J_110 = l_I_107;
l_V_111 = ((rt_int)0LL);
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_110)))) goto L_end125;
{
if ((l_V_111 > rt_quot((rt_sub(INT64_MAX, (rt_sub(r_AT_SRC(l_J_110), ((rt_int)48LL))))), ((rt_int)10LL))))
{
l_BIG_124 = 1;
}
else
{
l_V_111 = rt_add(rt_mul(l_V_111, ((rt_int)10LL)), (rt_sub(r_AT_SRC(l_J_110), ((rt_int)48LL))));
}
l_J_110 = rt_add(l_J_110, ((rt_int)1LL));
}
RT_B_TICK();
} L_end125: ;
if ((r_AT_SRC(l_J_110) == ((rt_int)46LL)))
{
l_KIND_121 = g_K_REAL;
l_J_110 = rt_add(l_J_110, ((rt_int)1LL));
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_110)))) goto L_end126;
{
l_J_110 = rt_add(l_J_110, ((rt_int)1LL));
}
RT_B_TICK();
} L_end126: ;
}
if (((r_AT_SRC(l_J_110) == ((rt_int)69LL)) && ((r_IS_DIGIT(r_AT_SRC(rt_add(l_J_110, ((rt_int)1LL)))) || (((((r_AT_SRC(rt_add(l_J_110, ((rt_int)1LL))) == ((rt_int)43LL)) || (r_AT_SRC(rt_add(l_J_110, ((rt_int)1LL))) == ((rt_int)45LL)))) && r_IS_DIGIT(r_AT_SRC(rt_add(l_J_110, ((rt_int)2LL))))))))))
{
l_KIND_121 = g_K_REAL;
l_J_110 = rt_add(l_J_110, ((rt_int)2LL));
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_110)))) goto L_end127;
{
l_J_110 = rt_add(l_J_110, ((rt_int)1LL));
}
RT_B_TICK();
} L_end127: ;
}
{
R10 l_T_128; memset(&l_T_128, 0, sizeof l_T_128);
S_R10(&l_T_128, r_SOURCE_TEXT(l_I_107, l_J_110), 0);
if (((r_AT_SRC(l_J_110) == ((rt_int)92LL)) && (r_AT_SRC(rt_add(l_J_110, ((rt_int)1LL))) == ((rt_int)83LL))))
{
l_KIND_121 = g_K_FIX;
l_J_110 = rt_add(l_J_110, ((rt_int)2LL));
if ((r_AT_SRC(l_J_110) == ((rt_int)45LL)))
{
l_NEG_123 = 1;
l_J_110 = rt_add(l_J_110, ((rt_int)1LL));
}
else if ((r_AT_SRC(l_J_110) == ((rt_int)43LL)))
{
l_J_110 = rt_add(l_J_110, ((rt_int)1LL));
}
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_110)))) goto L_end129;
{
if ((l_SCALE_122 <= ((rt_int)100000LL)))
{
l_SCALE_122 = rt_add(rt_mul(l_SCALE_122, ((rt_int)10LL)), (rt_sub(r_AT_SRC(l_J_110), ((rt_int)48LL))));
}
l_J_110 = rt_add(l_J_110, ((rt_int)1LL));
}
RT_B_TICK();
} L_end129: ;
if (l_NEG_123)
{
l_SCALE_122 = rt_neg(l_SCALE_122);
}
l_V_111 = l_SCALE_122;
}
if (((l_KIND_121 == g_K_NUM) && l_BIG_124))
{
r_FAIL(l_LINE_108, rt_str("an integer literal exceeds the largest INTEGER (3.2.2)", 54));
}
r_ADD_TOKEN(l_KIND_121, l_LINE_108, l_V_111, l_T_128);
}
}
l_I_107 = l_J_110;
}
else
{
l_J_110 = rt_add(l_I_107, r_SYMBOL_LENGTH(l_I_107));
r_ADD_TOKEN(g_K_SYM, l_LINE_108, ((rt_int)0LL), r_SOURCE_TEXT(l_I_107, l_J_110));
l_I_107 = l_J_110;
}
}
RT_B_TICK();
} L_end112: ;
r_ADD_TOKEN(g_K_EOF, l_LINE_108, ((rt_int)0LL), r_MK(rt_str("", 0)));
}
static R9 r_CUR(void) { RT_B_TICK(); 
{ R9 rv130 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv130; }
rt_raise(RT_X_INIT);
}
static R9 r_AHEAD(rt_int p_K) { RT_B_TICK(); 
if ((rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, p_K) >= ((*(R7 *)rt_nil_check(g_W))).f_NTOKS))
{
{ R9 rv131 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv131; }
}
{ R9 rv132 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, p_K), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv132; }
rt_raise(RT_X_INIT);
}
static rt_int r_LINE_NOW(void) { RT_B_TICK(); 
{ rt_int rv133 = ((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_LINE;
return rv133; }
rt_raise(RT_X_INIT);
}
static rt_int r_TOK_IS(R9 p_T, rstr p_S) { RT_B_TICK(); 
if (((((p_T).f_KIND == g_K_SYM) || ((p_T).f_KIND == g_K_RES)) || ((p_T).f_KIND == g_K_ID)))
{
{ rt_int rv134 = r_TEQS((p_T).f_TX, p_S);
return rv134; }
}
{ rt_int rv135 = 0;
return rv135; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS(rstr p_S) { RT_B_TICK(); 
{ rt_int rv136 = r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], p_S);
return rv136; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TARGET_DECL(void) { RT_B_TICK(); 
if (((!r_IS(rt_str("TARGET", 6))) || (((*(R7 *)rt_nil_check(g_W))).f_POS >= rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)))))
{
{ rt_int rv137 = 0;
return rv137; }
}
{ rt_int rv138 = ((r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("PROCEDURE", 9)) || r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("FUNCTION", 8))) || r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("INLINE", 6)));
return rv138; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_KIND(rt_int p_K) { RT_B_TICK(); 
{ rt_int rv139 = (((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_KIND == p_K);
return rv139; }
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
{ rt_int rv140 = 1;
return rv140; }
}
{ rt_int rv141 = 0;
return rv141; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT(rstr p_S) { RT_B_TICK(); 
if ((!r_ACCEPT(p_S)))
{
{
R10 l_T_142; memset(&l_T_142, 0, sizeof l_T_142);
S_R10(&l_T_142, (r_CUR()).f_TX, 0);
r_FAIL(r_LINE_NOW(), rt_b_cat(rt_b_cat(p_S, rt_str(" expected, not ", 15)), r_STR(l_T_142, (l_T_142).f_LEN)));
}
}
}
static R10 r_IDENT(void) { RT_B_TICK(); 
R9 l_T_143; memset(&l_T_143, 0, sizeof l_T_143);
S_R9(&l_T_143, r_CUR(), 0);
if (((!((l_T_143).f_KIND == g_K_ID)) && (!r_IDENT_TOKEN(l_T_143))))
{
r_FAILT((l_T_143).f_LINE, rt_str("an identifier expected, not ", 28), (l_T_143).f_TX);
}
r_SKIP();
{ R10 rv144 = (l_T_143).f_TX;
return rv144; }
rt_raise(RT_X_INIT);
}
static rt_int r_IDENT_TOKEN(R9 p_T) { RT_B_TICK(); 
if ((((((p_T).f_KIND == g_K_ENUM) || ((p_T).f_KIND == g_K_GEN))) && (((p_T).f_TX).f_LEN >= ((rt_int)2LL))))
{
{
rstr l_S_145; memset(&l_S_145, 0, sizeof l_S_145);
l_S_145 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_S_145, r_STR((p_T).f_TX, ((rt_int)2LL)));
{ rt_int rv146 = (((!rt_b_eq(rt_b_slice(l_S_145, ((rt_int)1LL), ((rt_int)1LL)), rt_str("'", 1))) && (!rt_b_eq(rt_b_slice(l_S_145, ((rt_int)1LL), ((rt_int)1LL)), rt_str("[", 1)))) && (!rt_b_eq(rt_b_slice(l_S_145, ((rt_int)1LL), ((rt_int)1LL)), rt_str("]", 1))));
return rv146; }
}
}
{ rt_int rv147 = 0;
return rv147; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT_NAME(R10 p_NAME) { RT_B_TICK(); 
if ((!r_TEQ(r_IDENT(), p_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), p_NAME);
}
}
static R21 * r_NEW_NODE(rt_int p_KIND, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_N_148; memset(&l_N_148, 0, sizeof l_N_148);
l_N_148 = ((R21 *)rt_b_new(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_N_148)), ({ R21 rc149; memset(&rc149, 0, sizeof rc149);  rc149.f_KIND = p_KIND; rc149.f_LINE = p_LINE; rc149.f_IV = ((rt_int)0LL); S_R10(&rc149.f_NAME, ({ R10 rc150; memset(&rc150, 0, sizeof rc150);  rc150.f_AT = ((rt_int)0LL); rc150.f_LEN = ((rt_int)0LL); rc150.f_H = ((rt_int)0LL); rc150; }), 0); rc149.f_A = NULL; rc149.f_B = NULL; rc149.f_C = NULL; rc149.f_D = NULL; rc149.f_E = NULL; rc149.f_NEXT = NULL; rc149.f_FL = ((rt_int)0LL); rc149; }), 0);
{ R21 * rv151 = l_N_148;
return rv151; }
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
rt_int l_K_152; memset(&l_K_152, 0, sizeof l_K_152);
l_K_152 = ((rt_int)0LL);
R21 * l_P_153; memset(&l_P_153, 0, sizeof l_P_153);
l_P_153 = p_N;
for (;;) {
if ((l_P_153 == NULL)) goto L_end154;
{
l_K_152 = rt_add(l_K_152, ((rt_int)1LL));
l_P_153 = ((*(R21 *)rt_nil_check(l_P_153))).f_NEXT;
}
RT_B_TICK();
} L_end154: ;
{ rt_int rv155 = l_K_152;
return rv155; }
rt_raise(RT_X_INIT);
}
static R21 * r_IDENT_NODE(void) { RT_B_TICK(); 
R21 * l_N_156; memset(&l_N_156, 0, sizeof l_N_156);
l_N_156 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_N_156))).f_NAME, r_IDENT(), 0);
{ R21 * rv157 = l_N_156;
return rv157; }
rt_raise(RT_X_INIT);
}
static R21 * r_IDENT_LIST(void) { RT_B_TICK(); 
R21 * l_HEAD_158; memset(&l_HEAD_158, 0, sizeof l_HEAD_158);
l_HEAD_158 = NULL;
R21 * l_TAIL_159; memset(&l_TAIL_159, 0, sizeof l_TAIL_159);
l_TAIL_159 = NULL;
for (;;) {
{
r_ADD_LIST(r_ROUTINE_NAME_NODE(), &l_HEAD_158, &l_TAIL_159);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end160;
} L_end160: ;
{ R21 * rv161 = l_HEAD_158;
return rv161; }
rt_raise(RT_X_INIT);
}
static R21 * r_ROUTINE_NAME_NODE(void) { RT_B_TICK(); 
R21 * l_N_162; memset(&l_N_162, 0, sizeof l_N_162);
l_N_162 = r_IDENT_NODE();
if ((r_IS(rt_str("$", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_SKIP();
S_R10(&((*(R21 *)rt_nil_check(l_N_162))).f_NAME, r_MKN(rt_b_cat(rt_b_cat(r_STR(((*(R21 *)rt_nil_check(l_N_162))).f_NAME, (((*(R21 *)rt_nil_check(l_N_162))).f_NAME).f_LEN), rt_str("$", 1)), r_STR((r_CUR()).f_TX, ((r_CUR()).f_TX).f_LEN))), 0);
r_SKIP();
}
{ R21 * rv163 = l_N_162;
return rv163; }
rt_raise(RT_X_INIT);
}
static R21 * r_PAREN_IDENTS(void) { RT_B_TICK(); 
R21 * l_L_164; memset(&l_L_164, 0, sizeof l_L_164);
l_L_164 = NULL;
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str(")", 1))))
{
l_L_164 = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
{ R21 * rv165 = l_L_164;
return rv165; }
rt_raise(RT_X_INIT);
}
static void r_SKIP_PARENS(void) { RT_B_TICK(); 
rt_int l_DEPTH_166; memset(&l_DEPTH_166, 0, sizeof l_DEPTH_166);
l_DEPTH_166 = ((rt_int)0LL);
for (;;) {
{
if (r_IS(rt_str("(", 1)))
{
l_DEPTH_166 = rt_add(l_DEPTH_166, ((rt_int)1LL));
}
else if (r_IS(rt_str(")", 1)))
{
l_DEPTH_166 = rt_sub(l_DEPTH_166, ((rt_int)1LL));
}
r_SKIP();
}
RT_B_TICK();
if ((l_DEPTH_166 == ((rt_int)0LL))) goto L_end167;
} L_end167: ;
}
static R21 * r_PARSE_COMPILATION(void) { RT_B_TICK(); 
R21 * l_HEAD_168; memset(&l_HEAD_168, 0, sizeof l_HEAD_168);
l_HEAD_168 = NULL;
R21 * l_TAIL_169; memset(&l_TAIL_169, 0, sizeof l_TAIL_169);
l_TAIL_169 = NULL;
for (;;) {
if (r_IS_KIND(g_K_EOF)) goto L_end170;
{
r_ADD_LIST(r_PARSE_SEGMENT(), &l_HEAD_168, &l_TAIL_169);
}
RT_B_TICK();
} L_end170: ;
{ R21 * rv171 = l_HEAD_168;
return rv171; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ITEMS(void) { RT_B_TICK(); 
R21 * l_N_172; memset(&l_N_172, 0, sizeof l_N_172);
l_N_172 = r_NEW_NODE(g_N_ITEMS, r_LINE_NOW());
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end173;
{
if (r_ACCEPT(rt_str("DATA", 4)))
{
r_EXPECT(rt_str(":", 1));
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str("#", 1))))
{
((*(R21 *)rt_nil_check(l_N_172))).f_A = r_IDENT_LIST();
}
if (r_ACCEPT(rt_str("#", 1)))
{
((*(R21 *)rt_nil_check(l_N_172))).f_B = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("ROUTINES", 8)))
{
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_172))).f_C = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("TYPES", 5)))
{
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_172))).f_D = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("MODULES", 7)))
{
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_172))).f_E = r_PAREN_IDENTS();
}
else
{
{
R10 l_T_174; memset(&l_T_174, 0, sizeof l_T_174);
S_R10(&l_T_174, (r_CUR()).f_TX, 0);
r_FAILT(r_LINE_NOW(), rt_str("DATA, ROUTINES, TYPES or MODULES expected, not ", 47), l_T_174);
}
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end173: ;
r_EXPECT(rt_str(")", 1));
{
R21 * l_L_175; memset(&l_L_175, 0, sizeof l_L_175);
l_L_175 = ((*(R21 *)rt_nil_check(l_N_172))).f_A;
rt_int l_PASS_176; memset(&l_PASS_176, 0, sizeof l_PASS_176);
l_PASS_176 = ((rt_int)0LL);
for (;;) {
if ((l_PASS_176 == ((rt_int)5LL))) goto L_end177;
{
if ((l_PASS_176 == ((rt_int)1LL)))
{
l_L_175 = ((*(R21 *)rt_nil_check(l_N_172))).f_B;
}
else if ((l_PASS_176 == ((rt_int)2LL)))
{
l_L_175 = ((*(R21 *)rt_nil_check(l_N_172))).f_C;
}
else if ((l_PASS_176 == ((rt_int)3LL)))
{
l_L_175 = ((*(R21 *)rt_nil_check(l_N_172))).f_D;
}
else if ((l_PASS_176 == ((rt_int)4LL)))
{
l_L_175 = ((*(R21 *)rt_nil_check(l_N_172))).f_E;
}
for (;;) {
if ((l_L_175 == NULL)) goto L_end178;
{
if ((r_IN_IDENTS(((*(R21 *)rt_nil_check(l_L_175))).f_NEXT, ((*(R21 *)rt_nil_check(l_L_175))).f_NAME) || (((l_PASS_176 == ((rt_int)0LL)) && r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_172))).f_B, ((*(R21 *)rt_nil_check(l_L_175))).f_NAME)))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_L_175))).f_LINE, rt_str("a name appears only once in an imports-clause (4.3.1): ", 55), ((*(R21 *)rt_nil_check(l_L_175))).f_NAME);
}
l_L_175 = ((*(R21 *)rt_nil_check(l_L_175))).f_NEXT;
}
RT_B_TICK();
} L_end178: ;
l_PASS_176 = rt_add(l_PASS_176, ((rt_int)1LL));
}
RT_B_TICK();
} L_end177: ;
}
{ R21 * rv179 = l_N_172;
return rv179; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SEGMENT(void) { RT_B_TICK(); 
R21 * l_S_180; memset(&l_S_180, 0, sizeof l_S_180);
l_S_180 = r_NEW_NODE(g_N_SEGMENT, r_LINE_NOW());
R21 * l_HEAD_181; memset(&l_HEAD_181, 0, sizeof l_HEAD_181);
l_HEAD_181 = NULL;
R21 * l_TAIL_182; memset(&l_TAIL_182, 0, sizeof l_TAIL_182);
l_TAIL_182 = NULL;
if (r_ACCEPT(rt_str("MAIN", 4)))
{
((*(R21 *)rt_nil_check(l_S_180))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("SEGMENT", 7));
S_R10(&((*(R21 *)rt_nil_check(l_S_180))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("USES", 4)))
{
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_U_184; memset(&l_U_184, 0, sizeof l_U_184);
l_U_184 = r_NEW_NODE(g_N_USE, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_U_184))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_U_184))).f_A = r_PARSE_ITEMS();
}
r_ADD_LIST(l_U_184, &l_HEAD_181, &l_TAIL_182);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end183;
} L_end183: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_S_180))).f_A = l_HEAD_181;
}
if (r_ACCEPT(rt_str("DEFINES", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R21 *)rt_nil_check(l_S_180))).f_FL = ((rt_int)1LL);
}
else
{
((*(R21 *)rt_nil_check(l_S_180))).f_C = r_PAREN_IDENTS();
}
}
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_S_180))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SEGMENT", 7));
r_EXPECT_NAME(((*(R21 *)rt_nil_check(l_S_180))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R21 * rv185 = l_S_180;
return rv185; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CLOSED_BODY(void) { RT_B_TICK(); 
R21 * l_B_186; memset(&l_B_186, 0, sizeof l_B_186);
l_B_186 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
R21 * l_HEAD_187; memset(&l_HEAD_187, 0, sizeof l_HEAD_187);
l_HEAD_187 = NULL;
R21 * l_TAIL_188; memset(&l_TAIL_188, 0, sizeof l_TAIL_188);
l_TAIL_188 = NULL;
((*(R21 *)rt_nil_check(l_B_186))).f_A = r_PARSE_DECLARATIONS();
((*(R21 *)rt_nil_check(l_B_186))).f_B = r_PARSE_STATEMENTS();
for (;;) {
{
if ((((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()))
{
r_ADD_LIST(r_PARSE_ROUTINE(), &l_HEAD_187, &l_TAIL_188);
}
else if (r_IS(rt_str("MODULE", 6)))
{
r_ADD_LIST(r_PARSE_MODULE(), &l_HEAD_187, &l_TAIL_188);
}
else
{
goto L_end189;
}
}
RT_B_TICK();
} L_end189: ;
((*(R21 *)rt_nil_check(l_B_186))).f_C = l_HEAD_187;
{ R21 * rv190 = l_B_186;
return rv190; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_BODY(void) { RT_B_TICK(); 
R21 * l_B_191; memset(&l_B_191, 0, sizeof l_B_191);
l_B_191 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_B_191))).f_A = r_PARSE_DECLARATIONS();
((*(R21 *)rt_nil_check(l_B_191))).f_B = r_PARSE_STATEMENTS();
{ R21 * rv192 = l_B_191;
return rv192; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_MODULE(void) { RT_B_TICK(); 
R21 * l_M_193; memset(&l_M_193, 0, sizeof l_M_193);
l_M_193 = r_NEW_NODE(g_N_MODULE, r_LINE_NOW());
R21 * l_HEAD_194; memset(&l_HEAD_194, 0, sizeof l_HEAD_194);
l_HEAD_194 = NULL;
R21 * l_TAIL_195; memset(&l_TAIL_195, 0, sizeof l_TAIL_195);
l_TAIL_195 = NULL;
r_EXPECT(rt_str("MODULE", 6));
S_R10(&((*(R21 *)rt_nil_check(l_M_193))).f_NAME, r_IDENT(), 0);
for (;;) {
{
if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_M_193))).f_A = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("EXPORTS", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R21 *)rt_nil_check(l_M_193))).f_FL = ((rt_int)1LL);
}
else
{
{
rt_int l_PAREN_197; memset(&l_PAREN_197, 0, sizeof l_PAREN_197);
l_PAREN_197 = r_ACCEPT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_X_199; memset(&l_X_199, 0, sizeof l_X_199);
l_X_199 = r_NEW_NODE(g_N_EXPORT, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_X_199))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("WITH", 4)))
{
((*(R21 *)rt_nil_check(l_X_199))).f_A = r_PAREN_IDENTS();
}
r_ADD_LIST(l_X_199, &l_HEAD_194, &l_TAIL_195);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end198;
} L_end198: ;
if (l_PAREN_197)
{
r_EXPECT(rt_str(")", 1));
}
}
((*(R21 *)rt_nil_check(l_M_193))).f_B = l_HEAD_194;
}
}
else
{
goto L_end196;
}
}
RT_B_TICK();
} L_end196: ;
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_M_193))).f_C = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("MODULE", 6));
r_EXPECT_NAME(((*(R21 *)rt_nil_check(l_M_193))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R21 * rv200 = l_M_193;
return rv200; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_DECLARATIONS(void) { RT_B_TICK(); 
R21 * l_HEAD_201; memset(&l_HEAD_201, 0, sizeof l_HEAD_201);
l_HEAD_201 = NULL;
R21 * l_TAIL_202; memset(&l_TAIL_202, 0, sizeof l_TAIL_202);
l_TAIL_202 = NULL;
for (;;) {
{
if ((r_IS(rt_str("CONST", 5)) || r_IS(rt_str("VAR", 3))))
{
r_ADD_LIST(r_PARSE_OBJECT_DECL(), &l_HEAD_201, &l_TAIL_202);
}
else if (r_IS(rt_str("TYPE", 4)))
{
r_ADD_LIST(r_PARSE_TYPE_DECL(), &l_HEAD_201, &l_TAIL_202);
}
else if ((r_IS(rt_str("REPTYPE", 7)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_ADD_LIST(r_PARSE_REPTYPE_DECL(), &l_HEAD_201, &l_TAIL_202);
}
else
{
goto L_end203;
}
}
RT_B_TICK();
} L_end203: ;
{ R21 * rv204 = l_HEAD_201;
return rv204; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_OBJECT_DECL(void) { RT_B_TICK(); 
R21 * l_D_205; memset(&l_D_205, 0, sizeof l_D_205);
l_D_205 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
if (r_ACCEPT(rt_str("CONST", 5)))
{
((*(R21 *)rt_nil_check(l_D_205))).f_KIND = g_N_CONST;
}
else
{
r_EXPECT(rt_str("VAR", 3));
}
((*(R21 *)rt_nil_check(l_D_205))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_D_205))).f_B = r_PARSE_TYPE_SPEC();
if (r_ACCEPT(rt_str(":=", 2)))
{
((*(R21 *)rt_nil_check(l_D_205))).f_C = r_PARSE_EXPR();
}
else if ((((*(R21 *)rt_nil_check(l_D_205))).f_KIND == g_N_CONST))
{
r_FAIL(((*(R21 *)rt_nil_check(l_D_205))).f_LINE, rt_str("a constant needs a value", 24));
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv206 = l_D_205;
return rv206; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FORMALS(void) { RT_B_TICK(); 
R21 * l_HEAD_207; memset(&l_HEAD_207, 0, sizeof l_HEAD_207);
l_HEAD_207 = NULL;
R21 * l_TAIL_208; memset(&l_TAIL_208, 0, sizeof l_TAIL_208);
l_TAIL_208 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_F_210; memset(&l_F_210, 0, sizeof l_F_210);
l_F_210 = r_NEW_NODE(g_N_FORMAL, r_LINE_NOW());
if (r_ACCEPT(rt_str("TAG", 3)))
{
((*(R21 *)rt_nil_check(l_F_210))).f_IV = ((rt_int)1LL);
}
((*(R21 *)rt_nil_check(l_F_210))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
if ((!r_ACCEPT(rt_str("TYPE", 4))))
{
((*(R21 *)rt_nil_check(l_F_210))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_F_210, &l_HEAD_207, &l_TAIL_208);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end209;
} L_end209: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv211 = l_HEAD_207;
return rv211; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TYPE_DECL(void) { RT_B_TICK(); 
R21 * l_D_212; memset(&l_D_212, 0, sizeof l_D_212);
l_D_212 = r_NEW_NODE(g_N_TYPE, r_LINE_NOW());
r_EXPECT(rt_str("TYPE", 4));
S_R10(&((*(R21 *)rt_nil_check(l_D_212))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_D_212))).f_A = r_PARSE_FORMALS();
}
r_EXPECT(rt_str("=", 1));
((*(R21 *)rt_nil_check(l_D_212))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(";", 1));
{ R21 * rv213 = l_D_212;
return rv213; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_REPTYPE_DECL(void) { RT_B_TICK(); 
R21 * l_D_214; memset(&l_D_214, 0, sizeof l_D_214);
l_D_214 = r_NEW_NODE(g_N_REPTYPE, r_LINE_NOW());
r_EXPECT(rt_str("REPTYPE", 7));
S_R10(&((*(R21 *)rt_nil_check(l_D_214))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_D_214))).f_A = r_PARSE_FORMALS();
}
if (r_ACCEPT(rt_str("OF", 2)))
{
((*(R21 *)rt_nil_check(l_D_214))).f_C = r_IDENT_NODE();
}
r_EXPECT(rt_str("=", 1));
((*(R21 *)rt_nil_check(l_D_214))).f_B = r_PARSE_REP();
r_EXPECT(rt_str(";", 1));
{ R21 * rv215 = l_D_214;
return rv215; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_REP(void) { RT_B_TICK(); 
R21 * l_R_216; memset(&l_R_216, 0, sizeof l_R_216);
l_R_216 = r_NEW_NODE(g_N_REP, r_LINE_NOW());
R21 * l_HEAD_217; memset(&l_HEAD_217, 0, sizeof l_HEAD_217);
l_HEAD_217 = NULL;
R21 * l_TAIL_218; memset(&l_TAIL_218, 0, sizeof l_TAIL_218);
l_TAIL_218 = NULL;
if (r_IS_KIND(g_K_GEN))
{
((*(R21 *)rt_nil_check(l_R_216))).f_KIND = g_TS_GEN;
S_R10(&((*(R21 *)rt_nil_check(l_R_216))).f_NAME, r_GEN_NAME(), 0);
{ R21 * rv219 = l_R_216;
return rv219; }
}
S_R10(&((*(R21 *)rt_nil_check(l_R_216))).f_NAME, r_IDENT(), 0);
if ((!r_IS(rt_str("(", 1))))
{
{ R21 * rv220 = l_R_216;
return rv220; }
}
if (r_TEQS(((*(R21 *)rt_nil_check(l_R_216))).f_NAME, rt_str("RECORD_REP", 10)))
{
r_PARSE_RECORD_REP(l_R_216);
{ R21 * rv221 = l_R_216;
return rv221; }
}
r_SKIP();
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end222;
{
if (r_ACCEPT(rt_str("VALUES", 6)))
{
{
R21 * l_VH_223; memset(&l_VH_223, 0, sizeof l_VH_223);
l_VH_223 = NULL;
R21 * l_VT_224; memset(&l_VT_224, 0, sizeof l_VT_224);
l_VT_224 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_V_226; memset(&l_V_226, 0, sizeof l_V_226);
l_V_226 = r_NEW_NODE(g_N_VALREP, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_V_226))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_EXPECT(rt_str("AS", 2));
((*(R21 *)rt_nil_check(l_V_226))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_V_226, &l_VH_223, &l_VT_224);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end225;
} L_end225: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_R_216))).f_B = l_VH_223;
}
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_217, &l_TAIL_218);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end222: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_R_216))).f_A = l_HEAD_217;
{ R21 * rv227 = l_R_216;
return rv227; }
rt_raise(RT_X_INIT);
}
static void r_PARSE_RECORD_REP(R21 * p_R) { RT_B_TICK(); 
R21 * l_HEAD_228; memset(&l_HEAD_228, 0, sizeof l_HEAD_228);
l_HEAD_228 = NULL;
R21 * l_TAIL_229; memset(&l_TAIL_229, 0, sizeof l_TAIL_229);
l_TAIL_229 = NULL;
R21 * l_VH_230; memset(&l_VH_230, 0, sizeof l_VH_230);
l_VH_230 = NULL;
R21 * l_VT_231; memset(&l_VT_231, 0, sizeof l_VT_231);
l_VT_231 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end232;
{
if (r_IS(rt_str("SELECT", 6)))
{
r_ADD_LIST(r_PARSE_VARIANT_PACKING(), &l_VH_230, &l_VT_231);
}
else
{
r_ADD_LIST(r_PARSE_PACKING_SPEC(), &l_HEAD_228, &l_TAIL_229);
}
if ((r_ACCEPT(rt_str(",", 1)) || r_ACCEPT(rt_str(";", 1))))
{
}
}
RT_B_TICK();
} L_end232: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(p_R))).f_A = l_HEAD_228;
((*(R21 *)rt_nil_check(p_R))).f_C = l_VH_230;
}
static R21 * r_PARSE_PACKING_SPEC(void) { RT_B_TICK(); 
R21 * l_P_233; memset(&l_P_233, 0, sizeof l_P_233);
l_P_233 = r_NEW_NODE(g_N_PSPEC, r_LINE_NOW());
R21 * l_HEAD_234; memset(&l_HEAD_234, 0, sizeof l_HEAD_234);
l_HEAD_234 = NULL;
R21 * l_TAIL_235; memset(&l_TAIL_235, 0, sizeof l_TAIL_235);
l_TAIL_235 = NULL;
if ((r_IS_KIND(g_K_ID) && (((r_IS(rt_str("DENSE", 5)) || r_IS(rt_str("PACKED", 6))) || r_IS(rt_str("UNPACKED", 8))))))
{
S_R10(&((*(R21 *)rt_nil_check(l_P_233))).f_NAME, r_IDENT(), 0);
}
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_P_233))).f_IV = ((rt_int)1LL);
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end236;
{
r_ADD_LIST(r_PARSE_ELEMENT_SPEC(), &l_HEAD_234, &l_TAIL_235);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end236: ;
r_EXPECT(rt_str(")", 1));
}
else if (((((*(R21 *)rt_nil_check(l_P_233))).f_NAME).f_LEN == ((rt_int)0LL)))
{
((*(R21 *)rt_nil_check(l_P_233))).f_IV = ((rt_int)1LL);
r_ADD_LIST(r_PARSE_ELEMENT_SPEC(), &l_HEAD_234, &l_TAIL_235);
}
((*(R21 *)rt_nil_check(l_P_233))).f_A = l_HEAD_234;
{ R21 * rv237 = l_P_233;
return rv237; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ELEMENT_SPEC(void) { RT_B_TICK(); 
R21 * l_E_238; memset(&l_E_238, 0, sizeof l_E_238);
l_E_238 = r_NEW_NODE(g_N_ELEM, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_E_238))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(l_E_238))).f_NAME, rt_str("VARIANTS", 8)) || r_TEQS(((*(R21 *)rt_nil_check(l_E_238))).f_NAME, rt_str("OMIT", 4))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_E_238))).f_NAME, rt_str("VARIANTS", 8)))
{
((*(R21 *)rt_nil_check(l_E_238))).f_FL = ((rt_int)1LL);
}
else
{
((*(R21 *)rt_nil_check(l_E_238))).f_FL = ((rt_int)2LL);
}
r_SKIP();
S_R10(&((*(R21 *)rt_nil_check(l_E_238))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(")", 1));
}
else if (((r_TEQS(((*(R21 *)rt_nil_check(l_E_238))).f_NAME, rt_str("FILLER", 6)) || r_TEQS(((*(R21 *)rt_nil_check(l_E_238))).f_NAME, rt_str("ZEROS", 5))) || r_TEQS(((*(R21 *)rt_nil_check(l_E_238))).f_NAME, rt_str("BLANKS", 6))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_E_238))).f_NAME, rt_str("FILLER", 6)))
{
((*(R21 *)rt_nil_check(l_E_238))).f_FL = ((rt_int)3LL);
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_E_238))).f_NAME, rt_str("ZEROS", 5)))
{
((*(R21 *)rt_nil_check(l_E_238))).f_FL = ((rt_int)4LL);
}
else
{
((*(R21 *)rt_nil_check(l_E_238))).f_FL = ((rt_int)5LL);
}
r_SKIP();
((*(R21 *)rt_nil_check(l_E_238))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
}
{ R21 * rv239 = l_E_238;
return rv239; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_VARIANT_PACKING(void) { RT_B_TICK(); 
R21 * l_V_240; memset(&l_V_240, 0, sizeof l_V_240);
l_V_240 = r_NEW_NODE(g_N_VPACK, r_LINE_NOW());
R21 * l_HEAD_241; memset(&l_HEAD_241, 0, sizeof l_HEAD_241);
l_HEAD_241 = NULL;
R21 * l_TAIL_242; memset(&l_TAIL_242, 0, sizeof l_TAIL_242);
l_TAIL_242 = NULL;
r_EXPECT(rt_str("SELECT", 6));
S_R10(&((*(R21 *)rt_nil_check(l_V_240))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end243;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_V_240))).f_IV = ((rt_int)1LL);
if ((!r_IS(rt_str("END", 3))))
{
((*(R21 *)rt_nil_check(l_V_240))).f_B = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_240))).f_B))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
}
else
{
{
R21 * l_S_244; memset(&l_S_244, 0, sizeof l_S_244);
l_S_244 = r_NEW_NODE(g_N_VPSPEC, r_LINE_NOW());
R21 * l_LH_245; memset(&l_LH_245, 0, sizeof l_LH_245);
l_LH_245 = NULL;
R21 * l_LT_246; memset(&l_LT_246, 0, sizeof l_LT_246);
l_LT_246 = NULL;
R21 * l_PH_247; memset(&l_PH_247, 0, sizeof l_PH_247);
l_PH_247 = NULL;
R21 * l_PT_248; memset(&l_PT_248, 0, sizeof l_PT_248);
l_PT_248 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_245, &l_LT_246);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end249;
} L_end249: ;
r_EXPECT(rt_str("-->", 3));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end250;
{
r_ADD_LIST(r_PARSE_PACKING_SPEC(), &l_PH_247, &l_PT_248);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end250: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_S_244))).f_A = l_LH_245;
((*(R21 *)rt_nil_check(l_S_244))).f_B = l_PH_247;
r_ADD_LIST(l_S_244, &l_HEAD_241, &l_TAIL_242);
}
}
}
RT_B_TICK();
} L_end243: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
((*(R21 *)rt_nil_check(l_V_240))).f_A = l_HEAD_241;
{ R21 * rv251 = l_V_240;
return rv251; }
rt_raise(RT_X_INIT);
}
static R10 r_GEN_NAME(void) { RT_B_TICK(); 
R10 l_T_252; memset(&l_T_252, 0, sizeof l_T_252);
S_R10(&l_T_252, (r_CUR()).f_TX, 0);
r_SKIP();
if (((l_T_252).f_LEN == ((rt_int)1LL)))
{
{ R10 rv253 = r_NO_TEXT();
return rv253; }
}
{ R10 rv254 = r_MKN(rt_b_slice(r_STR(l_T_252, (l_T_252).f_LEN), ((rt_int)1LL), rt_sub((l_T_252).f_LEN, ((rt_int)1LL))));
return rv254; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TYPE_ARG(void) { RT_B_TICK(); 
R21 * l_N_255; memset(&l_N_255, 0, sizeof l_N_255);
if (r_IS_KIND(g_K_GEN))
{
{
R10 l_T_256; memset(&l_T_256, 0, sizeof l_T_256);
S_R10(&l_T_256, (r_CUR()).f_TX, 0);
if (((l_T_256).f_LEN == ((rt_int)1LL)))
{
r_SKIP();
{ R21 * rv257 = r_NEW_NODE(g_N_DONTCARE, r_LINE_NOW());
return rv257; }
}
}
l_N_255 = r_NEW_NODE(g_TS_GEN, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_N_255))).f_NAME, r_GEN_NAME(), 0);
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(l_N_255))).f_C = r_PARSE_REP();
}
{ R21 * rv258 = l_N_255;
return rv258; }
}
if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R21 * rv259 = r_NEW_NODE(g_N_ANY, r_LINE_NOW());
return rv259; }
}
if ((r_IS(rt_str("ARRAY", 5)) || r_IS(rt_str("RECORD", 6))))
{
{ R21 * rv260 = r_PARSE_TYPE_SPEC();
return rv260; }
}
if ((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM)))
{
{ R21 * rv261 = r_PARSE_TYPE_SPEC();
return rv261; }
}
l_N_255 = r_PARSE_EXPR();
if ((r_IS(rt_str("REP", 3)) || r_IS(rt_str("[", 1))))
{
{ R21 * rv262 = r_TYPE_SPEC_TAIL(r_EXPR_TO_TS(l_N_255));
return rv262; }
}
{ R21 * rv263 = l_N_255;
return rv263; }
rt_raise(RT_X_INIT);
}
static R21 * r_EXPR_TO_TS(R21 * p_E) { RT_B_TICK(); 
R21 * l_N_264; memset(&l_N_264, 0, sizeof l_N_264);
if ((((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_ARRAY)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_RECORD)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_ENUM)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN)))
{
{ R21 * rv265 = p_E;
return rv265; }
}
l_N_264 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME))
{
S_R10(&((*(R21 *)rt_nil_check(l_N_264))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R21 * rv266 = l_N_264;
return rv266; }
}
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
S_R10(&((*(R21 *)rt_nil_check(l_N_264))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_264))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R21 * rv267 = l_N_264;
return rv267; }
}
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD))
{
((*(R21 *)rt_nil_check(l_N_264))).f_FL = ((rt_int)3LL);
((*(R21 *)rt_nil_check(l_N_264))).f_E = p_E;
{ R21 * rv268 = l_N_264;
return rv268; }
}
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_SUBSTR))
{
l_N_264 = r_EXPR_TO_TS(((*(R21 *)rt_nil_check(p_E))).f_A);
if (((!(((*(R21 *)rt_nil_check(l_N_264))).f_KIND == g_TS_NAME)) || (!(((*(R21 *)rt_nil_check(l_N_264))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type specification expected", 29));
}
((*(R21 *)rt_nil_check(l_N_264))).f_B = r_NEW_NODE(g_N_RANGE, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_N_264))).f_B))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_B;
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_N_264))).f_B))).f_B = ((*(R21 *)rt_nil_check(p_E))).f_C;
{ R21 * rv269 = l_N_264;
return rv269; }
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
{ R21 * rv270 = p_N;
return rv270; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TYPE_SPEC(void) { RT_B_TICK(); 
R21 * l_N_271; memset(&l_N_271, 0, sizeof l_N_271);
R21 * l_HEAD_272; memset(&l_HEAD_272, 0, sizeof l_HEAD_272);
l_HEAD_272 = NULL;
R21 * l_TAIL_273; memset(&l_TAIL_273, 0, sizeof l_TAIL_273);
l_TAIL_273 = NULL;
rt_int l_LINE_274; memset(&l_LINE_274, 0, sizeof l_LINE_274);
l_LINE_274 = r_LINE_NOW();
if (r_ACCEPT(rt_str("ARRAY", 5)))
{
l_N_271 = r_NEW_NODE(g_TS_ARRAY, l_LINE_274);
r_EXPECT(rt_str("[", 1));
for (;;) {
{
{
R21 * l_R_276; memset(&l_R_276, 0, sizeof l_R_276);
l_R_276 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_R_276))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_R_276))).f_B = r_PARSE_EXPR();
r_ADD_LIST(l_R_276, &l_HEAD_272, &l_TAIL_273);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end275;
} L_end275: ;
r_EXPECT(rt_str("]", 1));
((*(R21 *)rt_nil_check(l_N_271))).f_A = l_HEAD_272;
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(l_N_271))).f_D = r_PARSE_REP();
}
r_EXPECT(rt_str("OF", 2));
((*(R21 *)rt_nil_check(l_N_271))).f_C = r_PARSE_TYPE_SPEC();
{ R21 * rv277 = l_N_271;
return rv277; }
}
if (r_ACCEPT(rt_str("RECORD", 6)))
{
l_N_271 = r_NEW_NODE(g_TS_RECORD, l_LINE_274);
((*(R21 *)rt_nil_check(l_N_271))).f_A = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("RECORD", 6));
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R21 *)rt_nil_check(l_N_271))).f_D = r_PARSE_REP();
}
{ R21 * rv278 = l_N_271;
return rv278; }
}
if (r_IS_KIND(g_K_GEN))
{
{ R21 * rv279 = r_PARSE_TYPE_ARG();
return rv279; }
}
if (r_IS(rt_str("(", 1)))
{
l_N_271 = r_NEW_NODE(g_TS_ENUM, l_LINE_274);
((*(R21 *)rt_nil_check(l_N_271))).f_A = r_PARSE_LITERALS();
{ R21 * rv280 = r_TYPE_SPEC_TAIL(l_N_271);
return rv280; }
}
l_N_271 = r_NEW_NODE(g_TS_NAME, l_LINE_274);
S_R10(&((*(R21 *)rt_nil_check(l_N_271))).f_NAME, r_IDENT(), 0);
if ((r_IS(rt_str(".", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
{
R21 * l_X_281; memset(&l_X_281, 0, sizeof l_X_281);
l_X_281 = r_NEW_NODE(g_N_NAME, l_LINE_274);
S_R10(&((*(R21 *)rt_nil_check(l_X_281))).f_NAME, ((*(R21 *)rt_nil_check(l_N_271))).f_NAME, 0);
for (;;) {
if ((!((r_IS(rt_str(".", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID))))) goto L_end282;
{
r_SKIP();
{
R21 * l_F_283; memset(&l_F_283, 0, sizeof l_F_283);
l_F_283 = r_NEW_NODE(g_N_FIELD, l_LINE_274);
((*(R21 *)rt_nil_check(l_F_283))).f_A = l_X_281;
S_R10(&((*(R21 *)rt_nil_check(l_F_283))).f_NAME, r_IDENT(), 0);
l_X_281 = l_F_283;
}
}
RT_B_TICK();
} L_end282: ;
((*(R21 *)rt_nil_check(l_N_271))).f_FL = ((rt_int)3LL);
((*(R21 *)rt_nil_check(l_N_271))).f_E = l_X_281;
{ R21 * rv284 = r_TYPE_SPEC_TAIL(l_N_271);
return rv284; }
}
}
if ((r_TEQS(((*(R21 *)rt_nil_check(l_N_271))).f_NAME, rt_str("ENUM", 4)) || r_TEQS(((*(R21 *)rt_nil_check(l_N_271))).f_NAME, rt_str("UNORDERED", 9))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_N_271))).f_NAME, rt_str("UNORDERED", 9)))
{
((*(R21 *)rt_nil_check(l_N_271))).f_IV = ((rt_int)1LL);
}
((*(R21 *)rt_nil_check(l_N_271))).f_KIND = g_TS_ENUM;
((*(R21 *)rt_nil_check(l_N_271))).f_A = r_PARSE_LITERALS();
{ R21 * rv285 = r_TYPE_SPEC_TAIL(l_N_271);
return rv285; }
}
if ((r_IS(rt_str("(", 1)) && (!r_RANGE_AHEAD())))
{
r_SKIP();
for (;;) {
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_N_271))).f_NAME, rt_str("PTR", 3)))
{
r_ADD_LIST(r_PARSE_TYPE_SPEC(), &l_HEAD_272, &l_TAIL_273);
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_272, &l_TAIL_273);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end286;
} L_end286: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_N_271))).f_A = l_HEAD_272;
}
{ R21 * rv287 = r_TYPE_SPEC_TAIL(l_N_271);
return rv287; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_LITERALS(void) { RT_B_TICK(); 
R21 * l_HEAD_288; memset(&l_HEAD_288, 0, sizeof l_HEAD_288);
l_HEAD_288 = NULL;
R21 * l_TAIL_289; memset(&l_TAIL_289, 0, sizeof l_TAIL_289);
l_TAIL_289 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_L_291; memset(&l_L_291, 0, sizeof l_L_291);
l_L_291 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
if ((!((r_IS_KIND(g_K_ENUM) || r_IS_KIND(g_K_ID)))))
{
r_FAIL(r_LINE_NOW(), rt_str("an enumerated literal expected", 30));
}
S_R10(&((*(R21 *)rt_nil_check(l_L_291))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_ADD_LIST(l_L_291, &l_HEAD_288, &l_TAIL_289);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end290;
} L_end290: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv292 = l_HEAD_288;
return rv292; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FIELDS(void) { RT_B_TICK(); 
R21 * l_HEAD_293; memset(&l_HEAD_293, 0, sizeof l_HEAD_293);
l_HEAD_293 = NULL;
R21 * l_TAIL_294; memset(&l_TAIL_294, 0, sizeof l_TAIL_294);
l_TAIL_294 = NULL;
for (;;) {
{
if (r_IS(rt_str("VAR", 3)))
{
{
R21 * l_F_296; memset(&l_F_296, 0, sizeof l_F_296);
l_F_296 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
r_SKIP();
((*(R21 *)rt_nil_check(l_F_296))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_F_296))).f_B = r_PARSE_TYPE_SPEC();
if ((!r_ACCEPT(rt_str(";", 1))))
{
r_EXPECT(rt_str(",", 1));
}
r_ADD_LIST(l_F_296, &l_HEAD_293, &l_TAIL_294);
}
}
else if (r_IS(rt_str("SELECT", 6)))
{
{
R21 * l_V_297; memset(&l_V_297, 0, sizeof l_V_297);
l_V_297 = r_NEW_NODE(g_N_VARIANT, r_LINE_NOW());
R21 * l_VH_298; memset(&l_VH_298, 0, sizeof l_VH_298);
l_VH_298 = NULL;
R21 * l_VT_299; memset(&l_VT_299, 0, sizeof l_VT_299);
l_VT_299 = NULL;
r_SKIP();
S_R10(&((*(R21 *)rt_nil_check(l_V_297))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end300;
{
{
R21 * l_S_301; memset(&l_S_301, 0, sizeof l_S_301);
l_S_301 = r_NEW_NODE(g_N_VARSPEC, r_LINE_NOW());
R21 * l_LH_302; memset(&l_LH_302, 0, sizeof l_LH_302);
l_LH_302 = NULL;
R21 * l_LT_303; memset(&l_LT_303, 0, sizeof l_LT_303);
l_LT_303 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_302, &l_LT_303);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end304;
} L_end304: ;
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_S_301))).f_A = l_LH_302;
((*(R21 *)rt_nil_check(l_S_301))).f_B = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_S_301, &l_VH_298, &l_VT_299);
}
}
RT_B_TICK();
} L_end300: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_V_297))).f_A = l_VH_298;
r_ADD_LIST(l_V_297, &l_HEAD_293, &l_TAIL_294);
}
}
else
{
goto L_end295;
}
}
RT_B_TICK();
} L_end295: ;
{ R21 * rv305 = l_HEAD_293;
return rv305; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_RANGE(void) { RT_B_TICK(); 
R21 * l_R_306; memset(&l_R_306, 0, sizeof l_R_306);
l_R_306 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_306))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("[", 1));
}
((*(R21 *)rt_nil_check(l_R_306))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_R_306))).f_B = r_PARSE_EXPR();
if (r_ACCEPT(rt_str(")", 1)))
{
((*(R21 *)rt_nil_check(l_R_306))).f_IV = rt_add(((*(R21 *)rt_nil_check(l_R_306))).f_IV, ((rt_int)2LL));
}
else
{
r_EXPECT(rt_str("]", 1));
}
{ R21 * rv307 = l_R_306;
return rv307; }
rt_raise(RT_X_INIT);
}
static rt_int r_RANGE_AHEAD(void) { RT_B_TICK(); 
rt_int l_DEPTH_308; memset(&l_DEPTH_308, 0, sizeof l_DEPTH_308);
l_DEPTH_308 = ((rt_int)0LL);
rt_int l_K_309; memset(&l_K_309, 0, sizeof l_K_309);
l_K_309 = ((rt_int)0LL);
for (;;) {
{
{
R9 l_T_311; memset(&l_T_311, 0, sizeof l_T_311);
S_R9(&l_T_311, r_AHEAD(l_K_309), 0);
if (((l_T_311).f_KIND == g_K_EOF))
{
{ rt_int rv312 = 0;
return rv312; }
}
if (((l_T_311).f_KIND == g_K_SYM))
{
if ((r_TEQS((l_T_311).f_TX, rt_str("(", 1)) || r_TEQS((l_T_311).f_TX, rt_str("[", 1))))
{
l_DEPTH_308 = rt_add(l_DEPTH_308, ((rt_int)1LL));
}
else if ((r_TEQS((l_T_311).f_TX, rt_str(")", 1)) || r_TEQS((l_T_311).f_TX, rt_str("]", 1))))
{
l_DEPTH_308 = rt_sub(l_DEPTH_308, ((rt_int)1LL));
if ((l_DEPTH_308 == ((rt_int)0LL)))
{
{ rt_int rv313 = 0;
return rv313; }
}
}
else if (((l_DEPTH_308 == ((rt_int)1LL)) && ((r_TEQS((l_T_311).f_TX, rt_str(":", 1)) || r_TEQS((l_T_311).f_TX, rt_str(",", 1))))))
{
{ rt_int rv314 = r_TEQS((l_T_311).f_TX, rt_str(":", 1));
return rv314; }
}
}
}
l_K_309 = rt_add(l_K_309, ((rt_int)1LL));
}
RT_B_TICK();
} L_end310: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_PARAMS(void) { RT_B_TICK(); 
R21 * l_HEAD_315; memset(&l_HEAD_315, 0, sizeof l_HEAD_315);
l_HEAD_315 = NULL;
R21 * l_TAIL_316; memset(&l_TAIL_316, 0, sizeof l_TAIL_316);
l_TAIL_316 = NULL;
rt_int l_MODE_317; memset(&l_MODE_317, 0, sizeof l_MODE_317);
l_MODE_317 = g_M_IN;
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end318;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_317 = rt_add(l_MODE_317, ((rt_int)1LL));
}
else
{
{
R21 * l_NAMES_319; memset(&l_NAMES_319, 0, sizeof l_NAMES_319);
l_NAMES_319 = r_IDENT_LIST();
R21 * l_TS_320; memset(&l_TS_320, 0, sizeof l_TS_320);
l_TS_320 = NULL;
R21 * l_P_321; memset(&l_P_321, 0, sizeof l_P_321);
l_P_321 = l_NAMES_319;
r_EXPECT(rt_str(":", 1));
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else if ((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))))
{
l_TS_320 = r_PARSE_ROUTINE_SPEC();
}
else
{
l_TS_320 = r_PARSE_TYPE_SPEC();
}
for (;;) {
if ((l_P_321 == NULL)) goto L_end322;
{
{
R21 * l_PN_323; memset(&l_PN_323, 0, sizeof l_PN_323);
l_PN_323 = r_NEW_NODE(g_N_PARAM, ((*(R21 *)rt_nil_check(l_P_321))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_PN_323))).f_NAME, ((*(R21 *)rt_nil_check(l_P_321))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_PN_323))).f_IV = l_MODE_317;
((*(R21 *)rt_nil_check(l_PN_323))).f_B = l_TS_320;
r_ADD_LIST(l_PN_323, &l_HEAD_315, &l_TAIL_316);
}
l_P_321 = ((*(R21 *)rt_nil_check(l_P_321))).f_NEXT;
}
RT_B_TICK();
} L_end322: ;
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end318: ;
r_EXPECT(rt_str(")", 1));
{ R21 * rv324 = l_HEAD_315;
return rv324; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TEMPLATE(rt_int p_FUNC) { RT_B_TICK(); 
R21 * l_R_325; memset(&l_R_325, 0, sizeof l_R_325);
l_R_325 = r_NEW_NODE(g_TS_ROUTINE, r_LINE_NOW());
R21 * l_HEAD_326; memset(&l_HEAD_326, 0, sizeof l_HEAD_326);
l_HEAD_326 = NULL;
R21 * l_TAIL_327; memset(&l_TAIL_327, 0, sizeof l_TAIL_327);
l_TAIL_327 = NULL;
rt_int l_MODE_328; memset(&l_MODE_328, 0, sizeof l_MODE_328);
l_MODE_328 = g_M_IN;
if (p_FUNC)
{
((*(R21 *)rt_nil_check(l_R_325))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end329;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_328 = rt_add(l_MODE_328, ((rt_int)1LL));
if (r_IS(rt_str(")", 1)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_325))).f_LINE, rt_str("a # must not be the last symbol of a proc-template (5.1)", 56));
}
}
else
{
{
R21 * l_P_330; memset(&l_P_330, 0, sizeof l_P_330);
l_P_330 = r_NEW_NODE(g_N_PARAM, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_P_330))).f_IV = l_MODE_328;
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else
{
((*(R21 *)rt_nil_check(l_P_330))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_P_330, &l_HEAD_326, &l_TAIL_327);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end329: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_R_325))).f_A = l_HEAD_326;
if (r_ACCEPT(rt_str("RETURNS", 7)))
{
((*(R21 *)rt_nil_check(l_R_325))).f_IV = ((rt_int)1LL);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_325))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R21 *)rt_nil_check(l_R_325))).f_B = r_PARSE_TYPE_SPEC();
}
}
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_R_325))).f_D = r_PAREN_IDENTS();
}
{ R21 * rv331 = l_R_325;
return rv331; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ROUTINE_SPEC(void) { RT_B_TICK(); 
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
{ R21 * rv332 = r_PARSE_TEMPLATE(1);
return rv332; }
}
r_EXPECT(rt_str("PROCEDURE", 9));
{ R21 * rv333 = r_PARSE_TEMPLATE(0);
return rv333; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_WHERE(void) { RT_B_TICK(); 
R21 * l_HEAD_334; memset(&l_HEAD_334, 0, sizeof l_HEAD_334);
l_HEAD_334 = NULL;
R21 * l_TAIL_335; memset(&l_TAIL_335, 0, sizeof l_TAIL_335);
l_TAIL_335 = NULL;
for (;;) {
{
{
R21 * l_N_337; memset(&l_N_337, 0, sizeof l_N_337);
l_N_337 = r_NEW_NODE(g_N_NEEDS, r_LINE_NOW());
R21 * l_TH_338; memset(&l_TH_338, 0, sizeof l_TH_338);
l_TH_338 = NULL;
R21 * l_TT_339; memset(&l_TT_339, 0, sizeof l_TT_339);
l_TT_339 = NULL;
S_R10(&((*(R21 *)rt_nil_check(l_N_337))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("NEEDS", 5));
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R21 * l_T_341; memset(&l_T_341, 0, sizeof l_T_341);
l_T_341 = r_NEW_NODE(g_N_TEMPLATE, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_T_341))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_T_341))).f_B = r_PARSE_TEMPLATE(0);
r_ADD_LIST(l_T_341, &l_TH_338, &l_TT_339);
}
if (r_ACCEPT(rt_str(";", 1)))
{
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end340;
} L_end340: ;
r_EXPECT(rt_str(")", 1));
((*(R21 *)rt_nil_check(l_N_337))).f_A = l_TH_338;
r_ADD_LIST(l_N_337, &l_HEAD_334, &l_TAIL_335);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end336;
} L_end336: ;
{ R21 * rv342 = l_HEAD_334;
return rv342; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ROUTINE(void) { RT_B_TICK(); 
R21 * l_R_343; memset(&l_R_343, 0, sizeof l_R_343);
l_R_343 = r_NEW_NODE(g_N_ROUTINE, r_LINE_NOW());
R21 * l_H_344; memset(&l_H_344, 0, sizeof l_H_344);
l_H_344 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
if (r_IS_TARGET_DECL())
{
r_SKIP();
((*(R21 *)rt_nil_check(l_R_343))).f_FL = ((rt_int)2LL);
}
if (r_ACCEPT(rt_str("INLINE", 6)))
{
if ((((*(R21 *)rt_nil_check(l_R_343))).f_FL == ((rt_int)2LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_343))).f_LINE, rt_str("target routines cannot be INLINE (4.8.2)", 40));
}
((*(R21 *)rt_nil_check(l_R_343))).f_FL = rt_add(((*(R21 *)rt_nil_check(l_R_343))).f_FL, ((rt_int)1LL));
}
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
((*(R21 *)rt_nil_check(l_R_343))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
S_R10(&((*(R21 *)rt_nil_check(l_R_343))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (r_IS(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_343))).f_A = r_PARSE_PARAMS();
}
if ((((*(R21 *)rt_nil_check(l_R_343))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("RETURNS", 7));
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_R_343))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R21 *)rt_nil_check(l_R_343))).f_B = r_PARSE_TYPE_SPEC();
}
}
for (;;) {
{
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_H_344))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_R_343))).f_E = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("WHERE", 5)))
{
((*(R21 *)rt_nil_check(l_H_344))).f_B = r_PARSE_WHERE();
}
else
{
goto L_end345;
}
}
RT_B_TICK();
} L_end345: ;
((*(R21 *)rt_nil_check(l_R_343))).f_D = l_H_344;
r_EXPECT(rt_str(";", 1));
if ((((*(R21 *)rt_nil_check(l_R_343))).f_FL >= ((rt_int)2LL)))
{
r_EXPECT(rt_str("DYNSIZE", 7));
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_H_344))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
r_EXPECT(rt_str(";", 1));
for (;;) {
if ((r_IS(rt_str("END", 3)) && ((r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PROCEDURE", 9)) || r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("FUNCTION", 8)))))) goto L_end346;
{
r_SKIP();
}
RT_B_TICK();
} L_end346: ;
}
else
{
((*(R21 *)rt_nil_check(l_R_343))).f_C = r_PARSE_CLOSED_BODY();
}
r_EXPECT(rt_str("END", 3));
if ((((*(R21 *)rt_nil_check(l_R_343))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("FUNCTION", 8));
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, ((*(R21 *)rt_nil_check(l_R_343))).f_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), ((*(R21 *)rt_nil_check(l_R_343))).f_NAME);
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv347 = l_R_343;
return rv347; }
rt_raise(RT_X_INIT);
}
static R21 * r_BIN_NODE(R10 p_OP, rt_int p_LINE, R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_N_348; memset(&l_N_348, 0, sizeof l_N_348);
l_N_348 = r_NEW_NODE(g_N_BINOP, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_348))).f_NAME, p_OP, 0);
((*(R21 *)rt_nil_check(l_N_348))).f_A = p_A;
((*(R21 *)rt_nil_check(l_N_348))).f_B = p_B;
{ R21 * rv349 = l_N_348;
return rv349; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_EXPR(void) { RT_B_TICK(); 
R21 * l_E_350; memset(&l_E_350, 0, sizeof l_E_350);
l_E_350 = r_PARSE_SIMPLE();
if (((((r_IS(rt_str("ROUNDED", 7)) || r_IS(rt_str("TRUNCATED", 9))) || r_IS(rt_str("NATIVE_R", 8))) || r_IS(rt_str("NATIVE_T", 8))) || r_ROUNDING_AHEAD()))
{
{
R21 * l_Q_351; memset(&l_Q_351, 0, sizeof l_Q_351);
l_Q_351 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_Q_351))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_Q_351))).f_A = l_E_350;
l_E_350 = l_Q_351;
}
}
if ((r_IS(rt_str("WITH", 4)) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PREC", 4))))
{
{
R21 * l_Q_352; memset(&l_Q_352, 0, sizeof l_Q_352);
l_Q_352 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
r_SKIP();
r_SKIP();
if ((((*(R21 *)rt_nil_check(l_E_350))).f_KIND == g_N_QUAL))
{
l_Q_352 = l_E_350;
}
else
{
((*(R21 *)rt_nil_check(l_Q_352))).f_A = l_E_350;
}
((*(R21 *)rt_nil_check(l_Q_352))).f_B = r_PARSE_SIMPLE();
l_E_350 = l_Q_352;
}
}
{ R21 * rv353 = l_E_350;
return rv353; }
rt_raise(RT_X_INIT);
}
static rt_int r_ROUNDING_AHEAD(void) { RT_B_TICK(); 
R9 l_N_354; memset(&l_N_354, 0, sizeof l_N_354);
S_R9(&l_N_354, r_AHEAD(((rt_int)1LL)), 0);
if ((!r_IS_KIND(g_K_ID)))
{
{ rt_int rv355 = 0;
return rv355; }
}
if ((((((((r_IS(rt_str("CONNECT", 7)) || r_IS(rt_str("SIGNALS", 7))) || r_IS(rt_str("IMPORTS", 7))) || r_IS(rt_str("PRIORITY", 8))) || r_IS(rt_str("WHERE", 5))) || r_IS(rt_str("NEEDS", 5))) || r_IS(rt_str("AS", 2))) || r_IS(rt_str("PREC", 4))))
{
{ rt_int rv356 = 0;
return rv356; }
}
{ rt_int rv357 = (!(((((((r_TOK_IS(l_N_354, rt_str("(", 1)) || r_TOK_IS(l_N_354, rt_str(".", 1))) || r_TOK_IS(l_N_354, rt_str(":=", 2))) || r_TOK_IS(l_N_354, rt_str(":", 1))) || r_TOK_IS(l_N_354, rt_str("$", 1))) || r_TOK_IS(l_N_354, rt_str("@", 1))) || r_TOK_IS(l_N_354, rt_str("[", 1)))));
return rv357; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SIMPLE(void) { RT_B_TICK(); 
R21 * l_LEFT_358; memset(&l_LEFT_358, 0, sizeof l_LEFT_358);
l_LEFT_358 = r_PARSE_CONJ();
for (;;) {
if ((!((((r_IS(rt_str("OR", 2)) || r_IS(rt_str("!", 1))) || r_IS(rt_str("XOR", 3))) || r_IS(rt_str("->", 2)))))) goto L_end359;
{
{
R9 l_T_360; memset(&l_T_360, 0, sizeof l_T_360);
S_R9(&l_T_360, r_CUR(), 0);
r_SKIP();
l_LEFT_358 = r_BIN_NODE((l_T_360).f_TX, (l_T_360).f_LINE, l_LEFT_358, r_PARSE_CONJ());
}
}
RT_B_TICK();
} L_end359: ;
{ R21 * rv361 = l_LEFT_358;
return rv361; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CONJ(void) { RT_B_TICK(); 
R21 * l_LEFT_362; memset(&l_LEFT_362, 0, sizeof l_LEFT_362);
l_LEFT_362 = r_PARSE_RELATION();
for (;;) {
if ((!((r_IS(rt_str("AND", 3)) || r_IS(rt_str("&", 1)))))) goto L_end363;
{
{
R9 l_T_364; memset(&l_T_364, 0, sizeof l_T_364);
S_R9(&l_T_364, r_CUR(), 0);
r_SKIP();
l_LEFT_362 = r_BIN_NODE((l_T_364).f_TX, (l_T_364).f_LINE, l_LEFT_362, r_PARSE_RELATION());
}
}
RT_B_TICK();
} L_end363: ;
{ R21 * rv365 = l_LEFT_362;
return rv365; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_RELATION(void) { RT_B_TICK(); 
R21 * l_LEFT_366; memset(&l_LEFT_366, 0, sizeof l_LEFT_366);
l_LEFT_366 = r_PARSE_SUM();
for (;;) {
{
{
R9 l_T_368; memset(&l_T_368, 0, sizeof l_T_368);
S_R9(&l_T_368, r_CUR(), 0);
if ((((((r_IS(rt_str("=", 1)) || r_IS(rt_str("<", 1))) || r_IS(rt_str(">", 1))) || r_IS(rt_str("<=", 2))) || r_IS(rt_str(">=", 2))) || r_IS(rt_str("<>", 2))))
{
r_SKIP();
l_LEFT_366 = r_BIN_NODE((l_T_368).f_TX, (l_T_368).f_LINE, l_LEFT_366, r_PARSE_SUM());
}
else if (r_IS(rt_str("IN", 2)))
{
{
R21 * l_N_369; memset(&l_N_369, 0, sizeof l_N_369);
l_N_369 = r_NEW_NODE(g_N_IN, (l_T_368).f_LINE);
r_SKIP();
((*(R21 *)rt_nil_check(l_N_369))).f_A = l_LEFT_366;
((*(R21 *)rt_nil_check(l_N_369))).f_B = r_PARSE_RANGE();
l_LEFT_366 = l_N_369;
}
}
else
{
{ R21 * rv370 = l_LEFT_366;
return rv370; }
}
}
}
RT_B_TICK();
} L_end367: ;
rt_raise(RT_X_INIT);
}
static R21 * r_TRY_SCALED(R21 * p_LEFT, rstr p_OPS) { RT_B_TICK(); 
rt_int l_SAVED_371; memset(&l_SAVED_371, 0, sizeof l_SAVED_371);
l_SAVED_371 = ((*(R7 *)rt_nil_check(g_W))).f_POS;
rt_int l_LINE_372; memset(&l_LINE_372, 0, sizeof l_LINE_372);
l_LINE_372 = r_LINE_NOW();
R21 * l_N_373; memset(&l_N_373, 0, sizeof l_N_373);
if ((!r_IS(rt_str("!", 1))))
{
{ R21 * rv374 = NULL;
return rv374; }
}
{
R9 l_OP_375; memset(&l_OP_375, 0, sizeof l_OP_375);
S_R9(&l_OP_375, r_AHEAD(((rt_int)1LL)), 0);
R10 l_T_376; memset(&l_T_376, 0, sizeof l_T_376);
S_R10(&l_T_376, (l_OP_375).f_TX, 0);
rt_int l_FOUND_377; memset(&l_FOUND_377, 0, sizeof l_FOUND_377);
l_FOUND_377 = 0;
if (((!((l_OP_375).f_KIND == g_K_SYM)) && (!((l_OP_375).f_KIND == g_K_RES))))
{
{ R21 * rv378 = NULL;
return rv378; }
}
{ rt_int it380_lo = ((rt_int)0LL), it380_hi = rt_sub((rt_int)(p_OPS).len, (l_T_376).f_LEN);
for (rt_int it380 = it380_lo; it380 <= it380_hi; it380++) {
{
if (rt_b_eq(rt_b_slice(p_OPS, it380, rt_sub(rt_add(it380, (l_T_376).f_LEN), ((rt_int)1LL))), r_STR(l_T_376, (l_T_376).f_LEN)))
{
if (((((it380 == ((rt_int)0LL)) || rt_b_eq(rt_b_slice(p_OPS, rt_sub(it380, ((rt_int)1LL)), rt_sub(it380, ((rt_int)1LL))), rt_str(" ", 1)))) && (((rt_add(it380, (l_T_376).f_LEN) == (rt_int)(p_OPS).len) || rt_b_eq(rt_b_slice(p_OPS, rt_add(it380, (l_T_376).f_LEN), rt_add(it380, (l_T_376).f_LEN)), rt_str(" ", 1))))))
{
l_FOUND_377 = 1;
}
}
}
RT_B_TICK();
if (it380 == it380_hi) break;
} } L_end379: ;
if ((!l_FOUND_377))
{
{ R21 * rv381 = NULL;
return rv381; }
}
r_SKIP();
r_SKIP();
l_N_373 = r_BIN_NODE(l_T_376, l_LINE_372, p_LEFT, NULL);
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R21 *)rt_nil_check(l_N_373))).f_FL = ((rt_int)2LL);
{ R21 * rv382 = l_N_373;
return rv382; }
}
if (((((r_IS_KIND(g_K_NUM) || r_IS_KIND(g_K_ID)) || r_IS(rt_str("(", 1))) || r_IS(rt_str("-", 1))) || r_IS(rt_str("+", 1))))
{
((*(R21 *)rt_nil_check(l_N_373))).f_D = r_PARSE_SECONDARY();
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R21 *)rt_nil_check(l_N_373))).f_FL = ((rt_int)1LL);
{ R21 * rv383 = l_N_373;
return rv383; }
}
}
((*(R7 *)rt_nil_check(g_W))).f_POS = l_SAVED_371;
{ R21 * rv384 = NULL;
return rv384; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SUM(void) { RT_B_TICK(); 
R21 * l_LEFT_385; memset(&l_LEFT_385, 0, sizeof l_LEFT_385);
l_LEFT_385 = r_PARSE_TERM();
for (;;) {
{
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("!!", 2))))
{
{
R9 l_T_387; memset(&l_T_387, 0, sizeof l_T_387);
S_R9(&l_T_387, r_CUR(), 0);
r_SKIP();
l_LEFT_385 = r_BIN_NODE((l_T_387).f_TX, (l_T_387).f_LINE, l_LEFT_385, r_PARSE_TERM());
}
}
else
{
{
R21 * l_N_388; memset(&l_N_388, 0, sizeof l_N_388);
l_N_388 = r_TRY_SCALED(l_LEFT_385, rt_str("+ -", 3));
if ((l_N_388 == NULL))
{
{ R21 * rv389 = l_LEFT_385;
return rv389; }
}
((*(R21 *)rt_nil_check(l_N_388))).f_B = r_PARSE_TERM();
l_LEFT_385 = l_N_388;
}
}
}
RT_B_TICK();
} L_end386: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_TERM(void) { RT_B_TICK(); 
R21 * l_LEFT_390; memset(&l_LEFT_390, 0, sizeof l_LEFT_390);
l_LEFT_390 = r_PARSE_FACTOR();
for (;;) {
{
if ((((r_IS(rt_str("*", 1)) || r_IS(rt_str("/", 1))) || r_IS(rt_str("//", 2))) || r_IS(rt_str("MOD", 3))))
{
{
R9 l_T_392; memset(&l_T_392, 0, sizeof l_T_392);
S_R9(&l_T_392, r_CUR(), 0);
r_SKIP();
l_LEFT_390 = r_BIN_NODE((l_T_392).f_TX, (l_T_392).f_LINE, l_LEFT_390, r_PARSE_FACTOR());
}
}
else
{
{
R21 * l_N_393; memset(&l_N_393, 0, sizeof l_N_393);
l_N_393 = r_TRY_SCALED(l_LEFT_390, rt_str("* / // MOD", 10));
if ((l_N_393 == NULL))
{
{ R21 * rv394 = l_LEFT_390;
return rv394; }
}
((*(R21 *)rt_nil_check(l_N_393))).f_B = r_PARSE_FACTOR();
l_LEFT_390 = l_N_393;
}
}
}
RT_B_TICK();
} L_end391: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_FACTOR(void) { RT_B_TICK(); 
R21 * l_LEFT_395; memset(&l_LEFT_395, 0, sizeof l_LEFT_395);
l_LEFT_395 = r_PARSE_SECONDARY();
for (;;) {
{
if (r_IS(rt_str("**", 2)))
{
{
R9 l_T_397; memset(&l_T_397, 0, sizeof l_T_397);
S_R9(&l_T_397, r_CUR(), 0);
r_SKIP();
l_LEFT_395 = r_BIN_NODE((l_T_397).f_TX, (l_T_397).f_LINE, l_LEFT_395, r_PARSE_SECONDARY());
}
}
else
{
{
R21 * l_N_398; memset(&l_N_398, 0, sizeof l_N_398);
l_N_398 = r_TRY_SCALED(l_LEFT_395, rt_str("**", 2));
if ((l_N_398 == NULL))
{
{ R21 * rv399 = l_LEFT_395;
return rv399; }
}
((*(R21 *)rt_nil_check(l_N_398))).f_B = r_PARSE_SECONDARY();
l_LEFT_395 = l_N_398;
}
}
}
RT_B_TICK();
} L_end396: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_SECONDARY(void) { RT_B_TICK(); 
R9 l_T_400; memset(&l_T_400, 0, sizeof l_T_400);
S_R9(&l_T_400, r_CUR(), 0);
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("NOT", 3))))
{
{
R21 * l_N_401; memset(&l_N_401, 0, sizeof l_N_401);
l_N_401 = r_NEW_NODE(g_N_UNOP, (l_T_400).f_LINE);
r_SKIP();
S_R10(&((*(R21 *)rt_nil_check(l_N_401))).f_NAME, (l_T_400).f_TX, 0);
((*(R21 *)rt_nil_check(l_N_401))).f_A = r_PARSE_POSTFIX();
{ R21 * rv402 = l_N_401;
return rv402; }
}
}
{ R21 * rv403 = r_PARSE_POSTFIX();
return rv403; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ARGS(R21 * p_N) { RT_B_TICK(); 
R21 * l_HEAD_404; memset(&l_HEAD_404, 0, sizeof l_HEAD_404);
l_HEAD_404 = NULL;
R21 * l_TAIL_405; memset(&l_TAIL_405, 0, sizeof l_TAIL_405);
l_TAIL_405 = NULL;
rt_int l_GROUP_406; memset(&l_GROUP_406, 0, sizeof l_GROUP_406);
l_GROUP_406 = ((rt_int)0LL);
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end407;
{
if (r_ACCEPT(rt_str("#", 1)))
{
switch (l_GROUP_406) {
case 0:
{
((*(R21 *)rt_nil_check(p_N))).f_A = l_HEAD_404;
}
break;
case 1:
{
((*(R21 *)rt_nil_check(p_N))).f_B = l_HEAD_404;
}
break;
default:
{
r_FAIL(((*(R21 *)rt_nil_check(p_N))).f_LINE, rt_str("too many # in an argument list", 30));
}
break;
}
l_GROUP_406 = rt_add(l_GROUP_406, ((rt_int)1LL));
l_HEAD_404 = NULL;
l_TAIL_405 = NULL;
}
else
{
if ((l_GROUP_406 == ((rt_int)0LL)))
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_404, &l_TAIL_405);
if ((r_IS(rt_str("RETURNS", 7)) && (((*(R21 *)rt_nil_check(l_TAIL_405))).f_KIND == g_N_APPLY)))
{
r_SKIP();
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_TAIL_405))).f_E = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
}
else
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_404, &l_TAIL_405);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
RT_B_TICK();
} L_end407: ;
r_EXPECT(rt_str(")", 1));
switch (l_GROUP_406) {
case 0:
{
((*(R21 *)rt_nil_check(p_N))).f_A = l_HEAD_404;
}
break;
case 1:
{
((*(R21 *)rt_nil_check(p_N))).f_B = l_HEAD_404;
}
break;
default:
{
((*(R21 *)rt_nil_check(p_N))).f_C = l_HEAD_404;
}
break;
}
{ R21 * rv408 = p_N;
return rv408; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_POSTFIX(void) { RT_B_TICK(); 
R21 * l_E_409; memset(&l_E_409, 0, sizeof l_E_409);
l_E_409 = r_PARSE_ATOM();
R21 * l_N_410; memset(&l_N_410, 0, sizeof l_N_410);
for (;;) {
{
{
rt_int l_LINE_412; memset(&l_LINE_412, 0, sizeof l_LINE_412);
l_LINE_412 = r_LINE_NOW();
if ((r_IS(rt_str("(", 1)) && (((*(R21 *)rt_nil_check(l_E_409))).f_KIND == g_N_ENUMLIT)))
{
((*(R21 *)rt_nil_check(l_E_409))).f_KIND = g_N_NAME;
}
if ((r_IS(rt_str("(", 1)) && (((*(R21 *)rt_nil_check(l_E_409))).f_KIND == g_N_NAME)))
{
((*(R21 *)rt_nil_check(l_E_409))).f_KIND = g_N_APPLY;
l_E_409 = r_PARSE_ARGS(l_E_409);
}
else if (r_IS(rt_str("(", 1)))
{
l_N_410 = r_NEW_NODE(g_N_INDEX, l_LINE_412);
l_N_410 = r_PARSE_ARGS(l_N_410);
((*(R21 *)rt_nil_check(l_N_410))).f_B = ((*(R21 *)rt_nil_check(l_N_410))).f_A;
((*(R21 *)rt_nil_check(l_N_410))).f_A = l_E_409;
l_E_409 = l_N_410;
}
else if (r_ACCEPT(rt_str(".", 1)))
{
l_N_410 = r_NEW_NODE(g_N_FIELD, l_LINE_412);
((*(R21 *)rt_nil_check(l_N_410))).f_A = l_E_409;
S_R10(&((*(R21 *)rt_nil_check(l_N_410))).f_NAME, r_IDENT(), 0);
l_E_409 = l_N_410;
}
else if (r_ACCEPT(rt_str("@", 1)))
{
l_N_410 = r_NEW_NODE(g_N_DEREF, l_LINE_412);
((*(R21 *)rt_nil_check(l_N_410))).f_A = l_E_409;
l_E_409 = l_N_410;
}
else if ((r_IS(rt_str("[", 1)) && (!r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("]", 1)))))
{
r_SKIP();
l_N_410 = r_NEW_NODE(g_N_SUBSTR, l_LINE_412);
((*(R21 *)rt_nil_check(l_N_410))).f_A = l_E_409;
((*(R21 *)rt_nil_check(l_N_410))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_410))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str("]", 1));
l_E_409 = l_N_410;
}
else
{
{ R21 * rv413 = l_E_409;
return rv413; }
}
}
}
RT_B_TICK();
} L_end411: ;
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_BITS(rt_int p_BITS_PER, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_AT_414; memset(&l_AT_414, 0, sizeof l_AT_414);
l_AT_414 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R21 * l_N_415; memset(&l_N_415, 0, sizeof l_N_415);
l_N_415 = r_NEW_NODE(g_N_BITS, p_LINE);
R10 l_R_416; memset(&l_R_416, 0, sizeof l_R_416);
if ((!r_IS_KIND(g_K_STR)))
{
r_FAIL(p_LINE, rt_str("a quoted bitstring expected", 27));
}
for (;;) {
if ((!r_IS_KIND(g_K_STR))) goto L_end417;
{
{
R10 l_T_418; memset(&l_T_418, 0, sizeof l_T_418);
S_R10(&l_T_418, (r_CUR()).f_TX, 0);
rstr l_S_419; memset(&l_S_419, 0, sizeof l_S_419);
l_S_419 = rt_b_str_new((l_T_418).f_LEN, 0);
rt_b_assign(&l_S_419, r_STR(l_T_418, (l_T_418).f_LEN));
{ rt_int it421_lo = ((rt_int)0LL), it421_hi = rt_sub((l_T_418).f_LEN, ((rt_int)1LL));
for (rt_int it421 = it421_lo; it421 <= it421_hi; it421++) {
{
if ((!rt_b_eq(rt_b_slice(l_S_419, it421, it421), rt_str(" ", 1))))
{
{
rt_int l_C_422; memset(&l_C_422, 0, sizeof l_C_422);
l_C_422 = r_CODE_OF(rt_b_slice(l_S_419, it421, it421));
rt_int l_V_423; memset(&l_V_423, 0, sizeof l_V_423);
l_V_423 = rt_sub(l_C_422, ((rt_int)48LL));
rt_int l_P_424; memset(&l_P_424, 0, sizeof l_P_424);
l_P_424 = ((rt_int)1LL);
if ((l_C_422 >= ((rt_int)65LL)))
{
l_V_423 = rt_sub(l_C_422, ((rt_int)55LL));
}
{ rt_int it426_lo = ((rt_int)1LL), it426_hi = p_BITS_PER;
for (rt_int it426 = it426_lo; it426 <= it426_hi; it426++) {
{
l_P_424 = rt_mul(l_P_424, ((rt_int)2LL));
}
RT_B_TICK();
if (it426 == it426_hi) break;
} } L_end425: ;
if (((l_V_423 < ((rt_int)0LL)) || (l_V_423 >= l_P_424)))
{
r_FAIL(p_LINE, rt_str("a bad digit in a bitstring literal", 34));
}
{ rt_int it428_lo = ((rt_int)1LL), it428_hi = p_BITS_PER;
for (rt_int it428 = it428_lo; it428 <= it428_hi; it428++) {
{
l_P_424 = rt_quot(l_P_424, ((rt_int)2LL));
if ((rt_rem((rt_quot(l_V_423, l_P_424)), ((rt_int)2LL)) == ((rt_int)1LL)))
{
S_R10(&l_R_416, r_MK(rt_str("1", 1)), 0);
}
else
{
S_R10(&l_R_416, r_MK(rt_str("0", 1)), 0);
}
}
RT_B_TICK();
if (it428 == it428_hi) break;
} } L_end427: ;
}
}
}
RT_B_TICK();
if (it421 == it421_hi) break;
} } L_end420: ;
}
r_SKIP();
}
RT_B_TICK();
} L_end417: ;
S_R10(&((*(R21 *)rt_nil_check(l_N_415))).f_NAME, ({ R10 rc429; memset(&rc429, 0, sizeof rc429);  rc429.f_AT = l_AT_414; rc429.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_414); rc429.f_H = rt_neg(((rt_int)1LL)); rc429; }), 0);
{ R21 * rv430 = l_N_415;
return rv430; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_ATOM(void) { RT_B_TICK(); 
R9 l_T_431; memset(&l_T_431, 0, sizeof l_T_431);
S_R9(&l_T_431, r_CUR(), 0);
R21 * l_N_432; memset(&l_N_432, 0, sizeof l_N_432);
if (((l_T_431).f_KIND == g_K_NUM))
{
l_N_432 = r_NEW_NODE(g_N_INT, (l_T_431).f_LINE);
((*(R21 *)rt_nil_check(l_N_432))).f_IV = (l_T_431).f_IV;
S_R10(&((*(R21 *)rt_nil_check(l_N_432))).f_NAME, (l_T_431).f_TX, 0);
r_SKIP();
{ R21 * rv433 = l_N_432;
return rv433; }
}
if ((((l_T_431).f_KIND == g_K_REAL) || ((l_T_431).f_KIND == g_K_FIX)))
{
l_N_432 = r_NEW_NODE(g_N_REAL, (l_T_431).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_432))).f_NAME, (l_T_431).f_TX, 0);
if (((l_T_431).f_KIND == g_K_FIX))
{
((*(R21 *)rt_nil_check(l_N_432))).f_FL = ((rt_int)1LL);
((*(R21 *)rt_nil_check(l_N_432))).f_IV = (l_T_431).f_IV;
}
r_SKIP();
{ R21 * rv434 = l_N_432;
return rv434; }
}
if (((l_T_431).f_KIND == g_K_GEN))
{
{ R21 * rv435 = r_PARSE_TYPE_ARG();
return rv435; }
}
if (((r_IS(rt_str("BIN", 3)) || r_IS(rt_str("OCT", 3))) || r_IS(rt_str("HEX", 3))))
{
r_SKIP();
if (r_TOK_IS(l_T_431, rt_str("BIN", 3)))
{
{ R21 * rv436 = r_PARSE_BITS(((rt_int)1LL), (l_T_431).f_LINE);
return rv436; }
}
else if (r_TOK_IS(l_T_431, rt_str("OCT", 3)))
{
{ R21 * rv437 = r_PARSE_BITS(((rt_int)3LL), (l_T_431).f_LINE);
return rv437; }
}
{ R21 * rv438 = r_PARSE_BITS(((rt_int)4LL), (l_T_431).f_LINE);
return rv438; }
}
if ((((l_T_431).f_KIND == g_K_STR) || ((l_T_431).f_KIND == g_K_ENUM)))
{
{ R21 * rv439 = r_PARSE_CHARSTRING(r_NO_TEXT());
return rv439; }
}
if ((((l_T_431).f_KIND == g_K_ID) && ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_STR) || (((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM) && (!r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str("(", 1)))) && (!r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":=", 2)))))))))
{
r_SKIP();
{ R21 * rv440 = r_PARSE_CHARSTRING((l_T_431).f_TX);
return rv440; }
}
if (r_ACCEPT(rt_str("TRUE", 4)))
{
l_N_432 = r_NEW_NODE(g_N_BOOL, (l_T_431).f_LINE);
((*(R21 *)rt_nil_check(l_N_432))).f_IV = ((rt_int)1LL);
{ R21 * rv441 = l_N_432;
return rv441; }
}
else if (r_ACCEPT(rt_str("FALSE", 5)))
{
{ R21 * rv442 = r_NEW_NODE(g_N_BOOL, (l_T_431).f_LINE);
return rv442; }
}
else if (r_ACCEPT(rt_str("NIL", 3)))
{
{ R21 * rv443 = r_NEW_NODE(g_N_NIL, (l_T_431).f_LINE);
return rv443; }
}
else if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R21 * rv444 = r_NEW_NODE(g_N_ANY, (l_T_431).f_LINE);
return rv444; }
}
if (r_ACCEPT(rt_str("[", 1)))
{
{
R21 * l_TS_445; memset(&l_TS_445, 0, sizeof l_TS_445);
l_TS_445 = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str("]", 1));
r_EXPECT(rt_str("$$", 2));
if (((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
l_N_432 = r_PARSE_ATOM();
((*(R21 *)rt_nil_check(l_N_432))).f_B = l_TS_445;
{ R21 * rv446 = l_N_432;
return rv446; }
}
l_N_432 = r_NEW_NODE(g_N_TYPESPEC, (l_T_431).f_LINE);
((*(R21 *)rt_nil_check(l_N_432))).f_A = l_TS_445;
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_N_432))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
{ R21 * rv447 = l_N_432;
return rv447; }
}
}
if (r_IS(rt_str("(", 1)))
{
if ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
{
R21 * l_HEAD_448; memset(&l_HEAD_448, 0, sizeof l_HEAD_448);
l_HEAD_448 = NULL;
R21 * l_TAIL_449; memset(&l_TAIL_449, 0, sizeof l_TAIL_449);
l_TAIL_449 = NULL;
r_SKIP();
for (;;) {
{
l_N_432 = r_NEW_NODE(g_N_FINIT, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_N_432))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(":", 1));
((*(R21 *)rt_nil_check(l_N_432))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_N_432, &l_HEAD_448, &l_TAIL_449);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end450;
} L_end450: ;
r_EXPECT(rt_str(")", 1));
l_N_432 = r_NEW_NODE(g_N_RECCONS, (l_T_431).f_LINE);
((*(R21 *)rt_nil_check(l_N_432))).f_A = l_HEAD_448;
{ R21 * rv451 = l_N_432;
return rv451; }
}
}
r_SKIP();
{
R21 * l_E_452; memset(&l_E_452, 0, sizeof l_E_452);
l_E_452 = r_PARSE_EXPR();
if (r_IS(rt_str(",", 1)))
{
{
R21 * l_HEAD_453; memset(&l_HEAD_453, 0, sizeof l_HEAD_453);
l_HEAD_453 = NULL;
R21 * l_TAIL_454; memset(&l_TAIL_454, 0, sizeof l_TAIL_454);
l_TAIL_454 = NULL;
r_ADD_LIST(l_E_452, &l_HEAD_453, &l_TAIL_454);
for (;;) {
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end455;
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_453, &l_TAIL_454);
}
RT_B_TICK();
} L_end455: ;
r_EXPECT(rt_str(")", 1));
l_N_432 = r_NEW_NODE(g_N_ARRCONS, (l_T_431).f_LINE);
((*(R21 *)rt_nil_check(l_N_432))).f_A = l_HEAD_453;
{ R21 * rv456 = l_N_432;
return rv456; }
}
}
r_EXPECT(rt_str(")", 1));
l_N_432 = r_NEW_NODE(g_N_PAREN, (l_T_431).f_LINE);
((*(R21 *)rt_nil_check(l_N_432))).f_A = l_E_452;
{ R21 * rv457 = l_N_432;
return rv457; }
}
}
if (((l_T_431).f_KIND == g_K_ID))
{
l_N_432 = r_NEW_NODE(g_N_NAME, (l_T_431).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_432))).f_NAME, ((*(R21 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (((((r_TEQS(((*(R21 *)rt_nil_check(l_N_432))).f_NAME, rt_str("NEW", 3)) || r_TEQS(((*(R21 *)rt_nil_check(l_N_432))).f_NAME, rt_str("PTR$NEW", 7))) || r_TEQS(((*(R21 *)rt_nil_check(l_N_432))).f_NAME, rt_str("SEMAPHORE$NEW", 13)))) && r_IS(rt_str("(", 1))))
{
((*(R21 *)rt_nil_check(l_N_432))).f_KIND = g_N_NEW;
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_N_432))).f_A = r_PARSE_TYPE_ARG();
r_EXPECT(rt_str(")", 1));
}
{ R21 * rv458 = l_N_432;
return rv458; }
}
r_FAILT((l_T_431).f_LINE, rt_str("an expression expected, not ", 28), (l_T_431).f_TX);
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CHARSTRING(R10 p_CHARSET) { RT_B_TICK(); 
rt_int l_LINE_459; memset(&l_LINE_459, 0, sizeof l_LINE_459);
l_LINE_459 = r_LINE_NOW();
R21 * l_HEAD_460; memset(&l_HEAD_460, 0, sizeof l_HEAD_460);
l_HEAD_460 = NULL;
R21 * l_TAIL_461; memset(&l_TAIL_461, 0, sizeof l_TAIL_461);
l_TAIL_461 = NULL;
rt_int l_STRINGS_462; memset(&l_STRINGS_462, 0, sizeof l_STRINGS_462);
l_STRINGS_462 = ((rt_int)0LL);
R21 * l_N_463; memset(&l_N_463, 0, sizeof l_N_463);
for (;;) {
if ((!((r_IS_KIND(g_K_STR) || r_IS_KIND(g_K_ENUM))))) goto L_end464;
{
l_N_463 = r_NEW_NODE(g_N_PART, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_N_463))).f_IV = (r_CUR()).f_KIND;
S_R10(&((*(R21 *)rt_nil_check(l_N_463))).f_NAME, (r_CUR()).f_TX, 0);
if ((((*(R21 *)rt_nil_check(l_N_463))).f_IV == g_K_STR))
{
l_STRINGS_462 = rt_add(l_STRINGS_462, ((rt_int)1LL));
}
r_SKIP();
r_ADD_LIST(l_N_463, &l_HEAD_460, &l_TAIL_461);
}
RT_B_TICK();
} L_end464: ;
if ((((l_STRINGS_462 == ((rt_int)0LL)) && ((p_CHARSET).f_LEN == ((rt_int)0LL))) && (((*(R21 *)rt_nil_check(l_HEAD_460))).f_NEXT == NULL)))
{
((*(R21 *)rt_nil_check(l_HEAD_460))).f_KIND = g_N_ENUMLIT;
{ R21 * rv465 = l_HEAD_460;
return rv465; }
}
l_N_463 = r_NEW_NODE(g_N_STR, l_LINE_459);
((*(R21 *)rt_nil_check(l_N_463))).f_A = l_HEAD_460;
S_R10(&((*(R21 *)rt_nil_check(l_N_463))).f_NAME, p_CHARSET, 0);
{ R21 * rv466 = l_N_463;
return rv466; }
rt_raise(RT_X_INIT);
}
static rt_int r_AT_BODY_END(void) { RT_B_TICK(); 
{ rt_int rv467 = ((((((((((r_IS_KIND(g_K_EOF) || r_IS(rt_str("END", 3))) || r_IS(rt_str("ELSE", 4))) || r_IS(rt_str("ORIF", 4))) || r_IS(rt_str("EXCEPT", 6))) || r_IS(rt_str("PROCEDURE", 9))) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()) || r_IS(rt_str("MODULE", 6))) || r_IS(rt_str("PATH", 4)));
return rv467; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_STATEMENTS(void) { RT_B_TICK(); 
R21 * l_HEAD_468; memset(&l_HEAD_468, 0, sizeof l_HEAD_468);
l_HEAD_468 = NULL;
R21 * l_TAIL_469; memset(&l_TAIL_469, 0, sizeof l_TAIL_469);
l_TAIL_469 = NULL;
for (;;) {
if (r_AT_BODY_END()) goto L_end470;
{
r_ADD_LIST(r_PARSE_STATEMENT(), &l_HEAD_468, &l_TAIL_469);
}
RT_B_TICK();
} L_end470: ;
{ R21 * rv471 = l_HEAD_468;
return rv471; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_HANDLERS(void) { RT_B_TICK(); 
R21 * l_HEAD_472; memset(&l_HEAD_472, 0, sizeof l_HEAD_472);
l_HEAD_472 = NULL;
R21 * l_TAIL_473; memset(&l_TAIL_473, 0, sizeof l_TAIL_473);
l_TAIL_473 = NULL;
r_EXPECT(rt_str("EXCEPT", 6));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end474;
{
{
R21 * l_H_475; memset(&l_H_475, 0, sizeof l_H_475);
l_H_475 = r_NEW_NODE(g_N_HANDLER, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_H_475))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_H_475))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_H_475, &l_HEAD_472, &l_TAIL_473);
}
}
RT_B_TICK();
} L_end474: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("EXCEPT", 6));
r_EXPECT(rt_str(";", 1));
{ R21 * rv476 = l_HEAD_472;
return rv476; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_STATEMENT(void) { RT_B_TICK(); 
R21 * l_S_477; memset(&l_S_477, 0, sizeof l_S_477);
if ((r_IS_KIND(g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str(":", 1))))
{
l_S_477 = r_NEW_NODE(g_N_LABELED, r_LINE_NOW());
S_R10(&((*(R21 *)rt_nil_check(l_S_477))).f_NAME, r_IDENT(), 0);
r_SKIP();
((*(R21 *)rt_nil_check(l_S_477))).f_A = r_PARSE_STATEMENT();
{ R21 * rv478 = l_S_477;
return rv478; }
}
l_S_477 = r_PARSE_UNLABELED();
if (r_IS(rt_str("EXCEPT", 6)))
{
{
R21 * l_X_479; memset(&l_X_479, 0, sizeof l_X_479);
l_X_479 = r_NEW_NODE(g_N_EXCEPT, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_X_479))).f_A = l_S_477;
((*(R21 *)rt_nil_check(l_X_479))).f_B = r_PARSE_HANDLERS();
{ R21 * rv480 = l_X_479;
return rv480; }
}
}
{ R21 * rv481 = l_S_477;
return rv481; }
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
rt_int l_LINE_482; memset(&l_LINE_482, 0, sizeof l_LINE_482);
l_LINE_482 = r_LINE_NOW();
R21 * l_S_483; memset(&l_S_483, 0, sizeof l_S_483);
R21 * l_T_484; memset(&l_T_484, 0, sizeof l_T_484);
if (r_ACCEPT(rt_str(";", 1)))
{
{ R21 * rv485 = r_NEW_NODE(g_N_NULL, l_LINE_482);
return rv485; }
}
else if (r_IS(rt_str("IF", 2)))
{
{ R21 * rv486 = r_PARSE_IF();
return rv486; }
}
else if (r_IS(rt_str("SELECT", 6)))
{
{ R21 * rv487 = r_PARSE_CASE();
return rv487; }
}
else if (r_IS(rt_str("LOOP", 4)))
{
{ R21 * rv488 = r_PARSE_LOOP();
return rv488; }
}
else if (r_IS(rt_str("PAR_BLOCK", 9)))
{
{ R21 * rv489 = r_PARSE_PAR();
return rv489; }
}
else if (r_ACCEPT(rt_str("BLOCK", 5)))
{
l_S_483 = r_NEW_NODE(g_N_BLOCK, l_LINE_482);
((*(R21 *)rt_nil_check(l_S_483))).f_A = r_PARSE_BODY();
r_EXPECT_END(rt_str("BLOCK", 5));
{ R21 * rv490 = l_S_483;
return rv490; }
}
else if (r_ACCEPT(rt_str("WITH", 4)))
{
l_S_483 = r_NEW_NODE(g_N_WITH, l_LINE_482);
S_R10(&((*(R21 *)rt_nil_check(l_S_483))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("NAMING", 6)))
{
((*(R21 *)rt_nil_check(l_S_483))).f_IV = ((rt_int)1LL);
((*(R21 *)rt_nil_check(l_S_483))).f_A = r_PARSE_POSTFIX();
}
else
{
r_EXPECT(rt_str(":=", 2));
((*(R21 *)rt_nil_check(l_S_483))).f_A = r_PARSE_EXPR();
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
((*(R21 *)rt_nil_check(l_S_483))).f_B = r_PARSE_UNLABELED();
{ R21 * rv491 = l_S_483;
return rv491; }
}
else if (r_ACCEPT(rt_str("EXIT", 4)))
{
r_EXPECT(rt_str(";", 1));
{ R21 * rv492 = r_NEW_NODE(g_N_EXIT, l_LINE_482);
return rv492; }
}
else if (r_ACCEPT(rt_str("GO", 2)))
{
r_EXPECT(rt_str("TO", 2));
l_S_483 = r_NEW_NODE(g_N_GOTO, l_LINE_482);
S_R10(&((*(R21 *)rt_nil_check(l_S_483))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(";", 1));
{ R21 * rv493 = l_S_483;
return rv493; }
}
else if (r_ACCEPT(rt_str("RETURN", 6)))
{
l_S_483 = r_NEW_NODE(g_N_RETURN, l_LINE_482);
if ((!r_IS(rt_str(";", 1))))
{
((*(R21 *)rt_nil_check(l_S_483))).f_A = r_PARSE_EXPR();
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv494 = l_S_483;
return rv494; }
}
else if (r_ACCEPT(rt_str("SIGNAL", 6)))
{
l_S_483 = r_NEW_NODE(g_N_SIGNAL, l_LINE_482);
if (r_IS_KIND(g_K_ID))
{
S_R10(&((*(R21 *)rt_nil_check(l_S_483))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv495 = l_S_483;
return rv495; }
}
else if (r_ACCEPT(rt_str("ASSERT", 6)))
{
l_S_483 = r_NEW_NODE(g_N_ASSERT, l_LINE_482);
((*(R21 *)rt_nil_check(l_S_483))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R21 * rv496 = l_S_483;
return rv496; }
}
else if (r_ACCEPT(rt_str("TERMINATE", 9)))
{
l_S_483 = r_NEW_NODE(g_N_TERMINATE, l_LINE_482);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R21 *)rt_nil_check(l_S_483))).f_A = r_PARSE_POSTFIX();
r_EXPECT(rt_str(")", 1));
}
r_EXPECT(rt_str(";", 1));
{ R21 * rv497 = l_S_483;
return rv497; }
}
l_T_484 = r_PARSE_POSTFIX();
if (r_IS(rt_str("[", 1)))
{
r_FAIL(l_LINE_482, rt_str("a substring of a substring", 26));
}
if (r_ACCEPT(rt_str(":=", 2)))
{
l_S_483 = r_NEW_NODE(g_N_ASSIGN, l_LINE_482);
((*(R21 *)rt_nil_check(l_S_483))).f_A = l_T_484;
((*(R21 *)rt_nil_check(l_S_483))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R21 * rv498 = l_S_483;
return rv498; }
}
r_EXPECT(rt_str(";", 1));
if ((((((*(R21 *)rt_nil_check(l_T_484))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_T_484))).f_KIND == g_N_APPLY)) || (((*(R21 *)rt_nil_check(l_T_484))).f_KIND == g_N_ENUMLIT)))
{
((*(R21 *)rt_nil_check(l_T_484))).f_KIND = g_N_CALL;
}
else
{
r_FAIL(l_LINE_482, rt_str("a statement expected", 20));
}
{ R21 * rv499 = l_T_484;
return rv499; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_IF(void) { RT_B_TICK(); 
R21 * l_S_500; memset(&l_S_500, 0, sizeof l_S_500);
l_S_500 = r_NEW_NODE(g_N_IF, r_LINE_NOW());
R21 * l_HEAD_501; memset(&l_HEAD_501, 0, sizeof l_HEAD_501);
l_HEAD_501 = NULL;
R21 * l_TAIL_502; memset(&l_TAIL_502, 0, sizeof l_TAIL_502);
l_TAIL_502 = NULL;
r_EXPECT(rt_str("IF", 2));
for (;;) {
{
{
R21 * l_ARM_504; memset(&l_ARM_504, 0, sizeof l_ARM_504);
l_ARM_504 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
((*(R21 *)rt_nil_check(l_ARM_504))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("THEN", 4));
((*(R21 *)rt_nil_check(l_ARM_504))).f_B = r_PARSE_BODY();
r_ADD_LIST(l_ARM_504, &l_HEAD_501, &l_TAIL_502);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str("ORIF", 4)))) goto L_end503;
} L_end503: ;
((*(R21 *)rt_nil_check(l_S_500))).f_A = l_HEAD_501;
if (r_ACCEPT(rt_str("ELSE", 4)))
{
((*(R21 *)rt_nil_check(l_S_500))).f_B = r_PARSE_BODY();
}
r_EXPECT_END(rt_str("IF", 2));
{ R21 * rv505 = l_S_500;
return rv505; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CASE_LABEL(void) { RT_B_TICK(); 
if ((r_IS(rt_str("[", 1)) || ((r_IS(rt_str("(", 1)) && r_RANGE_AHEAD()))))
{
{ R21 * rv506 = r_PARSE_RANGE();
return rv506; }
}
{ R21 * rv507 = r_PARSE_EXPR();
return rv507; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_CASE(void) { RT_B_TICK(); 
R21 * l_S_508; memset(&l_S_508, 0, sizeof l_S_508);
l_S_508 = r_NEW_NODE(g_N_CASE, r_LINE_NOW());
R21 * l_HEAD_509; memset(&l_HEAD_509, 0, sizeof l_HEAD_509);
l_HEAD_509 = NULL;
R21 * l_TAIL_510; memset(&l_TAIL_510, 0, sizeof l_TAIL_510);
l_TAIL_510 = NULL;
r_EXPECT(rt_str("SELECT", 6));
((*(R21 *)rt_nil_check(l_S_508))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end511;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_S_508))).f_C = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R21 *)rt_nil_check(l_S_508))).f_D = r_PARSE_HANDLERS();
}
}
else
{
{
R21 * l_ARM_512; memset(&l_ARM_512, 0, sizeof l_ARM_512);
l_ARM_512 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
R21 * l_LH_513; memset(&l_LH_513, 0, sizeof l_LH_513);
l_LH_513 = NULL;
R21 * l_LT_514; memset(&l_LT_514, 0, sizeof l_LT_514);
l_LT_514 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_513, &l_LT_514);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end515;
} L_end515: ;
r_EXPECT(rt_str("-->", 3));
((*(R21 *)rt_nil_check(l_ARM_512))).f_A = l_LH_513;
((*(R21 *)rt_nil_check(l_ARM_512))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R21 *)rt_nil_check(l_ARM_512))).f_C = r_PARSE_HANDLERS();
}
r_ADD_LIST(l_ARM_512, &l_HEAD_509, &l_TAIL_510);
}
}
}
RT_B_TICK();
} L_end511: ;
((*(R21 *)rt_nil_check(l_S_508))).f_B = l_HEAD_509;
r_EXPECT_END(rt_str("SELECT", 6));
{ R21 * rv516 = l_S_508;
return rv516; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_LOOP(void) { RT_B_TICK(); 
R21 * l_S_517; memset(&l_S_517, 0, sizeof l_S_517);
l_S_517 = r_NEW_NODE(g_N_LOOP, r_LINE_NOW());
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("FOR", 3)))
{
((*(R21 *)rt_nil_check(l_S_517))).f_KIND = g_N_FOR;
if (r_IS_KIND(g_K_ID))
{
S_R10(&((*(R21 *)rt_nil_check(l_S_517))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("IN", 2));
}
((*(R21 *)rt_nil_check(l_S_517))).f_A = r_PARSE_RANGE();
r_EXPECT(rt_str("DO", 2));
((*(R21 *)rt_nil_check(l_S_517))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_IS_KIND(g_K_ID))
{
if ((!r_TEQ(r_IDENT(), ((*(R21 *)rt_nil_check(l_S_517))).f_NAME)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier", 38));
}
}
else if (((((*(R21 *)rt_nil_check(l_S_517))).f_NAME).f_LEN > ((rt_int)0LL)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier (4.5.6.3)", 48));
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R21 * rv518 = l_S_517;
return rv518; }
}
if (r_ACCEPT(rt_str("UNTIL", 5)))
{
((*(R21 *)rt_nil_check(l_S_517))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("DO", 2));
}
((*(R21 *)rt_nil_check(l_S_517))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("WHEN", 4)))
{
if ((!(((*(R21 *)rt_nil_check(l_S_517))).f_A == NULL)))
{
r_FAIL(r_LINE_NOW(), rt_str("only one of UNTIL and WHEN (4.5.6.1)", 36));
}
((*(R21 *)rt_nil_check(l_S_517))).f_C = r_PARSE_EXPR();
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R21 * rv519 = l_S_517;
return rv519; }
rt_raise(RT_X_INIT);
}
static R21 * r_PARSE_PAR(void) { RT_B_TICK(); 
R21 * l_S_520; memset(&l_S_520, 0, sizeof l_S_520);
l_S_520 = r_NEW_NODE(g_N_PAR, r_LINE_NOW());
R21 * l_HEAD_521; memset(&l_HEAD_521, 0, sizeof l_HEAD_521);
l_HEAD_521 = NULL;
R21 * l_TAIL_522; memset(&l_TAIL_522, 0, sizeof l_TAIL_522);
l_TAIL_522 = NULL;
r_EXPECT(rt_str("PAR_BLOCK", 9));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end523;
{
{
R21 * l_P_524; memset(&l_P_524, 0, sizeof l_P_524);
l_P_524 = r_NEW_NODE(g_N_PATH, r_LINE_NOW());
R21 * l_H_525; memset(&l_H_525, 0, sizeof l_H_525);
l_H_525 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
r_EXPECT(rt_str("PATH", 4));
S_R10(&((*(R21 *)rt_nil_check(l_P_524))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_P_524))).f_E = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_524))).f_LINE);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_524))).f_E))).f_A = l_H_525;
if (r_ACCEPT(rt_str("FOR", 3)))
{
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_524))).f_E))).f_NAME, r_IDENT(), 0);
((*(R21 *)rt_nil_check(l_P_524))).f_FL = ((rt_int)1LL);
r_EXPECT(rt_str("IN", 2));
((*(R21 *)rt_nil_check(l_P_524))).f_A = r_PARSE_RANGE();
}
for (;;) {
{
if (r_ACCEPT(rt_str("PRIORITY", 8)))
{
((*(R21 *)rt_nil_check(l_P_524))).f_C = r_PARSE_EXPR();
}
else if (r_ACCEPT(rt_str("CONNECT", 7)))
{
r_EXPECT(rt_str("(", 1));
((*(R21 *)rt_nil_check(l_P_524))).f_D = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R21 *)rt_nil_check(l_H_525))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R21 *)rt_nil_check(l_H_525))).f_B = r_PARSE_ITEMS();
}
else
{
goto L_end526;
}
}
RT_B_TICK();
} L_end526: ;
if ((!(((*(R21 *)rt_nil_check(l_P_524))).f_D == NULL)))
{
r_CONNECT_KNOWN(((*(R21 *)rt_nil_check(l_P_524))).f_D, l_H_525);
}
r_EXPECT(rt_str(";", 1));
((*(R21 *)rt_nil_check(l_P_524))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PATH", 4));
r_EXPECT_NAME(((*(R21 *)rt_nil_check(l_P_524))).f_NAME);
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_P_524, &l_HEAD_521, &l_TAIL_522);
}
}
RT_B_TICK();
} L_end523: ;
((*(R21 *)rt_nil_check(l_S_520))).f_A = l_HEAD_521;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PAR_BLOCK", 9));
r_EXPECT(rt_str(";", 1));
{ R21 * rv527 = l_S_520;
return rv527; }
rt_raise(RT_X_INIT);
}
static void r_CONNECT_KNOWN(R21 * p_E, R21 * p_H) { RT_B_TICK(); 
R21 * l_R_528; memset(&l_R_528, 0, sizeof l_R_528);
l_R_528 = p_E;
for (;;) {
if (((((*(R21 *)rt_nil_check(l_R_528))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_R_528))).f_KIND == g_N_APPLY))) goto L_end529;
{
if (((!(((*(R21 *)rt_nil_check(l_R_528))).f_KIND == g_N_INDEX)) && (!(((*(R21 *)rt_nil_check(l_R_528))).f_KIND == g_N_FIELD))))
{
return;
}
l_R_528 = ((*(R21 *)rt_nil_check(l_R_528))).f_A;
}
RT_B_TICK();
} L_end529: ;
if ((((*(R21 *)rt_nil_check(p_H))).f_B == NULL))
{
((*(R21 *)rt_nil_check(p_H))).f_B = r_NEW_NODE(g_N_ITEMS, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
{
R21 * l_P_530; memset(&l_P_530, 0, sizeof l_P_530);
l_P_530 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_H))).f_B))).f_A;
for (;;) {
if ((l_P_530 == NULL)) goto L_end531;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_530))).f_NAME, ((*(R21 *)rt_nil_check(l_R_528))).f_NAME))
{
return;
}
l_P_530 = ((*(R21 *)rt_nil_check(l_P_530))).f_NEXT;
}
RT_B_TICK();
} L_end531: ;
l_P_530 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_H))).f_B))).f_B;
for (;;) {
if ((l_P_530 == NULL)) goto L_end532;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_530))).f_NAME, ((*(R21 *)rt_nil_check(l_R_528))).f_NAME))
{
return;
}
l_P_530 = ((*(R21 *)rt_nil_check(l_P_530))).f_NEXT;
}
RT_B_TICK();
} L_end532: ;
}
{
R21 * l_N_533; memset(&l_N_533, 0, sizeof l_N_533);
l_N_533 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_533))).f_NAME, ((*(R21 *)rt_nil_check(l_R_528))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_533))).f_NEXT = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_H))).f_B))).f_B;
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_H))).f_B))).f_B = l_N_533;
}
}
static R10 r_NO_TEXT(void) { RT_B_TICK(); 
{ R10 rv534 = ({ R10 rc535; memset(&rc535, 0, sizeof rc535);  rc535.f_AT = ((rt_int)0LL); rc535.f_LEN = ((rt_int)0LL); rc535.f_H = ((rt_int)0LL); rc535; });
return rv534; }
rt_raise(RT_X_INIT);
}
static R23 r_NO_MVAL(void) { RT_B_TICK(); 
{ R23 rv536 = ({ R23 rc537; memset(&rc537, 0, sizeof rc537);  rc537.f_OK = 0; rc537.f_V = ((rt_int)0LL); rc537; });
return rv536; }
rt_raise(RT_X_INIT);
}
static R23 r_SOME(rt_int p_V) { RT_B_TICK(); 
{ R23 rv538 = ({ R23 rc539; memset(&rc539, 0, sizeof rc539);  rc539.f_OK = 1; rc539.f_V = p_V; rc539; });
return rv538; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_SYM(rt_int p_KIND, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_540; memset(&l_Y_540, 0, sizeof l_Y_540);
l_Y_540 = ((R12 *)rt_b_new(sizeof (R12)));
rt_int l_LEVEL_541; memset(&l_LEVEL_541, 0, sizeof l_LEVEL_541);
l_LEVEL_541 = ((rt_int)0LL);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_CS == NULL)))
{
l_LEVEL_541 = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
}
S_R12(&(*(R12 *)rt_nil_check(l_Y_540)), ({ R12 rc542; memset(&rc542, 0, sizeof rc542);  rc542.f_KIND = p_KIND; rc542.f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH; rc542.f_LEVEL = l_LEVEL_541; S_R10(&rc542.f_NAME, p_NAME, 0); rc542.f_T = NULL; S_R10(&rc542.f_ACCESS, r_NO_TEXT(), 0); S_R10(&rc542.f_FIELD, r_NO_TEXT(), 0); rc542.f_INPUT = 0; rc542.f_BYREF = 0; rc542.f_HASMV = 0; rc542.f_MV = ((rt_int)0LL); rc542.f_TS = NULL; rc542.f_BUSY = 0; S_R10(&rc542.f_FWD, r_NO_TEXT(), 0); rc542.f_PARAMS = NULL; rc542.f_RESULT = NULL; rc542.f_DECL = NULL; S_R10(&rc542.f_PREFIX, r_NO_TEXT(), 0); rc542.f_MODL = ((*(R7 *)rt_nil_check(g_W))).f_MODL; rc542.f_EXPORTED = 0; rc542.f_GENERIC = 0; rc542.f_FRAMED = 0; rc542.f_USES = NULL; rc542.f_INSTANCES = NULL; rc542.f_BINDINGS = NULL; rc542.f_ORIG = NULL; rc542.f_MEMBERS = NULL; rc542.f_SAVED = NULL; rc542.f_OWNER = r_CUR_OWNER(); rc542.f_WITHV = ((rt_int)0LL); rc542.f_LAZY = ((rt_int)0LL); rc542.f_SEGM = NULL; rc542.f_HOME = ((*(R7 *)rt_nil_check(g_W))).f_TRSEG; rc542.f_CHAIN = NULL; rc542.f_SNEXT = NULL; rc542; }), 0);
{ R12 * rv543 = l_Y_540;
return rv543; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_OWNER(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_IS == NULL))
{
{ rt_int rv544 = ((rt_int)0LL);
return rv544; }
}
{ rt_int rv545 = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_ID;
return rv545; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIGINAL(R12 * p_Y) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)))
{
{ R12 * rv546 = ((*(R12 *)rt_nil_check(p_Y))).f_ORIG;
return rv546; }
}
{ R12 * rv547 = p_Y;
return rv547; }
rt_raise(RT_X_INIT);
}
static rt_int r_BUCKET(R10 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_H < ((rt_int)0LL)))
{
{ rt_int rv548 = r_HASH_OF(r_STR(p_NAME, (p_NAME).f_LEN));
return rv548; }
}
{ rt_int rv549 = (p_NAME).f_H;
return rv549; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_550; memset(&l_Y_550, 0, sizeof l_Y_550);
l_Y_550 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(r_BUCKET(p_NAME), (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
for (;;) {
if ((l_Y_550 == NULL)) goto L_end551;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_550))).f_NAME, p_NAME))
{
{ R12 * rv552 = l_Y_550;
return rv552; }
}
l_Y_550 = ((*(R12 *)rt_nil_check(l_Y_550))).f_CHAIN;
}
RT_B_TICK();
} L_end551: ;
{ R12 * rv553 = NULL;
return rv553; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_554; memset(&l_Y_554, 0, sizeof l_Y_554);
l_Y_554 = r_LOOKUP(p_NAME);
if ((l_Y_554 == NULL))
{
{ R12 * rv555 = NULL;
return rv555; }
}
{ R12 * rv556 = r_ORIGINAL(l_Y_554);
return rv556; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUPS(rstr p_NAME) { RT_B_TICK(); 
{ R12 * rv557 = r_LOOKUP(r_MKN(p_NAME));
return rv557; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP_NEXT(R12 * p_Y) { RT_B_TICK(); 
R12 * l_Z_558; memset(&l_Z_558, 0, sizeof l_Z_558);
l_Z_558 = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
for (;;) {
if ((l_Z_558 == NULL)) goto L_end559;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Z_558))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ R12 * rv560 = l_Z_558;
return rv560; }
}
l_Z_558 = ((*(R12 *)rt_nil_check(l_Z_558))).f_CHAIN;
}
RT_B_TICK();
} L_end559: ;
{ R12 * rv561 = NULL;
return rv561; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUTINE(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv562 = ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_BUILTIN));
return rv562; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_B_563; memset(&l_B_563, 0, sizeof l_B_563);
l_B_563 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_OLD_564; memset(&l_OLD_564, 0, sizeof l_OLD_564);
l_OLD_564 = r_LOOKUP(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
for (;;) {
if ((l_OLD_564 == NULL)) goto L_end565;
{
if ((!(((*(R12 *)rt_nil_check(l_OLD_564))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
goto L_end565;
}
if ((!((((r_IS_ROUTINE(l_OLD_564) && r_IS_ROUTINE(p_Y))) || (((((*(R12 *)rt_nil_check(l_OLD_564))).f_KIND == g_Y_ENUMLIT) && (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)))))))
{
r_FAILT(p_LINE, rt_str("redeclared in the same scope: ", 30), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
}
l_OLD_564 = r_LOOKUP_NEXT(l_OLD_564);
}
RT_B_TICK();
} L_end565: ;
((*(R12 *)rt_nil_check(p_Y))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_Y))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_563, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_563, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_Y;
((*(R12 *)rt_nil_check(p_Y))).f_SNEXT = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = p_Y;
}
static void r_OPEN_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_add(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
}
static void r_CLOSE_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == NULL)) goto L_end566;
{
if ((((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH <= ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end566;
}
r_UNLINK(((*(R7 *)rt_nil_check(g_W))).f_SCOPE);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_SNEXT;
}
RT_B_TICK();
} L_end566: ;
}
static void r_UNLINK(R12 * p_Y) { RT_B_TICK(); 
rt_int l_B_567; memset(&l_B_567, 0, sizeof l_B_567);
l_B_567 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_P_568; memset(&l_P_568, 0, sizeof l_P_568);
l_P_568 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_567, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
if ((l_P_568 == p_Y))
{
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_567, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
for (;;) {
if ((l_P_568 == NULL)) goto L_end569;
{
if ((((*(R12 *)rt_nil_check(l_P_568))).f_CHAIN == p_Y))
{
((*(R12 *)rt_nil_check(l_P_568))).f_CHAIN = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
l_P_568 = ((*(R12 *)rt_nil_check(l_P_568))).f_CHAIN;
}
RT_B_TICK();
} L_end569: ;
}
static R12 * r_TAKE_SCOPE(R12 * p_MARK) { RT_B_TICK(); 
R12 * l_HEAD_570; memset(&l_HEAD_570, 0, sizeof l_HEAD_570);
l_HEAD_570 = NULL;
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == p_MARK)) goto L_end571;
{
{
R12 * l_Y_572; memset(&l_Y_572, 0, sizeof l_Y_572);
l_Y_572 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_UNLINK(l_Y_572);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(l_Y_572))).f_SNEXT;
((*(R12 *)rt_nil_check(l_Y_572))).f_SNEXT = l_HEAD_570;
l_HEAD_570 = l_Y_572;
}
}
RT_B_TICK();
} L_end571: ;
{ R12 * rv573 = l_HEAD_570;
return rv573; }
rt_raise(RT_X_INIT);
}
static R22 * r_NEW_TYP(rt_int p_KIND) { RT_B_TICK(); 
R22 * l_T_574; memset(&l_T_574, 0, sizeof l_T_574);
l_T_574 = ((R22 *)rt_b_new(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_T_574)), ({ R22 rc575; memset(&rc575, 0, sizeof rc575);  rc575.f_KIND = p_KIND; rc575.f_SCALE = ((rt_int)0LL); S_R10(&rc575.f_LO_C, r_NO_TEXT(), 0); S_R10(&rc575.f_HI_C, r_NO_TEXT(), 0); S_R23(&rc575.f_MLO, r_NO_MVAL(), 0); S_R23(&rc575.f_MHI, r_NO_MVAL(), 0); rc575.f_RLEVEL = ((rt_int)0LL); S_R10(&rc575.f_LEN_C, r_NO_TEXT(), 0); S_R23(&rc575.f_MLEN, r_NO_MVAL(), 0); S_R10(&rc575.f_GEN, r_NO_TEXT(), 0); rc575.f_BASE = NULL; rc575.f_ELEM = NULL; rc575.f_TARGET = NULL; rc575.f_TARGET_TS = NULL; rc575.f_FIELDS = NULL; rc575.f_LITS = NULL; rc575.f_NLITS = ((rt_int)0LL); rc575.f_UNORDERED = 0; rc575.f_BOUNDS = NULL; rc575.f_DIMS = ((rt_int)0LL); rc575.f_ARGS = NULL; S_R10(&rc575.f_NAME, r_NO_TEXT(), 0); S_R10(&rc575.f_CNAME, r_NO_TEXT(), 0); rc575.f_MODL = NULL; rc575.f_REPS = NULL; rc575.f_DECL = NULL; S_R10(&rc575.f_GENP, r_NO_TEXT(), 0); rc575; }), 0);
{ R22 * rv576 = l_T_574;
return rv576; }
rt_raise(RT_X_INIT);
}
static R22 * r_COPY_TYP(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_577; memset(&l_C_577, 0, sizeof l_C_577);
l_C_577 = ((R22 *)rt_b_new(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_C_577)), (*(R22 *)rt_nil_check(p_T)), 0);
{ R22 * rv578 = l_C_577;
return rv578; }
rt_raise(RT_X_INIT);
}
static void r_PREDEF_TYPE(rstr p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_579; memset(&l_Y_579, 0, sizeof l_Y_579);
l_Y_579 = r_NEW_SYM(g_Y_TYPE, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_579))).f_T = p_T;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_579))).f_NAME, 0);
}
r_DEFINE(l_Y_579, ((rt_int)0LL));
}
static void r_PREDEF_BUILTIN(rstr p_NAME) { RT_B_TICK(); 
r_DEFINE(r_NEW_SYM(g_Y_BUILTIN, r_MKN(p_NAME)), ((rt_int)0LL));
}
static void r_PREDEF_CONST(rstr p_NAME, R22 * p_T, rt_int p_V) { RT_B_TICK(); 
R12 * l_Y_580; memset(&l_Y_580, 0, sizeof l_Y_580);
l_Y_580 = r_NEW_SYM(g_Y_CONST, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_580))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_580))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_580))).f_MV = p_V;
((*(R12 *)rt_nil_check(l_Y_580))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_Y_580))).f_ACCESS, r_FMT1(rt_str("((rt_int)@)", 11), r_NUM(p_V)), 0);
r_DEFINE(l_Y_580, ((rt_int)0LL));
}
static R22 * r_PREDEF_ENUM(rstr p_NAME, rstr p_NAMES, rt_int p_UNORDERED) { RT_B_TICK(); 
R21 * l_HEAD_581; memset(&l_HEAD_581, 0, sizeof l_HEAD_581);
l_HEAD_581 = NULL;
R21 * l_TAIL_582; memset(&l_TAIL_582, 0, sizeof l_TAIL_582);
l_TAIL_582 = NULL;
rt_int l_START_583; memset(&l_START_583, 0, sizeof l_START_583);
l_START_583 = ((rt_int)0LL);
{ rt_int it585_lo = ((rt_int)0LL), it585_hi = (rt_int)(p_NAMES).len;
for (rt_int it585 = it585_lo; it585 <= it585_hi; it585++) {
{
if (((it585 == (rt_int)(p_NAMES).len) || rt_b_eq(rt_b_slice(p_NAMES, it585, it585), rt_str(" ", 1))))
{
if ((it585 > l_START_583))
{
{
R21 * l_N_586; memset(&l_N_586, 0, sizeof l_N_586);
l_N_586 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_586))).f_NAME, r_MKN(rt_b_slice(p_NAMES, l_START_583, rt_sub(it585, ((rt_int)1LL)))), 0);
r_ADD_LIST(l_N_586, &l_HEAD_581, &l_TAIL_582);
}
}
l_START_583 = rt_add(it585, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it585 == it585_hi) break;
} } L_end584: ;
{
R22 * l_T_587; memset(&l_T_587, 0, sizeof l_T_587);
l_T_587 = r_ENUM_CLASS(l_HEAD_581, p_UNORDERED, ((rt_int)0LL));
r_PREDEF_TYPE(p_NAME, l_T_587);
{ R22 * rv588 = l_T_587;
return rv588; }
}
rt_raise(RT_X_INIT);
}
static void r_PREDEFINE(void) { RT_B_TICK(); 
R22 * l_T_589; memset(&l_T_589, 0, sizeof l_T_589);
R21 * l_ASCII_LITS_590; memset(&l_ASCII_LITS_590, 0, sizeof l_ASCII_LITS_590);
l_ASCII_LITS_590 = NULL;
R21 * l_TAIL_591; memset(&l_TAIL_591, 0, sizeof l_TAIL_591);
l_TAIL_591 = NULL;
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
{ rt_int it593_lo = ((rt_int)0LL), it593_hi = ((rt_int)127LL);
for (rt_int it593 = it593_lo; it593 <= it593_hi; it593++) {
{
{
R21 * l_N_594; memset(&l_N_594, 0, sizeof l_N_594);
l_N_594 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_594))).f_NAME, r_ASCII_NAME(it593), 0);
r_ADD_LIST(l_N_594, &l_ASCII_LITS_590, &l_TAIL_591);
}
}
RT_B_TICK();
if (it593 == it593_hi) break;
} } L_end592: ;
((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII = r_ENUM_CLASS(l_ASCII_LITS_590, 0, ((rt_int)0LL));
r_PREDEF_TYPE(rt_str("ASCII", 5), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII);
((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS = r_PREDEF_ENUM(rt_str("ROUNDINGS", 9), rt_str("ROUNDED TRUNCATED NATIVE_R NATIVE_T", 35), 0);
l_T_589 = r_PREDEF_ENUM(rt_str("FIXED_PRECISIONS", 16), rt_str("STD", 3), 0);
r_PREDEF_BOUNDS_DEF();
l_T_589 = r_PREDEF_ENUM(rt_str("SIGNING", 7), rt_str("SIGNED UNSIGNED", 15), 1);
l_T_589 = r_PREDEF_ENUM(rt_str("PACKING", 7), rt_str("DENSE PACKED UNPACKED", 21), 1);
l_T_589 = r_PREDEF_ENUM(rt_str("USAGE", 5), rt_str("SYNCH REGION", 12), 1);
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
rstr l_OPS_595; memset(&l_OPS_595, 0, sizeof l_OPS_595);
l_OPS_595 = rt_b_str_new(((rt_int)271LL), 0);
rt_b_assign(&l_OPS_595, rt_str(" ADD_ SUBTRACT_ MULTIPLY_ DIVIDE_ MODULUS_ EXPONENTIATE_ CONCATENATE_ EQUAL_ UNEQUAL_ GREATER_THAN_ LESS_THAN_ GREATER_EQUAL_ LESS_EQUAL_ AND_ OR_ XOR_ IMPLIES_ MD_ADD_ MD_SUBTRACT_ MD_MULTIPLY_ MD_DIVIDE_ NEGATE_ MON_PLUS_ COMPLEMENT_ STORE_ SUBSTRING_ SUBSTRING_STORE_ ", 271));
rt_int l_START_596; memset(&l_START_596, 0, sizeof l_START_596);
l_START_596 = ((rt_int)1LL);
{ rt_int it598_lo = ((rt_int)1LL), it598_hi = ((rt_int)270LL);
for (rt_int it598 = it598_lo; it598 <= it598_hi; it598++) {
{
if (rt_b_eq(rt_b_slice(l_OPS_595, it598, it598), rt_str(" ", 1)))
{
if ((it598 > l_START_596))
{
r_PREDEF_BUILTIN(rt_b_slice(l_OPS_595, l_START_596, rt_sub(it598, ((rt_int)1LL))));
}
l_START_596 = rt_add(it598, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it598 == it598_hi) break;
} } L_end597: ;
}
r_PREDEF_CONST(rt_str("MAX_NOM_PREC", 12), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)15LL));
r_PREDEF_CONST(rt_str("CLOCK_SCALE", 11), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)20LL));
r_OPEN_SCOPE();
}
static void r_PREDEF_BOUNDS_DEF(void) { RT_B_TICK(); 
R21 * l_F_599; memset(&l_F_599, 0, sizeof l_F_599);
l_F_599 = r_NEW_NODE(g_N_FORMAL, ((rt_int)0LL));
R21 * l_V_600; memset(&l_V_600, 0, sizeof l_V_600);
l_V_600 = r_NEW_NODE(g_N_VAR, ((rt_int)0LL));
R21 * l_R_601; memset(&l_R_601, 0, sizeof l_R_601);
l_R_601 = r_NEW_NODE(g_TS_RECORD, ((rt_int)0LL));
R21 * l_D_602; memset(&l_D_602, 0, sizeof l_D_602);
l_D_602 = r_NEW_NODE(g_N_TYPE, ((rt_int)0LL));
R21 * l_FX_603; memset(&l_FX_603, 0, sizeof l_FX_603);
l_FX_603 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
R12 * l_Y_604; memset(&l_Y_604, 0, sizeof l_Y_604);
l_Y_604 = r_NEW_SYM(g_Y_TYPE, r_MKN(rt_str("BOUNDS_DEF", 10)));
((*(R21 *)rt_nil_check(l_F_599))).f_A = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_F_599))).f_A))).f_NAME, r_MKN(rt_str("MAX_P", 5)), 0);
((*(R21 *)rt_nil_check(l_F_599))).f_B = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_F_599))).f_B))).f_NAME, r_MKN(rt_str("FIXED_PRECISIONS", 16)), 0);
S_R10(&((*(R21 *)rt_nil_check(l_FX_603))).f_NAME, r_MKN(rt_str("FIXED", 5)), 0);
((*(R21 *)rt_nil_check(l_FX_603))).f_A = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_603))).f_A))).f_NEXT = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_603))).f_A))).f_NEXT))).f_IV = ((rt_int)2LL);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_603))).f_A))).f_NEXT))).f_NEXT = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_FX_603))).f_A))).f_NEXT))).f_NEXT))).f_NAME, r_MKN(rt_str("MAX_P", 5)), 0);
((*(R21 *)rt_nil_check(l_V_600))).f_A = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_600))).f_A))).f_NAME, r_MKN(rt_str("MIN", 3)), 0);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_600))).f_A))).f_NEXT = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_600))).f_A))).f_NEXT))).f_NAME, r_MKN(rt_str("MAX", 3)), 0);
((*(R21 *)rt_nil_check(l_V_600))).f_B = l_FX_603;
((*(R21 *)rt_nil_check(l_R_601))).f_A = l_V_600;
S_R10(&((*(R21 *)rt_nil_check(l_D_602))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_604))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_D_602))).f_A = l_F_599;
((*(R21 *)rt_nil_check(l_D_602))).f_B = l_R_601;
((*(R12 *)rt_nil_check(l_Y_604))).f_DECL = l_D_602;
r_DEFINE(l_Y_604, ((rt_int)0LL));
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
static R10 r_ASCII_NAME(rt_int p_C) { RT_B_TICK(); 
rstr l_CONTROLS_605; memset(&l_CONTROLS_605, 0, sizeof l_CONTROLS_605);
l_CONTROLS_605 = rt_b_str_new(((rt_int)128LL), 0);
rt_b_assign(&l_CONTROLS_605, rt_str(" NUL SOH STX EXT EOT ENQ ACK BEL BS  HT  LF  VT  FF  CR  SO  SI  DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM  SUB ESC FS  GS  RS  US ", 128));
if ((p_C < ((rt_int)32LL)))
{
if (rt_b_eq(rt_b_slice(l_CONTROLS_605, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL))), rt_str(" ", 1)))
{
{ R10 rv606 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_605, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)2LL)))));
return rv606; }
}
{ R10 rv607 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_605, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)))));
return rv607; }
}
else if ((p_C == ((rt_int)39LL)))
{
{ R10 rv608 = r_MKN(rt_str("\\''''", 5));
return rv608; }
}
else if ((p_C < ((rt_int)96LL)))
{
{ R10 rv609 = r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), r_CHAR_OF(p_C)), rt_str("'", 1)));
return rv609; }
}
else if ((p_C == ((rt_int)96LL)))
{
{ R10 rv610 = r_MKN(rt_str("\\ACCENT", 7));
return rv610; }
}
else if ((p_C <= ((rt_int)122LL)))
{
{ R10 rv611 = r_MKN(rt_b_cat(rt_str("\\", 1), r_CHAR_OF(rt_sub(p_C, ((rt_int)32LL)))));
return rv611; }
}
else if ((p_C == ((rt_int)123LL)))
{
{ R10 rv612 = r_MKN(rt_str("\\[", 2));
return rv612; }
}
else if ((p_C == ((rt_int)124LL)))
{
{ R10 rv613 = r_MKN(rt_str("\\BAR", 4));
return rv613; }
}
else if ((p_C == ((rt_int)125LL)))
{
{ R10 rv614 = r_MKN(rt_str("\\]", 2));
return rv614; }
}
else if ((p_C == ((rt_int)126LL)))
{
{ R10 rv615 = r_MKN(rt_str("\\TILDE", 6));
return rv615; }
}
{ R10 rv616 = r_MKN(rt_str("\\DEL", 4));
return rv616; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_SCALAR(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv617 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_BOOL)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv617; }
rt_raise(RT_X_INIT);
}
static R22 * r_REAL_TYPE(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R22 * rv618 = r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv618; }
}
{ R22 * rv619 = p_T;
return rv619; }
rt_raise(RT_X_INIT);
}
static R10 r_TYPE_NAME(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_620; memset(&l_K_620, 0, sizeof l_K_620);
l_K_620 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{ R10 rv621 = ((*(R22 *)rt_nil_check(p_T))).f_NAME;
return rv621; }
}
else if ((l_K_620 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))
{
{ R10 rv622 = r_MK(rt_str("INTEGER", 7));
return rv622; }
}
{ R10 rv623 = r_FMT1(rt_str("FIXED (@, 2, STD)", 17), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv623; }
}
else if ((l_K_620 == g_T_BOOL))
{
{ R10 rv624 = r_MK(rt_str("BOOLEAN", 7));
return rv624; }
}
else if ((l_K_620 == g_T_ENUM))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R10 rv625 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv625; }
}
{ R10 rv626 = r_MK(rt_str("an enumerated type", 18));
return rv626; }
}
else if ((l_K_620 == g_T_STR))
{
{ R10 rv627 = r_MK(rt_str("CHAR_STR", 8));
return rv627; }
}
else if ((l_K_620 == g_T_BITS))
{
{ R10 rv628 = r_MK(rt_str("BIT", 3));
return rv628; }
}
else if ((l_K_620 == g_T_FLOAT))
{
{ R10 rv629 = r_FMT1(rt_str("FLOAT (@)", 9), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv629; }
}
else if ((l_K_620 == g_T_ARR))
{
{ R10 rv630 = r_FMT1(rt_str("ARRAY OF @", 10), r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_ELEM));
return rv630; }
}
else if ((l_K_620 == g_T_REC))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R10 rv631 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv631; }
}
{ R10 rv632 = r_MK(rt_str("RECORD", 6));
return rv632; }
}
else if ((l_K_620 == g_T_PTR))
{
{ R10 rv633 = r_MK(rt_str("PTR", 3));
return rv633; }
}
else if ((l_K_620 == g_T_SEM))
{
{ R10 rv634 = r_MK(rt_str("SEMAPHORE", 9));
return rv634; }
}
else if ((l_K_620 == g_T_NIL))
{
{ R10 rv635 = r_MK(rt_str("NIL", 3));
return rv635; }
}
else if ((l_K_620 == g_T_VOID))
{
{ R10 rv636 = r_MK(rt_str("no value", 8));
return rv636; }
}
{ R10 rv637 = r_MK(rt_str("a type", 6));
return rv637; }
rt_raise(RT_X_INIT);
}
static R10 r_SUBST_SELF(R10 p_T, R10 p_SELF) { RT_B_TICK(); 
rstr l_S_638; memset(&l_S_638, 0, sizeof l_S_638);
l_S_638 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_638, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_639; memset(&l_AT_639, 0, sizeof l_AT_639);
l_AT_639 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_START_640; memset(&l_START_640, 0, sizeof l_START_640);
l_START_640 = ((rt_int)0LL);
R10 l_R_641; memset(&l_R_641, 0, sizeof l_R_641);
rt_int l_I_642; memset(&l_I_642, 0, sizeof l_I_642);
l_I_642 = ((rt_int)0LL);
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ R10 rv643 = p_T;
return rv643; }
}
for (;;) {
if ((l_I_642 >= rt_sub((p_T).f_LEN, ((rt_int)1LL)))) goto L_end644;
{
if (rt_b_eq(rt_b_slice(l_S_638, l_I_642, rt_add(l_I_642, ((rt_int)1LL))), rt_str("$S", 2)))
{
S_R10(&l_R_641, r_MK(rt_b_slice(l_S_638, l_START_640, rt_sub(l_I_642, ((rt_int)1LL)))), 0);
S_R10(&l_R_641, r_MK(r_STR(p_SELF, (p_SELF).f_LEN)), 0);
l_I_642 = rt_add(l_I_642, ((rt_int)2LL));
l_START_640 = l_I_642;
}
else
{
l_I_642 = rt_add(l_I_642, ((rt_int)1LL));
}
}
RT_B_TICK();
} L_end644: ;
if ((l_START_640 == ((rt_int)0LL)))
{
((*(R7 *)rt_nil_check(g_W))).f_TOP = l_AT_639;
{ R10 rv645 = p_T;
return rv645; }
}
S_R10(&l_R_641, r_MK(rt_b_slice(l_S_638, l_START_640, rt_sub((p_T).f_LEN, ((rt_int)1LL)))), 0);
{ R10 rv646 = ({ R10 rc647; memset(&rc647, 0, sizeof rc647);  rc647.f_AT = l_AT_639; rc647.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_639); rc647.f_H = rt_neg(((rt_int)1LL)); rc647; });
return rv646; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LITERALS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_648; memset(&l_P_648, 0, sizeof l_P_648);
l_P_648 = p_A;
R21 * l_Q_649; memset(&l_Q_649, 0, sizeof l_Q_649);
l_Q_649 = p_B;
for (;;) {
if (((l_P_648 == NULL) || (l_Q_649 == NULL))) goto L_end650;
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_P_648))).f_NAME, ((*(R21 *)rt_nil_check(l_Q_649))).f_NAME)))
{
{ rt_int rv651 = 0;
return rv651; }
}
l_P_648 = ((*(R21 *)rt_nil_check(l_P_648))).f_NEXT;
l_Q_649 = ((*(R21 *)rt_nil_check(l_Q_649))).f_NEXT;
}
RT_B_TICK();
} L_end650: ;
{ rt_int rv652 = ((l_P_648 == NULL) && (l_Q_649 == NULL));
return rv652; }
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_CLASS(R21 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_653; memset(&l_Y_653, 0, sizeof l_Y_653);
l_Y_653 = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
R22 * l_T_654; memset(&l_T_654, 0, sizeof l_T_654);
{
R21 * l_P_655; memset(&l_P_655, 0, sizeof l_P_655);
l_P_655 = p_LITS;
for (;;) {
if ((l_P_655 == NULL)) goto L_end656;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_P_655))).f_NEXT, ((*(R21 *)rt_nil_check(l_P_655))).f_NAME))
{
r_FAILT(p_LINE, rt_str("an enumerated literal must be unique in its list (3.4.1): ", 58), ((*(R21 *)rt_nil_check(l_P_655))).f_NAME);
}
l_P_655 = ((*(R21 *)rt_nil_check(l_P_655))).f_NEXT;
}
RT_B_TICK();
} L_end656: ;
}
for (;;) {
if ((l_Y_653 == NULL)) goto L_end657;
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_653))).f_T))).f_UNORDERED == p_UNORDERED) && r_SAME_LITERALS(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_653))).f_T))).f_LITS, p_LITS)))
{
r_DECLARE_LITERALS(((*(R12 *)rt_nil_check(l_Y_653))).f_T, p_LINE);
{ R22 * rv658 = ((*(R12 *)rt_nil_check(l_Y_653))).f_T;
return rv658; }
}
l_Y_653 = ((*(R12 *)rt_nil_check(l_Y_653))).f_INSTANCES;
}
RT_B_TICK();
} L_end657: ;
l_T_654 = r_NEW_TYP(g_T_ENUM);
((*(R22 *)rt_nil_check(l_T_654))).f_BASE = l_T_654;
((*(R22 *)rt_nil_check(l_T_654))).f_LITS = p_LITS;
((*(R22 *)rt_nil_check(l_T_654))).f_NLITS = r_LIST_LENGTH(p_LITS);
((*(R22 *)rt_nil_check(l_T_654))).f_UNORDERED = p_UNORDERED;
S_R10(&((*(R22 *)rt_nil_check(l_T_654))).f_CNAME, r_NEW_NAME(rt_str("E", 1)), 0);
l_Y_653 = r_NEW_SYM(g_Y_TYPE, r_NO_TEXT());
((*(R12 *)rt_nil_check(l_Y_653))).f_T = l_T_654;
((*(R12 *)rt_nil_check(l_Y_653))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
((*(R7 *)rt_nil_check(g_W))).f_ENUMS = l_Y_653;
{
R21 * l_P_659; memset(&l_P_659, 0, sizeof l_P_659);
l_P_659 = p_LITS;
R10 l_NAMES_660; memset(&l_NAMES_660, 0, sizeof l_NAMES_660);
S_R10(&l_NAMES_660, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_P_659 == NULL)) goto L_end661;
{
S_R10(&l_NAMES_660, r_FMT2(rt_str("@@, ", 4), l_NAMES_660, r_CSTRING(((*(R21 *)rt_nil_check(l_P_659))).f_NAME)), 0);
l_P_659 = ((*(R21 *)rt_nil_check(l_P_659))).f_NEXT;
}
RT_B_TICK();
} L_end661: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static const char *@[] = { @0 };", 32), ((*(R22 *)rt_nil_check(l_T_654))).f_CNAME, l_NAMES_660));
}
r_DECLARE_LITERALS(l_T_654, p_LINE);
{ R22 * rv662 = l_T_654;
return rv662; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_LITERALS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_P_663; memset(&l_P_663, 0, sizeof l_P_663);
l_P_663 = ((*(R22 *)rt_nil_check(p_T))).f_LITS;
rt_int l_I_664; memset(&l_I_664, 0, sizeof l_I_664);
l_I_664 = ((rt_int)0LL);
for (;;) {
if ((l_P_663 == NULL)) goto L_end665;
{
if ((r_VISIBLE_LITERAL(((*(R21 *)rt_nil_check(l_P_663))).f_NAME, p_T) == NULL))
{
{
R12 * l_Y_666; memset(&l_Y_666, 0, sizeof l_Y_666);
l_Y_666 = r_NEW_SYM(g_Y_ENUMLIT, ((*(R21 *)rt_nil_check(l_P_663))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_666))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_666))).f_MV = l_I_664;
((*(R12 *)rt_nil_check(l_Y_666))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_666))).f_INPUT = 1;
r_DEFINE(l_Y_666, p_LINE);
}
}
l_I_664 = rt_add(l_I_664, ((rt_int)1LL));
l_P_663 = ((*(R21 *)rt_nil_check(l_P_663))).f_NEXT;
}
RT_B_TICK();
} L_end665: ;
}
static R12 * r_FIND_LITERAL(R10 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_V_667; memset(&l_V_667, 0, sizeof l_V_667);
l_V_667 = r_VISIBLE_LITERAL(p_NAME, p_T);
if (((!(l_V_667 == NULL)) || (p_T == NULL)))
{
{ R12 * rv668 = l_V_667;
return rv668; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL))
{
{ R12 * rv669 = NULL;
return rv669; }
}
{
R21 * l_P_670; memset(&l_P_670, 0, sizeof l_P_670);
l_P_670 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
rt_int l_I_671; memset(&l_I_671, 0, sizeof l_I_671);
l_I_671 = ((rt_int)0LL);
for (;;) {
if ((l_P_670 == NULL)) goto L_end672;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_670))).f_NAME, p_NAME))
{
{
R12 * l_Y_673; memset(&l_Y_673, 0, sizeof l_Y_673);
l_Y_673 = r_NEW_SYM(g_Y_ENUMLIT, p_NAME);
((*(R12 *)rt_nil_check(l_Y_673))).f_T = ((*(R22 *)rt_nil_check(p_T))).f_BASE;
((*(R12 *)rt_nil_check(l_Y_673))).f_MV = l_I_671;
((*(R12 *)rt_nil_check(l_Y_673))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_673))).f_INPUT = 1;
{ R12 * rv674 = l_Y_673;
return rv674; }
}
}
l_I_671 = rt_add(l_I_671, ((rt_int)1LL));
l_P_670 = ((*(R21 *)rt_nil_check(l_P_670))).f_NEXT;
}
RT_B_TICK();
} L_end672: ;
}
{ R12 * rv675 = NULL;
return rv675; }
rt_raise(RT_X_INIT);
}
static R12 * r_VISIBLE_LITERAL(R10 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_676; memset(&l_Y_676, 0, sizeof l_Y_676);
l_Y_676 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_676 == NULL)) goto L_end677;
{
if ((((*(R12 *)rt_nil_check(l_Y_676))).f_KIND == g_Y_ENUMLIT))
{
if ((p_T == NULL))
{
{ R12 * rv678 = l_Y_676;
return rv678; }
}
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_676))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv679 = l_Y_676;
return rv679; }
}
}
l_Y_676 = r_LOOKUP_NEXT(l_Y_676);
}
RT_B_TICK();
} L_end677: ;
{ R12 * rv680 = NULL;
return rv680; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_CLASSES(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_681; memset(&l_Y_681, 0, sizeof l_Y_681);
l_Y_681 = r_LOOKUP(p_NAME);
rt_int l_N_682; memset(&l_N_682, 0, sizeof l_N_682);
l_N_682 = ((rt_int)0LL);
for (;;) {
if ((l_Y_681 == NULL)) goto L_end683;
{
if ((((*(R12 *)rt_nil_check(l_Y_681))).f_KIND == g_Y_ENUMLIT))
{
l_N_682 = rt_add(l_N_682, ((rt_int)1LL));
}
l_Y_681 = r_LOOKUP_NEXT(l_Y_681);
}
RT_B_TICK();
} L_end683: ;
{ rt_int rv684 = l_N_682;
return rv684; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE(R21 * p_TS) { RT_B_TICK(); 
{ R22 * rv685 = r_RESOLVE_NAMED(p_TS, r_NO_TEXT());
return rv685; }
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
R22 * l_N_686; memset(&l_N_686, 0, sizeof l_N_686);
if ((p_R == NULL))
{
{ R22 * rv687 = p_T;
return rv687; }
}
if ((r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(p_R))).f_A) || r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(p_R))).f_B)))
{
l_N_686 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_N_686))).f_NAME, r_NO_TEXT(), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_686))).f_LO_C, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN))), 0);
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_686))).f_HI_C, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN))), 0);
}
{ R22 * rv688 = l_N_686;
return rv688; }
}
if ((!((((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_R))).f_LINE, rt_str("a range is only for fixed, float and enumerated types (3.12.2)", 62));
}
l_N_686 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_N_686))).f_NAME, r_NO_TEXT(), 0);
((*(R22 *)rt_nil_check(l_N_686))).f_RLEVEL = r_CUR_LEVEL();
{
R26 l_LO_689; memset(&l_LO_689, 0, sizeof l_LO_689);
R26 l_HI_690; memset(&l_HI_690, 0, sizeof l_HI_690);
S_R26(&l_LO_689, r_EXPR(((*(R21 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R26(&l_HI_690, r_EXPR(((*(R21 *)rt_nil_check(p_R))).f_B, p_T), 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_686))).f_LO_C, (l_LO_689).f_C, 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_686))).f_HI_C, (l_HI_690).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_686))).f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_A), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_686))).f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_B), 0);
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_686))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_686))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(p_R))).f_B, p_T), 0);
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_689).f_T), r_REAL_TYPE(p_T))) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_690).f_T), r_REAL_TYPE(p_T)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_R))).f_LINE, rt_str("the bounds of a range must be of the class of the type (3.2.1, 3.3.1, 3.4.1)", 76));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_686))).f_LO_C, r_RESCALE(l_LO_689, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R21 *)rt_nil_check(p_R))).f_LINE), 0);
S_R10(&((*(R22 *)rt_nil_check(l_N_686))).f_HI_C, r_RESCALE(l_HI_690, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R21 *)rt_nil_check(p_R))).f_LINE), 0);
if ((((!(((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL))) || (!(((*(R22 *)rt_nil_check((l_LO_689).f_T))).f_SCALE == ((rt_int)0LL)))) || (!(((*(R22 *)rt_nil_check((l_HI_690).f_T))).f_SCALE == ((rt_int)0LL)))))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_686))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_686))).f_MHI, r_NO_MVAL(), 0);
}
}
}
if (((((*(R21 *)rt_nil_check(p_R))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(p_R))).f_IV == ((rt_int)3LL))))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_686))).f_LO_C, r_FMT1(rt_str("nextafter(@, INFINITY)", 22), ((*(R22 *)rt_nil_check(l_N_686))).f_LO_C), 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_N_686))).f_LO_C, r_FMT1(rt_str("((@) + 1)", 9), ((*(R22 *)rt_nil_check(l_N_686))).f_LO_C), 0);
(((*(R22 *)rt_nil_check(l_N_686))).f_MLO).f_V = rt_add((((*(R22 *)rt_nil_check(l_N_686))).f_MLO).f_V, ((rt_int)1LL));
}
}
if ((((*(R21 *)rt_nil_check(p_R))).f_IV >= ((rt_int)2LL)))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R10(&((*(R22 *)rt_nil_check(l_N_686))).f_HI_C, r_FMT1(rt_str("nextafter(@, -INFINITY)", 23), ((*(R22 *)rt_nil_check(l_N_686))).f_HI_C), 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_N_686))).f_HI_C, r_FMT1(rt_str("((@) - 1)", 9), ((*(R22 *)rt_nil_check(l_N_686))).f_HI_C), 0);
(((*(R22 *)rt_nil_check(l_N_686))).f_MHI).f_V = rt_sub((((*(R22 *)rt_nil_check(l_N_686))).f_MHI).f_V, ((rt_int)1LL));
}
}
{ R22 * rv691 = l_N_686;
return rv691; }
rt_raise(RT_X_INIT);
}
static R23 r_ENUM_MANIFEST(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{
R12 * l_Y_692; memset(&l_Y_692, 0, sizeof l_Y_692);
l_Y_692 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, p_T);
if ((!(l_Y_692 == NULL)))
{
{ R23 rv693 = r_SOME(((*(R12 *)rt_nil_check(l_Y_692))).f_MV);
return rv693; }
}
}
}
{ R23 rv694 = r_MANIFEST(p_E);
return rv694; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_LEVEL(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_CS == NULL))
{
{ rt_int rv695 = ((rt_int)0LL);
return rv695; }
}
{ rt_int rv696 = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
return rv696; }
rt_raise(RT_X_INIT);
}
static R22 * r_ARG_TYPE(R21 * p_N) { RT_B_TICK(); 
{ R22 * rv697 = r_RESOLVE(r_EXPR_TO_TS(p_N));
return rv697; }
rt_raise(RT_X_INIT);
}
static R21 * r_NTH_ARG(R21 * p_TS, rt_int p_K) { RT_B_TICK(); 
R21 * l_A_698; memset(&l_A_698, 0, sizeof l_A_698);
l_A_698 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
{ rt_int it700_lo = ((rt_int)1LL), it700_hi = p_K;
for (rt_int it700 = it700_lo; it700 <= it700_hi; it700++) {
{
if ((l_A_698 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
l_A_698 = ((*(R21 *)rt_nil_check(l_A_698))).f_NEXT;
}
RT_B_TICK();
if (it700 == it700_hi) break;
} } L_end699: ;
if ((l_A_698 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R21 * rv701 = l_A_698;
return rv701; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_NAMED(R21 * p_TS, R10 p_CNAME) { RT_B_TICK(); 
R22 * l_T_702; memset(&l_T_702, 0, sizeof l_T_702);
rt_int l_K_703; memset(&l_K_703, 0, sizeof l_K_703);
l_K_703 = ((*(R21 *)rt_nil_check(p_TS))).f_KIND;
if ((l_K_703 == g_TS_ARRAY))
{
{ R22 * rv704 = r_RESOLVE_ARRAY(p_TS);
return rv704; }
}
else if ((l_K_703 == g_TS_RECORD))
{
{ R22 * rv705 = r_RESOLVE_RECORD(p_TS, p_CNAME, NULL, NULL);
return rv705; }
}
else if ((l_K_703 == g_TS_ENUM))
{
l_T_702 = r_ENUM_CLASS(((*(R21 *)rt_nil_check(p_TS))).f_A, (((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)), ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
if (((((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("an UNORDERED type has no range", 30));
}
l_T_702 = r_WITH_RANGE(l_T_702, ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_702 = r_APPLY_REP(l_T_702, ((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv706 = l_T_702;
return rv706; }
}
else if ((l_K_703 == g_TS_GEN))
{
{ R22 * rv707 = r_GEN_TYPE(p_TS);
return rv707; }
}
else if ((!(l_K_703 == g_TS_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a type specification expected", 29));
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_FL == ((rt_int)3LL)))
{
l_T_702 = r_WITH_RANGE(r_TYPE_ATTR_TYPE(((*(R21 *)rt_nil_check(p_TS))).f_E), ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_702 = r_APPLY_REP(l_T_702, ((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv708 = l_T_702;
return rv708; }
}
l_T_702 = r_RESOLVE_PREDEFINED(p_TS);
if ((l_T_702 == NULL))
{
l_T_702 = r_RESOLVE_USER(p_TS);
}
l_T_702 = r_WITH_RANGE(l_T_702, ((*(R21 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_702 = r_APPLY_REP(l_T_702, ((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv709 = l_T_702;
return rv709; }
rt_raise(RT_X_INIT);
}
static R22 * r_APPLY_REP(R22 * p_T0, R21 * p_R0, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_710; memset(&l_T_710, 0, sizeof l_T_710);
l_T_710 = r_COPY_TYP(p_T0);
if ((((*(R22 *)rt_nil_check(p_T0))).f_KIND == g_T_ABS))
{
r_FAIL(p_LINE, rt_str("a REP clause is only for a member of a predefined type class (3.12.2)", 69));
}
((*(R22 *)rt_nil_check(l_T_710))).f_REPS = r_EXPAND_REP(p_R0, p_T0, p_LINE);
r_CHECK_REP_CLASS(l_T_710, p_LINE);
if ((((*(R22 *)rt_nil_check(l_T_710))).f_KIND == g_T_ENUM))
{
r_CHECK_ENUM_REP(l_T_710, p_LINE);
}
else if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_710))).f_REPS))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("ENUM_VAL_REP is only for UNORDERED types (3.4.3)", 48));
}
{ R22 * rv711 = l_T_710;
return rv711; }
rt_raise(RT_X_INIT);
}
static R21 * r_EXPAND_REP(R21 * p_R, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_712; memset(&l_Y_712, 0, sizeof l_Y_712);
if ((p_R == NULL))
{
{ R21 * rv713 = p_R;
return rv713; }
}
if ((((*(R21 *)rt_nil_check(p_R))).f_KIND == g_TS_GEN))
{
{ R21 * rv714 = p_R;
return rv714; }
}
l_Y_712 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_R))).f_NAME);
if ((l_Y_712 == NULL))
{
{ R21 * rv715 = p_R;
return rv715; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_712))).f_KIND == g_Y_REPTYPE)))
{
{ R21 * rv716 = p_R;
return rv716; }
}
if (((*(R12 *)rt_nil_check(l_Y_712))).f_BUSY)
{
r_FAILT(p_LINE, rt_str("a circular reptype declaration (3.12.3): ", 41), ((*(R21 *)rt_nil_check(p_R))).f_NAME);
}
{
R21 * l_D_717; memset(&l_D_717, 0, sizeof l_D_717);
l_D_717 = ((*(R12 *)rt_nil_check(l_Y_712))).f_DECL;
R21 * l_X_718; memset(&l_X_718, 0, sizeof l_X_718);
l_X_718 = r_NEW_NODE(g_N_REP, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
R21 * l_HEAD_719; memset(&l_HEAD_719, 0, sizeof l_HEAD_719);
l_HEAD_719 = NULL;
R21 * l_TAIL_720; memset(&l_TAIL_720, 0, sizeof l_TAIL_720);
l_TAIL_720 = NULL;
((*(R12 *)rt_nil_check(l_Y_712))).f_BUSY = 1;
r_OPEN_SCOPE();
if (((!(((*(R21 *)rt_nil_check(l_D_717))).f_A == NULL)) || (!(((*(R21 *)rt_nil_check(p_R))).f_A == NULL))))
{
r_BIND_FORMALS(((*(R21 *)rt_nil_check(l_D_717))).f_A, p_R);
}
if ((!(((*(R21 *)rt_nil_check(l_D_717))).f_C == NULL)))
{
{
R12 * l_B_721; memset(&l_B_721, 0, sizeof l_B_721);
l_B_721 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_717))).f_C))).f_NAME);
((*(R12 *)rt_nil_check(l_B_721))).f_T = p_T;
r_DEFINE(l_B_721, p_LINE);
}
}
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
S_R10(&((*(R21 *)rt_nil_check(l_X_718))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_717))).f_B))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_X_718))).f_B = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_717))).f_B))).f_B;
((*(R21 *)rt_nil_check(l_X_718))).f_C = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_717))).f_B))).f_C;
if (r_TEQS(((*(R21 *)rt_nil_check(l_X_718))).f_NAME, rt_str("RECORD_REP", 10)))
{
l_HEAD_719 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_717))).f_B))).f_A;
}
else
{
{
R21 * l_A_722; memset(&l_A_722, 0, sizeof l_A_722);
l_A_722 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_717))).f_B))).f_A;
for (;;) {
if ((l_A_722 == NULL)) goto L_end723;
{
r_ADD_LIST(r_REP_ARG_VALUE(l_A_722), &l_HEAD_719, &l_TAIL_720);
l_A_722 = ((*(R21 *)rt_nil_check(l_A_722))).f_NEXT;
}
RT_B_TICK();
} L_end723: ;
}
}
((*(R21 *)rt_nil_check(l_X_718))).f_A = l_HEAD_719;
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
r_CLOSE_SCOPE();
l_X_718 = r_EXPAND_REP(l_X_718, p_T, p_LINE);
((*(R12 *)rt_nil_check(l_Y_712))).f_BUSY = 0;
{ R21 * rv724 = l_X_718;
return rv724; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_REP_ARG_VALUE(R21 * p_A) { RT_B_TICK(); 
R21 * l_N_725; memset(&l_N_725, 0, sizeof l_N_725);
R23 l_M_726; memset(&l_M_726, 0, sizeof l_M_726);
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_727; memset(&l_Y_727, 0, sizeof l_Y_727);
l_Y_727 = r_LOOKUP(((*(R21 *)rt_nil_check(p_A))).f_NAME);
if (((l_Y_727 == NULL) || (((!(l_Y_727 == NULL)) && (((*(R12 *)rt_nil_check(l_Y_727))).f_KIND == g_Y_ENUMLIT)))))
{
l_N_725 = r_NEW_NODE(((*(R21 *)rt_nil_check(p_A))).f_KIND, ((*(R21 *)rt_nil_check(p_A))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_725))).f_NAME, ((*(R21 *)rt_nil_check(p_A))).f_NAME, 0);
{ R21 * rv728 = l_N_725;
return rv728; }
}
if (((((*(R12 *)rt_nil_check(l_Y_727))).f_KIND == g_Y_CONST) && (!(((*(R12 *)rt_nil_check(l_Y_727))).f_T == NULL))))
{
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_727))).f_T)))).f_KIND == g_T_ENUM) && ((*(R12 *)rt_nil_check(l_Y_727))).f_HASMV))
{
{
R21 * l_L_729; memset(&l_L_729, 0, sizeof l_L_729);
l_L_729 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_727))).f_T)))).f_BASE))).f_LITS;
rt_int l_I_730; memset(&l_I_730, 0, sizeof l_I_730);
l_I_730 = ((rt_int)0LL);
for (;;) {
if (((l_L_729 == NULL) || (l_I_730 == ((*(R12 *)rt_nil_check(l_Y_727))).f_MV))) goto L_end731;
{
l_I_730 = rt_add(l_I_730, ((rt_int)1LL));
l_L_729 = ((*(R21 *)rt_nil_check(l_L_729))).f_NEXT;
}
RT_B_TICK();
} L_end731: ;
if ((!(l_L_729 == NULL)))
{
l_N_725 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_A))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_725))).f_NAME, ((*(R21 *)rt_nil_check(l_L_729))).f_NAME, 0);
{ R21 * rv732 = l_N_725;
return rv732; }
}
}
}
}
}
}
S_R23(&l_M_726, r_MANIFEST(p_A), 0);
if ((!(l_M_726).f_OK))
{
{
R14 l_SAVED_CODE_733; memset(&l_SAVED_CODE_733, 0, sizeof l_SAVED_CODE_733);
S_R14(&l_SAVED_CODE_733, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_734; memset(&l_V_734, 0, sizeof l_V_734);
S_R26(&l_V_734, r_EXPR(p_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_733, 0);
}
{ R21 * rv735 = p_A;
return rv735; }
}
l_N_725 = r_NEW_NODE(g_N_INT, ((*(R21 *)rt_nil_check(p_A))).f_LINE);
if (((l_M_726).f_V < ((rt_int)0LL)))
{
((*(R21 *)rt_nil_check(l_N_725))).f_IV = rt_neg((l_M_726).f_V);
S_R10(&((*(R21 *)rt_nil_check(l_N_725))).f_NAME, r_NUM(rt_neg((l_M_726).f_V)), 0);
{
R21 * l_U_736; memset(&l_U_736, 0, sizeof l_U_736);
l_U_736 = r_NEW_NODE(g_N_UNOP, ((*(R21 *)rt_nil_check(p_A))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_U_736))).f_NAME, r_MK(rt_str("-", 1)), 0);
((*(R21 *)rt_nil_check(l_U_736))).f_A = l_N_725;
{ R21 * rv737 = l_U_736;
return rv737; }
}
}
((*(R21 *)rt_nil_check(l_N_725))).f_IV = (l_M_726).f_V;
S_R10(&((*(R21 *)rt_nil_check(l_N_725))).f_NAME, r_NUM((l_M_726).f_V), 0);
{ R21 * rv738 = l_N_725;
return rv738; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_REP_CLASS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_739; memset(&l_R_739, 0, sizeof l_R_739);
l_R_739 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
rt_int l_K_740; memset(&l_K_740, 0, sizeof l_K_740);
l_K_740 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
rt_int l_OK_741; memset(&l_OK_741, 0, sizeof l_OK_741);
l_OK_741 = 0;
if ((((*(R21 *)rt_nil_check(l_R_739))).f_KIND == g_TS_GEN))
{
return;
}
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(l_R_739))).f_NAME) == NULL)))
{
return;
}
if ((!(r_LOOKUP(((*(R21 *)rt_nil_check(l_R_739))).f_NAME) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_LOOKUP(((*(R21 *)rt_nil_check(l_R_739))).f_NAME)))).f_KIND == g_Y_GEN))
{
return;
}
}
{
R10 l_N_742; memset(&l_N_742, 0, sizeof l_N_742);
S_R10(&l_N_742, ((*(R21 *)rt_nil_check(l_R_739))).f_NAME, 0);
if ((l_K_740 == g_T_INT))
{
l_OK_741 = (r_TEQS(l_N_742, rt_str("FIXED_STD", 9)) || r_TEQS(l_N_742, rt_str("FIXED_REP", 9)));
}
else if ((l_K_740 == g_T_FLOAT))
{
l_OK_741 = r_TEQS(l_N_742, rt_str("FLOAT_STD", 9));
}
else if ((l_K_740 == g_T_BOOL))
{
l_OK_741 = r_TEQS(l_N_742, rt_str("BOOLEAN_STD", 11));
}
else if ((l_K_740 == g_T_ENUM))
{
l_OK_741 = ((r_TEQS(l_N_742, rt_str("ENUM_STD", 8)) || r_TEQS(l_N_742, rt_str("ENUM_REP", 8))) || r_TEQS(l_N_742, rt_str("ENUM_VAL_REP", 12)));
}
else if ((l_K_740 == g_T_STR))
{
l_OK_741 = (r_TEQS(l_N_742, rt_str("CHAR_STR_STD", 12)) || r_TEQS(l_N_742, rt_str("CHAR_STR_REP", 12)));
}
else if ((l_K_740 == g_T_BITS))
{
l_OK_741 = r_TEQS(l_N_742, rt_str("BIT_STD", 7));
}
else if ((l_K_740 == g_T_ARR))
{
l_OK_741 = (r_TEQS(l_N_742, rt_str("ARRAY_STD", 9)) || r_TEQS(l_N_742, rt_str("ARRAY_REP", 9)));
}
else if ((l_K_740 == g_T_REC))
{
l_OK_741 = (r_TEQS(l_N_742, rt_str("RECORD_STD", 10)) || r_TEQS(l_N_742, rt_str("RECORD_REP", 10)));
}
else if ((l_K_740 == g_T_PTR))
{
l_OK_741 = r_TEQS(l_N_742, rt_str("PTR_STD", 7));
}
else if ((l_K_740 == g_T_SEM))
{
l_OK_741 = r_TEQS(l_N_742, rt_str("SEMAPHORE_STD", 13));
}
else if ((l_K_740 == g_T_TYPE))
{
l_OK_741 = 1;
}
if ((!l_OK_741))
{
r_FAILT(p_LINE, rt_str("the representation does not suit the type class (3.12.4): ", 58), l_N_742);
}
if (r_TEQS(l_N_742, rt_str("FIXED_REP", 9)))
{
r_CHECK_FIXED_REP(p_T, p_LINE);
}
}
}
static rt_int r_POW2(rt_int p_N) { RT_B_TICK(); 
rt_int l_P_743; memset(&l_P_743, 0, sizeof l_P_743);
l_P_743 = ((rt_int)1LL);
{ rt_int it745_lo = ((rt_int)1LL), it745_hi = p_N;
for (rt_int it745 = it745_lo; it745 <= it745_hi; it745++) {
{
l_P_743 = rt_mul(l_P_743, ((rt_int)2LL));
}
RT_B_TICK();
if (it745 == it745_hi) break;
} } L_end744: ;
{ rt_int rv746 = l_P_743;
return rv746; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_747; memset(&l_R_747, 0, sizeof l_R_747);
l_R_747 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
rt_int l_UNSIGNED_748; memset(&l_UNSIGNED_748, 0, sizeof l_UNSIGNED_748);
l_UNSIGNED_748 = 0;
if ((((*(R21 *)rt_nil_check(l_R_747))).f_A == NULL))
{
r_FAIL(p_LINE, rt_str("FIXED_REP takes a size and a signing (3.2.3 [3-55])", 51));
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_747))).f_A))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_747))).f_A))).f_KIND == g_N_DONTCARE)))
{
return;
}
{
R23 l_N_749; memset(&l_N_749, 0, sizeof l_N_749);
S_R23(&l_N_749, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_747))).f_A), 0);
if ((!(l_N_749).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of FIXED_REP is a manifest integer (3.2.3 [3-56])", 58));
}
if ((((l_N_749).f_V < ((rt_int)0LL)) || ((l_N_749).f_V > ((rt_int)64LL))))
{
r_FAIL(p_LINE, rt_str("the size of FIXED_REP is in [0:64], the default size (3.2.3)", 60));
}
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_747))).f_A))).f_NEXT == NULL)))
{
{
R21 * l_S_750; memset(&l_S_750, 0, sizeof l_S_750);
l_S_750 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_747))).f_A))).f_NEXT;
if (((((*(R21 *)rt_nil_check(l_S_750))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_S_750))).f_KIND == g_N_DONTCARE)))
{
return;
}
if ((!(((((((*(R21 *)rt_nil_check(l_S_750))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_S_750))).f_KIND == g_N_ENUMLIT))) && ((r_TEQS(((*(R21 *)rt_nil_check(l_S_750))).f_NAME, rt_str("SIGNED", 6)) || r_TEQS(((*(R21 *)rt_nil_check(l_S_750))).f_NAME, rt_str("UNSIGNED", 8))))))))
{
r_FAIL(p_LINE, rt_str("the signing of FIXED_REP is a manifest value of SIGNING (3.2.3 [3-57])", 70));
}
l_UNSIGNED_748 = r_TEQS(((*(R21 *)rt_nil_check(l_S_750))).f_NAME, rt_str("UNSIGNED", 8));
if ((!(((*(R21 *)rt_nil_check(l_S_750))).f_NEXT == NULL)))
{
r_FAIL(p_LINE, rt_str("FIXED_REP takes a size and a signing (3.2.3 [3-55])", 51));
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_REPCONV)
{
return;
}
if (l_UNSIGNED_748)
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
if (((((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK) && ((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN > ((rt_int)0LL))) && ((l_N_749).f_V < ((rt_int)63LL))))
{
{
rt_int l_LO_751; memset(&l_LO_751, 0, sizeof l_LO_751);
l_LO_751 = ((rt_int)0LL);
rt_int l_HI_752; memset(&l_HI_752, 0, sizeof l_HI_752);
l_HI_752 = ((rt_int)0LL);
if (l_UNSIGNED_748)
{
l_HI_752 = rt_sub(r_POW2((l_N_749).f_V), ((rt_int)1LL));
}
else if (((l_N_749).f_V > ((rt_int)0LL)))
{
l_LO_751 = rt_neg(r_POW2(rt_sub((l_N_749).f_V, ((rt_int)1LL))));
l_HI_752 = rt_sub(r_POW2(rt_sub((l_N_749).f_V, ((rt_int)1LL))), ((rt_int)1LL));
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_V < l_LO_751) || ((((*(R22 *)rt_nil_check(p_T))).f_MHI).f_V > l_HI_752)))
{
r_FAIL(p_LINE, rt_str("the range of the type exceeds what the size of FIXED_REP represents (3.2.3)", 75));
}
}
}
}
}
static R22 * r_TYPE_ATTR_TYPE(R21 * p_E) { RT_B_TICK(); 
R22 * l_T_753; memset(&l_T_753, 0, sizeof l_T_753);
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type-valued attribute expected", 32));
}
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_IS_TYPE_ATTR(((*(R21 *)rt_nil_check(p_E))).f_A)))
{
l_T_753 = r_TYPE_ATTR_TYPE(((*(R21 *)rt_nil_check(p_E))).f_A);
}
else
{
{
R14 l_SAVED_CODE_754; memset(&l_SAVED_CODE_754, 0, sizeof l_SAVED_CODE_754);
S_R14(&l_SAVED_CODE_754, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
l_T_753 = (r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(p_E))).f_A)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_754, 0);
}
}
{
R22 * l_R_755; memset(&l_R_755, 0, sizeof l_R_755);
l_R_755 = r_REAL_TYPE(l_T_753);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)))
{
if ((((*(R22 *)rt_nil_check(l_R_755))).f_KIND == g_T_ARR))
{
{ R22 * rv756 = ((*(R22 *)rt_nil_check(l_R_755))).f_ELEM;
return rv756; }
}
else if ((((*(R22 *)rt_nil_check(l_R_755))).f_KIND == g_T_PTR))
{
{ R22 * rv757 = r_TARGET(l_R_755);
return rv757; }
}
}
else if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7)) && (((*(R22 *)rt_nil_check(l_R_755))).f_KIND == g_T_STR)))
{
{ R22 * rv758 = r_CHARSET_OF(l_R_755);
return rv758; }
}
if ((((*(R22 *)rt_nil_check(l_R_755))).f_KIND == g_T_REC))
{
{
R12 * l_C_759; memset(&l_C_759, 0, sizeof l_C_759);
l_C_759 = r_RECORD_CLASS_OF(l_R_755);
if ((!(l_C_759 == NULL)))
{
{
R20 * l_B_760; memset(&l_B_760, 0, sizeof l_B_760);
l_B_760 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_759))).f_BINDINGS, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_760 == NULL)))
{
if ((!(((*(R20 *)rt_nil_check(l_B_760))).f_T == NULL)))
{
{ R22 * rv761 = ((*(R20 *)rt_nil_check(l_B_760))).f_T;
return rv761; }
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
{ rt_int rv762 = 0;
return rv762; }
}
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7))))
{
{ rt_int rv763 = 1;
return rv763; }
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_764; memset(&l_Y_764, 0, sizeof l_Y_764);
l_Y_764 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME);
if ((!(l_Y_764 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_764))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_764))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_764))).f_T == NULL))))
{
{
R22 * l_R_765; memset(&l_R_765, 0, sizeof l_R_765);
l_R_765 = r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_764))).f_T);
if ((((*(R22 *)rt_nil_check(l_R_765))).f_KIND == g_T_REC))
{
{
R12 * l_C_766; memset(&l_C_766, 0, sizeof l_C_766);
l_C_766 = r_RECORD_CLASS_OF(l_R_765);
if ((!(l_C_766 == NULL)))
{
if ((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_766))).f_BINDINGS, ((*(R21 *)rt_nil_check(p_E))).f_NAME) == NULL)))
{
{ rt_int rv767 = 1;
return rv767; }
}
}
}
}
}
}
}
}
}
{ rt_int rv768 = 0;
return rv768; }
rt_raise(RT_X_INIT);
}
static R22 * r_GEN_TYPE(R21 * p_TS) { RT_B_TICK(); 
R20 * l_B_769; memset(&l_B_769, 0, sizeof l_B_769);
l_B_769 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_769 == NULL)) goto L_end770;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_769))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_769))).f_T == NULL))))
{
{ R22 * rv771 = ((*(R20 *)rt_nil_check(l_B_769))).f_T;
return rv771; }
}
l_B_769 = ((*(R20 *)rt_nil_check(l_B_769))).f_NEXT;
}
RT_B_TICK();
} L_end770: ;
{
R12 * l_Y_772; memset(&l_Y_772, 0, sizeof l_Y_772);
l_Y_772 = r_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_772 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_772))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_772))).f_T == NULL))))
{
{ R22 * rv773 = ((*(R12 *)rt_nil_check(l_Y_772))).f_T;
return rv773; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a derived generic type outside a formal parameter list: \?", 57), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_PREDEFINED(R21 * p_TS) { RT_B_TICK(); 
R10 l_NAME_774; memset(&l_NAME_774, 0, sizeof l_NAME_774);
S_R10(&l_NAME_774, ((*(R21 *)rt_nil_check(p_TS))).f_NAME, 0);
R22 * l_T_775; memset(&l_T_775, 0, sizeof l_T_775);
if (r_TEQS(l_NAME_774, rt_str("FIXED", 5)))
{
{
R23 l_S_776; memset(&l_S_776, 0, sizeof l_S_776);
S_R23(&l_S_776, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_777; memset(&l_R_777, 0, sizeof l_R_777);
S_R23(&l_R_777, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
R21 * l_P_778; memset(&l_P_778, 0, sizeof l_P_778);
l_P_778 = r_NTH_ARG(p_TS, ((rt_int)2LL));
r_TYPE_ARG_COUNT(p_TS, ((rt_int)3LL));
if ((!((l_R_777).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("only radix 2 is predefined (3.2.1)", 34));
}
r_CHECK_PRECISION_ARG(l_P_778, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
if (((l_S_776).f_V == ((rt_int)0LL)))
{
{ R22 * rv779 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv779; }
}
l_T_775 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_775))).f_SCALE = (l_S_776).f_V;
{ R22 * rv780 = l_T_775;
return rv780; }
}
}
else if (r_TEQS(l_NAME_774, rt_str("FLOAT", 5)))
{
{
R23 l_P_781; memset(&l_P_781, 0, sizeof l_P_781);
S_R23(&l_P_781, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
l_T_775 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_775))).f_SCALE = (l_P_781).f_V;
{ R22 * rv782 = l_T_775;
return rv782; }
}
}
else if (r_TEQS(l_NAME_774, rt_str("BIT", 3)))
{
l_T_775 = r_NEW_TYP(g_T_BITS);
r_STRING_LENGTH(l_T_775, r_NTH_ARG(p_TS, ((rt_int)0LL)));
{ R22 * rv783 = l_T_775;
return rv783; }
}
else if ((r_TEQS(l_NAME_774, rt_str("CHAR_STR", 8)) || r_TEQS(l_NAME_774, rt_str("ASCII_STR", 9))))
{
l_T_775 = r_NEW_TYP(g_T_STR);
r_STRING_LENGTH(l_T_775, r_NTH_ARG(p_TS, ((rt_int)0LL)));
((*(R22 *)rt_nil_check(l_T_775))).f_BASE = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
if (r_TEQS(l_NAME_774, rt_str("CHAR_STR", 8)))
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)2LL));
{
R21 * l_CS_784; memset(&l_CS_784, 0, sizeof l_CS_784);
l_CS_784 = r_NTH_ARG(p_TS, ((rt_int)1LL));
R22 * l_C_785; memset(&l_C_785, 0, sizeof l_C_785);
if (((((*(R21 *)rt_nil_check(l_CS_784))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_CS_784))).f_KIND == g_N_DONTCARE)))
{
((*(R22 *)rt_nil_check(l_T_775))).f_BASE = NULL;
{ R22 * rv786 = l_T_775;
return rv786; }
}
if (((((*(R21 *)rt_nil_check(l_CS_784))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(l_CS_784))).f_NAME, rt_str("CHARSET", 7))))
{
{
R14 l_SAVED_CODE_787; memset(&l_SAVED_CODE_787, 0, sizeof l_SAVED_CODE_787);
S_R14(&l_SAVED_CODE_787, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_788; memset(&l_V_788, 0, sizeof l_V_788);
S_R26(&l_V_788, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(l_CS_784))).f_A), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_787, 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_788).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("CHARSET is an attribute of character strings (3.7.1)", 52));
}
((*(R22 *)rt_nil_check(l_T_775))).f_BASE = r_CHARSET_OF((l_V_788).f_T);
}
{ R22 * rv789 = l_T_775;
return rv789; }
}
l_C_785 = r_REAL_TYPE(r_ARG_TYPE(l_CS_784));
if ((!(((*(R22 *)rt_nil_check(l_C_785))).f_KIND == g_T_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset must be an enumerated type (3.7.1)", 44));
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_785))).f_BASE))).f_UNORDERED || (!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_785))).f_BASE))).f_LITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset is an ordered enumerated type with a literal \\'C' (3.7.1, 3.7.2)", 74));
}
((*(R22 *)rt_nil_check(l_T_775))).f_BASE = ((*(R22 *)rt_nil_check(l_C_785))).f_BASE;
}
}
else
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
}
{ R22 * rv790 = l_T_775;
return rv790; }
}
else if (r_TEQS(l_NAME_774, rt_str("PTR", 3)))
{
l_T_775 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_T_775))).f_TARGET_TS = r_NTH_ARG(p_TS, ((rt_int)0LL));
{ R22 * rv791 = l_T_775;
return rv791; }
}
else if (r_TEQS(l_NAME_774, rt_str("SEMAPHORE", 9)))
{
l_T_775 = r_NEW_TYP(g_T_SEM);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
{
R21 * l_U_792; memset(&l_U_792, 0, sizeof l_U_792);
l_U_792 = r_NTH_ARG(p_TS, ((rt_int)0LL));
R22 * l_UT_793; memset(&l_UT_793, 0, sizeof l_UT_793);
l_UT_793 = r_RESOLVE_USER_NAME(r_MK(rt_str("USAGE", 5)), ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
R23 l_M_794; memset(&l_M_794, 0, sizeof l_M_794);
S_R23(&l_M_794, r_NO_MVAL(), 0);
if (((((((*(R21 *)rt_nil_check(l_U_792))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_U_792))).f_KIND == g_N_ENUMLIT))) && (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_U_792))).f_NAME, l_UT_793) == NULL))))
{
S_R23(&l_M_794, r_ENUM_MANIFEST(l_U_792, l_UT_793), 0);
}
else
{
{
R14 l_SAVED_CODE_795; memset(&l_SAVED_CODE_795, 0, sizeof l_SAVED_CODE_795);
S_R14(&l_SAVED_CODE_795, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_796; memset(&l_V_796, 0, sizeof l_V_796);
S_R26(&l_V_796, r_EXPR(l_U_792, l_UT_793), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_795, 0);
if (r_SAME_CLASS(r_REAL_TYPE((l_V_796).f_T), r_REAL_TYPE(l_UT_793)))
{
S_R23(&l_M_794, r_MANIFEST(l_U_792), 0);
}
}
}
if ((!(l_M_794).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the use mode is a manifest value of USAGE, SYNCH or REGION (3.11.1)", 67));
}
((*(R22 *)rt_nil_check(l_T_775))).f_SCALE = (l_M_794).f_V;
}
{ R22 * rv797 = l_T_775;
return rv797; }
}
{ R22 * rv798 = NULL;
return rv798; }
rt_raise(RT_X_INIT);
}
static void r_TYPE_ARG_COUNT(R21 * p_TS, rt_int p_N) { RT_B_TICK(); 
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == p_N)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("the wrong number of arguments for the type ", 43), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
}
static R23 r_MANIFEST_INTEGER_ARG(R21 * p_A, rstr p_WHAT, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
R23 l_M_799; memset(&l_M_799, 0, sizeof l_M_799);
S_R23(&l_M_799, r_MANIFEST(p_A), 0);
if ((!(l_M_799).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" must be manifest (3.2.1, 3.3.1)", 32)));
}
if ((((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))) && (!r_BOUND_NAME(p_A))))
{
{
R14 l_SAVED_CODE_800; memset(&l_SAVED_CODE_800, 0, sizeof l_SAVED_CODE_800);
S_R14(&l_SAVED_CODE_800, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R22 * l_T_801; memset(&l_T_801, 0, sizeof l_T_801);
l_T_801 = (r_EXPR(p_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_800, 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_T_801)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_801))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is an integer (3.2.1, 3.3.1)", 29)));
}
}
}
if ((((l_M_799).f_V < p_LO) || ((l_M_799).f_V > p_HI)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is out of the range of the attribute (3.2.1, 3.3.1)", 52)));
}
{ R23 rv802 = l_M_799;
return rv802; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOUND_NAME(R21 * p_A) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv803 = 0;
return rv803; }
}
{ rt_int rv804 = (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(p_A))).f_NAME) == NULL));
return rv804; }
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
R12 * l_Y_805; memset(&l_Y_805, 0, sizeof l_Y_805);
l_Y_805 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
if ((!(l_Y_805 == NULL)))
{
if ((((((*(R12 *)rt_nil_check(l_Y_805))).f_KIND == g_Y_GEN) || (((*(R12 *)rt_nil_check(l_Y_805))).f_KIND == g_Y_CONST)) || (((((*(R12 *)rt_nil_check(l_Y_805))).f_KIND == g_Y_TYPE) && (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R21 *)rt_nil_check(p_P))).f_NAME) == NULL))))))
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
R21 * l_R_806; memset(&l_R_806, 0, sizeof l_R_806);
l_R_806 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
R10 l_NAME_807; memset(&l_NAME_807, 0, sizeof l_NAME_807);
S_R10(&l_NAME_807, ((*(R21 *)rt_nil_check(l_R_806))).f_NAME, 0);
if ((((*(R21 *)rt_nil_check(l_R_806))).f_KIND == g_TS_GEN))
{
return;
}
if ((r_TEQS(l_NAME_807, rt_str("ENUM_STD", 8)) || (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, l_NAME_807) == NULL))))
{
return;
}
if ((!((r_TEQS(l_NAME_807, rt_str("ENUM_REP", 8)) || r_TEQS(l_NAME_807, rt_str("ENUM_VAL_REP", 12))))))
{
if ((!(r_ORIG_LOOKUP(l_NAME_807) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(l_NAME_807)))).f_KIND == g_Y_REPTYPE))
{
return;
}
}
r_FAILT(p_LINE, rt_str("not a representation of an enumerated type (3.4.3): ", 52), l_NAME_807);
}
if ((((*(R21 *)rt_nil_check(l_R_806))).f_A == NULL))
{
r_FAILT(p_LINE, rt_str("the size of the representation is missing: ", 43), l_NAME_807);
}
{
R23 l_N_808; memset(&l_N_808, 0, sizeof l_N_808);
S_R23(&l_N_808, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_806))).f_A), 0);
rt_int l_NL_809; memset(&l_NL_809, 0, sizeof l_NL_809);
l_NL_809 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS;
if ((!(l_N_808).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is manifest (3.4.3)", 60));
}
if ((((l_N_808).f_V > ((rt_int)64LL)) || ((l_N_808).f_V < ((rt_int)0LL))))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is in [0:(FIXED.SIZE).MAX] (3.4.3)", 75));
}
if (r_TEQS(l_NAME_807, rt_str("ENUM_REP", 8)))
{
if ((!(((*(R21 *)rt_nil_check(l_R_806))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("VALUES belong to ENUM_VAL_REP (3.4.3)", 37));
}
if (((l_N_808).f_V < r_BITS_FOR(l_NL_809)))
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
R21 * l_L_810; memset(&l_L_810, 0, sizeof l_L_810);
l_L_810 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
for (;;) {
if ((l_L_810 == NULL)) goto L_end811;
{
{
R21 * l_V_812; memset(&l_V_812, 0, sizeof l_V_812);
l_V_812 = ((*(R21 *)rt_nil_check(l_R_806))).f_B;
rt_int l_FOUND_813; memset(&l_FOUND_813, 0, sizeof l_FOUND_813);
l_FOUND_813 = ((rt_int)0LL);
for (;;) {
if ((l_V_812 == NULL)) goto L_end814;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_812))).f_NAME, ((*(R21 *)rt_nil_check(l_L_810))).f_NAME))
{
l_FOUND_813 = rt_add(l_FOUND_813, ((rt_int)1LL));
}
l_V_812 = ((*(R21 *)rt_nil_check(l_V_812))).f_NEXT;
}
RT_B_TICK();
} L_end814: ;
if ((!(l_FOUND_813 == ((rt_int)1LL))))
{
r_FAILT(p_LINE, rt_str("VALUES must give every literal once (3.4.3): ", 45), ((*(R21 *)rt_nil_check(l_L_810))).f_NAME);
}
}
l_L_810 = ((*(R21 *)rt_nil_check(l_L_810))).f_NEXT;
}
RT_B_TICK();
} L_end811: ;
}
{
R21 * l_V_815; memset(&l_V_815, 0, sizeof l_V_815);
l_V_815 = ((*(R21 *)rt_nil_check(l_R_806))).f_B;
for (;;) {
if ((l_V_815 == NULL)) goto L_end816;
{
if ((r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_V_815))).f_NAME, ((*(R22 *)rt_nil_check(p_T))).f_BASE) == NULL))
{
r_FAILT(p_LINE, rt_str("not a literal of the type: ", 27), ((*(R21 *)rt_nil_check(l_V_815))).f_NAME);
}
{
R14 l_SAVED_CODE_817; memset(&l_SAVED_CODE_817, 0, sizeof l_SAVED_CODE_817);
S_R14(&l_SAVED_CODE_817, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_B_818; memset(&l_B_818, 0, sizeof l_B_818);
S_R26(&l_B_818, r_EXPR(((*(R21 *)rt_nil_check(l_V_815))).f_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_817, 0);
if ((!(((*(R22 *)rt_nil_check((l_B_818).f_T))).f_KIND == g_T_BITS)))
{
r_FAIL(p_LINE, rt_str("a representation in VALUES is a bitstring (3.4.3)", 49));
}
if ((((*(R22 *)rt_nil_check((l_B_818).f_T))).f_MLEN).f_OK)
{
if ((!((((*(R22 *)rt_nil_check((l_B_818).f_T))).f_MLEN).f_V == (l_N_808).f_V)))
{
r_FAILT(p_LINE, rt_str("the representation must have SIZE bits (3.4.3): ", 48), ((*(R21 *)rt_nil_check(l_V_815))).f_NAME);
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_815))).f_A))).f_KIND == g_N_BITS))
{
{
R21 * l_U_819; memset(&l_U_819, 0, sizeof l_U_819);
l_U_819 = ((*(R21 *)rt_nil_check(l_V_815))).f_NEXT;
for (;;) {
if ((l_U_819 == NULL)) goto L_end820;
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_819))).f_A))).f_KIND == g_N_BITS))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_819))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_815))).f_A))).f_NAME))
{
r_FAILT(p_LINE, rt_str("two literals have the same representation (3.4.3): ", 51), ((*(R21 *)rt_nil_check(l_U_819))).f_NAME);
}
}
l_U_819 = ((*(R21 *)rt_nil_check(l_U_819))).f_NEXT;
}
RT_B_TICK();
} L_end820: ;
}
}
}
l_V_815 = ((*(R21 *)rt_nil_check(l_V_815))).f_NEXT;
}
RT_B_TICK();
} L_end816: ;
}
}
}
static void r_STRING_LENGTH(R22 * p_T, R21 * p_A) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
{
R20 * l_B_821; memset(&l_B_821, 0, sizeof l_B_821);
l_B_821 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_821 == NULL)) goto L_end822;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_821))).f_NAME, ((*(R21 *)rt_nil_check(p_A))).f_NAME) && ((((*(R20 *)rt_nil_check(l_B_821))).f_C).f_LEN > ((rt_int)0LL))))
{
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, ((*(R20 *)rt_nil_check(l_B_821))).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, ({ R23 rc823; memset(&rc823, 0, sizeof rc823);  rc823.f_OK = ((*(R20 *)rt_nil_check(l_B_821))).f_HASMV; rc823.f_V = ((*(R20 *)rt_nil_check(l_B_821))).f_MV; rc823; }), 0);
return;
}
l_B_821 = ((*(R20 *)rt_nil_check(l_B_821))).f_NEXT;
}
RT_B_TICK();
} L_end822: ;
}
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_GEN, ((*(R21 *)rt_nil_check(p_A))).f_NAME, 0);
return;
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return;
}
{
R10 l_C_824; memset(&l_C_824, 0, sizeof l_C_824);
R23 l_M_825; memset(&l_M_825, 0, sizeof l_M_825);
r_ATTR_VALUE(p_A, &l_C_824, &l_M_825);
S_R10(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, l_C_824, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, l_M_825, 0);
((*(R22 *)rt_nil_check(p_T))).f_RLEVEL = r_CUR_LEVEL();
}
}
static R22 * r_RESOLVE_ARRAY(R21 * p_TS) { RT_B_TICK(); 
R22 * l_T_826; memset(&l_T_826, 0, sizeof l_T_826);
l_T_826 = r_NEW_TYP(g_T_ARR);
R21 * l_R_827; memset(&l_R_827, 0, sizeof l_R_827);
l_R_827 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_TAIL_828; memset(&l_TAIL_828, 0, sizeof l_TAIL_828);
l_TAIL_828 = NULL;
for (;;) {
if ((l_R_827 == NULL)) goto L_end829;
{
{
R25 * l_B_830; memset(&l_B_830, 0, sizeof l_B_830);
l_B_830 = ((R25 *)rt_b_new(sizeof (R25)));
R26 l_LO_831; memset(&l_LO_831, 0, sizeof l_LO_831);
R26 l_HI_832; memset(&l_HI_832, 0, sizeof l_HI_832);
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_827))).f_A))
{
S_R26(&l_LO_831, r_MKET(r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_827))).f_A))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_827))).f_A))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_LO_831, r_EXPR(((*(R21 *)rt_nil_check(l_R_827))).f_A, NULL), 0);
}
if (r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_827))).f_B))
{
S_R26(&l_HI_832, r_MKET(r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_827))).f_B))).f_NAME, (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_827))).f_B))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_HI_832, r_EXPR(((*(R21 *)rt_nil_check(l_R_827))).f_B, (l_LO_831).f_T), 0);
}
S_R25(&(*(R25 *)rt_nil_check(l_B_830)), ({ R25 rc833; memset(&rc833, 0, sizeof rc833);  S_R10(&rc833.f_LO, (l_LO_831).f_C, 0); S_R10(&rc833.f_HI, (l_HI_832).f_C, 0); S_R23(&rc833.f_MLO, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_827))).f_A), 0); S_R23(&rc833.f_MHI, r_MANIFEST(((*(R21 *)rt_nil_check(l_R_827))).f_B), 0); rc833.f_ANYARG = 0; rc833.f_NEXT = NULL; rc833; }), 0);
if (((!r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_827))).f_A)) && (!r_IS_GENERIC_NODE(((*(R21 *)rt_nil_check(l_R_827))).f_B))))
{
if ((!r_SAME_CLASS(r_REAL_TYPE((l_LO_831).f_T), r_REAL_TYPE((l_HI_832).f_T))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_827))).f_LINE, rt_str("the bounds of an array-bound are of one type class (3.8.1)", 58));
}
S_R10(&((*(R25 *)rt_nil_check(l_B_830))).f_LO, r_INDEX_OF(l_LO_831, ((*(R21 *)rt_nil_check(l_R_827))).f_LINE), 0);
S_R10(&((*(R25 *)rt_nil_check(l_B_830))).f_HI, r_INDEX_OF(l_HI_832, ((*(R21 *)rt_nil_check(l_R_827))).f_LINE), 0);
}
if (((((*(R22 *)rt_nil_check((l_LO_831).f_T))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check((l_LO_831).f_T))).f_KIND == g_T_ABS)))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_830))).f_MLO, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_827))).f_A, (l_LO_831).f_T), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_830))).f_MHI, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_R_827))).f_B, (l_LO_831).f_T), 0);
if ((!r_TEQ(((*(R25 *)rt_nil_check(l_B_830))).f_LO, (l_LO_831).f_C)))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_830))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_830))).f_MHI, r_NO_MVAL(), 0);
}
}
else if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_LO_831).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_827))).f_LINE, rt_str("array bounds are integer or enumerated (3.8.1)", 46));
}
if ((l_TAIL_828 == NULL))
{
((*(R22 *)rt_nil_check(l_T_826))).f_BOUNDS = l_B_830;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_828))).f_NEXT = l_B_830;
}
l_TAIL_828 = l_B_830;
((*(R22 *)rt_nil_check(l_T_826))).f_DIMS = rt_add(((*(R22 *)rt_nil_check(l_T_826))).f_DIMS, ((rt_int)1LL));
}
l_R_827 = ((*(R21 *)rt_nil_check(l_R_827))).f_NEXT;
}
RT_B_TICK();
} L_end829: ;
((*(R22 *)rt_nil_check(l_T_826))).f_RLEVEL = r_CUR_LEVEL();
((*(R22 *)rt_nil_check(l_T_826))).f_ELEM = r_RESOLVE(((*(R21 *)rt_nil_check(p_TS))).f_C);
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_826))).f_ELEM))).f_KIND == g_T_ARR))
{
r_FAIL(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("ARRAY ... OF ARRAY is forbidden (3.8.1)", 39));
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_D == NULL)))
{
((*(R22 *)rt_nil_check(l_T_826))).f_REPS = r_EXPAND_REP(((*(R21 *)rt_nil_check(p_TS))).f_D, l_T_826, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
r_CHECK_REP_CLASS(l_T_826, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
S_R10(&((*(R22 *)rt_nil_check(l_T_826))).f_CNAME, r_ARRAY_STRUCT(((*(R22 *)rt_nil_check(l_T_826))).f_ELEM, ((*(R22 *)rt_nil_check(l_T_826))).f_DIMS), 0);
{ R22 * rv834 = l_T_826;
return rv834; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER(R21 * p_TS) { RT_B_TICK(); 
R12 * l_Y_835; memset(&l_Y_835, 0, sizeof l_Y_835);
l_Y_835 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((((*(R21 *)rt_nil_check(p_TS))).f_A == NULL))
{
{
R20 * l_B_836; memset(&l_B_836, 0, sizeof l_B_836);
l_B_836 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_836 == NULL)) goto L_end837;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_836))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R20 *)rt_nil_check(l_B_836))).f_T == NULL))))
{
if ((!(r_CUR_GENERIC() == NULL)))
{
if ((r_FIND_BIND(((*(R12 *)rt_nil_check(r_CUR_GENERIC()))).f_BINDINGS, ((*(R21 *)rt_nil_check(p_TS))).f_NAME) == l_B_836))
{
{ R22 * rv838 = r_MARK_GENP(((*(R20 *)rt_nil_check(l_B_836))).f_T, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
return rv838; }
}
}
{ R22 * rv839 = ((*(R20 *)rt_nil_check(l_B_836))).f_T;
return rv839; }
}
l_B_836 = ((*(R20 *)rt_nil_check(l_B_836))).f_NEXT;
}
RT_B_TICK();
} L_end837: ;
}
}
if ((l_Y_835 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_835))).f_KIND == g_Y_GEN))
{
{ R22 * rv840 = r_GEN_TYPE(p_TS);
return rv840; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_835))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((!r_SEG_VISIBLE(l_Y_835, ((*(R21 *)rt_nil_check(p_TS))).f_LINE)))
{
}
if ((((*(R12 *)rt_nil_check(l_Y_835))).f_DECL == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{ R22 * rv841 = ((*(R12 *)rt_nil_check(l_Y_835))).f_T;
return rv841; }
}
{
R21 * l_D_842; memset(&l_D_842, 0, sizeof l_D_842);
l_D_842 = ((*(R12 *)rt_nil_check(l_Y_835))).f_DECL;
R22 * l_T_843; memset(&l_T_843, 0, sizeof l_T_843);
if ((((*(R21 *)rt_nil_check(l_D_842))).f_A == NULL))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_835))).f_T == NULL))
{
if (((*(R12 *)rt_nil_check(l_Y_835))).f_BUSY)
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R12 *)rt_nil_check(l_Y_835))).f_BUSY = 1;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_842))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R12 *)rt_nil_check(l_Y_835))).f_T = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_842))).f_B, r_RECORD_NAME(l_Y_835), l_Y_835, NULL);
}
else
{
((*(R12 *)rt_nil_check(l_Y_835))).f_T = r_RESOLVE_IN_DECL(l_Y_835, NULL);
if ((((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_835))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_835))).f_T))).f_KIND == g_T_ENUM))))
{
((*(R12 *)rt_nil_check(l_Y_835))).f_T = r_COPY_TYP(((*(R12 *)rt_nil_check(l_Y_835))).f_T);
}
}
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_835))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_835))).f_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_835))).f_NAME, 0);
}
((*(R12 *)rt_nil_check(l_Y_835))).f_BUSY = 0;
}
l_T_843 = ((*(R12 *)rt_nil_check(l_Y_835))).f_T;
}
else
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_842))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_843 = r_RECORD_INSTANCE(l_Y_835, p_TS);
}
else
{
l_T_843 = r_RESOLVE_IN_DECL(l_Y_835, p_TS);
}
}
{ R22 * rv844 = r_ABSTRACT_VIEW(l_Y_835, l_T_843);
return rv844; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ABSTRACT_VIEW(R12 * p_Y, R22 * p_T) { RT_B_TICK(); 
R22 * l_A_845; memset(&l_A_845, 0, sizeof l_A_845);
if (((((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL) || (!((*(R12 *)rt_nil_check(p_Y))).f_EXPORTED)))
{
{ R22 * rv846 = p_T;
return rv846; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ R22 * rv847 = p_T;
return rv847; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
if (r_EXPORTS_ORDER(p_Y))
{
{ R22 * rv848 = p_T;
return rv848; }
}
l_A_845 = r_COPY_TYP(p_T);
((*(R22 *)rt_nil_check(l_A_845))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_845))).f_DECL = p_Y;
{ R22 * rv849 = l_A_845;
return rv849; }
}
l_A_845 = r_NEW_TYP(g_T_ABS);
((*(R22 *)rt_nil_check(l_A_845))).f_BASE = p_T;
S_R10(&((*(R22 *)rt_nil_check(l_A_845))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R22 *)rt_nil_check(l_A_845))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_845))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_A_845))).f_ARGS = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
{ R22 * rv850 = l_A_845;
return rv850; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTS_ORDER(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv851 = (((((r_EXPORTS_OP(p_Y, rt_str("LESS_THAN_", 10)) && r_EXPORTS_OP(p_Y, rt_str("LESS_EQUAL_", 11))) && r_EXPORTS_OP(p_Y, rt_str("GREATER_THAN_", 13))) && r_EXPORTS_OP(p_Y, rt_str("GREATER_EQUAL_", 14))) && r_EXPORTS_OP(p_Y, rt_str("SUCC", 4))) && r_EXPORTS_OP(p_Y, rt_str("PRED", 4)));
return rv851; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTS_OP(R12 * p_Y, rstr p_OP) { RT_B_TICK(); 
R12 * l_R_852; memset(&l_R_852, 0, sizeof l_R_852);
l_R_852 = ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_MODL))).f_MEMBERS;
for (;;) {
if ((l_R_852 == NULL)) goto L_end853;
{
if ((((((*(R12 *)rt_nil_check(l_R_852))).f_KIND == g_Y_ROUTINE) && ((*(R12 *)rt_nil_check(l_R_852))).f_EXPORTED) && r_TEQ(((*(R12 *)rt_nil_check(l_R_852))).f_PREFIX, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)))
{
if (r_TEQS(r_BASE_NAME(r_ORIGINAL(l_R_852)), p_OP))
{
{ rt_int rv854 = 1;
return rv854; }
}
}
l_R_852 = ((*(R12 *)rt_nil_check(l_R_852))).f_SNEXT;
}
RT_B_TICK();
} L_end853: ;
{ rt_int rv855 = 0;
return rv855; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_UNORDERED(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))
{
{ rt_int rv856 = 0;
return rv856; }
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_UNORDERED)
{
{ rt_int rv857 = 1;
return rv857; }
}
if (((!(((*(R22 *)rt_nil_check(p_T))).f_DECL == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_MODL == NULL))))
{
{ rt_int rv858 = (!r_IN_MODULE(((*(R22 *)rt_nil_check(p_T))).f_MODL));
return rv858; }
}
{ rt_int rv859 = 0;
return rv859; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_P_860; memset(&l_P_860, 0, sizeof l_P_860);
l_P_860 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_860 == NULL)) goto L_end861;
{
if ((l_P_860 == p_M))
{
{ rt_int rv862 = 1;
return rv862; }
}
l_P_860 = ((*(R12 *)rt_nil_check(l_P_860))).f_MODL;
}
RT_B_TICK();
} L_end861: ;
{ rt_int rv863 = 0;
return rv863; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_864; memset(&l_D_864, 0, sizeof l_D_864);
l_D_864 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_865; memset(&l_T_865, 0, sizeof l_T_865);
if ((p_TS == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
l_T_865 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_864))).f_B);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
{ R22 * rv866 = l_T_865;
return rv866; }
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R21 *)rt_nil_check(l_D_864))).f_A, p_TS);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
l_T_865 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_864))).f_B);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
r_CLOSE_SCOPE();
{ R22 * rv867 = l_T_865;
return rv867; }
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R21 * p_FORMALS, R21 * p_TS) { RT_B_TICK(); 
R21 * l_F_868; memset(&l_F_868, 0, sizeof l_F_868);
l_F_868 = p_FORMALS;
R21 * l_A_869; memset(&l_A_869, 0, sizeof l_A_869);
l_A_869 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_868 == NULL)) goto L_end870;
{
{
R21 * l_N_871; memset(&l_N_871, 0, sizeof l_N_871);
l_N_871 = ((*(R21 *)rt_nil_check(l_F_868))).f_A;
for (;;) {
if ((l_N_871 == NULL)) goto L_end872;
{
if ((l_A_869 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_868))).f_B == NULL))
{
{
R12 * l_Y_873; memset(&l_Y_873, 0, sizeof l_Y_873);
l_Y_873 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_N_871))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_873))).f_T = r_ARG_TYPE(l_A_869);
r_DEFINE(l_Y_873, ((*(R21 *)rt_nil_check(l_A_869))).f_LINE);
}
}
else
{
{
R12 * l_Y_874; memset(&l_Y_874, 0, sizeof l_Y_874);
l_Y_874 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_871))).f_NAME);
R10 l_C_875; memset(&l_C_875, 0, sizeof l_C_875);
R23 l_M_876; memset(&l_M_876, 0, sizeof l_M_876);
((*(R12 *)rt_nil_check(l_Y_874))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_868))).f_B);
if (((((*(R21 *)rt_nil_check(l_A_869))).f_KIND == g_N_ANY) && (!(((*(R21 *)rt_nil_check(l_F_868))).f_IV == ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_869))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
if ((((*(R21 *)rt_nil_check(l_A_869))).f_KIND == g_N_ANY))
{
S_R10(&l_C_875, r_MK(rt_str("ANY", 3)), 0);
S_R23(&l_M_876, r_NO_MVAL(), 0);
}
else if (((((*(R21 *)rt_nil_check(l_A_869))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_869))).f_KIND == g_N_DONTCARE)))
{
S_R10(&l_C_875, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_869))).f_NAME, (((*(R21 *)rt_nil_check(l_A_869))).f_NAME).f_LEN))), 0);
S_R23(&l_M_876, r_NO_MVAL(), 0);
}
else
{
r_ATTR_VALUE(l_A_869, &l_C_875, &l_M_876);
}
if (((((l_M_876).f_OK && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_874))).f_T))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_874))).f_T))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_874))).f_T))).f_SCALE == ((rt_int)0LL))))
{
if ((((l_M_876).f_V < (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_874))).f_T))).f_MLO).f_V) || ((l_M_876).f_V > (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_874))).f_T))).f_MHI).f_V)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_869))).f_LINE, rt_str("the argument is outside the range of the type formal (3.12.2)", 61));
}
}
if ((((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_874))).f_T))).f_KIND == g_T_INT)) && (!r_IS_GEN_TEXT(l_C_875))) && (!(((*(R21 *)rt_nil_check(l_A_869))).f_KIND == g_N_ANY))))
{
S_R10(&l_C_875, (r_EXPR(l_A_869, ((*(R12 *)rt_nil_check(l_Y_874))).f_T)).f_C, 0);
S_R23(&l_M_876, r_ENUM_MANIFEST(l_A_869, ((*(R12 *)rt_nil_check(l_Y_874))).f_T), 0);
}
S_R10(&((*(R12 *)rt_nil_check(l_Y_874))).f_ACCESS, l_C_875, 0);
((*(R12 *)rt_nil_check(l_Y_874))).f_HASMV = (l_M_876).f_OK;
((*(R12 *)rt_nil_check(l_Y_874))).f_MV = (l_M_876).f_V;
((*(R12 *)rt_nil_check(l_Y_874))).f_INPUT = 1;
r_DEFINE(l_Y_874, ((*(R21 *)rt_nil_check(l_A_869))).f_LINE);
}
}
l_A_869 = ((*(R21 *)rt_nil_check(l_A_869))).f_NEXT;
l_N_871 = ((*(R21 *)rt_nil_check(l_N_871))).f_NEXT;
}
RT_B_TICK();
} L_end872: ;
}
l_F_868 = ((*(R21 *)rt_nil_check(l_F_868))).f_NEXT;
}
RT_B_TICK();
} L_end870: ;
if ((!(l_A_869 == NULL)))
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
{ R10 rv877 = ((*(R12 *)rt_nil_check(p_Y))).f_FWD;
return rv877; }
rt_raise(RT_X_INIT);
}
static R22 * r_TARGET(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS);
}
{ R22 * rv878 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET;
return rv878; }
rt_raise(RT_X_INIT);
}
static R10 r_CTYPE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_879; memset(&l_K_879, 0, sizeof l_K_879);
l_K_879 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
{ R10 rv880 = r_MK(rt_str("rt_int", 6));
return rv880; }
}
else if ((l_K_879 == g_T_FLOAT))
{
{ R10 rv881 = r_MK(rt_str("double", 6));
return rv881; }
}
else if (((l_K_879 == g_T_STR) || (l_K_879 == g_T_BITS)))
{
{ R10 rv882 = r_MK(rt_str("rstr", 4));
return rv882; }
}
else if (((l_K_879 == g_T_REC) || (l_K_879 == g_T_ARR)))
{
{ R10 rv883 = ((*(R22 *)rt_nil_check(p_T))).f_CNAME;
return rv883; }
}
else if ((l_K_879 == g_T_ABS))
{
{ R10 rv884 = r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv884; }
}
else if ((l_K_879 == g_T_SEM))
{
{ R10 rv885 = r_MK(rt_str("rt_b_sem *", 10));
return rv885; }
}
else if ((l_K_879 == g_T_PATHS))
{
{ R10 rv886 = r_MK(rt_str("rt_b_paths", 10));
return rv886; }
}
else if ((l_K_879 == g_T_VOID))
{
{ R10 rv887 = r_MK(rt_str("void", 4));
return rv887; }
}
else if ((l_K_879 == g_T_PTR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R21 * l_TT_888; memset(&l_TT_888, 0, sizeof l_TT_888);
l_TT_888 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R21 *)rt_nil_check(l_TT_888))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(l_TT_888))).f_A == NULL)))
{
{
R12 * l_Y_889; memset(&l_Y_889, 0, sizeof l_Y_889);
l_Y_889 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(l_TT_888))).f_NAME);
if ((!(l_Y_889 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_889))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_889))).f_DECL == NULL))))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_889))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_889))).f_DECL))).f_A == NULL)))
{
{ R10 rv890 = r_CATS(r_RECORD_NAME(l_Y_889), rt_str(" *", 2));
return rv890; }
}
}
}
}
}
}
}
{ R10 rv891 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv891; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv892 = ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv892; }
rt_raise(RT_X_INIT);
}
static R24 * r_NEW_FIELD(R10 p_NAME, R22 * p_T, rt_int p_KIND) { RT_B_TICK(); 
R24 * l_F_893; memset(&l_F_893, 0, sizeof l_F_893);
l_F_893 = ((R24 *)rt_b_new(sizeof (R24)));
S_R24(&(*(R24 *)rt_nil_check(l_F_893)), ({ R24 rc894; memset(&rc894, 0, sizeof rc894);  S_R10(&rc894.f_NAME, p_NAME, 0); S_R10(&rc894.f_CNAME, r_FMT1(rt_str("f_@", 3), r_CID(p_NAME)), 0); rc894.f_T = p_T; rc894.f_KIND = p_KIND; S_R10(&rc894.f_TAGF, r_NO_TEXT(), 0); rc894.f_LABELS = NULL; rc894.f_NEXT = NULL; rc894; }), 0);
{ R24 * rv895 = l_F_893;
return rv895; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_FIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_896; memset(&l_F_896, 0, sizeof l_F_896);
l_F_896 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_896 == NULL)) goto L_end897;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_896))).f_NAME, p_NAME))
{
{ R24 * rv898 = l_F_896;
return rv898; }
}
l_F_896 = ((*(R24 *)rt_nil_check(l_F_896))).f_NEXT;
}
RT_B_TICK();
} L_end897: ;
{ R24 * rv899 = NULL;
return rv899; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_VFIELD(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R24 * l_F_900; memset(&l_F_900, 0, sizeof l_F_900);
l_F_900 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FIRST_901; memset(&l_FIRST_901, 0, sizeof l_FIRST_901);
l_FIRST_901 = NULL;
for (;;) {
if ((l_F_900 == NULL)) goto L_end902;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_900))).f_NAME, p_NAME))
{
if ((l_FIRST_901 == NULL))
{
l_FIRST_901 = l_F_900;
}
if (((((*(R24 *)rt_nil_check(l_F_900))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
{ R24 * rv903 = l_F_900;
return rv903; }
}
{
R23 l_TAGV_904; memset(&l_TAGV_904, 0, sizeof l_TAGV_904);
S_R23(&l_TAGV_904, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(l_F_900))).f_TAGF), 0);
if ((l_TAGV_904).f_OK)
{
if (r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_900))).f_LABELS, (l_TAGV_904).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(l_F_900))).f_TAGF)))).f_T))
{
{ R24 * rv905 = l_F_900;
return rv905; }
}
}
}
}
l_F_900 = ((*(R24 *)rt_nil_check(l_F_900))).f_NEXT;
}
RT_B_TICK();
} L_end902: ;
{ R24 * rv906 = l_FIRST_901;
return rv906; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL) { RT_B_TICK(); 
R24 * l_P_907; memset(&l_P_907, 0, sizeof l_P_907);
l_P_907 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_908; memset(&l_N_908, 0, sizeof l_N_908);
l_N_908 = ((rt_int)0LL);
for (;;) {
if ((l_P_907 == NULL)) goto L_end909;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_P_907))).f_NAME, ((*(R24 *)rt_nil_check(p_F))).f_NAME))
{
if ((((((((*(R24 *)rt_nil_check(l_P_907))).f_TAGF).f_LEN == ((rt_int)0LL)) || ((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL))) || (!r_TEQ(((*(R24 *)rt_nil_check(l_P_907))).f_TAGF, ((*(R24 *)rt_nil_check(p_F))).f_TAGF))) || (((*(R24 *)rt_nil_check(l_P_907))).f_LABELS == ((*(R24 *)rt_nil_check(p_F))).f_LABELS)))
{
r_FAILT(((rt_int)0LL), rt_str("the field names of a record must be distinct (3.9.1): ", 54), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
l_N_908 = rt_add(l_N_908, ((rt_int)1LL));
}
l_P_907 = ((*(R24 *)rt_nil_check(l_P_907))).f_NEXT;
}
RT_B_TICK();
} L_end909: ;
if ((l_N_908 > ((rt_int)0LL)))
{
S_R10(&((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_908)), 0);
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
R21 * l_D_910; memset(&l_D_910, 0, sizeof l_D_910);
l_D_910 = p_DECLS;
for (;;) {
if ((l_D_910 == NULL)) goto L_end911;
{
if ((((*(R21 *)rt_nil_check(l_D_910))).f_KIND == g_N_VAR))
{
{
R22 * l_FT_912; memset(&l_FT_912, 0, sizeof l_FT_912);
l_FT_912 = r_RESOLVE(((*(R21 *)rt_nil_check(l_D_910))).f_B);
R21 * l_N_913; memset(&l_N_913, 0, sizeof l_N_913);
l_N_913 = ((*(R21 *)rt_nil_check(l_D_910))).f_A;
for (;;) {
if ((l_N_913 == NULL)) goto L_end914;
{
{
R24 * l_F_915; memset(&l_F_915, 0, sizeof l_F_915);
l_F_915 = r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_913))).f_NAME, l_FT_912, ((rt_int)0LL));
S_R10(&((*(R24 *)rt_nil_check(l_F_915))).f_TAGF, p_TAGN, 0);
((*(R24 *)rt_nil_check(l_F_915))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_915, &(*p_TAIL));
if (((r_LOOKUP(((*(R21 *)rt_nil_check(l_N_913))).f_NAME) == NULL) || (!(((*(R12 *)rt_nil_check(r_LOOKUP(((*(R21 *)rt_nil_check(l_N_913))).f_NAME)))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))))
{
{
R12 * l_Y_916; memset(&l_Y_916, 0, sizeof l_Y_916);
l_Y_916 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_913))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_916))).f_T = l_FT_912;
S_R10(&((*(R12 *)rt_nil_check(l_Y_916))).f_ACCESS, r_FMT1(rt_str("$S.@", 4), ((*(R24 *)rt_nil_check(l_F_915))).f_CNAME), 0);
((*(R12 *)rt_nil_check(l_Y_916))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_Y_916))).f_LEVEL = rt_neg(((rt_int)1LL));
((*(R12 *)rt_nil_check(l_Y_916))).f_OWNER = rt_neg(((rt_int)1LL));
r_DEFINE(l_Y_916, ((*(R21 *)rt_nil_check(l_D_910))).f_LINE);
}
}
}
l_N_913 = ((*(R21 *)rt_nil_check(l_N_913))).f_NEXT;
}
RT_B_TICK();
} L_end914: ;
}
}
else
{
{
R24 * l_TF_917; memset(&l_TF_917, 0, sizeof l_TF_917);
l_TF_917 = r_FIND_FIELD(p_T, ((*(R21 *)rt_nil_check(l_D_910))).f_NAME);
R21 * l_S_918; memset(&l_S_918, 0, sizeof l_S_918);
l_S_918 = ((*(R21 *)rt_nil_check(l_D_910))).f_A;
if ((l_TF_917 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_910))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R21 *)rt_nil_check(l_D_910))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_917))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_910))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R21 *)rt_nil_check(l_D_910))).f_NAME);
}
{
R21 * l_O_919; memset(&l_O_919, 0, sizeof l_O_919);
l_O_919 = p_DECLS;
for (;;) {
if ((l_O_919 == l_D_910)) goto L_end920;
{
if ((((*(R21 *)rt_nil_check(l_O_919))).f_KIND == g_N_VARIANT))
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_O_919))).f_NAME, ((*(R21 *)rt_nil_check(l_D_910))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_910))).f_LINE, rt_str("two variant parts discriminate on the tag ", 42), ((*(R21 *)rt_nil_check(l_D_910))).f_NAME);
}
}
l_O_919 = ((*(R21 *)rt_nil_check(l_O_919))).f_NEXT;
}
RT_B_TICK();
} L_end920: ;
}
r_CHECK_VARIANT_NAMES(l_D_910, ((*(R24 *)rt_nil_check(l_TF_917))).f_T);
for (;;) {
if ((l_S_918 == NULL)) goto L_end921;
{
r_OPEN_SCOPE();
r_RECORD_FIELDS(p_T, ((*(R21 *)rt_nil_check(l_S_918))).f_B, C_R10(((*(R21 *)rt_nil_check(l_D_910))).f_NAME), ((*(R21 *)rt_nil_check(l_S_918))).f_A, &(*p_TAIL));
r_CLOSE_SCOPE();
l_S_918 = ((*(R21 *)rt_nil_check(l_S_918))).f_NEXT;
}
RT_B_TICK();
} L_end921: ;
}
}
l_D_910 = ((*(R21 *)rt_nil_check(l_D_910))).f_NEXT;
}
RT_B_TICK();
} L_end911: ;
}
static void r_CHECK_VARIANT_NAMES(R21 * p_D, R22 * p_TT) { RT_B_TICK(); 
R21 * l_S_922; memset(&l_S_922, 0, sizeof l_S_922);
l_S_922 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R21 * l_LOS_923; memset(&l_LOS_923, 0, sizeof l_LOS_923);
l_LOS_923 = NULL;
R21 * l_HIS_924; memset(&l_HIS_924, 0, sizeof l_HIS_924);
l_HIS_924 = NULL;
rt_int l_LO_LIM_925; memset(&l_LO_LIM_925, 0, sizeof l_LO_LIM_925);
rt_int l_HI_LIM_926; memset(&l_HI_LIM_926, 0, sizeof l_HI_LIM_926);
R22 * l_R_927; memset(&l_R_927, 0, sizeof l_R_927);
l_R_927 = r_REAL_TYPE(p_TT);
l_LO_LIM_925 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
l_HI_LIM_926 = INT64_MAX;
if ((((*(R22 *)rt_nil_check(l_R_927))).f_KIND == g_T_ENUM))
{
l_LO_LIM_925 = ((rt_int)0LL);
l_HI_LIM_926 = rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_R_927))).f_BASE))).f_NLITS, ((rt_int)1LL));
}
else if ((((*(R22 *)rt_nil_check(l_R_927))).f_KIND == g_T_BOOL))
{
l_LO_LIM_925 = ((rt_int)0LL);
l_HI_LIM_926 = ((rt_int)1LL);
}
if ((((*(R22 *)rt_nil_check(l_R_927))).f_MLO).f_OK)
{
l_LO_LIM_925 = (((*(R22 *)rt_nil_check(l_R_927))).f_MLO).f_V;
}
if ((((*(R22 *)rt_nil_check(l_R_927))).f_MHI).f_OK)
{
l_HI_LIM_926 = (((*(R22 *)rt_nil_check(l_R_927))).f_MHI).f_V;
}
for (;;) {
if ((l_S_922 == NULL)) goto L_end928;
{
{
R21 * l_L_929; memset(&l_L_929, 0, sizeof l_L_929);
l_L_929 = ((*(R21 *)rt_nil_check(l_S_922))).f_A;
for (;;) {
if ((l_L_929 == NULL)) goto L_end930;
{
{
R23 l_A_931; memset(&l_A_931, 0, sizeof l_A_931);
R23 l_B_932; memset(&l_B_932, 0, sizeof l_B_932);
if ((((*(R21 *)rt_nil_check(l_L_929))).f_KIND == g_N_RANGE))
{
S_R23(&l_A_931, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_929))).f_A, p_TT), 0);
S_R23(&l_B_932, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_929))).f_B, p_TT), 0);
if (((l_A_931).f_OK && (((((*(R21 *)rt_nil_check(l_L_929))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_929))).f_IV == ((rt_int)3LL))))))
{
(l_A_931).f_V = rt_add((l_A_931).f_V, ((rt_int)1LL));
}
if (((l_B_932).f_OK && (((*(R21 *)rt_nil_check(l_L_929))).f_IV >= ((rt_int)2LL))))
{
(l_B_932).f_V = rt_sub((l_B_932).f_V, ((rt_int)1LL));
}
}
else
{
S_R23(&l_A_931, r_ENUM_MANIFEST(l_L_929, p_TT), 0);
S_R23(&l_B_932, l_A_931, 0);
}
if ((!(((l_A_931).f_OK && (l_B_932).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_929))).f_LINE, rt_str("a variant-name is manifest (3.9.1)", 34));
}
if (((((l_A_931).f_V < l_LO_LIM_925) || ((l_B_932).f_V > l_HI_LIM_926)) || ((l_A_931).f_V > (l_B_932).f_V)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_929))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.1)", 49));
}
{
R21 * l_P_933; memset(&l_P_933, 0, sizeof l_P_933);
l_P_933 = l_LOS_923;
R21 * l_Q_934; memset(&l_Q_934, 0, sizeof l_Q_934);
l_Q_934 = l_HIS_924;
for (;;) {
if ((l_P_933 == NULL)) goto L_end935;
{
if ((((l_A_931).f_V <= ((*(R21 *)rt_nil_check(l_Q_934))).f_IV) && ((l_B_932).f_V >= ((*(R21 *)rt_nil_check(l_P_933))).f_IV)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_929))).f_LINE, rt_str("a value of the tag names two variants (3.9.1)", 45));
}
l_P_933 = ((*(R21 *)rt_nil_check(l_P_933))).f_NEXT;
l_Q_934 = ((*(R21 *)rt_nil_check(l_Q_934))).f_NEXT;
}
RT_B_TICK();
} L_end935: ;
}
{
R21 * l_P_936; memset(&l_P_936, 0, sizeof l_P_936);
l_P_936 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
R21 * l_Q_937; memset(&l_Q_937, 0, sizeof l_Q_937);
l_Q_937 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R21 *)rt_nil_check(l_P_936))).f_IV = (l_A_931).f_V;
((*(R21 *)rt_nil_check(l_Q_937))).f_IV = (l_B_932).f_V;
((*(R21 *)rt_nil_check(l_P_936))).f_NEXT = l_LOS_923;
((*(R21 *)rt_nil_check(l_Q_937))).f_NEXT = l_HIS_924;
l_LOS_923 = l_P_936;
l_HIS_924 = l_Q_937;
}
}
l_L_929 = ((*(R21 *)rt_nil_check(l_L_929))).f_NEXT;
}
RT_B_TICK();
} L_end930: ;
}
l_S_922 = ((*(R21 *)rt_nil_check(l_S_922))).f_NEXT;
}
RT_B_TICK();
} L_end928: ;
}
static R22 * r_RESOLVE_RECORD(R21 * p_TS, R10 p_CNAME, R12 * p_Y, R21 * p_FORMALS) { RT_B_TICK(); 
R22 * l_T_938; memset(&l_T_938, 0, sizeof l_T_938);
l_T_938 = r_NEW_TYP(g_T_REC);
R24 * l_TAIL_939; memset(&l_TAIL_939, 0, sizeof l_TAIL_939);
l_TAIL_939 = NULL;
((*(R22 *)rt_nil_check(l_T_938))).f_BASE = l_T_938;
((*(R22 *)rt_nil_check(l_T_938))).f_DECL = p_Y;
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_D == NULL)))
{
((*(R22 *)rt_nil_check(l_T_938))).f_REPS = r_EXPAND_REP(((*(R21 *)rt_nil_check(p_TS))).f_D, l_T_938, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
r_CHECK_REP_CLASS(l_T_938, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_938))).f_CNAME, p_CNAME, 0);
}
else
{
S_R10(&((*(R22 *)rt_nil_check(l_T_938))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R22 *)rt_nil_check(l_T_938))).f_CNAME, ((*(R22 *)rt_nil_check(l_T_938))).f_CNAME));
}
{
R21 * l_F_940; memset(&l_F_940, 0, sizeof l_F_940);
l_F_940 = p_FORMALS;
for (;;) {
if ((l_F_940 == NULL)) goto L_end941;
{
if ((!(((*(R21 *)rt_nil_check(l_F_940))).f_B == NULL)))
{
{
R22 * l_FT_942; memset(&l_FT_942, 0, sizeof l_FT_942);
l_FT_942 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_940))).f_B);
R21 * l_N_943; memset(&l_N_943, 0, sizeof l_N_943);
l_N_943 = ((*(R21 *)rt_nil_check(l_F_940))).f_A;
rt_int l_KIND_944; memset(&l_KIND_944, 0, sizeof l_KIND_944);
l_KIND_944 = ((rt_int)1LL);
if ((((*(R21 *)rt_nil_check(l_F_940))).f_IV == ((rt_int)1LL)))
{
l_KIND_944 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_942))) || (!(((*(R22 *)rt_nil_check(l_FT_942))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_940))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_943 == NULL)) goto L_end945;
{
r_ADD_FIELD(l_T_938, r_NEW_FIELD(((*(R21 *)rt_nil_check(l_N_943))).f_NAME, l_FT_942, l_KIND_944), &l_TAIL_939);
l_N_943 = ((*(R21 *)rt_nil_check(l_N_943))).f_NEXT;
}
RT_B_TICK();
} L_end945: ;
}
}
l_F_940 = ((*(R21 *)rt_nil_check(l_F_940))).f_NEXT;
}
RT_B_TICK();
} L_end941: ;
}
r_OPEN_SCOPE();
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_RECORD_FIELDS(l_T_938, ((*(R21 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_939);
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_CLOSE_SCOPE();
r_CHECK_RECORD_REP(l_T_938, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
r_COMPLETE_RECORD(l_T_938);
{ R22 * rv946 = l_T_938;
return rv946; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_RECORD_REP(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv947 = 0;
return rv947; }
}
{ rt_int rv948 = ((((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_KIND == g_N_REP) && r_TEQS(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_NAME, rt_str("RECORD_REP", 10)));
return rv948; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_RECORD_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_SEEN_949; memset(&l_SEEN_949, 0, sizeof l_SEEN_949);
l_SEEN_949 = NULL;
rt_int l_LISTED_950; memset(&l_LISTED_950, 0, sizeof l_LISTED_950);
l_LISTED_950 = 0;
if ((!r_IS_RECORD_REP(p_T)))
{
return;
}
{
R21 * l_P_951; memset(&l_P_951, 0, sizeof l_P_951);
l_P_951 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A;
for (;;) {
if ((l_P_951 == NULL)) goto L_end952;
{
if ((((*(R21 *)rt_nil_check(l_P_951))).f_IV == ((rt_int)1LL)))
{
l_LISTED_950 = 1;
}
r_CHECK_ELEMENTS(p_T, ((*(R21 *)rt_nil_check(l_P_951))).f_A, r_NO_TEXT(), NULL, &l_SEEN_949);
l_P_951 = ((*(R21 *)rt_nil_check(l_P_951))).f_NEXT;
}
RT_B_TICK();
} L_end952: ;
}
if (l_LISTED_950)
{
{
R24 * l_F_953; memset(&l_F_953, 0, sizeof l_F_953);
l_F_953 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_953 == NULL)) goto L_end954;
{
if ((((((*(R24 *)rt_nil_check(l_F_953))).f_TAGF).f_LEN == ((rt_int)0LL)) && (!r_IN_IDENTS(l_SEEN_949, ((*(R24 *)rt_nil_check(l_F_953))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("a record-reptype with element-specs positions every field (3.9.3): ", 67), ((*(R24 *)rt_nil_check(l_F_953))).f_NAME);
}
if ((((((*(R24 *)rt_nil_check(l_F_953))).f_TAGF).f_LEN > ((rt_int)0LL)) && (!r_IN_IDENTS(l_SEEN_949, r_CAT(r_MK(rt_str("|", 1)), ((*(R24 *)rt_nil_check(l_F_953))).f_TAGF)))))
{
r_FAILT(p_LINE, rt_str("a record-reptype with element-specs positions every variant part (3.9.3): ", 74), ((*(R24 *)rt_nil_check(l_F_953))).f_TAGF);
}
l_F_953 = ((*(R24 *)rt_nil_check(l_F_953))).f_NEXT;
}
RT_B_TICK();
} L_end954: ;
}
}
{
R21 * l_V_955; memset(&l_V_955, 0, sizeof l_V_955);
l_V_955 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_C;
for (;;) {
if ((l_V_955 == NULL)) goto L_end956;
{
{
R24 * l_TF_957; memset(&l_TF_957, 0, sizeof l_TF_957);
l_TF_957 = r_FIND_FIELD(p_T, ((*(R21 *)rt_nil_check(l_V_955))).f_NAME);
R21 * l_S_958; memset(&l_S_958, 0, sizeof l_S_958);
l_S_958 = ((*(R21 *)rt_nil_check(l_V_955))).f_A;
if ((l_TF_957 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_V_955))).f_LINE, rt_str("not a tag of the record (3.9.3): ", 33), ((*(R21 *)rt_nil_check(l_V_955))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_957))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_V_955))).f_LINE, rt_str("not a tag of the record (3.9.3): ", 33), ((*(R21 *)rt_nil_check(l_V_955))).f_NAME);
}
if ((!(((*(R21 *)rt_nil_check(l_V_955))).f_B == NULL)))
{
if ((r_PACKING_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_955))).f_B))).f_NAME) < ((rt_int)0LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_V_955))).f_LINE, rt_str("a packing-mode is DENSE, PACKED or UNPACKED (3.9.3): ", 53), ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_955))).f_B))).f_NAME);
}
}
for (;;) {
if ((l_S_958 == NULL)) goto L_end959;
{
{
R21 * l_L_960; memset(&l_L_960, 0, sizeof l_L_960);
l_L_960 = ((*(R21 *)rt_nil_check(l_S_958))).f_A;
R21 * l_P_961; memset(&l_P_961, 0, sizeof l_P_961);
l_P_961 = ((*(R21 *)rt_nil_check(l_S_958))).f_B;
R21 * l_VSEEN_962; memset(&l_VSEEN_962, 0, sizeof l_VSEEN_962);
l_VSEEN_962 = NULL;
for (;;) {
if ((l_L_960 == NULL)) goto L_end963;
{
{
R14 l_SAVED_CODE_964; memset(&l_SAVED_CODE_964, 0, sizeof l_SAVED_CODE_964);
S_R14(&l_SAVED_CODE_964, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_LV_965; memset(&l_LV_965, 0, sizeof l_LV_965);
S_R26(&l_LV_965, r_EXPR(l_L_960, ((*(R24 *)rt_nil_check(l_TF_957))).f_T), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_964, 0);
if ((!r_SAME_CLASS(r_REAL_TYPE((l_LV_965).f_T), r_REAL_TYPE(((*(R24 *)rt_nil_check(l_TF_957))).f_T))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_960))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.3)", 49));
}
}
l_L_960 = ((*(R21 *)rt_nil_check(l_L_960))).f_NEXT;
}
RT_B_TICK();
} L_end963: ;
for (;;) {
if ((l_P_961 == NULL)) goto L_end966;
{
r_CHECK_ELEMENTS(p_T, ((*(R21 *)rt_nil_check(l_P_961))).f_A, C_R10(((*(R21 *)rt_nil_check(l_V_955))).f_NAME), ((*(R21 *)rt_nil_check(l_S_958))).f_A, &l_VSEEN_962);
l_P_961 = ((*(R21 *)rt_nil_check(l_P_961))).f_NEXT;
}
RT_B_TICK();
} L_end966: ;
}
l_S_958 = ((*(R21 *)rt_nil_check(l_S_958))).f_NEXT;
}
RT_B_TICK();
} L_end959: ;
}
l_V_955 = ((*(R21 *)rt_nil_check(l_V_955))).f_NEXT;
}
RT_B_TICK();
} L_end956: ;
}
}
static void r_CHECK_ELEMENTS(R22 * p_T, R21 * p_L, R10 p_TAGN, R21 * p_LABELS, R21 * *p_SEEN) { RT_B_TICK(); 
R21 * l_E_967; memset(&l_E_967, 0, sizeof l_E_967);
l_E_967 = p_L;
for (;;) {
if ((l_E_967 == NULL)) goto L_end968;
{
if (((((*(R21 *)rt_nil_check(l_E_967))).f_FL == ((rt_int)0LL)) || (((*(R21 *)rt_nil_check(l_E_967))).f_FL == ((rt_int)2LL))))
{
{
R24 * l_F_969; memset(&l_F_969, 0, sizeof l_F_969);
l_F_969 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FOUND_970; memset(&l_FOUND_970, 0, sizeof l_FOUND_970);
l_FOUND_970 = NULL;
for (;;) {
if ((l_F_969 == NULL)) goto L_end971;
{
if ((r_TEQ(((*(R24 *)rt_nil_check(l_F_969))).f_NAME, ((*(R21 *)rt_nil_check(l_E_967))).f_NAME) && r_TEQ(((*(R24 *)rt_nil_check(l_F_969))).f_TAGF, p_TAGN)))
{
l_FOUND_970 = l_F_969;
}
l_F_969 = ((*(R24 *)rt_nil_check(l_F_969))).f_NEXT;
}
RT_B_TICK();
} L_end971: ;
if ((l_FOUND_970 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_E_967))).f_LINE, rt_str("not a field of the record accessible here (3.9.3): ", 51), ((*(R21 *)rt_nil_check(l_E_967))).f_NAME);
}
if (((((*(R21 *)rt_nil_check(l_E_967))).f_FL == ((rt_int)2LL)) && (((*(R24 *)rt_nil_check(l_FOUND_970))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_E_967))).f_LINE, rt_str("OMIT names a constant or tag field (3.9.3): ", 44), ((*(R21 *)rt_nil_check(l_E_967))).f_NAME);
}
if (r_IN_IDENTS((*p_SEEN), ((*(R21 *)rt_nil_check(l_E_967))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_E_967))).f_LINE, rt_str("a field is positioned once in a record-reptype (3.9.3): ", 56), ((*(R21 *)rt_nil_check(l_E_967))).f_NAME);
}
(*p_SEEN) = r_NAME_REF(((*(R21 *)rt_nil_check(l_E_967))).f_NAME, ((rt_int)0LL), NULL, (*p_SEEN));
}
}
else if ((((*(R21 *)rt_nil_check(l_E_967))).f_FL == ((rt_int)1LL)))
{
{
R24 * l_TF_972; memset(&l_TF_972, 0, sizeof l_TF_972);
l_TF_972 = r_FIND_FIELD(p_T, ((*(R21 *)rt_nil_check(l_E_967))).f_NAME);
R10 l_KEY_973; memset(&l_KEY_973, 0, sizeof l_KEY_973);
S_R10(&l_KEY_973, r_CAT(r_MK(rt_str("|", 1)), ((*(R21 *)rt_nil_check(l_E_967))).f_NAME), 0);
if ((l_TF_972 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_E_967))).f_LINE, rt_str("VARIANTS names a tag of the record (3.9.3): ", 44), ((*(R21 *)rt_nil_check(l_E_967))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_972))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_E_967))).f_LINE, rt_str("VARIANTS names a tag of the record (3.9.3): ", 44), ((*(R21 *)rt_nil_check(l_E_967))).f_NAME);
}
if (r_IN_IDENTS((*p_SEEN), l_KEY_973))
{
r_FAILT(((*(R21 *)rt_nil_check(l_E_967))).f_LINE, rt_str("a variant part is positioned once in a record-reptype (3.9.3): ", 63), ((*(R21 *)rt_nil_check(l_E_967))).f_NAME);
}
(*p_SEEN) = r_NAME_REF(l_KEY_973, ((rt_int)0LL), NULL, (*p_SEEN));
}
}
else
{
{
R23 l_M_974; memset(&l_M_974, 0, sizeof l_M_974);
S_R23(&l_M_974, r_MANIFEST(((*(R21 *)rt_nil_check(l_E_967))).f_B), 0);
if (((!(l_M_974).f_OK) || ((l_M_974).f_V < ((rt_int)0LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_E_967))).f_LINE, rt_str("the length of a filler-spec is a manifest integer, not negative (3.9.3)", 71));
}
}
}
l_E_967 = ((*(R21 *)rt_nil_check(l_E_967))).f_NEXT;
}
RT_B_TICK();
} L_end968: ;
}
static R10 r_RECORD_SIZE(R22 * p_T, R10 p_C) { RT_B_TICK(); 
R10 l_R_975; memset(&l_R_975, 0, sizeof l_R_975);
S_R10(&l_R_975, r_MK(rt_str("({ rt_int sz = 0;", 17)), 0);
R21 * l_SAVED_976; memset(&l_SAVED_976, 0, sizeof l_SAVED_976);
l_SAVED_976 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
((*(R7 *)rt_nil_check(g_W))).f_LDONE = NULL;
if ((!r_IS_RECORD_REP(p_T)))
{
S_R10(&l_R_975, r_CAT(l_R_975, r_LAYOUT_ALL(p_T, p_C, r_NO_TEXT(), ((rt_int)2LL))), 0);
S_R10(&l_R_975, r_CAT(l_R_975, r_LAYOUT_PARTS(p_T, p_C)), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_SAVED_976;
{ R10 rv977 = r_CATS(l_R_975, rt_str(" sz; })", 7));
return rv977; }
}
{
R21 * l_P_978; memset(&l_P_978, 0, sizeof l_P_978);
l_P_978 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A;
for (;;) {
if ((l_P_978 == NULL)) goto L_end979;
{
S_R10(&l_R_975, r_CAT(l_R_975, r_LAYOUT_SPEC(p_T, p_C, l_P_978, r_NO_TEXT())), 0);
l_P_978 = ((*(R21 *)rt_nil_check(l_P_978))).f_NEXT;
}
RT_B_TICK();
} L_end979: ;
}
S_R10(&l_R_975, r_CAT(l_R_975, r_LAYOUT_ALL(p_T, p_C, r_NO_TEXT(), ((rt_int)2LL))), 0);
S_R10(&l_R_975, r_CAT(l_R_975, r_LAYOUT_PARTS(p_T, p_C)), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_SAVED_976;
{ R10 rv980 = r_CATS(l_R_975, rt_str(" sz; })", 7));
return rv980; }
rt_raise(RT_X_INIT);
}
static R10 r_FIELD_SIZE_C(R24 * p_F, R10 p_C) { RT_B_TICK(); 
{ R10 rv981 = (r_SIZE_OF(((*(R24 *)rt_nil_check(p_F))).f_T, r_FMT2(rt_str("(@).@", 5), p_C, ((*(R24 *)rt_nil_check(p_F))).f_CNAME))).f_C;
return rv981; }
rt_raise(RT_X_INIT);
}
static R10 r_LAYOUT_ALL(R22 * p_T, R10 p_C, R10 p_TAGN, rt_int p_MODE) { RT_B_TICK(); 
R10 l_R_982; memset(&l_R_982, 0, sizeof l_R_982);
S_R10(&l_R_982, r_MK(rt_str("", 0)), 0);
R24 * l_F_983; memset(&l_F_983, 0, sizeof l_F_983);
l_F_983 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_983 == NULL)) goto L_end984;
{
if ((r_TEQ(((*(R24 *)rt_nil_check(l_F_983))).f_TAGF, p_TAGN) && (!r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LDONE, ((*(R24 *)rt_nil_check(l_F_983))).f_NAME))))
{
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(((*(R24 *)rt_nil_check(l_F_983))).f_NAME, ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R10(&l_R_982, r_FMT4(rt_str("@ sz = rt_b_layout(sz, @, @);", 29), l_R_982, r_FIELD_SIZE_C(l_F_983, p_C), r_NUM(p_MODE), r_MK(rt_str("", 0))), 0);
}
else
{
S_R10(&l_R_982, r_CAT(l_R_982, r_FMT4(rt_str(" if (@) sz = rt_b_layout(sz, @, @);@", 36), r_VARIANT_COND(l_F_983, p_T, p_C), r_FIELD_SIZE_C(l_F_983, p_C), r_NUM(p_MODE), r_MK(rt_str("", 0)))), 0);
}
}
l_F_983 = ((*(R24 *)rt_nil_check(l_F_983))).f_NEXT;
}
RT_B_TICK();
} L_end984: ;
{ R10 rv985 = l_R_982;
return rv985; }
rt_raise(RT_X_INIT);
}
static R10 r_LAYOUT_PARTS(R22 * p_T, R10 p_C) { RT_B_TICK(); 
R10 l_R_986; memset(&l_R_986, 0, sizeof l_R_986);
S_R10(&l_R_986, r_MK(rt_str("", 0)), 0);
R24 * l_F_987; memset(&l_F_987, 0, sizeof l_F_987);
l_F_987 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_987 == NULL)) goto L_end988;
{
if ((((((*(R24 *)rt_nil_check(l_F_987))).f_TAGF).f_LEN > ((rt_int)0LL)) && (!r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LDONE, r_CAT(r_MK(rt_str("|", 1)), ((*(R24 *)rt_nil_check(l_F_987))).f_TAGF)))))
{
S_R10(&l_R_986, r_CAT(l_R_986, r_LAYOUT_VARIANTS(p_T, p_C, ((*(R24 *)rt_nil_check(l_F_987))).f_TAGF)), 0);
}
l_F_987 = ((*(R24 *)rt_nil_check(l_F_987))).f_NEXT;
}
RT_B_TICK();
} L_end988: ;
{ R10 rv989 = l_R_986;
return rv989; }
rt_raise(RT_X_INIT);
}
static R10 r_LAYOUT_SPEC(R22 * p_T, R10 p_C, R21 * p_P, R10 p_TAGN) { RT_B_TICK(); 
rt_int l_MODE_990; memset(&l_MODE_990, 0, sizeof l_MODE_990);
l_MODE_990 = ((rt_int)2LL);
R10 l_R_991; memset(&l_R_991, 0, sizeof l_R_991);
S_R10(&l_R_991, r_MK(rt_str("", 0)), 0);
if (((((*(R21 *)rt_nil_check(p_P))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_MODE_990 = r_PACKING_VALUE(((*(R21 *)rt_nil_check(p_P))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(p_P))).f_IV == ((rt_int)0LL)))
{
S_R10(&l_R_991, r_LAYOUT_ALL(p_T, p_C, p_TAGN, l_MODE_990), 0);
if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R10(&l_R_991, r_CAT(l_R_991, r_LAYOUT_PARTS(p_T, p_C)), 0);
}
{ R10 rv992 = l_R_991;
return rv992; }
}
{
R21 * l_E_993; memset(&l_E_993, 0, sizeof l_E_993);
l_E_993 = ((*(R21 *)rt_nil_check(p_P))).f_A;
for (;;) {
if ((l_E_993 == NULL)) goto L_end994;
{
if (((((*(R21 *)rt_nil_check(l_E_993))).f_FL == ((rt_int)0LL)) || (((*(R21 *)rt_nil_check(l_E_993))).f_FL == ((rt_int)2LL))))
{
{
R24 * l_F_995; memset(&l_F_995, 0, sizeof l_F_995);
l_F_995 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_995 == NULL)) goto L_end996;
{
if ((r_TEQ(((*(R24 *)rt_nil_check(l_F_995))).f_NAME, ((*(R21 *)rt_nil_check(l_E_993))).f_NAME) && r_TEQ(((*(R24 *)rt_nil_check(l_F_995))).f_TAGF, p_TAGN)))
{
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(((*(R24 *)rt_nil_check(l_F_995))).f_NAME, ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (((((*(R21 *)rt_nil_check(l_E_993))).f_FL == ((rt_int)2LL)) && r_ARG_MANIFEST(p_T, l_F_995)))
{
}
else if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R10(&l_R_991, r_FMT3(rt_str("@ sz = rt_b_layout(sz, @, @);", 29), l_R_991, r_FIELD_SIZE_C(l_F_995, p_C), r_NUM(l_MODE_990)), 0);
}
else
{
S_R10(&l_R_991, r_CAT(l_R_991, r_FMT4(rt_str(" if (@) sz = rt_b_layout(sz, @, @);@", 36), r_VARIANT_COND(l_F_995, p_T, p_C), r_FIELD_SIZE_C(l_F_995, p_C), r_NUM(l_MODE_990), r_MK(rt_str("", 0)))), 0);
}
}
l_F_995 = ((*(R24 *)rt_nil_check(l_F_995))).f_NEXT;
}
RT_B_TICK();
} L_end996: ;
}
}
else if ((((*(R21 *)rt_nil_check(l_E_993))).f_FL == ((rt_int)1LL)))
{
S_R10(&l_R_991, r_CAT(l_R_991, r_LAYOUT_VARIANTS(p_T, p_C, ((*(R21 *)rt_nil_check(l_E_993))).f_NAME)), 0);
}
else if ((((*(R21 *)rt_nil_check(l_E_993))).f_FL == ((rt_int)5LL)))
{
S_R10(&l_R_991, r_FMT3(rt_str("@ sz = rt_b_layout(sz, rt_b_pack_size(@, 7, @), ", 48), l_R_991, r_NUM((r_MANIFEST(((*(R21 *)rt_nil_check(l_E_993))).f_B)).f_V), r_NUM(l_MODE_990)), 0);
S_R10(&l_R_991, r_FMT2(rt_str("@@);", 4), l_R_991, r_NUM(l_MODE_990)), 0);
}
else
{
S_R10(&l_R_991, r_FMT3(rt_str("@ sz = rt_b_layout(sz, @, @);", 29), l_R_991, r_NUM((r_MANIFEST(((*(R21 *)rt_nil_check(l_E_993))).f_B)).f_V), r_NUM(l_MODE_990)), 0);
}
l_E_993 = ((*(R21 *)rt_nil_check(l_E_993))).f_NEXT;
}
RT_B_TICK();
} L_end994: ;
}
{ R10 rv997 = l_R_991;
return rv997; }
rt_raise(RT_X_INIT);
}
static R10 r_LAYOUT_VARIANTS(R22 * p_T, R10 p_C, R10 p_TAGN) { RT_B_TICK(); 
R10 l_R_998; memset(&l_R_998, 0, sizeof l_R_998);
S_R10(&l_R_998, r_MK(rt_str("", 0)), 0);
R10 l_WORD_999; memset(&l_WORD_999, 0, sizeof l_WORD_999);
S_R10(&l_WORD_999, r_MK(rt_str(" if", 3)), 0);
rt_int l_ELSE_MODE_1000; memset(&l_ELSE_MODE_1000, 0, sizeof l_ELSE_MODE_1000);
l_ELSE_MODE_1000 = ((rt_int)2LL);
R24 * l_TF_1001; memset(&l_TF_1001, 0, sizeof l_TF_1001);
l_TF_1001 = r_FIND_FIELD(p_T, p_TAGN);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(r_CAT(r_MK(rt_str("|", 1)), p_TAGN), ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (r_IS_RECORD_REP(p_T))
{
{
R21 * l_V_1002; memset(&l_V_1002, 0, sizeof l_V_1002);
l_V_1002 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_C;
for (;;) {
if ((l_V_1002 == NULL)) goto L_end1003;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_1002))).f_NAME, p_TAGN))
{
{
R21 * l_S_1004; memset(&l_S_1004, 0, sizeof l_S_1004);
l_S_1004 = ((*(R21 *)rt_nil_check(l_V_1002))).f_A;
if ((!(((*(R21 *)rt_nil_check(l_V_1002))).f_B == NULL)))
{
l_ELSE_MODE_1000 = r_PACKING_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_V_1002))).f_B))).f_NAME);
}
for (;;) {
if ((l_S_1004 == NULL)) goto L_end1005;
{
{
R10 l_COND_1006; memset(&l_COND_1006, 0, sizeof l_COND_1006);
S_R10(&l_COND_1006, r_MK(rt_str("0", 1)), 0);
R21 * l_L_1007; memset(&l_L_1007, 0, sizeof l_L_1007);
l_L_1007 = ((*(R21 *)rt_nil_check(l_S_1004))).f_A;
R21 * l_P_1008; memset(&l_P_1008, 0, sizeof l_P_1008);
l_P_1008 = ((*(R21 *)rt_nil_check(l_S_1004))).f_B;
R21 * l_OUTER_1009; memset(&l_OUTER_1009, 0, sizeof l_OUTER_1009);
l_OUTER_1009 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
R10 l_BODY_1010; memset(&l_BODY_1010, 0, sizeof l_BODY_1010);
S_R10(&l_BODY_1010, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1007 == NULL)) goto L_end1011;
{
S_R10(&l_COND_1006, r_FMT4(rt_str("@ || (@).@ == @", 15), l_COND_1006, p_C, ((*(R24 *)rt_nil_check(l_TF_1001))).f_CNAME, (r_EXPR(l_L_1007, ((*(R24 *)rt_nil_check(l_TF_1001))).f_T)).f_C), 0);
l_L_1007 = ((*(R21 *)rt_nil_check(l_L_1007))).f_NEXT;
}
RT_B_TICK();
} L_end1011: ;
for (;;) {
if ((l_P_1008 == NULL)) goto L_end1012;
{
S_R10(&l_BODY_1010, r_CAT(l_BODY_1010, r_LAYOUT_SPEC(p_T, p_C, l_P_1008, p_TAGN)), 0);
l_P_1008 = ((*(R21 *)rt_nil_check(l_P_1008))).f_NEXT;
}
RT_B_TICK();
} L_end1012: ;
S_R10(&l_BODY_1010, r_CAT(l_BODY_1010, r_LAYOUT_ALL(p_T, p_C, p_TAGN, ((rt_int)2LL))), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_OUTER_1009;
S_R10(&l_R_998, r_CAT(l_R_998, r_FMT3(rt_str("@ (@) {@ }", 10), l_WORD_999, l_COND_1006, l_BODY_1010)), 0);
S_R10(&l_WORD_999, r_MK(rt_str(" else if", 8)), 0);
}
l_S_1004 = ((*(R21 *)rt_nil_check(l_S_1004))).f_NEXT;
}
RT_B_TICK();
} L_end1005: ;
}
}
l_V_1002 = ((*(R21 *)rt_nil_check(l_V_1002))).f_NEXT;
}
RT_B_TICK();
} L_end1003: ;
}
}
{
R21 * l_OUTER_1013; memset(&l_OUTER_1013, 0, sizeof l_OUTER_1013);
l_OUTER_1013 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
R10 l_REST_1014; memset(&l_REST_1014, 0, sizeof l_REST_1014);
S_R10(&l_REST_1014, r_LAYOUT_ALL(p_T, p_C, p_TAGN, l_ELSE_MODE_1000), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_OUTER_1013;
if (r_TEQS(l_WORD_999, rt_str(" if", 3)))
{
{ R10 rv1015 = l_REST_1014;
return rv1015; }
}
{ R10 rv1016 = r_FMT2(rt_str("@ else {@ }", 11), l_R_998, l_REST_1014);
return rv1016; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_ARG_MANIFEST(R22 * p_T, R24 * p_F) { RT_B_TICK(); 
R24 * l_G_1017; memset(&l_G_1017, 0, sizeof l_G_1017);
l_G_1017 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1018; memset(&l_A_1018, 0, sizeof l_A_1018);
l_A_1018 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_G_1017 == NULL) || (l_A_1018 == NULL))) goto L_end1019;
{
if ((!(((*(R24 *)rt_nil_check(l_G_1017))).f_KIND == ((rt_int)0LL))))
{
if ((l_G_1017 == p_F))
{
{ rt_int rv1020 = ((((*(R25 *)rt_nil_check(l_A_1018))).f_MLO).f_OK && (!((*(R25 *)rt_nil_check(l_A_1018))).f_ANYARG));
return rv1020; }
}
l_A_1018 = ((*(R25 *)rt_nil_check(l_A_1018))).f_NEXT;
}
l_G_1017 = ((*(R24 *)rt_nil_check(l_G_1017))).f_NEXT;
}
RT_B_TICK();
} L_end1019: ;
{ rt_int rv1021 = 0;
return rv1021; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ANY_TAG(R21 * p_A) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv1022 = 0;
return rv1022; }
}
{
R12 * l_Y_1023; memset(&l_Y_1023, 0, sizeof l_Y_1023);
l_Y_1023 = r_LOOKUP(((*(R21 *)rt_nil_check(p_A))).f_NAME);
if ((l_Y_1023 == NULL))
{
{ rt_int rv1024 = 0;
return rv1024; }
}
{ rt_int rv1025 = ((((*(R12 *)rt_nil_check(l_Y_1023))).f_KIND == g_Y_CONST) && r_TEQS(((*(R12 *)rt_nil_check(l_Y_1023))).f_ACCESS, rt_str("ANY", 3)));
return rv1025; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R21 * p_TS) { RT_B_TICK(); 
R21 * l_D_1026; memset(&l_D_1026, 0, sizeof l_D_1026);
l_D_1026 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_CLASS_1027; memset(&l_CLASS_1027, 0, sizeof l_CLASS_1027);
l_CLASS_1027 = NULL;
R20 * l_TARGS_1028; memset(&l_TARGS_1028, 0, sizeof l_TARGS_1028);
l_TARGS_1028 = NULL;
R25 * l_VARGS_1029; memset(&l_VARGS_1029, 0, sizeof l_VARGS_1029);
l_VARGS_1029 = NULL;
R25 * l_VTAIL_1030; memset(&l_VTAIL_1030, 0, sizeof l_VTAIL_1030);
l_VTAIL_1030 = NULL;
R21 * l_A_1031; memset(&l_A_1031, 0, sizeof l_A_1031);
l_A_1031 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_1032; memset(&l_F_1032, 0, sizeof l_F_1032);
l_F_1032 = ((*(R21 *)rt_nil_check(l_D_1026))).f_A;
for (;;) {
if ((l_F_1032 == NULL)) goto L_end1033;
{
{
R21 * l_N_1034; memset(&l_N_1034, 0, sizeof l_N_1034);
l_N_1034 = ((*(R21 *)rt_nil_check(l_F_1032))).f_A;
for (;;) {
if ((l_N_1034 == NULL)) goto L_end1035;
{
if ((l_A_1031 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R21 *)rt_nil_check(l_F_1032))).f_B == NULL))
{
{
R20 * l_B_1036; memset(&l_B_1036, 0, sizeof l_B_1036);
l_B_1036 = ((R20 *)rt_b_new(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_1036)), ({ R20 rc1037; memset(&rc1037, 0, sizeof rc1037);  S_R10(&rc1037.f_NAME, ((*(R21 *)rt_nil_check(l_N_1034))).f_NAME, 0); rc1037.f_T = r_ARG_TYPE(l_A_1031); S_R10(&rc1037.f_C, r_NO_TEXT(), 0); rc1037.f_HASMV = 0; rc1037.f_MV = ((rt_int)0LL); rc1037.f_R = NULL; rc1037.f_NEXT = l_TARGS_1028; rc1037; }), 0);
l_TARGS_1028 = l_B_1036;
}
}
else
{
{
R25 * l_V_1038; memset(&l_V_1038, 0, sizeof l_V_1038);
l_V_1038 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_V_1038)), ({ R25 rc1039; memset(&rc1039, 0, sizeof rc1039);  S_R10(&rc1039.f_LO, r_NO_TEXT(), 0); S_R10(&rc1039.f_HI, r_NO_TEXT(), 0); S_R23(&rc1039.f_MLO, r_NO_MVAL(), 0); S_R23(&rc1039.f_MHI, r_NO_MVAL(), 0); rc1039.f_ANYARG = 0; rc1039.f_NEXT = NULL; rc1039; }), 0);
if (((((*(R21 *)rt_nil_check(l_A_1031))).f_KIND == g_N_ANY) || r_IS_ANY_TAG(l_A_1031)))
{
if ((!(((*(R21 *)rt_nil_check(l_F_1032))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_1031))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R25 *)rt_nil_check(l_V_1038))).f_ANYARG = 1;
}
else if ((((*(R21 *)rt_nil_check(l_A_1031))).f_KIND == g_N_DONTCARE))
{
((*(R25 *)rt_nil_check(l_V_1038))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_1038))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R21 *)rt_nil_check(l_A_1031))).f_KIND == g_TS_GEN))
{
((*(R25 *)rt_nil_check(l_V_1038))).f_ANYARG = 1;
S_R10(&((*(R25 *)rt_nil_check(l_V_1038))).f_HI, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(l_A_1031))).f_NAME, (((*(R21 *)rt_nil_check(l_A_1031))).f_NAME).f_LEN))), 0);
}
else
{
{
R22 * l_FT_1040; memset(&l_FT_1040, 0, sizeof l_FT_1040);
l_FT_1040 = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_1032))).f_B);
S_R10(&((*(R25 *)rt_nil_check(l_V_1038))).f_LO, r_CONVERT(r_EXPR(l_A_1031, l_FT_1040), l_FT_1040, ((*(R21 *)rt_nil_check(l_A_1031))).f_LINE, r_NO_TEXT()), 0);
S_R23(&((*(R25 *)rt_nil_check(l_V_1038))).f_MLO, r_ENUM_MANIFEST(l_A_1031, l_FT_1040), 0);
if ((((((*(R25 *)rt_nil_check(l_V_1038))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_FT_1040))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_FT_1040))).f_MHI).f_OK))
{
if ((((((*(R25 *)rt_nil_check(l_V_1038))).f_MLO).f_V < (((*(R22 *)rt_nil_check(l_FT_1040))).f_MLO).f_V) || ((((*(R25 *)rt_nil_check(l_V_1038))).f_MLO).f_V > (((*(R22 *)rt_nil_check(l_FT_1040))).f_MHI).f_V)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_1031))).f_LINE, rt_str("the argument is outside the range of the parameter (3.9.1)", 58));
}
}
if (((((*(R21 *)rt_nil_check(l_F_1032))).f_IV == ((rt_int)1LL)) && (!(((*(R25 *)rt_nil_check(l_V_1038))).f_MLO).f_OK)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_A_1031))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_1030 == NULL))
{
l_VARGS_1029 = l_V_1038;
}
else
{
((*(R25 *)rt_nil_check(l_VTAIL_1030))).f_NEXT = l_V_1038;
}
l_VTAIL_1030 = l_V_1038;
}
}
l_A_1031 = ((*(R21 *)rt_nil_check(l_A_1031))).f_NEXT;
l_N_1034 = ((*(R21 *)rt_nil_check(l_N_1034))).f_NEXT;
}
RT_B_TICK();
} L_end1035: ;
}
l_F_1032 = ((*(R21 *)rt_nil_check(l_F_1032))).f_NEXT;
}
RT_B_TICK();
} L_end1033: ;
if ((!(l_A_1031 == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
}
{
R12 * l_R_1041; memset(&l_R_1041, 0, sizeof l_R_1041);
l_R_1041 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_1041 == NULL)) goto L_end1042;
{
if (((((*(R12 *)rt_nil_check(l_R_1041))).f_DECL == l_D_1026) && r_SAME_BINDS(((*(R12 *)rt_nil_check(l_R_1041))).f_BINDINGS, l_TARGS_1028)))
{
l_CLASS_1027 = ((*(R12 *)rt_nil_check(l_R_1041))).f_T;
goto L_end1042;
}
l_R_1041 = ((*(R12 *)rt_nil_check(l_R_1041))).f_INSTANCES;
}
RT_B_TICK();
} L_end1042: ;
}
if ((l_CLASS_1027 == NULL))
{
{
R12 * l_R_1043; memset(&l_R_1043, 0, sizeof l_R_1043);
l_R_1043 = r_NEW_SYM(g_Y_TYPE, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R20 * l_B_1044; memset(&l_B_1044, 0, sizeof l_B_1044);
l_B_1044 = l_TARGS_1028;
R20 * l_SAVED_1045; memset(&l_SAVED_1045, 0, sizeof l_SAVED_1045);
l_SAVED_1045 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
rt_int l_ENTERED_1046; memset(&l_ENTERED_1046, 0, sizeof l_ENTERED_1046);
((*(R12 *)rt_nil_check(l_R_1043))).f_DECL = l_D_1026;
((*(R12 *)rt_nil_check(l_R_1043))).f_BINDINGS = l_TARGS_1028;
((*(R12 *)rt_nil_check(l_R_1043))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
((*(R7 *)rt_nil_check(g_W))).f_RECS = l_R_1043;
l_ENTERED_1046 = r_ENTER_MODULE_FOR(p_Y);
r_OPEN_SCOPE();
for (;;) {
if ((l_B_1044 == NULL)) goto L_end1047;
{
{
R12 * l_TY_1048; memset(&l_TY_1048, 0, sizeof l_TY_1048);
l_TY_1048 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_1044))).f_NAME);
((*(R12 *)rt_nil_check(l_TY_1048))).f_T = ((*(R20 *)rt_nil_check(l_B_1044))).f_T;
r_DEFINE(l_TY_1048, ((*(R21 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_1044 = ((*(R20 *)rt_nil_check(l_B_1044))).f_NEXT;
}
RT_B_TICK();
} L_end1047: ;
l_F_1032 = ((*(R21 *)rt_nil_check(l_D_1026))).f_A;
for (;;) {
if ((l_F_1032 == NULL)) goto L_end1049;
{
if ((!(((*(R21 *)rt_nil_check(l_F_1032))).f_B == NULL)))
{
{
R21 * l_N_1050; memset(&l_N_1050, 0, sizeof l_N_1050);
l_N_1050 = ((*(R21 *)rt_nil_check(l_F_1032))).f_A;
for (;;) {
if ((l_N_1050 == NULL)) goto L_end1051;
{
{
R12 * l_P_1052; memset(&l_P_1052, 0, sizeof l_P_1052);
l_P_1052 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(l_N_1050))).f_NAME);
((*(R12 *)rt_nil_check(l_P_1052))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_F_1032))).f_B);
S_R10(&((*(R12 *)rt_nil_check(l_P_1052))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), r_CID(((*(R21 *)rt_nil_check(l_N_1050))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_P_1052))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_P_1052))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_1052, ((*(R21 *)rt_nil_check(l_F_1032))).f_LINE);
}
l_N_1050 = ((*(R21 *)rt_nil_check(l_N_1050))).f_NEXT;
}
RT_B_TICK();
} L_end1051: ;
}
}
l_F_1032 = ((*(R21 *)rt_nil_check(l_F_1032))).f_NEXT;
}
RT_B_TICK();
} L_end1049: ;
if ((l_TARGS_1028 == NULL))
{
l_CLASS_1027 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_1026))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R21 *)rt_nil_check(l_D_1026))).f_A);
}
else
{
l_CLASS_1027 = r_RESOLVE_RECORD(((*(R21 *)rt_nil_check(l_D_1026))).f_B, r_NO_TEXT(), p_Y, ((*(R21 *)rt_nil_check(l_D_1026))).f_A);
}
S_R10(&((*(R22 *)rt_nil_check(l_CLASS_1027))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R12 *)rt_nil_check(l_R_1043))).f_T = l_CLASS_1027;
r_CLOSE_SCOPE();
if (l_ENTERED_1046)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1045;
}
}
{
R22 * l_T_1053; memset(&l_T_1053, 0, sizeof l_T_1053);
l_T_1053 = r_COPY_TYP(l_CLASS_1027);
((*(R22 *)rt_nil_check(l_T_1053))).f_ARGS = l_VARGS_1029;
{ R22 * rv1054 = l_T_1053;
return rv1054; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_1055; memset(&l_P_1055, 0, sizeof l_P_1055);
l_P_1055 = p_A;
R20 * l_Q_1056; memset(&l_Q_1056, 0, sizeof l_Q_1056);
l_Q_1056 = p_B;
for (;;) {
if (((l_P_1055 == NULL) || (l_Q_1056 == NULL))) goto L_end1057;
{
if ((((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_1055))).f_T, ((*(R20 *)rt_nil_check(l_Q_1056))).f_T)) || (!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_1055))).f_T, ((*(R20 *)rt_nil_check(l_Q_1056))).f_T))) || (!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_1055))).f_T, ((*(R20 *)rt_nil_check(l_Q_1056))).f_T))))
{
{ rt_int rv1058 = 0;
return rv1058; }
}
l_P_1055 = ((*(R20 *)rt_nil_check(l_P_1055))).f_NEXT;
l_Q_1056 = ((*(R20 *)rt_nil_check(l_Q_1056))).f_NEXT;
}
RT_B_TICK();
} L_end1057: ;
{ rt_int rv1059 = ((l_P_1055 == NULL) && (l_Q_1056 == NULL));
return rv1059; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R22 * p_T) { RT_B_TICK(); 
R25 * l_A_1060; memset(&l_A_1060, 0, sizeof l_A_1060);
l_A_1060 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_1060 == NULL)) goto L_end1061;
{
if (((*(R25 *)rt_nil_check(l_A_1060))).f_ANYARG)
{
{ rt_int rv1062 = 1;
return rv1062; }
}
l_A_1060 = ((*(R25 *)rt_nil_check(l_A_1060))).f_NEXT;
}
RT_B_TICK();
} L_end1061: ;
{ rt_int rv1063 = 0;
return rv1063; }
rt_raise(RT_X_INIT);
}
static R10 r_VARIANT_COND(R24 * p_F, R22 * p_T, R10 p_SELF) { RT_B_TICK(); 
R21 * l_L_1064; memset(&l_L_1064, 0, sizeof l_L_1064);
l_L_1064 = ((*(R24 *)rt_nil_check(p_F))).f_LABELS;
R10 l_C_1065; memset(&l_C_1065, 0, sizeof l_C_1065);
S_R10(&l_C_1065, r_MK(rt_str("0", 1)), 0);
R24 * l_TF_1066; memset(&l_TF_1066, 0, sizeof l_TF_1066);
l_TF_1066 = r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_1064 == NULL)) goto L_end1067;
{
if ((((*(R21 *)rt_nil_check(l_L_1064))).f_KIND == g_N_RANGE))
{
S_R10(&l_C_1065, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_1065, p_SELF, ((*(R24 *)rt_nil_check(l_TF_1066))).f_CNAME), 0);
S_R10(&l_C_1065, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_1065, (r_EXPR(((*(R21 *)rt_nil_check(l_L_1064))).f_A, ((*(R24 *)rt_nil_check(l_TF_1066))).f_T)).f_C, p_SELF, ((*(R24 *)rt_nil_check(l_TF_1066))).f_CNAME), 0);
S_R10(&l_C_1065, r_FMT2(rt_str("@@)", 3), l_C_1065, (r_EXPR(((*(R21 *)rt_nil_check(l_L_1064))).f_B, ((*(R24 *)rt_nil_check(l_TF_1066))).f_T)).f_C), 0);
}
else
{
S_R10(&l_C_1065, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_1065, p_SELF, ((*(R24 *)rt_nil_check(l_TF_1066))).f_CNAME, (r_EXPR(l_L_1064, ((*(R24 *)rt_nil_check(l_TF_1066))).f_T)).f_C), 0);
}
l_L_1064 = ((*(R21 *)rt_nil_check(l_L_1064))).f_NEXT;
}
RT_B_TICK();
} L_end1067: ;
{ R10 rv1068 = r_FMT1(rt_str("(@)", 3), l_C_1065);
return rv1068; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R22 * p_T) { RT_B_TICK(); 
R10 l_C_1069; memset(&l_C_1069, 0, sizeof l_C_1069);
S_R10(&l_C_1069, ((*(R22 *)rt_nil_check(p_T))).f_CNAME, 0);
R24 * l_F_1070; memset(&l_F_1070, 0, sizeof l_F_1070);
l_F_1070 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_BODY_1071; memset(&l_BODY_1071, 0, sizeof l_BODY_1071);
S_R10(&l_BODY_1071, r_MK(rt_str("", 0)), 0);
R10 l_ASSIGN_1072; memset(&l_ASSIGN_1072, 0, sizeof l_ASSIGN_1072);
S_R10(&l_ASSIGN_1072, r_MK(rt_str("", 0)), 0);
R10 l_COPY_1073; memset(&l_COPY_1073, 0, sizeof l_COPY_1073);
S_R10(&l_COPY_1073, r_MK(rt_str("", 0)), 0);
R10 l_EQ_1074; memset(&l_EQ_1074, 0, sizeof l_EQ_1074);
S_R10(&l_EQ_1074, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_1070 == NULL)) goto L_end1075;
{
S_R10(&l_BODY_1071, r_FMT3(rt_str("@ @ @;", 6), l_BODY_1071, r_CTYPE(((*(R24 *)rt_nil_check(l_F_1070))).f_T), ((*(R24 *)rt_nil_check(l_F_1070))).f_CNAME), 0);
S_R10(&l_COPY_1073, r_FMT3(rt_str("@ d.@ = @;", 10), l_COPY_1073, ((*(R24 *)rt_nil_check(l_F_1070))).f_CNAME, r_COPY_OF(((*(R24 *)rt_nil_check(l_F_1070))).f_T, r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_1070))).f_CNAME))), 0);
if ((((*(R24 *)rt_nil_check(l_F_1070))).f_KIND == ((rt_int)1LL)))
{
S_R10(&l_ASSIGN_1072, r_FMT2(rt_str("@ if (!(@)) rt_raise(RT_B_TYPE_MISMATCH);", 41), l_ASSIGN_1072, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1070))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_1070))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_1070))).f_CNAME))), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1070))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_ASSIGN_1072, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_1072, ((*(R24 *)rt_nil_check(l_F_1070))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_1070))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_1070))).f_CNAME), 0);
}
else
{
S_R10(&l_ASSIGN_1072, r_FMT2(rt_str("@ @", 3), l_ASSIGN_1072, r_ASSIGN_CODE(((*(R24 *)rt_nil_check(l_F_1070))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_1070))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_1070))).f_CNAME))), 0);
}
if (((((*(R24 *)rt_nil_check(l_F_1070))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_1074, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1074, r_VARIANT_COND(l_F_1070, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1070))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_1070))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_1070))).f_CNAME))), 0);
}
else
{
S_R10(&l_EQ_1074, r_FMT2(rt_str("@ && @", 6), l_EQ_1074, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1070))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_1070))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_1070))).f_CNAME))), 0);
}
l_F_1070 = ((*(R24 *)rt_nil_check(l_F_1070))).f_NEXT;
}
RT_B_TICK();
} L_end1075: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_1069, l_BODY_1071));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_1069, l_C_1069, l_C_1069));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_1069, l_C_1069, l_C_1069));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_1069, l_C_1069, l_C_1069, l_ASSIGN_1072));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_1069, l_C_1069, l_C_1069, l_EQ_1074));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_1069, l_C_1069, l_C_1069));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s;", 28), l_C_1069, l_C_1069, l_C_1069, l_C_1069));
r_EMIT(g_O_HELPERS, r_FMT1(rt_str("@ return d; }", 13), l_COPY_1073));
}
static R10 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R10 l_ET_C_1076; memset(&l_ET_C_1076, 0, sizeof l_ET_C_1076);
S_R10(&l_ET_C_1076, r_CTYPE(p_ELEM), 0);
R10 l_KEY_1077; memset(&l_KEY_1077, 0, sizeof l_KEY_1077);
S_R10(&l_KEY_1077, r_FMT3(rt_str("@/@/@", 5), l_ET_C_1076, r_NUM(p_DIMS), r_NUM(((*(R22 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R12 * l_Y_1078; memset(&l_Y_1078, 0, sizeof l_Y_1078);
l_Y_1078 = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_1078 == NULL)) goto L_end1079;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_1078))).f_NAME, l_KEY_1077) && r_SAME_TYPE(((*(R12 *)rt_nil_check(l_Y_1078))).f_T, p_ELEM)))
{
{ R10 rv1080 = ((*(R12 *)rt_nil_check(l_Y_1078))).f_ACCESS;
return rv1080; }
}
l_Y_1078 = ((*(R12 *)rt_nil_check(l_Y_1078))).f_INSTANCES;
}
RT_B_TICK();
} L_end1079: ;
l_Y_1078 = r_NEW_SYM(g_Y_TYPE, l_KEY_1077);
((*(R12 *)rt_nil_check(l_Y_1078))).f_T = p_ELEM;
S_R10(&((*(R12 *)rt_nil_check(l_Y_1078))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R12 *)rt_nil_check(l_Y_1078))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R7 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_1078;
{
R10 l_C_1081; memset(&l_C_1081, 0, sizeof l_C_1081);
S_R10(&l_C_1081, ((*(R12 *)rt_nil_check(l_Y_1078))).f_ACCESS, 0);
R10 l_D_1082; memset(&l_D_1082, 0, sizeof l_D_1082);
S_R10(&l_D_1082, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_1081, l_C_1081));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_1081, l_D_1082, l_D_1082, l_ET_C_1076));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_1081, l_C_1081, l_C_1081));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_1081, l_C_1081, l_C_1081));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_1081, l_C_1081, l_C_1081, l_D_1082));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_1082, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_1081, l_C_1081, l_C_1081, l_D_1082));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_1082, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_1081, l_C_1081, l_C_1081));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s; ", 29), l_C_1081, l_C_1081, l_C_1081, l_C_1081));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("rt_int n = rt_b_extent(@, s.lo, s.hi); d.p = rt_alloc((n > 0 \? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = @; return d; }", 140), l_D_1082, r_COPY_OF(p_ELEM, r_MK(rt_str("s.p[i]", 6)))));
}
{ R10 rv1083 = ((*(R12 *)rt_nil_check(l_Y_1078))).f_ACCESS;
return rv1083; }
rt_raise(RT_X_INIT);
}
static R10 r_INIT_CODE(R22 * p_T, R10 p_LV) { RT_B_TICK(); 
rt_int l_K_1084; memset(&l_K_1084, 0, sizeof l_K_1084);
l_K_1084 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1084 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv1085 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv1085; }
}
{ R10 rv1086 = r_FMT2(rt_str("@ = rt_b_str_new(@, 0);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv1086; }
}
else if ((l_K_1084 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R10 rv1087 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv1087; }
}
{ R10 rv1088 = r_FMT2(rt_str("@ = rt_b_str_new(@, 1);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv1088; }
}
else if ((l_K_1084 == g_T_SEM))
{
{ R10 rv1089 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv1089; }
}
else if ((l_K_1084 == g_T_ABS))
{
{ R10 rv1090 = r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv1090; }
}
else if ((l_K_1084 == g_T_ARR))
{
{
R25 * l_B_1091; memset(&l_B_1091, 0, sizeof l_B_1091);
l_B_1091 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_1092; memset(&l_I_1092, 0, sizeof l_I_1092);
l_I_1092 = ((rt_int)0LL);
R10 l_R_1093; memset(&l_R_1093, 0, sizeof l_R_1093);
S_R10(&l_R_1093, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_1091 == NULL)) goto L_end1094;
{
S_R10(&l_R_1093, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_1093, p_LV, r_NUM(l_I_1092), ((*(R25 *)rt_nil_check(l_B_1091))).f_LO), 0);
S_R10(&l_R_1093, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_1093, p_LV, r_NUM(l_I_1092), ((*(R25 *)rt_nil_check(l_B_1091))).f_HI), 0);
l_I_1092 = rt_add(l_I_1092, ((rt_int)1LL));
l_B_1091 = ((*(R25 *)rt_nil_check(l_B_1091))).f_NEXT;
}
RT_B_TICK();
} L_end1094: ;
S_R10(&l_R_1093, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_1093, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R10(&l_R_1093, r_FMT4(rt_str("@ @.p = rt_b_array_alloc(n, sizeof *@.p);", 41), l_R_1093, p_LV, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_ELEM))
{
{
R10 l_IV_1095; memset(&l_IV_1095, 0, sizeof l_IV_1095);
S_R10(&l_IV_1095, r_NEW_NAME(rt_str("i", 1)), 0);
S_R10(&l_R_1093, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_1093, l_IV_1095, l_IV_1095, l_IV_1095), 0);
S_R10(&l_R_1093, r_FMT2(rt_str("@ @ }", 5), l_R_1093, r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_1095))), 0);
}
}
{ R10 rv1096 = r_CATS(l_R_1093, rt_str(" }", 2));
return rv1096; }
}
}
else if ((l_K_1084 == g_T_REC))
{
{
R24 * l_F_1097; memset(&l_F_1097, 0, sizeof l_F_1097);
l_F_1097 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1098; memset(&l_A_1098, 0, sizeof l_A_1098);
l_A_1098 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R10 l_R_1099; memset(&l_R_1099, 0, sizeof l_R_1099);
S_R10(&l_R_1099, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_1097 == NULL)) goto L_end1100;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1097))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_1098 == NULL)))
{
if ((!((*(R25 *)rt_nil_check(l_A_1098))).f_ANYARG))
{
S_R10(&l_R_1099, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_1099, p_LV, ((*(R24 *)rt_nil_check(l_F_1097))).f_CNAME, ((*(R25 *)rt_nil_check(l_A_1098))).f_LO), 0);
}
else if (((((*(R24 *)rt_nil_check(l_F_1097))).f_KIND == ((rt_int)2LL)) && ((((*(R25 *)rt_nil_check(l_A_1098))).f_HI).f_LEN == ((rt_int)0LL))))
{
S_R10(&l_R_1099, r_FMT3(rt_str("@ @.@ = INT64_MIN;", 18), l_R_1099, p_LV, ((*(R24 *)rt_nil_check(l_F_1097))).f_CNAME), 0);
}
l_A_1098 = ((*(R25 *)rt_nil_check(l_A_1098))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_1097))).f_T))
{
S_R10(&l_R_1099, r_FMT2(rt_str("@ @", 3), l_R_1099, r_SUBST_SELF(r_INIT_CODE(((*(R24 *)rt_nil_check(l_F_1097))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R24 *)rt_nil_check(l_F_1097))).f_CNAME)), p_LV)), 0);
}
l_F_1097 = ((*(R24 *)rt_nil_check(l_F_1097))).f_NEXT;
}
RT_B_TICK();
} L_end1100: ;
{ R10 rv1101 = l_R_1099;
return rv1101; }
}
}
{ R10 rv1102 = r_NO_TEXT();
return rv1102; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1103; memset(&l_K_1103, 0, sizeof l_K_1103);
l_K_1103 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_1103 == g_T_STR) || (l_K_1103 == g_T_BITS)) || (l_K_1103 == g_T_ARR)) || (l_K_1103 == g_T_SEM)))
{
{ rt_int rv1104 = 1;
return rv1104; }
}
else if ((l_K_1103 == g_T_ABS))
{
{ rt_int rv1105 = r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1105; }
}
else if ((l_K_1103 == g_T_REC))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv1106 = 1;
return rv1106; }
}
{
R24 * l_F_1107; memset(&l_F_1107, 0, sizeof l_F_1107);
l_F_1107 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1107 == NULL)) goto L_end1108;
{
if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_1107))).f_T))
{
{ rt_int rv1109 = 1;
return rv1109; }
}
l_F_1107 = ((*(R24 *)rt_nil_check(l_F_1107))).f_NEXT;
}
RT_B_TICK();
} L_end1108: ;
}
}
{ rt_int rv1110 = 0;
return rv1110; }
rt_raise(RT_X_INIT);
}
static R10 r_COPY_OF(R22 * p_T, R10 p_V) { RT_B_TICK(); 
rt_int l_K_1111; memset(&l_K_1111, 0, sizeof l_K_1111);
l_K_1111 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1111 == g_T_STR) || (l_K_1111 == g_T_BITS)))
{
{ R10 rv1112 = r_FMT1(rt_str("rt_str_copy(@)", 14), p_V);
return rv1112; }
}
else if ((l_K_1111 == g_T_ABS))
{
{ R10 rv1113 = r_COPY_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_V);
return rv1113; }
}
else if (((l_K_1111 == g_T_ARR) || (l_K_1111 == g_T_REC)))
{
{ R10 rv1114 = r_FMT2(rt_str("C_@(@)", 6), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_V);
return rv1114; }
}
{ R10 rv1115 = p_V;
return rv1115; }
rt_raise(RT_X_INIT);
}
static R10 r_ASSIGN_CODE(R22 * p_T, R10 p_LV, R10 p_RV) { RT_B_TICK(); 
rt_int l_K_1116; memset(&l_K_1116, 0, sizeof l_K_1116);
l_K_1116 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1116 == g_T_STR) || (l_K_1116 == g_T_BITS)))
{
{ R10 rv1117 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv1117; }
}
else if ((l_K_1116 == g_T_ABS))
{
{ R10 rv1118 = r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv1118; }
}
else if ((l_K_1116 == g_T_SEM))
{
{ R10 rv1119 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv1119; }
}
else if ((l_K_1116 == g_T_ARR))
{
{ R10 rv1120 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1120; }
}
else if ((l_K_1116 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R10 rv1121 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1121; }
}
{ R10 rv1122 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1122; }
}
{ R10 rv1123 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv1123; }
rt_raise(RT_X_INIT);
}
static R10 r_EQUAL_CODE(R22 * p_T, R10 p_A, R10 p_B) { RT_B_TICK(); 
rt_int l_K_1124; memset(&l_K_1124, 0, sizeof l_K_1124);
l_K_1124 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1124 == g_T_STR) || (l_K_1124 == g_T_BITS)))
{
{ R10 rv1125 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv1125; }
}
else if ((l_K_1124 == g_T_ABS))
{
{ R10 rv1126 = r_EQUAL_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv1126; }
}
else if (((l_K_1124 == g_T_ARR) || (l_K_1124 == g_T_REC)))
{
{ R10 rv1127 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv1127; }
}
else if ((l_K_1124 == g_T_SEM))
{
{ R10 rv1128 = r_MK(rt_str("0", 1));
return rv1128; }
}
{ R10 rv1129 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv1129; }
rt_raise(RT_X_INIT);
}
static R10 r_RANGE_CHECK(R22 * p_T, R10 p_V, R10 p_SELF) { RT_B_TICK(); 
if ((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))))
{
{ R10 rv1130 = p_V;
return rv1130; }
}
if ((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R10 rv1131 = p_V;
return rv1131; }
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R10 rv1132 = p_V;
return rv1132; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R10 rv1133 = r_FMT3(rt_str("rt_b_tfrange(@, @, @)", 21), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1133; }
}
{ R10 rv1134 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1134; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R10 rv1135 = r_FMT3(rt_str("rt_b_trange(@, @, @)", 20), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1135; }
}
{ R10 rv1136 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1136; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv1137 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv1137; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv1138 = 1;
return rv1138; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv1139 = r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv1139; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv1140 = r_SAME_CLASS(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1140; }
}
if ((!(((*(R22 *)rt_nil_check(p_A))).f_KIND == ((*(R22 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv1141 = 0;
return rv1141; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv1142 = (((*(R22 *)rt_nil_check(p_A))).f_BASE == ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1142; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1143 = ((((*(R22 *)rt_nil_check(p_A))).f_DIMS == ((*(R22 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM));
return rv1143; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv1144 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv1144; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1145 = ((r_ORIGINAL(((*(R22 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R22 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE));
return rv1145; }
}
{ rt_int rv1146 = 1;
return rv1146; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv1147 = 1;
return rv1147; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv1148 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv1148; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv1149 = r_SAME_TYPE(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1149; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv1150 = 0;
return rv1150; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv1151 = (((*(R22 *)rt_nil_check(p_A))).f_SCALE == ((*(R22 *)rt_nil_check(p_B))).f_SCALE);
return rv1151; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1152 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM);
return rv1152; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv1153 = r_SAME_ARGS(((*(R22 *)rt_nil_check(p_A))).f_ARGS, ((*(R22 *)rt_nil_check(p_B))).f_ARGS);
return rv1153; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1154 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1154; }
}
{ rt_int rv1155 = 1;
return rv1155; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R25 * p_B) { RT_B_TICK(); 
if (((((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1156 = 0;
return rv1156; }
}
{ rt_int rv1157 = rt_b_eq(rt_b_slice(r_STR(((*(R25 *)rt_nil_check(p_B))).f_HI, (((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv1157; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R25 * p_A, R25 * p_B) { RT_B_TICK(); 
R25 * l_P_1158; memset(&l_P_1158, 0, sizeof l_P_1158);
l_P_1158 = p_A;
R25 * l_Q_1159; memset(&l_Q_1159, 0, sizeof l_Q_1159);
l_Q_1159 = p_B;
for (;;) {
if (((l_P_1158 == NULL) || (l_Q_1159 == NULL))) goto L_end1160;
{
if ((r_IS_GEN_ARG(l_P_1158) || r_IS_GEN_ARG(l_Q_1159)))
{
}
else if ((!(((*(R25 *)rt_nil_check(l_P_1158))).f_ANYARG == ((*(R25 *)rt_nil_check(l_Q_1159))).f_ANYARG)))
{
{ rt_int rv1161 = 0;
return rv1161; }
}
if (((((*(R25 *)rt_nil_check(l_P_1158))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_1159))).f_MLO).f_OK))
{
if ((!((((*(R25 *)rt_nil_check(l_P_1158))).f_MLO).f_V == (((*(R25 *)rt_nil_check(l_Q_1159))).f_MLO).f_V)))
{
{ rt_int rv1162 = 0;
return rv1162; }
}
}
l_P_1158 = ((*(R25 *)rt_nil_check(l_P_1158))).f_NEXT;
l_Q_1159 = ((*(R25 *)rt_nil_check(l_Q_1159))).f_NEXT;
}
RT_B_TICK();
} L_end1160: ;
{ rt_int rv1163 = ((l_P_1158 == NULL) && (l_Q_1159 == NULL));
return rv1163; }
rt_raise(RT_X_INIT);
}
static R10 r_FRAME_OF(rt_int p_LEVEL) { RT_B_TICK(); 
R18 * l_CS_1164; memset(&l_CS_1164, 0, sizeof l_CS_1164);
l_CS_1164 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R10 l_T_1165; memset(&l_T_1165, 0, sizeof l_T_1165);
rt_int l_LEV_1166; memset(&l_LEV_1166, 0, sizeof l_LEV_1166);
if ((((*(R18 *)rt_nil_check(l_CS_1164))).f_LEVEL == p_LEVEL))
{
{ R10 rv1167 = r_MK(rt_str("F", 1));
return rv1167; }
}
if (((*(R18 *)rt_nil_check(l_CS_1164))).f_FRAMED)
{
S_R10(&l_T_1165, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R10(&l_T_1165, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_1166 = rt_sub(((*(R18 *)rt_nil_check(l_CS_1164))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_1166 <= p_LEVEL)) goto L_end1168;
{
S_R10(&l_T_1165, r_CATS(l_T_1165, rt_str("->up", 4)), 0);
l_LEV_1166 = rt_sub(l_LEV_1166, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1168: ;
{ R10 rv1169 = l_T_1165;
return rv1169; }
rt_raise(RT_X_INIT);
}
static R10 r_OBJ_ACCESS(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R12 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R10 rv1170 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1170; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R10 rv1171 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1171; }
}
if (((*(R12 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R10 rv1172 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1172; }
}
{ R10 rv1173 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1173; }
rt_raise(RT_X_INIT);
}
static R10 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE) { RT_B_TICK(); 
R18 * l_CS_1174; memset(&l_CS_1174, 0, sizeof l_CS_1174);
l_CS_1174 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R22 * l_T_1175; memset(&l_T_1175, 0, sizeof l_T_1175);
l_T_1175 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
R10 l_CN_1176; memset(&l_CN_1176, 0, sizeof l_CN_1176);
if ((((*(R18 *)rt_nil_check(l_CS_1174))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R7 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R7 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R10(&l_CN_1176, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
}
else
{
S_R10(&l_CN_1176, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_1175), l_CN_1176));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1176, 0);
{ R10 rv1177 = l_CN_1176;
return rv1177; }
}
S_R10(&l_CN_1176, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FIELD, l_CN_1176, 0);
if (((*(R18 *)rt_nil_check(l_CS_1174))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_1175), l_CN_1176), &((*(R18 *)rt_nil_check(l_CS_1174))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_1176), 0);
{ R10 rv1178 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1178; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_1175), l_CN_1176, l_CN_1176, l_CN_1176));
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1176, 0);
{ R10 rv1179 = l_CN_1176;
return rv1179; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R21 * p_D) { RT_B_TICK(); 
R22 * l_T_1180; memset(&l_T_1180, 0, sizeof l_T_1180);
l_T_1180 = r_RESOLVE(((*(R21 *)rt_nil_check(p_D))).f_B);
R21 * l_N_1181; memset(&l_N_1181, 0, sizeof l_N_1181);
l_N_1181 = ((*(R21 *)rt_nil_check(p_D))).f_A;
R26 l_V_1182; memset(&l_V_1182, 0, sizeof l_V_1182);
rt_int l_HAVE_V_1183; memset(&l_HAVE_V_1183, 0, sizeof l_HAVE_V_1183);
l_HAVE_V_1183 = 0;
if (((((*(R22 *)rt_nil_check(l_T_1180))).f_KIND == g_T_TYPE) || (((*(R22 *)rt_nil_check(l_T_1180))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_1181 == NULL)) goto L_end1184;
{
{
R12 * l_Y_1185; memset(&l_Y_1185, 0, sizeof l_Y_1185);
l_Y_1185 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(l_N_1181))).f_NAME);
R10 l_CN_1186; memset(&l_CN_1186, 0, sizeof l_CN_1186);
if ((((*(R21 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R12 *)rt_nil_check(l_Y_1185))).f_KIND = g_Y_CONST;
((*(R12 *)rt_nil_check(l_Y_1185))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_1180) && (((*(R22 *)rt_nil_check(l_T_1180))).f_SCALE == ((rt_int)0LL))))
{
{
R23 l_M_1187; memset(&l_M_1187, 0, sizeof l_M_1187);
S_R23(&l_M_1187, r_MANIFEST(((*(R21 *)rt_nil_check(p_D))).f_C), 0);
((*(R12 *)rt_nil_check(l_Y_1185))).f_HASMV = (l_M_1187).f_OK;
((*(R12 *)rt_nil_check(l_Y_1185))).f_MV = (l_M_1187).f_V;
}
}
}
((*(R12 *)rt_nil_check(l_Y_1185))).f_T = l_T_1180;
S_R10(&l_CN_1186, r_NEW_OBJECT(l_Y_1185, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_1180))
{
r_CODE(r_INIT_CODE(l_T_1180, l_CN_1186));
}
if ((!(((*(R21 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_1183))
{
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R21 *)rt_nil_check(p_D))).f_C;
S_R26(&l_V_1182, r_EXPR(((*(R21 *)rt_nil_check(p_D))).f_C, l_T_1180), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
l_HAVE_V_1183 = 1;
}
r_CODE(r_STORE_CODE(l_T_1180, l_CN_1186, l_V_1182, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_1185, ((*(R21 *)rt_nil_check(l_N_1181))).f_LINE);
}
l_N_1181 = ((*(R21 *)rt_nil_check(l_N_1181))).f_NEXT;
}
RT_B_TICK();
} L_end1184: ;
}
static R26 r_MKET(R10 p_C, R22 * p_T) { RT_B_TICK(); 
{ R26 rv1188 = ({ R26 rc1189; memset(&rc1189, 0, sizeof rc1189);  S_R10(&rc1189.f_C, p_C, 0); rc1189.f_T = p_T; rc1189.f_LVAL = 0; S_R10(&rc1189.f_SELF, r_NO_TEXT(), 0); rc1189; });
return rv1188; }
rt_raise(RT_X_INIT);
}
static R26 r_MKLV(R10 p_C, R22 * p_T, rt_int p_LVAL, R10 p_SELF) { RT_B_TICK(); 
{ R26 rv1190 = ({ R26 rc1191; memset(&rc1191, 0, sizeof rc1191);  S_R10(&rc1191.f_C, p_C, 0); rc1191.f_T = p_T; rc1191.f_LVAL = p_LVAL; S_R10(&rc1191.f_SELF, p_SELF, 0); rc1191; });
return rv1190; }
rt_raise(RT_X_INIT);
}
static R22 * r_INT_TYPE(rt_int p_SCALE) { RT_B_TICK(); 
R22 * l_T_1192; memset(&l_T_1192, 0, sizeof l_T_1192);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R22 * rv1193 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv1193; }
}
l_T_1192 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_1192))).f_SCALE = p_SCALE;
{ R22 * rv1194 = l_T_1192;
return rv1194; }
rt_raise(RT_X_INIT);
}
static R22 * r_STR_TYPE(R10 p_LEN, R23 p_M) { RT_B_TICK(); 
R22 * l_T_1195; memset(&l_T_1195, 0, sizeof l_T_1195);
l_T_1195 = r_NEW_TYP(g_T_STR);
S_R10(&((*(R22 *)rt_nil_check(l_T_1195))).f_LEN_C, p_LEN, 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1195))).f_MLEN, p_M, 0);
{ R22 * rv1196 = l_T_1195;
return rv1196; }
rt_raise(RT_X_INIT);
}
static R10 r_CSTRING(R10 p_T) { RT_B_TICK(); 
rstr l_S_1197; memset(&l_S_1197, 0, sizeof l_S_1197);
l_S_1197 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_1197, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_1198; memset(&l_AT_1198, 0, sizeof l_AT_1198);
l_AT_1198 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R10 l_R_1199; memset(&l_R_1199, 0, sizeof l_R_1199);
S_R10(&l_R_1199, r_MK(rt_str("\"", 1)), 0);
{ rt_int it1201_lo = ((rt_int)0LL), it1201_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it1201 = it1201_lo; it1201 <= it1201_hi; it1201++) {
{
if ((rt_b_eq(rt_b_slice(l_S_1197, it1201, it1201), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_1197, it1201, it1201), rt_str("\\", 1))))
{
S_R10(&l_R_1199, r_MK(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_S_1197, it1201, it1201))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1197, it1201, it1201), rt_str("\?", 1)))
{
S_R10(&l_R_1199, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_1202; memset(&l_C_1202, 0, sizeof l_C_1202);
l_C_1202 = r_CODE_OF(rt_b_slice(l_S_1197, it1201, it1201));
if (({ rt_int iv1203 = l_C_1202; (((rt_int)32LL) <= iv1203) && (iv1203 <= ((rt_int)126LL)); }))
{
S_R10(&l_R_1199, r_MK(rt_b_slice(l_S_1197, it1201, it1201)), 0);
}
else
{
S_R10(&l_R_1199, r_MK(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_1202, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_1202, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_1202, ((rt_int)8LL))))), 0);
}
}
}
}
RT_B_TICK();
if (it1201 == it1201_hi) break;
} } L_end1200: ;
S_R10(&l_R_1199, r_MK(rt_str("\"", 1)), 0);
{ R10 rv1204 = ({ R10 rc1205; memset(&rc1205, 0, sizeof rc1205);  rc1205.f_AT = l_AT_1198; rc1205.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_1198); rc1205.f_H = rt_neg(((rt_int)1LL)); rc1205; });
return rv1204; }
rt_raise(RT_X_INIT);
}
static R23 r_MANIFEST(R21 * p_E) { RT_B_TICK(); 
rt_int l_K_1206; memset(&l_K_1206, 0, sizeof l_K_1206);
l_K_1206 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
R23 l_NO_1207; memset(&l_NO_1207, 0, sizeof l_NO_1207);
S_R23(&l_NO_1207, ({ R23 rc1208; memset(&rc1208, 0, sizeof rc1208);  rc1208.f_OK = 0; rc1208.f_V = ((rt_int)0LL); rc1208; }), 0);
if ((l_K_1206 == g_N_INT))
{
{ R23 rv1209 = ({ R23 rc1210; memset(&rc1210, 0, sizeof rc1210);  rc1210.f_OK = 1; rc1210.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc1210; });
return rv1209; }
}
else if ((l_K_1206 == g_N_PAREN))
{
{ R23 rv1211 = r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv1211; }
}
else if ((l_K_1206 == g_N_BOOL))
{
{ R23 rv1212 = ({ R23 rc1213; memset(&rc1213, 0, sizeof rc1213);  rc1213.f_OK = 1; rc1213.f_V = ((*(R21 *)rt_nil_check(p_E))).f_IV; rc1213; });
return rv1212; }
}
else if ((l_K_1206 == g_N_UNOP))
{
{
R23 l_A_1214; memset(&l_A_1214, 0, sizeof l_A_1214);
S_R23(&l_A_1214, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
if ((!(l_A_1214).f_OK))
{
{ R23 rv1215 = l_NO_1207;
return rv1215; }
}
{ R23 rv1216 = ({ R23 rc1217; memset(&rc1217, 0, sizeof rc1217);  rc1217.f_OK = 1; rc1217.f_V = r_MANIFEST_ARITH(r_MK(rt_str("-", 1)), ((rt_int)0LL), (l_A_1214).f_V, ((*(R21 *)rt_nil_check(p_E))).f_LINE); rc1217; });
return rv1216; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R23 rv1218 = l_A_1214;
return rv1218; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R23 rv1219 = ({ R23 rc1220; memset(&rc1220, 0, sizeof rc1220);  rc1220.f_OK = (l_A_1214).f_OK; rc1220.f_V = rt_sub(((rt_int)1LL), (l_A_1214).f_V); rc1220; });
return rv1219; }
}
}
}
else if ((l_K_1206 == g_N_BINOP))
{
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R23 rv1221 = l_NO_1207;
return rv1221; }
}
{
R23 l_A_1222; memset(&l_A_1222, 0, sizeof l_A_1222);
S_R23(&l_A_1222, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_B_1223; memset(&l_B_1223, 0, sizeof l_B_1223);
S_R23(&l_B_1223, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
R10 l_OP_1224; memset(&l_OP_1224, 0, sizeof l_OP_1224);
S_R10(&l_OP_1224, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if (r_TEQS(l_OP_1224, rt_str("&", 1)))
{
if (((((l_A_1222).f_OK && ((l_A_1222).f_V == ((rt_int)0LL)))) || (((l_B_1223).f_OK && ((l_B_1223).f_V == ((rt_int)0LL))))))
{
{ R23 rv1225 = ({ R23 rc1226; memset(&rc1226, 0, sizeof rc1226);  rc1226.f_OK = 1; rc1226.f_V = ((rt_int)0LL); rc1226; });
return rv1225; }
}
if (((l_A_1222).f_OK && (l_B_1223).f_OK))
{
{ R23 rv1227 = ({ R23 rc1228; memset(&rc1228, 0, sizeof rc1228);  rc1228.f_OK = 1; rc1228.f_V = ((rt_int)1LL); rc1228; });
return rv1227; }
}
{ R23 rv1229 = l_NO_1207;
return rv1229; }
}
else if (r_TEQS(l_OP_1224, rt_str("!", 1)))
{
if (((((l_A_1222).f_OK && ((l_A_1222).f_V == ((rt_int)1LL)))) || (((l_B_1223).f_OK && ((l_B_1223).f_V == ((rt_int)1LL))))))
{
{ R23 rv1230 = ({ R23 rc1231; memset(&rc1231, 0, sizeof rc1231);  rc1231.f_OK = 1; rc1231.f_V = ((rt_int)1LL); rc1231; });
return rv1230; }
}
if (((l_A_1222).f_OK && (l_B_1223).f_OK))
{
{ R23 rv1232 = ({ R23 rc1233; memset(&rc1233, 0, sizeof rc1233);  rc1233.f_OK = 1; rc1233.f_V = ((rt_int)0LL); rc1233; });
return rv1232; }
}
{ R23 rv1234 = l_NO_1207;
return rv1234; }
}
if ((!(((l_A_1222).f_OK && (l_B_1223).f_OK))))
{
{ R23 rv1235 = l_NO_1207;
return rv1235; }
}
if ((!((r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_B)))))
{
{ R23 rv1236 = l_NO_1207;
return rv1236; }
}
if (((r_TEQS(l_OP_1224, rt_str("+", 1)) || r_TEQS(l_OP_1224, rt_str("-", 1))) || r_TEQS(l_OP_1224, rt_str("*", 1))))
{
{ R23 rv1237 = ({ R23 rc1238; memset(&rc1238, 0, sizeof rc1238);  rc1238.f_OK = 1; rc1238.f_V = r_MANIFEST_ARITH(l_OP_1224, (l_A_1222).f_V, (l_B_1223).f_V, ((*(R21 *)rt_nil_check(p_E))).f_LINE); rc1238; });
return rv1237; }
}
else if ((r_TEQS(l_OP_1224, rt_str("//", 2)) && (!((l_B_1223).f_V == ((rt_int)0LL)))))
{
{ R23 rv1239 = ({ R23 rc1240; memset(&rc1240, 0, sizeof rc1240);  rc1240.f_OK = 1; rc1240.f_V = rt_quot((l_A_1222).f_V, (l_B_1223).f_V); rc1240; });
return rv1239; }
}
else if ((r_TEQS(l_OP_1224, rt_str("MOD", 3)) && (!((l_B_1223).f_V == ((rt_int)0LL)))))
{
{ R23 rv1241 = ({ R23 rc1242; memset(&rc1242, 0, sizeof rc1242);  rc1242.f_OK = 1; rc1242.f_V = rt_rem((l_A_1222).f_V, (l_B_1223).f_V); rc1242; });
return rv1241; }
}
else if (r_TEQS(l_OP_1224, rt_str("=", 1)))
{
{ R23 rv1243 = ({ R23 rc1244; memset(&rc1244, 0, sizeof rc1244);  rc1244.f_OK = 1; rc1244.f_V = r_BOOL_INT(((l_A_1222).f_V == (l_B_1223).f_V)); rc1244; });
return rv1243; }
}
else if (r_TEQS(l_OP_1224, rt_str("<>", 2)))
{
{ R23 rv1245 = ({ R23 rc1246; memset(&rc1246, 0, sizeof rc1246);  rc1246.f_OK = 1; rc1246.f_V = r_BOOL_INT((!((l_A_1222).f_V == (l_B_1223).f_V))); rc1246; });
return rv1245; }
}
else if (r_TEQS(l_OP_1224, rt_str("<", 1)))
{
{ R23 rv1247 = ({ R23 rc1248; memset(&rc1248, 0, sizeof rc1248);  rc1248.f_OK = 1; rc1248.f_V = r_BOOL_INT(((l_A_1222).f_V < (l_B_1223).f_V)); rc1248; });
return rv1247; }
}
else if (r_TEQS(l_OP_1224, rt_str(">", 1)))
{
{ R23 rv1249 = ({ R23 rc1250; memset(&rc1250, 0, sizeof rc1250);  rc1250.f_OK = 1; rc1250.f_V = r_BOOL_INT(((l_A_1222).f_V > (l_B_1223).f_V)); rc1250; });
return rv1249; }
}
else if (r_TEQS(l_OP_1224, rt_str("<=", 2)))
{
{ R23 rv1251 = ({ R23 rc1252; memset(&rc1252, 0, sizeof rc1252);  rc1252.f_OK = 1; rc1252.f_V = r_BOOL_INT(((l_A_1222).f_V <= (l_B_1223).f_V)); rc1252; });
return rv1251; }
}
else if (r_TEQS(l_OP_1224, rt_str(">=", 2)))
{
{ R23 rv1253 = ({ R23 rc1254; memset(&rc1254, 0, sizeof rc1254);  rc1254.f_OK = 1; rc1254.f_V = r_BOOL_INT(((l_A_1222).f_V >= (l_B_1223).f_V)); rc1254; });
return rv1253; }
}
}
}
else if ((l_K_1206 == g_N_IN))
{
{
R23 l_A_1255; memset(&l_A_1255, 0, sizeof l_A_1255);
S_R23(&l_A_1255, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R23 l_L_1256; memset(&l_L_1256, 0, sizeof l_L_1256);
S_R23(&l_L_1256, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R23 l_U_1257; memset(&l_U_1257, 0, sizeof l_U_1257);
S_R23(&l_U_1257, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_1258; memset(&l_LO_1258, 0, sizeof l_LO_1258);
rt_int l_HI_1259; memset(&l_HI_1259, 0, sizeof l_HI_1259);
if ((!(((((l_A_1255).f_OK && (l_L_1256).f_OK) && (l_U_1257).f_OK) && r_MANIFEST_INT(((*(R21 *)rt_nil_check(p_E))).f_A)))))
{
{ R23 rv1260 = l_NO_1207;
return rv1260; }
}
l_LO_1258 = (l_L_1256).f_V;
l_HI_1259 = (l_U_1257).f_V;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_1258 = rt_add(l_LO_1258, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_1259 = rt_sub(l_HI_1259, ((rt_int)1LL));
}
{ R23 rv1261 = ({ R23 rc1262; memset(&rc1262, 0, sizeof rc1262);  rc1262.f_OK = 1; rc1262.f_V = r_BOOL_INT((((l_A_1255).f_V >= l_LO_1258) && ((l_A_1255).f_V <= l_HI_1259))); rc1262; });
return rv1261; }
}
}
else if (((l_K_1206 == g_N_NAME) || (l_K_1206 == g_TS_GEN)))
{
{
R12 * l_Y_1263; memset(&l_Y_1263, 0, sizeof l_Y_1263);
l_Y_1263 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R20 * l_B_1264; memset(&l_B_1264, 0, sizeof l_B_1264);
l_B_1264 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_1264 == NULL)) goto L_end1265;
{
if ((r_TEQ(((*(R20 *)rt_nil_check(l_B_1264))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME) && ((*(R20 *)rt_nil_check(l_B_1264))).f_HASMV))
{
{ R23 rv1266 = ({ R23 rc1267; memset(&rc1267, 0, sizeof rc1267);  rc1267.f_OK = 1; rc1267.f_V = ((*(R20 *)rt_nil_check(l_B_1264))).f_MV; rc1267; });
return rv1266; }
}
l_B_1264 = ((*(R20 *)rt_nil_check(l_B_1264))).f_NEXT;
}
RT_B_TICK();
} L_end1265: ;
if ((!(l_Y_1263 == NULL)))
{
if ((((((((*(R12 *)rt_nil_check(l_Y_1263))).f_KIND == g_Y_CONST) || (((*(R12 *)rt_nil_check(l_Y_1263))).f_KIND == g_Y_GEN)) || (((((*(R12 *)rt_nil_check(l_Y_1263))).f_KIND == g_Y_VAR) && ((*(R12 *)rt_nil_check(l_Y_1263))).f_INPUT)))) && ((*(R12 *)rt_nil_check(l_Y_1263))).f_HASMV))
{
{ R23 rv1268 = ({ R23 rc1269; memset(&rc1269, 0, sizeof rc1269);  rc1269.f_OK = 1; rc1269.f_V = ((*(R12 *)rt_nil_check(l_Y_1263))).f_MV; rc1269; });
return rv1268; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1263))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1270 = ({ R23 rc1271; memset(&rc1271, 0, sizeof rc1271);  rc1271.f_OK = 1; rc1271.f_V = ((*(R12 *)rt_nil_check(l_Y_1263))).f_MV; rc1271; });
return rv1270; }
}
}
}
}
}
else if ((l_K_1206 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1272 = ({ R23 rc1273; memset(&rc1273, 0, sizeof rc1273);  rc1273.f_OK = 1; rc1273.f_V = ((*(R12 *)rt_nil_check(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc1273; });
return rv1272; }
}
}
else if ((l_K_1206 == g_N_FIELD))
{
{ R23 rv1274 = r_ATTR_MANIFEST(p_E);
return rv1274; }
}
else if ((l_K_1206 == g_N_APPLY))
{
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R23 rv1275 = ({ R23 rc1276; memset(&rc1276, 0, sizeof rc1276);  rc1276.f_OK = 1; rc1276.f_V = r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK); rc1276; });
return rv1275; }
}
}
{ R23 rv1277 = l_NO_1207;
return rv1277; }
rt_raise(RT_X_INIT);
}
static R23 r_ATTR_MANIFEST(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1278; memset(&l_A_1278, 0, sizeof l_A_1278);
l_A_1278 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_NAME_1279; memset(&l_NAME_1279, 0, sizeof l_NAME_1279);
S_R10(&l_NAME_1279, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R22 * l_T_1280; memset(&l_T_1280, 0, sizeof l_T_1280);
l_T_1280 = NULL;
if ((((*(R21 *)rt_nil_check(l_A_1278))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1278))).f_A))).f_KIND == g_N_FIELD))
{
{
R21 * l_INNER_1281; memset(&l_INNER_1281, 0, sizeof l_INNER_1281);
l_INNER_1281 = ((*(R21 *)rt_nil_check(l_A_1278))).f_A;
if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1281))).f_NAME, rt_str("LENGTH", 6)))
{
if (r_TEQS(l_NAME_1279, rt_str("MAX", 3)))
{
{ R23 rv1282 = r_SOME(r_MAX_LENGTH());
return rv1282; }
}
else if (r_TEQS(l_NAME_1279, rt_str("MIN", 3)))
{
{ R23 rv1283 = r_SOME(((rt_int)0LL));
return rv1283; }
}
}
else if ((r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1281))).f_NAME, rt_str("NOM_PRECISION", 13)) || r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1281))).f_NAME, rt_str("IMP_PRECISION", 13))))
{
if (r_TEQS(l_NAME_1279, rt_str("MAX", 3)))
{
{ R23 rv1284 = r_SOME(r_MAX_FLOAT_PRECISION());
return rv1284; }
}
else if (r_TEQS(l_NAME_1279, rt_str("MIN", 3)))
{
{ R23 rv1285 = r_SOME(((rt_int)1LL));
return rv1285; }
}
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1281))).f_NAME, rt_str("SCALE", 5)))
{
if (r_TEQS(l_NAME_1279, rt_str("MAX", 3)))
{
{ R23 rv1286 = r_SOME(((rt_int)1000LL));
return rv1286; }
}
else if (r_TEQS(l_NAME_1279, rt_str("MIN", 3)))
{
{ R23 rv1287 = r_SOME(rt_neg(((rt_int)1000LL)));
return rv1287; }
}
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_INNER_1281))).f_NAME, rt_str("RADIX", 5)))
{
if (r_TEQS(l_NAME_1279, rt_str("MAX", 3)))
{
{ R23 rv1288 = r_SOME(((rt_int)1000LL));
return rv1288; }
}
else if (r_TEQS(l_NAME_1279, rt_str("MIN", 3)))
{
{ R23 rv1289 = r_SOME(((rt_int)2LL));
return rv1289; }
}
}
}
}
}
if (((((*(R21 *)rt_nil_check(l_A_1278))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_A_1278))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_1290; memset(&l_Y_1290, 0, sizeof l_Y_1290);
l_Y_1290 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1278))).f_NAME);
if ((l_Y_1290 == NULL))
{
{ R23 rv1291 = r_NO_MVAL();
return rv1291; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1290))).f_KIND == g_Y_TYPE))
{
l_T_1280 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(l_A_1278))).f_NAME, ((*(R21 *)rt_nil_check(l_A_1278))).f_LINE);
}
else if ((((((*(R12 *)rt_nil_check(l_Y_1290))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1290))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1290))).f_KIND == g_Y_GEN)))
{
l_T_1280 = ((*(R12 *)rt_nil_check(l_Y_1290))).f_T;
}
else
{
{ R23 rv1292 = r_NO_MVAL();
return rv1292; }
}
}
}
else if ((((*(R21 *)rt_nil_check(l_A_1278))).f_KIND == g_N_INT))
{
if ((r_TEQS(l_NAME_1279, rt_str("MIN", 3)) || r_TEQS(l_NAME_1279, rt_str("MAX", 3))))
{
{ R23 rv1293 = r_SOME(((*(R21 *)rt_nil_check(l_A_1278))).f_IV);
return rv1293; }
}
l_T_1280 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
else if ((((((((((((((*(R21 *)rt_nil_check(l_A_1278))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(l_A_1278))).f_KIND == g_N_BINOP)) || (((*(R21 *)rt_nil_check(l_A_1278))).f_KIND == g_N_UNOP)) || (((*(R21 *)rt_nil_check(l_A_1278))).f_KIND == g_N_FIELD)) || (((*(R21 *)rt_nil_check(l_A_1278))).f_KIND == g_N_INDEX)) || (((*(R21 *)rt_nil_check(l_A_1278))).f_KIND == g_N_APPLY)) || (((*(R21 *)rt_nil_check(l_A_1278))).f_KIND == g_N_REAL)) || (((*(R21 *)rt_nil_check(l_A_1278))).f_KIND == g_N_STR)) || (((*(R21 *)rt_nil_check(l_A_1278))).f_KIND == g_N_SUBSTR)) || (((*(R21 *)rt_nil_check(l_A_1278))).f_KIND == g_N_DEREF)) || (((*(R21 *)rt_nil_check(l_A_1278))).f_KIND == g_N_TYPESPEC)))
{
if ((((*(R21 *)rt_nil_check(l_A_1278))).f_KIND == g_N_PAREN))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1278))).f_A))).f_KIND == g_N_INT) && ((r_TEQS(l_NAME_1279, rt_str("MIN", 3)) || r_TEQS(l_NAME_1279, rt_str("MAX", 3))))))
{
{ R23 rv1294 = r_SOME(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1278))).f_A))).f_IV);
return rv1294; }
}
}
{
R14 l_SAVED_CODE_1295; memset(&l_SAVED_CODE_1295, 0, sizeof l_SAVED_CODE_1295);
S_R14(&l_SAVED_CODE_1295, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1296; memset(&rc1296, 0, sizeof rc1296);  rc1296.f_HEAD = NULL; rc1296.f_TAIL = NULL; rc1296; }), 0);
l_T_1280 = (r_EXPR(l_A_1278, NULL)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1295, 0);
}
}
else
{
{ R23 rv1297 = r_NO_MVAL();
return rv1297; }
}
if ((l_T_1280 == NULL))
{
{ R23 rv1298 = r_NO_MVAL();
return rv1298; }
}
{ R23 rv1299 = r_TYPE_ATTR_MANIFEST(l_T_1280, l_NAME_1279);
return rv1299; }
rt_raise(RT_X_INIT);
}
static R23 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R10 p_NAME) { RT_B_TICK(); 
R22 * l_T_1300; memset(&l_T_1300, 0, sizeof l_T_1300);
l_T_1300 = r_REAL_TYPE(p_T0);
rt_int l_K_1301; memset(&l_K_1301, 0, sizeof l_K_1301);
l_K_1301 = ((*(R22 *)rt_nil_check(l_T_1300))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R23 rv1302 = r_STATIC_SIZE(p_T0);
return rv1302; }
}
if ((l_K_1301 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R23 rv1303 = r_SOME(((*(R22 *)rt_nil_check(l_T_1300))).f_SCALE);
return rv1303; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1304 = r_SOME(((rt_int)2LL));
return rv1304; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && ((((*(R22 *)rt_nil_check(l_T_1300))).f_LO_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1305 = ((*(R22 *)rt_nil_check(l_T_1300))).f_MLO;
return rv1305; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && ((((*(R22 *)rt_nil_check(l_T_1300))).f_HI_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1306 = ((*(R22 *)rt_nil_check(l_T_1300))).f_MHI;
return rv1306; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && (((*(R22 *)rt_nil_check(l_T_1300))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1307 = r_SOME(rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL)));
return rv1307; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && (((*(R22 *)rt_nil_check(l_T_1300))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1308 = r_SOME(INT64_MAX);
return rv1308; }
}
}
else if ((l_K_1301 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R23 rv1309 = r_SOME(((*(R22 *)rt_nil_check(l_T_1300))).f_SCALE);
return rv1309; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R23 rv1310 = r_SOME(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1300))).f_SCALE));
return rv1310; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1311 = r_SOME(((rt_int)2LL));
return rv1311; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R23 rv1312 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1300))).f_SCALE, p_NAME));
return rv1312; }
}
}
else if ((l_K_1301 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1300))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1313 = ((*(R22 *)rt_nil_check(l_T_1300))).f_MLO;
return rv1313; }
}
{ R23 rv1314 = r_SOME(((rt_int)0LL));
return rv1314; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1300))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1315 = ((*(R22 *)rt_nil_check(l_T_1300))).f_MHI;
return rv1315; }
}
{ R23 rv1316 = r_SOME(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1300))).f_BASE))).f_NLITS, ((rt_int)1LL)));
return rv1316; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1300))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ R23 rv1317 = r_SOME(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1300))).f_BASE))).f_NLITS);
return rv1317; }
}
if (((((*(R22 *)rt_nil_check(l_T_1300))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_T_1300))).f_MHI).f_OK))
{
{ R23 rv1318 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R22 *)rt_nil_check(l_T_1300))).f_MHI).f_V, (((*(R22 *)rt_nil_check(l_T_1300))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1318; }
}
}
}
else if (((l_K_1301 == g_T_STR) || (l_K_1301 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R23 rv1319 = ((*(R22 *)rt_nil_check(l_T_1300))).f_MLEN;
return rv1319; }
}
}
else if ((l_K_1301 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R23 rv1320 = r_SOME(((*(R22 *)rt_nil_check(l_T_1300))).f_DIMS);
return rv1320; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1300))).f_DIMS == ((rt_int)1LL))))
{
if (((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1300))).f_BOUNDS))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1300))).f_BOUNDS))).f_MHI).f_OK))
{
{ R23 rv1321 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1300))).f_BOUNDS))).f_MHI).f_V, (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1300))).f_BOUNDS))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1321; }
}
}
}
else if ((l_K_1301 == g_T_REC))
{
{
R24 * l_F_1322; memset(&l_F_1322, 0, sizeof l_F_1322);
l_F_1322 = ((*(R22 *)rt_nil_check(l_T_1300))).f_FIELDS;
R25 * l_B_1323; memset(&l_B_1323, 0, sizeof l_B_1323);
l_B_1323 = ((*(R22 *)rt_nil_check(l_T_1300))).f_ARGS;
for (;;) {
if (((l_F_1322 == NULL) || (l_B_1323 == NULL))) goto L_end1324;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1322))).f_KIND == ((rt_int)0LL))))
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1322))).f_NAME, p_NAME))
{
if (((*(R25 *)rt_nil_check(l_B_1323))).f_ANYARG)
{
{ R23 rv1325 = r_NO_MVAL();
return rv1325; }
}
{ R23 rv1326 = ((*(R25 *)rt_nil_check(l_B_1323))).f_MLO;
return rv1326; }
}
l_B_1323 = ((*(R25 *)rt_nil_check(l_B_1323))).f_NEXT;
}
l_F_1322 = ((*(R24 *)rt_nil_check(l_F_1322))).f_NEXT;
}
RT_B_TICK();
} L_end1324: ;
}
}
{ R23 rv1327 = r_NO_MVAL();
return rv1327; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_ARITH(R10 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); fr_r_MANIFEST_ARITH *F = rt_alloc(sizeof *F); (void)F; F->p_OP = p_OP; F->p_A = p_A; F->p_B = p_B; F->p_LINE = p_LINE;
F->l_R_1328 = ((rt_int)0LL);
{ rt_frame xf1329; if (RT_TRY(xf1329)) {
{
if (r_TEQS(F->p_OP, rt_str("+", 1)))
{
F->l_R_1328 = rt_add(F->p_A, F->p_B);
}
else if (r_TEQS(F->p_OP, rt_str("-", 1)))
{
F->l_R_1328 = rt_sub(F->p_A, F->p_B);
}
else
{
F->l_R_1328 = rt_mul(F->p_A, F->p_B);
}
}
RT_POP(xf1329); } else { RT_POP(xf1329); int xf1329x = rt_xcur;
if (0 || xf1329x == x_OVERFLOW)
{
r_FAIL(F->p_LINE, rt_str("a manifest expression overflows (3.2.4.2)", 41));
}
else rt_raise(xf1329x); } }
{ rt_int rv1330 = F->l_R_1328;
return rv1330; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1331 = (!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv1331; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { RT_B_TICK(); 
if (p_B)
{
{ rt_int rv1332 = ((rt_int)1LL);
return rv1332; }
}
{ rt_int rv1333 = ((rt_int)0LL);
return rv1333; }
rt_raise(RT_X_INIT);
}
static R26 r_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_K_1334; memset(&l_K_1334, 0, sizeof l_K_1334);
l_K_1334 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_1334 == g_N_INT))
{
{ R26 rv1335 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1335; }
}
else if ((l_K_1334 == g_N_REAL))
{
{ R26 rv1336 = r_REAL_LITERAL(p_E);
return rv1336; }
}
else if ((l_K_1334 == g_N_BOOL))
{
{ R26 rv1337 = r_MKET(r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1337; }
}
else if ((l_K_1334 == g_N_NIL))
{
{ R26 rv1338 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1338; }
}
else if ((l_K_1334 == g_N_PAREN))
{
{
R26 l_V_1339; memset(&l_V_1339, 0, sizeof l_V_1339);
S_R26(&l_V_1339, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R10(&(l_V_1339).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1339).f_C), 0);
{ R26 rv1340 = l_V_1339;
return rv1340; }
}
}
else if ((l_K_1334 == g_N_STR))
{
{ R26 rv1341 = r_STRING_LITERAL(p_E);
return rv1341; }
}
else if ((l_K_1334 == g_N_BITS))
{
{ R26 rv1342 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R21 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1342; }
}
else if ((l_K_1334 == g_N_ENUMLIT))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{ R26 rv1343 = r_NAME_EXPR(p_E, p_WANT);
return rv1343; }
}
{ R26 rv1344 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1344; }
}
else if ((l_K_1334 == g_N_RECCONS))
{
{ R26 rv1345 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1345; }
}
else if ((l_K_1334 == g_N_ARRCONS))
{
{ R26 rv1346 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1346; }
}
else if ((l_K_1334 == g_N_TYPESPEC))
{
{ R26 rv1347 = r_TYPE_SPECIFIER(p_E);
return rv1347; }
}
else if ((l_K_1334 == g_N_QUAL))
{
{
rt_int l_SAVED_1348; memset(&l_SAVED_1348, 0, sizeof l_SAVED_1348);
l_SAVED_1348 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1349; memset(&l_SAVED_Q_1349, 0, sizeof l_SAVED_Q_1349);
l_SAVED_Q_1349 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1350; memset(&l_V_1350, 0, sizeof l_V_1350);
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
R23 l_P_1351; memset(&l_P_1351, 0, sizeof l_P_1351);
S_R23(&l_P_1351, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
}
}
S_R26(&l_V_1350, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1348;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1349;
{ R26 rv1352 = l_V_1350;
return rv1352; }
}
}
else if ((l_K_1334 == g_N_NEW))
{
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME))
{
{
R21 * l_N_1353; memset(&l_N_1353, 0, sizeof l_N_1353);
l_N_1353 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1353))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1353))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1354 = r_EXPR(l_N_1353, p_WANT);
return rv1354; }
}
}
{ R26 rv1355 = r_NEW_EXPR(p_E, p_WANT);
return rv1355; }
}
else if ((l_K_1334 == g_N_NAME))
{
{ R26 rv1356 = r_NAME_EXPR(p_E, p_WANT);
return rv1356; }
}
else if (((l_K_1334 == g_N_APPLY) && r_IS_STD_REPTYPE(((*(R21 *)rt_nil_check(p_E))).f_NAME)))
{
if (((((((*(R21 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))) || (!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL))) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an explicit-rep-converter converts one expression [3-41]", 56));
}
{
R21 * l_R_1357; memset(&l_R_1357, 0, sizeof l_R_1357);
l_R_1357 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_R_1357))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1358 = r_REP_CONVERTER(l_R_1357, ((*(R21 *)rt_nil_check(p_E))).f_A, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1358; }
}
}
else if ((l_K_1334 == g_N_APPLY))
{
{
R12 * l_Y_1359; memset(&l_Y_1359, 0, sizeof l_Y_1359);
l_Y_1359 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1359 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1359))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1359))).f_KIND == g_Y_CONST)))
{
{
R21 * l_N_1360; memset(&l_N_1360, 0, sizeof l_N_1360);
l_N_1360 = r_NEW_NODE(g_N_INDEX, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
R21 * l_A_1361; memset(&l_A_1361, 0, sizeof l_A_1361);
l_A_1361 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_A_1361))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_1360))).f_A = l_A_1361;
((*(R21 *)rt_nil_check(l_N_1360))).f_B = ((*(R21 *)rt_nil_check(p_E))).f_A;
{ R26 rv1362 = r_EXPR(l_N_1360, p_WANT);
return rv1362; }
}
}
}
{ R26 rv1363 = r_CALL_EXPR(p_E, p_WANT);
return rv1363; }
}
}
else if ((l_K_1334 == g_N_FIELD))
{
{ R26 rv1364 = r_FIELD_EXPR(p_E);
return rv1364; }
}
else if ((l_K_1334 == g_N_DEREF))
{
{
R26 l_B_1365; memset(&l_B_1365, 0, sizeof l_B_1365);
S_R26(&l_B_1365, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1365).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1366; memset(&l_TT_1366, 0, sizeof l_TT_1366);
l_TT_1366 = r_TARGET((l_B_1365).f_T);
{ R26 rv1367 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1366), (l_B_1365).f_C), l_TT_1366, 1, r_NO_TEXT());
return rv1367; }
}
}
}
else if ((l_K_1334 == g_N_INDEX))
{
if (((((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_APPLY) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME))) && r_IS_REPTYPE_NAME(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME)))
{
if (((((*(R21 *)rt_nil_check(p_E))).f_B == NULL) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_NEXT == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an explicit-rep-converter converts one expression [3-41]", 56));
}
{ R26 rv1368 = r_REP_CONVERTER(((*(R21 *)rt_nil_check(p_E))).f_A, ((*(R21 *)rt_nil_check(p_E))).f_B, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1368; }
}
{ R26 rv1369 = r_INDEX_EXPR(p_E);
return rv1369; }
}
else if ((l_K_1334 == g_N_SUBSTR))
{
{
R26 l_B_1370; memset(&l_B_1370, 0, sizeof l_B_1370);
S_R26(&l_B_1370, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1371; memset(&l_BT_1371, 0, sizeof l_BT_1371);
l_BT_1371 = r_REAL_TYPE((l_B_1370).f_T);
R10 l_LO_1372; memset(&l_LO_1372, 0, sizeof l_LO_1372);
R10 l_HI_1373; memset(&l_HI_1373, 0, sizeof l_HI_1373);
if (((((*(R22 *)rt_nil_check((l_B_1370).f_T))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_MKN(rt_str("SUBSTRING_", 10)))))
{
{
R27 * l_ARGS_1374; memset(&l_ARGS_1374, 0, sizeof l_ARGS_1374);
l_ARGS_1374 = r_VAL_ARG(l_B_1370, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(p_E))).f_C, g_M_IN, NULL)));
R12 * l_Y_1375; memset(&l_Y_1375, 0, sizeof l_Y_1375);
l_Y_1375 = r_USER_OPERATOR(r_MKN(rt_str("SUBSTRING_", 10)), l_ARGS_1374, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(l_Y_1375 == NULL)))
{
{ R26 rv1376 = r_CALL_SYM(l_Y_1375, l_ARGS_1374, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1376; }
}
if ((((*(R22 *)rt_nil_check((l_B_1370).f_T))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no operation for this abstract type: ", 37), r_MK(rt_str("SUBSTRING_", 10)));
}
}
}
if ((!(((((*(R22 *)rt_nil_check(l_BT_1371))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1371))).f_KIND == g_T_BITS)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R10(&l_LO_1372, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
S_R10(&l_HI_1373, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1371))).f_KIND == g_T_BITS))
{
{ R26 rv1377 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1370).f_C, l_LO_1372, l_HI_1373), r_BITS_TYPE(((rt_int)1LL)));
return rv1377; }
}
{
R22 * l_T_1378; memset(&l_T_1378, 0, sizeof l_T_1378);
l_T_1378 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1378))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1371))).f_BASE;
{ R26 rv1379 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1370).f_C, l_LO_1372, l_HI_1373), l_T_1378);
return rv1379; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1371))).f_KIND == g_T_BITS))
{
{ R26 rv1380 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1370).f_C, l_LO_1372, l_HI_1373), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1380; }
}
{
R22 * l_T_1381; memset(&l_T_1381, 0, sizeof l_T_1381);
l_T_1381 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1381))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1371))).f_BASE;
{ R26 rv1382 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1370).f_C, l_LO_1372, l_HI_1373), l_T_1381);
return rv1382; }
}
}
}
else if ((l_K_1334 == g_N_UNOP))
{
{ R26 rv1383 = r_UNARY(p_E);
return rv1383; }
}
else if ((l_K_1334 == g_N_BINOP))
{
{ R26 rv1384 = r_BINARY(p_E);
return rv1384; }
}
else if ((l_K_1334 == g_N_IN))
{
{ R26 rv1385 = r_IN_EXPR(p_E);
return rv1385; }
}
else if (((l_K_1334 == g_N_ANY) || (l_K_1334 == g_N_DONTCARE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((l_K_1334 == g_TS_GEN))
{
{
R21 * l_N_1386; memset(&l_N_1386, 0, sizeof l_N_1386);
l_N_1386 = r_NEW_NODE(g_N_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1386))).f_NAME, r_MKN(rt_b_cat(rt_str("\?", 1), r_STR(((*(R21 *)rt_nil_check(p_E))).f_NAME, (((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN))), 0);
if (r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_N_1386))).f_NAME))
{
{ R26 rv1387 = r_NAME_EXPR(l_N_1386, p_WANT);
return rv1387; }
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
else if (((((l_K_1334 == g_TS_NAME) || (l_K_1334 == g_TS_ARRAY)) || (l_K_1334 == g_TS_RECORD)) || (l_K_1334 == g_TS_ENUM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R10 r_INT_EXPR(R21 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1388; memset(&l_SAVED_1388, 0, sizeof l_SAVED_1388);
l_SAVED_1388 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1389; memset(&l_SAVED_Q_1389, 0, sizeof l_SAVED_Q_1389);
l_SAVED_Q_1389 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1390; memset(&l_V_1390, 0, sizeof l_V_1390);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1390, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1388;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1389;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1390).f_T)))).f_KIND == g_T_ENUM))
{
{ R10 rv1391 = (l_V_1390).f_C;
return rv1391; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1390).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1390).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1390).f_T));
}
{ R10 rv1392 = (l_V_1390).f_C;
return rv1392; }
rt_raise(RT_X_INIT);
}
static R10 r_BOOL_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1393; memset(&l_V_1393, 0, sizeof l_V_1393);
S_R26(&l_V_1393, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1393).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1393).f_T));
}
{ R10 rv1394 = (l_V_1393).f_C;
return rv1394; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { RT_B_TICK(); 
R22 * l_T_1395; memset(&l_T_1395, 0, sizeof l_T_1395);
l_T_1395 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R10(&((*(R22 *)rt_nil_check(l_T_1395))).f_LEN_C, r_NUM(p_LEN), 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1395))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1396 = l_T_1395;
return rv1396; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1397; memset(&l_T_1397, 0, sizeof l_T_1397);
S_R10(&l_T_1397, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1398; memset(&l_S_1398, 0, sizeof l_S_1398);
l_S_1398 = rt_b_str_new((l_T_1397).f_LEN, 0);
rt_b_assign(&l_S_1398, r_STR(l_T_1397, (l_T_1397).f_LEN));
rt_int l_POINT_1399; memset(&l_POINT_1399, 0, sizeof l_POINT_1399);
l_POINT_1399 = 0;
rt_int l_DIGITS_1400; memset(&l_DIGITS_1400, 0, sizeof l_DIGITS_1400);
l_DIGITS_1400 = ((rt_int)0LL);
{ rt_int it1402_lo = ((rt_int)0LL), it1402_hi = rt_sub((l_T_1397).f_LEN, ((rt_int)1LL));
for (rt_int it1402 = it1402_lo; it1402 <= it1402_hi; it1402++) {
{
if (rt_b_eq(rt_b_slice(l_S_1398, it1402, it1402), rt_str(".", 1)))
{
l_POINT_1399 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1398, it1402, it1402), rt_str("E", 1)))
{
goto L_end1401;
}
else
{
l_DIGITS_1400 = rt_add(l_DIGITS_1400, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it1402 == it1402_hi) break;
} } L_end1401: ;
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) || (!l_POINT_1399)))
{
r_CHECK_FIXED_LITERAL(p_E);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1403 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1397), r_NUM(((*(R21 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R21 *)rt_nil_check(p_E))).f_IV));
return rv1403; }
}
if ((!l_POINT_1399))
{
{ R26 rv1404 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1397)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1404; }
}
{
R22 * l_F_1405; memset(&l_F_1405, 0, sizeof l_F_1405);
l_F_1405 = r_NEW_TYP(g_T_FLOAT);
R10 l_C_1406; memset(&l_C_1406, 0, sizeof l_C_1406);
S_R10(&l_C_1406, l_T_1397, 0);
((*(R22 *)rt_nil_check(l_F_1405))).f_SCALE = r_MAX_INT(l_DIGITS_1400, r_QUAL_PREC());
if ((((*(R22 *)rt_nil_check(l_F_1405))).f_SCALE > r_MAX_FLOAT_PRECISION()))
{
((*(R22 *)rt_nil_check(l_F_1405))).f_SCALE = r_MAX_FLOAT_PRECISION();
}
if ((((*(R22 *)rt_nil_check(l_F_1405))).f_SCALE < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1405))).f_SCALE = ((rt_int)1LL);
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1405))).f_SCALE)))
{
((*(R22 *)rt_nil_check(l_F_1405))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_F_1405))).f_SCALE, ((rt_int)8LL));
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1405))).f_SCALE)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the float-literal is outside the range of FLOAT (3.3.2)", 68));
}
if (rt_b_eq(rt_b_slice(l_S_1398, rt_sub((l_T_1397).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1397).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
S_R10(&l_C_1406, r_FMT1(rt_str("@0", 2), l_T_1397), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1398, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
S_R10(&l_C_1406, r_FMT1(rt_str("0@", 2), l_T_1397), 0);
}
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_F_1405))).f_SCALE) == ((rt_int)7LL)))
{
{ R26 rv1407 = r_MKET(r_FMT1(rt_str("((double)(float)@)", 18), l_C_1406), l_F_1405);
return rv1407; }
}
{ R26 rv1408 = r_MKET(r_FMT1(rt_str("(@)", 3), l_C_1406), l_F_1405);
return rv1408; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_LITERAL_FITS(R21 * p_E, rt_int p_P) { RT_B_TICK(); 
R10 l_T_1409; memset(&l_T_1409, 0, sizeof l_T_1409);
S_R10(&l_T_1409, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1410; memset(&l_S_1410, 0, sizeof l_S_1410);
l_S_1410 = rt_b_str_new((l_T_1409).f_LEN, 0);
rt_b_assign(&l_S_1410, r_STR(l_T_1409, (l_T_1409).f_LEN));
rt_int l_INT_1411; memset(&l_INT_1411, 0, sizeof l_INT_1411);
l_INT_1411 = ((rt_int)0LL);
rt_int l_SIG_1412; memset(&l_SIG_1412, 0, sizeof l_SIG_1412);
l_SIG_1412 = 0;
rt_int l_POINT_1413; memset(&l_POINT_1413, 0, sizeof l_POINT_1413);
l_POINT_1413 = 0;
rt_int l_LEAD_1414; memset(&l_LEAD_1414, 0, sizeof l_LEAD_1414);
l_LEAD_1414 = ((rt_int)0LL);
rt_int l_I_1415; memset(&l_I_1415, 0, sizeof l_I_1415);
l_I_1415 = ((rt_int)0LL);
rt_int l_EXP_1416; memset(&l_EXP_1416, 0, sizeof l_EXP_1416);
l_EXP_1416 = ((rt_int)0LL);
for (;;) {
if ((l_I_1415 >= (l_T_1409).f_LEN)) goto L_end1417;
{
if (rt_b_eq(rt_b_slice(l_S_1410, l_I_1415, l_I_1415), rt_str("E", 1)))
{
goto L_end1417;
}
else if (rt_b_eq(rt_b_slice(l_S_1410, l_I_1415, l_I_1415), rt_str(".", 1)))
{
l_POINT_1413 = 1;
}
else if ((!rt_b_eq(rt_b_slice(l_S_1410, l_I_1415, l_I_1415), rt_str("0", 1))))
{
if ((!l_POINT_1413))
{
l_INT_1411 = rt_add(l_INT_1411, ((rt_int)1LL));
}
l_SIG_1412 = 1;
}
else if ((l_SIG_1412 && (!l_POINT_1413)))
{
l_INT_1411 = rt_add(l_INT_1411, ((rt_int)1LL));
}
else if ((l_POINT_1413 && (!l_SIG_1412)))
{
l_LEAD_1414 = rt_add(l_LEAD_1414, ((rt_int)1LL));
}
l_I_1415 = rt_add(l_I_1415, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1417: ;
if ((!l_SIG_1412))
{
{ rt_int rv1418 = 1;
return rv1418; }
}
if ((l_I_1415 < (l_T_1409).f_LEN))
{
{
rt_int l_NEG_1419; memset(&l_NEG_1419, 0, sizeof l_NEG_1419);
l_NEG_1419 = 0;
l_I_1415 = rt_add(l_I_1415, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1410, l_I_1415, l_I_1415), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1410, l_I_1415, l_I_1415), rt_str("+", 1))))
{
l_NEG_1419 = rt_b_eq(rt_b_slice(l_S_1410, l_I_1415, l_I_1415), rt_str("-", 1));
l_I_1415 = rt_add(l_I_1415, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1415 >= (l_T_1409).f_LEN)) goto L_end1420;
{
if ((l_EXP_1416 <= ((rt_int)100000LL)))
{
l_EXP_1416 = rt_add(rt_mul(l_EXP_1416, ((rt_int)10LL)), (rt_sub(r_CODE_OF(rt_b_slice(l_S_1410, l_I_1415, l_I_1415)), ((rt_int)48LL))));
}
l_I_1415 = rt_add(l_I_1415, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1420: ;
if (l_NEG_1419)
{
l_EXP_1416 = rt_neg(l_EXP_1416);
}
}
}
{
rt_int l_D_1421; memset(&l_D_1421, 0, sizeof l_D_1421);
l_D_1421 = rt_add(rt_sub(l_INT_1411, ((rt_int)1LL)), l_EXP_1416);
rt_int l_LIM_1422; memset(&l_LIM_1422, 0, sizeof l_LIM_1422);
l_LIM_1422 = ((rt_int)308LL);
if ((l_INT_1411 == ((rt_int)0LL)))
{
l_D_1421 = rt_add(rt_sub(rt_neg(l_LEAD_1414), ((rt_int)1LL)), l_EXP_1416);
}
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
l_LIM_1422 = ((rt_int)38LL);
}
{ rt_int rv1423 = ((l_D_1421 <= l_LIM_1422) && (l_D_1421 >= rt_add(rt_neg(l_LIM_1422), ((rt_int)1LL))));
return rv1423; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_LITERAL(R21 * p_E) { RT_B_TICK(); 
R10 l_T_1424; memset(&l_T_1424, 0, sizeof l_T_1424);
S_R10(&l_T_1424, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1425; memset(&l_S_1425, 0, sizeof l_S_1425);
l_S_1425 = rt_b_str_new((l_T_1424).f_LEN, 0);
rt_b_assign(&l_S_1425, r_STR(l_T_1424, (l_T_1424).f_LEN));
rt_int l_SIG_1426; memset(&l_SIG_1426, 0, sizeof l_SIG_1426);
l_SIG_1426 = ((rt_int)0LL);
rt_int l_FRAC_1427; memset(&l_FRAC_1427, 0, sizeof l_FRAC_1427);
l_FRAC_1427 = ((rt_int)0LL);
rt_int l_POINT_1428; memset(&l_POINT_1428, 0, sizeof l_POINT_1428);
l_POINT_1428 = 0;
rt_int l_EXP_1429; memset(&l_EXP_1429, 0, sizeof l_EXP_1429);
l_EXP_1429 = ((rt_int)0LL);
rt_int l_I_1430; memset(&l_I_1430, 0, sizeof l_I_1430);
l_I_1430 = ((rt_int)0LL);
for (;;) {
if ((l_I_1430 >= (l_T_1424).f_LEN)) goto L_end1431;
{
if (rt_b_eq(rt_b_slice(l_S_1425, l_I_1430, l_I_1430), rt_str("E", 1)))
{
goto L_end1431;
}
if (rt_b_eq(rt_b_slice(l_S_1425, l_I_1430, l_I_1430), rt_str(".", 1)))
{
l_POINT_1428 = 1;
}
else
{
if (((l_SIG_1426 > ((rt_int)0LL)) || (!rt_b_eq(rt_b_slice(l_S_1425, l_I_1430, l_I_1430), rt_str("0", 1)))))
{
l_SIG_1426 = rt_add(l_SIG_1426, ((rt_int)1LL));
}
if (l_POINT_1428)
{
l_FRAC_1427 = rt_add(l_FRAC_1427, ((rt_int)1LL));
}
}
l_I_1430 = rt_add(l_I_1430, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1431: ;
if ((rt_sub(l_I_1430, r_BOOL_INT(l_POINT_1428)) > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a fixed-literal has at most 1000 digits (3.2.2)", 47));
}
if ((l_I_1430 < (l_T_1424).f_LEN))
{
{
rt_int l_NEG_1432; memset(&l_NEG_1432, 0, sizeof l_NEG_1432);
l_NEG_1432 = 0;
l_I_1430 = rt_add(l_I_1430, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1425, l_I_1430, l_I_1430), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1425, l_I_1430, l_I_1430), rt_str("+", 1))))
{
l_NEG_1432 = rt_b_eq(rt_b_slice(l_S_1425, l_I_1430, l_I_1430), rt_str("-", 1));
l_I_1430 = rt_add(l_I_1430, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1430 >= (l_T_1424).f_LEN)) goto L_end1433;
{
if ((l_EXP_1429 <= ((rt_int)1000LL)))
{
l_EXP_1429 = rt_sub(rt_add(rt_mul(l_EXP_1429, ((rt_int)10LL)), r_CODE_OF(rt_b_slice(l_S_1425, l_I_1430, l_I_1430))), ((rt_int)48LL));
}
l_I_1430 = rt_add(l_I_1430, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1433: ;
if ((l_EXP_1429 > ((rt_int)1000LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the exponent of a literal must not exceed 1000 (3.2.2)", 54));
}
if (l_NEG_1432)
{
l_EXP_1429 = rt_neg(l_EXP_1429);
}
}
}
if (((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) && (((((*(R21 *)rt_nil_check(p_E))).f_IV > ((rt_int)1000LL)) || (((*(R21 *)rt_nil_check(p_E))).f_IV < rt_neg(((rt_int)1000LL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a literal must not exceed 1000 (3.2.2)", 51));
}
if ((l_SIG_1426 > ((rt_int)0LL)))
{
{
rt_int l_P10_1434; memset(&l_P10_1434, 0, sizeof l_P10_1434);
l_P10_1434 = rt_sub(rt_add(rt_sub(l_SIG_1426, ((rt_int)1LL)), l_EXP_1429), l_FRAC_1427);
rt_int l_BITS_1435; memset(&l_BITS_1435, 0, sizeof l_BITS_1435);
l_BITS_1435 = rt_add(rt_quot((rt_mul(l_P10_1434, ((rt_int)3321928LL))), ((rt_int)1000000LL)), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
if ((l_P10_1434 < ((rt_int)0LL)))
{
l_BITS_1435 = rt_add(rt_neg((rt_quot((rt_add(rt_mul(rt_neg(l_P10_1434), ((rt_int)3321929LL)), ((rt_int)999999LL))), ((rt_int)1000000LL)))), rt_mul(((*(R21 *)rt_nil_check(p_E))).f_IV, ((*(R21 *)rt_nil_check(p_E))).f_FL));
}
if ((l_BITS_1435 >= ((rt_int)63LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the literal is outside FIXED_MIN .. FIXED_MAX (3.2.2)", 66));
}
}
}
}
static R26 r_STRING_LITERAL(R21 * p_E) { RT_B_TICK(); 
R22 * l_CS_1436; memset(&l_CS_1436, 0, sizeof l_CS_1436);
l_CS_1436 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R21 * l_P_1437; memset(&l_P_1437, 0, sizeof l_P_1437);
l_P_1437 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R10 l_S_1438; memset(&l_S_1438, 0, sizeof l_S_1438);
S_R10(&l_S_1438, r_MK(rt_str("", 0)), 0);
if (((((*(R21 *)rt_nil_check(p_E))).f_NAME).f_LEN == ((rt_int)0LL)))
{
l_CS_1436 = r_DEFAULT_CHARSET(((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
else
{
{
R12 * l_Y_1439; memset(&l_Y_1439, 0, sizeof l_Y_1439);
l_Y_1439 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1439 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1439))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1436 = r_RESOLVE_USER_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1436)))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1436 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1436)))).f_BASE;
if ((!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(l_CS_1436))).f_LITS)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a character set has a literal of the form \\'C' (3.7.2): ", 56), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
}
for (;;) {
if ((l_P_1437 == NULL)) goto L_end1440;
{
if ((((*(R21 *)rt_nil_check(l_P_1437))).f_IV == g_K_STR))
{
if ((l_CS_1436 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R10(&l_S_1438, r_CAT(l_S_1438, ((*(R21 *)rt_nil_check(l_P_1437))).f_NAME), 0);
}
else
{
{
R10 l_Q_1441; memset(&l_Q_1441, 0, sizeof l_Q_1441);
S_R10(&l_Q_1441, ((*(R21 *)rt_nil_check(l_P_1437))).f_NAME, 0);
rstr l_QS_1442; memset(&l_QS_1442, 0, sizeof l_QS_1442);
l_QS_1442 = rt_b_str_new((l_Q_1441).f_LEN, 0);
rt_b_assign(&l_QS_1442, r_STR(l_Q_1441, (l_Q_1441).f_LEN));
{ rt_int it1444_lo = ((rt_int)0LL), it1444_hi = rt_sub((l_Q_1441).f_LEN, ((rt_int)1LL));
for (rt_int it1444 = it1444_lo; it1444 <= it1444_hi; it1444++) {
{
{
R10 l_LIT_1445; memset(&l_LIT_1445, 0, sizeof l_LIT_1445);
R12 * l_Y_1446; memset(&l_Y_1446, 0, sizeof l_Y_1446);
if (rt_b_eq(rt_b_slice(l_QS_1442, it1444, it1444), rt_str("'", 1)))
{
S_R10(&l_LIT_1445, r_MKN(rt_str("\\''''", 5)), 0);
}
else
{
S_R10(&l_LIT_1445, r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1442, it1444, it1444)), rt_str("'", 1))), 0);
}
l_Y_1446 = r_FIND_LITERAL(l_LIT_1445, l_CS_1436);
if ((l_Y_1446 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1437))).f_LINE, rt_b_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1442, it1444, it1444)));
}
S_R10(&l_S_1438, r_CATS(l_S_1438, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1446))).f_MV)), 0);
}
}
RT_B_TICK();
if (it1444 == it1444_hi) break;
} } L_end1443: ;
}
}
}
else
{
{
R12 * l_Y_1447; memset(&l_Y_1447, 0, sizeof l_Y_1447);
l_Y_1447 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(l_P_1437))).f_NAME, l_CS_1436);
if ((l_Y_1447 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1437))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R21 *)rt_nil_check(l_P_1437))).f_NAME);
}
S_R10(&l_S_1438, r_CATS(l_S_1438, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1447))).f_MV)), 0);
}
}
l_P_1437 = ((*(R21 *)rt_nil_check(l_P_1437))).f_NEXT;
}
RT_B_TICK();
} L_end1440: ;
{
R22 * l_T_1448; memset(&l_T_1448, 0, sizeof l_T_1448);
l_T_1448 = r_STR_TYPE(r_NUM((l_S_1438).f_LEN), r_SOME((l_S_1438).f_LEN));
((*(R22 *)rt_nil_check(l_T_1448))).f_BASE = l_CS_1436;
{ R26 rv1449 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1438), r_NUM((l_S_1438).f_LEN)), l_T_1448);
return rv1449; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_TS_1450; memset(&l_TS_1450, 0, sizeof l_TS_1450);
l_TS_1450 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_1450))).f_NAME, p_NAME, 0);
{ R22 * rv1451 = r_RESOLVE(l_TS_1450);
return rv1451; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1452; memset(&l_Y_1452, 0, sizeof l_Y_1452);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1453; memset(&l_WT_1453, 0, sizeof l_WT_1453);
l_WT_1453 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1453))).f_KIND == g_T_ENUM))
{
l_Y_1452 = r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_WT_1453);
if ((!(l_Y_1452 == NULL)))
{
{ R26 rv1454 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1452))).f_MV), r_ENUM_RESULT(l_Y_1452, p_WANT));
return rv1454; }
}
}
}
}
l_Y_1452 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1455; memset(&l_FOUND_1455, 0, sizeof l_FOUND_1455);
l_FOUND_1455 = NULL;
rt_int l_N_1456; memset(&l_N_1456, 0, sizeof l_N_1456);
l_N_1456 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1452 == NULL)) goto L_end1457;
{
if ((((*(R12 *)rt_nil_check(l_Y_1452))).f_KIND == g_Y_ENUMLIT))
{
if ((l_FOUND_1455 == NULL))
{
l_FOUND_1455 = l_Y_1452;
}
else if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1455))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1452))).f_T))).f_BASE)))
{
l_N_1456 = rt_add(l_N_1456, ((rt_int)1LL));
}
}
l_Y_1452 = r_LOOKUP_NEXT(l_Y_1452);
}
RT_B_TICK();
} L_end1457: ;
if ((l_FOUND_1455 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1456 > ((rt_int)0LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1458 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1455))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1455))).f_T);
return rv1458; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1459 = p_WANT;
return rv1459; }
}
if ((!(((*(R22 *)rt_nil_check(p_WANT))).f_REPS == NULL)))
{
{
R22 * l_T_1460; memset(&l_T_1460, 0, sizeof l_T_1460);
l_T_1460 = r_COPY_TYP(((*(R12 *)rt_nil_check(p_Y))).f_T);
((*(R22 *)rt_nil_check(l_T_1460))).f_REPS = ((*(R22 *)rt_nil_check(p_WANT))).f_REPS;
{ R22 * rv1461 = l_T_1460;
return rv1461; }
}
}
{ R22 * rv1462 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1462; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_OBJECT(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1463; memset(&l_Y_1463, 0, sizeof l_Y_1463);
l_Y_1463 = r_LOOKUP(p_NAME);
if ((l_Y_1463 == NULL))
{
{ rt_int rv1464 = 0;
return rv1464; }
}
{ rt_int rv1465 = (((((*(R12 *)rt_nil_check(l_Y_1463))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1463))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1463))).f_KIND == g_Y_ROUTINE));
return rv1465; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STD_REPTYPE(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1466 = (((((((((r_TEQS(p_NAME, rt_str("FIXED_STD", 9)) || r_TEQS(p_NAME, rt_str("FLOAT_STD", 9))) || r_TEQS(p_NAME, rt_str("BOOLEAN_STD", 11))) || r_TEQS(p_NAME, rt_str("ENUM_STD", 8))) || r_TEQS(p_NAME, rt_str("CHAR_STR_STD", 12))) || r_TEQS(p_NAME, rt_str("BIT_STD", 7))) || r_TEQS(p_NAME, rt_str("ARRAY_STD", 9))) || r_TEQS(p_NAME, rt_str("RECORD_STD", 10))) || r_TEQS(p_NAME, rt_str("PTR_STD", 7))) || r_TEQS(p_NAME, rt_str("SEMAPHORE_STD", 13)));
return rv1466; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_REPTYPE_NAME(R10 p_NAME) { RT_B_TICK(); 
if (((((((r_IS_STD_REPTYPE(p_NAME) || r_TEQS(p_NAME, rt_str("FIXED_REP", 9))) || r_TEQS(p_NAME, rt_str("ENUM_REP", 8))) || r_TEQS(p_NAME, rt_str("ENUM_VAL_REP", 12))) || r_TEQS(p_NAME, rt_str("CHAR_STR_REP", 12))) || r_TEQS(p_NAME, rt_str("ARRAY_REP", 9))) || r_TEQS(p_NAME, rt_str("RECORD_REP", 10))))
{
{ rt_int rv1467 = (r_LOOKUP(p_NAME) == NULL);
return rv1467; }
}
if ((!(r_ORIG_LOOKUP(p_NAME) == NULL)))
{
{ rt_int rv1468 = (((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(p_NAME)))).f_KIND == g_Y_REPTYPE);
return rv1468; }
}
{ rt_int rv1469 = 0;
return rv1469; }
rt_raise(RT_X_INIT);
}
static R26 r_REP_CONVERTER(R21 * p_S, R21 * p_E, rt_int p_LINE) { RT_B_TICK(); 
R26 l_V_1470; memset(&l_V_1470, 0, sizeof l_V_1470);
S_R26(&l_V_1470, r_EXPR(p_E, NULL), 0);
R21 * l_R_1471; memset(&l_R_1471, 0, sizeof l_R_1471);
l_R_1471 = r_NEW_NODE(g_N_REP, p_LINE);
R22 * l_T_1472; memset(&l_T_1472, 0, sizeof l_T_1472);
S_R10(&((*(R21 *)rt_nil_check(l_R_1471))).f_NAME, ((*(R21 *)rt_nil_check(p_S))).f_NAME, 0);
if ((((*(R21 *)rt_nil_check(p_S))).f_KIND == g_N_APPLY))
{
((*(R21 *)rt_nil_check(l_R_1471))).f_A = ((*(R21 *)rt_nil_check(p_S))).f_A;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1470).f_T)))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check((l_V_1470).f_T))).f_KIND == g_T_ABS)))
{
r_FAIL(p_LINE, rt_str("a representation is only for a member of a predefined type class (3.12.2)", 73));
}
l_T_1472 = r_COPY_TYP(r_REAL_TYPE((l_V_1470).f_T));
((*(R22 *)rt_nil_check(l_T_1472))).f_REPS = r_EXPAND_REP(l_R_1471, l_T_1472, p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_REPCONV = 1;
r_CHECK_REP_CLASS(l_T_1472, p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_REPCONV = 0;
if ((r_TEQS(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1472))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1472))).f_REPS))).f_A == NULL))))
{
{
R23 l_N_1473; memset(&l_N_1473, 0, sizeof l_N_1473);
S_R23(&l_N_1473, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1472))).f_REPS))).f_A), 0);
rt_int l_UNS_1474; memset(&l_UNS_1474, 0, sizeof l_UNS_1474);
l_UNS_1474 = ((rt_int)0LL);
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1472))).f_REPS))).f_A))).f_NEXT == NULL)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1472))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8)))
{
l_UNS_1474 = ((rt_int)1LL);
}
}
if ((l_N_1473).f_OK)
{
{ R26 rv1475 = r_MKET(r_FMT3(rt_str("rt_b_fixed_rep(@, @, @)", 23), (l_V_1470).f_C, r_NUM((l_N_1473).f_V), r_NUM(l_UNS_1474)), l_T_1472);
return rv1475; }
}
}
}
{ R26 rv1476 = r_MKET((l_V_1470).f_C, l_T_1472);
return rv1476; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1477; memset(&l_Y_1477, 0, sizeof l_Y_1477);
l_Y_1477 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1477 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_1477))).f_WITHV == ((rt_int)2LL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the variable is named by a WITH NAMING and not known in its statement (4.5.4): ", 79), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((((((*(R12 *)rt_nil_check(l_Y_1477))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL))) && (!((*(R12 *)rt_nil_check(l_Y_1477))).f_INPUT)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a type or reptype declaration is a closed scope: no variable from outside (3.12.1, 3.12.3): ", 92), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1477))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record-spec is a closed scope: no variable from outside (3.9.1): ", 67), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1477))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1477))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1478; memset(&l_WRITABLE_1478, 0, sizeof l_WRITABLE_1478);
l_WRITABLE_1478 = (r_SEG_VISIBLE(l_Y_1477, ((*(R21 *)rt_nil_check(p_E))).f_LINE) && r_CHECK_IMPORTED(l_Y_1477, ((*(R21 *)rt_nil_check(p_E))).f_LINE));
{ R26 rv1479 = r_MKLV(r_OBJ_ACCESS(l_Y_1477), ((*(R12 *)rt_nil_check(l_Y_1477))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1477))).f_KIND == g_Y_VAR) && l_WRITABLE_1478), r_NO_TEXT());
return rv1479; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1477))).f_KIND == g_Y_GEN))
{
{ R26 rv1480 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1477))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1477))).f_T);
return rv1480; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1477))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1481 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1481; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1477))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1477))).f_KIND == g_Y_BUILTIN)))
{
{
R21 * l_N_1482; memset(&l_N_1482, 0, sizeof l_N_1482);
l_N_1482 = r_NEW_NODE(g_N_APPLY, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1482))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1483 = r_CALL_EXPR(l_N_1482, p_WANT);
return rv1483; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R21 * p_E) { RT_B_TICK(); 
R21 * l_A_1484; memset(&l_A_1484, 0, sizeof l_A_1484);
l_A_1484 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))) && r_IS_NUMBER_LITERAL(l_A_1484)))
{
{ R26 rv1485 = r_EXPR(l_A_1484, NULL);
return rv1485; }
}
if ((((*(R21 *)rt_nil_check(l_A_1484))).f_KIND == g_N_INDEX))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1484))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1484))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1486; memset(&l_B_1486, 0, sizeof l_B_1486);
S_R26(&l_B_1486, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1484))).f_A))).f_A), 0);
R10 l_I_1487; memset(&l_I_1487, 0, sizeof l_I_1487);
S_R10(&l_I_1487, r_INT_EXPR(((*(R21 *)rt_nil_check(l_A_1484))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1486).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1488 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1486).f_C, l_I_1487, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1486).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1488; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1489 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1486).f_C, l_I_1487, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1486).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1489; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1484))).f_KIND == g_N_PAREN))
{
if (r_IS_TYPE_ATTR(((*(R21 *)rt_nil_check(l_A_1484))).f_A))
{
{ R26 rv1490 = r_ATTRIBUTE(r_TYPE_VALUE_OF(r_TYPE_ATTR_TYPE(((*(R21 *)rt_nil_check(l_A_1484))).f_A)), ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1490; }
}
}
if ((((*(R21 *)rt_nil_check(l_A_1484))).f_KIND == g_N_PAREN))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1484))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1484))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1484))).f_A))).f_A))).f_NAME))
{
{ R26 rv1491 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1484))).f_A))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_1484))).f_A))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1491; }
}
}
}
}
if ((((*(R21 *)rt_nil_check(l_A_1484))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1492; memset(&l_Y_1492, 0, sizeof l_Y_1492);
l_Y_1492 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_1484))).f_NAME);
if ((!(l_Y_1492 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1492))).f_KIND == g_Y_TYPE))
{
{ R26 rv1493 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1484))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1493; }
}
}
else if (r_IS_TYPE_WORD(((*(R21 *)rt_nil_check(l_A_1484))).f_NAME))
{
{ R26 rv1494 = r_TYPE_ATTRIBUTE(((*(R21 *)rt_nil_check(l_A_1484))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1494; }
}
}
}
{
R26 l_B_1495; memset(&l_B_1495, 0, sizeof l_B_1495);
S_R26(&l_B_1495, r_EXPR(l_A_1484, NULL), 0);
R22 * l_BT_1496; memset(&l_BT_1496, 0, sizeof l_BT_1496);
l_BT_1496 = (l_B_1495).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1496))).f_KIND == g_T_REC))
{
{
R24 * l_F_1497; memset(&l_F_1497, 0, sizeof l_F_1497);
l_F_1497 = r_FIND_VFIELD(l_BT_1496, ((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1497 == NULL)))
{
r_CHECK_VARIANT(l_F_1497, l_BT_1496, l_A_1484, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R24 *)rt_nil_check(l_F_1497))).f_KIND == ((rt_int)2LL)) && r_HAS_ANY(l_BT_1496)))
{
{ R26 rv1498 = r_MKET(r_FMT2(rt_str("rt_b_tag((@).@)", 15), (l_B_1495).f_C, ((*(R24 *)rt_nil_check(l_F_1497))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1497))).f_T);
return rv1498; }
}
{ R26 rv1499 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1495).f_C, ((*(R24 *)rt_nil_check(l_F_1497))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1497))).f_T, ((l_B_1495).f_LVAL && (((*(R24 *)rt_nil_check(l_F_1497))).f_KIND == ((rt_int)0LL))), (l_B_1495).f_C);
return rv1499; }
}
}
}
{ R26 rv1500 = r_ATTRIBUTE(l_B_1495, ((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1500; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_FIXED_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1501 = (r_IS_FIXED_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1501; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT))
{
{ rt_int rv1502 = 1;
return rv1502; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL))
{
if ((((*(R21 *)rt_nil_check(p_A))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv1503 = 1;
return rv1503; }
}
{
rstr l_S_1504; memset(&l_S_1504, 0, sizeof l_S_1504);
l_S_1504 = rt_b_str_new((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN, 0);
rt_b_assign(&l_S_1504, r_STR(((*(R21 *)rt_nil_check(p_A))).f_NAME, (((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN));
{ rt_int it1506_lo = ((rt_int)0LL), it1506_hi = rt_sub((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN, ((rt_int)1LL));
for (rt_int it1506 = it1506_lo; it1506 <= it1506_hi; it1506++) {
{
if (rt_b_eq(rt_b_slice(l_S_1504, it1506, it1506), rt_str(".", 1)))
{
{ rt_int rv1507 = 0;
return rv1507; }
}
}
RT_B_TICK();
if (it1506 == it1506_hi) break;
} } L_end1505: ;
}
{ rt_int rv1508 = 1;
return rv1508; }
}
{ rt_int rv1509 = 0;
return rv1509; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMBER_LITERAL(R21 * p_A) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1510 = (r_IS_NUMBER_LITERAL(((*(R21 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R21 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1510; }
}
{ rt_int rv1511 = ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_INT) || (((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_REAL));
return rv1511; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv1512 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1512; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R21 * p_BASE, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R23 l_TAGV_1513; memset(&l_TAGV_1513, 0, sizeof l_TAGV_1513);
S_R23(&l_TAGV_1513, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1513).f_OK))
{
r_FAILT(p_LINE, rt_b_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R24 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1513).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R23 r_TAG_VALUE(R22 * p_T, R10 p_TAGN) { RT_B_TICK(); 
R24 * l_F_1514; memset(&l_F_1514, 0, sizeof l_F_1514);
l_F_1514 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1515; memset(&l_A_1515, 0, sizeof l_A_1515);
l_A_1515 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1514 == NULL)) goto L_end1516;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1514))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1515 == NULL))
{
{ R23 rv1517 = r_NO_MVAL();
return rv1517; }
}
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1514))).f_NAME, p_TAGN))
{
if (((*(R25 *)rt_nil_check(l_A_1515))).f_ANYARG)
{
{ R23 rv1518 = r_NO_MVAL();
return rv1518; }
}
{ R23 rv1519 = ((*(R25 *)rt_nil_check(l_A_1515))).f_MLO;
return rv1519; }
}
l_A_1515 = ((*(R25 *)rt_nil_check(l_A_1515))).f_NEXT;
}
l_F_1514 = ((*(R24 *)rt_nil_check(l_F_1514))).f_NEXT;
}
RT_B_TICK();
} L_end1516: ;
{ R23 rv1520 = r_NO_MVAL();
return rv1520; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R21 * p_L, rt_int p_V, R22 * p_T) { RT_B_TICK(); 
R21 * l_P_1521; memset(&l_P_1521, 0, sizeof l_P_1521);
l_P_1521 = p_L;
for (;;) {
if ((l_P_1521 == NULL)) goto L_end1522;
{
if ((((*(R21 *)rt_nil_check(l_P_1521))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1521))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_P_1521))).f_B, p_T)).f_V)))
{
{ rt_int rv1523 = 1;
return rv1523; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1521, p_T)).f_V == p_V))
{
{ rt_int rv1524 = 1;
return rv1524; }
}
l_P_1521 = ((*(R21 *)rt_nil_check(l_P_1521))).f_NEXT;
}
RT_B_TICK();
} L_end1522: ;
{ rt_int rv1525 = 0;
return rv1525; }
rt_raise(RT_X_INIT);
}
static R26 r_VALUE_OR_TYPE(R21 * p_E) { RT_B_TICK(); 
if (r_IS_TYPE_NAME(p_E))
{
{ R26 rv1526 = r_TYPE_VALUE(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1526; }
}
{ R26 rv1527 = r_EXPR(p_E, NULL);
return rv1527; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R21 * p_E) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1528; memset(&l_A_1528, 0, sizeof l_A_1528);
S_R26(&l_A_1528, r_VALUE_OR_TYPE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_A), 0);
R10 l_I_1529; memset(&l_I_1529, 0, sizeof l_I_1529);
S_R10(&l_I_1529, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1528).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1530 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1528).f_C, (l_A_1528).f_C, l_I_1529, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1528).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1530; }
}
}
}
{ R26 rv1531 = r_INDEX_EXPR2(p_E);
return rv1531; }
rt_raise(RT_X_INIT);
}
static R10 r_INDEX_VALUE(R21 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1532; memset(&l_SAVED_1532, 0, sizeof l_SAVED_1532);
l_SAVED_1532 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_1533; memset(&l_SAVED_Q_1533, 0, sizeof l_SAVED_Q_1533);
l_SAVED_Q_1533 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1534; memset(&l_V_1534, 0, sizeof l_V_1534);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1534, r_EXPR(p_E, NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1532;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1533;
{ R10 rv1535 = r_INDEX_OF(l_V_1534, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1535; }
rt_raise(RT_X_INIT);
}
static R10 r_INDEX_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1536; memset(&l_T_1536, 0, sizeof l_T_1536);
l_T_1536 = r_REAL_TYPE((p_V).f_T);
if (((((*(R22 *)rt_nil_check((p_V).f_T))).f_KIND == g_T_ABS) || (((((*(R22 *)rt_nil_check(l_T_1536))).f_KIND == g_T_ENUM) && ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1536))).f_BASE))).f_UNORDERED || (!(((*(R22 *)rt_nil_check(l_T_1536))).f_REPS == NULL))))))))
{
{
R27 * l_ARGS_1537; memset(&l_ARGS_1537, 0, sizeof l_ARGS_1537);
l_ARGS_1537 = r_VAL_ARG(p_V, NULL);
R12 * l_Y_1538; memset(&l_Y_1538, 0, sizeof l_Y_1538);
l_Y_1538 = r_FIND_ROUTINE(r_MKN(rt_str("TO_FIXED", 8)), l_ARGS_1537, p_LINE, 0);
if ((l_Y_1538 == NULL))
{
r_FAILT(p_LINE, rt_str("an index of this type needs a TO_FIXED of the program (3.8.1): ", 63), r_TYPE_NAME((p_V).f_T));
}
{ R10 rv1539 = (r_CALL_SYM(l_Y_1538, l_ARGS_1537, p_LINE)).f_C;
return rv1539; }
}
}
if ((((*(R22 *)rt_nil_check(l_T_1536))).f_KIND == g_T_ENUM))
{
{ R10 rv1540 = (p_V).f_C;
return rv1540; }
}
if (((!(((*(R22 *)rt_nil_check(l_T_1536))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_1536))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(p_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((p_V).f_T));
}
{ R10 rv1541 = (p_V).f_C;
return rv1541; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R21 * p_E) { RT_B_TICK(); 
R26 l_B_1542; memset(&l_B_1542, 0, sizeof l_B_1542);
S_R26(&l_B_1542, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1543; memset(&l_T_1543, 0, sizeof l_T_1543);
l_T_1543 = r_REAL_TYPE((l_B_1542).f_T);
R21 * l_S_1544; memset(&l_S_1544, 0, sizeof l_S_1544);
l_S_1544 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_IX_1545; memset(&l_IX_1545, 0, sizeof l_IX_1545);
S_R10(&l_IX_1545, r_MK(rt_str("", 0)), 0);
rt_int l_N_1546; memset(&l_N_1546, 0, sizeof l_N_1546);
l_N_1546 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1543))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1544 == NULL)) goto L_end1547;
{
if ((l_N_1546 > ((rt_int)0LL)))
{
S_R10(&l_IX_1545, r_CATS(l_IX_1545, rt_str(", ", 2)), 0);
}
S_R10(&l_IX_1545, r_CAT(l_IX_1545, r_INDEX_VALUE(l_S_1544)), 0);
l_N_1546 = rt_add(l_N_1546, ((rt_int)1LL));
l_S_1544 = ((*(R21 *)rt_nil_check(l_S_1544))).f_NEXT;
}
RT_B_TICK();
} L_end1547: ;
if ((!(l_N_1546 == ((*(R22 *)rt_nil_check(l_T_1543))).f_DIMS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1546 == ((rt_int)1LL)))
{
{ R26 rv1548 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1542).f_C, l_IX_1545, (l_B_1542).f_C, (l_B_1542).f_C), ((*(R22 *)rt_nil_check(l_T_1543))).f_ELEM, (l_B_1542).f_LVAL, r_NO_TEXT());
return rv1548; }
}
{
R10 l_X_1549; memset(&l_X_1549, 0, sizeof l_X_1549);
S_R10(&l_X_1549, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1542).f_C, r_NUM(l_N_1546), (l_B_1542).f_C, (l_B_1542).f_C), 0);
{ R26 rv1550 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1549, l_IX_1545), ((*(R22 *)rt_nil_check(l_T_1543))).f_ELEM, (l_B_1542).f_LVAL, r_NO_TEXT());
return rv1550; }
}
rt_raise(RT_X_INIT);
}
static R10 r_OP_NAME(R10 p_OP, rt_int p_UNARY) { RT_B_TICK(); 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1551 = r_MKN(rt_str("NEGATE_", 7));
return rv1551; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1552 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1552; }
}
{ R10 rv1553 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1553; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R10 rv1554 = r_MKN(rt_str("ADD_", 4));
return rv1554; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R10 rv1555 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1555; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R10 rv1556 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1556; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R10 rv1557 = r_MKN(rt_str("DIVIDE_", 7));
return rv1557; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R10 rv1558 = r_MKN(rt_str("MODULUS_", 8));
return rv1558; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R10 rv1559 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1559; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R10 rv1560 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1560; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R10 rv1561 = r_MKN(rt_str("EQUAL_", 6));
return rv1561; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R10 rv1562 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1562; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R10 rv1563 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1563; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R10 rv1564 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1564; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R10 rv1565 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1565; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R10 rv1566 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1566; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1567 = r_MKN(rt_str("AND_", 4));
return rv1567; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1568 = r_MKN(rt_str("OR_", 3));
return rv1568; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R10 rv1569 = r_MKN(rt_str("XOR_", 4));
return rv1569; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R10 rv1570 = r_MKN(rt_str("IMPLIES_", 8));
return rv1570; }
}
{ R10 rv1571 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1571; }
rt_raise(RT_X_INIT);
}
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1572; memset(&l_A_1572, 0, sizeof l_A_1572);
l_A_1572 = ((R27 *)rt_b_new(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1572)), ({ R27 rc1573; memset(&rc1573, 0, sizeof rc1573);  rc1573.f_E = NULL; S_R26(&rc1573.f_V, p_V, 0); rc1573.f_HAVE = 1; rc1573.f_MODE = g_M_IN; rc1573.f_NEXT = p_NEXT; rc1573; }), 0);
{ R27 * rv1574 = l_A_1572;
return rv1574; }
rt_raise(RT_X_INIT);
}
static R27 * r_NODE_ARG(R21 * p_E, rt_int p_MODE, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1575; memset(&l_A_1575, 0, sizeof l_A_1575);
l_A_1575 = ((R27 *)rt_b_new(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1575)), ({ R27 rc1576; memset(&rc1576, 0, sizeof rc1576);  rc1576.f_E = p_E; S_R26(&rc1576.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1576.f_HAVE = 0; rc1576.f_MODE = p_MODE; rc1576.f_NEXT = p_NEXT; rc1576; }), 0);
{ R27 * rv1577 = l_A_1575;
return rv1577; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1578; memset(&l_Y_1578, 0, sizeof l_Y_1578);
l_Y_1578 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1578 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1578 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1579 = l_Y_1578;
return rv1579; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_USER_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1580; memset(&l_Y_1580, 0, sizeof l_Y_1580);
l_Y_1580 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_1580 == NULL)) goto L_end1581;
{
if ((((*(R12 *)rt_nil_check(l_Y_1580))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1582 = 1;
return rv1582; }
}
l_Y_1580 = r_LOOKUP_NEXT(l_Y_1580);
}
RT_B_TICK();
} L_end1581: ;
l_Y_1580 = r_LOOKUP(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))));
for (;;) {
if ((l_Y_1580 == NULL)) goto L_end1583;
{
if ((((*(R12 *)rt_nil_check(l_Y_1580))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1584 = 1;
return rv1584; }
}
l_Y_1580 = r_LOOKUP_NEXT(l_Y_1580);
}
RT_B_TICK();
} L_end1583: ;
{ rt_int rv1585 = 0;
return rv1585; }
rt_raise(RT_X_INIT);
}
static R27 * r_QUAL_ARGS(rt_int p_LINE) { RT_B_TICK(); 
R21 * l_Q_1586; memset(&l_Q_1586, 0, sizeof l_Q_1586);
l_Q_1586 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_R_1587; memset(&l_R_1587, 0, sizeof l_R_1587);
l_R_1587 = NULL;
if ((l_Q_1586 == NULL))
{
{ R27 * rv1588 = NULL;
return rv1588; }
}
if (((((*(R21 *)rt_nil_check(l_Q_1586))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_R_1587 = r_VAL_ARG(r_ENUM_LITERAL(r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_Q_1586))).f_NAME, (((*(R21 *)rt_nil_check(l_Q_1586))).f_NAME).f_LEN), p_LINE), r_ROUNDINGS_TYPE()), NULL);
}
if ((!(((*(R21 *)rt_nil_check(l_Q_1586))).f_B == NULL)))
{
l_R_1587 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(l_Q_1586))).f_B, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_R_1587);
}
{ R27 * rv1589 = l_R_1587;
return rv1589; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R10 p_NAME, R26 p_A, R21 * p_B, R21 * p_C, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_ARGS_1590; memset(&l_ARGS_1590, 0, sizeof l_ARGS_1590);
l_ARGS_1590 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1591; memset(&l_Y_1591, 0, sizeof l_Y_1591);
l_Y_1591 = r_USER_OPERATOR(p_NAME, l_ARGS_1590, p_LINE);
if ((l_Y_1591 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1592 = r_CALL_SYM(l_Y_1591, l_ARGS_1590, p_LINE);
return rv1592; }
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
{ R10 rv1593 = p_C;
return rv1593; }
}
if ((p_STO > p_SFROM))
{
{ R10 rv1594 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1594; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv1595 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1595; }
}
{ R10 rv1596 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1596; }
rt_raise(RT_X_INIT);
}
static R10 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R10 rv1597 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1597; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
R22 * l_RT_1598; memset(&l_RT_1598, 0, sizeof l_RT_1598);
l_RT_1598 = r_REAL_TYPE(p_T);
R22 * l_VT_1599; memset(&l_VT_1599, 0, sizeof l_VT_1599);
l_VT_1599 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1599))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1598))).f_KIND == g_T_PTR)))
{
{ R10 rv1600 = (p_V).f_C;
return rv1600; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1599))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1599)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R10 rv1601 = (p_V).f_C;
return rv1601; }
}
if ((!r_SAME_CLASS(l_RT_1598, l_VT_1599)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1599), (r_TYPE_NAME(l_VT_1599)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1598), (r_TYPE_NAME(l_RT_1598)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1598))).f_KIND == g_T_INT))
{
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_RT_1598))).f_SCALE))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE == ((*(R22 *)rt_nil_check(l_RT_1598))).f_SCALE))
{
{ R10 rv1602 = r_RANGE_CHECK(l_RT_1598, (p_V).f_C, p_SELF);
return rv1602; }
}
{ R10 rv1603 = r_RANGE_CHECK(l_RT_1598, r_FMT3(rt_str("rt_b_conv(@, @, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(l_RT_1598))).f_SCALE)), p_SELF);
return rv1603; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1598))).f_KIND == g_T_FLOAT))
{
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_RT_1598))).f_SCALE) < r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1599))).f_SCALE)))
{
{ R10 rv1604 = r_RANGE_CHECK(l_RT_1598, r_FMT3(rt_str("rt_b_fconv(@, @, @, 1)", 22), (p_V).f_C, r_SINGLE_C(((*(R22 *)rt_nil_check(l_RT_1598))).f_SCALE), r_FLOAT_TRUNC()), p_SELF);
return rv1604; }
}
{ R10 rv1605 = r_RANGE_CHECK(l_RT_1598, (p_V).f_C, p_SELF);
return rv1605; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1598))).f_KIND == g_T_ENUM))
{
if (((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1598))).f_BASE))).f_UNORDERED && ((r_HAS_VALUES(l_RT_1598) || r_HAS_VALUES(l_VT_1599)))) && (!r_SAME_REPS(l_RT_1598, l_VT_1599))))
{
r_FAIL(p_LINE, rt_str("an UNORDERED value with ENUM_VAL_REP is assigned only with the same reptype (3.4.5)", 83));
}
{ R10 rv1606 = r_RANGE_CHECK(l_RT_1598, (p_V).f_C, p_SELF);
return rv1606; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1598))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1598))).f_KIND == g_T_BITS)))
{
r_SAME_CHARSET(l_RT_1598, l_VT_1599, p_LINE);
if (((((*(R22 *)rt_nil_check(l_RT_1598))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1599))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1598))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1599))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1598))).f_KIND == g_T_PTR))
{
if ((!r_IDENTICAL_TYPE(r_TARGET(l_RT_1598), r_TARGET(l_VT_1599))))
{
r_FAIL(p_LINE, rt_str("the ELEMENT_TYPE of the pointers are not identical (3.10.5)", 59));
}
{ R10 rv1607 = r_TARGET_ARGS_CHECK(r_TARGET(l_RT_1598), r_TARGET(l_VT_1599), (p_V).f_C);
return rv1607; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1598))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1598)) && (!r_HAS_ANY(l_VT_1599))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1598))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1599))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1598))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1598))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1599))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
if ((!r_SAME_EXTENTS(l_RT_1598, l_VT_1599)))
{
r_FAIL(p_LINE, rt_str("the arrays have different EXTENT attributes (3.8.5)", 51));
}
}
{ R10 rv1608 = (p_V).f_C;
return rv1608; }
rt_raise(RT_X_INIT);
}
static R10 r_STORE_CODE(R22 * p_T, R10 p_LV, R26 p_V, rt_int p_LINE, R10 p_SELF) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1609; memset(&l_ARGS_1609, 0, sizeof l_ARGS_1609);
l_ARGS_1609 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1610; memset(&l_Y_1610, 0, sizeof l_Y_1610);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_SQUAL == NULL)))
{
{
R21 * l_SAVED_Q_1611; memset(&l_SAVED_Q_1611, 0, sizeof l_SAVED_Q_1611);
l_SAVED_Q_1611 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_X_1612; memset(&l_X_1612, 0, sizeof l_X_1612);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
l_X_1612 = r_QUAL_ARGS(p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1611;
if ((!(l_X_1612 == NULL)))
{
{
R27 * l_P_1613; memset(&l_P_1613, 0, sizeof l_P_1613);
l_P_1613 = l_X_1612;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_P_1613))).f_NEXT == NULL)) goto L_end1614;
{
l_P_1613 = ((*(R27 *)rt_nil_check(l_P_1613))).f_NEXT;
}
RT_B_TICK();
} L_end1614: ;
((*(R27 *)rt_nil_check(l_P_1613))).f_NEXT = ((*(R27 *)rt_nil_check(l_ARGS_1609))).f_NEXT;
((*(R27 *)rt_nil_check(l_ARGS_1609))).f_NEXT = l_X_1612;
}
}
}
}
{
R27 * l_LAST_1615; memset(&l_LAST_1615, 0, sizeof l_LAST_1615);
l_LAST_1615 = l_ARGS_1609;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_LAST_1615))).f_NEXT == NULL)) goto L_end1616;
{
l_LAST_1615 = ((*(R27 *)rt_nil_check(l_LAST_1615))).f_NEXT;
}
RT_B_TICK();
} L_end1616: ;
((*(R27 *)rt_nil_check(l_LAST_1615))).f_MODE = g_M_OUT;
l_Y_1610 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1609, p_LINE, 0);
if ((l_Y_1610 == NULL))
{
((*(R27 *)rt_nil_check(l_LAST_1615))).f_MODE = g_M_INOUT;
l_Y_1610 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1609, p_LINE, 0);
}
}
if ((l_Y_1610 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1617 = r_CATS((r_CALL_SYM(l_Y_1610, l_ARGS_1609, p_LINE)).f_C, rt_str(";", 1));
return rv1617; }
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
if ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, (p_V).f_T)))
{
{ R10 rv1618 = r_COMPONENT_STORE(p_T, (p_V).f_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF), p_LINE);
return rv1618; }
}
}
{ R10 rv1619 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1619; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ABS_PART(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ rt_int rv1620 = 1;
return rv1620; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{ rt_int rv1621 = r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM);
return rv1621; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R24 * l_F_1622; memset(&l_F_1622, 0, sizeof l_F_1622);
l_F_1622 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1622 == NULL)) goto L_end1623;
{
if ((((*(R24 *)rt_nil_check(l_F_1622))).f_KIND == ((rt_int)0LL)))
{
if (r_HAS_ABS_PART(((*(R24 *)rt_nil_check(l_F_1622))).f_T))
{
{ rt_int rv1624 = 1;
return rv1624; }
}
}
l_F_1622 = ((*(R24 *)rt_nil_check(l_F_1622))).f_NEXT;
}
RT_B_TICK();
} L_end1623: ;
}
}
{ rt_int rv1625 = 0;
return rv1625; }
rt_raise(RT_X_INIT);
}
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT) { RT_B_TICK(); 
if (((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_KIND == g_T_ARR))))
{
{ rt_int rv1626 = 0;
return rv1626; }
}
if ((!r_IS_NUMERIC_OR_ENUM(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM))))
{
{ rt_int rv1627 = 0;
return rv1627; }
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1628 = 0;
return rv1628; }
}
{ rt_int rv1629 = (!r_SAME_RANGE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM));
return rv1629; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R10 p_LV, R10 p_RV, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R10 rv1630 = r_STORE_CODE(p_T, p_LV, r_MKET(p_RV, p_VT), p_LINE, r_NO_TEXT());
return rv1630; }
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, p_VT)))))
{
{
R10 l_D_1631; memset(&l_D_1631, 0, sizeof l_D_1631);
S_R10(&l_D_1631, r_NEW_NAME(rt_str("ad", 2)), 0);
R10 l_S_1632; memset(&l_S_1632, 0, sizeof l_S_1632);
S_R10(&l_S_1632, r_NEW_NAME(rt_str("as", 2)), 0);
R10 l_I_1633; memset(&l_I_1633, 0, sizeof l_I_1633);
S_R10(&l_I_1633, r_NEW_NAME(rt_str("ai", 2)), 0);
R10 l_N_1634; memset(&l_N_1634, 0, sizeof l_N_1634);
S_R10(&l_N_1634, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R22 * l_VE_1635; memset(&l_VE_1635, 0, sizeof l_VE_1635);
l_VE_1635 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM;
R10 l_R_1636; memset(&l_R_1636, 0, sizeof l_R_1636);
S_R10(&l_R_1636, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1631, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1636, r_FMT3(rt_str("@@ = @; if (!rt_b_same_extents(", 31), l_R_1636, l_S_1632, p_RV), 0);
S_R10(&l_R_1636, r_FMT4(rt_str("@@, @->lo, @->hi, ", 18), l_R_1636, l_N_1634, l_D_1631, l_D_1631), 0);
S_R10(&l_R_1636, r_FMT3(rt_str("@@.lo, @.hi)) rt_raise(RT_B_SIZE); ", 35), l_R_1636, l_S_1632, l_S_1632), 0);
S_R10(&l_R_1636, r_FMT4(rt_str("@rt_int @n = rt_b_extent(@, @->lo, ", 35), l_R_1636, l_I_1633, l_N_1634, l_D_1631), 0);
S_R10(&l_R_1636, r_FMT2(rt_str("@@->hi);", 8), l_R_1636, l_D_1631), 0);
if (r_ELEMENTS_NEED_CHECK(p_T, p_VT))
{
S_R10(&l_R_1636, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1636, l_I_1633, l_I_1633, l_I_1633), 0);
S_R10(&l_R_1636, r_FMT3(rt_str("@@++) (void)@;", 14), l_R_1636, l_I_1633, r_RANGE_CHECK(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_S_1632, l_I_1633), r_NO_TEXT())), 0);
}
S_R10(&l_R_1636, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1636, l_I_1633, l_I_1633, l_I_1633), 0);
if (((r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_REC)) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_ARR)))
{
S_R10(&l_R_1636, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1636, l_I_1633, r_COMPONENT_STORE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, l_VE_1635, r_FMT2(rt_str("@->p[@]", 7), l_D_1631, l_I_1633), r_FMT2(rt_str("@.p[@]", 6), l_S_1632, l_I_1633), p_LINE)), 0);
}
else
{
S_R10(&l_R_1636, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1636, l_I_1633, r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@->p[@]", 7), l_D_1631, l_I_1633), r_FMT2(rt_str("@.p[@]", 6), l_S_1632, l_I_1633))), 0);
}
{ R10 rv1637 = l_R_1636;
return rv1637; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_D_1638; memset(&l_D_1638, 0, sizeof l_D_1638);
S_R10(&l_D_1638, r_NEW_NAME(rt_str("rd", 2)), 0);
R10 l_S_1639; memset(&l_S_1639, 0, sizeof l_S_1639);
S_R10(&l_S_1639, r_NEW_NAME(rt_str("rs", 2)), 0);
R24 * l_F_1640; memset(&l_F_1640, 0, sizeof l_F_1640);
l_F_1640 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1641; memset(&l_R_1641, 0, sizeof l_R_1641);
S_R10(&l_R_1641, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1638, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R10(&l_R_1641, r_FMT3(rt_str("@@ = @;", 7), l_R_1641, l_S_1639, p_RV), 0);
for (;;) {
if ((l_F_1640 == NULL)) goto L_end1642;
{
{
R10 l_DF_1643; memset(&l_DF_1643, 0, sizeof l_DF_1643);
S_R10(&l_DF_1643, r_FMT2(rt_str("@->@", 4), l_D_1638, ((*(R24 *)rt_nil_check(l_F_1640))).f_CNAME), 0);
R10 l_SF_1644; memset(&l_SF_1644, 0, sizeof l_SF_1644);
S_R10(&l_SF_1644, r_FMT2(rt_str("@.@", 3), l_S_1639, ((*(R24 *)rt_nil_check(l_F_1640))).f_CNAME), 0);
if (((((*(R24 *)rt_nil_check(l_F_1640))).f_KIND == ((rt_int)1LL)) || (((((*(R24 *)rt_nil_check(l_F_1640))).f_KIND == ((rt_int)2LL)) && (!r_HAS_ANY(p_T))))))
{
S_R10(&l_R_1641, r_FMT2(rt_str("@ if (!(@)) rt_raise(RT_B_TYPE_MISMATCH);", 41), l_R_1641, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1640))).f_T, l_DF_1643, l_SF_1644)), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1640))).f_KIND == ((rt_int)2LL)))
{
S_R10(&l_R_1641, r_FMT3(rt_str("@ @ = @;", 8), l_R_1641, l_DF_1643, l_SF_1644), 0);
}
else
{
S_R10(&l_R_1641, r_FMT2(rt_str("@ @", 3), l_R_1641, r_COMPONENT_STORE(((*(R24 *)rt_nil_check(l_F_1640))).f_T, ((*(R24 *)rt_nil_check(l_F_1640))).f_T, l_DF_1643, l_SF_1644, p_LINE)), 0);
}
}
l_F_1640 = ((*(R24 *)rt_nil_check(l_F_1640))).f_NEXT;
}
RT_B_TICK();
} L_end1642: ;
{ R10 rv1645 = r_CATS(l_R_1641, rt_str(" }", 2));
return rv1645; }
}
}
{ R10 rv1646 = r_ASSIGN_CODE(p_T, p_LV, p_RV);
return rv1646; }
rt_raise(RT_X_INIT);
}
static R10 r_COMPONENT_EQUAL(R22 * p_T, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1647; memset(&l_ARGS_1647, 0, sizeof l_ARGS_1647);
l_ARGS_1647 = r_VAL_ARG(r_MKET(p_A, p_T), r_VAL_ARG(r_MKET(p_B, p_T), NULL));
R12 * l_Y_1648; memset(&l_Y_1648, 0, sizeof l_Y_1648);
l_Y_1648 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1647, p_LINE);
if ((l_Y_1648 == NULL))
{
r_FAILT(p_LINE, rt_str("no EQUAL_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R10 rv1649 = (r_CALL_SYM(l_Y_1648, l_ARGS_1647, p_LINE)).f_C;
return rv1649; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1650; memset(&l_X_1650, 0, sizeof l_X_1650);
S_R10(&l_X_1650, r_NEW_NAME(rt_str("ea", 2)), 0);
R10 l_Z_1651; memset(&l_Z_1651, 0, sizeof l_Z_1651);
S_R10(&l_Z_1651, r_NEW_NAME(rt_str("eb", 2)), 0);
R10 l_I_1652; memset(&l_I_1652, 0, sizeof l_I_1652);
S_R10(&l_I_1652, r_NEW_NAME(rt_str("ei", 2)), 0);
R10 l_N_1653; memset(&l_N_1653, 0, sizeof l_N_1653);
S_R10(&l_N_1653, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R10 l_R_1654; memset(&l_R_1654, 0, sizeof l_R_1654);
S_R10(&l_R_1654, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1650, p_A, l_Z_1651), 0);
S_R10(&l_R_1654, r_FMT4(rt_str("@@; int @r = rt_b_same_extents(@, ", 34), l_R_1654, p_B, l_I_1652, l_N_1653), 0);
S_R10(&l_R_1654, r_FMT4(rt_str("@@.lo, @.hi, @.lo, ", 19), l_R_1654, l_X_1650, l_X_1650, l_Z_1651), 0);
S_R10(&l_R_1654, r_FMT4(rt_str("@@.hi); rt_int @n = rt_b_extent(@, ", 35), l_R_1654, l_Z_1651, l_I_1652, l_N_1653), 0);
S_R10(&l_R_1654, r_FMT3(rt_str("@@.lo, @.hi);", 13), l_R_1654, l_X_1650, l_X_1650), 0);
S_R10(&l_R_1654, r_FMT4(rt_str("@ for (rt_int @ = 0; @r && @ < ", 31), l_R_1654, l_I_1652, l_I_1652, l_I_1652), 0);
S_R10(&l_R_1654, r_FMT4(rt_str("@@n; @++) @r = ", 15), l_R_1654, l_I_1652, l_I_1652, l_I_1652), 0);
S_R10(&l_R_1654, r_FMT2(rt_str("@@;", 3), l_R_1654, r_COMPONENT_EQUAL(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_X_1650, l_I_1652), r_FMT2(rt_str("@.p[@]", 6), l_Z_1651, l_I_1652), p_LINE)), 0);
{ R10 rv1655 = r_FMT2(rt_str("@ @r; })", 8), l_R_1654, l_I_1652);
return rv1655; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R10 l_X_1656; memset(&l_X_1656, 0, sizeof l_X_1656);
S_R10(&l_X_1656, r_NEW_NAME(rt_str("ra", 2)), 0);
R10 l_Z_1657; memset(&l_Z_1657, 0, sizeof l_Z_1657);
S_R10(&l_Z_1657, r_NEW_NAME(rt_str("rb", 2)), 0);
R24 * l_F_1658; memset(&l_F_1658, 0, sizeof l_F_1658);
l_F_1658 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R10 l_R_1659; memset(&l_R_1659, 0, sizeof l_R_1659);
S_R10(&l_R_1659, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1656, p_A, l_Z_1657), 0);
R10 l_EQ_1660; memset(&l_EQ_1660, 0, sizeof l_EQ_1660);
S_R10(&l_EQ_1660, r_MK(rt_str("1", 1)), 0);
S_R10(&l_R_1659, r_FMT2(rt_str("@@;", 3), l_R_1659, p_B), 0);
for (;;) {
if ((l_F_1658 == NULL)) goto L_end1661;
{
{
R10 l_C_1662; memset(&l_C_1662, 0, sizeof l_C_1662);
S_R10(&l_C_1662, r_COMPONENT_EQUAL(((*(R24 *)rt_nil_check(l_F_1658))).f_T, r_FMT2(rt_str("@.@", 3), l_X_1656, ((*(R24 *)rt_nil_check(l_F_1658))).f_CNAME), r_FMT2(rt_str("@.@", 3), l_Z_1657, ((*(R24 *)rt_nil_check(l_F_1658))).f_CNAME), p_LINE), 0);
if (((((*(R24 *)rt_nil_check(l_F_1658))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R10(&l_EQ_1660, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1660, r_VARIANT_COND(l_F_1658, p_T, l_X_1656), l_C_1662), 0);
}
else
{
S_R10(&l_EQ_1660, r_FMT2(rt_str("@ && @", 6), l_EQ_1660, l_C_1662), 0);
}
}
l_F_1658 = ((*(R24 *)rt_nil_check(l_F_1658))).f_NEXT;
}
RT_B_TICK();
} L_end1661: ;
{ R10 rv1663 = r_FMT2(rt_str("@ @; })", 7), l_R_1659, l_EQ_1660);
return rv1663; }
}
}
{ R10 rv1664 = r_EQUAL_CODE(p_T, p_A, p_B);
return rv1664; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R21 * p_E) { RT_B_TICK(); 
R26 l_A_1665; memset(&l_A_1665, 0, sizeof l_A_1665);
S_R26(&l_A_1665, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1666; memset(&l_T_1666, 0, sizeof l_T_1666);
l_T_1666 = (l_A_1665).f_T;
R10 l_OP_1667; memset(&l_OP_1667, 0, sizeof l_OP_1667);
S_R10(&l_OP_1667, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
if (((((*(R22 *)rt_nil_check(l_T_1666))).f_GENP).f_LEN > ((rt_int)0LL)))
{
r_REQUIRE_WHERE(r_OP_NAME(l_OP_1667, 1), ((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
if (((((*(R22 *)rt_nil_check(l_T_1666))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_OP_NAME(l_OP_1667, 1))))
{
{
R27 * l_ARGS_1668; memset(&l_ARGS_1668, 0, sizeof l_ARGS_1668);
l_ARGS_1668 = r_VAL_ARG(l_A_1665, r_QUAL_ARGS(((*(R21 *)rt_nil_check(p_E))).f_LINE));
R12 * l_Y_1669; memset(&l_Y_1669, 0, sizeof l_Y_1669);
l_Y_1669 = r_USER_OPERATOR(r_OP_NAME(l_OP_1667, 1), l_ARGS_1668, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((l_Y_1669 == NULL) && (!(((*(R27 *)rt_nil_check(l_ARGS_1668))).f_NEXT == NULL))))
{
((*(R27 *)rt_nil_check(l_ARGS_1668))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(r_OP_NAME(l_OP_1667, 1), l_ARGS_1668, ((*(R21 *)rt_nil_check(p_E))).f_LINE) == NULL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("no operation takes the precision or rounding of the expression ", 63), rt_str("as arguments (D.5): ", 20)), r_OP_NAME(l_OP_1667, 1));
}
}
if ((!(l_Y_1669 == NULL)))
{
{ R26 rv1670 = r_CALL_SYM(l_Y_1669, l_ARGS_1668, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv1670; }
}
if ((((*(R22 *)rt_nil_check(l_T_1666))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1666));
}
}
}
if (r_TEQS(l_OP_1667, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1666))).f_KIND == g_T_BOOL))
{
{ R26 rv1671 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1665).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1671; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1666))).f_KIND == g_T_BITS))
{
{ R26 rv1672 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1665).f_C), l_T_1666);
return rv1672; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1666))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1667, rt_str("-", 1)))
{
{ R26 rv1673 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1665).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1666))).f_SCALE));
return rv1673; }
}
{ R26 rv1674 = r_MKET((l_A_1665).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1666))).f_SCALE));
return rv1674; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1666))).f_KIND == g_T_FLOAT))
{
{
R22 * l_FT_1675; memset(&l_FT_1675, 0, sizeof l_FT_1675);
l_FT_1675 = r_FLOAT_TYPE(r_MAX_INT(((*(R22 *)rt_nil_check(l_T_1666))).f_SCALE, r_QUAL_PREC()));
if (r_TEQS(l_OP_1667, rt_str("-", 1)))
{
{ R26 rv1676 = r_MKET(r_FLOAT_OP(l_OP_1667, r_MK(rt_str("0.0", 3)), (l_A_1665).f_C, l_FT_1675), l_FT_1675);
return rv1676; }
}
{ R26 rv1677 = r_MKET((l_A_1665).f_C, l_FT_1675);
return rv1677; }
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1666));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R21 * p_E) { RT_B_TICK(); 
{ rt_int rv1678 = (((((((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(p_E))).f_NAME)))) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R21 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1678; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R21 * p_E) { RT_B_TICK(); 
R10 l_OP_1679; memset(&l_OP_1679, 0, sizeof l_OP_1679);
S_R10(&l_OP_1679, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1680; memset(&l_A_1680, 0, sizeof l_A_1680);
R26 l_B_1681; memset(&l_B_1681, 0, sizeof l_B_1681);
if ((r_TEQS(l_OP_1679, rt_str("&", 1)) || r_TEQS(l_OP_1679, rt_str("!", 1))))
{
{
R23 l_MA_1682; memset(&l_MA_1682, 0, sizeof l_MA_1682);
S_R23(&l_MA_1682, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CA_1683; memset(&l_CA_1683, 0, sizeof l_CA_1683);
S_R10(&l_CA_1683, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
R10 l_CB_1684; memset(&l_CB_1684, 0, sizeof l_CB_1684);
S_R10(&l_CB_1684, r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1679, rt_str("&", 1)))
{
{ R26 rv1685 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1683, l_CB_1684), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1685; }
}
{ R26 rv1686 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1683, l_CB_1684), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1686; }
}
}
if ((r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R21 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1681, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1680, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, (l_B_1681).f_T), 0);
}
else
{
S_R26(&l_A_1680, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1681, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, (l_A_1680).f_T), 0);
}
{ R26 rv1687 = r_APPLY_OPERATOR(p_E, l_OP_1679, l_A_1680, l_B_1681);
return rv1687; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1688; memset(&l_AT_1688, 0, sizeof l_AT_1688);
l_AT_1688 = (p_A).f_T;
R22 * l_BT_1689; memset(&l_BT_1689, 0, sizeof l_BT_1689);
l_BT_1689 = (p_B).f_T;
rt_int l_LINE_1690; memset(&l_LINE_1690, 0, sizeof l_LINE_1690);
l_LINE_1690 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
{
R10 l_NAME_1691; memset(&l_NAME_1691, 0, sizeof l_NAME_1691);
S_R10(&l_NAME_1691, r_OP_NAME(p_OP, 0), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
S_R10(&l_NAME_1691, r_MKN(rt_b_cat(rt_str("MD_", 3), r_STR(l_NAME_1691, (l_NAME_1691).f_LEN))), 0);
}
if ((((((*(R22 *)rt_nil_check(l_AT_1688))).f_GENP).f_LEN > ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_BT_1689))).f_GENP).f_LEN > ((rt_int)0LL))))
{
r_REQUIRE_WHERE(l_NAME_1691, l_LINE_1690);
}
if (((r_HAS_USER_ROUTINE(l_NAME_1691) || (((*(R22 *)rt_nil_check(l_AT_1688))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1689))).f_KIND == g_T_ABS)))
{
{
R27 * l_ARGS_1692; memset(&l_ARGS_1692, 0, sizeof l_ARGS_1692);
l_ARGS_1692 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R27 * l_EXTRA_1693; memset(&l_EXTRA_1693, 0, sizeof l_EXTRA_1693);
l_EXTRA_1693 = r_QUAL_ARGS(l_LINE_1690);
R12 * l_Y_1694; memset(&l_Y_1694, 0, sizeof l_Y_1694);
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
l_EXTRA_1693 = r_VAL_ARG(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_D, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_EXTRA_1693);
}
if ((!(l_EXTRA_1693 == NULL)))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1692))).f_NEXT))).f_NEXT = l_EXTRA_1693;
l_Y_1694 = r_USER_OPERATOR(l_NAME_1691, l_ARGS_1692, l_LINE_1690);
if ((!(l_Y_1694 == NULL)))
{
{ R26 rv1695 = r_CALL_SYM(l_Y_1694, l_ARGS_1692, l_LINE_1690);
return rv1695; }
}
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1692))).f_NEXT))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(l_NAME_1691, l_ARGS_1692, l_LINE_1690) == NULL)))
{
r_FAILT(l_LINE_1690, rt_b_cat(rt_str("no operation takes the scale, precision or rounding of the ", 59), rt_str("expression as arguments (D.5): ", 31)), l_NAME_1691);
}
}
else
{
l_Y_1694 = r_USER_OPERATOR(l_NAME_1691, l_ARGS_1692, l_LINE_1690);
if ((!(l_Y_1694 == NULL)))
{
{ R26 rv1696 = r_CALL_SYM(l_Y_1694, l_ARGS_1692, l_LINE_1690);
return rv1696; }
}
}
if ((r_TEQS(p_OP, rt_str("<>", 2)) && (((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{
R12 * l_Q_1697; memset(&l_Q_1697, 0, sizeof l_Q_1697);
l_Q_1697 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1692, l_LINE_1690);
if ((!(l_Q_1697 == NULL)))
{
{ R26 rv1698 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1697, l_ARGS_1692, l_LINE_1690)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1698; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1688))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1689))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1690, rt_str("no such operation for the abstract type: ", 41), l_NAME_1691);
}
}
}
}
if ((!r_PREDEFINED_ROUNDING()))
{
r_FAILT(l_LINE_1690, rt_str("no operation is defined for the rounding mode ", 46), ((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME);
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1699 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1699; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1700 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1700; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1688))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1689))).f_KIND == g_T_INT)))
{
{ R26 rv1701 = r_MKET(r_FIXED_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1701; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1688))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1689))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1702 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1702; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1688))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1688, l_BT_1689)))
{
if ((r_IS_UNORDERED(l_AT_1688) || r_IS_UNORDERED(l_BT_1689)))
{
r_FAIL(l_LINE_1690, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1703 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1703; }
}
r_FAILT(l_LINE_1690, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1688))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1689))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1688))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1689))).f_KIND == g_T_BITS)))))
{
r_SAME_CHARSET(l_AT_1688, l_BT_1689, l_LINE_1690);
{
R22 * l_T_1704; memset(&l_T_1704, 0, sizeof l_T_1704);
l_T_1704 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1688))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1704))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1688))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1688))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1689))).f_MLEN).f_OK))
{
S_R23(&((*(R22 *)rt_nil_check(l_T_1704))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1688))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1689))).f_MLEN).f_V)), 0);
S_R10(&((*(R22 *)rt_nil_check(l_T_1704))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1704))).f_MLEN).f_V), 0);
}
{ R26 rv1705 = r_MKET(r_FMT2(rt_str("rt_b_cat(@, @)", 14), (p_A).f_C, (p_B).f_C), l_T_1704);
return rv1705; }
}
}
r_FAIL(l_LINE_1690, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1688))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1689))).f_KIND == g_T_BITS)))
{
{ R26 rv1706 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1688);
return rv1706; }
}
r_FAILT(l_LINE_1690, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1688))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1689))).f_KIND == g_T_INT)))
{
{ R26 rv1707 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1707; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1688))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1689))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1708; memset(&l_T_1708, 0, sizeof l_T_1708);
l_T_1708 = r_FLOAT_TYPE(r_MAX_INT(r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1688))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1689))).f_SCALE), r_QUAL_PREC()));
if ((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))
{
{ R26 rv1709 = r_MKET(r_FLOAT_OP(p_OP, (p_A).f_C, (p_B).f_C, l_T_1708), l_T_1708);
return rv1709; }
}
if (r_TEQS(p_OP, rt_str("**", 2)))
{
r_FAIL(l_LINE_1690, rt_str("** has no predefined meaning for floating point values (3.3.4.2)", 64));
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1688))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1689))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1688))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1689))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1690, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1690, rt_b_cat(rt_b_cat(rt_b_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1688), (r_TYPE_NAME(l_AT_1688)).f_LEN)));
rt_raise(RT_X_INIT);
}
static rt_int r_IDENTICAL_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1710; memset(&l_RA_1710, 0, sizeof l_RA_1710);
l_RA_1710 = r_REAL_TYPE(p_A);
R22 * l_RB_1711; memset(&l_RB_1711, 0, sizeof l_RB_1711);
l_RB_1711 = r_REAL_TYPE(p_B);
if ((p_A == p_B))
{
{ rt_int rv1712 = 1;
return rv1712; }
}
if (((!r_SAME_TYPE(p_A, p_B)) || (!r_SAME_RANGE(p_A, p_B))))
{
{ rt_int rv1713 = 0;
return rv1713; }
}
if (((((*(R22 *)rt_nil_check(l_RA_1710))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RA_1710))).f_KIND == g_T_BITS)))
{
if (((((*(R22 *)rt_nil_check(l_RA_1710))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_1711))).f_MLEN).f_OK))
{
{ rt_int rv1714 = ((((*(R22 *)rt_nil_check(l_RA_1710))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_1711))).f_MLEN).f_V);
return rv1714; }
}
}
else if ((((*(R22 *)rt_nil_check(l_RA_1710))).f_KIND == g_T_ARR))
{
{ rt_int rv1715 = (r_SAME_EXTENTS(l_RA_1710, l_RB_1711) && r_IDENTICAL_TYPE(((*(R22 *)rt_nil_check(l_RA_1710))).f_ELEM, ((*(R22 *)rt_nil_check(l_RB_1711))).f_ELEM));
return rv1715; }
}
{ rt_int rv1716 = 1;
return rv1716; }
rt_raise(RT_X_INIT);
}
static R10 r_TARGET_ARGS_CHECK(R22 * p_RT, R22 * p_VT, R10 p_C) { RT_B_TICK(); 
R22 * l_A_1717; memset(&l_A_1717, 0, sizeof l_A_1717);
l_A_1717 = r_REAL_TYPE(p_RT);
R22 * l_B_1718; memset(&l_B_1718, 0, sizeof l_B_1718);
l_B_1718 = r_REAL_TYPE(p_VT);
R10 l_R_1719; memset(&l_R_1719, 0, sizeof l_R_1719);
S_R10(&l_R_1719, r_MK(rt_str("", 0)), 0);
if (((!(((*(R22 *)rt_nil_check(l_A_1717))).f_KIND == g_T_REC)) || (!(((*(R22 *)rt_nil_check(l_B_1718))).f_KIND == g_T_REC))))
{
{ R10 rv1720 = p_C;
return rv1720; }
}
{
R24 * l_F_1721; memset(&l_F_1721, 0, sizeof l_F_1721);
l_F_1721 = ((*(R22 *)rt_nil_check(l_A_1717))).f_FIELDS;
R25 * l_P_1722; memset(&l_P_1722, 0, sizeof l_P_1722);
l_P_1722 = ((*(R22 *)rt_nil_check(l_A_1717))).f_ARGS;
R25 * l_Q_1723; memset(&l_Q_1723, 0, sizeof l_Q_1723);
l_Q_1723 = ((*(R22 *)rt_nil_check(l_B_1718))).f_ARGS;
for (;;) {
if ((((l_F_1721 == NULL) || (l_P_1722 == NULL)) || (l_Q_1723 == NULL))) goto L_end1724;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1721))).f_KIND == ((rt_int)0LL))))
{
if (((((!((*(R25 *)rt_nil_check(l_P_1722))).f_ANYARG) && (!r_IS_GEN_ARG(l_P_1722))) && (!r_IS_GEN_ARG(l_Q_1723))) && (!(((((*(R25 *)rt_nil_check(l_P_1722))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_1723))).f_MLO).f_OK)))))
{
S_R10(&l_R_1719, r_FMT3(rt_str("@ if (p && p->@ != (@)) rt_raise(RT_B_TYPE_MISMATCH);", 53), l_R_1719, ((*(R24 *)rt_nil_check(l_F_1721))).f_CNAME, ((*(R25 *)rt_nil_check(l_P_1722))).f_LO), 0);
}
l_P_1722 = ((*(R25 *)rt_nil_check(l_P_1722))).f_NEXT;
l_Q_1723 = ((*(R25 *)rt_nil_check(l_Q_1723))).f_NEXT;
}
l_F_1721 = ((*(R24 *)rt_nil_check(l_F_1721))).f_NEXT;
}
RT_B_TICK();
} L_end1724: ;
}
if (((l_R_1719).f_LEN == ((rt_int)0LL)))
{
{ R10 rv1725 = p_C;
return rv1725; }
}
{ R10 rv1726 = r_FMT3(rt_str("({ __typeof__(@) p = (@);@ p; })", 32), p_C, p_C, l_R_1719);
return rv1726; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_EXTENTS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R25 * l_P_1727; memset(&l_P_1727, 0, sizeof l_P_1727);
l_P_1727 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_A)))).f_BOUNDS;
R25 * l_Q_1728; memset(&l_Q_1728, 0, sizeof l_Q_1728);
l_Q_1728 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_B)))).f_BOUNDS;
for (;;) {
if (((l_P_1727 == NULL) || (l_Q_1728 == NULL))) goto L_end1729;
{
if (((((((((((*(R25 *)rt_nil_check(l_P_1727))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_P_1727))).f_MHI).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1728))).f_MLO).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1728))).f_MHI).f_OK) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1727))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1727))).f_HI))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1728))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1728))).f_HI))))
{
if ((!(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_P_1727))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_P_1727))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)) == r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_Q_1728))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_Q_1728))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)))))
{
{ rt_int rv1730 = 0;
return rv1730; }
}
}
l_P_1727 = ((*(R25 *)rt_nil_check(l_P_1727))).f_NEXT;
l_Q_1728 = ((*(R25 *)rt_nil_check(l_Q_1728))).f_NEXT;
}
RT_B_TICK();
} L_end1729: ;
{ rt_int rv1731 = 1;
return rv1731; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_VALUES(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv1732 = 0;
return rv1732; }
}
{ rt_int rv1733 = (!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL));
return rv1733; }
rt_raise(RT_X_INIT);
}
static R22 * r_FLOAT_TYPE(rt_int p_P) { RT_B_TICK(); 
R22 * l_T_1734; memset(&l_T_1734, 0, sizeof l_T_1734);
l_T_1734 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1734))).f_SCALE = p_P;
{ R22 * rv1735 = l_T_1734;
return rv1735; }
rt_raise(RT_X_INIT);
}
static R10 r_SINGLE_C(rt_int p_P) { RT_B_TICK(); 
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
{ R10 rv1736 = r_MK(rt_str("1", 1));
return rv1736; }
}
{ R10 rv1737 = r_MK(rt_str("0", 1));
return rv1737; }
rt_raise(RT_X_INIT);
}
static R10 r_FLOAT_TRUNC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8))))
{
{ R10 rv1738 = r_MK(rt_str("1", 1));
return rv1738; }
}
}
{ R10 rv1739 = r_MK(rt_str("0", 1));
return rv1739; }
rt_raise(RT_X_INIT);
}
static rt_int r_QUAL_PREC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B == NULL)))
{
{ rt_int rv1740 = (r_MANIFEST(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B)).f_V;
return rv1740; }
}
}
{ rt_int rv1741 = ((rt_int)0LL);
return rv1741; }
rt_raise(RT_X_INIT);
}
static R10 r_FLOAT_OP(R10 p_OP, R10 p_A, R10 p_B, R22 * p_T) { RT_B_TICK(); 
{ R10 rv1742 = r_CAT(r_FMT3(rt_str("rt_b_fop('@', @, @, ", 20), p_OP, p_A, p_B), r_FMT2(rt_str("@, @)", 5), r_SINGLE_C(((*(R22 *)rt_nil_check(p_T))).f_SCALE), r_FLOAT_TRUNC()));
return rv1742; }
rt_raise(RT_X_INIT);
}
static R10 r_LOWER_OP(R10 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R10 rv1743 = r_MK(rt_str("and", 3));
return rv1743; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R10 rv1744 = r_MK(rt_str("or", 2));
return rv1744; }
}
{ R10 rv1745 = r_MK(rt_str("xor", 3));
return rv1745; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { RT_B_TICK(); 
if ((p_A > p_B))
{
{ rt_int rv1746 = p_A;
return rv1746; }
}
{ rt_int rv1747 = p_B;
return rv1747; }
rt_raise(RT_X_INIT);
}
static R10 r_FIXED_COMPARE(R26 p_A, R26 p_B, R10 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE == ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE))
{
{ R10 rv1748 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv1748; }
}
{ R10 rv1749 = r_CAT(r_FMT3(rt_str("(rt_b_cmp(@, @, @", 17), (p_A).f_C, r_NUM(((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE), (p_B).f_C), r_FMT2(rt_str(", @) @ 0)", 9), r_NUM(((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE), p_OP));
return rv1749; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1750; memset(&l_AT_1750, 0, sizeof l_AT_1750);
l_AT_1750 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1751; memset(&l_BT_1751, 0, sizeof l_BT_1751);
l_BT_1751 = r_REAL_TYPE((p_B).f_T);
R10 l_R_1752; memset(&l_R_1752, 0, sizeof l_R_1752);
if (((((*(R22 *)rt_nil_check(l_AT_1750))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1751))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1750))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1751))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1750))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1751))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R10(&l_R_1752, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1750))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1751))).f_KIND == g_T_INT)))
{
S_R10(&l_R_1752, r_FIXED_COMPARE(p_A, p_B, r_MK(rt_str("==", 2))), 0);
}
else
{
if ((!r_SAME_CLASS(l_AT_1750, l_BT_1751)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1750))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
r_SAME_CHARSET(l_AT_1750, l_BT_1751, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R22 *)rt_nil_check(l_AT_1750))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1750) || r_HAS_ANY(l_BT_1751)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
if ((((*(R22 *)rt_nil_check(l_AT_1750))).f_KIND == g_T_ARR))
{
if ((!r_SAME_EXTENTS(l_AT_1750, l_BT_1751)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("arrays of different EXTENT attributes are compared (3.8.4.1)", 60));
}
}
if ((((*(R22 *)rt_nil_check(l_AT_1750))).f_KIND == g_T_REC))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_AT_1750))).f_ARGS, ((*(R22 *)rt_nil_check(l_BT_1751))).f_ARGS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("records of different types are compared (3.9.4.1)", 49));
}
}
if (r_HAS_ABS_PART(l_AT_1750))
{
S_R10(&l_R_1752, r_COMPONENT_EQUAL(l_AT_1750, (p_A).f_C, (p_B).f_C, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
}
else
{
S_R10(&l_R_1752, r_EQUAL_CODE(l_AT_1750, (p_A).f_C, (p_B).f_C), 0);
}
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R10(&l_R_1752, r_FMT1(rt_str("(!@)", 4), l_R_1752), 0);
}
{ R26 rv1753 = r_MKET(l_R_1752, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1753; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R21 * p_E, R10 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1754; memset(&l_S1_1754, 0, sizeof l_S1_1754);
l_S1_1754 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1755; memset(&l_S2_1755, 0, sizeof l_S2_1755);
l_S2_1755 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1756; memset(&l_S_1756, 0, sizeof l_S_1756);
l_S_1756 = r_MAX_INT(l_S1_1754, l_S2_1755);
R10 l_FN_1757; memset(&l_FN_1757, 0, sizeof l_FN_1757);
S_R10(&l_FN_1757, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_FN_1757, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1758 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1757, r_RESCALE_C((p_A).f_C, l_S1_1754, l_S_1756), r_RESCALE_C((p_B).f_C, l_S2_1755, l_S_1756)), r_INT_TYPE(l_S_1756));
return rv1758; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1759 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1754, l_S2_1755)));
return rv1759; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1760 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1754, l_S2_1755)));
return rv1760; }
}
{ R26 rv1761 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1754, l_S2_1755)));
return rv1761; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1762 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1754));
return rv1762; }
}
{ R26 rv1763 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1754));
return rv1763; }
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
rt_int l_S1_1764; memset(&l_S1_1764, 0, sizeof l_S1_1764);
l_S1_1764 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1765; memset(&l_S2_1765, 0, sizeof l_S2_1765);
l_S2_1765 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R10 l_RND_1766; memset(&l_RND_1766, 0, sizeof l_RND_1766);
S_R10(&l_RND_1766, r_MK(rt_str("0", 1)), 0);
if ((((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_B).f_T)))).f_KIND == g_T_FLOAT)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no machine-dependent float operator ", 36), p_OP);
}
{ R26 rv1767 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1767; }
}
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R10(&l_RND_1766, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("//", 2))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the machine-dependent fixed point operators are !+! !-! !*! !//! (3.2.4.5), not ", 80), p_OP);
}
{ R26 rv1768 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1768; }
}
{
R23 l_SM_1769; memset(&l_SM_1769, 0, sizeof l_SM_1769);
S_R23(&l_SM_1769, r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1770; memset(&l_S_1770, 0, sizeof l_S_1770);
l_S_1770 = (l_SM_1769).f_V;
rt_int l_SR_1771; memset(&l_SR_1771, 0, sizeof l_SR_1771);
l_SR_1771 = r_MAX_INT(l_S1_1764, l_S2_1765);
if ((!(l_SM_1769).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1772 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1770, l_S1_1764), l_S2_1765)), l_RND_1766), r_INT_TYPE(l_S_1770));
return rv1772; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1773 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1770, l_S1_1764), l_S2_1765)), l_RND_1766), r_INT_TYPE(l_S_1770));
return rv1773; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1774 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1764), r_NUM(l_S_1770), l_RND_1766), r_INT_TYPE(l_S_1770));
return rv1774; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R10 l_SUB_1775; memset(&l_SUB_1775, 0, sizeof l_SUB_1775);
S_R10(&l_SUB_1775, r_MK(rt_str("0", 1)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R10(&l_SUB_1775, r_MK(rt_str("1", 1)), 0);
}
{ R26 rv1776 = r_MKET(r_CAT(r_FMT4(rt_str("rt_b_addsc(@, @, @, @, ", 23), (p_A).f_C, r_NUM(l_S1_1764), (p_B).f_C, r_NUM(l_S2_1765)), r_FMT3(rt_str("@, @, @)", 8), r_NUM(l_S_1770), l_SUB_1775, l_RND_1766)), r_INT_TYPE(l_S_1770));
return rv1776; }
}
}
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R21 * p_E) { RT_B_TICK(); 
R26 l_V_1777; memset(&l_V_1777, 0, sizeof l_V_1777);
S_R26(&l_V_1777, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1778; memset(&l_T_1778, 0, sizeof l_T_1778);
l_T_1778 = r_REAL_TYPE((l_V_1777).f_T);
R21 * l_R_1779; memset(&l_R_1779, 0, sizeof l_R_1779);
l_R_1779 = ((*(R21 *)rt_nil_check(p_E))).f_B;
R10 l_TMP_1780; memset(&l_TMP_1780, 0, sizeof l_TMP_1780);
S_R10(&l_TMP_1780, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1781; memset(&l_LO_1781, 0, sizeof l_LO_1781);
R26 l_HI_1782; memset(&l_HI_1782, 0, sizeof l_HI_1782);
R10 l_LOC_1783; memset(&l_LOC_1783, 0, sizeof l_LOC_1783);
R10 l_HIC_1784; memset(&l_HIC_1784, 0, sizeof l_HIC_1784);
R10 l_LO_OP_1785; memset(&l_LO_OP_1785, 0, sizeof l_LO_OP_1785);
S_R10(&l_LO_OP_1785, r_MK(rt_str("<=", 2)), 0);
R10 l_HI_OP_1786; memset(&l_HI_OP_1786, 0, sizeof l_HI_OP_1786);
S_R10(&l_HI_OP_1786, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1781, r_EXPR(((*(R21 *)rt_nil_check(l_R_1779))).f_A, l_T_1778), 0);
S_R26(&l_HI_1782, r_EXPR(((*(R21 *)rt_nil_check(l_R_1779))).f_B, l_T_1778), 0);
if (r_IS_UNORDERED(l_T_1778))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1778))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1778))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1778))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_1781).f_T), l_T_1778)) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_1782).f_T), l_T_1778))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if (((((*(R21 *)rt_nil_check(l_R_1779))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_1779))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_OP_1785, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_1779))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_OP_1786, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R22 *)rt_nil_check(l_T_1778))).f_KIND == g_T_INT))
{
{
R26 l_X_1787; memset(&l_X_1787, 0, sizeof l_X_1787);
S_R26(&l_X_1787, r_MKET(l_TMP_1780, (l_V_1777).f_T), 0);
S_R10(&l_LOC_1783, r_FIXED_COMPARE(l_LO_1781, l_X_1787, l_LO_OP_1785), 0);
S_R10(&l_HIC_1784, r_FIXED_COMPARE(l_X_1787, l_HI_1782, l_HI_OP_1786), 0);
}
}
else
{
S_R10(&l_LOC_1783, r_FMT3(rt_str("(@ @ @)", 7), (l_LO_1781).f_C, l_LO_OP_1785, l_TMP_1780), 0);
S_R10(&l_HIC_1784, r_FMT3(rt_str("(@ @ @)", 7), l_TMP_1780, l_HI_OP_1786, (l_HI_1782).f_C), 0);
}
{ R26 rv1788 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; @ && ", 17), r_CTYPE(l_T_1778), l_TMP_1780, (l_V_1777).f_C, l_LOC_1783), r_FMT1(rt_str("@; })", 5), l_HIC_1784)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1788; }
rt_raise(RT_X_INIT);
}
static R10 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R10 rv1789 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1789; }
}
{ R10 rv1790 = (p_V).f_C;
return rv1790; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { RT_B_TICK(); 
{ R26 rv1791 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1791; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { RT_B_TICK(); 
rt_int l_B_1792; memset(&l_B_1792, 0, sizeof l_B_1792);
l_B_1792 = ((rt_int)0LL);
rt_int l_P_1793; memset(&l_P_1793, 0, sizeof l_P_1793);
l_P_1793 = ((rt_int)1LL);
for (;;) {
if ((l_P_1793 >= p_N)) goto L_end1794;
{
l_B_1792 = rt_add(l_B_1792, ((rt_int)1LL));
l_P_1793 = rt_mul(l_P_1793, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1794: ;
{ rt_int rv1795 = l_B_1792;
return rv1795; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R23 l_M_1796; memset(&l_M_1796, 0, sizeof l_M_1796);
S_R23(&l_M_1796, r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1796).f_OK)
{
{ rt_int rv1797 = (l_M_1796).f_V;
return rv1797; }
}
}
}
}
{ rt_int rv1798 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1798; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKING_OF(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1799; memset(&l_K_1799, 0, sizeof l_K_1799);
l_K_1799 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
rt_int l_MODE_1800; memset(&l_MODE_1800, 0, sizeof l_MODE_1800);
l_MODE_1800 = ((rt_int)2LL);
if ((l_K_1799 == g_T_STR))
{
l_MODE_1800 = ((rt_int)1LL);
}
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_KIND == g_N_REP) && (!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL))))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_KIND == g_N_ENUMLIT)))
{
{
rt_int l_P_1801; memset(&l_P_1801, 0, sizeof l_P_1801);
l_P_1801 = r_PACKING_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_NAME);
if ((l_P_1801 >= ((rt_int)0LL)))
{
l_MODE_1800 = l_P_1801;
}
}
}
}
}
{ rt_int rv1802 = l_MODE_1800;
return rv1802; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKING_VALUE(R10 p_NAME) { RT_B_TICK(); 
if (r_TEQS(p_NAME, rt_str("DENSE", 5)))
{
{ rt_int rv1803 = ((rt_int)0LL);
return rv1803; }
}
else if (r_TEQS(p_NAME, rt_str("PACKED", 6)))
{
{ rt_int rv1804 = ((rt_int)1LL);
return rv1804; }
}
else if (r_TEQS(p_NAME, rt_str("UNPACKED", 8)))
{
{ rt_int rv1805 = ((rt_int)2LL);
return rv1805; }
}
{ rt_int rv1806 = rt_neg(((rt_int)1LL));
return rv1806; }
rt_raise(RT_X_INIT);
}
static R26 r_PACKING_LITERAL(rt_int p_MODE, rt_int p_LINE) { RT_B_TICK(); 
if ((p_MODE == ((rt_int)0LL)))
{
{ R26 rv1807 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("DENSE", 5), p_LINE), NULL);
return rv1807; }
}
else if ((p_MODE == ((rt_int)1LL)))
{
{ R26 rv1808 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1808; }
}
{ R26 rv1809 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1809; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACK_SLOT(rt_int p_ES, rt_int p_MODE) { RT_B_TICK(); 
rt_int l_U_1810; memset(&l_U_1810, 0, sizeof l_U_1810);
l_U_1810 = ((rt_int)8LL);
if ((p_ES <= ((rt_int)0LL)))
{
if ((p_MODE == ((rt_int)0LL)))
{
{ rt_int rv1811 = ((rt_int)0LL);
return rv1811; }
}
{ rt_int rv1812 = ((rt_int)8LL);
return rv1812; }
}
if ((p_MODE == ((rt_int)0LL)))
{
{ rt_int rv1813 = p_ES;
return rv1813; }
}
if (((p_MODE == ((rt_int)1LL)) && (p_ES <= ((rt_int)64LL))))
{
for (;;) {
if ((l_U_1810 >= p_ES)) goto L_end1814;
{
l_U_1810 = rt_mul(l_U_1810, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1814: ;
{ rt_int rv1815 = l_U_1810;
return rv1815; }
}
{ rt_int rv1816 = rt_mul((rt_quot((rt_add(p_ES, ((rt_int)63LL))), ((rt_int)64LL))), ((rt_int)64LL));
return rv1816; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACK_SIZE(rt_int p_N, rt_int p_ES, rt_int p_MODE) { RT_B_TICK(); 
if ((p_N <= ((rt_int)0LL)))
{
{ rt_int rv1817 = ((rt_int)0LL);
return rv1817; }
}
{ rt_int rv1818 = rt_mul(p_N, r_PACK_SLOT(p_ES, p_MODE));
return rv1818; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHAR_SIZE(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv1819 = r_ENUM_SIZE(r_CHARSET_OF(p_T));
return rv1819; }
rt_raise(RT_X_INIT);
}
static R10 r_CHAR_REPS(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_1820; memset(&l_C_1820, 0, sizeof l_C_1820);
l_C_1820 = r_CHARSET_OF(p_T);
if ((!(((*(R22 *)rt_nil_check(l_C_1820))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_1820))).f_REPS))).f_B == NULL)))
{
{ R10 rv1821 = r_REP_TABLE(l_C_1820);
return rv1821; }
}
}
{ R10 rv1822 = r_FMT1(rt_str("NULL, @", 7), r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_1820))).f_BASE))).f_NLITS));
return rv1822; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_LENGTH(void) { RT_B_TICK(); 
{ rt_int rv1823 = ((rt_int)100000000LL);
return rv1823; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_FLOAT_PRECISION(void) { RT_B_TICK(); 
{ rt_int rv1824 = ((rt_int)15LL);
return rv1824; }
rt_raise(RT_X_INIT);
}
static rt_int r_IMP_PRECISION_OF(rt_int p_P) { RT_B_TICK(); 
if ((p_P <= ((rt_int)7LL)))
{
{ rt_int rv1825 = ((rt_int)7LL);
return rv1825; }
}
{ rt_int rv1826 = ((rt_int)15LL);
return rv1826; }
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_FORMAT(rt_int p_P, R10 p_NAME) { RT_B_TICK(); 
rt_int l_SINGLE_1827; memset(&l_SINGLE_1827, 0, sizeof l_SINGLE_1827);
l_SINGLE_1827 = (r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL));
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
if (l_SINGLE_1827)
{
{ rt_int rv1828 = rt_neg(((rt_int)125LL));
return rv1828; }
}
{ rt_int rv1829 = rt_neg(((rt_int)1021LL));
return rv1829; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
if (l_SINGLE_1827)
{
{ rt_int rv1830 = ((rt_int)128LL);
return rv1830; }
}
{ rt_int rv1831 = ((rt_int)1024LL);
return rv1831; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
if (l_SINGLE_1827)
{
{ rt_int rv1832 = ((rt_int)25LL);
return rv1832; }
}
{ rt_int rv1833 = ((rt_int)54LL);
return rv1833; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
if (l_SINGLE_1827)
{
{ rt_int rv1834 = ((rt_int)8LL);
return rv1834; }
}
{ rt_int rv1835 = ((rt_int)11LL);
return rv1835; }
}
else if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
if (l_SINGLE_1827)
{
{ rt_int rv1836 = ((rt_int)32LL);
return rv1836; }
}
{ rt_int rv1837 = ((rt_int)64LL);
return rv1837; }
}
{ rt_int rv1838 = ((rt_int)0LL);
return rv1838; }
rt_raise(RT_X_INIT);
}
static R23 r_STATIC_SIZE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1839; memset(&l_K_1839, 0, sizeof l_K_1839);
l_K_1839 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1839 == g_T_ABS))
{
{ R23 rv1840 = r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1840; }
}
else if ((l_K_1839 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R23 rv1841 = r_MANIFEST(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A);
return rv1841; }
}
}
{ R23 rv1842 = r_SOME(((rt_int)64LL));
return rv1842; }
}
else if ((l_K_1839 == g_T_FLOAT))
{
{ R23 rv1843 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1843; }
}
else if ((l_K_1839 == g_T_BOOL))
{
{ R23 rv1844 = r_SOME(((rt_int)1LL));
return rv1844; }
}
else if ((l_K_1839 == g_T_ENUM))
{
{ R23 rv1845 = r_SOME(r_ENUM_SIZE(p_T));
return rv1845; }
}
else if ((l_K_1839 == g_T_BITS))
{
{ R23 rv1846 = ((*(R22 *)rt_nil_check(p_T))).f_MLEN;
return rv1846; }
}
else if ((l_K_1839 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R23 rv1847 = r_SOME(r_PACK_SIZE((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_V, r_CHAR_SIZE(p_T), r_PACKING_OF(p_T)));
return rv1847; }
}
}
else if (((l_K_1839 == g_T_PTR) || (l_K_1839 == g_T_SEM)))
{
{ R23 rv1848 = r_SOME(((rt_int)64LL));
return rv1848; }
}
else if ((l_K_1839 == g_T_ARR))
{
{
R23 l_ES_1849; memset(&l_ES_1849, 0, sizeof l_ES_1849);
S_R23(&l_ES_1849, r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM), 0);
rt_int l_N_1850; memset(&l_N_1850, 0, sizeof l_N_1850);
l_N_1850 = ((rt_int)1LL);
R25 * l_B_1851; memset(&l_B_1851, 0, sizeof l_B_1851);
l_B_1851 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
if ((!(l_ES_1849).f_OK))
{
{ R23 rv1852 = r_NO_MVAL();
return rv1852; }
}
for (;;) {
if ((l_B_1851 == NULL)) goto L_end1853;
{
if ((((!(((((*(R25 *)rt_nil_check(l_B_1851))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_B_1851))).f_MHI).f_OK))) || r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1851))).f_LO)) || r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1851))).f_HI)))
{
{ R23 rv1854 = r_NO_MVAL();
return rv1854; }
}
l_N_1850 = rt_mul(l_N_1850, r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_B_1851))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_B_1851))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
l_B_1851 = ((*(R25 *)rt_nil_check(l_B_1851))).f_NEXT;
}
RT_B_TICK();
} L_end1853: ;
{ R23 rv1855 = r_SOME(r_PACK_SIZE(l_N_1850, (l_ES_1849).f_V, r_PACKING_OF(p_T)));
return rv1855; }
}
}
{ R23 rv1856 = r_NO_MVAL();
return rv1856; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1857; memset(&l_T_1857, 0, sizeof l_T_1857);
l_T_1857 = (p_B).f_T;
rt_int l_K_1858; memset(&l_K_1858, 0, sizeof l_K_1858);
l_K_1858 = ((*(R22 *)rt_nil_check(l_T_1857))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv1859 = r_SIZE_OF(l_T_1857, (p_B).f_C);
return rv1859; }
}
if ((l_K_1858 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv1860 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1857))).f_SCALE);
return rv1860; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1861 = r_INT_ET(((rt_int)2LL));
return rv1861; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv1862 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1862; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
if ((!(((*(R22 *)rt_nil_check(l_T_1857))).f_REPS == NULL)))
{
if ((r_TEQS(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1857))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1857))).f_REPS))).f_A == NULL))))
{
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1857))).f_REPS))).f_A))).f_NEXT == NULL)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1857))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8)))
{
{ R26 rv1863 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNSIGNED", 8), p_LINE), NULL);
return rv1863; }
}
}
}
}
{ R26 rv1864 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1864; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1857))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1865 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1857))).f_LO_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1857))).f_SCALE));
return rv1865; }
}
{ R26 rv1866 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1857))).f_SCALE));
return rv1866; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1857))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1867 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1857))).f_HI_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1857))).f_SCALE));
return rv1867; }
}
{ R26 rv1868 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1857))).f_SCALE));
return rv1868; }
}
}
else if ((l_K_1858 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv1869 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1857))).f_SCALE);
return rv1869; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv1870 = r_INT_ET(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1857))).f_SCALE));
return rv1870; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1871 = r_INT_ET(((rt_int)2LL));
return rv1871; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R26 rv1872 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1857))).f_SCALE, p_NAME));
return rv1872; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) || r_TEQS(p_NAME, rt_str("MAX", 3))))
{
{
R22 * l_MT_1873; memset(&l_MT_1873, 0, sizeof l_MT_1873);
l_MT_1873 = r_FLOAT_TYPE(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1857))).f_SCALE));
R10 l_C_1874; memset(&l_C_1874, 0, sizeof l_C_1874);
S_R10(&l_C_1874, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1857))).f_SCALE) == ((rt_int)7LL)))
{
S_R10(&l_C_1874, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1857))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1875 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1857))).f_LO_C, (p_B).f_SELF), l_MT_1873);
return rv1875; }
}
{ R26 rv1876 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1874), l_MT_1873);
return rv1876; }
}
if (((((*(R22 *)rt_nil_check(l_T_1857))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1877 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1857))).f_HI_C, (p_B).f_SELF), l_MT_1873);
return rv1877; }
}
{ R26 rv1878 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1874), l_MT_1873);
return rv1878; }
}
}
}
else if ((l_K_1858 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1857))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1879 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1857))).f_LO_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1857))).f_BASE);
return rv1879; }
}
{ R26 rv1880 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_1857))).f_BASE);
return rv1880; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1857))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1881 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1857))).f_HI_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1857))).f_BASE);
return rv1881; }
}
{ R26 rv1882 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1857))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_1857))).f_BASE);
return rv1882; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1857))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1883 = r_MKET(r_SUBST_SELF(r_FMT4(rt_str("((@) >= (@) \? (@) - (@) + 1 : 0)", 32), ((*(R22 *)rt_nil_check(l_T_1857))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1857))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1857))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1857))).f_LO_C), (p_B).f_SELF), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1883; }
}
{ R26 rv1884 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1857))).f_BASE))).f_NLITS);
return rv1884; }
}
}
else if (((l_K_1858 == g_T_STR) || (l_K_1858 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv1885 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1885; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1886 = r_PACKING_LITERAL(r_PACKING_OF(l_T_1857), p_LINE);
return rv1886; }
}
}
else if ((l_K_1858 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv1887 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1857))).f_DIMS);
return rv1887; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) || r_TEQS(p_NAME, rt_str("BOUNDS", 6))))
{
{ R26 rv1888 = r_ARRAY_SHAPE(p_B, p_NAME);
return rv1888; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1889 = r_PACKING_LITERAL(r_PACKING_OF(l_T_1857), p_LINE);
return rv1889; }
}
}
else if ((l_K_1858 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_1857))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv1890 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1890; }
}
{ R26 rv1891 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1891; }
}
}
else if (((l_K_1858 == g_T_ABS) || (l_K_1858 == g_T_REC)))
{
{
R22 * l_U_1892; memset(&l_U_1892, 0, sizeof l_U_1892);
l_U_1892 = l_T_1857;
if ((l_K_1858 == g_T_ABS))
{
l_U_1892 = ((*(R22 *)rt_nil_check(l_T_1857))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_1892))).f_KIND == g_T_REC))
{
{
R24 * l_F_1893; memset(&l_F_1893, 0, sizeof l_F_1893);
l_F_1893 = r_FIND_FIELD(l_U_1892, p_NAME);
if ((!(l_F_1893 == NULL)))
{
if ((!(((*(R24 *)rt_nil_check(l_F_1893))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv1894 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R24 *)rt_nil_check(l_F_1893))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1893))).f_T);
return rv1894; }
}
}
}
}
}
}
r_FAILT(p_LINE, rt_str("no such field or attribute: ", 28), p_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_SHAPE(R26 p_B, R10 p_NAME) { RT_B_TICK(); 
R22 * l_T_1895; memset(&l_T_1895, 0, sizeof l_T_1895);
l_T_1895 = r_REAL_TYPE((p_B).f_T);
R10 l_D_1896; memset(&l_D_1896, 0, sizeof l_D_1896);
S_R10(&l_D_1896, r_NUM(((*(R22 *)rt_nil_check(l_T_1895))).f_DIMS), 0);
R10 l_X_1897; memset(&l_X_1897, 0, sizeof l_X_1897);
S_R10(&l_X_1897, r_NEW_NAME(rt_str("sx", 2)), 0);
R10 l_R_1898; memset(&l_R_1898, 0, sizeof l_R_1898);
S_R10(&l_R_1898, r_NEW_NAME(rt_str("sr", 2)), 0);
R22 * l_ELEM_1899; memset(&l_ELEM_1899, 0, sizeof l_ELEM_1899);
l_ELEM_1899 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
R10 l_C_1900; memset(&l_C_1900, 0, sizeof l_C_1900);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
{
R21 * l_TS_1901; memset(&l_TS_1901, 0, sizeof l_TS_1901);
l_TS_1901 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_TS_1901))).f_NAME, r_MKN(rt_str("BOUNDS_DEF", 10)), 0);
((*(R21 *)rt_nil_check(l_TS_1901))).f_A = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_TS_1901))).f_A))).f_NAME, r_MKN(rt_str("STD", 3)), 0);
l_ELEM_1899 = r_RESOLVE(l_TS_1901);
}
}
{
R22 * l_A_1902; memset(&l_A_1902, 0, sizeof l_A_1902);
l_A_1902 = r_ARRAY_OF(l_ELEM_1899, ((rt_int)1LL));
S_R10(&l_C_1900, r_FMT4(rt_str("({ @ @ = @; @ ", 14), r_CTYPE(l_T_1895), l_X_1897, (p_B).f_C, ((*(R22 *)rt_nil_check(l_A_1902))).f_CNAME), 0);
S_R10(&l_C_1900, r_FMT4(rt_str("@@; memset(&@, 0, sizeof @);", 28), l_C_1900, l_R_1898, l_R_1898, l_R_1898), 0);
S_R10(&l_C_1900, r_FMT4(rt_str("@ @.lo[0] = 0; @.hi[0] = @ - 1;", 31), l_C_1900, l_R_1898, l_R_1898, l_D_1896), 0);
S_R10(&l_C_1900, r_FMT4(rt_str("@ @.p = rt_alloc(@ * sizeof *@.p);", 34), l_C_1900, l_R_1898, l_D_1896, l_R_1898), 0);
S_R10(&l_C_1900, r_FMT2(rt_str("@ for (int i = 0; i < @; i++) {", 31), l_C_1900, l_D_1896), 0);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
S_R10(&l_C_1900, r_FMT2(rt_str("@ @", 3), l_C_1900, r_INIT_CODE(l_ELEM_1899, r_FMT1(rt_str("@.p[i]", 6), l_R_1898))), 0);
S_R10(&l_C_1900, r_FMT4(rt_str("@ @.p[i].f_MIN = @.lo[i]; @.p[i].f_MAX = ", 41), l_C_1900, l_R_1898, l_X_1897, l_R_1898), 0);
S_R10(&l_C_1900, r_FMT2(rt_str("@@.hi[i]; }", 11), l_C_1900, l_X_1897), 0);
}
else
{
S_R10(&l_C_1900, r_FMT4(rt_str("@ @.p[i] = @.hi[i] >= @.lo[i] \? ", 32), l_C_1900, l_R_1898, l_X_1897, l_X_1897), 0);
S_R10(&l_C_1900, r_FMT4(rt_str("@@.hi[i] - @.lo[i] + 1 : 0; }", 29), l_C_1900, l_X_1897, l_X_1897, l_X_1897), 0);
}
{ R26 rv1903 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_C_1900, l_R_1898), l_A_1902);
return rv1903; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_N_1904; memset(&l_N_1904, 0, sizeof l_N_1904);
l_N_1904 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_1904))).f_NAME, r_MKN(p_NAME), 0);
{ R21 * rv1905 = l_N_1904;
return rv1905; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R10 p_C) { RT_B_TICK(); 
rt_int l_K_1906; memset(&l_K_1906, 0, sizeof l_K_1906);
l_K_1906 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1906 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv1907 = r_MKET((r_EXPR(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1907; }
}
}
{ R26 rv1908 = r_INT_ET(((rt_int)64LL));
return rv1908; }
}
else if ((l_K_1906 == g_T_FLOAT))
{
{ R26 rv1909 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1909; }
}
else if ((l_K_1906 == g_T_BOOL))
{
{ R26 rv1910 = r_INT_ET(((rt_int)1LL));
return rv1910; }
}
else if ((l_K_1906 == g_T_ENUM))
{
{ R26 rv1911 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1911; }
}
else if ((l_K_1906 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1912 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1912; }
}
{ R26 rv1913 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1913; }
}
else if ((l_K_1906 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R26 rv1914 = r_INT_ET((r_STATIC_SIZE(p_T)).f_V);
return rv1914; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1915 = r_MKET(r_FMT3(rt_str("rt_b_pack_size(@, @, @)", 23), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C, r_NUM(r_CHAR_SIZE(p_T)), r_NUM(r_PACKING_OF(p_T))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1915; }
}
{ R26 rv1916 = r_MKET(r_FMT3(rt_str("rt_b_pack_size((@).len, @, @)", 29), p_C, r_NUM(r_CHAR_SIZE(p_T)), r_NUM(r_PACKING_OF(p_T))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1916; }
}
else if (((l_K_1906 == g_T_PTR) || (l_K_1906 == g_T_SEM)))
{
{ R26 rv1917 = r_INT_ET(((rt_int)64LL));
return rv1917; }
}
else if ((l_K_1906 == g_T_ABS))
{
{ R26 rv1918 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1918; }
}
else if ((l_K_1906 == g_T_REC))
{
{ R26 rv1919 = r_MKET(r_RECORD_SIZE(p_T, p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1919; }
}
else if ((l_K_1906 == g_T_ARR))
{
{
R23 l_ES_1920; memset(&l_ES_1920, 0, sizeof l_ES_1920);
S_R23(&l_ES_1920, r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM), 0);
if ((l_ES_1920).f_OK)
{
{ R26 rv1921 = r_MKET(r_CAT(r_FMT3(rt_str("rt_b_pack_size(rt_b_extent(@, (@).lo, (@).hi), ", 47), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C), r_FMT2(rt_str("@, @)", 5), r_NUM((l_ES_1920).f_V), r_NUM(r_PACKING_OF(p_T)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1921; }
}
}
{ R26 rv1922 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1922; }
}
{ R26 rv1923 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1923; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R10 p_TNAME, R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{ R26 rv1924 = r_ATTRIBUTE(r_TYPE_VALUE(p_TNAME, p_LINE), p_NAME, p_LINE);
return rv1924; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE(R10 p_TNAME, rt_int p_LINE) { RT_B_TICK(); 
{ R26 rv1925 = r_TYPE_VALUE_OF(r_RESOLVE_USER_NAME(p_TNAME, p_LINE));
return rv1925; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_1926; memset(&l_RT_1926, 0, sizeof l_RT_1926);
l_RT_1926 = r_REAL_TYPE(p_T);
if (((((*(R22 *)rt_nil_check(l_RT_1926))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(l_RT_1926))).f_KIND == g_T_REC)))
{
{
R10 l_TMP_1927; memset(&l_TMP_1927, 0, sizeof l_TMP_1927);
S_R10(&l_TMP_1927, r_NEW_NAME(rt_str("tq", 2)), 0);
R10 l_C_1928; memset(&l_C_1928, 0, sizeof l_C_1928);
S_R10(&l_C_1928, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), r_CTYPE(p_T), l_TMP_1927, l_TMP_1927, l_TMP_1927), 0);
S_R10(&l_C_1928, r_FMT3(rt_str("@@ @; })", 8), l_C_1928, r_INIT_CODE(l_RT_1926, l_TMP_1927), l_TMP_1927), 0);
{ R26 rv1929 = r_MKET(l_C_1928, p_T);
return rv1929; }
}
}
{ R26 rv1930 = r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(p_T)), p_T);
return rv1930; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_NAME(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{ rt_int rv1931 = 0;
return rv1931; }
}
{
R12 * l_Y_1932; memset(&l_Y_1932, 0, sizeof l_Y_1932);
l_Y_1932 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1932 == NULL))
{
{ rt_int rv1933 = 0;
return rv1933; }
}
{ rt_int rv1934 = (((*(R12 *)rt_nil_check(l_Y_1932))).f_KIND == g_Y_TYPE);
return rv1934; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R10 p_TNAME, R10 p_A, R10 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1935 = r_INT_ET(((rt_int)100000000LL));
return rv1935; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1936 = r_INT_ET(((rt_int)15LL));
return rv1936; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv1937 = r_INT_ET(((rt_int)0LL));
return rv1937; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R22 * l_T_1938; memset(&l_T_1938, 0, sizeof l_T_1938);
l_T_1938 = p_WANT;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_1938 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_1938 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_1938 = r_REAL_TYPE(l_T_1938);
if ((!(((*(R22 *)rt_nil_check(l_T_1938))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_1938))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R10 l_TMP_1939; memset(&l_TMP_1939, 0, sizeof l_TMP_1939);
S_R10(&l_TMP_1939, r_NEW_NAME(rt_str("rc", 2)), 0);
R10 l_R_1940; memset(&l_R_1940, 0, sizeof l_R_1940);
S_R10(&l_R_1940, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_1938))).f_CNAME, l_TMP_1939, l_TMP_1939, l_TMP_1939), 0);
R24 * l_F_1941; memset(&l_F_1941, 0, sizeof l_F_1941);
l_F_1941 = ((*(R22 *)rt_nil_check(l_T_1938))).f_FIELDS;
S_R10(&l_R_1940, r_FMT2(rt_str("@@", 2), l_R_1940, r_INIT_CODE(l_T_1938, l_TMP_1939)), 0);
for (;;) {
if ((l_F_1941 == NULL)) goto L_end1942;
{
if ((((*(R24 *)rt_nil_check(l_F_1941))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R24 *)rt_nil_check(l_F_1941))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_1941))).f_LABELS, (r_TAG_VALUE(l_T_1938, ((*(R24 *)rt_nil_check(l_F_1941))).f_TAGF)).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_T_1938, ((*(R24 *)rt_nil_check(l_F_1941))).f_TAGF)))).f_T)))
{
{
R21 * l_INIT_1943; memset(&l_INIT_1943, 0, sizeof l_INIT_1943);
l_INIT_1943 = r_FIND_INIT(((*(R21 *)rt_nil_check(p_E))).f_A, ((*(R24 *)rt_nil_check(l_F_1941))).f_NAME);
if ((l_INIT_1943 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R24 *)rt_nil_check(l_F_1941))).f_NAME);
}
S_R10(&l_R_1940, r_FMT2(rt_str("@ @", 3), l_R_1940, r_STORE_CODE(((*(R24 *)rt_nil_check(l_F_1941))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_1939, ((*(R24 *)rt_nil_check(l_F_1941))).f_CNAME), r_EXPR(((*(R21 *)rt_nil_check(l_INIT_1943))).f_A, ((*(R24 *)rt_nil_check(l_F_1941))).f_T), ((*(R21 *)rt_nil_check(l_INIT_1943))).f_LINE, l_TMP_1939)), 0);
}
}
}
l_F_1941 = ((*(R24 *)rt_nil_check(l_F_1941))).f_NEXT;
}
RT_B_TICK();
} L_end1942: ;
{
R21 * l_P_1944; memset(&l_P_1944, 0, sizeof l_P_1944);
l_P_1944 = ((*(R21 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_1944 == NULL)) goto L_end1945;
{
{
R24 * l_G_1946; memset(&l_G_1946, 0, sizeof l_G_1946);
l_G_1946 = r_FIND_VFIELD(l_T_1938, ((*(R21 *)rt_nil_check(l_P_1944))).f_NAME);
if ((l_G_1946 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1944))).f_LINE, rt_str("no such field: ", 15), ((*(R21 *)rt_nil_check(l_P_1944))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_G_1946))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_1944))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R21 *)rt_nil_check(l_P_1944))).f_NAME);
}
r_CHECK_VARIANT(l_G_1946, l_T_1938, NULL, ((*(R21 *)rt_nil_check(l_P_1944))).f_LINE);
}
l_P_1944 = ((*(R21 *)rt_nil_check(l_P_1944))).f_NEXT;
}
RT_B_TICK();
} L_end1945: ;
}
{ R26 rv1947 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1940, l_TMP_1939), l_T_1938);
return rv1947; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_FIND_INIT(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_1948; memset(&l_P_1948, 0, sizeof l_P_1948);
l_P_1948 = p_L;
for (;;) {
if ((l_P_1948 == NULL)) goto L_end1949;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_1948))).f_NAME, p_NAME))
{
{ R21 * rv1950 = l_P_1948;
return rv1950; }
}
l_P_1948 = ((*(R21 *)rt_nil_check(l_P_1948))).f_NEXT;
}
RT_B_TICK();
} L_end1949: ;
{ R21 * rv1951 = NULL;
return rv1951; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_DIMS_1952; memset(&l_DIMS_1952, 0, sizeof l_DIMS_1952);
l_DIMS_1952 = ((rt_int)0LL);
R21 * l_P_1953; memset(&l_P_1953, 0, sizeof l_P_1953);
l_P_1953 = p_E;
R22 * l_ELEM_1954; memset(&l_ELEM_1954, 0, sizeof l_ELEM_1954);
l_ELEM_1954 = NULL;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_P_1953))).f_KIND == g_N_ARRCONS))) goto L_end1955;
{
l_DIMS_1952 = rt_add(l_DIMS_1952, ((rt_int)1LL));
l_P_1953 = ((*(R21 *)rt_nil_check(l_P_1953))).f_A;
}
RT_B_TICK();
} L_end1955: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_1954 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_1954 == NULL))
{
l_ELEM_1954 = (r_EXPR(l_P_1953, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_1954))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_1954))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_1954 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
r_CHECK_SHAPE(p_E, l_DIMS_1952);
{
R22 * l_A_1956; memset(&l_A_1956, 0, sizeof l_A_1956);
l_A_1956 = r_ARRAY_OF(l_ELEM_1954, l_DIMS_1952);
R10 l_TMP_1957; memset(&l_TMP_1957, 0, sizeof l_TMP_1957);
S_R10(&l_TMP_1957, r_NEW_NAME(rt_str("ac", 2)), 0);
R10 l_R_1958; memset(&l_R_1958, 0, sizeof l_R_1958);
S_R10(&l_R_1958, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_1956))).f_CNAME, l_TMP_1957, l_TMP_1957), 0);
rt_int l_K_1959; memset(&l_K_1959, 0, sizeof l_K_1959);
l_K_1959 = ((rt_int)0LL);
{
R21 * l_Q_1960; memset(&l_Q_1960, 0, sizeof l_Q_1960);
l_Q_1960 = p_E;
R25 * l_TAIL_1961; memset(&l_TAIL_1961, 0, sizeof l_TAIL_1961);
l_TAIL_1961 = NULL;
{ rt_int it1963_lo = ((rt_int)1LL), it1963_hi = l_DIMS_1952;
for (rt_int it1963 = it1963_lo; it1963 <= it1963_hi; it1963++) {
{
{
R25 * l_B_1964; memset(&l_B_1964, 0, sizeof l_B_1964);
l_B_1964 = ((R25 *)rt_b_new(sizeof (R25)));
rt_int l_N_1965; memset(&l_N_1965, 0, sizeof l_N_1965);
l_N_1965 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_Q_1960))).f_A);
S_R25(&(*(R25 *)rt_nil_check(l_B_1964)), ({ R25 rc1966; memset(&rc1966, 0, sizeof rc1966);  S_R10(&rc1966.f_LO, r_MK(rt_str("0", 1)), 0); S_R10(&rc1966.f_HI, r_NUM(rt_sub(l_N_1965, ((rt_int)1LL))), 0); S_R23(&rc1966.f_MLO, r_SOME(((rt_int)0LL)), 0); S_R23(&rc1966.f_MHI, r_SOME(rt_sub(l_N_1965, ((rt_int)1LL))), 0); rc1966.f_ANYARG = 0; rc1966.f_NEXT = NULL; rc1966; }), 0);
if ((l_TAIL_1961 == NULL))
{
((*(R22 *)rt_nil_check(l_A_1956))).f_BOUNDS = l_B_1964;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_1961))).f_NEXT = l_B_1964;
}
l_TAIL_1961 = l_B_1964;
}
l_Q_1960 = ((*(R21 *)rt_nil_check(l_Q_1960))).f_A;
}
RT_B_TICK();
if (it1963 == it1963_hi) break;
} } L_end1962: ;
}
S_R10(&l_R_1958, r_FMT2(rt_str("@@); ", 5), l_R_1958, l_TMP_1957), 0);
l_P_1953 = p_E;
{ rt_int it1968_lo = ((rt_int)0LL), it1968_hi = rt_sub(l_DIMS_1952, ((rt_int)1LL));
for (rt_int it1968 = it1968_lo; it1968 <= it1968_hi; it1968++) {
{
S_R10(&l_R_1958, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_1958, l_TMP_1957, r_NUM(it1968), l_TMP_1957), 0);
S_R10(&l_R_1958, r_FMT3(rt_str("@@] = @;", 8), l_R_1958, r_NUM(it1968), r_NUM(rt_sub(r_LIST_LENGTH(((*(R21 *)rt_nil_check(l_P_1953))).f_A), ((rt_int)1LL)))), 0);
l_P_1953 = ((*(R21 *)rt_nil_check(l_P_1953))).f_A;
}
RT_B_TICK();
if (it1968 == it1968_hi) break;
} } L_end1967: ;
S_R10(&l_R_1958, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_1958, l_TMP_1957, l_TMP_1957, r_NUM(l_DIMS_1952)), 0);
S_R10(&l_R_1958, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_1958, l_TMP_1957, l_TMP_1957), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_1952, l_A_1956, l_TMP_1957, &l_R_1958, &l_K_1959);
{ R26 rv1969 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1958, l_TMP_1957), l_A_1956);
return rv1969; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_SHAPE(R21 * p_E, rt_int p_DIMS) { RT_B_TICK(); 
R21 * l_P_1970; memset(&l_P_1970, 0, sizeof l_P_1970);
l_P_1970 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((p_DIMS <= ((rt_int)1LL)))
{
return;
}
for (;;) {
if ((l_P_1970 == NULL)) goto L_end1971;
{
if (((!(((*(R21 *)rt_nil_check(l_P_1970))).f_KIND == g_N_ARRCONS)) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_ARRCONS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
if ((!r_SAME_SHAPE(l_P_1970, ((*(R21 *)rt_nil_check(p_E))).f_A)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
r_CHECK_SHAPE(l_P_1970, rt_sub(p_DIMS, ((rt_int)1LL)));
l_P_1970 = ((*(R21 *)rt_nil_check(l_P_1970))).f_NEXT;
}
RT_B_TICK();
} L_end1971: ;
}
static rt_int r_SAME_SHAPE(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
if (((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) || (!(((*(R21 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS))))
{
{ rt_int rv1972 = ((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) && (!(((*(R21 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS)));
return rv1972; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_A))).f_A) == r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_B))).f_A))))
{
{ rt_int rv1973 = 0;
return rv1973; }
}
{ rt_int rv1974 = r_SAME_SHAPE(((*(R21 *)rt_nil_check(p_A))).f_A, ((*(R21 *)rt_nil_check(p_B))).f_A);
return rv1974; }
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R21 * p_E, rt_int p_DIMS, R22 * p_A, R10 p_TMP, R10 *p_R, rt_int *p_K) { RT_B_TICK(); 
R21 * l_P_1975; memset(&l_P_1975, 0, sizeof l_P_1975);
l_P_1975 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_1975 == NULL)) goto L_end1976;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_1975, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R21 *)rt_nil_check(l_P_1975))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_1975))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R10(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_1975, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R21 *)rt_nil_check(l_P_1975))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_1975 = ((*(R21 *)rt_nil_check(l_P_1975))).f_NEXT;
}
RT_B_TICK();
} L_end1976: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R22 * l_T_1977; memset(&l_T_1977, 0, sizeof l_T_1977);
l_T_1977 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_1977))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_1977))).f_DIMS = p_DIMS;
S_R10(&((*(R22 *)rt_nil_check(l_T_1977))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv1978 = l_T_1977;
return rv1978; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R21 * p_E) { RT_B_TICK(); 
R22 * l_T_1979; memset(&l_T_1979, 0, sizeof l_T_1979);
l_T_1979 = r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_A);
R26 l_V_1980; memset(&l_V_1980, 0, sizeof l_V_1980);
S_R26(&l_V_1980, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, l_T_1979), 0);
R22 * l_RT_1981; memset(&l_RT_1981, 0, sizeof l_RT_1981);
l_RT_1981 = r_REAL_TYPE(l_T_1979);
if (((((*(R22 *)rt_nil_check((l_V_1980).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_1981))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R22 *)rt_nil_check(l_RT_1981))).f_KIND == g_T_INT))
{
{ R26 rv1982 = r_MKET(r_RANGE_CHECK(l_RT_1981, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1980).f_C), r_NO_TEXT()), l_T_1979);
return rv1982; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1981))).f_KIND == g_T_BOOL))
{
{ R26 rv1983 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_1980).f_C), l_T_1979);
return rv1983; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1981))).f_KIND == g_T_ENUM))
{
{ R26 rv1984 = r_MKET(r_ENUM_OF_BITS(l_RT_1981, (l_V_1980).f_C), l_T_1979);
return rv1984; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1981))).f_KIND == g_T_FLOAT))
{
{ R26 rv1985 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_1980).f_C), l_T_1979);
return rv1985; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1981))).f_KIND == g_T_STR))
{
{ R26 rv1986 = r_MKET(r_FMT4(rt_str("rt_b_chars_of_bits(@, @, @, @)", 30), (l_V_1980).f_C, r_NUM(r_CHAR_SIZE(l_RT_1981)), r_NUM(r_PACKING_OF(l_RT_1981)), r_CHAR_REPS(l_RT_1981)), l_T_1979);
return rv1986; }
}
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{
R10 l_C_1987; memset(&l_C_1987, 0, sizeof l_C_1987);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 1;
S_R10(&l_C_1987, r_CONVERT(l_V_1980, l_T_1979, ((*(R21 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), 0);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 0;
if ((((((((*(R22 *)rt_nil_check(l_RT_1981))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1981))).f_KIND == g_T_BITS))) && ((((*(R22 *)rt_nil_check(l_RT_1981))).f_LEN_C).f_LEN > ((rt_int)0LL))) && (!(((((*(R22 *)rt_nil_check(l_RT_1981))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check((l_V_1980).f_T))).f_MLEN).f_OK)))))
{
S_R10(&l_C_1987, r_FMT2(rt_str("rt_b_tlen(@, @)", 15), l_C_1987, ((*(R22 *)rt_nil_check(l_RT_1981))).f_LEN_C), 0);
}
{ R26 rv1988 = r_MKET(l_C_1987, l_T_1979);
return rv1988; }
}
rt_raise(RT_X_INIT);
}
static R10 r_ENUM_OF_BITS(R22 * p_T, R10 p_C) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R10 rv1989 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv1989; }
}
}
{ R10 rv1990 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv1990; }
rt_raise(RT_X_INIT);
}
static R10 r_REP_TABLE(R22 * p_T) { RT_B_TICK(); 
R10 l_NAME_1991; memset(&l_NAME_1991, 0, sizeof l_NAME_1991);
S_R10(&l_NAME_1991, r_NEW_NAME(rt_str("reps", 4)), 0);
R21 * l_L_1992; memset(&l_L_1992, 0, sizeof l_L_1992);
l_L_1992 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R10 l_R_1993; memset(&l_R_1993, 0, sizeof l_R_1993);
S_R10(&l_R_1993, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1992 == NULL)) goto L_end1994;
{
{
R21 * l_V_1995; memset(&l_V_1995, 0, sizeof l_V_1995);
l_V_1995 = ((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_1996; memset(&l_FOUND_1996, 0, sizeof l_FOUND_1996);
l_FOUND_1996 = 0;
for (;;) {
if ((l_V_1995 == NULL)) goto L_end1997;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_V_1995))).f_NAME, ((*(R21 *)rt_nil_check(l_L_1992))).f_NAME))
{
S_R10(&l_R_1993, r_FMT2(rt_str("@@, ", 4), l_R_1993, (r_EXPR(((*(R21 *)rt_nil_check(l_V_1995))).f_A, NULL)).f_C), 0);
l_FOUND_1996 = 1;
}
l_V_1995 = ((*(R21 *)rt_nil_check(l_V_1995))).f_NEXT;
}
RT_B_TICK();
} L_end1997: ;
if ((!l_FOUND_1996))
{
r_FAILT(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R21 *)rt_nil_check(l_L_1992))).f_NAME);
}
}
l_L_1992 = ((*(R21 *)rt_nil_check(l_L_1992))).f_NEXT;
}
RT_B_TICK();
} L_end1994: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_1991, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_1993, l_NAME_1991, l_NAME_1991));
{ R10 rv1998 = r_FMT2(rt_str("@, @", 4), l_NAME_1991, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv1998; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SEM_1999; memset(&l_SEM_1999, 0, sizeof l_SEM_1999);
l_SEM_1999 = r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(((*(R7 *)rt_nil_check(g_W))).f_NEW_OK == p_E))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("NEW without PTR$ or SEMAPHORE$ only initializes a declaration or is the source ", 79), rt_str("of an assignment (3.10.2, 3.11.2)", 33)));
}
if ((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_1999 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_1999)
{
{
R22 * l_T_2000; memset(&l_T_2000, 0, sizeof l_T_2000);
l_T_2000 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_2000 = p_WANT;
}
}
{ R26 rv2001 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_2000))).f_SCALE)), l_T_2000);
return rv2001; }
}
}
{
R22 * l_T_2002; memset(&l_T_2002, 0, sizeof l_T_2002);
l_T_2002 = r_RESOLVE(r_EXPR_TO_TS(((*(R21 *)rt_nil_check(p_E))).f_A));
R22 * l_P_2003; memset(&l_P_2003, 0, sizeof l_P_2003);
l_P_2003 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_2003))).f_TARGET = l_T_2002;
((*(R22 *)rt_nil_check(l_P_2003))).f_TARGET_TS = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_2002))
{
{ R26 rv2004 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_b_new(sizeof *p); @ p; })", 38), r_CTYPE(l_T_2002), r_INIT_CODE(l_T_2002, r_MK(rt_str("(*p)", 4)))), l_P_2003);
return rv2004; }
}
{ R26 rv2005 = r_MKET(r_FMT2(rt_str("((@ *)rt_b_new(sizeof (@)))", 27), r_CTYPE(l_T_2002), r_CTYPE(l_T_2002)), l_P_2003);
return rv2005; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_NTH(R21 * p_L, rt_int p_K) { RT_B_TICK(); 
R21 * l_P_2006; memset(&l_P_2006, 0, sizeof l_P_2006);
l_P_2006 = p_L;
{ rt_int it2008_lo = ((rt_int)1LL), it2008_hi = p_K;
for (rt_int it2008 = it2008_lo; it2008 <= it2008_hi; it2008++) {
{
if ((!(l_P_2006 == NULL)))
{
l_P_2006 = ((*(R21 *)rt_nil_check(l_P_2006))).f_NEXT;
}
}
RT_B_TICK();
if (it2008 == it2008_hi) break;
} } L_end2007: ;
{ R21 * rv2009 = l_P_2006;
return rv2009; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R21 * p_E, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
rt_int l_N_2010; memset(&l_N_2010, 0, sizeof l_N_2010);
l_N_2010 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if (((l_N_2010 < p_LO) || (l_N_2010 > p_HI)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
static R10 r_ROUNDING_ARG(R21 * p_E, rt_int p_N) { RT_B_TICK(); 
R21 * l_L_2011; memset(&l_L_2011, 0, sizeof l_L_2011);
l_L_2011 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_2011 == NULL)))
{
if (((((*(R21 *)rt_nil_check(l_L_2011))).f_KIND == g_N_QUAL) && ((((*(R21 *)rt_nil_check(l_L_2011))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_2011))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv2012 = r_MK(rt_str("1", 1));
return rv2012; }
}
{ R10 rv2013 = r_MK(rt_str("0", 1));
return rv2013; }
}
if (((((*(R21 *)rt_nil_check(l_L_2011))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_L_2011))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_L_2011))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R10 rv2014 = r_MK(rt_str("1", 1));
return rv2014; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(l_L_2011))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R10 rv2015 = r_MK(rt_str("0", 1));
return rv2015; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R10 rv2016 = r_MK(rt_str("1", 1));
return rv2016; }
}
{ R10 rv2017 = r_MK(rt_str("0", 1));
return rv2017; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R21 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv2018 = 0;
return rv2018; }
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv2019 = (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv2019; }
}
{ rt_int rv2020 = 0;
return rv2020; }
rt_raise(RT_X_INIT);
}
static R21 * r_ARG_EXPR(R21 * p_E) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R21 * rv2021 = ((*(R21 *)rt_nil_check(p_E))).f_A;
return rv2021; }
}
{ R21 * rv2022 = p_E;
return rv2022; }
rt_raise(RT_X_INIT);
}
static R10 r_OPERATOR_SYMBOL(R10 p_NAME) { RT_B_TICK(); 
rstr l_NAMES_2023; memset(&l_NAMES_2023, 0, sizeof l_NAMES_2023);
l_NAMES_2023 = rt_b_str_new(((rt_int)299LL), 0);
rt_b_assign(&l_NAMES_2023, rt_str(" ADD_:+ SUBTRACT_:- MULTIPLY_:* DIVIDE_:/ MODULUS_:MOD EXPONENTIATE_:** CONCATENATE_:!! EQUAL_:= UNEQUAL_:<> GREATER_THAN_:> LESS_THAN_:< GREATER_EQUAL_:>= LESS_EQUAL_:<= AND_:AND OR_:OR XOR_:XOR IMPLIES_:-> MD_ADD_:+ MD_SUBTRACT_:- MD_MULTIPLY_:* MD_DIVIDE_:/ NEGATE_:- MON_PLUS_:+ COMPLEMENT_:NOT ", 299));
rt_int l_L_2024; memset(&l_L_2024, 0, sizeof l_L_2024);
l_L_2024 = (p_NAME).f_LEN;
{ rt_int it2026_lo = ((rt_int)0LL), it2026_hi = rt_sub(rt_sub(((rt_int)299LL), l_L_2024), ((rt_int)2LL));
for (rt_int it2026 = it2026_lo; it2026 <= it2026_hi; it2026++) {
{
if ((rt_b_eq(rt_b_slice(l_NAMES_2023, it2026, it2026), rt_str(" ", 1)) && rt_b_eq(rt_b_slice(l_NAMES_2023, rt_add(rt_add(it2026, l_L_2024), ((rt_int)1LL)), rt_add(rt_add(it2026, l_L_2024), ((rt_int)1LL))), rt_str(":", 1))))
{
if (rt_b_eq(rt_b_slice(l_NAMES_2023, rt_add(it2026, ((rt_int)1LL)), rt_add(it2026, l_L_2024)), r_STR(p_NAME, l_L_2024)))
{
{
rt_int l_J_2027; memset(&l_J_2027, 0, sizeof l_J_2027);
l_J_2027 = rt_add(rt_add(it2026, l_L_2024), ((rt_int)2LL));
for (;;) {
if (rt_b_eq(rt_b_slice(l_NAMES_2023, l_J_2027, l_J_2027), rt_str(" ", 1))) goto L_end2028;
{
l_J_2027 = rt_add(l_J_2027, ((rt_int)1LL));
}
RT_B_TICK();
} L_end2028: ;
{ R10 rv2029 = r_MKN(rt_b_slice(l_NAMES_2023, rt_add(rt_add(it2026, l_L_2024), ((rt_int)2LL)), rt_sub(l_J_2027, ((rt_int)1LL))));
return rv2029; }
}
}
}
}
RT_B_TICK();
if (it2026 == it2026_hi) break;
} } L_end2025: ;
{ R10 rv2030 = r_NO_TEXT();
return rv2030; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_2031; memset(&l_NAME_2031, 0, sizeof l_NAME_2031);
S_R10(&l_NAME_2031, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2032; memset(&l_LINE_2032, 0, sizeof l_LINE_2032);
l_LINE_2032 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
rt_int l_N_2033; memset(&l_N_2033, 0, sizeof l_N_2033);
l_N_2033 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
if ((r_TEQS(l_NAME_2031, rt_str("STORE_", 6)) || r_TEQS(l_NAME_2031, rt_str("SUBSTRING_STORE_", 16))))
{
{
R21 * l_TGT_2034; memset(&l_TGT_2034, 0, sizeof l_TGT_2034);
l_TGT_2034 = r_FIRST_OUT_ARG(p_E);
R21 * l_S_2035; memset(&l_S_2035, 0, sizeof l_S_2035);
l_S_2035 = r_NEW_NODE(g_N_ASSIGN, l_LINE_2032);
R21 * l_SRC_2036; memset(&l_SRC_2036, 0, sizeof l_SRC_2036);
l_SRC_2036 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if (((l_TGT_2034 == NULL) || (l_SRC_2036 == NULL)))
{
r_FAILT(l_LINE_2032, rt_str("the wrong arguments for ", 24), l_NAME_2031);
}
if (r_TEQS(l_NAME_2031, rt_str("STORE_", 6)))
{
((*(R21 *)rt_nil_check(l_S_2035))).f_A = l_TGT_2034;
}
else
{
if ((l_N_2033 < ((rt_int)3LL)))
{
r_FAIL(l_LINE_2032, rt_str("SUBSTRING_STORE_ (V, L, U # X) (D.5)", 36));
}
((*(R21 *)rt_nil_check(l_S_2035))).f_A = r_NEW_NODE(g_N_SUBSTR, l_LINE_2032);
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2035))).f_A))).f_A = l_TGT_2034;
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2035))).f_A))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_2035))).f_A))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
}
((*(R21 *)rt_nil_check(l_S_2035))).f_B = r_QUALIFIED(r_COPY_NODE(l_SRC_2036), r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, rt_add(((rt_int)1LL), rt_mul(((rt_int)2LL), r_BOOL_INT(r_TEQS(l_NAME_2031, rt_str("SUBSTRING_STORE_", 16)))))), l_LINE_2032);
{
R14 l_SAVED_CODE_2037; memset(&l_SAVED_CODE_2037, 0, sizeof l_SAVED_CODE_2037);
S_R14(&l_SAVED_CODE_2037, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R10 l_C_2038; memset(&l_C_2038, 0, sizeof l_C_2038);
S_R10(&l_C_2038, r_MK(rt_str("({", 2)), 0);
R15 * l_P_2039; memset(&l_P_2039, 0, sizeof l_P_2039);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2040; memset(&rc2040, 0, sizeof rc2040);  rc2040.f_HEAD = NULL; rc2040.f_TAIL = NULL; rc2040; }), 0);
r_ASSIGN_STMT(l_S_2035);
l_P_2039 = (((*(R7 *)rt_nil_check(g_W))).f_CODE).f_HEAD;
for (;;) {
if ((l_P_2039 == NULL)) goto L_end2041;
{
S_R10(&l_C_2038, r_FMT2(rt_str("@ @", 3), l_C_2038, ((*(R15 *)rt_nil_check(l_P_2039))).f_T), 0);
l_P_2039 = ((*(R15 *)rt_nil_check(l_P_2039))).f_NEXT;
}
RT_B_TICK();
} L_end2041: ;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2037, 0);
{ R26 rv2042 = r_MKET(r_CATS(l_C_2038, rt_str(" })", 3)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2042; }
}
}
}
if (r_TEQS(l_NAME_2031, rt_str("SUBSTRING_", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R21 * l_S_2043; memset(&l_S_2043, 0, sizeof l_S_2043);
l_S_2043 = r_NEW_NODE(g_N_SUBSTR, l_LINE_2032);
((*(R21 *)rt_nil_check(l_S_2043))).f_A = ((*(R21 *)rt_nil_check(p_E))).f_A;
((*(R21 *)rt_nil_check(l_S_2043))).f_B = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R21 *)rt_nil_check(l_S_2043))).f_C = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
((*(R21 *)rt_nil_check(l_S_2043))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv2044 = r_EXPR(l_S_2043, p_WANT);
return rv2044; }
}
}
{
R10 l_SYM__2045; memset(&l_SYM__2045, 0, sizeof l_SYM__2045);
S_R10(&l_SYM__2045, r_OPERATOR_SYMBOL(l_NAME_2031), 0);
rt_int l_UNARY_OP_2046; memset(&l_UNARY_OP_2046, 0, sizeof l_UNARY_OP_2046);
l_UNARY_OP_2046 = ((r_TEQS(l_NAME_2031, rt_str("NEGATE_", 7)) || r_TEQS(l_NAME_2031, rt_str("MON_PLUS_", 9))) || r_TEQS(l_NAME_2031, rt_str("COMPLEMENT_", 11)));
R21 * l_X_2047; memset(&l_X_2047, 0, sizeof l_X_2047);
if (l_UNARY_OP_2046)
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)3LL));
l_X_2047 = r_NEW_NODE(g_N_UNOP, l_LINE_2032);
S_R10(&((*(R21 *)rt_nil_check(l_X_2047))).f_NAME, l_SYM__2045, 0);
((*(R21 *)rt_nil_check(l_X_2047))).f_A = r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A);
{ R26 rv2048 = r_EXPR(r_QUALIFIED(l_X_2047, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), l_LINE_2032), p_WANT);
return rv2048; }
}
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)4LL));
l_X_2047 = r_BIN_NODE(l_SYM__2045, l_LINE_2032, r_COPY_NODE(((*(R21 *)rt_nil_check(p_E))).f_A), r_COPY_NODE(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))));
if (r_TEQS(l_SYM__2045, rt_str("/", 1)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL)).f_T)))).f_KIND == g_T_FLOAT)))
{
S_R10(&((*(R21 *)rt_nil_check(l_X_2047))).f_NAME, r_MK(rt_str("//", 2)), 0);
}
}
if (rt_b_eq(rt_b_slice(r_STR(l_NAME_2031, (l_NAME_2031).f_LEN), ((rt_int)0LL), ((rt_int)2LL)), rt_str("MD_", 3)))
{
((*(R21 *)rt_nil_check(l_X_2047))).f_FL = ((rt_int)2LL);
}
{ R26 rv2049 = r_EXPR(r_QUALIFIED(l_X_2047, r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_2032), p_WANT);
return rv2049; }
}
rt_raise(RT_X_INIT);
}
static R21 * r_QUALIFIED(R21 * p_X, R21 * p_Q, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_2050; memset(&l_R_2050, 0, sizeof l_R_2050);
l_R_2050 = p_X;
R21 * l_P_2051; memset(&l_P_2051, 0, sizeof l_P_2051);
l_P_2051 = p_Q;
for (;;) {
if ((l_P_2051 == NULL)) goto L_end2052;
{
if ((l_R_2050 == p_X))
{
l_R_2050 = r_NEW_NODE(g_N_QUAL, p_LINE);
((*(R21 *)rt_nil_check(l_R_2050))).f_A = p_X;
}
if (((((((*(R21 *)rt_nil_check(l_P_2051))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_P_2051))).f_KIND == g_N_ENUMLIT))) && r_IS_ROUNDING_NAME(((*(R21 *)rt_nil_check(l_P_2051))).f_NAME)))
{
S_R10(&((*(R21 *)rt_nil_check(l_R_2050))).f_NAME, ((*(R21 *)rt_nil_check(l_P_2051))).f_NAME, 0);
}
else
{
((*(R21 *)rt_nil_check(l_R_2050))).f_B = l_P_2051;
}
l_P_2051 = ((*(R21 *)rt_nil_check(l_P_2051))).f_NEXT;
}
RT_B_TICK();
} L_end2052: ;
{ R21 * rv2053 = l_R_2050;
return rv2053; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING_NAME(R10 p_NAME) { RT_B_TICK(); 
{ rt_int rv2054 = (!(r_FIND_LITERAL(p_NAME, r_ROUNDINGS_TYPE()) == NULL));
return rv2054; }
rt_raise(RT_X_INIT);
}
static R22 * r_ROUNDINGS_TYPE(void) { RT_B_TICK(); 
R12 * l_Y_2055; memset(&l_Y_2055, 0, sizeof l_Y_2055);
l_Y_2055 = r_LOOKUP(r_MKN(rt_str("ROUNDINGS", 9)));
if ((!(l_Y_2055 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2055))).f_KIND == g_Y_TYPE))
{
{
R22 * l_T_2056; memset(&l_T_2056, 0, sizeof l_T_2056);
l_T_2056 = r_REAL_TYPE(r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_2055))).f_NAME, ((rt_int)0LL)));
if ((((*(R22 *)rt_nil_check(l_T_2056))).f_KIND == g_T_ENUM))
{
{ R22 * rv2057 = l_T_2056;
return rv2057; }
}
}
}
}
{ R22 * rv2058 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS;
return rv2058; }
rt_raise(RT_X_INIT);
}
static rt_int r_PREDEFINED_ROUNDING(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL))
{
{ rt_int rv2059 = 1;
return rv2059; }
}
if (((((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2060 = 1;
return rv2060; }
}
{ rt_int rv2061 = (((r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_R", 8))) || r_TEQS(((*(R21 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8)));
return rv2061; }
rt_raise(RT_X_INIT);
}
static R21 * r_FIRST_OUT_ARG(R21 * p_E) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL)))
{
{ R21 * rv2062 = ((*(R21 *)rt_nil_check(p_E))).f_C;
return rv2062; }
}
{ R21 * rv2063 = ((*(R21 *)rt_nil_check(p_E))).f_B;
return rv2063; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_OBJECT_ARG(R21 * p_L) { RT_B_TICK(); 
R21 * l_A_2064; memset(&l_A_2064, 0, sizeof l_A_2064);
l_A_2064 = p_L;
for (;;) {
if ((l_A_2064 == NULL)) goto L_end2065;
{
if ((((*(R21 *)rt_nil_check(l_A_2064))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_2066; memset(&l_Y_2066, 0, sizeof l_Y_2066);
l_Y_2066 = r_LOOKUP(((*(R21 *)rt_nil_check(l_A_2064))).f_NAME);
if ((!(l_Y_2066 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_2066))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_2066))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_2066))).f_T == NULL))))
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2066))).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
{ rt_int rv2067 = 1;
return rv2067; }
}
}
}
}
}
l_A_2064 = ((*(R21 *)rt_nil_check(l_A_2064))).f_NEXT;
}
RT_B_TICK();
} L_end2065: ;
{ rt_int rv2068 = 0;
return rv2068; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R10 l_NAME_2069; memset(&l_NAME_2069, 0, sizeof l_NAME_2069);
S_R10(&l_NAME_2069, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2070; memset(&l_LINE_2070, 0, sizeof l_LINE_2070);
l_LINE_2070 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if ((!(r_CUR_GENERIC() == NULL)))
{
if (r_GENERIC_OBJECT_ARG(((*(R21 *)rt_nil_check(p_E))).f_A))
{
r_REQUIRE_WHERE(l_NAME_2069, l_LINE_2070);
}
}
if ((((((r_OPERATOR_SYMBOL(l_NAME_2069)).f_LEN > ((rt_int)0LL)) || r_TEQS(l_NAME_2069, rt_str("STORE_", 6))) || r_TEQS(l_NAME_2069, rt_str("SUBSTRING_", 10))) || r_TEQS(l_NAME_2069, rt_str("SUBSTRING_STORE_", 16))))
{
{ R26 rv2071 = r_OPERATOR_BUILTIN(p_E, p_WANT);
return rv2071; }
}
if ((r_TEQS(l_NAME_2069, rt_str("PUT", 3)) || r_TEQS(l_NAME_2069, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2072; memset(&l_V_2072, 0, sizeof l_V_2072);
S_R26(&l_V_2072, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2072).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_2070, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
r_ASCII_ONLY((l_V_2072).f_T, rt_str("the terminal", 12), l_LINE_2070);
if (r_TEQS(l_NAME_2069, rt_str("PUT", 3)))
{
{ R26 rv2073 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_2072).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2073; }
}
{ R26 rv2074 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_2072).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2074; }
}
}
else if (r_TEQS(l_NAME_2069, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2075 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2075; }
}
else if (r_TEQS(l_NAME_2069, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2076 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2076; }
}
else if (r_TEQS(l_NAME_2069, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2077 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2077; }
}
else if (r_TEQS(l_NAME_2069, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2078 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2078; }
}
else if (r_TEQS(l_NAME_2069, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2079 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2079; }
}
else if (r_TEQS(l_NAME_2069, rt_str("REAL_TIME", 9)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2080 = r_MKET(r_MK(rt_str("rt_b_real_time()", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2080; }
}
else if (r_TEQS(l_NAME_2069, rt_str("ARGUMENT_COUNT", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2081 = r_MKET(r_MK(rt_str("rt_argc()", 9)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2081; }
}
else if (r_TEQS(l_NAME_2069, rt_str("ARGUMENT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2082 = r_MKET(r_FMT1(rt_str("rt_arg(@)", 9), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2082; }
}
else if ((r_TEQS(l_NAME_2069, rt_str("FILE_EXISTS", 11)) || r_TEQS(l_NAME_2069, rt_str("READ_FILE", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2083; memset(&l_V_2083, 0, sizeof l_V_2083);
S_R26(&l_V_2083, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2083).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_2070, rt_str("a file is named by a character string: ", 39), l_NAME_2069);
}
if (r_TEQS(l_NAME_2069, rt_str("FILE_EXISTS", 11)))
{
{ R26 rv2084 = r_MKET(r_FMT1(rt_str("rt_b_file_exists(@)", 19), (l_V_2083).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2084; }
}
{ R26 rv2085 = r_MKET(r_FMT1(rt_str("rt_read_file(@)", 15), (l_V_2083).f_C), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2085; }
}
}
else if (r_TEQS(l_NAME_2069, rt_str("WRITE_FILE", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_N_2086; memset(&l_N_2086, 0, sizeof l_N_2086);
S_R26(&l_N_2086, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R26 l_V_2087; memset(&l_V_2087, 0, sizeof l_V_2087);
S_R26(&l_V_2087, r_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT, NULL), 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_N_2086).f_T)))).f_KIND == g_T_STR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2087).f_T)))).f_KIND == g_T_STR))))
{
r_FAIL(l_LINE_2070, rt_str("WRITE_FILE (name, text) takes two character strings", 51));
}
{ R26 rv2088 = r_MKET(r_FMT2(rt_str("rt_write_file(@, @)", 19), (l_N_2086).f_C, (l_V_2087).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2088; }
}
}
if (r_TEQS(l_NAME_2069, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2089 = r_IMAGE_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_2070);
return rv2089; }
}
else if (r_TEQS(l_NAME_2069, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv2090 = r_TO_FIXED_CALL(p_E);
return rv2090; }
}
else if (r_TEQS(l_NAME_2069, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_2091; memset(&l_V_2091, 0, sizeof l_V_2091);
S_R26(&l_V_2091, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R23 l_P_2092; memset(&l_P_2092, 0, sizeof l_P_2092);
S_R23(&l_P_2092, r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_VT_2093; memset(&l_VT_2093, 0, sizeof l_VT_2093);
l_VT_2093 = r_REAL_TYPE((l_V_2091).f_T);
R22 * l_T_2094; memset(&l_T_2094, 0, sizeof l_T_2094);
l_T_2094 = r_FLOAT_TYPE((l_P_2092).f_V);
R10 l_SINGLE_2095; memset(&l_SINGLE_2095, 0, sizeof l_SINGLE_2095);
S_R10(&l_SINGLE_2095, r_SINGLE_C((l_P_2092).f_V), 0);
R10 l_TR_2096; memset(&l_TR_2096, 0, sizeof l_TR_2096);
S_R10(&l_TR_2096, r_MK(rt_str("0", 1)), 0);
if (((r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A) == ((rt_int)3LL)) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT))).f_KIND == g_N_QUAL)))
{
{
R21 * l_R_2097; memset(&l_R_2097, 0, sizeof l_R_2097);
l_R_2097 = r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
if ((l_R_2097 == NULL))
{
l_R_2097 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT;
}
if ((((*(R21 *)rt_nil_check(l_R_2097))).f_KIND == g_N_QUAL))
{
l_R_2097 = r_LIT_NODE(r_STR(((*(R21 *)rt_nil_check(l_R_2097))).f_NAME, (((*(R21 *)rt_nil_check(l_R_2097))).f_NAME).f_LEN), l_LINE_2070);
}
if (r_TEQS(((*(R21 *)rt_nil_check(l_R_2097))).f_NAME, rt_str("TRUNCATED", 9)))
{
S_R10(&l_TR_2096, r_MK(rt_str("1", 1)), 0);
}
else if ((!r_TEQS(((*(R21 *)rt_nil_check(l_R_2097))).f_NAME, rt_str("ROUNDED", 7))))
{
r_FAIL(l_LINE_2070, rt_str("TO_FLOAT is predefined for ROUNDED and TRUNCATED (3.3.6.1)", 58));
}
}
}
if ((((*(R22 *)rt_nil_check(l_VT_2093))).f_KIND == g_T_INT))
{
{ R26 rv2098 = r_MKET(r_FMT4(rt_str("rt_b_float_of_fix_r(@, @, @, @)", 31), (l_V_2091).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_2093))).f_SCALE), l_SINGLE_2095, l_TR_2096), l_T_2094);
return rv2098; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_2093))).f_KIND == g_T_FLOAT))
{
if (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) && (r_IMP_PRECISION_OF((l_P_2092).f_V) > r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_2093))).f_SCALE))))
{
{
R21 * l_Q_2099; memset(&l_Q_2099, 0, sizeof l_Q_2099);
l_Q_2099 = r_NEW_NODE(g_N_QUAL, l_LINE_2070);
R21 * l_SAVED_Q_2100; memset(&l_SAVED_Q_2100, 0, sizeof l_SAVED_Q_2100);
l_SAVED_Q_2100 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_L_2101; memset(&l_L_2101, 0, sizeof l_L_2101);
((*(R21 *)rt_nil_check(l_Q_2099))).f_B = r_ARG_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_Q_2099;
S_R26(&l_L_2101, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_2100;
{ R26 rv2102 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_L_2101).f_C, l_SINGLE_2095, l_TR_2096), l_T_2094);
return rv2102; }
}
}
{ R26 rv2103 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_V_2091).f_C, l_SINGLE_2095, l_TR_2096), l_T_2094);
return rv2103; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_2093))).f_KIND == g_T_STR))
{
if (((!(((*(R22 *)rt_nil_check(l_VT_2093))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(l_VT_2093))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))))
{
r_FAIL(l_LINE_2070, rt_str("TO_FLOAT is predefined for ASCII strings only (3.3.6.1)", 55));
}
{ R26 rv2104 = r_MKET(r_FMT3(rt_str("rt_b_fconv(rt_b_float_of_str(@), @, @, 0)", 41), (l_V_2091).f_C, l_SINGLE_2095, l_TR_2096), l_T_2094);
return rv2104; }
}
r_FAIL(l_LINE_2070, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_2069, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2105 = r_BITS_OF(r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_2070);
return rv2105; }
}
else if (r_TEQS(l_NAME_2069, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2106; memset(&l_V_2106, 0, sizeof l_V_2106);
S_R26(&l_V_2106, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2106).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv2107 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_2106).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_2106).f_T))).f_SCALE));
return rv2107; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2106).f_T)))).f_KIND == g_T_FLOAT))
{
{ R26 rv2108 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_2106).f_C), (l_V_2106).f_T);
return rv2108; }
}
r_FAIL(l_LINE_2070, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_2069, rt_str("SUCC", 4)) || r_TEQS(l_NAME_2069, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2109; memset(&l_V_2109, 0, sizeof l_V_2109);
S_R26(&l_V_2109, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_2110; memset(&l_T_2110, 0, sizeof l_T_2110);
l_T_2110 = r_REAL_TYPE((l_V_2109).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_2110))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_2070, rt_str("an enumerated value expected by ", 32), l_NAME_2069);
}
if (r_IS_UNORDERED(l_T_2110))
{
r_FAILT(l_LINE_2070, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_2069);
}
if (r_TEQS(l_NAME_2069, rt_str("SUCC", 4)))
{
{ R26 rv2111 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_2109).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2110))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_2110))).f_BASE);
return rv2111; }
}
{ R26 rv2112 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_2109).f_C), ((*(R22 *)rt_nil_check(l_T_2110))).f_BASE);
return rv2112; }
}
}
else if (r_TEQS(l_NAME_2069, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_2113; memset(&l_V_2113, 0, sizeof l_V_2113);
S_R26(&l_V_2113, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_2114; memset(&l_K_2114, 0, sizeof l_K_2114);
l_K_2114 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2113).f_T)))).f_KIND;
R22 * l_T_2115; memset(&l_T_2115, 0, sizeof l_T_2115);
l_T_2115 = r_NEW_TYP(l_K_2114);
if (((!(l_K_2114 == g_T_STR)) && (!(l_K_2114 == g_T_BITS))))
{
r_FAIL(l_LINE_2070, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_2115))).f_BASE = ((*(R22 *)rt_nil_check((l_V_2113).f_T))).f_BASE;
{ R26 rv2116 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_2113).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_2115);
return rv2116; }
}
}
else if (r_TEQS(l_NAME_2069, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2117 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2117; }
}
else if (r_TEQS(l_NAME_2069, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2118 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv2118; }
}
else if (((r_TEQS(l_NAME_2069, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_2069, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_2069, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R10 l_BITS_2119; memset(&l_BITS_2119, 0, sizeof l_BITS_2119);
S_R10(&l_BITS_2119, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_2069, rt_str("OCT_OF", 6)))
{
S_R10(&l_BITS_2119, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_2069, rt_str("HEX_OF", 6)))
{
S_R10(&l_BITS_2119, r_MK(rt_str("4", 1)), 0);
}
{
R26 l_V_2120; memset(&l_V_2120, 0, sizeof l_V_2120);
S_R26(&l_V_2120, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2120).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_2070, rt_str("a character string expected by ", 31), l_NAME_2069);
}
r_ASCII_ONLY((l_V_2120).f_T, r_STR(l_NAME_2069, (l_NAME_2069).f_LEN), l_LINE_2070);
{ R26 rv2121 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (l_V_2120).f_C, l_BITS_2119), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv2121; }
}
}
}
else if ((r_TEQS(l_NAME_2069, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_2069, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R23 l_S_2122; memset(&l_S_2122, 0, sizeof l_S_2122);
S_R23(&l_S_2122, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_2123; memset(&l_R_2123, 0, sizeof l_R_2123);
S_R23(&l_R_2123, r_MANIFEST_INTEGER_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
if ((!((l_R_2123).f_V == ((rt_int)2LL))))
{
r_FAIL(l_LINE_2070, rt_str("only radix 2 is predefined (3.2.6.3)", 36));
}
r_CHECK_PRECISION_ARG(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_2070);
if (r_TEQS(l_NAME_2069, rt_str("FIXED_MIN", 9)))
{
{ R26 rv2124 = r_MKET(r_MK(rt_str("INT64_MIN", 9)), r_INT_TYPE((l_S_2122).f_V));
return rv2124; }
}
{ R26 rv2125 = r_MKET(r_MK(rt_str("INT64_MAX", 9)), r_INT_TYPE((l_S_2122).f_V));
return rv2125; }
}
}
else if (((r_TEQS(l_NAME_2069, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_2069, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_2069, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R23 l_P_2126; memset(&l_P_2126, 0, sizeof l_P_2126);
S_R23(&l_P_2126, r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_T_2127; memset(&l_T_2127, 0, sizeof l_T_2127);
l_T_2127 = r_FLOAT_TYPE((l_P_2126).f_V);
R10 l_C_2128; memset(&l_C_2128, 0, sizeof l_C_2128);
S_R10(&l_C_2128, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF((l_P_2126).f_V) == ((rt_int)7LL)))
{
S_R10(&l_C_2128, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(l_NAME_2069, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv2129 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_2128), l_T_2127);
return rv2129; }
}
else if (r_TEQS(l_NAME_2069, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv2130 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_2128), l_T_2127);
return rv2130; }
}
{ R26 rv2131 = r_MKET(r_FMT1(rt_str("@_EPSILON", 9), l_C_2128), l_T_2127);
return rv2131; }
}
}
else if (r_TEQS(l_NAME_2069, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2132 = r_INT_ET(r_IMP_PRECISION_OF((r_MANIFEST_INTEGER_ARG(((*(R21 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION())).f_V));
return rv2132; }
}
else if (r_TEQS(l_NAME_2069, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2133 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R21 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2133; }
}
else if (r_TEQS(l_NAME_2069, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2134 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2134; }
}
{ R26 rv2135 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv2135; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_2136; memset(&l_T_2136, 0, sizeof l_T_2136);
l_T_2136 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_2137; memset(&l_K_2137, 0, sizeof l_K_2137);
l_K_2137 = ((*(R22 *)rt_nil_check(l_T_2136))).f_KIND;
R22 * l_S_2138; memset(&l_S_2138, 0, sizeof l_S_2138);
l_S_2138 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_2137 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_2136))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv2139 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_2138);
return rv2139; }
}
{ R26 rv2140 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_2136))).f_SCALE)), l_S_2138);
return rv2140; }
}
else if ((l_K_2137 == g_T_FLOAT))
{
{ R26 rv2141 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_2136))).f_SCALE)), l_S_2138);
return rv2141; }
}
else if ((l_K_2137 == g_T_BOOL))
{
{ R26 rv2142 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_2138);
return rv2142; }
}
else if ((l_K_2137 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_2136))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv2143 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_2138);
return rv2143; }
}
{ R26 rv2144 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2136))).f_BASE))).f_CNAME, (p_V).f_C), l_S_2138);
return rv2144; }
}
else if (((l_K_2137 == g_T_STR) || (l_K_2137 == g_T_BITS)))
{
{ R26 rv2145 = r_MKET((p_V).f_C, l_S_2138);
return rv2145; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_2136));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R21 * p_E) { RT_B_TICK(); 
R26 l_V_2146; memset(&l_V_2146, 0, sizeof l_V_2146);
S_R26(&l_V_2146, r_EXPR(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_2147; memset(&l_T_2147, 0, sizeof l_T_2147);
l_T_2147 = r_REAL_TYPE((l_V_2146).f_T);
rt_int l_N_2148; memset(&l_N_2148, 0, sizeof l_N_2148);
l_N_2148 = r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_E))).f_A);
R10 l_RND_2149; memset(&l_RND_2149, 0, sizeof l_RND_2149);
S_R10(&l_RND_2149, r_ROUNDING_ARG(p_E, l_N_2148), 0);
rt_int l_S_2150; memset(&l_S_2150, 0, sizeof l_S_2150);
l_S_2150 = ((rt_int)0LL);
if (((l_N_2148 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
l_S_2150 = (r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL))).f_V;
}
{
rt_int l_K_2151; memset(&l_K_2151, 0, sizeof l_K_2151);
l_K_2151 = ((rt_int)2LL);
for (;;) {
if ((l_K_2151 >= l_N_2148)) goto L_end2152;
{
{
R21 * l_R_2153; memset(&l_R_2153, 0, sizeof l_R_2153);
l_R_2153 = r_ARG_EXPR(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_2151));
if ((r_IS_ROUNDING(l_R_2153) || (((((*(R21 *)rt_nil_check(r_NTH(((*(R21 *)rt_nil_check(p_E))).f_A, l_K_2151)))).f_KIND == g_N_QUAL) && (l_K_2151 == rt_sub(l_N_2148, ((rt_int)1LL)))))))
{
if ((!(l_K_2151 == rt_sub(l_N_2148, ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("the rounding mode is the last argument of TO_FIXED (3.2.6.1)", 60));
}
}
else if (((((((*(R21 *)rt_nil_check(l_R_2153))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_R_2153))).f_KIND == g_N_ENUMLIT))) && (!r_NAMES_OBJECT(((*(R21 *)rt_nil_check(l_R_2153))).f_NAME))))
{
r_CHECK_PRECISION_ARG(l_R_2153, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
}
else if (((((*(R21 *)rt_nil_check(l_R_2153))).f_KIND == g_N_FIELD) && r_TEQS(((*(R21 *)rt_nil_check(l_R_2153))).f_NAME, rt_str("PRECISION", 9))))
{
}
else
{
if ((!((r_MANIFEST_INTEGER_ARG(l_R_2153, rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL))).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 is predefined (3.2.6.1)", 36));
}
}
}
l_K_2151 = rt_add(l_K_2151, ((rt_int)1LL));
}
RT_B_TICK();
} L_end2152: ;
}
if (((((*(R22 *)rt_nil_check(l_T_2147))).f_KIND == g_T_INT) && (((((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) || (((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_INT)))))
{
{ R26 rv2154 = r_MKET(r_FMT3(rt_str("rt_b_fix_val(@, @, @)", 21), r_CSTRING(((*(R21 *)rt_nil_check(r_ARG_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)))).f_NAME), r_NUM(l_S_2150), l_RND_2149), r_INT_TYPE(l_S_2150));
return rv2154; }
}
if ((((*(R22 *)rt_nil_check(l_T_2147))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_2155; memset(&l_SAVED_2155, 0, sizeof l_SAVED_2155);
l_SAVED_2155 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R10 l_C_2156; memset(&l_C_2156, 0, sizeof l_C_2156);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_2149, rt_str("1", 1));
S_R10(&l_C_2156, r_RESCALE_C((l_V_2146).f_C, ((*(R22 *)rt_nil_check(l_T_2147))).f_SCALE, l_S_2150), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_2155;
{ R26 rv2157 = r_MKET(l_C_2156, r_INT_TYPE(l_S_2150));
return rv2157; }
}
}
else if ((((*(R22 *)rt_nil_check(l_T_2147))).f_KIND == g_T_FLOAT))
{
{ R26 rv2158 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_2146).f_C, r_NUM(l_S_2150), l_RND_2149), r_INT_TYPE(l_S_2150));
return rv2158; }
}
else if (((((*(R22 *)rt_nil_check(l_T_2147))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_2147))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_2147))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_2147))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_2147))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2147))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv2159 = r_MKET(r_RESCALE_C((l_V_2146).f_C, ((rt_int)0LL), l_S_2150), r_INT_TYPE(l_S_2150));
return rv2159; }
}
else if ((((*(R22 *)rt_nil_check(l_T_2147))).f_KIND == g_T_BITS))
{
{ R26 rv2160 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_2146).f_C), ((rt_int)0LL), l_S_2150), r_INT_TYPE(l_S_2150));
return rv2160; }
}
else if ((((*(R22 *)rt_nil_check(l_T_2147))).f_KIND == g_T_STR))
{
r_ASCII_ONLY(l_T_2147, rt_str("TO_FIXED", 8), ((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv2161 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_2146).f_C, r_NUM(l_S_2150), l_RND_2149), r_INT_TYPE(l_S_2150));
return rv2161; }
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_2146).f_T));
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_SIZE_OR(R22 * p_T) { RT_B_TICK(); 
R23 l_M_2162; memset(&l_M_2162, 0, sizeof l_M_2162);
S_R23(&l_M_2162, r_STATIC_SIZE(p_T), 0);
if ((l_M_2162).f_OK)
{
{ rt_int rv2163 = (l_M_2162).f_V;
return rv2163; }
}
{ rt_int rv2164 = rt_neg(((rt_int)1LL));
return rv2164; }
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_2165; memset(&l_T_2165, 0, sizeof l_T_2165);
l_T_2165 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_2166; memset(&l_K_2166, 0, sizeof l_K_2166);
l_K_2166 = ((*(R22 *)rt_nil_check(l_T_2165))).f_KIND;
if ((l_K_2166 == g_T_BITS))
{
{ R26 rv2167 = p_V;
return rv2167; }
}
else if ((l_K_2166 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_2165))).f_REPS == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2165))).f_REPS))).f_B == NULL)))
{
{ R26 rv2168 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_2165)), r_BITS_TYPE(r_ENUM_SIZE(l_T_2165)));
return rv2168; }
}
}
{ R26 rv2169 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_2165))), r_BITS_TYPE(r_ENUM_SIZE(l_T_2165)));
return rv2169; }
}
else if ((l_K_2166 == g_T_STR))
{
{ R26 rv2170 = r_MKET(r_FMT4(rt_str("rt_b_bits_of_chars(@, @, @, @)", 30), (p_V).f_C, r_NUM(r_CHAR_SIZE(l_T_2165)), r_NUM(r_PACKING_OF(l_T_2165)), r_CHAR_REPS(l_T_2165)), r_BITS_TYPE(r_STATIC_SIZE_OR(l_T_2165)));
return rv2170; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_2166 == g_T_INT))
{
{ R26 rv2171 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 64)", 23), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv2171; }
}
else if ((l_K_2166 == g_T_BOOL))
{
{ R26 rv2172 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv2172; }
}
else if ((l_K_2166 == g_T_FLOAT))
{
{ R26 rv2173 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv2173; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_2165));
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
{ rt_int rv2174 = 0;
return rv2174; }
}
{ rt_int rv2175 = ((r_IS_LITERALISH(((*(R27 *)rt_nil_check(p_A))).f_E) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv2175; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R27 * p_A) { RT_B_TICK(); 
rt_int l_N_2176; memset(&l_N_2176, 0, sizeof l_N_2176);
l_N_2176 = ((rt_int)0LL);
R27 * l_P_2177; memset(&l_P_2177, 0, sizeof l_P_2177);
l_P_2177 = p_A;
for (;;) {
if ((l_P_2177 == NULL)) goto L_end2178;
{
l_N_2176 = rt_add(l_N_2176, ((rt_int)1LL));
l_P_2177 = ((*(R27 *)rt_nil_check(l_P_2177))).f_NEXT;
}
RT_B_TICK();
} L_end2178: ;
{ rt_int rv2179 = l_N_2176;
return rv2179; }
rt_raise(RT_X_INIT);
}
static R27 * r_CALL_ARGS(R21 * p_E) { RT_B_TICK(); 
R27 * l_HEAD_2180; memset(&l_HEAD_2180, 0, sizeof l_HEAD_2180);
l_HEAD_2180 = NULL;
R27 * l_TAIL_2181; memset(&l_TAIL_2181, 0, sizeof l_TAIL_2181);
l_TAIL_2181 = NULL;
rt_int l_G_2182; memset(&l_G_2182, 0, sizeof l_G_2182);
l_G_2182 = ((rt_int)0LL);
{ rt_int it2184_lo = ((rt_int)0LL), it2184_hi = ((rt_int)2LL);
for (rt_int it2184 = it2184_lo; it2184 <= it2184_hi; it2184++) {
{
{
R21 * l_P_2185; memset(&l_P_2185, 0, sizeof l_P_2185);
l_P_2185 = ((*(R21 *)rt_nil_check(p_E))).f_A;
if ((it2184 == ((rt_int)1LL)))
{
l_P_2185 = ((*(R21 *)rt_nil_check(p_E))).f_B;
}
else if ((it2184 == ((rt_int)2LL)))
{
l_P_2185 = ((*(R21 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_2185 == NULL)) goto L_end2186;
{
{
R27 * l_A_2187; memset(&l_A_2187, 0, sizeof l_A_2187);
l_A_2187 = r_NODE_ARG(l_P_2185, it2184, NULL);
if ((l_TAIL_2181 == NULL))
{
l_HEAD_2180 = l_A_2187;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2181))).f_NEXT = l_A_2187;
}
l_TAIL_2181 = l_A_2187;
}
l_P_2185 = ((*(R21 *)rt_nil_check(l_P_2185))).f_NEXT;
}
RT_B_TICK();
} L_end2186: ;
}
}
RT_B_TICK();
if (it2184 == it2184_hi) break;
} } L_end2183: ;
{ R27 * rv2188 = l_HEAD_2180;
return rv2188; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SAVED_2189; memset(&l_SAVED_2189, 0, sizeof l_SAVED_2189);
l_SAVED_2189 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R21 * l_SAVED_Q_2190; memset(&l_SAVED_Q_2190, 0, sizeof l_SAVED_Q_2190);
l_SAVED_Q_2190 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_2191; memset(&l_V_2191, 0, sizeof l_V_2191);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_2191, r_CALL_EXPR1(p_E, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_2189;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_2190;
{ R26 rv2192 = l_V_2191;
return rv2192; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR1(R21 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R27 * l_ARGS_2193; memset(&l_ARGS_2193, 0, sizeof l_ARGS_2193);
l_ARGS_2193 = r_CALL_ARGS(p_E);
R12 * l_Y_2194; memset(&l_Y_2194, 0, sizeof l_Y_2194);
if (r_TEQS(((*(R21 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R21 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv2195 = r_START_IO_CALL(p_E);
return rv2195; }
}
l_Y_2194 = r_BOUND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2194 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2194))).f_KIND == g_Y_BUILTIN))
{
{
R21 * l_N_2196; memset(&l_N_2196, 0, sizeof l_N_2196);
l_N_2196 = r_COPY_NODE(p_E);
S_R10(&((*(R21 *)rt_nil_check(l_N_2196))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2194))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2196))).f_NEXT = ((*(R21 *)rt_nil_check(p_E))).f_NEXT;
{ R26 rv2197 = r_BUILTIN(l_N_2196, p_WANT);
return rv2197; }
}
}
{ R26 rv2198 = r_CALL_SYM(l_Y_2194, l_ARGS_2193, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv2198; }
}
{
R10 l_SHORT_2199; memset(&l_SHORT_2199, 0, sizeof l_SHORT_2199);
S_R10(&l_SHORT_2199, r_WHERE_SHORT_NAME(((*(R21 *)rt_nil_check(p_E))).f_NAME), 0);
if ((!r_TEQ(l_SHORT_2199, ((*(R21 *)rt_nil_check(p_E))).f_NAME)))
{
{
R21 * l_N_2200; memset(&l_N_2200, 0, sizeof l_N_2200);
l_N_2200 = r_COPY_NODE(p_E);
S_R10(&((*(R21 *)rt_nil_check(l_N_2200))).f_NAME, l_SHORT_2199, 0);
((*(R21 *)rt_nil_check(l_N_2200))).f_NEXT = ((*(R21 *)rt_nil_check(p_E))).f_NEXT;
{ R26 rv2201 = r_CALL_EXPR1(l_N_2200, p_WANT);
return rv2201; }
}
}
}
l_Y_2194 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2193, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_2194 == NULL))
{
{
R12 * l_P_2202; memset(&l_P_2202, 0, sizeof l_P_2202);
l_P_2202 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_2202 == NULL)) goto L_end2203;
{
if ((((*(R12 *)rt_nil_check(l_P_2202))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv2204 = r_BUILTIN(p_E, p_WANT);
return rv2204; }
}
l_P_2202 = r_LOOKUP_NEXT(l_P_2202);
}
RT_B_TICK();
} L_end2203: ;
}
{
R12 * l_B_2205; memset(&l_B_2205, 0, sizeof l_B_2205);
l_B_2205 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_2205 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_2205))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv2206 = r_BUILTIN(p_E, p_WANT);
return rv2206; }
}
if (((((*(R12 *)rt_nil_check(l_B_2205))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_2205))).f_ORIG == NULL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
}
{
R10 l_BASE_2207; memset(&l_BASE_2207, 0, sizeof l_BASE_2207);
S_R10(&l_BASE_2207, r_CLASS_OPERATION(((*(R21 *)rt_nil_check(p_E))).f_NAME), 0);
if (((l_BASE_2207).f_LEN > ((rt_int)0LL)))
{
{
R21 * l_N_2208; memset(&l_N_2208, 0, sizeof l_N_2208);
l_N_2208 = r_COPY_NODE(p_E);
S_R10(&((*(R21 *)rt_nil_check(l_N_2208))).f_NAME, l_BASE_2207, 0);
{ R26 rv2209 = r_BUILTIN(l_N_2208, p_WANT);
return rv2209; }
}
}
}
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv2210 = r_CALL_SYM(l_Y_2194, l_ARGS_2193, ((*(R21 *)rt_nil_check(p_E))).f_LINE);
return rv2210; }
rt_raise(RT_X_INIT);
}
static R10 r_CLASS_OPERATION(R10 p_NAME) { RT_B_TICK(); 
rstr l_S_2211; memset(&l_S_2211, 0, sizeof l_S_2211);
l_S_2211 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2211, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2213_lo = ((rt_int)1LL), it2213_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2213 = it2213_lo; it2213 <= it2213_hi; it2213++) {
{
if (rt_b_eq(rt_b_slice(l_S_2211, it2213, it2213), rt_str("$", 1)))
{
{
R10 l_P_2214; memset(&l_P_2214, 0, sizeof l_P_2214);
S_R10(&l_P_2214, r_MKN(rt_b_slice(l_S_2211, ((rt_int)0LL), rt_sub(it2213, ((rt_int)1LL)))), 0);
R10 l_B_2215; memset(&l_B_2215, 0, sizeof l_B_2215);
S_R10(&l_B_2215, r_MKN(rt_b_slice(l_S_2211, rt_add(it2213, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))), 0);
if ((((((((r_IS_TYPE_WORD(l_P_2214) || r_TEQS(l_P_2214, rt_str("INTEGER", 7))) || r_TEQS(l_P_2214, rt_str("BOOLEAN", 7))) || r_TEQS(l_P_2214, rt_str("ENUM", 4))) || r_TEQS(l_P_2214, rt_str("ARRAY", 5))) || r_TEQS(l_P_2214, rt_str("RECORD", 6))) || r_TEQS(l_P_2214, rt_str("PTR", 3))) || r_TEQS(l_P_2214, rt_str("SEMAPHORE", 9))))
{
{
R12 * l_Y_2216; memset(&l_Y_2216, 0, sizeof l_Y_2216);
l_Y_2216 = r_LOOKUP(l_B_2215);
for (;;) {
if ((l_Y_2216 == NULL)) goto L_end2217;
{
if ((((*(R12 *)rt_nil_check(l_Y_2216))).f_KIND == g_Y_BUILTIN))
{
{ R10 rv2218 = l_B_2215;
return rv2218; }
}
l_Y_2216 = r_LOOKUP_NEXT(l_Y_2216);
}
RT_B_TICK();
} L_end2217: ;
}
}
}
{ R10 rv2219 = r_NO_TEXT();
return rv2219; }
}
}
RT_B_TICK();
if (it2213 == it2213_hi) break;
} } L_end2212: ;
{ R10 rv2220 = r_NO_TEXT();
return rv2220; }
rt_raise(RT_X_INIT);
}
static R10 r_WHERE_SHORT_NAME(R10 p_NAME) { RT_B_TICK(); 
R12 * l_G_2221; memset(&l_G_2221, 0, sizeof l_G_2221);
l_G_2221 = r_CUR_GENERIC();
rstr l_S_2222; memset(&l_S_2222, 0, sizeof l_S_2222);
l_S_2222 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2222, r_STR(p_NAME, (p_NAME).f_LEN));
if ((l_G_2221 == NULL))
{
{ R10 rv2223 = p_NAME;
return rv2223; }
}
{ rt_int it2225_lo = ((rt_int)1LL), it2225_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2225 = it2225_lo; it2225 <= it2225_hi; it2225++) {
{
if (rt_b_eq(rt_b_slice(l_S_2222, it2225, it2225), rt_str("$", 1)))
{
if (((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_G_2221))).f_BINDINGS, r_MKN(rt_b_slice(l_S_2222, ((rt_int)0LL), rt_sub(it2225, ((rt_int)1LL))))) == NULL)) && r_IN_WHERE(l_G_2221, r_MKN(rt_b_slice(l_S_2222, rt_add(it2225, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))))))
{
{ R10 rv2226 = r_MKN(rt_b_slice(l_S_2222, rt_add(it2225, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))));
return rv2226; }
}
{ R10 rv2227 = p_NAME;
return rv2227; }
}
}
RT_B_TICK();
if (it2225 == it2225_hi) break;
} } L_end2224: ;
{ R10 rv2228 = p_NAME;
return rv2228; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_2229; memset(&l_B_2229, 0, sizeof l_B_2229);
l_B_2229 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_2230; memset(&l_S_2230, 0, sizeof l_S_2230);
l_S_2230 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2230, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2232_lo = ((rt_int)1LL), it2232_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2232 = it2232_lo; it2232 <= it2232_hi; it2232++) {
{
if (rt_b_eq(rt_b_slice(l_S_2230, it2232, it2232), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_2230, ((rt_int)0LL), rt_sub(it2232, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv2233 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_2230, rt_add(it2232, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv2233; }
}
goto L_end2231;
}
}
RT_B_TICK();
if (it2232 == it2232_hi) break;
} } L_end2231: ;
}
for (;;) {
if ((l_B_2229 == NULL)) goto L_end2234;
{
if (((!(((*(R20 *)rt_nil_check(l_B_2229))).f_R == NULL)) && r_TEQ(((*(R20 *)rt_nil_check(l_B_2229))).f_NAME, p_NAME)))
{
{ R12 * rv2235 = ((*(R20 *)rt_nil_check(l_B_2229))).f_R;
return rv2235; }
}
l_B_2229 = ((*(R20 *)rt_nil_check(l_B_2229))).f_NEXT;
}
RT_B_TICK();
} L_end2234: ;
{ R12 * rv2236 = NULL;
return rv2236; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R10 p_NAME) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv2237 = 0;
return rv2237; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv2238 = 0;
return rv2238; }
}
}
}
{ rt_int rv2239 = 1;
return rv2239; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R10 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { RT_B_TICK(); 
R12 * l_Y_2240; memset(&l_Y_2240, 0, sizeof l_Y_2240);
l_Y_2240 = r_LOOKUP(p_NAME);
R12 * l_BEST_2241; memset(&l_BEST_2241, 0, sizeof l_BEST_2241);
l_BEST_2241 = NULL;
rt_int l_BEST_SCORE_2242; memset(&l_BEST_SCORE_2242, 0, sizeof l_BEST_SCORE_2242);
l_BEST_SCORE_2242 = ((rt_int)0LL);
rt_int l_TIES_2243; memset(&l_TIES_2243, 0, sizeof l_TIES_2243);
l_TIES_2243 = ((rt_int)0LL);
rt_int l_COUNT_2244; memset(&l_COUNT_2244, 0, sizeof l_COUNT_2244);
l_COUNT_2244 = ((rt_int)0LL);
rt_int l_N_2245; memset(&l_N_2245, 0, sizeof l_N_2245);
l_N_2245 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_2240 == NULL)) goto L_end2246;
{
if ((!r_IS_ROUTINE(l_Y_2240)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2240))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end2246;
}
}
else if (r_CANDIDATE(l_Y_2240, p_NAME))
{
{
R12 * l_R_2247; memset(&l_R_2247, 0, sizeof l_R_2247);
l_R_2247 = r_ORIGINAL(l_Y_2240);
rt_int l_SCORE_2248; memset(&l_SCORE_2248, 0, sizeof l_SCORE_2248);
r_ROUTINE_HEADER(l_R_2247);
if ((((r_PARAM_COUNT(l_R_2247) == l_N_2245) && (!r_SEEN_ROUTINE(l_R_2247, p_NAME, l_Y_2240))) && (!r_HIDDEN_ROUTINE(l_R_2247, p_NAME, l_Y_2240))))
{
l_COUNT_2244 = rt_add(l_COUNT_2244, ((rt_int)1LL));
l_SCORE_2248 = r_MATCH_SCORE(l_R_2247, p_ARGS);
if ((l_SCORE_2248 > l_BEST_SCORE_2242))
{
l_BEST_2241 = l_R_2247;
l_BEST_SCORE_2242 = l_SCORE_2248;
l_TIES_2243 = ((rt_int)0LL);
}
else if (((l_SCORE_2248 == l_BEST_SCORE_2242) && (l_SCORE_2248 > ((rt_int)0LL))))
{
l_TIES_2243 = rt_add(l_TIES_2243, ((rt_int)1LL));
}
}
}
}
l_Y_2240 = r_LOOKUP_NEXT(l_Y_2240);
}
RT_B_TICK();
} L_end2246: ;
if (((l_TIES_2243 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv2249 = l_BEST_2241;
return rv2249; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2250; memset(&l_Y_2250, 0, sizeof l_Y_2250);
l_Y_2250 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2250 == p_STOP) || (l_Y_2250 == NULL))) goto L_end2251;
{
if ((((*(R12 *)rt_nil_check(l_Y_2250))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_2250) == p_R))
{
{ rt_int rv2252 = 1;
return rv2252; }
}
}
l_Y_2250 = r_LOOKUP_NEXT(l_Y_2250);
}
RT_B_TICK();
} L_end2251: ;
{ rt_int rv2253 = 0;
return rv2253; }
rt_raise(RT_X_INIT);
}
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R10 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2254; memset(&l_Y_2254, 0, sizeof l_Y_2254);
l_Y_2254 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2254 == p_STOP) || (l_Y_2254 == NULL))) goto L_end2255;
{
if (((((*(R12 *)rt_nil_check(l_Y_2254))).f_KIND == g_Y_ROUTINE) && (((*(R12 *)rt_nil_check(l_Y_2254))).f_DEPTH > ((*(R12 *)rt_nil_check(p_STOP))).f_DEPTH)))
{
{
R12 * l_O_2256; memset(&l_O_2256, 0, sizeof l_O_2256);
l_O_2256 = r_ORIGINAL(l_Y_2254);
if ((!(l_O_2256 == p_R)))
{
r_ROUTINE_HEADER(l_O_2256);
if (r_SAME_SIGNATURE(l_O_2256, p_R))
{
{ rt_int rv2257 = 1;
return rv2257; }
}
}
}
}
l_Y_2254 = r_LOOKUP_NEXT(l_Y_2254);
}
RT_B_TICK();
} L_end2255: ;
{ rt_int rv2258 = 0;
return rv2258; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B) { RT_B_TICK(); 
R28 * l_P_2259; memset(&l_P_2259, 0, sizeof l_P_2259);
l_P_2259 = ((*(R12 *)rt_nil_check(p_A))).f_PARAMS;
R28 * l_Q_2260; memset(&l_Q_2260, 0, sizeof l_Q_2260);
l_Q_2260 = ((*(R12 *)rt_nil_check(p_B))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_A))).f_GENERIC || ((*(R12 *)rt_nil_check(p_B))).f_GENERIC))
{
{ rt_int rv2261 = 0;
return rv2261; }
}
for (;;) {
if (((l_P_2259 == NULL) || (l_Q_2260 == NULL))) goto L_end2262;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2259))).f_MODE == ((*(R28 *)rt_nil_check(l_Q_2260))).f_MODE)))
{
{ rt_int rv2263 = 0;
return rv2263; }
}
if (((((*(R28 *)rt_nil_check(l_P_2259))).f_T == NULL) || (((*(R28 *)rt_nil_check(l_Q_2260))).f_T == NULL)))
{
if ((!(((*(R28 *)rt_nil_check(l_P_2259))).f_T == ((*(R28 *)rt_nil_check(l_Q_2260))).f_T)))
{
{ rt_int rv2264 = 0;
return rv2264; }
}
}
else if ((!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_2259))).f_T, ((*(R28 *)rt_nil_check(l_Q_2260))).f_T)))
{
{ rt_int rv2265 = 0;
return rv2265; }
}
l_P_2259 = ((*(R28 *)rt_nil_check(l_P_2259))).f_NEXT;
l_Q_2260 = ((*(R28 *)rt_nil_check(l_Q_2260))).f_NEXT;
}
RT_B_TICK();
} L_end2262: ;
{ rt_int rv2266 = ((l_P_2259 == NULL) && (l_Q_2260 == NULL));
return rv2266; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { RT_B_TICK(); 
rt_int l_N_2267; memset(&l_N_2267, 0, sizeof l_N_2267);
l_N_2267 = ((rt_int)0LL);
R28 * l_P_2268; memset(&l_P_2268, 0, sizeof l_P_2268);
l_P_2268 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_2268 == NULL)) goto L_end2269;
{
l_N_2267 = rt_add(l_N_2267, ((rt_int)1LL));
l_P_2268 = ((*(R28 *)rt_nil_check(l_P_2268))).f_NEXT;
}
RT_B_TICK();
} L_end2269: ;
{ rt_int rv2270 = l_N_2267;
return rv2270; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS) { RT_B_TICK(); 
R28 * l_P_2271; memset(&l_P_2271, 0, sizeof l_P_2271);
l_P_2271 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R27 * l_A_2272; memset(&l_A_2272, 0, sizeof l_A_2272);
l_A_2272 = p_ARGS;
rt_int l_EXACT_2273; memset(&l_EXACT_2273, 0, sizeof l_EXACT_2273);
l_EXACT_2273 = 1;
R20 * l_BS_2274; memset(&l_BS_2274, 0, sizeof l_BS_2274);
l_BS_2274 = r_NEW_BINDS();
R22 * l_PT_2275; memset(&l_PT_2275, 0, sizeof l_PT_2275);
for (;;) {
if ((l_P_2271 == NULL)) goto L_end2276;
{
l_PT_2275 = r_FORMAL_VIEW(p_R, l_P_2271);
if ((!(((*(R28 *)rt_nil_check(l_P_2271))).f_MODE == ((*(R27 *)rt_nil_check(l_A_2272))).f_MODE)))
{
{ rt_int rv2277 = ((rt_int)0LL);
return rv2277; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R28 *)rt_nil_check(l_P_2271))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_2271, l_A_2272, l_BS_2274)))
{
{ rt_int rv2278 = ((rt_int)0LL);
return rv2278; }
}
}
else if ((l_PT_2275 == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2272))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_A_2272))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv2279 = ((rt_int)0LL);
return rv2279; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_2272))
{
if ((!r_LITERAL_FITS(((*(R27 *)rt_nil_check(l_A_2272))).f_E, l_PT_2275)))
{
{ rt_int rv2280 = ((rt_int)0LL);
return rv2280; }
}
}
else
{
r_TYPE_ARG(l_A_2272);
{
R22 * l_AT_2281; memset(&l_AT_2281, 0, sizeof l_AT_2281);
l_AT_2281 = (((*(R27 *)rt_nil_check(l_A_2272))).f_V).f_T;
if ((!((r_SAME_CLASS(l_PT_2275, l_AT_2281) || (((((*(R22 *)rt_nil_check(l_AT_2281))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2275)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv2282 = ((rt_int)0LL);
return rv2282; }
}
if ((((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2275)))).f_GEN).f_LEN > ((rt_int)0LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2281)))).f_MLEN).f_OK))
{
{
R10 l_KEY_2283; memset(&l_KEY_2283, 0, sizeof l_KEY_2283);
S_R10(&l_KEY_2283, r_MKN(rt_b_cat(rt_str("%", 1), r_STR(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2275)))).f_GEN, (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2275)))).f_GEN).f_LEN))), 0);
R20 * l_B_2284; memset(&l_B_2284, 0, sizeof l_B_2284);
l_B_2284 = r_FIND_BIND(((*(R20 *)rt_nil_check(l_BS_2274))).f_NEXT, l_KEY_2283);
if ((!(l_B_2284 == NULL)))
{
if ((!(((*(R20 *)rt_nil_check(l_B_2284))).f_MV == (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2281)))).f_MLEN).f_V)))
{
{ rt_int rv2285 = ((rt_int)0LL);
return rv2285; }
}
}
else
{
r_ADD_BIND(l_KEY_2283, NULL, ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2281)))).f_MLEN, NULL, l_BS_2274);
}
}
}
if ((!r_SAME_TYPE(l_PT_2275, l_AT_2281)))
{
if ((((*(R28 *)rt_nil_check(l_P_2271))).f_MODE == g_M_INOUT))
{
{ rt_int rv2286 = ((rt_int)0LL);
return rv2286; }
}
l_EXACT_2273 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2281)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2275)))).f_KIND == g_T_INT)))
{
if (((((*(R28 *)rt_nil_check(l_P_2271))).f_MODE == g_M_IN) && (((*(R22 *)rt_nil_check(l_AT_2281))).f_SCALE > ((*(R22 *)rt_nil_check(l_PT_2275))).f_SCALE)))
{
{ rt_int rv2287 = ((rt_int)0LL);
return rv2287; }
}
else if (((((*(R28 *)rt_nil_check(l_P_2271))).f_MODE == g_M_OUT) && (((*(R22 *)rt_nil_check(l_PT_2275))).f_SCALE > ((*(R22 *)rt_nil_check(l_AT_2281))).f_SCALE)))
{
{ rt_int rv2288 = ((rt_int)0LL);
return rv2288; }
}
}
}
}
l_P_2271 = ((*(R28 *)rt_nil_check(l_P_2271))).f_NEXT;
l_A_2272 = ((*(R27 *)rt_nil_check(l_A_2272))).f_NEXT;
}
RT_B_TICK();
} L_end2276: ;
if (l_EXACT_2273)
{
{ rt_int rv2289 = ((rt_int)2LL);
return rv2289; }
}
{ rt_int rv2290 = ((rt_int)1LL);
return rv2290; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R21 * p_E, R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_2291; memset(&l_RT_2291, 0, sizeof l_RT_2291);
l_RT_2291 = r_REAL_TYPE(p_T);
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_2291))).f_KIND == g_T_ENUM))
{
{ rt_int rv2292 = (!(r_FIND_LITERAL(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_RT_2291) == NULL));
return rv2292; }
}
{ rt_int rv2293 = 0;
return rv2293; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv2294 = (((*(R22 *)rt_nil_check(l_RT_2291))).f_KIND == g_T_PTR);
return rv2294; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv2295 = (((*(R22 *)rt_nil_check(l_RT_2291))).f_KIND == g_T_REC);
return rv2295; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv2296 = (((*(R22 *)rt_nil_check(l_RT_2291))).f_KIND == g_T_ARR);
return rv2296; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv2297 = (((*(R22 *)rt_nil_check(l_RT_2291))).f_KIND == g_T_INT);
return rv2297; }
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv2298 = ((((*(R22 *)rt_nil_check(l_RT_2291))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_2291))).f_KIND == g_T_SEM));
return rv2298; }
}
{ rt_int rv2299 = 0;
return rv2299; }
rt_raise(RT_X_INIT);
}
static R12 * r_ARG_ROOT(R21 * p_E) { RT_B_TICK(); 
R21 * l_N_2300; memset(&l_N_2300, 0, sizeof l_N_2300);
l_N_2300 = p_E;
for (;;) {
if ((l_N_2300 == NULL)) goto L_end2301;
{
if (((((*(R21 *)rt_nil_check(l_N_2300))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_N_2300))).f_KIND == g_N_APPLY)))
{
{
R12 * l_Y_2302; memset(&l_Y_2302, 0, sizeof l_Y_2302);
l_Y_2302 = r_LOOKUP(((*(R21 *)rt_nil_check(l_N_2300))).f_NAME);
if ((l_Y_2302 == NULL))
{
{ R12 * rv2303 = NULL;
return rv2303; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2302))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2304 = NULL;
return rv2304; }
}
{ R12 * rv2305 = l_Y_2302;
return rv2305; }
}
}
else if (((((((*(R21 *)rt_nil_check(l_N_2300))).f_KIND == g_N_INDEX) || (((*(R21 *)rt_nil_check(l_N_2300))).f_KIND == g_N_FIELD)) || (((*(R21 *)rt_nil_check(l_N_2300))).f_KIND == g_N_SUBSTR)) || (((*(R21 *)rt_nil_check(l_N_2300))).f_KIND == g_N_PAREN)))
{
l_N_2300 = ((*(R21 *)rt_nil_check(l_N_2300))).f_A;
}
else
{
{ R12 * rv2306 = NULL;
return rv2306; }
}
}
RT_B_TICK();
} L_end2301: ;
{ R12 * rv2307 = NULL;
return rv2307; }
rt_raise(RT_X_INIT);
}
static R21 * r_PATH_OF(R21 * p_E) { RT_B_TICK(); 
R21 * l_N_2308; memset(&l_N_2308, 0, sizeof l_N_2308);
l_N_2308 = p_E;
R21 * l_P_2309; memset(&l_P_2309, 0, sizeof l_P_2309);
l_P_2309 = NULL;
for (;;) {
if ((l_N_2308 == NULL)) goto L_end2310;
{
if ((((*(R21 *)rt_nil_check(l_N_2308))).f_KIND == g_N_FIELD))
{
l_P_2309 = r_NAME_REF(((*(R21 *)rt_nil_check(l_N_2308))).f_NAME, ((rt_int)0LL), NULL, l_P_2309);
l_N_2308 = ((*(R21 *)rt_nil_check(l_N_2308))).f_A;
}
else if (((((*(R21 *)rt_nil_check(l_N_2308))).f_KIND == g_N_INDEX) || (((*(R21 *)rt_nil_check(l_N_2308))).f_KIND == g_N_SUBSTR)))
{
l_P_2309 = r_NAME_REF(r_MKN(rt_str("*", 1)), ((rt_int)0LL), NULL, l_P_2309);
l_N_2308 = ((*(R21 *)rt_nil_check(l_N_2308))).f_A;
}
else if ((((*(R21 *)rt_nil_check(l_N_2308))).f_KIND == g_N_APPLY))
{
l_P_2309 = r_NAME_REF(r_MKN(rt_str("*", 1)), ((rt_int)0LL), NULL, l_P_2309);
{ R21 * rv2311 = l_P_2309;
return rv2311; }
}
else if ((((*(R21 *)rt_nil_check(l_N_2308))).f_KIND == g_N_PAREN))
{
l_N_2308 = ((*(R21 *)rt_nil_check(l_N_2308))).f_A;
}
else
{
{ R21 * rv2312 = l_P_2309;
return rv2312; }
}
}
RT_B_TICK();
} L_end2310: ;
{ R21 * rv2313 = l_P_2309;
return rv2313; }
rt_raise(RT_X_INIT);
}
static rt_int r_DISJOINT_PATHS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_2314; memset(&l_P_2314, 0, sizeof l_P_2314);
l_P_2314 = p_A;
R21 * l_Q_2315; memset(&l_Q_2315, 0, sizeof l_Q_2315);
l_Q_2315 = p_B;
for (;;) {
if (((l_P_2314 == NULL) || (l_Q_2315 == NULL))) goto L_end2316;
{
if ((((!r_TEQS(((*(R21 *)rt_nil_check(l_P_2314))).f_NAME, rt_str("*", 1))) && (!r_TEQS(((*(R21 *)rt_nil_check(l_Q_2315))).f_NAME, rt_str("*", 1)))) && (!r_TEQ(((*(R21 *)rt_nil_check(l_P_2314))).f_NAME, ((*(R21 *)rt_nil_check(l_Q_2315))).f_NAME))))
{
{ rt_int rv2317 = 1;
return rv2317; }
}
l_P_2314 = ((*(R21 *)rt_nil_check(l_P_2314))).f_NEXT;
l_Q_2315 = ((*(R21 *)rt_nil_check(l_Q_2315))).f_NEXT;
}
RT_B_TICK();
} L_end2316: ;
{ rt_int rv2318 = 0;
return rv2318; }
rt_raise(RT_X_INIT);
}
static void r_EXPLICIT_GENERIC_ARGS(R12 * p_Y, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_USED_2319; memset(&l_USED_2319, 0, sizeof l_USED_2319);
l_USED_2319 = NULL;
R28 * l_P_2320; memset(&l_P_2320, 0, sizeof l_P_2320);
l_P_2320 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
R27 * l_A_2321; memset(&l_A_2321, 0, sizeof l_A_2321);
l_A_2321 = p_ARGS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_DECL == NULL))
{
return;
}
if (((!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_B == NULL)))
{
return;
}
r_NAMES_IN(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_B, &l_USED_2319);
for (;;) {
if (((l_P_2320 == NULL) || (l_A_2321 == NULL))) goto L_end2322;
{
if ((((((*(R28 *)rt_nil_check(l_P_2320))).f_MODE == g_M_IN) && r_IN_IDENTS(l_USED_2319, ((*(R28 *)rt_nil_check(l_P_2320))).f_NAME)) && (!(((*(R27 *)rt_nil_check(l_A_2321))).f_E == NULL))))
{
if ((!r_CONSTANT_EXPR(((*(R27 *)rt_nil_check(l_A_2321))).f_E)))
{
r_FAILT(p_LINE, rt_str("the argument of an explicit generic parameter invokes only pure functions (5): ", 79), ((*(R28 *)rt_nil_check(l_P_2320))).f_NAME);
}
}
l_P_2320 = ((*(R28 *)rt_nil_check(l_P_2320))).f_NEXT;
l_A_2321 = ((*(R27 *)rt_nil_check(l_A_2321))).f_NEXT;
}
RT_B_TICK();
} L_end2322: ;
}
static void r_NAMES_IN(R21 * p_L, R21 * *p_HEAD) { RT_B_TICK(); 
R21 * l_N_2323; memset(&l_N_2323, 0, sizeof l_N_2323);
l_N_2323 = p_L;
for (;;) {
if ((l_N_2323 == NULL)) goto L_end2324;
{
if (((((*(R21 *)rt_nil_check(l_N_2323))).f_KIND == g_N_NAME) || (((((*(R21 *)rt_nil_check(l_N_2323))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(l_N_2323))).f_A == NULL)))))
{
(*p_HEAD) = r_NAME_REF(((*(R21 *)rt_nil_check(l_N_2323))).f_NAME, ((rt_int)0LL), NULL, (*p_HEAD));
}
r_NAMES_IN(((*(R21 *)rt_nil_check(l_N_2323))).f_A, &(*p_HEAD));
r_NAMES_IN(((*(R21 *)rt_nil_check(l_N_2323))).f_B, &(*p_HEAD));
r_NAMES_IN(((*(R21 *)rt_nil_check(l_N_2323))).f_C, &(*p_HEAD));
l_N_2323 = ((*(R21 *)rt_nil_check(l_N_2323))).f_NEXT;
}
RT_B_TICK();
} L_end2324: ;
}
static rt_int r_CONSTANT_EXPR(R21 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv2325 = 1;
return rv2325; }
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY)))
{
{
R12 * l_Y_2326; memset(&l_Y_2326, 0, sizeof l_Y_2326);
l_Y_2326 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2326 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2326))).f_KIND == g_Y_ROUTINE))
{
if ((!(((*(R12 *)rt_nil_check(r_ORIGINAL(l_Y_2326)))).f_USES == NULL)))
{
{ rt_int rv2327 = 0;
return rv2327; }
}
}
}
}
}
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD))
{
{ rt_int rv2328 = r_CONSTANT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv2328; }
}
{ rt_int rv2329 = ((r_CONSTANT_LIST(((*(R21 *)rt_nil_check(p_E))).f_A) && r_CONSTANT_LIST(((*(R21 *)rt_nil_check(p_E))).f_B)) && r_CONSTANT_LIST(((*(R21 *)rt_nil_check(p_E))).f_C));
return rv2329; }
rt_raise(RT_X_INIT);
}
static rt_int r_CONSTANT_LIST(R21 * p_L) { RT_B_TICK(); 
R21 * l_N_2330; memset(&l_N_2330, 0, sizeof l_N_2330);
l_N_2330 = p_L;
for (;;) {
if ((l_N_2330 == NULL)) goto L_end2331;
{
if ((!r_CONSTANT_EXPR(l_N_2330)))
{
{ rt_int rv2332 = 0;
return rv2332; }
}
l_N_2330 = ((*(R21 *)rt_nil_check(l_N_2330))).f_NEXT;
}
RT_B_TICK();
} L_end2331: ;
{ rt_int rv2333 = 1;
return rv2333; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKED_ELEMENT(R21 * p_E) { RT_B_TICK(); 
R22 * l_AT_2334; memset(&l_AT_2334, 0, sizeof l_AT_2334);
l_AT_2334 = NULL;
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
{
R12 * l_Y_2335; memset(&l_Y_2335, 0, sizeof l_Y_2335);
l_Y_2335 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_2335 == NULL))
{
{ rt_int rv2336 = 0;
return rv2336; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2335))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(l_Y_2335))).f_T == NULL)))
{
{ rt_int rv2337 = 0;
return rv2337; }
}
l_AT_2334 = r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2335))).f_T);
}
}
else if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_INDEX))
{
{
R14 l_SAVED_CODE_2338; memset(&l_SAVED_CODE_2338, 0, sizeof l_SAVED_CODE_2338);
S_R14(&l_SAVED_CODE_2338, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
l_AT_2334 = r_REAL_TYPE((r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL)).f_T);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2338, 0);
}
}
else
{
{ rt_int rv2339 = 0;
return rv2339; }
}
if ((!(((*(R22 *)rt_nil_check(l_AT_2334))).f_KIND == g_T_ARR)))
{
{ rt_int rv2340 = 0;
return rv2340; }
}
{ rt_int rv2341 = (!(r_PACKING_OF(l_AT_2334) == ((rt_int)2LL)));
return rv2341; }
rt_raise(RT_X_INIT);
}
static void r_NO_ALIASING(R12 * p_Y, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_A_2342; memset(&l_A_2342, 0, sizeof l_A_2342);
l_A_2342 = p_ARGS;
for (;;) {
if ((l_A_2342 == NULL)) goto L_end2343;
{
if (((((*(R27 *)rt_nil_check(l_A_2342))).f_MODE == g_M_INOUT) && (!(((*(R27 *)rt_nil_check(l_A_2342))).f_E == NULL))))
{
if (r_PACKED_ELEMENT(((*(R27 *)rt_nil_check(l_A_2342))).f_E))
{
r_FAIL(p_LINE, rt_str("only elements of ARRAY_STD arrays are inout arguments (3.8.3)", 61));
}
}
l_A_2342 = ((*(R27 *)rt_nil_check(l_A_2342))).f_NEXT;
}
RT_B_TICK();
} L_end2343: ;
l_A_2342 = p_ARGS;
for (;;) {
if ((l_A_2342 == NULL)) goto L_end2344;
{
if (((((((*(R27 *)rt_nil_check(l_A_2342))).f_MODE == g_M_INOUT) || (((*(R27 *)rt_nil_check(l_A_2342))).f_MODE == g_M_OUT))) && (!(((*(R27 *)rt_nil_check(l_A_2342))).f_E == NULL))))
{
{
R12 * l_V_2345; memset(&l_V_2345, 0, sizeof l_V_2345);
l_V_2345 = r_ARG_ROOT(((*(R27 *)rt_nil_check(l_A_2342))).f_E);
R27 * l_B_2346; memset(&l_B_2346, 0, sizeof l_B_2346);
l_B_2346 = ((*(R27 *)rt_nil_check(l_A_2342))).f_NEXT;
if ((!(l_V_2345 == NULL)))
{
for (;;) {
if ((l_B_2346 == NULL)) goto L_end2347;
{
if (((((*(R27 *)rt_nil_check(l_B_2346))).f_MODE == ((*(R27 *)rt_nil_check(l_A_2342))).f_MODE) && (!(((*(R27 *)rt_nil_check(l_B_2346))).f_E == NULL))))
{
if (((r_ARG_ROOT(((*(R27 *)rt_nil_check(l_B_2346))).f_E) == l_V_2345) && (!r_DISJOINT_PATHS(r_PATH_OF(((*(R27 *)rt_nil_check(l_A_2342))).f_E), r_PATH_OF(((*(R27 *)rt_nil_check(l_B_2346))).f_E)))))
{
r_FAILT(p_LINE, rt_str("a variable is more than one inout or output argument (4.3.3): ", 62), ((*(R12 *)rt_nil_check(l_V_2345))).f_NAME);
}
}
l_B_2346 = ((*(R27 *)rt_nil_check(l_B_2346))).f_NEXT;
}
RT_B_TICK();
} L_end2347: ;
if (((((*(R27 *)rt_nil_check(l_A_2342))).f_MODE == g_M_INOUT) && (!(((*(R12 *)rt_nil_check(p_Y))).f_USES == NULL))))
{
{
R21 * l_U_2348; memset(&l_U_2348, 0, sizeof l_U_2348);
l_U_2348 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_2348 == NULL)) goto L_end2349;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_U_2348))).f_NAME, ((*(R12 *)rt_nil_check(l_V_2345))).f_NAME) && (((*(R21 *)rt_nil_check(l_U_2348))).f_IV == ((*(R12 *)rt_nil_check(l_V_2345))).f_OWNER)))
{
r_FAILT(p_LINE, rt_str("an inout argument the procedure also imports (4.3.3): ", 54), ((*(R12 *)rt_nil_check(l_V_2345))).f_NAME);
}
l_U_2348 = ((*(R21 *)rt_nil_check(l_U_2348))).f_NEXT;
}
RT_B_TICK();
} L_end2349: ;
}
}
}
}
}
l_A_2342 = ((*(R27 *)rt_nil_check(l_A_2342))).f_NEXT;
}
RT_B_TICK();
} L_end2344: ;
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
R20 * l_BS_2350; memset(&l_BS_2350, 0, sizeof l_BS_2350);
l_BS_2350 = r_NEW_BINDS();
R28 * l_P_2351; memset(&l_P_2351, 0, sizeof l_P_2351);
l_P_2351 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2352; memset(&l_A_2352, 0, sizeof l_A_2352);
l_A_2352 = p_ARGS;
rt_int l_SOME_M_2353; memset(&l_SOME_M_2353, 0, sizeof l_SOME_M_2353);
l_SOME_M_2353 = 0;
rt_int l_N_2354; memset(&l_N_2354, 0, sizeof l_N_2354);
l_N_2354 = ((rt_int)0LL);
for (;;) {
if (((l_P_2351 == NULL) || (l_A_2352 == NULL))) goto L_end2355;
{
if ((((((*(R28 *)rt_nil_check(l_P_2351))).f_MODE == g_M_IN) && (!(((*(R27 *)rt_nil_check(l_A_2352))).f_E == NULL))) && (!(((*(R28 *)rt_nil_check(l_P_2351))).f_T == NULL))))
{
{
R22 * l_RT_2356; memset(&l_RT_2356, 0, sizeof l_RT_2356);
l_RT_2356 = r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2351))).f_T);
R23 l_M_2357; memset(&l_M_2357, 0, sizeof l_M_2357);
S_R23(&l_M_2357, r_NO_MVAL(), 0);
if (((((*(R22 *)rt_nil_check(l_RT_2356))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2356))).f_SCALE == ((rt_int)0LL))))
{
if (r_MANIFEST_INT(((*(R27 *)rt_nil_check(l_A_2352))).f_E))
{
S_R23(&l_M_2357, r_MANIFEST(((*(R27 *)rt_nil_check(l_A_2352))).f_E), 0);
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_2356))).f_KIND == g_T_BOOL))
{
S_R23(&l_M_2357, r_MANIFEST(((*(R27 *)rt_nil_check(l_A_2352))).f_E), 0);
}
else if ((((*(R22 *)rt_nil_check(l_RT_2356))).f_KIND == g_T_ENUM))
{
S_R23(&l_M_2357, r_ENUM_MANIFEST(((*(R27 *)rt_nil_check(l_A_2352))).f_E, l_RT_2356), 0);
}
if ((l_M_2357).f_OK)
{
r_ADD_BIND(r_MKN(rt_b_cat(rt_str("=", 1), r_STR(((*(R28 *)rt_nil_check(l_P_2351))).f_NAME, (((*(R28 *)rt_nil_check(l_P_2351))).f_NAME).f_LEN))), NULL, l_M_2357, NULL, l_BS_2350);
l_SOME_M_2353 = 1;
}
}
}
l_P_2351 = ((*(R28 *)rt_nil_check(l_P_2351))).f_NEXT;
l_A_2352 = ((*(R27 *)rt_nil_check(l_A_2352))).f_NEXT;
}
RT_B_TICK();
} L_end2355: ;
if ((!l_SOME_M_2353))
{
r_NEED_BODY(p_G);
{ R12 * rv2358 = p_G;
return rv2358; }
}
{
R12 * l_I_2359; memset(&l_I_2359, 0, sizeof l_I_2359);
l_I_2359 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2359 == NULL)) goto L_end2360;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2359))).f_BINDINGS, ((*(R20 *)rt_nil_check(l_BS_2350))).f_NEXT))
{
{ R12 * rv2361 = l_I_2359;
return rv2361; }
}
l_N_2354 = rt_add(l_N_2354, ((rt_int)1LL));
l_I_2359 = ((*(R12 *)rt_nil_check(l_I_2359))).f_INSTANCES;
}
RT_B_TICK();
} L_end2360: ;
}
if ((l_N_2354 > ((rt_int)256LL)))
{
r_FAILT(p_LINE, rt_str("the INLINE expansions of the routine do not end (4.3.1): ", 57), ((*(R12 *)rt_nil_check(p_G))).f_NAME);
}
{ R12 * rv2362 = r_NEW_INSTANCE(p_G, ((*(R20 *)rt_nil_check(l_BS_2350))).f_NEXT, p_ARGS);
return rv2362; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_VISIBLE_2363; memset(&l_VISIBLE_2363, 0, sizeof l_VISIBLE_2363);
l_VISIBLE_2363 = r_SEG_VISIBLE(p_Y0, p_LINE);
R12 * l_Y_2364; memset(&l_Y_2364, 0, sizeof l_Y_2364);
l_Y_2364 = r_ORIGINAL(p_Y0);
R28 * l_P_2365; memset(&l_P_2365, 0, sizeof l_P_2365);
R27 * l_A_2366; memset(&l_A_2366, 0, sizeof l_A_2366);
l_A_2366 = p_ARGS;
R10 l_C_2367; memset(&l_C_2367, 0, sizeof l_C_2367);
S_R10(&l_C_2367, r_MK(rt_str("", 0)), 0);
R10 l_SEP_2368; memset(&l_SEP_2368, 0, sizeof l_SEP_2368);
S_R10(&l_SEP_2368, r_MK(rt_str("", 0)), 0);
R10 l_PRE_2369; memset(&l_PRE_2369, 0, sizeof l_PRE_2369);
S_R10(&l_PRE_2369, r_MK(rt_str("", 0)), 0);
R10 l_POST_2370; memset(&l_POST_2370, 0, sizeof l_POST_2370);
S_R10(&l_POST_2370, r_MK(rt_str("", 0)), 0);
rt_int l_SHARED_2371; memset(&l_SHARED_2371, 0, sizeof l_SHARED_2371);
l_SHARED_2371 = 0;
R22 * l_PT_2372; memset(&l_PT_2372, 0, sizeof l_PT_2372);
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
if (((((*(R12 *)rt_nil_check(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R))).f_DECL == ((*(R12 *)rt_nil_check(l_Y_2364))).f_DECL) && (!(((*(R12 *)rt_nil_check(l_Y_2364))).f_DECL == NULL))))
{
if ((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2364))).f_DECL))).f_FL == ((rt_int)1LL)))
{
r_FAILT(p_LINE, rt_str("an INLINE routine cannot be recursive (4.3.1): ", 47), ((*(R12 *)rt_nil_check(l_Y_2364))).f_NAME);
}
}
}
if (((*(R12 *)rt_nil_check(l_Y_2364))).f_GENERIC)
{
l_Y_2364 = r_INSTANCE(l_Y_2364, p_ARGS, p_LINE);
}
else if (((!(((*(R12 *)rt_nil_check(l_Y_2364))).f_DECL == NULL)) && (((*(R12 *)rt_nil_check(l_Y_2364))).f_BINDINGS == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2364))).f_DECL))).f_KIND == g_N_ROUTINE) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2364))).f_DECL))).f_FL == ((rt_int)1LL))))
{
l_Y_2364 = r_INLINE_INSTANCE(l_Y_2364, p_ARGS, p_LINE);
}
}
r_CHECK_CALL_IMPORTS(l_Y_2364, p_LINE);
r_NO_ALIASING(l_Y_2364, p_ARGS, p_LINE);
r_EXPLICIT_GENERIC_ARGS(l_Y_2364, p_ARGS, p_LINE);
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
if (((((*(R12 *)rt_nil_check(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R))).f_DECL == ((*(R12 *)rt_nil_check(l_Y_2364))).f_DECL) && (!(((*(R12 *)rt_nil_check(l_Y_2364))).f_DECL == NULL))))
{
if ((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2364))).f_DECL))).f_FL == ((rt_int)1LL)))
{
r_FAILT(p_LINE, rt_str("an INLINE routine cannot be recursive (4.3.1): ", 47), ((*(R12 *)rt_nil_check(l_Y_2364))).f_NAME);
}
{
R21 * l_U_2373; memset(&l_U_2373, 0, sizeof l_U_2373);
l_U_2373 = ((*(R12 *)rt_nil_check(l_Y_2364))).f_USES;
for (;;) {
if ((l_U_2373 == NULL)) goto L_end2374;
{
if ((!(r_LOOKUP(((*(R21 *)rt_nil_check(l_U_2373))).f_NAME) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_LOOKUP(((*(R21 *)rt_nil_check(l_U_2373))).f_NAME)))).f_LEVEL > ((rt_int)0LL)))
{
r_FAILT(p_LINE, rt_str("a recursive routine imports only static data (4.3.1): ", 54), ((*(R21 *)rt_nil_check(l_U_2373))).f_NAME);
}
}
l_U_2373 = ((*(R21 *)rt_nil_check(l_U_2373))).f_NEXT;
}
RT_B_TICK();
} L_end2374: ;
}
}
}
if ((!(r_CUR_GENERIC() == NULL)))
{
{
R27 * l_Q_2375; memset(&l_Q_2375, 0, sizeof l_Q_2375);
l_Q_2375 = p_ARGS;
rt_int l_GEN_ARG_2376; memset(&l_GEN_ARG_2376, 0, sizeof l_GEN_ARG_2376);
l_GEN_ARG_2376 = 0;
for (;;) {
if ((l_Q_2375 == NULL)) goto L_end2377;
{
if (((*(R27 *)rt_nil_check(l_Q_2375))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_Q_2375))).f_V).f_T == NULL)))
{
if (((((*(R22 *)rt_nil_check((((*(R27 *)rt_nil_check(l_Q_2375))).f_V).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
l_GEN_ARG_2376 = 1;
}
}
}
l_Q_2375 = ((*(R27 *)rt_nil_check(l_Q_2375))).f_NEXT;
}
RT_B_TICK();
} L_end2377: ;
if (l_GEN_ARG_2376)
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2364))).f_BINDINGS == NULL)))
{
r_REQUIRE_WHERE_SUBSET(l_Y_2364, p_LINE);
}
else
{
r_REQUIRE_WHERE(r_BASE_NAME(l_Y_2364), p_LINE);
}
}
}
}
{
R21 * l_U_2378; memset(&l_U_2378, 0, sizeof l_U_2378);
l_U_2378 = ((*(R12 *)rt_nil_check(l_Y_2364))).f_USES;
for (;;) {
if ((l_U_2378 == NULL)) goto L_end2379;
{
{
R12 * l_H_2380; memset(&l_H_2380, 0, sizeof l_H_2380);
l_H_2380 = r_LOOKUP(((*(R21 *)rt_nil_check(l_U_2378))).f_NAME);
if ((!(l_H_2380 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_H_2380))).f_WITHV == ((rt_int)2LL)) && (((*(R12 *)rt_nil_check(l_H_2380))).f_OWNER == ((*(R21 *)rt_nil_check(l_U_2378))).f_IV)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(l_Y_2364))).f_NAME, (((*(R12 *)rt_nil_check(l_Y_2364))).f_NAME).f_LEN)), rt_str(" imports ", 9)), r_STR(((*(R21 *)rt_nil_check(l_U_2378))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2378))).f_NAME).f_LEN)), rt_str(", which a WITH NAMING hides (4.5.4)", 35)));
}
}
}
l_U_2378 = ((*(R21 *)rt_nil_check(l_U_2378))).f_NEXT;
}
RT_B_TICK();
} L_end2379: ;
}
if (((((((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL)) || (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL)))) && (!(((*(R12 *)rt_nil_check(l_Y_2364))).f_USES == NULL))))
{
r_FAILT(p_LINE, rt_str("a record-spec is a closed scope: no function importing a variable (3.9.1): ", 75), ((*(R12 *)rt_nil_check(l_Y_2364))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_2364))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_C_2367, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_2364))).f_LEVEL), 0);
S_R10(&l_SEP_2368, r_MK(rt_str(", ", 2)), 0);
}
{
R27 * l_Q_2381; memset(&l_Q_2381, 0, sizeof l_Q_2381);
l_Q_2381 = p_ARGS;
for (;;) {
if ((l_Q_2381 == NULL)) goto L_end2382;
{
if ((!(((*(R27 *)rt_nil_check(l_Q_2381))).f_MODE == g_M_IN)))
{
l_SHARED_2371 = 1;
}
l_Q_2381 = ((*(R27 *)rt_nil_check(l_Q_2381))).f_NEXT;
}
RT_B_TICK();
} L_end2382: ;
if ((!(((*(R12 *)rt_nil_check(l_Y_2364))).f_USES == NULL)))
{
l_SHARED_2371 = 1;
}
}
l_P_2365 = ((*(R12 *)rt_nil_check(l_Y_2364))).f_PARAMS;
for (;;) {
if ((l_P_2365 == NULL)) goto L_end2383;
{
if ((l_A_2366 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
l_PT_2372 = r_FORMAL_VIEW(l_Y_2364, l_P_2365);
if ((l_PT_2372 == NULL))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2365))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2372)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_2384; memset(&l_V_2384, 0, sizeof l_V_2384);
R10 l_CV_2385; memset(&l_CV_2385, 0, sizeof l_CV_2385);
if ((((*(R27 *)rt_nil_check(l_A_2366))).f_HAVE && (!r_WANT_SENSITIVE(l_A_2366))))
{
S_R26(&l_V_2384, ((*(R27 *)rt_nil_check(l_A_2366))).f_V, 0);
}
else
{
S_R26(&l_V_2384, r_EXPR(((*(R27 *)rt_nil_check(l_A_2366))).f_E, l_PT_2372), 0);
}
S_R10(&l_CV_2385, r_CONVERT(l_V_2384, l_PT_2372, p_LINE, r_NO_TEXT()), 0);
if (((l_SHARED_2371 && (l_V_2384).f_LVAL) && r_IS_STRUCTURED(l_PT_2372)))
{
S_R10(&l_CV_2385, r_COPY_OF(l_PT_2372, l_CV_2385), 0);
}
S_R10(&l_C_2367, r_FMT3(rt_str("@@@", 3), l_C_2367, l_SEP_2368, l_CV_2385), 0);
S_R10(&l_SEP_2368, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_2386; memset(&l_V_2386, 0, sizeof l_V_2386);
if (((*(R27 *)rt_nil_check(l_A_2366))).f_HAVE)
{
S_R26(&l_V_2386, ((*(R27 *)rt_nil_check(l_A_2366))).f_V, 0);
}
else
{
S_R26(&l_V_2386, r_EXPR(((*(R27 *)rt_nil_check(l_A_2366))).f_E, l_PT_2372), 0);
}
if (((!(((*(R27 *)rt_nil_check(l_A_2366))).f_E == NULL)) && (!(l_V_2386).f_LVAL)))
{
if ((((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2366))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2366))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_2386, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_2386).f_C), (l_V_2386).f_T), 0);
(l_V_2386).f_LVAL = 1;
}
}
if ((!(l_V_2386).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(l_PT_2372, (l_V_2386).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(l_PT_2372));
}
if (((((*(R28 *)rt_nil_check(l_P_2365))).f_MODE == g_M_INOUT) && (!((r_SAME_TYPE(l_PT_2372, (l_V_2386).f_T) && r_SAME_RANGE(l_PT_2372, (l_V_2386).f_T))))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
if (((((*(R28 *)rt_nil_check(l_P_2365))).f_MODE == g_M_OUT) && (!((r_SAME_TYPE(l_PT_2372, (l_V_2386).f_T) && r_SAME_RANGE(l_PT_2372, (l_V_2386).f_T))))))
{
{
R10 l_TMP_2387; memset(&l_TMP_2387, 0, sizeof l_TMP_2387);
S_R10(&l_TMP_2387, r_NEW_NAME(rt_str("oa", 2)), 0);
R10 l_AP_2388; memset(&l_AP_2388, 0, sizeof l_AP_2388);
S_R10(&l_AP_2388, r_NEW_NAME(rt_str("op", 2)), 0);
S_R10(&l_PRE_2369, r_FMT4(rt_str("@ @ *@ = &@;", 12), l_PRE_2369, r_CTYPE((l_V_2386).f_T), l_AP_2388, (l_V_2386).f_C), 0);
S_R10(&l_PRE_2369, r_FMT4(rt_str("@ @ @ = @;", 10), l_PRE_2369, r_CTYPE(l_PT_2372), l_TMP_2387, r_COPY_OF((l_V_2386).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2388))), 0);
S_R10(&l_POST_2370, r_FMT2(rt_str("@ @", 3), l_POST_2370, r_STORE_CODE((l_V_2386).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2388), r_MKET(l_TMP_2387, l_PT_2372), p_LINE, r_NO_TEXT())), 0);
S_R10(&l_C_2367, r_FMT3(rt_str("@@&@", 4), l_C_2367, l_SEP_2368, l_TMP_2387), 0);
}
}
else
{
S_R10(&l_C_2367, r_FMT3(rt_str("@@&@", 4), l_C_2367, l_SEP_2368, (l_V_2386).f_C), 0);
}
S_R10(&l_SEP_2368, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_2366 = ((*(R27 *)rt_nil_check(l_A_2366))).f_NEXT;
l_P_2365 = ((*(R28 *)rt_nil_check(l_P_2365))).f_NEXT;
}
RT_B_TICK();
} L_end2383: ;
if ((!(l_A_2366 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
if (((l_PRE_2369).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2389 = r_MKET(r_FMT4(rt_str("({ @ @(@); @ })", 15), l_PRE_2369, ((*(R12 *)rt_nil_check(l_Y_2364))).f_ACCESS, l_C_2367, l_POST_2370), r_RESULT_VIEW(l_Y_2364));
return rv2389; }
}
{ R26 rv2390 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_2364))).f_ACCESS, l_C_2367), r_RESULT_VIEW(l_Y_2364));
return rv2390; }
rt_raise(RT_X_INIT);
}
static R22 * r_FORMAL_VIEW(R12 * p_R, R28 * p_P) { RT_B_TICK(); 
if (((((*(R28 *)rt_nil_check(p_P))).f_T == NULL) || (((*(R28 *)rt_nil_check(p_P))).f_TS == NULL)))
{
{ R22 * rv2391 = ((*(R28 *)rt_nil_check(p_P))).f_T;
return rv2391; }
}
{ R22 * rv2392 = r_OUTSIDE_VIEW(p_R, ((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R28 *)rt_nil_check(p_P))).f_T);
return rv2392; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESULT_VIEW(R12 * p_R) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_R))).f_DECL == NULL) || (((*(R12 *)rt_nil_check(p_R))).f_RESULT == NULL)))
{
{ R22 * rv2393 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2393; }
}
if (((!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B == NULL)))
{
{ R22 * rv2394 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2394; }
}
{ R22 * rv2395 = r_OUTSIDE_VIEW(p_R, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2395; }
rt_raise(RT_X_INIT);
}
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R21 * p_TS, R22 * p_T) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_R))).f_MODL == NULL) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)) || (!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))))
{
{ R22 * rv2396 = p_T;
return rv2396; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_R))).f_MODL))
{
{ R22 * rv2397 = p_T;
return rv2397; }
}
{
R12 * l_M_2398; memset(&l_M_2398, 0, sizeof l_M_2398);
l_M_2398 = ((*(R12 *)rt_nil_check(p_R))).f_MODL;
for (;;) {
if ((l_M_2398 == NULL)) goto L_end2399;
{
{
R12 * l_Y_2400; memset(&l_Y_2400, 0, sizeof l_Y_2400);
l_Y_2400 = r_MEMBER_TYPE(l_M_2398, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_2400 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_2400))).f_EXPORTED)
{
{ R22 * rv2401 = r_ABSTRACT_VIEW(l_Y_2400, p_T);
return rv2401; }
}
{ R22 * rv2402 = p_T;
return rv2402; }
}
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(l_M_2398))).f_MODL))
{
goto L_end2399;
}
l_M_2398 = ((*(R12 *)rt_nil_check(l_M_2398))).f_MODL;
}
RT_B_TICK();
} L_end2399: ;
}
{ R22 * rv2403 = p_T;
return rv2403; }
rt_raise(RT_X_INIT);
}
static R12 * r_MEMBER_TYPE(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2404; memset(&l_Y_2404, 0, sizeof l_Y_2404);
l_Y_2404 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
if (((*(R12 *)rt_nil_check(p_M))).f_BUSY)
{
{
R12 * l_Z_2405; memset(&l_Z_2405, 0, sizeof l_Z_2405);
l_Z_2405 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Z_2405 == NULL)) goto L_end2406;
{
if ((((((*(R12 *)rt_nil_check(l_Z_2405))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Z_2405))).f_MODL == p_M)) && (((*(R12 *)rt_nil_check(l_Z_2405))).f_ORIG == NULL)))
{
{ R12 * rv2407 = l_Z_2405;
return rv2407; }
}
l_Z_2405 = r_LOOKUP_NEXT(l_Z_2405);
}
RT_B_TICK();
} L_end2406: ;
}
{ R12 * rv2408 = NULL;
return rv2408; }
}
for (;;) {
if ((l_Y_2404 == NULL)) goto L_end2409;
{
if (((((*(R12 *)rt_nil_check(l_Y_2404))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_2404))).f_NAME, p_NAME)))
{
{ R12 * rv2410 = l_Y_2404;
return rv2410; }
}
l_Y_2404 = ((*(R12 *)rt_nil_check(l_Y_2404))).f_SNEXT;
}
RT_B_TICK();
} L_end2409: ;
{ R12 * rv2411 = NULL;
return rv2411; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_2412; memset(&l_K_2412, 0, sizeof l_K_2412);
l_K_2412 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND;
{ rt_int rv2413 = ((((l_K_2412 == g_T_STR) || (l_K_2412 == g_T_BITS)) || (l_K_2412 == g_T_ARR)) || (l_K_2412 == g_T_REC));
return rv2413; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2414; memset(&l_RA_2414, 0, sizeof l_RA_2414);
l_RA_2414 = r_REAL_TYPE(p_A);
R22 * l_RB_2415; memset(&l_RB_2415, 0, sizeof l_RB_2415);
l_RB_2415 = r_REAL_TYPE(p_B);
if ((!r_IS_NUMERIC_OR_ENUM(l_RA_2414)))
{
{ rt_int rv2416 = 1;
return rv2416; }
}
if ((((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2414))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2414))).f_HI_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2415))).f_LO_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2415))).f_HI_C)))
{
{ rt_int rv2417 = 1;
return rv2417; }
}
if ((((((*(R22 *)rt_nil_check(l_RA_2414))).f_LO_C).f_LEN == ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_RB_2415))).f_LO_C).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2418 = ((((*(R22 *)rt_nil_check(l_RA_2414))).f_LO_C).f_LEN == (((*(R22 *)rt_nil_check(l_RB_2415))).f_LO_C).f_LEN);
return rv2418; }
}
if (((((((*(R22 *)rt_nil_check(l_RA_2414))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_RB_2415))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_RA_2414))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(l_RB_2415))).f_MHI).f_OK))
{
{ rt_int rv2419 = (((((*(R22 *)rt_nil_check(l_RA_2414))).f_MLO).f_V == (((*(R22 *)rt_nil_check(l_RB_2415))).f_MLO).f_V) && ((((*(R22 *)rt_nil_check(l_RA_2414))).f_MHI).f_V == (((*(R22 *)rt_nil_check(l_RB_2415))).f_MHI).f_V));
return rv2419; }
}
{ rt_int rv2420 = (r_TEQ(((*(R22 *)rt_nil_check(l_RA_2414))).f_LO_C, ((*(R22 *)rt_nil_check(l_RB_2415))).f_LO_C) && r_TEQ(((*(R22 *)rt_nil_check(l_RA_2414))).f_HI_C, ((*(R22 *)rt_nil_check(l_RB_2415))).f_HI_C));
return rv2420; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R21 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2421 = 0;
return rv2421; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv2422 = 1;
return rv2422; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2423 = 1;
return rv2423; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2424 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_C);
return rv2424; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_N_REP) && r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_A)))
{
{ rt_int rv2425 = 1;
return rv2425; }
}
}
if ((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv2426 = r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv2426; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv2427 = r_STATIC_GENERIC(((*(R21 *)rt_nil_check(p_TS))).f_A);
return rv2427; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv2428 = ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv2428; }
}
else if (((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv2429 = 0;
return rv2429; }
}
{
R12 * l_Y_2430; memset(&l_Y_2430, 0, sizeof l_Y_2430);
l_Y_2430 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_2431; memset(&l_A_2431, 0, sizeof l_A_2431);
l_A_2431 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_2432; memset(&l_F_2432, 0, sizeof l_F_2432);
if ((l_Y_2430 == NULL))
{
{ rt_int rv2433 = 0;
return rv2433; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2430))).f_KIND == g_Y_GEN))
{
{ rt_int rv2434 = 1;
return rv2434; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2430))).f_DECL == NULL))
{
{ rt_int rv2435 = 0;
return rv2435; }
}
l_F_2432 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2430))).f_DECL))).f_A;
for (;;) {
if ((l_F_2432 == NULL)) goto L_end2436;
{
{
R21 * l_N_2437; memset(&l_N_2437, 0, sizeof l_N_2437);
l_N_2437 = ((*(R21 *)rt_nil_check(l_F_2432))).f_A;
for (;;) {
if ((l_N_2437 == NULL)) goto L_end2438;
{
if ((l_A_2431 == NULL))
{
{ rt_int rv2439 = 0;
return rv2439; }
}
if (((((*(R21 *)rt_nil_check(l_F_2432))).f_B == NULL) && ((((((*(R21 *)rt_nil_check(l_A_2431))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_A_2431))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_2431)))))
{
{ rt_int rv2440 = 1;
return rv2440; }
}
l_A_2431 = ((*(R21 *)rt_nil_check(l_A_2431))).f_NEXT;
l_N_2437 = ((*(R21 *)rt_nil_check(l_N_2437))).f_NEXT;
}
RT_B_TICK();
} L_end2438: ;
}
l_F_2432 = ((*(R21 *)rt_nil_check(l_F_2432))).f_NEXT;
}
RT_B_TICK();
} L_end2436: ;
}
}
{ rt_int rv2441 = 0;
return rv2441; }
rt_raise(RT_X_INIT);
}
static R21 * r_OWN_NAMES(R21 * p_R) { RT_B_TICK(); 
R21 * l_HEAD_2442; memset(&l_HEAD_2442, 0, sizeof l_HEAD_2442);
l_HEAD_2442 = NULL;
r_GEN_NAMES(((*(R21 *)rt_nil_check(p_R))).f_A, &l_HEAD_2442);
{ R21 * rv2443 = l_HEAD_2442;
return rv2443; }
rt_raise(RT_X_INIT);
}
static rt_int r_DECLARES_DERIVED(R21 * p_L) { RT_B_TICK(); 
R21 * l_N_2444; memset(&l_N_2444, 0, sizeof l_N_2444);
l_N_2444 = p_L;
for (;;) {
if ((l_N_2444 == NULL)) goto L_end2445;
{
if (((((*(R21 *)rt_nil_check(l_N_2444))).f_KIND == g_TS_GEN) && ((((*(R21 *)rt_nil_check(l_N_2444))).f_NAME).f_LEN > ((rt_int)0LL))))
{
{ rt_int rv2446 = 1;
return rv2446; }
}
if ((((*(R21 *)rt_nil_check(l_N_2444))).f_KIND == g_N_PARAM))
{
if (r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(l_N_2444))).f_B))
{
{ rt_int rv2447 = 1;
return rv2447; }
}
}
else if ((!(((*(R21 *)rt_nil_check(l_N_2444))).f_KIND == g_TS_GEN)))
{
if ((r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(l_N_2444))).f_A) || r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(l_N_2444))).f_C)))
{
{ rt_int rv2448 = 1;
return rv2448; }
}
if ((!(((*(R21 *)rt_nil_check(l_N_2444))).f_B == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_N_2444))).f_B))).f_KIND == g_N_RANGE))
{
if ((r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_N_2444))).f_B))).f_A) || r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_N_2444))).f_B))).f_B)))
{
{ rt_int rv2449 = 1;
return rv2449; }
}
}
else if (r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(l_N_2444))).f_B))
{
{ rt_int rv2450 = 1;
return rv2450; }
}
}
}
l_N_2444 = ((*(R21 *)rt_nil_check(l_N_2444))).f_NEXT;
}
RT_B_TICK();
} L_end2445: ;
{ rt_int rv2451 = 0;
return rv2451; }
rt_raise(RT_X_INIT);
}
static R22 * r_MARK_GENP(R22 * p_T, R10 p_NAME) { RT_B_TICK(); 
R22 * l_C_2452; memset(&l_C_2452, 0, sizeof l_C_2452);
l_C_2452 = r_COPY_TYP(p_T);
S_R10(&((*(R22 *)rt_nil_check(l_C_2452))).f_GENP, p_NAME, 0);
{ R22 * rv2453 = l_C_2452;
return rv2453; }
rt_raise(RT_X_INIT);
}
static R12 * r_CUR_GENERIC(void) { RT_B_TICK(); 
R18 * l_CS_2454; memset(&l_CS_2454, 0, sizeof l_CS_2454);
l_CS_2454 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
for (;;) {
if ((l_CS_2454 == NULL)) goto L_end2455;
{
if ((!(((*(R18 *)rt_nil_check(l_CS_2454))).f_R == NULL)))
{
if ((!(((*(R12 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_2454))).f_R))).f_BINDINGS == NULL)))
{
{ R12 * rv2456 = ((*(R18 *)rt_nil_check(l_CS_2454))).f_R;
return rv2456; }
}
}
l_CS_2454 = ((*(R18 *)rt_nil_check(l_CS_2454))).f_UP;
}
RT_B_TICK();
} L_end2455: ;
{ R12 * rv2457 = NULL;
return rv2457; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_WHERE(R12 * p_G, R10 p_NAME) { RT_B_TICK(); 
R21 * l_N_2458; memset(&l_N_2458, 0, sizeof l_N_2458);
l_N_2458 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
for (;;) {
if ((l_N_2458 == NULL)) goto L_end2459;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_2458))).f_A, p_NAME))
{
{ rt_int rv2460 = 1;
return rv2460; }
}
l_N_2458 = ((*(R21 *)rt_nil_check(l_N_2458))).f_NEXT;
}
RT_B_TICK();
} L_end2459: ;
{ rt_int rv2461 = 0;
return rv2461; }
rt_raise(RT_X_INIT);
}
static void r_REQUIRE_WHERE(R10 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_G_2462; memset(&l_G_2462, 0, sizeof l_G_2462);
l_G_2462 = r_CUR_GENERIC();
if ((l_G_2462 == NULL))
{
return;
}
if ((!r_IN_WHERE(l_G_2462, p_NAME)))
{
r_FAILT(p_LINE, rt_str("invoked with objects of a TYPE parameter, so named in the WHERE clause (5.2): ", 78), p_NAME);
}
}
static void r_REQUIRE_WHERE_SUBSET(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_N_2463; memset(&l_N_2463, 0, sizeof l_N_2463);
l_N_2463 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_D))).f_B;
R12 * l_G_2464; memset(&l_G_2464, 0, sizeof l_G_2464);
l_G_2464 = r_CUR_GENERIC();
if ((l_G_2464 == NULL))
{
return;
}
for (;;) {
if ((l_N_2463 == NULL)) goto L_end2465;
{
{
R21 * l_T_2466; memset(&l_T_2466, 0, sizeof l_T_2466);
l_T_2466 = ((*(R21 *)rt_nil_check(l_N_2463))).f_A;
for (;;) {
if ((l_T_2466 == NULL)) goto L_end2467;
{
if ((!r_IN_WHERE(l_G_2464, ((*(R21 *)rt_nil_check(l_T_2466))).f_NAME)))
{
r_FAILT(p_LINE, rt_str("the WHERE routines of the invoked generic routine are among the caller's (5.2): ", 80), ((*(R21 *)rt_nil_check(l_T_2466))).f_NAME);
}
l_T_2466 = ((*(R21 *)rt_nil_check(l_T_2466))).f_NEXT;
}
RT_B_TICK();
} L_end2467: ;
}
l_N_2463 = ((*(R21 *)rt_nil_check(l_N_2463))).f_NEXT;
}
RT_B_TICK();
} L_end2465: ;
}
static rt_int r_HAS_GEN_ARG(R21 * p_A) { RT_B_TICK(); 
R21 * l_P_2468; memset(&l_P_2468, 0, sizeof l_P_2468);
l_P_2468 = p_A;
for (;;) {
if ((l_P_2468 == NULL)) goto L_end2469;
{
if (((((*(R21 *)rt_nil_check(l_P_2468))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_P_2468))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2470 = 1;
return rv2470; }
}
l_P_2468 = ((*(R21 *)rt_nil_check(l_P_2468))).f_NEXT;
}
RT_B_TICK();
} L_end2469: ;
{ rt_int rv2471 = 0;
return rv2471; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { RT_B_TICK(); 
rt_int l_ENTERED_2472; memset(&l_ENTERED_2472, 0, sizeof l_ENTERED_2472);
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
l_ENTERED_2472 = r_ENTER_MODULE_FOR(p_Y);
{
R12 * l_SAVED_SEG_2473; memset(&l_SAVED_SEG_2473, 0, sizeof l_SAVED_SEG_2473);
l_SAVED_SEG_2473 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(p_Y))).f_HOME;
r_ROUTINE_HEADER1(p_Y);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_2473;
}
if (l_ENTERED_2472)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
}
static void r_ROUTINE_HEADER1(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2474; memset(&l_R_2474, 0, sizeof l_R_2474);
l_R_2474 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R21 * l_P_2475; memset(&l_P_2475, 0, sizeof l_P_2475);
R28 * l_TAIL_2476; memset(&l_TAIL_2476, 0, sizeof l_TAIL_2476);
l_TAIL_2476 = NULL;
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_2475 = ((*(R21 *)rt_nil_check(l_R_2474))).f_A;
for (;;) {
if ((l_P_2475 == NULL)) goto L_end2477;
{
if (((((*(R21 *)rt_nil_check(l_P_2475))).f_B == NULL) || r_STATIC_GENERIC(((*(R21 *)rt_nil_check(l_P_2475))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2475 = ((*(R21 *)rt_nil_check(l_P_2475))).f_NEXT;
}
RT_B_TICK();
} L_end2477: ;
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2474))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
{
R21 * l_N_2478; memset(&l_N_2478, 0, sizeof l_N_2478);
l_N_2478 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2474))).f_D))).f_B;
for (;;) {
if ((l_N_2478 == NULL)) goto L_end2479;
{
{
R21 * l_T_2480; memset(&l_T_2480, 0, sizeof l_T_2480);
l_T_2480 = ((*(R21 *)rt_nil_check(l_N_2478))).f_A;
for (;;) {
if ((l_T_2480 == NULL)) goto L_end2481;
{
if ((r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_2480))).f_B))).f_A) || r_DECLARES_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_2480))).f_B))).f_B)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_T_2480))).f_LINE, rt_str("a WHERE template declares no derived generic parameter (5.2): ", 62), ((*(R21 *)rt_nil_check(l_T_2480))).f_NAME);
}
l_T_2480 = ((*(R21 *)rt_nil_check(l_T_2480))).f_NEXT;
}
RT_B_TICK();
} L_end2481: ;
}
l_N_2478 = ((*(R21 *)rt_nil_check(l_N_2478))).f_NEXT;
}
RT_B_TICK();
} L_end2479: ;
}
}
l_P_2475 = ((*(R21 *)rt_nil_check(l_R_2474))).f_A;
for (;;) {
if ((l_P_2475 == NULL)) goto L_end2482;
{
{
R28 * l_PM_2483; memset(&l_PM_2483, 0, sizeof l_PM_2483);
l_PM_2483 = ((R28 *)rt_b_new(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2483)), ({ R28 rc2484; memset(&rc2484, 0, sizeof rc2484);  S_R10(&rc2484.f_NAME, ((*(R21 *)rt_nil_check(l_P_2475))).f_NAME, 0); rc2484.f_MODE = ((*(R21 *)rt_nil_check(l_P_2475))).f_IV; rc2484.f_T = NULL; rc2484.f_TS = ((*(R21 *)rt_nil_check(l_P_2475))).f_B; rc2484.f_NEXT = NULL; rc2484; }), 0);
if (((((*(R21 *)rt_nil_check(l_R_2474))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_P_2475))).f_IV == g_M_IN))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_2475))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!(((*(R21 *)rt_nil_check(l_P_2475))).f_B == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_2475))).f_B))).f_KIND == g_TS_ROUTINE) && (!(((*(R21 *)rt_nil_check(l_P_2475))).f_IV == g_M_IN))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_2475))).f_LINE, rt_str("a routine-spec declares only input parameters (5.1)", 51));
}
if (r_NAMES_VARIABLE_BUT(((*(R21 *)rt_nil_check(l_P_2475))).f_B, NULL, r_OWN_NAMES(l_R_2474)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_P_2475))).f_LINE, rt_str("the attributes in the type of a formal are manifest (4.3.1)", 59));
}
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R28 *)rt_nil_check(l_PM_2483))).f_T = r_RESOLVE(((*(R21 *)rt_nil_check(l_P_2475))).f_B);
}
if ((l_TAIL_2476 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_2483;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2476))).f_NEXT = l_PM_2483;
}
l_TAIL_2476 = l_PM_2483;
}
l_P_2475 = ((*(R21 *)rt_nil_check(l_P_2475))).f_NEXT;
}
RT_B_TICK();
} L_end2482: ;
if ((!(((*(R21 *)rt_nil_check(l_R_2474))).f_B == NULL)))
{
if (r_NAMES_VARIABLE_BUT(((*(R21 *)rt_nil_check(l_R_2474))).f_B, NULL, r_OWN_NAMES(l_R_2474)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_2474))).f_LINE, rt_str("the returns-clause may not refer to a variable (4.3.1)", 54));
}
}
if ((((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC) && r_TEQS(r_BASE_NAME(p_Y), rt_str("STORE_", 6))) && (!(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS == NULL))))
{
{
R28 * l_LAST_2485; memset(&l_LAST_2485, 0, sizeof l_LAST_2485);
l_LAST_2485 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((((*(R28 *)rt_nil_check(l_LAST_2485))).f_NEXT == NULL)) goto L_end2486;
{
l_LAST_2485 = ((*(R28 *)rt_nil_check(l_LAST_2485))).f_NEXT;
}
RT_B_TICK();
} L_end2486: ;
if ((((!(l_LAST_2485 == ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS)) && (!(((*(R28 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS))).f_T == NULL))) && (!(((*(R28 *)rt_nil_check(l_LAST_2485))).f_T == NULL))))
{
if ((!r_SAME_CLASS(((*(R28 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS))).f_T, ((*(R28 *)rt_nil_check(l_LAST_2485))).f_T)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_R_2474))).f_LINE, rt_str("both arguments of STORE_ belong to the same type class (D.4)", 60));
}
}
}
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R12 *)rt_nil_check(p_Y))).f_RESULT = r_RESULT_TYPE(p_Y);
S_R10(&((*(R12 *)rt_nil_check(p_Y))).f_FWD, r_C_HEADER(p_Y), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(p_Y))).f_FWD, rt_str(";", 1)));
}
}
static R22 * r_RESULT_TYPE(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_2487; memset(&l_R_2487, 0, sizeof l_R_2487);
l_R_2487 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_2488; memset(&l_T_2488, 0, sizeof l_T_2488);
if ((((*(R21 *)rt_nil_check(l_R_2487))).f_B == NULL))
{
{ R22 * rv2489 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv2489; }
}
r_OPEN_SCOPE();
{
R28 * l_P_2490; memset(&l_P_2490, 0, sizeof l_P_2490);
l_P_2490 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2490 == NULL)) goto L_end2491;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2490))).f_T == NULL)))
{
{
R12 * l_V_2492; memset(&l_V_2492, 0, sizeof l_V_2492);
l_V_2492 = r_NEW_SYM(g_Y_CONST, ((*(R28 *)rt_nil_check(l_P_2490))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2492))).f_T = ((*(R28 *)rt_nil_check(l_P_2490))).f_T;
S_R10(&((*(R12 *)rt_nil_check(l_V_2492))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2490))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_V_2492))).f_INPUT = 1;
r_DEFINE(l_V_2492, ((*(R21 *)rt_nil_check(l_R_2487))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2490))).f_T, ((*(R12 *)rt_nil_check(l_V_2492))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_2487))).f_LINE, 0);
}
}
l_P_2490 = ((*(R28 *)rt_nil_check(l_P_2490))).f_NEXT;
}
RT_B_TICK();
} L_end2491: ;
}
l_T_2488 = r_RESOLVE(((*(R21 *)rt_nil_check(l_R_2487))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv2493 = l_T_2488;
return rv2493; }
rt_raise(RT_X_INIT);
}
static R10 r_C_HEADER(R12 * p_Y) { RT_B_TICK(); 
R10 l_PS_2494; memset(&l_PS_2494, 0, sizeof l_PS_2494);
S_R10(&l_PS_2494, r_MK(rt_str("", 0)), 0);
R10 l_SEP_2495; memset(&l_SEP_2495, 0, sizeof l_SEP_2495);
S_R10(&l_SEP_2495, r_MK(rt_str("", 0)), 0);
R28 * l_P_2496; memset(&l_P_2496, 0, sizeof l_P_2496);
l_P_2496 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PS_2494, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R10(&l_SEP_2495, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_2496 == NULL)) goto L_end2497;
{
if ((((*(R28 *)rt_nil_check(l_P_2496))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2496))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2496))).f_MODE == g_M_IN))
{
S_R10(&l_PS_2494, r_FMT4(rt_str("@@@ p_@", 7), l_PS_2494, l_SEP_2495, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2496))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2496))).f_NAME)), 0);
S_R10(&l_SEP_2495, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R10(&l_PS_2494, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_2494, l_SEP_2495, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2496))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2496))).f_NAME)), 0);
S_R10(&l_SEP_2495, r_MK(rt_str(", ", 2)), 0);
}
l_P_2496 = ((*(R28 *)rt_nil_check(l_P_2496))).f_NEXT;
}
RT_B_TICK();
} L_end2497: ;
if (((l_PS_2494).f_LEN == ((rt_int)0LL)))
{
S_R10(&l_PS_2494, r_MK(rt_str("void", 4)), 0);
}
{ R10 rv2498 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2494);
return rv2498; }
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
R25 * l_B_2499; memset(&l_B_2499, 0, sizeof l_B_2499);
l_B_2499 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_2500; memset(&l_I_2500, 0, sizeof l_I_2500);
l_I_2500 = ((rt_int)0LL);
for (;;) {
if ((l_B_2499 == NULL)) goto L_end2501;
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2499))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2499))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_2500)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2499))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2499))).f_LO) || ((((*(R25 *)rt_nil_check(l_B_2499))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2499))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_2500)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2499))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_2500), p_PC, r_NUM(l_I_2500)), ((*(R25 *)rt_nil_check(l_B_2499))).f_LO), p_LINE, p_CHECK);
}
}
l_I_2500 = rt_add(l_I_2500, ((rt_int)1LL));
l_B_2499 = ((*(R25 *)rt_nil_check(l_B_2499))).f_NEXT;
}
RT_B_TICK();
} L_end2501: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_2502; memset(&l_U_2502, 0, sizeof l_U_2502);
l_U_2502 = r_REAL_TYPE(p_T);
R24 * l_F_2503; memset(&l_F_2503, 0, sizeof l_F_2503);
l_F_2503 = ((*(R22 *)rt_nil_check(l_U_2502))).f_FIELDS;
R25 * l_A_2504; memset(&l_A_2504, 0, sizeof l_A_2504);
l_A_2504 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_2503 == NULL) || (l_A_2504 == NULL))) goto L_end2505;
{
if ((!(((*(R24 *)rt_nil_check(l_F_2503))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_A_2504))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_A_2504))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R24 *)rt_nil_check(l_F_2503))).f_CNAME), p_LINE, p_CHECK);
}
l_A_2504 = ((*(R25 *)rt_nil_check(l_A_2504))).f_NEXT;
}
l_F_2503 = ((*(R24 *)rt_nil_check(l_F_2503))).f_NEXT;
}
RT_B_TICK();
} L_end2505: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R10 p_T) { RT_B_TICK(); 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2506 = 0;
return rv2506; }
}
{ rt_int rv2507 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv2507; }
rt_raise(RT_X_INIT);
}
static R10 r_GEN_TEXT_NAME(R10 p_T) { RT_B_TICK(); 
{ R10 rv2508 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv2508; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R10 p_NAME, R10 p_C, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
R12 * l_OLD_2509; memset(&l_OLD_2509, 0, sizeof l_OLD_2509);
l_OLD_2509 = r_LOOKUP(p_NAME);
if ((!(l_OLD_2509 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_2509))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_2509))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_2509))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_2510; memset(&l_G_2510, 0, sizeof l_G_2510);
l_G_2510 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_2510))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R10(&((*(R12 *)rt_nil_check(l_G_2510))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_2510))).f_INPUT = 1;
r_DEFINE(l_G_2510, p_LINE);
}
}
static R20 * r_NEW_BINDS(void) { RT_B_TICK(); 
R20 * l_B_2511; memset(&l_B_2511, 0, sizeof l_B_2511);
l_B_2511 = ((R20 *)rt_b_new(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_2511)), ({ R20 rc2512; memset(&rc2512, 0, sizeof rc2512);  S_R10(&rc2512.f_NAME, r_NO_TEXT(), 0); rc2512.f_T = NULL; S_R10(&rc2512.f_C, r_NO_TEXT(), 0); rc2512.f_HASMV = 0; rc2512.f_MV = ((rt_int)0LL); rc2512.f_R = NULL; rc2512.f_NEXT = NULL; rc2512; }), 0);
{ R20 * rv2513 = l_B_2511;
return rv2513; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R10 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R20 * p_HEAD) { RT_B_TICK(); 
R20 * l_B_2514; memset(&l_B_2514, 0, sizeof l_B_2514);
l_B_2514 = ((R20 *)rt_b_new(sizeof (R20)));
S_R20(&(*(R20 *)rt_nil_check(l_B_2514)), ({ R20 rc2515; memset(&rc2515, 0, sizeof rc2515);  S_R10(&rc2515.f_NAME, p_NAME, 0); rc2515.f_T = p_T; S_R10(&rc2515.f_C, r_NO_TEXT(), 0); rc2515.f_HASMV = (p_M).f_OK; rc2515.f_MV = (p_M).f_V; rc2515.f_R = p_R; rc2515.f_NEXT = ((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT; rc2515; }), 0);
if ((p_M).f_OK)
{
S_R10(&((*(R20 *)rt_nil_check(l_B_2514))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R20 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_2514;
}
static R20 * r_FIND_BIND(R20 * p_BS, R10 p_NAME) { RT_B_TICK(); 
R20 * l_B_2516; memset(&l_B_2516, 0, sizeof l_B_2516);
l_B_2516 = p_BS;
for (;;) {
if ((l_B_2516 == NULL)) goto L_end2517;
{
if (r_TEQ(((*(R20 *)rt_nil_check(l_B_2516))).f_NAME, p_NAME))
{
{ R20 * rv2518 = l_B_2516;
return rv2518; }
}
l_B_2516 = ((*(R20 *)rt_nil_check(l_B_2516))).f_NEXT;
}
RT_B_TICK();
} L_end2517: ;
{ R20 * rv2519 = NULL;
return rv2519; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R21 * p_TS, R22 * p_T, R20 * p_BS) { RT_B_TICK(); 
R22 * l_RT_2520; memset(&l_RT_2520, 0, sizeof l_RT_2520);
l_RT_2520 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv2521 = 1;
return rv2521; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv2522 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv2522; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2523 = 1;
return rv2523; }
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2524 = 1;
return rv2524; }
}
{
R20 * l_B_2525; memset(&l_B_2525, 0, sizeof l_B_2525);
l_B_2525 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_2525 == NULL)))
{
if ((((*(R20 *)rt_nil_check(l_B_2525))).f_T == NULL))
{
{ rt_int rv2526 = 0;
return rv2526; }
}
{ rt_int rv2527 = r_SAME_TYPE(((*(R20 *)rt_nil_check(l_B_2525))).f_T, p_T);
return rv2527; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_C == NULL) && r_NONSTANDARD_REP(p_T)))
{
{ rt_int rv2528 = 0;
return rv2528; }
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
{ rt_int rv2529 = 1;
return rv2529; }
}
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2520))).f_KIND == g_T_ARR)))
{
{ rt_int rv2530 = 0;
return rv2530; }
}
if ((!(r_LIST_LENGTH(((*(R21 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_2520))).f_DIMS)))
{
{ rt_int rv2531 = 0;
return rv2531; }
}
{ rt_int rv2532 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_2520))).f_ELEM, p_BS);
return rv2532; }
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv2533 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2533; }
}
else if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2534 = 0;
return rv2534; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_2520))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_2520))).f_MHI, p_BS))))
{
{ rt_int rv2535 = 0;
return rv2535; }
}
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_N_REP) && (!r_UNIFY_REP(((*(R21 *)rt_nil_check(p_TS))).f_C, l_RT_2520, p_BS))))
{
{ rt_int rv2536 = 0;
return rv2536; }
}
}
if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2520))).f_KIND == g_T_INT)))
{
{ rt_int rv2537 = 0;
return rv2537; }
}
{ rt_int rv2538 = ((r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2520))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS)) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)2LL)), r_SOME(((rt_int)0LL)), p_BS));
return rv2538; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv2539 = ((((*(R22 *)rt_nil_check(l_RT_2520))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2520))).f_SCALE == ((rt_int)0LL)));
return rv2539; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2520))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv2540 = 0;
return rv2540; }
}
{ rt_int rv2541 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2520))).f_SCALE), p_BS);
return rv2541; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv2542 = (((*(R22 *)rt_nil_check(l_RT_2520))).f_KIND == g_T_BOOL);
return rv2542; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv2543 = ((((*(R22 *)rt_nil_check(l_RT_2520))).f_KIND == g_T_STR) && r_SAME_DERIVED_LENGTH(r_NTH_ARG(p_TS, ((rt_int)0LL)), l_RT_2520, p_BS));
return rv2543; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2520))).f_KIND == g_T_STR)))
{
{ rt_int rv2544 = 0;
return rv2544; }
}
if ((!(((*(R21 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv2545 = 1;
return rv2545; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_2520))).f_BASE == NULL)))
{
{ rt_int rv2546 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_2520))).f_BASE, p_BS);
return rv2546; }
}
{ rt_int rv2547 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv2547; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv2548 = ((((*(R22 *)rt_nil_check(l_RT_2520))).f_KIND == g_T_BITS) && r_SAME_DERIVED_LENGTH(r_NTH_ARG(p_TS, ((rt_int)0LL)), l_RT_2520, p_BS));
return rv2548; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv2549 = (((*(R22 *)rt_nil_check(l_RT_2520))).f_KIND == g_T_SEM);
return rv2549; }
}
else if (r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2520))).f_KIND == g_T_PTR)))
{
{ rt_int rv2550 = 0;
return rv2550; }
}
{ rt_int rv2551 = r_UNIFY(((*(R21 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_2520), p_BS);
return rv2551; }
}
{
R12 * l_Y_2552; memset(&l_Y_2552, 0, sizeof l_Y_2552);
l_Y_2552 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_2552 == NULL))
{
{ rt_int rv2553 = 0;
return rv2553; }
}
if (((((*(R12 *)rt_nil_check(l_Y_2552))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_2552))).f_DECL == NULL)))
{
{ rt_int rv2554 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_2552))).f_T, p_T);
return rv2554; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2552))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv2555 = 0;
return rv2555; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_2552))))
{
{ rt_int rv2556 = 0;
return rv2556; }
}
}
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2552))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2520))).f_KIND == g_T_REC)))
{
{ rt_int rv2557 = 0;
return rv2557; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2520))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv2558 = 0;
return rv2558; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2520))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_2552))))
{
{ rt_int rv2559 = 0;
return rv2559; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv2560 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2560; }
}
{ rt_int rv2561 = r_UNIFY(r_SUBST_FORMALS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2552))).f_DECL))).f_B, ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2552))).f_DECL))).f_A, ((*(R21 *)rt_nil_check(p_TS))).f_A), l_RT_2520, p_BS);
return rv2561; }
}
{
R21 * l_F_2562; memset(&l_F_2562, 0, sizeof l_F_2562);
l_F_2562 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2552))).f_DECL))).f_A;
R21 * l_A_2563; memset(&l_A_2563, 0, sizeof l_A_2563);
l_A_2563 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R25 * l_V_2564; memset(&l_V_2564, 0, sizeof l_V_2564);
l_V_2564 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_2565; memset(&l_CLASS_2565, 0, sizeof l_CLASS_2565);
l_CLASS_2565 = r_RECORD_CLASS_OF(l_RT_2520);
for (;;) {
if ((l_F_2562 == NULL)) goto L_end2566;
{
{
R21 * l_N_2567; memset(&l_N_2567, 0, sizeof l_N_2567);
l_N_2567 = ((*(R21 *)rt_nil_check(l_F_2562))).f_A;
for (;;) {
if ((l_N_2567 == NULL)) goto L_end2568;
{
if ((l_A_2563 == NULL))
{
{ rt_int rv2569 = 0;
return rv2569; }
}
if ((((*(R21 *)rt_nil_check(l_F_2562))).f_B == NULL))
{
if ((!(l_CLASS_2565 == NULL)))
{
{
R20 * l_B_2570; memset(&l_B_2570, 0, sizeof l_B_2570);
l_B_2570 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_2565))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_N_2567))).f_NAME);
if ((!(l_B_2570 == NULL)))
{
if ((!r_UNIFY(l_A_2563, ((*(R20 *)rt_nil_check(l_B_2570))).f_T, p_BS)))
{
{ rt_int rv2571 = 0;
return rv2571; }
}
}
}
}
}
else
{
if ((!(l_V_2564 == NULL)))
{
if ((((!(((*(R21 *)rt_nil_check(l_A_2563))).f_KIND == g_TS_GEN)) && (!(((*(R21 *)rt_nil_check(l_A_2563))).f_KIND == g_N_DONTCARE))) && (!(((*(R21 *)rt_nil_check(l_A_2563))).f_KIND == g_N_ANY))))
{
{
R23 l_M_2572; memset(&l_M_2572, 0, sizeof l_M_2572);
S_R23(&l_M_2572, r_MANIFEST(l_A_2563), 0);
if (((l_M_2572).f_OK && (((*(R25 *)rt_nil_check(l_V_2564))).f_MLO).f_OK))
{
if ((!((l_M_2572).f_V == (((*(R25 *)rt_nil_check(l_V_2564))).f_MLO).f_V)))
{
{ rt_int rv2573 = 0;
return rv2573; }
}
}
}
}
l_V_2564 = ((*(R25 *)rt_nil_check(l_V_2564))).f_NEXT;
}
}
l_A_2563 = ((*(R21 *)rt_nil_check(l_A_2563))).f_NEXT;
l_N_2567 = ((*(R21 *)rt_nil_check(l_N_2567))).f_NEXT;
}
RT_B_TICK();
} L_end2568: ;
}
l_F_2562 = ((*(R21 *)rt_nil_check(l_F_2562))).f_NEXT;
}
RT_B_TICK();
} L_end2566: ;
}
{ rt_int rv2574 = 1;
return rv2574; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_DERIVED_LENGTH(R21 * p_A, R22 * p_RT, R20 * p_BS) { RT_B_TICK(); 
if (((p_A == NULL) || (!(((*(R22 *)rt_nil_check(p_RT))).f_MLEN).f_OK)))
{
{ rt_int rv2575 = 1;
return rv2575; }
}
if (((!(((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) || ((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2576 = 1;
return rv2576; }
}
{
R10 l_KEY_2577; memset(&l_KEY_2577, 0, sizeof l_KEY_2577);
S_R10(&l_KEY_2577, r_MKN(rt_b_cat(rt_str("%", 1), r_STR(((*(R21 *)rt_nil_check(p_A))).f_NAME, (((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN))), 0);
R20 * l_B_2578; memset(&l_B_2578, 0, sizeof l_B_2578);
l_B_2578 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, l_KEY_2577);
if ((!(l_B_2578 == NULL)))
{
{ rt_int rv2579 = (((*(R20 *)rt_nil_check(l_B_2578))).f_MV == (((*(R22 *)rt_nil_check(p_RT))).f_MLEN).f_V);
return rv2579; }
}
r_ADD_BIND(l_KEY_2577, NULL, ((*(R22 *)rt_nil_check(p_RT))).f_MLEN, NULL, p_BS);
{ rt_int rv2580 = 1;
return rv2580; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_REP(R21 * p_R, R22 * p_RT, R20 * p_BS) { RT_B_TICK(); 
R21 * l_A_2581; memset(&l_A_2581, 0, sizeof l_A_2581);
l_A_2581 = ((*(R22 *)rt_nil_check(p_RT))).f_REPS;
if (r_TEQS(((*(R21 *)rt_nil_check(p_R))).f_NAME, rt_str("FIXED_REP", 9)))
{
if ((!(((*(R22 *)rt_nil_check(p_RT))).f_KIND == g_T_INT)))
{
{ rt_int rv2582 = 0;
return rv2582; }
}
{
R10 l_SIGNING_2583; memset(&l_SIGNING_2583, 0, sizeof l_SIGNING_2583);
S_R10(&l_SIGNING_2583, r_MK(rt_str("SIGNED", 6)), 0);
if ((!(l_A_2581 == NULL)))
{
if ((!((r_TEQS(((*(R21 *)rt_nil_check(l_A_2581))).f_NAME, rt_str("FIXED_REP", 9)) || r_TEQS(((*(R21 *)rt_nil_check(l_A_2581))).f_NAME, rt_str("FIXED_STD", 9))))))
{
{ rt_int rv2584 = 1;
return rv2584; }
}
if ((r_TEQS(((*(R21 *)rt_nil_check(l_A_2581))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R21 *)rt_nil_check(l_A_2581))).f_A == NULL))))
{
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2581))).f_A))).f_NEXT == NULL)))
{
S_R10(&l_SIGNING_2583, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_2581))).f_A))).f_NEXT))).f_NAME, 0);
}
}
}
if ((!r_UNIFY_VALUE(((*(R21 *)rt_nil_check(p_R))).f_A, r_STATIC_SIZE(p_RT), p_BS)))
{
{ rt_int rv2585 = 0;
return rv2585; }
}
if ((!(((*(R21 *)rt_nil_check(p_R))).f_A == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NEXT == NULL)))
{
if (((((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_KIND == g_N_ENUMLIT))) && (!r_TEQ(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_NAME, l_SIGNING_2583))))
{
{ rt_int rv2586 = 0;
return rv2586; }
}
}
}
{ rt_int rv2587 = 1;
return rv2587; }
}
}
if ((l_A_2581 == NULL))
{
{ rt_int rv2588 = 1;
return rv2588; }
}
{ rt_int rv2589 = r_TEQ(((*(R21 *)rt_nil_check(p_R))).f_NAME, ((*(R21 *)rt_nil_check(l_A_2581))).f_NAME);
return rv2589; }
rt_raise(RT_X_INIT);
}
static rt_int r_NONSTANDARD_REP(R22 * p_T) { RT_B_TICK(); 
R21 * l_R_2590; memset(&l_R_2590, 0, sizeof l_R_2590);
l_R_2590 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
if ((l_R_2590 == NULL))
{
{ rt_int rv2591 = 0;
return rv2591; }
}
if ((((*(R21 *)rt_nil_check(l_R_2590))).f_KIND == g_TS_GEN))
{
{ rt_int rv2592 = 0;
return rv2592; }
}
{ rt_int rv2593 = (((((r_TEQS(((*(R21 *)rt_nil_check(l_R_2590))).f_NAME, rt_str("FIXED_REP", 9)) || r_TEQS(((*(R21 *)rt_nil_check(l_R_2590))).f_NAME, rt_str("ENUM_REP", 8))) || r_TEQS(((*(R21 *)rt_nil_check(l_R_2590))).f_NAME, rt_str("ENUM_VAL_REP", 12))) || r_TEQS(((*(R21 *)rt_nil_check(l_R_2590))).f_NAME, rt_str("CHAR_STR_REP", 12))) || r_TEQS(((*(R21 *)rt_nil_check(l_R_2590))).f_NAME, rt_str("ARRAY_REP", 9))) || r_TEQS(((*(R21 *)rt_nil_check(l_R_2590))).f_NAME, rt_str("RECORD_REP", 10)));
return rv2593; }
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { RT_B_TICK(); 
R12 * l_R_2594; memset(&l_R_2594, 0, sizeof l_R_2594);
l_R_2594 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv2595 = NULL;
return rv2595; }
}
for (;;) {
if ((l_R_2594 == NULL)) goto L_end2596;
{
if ((((*(R12 *)rt_nil_check(l_R_2594))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv2597 = l_R_2594;
return rv2597; }
}
l_R_2594 = ((*(R12 *)rt_nil_check(l_R_2594))).f_INSTANCES;
}
RT_B_TICK();
} L_end2596: ;
{ R12 * rv2598 = NULL;
return rv2598; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R21 * p_A, R23 p_M, R20 * p_BS) { RT_B_TICK(); 
if ((p_A == NULL))
{
{ rt_int rv2599 = 1;
return rv2599; }
}
if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2600 = 1;
return rv2600; }
}
else if ((((*(R21 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R21 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2601 = 1;
return rv2601; }
}
{
R20 * l_B_2602; memset(&l_B_2602, 0, sizeof l_B_2602);
l_B_2602 = r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_2602 == NULL)))
{
{ rt_int rv2603 = ((((*(R20 *)rt_nil_check(l_B_2602))).f_HASMV && (p_M).f_OK) && (((*(R20 *)rt_nil_check(l_B_2602))).f_MV == (p_M).f_V));
return rv2603; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv2604 = 0;
return rv2604; }
}
r_ADD_BIND(((*(R21 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv2605 = 1;
return rv2605; }
}
{
R23 l_V_2606; memset(&l_V_2606, 0, sizeof l_V_2606);
S_R23(&l_V_2606, r_MANIFEST(p_A), 0);
if (((l_V_2606).f_OK && (p_M).f_OK))
{
{ rt_int rv2607 = ((l_V_2606).f_V == (p_M).f_V);
return rv2607; }
}
}
{ rt_int rv2608 = 1;
return rv2608; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R20 * p_BS) { RT_B_TICK(); 
if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv2609 = 0;
return rv2609; }
}
if (((!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME)) && (!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_APPLY))))
{
{ rt_int rv2610 = 0;
return rv2610; }
}
{ rt_int rv2611 = (!(r_FIND_ROUTINE_ARG(((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R27 *)rt_nil_check(p_A))).f_E, p_BS, ((rt_int)0LL), 0) == NULL));
return rv2611; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv2612 = 1;
return rv2612; }
}
r_TYPE_ARG(p_A);
{ rt_int rv2613 = r_UNIFY(((*(R28 *)rt_nil_check(p_P))).f_TS, (((*(R27 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv2613; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_BS_2614; memset(&l_BS_2614, 0, sizeof l_BS_2614);
l_BS_2614 = r_NEW_BINDS();
R28 * l_P_2615; memset(&l_P_2615, 0, sizeof l_P_2615);
l_P_2615 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2616; memset(&l_A_2616, 0, sizeof l_A_2616);
l_A_2616 = p_ARGS;
for (;;) {
if ((l_P_2615 == NULL)) goto L_end2617;
{
if ((((*(R28 *)rt_nil_check(l_P_2615))).f_TS == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2616))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2615))).f_NAME, r_ARG_TYPE(((*(R27 *)rt_nil_check(l_A_2616))).f_E), r_NO_MVAL(), NULL, l_BS_2614);
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2615))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2615))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R28 *)rt_nil_check(l_P_2615))).f_TS, ((*(R27 *)rt_nil_check(l_A_2616))).f_E, p_LINE), l_BS_2614);
}
else if (((((!(((*(R27 *)rt_nil_check(l_A_2616))).f_E == NULL)) && (!((*(R27 *)rt_nil_check(l_A_2616))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R28 *)rt_nil_check(l_P_2615))).f_TS))) && (((*(R21 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2616))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R27 *)rt_nil_check(l_A_2616))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(l_A_2616))).f_V, r_EXPR(((*(R27 *)rt_nil_check(l_A_2616))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(l_A_2616))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R28 *)rt_nil_check(l_P_2615))).f_TS, (((*(R27 *)rt_nil_check(l_A_2616))).f_V).f_T, l_BS_2614)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R28 *)rt_nil_check(l_P_2615))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2615))).f_TS))
{
r_ADD_BIND(r_MKN(rt_b_cat(rt_str("\?", 1), r_STR(((*(R28 *)rt_nil_check(l_P_2615))).f_NAME, (((*(R28 *)rt_nil_check(l_P_2615))).f_NAME).f_LEN))), (((*(R27 *)rt_nil_check(l_A_2616))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_2614);
}
}
l_P_2615 = ((*(R28 *)rt_nil_check(l_P_2615))).f_NEXT;
l_A_2616 = ((*(R27 *)rt_nil_check(l_A_2616))).f_NEXT;
}
RT_B_TICK();
} L_end2617: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_2614);
{
R12 * l_I_2618; memset(&l_I_2618, 0, sizeof l_I_2618);
l_I_2618 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2618 == NULL)) goto L_end2619;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2618))).f_BINDINGS, ((*(R20 *)rt_nil_check(l_BS_2614))).f_NEXT))
{
{ R12 * rv2620 = l_I_2618;
return rv2620; }
}
l_I_2618 = ((*(R12 *)rt_nil_check(l_I_2618))).f_INSTANCES;
}
RT_B_TICK();
} L_end2619: ;
}
{ R12 * rv2621 = r_NEW_INSTANCE(p_G, ((*(R20 *)rt_nil_check(l_BS_2614))).f_NEXT, p_ARGS);
return rv2621; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R20 * p_A, R20 * p_B) { RT_B_TICK(); 
R20 * l_P_2622; memset(&l_P_2622, 0, sizeof l_P_2622);
l_P_2622 = p_A;
for (;;) {
if ((l_P_2622 == NULL)) goto L_end2623;
{
{
R20 * l_Q_2624; memset(&l_Q_2624, 0, sizeof l_Q_2624);
l_Q_2624 = r_FIND_BIND(p_B, ((*(R20 *)rt_nil_check(l_P_2622))).f_NAME);
if ((l_Q_2624 == NULL))
{
{ rt_int rv2625 = 0;
return rv2625; }
}
if (((!(((*(R20 *)rt_nil_check(l_P_2622))).f_T == NULL)) || (!(((*(R20 *)rt_nil_check(l_Q_2624))).f_T == NULL))))
{
if (((((*(R20 *)rt_nil_check(l_P_2622))).f_T == NULL) || (((*(R20 *)rt_nil_check(l_Q_2624))).f_T == NULL)))
{
{ rt_int rv2626 = 0;
return rv2626; }
}
if ((!r_SAME_TYPE(((*(R20 *)rt_nil_check(l_P_2622))).f_T, ((*(R20 *)rt_nil_check(l_Q_2624))).f_T)))
{
{ rt_int rv2627 = 0;
return rv2627; }
}
if ((!r_SAME_LENGTH(((*(R20 *)rt_nil_check(l_P_2622))).f_T, ((*(R20 *)rt_nil_check(l_Q_2624))).f_T)))
{
{ rt_int rv2628 = 0;
return rv2628; }
}
if ((!r_SAME_REPS(((*(R20 *)rt_nil_check(l_P_2622))).f_T, ((*(R20 *)rt_nil_check(l_Q_2624))).f_T)))
{
{ rt_int rv2629 = 0;
return rv2629; }
}
}
if ((((!(((*(R20 *)rt_nil_check(l_P_2622))).f_HASMV == ((*(R20 *)rt_nil_check(l_Q_2624))).f_HASMV)) || (!(((*(R20 *)rt_nil_check(l_P_2622))).f_MV == ((*(R20 *)rt_nil_check(l_Q_2624))).f_MV))) || (!(((*(R20 *)rt_nil_check(l_P_2622))).f_R == ((*(R20 *)rt_nil_check(l_Q_2624))).f_R))))
{
{ rt_int rv2630 = 0;
return rv2630; }
}
}
l_P_2622 = ((*(R20 *)rt_nil_check(l_P_2622))).f_NEXT;
}
RT_B_TICK();
} L_end2623: ;
{ rt_int rv2631 = 1;
return rv2631; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2632; memset(&l_RA_2632, 0, sizeof l_RA_2632);
l_RA_2632 = r_REAL_TYPE(p_A);
R22 * l_RB_2633; memset(&l_RB_2633, 0, sizeof l_RB_2633);
l_RB_2633 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_2632))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_2632))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_2632))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_2633))).f_KIND))))
{
{ rt_int rv2634 = 1;
return rv2634; }
}
if (((((*(R22 *)rt_nil_check(l_RA_2632))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_2633))).f_MLEN).f_OK))
{
{ rt_int rv2635 = ((((*(R22 *)rt_nil_check(l_RA_2632))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_2633))).f_MLEN).f_V);
return rv2635; }
}
{ rt_int rv2636 = ((((*(R22 *)rt_nil_check(l_RA_2632))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_2633))).f_MLEN).f_OK);
return rv2636; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R21 * l_RA_2637; memset(&l_RA_2637, 0, sizeof l_RA_2637);
l_RA_2637 = ((*(R22 *)rt_nil_check(p_A))).f_REPS;
R21 * l_RB_2638; memset(&l_RB_2638, 0, sizeof l_RB_2638);
l_RB_2638 = ((*(R22 *)rt_nil_check(p_B))).f_REPS;
if (((l_RA_2637 == NULL) || (l_RB_2638 == NULL)))
{
{ rt_int rv2639 = (l_RA_2637 == l_RB_2638);
return rv2639; }
}
if ((l_RA_2637 == l_RB_2638))
{
{ rt_int rv2640 = 1;
return rv2640; }
}
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_RA_2637))).f_NAME, ((*(R21 *)rt_nil_check(l_RB_2638))).f_NAME)))
{
{ rt_int rv2641 = 0;
return rv2641; }
}
{
R21 * l_X_2642; memset(&l_X_2642, 0, sizeof l_X_2642);
l_X_2642 = ((*(R21 *)rt_nil_check(l_RA_2637))).f_A;
R21 * l_Y_2643; memset(&l_Y_2643, 0, sizeof l_Y_2643);
l_Y_2643 = ((*(R21 *)rt_nil_check(l_RB_2638))).f_A;
for (;;) {
if (((l_X_2642 == NULL) || (l_Y_2643 == NULL))) goto L_end2644;
{
if (((((((*(R21 *)rt_nil_check(l_X_2642))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_X_2642))).f_KIND == g_N_ENUMLIT))) && (((((*(R21 *)rt_nil_check(l_Y_2643))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_Y_2643))).f_KIND == g_N_ENUMLIT)))))
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_X_2642))).f_NAME, ((*(R21 *)rt_nil_check(l_Y_2643))).f_NAME)))
{
{ rt_int rv2645 = 0;
return rv2645; }
}
}
else
{
{
R23 l_MX_2646; memset(&l_MX_2646, 0, sizeof l_MX_2646);
S_R23(&l_MX_2646, r_MANIFEST(l_X_2642), 0);
R23 l_MY_2647; memset(&l_MY_2647, 0, sizeof l_MY_2647);
S_R23(&l_MY_2647, r_MANIFEST(l_Y_2643), 0);
if (((!((l_MX_2646).f_OK == (l_MY_2647).f_OK)) || (!((l_MX_2646).f_V == (l_MY_2647).f_V))))
{
{ rt_int rv2648 = 0;
return rv2648; }
}
}
}
l_X_2642 = ((*(R21 *)rt_nil_check(l_X_2642))).f_NEXT;
l_Y_2643 = ((*(R21 *)rt_nil_check(l_Y_2643))).f_NEXT;
}
RT_B_TICK();
} L_end2644: ;
{ rt_int rv2649 = ((((l_X_2642 == NULL) && (l_Y_2643 == NULL)) && (((*(R21 *)rt_nil_check(l_RA_2637))).f_B == NULL)) && (((*(R21 *)rt_nil_check(l_RB_2638))).f_B == NULL));
return rv2649; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R21 * p_TS, R21 * p_E, rt_int p_LINE) { RT_B_TICK(); 
{ R12 * rv2650 = r_FIND_ROUTINE_ARG(p_TS, p_E, NULL, p_LINE, 1);
return rv2650; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE_ARG(R21 * p_TS, R21 * p_E, R20 * p_BS0, rt_int p_LINE, rt_int p_STRICT) { RT_B_TICK(); 
R12 * l_Y_2651; memset(&l_Y_2651, 0, sizeof l_Y_2651);
l_Y_2651 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_2652; memset(&l_FOUND_2652, 0, sizeof l_FOUND_2652);
l_FOUND_2652 = NULL;
R20 * l_BS_2653; memset(&l_BS_2653, 0, sizeof l_BS_2653);
l_BS_2653 = p_BS0;
if ((l_BS_2653 == NULL))
{
l_BS_2653 = r_NEW_BINDS();
}
for (;;) {
if ((l_Y_2651 == NULL)) goto L_end2654;
{
if ((((*(R12 *)rt_nil_check(l_Y_2651))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_2655; memset(&l_R_2655, 0, sizeof l_R_2655);
l_R_2655 = r_ORIGINAL(l_Y_2651);
R20 * l_TRY_2656; memset(&l_TRY_2656, 0, sizeof l_TRY_2656);
l_TRY_2656 = r_NEW_BINDS();
((*(R20 *)rt_nil_check(l_TRY_2656))).f_NEXT = ((*(R20 *)rt_nil_check(l_BS_2653))).f_NEXT;
r_ROUTINE_HEADER(l_R_2655);
if ((((!((*(R12 *)rt_nil_check(l_R_2655))).f_GENERIC) && r_EXPLICIT_TEMPLATE_FITS(p_E, l_R_2655)) && r_TEMPLATE_FITS(p_TS, l_R_2655, l_TRY_2656)))
{
if (((!(l_FOUND_2652 == NULL)) && (!(l_FOUND_2652 == l_R_2655))))
{
if ((!p_STRICT))
{
{ R12 * rv2657 = NULL;
return rv2657; }
}
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_2652 = l_R_2655;
}
}
}
l_Y_2651 = r_LOOKUP_NEXT(l_Y_2651);
}
RT_B_TICK();
} L_end2654: ;
if ((l_FOUND_2652 == NULL))
{
if ((!p_STRICT))
{
{ R12 * rv2658 = NULL;
return rv2658; }
}
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter (5.1): ", 45), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_2652))).f_USES == NULL)))
{
if ((!p_STRICT))
{
{ R12 * rv2659 = NULL;
return rv2659; }
}
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
if (p_STRICT)
{
if ((!r_TEMPLATE_FITS(p_TS, l_FOUND_2652, l_BS_2653)))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter (5.1): ", 45), ((*(R21 *)rt_nil_check(p_E))).f_NAME);
}
r_NEED_BODY(l_FOUND_2652);
}
{ R12 * rv2660 = l_FOUND_2652;
return rv2660; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPLICIT_TEMPLATE_FITS(R21 * p_E, R12 * p_R) { RT_B_TICK(); 
R21 * l_A_2661; memset(&l_A_2661, 0, sizeof l_A_2661);
l_A_2661 = ((*(R21 *)rt_nil_check(p_E))).f_A;
R28 * l_Q_2662; memset(&l_Q_2662, 0, sizeof l_Q_2662);
l_Q_2662 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY)))
{
{ rt_int rv2663 = 1;
return rv2663; }
}
if (((!(((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
{ rt_int rv2664 = 0;
return rv2664; }
}
for (;;) {
if (((l_A_2661 == NULL) || (l_Q_2662 == NULL))) goto L_end2665;
{
if ((((*(R28 *)rt_nil_check(l_Q_2662))).f_T == NULL))
{
{ rt_int rv2666 = 0;
return rv2666; }
}
if ((!r_IDENTICAL_TYPE(r_RESOLVE(r_EXPR_TO_TS(l_A_2661)), ((*(R28 *)rt_nil_check(l_Q_2662))).f_T)))
{
{ rt_int rv2667 = 0;
return rv2667; }
}
l_A_2661 = ((*(R21 *)rt_nil_check(l_A_2661))).f_NEXT;
l_Q_2662 = ((*(R28 *)rt_nil_check(l_Q_2662))).f_NEXT;
}
RT_B_TICK();
} L_end2665: ;
if (((!(l_A_2661 == NULL)) || (!(l_Q_2662 == NULL))))
{
{ rt_int rv2668 = 0;
return rv2668; }
}
if ((!(((*(R21 *)rt_nil_check(p_E))).f_E == NULL)))
{
{ rt_int rv2669 = r_IDENTICAL_TYPE(r_RESOLVE(((*(R21 *)rt_nil_check(p_E))).f_E), ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2669; }
}
{ rt_int rv2670 = 1;
return rv2670; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEMPLATE_FITS(R21 * p_TS, R12 * p_R, R20 * p_BS) { RT_B_TICK(); 
R21 * l_P_2671; memset(&l_P_2671, 0, sizeof l_P_2671);
l_P_2671 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R28 * l_Q_2672; memset(&l_Q_2672, 0, sizeof l_Q_2672);
l_Q_2672 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
if ((!(((((*(R21 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL))) == ((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_IV == ((rt_int)1LL))))))
{
{ rt_int rv2673 = 0;
return rv2673; }
}
for (;;) {
if (((l_P_2671 == NULL) || (l_Q_2672 == NULL))) goto L_end2674;
{
if ((!(((*(R21 *)rt_nil_check(l_P_2671))).f_IV == ((*(R28 *)rt_nil_check(l_Q_2672))).f_MODE)))
{
{ rt_int rv2675 = 0;
return rv2675; }
}
if (((((*(R21 *)rt_nil_check(l_P_2671))).f_B == NULL) || (((*(R28 *)rt_nil_check(l_Q_2672))).f_T == NULL)))
{
if (((!(((*(R21 *)rt_nil_check(l_P_2671))).f_B == NULL)) || (!(((*(R28 *)rt_nil_check(l_Q_2672))).f_T == NULL))))
{
{ rt_int rv2676 = 0;
return rv2676; }
}
}
else if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_P_2671))).f_B))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2677 = 0;
return rv2677; }
}
else if ((!r_TYPE_FITS_SPEC(((*(R21 *)rt_nil_check(l_P_2671))).f_B, ((*(R28 *)rt_nil_check(l_Q_2672))).f_T, p_BS)))
{
{ rt_int rv2678 = 0;
return rv2678; }
}
l_P_2671 = ((*(R21 *)rt_nil_check(l_P_2671))).f_NEXT;
l_Q_2672 = ((*(R28 *)rt_nil_check(l_Q_2672))).f_NEXT;
}
RT_B_TICK();
} L_end2674: ;
if (((!(l_P_2671 == NULL)) || (!(l_Q_2672 == NULL))))
{
{ rt_int rv2679 = 0;
return rv2679; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if ((!r_TYPE_FITS_SPEC(((*(R21 *)rt_nil_check(p_TS))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT, p_BS)))
{
{ rt_int rv2680 = 0;
return rv2680; }
}
}
{
R21 * l_X_2681; memset(&l_X_2681, 0, sizeof l_X_2681);
l_X_2681 = ((*(R21 *)rt_nil_check(p_TS))).f_D;
for (;;) {
if ((l_X_2681 == NULL)) goto L_end2682;
{
if ((!r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_D))).f_A, ((*(R21 *)rt_nil_check(l_X_2681))).f_NAME)))
{
{ rt_int rv2683 = 0;
return rv2683; }
}
l_X_2681 = ((*(R21 *)rt_nil_check(l_X_2681))).f_NEXT;
}
RT_B_TICK();
} L_end2682: ;
}
{ rt_int rv2684 = 1;
return rv2684; }
rt_raise(RT_X_INIT);
}
static rt_int r_TYPE_FITS_SPEC(R21 * p_TS, R22 * p_T, R20 * p_BS) { RT_B_TICK(); 
if ((r_STATIC_GENERIC(p_TS) || r_HAS_DERIVED(p_TS)))
{
{ rt_int rv2685 = r_UNIFY(p_TS, p_T, p_BS);
return rv2685; }
}
{ rt_int rv2686 = r_IDENTICAL_TYPE(r_RESOLVE(p_TS), p_T);
return rv2686; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_DERIVED(R21 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2687 = 0;
return rv2687; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2688 = 1;
return rv2688; }
}
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if (r_HAS_GEN_ARG(((*(R21 *)rt_nil_check(p_TS))).f_A))
{
{ rt_int rv2689 = 1;
return rv2689; }
}
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if ((r_HAS_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_A) || r_HAS_DERIVED(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_TS))).f_B))).f_B)))
{
{ rt_int rv2690 = 1;
return rv2690; }
}
}
}
else if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2691 = 1;
return rv2691; }
}
{ rt_int rv2692 = 0;
return rv2692; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R20 * p_BS) { RT_B_TICK(); 
R21 * l_NEEDL_2693; memset(&l_NEEDL_2693, 0, sizeof l_NEEDL_2693);
l_NEEDL_2693 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R20 * l_SAVED_2694; memset(&l_SAVED_2694, 0, sizeof l_SAVED_2694);
l_SAVED_2694 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_2693 == NULL)) goto L_end2695;
{
{
R21 * l_T_2696; memset(&l_T_2696, 0, sizeof l_T_2696);
l_T_2696 = ((*(R21 *)rt_nil_check(l_NEEDL_2693))).f_A;
for (;;) {
if ((l_T_2696 == NULL)) goto L_end2697;
{
if ((r_FIND_BIND(((*(R20 *)rt_nil_check(p_BS))).f_NEXT, ((*(R21 *)rt_nil_check(l_T_2696))).f_NAME) == NULL))
{
{
R27 * l_ARGS_2698; memset(&l_ARGS_2698, 0, sizeof l_ARGS_2698);
l_ARGS_2698 = NULL;
R27 * l_TAIL_2699; memset(&l_TAIL_2699, 0, sizeof l_TAIL_2699);
l_TAIL_2699 = NULL;
R21 * l_P_2700; memset(&l_P_2700, 0, sizeof l_P_2700);
l_P_2700 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_T_2696))).f_B))).f_A;
R12 * l_R_2701; memset(&l_R_2701, 0, sizeof l_R_2701);
rt_int l_ENTERED_2702; memset(&l_ENTERED_2702, 0, sizeof l_ENTERED_2702);
l_ENTERED_2702 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_2700 == NULL)) goto L_end2703;
{
{
R27 * l_A_2704; memset(&l_A_2704, 0, sizeof l_A_2704);
if ((((*(R21 *)rt_nil_check(l_P_2700))).f_B == NULL))
{
l_A_2704 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_2704 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R21 *)rt_nil_check(l_P_2700))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R27 *)rt_nil_check(l_A_2704))).f_MODE = ((*(R21 *)rt_nil_check(l_P_2700))).f_IV;
if ((l_TAIL_2699 == NULL))
{
l_ARGS_2698 = l_A_2704;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2699))).f_NEXT = l_A_2704;
}
l_TAIL_2699 = l_A_2704;
}
l_P_2700 = ((*(R21 *)rt_nil_check(l_P_2700))).f_NEXT;
}
RT_B_TICK();
} L_end2703: ;
if (l_ENTERED_2702)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_2701 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(l_T_2696))).f_NAME, l_ARGS_2698, p_LINE, 0);
if ((l_R_2701 == NULL))
{
l_R_2701 = r_LOOKUP(((*(R21 *)rt_nil_check(l_T_2696))).f_NAME);
for (;;) {
if ((l_R_2701 == NULL)) goto L_end2705;
{
if ((((*(R12 *)rt_nil_check(l_R_2701))).f_KIND == g_Y_BUILTIN))
{
goto L_end2705;
}
l_R_2701 = r_LOOKUP_NEXT(l_R_2701);
}
RT_B_TICK();
} L_end2705: ;
}
if (((l_R_2701 == NULL) && (!r_IS_OPERATOR_NAME(((*(R21 *)rt_nil_check(l_T_2696))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R21 *)rt_nil_check(l_T_2696))).f_NAME);
}
if ((!(l_R_2701 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_R_2701))).f_KIND == g_Y_ROUTINE))
{
r_COMPUTE_USES(r_ORIGINAL(l_R_2701));
if ((!(((*(R12 *)rt_nil_check(r_ORIGINAL(l_R_2701)))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine named in a WHERE clause may not import data (5.2): ", 61), ((*(R21 *)rt_nil_check(l_T_2696))).f_NAME);
}
}
r_ADD_BIND(((*(R21 *)rt_nil_check(l_T_2696))).f_NAME, NULL, r_NO_MVAL(), l_R_2701, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R20 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_2696 = ((*(R21 *)rt_nil_check(l_T_2696))).f_NEXT;
}
RT_B_TICK();
} L_end2697: ;
}
l_NEEDL_2693 = ((*(R21 *)rt_nil_check(l_NEEDL_2693))).f_NEXT;
}
RT_B_TICK();
} L_end2695: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2694;
}
static rt_int r_DONTCARE_TYPE_ARG(R21 * p_TS) { RT_B_TICK(); 
if ((!(((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2706 = 0;
return rv2706; }
}
if ((r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{
R21 * l_A_2707; memset(&l_A_2707, 0, sizeof l_A_2707);
l_A_2707 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_A_2707 == NULL)) goto L_end2708;
{
if ((((*(R21 *)rt_nil_check(l_A_2707))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2709 = 1;
return rv2709; }
}
l_A_2707 = ((*(R21 *)rt_nil_check(l_A_2707))).f_NEXT;
}
RT_B_TICK();
} L_end2708: ;
}
{ rt_int rv2710 = 0;
return rv2710; }
}
{
R12 * l_Y_2711; memset(&l_Y_2711, 0, sizeof l_Y_2711);
l_Y_2711 = r_ORIG_LOOKUP(((*(R21 *)rt_nil_check(p_TS))).f_NAME);
R21 * l_A_2712; memset(&l_A_2712, 0, sizeof l_A_2712);
l_A_2712 = ((*(R21 *)rt_nil_check(p_TS))).f_A;
R21 * l_F_2713; memset(&l_F_2713, 0, sizeof l_F_2713);
if ((l_Y_2711 == NULL))
{
{ rt_int rv2714 = 0;
return rv2714; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2711))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_2711))).f_DECL == NULL)))
{
{ rt_int rv2715 = 0;
return rv2715; }
}
l_F_2713 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2711))).f_DECL))).f_A;
for (;;) {
if ((l_F_2713 == NULL)) goto L_end2716;
{
{
R21 * l_N_2717; memset(&l_N_2717, 0, sizeof l_N_2717);
l_N_2717 = ((*(R21 *)rt_nil_check(l_F_2713))).f_A;
for (;;) {
if ((l_N_2717 == NULL)) goto L_end2718;
{
if ((l_A_2712 == NULL))
{
{ rt_int rv2719 = 0;
return rv2719; }
}
if (((((*(R21 *)rt_nil_check(l_F_2713))).f_B == NULL) && (((*(R21 *)rt_nil_check(l_A_2712))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2720 = 1;
return rv2720; }
}
l_A_2712 = ((*(R21 *)rt_nil_check(l_A_2712))).f_NEXT;
l_N_2717 = ((*(R21 *)rt_nil_check(l_N_2717))).f_NEXT;
}
RT_B_TICK();
} L_end2718: ;
}
l_F_2713 = ((*(R21 *)rt_nil_check(l_F_2713))).f_NEXT;
}
RT_B_TICK();
} L_end2716: ;
}
{ rt_int rv2721 = 0;
return rv2721; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R20 * p_BS, R27 * p_ARGS) { RT_B_TICK(); 
R27 * l_A_2722; memset(&l_A_2722, 0, sizeof l_A_2722);
l_A_2722 = p_ARGS;
R12 * l_I_2723; memset(&l_I_2723, 0, sizeof l_I_2723);
l_I_2723 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R20 * l_SAVED_2724; memset(&l_SAVED_2724, 0, sizeof l_SAVED_2724);
l_SAVED_2724 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R12 * l_SAVED_SEG_2725; memset(&l_SAVED_SEG_2725, 0, sizeof l_SAVED_SEG_2725);
l_SAVED_SEG_2725 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R12 * l_HOME_2726; memset(&l_HOME_2726, 0, sizeof l_HOME_2726);
l_HOME_2726 = r_ENTER_HOME(p_G);
R28 * l_P_2727; memset(&l_P_2727, 0, sizeof l_P_2727);
l_P_2727 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R28 * l_TAIL_2728; memset(&l_TAIL_2728, 0, sizeof l_TAIL_2728);
l_TAIL_2728 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_2723)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_2723))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_2723))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_2723))).f_PARAMS = NULL;
S_R10(&((*(R12 *)rt_nil_check(l_I_2723))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_2723))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_2723;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(p_G))).f_HOME;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_2727 == NULL)) goto L_end2729;
{
{
R28 * l_PM_2730; memset(&l_PM_2730, 0, sizeof l_PM_2730);
l_PM_2730 = ((R28 *)rt_b_new(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2730)), (*(R28 *)rt_nil_check(l_P_2727)), 0);
((*(R28 *)rt_nil_check(l_PM_2730))).f_NEXT = NULL;
if ((((*(R28 *)rt_nil_check(l_P_2727))).f_TS == NULL))
{
((*(R28 *)rt_nil_check(l_PM_2730))).f_T = NULL;
}
else if ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2727))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R28 *)rt_nil_check(l_PM_2730))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2727))).f_TS) && ((*(R27 *)rt_nil_check(l_A_2722))).f_HAVE))
{
((*(R28 *)rt_nil_check(l_PM_2730))).f_T = (((*(R27 *)rt_nil_check(l_A_2722))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2730))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2730))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R28 *)rt_nil_check(l_PM_2730))).f_T = ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2730))).f_T))).f_BASE;
}
}
}
else
{
((*(R28 *)rt_nil_check(l_PM_2730))).f_T = r_RESOLVE(((*(R28 *)rt_nil_check(l_P_2727))).f_TS);
}
if ((!(((*(R28 *)rt_nil_check(l_P_2727))).f_TS == NULL)))
{
if (((((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2727))).f_TS))).f_KIND == g_TS_GEN) || (((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2727))).f_TS))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2727))).f_TS))).f_A == NULL))))) && ((((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2727))).f_TS))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((!(r_FIND_BIND(p_BS, ((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2727))).f_TS))).f_NAME) == NULL)))
{
if ((!(((*(R20 *)rt_nil_check(r_FIND_BIND(p_BS, ((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2727))).f_TS))).f_NAME)))).f_T == NULL)))
{
((*(R28 *)rt_nil_check(l_PM_2730))).f_T = r_MARK_GENP(((*(R28 *)rt_nil_check(l_PM_2730))).f_T, ((*(R21 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2727))).f_TS))).f_NAME);
}
}
}
}
((*(R28 *)rt_nil_check(l_PM_2730))).f_TS = NULL;
if ((l_TAIL_2728 == NULL))
{
((*(R12 *)rt_nil_check(l_I_2723))).f_PARAMS = l_PM_2730;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2728))).f_NEXT = l_PM_2730;
}
l_TAIL_2728 = l_PM_2730;
}
l_P_2727 = ((*(R28 *)rt_nil_check(l_P_2727))).f_NEXT;
l_A_2722 = ((*(R27 *)rt_nil_check(l_A_2722))).f_NEXT;
}
RT_B_TICK();
} L_end2729: ;
((*(R12 *)rt_nil_check(l_I_2723))).f_RESULT = r_RESULT_TYPE(l_I_2723);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2724;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_2725;
r_LEAVE_HOME(p_G, l_HOME_2726);
S_R10(&((*(R12 *)rt_nil_check(l_I_2723))).f_FWD, r_C_HEADER(l_I_2723), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_2723))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_2723))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_2723;
{ R12 * rv2731 = l_I_2723;
return rv2731; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R10 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2732 = 0;
return rv2732; }
}
{ rt_int rv2733 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv2733; }
rt_raise(RT_X_INIT);
}
static R21 * r_SUBST_FORMALS(R21 * p_TS, R21 * p_FORMALS, R21 * p_ARGS) { RT_B_TICK(); 
R21 * l_C_2734; memset(&l_C_2734, 0, sizeof l_C_2734);
if ((p_TS == NULL))
{
{ R21 * rv2735 = NULL;
return rv2735; }
}
if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R21 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R21 * l_F_2736; memset(&l_F_2736, 0, sizeof l_F_2736);
l_F_2736 = p_FORMALS;
R21 * l_A_2737; memset(&l_A_2737, 0, sizeof l_A_2737);
l_A_2737 = p_ARGS;
for (;;) {
if ((l_F_2736 == NULL)) goto L_end2738;
{
{
R21 * l_N_2739; memset(&l_N_2739, 0, sizeof l_N_2739);
l_N_2739 = ((*(R21 *)rt_nil_check(l_F_2736))).f_A;
for (;;) {
if ((l_N_2739 == NULL)) goto L_end2740;
{
if ((l_A_2737 == NULL))
{
{ R21 * rv2741 = p_TS;
return rv2741; }
}
if (((((*(R21 *)rt_nil_check(l_F_2736))).f_B == NULL) && r_TEQ(((*(R21 *)rt_nil_check(l_N_2739))).f_NAME, ((*(R21 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R21 * rv2742 = l_A_2737;
return rv2742; }
}
l_A_2737 = ((*(R21 *)rt_nil_check(l_A_2737))).f_NEXT;
l_N_2739 = ((*(R21 *)rt_nil_check(l_N_2739))).f_NEXT;
}
RT_B_TICK();
} L_end2740: ;
}
l_F_2736 = ((*(R21 *)rt_nil_check(l_F_2736))).f_NEXT;
}
RT_B_TICK();
} L_end2738: ;
}
{ R21 * rv2743 = p_TS;
return rv2743; }
}
l_C_2734 = r_COPY_NODE(p_TS);
if ((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R21 *)rt_nil_check(l_C_2734))).f_C = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R21 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R21 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R21 *)rt_nil_check(l_C_2734))).f_A = r_SUBST_FORMALS(((*(R21 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R21 * rv2744 = l_C_2734;
return rv2744; }
rt_raise(RT_X_INIT);
}
static R21 * r_COPY_NODE(R21 * p_N) { RT_B_TICK(); 
R21 * l_C_2745; memset(&l_C_2745, 0, sizeof l_C_2745);
l_C_2745 = ((R21 *)rt_b_new(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_C_2745)), (*(R21 *)rt_nil_check(p_N)), 0);
((*(R21 *)rt_nil_check(l_C_2745))).f_NEXT = NULL;
{ R21 * rv2746 = l_C_2745;
return rv2746; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_P_2747; memset(&l_P_2747, 0, sizeof l_P_2747);
l_P_2747 = p_L;
for (;;) {
if ((l_P_2747 == NULL)) goto L_end2748;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_P_2747))).f_NAME, p_NAME))
{
{ rt_int rv2749 = 1;
return rv2749; }
}
l_P_2747 = ((*(R21 *)rt_nil_check(l_P_2747))).f_NEXT;
}
RT_B_TICK();
} L_end2748: ;
{ rt_int rv2750 = 0;
return rv2750; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2751; memset(&l_IS_2751, 0, sizeof l_IS_2751);
l_IS_2751 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv2752 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2752; }
}
if ((l_IS_2751 == NULL))
{
{ rt_int rv2753 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2753; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R19 *)rt_nil_check(l_IS_2751))).f_ID) || (((*(R19 *)rt_nil_check(l_IS_2751))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv2754 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2754; }
}
if ((!(((*(R19 *)rt_nil_check(l_IS_2751))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2751))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2755 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2755; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2751))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2756 = 0;
return rv2756; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { RT_B_TICK(); 
R21 * l_ITEMS_2757; memset(&l_ITEMS_2757, 0, sizeof l_ITEMS_2757);
l_ITEMS_2757 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R21 * l_HEAD_2758; memset(&l_HEAD_2758, 0, sizeof l_HEAD_2758);
l_HEAD_2758 = NULL;
R21 * l_TAIL_2759; memset(&l_TAIL_2759, 0, sizeof l_TAIL_2759);
l_TAIL_2759 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_2757 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2757))).f_A, &l_HEAD_2758, &l_TAIL_2759);
r_ADD_USES(((*(R21 *)rt_nil_check(l_ITEMS_2757))).f_B, &l_HEAD_2758, &l_TAIL_2759);
{
R21 * l_R_2760; memset(&l_R_2760, 0, sizeof l_R_2760);
l_R_2760 = ((*(R21 *)rt_nil_check(l_ITEMS_2757))).f_C;
for (;;) {
if ((l_R_2760 == NULL)) goto L_end2761;
{
{
R12 * l_Z_2762; memset(&l_Z_2762, 0, sizeof l_Z_2762);
l_Z_2762 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2760))).f_NAME);
if (((l_Z_2762 == NULL) && (!r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_C, ((*(R21 *)rt_nil_check(l_R_2760))).f_NAME))))
{
r_FAILT(((*(R21 *)rt_nil_check(l_R_2760))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R21 *)rt_nil_check(l_R_2760))).f_NAME);
}
for (;;) {
if ((l_Z_2762 == NULL)) goto L_end2763;
{
if ((((*(R12 *)rt_nil_check(l_Z_2762))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2764; memset(&l_O_2764, 0, sizeof l_O_2764);
l_O_2764 = r_ORIGINAL(l_Z_2762);
R21 * l_U_2765; memset(&l_U_2765, 0, sizeof l_U_2765);
r_COMPUTE_USES(l_O_2764);
l_U_2765 = ((*(R12 *)rt_nil_check(l_O_2764))).f_USES;
for (;;) {
if ((l_U_2765 == NULL)) goto L_end2766;
{
if ((!r_IN_IDENTS(l_HEAD_2758, ((*(R21 *)rt_nil_check(l_U_2765))).f_NAME)))
{
{
R21 * l_N_2767; memset(&l_N_2767, 0, sizeof l_N_2767);
l_N_2767 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_U_2765))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_N_2767))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2765))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2767))).f_IV = ((*(R21 *)rt_nil_check(l_U_2765))).f_IV;
r_ADD_LIST(l_N_2767, &l_HEAD_2758, &l_TAIL_2759);
}
}
l_U_2765 = ((*(R21 *)rt_nil_check(l_U_2765))).f_NEXT;
}
RT_B_TICK();
} L_end2766: ;
}
}
l_Z_2762 = r_LOOKUP_NEXT(l_Z_2762);
}
RT_B_TICK();
} L_end2763: ;
}
l_R_2760 = ((*(R21 *)rt_nil_check(l_R_2760))).f_NEXT;
}
RT_B_TICK();
} L_end2761: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_2758;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static rt_int r_LOCAL_MODULE_EXPORTS(R21 * p_B, R10 p_NAME) { RT_B_TICK(); 
R21 * l_M_2768; memset(&l_M_2768, 0, sizeof l_M_2768);
if ((p_B == NULL))
{
{ rt_int rv2769 = 0;
return rv2769; }
}
l_M_2768 = ((*(R21 *)rt_nil_check(p_B))).f_C;
for (;;) {
if ((l_M_2768 == NULL)) goto L_end2770;
{
if ((((*(R21 *)rt_nil_check(l_M_2768))).f_KIND == g_N_MODULE))
{
if ((((((*(R21 *)rt_nil_check(l_M_2768))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(l_M_2768))).f_B, p_NAME)) || r_LOCAL_MODULE_EXPORTS(((*(R21 *)rt_nil_check(l_M_2768))).f_C, p_NAME)))
{
{ rt_int rv2771 = 1;
return rv2771; }
}
}
l_M_2768 = ((*(R21 *)rt_nil_check(l_M_2768))).f_NEXT;
}
RT_B_TICK();
} L_end2770: ;
{ rt_int rv2772 = 0;
return rv2772; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_USES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_2773; memset(&l_R_2773, 0, sizeof l_R_2773);
l_R_2773 = p_RS;
for (;;) {
if ((l_R_2773 == NULL)) goto L_end2774;
{
if ((((*(R21 *)rt_nil_check(l_R_2773))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_2773));
if ((!(((*(R21 *)rt_nil_check(l_R_2773))).f_E == NULL)))
{
r_IMPORTS_KNOWN(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2773))).f_E))).f_A, 0);
r_IMPORTS_KNOWN(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_2773))).f_E))).f_B, 1);
r_INPUT_IMPORT_CONFLICT(((*(R21 *)rt_nil_check(l_R_2773))).f_E, ((*(R21 *)rt_nil_check(l_R_2773))).f_LINE);
}
}
l_R_2773 = ((*(R21 *)rt_nil_check(l_R_2773))).f_NEXT;
}
RT_B_TICK();
} L_end2774: ;
}
static void r_IMPORTS_KNOWN(R21 * p_L, rt_int p_INOUT) { RT_B_TICK(); 
R21 * l_P_2775; memset(&l_P_2775, 0, sizeof l_P_2775);
l_P_2775 = p_L;
for (;;) {
if ((l_P_2775 == NULL)) goto L_end2776;
{
{
R12 * l_V_2777; memset(&l_V_2777, 0, sizeof l_V_2777);
l_V_2777 = r_LOOKUP(((*(R21 *)rt_nil_check(l_P_2775))).f_NAME);
if ((!(l_V_2777 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_V_2777))).f_KIND == g_Y_VAR))
{
if ((((!r_CHECK_IMPORTED(l_V_2777, ((*(R21 *)rt_nil_check(l_P_2775))).f_LINE)) && p_INOUT) && (!((*(R12 *)rt_nil_check(l_V_2777))).f_INPUT)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_2775))).f_LINE, rt_str("imported for change, but only for input in the enclosing scope (4.1.1): ", 72), ((*(R21 *)rt_nil_check(l_P_2775))).f_NAME);
}
}
}
}
l_P_2775 = ((*(R21 *)rt_nil_check(l_P_2775))).f_NEXT;
}
RT_B_TICK();
} L_end2776: ;
}
static void r_INPUT_IMPORT_CONFLICT(R21 * p_ITEMS, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_R_2778; memset(&l_R_2778, 0, sizeof l_R_2778);
l_R_2778 = ((*(R21 *)rt_nil_check(p_ITEMS))).f_C;
for (;;) {
if ((l_R_2778 == NULL)) goto L_end2779;
{
{
R12 * l_Z_2780; memset(&l_Z_2780, 0, sizeof l_Z_2780);
l_Z_2780 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2778))).f_NAME);
for (;;) {
if ((l_Z_2780 == NULL)) goto L_end2781;
{
if ((((*(R12 *)rt_nil_check(l_Z_2780))).f_KIND == g_Y_ROUTINE))
{
{
R21 * l_D_2782; memset(&l_D_2782, 0, sizeof l_D_2782);
l_D_2782 = ((*(R12 *)rt_nil_check(r_ORIGINAL(l_Z_2780)))).f_DECL;
if ((!(l_D_2782 == NULL)))
{
if (((((*(R21 *)rt_nil_check(l_D_2782))).f_KIND == g_N_ROUTINE) && (!(((*(R21 *)rt_nil_check(l_D_2782))).f_E == NULL))))
{
{
R21 * l_V_2783; memset(&l_V_2783, 0, sizeof l_V_2783);
l_V_2783 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2782))).f_E))).f_B;
for (;;) {
if ((l_V_2783 == NULL)) goto L_end2784;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(p_ITEMS))).f_A, ((*(R21 *)rt_nil_check(l_V_2783))).f_NAME))
{
r_FAILT(p_LINE, rt_str("imported for input, and inout by an imported routine (4.3.1): ", 62), ((*(R21 *)rt_nil_check(l_V_2783))).f_NAME);
}
l_V_2783 = ((*(R21 *)rt_nil_check(l_V_2783))).f_NEXT;
}
RT_B_TICK();
} L_end2784: ;
}
}
}
}
}
l_Z_2780 = r_LOOKUP_NEXT(l_Z_2780);
}
RT_B_TICK();
} L_end2781: ;
}
l_R_2778 = ((*(R21 *)rt_nil_check(l_R_2778))).f_NEXT;
}
RT_B_TICK();
} L_end2779: ;
}
static void r_ADD_USES(R21 * p_L, R21 * *p_HEAD, R21 * *p_TAIL) { RT_B_TICK(); 
R21 * l_P_2785; memset(&l_P_2785, 0, sizeof l_P_2785);
l_P_2785 = p_L;
for (;;) {
if ((l_P_2785 == NULL)) goto L_end2786;
{
{
R12 * l_V_2787; memset(&l_V_2787, 0, sizeof l_V_2787);
l_V_2787 = r_LOOKUP(((*(R21 *)rt_nil_check(l_P_2785))).f_NAME);
R21 * l_N_2788; memset(&l_N_2788, 0, sizeof l_N_2788);
l_N_2788 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_P_2785))).f_LINE);
if ((l_V_2787 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_P_2785))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R21 *)rt_nil_check(l_P_2785))).f_NAME);
}
S_R10(&((*(R21 *)rt_nil_check(l_N_2788))).f_NAME, ((*(R21 *)rt_nil_check(l_P_2785))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2788))).f_IV = ((*(R12 *)rt_nil_check(l_V_2787))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_2787))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_2788, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_2785 = ((*(R21 *)rt_nil_check(l_P_2785))).f_NEXT;
}
RT_B_TICK();
} L_end2786: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R19 * l_IS_2789; memset(&l_IS_2789, 0, sizeof l_IS_2789);
l_IS_2789 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R21 * l_U_2790; memset(&l_U_2790, 0, sizeof l_U_2790);
l_U_2790 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_2789 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R19 *)rt_nil_check(l_IS_2789))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_2790 == NULL)) goto L_end2791;
{
if ((!(((*(R21 *)rt_nil_check(l_U_2790))).f_IV == ((*(R19 *)rt_nil_check(l_IS_2789))).f_ID)))
{
if ((((*(R19 *)rt_nil_check(l_IS_2789))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2790))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2790))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!(((((((r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2789))).f_IMPORTS))).f_A, ((*(R21 *)rt_nil_check(l_U_2790))).f_NAME) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2789))).f_IMPORTS))).f_B, ((*(R21 *)rt_nil_check(l_U_2790))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2789))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2789))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2789))).f_IMPORTS))).f_E, p_Y)) || ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL)) && r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2789))).f_IMPORTS))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))) || r_IMPORTED_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R19 *)rt_nil_check(l_IS_2789))).f_IMPORTS))).f_C, ((*(R21 *)rt_nil_check(l_U_2790))).f_NAME)))))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R21 *)rt_nil_check(l_U_2790))).f_NAME, (((*(R21 *)rt_nil_check(l_U_2790))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_2790 = ((*(R21 *)rt_nil_check(l_U_2790))).f_NEXT;
}
RT_B_TICK();
} L_end2791: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R21 * p_RS, R10 p_NAME) { RT_B_TICK(); 
R21 * l_R_2792; memset(&l_R_2792, 0, sizeof l_R_2792);
l_R_2792 = p_RS;
for (;;) {
if ((l_R_2792 == NULL)) goto L_end2793;
{
{
R12 * l_Z_2794; memset(&l_Z_2794, 0, sizeof l_Z_2794);
l_Z_2794 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_2792))).f_NAME);
for (;;) {
if ((l_Z_2794 == NULL)) goto L_end2795;
{
if ((((*(R12 *)rt_nil_check(l_Z_2794))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2796; memset(&l_O_2796, 0, sizeof l_O_2796);
l_O_2796 = r_ORIGINAL(l_Z_2794);
r_COMPUTE_USES(l_O_2796);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_2796))).f_USES, p_NAME))
{
{ rt_int rv2797 = 1;
return rv2797; }
}
}
}
l_Z_2794 = r_LOOKUP_NEXT(l_Z_2794);
}
RT_B_TICK();
} L_end2795: ;
}
l_R_2792 = ((*(R21 *)rt_nil_check(l_R_2792))).f_NEXT;
}
RT_B_TICK();
} L_end2793: ;
{ rt_int rv2798 = 0;
return rv2798; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R21 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2799; memset(&l_M_2799, 0, sizeof l_M_2799);
l_M_2799 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_2799 == NULL)) goto L_end2800;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_2799))).f_NAME))
{
{ rt_int rv2801 = 1;
return rv2801; }
}
l_M_2799 = ((*(R12 *)rt_nil_check(l_M_2799))).f_MODL;
}
RT_B_TICK();
} L_end2800: ;
{ rt_int rv2802 = 0;
return rv2802; }
rt_raise(RT_X_INIT);
}
static R10 r_BASE_NAME(R12 * p_Y) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R10 rv2803 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv2803; }
}
{ R10 rv2804 = r_MKN(rt_b_slice(r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN), rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)), rt_sub((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN, ((rt_int)1LL))));
return rv2804; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2805; memset(&l_C_2805, 0, sizeof l_C_2805);
l_C_2805 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2805 == NULL)) goto L_end2806;
{
if ((((*(R17 *)rt_nil_check(l_C_2805))).f_KIND == ((rt_int)1LL)))
{
goto L_end2806;
}
if ((((*(R17 *)rt_nil_check(l_C_2805))).f_KIND == ((rt_int)3LL)))
{
{
R21 * l_H_2807; memset(&l_H_2807, 0, sizeof l_H_2807);
l_H_2807 = ((*(R17 *)rt_nil_check(l_C_2805))).f_HANDLERS;
for (;;) {
if ((l_H_2807 == NULL)) goto L_end2808;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_2807))).f_A, p_NAME))
{
{ rt_int rv2809 = 1;
return rv2809; }
}
l_H_2807 = ((*(R21 *)rt_nil_check(l_H_2807))).f_NEXT;
}
RT_B_TICK();
} L_end2808: ;
}
}
l_C_2805 = ((*(R17 *)rt_nil_check(l_C_2805))).f_NEXT;
}
RT_B_TICK();
} L_end2806: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv2810 = 1;
return rv2810; }
}
}
{ rt_int rv2811 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv2811; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R10 p_NAME) { RT_B_TICK(); 
R17 * l_C_2812; memset(&l_C_2812, 0, sizeof l_C_2812);
l_C_2812 = ((R17 *)rt_b_new(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_C_2812)), ({ R17 rc2813; memset(&rc2813, 0, sizeof rc2813);  rc2813.f_KIND = p_KIND; S_R10(&rc2813.f_NAME, p_NAME, 0); rc2813.f_HANDLERS = NULL; rc2813.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc2813; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_2812;
}
static void r_POP_CTX(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R17 * r_LEAVE(rt_int p_KIND) { RT_B_TICK(); 
R17 * l_C_2814; memset(&l_C_2814, 0, sizeof l_C_2814);
l_C_2814 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2814 == NULL)) goto L_end2815;
{
if ((((*(R17 *)rt_nil_check(l_C_2814))).f_KIND == p_KIND))
{
{ R17 * rv2816 = l_C_2814;
return rv2816; }
}
if ((((*(R17 *)rt_nil_check(l_C_2814))).f_KIND == ((rt_int)1LL)))
{
{ R17 * rv2817 = NULL;
return rv2817; }
}
if ((((*(R17 *)rt_nil_check(l_C_2814))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2814))).f_NAME));
}
l_C_2814 = ((*(R17 *)rt_nil_check(l_C_2814))).f_NEXT;
}
RT_B_TICK();
} L_end2815: ;
{ R17 * rv2818 = NULL;
return rv2818; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { RT_B_TICK(); 
R17 * l_C_2819; memset(&l_C_2819, 0, sizeof l_C_2819);
l_C_2819 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_2820; memset(&l_N_2820, 0, sizeof l_N_2820);
l_N_2820 = ((rt_int)0LL);
for (;;) {
if ((l_C_2819 == NULL)) goto L_end2821;
{
if ((((*(R17 *)rt_nil_check(l_C_2819))).f_KIND == ((rt_int)1LL)))
{
goto L_end2821;
}
if ((((*(R17 *)rt_nil_check(l_C_2819))).f_KIND == ((rt_int)3LL)))
{
l_N_2820 = rt_add(l_N_2820, ((rt_int)1LL));
}
l_C_2819 = ((*(R17 *)rt_nil_check(l_C_2819))).f_NEXT;
}
RT_B_TICK();
} L_end2821: ;
{ rt_int rv2822 = l_N_2820;
return rv2822; }
rt_raise(RT_X_INIT);
}
static R10 r_EXC_NAME(R10 p_NAME) { RT_B_TICK(); 
R21 * l_N_2823; memset(&l_N_2823, 0, sizeof l_N_2823);
l_N_2823 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_2823 == NULL)) goto L_end2824;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2823))).f_NAME, p_NAME))
{
{ R10 rv2825 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2825; }
}
l_N_2823 = ((*(R21 *)rt_nil_check(l_N_2823))).f_NEXT;
}
RT_B_TICK();
} L_end2824: ;
l_N_2823 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2823))).f_NAME, p_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2823))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_2823;
{ R10 rv2826 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2826; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_2827; memset(&l_D_2827, 0, sizeof l_D_2827);
l_D_2827 = p_DECLS;
for (;;) {
if ((l_D_2827 == NULL)) goto L_end2828;
{
if (((((*(R21 *)rt_nil_check(l_D_2827))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_2827))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_2829; memset(&l_Y_2829, 0, sizeof l_Y_2829);
l_Y_2829 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_D_2827))).f_NAME);
if ((((*(R21 *)rt_nil_check(l_D_2827))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_2829))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_2829))).f_DECL = l_D_2827;
r_DEFINE(l_Y_2829, ((*(R21 *)rt_nil_check(l_D_2827))).f_LINE);
if ((((*(R21 *)rt_nil_check(l_D_2827))).f_KIND == g_N_TYPE))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2827))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_2827))).f_B))).f_A)))
{
((*(R7 *)rt_nil_check(g_W))).f_CHARSETS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_CHARSETS, ((rt_int)1LL));
}
}
}
}
l_D_2827 = ((*(R21 *)rt_nil_check(l_D_2827))).f_NEXT;
}
RT_B_TICK();
} L_end2828: ;
l_D_2827 = p_DECLS;
for (;;) {
if ((l_D_2827 == NULL)) goto L_end2830;
{
if (((((*(R21 *)rt_nil_check(l_D_2827))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_2827))).f_KIND == g_N_REPTYPE)))
{
{
R21 * l_SEEN_2831; memset(&l_SEEN_2831, 0, sizeof l_SEEN_2831);
l_SEEN_2831 = NULL;
rt_int l_FOUND_2832; memset(&l_FOUND_2832, 0, sizeof l_FOUND_2832);
l_FOUND_2832 = 0;
r_REFERS(((*(R21 *)rt_nil_check(l_D_2827))).f_B, C_R10(((*(R21 *)rt_nil_check(l_D_2827))).f_NAME), p_DECLS, &l_SEEN_2831, &l_FOUND_2832);
if (l_FOUND_2832)
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_2827))).f_LINE, rt_str("a circular type declaration (3.12.1, 3.12.3): ", 46), ((*(R21 *)rt_nil_check(l_D_2827))).f_NAME);
}
}
{
R21 * l_F_2833; memset(&l_F_2833, 0, sizeof l_F_2833);
l_F_2833 = ((*(R21 *)rt_nil_check(l_D_2827))).f_A;
for (;;) {
if ((l_F_2833 == NULL)) goto L_end2834;
{
if (((((*(R21 *)rt_nil_check(l_F_2833))).f_IV == ((rt_int)1LL)) && (((*(R21 *)rt_nil_check(l_D_2827))).f_KIND == g_N_TYPE)))
{
{
R21 * l_N_2835; memset(&l_N_2835, 0, sizeof l_N_2835);
l_N_2835 = ((*(R21 *)rt_nil_check(l_F_2833))).f_A;
for (;;) {
if ((l_N_2835 == NULL)) goto L_end2836;
{
if (r_TAG_MISUSED(((*(R21 *)rt_nil_check(l_D_2827))).f_B, ((*(R21 *)rt_nil_check(l_N_2835))).f_NAME))
{
r_FAILT(((*(R21 *)rt_nil_check(l_D_2827))).f_LINE, rt_str("a TAG formal is only a tag-name or an argument for a TAG formal (3.12.1): ", 74), ((*(R21 *)rt_nil_check(l_N_2835))).f_NAME);
}
l_N_2835 = ((*(R21 *)rt_nil_check(l_N_2835))).f_NEXT;
}
RT_B_TICK();
} L_end2836: ;
}
}
if ((!(((*(R21 *)rt_nil_check(l_F_2833))).f_B == NULL)))
{
if (r_NAMES_VARIABLE(((*(R21 *)rt_nil_check(l_F_2833))).f_B, p_DECLS))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_2833))).f_LINE, rt_str("the type-arguments in the type of a formal must be manifest (3.12.1)", 68));
}
}
l_F_2833 = ((*(R21 *)rt_nil_check(l_F_2833))).f_NEXT;
}
RT_B_TICK();
} L_end2834: ;
}
}
l_D_2827 = ((*(R21 *)rt_nil_check(l_D_2827))).f_NEXT;
}
RT_B_TICK();
} L_end2830: ;
l_D_2827 = p_DECLS;
for (;;) {
if ((l_D_2827 == NULL)) goto L_end2837;
{
if ((((*(R21 *)rt_nil_check(l_D_2827))).f_KIND == g_N_TYPE))
{
{
R21 * l_F_2838; memset(&l_F_2838, 0, sizeof l_F_2838);
l_F_2838 = ((*(R21 *)rt_nil_check(l_D_2827))).f_A;
for (;;) {
if ((l_F_2838 == NULL)) goto L_end2839;
{
if (((((*(R21 *)rt_nil_check(l_F_2838))).f_IV == ((rt_int)1LL)) && (!(((*(R21 *)rt_nil_check(l_F_2838))).f_B == NULL))))
{
{
R22 * l_FT_2840; memset(&l_FT_2840, 0, sizeof l_FT_2840);
l_FT_2840 = r_REAL_TYPE(r_RESOLVE(((*(R21 *)rt_nil_check(l_F_2838))).f_B));
if (((!r_IS_SCALAR(l_FT_2840)) || (!(((*(R22 *)rt_nil_check(l_FT_2840))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_F_2838))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
}
l_F_2838 = ((*(R21 *)rt_nil_check(l_F_2838))).f_NEXT;
}
RT_B_TICK();
} L_end2839: ;
}
}
l_D_2827 = ((*(R21 *)rt_nil_check(l_D_2827))).f_NEXT;
}
RT_B_TICK();
} L_end2837: ;
}
static void r_REFERS(R21 * p_L, R10 p_TARGET, R21 * p_DECLS, R21 * *p_SEEN, rt_int *p_FOUND) { RT_B_TICK(); 
R21 * l_N_2841; memset(&l_N_2841, 0, sizeof l_N_2841);
l_N_2841 = p_L;
for (;;) {
if (((l_N_2841 == NULL) || (*p_FOUND))) goto L_end2842;
{
if (((((*(R21 *)rt_nil_check(l_N_2841))).f_KIND == g_TS_NAME) || (((*(R21 *)rt_nil_check(l_N_2841))).f_KIND == g_N_REP)))
{
if ((!r_TEQS(((*(R21 *)rt_nil_check(l_N_2841))).f_NAME, rt_str("PTR", 3))))
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_2841))).f_NAME, p_TARGET))
{
(*p_FOUND) = 1;
return;
}
if ((!r_IN_IDENTS((*p_SEEN), ((*(R21 *)rt_nil_check(l_N_2841))).f_NAME)))
{
{
R21 * l_M_2843; memset(&l_M_2843, 0, sizeof l_M_2843);
l_M_2843 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_N_2841))).f_LINE);
R21 * l_D_2844; memset(&l_D_2844, 0, sizeof l_D_2844);
l_D_2844 = p_DECLS;
S_R10(&((*(R21 *)rt_nil_check(l_M_2843))).f_NAME, ((*(R21 *)rt_nil_check(l_N_2841))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_M_2843))).f_NEXT = (*p_SEEN);
(*p_SEEN) = l_M_2843;
for (;;) {
if ((l_D_2844 == NULL)) goto L_end2845;
{
if (((((((*(R21 *)rt_nil_check(l_D_2844))).f_KIND == g_N_TYPE) || (((*(R21 *)rt_nil_check(l_D_2844))).f_KIND == g_N_REPTYPE))) && r_TEQ(((*(R21 *)rt_nil_check(l_D_2844))).f_NAME, ((*(R21 *)rt_nil_check(l_N_2841))).f_NAME)))
{
r_REFERS(((*(R21 *)rt_nil_check(l_D_2844))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
l_D_2844 = ((*(R21 *)rt_nil_check(l_D_2844))).f_NEXT;
}
RT_B_TICK();
} L_end2845: ;
}
}
r_REFERS(((*(R21 *)rt_nil_check(l_N_2841))).f_A, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R21 *)rt_nil_check(l_N_2841))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R21 *)rt_nil_check(l_N_2841))).f_C, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
}
else
{
r_REFERS(((*(R21 *)rt_nil_check(l_N_2841))).f_A, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R21 *)rt_nil_check(l_N_2841))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R21 *)rt_nil_check(l_N_2841))).f_C, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R21 *)rt_nil_check(l_N_2841))).f_D, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
l_N_2841 = ((*(R21 *)rt_nil_check(l_N_2841))).f_NEXT;
}
RT_B_TICK();
} L_end2842: ;
}
static rt_int r_TAG_MISUSED(R21 * p_L, R10 p_NAME) { RT_B_TICK(); 
R21 * l_N_2846; memset(&l_N_2846, 0, sizeof l_N_2846);
l_N_2846 = p_L;
for (;;) {
if ((l_N_2846 == NULL)) goto L_end2847;
{
if ((((*(R21 *)rt_nil_check(l_N_2846))).f_KIND == g_TS_NAME))
{
{
R21 * l_A_2848; memset(&l_A_2848, 0, sizeof l_A_2848);
l_A_2848 = ((*(R21 *)rt_nil_check(l_N_2846))).f_A;
for (;;) {
if ((l_A_2848 == NULL)) goto L_end2849;
{
if ((!((((((((*(R21 *)rt_nil_check(l_A_2848))).f_KIND == g_N_NAME) || (((*(R21 *)rt_nil_check(l_A_2848))).f_KIND == g_TS_NAME))) && r_TEQ(((*(R21 *)rt_nil_check(l_A_2848))).f_NAME, p_NAME)) && (((*(R21 *)rt_nil_check(l_A_2848))).f_A == NULL)))))
{
if (r_TAG_MISUSED1(l_A_2848, p_NAME))
{
{ rt_int rv2850 = 1;
return rv2850; }
}
}
l_A_2848 = ((*(R21 *)rt_nil_check(l_A_2848))).f_NEXT;
}
RT_B_TICK();
} L_end2849: ;
}
if (((r_TAG_MISUSED(((*(R21 *)rt_nil_check(l_N_2846))).f_B, p_NAME) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(l_N_2846))).f_C, p_NAME)) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(l_N_2846))).f_E, p_NAME)))
{
{ rt_int rv2851 = 1;
return rv2851; }
}
}
else if (r_TAG_MISUSED1(l_N_2846, p_NAME))
{
{ rt_int rv2852 = 1;
return rv2852; }
}
l_N_2846 = ((*(R21 *)rt_nil_check(l_N_2846))).f_NEXT;
}
RT_B_TICK();
} L_end2847: ;
{ rt_int rv2853 = 0;
return rv2853; }
rt_raise(RT_X_INIT);
}
static rt_int r_TAG_MISUSED1(R21 * p_N, R10 p_NAME) { RT_B_TICK(); 
rt_int l_K_2854; memset(&l_K_2854, 0, sizeof l_K_2854);
l_K_2854 = ((*(R21 *)rt_nil_check(p_N))).f_KIND;
if ((l_K_2854 == g_TS_NAME))
{
{ rt_int rv2855 = (r_TAG_MISUSED(p_N, p_NAME) && 1);
return rv2855; }
}
if ((((((l_K_2854 == g_N_NAME) || (l_K_2854 == g_N_ENUMLIT)) || (l_K_2854 == g_N_APPLY))) && r_TEQ(((*(R21 *)rt_nil_check(p_N))).f_NAME, p_NAME)))
{
{ rt_int rv2856 = 1;
return rv2856; }
}
{ rt_int rv2857 = ((((r_TAG_MISUSED(((*(R21 *)rt_nil_check(p_N))).f_A, p_NAME) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(p_N))).f_B, p_NAME)) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(p_N))).f_C, p_NAME)) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(p_N))).f_D, p_NAME)) || r_TAG_MISUSED(((*(R21 *)rt_nil_check(p_N))).f_E, p_NAME));
return rv2857; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_VARIABLE(R21 * p_L, R21 * p_DECLS) { RT_B_TICK(); 
{ rt_int rv2858 = r_NAMES_VARIABLE_BUT(p_L, p_DECLS, NULL);
return rv2858; }
rt_raise(RT_X_INIT);
}
static void r_GEN_NAMES(R21 * p_L, R21 * *p_HEAD) { RT_B_TICK(); 
R21 * l_N_2859; memset(&l_N_2859, 0, sizeof l_N_2859);
l_N_2859 = p_L;
for (;;) {
if ((l_N_2859 == NULL)) goto L_end2860;
{
if (((((((*(R21 *)rt_nil_check(l_N_2859))).f_KIND == g_TS_GEN) || (((*(R21 *)rt_nil_check(l_N_2859))).f_KIND == g_N_PARAM))) && ((((*(R21 *)rt_nil_check(l_N_2859))).f_NAME).f_LEN > ((rt_int)0LL))))
{
{
R21 * l_M_2861; memset(&l_M_2861, 0, sizeof l_M_2861);
l_M_2861 = r_NEW_NODE(g_N_IDENT, ((*(R21 *)rt_nil_check(l_N_2859))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_M_2861))).f_NAME, ((*(R21 *)rt_nil_check(l_N_2859))).f_NAME, 0);
((*(R21 *)rt_nil_check(l_M_2861))).f_NEXT = (*p_HEAD);
(*p_HEAD) = l_M_2861;
}
}
r_GEN_NAMES(((*(R21 *)rt_nil_check(l_N_2859))).f_A, &(*p_HEAD));
r_GEN_NAMES(((*(R21 *)rt_nil_check(l_N_2859))).f_B, &(*p_HEAD));
r_GEN_NAMES(((*(R21 *)rt_nil_check(l_N_2859))).f_C, &(*p_HEAD));
r_GEN_NAMES(((*(R21 *)rt_nil_check(l_N_2859))).f_D, &(*p_HEAD));
l_N_2859 = ((*(R21 *)rt_nil_check(l_N_2859))).f_NEXT;
}
RT_B_TICK();
} L_end2860: ;
}
static rt_int r_NAMES_VARIABLE_BUT(R21 * p_L, R21 * p_DECLS, R21 * p_EXCL) { RT_B_TICK(); 
R21 * l_N_2862; memset(&l_N_2862, 0, sizeof l_N_2862);
l_N_2862 = p_L;
for (;;) {
if ((l_N_2862 == NULL)) goto L_end2863;
{
if (((((*(R21 *)rt_nil_check(l_N_2862))).f_KIND == g_N_NAME) && r_IN_IDENTS(p_EXCL, ((*(R21 *)rt_nil_check(l_N_2862))).f_NAME)))
{
}
else if ((((*(R21 *)rt_nil_check(l_N_2862))).f_KIND == g_N_NAME))
{
{
R21 * l_D_2864; memset(&l_D_2864, 0, sizeof l_D_2864);
l_D_2864 = p_DECLS;
R12 * l_Y_2865; memset(&l_Y_2865, 0, sizeof l_Y_2865);
l_Y_2865 = r_LOOKUP(((*(R21 *)rt_nil_check(l_N_2862))).f_NAME);
for (;;) {
if ((l_D_2864 == NULL)) goto L_end2866;
{
if (((((*(R21 *)rt_nil_check(l_D_2864))).f_KIND == g_N_VAR) && r_IN_IDENTS(((*(R21 *)rt_nil_check(l_D_2864))).f_A, ((*(R21 *)rt_nil_check(l_N_2862))).f_NAME)))
{
{ rt_int rv2867 = 1;
return rv2867; }
}
l_D_2864 = ((*(R21 *)rt_nil_check(l_D_2864))).f_NEXT;
}
RT_B_TICK();
} L_end2866: ;
if ((!(l_Y_2865 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_2865))).f_KIND == g_Y_VAR) && (!((*(R12 *)rt_nil_check(l_Y_2865))).f_INPUT)))
{
{ rt_int rv2868 = 1;
return rv2868; }
}
}
}
}
else if ((((r_NAMES_VARIABLE_BUT(((*(R21 *)rt_nil_check(l_N_2862))).f_A, p_DECLS, p_EXCL) || r_NAMES_VARIABLE_BUT(((*(R21 *)rt_nil_check(l_N_2862))).f_B, p_DECLS, p_EXCL)) || r_NAMES_VARIABLE_BUT(((*(R21 *)rt_nil_check(l_N_2862))).f_C, p_DECLS, p_EXCL)) || r_NAMES_VARIABLE_BUT(((*(R21 *)rt_nil_check(l_N_2862))).f_D, p_DECLS, p_EXCL)))
{
{ rt_int rv2869 = 1;
return rv2869; }
}
l_N_2862 = ((*(R21 *)rt_nil_check(l_N_2862))).f_NEXT;
}
RT_B_TICK();
} L_end2863: ;
{ rt_int rv2870 = 0;
return rv2870; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_PRINTING_CHAR(R21 * p_L) { RT_B_TICK(); 
R21 * l_P_2871; memset(&l_P_2871, 0, sizeof l_P_2871);
l_P_2871 = p_L;
for (;;) {
if ((l_P_2871 == NULL)) goto L_end2872;
{
if (((((*(R21 *)rt_nil_check(l_P_2871))).f_NAME).f_LEN >= ((rt_int)3LL)))
{
if (rt_b_eq(r_STR(((*(R21 *)rt_nil_check(l_P_2871))).f_NAME, ((rt_int)2LL)), rt_str("\\'", 2)))
{
{ rt_int rv2873 = 1;
return rv2873; }
}
}
l_P_2871 = ((*(R21 *)rt_nil_check(l_P_2871))).f_NEXT;
}
RT_B_TICK();
} L_end2872: ;
{ rt_int rv2874 = 0;
return rv2874; }
rt_raise(RT_X_INIT);
}
static R22 * r_DEFAULT_CHARSET(rt_int p_LINE) { RT_B_TICK(); 
R12 * l_A_2875; memset(&l_A_2875, 0, sizeof l_A_2875);
l_A_2875 = r_LOOKUP(r_MKN(rt_str("ASCII", 5)));
R22 * l_FOUND_2876; memset(&l_FOUND_2876, 0, sizeof l_FOUND_2876);
l_FOUND_2876 = NULL;
rt_int l_N_2877; memset(&l_N_2877, 0, sizeof l_N_2877);
l_N_2877 = ((rt_int)0LL);
R12 * l_Y_2878; memset(&l_Y_2878, 0, sizeof l_Y_2878);
l_Y_2878 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
if (((((*(R7 *)rt_nil_check(g_W))).f_CHARSETS == ((rt_int)0LL)) && (!(l_A_2875 == NULL))))
{
if (((((*(R12 *)rt_nil_check(l_A_2875))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_A_2875))).f_DECL == NULL)))
{
{ R22 * rv2879 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2879; }
}
}
for (;;) {
if ((l_Y_2878 == NULL)) goto L_end2880;
{
if (((((*(R12 *)rt_nil_check(l_Y_2878))).f_KIND == g_Y_TYPE) && ((((*(R12 *)rt_nil_check(l_Y_2878))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((r_LOOKUP(((*(R12 *)rt_nil_check(l_Y_2878))).f_NAME) == l_Y_2878))
{
{
R22 * l_T_2881; memset(&l_T_2881, 0, sizeof l_T_2881);
l_T_2881 = NULL;
if ((((*(R12 *)rt_nil_check(l_Y_2878))).f_DECL == NULL))
{
l_T_2881 = ((*(R12 *)rt_nil_check(l_Y_2878))).f_T;
}
else if (((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2878))).f_DECL))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2878))).f_DECL))).f_A == NULL)))
{
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2878))).f_DECL))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2878))).f_DECL))).f_B))).f_A)))
{
l_T_2881 = r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_2878))).f_NAME, p_LINE);
}
}
if ((!(l_T_2881 == NULL)))
{
l_T_2881 = r_REAL_TYPE(l_T_2881);
if ((((*(R22 *)rt_nil_check(l_T_2881))).f_KIND == g_T_ENUM))
{
if ((r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2881))).f_BASE))).f_LITS) && (!(((*(R22 *)rt_nil_check(l_T_2881))).f_BASE == l_FOUND_2876))))
{
if ((!(l_FOUND_2876 == NULL)))
{
r_FAIL(p_LINE, rt_b_cat(rt_str("two character sets are available here: the literal needs ", 57), rt_str("a charset-name (3.7.2)", 22)));
}
l_FOUND_2876 = ((*(R22 *)rt_nil_check(l_T_2881))).f_BASE;
}
}
}
}
}
}
l_Y_2878 = ((*(R12 *)rt_nil_check(l_Y_2878))).f_SNEXT;
}
RT_B_TICK();
} L_end2880: ;
if ((l_FOUND_2876 == NULL))
{
r_FAIL(p_LINE, rt_str("no character set is available for the literal (3.7.2)", 53));
}
{ R22 * rv2882 = l_FOUND_2876;
return rv2882; }
rt_raise(RT_X_INIT);
}
static R22 * r_CHARSET_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_R_2883; memset(&l_R_2883, 0, sizeof l_R_2883);
l_R_2883 = r_REAL_TYPE(p_T);
if ((((*(R22 *)rt_nil_check(l_R_2883))).f_BASE == NULL))
{
{ R22 * rv2884 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2884; }
}
{ R22 * rv2885 = ((*(R22 *)rt_nil_check(l_R_2883))).f_BASE;
return rv2885; }
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
R21 * l_S_2886; memset(&l_S_2886, 0, sizeof l_S_2886);
l_S_2886 = p_S0;
for (;;) {
if ((l_S_2886 == NULL)) goto L_end2887;
{
{
R21 * l_L_2888; memset(&l_L_2888, 0, sizeof l_L_2888);
l_L_2888 = l_S_2886;
for (;;) {
if ((!(((*(R21 *)rt_nil_check(l_L_2888))).f_KIND == g_N_LABELED))) goto L_end2889;
{
{
R12 * l_Y_2890; memset(&l_Y_2890, 0, sizeof l_Y_2890);
l_Y_2890 = r_NEW_SYM(g_Y_LABEL, ((*(R21 *)rt_nil_check(l_L_2888))).f_NAME);
S_R10(&((*(R12 *)rt_nil_check(l_Y_2890))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(r_CID(((*(R21 *)rt_nil_check(l_L_2888))).f_NAME), (r_CID(((*(R21 *)rt_nil_check(l_L_2888))).f_NAME)).f_LEN))), 0);
((*(R12 *)rt_nil_check(l_Y_2890))).f_MV = r_GUARDS();
r_DEFINE(l_Y_2890, ((*(R21 *)rt_nil_check(l_L_2888))).f_LINE);
}
l_L_2888 = ((*(R21 *)rt_nil_check(l_L_2888))).f_A;
}
RT_B_TICK();
} L_end2889: ;
}
l_S_2886 = ((*(R21 *)rt_nil_check(l_S_2886))).f_NEXT;
}
RT_B_TICK();
} L_end2887: ;
}
static void r_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_2891; memset(&l_D_2891, 0, sizeof l_D_2891);
l_D_2891 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_2892; memset(&l_S_2892, 0, sizeof l_S_2892);
l_S_2892 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2891 == NULL)) goto L_end2893;
{
if (((((*(R21 *)rt_nil_check(l_D_2891))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_2891))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2891);
}
l_D_2891 = ((*(R21 *)rt_nil_check(l_D_2891))).f_NEXT;
}
RT_B_TICK();
} L_end2893: ;
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2892 == NULL)) goto L_end2894;
{
r_STMT(l_S_2892);
l_S_2892 = ((*(R21 *)rt_nil_check(l_S_2892))).f_NEXT;
}
RT_B_TICK();
} L_end2894: ;
}
static void r_OPEN_BODY(R21 * p_B) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R21 * p_S, R21 * p_BODY_NODE, R21 * p_HANDLERS) { RT_B_TICK(); 
R10 l_F_2895; memset(&l_F_2895, 0, sizeof l_F_2895);
S_R10(&l_F_2895, r_NEW_NAME(rt_str("xf", 2)), 0);
R21 * l_H_2896; memset(&l_H_2896, 0, sizeof l_H_2896);
l_H_2896 = p_HANDLERS;
R10 l_WORD_2897; memset(&l_WORD_2897, 0, sizeof l_WORD_2897);
S_R10(&l_WORD_2897, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_2895, l_F_2895));
r_PUSH_CTX(((rt_int)3LL), l_F_2895);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_2895, l_F_2895, l_F_2895));
for (;;) {
if ((l_H_2896 == NULL)) goto L_end2898;
{
{
R21 * l_N_2899; memset(&l_N_2899, 0, sizeof l_N_2899);
l_N_2899 = ((*(R21 *)rt_nil_check(l_H_2896))).f_A;
R10 l_COND_2900; memset(&l_COND_2900, 0, sizeof l_COND_2900);
S_R10(&l_COND_2900, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_2899 == NULL)) goto L_end2901;
{
if ((r_IN_IDENTS(((*(R21 *)rt_nil_check(l_N_2899))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_2899))).f_NAME) || r_IN_HANDLERS(((*(R21 *)rt_nil_check(l_H_2896))).f_NEXT, ((*(R21 *)rt_nil_check(l_N_2899))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_N_2899))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R21 *)rt_nil_check(l_N_2899))).f_NAME);
}
S_R10(&l_COND_2900, r_FMT3(rt_str("@ || @x == @", 12), l_COND_2900, l_F_2895, r_EXC_NAME(((*(R21 *)rt_nil_check(l_N_2899))).f_NAME)), 0);
l_N_2899 = ((*(R21 *)rt_nil_check(l_N_2899))).f_NEXT;
}
RT_B_TICK();
} L_end2901: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2897, l_COND_2900));
S_R10(&l_WORD_2897, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_2895, rt_str("x", 1)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_H_2896))).f_B);
r_POP_CTX();
}
l_H_2896 = ((*(R21 *)rt_nil_check(l_H_2896))).f_NEXT;
}
RT_B_TICK();
} L_end2898: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_2895));
}
static void r_INTERFERENCE(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_2902; memset(&l_K_2902, 0, sizeof l_K_2902);
l_K_2902 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2902 == g_N_ASSIGN))
{
{
R21 * l_NAMES_2903; memset(&l_NAMES_2903, 0, sizeof l_NAMES_2903);
l_NAMES_2903 = NULL;
R21 * l_CALLS_2904; memset(&l_CALLS_2904, 0, sizeof l_CALLS_2904);
l_CALLS_2904 = NULL;
r_COLLECT_REFS(((*(R21 *)rt_nil_check(p_S))).f_A, &l_NAMES_2903, &l_CALLS_2904);
r_COLLECT_REFS(((*(R21 *)rt_nil_check(p_S))).f_B, &l_NAMES_2903, &l_CALLS_2904);
r_CHECK_INTERFERENCE(l_NAMES_2903, l_CALLS_2904, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
}
}
else if ((l_K_2902 == g_N_CALL))
{
{
R21 * l_NAMES_2905; memset(&l_NAMES_2905, 0, sizeof l_NAMES_2905);
l_NAMES_2905 = NULL;
R21 * l_CALLS_2906; memset(&l_CALLS_2906, 0, sizeof l_CALLS_2906);
l_CALLS_2906 = NULL;
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_S))).f_A, &l_NAMES_2905, &l_CALLS_2906);
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_S))).f_B, &l_NAMES_2905, &l_CALLS_2906);
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_S))).f_C, &l_NAMES_2905, &l_CALLS_2906);
r_CHECK_INTERFERENCE(l_NAMES_2905, l_CALLS_2906, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
}
}
else if (((l_K_2902 == g_N_RETURN) || (l_K_2902 == g_N_ASSERT)))
{
if ((!(((*(R21 *)rt_nil_check(p_S))).f_A == NULL)))
{
{
R21 * l_NAMES_2907; memset(&l_NAMES_2907, 0, sizeof l_NAMES_2907);
l_NAMES_2907 = NULL;
R21 * l_CALLS_2908; memset(&l_CALLS_2908, 0, sizeof l_CALLS_2908);
l_CALLS_2908 = NULL;
r_COLLECT_REFS(((*(R21 *)rt_nil_check(p_S))).f_A, &l_NAMES_2907, &l_CALLS_2908);
r_CHECK_INTERFERENCE(l_NAMES_2907, l_CALLS_2908, ((*(R21 *)rt_nil_check(p_S))).f_LINE, (l_K_2902 == g_N_ASSERT));
}
}
}
else if ((l_K_2902 == g_N_IF))
{
{
R21 * l_ARM_2909; memset(&l_ARM_2909, 0, sizeof l_ARM_2909);
l_ARM_2909 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_ARM_2909 == NULL)) goto L_end2910;
{
{
R21 * l_NAMES_2911; memset(&l_NAMES_2911, 0, sizeof l_NAMES_2911);
l_NAMES_2911 = NULL;
R21 * l_CALLS_2912; memset(&l_CALLS_2912, 0, sizeof l_CALLS_2912);
l_CALLS_2912 = NULL;
r_COLLECT_REFS(((*(R21 *)rt_nil_check(l_ARM_2909))).f_A, &l_NAMES_2911, &l_CALLS_2912);
r_CHECK_INTERFERENCE(l_NAMES_2911, l_CALLS_2912, ((*(R21 *)rt_nil_check(l_ARM_2909))).f_LINE, 0);
}
l_ARM_2909 = ((*(R21 *)rt_nil_check(l_ARM_2909))).f_NEXT;
}
RT_B_TICK();
} L_end2910: ;
}
}
}
static void r_COLLECT_LIST(R21 * p_L, R21 * *p_NAMES, R21 * *p_CALLS) { RT_B_TICK(); 
R21 * l_N_2913; memset(&l_N_2913, 0, sizeof l_N_2913);
l_N_2913 = p_L;
for (;;) {
if ((l_N_2913 == NULL)) goto L_end2914;
{
r_COLLECT_REFS(l_N_2913, &(*p_NAMES), &(*p_CALLS));
l_N_2913 = ((*(R21 *)rt_nil_check(l_N_2913))).f_NEXT;
}
RT_B_TICK();
} L_end2914: ;
}
static void r_COLLECT_REFS(R21 * p_E, R21 * *p_NAMES, R21 * *p_CALLS) { RT_B_TICK(); 
rt_int l_K_2915; memset(&l_K_2915, 0, sizeof l_K_2915);
if ((p_E == NULL))
{
return;
}
l_K_2915 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_2915 == g_N_NAME))
{
{
R12 * l_Y_2916; memset(&l_Y_2916, 0, sizeof l_Y_2916);
l_Y_2916 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2916 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2916))).f_KIND == g_Y_VAR))
{
(*p_NAMES) = r_NAME_REF(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2916))).f_OWNER, NULL, (*p_NAMES));
}
}
}
}
else if ((l_K_2915 == g_N_APPLY))
{
{
R12 * l_Y_2917; memset(&l_Y_2917, 0, sizeof l_Y_2917);
l_Y_2917 = r_LOOKUP(((*(R21 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2917 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2917))).f_KIND == g_Y_VAR))
{
(*p_NAMES) = r_NAME_REF(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2917))).f_OWNER, NULL, (*p_NAMES));
}
else if ((((*(R12 *)rt_nil_check(l_Y_2917))).f_KIND == g_Y_ROUTINE))
{
(*p_CALLS) = r_NAME_REF(((*(R21 *)rt_nil_check(p_E))).f_NAME, ((rt_int)0LL), p_E, (*p_CALLS));
}
}
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_E))).f_B, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_E))).f_C, &(*p_NAMES), &(*p_CALLS));
}
}
else if ((((((l_K_2915 == g_N_FIELD) || (l_K_2915 == g_N_DEREF)) || (l_K_2915 == g_N_UNOP)) || (l_K_2915 == g_N_PAREN)) || (l_K_2915 == g_N_QUAL)))
{
r_COLLECT_REFS(((*(R21 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
}
else if (((((l_K_2915 == g_N_INDEX) || (l_K_2915 == g_N_SUBSTR)) || (l_K_2915 == g_N_BINOP)) || (l_K_2915 == g_N_IN)))
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
else if ((l_K_2915 == g_N_RECCONS))
{
{
R21 * l_F_2918; memset(&l_F_2918, 0, sizeof l_F_2918);
l_F_2918 = ((*(R21 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_F_2918 == NULL)) goto L_end2919;
{
r_COLLECT_REFS(((*(R21 *)rt_nil_check(l_F_2918))).f_A, &(*p_NAMES), &(*p_CALLS));
l_F_2918 = ((*(R21 *)rt_nil_check(l_F_2918))).f_NEXT;
}
RT_B_TICK();
} L_end2919: ;
}
}
else if ((l_K_2915 == g_N_ARRCONS))
{
r_COLLECT_LIST(((*(R21 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
}
}
static R21 * r_NAME_REF(R10 p_NAME, rt_int p_OWNER, R21 * p_A, R21 * p_L) { RT_B_TICK(); 
R21 * l_N_2920; memset(&l_N_2920, 0, sizeof l_N_2920);
l_N_2920 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_2920))).f_NAME, p_NAME, 0);
((*(R21 *)rt_nil_check(l_N_2920))).f_IV = p_OWNER;
((*(R21 *)rt_nil_check(l_N_2920))).f_A = p_A;
((*(R21 *)rt_nil_check(l_N_2920))).f_NEXT = p_L;
{ R21 * rv2921 = l_N_2920;
return rv2921; }
rt_raise(RT_X_INIT);
}
static R21 * r_ROUTINE_DATA(R10 p_NAME, rt_int p_INOUT) { RT_B_TICK(); 
R12 * l_Y_2922; memset(&l_Y_2922, 0, sizeof l_Y_2922);
l_Y_2922 = r_LOOKUP(p_NAME);
R21 * l_R_2923; memset(&l_R_2923, 0, sizeof l_R_2923);
l_R_2923 = NULL;
rt_int l_FIRST_2924; memset(&l_FIRST_2924, 0, sizeof l_FIRST_2924);
l_FIRST_2924 = 1;
for (;;) {
if ((l_Y_2922 == NULL)) goto L_end2925;
{
if ((((*(R12 *)rt_nil_check(l_Y_2922))).f_KIND == g_Y_ROUTINE))
{
{
R21 * l_D_2926; memset(&l_D_2926, 0, sizeof l_D_2926);
l_D_2926 = r_DATA_OF(r_ORIGINAL(l_Y_2922), p_INOUT, ((rt_int)0LL));
if (l_FIRST_2924)
{
l_R_2923 = l_D_2926;
l_FIRST_2924 = 0;
}
else
{
l_R_2923 = r_INTERSECT_REFS(l_R_2923, l_D_2926);
}
}
}
else if (((!(((*(R12 *)rt_nil_check(l_Y_2922))).f_KIND == g_Y_ROUTINE)) && (!l_FIRST_2924)))
{
}
l_Y_2922 = r_LOOKUP_NEXT(l_Y_2922);
}
RT_B_TICK();
} L_end2925: ;
{ R21 * rv2927 = l_R_2923;
return rv2927; }
rt_raise(RT_X_INIT);
}
static R21 * r_DATA_OF(R12 * p_Y, rt_int p_INOUT, rt_int p_DEPTH) { RT_B_TICK(); 
R21 * l_R_2928; memset(&l_R_2928, 0, sizeof l_R_2928);
l_R_2928 = NULL;
if (((((*(R12 *)rt_nil_check(p_Y))).f_DECL == NULL) || (p_DEPTH > ((rt_int)20LL))))
{
{ R21 * rv2929 = NULL;
return rv2929; }
}
if ((!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_KIND == g_N_ROUTINE)))
{
{ R21 * rv2930 = NULL;
return rv2930; }
}
r_COMPUTE_USES(p_Y);
if ((!p_INOUT))
{
{
R21 * l_U_2931; memset(&l_U_2931, 0, sizeof l_U_2931);
l_U_2931 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_2931 == NULL)) goto L_end2932;
{
l_R_2928 = r_NAME_REF(((*(R21 *)rt_nil_check(l_U_2931))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2931))).f_IV, NULL, l_R_2928);
l_U_2931 = ((*(R21 *)rt_nil_check(l_U_2931))).f_NEXT;
}
RT_B_TICK();
} L_end2932: ;
}
{ R21 * rv2933 = l_R_2928;
return rv2933; }
}
if ((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E == NULL))
{
{ R21 * rv2934 = NULL;
return rv2934; }
}
{
R21 * l_U_2935; memset(&l_U_2935, 0, sizeof l_U_2935);
l_U_2935 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_2935 == NULL)) goto L_end2936;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E))).f_B, ((*(R21 *)rt_nil_check(l_U_2935))).f_NAME))
{
l_R_2928 = r_NAME_REF(((*(R21 *)rt_nil_check(l_U_2935))).f_NAME, ((*(R21 *)rt_nil_check(l_U_2935))).f_IV, NULL, l_R_2928);
}
l_U_2935 = ((*(R21 *)rt_nil_check(l_U_2935))).f_NEXT;
}
RT_B_TICK();
} L_end2936: ;
}
{
R21 * l_C_2937; memset(&l_C_2937, 0, sizeof l_C_2937);
l_C_2937 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E))).f_C;
for (;;) {
if ((l_C_2937 == NULL)) goto L_end2938;
{
{
R12 * l_Z_2939; memset(&l_Z_2939, 0, sizeof l_Z_2939);
l_Z_2939 = r_LOOKUP(((*(R21 *)rt_nil_check(l_C_2937))).f_NAME);
for (;;) {
if ((l_Z_2939 == NULL)) goto L_end2940;
{
if ((((*(R12 *)rt_nil_check(l_Z_2939))).f_KIND == g_Y_ROUTINE))
{
{
R21 * l_D_2941; memset(&l_D_2941, 0, sizeof l_D_2941);
l_D_2941 = r_DATA_OF(r_ORIGINAL(l_Z_2939), 1, rt_add(p_DEPTH, ((rt_int)1LL)));
for (;;) {
if ((l_D_2941 == NULL)) goto L_end2942;
{
if ((!r_HAS_REF(l_R_2928, ((*(R21 *)rt_nil_check(l_D_2941))).f_NAME, ((*(R21 *)rt_nil_check(l_D_2941))).f_IV)))
{
l_R_2928 = r_NAME_REF(((*(R21 *)rt_nil_check(l_D_2941))).f_NAME, ((*(R21 *)rt_nil_check(l_D_2941))).f_IV, NULL, l_R_2928);
}
l_D_2941 = ((*(R21 *)rt_nil_check(l_D_2941))).f_NEXT;
}
RT_B_TICK();
} L_end2942: ;
}
}
l_Z_2939 = r_LOOKUP_NEXT(l_Z_2939);
}
RT_B_TICK();
} L_end2940: ;
}
l_C_2937 = ((*(R21 *)rt_nil_check(l_C_2937))).f_NEXT;
}
RT_B_TICK();
} L_end2938: ;
}
{ R21 * rv2943 = l_R_2928;
return rv2943; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_REF(R21 * p_L, R10 p_NAME, rt_int p_OWNER) { RT_B_TICK(); 
R21 * l_P_2944; memset(&l_P_2944, 0, sizeof l_P_2944);
l_P_2944 = p_L;
for (;;) {
if ((l_P_2944 == NULL)) goto L_end2945;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_P_2944))).f_NAME, p_NAME) && (((*(R21 *)rt_nil_check(l_P_2944))).f_IV == p_OWNER)))
{
{ rt_int rv2946 = 1;
return rv2946; }
}
l_P_2944 = ((*(R21 *)rt_nil_check(l_P_2944))).f_NEXT;
}
RT_B_TICK();
} L_end2945: ;
{ rt_int rv2947 = 0;
return rv2947; }
rt_raise(RT_X_INIT);
}
static R21 * r_INTERSECT_REFS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_R_2948; memset(&l_R_2948, 0, sizeof l_R_2948);
l_R_2948 = NULL;
R21 * l_P_2949; memset(&l_P_2949, 0, sizeof l_P_2949);
l_P_2949 = p_A;
for (;;) {
if ((l_P_2949 == NULL)) goto L_end2950;
{
if (r_HAS_REF(p_B, ((*(R21 *)rt_nil_check(l_P_2949))).f_NAME, ((*(R21 *)rt_nil_check(l_P_2949))).f_IV))
{
l_R_2948 = r_NAME_REF(((*(R21 *)rt_nil_check(l_P_2949))).f_NAME, ((*(R21 *)rt_nil_check(l_P_2949))).f_IV, NULL, l_R_2948);
}
l_P_2949 = ((*(R21 *)rt_nil_check(l_P_2949))).f_NEXT;
}
RT_B_TICK();
} L_end2950: ;
{ R21 * rv2951 = l_R_2948;
return rv2951; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_INTERFERENCE(R21 * p_NAMES, R21 * p_CALLS, rt_int p_LINE, rt_int p_ASSERTION) { RT_B_TICK(); 
R21 * l_C_2952; memset(&l_C_2952, 0, sizeof l_C_2952);
l_C_2952 = p_CALLS;
for (;;) {
if ((l_C_2952 == NULL)) goto L_end2953;
{
{
R21 * l_V_2954; memset(&l_V_2954, 0, sizeof l_V_2954);
l_V_2954 = r_ROUTINE_DATA(((*(R21 *)rt_nil_check(l_C_2952))).f_NAME, 1);
if (((!(l_V_2954 == NULL)) && p_ASSERTION))
{
r_FAILT(p_LINE, rt_str("the expression of ASSERT must be free of side-effects (4.5.8): ", 63), ((*(R21 *)rt_nil_check(l_C_2952))).f_NAME);
}
for (;;) {
if ((l_V_2954 == NULL)) goto L_end2955;
{
if (r_HAS_REF(p_NAMES, ((*(R21 *)rt_nil_check(l_V_2954))).f_NAME, ((*(R21 *)rt_nil_check(l_V_2954))).f_IV))
{
r_FAILT(p_LINE, rt_str("a function invocation modifies a variable the expression also names (4.3.4): ", 77), ((*(R21 *)rt_nil_check(l_V_2954))).f_NAME);
}
{
R21 * l_D_2956; memset(&l_D_2956, 0, sizeof l_D_2956);
l_D_2956 = p_CALLS;
for (;;) {
if ((l_D_2956 == NULL)) goto L_end2957;
{
if ((!(l_D_2956 == l_C_2952)))
{
if (r_HAS_REF(r_ROUTINE_DATA(((*(R21 *)rt_nil_check(l_D_2956))).f_NAME, 0), ((*(R21 *)rt_nil_check(l_V_2954))).f_NAME, ((*(R21 *)rt_nil_check(l_V_2954))).f_IV))
{
r_FAILT(p_LINE, rt_str("two function invocations of one expression interfere on (4.3.4): ", 65), ((*(R21 *)rt_nil_check(l_V_2954))).f_NAME);
}
}
l_D_2956 = ((*(R21 *)rt_nil_check(l_D_2956))).f_NEXT;
}
RT_B_TICK();
} L_end2957: ;
}
l_V_2954 = ((*(R21 *)rt_nil_check(l_V_2954))).f_NEXT;
}
RT_B_TICK();
} L_end2955: ;
}
l_C_2952 = ((*(R21 *)rt_nil_check(l_C_2952))).f_NEXT;
}
RT_B_TICK();
} L_end2953: ;
}
static rt_int r_IN_HANDLERS(R21 * p_HS, R10 p_NAME) { RT_B_TICK(); 
R21 * l_H_2958; memset(&l_H_2958, 0, sizeof l_H_2958);
l_H_2958 = p_HS;
for (;;) {
if ((l_H_2958 == NULL)) goto L_end2959;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_H_2958))).f_A, p_NAME))
{
{ rt_int rv2960 = 1;
return rv2960; }
}
l_H_2958 = ((*(R21 *)rt_nil_check(l_H_2958))).f_NEXT;
}
RT_B_TICK();
} L_end2959: ;
{ rt_int rv2961 = 0;
return rv2961; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED_STMT(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_2962; memset(&l_K_2962, 0, sizeof l_K_2962);
l_K_2962 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2962 == g_N_EXCEPT))
{
{ rt_int rv2963 = r_IS_STRUCTURED_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
return rv2963; }
}
{ rt_int rv2964 = (((((((l_K_2962 == g_N_BLOCK) || (l_K_2962 == g_N_IF)) || (l_K_2962 == g_N_CASE)) || (l_K_2962 == g_N_LOOP)) || (l_K_2962 == g_N_FOR)) || (l_K_2962 == g_N_PAR)) || (l_K_2962 == g_N_WITH));
return rv2964; }
rt_raise(RT_X_INIT);
}
static R21 * r_NAMED_ROOT(R21 * p_E) { RT_B_TICK(); 
rt_int l_K_2965; memset(&l_K_2965, 0, sizeof l_K_2965);
l_K_2965 = ((*(R21 *)rt_nil_check(p_E))).f_KIND;
if (((l_K_2965 == g_N_NAME) || (l_K_2965 == g_N_APPLY)))
{
{ R21 * rv2966 = p_E;
return rv2966; }
}
else if ((((l_K_2965 == g_N_INDEX) || (l_K_2965 == g_N_FIELD)) || (l_K_2965 == g_N_SUBSTR)))
{
{ R21 * rv2967 = r_NAMED_ROOT(((*(R21 *)rt_nil_check(p_E))).f_A);
return rv2967; }
}
{ R21 * rv2968 = NULL;
return rv2968; }
rt_raise(RT_X_INIT);
}
static void r_STMT(R21 * p_S) { RT_B_TICK(); 
rt_int l_K_2969; memset(&l_K_2969, 0, sizeof l_K_2969);
l_K_2969 = ((*(R21 *)rt_nil_check(p_S))).f_KIND;
r_INTERFERENCE(p_S);
if ((l_K_2969 == g_N_NULL))
{
return;
}
else if ((l_K_2969 == g_N_LABELED))
{
{
R12 * l_Y_2970; memset(&l_Y_2970, 0, sizeof l_Y_2970);
l_Y_2970 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_2970))).f_ACCESS));
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_2969 == g_N_GOTO))
{
{
R12 * l_Y_2971; memset(&l_Y_2971, 0, sizeof l_Y_2971);
l_Y_2971 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_2972; memset(&l_N_2972, 0, sizeof l_N_2972);
R17 * l_C_2973; memset(&l_C_2973, 0, sizeof l_C_2973);
l_C_2973 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_2971 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2971))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2971))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
l_N_2972 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_2971))).f_MV);
for (;;) {
if ((l_N_2972 <= ((rt_int)0LL))) goto L_end2974;
{
if ((((*(R17 *)rt_nil_check(l_C_2973))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R17 *)rt_nil_check(l_C_2973))).f_NAME));
l_N_2972 = rt_sub(l_N_2972, ((rt_int)1LL));
}
l_C_2973 = ((*(R17 *)rt_nil_check(l_C_2973))).f_NEXT;
}
RT_B_TICK();
} L_end2974: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_2971))).f_ACCESS));
}
}
else if ((l_K_2969 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_2969 == g_N_CALL))
{
{
R26 l_V_2975; memset(&l_V_2975, 0, sizeof l_V_2975);
S_R26(&l_V_2975, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_2975).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_2975).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_2975).f_C, rt_str(";", 1)));
}
}
else if ((l_K_2969 == g_N_IF))
{
r_IF_STMT(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2969 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_2969 == g_N_LOOP))
{
{
R10 l_END_L_2976; memset(&l_END_L_2976, 0, sizeof l_END_L_2976);
S_R10(&l_END_L_2976, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A), l_END_L_2976));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2976);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CODES(rt_str("RT_B_TICK();", 12));
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_C), l_END_L_2976));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_2976));
}
}
else if ((l_K_2969 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_2969 == g_N_EXIT))
{
{
R17 * l_C_2977; memset(&l_C_2977, 0, sizeof l_C_2977);
l_C_2977 = r_LEAVE(((rt_int)2LL));
if ((l_C_2977 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R17 *)rt_nil_check(l_C_2977))).f_NAME));
}
}
else if ((l_K_2969 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_2969 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_2969 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_2969 == g_N_ASSERT))
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A)));
}
else if ((l_K_2969 == g_N_EXCEPT))
{
r_GUARDED(((*(R21 *)rt_nil_check(p_S))).f_A, NULL, ((*(R21 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_2969 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_2969 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_2969 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R21 * p_S) { RT_B_TICK(); 
R12 * l_Y_2978; memset(&l_Y_2978, 0, sizeof l_Y_2978);
l_Y_2978 = r_LOOKUP(((*(R21 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_2978 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_2978))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_2978))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R21 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv2979 = r_CALL_EXPR(p_S, NULL);
return rv2979; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R21 * p_ARMS, R21 * p_ELSE_BODY) { RT_B_TICK(); 
R21 * l_ARM_2980; memset(&l_ARM_2980, 0, sizeof l_ARM_2980);
l_ARM_2980 = p_ARMS;
R10 l_WORD_2981; memset(&l_WORD_2981, 0, sizeof l_WORD_2981);
S_R10(&l_WORD_2981, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_2982; memset(&l_OPEN_2982, 0, sizeof l_OPEN_2982);
l_OPEN_2982 = ((rt_int)0LL);
rt_int l_CHOSEN_2983; memset(&l_CHOSEN_2983, 0, sizeof l_CHOSEN_2983);
l_CHOSEN_2983 = 0;
for (;;) {
if ((l_ARM_2980 == NULL)) goto L_end2984;
{
{
R23 l_M_2985; memset(&l_M_2985, 0, sizeof l_M_2985);
S_R23(&l_M_2985, r_MANIFEST(((*(R21 *)rt_nil_check(l_ARM_2980))).f_A), 0);
if (l_CHOSEN_2983)
{
r_CHECK_COND(((*(R21 *)rt_nil_check(l_ARM_2980))).f_A);
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2980))).f_B);
}
else if ((l_M_2985).f_OK)
{
if ((!r_TEQS(l_WORD_2981, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_2982 = rt_add(l_OPEN_2982, ((rt_int)1LL));
S_R10(&l_WORD_2981, r_MK(rt_str("if", 2)), 0);
}
r_CODE(r_FMT1(rt_str("(void)(@);", 10), r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_2980))).f_A)));
if (((l_M_2985).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2980))).f_B);
l_CHOSEN_2983 = 1;
}
else
{
r_CHECK_BODY(((*(R21 *)rt_nil_check(l_ARM_2980))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2981, r_BOOL_EXPR(((*(R21 *)rt_nil_check(l_ARM_2980))).f_A)));
r_OPEN_BODY(((*(R21 *)rt_nil_check(l_ARM_2980))).f_B);
S_R10(&l_WORD_2981, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_2980 = ((*(R21 *)rt_nil_check(l_ARM_2980))).f_NEXT;
}
RT_B_TICK();
} L_end2984: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_2983)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_2981, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it2987_lo = ((rt_int)1LL), it2987_hi = l_OPEN_2982;
for (rt_int it2987 = it2987_lo; it2987 <= it2987_hi; it2987++) {
{
r_CODES(rt_str("}", 1));
}
RT_B_TICK();
if (it2987 == it2987_hi) break;
} } L_end2986: ;
}
static void r_CHECK_BODY(R21 * p_B) { RT_B_TICK(); 
R14 l_SAVED_CODE_2988; memset(&l_SAVED_CODE_2988, 0, sizeof l_SAVED_CODE_2988);
S_R14(&l_SAVED_CODE_2988, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2989; memset(&rc2989, 0, sizeof rc2989);  rc2989.f_HEAD = NULL; rc2989.f_TAIL = NULL; rc2989; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2988, 0);
}
static void r_CHECK_COND(R21 * p_E) { RT_B_TICK(); 
R10 l_C_2990; memset(&l_C_2990, 0, sizeof l_C_2990);
S_R10(&l_C_2990, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R21 * p_S) { RT_B_TICK(); 
R10 l_END_L_2991; memset(&l_END_L_2991, 0, sizeof l_END_L_2991);
S_R10(&l_END_L_2991, r_NEW_NAME(rt_str("L_end", 5)), 0);
R10 l_IT_2992; memset(&l_IT_2992, 0, sizeof l_IT_2992);
S_R10(&l_IT_2992, r_NEW_NAME(rt_str("it", 2)), 0);
R21 * l_R_2993; memset(&l_R_2993, 0, sizeof l_R_2993);
l_R_2993 = ((*(R21 *)rt_nil_check(p_S))).f_A;
R26 l_LO_2994; memset(&l_LO_2994, 0, sizeof l_LO_2994);
S_R26(&l_LO_2994, r_EXPR(((*(R21 *)rt_nil_check(l_R_2993))).f_A, NULL), 0);
R26 l_HI_2995; memset(&l_HI_2995, 0, sizeof l_HI_2995);
S_R26(&l_HI_2995, r_EXPR(((*(R21 *)rt_nil_check(l_R_2993))).f_B, (l_LO_2994).f_T), 0);
R22 * l_T_2996; memset(&l_T_2996, 0, sizeof l_T_2996);
l_T_2996 = r_REAL_TYPE((l_LO_2994).f_T);
R10 l_LOC_2997; memset(&l_LOC_2997, 0, sizeof l_LOC_2997);
R10 l_HIC_2998; memset(&l_HIC_2998, 0, sizeof l_HIC_2998);
if ((((*(R22 *)rt_nil_check(l_T_2996))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_2996))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_2996))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_2996))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R10(&l_LOC_2997, (l_LO_2994).f_C, 0);
S_R10(&l_HIC_2998, (l_HI_2995).f_C, 0);
if (((((*(R21 *)rt_nil_check(l_R_2993))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_2993))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LOC_2997, r_FMT1(rt_str("(@) + 1", 7), l_LOC_2997), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_2993))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HIC_2998, r_FMT1(rt_str("(@) - 1", 7), l_HIC_2998), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_2992, l_LOC_2997, l_IT_2992, l_HIC_2998));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_2992, l_IT_2992, l_IT_2992, l_IT_2992));
r_OPEN_SCOPE();
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_2999; memset(&l_Y_2999, 0, sizeof l_Y_2999);
l_Y_2999 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_2999))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_2996))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_2999))).f_T = ((*(R22 *)rt_nil_check(l_T_2996))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_2999))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2999, rt_str("", 0)), l_IT_2992));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_2999, rt_str("", 0)), l_IT_2992));
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_2999))).f_ACCESS, l_IT_2992, 0);
}
r_DEFINE(l_Y_2999, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_2991);
r_OPEN_BODY(((*(R21 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODES(rt_str("RT_B_TICK();", 12));
r_CODE(r_FMT2(rt_str("if (@ == @_hi) break;", 21), l_IT_2992, l_IT_2992));
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_2991));
}
static void r_RETURN_STMT(R21 * p_S) { RT_B_TICK(); 
R18 * l_CS_3000; memset(&l_CS_3000, 0, sizeof l_CS_3000);
l_CS_3000 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_C_3001; memset(&l_C_3001, 0, sizeof l_C_3001);
if ((((*(R21 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_3001 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R18 *)rt_nil_check(l_CS_3000))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_3000))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R18 *)rt_nil_check(l_CS_3000))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R18 *)rt_nil_check(l_CS_3000))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODE(r_CATS(((*(R18 *)rt_nil_check(l_CS_3000))).f_COPYOUT, rt_str("return;", 7)));
}
return;
}
if (((((*(R18 *)rt_nil_check(l_CS_3000))).f_RESULT == NULL) || ((*(R18 *)rt_nil_check(l_CS_3000))).f_IS_PATH))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R18 *)rt_nil_check(l_CS_3000))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R10 l_V_3002; memset(&l_V_3002, 0, sizeof l_V_3002);
S_R10(&l_V_3002, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R18 *)rt_nil_check(l_CS_3000))).f_RESULT), l_V_3002, r_CONVERT(r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, ((*(R18 *)rt_nil_check(l_CS_3000))).f_RESULT), ((*(R18 *)rt_nil_check(l_CS_3000))).f_RESULT, ((*(R21 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_3001 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_3002));
}
}
static void r_SIGNAL_STMT(R21 * p_S) { RT_B_TICK(); 
if (((((*(R21 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R17 * l_C_3003; memset(&l_C_3003, 0, sizeof l_C_3003);
l_C_3003 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_3003 == NULL)) goto L_end3004;
{
if ((((*(R17 *)rt_nil_check(l_C_3003))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R17 *)rt_nil_check(l_C_3003))).f_NAME));
return;
}
if ((((*(R17 *)rt_nil_check(l_C_3003))).f_KIND == ((rt_int)1LL)))
{
goto L_end3004;
}
l_C_3003 = ((*(R17 *)rt_nil_check(l_C_3003))).f_NEXT;
}
RT_B_TICK();
} L_end3004: ;
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
R21 * l_TG_3005; memset(&l_TG_3005, 0, sizeof l_TG_3005);
l_TG_3005 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((((*(R21 *)rt_nil_check(l_TG_3005))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_3006; memset(&l_B_3006, 0, sizeof l_B_3006);
S_R26(&l_B_3006, r_EXPR(((*(R21 *)rt_nil_check(l_TG_3005))).f_A, NULL), 0);
if ((!(l_B_3006).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_3006).f_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_3007; memset(&l_ARGS_3007, 0, sizeof l_ARGS_3007);
l_ARGS_3007 = r_NODE_ARG(((*(R21 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_3005))).f_B, g_M_IN, r_NODE_ARG(((*(R21 *)rt_nil_check(l_TG_3005))).f_C, g_M_IN, r_VAL_ARG(l_B_3006, NULL))));
R12 * l_Y_3008; memset(&l_Y_3008, 0, sizeof l_Y_3008);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_3007))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_3008 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_3007, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_3008 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_3007))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_3008 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_3007, ((*(R21 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_3008 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_3008, l_ARGS_3007, ((*(R21 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_3006).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_3006).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_3009; memset(&l_V_3009, 0, sizeof l_V_3009);
S_R26(&l_V_3009, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_B_3006).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_3009).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_3006).f_T))).f_KIND)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_3006).f_C, r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_3005))).f_B), r_INT_EXPR(((*(R21 *)rt_nil_check(l_TG_3005))).f_C), (l_V_3009).f_C));
}
}
return;
}
{
R26 l_LV_3010; memset(&l_LV_3010, 0, sizeof l_LV_3010);
S_R26(&l_LV_3010, r_EXPR(l_TG_3005, NULL), 0);
R21 * l_SAVED_Q_3011; memset(&l_SAVED_Q_3011, 0, sizeof l_SAVED_Q_3011);
l_SAVED_Q_3011 = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
if ((!(l_LV_3010).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = NULL;
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_B))).f_KIND == g_N_QUAL))
{
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = ((*(R21 *)rt_nil_check(p_S))).f_B;
}
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R21 *)rt_nil_check(p_S))).f_B;
if (((((*(R22 *)rt_nil_check((l_LV_3010).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
r_REQUIRE_WHERE(r_MKN(rt_str("STORE_", 6)), ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
{
R26 l_V_3012; memset(&l_V_3012, 0, sizeof l_V_3012);
S_R26(&l_V_3012, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_B, (l_LV_3010).f_T), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
r_CODE(r_STORE_CODE((l_LV_3010).f_T, (l_LV_3010).f_C, l_V_3012, ((*(R21 *)rt_nil_check(p_S))).f_LINE, (l_LV_3010).f_SELF));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = l_SAVED_Q_3011;
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
R12 * l_Y_3013; memset(&l_Y_3013, 0, sizeof l_Y_3013);
l_Y_3013 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_3014; memset(&l_V_3014, 0, sizeof l_V_3014);
S_R26(&l_V_3014, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_3013))).f_T = (l_V_3014).f_T;
((*(R12 *)rt_nil_check(l_Y_3013))).f_WITHV = ((rt_int)1LL);
if ((((*(R21 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R10 l_CN_3015; memset(&l_CN_3015, 0, sizeof l_CN_3015);
S_R10(&l_CN_3015, r_NEW_OBJECT(l_Y_3013, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_3014).f_T))
{
r_CODE(r_INIT_CODE((l_V_3014).f_T, l_CN_3015));
}
r_CODE(r_ASSIGN_CODE((l_V_3014).f_T, l_CN_3015, (l_V_3014).f_C));
}
}
else
{
if ((!(l_V_3014).f_LVAL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R10 l_P_3016; memset(&l_P_3016, 0, sizeof l_P_3016);
S_R10(&l_P_3016, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_3014).f_T), l_P_3016, (l_V_3014).f_C));
S_R10(&((*(R12 *)rt_nil_check(l_Y_3013))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_3016), 0);
S_R10(&((*(R12 *)rt_nil_check(l_Y_3013))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_3013))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_3013))).f_OWNER = rt_neg(((rt_int)1LL));
}
{
R21 * l_R_3017; memset(&l_R_3017, 0, sizeof l_R_3017);
l_R_3017 = r_NAMED_ROOT(((*(R21 *)rt_nil_check(p_S))).f_A);
if ((!(l_R_3017 == NULL)))
{
if ((!r_TEQ(((*(R21 *)rt_nil_check(l_R_3017))).f_NAME, ((*(R21 *)rt_nil_check(p_S))).f_NAME)))
{
{
R12 * l_OLD_3018; memset(&l_OLD_3018, 0, sizeof l_OLD_3018);
l_OLD_3018 = r_LOOKUP(((*(R21 *)rt_nil_check(l_R_3017))).f_NAME);
if ((!(l_OLD_3018 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_OLD_3018))).f_KIND == g_Y_VAR))
{
{
R12 * l_H_3019; memset(&l_H_3019, 0, sizeof l_H_3019);
l_H_3019 = r_NEW_SYM(g_Y_VAR, ((*(R21 *)rt_nil_check(l_R_3017))).f_NAME);
((*(R12 *)rt_nil_check(l_H_3019))).f_T = ((*(R12 *)rt_nil_check(l_OLD_3018))).f_T;
((*(R12 *)rt_nil_check(l_H_3019))).f_WITHV = ((rt_int)2LL);
((*(R12 *)rt_nil_check(l_H_3019))).f_OWNER = ((*(R12 *)rt_nil_check(l_OLD_3018))).f_OWNER;
r_DEFINE(l_H_3019, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
}
}
}
}
}
}
}
r_DEFINE(l_Y_3013, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R21 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_3020; memset(&l_ARM_3020, 0, sizeof l_ARM_3020);
l_ARM_3020 = ((*(R21 *)rt_nil_check(p_S))).f_B;
R25 * l_SEEN_3021; memset(&l_SEEN_3021, 0, sizeof l_SEEN_3021);
l_SEEN_3021 = NULL;
if (((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_3022; memset(&l_CH_3022, 0, sizeof l_CH_3022);
S_R26(&l_CH_3022, r_EXPR(((*(R21 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_3023; memset(&l_T_3023, 0, sizeof l_T_3023);
l_T_3023 = r_REAL_TYPE((l_CH_3022).f_T);
R12 * l_BOUND_3024; memset(&l_BOUND_3024, 0, sizeof l_BOUND_3024);
l_BOUND_3024 = r_DISCRIMINATED(((*(R21 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_3023))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_3023))).f_KIND == g_T_BITS)))
{
{
R10 l_TMP_3025; memset(&l_TMP_3025, 0, sizeof l_TMP_3025);
S_R10(&l_TMP_3025, r_NEW_NAME(rt_str("cs", 2)), 0);
R10 l_WORD_3026; memset(&l_WORD_3026, 0, sizeof l_WORD_3026);
S_R10(&l_WORD_3026, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_3025, (l_CH_3022).f_C));
for (;;) {
if ((l_ARM_3020 == NULL)) goto L_end3027;
{
{
R21 * l_L_3028; memset(&l_L_3028, 0, sizeof l_L_3028);
l_L_3028 = ((*(R21 *)rt_nil_check(l_ARM_3020))).f_A;
R10 l_COND_3029; memset(&l_COND_3029, 0, sizeof l_COND_3029);
S_R10(&l_COND_3029, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3028 == NULL)) goto L_end3030;
{
S_R10(&l_COND_3029, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_3029, l_TMP_3025, (r_EXPR(l_L_3028, l_T_3023)).f_C), 0);
l_L_3028 = ((*(R21 *)rt_nil_check(l_L_3028))).f_NEXT;
}
RT_B_TICK();
} L_end3030: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3026, l_COND_3029));
S_R10(&l_WORD_3026, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_3020))).f_B, ((*(R21 *)rt_nil_check(l_ARM_3020))).f_C);
}
l_ARM_3020 = ((*(R21 *)rt_nil_check(l_ARM_3020))).f_NEXT;
}
RT_B_TICK();
} L_end3027: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_3026, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if (((((*(R22 *)rt_nil_check(l_T_3023))).f_KIND == g_T_FLOAT) || (((((*(R22 *)rt_nil_check(l_T_3023))).f_KIND == g_T_INT) && (!(((*(R22 *)rt_nil_check(l_T_3023))).f_SCALE == ((rt_int)0LL)))))))
{
r_VALUE_CASE(p_S, l_CH_3022);
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_3023))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_3023))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_3023))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_3023))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_3023));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_3022).f_C));
for (;;) {
if ((l_ARM_3020 == NULL)) goto L_end3031;
{
{
R21 * l_L_3032; memset(&l_L_3032, 0, sizeof l_L_3032);
l_L_3032 = ((*(R21 *)rt_nil_check(l_ARM_3020))).f_A;
R23 l_FIRST_3033; memset(&l_FIRST_3033, 0, sizeof l_FIRST_3033);
S_R23(&l_FIRST_3033, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_3032 == NULL)) goto L_end3034;
{
if ((((*(R21 *)rt_nil_check(l_L_3032))).f_KIND == g_N_RANGE))
{
{
R23 l_LO_3035; memset(&l_LO_3035, 0, sizeof l_LO_3035);
S_R23(&l_LO_3035, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_3032))).f_A, l_T_3023), 0);
R23 l_HI_3036; memset(&l_HI_3036, 0, sizeof l_HI_3036);
S_R23(&l_HI_3036, r_ENUM_MANIFEST(((*(R21 *)rt_nil_check(l_L_3032))).f_B, l_T_3023), 0);
rt_int l_A_3037; memset(&l_A_3037, 0, sizeof l_A_3037);
l_A_3037 = (l_LO_3035).f_V;
rt_int l_B_3038; memset(&l_B_3038, 0, sizeof l_B_3038);
l_B_3038 = (l_HI_3036).f_V;
if ((!(((l_LO_3035).f_OK && (l_HI_3036).f_OK))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_3032))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R21 *)rt_nil_check(l_L_3032))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_3032))).f_IV == ((rt_int)3LL))))
{
l_A_3037 = rt_add(l_A_3037, ((rt_int)1LL));
}
if ((((*(R21 *)rt_nil_check(l_L_3032))).f_IV >= ((rt_int)2LL)))
{
l_B_3038 = rt_sub(l_B_3038, ((rt_int)1LL));
}
if ((!(l_FIRST_3033).f_OK))
{
S_R23(&l_FIRST_3033, r_SOME(l_A_3037), 0);
}
l_SEEN_3021 = r_DISTINCT_LABEL(l_SEEN_3021, l_A_3037, l_B_3038, ((*(R21 *)rt_nil_check(l_L_3032))).f_LINE);
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_3037), r_NUM(l_B_3038)));
}
}
else
{
{
R23 l_M_3039; memset(&l_M_3039, 0, sizeof l_M_3039);
S_R23(&l_M_3039, r_ENUM_MANIFEST(l_L_3032, l_T_3023), 0);
if ((!(l_M_3039).f_OK))
{
r_FAIL(((*(R21 *)rt_nil_check(l_L_3032))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_3033).f_OK))
{
S_R23(&l_FIRST_3033, l_M_3039, 0);
}
l_SEEN_3021 = r_DISTINCT_LABEL(l_SEEN_3021, (l_M_3039).f_V, (l_M_3039).f_V, ((*(R21 *)rt_nil_check(l_L_3032))).f_LINE);
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_3039).f_V)));
}
}
l_L_3032 = ((*(R21 *)rt_nil_check(l_L_3032))).f_NEXT;
}
RT_B_TICK();
} L_end3034: ;
if ((!(l_BOUND_3024 == NULL)))
{
{
R22 * l_SAVED_3040; memset(&l_SAVED_3040, 0, sizeof l_SAVED_3040);
l_SAVED_3040 = ((*(R12 *)rt_nil_check(l_BOUND_3024))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_3024))).f_T = r_NARROW(l_SAVED_3040, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_3033).f_V);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_3020))).f_B, ((*(R21 *)rt_nil_check(l_ARM_3020))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_3024))).f_T = l_SAVED_3040;
}
}
else
{
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_3020))).f_B, ((*(R21 *)rt_nil_check(l_ARM_3020))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_3020 = ((*(R21 *)rt_nil_check(l_ARM_3020))).f_NEXT;
}
RT_B_TICK();
} L_end3031: ;
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
R25 * l_P_3041; memset(&l_P_3041, 0, sizeof l_P_3041);
l_P_3041 = p_SEEN;
if ((p_A > p_B))
{
{ R25 * rv3042 = p_SEEN;
return rv3042; }
}
for (;;) {
if ((l_P_3041 == NULL)) goto L_end3043;
{
if (((p_A <= (((*(R25 *)rt_nil_check(l_P_3041))).f_MHI).f_V) && ((((*(R25 *)rt_nil_check(l_P_3041))).f_MLO).f_V <= p_B)))
{
r_FAIL(p_LINE, rt_str("the choice-label values must be distinct (4.5.5.2)", 50));
}
l_P_3041 = ((*(R25 *)rt_nil_check(l_P_3041))).f_NEXT;
}
RT_B_TICK();
} L_end3043: ;
l_P_3041 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_P_3041)), ({ R25 rc3044; memset(&rc3044, 0, sizeof rc3044);  S_R10(&rc3044.f_LO, r_NO_TEXT(), 0); S_R10(&rc3044.f_HI, r_NO_TEXT(), 0); S_R23(&rc3044.f_MLO, r_SOME(p_A), 0); S_R23(&rc3044.f_MHI, r_SOME(p_B), 0); rc3044.f_ANYARG = 0; rc3044.f_NEXT = p_SEEN; rc3044; }), 0);
{ R25 * rv3045 = l_P_3041;
return rv3045; }
rt_raise(RT_X_INIT);
}
static void r_VALUE_CASE(R21 * p_S, R26 p_CH) { RT_B_TICK(); 
R10 l_TMP_3046; memset(&l_TMP_3046, 0, sizeof l_TMP_3046);
S_R10(&l_TMP_3046, r_NEW_NAME(rt_str("cs", 2)), 0);
R26 l_X_3047; memset(&l_X_3047, 0, sizeof l_X_3047);
S_R26(&l_X_3047, r_MKET(l_TMP_3046, (p_CH).f_T), 0);
R21 * l_ARM_3048; memset(&l_ARM_3048, 0, sizeof l_ARM_3048);
l_ARM_3048 = ((*(R21 *)rt_nil_check(p_S))).f_B;
R10 l_WORD_3049; memset(&l_WORD_3049, 0, sizeof l_WORD_3049);
S_R10(&l_WORD_3049, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(r_REAL_TYPE((p_CH).f_T)), l_TMP_3046, (p_CH).f_C));
for (;;) {
if ((l_ARM_3048 == NULL)) goto L_end3050;
{
{
R21 * l_L_3051; memset(&l_L_3051, 0, sizeof l_L_3051);
l_L_3051 = ((*(R21 *)rt_nil_check(l_ARM_3048))).f_A;
R10 l_COND_3052; memset(&l_COND_3052, 0, sizeof l_COND_3052);
S_R10(&l_COND_3052, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3051 == NULL)) goto L_end3053;
{
if ((((*(R21 *)rt_nil_check(l_L_3051))).f_KIND == g_N_RANGE))
{
{
R26 l_LO_3054; memset(&l_LO_3054, 0, sizeof l_LO_3054);
S_R26(&l_LO_3054, r_CASE_LABEL(((*(R21 *)rt_nil_check(l_L_3051))).f_A, (p_CH).f_T), 0);
R26 l_HI_3055; memset(&l_HI_3055, 0, sizeof l_HI_3055);
S_R26(&l_HI_3055, r_CASE_LABEL(((*(R21 *)rt_nil_check(l_L_3051))).f_B, (p_CH).f_T), 0);
rstr l_GE_3056; memset(&l_GE_3056, 0, sizeof l_GE_3056);
l_GE_3056 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_GE_3056, rt_str(">=", 2));
rstr l_LE_3057; memset(&l_LE_3057, 0, sizeof l_LE_3057);
l_LE_3057 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_LE_3057, rt_str("<=", 2));
if (((((*(R21 *)rt_nil_check(l_L_3051))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_L_3051))).f_IV == ((rt_int)3LL))))
{
rt_b_assign(&l_GE_3056, rt_str("> ", 2));
}
if ((((*(R21 *)rt_nil_check(l_L_3051))).f_IV >= ((rt_int)2LL)))
{
rt_b_assign(&l_LE_3057, rt_str("< ", 2));
}
S_R10(&l_COND_3052, r_FMT3(rt_str("@ || (@ && @)", 13), l_COND_3052, r_VALUE_COMPARE(l_X_3047, l_LO_3054, r_MK(l_GE_3056)), r_VALUE_COMPARE(l_X_3047, l_HI_3055, r_MK(l_LE_3057))), 0);
}
}
else
{
S_R10(&l_COND_3052, r_FMT2(rt_str("@ || @", 6), l_COND_3052, r_VALUE_COMPARE(l_X_3047, r_CASE_LABEL(l_L_3051, (p_CH).f_T), r_MK(rt_str("==", 2)))), 0);
}
l_L_3051 = ((*(R21 *)rt_nil_check(l_L_3051))).f_NEXT;
}
RT_B_TICK();
} L_end3053: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3049, l_COND_3052));
S_R10(&l_WORD_3049, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_3048))).f_B, ((*(R21 *)rt_nil_check(l_ARM_3048))).f_C);
}
l_ARM_3048 = ((*(R21 *)rt_nil_check(l_ARM_3048))).f_NEXT;
}
RT_B_TICK();
} L_end3050: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_3049, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
static R26 r_CASE_LABEL(R21 * p_L, R22 * p_T) { RT_B_TICK(); 
R26 l_V_3058; memset(&l_V_3058, 0, sizeof l_V_3058);
S_R26(&l_V_3058, r_EXPR(p_L, p_T), 0);
if ((!r_SAME_CLASS(r_REAL_TYPE((l_V_3058).f_T), r_REAL_TYPE(p_T))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_L))).f_LINE, rt_str("a case label is a value of the type of the choice (4.5.5.2)", 59));
}
{ R26 rv3059 = l_V_3058;
return rv3059; }
rt_raise(RT_X_INIT);
}
static R10 r_VALUE_COMPARE(R26 p_A, R26 p_B, R10 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT))
{
{ R10 rv3060 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv3060; }
}
{ R10 rv3061 = r_FIXED_COMPARE(p_A, p_B, p_OP);
return rv3061; }
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
{ R12 * rv3062 = NULL;
return rv3062; }
}
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv3063 = NULL;
return rv3063; }
}
{
R12 * l_Y_3064; memset(&l_Y_3064, 0, sizeof l_Y_3064);
l_Y_3064 = r_LOOKUP(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_3064 == NULL))
{
{ R12 * rv3065 = NULL;
return rv3065; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3064))).f_KIND == g_Y_VAR)))
{
{ R12 * rv3066 = NULL;
return rv3066; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3064))).f_WITHV == ((rt_int)1LL))))
{
{ R12 * rv3067 = NULL;
return rv3067; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_3064))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv3068 = NULL;
return rv3068; }
}
{
R24 * l_F_3069; memset(&l_F_3069, 0, sizeof l_F_3069);
l_F_3069 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_3064))).f_T), ((*(R21 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_3069 == NULL))
{
{ R12 * rv3070 = NULL;
return rv3070; }
}
if ((!(((*(R24 *)rt_nil_check(l_F_3069))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv3071 = NULL;
return rv3071; }
}
}
{ R12 * rv3072 = l_Y_3064;
return rv3072; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R10 p_TAGN, rt_int p_V) { RT_B_TICK(); 
R22 * l_N_3073; memset(&l_N_3073, 0, sizeof l_N_3073);
l_N_3073 = r_COPY_TYP(p_T);
R24 * l_F_3074; memset(&l_F_3074, 0, sizeof l_F_3074);
l_F_3074 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_3075; memset(&l_A_3075, 0, sizeof l_A_3075);
l_A_3075 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R25 * l_HEAD_3076; memset(&l_HEAD_3076, 0, sizeof l_HEAD_3076);
l_HEAD_3076 = NULL;
R25 * l_TAIL_3077; memset(&l_TAIL_3077, 0, sizeof l_TAIL_3077);
l_TAIL_3077 = NULL;
for (;;) {
if ((l_F_3074 == NULL)) goto L_end3078;
{
if (((!(((*(R24 *)rt_nil_check(l_F_3074))).f_KIND == ((rt_int)0LL))) && (!(l_A_3075 == NULL))))
{
{
R25 * l_B_3079; memset(&l_B_3079, 0, sizeof l_B_3079);
l_B_3079 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_B_3079)), (*(R25 *)rt_nil_check(l_A_3075)), 0);
((*(R25 *)rt_nil_check(l_B_3079))).f_NEXT = NULL;
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_3074))).f_NAME, p_TAGN))
{
((*(R25 *)rt_nil_check(l_B_3079))).f_ANYARG = 0;
S_R23(&((*(R25 *)rt_nil_check(l_B_3079))).f_MLO, r_SOME(p_V), 0);
S_R10(&((*(R25 *)rt_nil_check(l_B_3079))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_3077 == NULL))
{
l_HEAD_3076 = l_B_3079;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_3077))).f_NEXT = l_B_3079;
}
l_TAIL_3077 = l_B_3079;
}
l_A_3075 = ((*(R25 *)rt_nil_check(l_A_3075))).f_NEXT;
}
l_F_3074 = ((*(R24 *)rt_nil_check(l_F_3074))).f_NEXT;
}
RT_B_TICK();
} L_end3078: ;
((*(R22 *)rt_nil_check(l_N_3073))).f_ARGS = l_HEAD_3076;
{ R22 * rv3080 = l_N_3073;
return rv3080; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R21 * p_S) { RT_B_TICK(); 
R21 * l_ARM_3081; memset(&l_ARM_3081, 0, sizeof l_ARM_3081);
l_ARM_3081 = ((*(R21 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_3082; memset(&l_SAVED_3082, 0, sizeof l_SAVED_3082);
l_SAVED_3082 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_3081 == NULL)) goto L_end3083;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_ARM_3081))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(l_ARM_3081))).f_B, ((*(R21 *)rt_nil_check(l_ARM_3081))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_3082;
return;
}
l_ARM_3081 = ((*(R21 *)rt_nil_check(l_ARM_3081))).f_NEXT;
}
RT_B_TICK();
} L_end3083: ;
if ((!(((*(R21 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R21 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_3082;
}
}
static R22 * r_PATHS_TYPE(void) { RT_B_TICK(); 
R22 * l_T_3084; memset(&l_T_3084, 0, sizeof l_T_3084);
l_T_3084 = r_NEW_TYP(g_T_PATHS);
S_R10(&((*(R22 *)rt_nil_check(l_T_3084))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv3085 = l_T_3084;
return rv3085; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R21 * p_S) { RT_B_TICK(); 
R10 l_TD_3086; memset(&l_TD_3086, 0, sizeof l_TD_3086);
S_R10(&l_TD_3086, r_NEW_NAME(rt_str("td", 2)), 0);
R21 * l_P_3087; memset(&l_P_3087, 0, sizeof l_P_3087);
l_P_3087 = ((*(R21 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_3087 == NULL)) goto L_end3088;
{
{
R12 * l_Y_3089; memset(&l_Y_3089, 0, sizeof l_Y_3089);
l_Y_3089 = r_NEW_SYM(g_Y_PATH, ((*(R21 *)rt_nil_check(l_P_3087))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3089))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_3089))).f_DECL = l_P_3087;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_3089, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_3089))).f_INPUT = 1;
r_DEFINE(l_Y_3089, ((*(R21 *)rt_nil_check(l_P_3087))).f_LINE);
}
l_P_3087 = ((*(R21 *)rt_nil_check(l_P_3087))).f_NEXT;
}
RT_B_TICK();
} L_end3088: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_3086));
r_CODES(rt_str("rt_b_par_begin();", 17));
r_CODE(r_FMT2(rt_str("{ rt_frame @a; if (RT_TRY(@a)) {", 32), l_TD_3086, l_TD_3086));
l_P_3087 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_P_3087 == NULL)) goto L_end3090;
{
r_ACTIVATE_PATH(l_P_3087, l_TD_3086);
l_P_3087 = ((*(R21 *)rt_nil_check(l_P_3087))).f_NEXT;
}
RT_B_TICK();
} L_end3090: ;
r_CODE(r_FMT3(rt_str("RT_POP(@a); } else { RT_POP(@a); rt_b_par_abandon(&@);", 54), l_TD_3086, l_TD_3086, l_TD_3086));
r_CODES(rt_str("rt_raise(rt_xcur); } }", 22));
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_3086));
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_ACTIVATE_PATH(R21 * p_P, R10 p_TD) { RT_B_TICK(); 
R10 l_FN_3091; memset(&l_FN_3091, 0, sizeof l_FN_3091);
S_R10(&l_FN_3091, r_NEW_NAME(rt_str("path_", 5)), 0);
R10 l_FT_3092; memset(&l_FT_3092, 0, sizeof l_FT_3092);
S_R10(&l_FT_3092, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_3093; memset(&l_Y_3093, 0, sizeof l_Y_3093);
l_Y_3093 = r_LOOKUP(((*(R21 *)rt_nil_check(p_P))).f_NAME);
R10 l_H_3094; memset(&l_H_3094, 0, sizeof l_H_3094);
S_R10(&l_H_3094, r_OBJ_ACCESS(l_Y_3093), 0);
R10 l_IT_3095; memset(&l_IT_3095, 0, sizeof l_IT_3095);
S_R10(&l_IT_3095, r_NEW_NAME(rt_str("pi", 2)), 0);
R10 l_PRIO_3096; memset(&l_PRIO_3096, 0, sizeof l_PRIO_3096);
S_R10(&l_PRIO_3096, r_MK(rt_str("0", 1)), 0);
R10 l_START_3097; memset(&l_START_3097, 0, sizeof l_START_3097);
R22 * l_LT_3098; memset(&l_LT_3098, 0, sizeof l_LT_3098);
l_LT_3098 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_3092, l_FT_3092));
if ((!(((*(R21 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R10(&l_PRIO_3096, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R21 * l_R_3099; memset(&l_R_3099, 0, sizeof l_R_3099);
l_R_3099 = ((*(R21 *)rt_nil_check(p_P))).f_A;
R26 l_LV_3100; memset(&l_LV_3100, 0, sizeof l_LV_3100);
S_R26(&l_LV_3100, r_EXPR(((*(R21 *)rt_nil_check(l_R_3099))).f_A, NULL), 0);
R10 l_LO_3101; memset(&l_LO_3101, 0, sizeof l_LO_3101);
S_R10(&l_LO_3101, (l_LV_3100).f_C, 0);
R10 l_HI_3102; memset(&l_HI_3102, 0, sizeof l_HI_3102);
S_R10(&l_HI_3102, (r_EXPR(((*(R21 *)rt_nil_check(l_R_3099))).f_B, (l_LV_3100).f_T)).f_C, 0);
R22 * l_RT_3103; memset(&l_RT_3103, 0, sizeof l_RT_3103);
l_RT_3103 = r_REAL_TYPE((l_LV_3100).f_T);
if ((((*(R22 *)rt_nil_check(l_RT_3103))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_RT_3103))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("a loop prefix over an UNORDERED type (4.6.1)", 44));
}
l_LT_3098 = ((*(R22 *)rt_nil_check(l_RT_3103))).f_BASE;
S_R10(&l_HI_3102, (r_EXPR(((*(R21 *)rt_nil_check(l_R_3099))).f_B, l_LT_3098)).f_C, 0);
}
else if (((!(((*(R22 *)rt_nil_check(l_RT_3103))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_RT_3103))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("the range of a loop prefix is integer or enumerated (4.6.1)", 59));
}
if (((((*(R21 *)rt_nil_check(l_R_3099))).f_IV == ((rt_int)1LL)) || (((*(R21 *)rt_nil_check(l_R_3099))).f_IV == ((rt_int)3LL))))
{
S_R10(&l_LO_3101, r_FMT1(rt_str("(@) + 1", 7), l_LO_3101), 0);
}
if ((((*(R21 *)rt_nil_check(l_R_3099))).f_IV >= ((rt_int)2LL)))
{
S_R10(&l_HI_3102, r_FMT1(rt_str("(@) - 1", 7), l_HI_3102), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_3094, l_LO_3101, l_HI_3102));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_3095, l_H_3094, l_IT_3095, l_H_3094), l_IT_3095));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_3095));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_3092, r_UP_FRAME()));
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME), l_IT_3095));
}
if ((!(((*(R21 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_3104; memset(&l_V_3104, 0, sizeof l_V_3104);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_3105; memset(&l_I_3105, 0, sizeof l_I_3105);
l_I_3105 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_3105))).f_T = l_LT_3098;
((*(R12 *)rt_nil_check(l_I_3105))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_3105))).f_ACCESS, l_IT_3095, 0);
((*(R12 *)rt_nil_check(l_I_3105))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_3105, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_3104, r_EXPR(((*(R21 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3104).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_3104).f_C));
}
}
S_R10(&l_START_3097, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_3094, l_IT_3095, l_FN_3091, p_TD), 0);
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT4(rt_str("@@, @); if (@ == ", 17), l_START_3097, p_TD, l_PRIO_3096, l_IT_3095));
r_CODE(r_FMT1(rt_str("@.hi) break; }", 14), l_H_3094));
}
else
{
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_3097, p_TD, l_PRIO_3096));
}
r_PATH_BODY(p_P, l_FN_3091, l_FT_3092, l_LT_3098);
}
static R10 r_UP_FRAME(void) { RT_B_TICK(); 
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R10 rv3106 = r_MK(rt_str("NULL", 4));
return rv3106; }
}
{ R10 rv3107 = r_MK(rt_str("F", 1));
return rv3107; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R21 * p_P, R10 p_FN, R10 p_FT, R22 * p_LT) { RT_B_TICK(); 
R14 l_SAVED_CODE_3108; memset(&l_SAVED_CODE_3108, 0, sizeof l_SAVED_CODE_3108);
S_R14(&l_SAVED_CODE_3108, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_3109; memset(&l_SAVED_CTXS_3109, 0, sizeof l_SAVED_CTXS_3109);
l_SAVED_CTXS_3109 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R18 * l_OUTER_3110; memset(&l_OUTER_3110, 0, sizeof l_OUTER_3110);
l_OUTER_3110 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R21 * l_H_3111; memset(&l_H_3111, 0, sizeof l_H_3111);
l_H_3111 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_A;
R18 * l_CS_3112; memset(&l_CS_3112, 0, sizeof l_CS_3112);
l_CS_3112 = ((R18 *)rt_b_new(sizeof (R18)));
R10 l_UPT_3113; memset(&l_UPT_3113, 0, sizeof l_UPT_3113);
S_R10(&l_UPT_3113, r_MK(rt_str("void", 4)), 0);
if ((((*(R18 *)rt_nil_check(l_OUTER_3110))).f_LEVEL > ((rt_int)0LL)))
{
S_R10(&l_UPT_3113, ((*(R18 *)rt_nil_check(l_OUTER_3110))).f_FTYPE, 0);
}
S_R18(&(*(R18 *)rt_nil_check(l_CS_3112)), ({ R18 rc3114; memset(&rc3114, 0, sizeof rc3114);  rc3114.f_LEVEL = rt_add(((*(R18 *)rt_nil_check(l_OUTER_3110))).f_LEVEL, ((rt_int)1LL)); rc3114.f_R = NULL; rc3114.f_FRAMED = 1; S_R10(&rc3114.f_FTYPE, p_FT, 0); S_R14(&rc3114.f_FIELDS, ({ R14 rc3115; memset(&rc3115, 0, sizeof rc3115);  rc3115.f_HEAD = NULL; rc3115.f_TAIL = NULL; rc3115; }), 0); rc3114.f_UP = l_OUTER_3110; rc3114.f_IMPORTS = ((*(R21 *)rt_nil_check(l_H_3111))).f_B; rc3114.f_SIGNALS = ((*(R21 *)rt_nil_check(l_H_3111))).f_A; rc3114.f_RESULT = NULL; rc3114.f_IS_PATH = 1; S_R10(&rc3114.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3114; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_3113), &((*(R18 *)rt_nil_check(l_CS_3112))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_3112;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3116; memset(&rc3116, 0, sizeof rc3116);  rc3116.f_HEAD = NULL; rc3116.f_TAIL = NULL; rc3116; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_H_3111))).f_B, ((*(R21 *)rt_nil_check(l_H_3111))).f_A, ((*(R21 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R21 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_3117; memset(&l_I_3117, 0, sizeof l_I_3117);
l_I_3117 = r_NEW_SYM(g_Y_CONST, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_3117))).f_T = p_LT;
((*(R12 *)rt_nil_check(l_I_3117))).f_INPUT = 1;
S_R10(&((*(R12 *)rt_nil_check(l_I_3117))).f_FIELD, r_FMT1(rt_str("l_@", 3), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_I_3117))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), r_CID(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_P))).f_E))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_3112))).f_FIELDS);
r_DEFINE(l_I_3117, ((*(R21 *)rt_nil_check(p_P))).f_LINE);
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
R21 * l_L_3118; memset(&l_L_3118, 0, sizeof l_L_3118);
l_L_3118 = ((*(R21 *)rt_nil_check(l_H_3111))).f_A;
R10 l_C_3119; memset(&l_C_3119, 0, sizeof l_C_3119);
S_R10(&l_C_3119, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3118 == NULL)) goto L_end3120;
{
S_R10(&l_C_3119, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_3119, r_EXC_NAME(((*(R21 *)rt_nil_check(l_L_3118))).f_NAME)), 0);
l_L_3118 = ((*(R21 *)rt_nil_check(l_L_3118))).f_NEXT;
}
RT_B_TICK();
} L_end3120: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_3119));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_3112))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_3110;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3108, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_3109;
}
static R10 r_JOIN_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_3121; memset(&l_C_3121, 0, sizeof l_C_3121);
l_C_3121 = (p_B).f_HEAD;
R10 l_R_3122; memset(&l_R_3122, 0, sizeof l_R_3122);
S_R10(&l_R_3122, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_3121 == NULL)) goto L_end3123;
{
S_R10(&l_R_3122, r_CAT(l_R_3122, ((*(R15 *)rt_nil_check(l_C_3121))).f_T), 0);
l_C_3121 = ((*(R15 *)rt_nil_check(l_C_3121))).f_NEXT;
}
RT_B_TICK();
} L_end3123: ;
{ R10 rv3124 = l_R_3122;
return rv3124; }
rt_raise(RT_X_INIT);
}
static R10 r_PATH_REF(R21 * p_E) { RT_B_TICK(); 
R10 l_NAME_3125; memset(&l_NAME_3125, 0, sizeof l_NAME_3125);
S_R10(&l_NAME_3125, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
R10 l_SUB_3126; memset(&l_SUB_3126, 0, sizeof l_SUB_3126);
S_R10(&l_SUB_3126, r_MK(rt_str("0", 1)), 0);
if ((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R21 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R10(&l_SUB_3126, r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_3127; memset(&l_Y_3127, 0, sizeof l_Y_3127);
l_Y_3127 = r_LOOKUP(l_NAME_3125);
if ((l_Y_3127 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_3125);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3127))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_3125);
}
if (((((*(R21 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3127))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R10 rv3128 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_3127), l_SUB_3126);
return rv3128; }
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
R10 l_NAME_3129; memset(&l_NAME_3129, 0, sizeof l_NAME_3129);
S_R10(&l_NAME_3129, ((*(R21 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_3130; memset(&l_LINE_3130, 0, sizeof l_LINE_3130);
l_LINE_3130 = ((*(R21 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_3129, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_3131; memset(&l_V_3131, 0, sizeof l_V_3131);
S_R26(&l_V_3131, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3131).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_3130, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv3132 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_3131).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_3131).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3132; }
}
}
else if (r_TEQS(l_NAME_3129, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv3133 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3133; }
}
{ R26 rv3134 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R21 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3134; }
}
else if (r_TEQS(l_NAME_3129, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R21 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv3135 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv3135; }
}
{ R26 rv3136 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R21 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv3136; }
}
else if ((r_TEQS(l_NAME_3129, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_3129, rt_str("RELEASE", 7))))
{
if ((((!(((*(R21 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R21 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R21 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_3130, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_3129);
}
{
R26 l_V_3137; memset(&l_V_3137, 0, sizeof l_V_3137);
S_R26(&l_V_3137, r_EXPR(((*(R21 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3137).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_3130, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_3137).f_LVAL))
{
r_FAIL(l_LINE_3130, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_3129, rt_str("REQUEST", 7)))
{
{ R26 rv3138 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_3137).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3138; }
}
{ R26 rv3139 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_3137).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3139; }
}
}
else if (r_TEQS(l_NAME_3129, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_3130);
{ R26 rv3140 = r_START_IO_CALL(p_E);
return rv3140; }
}
r_FAILT(l_LINE_3130, rt_str("unknown routine ", 16), l_NAME_3129);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R21 * p_E) { RT_B_TICK(); 
R27 * l_ARGS_3141; memset(&l_ARGS_3141, 0, sizeof l_ARGS_3141);
l_ARGS_3141 = r_CALL_ARGS(p_E);
R12 * l_Y_3142; memset(&l_Y_3142, 0, sizeof l_Y_3142);
l_Y_3142 = r_FIND_ROUTINE(((*(R21 *)rt_nil_check(p_E))).f_NAME, l_ARGS_3141, ((*(R21 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_3143; memset(&l_R_3143, 0, sizeof l_R_3143);
if ((l_Y_3142 == NULL))
{
r_FAIL(((*(R21 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_3143, r_CALL_SYM(l_Y_3142, l_ARGS_3141, ((*(R21 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv3144 = l_R_3143;
return rv3144; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R21 * p_IMPORTS, R21 * p_SIGNALS, R10 p_NAME) { RT_B_TICK(); 
R19 * l_I_3145; memset(&l_I_3145, 0, sizeof l_I_3145);
l_I_3145 = ((R19 *)rt_b_new(sizeof (R19)));
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R19(&(*(R19 *)rt_nil_check(l_I_3145)), ({ R19 rc3146; memset(&rc3146, 0, sizeof rc3146);  rc3146.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc3146.f_IMPORTS = p_IMPORTS; rc3146.f_SIGNALS = p_SIGNALS; S_R10(&rc3146.f_NAME, p_NAME, 0); rc3146.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc3146; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_3145;
}
static void r_LEAVE_ISCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R10 r_ROUTINE_CNAME(R10 p_NAME) { RT_B_TICK(); 
R10 l_BASE_3147; memset(&l_BASE_3147, 0, sizeof l_BASE_3147);
S_R10(&l_BASE_3147, r_FMT1(rt_str("r_@", 3), r_CID(p_NAME)), 0);
rstr l_S_3148; memset(&l_S_3148, 0, sizeof l_S_3148);
l_S_3148 = rt_b_str_new((l_BASE_3147).f_LEN, 0);
rt_b_assign(&l_S_3148, r_STR(l_BASE_3147, (l_BASE_3147).f_LEN));
R21 * l_N_3149; memset(&l_N_3149, 0, sizeof l_N_3149);
l_N_3149 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it3151_lo = ((rt_int)0LL), it3151_hi = rt_sub((l_BASE_3147).f_LEN, ((rt_int)1LL));
for (rt_int it3151 = it3151_lo; it3151 <= it3151_hi; it3151++) {
{
if (rt_b_eq(rt_b_slice(l_S_3148, it3151, it3151), rt_str("$", 1)))
{
S_R10(&l_BASE_3147, r_MK(rt_b_cat(rt_b_cat(rt_b_slice(l_S_3148, ((rt_int)0LL), rt_sub(it3151, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_3148, rt_add(it3151, ((rt_int)1LL)), rt_sub((l_BASE_3147).f_LEN, ((rt_int)1LL))))), 0);
}
}
RT_B_TICK();
if (it3151 == it3151_hi) break;
} } L_end3150: ;
for (;;) {
if ((l_N_3149 == NULL)) goto L_end3152;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_N_3149))).f_NAME, l_BASE_3147))
{
{ R10 rv3153 = r_FMT2(rt_str("@_@", 3), l_BASE_3147, r_NEW_NAME(rt_str("", 0)));
return rv3153; }
}
l_N_3149 = ((*(R21 *)rt_nil_check(l_N_3149))).f_NEXT;
}
RT_B_TICK();
} L_end3152: ;
l_N_3149 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R10(&((*(R21 *)rt_nil_check(l_N_3149))).f_NAME, l_BASE_3147, 0);
((*(R21 *)rt_nil_check(l_N_3149))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_3149;
{ R10 rv3154 = l_BASE_3147;
return rv3154; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R21 * p_B) { RT_B_TICK(); 
if ((p_B == NULL))
{
{ rt_int rv3155 = 0;
return rv3155; }
}
if ((!(((*(R21 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv3156 = 1;
return rv3156; }
}
{ rt_int rv3157 = r_HAS_HANDLERS(((*(R21 *)rt_nil_check(p_B))).f_B);
return rv3157; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R21 * p_S0) { RT_B_TICK(); 
R21 * l_S_3158; memset(&l_S_3158, 0, sizeof l_S_3158);
l_S_3158 = p_S0;
for (;;) {
if ((l_S_3158 == NULL)) goto L_end3159;
{
if (((((*(R21 *)rt_nil_check(l_S_3158))).f_KIND == g_N_EXCEPT) || (((*(R21 *)rt_nil_check(l_S_3158))).f_KIND == g_N_PAR)))
{
{ rt_int rv3160 = 1;
return rv3160; }
}
if (((((*(R21 *)rt_nil_check(l_S_3158))).f_KIND == g_N_LABELED) || (((*(R21 *)rt_nil_check(l_S_3158))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_3158))).f_A) || r_HAS_HANDLERS(((*(R21 *)rt_nil_check(l_S_3158))).f_B)))
{
{ rt_int rv3161 = 1;
return rv3161; }
}
}
else if ((((*(R21 *)rt_nil_check(l_S_3158))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_3158))).f_A))).f_B))
{
{ rt_int rv3162 = 1;
return rv3162; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_3158))).f_KIND == g_N_LOOP) || (((*(R21 *)rt_nil_check(l_S_3158))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_3158))).f_B))).f_B))
{
{ rt_int rv3163 = 1;
return rv3163; }
}
}
else if (((((*(R21 *)rt_nil_check(l_S_3158))).f_KIND == g_N_IF) || (((*(R21 *)rt_nil_check(l_S_3158))).f_KIND == g_N_CASE)))
{
{
R21 * l_A_3164; memset(&l_A_3164, 0, sizeof l_A_3164);
l_A_3164 = ((*(R21 *)rt_nil_check(l_S_3158))).f_A;
if ((((*(R21 *)rt_nil_check(l_S_3158))).f_KIND == g_N_CASE))
{
l_A_3164 = ((*(R21 *)rt_nil_check(l_S_3158))).f_B;
if ((!(((*(R21 *)rt_nil_check(l_S_3158))).f_D == NULL)))
{
{ rt_int rv3165 = 1;
return rv3165; }
}
if ((!(((*(R21 *)rt_nil_check(l_S_3158))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_3158))).f_C))).f_B))
{
{ rt_int rv3166 = 1;
return rv3166; }
}
}
}
else if ((!(((*(R21 *)rt_nil_check(l_S_3158))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_3158))).f_B))).f_B))
{
{ rt_int rv3167 = 1;
return rv3167; }
}
}
for (;;) {
if ((l_A_3164 == NULL)) goto L_end3168;
{
if ((!(((*(R21 *)rt_nil_check(l_A_3164))).f_C == NULL)))
{
{ rt_int rv3169 = 1;
return rv3169; }
}
if (r_HAS_HANDLERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_A_3164))).f_B))).f_B))
{
{ rt_int rv3170 = 1;
return rv3170; }
}
l_A_3164 = ((*(R21 *)rt_nil_check(l_A_3164))).f_NEXT;
}
RT_B_TICK();
} L_end3168: ;
}
}
l_S_3158 = ((*(R21 *)rt_nil_check(l_S_3158))).f_NEXT;
}
RT_B_TICK();
} L_end3159: ;
{ rt_int rv3171 = 0;
return rv3171; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R21 * p_R) { RT_B_TICK(); 
R12 * l_Y_3172; memset(&l_Y_3172, 0, sizeof l_Y_3172);
l_Y_3172 = r_NEW_SYM(g_Y_ROUTINE, ((*(R21 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_3173; memset(&l_S_3173, 0, sizeof l_S_3173);
l_S_3173 = rt_b_str_new((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, 0);
rt_b_assign(&l_S_3173, r_STR(((*(R21 *)rt_nil_check(p_R))).f_NAME, (((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R12 *)rt_nil_check(l_Y_3172))).f_DECL = p_R;
S_R10(&((*(R12 *)rt_nil_check(l_Y_3172))).f_ACCESS, r_ROUTINE_CNAME(((*(R21 *)rt_nil_check(p_R))).f_NAME), 0);
((*(R12 *)rt_nil_check(l_Y_3172))).f_FRAMED = r_NEEDS_FRAME(((*(R21 *)rt_nil_check(p_R))).f_C);
if ((((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_3172))).f_FIELD, ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_3172, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it3175_lo = ((rt_int)1LL), it3175_hi = rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it3175 = it3175_lo; it3175 <= it3175_hi; it3175++) {
{
if (rt_b_eq(rt_b_slice(l_S_3173, it3175, it3175), rt_str("$", 1)))
{
S_R10(&((*(R12 *)rt_nil_check(l_Y_3172))).f_PREFIX, r_MKN(rt_b_slice(l_S_3173, ((rt_int)0LL), rt_sub(it3175, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_3176; memset(&l_SHORT_3176, 0, sizeof l_SHORT_3176);
l_SHORT_3176 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_3173, rt_add(it3175, ((rt_int)1LL)), rt_sub((((*(R21 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_3176))).f_ORIG = l_Y_3172;
S_R10(&((*(R12 *)rt_nil_check(l_SHORT_3176))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_3172))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_3176))).f_DECL = p_R;
r_DEFINE(l_SHORT_3176, ((*(R21 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end3174;
}
}
RT_B_TICK();
if (it3175 == it3175_hi) break;
} } L_end3174: ;
}
static void r_DECLARE_MEMBERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_3177; memset(&l_R_3177, 0, sizeof l_R_3177);
l_R_3177 = p_RS;
for (;;) {
if ((l_R_3177 == NULL)) goto L_end3178;
{
if ((((*(R21 *)rt_nil_check(l_R_3177))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_3177);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_3177);
}
l_R_3177 = ((*(R21 *)rt_nil_check(l_R_3177))).f_NEXT;
}
RT_B_TICK();
} L_end3178: ;
}
static void r_ROUTINE_HEADERS(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_3179; memset(&l_R_3179, 0, sizeof l_R_3179);
l_R_3179 = p_RS;
for (;;) {
if ((l_R_3179 == NULL)) goto L_end3180;
{
if ((((*(R21 *)rt_nil_check(l_R_3179))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3181; memset(&l_M_3181, 0, sizeof l_M_3181);
l_M_3181 = r_FIND_DECL(l_R_3179);
r_ENTER_MODULE(l_M_3181);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3179))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3181);
}
}
else
{
{
R12 * l_Y_3182; memset(&l_Y_3182, 0, sizeof l_Y_3182);
l_Y_3182 = r_FIND_DECL(l_R_3179);
r_ROUTINE_HEADER(l_Y_3182);
}
}
l_R_3179 = ((*(R21 *)rt_nil_check(l_R_3179))).f_NEXT;
}
RT_B_TICK();
} L_end3180: ;
}
static void r_DISTINCT_SIGNATURES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_3183; memset(&l_R_3183, 0, sizeof l_R_3183);
l_R_3183 = p_RS;
for (;;) {
if ((l_R_3183 == NULL)) goto L_end3184;
{
if ((((*(R21 *)rt_nil_check(l_R_3183))).f_KIND == g_N_ROUTINE))
{
{
R21 * l_Q_3185; memset(&l_Q_3185, 0, sizeof l_Q_3185);
l_Q_3185 = ((*(R21 *)rt_nil_check(l_R_3183))).f_NEXT;
for (;;) {
if ((l_Q_3185 == NULL)) goto L_end3186;
{
if (((((*(R21 *)rt_nil_check(l_Q_3185))).f_KIND == g_N_ROUTINE) && r_TEQ(((*(R21 *)rt_nil_check(l_Q_3185))).f_NAME, ((*(R21 *)rt_nil_check(l_R_3183))).f_NAME)))
{
{
R12 * l_A_3187; memset(&l_A_3187, 0, sizeof l_A_3187);
l_A_3187 = r_FIND_DECL(l_R_3183);
R12 * l_B_3188; memset(&l_B_3188, 0, sizeof l_B_3188);
l_B_3188 = r_FIND_DECL(l_Q_3185);
r_ROUTINE_HEADER(l_A_3187);
r_ROUTINE_HEADER(l_B_3188);
if (r_SAME_SIGNATURE(l_A_3187, l_B_3188))
{
r_FAILT(((*(R21 *)rt_nil_check(l_Q_3185))).f_LINE, rt_str("two routines of one scope with the same signature (4.1): ", 57), ((*(R21 *)rt_nil_check(l_Q_3185))).f_NAME);
}
}
}
l_Q_3185 = ((*(R21 *)rt_nil_check(l_Q_3185))).f_NEXT;
}
RT_B_TICK();
} L_end3186: ;
}
}
l_R_3183 = ((*(R21 *)rt_nil_check(l_R_3183))).f_NEXT;
}
RT_B_TICK();
} L_end3184: ;
}
static R12 * r_FIND_DECL(R21 * p_D) { RT_B_TICK(); 
R12 * l_Y_3189; memset(&l_Y_3189, 0, sizeof l_Y_3189);
l_Y_3189 = r_LOOKUP(((*(R21 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_3189 == NULL)) goto L_end3190;
{
if (((((*(R12 *)rt_nil_check(l_Y_3189))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_3189))).f_ORIG == NULL)))
{
{ R12 * rv3191 = l_Y_3189;
return rv3191; }
}
l_Y_3189 = r_LOOKUP_NEXT(l_Y_3189);
}
RT_B_TICK();
} L_end3190: ;
r_FAILT(((*(R21 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R21 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R21 * p_DECLS) { RT_B_TICK(); 
R21 * l_D_3192; memset(&l_D_3192, 0, sizeof l_D_3192);
l_D_3192 = p_DECLS;
for (;;) {
if ((l_D_3192 == NULL)) goto L_end3193;
{
if (((((*(R21 *)rt_nil_check(l_D_3192))).f_KIND == g_N_TYPE) && (((*(R21 *)rt_nil_check(l_D_3192))).f_A == NULL)))
{
if ((((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_D_3192))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_3194; memset(&l_Y_3194, 0, sizeof l_Y_3194);
l_Y_3194 = r_FIND_DECL(l_D_3192);
R22 * l_T_3195; memset(&l_T_3195, 0, sizeof l_T_3195);
l_T_3195 = r_RESOLVE_USER(r_TYPE_REF(l_D_3192));
}
}
}
l_D_3192 = ((*(R21 *)rt_nil_check(l_D_3192))).f_NEXT;
}
RT_B_TICK();
} L_end3193: ;
}
static R21 * r_TYPE_REF(R21 * p_D) { RT_B_TICK(); 
R21 * l_TS_3196; memset(&l_TS_3196, 0, sizeof l_TS_3196);
l_TS_3196 = r_NEW_NODE(g_TS_NAME, ((*(R21 *)rt_nil_check(p_D))).f_LINE);
S_R10(&((*(R21 *)rt_nil_check(l_TS_3196))).f_NAME, ((*(R21 *)rt_nil_check(p_D))).f_NAME, 0);
{ R21 * rv3197 = l_TS_3196;
return rv3197; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R21 * p_M) { RT_B_TICK(); 
R12 * l_Y_3198; memset(&l_Y_3198, 0, sizeof l_Y_3198);
l_Y_3198 = r_NEW_SYM(g_Y_MODULE, ((*(R21 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_3199; memset(&l_SAVED_3199, 0, sizeof l_SAVED_3199);
l_SAVED_3199 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_3198))).f_DECL = p_M;
r_DEFINE(l_Y_3198, ((*(R21 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R21 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_3200; memset(&l_MARK_3200, 0, sizeof l_MARK_3200);
l_MARK_3200 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_3198;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_3198))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_3200);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_3199;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_3198);
}
static void r_ENTER_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_Y_3201; memset(&l_Y_3201, 0, sizeof l_Y_3201);
l_Y_3201 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_3201 == NULL)) goto L_end3202;
{
{
R12 * l_NEXT_3203; memset(&l_NEXT_3203, 0, sizeof l_NEXT_3203);
l_NEXT_3203 = ((*(R12 *)rt_nil_check(l_Y_3201))).f_SNEXT;
r_DEFINE(l_Y_3201, ((rt_int)0LL));
l_Y_3201 = l_NEXT_3203;
}
}
RT_B_TICK();
} L_end3202: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_MARK_3204; memset(&l_MARK_3204, 0, sizeof l_MARK_3204);
l_MARK_3204 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_3204 == NULL)) goto L_end3205;
{
if ((((*(R12 *)rt_nil_check(l_MARK_3204))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end3205;
}
l_MARK_3204 = ((*(R12 *)rt_nil_check(l_MARK_3204))).f_SNEXT;
}
RT_B_TICK();
} L_end3205: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_3204);
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
{ rt_int rv3206 = 1;
return rv3206; }
}
}
{ rt_int rv3207 = 0;
return rv3207; }
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
R21 * l_D_3208; memset(&l_D_3208, 0, sizeof l_D_3208);
l_D_3208 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_3209; memset(&l_Y_3209, 0, sizeof l_Y_3209);
l_Y_3209 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3209 == NULL)) goto L_end3210;
{
if (r_EXPORTED_BY(l_D_3208, l_Y_3209))
{
((*(R12 *)rt_nil_check(l_Y_3209))).f_EXPORTED = 1;
{
R12 * l_A_3211; memset(&l_A_3211, 0, sizeof l_A_3211);
l_A_3211 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_3209))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_3209))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_3211)), (*(R12 *)rt_nil_check(l_Y_3209)), 0);
((*(R12 *)rt_nil_check(l_A_3211))).f_ORIG = r_ORIGINAL(l_Y_3209);
((*(R12 *)rt_nil_check(l_A_3211))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_3211, ((*(R21 *)rt_nil_check(l_D_3208))).f_LINE);
}
}
l_Y_3209 = ((*(R12 *)rt_nil_check(l_Y_3209))).f_SNEXT;
}
RT_B_TICK();
} L_end3210: ;
{
R21 * l_X_3212; memset(&l_X_3212, 0, sizeof l_X_3212);
l_X_3212 = ((*(R21 *)rt_nil_check(l_D_3208))).f_B;
for (;;) {
if ((l_X_3212 == NULL)) goto L_end3213;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R21 *)rt_nil_check(l_X_3212))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_X_3212))).f_LINE, rt_str("the module does not declare ", 28), ((*(R21 *)rt_nil_check(l_X_3212))).f_NAME);
}
r_CHECK_EXPORT_ITEM(p_M, l_X_3212);
l_X_3212 = ((*(R21 *)rt_nil_check(l_X_3212))).f_NEXT;
}
RT_B_TICK();
} L_end3213: ;
}
}
static void r_CHECK_EXPORT_ITEM(R12 * p_M, R21 * p_X) { RT_B_TICK(); 
R12 * l_Y_3214; memset(&l_Y_3214, 0, sizeof l_Y_3214);
l_Y_3214 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
rt_int l_IS_TYPE_3215; memset(&l_IS_TYPE_3215, 0, sizeof l_IS_TYPE_3215);
l_IS_TYPE_3215 = 0;
rt_int l_IS_ROUTINE_3216; memset(&l_IS_ROUTINE_3216, 0, sizeof l_IS_ROUTINE_3216);
l_IS_ROUTINE_3216 = 0;
for (;;) {
if ((l_Y_3214 == NULL)) goto L_end3217;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_3214))).f_NAME, ((*(R21 *)rt_nil_check(p_X))).f_NAME))
{
if ((((*(R12 *)rt_nil_check(l_Y_3214))).f_KIND == g_Y_TYPE))
{
l_IS_TYPE_3215 = 1;
}
else if ((((((*(R12 *)rt_nil_check(l_Y_3214))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_3214))).f_KIND == g_Y_MODULE)) || (((*(R12 *)rt_nil_check(l_Y_3214))).f_KIND == g_Y_ENUMLIT)))
{
l_IS_ROUTINE_3216 = 1;
}
}
else if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_3214))).f_PREFIX, ((*(R21 *)rt_nil_check(p_X))).f_NAME))
{
l_IS_ROUTINE_3216 = 1;
}
l_Y_3214 = ((*(R12 *)rt_nil_check(l_Y_3214))).f_SNEXT;
}
RT_B_TICK();
} L_end3217: ;
if (((!l_IS_TYPE_3215) && (!l_IS_ROUTINE_3216)))
{
r_FAILT(((*(R21 *)rt_nil_check(p_X))).f_LINE, rt_str("only type and routine names are exported (4.4): ", 48), ((*(R21 *)rt_nil_check(p_X))).f_NAME);
}
if ((!(((*(R21 *)rt_nil_check(p_X))).f_A == NULL)))
{
if ((!l_IS_TYPE_3215))
{
r_FAILT(((*(R21 *)rt_nil_check(p_X))).f_LINE, rt_str("only a type-name is followed by a WITH clause (4.4): ", 53), ((*(R21 *)rt_nil_check(p_X))).f_NAME);
}
{
R21 * l_OP_3218; memset(&l_OP_3218, 0, sizeof l_OP_3218);
l_OP_3218 = ((*(R21 *)rt_nil_check(p_X))).f_A;
for (;;) {
if ((l_OP_3218 == NULL)) goto L_end3219;
{
{
rt_int l_FOUND_3220; memset(&l_FOUND_3220, 0, sizeof l_FOUND_3220);
l_FOUND_3220 = 0;
l_Y_3214 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3214 == NULL)) goto L_end3221;
{
if (((((*(R12 *)rt_nil_check(l_Y_3214))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_3214))).f_PREFIX, ((*(R21 *)rt_nil_check(p_X))).f_NAME)))
{
if (r_TEQ(r_BASE_NAME(r_ORIGINAL(l_Y_3214)), ((*(R21 *)rt_nil_check(l_OP_3218))).f_NAME))
{
l_FOUND_3220 = 1;
}
}
l_Y_3214 = ((*(R12 *)rt_nil_check(l_Y_3214))).f_SNEXT;
}
RT_B_TICK();
} L_end3221: ;
if ((!l_FOUND_3220))
{
r_FAILT(((*(R21 *)rt_nil_check(l_OP_3218))).f_LINE, rt_str("a WITH clause lists operations of the type (4.4): ", 50), ((*(R21 *)rt_nil_check(l_OP_3218))).f_NAME);
}
}
l_OP_3218 = ((*(R21 *)rt_nil_check(l_OP_3218))).f_NEXT;
}
RT_B_TICK();
} L_end3219: ;
}
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R10 p_NAME) { RT_B_TICK(); 
R12 * l_Y_3222; memset(&l_Y_3222, 0, sizeof l_Y_3222);
l_Y_3222 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3222 == NULL)) goto L_end3223;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_3222))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_3222))).f_PREFIX, p_NAME)))
{
{ rt_int rv3224 = 1;
return rv3224; }
}
l_Y_3222 = ((*(R12 *)rt_nil_check(l_Y_3222))).f_SNEXT;
}
RT_B_TICK();
} L_end3223: ;
{ rt_int rv3225 = 0;
return rv3225; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R21 * p_D, R12 * p_Y) { RT_B_TICK(); 
R21 * l_X_3226; memset(&l_X_3226, 0, sizeof l_X_3226);
l_X_3226 = ((*(R21 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv3227 = 0;
return rv3227; }
}
if ((((*(R21 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv3228 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv3228; }
}
for (;;) {
if ((l_X_3226 == NULL)) goto L_end3229;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_X_3226))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3230 = 1;
return rv3230; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R21 *)rt_nil_check(l_X_3226))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R21 *)rt_nil_check(l_X_3226))).f_A == NULL))
{
{ rt_int rv3231 = 1;
return rv3231; }
}
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_X_3226))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv3232 = 1;
return rv3232; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_3233; memset(&l_T_3233, 0, sizeof l_T_3233);
l_T_3233 = r_ORIG_LOOKUP_MEMBER(((*(R21 *)rt_nil_check(l_X_3226))).f_NAME, p_Y);
if ((!(l_T_3233 == NULL)))
{
{ rt_int rv3234 = 1;
return rv3234; }
}
}
}
l_X_3226 = ((*(R21 *)rt_nil_check(l_X_3226))).f_NEXT;
}
RT_B_TICK();
} L_end3229: ;
{ rt_int rv3235 = 0;
return rv3235; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R10 p_NAME, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3236; memset(&l_M_3236, 0, sizeof l_M_3236);
l_M_3236 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_3237; memset(&l_Z_3237, 0, sizeof l_Z_3237);
if ((l_M_3236 == NULL))
{
{ R12 * rv3238 = NULL;
return rv3238; }
}
l_Z_3237 = ((*(R12 *)rt_nil_check(l_M_3236))).f_MEMBERS;
for (;;) {
if ((l_Z_3237 == NULL)) goto L_end3239;
{
if (((((*(R12 *)rt_nil_check(l_Z_3237))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_3237))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_3237))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_3237))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_3237))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv3240 = l_Z_3237;
return rv3240; }
}
}
}
}
l_Z_3237 = ((*(R12 *)rt_nil_check(l_Z_3237))).f_SNEXT;
}
RT_B_TICK();
} L_end3239: ;
{ R12 * rv3241 = NULL;
return rv3241; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_3242; memset(&l_R_3242, 0, sizeof l_R_3242);
l_R_3242 = p_RS;
for (;;) {
if ((l_R_3242 == NULL)) goto L_end3243;
{
if ((((*(R21 *)rt_nil_check(l_R_3242))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3244; memset(&l_M_3244, 0, sizeof l_M_3244);
l_M_3244 = r_FIND_DECL(l_R_3242);
R21 * l_D_3245; memset(&l_D_3245, 0, sizeof l_D_3245);
l_D_3245 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3242))).f_C))).f_A;
r_ENTER_MODULE(l_M_3244);
for (;;) {
if ((l_D_3245 == NULL)) goto L_end3246;
{
if (((((*(R21 *)rt_nil_check(l_D_3245))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_3245))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3245);
}
l_D_3245 = ((*(R21 *)rt_nil_check(l_D_3245))).f_NEXT;
}
RT_B_TICK();
} L_end3246: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3242))).f_C))).f_C);
r_DISTINCT_SIGNATURES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3242))).f_C))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3242))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3244);
}
}
l_R_3242 = ((*(R21 *)rt_nil_check(l_R_3242))).f_NEXT;
}
RT_B_TICK();
} L_end3243: ;
}
static void r_ROUTINE_BODIES(R21 * p_RS) { RT_B_TICK(); 
R21 * l_R_3247; memset(&l_R_3247, 0, sizeof l_R_3247);
l_R_3247 = p_RS;
for (;;) {
if ((l_R_3247 == NULL)) goto L_end3248;
{
if ((((*(R21 *)rt_nil_check(l_R_3247))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3249; memset(&l_M_3249, 0, sizeof l_M_3249);
l_M_3249 = r_FIND_DECL(l_R_3247);
r_ENTER_MODULE(l_M_3249);
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3247))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3249);
}
}
else
{
{
R12 * l_Y_3250; memset(&l_Y_3250, 0, sizeof l_Y_3250);
l_Y_3250 = r_FIND_DECL(l_R_3247);
if (((((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3250))).f_DECL))).f_FL == ((rt_int)1LL)) && (!((*(R12 *)rt_nil_check(l_Y_3250))).f_GENERIC)))
{
}
else if ((!((*(R12 *)rt_nil_check(l_Y_3250))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_3250);
}
}
}
l_R_3247 = ((*(R21 *)rt_nil_check(l_R_3247))).f_NEXT;
}
RT_B_TICK();
} L_end3248: ;
}
static void r_PENDING_BODIES(void) { RT_B_TICK(); 
rt_int l_LEVEL_3251; memset(&l_LEVEL_3251, 0, sizeof l_LEVEL_3251);
l_LEVEL_3251 = r_CUR_LEVEL();
rt_int l_MORE_3252; memset(&l_MORE_3252, 0, sizeof l_MORE_3252);
l_MORE_3252 = 1;
for (;;) {
if ((!l_MORE_3252)) goto L_end3253;
{
l_MORE_3252 = 0;
{
R12 * l_P_3254; memset(&l_P_3254, 0, sizeof l_P_3254);
l_P_3254 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_3255; memset(&l_PREV_3255, 0, sizeof l_PREV_3255);
l_PREV_3255 = NULL;
for (;;) {
if ((l_P_3254 == NULL)) goto L_end3256;
{
if ((((*(R12 *)rt_nil_check(l_P_3254))).f_LEVEL == l_LEVEL_3251))
{
if ((l_PREV_3255 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_3254))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_3255))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_3254))).f_MEMBERS;
}
{
R12 * l_SAVED_SEG_3257; memset(&l_SAVED_SEG_3257, 0, sizeof l_SAVED_SEG_3257);
l_SAVED_SEG_3257 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R12 * l_HOME_3258; memset(&l_HOME_3258, 0, sizeof l_HOME_3258);
l_HOME_3258 = r_ENTER_HOME(l_P_3254);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(l_P_3254))).f_HOME;
r_ENTER_MODULE_OF(l_P_3254);
r_ROUTINE_BODY(l_P_3254);
r_LEAVE_MODULE_OF(l_P_3254);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_3257;
r_LEAVE_HOME(l_P_3254, l_HOME_3258);
}
l_MORE_3252 = 1;
goto L_end3256;
}
l_PREV_3255 = l_P_3254;
l_P_3254 = ((*(R12 *)rt_nil_check(l_P_3254))).f_MEMBERS;
}
RT_B_TICK();
} L_end3256: ;
}
}
RT_B_TICK();
} L_end3253: ;
}
static void r_CLOSED_BODY(R21 * p_B) { RT_B_TICK(); 
R21 * l_D_3259; memset(&l_D_3259, 0, sizeof l_D_3259);
l_D_3259 = ((*(R21 *)rt_nil_check(p_B))).f_A;
R21 * l_S_3260; memset(&l_S_3260, 0, sizeof l_S_3260);
l_S_3260 = ((*(R21 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R21 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_3259 == NULL)) goto L_end3261;
{
if (((((*(R21 *)rt_nil_check(l_D_3259))).f_KIND == g_N_VAR) || (((*(R21 *)rt_nil_check(l_D_3259))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3259);
}
l_D_3259 = ((*(R21 *)rt_nil_check(l_D_3259))).f_NEXT;
}
RT_B_TICK();
} L_end3261: ;
r_MODULE_DATA(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R21 *)rt_nil_check(p_B))).f_C);
r_DISTINCT_SIGNATURES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R21 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_3260 == NULL)) goto L_end3262;
{
r_STMT(l_S_3260);
l_S_3260 = ((*(R21 *)rt_nil_check(l_S_3260))).f_NEXT;
}
RT_B_TICK();
} L_end3262: ;
r_ROUTINE_BODIES(((*(R21 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { RT_B_TICK(); 
R21 * l_R_3263; memset(&l_R_3263, 0, sizeof l_R_3263);
l_R_3263 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_3264; memset(&l_SAVED_CODE_3264, 0, sizeof l_SAVED_CODE_3264);
S_R14(&l_SAVED_CODE_3264, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R17 * l_SAVED_CTXS_3265; memset(&l_SAVED_CTXS_3265, 0, sizeof l_SAVED_CTXS_3265);
l_SAVED_CTXS_3265 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R20 * l_SAVED_BINDS_3266; memset(&l_SAVED_BINDS_3266, 0, sizeof l_SAVED_BINDS_3266);
l_SAVED_BINDS_3266 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R18 * l_OUTER_3267; memset(&l_OUTER_3267, 0, sizeof l_OUTER_3267);
l_OUTER_3267 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_CS_3268; memset(&l_CS_3268, 0, sizeof l_CS_3268);
l_CS_3268 = ((R18 *)rt_b_new(sizeof (R18)));
R10 l_PROLOGUE_3269; memset(&l_PROLOGUE_3269, 0, sizeof l_PROLOGUE_3269);
S_R10(&l_PROLOGUE_3269, r_MK(rt_str("", 0)), 0);
S_R18(&(*(R18 *)rt_nil_check(l_CS_3268)), ({ R18 rc3270; memset(&rc3270, 0, sizeof rc3270);  rc3270.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc3270.f_R = p_Y; rc3270.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R10(&rc3270.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc3270.f_FIELDS, ({ R14 rc3271; memset(&rc3271, 0, sizeof rc3271);  rc3271.f_HEAD = NULL; rc3271.f_TAIL = NULL; rc3271; }), 0); rc3270.f_UP = l_OUTER_3267; rc3270.f_IMPORTS = ((*(R21 *)rt_nil_check(l_R_3263))).f_E; rc3270.f_SIGNALS = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3263))).f_D))).f_A; rc3270.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc3270.f_IS_PATH = 0; S_R10(&rc3270.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3270; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R18 *)rt_nil_check(l_CS_3268))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_3268))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R18 *)rt_nil_check(l_CS_3268))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R18 *)rt_nil_check(l_CS_3268))).f_FIELDS);
}
S_R10(&l_PROLOGUE_3269, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R18 *)rt_nil_check(l_CS_3268))).f_FTYPE, ((*(R18 *)rt_nil_check(l_CS_3268))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R10(&l_PROLOGUE_3269, r_CATS(l_PROLOGUE_3269, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_3268;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3272; memset(&rc3272, 0, sizeof rc3272);  rc3272.f_HEAD = NULL; rc3272.f_TAIL = NULL; rc3272; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R21 *)rt_nil_check(l_R_3263))).f_E, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3263))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_R_3263))).f_LINE);
{
R28 * l_P_3273; memset(&l_P_3273, 0, sizeof l_P_3273);
l_P_3273 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_3273 == NULL)) goto L_end3274;
{
if ((!(((*(R28 *)rt_nil_check(l_P_3273))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_3273))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_3275; memset(&l_V_3275, 0, sizeof l_V_3275);
l_V_3275 = r_NEW_SYM(g_Y_VAR, ((*(R28 *)rt_nil_check(l_P_3273))).f_NAME);
R20 * l_MB_3276; memset(&l_MB_3276, 0, sizeof l_MB_3276);
l_MB_3276 = r_FIND_BIND(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, r_MKN(rt_b_cat(rt_str("=", 1), r_STR(((*(R28 *)rt_nil_check(l_P_3273))).f_NAME, (((*(R28 *)rt_nil_check(l_P_3273))).f_NAME).f_LEN))));
((*(R12 *)rt_nil_check(l_V_3275))).f_T = ((*(R28 *)rt_nil_check(l_P_3273))).f_T;
((*(R12 *)rt_nil_check(l_V_3275))).f_INPUT = (((*(R28 *)rt_nil_check(l_P_3273))).f_MODE == g_M_IN);
if ((!(l_MB_3276 == NULL)))
{
((*(R12 *)rt_nil_check(l_V_3275))).f_HASMV = ((*(R20 *)rt_nil_check(l_MB_3276))).f_HASMV;
((*(R12 *)rt_nil_check(l_V_3275))).f_MV = ((*(R20 *)rt_nil_check(l_MB_3276))).f_MV;
}
((*(R12 *)rt_nil_check(l_V_3275))).f_BYREF = (!(((*(R28 *)rt_nil_check(l_P_3273))).f_MODE == g_M_IN));
S_R10(&((*(R12 *)rt_nil_check(l_V_3275))).f_FIELD, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_3273))).f_NAME)), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_3275))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R28 *)rt_nil_check(l_P_3273))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3273))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_3268))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_3275))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), r_CID(((*(R28 *)rt_nil_check(l_P_3273))).f_NAME)), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_3273))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3273))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_3268))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_3275))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_3273))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_3269, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_3269, r_CID(((*(R28 *)rt_nil_check(l_P_3273))).f_NAME), r_CID(((*(R28 *)rt_nil_check(l_P_3273))).f_NAME)), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_3275))).f_BYREF)
{
S_R10(&((*(R12 *)rt_nil_check(l_V_3275))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), r_CID(((*(R28 *)rt_nil_check(l_P_3273))).f_NAME)), 0);
}
else
{
S_R10(&((*(R12 *)rt_nil_check(l_V_3275))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_3273))).f_NAME)), 0);
}
if ((((*(R28 *)rt_nil_check(l_P_3273))).f_MODE == g_M_OUT))
{
{
R10 l_ARGA_3277; memset(&l_ARGA_3277, 0, sizeof l_ARGA_3277);
S_R10(&l_ARGA_3277, ((*(R12 *)rt_nil_check(l_V_3275))).f_ACCESS, 0);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_3273))).f_T, l_ARGA_3277, ((*(R21 *)rt_nil_check(l_R_3263))).f_LINE, 1);
((*(R12 *)rt_nil_check(l_V_3275))).f_BYREF = 0;
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ o_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_3273))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3273))).f_NAME)), &((*(R18 *)rt_nil_check(l_CS_3268))).f_FIELDS);
S_R10(&((*(R12 *)rt_nil_check(l_V_3275))).f_ACCESS, r_FMT1(rt_str("F->o_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_3273))).f_NAME)), 0);
}
else
{
S_R10(&l_PROLOGUE_3269, r_FMT3(rt_str("@ @ o_@;", 8), l_PROLOGUE_3269, r_CTYPE(((*(R28 *)rt_nil_check(l_P_3273))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3273))).f_NAME)), 0);
S_R10(&((*(R12 *)rt_nil_check(l_V_3275))).f_ACCESS, r_FMT1(rt_str("o_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_3273))).f_NAME)), 0);
}
S_R10(&l_PROLOGUE_3269, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_3269, ((*(R12 *)rt_nil_check(l_V_3275))).f_ACCESS, l_ARGA_3277), 0);
if (r_NEEDS_INIT(((*(R28 *)rt_nil_check(l_P_3273))).f_T))
{
S_R10(&l_PROLOGUE_3269, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_3269, ((*(R12 *)rt_nil_check(l_V_3275))).f_ACCESS, r_COPY_OF(((*(R28 *)rt_nil_check(l_P_3273))).f_T, l_ARGA_3277)), 0);
}
S_R10(&((*(R18 *)rt_nil_check(l_CS_3268))).f_COPYOUT, r_CAT(((*(R18 *)rt_nil_check(l_CS_3268))).f_COPYOUT, r_ASSIGN_CODE(((*(R28 *)rt_nil_check(l_P_3273))).f_T, l_ARGA_3277, ((*(R12 *)rt_nil_check(l_V_3275))).f_ACCESS)), 0);
r_DEFINE(l_V_3275, ((*(R21 *)rt_nil_check(l_R_3263))).f_LINE);
}
}
else
{
r_DEFINE(l_V_3275, ((*(R21 *)rt_nil_check(l_R_3263))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_3273))).f_T, ((*(R12 *)rt_nil_check(l_V_3275))).f_ACCESS, ((*(R21 *)rt_nil_check(l_R_3263))).f_LINE, 1);
}
}
}
}
l_P_3273 = ((*(R28 *)rt_nil_check(l_P_3273))).f_NEXT;
}
RT_B_TICK();
} L_end3274: ;
}
if ((((*(R21 *)rt_nil_check(l_R_3263))).f_FL >= ((rt_int)2LL)))
{
{
R21 * l_N_3278; memset(&l_N_3278, 0, sizeof l_N_3278);
l_N_3278 = ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_R_3263))).f_D))).f_C;
R14 l_SAVED_CODE_3279; memset(&l_SAVED_CODE_3279, 0, sizeof l_SAVED_CODE_3279);
S_R14(&l_SAVED_CODE_3279, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_3280; memset(&l_V_3280, 0, sizeof l_V_3280);
S_R26(&l_V_3280, r_EXPR(l_N_3278, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
R23 l_M_3281; memset(&l_M_3281, 0, sizeof l_M_3281);
S_R23(&l_M_3281, r_MANIFEST(l_N_3278), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3279, 0);
if ((((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3280).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3280).f_T)))).f_SCALE == ((rt_int)0LL)))) || (!(l_M_3281).f_OK)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_N_3278))).f_LINE, rt_str("the stack-size is a manifest integer expression (4.8.2 [4-111])", 63));
}
if (((l_M_3281).f_V < ((rt_int)0LL)))
{
r_FAIL(((*(R21 *)rt_nil_check(l_N_3278))).f_LINE, rt_str("the stack-size must be greater than or equal to zero (4.8.2)", 60));
}
}
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R21 *)rt_nil_check(l_R_3263))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_R_3263))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R18 *)rt_nil_check(l_CS_3268))).f_FTYPE, r_JOIN_BUF(((*(R18 *)rt_nil_check(l_CS_3268))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { RT_B_TICK(); @", 18), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_3269));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
else if (((((*(R18 *)rt_nil_check(l_CS_3268))).f_COPYOUT).f_LEN > ((rt_int)0LL)))
{
r_EMIT(g_O_FUNCS, ((*(R18 *)rt_nil_check(l_CS_3268))).f_COPYOUT);
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_3267;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3264, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_3265;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_3266;
}
static void r_BIND_INSTANCE(R20 * p_BS, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_B_3282; memset(&l_B_3282, 0, sizeof l_B_3282);
l_B_3282 = p_BS;
for (;;) {
if ((l_B_3282 == NULL)) goto L_end3283;
{
if ((!(((*(R20 *)rt_nil_check(l_B_3282))).f_T == NULL)))
{
{
R12 * l_Y_3284; memset(&l_Y_3284, 0, sizeof l_Y_3284);
l_Y_3284 = r_NEW_SYM(g_Y_TYPE, ((*(R20 *)rt_nil_check(l_B_3282))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3284))).f_T = ((*(R20 *)rt_nil_check(l_B_3282))).f_T;
r_DEFINE(l_Y_3284, p_LINE);
}
}
else if (((*(R20 *)rt_nil_check(l_B_3282))).f_HASMV)
{
{
R12 * l_Y_3285; memset(&l_Y_3285, 0, sizeof l_Y_3285);
l_Y_3285 = r_NEW_SYM(g_Y_GEN, ((*(R20 *)rt_nil_check(l_B_3282))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3285))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_3285))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_3285))).f_MV = ((*(R20 *)rt_nil_check(l_B_3282))).f_MV;
S_R10(&((*(R12 *)rt_nil_check(l_Y_3285))).f_ACCESS, ((*(R20 *)rt_nil_check(l_B_3282))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_3285))).f_INPUT = 1;
r_DEFINE(l_Y_3285, p_LINE);
}
}
l_B_3282 = ((*(R20 *)rt_nil_check(l_B_3282))).f_NEXT;
}
RT_B_TICK();
} L_end3283: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { RT_B_TICK(); 
R15 * l_C_3286; memset(&l_C_3286, 0, sizeof l_C_3286);
l_C_3286 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_3286 == NULL)) goto L_end3287;
{
r_APPEND(C_R10(((*(R15 *)rt_nil_check(l_C_3286))).f_T), &(*p_DST));
l_C_3286 = ((*(R15 *)rt_nil_check(l_C_3286))).f_NEXT;
}
RT_B_TICK();
} L_end3287: ;
}
static rt_int r_USES_SEGMENT(R21 * p_S, rstr p_NAME) { RT_B_TICK(); 
R21 * l_U_3288; memset(&l_U_3288, 0, sizeof l_U_3288);
l_U_3288 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3288 == NULL)) goto L_end3289;
{
if (r_TEQS(((*(R21 *)rt_nil_check(l_U_3288))).f_NAME, p_NAME))
{
{ rt_int rv3290 = 1;
return rv3290; }
}
l_U_3288 = ((*(R21 *)rt_nil_check(l_U_3288))).f_NEXT;
}
RT_B_TICK();
} L_end3289: ;
{ rt_int rv3291 = 0;
return rv3291; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R21 * p_S, R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_U_3292; memset(&l_U_3292, 0, sizeof l_U_3292);
l_U_3292 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3292 == NULL)) goto L_end3293;
{
{
R21 * l_T_3294; memset(&l_T_3294, 0, sizeof l_T_3294);
l_T_3294 = p_SEGS;
for (;;) {
if ((l_T_3294 == NULL)) goto L_end3295;
{
if ((((!(l_T_3294 == p_S)) && (((*(R21 *)rt_nil_check(l_T_3294))).f_D == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_T_3294))).f_NAME, ((*(R21 *)rt_nil_check(l_U_3292))).f_NAME)))
{
{ rt_int rv3296 = 0;
return rv3296; }
}
l_T_3294 = ((*(R21 *)rt_nil_check(l_T_3294))).f_NEXT;
}
RT_B_TICK();
} L_end3295: ;
}
l_U_3292 = ((*(R21 *)rt_nil_check(l_U_3292))).f_NEXT;
}
RT_B_TICK();
} L_end3293: ;
{ rt_int rv3297 = 1;
return rv3297; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R21 * p_SEGS) { RT_B_TICK(); 
R21 * l_S_3298; memset(&l_S_3298, 0, sizeof l_S_3298);
l_S_3298 = p_SEGS;
rt_int l_MAINS_3299; memset(&l_MAINS_3299, 0, sizeof l_MAINS_3299);
l_MAINS_3299 = ((rt_int)0LL);
R18 * l_ROOT_3300; memset(&l_ROOT_3300, 0, sizeof l_ROOT_3300);
l_ROOT_3300 = ((R18 *)rt_b_new(sizeof (R18)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R18(&(*(R18 *)rt_nil_check(l_ROOT_3300)), ({ R18 rc3301; memset(&rc3301, 0, sizeof rc3301);  rc3301.f_LEVEL = ((rt_int)0LL); rc3301.f_R = NULL; rc3301.f_FRAMED = 0; S_R10(&rc3301.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc3301.f_FIELDS, ({ R14 rc3302; memset(&rc3302, 0, sizeof rc3302);  rc3302.f_HEAD = NULL; rc3302.f_TAIL = NULL; rc3302; }), 0); rc3301.f_UP = NULL; rc3301.f_IMPORTS = NULL; rc3301.f_SIGNALS = NULL; rc3301.f_RESULT = NULL; rc3301.f_IS_PATH = 0; S_R10(&rc3301.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3301; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_3300;
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
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3303; memset(&rc3303, 0, sizeof rc3303);  rc3303.f_HEAD = NULL; rc3303.f_TAIL = NULL; rc3303; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_3298 = p_SEGS;
for (;;) {
if ((l_S_3298 == NULL)) goto L_end3305;
{
if ((((*(R21 *)rt_nil_check(l_S_3298))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_3298, p_SEGS))
{
goto L_end3305;
}
}
l_S_3298 = ((*(R21 *)rt_nil_check(l_S_3298))).f_NEXT;
}
RT_B_TICK();
} L_end3305: ;
if ((l_S_3298 == NULL))
{
goto L_end3304;
}
((*(R21 *)rt_nil_check(l_S_3298))).f_D = l_S_3298;
l_MAINS_3299 = rt_add(l_MAINS_3299, ((*(R21 *)rt_nil_check(l_S_3298))).f_IV);
if (((((*(R21 *)rt_nil_check(l_S_3298))).f_IV == ((rt_int)0LL)) && (!(((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_S_3298))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R21 *)rt_nil_check(l_S_3298))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
r_BEGIN_SEGMENT(l_S_3298);
if (r_USES_SEGMENT(l_S_3298, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
r_CLOSED_BODY(((*(R21 *)rt_nil_check(l_S_3298))).f_B);
r_SEGMENT_EXPORTS(l_S_3298);
}
RT_B_TICK();
} L_end3304: ;
l_S_3298 = p_SEGS;
for (;;) {
if ((l_S_3298 == NULL)) goto L_end3306;
{
if ((((*(R21 *)rt_nil_check(l_S_3298))).f_D == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_S_3298))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R21 *)rt_nil_check(l_S_3298))).f_NAME);
}
l_S_3298 = ((*(R21 *)rt_nil_check(l_S_3298))).f_NEXT;
}
RT_B_TICK();
} L_end3306: ;
if ((!(l_MAINS_3299 == ((rt_int)1LL))))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R21 * l_X_3307; memset(&l_X_3307, 0, sizeof l_X_3307);
l_X_3307 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_3307 == NULL)) goto L_end3308;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), r_CID(((*(R21 *)rt_nil_check(l_X_3307))).f_NAME)));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), r_CID(((*(R21 *)rt_nil_check(l_X_3307))).f_NAME), r_CSTRING(((*(R21 *)rt_nil_check(l_X_3307))).f_NAME)));
l_X_3307 = ((*(R21 *)rt_nil_check(l_X_3307))).f_NEXT;
}
RT_B_TICK();
} L_end3308: ;
}
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static rt_int r_FROM_DEFINED_MODULE(R21 * p_S, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3309; memset(&l_M_3309, 0, sizeof l_M_3309);
l_M_3309 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv3310 = 0;
return rv3310; }
}
for (;;) {
if ((l_M_3309 == NULL)) goto L_end3311;
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_3309))).f_NAME))
{
{ rt_int rv3312 = 1;
return rv3312; }
}
l_M_3309 = ((*(R12 *)rt_nil_check(l_M_3309))).f_MODL;
}
RT_B_TICK();
} L_end3311: ;
{ rt_int rv3313 = 0;
return rv3313; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R21 * p_S) { RT_B_TICK(); 
R12 * l_MARK_3314; memset(&l_MARK_3314, 0, sizeof l_MARK_3314);
l_MARK_3314 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_3315; memset(&l_TAKEN_3315, 0, sizeof l_TAKEN_3315);
R12 * l_SEG_3316; memset(&l_SEG_3316, 0, sizeof l_SEG_3316);
l_SEG_3316 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R21 * l_NAMES_3317; memset(&l_NAMES_3317, 0, sizeof l_NAMES_3317);
l_NAMES_3317 = NULL;
for (;;) {
if ((l_MARK_3314 == NULL)) goto L_end3318;
{
if ((((*(R12 *)rt_nil_check(l_MARK_3314))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end3318;
}
l_MARK_3314 = ((*(R12 *)rt_nil_check(l_MARK_3314))).f_SNEXT;
}
RT_B_TICK();
} L_end3318: ;
l_TAKEN_3315 = r_TAKE_SCOPE(l_MARK_3314);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
{
R21 * l_X_3319; memset(&l_X_3319, 0, sizeof l_X_3319);
l_X_3319 = ((*(R21 *)rt_nil_check(p_S))).f_C;
for (;;) {
if ((l_X_3319 == NULL)) goto L_end3320;
{
{
R12 * l_Y_3321; memset(&l_Y_3321, 0, sizeof l_Y_3321);
l_Y_3321 = l_TAKEN_3315;
rt_int l_FOUND_3322; memset(&l_FOUND_3322, 0, sizeof l_FOUND_3322);
l_FOUND_3322 = (!(r_LOOKUP(((*(R21 *)rt_nil_check(l_X_3319))).f_NAME) == NULL));
for (;;) {
if ((l_Y_3321 == NULL)) goto L_end3323;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_3321))).f_NAME, ((*(R21 *)rt_nil_check(l_X_3319))).f_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_3321))).f_PREFIX, ((*(R21 *)rt_nil_check(l_X_3319))).f_NAME)))
{
l_FOUND_3322 = 1;
}
else if ((((*(R12 *)rt_nil_check(l_Y_3321))).f_KIND == g_Y_ROUTINE))
{
if (r_TEQ(r_BASE_NAME(l_Y_3321), ((*(R21 *)rt_nil_check(l_X_3319))).f_NAME))
{
l_FOUND_3322 = 1;
}
}
l_Y_3321 = ((*(R12 *)rt_nil_check(l_Y_3321))).f_SNEXT;
}
RT_B_TICK();
} L_end3323: ;
if ((!l_FOUND_3322))
{
r_FAILT(((*(R21 *)rt_nil_check(l_X_3319))).f_LINE, rt_str("DEFINES names a name local to the segment or imported into it (4.2): ", 69), ((*(R21 *)rt_nil_check(l_X_3319))).f_NAME);
}
l_NAMES_3317 = r_NAME_REF(((*(R21 *)rt_nil_check(l_X_3319))).f_NAME, ((rt_int)0LL), NULL, l_NAMES_3317);
}
l_X_3319 = ((*(R21 *)rt_nil_check(l_X_3319))).f_NEXT;
}
RT_B_TICK();
} L_end3320: ;
}
for (;;) {
if ((l_TAKEN_3315 == NULL)) goto L_end3324;
{
{
R12 * l_NEXT_3325; memset(&l_NEXT_3325, 0, sizeof l_NEXT_3325);
l_NEXT_3325 = ((*(R12 *)rt_nil_check(l_TAKEN_3315))).f_SNEXT;
if (((!(((*(R12 *)rt_nil_check(l_TAKEN_3315))).f_KIND == g_Y_BUILTIN)) && (((((((((*(R21 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_3315))).f_NAME)) || r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_3315))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_3315))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_3315)) || (((((*(R12 *)rt_nil_check(l_TAKEN_3315))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R21 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_3315))))))))
{
((*(R12 *)rt_nil_check(l_TAKEN_3315))).f_SEGM = l_SEG_3316;
l_NAMES_3317 = r_NAME_REF(((*(R12 *)rt_nil_check(l_TAKEN_3315))).f_NAME, ((rt_int)0LL), NULL, l_NAMES_3317);
r_DEFINE(l_TAKEN_3315, ((*(R21 *)rt_nil_check(p_S))).f_LINE);
}
else if ((!(((*(R12 *)rt_nil_check(l_TAKEN_3315))).f_KIND == g_Y_BUILTIN)))
{
((*(R12 *)rt_nil_check(l_TAKEN_3315))).f_SNEXT = ((*(R12 *)rt_nil_check(l_SEG_3316))).f_MEMBERS;
((*(R12 *)rt_nil_check(l_SEG_3316))).f_MEMBERS = l_TAKEN_3315;
}
l_TAKEN_3315 = l_NEXT_3325;
}
}
RT_B_TICK();
} L_end3324: ;
((*(R12 *)rt_nil_check(l_SEG_3316))).f_USES = l_NAMES_3317;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = NULL;
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = NULL;
}
static void r_BEGIN_SEGMENT(R21 * p_S) { RT_B_TICK(); 
R12 * l_SEG_3326; memset(&l_SEG_3326, 0, sizeof l_SEG_3326);
l_SEG_3326 = r_NEW_SYM(g_Y_SEGMENT, ((*(R21 *)rt_nil_check(p_S))).f_NAME);
R21 * l_U_3327; memset(&l_U_3327, 0, sizeof l_U_3327);
l_U_3327 = ((*(R21 *)rt_nil_check(p_S))).f_A;
((*(R12 *)rt_nil_check(l_SEG_3326))).f_DECL = p_S;
((*(R12 *)rt_nil_check(l_SEG_3326))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_SEGS;
((*(R7 *)rt_nil_check(g_W))).f_SEGS = l_SEG_3326;
for (;;) {
if ((l_U_3327 == NULL)) goto L_end3328;
{
if ((!r_TEQS(((*(R21 *)rt_nil_check(l_U_3327))).f_NAME, rt_str("TERMINAL", 8))))
{
{
R12 * l_T_3329; memset(&l_T_3329, 0, sizeof l_T_3329);
l_T_3329 = r_FIND_SEGMENT(((*(R21 *)rt_nil_check(l_U_3327))).f_NAME);
if ((l_T_3329 == NULL))
{
r_FAILT(((*(R21 *)rt_nil_check(l_U_3327))).f_LINE, rt_str("USES names a segment of the program (4.2): ", 43), ((*(R21 *)rt_nil_check(l_U_3327))).f_NAME);
}
if ((!(((*(R21 *)rt_nil_check(l_U_3327))).f_A == NULL)))
{
r_CHECK_ITEMS_DEFINED(l_T_3329, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_3327))).f_A))).f_A);
r_CHECK_ITEMS_DEFINED(l_T_3329, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_3327))).f_A))).f_B);
r_CHECK_ITEMS_DEFINED(l_T_3329, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_3327))).f_A))).f_C);
r_CHECK_ITEMS_DEFINED(l_T_3329, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_3327))).f_A))).f_D);
r_CHECK_ITEMS_DEFINED(l_T_3329, ((*(R21 *)rt_nil_check(((*(R21 *)rt_nil_check(l_U_3327))).f_A))).f_E);
}
}
}
l_U_3327 = ((*(R21 *)rt_nil_check(l_U_3327))).f_NEXT;
}
RT_B_TICK();
} L_end3328: ;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SEG_3326;
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = l_SEG_3326;
l_U_3327 = ((*(R21 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3327 == NULL)) goto L_end3330;
{
if ((!(((*(R21 *)rt_nil_check(l_U_3327))).f_A == NULL)))
{
r_INPUT_IMPORT_CONFLICT(((*(R21 *)rt_nil_check(l_U_3327))).f_A, ((*(R21 *)rt_nil_check(l_U_3327))).f_LINE);
}
l_U_3327 = ((*(R21 *)rt_nil_check(l_U_3327))).f_NEXT;
}
RT_B_TICK();
} L_end3330: ;
}
static R12 * r_ENTER_HOME(R12 * p_Y) { RT_B_TICK(); 
R12 * l_SAVED_3331; memset(&l_SAVED_3331, 0, sizeof l_SAVED_3331);
l_SAVED_3331 = ((*(R7 *)rt_nil_check(g_W))).f_TRSEG;
if (((((*(R12 *)rt_nil_check(p_Y))).f_HOME == NULL) || (((*(R12 *)rt_nil_check(p_Y))).f_HOME == ((*(R7 *)rt_nil_check(g_W))).f_TRSEG)))
{
{ R12 * rv3332 = l_SAVED_3331;
return rv3332; }
}
r_OPEN_SCOPE();
{
R12 * l_X_3333; memset(&l_X_3333, 0, sizeof l_X_3333);
l_X_3333 = ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_HOME))).f_MEMBERS;
for (;;) {
if ((l_X_3333 == NULL)) goto L_end3334;
{
{
R12 * l_A_3335; memset(&l_A_3335, 0, sizeof l_A_3335);
l_A_3335 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_X_3333))).f_KIND, ((*(R12 *)rt_nil_check(l_X_3333))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_3335)), (*(R12 *)rt_nil_check(l_X_3333)), 0);
((*(R12 *)rt_nil_check(l_A_3335))).f_ORIG = r_ORIGINAL(l_X_3333);
r_DEFINE_ALIAS(l_A_3335);
}
l_X_3333 = ((*(R12 *)rt_nil_check(l_X_3333))).f_SNEXT;
}
RT_B_TICK();
} L_end3334: ;
}
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = ((*(R12 *)rt_nil_check(p_Y))).f_HOME;
{ R12 * rv3336 = l_SAVED_3331;
return rv3336; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_ALIAS(R12 * p_A) { RT_B_TICK(); 
rt_int l_B_3337; memset(&l_B_3337, 0, sizeof l_B_3337);
l_B_3337 = r_BUCKET(((*(R12 *)rt_nil_check(p_A))).f_NAME);
((*(R12 *)rt_nil_check(p_A))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_A))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_3337, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_3337, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_A;
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
static R12 * r_FIND_SEGMENT(R10 p_NAME) { RT_B_TICK(); 
R12 * l_T_3338; memset(&l_T_3338, 0, sizeof l_T_3338);
l_T_3338 = ((*(R7 *)rt_nil_check(g_W))).f_SEGS;
for (;;) {
if ((l_T_3338 == NULL)) goto L_end3339;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_T_3338))).f_NAME, p_NAME))
{
{ R12 * rv3340 = l_T_3338;
return rv3340; }
}
l_T_3338 = ((*(R12 *)rt_nil_check(l_T_3338))).f_INSTANCES;
}
RT_B_TICK();
} L_end3339: ;
{ R12 * rv3341 = NULL;
return rv3341; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_ITEMS_DEFINED(R12 * p_T, R21 * p_L) { RT_B_TICK(); 
R21 * l_N_3342; memset(&l_N_3342, 0, sizeof l_N_3342);
l_N_3342 = p_L;
for (;;) {
if ((l_N_3342 == NULL)) goto L_end3343;
{
if ((!r_IN_IDENTS(((*(R12 *)rt_nil_check(p_T))).f_USES, ((*(R21 *)rt_nil_check(l_N_3342))).f_NAME)))
{
r_FAILT(((*(R21 *)rt_nil_check(l_N_3342))).f_LINE, rt_str("the segment does not define ", 28), ((*(R21 *)rt_nil_check(l_N_3342))).f_NAME);
}
l_N_3342 = ((*(R21 *)rt_nil_check(l_N_3342))).f_NEXT;
}
RT_B_TICK();
} L_end3343: ;
}
static rt_int r_SEG_VISIBLE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_U_3344; memset(&l_U_3344, 0, sizeof l_U_3344);
rt_int l_INPUT_ONLY_3345; memset(&l_INPUT_ONLY_3345, 0, sizeof l_INPUT_ONLY_3345);
l_INPUT_ONLY_3345 = 0;
if (((((((*(R7 *)rt_nil_check(g_W))).f_CURSEG == NULL) || (((*(R12 *)rt_nil_check(p_Y))).f_SEGM == NULL)) || (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL))) || (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
{ rt_int rv3346 = 1;
return rv3346; }
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_SEGM == ((*(R7 *)rt_nil_check(g_W))).f_CURSEG))
{
{ rt_int rv3347 = 1;
return rv3347; }
}
l_U_3344 = ((*(R21 *)rt_nil_check(((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CURSEG))).f_DECL))).f_A;
for (;;) {
if ((l_U_3344 == NULL)) goto L_end3348;
{
{
R12 * l_T_3349; memset(&l_T_3349, 0, sizeof l_T_3349);
l_T_3349 = r_FIND_SEGMENT(((*(R21 *)rt_nil_check(l_U_3344))).f_NAME);
if ((!(l_T_3349 == NULL)))
{
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_T_3349))).f_USES, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
if ((((*(R21 *)rt_nil_check(l_U_3344))).f_A == NULL))
{
{ rt_int rv3350 = 1;
return rv3350; }
}
{
R21 * l_I_3351; memset(&l_I_3351, 0, sizeof l_I_3351);
l_I_3351 = ((*(R21 *)rt_nil_check(l_U_3344))).f_A;
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)))
{
if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_I_3351))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3352 = 1;
return rv3352; }
}
else if (r_IN_IDENTS(((*(R21 *)rt_nil_check(l_I_3351))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
l_INPUT_ONLY_3345 = 1;
}
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE))
{
if ((((r_IN_IDENTS(((*(R21 *)rt_nil_check(l_I_3351))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME) || r_IN_IDENTS(((*(R21 *)rt_nil_check(l_I_3351))).f_C, r_BASE_NAME(p_Y))) || r_IN_IDENTS(((*(R21 *)rt_nil_check(l_I_3351))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)) || r_FROM_MODULES(((*(R21 *)rt_nil_check(l_I_3351))).f_E, p_Y)))
{
{ rt_int rv3353 = 1;
return rv3353; }
}
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE))
{
if ((r_IN_IDENTS(((*(R21 *)rt_nil_check(l_I_3351))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_NAME) || r_FROM_MODULES(((*(R21 *)rt_nil_check(l_I_3351))).f_E, p_Y)))
{
{ rt_int rv3354 = 1;
return rv3354; }
}
}
else
{
{ rt_int rv3355 = 1;
return rv3355; }
}
}
}
}
}
l_U_3344 = ((*(R21 *)rt_nil_check(l_U_3344))).f_NEXT;
}
RT_B_TICK();
} L_end3348: ;
if (l_INPUT_ONLY_3345)
{
{ rt_int rv3356 = 0;
return rv3356; }
}
r_FAILT(p_LINE, rt_str("not imported by the USES clause of the segment (4.2): ", 54), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static rt_int r_FROM_MODULES(R21 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3357; memset(&l_M_3357, 0, sizeof l_M_3357);
l_M_3357 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((p_MODS == NULL))
{
{ rt_int rv3358 = 0;
return rv3358; }
}
for (;;) {
if ((l_M_3357 == NULL)) goto L_end3359;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_3357))).f_NAME))
{
{ rt_int rv3360 = 1;
return rv3360; }
}
l_M_3357 = ((*(R12 *)rt_nil_check(l_M_3357))).f_MODL;
}
RT_B_TICK();
} L_end3359: ;
{ rt_int rv3361 = 0;
return rv3361; }
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
r_LEX();
r_PREDEFINE();
r_TRANSLATE(r_PARSE_COMPILATION());
r_WRITE_OUTPUT();
rt_main_done();
return 0;
}
