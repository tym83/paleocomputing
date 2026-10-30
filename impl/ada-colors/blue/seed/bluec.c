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
struct R7 { int dummy_; rstr f_ARENA; rt_int f_TOP; A8 f_SRC; rt_int f_NSRC; rt_int f_LEXED; rt_int f_LEXLINE; R9 f_LIBDIR; R17 * f_LIBSEGS; rt_int f_SUPPRESS; rt_int f_WORD; rt_int f_SEPC; R9 f_SEPSEG; rt_int f_EXTSEG; rt_int f_SEPV; rt_int f_SEPR; R17 * f_OWNSEGS; R17 * f_EXTS; rt_int f_STDINLEN; A11 f_TOKS; rt_int f_NTOKS; rt_int f_POS; A13 f_TABLE; R12 * f_SCOPE; rt_int f_DEPTH; A16 f_OUT; R14 f_CODE; R18 * f_CTXS; R19 * f_CS; R20 * f_IS; rt_int f_NSCOPES; R12 * f_MODL; R21 * f_BINDS; rt_int f_ROUNDED; R17 * f_QUAL; R17 * f_SQUAL; rt_int f_TYPECHECK; rt_int f_CHARSETS; rt_int f_IN_RECORD; rt_int f_IN_TYPEDECL; rt_int f_REPCONV; R17 * f_LDONE; R17 * f_NEW_OK; rt_int f_START_IO; rt_int f_MACHINE; rt_int f_SERIAL; R17 * f_EXCS; R22 * f_TY_INT; R22 * f_TY_BOOL; R22 * f_TY_STR; R22 * f_TY_VOID; R22 * f_TY_NIL; R22 * f_TY_ASCII; R22 * f_TY_FLOAT; R22 * f_TY_BITS; R22 * f_TY_ROUNDINGS; R22 * f_TY_TYPE; R12 * f_PENDING; R17 * f_CNAMES; R12 * f_ENUMS; R12 * f_SEGS; R12 * f_CURSEG; R12 * f_TRSEG; R12 * f_ARRAYS; R12 * f_RECS; };
struct R23 { int dummy_; rt_int f_OK; rt_int f_V; };
struct R26 { int dummy_; R9 f_C; R22 * f_T; rt_int f_LVAL; R9 f_SELF; };
struct R17 { int dummy_; rt_int f_KIND; rt_int f_LINE; rt_int f_IV; R9 f_NAME; R17 * f_A; R17 * f_B; R17 * f_C; R17 * f_D; R17 * f_E; R17 * f_NEXT; rt_int f_FL; };
struct R15 { int dummy_; R9 f_T; R15 * f_NEXT; };
struct R12 { int dummy_; rt_int f_KIND; rt_int f_DEPTH; rt_int f_LEVEL; R9 f_NAME; R22 * f_T; R9 f_ACCESS; R9 f_FIELD; rt_int f_INPUT; rt_int f_BYREF; rt_int f_HASMV; rt_int f_MV; R17 * f_TS; rt_int f_BUSY; R9 f_FWD; R28 * f_PARAMS; R22 * f_RESULT; R17 * f_DECL; R9 f_PREFIX; R12 * f_MODL; rt_int f_EXPORTED; rt_int f_GENERIC; rt_int f_FRAMED; R17 * f_USES; R12 * f_INSTANCES; R21 * f_BINDINGS; R12 * f_ORIG; R12 * f_MEMBERS; R12 * f_SAVED; rt_int f_OWNER; rt_int f_WITHV; rt_int f_LAZY; rt_int f_LINKAGE; R12 * f_SEGM; R12 * f_HOME; R12 * f_CHAIN; R12 * f_SNEXT; };
struct R19 { int dummy_; rt_int f_LEVEL; R12 * f_R; rt_int f_FRAMED; R9 f_FTYPE; R14 f_FIELDS; R19 * f_UP; R17 * f_IMPORTS; R17 * f_SIGNALS; R22 * f_RESULT; rt_int f_IS_PATH; R9 f_COPYOUT; };
struct R20 { int dummy_; rt_int f_ID; R17 * f_IMPORTS; R17 * f_SIGNALS; R9 f_NAME; R20 * f_UP; };
struct R22 { int dummy_; rt_int f_KIND; rt_int f_SCALE; R9 f_LO_C; R9 f_HI_C; R23 f_MLO; R23 f_MHI; rt_int f_RLEVEL; R9 f_LEN_C; R23 f_MLEN; R9 f_GEN; R22 * f_BASE; R22 * f_ELEM; R22 * f_TARGET; R17 * f_TARGET_TS; R24 * f_FIELDS; R17 * f_LITS; rt_int f_NLITS; rt_int f_UNORDERED; R25 * f_BOUNDS; rt_int f_DIMS; R25 * f_ARGS; R9 f_NAME; R9 f_CNAME; R12 * f_MODL; R17 * f_REPS; R12 * f_DECL; R9 f_GENP; };
struct R21 { int dummy_; R9 f_NAME; R22 * f_T; R9 f_C; rt_int f_HASMV; rt_int f_MV; R12 * f_R; R21 * f_NEXT; };
struct R25 { int dummy_; R9 f_LO; R9 f_HI; R23 f_MLO; R23 f_MHI; rt_int f_ANYARG; R25 * f_NEXT; };
struct R24 { int dummy_; R9 f_NAME; R9 f_CNAME; R22 * f_T; rt_int f_KIND; R9 f_TAGF; R17 * f_LABELS; R24 * f_NEXT; };
struct fr_r_MANIFEST_ARITH { void *up; R9 p_OP; rt_int p_A; rt_int p_B; rt_int p_LINE; rt_int l_R_1354; };
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
static R17 * g_S_30;
static R17 * g_N_32;
static R9 g_NAME_34;
static R17 * g_MORE_35;
static R17 * g_LAST_36;
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
static R9 r_LIB_FILE(R9 p_DIR, R9 p_NAME, rstr p_EXT);
static rt_int r_TEXT_PRINT(rstr p_T);
static rt_int r_FILE_PRINT(rstr p_FNAME);
static R9 r_INPUT_TEXT(void);
static void r_LOAD_TEXT(R9 p_NAME, rstr p_FNAME);
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
static R26 r_PATH_LIST(rt_int p_LINE);
static rt_int r_STATIC_SIZE_OR_LEN(R22 * p_T);
static R26 r_RUN_PATHS(R17 * p_E);
static void r_ACTIVATE_PATH(R17 * p_P, R9 p_TD, rt_int p_K);
static rt_int r_IMPLEMENTATION_SEMAPHORE(R17 * p_E);
static R9 r_CONNECT_NAME(R17 * p_P);
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
static R9 r_UNIT_NAME(void);
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
static void S_R7(R7 *d, R7 s, int any) {  rt_b_assign(&d->f_ARENA, s.f_ARENA); d->f_TOP = s.f_TOP; S_A8(&d->f_SRC, s.f_SRC, 0); d->f_NSRC = s.f_NSRC; d->f_LEXED = s.f_LEXED; d->f_LEXLINE = s.f_LEXLINE; S_R9(&d->f_LIBDIR, s.f_LIBDIR, 0); d->f_LIBSEGS = s.f_LIBSEGS; d->f_SUPPRESS = s.f_SUPPRESS; d->f_WORD = s.f_WORD; d->f_SEPC = s.f_SEPC; S_R9(&d->f_SEPSEG, s.f_SEPSEG, 0); d->f_EXTSEG = s.f_EXTSEG; d->f_SEPV = s.f_SEPV; d->f_SEPR = s.f_SEPR; d->f_OWNSEGS = s.f_OWNSEGS; d->f_EXTS = s.f_EXTS; d->f_STDINLEN = s.f_STDINLEN; S_A11(&d->f_TOKS, s.f_TOKS, 0); d->f_NTOKS = s.f_NTOKS; d->f_POS = s.f_POS; S_A13(&d->f_TABLE, s.f_TABLE, 0); d->f_SCOPE = s.f_SCOPE; d->f_DEPTH = s.f_DEPTH; S_A16(&d->f_OUT, s.f_OUT, 0); S_R14(&d->f_CODE, s.f_CODE, 0); d->f_CTXS = s.f_CTXS; d->f_CS = s.f_CS; d->f_IS = s.f_IS; d->f_NSCOPES = s.f_NSCOPES; d->f_MODL = s.f_MODL; d->f_BINDS = s.f_BINDS; d->f_ROUNDED = s.f_ROUNDED; d->f_QUAL = s.f_QUAL; d->f_SQUAL = s.f_SQUAL; d->f_TYPECHECK = s.f_TYPECHECK; d->f_CHARSETS = s.f_CHARSETS; d->f_IN_RECORD = s.f_IN_RECORD; d->f_IN_TYPEDECL = s.f_IN_TYPEDECL; d->f_REPCONV = s.f_REPCONV; d->f_LDONE = s.f_LDONE; d->f_NEW_OK = s.f_NEW_OK; d->f_START_IO = s.f_START_IO; d->f_MACHINE = s.f_MACHINE; d->f_SERIAL = s.f_SERIAL; d->f_EXCS = s.f_EXCS; d->f_TY_INT = s.f_TY_INT; d->f_TY_BOOL = s.f_TY_BOOL; d->f_TY_STR = s.f_TY_STR; d->f_TY_VOID = s.f_TY_VOID; d->f_TY_NIL = s.f_TY_NIL; d->f_TY_ASCII = s.f_TY_ASCII; d->f_TY_FLOAT = s.f_TY_FLOAT; d->f_TY_BITS = s.f_TY_BITS; d->f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d->f_TY_TYPE = s.f_TY_TYPE; d->f_PENDING = s.f_PENDING; d->f_CNAMES = s.f_CNAMES; d->f_ENUMS = s.f_ENUMS; d->f_SEGS = s.f_SEGS; d->f_CURSEG = s.f_CURSEG; d->f_TRSEG = s.f_TRSEG; d->f_ARRAYS = s.f_ARRAYS; d->f_RECS = s.f_RECS; }
static int E_R7(R7 a, R7 b) { return 1 && rt_b_eq(a.f_ARENA, b.f_ARENA) && (a.f_TOP == b.f_TOP) && E_A8(a.f_SRC, b.f_SRC) && (a.f_NSRC == b.f_NSRC) && (a.f_LEXED == b.f_LEXED) && (a.f_LEXLINE == b.f_LEXLINE) && E_R9(a.f_LIBDIR, b.f_LIBDIR) && (a.f_LIBSEGS == b.f_LIBSEGS) && (a.f_SUPPRESS == b.f_SUPPRESS) && (a.f_WORD == b.f_WORD) && (a.f_SEPC == b.f_SEPC) && E_R9(a.f_SEPSEG, b.f_SEPSEG) && (a.f_EXTSEG == b.f_EXTSEG) && (a.f_SEPV == b.f_SEPV) && (a.f_SEPR == b.f_SEPR) && (a.f_OWNSEGS == b.f_OWNSEGS) && (a.f_EXTS == b.f_EXTS) && (a.f_STDINLEN == b.f_STDINLEN) && E_A11(a.f_TOKS, b.f_TOKS) && (a.f_NTOKS == b.f_NTOKS) && (a.f_POS == b.f_POS) && E_A13(a.f_TABLE, b.f_TABLE) && (a.f_SCOPE == b.f_SCOPE) && (a.f_DEPTH == b.f_DEPTH) && E_A16(a.f_OUT, b.f_OUT) && E_R14(a.f_CODE, b.f_CODE) && (a.f_CTXS == b.f_CTXS) && (a.f_CS == b.f_CS) && (a.f_IS == b.f_IS) && (a.f_NSCOPES == b.f_NSCOPES) && (a.f_MODL == b.f_MODL) && (a.f_BINDS == b.f_BINDS) && (a.f_ROUNDED == b.f_ROUNDED) && (a.f_QUAL == b.f_QUAL) && (a.f_SQUAL == b.f_SQUAL) && (a.f_TYPECHECK == b.f_TYPECHECK) && (a.f_CHARSETS == b.f_CHARSETS) && (a.f_IN_RECORD == b.f_IN_RECORD) && (a.f_IN_TYPEDECL == b.f_IN_TYPEDECL) && (a.f_REPCONV == b.f_REPCONV) && (a.f_LDONE == b.f_LDONE) && (a.f_NEW_OK == b.f_NEW_OK) && (a.f_START_IO == b.f_START_IO) && (a.f_MACHINE == b.f_MACHINE) && (a.f_SERIAL == b.f_SERIAL) && (a.f_EXCS == b.f_EXCS) && (a.f_TY_INT == b.f_TY_INT) && (a.f_TY_BOOL == b.f_TY_BOOL) && (a.f_TY_STR == b.f_TY_STR) && (a.f_TY_VOID == b.f_TY_VOID) && (a.f_TY_NIL == b.f_TY_NIL) && (a.f_TY_ASCII == b.f_TY_ASCII) && (a.f_TY_FLOAT == b.f_TY_FLOAT) && (a.f_TY_BITS == b.f_TY_BITS) && (a.f_TY_ROUNDINGS == b.f_TY_ROUNDINGS) && (a.f_TY_TYPE == b.f_TY_TYPE) && (a.f_PENDING == b.f_PENDING) && (a.f_CNAMES == b.f_CNAMES) && (a.f_ENUMS == b.f_ENUMS) && (a.f_SEGS == b.f_SEGS) && (a.f_CURSEG == b.f_CURSEG) && (a.f_TRSEG == b.f_TRSEG) && (a.f_ARRAYS == b.f_ARRAYS) && (a.f_RECS == b.f_RECS); }
static R7 C_R7(R7 s) { R7 d = s;
 d.f_ARENA = rt_str_copy(s.f_ARENA); d.f_TOP = s.f_TOP; d.f_SRC = C_A8(s.f_SRC); d.f_NSRC = s.f_NSRC; d.f_LEXED = s.f_LEXED; d.f_LEXLINE = s.f_LEXLINE; d.f_LIBDIR = C_R9(s.f_LIBDIR); d.f_LIBSEGS = s.f_LIBSEGS; d.f_SUPPRESS = s.f_SUPPRESS; d.f_WORD = s.f_WORD; d.f_SEPC = s.f_SEPC; d.f_SEPSEG = C_R9(s.f_SEPSEG); d.f_EXTSEG = s.f_EXTSEG; d.f_SEPV = s.f_SEPV; d.f_SEPR = s.f_SEPR; d.f_OWNSEGS = s.f_OWNSEGS; d.f_EXTS = s.f_EXTS; d.f_STDINLEN = s.f_STDINLEN; d.f_TOKS = C_A11(s.f_TOKS); d.f_NTOKS = s.f_NTOKS; d.f_POS = s.f_POS; d.f_TABLE = C_A13(s.f_TABLE); d.f_SCOPE = s.f_SCOPE; d.f_DEPTH = s.f_DEPTH; d.f_OUT = C_A16(s.f_OUT); d.f_CODE = C_R14(s.f_CODE); d.f_CTXS = s.f_CTXS; d.f_CS = s.f_CS; d.f_IS = s.f_IS; d.f_NSCOPES = s.f_NSCOPES; d.f_MODL = s.f_MODL; d.f_BINDS = s.f_BINDS; d.f_ROUNDED = s.f_ROUNDED; d.f_QUAL = s.f_QUAL; d.f_SQUAL = s.f_SQUAL; d.f_TYPECHECK = s.f_TYPECHECK; d.f_CHARSETS = s.f_CHARSETS; d.f_IN_RECORD = s.f_IN_RECORD; d.f_IN_TYPEDECL = s.f_IN_TYPEDECL; d.f_REPCONV = s.f_REPCONV; d.f_LDONE = s.f_LDONE; d.f_NEW_OK = s.f_NEW_OK; d.f_START_IO = s.f_START_IO; d.f_MACHINE = s.f_MACHINE; d.f_SERIAL = s.f_SERIAL; d.f_EXCS = s.f_EXCS; d.f_TY_INT = s.f_TY_INT; d.f_TY_BOOL = s.f_TY_BOOL; d.f_TY_STR = s.f_TY_STR; d.f_TY_VOID = s.f_TY_VOID; d.f_TY_NIL = s.f_TY_NIL; d.f_TY_ASCII = s.f_TY_ASCII; d.f_TY_FLOAT = s.f_TY_FLOAT; d.f_TY_BITS = s.f_TY_BITS; d.f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d.f_TY_TYPE = s.f_TY_TYPE; d.f_PENDING = s.f_PENDING; d.f_CNAMES = s.f_CNAMES; d.f_ENUMS = s.f_ENUMS; d.f_SEGS = s.f_SEGS; d.f_CURSEG = s.f_CURSEG; d.f_TRSEG = s.f_TRSEG; d.f_ARRAYS = s.f_ARRAYS; d.f_RECS = s.f_RECS; return d; }
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
static void S_R12(R12 *d, R12 s, int any) {  d->f_KIND = s.f_KIND; d->f_DEPTH = s.f_DEPTH; d->f_LEVEL = s.f_LEVEL; S_R9(&d->f_NAME, s.f_NAME, 0); d->f_T = s.f_T; S_R9(&d->f_ACCESS, s.f_ACCESS, 0); S_R9(&d->f_FIELD, s.f_FIELD, 0); d->f_INPUT = s.f_INPUT; d->f_BYREF = s.f_BYREF; d->f_HASMV = s.f_HASMV; d->f_MV = s.f_MV; d->f_TS = s.f_TS; d->f_BUSY = s.f_BUSY; S_R9(&d->f_FWD, s.f_FWD, 0); d->f_PARAMS = s.f_PARAMS; d->f_RESULT = s.f_RESULT; d->f_DECL = s.f_DECL; S_R9(&d->f_PREFIX, s.f_PREFIX, 0); d->f_MODL = s.f_MODL; d->f_EXPORTED = s.f_EXPORTED; d->f_GENERIC = s.f_GENERIC; d->f_FRAMED = s.f_FRAMED; d->f_USES = s.f_USES; d->f_INSTANCES = s.f_INSTANCES; d->f_BINDINGS = s.f_BINDINGS; d->f_ORIG = s.f_ORIG; d->f_MEMBERS = s.f_MEMBERS; d->f_SAVED = s.f_SAVED; d->f_OWNER = s.f_OWNER; d->f_WITHV = s.f_WITHV; d->f_LAZY = s.f_LAZY; d->f_LINKAGE = s.f_LINKAGE; d->f_SEGM = s.f_SEGM; d->f_HOME = s.f_HOME; d->f_CHAIN = s.f_CHAIN; d->f_SNEXT = s.f_SNEXT; }
static int E_R12(R12 a, R12 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_DEPTH == b.f_DEPTH) && (a.f_LEVEL == b.f_LEVEL) && E_R9(a.f_NAME, b.f_NAME) && (a.f_T == b.f_T) && E_R9(a.f_ACCESS, b.f_ACCESS) && E_R9(a.f_FIELD, b.f_FIELD) && (a.f_INPUT == b.f_INPUT) && (a.f_BYREF == b.f_BYREF) && (a.f_HASMV == b.f_HASMV) && (a.f_MV == b.f_MV) && (a.f_TS == b.f_TS) && (a.f_BUSY == b.f_BUSY) && E_R9(a.f_FWD, b.f_FWD) && (a.f_PARAMS == b.f_PARAMS) && (a.f_RESULT == b.f_RESULT) && (a.f_DECL == b.f_DECL) && E_R9(a.f_PREFIX, b.f_PREFIX) && (a.f_MODL == b.f_MODL) && (a.f_EXPORTED == b.f_EXPORTED) && (a.f_GENERIC == b.f_GENERIC) && (a.f_FRAMED == b.f_FRAMED) && (a.f_USES == b.f_USES) && (a.f_INSTANCES == b.f_INSTANCES) && (a.f_BINDINGS == b.f_BINDINGS) && (a.f_ORIG == b.f_ORIG) && (a.f_MEMBERS == b.f_MEMBERS) && (a.f_SAVED == b.f_SAVED) && (a.f_OWNER == b.f_OWNER) && (a.f_WITHV == b.f_WITHV) && (a.f_LAZY == b.f_LAZY) && (a.f_LINKAGE == b.f_LINKAGE) && (a.f_SEGM == b.f_SEGM) && (a.f_HOME == b.f_HOME) && (a.f_CHAIN == b.f_CHAIN) && (a.f_SNEXT == b.f_SNEXT); }
static R12 C_R12(R12 s) { R12 d = s;
 d.f_KIND = s.f_KIND; d.f_DEPTH = s.f_DEPTH; d.f_LEVEL = s.f_LEVEL; d.f_NAME = C_R9(s.f_NAME); d.f_T = s.f_T; d.f_ACCESS = C_R9(s.f_ACCESS); d.f_FIELD = C_R9(s.f_FIELD); d.f_INPUT = s.f_INPUT; d.f_BYREF = s.f_BYREF; d.f_HASMV = s.f_HASMV; d.f_MV = s.f_MV; d.f_TS = s.f_TS; d.f_BUSY = s.f_BUSY; d.f_FWD = C_R9(s.f_FWD); d.f_PARAMS = s.f_PARAMS; d.f_RESULT = s.f_RESULT; d.f_DECL = s.f_DECL; d.f_PREFIX = C_R9(s.f_PREFIX); d.f_MODL = s.f_MODL; d.f_EXPORTED = s.f_EXPORTED; d.f_GENERIC = s.f_GENERIC; d.f_FRAMED = s.f_FRAMED; d.f_USES = s.f_USES; d.f_INSTANCES = s.f_INSTANCES; d.f_BINDINGS = s.f_BINDINGS; d.f_ORIG = s.f_ORIG; d.f_MEMBERS = s.f_MEMBERS; d.f_SAVED = s.f_SAVED; d.f_OWNER = s.f_OWNER; d.f_WITHV = s.f_WITHV; d.f_LAZY = s.f_LAZY; d.f_LINKAGE = s.f_LINKAGE; d.f_SEGM = s.f_SEGM; d.f_HOME = s.f_HOME; d.f_CHAIN = s.f_CHAIN; d.f_SNEXT = s.f_SNEXT; return d; }
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
if (({ rt_int iv38 = p_C; (((rt_int)32LL) <= iv38) && (iv38 <= ((rt_int)126LL)); }))
{
{ rstr rv39 = rt_b_slice(g_GRAPHIC, rt_sub(p_C, ((rt_int)32LL)), rt_sub(p_C, ((rt_int)32LL)));
return rv39; }
}
{
rt_int l_N_40; memset(&l_N_40, 0, sizeof l_N_40);
l_N_40 = (rt_int)(8);
rstr l_B_41; memset(&l_B_41, 0, sizeof l_B_41);
l_B_41 = rt_b_str_new(((rt_int)8LL), 1);
rt_b_assign(&l_B_41, rt_b_zeros(l_N_40));
rt_int l_V_42; memset(&l_V_42, 0, sizeof l_V_42);
l_V_42 = p_C;
{ rt_int it44_lo = ((rt_int)0LL), it44_hi = rt_sub(l_N_40, ((rt_int)1LL));
for (rt_int it44 = it44_lo; it44 <= it44_hi; it44++) {
{
if ((rt_rem(l_V_42, ((rt_int)2LL)) == ((rt_int)1LL)))
{
rt_b_slice_assign(&l_B_41, rt_sub(rt_sub(l_N_40, ((rt_int)1LL)), it44), rt_sub(rt_sub(l_N_40, ((rt_int)1LL)), it44), rt_str("1", 1));
}
l_V_42 = rt_quot(l_V_42, ((rt_int)2LL));
}
RT_B_TICK();
if (it44 == it44_hi) break;
} } L_end43: ;
if ((l_V_42 == ((rt_int)0LL)))
{
{
{ rstr rv45 = rt_b_chars_of_bits(l_B_41, 7, 1, NULL, 128);
return rv45; }
}
}
}
{ rstr rv46 = rt_str("\?", 1);
return rv46; }
rt_raise(RT_X_INIT);
}
static rt_int r_CODE_OF(rstr p_S) { RT_B_TICK(); 
{ rt_int rv47 = rt_b_int_of_bits(rt_b_bits_of_chars(p_S, 7, 1, NULL, 128));
return rv47; }
rt_raise(RT_X_INIT);
}
static rt_int r_HASH_CODES(rt_int p_L, rt_int p_C1, rt_int p_C2, rt_int p_C3) { RT_B_TICK(); 
{ rt_int rv48 = rt_rem((rt_add(rt_add(rt_add(rt_mul(p_L, ((rt_int)31LL)), rt_mul(p_C1, ((rt_int)7LL))), rt_mul(p_C2, ((rt_int)3LL))), p_C3)), g_HASH_SIZE);
return rv48; }
rt_raise(RT_X_INIT);
}
static rt_int r_HASH_OF(rstr p_S) { RT_B_TICK(); 
if (((rt_int)(p_S).len == ((rt_int)0LL)))
{
{ rt_int rv49 = ((rt_int)0LL);
return rv49; }
}
{ rt_int rv50 = r_HASH_CODES((rt_int)(p_S).len, r_CODE_OF(rt_b_slice(p_S, ((rt_int)0LL), ((rt_int)0LL))), r_CODE_OF(rt_b_slice(p_S, rt_quot((rt_int)(p_S).len, ((rt_int)2LL)), rt_quot((rt_int)(p_S).len, ((rt_int)2LL)))), r_CODE_OF(rt_b_slice(p_S, rt_sub((rt_int)(p_S).len, ((rt_int)1LL)), rt_sub((rt_int)(p_S).len, ((rt_int)1LL)))));
return rv50; }
rt_raise(RT_X_INIT);
}
static R9 r_MK(rstr p_S) { RT_B_TICK(); 
rt_int l_AT_51; memset(&l_AT_51, 0, sizeof l_AT_51);
l_AT_51 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
if ((rt_add(l_AT_51, (rt_int)(p_S).len) > g_ARENA_SIZE))
{
rt_putln(rt_str("*** the arena is full", 21));
rt_exit(((rt_int)2LL));
}
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, l_AT_51, rt_sub(rt_add(l_AT_51, (rt_int)(p_S).len), ((rt_int)1LL)), p_S);
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(l_AT_51, (rt_int)(p_S).len);
{ R9 rv52 = ({ R9 rc53; memset(&rc53, 0, sizeof rc53);  rc53.f_AT = l_AT_51; rc53.f_LEN = (rt_int)(p_S).len; rc53.f_H = rt_neg(((rt_int)1LL)); rc53; });
return rv52; }
rt_raise(RT_X_INIT);
}
static R9 r_MKN(rstr p_S) { RT_B_TICK(); 
R9 l_T_54; memset(&l_T_54, 0, sizeof l_T_54);
S_R9(&l_T_54, r_MK(p_S), 0);
(l_T_54).f_H = r_HASH_OF(p_S);
{ R9 rv55 = l_T_54;
return rv55; }
rt_raise(RT_X_INIT);
}
static rstr r_STR(R9 p_T, rt_int p_L) { RT_B_TICK(); 
{ rstr rv56 = rt_b_slice(((*(R7 *)rt_nil_check(g_W))).f_ARENA, (p_T).f_AT, rt_sub(rt_add((p_T).f_AT, p_L), ((rt_int)1LL)));
return rv56; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEQ(R9 p_A, R9 p_B) { RT_B_TICK(); 
if ((!((p_A).f_LEN == (p_B).f_LEN)))
{
{ rt_int rv57 = 0;
return rv57; }
}
{ rt_int rv58 = rt_b_eq(r_STR(p_A, (p_A).f_LEN), r_STR(p_B, (p_B).f_LEN));
return rv58; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEQS(R9 p_A, rstr p_S) { RT_B_TICK(); 
if ((!((p_A).f_LEN == (rt_int)(p_S).len)))
{
{ rt_int rv59 = 0;
return rv59; }
}
{ rt_int rv60 = rt_b_eq(r_STR(p_A, (p_A).f_LEN), p_S);
return rv60; }
rt_raise(RT_X_INIT);
}
static R9 r_CAT(R9 p_A, R9 p_B) { RT_B_TICK(); 
{ R9 rv61 = r_MK(rt_b_cat(r_STR(p_A, (p_A).f_LEN), r_STR(p_B, (p_B).f_LEN)));
return rv61; }
rt_raise(RT_X_INIT);
}
static R9 r_CATS(R9 p_A, rstr p_S) { RT_B_TICK(); 
{ R9 rv62 = r_MK(rt_b_cat(r_STR(p_A, (p_A).f_LEN), p_S));
return rv62; }
rt_raise(RT_X_INIT);
}
static R9 r_FMT4(rstr p_P, R9 p_A, R9 p_B, R9 p_C, R9 p_D) { RT_B_TICK(); 
rt_int l_AT_63; memset(&l_AT_63, 0, sizeof l_AT_63);
l_AT_63 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_N_64; memset(&l_N_64, 0, sizeof l_N_64);
l_N_64 = ((rt_int)0LL);
rt_int l_START_65; memset(&l_START_65, 0, sizeof l_START_65);
l_START_65 = ((rt_int)0LL);
R9 l_R_66; memset(&l_R_66, 0, sizeof l_R_66);
{ rt_int it68_lo = ((rt_int)0LL), it68_hi = rt_sub((rt_int)(p_P).len, ((rt_int)1LL));
for (rt_int it68 = it68_lo; it68 <= it68_hi; it68++) {
{
if (rt_b_eq(rt_b_slice(p_P, it68, it68), rt_str("@", 1)))
{
S_R9(&l_R_66, r_MK(rt_b_slice(p_P, l_START_65, rt_sub(it68, ((rt_int)1LL)))), 0);
switch (l_N_64) {
case 0:
{
S_R9(&l_R_66, r_MK(r_STR(p_A, (p_A).f_LEN)), 0);
}
break;
case 1:
{
S_R9(&l_R_66, r_MK(r_STR(p_B, (p_B).f_LEN)), 0);
}
break;
case 2:
{
S_R9(&l_R_66, r_MK(r_STR(p_C, (p_C).f_LEN)), 0);
}
break;
default:
{
S_R9(&l_R_66, r_MK(r_STR(p_D, (p_D).f_LEN)), 0);
}
break;
}
l_N_64 = rt_add(l_N_64, ((rt_int)1LL));
l_START_65 = rt_add(it68, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it68 == it68_hi) break;
} } L_end67: ;
S_R9(&l_R_66, r_MK(rt_b_slice(p_P, l_START_65, rt_sub((rt_int)(p_P).len, ((rt_int)1LL)))), 0);
{ R9 rv69 = ({ R9 rc70; memset(&rc70, 0, sizeof rc70);  rc70.f_AT = l_AT_63; rc70.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_63); rc70.f_H = rt_neg(((rt_int)1LL)); rc70; });
return rv69; }
rt_raise(RT_X_INIT);
}
static R9 r_FMT1(rstr p_P, R9 p_A) { RT_B_TICK(); 
{ R9 rv71 = r_FMT4(p_P, p_A, p_A, p_A, p_A);
return rv71; }
rt_raise(RT_X_INIT);
}
static R9 r_FMT2(rstr p_P, R9 p_A, R9 p_B) { RT_B_TICK(); 
{ R9 rv72 = r_FMT4(p_P, p_A, p_B, p_B, p_B);
return rv72; }
rt_raise(RT_X_INIT);
}
static R9 r_FMT3(rstr p_P, R9 p_A, R9 p_B, R9 p_C) { RT_B_TICK(); 
{ R9 rv73 = r_FMT4(p_P, p_A, p_B, p_C, p_C);
return rv73; }
rt_raise(RT_X_INIT);
}
static R9 r_NUM(rt_int p_V) { RT_B_TICK(); 
{ R9 rv74 = r_MK(rt_b_image(p_V));
return rv74; }
rt_raise(RT_X_INIT);
}
static R9 r_CID(R9 p_T) { RT_B_TICK(); 
rstr l_S_75; memset(&l_S_75, 0, sizeof l_S_75);
l_S_75 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_75, r_STR(p_T, (p_T).f_LEN));
R9 l_R_76; memset(&l_R_76, 0, sizeof l_R_76);
if (((p_T).f_LEN == ((rt_int)0LL)))
{
{ R9 rv77 = p_T;
return rv77; }
}
if (((!rt_b_eq(rt_b_slice(l_S_75, ((rt_int)0LL), ((rt_int)0LL)), rt_str("\\", 1))) && (!rt_b_eq(rt_b_slice(l_S_75, ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1)))))
{
{ R9 rv78 = p_T;
return rv78; }
}
if (rt_b_eq(rt_b_slice(l_S_75, ((rt_int)0LL), ((rt_int)0LL)), rt_str("\\", 1)))
{
S_R9(&l_R_76, r_MK(rt_str("bs_", 3)), 0);
}
else
{
S_R9(&l_R_76, r_MK(rt_str("qm_", 3)), 0);
}
if (((p_T).f_LEN == ((rt_int)1LL)))
{
{ R9 rv79 = l_R_76;
return rv79; }
}
{ R9 rv80 = r_CATS(l_R_76, rt_b_slice(l_S_75, ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv80; }
rt_raise(RT_X_INIT);
}
static R9 r_NEW_NAME(rstr p_BASE) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_SERIAL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_SERIAL, ((rt_int)1LL));
{ R9 rv81 = r_MK(rt_b_cat(p_BASE, rt_b_image(((*(R7 *)rt_nil_check(g_W))).f_SERIAL)));
return rv81; }
rt_raise(RT_X_INIT);
}
static void r_APPEND(R9 p_T, R14 *p_B) { RT_B_TICK(); 
R15 * l_C_82; memset(&l_C_82, 0, sizeof l_C_82);
l_C_82 = ((R15 *)rt_b_new(sizeof (R15)));
S_R9(&((*(R15 *)rt_nil_check(l_C_82))).f_T, p_T, 0);
((*(R15 *)rt_nil_check(l_C_82))).f_NEXT = NULL;
if ((((*p_B)).f_TAIL == NULL))
{
((*p_B)).f_HEAD = l_C_82;
}
else
{
((*(R15 *)rt_nil_check(((*p_B)).f_TAIL))).f_NEXT = l_C_82;
}
((*p_B)).f_TAIL = l_C_82;
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
R15 * l_C_83; memset(&l_C_83, 0, sizeof l_C_83);
l_C_83 = (p_B).f_HEAD;
for (;;) {
if ((l_C_83 == NULL)) goto L_end84;
{
{
R9 l_T_85; memset(&l_T_85, 0, sizeof l_T_85);
S_R9(&l_T_85, ((*(R15 *)rt_nil_check(l_C_83))).f_T, 0);
rt_putln(r_STR(l_T_85, (l_T_85).f_LEN));
}
l_C_83 = ((*(R15 *)rt_nil_check(l_C_83))).f_NEXT;
}
RT_B_TICK();
} L_end84: ;
}
static void r_WRITE_OUTPUT(void) { RT_B_TICK(); 
{ rt_int it87_lo = ((rt_int)0LL), it87_hi = g_O_LAST;
for (rt_int it87 = it87_lo; it87 <= it87_hi; it87++) {
{
r_PUT_BUF((((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(it87, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
}
RT_B_TICK();
if (it87 == it87_hi) break;
} } L_end86: ;
}
static void r_FAIL(rt_int p_LINE, rstr p_MSG) { RT_B_TICK(); 
rt_putln(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("line ", 5), rt_b_image(p_LINE)), rt_str(": ", 2)), p_MSG));
rt_exit(((rt_int)1LL));
}
static void r_FAILT(rt_int p_LINE, rstr p_MSG, R9 p_T) { RT_B_TICK(); 
r_FAIL(p_LINE, rt_b_cat(p_MSG, r_STR(p_T, (p_T).f_LEN)));
}
static void r_READ_SOURCE(void) { RT_B_TICK(); 
rt_int l_C_88; memset(&l_C_88, 0, sizeof l_C_88);
l_C_88 = rt_b_get_code();
for (;;) {
if ((l_C_88 < ((rt_int)0LL))) goto L_end89;
{
if ((((*(R7 *)rt_nil_check(g_W))).f_NSRC >= g_MAX_SOURCE))
{
r_FAIL(((rt_int)0LL), rt_str("the source is too long", 22));
}
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = l_C_88;
((*(R7 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
l_C_88 = rt_b_get_code();
}
RT_B_TICK();
} L_end89: ;
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = ((rt_int)0LL);
((*(R7 *)rt_nil_check(g_W))).f_STDINLEN = ((*(R7 *)rt_nil_check(g_W))).f_NSRC;
}
static rt_int r_AT_SRC(rt_int p_I) { RT_B_TICK(); 
if ((p_I >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC))
{
{ rt_int rv90 = ((rt_int)0LL);
return rv90; }
}
{ rt_int rv91 = (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(p_I, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])];
return rv91; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LETTER(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv92 = ({ rt_int iv93 = p_C; (((rt_int)65LL) <= iv93) && (iv93 <= ((rt_int)90LL)); });
return rv92; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_DIGIT(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv94 = ({ rt_int iv95 = p_C; (((rt_int)48LL) <= iv95) && (iv95 <= ((rt_int)57LL)); });
return rv94; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_IDCHAR(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv96 = ((r_IS_LETTER(p_C) || r_IS_DIGIT(p_C)) || (p_C == ((rt_int)95LL)));
return rv96; }
rt_raise(RT_X_INIT);
}
static R9 r_SOURCE_TEXT(rt_int p_FIRST, rt_int p_BEYOND) { RT_B_TICK(); 
rt_int l_AT_97; memset(&l_AT_97, 0, sizeof l_AT_97);
l_AT_97 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_L_98; memset(&l_L_98, 0, sizeof l_L_98);
l_L_98 = rt_sub(p_BEYOND, p_FIRST);
R9 l_T_99; memset(&l_T_99, 0, sizeof l_T_99);
if ((rt_add(l_AT_97, l_L_98) > g_ARENA_SIZE))
{
r_FAIL(((rt_int)0LL), rt_str("the arena is full", 17));
}
{ rt_int it101_lo = p_FIRST, it101_hi = rt_sub(p_BEYOND, ((rt_int)1LL));
for (rt_int it101 = it101_lo; it101 <= it101_hi; it101++) {
{
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, ((*(R7 *)rt_nil_check(g_W))).f_TOP, ((*(R7 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(it101, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]));
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R7 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
}
RT_B_TICK();
if (it101 == it101_hi) break;
} } L_end100: ;
S_R9(&l_T_99, ({ R9 rc102; memset(&rc102, 0, sizeof rc102);  rc102.f_AT = l_AT_97; rc102.f_LEN = l_L_98; rc102.f_H = ((rt_int)0LL); rc102; }), 0);
if ((l_L_98 > ((rt_int)0LL)))
{
(l_T_99).f_H = r_HASH_CODES(l_L_98, (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(p_FIRST, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])], (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(rt_add(p_FIRST, rt_quot(l_L_98, ((rt_int)2LL))), (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])], (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(rt_sub(p_BEYOND, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]);
}
{ R9 rv103 = l_T_99;
return rv103; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_RESERVED(R9 p_T) { RT_B_TICK(); 
rstr l_WORDS_104; memset(&l_WORDS_104, 0, sizeof l_WORDS_104);
l_WORDS_104 = rt_b_str_new(((rt_int)290LL), 0);
rt_b_assign(&l_WORDS_104, rt_str(" AND ANY ARRAY ASSERT BIN BLOCK CONST DO ELSE END EXCEPT EXIT FALSE FOR FROM FUNCTION GO HEX IF IN INLINE LOOP MAIN MOD MODULE NAMING NEEDS NIL NOT OCT OF OR ORIF PAR_BLOCK PATH PROCEDURE RECORD REP RETURN SEGMENT SELECT SIGNAL TAG TERMINATE THEN TO TRUE TYPE UNTIL VAR WHEN WHERE WITH XOR ", 290));
rt_int l_L_105; memset(&l_L_105, 0, sizeof l_L_105);
l_L_105 = (p_T).f_LEN;
{ rt_int it107_lo = ((rt_int)0LL), it107_hi = rt_sub(rt_sub(((rt_int)290LL), l_L_105), ((rt_int)2LL));
for (rt_int it107 = it107_lo; it107 <= it107_hi; it107++) {
{
if (rt_b_eq(rt_b_slice(l_WORDS_104, it107, it107), rt_str(" ", 1)))
{
if (rt_b_eq(rt_b_slice(l_WORDS_104, rt_add(rt_add(it107, l_L_105), ((rt_int)1LL)), rt_add(rt_add(it107, l_L_105), ((rt_int)1LL))), rt_str(" ", 1)))
{
if (rt_b_eq(rt_b_slice(l_WORDS_104, rt_add(it107, ((rt_int)1LL)), rt_add(it107, l_L_105)), r_STR(p_T, l_L_105)))
{
{ rt_int rv108 = 1;
return rv108; }
}
}
}
}
RT_B_TICK();
if (it107 == it107_hi) break;
} } L_end106: ;
{ rt_int rv109 = 0;
return rv109; }
rt_raise(RT_X_INIT);
}
static void r_ADD_TOKEN(rt_int p_KIND, rt_int p_LINE, rt_int p_IV, R9 p_TX) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_NTOKS >= g_MAX_TOKENS))
{
r_FAIL(p_LINE, rt_str("too many tokens", 15));
}
S_R10(&(((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], ({ R10 rc110; memset(&rc110, 0, sizeof rc110);  rc110.f_KIND = p_KIND; rc110.f_LINE = p_LINE; rc110.f_IV = p_IV; S_R9(&rc110.f_TX, p_TX, 0); rc110; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_NTOKS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL));
}
static rt_int r_SYMBOL_LENGTH(rt_int p_I) { RT_B_TICK(); 
rt_int l_C_111; memset(&l_C_111, 0, sizeof l_C_111);
l_C_111 = r_AT_SRC(p_I);
rt_int l_D_112; memset(&l_D_112, 0, sizeof l_D_112);
l_D_112 = r_AT_SRC(rt_add(p_I, ((rt_int)1LL)));
if ((((l_C_111 == ((rt_int)45LL)) && (l_D_112 == ((rt_int)45LL))) && (r_AT_SRC(rt_add(p_I, ((rt_int)2LL))) == ((rt_int)62LL))))
{
{ rt_int rv113 = ((rt_int)3LL);
return rv113; }
}
if ((((((((((((l_C_111 == ((rt_int)58LL)) && (l_D_112 == ((rt_int)61LL)))) || (((l_C_111 == ((rt_int)45LL)) && (l_D_112 == ((rt_int)62LL))))) || (((l_C_111 == ((rt_int)60LL)) && (l_D_112 == ((rt_int)61LL))))) || (((l_C_111 == ((rt_int)62LL)) && (l_D_112 == ((rt_int)61LL))))) || (((l_C_111 == ((rt_int)60LL)) && (l_D_112 == ((rt_int)62LL))))) || (((l_C_111 == ((rt_int)42LL)) && (l_D_112 == ((rt_int)42LL))))) || (((l_C_111 == ((rt_int)47LL)) && (l_D_112 == ((rt_int)47LL))))) || (((l_C_111 == ((rt_int)36LL)) && (l_D_112 == ((rt_int)36LL))))) || (((l_C_111 == ((rt_int)33LL)) && (l_D_112 == ((rt_int)33LL))))))
{
{ rt_int rv114 = ((rt_int)2LL);
return rv114; }
}
{ rt_int rv115 = ((rt_int)1LL);
return rv115; }
rt_raise(RT_X_INIT);
}
static void r_LEX(void) { RT_B_TICK(); 
rt_int l_I_116; memset(&l_I_116, 0, sizeof l_I_116);
l_I_116 = ((*(R7 *)rt_nil_check(g_W))).f_LEXED;
rt_int l_LINE_117; memset(&l_LINE_117, 0, sizeof l_LINE_117);
l_LINE_117 = rt_add(((*(R7 *)rt_nil_check(g_W))).f_LEXLINE, ((rt_int)1LL));
rt_int l_C_118; memset(&l_C_118, 0, sizeof l_C_118);
rt_int l_J_119; memset(&l_J_119, 0, sizeof l_J_119);
rt_int l_V_120; memset(&l_V_120, 0, sizeof l_V_120);
if ((((*(R7 *)rt_nil_check(g_W))).f_NTOKS > ((rt_int)0LL)))
{
((*(R7 *)rt_nil_check(g_W))).f_NTOKS = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL));
}
for (;;) {
if ((l_I_116 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC)) goto L_end121;
{
l_C_118 = (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_116, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])];
if ((l_C_118 == ((rt_int)10LL)))
{
l_LINE_117 = rt_add(l_LINE_117, ((rt_int)1LL));
l_I_116 = rt_add(l_I_116, ((rt_int)1LL));
}
else if (((((l_C_118 == ((rt_int)32LL)) || (l_C_118 == ((rt_int)9LL))) || (l_C_118 == ((rt_int)13LL))) || (l_C_118 == ((rt_int)12LL))))
{
l_I_116 = rt_add(l_I_116, ((rt_int)1LL));
}
else if ((l_C_118 == ((rt_int)37LL)))
{
l_I_116 = rt_add(l_I_116, ((rt_int)1LL));
for (;;) {
if ((((l_I_116 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_116, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)37LL))) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_116, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)10LL)))) goto L_end122;
{
l_I_116 = rt_add(l_I_116, ((rt_int)1LL));
}
RT_B_TICK();
} L_end122: ;
if ((r_AT_SRC(l_I_116) == ((rt_int)37LL)))
{
l_I_116 = rt_add(l_I_116, ((rt_int)1LL));
}
}
else if ((l_C_118 == ((rt_int)39LL)))
{
{
rt_int l_AT_123; memset(&l_AT_123, 0, sizeof l_AT_123);
l_AT_123 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
l_I_116 = rt_add(l_I_116, ((rt_int)1LL));
for (;;) {
{
if (((l_I_116 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_116, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)10LL))))
{
r_FAIL(l_LINE_117, rt_str("a string must end on its line", 29));
}
if (((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_116, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)39LL)))
{
if ((!(r_AT_SRC(rt_add(l_I_116, ((rt_int)1LL))) == ((rt_int)39LL))))
{
l_I_116 = rt_add(l_I_116, ((rt_int)1LL));
goto L_end124;
}
l_I_116 = rt_add(l_I_116, ((rt_int)1LL));
}
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, ((*(R7 *)rt_nil_check(g_W))).f_TOP, ((*(R7 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_116, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]));
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R7 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
l_I_116 = rt_add(l_I_116, ((rt_int)1LL));
}
RT_B_TICK();
} L_end124: ;
r_ADD_TOKEN(g_K_STR, l_LINE_117, ((rt_int)0LL), ({ R9 rc125; memset(&rc125, 0, sizeof rc125);  rc125.f_AT = l_AT_123; rc125.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_123); rc125.f_H = rt_neg(((rt_int)1LL)); rc125; }));
}
}
else if ((l_C_118 == ((rt_int)92LL)))
{
l_J_119 = rt_add(l_I_116, ((rt_int)1LL));
if (((((r_AT_SRC(l_J_119) == ((rt_int)39LL)) && (r_AT_SRC(rt_add(l_J_119, ((rt_int)1LL))) == ((rt_int)39LL))) && (r_AT_SRC(rt_add(l_J_119, ((rt_int)2LL))) == ((rt_int)39LL))) && (r_AT_SRC(rt_add(l_J_119, ((rt_int)3LL))) == ((rt_int)39LL))))
{
l_J_119 = rt_add(l_I_116, ((rt_int)5LL));
}
else if (((r_AT_SRC(l_J_119) == ((rt_int)39LL)) && (r_AT_SRC(rt_add(l_J_119, ((rt_int)2LL))) == ((rt_int)39LL))))
{
l_J_119 = rt_add(l_I_116, ((rt_int)4LL));
}
else if (((r_AT_SRC(l_J_119) == ((rt_int)91LL)) || (r_AT_SRC(l_J_119) == ((rt_int)93LL))))
{
l_J_119 = rt_add(l_I_116, ((rt_int)2LL));
}
else
{
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_119)))) goto L_end126;
{
l_J_119 = rt_add(l_J_119, ((rt_int)1LL));
}
RT_B_TICK();
} L_end126: ;
if ((l_J_119 == rt_add(l_I_116, ((rt_int)1LL))))
{
r_FAIL(l_LINE_117, rt_str("a stray backslash", 17));
}
}
r_ADD_TOKEN(g_K_ENUM, l_LINE_117, ((rt_int)0LL), r_SOURCE_TEXT(l_I_116, l_J_119));
l_I_116 = l_J_119;
}
else if ((l_C_118 == ((rt_int)63LL)))
{
l_J_119 = rt_add(l_I_116, ((rt_int)1LL));
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_119)))) goto L_end127;
{
l_J_119 = rt_add(l_J_119, ((rt_int)1LL));
}
RT_B_TICK();
} L_end127: ;
r_ADD_TOKEN(g_K_GEN, l_LINE_117, ((rt_int)0LL), r_SOURCE_TEXT(l_I_116, l_J_119));
l_I_116 = l_J_119;
}
else if (r_IS_LETTER(l_C_118))
{
l_J_119 = l_I_116;
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_119)))) goto L_end128;
{
l_J_119 = rt_add(l_J_119, ((rt_int)1LL));
}
RT_B_TICK();
} L_end128: ;
{
R9 l_T_129; memset(&l_T_129, 0, sizeof l_T_129);
S_R9(&l_T_129, r_SOURCE_TEXT(l_I_116, l_J_119), 0);
if (r_IS_RESERVED(l_T_129))
{
r_ADD_TOKEN(g_K_RES, l_LINE_117, ((rt_int)0LL), l_T_129);
}
else
{
r_ADD_TOKEN(g_K_ID, l_LINE_117, ((rt_int)0LL), l_T_129);
}
}
l_I_116 = l_J_119;
}
else if ((r_IS_DIGIT(l_C_118) || (((l_C_118 == ((rt_int)46LL)) && r_IS_DIGIT(r_AT_SRC(rt_add(l_I_116, ((rt_int)1LL))))))))
{
{
rt_int l_KIND_130; memset(&l_KIND_130, 0, sizeof l_KIND_130);
l_KIND_130 = g_K_NUM;
rt_int l_SCALE_131; memset(&l_SCALE_131, 0, sizeof l_SCALE_131);
l_SCALE_131 = ((rt_int)0LL);
rt_int l_NEG_132; memset(&l_NEG_132, 0, sizeof l_NEG_132);
l_NEG_132 = 0;
rt_int l_BIG_133; memset(&l_BIG_133, 0, sizeof l_BIG_133);
l_BIG_133 = 0;
l_J_119 = l_I_116;
l_V_120 = ((rt_int)0LL);
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_119)))) goto L_end134;
{
if ((l_V_120 > rt_quot((rt_sub(INT64_MAX, (rt_sub(r_AT_SRC(l_J_119), ((rt_int)48LL))))), ((rt_int)10LL))))
{
l_BIG_133 = 1;
}
else
{
l_V_120 = rt_add(rt_mul(l_V_120, ((rt_int)10LL)), (rt_sub(r_AT_SRC(l_J_119), ((rt_int)48LL))));
}
l_J_119 = rt_add(l_J_119, ((rt_int)1LL));
}
RT_B_TICK();
} L_end134: ;
if ((r_AT_SRC(l_J_119) == ((rt_int)46LL)))
{
l_KIND_130 = g_K_REAL;
l_J_119 = rt_add(l_J_119, ((rt_int)1LL));
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_119)))) goto L_end135;
{
l_J_119 = rt_add(l_J_119, ((rt_int)1LL));
}
RT_B_TICK();
} L_end135: ;
}
if (((r_AT_SRC(l_J_119) == ((rt_int)69LL)) && ((r_IS_DIGIT(r_AT_SRC(rt_add(l_J_119, ((rt_int)1LL)))) || (((((r_AT_SRC(rt_add(l_J_119, ((rt_int)1LL))) == ((rt_int)43LL)) || (r_AT_SRC(rt_add(l_J_119, ((rt_int)1LL))) == ((rt_int)45LL)))) && r_IS_DIGIT(r_AT_SRC(rt_add(l_J_119, ((rt_int)2LL))))))))))
{
l_KIND_130 = g_K_REAL;
l_J_119 = rt_add(l_J_119, ((rt_int)2LL));
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_119)))) goto L_end136;
{
l_J_119 = rt_add(l_J_119, ((rt_int)1LL));
}
RT_B_TICK();
} L_end136: ;
}
{
R9 l_T_137; memset(&l_T_137, 0, sizeof l_T_137);
S_R9(&l_T_137, r_SOURCE_TEXT(l_I_116, l_J_119), 0);
if (((r_AT_SRC(l_J_119) == ((rt_int)92LL)) && (r_AT_SRC(rt_add(l_J_119, ((rt_int)1LL))) == ((rt_int)83LL))))
{
l_KIND_130 = g_K_FIX;
l_J_119 = rt_add(l_J_119, ((rt_int)2LL));
if ((r_AT_SRC(l_J_119) == ((rt_int)45LL)))
{
l_NEG_132 = 1;
l_J_119 = rt_add(l_J_119, ((rt_int)1LL));
}
else if ((r_AT_SRC(l_J_119) == ((rt_int)43LL)))
{
l_J_119 = rt_add(l_J_119, ((rt_int)1LL));
}
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_119)))) goto L_end138;
{
if ((l_SCALE_131 <= ((rt_int)100000LL)))
{
l_SCALE_131 = rt_add(rt_mul(l_SCALE_131, ((rt_int)10LL)), (rt_sub(r_AT_SRC(l_J_119), ((rt_int)48LL))));
}
l_J_119 = rt_add(l_J_119, ((rt_int)1LL));
}
RT_B_TICK();
} L_end138: ;
if (l_NEG_132)
{
l_SCALE_131 = rt_neg(l_SCALE_131);
}
l_V_120 = l_SCALE_131;
}
if (((l_KIND_130 == g_K_NUM) && l_BIG_133))
{
r_FAIL(l_LINE_117, rt_str("an integer literal exceeds the largest INTEGER (3.2.2)", 54));
}
r_ADD_TOKEN(l_KIND_130, l_LINE_117, l_V_120, l_T_137);
}
}
l_I_116 = l_J_119;
}
else
{
l_J_119 = rt_add(l_I_116, r_SYMBOL_LENGTH(l_I_116));
r_ADD_TOKEN(g_K_SYM, l_LINE_117, ((rt_int)0LL), r_SOURCE_TEXT(l_I_116, l_J_119));
l_I_116 = l_J_119;
}
}
RT_B_TICK();
} L_end121: ;
r_ADD_TOKEN(g_K_EOF, l_LINE_117, ((rt_int)0LL), r_MK(rt_str("", 0)));
((*(R7 *)rt_nil_check(g_W))).f_LEXED = l_I_116;
((*(R7 *)rt_nil_check(g_W))).f_LEXLINE = l_LINE_117;
}
static void r_OPTIONS(void) { RT_B_TICK(); 
rt_int l_I_139; memset(&l_I_139, 0, sizeof l_I_139);
l_I_139 = ((rt_int)1LL);
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, r_MK(rt_str("lib", 3)), 0);
((*(R7 *)rt_nil_check(g_W))).f_WORD = ((rt_int)64LL);
for (;;) {
if ((l_I_139 >= rt_argc())) goto L_end140;
{
{
R9 l_A_141; memset(&l_A_141, 0, sizeof l_A_141);
S_R9(&l_A_141, r_MK(rt_arg(l_I_139)), 0);
if ((r_TEQS(l_A_141, rt_str("-L", 2)) && (rt_add(l_I_139, ((rt_int)1LL)) < rt_argc())))
{
l_I_139 = rt_add(l_I_139, ((rt_int)1LL));
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, r_MK(rt_arg(l_I_139)), 0);
}
else if (r_TEQS(l_A_141, rt_str("-suppress", 9)))
{
((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS = 1;
}
else if (r_TEQS(l_A_141, rt_str("-pdp11", 6)))
{
((*(R7 *)rt_nil_check(g_W))).f_WORD = ((rt_int)16LL);
}
else if (r_TEQS(l_A_141, rt_str("-c", 2)))
{
((*(R7 *)rt_nil_check(g_W))).f_SEPC = 1;
}
else
{
r_FAIL(((rt_int)0LL), rt_str("bluec [-L library-directory] [-c] [-suppress] [-pdp11] < program.blu > program.c", 80));
}
}
l_I_139 = rt_add(l_I_139, ((rt_int)1LL));
}
RT_B_TICK();
} L_end140: ;
}
static void r_LOAD_LIBRARY(R9 p_NAME) { RT_B_TICK(); 
R9 l_FILE_142; memset(&l_FILE_142, 0, sizeof l_FILE_142);
S_R9(&l_FILE_142, r_LIB_FILE(((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, p_NAME, rt_str(".bif", 4)), 0);
if ((!rt_b_file_exists(r_STR(l_FILE_142, (l_FILE_142).f_LEN))))
{
S_R9(&l_FILE_142, r_LIB_FILE(((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, p_NAME, rt_str(".blu", 4)), 0);
}
else
{
{
R17 * l_N_143; memset(&l_N_143, 0, sizeof l_N_143);
l_N_143 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_143))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_143))).f_IV = r_FILE_PRINT(r_STR(l_FILE_142, (l_FILE_142).f_LEN));
((*(R17 *)rt_nil_check(l_N_143))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXTS;
((*(R7 *)rt_nil_check(g_W))).f_EXTS = l_N_143;
}
}
if (((!rt_b_file_exists(r_STR(l_FILE_142, (l_FILE_142).f_LEN))) && (!r_TEQS(((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, rt_str("lib", 3)))))
{
S_R9(&l_FILE_142, r_LIB_FILE(r_MK(rt_str("lib", 3)), p_NAME, rt_str(".blu", 4)), 0);
}
if ((!rt_b_file_exists(r_STR(l_FILE_142, (l_FILE_142).f_LEN))))
{
r_FAILT(((rt_int)0LL), rt_str("USES names a segment that is neither in the program nor in the library: ", 72), p_NAME);
}
r_LOAD_TEXT(p_NAME, r_STR(l_FILE_142, (l_FILE_142).f_LEN));
}
static R9 r_LIB_FILE(R9 p_DIR, R9 p_NAME, rstr p_EXT) { RT_B_TICK(); 
{ R9 rv144 = r_CAT(r_CATS(p_DIR, rt_str("/", 1)), r_CATS(p_NAME, p_EXT));
return rv144; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEXT_PRINT(rstr p_T) { RT_B_TICK(); 
rt_int l_H_145; memset(&l_H_145, 0, sizeof l_H_145);
l_H_145 = ((rt_int)7LL);
{ rt_int it147_lo = ((rt_int)0LL), it147_hi = rt_sub((rt_int)(p_T).len, ((rt_int)1LL));
for (rt_int it147 = it147_lo; it147 <= it147_hi; it147++) {
{
l_H_145 = rt_rem((rt_add(rt_mul(l_H_145, ((rt_int)131LL)), r_CODE_OF(rt_b_slice(p_T, it147, it147)))), ((rt_int)1099511627776LL));
}
RT_B_TICK();
if (it147 == it147_hi) break;
} } L_end146: ;
{ rt_int rv148 = l_H_145;
return rv148; }
rt_raise(RT_X_INIT);
}
static rt_int r_FILE_PRINT(rstr p_FNAME) { RT_B_TICK(); 
{ rt_int rv149 = r_TEXT_PRINT(rt_read_file(p_FNAME));
return rv149; }
rt_raise(RT_X_INIT);
}
static R9 r_INPUT_TEXT(void) { RT_B_TICK(); 
{ R9 rv150 = r_SOURCE_TEXT(((rt_int)0LL), ((*(R7 *)rt_nil_check(g_W))).f_STDINLEN);
return rv150; }
rt_raise(RT_X_INIT);
}
static void r_LOAD_TEXT(R9 p_NAME, rstr p_FNAME) { RT_B_TICK(); 
if ((!r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_EXTS, p_NAME)))
{
{
R17 * l_N_151; memset(&l_N_151, 0, sizeof l_N_151);
l_N_151 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_151))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_151))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_LIBSEGS;
((*(R7 *)rt_nil_check(g_W))).f_LIBSEGS = l_N_151;
}
}
{
rstr l_T_152; memset(&l_T_152, 0, sizeof l_T_152);
l_T_152 = rt_b_str_new((rt_int)(rt_read_file(p_FNAME)).len, 0);
rt_b_assign(&l_T_152, rt_read_file(p_FNAME));
if ((rt_add(rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (rt_int)(l_T_152).len), ((rt_int)1LL)) >= g_MAX_SOURCE))
{
r_FAIL(((rt_int)0LL), rt_str("the source is too long", 22));
}
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = ((rt_int)10LL);
((*(R7 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
{ rt_int it154_lo = ((rt_int)0LL), it154_hi = rt_sub((rt_int)(l_T_152).len, ((rt_int)1LL));
for (rt_int it154 = it154_lo; it154 <= it154_hi; it154++) {
{
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = r_CODE_OF(rt_b_slice(l_T_152, it154, it154));
((*(R7 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
}
RT_B_TICK();
if (it154 == it154_hi) break;
} } L_end153: ;
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = ((rt_int)0LL);
}
}
static R10 r_CUR(void) { RT_B_TICK(); 
{ R10 rv155 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv155; }
rt_raise(RT_X_INIT);
}
static R10 r_AHEAD(rt_int p_K) { RT_B_TICK(); 
if ((rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, p_K) >= ((*(R7 *)rt_nil_check(g_W))).f_NTOKS))
{
{ R10 rv156 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv156; }
}
{ R10 rv157 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, p_K), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv157; }
rt_raise(RT_X_INIT);
}
static rt_int r_LINE_NOW(void) { RT_B_TICK(); 
{ rt_int rv158 = ((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_LINE;
return rv158; }
rt_raise(RT_X_INIT);
}
static rt_int r_TOK_IS(R10 p_T, rstr p_S) { RT_B_TICK(); 
if (((((p_T).f_KIND == g_K_SYM) || ((p_T).f_KIND == g_K_RES)) || ((p_T).f_KIND == g_K_ID)))
{
{ rt_int rv159 = r_TEQS((p_T).f_TX, p_S);
return rv159; }
}
{ rt_int rv160 = 0;
return rv160; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS(rstr p_S) { RT_B_TICK(); 
{ rt_int rv161 = r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], p_S);
return rv161; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TARGET_DECL(void) { RT_B_TICK(); 
if (((!r_IS(rt_str("TARGET", 6))) || (((*(R7 *)rt_nil_check(g_W))).f_POS >= rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)))))
{
{ rt_int rv162 = 0;
return rv162; }
}
{ rt_int rv163 = ((r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("PROCEDURE", 9)) || r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("FUNCTION", 8))) || r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("INLINE", 6)));
return rv163; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_KIND(rt_int p_K) { RT_B_TICK(); 
{ rt_int rv164 = (((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_KIND == p_K);
return rv164; }
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
{ rt_int rv165 = 1;
return rv165; }
}
{ rt_int rv166 = 0;
return rv166; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT(rstr p_S) { RT_B_TICK(); 
if ((!r_ACCEPT(p_S)))
{
{
R9 l_T_167; memset(&l_T_167, 0, sizeof l_T_167);
S_R9(&l_T_167, (r_CUR()).f_TX, 0);
r_FAIL(r_LINE_NOW(), rt_b_cat(rt_b_cat(p_S, rt_str(" expected, not ", 15)), r_STR(l_T_167, (l_T_167).f_LEN)));
}
}
}
static R9 r_IDENT(void) { RT_B_TICK(); 
R10 l_T_168; memset(&l_T_168, 0, sizeof l_T_168);
S_R10(&l_T_168, r_CUR(), 0);
if (((!((l_T_168).f_KIND == g_K_ID)) && (!r_IDENT_TOKEN(l_T_168))))
{
r_FAILT((l_T_168).f_LINE, rt_str("an identifier expected, not ", 28), (l_T_168).f_TX);
}
r_SKIP();
{ R9 rv169 = (l_T_168).f_TX;
return rv169; }
rt_raise(RT_X_INIT);
}
static rt_int r_IDENT_TOKEN(R10 p_T) { RT_B_TICK(); 
if ((((((p_T).f_KIND == g_K_ENUM) || ((p_T).f_KIND == g_K_GEN))) && (((p_T).f_TX).f_LEN >= ((rt_int)2LL))))
{
{
rstr l_S_170; memset(&l_S_170, 0, sizeof l_S_170);
l_S_170 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_S_170, r_STR((p_T).f_TX, ((rt_int)2LL)));
{ rt_int rv171 = (((!rt_b_eq(rt_b_slice(l_S_170, ((rt_int)1LL), ((rt_int)1LL)), rt_str("'", 1))) && (!rt_b_eq(rt_b_slice(l_S_170, ((rt_int)1LL), ((rt_int)1LL)), rt_str("[", 1)))) && (!rt_b_eq(rt_b_slice(l_S_170, ((rt_int)1LL), ((rt_int)1LL)), rt_str("]", 1))));
return rv171; }
}
}
{ rt_int rv172 = 0;
return rv172; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT_NAME(R9 p_NAME) { RT_B_TICK(); 
if ((!r_TEQ(r_IDENT(), p_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), p_NAME);
}
}
static R17 * r_NEW_NODE(rt_int p_KIND, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_N_173; memset(&l_N_173, 0, sizeof l_N_173);
l_N_173 = ((R17 *)rt_b_new(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_N_173)), ({ R17 rc174; memset(&rc174, 0, sizeof rc174);  rc174.f_KIND = p_KIND; rc174.f_LINE = p_LINE; rc174.f_IV = ((rt_int)0LL); S_R9(&rc174.f_NAME, ({ R9 rc175; memset(&rc175, 0, sizeof rc175);  rc175.f_AT = ((rt_int)0LL); rc175.f_LEN = ((rt_int)0LL); rc175.f_H = ((rt_int)0LL); rc175; }), 0); rc174.f_A = NULL; rc174.f_B = NULL; rc174.f_C = NULL; rc174.f_D = NULL; rc174.f_E = NULL; rc174.f_NEXT = NULL; rc174.f_FL = ((rt_int)0LL); rc174; }), 0);
{ R17 * rv176 = l_N_173;
return rv176; }
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
rt_int l_K_177; memset(&l_K_177, 0, sizeof l_K_177);
l_K_177 = ((rt_int)0LL);
R17 * l_P_178; memset(&l_P_178, 0, sizeof l_P_178);
l_P_178 = p_N;
for (;;) {
if ((l_P_178 == NULL)) goto L_end179;
{
l_K_177 = rt_add(l_K_177, ((rt_int)1LL));
l_P_178 = ((*(R17 *)rt_nil_check(l_P_178))).f_NEXT;
}
RT_B_TICK();
} L_end179: ;
{ rt_int rv180 = l_K_177;
return rv180; }
rt_raise(RT_X_INIT);
}
static R17 * r_IDENT_NODE(void) { RT_B_TICK(); 
R17 * l_N_181; memset(&l_N_181, 0, sizeof l_N_181);
l_N_181 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_N_181))).f_NAME, r_IDENT(), 0);
{ R17 * rv182 = l_N_181;
return rv182; }
rt_raise(RT_X_INIT);
}
static R17 * r_IDENT_LIST(void) { RT_B_TICK(); 
R17 * l_HEAD_183; memset(&l_HEAD_183, 0, sizeof l_HEAD_183);
l_HEAD_183 = NULL;
R17 * l_TAIL_184; memset(&l_TAIL_184, 0, sizeof l_TAIL_184);
l_TAIL_184 = NULL;
for (;;) {
{
r_ADD_LIST(r_ROUTINE_NAME_NODE(), &l_HEAD_183, &l_TAIL_184);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end185;
} L_end185: ;
{ R17 * rv186 = l_HEAD_183;
return rv186; }
rt_raise(RT_X_INIT);
}
static R17 * r_ROUTINE_NAME_NODE(void) { RT_B_TICK(); 
R17 * l_N_187; memset(&l_N_187, 0, sizeof l_N_187);
l_N_187 = r_IDENT_NODE();
if ((r_IS(rt_str("$", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_SKIP();
S_R9(&((*(R17 *)rt_nil_check(l_N_187))).f_NAME, r_MKN(rt_b_cat(rt_b_cat(r_STR(((*(R17 *)rt_nil_check(l_N_187))).f_NAME, (((*(R17 *)rt_nil_check(l_N_187))).f_NAME).f_LEN), rt_str("$", 1)), r_STR((r_CUR()).f_TX, ((r_CUR()).f_TX).f_LEN))), 0);
r_SKIP();
}
{ R17 * rv188 = l_N_187;
return rv188; }
rt_raise(RT_X_INIT);
}
static R17 * r_PAREN_IDENTS(void) { RT_B_TICK(); 
R17 * l_L_189; memset(&l_L_189, 0, sizeof l_L_189);
l_L_189 = NULL;
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str(")", 1))))
{
l_L_189 = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
{ R17 * rv190 = l_L_189;
return rv190; }
rt_raise(RT_X_INIT);
}
static void r_SKIP_PARENS(void) { RT_B_TICK(); 
rt_int l_DEPTH_191; memset(&l_DEPTH_191, 0, sizeof l_DEPTH_191);
l_DEPTH_191 = ((rt_int)0LL);
for (;;) {
{
if (r_IS(rt_str("(", 1)))
{
l_DEPTH_191 = rt_add(l_DEPTH_191, ((rt_int)1LL));
}
else if (r_IS(rt_str(")", 1)))
{
l_DEPTH_191 = rt_sub(l_DEPTH_191, ((rt_int)1LL));
}
r_SKIP();
}
RT_B_TICK();
if ((l_DEPTH_191 == ((rt_int)0LL))) goto L_end192;
} L_end192: ;
}
static R17 * r_PARSE_COMPILATION(void) { RT_B_TICK(); 
R17 * l_HEAD_193; memset(&l_HEAD_193, 0, sizeof l_HEAD_193);
l_HEAD_193 = NULL;
R17 * l_TAIL_194; memset(&l_TAIL_194, 0, sizeof l_TAIL_194);
l_TAIL_194 = NULL;
for (;;) {
if (r_IS_KIND(g_K_EOF)) goto L_end195;
{
r_ADD_LIST(r_PARSE_SEGMENT(), &l_HEAD_193, &l_TAIL_194);
}
RT_B_TICK();
} L_end195: ;
{ R17 * rv196 = l_HEAD_193;
return rv196; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ITEMS(void) { RT_B_TICK(); 
R17 * l_N_197; memset(&l_N_197, 0, sizeof l_N_197);
l_N_197 = r_NEW_NODE(g_N_ITEMS, r_LINE_NOW());
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end198;
{
if (r_ACCEPT(rt_str("DATA", 4)))
{
r_EXPECT(rt_str(":", 1));
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str("#", 1))))
{
((*(R17 *)rt_nil_check(l_N_197))).f_A = r_IDENT_LIST();
}
if (r_ACCEPT(rt_str("#", 1)))
{
((*(R17 *)rt_nil_check(l_N_197))).f_B = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("ROUTINES", 8)))
{
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_197))).f_C = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("TYPES", 5)))
{
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_197))).f_D = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("MODULES", 7)))
{
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_197))).f_E = r_PAREN_IDENTS();
}
else
{
{
R9 l_T_199; memset(&l_T_199, 0, sizeof l_T_199);
S_R9(&l_T_199, (r_CUR()).f_TX, 0);
r_FAILT(r_LINE_NOW(), rt_str("DATA, ROUTINES, TYPES or MODULES expected, not ", 47), l_T_199);
}
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end198: ;
r_EXPECT(rt_str(")", 1));
{
R17 * l_L_200; memset(&l_L_200, 0, sizeof l_L_200);
l_L_200 = ((*(R17 *)rt_nil_check(l_N_197))).f_A;
rt_int l_PASS_201; memset(&l_PASS_201, 0, sizeof l_PASS_201);
l_PASS_201 = ((rt_int)0LL);
for (;;) {
if ((l_PASS_201 == ((rt_int)5LL))) goto L_end202;
{
if ((l_PASS_201 == ((rt_int)1LL)))
{
l_L_200 = ((*(R17 *)rt_nil_check(l_N_197))).f_B;
}
else if ((l_PASS_201 == ((rt_int)2LL)))
{
l_L_200 = ((*(R17 *)rt_nil_check(l_N_197))).f_C;
}
else if ((l_PASS_201 == ((rt_int)3LL)))
{
l_L_200 = ((*(R17 *)rt_nil_check(l_N_197))).f_D;
}
else if ((l_PASS_201 == ((rt_int)4LL)))
{
l_L_200 = ((*(R17 *)rt_nil_check(l_N_197))).f_E;
}
for (;;) {
if ((l_L_200 == NULL)) goto L_end203;
{
if ((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_L_200))).f_NEXT, ((*(R17 *)rt_nil_check(l_L_200))).f_NAME) || (((l_PASS_201 == ((rt_int)0LL)) && r_IN_IDENTS(((*(R17 *)rt_nil_check(l_N_197))).f_B, ((*(R17 *)rt_nil_check(l_L_200))).f_NAME)))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_L_200))).f_LINE, rt_str("a name appears only once in an imports-clause (4.3.1): ", 55), ((*(R17 *)rt_nil_check(l_L_200))).f_NAME);
}
l_L_200 = ((*(R17 *)rt_nil_check(l_L_200))).f_NEXT;
}
RT_B_TICK();
} L_end203: ;
l_PASS_201 = rt_add(l_PASS_201, ((rt_int)1LL));
}
RT_B_TICK();
} L_end202: ;
}
{ R17 * rv204 = l_N_197;
return rv204; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_SEGMENT(void) { RT_B_TICK(); 
R17 * l_S_205; memset(&l_S_205, 0, sizeof l_S_205);
l_S_205 = r_NEW_NODE(g_N_SEGMENT, r_LINE_NOW());
R17 * l_HEAD_206; memset(&l_HEAD_206, 0, sizeof l_HEAD_206);
l_HEAD_206 = NULL;
R17 * l_TAIL_207; memset(&l_TAIL_207, 0, sizeof l_TAIL_207);
l_TAIL_207 = NULL;
if (r_ACCEPT(rt_str("MAIN", 4)))
{
((*(R17 *)rt_nil_check(l_S_205))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("SEGMENT", 7));
S_R9(&((*(R17 *)rt_nil_check(l_S_205))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("USES", 4)))
{
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_U_209; memset(&l_U_209, 0, sizeof l_U_209);
l_U_209 = r_NEW_NODE(g_N_USE, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_U_209))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_U_209))).f_A = r_PARSE_ITEMS();
}
r_ADD_LIST(l_U_209, &l_HEAD_206, &l_TAIL_207);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end208;
} L_end208: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_S_205))).f_A = l_HEAD_206;
}
if (r_ACCEPT(rt_str("DEFINES", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R17 *)rt_nil_check(l_S_205))).f_FL = ((rt_int)1LL);
}
else
{
((*(R17 *)rt_nil_check(l_S_205))).f_C = r_PAREN_IDENTS();
}
}
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_S_205))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SEGMENT", 7));
r_EXPECT_NAME(((*(R17 *)rt_nil_check(l_S_205))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R17 * rv210 = l_S_205;
return rv210; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CLOSED_BODY(void) { RT_B_TICK(); 
R17 * l_B_211; memset(&l_B_211, 0, sizeof l_B_211);
l_B_211 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
R17 * l_HEAD_212; memset(&l_HEAD_212, 0, sizeof l_HEAD_212);
l_HEAD_212 = NULL;
R17 * l_TAIL_213; memset(&l_TAIL_213, 0, sizeof l_TAIL_213);
l_TAIL_213 = NULL;
((*(R17 *)rt_nil_check(l_B_211))).f_A = r_PARSE_DECLARATIONS();
((*(R17 *)rt_nil_check(l_B_211))).f_B = r_PARSE_STATEMENTS();
for (;;) {
{
if ((((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()))
{
r_ADD_LIST(r_PARSE_ROUTINE(), &l_HEAD_212, &l_TAIL_213);
}
else if (r_IS(rt_str("MODULE", 6)))
{
r_ADD_LIST(r_PARSE_MODULE(), &l_HEAD_212, &l_TAIL_213);
}
else
{
goto L_end214;
}
}
RT_B_TICK();
} L_end214: ;
((*(R17 *)rt_nil_check(l_B_211))).f_C = l_HEAD_212;
{ R17 * rv215 = l_B_211;
return rv215; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_BODY(void) { RT_B_TICK(); 
R17 * l_B_216; memset(&l_B_216, 0, sizeof l_B_216);
l_B_216 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_B_216))).f_A = r_PARSE_DECLARATIONS();
((*(R17 *)rt_nil_check(l_B_216))).f_B = r_PARSE_STATEMENTS();
{ R17 * rv217 = l_B_216;
return rv217; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_MODULE(void) { RT_B_TICK(); 
R17 * l_M_218; memset(&l_M_218, 0, sizeof l_M_218);
l_M_218 = r_NEW_NODE(g_N_MODULE, r_LINE_NOW());
R17 * l_HEAD_219; memset(&l_HEAD_219, 0, sizeof l_HEAD_219);
l_HEAD_219 = NULL;
R17 * l_TAIL_220; memset(&l_TAIL_220, 0, sizeof l_TAIL_220);
l_TAIL_220 = NULL;
r_EXPECT(rt_str("MODULE", 6));
S_R9(&((*(R17 *)rt_nil_check(l_M_218))).f_NAME, r_IDENT(), 0);
for (;;) {
{
if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R17 *)rt_nil_check(l_M_218))).f_A = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("EXPORTS", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R17 *)rt_nil_check(l_M_218))).f_FL = ((rt_int)1LL);
}
else
{
{
rt_int l_PAREN_222; memset(&l_PAREN_222, 0, sizeof l_PAREN_222);
l_PAREN_222 = r_ACCEPT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_X_224; memset(&l_X_224, 0, sizeof l_X_224);
l_X_224 = r_NEW_NODE(g_N_EXPORT, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_X_224))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("WITH", 4)))
{
((*(R17 *)rt_nil_check(l_X_224))).f_A = r_PAREN_IDENTS();
}
r_ADD_LIST(l_X_224, &l_HEAD_219, &l_TAIL_220);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end223;
} L_end223: ;
if (l_PAREN_222)
{
r_EXPECT(rt_str(")", 1));
}
}
((*(R17 *)rt_nil_check(l_M_218))).f_B = l_HEAD_219;
}
}
else
{
goto L_end221;
}
}
RT_B_TICK();
} L_end221: ;
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_M_218))).f_C = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("MODULE", 6));
r_EXPECT_NAME(((*(R17 *)rt_nil_check(l_M_218))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R17 * rv225 = l_M_218;
return rv225; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_DECLARATIONS(void) { RT_B_TICK(); 
R17 * l_HEAD_226; memset(&l_HEAD_226, 0, sizeof l_HEAD_226);
l_HEAD_226 = NULL;
R17 * l_TAIL_227; memset(&l_TAIL_227, 0, sizeof l_TAIL_227);
l_TAIL_227 = NULL;
for (;;) {
{
if ((r_IS(rt_str("CONST", 5)) || r_IS(rt_str("VAR", 3))))
{
r_ADD_LIST(r_PARSE_OBJECT_DECL(), &l_HEAD_226, &l_TAIL_227);
}
else if (r_IS(rt_str("TYPE", 4)))
{
r_ADD_LIST(r_PARSE_TYPE_DECL(), &l_HEAD_226, &l_TAIL_227);
}
else if ((r_IS(rt_str("REPTYPE", 7)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_ADD_LIST(r_PARSE_REPTYPE_DECL(), &l_HEAD_226, &l_TAIL_227);
}
else
{
goto L_end228;
}
}
RT_B_TICK();
} L_end228: ;
{ R17 * rv229 = l_HEAD_226;
return rv229; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_OBJECT_DECL(void) { RT_B_TICK(); 
R17 * l_D_230; memset(&l_D_230, 0, sizeof l_D_230);
l_D_230 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
if (r_ACCEPT(rt_str("CONST", 5)))
{
((*(R17 *)rt_nil_check(l_D_230))).f_KIND = g_N_CONST;
}
else
{
r_EXPECT(rt_str("VAR", 3));
}
((*(R17 *)rt_nil_check(l_D_230))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_D_230))).f_B = r_PARSE_TYPE_SPEC();
if (r_ACCEPT(rt_str(":=", 2)))
{
((*(R17 *)rt_nil_check(l_D_230))).f_C = r_PARSE_EXPR();
}
else if ((((*(R17 *)rt_nil_check(l_D_230))).f_KIND == g_N_CONST))
{
r_FAIL(((*(R17 *)rt_nil_check(l_D_230))).f_LINE, rt_str("a constant needs a value", 24));
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv231 = l_D_230;
return rv231; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_FORMALS(void) { RT_B_TICK(); 
R17 * l_HEAD_232; memset(&l_HEAD_232, 0, sizeof l_HEAD_232);
l_HEAD_232 = NULL;
R17 * l_TAIL_233; memset(&l_TAIL_233, 0, sizeof l_TAIL_233);
l_TAIL_233 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_F_235; memset(&l_F_235, 0, sizeof l_F_235);
l_F_235 = r_NEW_NODE(g_N_FORMAL, r_LINE_NOW());
if (r_ACCEPT(rt_str("TAG", 3)))
{
((*(R17 *)rt_nil_check(l_F_235))).f_IV = ((rt_int)1LL);
}
((*(R17 *)rt_nil_check(l_F_235))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
if ((!r_ACCEPT(rt_str("TYPE", 4))))
{
((*(R17 *)rt_nil_check(l_F_235))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_F_235, &l_HEAD_232, &l_TAIL_233);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end234;
} L_end234: ;
r_EXPECT(rt_str(")", 1));
{ R17 * rv236 = l_HEAD_232;
return rv236; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TYPE_DECL(void) { RT_B_TICK(); 
R17 * l_D_237; memset(&l_D_237, 0, sizeof l_D_237);
l_D_237 = r_NEW_NODE(g_N_TYPE, r_LINE_NOW());
r_EXPECT(rt_str("TYPE", 4));
S_R9(&((*(R17 *)rt_nil_check(l_D_237))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_D_237))).f_A = r_PARSE_FORMALS();
}
r_EXPECT(rt_str("=", 1));
((*(R17 *)rt_nil_check(l_D_237))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(";", 1));
{ R17 * rv238 = l_D_237;
return rv238; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_REPTYPE_DECL(void) { RT_B_TICK(); 
R17 * l_D_239; memset(&l_D_239, 0, sizeof l_D_239);
l_D_239 = r_NEW_NODE(g_N_REPTYPE, r_LINE_NOW());
r_EXPECT(rt_str("REPTYPE", 7));
S_R9(&((*(R17 *)rt_nil_check(l_D_239))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_D_239))).f_A = r_PARSE_FORMALS();
}
if (r_ACCEPT(rt_str("OF", 2)))
{
((*(R17 *)rt_nil_check(l_D_239))).f_C = r_IDENT_NODE();
}
r_EXPECT(rt_str("=", 1));
((*(R17 *)rt_nil_check(l_D_239))).f_B = r_PARSE_REP();
r_EXPECT(rt_str(";", 1));
{ R17 * rv240 = l_D_239;
return rv240; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_REP(void) { RT_B_TICK(); 
R17 * l_R_241; memset(&l_R_241, 0, sizeof l_R_241);
l_R_241 = r_NEW_NODE(g_N_REP, r_LINE_NOW());
R17 * l_HEAD_242; memset(&l_HEAD_242, 0, sizeof l_HEAD_242);
l_HEAD_242 = NULL;
R17 * l_TAIL_243; memset(&l_TAIL_243, 0, sizeof l_TAIL_243);
l_TAIL_243 = NULL;
if (r_IS_KIND(g_K_GEN))
{
((*(R17 *)rt_nil_check(l_R_241))).f_KIND = g_TS_GEN;
S_R9(&((*(R17 *)rt_nil_check(l_R_241))).f_NAME, r_GEN_NAME(), 0);
{ R17 * rv244 = l_R_241;
return rv244; }
}
S_R9(&((*(R17 *)rt_nil_check(l_R_241))).f_NAME, r_IDENT(), 0);
if ((!r_IS(rt_str("(", 1))))
{
{ R17 * rv245 = l_R_241;
return rv245; }
}
if (r_TEQS(((*(R17 *)rt_nil_check(l_R_241))).f_NAME, rt_str("RECORD_REP", 10)))
{
r_PARSE_RECORD_REP(l_R_241);
{ R17 * rv246 = l_R_241;
return rv246; }
}
r_SKIP();
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end247;
{
if (r_ACCEPT(rt_str("VALUES", 6)))
{
{
R17 * l_VH_248; memset(&l_VH_248, 0, sizeof l_VH_248);
l_VH_248 = NULL;
R17 * l_VT_249; memset(&l_VT_249, 0, sizeof l_VT_249);
l_VT_249 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_V_251; memset(&l_V_251, 0, sizeof l_V_251);
l_V_251 = r_NEW_NODE(g_N_VALREP, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_V_251))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_EXPECT(rt_str("AS", 2));
((*(R17 *)rt_nil_check(l_V_251))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_V_251, &l_VH_248, &l_VT_249);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end250;
} L_end250: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_R_241))).f_B = l_VH_248;
}
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_242, &l_TAIL_243);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end247: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_R_241))).f_A = l_HEAD_242;
{ R17 * rv252 = l_R_241;
return rv252; }
rt_raise(RT_X_INIT);
}
static void r_PARSE_RECORD_REP(R17 * p_R) { RT_B_TICK(); 
R17 * l_HEAD_253; memset(&l_HEAD_253, 0, sizeof l_HEAD_253);
l_HEAD_253 = NULL;
R17 * l_TAIL_254; memset(&l_TAIL_254, 0, sizeof l_TAIL_254);
l_TAIL_254 = NULL;
R17 * l_VH_255; memset(&l_VH_255, 0, sizeof l_VH_255);
l_VH_255 = NULL;
R17 * l_VT_256; memset(&l_VT_256, 0, sizeof l_VT_256);
l_VT_256 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end257;
{
if (r_IS(rt_str("SELECT", 6)))
{
r_ADD_LIST(r_PARSE_VARIANT_PACKING(), &l_VH_255, &l_VT_256);
}
else
{
r_ADD_LIST(r_PARSE_PACKING_SPEC(), &l_HEAD_253, &l_TAIL_254);
}
if ((r_ACCEPT(rt_str(",", 1)) || r_ACCEPT(rt_str(";", 1))))
{
}
}
RT_B_TICK();
} L_end257: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(p_R))).f_A = l_HEAD_253;
((*(R17 *)rt_nil_check(p_R))).f_C = l_VH_255;
}
static R17 * r_PARSE_PACKING_SPEC(void) { RT_B_TICK(); 
R17 * l_P_258; memset(&l_P_258, 0, sizeof l_P_258);
l_P_258 = r_NEW_NODE(g_N_PSPEC, r_LINE_NOW());
R17 * l_HEAD_259; memset(&l_HEAD_259, 0, sizeof l_HEAD_259);
l_HEAD_259 = NULL;
R17 * l_TAIL_260; memset(&l_TAIL_260, 0, sizeof l_TAIL_260);
l_TAIL_260 = NULL;
if ((r_IS_KIND(g_K_ID) && (((r_IS(rt_str("DENSE", 5)) || r_IS(rt_str("PACKED", 6))) || r_IS(rt_str("UNPACKED", 8))))))
{
S_R9(&((*(R17 *)rt_nil_check(l_P_258))).f_NAME, r_IDENT(), 0);
}
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_P_258))).f_IV = ((rt_int)1LL);
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end261;
{
r_ADD_LIST(r_PARSE_ELEMENT_SPEC(), &l_HEAD_259, &l_TAIL_260);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end261: ;
r_EXPECT(rt_str(")", 1));
}
else if (((((*(R17 *)rt_nil_check(l_P_258))).f_NAME).f_LEN == ((rt_int)0LL)))
{
((*(R17 *)rt_nil_check(l_P_258))).f_IV = ((rt_int)1LL);
r_ADD_LIST(r_PARSE_ELEMENT_SPEC(), &l_HEAD_259, &l_TAIL_260);
}
((*(R17 *)rt_nil_check(l_P_258))).f_A = l_HEAD_259;
{ R17 * rv262 = l_P_258;
return rv262; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ELEMENT_SPEC(void) { RT_B_TICK(); 
R17 * l_E_263; memset(&l_E_263, 0, sizeof l_E_263);
l_E_263 = r_NEW_NODE(g_N_ELEM, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_E_263))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
if ((r_TEQS(((*(R17 *)rt_nil_check(l_E_263))).f_NAME, rt_str("VARIANTS", 8)) || r_TEQS(((*(R17 *)rt_nil_check(l_E_263))).f_NAME, rt_str("OMIT", 4))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_E_263))).f_NAME, rt_str("VARIANTS", 8)))
{
((*(R17 *)rt_nil_check(l_E_263))).f_FL = ((rt_int)1LL);
}
else
{
((*(R17 *)rt_nil_check(l_E_263))).f_FL = ((rt_int)2LL);
}
r_SKIP();
S_R9(&((*(R17 *)rt_nil_check(l_E_263))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(")", 1));
}
else if (((r_TEQS(((*(R17 *)rt_nil_check(l_E_263))).f_NAME, rt_str("FILLER", 6)) || r_TEQS(((*(R17 *)rt_nil_check(l_E_263))).f_NAME, rt_str("ZEROS", 5))) || r_TEQS(((*(R17 *)rt_nil_check(l_E_263))).f_NAME, rt_str("BLANKS", 6))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_E_263))).f_NAME, rt_str("FILLER", 6)))
{
((*(R17 *)rt_nil_check(l_E_263))).f_FL = ((rt_int)3LL);
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_E_263))).f_NAME, rt_str("ZEROS", 5)))
{
((*(R17 *)rt_nil_check(l_E_263))).f_FL = ((rt_int)4LL);
}
else
{
((*(R17 *)rt_nil_check(l_E_263))).f_FL = ((rt_int)5LL);
}
r_SKIP();
((*(R17 *)rt_nil_check(l_E_263))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
}
{ R17 * rv264 = l_E_263;
return rv264; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_VARIANT_PACKING(void) { RT_B_TICK(); 
R17 * l_V_265; memset(&l_V_265, 0, sizeof l_V_265);
l_V_265 = r_NEW_NODE(g_N_VPACK, r_LINE_NOW());
R17 * l_HEAD_266; memset(&l_HEAD_266, 0, sizeof l_HEAD_266);
l_HEAD_266 = NULL;
R17 * l_TAIL_267; memset(&l_TAIL_267, 0, sizeof l_TAIL_267);
l_TAIL_267 = NULL;
r_EXPECT(rt_str("SELECT", 6));
S_R9(&((*(R17 *)rt_nil_check(l_V_265))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end268;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_V_265))).f_IV = ((rt_int)1LL);
if ((!r_IS(rt_str("END", 3))))
{
((*(R17 *)rt_nil_check(l_V_265))).f_B = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_265))).f_B))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
}
else
{
{
R17 * l_S_269; memset(&l_S_269, 0, sizeof l_S_269);
l_S_269 = r_NEW_NODE(g_N_VPSPEC, r_LINE_NOW());
R17 * l_LH_270; memset(&l_LH_270, 0, sizeof l_LH_270);
l_LH_270 = NULL;
R17 * l_LT_271; memset(&l_LT_271, 0, sizeof l_LT_271);
l_LT_271 = NULL;
R17 * l_PH_272; memset(&l_PH_272, 0, sizeof l_PH_272);
l_PH_272 = NULL;
R17 * l_PT_273; memset(&l_PT_273, 0, sizeof l_PT_273);
l_PT_273 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_270, &l_LT_271);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end274;
} L_end274: ;
r_EXPECT(rt_str("-->", 3));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end275;
{
r_ADD_LIST(r_PARSE_PACKING_SPEC(), &l_PH_272, &l_PT_273);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end275: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_S_269))).f_A = l_LH_270;
((*(R17 *)rt_nil_check(l_S_269))).f_B = l_PH_272;
r_ADD_LIST(l_S_269, &l_HEAD_266, &l_TAIL_267);
}
}
}
RT_B_TICK();
} L_end268: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
((*(R17 *)rt_nil_check(l_V_265))).f_A = l_HEAD_266;
{ R17 * rv276 = l_V_265;
return rv276; }
rt_raise(RT_X_INIT);
}
static R9 r_GEN_NAME(void) { RT_B_TICK(); 
R9 l_T_277; memset(&l_T_277, 0, sizeof l_T_277);
S_R9(&l_T_277, (r_CUR()).f_TX, 0);
r_SKIP();
if (((l_T_277).f_LEN == ((rt_int)1LL)))
{
{ R9 rv278 = r_NO_TEXT();
return rv278; }
}
{ R9 rv279 = r_MKN(rt_b_slice(r_STR(l_T_277, (l_T_277).f_LEN), ((rt_int)1LL), rt_sub((l_T_277).f_LEN, ((rt_int)1LL))));
return rv279; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TYPE_ARG(void) { RT_B_TICK(); 
R17 * l_N_280; memset(&l_N_280, 0, sizeof l_N_280);
if (r_IS_KIND(g_K_GEN))
{
{
R9 l_T_281; memset(&l_T_281, 0, sizeof l_T_281);
S_R9(&l_T_281, (r_CUR()).f_TX, 0);
if (((l_T_281).f_LEN == ((rt_int)1LL)))
{
r_SKIP();
{ R17 * rv282 = r_NEW_NODE(g_N_DONTCARE, r_LINE_NOW());
return rv282; }
}
}
l_N_280 = r_NEW_NODE(g_TS_GEN, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_N_280))).f_NAME, r_GEN_NAME(), 0);
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R17 *)rt_nil_check(l_N_280))).f_C = r_PARSE_REP();
}
{ R17 * rv283 = l_N_280;
return rv283; }
}
if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R17 * rv284 = r_NEW_NODE(g_N_ANY, r_LINE_NOW());
return rv284; }
}
if ((r_IS(rt_str("ARRAY", 5)) || r_IS(rt_str("RECORD", 6))))
{
{ R17 * rv285 = r_PARSE_TYPE_SPEC();
return rv285; }
}
if ((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM)))
{
{ R17 * rv286 = r_PARSE_TYPE_SPEC();
return rv286; }
}
l_N_280 = r_PARSE_EXPR();
if ((r_IS(rt_str("REP", 3)) || r_IS(rt_str("[", 1))))
{
{ R17 * rv287 = r_TYPE_SPEC_TAIL(r_EXPR_TO_TS(l_N_280));
return rv287; }
}
{ R17 * rv288 = l_N_280;
return rv288; }
rt_raise(RT_X_INIT);
}
static R17 * r_EXPR_TO_TS(R17 * p_E) { RT_B_TICK(); 
R17 * l_N_289; memset(&l_N_289, 0, sizeof l_N_289);
if ((((((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_NAME) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_ARRAY)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_RECORD)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_ENUM)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN)))
{
{ R17 * rv290 = p_E;
return rv290; }
}
l_N_289 = r_NEW_NODE(g_TS_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME))
{
S_R9(&((*(R17 *)rt_nil_check(l_N_289))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
{ R17 * rv291 = l_N_289;
return rv291; }
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
S_R9(&((*(R17 *)rt_nil_check(l_N_289))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_289))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_A;
{ R17 * rv292 = l_N_289;
return rv292; }
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD))
{
((*(R17 *)rt_nil_check(l_N_289))).f_FL = ((rt_int)3LL);
((*(R17 *)rt_nil_check(l_N_289))).f_E = p_E;
{ R17 * rv293 = l_N_289;
return rv293; }
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_SUBSTR))
{
l_N_289 = r_EXPR_TO_TS(((*(R17 *)rt_nil_check(p_E))).f_A);
if (((!(((*(R17 *)rt_nil_check(l_N_289))).f_KIND == g_TS_NAME)) || (!(((*(R17 *)rt_nil_check(l_N_289))).f_B == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type specification expected", 29));
}
((*(R17 *)rt_nil_check(l_N_289))).f_B = r_NEW_NODE(g_N_RANGE, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_289))).f_B))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_B;
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_289))).f_B))).f_B = ((*(R17 *)rt_nil_check(p_E))).f_C;
{ R17 * rv294 = l_N_289;
return rv294; }
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
{ R17 * rv295 = p_N;
return rv295; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TYPE_SPEC(void) { RT_B_TICK(); 
R17 * l_N_296; memset(&l_N_296, 0, sizeof l_N_296);
R17 * l_HEAD_297; memset(&l_HEAD_297, 0, sizeof l_HEAD_297);
l_HEAD_297 = NULL;
R17 * l_TAIL_298; memset(&l_TAIL_298, 0, sizeof l_TAIL_298);
l_TAIL_298 = NULL;
rt_int l_LINE_299; memset(&l_LINE_299, 0, sizeof l_LINE_299);
l_LINE_299 = r_LINE_NOW();
if (r_ACCEPT(rt_str("ARRAY", 5)))
{
l_N_296 = r_NEW_NODE(g_TS_ARRAY, l_LINE_299);
r_EXPECT(rt_str("[", 1));
for (;;) {
{
{
R17 * l_R_301; memset(&l_R_301, 0, sizeof l_R_301);
l_R_301 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_R_301))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_R_301))).f_B = r_PARSE_EXPR();
r_ADD_LIST(l_R_301, &l_HEAD_297, &l_TAIL_298);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end300;
} L_end300: ;
r_EXPECT(rt_str("]", 1));
((*(R17 *)rt_nil_check(l_N_296))).f_A = l_HEAD_297;
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R17 *)rt_nil_check(l_N_296))).f_D = r_PARSE_REP();
}
r_EXPECT(rt_str("OF", 2));
((*(R17 *)rt_nil_check(l_N_296))).f_C = r_PARSE_TYPE_SPEC();
{ R17 * rv302 = l_N_296;
return rv302; }
}
if (r_ACCEPT(rt_str("RECORD", 6)))
{
l_N_296 = r_NEW_NODE(g_TS_RECORD, l_LINE_299);
((*(R17 *)rt_nil_check(l_N_296))).f_A = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("RECORD", 6));
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R17 *)rt_nil_check(l_N_296))).f_D = r_PARSE_REP();
}
{ R17 * rv303 = l_N_296;
return rv303; }
}
if (r_IS_KIND(g_K_GEN))
{
{ R17 * rv304 = r_PARSE_TYPE_ARG();
return rv304; }
}
if (r_IS(rt_str("(", 1)))
{
l_N_296 = r_NEW_NODE(g_TS_ENUM, l_LINE_299);
((*(R17 *)rt_nil_check(l_N_296))).f_A = r_PARSE_LITERALS();
{ R17 * rv305 = r_TYPE_SPEC_TAIL(l_N_296);
return rv305; }
}
l_N_296 = r_NEW_NODE(g_TS_NAME, l_LINE_299);
S_R9(&((*(R17 *)rt_nil_check(l_N_296))).f_NAME, r_IDENT(), 0);
if ((r_IS(rt_str(".", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
{
R17 * l_X_306; memset(&l_X_306, 0, sizeof l_X_306);
l_X_306 = r_NEW_NODE(g_N_NAME, l_LINE_299);
S_R9(&((*(R17 *)rt_nil_check(l_X_306))).f_NAME, ((*(R17 *)rt_nil_check(l_N_296))).f_NAME, 0);
for (;;) {
if ((!((r_IS(rt_str(".", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID))))) goto L_end307;
{
r_SKIP();
{
R17 * l_F_308; memset(&l_F_308, 0, sizeof l_F_308);
l_F_308 = r_NEW_NODE(g_N_FIELD, l_LINE_299);
((*(R17 *)rt_nil_check(l_F_308))).f_A = l_X_306;
S_R9(&((*(R17 *)rt_nil_check(l_F_308))).f_NAME, r_IDENT(), 0);
l_X_306 = l_F_308;
}
}
RT_B_TICK();
} L_end307: ;
((*(R17 *)rt_nil_check(l_N_296))).f_FL = ((rt_int)3LL);
((*(R17 *)rt_nil_check(l_N_296))).f_E = l_X_306;
{ R17 * rv309 = r_TYPE_SPEC_TAIL(l_N_296);
return rv309; }
}
}
if ((r_TEQS(((*(R17 *)rt_nil_check(l_N_296))).f_NAME, rt_str("ENUM", 4)) || r_TEQS(((*(R17 *)rt_nil_check(l_N_296))).f_NAME, rt_str("UNORDERED", 9))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_N_296))).f_NAME, rt_str("UNORDERED", 9)))
{
((*(R17 *)rt_nil_check(l_N_296))).f_IV = ((rt_int)1LL);
}
((*(R17 *)rt_nil_check(l_N_296))).f_KIND = g_TS_ENUM;
((*(R17 *)rt_nil_check(l_N_296))).f_A = r_PARSE_LITERALS();
{ R17 * rv310 = r_TYPE_SPEC_TAIL(l_N_296);
return rv310; }
}
if ((r_IS(rt_str("(", 1)) && (!r_RANGE_AHEAD())))
{
r_SKIP();
for (;;) {
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_N_296))).f_NAME, rt_str("PTR", 3)))
{
r_ADD_LIST(r_PARSE_TYPE_SPEC(), &l_HEAD_297, &l_TAIL_298);
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_297, &l_TAIL_298);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end311;
} L_end311: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_N_296))).f_A = l_HEAD_297;
}
{ R17 * rv312 = r_TYPE_SPEC_TAIL(l_N_296);
return rv312; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_LITERALS(void) { RT_B_TICK(); 
R17 * l_HEAD_313; memset(&l_HEAD_313, 0, sizeof l_HEAD_313);
l_HEAD_313 = NULL;
R17 * l_TAIL_314; memset(&l_TAIL_314, 0, sizeof l_TAIL_314);
l_TAIL_314 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_L_316; memset(&l_L_316, 0, sizeof l_L_316);
l_L_316 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
if ((!((r_IS_KIND(g_K_ENUM) || r_IS_KIND(g_K_ID)))))
{
r_FAIL(r_LINE_NOW(), rt_str("an enumerated literal expected", 30));
}
S_R9(&((*(R17 *)rt_nil_check(l_L_316))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_ADD_LIST(l_L_316, &l_HEAD_313, &l_TAIL_314);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end315;
} L_end315: ;
r_EXPECT(rt_str(")", 1));
{ R17 * rv317 = l_HEAD_313;
return rv317; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_FIELDS(void) { RT_B_TICK(); 
R17 * l_HEAD_318; memset(&l_HEAD_318, 0, sizeof l_HEAD_318);
l_HEAD_318 = NULL;
R17 * l_TAIL_319; memset(&l_TAIL_319, 0, sizeof l_TAIL_319);
l_TAIL_319 = NULL;
for (;;) {
{
if (r_IS(rt_str("VAR", 3)))
{
{
R17 * l_F_321; memset(&l_F_321, 0, sizeof l_F_321);
l_F_321 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
r_SKIP();
((*(R17 *)rt_nil_check(l_F_321))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_F_321))).f_B = r_PARSE_TYPE_SPEC();
if ((!r_ACCEPT(rt_str(";", 1))))
{
r_EXPECT(rt_str(",", 1));
}
r_ADD_LIST(l_F_321, &l_HEAD_318, &l_TAIL_319);
}
}
else if (r_IS(rt_str("SELECT", 6)))
{
{
R17 * l_V_322; memset(&l_V_322, 0, sizeof l_V_322);
l_V_322 = r_NEW_NODE(g_N_VARIANT, r_LINE_NOW());
R17 * l_VH_323; memset(&l_VH_323, 0, sizeof l_VH_323);
l_VH_323 = NULL;
R17 * l_VT_324; memset(&l_VT_324, 0, sizeof l_VT_324);
l_VT_324 = NULL;
r_SKIP();
S_R9(&((*(R17 *)rt_nil_check(l_V_322))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end325;
{
{
R17 * l_S_326; memset(&l_S_326, 0, sizeof l_S_326);
l_S_326 = r_NEW_NODE(g_N_VARSPEC, r_LINE_NOW());
R17 * l_LH_327; memset(&l_LH_327, 0, sizeof l_LH_327);
l_LH_327 = NULL;
R17 * l_LT_328; memset(&l_LT_328, 0, sizeof l_LT_328);
l_LT_328 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_327, &l_LT_328);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end329;
} L_end329: ;
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_S_326))).f_A = l_LH_327;
((*(R17 *)rt_nil_check(l_S_326))).f_B = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_S_326, &l_VH_323, &l_VT_324);
}
}
RT_B_TICK();
} L_end325: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_V_322))).f_A = l_VH_323;
r_ADD_LIST(l_V_322, &l_HEAD_318, &l_TAIL_319);
}
}
else
{
goto L_end320;
}
}
RT_B_TICK();
} L_end320: ;
{ R17 * rv330 = l_HEAD_318;
return rv330; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_RANGE(void) { RT_B_TICK(); 
R17 * l_R_331; memset(&l_R_331, 0, sizeof l_R_331);
l_R_331 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_R_331))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("[", 1));
}
((*(R17 *)rt_nil_check(l_R_331))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_R_331))).f_B = r_PARSE_EXPR();
if (r_ACCEPT(rt_str(")", 1)))
{
((*(R17 *)rt_nil_check(l_R_331))).f_IV = rt_add(((*(R17 *)rt_nil_check(l_R_331))).f_IV, ((rt_int)2LL));
}
else
{
r_EXPECT(rt_str("]", 1));
}
{ R17 * rv332 = l_R_331;
return rv332; }
rt_raise(RT_X_INIT);
}
static rt_int r_RANGE_AHEAD(void) { RT_B_TICK(); 
rt_int l_DEPTH_333; memset(&l_DEPTH_333, 0, sizeof l_DEPTH_333);
l_DEPTH_333 = ((rt_int)0LL);
rt_int l_K_334; memset(&l_K_334, 0, sizeof l_K_334);
l_K_334 = ((rt_int)0LL);
for (;;) {
{
{
R10 l_T_336; memset(&l_T_336, 0, sizeof l_T_336);
S_R10(&l_T_336, r_AHEAD(l_K_334), 0);
if (((l_T_336).f_KIND == g_K_EOF))
{
{ rt_int rv337 = 0;
return rv337; }
}
if (((l_T_336).f_KIND == g_K_SYM))
{
if ((r_TEQS((l_T_336).f_TX, rt_str("(", 1)) || r_TEQS((l_T_336).f_TX, rt_str("[", 1))))
{
l_DEPTH_333 = rt_add(l_DEPTH_333, ((rt_int)1LL));
}
else if ((r_TEQS((l_T_336).f_TX, rt_str(")", 1)) || r_TEQS((l_T_336).f_TX, rt_str("]", 1))))
{
l_DEPTH_333 = rt_sub(l_DEPTH_333, ((rt_int)1LL));
if ((l_DEPTH_333 == ((rt_int)0LL)))
{
{ rt_int rv338 = 0;
return rv338; }
}
}
else if (((l_DEPTH_333 == ((rt_int)1LL)) && ((r_TEQS((l_T_336).f_TX, rt_str(":", 1)) || r_TEQS((l_T_336).f_TX, rt_str(",", 1))))))
{
{ rt_int rv339 = r_TEQS((l_T_336).f_TX, rt_str(":", 1));
return rv339; }
}
}
}
l_K_334 = rt_add(l_K_334, ((rt_int)1LL));
}
RT_B_TICK();
} L_end335: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_PARAMS(void) { RT_B_TICK(); 
R17 * l_HEAD_340; memset(&l_HEAD_340, 0, sizeof l_HEAD_340);
l_HEAD_340 = NULL;
R17 * l_TAIL_341; memset(&l_TAIL_341, 0, sizeof l_TAIL_341);
l_TAIL_341 = NULL;
rt_int l_MODE_342; memset(&l_MODE_342, 0, sizeof l_MODE_342);
l_MODE_342 = g_M_IN;
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end343;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_342 = rt_add(l_MODE_342, ((rt_int)1LL));
}
else
{
{
R17 * l_NAMES_344; memset(&l_NAMES_344, 0, sizeof l_NAMES_344);
l_NAMES_344 = r_IDENT_LIST();
R17 * l_TS_345; memset(&l_TS_345, 0, sizeof l_TS_345);
l_TS_345 = NULL;
R17 * l_P_346; memset(&l_P_346, 0, sizeof l_P_346);
l_P_346 = l_NAMES_344;
r_EXPECT(rt_str(":", 1));
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else if ((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))))
{
l_TS_345 = r_PARSE_ROUTINE_SPEC();
}
else
{
l_TS_345 = r_PARSE_TYPE_SPEC();
}
for (;;) {
if ((l_P_346 == NULL)) goto L_end347;
{
{
R17 * l_PN_348; memset(&l_PN_348, 0, sizeof l_PN_348);
l_PN_348 = r_NEW_NODE(g_N_PARAM, ((*(R17 *)rt_nil_check(l_P_346))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_PN_348))).f_NAME, ((*(R17 *)rt_nil_check(l_P_346))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_PN_348))).f_IV = l_MODE_342;
((*(R17 *)rt_nil_check(l_PN_348))).f_B = l_TS_345;
r_ADD_LIST(l_PN_348, &l_HEAD_340, &l_TAIL_341);
}
l_P_346 = ((*(R17 *)rt_nil_check(l_P_346))).f_NEXT;
}
RT_B_TICK();
} L_end347: ;
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end343: ;
r_EXPECT(rt_str(")", 1));
{ R17 * rv349 = l_HEAD_340;
return rv349; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TEMPLATE(rt_int p_FUNC) { RT_B_TICK(); 
R17 * l_R_350; memset(&l_R_350, 0, sizeof l_R_350);
l_R_350 = r_NEW_NODE(g_TS_ROUTINE, r_LINE_NOW());
R17 * l_HEAD_351; memset(&l_HEAD_351, 0, sizeof l_HEAD_351);
l_HEAD_351 = NULL;
R17 * l_TAIL_352; memset(&l_TAIL_352, 0, sizeof l_TAIL_352);
l_TAIL_352 = NULL;
rt_int l_MODE_353; memset(&l_MODE_353, 0, sizeof l_MODE_353);
l_MODE_353 = g_M_IN;
if (p_FUNC)
{
((*(R17 *)rt_nil_check(l_R_350))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end354;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_353 = rt_add(l_MODE_353, ((rt_int)1LL));
if (r_IS(rt_str(")", 1)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_350))).f_LINE, rt_str("a # must not be the last symbol of a proc-template (5.1)", 56));
}
}
else
{
{
R17 * l_P_355; memset(&l_P_355, 0, sizeof l_P_355);
l_P_355 = r_NEW_NODE(g_N_PARAM, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_P_355))).f_IV = l_MODE_353;
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else
{
((*(R17 *)rt_nil_check(l_P_355))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_P_355, &l_HEAD_351, &l_TAIL_352);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end354: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_R_350))).f_A = l_HEAD_351;
if (r_ACCEPT(rt_str("RETURNS", 7)))
{
((*(R17 *)rt_nil_check(l_R_350))).f_IV = ((rt_int)1LL);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_R_350))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R17 *)rt_nil_check(l_R_350))).f_B = r_PARSE_TYPE_SPEC();
}
}
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R17 *)rt_nil_check(l_R_350))).f_D = r_PAREN_IDENTS();
}
{ R17 * rv356 = l_R_350;
return rv356; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ROUTINE_SPEC(void) { RT_B_TICK(); 
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
{ R17 * rv357 = r_PARSE_TEMPLATE(1);
return rv357; }
}
r_EXPECT(rt_str("PROCEDURE", 9));
{ R17 * rv358 = r_PARSE_TEMPLATE(0);
return rv358; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_WHERE(void) { RT_B_TICK(); 
R17 * l_HEAD_359; memset(&l_HEAD_359, 0, sizeof l_HEAD_359);
l_HEAD_359 = NULL;
R17 * l_TAIL_360; memset(&l_TAIL_360, 0, sizeof l_TAIL_360);
l_TAIL_360 = NULL;
for (;;) {
{
{
R17 * l_N_362; memset(&l_N_362, 0, sizeof l_N_362);
l_N_362 = r_NEW_NODE(g_N_NEEDS, r_LINE_NOW());
R17 * l_TH_363; memset(&l_TH_363, 0, sizeof l_TH_363);
l_TH_363 = NULL;
R17 * l_TT_364; memset(&l_TT_364, 0, sizeof l_TT_364);
l_TT_364 = NULL;
S_R9(&((*(R17 *)rt_nil_check(l_N_362))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("NEEDS", 5));
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_T_366; memset(&l_T_366, 0, sizeof l_T_366);
l_T_366 = r_NEW_NODE(g_N_TEMPLATE, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_T_366))).f_NAME, ((*(R17 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_T_366))).f_B = r_PARSE_TEMPLATE(0);
r_ADD_LIST(l_T_366, &l_TH_363, &l_TT_364);
}
if (r_ACCEPT(rt_str(";", 1)))
{
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end365;
} L_end365: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_N_362))).f_A = l_TH_363;
r_ADD_LIST(l_N_362, &l_HEAD_359, &l_TAIL_360);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end361;
} L_end361: ;
{ R17 * rv367 = l_HEAD_359;
return rv367; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ROUTINE(void) { RT_B_TICK(); 
R17 * l_R_368; memset(&l_R_368, 0, sizeof l_R_368);
l_R_368 = r_NEW_NODE(g_N_ROUTINE, r_LINE_NOW());
R17 * l_H_369; memset(&l_H_369, 0, sizeof l_H_369);
l_H_369 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
if (r_IS_TARGET_DECL())
{
r_SKIP();
((*(R17 *)rt_nil_check(l_R_368))).f_FL = ((rt_int)2LL);
}
if (r_ACCEPT(rt_str("INLINE", 6)))
{
if ((((*(R17 *)rt_nil_check(l_R_368))).f_FL == ((rt_int)2LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_368))).f_LINE, rt_str("target routines cannot be INLINE (4.8.2)", 40));
}
((*(R17 *)rt_nil_check(l_R_368))).f_FL = rt_add(((*(R17 *)rt_nil_check(l_R_368))).f_FL, ((rt_int)1LL));
}
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
((*(R17 *)rt_nil_check(l_R_368))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
S_R9(&((*(R17 *)rt_nil_check(l_R_368))).f_NAME, ((*(R17 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (r_IS(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_R_368))).f_A = r_PARSE_PARAMS();
}
if ((((*(R17 *)rt_nil_check(l_R_368))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("RETURNS", 7));
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_R_368))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R17 *)rt_nil_check(l_R_368))).f_B = r_PARSE_TYPE_SPEC();
}
}
for (;;) {
{
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R17 *)rt_nil_check(l_H_369))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R17 *)rt_nil_check(l_R_368))).f_E = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("WHERE", 5)))
{
((*(R17 *)rt_nil_check(l_H_369))).f_B = r_PARSE_WHERE();
}
else
{
goto L_end370;
}
}
RT_B_TICK();
} L_end370: ;
((*(R17 *)rt_nil_check(l_R_368))).f_D = l_H_369;
r_EXPECT(rt_str(";", 1));
if ((((*(R17 *)rt_nil_check(l_R_368))).f_FL >= ((rt_int)2LL)))
{
r_EXPECT(rt_str("DYNSIZE", 7));
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_H_369))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
r_EXPECT(rt_str(";", 1));
for (;;) {
if ((r_IS(rt_str("END", 3)) && ((r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PROCEDURE", 9)) || r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("FUNCTION", 8)))))) goto L_end371;
{
r_SKIP();
}
RT_B_TICK();
} L_end371: ;
}
else
{
((*(R17 *)rt_nil_check(l_R_368))).f_C = r_PARSE_CLOSED_BODY();
}
r_EXPECT(rt_str("END", 3));
if ((((*(R17 *)rt_nil_check(l_R_368))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("FUNCTION", 8));
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
if ((!r_TEQ(((*(R17 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, ((*(R17 *)rt_nil_check(l_R_368))).f_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), ((*(R17 *)rt_nil_check(l_R_368))).f_NAME);
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv372 = l_R_368;
return rv372; }
rt_raise(RT_X_INIT);
}
static R17 * r_BIN_NODE(R9 p_OP, rt_int p_LINE, R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_N_373; memset(&l_N_373, 0, sizeof l_N_373);
l_N_373 = r_NEW_NODE(g_N_BINOP, p_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_373))).f_NAME, p_OP, 0);
((*(R17 *)rt_nil_check(l_N_373))).f_A = p_A;
((*(R17 *)rt_nil_check(l_N_373))).f_B = p_B;
{ R17 * rv374 = l_N_373;
return rv374; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_EXPR(void) { RT_B_TICK(); 
R17 * l_E_375; memset(&l_E_375, 0, sizeof l_E_375);
l_E_375 = r_PARSE_SIMPLE();
if (((((r_IS(rt_str("ROUNDED", 7)) || r_IS(rt_str("TRUNCATED", 9))) || r_IS(rt_str("NATIVE_R", 8))) || r_IS(rt_str("NATIVE_T", 8))) || r_ROUNDING_AHEAD()))
{
{
R17 * l_Q_376; memset(&l_Q_376, 0, sizeof l_Q_376);
l_Q_376 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_Q_376))).f_NAME, r_IDENT(), 0);
((*(R17 *)rt_nil_check(l_Q_376))).f_A = l_E_375;
l_E_375 = l_Q_376;
}
}
if ((r_IS(rt_str("WITH", 4)) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PREC", 4))))
{
{
R17 * l_Q_377; memset(&l_Q_377, 0, sizeof l_Q_377);
l_Q_377 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
r_SKIP();
r_SKIP();
if ((((*(R17 *)rt_nil_check(l_E_375))).f_KIND == g_N_QUAL))
{
l_Q_377 = l_E_375;
}
else
{
((*(R17 *)rt_nil_check(l_Q_377))).f_A = l_E_375;
}
((*(R17 *)rt_nil_check(l_Q_377))).f_B = r_PARSE_SIMPLE();
l_E_375 = l_Q_377;
}
}
{ R17 * rv378 = l_E_375;
return rv378; }
rt_raise(RT_X_INIT);
}
static rt_int r_ROUNDING_AHEAD(void) { RT_B_TICK(); 
R10 l_N_379; memset(&l_N_379, 0, sizeof l_N_379);
S_R10(&l_N_379, r_AHEAD(((rt_int)1LL)), 0);
if ((!r_IS_KIND(g_K_ID)))
{
{ rt_int rv380 = 0;
return rv380; }
}
if ((((((((r_IS(rt_str("CONNECT", 7)) || r_IS(rt_str("SIGNALS", 7))) || r_IS(rt_str("IMPORTS", 7))) || r_IS(rt_str("PRIORITY", 8))) || r_IS(rt_str("WHERE", 5))) || r_IS(rt_str("NEEDS", 5))) || r_IS(rt_str("AS", 2))) || r_IS(rt_str("PREC", 4))))
{
{ rt_int rv381 = 0;
return rv381; }
}
{ rt_int rv382 = (!(((((((r_TOK_IS(l_N_379, rt_str("(", 1)) || r_TOK_IS(l_N_379, rt_str(".", 1))) || r_TOK_IS(l_N_379, rt_str(":=", 2))) || r_TOK_IS(l_N_379, rt_str(":", 1))) || r_TOK_IS(l_N_379, rt_str("$", 1))) || r_TOK_IS(l_N_379, rt_str("@", 1))) || r_TOK_IS(l_N_379, rt_str("[", 1)))));
return rv382; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_SIMPLE(void) { RT_B_TICK(); 
R17 * l_LEFT_383; memset(&l_LEFT_383, 0, sizeof l_LEFT_383);
l_LEFT_383 = r_PARSE_CONJ();
for (;;) {
if ((!((((r_IS(rt_str("OR", 2)) || r_IS(rt_str("!", 1))) || r_IS(rt_str("XOR", 3))) || r_IS(rt_str("->", 2)))))) goto L_end384;
{
{
R10 l_T_385; memset(&l_T_385, 0, sizeof l_T_385);
S_R10(&l_T_385, r_CUR(), 0);
r_SKIP();
l_LEFT_383 = r_BIN_NODE((l_T_385).f_TX, (l_T_385).f_LINE, l_LEFT_383, r_PARSE_CONJ());
}
}
RT_B_TICK();
} L_end384: ;
{ R17 * rv386 = l_LEFT_383;
return rv386; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CONJ(void) { RT_B_TICK(); 
R17 * l_LEFT_387; memset(&l_LEFT_387, 0, sizeof l_LEFT_387);
l_LEFT_387 = r_PARSE_RELATION();
for (;;) {
if ((!((r_IS(rt_str("AND", 3)) || r_IS(rt_str("&", 1)))))) goto L_end388;
{
{
R10 l_T_389; memset(&l_T_389, 0, sizeof l_T_389);
S_R10(&l_T_389, r_CUR(), 0);
r_SKIP();
l_LEFT_387 = r_BIN_NODE((l_T_389).f_TX, (l_T_389).f_LINE, l_LEFT_387, r_PARSE_RELATION());
}
}
RT_B_TICK();
} L_end388: ;
{ R17 * rv390 = l_LEFT_387;
return rv390; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_RELATION(void) { RT_B_TICK(); 
R17 * l_LEFT_391; memset(&l_LEFT_391, 0, sizeof l_LEFT_391);
l_LEFT_391 = r_PARSE_SUM();
for (;;) {
{
{
R10 l_T_393; memset(&l_T_393, 0, sizeof l_T_393);
S_R10(&l_T_393, r_CUR(), 0);
if ((((((r_IS(rt_str("=", 1)) || r_IS(rt_str("<", 1))) || r_IS(rt_str(">", 1))) || r_IS(rt_str("<=", 2))) || r_IS(rt_str(">=", 2))) || r_IS(rt_str("<>", 2))))
{
r_SKIP();
l_LEFT_391 = r_BIN_NODE((l_T_393).f_TX, (l_T_393).f_LINE, l_LEFT_391, r_PARSE_SUM());
}
else if (r_IS(rt_str("IN", 2)))
{
{
R17 * l_N_394; memset(&l_N_394, 0, sizeof l_N_394);
l_N_394 = r_NEW_NODE(g_N_IN, (l_T_393).f_LINE);
r_SKIP();
((*(R17 *)rt_nil_check(l_N_394))).f_A = l_LEFT_391;
((*(R17 *)rt_nil_check(l_N_394))).f_B = r_PARSE_RANGE();
l_LEFT_391 = l_N_394;
}
}
else
{
{ R17 * rv395 = l_LEFT_391;
return rv395; }
}
}
}
RT_B_TICK();
} L_end392: ;
rt_raise(RT_X_INIT);
}
static R17 * r_TRY_SCALED(R17 * p_LEFT, rstr p_OPS) { RT_B_TICK(); 
rt_int l_SAVED_396; memset(&l_SAVED_396, 0, sizeof l_SAVED_396);
l_SAVED_396 = ((*(R7 *)rt_nil_check(g_W))).f_POS;
rt_int l_LINE_397; memset(&l_LINE_397, 0, sizeof l_LINE_397);
l_LINE_397 = r_LINE_NOW();
R17 * l_N_398; memset(&l_N_398, 0, sizeof l_N_398);
if ((!r_IS(rt_str("!", 1))))
{
{ R17 * rv399 = NULL;
return rv399; }
}
{
R10 l_OP_400; memset(&l_OP_400, 0, sizeof l_OP_400);
S_R10(&l_OP_400, r_AHEAD(((rt_int)1LL)), 0);
R9 l_T_401; memset(&l_T_401, 0, sizeof l_T_401);
S_R9(&l_T_401, (l_OP_400).f_TX, 0);
rt_int l_FOUND_402; memset(&l_FOUND_402, 0, sizeof l_FOUND_402);
l_FOUND_402 = 0;
if (((!((l_OP_400).f_KIND == g_K_SYM)) && (!((l_OP_400).f_KIND == g_K_RES))))
{
{ R17 * rv403 = NULL;
return rv403; }
}
{ rt_int it405_lo = ((rt_int)0LL), it405_hi = rt_sub((rt_int)(p_OPS).len, (l_T_401).f_LEN);
for (rt_int it405 = it405_lo; it405 <= it405_hi; it405++) {
{
if (rt_b_eq(rt_b_slice(p_OPS, it405, rt_sub(rt_add(it405, (l_T_401).f_LEN), ((rt_int)1LL))), r_STR(l_T_401, (l_T_401).f_LEN)))
{
if (((((it405 == ((rt_int)0LL)) || rt_b_eq(rt_b_slice(p_OPS, rt_sub(it405, ((rt_int)1LL)), rt_sub(it405, ((rt_int)1LL))), rt_str(" ", 1)))) && (((rt_add(it405, (l_T_401).f_LEN) == (rt_int)(p_OPS).len) || rt_b_eq(rt_b_slice(p_OPS, rt_add(it405, (l_T_401).f_LEN), rt_add(it405, (l_T_401).f_LEN)), rt_str(" ", 1))))))
{
l_FOUND_402 = 1;
}
}
}
RT_B_TICK();
if (it405 == it405_hi) break;
} } L_end404: ;
if ((!l_FOUND_402))
{
{ R17 * rv406 = NULL;
return rv406; }
}
r_SKIP();
r_SKIP();
l_N_398 = r_BIN_NODE(l_T_401, l_LINE_397, p_LEFT, NULL);
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R17 *)rt_nil_check(l_N_398))).f_FL = ((rt_int)2LL);
{ R17 * rv407 = l_N_398;
return rv407; }
}
if (((((r_IS_KIND(g_K_NUM) || r_IS_KIND(g_K_ID)) || r_IS(rt_str("(", 1))) || r_IS(rt_str("-", 1))) || r_IS(rt_str("+", 1))))
{
((*(R17 *)rt_nil_check(l_N_398))).f_D = r_PARSE_SECONDARY();
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R17 *)rt_nil_check(l_N_398))).f_FL = ((rt_int)1LL);
{ R17 * rv408 = l_N_398;
return rv408; }
}
}
((*(R7 *)rt_nil_check(g_W))).f_POS = l_SAVED_396;
{ R17 * rv409 = NULL;
return rv409; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_SUM(void) { RT_B_TICK(); 
R17 * l_LEFT_410; memset(&l_LEFT_410, 0, sizeof l_LEFT_410);
l_LEFT_410 = r_PARSE_TERM();
for (;;) {
{
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("!!", 2))))
{
{
R10 l_T_412; memset(&l_T_412, 0, sizeof l_T_412);
S_R10(&l_T_412, r_CUR(), 0);
r_SKIP();
l_LEFT_410 = r_BIN_NODE((l_T_412).f_TX, (l_T_412).f_LINE, l_LEFT_410, r_PARSE_TERM());
}
}
else
{
{
R17 * l_N_413; memset(&l_N_413, 0, sizeof l_N_413);
l_N_413 = r_TRY_SCALED(l_LEFT_410, rt_str("+ -", 3));
if ((l_N_413 == NULL))
{
{ R17 * rv414 = l_LEFT_410;
return rv414; }
}
((*(R17 *)rt_nil_check(l_N_413))).f_B = r_PARSE_TERM();
l_LEFT_410 = l_N_413;
}
}
}
RT_B_TICK();
} L_end411: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TERM(void) { RT_B_TICK(); 
R17 * l_LEFT_415; memset(&l_LEFT_415, 0, sizeof l_LEFT_415);
l_LEFT_415 = r_PARSE_FACTOR();
for (;;) {
{
if ((((r_IS(rt_str("*", 1)) || r_IS(rt_str("/", 1))) || r_IS(rt_str("//", 2))) || r_IS(rt_str("MOD", 3))))
{
{
R10 l_T_417; memset(&l_T_417, 0, sizeof l_T_417);
S_R10(&l_T_417, r_CUR(), 0);
r_SKIP();
l_LEFT_415 = r_BIN_NODE((l_T_417).f_TX, (l_T_417).f_LINE, l_LEFT_415, r_PARSE_FACTOR());
}
}
else
{
{
R17 * l_N_418; memset(&l_N_418, 0, sizeof l_N_418);
l_N_418 = r_TRY_SCALED(l_LEFT_415, rt_str("* / // MOD", 10));
if ((l_N_418 == NULL))
{
{ R17 * rv419 = l_LEFT_415;
return rv419; }
}
((*(R17 *)rt_nil_check(l_N_418))).f_B = r_PARSE_FACTOR();
l_LEFT_415 = l_N_418;
}
}
}
RT_B_TICK();
} L_end416: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_FACTOR(void) { RT_B_TICK(); 
R17 * l_LEFT_420; memset(&l_LEFT_420, 0, sizeof l_LEFT_420);
l_LEFT_420 = r_PARSE_SECONDARY();
for (;;) {
{
if (r_IS(rt_str("**", 2)))
{
{
R10 l_T_422; memset(&l_T_422, 0, sizeof l_T_422);
S_R10(&l_T_422, r_CUR(), 0);
r_SKIP();
l_LEFT_420 = r_BIN_NODE((l_T_422).f_TX, (l_T_422).f_LINE, l_LEFT_420, r_PARSE_SECONDARY());
}
}
else
{
{
R17 * l_N_423; memset(&l_N_423, 0, sizeof l_N_423);
l_N_423 = r_TRY_SCALED(l_LEFT_420, rt_str("**", 2));
if ((l_N_423 == NULL))
{
{ R17 * rv424 = l_LEFT_420;
return rv424; }
}
((*(R17 *)rt_nil_check(l_N_423))).f_B = r_PARSE_SECONDARY();
l_LEFT_420 = l_N_423;
}
}
}
RT_B_TICK();
} L_end421: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_SECONDARY(void) { RT_B_TICK(); 
R10 l_T_425; memset(&l_T_425, 0, sizeof l_T_425);
S_R10(&l_T_425, r_CUR(), 0);
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("NOT", 3))))
{
{
R17 * l_N_426; memset(&l_N_426, 0, sizeof l_N_426);
l_N_426 = r_NEW_NODE(g_N_UNOP, (l_T_425).f_LINE);
r_SKIP();
S_R9(&((*(R17 *)rt_nil_check(l_N_426))).f_NAME, (l_T_425).f_TX, 0);
((*(R17 *)rt_nil_check(l_N_426))).f_A = r_PARSE_POSTFIX();
{ R17 * rv427 = l_N_426;
return rv427; }
}
}
{ R17 * rv428 = r_PARSE_POSTFIX();
return rv428; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ARGS(R17 * p_N) { RT_B_TICK(); 
R17 * l_HEAD_429; memset(&l_HEAD_429, 0, sizeof l_HEAD_429);
l_HEAD_429 = NULL;
R17 * l_TAIL_430; memset(&l_TAIL_430, 0, sizeof l_TAIL_430);
l_TAIL_430 = NULL;
rt_int l_GROUP_431; memset(&l_GROUP_431, 0, sizeof l_GROUP_431);
l_GROUP_431 = ((rt_int)0LL);
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end432;
{
if (r_ACCEPT(rt_str("#", 1)))
{
switch (l_GROUP_431) {
case 0:
{
((*(R17 *)rt_nil_check(p_N))).f_A = l_HEAD_429;
}
break;
case 1:
{
((*(R17 *)rt_nil_check(p_N))).f_B = l_HEAD_429;
}
break;
default:
{
r_FAIL(((*(R17 *)rt_nil_check(p_N))).f_LINE, rt_str("too many # in an argument list", 30));
}
break;
}
l_GROUP_431 = rt_add(l_GROUP_431, ((rt_int)1LL));
l_HEAD_429 = NULL;
l_TAIL_430 = NULL;
}
else
{
if ((l_GROUP_431 == ((rt_int)0LL)))
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_429, &l_TAIL_430);
if ((r_IS(rt_str("RETURNS", 7)) && (((*(R17 *)rt_nil_check(l_TAIL_430))).f_KIND == g_N_APPLY)))
{
r_SKIP();
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_TAIL_430))).f_E = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
}
else
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_429, &l_TAIL_430);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
RT_B_TICK();
} L_end432: ;
r_EXPECT(rt_str(")", 1));
switch (l_GROUP_431) {
case 0:
{
((*(R17 *)rt_nil_check(p_N))).f_A = l_HEAD_429;
}
break;
case 1:
{
((*(R17 *)rt_nil_check(p_N))).f_B = l_HEAD_429;
}
break;
default:
{
((*(R17 *)rt_nil_check(p_N))).f_C = l_HEAD_429;
}
break;
}
{ R17 * rv433 = p_N;
return rv433; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_POSTFIX(void) { RT_B_TICK(); 
R17 * l_E_434; memset(&l_E_434, 0, sizeof l_E_434);
l_E_434 = r_PARSE_ATOM();
R17 * l_N_435; memset(&l_N_435, 0, sizeof l_N_435);
for (;;) {
{
{
rt_int l_LINE_437; memset(&l_LINE_437, 0, sizeof l_LINE_437);
l_LINE_437 = r_LINE_NOW();
if ((r_IS(rt_str("(", 1)) && (((*(R17 *)rt_nil_check(l_E_434))).f_KIND == g_N_ENUMLIT)))
{
((*(R17 *)rt_nil_check(l_E_434))).f_KIND = g_N_NAME;
}
if ((r_IS(rt_str("(", 1)) && (((*(R17 *)rt_nil_check(l_E_434))).f_KIND == g_N_NAME)))
{
((*(R17 *)rt_nil_check(l_E_434))).f_KIND = g_N_APPLY;
l_E_434 = r_PARSE_ARGS(l_E_434);
}
else if (r_IS(rt_str("(", 1)))
{
l_N_435 = r_NEW_NODE(g_N_INDEX, l_LINE_437);
l_N_435 = r_PARSE_ARGS(l_N_435);
((*(R17 *)rt_nil_check(l_N_435))).f_B = ((*(R17 *)rt_nil_check(l_N_435))).f_A;
((*(R17 *)rt_nil_check(l_N_435))).f_A = l_E_434;
l_E_434 = l_N_435;
}
else if (r_ACCEPT(rt_str(".", 1)))
{
l_N_435 = r_NEW_NODE(g_N_FIELD, l_LINE_437);
((*(R17 *)rt_nil_check(l_N_435))).f_A = l_E_434;
S_R9(&((*(R17 *)rt_nil_check(l_N_435))).f_NAME, r_IDENT(), 0);
l_E_434 = l_N_435;
}
else if (r_ACCEPT(rt_str("@", 1)))
{
l_N_435 = r_NEW_NODE(g_N_DEREF, l_LINE_437);
((*(R17 *)rt_nil_check(l_N_435))).f_A = l_E_434;
l_E_434 = l_N_435;
}
else if ((r_IS(rt_str("[", 1)) && (!r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("]", 1)))))
{
r_SKIP();
l_N_435 = r_NEW_NODE(g_N_SUBSTR, l_LINE_437);
((*(R17 *)rt_nil_check(l_N_435))).f_A = l_E_434;
((*(R17 *)rt_nil_check(l_N_435))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_435))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str("]", 1));
l_E_434 = l_N_435;
}
else
{
{ R17 * rv438 = l_E_434;
return rv438; }
}
}
}
RT_B_TICK();
} L_end436: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_BITS(rt_int p_BITS_PER, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_AT_439; memset(&l_AT_439, 0, sizeof l_AT_439);
l_AT_439 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R17 * l_N_440; memset(&l_N_440, 0, sizeof l_N_440);
l_N_440 = r_NEW_NODE(g_N_BITS, p_LINE);
R9 l_R_441; memset(&l_R_441, 0, sizeof l_R_441);
if ((!r_IS_KIND(g_K_STR)))
{
r_FAIL(p_LINE, rt_str("a quoted bitstring expected", 27));
}
for (;;) {
if ((!r_IS_KIND(g_K_STR))) goto L_end442;
{
{
R9 l_T_443; memset(&l_T_443, 0, sizeof l_T_443);
S_R9(&l_T_443, (r_CUR()).f_TX, 0);
rstr l_S_444; memset(&l_S_444, 0, sizeof l_S_444);
l_S_444 = rt_b_str_new((l_T_443).f_LEN, 0);
rt_b_assign(&l_S_444, r_STR(l_T_443, (l_T_443).f_LEN));
{ rt_int it446_lo = ((rt_int)0LL), it446_hi = rt_sub((l_T_443).f_LEN, ((rt_int)1LL));
for (rt_int it446 = it446_lo; it446 <= it446_hi; it446++) {
{
if ((!rt_b_eq(rt_b_slice(l_S_444, it446, it446), rt_str(" ", 1))))
{
{
rt_int l_C_447; memset(&l_C_447, 0, sizeof l_C_447);
l_C_447 = r_CODE_OF(rt_b_slice(l_S_444, it446, it446));
rt_int l_V_448; memset(&l_V_448, 0, sizeof l_V_448);
l_V_448 = rt_sub(l_C_447, ((rt_int)48LL));
rt_int l_P_449; memset(&l_P_449, 0, sizeof l_P_449);
l_P_449 = ((rt_int)1LL);
if ((l_C_447 >= ((rt_int)65LL)))
{
l_V_448 = rt_sub(l_C_447, ((rt_int)55LL));
}
{ rt_int it451_lo = ((rt_int)1LL), it451_hi = p_BITS_PER;
for (rt_int it451 = it451_lo; it451 <= it451_hi; it451++) {
{
l_P_449 = rt_mul(l_P_449, ((rt_int)2LL));
}
RT_B_TICK();
if (it451 == it451_hi) break;
} } L_end450: ;
if (((l_V_448 < ((rt_int)0LL)) || (l_V_448 >= l_P_449)))
{
r_FAIL(p_LINE, rt_str("a bad digit in a bitstring literal", 34));
}
{ rt_int it453_lo = ((rt_int)1LL), it453_hi = p_BITS_PER;
for (rt_int it453 = it453_lo; it453 <= it453_hi; it453++) {
{
l_P_449 = rt_quot(l_P_449, ((rt_int)2LL));
if ((rt_rem((rt_quot(l_V_448, l_P_449)), ((rt_int)2LL)) == ((rt_int)1LL)))
{
S_R9(&l_R_441, r_MK(rt_str("1", 1)), 0);
}
else
{
S_R9(&l_R_441, r_MK(rt_str("0", 1)), 0);
}
}
RT_B_TICK();
if (it453 == it453_hi) break;
} } L_end452: ;
}
}
}
RT_B_TICK();
if (it446 == it446_hi) break;
} } L_end445: ;
}
r_SKIP();
}
RT_B_TICK();
} L_end442: ;
S_R9(&((*(R17 *)rt_nil_check(l_N_440))).f_NAME, ({ R9 rc454; memset(&rc454, 0, sizeof rc454);  rc454.f_AT = l_AT_439; rc454.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_439); rc454.f_H = rt_neg(((rt_int)1LL)); rc454; }), 0);
{ R17 * rv455 = l_N_440;
return rv455; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ATOM(void) { RT_B_TICK(); 
R10 l_T_456; memset(&l_T_456, 0, sizeof l_T_456);
S_R10(&l_T_456, r_CUR(), 0);
R17 * l_N_457; memset(&l_N_457, 0, sizeof l_N_457);
if (((l_T_456).f_KIND == g_K_NUM))
{
l_N_457 = r_NEW_NODE(g_N_INT, (l_T_456).f_LINE);
((*(R17 *)rt_nil_check(l_N_457))).f_IV = (l_T_456).f_IV;
S_R9(&((*(R17 *)rt_nil_check(l_N_457))).f_NAME, (l_T_456).f_TX, 0);
r_SKIP();
{ R17 * rv458 = l_N_457;
return rv458; }
}
if ((((l_T_456).f_KIND == g_K_REAL) || ((l_T_456).f_KIND == g_K_FIX)))
{
l_N_457 = r_NEW_NODE(g_N_REAL, (l_T_456).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_457))).f_NAME, (l_T_456).f_TX, 0);
if (((l_T_456).f_KIND == g_K_FIX))
{
((*(R17 *)rt_nil_check(l_N_457))).f_FL = ((rt_int)1LL);
((*(R17 *)rt_nil_check(l_N_457))).f_IV = (l_T_456).f_IV;
}
r_SKIP();
{ R17 * rv459 = l_N_457;
return rv459; }
}
if (((l_T_456).f_KIND == g_K_GEN))
{
{ R17 * rv460 = r_PARSE_TYPE_ARG();
return rv460; }
}
if (((r_IS(rt_str("BIN", 3)) || r_IS(rt_str("OCT", 3))) || r_IS(rt_str("HEX", 3))))
{
r_SKIP();
if (r_TOK_IS(l_T_456, rt_str("BIN", 3)))
{
{ R17 * rv461 = r_PARSE_BITS(((rt_int)1LL), (l_T_456).f_LINE);
return rv461; }
}
else if (r_TOK_IS(l_T_456, rt_str("OCT", 3)))
{
{ R17 * rv462 = r_PARSE_BITS(((rt_int)3LL), (l_T_456).f_LINE);
return rv462; }
}
{ R17 * rv463 = r_PARSE_BITS(((rt_int)4LL), (l_T_456).f_LINE);
return rv463; }
}
if ((((l_T_456).f_KIND == g_K_STR) || ((l_T_456).f_KIND == g_K_ENUM)))
{
{ R17 * rv464 = r_PARSE_CHARSTRING(r_NO_TEXT());
return rv464; }
}
if ((((l_T_456).f_KIND == g_K_ID) && ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_STR) || (((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM) && (!r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str("(", 1)))) && (!r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":=", 2)))))))))
{
r_SKIP();
{ R17 * rv465 = r_PARSE_CHARSTRING((l_T_456).f_TX);
return rv465; }
}
if (r_ACCEPT(rt_str("TRUE", 4)))
{
l_N_457 = r_NEW_NODE(g_N_BOOL, (l_T_456).f_LINE);
((*(R17 *)rt_nil_check(l_N_457))).f_IV = ((rt_int)1LL);
{ R17 * rv466 = l_N_457;
return rv466; }
}
else if (r_ACCEPT(rt_str("FALSE", 5)))
{
{ R17 * rv467 = r_NEW_NODE(g_N_BOOL, (l_T_456).f_LINE);
return rv467; }
}
else if (r_ACCEPT(rt_str("NIL", 3)))
{
{ R17 * rv468 = r_NEW_NODE(g_N_NIL, (l_T_456).f_LINE);
return rv468; }
}
else if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R17 * rv469 = r_NEW_NODE(g_N_ANY, (l_T_456).f_LINE);
return rv469; }
}
if (r_ACCEPT(rt_str("[", 1)))
{
{
R17 * l_TS_470; memset(&l_TS_470, 0, sizeof l_TS_470);
l_TS_470 = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str("]", 1));
r_EXPECT(rt_str("$$", 2));
if (((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
l_N_457 = r_PARSE_ATOM();
((*(R17 *)rt_nil_check(l_N_457))).f_B = l_TS_470;
{ R17 * rv471 = l_N_457;
return rv471; }
}
l_N_457 = r_NEW_NODE(g_N_TYPESPEC, (l_T_456).f_LINE);
((*(R17 *)rt_nil_check(l_N_457))).f_A = l_TS_470;
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_N_457))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
{ R17 * rv472 = l_N_457;
return rv472; }
}
}
if (r_IS(rt_str("(", 1)))
{
if ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
{
R17 * l_HEAD_473; memset(&l_HEAD_473, 0, sizeof l_HEAD_473);
l_HEAD_473 = NULL;
R17 * l_TAIL_474; memset(&l_TAIL_474, 0, sizeof l_TAIL_474);
l_TAIL_474 = NULL;
r_SKIP();
for (;;) {
{
l_N_457 = r_NEW_NODE(g_N_FINIT, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_N_457))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_457))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_N_457, &l_HEAD_473, &l_TAIL_474);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end475;
} L_end475: ;
r_EXPECT(rt_str(")", 1));
l_N_457 = r_NEW_NODE(g_N_RECCONS, (l_T_456).f_LINE);
((*(R17 *)rt_nil_check(l_N_457))).f_A = l_HEAD_473;
{ R17 * rv476 = l_N_457;
return rv476; }
}
}
r_SKIP();
{
R17 * l_E_477; memset(&l_E_477, 0, sizeof l_E_477);
l_E_477 = r_PARSE_EXPR();
if (r_IS(rt_str(",", 1)))
{
{
R17 * l_HEAD_478; memset(&l_HEAD_478, 0, sizeof l_HEAD_478);
l_HEAD_478 = NULL;
R17 * l_TAIL_479; memset(&l_TAIL_479, 0, sizeof l_TAIL_479);
l_TAIL_479 = NULL;
r_ADD_LIST(l_E_477, &l_HEAD_478, &l_TAIL_479);
for (;;) {
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end480;
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_478, &l_TAIL_479);
}
RT_B_TICK();
} L_end480: ;
r_EXPECT(rt_str(")", 1));
l_N_457 = r_NEW_NODE(g_N_ARRCONS, (l_T_456).f_LINE);
((*(R17 *)rt_nil_check(l_N_457))).f_A = l_HEAD_478;
{ R17 * rv481 = l_N_457;
return rv481; }
}
}
r_EXPECT(rt_str(")", 1));
l_N_457 = r_NEW_NODE(g_N_PAREN, (l_T_456).f_LINE);
((*(R17 *)rt_nil_check(l_N_457))).f_A = l_E_477;
{ R17 * rv482 = l_N_457;
return rv482; }
}
}
if (((l_T_456).f_KIND == g_K_ID))
{
l_N_457 = r_NEW_NODE(g_N_NAME, (l_T_456).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_457))).f_NAME, ((*(R17 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (((((r_TEQS(((*(R17 *)rt_nil_check(l_N_457))).f_NAME, rt_str("NEW", 3)) || r_TEQS(((*(R17 *)rt_nil_check(l_N_457))).f_NAME, rt_str("PTR$NEW", 7))) || r_TEQS(((*(R17 *)rt_nil_check(l_N_457))).f_NAME, rt_str("SEMAPHORE$NEW", 13)))) && r_IS(rt_str("(", 1))))
{
((*(R17 *)rt_nil_check(l_N_457))).f_KIND = g_N_NEW;
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_N_457))).f_A = r_PARSE_TYPE_ARG();
r_EXPECT(rt_str(")", 1));
}
{ R17 * rv483 = l_N_457;
return rv483; }
}
r_FAILT((l_T_456).f_LINE, rt_str("an expression expected, not ", 28), (l_T_456).f_TX);
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CHARSTRING(R9 p_CHARSET) { RT_B_TICK(); 
rt_int l_LINE_484; memset(&l_LINE_484, 0, sizeof l_LINE_484);
l_LINE_484 = r_LINE_NOW();
R17 * l_HEAD_485; memset(&l_HEAD_485, 0, sizeof l_HEAD_485);
l_HEAD_485 = NULL;
R17 * l_TAIL_486; memset(&l_TAIL_486, 0, sizeof l_TAIL_486);
l_TAIL_486 = NULL;
rt_int l_STRINGS_487; memset(&l_STRINGS_487, 0, sizeof l_STRINGS_487);
l_STRINGS_487 = ((rt_int)0LL);
R17 * l_N_488; memset(&l_N_488, 0, sizeof l_N_488);
for (;;) {
if ((!((r_IS_KIND(g_K_STR) || r_IS_KIND(g_K_ENUM))))) goto L_end489;
{
l_N_488 = r_NEW_NODE(g_N_PART, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_N_488))).f_IV = (r_CUR()).f_KIND;
S_R9(&((*(R17 *)rt_nil_check(l_N_488))).f_NAME, (r_CUR()).f_TX, 0);
if ((((*(R17 *)rt_nil_check(l_N_488))).f_IV == g_K_STR))
{
l_STRINGS_487 = rt_add(l_STRINGS_487, ((rt_int)1LL));
}
r_SKIP();
r_ADD_LIST(l_N_488, &l_HEAD_485, &l_TAIL_486);
}
RT_B_TICK();
} L_end489: ;
if ((((l_STRINGS_487 == ((rt_int)0LL)) && ((p_CHARSET).f_LEN == ((rt_int)0LL))) && (((*(R17 *)rt_nil_check(l_HEAD_485))).f_NEXT == NULL)))
{
((*(R17 *)rt_nil_check(l_HEAD_485))).f_KIND = g_N_ENUMLIT;
{ R17 * rv490 = l_HEAD_485;
return rv490; }
}
l_N_488 = r_NEW_NODE(g_N_STR, l_LINE_484);
((*(R17 *)rt_nil_check(l_N_488))).f_A = l_HEAD_485;
S_R9(&((*(R17 *)rt_nil_check(l_N_488))).f_NAME, p_CHARSET, 0);
{ R17 * rv491 = l_N_488;
return rv491; }
rt_raise(RT_X_INIT);
}
static rt_int r_AT_BODY_END(void) { RT_B_TICK(); 
{ rt_int rv492 = ((((((((((r_IS_KIND(g_K_EOF) || r_IS(rt_str("END", 3))) || r_IS(rt_str("ELSE", 4))) || r_IS(rt_str("ORIF", 4))) || r_IS(rt_str("EXCEPT", 6))) || r_IS(rt_str("PROCEDURE", 9))) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()) || r_IS(rt_str("MODULE", 6))) || r_IS(rt_str("PATH", 4)));
return rv492; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_STATEMENTS(void) { RT_B_TICK(); 
R17 * l_HEAD_493; memset(&l_HEAD_493, 0, sizeof l_HEAD_493);
l_HEAD_493 = NULL;
R17 * l_TAIL_494; memset(&l_TAIL_494, 0, sizeof l_TAIL_494);
l_TAIL_494 = NULL;
for (;;) {
if (r_AT_BODY_END()) goto L_end495;
{
r_ADD_LIST(r_PARSE_STATEMENT(), &l_HEAD_493, &l_TAIL_494);
}
RT_B_TICK();
} L_end495: ;
{ R17 * rv496 = l_HEAD_493;
return rv496; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_HANDLERS(void) { RT_B_TICK(); 
R17 * l_HEAD_497; memset(&l_HEAD_497, 0, sizeof l_HEAD_497);
l_HEAD_497 = NULL;
R17 * l_TAIL_498; memset(&l_TAIL_498, 0, sizeof l_TAIL_498);
l_TAIL_498 = NULL;
r_EXPECT(rt_str("EXCEPT", 6));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end499;
{
{
R17 * l_H_500; memset(&l_H_500, 0, sizeof l_H_500);
l_H_500 = r_NEW_NODE(g_N_HANDLER, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_H_500))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_H_500))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_H_500, &l_HEAD_497, &l_TAIL_498);
}
}
RT_B_TICK();
} L_end499: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("EXCEPT", 6));
r_EXPECT(rt_str(";", 1));
{ R17 * rv501 = l_HEAD_497;
return rv501; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_STATEMENT(void) { RT_B_TICK(); 
R17 * l_S_502; memset(&l_S_502, 0, sizeof l_S_502);
if ((r_IS_KIND(g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str(":", 1))))
{
l_S_502 = r_NEW_NODE(g_N_LABELED, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_S_502))).f_NAME, r_IDENT(), 0);
r_SKIP();
((*(R17 *)rt_nil_check(l_S_502))).f_A = r_PARSE_STATEMENT();
{ R17 * rv503 = l_S_502;
return rv503; }
}
l_S_502 = r_PARSE_UNLABELED();
if (r_IS(rt_str("EXCEPT", 6)))
{
{
R17 * l_X_504; memset(&l_X_504, 0, sizeof l_X_504);
l_X_504 = r_NEW_NODE(g_N_EXCEPT, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_X_504))).f_A = l_S_502;
((*(R17 *)rt_nil_check(l_X_504))).f_B = r_PARSE_HANDLERS();
{ R17 * rv505 = l_X_504;
return rv505; }
}
}
{ R17 * rv506 = l_S_502;
return rv506; }
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
rt_int l_LINE_507; memset(&l_LINE_507, 0, sizeof l_LINE_507);
l_LINE_507 = r_LINE_NOW();
R17 * l_S_508; memset(&l_S_508, 0, sizeof l_S_508);
R17 * l_T_509; memset(&l_T_509, 0, sizeof l_T_509);
if (r_ACCEPT(rt_str(";", 1)))
{
{ R17 * rv510 = r_NEW_NODE(g_N_NULL, l_LINE_507);
return rv510; }
}
else if (r_IS(rt_str("IF", 2)))
{
{ R17 * rv511 = r_PARSE_IF();
return rv511; }
}
else if (r_IS(rt_str("SELECT", 6)))
{
{ R17 * rv512 = r_PARSE_CASE();
return rv512; }
}
else if (r_IS(rt_str("LOOP", 4)))
{
{ R17 * rv513 = r_PARSE_LOOP();
return rv513; }
}
else if (r_IS(rt_str("PAR_BLOCK", 9)))
{
{ R17 * rv514 = r_PARSE_PAR();
return rv514; }
}
else if (r_ACCEPT(rt_str("BLOCK", 5)))
{
l_S_508 = r_NEW_NODE(g_N_BLOCK, l_LINE_507);
((*(R17 *)rt_nil_check(l_S_508))).f_A = r_PARSE_BODY();
r_EXPECT_END(rt_str("BLOCK", 5));
{ R17 * rv515 = l_S_508;
return rv515; }
}
else if (r_ACCEPT(rt_str("WITH", 4)))
{
l_S_508 = r_NEW_NODE(g_N_WITH, l_LINE_507);
S_R9(&((*(R17 *)rt_nil_check(l_S_508))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("NAMING", 6)))
{
((*(R17 *)rt_nil_check(l_S_508))).f_IV = ((rt_int)1LL);
((*(R17 *)rt_nil_check(l_S_508))).f_A = r_PARSE_POSTFIX();
}
else
{
r_EXPECT(rt_str(":=", 2));
((*(R17 *)rt_nil_check(l_S_508))).f_A = r_PARSE_EXPR();
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
((*(R17 *)rt_nil_check(l_S_508))).f_B = r_PARSE_UNLABELED();
{ R17 * rv516 = l_S_508;
return rv516; }
}
else if (r_ACCEPT(rt_str("EXIT", 4)))
{
r_EXPECT(rt_str(";", 1));
{ R17 * rv517 = r_NEW_NODE(g_N_EXIT, l_LINE_507);
return rv517; }
}
else if (r_ACCEPT(rt_str("GO", 2)))
{
r_EXPECT(rt_str("TO", 2));
l_S_508 = r_NEW_NODE(g_N_GOTO, l_LINE_507);
S_R9(&((*(R17 *)rt_nil_check(l_S_508))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(";", 1));
{ R17 * rv518 = l_S_508;
return rv518; }
}
else if (r_ACCEPT(rt_str("RETURN", 6)))
{
l_S_508 = r_NEW_NODE(g_N_RETURN, l_LINE_507);
if ((!r_IS(rt_str(";", 1))))
{
((*(R17 *)rt_nil_check(l_S_508))).f_A = r_PARSE_EXPR();
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv519 = l_S_508;
return rv519; }
}
else if (r_ACCEPT(rt_str("SIGNAL", 6)))
{
l_S_508 = r_NEW_NODE(g_N_SIGNAL, l_LINE_507);
if (r_IS_KIND(g_K_ID))
{
S_R9(&((*(R17 *)rt_nil_check(l_S_508))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv520 = l_S_508;
return rv520; }
}
else if (r_ACCEPT(rt_str("ASSERT", 6)))
{
l_S_508 = r_NEW_NODE(g_N_ASSERT, l_LINE_507);
((*(R17 *)rt_nil_check(l_S_508))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R17 * rv521 = l_S_508;
return rv521; }
}
else if (r_ACCEPT(rt_str("TERMINATE", 9)))
{
l_S_508 = r_NEW_NODE(g_N_TERMINATE, l_LINE_507);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_S_508))).f_A = r_PARSE_POSTFIX();
r_EXPECT(rt_str(")", 1));
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv522 = l_S_508;
return rv522; }
}
l_T_509 = r_PARSE_POSTFIX();
if (r_IS(rt_str("[", 1)))
{
r_FAIL(l_LINE_507, rt_str("a substring of a substring", 26));
}
if (r_ACCEPT(rt_str(":=", 2)))
{
l_S_508 = r_NEW_NODE(g_N_ASSIGN, l_LINE_507);
((*(R17 *)rt_nil_check(l_S_508))).f_A = l_T_509;
((*(R17 *)rt_nil_check(l_S_508))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R17 * rv523 = l_S_508;
return rv523; }
}
r_EXPECT(rt_str(";", 1));
if ((((((*(R17 *)rt_nil_check(l_T_509))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_T_509))).f_KIND == g_N_APPLY)) || (((*(R17 *)rt_nil_check(l_T_509))).f_KIND == g_N_ENUMLIT)))
{
((*(R17 *)rt_nil_check(l_T_509))).f_KIND = g_N_CALL;
}
else
{
r_FAIL(l_LINE_507, rt_str("a statement expected", 20));
}
{ R17 * rv524 = l_T_509;
return rv524; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_IF(void) { RT_B_TICK(); 
R17 * l_S_525; memset(&l_S_525, 0, sizeof l_S_525);
l_S_525 = r_NEW_NODE(g_N_IF, r_LINE_NOW());
R17 * l_HEAD_526; memset(&l_HEAD_526, 0, sizeof l_HEAD_526);
l_HEAD_526 = NULL;
R17 * l_TAIL_527; memset(&l_TAIL_527, 0, sizeof l_TAIL_527);
l_TAIL_527 = NULL;
r_EXPECT(rt_str("IF", 2));
for (;;) {
{
{
R17 * l_ARM_529; memset(&l_ARM_529, 0, sizeof l_ARM_529);
l_ARM_529 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_ARM_529))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("THEN", 4));
((*(R17 *)rt_nil_check(l_ARM_529))).f_B = r_PARSE_BODY();
r_ADD_LIST(l_ARM_529, &l_HEAD_526, &l_TAIL_527);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str("ORIF", 4)))) goto L_end528;
} L_end528: ;
((*(R17 *)rt_nil_check(l_S_525))).f_A = l_HEAD_526;
if (r_ACCEPT(rt_str("ELSE", 4)))
{
((*(R17 *)rt_nil_check(l_S_525))).f_B = r_PARSE_BODY();
}
r_EXPECT_END(rt_str("IF", 2));
{ R17 * rv530 = l_S_525;
return rv530; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CASE_LABEL(void) { RT_B_TICK(); 
if ((r_IS(rt_str("[", 1)) || ((r_IS(rt_str("(", 1)) && r_RANGE_AHEAD()))))
{
{ R17 * rv531 = r_PARSE_RANGE();
return rv531; }
}
{ R17 * rv532 = r_PARSE_EXPR();
return rv532; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CASE(void) { RT_B_TICK(); 
R17 * l_S_533; memset(&l_S_533, 0, sizeof l_S_533);
l_S_533 = r_NEW_NODE(g_N_CASE, r_LINE_NOW());
R17 * l_HEAD_534; memset(&l_HEAD_534, 0, sizeof l_HEAD_534);
l_HEAD_534 = NULL;
R17 * l_TAIL_535; memset(&l_TAIL_535, 0, sizeof l_TAIL_535);
l_TAIL_535 = NULL;
r_EXPECT(rt_str("SELECT", 6));
((*(R17 *)rt_nil_check(l_S_533))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end536;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_S_533))).f_C = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R17 *)rt_nil_check(l_S_533))).f_D = r_PARSE_HANDLERS();
}
}
else
{
{
R17 * l_ARM_537; memset(&l_ARM_537, 0, sizeof l_ARM_537);
l_ARM_537 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
R17 * l_LH_538; memset(&l_LH_538, 0, sizeof l_LH_538);
l_LH_538 = NULL;
R17 * l_LT_539; memset(&l_LT_539, 0, sizeof l_LT_539);
l_LT_539 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_538, &l_LT_539);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end540;
} L_end540: ;
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_ARM_537))).f_A = l_LH_538;
((*(R17 *)rt_nil_check(l_ARM_537))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R17 *)rt_nil_check(l_ARM_537))).f_C = r_PARSE_HANDLERS();
}
r_ADD_LIST(l_ARM_537, &l_HEAD_534, &l_TAIL_535);
}
}
}
RT_B_TICK();
} L_end536: ;
((*(R17 *)rt_nil_check(l_S_533))).f_B = l_HEAD_534;
r_EXPECT_END(rt_str("SELECT", 6));
{ R17 * rv541 = l_S_533;
return rv541; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_LOOP(void) { RT_B_TICK(); 
R17 * l_S_542; memset(&l_S_542, 0, sizeof l_S_542);
l_S_542 = r_NEW_NODE(g_N_LOOP, r_LINE_NOW());
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("FOR", 3)))
{
((*(R17 *)rt_nil_check(l_S_542))).f_KIND = g_N_FOR;
if (r_IS_KIND(g_K_ID))
{
S_R9(&((*(R17 *)rt_nil_check(l_S_542))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("IN", 2));
}
((*(R17 *)rt_nil_check(l_S_542))).f_A = r_PARSE_RANGE();
r_EXPECT(rt_str("DO", 2));
((*(R17 *)rt_nil_check(l_S_542))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_IS_KIND(g_K_ID))
{
if ((!r_TEQ(r_IDENT(), ((*(R17 *)rt_nil_check(l_S_542))).f_NAME)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier", 38));
}
}
else if (((((*(R17 *)rt_nil_check(l_S_542))).f_NAME).f_LEN > ((rt_int)0LL)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier (4.5.6.3)", 48));
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R17 * rv543 = l_S_542;
return rv543; }
}
if (r_ACCEPT(rt_str("UNTIL", 5)))
{
((*(R17 *)rt_nil_check(l_S_542))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("DO", 2));
}
((*(R17 *)rt_nil_check(l_S_542))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("WHEN", 4)))
{
if ((!(((*(R17 *)rt_nil_check(l_S_542))).f_A == NULL)))
{
r_FAIL(r_LINE_NOW(), rt_str("only one of UNTIL and WHEN (4.5.6.1)", 36));
}
((*(R17 *)rt_nil_check(l_S_542))).f_C = r_PARSE_EXPR();
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R17 * rv544 = l_S_542;
return rv544; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_PAR(void) { RT_B_TICK(); 
R17 * l_S_545; memset(&l_S_545, 0, sizeof l_S_545);
l_S_545 = r_NEW_NODE(g_N_PAR, r_LINE_NOW());
R17 * l_HEAD_546; memset(&l_HEAD_546, 0, sizeof l_HEAD_546);
l_HEAD_546 = NULL;
R17 * l_TAIL_547; memset(&l_TAIL_547, 0, sizeof l_TAIL_547);
l_TAIL_547 = NULL;
r_EXPECT(rt_str("PAR_BLOCK", 9));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end548;
{
{
R17 * l_P_549; memset(&l_P_549, 0, sizeof l_P_549);
l_P_549 = r_NEW_NODE(g_N_PATH, r_LINE_NOW());
R17 * l_H_550; memset(&l_H_550, 0, sizeof l_H_550);
l_H_550 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
r_EXPECT(rt_str("PATH", 4));
S_R9(&((*(R17 *)rt_nil_check(l_P_549))).f_NAME, r_IDENT(), 0);
((*(R17 *)rt_nil_check(l_P_549))).f_E = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_P_549))).f_LINE);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_549))).f_E))).f_A = l_H_550;
if (r_ACCEPT(rt_str("FOR", 3)))
{
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_549))).f_E))).f_NAME, r_IDENT(), 0);
((*(R17 *)rt_nil_check(l_P_549))).f_FL = ((rt_int)1LL);
r_EXPECT(rt_str("IN", 2));
((*(R17 *)rt_nil_check(l_P_549))).f_A = r_PARSE_RANGE();
}
for (;;) {
{
if (r_ACCEPT(rt_str("PRIORITY", 8)))
{
((*(R17 *)rt_nil_check(l_P_549))).f_C = r_PARSE_EXPR();
}
else if (r_ACCEPT(rt_str("CONNECT", 7)))
{
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_P_549))).f_D = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R17 *)rt_nil_check(l_H_550))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R17 *)rt_nil_check(l_H_550))).f_B = r_PARSE_ITEMS();
}
else
{
goto L_end551;
}
}
RT_B_TICK();
} L_end551: ;
if ((!(((*(R17 *)rt_nil_check(l_P_549))).f_D == NULL)))
{
r_CONNECT_KNOWN(((*(R17 *)rt_nil_check(l_P_549))).f_D, l_H_550);
}
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_P_549))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PATH", 4));
r_EXPECT_NAME(((*(R17 *)rt_nil_check(l_P_549))).f_NAME);
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_P_549, &l_HEAD_546, &l_TAIL_547);
}
}
RT_B_TICK();
} L_end548: ;
((*(R17 *)rt_nil_check(l_S_545))).f_A = l_HEAD_546;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PAR_BLOCK", 9));
r_EXPECT(rt_str(";", 1));
{ R17 * rv552 = l_S_545;
return rv552; }
rt_raise(RT_X_INIT);
}
static void r_CONNECT_KNOWN(R17 * p_E, R17 * p_H) { RT_B_TICK(); 
R17 * l_R_553; memset(&l_R_553, 0, sizeof l_R_553);
l_R_553 = p_E;
for (;;) {
if (((((*(R17 *)rt_nil_check(l_R_553))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_553))).f_KIND == g_N_APPLY))) goto L_end554;
{
if (((!(((*(R17 *)rt_nil_check(l_R_553))).f_KIND == g_N_INDEX)) && (!(((*(R17 *)rt_nil_check(l_R_553))).f_KIND == g_N_FIELD))))
{
return;
}
l_R_553 = ((*(R17 *)rt_nil_check(l_R_553))).f_A;
}
RT_B_TICK();
} L_end554: ;
if ((((*(R17 *)rt_nil_check(p_H))).f_B == NULL))
{
((*(R17 *)rt_nil_check(p_H))).f_B = r_NEW_NODE(g_N_ITEMS, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
{
R17 * l_P_555; memset(&l_P_555, 0, sizeof l_P_555);
l_P_555 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_H))).f_B))).f_A;
for (;;) {
if ((l_P_555 == NULL)) goto L_end556;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_555))).f_NAME, ((*(R17 *)rt_nil_check(l_R_553))).f_NAME))
{
return;
}
l_P_555 = ((*(R17 *)rt_nil_check(l_P_555))).f_NEXT;
}
RT_B_TICK();
} L_end556: ;
l_P_555 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_H))).f_B))).f_B;
for (;;) {
if ((l_P_555 == NULL)) goto L_end557;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_555))).f_NAME, ((*(R17 *)rt_nil_check(l_R_553))).f_NAME))
{
return;
}
l_P_555 = ((*(R17 *)rt_nil_check(l_P_555))).f_NEXT;
}
RT_B_TICK();
} L_end557: ;
}
{
R17 * l_N_558; memset(&l_N_558, 0, sizeof l_N_558);
l_N_558 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_558))).f_NAME, ((*(R17 *)rt_nil_check(l_R_553))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_558))).f_NEXT = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_H))).f_B))).f_B;
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_H))).f_B))).f_B = l_N_558;
}
}
static R9 r_NO_TEXT(void) { RT_B_TICK(); 
{ R9 rv559 = ({ R9 rc560; memset(&rc560, 0, sizeof rc560);  rc560.f_AT = ((rt_int)0LL); rc560.f_LEN = ((rt_int)0LL); rc560.f_H = ((rt_int)0LL); rc560; });
return rv559; }
rt_raise(RT_X_INIT);
}
static R23 r_NO_MVAL(void) { RT_B_TICK(); 
{ R23 rv561 = ({ R23 rc562; memset(&rc562, 0, sizeof rc562);  rc562.f_OK = 0; rc562.f_V = ((rt_int)0LL); rc562; });
return rv561; }
rt_raise(RT_X_INIT);
}
static R23 r_SOME(rt_int p_V) { RT_B_TICK(); 
{ R23 rv563 = ({ R23 rc564; memset(&rc564, 0, sizeof rc564);  rc564.f_OK = 1; rc564.f_V = p_V; rc564; });
return rv563; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_SYM(rt_int p_KIND, R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_565; memset(&l_Y_565, 0, sizeof l_Y_565);
l_Y_565 = ((R12 *)rt_b_new(sizeof (R12)));
rt_int l_LEVEL_566; memset(&l_LEVEL_566, 0, sizeof l_LEVEL_566);
l_LEVEL_566 = ((rt_int)0LL);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_CS == NULL)))
{
l_LEVEL_566 = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
}
S_R12(&(*(R12 *)rt_nil_check(l_Y_565)), ({ R12 rc567; memset(&rc567, 0, sizeof rc567);  rc567.f_KIND = p_KIND; rc567.f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH; rc567.f_LEVEL = l_LEVEL_566; S_R9(&rc567.f_NAME, p_NAME, 0); rc567.f_T = NULL; S_R9(&rc567.f_ACCESS, r_NO_TEXT(), 0); S_R9(&rc567.f_FIELD, r_NO_TEXT(), 0); rc567.f_INPUT = 0; rc567.f_BYREF = 0; rc567.f_HASMV = 0; rc567.f_MV = ((rt_int)0LL); rc567.f_TS = NULL; rc567.f_BUSY = 0; S_R9(&rc567.f_FWD, r_NO_TEXT(), 0); rc567.f_PARAMS = NULL; rc567.f_RESULT = NULL; rc567.f_DECL = NULL; S_R9(&rc567.f_PREFIX, r_NO_TEXT(), 0); rc567.f_MODL = ((*(R7 *)rt_nil_check(g_W))).f_MODL; rc567.f_EXPORTED = 0; rc567.f_GENERIC = 0; rc567.f_FRAMED = 0; rc567.f_USES = NULL; rc567.f_INSTANCES = NULL; rc567.f_BINDINGS = NULL; rc567.f_ORIG = NULL; rc567.f_MEMBERS = NULL; rc567.f_SAVED = NULL; rc567.f_OWNER = r_CUR_OWNER(); rc567.f_WITHV = ((rt_int)0LL); rc567.f_LAZY = ((rt_int)0LL); rc567.f_LINKAGE = ((rt_int)0LL); rc567.f_SEGM = NULL; rc567.f_HOME = ((*(R7 *)rt_nil_check(g_W))).f_TRSEG; rc567.f_CHAIN = NULL; rc567.f_SNEXT = NULL; rc567; }), 0);
{ R12 * rv568 = l_Y_565;
return rv568; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_OWNER(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_IS == NULL))
{
{ rt_int rv569 = ((rt_int)0LL);
return rv569; }
}
{ rt_int rv570 = ((*(R20 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_ID;
return rv570; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIGINAL(R12 * p_Y) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)))
{
{ R12 * rv571 = ((*(R12 *)rt_nil_check(p_Y))).f_ORIG;
return rv571; }
}
{ R12 * rv572 = p_Y;
return rv572; }
rt_raise(RT_X_INIT);
}
static rt_int r_BUCKET(R9 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_H < ((rt_int)0LL)))
{
{ rt_int rv573 = r_HASH_OF(r_STR(p_NAME, (p_NAME).f_LEN));
return rv573; }
}
{ rt_int rv574 = (p_NAME).f_H;
return rv574; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_575; memset(&l_Y_575, 0, sizeof l_Y_575);
l_Y_575 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(r_BUCKET(p_NAME), (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
for (;;) {
if ((l_Y_575 == NULL)) goto L_end576;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_575))).f_NAME, p_NAME))
{
{ R12 * rv577 = l_Y_575;
return rv577; }
}
l_Y_575 = ((*(R12 *)rt_nil_check(l_Y_575))).f_CHAIN;
}
RT_B_TICK();
} L_end576: ;
{ R12 * rv578 = NULL;
return rv578; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_579; memset(&l_Y_579, 0, sizeof l_Y_579);
l_Y_579 = r_LOOKUP(p_NAME);
if ((l_Y_579 == NULL))
{
{ R12 * rv580 = NULL;
return rv580; }
}
{ R12 * rv581 = r_ORIGINAL(l_Y_579);
return rv581; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUPS(rstr p_NAME) { RT_B_TICK(); 
{ R12 * rv582 = r_LOOKUP(r_MKN(p_NAME));
return rv582; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP_NEXT(R12 * p_Y) { RT_B_TICK(); 
R12 * l_Z_583; memset(&l_Z_583, 0, sizeof l_Z_583);
l_Z_583 = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
for (;;) {
if ((l_Z_583 == NULL)) goto L_end584;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Z_583))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ R12 * rv585 = l_Z_583;
return rv585; }
}
l_Z_583 = ((*(R12 *)rt_nil_check(l_Z_583))).f_CHAIN;
}
RT_B_TICK();
} L_end584: ;
{ R12 * rv586 = NULL;
return rv586; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUTINE(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv587 = ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_BUILTIN));
return rv587; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_B_588; memset(&l_B_588, 0, sizeof l_B_588);
l_B_588 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_OLD_589; memset(&l_OLD_589, 0, sizeof l_OLD_589);
l_OLD_589 = r_LOOKUP(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
for (;;) {
if ((l_OLD_589 == NULL)) goto L_end590;
{
if ((!(((*(R12 *)rt_nil_check(l_OLD_589))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
goto L_end590;
}
if ((!((((r_IS_ROUTINE(l_OLD_589) && r_IS_ROUTINE(p_Y))) || (((((*(R12 *)rt_nil_check(l_OLD_589))).f_KIND == g_Y_ENUMLIT) && (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)))))))
{
r_FAILT(p_LINE, rt_str("redeclared in the same scope: ", 30), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
}
l_OLD_589 = r_LOOKUP_NEXT(l_OLD_589);
}
RT_B_TICK();
} L_end590: ;
((*(R12 *)rt_nil_check(p_Y))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_Y))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_588, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_588, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_Y;
((*(R12 *)rt_nil_check(p_Y))).f_SNEXT = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = p_Y;
}
static void r_OPEN_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_add(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
}
static void r_CLOSE_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == NULL)) goto L_end591;
{
if ((((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH <= ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end591;
}
r_UNLINK(((*(R7 *)rt_nil_check(g_W))).f_SCOPE);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_SNEXT;
}
RT_B_TICK();
} L_end591: ;
}
static void r_UNLINK(R12 * p_Y) { RT_B_TICK(); 
rt_int l_B_592; memset(&l_B_592, 0, sizeof l_B_592);
l_B_592 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_P_593; memset(&l_P_593, 0, sizeof l_P_593);
l_P_593 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_592, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
if ((l_P_593 == p_Y))
{
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_592, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
for (;;) {
if ((l_P_593 == NULL)) goto L_end594;
{
if ((((*(R12 *)rt_nil_check(l_P_593))).f_CHAIN == p_Y))
{
((*(R12 *)rt_nil_check(l_P_593))).f_CHAIN = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
l_P_593 = ((*(R12 *)rt_nil_check(l_P_593))).f_CHAIN;
}
RT_B_TICK();
} L_end594: ;
}
static R12 * r_TAKE_SCOPE(R12 * p_MARK) { RT_B_TICK(); 
R12 * l_HEAD_595; memset(&l_HEAD_595, 0, sizeof l_HEAD_595);
l_HEAD_595 = NULL;
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == p_MARK)) goto L_end596;
{
{
R12 * l_Y_597; memset(&l_Y_597, 0, sizeof l_Y_597);
l_Y_597 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_UNLINK(l_Y_597);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(l_Y_597))).f_SNEXT;
((*(R12 *)rt_nil_check(l_Y_597))).f_SNEXT = l_HEAD_595;
l_HEAD_595 = l_Y_597;
}
}
RT_B_TICK();
} L_end596: ;
{ R12 * rv598 = l_HEAD_595;
return rv598; }
rt_raise(RT_X_INIT);
}
static R22 * r_NEW_TYP(rt_int p_KIND) { RT_B_TICK(); 
R22 * l_T_599; memset(&l_T_599, 0, sizeof l_T_599);
l_T_599 = ((R22 *)rt_b_new(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_T_599)), ({ R22 rc600; memset(&rc600, 0, sizeof rc600);  rc600.f_KIND = p_KIND; rc600.f_SCALE = ((rt_int)0LL); S_R9(&rc600.f_LO_C, r_NO_TEXT(), 0); S_R9(&rc600.f_HI_C, r_NO_TEXT(), 0); S_R23(&rc600.f_MLO, r_NO_MVAL(), 0); S_R23(&rc600.f_MHI, r_NO_MVAL(), 0); rc600.f_RLEVEL = ((rt_int)0LL); S_R9(&rc600.f_LEN_C, r_NO_TEXT(), 0); S_R23(&rc600.f_MLEN, r_NO_MVAL(), 0); S_R9(&rc600.f_GEN, r_NO_TEXT(), 0); rc600.f_BASE = NULL; rc600.f_ELEM = NULL; rc600.f_TARGET = NULL; rc600.f_TARGET_TS = NULL; rc600.f_FIELDS = NULL; rc600.f_LITS = NULL; rc600.f_NLITS = ((rt_int)0LL); rc600.f_UNORDERED = 0; rc600.f_BOUNDS = NULL; rc600.f_DIMS = ((rt_int)0LL); rc600.f_ARGS = NULL; S_R9(&rc600.f_NAME, r_NO_TEXT(), 0); S_R9(&rc600.f_CNAME, r_NO_TEXT(), 0); rc600.f_MODL = NULL; rc600.f_REPS = NULL; rc600.f_DECL = NULL; S_R9(&rc600.f_GENP, r_NO_TEXT(), 0); rc600; }), 0);
{ R22 * rv601 = l_T_599;
return rv601; }
rt_raise(RT_X_INIT);
}
static R22 * r_COPY_TYP(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_602; memset(&l_C_602, 0, sizeof l_C_602);
l_C_602 = ((R22 *)rt_b_new(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_C_602)), (*(R22 *)rt_nil_check(p_T)), 0);
{ R22 * rv603 = l_C_602;
return rv603; }
rt_raise(RT_X_INIT);
}
static void r_PREDEF_TYPE(rstr p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_604; memset(&l_Y_604, 0, sizeof l_Y_604);
l_Y_604 = r_NEW_SYM(g_Y_TYPE, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_604))).f_T = p_T;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_604))).f_NAME, 0);
}
r_DEFINE(l_Y_604, ((rt_int)0LL));
}
static void r_PREDEF_BUILTIN(rstr p_NAME) { RT_B_TICK(); 
r_DEFINE(r_NEW_SYM(g_Y_BUILTIN, r_MKN(p_NAME)), ((rt_int)0LL));
}
static void r_PREDEF_CONST(rstr p_NAME, R22 * p_T, rt_int p_V) { RT_B_TICK(); 
R12 * l_Y_605; memset(&l_Y_605, 0, sizeof l_Y_605);
l_Y_605 = r_NEW_SYM(g_Y_CONST, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_605))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_605))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_605))).f_MV = p_V;
((*(R12 *)rt_nil_check(l_Y_605))).f_INPUT = 1;
S_R9(&((*(R12 *)rt_nil_check(l_Y_605))).f_ACCESS, r_FMT1(rt_str("((rt_int)@)", 11), r_NUM(p_V)), 0);
r_DEFINE(l_Y_605, ((rt_int)0LL));
}
static R22 * r_PREDEF_ENUM(rstr p_NAME, rstr p_NAMES, rt_int p_UNORDERED) { RT_B_TICK(); 
R17 * l_HEAD_606; memset(&l_HEAD_606, 0, sizeof l_HEAD_606);
l_HEAD_606 = NULL;
R17 * l_TAIL_607; memset(&l_TAIL_607, 0, sizeof l_TAIL_607);
l_TAIL_607 = NULL;
rt_int l_START_608; memset(&l_START_608, 0, sizeof l_START_608);
l_START_608 = ((rt_int)0LL);
{ rt_int it610_lo = ((rt_int)0LL), it610_hi = (rt_int)(p_NAMES).len;
for (rt_int it610 = it610_lo; it610 <= it610_hi; it610++) {
{
if (((it610 == (rt_int)(p_NAMES).len) || rt_b_eq(rt_b_slice(p_NAMES, it610, it610), rt_str(" ", 1))))
{
if ((it610 > l_START_608))
{
{
R17 * l_N_611; memset(&l_N_611, 0, sizeof l_N_611);
l_N_611 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_611))).f_NAME, r_MKN(rt_b_slice(p_NAMES, l_START_608, rt_sub(it610, ((rt_int)1LL)))), 0);
r_ADD_LIST(l_N_611, &l_HEAD_606, &l_TAIL_607);
}
}
l_START_608 = rt_add(it610, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it610 == it610_hi) break;
} } L_end609: ;
{
R22 * l_T_612; memset(&l_T_612, 0, sizeof l_T_612);
l_T_612 = r_ENUM_CLASS(l_HEAD_606, p_UNORDERED, ((rt_int)0LL));
r_PREDEF_TYPE(p_NAME, l_T_612);
{ R22 * rv613 = l_T_612;
return rv613; }
}
rt_raise(RT_X_INIT);
}
static void r_PREDEFINE(void) { RT_B_TICK(); 
R22 * l_T_614; memset(&l_T_614, 0, sizeof l_T_614);
R17 * l_ASCII_LITS_615; memset(&l_ASCII_LITS_615, 0, sizeof l_ASCII_LITS_615);
l_ASCII_LITS_615 = NULL;
R17 * l_TAIL_616; memset(&l_TAIL_616, 0, sizeof l_TAIL_616);
l_TAIL_616 = NULL;
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
{ rt_int it618_lo = ((rt_int)0LL), it618_hi = ((rt_int)127LL);
for (rt_int it618 = it618_lo; it618 <= it618_hi; it618++) {
{
{
R17 * l_N_619; memset(&l_N_619, 0, sizeof l_N_619);
l_N_619 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_619))).f_NAME, r_ASCII_NAME(it618), 0);
r_ADD_LIST(l_N_619, &l_ASCII_LITS_615, &l_TAIL_616);
}
}
RT_B_TICK();
if (it618 == it618_hi) break;
} } L_end617: ;
((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII = r_ENUM_CLASS(l_ASCII_LITS_615, 0, ((rt_int)0LL));
r_PREDEF_TYPE(rt_str("ASCII", 5), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII);
((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS = r_PREDEF_ENUM(rt_str("ROUNDINGS", 9), rt_str("ROUNDED TRUNCATED NATIVE_R NATIVE_T", 35), 0);
l_T_614 = r_PREDEF_ENUM(rt_str("FIXED_PRECISIONS", 16), rt_str("STD", 3), 0);
r_PREDEF_BOUNDS_DEF();
l_T_614 = r_PREDEF_ENUM(rt_str("SIGNING", 7), rt_str("SIGNED UNSIGNED", 15), 1);
l_T_614 = r_PREDEF_ENUM(rt_str("PACKING", 7), rt_str("DENSE PACKED UNPACKED", 21), 1);
l_T_614 = r_PREDEF_ENUM(rt_str("USAGE", 5), rt_str("SYNCH REGION", 12), 1);
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
r_PREDEF_BUILTIN(rt_str("RUN_PATHS", 9));
r_PREDEF_BUILTIN(rt_str("RELEASE", 7));
r_PREDEF_BUILTIN(rt_str("START_IO", 8));
{
rstr l_OPS_620; memset(&l_OPS_620, 0, sizeof l_OPS_620);
l_OPS_620 = rt_b_str_new(((rt_int)271LL), 0);
rt_b_assign(&l_OPS_620, rt_str(" ADD_ SUBTRACT_ MULTIPLY_ DIVIDE_ MODULUS_ EXPONENTIATE_ CONCATENATE_ EQUAL_ UNEQUAL_ GREATER_THAN_ LESS_THAN_ GREATER_EQUAL_ LESS_EQUAL_ AND_ OR_ XOR_ IMPLIES_ MD_ADD_ MD_SUBTRACT_ MD_MULTIPLY_ MD_DIVIDE_ NEGATE_ MON_PLUS_ COMPLEMENT_ STORE_ SUBSTRING_ SUBSTRING_STORE_ ", 271));
rt_int l_START_621; memset(&l_START_621, 0, sizeof l_START_621);
l_START_621 = ((rt_int)1LL);
{ rt_int it623_lo = ((rt_int)1LL), it623_hi = ((rt_int)270LL);
for (rt_int it623 = it623_lo; it623 <= it623_hi; it623++) {
{
if (rt_b_eq(rt_b_slice(l_OPS_620, it623, it623), rt_str(" ", 1)))
{
if ((it623 > l_START_621))
{
r_PREDEF_BUILTIN(rt_b_slice(l_OPS_620, l_START_621, rt_sub(it623, ((rt_int)1LL))));
}
l_START_621 = rt_add(it623, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it623 == it623_hi) break;
} } L_end622: ;
}
r_PREDEF_CONST(rt_str("MAX_NOM_PREC", 12), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)15LL));
r_PREDEF_CONST(rt_str("CLOCK_SCALE", 11), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)20LL));
r_OPEN_SCOPE();
}
static void r_PREDEF_BOUNDS_DEF(void) { RT_B_TICK(); 
R17 * l_F_624; memset(&l_F_624, 0, sizeof l_F_624);
l_F_624 = r_NEW_NODE(g_N_FORMAL, ((rt_int)0LL));
R17 * l_V_625; memset(&l_V_625, 0, sizeof l_V_625);
l_V_625 = r_NEW_NODE(g_N_VAR, ((rt_int)0LL));
R17 * l_R_626; memset(&l_R_626, 0, sizeof l_R_626);
l_R_626 = r_NEW_NODE(g_TS_RECORD, ((rt_int)0LL));
R17 * l_D_627; memset(&l_D_627, 0, sizeof l_D_627);
l_D_627 = r_NEW_NODE(g_N_TYPE, ((rt_int)0LL));
R17 * l_FX_628; memset(&l_FX_628, 0, sizeof l_FX_628);
l_FX_628 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
R12 * l_Y_629; memset(&l_Y_629, 0, sizeof l_Y_629);
l_Y_629 = r_NEW_SYM(g_Y_TYPE, r_MKN(rt_str("BOUNDS_DEF", 10)));
((*(R17 *)rt_nil_check(l_F_624))).f_A = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_F_624))).f_A))).f_NAME, r_MKN(rt_str("MAX_P", 5)), 0);
((*(R17 *)rt_nil_check(l_F_624))).f_B = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_F_624))).f_B))).f_NAME, r_MKN(rt_str("FIXED_PRECISIONS", 16)), 0);
S_R9(&((*(R17 *)rt_nil_check(l_FX_628))).f_NAME, r_MKN(rt_str("FIXED", 5)), 0);
((*(R17 *)rt_nil_check(l_FX_628))).f_A = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_FX_628))).f_A))).f_NEXT = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_FX_628))).f_A))).f_NEXT))).f_IV = ((rt_int)2LL);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_FX_628))).f_A))).f_NEXT))).f_NEXT = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_FX_628))).f_A))).f_NEXT))).f_NEXT))).f_NAME, r_MKN(rt_str("MAX_P", 5)), 0);
((*(R17 *)rt_nil_check(l_V_625))).f_A = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_625))).f_A))).f_NAME, r_MKN(rt_str("MIN", 3)), 0);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_625))).f_A))).f_NEXT = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_625))).f_A))).f_NEXT))).f_NAME, r_MKN(rt_str("MAX", 3)), 0);
((*(R17 *)rt_nil_check(l_V_625))).f_B = l_FX_628;
((*(R17 *)rt_nil_check(l_R_626))).f_A = l_V_625;
S_R9(&((*(R17 *)rt_nil_check(l_D_627))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_629))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_D_627))).f_A = l_F_624;
((*(R17 *)rt_nil_check(l_D_627))).f_B = l_R_626;
((*(R12 *)rt_nil_check(l_Y_629))).f_DECL = l_D_627;
r_DEFINE(l_Y_629, ((rt_int)0LL));
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
rstr l_CONTROLS_630; memset(&l_CONTROLS_630, 0, sizeof l_CONTROLS_630);
l_CONTROLS_630 = rt_b_str_new(((rt_int)128LL), 0);
rt_b_assign(&l_CONTROLS_630, rt_str(" NUL SOH STX EXT EOT ENQ ACK BEL BS  HT  LF  VT  FF  CR  SO  SI  DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM  SUB ESC FS  GS  RS  US ", 128));
if ((p_C < ((rt_int)32LL)))
{
if (rt_b_eq(rt_b_slice(l_CONTROLS_630, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL))), rt_str(" ", 1)))
{
{ R9 rv631 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_630, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)2LL)))));
return rv631; }
}
{ R9 rv632 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_630, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)))));
return rv632; }
}
else if ((p_C == ((rt_int)39LL)))
{
{ R9 rv633 = r_MKN(rt_str("\\''''", 5));
return rv633; }
}
else if ((p_C < ((rt_int)96LL)))
{
{ R9 rv634 = r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), r_CHAR_OF(p_C)), rt_str("'", 1)));
return rv634; }
}
else if ((p_C == ((rt_int)96LL)))
{
{ R9 rv635 = r_MKN(rt_str("\\ACCENT", 7));
return rv635; }
}
else if ((p_C <= ((rt_int)122LL)))
{
{ R9 rv636 = r_MKN(rt_b_cat(rt_str("\\", 1), r_CHAR_OF(rt_sub(p_C, ((rt_int)32LL)))));
return rv636; }
}
else if ((p_C == ((rt_int)123LL)))
{
{ R9 rv637 = r_MKN(rt_str("\\[", 2));
return rv637; }
}
else if ((p_C == ((rt_int)124LL)))
{
{ R9 rv638 = r_MKN(rt_str("\\BAR", 4));
return rv638; }
}
else if ((p_C == ((rt_int)125LL)))
{
{ R9 rv639 = r_MKN(rt_str("\\]", 2));
return rv639; }
}
else if ((p_C == ((rt_int)126LL)))
{
{ R9 rv640 = r_MKN(rt_str("\\TILDE", 6));
return rv640; }
}
{ R9 rv641 = r_MKN(rt_str("\\DEL", 4));
return rv641; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_SCALAR(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv642 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_BOOL)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv642; }
rt_raise(RT_X_INIT);
}
static R22 * r_REAL_TYPE(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R22 * rv643 = r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv643; }
}
{ R22 * rv644 = p_T;
return rv644; }
rt_raise(RT_X_INIT);
}
static R9 r_TYPE_NAME(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_645; memset(&l_K_645, 0, sizeof l_K_645);
l_K_645 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{ R9 rv646 = ((*(R22 *)rt_nil_check(p_T))).f_NAME;
return rv646; }
}
else if ((l_K_645 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))
{
{ R9 rv647 = r_MK(rt_str("INTEGER", 7));
return rv647; }
}
{ R9 rv648 = r_FMT1(rt_str("FIXED (@, 2, STD)", 17), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv648; }
}
else if ((l_K_645 == g_T_BOOL))
{
{ R9 rv649 = r_MK(rt_str("BOOLEAN", 7));
return rv649; }
}
else if ((l_K_645 == g_T_ENUM))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R9 rv650 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv650; }
}
{ R9 rv651 = r_MK(rt_str("an enumerated type", 18));
return rv651; }
}
else if ((l_K_645 == g_T_STR))
{
{ R9 rv652 = r_MK(rt_str("CHAR_STR", 8));
return rv652; }
}
else if ((l_K_645 == g_T_BITS))
{
{ R9 rv653 = r_MK(rt_str("BIT", 3));
return rv653; }
}
else if ((l_K_645 == g_T_FLOAT))
{
{ R9 rv654 = r_FMT1(rt_str("FLOAT (@)", 9), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv654; }
}
else if ((l_K_645 == g_T_ARR))
{
{ R9 rv655 = r_FMT1(rt_str("ARRAY OF @", 10), r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_ELEM));
return rv655; }
}
else if ((l_K_645 == g_T_REC))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R9 rv656 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv656; }
}
{ R9 rv657 = r_MK(rt_str("RECORD", 6));
return rv657; }
}
else if ((l_K_645 == g_T_PTR))
{
{ R9 rv658 = r_MK(rt_str("PTR", 3));
return rv658; }
}
else if ((l_K_645 == g_T_SEM))
{
{ R9 rv659 = r_MK(rt_str("SEMAPHORE", 9));
return rv659; }
}
else if ((l_K_645 == g_T_NIL))
{
{ R9 rv660 = r_MK(rt_str("NIL", 3));
return rv660; }
}
else if ((l_K_645 == g_T_VOID))
{
{ R9 rv661 = r_MK(rt_str("no value", 8));
return rv661; }
}
{ R9 rv662 = r_MK(rt_str("a type", 6));
return rv662; }
rt_raise(RT_X_INIT);
}
static R9 r_SUBST_SELF(R9 p_T, R9 p_SELF) { RT_B_TICK(); 
rstr l_S_663; memset(&l_S_663, 0, sizeof l_S_663);
l_S_663 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_663, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_664; memset(&l_AT_664, 0, sizeof l_AT_664);
l_AT_664 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_START_665; memset(&l_START_665, 0, sizeof l_START_665);
l_START_665 = ((rt_int)0LL);
R9 l_R_666; memset(&l_R_666, 0, sizeof l_R_666);
rt_int l_I_667; memset(&l_I_667, 0, sizeof l_I_667);
l_I_667 = ((rt_int)0LL);
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ R9 rv668 = p_T;
return rv668; }
}
for (;;) {
if ((l_I_667 >= rt_sub((p_T).f_LEN, ((rt_int)1LL)))) goto L_end669;
{
if (rt_b_eq(rt_b_slice(l_S_663, l_I_667, rt_add(l_I_667, ((rt_int)1LL))), rt_str("$S", 2)))
{
S_R9(&l_R_666, r_MK(rt_b_slice(l_S_663, l_START_665, rt_sub(l_I_667, ((rt_int)1LL)))), 0);
S_R9(&l_R_666, r_MK(r_STR(p_SELF, (p_SELF).f_LEN)), 0);
l_I_667 = rt_add(l_I_667, ((rt_int)2LL));
l_START_665 = l_I_667;
}
else
{
l_I_667 = rt_add(l_I_667, ((rt_int)1LL));
}
}
RT_B_TICK();
} L_end669: ;
if ((l_START_665 == ((rt_int)0LL)))
{
((*(R7 *)rt_nil_check(g_W))).f_TOP = l_AT_664;
{ R9 rv670 = p_T;
return rv670; }
}
S_R9(&l_R_666, r_MK(rt_b_slice(l_S_663, l_START_665, rt_sub((p_T).f_LEN, ((rt_int)1LL)))), 0);
{ R9 rv671 = ({ R9 rc672; memset(&rc672, 0, sizeof rc672);  rc672.f_AT = l_AT_664; rc672.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_664); rc672.f_H = rt_neg(((rt_int)1LL)); rc672; });
return rv671; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LITERALS(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_P_673; memset(&l_P_673, 0, sizeof l_P_673);
l_P_673 = p_A;
R17 * l_Q_674; memset(&l_Q_674, 0, sizeof l_Q_674);
l_Q_674 = p_B;
for (;;) {
if (((l_P_673 == NULL) || (l_Q_674 == NULL))) goto L_end675;
{
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_P_673))).f_NAME, ((*(R17 *)rt_nil_check(l_Q_674))).f_NAME)))
{
{ rt_int rv676 = 0;
return rv676; }
}
l_P_673 = ((*(R17 *)rt_nil_check(l_P_673))).f_NEXT;
l_Q_674 = ((*(R17 *)rt_nil_check(l_Q_674))).f_NEXT;
}
RT_B_TICK();
} L_end675: ;
{ rt_int rv677 = ((l_P_673 == NULL) && (l_Q_674 == NULL));
return rv677; }
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_CLASS(R17 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_678; memset(&l_Y_678, 0, sizeof l_Y_678);
l_Y_678 = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
R22 * l_T_679; memset(&l_T_679, 0, sizeof l_T_679);
{
R17 * l_P_680; memset(&l_P_680, 0, sizeof l_P_680);
l_P_680 = p_LITS;
for (;;) {
if ((l_P_680 == NULL)) goto L_end681;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_P_680))).f_NEXT, ((*(R17 *)rt_nil_check(l_P_680))).f_NAME))
{
r_FAILT(p_LINE, rt_str("an enumerated literal must be unique in its list (3.4.1): ", 58), ((*(R17 *)rt_nil_check(l_P_680))).f_NAME);
}
l_P_680 = ((*(R17 *)rt_nil_check(l_P_680))).f_NEXT;
}
RT_B_TICK();
} L_end681: ;
}
for (;;) {
if ((l_Y_678 == NULL)) goto L_end682;
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_678))).f_T))).f_UNORDERED == p_UNORDERED) && r_SAME_LITERALS(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_678))).f_T))).f_LITS, p_LITS)))
{
r_DECLARE_LITERALS(((*(R12 *)rt_nil_check(l_Y_678))).f_T, p_LINE);
{ R22 * rv683 = ((*(R12 *)rt_nil_check(l_Y_678))).f_T;
return rv683; }
}
l_Y_678 = ((*(R12 *)rt_nil_check(l_Y_678))).f_INSTANCES;
}
RT_B_TICK();
} L_end682: ;
l_T_679 = r_NEW_TYP(g_T_ENUM);
((*(R22 *)rt_nil_check(l_T_679))).f_BASE = l_T_679;
((*(R22 *)rt_nil_check(l_T_679))).f_LITS = p_LITS;
((*(R22 *)rt_nil_check(l_T_679))).f_NLITS = r_LIST_LENGTH(p_LITS);
((*(R22 *)rt_nil_check(l_T_679))).f_UNORDERED = p_UNORDERED;
S_R9(&((*(R22 *)rt_nil_check(l_T_679))).f_CNAME, r_NEW_NAME(rt_str("E", 1)), 0);
l_Y_678 = r_NEW_SYM(g_Y_TYPE, r_NO_TEXT());
((*(R12 *)rt_nil_check(l_Y_678))).f_T = l_T_679;
((*(R12 *)rt_nil_check(l_Y_678))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
((*(R7 *)rt_nil_check(g_W))).f_ENUMS = l_Y_678;
{
R17 * l_P_684; memset(&l_P_684, 0, sizeof l_P_684);
l_P_684 = p_LITS;
R9 l_NAMES_685; memset(&l_NAMES_685, 0, sizeof l_NAMES_685);
S_R9(&l_NAMES_685, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_P_684 == NULL)) goto L_end686;
{
S_R9(&l_NAMES_685, r_FMT2(rt_str("@@, ", 4), l_NAMES_685, r_CSTRING(((*(R17 *)rt_nil_check(l_P_684))).f_NAME)), 0);
l_P_684 = ((*(R17 *)rt_nil_check(l_P_684))).f_NEXT;
}
RT_B_TICK();
} L_end686: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static const char *@[] = { @0 };", 32), ((*(R22 *)rt_nil_check(l_T_679))).f_CNAME, l_NAMES_685));
}
r_DECLARE_LITERALS(l_T_679, p_LINE);
{ R22 * rv687 = l_T_679;
return rv687; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_LITERALS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_P_688; memset(&l_P_688, 0, sizeof l_P_688);
l_P_688 = ((*(R22 *)rt_nil_check(p_T))).f_LITS;
rt_int l_I_689; memset(&l_I_689, 0, sizeof l_I_689);
l_I_689 = ((rt_int)0LL);
for (;;) {
if ((l_P_688 == NULL)) goto L_end690;
{
if ((r_VISIBLE_LITERAL(((*(R17 *)rt_nil_check(l_P_688))).f_NAME, p_T) == NULL))
{
{
R12 * l_Y_691; memset(&l_Y_691, 0, sizeof l_Y_691);
l_Y_691 = r_NEW_SYM(g_Y_ENUMLIT, ((*(R17 *)rt_nil_check(l_P_688))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_691))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_691))).f_MV = l_I_689;
((*(R12 *)rt_nil_check(l_Y_691))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_691))).f_INPUT = 1;
r_DEFINE(l_Y_691, p_LINE);
}
}
l_I_689 = rt_add(l_I_689, ((rt_int)1LL));
l_P_688 = ((*(R17 *)rt_nil_check(l_P_688))).f_NEXT;
}
RT_B_TICK();
} L_end690: ;
}
static R12 * r_FIND_LITERAL(R9 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_V_692; memset(&l_V_692, 0, sizeof l_V_692);
l_V_692 = r_VISIBLE_LITERAL(p_NAME, p_T);
if (((!(l_V_692 == NULL)) || (p_T == NULL)))
{
{ R12 * rv693 = l_V_692;
return rv693; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL))
{
{ R12 * rv694 = NULL;
return rv694; }
}
{
R17 * l_P_695; memset(&l_P_695, 0, sizeof l_P_695);
l_P_695 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
rt_int l_I_696; memset(&l_I_696, 0, sizeof l_I_696);
l_I_696 = ((rt_int)0LL);
for (;;) {
if ((l_P_695 == NULL)) goto L_end697;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_695))).f_NAME, p_NAME))
{
{
R12 * l_Y_698; memset(&l_Y_698, 0, sizeof l_Y_698);
l_Y_698 = r_NEW_SYM(g_Y_ENUMLIT, p_NAME);
((*(R12 *)rt_nil_check(l_Y_698))).f_T = ((*(R22 *)rt_nil_check(p_T))).f_BASE;
((*(R12 *)rt_nil_check(l_Y_698))).f_MV = l_I_696;
((*(R12 *)rt_nil_check(l_Y_698))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_698))).f_INPUT = 1;
{ R12 * rv699 = l_Y_698;
return rv699; }
}
}
l_I_696 = rt_add(l_I_696, ((rt_int)1LL));
l_P_695 = ((*(R17 *)rt_nil_check(l_P_695))).f_NEXT;
}
RT_B_TICK();
} L_end697: ;
}
{ R12 * rv700 = NULL;
return rv700; }
rt_raise(RT_X_INIT);
}
static R12 * r_VISIBLE_LITERAL(R9 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_701; memset(&l_Y_701, 0, sizeof l_Y_701);
l_Y_701 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_701 == NULL)) goto L_end702;
{
if ((((*(R12 *)rt_nil_check(l_Y_701))).f_KIND == g_Y_ENUMLIT))
{
if ((p_T == NULL))
{
{ R12 * rv703 = l_Y_701;
return rv703; }
}
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_701))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv704 = l_Y_701;
return rv704; }
}
}
l_Y_701 = r_LOOKUP_NEXT(l_Y_701);
}
RT_B_TICK();
} L_end702: ;
{ R12 * rv705 = NULL;
return rv705; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_CLASSES(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_706; memset(&l_Y_706, 0, sizeof l_Y_706);
l_Y_706 = r_LOOKUP(p_NAME);
rt_int l_N_707; memset(&l_N_707, 0, sizeof l_N_707);
l_N_707 = ((rt_int)0LL);
for (;;) {
if ((l_Y_706 == NULL)) goto L_end708;
{
if ((((*(R12 *)rt_nil_check(l_Y_706))).f_KIND == g_Y_ENUMLIT))
{
l_N_707 = rt_add(l_N_707, ((rt_int)1LL));
}
l_Y_706 = r_LOOKUP_NEXT(l_Y_706);
}
RT_B_TICK();
} L_end708: ;
{ rt_int rv709 = l_N_707;
return rv709; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE(R17 * p_TS) { RT_B_TICK(); 
{ R22 * rv710 = r_RESOLVE_NAMED(p_TS, r_NO_TEXT());
return rv710; }
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
R22 * l_N_711; memset(&l_N_711, 0, sizeof l_N_711);
if ((p_R == NULL))
{
{ R22 * rv712 = p_T;
return rv712; }
}
if ((r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(p_R))).f_A) || r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(p_R))).f_B)))
{
l_N_711 = r_COPY_TYP(p_T);
S_R9(&((*(R22 *)rt_nil_check(l_N_711))).f_NAME, r_NO_TEXT(), 0);
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_711))).f_LO_C, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NAME, (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN))), 0);
}
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_B))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_711))).f_HI_C, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_B))).f_NAME, (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN))), 0);
}
{ R22 * rv713 = l_N_711;
return rv713; }
}
if ((!((((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_R))).f_LINE, rt_str("a range is only for fixed, float and enumerated types (3.12.2)", 62));
}
l_N_711 = r_COPY_TYP(p_T);
S_R9(&((*(R22 *)rt_nil_check(l_N_711))).f_NAME, r_NO_TEXT(), 0);
((*(R22 *)rt_nil_check(l_N_711))).f_RLEVEL = r_CUR_LEVEL();
{
R26 l_LO_714; memset(&l_LO_714, 0, sizeof l_LO_714);
R26 l_HI_715; memset(&l_HI_715, 0, sizeof l_HI_715);
S_R26(&l_LO_714, r_EXPR(((*(R17 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R26(&l_HI_715, r_EXPR(((*(R17 *)rt_nil_check(p_R))).f_B, p_T), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_711))).f_LO_C, (l_LO_714).f_C, 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_711))).f_HI_C, (l_HI_715).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_711))).f_MLO, r_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_A), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_711))).f_MHI, r_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_B), 0);
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_711))).f_MLO, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_711))).f_MHI, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_B, p_T), 0);
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_714).f_T), r_REAL_TYPE(p_T))) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_715).f_T), r_REAL_TYPE(p_T)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_R))).f_LINE, rt_str("the bounds of a range must be of the class of the type (3.2.1, 3.3.1, 3.4.1)", 76));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_711))).f_LO_C, r_RESCALE(l_LO_714, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R17 *)rt_nil_check(p_R))).f_LINE), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_711))).f_HI_C, r_RESCALE(l_HI_715, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R17 *)rt_nil_check(p_R))).f_LINE), 0);
if ((((!(((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL))) || (!(((*(R22 *)rt_nil_check((l_LO_714).f_T))).f_SCALE == ((rt_int)0LL)))) || (!(((*(R22 *)rt_nil_check((l_HI_715).f_T))).f_SCALE == ((rt_int)0LL)))))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_711))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_711))).f_MHI, r_NO_MVAL(), 0);
}
}
}
if (((((*(R17 *)rt_nil_check(p_R))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(p_R))).f_IV == ((rt_int)3LL))))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_711))).f_LO_C, r_FMT1(rt_str("nextafter(@, INFINITY)", 22), ((*(R22 *)rt_nil_check(l_N_711))).f_LO_C), 0);
}
else
{
S_R9(&((*(R22 *)rt_nil_check(l_N_711))).f_LO_C, r_FMT1(rt_str("((@) + 1)", 9), ((*(R22 *)rt_nil_check(l_N_711))).f_LO_C), 0);
(((*(R22 *)rt_nil_check(l_N_711))).f_MLO).f_V = rt_add((((*(R22 *)rt_nil_check(l_N_711))).f_MLO).f_V, ((rt_int)1LL));
}
}
if ((((*(R17 *)rt_nil_check(p_R))).f_IV >= ((rt_int)2LL)))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_711))).f_HI_C, r_FMT1(rt_str("nextafter(@, -INFINITY)", 23), ((*(R22 *)rt_nil_check(l_N_711))).f_HI_C), 0);
}
else
{
S_R9(&((*(R22 *)rt_nil_check(l_N_711))).f_HI_C, r_FMT1(rt_str("((@) - 1)", 9), ((*(R22 *)rt_nil_check(l_N_711))).f_HI_C), 0);
(((*(R22 *)rt_nil_check(l_N_711))).f_MHI).f_V = rt_sub((((*(R22 *)rt_nil_check(l_N_711))).f_MHI).f_V, ((rt_int)1LL));
}
}
{ R22 * rv716 = l_N_711;
return rv716; }
rt_raise(RT_X_INIT);
}
static R23 r_ENUM_MANIFEST(R17 * p_E, R22 * p_T) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{
R12 * l_Y_717; memset(&l_Y_717, 0, sizeof l_Y_717);
l_Y_717 = r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, p_T);
if ((!(l_Y_717 == NULL)))
{
{ R23 rv718 = r_SOME(((*(R12 *)rt_nil_check(l_Y_717))).f_MV);
return rv718; }
}
}
}
{ R23 rv719 = r_MANIFEST(p_E);
return rv719; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_LEVEL(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_CS == NULL))
{
{ rt_int rv720 = ((rt_int)0LL);
return rv720; }
}
{ rt_int rv721 = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
return rv721; }
rt_raise(RT_X_INIT);
}
static R22 * r_ARG_TYPE(R17 * p_N) { RT_B_TICK(); 
{ R22 * rv722 = r_RESOLVE(r_EXPR_TO_TS(p_N));
return rv722; }
rt_raise(RT_X_INIT);
}
static R17 * r_NTH_ARG(R17 * p_TS, rt_int p_K) { RT_B_TICK(); 
R17 * l_A_723; memset(&l_A_723, 0, sizeof l_A_723);
l_A_723 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
{ rt_int it725_lo = ((rt_int)1LL), it725_hi = p_K;
for (rt_int it725 = it725_lo; it725 <= it725_hi; it725++) {
{
if ((l_A_723 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
l_A_723 = ((*(R17 *)rt_nil_check(l_A_723))).f_NEXT;
}
RT_B_TICK();
if (it725 == it725_hi) break;
} } L_end724: ;
if ((l_A_723 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
{ R17 * rv726 = l_A_723;
return rv726; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_NAMED(R17 * p_TS, R9 p_CNAME) { RT_B_TICK(); 
R22 * l_T_727; memset(&l_T_727, 0, sizeof l_T_727);
rt_int l_K_728; memset(&l_K_728, 0, sizeof l_K_728);
l_K_728 = ((*(R17 *)rt_nil_check(p_TS))).f_KIND;
if ((l_K_728 == g_TS_ARRAY))
{
{ R22 * rv729 = r_RESOLVE_ARRAY(p_TS);
return rv729; }
}
else if ((l_K_728 == g_TS_RECORD))
{
{ R22 * rv730 = r_RESOLVE_RECORD(p_TS, p_CNAME, NULL, NULL);
return rv730; }
}
else if ((l_K_728 == g_TS_ENUM))
{
l_T_727 = r_ENUM_CLASS(((*(R17 *)rt_nil_check(p_TS))).f_A, (((*(R17 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)), ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
if (((((*(R17 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("an UNORDERED type has no range", 30));
}
l_T_727 = r_WITH_RANGE(l_T_727, ((*(R17 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_727 = r_APPLY_REP(l_T_727, ((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv731 = l_T_727;
return rv731; }
}
else if ((l_K_728 == g_TS_GEN))
{
{ R22 * rv732 = r_GEN_TYPE(p_TS);
return rv732; }
}
else if ((!(l_K_728 == g_TS_NAME)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a type specification expected", 29));
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_FL == ((rt_int)3LL)))
{
l_T_727 = r_WITH_RANGE(r_TYPE_ATTR_TYPE(((*(R17 *)rt_nil_check(p_TS))).f_E), ((*(R17 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_727 = r_APPLY_REP(l_T_727, ((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv733 = l_T_727;
return rv733; }
}
l_T_727 = r_RESOLVE_PREDEFINED(p_TS);
if ((l_T_727 == NULL))
{
l_T_727 = r_RESOLVE_USER(p_TS);
}
l_T_727 = r_WITH_RANGE(l_T_727, ((*(R17 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_727 = r_APPLY_REP(l_T_727, ((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv734 = l_T_727;
return rv734; }
rt_raise(RT_X_INIT);
}
static R22 * r_APPLY_REP(R22 * p_T0, R17 * p_R0, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_735; memset(&l_T_735, 0, sizeof l_T_735);
l_T_735 = r_COPY_TYP(p_T0);
if ((((*(R22 *)rt_nil_check(p_T0))).f_KIND == g_T_ABS))
{
r_FAIL(p_LINE, rt_str("a REP clause is only for a member of a predefined type class (3.12.2)", 69));
}
((*(R22 *)rt_nil_check(l_T_735))).f_REPS = r_EXPAND_REP(p_R0, p_T0, p_LINE);
r_CHECK_REP_CLASS(l_T_735, p_LINE);
if ((((*(R22 *)rt_nil_check(l_T_735))).f_KIND == g_T_ENUM))
{
r_CHECK_ENUM_REP(l_T_735, p_LINE);
}
else if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_735))).f_REPS))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("ENUM_VAL_REP is only for UNORDERED types (3.4.3)", 48));
}
{ R22 * rv736 = l_T_735;
return rv736; }
rt_raise(RT_X_INIT);
}
static R17 * r_EXPAND_REP(R17 * p_R, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_737; memset(&l_Y_737, 0, sizeof l_Y_737);
if ((p_R == NULL))
{
{ R17 * rv738 = p_R;
return rv738; }
}
if ((((*(R17 *)rt_nil_check(p_R))).f_KIND == g_TS_GEN))
{
{ R17 * rv739 = p_R;
return rv739; }
}
l_Y_737 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_R))).f_NAME);
if ((l_Y_737 == NULL))
{
{ R17 * rv740 = p_R;
return rv740; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_737))).f_KIND == g_Y_REPTYPE)))
{
{ R17 * rv741 = p_R;
return rv741; }
}
if (((*(R12 *)rt_nil_check(l_Y_737))).f_BUSY)
{
r_FAILT(p_LINE, rt_str("a circular reptype declaration (3.12.3): ", 41), ((*(R17 *)rt_nil_check(p_R))).f_NAME);
}
{
R17 * l_D_742; memset(&l_D_742, 0, sizeof l_D_742);
l_D_742 = ((*(R12 *)rt_nil_check(l_Y_737))).f_DECL;
R17 * l_X_743; memset(&l_X_743, 0, sizeof l_X_743);
l_X_743 = r_NEW_NODE(g_N_REP, ((*(R17 *)rt_nil_check(p_R))).f_LINE);
R17 * l_HEAD_744; memset(&l_HEAD_744, 0, sizeof l_HEAD_744);
l_HEAD_744 = NULL;
R17 * l_TAIL_745; memset(&l_TAIL_745, 0, sizeof l_TAIL_745);
l_TAIL_745 = NULL;
((*(R12 *)rt_nil_check(l_Y_737))).f_BUSY = 1;
r_OPEN_SCOPE();
if (((!(((*(R17 *)rt_nil_check(l_D_742))).f_A == NULL)) || (!(((*(R17 *)rt_nil_check(p_R))).f_A == NULL))))
{
r_BIND_FORMALS(((*(R17 *)rt_nil_check(l_D_742))).f_A, p_R);
}
if ((!(((*(R17 *)rt_nil_check(l_D_742))).f_C == NULL)))
{
{
R12 * l_B_746; memset(&l_B_746, 0, sizeof l_B_746);
l_B_746 = r_NEW_SYM(g_Y_TYPE, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_742))).f_C))).f_NAME);
((*(R12 *)rt_nil_check(l_B_746))).f_T = p_T;
r_DEFINE(l_B_746, p_LINE);
}
}
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
S_R9(&((*(R17 *)rt_nil_check(l_X_743))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_742))).f_B))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_X_743))).f_B = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_742))).f_B))).f_B;
((*(R17 *)rt_nil_check(l_X_743))).f_C = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_742))).f_B))).f_C;
if (r_TEQS(((*(R17 *)rt_nil_check(l_X_743))).f_NAME, rt_str("RECORD_REP", 10)))
{
l_HEAD_744 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_742))).f_B))).f_A;
}
else
{
{
R17 * l_A_747; memset(&l_A_747, 0, sizeof l_A_747);
l_A_747 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_742))).f_B))).f_A;
for (;;) {
if ((l_A_747 == NULL)) goto L_end748;
{
r_ADD_LIST(r_REP_ARG_VALUE(l_A_747), &l_HEAD_744, &l_TAIL_745);
l_A_747 = ((*(R17 *)rt_nil_check(l_A_747))).f_NEXT;
}
RT_B_TICK();
} L_end748: ;
}
}
((*(R17 *)rt_nil_check(l_X_743))).f_A = l_HEAD_744;
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
r_CLOSE_SCOPE();
l_X_743 = r_EXPAND_REP(l_X_743, p_T, p_LINE);
((*(R12 *)rt_nil_check(l_Y_737))).f_BUSY = 0;
{ R17 * rv749 = l_X_743;
return rv749; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_REP_ARG_VALUE(R17 * p_A) { RT_B_TICK(); 
R17 * l_N_750; memset(&l_N_750, 0, sizeof l_N_750);
R23 l_M_751; memset(&l_M_751, 0, sizeof l_M_751);
if (((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_752; memset(&l_Y_752, 0, sizeof l_Y_752);
l_Y_752 = r_LOOKUP(((*(R17 *)rt_nil_check(p_A))).f_NAME);
if (((l_Y_752 == NULL) || (((!(l_Y_752 == NULL)) && (((*(R12 *)rt_nil_check(l_Y_752))).f_KIND == g_Y_ENUMLIT)))))
{
l_N_750 = r_NEW_NODE(((*(R17 *)rt_nil_check(p_A))).f_KIND, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_750))).f_NAME, ((*(R17 *)rt_nil_check(p_A))).f_NAME, 0);
{ R17 * rv753 = l_N_750;
return rv753; }
}
if (((((*(R12 *)rt_nil_check(l_Y_752))).f_KIND == g_Y_CONST) && (!(((*(R12 *)rt_nil_check(l_Y_752))).f_T == NULL))))
{
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_752))).f_T)))).f_KIND == g_T_ENUM) && ((*(R12 *)rt_nil_check(l_Y_752))).f_HASMV))
{
{
R17 * l_L_754; memset(&l_L_754, 0, sizeof l_L_754);
l_L_754 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_752))).f_T)))).f_BASE))).f_LITS;
rt_int l_I_755; memset(&l_I_755, 0, sizeof l_I_755);
l_I_755 = ((rt_int)0LL);
for (;;) {
if (((l_L_754 == NULL) || (l_I_755 == ((*(R12 *)rt_nil_check(l_Y_752))).f_MV))) goto L_end756;
{
l_I_755 = rt_add(l_I_755, ((rt_int)1LL));
l_L_754 = ((*(R17 *)rt_nil_check(l_L_754))).f_NEXT;
}
RT_B_TICK();
} L_end756: ;
if ((!(l_L_754 == NULL)))
{
l_N_750 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_750))).f_NAME, ((*(R17 *)rt_nil_check(l_L_754))).f_NAME, 0);
{ R17 * rv757 = l_N_750;
return rv757; }
}
}
}
}
}
}
S_R23(&l_M_751, r_MANIFEST(p_A), 0);
if ((!(l_M_751).f_OK))
{
{
R14 l_SAVED_CODE_758; memset(&l_SAVED_CODE_758, 0, sizeof l_SAVED_CODE_758);
S_R14(&l_SAVED_CODE_758, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_759; memset(&l_V_759, 0, sizeof l_V_759);
S_R26(&l_V_759, r_EXPR(p_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_758, 0);
}
{ R17 * rv760 = p_A;
return rv760; }
}
l_N_750 = r_NEW_NODE(g_N_INT, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
if (((l_M_751).f_V < ((rt_int)0LL)))
{
((*(R17 *)rt_nil_check(l_N_750))).f_IV = rt_neg((l_M_751).f_V);
S_R9(&((*(R17 *)rt_nil_check(l_N_750))).f_NAME, r_NUM(rt_neg((l_M_751).f_V)), 0);
{
R17 * l_U_761; memset(&l_U_761, 0, sizeof l_U_761);
l_U_761 = r_NEW_NODE(g_N_UNOP, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_U_761))).f_NAME, r_MK(rt_str("-", 1)), 0);
((*(R17 *)rt_nil_check(l_U_761))).f_A = l_N_750;
{ R17 * rv762 = l_U_761;
return rv762; }
}
}
((*(R17 *)rt_nil_check(l_N_750))).f_IV = (l_M_751).f_V;
S_R9(&((*(R17 *)rt_nil_check(l_N_750))).f_NAME, r_NUM((l_M_751).f_V), 0);
{ R17 * rv763 = l_N_750;
return rv763; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_REP_CLASS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_764; memset(&l_R_764, 0, sizeof l_R_764);
l_R_764 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
rt_int l_K_765; memset(&l_K_765, 0, sizeof l_K_765);
l_K_765 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
rt_int l_OK_766; memset(&l_OK_766, 0, sizeof l_OK_766);
l_OK_766 = 0;
if ((((*(R17 *)rt_nil_check(l_R_764))).f_KIND == g_TS_GEN))
{
return;
}
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R17 *)rt_nil_check(l_R_764))).f_NAME) == NULL)))
{
return;
}
if ((!(r_LOOKUP(((*(R17 *)rt_nil_check(l_R_764))).f_NAME) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_LOOKUP(((*(R17 *)rt_nil_check(l_R_764))).f_NAME)))).f_KIND == g_Y_GEN))
{
return;
}
}
{
R9 l_N_767; memset(&l_N_767, 0, sizeof l_N_767);
S_R9(&l_N_767, ((*(R17 *)rt_nil_check(l_R_764))).f_NAME, 0);
if ((l_K_765 == g_T_INT))
{
l_OK_766 = (r_TEQS(l_N_767, rt_str("FIXED_STD", 9)) || r_TEQS(l_N_767, rt_str("FIXED_REP", 9)));
}
else if ((l_K_765 == g_T_FLOAT))
{
l_OK_766 = r_TEQS(l_N_767, rt_str("FLOAT_STD", 9));
}
else if ((l_K_765 == g_T_BOOL))
{
l_OK_766 = r_TEQS(l_N_767, rt_str("BOOLEAN_STD", 11));
}
else if ((l_K_765 == g_T_ENUM))
{
l_OK_766 = ((r_TEQS(l_N_767, rt_str("ENUM_STD", 8)) || r_TEQS(l_N_767, rt_str("ENUM_REP", 8))) || r_TEQS(l_N_767, rt_str("ENUM_VAL_REP", 12)));
}
else if ((l_K_765 == g_T_STR))
{
l_OK_766 = (r_TEQS(l_N_767, rt_str("CHAR_STR_STD", 12)) || r_TEQS(l_N_767, rt_str("CHAR_STR_REP", 12)));
}
else if ((l_K_765 == g_T_BITS))
{
l_OK_766 = r_TEQS(l_N_767, rt_str("BIT_STD", 7));
}
else if ((l_K_765 == g_T_ARR))
{
l_OK_766 = (r_TEQS(l_N_767, rt_str("ARRAY_STD", 9)) || r_TEQS(l_N_767, rt_str("ARRAY_REP", 9)));
}
else if ((l_K_765 == g_T_REC))
{
l_OK_766 = (r_TEQS(l_N_767, rt_str("RECORD_STD", 10)) || r_TEQS(l_N_767, rt_str("RECORD_REP", 10)));
}
else if ((l_K_765 == g_T_PTR))
{
l_OK_766 = r_TEQS(l_N_767, rt_str("PTR_STD", 7));
}
else if ((l_K_765 == g_T_SEM))
{
l_OK_766 = r_TEQS(l_N_767, rt_str("SEMAPHORE_STD", 13));
}
else if ((l_K_765 == g_T_TYPE))
{
l_OK_766 = 1;
}
if ((!l_OK_766))
{
r_FAILT(p_LINE, rt_str("the representation does not suit the type class (3.12.4): ", 58), l_N_767);
}
if (r_TEQS(l_N_767, rt_str("FIXED_REP", 9)))
{
r_CHECK_FIXED_REP(p_T, p_LINE);
}
}
}
static rt_int r_POW2(rt_int p_N) { RT_B_TICK(); 
rt_int l_P_768; memset(&l_P_768, 0, sizeof l_P_768);
l_P_768 = ((rt_int)1LL);
{ rt_int it770_lo = ((rt_int)1LL), it770_hi = p_N;
for (rt_int it770 = it770_lo; it770 <= it770_hi; it770++) {
{
l_P_768 = rt_mul(l_P_768, ((rt_int)2LL));
}
RT_B_TICK();
if (it770 == it770_hi) break;
} } L_end769: ;
{ rt_int rv771 = l_P_768;
return rv771; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_772; memset(&l_R_772, 0, sizeof l_R_772);
l_R_772 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
rt_int l_UNSIGNED_773; memset(&l_UNSIGNED_773, 0, sizeof l_UNSIGNED_773);
l_UNSIGNED_773 = 0;
if ((((*(R17 *)rt_nil_check(l_R_772))).f_A == NULL))
{
r_FAIL(p_LINE, rt_str("FIXED_REP takes a size and a signing (3.2.3 [3-55])", 51));
}
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_772))).f_A))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_772))).f_A))).f_KIND == g_N_DONTCARE)))
{
return;
}
{
R23 l_N_774; memset(&l_N_774, 0, sizeof l_N_774);
S_R23(&l_N_774, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_772))).f_A), 0);
if ((!(l_N_774).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of FIXED_REP is a manifest integer (3.2.3 [3-56])", 58));
}
if ((((l_N_774).f_V < ((rt_int)0LL)) || ((l_N_774).f_V > ((*(R7 *)rt_nil_check(g_W))).f_WORD)))
{
r_FAIL(p_LINE, rt_str("the size of FIXED_REP is in [0:P], P the default size (3.2.3)", 61));
}
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_772))).f_A))).f_NEXT == NULL)))
{
{
R17 * l_S_775; memset(&l_S_775, 0, sizeof l_S_775);
l_S_775 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_772))).f_A))).f_NEXT;
if (((((*(R17 *)rt_nil_check(l_S_775))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_S_775))).f_KIND == g_N_DONTCARE)))
{
return;
}
if ((!(((((((*(R17 *)rt_nil_check(l_S_775))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_S_775))).f_KIND == g_N_ENUMLIT))) && ((r_TEQS(((*(R17 *)rt_nil_check(l_S_775))).f_NAME, rt_str("SIGNED", 6)) || r_TEQS(((*(R17 *)rt_nil_check(l_S_775))).f_NAME, rt_str("UNSIGNED", 8))))))))
{
r_FAIL(p_LINE, rt_str("the signing of FIXED_REP is a manifest value of SIGNING (3.2.3 [3-57])", 70));
}
l_UNSIGNED_773 = r_TEQS(((*(R17 *)rt_nil_check(l_S_775))).f_NAME, rt_str("UNSIGNED", 8));
if ((!(((*(R17 *)rt_nil_check(l_S_775))).f_NEXT == NULL)))
{
r_FAIL(p_LINE, rt_str("FIXED_REP takes a size and a signing (3.2.3 [3-55])", 51));
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_REPCONV)
{
return;
}
if (l_UNSIGNED_773)
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
if (((((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK) && ((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN > ((rt_int)0LL))) && ((l_N_774).f_V < ((rt_int)63LL))))
{
{
rt_int l_LO_776; memset(&l_LO_776, 0, sizeof l_LO_776);
l_LO_776 = ((rt_int)0LL);
rt_int l_HI_777; memset(&l_HI_777, 0, sizeof l_HI_777);
l_HI_777 = ((rt_int)0LL);
if (l_UNSIGNED_773)
{
l_HI_777 = rt_sub(r_POW2((l_N_774).f_V), ((rt_int)1LL));
}
else if (((l_N_774).f_V > ((rt_int)0LL)))
{
l_LO_776 = rt_neg(r_POW2(rt_sub((l_N_774).f_V, ((rt_int)1LL))));
l_HI_777 = rt_sub(r_POW2(rt_sub((l_N_774).f_V, ((rt_int)1LL))), ((rt_int)1LL));
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_V < l_LO_776) || ((((*(R22 *)rt_nil_check(p_T))).f_MHI).f_V > l_HI_777)))
{
r_FAIL(p_LINE, rt_str("the range of the type exceeds what the size of FIXED_REP represents (3.2.3)", 75));
}
}
}
}
}
static R22 * r_TYPE_ATTR_TYPE(R17 * p_E) { RT_B_TICK(); 
R22 * l_T_778; memset(&l_T_778, 0, sizeof l_T_778);
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type-valued attribute expected", 32));
}
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_IS_TYPE_ATTR(((*(R17 *)rt_nil_check(p_E))).f_A)))
{
l_T_778 = r_TYPE_ATTR_TYPE(((*(R17 *)rt_nil_check(p_E))).f_A);
}
else
{
{
R14 l_SAVED_CODE_779; memset(&l_SAVED_CODE_779, 0, sizeof l_SAVED_CODE_779);
S_R14(&l_SAVED_CODE_779, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
l_T_778 = (r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(p_E))).f_A)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_779, 0);
}
}
{
R22 * l_R_780; memset(&l_R_780, 0, sizeof l_R_780);
l_R_780 = r_REAL_TYPE(l_T_778);
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)))
{
if ((((*(R22 *)rt_nil_check(l_R_780))).f_KIND == g_T_ARR))
{
{ R22 * rv781 = ((*(R22 *)rt_nil_check(l_R_780))).f_ELEM;
return rv781; }
}
else if ((((*(R22 *)rt_nil_check(l_R_780))).f_KIND == g_T_PTR))
{
{ R22 * rv782 = r_TARGET(l_R_780);
return rv782; }
}
}
else if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7)) && (((*(R22 *)rt_nil_check(l_R_780))).f_KIND == g_T_STR)))
{
{ R22 * rv783 = r_CHARSET_OF(l_R_780);
return rv783; }
}
if ((((*(R22 *)rt_nil_check(l_R_780))).f_KIND == g_T_REC))
{
{
R12 * l_C_784; memset(&l_C_784, 0, sizeof l_C_784);
l_C_784 = r_RECORD_CLASS_OF(l_R_780);
if ((!(l_C_784 == NULL)))
{
{
R21 * l_B_785; memset(&l_B_785, 0, sizeof l_B_785);
l_B_785 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_784))).f_BINDINGS, ((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_785 == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(l_B_785))).f_T == NULL)))
{
{ R22 * rv786 = ((*(R21 *)rt_nil_check(l_B_785))).f_T;
return rv786; }
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
{ rt_int rv787 = 0;
return rv787; }
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7))))
{
{ rt_int rv788 = 1;
return rv788; }
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_789; memset(&l_Y_789, 0, sizeof l_Y_789);
l_Y_789 = r_LOOKUP(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME);
if ((!(l_Y_789 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_789))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_789))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_789))).f_T == NULL))))
{
{
R22 * l_R_790; memset(&l_R_790, 0, sizeof l_R_790);
l_R_790 = r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_789))).f_T);
if ((((*(R22 *)rt_nil_check(l_R_790))).f_KIND == g_T_REC))
{
{
R12 * l_C_791; memset(&l_C_791, 0, sizeof l_C_791);
l_C_791 = r_RECORD_CLASS_OF(l_R_790);
if ((!(l_C_791 == NULL)))
{
if ((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_791))).f_BINDINGS, ((*(R17 *)rt_nil_check(p_E))).f_NAME) == NULL)))
{
{ rt_int rv792 = 1;
return rv792; }
}
}
}
}
}
}
}
}
}
{ rt_int rv793 = 0;
return rv793; }
rt_raise(RT_X_INIT);
}
static R22 * r_GEN_TYPE(R17 * p_TS) { RT_B_TICK(); 
R21 * l_B_794; memset(&l_B_794, 0, sizeof l_B_794);
l_B_794 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_794 == NULL)) goto L_end795;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_794))).f_NAME, ((*(R17 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R21 *)rt_nil_check(l_B_794))).f_T == NULL))))
{
{ R22 * rv796 = ((*(R21 *)rt_nil_check(l_B_794))).f_T;
return rv796; }
}
l_B_794 = ((*(R21 *)rt_nil_check(l_B_794))).f_NEXT;
}
RT_B_TICK();
} L_end795: ;
{
R12 * l_Y_797; memset(&l_Y_797, 0, sizeof l_Y_797);
l_Y_797 = r_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_797 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_797))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_797))).f_T == NULL))))
{
{ R22 * rv798 = ((*(R12 *)rt_nil_check(l_Y_797))).f_T;
return rv798; }
}
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a derived generic type outside a formal parameter list: \?", 57), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_PREDEFINED(R17 * p_TS) { RT_B_TICK(); 
R9 l_NAME_799; memset(&l_NAME_799, 0, sizeof l_NAME_799);
S_R9(&l_NAME_799, ((*(R17 *)rt_nil_check(p_TS))).f_NAME, 0);
R22 * l_T_800; memset(&l_T_800, 0, sizeof l_T_800);
if (r_TEQS(l_NAME_799, rt_str("FIXED", 5)))
{
{
R23 l_S_801; memset(&l_S_801, 0, sizeof l_S_801);
S_R23(&l_S_801, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_802; memset(&l_R_802, 0, sizeof l_R_802);
S_R23(&l_R_802, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
R17 * l_P_803; memset(&l_P_803, 0, sizeof l_P_803);
l_P_803 = r_NTH_ARG(p_TS, ((rt_int)2LL));
r_TYPE_ARG_COUNT(p_TS, ((rt_int)3LL));
if ((!((l_R_802).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("only radix 2 is predefined (3.2.1)", 34));
}
r_CHECK_PRECISION_ARG(l_P_803, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
if (((l_S_801).f_V == ((rt_int)0LL)))
{
{ R22 * rv804 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv804; }
}
l_T_800 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_800))).f_SCALE = (l_S_801).f_V;
{ R22 * rv805 = l_T_800;
return rv805; }
}
}
else if (r_TEQS(l_NAME_799, rt_str("FLOAT", 5)))
{
{
R23 l_P_806; memset(&l_P_806, 0, sizeof l_P_806);
S_R23(&l_P_806, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
l_T_800 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_800))).f_SCALE = (l_P_806).f_V;
{ R22 * rv807 = l_T_800;
return rv807; }
}
}
else if (r_TEQS(l_NAME_799, rt_str("BIT", 3)))
{
l_T_800 = r_NEW_TYP(g_T_BITS);
r_STRING_LENGTH(l_T_800, r_NTH_ARG(p_TS, ((rt_int)0LL)));
{ R22 * rv808 = l_T_800;
return rv808; }
}
else if ((r_TEQS(l_NAME_799, rt_str("CHAR_STR", 8)) || r_TEQS(l_NAME_799, rt_str("ASCII_STR", 9))))
{
l_T_800 = r_NEW_TYP(g_T_STR);
r_STRING_LENGTH(l_T_800, r_NTH_ARG(p_TS, ((rt_int)0LL)));
((*(R22 *)rt_nil_check(l_T_800))).f_BASE = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
if (r_TEQS(l_NAME_799, rt_str("CHAR_STR", 8)))
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)2LL));
{
R17 * l_CS_809; memset(&l_CS_809, 0, sizeof l_CS_809);
l_CS_809 = r_NTH_ARG(p_TS, ((rt_int)1LL));
R22 * l_C_810; memset(&l_C_810, 0, sizeof l_C_810);
if (((((*(R17 *)rt_nil_check(l_CS_809))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_CS_809))).f_KIND == g_N_DONTCARE)))
{
((*(R22 *)rt_nil_check(l_T_800))).f_BASE = NULL;
{ R22 * rv811 = l_T_800;
return rv811; }
}
if (((((*(R17 *)rt_nil_check(l_CS_809))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(l_CS_809))).f_NAME, rt_str("CHARSET", 7))))
{
{
R14 l_SAVED_CODE_812; memset(&l_SAVED_CODE_812, 0, sizeof l_SAVED_CODE_812);
S_R14(&l_SAVED_CODE_812, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_813; memset(&l_V_813, 0, sizeof l_V_813);
S_R26(&l_V_813, r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(l_CS_809))).f_A), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_812, 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_813).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("CHARSET is an attribute of character strings (3.7.1)", 52));
}
((*(R22 *)rt_nil_check(l_T_800))).f_BASE = r_CHARSET_OF((l_V_813).f_T);
}
{ R22 * rv814 = l_T_800;
return rv814; }
}
l_C_810 = r_REAL_TYPE(r_ARG_TYPE(l_CS_809));
if ((!(((*(R22 *)rt_nil_check(l_C_810))).f_KIND == g_T_ENUM)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset must be an enumerated type (3.7.1)", 44));
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_810))).f_BASE))).f_UNORDERED || (!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_810))).f_BASE))).f_LITS))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset is an ordered enumerated type with a literal \\'C' (3.7.1, 3.7.2)", 74));
}
((*(R22 *)rt_nil_check(l_T_800))).f_BASE = ((*(R22 *)rt_nil_check(l_C_810))).f_BASE;
}
}
else
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
}
{ R22 * rv815 = l_T_800;
return rv815; }
}
else if (r_TEQS(l_NAME_799, rt_str("PTR", 3)))
{
l_T_800 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_T_800))).f_TARGET_TS = r_NTH_ARG(p_TS, ((rt_int)0LL));
{ R22 * rv816 = l_T_800;
return rv816; }
}
else if (r_TEQS(l_NAME_799, rt_str("SEMAPHORE", 9)))
{
l_T_800 = r_NEW_TYP(g_T_SEM);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
{
R17 * l_U_817; memset(&l_U_817, 0, sizeof l_U_817);
l_U_817 = r_NTH_ARG(p_TS, ((rt_int)0LL));
R22 * l_UT_818; memset(&l_UT_818, 0, sizeof l_UT_818);
l_UT_818 = r_RESOLVE_USER_NAME(r_MK(rt_str("USAGE", 5)), ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
R23 l_M_819; memset(&l_M_819, 0, sizeof l_M_819);
S_R23(&l_M_819, r_NO_MVAL(), 0);
if (((((*(R17 *)rt_nil_check(l_U_817))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_U_817))).f_KIND == g_N_DONTCARE)))
{
S_R23(&l_M_819, r_SOME(((rt_int)0LL)), 0);
}
else if (((((((*(R17 *)rt_nil_check(l_U_817))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_U_817))).f_KIND == g_N_ENUMLIT))) && (!(r_FIND_LITERAL(((*(R17 *)rt_nil_check(l_U_817))).f_NAME, l_UT_818) == NULL))))
{
S_R23(&l_M_819, r_ENUM_MANIFEST(l_U_817, l_UT_818), 0);
}
else
{
{
R14 l_SAVED_CODE_820; memset(&l_SAVED_CODE_820, 0, sizeof l_SAVED_CODE_820);
S_R14(&l_SAVED_CODE_820, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_821; memset(&l_V_821, 0, sizeof l_V_821);
S_R26(&l_V_821, r_EXPR(l_U_817, l_UT_818), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_820, 0);
if (r_SAME_CLASS(r_REAL_TYPE((l_V_821).f_T), r_REAL_TYPE(l_UT_818)))
{
S_R23(&l_M_819, r_MANIFEST(l_U_817), 0);
}
}
}
if ((!(l_M_819).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("the use mode is a manifest value of USAGE, SYNCH or REGION (3.11.1)", 67));
}
((*(R22 *)rt_nil_check(l_T_800))).f_SCALE = (l_M_819).f_V;
}
{ R22 * rv822 = l_T_800;
return rv822; }
}
{ R22 * rv823 = NULL;
return rv823; }
rt_raise(RT_X_INIT);
}
static void r_TYPE_ARG_COUNT(R17 * p_TS, rt_int p_N) { RT_B_TICK(); 
if ((!(r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_TS))).f_A) == p_N)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("the wrong number of arguments for the type ", 43), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
}
static R23 r_MANIFEST_INTEGER_ARG(R17 * p_A, rstr p_WHAT, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
R23 l_M_824; memset(&l_M_824, 0, sizeof l_M_824);
S_R23(&l_M_824, r_MANIFEST(p_A), 0);
if ((!(l_M_824).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" must be manifest (3.2.1, 3.3.1)", 32)));
}
if ((((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) && (!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))) && (!r_BOUND_NAME(p_A))))
{
{
R14 l_SAVED_CODE_825; memset(&l_SAVED_CODE_825, 0, sizeof l_SAVED_CODE_825);
S_R14(&l_SAVED_CODE_825, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R22 * l_T_826; memset(&l_T_826, 0, sizeof l_T_826);
l_T_826 = (r_EXPR(p_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_825, 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_T_826)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_826))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is an integer (3.2.1, 3.3.1)", 29)));
}
}
}
if ((((l_M_824).f_V < p_LO) || ((l_M_824).f_V > p_HI)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is out of the range of the attribute (3.2.1, 3.3.1)", 52)));
}
{ R23 rv827 = l_M_824;
return rv827; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOUND_NAME(R17 * p_A) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv828 = 0;
return rv828; }
}
{ rt_int rv829 = (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R17 *)rt_nil_check(p_A))).f_NAME) == NULL));
return rv829; }
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
R12 * l_Y_830; memset(&l_Y_830, 0, sizeof l_Y_830);
l_Y_830 = r_LOOKUP(((*(R17 *)rt_nil_check(p_P))).f_NAME);
if ((!(l_Y_830 == NULL)))
{
if ((((((*(R12 *)rt_nil_check(l_Y_830))).f_KIND == g_Y_GEN) || (((*(R12 *)rt_nil_check(l_Y_830))).f_KIND == g_Y_CONST)) || (((((*(R12 *)rt_nil_check(l_Y_830))).f_KIND == g_Y_TYPE) && (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R17 *)rt_nil_check(p_P))).f_NAME) == NULL))))))
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
R17 * l_R_831; memset(&l_R_831, 0, sizeof l_R_831);
l_R_831 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
R9 l_NAME_832; memset(&l_NAME_832, 0, sizeof l_NAME_832);
S_R9(&l_NAME_832, ((*(R17 *)rt_nil_check(l_R_831))).f_NAME, 0);
if ((((*(R17 *)rt_nil_check(l_R_831))).f_KIND == g_TS_GEN))
{
return;
}
if ((r_TEQS(l_NAME_832, rt_str("ENUM_STD", 8)) || (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, l_NAME_832) == NULL))))
{
return;
}
if ((!((r_TEQS(l_NAME_832, rt_str("ENUM_REP", 8)) || r_TEQS(l_NAME_832, rt_str("ENUM_VAL_REP", 12))))))
{
if ((!(r_ORIG_LOOKUP(l_NAME_832) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(l_NAME_832)))).f_KIND == g_Y_REPTYPE))
{
return;
}
}
r_FAILT(p_LINE, rt_str("not a representation of an enumerated type (3.4.3): ", 52), l_NAME_832);
}
if ((((*(R17 *)rt_nil_check(l_R_831))).f_A == NULL))
{
r_FAILT(p_LINE, rt_str("the size of the representation is missing: ", 43), l_NAME_832);
}
{
R23 l_N_833; memset(&l_N_833, 0, sizeof l_N_833);
S_R23(&l_N_833, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_831))).f_A), 0);
rt_int l_NL_834; memset(&l_NL_834, 0, sizeof l_NL_834);
l_NL_834 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS;
if ((!(l_N_833).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is manifest (3.4.3)", 60));
}
if ((((l_N_833).f_V > ((rt_int)64LL)) || ((l_N_833).f_V < ((rt_int)0LL))))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is in [0:(FIXED.SIZE).MAX] (3.4.3)", 75));
}
if (r_TEQS(l_NAME_832, rt_str("ENUM_REP", 8)))
{
if ((!(((*(R17 *)rt_nil_check(l_R_831))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("VALUES belong to ENUM_VAL_REP (3.4.3)", 37));
}
if (((l_N_833).f_V < r_BITS_FOR(l_NL_834)))
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
R17 * l_L_835; memset(&l_L_835, 0, sizeof l_L_835);
l_L_835 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
for (;;) {
if ((l_L_835 == NULL)) goto L_end836;
{
{
R17 * l_V_837; memset(&l_V_837, 0, sizeof l_V_837);
l_V_837 = ((*(R17 *)rt_nil_check(l_R_831))).f_B;
rt_int l_FOUND_838; memset(&l_FOUND_838, 0, sizeof l_FOUND_838);
l_FOUND_838 = ((rt_int)0LL);
for (;;) {
if ((l_V_837 == NULL)) goto L_end839;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_V_837))).f_NAME, ((*(R17 *)rt_nil_check(l_L_835))).f_NAME))
{
l_FOUND_838 = rt_add(l_FOUND_838, ((rt_int)1LL));
}
l_V_837 = ((*(R17 *)rt_nil_check(l_V_837))).f_NEXT;
}
RT_B_TICK();
} L_end839: ;
if ((!(l_FOUND_838 == ((rt_int)1LL))))
{
r_FAILT(p_LINE, rt_str("VALUES must give every literal once (3.4.3): ", 45), ((*(R17 *)rt_nil_check(l_L_835))).f_NAME);
}
}
l_L_835 = ((*(R17 *)rt_nil_check(l_L_835))).f_NEXT;
}
RT_B_TICK();
} L_end836: ;
}
{
R17 * l_V_840; memset(&l_V_840, 0, sizeof l_V_840);
l_V_840 = ((*(R17 *)rt_nil_check(l_R_831))).f_B;
for (;;) {
if ((l_V_840 == NULL)) goto L_end841;
{
if ((r_FIND_LITERAL(((*(R17 *)rt_nil_check(l_V_840))).f_NAME, ((*(R22 *)rt_nil_check(p_T))).f_BASE) == NULL))
{
r_FAILT(p_LINE, rt_str("not a literal of the type: ", 27), ((*(R17 *)rt_nil_check(l_V_840))).f_NAME);
}
{
R14 l_SAVED_CODE_842; memset(&l_SAVED_CODE_842, 0, sizeof l_SAVED_CODE_842);
S_R14(&l_SAVED_CODE_842, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_B_843; memset(&l_B_843, 0, sizeof l_B_843);
S_R26(&l_B_843, r_EXPR(((*(R17 *)rt_nil_check(l_V_840))).f_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_842, 0);
if ((!(((*(R22 *)rt_nil_check((l_B_843).f_T))).f_KIND == g_T_BITS)))
{
r_FAIL(p_LINE, rt_str("a representation in VALUES is a bitstring (3.4.3)", 49));
}
if ((((*(R22 *)rt_nil_check((l_B_843).f_T))).f_MLEN).f_OK)
{
if ((!((((*(R22 *)rt_nil_check((l_B_843).f_T))).f_MLEN).f_V == (l_N_833).f_V)))
{
r_FAILT(p_LINE, rt_str("the representation must have SIZE bits (3.4.3): ", 48), ((*(R17 *)rt_nil_check(l_V_840))).f_NAME);
}
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_840))).f_A))).f_KIND == g_N_BITS))
{
{
R17 * l_U_844; memset(&l_U_844, 0, sizeof l_U_844);
l_U_844 = ((*(R17 *)rt_nil_check(l_V_840))).f_NEXT;
for (;;) {
if ((l_U_844 == NULL)) goto L_end845;
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_844))).f_A))).f_KIND == g_N_BITS))
{
if (r_TEQ(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_844))).f_A))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_840))).f_A))).f_NAME))
{
r_FAILT(p_LINE, rt_str("two literals have the same representation (3.4.3): ", 51), ((*(R17 *)rt_nil_check(l_U_844))).f_NAME);
}
}
l_U_844 = ((*(R17 *)rt_nil_check(l_U_844))).f_NEXT;
}
RT_B_TICK();
} L_end845: ;
}
}
}
l_V_840 = ((*(R17 *)rt_nil_check(l_V_840))).f_NEXT;
}
RT_B_TICK();
} L_end841: ;
}
}
}
static void r_STRING_LENGTH(R22 * p_T, R17 * p_A) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
{
R21 * l_B_846; memset(&l_B_846, 0, sizeof l_B_846);
l_B_846 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_846 == NULL)) goto L_end847;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_846))).f_NAME, ((*(R17 *)rt_nil_check(p_A))).f_NAME) && ((((*(R21 *)rt_nil_check(l_B_846))).f_C).f_LEN > ((rt_int)0LL))))
{
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, ((*(R21 *)rt_nil_check(l_B_846))).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, ({ R23 rc848; memset(&rc848, 0, sizeof rc848);  rc848.f_OK = ((*(R21 *)rt_nil_check(l_B_846))).f_HASMV; rc848.f_V = ((*(R21 *)rt_nil_check(l_B_846))).f_MV; rc848; }), 0);
return;
}
l_B_846 = ((*(R21 *)rt_nil_check(l_B_846))).f_NEXT;
}
RT_B_TICK();
} L_end847: ;
}
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_GEN, ((*(R17 *)rt_nil_check(p_A))).f_NAME, 0);
return;
}
else if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return;
}
{
R9 l_C_849; memset(&l_C_849, 0, sizeof l_C_849);
R23 l_M_850; memset(&l_M_850, 0, sizeof l_M_850);
r_ATTR_VALUE(p_A, &l_C_849, &l_M_850);
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, l_C_849, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, l_M_850, 0);
((*(R22 *)rt_nil_check(p_T))).f_RLEVEL = r_CUR_LEVEL();
}
}
static R22 * r_RESOLVE_ARRAY(R17 * p_TS) { RT_B_TICK(); 
R22 * l_T_851; memset(&l_T_851, 0, sizeof l_T_851);
l_T_851 = r_NEW_TYP(g_T_ARR);
R17 * l_R_852; memset(&l_R_852, 0, sizeof l_R_852);
l_R_852 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R25 * l_TAIL_853; memset(&l_TAIL_853, 0, sizeof l_TAIL_853);
l_TAIL_853 = NULL;
for (;;) {
if ((l_R_852 == NULL)) goto L_end854;
{
{
R25 * l_B_855; memset(&l_B_855, 0, sizeof l_B_855);
l_B_855 = ((R25 *)rt_b_new(sizeof (R25)));
R26 l_LO_856; memset(&l_LO_856, 0, sizeof l_LO_856);
R26 l_HI_857; memset(&l_HI_857, 0, sizeof l_HI_857);
if (r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_852))).f_A))
{
S_R26(&l_LO_856, r_MKET(r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_852))).f_A))).f_NAME, (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_852))).f_A))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_LO_856, r_EXPR(((*(R17 *)rt_nil_check(l_R_852))).f_A, NULL), 0);
}
if (r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_852))).f_B))
{
S_R26(&l_HI_857, r_MKET(r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_852))).f_B))).f_NAME, (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_852))).f_B))).f_NAME).f_LEN))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_HI_857, r_EXPR(((*(R17 *)rt_nil_check(l_R_852))).f_B, (l_LO_856).f_T), 0);
}
S_R25(&(*(R25 *)rt_nil_check(l_B_855)), ({ R25 rc858; memset(&rc858, 0, sizeof rc858);  S_R9(&rc858.f_LO, (l_LO_856).f_C, 0); S_R9(&rc858.f_HI, (l_HI_857).f_C, 0); S_R23(&rc858.f_MLO, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_852))).f_A), 0); S_R23(&rc858.f_MHI, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_852))).f_B), 0); rc858.f_ANYARG = 0; rc858.f_NEXT = NULL; rc858; }), 0);
if (((!r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_852))).f_A)) && (!r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_852))).f_B))))
{
if ((!r_SAME_CLASS(r_REAL_TYPE((l_LO_856).f_T), r_REAL_TYPE((l_HI_857).f_T))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_852))).f_LINE, rt_str("the bounds of an array-bound are of one type class (3.8.1)", 58));
}
S_R9(&((*(R25 *)rt_nil_check(l_B_855))).f_LO, r_INDEX_OF(l_LO_856, ((*(R17 *)rt_nil_check(l_R_852))).f_LINE), 0);
S_R9(&((*(R25 *)rt_nil_check(l_B_855))).f_HI, r_INDEX_OF(l_HI_857, ((*(R17 *)rt_nil_check(l_R_852))).f_LINE), 0);
}
if (((((*(R22 *)rt_nil_check((l_LO_856).f_T))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check((l_LO_856).f_T))).f_KIND == g_T_ABS)))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_855))).f_MLO, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_R_852))).f_A, (l_LO_856).f_T), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_855))).f_MHI, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_R_852))).f_B, (l_LO_856).f_T), 0);
if ((!r_TEQ(((*(R25 *)rt_nil_check(l_B_855))).f_LO, (l_LO_856).f_C)))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_855))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_855))).f_MHI, r_NO_MVAL(), 0);
}
}
else if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_LO_856).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_852))).f_LINE, rt_str("array bounds are integer or enumerated (3.8.1)", 46));
}
if ((l_TAIL_853 == NULL))
{
((*(R22 *)rt_nil_check(l_T_851))).f_BOUNDS = l_B_855;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_853))).f_NEXT = l_B_855;
}
l_TAIL_853 = l_B_855;
((*(R22 *)rt_nil_check(l_T_851))).f_DIMS = rt_add(((*(R22 *)rt_nil_check(l_T_851))).f_DIMS, ((rt_int)1LL));
}
l_R_852 = ((*(R17 *)rt_nil_check(l_R_852))).f_NEXT;
}
RT_B_TICK();
} L_end854: ;
((*(R22 *)rt_nil_check(l_T_851))).f_RLEVEL = r_CUR_LEVEL();
((*(R22 *)rt_nil_check(l_T_851))).f_ELEM = r_RESOLVE(((*(R17 *)rt_nil_check(p_TS))).f_C);
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_851))).f_ELEM))).f_KIND == g_T_ARR))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("ARRAY ... OF ARRAY is forbidden (3.8.1)", 39));
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_D == NULL)))
{
((*(R22 *)rt_nil_check(l_T_851))).f_REPS = r_EXPAND_REP(((*(R17 *)rt_nil_check(p_TS))).f_D, l_T_851, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
r_CHECK_REP_CLASS(l_T_851, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
S_R9(&((*(R22 *)rt_nil_check(l_T_851))).f_CNAME, r_ARRAY_STRUCT(((*(R22 *)rt_nil_check(l_T_851))).f_ELEM, ((*(R22 *)rt_nil_check(l_T_851))).f_DIMS), 0);
{ R22 * rv859 = l_T_851;
return rv859; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER(R17 * p_TS) { RT_B_TICK(); 
R12 * l_Y_860; memset(&l_Y_860, 0, sizeof l_Y_860);
l_Y_860 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((((*(R17 *)rt_nil_check(p_TS))).f_A == NULL))
{
{
R21 * l_B_861; memset(&l_B_861, 0, sizeof l_B_861);
l_B_861 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_861 == NULL)) goto L_end862;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_861))).f_NAME, ((*(R17 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R21 *)rt_nil_check(l_B_861))).f_T == NULL))))
{
if ((!(r_CUR_GENERIC() == NULL)))
{
if ((r_FIND_BIND(((*(R12 *)rt_nil_check(r_CUR_GENERIC()))).f_BINDINGS, ((*(R17 *)rt_nil_check(p_TS))).f_NAME) == l_B_861))
{
{ R22 * rv863 = r_MARK_GENP(((*(R21 *)rt_nil_check(l_B_861))).f_T, ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
return rv863; }
}
}
{ R22 * rv864 = ((*(R21 *)rt_nil_check(l_B_861))).f_T;
return rv864; }
}
l_B_861 = ((*(R21 *)rt_nil_check(l_B_861))).f_NEXT;
}
RT_B_TICK();
} L_end862: ;
}
}
if ((l_Y_860 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_860))).f_KIND == g_Y_GEN))
{
{ R22 * rv865 = r_GEN_TYPE(p_TS);
return rv865; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_860))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((!r_SEG_VISIBLE(l_Y_860, ((*(R17 *)rt_nil_check(p_TS))).f_LINE)))
{
}
if ((((*(R12 *)rt_nil_check(l_Y_860))).f_DECL == NULL))
{
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
{ R22 * rv866 = ((*(R12 *)rt_nil_check(l_Y_860))).f_T;
return rv866; }
}
{
R17 * l_D_867; memset(&l_D_867, 0, sizeof l_D_867);
l_D_867 = ((*(R12 *)rt_nil_check(l_Y_860))).f_DECL;
R22 * l_T_868; memset(&l_T_868, 0, sizeof l_T_868);
if ((((*(R17 *)rt_nil_check(l_D_867))).f_A == NULL))
{
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_860))).f_T == NULL))
{
if (((*(R12 *)rt_nil_check(l_Y_860))).f_BUSY)
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R12 *)rt_nil_check(l_Y_860))).f_BUSY = 1;
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_867))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R12 *)rt_nil_check(l_Y_860))).f_T = r_RESOLVE_RECORD(((*(R17 *)rt_nil_check(l_D_867))).f_B, r_RECORD_NAME(l_Y_860), l_Y_860, NULL);
}
else
{
((*(R12 *)rt_nil_check(l_Y_860))).f_T = r_RESOLVE_IN_DECL(l_Y_860, NULL);
if ((((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_860))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_860))).f_T))).f_KIND == g_T_ENUM))))
{
((*(R12 *)rt_nil_check(l_Y_860))).f_T = r_COPY_TYP(((*(R12 *)rt_nil_check(l_Y_860))).f_T);
}
}
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_860))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_860))).f_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_860))).f_NAME, 0);
}
((*(R12 *)rt_nil_check(l_Y_860))).f_BUSY = 0;
}
l_T_868 = ((*(R12 *)rt_nil_check(l_Y_860))).f_T;
}
else
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_867))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_868 = r_RECORD_INSTANCE(l_Y_860, p_TS);
}
else
{
l_T_868 = r_RESOLVE_IN_DECL(l_Y_860, p_TS);
}
}
{ R22 * rv869 = r_ABSTRACT_VIEW(l_Y_860, l_T_868);
return rv869; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ABSTRACT_VIEW(R12 * p_Y, R22 * p_T) { RT_B_TICK(); 
R22 * l_A_870; memset(&l_A_870, 0, sizeof l_A_870);
if (((((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL) || (!((*(R12 *)rt_nil_check(p_Y))).f_EXPORTED)))
{
{ R22 * rv871 = p_T;
return rv871; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ R22 * rv872 = p_T;
return rv872; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
if (r_EXPORTS_ORDER(p_Y))
{
{ R22 * rv873 = p_T;
return rv873; }
}
l_A_870 = r_COPY_TYP(p_T);
((*(R22 *)rt_nil_check(l_A_870))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_870))).f_DECL = p_Y;
{ R22 * rv874 = l_A_870;
return rv874; }
}
l_A_870 = r_NEW_TYP(g_T_ABS);
((*(R22 *)rt_nil_check(l_A_870))).f_BASE = p_T;
S_R9(&((*(R22 *)rt_nil_check(l_A_870))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R22 *)rt_nil_check(l_A_870))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_870))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_A_870))).f_ARGS = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
{ R22 * rv875 = l_A_870;
return rv875; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTS_ORDER(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv876 = (((((r_EXPORTS_OP(p_Y, rt_str("LESS_THAN_", 10)) && r_EXPORTS_OP(p_Y, rt_str("LESS_EQUAL_", 11))) && r_EXPORTS_OP(p_Y, rt_str("GREATER_THAN_", 13))) && r_EXPORTS_OP(p_Y, rt_str("GREATER_EQUAL_", 14))) && r_EXPORTS_OP(p_Y, rt_str("SUCC", 4))) && r_EXPORTS_OP(p_Y, rt_str("PRED", 4)));
return rv876; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTS_OP(R12 * p_Y, rstr p_OP) { RT_B_TICK(); 
R12 * l_R_877; memset(&l_R_877, 0, sizeof l_R_877);
l_R_877 = ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_MODL))).f_MEMBERS;
for (;;) {
if ((l_R_877 == NULL)) goto L_end878;
{
if ((((((*(R12 *)rt_nil_check(l_R_877))).f_KIND == g_Y_ROUTINE) && ((*(R12 *)rt_nil_check(l_R_877))).f_EXPORTED) && r_TEQ(((*(R12 *)rt_nil_check(l_R_877))).f_PREFIX, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)))
{
if (r_TEQS(r_BASE_NAME(r_ORIGINAL(l_R_877)), p_OP))
{
{ rt_int rv879 = 1;
return rv879; }
}
}
l_R_877 = ((*(R12 *)rt_nil_check(l_R_877))).f_SNEXT;
}
RT_B_TICK();
} L_end878: ;
{ rt_int rv880 = 0;
return rv880; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_UNORDERED(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))
{
{ rt_int rv881 = 0;
return rv881; }
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_UNORDERED)
{
{ rt_int rv882 = 1;
return rv882; }
}
if (((!(((*(R22 *)rt_nil_check(p_T))).f_DECL == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_MODL == NULL))))
{
{ rt_int rv883 = (!r_IN_MODULE(((*(R22 *)rt_nil_check(p_T))).f_MODL));
return rv883; }
}
{ rt_int rv884 = 0;
return rv884; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_P_885; memset(&l_P_885, 0, sizeof l_P_885);
l_P_885 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_885 == NULL)) goto L_end886;
{
if ((l_P_885 == p_M))
{
{ rt_int rv887 = 1;
return rv887; }
}
l_P_885 = ((*(R12 *)rt_nil_check(l_P_885))).f_MODL;
}
RT_B_TICK();
} L_end886: ;
{ rt_int rv888 = 0;
return rv888; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R17 * p_TS) { RT_B_TICK(); 
R17 * l_D_889; memset(&l_D_889, 0, sizeof l_D_889);
l_D_889 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_890; memset(&l_T_890, 0, sizeof l_T_890);
if ((p_TS == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
l_T_890 = r_RESOLVE(((*(R17 *)rt_nil_check(l_D_889))).f_B);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
{ R22 * rv891 = l_T_890;
return rv891; }
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R17 *)rt_nil_check(l_D_889))).f_A, p_TS);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
l_T_890 = r_RESOLVE(((*(R17 *)rt_nil_check(l_D_889))).f_B);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
r_CLOSE_SCOPE();
{ R22 * rv892 = l_T_890;
return rv892; }
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R17 * p_FORMALS, R17 * p_TS) { RT_B_TICK(); 
R17 * l_F_893; memset(&l_F_893, 0, sizeof l_F_893);
l_F_893 = p_FORMALS;
R17 * l_A_894; memset(&l_A_894, 0, sizeof l_A_894);
l_A_894 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_893 == NULL)) goto L_end895;
{
{
R17 * l_N_896; memset(&l_N_896, 0, sizeof l_N_896);
l_N_896 = ((*(R17 *)rt_nil_check(l_F_893))).f_A;
for (;;) {
if ((l_N_896 == NULL)) goto L_end897;
{
if ((l_A_894 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R17 *)rt_nil_check(l_F_893))).f_B == NULL))
{
{
R12 * l_Y_898; memset(&l_Y_898, 0, sizeof l_Y_898);
l_Y_898 = r_NEW_SYM(g_Y_TYPE, ((*(R17 *)rt_nil_check(l_N_896))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_898))).f_T = r_ARG_TYPE(l_A_894);
r_DEFINE(l_Y_898, ((*(R17 *)rt_nil_check(l_A_894))).f_LINE);
}
}
else
{
{
R12 * l_Y_899; memset(&l_Y_899, 0, sizeof l_Y_899);
l_Y_899 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(l_N_896))).f_NAME);
R9 l_C_900; memset(&l_C_900, 0, sizeof l_C_900);
R23 l_M_901; memset(&l_M_901, 0, sizeof l_M_901);
((*(R12 *)rt_nil_check(l_Y_899))).f_T = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_893))).f_B);
if (((((*(R17 *)rt_nil_check(l_A_894))).f_KIND == g_N_ANY) && (!(((*(R17 *)rt_nil_check(l_F_893))).f_IV == ((rt_int)1LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_894))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
if ((((*(R17 *)rt_nil_check(l_A_894))).f_KIND == g_N_ANY))
{
S_R9(&l_C_900, r_MK(rt_str("ANY", 3)), 0);
S_R23(&l_M_901, r_NO_MVAL(), 0);
}
else if (((((*(R17 *)rt_nil_check(l_A_894))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_A_894))).f_KIND == g_N_DONTCARE)))
{
S_R9(&l_C_900, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R17 *)rt_nil_check(l_A_894))).f_NAME, (((*(R17 *)rt_nil_check(l_A_894))).f_NAME).f_LEN))), 0);
S_R23(&l_M_901, r_NO_MVAL(), 0);
}
else
{
r_ATTR_VALUE(l_A_894, &l_C_900, &l_M_901);
}
if (((((l_M_901).f_OK && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_899))).f_T))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_899))).f_T))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_899))).f_T))).f_SCALE == ((rt_int)0LL))))
{
if ((((l_M_901).f_V < (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_899))).f_T))).f_MLO).f_V) || ((l_M_901).f_V > (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_899))).f_T))).f_MHI).f_V)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_894))).f_LINE, rt_str("the argument is outside the range of the type formal (3.12.2)", 61));
}
}
if ((((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_899))).f_T))).f_KIND == g_T_INT)) && (!r_IS_GEN_TEXT(l_C_900))) && (!(((*(R17 *)rt_nil_check(l_A_894))).f_KIND == g_N_ANY))))
{
S_R9(&l_C_900, (r_EXPR(l_A_894, ((*(R12 *)rt_nil_check(l_Y_899))).f_T)).f_C, 0);
S_R23(&l_M_901, r_ENUM_MANIFEST(l_A_894, ((*(R12 *)rt_nil_check(l_Y_899))).f_T), 0);
}
S_R9(&((*(R12 *)rt_nil_check(l_Y_899))).f_ACCESS, l_C_900, 0);
((*(R12 *)rt_nil_check(l_Y_899))).f_HASMV = (l_M_901).f_OK;
((*(R12 *)rt_nil_check(l_Y_899))).f_MV = (l_M_901).f_V;
((*(R12 *)rt_nil_check(l_Y_899))).f_INPUT = 1;
r_DEFINE(l_Y_899, ((*(R17 *)rt_nil_check(l_A_894))).f_LINE);
}
}
l_A_894 = ((*(R17 *)rt_nil_check(l_A_894))).f_NEXT;
l_N_896 = ((*(R17 *)rt_nil_check(l_N_896))).f_NEXT;
}
RT_B_TICK();
} L_end897: ;
}
l_F_893 = ((*(R17 *)rt_nil_check(l_F_893))).f_NEXT;
}
RT_B_TICK();
} L_end895: ;
if ((!(l_A_894 == NULL)))
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
{ R9 rv902 = ((*(R12 *)rt_nil_check(p_Y))).f_FWD;
return rv902; }
rt_raise(RT_X_INIT);
}
static R22 * r_TARGET(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS);
}
{ R22 * rv903 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET;
return rv903; }
rt_raise(RT_X_INIT);
}
static R9 r_CTYPE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_904; memset(&l_K_904, 0, sizeof l_K_904);
l_K_904 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
{ R9 rv905 = r_MK(rt_str("rt_int", 6));
return rv905; }
}
else if ((l_K_904 == g_T_FLOAT))
{
{ R9 rv906 = r_MK(rt_str("double", 6));
return rv906; }
}
else if (((l_K_904 == g_T_STR) || (l_K_904 == g_T_BITS)))
{
{ R9 rv907 = r_MK(rt_str("rstr", 4));
return rv907; }
}
else if (((l_K_904 == g_T_REC) || (l_K_904 == g_T_ARR)))
{
{ R9 rv908 = ((*(R22 *)rt_nil_check(p_T))).f_CNAME;
return rv908; }
}
else if ((l_K_904 == g_T_ABS))
{
{ R9 rv909 = r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv909; }
}
else if ((l_K_904 == g_T_SEM))
{
{ R9 rv910 = r_MK(rt_str("rt_b_sem *", 10));
return rv910; }
}
else if ((l_K_904 == g_T_PATHS))
{
{ R9 rv911 = r_MK(rt_str("rt_b_paths", 10));
return rv911; }
}
else if ((l_K_904 == g_T_VOID))
{
{ R9 rv912 = r_MK(rt_str("void", 4));
return rv912; }
}
else if ((l_K_904 == g_T_PTR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R17 * l_TT_913; memset(&l_TT_913, 0, sizeof l_TT_913);
l_TT_913 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R17 *)rt_nil_check(l_TT_913))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(l_TT_913))).f_A == NULL)))
{
{
R12 * l_Y_914; memset(&l_Y_914, 0, sizeof l_Y_914);
l_Y_914 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(l_TT_913))).f_NAME);
if ((!(l_Y_914 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_914))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_914))).f_DECL == NULL))))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_914))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_914))).f_DECL))).f_A == NULL)))
{
{ R9 rv915 = r_CATS(r_RECORD_NAME(l_Y_914), rt_str(" *", 2));
return rv915; }
}
}
}
}
}
}
}
{ R9 rv916 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv916; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R17 * p_E) { RT_B_TICK(); 
{ rt_int rv917 = ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv917; }
rt_raise(RT_X_INIT);
}
static R24 * r_NEW_FIELD(R9 p_NAME, R22 * p_T, rt_int p_KIND) { RT_B_TICK(); 
R24 * l_F_918; memset(&l_F_918, 0, sizeof l_F_918);
l_F_918 = ((R24 *)rt_b_new(sizeof (R24)));
S_R24(&(*(R24 *)rt_nil_check(l_F_918)), ({ R24 rc919; memset(&rc919, 0, sizeof rc919);  S_R9(&rc919.f_NAME, p_NAME, 0); S_R9(&rc919.f_CNAME, r_FMT1(rt_str("f_@", 3), r_CID(p_NAME)), 0); rc919.f_T = p_T; rc919.f_KIND = p_KIND; S_R9(&rc919.f_TAGF, r_NO_TEXT(), 0); rc919.f_LABELS = NULL; rc919.f_NEXT = NULL; rc919; }), 0);
{ R24 * rv920 = l_F_918;
return rv920; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_FIELD(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R24 * l_F_921; memset(&l_F_921, 0, sizeof l_F_921);
l_F_921 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_921 == NULL)) goto L_end922;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_921))).f_NAME, p_NAME))
{
{ R24 * rv923 = l_F_921;
return rv923; }
}
l_F_921 = ((*(R24 *)rt_nil_check(l_F_921))).f_NEXT;
}
RT_B_TICK();
} L_end922: ;
{ R24 * rv924 = NULL;
return rv924; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_VFIELD(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R24 * l_F_925; memset(&l_F_925, 0, sizeof l_F_925);
l_F_925 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FIRST_926; memset(&l_FIRST_926, 0, sizeof l_FIRST_926);
l_FIRST_926 = NULL;
for (;;) {
if ((l_F_925 == NULL)) goto L_end927;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_925))).f_NAME, p_NAME))
{
if ((l_FIRST_926 == NULL))
{
l_FIRST_926 = l_F_925;
}
if (((((*(R24 *)rt_nil_check(l_F_925))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
{ R24 * rv928 = l_F_925;
return rv928; }
}
{
R23 l_TAGV_929; memset(&l_TAGV_929, 0, sizeof l_TAGV_929);
S_R23(&l_TAGV_929, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(l_F_925))).f_TAGF), 0);
if ((l_TAGV_929).f_OK)
{
if (r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_925))).f_LABELS, (l_TAGV_929).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(l_F_925))).f_TAGF)))).f_T))
{
{ R24 * rv930 = l_F_925;
return rv930; }
}
}
}
}
l_F_925 = ((*(R24 *)rt_nil_check(l_F_925))).f_NEXT;
}
RT_B_TICK();
} L_end927: ;
{ R24 * rv931 = l_FIRST_926;
return rv931; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL) { RT_B_TICK(); 
R24 * l_P_932; memset(&l_P_932, 0, sizeof l_P_932);
l_P_932 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_933; memset(&l_N_933, 0, sizeof l_N_933);
l_N_933 = ((rt_int)0LL);
for (;;) {
if ((l_P_932 == NULL)) goto L_end934;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_P_932))).f_NAME, ((*(R24 *)rt_nil_check(p_F))).f_NAME))
{
if ((((((((*(R24 *)rt_nil_check(l_P_932))).f_TAGF).f_LEN == ((rt_int)0LL)) || ((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL))) || (!r_TEQ(((*(R24 *)rt_nil_check(l_P_932))).f_TAGF, ((*(R24 *)rt_nil_check(p_F))).f_TAGF))) || (((*(R24 *)rt_nil_check(l_P_932))).f_LABELS == ((*(R24 *)rt_nil_check(p_F))).f_LABELS)))
{
r_FAILT(((rt_int)0LL), rt_str("the field names of a record must be distinct (3.9.1): ", 54), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
l_N_933 = rt_add(l_N_933, ((rt_int)1LL));
}
l_P_932 = ((*(R24 *)rt_nil_check(l_P_932))).f_NEXT;
}
RT_B_TICK();
} L_end934: ;
if ((l_N_933 > ((rt_int)0LL)))
{
S_R9(&((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_933)), 0);
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
R17 * l_D_935; memset(&l_D_935, 0, sizeof l_D_935);
l_D_935 = p_DECLS;
for (;;) {
if ((l_D_935 == NULL)) goto L_end936;
{
if ((((*(R17 *)rt_nil_check(l_D_935))).f_KIND == g_N_VAR))
{
{
R22 * l_FT_937; memset(&l_FT_937, 0, sizeof l_FT_937);
l_FT_937 = r_RESOLVE(((*(R17 *)rt_nil_check(l_D_935))).f_B);
R17 * l_N_938; memset(&l_N_938, 0, sizeof l_N_938);
l_N_938 = ((*(R17 *)rt_nil_check(l_D_935))).f_A;
for (;;) {
if ((l_N_938 == NULL)) goto L_end939;
{
{
R24 * l_F_940; memset(&l_F_940, 0, sizeof l_F_940);
l_F_940 = r_NEW_FIELD(((*(R17 *)rt_nil_check(l_N_938))).f_NAME, l_FT_937, ((rt_int)0LL));
S_R9(&((*(R24 *)rt_nil_check(l_F_940))).f_TAGF, p_TAGN, 0);
((*(R24 *)rt_nil_check(l_F_940))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_940, &(*p_TAIL));
if (((r_LOOKUP(((*(R17 *)rt_nil_check(l_N_938))).f_NAME) == NULL) || (!(((*(R12 *)rt_nil_check(r_LOOKUP(((*(R17 *)rt_nil_check(l_N_938))).f_NAME)))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))))
{
{
R12 * l_Y_941; memset(&l_Y_941, 0, sizeof l_Y_941);
l_Y_941 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(l_N_938))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_941))).f_T = l_FT_937;
S_R9(&((*(R12 *)rt_nil_check(l_Y_941))).f_ACCESS, r_FMT1(rt_str("$S.@", 4), ((*(R24 *)rt_nil_check(l_F_940))).f_CNAME), 0);
((*(R12 *)rt_nil_check(l_Y_941))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_Y_941))).f_LEVEL = rt_neg(((rt_int)1LL));
((*(R12 *)rt_nil_check(l_Y_941))).f_OWNER = rt_neg(((rt_int)1LL));
r_DEFINE(l_Y_941, ((*(R17 *)rt_nil_check(l_D_935))).f_LINE);
}
}
}
l_N_938 = ((*(R17 *)rt_nil_check(l_N_938))).f_NEXT;
}
RT_B_TICK();
} L_end939: ;
}
}
else
{
{
R24 * l_TF_942; memset(&l_TF_942, 0, sizeof l_TF_942);
l_TF_942 = r_FIND_FIELD(p_T, ((*(R17 *)rt_nil_check(l_D_935))).f_NAME);
R17 * l_S_943; memset(&l_S_943, 0, sizeof l_S_943);
l_S_943 = ((*(R17 *)rt_nil_check(l_D_935))).f_A;
if ((l_TF_942 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_935))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R17 *)rt_nil_check(l_D_935))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_942))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_935))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R17 *)rt_nil_check(l_D_935))).f_NAME);
}
{
R17 * l_O_944; memset(&l_O_944, 0, sizeof l_O_944);
l_O_944 = p_DECLS;
for (;;) {
if ((l_O_944 == l_D_935)) goto L_end945;
{
if ((((*(R17 *)rt_nil_check(l_O_944))).f_KIND == g_N_VARIANT))
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_O_944))).f_NAME, ((*(R17 *)rt_nil_check(l_D_935))).f_NAME))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_935))).f_LINE, rt_str("two variant parts discriminate on the tag ", 42), ((*(R17 *)rt_nil_check(l_D_935))).f_NAME);
}
}
l_O_944 = ((*(R17 *)rt_nil_check(l_O_944))).f_NEXT;
}
RT_B_TICK();
} L_end945: ;
}
r_CHECK_VARIANT_NAMES(l_D_935, ((*(R24 *)rt_nil_check(l_TF_942))).f_T);
for (;;) {
if ((l_S_943 == NULL)) goto L_end946;
{
r_OPEN_SCOPE();
r_RECORD_FIELDS(p_T, ((*(R17 *)rt_nil_check(l_S_943))).f_B, C_R9(((*(R17 *)rt_nil_check(l_D_935))).f_NAME), ((*(R17 *)rt_nil_check(l_S_943))).f_A, &(*p_TAIL));
r_CLOSE_SCOPE();
l_S_943 = ((*(R17 *)rt_nil_check(l_S_943))).f_NEXT;
}
RT_B_TICK();
} L_end946: ;
}
}
l_D_935 = ((*(R17 *)rt_nil_check(l_D_935))).f_NEXT;
}
RT_B_TICK();
} L_end936: ;
}
static void r_CHECK_VARIANT_NAMES(R17 * p_D, R22 * p_TT) { RT_B_TICK(); 
R17 * l_S_947; memset(&l_S_947, 0, sizeof l_S_947);
l_S_947 = ((*(R17 *)rt_nil_check(p_D))).f_A;
R17 * l_LOS_948; memset(&l_LOS_948, 0, sizeof l_LOS_948);
l_LOS_948 = NULL;
R17 * l_HIS_949; memset(&l_HIS_949, 0, sizeof l_HIS_949);
l_HIS_949 = NULL;
rt_int l_LO_LIM_950; memset(&l_LO_LIM_950, 0, sizeof l_LO_LIM_950);
rt_int l_HI_LIM_951; memset(&l_HI_LIM_951, 0, sizeof l_HI_LIM_951);
R22 * l_R_952; memset(&l_R_952, 0, sizeof l_R_952);
l_R_952 = r_REAL_TYPE(p_TT);
l_LO_LIM_950 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
l_HI_LIM_951 = INT64_MAX;
if ((((*(R22 *)rt_nil_check(l_R_952))).f_KIND == g_T_ENUM))
{
l_LO_LIM_950 = ((rt_int)0LL);
l_HI_LIM_951 = rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_R_952))).f_BASE))).f_NLITS, ((rt_int)1LL));
}
else if ((((*(R22 *)rt_nil_check(l_R_952))).f_KIND == g_T_BOOL))
{
l_LO_LIM_950 = ((rt_int)0LL);
l_HI_LIM_951 = ((rt_int)1LL);
}
if ((((*(R22 *)rt_nil_check(l_R_952))).f_MLO).f_OK)
{
l_LO_LIM_950 = (((*(R22 *)rt_nil_check(l_R_952))).f_MLO).f_V;
}
if ((((*(R22 *)rt_nil_check(l_R_952))).f_MHI).f_OK)
{
l_HI_LIM_951 = (((*(R22 *)rt_nil_check(l_R_952))).f_MHI).f_V;
}
for (;;) {
if ((l_S_947 == NULL)) goto L_end953;
{
{
R17 * l_L_954; memset(&l_L_954, 0, sizeof l_L_954);
l_L_954 = ((*(R17 *)rt_nil_check(l_S_947))).f_A;
for (;;) {
if ((l_L_954 == NULL)) goto L_end955;
{
{
R23 l_A_956; memset(&l_A_956, 0, sizeof l_A_956);
R23 l_B_957; memset(&l_B_957, 0, sizeof l_B_957);
if ((((*(R17 *)rt_nil_check(l_L_954))).f_KIND == g_N_RANGE))
{
S_R23(&l_A_956, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_954))).f_A, p_TT), 0);
S_R23(&l_B_957, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_954))).f_B, p_TT), 0);
if (((l_A_956).f_OK && (((((*(R17 *)rt_nil_check(l_L_954))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_L_954))).f_IV == ((rt_int)3LL))))))
{
(l_A_956).f_V = rt_add((l_A_956).f_V, ((rt_int)1LL));
}
if (((l_B_957).f_OK && (((*(R17 *)rt_nil_check(l_L_954))).f_IV >= ((rt_int)2LL))))
{
(l_B_957).f_V = rt_sub((l_B_957).f_V, ((rt_int)1LL));
}
}
else
{
S_R23(&l_A_956, r_ENUM_MANIFEST(l_L_954, p_TT), 0);
S_R23(&l_B_957, l_A_956, 0);
}
if ((!(((l_A_956).f_OK && (l_B_957).f_OK))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_954))).f_LINE, rt_str("a variant-name is manifest (3.9.1)", 34));
}
if (((((l_A_956).f_V < l_LO_LIM_950) || ((l_B_957).f_V > l_HI_LIM_951)) || ((l_A_956).f_V > (l_B_957).f_V)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_954))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.1)", 49));
}
{
R17 * l_P_958; memset(&l_P_958, 0, sizeof l_P_958);
l_P_958 = l_LOS_948;
R17 * l_Q_959; memset(&l_Q_959, 0, sizeof l_Q_959);
l_Q_959 = l_HIS_949;
for (;;) {
if ((l_P_958 == NULL)) goto L_end960;
{
if ((((l_A_956).f_V <= ((*(R17 *)rt_nil_check(l_Q_959))).f_IV) && ((l_B_957).f_V >= ((*(R17 *)rt_nil_check(l_P_958))).f_IV)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_954))).f_LINE, rt_str("a value of the tag names two variants (3.9.1)", 45));
}
l_P_958 = ((*(R17 *)rt_nil_check(l_P_958))).f_NEXT;
l_Q_959 = ((*(R17 *)rt_nil_check(l_Q_959))).f_NEXT;
}
RT_B_TICK();
} L_end960: ;
}
{
R17 * l_P_961; memset(&l_P_961, 0, sizeof l_P_961);
l_P_961 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
R17 * l_Q_962; memset(&l_Q_962, 0, sizeof l_Q_962);
l_Q_962 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R17 *)rt_nil_check(l_P_961))).f_IV = (l_A_956).f_V;
((*(R17 *)rt_nil_check(l_Q_962))).f_IV = (l_B_957).f_V;
((*(R17 *)rt_nil_check(l_P_961))).f_NEXT = l_LOS_948;
((*(R17 *)rt_nil_check(l_Q_962))).f_NEXT = l_HIS_949;
l_LOS_948 = l_P_961;
l_HIS_949 = l_Q_962;
}
}
l_L_954 = ((*(R17 *)rt_nil_check(l_L_954))).f_NEXT;
}
RT_B_TICK();
} L_end955: ;
}
l_S_947 = ((*(R17 *)rt_nil_check(l_S_947))).f_NEXT;
}
RT_B_TICK();
} L_end953: ;
}
static R22 * r_RESOLVE_RECORD(R17 * p_TS, R9 p_CNAME, R12 * p_Y, R17 * p_FORMALS) { RT_B_TICK(); 
R22 * l_T_963; memset(&l_T_963, 0, sizeof l_T_963);
l_T_963 = r_NEW_TYP(g_T_REC);
R24 * l_TAIL_964; memset(&l_TAIL_964, 0, sizeof l_TAIL_964);
l_TAIL_964 = NULL;
((*(R22 *)rt_nil_check(l_T_963))).f_BASE = l_T_963;
((*(R22 *)rt_nil_check(l_T_963))).f_DECL = p_Y;
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_D == NULL)))
{
((*(R22 *)rt_nil_check(l_T_963))).f_REPS = r_EXPAND_REP(((*(R17 *)rt_nil_check(p_TS))).f_D, l_T_963, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
r_CHECK_REP_CLASS(l_T_963, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(l_T_963))).f_CNAME, p_CNAME, 0);
}
else
{
S_R9(&((*(R22 *)rt_nil_check(l_T_963))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R22 *)rt_nil_check(l_T_963))).f_CNAME, ((*(R22 *)rt_nil_check(l_T_963))).f_CNAME));
}
{
R17 * l_F_965; memset(&l_F_965, 0, sizeof l_F_965);
l_F_965 = p_FORMALS;
for (;;) {
if ((l_F_965 == NULL)) goto L_end966;
{
if ((!(((*(R17 *)rt_nil_check(l_F_965))).f_B == NULL)))
{
{
R22 * l_FT_967; memset(&l_FT_967, 0, sizeof l_FT_967);
l_FT_967 = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_965))).f_B);
R17 * l_N_968; memset(&l_N_968, 0, sizeof l_N_968);
l_N_968 = ((*(R17 *)rt_nil_check(l_F_965))).f_A;
rt_int l_KIND_969; memset(&l_KIND_969, 0, sizeof l_KIND_969);
l_KIND_969 = ((rt_int)1LL);
if ((((*(R17 *)rt_nil_check(l_F_965))).f_IV == ((rt_int)1LL)))
{
l_KIND_969 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_967))) || (!(((*(R22 *)rt_nil_check(l_FT_967))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_F_965))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_968 == NULL)) goto L_end970;
{
r_ADD_FIELD(l_T_963, r_NEW_FIELD(((*(R17 *)rt_nil_check(l_N_968))).f_NAME, l_FT_967, l_KIND_969), &l_TAIL_964);
l_N_968 = ((*(R17 *)rt_nil_check(l_N_968))).f_NEXT;
}
RT_B_TICK();
} L_end970: ;
}
}
l_F_965 = ((*(R17 *)rt_nil_check(l_F_965))).f_NEXT;
}
RT_B_TICK();
} L_end966: ;
}
r_OPEN_SCOPE();
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_RECORD_FIELDS(l_T_963, ((*(R17 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_964);
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_CLOSE_SCOPE();
r_CHECK_RECORD_REP(l_T_963, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
r_COMPLETE_RECORD(l_T_963);
{ R22 * rv971 = l_T_963;
return rv971; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_RECORD_REP(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv972 = 0;
return rv972; }
}
{ rt_int rv973 = ((((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_KIND == g_N_REP) && r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_NAME, rt_str("RECORD_REP", 10)));
return rv973; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_RECORD_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_SEEN_974; memset(&l_SEEN_974, 0, sizeof l_SEEN_974);
l_SEEN_974 = NULL;
rt_int l_LISTED_975; memset(&l_LISTED_975, 0, sizeof l_LISTED_975);
l_LISTED_975 = 0;
if ((!r_IS_RECORD_REP(p_T)))
{
return;
}
{
R17 * l_P_976; memset(&l_P_976, 0, sizeof l_P_976);
l_P_976 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A;
for (;;) {
if ((l_P_976 == NULL)) goto L_end977;
{
if ((((*(R17 *)rt_nil_check(l_P_976))).f_IV == ((rt_int)1LL)))
{
l_LISTED_975 = 1;
}
r_CHECK_ELEMENTS(p_T, ((*(R17 *)rt_nil_check(l_P_976))).f_A, r_NO_TEXT(), NULL, &l_SEEN_974);
l_P_976 = ((*(R17 *)rt_nil_check(l_P_976))).f_NEXT;
}
RT_B_TICK();
} L_end977: ;
}
if (l_LISTED_975)
{
{
R24 * l_F_978; memset(&l_F_978, 0, sizeof l_F_978);
l_F_978 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_978 == NULL)) goto L_end979;
{
if ((((((*(R24 *)rt_nil_check(l_F_978))).f_TAGF).f_LEN == ((rt_int)0LL)) && (!r_IN_IDENTS(l_SEEN_974, ((*(R24 *)rt_nil_check(l_F_978))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("a record-reptype with element-specs positions every field (3.9.3): ", 67), ((*(R24 *)rt_nil_check(l_F_978))).f_NAME);
}
if ((((((*(R24 *)rt_nil_check(l_F_978))).f_TAGF).f_LEN > ((rt_int)0LL)) && (!r_IN_IDENTS(l_SEEN_974, r_CAT(r_MK(rt_str("|", 1)), ((*(R24 *)rt_nil_check(l_F_978))).f_TAGF)))))
{
r_FAILT(p_LINE, rt_str("a record-reptype with element-specs positions every variant part (3.9.3): ", 74), ((*(R24 *)rt_nil_check(l_F_978))).f_TAGF);
}
l_F_978 = ((*(R24 *)rt_nil_check(l_F_978))).f_NEXT;
}
RT_B_TICK();
} L_end979: ;
}
}
{
R17 * l_V_980; memset(&l_V_980, 0, sizeof l_V_980);
l_V_980 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_C;
for (;;) {
if ((l_V_980 == NULL)) goto L_end981;
{
{
R24 * l_TF_982; memset(&l_TF_982, 0, sizeof l_TF_982);
l_TF_982 = r_FIND_FIELD(p_T, ((*(R17 *)rt_nil_check(l_V_980))).f_NAME);
R17 * l_S_983; memset(&l_S_983, 0, sizeof l_S_983);
l_S_983 = ((*(R17 *)rt_nil_check(l_V_980))).f_A;
if ((l_TF_982 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_V_980))).f_LINE, rt_str("not a tag of the record (3.9.3): ", 33), ((*(R17 *)rt_nil_check(l_V_980))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_982))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_V_980))).f_LINE, rt_str("not a tag of the record (3.9.3): ", 33), ((*(R17 *)rt_nil_check(l_V_980))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(l_V_980))).f_B == NULL)))
{
if ((r_PACKING_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_980))).f_B))).f_NAME) < ((rt_int)0LL)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_V_980))).f_LINE, rt_str("a packing-mode is DENSE, PACKED or UNPACKED (3.9.3): ", 53), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_980))).f_B))).f_NAME);
}
}
for (;;) {
if ((l_S_983 == NULL)) goto L_end984;
{
{
R17 * l_L_985; memset(&l_L_985, 0, sizeof l_L_985);
l_L_985 = ((*(R17 *)rt_nil_check(l_S_983))).f_A;
R17 * l_P_986; memset(&l_P_986, 0, sizeof l_P_986);
l_P_986 = ((*(R17 *)rt_nil_check(l_S_983))).f_B;
R17 * l_VSEEN_987; memset(&l_VSEEN_987, 0, sizeof l_VSEEN_987);
l_VSEEN_987 = NULL;
for (;;) {
if ((l_L_985 == NULL)) goto L_end988;
{
{
R14 l_SAVED_CODE_989; memset(&l_SAVED_CODE_989, 0, sizeof l_SAVED_CODE_989);
S_R14(&l_SAVED_CODE_989, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_LV_990; memset(&l_LV_990, 0, sizeof l_LV_990);
S_R26(&l_LV_990, r_EXPR(l_L_985, ((*(R24 *)rt_nil_check(l_TF_982))).f_T), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_989, 0);
if ((!r_SAME_CLASS(r_REAL_TYPE((l_LV_990).f_T), r_REAL_TYPE(((*(R24 *)rt_nil_check(l_TF_982))).f_T))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_985))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.3)", 49));
}
}
l_L_985 = ((*(R17 *)rt_nil_check(l_L_985))).f_NEXT;
}
RT_B_TICK();
} L_end988: ;
for (;;) {
if ((l_P_986 == NULL)) goto L_end991;
{
r_CHECK_ELEMENTS(p_T, ((*(R17 *)rt_nil_check(l_P_986))).f_A, C_R9(((*(R17 *)rt_nil_check(l_V_980))).f_NAME), ((*(R17 *)rt_nil_check(l_S_983))).f_A, &l_VSEEN_987);
l_P_986 = ((*(R17 *)rt_nil_check(l_P_986))).f_NEXT;
}
RT_B_TICK();
} L_end991: ;
}
l_S_983 = ((*(R17 *)rt_nil_check(l_S_983))).f_NEXT;
}
RT_B_TICK();
} L_end984: ;
}
l_V_980 = ((*(R17 *)rt_nil_check(l_V_980))).f_NEXT;
}
RT_B_TICK();
} L_end981: ;
}
}
static void r_CHECK_ELEMENTS(R22 * p_T, R17 * p_L, R9 p_TAGN, R17 * p_LABELS, R17 * *p_SEEN) { RT_B_TICK(); 
R17 * l_E_992; memset(&l_E_992, 0, sizeof l_E_992);
l_E_992 = p_L;
for (;;) {
if ((l_E_992 == NULL)) goto L_end993;
{
if (((((*(R17 *)rt_nil_check(l_E_992))).f_FL == ((rt_int)0LL)) || (((*(R17 *)rt_nil_check(l_E_992))).f_FL == ((rt_int)2LL))))
{
{
R24 * l_F_994; memset(&l_F_994, 0, sizeof l_F_994);
l_F_994 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FOUND_995; memset(&l_FOUND_995, 0, sizeof l_FOUND_995);
l_FOUND_995 = NULL;
for (;;) {
if ((l_F_994 == NULL)) goto L_end996;
{
if ((r_TEQ(((*(R24 *)rt_nil_check(l_F_994))).f_NAME, ((*(R17 *)rt_nil_check(l_E_992))).f_NAME) && r_TEQ(((*(R24 *)rt_nil_check(l_F_994))).f_TAGF, p_TAGN)))
{
l_FOUND_995 = l_F_994;
}
l_F_994 = ((*(R24 *)rt_nil_check(l_F_994))).f_NEXT;
}
RT_B_TICK();
} L_end996: ;
if ((l_FOUND_995 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_992))).f_LINE, rt_str("not a field of the record accessible here (3.9.3): ", 51), ((*(R17 *)rt_nil_check(l_E_992))).f_NAME);
}
if (((((*(R17 *)rt_nil_check(l_E_992))).f_FL == ((rt_int)2LL)) && (((*(R24 *)rt_nil_check(l_FOUND_995))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_992))).f_LINE, rt_str("OMIT names a constant or tag field (3.9.3): ", 44), ((*(R17 *)rt_nil_check(l_E_992))).f_NAME);
}
if (r_IN_IDENTS((*p_SEEN), ((*(R17 *)rt_nil_check(l_E_992))).f_NAME))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_992))).f_LINE, rt_str("a field is positioned once in a record-reptype (3.9.3): ", 56), ((*(R17 *)rt_nil_check(l_E_992))).f_NAME);
}
(*p_SEEN) = r_NAME_REF(((*(R17 *)rt_nil_check(l_E_992))).f_NAME, ((rt_int)0LL), NULL, (*p_SEEN));
}
}
else if ((((*(R17 *)rt_nil_check(l_E_992))).f_FL == ((rt_int)1LL)))
{
{
R24 * l_TF_997; memset(&l_TF_997, 0, sizeof l_TF_997);
l_TF_997 = r_FIND_FIELD(p_T, ((*(R17 *)rt_nil_check(l_E_992))).f_NAME);
R9 l_KEY_998; memset(&l_KEY_998, 0, sizeof l_KEY_998);
S_R9(&l_KEY_998, r_CAT(r_MK(rt_str("|", 1)), ((*(R17 *)rt_nil_check(l_E_992))).f_NAME), 0);
if ((l_TF_997 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_992))).f_LINE, rt_str("VARIANTS names a tag of the record (3.9.3): ", 44), ((*(R17 *)rt_nil_check(l_E_992))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_997))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_992))).f_LINE, rt_str("VARIANTS names a tag of the record (3.9.3): ", 44), ((*(R17 *)rt_nil_check(l_E_992))).f_NAME);
}
if (r_IN_IDENTS((*p_SEEN), l_KEY_998))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_992))).f_LINE, rt_str("a variant part is positioned once in a record-reptype (3.9.3): ", 63), ((*(R17 *)rt_nil_check(l_E_992))).f_NAME);
}
(*p_SEEN) = r_NAME_REF(l_KEY_998, ((rt_int)0LL), NULL, (*p_SEEN));
}
}
else
{
{
R23 l_M_999; memset(&l_M_999, 0, sizeof l_M_999);
S_R23(&l_M_999, r_MANIFEST(((*(R17 *)rt_nil_check(l_E_992))).f_B), 0);
if (((!(l_M_999).f_OK) || ((l_M_999).f_V < ((rt_int)0LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_E_992))).f_LINE, rt_str("the length of a filler-spec is a manifest integer, not negative (3.9.3)", 71));
}
}
}
l_E_992 = ((*(R17 *)rt_nil_check(l_E_992))).f_NEXT;
}
RT_B_TICK();
} L_end993: ;
}
static R9 r_RECORD_SIZE(R22 * p_T, R9 p_C) { RT_B_TICK(); 
R9 l_R_1000; memset(&l_R_1000, 0, sizeof l_R_1000);
S_R9(&l_R_1000, r_MK(rt_str("({ rt_int sz = 0;", 17)), 0);
R17 * l_SAVED_1001; memset(&l_SAVED_1001, 0, sizeof l_SAVED_1001);
l_SAVED_1001 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
((*(R7 *)rt_nil_check(g_W))).f_LDONE = NULL;
if ((!r_IS_RECORD_REP(p_T)))
{
S_R9(&l_R_1000, r_CAT(l_R_1000, r_LAYOUT_ALL(p_T, p_C, r_NO_TEXT(), ((rt_int)2LL))), 0);
S_R9(&l_R_1000, r_CAT(l_R_1000, r_LAYOUT_PARTS(p_T, p_C)), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_SAVED_1001;
{ R9 rv1002 = r_CATS(l_R_1000, rt_str(" sz; })", 7));
return rv1002; }
}
{
R17 * l_P_1003; memset(&l_P_1003, 0, sizeof l_P_1003);
l_P_1003 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A;
for (;;) {
if ((l_P_1003 == NULL)) goto L_end1004;
{
S_R9(&l_R_1000, r_CAT(l_R_1000, r_LAYOUT_SPEC(p_T, p_C, l_P_1003, r_NO_TEXT())), 0);
l_P_1003 = ((*(R17 *)rt_nil_check(l_P_1003))).f_NEXT;
}
RT_B_TICK();
} L_end1004: ;
}
S_R9(&l_R_1000, r_CAT(l_R_1000, r_LAYOUT_ALL(p_T, p_C, r_NO_TEXT(), ((rt_int)2LL))), 0);
S_R9(&l_R_1000, r_CAT(l_R_1000, r_LAYOUT_PARTS(p_T, p_C)), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_SAVED_1001;
{ R9 rv1005 = r_CATS(l_R_1000, rt_str(" sz; })", 7));
return rv1005; }
rt_raise(RT_X_INIT);
}
static R9 r_FIELD_SIZE_C(R24 * p_F, R9 p_C) { RT_B_TICK(); 
{ R9 rv1006 = (r_SIZE_OF(((*(R24 *)rt_nil_check(p_F))).f_T, r_FMT2(rt_str("(@).@", 5), p_C, ((*(R24 *)rt_nil_check(p_F))).f_CNAME))).f_C;
return rv1006; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_ALL(R22 * p_T, R9 p_C, R9 p_TAGN, rt_int p_MODE) { RT_B_TICK(); 
R9 l_R_1007; memset(&l_R_1007, 0, sizeof l_R_1007);
S_R9(&l_R_1007, r_MK(rt_str("", 0)), 0);
R24 * l_F_1008; memset(&l_F_1008, 0, sizeof l_F_1008);
l_F_1008 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1008 == NULL)) goto L_end1009;
{
if ((r_TEQ(((*(R24 *)rt_nil_check(l_F_1008))).f_TAGF, p_TAGN) && (!r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LDONE, ((*(R24 *)rt_nil_check(l_F_1008))).f_NAME))))
{
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(((*(R24 *)rt_nil_check(l_F_1008))).f_NAME, ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_1007, r_FMT4(rt_str("@ sz = rt_b_layout(sz, @, @);", 29), l_R_1007, r_FIELD_SIZE_C(l_F_1008, p_C), r_NUM(p_MODE), r_MK(rt_str("", 0))), 0);
}
else
{
S_R9(&l_R_1007, r_CAT(l_R_1007, r_FMT4(rt_str(" if (@) sz = rt_b_layout(sz, @, @);@", 36), r_VARIANT_COND(l_F_1008, p_T, p_C), r_FIELD_SIZE_C(l_F_1008, p_C), r_NUM(p_MODE), r_MK(rt_str("", 0)))), 0);
}
}
l_F_1008 = ((*(R24 *)rt_nil_check(l_F_1008))).f_NEXT;
}
RT_B_TICK();
} L_end1009: ;
{ R9 rv1010 = l_R_1007;
return rv1010; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_PARTS(R22 * p_T, R9 p_C) { RT_B_TICK(); 
R9 l_R_1011; memset(&l_R_1011, 0, sizeof l_R_1011);
S_R9(&l_R_1011, r_MK(rt_str("", 0)), 0);
R24 * l_F_1012; memset(&l_F_1012, 0, sizeof l_F_1012);
l_F_1012 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1012 == NULL)) goto L_end1013;
{
if ((((((*(R24 *)rt_nil_check(l_F_1012))).f_TAGF).f_LEN > ((rt_int)0LL)) && (!r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LDONE, r_CAT(r_MK(rt_str("|", 1)), ((*(R24 *)rt_nil_check(l_F_1012))).f_TAGF)))))
{
S_R9(&l_R_1011, r_CAT(l_R_1011, r_LAYOUT_VARIANTS(p_T, p_C, ((*(R24 *)rt_nil_check(l_F_1012))).f_TAGF)), 0);
}
l_F_1012 = ((*(R24 *)rt_nil_check(l_F_1012))).f_NEXT;
}
RT_B_TICK();
} L_end1013: ;
{ R9 rv1014 = l_R_1011;
return rv1014; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_SPEC(R22 * p_T, R9 p_C, R17 * p_P, R9 p_TAGN) { RT_B_TICK(); 
rt_int l_MODE_1015; memset(&l_MODE_1015, 0, sizeof l_MODE_1015);
l_MODE_1015 = ((rt_int)2LL);
R9 l_R_1016; memset(&l_R_1016, 0, sizeof l_R_1016);
S_R9(&l_R_1016, r_MK(rt_str("", 0)), 0);
if (((((*(R17 *)rt_nil_check(p_P))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_MODE_1015 = r_PACKING_VALUE(((*(R17 *)rt_nil_check(p_P))).f_NAME);
}
if ((((*(R17 *)rt_nil_check(p_P))).f_IV == ((rt_int)0LL)))
{
S_R9(&l_R_1016, r_LAYOUT_ALL(p_T, p_C, p_TAGN, l_MODE_1015), 0);
if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_1016, r_CAT(l_R_1016, r_LAYOUT_PARTS(p_T, p_C)), 0);
}
{ R9 rv1017 = l_R_1016;
return rv1017; }
}
{
R17 * l_E_1018; memset(&l_E_1018, 0, sizeof l_E_1018);
l_E_1018 = ((*(R17 *)rt_nil_check(p_P))).f_A;
for (;;) {
if ((l_E_1018 == NULL)) goto L_end1019;
{
if (((((*(R17 *)rt_nil_check(l_E_1018))).f_FL == ((rt_int)0LL)) || (((*(R17 *)rt_nil_check(l_E_1018))).f_FL == ((rt_int)2LL))))
{
{
R24 * l_F_1020; memset(&l_F_1020, 0, sizeof l_F_1020);
l_F_1020 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1020 == NULL)) goto L_end1021;
{
if ((r_TEQ(((*(R24 *)rt_nil_check(l_F_1020))).f_NAME, ((*(R17 *)rt_nil_check(l_E_1018))).f_NAME) && r_TEQ(((*(R24 *)rt_nil_check(l_F_1020))).f_TAGF, p_TAGN)))
{
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(((*(R24 *)rt_nil_check(l_F_1020))).f_NAME, ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (((((*(R17 *)rt_nil_check(l_E_1018))).f_FL == ((rt_int)2LL)) && r_ARG_MANIFEST(p_T, l_F_1020)))
{
}
else if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_1016, r_FMT3(rt_str("@ sz = rt_b_layout(sz, @, @);", 29), l_R_1016, r_FIELD_SIZE_C(l_F_1020, p_C), r_NUM(l_MODE_1015)), 0);
}
else
{
S_R9(&l_R_1016, r_CAT(l_R_1016, r_FMT4(rt_str(" if (@) sz = rt_b_layout(sz, @, @);@", 36), r_VARIANT_COND(l_F_1020, p_T, p_C), r_FIELD_SIZE_C(l_F_1020, p_C), r_NUM(l_MODE_1015), r_MK(rt_str("", 0)))), 0);
}
}
l_F_1020 = ((*(R24 *)rt_nil_check(l_F_1020))).f_NEXT;
}
RT_B_TICK();
} L_end1021: ;
}
}
else if ((((*(R17 *)rt_nil_check(l_E_1018))).f_FL == ((rt_int)1LL)))
{
S_R9(&l_R_1016, r_CAT(l_R_1016, r_LAYOUT_VARIANTS(p_T, p_C, ((*(R17 *)rt_nil_check(l_E_1018))).f_NAME)), 0);
}
else if ((((*(R17 *)rt_nil_check(l_E_1018))).f_FL == ((rt_int)5LL)))
{
S_R9(&l_R_1016, r_FMT3(rt_str("@ sz = rt_b_layout(sz, rt_b_pack_size(@, 7, @), ", 48), l_R_1016, r_NUM((r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1018))).f_B)).f_V), r_NUM(l_MODE_1015)), 0);
S_R9(&l_R_1016, r_FMT2(rt_str("@@);", 4), l_R_1016, r_NUM(l_MODE_1015)), 0);
}
else
{
S_R9(&l_R_1016, r_FMT3(rt_str("@ sz = rt_b_layout(sz, @, @);", 29), l_R_1016, r_NUM((r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1018))).f_B)).f_V), r_NUM(l_MODE_1015)), 0);
}
l_E_1018 = ((*(R17 *)rt_nil_check(l_E_1018))).f_NEXT;
}
RT_B_TICK();
} L_end1019: ;
}
{ R9 rv1022 = l_R_1016;
return rv1022; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_VARIANTS(R22 * p_T, R9 p_C, R9 p_TAGN) { RT_B_TICK(); 
R9 l_R_1023; memset(&l_R_1023, 0, sizeof l_R_1023);
S_R9(&l_R_1023, r_MK(rt_str("", 0)), 0);
R9 l_WORD_1024; memset(&l_WORD_1024, 0, sizeof l_WORD_1024);
S_R9(&l_WORD_1024, r_MK(rt_str(" if", 3)), 0);
rt_int l_ELSE_MODE_1025; memset(&l_ELSE_MODE_1025, 0, sizeof l_ELSE_MODE_1025);
l_ELSE_MODE_1025 = ((rt_int)2LL);
R24 * l_TF_1026; memset(&l_TF_1026, 0, sizeof l_TF_1026);
l_TF_1026 = r_FIND_FIELD(p_T, p_TAGN);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(r_CAT(r_MK(rt_str("|", 1)), p_TAGN), ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (r_IS_RECORD_REP(p_T))
{
{
R17 * l_V_1027; memset(&l_V_1027, 0, sizeof l_V_1027);
l_V_1027 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_C;
for (;;) {
if ((l_V_1027 == NULL)) goto L_end1028;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_V_1027))).f_NAME, p_TAGN))
{
{
R17 * l_S_1029; memset(&l_S_1029, 0, sizeof l_S_1029);
l_S_1029 = ((*(R17 *)rt_nil_check(l_V_1027))).f_A;
if ((!(((*(R17 *)rt_nil_check(l_V_1027))).f_B == NULL)))
{
l_ELSE_MODE_1025 = r_PACKING_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_1027))).f_B))).f_NAME);
}
for (;;) {
if ((l_S_1029 == NULL)) goto L_end1030;
{
{
R9 l_COND_1031; memset(&l_COND_1031, 0, sizeof l_COND_1031);
S_R9(&l_COND_1031, r_MK(rt_str("0", 1)), 0);
R17 * l_L_1032; memset(&l_L_1032, 0, sizeof l_L_1032);
l_L_1032 = ((*(R17 *)rt_nil_check(l_S_1029))).f_A;
R17 * l_P_1033; memset(&l_P_1033, 0, sizeof l_P_1033);
l_P_1033 = ((*(R17 *)rt_nil_check(l_S_1029))).f_B;
R17 * l_OUTER_1034; memset(&l_OUTER_1034, 0, sizeof l_OUTER_1034);
l_OUTER_1034 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
R9 l_BODY_1035; memset(&l_BODY_1035, 0, sizeof l_BODY_1035);
S_R9(&l_BODY_1035, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1032 == NULL)) goto L_end1036;
{
S_R9(&l_COND_1031, r_FMT4(rt_str("@ || (@).@ == @", 15), l_COND_1031, p_C, ((*(R24 *)rt_nil_check(l_TF_1026))).f_CNAME, (r_EXPR(l_L_1032, ((*(R24 *)rt_nil_check(l_TF_1026))).f_T)).f_C), 0);
l_L_1032 = ((*(R17 *)rt_nil_check(l_L_1032))).f_NEXT;
}
RT_B_TICK();
} L_end1036: ;
for (;;) {
if ((l_P_1033 == NULL)) goto L_end1037;
{
S_R9(&l_BODY_1035, r_CAT(l_BODY_1035, r_LAYOUT_SPEC(p_T, p_C, l_P_1033, p_TAGN)), 0);
l_P_1033 = ((*(R17 *)rt_nil_check(l_P_1033))).f_NEXT;
}
RT_B_TICK();
} L_end1037: ;
S_R9(&l_BODY_1035, r_CAT(l_BODY_1035, r_LAYOUT_ALL(p_T, p_C, p_TAGN, ((rt_int)2LL))), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_OUTER_1034;
S_R9(&l_R_1023, r_CAT(l_R_1023, r_FMT3(rt_str("@ (@) {@ }", 10), l_WORD_1024, l_COND_1031, l_BODY_1035)), 0);
S_R9(&l_WORD_1024, r_MK(rt_str(" else if", 8)), 0);
}
l_S_1029 = ((*(R17 *)rt_nil_check(l_S_1029))).f_NEXT;
}
RT_B_TICK();
} L_end1030: ;
}
}
l_V_1027 = ((*(R17 *)rt_nil_check(l_V_1027))).f_NEXT;
}
RT_B_TICK();
} L_end1028: ;
}
}
{
R17 * l_OUTER_1038; memset(&l_OUTER_1038, 0, sizeof l_OUTER_1038);
l_OUTER_1038 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
R9 l_REST_1039; memset(&l_REST_1039, 0, sizeof l_REST_1039);
S_R9(&l_REST_1039, r_LAYOUT_ALL(p_T, p_C, p_TAGN, l_ELSE_MODE_1025), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_OUTER_1038;
if (r_TEQS(l_WORD_1024, rt_str(" if", 3)))
{
{ R9 rv1040 = l_REST_1039;
return rv1040; }
}
{ R9 rv1041 = r_FMT2(rt_str("@ else {@ }", 11), l_R_1023, l_REST_1039);
return rv1041; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_ARG_MANIFEST(R22 * p_T, R24 * p_F) { RT_B_TICK(); 
R24 * l_G_1042; memset(&l_G_1042, 0, sizeof l_G_1042);
l_G_1042 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1043; memset(&l_A_1043, 0, sizeof l_A_1043);
l_A_1043 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_G_1042 == NULL) || (l_A_1043 == NULL))) goto L_end1044;
{
if ((!(((*(R24 *)rt_nil_check(l_G_1042))).f_KIND == ((rt_int)0LL))))
{
if ((l_G_1042 == p_F))
{
{ rt_int rv1045 = ((((*(R25 *)rt_nil_check(l_A_1043))).f_MLO).f_OK && (!((*(R25 *)rt_nil_check(l_A_1043))).f_ANYARG));
return rv1045; }
}
l_A_1043 = ((*(R25 *)rt_nil_check(l_A_1043))).f_NEXT;
}
l_G_1042 = ((*(R24 *)rt_nil_check(l_G_1042))).f_NEXT;
}
RT_B_TICK();
} L_end1044: ;
{ rt_int rv1046 = 0;
return rv1046; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ANY_TAG(R17 * p_A) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv1047 = 0;
return rv1047; }
}
{
R12 * l_Y_1048; memset(&l_Y_1048, 0, sizeof l_Y_1048);
l_Y_1048 = r_LOOKUP(((*(R17 *)rt_nil_check(p_A))).f_NAME);
if ((l_Y_1048 == NULL))
{
{ rt_int rv1049 = 0;
return rv1049; }
}
{ rt_int rv1050 = ((((*(R12 *)rt_nil_check(l_Y_1048))).f_KIND == g_Y_CONST) && r_TEQS(((*(R12 *)rt_nil_check(l_Y_1048))).f_ACCESS, rt_str("ANY", 3)));
return rv1050; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R17 * p_TS) { RT_B_TICK(); 
R17 * l_D_1051; memset(&l_D_1051, 0, sizeof l_D_1051);
l_D_1051 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_CLASS_1052; memset(&l_CLASS_1052, 0, sizeof l_CLASS_1052);
l_CLASS_1052 = NULL;
R21 * l_TARGS_1053; memset(&l_TARGS_1053, 0, sizeof l_TARGS_1053);
l_TARGS_1053 = NULL;
R25 * l_VARGS_1054; memset(&l_VARGS_1054, 0, sizeof l_VARGS_1054);
l_VARGS_1054 = NULL;
R25 * l_VTAIL_1055; memset(&l_VTAIL_1055, 0, sizeof l_VTAIL_1055);
l_VTAIL_1055 = NULL;
R17 * l_A_1056; memset(&l_A_1056, 0, sizeof l_A_1056);
l_A_1056 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R17 * l_F_1057; memset(&l_F_1057, 0, sizeof l_F_1057);
l_F_1057 = ((*(R17 *)rt_nil_check(l_D_1051))).f_A;
for (;;) {
if ((l_F_1057 == NULL)) goto L_end1058;
{
{
R17 * l_N_1059; memset(&l_N_1059, 0, sizeof l_N_1059);
l_N_1059 = ((*(R17 *)rt_nil_check(l_F_1057))).f_A;
for (;;) {
if ((l_N_1059 == NULL)) goto L_end1060;
{
if ((l_A_1056 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R17 *)rt_nil_check(l_F_1057))).f_B == NULL))
{
{
R21 * l_B_1061; memset(&l_B_1061, 0, sizeof l_B_1061);
l_B_1061 = ((R21 *)rt_b_new(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_B_1061)), ({ R21 rc1062; memset(&rc1062, 0, sizeof rc1062);  S_R9(&rc1062.f_NAME, ((*(R17 *)rt_nil_check(l_N_1059))).f_NAME, 0); rc1062.f_T = r_ARG_TYPE(l_A_1056); S_R9(&rc1062.f_C, r_NO_TEXT(), 0); rc1062.f_HASMV = 0; rc1062.f_MV = ((rt_int)0LL); rc1062.f_R = NULL; rc1062.f_NEXT = l_TARGS_1053; rc1062; }), 0);
l_TARGS_1053 = l_B_1061;
}
}
else
{
{
R25 * l_V_1063; memset(&l_V_1063, 0, sizeof l_V_1063);
l_V_1063 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_V_1063)), ({ R25 rc1064; memset(&rc1064, 0, sizeof rc1064);  S_R9(&rc1064.f_LO, r_NO_TEXT(), 0); S_R9(&rc1064.f_HI, r_NO_TEXT(), 0); S_R23(&rc1064.f_MLO, r_NO_MVAL(), 0); S_R23(&rc1064.f_MHI, r_NO_MVAL(), 0); rc1064.f_ANYARG = 0; rc1064.f_NEXT = NULL; rc1064; }), 0);
if (((((*(R17 *)rt_nil_check(l_A_1056))).f_KIND == g_N_ANY) || r_IS_ANY_TAG(l_A_1056)))
{
if ((!(((*(R17 *)rt_nil_check(l_F_1057))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_1056))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R25 *)rt_nil_check(l_V_1063))).f_ANYARG = 1;
}
else if ((((*(R17 *)rt_nil_check(l_A_1056))).f_KIND == g_N_DONTCARE))
{
((*(R25 *)rt_nil_check(l_V_1063))).f_ANYARG = 1;
S_R9(&((*(R25 *)rt_nil_check(l_V_1063))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R17 *)rt_nil_check(l_A_1056))).f_KIND == g_TS_GEN))
{
((*(R25 *)rt_nil_check(l_V_1063))).f_ANYARG = 1;
S_R9(&((*(R25 *)rt_nil_check(l_V_1063))).f_HI, r_MK(rt_b_cat(rt_str("\?", 1), r_STR(((*(R17 *)rt_nil_check(l_A_1056))).f_NAME, (((*(R17 *)rt_nil_check(l_A_1056))).f_NAME).f_LEN))), 0);
}
else
{
{
R22 * l_FT_1065; memset(&l_FT_1065, 0, sizeof l_FT_1065);
l_FT_1065 = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_1057))).f_B);
S_R9(&((*(R25 *)rt_nil_check(l_V_1063))).f_LO, r_CONVERT(r_EXPR(l_A_1056, l_FT_1065), l_FT_1065, ((*(R17 *)rt_nil_check(l_A_1056))).f_LINE, r_NO_TEXT()), 0);
S_R23(&((*(R25 *)rt_nil_check(l_V_1063))).f_MLO, r_ENUM_MANIFEST(l_A_1056, l_FT_1065), 0);
if ((((((*(R25 *)rt_nil_check(l_V_1063))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_FT_1065))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_FT_1065))).f_MHI).f_OK))
{
if ((((((*(R25 *)rt_nil_check(l_V_1063))).f_MLO).f_V < (((*(R22 *)rt_nil_check(l_FT_1065))).f_MLO).f_V) || ((((*(R25 *)rt_nil_check(l_V_1063))).f_MLO).f_V > (((*(R22 *)rt_nil_check(l_FT_1065))).f_MHI).f_V)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_1056))).f_LINE, rt_str("the argument is outside the range of the parameter (3.9.1)", 58));
}
}
if (((((*(R17 *)rt_nil_check(l_F_1057))).f_IV == ((rt_int)1LL)) && (!(((*(R25 *)rt_nil_check(l_V_1063))).f_MLO).f_OK)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_1056))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_1055 == NULL))
{
l_VARGS_1054 = l_V_1063;
}
else
{
((*(R25 *)rt_nil_check(l_VTAIL_1055))).f_NEXT = l_V_1063;
}
l_VTAIL_1055 = l_V_1063;
}
}
l_A_1056 = ((*(R17 *)rt_nil_check(l_A_1056))).f_NEXT;
l_N_1059 = ((*(R17 *)rt_nil_check(l_N_1059))).f_NEXT;
}
RT_B_TICK();
} L_end1060: ;
}
l_F_1057 = ((*(R17 *)rt_nil_check(l_F_1057))).f_NEXT;
}
RT_B_TICK();
} L_end1058: ;
if ((!(l_A_1056 == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
{
R12 * l_R_1066; memset(&l_R_1066, 0, sizeof l_R_1066);
l_R_1066 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_1066 == NULL)) goto L_end1067;
{
if (((((*(R12 *)rt_nil_check(l_R_1066))).f_DECL == l_D_1051) && r_SAME_BINDS(((*(R12 *)rt_nil_check(l_R_1066))).f_BINDINGS, l_TARGS_1053)))
{
l_CLASS_1052 = ((*(R12 *)rt_nil_check(l_R_1066))).f_T;
goto L_end1067;
}
l_R_1066 = ((*(R12 *)rt_nil_check(l_R_1066))).f_INSTANCES;
}
RT_B_TICK();
} L_end1067: ;
}
if ((l_CLASS_1052 == NULL))
{
{
R12 * l_R_1068; memset(&l_R_1068, 0, sizeof l_R_1068);
l_R_1068 = r_NEW_SYM(g_Y_TYPE, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R21 * l_B_1069; memset(&l_B_1069, 0, sizeof l_B_1069);
l_B_1069 = l_TARGS_1053;
R21 * l_SAVED_1070; memset(&l_SAVED_1070, 0, sizeof l_SAVED_1070);
l_SAVED_1070 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
rt_int l_ENTERED_1071; memset(&l_ENTERED_1071, 0, sizeof l_ENTERED_1071);
((*(R12 *)rt_nil_check(l_R_1068))).f_DECL = l_D_1051;
((*(R12 *)rt_nil_check(l_R_1068))).f_BINDINGS = l_TARGS_1053;
((*(R12 *)rt_nil_check(l_R_1068))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
((*(R7 *)rt_nil_check(g_W))).f_RECS = l_R_1068;
l_ENTERED_1071 = r_ENTER_MODULE_FOR(p_Y);
r_OPEN_SCOPE();
for (;;) {
if ((l_B_1069 == NULL)) goto L_end1072;
{
{
R12 * l_TY_1073; memset(&l_TY_1073, 0, sizeof l_TY_1073);
l_TY_1073 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_B_1069))).f_NAME);
((*(R12 *)rt_nil_check(l_TY_1073))).f_T = ((*(R21 *)rt_nil_check(l_B_1069))).f_T;
r_DEFINE(l_TY_1073, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_1069 = ((*(R21 *)rt_nil_check(l_B_1069))).f_NEXT;
}
RT_B_TICK();
} L_end1072: ;
l_F_1057 = ((*(R17 *)rt_nil_check(l_D_1051))).f_A;
for (;;) {
if ((l_F_1057 == NULL)) goto L_end1074;
{
if ((!(((*(R17 *)rt_nil_check(l_F_1057))).f_B == NULL)))
{
{
R17 * l_N_1075; memset(&l_N_1075, 0, sizeof l_N_1075);
l_N_1075 = ((*(R17 *)rt_nil_check(l_F_1057))).f_A;
for (;;) {
if ((l_N_1075 == NULL)) goto L_end1076;
{
{
R12 * l_P_1077; memset(&l_P_1077, 0, sizeof l_P_1077);
l_P_1077 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(l_N_1075))).f_NAME);
((*(R12 *)rt_nil_check(l_P_1077))).f_T = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_1057))).f_B);
S_R9(&((*(R12 *)rt_nil_check(l_P_1077))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), r_CID(((*(R17 *)rt_nil_check(l_N_1075))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_P_1077))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_P_1077))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_1077, ((*(R17 *)rt_nil_check(l_F_1057))).f_LINE);
}
l_N_1075 = ((*(R17 *)rt_nil_check(l_N_1075))).f_NEXT;
}
RT_B_TICK();
} L_end1076: ;
}
}
l_F_1057 = ((*(R17 *)rt_nil_check(l_F_1057))).f_NEXT;
}
RT_B_TICK();
} L_end1074: ;
if ((l_TARGS_1053 == NULL))
{
l_CLASS_1052 = r_RESOLVE_RECORD(((*(R17 *)rt_nil_check(l_D_1051))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R17 *)rt_nil_check(l_D_1051))).f_A);
}
else
{
l_CLASS_1052 = r_RESOLVE_RECORD(((*(R17 *)rt_nil_check(l_D_1051))).f_B, r_NO_TEXT(), p_Y, ((*(R17 *)rt_nil_check(l_D_1051))).f_A);
}
S_R9(&((*(R22 *)rt_nil_check(l_CLASS_1052))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R12 *)rt_nil_check(l_R_1068))).f_T = l_CLASS_1052;
r_CLOSE_SCOPE();
if (l_ENTERED_1071)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1070;
}
}
{
R22 * l_T_1078; memset(&l_T_1078, 0, sizeof l_T_1078);
l_T_1078 = r_COPY_TYP(l_CLASS_1052);
((*(R22 *)rt_nil_check(l_T_1078))).f_ARGS = l_VARGS_1054;
{ R22 * rv1079 = l_T_1078;
return rv1079; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_1080; memset(&l_P_1080, 0, sizeof l_P_1080);
l_P_1080 = p_A;
R21 * l_Q_1081; memset(&l_Q_1081, 0, sizeof l_Q_1081);
l_Q_1081 = p_B;
for (;;) {
if (((l_P_1080 == NULL) || (l_Q_1081 == NULL))) goto L_end1082;
{
if ((((!r_SAME_TYPE(((*(R21 *)rt_nil_check(l_P_1080))).f_T, ((*(R21 *)rt_nil_check(l_Q_1081))).f_T)) || (!r_SAME_LENGTH(((*(R21 *)rt_nil_check(l_P_1080))).f_T, ((*(R21 *)rt_nil_check(l_Q_1081))).f_T))) || (!r_SAME_REPS(((*(R21 *)rt_nil_check(l_P_1080))).f_T, ((*(R21 *)rt_nil_check(l_Q_1081))).f_T))))
{
{ rt_int rv1083 = 0;
return rv1083; }
}
l_P_1080 = ((*(R21 *)rt_nil_check(l_P_1080))).f_NEXT;
l_Q_1081 = ((*(R21 *)rt_nil_check(l_Q_1081))).f_NEXT;
}
RT_B_TICK();
} L_end1082: ;
{ rt_int rv1084 = ((l_P_1080 == NULL) && (l_Q_1081 == NULL));
return rv1084; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R22 * p_T) { RT_B_TICK(); 
R25 * l_A_1085; memset(&l_A_1085, 0, sizeof l_A_1085);
l_A_1085 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_1085 == NULL)) goto L_end1086;
{
if (((*(R25 *)rt_nil_check(l_A_1085))).f_ANYARG)
{
{ rt_int rv1087 = 1;
return rv1087; }
}
l_A_1085 = ((*(R25 *)rt_nil_check(l_A_1085))).f_NEXT;
}
RT_B_TICK();
} L_end1086: ;
{ rt_int rv1088 = 0;
return rv1088; }
rt_raise(RT_X_INIT);
}
static R9 r_VARIANT_COND(R24 * p_F, R22 * p_T, R9 p_SELF) { RT_B_TICK(); 
R17 * l_L_1089; memset(&l_L_1089, 0, sizeof l_L_1089);
l_L_1089 = ((*(R24 *)rt_nil_check(p_F))).f_LABELS;
R9 l_C_1090; memset(&l_C_1090, 0, sizeof l_C_1090);
S_R9(&l_C_1090, r_MK(rt_str("0", 1)), 0);
R24 * l_TF_1091; memset(&l_TF_1091, 0, sizeof l_TF_1091);
l_TF_1091 = r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_1089 == NULL)) goto L_end1092;
{
if ((((*(R17 *)rt_nil_check(l_L_1089))).f_KIND == g_N_RANGE))
{
S_R9(&l_C_1090, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_1090, p_SELF, ((*(R24 *)rt_nil_check(l_TF_1091))).f_CNAME), 0);
S_R9(&l_C_1090, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_1090, (r_EXPR(((*(R17 *)rt_nil_check(l_L_1089))).f_A, ((*(R24 *)rt_nil_check(l_TF_1091))).f_T)).f_C, p_SELF, ((*(R24 *)rt_nil_check(l_TF_1091))).f_CNAME), 0);
S_R9(&l_C_1090, r_FMT2(rt_str("@@)", 3), l_C_1090, (r_EXPR(((*(R17 *)rt_nil_check(l_L_1089))).f_B, ((*(R24 *)rt_nil_check(l_TF_1091))).f_T)).f_C), 0);
}
else
{
S_R9(&l_C_1090, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_1090, p_SELF, ((*(R24 *)rt_nil_check(l_TF_1091))).f_CNAME, (r_EXPR(l_L_1089, ((*(R24 *)rt_nil_check(l_TF_1091))).f_T)).f_C), 0);
}
l_L_1089 = ((*(R17 *)rt_nil_check(l_L_1089))).f_NEXT;
}
RT_B_TICK();
} L_end1092: ;
{ R9 rv1093 = r_FMT1(rt_str("(@)", 3), l_C_1090);
return rv1093; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R22 * p_T) { RT_B_TICK(); 
R9 l_C_1094; memset(&l_C_1094, 0, sizeof l_C_1094);
S_R9(&l_C_1094, ((*(R22 *)rt_nil_check(p_T))).f_CNAME, 0);
R24 * l_F_1095; memset(&l_F_1095, 0, sizeof l_F_1095);
l_F_1095 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_BODY_1096; memset(&l_BODY_1096, 0, sizeof l_BODY_1096);
S_R9(&l_BODY_1096, r_MK(rt_str("", 0)), 0);
R9 l_ASSIGN_1097; memset(&l_ASSIGN_1097, 0, sizeof l_ASSIGN_1097);
S_R9(&l_ASSIGN_1097, r_MK(rt_str("", 0)), 0);
R9 l_COPY_1098; memset(&l_COPY_1098, 0, sizeof l_COPY_1098);
S_R9(&l_COPY_1098, r_MK(rt_str("", 0)), 0);
R9 l_EQ_1099; memset(&l_EQ_1099, 0, sizeof l_EQ_1099);
S_R9(&l_EQ_1099, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_1095 == NULL)) goto L_end1100;
{
S_R9(&l_BODY_1096, r_FMT3(rt_str("@ @ @;", 6), l_BODY_1096, r_CTYPE(((*(R24 *)rt_nil_check(l_F_1095))).f_T), ((*(R24 *)rt_nil_check(l_F_1095))).f_CNAME), 0);
S_R9(&l_COPY_1098, r_FMT3(rt_str("@ d.@ = @;", 10), l_COPY_1098, ((*(R24 *)rt_nil_check(l_F_1095))).f_CNAME, r_COPY_OF(((*(R24 *)rt_nil_check(l_F_1095))).f_T, r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_1095))).f_CNAME))), 0);
if ((((*(R24 *)rt_nil_check(l_F_1095))).f_KIND == ((rt_int)1LL)))
{
S_R9(&l_ASSIGN_1097, r_FMT2(rt_str("@ if (!(@)) rt_raise(RT_B_TYPE_MISMATCH);", 41), l_ASSIGN_1097, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1095))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_1095))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_1095))).f_CNAME))), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1095))).f_KIND == ((rt_int)2LL)))
{
S_R9(&l_ASSIGN_1097, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_1097, ((*(R24 *)rt_nil_check(l_F_1095))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_1095))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_1095))).f_CNAME), 0);
}
else
{
S_R9(&l_ASSIGN_1097, r_FMT2(rt_str("@ @", 3), l_ASSIGN_1097, r_ASSIGN_CODE(((*(R24 *)rt_nil_check(l_F_1095))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_1095))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_1095))).f_CNAME))), 0);
}
if (((((*(R24 *)rt_nil_check(l_F_1095))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R9(&l_EQ_1099, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1099, r_VARIANT_COND(l_F_1095, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1095))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_1095))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_1095))).f_CNAME))), 0);
}
else
{
S_R9(&l_EQ_1099, r_FMT2(rt_str("@ && @", 6), l_EQ_1099, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1095))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_1095))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_1095))).f_CNAME))), 0);
}
l_F_1095 = ((*(R24 *)rt_nil_check(l_F_1095))).f_NEXT;
}
RT_B_TICK();
} L_end1100: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_1094, l_BODY_1096));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_1094, l_C_1094, l_C_1094));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_1094, l_C_1094, l_C_1094));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_1094, l_C_1094, l_C_1094, l_ASSIGN_1097));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_1094, l_C_1094, l_C_1094, l_EQ_1099));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_1094, l_C_1094, l_C_1094));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s;", 28), l_C_1094, l_C_1094, l_C_1094, l_C_1094));
r_EMIT(g_O_HELPERS, r_FMT1(rt_str("@ return d; }", 13), l_COPY_1098));
}
static R9 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R9 l_ET_C_1101; memset(&l_ET_C_1101, 0, sizeof l_ET_C_1101);
S_R9(&l_ET_C_1101, r_CTYPE(p_ELEM), 0);
R9 l_KEY_1102; memset(&l_KEY_1102, 0, sizeof l_KEY_1102);
S_R9(&l_KEY_1102, r_FMT3(rt_str("@/@/@", 5), l_ET_C_1101, r_NUM(p_DIMS), r_NUM(((*(R22 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R12 * l_Y_1103; memset(&l_Y_1103, 0, sizeof l_Y_1103);
l_Y_1103 = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_1103 == NULL)) goto L_end1104;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_1103))).f_NAME, l_KEY_1102) && r_SAME_TYPE(((*(R12 *)rt_nil_check(l_Y_1103))).f_T, p_ELEM)))
{
{ R9 rv1105 = ((*(R12 *)rt_nil_check(l_Y_1103))).f_ACCESS;
return rv1105; }
}
l_Y_1103 = ((*(R12 *)rt_nil_check(l_Y_1103))).f_INSTANCES;
}
RT_B_TICK();
} L_end1104: ;
l_Y_1103 = r_NEW_SYM(g_Y_TYPE, l_KEY_1102);
((*(R12 *)rt_nil_check(l_Y_1103))).f_T = p_ELEM;
S_R9(&((*(R12 *)rt_nil_check(l_Y_1103))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R12 *)rt_nil_check(l_Y_1103))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R7 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_1103;
{
R9 l_C_1106; memset(&l_C_1106, 0, sizeof l_C_1106);
S_R9(&l_C_1106, ((*(R12 *)rt_nil_check(l_Y_1103))).f_ACCESS, 0);
R9 l_D_1107; memset(&l_D_1107, 0, sizeof l_D_1107);
S_R9(&l_D_1107, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_1106, l_C_1106));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_1106, l_D_1107, l_D_1107, l_ET_C_1101));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_1106, l_C_1106, l_C_1106));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_1106, l_C_1106, l_C_1106));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_1106, l_C_1106, l_C_1106, l_D_1107));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_1107, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_1106, l_C_1106, l_C_1106, l_D_1107));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_1107, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_1106, l_C_1106, l_C_1106));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s; ", 29), l_C_1106, l_C_1106, l_C_1106, l_C_1106));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("rt_int n = rt_b_extent(@, s.lo, s.hi); d.p = rt_alloc((n > 0 \? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = @; return d; }", 140), l_D_1107, r_COPY_OF(p_ELEM, r_MK(rt_str("s.p[i]", 6)))));
}
{ R9 rv1108 = ((*(R12 *)rt_nil_check(l_Y_1103))).f_ACCESS;
return rv1108; }
rt_raise(RT_X_INIT);
}
static R9 r_INIT_CODE(R22 * p_T, R9 p_LV) { RT_B_TICK(); 
rt_int l_K_1109; memset(&l_K_1109, 0, sizeof l_K_1109);
l_K_1109 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1109 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1110 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv1110; }
}
{ R9 rv1111 = r_FMT2(rt_str("@ = rt_b_str_new(@, 0);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv1111; }
}
else if ((l_K_1109 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1112 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv1112; }
}
{ R9 rv1113 = r_FMT2(rt_str("@ = rt_b_str_new(@, 1);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv1113; }
}
else if ((l_K_1109 == g_T_SEM))
{
{ R9 rv1114 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv1114; }
}
else if ((l_K_1109 == g_T_ABS))
{
{ R9 rv1115 = r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv1115; }
}
else if ((l_K_1109 == g_T_ARR))
{
{
R25 * l_B_1116; memset(&l_B_1116, 0, sizeof l_B_1116);
l_B_1116 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_1117; memset(&l_I_1117, 0, sizeof l_I_1117);
l_I_1117 = ((rt_int)0LL);
R9 l_R_1118; memset(&l_R_1118, 0, sizeof l_R_1118);
S_R9(&l_R_1118, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_1116 == NULL)) goto L_end1119;
{
S_R9(&l_R_1118, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_1118, p_LV, r_NUM(l_I_1117), ((*(R25 *)rt_nil_check(l_B_1116))).f_LO), 0);
S_R9(&l_R_1118, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_1118, p_LV, r_NUM(l_I_1117), ((*(R25 *)rt_nil_check(l_B_1116))).f_HI), 0);
l_I_1117 = rt_add(l_I_1117, ((rt_int)1LL));
l_B_1116 = ((*(R25 *)rt_nil_check(l_B_1116))).f_NEXT;
}
RT_B_TICK();
} L_end1119: ;
S_R9(&l_R_1118, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_1118, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R9(&l_R_1118, r_FMT4(rt_str("@ @.p = rt_b_array_alloc(n, sizeof *@.p);", 41), l_R_1118, p_LV, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_ELEM))
{
{
R9 l_IV_1120; memset(&l_IV_1120, 0, sizeof l_IV_1120);
S_R9(&l_IV_1120, r_NEW_NAME(rt_str("i", 1)), 0);
S_R9(&l_R_1118, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_1118, l_IV_1120, l_IV_1120, l_IV_1120), 0);
S_R9(&l_R_1118, r_FMT2(rt_str("@ @ }", 5), l_R_1118, r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_1120))), 0);
}
}
{ R9 rv1121 = r_CATS(l_R_1118, rt_str(" }", 2));
return rv1121; }
}
}
else if ((l_K_1109 == g_T_REC))
{
{
R24 * l_F_1122; memset(&l_F_1122, 0, sizeof l_F_1122);
l_F_1122 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1123; memset(&l_A_1123, 0, sizeof l_A_1123);
l_A_1123 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R9 l_R_1124; memset(&l_R_1124, 0, sizeof l_R_1124);
S_R9(&l_R_1124, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_1122 == NULL)) goto L_end1125;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1122))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_1123 == NULL)))
{
if ((!((*(R25 *)rt_nil_check(l_A_1123))).f_ANYARG))
{
S_R9(&l_R_1124, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_1124, p_LV, ((*(R24 *)rt_nil_check(l_F_1122))).f_CNAME, ((*(R25 *)rt_nil_check(l_A_1123))).f_LO), 0);
}
else if (((((*(R24 *)rt_nil_check(l_F_1122))).f_KIND == ((rt_int)2LL)) && ((((*(R25 *)rt_nil_check(l_A_1123))).f_HI).f_LEN == ((rt_int)0LL))))
{
S_R9(&l_R_1124, r_FMT3(rt_str("@ @.@ = INT64_MIN;", 18), l_R_1124, p_LV, ((*(R24 *)rt_nil_check(l_F_1122))).f_CNAME), 0);
}
l_A_1123 = ((*(R25 *)rt_nil_check(l_A_1123))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_1122))).f_T))
{
S_R9(&l_R_1124, r_FMT2(rt_str("@ @", 3), l_R_1124, r_SUBST_SELF(r_INIT_CODE(((*(R24 *)rt_nil_check(l_F_1122))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R24 *)rt_nil_check(l_F_1122))).f_CNAME)), p_LV)), 0);
}
l_F_1122 = ((*(R24 *)rt_nil_check(l_F_1122))).f_NEXT;
}
RT_B_TICK();
} L_end1125: ;
{ R9 rv1126 = l_R_1124;
return rv1126; }
}
}
{ R9 rv1127 = r_NO_TEXT();
return rv1127; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1128; memset(&l_K_1128, 0, sizeof l_K_1128);
l_K_1128 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_1128 == g_T_STR) || (l_K_1128 == g_T_BITS)) || (l_K_1128 == g_T_ARR)) || (l_K_1128 == g_T_SEM)))
{
{ rt_int rv1129 = 1;
return rv1129; }
}
else if ((l_K_1128 == g_T_ABS))
{
{ rt_int rv1130 = r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1130; }
}
else if ((l_K_1128 == g_T_REC))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv1131 = 1;
return rv1131; }
}
{
R24 * l_F_1132; memset(&l_F_1132, 0, sizeof l_F_1132);
l_F_1132 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1132 == NULL)) goto L_end1133;
{
if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_1132))).f_T))
{
{ rt_int rv1134 = 1;
return rv1134; }
}
l_F_1132 = ((*(R24 *)rt_nil_check(l_F_1132))).f_NEXT;
}
RT_B_TICK();
} L_end1133: ;
}
}
{ rt_int rv1135 = 0;
return rv1135; }
rt_raise(RT_X_INIT);
}
static R9 r_COPY_OF(R22 * p_T, R9 p_V) { RT_B_TICK(); 
rt_int l_K_1136; memset(&l_K_1136, 0, sizeof l_K_1136);
l_K_1136 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1136 == g_T_STR) || (l_K_1136 == g_T_BITS)))
{
{ R9 rv1137 = r_FMT1(rt_str("rt_str_copy(@)", 14), p_V);
return rv1137; }
}
else if ((l_K_1136 == g_T_ABS))
{
{ R9 rv1138 = r_COPY_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_V);
return rv1138; }
}
else if (((l_K_1136 == g_T_ARR) || (l_K_1136 == g_T_REC)))
{
{ R9 rv1139 = r_FMT2(rt_str("C_@(@)", 6), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_V);
return rv1139; }
}
{ R9 rv1140 = p_V;
return rv1140; }
rt_raise(RT_X_INIT);
}
static R9 r_ASSIGN_CODE(R22 * p_T, R9 p_LV, R9 p_RV) { RT_B_TICK(); 
rt_int l_K_1141; memset(&l_K_1141, 0, sizeof l_K_1141);
l_K_1141 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1141 == g_T_STR) || (l_K_1141 == g_T_BITS)))
{
{ R9 rv1142 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv1142; }
}
else if ((l_K_1141 == g_T_ABS))
{
{ R9 rv1143 = r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv1143; }
}
else if ((l_K_1141 == g_T_SEM))
{
{ R9 rv1144 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv1144; }
}
else if ((l_K_1141 == g_T_ARR))
{
{ R9 rv1145 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1145; }
}
else if ((l_K_1141 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R9 rv1146 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1146; }
}
{ R9 rv1147 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1147; }
}
{ R9 rv1148 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv1148; }
rt_raise(RT_X_INIT);
}
static R9 r_EQUAL_CODE(R22 * p_T, R9 p_A, R9 p_B) { RT_B_TICK(); 
rt_int l_K_1149; memset(&l_K_1149, 0, sizeof l_K_1149);
l_K_1149 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1149 == g_T_STR) || (l_K_1149 == g_T_BITS)))
{
{ R9 rv1150 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv1150; }
}
else if ((l_K_1149 == g_T_ABS))
{
{ R9 rv1151 = r_EQUAL_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv1151; }
}
else if (((l_K_1149 == g_T_ARR) || (l_K_1149 == g_T_REC)))
{
{ R9 rv1152 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv1152; }
}
else if ((l_K_1149 == g_T_SEM))
{
{ R9 rv1153 = r_MK(rt_str("0", 1));
return rv1153; }
}
{ R9 rv1154 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv1154; }
rt_raise(RT_X_INIT);
}
static R9 r_RANGE_CHECK(R22 * p_T, R9 p_V, R9 p_SELF) { RT_B_TICK(); 
if (((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))) || ((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS))
{
{ R9 rv1155 = p_V;
return rv1155; }
}
if ((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R9 rv1156 = p_V;
return rv1156; }
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R9 rv1157 = p_V;
return rv1157; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R9 rv1158 = r_FMT3(rt_str("rt_b_tfrange(@, @, @)", 21), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1158; }
}
{ R9 rv1159 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1159; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R9 rv1160 = r_FMT3(rt_str("rt_b_trange(@, @, @)", 20), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1160; }
}
{ R9 rv1161 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1161; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv1162 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv1162; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv1163 = 1;
return rv1163; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv1164 = r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv1164; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv1165 = r_SAME_CLASS(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1165; }
}
if ((!(((*(R22 *)rt_nil_check(p_A))).f_KIND == ((*(R22 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv1166 = 0;
return rv1166; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv1167 = (((*(R22 *)rt_nil_check(p_A))).f_BASE == ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1167; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1168 = ((((*(R22 *)rt_nil_check(p_A))).f_DIMS == ((*(R22 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM));
return rv1168; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv1169 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv1169; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1170 = ((r_ORIGINAL(((*(R22 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R22 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE));
return rv1170; }
}
{ rt_int rv1171 = 1;
return rv1171; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv1172 = 1;
return rv1172; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv1173 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv1173; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv1174 = r_SAME_TYPE(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1174; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv1175 = 0;
return rv1175; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv1176 = (((*(R22 *)rt_nil_check(p_A))).f_SCALE == ((*(R22 *)rt_nil_check(p_B))).f_SCALE);
return rv1176; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1177 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM);
return rv1177; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv1178 = r_SAME_ARGS(((*(R22 *)rt_nil_check(p_A))).f_ARGS, ((*(R22 *)rt_nil_check(p_B))).f_ARGS);
return rv1178; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1179 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1179; }
}
{ rt_int rv1180 = 1;
return rv1180; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R25 * p_B) { RT_B_TICK(); 
if (((((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1181 = 0;
return rv1181; }
}
{ rt_int rv1182 = rt_b_eq(rt_b_slice(r_STR(((*(R25 *)rt_nil_check(p_B))).f_HI, (((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv1182; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R25 * p_A, R25 * p_B) { RT_B_TICK(); 
R25 * l_P_1183; memset(&l_P_1183, 0, sizeof l_P_1183);
l_P_1183 = p_A;
R25 * l_Q_1184; memset(&l_Q_1184, 0, sizeof l_Q_1184);
l_Q_1184 = p_B;
for (;;) {
if (((l_P_1183 == NULL) || (l_Q_1184 == NULL))) goto L_end1185;
{
if ((r_IS_GEN_ARG(l_P_1183) || r_IS_GEN_ARG(l_Q_1184)))
{
}
else if ((!(((*(R25 *)rt_nil_check(l_P_1183))).f_ANYARG == ((*(R25 *)rt_nil_check(l_Q_1184))).f_ANYARG)))
{
{ rt_int rv1186 = 0;
return rv1186; }
}
if (((((*(R25 *)rt_nil_check(l_P_1183))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_1184))).f_MLO).f_OK))
{
if ((!((((*(R25 *)rt_nil_check(l_P_1183))).f_MLO).f_V == (((*(R25 *)rt_nil_check(l_Q_1184))).f_MLO).f_V)))
{
{ rt_int rv1187 = 0;
return rv1187; }
}
}
l_P_1183 = ((*(R25 *)rt_nil_check(l_P_1183))).f_NEXT;
l_Q_1184 = ((*(R25 *)rt_nil_check(l_Q_1184))).f_NEXT;
}
RT_B_TICK();
} L_end1185: ;
{ rt_int rv1188 = ((l_P_1183 == NULL) && (l_Q_1184 == NULL));
return rv1188; }
rt_raise(RT_X_INIT);
}
static R9 r_FRAME_OF(rt_int p_LEVEL) { RT_B_TICK(); 
R19 * l_CS_1189; memset(&l_CS_1189, 0, sizeof l_CS_1189);
l_CS_1189 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R9 l_T_1190; memset(&l_T_1190, 0, sizeof l_T_1190);
rt_int l_LEV_1191; memset(&l_LEV_1191, 0, sizeof l_LEV_1191);
if ((((*(R19 *)rt_nil_check(l_CS_1189))).f_LEVEL == p_LEVEL))
{
{ R9 rv1192 = r_MK(rt_str("F", 1));
return rv1192; }
}
if (((*(R19 *)rt_nil_check(l_CS_1189))).f_FRAMED)
{
S_R9(&l_T_1190, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R9(&l_T_1190, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_1191 = rt_sub(((*(R19 *)rt_nil_check(l_CS_1189))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_1191 <= p_LEVEL)) goto L_end1193;
{
S_R9(&l_T_1190, r_CATS(l_T_1190, rt_str("->up", 4)), 0);
l_LEV_1191 = rt_sub(l_LEV_1191, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1193: ;
{ R9 rv1194 = l_T_1190;
return rv1194; }
rt_raise(RT_X_INIT);
}
static R9 r_OBJ_ACCESS(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R12 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R9 rv1195 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1195; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1196 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1196; }
}
if (((*(R12 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R9 rv1197 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1197; }
}
{ R9 rv1198 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1198; }
rt_raise(RT_X_INIT);
}
static R9 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE) { RT_B_TICK(); 
R19 * l_CS_1199; memset(&l_CS_1199, 0, sizeof l_CS_1199);
l_CS_1199 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R22 * l_T_1200; memset(&l_T_1200, 0, sizeof l_T_1200);
l_T_1200 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
R9 l_CN_1201; memset(&l_CN_1201, 0, sizeof l_CN_1201);
if ((((((*(R19 *)rt_nil_check(l_CS_1199))).f_LEVEL == ((rt_int)0LL)) && ((((*(R7 *)rt_nil_check(g_W))).f_SEPSEG).f_LEN > ((rt_int)0LL))) && rt_b_eq(p_BASE, rt_str("", 0))))
{
((*(R7 *)rt_nil_check(g_W))).f_SEPV = rt_add(((*(R7 *)rt_nil_check(g_W))).f_SEPV, ((rt_int)1LL));
S_R9(&l_CN_1201, r_FMT3(rt_str("bs_@_v@_@", 9), r_CID(((*(R7 *)rt_nil_check(g_W))).f_SEPSEG), r_NUM(((*(R7 *)rt_nil_check(g_W))).f_SEPV), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
if (((*(R7 *)rt_nil_check(g_W))).f_EXTSEG)
{
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("extern @ @;", 11), r_CTYPE(l_T_1200), l_CN_1201));
}
else
{
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("@ @;", 4), r_CTYPE(l_T_1200), l_CN_1201));
}
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1201, 0);
{ R9 rv1202 = l_CN_1201;
return rv1202; }
}
if ((((*(R19 *)rt_nil_check(l_CS_1199))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R7 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R7 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R9(&l_CN_1201, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
}
else
{
S_R9(&l_CN_1201, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_1200), l_CN_1201));
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1201, 0);
{ R9 rv1203 = l_CN_1201;
return rv1203; }
}
S_R9(&l_CN_1201, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_FIELD, l_CN_1201, 0);
if (((*(R19 *)rt_nil_check(l_CS_1199))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_1200), l_CN_1201), &((*(R19 *)rt_nil_check(l_CS_1199))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_1201), 0);
{ R9 rv1204 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1204; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_1200), l_CN_1201, l_CN_1201, l_CN_1201));
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1201, 0);
{ R9 rv1205 = l_CN_1201;
return rv1205; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R17 * p_D) { RT_B_TICK(); 
R22 * l_T_1206; memset(&l_T_1206, 0, sizeof l_T_1206);
l_T_1206 = r_RESOLVE(((*(R17 *)rt_nil_check(p_D))).f_B);
R17 * l_N_1207; memset(&l_N_1207, 0, sizeof l_N_1207);
l_N_1207 = ((*(R17 *)rt_nil_check(p_D))).f_A;
R26 l_V_1208; memset(&l_V_1208, 0, sizeof l_V_1208);
rt_int l_HAVE_V_1209; memset(&l_HAVE_V_1209, 0, sizeof l_HAVE_V_1209);
l_HAVE_V_1209 = 0;
if (((((*(R22 *)rt_nil_check(l_T_1206))).f_KIND == g_T_TYPE) || (((*(R22 *)rt_nil_check(l_T_1206))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_1207 == NULL)) goto L_end1210;
{
{
R12 * l_Y_1211; memset(&l_Y_1211, 0, sizeof l_Y_1211);
l_Y_1211 = r_NEW_SYM(g_Y_VAR, ((*(R17 *)rt_nil_check(l_N_1207))).f_NAME);
R9 l_CN_1212; memset(&l_CN_1212, 0, sizeof l_CN_1212);
if ((((*(R17 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R12 *)rt_nil_check(l_Y_1211))).f_KIND = g_Y_CONST;
((*(R12 *)rt_nil_check(l_Y_1211))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_1206) && (((*(R22 *)rt_nil_check(l_T_1206))).f_SCALE == ((rt_int)0LL))))
{
{
R23 l_M_1213; memset(&l_M_1213, 0, sizeof l_M_1213);
S_R23(&l_M_1213, r_MANIFEST(((*(R17 *)rt_nil_check(p_D))).f_C), 0);
((*(R12 *)rt_nil_check(l_Y_1211))).f_HASMV = (l_M_1213).f_OK;
((*(R12 *)rt_nil_check(l_Y_1211))).f_MV = (l_M_1213).f_V;
}
}
}
((*(R12 *)rt_nil_check(l_Y_1211))).f_T = l_T_1206;
S_R9(&l_CN_1212, r_NEW_OBJECT(l_Y_1211, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_1206))
{
r_CODE(r_INIT_CODE(l_T_1206, l_CN_1212));
}
if ((!(((*(R17 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_1209))
{
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R17 *)rt_nil_check(p_D))).f_C;
S_R26(&l_V_1208, r_EXPR(((*(R17 *)rt_nil_check(p_D))).f_C, l_T_1206), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
l_HAVE_V_1209 = 1;
}
r_CODE(r_STORE_CODE(l_T_1206, l_CN_1212, l_V_1208, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_1211, ((*(R17 *)rt_nil_check(l_N_1207))).f_LINE);
}
l_N_1207 = ((*(R17 *)rt_nil_check(l_N_1207))).f_NEXT;
}
RT_B_TICK();
} L_end1210: ;
}
static R26 r_MKET(R9 p_C, R22 * p_T) { RT_B_TICK(); 
{ R26 rv1214 = ({ R26 rc1215; memset(&rc1215, 0, sizeof rc1215);  S_R9(&rc1215.f_C, p_C, 0); rc1215.f_T = p_T; rc1215.f_LVAL = 0; S_R9(&rc1215.f_SELF, r_NO_TEXT(), 0); rc1215; });
return rv1214; }
rt_raise(RT_X_INIT);
}
static R26 r_MKLV(R9 p_C, R22 * p_T, rt_int p_LVAL, R9 p_SELF) { RT_B_TICK(); 
{ R26 rv1216 = ({ R26 rc1217; memset(&rc1217, 0, sizeof rc1217);  S_R9(&rc1217.f_C, p_C, 0); rc1217.f_T = p_T; rc1217.f_LVAL = p_LVAL; S_R9(&rc1217.f_SELF, p_SELF, 0); rc1217; });
return rv1216; }
rt_raise(RT_X_INIT);
}
static R22 * r_INT_TYPE(rt_int p_SCALE) { RT_B_TICK(); 
R22 * l_T_1218; memset(&l_T_1218, 0, sizeof l_T_1218);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R22 * rv1219 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv1219; }
}
l_T_1218 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_1218))).f_SCALE = p_SCALE;
{ R22 * rv1220 = l_T_1218;
return rv1220; }
rt_raise(RT_X_INIT);
}
static R22 * r_STR_TYPE(R9 p_LEN, R23 p_M) { RT_B_TICK(); 
R22 * l_T_1221; memset(&l_T_1221, 0, sizeof l_T_1221);
l_T_1221 = r_NEW_TYP(g_T_STR);
S_R9(&((*(R22 *)rt_nil_check(l_T_1221))).f_LEN_C, p_LEN, 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1221))).f_MLEN, p_M, 0);
{ R22 * rv1222 = l_T_1221;
return rv1222; }
rt_raise(RT_X_INIT);
}
static R9 r_CSTRING(R9 p_T) { RT_B_TICK(); 
rstr l_S_1223; memset(&l_S_1223, 0, sizeof l_S_1223);
l_S_1223 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_1223, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_1224; memset(&l_AT_1224, 0, sizeof l_AT_1224);
l_AT_1224 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R9 l_R_1225; memset(&l_R_1225, 0, sizeof l_R_1225);
S_R9(&l_R_1225, r_MK(rt_str("\"", 1)), 0);
{ rt_int it1227_lo = ((rt_int)0LL), it1227_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it1227 = it1227_lo; it1227 <= it1227_hi; it1227++) {
{
if ((rt_b_eq(rt_b_slice(l_S_1223, it1227, it1227), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_1223, it1227, it1227), rt_str("\\", 1))))
{
S_R9(&l_R_1225, r_MK(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_S_1223, it1227, it1227))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1223, it1227, it1227), rt_str("\?", 1)))
{
S_R9(&l_R_1225, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_1228; memset(&l_C_1228, 0, sizeof l_C_1228);
l_C_1228 = r_CODE_OF(rt_b_slice(l_S_1223, it1227, it1227));
if (({ rt_int iv1229 = l_C_1228; (((rt_int)32LL) <= iv1229) && (iv1229 <= ((rt_int)126LL)); }))
{
S_R9(&l_R_1225, r_MK(rt_b_slice(l_S_1223, it1227, it1227)), 0);
}
else
{
S_R9(&l_R_1225, r_MK(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_1228, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_1228, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_1228, ((rt_int)8LL))))), 0);
}
}
}
}
RT_B_TICK();
if (it1227 == it1227_hi) break;
} } L_end1226: ;
S_R9(&l_R_1225, r_MK(rt_str("\"", 1)), 0);
{ R9 rv1230 = ({ R9 rc1231; memset(&rc1231, 0, sizeof rc1231);  rc1231.f_AT = l_AT_1224; rc1231.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_1224); rc1231.f_H = rt_neg(((rt_int)1LL)); rc1231; });
return rv1230; }
rt_raise(RT_X_INIT);
}
static R23 r_MANIFEST(R17 * p_E) { RT_B_TICK(); 
rt_int l_K_1232; memset(&l_K_1232, 0, sizeof l_K_1232);
l_K_1232 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
R23 l_NO_1233; memset(&l_NO_1233, 0, sizeof l_NO_1233);
S_R23(&l_NO_1233, ({ R23 rc1234; memset(&rc1234, 0, sizeof rc1234);  rc1234.f_OK = 0; rc1234.f_V = ((rt_int)0LL); rc1234; }), 0);
if ((l_K_1232 == g_N_INT))
{
{ R23 rv1235 = ({ R23 rc1236; memset(&rc1236, 0, sizeof rc1236);  rc1236.f_OK = 1; rc1236.f_V = ((*(R17 *)rt_nil_check(p_E))).f_IV; rc1236; });
return rv1235; }
}
else if ((l_K_1232 == g_N_PAREN))
{
{ R23 rv1237 = r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A);
return rv1237; }
}
else if ((l_K_1232 == g_N_BOOL))
{
{ R23 rv1238 = ({ R23 rc1239; memset(&rc1239, 0, sizeof rc1239);  rc1239.f_OK = 1; rc1239.f_V = ((*(R17 *)rt_nil_check(p_E))).f_IV; rc1239; });
return rv1238; }
}
else if ((l_K_1232 == g_N_UNOP))
{
{
R23 l_A_1240; memset(&l_A_1240, 0, sizeof l_A_1240);
S_R23(&l_A_1240, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
if ((!(l_A_1240).f_OK))
{
{ R23 rv1241 = l_NO_1233;
return rv1241; }
}
{ R23 rv1242 = ({ R23 rc1243; memset(&rc1243, 0, sizeof rc1243);  rc1243.f_OK = 1; rc1243.f_V = r_MANIFEST_ARITH(r_MK(rt_str("-", 1)), ((rt_int)0LL), (l_A_1240).f_V, ((*(R17 *)rt_nil_check(p_E))).f_LINE); rc1243; });
return rv1242; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R23 rv1244 = l_A_1240;
return rv1244; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R23 rv1245 = ({ R23 rc1246; memset(&rc1246, 0, sizeof rc1246);  rc1246.f_OK = (l_A_1240).f_OK; rc1246.f_V = rt_sub(((rt_int)1LL), (l_A_1240).f_V); rc1246; });
return rv1245; }
}
}
}
else if ((l_K_1232 == g_N_BINOP))
{
if ((!(((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R23 rv1247 = l_NO_1233;
return rv1247; }
}
{
R23 l_A_1248; memset(&l_A_1248, 0, sizeof l_A_1248);
S_R23(&l_A_1248, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R23 l_B_1249; memset(&l_B_1249, 0, sizeof l_B_1249);
S_R23(&l_B_1249, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
R9 l_OP_1250; memset(&l_OP_1250, 0, sizeof l_OP_1250);
S_R9(&l_OP_1250, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
if (r_TEQS(l_OP_1250, rt_str("&", 1)))
{
if (((((l_A_1248).f_OK && ((l_A_1248).f_V == ((rt_int)0LL)))) || (((l_B_1249).f_OK && ((l_B_1249).f_V == ((rt_int)0LL))))))
{
{ R23 rv1251 = ({ R23 rc1252; memset(&rc1252, 0, sizeof rc1252);  rc1252.f_OK = 1; rc1252.f_V = ((rt_int)0LL); rc1252; });
return rv1251; }
}
if (((l_A_1248).f_OK && (l_B_1249).f_OK))
{
{ R23 rv1253 = ({ R23 rc1254; memset(&rc1254, 0, sizeof rc1254);  rc1254.f_OK = 1; rc1254.f_V = ((rt_int)1LL); rc1254; });
return rv1253; }
}
{ R23 rv1255 = l_NO_1233;
return rv1255; }
}
else if (r_TEQS(l_OP_1250, rt_str("!", 1)))
{
if (((((l_A_1248).f_OK && ((l_A_1248).f_V == ((rt_int)1LL)))) || (((l_B_1249).f_OK && ((l_B_1249).f_V == ((rt_int)1LL))))))
{
{ R23 rv1256 = ({ R23 rc1257; memset(&rc1257, 0, sizeof rc1257);  rc1257.f_OK = 1; rc1257.f_V = ((rt_int)1LL); rc1257; });
return rv1256; }
}
if (((l_A_1248).f_OK && (l_B_1249).f_OK))
{
{ R23 rv1258 = ({ R23 rc1259; memset(&rc1259, 0, sizeof rc1259);  rc1259.f_OK = 1; rc1259.f_V = ((rt_int)0LL); rc1259; });
return rv1258; }
}
{ R23 rv1260 = l_NO_1233;
return rv1260; }
}
if ((!(((l_A_1248).f_OK && (l_B_1249).f_OK))))
{
{ R23 rv1261 = l_NO_1233;
return rv1261; }
}
if ((!((r_MANIFEST_INT(((*(R17 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R17 *)rt_nil_check(p_E))).f_B)))))
{
{ R23 rv1262 = l_NO_1233;
return rv1262; }
}
if (((r_TEQS(l_OP_1250, rt_str("+", 1)) || r_TEQS(l_OP_1250, rt_str("-", 1))) || r_TEQS(l_OP_1250, rt_str("*", 1))))
{
{ R23 rv1263 = ({ R23 rc1264; memset(&rc1264, 0, sizeof rc1264);  rc1264.f_OK = 1; rc1264.f_V = r_MANIFEST_ARITH(l_OP_1250, (l_A_1248).f_V, (l_B_1249).f_V, ((*(R17 *)rt_nil_check(p_E))).f_LINE); rc1264; });
return rv1263; }
}
else if ((r_TEQS(l_OP_1250, rt_str("//", 2)) && (!((l_B_1249).f_V == ((rt_int)0LL)))))
{
{ R23 rv1265 = ({ R23 rc1266; memset(&rc1266, 0, sizeof rc1266);  rc1266.f_OK = 1; rc1266.f_V = rt_quot((l_A_1248).f_V, (l_B_1249).f_V); rc1266; });
return rv1265; }
}
else if ((r_TEQS(l_OP_1250, rt_str("MOD", 3)) && (!((l_B_1249).f_V == ((rt_int)0LL)))))
{
{ R23 rv1267 = ({ R23 rc1268; memset(&rc1268, 0, sizeof rc1268);  rc1268.f_OK = 1; rc1268.f_V = rt_rem((l_A_1248).f_V, (l_B_1249).f_V); rc1268; });
return rv1267; }
}
else if (r_TEQS(l_OP_1250, rt_str("=", 1)))
{
{ R23 rv1269 = ({ R23 rc1270; memset(&rc1270, 0, sizeof rc1270);  rc1270.f_OK = 1; rc1270.f_V = r_BOOL_INT(((l_A_1248).f_V == (l_B_1249).f_V)); rc1270; });
return rv1269; }
}
else if (r_TEQS(l_OP_1250, rt_str("<>", 2)))
{
{ R23 rv1271 = ({ R23 rc1272; memset(&rc1272, 0, sizeof rc1272);  rc1272.f_OK = 1; rc1272.f_V = r_BOOL_INT((!((l_A_1248).f_V == (l_B_1249).f_V))); rc1272; });
return rv1271; }
}
else if (r_TEQS(l_OP_1250, rt_str("<", 1)))
{
{ R23 rv1273 = ({ R23 rc1274; memset(&rc1274, 0, sizeof rc1274);  rc1274.f_OK = 1; rc1274.f_V = r_BOOL_INT(((l_A_1248).f_V < (l_B_1249).f_V)); rc1274; });
return rv1273; }
}
else if (r_TEQS(l_OP_1250, rt_str(">", 1)))
{
{ R23 rv1275 = ({ R23 rc1276; memset(&rc1276, 0, sizeof rc1276);  rc1276.f_OK = 1; rc1276.f_V = r_BOOL_INT(((l_A_1248).f_V > (l_B_1249).f_V)); rc1276; });
return rv1275; }
}
else if (r_TEQS(l_OP_1250, rt_str("<=", 2)))
{
{ R23 rv1277 = ({ R23 rc1278; memset(&rc1278, 0, sizeof rc1278);  rc1278.f_OK = 1; rc1278.f_V = r_BOOL_INT(((l_A_1248).f_V <= (l_B_1249).f_V)); rc1278; });
return rv1277; }
}
else if (r_TEQS(l_OP_1250, rt_str(">=", 2)))
{
{ R23 rv1279 = ({ R23 rc1280; memset(&rc1280, 0, sizeof rc1280);  rc1280.f_OK = 1; rc1280.f_V = r_BOOL_INT(((l_A_1248).f_V >= (l_B_1249).f_V)); rc1280; });
return rv1279; }
}
}
}
else if ((l_K_1232 == g_N_IN))
{
{
R23 l_A_1281; memset(&l_A_1281, 0, sizeof l_A_1281);
S_R23(&l_A_1281, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R23 l_L_1282; memset(&l_L_1282, 0, sizeof l_L_1282);
S_R23(&l_L_1282, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R23 l_U_1283; memset(&l_U_1283, 0, sizeof l_U_1283);
S_R23(&l_U_1283, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_1284; memset(&l_LO_1284, 0, sizeof l_LO_1284);
rt_int l_HI_1285; memset(&l_HI_1285, 0, sizeof l_HI_1285);
if ((!(((((l_A_1281).f_OK && (l_L_1282).f_OK) && (l_U_1283).f_OK) && r_MANIFEST_INT(((*(R17 *)rt_nil_check(p_E))).f_A)))))
{
{ R23 rv1286 = l_NO_1233;
return rv1286; }
}
l_LO_1284 = (l_L_1282).f_V;
l_HI_1285 = (l_U_1283).f_V;
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_1284 = rt_add(l_LO_1284, ((rt_int)1LL));
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_1285 = rt_sub(l_HI_1285, ((rt_int)1LL));
}
{ R23 rv1287 = ({ R23 rc1288; memset(&rc1288, 0, sizeof rc1288);  rc1288.f_OK = 1; rc1288.f_V = r_BOOL_INT((((l_A_1281).f_V >= l_LO_1284) && ((l_A_1281).f_V <= l_HI_1285))); rc1288; });
return rv1287; }
}
}
else if (((l_K_1232 == g_N_NAME) || (l_K_1232 == g_TS_GEN)))
{
{
R12 * l_Y_1289; memset(&l_Y_1289, 0, sizeof l_Y_1289);
l_Y_1289 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
R21 * l_B_1290; memset(&l_B_1290, 0, sizeof l_B_1290);
l_B_1290 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_1290 == NULL)) goto L_end1291;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_1290))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME) && ((*(R21 *)rt_nil_check(l_B_1290))).f_HASMV))
{
{ R23 rv1292 = ({ R23 rc1293; memset(&rc1293, 0, sizeof rc1293);  rc1293.f_OK = 1; rc1293.f_V = ((*(R21 *)rt_nil_check(l_B_1290))).f_MV; rc1293; });
return rv1292; }
}
l_B_1290 = ((*(R21 *)rt_nil_check(l_B_1290))).f_NEXT;
}
RT_B_TICK();
} L_end1291: ;
if ((!(l_Y_1289 == NULL)))
{
if ((((((((*(R12 *)rt_nil_check(l_Y_1289))).f_KIND == g_Y_CONST) || (((*(R12 *)rt_nil_check(l_Y_1289))).f_KIND == g_Y_GEN)) || (((((*(R12 *)rt_nil_check(l_Y_1289))).f_KIND == g_Y_VAR) && ((*(R12 *)rt_nil_check(l_Y_1289))).f_INPUT)))) && ((*(R12 *)rt_nil_check(l_Y_1289))).f_HASMV))
{
{ R23 rv1294 = ({ R23 rc1295; memset(&rc1295, 0, sizeof rc1295);  rc1295.f_OK = 1; rc1295.f_V = ((*(R12 *)rt_nil_check(l_Y_1289))).f_MV; rc1295; });
return rv1294; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1289))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R17 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1296 = ({ R23 rc1297; memset(&rc1297, 0, sizeof rc1297);  rc1297.f_OK = 1; rc1297.f_V = ((*(R12 *)rt_nil_check(l_Y_1289))).f_MV; rc1297; });
return rv1296; }
}
}
}
}
}
else if ((l_K_1232 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R17 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1298 = ({ R23 rc1299; memset(&rc1299, 0, sizeof rc1299);  rc1299.f_OK = 1; rc1299.f_V = ((*(R12 *)rt_nil_check(r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc1299; });
return rv1298; }
}
}
else if ((l_K_1232 == g_N_FIELD))
{
{ R23 rv1300 = r_ATTR_MANIFEST(p_E);
return rv1300; }
}
else if ((l_K_1232 == g_N_APPLY))
{
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R23 rv1301 = ({ R23 rc1302; memset(&rc1302, 0, sizeof rc1302);  rc1302.f_OK = 1; rc1302.f_V = r_BOOL_INT((r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A)).f_OK); rc1302; });
return rv1301; }
}
}
{ R23 rv1303 = l_NO_1233;
return rv1303; }
rt_raise(RT_X_INIT);
}
static R23 r_ATTR_MANIFEST(R17 * p_E) { RT_B_TICK(); 
R17 * l_A_1304; memset(&l_A_1304, 0, sizeof l_A_1304);
l_A_1304 = ((*(R17 *)rt_nil_check(p_E))).f_A;
R9 l_NAME_1305; memset(&l_NAME_1305, 0, sizeof l_NAME_1305);
S_R9(&l_NAME_1305, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
R22 * l_T_1306; memset(&l_T_1306, 0, sizeof l_T_1306);
l_T_1306 = NULL;
if ((((*(R17 *)rt_nil_check(l_A_1304))).f_KIND == g_N_PAREN))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1304))).f_A))).f_KIND == g_N_FIELD))
{
{
R17 * l_INNER_1307; memset(&l_INNER_1307, 0, sizeof l_INNER_1307);
l_INNER_1307 = ((*(R17 *)rt_nil_check(l_A_1304))).f_A;
if (r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1307))).f_NAME, rt_str("LENGTH", 6)))
{
if (r_TEQS(l_NAME_1305, rt_str("MAX", 3)))
{
{ R23 rv1308 = r_SOME(r_MAX_LENGTH());
return rv1308; }
}
else if (r_TEQS(l_NAME_1305, rt_str("MIN", 3)))
{
{ R23 rv1309 = r_SOME(((rt_int)0LL));
return rv1309; }
}
}
else if ((r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1307))).f_NAME, rt_str("NOM_PRECISION", 13)) || r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1307))).f_NAME, rt_str("IMP_PRECISION", 13))))
{
if (r_TEQS(l_NAME_1305, rt_str("MAX", 3)))
{
{ R23 rv1310 = r_SOME(r_MAX_FLOAT_PRECISION());
return rv1310; }
}
else if (r_TEQS(l_NAME_1305, rt_str("MIN", 3)))
{
{ R23 rv1311 = r_SOME(((rt_int)1LL));
return rv1311; }
}
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1307))).f_NAME, rt_str("SCALE", 5)))
{
if (r_TEQS(l_NAME_1305, rt_str("MAX", 3)))
{
{ R23 rv1312 = r_SOME(((rt_int)1000LL));
return rv1312; }
}
else if (r_TEQS(l_NAME_1305, rt_str("MIN", 3)))
{
{ R23 rv1313 = r_SOME(rt_neg(((rt_int)1000LL)));
return rv1313; }
}
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1307))).f_NAME, rt_str("RADIX", 5)))
{
if (r_TEQS(l_NAME_1305, rt_str("MAX", 3)))
{
{ R23 rv1314 = r_SOME(((rt_int)1000LL));
return rv1314; }
}
else if (r_TEQS(l_NAME_1305, rt_str("MIN", 3)))
{
{ R23 rv1315 = r_SOME(((rt_int)2LL));
return rv1315; }
}
}
}
}
}
if (((((*(R17 *)rt_nil_check(l_A_1304))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_A_1304))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_1316; memset(&l_Y_1316, 0, sizeof l_Y_1316);
l_Y_1316 = r_LOOKUP(((*(R17 *)rt_nil_check(l_A_1304))).f_NAME);
if ((l_Y_1316 == NULL))
{
{ R23 rv1317 = r_NO_MVAL();
return rv1317; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1316))).f_KIND == g_Y_TYPE))
{
l_T_1306 = r_RESOLVE_USER_NAME(((*(R17 *)rt_nil_check(l_A_1304))).f_NAME, ((*(R17 *)rt_nil_check(l_A_1304))).f_LINE);
}
else if ((((((*(R12 *)rt_nil_check(l_Y_1316))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1316))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1316))).f_KIND == g_Y_GEN)))
{
l_T_1306 = ((*(R12 *)rt_nil_check(l_Y_1316))).f_T;
}
else
{
{ R23 rv1318 = r_NO_MVAL();
return rv1318; }
}
}
}
else if ((((*(R17 *)rt_nil_check(l_A_1304))).f_KIND == g_N_INT))
{
if ((r_TEQS(l_NAME_1305, rt_str("MIN", 3)) || r_TEQS(l_NAME_1305, rt_str("MAX", 3))))
{
{ R23 rv1319 = r_SOME(((*(R17 *)rt_nil_check(l_A_1304))).f_IV);
return rv1319; }
}
l_T_1306 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
else if ((((((((((((((*(R17 *)rt_nil_check(l_A_1304))).f_KIND == g_N_PAREN) || (((*(R17 *)rt_nil_check(l_A_1304))).f_KIND == g_N_BINOP)) || (((*(R17 *)rt_nil_check(l_A_1304))).f_KIND == g_N_UNOP)) || (((*(R17 *)rt_nil_check(l_A_1304))).f_KIND == g_N_FIELD)) || (((*(R17 *)rt_nil_check(l_A_1304))).f_KIND == g_N_INDEX)) || (((*(R17 *)rt_nil_check(l_A_1304))).f_KIND == g_N_APPLY)) || (((*(R17 *)rt_nil_check(l_A_1304))).f_KIND == g_N_REAL)) || (((*(R17 *)rt_nil_check(l_A_1304))).f_KIND == g_N_STR)) || (((*(R17 *)rt_nil_check(l_A_1304))).f_KIND == g_N_SUBSTR)) || (((*(R17 *)rt_nil_check(l_A_1304))).f_KIND == g_N_DEREF)) || (((*(R17 *)rt_nil_check(l_A_1304))).f_KIND == g_N_TYPESPEC)))
{
if ((((*(R17 *)rt_nil_check(l_A_1304))).f_KIND == g_N_PAREN))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1304))).f_A))).f_KIND == g_N_INT) && ((r_TEQS(l_NAME_1305, rt_str("MIN", 3)) || r_TEQS(l_NAME_1305, rt_str("MAX", 3))))))
{
{ R23 rv1320 = r_SOME(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1304))).f_A))).f_IV);
return rv1320; }
}
}
{
R14 l_SAVED_CODE_1321; memset(&l_SAVED_CODE_1321, 0, sizeof l_SAVED_CODE_1321);
S_R14(&l_SAVED_CODE_1321, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1322; memset(&rc1322, 0, sizeof rc1322);  rc1322.f_HEAD = NULL; rc1322.f_TAIL = NULL; rc1322; }), 0);
l_T_1306 = (r_EXPR(l_A_1304, NULL)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1321, 0);
}
}
else
{
{ R23 rv1323 = r_NO_MVAL();
return rv1323; }
}
if ((l_T_1306 == NULL))
{
{ R23 rv1324 = r_NO_MVAL();
return rv1324; }
}
{ R23 rv1325 = r_TYPE_ATTR_MANIFEST(l_T_1306, l_NAME_1305);
return rv1325; }
rt_raise(RT_X_INIT);
}
static R23 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R9 p_NAME) { RT_B_TICK(); 
R22 * l_T_1326; memset(&l_T_1326, 0, sizeof l_T_1326);
l_T_1326 = r_REAL_TYPE(p_T0);
rt_int l_K_1327; memset(&l_K_1327, 0, sizeof l_K_1327);
l_K_1327 = ((*(R22 *)rt_nil_check(l_T_1326))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R23 rv1328 = r_STATIC_SIZE(p_T0);
return rv1328; }
}
if ((l_K_1327 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R23 rv1329 = r_SOME(((*(R22 *)rt_nil_check(l_T_1326))).f_SCALE);
return rv1329; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1330 = r_SOME(((rt_int)2LL));
return rv1330; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && ((((*(R22 *)rt_nil_check(l_T_1326))).f_LO_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1331 = ((*(R22 *)rt_nil_check(l_T_1326))).f_MLO;
return rv1331; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && ((((*(R22 *)rt_nil_check(l_T_1326))).f_HI_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1332 = ((*(R22 *)rt_nil_check(l_T_1326))).f_MHI;
return rv1332; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && (((*(R22 *)rt_nil_check(l_T_1326))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1333 = r_SOME(r_STD_MIN());
return rv1333; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && (((*(R22 *)rt_nil_check(l_T_1326))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1334 = r_SOME(r_STD_MAX());
return rv1334; }
}
}
else if ((l_K_1327 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R23 rv1335 = r_SOME(((*(R22 *)rt_nil_check(l_T_1326))).f_SCALE);
return rv1335; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R23 rv1336 = r_SOME(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1326))).f_SCALE));
return rv1336; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1337 = r_SOME(((rt_int)2LL));
return rv1337; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R23 rv1338 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1326))).f_SCALE, p_NAME));
return rv1338; }
}
}
else if ((l_K_1327 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1326))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1339 = ((*(R22 *)rt_nil_check(l_T_1326))).f_MLO;
return rv1339; }
}
{ R23 rv1340 = r_SOME(((rt_int)0LL));
return rv1340; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1326))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1341 = ((*(R22 *)rt_nil_check(l_T_1326))).f_MHI;
return rv1341; }
}
{ R23 rv1342 = r_SOME(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1326))).f_BASE))).f_NLITS, ((rt_int)1LL)));
return rv1342; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1326))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ R23 rv1343 = r_SOME(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1326))).f_BASE))).f_NLITS);
return rv1343; }
}
if (((((*(R22 *)rt_nil_check(l_T_1326))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_T_1326))).f_MHI).f_OK))
{
{ R23 rv1344 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R22 *)rt_nil_check(l_T_1326))).f_MHI).f_V, (((*(R22 *)rt_nil_check(l_T_1326))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1344; }
}
}
}
else if (((l_K_1327 == g_T_STR) || (l_K_1327 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R23 rv1345 = ((*(R22 *)rt_nil_check(l_T_1326))).f_MLEN;
return rv1345; }
}
}
else if ((l_K_1327 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R23 rv1346 = r_SOME(((*(R22 *)rt_nil_check(l_T_1326))).f_DIMS);
return rv1346; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1326))).f_DIMS == ((rt_int)1LL))))
{
if (((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1326))).f_BOUNDS))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1326))).f_BOUNDS))).f_MHI).f_OK))
{
{ R23 rv1347 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1326))).f_BOUNDS))).f_MHI).f_V, (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1326))).f_BOUNDS))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1347; }
}
}
}
else if ((l_K_1327 == g_T_REC))
{
{
R24 * l_F_1348; memset(&l_F_1348, 0, sizeof l_F_1348);
l_F_1348 = ((*(R22 *)rt_nil_check(l_T_1326))).f_FIELDS;
R25 * l_B_1349; memset(&l_B_1349, 0, sizeof l_B_1349);
l_B_1349 = ((*(R22 *)rt_nil_check(l_T_1326))).f_ARGS;
for (;;) {
if (((l_F_1348 == NULL) || (l_B_1349 == NULL))) goto L_end1350;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1348))).f_KIND == ((rt_int)0LL))))
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1348))).f_NAME, p_NAME))
{
if (((*(R25 *)rt_nil_check(l_B_1349))).f_ANYARG)
{
{ R23 rv1351 = r_NO_MVAL();
return rv1351; }
}
{ R23 rv1352 = ((*(R25 *)rt_nil_check(l_B_1349))).f_MLO;
return rv1352; }
}
l_B_1349 = ((*(R25 *)rt_nil_check(l_B_1349))).f_NEXT;
}
l_F_1348 = ((*(R24 *)rt_nil_check(l_F_1348))).f_NEXT;
}
RT_B_TICK();
} L_end1350: ;
}
}
{ R23 rv1353 = r_NO_MVAL();
return rv1353; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_ARITH(R9 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); fr_r_MANIFEST_ARITH *F = rt_alloc(sizeof *F); (void)F; F->p_OP = p_OP; F->p_A = p_A; F->p_B = p_B; F->p_LINE = p_LINE;
F->l_R_1354 = ((rt_int)0LL);
{ rt_frame xf1355; if (RT_TRY(xf1355)) {
{
if (r_TEQS(F->p_OP, rt_str("+", 1)))
{
F->l_R_1354 = rt_add(F->p_A, F->p_B);
}
else if (r_TEQS(F->p_OP, rt_str("-", 1)))
{
F->l_R_1354 = rt_sub(F->p_A, F->p_B);
}
else
{
F->l_R_1354 = rt_mul(F->p_A, F->p_B);
}
}
RT_POP(xf1355); } else { RT_POP(xf1355); int xf1355x = rt_xcur;
if (0 || xf1355x == x_OVERFLOW)
{
r_FAIL(F->p_LINE, rt_str("a manifest expression overflows (3.2.4.2)", 41));
}
else rt_raise(xf1355x); } }
{ rt_int rv1356 = F->l_R_1354;
return rv1356; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R17 * p_E) { RT_B_TICK(); 
{ rt_int rv1357 = (!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv1357; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { RT_B_TICK(); 
if (p_B)
{
{ rt_int rv1358 = ((rt_int)1LL);
return rv1358; }
}
{ rt_int rv1359 = ((rt_int)0LL);
return rv1359; }
rt_raise(RT_X_INIT);
}
static R26 r_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_K_1360; memset(&l_K_1360, 0, sizeof l_K_1360);
l_K_1360 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_1360 == g_N_INT))
{
{ R26 rv1361 = r_MKET(r_STD_CHECK(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R17 *)rt_nil_check(p_E))).f_IV))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1361; }
}
else if ((l_K_1360 == g_N_REAL))
{
{ R26 rv1362 = r_REAL_LITERAL(p_E);
return rv1362; }
}
else if ((l_K_1360 == g_N_BOOL))
{
{ R26 rv1363 = r_MKET(r_NUM(((*(R17 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1363; }
}
else if ((l_K_1360 == g_N_NIL))
{
{ R26 rv1364 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1364; }
}
else if ((l_K_1360 == g_N_PAREN))
{
{
R26 l_V_1365; memset(&l_V_1365, 0, sizeof l_V_1365);
S_R26(&l_V_1365, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R9(&(l_V_1365).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1365).f_C), 0);
{ R26 rv1366 = l_V_1365;
return rv1366; }
}
}
else if ((l_K_1360 == g_N_STR))
{
{ R26 rv1367 = r_STRING_LITERAL(p_E);
return rv1367; }
}
else if ((l_K_1360 == g_N_BITS))
{
{ R26 rv1368 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R17 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1368; }
}
else if ((l_K_1360 == g_N_ENUMLIT))
{
if (r_NAMES_OBJECT(((*(R17 *)rt_nil_check(p_E))).f_NAME))
{
{ R26 rv1369 = r_NAME_EXPR(p_E, p_WANT);
return rv1369; }
}
{ R26 rv1370 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1370; }
}
else if ((l_K_1360 == g_N_RECCONS))
{
{ R26 rv1371 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1371; }
}
else if ((l_K_1360 == g_N_ARRCONS))
{
{ R26 rv1372 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1372; }
}
else if ((l_K_1360 == g_N_TYPESPEC))
{
{ R26 rv1373 = r_TYPE_SPECIFIER(p_E);
return rv1373; }
}
else if ((l_K_1360 == g_N_QUAL))
{
{
rt_int l_SAVED_1374; memset(&l_SAVED_1374, 0, sizeof l_SAVED_1374);
l_SAVED_1374 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_1375; memset(&l_SAVED_Q_1375, 0, sizeof l_SAVED_Q_1375);
l_SAVED_Q_1375 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1376; memset(&l_V_1376, 0, sizeof l_V_1376);
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
R23 l_P_1377; memset(&l_P_1377, 0, sizeof l_P_1377);
S_R23(&l_P_1377, r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_B, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
}
}
S_R26(&l_V_1376, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1374;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1375;
{ R26 rv1378 = l_V_1376;
return rv1378; }
}
}
else if ((l_K_1360 == g_N_NEW))
{
if ((r_NAMES_OBJECT(((*(R17 *)rt_nil_check(p_E))).f_NAME) && (!r_CONSTRUCTOR_WANTED(p_WANT))))
{
{
R17 * l_N_1379; memset(&l_N_1379, 0, sizeof l_N_1379);
l_N_1379 = r_NEW_NODE(g_N_APPLY, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1379))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_1379))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_A;
{ R26 rv1380 = r_EXPR(l_N_1379, p_WANT);
return rv1380; }
}
}
{ R26 rv1381 = r_NEW_EXPR(p_E, p_WANT);
return rv1381; }
}
else if ((l_K_1360 == g_N_NAME))
{
{ R26 rv1382 = r_NAME_EXPR(p_E, p_WANT);
return rv1382; }
}
else if (((l_K_1360 == g_N_APPLY) && r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("$PATH_LIST", 10))))
{
{ R26 rv1383 = r_PATH_LIST(((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1383; }
}
else if (((l_K_1360 == g_N_APPLY) && r_IS_STD_REPTYPE(((*(R17 *)rt_nil_check(p_E))).f_NAME)))
{
if (((((((*(R17 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))) || (!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL))) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an explicit-rep-converter converts one expression [3-41]", 56));
}
{
R17 * l_R_1384; memset(&l_R_1384, 0, sizeof l_R_1384);
l_R_1384 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_R_1384))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1385 = r_REP_CONVERTER(l_R_1384, ((*(R17 *)rt_nil_check(p_E))).f_A, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1385; }
}
}
else if ((l_K_1360 == g_N_APPLY))
{
{
R12 * l_Y_1386; memset(&l_Y_1386, 0, sizeof l_Y_1386);
l_Y_1386 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1386 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1386))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1386))).f_KIND == g_Y_CONST)))
{
{
R17 * l_N_1387; memset(&l_N_1387, 0, sizeof l_N_1387);
l_N_1387 = r_NEW_NODE(g_N_INDEX, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
R17 * l_A_1388; memset(&l_A_1388, 0, sizeof l_A_1388);
l_A_1388 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_A_1388))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_1387))).f_A = l_A_1388;
((*(R17 *)rt_nil_check(l_N_1387))).f_B = ((*(R17 *)rt_nil_check(p_E))).f_A;
{ R26 rv1389 = r_EXPR(l_N_1387, p_WANT);
return rv1389; }
}
}
}
{ R26 rv1390 = r_CALL_EXPR(p_E, p_WANT);
return rv1390; }
}
}
else if ((l_K_1360 == g_N_FIELD))
{
{ R26 rv1391 = r_FIELD_EXPR(p_E);
return rv1391; }
}
else if ((l_K_1360 == g_N_DEREF))
{
{
R26 l_B_1392; memset(&l_B_1392, 0, sizeof l_B_1392);
S_R26(&l_B_1392, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1392).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1393; memset(&l_TT_1393, 0, sizeof l_TT_1393);
l_TT_1393 = r_TARGET((l_B_1392).f_T);
{ R26 rv1394 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1393), (l_B_1392).f_C), l_TT_1393, 1, r_NO_TEXT());
return rv1394; }
}
}
}
else if ((l_K_1360 == g_N_INDEX))
{
if (((((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_APPLY) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME))) && r_IS_REPTYPE_NAME(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME)))
{
if (((((*(R17 *)rt_nil_check(p_E))).f_B == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_NEXT == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an explicit-rep-converter converts one expression [3-41]", 56));
}
{ R26 rv1395 = r_REP_CONVERTER(((*(R17 *)rt_nil_check(p_E))).f_A, ((*(R17 *)rt_nil_check(p_E))).f_B, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1395; }
}
{ R26 rv1396 = r_INDEX_EXPR(p_E);
return rv1396; }
}
else if ((l_K_1360 == g_N_SUBSTR))
{
{
R26 l_B_1397; memset(&l_B_1397, 0, sizeof l_B_1397);
S_R26(&l_B_1397, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1398; memset(&l_BT_1398, 0, sizeof l_BT_1398);
l_BT_1398 = r_REAL_TYPE((l_B_1397).f_T);
R9 l_LO_1399; memset(&l_LO_1399, 0, sizeof l_LO_1399);
R9 l_HI_1400; memset(&l_HI_1400, 0, sizeof l_HI_1400);
if (((((*(R22 *)rt_nil_check((l_B_1397).f_T))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_MKN(rt_str("SUBSTRING_", 10)))))
{
{
R27 * l_ARGS_1401; memset(&l_ARGS_1401, 0, sizeof l_ARGS_1401);
l_ARGS_1401 = r_VAL_ARG(l_B_1397, r_NODE_ARG(((*(R17 *)rt_nil_check(p_E))).f_B, g_M_IN, r_NODE_ARG(((*(R17 *)rt_nil_check(p_E))).f_C, g_M_IN, NULL)));
R12 * l_Y_1402; memset(&l_Y_1402, 0, sizeof l_Y_1402);
l_Y_1402 = r_USER_OPERATOR(r_MKN(rt_str("SUBSTRING_", 10)), l_ARGS_1401, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!(l_Y_1402 == NULL)))
{
{ R26 rv1403 = r_CALL_SYM(l_Y_1402, l_ARGS_1401, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1403; }
}
if ((((*(R22 *)rt_nil_check((l_B_1397).f_T))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no operation for this abstract type: ", 37), r_MK(rt_str("SUBSTRING_", 10)));
}
}
}
if ((!(((((*(R22 *)rt_nil_check(l_BT_1398))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1398))).f_KIND == g_T_BITS)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R9(&l_LO_1399, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
S_R9(&l_HI_1400, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1398))).f_KIND == g_T_BITS))
{
{ R26 rv1404 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1397).f_C, l_LO_1399, l_HI_1400), r_BITS_TYPE(((rt_int)1LL)));
return rv1404; }
}
{
R22 * l_T_1405; memset(&l_T_1405, 0, sizeof l_T_1405);
l_T_1405 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1405))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1398))).f_BASE;
{ R26 rv1406 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1397).f_C, l_LO_1399, l_HI_1400), l_T_1405);
return rv1406; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1398))).f_KIND == g_T_BITS))
{
{ R26 rv1407 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1397).f_C, l_LO_1399, l_HI_1400), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1407; }
}
{
R22 * l_T_1408; memset(&l_T_1408, 0, sizeof l_T_1408);
l_T_1408 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1408))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1398))).f_BASE;
{ R26 rv1409 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1397).f_C, l_LO_1399, l_HI_1400), l_T_1408);
return rv1409; }
}
}
}
else if ((l_K_1360 == g_N_UNOP))
{
{ R26 rv1410 = r_UNARY(p_E);
return rv1410; }
}
else if ((l_K_1360 == g_N_BINOP))
{
{ R26 rv1411 = r_BINARY(p_E);
return rv1411; }
}
else if ((l_K_1360 == g_N_IN))
{
{ R26 rv1412 = r_IN_EXPR(p_E);
return rv1412; }
}
else if (((l_K_1360 == g_N_ANY) || (l_K_1360 == g_N_DONTCARE)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((l_K_1360 == g_TS_GEN))
{
{
R17 * l_N_1413; memset(&l_N_1413, 0, sizeof l_N_1413);
l_N_1413 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1413))).f_NAME, r_MKN(rt_b_cat(rt_str("\?", 1), r_STR(((*(R17 *)rt_nil_check(p_E))).f_NAME, (((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN))), 0);
if (r_NAMES_OBJECT(((*(R17 *)rt_nil_check(l_N_1413))).f_NAME))
{
{ R26 rv1414 = r_NAME_EXPR(l_N_1413, p_WANT);
return rv1414; }
}
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
else if (((((l_K_1360 == g_TS_NAME) || (l_K_1360 == g_TS_ARRAY)) || (l_K_1360 == g_TS_RECORD)) || (l_K_1360 == g_TS_ENUM)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R9 r_INT_EXPR(R17 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1415; memset(&l_SAVED_1415, 0, sizeof l_SAVED_1415);
l_SAVED_1415 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_1416; memset(&l_SAVED_Q_1416, 0, sizeof l_SAVED_Q_1416);
l_SAVED_Q_1416 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1417; memset(&l_V_1417, 0, sizeof l_V_1417);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1417, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1415;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1416;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1417).f_T)))).f_KIND == g_T_ENUM))
{
{ R9 rv1418 = (l_V_1417).f_C;
return rv1418; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1417).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1417).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1417).f_T));
}
{ R9 rv1419 = (l_V_1417).f_C;
return rv1419; }
rt_raise(RT_X_INIT);
}
static R9 r_BOOL_EXPR(R17 * p_E) { RT_B_TICK(); 
R26 l_V_1420; memset(&l_V_1420, 0, sizeof l_V_1420);
S_R26(&l_V_1420, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1420).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1420).f_T));
}
{ R9 rv1421 = (l_V_1420).f_C;
return rv1421; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { RT_B_TICK(); 
R22 * l_T_1422; memset(&l_T_1422, 0, sizeof l_T_1422);
l_T_1422 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(l_T_1422))).f_LEN_C, r_NUM(p_LEN), 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1422))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1423 = l_T_1422;
return rv1423; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R17 * p_E) { RT_B_TICK(); 
R9 l_T_1424; memset(&l_T_1424, 0, sizeof l_T_1424);
S_R9(&l_T_1424, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1425; memset(&l_S_1425, 0, sizeof l_S_1425);
l_S_1425 = rt_b_str_new((l_T_1424).f_LEN, 0);
rt_b_assign(&l_S_1425, r_STR(l_T_1424, (l_T_1424).f_LEN));
rt_int l_POINT_1426; memset(&l_POINT_1426, 0, sizeof l_POINT_1426);
l_POINT_1426 = 0;
rt_int l_DIGITS_1427; memset(&l_DIGITS_1427, 0, sizeof l_DIGITS_1427);
l_DIGITS_1427 = ((rt_int)0LL);
{ rt_int it1429_lo = ((rt_int)0LL), it1429_hi = rt_sub((l_T_1424).f_LEN, ((rt_int)1LL));
for (rt_int it1429 = it1429_lo; it1429 <= it1429_hi; it1429++) {
{
if (rt_b_eq(rt_b_slice(l_S_1425, it1429, it1429), rt_str(".", 1)))
{
l_POINT_1426 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1425, it1429, it1429), rt_str("E", 1)))
{
goto L_end1428;
}
else
{
l_DIGITS_1427 = rt_add(l_DIGITS_1427, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it1429 == it1429_hi) break;
} } L_end1428: ;
if (((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) || (!l_POINT_1426)))
{
r_CHECK_FIXED_LITERAL(p_E);
}
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1430 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1424), r_NUM(((*(R17 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R17 *)rt_nil_check(p_E))).f_IV));
return rv1430; }
}
if ((!l_POINT_1426))
{
{ R26 rv1431 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1424)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1431; }
}
{
R22 * l_F_1432; memset(&l_F_1432, 0, sizeof l_F_1432);
l_F_1432 = r_NEW_TYP(g_T_FLOAT);
R9 l_C_1433; memset(&l_C_1433, 0, sizeof l_C_1433);
S_R9(&l_C_1433, l_T_1424, 0);
((*(R22 *)rt_nil_check(l_F_1432))).f_SCALE = r_MAX_INT(l_DIGITS_1427, r_QUAL_PREC());
if ((((*(R22 *)rt_nil_check(l_F_1432))).f_SCALE > r_MAX_FLOAT_PRECISION()))
{
((*(R22 *)rt_nil_check(l_F_1432))).f_SCALE = r_MAX_FLOAT_PRECISION();
}
if ((((*(R22 *)rt_nil_check(l_F_1432))).f_SCALE < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1432))).f_SCALE = ((rt_int)1LL);
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1432))).f_SCALE)))
{
((*(R22 *)rt_nil_check(l_F_1432))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_F_1432))).f_SCALE, ((rt_int)8LL));
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1432))).f_SCALE)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the float-literal is outside the range of FLOAT (3.3.2)", 68));
}
if (rt_b_eq(rt_b_slice(l_S_1425, rt_sub((l_T_1424).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1424).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
S_R9(&l_C_1433, r_FMT1(rt_str("@0", 2), l_T_1424), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1425, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
S_R9(&l_C_1433, r_FMT1(rt_str("0@", 2), l_T_1424), 0);
}
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_F_1432))).f_SCALE) == ((rt_int)7LL)))
{
{ R26 rv1434 = r_MKET(r_FMT1(rt_str("((double)(float)@)", 18), l_C_1433), l_F_1432);
return rv1434; }
}
{ R26 rv1435 = r_MKET(r_FMT1(rt_str("(@)", 3), l_C_1433), l_F_1432);
return rv1435; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_LITERAL_FITS(R17 * p_E, rt_int p_P) { RT_B_TICK(); 
R9 l_T_1436; memset(&l_T_1436, 0, sizeof l_T_1436);
S_R9(&l_T_1436, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1437; memset(&l_S_1437, 0, sizeof l_S_1437);
l_S_1437 = rt_b_str_new((l_T_1436).f_LEN, 0);
rt_b_assign(&l_S_1437, r_STR(l_T_1436, (l_T_1436).f_LEN));
rt_int l_INT_1438; memset(&l_INT_1438, 0, sizeof l_INT_1438);
l_INT_1438 = ((rt_int)0LL);
rt_int l_SIG_1439; memset(&l_SIG_1439, 0, sizeof l_SIG_1439);
l_SIG_1439 = 0;
rt_int l_POINT_1440; memset(&l_POINT_1440, 0, sizeof l_POINT_1440);
l_POINT_1440 = 0;
rt_int l_LEAD_1441; memset(&l_LEAD_1441, 0, sizeof l_LEAD_1441);
l_LEAD_1441 = ((rt_int)0LL);
rt_int l_I_1442; memset(&l_I_1442, 0, sizeof l_I_1442);
l_I_1442 = ((rt_int)0LL);
rt_int l_EXP_1443; memset(&l_EXP_1443, 0, sizeof l_EXP_1443);
l_EXP_1443 = ((rt_int)0LL);
for (;;) {
if ((l_I_1442 >= (l_T_1436).f_LEN)) goto L_end1444;
{
if (rt_b_eq(rt_b_slice(l_S_1437, l_I_1442, l_I_1442), rt_str("E", 1)))
{
goto L_end1444;
}
else if (rt_b_eq(rt_b_slice(l_S_1437, l_I_1442, l_I_1442), rt_str(".", 1)))
{
l_POINT_1440 = 1;
}
else if ((!rt_b_eq(rt_b_slice(l_S_1437, l_I_1442, l_I_1442), rt_str("0", 1))))
{
if ((!l_POINT_1440))
{
l_INT_1438 = rt_add(l_INT_1438, ((rt_int)1LL));
}
l_SIG_1439 = 1;
}
else if ((l_SIG_1439 && (!l_POINT_1440)))
{
l_INT_1438 = rt_add(l_INT_1438, ((rt_int)1LL));
}
else if ((l_POINT_1440 && (!l_SIG_1439)))
{
l_LEAD_1441 = rt_add(l_LEAD_1441, ((rt_int)1LL));
}
l_I_1442 = rt_add(l_I_1442, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1444: ;
if ((!l_SIG_1439))
{
{ rt_int rv1445 = 1;
return rv1445; }
}
if ((l_I_1442 < (l_T_1436).f_LEN))
{
{
rt_int l_NEG_1446; memset(&l_NEG_1446, 0, sizeof l_NEG_1446);
l_NEG_1446 = 0;
l_I_1442 = rt_add(l_I_1442, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1437, l_I_1442, l_I_1442), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1437, l_I_1442, l_I_1442), rt_str("+", 1))))
{
l_NEG_1446 = rt_b_eq(rt_b_slice(l_S_1437, l_I_1442, l_I_1442), rt_str("-", 1));
l_I_1442 = rt_add(l_I_1442, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1442 >= (l_T_1436).f_LEN)) goto L_end1447;
{
if ((l_EXP_1443 <= ((rt_int)100000LL)))
{
l_EXP_1443 = rt_add(rt_mul(l_EXP_1443, ((rt_int)10LL)), (rt_sub(r_CODE_OF(rt_b_slice(l_S_1437, l_I_1442, l_I_1442)), ((rt_int)48LL))));
}
l_I_1442 = rt_add(l_I_1442, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1447: ;
if (l_NEG_1446)
{
l_EXP_1443 = rt_neg(l_EXP_1443);
}
}
}
{
rt_int l_D_1448; memset(&l_D_1448, 0, sizeof l_D_1448);
l_D_1448 = rt_add(rt_sub(l_INT_1438, ((rt_int)1LL)), l_EXP_1443);
rt_int l_LIM_1449; memset(&l_LIM_1449, 0, sizeof l_LIM_1449);
l_LIM_1449 = ((rt_int)308LL);
if ((l_INT_1438 == ((rt_int)0LL)))
{
l_D_1448 = rt_add(rt_sub(rt_neg(l_LEAD_1441), ((rt_int)1LL)), l_EXP_1443);
}
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
l_LIM_1449 = ((rt_int)38LL);
}
{ rt_int rv1450 = ((l_D_1448 <= l_LIM_1449) && (l_D_1448 >= rt_add(rt_neg(l_LIM_1449), ((rt_int)1LL))));
return rv1450; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_LITERAL(R17 * p_E) { RT_B_TICK(); 
R9 l_T_1451; memset(&l_T_1451, 0, sizeof l_T_1451);
S_R9(&l_T_1451, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1452; memset(&l_S_1452, 0, sizeof l_S_1452);
l_S_1452 = rt_b_str_new((l_T_1451).f_LEN, 0);
rt_b_assign(&l_S_1452, r_STR(l_T_1451, (l_T_1451).f_LEN));
rt_int l_SIG_1453; memset(&l_SIG_1453, 0, sizeof l_SIG_1453);
l_SIG_1453 = ((rt_int)0LL);
rt_int l_FRAC_1454; memset(&l_FRAC_1454, 0, sizeof l_FRAC_1454);
l_FRAC_1454 = ((rt_int)0LL);
rt_int l_POINT_1455; memset(&l_POINT_1455, 0, sizeof l_POINT_1455);
l_POINT_1455 = 0;
rt_int l_EXP_1456; memset(&l_EXP_1456, 0, sizeof l_EXP_1456);
l_EXP_1456 = ((rt_int)0LL);
rt_int l_I_1457; memset(&l_I_1457, 0, sizeof l_I_1457);
l_I_1457 = ((rt_int)0LL);
for (;;) {
if ((l_I_1457 >= (l_T_1451).f_LEN)) goto L_end1458;
{
if (rt_b_eq(rt_b_slice(l_S_1452, l_I_1457, l_I_1457), rt_str("E", 1)))
{
goto L_end1458;
}
if (rt_b_eq(rt_b_slice(l_S_1452, l_I_1457, l_I_1457), rt_str(".", 1)))
{
l_POINT_1455 = 1;
}
else
{
if (((l_SIG_1453 > ((rt_int)0LL)) || (!rt_b_eq(rt_b_slice(l_S_1452, l_I_1457, l_I_1457), rt_str("0", 1)))))
{
l_SIG_1453 = rt_add(l_SIG_1453, ((rt_int)1LL));
}
if (l_POINT_1455)
{
l_FRAC_1454 = rt_add(l_FRAC_1454, ((rt_int)1LL));
}
}
l_I_1457 = rt_add(l_I_1457, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1458: ;
if ((rt_sub(l_I_1457, r_BOOL_INT(l_POINT_1455)) > ((rt_int)1000LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a fixed-literal has at most 1000 digits (3.2.2)", 47));
}
if ((l_I_1457 < (l_T_1451).f_LEN))
{
{
rt_int l_NEG_1459; memset(&l_NEG_1459, 0, sizeof l_NEG_1459);
l_NEG_1459 = 0;
l_I_1457 = rt_add(l_I_1457, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1452, l_I_1457, l_I_1457), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1452, l_I_1457, l_I_1457), rt_str("+", 1))))
{
l_NEG_1459 = rt_b_eq(rt_b_slice(l_S_1452, l_I_1457, l_I_1457), rt_str("-", 1));
l_I_1457 = rt_add(l_I_1457, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1457 >= (l_T_1451).f_LEN)) goto L_end1460;
{
if ((l_EXP_1456 <= ((rt_int)1000LL)))
{
l_EXP_1456 = rt_sub(rt_add(rt_mul(l_EXP_1456, ((rt_int)10LL)), r_CODE_OF(rt_b_slice(l_S_1452, l_I_1457, l_I_1457))), ((rt_int)48LL));
}
l_I_1457 = rt_add(l_I_1457, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1460: ;
if ((l_EXP_1456 > ((rt_int)1000LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the exponent of a literal must not exceed 1000 (3.2.2)", 54));
}
if (l_NEG_1459)
{
l_EXP_1456 = rt_neg(l_EXP_1456);
}
}
}
if (((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) && (((((*(R17 *)rt_nil_check(p_E))).f_IV > ((rt_int)1000LL)) || (((*(R17 *)rt_nil_check(p_E))).f_IV < rt_neg(((rt_int)1000LL)))))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a literal must not exceed 1000 (3.2.2)", 51));
}
if ((l_SIG_1453 > ((rt_int)0LL)))
{
{
rt_int l_P10_1461; memset(&l_P10_1461, 0, sizeof l_P10_1461);
l_P10_1461 = rt_sub(rt_add(rt_sub(l_SIG_1453, ((rt_int)1LL)), l_EXP_1456), l_FRAC_1454);
rt_int l_BITS_1462; memset(&l_BITS_1462, 0, sizeof l_BITS_1462);
l_BITS_1462 = rt_add(rt_quot((rt_mul(l_P10_1461, ((rt_int)3321928LL))), ((rt_int)1000000LL)), rt_mul(((*(R17 *)rt_nil_check(p_E))).f_IV, ((*(R17 *)rt_nil_check(p_E))).f_FL));
if ((l_P10_1461 < ((rt_int)0LL)))
{
l_BITS_1462 = rt_add(rt_neg((rt_quot((rt_add(rt_mul(rt_neg(l_P10_1461), ((rt_int)3321929LL)), ((rt_int)999999LL))), ((rt_int)1000000LL)))), rt_mul(((*(R17 *)rt_nil_check(p_E))).f_IV, ((*(R17 *)rt_nil_check(p_E))).f_FL));
}
if ((l_BITS_1462 >= ((rt_int)63LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the literal is outside FIXED_MIN .. FIXED_MAX (3.2.2)", 66));
}
}
}
}
static R26 r_STRING_LITERAL(R17 * p_E) { RT_B_TICK(); 
R22 * l_CS_1463; memset(&l_CS_1463, 0, sizeof l_CS_1463);
l_CS_1463 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R17 * l_P_1464; memset(&l_P_1464, 0, sizeof l_P_1464);
l_P_1464 = ((*(R17 *)rt_nil_check(p_E))).f_A;
R9 l_S_1465; memset(&l_S_1465, 0, sizeof l_S_1465);
S_R9(&l_S_1465, r_MK(rt_str("", 0)), 0);
if (((((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN == ((rt_int)0LL)))
{
l_CS_1463 = r_DEFAULT_CHARSET(((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
else
{
{
R12 * l_Y_1466; memset(&l_Y_1466, 0, sizeof l_Y_1466);
l_Y_1466 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1466 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1466))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1463 = r_RESOLVE_USER_NAME(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1463)))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1463 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1463)))).f_BASE;
if ((!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(l_CS_1463))).f_LITS)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a character set has a literal of the form \\'C' (3.7.2): ", 56), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
}
}
for (;;) {
if ((l_P_1464 == NULL)) goto L_end1467;
{
if ((((*(R17 *)rt_nil_check(l_P_1464))).f_IV == g_K_STR))
{
if ((l_CS_1463 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R9(&l_S_1465, r_CAT(l_S_1465, ((*(R17 *)rt_nil_check(l_P_1464))).f_NAME), 0);
}
else
{
{
R9 l_Q_1468; memset(&l_Q_1468, 0, sizeof l_Q_1468);
S_R9(&l_Q_1468, ((*(R17 *)rt_nil_check(l_P_1464))).f_NAME, 0);
rstr l_QS_1469; memset(&l_QS_1469, 0, sizeof l_QS_1469);
l_QS_1469 = rt_b_str_new((l_Q_1468).f_LEN, 0);
rt_b_assign(&l_QS_1469, r_STR(l_Q_1468, (l_Q_1468).f_LEN));
{ rt_int it1471_lo = ((rt_int)0LL), it1471_hi = rt_sub((l_Q_1468).f_LEN, ((rt_int)1LL));
for (rt_int it1471 = it1471_lo; it1471 <= it1471_hi; it1471++) {
{
{
R9 l_LIT_1472; memset(&l_LIT_1472, 0, sizeof l_LIT_1472);
R12 * l_Y_1473; memset(&l_Y_1473, 0, sizeof l_Y_1473);
if (rt_b_eq(rt_b_slice(l_QS_1469, it1471, it1471), rt_str("'", 1)))
{
S_R9(&l_LIT_1472, r_MKN(rt_str("\\''''", 5)), 0);
}
else
{
S_R9(&l_LIT_1472, r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1469, it1471, it1471)), rt_str("'", 1))), 0);
}
l_Y_1473 = r_FIND_LITERAL(l_LIT_1472, l_CS_1463);
if ((l_Y_1473 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_1464))).f_LINE, rt_b_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1469, it1471, it1471)));
}
S_R9(&l_S_1465, r_CATS(l_S_1465, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1473))).f_MV)), 0);
}
}
RT_B_TICK();
if (it1471 == it1471_hi) break;
} } L_end1470: ;
}
}
}
else
{
{
R12 * l_Y_1474; memset(&l_Y_1474, 0, sizeof l_Y_1474);
l_Y_1474 = r_FIND_LITERAL(((*(R17 *)rt_nil_check(l_P_1464))).f_NAME, l_CS_1463);
if ((l_Y_1474 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_1464))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R17 *)rt_nil_check(l_P_1464))).f_NAME);
}
S_R9(&l_S_1465, r_CATS(l_S_1465, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1474))).f_MV)), 0);
}
}
l_P_1464 = ((*(R17 *)rt_nil_check(l_P_1464))).f_NEXT;
}
RT_B_TICK();
} L_end1467: ;
{
R22 * l_T_1475; memset(&l_T_1475, 0, sizeof l_T_1475);
l_T_1475 = r_STR_TYPE(r_NUM((l_S_1465).f_LEN), r_SOME((l_S_1465).f_LEN));
((*(R22 *)rt_nil_check(l_T_1475))).f_BASE = l_CS_1463;
{ R26 rv1476 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1465), r_NUM((l_S_1465).f_LEN)), l_T_1475);
return rv1476; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_TS_1477; memset(&l_TS_1477, 0, sizeof l_TS_1477);
l_TS_1477 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_TS_1477))).f_NAME, p_NAME, 0);
{ R22 * rv1478 = r_RESOLVE(l_TS_1477);
return rv1478; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1479; memset(&l_Y_1479, 0, sizeof l_Y_1479);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1480; memset(&l_WT_1480, 0, sizeof l_WT_1480);
l_WT_1480 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1480))).f_KIND == g_T_ENUM))
{
l_Y_1479 = r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_WT_1480);
if ((!(l_Y_1479 == NULL)))
{
{ R26 rv1481 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1479))).f_MV), r_ENUM_RESULT(l_Y_1479, p_WANT));
return rv1481; }
}
}
}
}
l_Y_1479 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1482; memset(&l_FOUND_1482, 0, sizeof l_FOUND_1482);
l_FOUND_1482 = NULL;
rt_int l_N_1483; memset(&l_N_1483, 0, sizeof l_N_1483);
l_N_1483 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1479 == NULL)) goto L_end1484;
{
if ((((*(R12 *)rt_nil_check(l_Y_1479))).f_KIND == g_Y_ENUMLIT))
{
if ((l_FOUND_1482 == NULL))
{
l_FOUND_1482 = l_Y_1479;
}
else if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1482))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1479))).f_T))).f_BASE)))
{
l_N_1483 = rt_add(l_N_1483, ((rt_int)1LL));
}
}
l_Y_1479 = r_LOOKUP_NEXT(l_Y_1479);
}
RT_B_TICK();
} L_end1484: ;
if ((l_FOUND_1482 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1483 > ((rt_int)0LL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1485 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1482))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1482))).f_T);
return rv1485; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1486 = p_WANT;
return rv1486; }
}
if ((!(((*(R22 *)rt_nil_check(p_WANT))).f_REPS == NULL)))
{
{
R22 * l_T_1487; memset(&l_T_1487, 0, sizeof l_T_1487);
l_T_1487 = r_COPY_TYP(((*(R12 *)rt_nil_check(p_Y))).f_T);
((*(R22 *)rt_nil_check(l_T_1487))).f_REPS = ((*(R22 *)rt_nil_check(p_WANT))).f_REPS;
{ R22 * rv1488 = l_T_1487;
return rv1488; }
}
}
{ R22 * rv1489 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1489; }
rt_raise(RT_X_INIT);
}
static rt_int r_CONSTRUCTOR_WANTED(R22 * p_WANT) { RT_B_TICK(); 
if ((p_WANT == NULL))
{
{ rt_int rv1490 = 0;
return rv1490; }
}
{ rt_int rv1491 = ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM));
return rv1491; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_OBJECT(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1492; memset(&l_Y_1492, 0, sizeof l_Y_1492);
l_Y_1492 = r_LOOKUP(p_NAME);
if ((l_Y_1492 == NULL))
{
{ rt_int rv1493 = 0;
return rv1493; }
}
{ rt_int rv1494 = (((((*(R12 *)rt_nil_check(l_Y_1492))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1492))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1492))).f_KIND == g_Y_ROUTINE));
return rv1494; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STD_REPTYPE(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv1495 = (((((((((r_TEQS(p_NAME, rt_str("FIXED_STD", 9)) || r_TEQS(p_NAME, rt_str("FLOAT_STD", 9))) || r_TEQS(p_NAME, rt_str("BOOLEAN_STD", 11))) || r_TEQS(p_NAME, rt_str("ENUM_STD", 8))) || r_TEQS(p_NAME, rt_str("CHAR_STR_STD", 12))) || r_TEQS(p_NAME, rt_str("BIT_STD", 7))) || r_TEQS(p_NAME, rt_str("ARRAY_STD", 9))) || r_TEQS(p_NAME, rt_str("RECORD_STD", 10))) || r_TEQS(p_NAME, rt_str("PTR_STD", 7))) || r_TEQS(p_NAME, rt_str("SEMAPHORE_STD", 13)));
return rv1495; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_REPTYPE_NAME(R9 p_NAME) { RT_B_TICK(); 
if (((((((r_IS_STD_REPTYPE(p_NAME) || r_TEQS(p_NAME, rt_str("FIXED_REP", 9))) || r_TEQS(p_NAME, rt_str("ENUM_REP", 8))) || r_TEQS(p_NAME, rt_str("ENUM_VAL_REP", 12))) || r_TEQS(p_NAME, rt_str("CHAR_STR_REP", 12))) || r_TEQS(p_NAME, rt_str("ARRAY_REP", 9))) || r_TEQS(p_NAME, rt_str("RECORD_REP", 10))))
{
{ rt_int rv1496 = (r_LOOKUP(p_NAME) == NULL);
return rv1496; }
}
if ((!(r_ORIG_LOOKUP(p_NAME) == NULL)))
{
{ rt_int rv1497 = (((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(p_NAME)))).f_KIND == g_Y_REPTYPE);
return rv1497; }
}
{ rt_int rv1498 = 0;
return rv1498; }
rt_raise(RT_X_INIT);
}
static R26 r_REP_CONVERTER(R17 * p_S, R17 * p_E, rt_int p_LINE) { RT_B_TICK(); 
R26 l_V_1499; memset(&l_V_1499, 0, sizeof l_V_1499);
S_R26(&l_V_1499, r_EXPR(p_E, NULL), 0);
R17 * l_R_1500; memset(&l_R_1500, 0, sizeof l_R_1500);
l_R_1500 = r_NEW_NODE(g_N_REP, p_LINE);
R22 * l_T_1501; memset(&l_T_1501, 0, sizeof l_T_1501);
S_R9(&((*(R17 *)rt_nil_check(l_R_1500))).f_NAME, ((*(R17 *)rt_nil_check(p_S))).f_NAME, 0);
if ((((*(R17 *)rt_nil_check(p_S))).f_KIND == g_N_APPLY))
{
((*(R17 *)rt_nil_check(l_R_1500))).f_A = ((*(R17 *)rt_nil_check(p_S))).f_A;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1499).f_T)))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check((l_V_1499).f_T))).f_KIND == g_T_ABS)))
{
r_FAIL(p_LINE, rt_str("a representation is only for a member of a predefined type class (3.12.2)", 73));
}
l_T_1501 = r_COPY_TYP(r_REAL_TYPE((l_V_1499).f_T));
((*(R22 *)rt_nil_check(l_T_1501))).f_REPS = r_EXPAND_REP(l_R_1500, l_T_1501, p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_REPCONV = 1;
r_CHECK_REP_CLASS(l_T_1501, p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_REPCONV = 0;
if ((r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1501))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1501))).f_REPS))).f_A == NULL))))
{
{
R23 l_N_1502; memset(&l_N_1502, 0, sizeof l_N_1502);
S_R23(&l_N_1502, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1501))).f_REPS))).f_A), 0);
rt_int l_UNS_1503; memset(&l_UNS_1503, 0, sizeof l_UNS_1503);
l_UNS_1503 = ((rt_int)0LL);
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1501))).f_REPS))).f_A))).f_NEXT == NULL)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1501))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8)))
{
l_UNS_1503 = ((rt_int)1LL);
}
}
if ((l_N_1502).f_OK)
{
{ R26 rv1504 = r_MKET(r_FMT3(rt_str("rt_b_fixed_rep(@, @, @)", 23), (l_V_1499).f_C, r_NUM((l_N_1502).f_V), r_NUM(l_UNS_1503)), l_T_1501);
return rv1504; }
}
}
}
{ R26 rv1505 = r_MKET((l_V_1499).f_C, l_T_1501);
return rv1505; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1506; memset(&l_Y_1506, 0, sizeof l_Y_1506);
l_Y_1506 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1506 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_1506))).f_WITHV == ((rt_int)2LL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the variable is named by a WITH NAMING and not known in its statement (4.5.4): ", 79), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((((((*(R12 *)rt_nil_check(l_Y_1506))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL))) && (!((*(R12 *)rt_nil_check(l_Y_1506))).f_INPUT)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type or reptype declaration is a closed scope: no variable from outside (3.12.1, 3.12.3): ", 92), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1506))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a record-spec is a closed scope: no variable from outside (3.9.1): ", 67), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1506))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1506))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1507; memset(&l_WRITABLE_1507, 0, sizeof l_WRITABLE_1507);
l_WRITABLE_1507 = (r_SEG_VISIBLE(l_Y_1506, ((*(R17 *)rt_nil_check(p_E))).f_LINE) && r_CHECK_IMPORTED(l_Y_1506, ((*(R17 *)rt_nil_check(p_E))).f_LINE));
{ R26 rv1508 = r_MKLV(r_OBJ_ACCESS(l_Y_1506), ((*(R12 *)rt_nil_check(l_Y_1506))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1506))).f_KIND == g_Y_VAR) && l_WRITABLE_1507), r_NO_TEXT());
return rv1508; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1506))).f_KIND == g_Y_GEN))
{
{ R26 rv1509 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1506))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1506))).f_T);
return rv1509; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1506))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1510 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1510; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1506))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1506))).f_KIND == g_Y_BUILTIN)))
{
{
R17 * l_N_1511; memset(&l_N_1511, 0, sizeof l_N_1511);
l_N_1511 = r_NEW_NODE(g_N_APPLY, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1511))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1512 = r_CALL_EXPR(l_N_1511, p_WANT);
return rv1512; }
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R17 * p_E) { RT_B_TICK(); 
R17 * l_A_1513; memset(&l_A_1513, 0, sizeof l_A_1513);
l_A_1513 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))) && r_IS_NUMBER_LITERAL(l_A_1513)))
{
{ R26 rv1514 = r_EXPR(l_A_1513, NULL);
return rv1514; }
}
if ((((*(R17 *)rt_nil_check(l_A_1513))).f_KIND == g_N_INDEX))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1513))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1513))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1515; memset(&l_B_1515, 0, sizeof l_B_1515);
S_R26(&l_B_1515, r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1513))).f_A))).f_A), 0);
R9 l_I_1516; memset(&l_I_1516, 0, sizeof l_I_1516);
S_R9(&l_I_1516, r_INT_EXPR(((*(R17 *)rt_nil_check(l_A_1513))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1515).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1517 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1515).f_C, l_I_1516, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1515).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1517; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1518 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1515).f_C, l_I_1516, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1515).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1518; }
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R17 *)rt_nil_check(l_A_1513))).f_KIND == g_N_PAREN))
{
if (r_IS_TYPE_ATTR(((*(R17 *)rt_nil_check(l_A_1513))).f_A))
{
{ R26 rv1519 = r_ATTRIBUTE(r_TYPE_VALUE_OF(r_TYPE_ATTR_TYPE(((*(R17 *)rt_nil_check(l_A_1513))).f_A)), ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1519; }
}
}
if ((((*(R17 *)rt_nil_check(l_A_1513))).f_KIND == g_N_PAREN))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1513))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1513))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1513))).f_A))).f_A))).f_NAME))
{
{ R26 rv1520 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1513))).f_A))).f_A))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1513))).f_A))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1520; }
}
}
}
}
if ((((*(R17 *)rt_nil_check(l_A_1513))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1521; memset(&l_Y_1521, 0, sizeof l_Y_1521);
l_Y_1521 = r_LOOKUP(((*(R17 *)rt_nil_check(l_A_1513))).f_NAME);
if ((!(l_Y_1521 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1521))).f_KIND == g_Y_TYPE))
{
{ R26 rv1522 = r_TYPE_ATTRIBUTE(((*(R17 *)rt_nil_check(l_A_1513))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1522; }
}
}
else if (r_IS_TYPE_WORD(((*(R17 *)rt_nil_check(l_A_1513))).f_NAME))
{
{ R26 rv1523 = r_TYPE_ATTRIBUTE(((*(R17 *)rt_nil_check(l_A_1513))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1523; }
}
}
}
{
R26 l_B_1524; memset(&l_B_1524, 0, sizeof l_B_1524);
S_R26(&l_B_1524, r_EXPR(l_A_1513, NULL), 0);
R22 * l_BT_1525; memset(&l_BT_1525, 0, sizeof l_BT_1525);
l_BT_1525 = (l_B_1524).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1525))).f_KIND == g_T_REC))
{
{
R24 * l_F_1526; memset(&l_F_1526, 0, sizeof l_F_1526);
l_F_1526 = r_FIND_VFIELD(l_BT_1525, ((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1526 == NULL)))
{
r_CHECK_VARIANT(l_F_1526, l_BT_1525, l_A_1513, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R24 *)rt_nil_check(l_F_1526))).f_KIND == ((rt_int)2LL)) && r_HAS_ANY(l_BT_1525)))
{
{ R26 rv1527 = r_MKET(r_FMT2(rt_str("rt_b_tag((@).@)", 15), (l_B_1524).f_C, ((*(R24 *)rt_nil_check(l_F_1526))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1526))).f_T);
return rv1527; }
}
{ R26 rv1528 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1524).f_C, ((*(R24 *)rt_nil_check(l_F_1526))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1526))).f_T, ((l_B_1524).f_LVAL && (((*(R24 *)rt_nil_check(l_F_1526))).f_KIND == ((rt_int)0LL))), (l_B_1524).f_C);
return rv1528; }
}
}
}
{ R26 rv1529 = r_ATTRIBUTE(l_B_1524, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1529; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_FIXED_LITERAL(R17 * p_A) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1530 = (r_IS_FIXED_LITERAL(((*(R17 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R17 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1530; }
}
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_INT))
{
{ rt_int rv1531 = 1;
return rv1531; }
}
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_REAL))
{
if ((((*(R17 *)rt_nil_check(p_A))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv1532 = 1;
return rv1532; }
}
{
rstr l_S_1533; memset(&l_S_1533, 0, sizeof l_S_1533);
l_S_1533 = rt_b_str_new((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN, 0);
rt_b_assign(&l_S_1533, r_STR(((*(R17 *)rt_nil_check(p_A))).f_NAME, (((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN));
{ rt_int it1535_lo = ((rt_int)0LL), it1535_hi = rt_sub((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN, ((rt_int)1LL));
for (rt_int it1535 = it1535_lo; it1535 <= it1535_hi; it1535++) {
{
if (rt_b_eq(rt_b_slice(l_S_1533, it1535, it1535), rt_str(".", 1)))
{
{ rt_int rv1536 = 0;
return rv1536; }
}
}
RT_B_TICK();
if (it1535 == it1535_hi) break;
} } L_end1534: ;
}
{ rt_int rv1537 = 1;
return rv1537; }
}
{ rt_int rv1538 = 0;
return rv1538; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMBER_LITERAL(R17 * p_A) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1539 = (r_IS_NUMBER_LITERAL(((*(R17 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R17 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1539; }
}
{ rt_int rv1540 = ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_INT) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_REAL));
return rv1540; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv1541 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1541; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R17 * p_BASE, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R23 l_TAGV_1542; memset(&l_TAGV_1542, 0, sizeof l_TAGV_1542);
S_R23(&l_TAGV_1542, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1542).f_OK))
{
r_FAILT(p_LINE, rt_b_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R24 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1542).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R23 r_TAG_VALUE(R22 * p_T, R9 p_TAGN) { RT_B_TICK(); 
R24 * l_F_1543; memset(&l_F_1543, 0, sizeof l_F_1543);
l_F_1543 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1544; memset(&l_A_1544, 0, sizeof l_A_1544);
l_A_1544 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1543 == NULL)) goto L_end1545;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1543))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1544 == NULL))
{
{ R23 rv1546 = r_NO_MVAL();
return rv1546; }
}
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1543))).f_NAME, p_TAGN))
{
if (((*(R25 *)rt_nil_check(l_A_1544))).f_ANYARG)
{
{ R23 rv1547 = r_NO_MVAL();
return rv1547; }
}
{ R23 rv1548 = ((*(R25 *)rt_nil_check(l_A_1544))).f_MLO;
return rv1548; }
}
l_A_1544 = ((*(R25 *)rt_nil_check(l_A_1544))).f_NEXT;
}
l_F_1543 = ((*(R24 *)rt_nil_check(l_F_1543))).f_NEXT;
}
RT_B_TICK();
} L_end1545: ;
{ R23 rv1549 = r_NO_MVAL();
return rv1549; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R17 * p_L, rt_int p_V, R22 * p_T) { RT_B_TICK(); 
R17 * l_P_1550; memset(&l_P_1550, 0, sizeof l_P_1550);
l_P_1550 = p_L;
for (;;) {
if ((l_P_1550 == NULL)) goto L_end1551;
{
if ((((*(R17 *)rt_nil_check(l_P_1550))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_P_1550))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_P_1550))).f_B, p_T)).f_V)))
{
{ rt_int rv1552 = 1;
return rv1552; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1550, p_T)).f_V == p_V))
{
{ rt_int rv1553 = 1;
return rv1553; }
}
l_P_1550 = ((*(R17 *)rt_nil_check(l_P_1550))).f_NEXT;
}
RT_B_TICK();
} L_end1551: ;
{ rt_int rv1554 = 0;
return rv1554; }
rt_raise(RT_X_INIT);
}
static R26 r_VALUE_OR_TYPE(R17 * p_E) { RT_B_TICK(); 
if (r_IS_TYPE_NAME(p_E))
{
{ R26 rv1555 = r_TYPE_VALUE(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1555; }
}
{ R26 rv1556 = r_EXPR(p_E, NULL);
return rv1556; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R17 * p_E) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1557; memset(&l_A_1557, 0, sizeof l_A_1557);
S_R26(&l_A_1557, r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_A), 0);
R9 l_I_1558; memset(&l_I_1558, 0, sizeof l_I_1558);
S_R9(&l_I_1558, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1557).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1559 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1557).f_C, (l_A_1557).f_C, l_I_1558, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1557).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1559; }
}
}
}
{ R26 rv1560 = r_INDEX_EXPR2(p_E);
return rv1560; }
rt_raise(RT_X_INIT);
}
static R9 r_INDEX_VALUE(R17 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1561; memset(&l_SAVED_1561, 0, sizeof l_SAVED_1561);
l_SAVED_1561 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_1562; memset(&l_SAVED_Q_1562, 0, sizeof l_SAVED_Q_1562);
l_SAVED_Q_1562 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1563; memset(&l_V_1563, 0, sizeof l_V_1563);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1563, r_EXPR(p_E, NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1561;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1562;
{ R9 rv1564 = r_INDEX_OF(l_V_1563, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1564; }
rt_raise(RT_X_INIT);
}
static R9 r_INDEX_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1565; memset(&l_T_1565, 0, sizeof l_T_1565);
l_T_1565 = r_REAL_TYPE((p_V).f_T);
if (((((*(R22 *)rt_nil_check((p_V).f_T))).f_KIND == g_T_ABS) || (((((*(R22 *)rt_nil_check(l_T_1565))).f_KIND == g_T_ENUM) && ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1565))).f_BASE))).f_UNORDERED || (!(((*(R22 *)rt_nil_check(l_T_1565))).f_REPS == NULL))))))))
{
{
R27 * l_ARGS_1566; memset(&l_ARGS_1566, 0, sizeof l_ARGS_1566);
l_ARGS_1566 = r_VAL_ARG(p_V, NULL);
R12 * l_Y_1567; memset(&l_Y_1567, 0, sizeof l_Y_1567);
l_Y_1567 = r_FIND_ROUTINE(r_MKN(rt_str("TO_FIXED", 8)), l_ARGS_1566, p_LINE, 0);
if ((l_Y_1567 == NULL))
{
r_FAILT(p_LINE, rt_str("an index of this type needs a TO_FIXED of the program (3.8.1): ", 63), r_TYPE_NAME((p_V).f_T));
}
{ R9 rv1568 = (r_CALL_SYM(l_Y_1567, l_ARGS_1566, p_LINE)).f_C;
return rv1568; }
}
}
if ((((*(R22 *)rt_nil_check(l_T_1565))).f_KIND == g_T_ENUM))
{
{ R9 rv1569 = (p_V).f_C;
return rv1569; }
}
if (((!(((*(R22 *)rt_nil_check(l_T_1565))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_1565))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(p_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((p_V).f_T));
}
{ R9 rv1570 = (p_V).f_C;
return rv1570; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R17 * p_E) { RT_B_TICK(); 
R26 l_B_1571; memset(&l_B_1571, 0, sizeof l_B_1571);
S_R26(&l_B_1571, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1572; memset(&l_T_1572, 0, sizeof l_T_1572);
l_T_1572 = r_REAL_TYPE((l_B_1571).f_T);
R17 * l_S_1573; memset(&l_S_1573, 0, sizeof l_S_1573);
l_S_1573 = ((*(R17 *)rt_nil_check(p_E))).f_B;
R9 l_IX_1574; memset(&l_IX_1574, 0, sizeof l_IX_1574);
S_R9(&l_IX_1574, r_MK(rt_str("", 0)), 0);
rt_int l_N_1575; memset(&l_N_1575, 0, sizeof l_N_1575);
l_N_1575 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1572))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1573 == NULL)) goto L_end1576;
{
if ((l_N_1575 > ((rt_int)0LL)))
{
S_R9(&l_IX_1574, r_CATS(l_IX_1574, rt_str(", ", 2)), 0);
}
S_R9(&l_IX_1574, r_CAT(l_IX_1574, r_INDEX_VALUE(l_S_1573)), 0);
l_N_1575 = rt_add(l_N_1575, ((rt_int)1LL));
l_S_1573 = ((*(R17 *)rt_nil_check(l_S_1573))).f_NEXT;
}
RT_B_TICK();
} L_end1576: ;
if ((!(l_N_1575 == ((*(R22 *)rt_nil_check(l_T_1572))).f_DIMS)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1575 == ((rt_int)1LL)))
{
{ R26 rv1577 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1571).f_C, l_IX_1574, (l_B_1571).f_C, (l_B_1571).f_C), ((*(R22 *)rt_nil_check(l_T_1572))).f_ELEM, (l_B_1571).f_LVAL, r_NO_TEXT());
return rv1577; }
}
{
R9 l_X_1578; memset(&l_X_1578, 0, sizeof l_X_1578);
S_R9(&l_X_1578, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1571).f_C, r_NUM(l_N_1575), (l_B_1571).f_C, (l_B_1571).f_C), 0);
{ R26 rv1579 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1578, l_IX_1574), ((*(R22 *)rt_nil_check(l_T_1572))).f_ELEM, (l_B_1571).f_LVAL, r_NO_TEXT());
return rv1579; }
}
rt_raise(RT_X_INIT);
}
static R9 r_OP_NAME(R9 p_OP, rt_int p_UNARY) { RT_B_TICK(); 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R9 rv1580 = r_MKN(rt_str("NEGATE_", 7));
return rv1580; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R9 rv1581 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1581; }
}
{ R9 rv1582 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1582; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R9 rv1583 = r_MKN(rt_str("ADD_", 4));
return rv1583; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R9 rv1584 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1584; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R9 rv1585 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1585; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R9 rv1586 = r_MKN(rt_str("DIVIDE_", 7));
return rv1586; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R9 rv1587 = r_MKN(rt_str("MODULUS_", 8));
return rv1587; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R9 rv1588 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1588; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R9 rv1589 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1589; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R9 rv1590 = r_MKN(rt_str("EQUAL_", 6));
return rv1590; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R9 rv1591 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1591; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R9 rv1592 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1592; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R9 rv1593 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1593; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R9 rv1594 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1594; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R9 rv1595 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1595; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R9 rv1596 = r_MKN(rt_str("AND_", 4));
return rv1596; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R9 rv1597 = r_MKN(rt_str("OR_", 3));
return rv1597; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R9 rv1598 = r_MKN(rt_str("XOR_", 4));
return rv1598; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R9 rv1599 = r_MKN(rt_str("IMPLIES_", 8));
return rv1599; }
}
{ R9 rv1600 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1600; }
rt_raise(RT_X_INIT);
}
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1601; memset(&l_A_1601, 0, sizeof l_A_1601);
l_A_1601 = ((R27 *)rt_b_new(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1601)), ({ R27 rc1602; memset(&rc1602, 0, sizeof rc1602);  rc1602.f_E = NULL; S_R26(&rc1602.f_V, p_V, 0); rc1602.f_HAVE = 1; rc1602.f_MODE = g_M_IN; rc1602.f_NEXT = p_NEXT; rc1602; }), 0);
{ R27 * rv1603 = l_A_1601;
return rv1603; }
rt_raise(RT_X_INIT);
}
static R27 * r_NODE_ARG(R17 * p_E, rt_int p_MODE, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1604; memset(&l_A_1604, 0, sizeof l_A_1604);
l_A_1604 = ((R27 *)rt_b_new(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1604)), ({ R27 rc1605; memset(&rc1605, 0, sizeof rc1605);  rc1605.f_E = p_E; S_R26(&rc1605.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1605.f_HAVE = 0; rc1605.f_MODE = p_MODE; rc1605.f_NEXT = p_NEXT; rc1605; }), 0);
{ R27 * rv1606 = l_A_1604;
return rv1606; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R9 p_NAME, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1607; memset(&l_Y_1607, 0, sizeof l_Y_1607);
l_Y_1607 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1607 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1607 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1608 = l_Y_1607;
return rv1608; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_USER_ROUTINE(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1609; memset(&l_Y_1609, 0, sizeof l_Y_1609);
l_Y_1609 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_1609 == NULL)) goto L_end1610;
{
if ((((*(R12 *)rt_nil_check(l_Y_1609))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1611 = 1;
return rv1611; }
}
l_Y_1609 = r_LOOKUP_NEXT(l_Y_1609);
}
RT_B_TICK();
} L_end1610: ;
l_Y_1609 = r_LOOKUP(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))));
for (;;) {
if ((l_Y_1609 == NULL)) goto L_end1612;
{
if ((((*(R12 *)rt_nil_check(l_Y_1609))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1613 = 1;
return rv1613; }
}
l_Y_1609 = r_LOOKUP_NEXT(l_Y_1609);
}
RT_B_TICK();
} L_end1612: ;
{ rt_int rv1614 = 0;
return rv1614; }
rt_raise(RT_X_INIT);
}
static R27 * r_QUAL_ARGS(rt_int p_LINE) { RT_B_TICK(); 
R17 * l_Q_1615; memset(&l_Q_1615, 0, sizeof l_Q_1615);
l_Q_1615 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_R_1616; memset(&l_R_1616, 0, sizeof l_R_1616);
l_R_1616 = NULL;
if ((l_Q_1615 == NULL))
{
{ R27 * rv1617 = NULL;
return rv1617; }
}
if (((((*(R17 *)rt_nil_check(l_Q_1615))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_R_1616 = r_VAL_ARG(r_ENUM_LITERAL(r_LIT_NODE(r_STR(((*(R17 *)rt_nil_check(l_Q_1615))).f_NAME, (((*(R17 *)rt_nil_check(l_Q_1615))).f_NAME).f_LEN), p_LINE), r_ROUNDINGS_TYPE()), NULL);
}
if ((!(((*(R17 *)rt_nil_check(l_Q_1615))).f_B == NULL)))
{
l_R_1616 = r_VAL_ARG(r_EXPR(((*(R17 *)rt_nil_check(l_Q_1615))).f_B, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_R_1616);
}
{ R27 * rv1618 = l_R_1616;
return rv1618; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R9 p_NAME, R26 p_A, R17 * p_B, R17 * p_C, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_ARGS_1619; memset(&l_ARGS_1619, 0, sizeof l_ARGS_1619);
l_ARGS_1619 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1620; memset(&l_Y_1620, 0, sizeof l_Y_1620);
l_Y_1620 = r_USER_OPERATOR(p_NAME, l_ARGS_1619, p_LINE);
if ((l_Y_1620 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1621 = r_CALL_SYM(l_Y_1620, l_ARGS_1619, p_LINE);
return rv1621; }
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
{ R9 rv1622 = p_C;
return rv1622; }
}
if ((p_STO > p_SFROM))
{
{ R9 rv1623 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1623; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R9 rv1624 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1624; }
}
{ R9 rv1625 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1625; }
rt_raise(RT_X_INIT);
}
static R9 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R9 rv1626 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1626; }
rt_raise(RT_X_INIT);
}
static R9 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R9 p_SELF) { RT_B_TICK(); 
R22 * l_RT_1627; memset(&l_RT_1627, 0, sizeof l_RT_1627);
l_RT_1627 = r_REAL_TYPE(p_T);
R22 * l_VT_1628; memset(&l_VT_1628, 0, sizeof l_VT_1628);
l_VT_1628 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1628))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1627))).f_KIND == g_T_PTR)))
{
{ R9 rv1629 = (p_V).f_C;
return rv1629; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1628))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1628)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R9 rv1630 = (p_V).f_C;
return rv1630; }
}
if ((!r_SAME_CLASS(l_RT_1627, l_VT_1628)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1628), (r_TYPE_NAME(l_VT_1628)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1627), (r_TYPE_NAME(l_RT_1627)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1627))).f_KIND == g_T_INT))
{
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_RT_1627))).f_SCALE))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE == ((*(R22 *)rt_nil_check(l_RT_1627))).f_SCALE))
{
{ R9 rv1631 = r_RANGE_CHECK(l_RT_1627, (p_V).f_C, p_SELF);
return rv1631; }
}
{ R9 rv1632 = r_RANGE_CHECK(l_RT_1627, r_FMT3(rt_str("rt_b_conv(@, @, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(l_RT_1627))).f_SCALE)), p_SELF);
return rv1632; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1627))).f_KIND == g_T_FLOAT))
{
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_RT_1627))).f_SCALE) < r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1628))).f_SCALE)))
{
{ R9 rv1633 = r_RANGE_CHECK(l_RT_1627, r_FMT3(rt_str("rt_b_fconv(@, @, @, 1)", 22), (p_V).f_C, r_SINGLE_C(((*(R22 *)rt_nil_check(l_RT_1627))).f_SCALE), r_FLOAT_TRUNC()), p_SELF);
return rv1633; }
}
{ R9 rv1634 = r_RANGE_CHECK(l_RT_1627, (p_V).f_C, p_SELF);
return rv1634; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1627))).f_KIND == g_T_ENUM))
{
if (((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1627))).f_BASE))).f_UNORDERED && ((r_HAS_VALUES(l_RT_1627) || r_HAS_VALUES(l_VT_1628)))) && (!r_SAME_REPS(l_RT_1627, l_VT_1628))))
{
r_FAIL(p_LINE, rt_str("an UNORDERED value with ENUM_VAL_REP is assigned only with the same reptype (3.4.5)", 83));
}
{ R9 rv1635 = r_RANGE_CHECK(l_RT_1627, (p_V).f_C, p_SELF);
return rv1635; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1627))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1627))).f_KIND == g_T_BITS)))
{
r_SAME_CHARSET(l_RT_1627, l_VT_1628, p_LINE);
if (((((*(R22 *)rt_nil_check(l_RT_1627))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1628))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1627))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1628))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1627))).f_KIND == g_T_PTR))
{
if ((!r_IDENTICAL_TYPE(r_TARGET(l_RT_1627), r_TARGET(l_VT_1628))))
{
r_FAIL(p_LINE, rt_str("the ELEMENT_TYPE of the pointers are not identical (3.10.5)", 59));
}
{ R9 rv1636 = r_TARGET_ARGS_CHECK(r_TARGET(l_RT_1627), r_TARGET(l_VT_1628), (p_V).f_C);
return rv1636; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1627))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1627)) && (!r_HAS_ANY(l_VT_1628))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1627))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1628))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1627))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1627))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1628))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
if ((!r_SAME_EXTENTS(l_RT_1627, l_VT_1628)))
{
r_FAIL(p_LINE, rt_str("the arrays have different EXTENT attributes (3.8.5)", 51));
}
}
{ R9 rv1637 = (p_V).f_C;
return rv1637; }
rt_raise(RT_X_INIT);
}
static R9 r_STORE_CODE(R22 * p_T, R9 p_LV, R26 p_V, rt_int p_LINE, R9 p_SELF) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1638; memset(&l_ARGS_1638, 0, sizeof l_ARGS_1638);
l_ARGS_1638 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1639; memset(&l_Y_1639, 0, sizeof l_Y_1639);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_SQUAL == NULL)))
{
{
R17 * l_SAVED_Q_1640; memset(&l_SAVED_Q_1640, 0, sizeof l_SAVED_Q_1640);
l_SAVED_Q_1640 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_X_1641; memset(&l_X_1641, 0, sizeof l_X_1641);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
l_X_1641 = r_QUAL_ARGS(p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1640;
if ((!(l_X_1641 == NULL)))
{
{
R27 * l_P_1642; memset(&l_P_1642, 0, sizeof l_P_1642);
l_P_1642 = l_X_1641;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_P_1642))).f_NEXT == NULL)) goto L_end1643;
{
l_P_1642 = ((*(R27 *)rt_nil_check(l_P_1642))).f_NEXT;
}
RT_B_TICK();
} L_end1643: ;
((*(R27 *)rt_nil_check(l_P_1642))).f_NEXT = ((*(R27 *)rt_nil_check(l_ARGS_1638))).f_NEXT;
((*(R27 *)rt_nil_check(l_ARGS_1638))).f_NEXT = l_X_1641;
}
}
}
}
{
R27 * l_LAST_1644; memset(&l_LAST_1644, 0, sizeof l_LAST_1644);
l_LAST_1644 = l_ARGS_1638;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_LAST_1644))).f_NEXT == NULL)) goto L_end1645;
{
l_LAST_1644 = ((*(R27 *)rt_nil_check(l_LAST_1644))).f_NEXT;
}
RT_B_TICK();
} L_end1645: ;
((*(R27 *)rt_nil_check(l_LAST_1644))).f_MODE = g_M_OUT;
l_Y_1639 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1638, p_LINE, 0);
if ((l_Y_1639 == NULL))
{
((*(R27 *)rt_nil_check(l_LAST_1644))).f_MODE = g_M_INOUT;
l_Y_1639 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1638, p_LINE, 0);
}
}
if ((l_Y_1639 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R9 rv1646 = r_CATS((r_CALL_SYM(l_Y_1639, l_ARGS_1638, p_LINE)).f_C, rt_str(";", 1));
return rv1646; }
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
if ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, (p_V).f_T)))
{
{ R9 rv1647 = r_COMPONENT_STORE(p_T, (p_V).f_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF), p_LINE);
return rv1647; }
}
}
{ R9 rv1648 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1648; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ABS_PART(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ rt_int rv1649 = 1;
return rv1649; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{ rt_int rv1650 = r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM);
return rv1650; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R24 * l_F_1651; memset(&l_F_1651, 0, sizeof l_F_1651);
l_F_1651 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1651 == NULL)) goto L_end1652;
{
if ((((*(R24 *)rt_nil_check(l_F_1651))).f_KIND == ((rt_int)0LL)))
{
if (r_HAS_ABS_PART(((*(R24 *)rt_nil_check(l_F_1651))).f_T))
{
{ rt_int rv1653 = 1;
return rv1653; }
}
}
l_F_1651 = ((*(R24 *)rt_nil_check(l_F_1651))).f_NEXT;
}
RT_B_TICK();
} L_end1652: ;
}
}
{ rt_int rv1654 = 0;
return rv1654; }
rt_raise(RT_X_INIT);
}
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT) { RT_B_TICK(); 
if (((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_KIND == g_T_ARR))))
{
{ rt_int rv1655 = 0;
return rv1655; }
}
if ((!r_IS_NUMERIC_OR_ENUM(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM))))
{
{ rt_int rv1656 = 0;
return rv1656; }
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1657 = 0;
return rv1657; }
}
{ rt_int rv1658 = (!r_SAME_RANGE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM));
return rv1658; }
rt_raise(RT_X_INIT);
}
static R9 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R9 p_LV, R9 p_RV, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R9 rv1659 = r_STORE_CODE(p_T, p_LV, r_MKET(p_RV, p_VT), p_LINE, r_NO_TEXT());
return rv1659; }
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, p_VT)))))
{
{
R9 l_D_1660; memset(&l_D_1660, 0, sizeof l_D_1660);
S_R9(&l_D_1660, r_NEW_NAME(rt_str("ad", 2)), 0);
R9 l_S_1661; memset(&l_S_1661, 0, sizeof l_S_1661);
S_R9(&l_S_1661, r_NEW_NAME(rt_str("as", 2)), 0);
R9 l_I_1662; memset(&l_I_1662, 0, sizeof l_I_1662);
S_R9(&l_I_1662, r_NEW_NAME(rt_str("ai", 2)), 0);
R9 l_N_1663; memset(&l_N_1663, 0, sizeof l_N_1663);
S_R9(&l_N_1663, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R22 * l_VE_1664; memset(&l_VE_1664, 0, sizeof l_VE_1664);
l_VE_1664 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM;
R9 l_R_1665; memset(&l_R_1665, 0, sizeof l_R_1665);
S_R9(&l_R_1665, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1660, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R9(&l_R_1665, r_FMT3(rt_str("@@ = @; if (!rt_b_same_extents(", 31), l_R_1665, l_S_1661, p_RV), 0);
S_R9(&l_R_1665, r_FMT4(rt_str("@@, @->lo, @->hi, ", 18), l_R_1665, l_N_1663, l_D_1660, l_D_1660), 0);
S_R9(&l_R_1665, r_FMT3(rt_str("@@.lo, @.hi)) rt_raise(RT_B_SIZE); ", 35), l_R_1665, l_S_1661, l_S_1661), 0);
S_R9(&l_R_1665, r_FMT4(rt_str("@rt_int @n = rt_b_extent(@, @->lo, ", 35), l_R_1665, l_I_1662, l_N_1663, l_D_1660), 0);
S_R9(&l_R_1665, r_FMT2(rt_str("@@->hi);", 8), l_R_1665, l_D_1660), 0);
if (r_ELEMENTS_NEED_CHECK(p_T, p_VT))
{
S_R9(&l_R_1665, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1665, l_I_1662, l_I_1662, l_I_1662), 0);
S_R9(&l_R_1665, r_FMT3(rt_str("@@++) (void)@;", 14), l_R_1665, l_I_1662, r_RANGE_CHECK(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_S_1661, l_I_1662), r_NO_TEXT())), 0);
}
S_R9(&l_R_1665, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1665, l_I_1662, l_I_1662, l_I_1662), 0);
if (((r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_REC)) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_ARR)))
{
S_R9(&l_R_1665, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1665, l_I_1662, r_COMPONENT_STORE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, l_VE_1664, r_FMT2(rt_str("@->p[@]", 7), l_D_1660, l_I_1662), r_FMT2(rt_str("@.p[@]", 6), l_S_1661, l_I_1662), p_LINE)), 0);
}
else
{
S_R9(&l_R_1665, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1665, l_I_1662, r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@->p[@]", 7), l_D_1660, l_I_1662), r_FMT2(rt_str("@.p[@]", 6), l_S_1661, l_I_1662))), 0);
}
{ R9 rv1666 = l_R_1665;
return rv1666; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_D_1667; memset(&l_D_1667, 0, sizeof l_D_1667);
S_R9(&l_D_1667, r_NEW_NAME(rt_str("rd", 2)), 0);
R9 l_S_1668; memset(&l_S_1668, 0, sizeof l_S_1668);
S_R9(&l_S_1668, r_NEW_NAME(rt_str("rs", 2)), 0);
R24 * l_F_1669; memset(&l_F_1669, 0, sizeof l_F_1669);
l_F_1669 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_R_1670; memset(&l_R_1670, 0, sizeof l_R_1670);
S_R9(&l_R_1670, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1667, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R9(&l_R_1670, r_FMT3(rt_str("@@ = @;", 7), l_R_1670, l_S_1668, p_RV), 0);
for (;;) {
if ((l_F_1669 == NULL)) goto L_end1671;
{
{
R9 l_DF_1672; memset(&l_DF_1672, 0, sizeof l_DF_1672);
S_R9(&l_DF_1672, r_FMT2(rt_str("@->@", 4), l_D_1667, ((*(R24 *)rt_nil_check(l_F_1669))).f_CNAME), 0);
R9 l_SF_1673; memset(&l_SF_1673, 0, sizeof l_SF_1673);
S_R9(&l_SF_1673, r_FMT2(rt_str("@.@", 3), l_S_1668, ((*(R24 *)rt_nil_check(l_F_1669))).f_CNAME), 0);
if (((((*(R24 *)rt_nil_check(l_F_1669))).f_KIND == ((rt_int)1LL)) || (((((*(R24 *)rt_nil_check(l_F_1669))).f_KIND == ((rt_int)2LL)) && (!r_HAS_ANY(p_T))))))
{
S_R9(&l_R_1670, r_FMT2(rt_str("@ if (!(@)) rt_raise(RT_B_TYPE_MISMATCH);", 41), l_R_1670, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1669))).f_T, l_DF_1672, l_SF_1673)), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1669))).f_KIND == ((rt_int)2LL)))
{
S_R9(&l_R_1670, r_FMT3(rt_str("@ @ = @;", 8), l_R_1670, l_DF_1672, l_SF_1673), 0);
}
else
{
S_R9(&l_R_1670, r_FMT2(rt_str("@ @", 3), l_R_1670, r_COMPONENT_STORE(((*(R24 *)rt_nil_check(l_F_1669))).f_T, ((*(R24 *)rt_nil_check(l_F_1669))).f_T, l_DF_1672, l_SF_1673, p_LINE)), 0);
}
}
l_F_1669 = ((*(R24 *)rt_nil_check(l_F_1669))).f_NEXT;
}
RT_B_TICK();
} L_end1671: ;
{ R9 rv1674 = r_CATS(l_R_1670, rt_str(" }", 2));
return rv1674; }
}
}
{ R9 rv1675 = r_ASSIGN_CODE(p_T, p_LV, p_RV);
return rv1675; }
rt_raise(RT_X_INIT);
}
static R9 r_COMPONENT_EQUAL(R22 * p_T, R9 p_A, R9 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1676; memset(&l_ARGS_1676, 0, sizeof l_ARGS_1676);
l_ARGS_1676 = r_VAL_ARG(r_MKET(p_A, p_T), r_VAL_ARG(r_MKET(p_B, p_T), NULL));
R12 * l_Y_1677; memset(&l_Y_1677, 0, sizeof l_Y_1677);
l_Y_1677 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1676, p_LINE);
if ((l_Y_1677 == NULL))
{
r_FAILT(p_LINE, rt_str("no EQUAL_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R9 rv1678 = (r_CALL_SYM(l_Y_1677, l_ARGS_1676, p_LINE)).f_C;
return rv1678; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_X_1679; memset(&l_X_1679, 0, sizeof l_X_1679);
S_R9(&l_X_1679, r_NEW_NAME(rt_str("ea", 2)), 0);
R9 l_Z_1680; memset(&l_Z_1680, 0, sizeof l_Z_1680);
S_R9(&l_Z_1680, r_NEW_NAME(rt_str("eb", 2)), 0);
R9 l_I_1681; memset(&l_I_1681, 0, sizeof l_I_1681);
S_R9(&l_I_1681, r_NEW_NAME(rt_str("ei", 2)), 0);
R9 l_N_1682; memset(&l_N_1682, 0, sizeof l_N_1682);
S_R9(&l_N_1682, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R9 l_R_1683; memset(&l_R_1683, 0, sizeof l_R_1683);
S_R9(&l_R_1683, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1679, p_A, l_Z_1680), 0);
S_R9(&l_R_1683, r_FMT4(rt_str("@@; int @r = rt_b_same_extents(@, ", 34), l_R_1683, p_B, l_I_1681, l_N_1682), 0);
S_R9(&l_R_1683, r_FMT4(rt_str("@@.lo, @.hi, @.lo, ", 19), l_R_1683, l_X_1679, l_X_1679, l_Z_1680), 0);
S_R9(&l_R_1683, r_FMT4(rt_str("@@.hi); rt_int @n = rt_b_extent(@, ", 35), l_R_1683, l_Z_1680, l_I_1681, l_N_1682), 0);
S_R9(&l_R_1683, r_FMT3(rt_str("@@.lo, @.hi);", 13), l_R_1683, l_X_1679, l_X_1679), 0);
S_R9(&l_R_1683, r_FMT4(rt_str("@ for (rt_int @ = 0; @r && @ < ", 31), l_R_1683, l_I_1681, l_I_1681, l_I_1681), 0);
S_R9(&l_R_1683, r_FMT4(rt_str("@@n; @++) @r = ", 15), l_R_1683, l_I_1681, l_I_1681, l_I_1681), 0);
S_R9(&l_R_1683, r_FMT2(rt_str("@@;", 3), l_R_1683, r_COMPONENT_EQUAL(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_X_1679, l_I_1681), r_FMT2(rt_str("@.p[@]", 6), l_Z_1680, l_I_1681), p_LINE)), 0);
{ R9 rv1684 = r_FMT2(rt_str("@ @r; })", 8), l_R_1683, l_I_1681);
return rv1684; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_X_1685; memset(&l_X_1685, 0, sizeof l_X_1685);
S_R9(&l_X_1685, r_NEW_NAME(rt_str("ra", 2)), 0);
R9 l_Z_1686; memset(&l_Z_1686, 0, sizeof l_Z_1686);
S_R9(&l_Z_1686, r_NEW_NAME(rt_str("rb", 2)), 0);
R24 * l_F_1687; memset(&l_F_1687, 0, sizeof l_F_1687);
l_F_1687 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_R_1688; memset(&l_R_1688, 0, sizeof l_R_1688);
S_R9(&l_R_1688, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1685, p_A, l_Z_1686), 0);
R9 l_EQ_1689; memset(&l_EQ_1689, 0, sizeof l_EQ_1689);
S_R9(&l_EQ_1689, r_MK(rt_str("1", 1)), 0);
S_R9(&l_R_1688, r_FMT2(rt_str("@@;", 3), l_R_1688, p_B), 0);
for (;;) {
if ((l_F_1687 == NULL)) goto L_end1690;
{
{
R9 l_C_1691; memset(&l_C_1691, 0, sizeof l_C_1691);
S_R9(&l_C_1691, r_COMPONENT_EQUAL(((*(R24 *)rt_nil_check(l_F_1687))).f_T, r_FMT2(rt_str("@.@", 3), l_X_1685, ((*(R24 *)rt_nil_check(l_F_1687))).f_CNAME), r_FMT2(rt_str("@.@", 3), l_Z_1686, ((*(R24 *)rt_nil_check(l_F_1687))).f_CNAME), p_LINE), 0);
if (((((*(R24 *)rt_nil_check(l_F_1687))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R9(&l_EQ_1689, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1689, r_VARIANT_COND(l_F_1687, p_T, l_X_1685), l_C_1691), 0);
}
else
{
S_R9(&l_EQ_1689, r_FMT2(rt_str("@ && @", 6), l_EQ_1689, l_C_1691), 0);
}
}
l_F_1687 = ((*(R24 *)rt_nil_check(l_F_1687))).f_NEXT;
}
RT_B_TICK();
} L_end1690: ;
{ R9 rv1692 = r_FMT2(rt_str("@ @; })", 7), l_R_1688, l_EQ_1689);
return rv1692; }
}
}
{ R9 rv1693 = r_EQUAL_CODE(p_T, p_A, p_B);
return rv1693; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R17 * p_E) { RT_B_TICK(); 
{ R26 rv1694 = r_STD_RESULT(r_UNARY1(p_E));
return rv1694; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY1(R17 * p_E) { RT_B_TICK(); 
R26 l_A_1695; memset(&l_A_1695, 0, sizeof l_A_1695);
S_R26(&l_A_1695, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1696; memset(&l_T_1696, 0, sizeof l_T_1696);
l_T_1696 = (l_A_1695).f_T;
R9 l_OP_1697; memset(&l_OP_1697, 0, sizeof l_OP_1697);
S_R9(&l_OP_1697, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
if (((((*(R22 *)rt_nil_check(l_T_1696))).f_GENP).f_LEN > ((rt_int)0LL)))
{
r_REQUIRE_WHERE(r_OP_NAME(l_OP_1697, 1), ((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
if (((((*(R22 *)rt_nil_check(l_T_1696))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_OP_NAME(l_OP_1697, 1))))
{
{
R27 * l_ARGS_1698; memset(&l_ARGS_1698, 0, sizeof l_ARGS_1698);
l_ARGS_1698 = r_VAL_ARG(l_A_1695, r_QUAL_ARGS(((*(R17 *)rt_nil_check(p_E))).f_LINE));
R12 * l_Y_1699; memset(&l_Y_1699, 0, sizeof l_Y_1699);
l_Y_1699 = r_USER_OPERATOR(r_OP_NAME(l_OP_1697, 1), l_ARGS_1698, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if (((l_Y_1699 == NULL) && (!(((*(R27 *)rt_nil_check(l_ARGS_1698))).f_NEXT == NULL))))
{
((*(R27 *)rt_nil_check(l_ARGS_1698))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(r_OP_NAME(l_OP_1697, 1), l_ARGS_1698, ((*(R17 *)rt_nil_check(p_E))).f_LINE) == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("no operation takes the precision or rounding of the expression ", 63), rt_str("as arguments (D.5): ", 20)), r_OP_NAME(l_OP_1697, 1));
}
}
if ((!(l_Y_1699 == NULL)))
{
{ R26 rv1700 = r_CALL_SYM(l_Y_1699, l_ARGS_1698, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1700; }
}
if ((((*(R22 *)rt_nil_check(l_T_1696))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1696));
}
}
}
if (r_TEQS(l_OP_1697, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1696))).f_KIND == g_T_BOOL))
{
{ R26 rv1701 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1695).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1701; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1696))).f_KIND == g_T_BITS))
{
{ R26 rv1702 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1695).f_C), l_T_1696);
return rv1702; }
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1696))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1697, rt_str("-", 1)))
{
{ R26 rv1703 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1695).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1696))).f_SCALE));
return rv1703; }
}
{ R26 rv1704 = r_MKET((l_A_1695).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1696))).f_SCALE));
return rv1704; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1696))).f_KIND == g_T_FLOAT))
{
{
R22 * l_FT_1705; memset(&l_FT_1705, 0, sizeof l_FT_1705);
l_FT_1705 = r_FLOAT_TYPE(r_MAX_INT(((*(R22 *)rt_nil_check(l_T_1696))).f_SCALE, r_QUAL_PREC()));
if (r_TEQS(l_OP_1697, rt_str("-", 1)))
{
{ R26 rv1706 = r_MKET(r_FLOAT_OP(l_OP_1697, r_MK(rt_str("0.0", 3)), (l_A_1695).f_C, l_FT_1705), l_FT_1705);
return rv1706; }
}
{ R26 rv1707 = r_MKET((l_A_1695).f_C, l_FT_1705);
return rv1707; }
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1696));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R17 * p_E) { RT_B_TICK(); 
{ rt_int rv1708 = (((((((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) && (!r_NAMES_OBJECT(((*(R17 *)rt_nil_check(p_E))).f_NAME)))) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R17 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1708; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R17 * p_E) { RT_B_TICK(); 
R9 l_OP_1709; memset(&l_OP_1709, 0, sizeof l_OP_1709);
S_R9(&l_OP_1709, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1710; memset(&l_A_1710, 0, sizeof l_A_1710);
R26 l_B_1711; memset(&l_B_1711, 0, sizeof l_B_1711);
if ((r_TEQS(l_OP_1709, rt_str("&", 1)) || r_TEQS(l_OP_1709, rt_str("!", 1))))
{
{
R23 l_MA_1712; memset(&l_MA_1712, 0, sizeof l_MA_1712);
S_R23(&l_MA_1712, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R9 l_CA_1713; memset(&l_CA_1713, 0, sizeof l_CA_1713);
S_R9(&l_CA_1713, r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R9 l_CB_1714; memset(&l_CB_1714, 0, sizeof l_CB_1714);
S_R9(&l_CB_1714, r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1709, rt_str("&", 1)))
{
{ R26 rv1715 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1713, l_CB_1714), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1715; }
}
{ R26 rv1716 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1713, l_CB_1714), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1716; }
}
}
if ((r_IS_LITERALISH(((*(R17 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R17 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1711, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1710, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, (l_B_1711).f_T), 0);
}
else
{
S_R26(&l_A_1710, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1711, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, (l_A_1710).f_T), 0);
}
{ R26 rv1717 = r_STD_RESULT(r_APPLY_OPERATOR(p_E, l_OP_1709, l_A_1710, l_B_1711));
return rv1717; }
rt_raise(RT_X_INIT);
}
static R26 r_STD_RESULT(R26 p_V) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R26 rv1718 = p_V;
return rv1718; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((p_V).f_T)))).f_KIND == g_T_INT)))
{
{ R26 rv1719 = p_V;
return rv1719; }
}
{ R26 rv1720 = ({ R26 rc1721; memset(&rc1721, 0, sizeof rc1721);  S_R9(&rc1721.f_C, r_STD_CHECK((p_V).f_C), 0); rc1721.f_T = (p_V).f_T; rc1721.f_LVAL = 0; S_R9(&rc1721.f_SELF, (p_V).f_SELF, 0); rc1721; });
return rv1720; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1722; memset(&l_AT_1722, 0, sizeof l_AT_1722);
l_AT_1722 = (p_A).f_T;
R22 * l_BT_1723; memset(&l_BT_1723, 0, sizeof l_BT_1723);
l_BT_1723 = (p_B).f_T;
rt_int l_LINE_1724; memset(&l_LINE_1724, 0, sizeof l_LINE_1724);
l_LINE_1724 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
{
R9 l_NAME_1725; memset(&l_NAME_1725, 0, sizeof l_NAME_1725);
S_R9(&l_NAME_1725, r_OP_NAME(p_OP, 0), 0);
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
S_R9(&l_NAME_1725, r_MKN(rt_b_cat(rt_str("MD_", 3), r_STR(l_NAME_1725, (l_NAME_1725).f_LEN))), 0);
}
if ((((((*(R22 *)rt_nil_check(l_AT_1722))).f_GENP).f_LEN > ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_BT_1723))).f_GENP).f_LEN > ((rt_int)0LL))))
{
r_REQUIRE_WHERE(l_NAME_1725, l_LINE_1724);
}
if (((r_HAS_USER_ROUTINE(l_NAME_1725) || (((*(R22 *)rt_nil_check(l_AT_1722))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1723))).f_KIND == g_T_ABS)))
{
{
R27 * l_ARGS_1726; memset(&l_ARGS_1726, 0, sizeof l_ARGS_1726);
l_ARGS_1726 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R27 * l_EXTRA_1727; memset(&l_EXTRA_1727, 0, sizeof l_EXTRA_1727);
l_EXTRA_1727 = r_QUAL_ARGS(l_LINE_1724);
R12 * l_Y_1728; memset(&l_Y_1728, 0, sizeof l_Y_1728);
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
l_EXTRA_1727 = r_VAL_ARG(r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_D, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_EXTRA_1727);
}
if ((!(l_EXTRA_1727 == NULL)))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1726))).f_NEXT))).f_NEXT = l_EXTRA_1727;
l_Y_1728 = r_USER_OPERATOR(l_NAME_1725, l_ARGS_1726, l_LINE_1724);
if ((!(l_Y_1728 == NULL)))
{
{ R26 rv1729 = r_CALL_SYM(l_Y_1728, l_ARGS_1726, l_LINE_1724);
return rv1729; }
}
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1726))).f_NEXT))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(l_NAME_1725, l_ARGS_1726, l_LINE_1724) == NULL)))
{
r_FAILT(l_LINE_1724, rt_b_cat(rt_str("no operation takes the scale, precision or rounding of the ", 59), rt_str("expression as arguments (D.5): ", 31)), l_NAME_1725);
}
}
else
{
l_Y_1728 = r_USER_OPERATOR(l_NAME_1725, l_ARGS_1726, l_LINE_1724);
if ((!(l_Y_1728 == NULL)))
{
{ R26 rv1730 = r_CALL_SYM(l_Y_1728, l_ARGS_1726, l_LINE_1724);
return rv1730; }
}
}
if ((r_TEQS(p_OP, rt_str("<>", 2)) && (((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{
R12 * l_Q_1731; memset(&l_Q_1731, 0, sizeof l_Q_1731);
l_Q_1731 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1726, l_LINE_1724);
if ((!(l_Q_1731 == NULL)))
{
{ R26 rv1732 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1731, l_ARGS_1726, l_LINE_1724)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1732; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1722))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1723))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1724, rt_str("no such operation for the abstract type: ", 41), l_NAME_1725);
}
}
}
}
if ((!r_PREDEFINED_ROUNDING()))
{
r_FAILT(l_LINE_1724, rt_str("no operation is defined for the rounding mode ", 46), ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1733 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1733; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1734 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1734; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1722))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1723))).f_KIND == g_T_INT)))
{
{ R26 rv1735 = r_MKET(r_FIXED_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1735; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1722))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1723))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1736 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1736; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1722))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1722, l_BT_1723)))
{
if ((r_IS_UNORDERED(l_AT_1722) || r_IS_UNORDERED(l_BT_1723)))
{
r_FAIL(l_LINE_1724, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1737 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1737; }
}
r_FAILT(l_LINE_1724, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1722))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1723))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1722))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1723))).f_KIND == g_T_BITS)))))
{
r_SAME_CHARSET(l_AT_1722, l_BT_1723, l_LINE_1724);
{
R22 * l_T_1738; memset(&l_T_1738, 0, sizeof l_T_1738);
l_T_1738 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1722))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1738))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1722))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1722))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1723))).f_MLEN).f_OK))
{
S_R23(&((*(R22 *)rt_nil_check(l_T_1738))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1722))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1723))).f_MLEN).f_V)), 0);
S_R9(&((*(R22 *)rt_nil_check(l_T_1738))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1738))).f_MLEN).f_V), 0);
}
{ R26 rv1739 = r_MKET(r_FMT2(rt_str("rt_b_cat(@, @)", 14), (p_A).f_C, (p_B).f_C), l_T_1738);
return rv1739; }
}
}
r_FAIL(l_LINE_1724, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1722))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1723))).f_KIND == g_T_BITS)))
{
{ R26 rv1740 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1722);
return rv1740; }
}
r_FAILT(l_LINE_1724, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1722))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1723))).f_KIND == g_T_INT)))
{
{ R26 rv1741 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1741; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1722))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1723))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1742; memset(&l_T_1742, 0, sizeof l_T_1742);
l_T_1742 = r_FLOAT_TYPE(r_MAX_INT(r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1722))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1723))).f_SCALE), r_QUAL_PREC()));
if ((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))
{
{ R26 rv1743 = r_MKET(r_FLOAT_OP(p_OP, (p_A).f_C, (p_B).f_C, l_T_1742), l_T_1742);
return rv1743; }
}
if (r_TEQS(p_OP, rt_str("**", 2)))
{
r_FAIL(l_LINE_1724, rt_str("** has no predefined meaning for floating point values (3.3.4.2)", 64));
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1722))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1723))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1722))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1723))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1724, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1724, rt_b_cat(rt_b_cat(rt_b_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1722), (r_TYPE_NAME(l_AT_1722)).f_LEN)));
rt_raise(RT_X_INIT);
}
static rt_int r_IDENTICAL_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1744; memset(&l_RA_1744, 0, sizeof l_RA_1744);
l_RA_1744 = r_REAL_TYPE(p_A);
R22 * l_RB_1745; memset(&l_RB_1745, 0, sizeof l_RB_1745);
l_RB_1745 = r_REAL_TYPE(p_B);
if ((p_A == p_B))
{
{ rt_int rv1746 = 1;
return rv1746; }
}
if (((!r_SAME_TYPE(p_A, p_B)) || (!r_SAME_RANGE(p_A, p_B))))
{
{ rt_int rv1747 = 0;
return rv1747; }
}
if (((((*(R22 *)rt_nil_check(l_RA_1744))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RA_1744))).f_KIND == g_T_BITS)))
{
if (((((*(R22 *)rt_nil_check(l_RA_1744))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_1745))).f_MLEN).f_OK))
{
{ rt_int rv1748 = ((((*(R22 *)rt_nil_check(l_RA_1744))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_1745))).f_MLEN).f_V);
return rv1748; }
}
}
else if ((((*(R22 *)rt_nil_check(l_RA_1744))).f_KIND == g_T_ARR))
{
{ rt_int rv1749 = (r_SAME_EXTENTS(l_RA_1744, l_RB_1745) && r_IDENTICAL_TYPE(((*(R22 *)rt_nil_check(l_RA_1744))).f_ELEM, ((*(R22 *)rt_nil_check(l_RB_1745))).f_ELEM));
return rv1749; }
}
{ rt_int rv1750 = 1;
return rv1750; }
rt_raise(RT_X_INIT);
}
static R9 r_TARGET_ARGS_CHECK(R22 * p_RT, R22 * p_VT, R9 p_C) { RT_B_TICK(); 
R22 * l_A_1751; memset(&l_A_1751, 0, sizeof l_A_1751);
l_A_1751 = r_REAL_TYPE(p_RT);
R22 * l_B_1752; memset(&l_B_1752, 0, sizeof l_B_1752);
l_B_1752 = r_REAL_TYPE(p_VT);
R9 l_R_1753; memset(&l_R_1753, 0, sizeof l_R_1753);
S_R9(&l_R_1753, r_MK(rt_str("", 0)), 0);
if (((!(((*(R22 *)rt_nil_check(l_A_1751))).f_KIND == g_T_REC)) || (!(((*(R22 *)rt_nil_check(l_B_1752))).f_KIND == g_T_REC))))
{
{ R9 rv1754 = p_C;
return rv1754; }
}
{
R24 * l_F_1755; memset(&l_F_1755, 0, sizeof l_F_1755);
l_F_1755 = ((*(R22 *)rt_nil_check(l_A_1751))).f_FIELDS;
R25 * l_P_1756; memset(&l_P_1756, 0, sizeof l_P_1756);
l_P_1756 = ((*(R22 *)rt_nil_check(l_A_1751))).f_ARGS;
R25 * l_Q_1757; memset(&l_Q_1757, 0, sizeof l_Q_1757);
l_Q_1757 = ((*(R22 *)rt_nil_check(l_B_1752))).f_ARGS;
for (;;) {
if ((((l_F_1755 == NULL) || (l_P_1756 == NULL)) || (l_Q_1757 == NULL))) goto L_end1758;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1755))).f_KIND == ((rt_int)0LL))))
{
if (((((!((*(R25 *)rt_nil_check(l_P_1756))).f_ANYARG) && (!r_IS_GEN_ARG(l_P_1756))) && (!r_IS_GEN_ARG(l_Q_1757))) && (!(((((*(R25 *)rt_nil_check(l_P_1756))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_1757))).f_MLO).f_OK)))))
{
S_R9(&l_R_1753, r_FMT3(rt_str("@ if (p && p->@ != (@)) rt_raise(RT_B_TYPE_MISMATCH);", 53), l_R_1753, ((*(R24 *)rt_nil_check(l_F_1755))).f_CNAME, ((*(R25 *)rt_nil_check(l_P_1756))).f_LO), 0);
}
l_P_1756 = ((*(R25 *)rt_nil_check(l_P_1756))).f_NEXT;
l_Q_1757 = ((*(R25 *)rt_nil_check(l_Q_1757))).f_NEXT;
}
l_F_1755 = ((*(R24 *)rt_nil_check(l_F_1755))).f_NEXT;
}
RT_B_TICK();
} L_end1758: ;
}
if (((l_R_1753).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1759 = p_C;
return rv1759; }
}
{ R9 rv1760 = r_FMT3(rt_str("({ __typeof__(@) p = (@);@ p; })", 32), p_C, p_C, l_R_1753);
return rv1760; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_EXTENTS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R25 * l_P_1761; memset(&l_P_1761, 0, sizeof l_P_1761);
l_P_1761 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_A)))).f_BOUNDS;
R25 * l_Q_1762; memset(&l_Q_1762, 0, sizeof l_Q_1762);
l_Q_1762 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_B)))).f_BOUNDS;
for (;;) {
if (((l_P_1761 == NULL) || (l_Q_1762 == NULL))) goto L_end1763;
{
if (((((((((((*(R25 *)rt_nil_check(l_P_1761))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_P_1761))).f_MHI).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1762))).f_MLO).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1762))).f_MHI).f_OK) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1761))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1761))).f_HI))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1762))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1762))).f_HI))))
{
if ((!(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_P_1761))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_P_1761))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)) == r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_Q_1762))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_Q_1762))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)))))
{
{ rt_int rv1764 = 0;
return rv1764; }
}
}
l_P_1761 = ((*(R25 *)rt_nil_check(l_P_1761))).f_NEXT;
l_Q_1762 = ((*(R25 *)rt_nil_check(l_Q_1762))).f_NEXT;
}
RT_B_TICK();
} L_end1763: ;
{ rt_int rv1765 = 1;
return rv1765; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_VALUES(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv1766 = 0;
return rv1766; }
}
{ rt_int rv1767 = (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL));
return rv1767; }
rt_raise(RT_X_INIT);
}
static R22 * r_FLOAT_TYPE(rt_int p_P) { RT_B_TICK(); 
R22 * l_T_1768; memset(&l_T_1768, 0, sizeof l_T_1768);
l_T_1768 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1768))).f_SCALE = p_P;
{ R22 * rv1769 = l_T_1768;
return rv1769; }
rt_raise(RT_X_INIT);
}
static R9 r_SINGLE_C(rt_int p_P) { RT_B_TICK(); 
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
{ R9 rv1770 = r_MK(rt_str("1", 1));
return rv1770; }
}
{ R9 rv1771 = r_MK(rt_str("0", 1));
return rv1771; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_TRUNC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9)) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8))))
{
{ R9 rv1772 = r_MK(rt_str("1", 1));
return rv1772; }
}
}
{ R9 rv1773 = r_MK(rt_str("0", 1));
return rv1773; }
rt_raise(RT_X_INIT);
}
static rt_int r_QUAL_PREC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B == NULL)))
{
{ rt_int rv1774 = (r_MANIFEST(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B)).f_V;
return rv1774; }
}
}
{ rt_int rv1775 = ((rt_int)0LL);
return rv1775; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_OP(R9 p_OP, R9 p_A, R9 p_B, R22 * p_T) { RT_B_TICK(); 
{ R9 rv1776 = r_CAT(r_FMT3(rt_str("rt_b_fop('@', @, @, ", 20), p_OP, p_A, p_B), r_FMT2(rt_str("@, @)", 5), r_SINGLE_C(((*(R22 *)rt_nil_check(p_T))).f_SCALE), r_FLOAT_TRUNC()));
return rv1776; }
rt_raise(RT_X_INIT);
}
static R9 r_LOWER_OP(R9 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R9 rv1777 = r_MK(rt_str("and", 3));
return rv1777; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R9 rv1778 = r_MK(rt_str("or", 2));
return rv1778; }
}
{ R9 rv1779 = r_MK(rt_str("xor", 3));
return rv1779; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { RT_B_TICK(); 
if ((p_A > p_B))
{
{ rt_int rv1780 = p_A;
return rv1780; }
}
{ rt_int rv1781 = p_B;
return rv1781; }
rt_raise(RT_X_INIT);
}
static R9 r_FIXED_COMPARE(R26 p_A, R26 p_B, R9 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE == ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE))
{
{ R9 rv1782 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv1782; }
}
{ R9 rv1783 = r_CAT(r_FMT3(rt_str("(rt_b_cmp(@, @, @", 17), (p_A).f_C, r_NUM(((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE), (p_B).f_C), r_FMT2(rt_str(", @) @ 0)", 9), r_NUM(((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE), p_OP));
return rv1783; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1784; memset(&l_AT_1784, 0, sizeof l_AT_1784);
l_AT_1784 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1785; memset(&l_BT_1785, 0, sizeof l_BT_1785);
l_BT_1785 = r_REAL_TYPE((p_B).f_T);
R9 l_R_1786; memset(&l_R_1786, 0, sizeof l_R_1786);
if (((((*(R22 *)rt_nil_check(l_AT_1784))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1785))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1784))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1785))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1784))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1785))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R9(&l_R_1786, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1784))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1785))).f_KIND == g_T_INT)))
{
S_R9(&l_R_1786, r_FIXED_COMPARE(p_A, p_B, r_MK(rt_str("==", 2))), 0);
}
else
{
if ((!r_SAME_CLASS(l_AT_1784, l_BT_1785)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1784))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
r_SAME_CHARSET(l_AT_1784, l_BT_1785, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R22 *)rt_nil_check(l_AT_1784))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1784) || r_HAS_ANY(l_BT_1785)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
if ((((*(R22 *)rt_nil_check(l_AT_1784))).f_KIND == g_T_ARR))
{
if ((!r_SAME_EXTENTS(l_AT_1784, l_BT_1785)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("arrays of different EXTENT attributes are compared (3.8.4.1)", 60));
}
}
if ((((*(R22 *)rt_nil_check(l_AT_1784))).f_KIND == g_T_REC))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_AT_1784))).f_ARGS, ((*(R22 *)rt_nil_check(l_BT_1785))).f_ARGS)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("records of different types are compared (3.9.4.1)", 49));
}
}
if (r_HAS_ABS_PART(l_AT_1784))
{
S_R9(&l_R_1786, r_COMPONENT_EQUAL(l_AT_1784, (p_A).f_C, (p_B).f_C, ((*(R17 *)rt_nil_check(p_E))).f_LINE), 0);
}
else
{
S_R9(&l_R_1786, r_EQUAL_CODE(l_AT_1784, (p_A).f_C, (p_B).f_C), 0);
}
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R9(&l_R_1786, r_FMT1(rt_str("(!@)", 4), l_R_1786), 0);
}
{ R26 rv1787 = r_MKET(l_R_1786, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1787; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1788; memset(&l_S1_1788, 0, sizeof l_S1_1788);
l_S1_1788 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1789; memset(&l_S2_1789, 0, sizeof l_S2_1789);
l_S2_1789 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1790; memset(&l_S_1790, 0, sizeof l_S_1790);
l_S_1790 = r_MAX_INT(l_S1_1788, l_S2_1789);
R9 l_FN_1791; memset(&l_FN_1791, 0, sizeof l_FN_1791);
S_R9(&l_FN_1791, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R9(&l_FN_1791, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1792 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1791, r_RESCALE_C((p_A).f_C, l_S1_1788, l_S_1790), r_RESCALE_C((p_B).f_C, l_S2_1789, l_S_1790)), r_INT_TYPE(l_S_1790));
return rv1792; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1793 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1788, l_S2_1789)));
return rv1793; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1794 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1788, l_S2_1789)));
return rv1794; }
}
{ R26 rv1795 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1788, l_S2_1789)));
return rv1795; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1796 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1788));
return rv1796; }
}
{ R26 rv1797 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1788));
return rv1797; }
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
rt_int l_S1_1798; memset(&l_S1_1798, 0, sizeof l_S1_1798);
l_S1_1798 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1799; memset(&l_S2_1799, 0, sizeof l_S2_1799);
l_S2_1799 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R9 l_RND_1800; memset(&l_RND_1800, 0, sizeof l_RND_1800);
S_R9(&l_RND_1800, r_MK(rt_str("0", 1)), 0);
if ((((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_B).f_T)))).f_KIND == g_T_FLOAT)))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no machine-dependent float operator ", 36), p_OP);
}
{ R26 rv1801 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1801; }
}
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R9(&l_RND_1800, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("//", 2))))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the machine-dependent fixed point operators are !+! !-! !*! !//! (3.2.4.5), not ", 80), p_OP);
}
{ R26 rv1802 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1802; }
}
{
R23 l_SM_1803; memset(&l_SM_1803, 0, sizeof l_SM_1803);
S_R23(&l_SM_1803, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1804; memset(&l_S_1804, 0, sizeof l_S_1804);
l_S_1804 = (l_SM_1803).f_V;
rt_int l_SR_1805; memset(&l_SR_1805, 0, sizeof l_SR_1805);
l_SR_1805 = r_MAX_INT(l_S1_1798, l_S2_1799);
if ((!(l_SM_1803).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1806 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1804, l_S1_1798), l_S2_1799)), l_RND_1800), r_INT_TYPE(l_S_1804));
return rv1806; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1807 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1804, l_S1_1798), l_S2_1799)), l_RND_1800), r_INT_TYPE(l_S_1804));
return rv1807; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1808 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1798), r_NUM(l_S_1804), l_RND_1800), r_INT_TYPE(l_S_1804));
return rv1808; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R9 l_SUB_1809; memset(&l_SUB_1809, 0, sizeof l_SUB_1809);
S_R9(&l_SUB_1809, r_MK(rt_str("0", 1)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R9(&l_SUB_1809, r_MK(rt_str("1", 1)), 0);
}
{ R26 rv1810 = r_MKET(r_CAT(r_FMT4(rt_str("rt_b_addsc(@, @, @, @, ", 23), (p_A).f_C, r_NUM(l_S1_1798), (p_B).f_C, r_NUM(l_S2_1799)), r_FMT3(rt_str("@, @, @)", 8), r_NUM(l_S_1804), l_SUB_1809, l_RND_1800)), r_INT_TYPE(l_S_1804));
return rv1810; }
}
}
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R17 * p_E) { RT_B_TICK(); 
R26 l_V_1811; memset(&l_V_1811, 0, sizeof l_V_1811);
S_R26(&l_V_1811, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1812; memset(&l_T_1812, 0, sizeof l_T_1812);
l_T_1812 = r_REAL_TYPE((l_V_1811).f_T);
R17 * l_R_1813; memset(&l_R_1813, 0, sizeof l_R_1813);
l_R_1813 = ((*(R17 *)rt_nil_check(p_E))).f_B;
R9 l_TMP_1814; memset(&l_TMP_1814, 0, sizeof l_TMP_1814);
S_R9(&l_TMP_1814, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1815; memset(&l_LO_1815, 0, sizeof l_LO_1815);
R26 l_HI_1816; memset(&l_HI_1816, 0, sizeof l_HI_1816);
R9 l_LOC_1817; memset(&l_LOC_1817, 0, sizeof l_LOC_1817);
R9 l_HIC_1818; memset(&l_HIC_1818, 0, sizeof l_HIC_1818);
R9 l_LO_OP_1819; memset(&l_LO_OP_1819, 0, sizeof l_LO_OP_1819);
S_R9(&l_LO_OP_1819, r_MK(rt_str("<=", 2)), 0);
R9 l_HI_OP_1820; memset(&l_HI_OP_1820, 0, sizeof l_HI_OP_1820);
S_R9(&l_HI_OP_1820, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1815, r_EXPR(((*(R17 *)rt_nil_check(l_R_1813))).f_A, l_T_1812), 0);
S_R26(&l_HI_1816, r_EXPR(((*(R17 *)rt_nil_check(l_R_1813))).f_B, l_T_1812), 0);
if (r_IS_UNORDERED(l_T_1812))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1812))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1812))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1812))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_1815).f_T), l_T_1812)) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_1816).f_T), l_T_1812))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if (((((*(R17 *)rt_nil_check(l_R_1813))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_R_1813))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LO_OP_1819, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R17 *)rt_nil_check(l_R_1813))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HI_OP_1820, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R22 *)rt_nil_check(l_T_1812))).f_KIND == g_T_INT))
{
{
R26 l_X_1821; memset(&l_X_1821, 0, sizeof l_X_1821);
S_R26(&l_X_1821, r_MKET(l_TMP_1814, (l_V_1811).f_T), 0);
S_R9(&l_LOC_1817, r_FIXED_COMPARE(l_LO_1815, l_X_1821, l_LO_OP_1819), 0);
S_R9(&l_HIC_1818, r_FIXED_COMPARE(l_X_1821, l_HI_1816, l_HI_OP_1820), 0);
}
}
else
{
S_R9(&l_LOC_1817, r_FMT3(rt_str("(@ @ @)", 7), (l_LO_1815).f_C, l_LO_OP_1819, l_TMP_1814), 0);
S_R9(&l_HIC_1818, r_FMT3(rt_str("(@ @ @)", 7), l_TMP_1814, l_HI_OP_1820, (l_HI_1816).f_C), 0);
}
{ R26 rv1822 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; @ && ", 17), r_CTYPE(l_T_1812), l_TMP_1814, (l_V_1811).f_C, l_LOC_1817), r_FMT1(rt_str("@; })", 5), l_HIC_1818)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1822; }
rt_raise(RT_X_INIT);
}
static R9 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R9 rv1823 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1823; }
}
{ R9 rv1824 = (p_V).f_C;
return rv1824; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { RT_B_TICK(); 
{ R26 rv1825 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1825; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { RT_B_TICK(); 
rt_int l_B_1826; memset(&l_B_1826, 0, sizeof l_B_1826);
l_B_1826 = ((rt_int)0LL);
rt_int l_P_1827; memset(&l_P_1827, 0, sizeof l_P_1827);
l_P_1827 = ((rt_int)1LL);
for (;;) {
if ((l_P_1827 >= p_N)) goto L_end1828;
{
l_B_1826 = rt_add(l_B_1826, ((rt_int)1LL));
l_P_1827 = rt_mul(l_P_1827, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1828: ;
{ rt_int rv1829 = l_B_1826;
return rv1829; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R23 l_M_1830; memset(&l_M_1830, 0, sizeof l_M_1830);
S_R23(&l_M_1830, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1830).f_OK)
{
{ rt_int rv1831 = (l_M_1830).f_V;
return rv1831; }
}
}
}
}
{ rt_int rv1832 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1832; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKING_OF(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1833; memset(&l_K_1833, 0, sizeof l_K_1833);
l_K_1833 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
rt_int l_MODE_1834; memset(&l_MODE_1834, 0, sizeof l_MODE_1834);
l_MODE_1834 = ((rt_int)2LL);
if ((l_K_1833 == g_T_STR))
{
l_MODE_1834 = ((rt_int)1LL);
}
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_KIND == g_N_REP) && (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL))))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_KIND == g_N_ENUMLIT)))
{
{
rt_int l_P_1835; memset(&l_P_1835, 0, sizeof l_P_1835);
l_P_1835 = r_PACKING_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_NAME);
if ((l_P_1835 >= ((rt_int)0LL)))
{
l_MODE_1834 = l_P_1835;
}
}
}
}
}
{ rt_int rv1836 = l_MODE_1834;
return rv1836; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKING_VALUE(R9 p_NAME) { RT_B_TICK(); 
if (r_TEQS(p_NAME, rt_str("DENSE", 5)))
{
{ rt_int rv1837 = ((rt_int)0LL);
return rv1837; }
}
else if (r_TEQS(p_NAME, rt_str("PACKED", 6)))
{
{ rt_int rv1838 = ((rt_int)1LL);
return rv1838; }
}
else if (r_TEQS(p_NAME, rt_str("UNPACKED", 8)))
{
{ rt_int rv1839 = ((rt_int)2LL);
return rv1839; }
}
{ rt_int rv1840 = rt_neg(((rt_int)1LL));
return rv1840; }
rt_raise(RT_X_INIT);
}
static R26 r_PACKING_LITERAL(rt_int p_MODE, rt_int p_LINE) { RT_B_TICK(); 
if ((p_MODE == ((rt_int)0LL)))
{
{ R26 rv1841 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("DENSE", 5), p_LINE), NULL);
return rv1841; }
}
else if ((p_MODE == ((rt_int)1LL)))
{
{ R26 rv1842 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1842; }
}
{ R26 rv1843 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1843; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACK_SLOT(rt_int p_ES, rt_int p_MODE) { RT_B_TICK(); 
rt_int l_U_1844; memset(&l_U_1844, 0, sizeof l_U_1844);
l_U_1844 = ((rt_int)8LL);
if ((p_ES <= ((rt_int)0LL)))
{
if ((p_MODE == ((rt_int)0LL)))
{
{ rt_int rv1845 = ((rt_int)0LL);
return rv1845; }
}
{ rt_int rv1846 = ((rt_int)8LL);
return rv1846; }
}
if ((p_MODE == ((rt_int)0LL)))
{
{ rt_int rv1847 = p_ES;
return rv1847; }
}
if (((p_MODE == ((rt_int)1LL)) && (p_ES <= ((*(R7 *)rt_nil_check(g_W))).f_WORD)))
{
for (;;) {
if ((l_U_1844 >= p_ES)) goto L_end1848;
{
l_U_1844 = rt_mul(l_U_1844, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1848: ;
{ rt_int rv1849 = l_U_1844;
return rv1849; }
}
{ rt_int rv1850 = rt_mul((rt_quot((rt_sub(rt_add(p_ES, ((*(R7 *)rt_nil_check(g_W))).f_WORD), ((rt_int)1LL))), ((*(R7 *)rt_nil_check(g_W))).f_WORD)), ((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1850; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_MIN_C(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1851 = r_MK(rt_str("INT64_MIN", 9));
return rv1851; }
}
{ R9 rv1852 = r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(rt_neg(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))))));
return rv1852; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_MAX_C(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1853 = r_MK(rt_str("INT64_MAX", 9));
return rv1853; }
}
{ R9 rv1854 = r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(rt_sub(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))), ((rt_int)1LL))));
return rv1854; }
rt_raise(RT_X_INIT);
}
static rt_int r_STD_MIN(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ rt_int rv1855 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
return rv1855; }
}
{ rt_int rv1856 = rt_neg(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))));
return rv1856; }
rt_raise(RT_X_INIT);
}
static rt_int r_STD_MAX(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ rt_int rv1857 = INT64_MAX;
return rv1857; }
}
{ rt_int rv1858 = rt_sub(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))), ((rt_int)1LL));
return rv1858; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_CHECK(R9 p_C) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1859 = p_C;
return rv1859; }
}
{ R9 rv1860 = r_FMT1(rt_str("rt_b_std(@)", 11), p_C);
return rv1860; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACK_SIZE(rt_int p_N, rt_int p_ES, rt_int p_MODE) { RT_B_TICK(); 
if ((p_N <= ((rt_int)0LL)))
{
{ rt_int rv1861 = ((rt_int)0LL);
return rv1861; }
}
{ rt_int rv1862 = rt_mul(p_N, r_PACK_SLOT(p_ES, p_MODE));
return rv1862; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHAR_SIZE(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv1863 = r_ENUM_SIZE(r_CHARSET_OF(p_T));
return rv1863; }
rt_raise(RT_X_INIT);
}
static R9 r_CHAR_REPS(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_1864; memset(&l_C_1864, 0, sizeof l_C_1864);
l_C_1864 = r_CHARSET_OF(p_T);
if ((!(((*(R22 *)rt_nil_check(l_C_1864))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_1864))).f_REPS))).f_B == NULL)))
{
{ R9 rv1865 = r_REP_TABLE(l_C_1864);
return rv1865; }
}
}
{ R9 rv1866 = r_FMT1(rt_str("NULL, @", 7), r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_1864))).f_BASE))).f_NLITS));
return rv1866; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_LENGTH(void) { RT_B_TICK(); 
{ rt_int rv1867 = ((rt_int)100000000LL);
return rv1867; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_FLOAT_PRECISION(void) { RT_B_TICK(); 
{ rt_int rv1868 = ((rt_int)15LL);
return rv1868; }
rt_raise(RT_X_INIT);
}
static rt_int r_IMP_PRECISION_OF(rt_int p_P) { RT_B_TICK(); 
if ((p_P <= ((rt_int)7LL)))
{
{ rt_int rv1869 = ((rt_int)7LL);
return rv1869; }
}
{ rt_int rv1870 = ((rt_int)15LL);
return rv1870; }
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_FORMAT(rt_int p_P, R9 p_NAME) { RT_B_TICK(); 
rt_int l_SINGLE_1871; memset(&l_SINGLE_1871, 0, sizeof l_SINGLE_1871);
l_SINGLE_1871 = (r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL));
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
{ rt_int rv1872 = rt_neg(((rt_int)127LL));
return rv1872; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
{ rt_int rv1873 = ((rt_int)127LL);
return rv1873; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
{ rt_int rv1874 = ((rt_int)8LL);
return rv1874; }
}
}
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
if (l_SINGLE_1871)
{
{ rt_int rv1875 = rt_neg(((rt_int)125LL));
return rv1875; }
}
{ rt_int rv1876 = rt_neg(((rt_int)1021LL));
return rv1876; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
if (l_SINGLE_1871)
{
{ rt_int rv1877 = ((rt_int)128LL);
return rv1877; }
}
{ rt_int rv1878 = ((rt_int)1024LL);
return rv1878; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
if (l_SINGLE_1871)
{
{ rt_int rv1879 = ((rt_int)25LL);
return rv1879; }
}
{ rt_int rv1880 = ((rt_int)54LL);
return rv1880; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
if (l_SINGLE_1871)
{
{ rt_int rv1881 = ((rt_int)8LL);
return rv1881; }
}
{ rt_int rv1882 = ((rt_int)11LL);
return rv1882; }
}
else if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
if (l_SINGLE_1871)
{
{ rt_int rv1883 = ((rt_int)32LL);
return rv1883; }
}
{ rt_int rv1884 = ((rt_int)64LL);
return rv1884; }
}
{ rt_int rv1885 = ((rt_int)0LL);
return rv1885; }
rt_raise(RT_X_INIT);
}
static R23 r_STATIC_SIZE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1886; memset(&l_K_1886, 0, sizeof l_K_1886);
l_K_1886 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1886 == g_T_ABS))
{
{ R23 rv1887 = r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1887; }
}
else if ((l_K_1886 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R23 rv1888 = r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A);
return rv1888; }
}
}
{ R23 rv1889 = r_SOME(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1889; }
}
else if ((l_K_1886 == g_T_FLOAT))
{
{ R23 rv1890 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1890; }
}
else if ((l_K_1886 == g_T_BOOL))
{
{ R23 rv1891 = r_SOME(((rt_int)1LL));
return rv1891; }
}
else if ((l_K_1886 == g_T_ENUM))
{
{ R23 rv1892 = r_SOME(r_ENUM_SIZE(p_T));
return rv1892; }
}
else if ((l_K_1886 == g_T_BITS))
{
{ R23 rv1893 = ((*(R22 *)rt_nil_check(p_T))).f_MLEN;
return rv1893; }
}
else if ((l_K_1886 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R23 rv1894 = r_SOME(r_PACK_SIZE((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_V, r_CHAR_SIZE(p_T), r_PACKING_OF(p_T)));
return rv1894; }
}
}
else if (((l_K_1886 == g_T_PTR) || (l_K_1886 == g_T_SEM)))
{
{ R23 rv1895 = r_SOME(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1895; }
}
else if ((l_K_1886 == g_T_ARR))
{
{
R23 l_ES_1896; memset(&l_ES_1896, 0, sizeof l_ES_1896);
S_R23(&l_ES_1896, r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM), 0);
rt_int l_N_1897; memset(&l_N_1897, 0, sizeof l_N_1897);
l_N_1897 = ((rt_int)1LL);
R25 * l_B_1898; memset(&l_B_1898, 0, sizeof l_B_1898);
l_B_1898 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
if ((!(l_ES_1896).f_OK))
{
{ R23 rv1899 = r_NO_MVAL();
return rv1899; }
}
for (;;) {
if ((l_B_1898 == NULL)) goto L_end1900;
{
if ((((!(((((*(R25 *)rt_nil_check(l_B_1898))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_B_1898))).f_MHI).f_OK))) || r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1898))).f_LO)) || r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1898))).f_HI)))
{
{ R23 rv1901 = r_NO_MVAL();
return rv1901; }
}
l_N_1897 = rt_mul(l_N_1897, r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_B_1898))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_B_1898))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
l_B_1898 = ((*(R25 *)rt_nil_check(l_B_1898))).f_NEXT;
}
RT_B_TICK();
} L_end1900: ;
{ R23 rv1902 = r_SOME(r_PACK_SIZE(l_N_1897, (l_ES_1896).f_V, r_PACKING_OF(p_T)));
return rv1902; }
}
}
{ R23 rv1903 = r_NO_MVAL();
return rv1903; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1904; memset(&l_T_1904, 0, sizeof l_T_1904);
l_T_1904 = (p_B).f_T;
rt_int l_K_1905; memset(&l_K_1905, 0, sizeof l_K_1905);
l_K_1905 = ((*(R22 *)rt_nil_check(l_T_1904))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv1906 = r_SIZE_OF(l_T_1904, (p_B).f_C);
return rv1906; }
}
if ((l_K_1905 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv1907 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1904))).f_SCALE);
return rv1907; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1908 = r_INT_ET(((rt_int)2LL));
return rv1908; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv1909 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1909; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
if ((!(((*(R22 *)rt_nil_check(l_T_1904))).f_REPS == NULL)))
{
if ((r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1904))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1904))).f_REPS))).f_A == NULL))))
{
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1904))).f_REPS))).f_A))).f_NEXT == NULL)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1904))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8)))
{
{ R26 rv1910 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNSIGNED", 8), p_LINE), NULL);
return rv1910; }
}
}
}
}
{ R26 rv1911 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1911; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1904))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1912 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1904))).f_LO_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1904))).f_SCALE));
return rv1912; }
}
{ R26 rv1913 = r_MKET(r_STD_MIN_C(), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1904))).f_SCALE));
return rv1913; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1904))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1914 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1904))).f_HI_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1904))).f_SCALE));
return rv1914; }
}
{ R26 rv1915 = r_MKET(r_STD_MAX_C(), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1904))).f_SCALE));
return rv1915; }
}
}
else if ((l_K_1905 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv1916 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1904))).f_SCALE);
return rv1916; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv1917 = r_INT_ET(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1904))).f_SCALE));
return rv1917; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1918 = r_INT_ET(((rt_int)2LL));
return rv1918; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R26 rv1919 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1904))).f_SCALE, p_NAME));
return rv1919; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) || r_TEQS(p_NAME, rt_str("MAX", 3))))
{
{
R22 * l_MT_1920; memset(&l_MT_1920, 0, sizeof l_MT_1920);
l_MT_1920 = r_FLOAT_TYPE(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1904))).f_SCALE));
R9 l_C_1921; memset(&l_C_1921, 0, sizeof l_C_1921);
S_R9(&l_C_1921, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1904))).f_SCALE) == ((rt_int)7LL)))
{
S_R9(&l_C_1921, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1904))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1922 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1904))).f_LO_C, (p_B).f_SELF), l_MT_1920);
return rv1922; }
}
{ R26 rv1923 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1921), l_MT_1920);
return rv1923; }
}
if (((((*(R22 *)rt_nil_check(l_T_1904))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1924 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1904))).f_HI_C, (p_B).f_SELF), l_MT_1920);
return rv1924; }
}
{ R26 rv1925 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1921), l_MT_1920);
return rv1925; }
}
}
}
else if ((l_K_1905 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1904))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1926 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1904))).f_LO_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1904))).f_BASE);
return rv1926; }
}
{ R26 rv1927 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_1904))).f_BASE);
return rv1927; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1904))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1928 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1904))).f_HI_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1904))).f_BASE);
return rv1928; }
}
{ R26 rv1929 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1904))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_1904))).f_BASE);
return rv1929; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1904))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1930 = r_MKET(r_SUBST_SELF(r_FMT4(rt_str("((@) >= (@) \? (@) - (@) + 1 : 0)", 32), ((*(R22 *)rt_nil_check(l_T_1904))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1904))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1904))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1904))).f_LO_C), (p_B).f_SELF), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1930; }
}
{ R26 rv1931 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1904))).f_BASE))).f_NLITS);
return rv1931; }
}
}
else if (((l_K_1905 == g_T_STR) || (l_K_1905 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv1932 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1932; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1933 = r_PACKING_LITERAL(r_PACKING_OF(l_T_1904), p_LINE);
return rv1933; }
}
}
else if ((l_K_1905 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv1934 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1904))).f_DIMS);
return rv1934; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) || r_TEQS(p_NAME, rt_str("BOUNDS", 6))))
{
{ R26 rv1935 = r_ARRAY_SHAPE(p_B, p_NAME);
return rv1935; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1936 = r_PACKING_LITERAL(r_PACKING_OF(l_T_1904), p_LINE);
return rv1936; }
}
}
else if ((l_K_1905 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_1904))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv1937 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1937; }
}
{ R26 rv1938 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1938; }
}
}
else if (((l_K_1905 == g_T_ABS) || (l_K_1905 == g_T_REC)))
{
{
R22 * l_U_1939; memset(&l_U_1939, 0, sizeof l_U_1939);
l_U_1939 = l_T_1904;
if ((l_K_1905 == g_T_ABS))
{
l_U_1939 = ((*(R22 *)rt_nil_check(l_T_1904))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_1939))).f_KIND == g_T_REC))
{
{
R24 * l_F_1940; memset(&l_F_1940, 0, sizeof l_F_1940);
l_F_1940 = r_FIND_FIELD(l_U_1939, p_NAME);
if ((!(l_F_1940 == NULL)))
{
if ((!(((*(R24 *)rt_nil_check(l_F_1940))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv1941 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R24 *)rt_nil_check(l_F_1940))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1940))).f_T);
return rv1941; }
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
R22 * l_T_1942; memset(&l_T_1942, 0, sizeof l_T_1942);
l_T_1942 = r_REAL_TYPE((p_B).f_T);
R9 l_D_1943; memset(&l_D_1943, 0, sizeof l_D_1943);
S_R9(&l_D_1943, r_NUM(((*(R22 *)rt_nil_check(l_T_1942))).f_DIMS), 0);
R9 l_X_1944; memset(&l_X_1944, 0, sizeof l_X_1944);
S_R9(&l_X_1944, r_NEW_NAME(rt_str("sx", 2)), 0);
R9 l_R_1945; memset(&l_R_1945, 0, sizeof l_R_1945);
S_R9(&l_R_1945, r_NEW_NAME(rt_str("sr", 2)), 0);
R22 * l_ELEM_1946; memset(&l_ELEM_1946, 0, sizeof l_ELEM_1946);
l_ELEM_1946 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
R9 l_C_1947; memset(&l_C_1947, 0, sizeof l_C_1947);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
{
R17 * l_TS_1948; memset(&l_TS_1948, 0, sizeof l_TS_1948);
l_TS_1948 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_TS_1948))).f_NAME, r_MKN(rt_str("BOUNDS_DEF", 10)), 0);
((*(R17 *)rt_nil_check(l_TS_1948))).f_A = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_TS_1948))).f_A))).f_NAME, r_MKN(rt_str("STD", 3)), 0);
l_ELEM_1946 = r_RESOLVE(l_TS_1948);
}
}
{
R22 * l_A_1949; memset(&l_A_1949, 0, sizeof l_A_1949);
l_A_1949 = r_ARRAY_OF(l_ELEM_1946, ((rt_int)1LL));
S_R9(&l_C_1947, r_FMT4(rt_str("({ @ @ = @; @ ", 14), r_CTYPE(l_T_1942), l_X_1944, (p_B).f_C, ((*(R22 *)rt_nil_check(l_A_1949))).f_CNAME), 0);
S_R9(&l_C_1947, r_FMT4(rt_str("@@; memset(&@, 0, sizeof @);", 28), l_C_1947, l_R_1945, l_R_1945, l_R_1945), 0);
S_R9(&l_C_1947, r_FMT4(rt_str("@ @.lo[0] = 0; @.hi[0] = @ - 1;", 31), l_C_1947, l_R_1945, l_R_1945, l_D_1943), 0);
S_R9(&l_C_1947, r_FMT4(rt_str("@ @.p = rt_alloc(@ * sizeof *@.p);", 34), l_C_1947, l_R_1945, l_D_1943, l_R_1945), 0);
S_R9(&l_C_1947, r_FMT2(rt_str("@ for (int i = 0; i < @; i++) {", 31), l_C_1947, l_D_1943), 0);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
S_R9(&l_C_1947, r_FMT2(rt_str("@ @", 3), l_C_1947, r_INIT_CODE(l_ELEM_1946, r_FMT1(rt_str("@.p[i]", 6), l_R_1945))), 0);
S_R9(&l_C_1947, r_FMT4(rt_str("@ @.p[i].f_MIN = @.lo[i]; @.p[i].f_MAX = ", 41), l_C_1947, l_R_1945, l_X_1944, l_R_1945), 0);
S_R9(&l_C_1947, r_FMT2(rt_str("@@.hi[i]; }", 11), l_C_1947, l_X_1944), 0);
}
else
{
S_R9(&l_C_1947, r_FMT4(rt_str("@ @.p[i] = @.hi[i] >= @.lo[i] \? ", 32), l_C_1947, l_R_1945, l_X_1944, l_X_1944), 0);
S_R9(&l_C_1947, r_FMT4(rt_str("@@.hi[i] - @.lo[i] + 1 : 0; }", 29), l_C_1947, l_X_1944, l_X_1944, l_X_1944), 0);
}
{ R26 rv1950 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_C_1947, l_R_1945), l_A_1949);
return rv1950; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_N_1951; memset(&l_N_1951, 0, sizeof l_N_1951);
l_N_1951 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1951))).f_NAME, r_MKN(p_NAME), 0);
{ R17 * rv1952 = l_N_1951;
return rv1952; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R9 p_C) { RT_B_TICK(); 
rt_int l_K_1953; memset(&l_K_1953, 0, sizeof l_K_1953);
l_K_1953 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1953 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv1954 = r_MKET((r_EXPR(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1954; }
}
}
{ R26 rv1955 = r_INT_ET(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1955; }
}
else if ((l_K_1953 == g_T_FLOAT))
{
{ R26 rv1956 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1956; }
}
else if ((l_K_1953 == g_T_BOOL))
{
{ R26 rv1957 = r_INT_ET(((rt_int)1LL));
return rv1957; }
}
else if ((l_K_1953 == g_T_ENUM))
{
{ R26 rv1958 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1958; }
}
else if ((l_K_1953 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1959 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1959; }
}
{ R26 rv1960 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1960; }
}
else if ((l_K_1953 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R26 rv1961 = r_INT_ET((r_STATIC_SIZE(p_T)).f_V);
return rv1961; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1962 = r_MKET(r_FMT3(rt_str("rt_b_pack_size(@, @, @)", 23), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C, r_NUM(r_CHAR_SIZE(p_T)), r_NUM(r_PACKING_OF(p_T))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1962; }
}
{ R26 rv1963 = r_MKET(r_FMT3(rt_str("rt_b_pack_size((@).len, @, @)", 29), p_C, r_NUM(r_CHAR_SIZE(p_T)), r_NUM(r_PACKING_OF(p_T))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1963; }
}
else if (((l_K_1953 == g_T_PTR) || (l_K_1953 == g_T_SEM)))
{
{ R26 rv1964 = r_INT_ET(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1964; }
}
else if ((l_K_1953 == g_T_ABS))
{
{ R26 rv1965 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1965; }
}
else if ((l_K_1953 == g_T_REC))
{
{ R26 rv1966 = r_MKET(r_RECORD_SIZE(p_T, p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1966; }
}
else if ((l_K_1953 == g_T_ARR))
{
{
R23 l_ES_1967; memset(&l_ES_1967, 0, sizeof l_ES_1967);
S_R23(&l_ES_1967, r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM), 0);
if ((l_ES_1967).f_OK)
{
{ R26 rv1968 = r_MKET(r_CAT(r_FMT3(rt_str("rt_b_pack_size(rt_b_extent(@, (@).lo, (@).hi), ", 47), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C), r_FMT2(rt_str("@, @)", 5), r_NUM((l_ES_1967).f_V), r_NUM(r_PACKING_OF(p_T)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1968; }
}
}
{ R26 rv1969 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1969; }
}
{ R26 rv1970 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1970; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R9 p_TNAME, R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{ R26 rv1971 = r_ATTRIBUTE(r_TYPE_VALUE(p_TNAME, p_LINE), p_NAME, p_LINE);
return rv1971; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE(R9 p_TNAME, rt_int p_LINE) { RT_B_TICK(); 
{ R26 rv1972 = r_TYPE_VALUE_OF(r_RESOLVE_USER_NAME(p_TNAME, p_LINE));
return rv1972; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_1973; memset(&l_RT_1973, 0, sizeof l_RT_1973);
l_RT_1973 = r_REAL_TYPE(p_T);
if (((((*(R22 *)rt_nil_check(l_RT_1973))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(l_RT_1973))).f_KIND == g_T_REC)))
{
{
R9 l_TMP_1974; memset(&l_TMP_1974, 0, sizeof l_TMP_1974);
S_R9(&l_TMP_1974, r_NEW_NAME(rt_str("tq", 2)), 0);
R9 l_C_1975; memset(&l_C_1975, 0, sizeof l_C_1975);
S_R9(&l_C_1975, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), r_CTYPE(p_T), l_TMP_1974, l_TMP_1974, l_TMP_1974), 0);
S_R9(&l_C_1975, r_FMT3(rt_str("@@ @; })", 8), l_C_1975, r_INIT_CODE(l_RT_1973, l_TMP_1974), l_TMP_1974), 0);
{ R26 rv1976 = r_MKET(l_C_1975, p_T);
return rv1976; }
}
}
{ R26 rv1977 = r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(p_T)), p_T);
return rv1977; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_NAME(R17 * p_E) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{ rt_int rv1978 = 0;
return rv1978; }
}
{
R12 * l_Y_1979; memset(&l_Y_1979, 0, sizeof l_Y_1979);
l_Y_1979 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1979 == NULL))
{
{ rt_int rv1980 = 0;
return rv1980; }
}
{ rt_int rv1981 = (((*(R12 *)rt_nil_check(l_Y_1979))).f_KIND == g_Y_TYPE);
return rv1981; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R9 p_TNAME, R9 p_A, R9 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1982 = r_INT_ET(((rt_int)100000000LL));
return rv1982; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1983 = r_INT_ET(((rt_int)15LL));
return rv1983; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv1984 = r_INT_ET(((rt_int)0LL));
return rv1984; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R22 * l_T_1985; memset(&l_T_1985, 0, sizeof l_T_1985);
l_T_1985 = p_WANT;
if ((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_1985 = r_RESOLVE(((*(R17 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_1985 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_1985 = r_REAL_TYPE(l_T_1985);
if ((!(((*(R22 *)rt_nil_check(l_T_1985))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_1985))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R9 l_TMP_1986; memset(&l_TMP_1986, 0, sizeof l_TMP_1986);
S_R9(&l_TMP_1986, r_NEW_NAME(rt_str("rc", 2)), 0);
R9 l_R_1987; memset(&l_R_1987, 0, sizeof l_R_1987);
S_R9(&l_R_1987, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_1985))).f_CNAME, l_TMP_1986, l_TMP_1986, l_TMP_1986), 0);
R24 * l_F_1988; memset(&l_F_1988, 0, sizeof l_F_1988);
l_F_1988 = ((*(R22 *)rt_nil_check(l_T_1985))).f_FIELDS;
S_R9(&l_R_1987, r_FMT2(rt_str("@@", 2), l_R_1987, r_INIT_CODE(l_T_1985, l_TMP_1986)), 0);
for (;;) {
if ((l_F_1988 == NULL)) goto L_end1989;
{
if ((((*(R24 *)rt_nil_check(l_F_1988))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R24 *)rt_nil_check(l_F_1988))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_1988))).f_LABELS, (r_TAG_VALUE(l_T_1985, ((*(R24 *)rt_nil_check(l_F_1988))).f_TAGF)).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_T_1985, ((*(R24 *)rt_nil_check(l_F_1988))).f_TAGF)))).f_T)))
{
{
R17 * l_INIT_1990; memset(&l_INIT_1990, 0, sizeof l_INIT_1990);
l_INIT_1990 = r_FIND_INIT(((*(R17 *)rt_nil_check(p_E))).f_A, ((*(R24 *)rt_nil_check(l_F_1988))).f_NAME);
if ((l_INIT_1990 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R24 *)rt_nil_check(l_F_1988))).f_NAME);
}
S_R9(&l_R_1987, r_FMT2(rt_str("@ @", 3), l_R_1987, r_STORE_CODE(((*(R24 *)rt_nil_check(l_F_1988))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_1986, ((*(R24 *)rt_nil_check(l_F_1988))).f_CNAME), r_EXPR(((*(R17 *)rt_nil_check(l_INIT_1990))).f_A, ((*(R24 *)rt_nil_check(l_F_1988))).f_T), ((*(R17 *)rt_nil_check(l_INIT_1990))).f_LINE, l_TMP_1986)), 0);
}
}
}
l_F_1988 = ((*(R24 *)rt_nil_check(l_F_1988))).f_NEXT;
}
RT_B_TICK();
} L_end1989: ;
{
R17 * l_P_1991; memset(&l_P_1991, 0, sizeof l_P_1991);
l_P_1991 = ((*(R17 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_1991 == NULL)) goto L_end1992;
{
{
R24 * l_G_1993; memset(&l_G_1993, 0, sizeof l_G_1993);
l_G_1993 = r_FIND_VFIELD(l_T_1985, ((*(R17 *)rt_nil_check(l_P_1991))).f_NAME);
if ((l_G_1993 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_1991))).f_LINE, rt_str("no such field: ", 15), ((*(R17 *)rt_nil_check(l_P_1991))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_G_1993))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_1991))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R17 *)rt_nil_check(l_P_1991))).f_NAME);
}
r_CHECK_VARIANT(l_G_1993, l_T_1985, NULL, ((*(R17 *)rt_nil_check(l_P_1991))).f_LINE);
}
l_P_1991 = ((*(R17 *)rt_nil_check(l_P_1991))).f_NEXT;
}
RT_B_TICK();
} L_end1992: ;
}
{ R26 rv1994 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1987, l_TMP_1986), l_T_1985);
return rv1994; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_FIND_INIT(R17 * p_L, R9 p_NAME) { RT_B_TICK(); 
R17 * l_P_1995; memset(&l_P_1995, 0, sizeof l_P_1995);
l_P_1995 = p_L;
for (;;) {
if ((l_P_1995 == NULL)) goto L_end1996;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_1995))).f_NAME, p_NAME))
{
{ R17 * rv1997 = l_P_1995;
return rv1997; }
}
l_P_1995 = ((*(R17 *)rt_nil_check(l_P_1995))).f_NEXT;
}
RT_B_TICK();
} L_end1996: ;
{ R17 * rv1998 = NULL;
return rv1998; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_DIMS_1999; memset(&l_DIMS_1999, 0, sizeof l_DIMS_1999);
l_DIMS_1999 = ((rt_int)0LL);
R17 * l_P_2000; memset(&l_P_2000, 0, sizeof l_P_2000);
l_P_2000 = p_E;
R22 * l_ELEM_2001; memset(&l_ELEM_2001, 0, sizeof l_ELEM_2001);
l_ELEM_2001 = NULL;
for (;;) {
if ((!(((*(R17 *)rt_nil_check(l_P_2000))).f_KIND == g_N_ARRCONS))) goto L_end2002;
{
l_DIMS_1999 = rt_add(l_DIMS_1999, ((rt_int)1LL));
l_P_2000 = ((*(R17 *)rt_nil_check(l_P_2000))).f_A;
}
RT_B_TICK();
} L_end2002: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_2001 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_2001 == NULL))
{
l_ELEM_2001 = (r_EXPR(l_P_2000, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_2001))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_2001))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_2001 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
r_CHECK_SHAPE(p_E, l_DIMS_1999);
{
R22 * l_A_2003; memset(&l_A_2003, 0, sizeof l_A_2003);
l_A_2003 = r_ARRAY_OF(l_ELEM_2001, l_DIMS_1999);
R9 l_TMP_2004; memset(&l_TMP_2004, 0, sizeof l_TMP_2004);
S_R9(&l_TMP_2004, r_NEW_NAME(rt_str("ac", 2)), 0);
R9 l_R_2005; memset(&l_R_2005, 0, sizeof l_R_2005);
S_R9(&l_R_2005, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_2003))).f_CNAME, l_TMP_2004, l_TMP_2004), 0);
rt_int l_K_2006; memset(&l_K_2006, 0, sizeof l_K_2006);
l_K_2006 = ((rt_int)0LL);
{
R17 * l_Q_2007; memset(&l_Q_2007, 0, sizeof l_Q_2007);
l_Q_2007 = p_E;
R25 * l_TAIL_2008; memset(&l_TAIL_2008, 0, sizeof l_TAIL_2008);
l_TAIL_2008 = NULL;
{ rt_int it2010_lo = ((rt_int)1LL), it2010_hi = l_DIMS_1999;
for (rt_int it2010 = it2010_lo; it2010 <= it2010_hi; it2010++) {
{
{
R25 * l_B_2011; memset(&l_B_2011, 0, sizeof l_B_2011);
l_B_2011 = ((R25 *)rt_b_new(sizeof (R25)));
rt_int l_N_2012; memset(&l_N_2012, 0, sizeof l_N_2012);
l_N_2012 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(l_Q_2007))).f_A);
S_R25(&(*(R25 *)rt_nil_check(l_B_2011)), ({ R25 rc2013; memset(&rc2013, 0, sizeof rc2013);  S_R9(&rc2013.f_LO, r_MK(rt_str("0", 1)), 0); S_R9(&rc2013.f_HI, r_NUM(rt_sub(l_N_2012, ((rt_int)1LL))), 0); S_R23(&rc2013.f_MLO, r_SOME(((rt_int)0LL)), 0); S_R23(&rc2013.f_MHI, r_SOME(rt_sub(l_N_2012, ((rt_int)1LL))), 0); rc2013.f_ANYARG = 0; rc2013.f_NEXT = NULL; rc2013; }), 0);
if ((l_TAIL_2008 == NULL))
{
((*(R22 *)rt_nil_check(l_A_2003))).f_BOUNDS = l_B_2011;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_2008))).f_NEXT = l_B_2011;
}
l_TAIL_2008 = l_B_2011;
}
l_Q_2007 = ((*(R17 *)rt_nil_check(l_Q_2007))).f_A;
}
RT_B_TICK();
if (it2010 == it2010_hi) break;
} } L_end2009: ;
}
S_R9(&l_R_2005, r_FMT2(rt_str("@@); ", 5), l_R_2005, l_TMP_2004), 0);
l_P_2000 = p_E;
{ rt_int it2015_lo = ((rt_int)0LL), it2015_hi = rt_sub(l_DIMS_1999, ((rt_int)1LL));
for (rt_int it2015 = it2015_lo; it2015 <= it2015_hi; it2015++) {
{
S_R9(&l_R_2005, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_2005, l_TMP_2004, r_NUM(it2015), l_TMP_2004), 0);
S_R9(&l_R_2005, r_FMT3(rt_str("@@] = @;", 8), l_R_2005, r_NUM(it2015), r_NUM(rt_sub(r_LIST_LENGTH(((*(R17 *)rt_nil_check(l_P_2000))).f_A), ((rt_int)1LL)))), 0);
l_P_2000 = ((*(R17 *)rt_nil_check(l_P_2000))).f_A;
}
RT_B_TICK();
if (it2015 == it2015_hi) break;
} } L_end2014: ;
S_R9(&l_R_2005, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_2005, l_TMP_2004, l_TMP_2004, r_NUM(l_DIMS_1999)), 0);
S_R9(&l_R_2005, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_2005, l_TMP_2004, l_TMP_2004), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_1999, l_A_2003, l_TMP_2004, &l_R_2005, &l_K_2006);
{ R26 rv2016 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_2005, l_TMP_2004), l_A_2003);
return rv2016; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_SHAPE(R17 * p_E, rt_int p_DIMS) { RT_B_TICK(); 
R17 * l_P_2017; memset(&l_P_2017, 0, sizeof l_P_2017);
l_P_2017 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((p_DIMS <= ((rt_int)1LL)))
{
return;
}
for (;;) {
if ((l_P_2017 == NULL)) goto L_end2018;
{
if (((!(((*(R17 *)rt_nil_check(l_P_2017))).f_KIND == g_N_ARRCONS)) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_ARRCONS))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
if ((!r_SAME_SHAPE(l_P_2017, ((*(R17 *)rt_nil_check(p_E))).f_A)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
r_CHECK_SHAPE(l_P_2017, rt_sub(p_DIMS, ((rt_int)1LL)));
l_P_2017 = ((*(R17 *)rt_nil_check(l_P_2017))).f_NEXT;
}
RT_B_TICK();
} L_end2018: ;
}
static rt_int r_SAME_SHAPE(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
if (((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) || (!(((*(R17 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS))))
{
{ rt_int rv2019 = ((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) && (!(((*(R17 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS)));
return rv2019; }
}
if ((!(r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_A))).f_A) == r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_B))).f_A))))
{
{ rt_int rv2020 = 0;
return rv2020; }
}
{ rt_int rv2021 = r_SAME_SHAPE(((*(R17 *)rt_nil_check(p_A))).f_A, ((*(R17 *)rt_nil_check(p_B))).f_A);
return rv2021; }
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R17 * p_E, rt_int p_DIMS, R22 * p_A, R9 p_TMP, R9 *p_R, rt_int *p_K) { RT_B_TICK(); 
R17 * l_P_2022; memset(&l_P_2022, 0, sizeof l_P_2022);
l_P_2022 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_2022 == NULL)) goto L_end2023;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_2022, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R17 *)rt_nil_check(l_P_2022))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2022))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R9(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R9(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_2022, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R17 *)rt_nil_check(l_P_2022))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_2022 = ((*(R17 *)rt_nil_check(l_P_2022))).f_NEXT;
}
RT_B_TICK();
} L_end2023: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R22 * l_T_2024; memset(&l_T_2024, 0, sizeof l_T_2024);
l_T_2024 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_2024))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_2024))).f_DIMS = p_DIMS;
S_R9(&((*(R22 *)rt_nil_check(l_T_2024))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv2025 = l_T_2024;
return rv2025; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R17 * p_E) { RT_B_TICK(); 
R22 * l_T_2026; memset(&l_T_2026, 0, sizeof l_T_2026);
l_T_2026 = r_RESOLVE(((*(R17 *)rt_nil_check(p_E))).f_A);
R26 l_V_2027; memset(&l_V_2027, 0, sizeof l_V_2027);
S_R26(&l_V_2027, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, l_T_2026), 0);
R22 * l_RT_2028; memset(&l_RT_2028, 0, sizeof l_RT_2028);
l_RT_2028 = r_REAL_TYPE(l_T_2026);
if (((((*(R22 *)rt_nil_check((l_V_2027).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_2028))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R22 *)rt_nil_check(l_RT_2028))).f_KIND == g_T_INT))
{
{ R26 rv2029 = r_MKET(r_RANGE_CHECK(l_RT_2028, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_2027).f_C), r_NO_TEXT()), l_T_2026);
return rv2029; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_2028))).f_KIND == g_T_BOOL))
{
{ R26 rv2030 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_2027).f_C), l_T_2026);
return rv2030; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_2028))).f_KIND == g_T_ENUM))
{
{ R26 rv2031 = r_MKET(r_ENUM_OF_BITS(l_RT_2028, (l_V_2027).f_C), l_T_2026);
return rv2031; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_2028))).f_KIND == g_T_FLOAT))
{
{ R26 rv2032 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_2027).f_C), l_T_2026);
return rv2032; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_2028))).f_KIND == g_T_STR))
{
{ R26 rv2033 = r_MKET(r_FMT4(rt_str("rt_b_chars_of_bits(@, @, @, @)", 30), (l_V_2027).f_C, r_NUM(r_CHAR_SIZE(l_RT_2028)), r_NUM(r_PACKING_OF(l_RT_2028)), r_CHAR_REPS(l_RT_2028)), l_T_2026);
return rv2033; }
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{
R9 l_C_2034; memset(&l_C_2034, 0, sizeof l_C_2034);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 1;
S_R9(&l_C_2034, r_CONVERT(l_V_2027, l_T_2026, ((*(R17 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), 0);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 0;
if ((((((((*(R22 *)rt_nil_check(l_RT_2028))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_2028))).f_KIND == g_T_BITS))) && ((((*(R22 *)rt_nil_check(l_RT_2028))).f_LEN_C).f_LEN > ((rt_int)0LL))) && (!(((((*(R22 *)rt_nil_check(l_RT_2028))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check((l_V_2027).f_T))).f_MLEN).f_OK)))))
{
S_R9(&l_C_2034, r_FMT2(rt_str("rt_b_tlen(@, @)", 15), l_C_2034, ((*(R22 *)rt_nil_check(l_RT_2028))).f_LEN_C), 0);
}
{ R26 rv2035 = r_MKET(l_C_2034, l_T_2026);
return rv2035; }
}
rt_raise(RT_X_INIT);
}
static R9 r_ENUM_OF_BITS(R22 * p_T, R9 p_C) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R9 rv2036 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv2036; }
}
}
{ R9 rv2037 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv2037; }
rt_raise(RT_X_INIT);
}
static R9 r_REP_TABLE(R22 * p_T) { RT_B_TICK(); 
R9 l_NAME_2038; memset(&l_NAME_2038, 0, sizeof l_NAME_2038);
S_R9(&l_NAME_2038, r_NEW_NAME(rt_str("reps", 4)), 0);
R17 * l_L_2039; memset(&l_L_2039, 0, sizeof l_L_2039);
l_L_2039 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R9 l_R_2040; memset(&l_R_2040, 0, sizeof l_R_2040);
S_R9(&l_R_2040, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_2039 == NULL)) goto L_end2041;
{
{
R17 * l_V_2042; memset(&l_V_2042, 0, sizeof l_V_2042);
l_V_2042 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_2043; memset(&l_FOUND_2043, 0, sizeof l_FOUND_2043);
l_FOUND_2043 = 0;
for (;;) {
if ((l_V_2042 == NULL)) goto L_end2044;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_V_2042))).f_NAME, ((*(R17 *)rt_nil_check(l_L_2039))).f_NAME))
{
S_R9(&l_R_2040, r_FMT2(rt_str("@@, ", 4), l_R_2040, (r_EXPR(((*(R17 *)rt_nil_check(l_V_2042))).f_A, NULL)).f_C), 0);
l_FOUND_2043 = 1;
}
l_V_2042 = ((*(R17 *)rt_nil_check(l_V_2042))).f_NEXT;
}
RT_B_TICK();
} L_end2044: ;
if ((!l_FOUND_2043))
{
r_FAILT(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R17 *)rt_nil_check(l_L_2039))).f_NAME);
}
}
l_L_2039 = ((*(R17 *)rt_nil_check(l_L_2039))).f_NEXT;
}
RT_B_TICK();
} L_end2041: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_2038, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_2040, l_NAME_2038, l_NAME_2038));
{ R9 rv2045 = r_FMT2(rt_str("@, @", 4), l_NAME_2038, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv2045; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SEM_2046; memset(&l_SEM_2046, 0, sizeof l_SEM_2046);
l_SEM_2046 = r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(((*(R7 *)rt_nil_check(g_W))).f_NEW_OK == p_E))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("NEW without PTR$ or SEMAPHORE$ only initializes a declaration or is the source ", 79), rt_str("of an assignment (3.10.2, 3.11.2)", 33)));
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_2046 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_2046)
{
{
R22 * l_T_2047; memset(&l_T_2047, 0, sizeof l_T_2047);
l_T_2047 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_2047 = p_WANT;
}
}
{ R26 rv2048 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_2047))).f_SCALE)), l_T_2047);
return rv2048; }
}
}
{
R22 * l_T_2049; memset(&l_T_2049, 0, sizeof l_T_2049);
l_T_2049 = r_RESOLVE(r_EXPR_TO_TS(((*(R17 *)rt_nil_check(p_E))).f_A));
R22 * l_P_2050; memset(&l_P_2050, 0, sizeof l_P_2050);
l_P_2050 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_2050))).f_TARGET = l_T_2049;
((*(R22 *)rt_nil_check(l_P_2050))).f_TARGET_TS = ((*(R17 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_2049))
{
{ R26 rv2051 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_b_new(sizeof *p); @ p; })", 38), r_CTYPE(l_T_2049), r_INIT_CODE(l_T_2049, r_MK(rt_str("(*p)", 4)))), l_P_2050);
return rv2051; }
}
{ R26 rv2052 = r_MKET(r_FMT2(rt_str("((@ *)rt_b_new(sizeof (@)))", 27), r_CTYPE(l_T_2049), r_CTYPE(l_T_2049)), l_P_2050);
return rv2052; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_NTH(R17 * p_L, rt_int p_K) { RT_B_TICK(); 
R17 * l_P_2053; memset(&l_P_2053, 0, sizeof l_P_2053);
l_P_2053 = p_L;
{ rt_int it2055_lo = ((rt_int)1LL), it2055_hi = p_K;
for (rt_int it2055 = it2055_lo; it2055 <= it2055_hi; it2055++) {
{
if ((!(l_P_2053 == NULL)))
{
l_P_2053 = ((*(R17 *)rt_nil_check(l_P_2053))).f_NEXT;
}
}
RT_B_TICK();
if (it2055 == it2055_hi) break;
} } L_end2054: ;
{ R17 * rv2056 = l_P_2053;
return rv2056; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R17 * p_E, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
rt_int l_N_2057; memset(&l_N_2057, 0, sizeof l_N_2057);
l_N_2057 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A);
if (((l_N_2057 < p_LO) || (l_N_2057 > p_HI)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
}
static R9 r_ROUNDING_ARG(R17 * p_E, rt_int p_N) { RT_B_TICK(); 
R17 * l_L_2058; memset(&l_L_2058, 0, sizeof l_L_2058);
l_L_2058 = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_2058 == NULL)))
{
if (((((*(R17 *)rt_nil_check(l_L_2058))).f_KIND == g_N_QUAL) && ((((*(R17 *)rt_nil_check(l_L_2058))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_L_2058))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R9 rv2059 = r_MK(rt_str("1", 1));
return rv2059; }
}
{ R9 rv2060 = r_MK(rt_str("0", 1));
return rv2060; }
}
if (((((*(R17 *)rt_nil_check(l_L_2058))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_L_2058))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_L_2058))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R9 rv2061 = r_MK(rt_str("1", 1));
return rv2061; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_L_2058))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R9 rv2062 = r_MK(rt_str("0", 1));
return rv2062; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R9 rv2063 = r_MK(rt_str("1", 1));
return rv2063; }
}
{ R9 rv2064 = r_MK(rt_str("0", 1));
return rv2064; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R17 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv2065 = 0;
return rv2065; }
}
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv2066 = (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv2066; }
}
{ rt_int rv2067 = 0;
return rv2067; }
rt_raise(RT_X_INIT);
}
static R17 * r_ARG_EXPR(R17 * p_E) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R17 * rv2068 = ((*(R17 *)rt_nil_check(p_E))).f_A;
return rv2068; }
}
{ R17 * rv2069 = p_E;
return rv2069; }
rt_raise(RT_X_INIT);
}
static R9 r_OPERATOR_SYMBOL(R9 p_NAME) { RT_B_TICK(); 
rstr l_NAMES_2070; memset(&l_NAMES_2070, 0, sizeof l_NAMES_2070);
l_NAMES_2070 = rt_b_str_new(((rt_int)299LL), 0);
rt_b_assign(&l_NAMES_2070, rt_str(" ADD_:+ SUBTRACT_:- MULTIPLY_:* DIVIDE_:/ MODULUS_:MOD EXPONENTIATE_:** CONCATENATE_:!! EQUAL_:= UNEQUAL_:<> GREATER_THAN_:> LESS_THAN_:< GREATER_EQUAL_:>= LESS_EQUAL_:<= AND_:AND OR_:OR XOR_:XOR IMPLIES_:-> MD_ADD_:+ MD_SUBTRACT_:- MD_MULTIPLY_:* MD_DIVIDE_:/ NEGATE_:- MON_PLUS_:+ COMPLEMENT_:NOT ", 299));
rt_int l_L_2071; memset(&l_L_2071, 0, sizeof l_L_2071);
l_L_2071 = (p_NAME).f_LEN;
{ rt_int it2073_lo = ((rt_int)0LL), it2073_hi = rt_sub(rt_sub(((rt_int)299LL), l_L_2071), ((rt_int)2LL));
for (rt_int it2073 = it2073_lo; it2073 <= it2073_hi; it2073++) {
{
if ((rt_b_eq(rt_b_slice(l_NAMES_2070, it2073, it2073), rt_str(" ", 1)) && rt_b_eq(rt_b_slice(l_NAMES_2070, rt_add(rt_add(it2073, l_L_2071), ((rt_int)1LL)), rt_add(rt_add(it2073, l_L_2071), ((rt_int)1LL))), rt_str(":", 1))))
{
if (rt_b_eq(rt_b_slice(l_NAMES_2070, rt_add(it2073, ((rt_int)1LL)), rt_add(it2073, l_L_2071)), r_STR(p_NAME, l_L_2071)))
{
{
rt_int l_J_2074; memset(&l_J_2074, 0, sizeof l_J_2074);
l_J_2074 = rt_add(rt_add(it2073, l_L_2071), ((rt_int)2LL));
for (;;) {
if (rt_b_eq(rt_b_slice(l_NAMES_2070, l_J_2074, l_J_2074), rt_str(" ", 1))) goto L_end2075;
{
l_J_2074 = rt_add(l_J_2074, ((rt_int)1LL));
}
RT_B_TICK();
} L_end2075: ;
{ R9 rv2076 = r_MKN(rt_b_slice(l_NAMES_2070, rt_add(rt_add(it2073, l_L_2071), ((rt_int)2LL)), rt_sub(l_J_2074, ((rt_int)1LL))));
return rv2076; }
}
}
}
}
RT_B_TICK();
if (it2073 == it2073_hi) break;
} } L_end2072: ;
{ R9 rv2077 = r_NO_TEXT();
return rv2077; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_BUILTIN(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R9 l_NAME_2078; memset(&l_NAME_2078, 0, sizeof l_NAME_2078);
S_R9(&l_NAME_2078, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2079; memset(&l_LINE_2079, 0, sizeof l_LINE_2079);
l_LINE_2079 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
rt_int l_N_2080; memset(&l_N_2080, 0, sizeof l_N_2080);
l_N_2080 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A);
if ((r_TEQS(l_NAME_2078, rt_str("STORE_", 6)) || r_TEQS(l_NAME_2078, rt_str("SUBSTRING_STORE_", 16))))
{
{
R17 * l_TGT_2081; memset(&l_TGT_2081, 0, sizeof l_TGT_2081);
l_TGT_2081 = r_FIRST_OUT_ARG(p_E);
R17 * l_S_2082; memset(&l_S_2082, 0, sizeof l_S_2082);
l_S_2082 = r_NEW_NODE(g_N_ASSIGN, l_LINE_2079);
R17 * l_SRC_2083; memset(&l_SRC_2083, 0, sizeof l_SRC_2083);
l_SRC_2083 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if (((l_TGT_2081 == NULL) || (l_SRC_2083 == NULL)))
{
r_FAILT(l_LINE_2079, rt_str("the wrong arguments for ", 24), l_NAME_2078);
}
if (r_TEQS(l_NAME_2078, rt_str("STORE_", 6)))
{
((*(R17 *)rt_nil_check(l_S_2082))).f_A = l_TGT_2081;
}
else
{
if ((l_N_2080 < ((rt_int)3LL)))
{
r_FAIL(l_LINE_2079, rt_str("SUBSTRING_STORE_ (V, L, U # X) (D.5)", 36));
}
((*(R17 *)rt_nil_check(l_S_2082))).f_A = r_NEW_NODE(g_N_SUBSTR, l_LINE_2079);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_2082))).f_A))).f_A = l_TGT_2081;
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_2082))).f_A))).f_B = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_2082))).f_A))).f_C = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
}
((*(R17 *)rt_nil_check(l_S_2082))).f_B = r_QUALIFIED(r_COPY_NODE(l_SRC_2083), r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, rt_add(((rt_int)1LL), rt_mul(((rt_int)2LL), r_BOOL_INT(r_TEQS(l_NAME_2078, rt_str("SUBSTRING_STORE_", 16)))))), l_LINE_2079);
{
R14 l_SAVED_CODE_2084; memset(&l_SAVED_CODE_2084, 0, sizeof l_SAVED_CODE_2084);
S_R14(&l_SAVED_CODE_2084, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R9 l_C_2085; memset(&l_C_2085, 0, sizeof l_C_2085);
S_R9(&l_C_2085, r_MK(rt_str("({", 2)), 0);
R15 * l_P_2086; memset(&l_P_2086, 0, sizeof l_P_2086);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2087; memset(&rc2087, 0, sizeof rc2087);  rc2087.f_HEAD = NULL; rc2087.f_TAIL = NULL; rc2087; }), 0);
r_ASSIGN_STMT(l_S_2082);
l_P_2086 = (((*(R7 *)rt_nil_check(g_W))).f_CODE).f_HEAD;
for (;;) {
if ((l_P_2086 == NULL)) goto L_end2088;
{
S_R9(&l_C_2085, r_FMT2(rt_str("@ @", 3), l_C_2085, ((*(R15 *)rt_nil_check(l_P_2086))).f_T), 0);
l_P_2086 = ((*(R15 *)rt_nil_check(l_P_2086))).f_NEXT;
}
RT_B_TICK();
} L_end2088: ;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2084, 0);
{ R26 rv2089 = r_MKET(r_CATS(l_C_2085, rt_str(" })", 3)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2089; }
}
}
}
if (r_TEQS(l_NAME_2078, rt_str("SUBSTRING_", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R17 * l_S_2090; memset(&l_S_2090, 0, sizeof l_S_2090);
l_S_2090 = r_NEW_NODE(g_N_SUBSTR, l_LINE_2079);
((*(R17 *)rt_nil_check(l_S_2090))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_A;
((*(R17 *)rt_nil_check(l_S_2090))).f_B = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R17 *)rt_nil_check(l_S_2090))).f_C = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
((*(R17 *)rt_nil_check(l_S_2090))).f_A = r_COPY_NODE(((*(R17 *)rt_nil_check(p_E))).f_A);
{ R26 rv2091 = r_EXPR(l_S_2090, p_WANT);
return rv2091; }
}
}
{
R9 l_SYM__2092; memset(&l_SYM__2092, 0, sizeof l_SYM__2092);
S_R9(&l_SYM__2092, r_OPERATOR_SYMBOL(l_NAME_2078), 0);
rt_int l_UNARY_OP_2093; memset(&l_UNARY_OP_2093, 0, sizeof l_UNARY_OP_2093);
l_UNARY_OP_2093 = ((r_TEQS(l_NAME_2078, rt_str("NEGATE_", 7)) || r_TEQS(l_NAME_2078, rt_str("MON_PLUS_", 9))) || r_TEQS(l_NAME_2078, rt_str("COMPLEMENT_", 11)));
R17 * l_X_2094; memset(&l_X_2094, 0, sizeof l_X_2094);
if (l_UNARY_OP_2093)
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)3LL));
l_X_2094 = r_NEW_NODE(g_N_UNOP, l_LINE_2079);
S_R9(&((*(R17 *)rt_nil_check(l_X_2094))).f_NAME, l_SYM__2092, 0);
((*(R17 *)rt_nil_check(l_X_2094))).f_A = r_COPY_NODE(((*(R17 *)rt_nil_check(p_E))).f_A);
{ R26 rv2095 = r_EXPR(r_QUALIFIED(l_X_2094, r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), l_LINE_2079), p_WANT);
return rv2095; }
}
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)4LL));
l_X_2094 = r_BIN_NODE(l_SYM__2092, l_LINE_2079, r_COPY_NODE(((*(R17 *)rt_nil_check(p_E))).f_A), r_COPY_NODE(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))));
if (r_TEQS(l_SYM__2092, rt_str("/", 1)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL)).f_T)))).f_KIND == g_T_FLOAT)))
{
S_R9(&((*(R17 *)rt_nil_check(l_X_2094))).f_NAME, r_MK(rt_str("//", 2)), 0);
}
}
if (rt_b_eq(rt_b_slice(r_STR(l_NAME_2078, (l_NAME_2078).f_LEN), ((rt_int)0LL), ((rt_int)2LL)), rt_str("MD_", 3)))
{
((*(R17 *)rt_nil_check(l_X_2094))).f_FL = ((rt_int)2LL);
}
{ R26 rv2096 = r_EXPR(r_QUALIFIED(l_X_2094, r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_2079), p_WANT);
return rv2096; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_QUALIFIED(R17 * p_X, R17 * p_Q, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_2097; memset(&l_R_2097, 0, sizeof l_R_2097);
l_R_2097 = p_X;
R17 * l_P_2098; memset(&l_P_2098, 0, sizeof l_P_2098);
l_P_2098 = p_Q;
for (;;) {
if ((l_P_2098 == NULL)) goto L_end2099;
{
if ((l_R_2097 == p_X))
{
l_R_2097 = r_NEW_NODE(g_N_QUAL, p_LINE);
((*(R17 *)rt_nil_check(l_R_2097))).f_A = p_X;
}
if (((((((*(R17 *)rt_nil_check(l_P_2098))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_P_2098))).f_KIND == g_N_ENUMLIT))) && r_IS_ROUNDING_NAME(((*(R17 *)rt_nil_check(l_P_2098))).f_NAME)))
{
S_R9(&((*(R17 *)rt_nil_check(l_R_2097))).f_NAME, ((*(R17 *)rt_nil_check(l_P_2098))).f_NAME, 0);
}
else
{
((*(R17 *)rt_nil_check(l_R_2097))).f_B = l_P_2098;
}
l_P_2098 = ((*(R17 *)rt_nil_check(l_P_2098))).f_NEXT;
}
RT_B_TICK();
} L_end2099: ;
{ R17 * rv2100 = l_R_2097;
return rv2100; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING_NAME(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv2101 = (!(r_FIND_LITERAL(p_NAME, r_ROUNDINGS_TYPE()) == NULL));
return rv2101; }
rt_raise(RT_X_INIT);
}
static R22 * r_ROUNDINGS_TYPE(void) { RT_B_TICK(); 
R12 * l_Y_2102; memset(&l_Y_2102, 0, sizeof l_Y_2102);
l_Y_2102 = r_LOOKUP(r_MKN(rt_str("ROUNDINGS", 9)));
if ((!(l_Y_2102 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2102))).f_KIND == g_Y_TYPE))
{
{
R22 * l_T_2103; memset(&l_T_2103, 0, sizeof l_T_2103);
l_T_2103 = r_REAL_TYPE(r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_2102))).f_NAME, ((rt_int)0LL)));
if ((((*(R22 *)rt_nil_check(l_T_2103))).f_KIND == g_T_ENUM))
{
{ R22 * rv2104 = l_T_2103;
return rv2104; }
}
}
}
}
{ R22 * rv2105 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS;
return rv2105; }
rt_raise(RT_X_INIT);
}
static rt_int r_PREDEFINED_ROUNDING(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL))
{
{ rt_int rv2106 = 1;
return rv2106; }
}
if (((((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2107 = 1;
return rv2107; }
}
{ rt_int rv2108 = (((r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9))) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_R", 8))) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8)));
return rv2108; }
rt_raise(RT_X_INIT);
}
static R17 * r_FIRST_OUT_ARG(R17 * p_E) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL)))
{
{ R17 * rv2109 = ((*(R17 *)rt_nil_check(p_E))).f_C;
return rv2109; }
}
{ R17 * rv2110 = ((*(R17 *)rt_nil_check(p_E))).f_B;
return rv2110; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_OBJECT_ARG(R17 * p_L) { RT_B_TICK(); 
R17 * l_A_2111; memset(&l_A_2111, 0, sizeof l_A_2111);
l_A_2111 = p_L;
for (;;) {
if ((l_A_2111 == NULL)) goto L_end2112;
{
if ((((*(R17 *)rt_nil_check(l_A_2111))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_2113; memset(&l_Y_2113, 0, sizeof l_Y_2113);
l_Y_2113 = r_LOOKUP(((*(R17 *)rt_nil_check(l_A_2111))).f_NAME);
if ((!(l_Y_2113 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_2113))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_2113))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_2113))).f_T == NULL))))
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2113))).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
{ rt_int rv2114 = 1;
return rv2114; }
}
}
}
}
}
l_A_2111 = ((*(R17 *)rt_nil_check(l_A_2111))).f_NEXT;
}
RT_B_TICK();
} L_end2112: ;
{ rt_int rv2115 = 0;
return rv2115; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R9 l_NAME_2116; memset(&l_NAME_2116, 0, sizeof l_NAME_2116);
S_R9(&l_NAME_2116, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2117; memset(&l_LINE_2117, 0, sizeof l_LINE_2117);
l_LINE_2117 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
if ((!(r_CUR_GENERIC() == NULL)))
{
if (r_GENERIC_OBJECT_ARG(((*(R17 *)rt_nil_check(p_E))).f_A))
{
r_REQUIRE_WHERE(l_NAME_2116, l_LINE_2117);
}
}
if ((((((r_OPERATOR_SYMBOL(l_NAME_2116)).f_LEN > ((rt_int)0LL)) || r_TEQS(l_NAME_2116, rt_str("STORE_", 6))) || r_TEQS(l_NAME_2116, rt_str("SUBSTRING_", 10))) || r_TEQS(l_NAME_2116, rt_str("SUBSTRING_STORE_", 16))))
{
{ R26 rv2118 = r_OPERATOR_BUILTIN(p_E, p_WANT);
return rv2118; }
}
if ((r_TEQS(l_NAME_2116, rt_str("PUT", 3)) || r_TEQS(l_NAME_2116, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2119; memset(&l_V_2119, 0, sizeof l_V_2119);
S_R26(&l_V_2119, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2119).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_2117, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
r_ASCII_ONLY((l_V_2119).f_T, rt_str("the terminal", 12), l_LINE_2117);
if (r_TEQS(l_NAME_2116, rt_str("PUT", 3)))
{
{ R26 rv2120 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_2119).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2120; }
}
{ R26 rv2121 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_2119).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2121; }
}
}
else if (r_TEQS(l_NAME_2116, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2122 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2122; }
}
else if (r_TEQS(l_NAME_2116, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2123 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2123; }
}
else if (r_TEQS(l_NAME_2116, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2124 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2124; }
}
else if (r_TEQS(l_NAME_2116, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2125 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2125; }
}
else if (r_TEQS(l_NAME_2116, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2126 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2126; }
}
else if (r_TEQS(l_NAME_2116, rt_str("REAL_TIME", 9)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2127 = r_MKET(r_MK(rt_str("rt_b_real_time()", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2127; }
}
else if (r_TEQS(l_NAME_2116, rt_str("ARGUMENT_COUNT", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2128 = r_MKET(r_MK(rt_str("rt_argc()", 9)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2128; }
}
else if (r_TEQS(l_NAME_2116, rt_str("ARGUMENT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2129 = r_MKET(r_FMT1(rt_str("rt_arg(@)", 9), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2129; }
}
else if ((r_TEQS(l_NAME_2116, rt_str("FILE_EXISTS", 11)) || r_TEQS(l_NAME_2116, rt_str("READ_FILE", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2130; memset(&l_V_2130, 0, sizeof l_V_2130);
S_R26(&l_V_2130, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2130).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_2117, rt_str("a file is named by a character string: ", 39), l_NAME_2116);
}
if (r_TEQS(l_NAME_2116, rt_str("FILE_EXISTS", 11)))
{
{ R26 rv2131 = r_MKET(r_FMT1(rt_str("rt_b_file_exists(@)", 19), (l_V_2130).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2131; }
}
{ R26 rv2132 = r_MKET(r_FMT1(rt_str("rt_read_file(@)", 15), (l_V_2130).f_C), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2132; }
}
}
else if (r_TEQS(l_NAME_2116, rt_str("WRITE_FILE", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_N_2133; memset(&l_N_2133, 0, sizeof l_N_2133);
S_R26(&l_N_2133, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R26 l_V_2134; memset(&l_V_2134, 0, sizeof l_V_2134);
S_R26(&l_V_2134, r_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT, NULL), 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_N_2133).f_T)))).f_KIND == g_T_STR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2134).f_T)))).f_KIND == g_T_STR))))
{
r_FAIL(l_LINE_2117, rt_str("WRITE_FILE (name, text) takes two character strings", 51));
}
{ R26 rv2135 = r_MKET(r_FMT2(rt_str("rt_write_file(@, @)", 19), (l_N_2133).f_C, (l_V_2134).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2135; }
}
}
if (r_TEQS(l_NAME_2116, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2136 = r_IMAGE_OF(r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_2117);
return rv2136; }
}
else if (r_TEQS(l_NAME_2116, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv2137 = r_TO_FIXED_CALL(p_E);
return rv2137; }
}
else if (r_TEQS(l_NAME_2116, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_2138; memset(&l_V_2138, 0, sizeof l_V_2138);
S_R26(&l_V_2138, r_EXPR(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), NULL), 0);
R23 l_P_2139; memset(&l_P_2139, 0, sizeof l_P_2139);
S_R23(&l_P_2139, r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_VT_2140; memset(&l_VT_2140, 0, sizeof l_VT_2140);
l_VT_2140 = r_REAL_TYPE((l_V_2138).f_T);
R22 * l_T_2141; memset(&l_T_2141, 0, sizeof l_T_2141);
l_T_2141 = r_FLOAT_TYPE((l_P_2139).f_V);
R9 l_SINGLE_2142; memset(&l_SINGLE_2142, 0, sizeof l_SINGLE_2142);
S_R9(&l_SINGLE_2142, r_SINGLE_C((l_P_2139).f_V), 0);
R9 l_TR_2143; memset(&l_TR_2143, 0, sizeof l_TR_2143);
S_R9(&l_TR_2143, r_MK(rt_str("0", 1)), 0);
if (((r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A) == ((rt_int)3LL)) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT))).f_KIND == g_N_QUAL)))
{
{
R17 * l_R_2144; memset(&l_R_2144, 0, sizeof l_R_2144);
l_R_2144 = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
if ((l_R_2144 == NULL))
{
l_R_2144 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT;
}
if ((((*(R17 *)rt_nil_check(l_R_2144))).f_KIND == g_N_QUAL))
{
l_R_2144 = r_LIT_NODE(r_STR(((*(R17 *)rt_nil_check(l_R_2144))).f_NAME, (((*(R17 *)rt_nil_check(l_R_2144))).f_NAME).f_LEN), l_LINE_2117);
}
if (r_TEQS(((*(R17 *)rt_nil_check(l_R_2144))).f_NAME, rt_str("TRUNCATED", 9)))
{
S_R9(&l_TR_2143, r_MK(rt_str("1", 1)), 0);
}
else if ((!r_TEQS(((*(R17 *)rt_nil_check(l_R_2144))).f_NAME, rt_str("ROUNDED", 7))))
{
r_FAIL(l_LINE_2117, rt_str("TO_FLOAT is predefined for ROUNDED and TRUNCATED (3.3.6.1)", 58));
}
}
}
if ((((*(R22 *)rt_nil_check(l_VT_2140))).f_KIND == g_T_INT))
{
{ R26 rv2145 = r_MKET(r_FMT4(rt_str("rt_b_float_of_fix_r(@, @, @, @)", 31), (l_V_2138).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_2140))).f_SCALE), l_SINGLE_2142, l_TR_2143), l_T_2141);
return rv2145; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_2140))).f_KIND == g_T_FLOAT))
{
if (((((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) && (r_IMP_PRECISION_OF((l_P_2139).f_V) > r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_2140))).f_SCALE))))
{
{
R17 * l_Q_2146; memset(&l_Q_2146, 0, sizeof l_Q_2146);
l_Q_2146 = r_NEW_NODE(g_N_QUAL, l_LINE_2117);
R17 * l_SAVED_Q_2147; memset(&l_SAVED_Q_2147, 0, sizeof l_SAVED_Q_2147);
l_SAVED_Q_2147 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_L_2148; memset(&l_L_2148, 0, sizeof l_L_2148);
((*(R17 *)rt_nil_check(l_Q_2146))).f_B = r_ARG_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_Q_2146;
S_R26(&l_L_2148, r_EXPR(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_2147;
{ R26 rv2149 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_L_2148).f_C, l_SINGLE_2142, l_TR_2143), l_T_2141);
return rv2149; }
}
}
{ R26 rv2150 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_V_2138).f_C, l_SINGLE_2142, l_TR_2143), l_T_2141);
return rv2150; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_2140))).f_KIND == g_T_STR))
{
if (((!(((*(R22 *)rt_nil_check(l_VT_2140))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(l_VT_2140))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))))
{
r_FAIL(l_LINE_2117, rt_str("TO_FLOAT is predefined for ASCII strings only (3.3.6.1)", 55));
}
{ R26 rv2151 = r_MKET(r_FMT3(rt_str("rt_b_fconv(rt_b_float_of_str(@), @, @, 0)", 41), (l_V_2138).f_C, l_SINGLE_2142, l_TR_2143), l_T_2141);
return rv2151; }
}
r_FAIL(l_LINE_2117, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_2116, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2152 = r_BITS_OF(r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_2117);
return rv2152; }
}
else if (r_TEQS(l_NAME_2116, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2153; memset(&l_V_2153, 0, sizeof l_V_2153);
S_R26(&l_V_2153, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2153).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv2154 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_2153).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_2153).f_T))).f_SCALE));
return rv2154; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2153).f_T)))).f_KIND == g_T_FLOAT))
{
{ R26 rv2155 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_2153).f_C), (l_V_2153).f_T);
return rv2155; }
}
r_FAIL(l_LINE_2117, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_2116, rt_str("SUCC", 4)) || r_TEQS(l_NAME_2116, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2156; memset(&l_V_2156, 0, sizeof l_V_2156);
S_R26(&l_V_2156, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_2157; memset(&l_T_2157, 0, sizeof l_T_2157);
l_T_2157 = r_REAL_TYPE((l_V_2156).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_2157))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_2117, rt_str("an enumerated value expected by ", 32), l_NAME_2116);
}
if (r_IS_UNORDERED(l_T_2157))
{
r_FAILT(l_LINE_2117, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_2116);
}
if (r_TEQS(l_NAME_2116, rt_str("SUCC", 4)))
{
{ R26 rv2158 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_2156).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2157))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_2157))).f_BASE);
return rv2158; }
}
{ R26 rv2159 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_2156).f_C), ((*(R22 *)rt_nil_check(l_T_2157))).f_BASE);
return rv2159; }
}
}
else if (r_TEQS(l_NAME_2116, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_2160; memset(&l_V_2160, 0, sizeof l_V_2160);
S_R26(&l_V_2160, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_2161; memset(&l_K_2161, 0, sizeof l_K_2161);
l_K_2161 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2160).f_T)))).f_KIND;
R22 * l_T_2162; memset(&l_T_2162, 0, sizeof l_T_2162);
l_T_2162 = r_NEW_TYP(l_K_2161);
if (((!(l_K_2161 == g_T_STR)) && (!(l_K_2161 == g_T_BITS))))
{
r_FAIL(l_LINE_2117, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_2162))).f_BASE = ((*(R22 *)rt_nil_check((l_V_2160).f_T))).f_BASE;
{ R26 rv2163 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_2160).f_C, r_INT_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_2162);
return rv2163; }
}
}
else if (r_TEQS(l_NAME_2116, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2164 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2164; }
}
else if (r_TEQS(l_NAME_2116, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2165 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv2165; }
}
else if (((r_TEQS(l_NAME_2116, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_2116, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_2116, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R9 l_BITS_2166; memset(&l_BITS_2166, 0, sizeof l_BITS_2166);
S_R9(&l_BITS_2166, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_2116, rt_str("OCT_OF", 6)))
{
S_R9(&l_BITS_2166, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_2116, rt_str("HEX_OF", 6)))
{
S_R9(&l_BITS_2166, r_MK(rt_str("4", 1)), 0);
}
{
R26 l_V_2167; memset(&l_V_2167, 0, sizeof l_V_2167);
S_R26(&l_V_2167, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2167).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_2117, rt_str("a character string expected by ", 31), l_NAME_2116);
}
r_ASCII_ONLY((l_V_2167).f_T, r_STR(l_NAME_2116, (l_NAME_2116).f_LEN), l_LINE_2117);
{ R26 rv2168 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (l_V_2167).f_C, l_BITS_2166), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv2168; }
}
}
}
else if ((r_TEQS(l_NAME_2116, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_2116, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R23 l_S_2169; memset(&l_S_2169, 0, sizeof l_S_2169);
S_R23(&l_S_2169, r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_A, rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_2170; memset(&l_R_2170, 0, sizeof l_R_2170);
S_R23(&l_R_2170, r_MANIFEST_INTEGER_ARG(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
if ((!((l_R_2170).f_V == ((rt_int)2LL))))
{
r_FAIL(l_LINE_2117, rt_str("only radix 2 is predefined (3.2.6.3)", 36));
}
r_CHECK_PRECISION_ARG(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_2117);
if (r_TEQS(l_NAME_2116, rt_str("FIXED_MIN", 9)))
{
{ R26 rv2171 = r_MKET(r_STD_MIN_C(), r_INT_TYPE((l_S_2169).f_V));
return rv2171; }
}
{ R26 rv2172 = r_MKET(r_STD_MAX_C(), r_INT_TYPE((l_S_2169).f_V));
return rv2172; }
}
}
else if (((r_TEQS(l_NAME_2116, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_2116, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_2116, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R23 l_P_2173; memset(&l_P_2173, 0, sizeof l_P_2173);
S_R23(&l_P_2173, r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_T_2174; memset(&l_T_2174, 0, sizeof l_T_2174);
l_T_2174 = r_FLOAT_TYPE((l_P_2173).f_V);
R9 l_C_2175; memset(&l_C_2175, 0, sizeof l_C_2175);
S_R9(&l_C_2175, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF((l_P_2173).f_V) == ((rt_int)7LL)))
{
S_R9(&l_C_2175, r_MK(rt_str("FLT", 3)), 0);
}
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
if (r_TEQS(l_C_2175, rt_str("FLT", 3)))
{
S_R9(&l_C_2175, r_MK(rt_str("0x1.fffffep+126", 15)), 0);
}
else
{
S_R9(&l_C_2175, r_MK(rt_str("0x1.fffffffffffffp+126", 22)), 0);
}
if (r_TEQS(l_NAME_2116, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv2176 = r_MKET(r_FMT1(rt_str("(-@)", 4), l_C_2175), l_T_2174);
return rv2176; }
}
else if (r_TEQS(l_NAME_2116, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv2177 = r_MKET(l_C_2175, l_T_2174);
return rv2177; }
}
S_R9(&l_C_2175, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF((l_P_2173).f_V) == ((rt_int)7LL)))
{
S_R9(&l_C_2175, r_MK(rt_str("FLT", 3)), 0);
}
}
if (r_TEQS(l_NAME_2116, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv2178 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_2175), l_T_2174);
return rv2178; }
}
else if (r_TEQS(l_NAME_2116, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv2179 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_2175), l_T_2174);
return rv2179; }
}
{ R26 rv2180 = r_MKET(r_FMT1(rt_str("@_EPSILON", 9), l_C_2175), l_T_2174);
return rv2180; }
}
}
else if (r_TEQS(l_NAME_2116, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2181 = r_INT_ET(r_IMP_PRECISION_OF((r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION())).f_V));
return rv2181; }
}
else if (r_TEQS(l_NAME_2116, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2182 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2182; }
}
else if (r_TEQS(l_NAME_2116, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2183 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2183; }
}
if (r_TEQS(l_NAME_2116, rt_str("RUN_PATHS", 9)))
{
{ R26 rv2184 = r_RUN_PATHS(p_E);
return rv2184; }
}
{ R26 rv2185 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv2185; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_2186; memset(&l_T_2186, 0, sizeof l_T_2186);
l_T_2186 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_2187; memset(&l_K_2187, 0, sizeof l_K_2187);
l_K_2187 = ((*(R22 *)rt_nil_check(l_T_2186))).f_KIND;
R22 * l_S_2188; memset(&l_S_2188, 0, sizeof l_S_2188);
l_S_2188 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_2187 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_2186))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv2189 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_2188);
return rv2189; }
}
{ R26 rv2190 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_2186))).f_SCALE)), l_S_2188);
return rv2190; }
}
else if ((l_K_2187 == g_T_FLOAT))
{
{ R26 rv2191 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_2186))).f_SCALE)), l_S_2188);
return rv2191; }
}
else if ((l_K_2187 == g_T_BOOL))
{
{ R26 rv2192 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_2188);
return rv2192; }
}
else if ((l_K_2187 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_2186))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv2193 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_2188);
return rv2193; }
}
{ R26 rv2194 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2186))).f_BASE))).f_CNAME, (p_V).f_C), l_S_2188);
return rv2194; }
}
else if (((l_K_2187 == g_T_STR) || (l_K_2187 == g_T_BITS)))
{
{ R26 rv2195 = r_MKET((p_V).f_C, l_S_2188);
return rv2195; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_2186));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R17 * p_E) { RT_B_TICK(); 
R26 l_V_2196; memset(&l_V_2196, 0, sizeof l_V_2196);
S_R26(&l_V_2196, r_EXPR(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_2197; memset(&l_T_2197, 0, sizeof l_T_2197);
l_T_2197 = r_REAL_TYPE((l_V_2196).f_T);
rt_int l_N_2198; memset(&l_N_2198, 0, sizeof l_N_2198);
l_N_2198 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A);
R9 l_RND_2199; memset(&l_RND_2199, 0, sizeof l_RND_2199);
S_R9(&l_RND_2199, r_ROUNDING_ARG(p_E, l_N_2198), 0);
rt_int l_S_2200; memset(&l_S_2200, 0, sizeof l_S_2200);
l_S_2200 = ((rt_int)0LL);
if (((l_N_2198 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
l_S_2200 = (r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL))).f_V;
}
{
rt_int l_K_2201; memset(&l_K_2201, 0, sizeof l_K_2201);
l_K_2201 = ((rt_int)2LL);
for (;;) {
if ((l_K_2201 >= l_N_2198)) goto L_end2202;
{
{
R17 * l_R_2203; memset(&l_R_2203, 0, sizeof l_R_2203);
l_R_2203 = r_ARG_EXPR(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, l_K_2201));
if ((r_IS_ROUNDING(l_R_2203) || (((((*(R17 *)rt_nil_check(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, l_K_2201)))).f_KIND == g_N_QUAL) && (l_K_2201 == rt_sub(l_N_2198, ((rt_int)1LL)))))))
{
if ((!(l_K_2201 == rt_sub(l_N_2198, ((rt_int)1LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the rounding mode is the last argument of TO_FIXED (3.2.6.1)", 60));
}
}
else if (((((((*(R17 *)rt_nil_check(l_R_2203))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_2203))).f_KIND == g_N_ENUMLIT))) && (!r_NAMES_OBJECT(((*(R17 *)rt_nil_check(l_R_2203))).f_NAME))))
{
r_CHECK_PRECISION_ARG(l_R_2203, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
else if (((((*(R17 *)rt_nil_check(l_R_2203))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(l_R_2203))).f_NAME, rt_str("PRECISION", 9))))
{
}
else
{
if ((!((r_MANIFEST_INTEGER_ARG(l_R_2203, rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL))).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 is predefined (3.2.6.1)", 36));
}
}
}
l_K_2201 = rt_add(l_K_2201, ((rt_int)1LL));
}
RT_B_TICK();
} L_end2202: ;
}
if (((((*(R22 *)rt_nil_check(l_T_2197))).f_KIND == g_T_INT) && (((((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) || (((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_INT)))))
{
{ R26 rv2204 = r_MKET(r_FMT3(rt_str("rt_b_fix_val(@, @, @)", 21), r_CSTRING(((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_NAME), r_NUM(l_S_2200), l_RND_2199), r_INT_TYPE(l_S_2200));
return rv2204; }
}
if ((((*(R22 *)rt_nil_check(l_T_2197))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_2205; memset(&l_SAVED_2205, 0, sizeof l_SAVED_2205);
l_SAVED_2205 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R9 l_C_2206; memset(&l_C_2206, 0, sizeof l_C_2206);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_2199, rt_str("1", 1));
S_R9(&l_C_2206, r_RESCALE_C((l_V_2196).f_C, ((*(R22 *)rt_nil_check(l_T_2197))).f_SCALE, l_S_2200), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_2205;
{ R26 rv2207 = r_MKET(l_C_2206, r_INT_TYPE(l_S_2200));
return rv2207; }
}
}
else if ((((*(R22 *)rt_nil_check(l_T_2197))).f_KIND == g_T_FLOAT))
{
{ R26 rv2208 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_2196).f_C, r_NUM(l_S_2200), l_RND_2199), r_INT_TYPE(l_S_2200));
return rv2208; }
}
else if (((((*(R22 *)rt_nil_check(l_T_2197))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_2197))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_2197))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_2197))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_2197))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2197))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv2209 = r_MKET(r_RESCALE_C((l_V_2196).f_C, ((rt_int)0LL), l_S_2200), r_INT_TYPE(l_S_2200));
return rv2209; }
}
else if ((((*(R22 *)rt_nil_check(l_T_2197))).f_KIND == g_T_BITS))
{
{ R26 rv2210 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_2196).f_C), ((rt_int)0LL), l_S_2200), r_INT_TYPE(l_S_2200));
return rv2210; }
}
else if ((((*(R22 *)rt_nil_check(l_T_2197))).f_KIND == g_T_STR))
{
r_ASCII_ONLY(l_T_2197, rt_str("TO_FIXED", 8), ((*(R17 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv2211 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_2196).f_C, r_NUM(l_S_2200), l_RND_2199), r_INT_TYPE(l_S_2200));
return rv2211; }
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_2196).f_T));
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_SIZE_OR(R22 * p_T) { RT_B_TICK(); 
R23 l_M_2212; memset(&l_M_2212, 0, sizeof l_M_2212);
S_R23(&l_M_2212, r_STATIC_SIZE(p_T), 0);
if ((l_M_2212).f_OK)
{
{ rt_int rv2213 = (l_M_2212).f_V;
return rv2213; }
}
{ rt_int rv2214 = rt_neg(((rt_int)1LL));
return rv2214; }
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_2215; memset(&l_T_2215, 0, sizeof l_T_2215);
l_T_2215 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_2216; memset(&l_K_2216, 0, sizeof l_K_2216);
l_K_2216 = ((*(R22 *)rt_nil_check(l_T_2215))).f_KIND;
if ((l_K_2216 == g_T_BITS))
{
{ R26 rv2217 = p_V;
return rv2217; }
}
else if ((l_K_2216 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_2215))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2215))).f_REPS))).f_B == NULL)))
{
{ R26 rv2218 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_2215)), r_BITS_TYPE(r_ENUM_SIZE(l_T_2215)));
return rv2218; }
}
}
{ R26 rv2219 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_2215))), r_BITS_TYPE(r_ENUM_SIZE(l_T_2215)));
return rv2219; }
}
else if ((l_K_2216 == g_T_STR))
{
{ R26 rv2220 = r_MKET(r_FMT4(rt_str("rt_b_bits_of_chars(@, @, @, @)", 30), (p_V).f_C, r_NUM(r_CHAR_SIZE(l_T_2215)), r_NUM(r_PACKING_OF(l_T_2215)), r_CHAR_REPS(l_T_2215)), r_BITS_TYPE(r_STATIC_SIZE_OR(l_T_2215)));
return rv2220; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_2216 == g_T_INT))
{
{ R26 rv2221 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(((*(R7 *)rt_nil_check(g_W))).f_WORD)), r_BITS_TYPE(((*(R7 *)rt_nil_check(g_W))).f_WORD));
return rv2221; }
}
else if ((l_K_2216 == g_T_BOOL))
{
{ R26 rv2222 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv2222; }
}
else if ((l_K_2216 == g_T_FLOAT))
{
{ R26 rv2223 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv2223; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_2215));
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
{ rt_int rv2224 = 0;
return rv2224; }
}
{ rt_int rv2225 = ((r_IS_LITERALISH(((*(R27 *)rt_nil_check(p_A))).f_E) || (((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv2225; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R27 * p_A) { RT_B_TICK(); 
rt_int l_N_2226; memset(&l_N_2226, 0, sizeof l_N_2226);
l_N_2226 = ((rt_int)0LL);
R27 * l_P_2227; memset(&l_P_2227, 0, sizeof l_P_2227);
l_P_2227 = p_A;
for (;;) {
if ((l_P_2227 == NULL)) goto L_end2228;
{
l_N_2226 = rt_add(l_N_2226, ((rt_int)1LL));
l_P_2227 = ((*(R27 *)rt_nil_check(l_P_2227))).f_NEXT;
}
RT_B_TICK();
} L_end2228: ;
{ rt_int rv2229 = l_N_2226;
return rv2229; }
rt_raise(RT_X_INIT);
}
static R27 * r_CALL_ARGS(R17 * p_E) { RT_B_TICK(); 
R27 * l_HEAD_2230; memset(&l_HEAD_2230, 0, sizeof l_HEAD_2230);
l_HEAD_2230 = NULL;
R27 * l_TAIL_2231; memset(&l_TAIL_2231, 0, sizeof l_TAIL_2231);
l_TAIL_2231 = NULL;
rt_int l_G_2232; memset(&l_G_2232, 0, sizeof l_G_2232);
l_G_2232 = ((rt_int)0LL);
{ rt_int it2234_lo = ((rt_int)0LL), it2234_hi = ((rt_int)2LL);
for (rt_int it2234 = it2234_lo; it2234 <= it2234_hi; it2234++) {
{
{
R17 * l_P_2235; memset(&l_P_2235, 0, sizeof l_P_2235);
l_P_2235 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((it2234 == ((rt_int)1LL)))
{
l_P_2235 = ((*(R17 *)rt_nil_check(p_E))).f_B;
}
else if ((it2234 == ((rt_int)2LL)))
{
l_P_2235 = ((*(R17 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_2235 == NULL)) goto L_end2236;
{
{
R27 * l_A_2237; memset(&l_A_2237, 0, sizeof l_A_2237);
l_A_2237 = r_NODE_ARG(l_P_2235, it2234, NULL);
if ((l_TAIL_2231 == NULL))
{
l_HEAD_2230 = l_A_2237;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2231))).f_NEXT = l_A_2237;
}
l_TAIL_2231 = l_A_2237;
}
l_P_2235 = ((*(R17 *)rt_nil_check(l_P_2235))).f_NEXT;
}
RT_B_TICK();
} L_end2236: ;
}
}
RT_B_TICK();
if (it2234 == it2234_hi) break;
} } L_end2233: ;
{ R27 * rv2238 = l_HEAD_2230;
return rv2238; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SAVED_2239; memset(&l_SAVED_2239, 0, sizeof l_SAVED_2239);
l_SAVED_2239 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_2240; memset(&l_SAVED_Q_2240, 0, sizeof l_SAVED_Q_2240);
l_SAVED_Q_2240 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_2241; memset(&l_V_2241, 0, sizeof l_V_2241);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_2241, r_CALL_EXPR1(p_E, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_2239;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_2240;
{ R26 rv2242 = l_V_2241;
return rv2242; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR1(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R27 * l_ARGS_2243; memset(&l_ARGS_2243, 0, sizeof l_ARGS_2243);
l_ARGS_2243 = r_CALL_ARGS(p_E);
R12 * l_Y_2244; memset(&l_Y_2244, 0, sizeof l_Y_2244);
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv2245 = r_START_IO_CALL(p_E);
return rv2245; }
}
l_Y_2244 = r_BOUND_ROUTINE(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2244 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2244))).f_KIND == g_Y_BUILTIN))
{
{
R17 * l_N_2246; memset(&l_N_2246, 0, sizeof l_N_2246);
l_N_2246 = r_COPY_NODE(p_E);
S_R9(&((*(R17 *)rt_nil_check(l_N_2246))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2244))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2246))).f_NEXT = ((*(R17 *)rt_nil_check(p_E))).f_NEXT;
{ R26 rv2247 = r_BUILTIN(l_N_2246, p_WANT);
return rv2247; }
}
}
{ R26 rv2248 = r_CALL_SYM(l_Y_2244, l_ARGS_2243, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv2248; }
}
{
R9 l_SHORT_2249; memset(&l_SHORT_2249, 0, sizeof l_SHORT_2249);
S_R9(&l_SHORT_2249, r_WHERE_SHORT_NAME(((*(R17 *)rt_nil_check(p_E))).f_NAME), 0);
if ((!r_TEQ(l_SHORT_2249, ((*(R17 *)rt_nil_check(p_E))).f_NAME)))
{
{
R17 * l_N_2250; memset(&l_N_2250, 0, sizeof l_N_2250);
l_N_2250 = r_COPY_NODE(p_E);
S_R9(&((*(R17 *)rt_nil_check(l_N_2250))).f_NAME, l_SHORT_2249, 0);
((*(R17 *)rt_nil_check(l_N_2250))).f_NEXT = ((*(R17 *)rt_nil_check(p_E))).f_NEXT;
{ R26 rv2251 = r_CALL_EXPR1(l_N_2250, p_WANT);
return rv2251; }
}
}
}
l_Y_2244 = r_FIND_ROUTINE(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2243, ((*(R17 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_2244 == NULL))
{
{
R12 * l_P_2252; memset(&l_P_2252, 0, sizeof l_P_2252);
l_P_2252 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_2252 == NULL)) goto L_end2253;
{
if ((((*(R12 *)rt_nil_check(l_P_2252))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv2254 = r_BUILTIN(p_E, p_WANT);
return rv2254; }
}
l_P_2252 = r_LOOKUP_NEXT(l_P_2252);
}
RT_B_TICK();
} L_end2253: ;
}
{
R12 * l_B_2255; memset(&l_B_2255, 0, sizeof l_B_2255);
l_B_2255 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_2255 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_2255))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv2256 = r_BUILTIN(p_E, p_WANT);
return rv2256; }
}
if (((((*(R12 *)rt_nil_check(l_B_2255))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_2255))).f_ORIG == NULL))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
}
{
R9 l_BASE_2257; memset(&l_BASE_2257, 0, sizeof l_BASE_2257);
S_R9(&l_BASE_2257, r_CLASS_OPERATION(((*(R17 *)rt_nil_check(p_E))).f_NAME), 0);
if (((l_BASE_2257).f_LEN > ((rt_int)0LL)))
{
{
R17 * l_N_2258; memset(&l_N_2258, 0, sizeof l_N_2258);
l_N_2258 = r_COPY_NODE(p_E);
S_R9(&((*(R17 *)rt_nil_check(l_N_2258))).f_NAME, l_BASE_2257, 0);
{ R26 rv2259 = r_BUILTIN(l_N_2258, p_WANT);
return rv2259; }
}
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv2260 = r_CALL_SYM(l_Y_2244, l_ARGS_2243, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv2260; }
rt_raise(RT_X_INIT);
}
static R9 r_CLASS_OPERATION(R9 p_NAME) { RT_B_TICK(); 
rstr l_S_2261; memset(&l_S_2261, 0, sizeof l_S_2261);
l_S_2261 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2261, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2263_lo = ((rt_int)1LL), it2263_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2263 = it2263_lo; it2263 <= it2263_hi; it2263++) {
{
if (rt_b_eq(rt_b_slice(l_S_2261, it2263, it2263), rt_str("$", 1)))
{
{
R9 l_P_2264; memset(&l_P_2264, 0, sizeof l_P_2264);
S_R9(&l_P_2264, r_MKN(rt_b_slice(l_S_2261, ((rt_int)0LL), rt_sub(it2263, ((rt_int)1LL)))), 0);
R9 l_B_2265; memset(&l_B_2265, 0, sizeof l_B_2265);
S_R9(&l_B_2265, r_MKN(rt_b_slice(l_S_2261, rt_add(it2263, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))), 0);
if ((((((((r_IS_TYPE_WORD(l_P_2264) || r_TEQS(l_P_2264, rt_str("INTEGER", 7))) || r_TEQS(l_P_2264, rt_str("BOOLEAN", 7))) || r_TEQS(l_P_2264, rt_str("ENUM", 4))) || r_TEQS(l_P_2264, rt_str("ARRAY", 5))) || r_TEQS(l_P_2264, rt_str("RECORD", 6))) || r_TEQS(l_P_2264, rt_str("PTR", 3))) || r_TEQS(l_P_2264, rt_str("SEMAPHORE", 9))))
{
{
R12 * l_Y_2266; memset(&l_Y_2266, 0, sizeof l_Y_2266);
l_Y_2266 = r_LOOKUP(l_B_2265);
for (;;) {
if ((l_Y_2266 == NULL)) goto L_end2267;
{
if ((((*(R12 *)rt_nil_check(l_Y_2266))).f_KIND == g_Y_BUILTIN))
{
{ R9 rv2268 = l_B_2265;
return rv2268; }
}
l_Y_2266 = r_LOOKUP_NEXT(l_Y_2266);
}
RT_B_TICK();
} L_end2267: ;
}
}
}
{ R9 rv2269 = r_NO_TEXT();
return rv2269; }
}
}
RT_B_TICK();
if (it2263 == it2263_hi) break;
} } L_end2262: ;
{ R9 rv2270 = r_NO_TEXT();
return rv2270; }
rt_raise(RT_X_INIT);
}
static R9 r_WHERE_SHORT_NAME(R9 p_NAME) { RT_B_TICK(); 
R12 * l_G_2271; memset(&l_G_2271, 0, sizeof l_G_2271);
l_G_2271 = r_CUR_GENERIC();
rstr l_S_2272; memset(&l_S_2272, 0, sizeof l_S_2272);
l_S_2272 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2272, r_STR(p_NAME, (p_NAME).f_LEN));
if ((l_G_2271 == NULL))
{
{ R9 rv2273 = p_NAME;
return rv2273; }
}
{ rt_int it2275_lo = ((rt_int)1LL), it2275_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2275 = it2275_lo; it2275 <= it2275_hi; it2275++) {
{
if (rt_b_eq(rt_b_slice(l_S_2272, it2275, it2275), rt_str("$", 1)))
{
if (((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_G_2271))).f_BINDINGS, r_MKN(rt_b_slice(l_S_2272, ((rt_int)0LL), rt_sub(it2275, ((rt_int)1LL))))) == NULL)) && r_IN_WHERE(l_G_2271, r_MKN(rt_b_slice(l_S_2272, rt_add(it2275, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))))))
{
{ R9 rv2276 = r_MKN(rt_b_slice(l_S_2272, rt_add(it2275, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))));
return rv2276; }
}
{ R9 rv2277 = p_NAME;
return rv2277; }
}
}
RT_B_TICK();
if (it2275 == it2275_hi) break;
} } L_end2274: ;
{ R9 rv2278 = p_NAME;
return rv2278; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R9 p_NAME) { RT_B_TICK(); 
R21 * l_B_2279; memset(&l_B_2279, 0, sizeof l_B_2279);
l_B_2279 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_2280; memset(&l_S_2280, 0, sizeof l_S_2280);
l_S_2280 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2280, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2282_lo = ((rt_int)1LL), it2282_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2282 = it2282_lo; it2282 <= it2282_hi; it2282++) {
{
if (rt_b_eq(rt_b_slice(l_S_2280, it2282, it2282), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_2280, ((rt_int)0LL), rt_sub(it2282, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv2283 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_2280, rt_add(it2282, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv2283; }
}
goto L_end2281;
}
}
RT_B_TICK();
if (it2282 == it2282_hi) break;
} } L_end2281: ;
}
for (;;) {
if ((l_B_2279 == NULL)) goto L_end2284;
{
if (((!(((*(R21 *)rt_nil_check(l_B_2279))).f_R == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_B_2279))).f_NAME, p_NAME)))
{
{ R12 * rv2285 = ((*(R21 *)rt_nil_check(l_B_2279))).f_R;
return rv2285; }
}
l_B_2279 = ((*(R21 *)rt_nil_check(l_B_2279))).f_NEXT;
}
RT_B_TICK();
} L_end2284: ;
{ R12 * rv2286 = NULL;
return rv2286; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R9 p_NAME) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv2287 = 0;
return rv2287; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv2288 = 0;
return rv2288; }
}
}
}
{ rt_int rv2289 = 1;
return rv2289; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R9 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { RT_B_TICK(); 
R12 * l_Y_2290; memset(&l_Y_2290, 0, sizeof l_Y_2290);
l_Y_2290 = r_LOOKUP(p_NAME);
R12 * l_BEST_2291; memset(&l_BEST_2291, 0, sizeof l_BEST_2291);
l_BEST_2291 = NULL;
rt_int l_BEST_SCORE_2292; memset(&l_BEST_SCORE_2292, 0, sizeof l_BEST_SCORE_2292);
l_BEST_SCORE_2292 = ((rt_int)0LL);
rt_int l_TIES_2293; memset(&l_TIES_2293, 0, sizeof l_TIES_2293);
l_TIES_2293 = ((rt_int)0LL);
rt_int l_COUNT_2294; memset(&l_COUNT_2294, 0, sizeof l_COUNT_2294);
l_COUNT_2294 = ((rt_int)0LL);
rt_int l_N_2295; memset(&l_N_2295, 0, sizeof l_N_2295);
l_N_2295 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_2290 == NULL)) goto L_end2296;
{
if ((!r_IS_ROUTINE(l_Y_2290)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2290))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end2296;
}
}
else if (r_CANDIDATE(l_Y_2290, p_NAME))
{
{
R12 * l_R_2297; memset(&l_R_2297, 0, sizeof l_R_2297);
l_R_2297 = r_ORIGINAL(l_Y_2290);
rt_int l_SCORE_2298; memset(&l_SCORE_2298, 0, sizeof l_SCORE_2298);
r_ROUTINE_HEADER(l_R_2297);
if ((((r_PARAM_COUNT(l_R_2297) == l_N_2295) && (!r_SEEN_ROUTINE(l_R_2297, p_NAME, l_Y_2290))) && (!r_HIDDEN_ROUTINE(l_R_2297, p_NAME, l_Y_2290))))
{
l_COUNT_2294 = rt_add(l_COUNT_2294, ((rt_int)1LL));
l_SCORE_2298 = r_MATCH_SCORE(l_R_2297, p_ARGS);
if ((l_SCORE_2298 > l_BEST_SCORE_2292))
{
l_BEST_2291 = l_R_2297;
l_BEST_SCORE_2292 = l_SCORE_2298;
l_TIES_2293 = ((rt_int)0LL);
}
else if (((l_SCORE_2298 == l_BEST_SCORE_2292) && (l_SCORE_2298 > ((rt_int)0LL))))
{
l_TIES_2293 = rt_add(l_TIES_2293, ((rt_int)1LL));
}
}
}
}
l_Y_2290 = r_LOOKUP_NEXT(l_Y_2290);
}
RT_B_TICK();
} L_end2296: ;
if (((l_TIES_2293 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv2299 = l_BEST_2291;
return rv2299; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R9 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2300; memset(&l_Y_2300, 0, sizeof l_Y_2300);
l_Y_2300 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2300 == p_STOP) || (l_Y_2300 == NULL))) goto L_end2301;
{
if ((((*(R12 *)rt_nil_check(l_Y_2300))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_2300) == p_R))
{
{ rt_int rv2302 = 1;
return rv2302; }
}
}
l_Y_2300 = r_LOOKUP_NEXT(l_Y_2300);
}
RT_B_TICK();
} L_end2301: ;
{ rt_int rv2303 = 0;
return rv2303; }
rt_raise(RT_X_INIT);
}
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R9 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2304; memset(&l_Y_2304, 0, sizeof l_Y_2304);
l_Y_2304 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2304 == p_STOP) || (l_Y_2304 == NULL))) goto L_end2305;
{
if (((((*(R12 *)rt_nil_check(l_Y_2304))).f_KIND == g_Y_ROUTINE) && (((*(R12 *)rt_nil_check(l_Y_2304))).f_DEPTH > ((*(R12 *)rt_nil_check(p_STOP))).f_DEPTH)))
{
{
R12 * l_O_2306; memset(&l_O_2306, 0, sizeof l_O_2306);
l_O_2306 = r_ORIGINAL(l_Y_2304);
if ((!(l_O_2306 == p_R)))
{
r_ROUTINE_HEADER(l_O_2306);
if (r_SAME_SIGNATURE(l_O_2306, p_R))
{
{ rt_int rv2307 = 1;
return rv2307; }
}
}
}
}
l_Y_2304 = r_LOOKUP_NEXT(l_Y_2304);
}
RT_B_TICK();
} L_end2305: ;
{ rt_int rv2308 = 0;
return rv2308; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B) { RT_B_TICK(); 
R28 * l_P_2309; memset(&l_P_2309, 0, sizeof l_P_2309);
l_P_2309 = ((*(R12 *)rt_nil_check(p_A))).f_PARAMS;
R28 * l_Q_2310; memset(&l_Q_2310, 0, sizeof l_Q_2310);
l_Q_2310 = ((*(R12 *)rt_nil_check(p_B))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_A))).f_GENERIC || ((*(R12 *)rt_nil_check(p_B))).f_GENERIC))
{
{ rt_int rv2311 = 0;
return rv2311; }
}
for (;;) {
if (((l_P_2309 == NULL) || (l_Q_2310 == NULL))) goto L_end2312;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2309))).f_MODE == ((*(R28 *)rt_nil_check(l_Q_2310))).f_MODE)))
{
{ rt_int rv2313 = 0;
return rv2313; }
}
if (((((*(R28 *)rt_nil_check(l_P_2309))).f_T == NULL) || (((*(R28 *)rt_nil_check(l_Q_2310))).f_T == NULL)))
{
if ((!(((*(R28 *)rt_nil_check(l_P_2309))).f_T == ((*(R28 *)rt_nil_check(l_Q_2310))).f_T)))
{
{ rt_int rv2314 = 0;
return rv2314; }
}
}
else if ((!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_2309))).f_T, ((*(R28 *)rt_nil_check(l_Q_2310))).f_T)))
{
{ rt_int rv2315 = 0;
return rv2315; }
}
l_P_2309 = ((*(R28 *)rt_nil_check(l_P_2309))).f_NEXT;
l_Q_2310 = ((*(R28 *)rt_nil_check(l_Q_2310))).f_NEXT;
}
RT_B_TICK();
} L_end2312: ;
{ rt_int rv2316 = ((l_P_2309 == NULL) && (l_Q_2310 == NULL));
return rv2316; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { RT_B_TICK(); 
rt_int l_N_2317; memset(&l_N_2317, 0, sizeof l_N_2317);
l_N_2317 = ((rt_int)0LL);
R28 * l_P_2318; memset(&l_P_2318, 0, sizeof l_P_2318);
l_P_2318 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_2318 == NULL)) goto L_end2319;
{
l_N_2317 = rt_add(l_N_2317, ((rt_int)1LL));
l_P_2318 = ((*(R28 *)rt_nil_check(l_P_2318))).f_NEXT;
}
RT_B_TICK();
} L_end2319: ;
{ rt_int rv2320 = l_N_2317;
return rv2320; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS) { RT_B_TICK(); 
R28 * l_P_2321; memset(&l_P_2321, 0, sizeof l_P_2321);
l_P_2321 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R27 * l_A_2322; memset(&l_A_2322, 0, sizeof l_A_2322);
l_A_2322 = p_ARGS;
rt_int l_EXACT_2323; memset(&l_EXACT_2323, 0, sizeof l_EXACT_2323);
l_EXACT_2323 = 1;
R21 * l_BS_2324; memset(&l_BS_2324, 0, sizeof l_BS_2324);
l_BS_2324 = r_NEW_BINDS();
R22 * l_PT_2325; memset(&l_PT_2325, 0, sizeof l_PT_2325);
for (;;) {
if ((l_P_2321 == NULL)) goto L_end2326;
{
l_PT_2325 = r_FORMAL_VIEW(p_R, l_P_2321);
if ((!(((*(R28 *)rt_nil_check(l_P_2321))).f_MODE == ((*(R27 *)rt_nil_check(l_A_2322))).f_MODE)))
{
{ rt_int rv2327 = ((rt_int)0LL);
return rv2327; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R28 *)rt_nil_check(l_P_2321))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_2321, l_A_2322, l_BS_2324)))
{
{ rt_int rv2328 = ((rt_int)0LL);
return rv2328; }
}
}
else if ((l_PT_2325 == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2322))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_A_2322))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv2329 = ((rt_int)0LL);
return rv2329; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_2322))
{
if ((!r_LITERAL_FITS(((*(R27 *)rt_nil_check(l_A_2322))).f_E, l_PT_2325)))
{
{ rt_int rv2330 = ((rt_int)0LL);
return rv2330; }
}
}
else
{
r_TYPE_ARG(l_A_2322);
{
R22 * l_AT_2331; memset(&l_AT_2331, 0, sizeof l_AT_2331);
l_AT_2331 = (((*(R27 *)rt_nil_check(l_A_2322))).f_V).f_T;
if ((!((r_SAME_CLASS(l_PT_2325, l_AT_2331) || (((((*(R22 *)rt_nil_check(l_AT_2331))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2325)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv2332 = ((rt_int)0LL);
return rv2332; }
}
if ((((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2325)))).f_GEN).f_LEN > ((rt_int)0LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2331)))).f_MLEN).f_OK))
{
{
R9 l_KEY_2333; memset(&l_KEY_2333, 0, sizeof l_KEY_2333);
S_R9(&l_KEY_2333, r_MKN(rt_b_cat(rt_str("%", 1), r_STR(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2325)))).f_GEN, (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2325)))).f_GEN).f_LEN))), 0);
R21 * l_B_2334; memset(&l_B_2334, 0, sizeof l_B_2334);
l_B_2334 = r_FIND_BIND(((*(R21 *)rt_nil_check(l_BS_2324))).f_NEXT, l_KEY_2333);
if ((!(l_B_2334 == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(l_B_2334))).f_MV == (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2331)))).f_MLEN).f_V)))
{
{ rt_int rv2335 = ((rt_int)0LL);
return rv2335; }
}
}
else
{
r_ADD_BIND(l_KEY_2333, NULL, ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2331)))).f_MLEN, NULL, l_BS_2324);
}
}
}
if ((!r_SAME_TYPE(l_PT_2325, l_AT_2331)))
{
if ((((*(R28 *)rt_nil_check(l_P_2321))).f_MODE == g_M_INOUT))
{
{ rt_int rv2336 = ((rt_int)0LL);
return rv2336; }
}
l_EXACT_2323 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2331)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2325)))).f_KIND == g_T_INT)))
{
if (((((*(R28 *)rt_nil_check(l_P_2321))).f_MODE == g_M_IN) && (((*(R22 *)rt_nil_check(l_AT_2331))).f_SCALE > ((*(R22 *)rt_nil_check(l_PT_2325))).f_SCALE)))
{
{ rt_int rv2337 = ((rt_int)0LL);
return rv2337; }
}
else if (((((*(R28 *)rt_nil_check(l_P_2321))).f_MODE == g_M_OUT) && (((*(R22 *)rt_nil_check(l_PT_2325))).f_SCALE > ((*(R22 *)rt_nil_check(l_AT_2331))).f_SCALE)))
{
{ rt_int rv2338 = ((rt_int)0LL);
return rv2338; }
}
}
}
}
l_P_2321 = ((*(R28 *)rt_nil_check(l_P_2321))).f_NEXT;
l_A_2322 = ((*(R27 *)rt_nil_check(l_A_2322))).f_NEXT;
}
RT_B_TICK();
} L_end2326: ;
if (l_EXACT_2323)
{
{ rt_int rv2339 = ((rt_int)2LL);
return rv2339; }
}
{ rt_int rv2340 = ((rt_int)1LL);
return rv2340; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R17 * p_E, R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_2341; memset(&l_RT_2341, 0, sizeof l_RT_2341);
l_RT_2341 = r_REAL_TYPE(p_T);
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_2341))).f_KIND == g_T_ENUM))
{
{ rt_int rv2342 = (!(r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_RT_2341) == NULL));
return rv2342; }
}
{ rt_int rv2343 = 0;
return rv2343; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv2344 = (((*(R22 *)rt_nil_check(l_RT_2341))).f_KIND == g_T_PTR);
return rv2344; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv2345 = (((*(R22 *)rt_nil_check(l_RT_2341))).f_KIND == g_T_REC);
return rv2345; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv2346 = (((*(R22 *)rt_nil_check(l_RT_2341))).f_KIND == g_T_ARR);
return rv2346; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv2347 = (((*(R22 *)rt_nil_check(l_RT_2341))).f_KIND == g_T_INT);
return rv2347; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv2348 = ((((*(R22 *)rt_nil_check(l_RT_2341))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_2341))).f_KIND == g_T_SEM));
return rv2348; }
}
{ rt_int rv2349 = 0;
return rv2349; }
rt_raise(RT_X_INIT);
}
static R12 * r_ARG_ROOT(R17 * p_E) { RT_B_TICK(); 
R17 * l_N_2350; memset(&l_N_2350, 0, sizeof l_N_2350);
l_N_2350 = p_E;
for (;;) {
if ((l_N_2350 == NULL)) goto L_end2351;
{
if (((((*(R17 *)rt_nil_check(l_N_2350))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_N_2350))).f_KIND == g_N_APPLY)))
{
{
R12 * l_Y_2352; memset(&l_Y_2352, 0, sizeof l_Y_2352);
l_Y_2352 = r_LOOKUP(((*(R17 *)rt_nil_check(l_N_2350))).f_NAME);
if ((l_Y_2352 == NULL))
{
{ R12 * rv2353 = NULL;
return rv2353; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2352))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2354 = NULL;
return rv2354; }
}
{ R12 * rv2355 = l_Y_2352;
return rv2355; }
}
}
else if (((((((*(R17 *)rt_nil_check(l_N_2350))).f_KIND == g_N_INDEX) || (((*(R17 *)rt_nil_check(l_N_2350))).f_KIND == g_N_FIELD)) || (((*(R17 *)rt_nil_check(l_N_2350))).f_KIND == g_N_SUBSTR)) || (((*(R17 *)rt_nil_check(l_N_2350))).f_KIND == g_N_PAREN)))
{
l_N_2350 = ((*(R17 *)rt_nil_check(l_N_2350))).f_A;
}
else
{
{ R12 * rv2356 = NULL;
return rv2356; }
}
}
RT_B_TICK();
} L_end2351: ;
{ R12 * rv2357 = NULL;
return rv2357; }
rt_raise(RT_X_INIT);
}
static R17 * r_PATH_OF(R17 * p_E) { RT_B_TICK(); 
R17 * l_N_2358; memset(&l_N_2358, 0, sizeof l_N_2358);
l_N_2358 = p_E;
R17 * l_P_2359; memset(&l_P_2359, 0, sizeof l_P_2359);
l_P_2359 = NULL;
for (;;) {
if ((l_N_2358 == NULL)) goto L_end2360;
{
if ((((*(R17 *)rt_nil_check(l_N_2358))).f_KIND == g_N_FIELD))
{
l_P_2359 = r_NAME_REF(((*(R17 *)rt_nil_check(l_N_2358))).f_NAME, ((rt_int)0LL), NULL, l_P_2359);
l_N_2358 = ((*(R17 *)rt_nil_check(l_N_2358))).f_A;
}
else if (((((*(R17 *)rt_nil_check(l_N_2358))).f_KIND == g_N_INDEX) || (((*(R17 *)rt_nil_check(l_N_2358))).f_KIND == g_N_SUBSTR)))
{
l_P_2359 = r_NAME_REF(r_MKN(rt_str("*", 1)), ((rt_int)0LL), NULL, l_P_2359);
l_N_2358 = ((*(R17 *)rt_nil_check(l_N_2358))).f_A;
}
else if ((((*(R17 *)rt_nil_check(l_N_2358))).f_KIND == g_N_APPLY))
{
l_P_2359 = r_NAME_REF(r_MKN(rt_str("*", 1)), ((rt_int)0LL), NULL, l_P_2359);
{ R17 * rv2361 = l_P_2359;
return rv2361; }
}
else if ((((*(R17 *)rt_nil_check(l_N_2358))).f_KIND == g_N_PAREN))
{
l_N_2358 = ((*(R17 *)rt_nil_check(l_N_2358))).f_A;
}
else
{
{ R17 * rv2362 = l_P_2359;
return rv2362; }
}
}
RT_B_TICK();
} L_end2360: ;
{ R17 * rv2363 = l_P_2359;
return rv2363; }
rt_raise(RT_X_INIT);
}
static rt_int r_DISJOINT_PATHS(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_P_2364; memset(&l_P_2364, 0, sizeof l_P_2364);
l_P_2364 = p_A;
R17 * l_Q_2365; memset(&l_Q_2365, 0, sizeof l_Q_2365);
l_Q_2365 = p_B;
for (;;) {
if (((l_P_2364 == NULL) || (l_Q_2365 == NULL))) goto L_end2366;
{
if ((((!r_TEQS(((*(R17 *)rt_nil_check(l_P_2364))).f_NAME, rt_str("*", 1))) && (!r_TEQS(((*(R17 *)rt_nil_check(l_Q_2365))).f_NAME, rt_str("*", 1)))) && (!r_TEQ(((*(R17 *)rt_nil_check(l_P_2364))).f_NAME, ((*(R17 *)rt_nil_check(l_Q_2365))).f_NAME))))
{
{ rt_int rv2367 = 1;
return rv2367; }
}
l_P_2364 = ((*(R17 *)rt_nil_check(l_P_2364))).f_NEXT;
l_Q_2365 = ((*(R17 *)rt_nil_check(l_Q_2365))).f_NEXT;
}
RT_B_TICK();
} L_end2366: ;
{ rt_int rv2368 = 0;
return rv2368; }
rt_raise(RT_X_INIT);
}
static void r_EXPLICIT_GENERIC_ARGS(R12 * p_Y, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_USED_2369; memset(&l_USED_2369, 0, sizeof l_USED_2369);
l_USED_2369 = NULL;
R28 * l_P_2370; memset(&l_P_2370, 0, sizeof l_P_2370);
l_P_2370 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
R27 * l_A_2371; memset(&l_A_2371, 0, sizeof l_A_2371);
l_A_2371 = p_ARGS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_DECL == NULL))
{
return;
}
if (((!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_B == NULL)))
{
return;
}
r_NAMES_IN(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_B, &l_USED_2369);
for (;;) {
if (((l_P_2370 == NULL) || (l_A_2371 == NULL))) goto L_end2372;
{
if ((((((*(R28 *)rt_nil_check(l_P_2370))).f_MODE == g_M_IN) && r_IN_IDENTS(l_USED_2369, ((*(R28 *)rt_nil_check(l_P_2370))).f_NAME)) && (!(((*(R27 *)rt_nil_check(l_A_2371))).f_E == NULL))))
{
if ((!r_CONSTANT_EXPR(((*(R27 *)rt_nil_check(l_A_2371))).f_E)))
{
r_FAILT(p_LINE, rt_str("the argument of an explicit generic parameter invokes only pure functions (5): ", 79), ((*(R28 *)rt_nil_check(l_P_2370))).f_NAME);
}
}
l_P_2370 = ((*(R28 *)rt_nil_check(l_P_2370))).f_NEXT;
l_A_2371 = ((*(R27 *)rt_nil_check(l_A_2371))).f_NEXT;
}
RT_B_TICK();
} L_end2372: ;
}
static void r_NAMES_IN(R17 * p_L, R17 * *p_HEAD) { RT_B_TICK(); 
R17 * l_N_2373; memset(&l_N_2373, 0, sizeof l_N_2373);
l_N_2373 = p_L;
for (;;) {
if ((l_N_2373 == NULL)) goto L_end2374;
{
if (((((*(R17 *)rt_nil_check(l_N_2373))).f_KIND == g_N_NAME) || (((((*(R17 *)rt_nil_check(l_N_2373))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(l_N_2373))).f_A == NULL)))))
{
(*p_HEAD) = r_NAME_REF(((*(R17 *)rt_nil_check(l_N_2373))).f_NAME, ((rt_int)0LL), NULL, (*p_HEAD));
}
r_NAMES_IN(((*(R17 *)rt_nil_check(l_N_2373))).f_A, &(*p_HEAD));
r_NAMES_IN(((*(R17 *)rt_nil_check(l_N_2373))).f_B, &(*p_HEAD));
r_NAMES_IN(((*(R17 *)rt_nil_check(l_N_2373))).f_C, &(*p_HEAD));
l_N_2373 = ((*(R17 *)rt_nil_check(l_N_2373))).f_NEXT;
}
RT_B_TICK();
} L_end2374: ;
}
static rt_int r_CONSTANT_EXPR(R17 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv2375 = 1;
return rv2375; }
}
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY)))
{
{
R12 * l_Y_2376; memset(&l_Y_2376, 0, sizeof l_Y_2376);
l_Y_2376 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2376 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2376))).f_KIND == g_Y_ROUTINE))
{
if ((!(((*(R12 *)rt_nil_check(r_ORIGINAL(l_Y_2376)))).f_USES == NULL)))
{
{ rt_int rv2377 = 0;
return rv2377; }
}
}
}
}
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD))
{
{ rt_int rv2378 = r_CONSTANT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A);
return rv2378; }
}
{ rt_int rv2379 = ((r_CONSTANT_LIST(((*(R17 *)rt_nil_check(p_E))).f_A) && r_CONSTANT_LIST(((*(R17 *)rt_nil_check(p_E))).f_B)) && r_CONSTANT_LIST(((*(R17 *)rt_nil_check(p_E))).f_C));
return rv2379; }
rt_raise(RT_X_INIT);
}
static rt_int r_CONSTANT_LIST(R17 * p_L) { RT_B_TICK(); 
R17 * l_N_2380; memset(&l_N_2380, 0, sizeof l_N_2380);
l_N_2380 = p_L;
for (;;) {
if ((l_N_2380 == NULL)) goto L_end2381;
{
if ((!r_CONSTANT_EXPR(l_N_2380)))
{
{ rt_int rv2382 = 0;
return rv2382; }
}
l_N_2380 = ((*(R17 *)rt_nil_check(l_N_2380))).f_NEXT;
}
RT_B_TICK();
} L_end2381: ;
{ rt_int rv2383 = 1;
return rv2383; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKED_ELEMENT(R17 * p_E) { RT_B_TICK(); 
R22 * l_AT_2384; memset(&l_AT_2384, 0, sizeof l_AT_2384);
l_AT_2384 = NULL;
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
{
R12 * l_Y_2385; memset(&l_Y_2385, 0, sizeof l_Y_2385);
l_Y_2385 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_2385 == NULL))
{
{ rt_int rv2386 = 0;
return rv2386; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2385))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(l_Y_2385))).f_T == NULL)))
{
{ rt_int rv2387 = 0;
return rv2387; }
}
l_AT_2384 = r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2385))).f_T);
}
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_INDEX))
{
{
R14 l_SAVED_CODE_2388; memset(&l_SAVED_CODE_2388, 0, sizeof l_SAVED_CODE_2388);
S_R14(&l_SAVED_CODE_2388, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
l_AT_2384 = r_REAL_TYPE((r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL)).f_T);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2388, 0);
}
}
else
{
{ rt_int rv2389 = 0;
return rv2389; }
}
if ((!(((*(R22 *)rt_nil_check(l_AT_2384))).f_KIND == g_T_ARR)))
{
{ rt_int rv2390 = 0;
return rv2390; }
}
{ rt_int rv2391 = (!(r_PACKING_OF(l_AT_2384) == ((rt_int)2LL)));
return rv2391; }
rt_raise(RT_X_INIT);
}
static void r_NO_ALIASING(R12 * p_Y, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_A_2392; memset(&l_A_2392, 0, sizeof l_A_2392);
l_A_2392 = p_ARGS;
for (;;) {
if ((l_A_2392 == NULL)) goto L_end2393;
{
if (((((*(R27 *)rt_nil_check(l_A_2392))).f_MODE == g_M_INOUT) && (!(((*(R27 *)rt_nil_check(l_A_2392))).f_E == NULL))))
{
if (r_PACKED_ELEMENT(((*(R27 *)rt_nil_check(l_A_2392))).f_E))
{
r_FAIL(p_LINE, rt_str("only elements of ARRAY_STD arrays are inout arguments (3.8.3)", 61));
}
}
l_A_2392 = ((*(R27 *)rt_nil_check(l_A_2392))).f_NEXT;
}
RT_B_TICK();
} L_end2393: ;
l_A_2392 = p_ARGS;
for (;;) {
if ((l_A_2392 == NULL)) goto L_end2394;
{
if (((((((*(R27 *)rt_nil_check(l_A_2392))).f_MODE == g_M_INOUT) || (((*(R27 *)rt_nil_check(l_A_2392))).f_MODE == g_M_OUT))) && (!(((*(R27 *)rt_nil_check(l_A_2392))).f_E == NULL))))
{
{
R12 * l_V_2395; memset(&l_V_2395, 0, sizeof l_V_2395);
l_V_2395 = r_ARG_ROOT(((*(R27 *)rt_nil_check(l_A_2392))).f_E);
R27 * l_B_2396; memset(&l_B_2396, 0, sizeof l_B_2396);
l_B_2396 = ((*(R27 *)rt_nil_check(l_A_2392))).f_NEXT;
if ((!(l_V_2395 == NULL)))
{
for (;;) {
if ((l_B_2396 == NULL)) goto L_end2397;
{
if (((((*(R27 *)rt_nil_check(l_B_2396))).f_MODE == ((*(R27 *)rt_nil_check(l_A_2392))).f_MODE) && (!(((*(R27 *)rt_nil_check(l_B_2396))).f_E == NULL))))
{
if (((r_ARG_ROOT(((*(R27 *)rt_nil_check(l_B_2396))).f_E) == l_V_2395) && (!r_DISJOINT_PATHS(r_PATH_OF(((*(R27 *)rt_nil_check(l_A_2392))).f_E), r_PATH_OF(((*(R27 *)rt_nil_check(l_B_2396))).f_E)))))
{
r_FAILT(p_LINE, rt_str("a variable is more than one inout or output argument (4.3.3): ", 62), ((*(R12 *)rt_nil_check(l_V_2395))).f_NAME);
}
}
l_B_2396 = ((*(R27 *)rt_nil_check(l_B_2396))).f_NEXT;
}
RT_B_TICK();
} L_end2397: ;
if (((((*(R27 *)rt_nil_check(l_A_2392))).f_MODE == g_M_INOUT) && (!(((*(R12 *)rt_nil_check(p_Y))).f_USES == NULL))))
{
{
R17 * l_U_2398; memset(&l_U_2398, 0, sizeof l_U_2398);
l_U_2398 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_2398 == NULL)) goto L_end2399;
{
if ((r_TEQ(((*(R17 *)rt_nil_check(l_U_2398))).f_NAME, ((*(R12 *)rt_nil_check(l_V_2395))).f_NAME) && (((*(R17 *)rt_nil_check(l_U_2398))).f_IV == ((*(R12 *)rt_nil_check(l_V_2395))).f_OWNER)))
{
r_FAILT(p_LINE, rt_str("an inout argument the procedure also imports (4.3.3): ", 54), ((*(R12 *)rt_nil_check(l_V_2395))).f_NAME);
}
l_U_2398 = ((*(R17 *)rt_nil_check(l_U_2398))).f_NEXT;
}
RT_B_TICK();
} L_end2399: ;
}
}
}
}
}
l_A_2392 = ((*(R27 *)rt_nil_check(l_A_2392))).f_NEXT;
}
RT_B_TICK();
} L_end2394: ;
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
R21 * l_BS_2400; memset(&l_BS_2400, 0, sizeof l_BS_2400);
l_BS_2400 = r_NEW_BINDS();
R28 * l_P_2401; memset(&l_P_2401, 0, sizeof l_P_2401);
l_P_2401 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2402; memset(&l_A_2402, 0, sizeof l_A_2402);
l_A_2402 = p_ARGS;
rt_int l_SOME_M_2403; memset(&l_SOME_M_2403, 0, sizeof l_SOME_M_2403);
l_SOME_M_2403 = 0;
rt_int l_N_2404; memset(&l_N_2404, 0, sizeof l_N_2404);
l_N_2404 = ((rt_int)0LL);
for (;;) {
if (((l_P_2401 == NULL) || (l_A_2402 == NULL))) goto L_end2405;
{
if ((((((*(R28 *)rt_nil_check(l_P_2401))).f_MODE == g_M_IN) && (!(((*(R27 *)rt_nil_check(l_A_2402))).f_E == NULL))) && (!(((*(R28 *)rt_nil_check(l_P_2401))).f_T == NULL))))
{
{
R22 * l_RT_2406; memset(&l_RT_2406, 0, sizeof l_RT_2406);
l_RT_2406 = r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2401))).f_T);
R23 l_M_2407; memset(&l_M_2407, 0, sizeof l_M_2407);
S_R23(&l_M_2407, r_NO_MVAL(), 0);
if (((((*(R22 *)rt_nil_check(l_RT_2406))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2406))).f_SCALE == ((rt_int)0LL))))
{
if (r_MANIFEST_INT(((*(R27 *)rt_nil_check(l_A_2402))).f_E))
{
S_R23(&l_M_2407, r_MANIFEST(((*(R27 *)rt_nil_check(l_A_2402))).f_E), 0);
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_2406))).f_KIND == g_T_BOOL))
{
S_R23(&l_M_2407, r_MANIFEST(((*(R27 *)rt_nil_check(l_A_2402))).f_E), 0);
}
else if ((((*(R22 *)rt_nil_check(l_RT_2406))).f_KIND == g_T_ENUM))
{
S_R23(&l_M_2407, r_ENUM_MANIFEST(((*(R27 *)rt_nil_check(l_A_2402))).f_E, l_RT_2406), 0);
}
if ((l_M_2407).f_OK)
{
r_ADD_BIND(r_MKN(rt_b_cat(rt_str("=", 1), r_STR(((*(R28 *)rt_nil_check(l_P_2401))).f_NAME, (((*(R28 *)rt_nil_check(l_P_2401))).f_NAME).f_LEN))), NULL, l_M_2407, NULL, l_BS_2400);
l_SOME_M_2403 = 1;
}
}
}
l_P_2401 = ((*(R28 *)rt_nil_check(l_P_2401))).f_NEXT;
l_A_2402 = ((*(R27 *)rt_nil_check(l_A_2402))).f_NEXT;
}
RT_B_TICK();
} L_end2405: ;
if ((!l_SOME_M_2403))
{
r_NEED_BODY(p_G);
{ R12 * rv2408 = p_G;
return rv2408; }
}
{
R12 * l_I_2409; memset(&l_I_2409, 0, sizeof l_I_2409);
l_I_2409 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2409 == NULL)) goto L_end2410;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2409))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_BS_2400))).f_NEXT))
{
{ R12 * rv2411 = l_I_2409;
return rv2411; }
}
l_N_2404 = rt_add(l_N_2404, ((rt_int)1LL));
l_I_2409 = ((*(R12 *)rt_nil_check(l_I_2409))).f_INSTANCES;
}
RT_B_TICK();
} L_end2410: ;
}
if ((l_N_2404 > ((rt_int)256LL)))
{
r_FAILT(p_LINE, rt_str("the INLINE expansions of the routine do not end (4.3.1): ", 57), ((*(R12 *)rt_nil_check(p_G))).f_NAME);
}
{ R12 * rv2412 = r_NEW_INSTANCE(p_G, ((*(R21 *)rt_nil_check(l_BS_2400))).f_NEXT, p_ARGS);
return rv2412; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_VISIBLE_2413; memset(&l_VISIBLE_2413, 0, sizeof l_VISIBLE_2413);
l_VISIBLE_2413 = r_SEG_VISIBLE(p_Y0, p_LINE);
R12 * l_Y_2414; memset(&l_Y_2414, 0, sizeof l_Y_2414);
l_Y_2414 = r_ORIGINAL(p_Y0);
R28 * l_P_2415; memset(&l_P_2415, 0, sizeof l_P_2415);
R27 * l_A_2416; memset(&l_A_2416, 0, sizeof l_A_2416);
l_A_2416 = p_ARGS;
R9 l_C_2417; memset(&l_C_2417, 0, sizeof l_C_2417);
S_R9(&l_C_2417, r_MK(rt_str("", 0)), 0);
R9 l_SEP_2418; memset(&l_SEP_2418, 0, sizeof l_SEP_2418);
S_R9(&l_SEP_2418, r_MK(rt_str("", 0)), 0);
R9 l_PRE_2419; memset(&l_PRE_2419, 0, sizeof l_PRE_2419);
S_R9(&l_PRE_2419, r_MK(rt_str("", 0)), 0);
R9 l_POST_2420; memset(&l_POST_2420, 0, sizeof l_POST_2420);
S_R9(&l_POST_2420, r_MK(rt_str("", 0)), 0);
rt_int l_SHARED_2421; memset(&l_SHARED_2421, 0, sizeof l_SHARED_2421);
l_SHARED_2421 = 0;
R22 * l_PT_2422; memset(&l_PT_2422, 0, sizeof l_PT_2422);
if ((!(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
if (((((*(R12 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R))).f_DECL == ((*(R12 *)rt_nil_check(l_Y_2414))).f_DECL) && (!(((*(R12 *)rt_nil_check(l_Y_2414))).f_DECL == NULL))))
{
if ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2414))).f_DECL))).f_FL == ((rt_int)1LL)))
{
r_FAILT(p_LINE, rt_str("an INLINE routine cannot be recursive (4.3.1): ", 47), ((*(R12 *)rt_nil_check(l_Y_2414))).f_NAME);
}
}
}
if (((*(R12 *)rt_nil_check(l_Y_2414))).f_GENERIC)
{
l_Y_2414 = r_INSTANCE(l_Y_2414, p_ARGS, p_LINE);
}
else if (((!(((*(R12 *)rt_nil_check(l_Y_2414))).f_DECL == NULL)) && (((*(R12 *)rt_nil_check(l_Y_2414))).f_BINDINGS == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2414))).f_DECL))).f_KIND == g_N_ROUTINE) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2414))).f_DECL))).f_FL == ((rt_int)1LL))))
{
l_Y_2414 = r_INLINE_INSTANCE(l_Y_2414, p_ARGS, p_LINE);
}
}
r_CHECK_CALL_IMPORTS(l_Y_2414, p_LINE);
r_NO_ALIASING(l_Y_2414, p_ARGS, p_LINE);
r_EXPLICIT_GENERIC_ARGS(l_Y_2414, p_ARGS, p_LINE);
if ((!(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
if (((((*(R12 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R))).f_DECL == ((*(R12 *)rt_nil_check(l_Y_2414))).f_DECL) && (!(((*(R12 *)rt_nil_check(l_Y_2414))).f_DECL == NULL))))
{
if ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2414))).f_DECL))).f_FL == ((rt_int)1LL)))
{
r_FAILT(p_LINE, rt_str("an INLINE routine cannot be recursive (4.3.1): ", 47), ((*(R12 *)rt_nil_check(l_Y_2414))).f_NAME);
}
{
R17 * l_U_2423; memset(&l_U_2423, 0, sizeof l_U_2423);
l_U_2423 = ((*(R12 *)rt_nil_check(l_Y_2414))).f_USES;
for (;;) {
if ((l_U_2423 == NULL)) goto L_end2424;
{
if ((!(r_LOOKUP(((*(R17 *)rt_nil_check(l_U_2423))).f_NAME) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_LOOKUP(((*(R17 *)rt_nil_check(l_U_2423))).f_NAME)))).f_LEVEL > ((rt_int)0LL)))
{
r_FAILT(p_LINE, rt_str("a recursive routine imports only static data (4.3.1): ", 54), ((*(R17 *)rt_nil_check(l_U_2423))).f_NAME);
}
}
l_U_2423 = ((*(R17 *)rt_nil_check(l_U_2423))).f_NEXT;
}
RT_B_TICK();
} L_end2424: ;
}
}
}
if ((!(r_CUR_GENERIC() == NULL)))
{
{
R27 * l_Q_2425; memset(&l_Q_2425, 0, sizeof l_Q_2425);
l_Q_2425 = p_ARGS;
rt_int l_GEN_ARG_2426; memset(&l_GEN_ARG_2426, 0, sizeof l_GEN_ARG_2426);
l_GEN_ARG_2426 = 0;
for (;;) {
if ((l_Q_2425 == NULL)) goto L_end2427;
{
if (((*(R27 *)rt_nil_check(l_Q_2425))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_Q_2425))).f_V).f_T == NULL)))
{
if (((((*(R22 *)rt_nil_check((((*(R27 *)rt_nil_check(l_Q_2425))).f_V).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
l_GEN_ARG_2426 = 1;
}
}
}
l_Q_2425 = ((*(R27 *)rt_nil_check(l_Q_2425))).f_NEXT;
}
RT_B_TICK();
} L_end2427: ;
if (l_GEN_ARG_2426)
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2414))).f_BINDINGS == NULL)))
{
r_REQUIRE_WHERE_SUBSET(l_Y_2414, p_LINE);
}
else
{
r_REQUIRE_WHERE(r_BASE_NAME(l_Y_2414), p_LINE);
}
}
}
}
{
R17 * l_U_2428; memset(&l_U_2428, 0, sizeof l_U_2428);
l_U_2428 = ((*(R12 *)rt_nil_check(l_Y_2414))).f_USES;
for (;;) {
if ((l_U_2428 == NULL)) goto L_end2429;
{
{
R12 * l_H_2430; memset(&l_H_2430, 0, sizeof l_H_2430);
l_H_2430 = r_LOOKUP(((*(R17 *)rt_nil_check(l_U_2428))).f_NAME);
if ((!(l_H_2430 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_H_2430))).f_WITHV == ((rt_int)2LL)) && (((*(R12 *)rt_nil_check(l_H_2430))).f_OWNER == ((*(R17 *)rt_nil_check(l_U_2428))).f_IV)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(l_Y_2414))).f_NAME, (((*(R12 *)rt_nil_check(l_Y_2414))).f_NAME).f_LEN)), rt_str(" imports ", 9)), r_STR(((*(R17 *)rt_nil_check(l_U_2428))).f_NAME, (((*(R17 *)rt_nil_check(l_U_2428))).f_NAME).f_LEN)), rt_str(", which a WITH NAMING hides (4.5.4)", 35)));
}
}
}
l_U_2428 = ((*(R17 *)rt_nil_check(l_U_2428))).f_NEXT;
}
RT_B_TICK();
} L_end2429: ;
}
if (((((((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL)) || (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL)))) && (!(((*(R12 *)rt_nil_check(l_Y_2414))).f_USES == NULL))))
{
r_FAILT(p_LINE, rt_str("a record-spec is a closed scope: no function importing a variable (3.9.1): ", 75), ((*(R12 *)rt_nil_check(l_Y_2414))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_2414))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_C_2417, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_2414))).f_LEVEL), 0);
S_R9(&l_SEP_2418, r_MK(rt_str(", ", 2)), 0);
}
{
R27 * l_Q_2431; memset(&l_Q_2431, 0, sizeof l_Q_2431);
l_Q_2431 = p_ARGS;
for (;;) {
if ((l_Q_2431 == NULL)) goto L_end2432;
{
if ((!(((*(R27 *)rt_nil_check(l_Q_2431))).f_MODE == g_M_IN)))
{
l_SHARED_2421 = 1;
}
l_Q_2431 = ((*(R27 *)rt_nil_check(l_Q_2431))).f_NEXT;
}
RT_B_TICK();
} L_end2432: ;
if ((!(((*(R12 *)rt_nil_check(l_Y_2414))).f_USES == NULL)))
{
l_SHARED_2421 = 1;
}
}
l_P_2415 = ((*(R12 *)rt_nil_check(l_Y_2414))).f_PARAMS;
for (;;) {
if ((l_P_2415 == NULL)) goto L_end2433;
{
if ((l_A_2416 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
l_PT_2422 = r_FORMAL_VIEW(l_Y_2414, l_P_2415);
if ((l_PT_2422 == NULL))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2415))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2422)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_2434; memset(&l_V_2434, 0, sizeof l_V_2434);
R9 l_CV_2435; memset(&l_CV_2435, 0, sizeof l_CV_2435);
if ((((*(R27 *)rt_nil_check(l_A_2416))).f_HAVE && (!r_WANT_SENSITIVE(l_A_2416))))
{
S_R26(&l_V_2434, ((*(R27 *)rt_nil_check(l_A_2416))).f_V, 0);
}
else
{
S_R26(&l_V_2434, r_EXPR(((*(R27 *)rt_nil_check(l_A_2416))).f_E, l_PT_2422), 0);
}
S_R9(&l_CV_2435, r_CONVERT(l_V_2434, l_PT_2422, p_LINE, r_NO_TEXT()), 0);
if (((l_SHARED_2421 && (l_V_2434).f_LVAL) && r_IS_STRUCTURED(l_PT_2422)))
{
S_R9(&l_CV_2435, r_COPY_OF(l_PT_2422, l_CV_2435), 0);
}
S_R9(&l_C_2417, r_FMT3(rt_str("@@@", 3), l_C_2417, l_SEP_2418, l_CV_2435), 0);
S_R9(&l_SEP_2418, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_2436; memset(&l_V_2436, 0, sizeof l_V_2436);
if (((*(R27 *)rt_nil_check(l_A_2416))).f_HAVE)
{
S_R26(&l_V_2436, ((*(R27 *)rt_nil_check(l_A_2416))).f_V, 0);
}
else
{
S_R26(&l_V_2436, r_EXPR(((*(R27 *)rt_nil_check(l_A_2416))).f_E, l_PT_2422), 0);
}
if (((!(((*(R27 *)rt_nil_check(l_A_2416))).f_E == NULL)) && (!(l_V_2436).f_LVAL)))
{
if ((((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2416))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2416))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_2436, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_2436).f_C), (l_V_2436).f_T), 0);
(l_V_2436).f_LVAL = 1;
}
}
if ((!(l_V_2436).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(l_PT_2422, (l_V_2436).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(l_PT_2422));
}
if (((((*(R28 *)rt_nil_check(l_P_2415))).f_MODE == g_M_INOUT) && (!((r_SAME_TYPE(l_PT_2422, (l_V_2436).f_T) && r_SAME_RANGE(l_PT_2422, (l_V_2436).f_T))))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
if (((((*(R28 *)rt_nil_check(l_P_2415))).f_MODE == g_M_OUT) && (!((r_SAME_TYPE(l_PT_2422, (l_V_2436).f_T) && r_SAME_RANGE(l_PT_2422, (l_V_2436).f_T))))))
{
{
R9 l_TMP_2437; memset(&l_TMP_2437, 0, sizeof l_TMP_2437);
S_R9(&l_TMP_2437, r_NEW_NAME(rt_str("oa", 2)), 0);
R9 l_AP_2438; memset(&l_AP_2438, 0, sizeof l_AP_2438);
S_R9(&l_AP_2438, r_NEW_NAME(rt_str("op", 2)), 0);
S_R9(&l_PRE_2419, r_FMT4(rt_str("@ @ *@ = &@;", 12), l_PRE_2419, r_CTYPE((l_V_2436).f_T), l_AP_2438, (l_V_2436).f_C), 0);
S_R9(&l_PRE_2419, r_FMT4(rt_str("@ @ @ = @;", 10), l_PRE_2419, r_CTYPE(l_PT_2422), l_TMP_2437, r_COPY_OF((l_V_2436).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2438))), 0);
S_R9(&l_POST_2420, r_FMT2(rt_str("@ @", 3), l_POST_2420, r_STORE_CODE((l_V_2436).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2438), r_MKET(l_TMP_2437, l_PT_2422), p_LINE, r_NO_TEXT())), 0);
S_R9(&l_C_2417, r_FMT3(rt_str("@@&@", 4), l_C_2417, l_SEP_2418, l_TMP_2437), 0);
}
}
else
{
S_R9(&l_C_2417, r_FMT3(rt_str("@@&@", 4), l_C_2417, l_SEP_2418, (l_V_2436).f_C), 0);
}
S_R9(&l_SEP_2418, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_2416 = ((*(R27 *)rt_nil_check(l_A_2416))).f_NEXT;
l_P_2415 = ((*(R28 *)rt_nil_check(l_P_2415))).f_NEXT;
}
RT_B_TICK();
} L_end2433: ;
if ((!(l_A_2416 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
if (((l_PRE_2419).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2439 = r_MKET(r_FMT4(rt_str("({ @ @(@); @ })", 15), l_PRE_2419, ((*(R12 *)rt_nil_check(l_Y_2414))).f_ACCESS, l_C_2417, l_POST_2420), r_RESULT_VIEW(l_Y_2414));
return rv2439; }
}
{ R26 rv2440 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_2414))).f_ACCESS, l_C_2417), r_RESULT_VIEW(l_Y_2414));
return rv2440; }
rt_raise(RT_X_INIT);
}
static R22 * r_FORMAL_VIEW(R12 * p_R, R28 * p_P) { RT_B_TICK(); 
if (((((*(R28 *)rt_nil_check(p_P))).f_T == NULL) || (((*(R28 *)rt_nil_check(p_P))).f_TS == NULL)))
{
{ R22 * rv2441 = ((*(R28 *)rt_nil_check(p_P))).f_T;
return rv2441; }
}
{ R22 * rv2442 = r_OUTSIDE_VIEW(p_R, ((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R28 *)rt_nil_check(p_P))).f_T);
return rv2442; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESULT_VIEW(R12 * p_R) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_R))).f_DECL == NULL) || (((*(R12 *)rt_nil_check(p_R))).f_RESULT == NULL)))
{
{ R22 * rv2443 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2443; }
}
if (((!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B == NULL)))
{
{ R22 * rv2444 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2444; }
}
{ R22 * rv2445 = r_OUTSIDE_VIEW(p_R, ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2445; }
rt_raise(RT_X_INIT);
}
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R17 * p_TS, R22 * p_T) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_R))).f_MODL == NULL) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)) || (!(((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))))
{
{ R22 * rv2446 = p_T;
return rv2446; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_R))).f_MODL))
{
{ R22 * rv2447 = p_T;
return rv2447; }
}
{
R12 * l_M_2448; memset(&l_M_2448, 0, sizeof l_M_2448);
l_M_2448 = ((*(R12 *)rt_nil_check(p_R))).f_MODL;
for (;;) {
if ((l_M_2448 == NULL)) goto L_end2449;
{
{
R12 * l_Y_2450; memset(&l_Y_2450, 0, sizeof l_Y_2450);
l_Y_2450 = r_MEMBER_TYPE(l_M_2448, ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_2450 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_2450))).f_EXPORTED)
{
{ R22 * rv2451 = r_ABSTRACT_VIEW(l_Y_2450, p_T);
return rv2451; }
}
{ R22 * rv2452 = p_T;
return rv2452; }
}
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(l_M_2448))).f_MODL))
{
goto L_end2449;
}
l_M_2448 = ((*(R12 *)rt_nil_check(l_M_2448))).f_MODL;
}
RT_B_TICK();
} L_end2449: ;
}
{ R22 * rv2453 = p_T;
return rv2453; }
rt_raise(RT_X_INIT);
}
static R12 * r_MEMBER_TYPE(R12 * p_M, R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2454; memset(&l_Y_2454, 0, sizeof l_Y_2454);
l_Y_2454 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
if (((*(R12 *)rt_nil_check(p_M))).f_BUSY)
{
{
R12 * l_Z_2455; memset(&l_Z_2455, 0, sizeof l_Z_2455);
l_Z_2455 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Z_2455 == NULL)) goto L_end2456;
{
if ((((((*(R12 *)rt_nil_check(l_Z_2455))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Z_2455))).f_MODL == p_M)) && (((*(R12 *)rt_nil_check(l_Z_2455))).f_ORIG == NULL)))
{
{ R12 * rv2457 = l_Z_2455;
return rv2457; }
}
l_Z_2455 = r_LOOKUP_NEXT(l_Z_2455);
}
RT_B_TICK();
} L_end2456: ;
}
{ R12 * rv2458 = NULL;
return rv2458; }
}
for (;;) {
if ((l_Y_2454 == NULL)) goto L_end2459;
{
if (((((*(R12 *)rt_nil_check(l_Y_2454))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_2454))).f_NAME, p_NAME)))
{
{ R12 * rv2460 = l_Y_2454;
return rv2460; }
}
l_Y_2454 = ((*(R12 *)rt_nil_check(l_Y_2454))).f_SNEXT;
}
RT_B_TICK();
} L_end2459: ;
{ R12 * rv2461 = NULL;
return rv2461; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_2462; memset(&l_K_2462, 0, sizeof l_K_2462);
l_K_2462 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND;
{ rt_int rv2463 = ((((l_K_2462 == g_T_STR) || (l_K_2462 == g_T_BITS)) || (l_K_2462 == g_T_ARR)) || (l_K_2462 == g_T_REC));
return rv2463; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2464; memset(&l_RA_2464, 0, sizeof l_RA_2464);
l_RA_2464 = r_REAL_TYPE(p_A);
R22 * l_RB_2465; memset(&l_RB_2465, 0, sizeof l_RB_2465);
l_RB_2465 = r_REAL_TYPE(p_B);
if ((!r_IS_NUMERIC_OR_ENUM(l_RA_2464)))
{
{ rt_int rv2466 = 1;
return rv2466; }
}
if ((((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2464))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2464))).f_HI_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2465))).f_LO_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2465))).f_HI_C)))
{
{ rt_int rv2467 = 1;
return rv2467; }
}
if ((((((*(R22 *)rt_nil_check(l_RA_2464))).f_LO_C).f_LEN == ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_RB_2465))).f_LO_C).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2468 = ((((*(R22 *)rt_nil_check(l_RA_2464))).f_LO_C).f_LEN == (((*(R22 *)rt_nil_check(l_RB_2465))).f_LO_C).f_LEN);
return rv2468; }
}
if (((((((*(R22 *)rt_nil_check(l_RA_2464))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_RB_2465))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_RA_2464))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(l_RB_2465))).f_MHI).f_OK))
{
{ rt_int rv2469 = (((((*(R22 *)rt_nil_check(l_RA_2464))).f_MLO).f_V == (((*(R22 *)rt_nil_check(l_RB_2465))).f_MLO).f_V) && ((((*(R22 *)rt_nil_check(l_RA_2464))).f_MHI).f_V == (((*(R22 *)rt_nil_check(l_RB_2465))).f_MHI).f_V));
return rv2469; }
}
{ rt_int rv2470 = (r_TEQ(((*(R22 *)rt_nil_check(l_RA_2464))).f_LO_C, ((*(R22 *)rt_nil_check(l_RB_2465))).f_LO_C) && r_TEQ(((*(R22 *)rt_nil_check(l_RA_2464))).f_HI_C, ((*(R22 *)rt_nil_check(l_RB_2465))).f_HI_C));
return rv2470; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R17 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2471 = 0;
return rv2471; }
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv2472 = 1;
return rv2472; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2473 = 1;
return rv2473; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2474 = r_STATIC_GENERIC(((*(R17 *)rt_nil_check(p_TS))).f_C);
return rv2474; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_N_REP) && r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_A)))
{
{ rt_int rv2475 = 1;
return rv2475; }
}
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv2476 = r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(p_TS))).f_A);
return rv2476; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv2477 = r_STATIC_GENERIC(((*(R17 *)rt_nil_check(p_TS))).f_A);
return rv2477; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv2478 = ((((*(R17 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv2478; }
}
else if (((r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv2479 = 0;
return rv2479; }
}
{
R12 * l_Y_2480; memset(&l_Y_2480, 0, sizeof l_Y_2480);
l_Y_2480 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
R17 * l_A_2481; memset(&l_A_2481, 0, sizeof l_A_2481);
l_A_2481 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R17 * l_F_2482; memset(&l_F_2482, 0, sizeof l_F_2482);
if ((l_Y_2480 == NULL))
{
{ rt_int rv2483 = 0;
return rv2483; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2480))).f_KIND == g_Y_GEN))
{
{ rt_int rv2484 = 1;
return rv2484; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2480))).f_DECL == NULL))
{
{ rt_int rv2485 = 0;
return rv2485; }
}
l_F_2482 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2480))).f_DECL))).f_A;
for (;;) {
if ((l_F_2482 == NULL)) goto L_end2486;
{
{
R17 * l_N_2487; memset(&l_N_2487, 0, sizeof l_N_2487);
l_N_2487 = ((*(R17 *)rt_nil_check(l_F_2482))).f_A;
for (;;) {
if ((l_N_2487 == NULL)) goto L_end2488;
{
if ((l_A_2481 == NULL))
{
{ rt_int rv2489 = 0;
return rv2489; }
}
if (((((*(R17 *)rt_nil_check(l_F_2482))).f_B == NULL) && ((((((*(R17 *)rt_nil_check(l_A_2481))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_A_2481))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_2481)))))
{
{ rt_int rv2490 = 1;
return rv2490; }
}
l_A_2481 = ((*(R17 *)rt_nil_check(l_A_2481))).f_NEXT;
l_N_2487 = ((*(R17 *)rt_nil_check(l_N_2487))).f_NEXT;
}
RT_B_TICK();
} L_end2488: ;
}
l_F_2482 = ((*(R17 *)rt_nil_check(l_F_2482))).f_NEXT;
}
RT_B_TICK();
} L_end2486: ;
}
}
{ rt_int rv2491 = 0;
return rv2491; }
rt_raise(RT_X_INIT);
}
static R17 * r_OWN_NAMES(R17 * p_R) { RT_B_TICK(); 
R17 * l_HEAD_2492; memset(&l_HEAD_2492, 0, sizeof l_HEAD_2492);
l_HEAD_2492 = NULL;
r_GEN_NAMES(((*(R17 *)rt_nil_check(p_R))).f_A, &l_HEAD_2492);
{ R17 * rv2493 = l_HEAD_2492;
return rv2493; }
rt_raise(RT_X_INIT);
}
static rt_int r_DECLARES_DERIVED(R17 * p_L) { RT_B_TICK(); 
R17 * l_N_2494; memset(&l_N_2494, 0, sizeof l_N_2494);
l_N_2494 = p_L;
for (;;) {
if ((l_N_2494 == NULL)) goto L_end2495;
{
if (((((*(R17 *)rt_nil_check(l_N_2494))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(l_N_2494))).f_NAME).f_LEN > ((rt_int)0LL))))
{
{ rt_int rv2496 = 1;
return rv2496; }
}
if ((((*(R17 *)rt_nil_check(l_N_2494))).f_KIND == g_N_PARAM))
{
if (r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2494))).f_B))
{
{ rt_int rv2497 = 1;
return rv2497; }
}
}
else if ((!(((*(R17 *)rt_nil_check(l_N_2494))).f_KIND == g_TS_GEN)))
{
if ((r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2494))).f_A) || r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2494))).f_C)))
{
{ rt_int rv2498 = 1;
return rv2498; }
}
if ((!(((*(R17 *)rt_nil_check(l_N_2494))).f_B == NULL)))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_2494))).f_B))).f_KIND == g_N_RANGE))
{
if ((r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_2494))).f_B))).f_A) || r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_2494))).f_B))).f_B)))
{
{ rt_int rv2499 = 1;
return rv2499; }
}
}
else if (r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2494))).f_B))
{
{ rt_int rv2500 = 1;
return rv2500; }
}
}
}
l_N_2494 = ((*(R17 *)rt_nil_check(l_N_2494))).f_NEXT;
}
RT_B_TICK();
} L_end2495: ;
{ rt_int rv2501 = 0;
return rv2501; }
rt_raise(RT_X_INIT);
}
static R22 * r_MARK_GENP(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R22 * l_C_2502; memset(&l_C_2502, 0, sizeof l_C_2502);
l_C_2502 = r_COPY_TYP(p_T);
S_R9(&((*(R22 *)rt_nil_check(l_C_2502))).f_GENP, p_NAME, 0);
{ R22 * rv2503 = l_C_2502;
return rv2503; }
rt_raise(RT_X_INIT);
}
static R12 * r_CUR_GENERIC(void) { RT_B_TICK(); 
R19 * l_CS_2504; memset(&l_CS_2504, 0, sizeof l_CS_2504);
l_CS_2504 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
for (;;) {
if ((l_CS_2504 == NULL)) goto L_end2505;
{
if ((!(((*(R19 *)rt_nil_check(l_CS_2504))).f_R == NULL)))
{
if ((!(((*(R12 *)rt_nil_check(((*(R19 *)rt_nil_check(l_CS_2504))).f_R))).f_BINDINGS == NULL)))
{
{ R12 * rv2506 = ((*(R19 *)rt_nil_check(l_CS_2504))).f_R;
return rv2506; }
}
}
l_CS_2504 = ((*(R19 *)rt_nil_check(l_CS_2504))).f_UP;
}
RT_B_TICK();
} L_end2505: ;
{ R12 * rv2507 = NULL;
return rv2507; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_WHERE(R12 * p_G, R9 p_NAME) { RT_B_TICK(); 
R17 * l_N_2508; memset(&l_N_2508, 0, sizeof l_N_2508);
l_N_2508 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
for (;;) {
if ((l_N_2508 == NULL)) goto L_end2509;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_N_2508))).f_A, p_NAME))
{
{ rt_int rv2510 = 1;
return rv2510; }
}
l_N_2508 = ((*(R17 *)rt_nil_check(l_N_2508))).f_NEXT;
}
RT_B_TICK();
} L_end2509: ;
{ rt_int rv2511 = 0;
return rv2511; }
rt_raise(RT_X_INIT);
}
static void r_REQUIRE_WHERE(R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_G_2512; memset(&l_G_2512, 0, sizeof l_G_2512);
l_G_2512 = r_CUR_GENERIC();
if ((l_G_2512 == NULL))
{
return;
}
if ((!r_IN_WHERE(l_G_2512, p_NAME)))
{
r_FAILT(p_LINE, rt_str("invoked with objects of a TYPE parameter, so named in the WHERE clause (5.2): ", 78), p_NAME);
}
}
static void r_REQUIRE_WHERE_SUBSET(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_N_2513; memset(&l_N_2513, 0, sizeof l_N_2513);
l_N_2513 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_D))).f_B;
R12 * l_G_2514; memset(&l_G_2514, 0, sizeof l_G_2514);
l_G_2514 = r_CUR_GENERIC();
if ((l_G_2514 == NULL))
{
return;
}
for (;;) {
if ((l_N_2513 == NULL)) goto L_end2515;
{
{
R17 * l_T_2516; memset(&l_T_2516, 0, sizeof l_T_2516);
l_T_2516 = ((*(R17 *)rt_nil_check(l_N_2513))).f_A;
for (;;) {
if ((l_T_2516 == NULL)) goto L_end2517;
{
if ((!r_IN_WHERE(l_G_2514, ((*(R17 *)rt_nil_check(l_T_2516))).f_NAME)))
{
r_FAILT(p_LINE, rt_str("the WHERE routines of the invoked generic routine are among the caller's (5.2): ", 80), ((*(R17 *)rt_nil_check(l_T_2516))).f_NAME);
}
l_T_2516 = ((*(R17 *)rt_nil_check(l_T_2516))).f_NEXT;
}
RT_B_TICK();
} L_end2517: ;
}
l_N_2513 = ((*(R17 *)rt_nil_check(l_N_2513))).f_NEXT;
}
RT_B_TICK();
} L_end2515: ;
}
static rt_int r_HAS_GEN_ARG(R17 * p_A) { RT_B_TICK(); 
R17 * l_P_2518; memset(&l_P_2518, 0, sizeof l_P_2518);
l_P_2518 = p_A;
for (;;) {
if ((l_P_2518 == NULL)) goto L_end2519;
{
if (((((*(R17 *)rt_nil_check(l_P_2518))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_P_2518))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2520 = 1;
return rv2520; }
}
l_P_2518 = ((*(R17 *)rt_nil_check(l_P_2518))).f_NEXT;
}
RT_B_TICK();
} L_end2519: ;
{ rt_int rv2521 = 0;
return rv2521; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { RT_B_TICK(); 
rt_int l_ENTERED_2522; memset(&l_ENTERED_2522, 0, sizeof l_ENTERED_2522);
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
l_ENTERED_2522 = r_ENTER_MODULE_FOR(p_Y);
{
R12 * l_SAVED_SEG_2523; memset(&l_SAVED_SEG_2523, 0, sizeof l_SAVED_SEG_2523);
l_SAVED_SEG_2523 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(p_Y))).f_HOME;
r_ROUTINE_HEADER1(p_Y);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_2523;
}
if (l_ENTERED_2522)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
}
static void r_ROUTINE_HEADER1(R12 * p_Y) { RT_B_TICK(); 
R17 * l_R_2524; memset(&l_R_2524, 0, sizeof l_R_2524);
l_R_2524 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R17 * l_P_2525; memset(&l_P_2525, 0, sizeof l_P_2525);
R28 * l_TAIL_2526; memset(&l_TAIL_2526, 0, sizeof l_TAIL_2526);
l_TAIL_2526 = NULL;
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_2525 = ((*(R17 *)rt_nil_check(l_R_2524))).f_A;
for (;;) {
if ((l_P_2525 == NULL)) goto L_end2527;
{
if (((((*(R17 *)rt_nil_check(l_P_2525))).f_B == NULL) || r_STATIC_GENERIC(((*(R17 *)rt_nil_check(l_P_2525))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2525 = ((*(R17 *)rt_nil_check(l_P_2525))).f_NEXT;
}
RT_B_TICK();
} L_end2527: ;
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2524))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
{
R17 * l_N_2528; memset(&l_N_2528, 0, sizeof l_N_2528);
l_N_2528 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2524))).f_D))).f_B;
for (;;) {
if ((l_N_2528 == NULL)) goto L_end2529;
{
{
R17 * l_T_2530; memset(&l_T_2530, 0, sizeof l_T_2530);
l_T_2530 = ((*(R17 *)rt_nil_check(l_N_2528))).f_A;
for (;;) {
if ((l_T_2530 == NULL)) goto L_end2531;
{
if ((r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_T_2530))).f_B))).f_A) || r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_T_2530))).f_B))).f_B)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_T_2530))).f_LINE, rt_str("a WHERE template declares no derived generic parameter (5.2): ", 62), ((*(R17 *)rt_nil_check(l_T_2530))).f_NAME);
}
l_T_2530 = ((*(R17 *)rt_nil_check(l_T_2530))).f_NEXT;
}
RT_B_TICK();
} L_end2531: ;
}
l_N_2528 = ((*(R17 *)rt_nil_check(l_N_2528))).f_NEXT;
}
RT_B_TICK();
} L_end2529: ;
}
}
l_P_2525 = ((*(R17 *)rt_nil_check(l_R_2524))).f_A;
for (;;) {
if ((l_P_2525 == NULL)) goto L_end2532;
{
{
R28 * l_PM_2533; memset(&l_PM_2533, 0, sizeof l_PM_2533);
l_PM_2533 = ((R28 *)rt_b_new(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2533)), ({ R28 rc2534; memset(&rc2534, 0, sizeof rc2534);  S_R9(&rc2534.f_NAME, ((*(R17 *)rt_nil_check(l_P_2525))).f_NAME, 0); rc2534.f_MODE = ((*(R17 *)rt_nil_check(l_P_2525))).f_IV; rc2534.f_T = NULL; rc2534.f_TS = ((*(R17 *)rt_nil_check(l_P_2525))).f_B; rc2534.f_NEXT = NULL; rc2534; }), 0);
if (((((*(R17 *)rt_nil_check(l_R_2524))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(l_P_2525))).f_IV == g_M_IN))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2525))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!(((*(R17 *)rt_nil_check(l_P_2525))).f_B == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_2525))).f_B))).f_KIND == g_TS_ROUTINE) && (!(((*(R17 *)rt_nil_check(l_P_2525))).f_IV == g_M_IN))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2525))).f_LINE, rt_str("a routine-spec declares only input parameters (5.1)", 51));
}
if (r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_P_2525))).f_B, NULL, r_OWN_NAMES(l_R_2524)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2525))).f_LINE, rt_str("the attributes in the type of a formal are manifest (4.3.1)", 59));
}
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R28 *)rt_nil_check(l_PM_2533))).f_T = r_RESOLVE(((*(R17 *)rt_nil_check(l_P_2525))).f_B);
}
if ((l_TAIL_2526 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_2533;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2526))).f_NEXT = l_PM_2533;
}
l_TAIL_2526 = l_PM_2533;
}
l_P_2525 = ((*(R17 *)rt_nil_check(l_P_2525))).f_NEXT;
}
RT_B_TICK();
} L_end2532: ;
if ((!(((*(R17 *)rt_nil_check(l_R_2524))).f_B == NULL)))
{
if (r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_R_2524))).f_B, NULL, r_OWN_NAMES(l_R_2524)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_2524))).f_LINE, rt_str("the returns-clause may not refer to a variable (4.3.1)", 54));
}
}
if ((((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC) && r_TEQS(r_BASE_NAME(p_Y), rt_str("STORE_", 6))) && (!(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS == NULL))))
{
{
R28 * l_LAST_2535; memset(&l_LAST_2535, 0, sizeof l_LAST_2535);
l_LAST_2535 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((((*(R28 *)rt_nil_check(l_LAST_2535))).f_NEXT == NULL)) goto L_end2536;
{
l_LAST_2535 = ((*(R28 *)rt_nil_check(l_LAST_2535))).f_NEXT;
}
RT_B_TICK();
} L_end2536: ;
if ((((!(l_LAST_2535 == ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS)) && (!(((*(R28 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS))).f_T == NULL))) && (!(((*(R28 *)rt_nil_check(l_LAST_2535))).f_T == NULL))))
{
if ((!r_SAME_CLASS(((*(R28 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS))).f_T, ((*(R28 *)rt_nil_check(l_LAST_2535))).f_T)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_2524))).f_LINE, rt_str("both arguments of STORE_ belong to the same type class (D.4)", 60));
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
R17 * l_R_2537; memset(&l_R_2537, 0, sizeof l_R_2537);
l_R_2537 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_2538; memset(&l_T_2538, 0, sizeof l_T_2538);
if ((((*(R17 *)rt_nil_check(l_R_2537))).f_B == NULL))
{
{ R22 * rv2539 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv2539; }
}
r_OPEN_SCOPE();
{
R28 * l_P_2540; memset(&l_P_2540, 0, sizeof l_P_2540);
l_P_2540 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2540 == NULL)) goto L_end2541;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2540))).f_T == NULL)))
{
{
R12 * l_V_2542; memset(&l_V_2542, 0, sizeof l_V_2542);
l_V_2542 = r_NEW_SYM(g_Y_CONST, ((*(R28 *)rt_nil_check(l_P_2540))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2542))).f_T = ((*(R28 *)rt_nil_check(l_P_2540))).f_T;
S_R9(&((*(R12 *)rt_nil_check(l_V_2542))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2540))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_V_2542))).f_INPUT = 1;
r_DEFINE(l_V_2542, ((*(R17 *)rt_nil_check(l_R_2537))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2540))).f_T, ((*(R12 *)rt_nil_check(l_V_2542))).f_ACCESS, ((*(R17 *)rt_nil_check(l_R_2537))).f_LINE, 0);
}
}
l_P_2540 = ((*(R28 *)rt_nil_check(l_P_2540))).f_NEXT;
}
RT_B_TICK();
} L_end2541: ;
}
l_T_2538 = r_RESOLVE(((*(R17 *)rt_nil_check(l_R_2537))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv2543 = l_T_2538;
return rv2543; }
rt_raise(RT_X_INIT);
}
static R9 r_C_HEADER(R12 * p_Y) { RT_B_TICK(); 
R9 l_PS_2544; memset(&l_PS_2544, 0, sizeof l_PS_2544);
S_R9(&l_PS_2544, r_MK(rt_str("", 0)), 0);
R9 l_SEP_2545; memset(&l_SEP_2545, 0, sizeof l_SEP_2545);
S_R9(&l_SEP_2545, r_MK(rt_str("", 0)), 0);
R28 * l_P_2546; memset(&l_P_2546, 0, sizeof l_P_2546);
l_P_2546 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_PS_2544, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R9(&l_SEP_2545, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_2546 == NULL)) goto L_end2547;
{
if ((((*(R28 *)rt_nil_check(l_P_2546))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2546))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2546))).f_MODE == g_M_IN))
{
S_R9(&l_PS_2544, r_FMT4(rt_str("@@@ p_@", 7), l_PS_2544, l_SEP_2545, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2546))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2546))).f_NAME)), 0);
S_R9(&l_SEP_2545, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R9(&l_PS_2544, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_2544, l_SEP_2545, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2546))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2546))).f_NAME)), 0);
S_R9(&l_SEP_2545, r_MK(rt_str(", ", 2)), 0);
}
l_P_2546 = ((*(R28 *)rt_nil_check(l_P_2546))).f_NEXT;
}
RT_B_TICK();
} L_end2547: ;
if (((l_PS_2544).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_PS_2544, r_MK(rt_str("void", 4)), 0);
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_LINKAGE == ((rt_int)1LL)))
{
{ R9 rv2548 = r_FMT3(rt_str("@ @(@)", 6), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2544);
return rv2548; }
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_LINKAGE == ((rt_int)2LL)))
{
{ R9 rv2549 = r_FMT3(rt_str("extern @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2544);
return rv2549; }
}
{ R9 rv2550 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2544);
return rv2550; }
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
R25 * l_B_2551; memset(&l_B_2551, 0, sizeof l_B_2551);
l_B_2551 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_2552; memset(&l_I_2552, 0, sizeof l_I_2552);
l_I_2552 = ((rt_int)0LL);
for (;;) {
if ((l_B_2551 == NULL)) goto L_end2553;
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2551))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2551))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_2552)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2551))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2551))).f_LO) || ((((*(R25 *)rt_nil_check(l_B_2551))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2551))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_2552)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2551))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_2552), p_PC, r_NUM(l_I_2552)), ((*(R25 *)rt_nil_check(l_B_2551))).f_LO), p_LINE, p_CHECK);
}
}
l_I_2552 = rt_add(l_I_2552, ((rt_int)1LL));
l_B_2551 = ((*(R25 *)rt_nil_check(l_B_2551))).f_NEXT;
}
RT_B_TICK();
} L_end2553: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_2554; memset(&l_U_2554, 0, sizeof l_U_2554);
l_U_2554 = r_REAL_TYPE(p_T);
R24 * l_F_2555; memset(&l_F_2555, 0, sizeof l_F_2555);
l_F_2555 = ((*(R22 *)rt_nil_check(l_U_2554))).f_FIELDS;
R25 * l_A_2556; memset(&l_A_2556, 0, sizeof l_A_2556);
l_A_2556 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_2555 == NULL) || (l_A_2556 == NULL))) goto L_end2557;
{
if ((!(((*(R24 *)rt_nil_check(l_F_2555))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_A_2556))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_A_2556))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R24 *)rt_nil_check(l_F_2555))).f_CNAME), p_LINE, p_CHECK);
}
l_A_2556 = ((*(R25 *)rt_nil_check(l_A_2556))).f_NEXT;
}
l_F_2555 = ((*(R24 *)rt_nil_check(l_F_2555))).f_NEXT;
}
RT_B_TICK();
} L_end2557: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R9 p_T) { RT_B_TICK(); 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2558 = 0;
return rv2558; }
}
{ rt_int rv2559 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv2559; }
rt_raise(RT_X_INIT);
}
static R9 r_GEN_TEXT_NAME(R9 p_T) { RT_B_TICK(); 
{ R9 rv2560 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv2560; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R9 p_NAME, R9 p_C, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
R12 * l_OLD_2561; memset(&l_OLD_2561, 0, sizeof l_OLD_2561);
l_OLD_2561 = r_LOOKUP(p_NAME);
if ((!(l_OLD_2561 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_2561))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_2561))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_2561))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_2562; memset(&l_G_2562, 0, sizeof l_G_2562);
l_G_2562 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_2562))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R9(&((*(R12 *)rt_nil_check(l_G_2562))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_2562))).f_INPUT = 1;
r_DEFINE(l_G_2562, p_LINE);
}
}
static R21 * r_NEW_BINDS(void) { RT_B_TICK(); 
R21 * l_B_2563; memset(&l_B_2563, 0, sizeof l_B_2563);
l_B_2563 = ((R21 *)rt_b_new(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_B_2563)), ({ R21 rc2564; memset(&rc2564, 0, sizeof rc2564);  S_R9(&rc2564.f_NAME, r_NO_TEXT(), 0); rc2564.f_T = NULL; S_R9(&rc2564.f_C, r_NO_TEXT(), 0); rc2564.f_HASMV = 0; rc2564.f_MV = ((rt_int)0LL); rc2564.f_R = NULL; rc2564.f_NEXT = NULL; rc2564; }), 0);
{ R21 * rv2565 = l_B_2563;
return rv2565; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R9 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R21 * p_HEAD) { RT_B_TICK(); 
R21 * l_B_2566; memset(&l_B_2566, 0, sizeof l_B_2566);
l_B_2566 = ((R21 *)rt_b_new(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_B_2566)), ({ R21 rc2567; memset(&rc2567, 0, sizeof rc2567);  S_R9(&rc2567.f_NAME, p_NAME, 0); rc2567.f_T = p_T; S_R9(&rc2567.f_C, r_NO_TEXT(), 0); rc2567.f_HASMV = (p_M).f_OK; rc2567.f_MV = (p_M).f_V; rc2567.f_R = p_R; rc2567.f_NEXT = ((*(R21 *)rt_nil_check(p_HEAD))).f_NEXT; rc2567; }), 0);
if ((p_M).f_OK)
{
S_R9(&((*(R21 *)rt_nil_check(l_B_2566))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R21 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_2566;
}
static R21 * r_FIND_BIND(R21 * p_BS, R9 p_NAME) { RT_B_TICK(); 
R21 * l_B_2568; memset(&l_B_2568, 0, sizeof l_B_2568);
l_B_2568 = p_BS;
for (;;) {
if ((l_B_2568 == NULL)) goto L_end2569;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_B_2568))).f_NAME, p_NAME))
{
{ R21 * rv2570 = l_B_2568;
return rv2570; }
}
l_B_2568 = ((*(R21 *)rt_nil_check(l_B_2568))).f_NEXT;
}
RT_B_TICK();
} L_end2569: ;
{ R21 * rv2571 = NULL;
return rv2571; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R17 * p_TS, R22 * p_T, R21 * p_BS) { RT_B_TICK(); 
R22 * l_RT_2572; memset(&l_RT_2572, 0, sizeof l_RT_2572);
l_RT_2572 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv2573 = 1;
return rv2573; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv2574 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv2574; }
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2575 = 1;
return rv2575; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R17 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2576 = 1;
return rv2576; }
}
{
R21 * l_B_2577; memset(&l_B_2577, 0, sizeof l_B_2577);
l_B_2577 = r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_2577 == NULL)))
{
if ((((*(R21 *)rt_nil_check(l_B_2577))).f_T == NULL))
{
{ rt_int rv2578 = 0;
return rv2578; }
}
{ rt_int rv2579 = r_SAME_TYPE(((*(R21 *)rt_nil_check(l_B_2577))).f_T, p_T);
return rv2579; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_C == NULL) && r_NONSTANDARD_REP(p_T)))
{
{ rt_int rv2580 = 0;
return rv2580; }
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
{ rt_int rv2581 = 1;
return rv2581; }
}
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2572))).f_KIND == g_T_ARR)))
{
{ rt_int rv2582 = 0;
return rv2582; }
}
if ((!(r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_2572))).f_DIMS)))
{
{ rt_int rv2583 = 0;
return rv2583; }
}
{ rt_int rv2584 = r_UNIFY(((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_2572))).f_ELEM, p_BS);
return rv2584; }
}
else if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv2585 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2585; }
}
else if ((!(((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2586 = 0;
return rv2586; }
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_2572))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_2572))).f_MHI, p_BS))))
{
{ rt_int rv2587 = 0;
return rv2587; }
}
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_N_REP) && (!r_UNIFY_REP(((*(R17 *)rt_nil_check(p_TS))).f_C, l_RT_2572, p_BS))))
{
{ rt_int rv2588 = 0;
return rv2588; }
}
}
if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2572))).f_KIND == g_T_INT)))
{
{ rt_int rv2589 = 0;
return rv2589; }
}
{ rt_int rv2590 = ((r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2572))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS)) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)2LL)), r_SOME(((rt_int)0LL)), p_BS));
return rv2590; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv2591 = ((((*(R22 *)rt_nil_check(l_RT_2572))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2572))).f_SCALE == ((rt_int)0LL)));
return rv2591; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2572))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv2592 = 0;
return rv2592; }
}
{ rt_int rv2593 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2572))).f_SCALE), p_BS);
return rv2593; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv2594 = (((*(R22 *)rt_nil_check(l_RT_2572))).f_KIND == g_T_BOOL);
return rv2594; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv2595 = ((((*(R22 *)rt_nil_check(l_RT_2572))).f_KIND == g_T_STR) && r_SAME_DERIVED_LENGTH(r_NTH_ARG(p_TS, ((rt_int)0LL)), l_RT_2572, p_BS));
return rv2595; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2572))).f_KIND == g_T_STR)))
{
{ rt_int rv2596 = 0;
return rv2596; }
}
if ((!(((*(R17 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv2597 = 1;
return rv2597; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_2572))).f_BASE == NULL)))
{
{ rt_int rv2598 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_2572))).f_BASE, p_BS);
return rv2598; }
}
{ rt_int rv2599 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv2599; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv2600 = ((((*(R22 *)rt_nil_check(l_RT_2572))).f_KIND == g_T_BITS) && r_SAME_DERIVED_LENGTH(r_NTH_ARG(p_TS, ((rt_int)0LL)), l_RT_2572, p_BS));
return rv2600; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv2601 = (((*(R22 *)rt_nil_check(l_RT_2572))).f_KIND == g_T_SEM);
return rv2601; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2572))).f_KIND == g_T_PTR)))
{
{ rt_int rv2602 = 0;
return rv2602; }
}
{ rt_int rv2603 = r_UNIFY(((*(R17 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_2572), p_BS);
return rv2603; }
}
{
R12 * l_Y_2604; memset(&l_Y_2604, 0, sizeof l_Y_2604);
l_Y_2604 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_2604 == NULL))
{
{ rt_int rv2605 = 0;
return rv2605; }
}
if (((((*(R12 *)rt_nil_check(l_Y_2604))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_2604))).f_DECL == NULL)))
{
{ rt_int rv2606 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_2604))).f_T, p_T);
return rv2606; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2604))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv2607 = 0;
return rv2607; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_2604))))
{
{ rt_int rv2608 = 0;
return rv2608; }
}
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2604))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2572))).f_KIND == g_T_REC)))
{
{ rt_int rv2609 = 0;
return rv2609; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2572))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv2610 = 0;
return rv2610; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2572))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_2604))))
{
{ rt_int rv2611 = 0;
return rv2611; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv2612 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2612; }
}
{ rt_int rv2613 = r_UNIFY(r_SUBST_FORMALS(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2604))).f_DECL))).f_B, ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2604))).f_DECL))).f_A, ((*(R17 *)rt_nil_check(p_TS))).f_A), l_RT_2572, p_BS);
return rv2613; }
}
{
R17 * l_F_2614; memset(&l_F_2614, 0, sizeof l_F_2614);
l_F_2614 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2604))).f_DECL))).f_A;
R17 * l_A_2615; memset(&l_A_2615, 0, sizeof l_A_2615);
l_A_2615 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R25 * l_V_2616; memset(&l_V_2616, 0, sizeof l_V_2616);
l_V_2616 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_2617; memset(&l_CLASS_2617, 0, sizeof l_CLASS_2617);
l_CLASS_2617 = r_RECORD_CLASS_OF(l_RT_2572);
for (;;) {
if ((l_F_2614 == NULL)) goto L_end2618;
{
{
R17 * l_N_2619; memset(&l_N_2619, 0, sizeof l_N_2619);
l_N_2619 = ((*(R17 *)rt_nil_check(l_F_2614))).f_A;
for (;;) {
if ((l_N_2619 == NULL)) goto L_end2620;
{
if ((l_A_2615 == NULL))
{
{ rt_int rv2621 = 0;
return rv2621; }
}
if ((((*(R17 *)rt_nil_check(l_F_2614))).f_B == NULL))
{
if ((!(l_CLASS_2617 == NULL)))
{
{
R21 * l_B_2622; memset(&l_B_2622, 0, sizeof l_B_2622);
l_B_2622 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_2617))).f_BINDINGS, ((*(R17 *)rt_nil_check(l_N_2619))).f_NAME);
if ((!(l_B_2622 == NULL)))
{
if ((!r_UNIFY(l_A_2615, ((*(R21 *)rt_nil_check(l_B_2622))).f_T, p_BS)))
{
{ rt_int rv2623 = 0;
return rv2623; }
}
}
}
}
}
else
{
if ((!(l_V_2616 == NULL)))
{
if ((((!(((*(R17 *)rt_nil_check(l_A_2615))).f_KIND == g_TS_GEN)) && (!(((*(R17 *)rt_nil_check(l_A_2615))).f_KIND == g_N_DONTCARE))) && (!(((*(R17 *)rt_nil_check(l_A_2615))).f_KIND == g_N_ANY))))
{
{
R23 l_M_2624; memset(&l_M_2624, 0, sizeof l_M_2624);
S_R23(&l_M_2624, r_MANIFEST(l_A_2615), 0);
if (((l_M_2624).f_OK && (((*(R25 *)rt_nil_check(l_V_2616))).f_MLO).f_OK))
{
if ((!((l_M_2624).f_V == (((*(R25 *)rt_nil_check(l_V_2616))).f_MLO).f_V)))
{
{ rt_int rv2625 = 0;
return rv2625; }
}
}
}
}
l_V_2616 = ((*(R25 *)rt_nil_check(l_V_2616))).f_NEXT;
}
}
l_A_2615 = ((*(R17 *)rt_nil_check(l_A_2615))).f_NEXT;
l_N_2619 = ((*(R17 *)rt_nil_check(l_N_2619))).f_NEXT;
}
RT_B_TICK();
} L_end2620: ;
}
l_F_2614 = ((*(R17 *)rt_nil_check(l_F_2614))).f_NEXT;
}
RT_B_TICK();
} L_end2618: ;
}
{ rt_int rv2626 = 1;
return rv2626; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_DERIVED_LENGTH(R17 * p_A, R22 * p_RT, R21 * p_BS) { RT_B_TICK(); 
if (((p_A == NULL) || (!(((*(R22 *)rt_nil_check(p_RT))).f_MLEN).f_OK)))
{
{ rt_int rv2627 = 1;
return rv2627; }
}
if (((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) || ((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2628 = 1;
return rv2628; }
}
{
R9 l_KEY_2629; memset(&l_KEY_2629, 0, sizeof l_KEY_2629);
S_R9(&l_KEY_2629, r_MKN(rt_b_cat(rt_str("%", 1), r_STR(((*(R17 *)rt_nil_check(p_A))).f_NAME, (((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN))), 0);
R21 * l_B_2630; memset(&l_B_2630, 0, sizeof l_B_2630);
l_B_2630 = r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, l_KEY_2629);
if ((!(l_B_2630 == NULL)))
{
{ rt_int rv2631 = (((*(R21 *)rt_nil_check(l_B_2630))).f_MV == (((*(R22 *)rt_nil_check(p_RT))).f_MLEN).f_V);
return rv2631; }
}
r_ADD_BIND(l_KEY_2629, NULL, ((*(R22 *)rt_nil_check(p_RT))).f_MLEN, NULL, p_BS);
{ rt_int rv2632 = 1;
return rv2632; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_REP(R17 * p_R, R22 * p_RT, R21 * p_BS) { RT_B_TICK(); 
R17 * l_A_2633; memset(&l_A_2633, 0, sizeof l_A_2633);
l_A_2633 = ((*(R22 *)rt_nil_check(p_RT))).f_REPS;
if (r_TEQS(((*(R17 *)rt_nil_check(p_R))).f_NAME, rt_str("FIXED_REP", 9)))
{
if ((!(((*(R22 *)rt_nil_check(p_RT))).f_KIND == g_T_INT)))
{
{ rt_int rv2634 = 0;
return rv2634; }
}
{
R9 l_SIGNING_2635; memset(&l_SIGNING_2635, 0, sizeof l_SIGNING_2635);
S_R9(&l_SIGNING_2635, r_MK(rt_str("SIGNED", 6)), 0);
if ((!(l_A_2633 == NULL)))
{
if ((!((r_TEQS(((*(R17 *)rt_nil_check(l_A_2633))).f_NAME, rt_str("FIXED_REP", 9)) || r_TEQS(((*(R17 *)rt_nil_check(l_A_2633))).f_NAME, rt_str("FIXED_STD", 9))))))
{
{ rt_int rv2636 = 1;
return rv2636; }
}
if ((r_TEQS(((*(R17 *)rt_nil_check(l_A_2633))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R17 *)rt_nil_check(l_A_2633))).f_A == NULL))))
{
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_2633))).f_A))).f_NEXT == NULL)))
{
S_R9(&l_SIGNING_2635, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_2633))).f_A))).f_NEXT))).f_NAME, 0);
}
}
}
if ((!r_UNIFY_VALUE(((*(R17 *)rt_nil_check(p_R))).f_A, r_STATIC_SIZE(p_RT), p_BS)))
{
{ rt_int rv2637 = 0;
return rv2637; }
}
if ((!(((*(R17 *)rt_nil_check(p_R))).f_A == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT == NULL)))
{
if (((((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_KIND == g_N_ENUMLIT))) && (!r_TEQ(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_NAME, l_SIGNING_2635))))
{
{ rt_int rv2638 = 0;
return rv2638; }
}
}
}
{ rt_int rv2639 = 1;
return rv2639; }
}
}
if ((l_A_2633 == NULL))
{
{ rt_int rv2640 = 1;
return rv2640; }
}
{ rt_int rv2641 = r_TEQ(((*(R17 *)rt_nil_check(p_R))).f_NAME, ((*(R17 *)rt_nil_check(l_A_2633))).f_NAME);
return rv2641; }
rt_raise(RT_X_INIT);
}
static rt_int r_NONSTANDARD_REP(R22 * p_T) { RT_B_TICK(); 
R17 * l_R_2642; memset(&l_R_2642, 0, sizeof l_R_2642);
l_R_2642 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
if ((l_R_2642 == NULL))
{
{ rt_int rv2643 = 0;
return rv2643; }
}
if ((((*(R17 *)rt_nil_check(l_R_2642))).f_KIND == g_TS_GEN))
{
{ rt_int rv2644 = 0;
return rv2644; }
}
{ rt_int rv2645 = (((((r_TEQS(((*(R17 *)rt_nil_check(l_R_2642))).f_NAME, rt_str("FIXED_REP", 9)) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2642))).f_NAME, rt_str("ENUM_REP", 8))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2642))).f_NAME, rt_str("ENUM_VAL_REP", 12))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2642))).f_NAME, rt_str("CHAR_STR_REP", 12))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2642))).f_NAME, rt_str("ARRAY_REP", 9))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2642))).f_NAME, rt_str("RECORD_REP", 10)));
return rv2645; }
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { RT_B_TICK(); 
R12 * l_R_2646; memset(&l_R_2646, 0, sizeof l_R_2646);
l_R_2646 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv2647 = NULL;
return rv2647; }
}
for (;;) {
if ((l_R_2646 == NULL)) goto L_end2648;
{
if ((((*(R12 *)rt_nil_check(l_R_2646))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv2649 = l_R_2646;
return rv2649; }
}
l_R_2646 = ((*(R12 *)rt_nil_check(l_R_2646))).f_INSTANCES;
}
RT_B_TICK();
} L_end2648: ;
{ R12 * rv2650 = NULL;
return rv2650; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R17 * p_A, R23 p_M, R21 * p_BS) { RT_B_TICK(); 
if ((p_A == NULL))
{
{ rt_int rv2651 = 1;
return rv2651; }
}
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2652 = 1;
return rv2652; }
}
else if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2653 = 1;
return rv2653; }
}
{
R21 * l_B_2654; memset(&l_B_2654, 0, sizeof l_B_2654);
l_B_2654 = r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, ((*(R17 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_2654 == NULL)))
{
{ rt_int rv2655 = ((((*(R21 *)rt_nil_check(l_B_2654))).f_HASMV && (p_M).f_OK) && (((*(R21 *)rt_nil_check(l_B_2654))).f_MV == (p_M).f_V));
return rv2655; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv2656 = 0;
return rv2656; }
}
r_ADD_BIND(((*(R17 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv2657 = 1;
return rv2657; }
}
{
R23 l_V_2658; memset(&l_V_2658, 0, sizeof l_V_2658);
S_R23(&l_V_2658, r_MANIFEST(p_A), 0);
if (((l_V_2658).f_OK && (p_M).f_OK))
{
{ rt_int rv2659 = ((l_V_2658).f_V == (p_M).f_V);
return rv2659; }
}
}
{ rt_int rv2660 = 1;
return rv2660; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R21 * p_BS) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv2661 = 0;
return rv2661; }
}
if (((!(((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME)) && (!(((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_APPLY))))
{
{ rt_int rv2662 = 0;
return rv2662; }
}
{ rt_int rv2663 = (!(r_FIND_ROUTINE_ARG(((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R27 *)rt_nil_check(p_A))).f_E, p_BS, ((rt_int)0LL), 0) == NULL));
return rv2663; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv2664 = 1;
return rv2664; }
}
r_TYPE_ARG(p_A);
{ rt_int rv2665 = r_UNIFY(((*(R28 *)rt_nil_check(p_P))).f_TS, (((*(R27 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv2665; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_BS_2666; memset(&l_BS_2666, 0, sizeof l_BS_2666);
l_BS_2666 = r_NEW_BINDS();
R28 * l_P_2667; memset(&l_P_2667, 0, sizeof l_P_2667);
l_P_2667 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2668; memset(&l_A_2668, 0, sizeof l_A_2668);
l_A_2668 = p_ARGS;
for (;;) {
if ((l_P_2667 == NULL)) goto L_end2669;
{
if ((((*(R28 *)rt_nil_check(l_P_2667))).f_TS == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2668))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2667))).f_NAME, r_ARG_TYPE(((*(R27 *)rt_nil_check(l_A_2668))).f_E), r_NO_MVAL(), NULL, l_BS_2666);
}
else if ((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2667))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2667))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R28 *)rt_nil_check(l_P_2667))).f_TS, ((*(R27 *)rt_nil_check(l_A_2668))).f_E, p_LINE), l_BS_2666);
}
else if (((((!(((*(R27 *)rt_nil_check(l_A_2668))).f_E == NULL)) && (!((*(R27 *)rt_nil_check(l_A_2668))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R28 *)rt_nil_check(l_P_2667))).f_TS))) && (((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2668))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R27 *)rt_nil_check(l_A_2668))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(l_A_2668))).f_V, r_EXPR(((*(R27 *)rt_nil_check(l_A_2668))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(l_A_2668))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R28 *)rt_nil_check(l_P_2667))).f_TS, (((*(R27 *)rt_nil_check(l_A_2668))).f_V).f_T, l_BS_2666)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R28 *)rt_nil_check(l_P_2667))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2667))).f_TS))
{
r_ADD_BIND(r_MKN(rt_b_cat(rt_str("\?", 1), r_STR(((*(R28 *)rt_nil_check(l_P_2667))).f_NAME, (((*(R28 *)rt_nil_check(l_P_2667))).f_NAME).f_LEN))), (((*(R27 *)rt_nil_check(l_A_2668))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_2666);
}
}
l_P_2667 = ((*(R28 *)rt_nil_check(l_P_2667))).f_NEXT;
l_A_2668 = ((*(R27 *)rt_nil_check(l_A_2668))).f_NEXT;
}
RT_B_TICK();
} L_end2669: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_2666);
{
R12 * l_I_2670; memset(&l_I_2670, 0, sizeof l_I_2670);
l_I_2670 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2670 == NULL)) goto L_end2671;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2670))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_BS_2666))).f_NEXT))
{
{ R12 * rv2672 = l_I_2670;
return rv2672; }
}
l_I_2670 = ((*(R12 *)rt_nil_check(l_I_2670))).f_INSTANCES;
}
RT_B_TICK();
} L_end2671: ;
}
{ R12 * rv2673 = r_NEW_INSTANCE(p_G, ((*(R21 *)rt_nil_check(l_BS_2666))).f_NEXT, p_ARGS);
return rv2673; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_2674; memset(&l_P_2674, 0, sizeof l_P_2674);
l_P_2674 = p_A;
for (;;) {
if ((l_P_2674 == NULL)) goto L_end2675;
{
{
R21 * l_Q_2676; memset(&l_Q_2676, 0, sizeof l_Q_2676);
l_Q_2676 = r_FIND_BIND(p_B, ((*(R21 *)rt_nil_check(l_P_2674))).f_NAME);
if ((l_Q_2676 == NULL))
{
{ rt_int rv2677 = 0;
return rv2677; }
}
if (((!(((*(R21 *)rt_nil_check(l_P_2674))).f_T == NULL)) || (!(((*(R21 *)rt_nil_check(l_Q_2676))).f_T == NULL))))
{
if (((((*(R21 *)rt_nil_check(l_P_2674))).f_T == NULL) || (((*(R21 *)rt_nil_check(l_Q_2676))).f_T == NULL)))
{
{ rt_int rv2678 = 0;
return rv2678; }
}
if ((!r_SAME_TYPE(((*(R21 *)rt_nil_check(l_P_2674))).f_T, ((*(R21 *)rt_nil_check(l_Q_2676))).f_T)))
{
{ rt_int rv2679 = 0;
return rv2679; }
}
if ((!r_SAME_LENGTH(((*(R21 *)rt_nil_check(l_P_2674))).f_T, ((*(R21 *)rt_nil_check(l_Q_2676))).f_T)))
{
{ rt_int rv2680 = 0;
return rv2680; }
}
if ((!r_SAME_REPS(((*(R21 *)rt_nil_check(l_P_2674))).f_T, ((*(R21 *)rt_nil_check(l_Q_2676))).f_T)))
{
{ rt_int rv2681 = 0;
return rv2681; }
}
}
if ((((!(((*(R21 *)rt_nil_check(l_P_2674))).f_HASMV == ((*(R21 *)rt_nil_check(l_Q_2676))).f_HASMV)) || (!(((*(R21 *)rt_nil_check(l_P_2674))).f_MV == ((*(R21 *)rt_nil_check(l_Q_2676))).f_MV))) || (!(((*(R21 *)rt_nil_check(l_P_2674))).f_R == ((*(R21 *)rt_nil_check(l_Q_2676))).f_R))))
{
{ rt_int rv2682 = 0;
return rv2682; }
}
}
l_P_2674 = ((*(R21 *)rt_nil_check(l_P_2674))).f_NEXT;
}
RT_B_TICK();
} L_end2675: ;
{ rt_int rv2683 = 1;
return rv2683; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2684; memset(&l_RA_2684, 0, sizeof l_RA_2684);
l_RA_2684 = r_REAL_TYPE(p_A);
R22 * l_RB_2685; memset(&l_RB_2685, 0, sizeof l_RB_2685);
l_RB_2685 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_2684))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_2684))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_2684))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_2685))).f_KIND))))
{
{ rt_int rv2686 = 1;
return rv2686; }
}
if (((((*(R22 *)rt_nil_check(l_RA_2684))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_2685))).f_MLEN).f_OK))
{
{ rt_int rv2687 = ((((*(R22 *)rt_nil_check(l_RA_2684))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_2685))).f_MLEN).f_V);
return rv2687; }
}
{ rt_int rv2688 = ((((*(R22 *)rt_nil_check(l_RA_2684))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_2685))).f_MLEN).f_OK);
return rv2688; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R17 * l_RA_2689; memset(&l_RA_2689, 0, sizeof l_RA_2689);
l_RA_2689 = ((*(R22 *)rt_nil_check(p_A))).f_REPS;
R17 * l_RB_2690; memset(&l_RB_2690, 0, sizeof l_RB_2690);
l_RB_2690 = ((*(R22 *)rt_nil_check(p_B))).f_REPS;
if (((l_RA_2689 == NULL) || (l_RB_2690 == NULL)))
{
{ rt_int rv2691 = (l_RA_2689 == l_RB_2690);
return rv2691; }
}
if ((l_RA_2689 == l_RB_2690))
{
{ rt_int rv2692 = 1;
return rv2692; }
}
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_RA_2689))).f_NAME, ((*(R17 *)rt_nil_check(l_RB_2690))).f_NAME)))
{
{ rt_int rv2693 = 0;
return rv2693; }
}
{
R17 * l_X_2694; memset(&l_X_2694, 0, sizeof l_X_2694);
l_X_2694 = ((*(R17 *)rt_nil_check(l_RA_2689))).f_A;
R17 * l_Y_2695; memset(&l_Y_2695, 0, sizeof l_Y_2695);
l_Y_2695 = ((*(R17 *)rt_nil_check(l_RB_2690))).f_A;
for (;;) {
if (((l_X_2694 == NULL) || (l_Y_2695 == NULL))) goto L_end2696;
{
if (((((((*(R17 *)rt_nil_check(l_X_2694))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_X_2694))).f_KIND == g_N_ENUMLIT))) && (((((*(R17 *)rt_nil_check(l_Y_2695))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_Y_2695))).f_KIND == g_N_ENUMLIT)))))
{
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_X_2694))).f_NAME, ((*(R17 *)rt_nil_check(l_Y_2695))).f_NAME)))
{
{ rt_int rv2697 = 0;
return rv2697; }
}
}
else
{
{
R23 l_MX_2698; memset(&l_MX_2698, 0, sizeof l_MX_2698);
S_R23(&l_MX_2698, r_MANIFEST(l_X_2694), 0);
R23 l_MY_2699; memset(&l_MY_2699, 0, sizeof l_MY_2699);
S_R23(&l_MY_2699, r_MANIFEST(l_Y_2695), 0);
if (((!((l_MX_2698).f_OK == (l_MY_2699).f_OK)) || (!((l_MX_2698).f_V == (l_MY_2699).f_V))))
{
{ rt_int rv2700 = 0;
return rv2700; }
}
}
}
l_X_2694 = ((*(R17 *)rt_nil_check(l_X_2694))).f_NEXT;
l_Y_2695 = ((*(R17 *)rt_nil_check(l_Y_2695))).f_NEXT;
}
RT_B_TICK();
} L_end2696: ;
{ rt_int rv2701 = ((((l_X_2694 == NULL) && (l_Y_2695 == NULL)) && (((*(R17 *)rt_nil_check(l_RA_2689))).f_B == NULL)) && (((*(R17 *)rt_nil_check(l_RB_2690))).f_B == NULL));
return rv2701; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R17 * p_TS, R17 * p_E, rt_int p_LINE) { RT_B_TICK(); 
{ R12 * rv2702 = r_FIND_ROUTINE_ARG(p_TS, p_E, NULL, p_LINE, 1);
return rv2702; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE_ARG(R17 * p_TS, R17 * p_E, R21 * p_BS0, rt_int p_LINE, rt_int p_STRICT) { RT_B_TICK(); 
R12 * l_Y_2703; memset(&l_Y_2703, 0, sizeof l_Y_2703);
l_Y_2703 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_2704; memset(&l_FOUND_2704, 0, sizeof l_FOUND_2704);
l_FOUND_2704 = NULL;
R21 * l_BS_2705; memset(&l_BS_2705, 0, sizeof l_BS_2705);
l_BS_2705 = p_BS0;
if ((l_BS_2705 == NULL))
{
l_BS_2705 = r_NEW_BINDS();
}
for (;;) {
if ((l_Y_2703 == NULL)) goto L_end2706;
{
if ((((*(R12 *)rt_nil_check(l_Y_2703))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_2707; memset(&l_R_2707, 0, sizeof l_R_2707);
l_R_2707 = r_ORIGINAL(l_Y_2703);
R21 * l_TRY_2708; memset(&l_TRY_2708, 0, sizeof l_TRY_2708);
l_TRY_2708 = r_NEW_BINDS();
((*(R21 *)rt_nil_check(l_TRY_2708))).f_NEXT = ((*(R21 *)rt_nil_check(l_BS_2705))).f_NEXT;
r_ROUTINE_HEADER(l_R_2707);
if ((((!((*(R12 *)rt_nil_check(l_R_2707))).f_GENERIC) && r_EXPLICIT_TEMPLATE_FITS(p_E, l_R_2707)) && r_TEMPLATE_FITS(p_TS, l_R_2707, l_TRY_2708)))
{
if (((!(l_FOUND_2704 == NULL)) && (!(l_FOUND_2704 == l_R_2707))))
{
if ((!p_STRICT))
{
{ R12 * rv2709 = NULL;
return rv2709; }
}
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_2704 = l_R_2707;
}
}
}
l_Y_2703 = r_LOOKUP_NEXT(l_Y_2703);
}
RT_B_TICK();
} L_end2706: ;
if ((l_FOUND_2704 == NULL))
{
if ((!p_STRICT))
{
{ R12 * rv2710 = NULL;
return rv2710; }
}
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter (5.1): ", 45), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_2704))).f_USES == NULL)))
{
if ((!p_STRICT))
{
{ R12 * rv2711 = NULL;
return rv2711; }
}
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (p_STRICT)
{
if ((!r_TEMPLATE_FITS(p_TS, l_FOUND_2704, l_BS_2705)))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter (5.1): ", 45), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
r_NEED_BODY(l_FOUND_2704);
}
{ R12 * rv2712 = l_FOUND_2704;
return rv2712; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPLICIT_TEMPLATE_FITS(R17 * p_E, R12 * p_R) { RT_B_TICK(); 
R17 * l_A_2713; memset(&l_A_2713, 0, sizeof l_A_2713);
l_A_2713 = ((*(R17 *)rt_nil_check(p_E))).f_A;
R28 * l_Q_2714; memset(&l_Q_2714, 0, sizeof l_Q_2714);
l_Q_2714 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY)))
{
{ rt_int rv2715 = 1;
return rv2715; }
}
if (((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
{ rt_int rv2716 = 0;
return rv2716; }
}
for (;;) {
if (((l_A_2713 == NULL) || (l_Q_2714 == NULL))) goto L_end2717;
{
if ((((*(R28 *)rt_nil_check(l_Q_2714))).f_T == NULL))
{
{ rt_int rv2718 = 0;
return rv2718; }
}
if ((!r_IDENTICAL_TYPE(r_RESOLVE(r_EXPR_TO_TS(l_A_2713)), ((*(R28 *)rt_nil_check(l_Q_2714))).f_T)))
{
{ rt_int rv2719 = 0;
return rv2719; }
}
l_A_2713 = ((*(R17 *)rt_nil_check(l_A_2713))).f_NEXT;
l_Q_2714 = ((*(R28 *)rt_nil_check(l_Q_2714))).f_NEXT;
}
RT_B_TICK();
} L_end2717: ;
if (((!(l_A_2713 == NULL)) || (!(l_Q_2714 == NULL))))
{
{ rt_int rv2720 = 0;
return rv2720; }
}
if ((!(((*(R17 *)rt_nil_check(p_E))).f_E == NULL)))
{
{ rt_int rv2721 = r_IDENTICAL_TYPE(r_RESOLVE(((*(R17 *)rt_nil_check(p_E))).f_E), ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2721; }
}
{ rt_int rv2722 = 1;
return rv2722; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEMPLATE_FITS(R17 * p_TS, R12 * p_R, R21 * p_BS) { RT_B_TICK(); 
R17 * l_P_2723; memset(&l_P_2723, 0, sizeof l_P_2723);
l_P_2723 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R28 * l_Q_2724; memset(&l_Q_2724, 0, sizeof l_Q_2724);
l_Q_2724 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
if ((!(((((*(R17 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL))) == ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_IV == ((rt_int)1LL))))))
{
{ rt_int rv2725 = 0;
return rv2725; }
}
for (;;) {
if (((l_P_2723 == NULL) || (l_Q_2724 == NULL))) goto L_end2726;
{
if ((!(((*(R17 *)rt_nil_check(l_P_2723))).f_IV == ((*(R28 *)rt_nil_check(l_Q_2724))).f_MODE)))
{
{ rt_int rv2727 = 0;
return rv2727; }
}
if (((((*(R17 *)rt_nil_check(l_P_2723))).f_B == NULL) || (((*(R28 *)rt_nil_check(l_Q_2724))).f_T == NULL)))
{
if (((!(((*(R17 *)rt_nil_check(l_P_2723))).f_B == NULL)) || (!(((*(R28 *)rt_nil_check(l_Q_2724))).f_T == NULL))))
{
{ rt_int rv2728 = 0;
return rv2728; }
}
}
else if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_2723))).f_B))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2729 = 0;
return rv2729; }
}
else if ((!r_TYPE_FITS_SPEC(((*(R17 *)rt_nil_check(l_P_2723))).f_B, ((*(R28 *)rt_nil_check(l_Q_2724))).f_T, p_BS)))
{
{ rt_int rv2730 = 0;
return rv2730; }
}
l_P_2723 = ((*(R17 *)rt_nil_check(l_P_2723))).f_NEXT;
l_Q_2724 = ((*(R28 *)rt_nil_check(l_Q_2724))).f_NEXT;
}
RT_B_TICK();
} L_end2726: ;
if (((!(l_P_2723 == NULL)) || (!(l_Q_2724 == NULL))))
{
{ rt_int rv2731 = 0;
return rv2731; }
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if ((!r_TYPE_FITS_SPEC(((*(R17 *)rt_nil_check(p_TS))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT, p_BS)))
{
{ rt_int rv2732 = 0;
return rv2732; }
}
}
{
R17 * l_X_2733; memset(&l_X_2733, 0, sizeof l_X_2733);
l_X_2733 = ((*(R17 *)rt_nil_check(p_TS))).f_D;
for (;;) {
if ((l_X_2733 == NULL)) goto L_end2734;
{
if ((!r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_D))).f_A, ((*(R17 *)rt_nil_check(l_X_2733))).f_NAME)))
{
{ rt_int rv2735 = 0;
return rv2735; }
}
l_X_2733 = ((*(R17 *)rt_nil_check(l_X_2733))).f_NEXT;
}
RT_B_TICK();
} L_end2734: ;
}
{ rt_int rv2736 = 1;
return rv2736; }
rt_raise(RT_X_INIT);
}
static rt_int r_TYPE_FITS_SPEC(R17 * p_TS, R22 * p_T, R21 * p_BS) { RT_B_TICK(); 
if ((r_STATIC_GENERIC(p_TS) || r_HAS_DERIVED(p_TS)))
{
{ rt_int rv2737 = r_UNIFY(p_TS, p_T, p_BS);
return rv2737; }
}
{ rt_int rv2738 = r_IDENTICAL_TYPE(r_RESOLVE(p_TS), p_T);
return rv2738; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_DERIVED(R17 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2739 = 0;
return rv2739; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2740 = 1;
return rv2740; }
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if (r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(p_TS))).f_A))
{
{ rt_int rv2741 = 1;
return rv2741; }
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if ((r_HAS_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_A) || r_HAS_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_B)))
{
{ rt_int rv2742 = 1;
return rv2742; }
}
}
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2743 = 1;
return rv2743; }
}
{ rt_int rv2744 = 0;
return rv2744; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R21 * p_BS) { RT_B_TICK(); 
R17 * l_NEEDL_2745; memset(&l_NEEDL_2745, 0, sizeof l_NEEDL_2745);
l_NEEDL_2745 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R21 * l_SAVED_2746; memset(&l_SAVED_2746, 0, sizeof l_SAVED_2746);
l_SAVED_2746 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R21 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_2745 == NULL)) goto L_end2747;
{
{
R17 * l_T_2748; memset(&l_T_2748, 0, sizeof l_T_2748);
l_T_2748 = ((*(R17 *)rt_nil_check(l_NEEDL_2745))).f_A;
for (;;) {
if ((l_T_2748 == NULL)) goto L_end2749;
{
if ((r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, ((*(R17 *)rt_nil_check(l_T_2748))).f_NAME) == NULL))
{
{
R27 * l_ARGS_2750; memset(&l_ARGS_2750, 0, sizeof l_ARGS_2750);
l_ARGS_2750 = NULL;
R27 * l_TAIL_2751; memset(&l_TAIL_2751, 0, sizeof l_TAIL_2751);
l_TAIL_2751 = NULL;
R17 * l_P_2752; memset(&l_P_2752, 0, sizeof l_P_2752);
l_P_2752 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_T_2748))).f_B))).f_A;
R12 * l_R_2753; memset(&l_R_2753, 0, sizeof l_R_2753);
rt_int l_ENTERED_2754; memset(&l_ENTERED_2754, 0, sizeof l_ENTERED_2754);
l_ENTERED_2754 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_2752 == NULL)) goto L_end2755;
{
{
R27 * l_A_2756; memset(&l_A_2756, 0, sizeof l_A_2756);
if ((((*(R17 *)rt_nil_check(l_P_2752))).f_B == NULL))
{
l_A_2756 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_2756 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R17 *)rt_nil_check(l_P_2752))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R27 *)rt_nil_check(l_A_2756))).f_MODE = ((*(R17 *)rt_nil_check(l_P_2752))).f_IV;
if ((l_TAIL_2751 == NULL))
{
l_ARGS_2750 = l_A_2756;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2751))).f_NEXT = l_A_2756;
}
l_TAIL_2751 = l_A_2756;
}
l_P_2752 = ((*(R17 *)rt_nil_check(l_P_2752))).f_NEXT;
}
RT_B_TICK();
} L_end2755: ;
if (l_ENTERED_2754)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_2753 = r_FIND_ROUTINE(((*(R17 *)rt_nil_check(l_T_2748))).f_NAME, l_ARGS_2750, p_LINE, 0);
if ((l_R_2753 == NULL))
{
l_R_2753 = r_LOOKUP(((*(R17 *)rt_nil_check(l_T_2748))).f_NAME);
for (;;) {
if ((l_R_2753 == NULL)) goto L_end2757;
{
if ((((*(R12 *)rt_nil_check(l_R_2753))).f_KIND == g_Y_BUILTIN))
{
goto L_end2757;
}
l_R_2753 = r_LOOKUP_NEXT(l_R_2753);
}
RT_B_TICK();
} L_end2757: ;
}
if (((l_R_2753 == NULL) && (!r_IS_OPERATOR_NAME(((*(R17 *)rt_nil_check(l_T_2748))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R17 *)rt_nil_check(l_T_2748))).f_NAME);
}
if ((!(l_R_2753 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_R_2753))).f_KIND == g_Y_ROUTINE))
{
r_COMPUTE_USES(r_ORIGINAL(l_R_2753));
if ((!(((*(R12 *)rt_nil_check(r_ORIGINAL(l_R_2753)))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine named in a WHERE clause may not import data (5.2): ", 61), ((*(R17 *)rt_nil_check(l_T_2748))).f_NAME);
}
}
r_ADD_BIND(((*(R17 *)rt_nil_check(l_T_2748))).f_NAME, NULL, r_NO_MVAL(), l_R_2753, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R21 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_2748 = ((*(R17 *)rt_nil_check(l_T_2748))).f_NEXT;
}
RT_B_TICK();
} L_end2749: ;
}
l_NEEDL_2745 = ((*(R17 *)rt_nil_check(l_NEEDL_2745))).f_NEXT;
}
RT_B_TICK();
} L_end2747: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2746;
}
static rt_int r_DONTCARE_TYPE_ARG(R17 * p_TS) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2758 = 0;
return rv2758; }
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{
R17 * l_A_2759; memset(&l_A_2759, 0, sizeof l_A_2759);
l_A_2759 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_A_2759 == NULL)) goto L_end2760;
{
if ((((*(R17 *)rt_nil_check(l_A_2759))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2761 = 1;
return rv2761; }
}
l_A_2759 = ((*(R17 *)rt_nil_check(l_A_2759))).f_NEXT;
}
RT_B_TICK();
} L_end2760: ;
}
{ rt_int rv2762 = 0;
return rv2762; }
}
{
R12 * l_Y_2763; memset(&l_Y_2763, 0, sizeof l_Y_2763);
l_Y_2763 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
R17 * l_A_2764; memset(&l_A_2764, 0, sizeof l_A_2764);
l_A_2764 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R17 * l_F_2765; memset(&l_F_2765, 0, sizeof l_F_2765);
if ((l_Y_2763 == NULL))
{
{ rt_int rv2766 = 0;
return rv2766; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2763))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_2763))).f_DECL == NULL)))
{
{ rt_int rv2767 = 0;
return rv2767; }
}
l_F_2765 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2763))).f_DECL))).f_A;
for (;;) {
if ((l_F_2765 == NULL)) goto L_end2768;
{
{
R17 * l_N_2769; memset(&l_N_2769, 0, sizeof l_N_2769);
l_N_2769 = ((*(R17 *)rt_nil_check(l_F_2765))).f_A;
for (;;) {
if ((l_N_2769 == NULL)) goto L_end2770;
{
if ((l_A_2764 == NULL))
{
{ rt_int rv2771 = 0;
return rv2771; }
}
if (((((*(R17 *)rt_nil_check(l_F_2765))).f_B == NULL) && (((*(R17 *)rt_nil_check(l_A_2764))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2772 = 1;
return rv2772; }
}
l_A_2764 = ((*(R17 *)rt_nil_check(l_A_2764))).f_NEXT;
l_N_2769 = ((*(R17 *)rt_nil_check(l_N_2769))).f_NEXT;
}
RT_B_TICK();
} L_end2770: ;
}
l_F_2765 = ((*(R17 *)rt_nil_check(l_F_2765))).f_NEXT;
}
RT_B_TICK();
} L_end2768: ;
}
{ rt_int rv2773 = 0;
return rv2773; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R21 * p_BS, R27 * p_ARGS) { RT_B_TICK(); 
R27 * l_A_2774; memset(&l_A_2774, 0, sizeof l_A_2774);
l_A_2774 = p_ARGS;
R12 * l_I_2775; memset(&l_I_2775, 0, sizeof l_I_2775);
l_I_2775 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R21 * l_SAVED_2776; memset(&l_SAVED_2776, 0, sizeof l_SAVED_2776);
l_SAVED_2776 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R12 * l_SAVED_SEG_2777; memset(&l_SAVED_SEG_2777, 0, sizeof l_SAVED_SEG_2777);
l_SAVED_SEG_2777 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R12 * l_HOME_2778; memset(&l_HOME_2778, 0, sizeof l_HOME_2778);
l_HOME_2778 = r_ENTER_HOME(p_G);
R28 * l_P_2779; memset(&l_P_2779, 0, sizeof l_P_2779);
l_P_2779 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R28 * l_TAIL_2780; memset(&l_TAIL_2780, 0, sizeof l_TAIL_2780);
l_TAIL_2780 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_2775)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_2775))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_2775))).f_LINKAGE = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_I_2775))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_2775))).f_PARAMS = NULL;
S_R9(&((*(R12 *)rt_nil_check(l_I_2775))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_2775))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_2775;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(p_G))).f_HOME;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_2779 == NULL)) goto L_end2781;
{
{
R28 * l_PM_2782; memset(&l_PM_2782, 0, sizeof l_PM_2782);
l_PM_2782 = ((R28 *)rt_b_new(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2782)), (*(R28 *)rt_nil_check(l_P_2779)), 0);
((*(R28 *)rt_nil_check(l_PM_2782))).f_NEXT = NULL;
if ((((*(R28 *)rt_nil_check(l_P_2779))).f_TS == NULL))
{
((*(R28 *)rt_nil_check(l_PM_2782))).f_T = NULL;
}
else if ((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2779))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R28 *)rt_nil_check(l_PM_2782))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2779))).f_TS) && ((*(R27 *)rt_nil_check(l_A_2774))).f_HAVE))
{
((*(R28 *)rt_nil_check(l_PM_2782))).f_T = (((*(R27 *)rt_nil_check(l_A_2774))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2782))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2782))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R28 *)rt_nil_check(l_PM_2782))).f_T = ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2782))).f_T))).f_BASE;
}
}
}
else
{
((*(R28 *)rt_nil_check(l_PM_2782))).f_T = r_RESOLVE(((*(R28 *)rt_nil_check(l_P_2779))).f_TS);
}
if ((!(((*(R28 *)rt_nil_check(l_P_2779))).f_TS == NULL)))
{
if (((((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2779))).f_TS))).f_KIND == g_TS_GEN) || (((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2779))).f_TS))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2779))).f_TS))).f_A == NULL))))) && ((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2779))).f_TS))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((!(r_FIND_BIND(p_BS, ((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2779))).f_TS))).f_NAME) == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(r_FIND_BIND(p_BS, ((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2779))).f_TS))).f_NAME)))).f_T == NULL)))
{
((*(R28 *)rt_nil_check(l_PM_2782))).f_T = r_MARK_GENP(((*(R28 *)rt_nil_check(l_PM_2782))).f_T, ((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2779))).f_TS))).f_NAME);
}
}
}
}
((*(R28 *)rt_nil_check(l_PM_2782))).f_TS = NULL;
if ((l_TAIL_2780 == NULL))
{
((*(R12 *)rt_nil_check(l_I_2775))).f_PARAMS = l_PM_2782;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2780))).f_NEXT = l_PM_2782;
}
l_TAIL_2780 = l_PM_2782;
}
l_P_2779 = ((*(R28 *)rt_nil_check(l_P_2779))).f_NEXT;
l_A_2774 = ((*(R27 *)rt_nil_check(l_A_2774))).f_NEXT;
}
RT_B_TICK();
} L_end2781: ;
((*(R12 *)rt_nil_check(l_I_2775))).f_RESULT = r_RESULT_TYPE(l_I_2775);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2776;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_2777;
r_LEAVE_HOME(p_G, l_HOME_2778);
S_R9(&((*(R12 *)rt_nil_check(l_I_2775))).f_FWD, r_C_HEADER(l_I_2775), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_2775))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_2775))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_2775;
{ R12 * rv2783 = l_I_2775;
return rv2783; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R9 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2784 = 0;
return rv2784; }
}
{ rt_int rv2785 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv2785; }
rt_raise(RT_X_INIT);
}
static R17 * r_SUBST_FORMALS(R17 * p_TS, R17 * p_FORMALS, R17 * p_ARGS) { RT_B_TICK(); 
R17 * l_C_2786; memset(&l_C_2786, 0, sizeof l_C_2786);
if ((p_TS == NULL))
{
{ R17 * rv2787 = NULL;
return rv2787; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R17 * l_F_2788; memset(&l_F_2788, 0, sizeof l_F_2788);
l_F_2788 = p_FORMALS;
R17 * l_A_2789; memset(&l_A_2789, 0, sizeof l_A_2789);
l_A_2789 = p_ARGS;
for (;;) {
if ((l_F_2788 == NULL)) goto L_end2790;
{
{
R17 * l_N_2791; memset(&l_N_2791, 0, sizeof l_N_2791);
l_N_2791 = ((*(R17 *)rt_nil_check(l_F_2788))).f_A;
for (;;) {
if ((l_N_2791 == NULL)) goto L_end2792;
{
if ((l_A_2789 == NULL))
{
{ R17 * rv2793 = p_TS;
return rv2793; }
}
if (((((*(R17 *)rt_nil_check(l_F_2788))).f_B == NULL) && r_TEQ(((*(R17 *)rt_nil_check(l_N_2791))).f_NAME, ((*(R17 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R17 * rv2794 = l_A_2789;
return rv2794; }
}
l_A_2789 = ((*(R17 *)rt_nil_check(l_A_2789))).f_NEXT;
l_N_2791 = ((*(R17 *)rt_nil_check(l_N_2791))).f_NEXT;
}
RT_B_TICK();
} L_end2792: ;
}
l_F_2788 = ((*(R17 *)rt_nil_check(l_F_2788))).f_NEXT;
}
RT_B_TICK();
} L_end2790: ;
}
{ R17 * rv2795 = p_TS;
return rv2795; }
}
l_C_2786 = r_COPY_NODE(p_TS);
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R17 *)rt_nil_check(l_C_2786))).f_C = r_SUBST_FORMALS(((*(R17 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R17 *)rt_nil_check(l_C_2786))).f_A = r_SUBST_FORMALS(((*(R17 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R17 * rv2796 = l_C_2786;
return rv2796; }
rt_raise(RT_X_INIT);
}
static R17 * r_COPY_NODE(R17 * p_N) { RT_B_TICK(); 
R17 * l_C_2797; memset(&l_C_2797, 0, sizeof l_C_2797);
l_C_2797 = ((R17 *)rt_b_new(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_C_2797)), (*(R17 *)rt_nil_check(p_N)), 0);
((*(R17 *)rt_nil_check(l_C_2797))).f_NEXT = NULL;
{ R17 * rv2798 = l_C_2797;
return rv2798; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R17 * p_L, R9 p_NAME) { RT_B_TICK(); 
R17 * l_P_2799; memset(&l_P_2799, 0, sizeof l_P_2799);
l_P_2799 = p_L;
for (;;) {
if ((l_P_2799 == NULL)) goto L_end2800;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_2799))).f_NAME, p_NAME))
{
{ rt_int rv2801 = 1;
return rv2801; }
}
l_P_2799 = ((*(R17 *)rt_nil_check(l_P_2799))).f_NEXT;
}
RT_B_TICK();
} L_end2800: ;
{ rt_int rv2802 = 0;
return rv2802; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_IS_2803; memset(&l_IS_2803, 0, sizeof l_IS_2803);
l_IS_2803 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv2804 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2804; }
}
if ((l_IS_2803 == NULL))
{
{ rt_int rv2805 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2805; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R20 *)rt_nil_check(l_IS_2803))).f_ID) || (((*(R20 *)rt_nil_check(l_IS_2803))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv2806 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2806; }
}
if ((!(((*(R20 *)rt_nil_check(l_IS_2803))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2803))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2807 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2807; }
}
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2803))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2808 = 0;
return rv2808; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { RT_B_TICK(); 
R17 * l_ITEMS_2809; memset(&l_ITEMS_2809, 0, sizeof l_ITEMS_2809);
l_ITEMS_2809 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R17 * l_HEAD_2810; memset(&l_HEAD_2810, 0, sizeof l_HEAD_2810);
l_HEAD_2810 = NULL;
R17 * l_TAIL_2811; memset(&l_TAIL_2811, 0, sizeof l_TAIL_2811);
l_TAIL_2811 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_2809 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R17 *)rt_nil_check(l_ITEMS_2809))).f_A, &l_HEAD_2810, &l_TAIL_2811);
r_ADD_USES(((*(R17 *)rt_nil_check(l_ITEMS_2809))).f_B, &l_HEAD_2810, &l_TAIL_2811);
{
R17 * l_R_2812; memset(&l_R_2812, 0, sizeof l_R_2812);
l_R_2812 = ((*(R17 *)rt_nil_check(l_ITEMS_2809))).f_C;
for (;;) {
if ((l_R_2812 == NULL)) goto L_end2813;
{
{
R12 * l_Z_2814; memset(&l_Z_2814, 0, sizeof l_Z_2814);
l_Z_2814 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_2812))).f_NAME);
if (((l_Z_2814 == NULL) && (!r_LOCAL_MODULE_EXPORTS(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_C, ((*(R17 *)rt_nil_check(l_R_2812))).f_NAME))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_R_2812))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R17 *)rt_nil_check(l_R_2812))).f_NAME);
}
for (;;) {
if ((l_Z_2814 == NULL)) goto L_end2815;
{
if ((((*(R12 *)rt_nil_check(l_Z_2814))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2816; memset(&l_O_2816, 0, sizeof l_O_2816);
l_O_2816 = r_ORIGINAL(l_Z_2814);
R17 * l_U_2817; memset(&l_U_2817, 0, sizeof l_U_2817);
r_COMPUTE_USES(l_O_2816);
l_U_2817 = ((*(R12 *)rt_nil_check(l_O_2816))).f_USES;
for (;;) {
if ((l_U_2817 == NULL)) goto L_end2818;
{
if ((!r_IN_IDENTS(l_HEAD_2810, ((*(R17 *)rt_nil_check(l_U_2817))).f_NAME)))
{
{
R17 * l_N_2819; memset(&l_N_2819, 0, sizeof l_N_2819);
l_N_2819 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_U_2817))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_2819))).f_NAME, ((*(R17 *)rt_nil_check(l_U_2817))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2819))).f_IV = ((*(R17 *)rt_nil_check(l_U_2817))).f_IV;
r_ADD_LIST(l_N_2819, &l_HEAD_2810, &l_TAIL_2811);
}
}
l_U_2817 = ((*(R17 *)rt_nil_check(l_U_2817))).f_NEXT;
}
RT_B_TICK();
} L_end2818: ;
}
}
l_Z_2814 = r_LOOKUP_NEXT(l_Z_2814);
}
RT_B_TICK();
} L_end2815: ;
}
l_R_2812 = ((*(R17 *)rt_nil_check(l_R_2812))).f_NEXT;
}
RT_B_TICK();
} L_end2813: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_2810;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static rt_int r_LOCAL_MODULE_EXPORTS(R17 * p_B, R9 p_NAME) { RT_B_TICK(); 
R17 * l_M_2820; memset(&l_M_2820, 0, sizeof l_M_2820);
if ((p_B == NULL))
{
{ rt_int rv2821 = 0;
return rv2821; }
}
l_M_2820 = ((*(R17 *)rt_nil_check(p_B))).f_C;
for (;;) {
if ((l_M_2820 == NULL)) goto L_end2822;
{
if ((((*(R17 *)rt_nil_check(l_M_2820))).f_KIND == g_N_MODULE))
{
if ((((((*(R17 *)rt_nil_check(l_M_2820))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(l_M_2820))).f_B, p_NAME)) || r_LOCAL_MODULE_EXPORTS(((*(R17 *)rt_nil_check(l_M_2820))).f_C, p_NAME)))
{
{ rt_int rv2823 = 1;
return rv2823; }
}
}
l_M_2820 = ((*(R17 *)rt_nil_check(l_M_2820))).f_NEXT;
}
RT_B_TICK();
} L_end2822: ;
{ rt_int rv2824 = 0;
return rv2824; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_USES(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_2825; memset(&l_R_2825, 0, sizeof l_R_2825);
l_R_2825 = p_RS;
for (;;) {
if ((l_R_2825 == NULL)) goto L_end2826;
{
if ((((*(R17 *)rt_nil_check(l_R_2825))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_2825));
if ((!(((*(R17 *)rt_nil_check(l_R_2825))).f_E == NULL)))
{
r_IMPORTS_KNOWN(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2825))).f_E))).f_A, 0);
r_IMPORTS_KNOWN(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2825))).f_E))).f_B, 1);
r_INPUT_IMPORT_CONFLICT(((*(R17 *)rt_nil_check(l_R_2825))).f_E, ((*(R17 *)rt_nil_check(l_R_2825))).f_LINE);
}
}
l_R_2825 = ((*(R17 *)rt_nil_check(l_R_2825))).f_NEXT;
}
RT_B_TICK();
} L_end2826: ;
}
static void r_IMPORTS_KNOWN(R17 * p_L, rt_int p_INOUT) { RT_B_TICK(); 
R17 * l_P_2827; memset(&l_P_2827, 0, sizeof l_P_2827);
l_P_2827 = p_L;
for (;;) {
if ((l_P_2827 == NULL)) goto L_end2828;
{
{
R12 * l_V_2829; memset(&l_V_2829, 0, sizeof l_V_2829);
l_V_2829 = r_LOOKUP(((*(R17 *)rt_nil_check(l_P_2827))).f_NAME);
if ((!(l_V_2829 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_V_2829))).f_KIND == g_Y_VAR))
{
if ((((!r_CHECK_IMPORTED(l_V_2829, ((*(R17 *)rt_nil_check(l_P_2827))).f_LINE)) && p_INOUT) && (!((*(R12 *)rt_nil_check(l_V_2829))).f_INPUT)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_2827))).f_LINE, rt_str("imported for change, but only for input in the enclosing scope (4.1.1): ", 72), ((*(R17 *)rt_nil_check(l_P_2827))).f_NAME);
}
}
}
}
l_P_2827 = ((*(R17 *)rt_nil_check(l_P_2827))).f_NEXT;
}
RT_B_TICK();
} L_end2828: ;
}
static void r_INPUT_IMPORT_CONFLICT(R17 * p_ITEMS, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_2830; memset(&l_R_2830, 0, sizeof l_R_2830);
l_R_2830 = ((*(R17 *)rt_nil_check(p_ITEMS))).f_C;
for (;;) {
if ((l_R_2830 == NULL)) goto L_end2831;
{
{
R12 * l_Z_2832; memset(&l_Z_2832, 0, sizeof l_Z_2832);
l_Z_2832 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_2830))).f_NAME);
for (;;) {
if ((l_Z_2832 == NULL)) goto L_end2833;
{
if ((((*(R12 *)rt_nil_check(l_Z_2832))).f_KIND == g_Y_ROUTINE))
{
{
R17 * l_D_2834; memset(&l_D_2834, 0, sizeof l_D_2834);
l_D_2834 = ((*(R12 *)rt_nil_check(r_ORIGINAL(l_Z_2832)))).f_DECL;
if ((!(l_D_2834 == NULL)))
{
if (((((*(R17 *)rt_nil_check(l_D_2834))).f_KIND == g_N_ROUTINE) && (!(((*(R17 *)rt_nil_check(l_D_2834))).f_E == NULL))))
{
{
R17 * l_V_2835; memset(&l_V_2835, 0, sizeof l_V_2835);
l_V_2835 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_2834))).f_E))).f_B;
for (;;) {
if ((l_V_2835 == NULL)) goto L_end2836;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(p_ITEMS))).f_A, ((*(R17 *)rt_nil_check(l_V_2835))).f_NAME))
{
r_FAILT(p_LINE, rt_str("imported for input, and inout by an imported routine (4.3.1): ", 62), ((*(R17 *)rt_nil_check(l_V_2835))).f_NAME);
}
l_V_2835 = ((*(R17 *)rt_nil_check(l_V_2835))).f_NEXT;
}
RT_B_TICK();
} L_end2836: ;
}
}
}
}
}
l_Z_2832 = r_LOOKUP_NEXT(l_Z_2832);
}
RT_B_TICK();
} L_end2833: ;
}
l_R_2830 = ((*(R17 *)rt_nil_check(l_R_2830))).f_NEXT;
}
RT_B_TICK();
} L_end2831: ;
}
static void r_ADD_USES(R17 * p_L, R17 * *p_HEAD, R17 * *p_TAIL) { RT_B_TICK(); 
R17 * l_P_2837; memset(&l_P_2837, 0, sizeof l_P_2837);
l_P_2837 = p_L;
for (;;) {
if ((l_P_2837 == NULL)) goto L_end2838;
{
{
R12 * l_V_2839; memset(&l_V_2839, 0, sizeof l_V_2839);
l_V_2839 = r_LOOKUP(((*(R17 *)rt_nil_check(l_P_2837))).f_NAME);
R17 * l_N_2840; memset(&l_N_2840, 0, sizeof l_N_2840);
l_N_2840 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_P_2837))).f_LINE);
if ((l_V_2839 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_2837))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R17 *)rt_nil_check(l_P_2837))).f_NAME);
}
S_R9(&((*(R17 *)rt_nil_check(l_N_2840))).f_NAME, ((*(R17 *)rt_nil_check(l_P_2837))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2840))).f_IV = ((*(R12 *)rt_nil_check(l_V_2839))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_2839))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_2840, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_2837 = ((*(R17 *)rt_nil_check(l_P_2837))).f_NEXT;
}
RT_B_TICK();
} L_end2838: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_IS_2841; memset(&l_IS_2841, 0, sizeof l_IS_2841);
l_IS_2841 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R17 * l_U_2842; memset(&l_U_2842, 0, sizeof l_U_2842);
l_U_2842 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_2841 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R20 *)rt_nil_check(l_IS_2841))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_2842 == NULL)) goto L_end2843;
{
if ((!(((*(R17 *)rt_nil_check(l_U_2842))).f_IV == ((*(R20 *)rt_nil_check(l_IS_2841))).f_ID)))
{
if ((((*(R20 *)rt_nil_check(l_IS_2841))).f_IMPORTS == NULL))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R17 *)rt_nil_check(l_U_2842))).f_NAME, (((*(R17 *)rt_nil_check(l_U_2842))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
if ((!(((((((r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2841))).f_IMPORTS))).f_A, ((*(R17 *)rt_nil_check(l_U_2842))).f_NAME) || r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2841))).f_IMPORTS))).f_B, ((*(R17 *)rt_nil_check(l_U_2842))).f_NAME)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2841))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2841))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2841))).f_IMPORTS))).f_E, p_Y)) || ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL)) && r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2841))).f_IMPORTS))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))) || r_IMPORTED_ROUTINE_USES(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2841))).f_IMPORTS))).f_C, ((*(R17 *)rt_nil_check(l_U_2842))).f_NAME)))))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("the routine ", 12), r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN)), rt_str(" uses the variable ", 19)), r_STR(((*(R17 *)rt_nil_check(l_U_2842))).f_NAME, (((*(R17 *)rt_nil_check(l_U_2842))).f_NAME).f_LEN)), rt_str(": import one of them (4.1.1)", 28)));
}
}
l_U_2842 = ((*(R17 *)rt_nil_check(l_U_2842))).f_NEXT;
}
RT_B_TICK();
} L_end2843: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R17 * p_RS, R9 p_NAME) { RT_B_TICK(); 
R17 * l_R_2844; memset(&l_R_2844, 0, sizeof l_R_2844);
l_R_2844 = p_RS;
for (;;) {
if ((l_R_2844 == NULL)) goto L_end2845;
{
{
R12 * l_Z_2846; memset(&l_Z_2846, 0, sizeof l_Z_2846);
l_Z_2846 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_2844))).f_NAME);
for (;;) {
if ((l_Z_2846 == NULL)) goto L_end2847;
{
if ((((*(R12 *)rt_nil_check(l_Z_2846))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2848; memset(&l_O_2848, 0, sizeof l_O_2848);
l_O_2848 = r_ORIGINAL(l_Z_2846);
r_COMPUTE_USES(l_O_2848);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_2848))).f_USES, p_NAME))
{
{ rt_int rv2849 = 1;
return rv2849; }
}
}
}
l_Z_2846 = r_LOOKUP_NEXT(l_Z_2846);
}
RT_B_TICK();
} L_end2847: ;
}
l_R_2844 = ((*(R17 *)rt_nil_check(l_R_2844))).f_NEXT;
}
RT_B_TICK();
} L_end2845: ;
{ rt_int rv2850 = 0;
return rv2850; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R17 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2851; memset(&l_M_2851, 0, sizeof l_M_2851);
l_M_2851 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_2851 == NULL)) goto L_end2852;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_2851))).f_NAME))
{
{ rt_int rv2853 = 1;
return rv2853; }
}
l_M_2851 = ((*(R12 *)rt_nil_check(l_M_2851))).f_MODL;
}
RT_B_TICK();
} L_end2852: ;
{ rt_int rv2854 = 0;
return rv2854; }
rt_raise(RT_X_INIT);
}
static R9 r_BASE_NAME(R12 * p_Y) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R9 rv2855 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv2855; }
}
{ R9 rv2856 = r_MKN(rt_b_slice(r_STR(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN), rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)), rt_sub((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN, ((rt_int)1LL))));
return rv2856; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R9 p_NAME) { RT_B_TICK(); 
R18 * l_C_2857; memset(&l_C_2857, 0, sizeof l_C_2857);
l_C_2857 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2857 == NULL)) goto L_end2858;
{
if ((((*(R18 *)rt_nil_check(l_C_2857))).f_KIND == ((rt_int)1LL)))
{
goto L_end2858;
}
if ((((*(R18 *)rt_nil_check(l_C_2857))).f_KIND == ((rt_int)3LL)))
{
{
R17 * l_H_2859; memset(&l_H_2859, 0, sizeof l_H_2859);
l_H_2859 = ((*(R18 *)rt_nil_check(l_C_2857))).f_HANDLERS;
for (;;) {
if ((l_H_2859 == NULL)) goto L_end2860;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_H_2859))).f_A, p_NAME))
{
{ rt_int rv2861 = 1;
return rv2861; }
}
l_H_2859 = ((*(R17 *)rt_nil_check(l_H_2859))).f_NEXT;
}
RT_B_TICK();
} L_end2860: ;
}
}
l_C_2857 = ((*(R18 *)rt_nil_check(l_C_2857))).f_NEXT;
}
RT_B_TICK();
} L_end2858: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R20 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv2862 = 1;
return rv2862; }
}
}
{ rt_int rv2863 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv2863; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R9 p_NAME) { RT_B_TICK(); 
R18 * l_C_2864; memset(&l_C_2864, 0, sizeof l_C_2864);
l_C_2864 = ((R18 *)rt_b_new(sizeof (R18)));
S_R18(&(*(R18 *)rt_nil_check(l_C_2864)), ({ R18 rc2865; memset(&rc2865, 0, sizeof rc2865);  rc2865.f_KIND = p_KIND; S_R9(&rc2865.f_NAME, p_NAME, 0); rc2865.f_HANDLERS = NULL; rc2865.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc2865; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_2864;
}
static void r_POP_CTX(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R18 * r_LEAVE(rt_int p_KIND) { RT_B_TICK(); 
R18 * l_C_2866; memset(&l_C_2866, 0, sizeof l_C_2866);
l_C_2866 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2866 == NULL)) goto L_end2867;
{
if ((((*(R18 *)rt_nil_check(l_C_2866))).f_KIND == p_KIND))
{
{ R18 * rv2868 = l_C_2866;
return rv2868; }
}
if ((((*(R18 *)rt_nil_check(l_C_2866))).f_KIND == ((rt_int)1LL)))
{
{ R18 * rv2869 = NULL;
return rv2869; }
}
if ((((*(R18 *)rt_nil_check(l_C_2866))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R18 *)rt_nil_check(l_C_2866))).f_NAME));
}
l_C_2866 = ((*(R18 *)rt_nil_check(l_C_2866))).f_NEXT;
}
RT_B_TICK();
} L_end2867: ;
{ R18 * rv2870 = NULL;
return rv2870; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { RT_B_TICK(); 
R18 * l_C_2871; memset(&l_C_2871, 0, sizeof l_C_2871);
l_C_2871 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_2872; memset(&l_N_2872, 0, sizeof l_N_2872);
l_N_2872 = ((rt_int)0LL);
for (;;) {
if ((l_C_2871 == NULL)) goto L_end2873;
{
if ((((*(R18 *)rt_nil_check(l_C_2871))).f_KIND == ((rt_int)1LL)))
{
goto L_end2873;
}
if ((((*(R18 *)rt_nil_check(l_C_2871))).f_KIND == ((rt_int)3LL)))
{
l_N_2872 = rt_add(l_N_2872, ((rt_int)1LL));
}
l_C_2871 = ((*(R18 *)rt_nil_check(l_C_2871))).f_NEXT;
}
RT_B_TICK();
} L_end2873: ;
{ rt_int rv2874 = l_N_2872;
return rv2874; }
rt_raise(RT_X_INIT);
}
static R9 r_EXC_NAME(R9 p_NAME) { RT_B_TICK(); 
R17 * l_N_2875; memset(&l_N_2875, 0, sizeof l_N_2875);
l_N_2875 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_2875 == NULL)) goto L_end2876;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_N_2875))).f_NAME, p_NAME))
{
{ R9 rv2877 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2877; }
}
l_N_2875 = ((*(R17 *)rt_nil_check(l_N_2875))).f_NEXT;
}
RT_B_TICK();
} L_end2876: ;
l_N_2875 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_2875))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2875))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_2875;
{ R9 rv2878 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2878; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R17 * p_DECLS) { RT_B_TICK(); 
R17 * l_D_2879; memset(&l_D_2879, 0, sizeof l_D_2879);
l_D_2879 = p_DECLS;
for (;;) {
if ((l_D_2879 == NULL)) goto L_end2880;
{
if (((((*(R17 *)rt_nil_check(l_D_2879))).f_KIND == g_N_TYPE) || (((*(R17 *)rt_nil_check(l_D_2879))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_2881; memset(&l_Y_2881, 0, sizeof l_Y_2881);
l_Y_2881 = r_NEW_SYM(g_Y_TYPE, ((*(R17 *)rt_nil_check(l_D_2879))).f_NAME);
if ((((*(R17 *)rt_nil_check(l_D_2879))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_2881))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_2881))).f_DECL = l_D_2879;
r_DEFINE(l_Y_2881, ((*(R17 *)rt_nil_check(l_D_2879))).f_LINE);
if ((((*(R17 *)rt_nil_check(l_D_2879))).f_KIND == g_N_TYPE))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_2879))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_2879))).f_B))).f_A)))
{
((*(R7 *)rt_nil_check(g_W))).f_CHARSETS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_CHARSETS, ((rt_int)1LL));
}
}
}
}
l_D_2879 = ((*(R17 *)rt_nil_check(l_D_2879))).f_NEXT;
}
RT_B_TICK();
} L_end2880: ;
l_D_2879 = p_DECLS;
for (;;) {
if ((l_D_2879 == NULL)) goto L_end2882;
{
if (((((*(R17 *)rt_nil_check(l_D_2879))).f_KIND == g_N_TYPE) || (((*(R17 *)rt_nil_check(l_D_2879))).f_KIND == g_N_REPTYPE)))
{
{
R17 * l_SEEN_2883; memset(&l_SEEN_2883, 0, sizeof l_SEEN_2883);
l_SEEN_2883 = NULL;
rt_int l_FOUND_2884; memset(&l_FOUND_2884, 0, sizeof l_FOUND_2884);
l_FOUND_2884 = 0;
r_REFERS(((*(R17 *)rt_nil_check(l_D_2879))).f_B, C_R9(((*(R17 *)rt_nil_check(l_D_2879))).f_NAME), p_DECLS, &l_SEEN_2883, &l_FOUND_2884);
if (l_FOUND_2884)
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_2879))).f_LINE, rt_str("a circular type declaration (3.12.1, 3.12.3): ", 46), ((*(R17 *)rt_nil_check(l_D_2879))).f_NAME);
}
}
{
R17 * l_F_2885; memset(&l_F_2885, 0, sizeof l_F_2885);
l_F_2885 = ((*(R17 *)rt_nil_check(l_D_2879))).f_A;
for (;;) {
if ((l_F_2885 == NULL)) goto L_end2886;
{
if (((((*(R17 *)rt_nil_check(l_F_2885))).f_IV == ((rt_int)1LL)) && (((*(R17 *)rt_nil_check(l_D_2879))).f_KIND == g_N_TYPE)))
{
{
R17 * l_N_2887; memset(&l_N_2887, 0, sizeof l_N_2887);
l_N_2887 = ((*(R17 *)rt_nil_check(l_F_2885))).f_A;
for (;;) {
if ((l_N_2887 == NULL)) goto L_end2888;
{
if (r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_D_2879))).f_B, ((*(R17 *)rt_nil_check(l_N_2887))).f_NAME))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_2879))).f_LINE, rt_str("a TAG formal is only a tag-name or an argument for a TAG formal (3.12.1): ", 74), ((*(R17 *)rt_nil_check(l_N_2887))).f_NAME);
}
l_N_2887 = ((*(R17 *)rt_nil_check(l_N_2887))).f_NEXT;
}
RT_B_TICK();
} L_end2888: ;
}
}
if ((!(((*(R17 *)rt_nil_check(l_F_2885))).f_B == NULL)))
{
if (r_NAMES_VARIABLE(((*(R17 *)rt_nil_check(l_F_2885))).f_B, p_DECLS))
{
r_FAIL(((*(R17 *)rt_nil_check(l_F_2885))).f_LINE, rt_str("the type-arguments in the type of a formal must be manifest (3.12.1)", 68));
}
}
l_F_2885 = ((*(R17 *)rt_nil_check(l_F_2885))).f_NEXT;
}
RT_B_TICK();
} L_end2886: ;
}
}
l_D_2879 = ((*(R17 *)rt_nil_check(l_D_2879))).f_NEXT;
}
RT_B_TICK();
} L_end2882: ;
l_D_2879 = p_DECLS;
for (;;) {
if ((l_D_2879 == NULL)) goto L_end2889;
{
if ((((*(R17 *)rt_nil_check(l_D_2879))).f_KIND == g_N_TYPE))
{
{
R17 * l_F_2890; memset(&l_F_2890, 0, sizeof l_F_2890);
l_F_2890 = ((*(R17 *)rt_nil_check(l_D_2879))).f_A;
for (;;) {
if ((l_F_2890 == NULL)) goto L_end2891;
{
if (((((*(R17 *)rt_nil_check(l_F_2890))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(l_F_2890))).f_B == NULL))))
{
{
R22 * l_FT_2892; memset(&l_FT_2892, 0, sizeof l_FT_2892);
l_FT_2892 = r_REAL_TYPE(r_RESOLVE(((*(R17 *)rt_nil_check(l_F_2890))).f_B));
if (((!r_IS_SCALAR(l_FT_2892)) || (!(((*(R22 *)rt_nil_check(l_FT_2892))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_F_2890))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
}
l_F_2890 = ((*(R17 *)rt_nil_check(l_F_2890))).f_NEXT;
}
RT_B_TICK();
} L_end2891: ;
}
}
l_D_2879 = ((*(R17 *)rt_nil_check(l_D_2879))).f_NEXT;
}
RT_B_TICK();
} L_end2889: ;
}
static void r_REFERS(R17 * p_L, R9 p_TARGET, R17 * p_DECLS, R17 * *p_SEEN, rt_int *p_FOUND) { RT_B_TICK(); 
R17 * l_N_2893; memset(&l_N_2893, 0, sizeof l_N_2893);
l_N_2893 = p_L;
for (;;) {
if (((l_N_2893 == NULL) || (*p_FOUND))) goto L_end2894;
{
if (((((*(R17 *)rt_nil_check(l_N_2893))).f_KIND == g_TS_NAME) || (((*(R17 *)rt_nil_check(l_N_2893))).f_KIND == g_N_REP)))
{
if ((!r_TEQS(((*(R17 *)rt_nil_check(l_N_2893))).f_NAME, rt_str("PTR", 3))))
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_N_2893))).f_NAME, p_TARGET))
{
(*p_FOUND) = 1;
return;
}
if ((!r_IN_IDENTS((*p_SEEN), ((*(R17 *)rt_nil_check(l_N_2893))).f_NAME)))
{
{
R17 * l_M_2895; memset(&l_M_2895, 0, sizeof l_M_2895);
l_M_2895 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_N_2893))).f_LINE);
R17 * l_D_2896; memset(&l_D_2896, 0, sizeof l_D_2896);
l_D_2896 = p_DECLS;
S_R9(&((*(R17 *)rt_nil_check(l_M_2895))).f_NAME, ((*(R17 *)rt_nil_check(l_N_2893))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_M_2895))).f_NEXT = (*p_SEEN);
(*p_SEEN) = l_M_2895;
for (;;) {
if ((l_D_2896 == NULL)) goto L_end2897;
{
if (((((((*(R17 *)rt_nil_check(l_D_2896))).f_KIND == g_N_TYPE) || (((*(R17 *)rt_nil_check(l_D_2896))).f_KIND == g_N_REPTYPE))) && r_TEQ(((*(R17 *)rt_nil_check(l_D_2896))).f_NAME, ((*(R17 *)rt_nil_check(l_N_2893))).f_NAME)))
{
r_REFERS(((*(R17 *)rt_nil_check(l_D_2896))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
l_D_2896 = ((*(R17 *)rt_nil_check(l_D_2896))).f_NEXT;
}
RT_B_TICK();
} L_end2897: ;
}
}
r_REFERS(((*(R17 *)rt_nil_check(l_N_2893))).f_A, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_2893))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_2893))).f_C, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
}
else
{
r_REFERS(((*(R17 *)rt_nil_check(l_N_2893))).f_A, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_2893))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_2893))).f_C, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_2893))).f_D, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
l_N_2893 = ((*(R17 *)rt_nil_check(l_N_2893))).f_NEXT;
}
RT_B_TICK();
} L_end2894: ;
}
static rt_int r_TAG_MISUSED(R17 * p_L, R9 p_NAME) { RT_B_TICK(); 
R17 * l_N_2898; memset(&l_N_2898, 0, sizeof l_N_2898);
l_N_2898 = p_L;
for (;;) {
if ((l_N_2898 == NULL)) goto L_end2899;
{
if ((((*(R17 *)rt_nil_check(l_N_2898))).f_KIND == g_TS_NAME))
{
{
R17 * l_A_2900; memset(&l_A_2900, 0, sizeof l_A_2900);
l_A_2900 = ((*(R17 *)rt_nil_check(l_N_2898))).f_A;
for (;;) {
if ((l_A_2900 == NULL)) goto L_end2901;
{
if ((!((((((((*(R17 *)rt_nil_check(l_A_2900))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_A_2900))).f_KIND == g_TS_NAME))) && r_TEQ(((*(R17 *)rt_nil_check(l_A_2900))).f_NAME, p_NAME)) && (((*(R17 *)rt_nil_check(l_A_2900))).f_A == NULL)))))
{
if (r_TAG_MISUSED1(l_A_2900, p_NAME))
{
{ rt_int rv2902 = 1;
return rv2902; }
}
}
l_A_2900 = ((*(R17 *)rt_nil_check(l_A_2900))).f_NEXT;
}
RT_B_TICK();
} L_end2901: ;
}
if (((r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_N_2898))).f_B, p_NAME) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_N_2898))).f_C, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_N_2898))).f_E, p_NAME)))
{
{ rt_int rv2903 = 1;
return rv2903; }
}
}
else if (r_TAG_MISUSED1(l_N_2898, p_NAME))
{
{ rt_int rv2904 = 1;
return rv2904; }
}
l_N_2898 = ((*(R17 *)rt_nil_check(l_N_2898))).f_NEXT;
}
RT_B_TICK();
} L_end2899: ;
{ rt_int rv2905 = 0;
return rv2905; }
rt_raise(RT_X_INIT);
}
static rt_int r_TAG_MISUSED1(R17 * p_N, R9 p_NAME) { RT_B_TICK(); 
rt_int l_K_2906; memset(&l_K_2906, 0, sizeof l_K_2906);
l_K_2906 = ((*(R17 *)rt_nil_check(p_N))).f_KIND;
if ((l_K_2906 == g_TS_NAME))
{
{ rt_int rv2907 = (r_TAG_MISUSED(p_N, p_NAME) && 1);
return rv2907; }
}
if ((((((l_K_2906 == g_N_NAME) || (l_K_2906 == g_N_ENUMLIT)) || (l_K_2906 == g_N_APPLY))) && r_TEQ(((*(R17 *)rt_nil_check(p_N))).f_NAME, p_NAME)))
{
{ rt_int rv2908 = 1;
return rv2908; }
}
{ rt_int rv2909 = ((((r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_A, p_NAME) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_B, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_C, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_D, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_E, p_NAME));
return rv2909; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_VARIABLE(R17 * p_L, R17 * p_DECLS) { RT_B_TICK(); 
{ rt_int rv2910 = r_NAMES_VARIABLE_BUT(p_L, p_DECLS, NULL);
return rv2910; }
rt_raise(RT_X_INIT);
}
static void r_GEN_NAMES(R17 * p_L, R17 * *p_HEAD) { RT_B_TICK(); 
R17 * l_N_2911; memset(&l_N_2911, 0, sizeof l_N_2911);
l_N_2911 = p_L;
for (;;) {
if ((l_N_2911 == NULL)) goto L_end2912;
{
if (((((((*(R17 *)rt_nil_check(l_N_2911))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_N_2911))).f_KIND == g_N_PARAM))) && ((((*(R17 *)rt_nil_check(l_N_2911))).f_NAME).f_LEN > ((rt_int)0LL))))
{
{
R17 * l_M_2913; memset(&l_M_2913, 0, sizeof l_M_2913);
l_M_2913 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_N_2911))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_M_2913))).f_NAME, ((*(R17 *)rt_nil_check(l_N_2911))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_M_2913))).f_NEXT = (*p_HEAD);
(*p_HEAD) = l_M_2913;
}
}
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_2911))).f_A, &(*p_HEAD));
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_2911))).f_B, &(*p_HEAD));
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_2911))).f_C, &(*p_HEAD));
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_2911))).f_D, &(*p_HEAD));
l_N_2911 = ((*(R17 *)rt_nil_check(l_N_2911))).f_NEXT;
}
RT_B_TICK();
} L_end2912: ;
}
static rt_int r_NAMES_VARIABLE_BUT(R17 * p_L, R17 * p_DECLS, R17 * p_EXCL) { RT_B_TICK(); 
R17 * l_N_2914; memset(&l_N_2914, 0, sizeof l_N_2914);
l_N_2914 = p_L;
for (;;) {
if ((l_N_2914 == NULL)) goto L_end2915;
{
if (((((*(R17 *)rt_nil_check(l_N_2914))).f_KIND == g_N_NAME) && r_IN_IDENTS(p_EXCL, ((*(R17 *)rt_nil_check(l_N_2914))).f_NAME)))
{
}
else if ((((*(R17 *)rt_nil_check(l_N_2914))).f_KIND == g_N_NAME))
{
{
R17 * l_D_2916; memset(&l_D_2916, 0, sizeof l_D_2916);
l_D_2916 = p_DECLS;
R12 * l_Y_2917; memset(&l_Y_2917, 0, sizeof l_Y_2917);
l_Y_2917 = r_LOOKUP(((*(R17 *)rt_nil_check(l_N_2914))).f_NAME);
for (;;) {
if ((l_D_2916 == NULL)) goto L_end2918;
{
if (((((*(R17 *)rt_nil_check(l_D_2916))).f_KIND == g_N_VAR) && r_IN_IDENTS(((*(R17 *)rt_nil_check(l_D_2916))).f_A, ((*(R17 *)rt_nil_check(l_N_2914))).f_NAME)))
{
{ rt_int rv2919 = 1;
return rv2919; }
}
l_D_2916 = ((*(R17 *)rt_nil_check(l_D_2916))).f_NEXT;
}
RT_B_TICK();
} L_end2918: ;
if ((!(l_Y_2917 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_2917))).f_KIND == g_Y_VAR) && (!((*(R12 *)rt_nil_check(l_Y_2917))).f_INPUT)))
{
{ rt_int rv2920 = 1;
return rv2920; }
}
}
}
}
else if ((((r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_2914))).f_A, p_DECLS, p_EXCL) || r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_2914))).f_B, p_DECLS, p_EXCL)) || r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_2914))).f_C, p_DECLS, p_EXCL)) || r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_2914))).f_D, p_DECLS, p_EXCL)))
{
{ rt_int rv2921 = 1;
return rv2921; }
}
l_N_2914 = ((*(R17 *)rt_nil_check(l_N_2914))).f_NEXT;
}
RT_B_TICK();
} L_end2915: ;
{ rt_int rv2922 = 0;
return rv2922; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_PRINTING_CHAR(R17 * p_L) { RT_B_TICK(); 
R17 * l_P_2923; memset(&l_P_2923, 0, sizeof l_P_2923);
l_P_2923 = p_L;
for (;;) {
if ((l_P_2923 == NULL)) goto L_end2924;
{
if (((((*(R17 *)rt_nil_check(l_P_2923))).f_NAME).f_LEN >= ((rt_int)3LL)))
{
if (rt_b_eq(r_STR(((*(R17 *)rt_nil_check(l_P_2923))).f_NAME, ((rt_int)2LL)), rt_str("\\'", 2)))
{
{ rt_int rv2925 = 1;
return rv2925; }
}
}
l_P_2923 = ((*(R17 *)rt_nil_check(l_P_2923))).f_NEXT;
}
RT_B_TICK();
} L_end2924: ;
{ rt_int rv2926 = 0;
return rv2926; }
rt_raise(RT_X_INIT);
}
static R22 * r_DEFAULT_CHARSET(rt_int p_LINE) { RT_B_TICK(); 
R12 * l_A_2927; memset(&l_A_2927, 0, sizeof l_A_2927);
l_A_2927 = r_LOOKUP(r_MKN(rt_str("ASCII", 5)));
R22 * l_FOUND_2928; memset(&l_FOUND_2928, 0, sizeof l_FOUND_2928);
l_FOUND_2928 = NULL;
rt_int l_N_2929; memset(&l_N_2929, 0, sizeof l_N_2929);
l_N_2929 = ((rt_int)0LL);
R12 * l_Y_2930; memset(&l_Y_2930, 0, sizeof l_Y_2930);
l_Y_2930 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
if (((((*(R7 *)rt_nil_check(g_W))).f_CHARSETS == ((rt_int)0LL)) && (!(l_A_2927 == NULL))))
{
if (((((*(R12 *)rt_nil_check(l_A_2927))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_A_2927))).f_DECL == NULL)))
{
{ R22 * rv2931 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2931; }
}
}
for (;;) {
if ((l_Y_2930 == NULL)) goto L_end2932;
{
if (((((*(R12 *)rt_nil_check(l_Y_2930))).f_KIND == g_Y_TYPE) && ((((*(R12 *)rt_nil_check(l_Y_2930))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((r_LOOKUP(((*(R12 *)rt_nil_check(l_Y_2930))).f_NAME) == l_Y_2930))
{
{
R22 * l_T_2933; memset(&l_T_2933, 0, sizeof l_T_2933);
l_T_2933 = NULL;
if ((((*(R12 *)rt_nil_check(l_Y_2930))).f_DECL == NULL))
{
l_T_2933 = ((*(R12 *)rt_nil_check(l_Y_2930))).f_T;
}
else if (((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2930))).f_DECL))).f_KIND == g_N_TYPE) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2930))).f_DECL))).f_A == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2930))).f_DECL))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2930))).f_DECL))).f_B))).f_A)))
{
l_T_2933 = r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_2930))).f_NAME, p_LINE);
}
}
if ((!(l_T_2933 == NULL)))
{
l_T_2933 = r_REAL_TYPE(l_T_2933);
if ((((*(R22 *)rt_nil_check(l_T_2933))).f_KIND == g_T_ENUM))
{
if ((r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2933))).f_BASE))).f_LITS) && (!(((*(R22 *)rt_nil_check(l_T_2933))).f_BASE == l_FOUND_2928))))
{
if ((!(l_FOUND_2928 == NULL)))
{
r_FAIL(p_LINE, rt_b_cat(rt_str("two character sets are available here: the literal needs ", 57), rt_str("a charset-name (3.7.2)", 22)));
}
l_FOUND_2928 = ((*(R22 *)rt_nil_check(l_T_2933))).f_BASE;
}
}
}
}
}
}
l_Y_2930 = ((*(R12 *)rt_nil_check(l_Y_2930))).f_SNEXT;
}
RT_B_TICK();
} L_end2932: ;
if ((l_FOUND_2928 == NULL))
{
r_FAIL(p_LINE, rt_str("no character set is available for the literal (3.7.2)", 53));
}
{ R22 * rv2934 = l_FOUND_2928;
return rv2934; }
rt_raise(RT_X_INIT);
}
static R22 * r_CHARSET_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_R_2935; memset(&l_R_2935, 0, sizeof l_R_2935);
l_R_2935 = r_REAL_TYPE(p_T);
if ((((*(R22 *)rt_nil_check(l_R_2935))).f_BASE == NULL))
{
{ R22 * rv2936 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2936; }
}
{ R22 * rv2937 = ((*(R22 *)rt_nil_check(l_R_2935))).f_BASE;
return rv2937; }
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
R17 * l_S_2938; memset(&l_S_2938, 0, sizeof l_S_2938);
l_S_2938 = p_S0;
for (;;) {
if ((l_S_2938 == NULL)) goto L_end2939;
{
{
R17 * l_L_2940; memset(&l_L_2940, 0, sizeof l_L_2940);
l_L_2940 = l_S_2938;
for (;;) {
if ((!(((*(R17 *)rt_nil_check(l_L_2940))).f_KIND == g_N_LABELED))) goto L_end2941;
{
{
R12 * l_Y_2942; memset(&l_Y_2942, 0, sizeof l_Y_2942);
l_Y_2942 = r_NEW_SYM(g_Y_LABEL, ((*(R17 *)rt_nil_check(l_L_2940))).f_NAME);
S_R9(&((*(R12 *)rt_nil_check(l_Y_2942))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME(r_STR(r_CID(((*(R17 *)rt_nil_check(l_L_2940))).f_NAME), (r_CID(((*(R17 *)rt_nil_check(l_L_2940))).f_NAME)).f_LEN))), 0);
((*(R12 *)rt_nil_check(l_Y_2942))).f_MV = r_GUARDS();
r_DEFINE(l_Y_2942, ((*(R17 *)rt_nil_check(l_L_2940))).f_LINE);
}
l_L_2940 = ((*(R17 *)rt_nil_check(l_L_2940))).f_A;
}
RT_B_TICK();
} L_end2941: ;
}
l_S_2938 = ((*(R17 *)rt_nil_check(l_S_2938))).f_NEXT;
}
RT_B_TICK();
} L_end2939: ;
}
static void r_BODY(R17 * p_B) { RT_B_TICK(); 
R17 * l_D_2943; memset(&l_D_2943, 0, sizeof l_D_2943);
l_D_2943 = ((*(R17 *)rt_nil_check(p_B))).f_A;
R17 * l_S_2944; memset(&l_S_2944, 0, sizeof l_S_2944);
l_S_2944 = ((*(R17 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R17 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2943 == NULL)) goto L_end2945;
{
if (((((*(R17 *)rt_nil_check(l_D_2943))).f_KIND == g_N_VAR) || (((*(R17 *)rt_nil_check(l_D_2943))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2943);
}
l_D_2943 = ((*(R17 *)rt_nil_check(l_D_2943))).f_NEXT;
}
RT_B_TICK();
} L_end2945: ;
r_DECLARE_LABELS(((*(R17 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2944 == NULL)) goto L_end2946;
{
r_STMT(l_S_2944);
l_S_2944 = ((*(R17 *)rt_nil_check(l_S_2944))).f_NEXT;
}
RT_B_TICK();
} L_end2946: ;
}
static void r_OPEN_BODY(R17 * p_B) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R17 * p_S, R17 * p_BODY_NODE, R17 * p_HANDLERS) { RT_B_TICK(); 
R9 l_F_2947; memset(&l_F_2947, 0, sizeof l_F_2947);
S_R9(&l_F_2947, r_NEW_NAME(rt_str("xf", 2)), 0);
R17 * l_H_2948; memset(&l_H_2948, 0, sizeof l_H_2948);
l_H_2948 = p_HANDLERS;
R9 l_WORD_2949; memset(&l_WORD_2949, 0, sizeof l_WORD_2949);
S_R9(&l_WORD_2949, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_2947, l_F_2947));
r_PUSH_CTX(((rt_int)3LL), l_F_2947);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_2947, l_F_2947, l_F_2947));
for (;;) {
if ((l_H_2948 == NULL)) goto L_end2950;
{
{
R17 * l_N_2951; memset(&l_N_2951, 0, sizeof l_N_2951);
l_N_2951 = ((*(R17 *)rt_nil_check(l_H_2948))).f_A;
R9 l_COND_2952; memset(&l_COND_2952, 0, sizeof l_COND_2952);
S_R9(&l_COND_2952, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_2951 == NULL)) goto L_end2953;
{
if ((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_N_2951))).f_NEXT, ((*(R17 *)rt_nil_check(l_N_2951))).f_NAME) || r_IN_HANDLERS(((*(R17 *)rt_nil_check(l_H_2948))).f_NEXT, ((*(R17 *)rt_nil_check(l_N_2951))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_N_2951))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R17 *)rt_nil_check(l_N_2951))).f_NAME);
}
S_R9(&l_COND_2952, r_FMT3(rt_str("@ || @x == @", 12), l_COND_2952, l_F_2947, r_EXC_NAME(((*(R17 *)rt_nil_check(l_N_2951))).f_NAME)), 0);
l_N_2951 = ((*(R17 *)rt_nil_check(l_N_2951))).f_NEXT;
}
RT_B_TICK();
} L_end2953: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2949, l_COND_2952));
S_R9(&l_WORD_2949, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_2947, rt_str("x", 1)));
r_OPEN_BODY(((*(R17 *)rt_nil_check(l_H_2948))).f_B);
r_POP_CTX();
}
l_H_2948 = ((*(R17 *)rt_nil_check(l_H_2948))).f_NEXT;
}
RT_B_TICK();
} L_end2950: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_2947));
}
static void r_INTERFERENCE(R17 * p_S) { RT_B_TICK(); 
rt_int l_K_2954; memset(&l_K_2954, 0, sizeof l_K_2954);
l_K_2954 = ((*(R17 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2954 == g_N_ASSIGN))
{
{
R17 * l_NAMES_2955; memset(&l_NAMES_2955, 0, sizeof l_NAMES_2955);
l_NAMES_2955 = NULL;
R17 * l_CALLS_2956; memset(&l_CALLS_2956, 0, sizeof l_CALLS_2956);
l_CALLS_2956 = NULL;
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_S))).f_A, &l_NAMES_2955, &l_CALLS_2956);
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_S))).f_B, &l_NAMES_2955, &l_CALLS_2956);
r_CHECK_INTERFERENCE(l_NAMES_2955, l_CALLS_2956, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 0);
}
}
else if ((l_K_2954 == g_N_CALL))
{
{
R17 * l_NAMES_2957; memset(&l_NAMES_2957, 0, sizeof l_NAMES_2957);
l_NAMES_2957 = NULL;
R17 * l_CALLS_2958; memset(&l_CALLS_2958, 0, sizeof l_CALLS_2958);
l_CALLS_2958 = NULL;
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_S))).f_A, &l_NAMES_2957, &l_CALLS_2958);
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_S))).f_B, &l_NAMES_2957, &l_CALLS_2958);
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_S))).f_C, &l_NAMES_2957, &l_CALLS_2958);
r_CHECK_INTERFERENCE(l_NAMES_2957, l_CALLS_2958, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 0);
}
}
else if (((l_K_2954 == g_N_RETURN) || (l_K_2954 == g_N_ASSERT)))
{
if ((!(((*(R17 *)rt_nil_check(p_S))).f_A == NULL)))
{
{
R17 * l_NAMES_2959; memset(&l_NAMES_2959, 0, sizeof l_NAMES_2959);
l_NAMES_2959 = NULL;
R17 * l_CALLS_2960; memset(&l_CALLS_2960, 0, sizeof l_CALLS_2960);
l_CALLS_2960 = NULL;
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_S))).f_A, &l_NAMES_2959, &l_CALLS_2960);
r_CHECK_INTERFERENCE(l_NAMES_2959, l_CALLS_2960, ((*(R17 *)rt_nil_check(p_S))).f_LINE, (l_K_2954 == g_N_ASSERT));
}
}
}
else if ((l_K_2954 == g_N_IF))
{
{
R17 * l_ARM_2961; memset(&l_ARM_2961, 0, sizeof l_ARM_2961);
l_ARM_2961 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_ARM_2961 == NULL)) goto L_end2962;
{
{
R17 * l_NAMES_2963; memset(&l_NAMES_2963, 0, sizeof l_NAMES_2963);
l_NAMES_2963 = NULL;
R17 * l_CALLS_2964; memset(&l_CALLS_2964, 0, sizeof l_CALLS_2964);
l_CALLS_2964 = NULL;
r_COLLECT_REFS(((*(R17 *)rt_nil_check(l_ARM_2961))).f_A, &l_NAMES_2963, &l_CALLS_2964);
r_CHECK_INTERFERENCE(l_NAMES_2963, l_CALLS_2964, ((*(R17 *)rt_nil_check(l_ARM_2961))).f_LINE, 0);
}
l_ARM_2961 = ((*(R17 *)rt_nil_check(l_ARM_2961))).f_NEXT;
}
RT_B_TICK();
} L_end2962: ;
}
}
}
static void r_COLLECT_LIST(R17 * p_L, R17 * *p_NAMES, R17 * *p_CALLS) { RT_B_TICK(); 
R17 * l_N_2965; memset(&l_N_2965, 0, sizeof l_N_2965);
l_N_2965 = p_L;
for (;;) {
if ((l_N_2965 == NULL)) goto L_end2966;
{
r_COLLECT_REFS(l_N_2965, &(*p_NAMES), &(*p_CALLS));
l_N_2965 = ((*(R17 *)rt_nil_check(l_N_2965))).f_NEXT;
}
RT_B_TICK();
} L_end2966: ;
}
static void r_COLLECT_REFS(R17 * p_E, R17 * *p_NAMES, R17 * *p_CALLS) { RT_B_TICK(); 
rt_int l_K_2967; memset(&l_K_2967, 0, sizeof l_K_2967);
if ((p_E == NULL))
{
return;
}
l_K_2967 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_2967 == g_N_NAME))
{
{
R12 * l_Y_2968; memset(&l_Y_2968, 0, sizeof l_Y_2968);
l_Y_2968 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2968 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2968))).f_KIND == g_Y_VAR))
{
(*p_NAMES) = r_NAME_REF(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2968))).f_OWNER, NULL, (*p_NAMES));
}
}
}
}
else if ((l_K_2967 == g_N_APPLY))
{
{
R12 * l_Y_2969; memset(&l_Y_2969, 0, sizeof l_Y_2969);
l_Y_2969 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2969 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2969))).f_KIND == g_Y_VAR))
{
(*p_NAMES) = r_NAME_REF(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2969))).f_OWNER, NULL, (*p_NAMES));
}
else if ((((*(R12 *)rt_nil_check(l_Y_2969))).f_KIND == g_Y_ROUTINE))
{
(*p_CALLS) = r_NAME_REF(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((rt_int)0LL), p_E, (*p_CALLS));
}
}
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_B, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_C, &(*p_NAMES), &(*p_CALLS));
}
}
else if ((((((l_K_2967 == g_N_FIELD) || (l_K_2967 == g_N_DEREF)) || (l_K_2967 == g_N_UNOP)) || (l_K_2967 == g_N_PAREN)) || (l_K_2967 == g_N_QUAL)))
{
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
}
else if (((((l_K_2967 == g_N_INDEX) || (l_K_2967 == g_N_SUBSTR)) || (l_K_2967 == g_N_BINOP)) || (l_K_2967 == g_N_IN)))
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
else if ((l_K_2967 == g_N_RECCONS))
{
{
R17 * l_F_2970; memset(&l_F_2970, 0, sizeof l_F_2970);
l_F_2970 = ((*(R17 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_F_2970 == NULL)) goto L_end2971;
{
r_COLLECT_REFS(((*(R17 *)rt_nil_check(l_F_2970))).f_A, &(*p_NAMES), &(*p_CALLS));
l_F_2970 = ((*(R17 *)rt_nil_check(l_F_2970))).f_NEXT;
}
RT_B_TICK();
} L_end2971: ;
}
}
else if ((l_K_2967 == g_N_ARRCONS))
{
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
}
}
static R17 * r_NAME_REF(R9 p_NAME, rt_int p_OWNER, R17 * p_A, R17 * p_L) { RT_B_TICK(); 
R17 * l_N_2972; memset(&l_N_2972, 0, sizeof l_N_2972);
l_N_2972 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_2972))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2972))).f_IV = p_OWNER;
((*(R17 *)rt_nil_check(l_N_2972))).f_A = p_A;
((*(R17 *)rt_nil_check(l_N_2972))).f_NEXT = p_L;
{ R17 * rv2973 = l_N_2972;
return rv2973; }
rt_raise(RT_X_INIT);
}
static R17 * r_ROUTINE_DATA(R9 p_NAME, rt_int p_INOUT) { RT_B_TICK(); 
R12 * l_Y_2974; memset(&l_Y_2974, 0, sizeof l_Y_2974);
l_Y_2974 = r_LOOKUP(p_NAME);
R17 * l_R_2975; memset(&l_R_2975, 0, sizeof l_R_2975);
l_R_2975 = NULL;
rt_int l_FIRST_2976; memset(&l_FIRST_2976, 0, sizeof l_FIRST_2976);
l_FIRST_2976 = 1;
for (;;) {
if ((l_Y_2974 == NULL)) goto L_end2977;
{
if ((((*(R12 *)rt_nil_check(l_Y_2974))).f_KIND == g_Y_ROUTINE))
{
{
R17 * l_D_2978; memset(&l_D_2978, 0, sizeof l_D_2978);
l_D_2978 = r_DATA_OF(r_ORIGINAL(l_Y_2974), p_INOUT, ((rt_int)0LL));
if (l_FIRST_2976)
{
l_R_2975 = l_D_2978;
l_FIRST_2976 = 0;
}
else
{
l_R_2975 = r_INTERSECT_REFS(l_R_2975, l_D_2978);
}
}
}
else if (((!(((*(R12 *)rt_nil_check(l_Y_2974))).f_KIND == g_Y_ROUTINE)) && (!l_FIRST_2976)))
{
}
l_Y_2974 = r_LOOKUP_NEXT(l_Y_2974);
}
RT_B_TICK();
} L_end2977: ;
{ R17 * rv2979 = l_R_2975;
return rv2979; }
rt_raise(RT_X_INIT);
}
static R17 * r_DATA_OF(R12 * p_Y, rt_int p_INOUT, rt_int p_DEPTH) { RT_B_TICK(); 
R17 * l_R_2980; memset(&l_R_2980, 0, sizeof l_R_2980);
l_R_2980 = NULL;
if (((((*(R12 *)rt_nil_check(p_Y))).f_DECL == NULL) || (p_DEPTH > ((rt_int)20LL))))
{
{ R17 * rv2981 = NULL;
return rv2981; }
}
if ((!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_KIND == g_N_ROUTINE)))
{
{ R17 * rv2982 = NULL;
return rv2982; }
}
r_COMPUTE_USES(p_Y);
if ((!p_INOUT))
{
{
R17 * l_U_2983; memset(&l_U_2983, 0, sizeof l_U_2983);
l_U_2983 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_2983 == NULL)) goto L_end2984;
{
l_R_2980 = r_NAME_REF(((*(R17 *)rt_nil_check(l_U_2983))).f_NAME, ((*(R17 *)rt_nil_check(l_U_2983))).f_IV, NULL, l_R_2980);
l_U_2983 = ((*(R17 *)rt_nil_check(l_U_2983))).f_NEXT;
}
RT_B_TICK();
} L_end2984: ;
}
{ R17 * rv2985 = l_R_2980;
return rv2985; }
}
if ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E == NULL))
{
{ R17 * rv2986 = NULL;
return rv2986; }
}
{
R17 * l_U_2987; memset(&l_U_2987, 0, sizeof l_U_2987);
l_U_2987 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_2987 == NULL)) goto L_end2988;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E))).f_B, ((*(R17 *)rt_nil_check(l_U_2987))).f_NAME))
{
l_R_2980 = r_NAME_REF(((*(R17 *)rt_nil_check(l_U_2987))).f_NAME, ((*(R17 *)rt_nil_check(l_U_2987))).f_IV, NULL, l_R_2980);
}
l_U_2987 = ((*(R17 *)rt_nil_check(l_U_2987))).f_NEXT;
}
RT_B_TICK();
} L_end2988: ;
}
{
R17 * l_C_2989; memset(&l_C_2989, 0, sizeof l_C_2989);
l_C_2989 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E))).f_C;
for (;;) {
if ((l_C_2989 == NULL)) goto L_end2990;
{
{
R12 * l_Z_2991; memset(&l_Z_2991, 0, sizeof l_Z_2991);
l_Z_2991 = r_LOOKUP(((*(R17 *)rt_nil_check(l_C_2989))).f_NAME);
for (;;) {
if ((l_Z_2991 == NULL)) goto L_end2992;
{
if ((((*(R12 *)rt_nil_check(l_Z_2991))).f_KIND == g_Y_ROUTINE))
{
{
R17 * l_D_2993; memset(&l_D_2993, 0, sizeof l_D_2993);
l_D_2993 = r_DATA_OF(r_ORIGINAL(l_Z_2991), 1, rt_add(p_DEPTH, ((rt_int)1LL)));
for (;;) {
if ((l_D_2993 == NULL)) goto L_end2994;
{
if ((!r_HAS_REF(l_R_2980, ((*(R17 *)rt_nil_check(l_D_2993))).f_NAME, ((*(R17 *)rt_nil_check(l_D_2993))).f_IV)))
{
l_R_2980 = r_NAME_REF(((*(R17 *)rt_nil_check(l_D_2993))).f_NAME, ((*(R17 *)rt_nil_check(l_D_2993))).f_IV, NULL, l_R_2980);
}
l_D_2993 = ((*(R17 *)rt_nil_check(l_D_2993))).f_NEXT;
}
RT_B_TICK();
} L_end2994: ;
}
}
l_Z_2991 = r_LOOKUP_NEXT(l_Z_2991);
}
RT_B_TICK();
} L_end2992: ;
}
l_C_2989 = ((*(R17 *)rt_nil_check(l_C_2989))).f_NEXT;
}
RT_B_TICK();
} L_end2990: ;
}
{ R17 * rv2995 = l_R_2980;
return rv2995; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_REF(R17 * p_L, R9 p_NAME, rt_int p_OWNER) { RT_B_TICK(); 
R17 * l_P_2996; memset(&l_P_2996, 0, sizeof l_P_2996);
l_P_2996 = p_L;
for (;;) {
if ((l_P_2996 == NULL)) goto L_end2997;
{
if ((r_TEQ(((*(R17 *)rt_nil_check(l_P_2996))).f_NAME, p_NAME) && (((*(R17 *)rt_nil_check(l_P_2996))).f_IV == p_OWNER)))
{
{ rt_int rv2998 = 1;
return rv2998; }
}
l_P_2996 = ((*(R17 *)rt_nil_check(l_P_2996))).f_NEXT;
}
RT_B_TICK();
} L_end2997: ;
{ rt_int rv2999 = 0;
return rv2999; }
rt_raise(RT_X_INIT);
}
static R17 * r_INTERSECT_REFS(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_R_3000; memset(&l_R_3000, 0, sizeof l_R_3000);
l_R_3000 = NULL;
R17 * l_P_3001; memset(&l_P_3001, 0, sizeof l_P_3001);
l_P_3001 = p_A;
for (;;) {
if ((l_P_3001 == NULL)) goto L_end3002;
{
if (r_HAS_REF(p_B, ((*(R17 *)rt_nil_check(l_P_3001))).f_NAME, ((*(R17 *)rt_nil_check(l_P_3001))).f_IV))
{
l_R_3000 = r_NAME_REF(((*(R17 *)rt_nil_check(l_P_3001))).f_NAME, ((*(R17 *)rt_nil_check(l_P_3001))).f_IV, NULL, l_R_3000);
}
l_P_3001 = ((*(R17 *)rt_nil_check(l_P_3001))).f_NEXT;
}
RT_B_TICK();
} L_end3002: ;
{ R17 * rv3003 = l_R_3000;
return rv3003; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_INTERFERENCE(R17 * p_NAMES, R17 * p_CALLS, rt_int p_LINE, rt_int p_ASSERTION) { RT_B_TICK(); 
R17 * l_C_3004; memset(&l_C_3004, 0, sizeof l_C_3004);
l_C_3004 = p_CALLS;
for (;;) {
if ((l_C_3004 == NULL)) goto L_end3005;
{
{
R17 * l_V_3006; memset(&l_V_3006, 0, sizeof l_V_3006);
l_V_3006 = r_ROUTINE_DATA(((*(R17 *)rt_nil_check(l_C_3004))).f_NAME, 1);
if (((!(l_V_3006 == NULL)) && p_ASSERTION))
{
r_FAILT(p_LINE, rt_str("the expression of ASSERT must be free of side-effects (4.5.8): ", 63), ((*(R17 *)rt_nil_check(l_C_3004))).f_NAME);
}
for (;;) {
if ((l_V_3006 == NULL)) goto L_end3007;
{
if (r_HAS_REF(p_NAMES, ((*(R17 *)rt_nil_check(l_V_3006))).f_NAME, ((*(R17 *)rt_nil_check(l_V_3006))).f_IV))
{
r_FAILT(p_LINE, rt_str("a function invocation modifies a variable the expression also names (4.3.4): ", 77), ((*(R17 *)rt_nil_check(l_V_3006))).f_NAME);
}
{
R17 * l_D_3008; memset(&l_D_3008, 0, sizeof l_D_3008);
l_D_3008 = p_CALLS;
for (;;) {
if ((l_D_3008 == NULL)) goto L_end3009;
{
if ((!(l_D_3008 == l_C_3004)))
{
if (r_HAS_REF(r_ROUTINE_DATA(((*(R17 *)rt_nil_check(l_D_3008))).f_NAME, 0), ((*(R17 *)rt_nil_check(l_V_3006))).f_NAME, ((*(R17 *)rt_nil_check(l_V_3006))).f_IV))
{
r_FAILT(p_LINE, rt_str("two function invocations of one expression interfere on (4.3.4): ", 65), ((*(R17 *)rt_nil_check(l_V_3006))).f_NAME);
}
}
l_D_3008 = ((*(R17 *)rt_nil_check(l_D_3008))).f_NEXT;
}
RT_B_TICK();
} L_end3009: ;
}
l_V_3006 = ((*(R17 *)rt_nil_check(l_V_3006))).f_NEXT;
}
RT_B_TICK();
} L_end3007: ;
}
l_C_3004 = ((*(R17 *)rt_nil_check(l_C_3004))).f_NEXT;
}
RT_B_TICK();
} L_end3005: ;
}
static rt_int r_IN_HANDLERS(R17 * p_HS, R9 p_NAME) { RT_B_TICK(); 
R17 * l_H_3010; memset(&l_H_3010, 0, sizeof l_H_3010);
l_H_3010 = p_HS;
for (;;) {
if ((l_H_3010 == NULL)) goto L_end3011;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_H_3010))).f_A, p_NAME))
{
{ rt_int rv3012 = 1;
return rv3012; }
}
l_H_3010 = ((*(R17 *)rt_nil_check(l_H_3010))).f_NEXT;
}
RT_B_TICK();
} L_end3011: ;
{ rt_int rv3013 = 0;
return rv3013; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED_STMT(R17 * p_S) { RT_B_TICK(); 
rt_int l_K_3014; memset(&l_K_3014, 0, sizeof l_K_3014);
l_K_3014 = ((*(R17 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_3014 == g_N_EXCEPT))
{
{ rt_int rv3015 = r_IS_STRUCTURED_STMT(((*(R17 *)rt_nil_check(p_S))).f_A);
return rv3015; }
}
{ rt_int rv3016 = (((((((l_K_3014 == g_N_BLOCK) || (l_K_3014 == g_N_IF)) || (l_K_3014 == g_N_CASE)) || (l_K_3014 == g_N_LOOP)) || (l_K_3014 == g_N_FOR)) || (l_K_3014 == g_N_PAR)) || (l_K_3014 == g_N_WITH));
return rv3016; }
rt_raise(RT_X_INIT);
}
static R17 * r_NAMED_ROOT(R17 * p_E) { RT_B_TICK(); 
rt_int l_K_3017; memset(&l_K_3017, 0, sizeof l_K_3017);
l_K_3017 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
if (((l_K_3017 == g_N_NAME) || (l_K_3017 == g_N_APPLY)))
{
{ R17 * rv3018 = p_E;
return rv3018; }
}
else if ((((l_K_3017 == g_N_INDEX) || (l_K_3017 == g_N_FIELD)) || (l_K_3017 == g_N_SUBSTR)))
{
{ R17 * rv3019 = r_NAMED_ROOT(((*(R17 *)rt_nil_check(p_E))).f_A);
return rv3019; }
}
{ R17 * rv3020 = NULL;
return rv3020; }
rt_raise(RT_X_INIT);
}
static void r_STMT(R17 * p_S) { RT_B_TICK(); 
rt_int l_K_3021; memset(&l_K_3021, 0, sizeof l_K_3021);
l_K_3021 = ((*(R17 *)rt_nil_check(p_S))).f_KIND;
r_INTERFERENCE(p_S);
if ((l_K_3021 == g_N_NULL))
{
return;
}
else if ((l_K_3021 == g_N_LABELED))
{
{
R12 * l_Y_3022; memset(&l_Y_3022, 0, sizeof l_Y_3022);
l_Y_3022 = r_LOOKUP(((*(R17 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_3022))).f_ACCESS));
r_STMT(((*(R17 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_3021 == g_N_GOTO))
{
{
R12 * l_Y_3023; memset(&l_Y_3023, 0, sizeof l_Y_3023);
l_Y_3023 = r_LOOKUP(((*(R17 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_3024; memset(&l_N_3024, 0, sizeof l_N_3024);
R18 * l_C_3025; memset(&l_C_3025, 0, sizeof l_C_3025);
l_C_3025 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_3023 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3023))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3023))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
l_N_3024 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_3023))).f_MV);
for (;;) {
if ((l_N_3024 <= ((rt_int)0LL))) goto L_end3026;
{
if ((((*(R18 *)rt_nil_check(l_C_3025))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R18 *)rt_nil_check(l_C_3025))).f_NAME));
l_N_3024 = rt_sub(l_N_3024, ((rt_int)1LL));
}
l_C_3025 = ((*(R18 *)rt_nil_check(l_C_3025))).f_NEXT;
}
RT_B_TICK();
} L_end3026: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_3023))).f_ACCESS));
}
}
else if ((l_K_3021 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_3021 == g_N_CALL))
{
{
R26 l_V_3027; memset(&l_V_3027, 0, sizeof l_V_3027);
S_R26(&l_V_3027, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_3027).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_3027).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_3027).f_C, rt_str(";", 1)));
}
}
else if ((l_K_3021 == g_N_IF))
{
r_IF_STMT(((*(R17 *)rt_nil_check(p_S))).f_A, ((*(R17 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_3021 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_3021 == g_N_LOOP))
{
{
R9 l_END_L_3028; memset(&l_END_L_3028, 0, sizeof l_END_L_3028);
S_R9(&l_END_L_3028, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R17 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A), l_END_L_3028));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_3028);
r_OPEN_BODY(((*(R17 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CODES(rt_str("RT_B_TICK();", 12));
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_C), l_END_L_3028));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_3028));
}
}
else if ((l_K_3021 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_3021 == g_N_EXIT))
{
{
R18 * l_C_3029; memset(&l_C_3029, 0, sizeof l_C_3029);
l_C_3029 = r_LEAVE(((rt_int)2LL));
if ((l_C_3029 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R18 *)rt_nil_check(l_C_3029))).f_NAME));
}
}
else if ((l_K_3021 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_3021 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R17 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_3021 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_3021 == g_N_ASSERT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS)
{
{
R14 l_SAVED_CODE_3030; memset(&l_SAVED_CODE_3030, 0, sizeof l_SAVED_CODE_3030);
S_R14(&l_SAVED_CODE_3030, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R9 l_C_3031; memset(&l_C_3031, 0, sizeof l_C_3031);
S_R9(&l_C_3031, r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3030, 0);
}
}
else
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A)));
}
}
else if ((l_K_3021 == g_N_EXCEPT))
{
r_GUARDED(((*(R17 *)rt_nil_check(p_S))).f_A, NULL, ((*(R17 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_3021 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_3021 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_3021 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R17 * p_S) { RT_B_TICK(); 
R12 * l_Y_3032; memset(&l_Y_3032, 0, sizeof l_Y_3032);
l_Y_3032 = r_LOOKUP(((*(R17 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_3032 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_3032))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_3032))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv3033 = r_CALL_EXPR(p_S, NULL);
return rv3033; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R17 * p_ARMS, R17 * p_ELSE_BODY) { RT_B_TICK(); 
R17 * l_ARM_3034; memset(&l_ARM_3034, 0, sizeof l_ARM_3034);
l_ARM_3034 = p_ARMS;
R9 l_WORD_3035; memset(&l_WORD_3035, 0, sizeof l_WORD_3035);
S_R9(&l_WORD_3035, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_3036; memset(&l_OPEN_3036, 0, sizeof l_OPEN_3036);
l_OPEN_3036 = ((rt_int)0LL);
rt_int l_CHOSEN_3037; memset(&l_CHOSEN_3037, 0, sizeof l_CHOSEN_3037);
l_CHOSEN_3037 = 0;
for (;;) {
if ((l_ARM_3034 == NULL)) goto L_end3038;
{
{
R23 l_M_3039; memset(&l_M_3039, 0, sizeof l_M_3039);
S_R23(&l_M_3039, r_MANIFEST(((*(R17 *)rt_nil_check(l_ARM_3034))).f_A), 0);
if (l_CHOSEN_3037)
{
r_CHECK_COND(((*(R17 *)rt_nil_check(l_ARM_3034))).f_A);
r_CHECK_BODY(((*(R17 *)rt_nil_check(l_ARM_3034))).f_B);
}
else if ((l_M_3039).f_OK)
{
if ((!r_TEQS(l_WORD_3035, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_3036 = rt_add(l_OPEN_3036, ((rt_int)1LL));
S_R9(&l_WORD_3035, r_MK(rt_str("if", 2)), 0);
}
r_CODE(r_FMT1(rt_str("(void)(@);", 10), r_BOOL_EXPR(((*(R17 *)rt_nil_check(l_ARM_3034))).f_A)));
if (((l_M_3039).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R17 *)rt_nil_check(l_ARM_3034))).f_B);
l_CHOSEN_3037 = 1;
}
else
{
r_CHECK_BODY(((*(R17 *)rt_nil_check(l_ARM_3034))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3035, r_BOOL_EXPR(((*(R17 *)rt_nil_check(l_ARM_3034))).f_A)));
r_OPEN_BODY(((*(R17 *)rt_nil_check(l_ARM_3034))).f_B);
S_R9(&l_WORD_3035, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_3034 = ((*(R17 *)rt_nil_check(l_ARM_3034))).f_NEXT;
}
RT_B_TICK();
} L_end3038: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_3037)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_3035, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it3041_lo = ((rt_int)1LL), it3041_hi = l_OPEN_3036;
for (rt_int it3041 = it3041_lo; it3041 <= it3041_hi; it3041++) {
{
r_CODES(rt_str("}", 1));
}
RT_B_TICK();
if (it3041 == it3041_hi) break;
} } L_end3040: ;
}
static void r_CHECK_BODY(R17 * p_B) { RT_B_TICK(); 
R14 l_SAVED_CODE_3042; memset(&l_SAVED_CODE_3042, 0, sizeof l_SAVED_CODE_3042);
S_R14(&l_SAVED_CODE_3042, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3043; memset(&rc3043, 0, sizeof rc3043);  rc3043.f_HEAD = NULL; rc3043.f_TAIL = NULL; rc3043; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3042, 0);
}
static void r_CHECK_COND(R17 * p_E) { RT_B_TICK(); 
R9 l_C_3044; memset(&l_C_3044, 0, sizeof l_C_3044);
S_R9(&l_C_3044, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R17 * p_S) { RT_B_TICK(); 
R9 l_END_L_3045; memset(&l_END_L_3045, 0, sizeof l_END_L_3045);
S_R9(&l_END_L_3045, r_NEW_NAME(rt_str("L_end", 5)), 0);
R9 l_IT_3046; memset(&l_IT_3046, 0, sizeof l_IT_3046);
S_R9(&l_IT_3046, r_NEW_NAME(rt_str("it", 2)), 0);
R17 * l_R_3047; memset(&l_R_3047, 0, sizeof l_R_3047);
l_R_3047 = ((*(R17 *)rt_nil_check(p_S))).f_A;
R26 l_LO_3048; memset(&l_LO_3048, 0, sizeof l_LO_3048);
S_R26(&l_LO_3048, r_EXPR(((*(R17 *)rt_nil_check(l_R_3047))).f_A, NULL), 0);
R26 l_HI_3049; memset(&l_HI_3049, 0, sizeof l_HI_3049);
S_R26(&l_HI_3049, r_EXPR(((*(R17 *)rt_nil_check(l_R_3047))).f_B, (l_LO_3048).f_T), 0);
R22 * l_T_3050; memset(&l_T_3050, 0, sizeof l_T_3050);
l_T_3050 = r_REAL_TYPE((l_LO_3048).f_T);
R9 l_LOC_3051; memset(&l_LOC_3051, 0, sizeof l_LOC_3051);
R9 l_HIC_3052; memset(&l_HIC_3052, 0, sizeof l_HIC_3052);
if ((((*(R22 *)rt_nil_check(l_T_3050))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_3050))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_3050))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_3050))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R9(&l_LOC_3051, (l_LO_3048).f_C, 0);
S_R9(&l_HIC_3052, (l_HI_3049).f_C, 0);
if (((((*(R17 *)rt_nil_check(l_R_3047))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_R_3047))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LOC_3051, r_FMT1(rt_str("(@) + 1", 7), l_LOC_3051), 0);
}
if ((((*(R17 *)rt_nil_check(l_R_3047))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HIC_3052, r_FMT1(rt_str("(@) - 1", 7), l_HIC_3052), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_3046, l_LOC_3051, l_IT_3046, l_HIC_3052));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_3046, l_IT_3046, l_IT_3046, l_IT_3046));
r_OPEN_SCOPE();
if (((((*(R17 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_3053; memset(&l_Y_3053, 0, sizeof l_Y_3053);
l_Y_3053 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3053))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_3050))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_3053))).f_T = ((*(R22 *)rt_nil_check(l_T_3050))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_3053))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_3053, rt_str("", 0)), l_IT_3046));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_3053, rt_str("", 0)), l_IT_3046));
}
else
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3053))).f_ACCESS, l_IT_3046, 0);
}
r_DEFINE(l_Y_3053, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_3045);
r_OPEN_BODY(((*(R17 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODES(rt_str("RT_B_TICK();", 12));
r_CODE(r_FMT2(rt_str("if (@ == @_hi) break;", 21), l_IT_3046, l_IT_3046));
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_3045));
}
static void r_RETURN_STMT(R17 * p_S) { RT_B_TICK(); 
R19 * l_CS_3054; memset(&l_CS_3054, 0, sizeof l_CS_3054);
l_CS_3054 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_C_3055; memset(&l_C_3055, 0, sizeof l_C_3055);
if ((((*(R17 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_3055 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R19 *)rt_nil_check(l_CS_3054))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R19 *)rt_nil_check(l_CS_3054))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R19 *)rt_nil_check(l_CS_3054))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R19 *)rt_nil_check(l_CS_3054))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODE(r_CATS(((*(R19 *)rt_nil_check(l_CS_3054))).f_COPYOUT, rt_str("return;", 7)));
}
return;
}
if (((((*(R19 *)rt_nil_check(l_CS_3054))).f_RESULT == NULL) || ((*(R19 *)rt_nil_check(l_CS_3054))).f_IS_PATH))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R19 *)rt_nil_check(l_CS_3054))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R9 l_V_3056; memset(&l_V_3056, 0, sizeof l_V_3056);
S_R9(&l_V_3056, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R19 *)rt_nil_check(l_CS_3054))).f_RESULT), l_V_3056, r_CONVERT(r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A, ((*(R19 *)rt_nil_check(l_CS_3054))).f_RESULT), ((*(R19 *)rt_nil_check(l_CS_3054))).f_RESULT, ((*(R17 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_3055 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_3056));
}
}
static void r_SIGNAL_STMT(R17 * p_S) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R18 * l_C_3057; memset(&l_C_3057, 0, sizeof l_C_3057);
l_C_3057 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_3057 == NULL)) goto L_end3058;
{
if ((((*(R18 *)rt_nil_check(l_C_3057))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R18 *)rt_nil_check(l_C_3057))).f_NAME));
return;
}
if ((((*(R18 *)rt_nil_check(l_C_3057))).f_KIND == ((rt_int)1LL)))
{
goto L_end3058;
}
l_C_3057 = ((*(R18 *)rt_nil_check(l_C_3057))).f_NEXT;
}
RT_B_TICK();
} L_end3058: ;
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
R17 * l_TG_3059; memset(&l_TG_3059, 0, sizeof l_TG_3059);
l_TG_3059 = ((*(R17 *)rt_nil_check(p_S))).f_A;
if ((((*(R17 *)rt_nil_check(l_TG_3059))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_3060; memset(&l_B_3060, 0, sizeof l_B_3060);
S_R26(&l_B_3060, r_EXPR(((*(R17 *)rt_nil_check(l_TG_3059))).f_A, NULL), 0);
if ((!(l_B_3060).f_LVAL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_3060).f_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_3061; memset(&l_ARGS_3061, 0, sizeof l_ARGS_3061);
l_ARGS_3061 = r_NODE_ARG(((*(R17 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R17 *)rt_nil_check(l_TG_3059))).f_B, g_M_IN, r_NODE_ARG(((*(R17 *)rt_nil_check(l_TG_3059))).f_C, g_M_IN, r_VAL_ARG(l_B_3060, NULL))));
R12 * l_Y_3062; memset(&l_Y_3062, 0, sizeof l_Y_3062);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_3061))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_3062 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_3061, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_3062 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_3061))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_3062 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_3061, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_3062 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_3062, l_ARGS_3061, ((*(R17 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_3060).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_3060).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_3063; memset(&l_V_3063, 0, sizeof l_V_3063);
S_R26(&l_V_3063, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_B, (l_B_3060).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_3063).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_3060).f_T))).f_KIND)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_3060).f_C, r_INT_EXPR(((*(R17 *)rt_nil_check(l_TG_3059))).f_B), r_INT_EXPR(((*(R17 *)rt_nil_check(l_TG_3059))).f_C), (l_V_3063).f_C));
}
}
return;
}
{
R26 l_LV_3064; memset(&l_LV_3064, 0, sizeof l_LV_3064);
S_R26(&l_LV_3064, r_EXPR(l_TG_3059, NULL), 0);
R17 * l_SAVED_Q_3065; memset(&l_SAVED_Q_3065, 0, sizeof l_SAVED_Q_3065);
l_SAVED_Q_3065 = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
if ((!(l_LV_3064).f_LVAL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = NULL;
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_B))).f_KIND == g_N_QUAL))
{
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = ((*(R17 *)rt_nil_check(p_S))).f_B;
}
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R17 *)rt_nil_check(p_S))).f_B;
if (((((*(R22 *)rt_nil_check((l_LV_3064).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
r_REQUIRE_WHERE(r_MKN(rt_str("STORE_", 6)), ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
{
R26 l_V_3066; memset(&l_V_3066, 0, sizeof l_V_3066);
S_R26(&l_V_3066, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_B, (l_LV_3064).f_T), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
r_CODE(r_STORE_CODE((l_LV_3064).f_T, (l_LV_3064).f_C, l_V_3066, ((*(R17 *)rt_nil_check(p_S))).f_LINE, (l_LV_3064).f_SELF));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = l_SAVED_Q_3065;
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
R12 * l_Y_3067; memset(&l_Y_3067, 0, sizeof l_Y_3067);
l_Y_3067 = r_NEW_SYM(g_Y_VAR, ((*(R17 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_3068; memset(&l_V_3068, 0, sizeof l_V_3068);
S_R26(&l_V_3068, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_3067))).f_T = (l_V_3068).f_T;
((*(R12 *)rt_nil_check(l_Y_3067))).f_WITHV = ((rt_int)1LL);
if ((((*(R17 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R9 l_CN_3069; memset(&l_CN_3069, 0, sizeof l_CN_3069);
S_R9(&l_CN_3069, r_NEW_OBJECT(l_Y_3067, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_3068).f_T))
{
r_CODE(r_INIT_CODE((l_V_3068).f_T, l_CN_3069));
}
r_CODE(r_ASSIGN_CODE((l_V_3068).f_T, l_CN_3069, (l_V_3068).f_C));
}
}
else
{
if ((!(l_V_3068).f_LVAL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R9 l_P_3070; memset(&l_P_3070, 0, sizeof l_P_3070);
S_R9(&l_P_3070, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_3068).f_T), l_P_3070, (l_V_3068).f_C));
S_R9(&((*(R12 *)rt_nil_check(l_Y_3067))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_3070), 0);
S_R9(&((*(R12 *)rt_nil_check(l_Y_3067))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_3067))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_3067))).f_OWNER = rt_neg(((rt_int)1LL));
}
{
R17 * l_R_3071; memset(&l_R_3071, 0, sizeof l_R_3071);
l_R_3071 = r_NAMED_ROOT(((*(R17 *)rt_nil_check(p_S))).f_A);
if ((!(l_R_3071 == NULL)))
{
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_R_3071))).f_NAME, ((*(R17 *)rt_nil_check(p_S))).f_NAME)))
{
{
R12 * l_OLD_3072; memset(&l_OLD_3072, 0, sizeof l_OLD_3072);
l_OLD_3072 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_3071))).f_NAME);
if ((!(l_OLD_3072 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_OLD_3072))).f_KIND == g_Y_VAR))
{
{
R12 * l_H_3073; memset(&l_H_3073, 0, sizeof l_H_3073);
l_H_3073 = r_NEW_SYM(g_Y_VAR, ((*(R17 *)rt_nil_check(l_R_3071))).f_NAME);
((*(R12 *)rt_nil_check(l_H_3073))).f_T = ((*(R12 *)rt_nil_check(l_OLD_3072))).f_T;
((*(R12 *)rt_nil_check(l_H_3073))).f_WITHV = ((rt_int)2LL);
((*(R12 *)rt_nil_check(l_H_3073))).f_OWNER = ((*(R12 *)rt_nil_check(l_OLD_3072))).f_OWNER;
r_DEFINE(l_H_3073, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
}
}
}
}
}
}
}
r_DEFINE(l_Y_3067, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R17 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R17 * p_S) { RT_B_TICK(); 
R17 * l_ARM_3074; memset(&l_ARM_3074, 0, sizeof l_ARM_3074);
l_ARM_3074 = ((*(R17 *)rt_nil_check(p_S))).f_B;
R25 * l_SEEN_3075; memset(&l_SEEN_3075, 0, sizeof l_SEEN_3075);
l_SEEN_3075 = NULL;
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_3076; memset(&l_CH_3076, 0, sizeof l_CH_3076);
S_R26(&l_CH_3076, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_3077; memset(&l_T_3077, 0, sizeof l_T_3077);
l_T_3077 = r_REAL_TYPE((l_CH_3076).f_T);
R12 * l_BOUND_3078; memset(&l_BOUND_3078, 0, sizeof l_BOUND_3078);
l_BOUND_3078 = r_DISCRIMINATED(((*(R17 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_3077))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_3077))).f_KIND == g_T_BITS)))
{
{
R9 l_TMP_3079; memset(&l_TMP_3079, 0, sizeof l_TMP_3079);
S_R9(&l_TMP_3079, r_NEW_NAME(rt_str("cs", 2)), 0);
R9 l_WORD_3080; memset(&l_WORD_3080, 0, sizeof l_WORD_3080);
S_R9(&l_WORD_3080, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_3079, (l_CH_3076).f_C));
for (;;) {
if ((l_ARM_3074 == NULL)) goto L_end3081;
{
{
R17 * l_L_3082; memset(&l_L_3082, 0, sizeof l_L_3082);
l_L_3082 = ((*(R17 *)rt_nil_check(l_ARM_3074))).f_A;
R9 l_COND_3083; memset(&l_COND_3083, 0, sizeof l_COND_3083);
S_R9(&l_COND_3083, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3082 == NULL)) goto L_end3084;
{
S_R9(&l_COND_3083, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_3083, l_TMP_3079, (r_EXPR(l_L_3082, l_T_3077)).f_C), 0);
l_L_3082 = ((*(R17 *)rt_nil_check(l_L_3082))).f_NEXT;
}
RT_B_TICK();
} L_end3084: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3080, l_COND_3083));
S_R9(&l_WORD_3080, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3074))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3074))).f_C);
}
l_ARM_3074 = ((*(R17 *)rt_nil_check(l_ARM_3074))).f_NEXT;
}
RT_B_TICK();
} L_end3081: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_3080, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if (((((*(R22 *)rt_nil_check(l_T_3077))).f_KIND == g_T_FLOAT) || (((((*(R22 *)rt_nil_check(l_T_3077))).f_KIND == g_T_INT) && (!(((*(R22 *)rt_nil_check(l_T_3077))).f_SCALE == ((rt_int)0LL)))))))
{
r_VALUE_CASE(p_S, l_CH_3076);
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_3077))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_3077))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_3077))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_3077))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_3077));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_3076).f_C));
for (;;) {
if ((l_ARM_3074 == NULL)) goto L_end3085;
{
{
R17 * l_L_3086; memset(&l_L_3086, 0, sizeof l_L_3086);
l_L_3086 = ((*(R17 *)rt_nil_check(l_ARM_3074))).f_A;
R23 l_FIRST_3087; memset(&l_FIRST_3087, 0, sizeof l_FIRST_3087);
S_R23(&l_FIRST_3087, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_3086 == NULL)) goto L_end3088;
{
if ((((*(R17 *)rt_nil_check(l_L_3086))).f_KIND == g_N_RANGE))
{
{
R23 l_LO_3089; memset(&l_LO_3089, 0, sizeof l_LO_3089);
S_R23(&l_LO_3089, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_3086))).f_A, l_T_3077), 0);
R23 l_HI_3090; memset(&l_HI_3090, 0, sizeof l_HI_3090);
S_R23(&l_HI_3090, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_3086))).f_B, l_T_3077), 0);
rt_int l_A_3091; memset(&l_A_3091, 0, sizeof l_A_3091);
l_A_3091 = (l_LO_3089).f_V;
rt_int l_B_3092; memset(&l_B_3092, 0, sizeof l_B_3092);
l_B_3092 = (l_HI_3090).f_V;
if ((!(((l_LO_3089).f_OK && (l_HI_3090).f_OK))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_3086))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R17 *)rt_nil_check(l_L_3086))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_L_3086))).f_IV == ((rt_int)3LL))))
{
l_A_3091 = rt_add(l_A_3091, ((rt_int)1LL));
}
if ((((*(R17 *)rt_nil_check(l_L_3086))).f_IV >= ((rt_int)2LL)))
{
l_B_3092 = rt_sub(l_B_3092, ((rt_int)1LL));
}
if ((!(l_FIRST_3087).f_OK))
{
S_R23(&l_FIRST_3087, r_SOME(l_A_3091), 0);
}
l_SEEN_3075 = r_DISTINCT_LABEL(l_SEEN_3075, l_A_3091, l_B_3092, ((*(R17 *)rt_nil_check(l_L_3086))).f_LINE);
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_3091), r_NUM(l_B_3092)));
}
}
else
{
{
R23 l_M_3093; memset(&l_M_3093, 0, sizeof l_M_3093);
S_R23(&l_M_3093, r_ENUM_MANIFEST(l_L_3086, l_T_3077), 0);
if ((!(l_M_3093).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_3086))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_3087).f_OK))
{
S_R23(&l_FIRST_3087, l_M_3093, 0);
}
l_SEEN_3075 = r_DISTINCT_LABEL(l_SEEN_3075, (l_M_3093).f_V, (l_M_3093).f_V, ((*(R17 *)rt_nil_check(l_L_3086))).f_LINE);
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_3093).f_V)));
}
}
l_L_3086 = ((*(R17 *)rt_nil_check(l_L_3086))).f_NEXT;
}
RT_B_TICK();
} L_end3088: ;
if ((!(l_BOUND_3078 == NULL)))
{
{
R22 * l_SAVED_3094; memset(&l_SAVED_3094, 0, sizeof l_SAVED_3094);
l_SAVED_3094 = ((*(R12 *)rt_nil_check(l_BOUND_3078))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_3078))).f_T = r_NARROW(l_SAVED_3094, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_3087).f_V);
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3074))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3074))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_3078))).f_T = l_SAVED_3094;
}
}
else
{
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3074))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3074))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_3074 = ((*(R17 *)rt_nil_check(l_ARM_3074))).f_NEXT;
}
RT_B_TICK();
} L_end3085: ;
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
R25 * l_P_3095; memset(&l_P_3095, 0, sizeof l_P_3095);
l_P_3095 = p_SEEN;
if ((p_A > p_B))
{
{ R25 * rv3096 = p_SEEN;
return rv3096; }
}
for (;;) {
if ((l_P_3095 == NULL)) goto L_end3097;
{
if (((p_A <= (((*(R25 *)rt_nil_check(l_P_3095))).f_MHI).f_V) && ((((*(R25 *)rt_nil_check(l_P_3095))).f_MLO).f_V <= p_B)))
{
r_FAIL(p_LINE, rt_str("the choice-label values must be distinct (4.5.5.2)", 50));
}
l_P_3095 = ((*(R25 *)rt_nil_check(l_P_3095))).f_NEXT;
}
RT_B_TICK();
} L_end3097: ;
l_P_3095 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_P_3095)), ({ R25 rc3098; memset(&rc3098, 0, sizeof rc3098);  S_R9(&rc3098.f_LO, r_NO_TEXT(), 0); S_R9(&rc3098.f_HI, r_NO_TEXT(), 0); S_R23(&rc3098.f_MLO, r_SOME(p_A), 0); S_R23(&rc3098.f_MHI, r_SOME(p_B), 0); rc3098.f_ANYARG = 0; rc3098.f_NEXT = p_SEEN; rc3098; }), 0);
{ R25 * rv3099 = l_P_3095;
return rv3099; }
rt_raise(RT_X_INIT);
}
static void r_VALUE_CASE(R17 * p_S, R26 p_CH) { RT_B_TICK(); 
R9 l_TMP_3100; memset(&l_TMP_3100, 0, sizeof l_TMP_3100);
S_R9(&l_TMP_3100, r_NEW_NAME(rt_str("cs", 2)), 0);
R26 l_X_3101; memset(&l_X_3101, 0, sizeof l_X_3101);
S_R26(&l_X_3101, r_MKET(l_TMP_3100, (p_CH).f_T), 0);
R17 * l_ARM_3102; memset(&l_ARM_3102, 0, sizeof l_ARM_3102);
l_ARM_3102 = ((*(R17 *)rt_nil_check(p_S))).f_B;
R9 l_WORD_3103; memset(&l_WORD_3103, 0, sizeof l_WORD_3103);
S_R9(&l_WORD_3103, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(r_REAL_TYPE((p_CH).f_T)), l_TMP_3100, (p_CH).f_C));
for (;;) {
if ((l_ARM_3102 == NULL)) goto L_end3104;
{
{
R17 * l_L_3105; memset(&l_L_3105, 0, sizeof l_L_3105);
l_L_3105 = ((*(R17 *)rt_nil_check(l_ARM_3102))).f_A;
R9 l_COND_3106; memset(&l_COND_3106, 0, sizeof l_COND_3106);
S_R9(&l_COND_3106, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3105 == NULL)) goto L_end3107;
{
if ((((*(R17 *)rt_nil_check(l_L_3105))).f_KIND == g_N_RANGE))
{
{
R26 l_LO_3108; memset(&l_LO_3108, 0, sizeof l_LO_3108);
S_R26(&l_LO_3108, r_CASE_LABEL(((*(R17 *)rt_nil_check(l_L_3105))).f_A, (p_CH).f_T), 0);
R26 l_HI_3109; memset(&l_HI_3109, 0, sizeof l_HI_3109);
S_R26(&l_HI_3109, r_CASE_LABEL(((*(R17 *)rt_nil_check(l_L_3105))).f_B, (p_CH).f_T), 0);
rstr l_GE_3110; memset(&l_GE_3110, 0, sizeof l_GE_3110);
l_GE_3110 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_GE_3110, rt_str(">=", 2));
rstr l_LE_3111; memset(&l_LE_3111, 0, sizeof l_LE_3111);
l_LE_3111 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_LE_3111, rt_str("<=", 2));
if (((((*(R17 *)rt_nil_check(l_L_3105))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_L_3105))).f_IV == ((rt_int)3LL))))
{
rt_b_assign(&l_GE_3110, rt_str("> ", 2));
}
if ((((*(R17 *)rt_nil_check(l_L_3105))).f_IV >= ((rt_int)2LL)))
{
rt_b_assign(&l_LE_3111, rt_str("< ", 2));
}
S_R9(&l_COND_3106, r_FMT3(rt_str("@ || (@ && @)", 13), l_COND_3106, r_VALUE_COMPARE(l_X_3101, l_LO_3108, r_MK(l_GE_3110)), r_VALUE_COMPARE(l_X_3101, l_HI_3109, r_MK(l_LE_3111))), 0);
}
}
else
{
S_R9(&l_COND_3106, r_FMT2(rt_str("@ || @", 6), l_COND_3106, r_VALUE_COMPARE(l_X_3101, r_CASE_LABEL(l_L_3105, (p_CH).f_T), r_MK(rt_str("==", 2)))), 0);
}
l_L_3105 = ((*(R17 *)rt_nil_check(l_L_3105))).f_NEXT;
}
RT_B_TICK();
} L_end3107: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3103, l_COND_3106));
S_R9(&l_WORD_3103, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3102))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3102))).f_C);
}
l_ARM_3102 = ((*(R17 *)rt_nil_check(l_ARM_3102))).f_NEXT;
}
RT_B_TICK();
} L_end3104: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_3103, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
static R26 r_CASE_LABEL(R17 * p_L, R22 * p_T) { RT_B_TICK(); 
R26 l_V_3112; memset(&l_V_3112, 0, sizeof l_V_3112);
S_R26(&l_V_3112, r_EXPR(p_L, p_T), 0);
if ((!r_SAME_CLASS(r_REAL_TYPE((l_V_3112).f_T), r_REAL_TYPE(p_T))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_L))).f_LINE, rt_str("a case label is a value of the type of the choice (4.5.5.2)", 59));
}
{ R26 rv3113 = l_V_3112;
return rv3113; }
rt_raise(RT_X_INIT);
}
static R9 r_VALUE_COMPARE(R26 p_A, R26 p_B, R9 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT))
{
{ R9 rv3114 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv3114; }
}
{ R9 rv3115 = r_FIXED_COMPARE(p_A, p_B, p_OP);
return rv3115; }
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
{ R12 * rv3116 = NULL;
return rv3116; }
}
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv3117 = NULL;
return rv3117; }
}
{
R12 * l_Y_3118; memset(&l_Y_3118, 0, sizeof l_Y_3118);
l_Y_3118 = r_LOOKUP(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_3118 == NULL))
{
{ R12 * rv3119 = NULL;
return rv3119; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3118))).f_KIND == g_Y_VAR)))
{
{ R12 * rv3120 = NULL;
return rv3120; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3118))).f_WITHV == ((rt_int)1LL))))
{
{ R12 * rv3121 = NULL;
return rv3121; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_3118))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv3122 = NULL;
return rv3122; }
}
{
R24 * l_F_3123; memset(&l_F_3123, 0, sizeof l_F_3123);
l_F_3123 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_3118))).f_T), ((*(R17 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_3123 == NULL))
{
{ R12 * rv3124 = NULL;
return rv3124; }
}
if ((!(((*(R24 *)rt_nil_check(l_F_3123))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv3125 = NULL;
return rv3125; }
}
}
{ R12 * rv3126 = l_Y_3118;
return rv3126; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R9 p_TAGN, rt_int p_V) { RT_B_TICK(); 
R22 * l_N_3127; memset(&l_N_3127, 0, sizeof l_N_3127);
l_N_3127 = r_COPY_TYP(p_T);
R24 * l_F_3128; memset(&l_F_3128, 0, sizeof l_F_3128);
l_F_3128 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_3129; memset(&l_A_3129, 0, sizeof l_A_3129);
l_A_3129 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R25 * l_HEAD_3130; memset(&l_HEAD_3130, 0, sizeof l_HEAD_3130);
l_HEAD_3130 = NULL;
R25 * l_TAIL_3131; memset(&l_TAIL_3131, 0, sizeof l_TAIL_3131);
l_TAIL_3131 = NULL;
for (;;) {
if ((l_F_3128 == NULL)) goto L_end3132;
{
if (((!(((*(R24 *)rt_nil_check(l_F_3128))).f_KIND == ((rt_int)0LL))) && (!(l_A_3129 == NULL))))
{
{
R25 * l_B_3133; memset(&l_B_3133, 0, sizeof l_B_3133);
l_B_3133 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_B_3133)), (*(R25 *)rt_nil_check(l_A_3129)), 0);
((*(R25 *)rt_nil_check(l_B_3133))).f_NEXT = NULL;
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_3128))).f_NAME, p_TAGN))
{
((*(R25 *)rt_nil_check(l_B_3133))).f_ANYARG = 0;
S_R23(&((*(R25 *)rt_nil_check(l_B_3133))).f_MLO, r_SOME(p_V), 0);
S_R9(&((*(R25 *)rt_nil_check(l_B_3133))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_3131 == NULL))
{
l_HEAD_3130 = l_B_3133;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_3131))).f_NEXT = l_B_3133;
}
l_TAIL_3131 = l_B_3133;
}
l_A_3129 = ((*(R25 *)rt_nil_check(l_A_3129))).f_NEXT;
}
l_F_3128 = ((*(R24 *)rt_nil_check(l_F_3128))).f_NEXT;
}
RT_B_TICK();
} L_end3132: ;
((*(R22 *)rt_nil_check(l_N_3127))).f_ARGS = l_HEAD_3130;
{ R22 * rv3134 = l_N_3127;
return rv3134; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R17 * p_S) { RT_B_TICK(); 
R17 * l_ARM_3135; memset(&l_ARM_3135, 0, sizeof l_ARM_3135);
l_ARM_3135 = ((*(R17 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_3136; memset(&l_SAVED_3136, 0, sizeof l_SAVED_3136);
l_SAVED_3136 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_3135 == NULL)) goto L_end3137;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_ARM_3135))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3135))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3135))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_3136;
return;
}
l_ARM_3135 = ((*(R17 *)rt_nil_check(l_ARM_3135))).f_NEXT;
}
RT_B_TICK();
} L_end3137: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_3136;
}
}
static R22 * r_PATHS_TYPE(void) { RT_B_TICK(); 
R22 * l_T_3138; memset(&l_T_3138, 0, sizeof l_T_3138);
l_T_3138 = r_NEW_TYP(g_T_PATHS);
S_R9(&((*(R22 *)rt_nil_check(l_T_3138))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv3139 = l_T_3138;
return rv3139; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R17 * p_S) { RT_B_TICK(); 
R9 l_TD_3140; memset(&l_TD_3140, 0, sizeof l_TD_3140);
S_R9(&l_TD_3140, r_NEW_NAME(rt_str("td", 2)), 0);
R17 * l_P_3141; memset(&l_P_3141, 0, sizeof l_P_3141);
l_P_3141 = ((*(R17 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_3141 == NULL)) goto L_end3142;
{
{
R12 * l_Y_3143; memset(&l_Y_3143, 0, sizeof l_Y_3143);
l_Y_3143 = r_NEW_SYM(g_Y_PATH, ((*(R17 *)rt_nil_check(l_P_3141))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3143))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_3143))).f_DECL = l_P_3141;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_3143, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_3143))).f_INPUT = 1;
r_DEFINE(l_Y_3143, ((*(R17 *)rt_nil_check(l_P_3141))).f_LINE);
}
l_P_3141 = ((*(R17 *)rt_nil_check(l_P_3141))).f_NEXT;
}
RT_B_TICK();
} L_end3142: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_3140));
r_CODES(rt_str("rt_b_par_begin();", 17));
r_CODE(r_FMT2(rt_str("{ rt_frame @a; if (RT_TRY(@a)) {", 32), l_TD_3140, l_TD_3140));
l_P_3141 = ((*(R17 *)rt_nil_check(p_S))).f_A;
{
rt_int l_K_3144; memset(&l_K_3144, 0, sizeof l_K_3144);
l_K_3144 = ((rt_int)0LL);
for (;;) {
if ((l_P_3141 == NULL)) goto L_end3145;
{
l_K_3144 = rt_add(l_K_3144, ((rt_int)1LL));
r_ACTIVATE_PATH(l_P_3141, l_TD_3140, l_K_3144);
l_P_3141 = ((*(R17 *)rt_nil_check(l_P_3141))).f_NEXT;
}
RT_B_TICK();
} L_end3145: ;
}
r_CODE(r_FMT3(rt_str("RT_POP(@a); } else { RT_POP(@a); rt_b_par_abandon(&@);", 54), l_TD_3140, l_TD_3140, l_TD_3140));
r_CODES(rt_str("rt_raise(rt_xcur); } }", 22));
if (r_HAS_USER_ROUTINE(r_MKN(rt_str("PAR_BLOCK_", 10))))
{
{
R17 * l_C_3146; memset(&l_C_3146, 0, sizeof l_C_3146);
l_C_3146 = r_NEW_NODE(g_N_CALL, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
R17 * l_A_3147; memset(&l_A_3147, 0, sizeof l_A_3147);
l_A_3147 = r_NEW_NODE(g_N_APPLY, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_C_3146))).f_NAME, r_MKN(rt_str("PAR_BLOCK_", 10)), 0);
S_R9(&((*(R17 *)rt_nil_check(l_A_3147))).f_NAME, r_MKN(rt_str("$PATH_LIST", 10)), 0);
((*(R17 *)rt_nil_check(l_C_3146))).f_A = l_A_3147;
r_CODE(r_FMT1(rt_str("rt_b_par_dispatch_push(&@);", 27), l_TD_3140));
r_STMT(l_C_3146);
r_CODES(rt_str("rt_b_par_dispatch_pop();", 24));
}
}
else
{
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_3140));
}
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static R26 r_PATH_LIST(rt_int p_LINE) { RT_B_TICK(); 
R22 * l_PE_3148; memset(&l_PE_3148, 0, sizeof l_PE_3148);
l_PE_3148 = r_RESOLVE_USER_NAME(r_MK(rt_str("PATH_ENTRY", 10)), p_LINE);
R22 * l_R_3149; memset(&l_R_3149, 0, sizeof l_R_3149);
l_R_3149 = r_REAL_TYPE(l_PE_3148);
R22 * l_AT_3150; memset(&l_AT_3150, 0, sizeof l_AT_3150);
l_AT_3150 = r_ARRAY_OF(l_PE_3148, ((rt_int)1LL));
R9 l_C_3151; memset(&l_C_3151, 0, sizeof l_C_3151);
S_R9(&l_C_3151, r_CTYPE(l_AT_3150), 0);
R9 l_CODE__3152; memset(&l_CODE__3152, 0, sizeof l_CODE__3152);
if ((!(((*(R22 *)rt_nil_check(l_R_3149))).f_KIND == g_T_REC)))
{
r_FAIL(p_LINE, rt_str("PATH_ENTRY is the record type of PARALLEL_SUPPORT (D.7)", 55));
}
S_R9(&l_CODE__3152, r_FMT2(rt_str("({ @ a; rt_int n = rt_b_par_count(); a.lo[0] = 1; a.hi[0] = n; a.p = rt_b_array_alloc(n, sizeof *a.p); memset(a.p, 0, sizeof *a.p * (size_t)(n \? n : 1)); for (rt_int i = 0; i < n; i++) { a.p[i].@ = rt_b_bits_of_int(i + 1, 64);", 226), l_C_3151, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_R_3149, r_MKN(rt_str("PATH_ADDR", 9)))))).f_CNAME), 0);
S_R9(&l_CODE__3152, r_FMT3(rt_str("@ a.p[i].@ = rt_b_par_id(i); a.p[i].@ = rt_b_par_prio(i);", 57), l_CODE__3152, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_R_3149, r_MKN(rt_str("ACTIVATION_ID", 13)))))).f_CNAME, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_R_3149, r_MKN(rt_str("PRIORITY_LEVEL", 14)))))).f_CNAME), 0);
S_R9(&l_CODE__3152, r_FMT3(rt_str("@ a.p[i].@ = rt_b_par_connect(i, @); } a; })", 44), l_CODE__3152, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_R_3149, r_MKN(rt_str("CONNECT_NAME", 12)))))).f_CNAME, r_NUM(r_STATIC_SIZE_OR_LEN(((*(R24 *)rt_nil_check(r_FIND_FIELD(l_R_3149, r_MKN(rt_str("CONNECT_NAME", 12)))))).f_T))), 0);
{ R26 rv3153 = r_MKET(l_CODE__3152, l_AT_3150);
return rv3153; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_SIZE_OR_LEN(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_MLEN).f_OK)
{
{ rt_int rv3154 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_MLEN).f_V;
return rv3154; }
}
{ rt_int rv3155 = ((rt_int)32LL);
return rv3155; }
rt_raise(RT_X_INIT);
}
static R26 r_RUN_PATHS(R17 * p_E) { RT_B_TICK(); 
R26 l_V_3156; memset(&l_V_3156, 0, sizeof l_V_3156);
S_R26(&l_V_3156, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_3157; memset(&l_T_3157, 0, sizeof l_T_3157);
l_T_3157 = r_REAL_TYPE((l_V_3156).f_T);
R22 * l_R_3158; memset(&l_R_3158, 0, sizeof l_R_3158);
if (((!(((*(R22 *)rt_nil_check(l_T_3157))).f_KIND == g_T_ARR)) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("RUN_PATHS takes the ARRAY OF PATH_ENTRY its PAR_BLOCK_ was given (D.7)", 70));
}
l_R_3158 = r_REAL_TYPE(((*(R22 *)rt_nil_check(l_T_3157))).f_ELEM);
if ((!(((*(R22 *)rt_nil_check(l_R_3158))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("RUN_PATHS takes the ARRAY OF PATH_ENTRY its PAR_BLOCK_ was given (D.7)", 70));
}
{ R26 rv3159 = r_MKET(r_FMT4(rt_str("({ @ l = @; rt_int n = rt_b_extent(1, l.lo, l.hi); for (rt_int k = 0; k < n; k++) rt_b_par_select(rt_b_int_of_bits(l.p[k].@), l.p[k].@); rt_b_par_run(); })", 155), r_CTYPE(l_T_3157), (l_V_3156).f_C, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_R_3158, r_MKN(rt_str("PATH_ADDR", 9)))))).f_CNAME, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_R_3158, r_MKN(rt_str("PRIORITY_LEVEL", 14)))))).f_CNAME), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3159; }
rt_raise(RT_X_INIT);
}
static void r_ACTIVATE_PATH(R17 * p_P, R9 p_TD, rt_int p_K) { RT_B_TICK(); 
R9 l_FN_3160; memset(&l_FN_3160, 0, sizeof l_FN_3160);
S_R9(&l_FN_3160, r_NEW_NAME(rt_str("path_", 5)), 0);
R9 l_FT_3161; memset(&l_FT_3161, 0, sizeof l_FT_3161);
S_R9(&l_FT_3161, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_3162; memset(&l_Y_3162, 0, sizeof l_Y_3162);
l_Y_3162 = r_LOOKUP(((*(R17 *)rt_nil_check(p_P))).f_NAME);
R9 l_H_3163; memset(&l_H_3163, 0, sizeof l_H_3163);
S_R9(&l_H_3163, r_OBJ_ACCESS(l_Y_3162), 0);
R9 l_IT_3164; memset(&l_IT_3164, 0, sizeof l_IT_3164);
S_R9(&l_IT_3164, r_NEW_NAME(rt_str("pi", 2)), 0);
R9 l_PRIO_3165; memset(&l_PRIO_3165, 0, sizeof l_PRIO_3165);
S_R9(&l_PRIO_3165, r_MK(rt_str("0", 1)), 0);
R9 l_START_3166; memset(&l_START_3166, 0, sizeof l_START_3166);
R22 * l_LT_3167; memset(&l_LT_3167, 0, sizeof l_LT_3167);
l_LT_3167 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_3161, l_FT_3161));
if ((!(((*(R17 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R9(&l_PRIO_3165, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R17 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R17 * l_R_3168; memset(&l_R_3168, 0, sizeof l_R_3168);
l_R_3168 = ((*(R17 *)rt_nil_check(p_P))).f_A;
R26 l_LV_3169; memset(&l_LV_3169, 0, sizeof l_LV_3169);
S_R26(&l_LV_3169, r_EXPR(((*(R17 *)rt_nil_check(l_R_3168))).f_A, NULL), 0);
R9 l_LO_3170; memset(&l_LO_3170, 0, sizeof l_LO_3170);
S_R9(&l_LO_3170, (l_LV_3169).f_C, 0);
R9 l_HI_3171; memset(&l_HI_3171, 0, sizeof l_HI_3171);
S_R9(&l_HI_3171, (r_EXPR(((*(R17 *)rt_nil_check(l_R_3168))).f_B, (l_LV_3169).f_T)).f_C, 0);
R22 * l_RT_3172; memset(&l_RT_3172, 0, sizeof l_RT_3172);
l_RT_3172 = r_REAL_TYPE((l_LV_3169).f_T);
if ((((*(R22 *)rt_nil_check(l_RT_3172))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_RT_3172))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_str("a loop prefix over an UNORDERED type (4.6.1)", 44));
}
l_LT_3167 = ((*(R22 *)rt_nil_check(l_RT_3172))).f_BASE;
S_R9(&l_HI_3171, (r_EXPR(((*(R17 *)rt_nil_check(l_R_3168))).f_B, l_LT_3167)).f_C, 0);
}
else if (((!(((*(R22 *)rt_nil_check(l_RT_3172))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_RT_3172))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_str("the range of a loop prefix is integer or enumerated (4.6.1)", 59));
}
if (((((*(R17 *)rt_nil_check(l_R_3168))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_R_3168))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LO_3170, r_FMT1(rt_str("(@) + 1", 7), l_LO_3170), 0);
}
if ((((*(R17 *)rt_nil_check(l_R_3168))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HI_3171, r_FMT1(rt_str("(@) - 1", 7), l_HI_3171), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_3163, l_LO_3170, l_HI_3171));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_3164, l_H_3163, l_IT_3164, l_H_3163), l_IT_3164));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_3164));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_3161, r_UP_FRAME()));
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME), l_IT_3164));
}
if ((!(((*(R17 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_3173; memset(&l_V_3173, 0, sizeof l_V_3173);
r_OPEN_SCOPE();
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_3174; memset(&l_I_3174, 0, sizeof l_I_3174);
l_I_3174 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_3174))).f_T = l_LT_3167;
((*(R12 *)rt_nil_check(l_I_3174))).f_INPUT = 1;
S_R9(&((*(R12 *)rt_nil_check(l_I_3174))).f_ACCESS, l_IT_3164, 0);
((*(R12 *)rt_nil_check(l_I_3174))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_3174, ((*(R17 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_3173, r_EXPR(((*(R17 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3173).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
if ((!r_IMPLEMENTATION_SEMAPHORE(((*(R17 *)rt_nil_check(p_P))).f_D)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_b_cat(rt_str("CONNECT names an implementation-defined semaphore, of the machine's ", 68), rt_str("library segment (4.6.1)", 23)));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_3173).f_C));
}
}
S_R9(&l_START_3166, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_3163, l_IT_3164, l_FN_3160, p_TD), 0);
S_R9(&l_PRIO_3165, r_CAT(l_PRIO_3165, r_FMT4(rt_str("); rt_b_path_info(&@, @, @, @", 29), p_TD, r_NUM(p_K), l_IT_3164, r_CONNECT_NAME(p_P))), 0);
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT4(rt_str("@@, @); if (@ == ", 17), l_START_3166, p_TD, l_PRIO_3165, l_IT_3164));
r_CODE(r_FMT1(rt_str("@.hi) break; }", 14), l_H_3163));
}
else
{
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_3166, p_TD, l_PRIO_3165));
}
r_PATH_BODY(p_P, l_FN_3160, l_FT_3161, l_LT_3167);
}
static rt_int r_IMPLEMENTATION_SEMAPHORE(R17 * p_E) { RT_B_TICK(); 
R17 * l_R_3175; memset(&l_R_3175, 0, sizeof l_R_3175);
l_R_3175 = p_E;
for (;;) {
if (((((*(R17 *)rt_nil_check(l_R_3175))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_3175))).f_KIND == g_N_APPLY))) goto L_end3176;
{
if (((!(((*(R17 *)rt_nil_check(l_R_3175))).f_KIND == g_N_INDEX)) && (!(((*(R17 *)rt_nil_check(l_R_3175))).f_KIND == g_N_FIELD))))
{
{ rt_int rv3177 = 0;
return rv3177; }
}
l_R_3175 = ((*(R17 *)rt_nil_check(l_R_3175))).f_A;
}
RT_B_TICK();
} L_end3176: ;
{
R12 * l_Y_3178; memset(&l_Y_3178, 0, sizeof l_Y_3178);
l_Y_3178 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(l_R_3175))).f_NAME);
if ((l_Y_3178 == NULL))
{
{ rt_int rv3179 = 0;
return rv3179; }
}
if ((((*(R12 *)rt_nil_check(l_Y_3178))).f_HOME == NULL))
{
{ rt_int rv3180 = 0;
return rv3180; }
}
{ rt_int rv3181 = r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LIBSEGS, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3178))).f_HOME))).f_NAME);
return rv3181; }
}
rt_raise(RT_X_INIT);
}
static R9 r_CONNECT_NAME(R17 * p_P) { RT_B_TICK(); 
R17 * l_R_3182; memset(&l_R_3182, 0, sizeof l_R_3182);
l_R_3182 = ((*(R17 *)rt_nil_check(p_P))).f_D;
if ((l_R_3182 == NULL))
{
{ R9 rv3183 = r_MK(rt_str("\"\"", 2));
return rv3183; }
}
for (;;) {
if (((((*(R17 *)rt_nil_check(l_R_3182))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_3182))).f_KIND == g_N_APPLY))) goto L_end3184;
{
if (((!(((*(R17 *)rt_nil_check(l_R_3182))).f_KIND == g_N_INDEX)) && (!(((*(R17 *)rt_nil_check(l_R_3182))).f_KIND == g_N_FIELD))))
{
{ R9 rv3185 = r_MK(rt_str("\"\"", 2));
return rv3185; }
}
l_R_3182 = ((*(R17 *)rt_nil_check(l_R_3182))).f_A;
}
RT_B_TICK();
} L_end3184: ;
{ R9 rv3186 = r_CSTRING(((*(R17 *)rt_nil_check(l_R_3182))).f_NAME);
return rv3186; }
rt_raise(RT_X_INIT);
}
static R9 r_UP_FRAME(void) { RT_B_TICK(); 
if ((((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R9 rv3187 = r_MK(rt_str("NULL", 4));
return rv3187; }
}
{ R9 rv3188 = r_MK(rt_str("F", 1));
return rv3188; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R17 * p_P, R9 p_FN, R9 p_FT, R22 * p_LT) { RT_B_TICK(); 
R14 l_SAVED_CODE_3189; memset(&l_SAVED_CODE_3189, 0, sizeof l_SAVED_CODE_3189);
S_R14(&l_SAVED_CODE_3189, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R18 * l_SAVED_CTXS_3190; memset(&l_SAVED_CTXS_3190, 0, sizeof l_SAVED_CTXS_3190);
l_SAVED_CTXS_3190 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R19 * l_OUTER_3191; memset(&l_OUTER_3191, 0, sizeof l_OUTER_3191);
l_OUTER_3191 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_H_3192; memset(&l_H_3192, 0, sizeof l_H_3192);
l_H_3192 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_A;
R19 * l_CS_3193; memset(&l_CS_3193, 0, sizeof l_CS_3193);
l_CS_3193 = ((R19 *)rt_b_new(sizeof (R19)));
R9 l_UPT_3194; memset(&l_UPT_3194, 0, sizeof l_UPT_3194);
S_R9(&l_UPT_3194, r_MK(rt_str("void", 4)), 0);
if ((((*(R19 *)rt_nil_check(l_OUTER_3191))).f_LEVEL > ((rt_int)0LL)))
{
S_R9(&l_UPT_3194, ((*(R19 *)rt_nil_check(l_OUTER_3191))).f_FTYPE, 0);
}
S_R19(&(*(R19 *)rt_nil_check(l_CS_3193)), ({ R19 rc3195; memset(&rc3195, 0, sizeof rc3195);  rc3195.f_LEVEL = rt_add(((*(R19 *)rt_nil_check(l_OUTER_3191))).f_LEVEL, ((rt_int)1LL)); rc3195.f_R = NULL; rc3195.f_FRAMED = 1; S_R9(&rc3195.f_FTYPE, p_FT, 0); S_R14(&rc3195.f_FIELDS, ({ R14 rc3196; memset(&rc3196, 0, sizeof rc3196);  rc3196.f_HEAD = NULL; rc3196.f_TAIL = NULL; rc3196; }), 0); rc3195.f_UP = l_OUTER_3191; rc3195.f_IMPORTS = ((*(R17 *)rt_nil_check(l_H_3192))).f_B; rc3195.f_SIGNALS = ((*(R17 *)rt_nil_check(l_H_3192))).f_A; rc3195.f_RESULT = NULL; rc3195.f_IS_PATH = 1; S_R9(&rc3195.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3195; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_3194), &((*(R19 *)rt_nil_check(l_CS_3193))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_3193;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3197; memset(&rc3197, 0, sizeof rc3197);  rc3197.f_HEAD = NULL; rc3197.f_TAIL = NULL; rc3197; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R17 *)rt_nil_check(l_H_3192))).f_B, ((*(R17 *)rt_nil_check(l_H_3192))).f_A, ((*(R17 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_3198; memset(&l_I_3198, 0, sizeof l_I_3198);
l_I_3198 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_3198))).f_T = p_LT;
((*(R12 *)rt_nil_check(l_I_3198))).f_INPUT = 1;
S_R9(&((*(R12 *)rt_nil_check(l_I_3198))).f_FIELD, r_FMT1(rt_str("l_@", 3), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
S_R9(&((*(R12 *)rt_nil_check(l_I_3198))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3193))).f_FIELDS);
r_DEFINE(l_I_3198, ((*(R17 *)rt_nil_check(p_P))).f_LINE);
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
R17 * l_L_3199; memset(&l_L_3199, 0, sizeof l_L_3199);
l_L_3199 = ((*(R17 *)rt_nil_check(l_H_3192))).f_A;
R9 l_C_3200; memset(&l_C_3200, 0, sizeof l_C_3200);
S_R9(&l_C_3200, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3199 == NULL)) goto L_end3201;
{
S_R9(&l_C_3200, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_3200, r_EXC_NAME(((*(R17 *)rt_nil_check(l_L_3199))).f_NAME)), 0);
l_L_3199 = ((*(R17 *)rt_nil_check(l_L_3199))).f_NEXT;
}
RT_B_TICK();
} L_end3201: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_3200));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R19 *)rt_nil_check(l_CS_3193))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_3191;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3189, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_3190;
}
static R9 r_JOIN_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_3202; memset(&l_C_3202, 0, sizeof l_C_3202);
l_C_3202 = (p_B).f_HEAD;
R9 l_R_3203; memset(&l_R_3203, 0, sizeof l_R_3203);
S_R9(&l_R_3203, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_3202 == NULL)) goto L_end3204;
{
S_R9(&l_R_3203, r_CAT(l_R_3203, ((*(R15 *)rt_nil_check(l_C_3202))).f_T), 0);
l_C_3202 = ((*(R15 *)rt_nil_check(l_C_3202))).f_NEXT;
}
RT_B_TICK();
} L_end3204: ;
{ R9 rv3205 = l_R_3203;
return rv3205; }
rt_raise(RT_X_INIT);
}
static R9 r_PATH_REF(R17 * p_E) { RT_B_TICK(); 
R9 l_NAME_3206; memset(&l_NAME_3206, 0, sizeof l_NAME_3206);
S_R9(&l_NAME_3206, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
R9 l_SUB_3207; memset(&l_SUB_3207, 0, sizeof l_SUB_3207);
S_R9(&l_SUB_3207, r_MK(rt_str("0", 1)), 0);
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R17 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R9(&l_SUB_3207, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_3208; memset(&l_Y_3208, 0, sizeof l_Y_3208);
l_Y_3208 = r_LOOKUP(l_NAME_3206);
if ((l_Y_3208 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_3206);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3208))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_3206);
}
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3208))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R9 rv3209 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_3208), l_SUB_3207);
return rv3209; }
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
R9 l_NAME_3210; memset(&l_NAME_3210, 0, sizeof l_NAME_3210);
S_R9(&l_NAME_3210, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_3211; memset(&l_LINE_3211, 0, sizeof l_LINE_3211);
l_LINE_3211 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_3210, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_3212; memset(&l_V_3212, 0, sizeof l_V_3212);
S_R26(&l_V_3212, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3212).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_3211, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv3213 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_3212).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_3212).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3213; }
}
}
else if (r_TEQS(l_NAME_3210, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv3214 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3214; }
}
{ R26 rv3215 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3215; }
}
else if (r_TEQS(l_NAME_3210, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R17 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv3216 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv3216; }
}
{ R26 rv3217 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R17 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv3217; }
}
else if ((r_TEQS(l_NAME_3210, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_3210, rt_str("RELEASE", 7))))
{
if ((((!(((*(R17 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_3211, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_3210);
}
{
R26 l_V_3218; memset(&l_V_3218, 0, sizeof l_V_3218);
S_R26(&l_V_3218, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3218).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_3211, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_3218).f_LVAL))
{
r_FAIL(l_LINE_3211, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_3210, rt_str("REQUEST", 7)))
{
{ R26 rv3219 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_3218).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3219; }
}
{ R26 rv3220 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_3218).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3220; }
}
}
else if (r_TEQS(l_NAME_3210, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_3211);
{ R26 rv3221 = r_START_IO_CALL(p_E);
return rv3221; }
}
r_FAILT(l_LINE_3211, rt_str("unknown routine ", 16), l_NAME_3210);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R17 * p_E) { RT_B_TICK(); 
R27 * l_ARGS_3222; memset(&l_ARGS_3222, 0, sizeof l_ARGS_3222);
l_ARGS_3222 = r_CALL_ARGS(p_E);
R12 * l_Y_3223; memset(&l_Y_3223, 0, sizeof l_Y_3223);
l_Y_3223 = r_FIND_ROUTINE(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_ARGS_3222, ((*(R17 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_3224; memset(&l_R_3224, 0, sizeof l_R_3224);
if ((l_Y_3223 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_3224, r_CALL_SYM(l_Y_3223, l_ARGS_3222, ((*(R17 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv3225 = l_R_3224;
return rv3225; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R17 * p_IMPORTS, R17 * p_SIGNALS, R9 p_NAME) { RT_B_TICK(); 
R20 * l_I_3226; memset(&l_I_3226, 0, sizeof l_I_3226);
l_I_3226 = ((R20 *)rt_b_new(sizeof (R20)));
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R20(&(*(R20 *)rt_nil_check(l_I_3226)), ({ R20 rc3227; memset(&rc3227, 0, sizeof rc3227);  rc3227.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc3227.f_IMPORTS = p_IMPORTS; rc3227.f_SIGNALS = p_SIGNALS; S_R9(&rc3227.f_NAME, p_NAME, 0); rc3227.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc3227; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_3226;
}
static void r_LEAVE_ISCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R20 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R9 r_ROUTINE_CNAME(R9 p_NAME) { RT_B_TICK(); 
R9 l_BASE_3228; memset(&l_BASE_3228, 0, sizeof l_BASE_3228);
S_R9(&l_BASE_3228, r_FMT1(rt_str("r_@", 3), r_CID(p_NAME)), 0);
rstr l_S_3229; memset(&l_S_3229, 0, sizeof l_S_3229);
l_S_3229 = rt_b_str_new((l_BASE_3228).f_LEN, 0);
rt_b_assign(&l_S_3229, r_STR(l_BASE_3228, (l_BASE_3228).f_LEN));
R17 * l_N_3230; memset(&l_N_3230, 0, sizeof l_N_3230);
l_N_3230 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it3232_lo = ((rt_int)0LL), it3232_hi = rt_sub((l_BASE_3228).f_LEN, ((rt_int)1LL));
for (rt_int it3232 = it3232_lo; it3232 <= it3232_hi; it3232++) {
{
if (rt_b_eq(rt_b_slice(l_S_3229, it3232, it3232), rt_str("$", 1)))
{
S_R9(&l_BASE_3228, r_MK(rt_b_cat(rt_b_cat(rt_b_slice(l_S_3229, ((rt_int)0LL), rt_sub(it3232, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_3229, rt_add(it3232, ((rt_int)1LL)), rt_sub((l_BASE_3228).f_LEN, ((rt_int)1LL))))), 0);
}
}
RT_B_TICK();
if (it3232 == it3232_hi) break;
} } L_end3231: ;
for (;;) {
if ((l_N_3230 == NULL)) goto L_end3233;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_N_3230))).f_NAME, l_BASE_3228))
{
{ R9 rv3234 = r_FMT2(rt_str("@_@", 3), l_BASE_3228, r_NEW_NAME(rt_str("", 0)));
return rv3234; }
}
l_N_3230 = ((*(R17 *)rt_nil_check(l_N_3230))).f_NEXT;
}
RT_B_TICK();
} L_end3233: ;
l_N_3230 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_3230))).f_NAME, l_BASE_3228, 0);
((*(R17 *)rt_nil_check(l_N_3230))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_3230;
{ R9 rv3235 = l_BASE_3228;
return rv3235; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R17 * p_B) { RT_B_TICK(); 
if ((p_B == NULL))
{
{ rt_int rv3236 = 0;
return rv3236; }
}
if ((!(((*(R17 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv3237 = 1;
return rv3237; }
}
{ rt_int rv3238 = r_HAS_HANDLERS(((*(R17 *)rt_nil_check(p_B))).f_B);
return rv3238; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R17 * p_S0) { RT_B_TICK(); 
R17 * l_S_3239; memset(&l_S_3239, 0, sizeof l_S_3239);
l_S_3239 = p_S0;
for (;;) {
if ((l_S_3239 == NULL)) goto L_end3240;
{
if (((((*(R17 *)rt_nil_check(l_S_3239))).f_KIND == g_N_EXCEPT) || (((*(R17 *)rt_nil_check(l_S_3239))).f_KIND == g_N_PAR)))
{
{ rt_int rv3241 = 1;
return rv3241; }
}
if (((((*(R17 *)rt_nil_check(l_S_3239))).f_KIND == g_N_LABELED) || (((*(R17 *)rt_nil_check(l_S_3239))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R17 *)rt_nil_check(l_S_3239))).f_A) || r_HAS_HANDLERS(((*(R17 *)rt_nil_check(l_S_3239))).f_B)))
{
{ rt_int rv3242 = 1;
return rv3242; }
}
}
else if ((((*(R17 *)rt_nil_check(l_S_3239))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3239))).f_A))).f_B))
{
{ rt_int rv3243 = 1;
return rv3243; }
}
}
else if (((((*(R17 *)rt_nil_check(l_S_3239))).f_KIND == g_N_LOOP) || (((*(R17 *)rt_nil_check(l_S_3239))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3239))).f_B))).f_B))
{
{ rt_int rv3244 = 1;
return rv3244; }
}
}
else if (((((*(R17 *)rt_nil_check(l_S_3239))).f_KIND == g_N_IF) || (((*(R17 *)rt_nil_check(l_S_3239))).f_KIND == g_N_CASE)))
{
{
R17 * l_A_3245; memset(&l_A_3245, 0, sizeof l_A_3245);
l_A_3245 = ((*(R17 *)rt_nil_check(l_S_3239))).f_A;
if ((((*(R17 *)rt_nil_check(l_S_3239))).f_KIND == g_N_CASE))
{
l_A_3245 = ((*(R17 *)rt_nil_check(l_S_3239))).f_B;
if ((!(((*(R17 *)rt_nil_check(l_S_3239))).f_D == NULL)))
{
{ rt_int rv3246 = 1;
return rv3246; }
}
if ((!(((*(R17 *)rt_nil_check(l_S_3239))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3239))).f_C))).f_B))
{
{ rt_int rv3247 = 1;
return rv3247; }
}
}
}
else if ((!(((*(R17 *)rt_nil_check(l_S_3239))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3239))).f_B))).f_B))
{
{ rt_int rv3248 = 1;
return rv3248; }
}
}
for (;;) {
if ((l_A_3245 == NULL)) goto L_end3249;
{
if ((!(((*(R17 *)rt_nil_check(l_A_3245))).f_C == NULL)))
{
{ rt_int rv3250 = 1;
return rv3250; }
}
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_3245))).f_B))).f_B))
{
{ rt_int rv3251 = 1;
return rv3251; }
}
l_A_3245 = ((*(R17 *)rt_nil_check(l_A_3245))).f_NEXT;
}
RT_B_TICK();
} L_end3249: ;
}
}
l_S_3239 = ((*(R17 *)rt_nil_check(l_S_3239))).f_NEXT;
}
RT_B_TICK();
} L_end3240: ;
{ rt_int rv3252 = 0;
return rv3252; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R17 * p_R) { RT_B_TICK(); 
R12 * l_Y_3253; memset(&l_Y_3253, 0, sizeof l_Y_3253);
l_Y_3253 = r_NEW_SYM(g_Y_ROUTINE, ((*(R17 *)rt_nil_check(p_R))).f_NAME);
rstr l_S_3254; memset(&l_S_3254, 0, sizeof l_S_3254);
l_S_3254 = rt_b_str_new((((*(R17 *)rt_nil_check(p_R))).f_NAME).f_LEN, 0);
rt_b_assign(&l_S_3254, r_STR(((*(R17 *)rt_nil_check(p_R))).f_NAME, (((*(R17 *)rt_nil_check(p_R))).f_NAME).f_LEN));
((*(R12 *)rt_nil_check(l_Y_3253))).f_DECL = p_R;
S_R9(&((*(R12 *)rt_nil_check(l_Y_3253))).f_ACCESS, r_ROUTINE_CNAME(((*(R17 *)rt_nil_check(p_R))).f_NAME), 0);
if ((((((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)) && ((((*(R7 *)rt_nil_check(g_W))).f_SEPSEG).f_LEN > ((rt_int)0LL))) && (!(((*(R17 *)rt_nil_check(p_R))).f_FL == ((rt_int)1LL)))))
{
((*(R7 *)rt_nil_check(g_W))).f_SEPR = rt_add(((*(R7 *)rt_nil_check(g_W))).f_SEPR, ((rt_int)1LL));
S_R9(&((*(R12 *)rt_nil_check(l_Y_3253))).f_ACCESS, r_FMT3(rt_str("bs_@_r@_@", 9), r_CID(((*(R7 *)rt_nil_check(g_W))).f_SEPSEG), r_NUM(((*(R7 *)rt_nil_check(g_W))).f_SEPR), r_CID(((*(R17 *)rt_nil_check(p_R))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_Y_3253))).f_LINKAGE = ((rt_int)1LL);
if (((*(R7 *)rt_nil_check(g_W))).f_EXTSEG)
{
((*(R12 *)rt_nil_check(l_Y_3253))).f_LINKAGE = ((rt_int)2LL);
}
}
((*(R12 *)rt_nil_check(l_Y_3253))).f_FRAMED = r_NEEDS_FRAME(((*(R17 *)rt_nil_check(p_R))).f_C);
if ((((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3253))).f_FIELD, ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_3253, ((*(R17 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it3256_lo = ((rt_int)1LL), it3256_hi = rt_sub((((*(R17 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it3256 = it3256_lo; it3256 <= it3256_hi; it3256++) {
{
if (rt_b_eq(rt_b_slice(l_S_3254, it3256, it3256), rt_str("$", 1)))
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3253))).f_PREFIX, r_MKN(rt_b_slice(l_S_3254, ((rt_int)0LL), rt_sub(it3256, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_3257; memset(&l_SHORT_3257, 0, sizeof l_SHORT_3257);
l_SHORT_3257 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_3254, rt_add(it3256, ((rt_int)1LL)), rt_sub((((*(R17 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_3257))).f_ORIG = l_Y_3253;
S_R9(&((*(R12 *)rt_nil_check(l_SHORT_3257))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_3253))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_3257))).f_DECL = p_R;
r_DEFINE(l_SHORT_3257, ((*(R17 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end3255;
}
}
RT_B_TICK();
if (it3256 == it3256_hi) break;
} } L_end3255: ;
}
static void r_DECLARE_MEMBERS(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3258; memset(&l_R_3258, 0, sizeof l_R_3258);
l_R_3258 = p_RS;
for (;;) {
if ((l_R_3258 == NULL)) goto L_end3259;
{
if ((((*(R17 *)rt_nil_check(l_R_3258))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_3258);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_3258);
}
l_R_3258 = ((*(R17 *)rt_nil_check(l_R_3258))).f_NEXT;
}
RT_B_TICK();
} L_end3259: ;
}
static void r_ROUTINE_HEADERS(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3260; memset(&l_R_3260, 0, sizeof l_R_3260);
l_R_3260 = p_RS;
for (;;) {
if ((l_R_3260 == NULL)) goto L_end3261;
{
if ((((*(R17 *)rt_nil_check(l_R_3260))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3262; memset(&l_M_3262, 0, sizeof l_M_3262);
l_M_3262 = r_FIND_DECL(l_R_3260);
r_ENTER_MODULE(l_M_3262);
r_ROUTINE_HEADERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3260))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3262);
}
}
else
{
{
R12 * l_Y_3263; memset(&l_Y_3263, 0, sizeof l_Y_3263);
l_Y_3263 = r_FIND_DECL(l_R_3260);
r_ROUTINE_HEADER(l_Y_3263);
}
}
l_R_3260 = ((*(R17 *)rt_nil_check(l_R_3260))).f_NEXT;
}
RT_B_TICK();
} L_end3261: ;
}
static void r_DISTINCT_SIGNATURES(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3264; memset(&l_R_3264, 0, sizeof l_R_3264);
l_R_3264 = p_RS;
for (;;) {
if ((l_R_3264 == NULL)) goto L_end3265;
{
if ((((*(R17 *)rt_nil_check(l_R_3264))).f_KIND == g_N_ROUTINE))
{
{
R17 * l_Q_3266; memset(&l_Q_3266, 0, sizeof l_Q_3266);
l_Q_3266 = ((*(R17 *)rt_nil_check(l_R_3264))).f_NEXT;
for (;;) {
if ((l_Q_3266 == NULL)) goto L_end3267;
{
if (((((*(R17 *)rt_nil_check(l_Q_3266))).f_KIND == g_N_ROUTINE) && r_TEQ(((*(R17 *)rt_nil_check(l_Q_3266))).f_NAME, ((*(R17 *)rt_nil_check(l_R_3264))).f_NAME)))
{
{
R12 * l_A_3268; memset(&l_A_3268, 0, sizeof l_A_3268);
l_A_3268 = r_FIND_DECL(l_R_3264);
R12 * l_B_3269; memset(&l_B_3269, 0, sizeof l_B_3269);
l_B_3269 = r_FIND_DECL(l_Q_3266);
r_ROUTINE_HEADER(l_A_3268);
r_ROUTINE_HEADER(l_B_3269);
if (r_SAME_SIGNATURE(l_A_3268, l_B_3269))
{
r_FAILT(((*(R17 *)rt_nil_check(l_Q_3266))).f_LINE, rt_str("two routines of one scope with the same signature (4.1): ", 57), ((*(R17 *)rt_nil_check(l_Q_3266))).f_NAME);
}
}
}
l_Q_3266 = ((*(R17 *)rt_nil_check(l_Q_3266))).f_NEXT;
}
RT_B_TICK();
} L_end3267: ;
}
}
l_R_3264 = ((*(R17 *)rt_nil_check(l_R_3264))).f_NEXT;
}
RT_B_TICK();
} L_end3265: ;
}
static R12 * r_FIND_DECL(R17 * p_D) { RT_B_TICK(); 
R12 * l_Y_3270; memset(&l_Y_3270, 0, sizeof l_Y_3270);
l_Y_3270 = r_LOOKUP(((*(R17 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_3270 == NULL)) goto L_end3271;
{
if (((((*(R12 *)rt_nil_check(l_Y_3270))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_3270))).f_ORIG == NULL)))
{
{ R12 * rv3272 = l_Y_3270;
return rv3272; }
}
l_Y_3270 = r_LOOKUP_NEXT(l_Y_3270);
}
RT_B_TICK();
} L_end3271: ;
r_FAILT(((*(R17 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R17 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R17 * p_DECLS) { RT_B_TICK(); 
R17 * l_D_3273; memset(&l_D_3273, 0, sizeof l_D_3273);
l_D_3273 = p_DECLS;
for (;;) {
if ((l_D_3273 == NULL)) goto L_end3274;
{
if (((((*(R17 *)rt_nil_check(l_D_3273))).f_KIND == g_N_TYPE) && (((*(R17 *)rt_nil_check(l_D_3273))).f_A == NULL)))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_3273))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_3275; memset(&l_Y_3275, 0, sizeof l_Y_3275);
l_Y_3275 = r_FIND_DECL(l_D_3273);
R22 * l_T_3276; memset(&l_T_3276, 0, sizeof l_T_3276);
l_T_3276 = r_RESOLVE_USER(r_TYPE_REF(l_D_3273));
}
}
}
l_D_3273 = ((*(R17 *)rt_nil_check(l_D_3273))).f_NEXT;
}
RT_B_TICK();
} L_end3274: ;
}
static R17 * r_TYPE_REF(R17 * p_D) { RT_B_TICK(); 
R17 * l_TS_3277; memset(&l_TS_3277, 0, sizeof l_TS_3277);
l_TS_3277 = r_NEW_NODE(g_TS_NAME, ((*(R17 *)rt_nil_check(p_D))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_TS_3277))).f_NAME, ((*(R17 *)rt_nil_check(p_D))).f_NAME, 0);
{ R17 * rv3278 = l_TS_3277;
return rv3278; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R17 * p_M) { RT_B_TICK(); 
R12 * l_Y_3279; memset(&l_Y_3279, 0, sizeof l_Y_3279);
l_Y_3279 = r_NEW_SYM(g_Y_MODULE, ((*(R17 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_3280; memset(&l_SAVED_3280, 0, sizeof l_SAVED_3280);
l_SAVED_3280 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_3279))).f_DECL = p_M;
r_DEFINE(l_Y_3279, ((*(R17 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_3281; memset(&l_MARK_3281, 0, sizeof l_MARK_3281);
l_MARK_3281 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_3279;
r_DECLARE_TYPES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_3279))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_3281);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_3280;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_3279);
}
static void r_ENTER_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_Y_3282; memset(&l_Y_3282, 0, sizeof l_Y_3282);
l_Y_3282 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_3282 == NULL)) goto L_end3283;
{
{
R12 * l_NEXT_3284; memset(&l_NEXT_3284, 0, sizeof l_NEXT_3284);
l_NEXT_3284 = ((*(R12 *)rt_nil_check(l_Y_3282))).f_SNEXT;
r_DEFINE(l_Y_3282, ((rt_int)0LL));
l_Y_3282 = l_NEXT_3284;
}
}
RT_B_TICK();
} L_end3283: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_MARK_3285; memset(&l_MARK_3285, 0, sizeof l_MARK_3285);
l_MARK_3285 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_3285 == NULL)) goto L_end3286;
{
if ((((*(R12 *)rt_nil_check(l_MARK_3285))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end3286;
}
l_MARK_3285 = ((*(R12 *)rt_nil_check(l_MARK_3285))).f_SNEXT;
}
RT_B_TICK();
} L_end3286: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_3285);
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
{ rt_int rv3287 = 1;
return rv3287; }
}
}
{ rt_int rv3288 = 0;
return rv3288; }
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
R17 * l_D_3289; memset(&l_D_3289, 0, sizeof l_D_3289);
l_D_3289 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_3290; memset(&l_Y_3290, 0, sizeof l_Y_3290);
l_Y_3290 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3290 == NULL)) goto L_end3291;
{
if (r_EXPORTED_BY(l_D_3289, l_Y_3290))
{
((*(R12 *)rt_nil_check(l_Y_3290))).f_EXPORTED = 1;
{
R12 * l_A_3292; memset(&l_A_3292, 0, sizeof l_A_3292);
l_A_3292 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_3290))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_3290))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_3292)), (*(R12 *)rt_nil_check(l_Y_3290)), 0);
((*(R12 *)rt_nil_check(l_A_3292))).f_ORIG = r_ORIGINAL(l_Y_3290);
((*(R12 *)rt_nil_check(l_A_3292))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_3292, ((*(R17 *)rt_nil_check(l_D_3289))).f_LINE);
}
}
l_Y_3290 = ((*(R12 *)rt_nil_check(l_Y_3290))).f_SNEXT;
}
RT_B_TICK();
} L_end3291: ;
{
R17 * l_X_3293; memset(&l_X_3293, 0, sizeof l_X_3293);
l_X_3293 = ((*(R17 *)rt_nil_check(l_D_3289))).f_B;
for (;;) {
if ((l_X_3293 == NULL)) goto L_end3294;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R17 *)rt_nil_check(l_X_3293))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_X_3293))).f_LINE, rt_str("the module does not declare ", 28), ((*(R17 *)rt_nil_check(l_X_3293))).f_NAME);
}
r_CHECK_EXPORT_ITEM(p_M, l_X_3293);
l_X_3293 = ((*(R17 *)rt_nil_check(l_X_3293))).f_NEXT;
}
RT_B_TICK();
} L_end3294: ;
}
}
static void r_CHECK_EXPORT_ITEM(R12 * p_M, R17 * p_X) { RT_B_TICK(); 
R12 * l_Y_3295; memset(&l_Y_3295, 0, sizeof l_Y_3295);
l_Y_3295 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
rt_int l_IS_TYPE_3296; memset(&l_IS_TYPE_3296, 0, sizeof l_IS_TYPE_3296);
l_IS_TYPE_3296 = 0;
rt_int l_IS_ROUTINE_3297; memset(&l_IS_ROUTINE_3297, 0, sizeof l_IS_ROUTINE_3297);
l_IS_ROUTINE_3297 = 0;
for (;;) {
if ((l_Y_3295 == NULL)) goto L_end3298;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_3295))).f_NAME, ((*(R17 *)rt_nil_check(p_X))).f_NAME))
{
if ((((*(R12 *)rt_nil_check(l_Y_3295))).f_KIND == g_Y_TYPE))
{
l_IS_TYPE_3296 = 1;
}
else if ((((((*(R12 *)rt_nil_check(l_Y_3295))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_3295))).f_KIND == g_Y_MODULE)) || (((*(R12 *)rt_nil_check(l_Y_3295))).f_KIND == g_Y_ENUMLIT)))
{
l_IS_ROUTINE_3297 = 1;
}
}
else if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_3295))).f_PREFIX, ((*(R17 *)rt_nil_check(p_X))).f_NAME))
{
l_IS_ROUTINE_3297 = 1;
}
l_Y_3295 = ((*(R12 *)rt_nil_check(l_Y_3295))).f_SNEXT;
}
RT_B_TICK();
} L_end3298: ;
if (((!l_IS_TYPE_3296) && (!l_IS_ROUTINE_3297)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_X))).f_LINE, rt_str("only type and routine names are exported (4.4): ", 48), ((*(R17 *)rt_nil_check(p_X))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(p_X))).f_A == NULL)))
{
if ((!l_IS_TYPE_3296))
{
r_FAILT(((*(R17 *)rt_nil_check(p_X))).f_LINE, rt_str("only a type-name is followed by a WITH clause (4.4): ", 53), ((*(R17 *)rt_nil_check(p_X))).f_NAME);
}
{
R17 * l_OP_3299; memset(&l_OP_3299, 0, sizeof l_OP_3299);
l_OP_3299 = ((*(R17 *)rt_nil_check(p_X))).f_A;
for (;;) {
if ((l_OP_3299 == NULL)) goto L_end3300;
{
{
rt_int l_FOUND_3301; memset(&l_FOUND_3301, 0, sizeof l_FOUND_3301);
l_FOUND_3301 = 0;
l_Y_3295 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3295 == NULL)) goto L_end3302;
{
if (((((*(R12 *)rt_nil_check(l_Y_3295))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_3295))).f_PREFIX, ((*(R17 *)rt_nil_check(p_X))).f_NAME)))
{
if (r_TEQ(r_BASE_NAME(r_ORIGINAL(l_Y_3295)), ((*(R17 *)rt_nil_check(l_OP_3299))).f_NAME))
{
l_FOUND_3301 = 1;
}
}
l_Y_3295 = ((*(R12 *)rt_nil_check(l_Y_3295))).f_SNEXT;
}
RT_B_TICK();
} L_end3302: ;
if ((!l_FOUND_3301))
{
r_FAILT(((*(R17 *)rt_nil_check(l_OP_3299))).f_LINE, rt_str("a WITH clause lists operations of the type (4.4): ", 50), ((*(R17 *)rt_nil_check(l_OP_3299))).f_NAME);
}
}
l_OP_3299 = ((*(R17 *)rt_nil_check(l_OP_3299))).f_NEXT;
}
RT_B_TICK();
} L_end3300: ;
}
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_3303; memset(&l_Y_3303, 0, sizeof l_Y_3303);
l_Y_3303 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3303 == NULL)) goto L_end3304;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_3303))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_3303))).f_PREFIX, p_NAME)))
{
{ rt_int rv3305 = 1;
return rv3305; }
}
l_Y_3303 = ((*(R12 *)rt_nil_check(l_Y_3303))).f_SNEXT;
}
RT_B_TICK();
} L_end3304: ;
{ rt_int rv3306 = 0;
return rv3306; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R17 * p_D, R12 * p_Y) { RT_B_TICK(); 
R17 * l_X_3307; memset(&l_X_3307, 0, sizeof l_X_3307);
l_X_3307 = ((*(R17 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv3308 = 0;
return rv3308; }
}
if ((((*(R17 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv3309 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv3309; }
}
for (;;) {
if ((l_X_3307 == NULL)) goto L_end3310;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_X_3307))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3311 = 1;
return rv3311; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R17 *)rt_nil_check(l_X_3307))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R17 *)rt_nil_check(l_X_3307))).f_A == NULL))
{
{ rt_int rv3312 = 1;
return rv3312; }
}
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_X_3307))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv3313 = 1;
return rv3313; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_3314; memset(&l_T_3314, 0, sizeof l_T_3314);
l_T_3314 = r_ORIG_LOOKUP_MEMBER(((*(R17 *)rt_nil_check(l_X_3307))).f_NAME, p_Y);
if ((!(l_T_3314 == NULL)))
{
{ rt_int rv3315 = 1;
return rv3315; }
}
}
}
l_X_3307 = ((*(R17 *)rt_nil_check(l_X_3307))).f_NEXT;
}
RT_B_TICK();
} L_end3310: ;
{ rt_int rv3316 = 0;
return rv3316; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R9 p_NAME, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3317; memset(&l_M_3317, 0, sizeof l_M_3317);
l_M_3317 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_3318; memset(&l_Z_3318, 0, sizeof l_Z_3318);
if ((l_M_3317 == NULL))
{
{ R12 * rv3319 = NULL;
return rv3319; }
}
l_Z_3318 = ((*(R12 *)rt_nil_check(l_M_3317))).f_MEMBERS;
for (;;) {
if ((l_Z_3318 == NULL)) goto L_end3320;
{
if (((((*(R12 *)rt_nil_check(l_Z_3318))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_3318))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_3318))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_3318))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_3318))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv3321 = l_Z_3318;
return rv3321; }
}
}
}
}
l_Z_3318 = ((*(R12 *)rt_nil_check(l_Z_3318))).f_SNEXT;
}
RT_B_TICK();
} L_end3320: ;
{ R12 * rv3322 = NULL;
return rv3322; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3323; memset(&l_R_3323, 0, sizeof l_R_3323);
l_R_3323 = p_RS;
for (;;) {
if ((l_R_3323 == NULL)) goto L_end3324;
{
if ((((*(R17 *)rt_nil_check(l_R_3323))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3325; memset(&l_M_3325, 0, sizeof l_M_3325);
l_M_3325 = r_FIND_DECL(l_R_3323);
R17 * l_D_3326; memset(&l_D_3326, 0, sizeof l_D_3326);
l_D_3326 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3323))).f_C))).f_A;
r_ENTER_MODULE(l_M_3325);
for (;;) {
if ((l_D_3326 == NULL)) goto L_end3327;
{
if (((((*(R17 *)rt_nil_check(l_D_3326))).f_KIND == g_N_VAR) || (((*(R17 *)rt_nil_check(l_D_3326))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3326);
}
l_D_3326 = ((*(R17 *)rt_nil_check(l_D_3326))).f_NEXT;
}
RT_B_TICK();
} L_end3327: ;
r_MODULE_DATA(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3323))).f_C))).f_C);
r_DISTINCT_SIGNATURES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3323))).f_C))).f_C);
r_ROUTINE_USES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3323))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3325);
}
}
l_R_3323 = ((*(R17 *)rt_nil_check(l_R_3323))).f_NEXT;
}
RT_B_TICK();
} L_end3324: ;
}
static void r_ROUTINE_BODIES(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3328; memset(&l_R_3328, 0, sizeof l_R_3328);
l_R_3328 = p_RS;
for (;;) {
if ((l_R_3328 == NULL)) goto L_end3329;
{
if ((((*(R17 *)rt_nil_check(l_R_3328))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3330; memset(&l_M_3330, 0, sizeof l_M_3330);
l_M_3330 = r_FIND_DECL(l_R_3328);
r_ENTER_MODULE(l_M_3330);
r_ROUTINE_BODIES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3328))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3330);
}
}
else
{
{
R12 * l_Y_3331; memset(&l_Y_3331, 0, sizeof l_Y_3331);
l_Y_3331 = r_FIND_DECL(l_R_3328);
if ((((*(R12 *)rt_nil_check(l_Y_3331))).f_LINKAGE == ((rt_int)2LL)))
{
}
else if (((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3331))).f_DECL))).f_FL == ((rt_int)1LL)) && (!((*(R12 *)rt_nil_check(l_Y_3331))).f_GENERIC)))
{
}
else if ((!((*(R12 *)rt_nil_check(l_Y_3331))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_3331);
}
}
}
l_R_3328 = ((*(R17 *)rt_nil_check(l_R_3328))).f_NEXT;
}
RT_B_TICK();
} L_end3329: ;
}
static void r_PENDING_BODIES(void) { RT_B_TICK(); 
rt_int l_LEVEL_3332; memset(&l_LEVEL_3332, 0, sizeof l_LEVEL_3332);
l_LEVEL_3332 = r_CUR_LEVEL();
rt_int l_MORE_3333; memset(&l_MORE_3333, 0, sizeof l_MORE_3333);
l_MORE_3333 = 1;
for (;;) {
if ((!l_MORE_3333)) goto L_end3334;
{
l_MORE_3333 = 0;
{
R12 * l_P_3335; memset(&l_P_3335, 0, sizeof l_P_3335);
l_P_3335 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_3336; memset(&l_PREV_3336, 0, sizeof l_PREV_3336);
l_PREV_3336 = NULL;
for (;;) {
if ((l_P_3335 == NULL)) goto L_end3337;
{
if ((((*(R12 *)rt_nil_check(l_P_3335))).f_LEVEL == l_LEVEL_3332))
{
if ((l_PREV_3336 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_3335))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_3336))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_3335))).f_MEMBERS;
}
{
R12 * l_SAVED_SEG_3338; memset(&l_SAVED_SEG_3338, 0, sizeof l_SAVED_SEG_3338);
l_SAVED_SEG_3338 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R12 * l_HOME_3339; memset(&l_HOME_3339, 0, sizeof l_HOME_3339);
l_HOME_3339 = r_ENTER_HOME(l_P_3335);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(l_P_3335))).f_HOME;
r_ENTER_MODULE_OF(l_P_3335);
r_ROUTINE_BODY(l_P_3335);
r_LEAVE_MODULE_OF(l_P_3335);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_3338;
r_LEAVE_HOME(l_P_3335, l_HOME_3339);
}
l_MORE_3333 = 1;
goto L_end3337;
}
l_PREV_3336 = l_P_3335;
l_P_3335 = ((*(R12 *)rt_nil_check(l_P_3335))).f_MEMBERS;
}
RT_B_TICK();
} L_end3337: ;
}
}
RT_B_TICK();
} L_end3334: ;
}
static void r_CLOSED_BODY(R17 * p_B) { RT_B_TICK(); 
R17 * l_D_3340; memset(&l_D_3340, 0, sizeof l_D_3340);
l_D_3340 = ((*(R17 *)rt_nil_check(p_B))).f_A;
R17 * l_S_3341; memset(&l_S_3341, 0, sizeof l_S_3341);
l_S_3341 = ((*(R17 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R17 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R17 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R17 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_3340 == NULL)) goto L_end3342;
{
if (((((*(R17 *)rt_nil_check(l_D_3340))).f_KIND == g_N_VAR) || (((*(R17 *)rt_nil_check(l_D_3340))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3340);
}
l_D_3340 = ((*(R17 *)rt_nil_check(l_D_3340))).f_NEXT;
}
RT_B_TICK();
} L_end3342: ;
r_MODULE_DATA(((*(R17 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R17 *)rt_nil_check(p_B))).f_C);
r_DISTINCT_SIGNATURES(((*(R17 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R17 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R17 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_3341 == NULL)) goto L_end3343;
{
r_STMT(l_S_3341);
l_S_3341 = ((*(R17 *)rt_nil_check(l_S_3341))).f_NEXT;
}
RT_B_TICK();
} L_end3343: ;
r_ROUTINE_BODIES(((*(R17 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { RT_B_TICK(); 
R17 * l_R_3344; memset(&l_R_3344, 0, sizeof l_R_3344);
l_R_3344 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_3345; memset(&l_SAVED_CODE_3345, 0, sizeof l_SAVED_CODE_3345);
S_R14(&l_SAVED_CODE_3345, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R18 * l_SAVED_CTXS_3346; memset(&l_SAVED_CTXS_3346, 0, sizeof l_SAVED_CTXS_3346);
l_SAVED_CTXS_3346 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R21 * l_SAVED_BINDS_3347; memset(&l_SAVED_BINDS_3347, 0, sizeof l_SAVED_BINDS_3347);
l_SAVED_BINDS_3347 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R19 * l_OUTER_3348; memset(&l_OUTER_3348, 0, sizeof l_OUTER_3348);
l_OUTER_3348 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R19 * l_CS_3349; memset(&l_CS_3349, 0, sizeof l_CS_3349);
l_CS_3349 = ((R19 *)rt_b_new(sizeof (R19)));
R9 l_PROLOGUE_3350; memset(&l_PROLOGUE_3350, 0, sizeof l_PROLOGUE_3350);
S_R9(&l_PROLOGUE_3350, r_MK(rt_str("", 0)), 0);
S_R19(&(*(R19 *)rt_nil_check(l_CS_3349)), ({ R19 rc3351; memset(&rc3351, 0, sizeof rc3351);  rc3351.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc3351.f_R = p_Y; rc3351.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R9(&rc3351.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc3351.f_FIELDS, ({ R14 rc3352; memset(&rc3352, 0, sizeof rc3352);  rc3352.f_HEAD = NULL; rc3352.f_TAIL = NULL; rc3352; }), 0); rc3351.f_UP = l_OUTER_3348; rc3351.f_IMPORTS = ((*(R17 *)rt_nil_check(l_R_3344))).f_E; rc3351.f_SIGNALS = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3344))).f_D))).f_A; rc3351.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc3351.f_IS_PATH = 0; S_R9(&rc3351.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3351; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R19 *)rt_nil_check(l_CS_3349))).f_FTYPE, ((*(R19 *)rt_nil_check(l_CS_3349))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R19 *)rt_nil_check(l_CS_3349))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R19 *)rt_nil_check(l_CS_3349))).f_FIELDS);
}
S_R9(&l_PROLOGUE_3350, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R19 *)rt_nil_check(l_CS_3349))).f_FTYPE, ((*(R19 *)rt_nil_check(l_CS_3349))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_PROLOGUE_3350, r_CATS(l_PROLOGUE_3350, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_3349;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3353; memset(&rc3353, 0, sizeof rc3353);  rc3353.f_HEAD = NULL; rc3353.f_TAIL = NULL; rc3353; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R17 *)rt_nil_check(l_R_3344))).f_E, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3344))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R17 *)rt_nil_check(l_R_3344))).f_LINE);
{
R28 * l_P_3354; memset(&l_P_3354, 0, sizeof l_P_3354);
l_P_3354 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_3354 == NULL)) goto L_end3355;
{
if ((!(((*(R28 *)rt_nil_check(l_P_3354))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_3354))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_3356; memset(&l_V_3356, 0, sizeof l_V_3356);
l_V_3356 = r_NEW_SYM(g_Y_VAR, ((*(R28 *)rt_nil_check(l_P_3354))).f_NAME);
R21 * l_MB_3357; memset(&l_MB_3357, 0, sizeof l_MB_3357);
l_MB_3357 = r_FIND_BIND(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, r_MKN(rt_b_cat(rt_str("=", 1), r_STR(((*(R28 *)rt_nil_check(l_P_3354))).f_NAME, (((*(R28 *)rt_nil_check(l_P_3354))).f_NAME).f_LEN))));
((*(R12 *)rt_nil_check(l_V_3356))).f_T = ((*(R28 *)rt_nil_check(l_P_3354))).f_T;
((*(R12 *)rt_nil_check(l_V_3356))).f_INPUT = (((*(R28 *)rt_nil_check(l_P_3354))).f_MODE == g_M_IN);
if ((!(l_MB_3357 == NULL)))
{
((*(R12 *)rt_nil_check(l_V_3356))).f_HASMV = ((*(R21 *)rt_nil_check(l_MB_3357))).f_HASMV;
((*(R12 *)rt_nil_check(l_V_3356))).f_MV = ((*(R21 *)rt_nil_check(l_MB_3357))).f_MV;
}
((*(R12 *)rt_nil_check(l_V_3356))).f_BYREF = (!(((*(R28 *)rt_nil_check(l_P_3354))).f_MODE == g_M_IN));
S_R9(&((*(R12 *)rt_nil_check(l_V_3356))).f_FIELD, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_3354))).f_NAME)), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_3356))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R28 *)rt_nil_check(l_P_3354))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3354))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3349))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3356))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), r_CID(((*(R28 *)rt_nil_check(l_P_3354))).f_NAME)), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_3354))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3354))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3349))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3356))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_3354))).f_NAME)), 0);
}
S_R9(&l_PROLOGUE_3350, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_3350, r_CID(((*(R28 *)rt_nil_check(l_P_3354))).f_NAME), r_CID(((*(R28 *)rt_nil_check(l_P_3354))).f_NAME)), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_3356))).f_BYREF)
{
S_R9(&((*(R12 *)rt_nil_check(l_V_3356))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), r_CID(((*(R28 *)rt_nil_check(l_P_3354))).f_NAME)), 0);
}
else
{
S_R9(&((*(R12 *)rt_nil_check(l_V_3356))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_3354))).f_NAME)), 0);
}
if ((((*(R28 *)rt_nil_check(l_P_3354))).f_MODE == g_M_OUT))
{
{
R9 l_ARGA_3358; memset(&l_ARGA_3358, 0, sizeof l_ARGA_3358);
S_R9(&l_ARGA_3358, ((*(R12 *)rt_nil_check(l_V_3356))).f_ACCESS, 0);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_3354))).f_T, l_ARGA_3358, ((*(R17 *)rt_nil_check(l_R_3344))).f_LINE, 1);
((*(R12 *)rt_nil_check(l_V_3356))).f_BYREF = 0;
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ o_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_3354))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3354))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3349))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3356))).f_ACCESS, r_FMT1(rt_str("F->o_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_3354))).f_NAME)), 0);
}
else
{
S_R9(&l_PROLOGUE_3350, r_FMT3(rt_str("@ @ o_@;", 8), l_PROLOGUE_3350, r_CTYPE(((*(R28 *)rt_nil_check(l_P_3354))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3354))).f_NAME)), 0);
S_R9(&((*(R12 *)rt_nil_check(l_V_3356))).f_ACCESS, r_FMT1(rt_str("o_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_3354))).f_NAME)), 0);
}
S_R9(&l_PROLOGUE_3350, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_3350, ((*(R12 *)rt_nil_check(l_V_3356))).f_ACCESS, l_ARGA_3358), 0);
if (r_NEEDS_INIT(((*(R28 *)rt_nil_check(l_P_3354))).f_T))
{
S_R9(&l_PROLOGUE_3350, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_3350, ((*(R12 *)rt_nil_check(l_V_3356))).f_ACCESS, r_COPY_OF(((*(R28 *)rt_nil_check(l_P_3354))).f_T, l_ARGA_3358)), 0);
}
S_R9(&((*(R19 *)rt_nil_check(l_CS_3349))).f_COPYOUT, r_CAT(((*(R19 *)rt_nil_check(l_CS_3349))).f_COPYOUT, r_ASSIGN_CODE(((*(R28 *)rt_nil_check(l_P_3354))).f_T, l_ARGA_3358, ((*(R12 *)rt_nil_check(l_V_3356))).f_ACCESS)), 0);
r_DEFINE(l_V_3356, ((*(R17 *)rt_nil_check(l_R_3344))).f_LINE);
}
}
else
{
r_DEFINE(l_V_3356, ((*(R17 *)rt_nil_check(l_R_3344))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_3354))).f_T, ((*(R12 *)rt_nil_check(l_V_3356))).f_ACCESS, ((*(R17 *)rt_nil_check(l_R_3344))).f_LINE, 1);
}
}
}
}
l_P_3354 = ((*(R28 *)rt_nil_check(l_P_3354))).f_NEXT;
}
RT_B_TICK();
} L_end3355: ;
}
if ((((*(R17 *)rt_nil_check(l_R_3344))).f_FL >= ((rt_int)2LL)))
{
{
R17 * l_N_3359; memset(&l_N_3359, 0, sizeof l_N_3359);
l_N_3359 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3344))).f_D))).f_C;
R14 l_SAVED_CODE_3360; memset(&l_SAVED_CODE_3360, 0, sizeof l_SAVED_CODE_3360);
S_R14(&l_SAVED_CODE_3360, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_3361; memset(&l_V_3361, 0, sizeof l_V_3361);
S_R26(&l_V_3361, r_EXPR(l_N_3359, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
R23 l_M_3362; memset(&l_M_3362, 0, sizeof l_M_3362);
S_R23(&l_M_3362, r_MANIFEST(l_N_3359), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3360, 0);
if ((((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3361).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3361).f_T)))).f_SCALE == ((rt_int)0LL)))) || (!(l_M_3362).f_OK)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_N_3359))).f_LINE, rt_str("the stack-size is a manifest integer expression (4.8.2 [4-111])", 63));
}
if (((l_M_3362).f_V < ((rt_int)0LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_N_3359))).f_LINE, rt_str("the stack-size must be greater than or equal to zero (4.8.2)", 60));
}
}
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R17 *)rt_nil_check(l_R_3344))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R17 *)rt_nil_check(l_R_3344))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R19 *)rt_nil_check(l_CS_3349))).f_FTYPE, r_JOIN_BUF(((*(R19 *)rt_nil_check(l_CS_3349))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { RT_B_TICK(); @", 18), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_3350));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
else if (((((*(R19 *)rt_nil_check(l_CS_3349))).f_COPYOUT).f_LEN > ((rt_int)0LL)))
{
r_EMIT(g_O_FUNCS, ((*(R19 *)rt_nil_check(l_CS_3349))).f_COPYOUT);
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_3348;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3345, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_3346;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_3347;
}
static void r_BIND_INSTANCE(R21 * p_BS, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_B_3363; memset(&l_B_3363, 0, sizeof l_B_3363);
l_B_3363 = p_BS;
for (;;) {
if ((l_B_3363 == NULL)) goto L_end3364;
{
if ((!(((*(R21 *)rt_nil_check(l_B_3363))).f_T == NULL)))
{
{
R12 * l_Y_3365; memset(&l_Y_3365, 0, sizeof l_Y_3365);
l_Y_3365 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_B_3363))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3365))).f_T = ((*(R21 *)rt_nil_check(l_B_3363))).f_T;
r_DEFINE(l_Y_3365, p_LINE);
}
}
else if (((*(R21 *)rt_nil_check(l_B_3363))).f_HASMV)
{
{
R12 * l_Y_3366; memset(&l_Y_3366, 0, sizeof l_Y_3366);
l_Y_3366 = r_NEW_SYM(g_Y_GEN, ((*(R21 *)rt_nil_check(l_B_3363))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3366))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_3366))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_3366))).f_MV = ((*(R21 *)rt_nil_check(l_B_3363))).f_MV;
S_R9(&((*(R12 *)rt_nil_check(l_Y_3366))).f_ACCESS, ((*(R21 *)rt_nil_check(l_B_3363))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_3366))).f_INPUT = 1;
r_DEFINE(l_Y_3366, p_LINE);
}
}
l_B_3363 = ((*(R21 *)rt_nil_check(l_B_3363))).f_NEXT;
}
RT_B_TICK();
} L_end3364: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { RT_B_TICK(); 
R15 * l_C_3367; memset(&l_C_3367, 0, sizeof l_C_3367);
l_C_3367 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_3367 == NULL)) goto L_end3368;
{
r_APPEND(C_R9(((*(R15 *)rt_nil_check(l_C_3367))).f_T), &(*p_DST));
l_C_3367 = ((*(R15 *)rt_nil_check(l_C_3367))).f_NEXT;
}
RT_B_TICK();
} L_end3368: ;
}
static rt_int r_USES_SEGMENT(R17 * p_S, rstr p_NAME) { RT_B_TICK(); 
R17 * l_U_3369; memset(&l_U_3369, 0, sizeof l_U_3369);
l_U_3369 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3369 == NULL)) goto L_end3370;
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_U_3369))).f_NAME, p_NAME))
{
{ rt_int rv3371 = 1;
return rv3371; }
}
l_U_3369 = ((*(R17 *)rt_nil_check(l_U_3369))).f_NEXT;
}
RT_B_TICK();
} L_end3370: ;
{ rt_int rv3372 = 0;
return rv3372; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R17 * p_S, R17 * p_SEGS) { RT_B_TICK(); 
R17 * l_U_3373; memset(&l_U_3373, 0, sizeof l_U_3373);
l_U_3373 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3373 == NULL)) goto L_end3374;
{
{
R17 * l_T_3375; memset(&l_T_3375, 0, sizeof l_T_3375);
l_T_3375 = p_SEGS;
for (;;) {
if ((l_T_3375 == NULL)) goto L_end3376;
{
if ((((!(l_T_3375 == p_S)) && (((*(R17 *)rt_nil_check(l_T_3375))).f_D == NULL)) && r_TEQ(((*(R17 *)rt_nil_check(l_T_3375))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3373))).f_NAME)))
{
{ rt_int rv3377 = 0;
return rv3377; }
}
l_T_3375 = ((*(R17 *)rt_nil_check(l_T_3375))).f_NEXT;
}
RT_B_TICK();
} L_end3376: ;
}
l_U_3373 = ((*(R17 *)rt_nil_check(l_U_3373))).f_NEXT;
}
RT_B_TICK();
} L_end3374: ;
{ rt_int rv3378 = 1;
return rv3378; }
rt_raise(RT_X_INIT);
}
static R9 r_MISSING_SEGMENT(R17 * p_SEGS) { RT_B_TICK(); 
R17 * l_S_3379; memset(&l_S_3379, 0, sizeof l_S_3379);
l_S_3379 = p_SEGS;
for (;;) {
if ((l_S_3379 == NULL)) goto L_end3380;
{
{
R17 * l_U_3381; memset(&l_U_3381, 0, sizeof l_U_3381);
l_U_3381 = ((*(R17 *)rt_nil_check(l_S_3379))).f_A;
for (;;) {
if ((l_U_3381 == NULL)) goto L_end3382;
{
if ((!r_TEQS(((*(R17 *)rt_nil_check(l_U_3381))).f_NAME, rt_str("TERMINAL", 8))))
{
{
R17 * l_T_3383; memset(&l_T_3383, 0, sizeof l_T_3383);
l_T_3383 = p_SEGS;
rt_int l_FOUND_3384; memset(&l_FOUND_3384, 0, sizeof l_FOUND_3384);
l_FOUND_3384 = 0;
for (;;) {
if ((l_T_3383 == NULL)) goto L_end3385;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_T_3383))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3381))).f_NAME))
{
l_FOUND_3384 = 1;
}
l_T_3383 = ((*(R17 *)rt_nil_check(l_T_3383))).f_NEXT;
}
RT_B_TICK();
} L_end3385: ;
if ((!l_FOUND_3384))
{
{ R9 rv3386 = ((*(R17 *)rt_nil_check(l_U_3381))).f_NAME;
return rv3386; }
}
}
}
l_U_3381 = ((*(R17 *)rt_nil_check(l_U_3381))).f_NEXT;
}
RT_B_TICK();
} L_end3382: ;
}
l_S_3379 = ((*(R17 *)rt_nil_check(l_S_3379))).f_NEXT;
}
RT_B_TICK();
} L_end3380: ;
{ R9 rv3387 = r_NO_TEXT();
return rv3387; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R17 * p_SEGS) { RT_B_TICK(); 
R17 * l_S_3388; memset(&l_S_3388, 0, sizeof l_S_3388);
l_S_3388 = p_SEGS;
rt_int l_MAINS_3389; memset(&l_MAINS_3389, 0, sizeof l_MAINS_3389);
l_MAINS_3389 = ((rt_int)0LL);
R19 * l_ROOT_3390; memset(&l_ROOT_3390, 0, sizeof l_ROOT_3390);
l_ROOT_3390 = ((R19 *)rt_b_new(sizeof (R19)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R19(&(*(R19 *)rt_nil_check(l_ROOT_3390)), ({ R19 rc3391; memset(&rc3391, 0, sizeof rc3391);  rc3391.f_LEVEL = ((rt_int)0LL); rc3391.f_R = NULL; rc3391.f_FRAMED = 0; S_R9(&rc3391.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc3391.f_FIELDS, ({ R14 rc3392; memset(&rc3392, 0, sizeof rc3392);  rc3392.f_HEAD = NULL; rc3392.f_TAIL = NULL; rc3392; }), 0); rc3391.f_UP = NULL; rc3391.f_IMPORTS = NULL; rc3391.f_SIGNALS = NULL; rc3391.f_RESULT = NULL; rc3391.f_IS_PATH = 0; S_R9(&rc3391.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3391; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_3390;
((*(R7 *)rt_nil_check(g_W))).f_IS = NULL;
r_ENTER_ISCOPE(NULL, NULL, r_MK(rt_str("segment", 7)));
((*(R20 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_ID = ((rt_int)0LL);
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = ((rt_int)0LL);
r_EMITS(g_O_TYPEDEFS, rt_str("#include \"paleo.h\"", 18));
r_EMITS(g_O_TYPEDEFS, rt_str("#include <float.h>", 18));
r_EMITS(g_O_TYPEDEFS, rt_str("#include <math.h>", 17));
r_EMITS(g_O_TYPEDEFS, rt_str("#include <string.h>", 19));
if (((*(R7 *)rt_nil_check(g_W))).f_SEPC)
{
if (((((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS == NULL) || (!(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS))).f_NEXT == NULL))))
{
r_FAIL(((rt_int)0LL), rt_str("bluec -c translates one segment", 31));
}
r_EMIT(g_O_MAINHEAD, r_FMT1(rt_str("void bs_@_init(void) { static int done_; if (done_) return; done_ = 1;", 70), r_CID(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS))).f_NAME)));
}
else
{
r_EMITS(g_O_MAINHEAD, rt_str("int main(int argc, char **argv) {", 33));
r_EMITS(g_O_MAINHEAD, rt_str("rt_b_lang();", 12));
r_EMITS(g_O_MAINHEAD, rt_str("rt_init(argc, argv);", 20));
}
if ((!(((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL))))
{
r_EMIT(g_O_MAINHEAD, r_FMT1(rt_str("rt_b_machine(@);", 16), r_NUM(((*(R7 *)rt_nil_check(g_W))).f_WORD)));
}
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3393; memset(&rc3393, 0, sizeof rc3393);  rc3393.f_HEAD = NULL; rc3393.f_TAIL = NULL; rc3393; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_3388 = p_SEGS;
for (;;) {
if ((l_S_3388 == NULL)) goto L_end3395;
{
if ((((*(R17 *)rt_nil_check(l_S_3388))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_3388, p_SEGS))
{
goto L_end3395;
}
}
l_S_3388 = ((*(R17 *)rt_nil_check(l_S_3388))).f_NEXT;
}
RT_B_TICK();
} L_end3395: ;
if ((l_S_3388 == NULL))
{
goto L_end3394;
}
((*(R17 *)rt_nil_check(l_S_3388))).f_D = l_S_3388;
l_MAINS_3389 = rt_add(l_MAINS_3389, ((*(R17 *)rt_nil_check(l_S_3388))).f_IV);
if (((((*(R17 *)rt_nil_check(l_S_3388))).f_IV == ((rt_int)0LL)) && (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3388))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_S_3388))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
r_BEGIN_SEGMENT(l_S_3388);
if (r_USES_SEGMENT(l_S_3388, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
((*(R7 *)rt_nil_check(g_W))).f_EXTSEG = r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_EXTS, ((*(R17 *)rt_nil_check(l_S_3388))).f_NAME);
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_SEPSEG, r_NO_TEXT(), 0);
((*(R7 *)rt_nil_check(g_W))).f_SEPV = ((rt_int)0LL);
((*(R7 *)rt_nil_check(g_W))).f_SEPR = ((rt_int)0LL);
if ((((*(R7 *)rt_nil_check(g_W))).f_EXTSEG || ((((*(R7 *)rt_nil_check(g_W))).f_SEPC && r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS, ((*(R17 *)rt_nil_check(l_S_3388))).f_NAME)))))
{
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_SEPSEG, ((*(R17 *)rt_nil_check(l_S_3388))).f_NAME, 0);
if ((((*(R17 *)rt_nil_check(l_S_3388))).f_IV == ((rt_int)1LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_S_3388))).f_LINE, rt_str("a MAIN segment is not translated separately (4.2)", 49));
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_EXTSEG)
{
{
R14 l_SAVED_CODE_3396; memset(&l_SAVED_CODE_3396, 0, sizeof l_SAVED_CODE_3396);
S_R14(&l_SAVED_CODE_3396, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
r_CLOSED_BODY(((*(R17 *)rt_nil_check(l_S_3388))).f_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3396, 0);
r_CODE(r_FMT1(rt_str("bs_@_init();", 12), r_CID(((*(R17 *)rt_nil_check(l_S_3388))).f_NAME)));
r_EMIT(g_O_PROTOS, r_FMT1(rt_str("void bs_@_init(void);", 21), r_CID(((*(R17 *)rt_nil_check(l_S_3388))).f_NAME)));
{
R17 * l_X_3397; memset(&l_X_3397, 0, sizeof l_X_3397);
l_X_3397 = ((*(R7 *)rt_nil_check(g_W))).f_EXTS;
for (;;) {
if (r_TEQ(((*(R17 *)rt_nil_check(l_X_3397))).f_NAME, ((*(R17 *)rt_nil_check(l_S_3388))).f_NAME)) goto L_end3398;
{
l_X_3397 = ((*(R17 *)rt_nil_check(l_X_3397))).f_NEXT;
}
RT_B_TICK();
} L_end3398: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("extern int bs_@_iface_@;", 24), r_CID(((*(R17 *)rt_nil_check(l_S_3388))).f_NAME), r_NUM(((*(R17 *)rt_nil_check(l_X_3397))).f_IV)));
r_EMIT(g_O_GLOBALS, r_CAT(r_FMT2(rt_str("int *bs_needs_@_@ = ", 20), r_UNIT_NAME(), r_CID(((*(R17 *)rt_nil_check(l_S_3388))).f_NAME)), r_FMT2(rt_str("&bs_@_iface_@;", 14), r_CID(((*(R17 *)rt_nil_check(l_S_3388))).f_NAME), r_NUM(((*(R17 *)rt_nil_check(l_X_3397))).f_IV))));
}
}
}
else
{
r_CLOSED_BODY(((*(R17 *)rt_nil_check(l_S_3388))).f_B);
}
r_SEGMENT_EXPORTS(l_S_3388);
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_SEPSEG, r_NO_TEXT(), 0);
((*(R7 *)rt_nil_check(g_W))).f_EXTSEG = 0;
}
RT_B_TICK();
} L_end3394: ;
l_S_3388 = p_SEGS;
for (;;) {
if ((l_S_3388 == NULL)) goto L_end3399;
{
if ((((*(R17 *)rt_nil_check(l_S_3388))).f_D == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_S_3388))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R17 *)rt_nil_check(l_S_3388))).f_NAME);
}
l_S_3388 = ((*(R17 *)rt_nil_check(l_S_3388))).f_NEXT;
}
RT_B_TICK();
} L_end3399: ;
if (((!(l_MAINS_3389 == ((rt_int)1LL))) && (!((*(R7 *)rt_nil_check(g_W))).f_SEPC)))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R17 * l_X_3400; memset(&l_X_3400, 0, sizeof l_X_3400);
l_X_3400 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_3400 == NULL)) goto L_end3401;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), r_CID(((*(R17 *)rt_nil_check(l_X_3400))).f_NAME)));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), r_CID(((*(R17 *)rt_nil_check(l_X_3400))).f_NAME), r_CSTRING(((*(R17 *)rt_nil_check(l_X_3400))).f_NAME)));
l_X_3400 = ((*(R17 *)rt_nil_check(l_X_3400))).f_NEXT;
}
RT_B_TICK();
} L_end3401: ;
}
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if (((*(R7 *)rt_nil_check(g_W))).f_SEPC)
{
{
R9 l_T_3402; memset(&l_T_3402, 0, sizeof l_T_3402);
S_R9(&l_T_3402, r_INPUT_TEXT(), 0);
R9 l_NAME_3403; memset(&l_NAME_3403, 0, sizeof l_NAME_3403);
S_R9(&l_NAME_3403, ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS))).f_NAME, 0);
rt_int l_FP_3404; memset(&l_FP_3404, 0, sizeof l_FP_3404);
l_FP_3404 = r_TEXT_PRINT(r_STR(l_T_3402, (l_T_3402).f_LEN));
r_EMITS(g_O_MAIN, rt_str("}", 1));
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("int bs_@_iface_@ = 1;", 21), r_CID(l_NAME_3403), r_NUM(l_FP_3404)));
rt_write_file(r_STR(r_LIB_FILE(((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, l_NAME_3403, rt_str(".bif", 4)), (r_LIB_FILE(((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, l_NAME_3403, rt_str(".bif", 4))).f_LEN), r_STR(l_T_3402, (l_T_3402).f_LEN));
}
return;
}
r_EMITS(g_O_MAIN, rt_str("rt_main_done();", 15));
r_EMITS(g_O_MAIN, rt_str("return 0;", 9));
r_EMITS(g_O_MAIN, rt_str("}", 1));
}
static R9 r_UNIT_NAME(void) { RT_B_TICK(); 
if (((*(R7 *)rt_nil_check(g_W))).f_SEPC)
{
{ R9 rv3405 = r_CID(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS))).f_NAME);
return rv3405; }
}
{ R9 rv3406 = r_MK(rt_str("MAIN", 4));
return rv3406; }
rt_raise(RT_X_INIT);
}
static rt_int r_FROM_DEFINED_MODULE(R17 * p_S, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3407; memset(&l_M_3407, 0, sizeof l_M_3407);
l_M_3407 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv3408 = 0;
return rv3408; }
}
for (;;) {
if ((l_M_3407 == NULL)) goto L_end3409;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_3407))).f_NAME))
{
{ rt_int rv3410 = 1;
return rv3410; }
}
l_M_3407 = ((*(R12 *)rt_nil_check(l_M_3407))).f_MODL;
}
RT_B_TICK();
} L_end3409: ;
{ rt_int rv3411 = 0;
return rv3411; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R17 * p_S) { RT_B_TICK(); 
R12 * l_MARK_3412; memset(&l_MARK_3412, 0, sizeof l_MARK_3412);
l_MARK_3412 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_3413; memset(&l_TAKEN_3413, 0, sizeof l_TAKEN_3413);
R12 * l_SEG_3414; memset(&l_SEG_3414, 0, sizeof l_SEG_3414);
l_SEG_3414 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R17 * l_NAMES_3415; memset(&l_NAMES_3415, 0, sizeof l_NAMES_3415);
l_NAMES_3415 = NULL;
for (;;) {
if ((l_MARK_3412 == NULL)) goto L_end3416;
{
if ((((*(R12 *)rt_nil_check(l_MARK_3412))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end3416;
}
l_MARK_3412 = ((*(R12 *)rt_nil_check(l_MARK_3412))).f_SNEXT;
}
RT_B_TICK();
} L_end3416: ;
l_TAKEN_3413 = r_TAKE_SCOPE(l_MARK_3412);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
{
R17 * l_X_3417; memset(&l_X_3417, 0, sizeof l_X_3417);
l_X_3417 = ((*(R17 *)rt_nil_check(p_S))).f_C;
for (;;) {
if ((l_X_3417 == NULL)) goto L_end3418;
{
{
R12 * l_Y_3419; memset(&l_Y_3419, 0, sizeof l_Y_3419);
l_Y_3419 = l_TAKEN_3413;
rt_int l_FOUND_3420; memset(&l_FOUND_3420, 0, sizeof l_FOUND_3420);
l_FOUND_3420 = (!(r_LOOKUP(((*(R17 *)rt_nil_check(l_X_3417))).f_NAME) == NULL));
for (;;) {
if ((l_Y_3419 == NULL)) goto L_end3421;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_3419))).f_NAME, ((*(R17 *)rt_nil_check(l_X_3417))).f_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_3419))).f_PREFIX, ((*(R17 *)rt_nil_check(l_X_3417))).f_NAME)))
{
l_FOUND_3420 = 1;
}
else if ((((*(R12 *)rt_nil_check(l_Y_3419))).f_KIND == g_Y_ROUTINE))
{
if (r_TEQ(r_BASE_NAME(l_Y_3419), ((*(R17 *)rt_nil_check(l_X_3417))).f_NAME))
{
l_FOUND_3420 = 1;
}
}
l_Y_3419 = ((*(R12 *)rt_nil_check(l_Y_3419))).f_SNEXT;
}
RT_B_TICK();
} L_end3421: ;
if ((!l_FOUND_3420))
{
r_FAILT(((*(R17 *)rt_nil_check(l_X_3417))).f_LINE, rt_str("DEFINES names a name local to the segment or imported into it (4.2): ", 69), ((*(R17 *)rt_nil_check(l_X_3417))).f_NAME);
}
l_NAMES_3415 = r_NAME_REF(((*(R17 *)rt_nil_check(l_X_3417))).f_NAME, ((rt_int)0LL), NULL, l_NAMES_3415);
}
l_X_3417 = ((*(R17 *)rt_nil_check(l_X_3417))).f_NEXT;
}
RT_B_TICK();
} L_end3418: ;
}
for (;;) {
if ((l_TAKEN_3413 == NULL)) goto L_end3422;
{
{
R12 * l_NEXT_3423; memset(&l_NEXT_3423, 0, sizeof l_NEXT_3423);
l_NEXT_3423 = ((*(R12 *)rt_nil_check(l_TAKEN_3413))).f_SNEXT;
if (((!(((*(R12 *)rt_nil_check(l_TAKEN_3413))).f_KIND == g_Y_BUILTIN)) && (((((((((*(R17 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_3413))).f_NAME)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_3413))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_3413))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_3413)) || (((((*(R12 *)rt_nil_check(l_TAKEN_3413))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_3413))))))))
{
((*(R12 *)rt_nil_check(l_TAKEN_3413))).f_SEGM = l_SEG_3414;
l_NAMES_3415 = r_NAME_REF(((*(R12 *)rt_nil_check(l_TAKEN_3413))).f_NAME, ((rt_int)0LL), NULL, l_NAMES_3415);
r_DEFINE(l_TAKEN_3413, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
else if ((!(((*(R12 *)rt_nil_check(l_TAKEN_3413))).f_KIND == g_Y_BUILTIN)))
{
((*(R12 *)rt_nil_check(l_TAKEN_3413))).f_SNEXT = ((*(R12 *)rt_nil_check(l_SEG_3414))).f_MEMBERS;
((*(R12 *)rt_nil_check(l_SEG_3414))).f_MEMBERS = l_TAKEN_3413;
}
l_TAKEN_3413 = l_NEXT_3423;
}
}
RT_B_TICK();
} L_end3422: ;
((*(R12 *)rt_nil_check(l_SEG_3414))).f_USES = l_NAMES_3415;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = NULL;
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = NULL;
}
static void r_BEGIN_SEGMENT(R17 * p_S) { RT_B_TICK(); 
R12 * l_SEG_3424; memset(&l_SEG_3424, 0, sizeof l_SEG_3424);
l_SEG_3424 = r_NEW_SYM(g_Y_SEGMENT, ((*(R17 *)rt_nil_check(p_S))).f_NAME);
R17 * l_U_3425; memset(&l_U_3425, 0, sizeof l_U_3425);
l_U_3425 = ((*(R17 *)rt_nil_check(p_S))).f_A;
((*(R12 *)rt_nil_check(l_SEG_3424))).f_DECL = p_S;
((*(R12 *)rt_nil_check(l_SEG_3424))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_SEGS;
((*(R7 *)rt_nil_check(g_W))).f_SEGS = l_SEG_3424;
for (;;) {
if ((l_U_3425 == NULL)) goto L_end3426;
{
if ((!r_TEQS(((*(R17 *)rt_nil_check(l_U_3425))).f_NAME, rt_str("TERMINAL", 8))))
{
{
R12 * l_T_3427; memset(&l_T_3427, 0, sizeof l_T_3427);
l_T_3427 = r_FIND_SEGMENT(((*(R17 *)rt_nil_check(l_U_3425))).f_NAME);
if ((l_T_3427 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_U_3425))).f_LINE, rt_str("USES names a segment of the program (4.2): ", 43), ((*(R17 *)rt_nil_check(l_U_3425))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(l_U_3425))).f_A == NULL)))
{
r_CHECK_ITEMS_DEFINED(l_T_3427, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3425))).f_A))).f_A);
r_CHECK_ITEMS_DEFINED(l_T_3427, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3425))).f_A))).f_B);
r_CHECK_ITEMS_DEFINED(l_T_3427, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3425))).f_A))).f_C);
r_CHECK_ITEMS_DEFINED(l_T_3427, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3425))).f_A))).f_D);
r_CHECK_ITEMS_DEFINED(l_T_3427, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3425))).f_A))).f_E);
}
}
}
l_U_3425 = ((*(R17 *)rt_nil_check(l_U_3425))).f_NEXT;
}
RT_B_TICK();
} L_end3426: ;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SEG_3424;
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = l_SEG_3424;
l_U_3425 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3425 == NULL)) goto L_end3428;
{
if ((!(((*(R17 *)rt_nil_check(l_U_3425))).f_A == NULL)))
{
r_INPUT_IMPORT_CONFLICT(((*(R17 *)rt_nil_check(l_U_3425))).f_A, ((*(R17 *)rt_nil_check(l_U_3425))).f_LINE);
}
l_U_3425 = ((*(R17 *)rt_nil_check(l_U_3425))).f_NEXT;
}
RT_B_TICK();
} L_end3428: ;
}
static R12 * r_ENTER_HOME(R12 * p_Y) { RT_B_TICK(); 
R12 * l_SAVED_3429; memset(&l_SAVED_3429, 0, sizeof l_SAVED_3429);
l_SAVED_3429 = ((*(R7 *)rt_nil_check(g_W))).f_TRSEG;
if (((((*(R12 *)rt_nil_check(p_Y))).f_HOME == NULL) || (((*(R12 *)rt_nil_check(p_Y))).f_HOME == ((*(R7 *)rt_nil_check(g_W))).f_TRSEG)))
{
{ R12 * rv3430 = l_SAVED_3429;
return rv3430; }
}
r_OPEN_SCOPE();
{
R12 * l_X_3431; memset(&l_X_3431, 0, sizeof l_X_3431);
l_X_3431 = ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_HOME))).f_MEMBERS;
for (;;) {
if ((l_X_3431 == NULL)) goto L_end3432;
{
{
R12 * l_A_3433; memset(&l_A_3433, 0, sizeof l_A_3433);
l_A_3433 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_X_3431))).f_KIND, ((*(R12 *)rt_nil_check(l_X_3431))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_3433)), (*(R12 *)rt_nil_check(l_X_3431)), 0);
((*(R12 *)rt_nil_check(l_A_3433))).f_ORIG = r_ORIGINAL(l_X_3431);
r_DEFINE_ALIAS(l_A_3433);
}
l_X_3431 = ((*(R12 *)rt_nil_check(l_X_3431))).f_SNEXT;
}
RT_B_TICK();
} L_end3432: ;
}
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = ((*(R12 *)rt_nil_check(p_Y))).f_HOME;
{ R12 * rv3434 = l_SAVED_3429;
return rv3434; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_ALIAS(R12 * p_A) { RT_B_TICK(); 
rt_int l_B_3435; memset(&l_B_3435, 0, sizeof l_B_3435);
l_B_3435 = r_BUCKET(((*(R12 *)rt_nil_check(p_A))).f_NAME);
((*(R12 *)rt_nil_check(p_A))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_A))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_3435, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_3435, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_A;
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
R12 * l_T_3436; memset(&l_T_3436, 0, sizeof l_T_3436);
l_T_3436 = ((*(R7 *)rt_nil_check(g_W))).f_SEGS;
for (;;) {
if ((l_T_3436 == NULL)) goto L_end3437;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_T_3436))).f_NAME, p_NAME))
{
{ R12 * rv3438 = l_T_3436;
return rv3438; }
}
l_T_3436 = ((*(R12 *)rt_nil_check(l_T_3436))).f_INSTANCES;
}
RT_B_TICK();
} L_end3437: ;
{ R12 * rv3439 = NULL;
return rv3439; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_ITEMS_DEFINED(R12 * p_T, R17 * p_L) { RT_B_TICK(); 
R17 * l_N_3440; memset(&l_N_3440, 0, sizeof l_N_3440);
l_N_3440 = p_L;
for (;;) {
if ((l_N_3440 == NULL)) goto L_end3441;
{
if ((!r_IN_IDENTS(((*(R12 *)rt_nil_check(p_T))).f_USES, ((*(R17 *)rt_nil_check(l_N_3440))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_N_3440))).f_LINE, rt_str("the segment does not define ", 28), ((*(R17 *)rt_nil_check(l_N_3440))).f_NAME);
}
l_N_3440 = ((*(R17 *)rt_nil_check(l_N_3440))).f_NEXT;
}
RT_B_TICK();
} L_end3441: ;
}
static rt_int r_SEG_VISIBLE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_U_3442; memset(&l_U_3442, 0, sizeof l_U_3442);
rt_int l_INPUT_ONLY_3443; memset(&l_INPUT_ONLY_3443, 0, sizeof l_INPUT_ONLY_3443);
l_INPUT_ONLY_3443 = 0;
if (((((((*(R7 *)rt_nil_check(g_W))).f_CURSEG == NULL) || (((*(R12 *)rt_nil_check(p_Y))).f_SEGM == NULL)) || (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL))) || (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
{ rt_int rv3444 = 1;
return rv3444; }
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_SEGM == ((*(R7 *)rt_nil_check(g_W))).f_CURSEG))
{
{ rt_int rv3445 = 1;
return rv3445; }
}
l_U_3442 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CURSEG))).f_DECL))).f_A;
for (;;) {
if ((l_U_3442 == NULL)) goto L_end3446;
{
{
R12 * l_T_3447; memset(&l_T_3447, 0, sizeof l_T_3447);
l_T_3447 = r_FIND_SEGMENT(((*(R17 *)rt_nil_check(l_U_3442))).f_NAME);
if ((!(l_T_3447 == NULL)))
{
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_T_3447))).f_USES, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
if ((((*(R17 *)rt_nil_check(l_U_3442))).f_A == NULL))
{
{ rt_int rv3448 = 1;
return rv3448; }
}
{
R17 * l_I_3449; memset(&l_I_3449, 0, sizeof l_I_3449);
l_I_3449 = ((*(R17 *)rt_nil_check(l_U_3442))).f_A;
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)))
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3449))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3450 = 1;
return rv3450; }
}
else if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3449))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
l_INPUT_ONLY_3443 = 1;
}
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE))
{
if ((((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3449))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME) || r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3449))).f_C, r_BASE_NAME(p_Y))) || r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3449))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)) || r_FROM_MODULES(((*(R17 *)rt_nil_check(l_I_3449))).f_E, p_Y)))
{
{ rt_int rv3451 = 1;
return rv3451; }
}
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE))
{
if ((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3449))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_NAME) || r_FROM_MODULES(((*(R17 *)rt_nil_check(l_I_3449))).f_E, p_Y)))
{
{ rt_int rv3452 = 1;
return rv3452; }
}
}
else
{
{ rt_int rv3453 = 1;
return rv3453; }
}
}
}
}
}
l_U_3442 = ((*(R17 *)rt_nil_check(l_U_3442))).f_NEXT;
}
RT_B_TICK();
} L_end3446: ;
if (l_INPUT_ONLY_3443)
{
{ rt_int rv3454 = 0;
return rv3454; }
}
r_FAILT(p_LINE, rt_str("not imported by the USES clause of the segment (4.2): ", 54), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static rt_int r_FROM_MODULES(R17 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3455; memset(&l_M_3455, 0, sizeof l_M_3455);
l_M_3455 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((p_MODS == NULL))
{
{ rt_int rv3456 = 0;
return rv3456; }
}
for (;;) {
if ((l_M_3455 == NULL)) goto L_end3457;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_3455))).f_NAME))
{
{ rt_int rv3458 = 1;
return rv3458; }
}
l_M_3455 = ((*(R12 *)rt_nil_check(l_M_3455))).f_MODL;
}
RT_B_TICK();
} L_end3457: ;
{ rt_int rv3459 = 0;
return rv3459; }
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
{
g_S_30 = g_SEGS_29;
for (;;) {
if ((g_S_30 == NULL)) goto L_end31;
{
{
g_N_32 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(g_N_32))).f_NAME, ((*(R17 *)rt_nil_check(g_S_30))).f_NAME, 0);
((*(R17 *)rt_nil_check(g_N_32))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS;
((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS = g_N_32;
}
g_S_30 = ((*(R17 *)rt_nil_check(g_S_30))).f_NEXT;
}
RT_B_TICK();
} L_end31: ;
}
for (;;) {
{
{
S_R9(&g_NAME_34, r_MISSING_SEGMENT(g_SEGS_29), 0);
if (((g_NAME_34).f_LEN == ((rt_int)0LL)))
{
goto L_end33;
}
r_LOAD_LIBRARY(g_NAME_34);
r_LEX();
{
g_MORE_35 = r_PARSE_COMPILATION();
g_LAST_36 = g_SEGS_29;
for (;;) {
if ((((*(R17 *)rt_nil_check(g_LAST_36))).f_NEXT == NULL)) goto L_end37;
{
g_LAST_36 = ((*(R17 *)rt_nil_check(g_LAST_36))).f_NEXT;
}
RT_B_TICK();
} L_end37: ;
((*(R17 *)rt_nil_check(g_LAST_36))).f_NEXT = g_MORE_35;
}
}
}
RT_B_TICK();
} L_end33: ;
r_PREDEFINE();
r_TRANSLATE(g_SEGS_29);
}
r_WRITE_OUTPUT();
rt_main_done();
return 0;
}
