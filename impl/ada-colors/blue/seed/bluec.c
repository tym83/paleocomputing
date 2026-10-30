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
struct fr_r_MANIFEST_ARITH { void *up; R9 p_OP; rt_int p_A; rt_int p_B; rt_int p_LINE; rt_int l_R_1364; };
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
static R9 r_QMK(rstr p_P, R9 p_T);
static R9 r_QMKN(rstr p_P, R9 p_T);
static R9 r_JOINN(R9 p_A, rstr p_S, R9 p_B);
static void r_FAIL2(rt_int p_LINE, rstr p_A, R9 p_X, rstr p_B, R9 p_Y, rstr p_C);
static R9 r_CID(R9 p_T);
static R9 r_NEW_NAME_T(R9 p_BASE);
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
static rt_int r_FILE_EXISTS_T(R9 p_F);
static rt_int r_FILE_PRINT_T(R9 p_F);
static void r_LOAD_TEXT_T(R9 p_NAME, R9 p_F);
static void r_WRITE_FILE_T(R9 p_F, R9 p_T);
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
static rt_int r_IS_D(R22 * p_T);
static R9 r_AS_D(R26 p_V);
static R9 r_AS_DOUBLE(R26 p_V);
static R9 r_SINGLE_C(rt_int p_P);
static R9 r_FLOAT_TRUNC(void);
static rt_int r_QUAL_PREC(void);
static R9 r_FLOAT_OP(R9 p_OP, R26 p_A, R26 p_B, R22 * p_T);
static R9 r_FLOAT_COMPARE(R26 p_A, R26 p_B, R9 p_OP);
static R9 r_C_RELOP(R9 p_OP);
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
static R17 * r_LIT_NODE_T(R9 p_NAME, rt_int p_LINE);
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
static R9 r_FLOAT_CONV(R26 p_V, R22 * p_T, R9 p_TR);
static R9 r_FLOAT_LIMIT(R22 * p_T, R9 p_WHICH);
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
static R9 r_BASE_PART(R9 p_N, rt_int p_P);
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
static R9 r_QMK(rstr p_P, R9 p_T) { RT_B_TICK(); 
{ R9 rv75 = r_MK(rt_b_cat(p_P, r_STR(p_T, (p_T).f_LEN)));
return rv75; }
rt_raise(RT_X_INIT);
}
static R9 r_QMKN(rstr p_P, R9 p_T) { RT_B_TICK(); 
{ R9 rv76 = r_MKN(rt_b_cat(p_P, r_STR(p_T, (p_T).f_LEN)));
return rv76; }
rt_raise(RT_X_INIT);
}
static R9 r_JOINN(R9 p_A, rstr p_S, R9 p_B) { RT_B_TICK(); 
{ R9 rv77 = r_MKN(rt_b_cat(rt_b_cat(r_STR(p_A, (p_A).f_LEN), p_S), r_STR(p_B, (p_B).f_LEN)));
return rv77; }
rt_raise(RT_X_INIT);
}
static void r_FAIL2(rt_int p_LINE, rstr p_A, R9 p_X, rstr p_B, R9 p_Y, rstr p_C) { RT_B_TICK(); 
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(p_A, r_STR(p_X, (p_X).f_LEN)), p_B), r_STR(p_Y, (p_Y).f_LEN)), p_C));
}
static R9 r_CID(R9 p_T) { RT_B_TICK(); 
rstr l_S_78; memset(&l_S_78, 0, sizeof l_S_78);
l_S_78 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_78, r_STR(p_T, (p_T).f_LEN));
R9 l_R_79; memset(&l_R_79, 0, sizeof l_R_79);
if (((p_T).f_LEN == ((rt_int)0LL)))
{
{ R9 rv80 = p_T;
return rv80; }
}
if (((!rt_b_eq(rt_b_slice(l_S_78, ((rt_int)0LL), ((rt_int)0LL)), rt_str("\\", 1))) && (!rt_b_eq(rt_b_slice(l_S_78, ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1)))))
{
{ R9 rv81 = p_T;
return rv81; }
}
if (rt_b_eq(rt_b_slice(l_S_78, ((rt_int)0LL), ((rt_int)0LL)), rt_str("\\", 1)))
{
S_R9(&l_R_79, r_MK(rt_str("bs_", 3)), 0);
}
else
{
S_R9(&l_R_79, r_MK(rt_str("qm_", 3)), 0);
}
if (((p_T).f_LEN == ((rt_int)1LL)))
{
{ R9 rv82 = l_R_79;
return rv82; }
}
{ R9 rv83 = r_CATS(l_R_79, rt_b_slice(l_S_78, ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv83; }
rt_raise(RT_X_INIT);
}
static R9 r_NEW_NAME_T(R9 p_BASE) { RT_B_TICK(); 
{ R9 rv84 = r_NEW_NAME(r_STR(p_BASE, (p_BASE).f_LEN));
return rv84; }
rt_raise(RT_X_INIT);
}
static R9 r_NEW_NAME(rstr p_BASE) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_SERIAL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_SERIAL, ((rt_int)1LL));
{ R9 rv85 = r_MK(rt_b_cat(p_BASE, rt_b_image(((*(R7 *)rt_nil_check(g_W))).f_SERIAL)));
return rv85; }
rt_raise(RT_X_INIT);
}
static void r_APPEND(R9 p_T, R14 *p_B) { RT_B_TICK(); 
R15 * l_C_86; memset(&l_C_86, 0, sizeof l_C_86);
l_C_86 = ((R15 *)rt_b_new(sizeof (R15)));
S_R9(&((*(R15 *)rt_nil_check(l_C_86))).f_T, p_T, 0);
((*(R15 *)rt_nil_check(l_C_86))).f_NEXT = NULL;
if ((((*p_B)).f_TAIL == NULL))
{
((*p_B)).f_HEAD = l_C_86;
}
else
{
((*(R15 *)rt_nil_check(((*p_B)).f_TAIL))).f_NEXT = l_C_86;
}
((*p_B)).f_TAIL = l_C_86;
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
R15 * l_C_87; memset(&l_C_87, 0, sizeof l_C_87);
l_C_87 = (p_B).f_HEAD;
for (;;) {
if ((l_C_87 == NULL)) goto L_end88;
{
{
R9 l_T_89; memset(&l_T_89, 0, sizeof l_T_89);
S_R9(&l_T_89, ((*(R15 *)rt_nil_check(l_C_87))).f_T, 0);
rt_putln(r_STR(l_T_89, (l_T_89).f_LEN));
}
l_C_87 = ((*(R15 *)rt_nil_check(l_C_87))).f_NEXT;
}
RT_B_TICK();
} L_end88: ;
}
static void r_WRITE_OUTPUT(void) { RT_B_TICK(); 
{ rt_int it91_lo = ((rt_int)0LL), it91_hi = g_O_LAST;
for (rt_int it91 = it91_lo; it91 <= it91_hi; it91++) {
{
r_PUT_BUF((((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(it91, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
}
RT_B_TICK();
if (it91 == it91_hi) break;
} } L_end90: ;
}
static void r_FAIL(rt_int p_LINE, rstr p_MSG) { RT_B_TICK(); 
rt_putln(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("line ", 5), rt_b_image(p_LINE)), rt_str(": ", 2)), p_MSG));
rt_exit(((rt_int)1LL));
}
static void r_FAILT(rt_int p_LINE, rstr p_MSG, R9 p_T) { RT_B_TICK(); 
r_FAIL(p_LINE, rt_b_cat(p_MSG, r_STR(p_T, (p_T).f_LEN)));
}
static void r_READ_SOURCE(void) { RT_B_TICK(); 
rt_int l_C_92; memset(&l_C_92, 0, sizeof l_C_92);
l_C_92 = rt_b_get_code();
for (;;) {
if ((l_C_92 < ((rt_int)0LL))) goto L_end93;
{
if ((((*(R7 *)rt_nil_check(g_W))).f_NSRC >= g_MAX_SOURCE))
{
r_FAIL(((rt_int)0LL), rt_str("the source is too long", 22));
}
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = l_C_92;
((*(R7 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
l_C_92 = rt_b_get_code();
}
RT_B_TICK();
} L_end93: ;
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = ((rt_int)0LL);
((*(R7 *)rt_nil_check(g_W))).f_STDINLEN = ((*(R7 *)rt_nil_check(g_W))).f_NSRC;
}
static rt_int r_AT_SRC(rt_int p_I) { RT_B_TICK(); 
if ((p_I >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC))
{
{ rt_int rv94 = ((rt_int)0LL);
return rv94; }
}
{ rt_int rv95 = (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(p_I, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])];
return rv95; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LETTER(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv96 = ({ rt_int iv97 = p_C; (((rt_int)65LL) <= iv97) && (iv97 <= ((rt_int)90LL)); });
return rv96; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_DIGIT(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv98 = ({ rt_int iv99 = p_C; (((rt_int)48LL) <= iv99) && (iv99 <= ((rt_int)57LL)); });
return rv98; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_IDCHAR(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv100 = ((r_IS_LETTER(p_C) || r_IS_DIGIT(p_C)) || (p_C == ((rt_int)95LL)));
return rv100; }
rt_raise(RT_X_INIT);
}
static R9 r_SOURCE_TEXT(rt_int p_FIRST, rt_int p_BEYOND) { RT_B_TICK(); 
rt_int l_AT_101; memset(&l_AT_101, 0, sizeof l_AT_101);
l_AT_101 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_L_102; memset(&l_L_102, 0, sizeof l_L_102);
l_L_102 = rt_sub(p_BEYOND, p_FIRST);
R9 l_T_103; memset(&l_T_103, 0, sizeof l_T_103);
if ((rt_add(l_AT_101, l_L_102) > g_ARENA_SIZE))
{
r_FAIL(((rt_int)0LL), rt_str("the arena is full", 17));
}
{ rt_int it105_lo = p_FIRST, it105_hi = rt_sub(p_BEYOND, ((rt_int)1LL));
for (rt_int it105 = it105_lo; it105 <= it105_hi; it105++) {
{
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, ((*(R7 *)rt_nil_check(g_W))).f_TOP, ((*(R7 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(it105, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]));
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R7 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
}
RT_B_TICK();
if (it105 == it105_hi) break;
} } L_end104: ;
S_R9(&l_T_103, ({ R9 rc106; memset(&rc106, 0, sizeof rc106);  rc106.f_AT = l_AT_101; rc106.f_LEN = l_L_102; rc106.f_H = ((rt_int)0LL); rc106; }), 0);
if ((l_L_102 > ((rt_int)0LL)))
{
(l_T_103).f_H = r_HASH_CODES(l_L_102, (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(p_FIRST, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])], (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(rt_add(p_FIRST, rt_quot(l_L_102, ((rt_int)2LL))), (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])], (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(rt_sub(p_BEYOND, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]);
}
{ R9 rv107 = l_T_103;
return rv107; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_RESERVED(R9 p_T) { RT_B_TICK(); 
rstr l_WORDS_108; memset(&l_WORDS_108, 0, sizeof l_WORDS_108);
l_WORDS_108 = rt_b_str_new(((rt_int)290LL), 0);
rt_b_assign(&l_WORDS_108, rt_str(" AND ANY ARRAY ASSERT BIN BLOCK CONST DO ELSE END EXCEPT EXIT FALSE FOR FROM FUNCTION GO HEX IF IN INLINE LOOP MAIN MOD MODULE NAMING NEEDS NIL NOT OCT OF OR ORIF PAR_BLOCK PATH PROCEDURE RECORD REP RETURN SEGMENT SELECT SIGNAL TAG TERMINATE THEN TO TRUE TYPE UNTIL VAR WHEN WHERE WITH XOR ", 290));
rt_int l_L_109; memset(&l_L_109, 0, sizeof l_L_109);
l_L_109 = (p_T).f_LEN;
{ rt_int it111_lo = ((rt_int)0LL), it111_hi = rt_sub(rt_sub(((rt_int)290LL), l_L_109), ((rt_int)2LL));
for (rt_int it111 = it111_lo; it111 <= it111_hi; it111++) {
{
if (rt_b_eq(rt_b_slice(l_WORDS_108, it111, it111), rt_str(" ", 1)))
{
if (rt_b_eq(rt_b_slice(l_WORDS_108, rt_add(rt_add(it111, l_L_109), ((rt_int)1LL)), rt_add(rt_add(it111, l_L_109), ((rt_int)1LL))), rt_str(" ", 1)))
{
if (rt_b_eq(rt_b_slice(l_WORDS_108, rt_add(it111, ((rt_int)1LL)), rt_add(it111, l_L_109)), r_STR(p_T, l_L_109)))
{
{ rt_int rv112 = 1;
return rv112; }
}
}
}
}
RT_B_TICK();
if (it111 == it111_hi) break;
} } L_end110: ;
{ rt_int rv113 = 0;
return rv113; }
rt_raise(RT_X_INIT);
}
static void r_ADD_TOKEN(rt_int p_KIND, rt_int p_LINE, rt_int p_IV, R9 p_TX) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_NTOKS >= g_MAX_TOKENS))
{
r_FAIL(p_LINE, rt_str("too many tokens", 15));
}
S_R10(&(((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], ({ R10 rc114; memset(&rc114, 0, sizeof rc114);  rc114.f_KIND = p_KIND; rc114.f_LINE = p_LINE; rc114.f_IV = p_IV; S_R9(&rc114.f_TX, p_TX, 0); rc114; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_NTOKS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL));
}
static rt_int r_SYMBOL_LENGTH(rt_int p_I) { RT_B_TICK(); 
rt_int l_C_115; memset(&l_C_115, 0, sizeof l_C_115);
l_C_115 = r_AT_SRC(p_I);
rt_int l_D_116; memset(&l_D_116, 0, sizeof l_D_116);
l_D_116 = r_AT_SRC(rt_add(p_I, ((rt_int)1LL)));
if ((((l_C_115 == ((rt_int)45LL)) && (l_D_116 == ((rt_int)45LL))) && (r_AT_SRC(rt_add(p_I, ((rt_int)2LL))) == ((rt_int)62LL))))
{
{ rt_int rv117 = ((rt_int)3LL);
return rv117; }
}
if ((((((((((((l_C_115 == ((rt_int)58LL)) && (l_D_116 == ((rt_int)61LL)))) || (((l_C_115 == ((rt_int)45LL)) && (l_D_116 == ((rt_int)62LL))))) || (((l_C_115 == ((rt_int)60LL)) && (l_D_116 == ((rt_int)61LL))))) || (((l_C_115 == ((rt_int)62LL)) && (l_D_116 == ((rt_int)61LL))))) || (((l_C_115 == ((rt_int)60LL)) && (l_D_116 == ((rt_int)62LL))))) || (((l_C_115 == ((rt_int)42LL)) && (l_D_116 == ((rt_int)42LL))))) || (((l_C_115 == ((rt_int)47LL)) && (l_D_116 == ((rt_int)47LL))))) || (((l_C_115 == ((rt_int)36LL)) && (l_D_116 == ((rt_int)36LL))))) || (((l_C_115 == ((rt_int)33LL)) && (l_D_116 == ((rt_int)33LL))))))
{
{ rt_int rv118 = ((rt_int)2LL);
return rv118; }
}
{ rt_int rv119 = ((rt_int)1LL);
return rv119; }
rt_raise(RT_X_INIT);
}
static void r_LEX(void) { RT_B_TICK(); 
rt_int l_I_120; memset(&l_I_120, 0, sizeof l_I_120);
l_I_120 = ((*(R7 *)rt_nil_check(g_W))).f_LEXED;
rt_int l_LINE_121; memset(&l_LINE_121, 0, sizeof l_LINE_121);
l_LINE_121 = rt_add(((*(R7 *)rt_nil_check(g_W))).f_LEXLINE, ((rt_int)1LL));
rt_int l_C_122; memset(&l_C_122, 0, sizeof l_C_122);
rt_int l_J_123; memset(&l_J_123, 0, sizeof l_J_123);
rt_int l_V_124; memset(&l_V_124, 0, sizeof l_V_124);
if ((((*(R7 *)rt_nil_check(g_W))).f_NTOKS > ((rt_int)0LL)))
{
((*(R7 *)rt_nil_check(g_W))).f_NTOKS = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL));
}
for (;;) {
if ((l_I_120 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC)) goto L_end125;
{
l_C_122 = (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_120, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])];
if ((l_C_122 == ((rt_int)10LL)))
{
l_LINE_121 = rt_add(l_LINE_121, ((rt_int)1LL));
l_I_120 = rt_add(l_I_120, ((rt_int)1LL));
}
else if (((((l_C_122 == ((rt_int)32LL)) || (l_C_122 == ((rt_int)9LL))) || (l_C_122 == ((rt_int)13LL))) || (l_C_122 == ((rt_int)12LL))))
{
l_I_120 = rt_add(l_I_120, ((rt_int)1LL));
}
else if ((l_C_122 == ((rt_int)37LL)))
{
l_I_120 = rt_add(l_I_120, ((rt_int)1LL));
for (;;) {
if ((((l_I_120 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_120, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)37LL))) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_120, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)10LL)))) goto L_end126;
{
l_I_120 = rt_add(l_I_120, ((rt_int)1LL));
}
RT_B_TICK();
} L_end126: ;
if ((r_AT_SRC(l_I_120) == ((rt_int)37LL)))
{
l_I_120 = rt_add(l_I_120, ((rt_int)1LL));
}
}
else if ((l_C_122 == ((rt_int)39LL)))
{
{
rt_int l_AT_127; memset(&l_AT_127, 0, sizeof l_AT_127);
l_AT_127 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
l_I_120 = rt_add(l_I_120, ((rt_int)1LL));
for (;;) {
{
if (((l_I_120 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_120, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)10LL))))
{
r_FAIL(l_LINE_121, rt_str("a string must end on its line", 29));
}
if (((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_120, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)39LL)))
{
if ((!(r_AT_SRC(rt_add(l_I_120, ((rt_int)1LL))) == ((rt_int)39LL))))
{
l_I_120 = rt_add(l_I_120, ((rt_int)1LL));
goto L_end128;
}
l_I_120 = rt_add(l_I_120, ((rt_int)1LL));
}
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, ((*(R7 *)rt_nil_check(g_W))).f_TOP, ((*(R7 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_120, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]));
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R7 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
l_I_120 = rt_add(l_I_120, ((rt_int)1LL));
}
RT_B_TICK();
} L_end128: ;
r_ADD_TOKEN(g_K_STR, l_LINE_121, ((rt_int)0LL), ({ R9 rc129; memset(&rc129, 0, sizeof rc129);  rc129.f_AT = l_AT_127; rc129.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_127); rc129.f_H = rt_neg(((rt_int)1LL)); rc129; }));
}
}
else if ((l_C_122 == ((rt_int)92LL)))
{
l_J_123 = rt_add(l_I_120, ((rt_int)1LL));
if (((((r_AT_SRC(l_J_123) == ((rt_int)39LL)) && (r_AT_SRC(rt_add(l_J_123, ((rt_int)1LL))) == ((rt_int)39LL))) && (r_AT_SRC(rt_add(l_J_123, ((rt_int)2LL))) == ((rt_int)39LL))) && (r_AT_SRC(rt_add(l_J_123, ((rt_int)3LL))) == ((rt_int)39LL))))
{
l_J_123 = rt_add(l_I_120, ((rt_int)5LL));
}
else if (((r_AT_SRC(l_J_123) == ((rt_int)39LL)) && (r_AT_SRC(rt_add(l_J_123, ((rt_int)2LL))) == ((rt_int)39LL))))
{
l_J_123 = rt_add(l_I_120, ((rt_int)4LL));
}
else if (((r_AT_SRC(l_J_123) == ((rt_int)91LL)) || (r_AT_SRC(l_J_123) == ((rt_int)93LL))))
{
l_J_123 = rt_add(l_I_120, ((rt_int)2LL));
}
else
{
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_123)))) goto L_end130;
{
l_J_123 = rt_add(l_J_123, ((rt_int)1LL));
}
RT_B_TICK();
} L_end130: ;
if ((l_J_123 == rt_add(l_I_120, ((rt_int)1LL))))
{
r_FAIL(l_LINE_121, rt_str("a stray backslash", 17));
}
}
r_ADD_TOKEN(g_K_ENUM, l_LINE_121, ((rt_int)0LL), r_SOURCE_TEXT(l_I_120, l_J_123));
l_I_120 = l_J_123;
}
else if ((l_C_122 == ((rt_int)63LL)))
{
l_J_123 = rt_add(l_I_120, ((rt_int)1LL));
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_123)))) goto L_end131;
{
l_J_123 = rt_add(l_J_123, ((rt_int)1LL));
}
RT_B_TICK();
} L_end131: ;
r_ADD_TOKEN(g_K_GEN, l_LINE_121, ((rt_int)0LL), r_SOURCE_TEXT(l_I_120, l_J_123));
l_I_120 = l_J_123;
}
else if (r_IS_LETTER(l_C_122))
{
l_J_123 = l_I_120;
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_123)))) goto L_end132;
{
l_J_123 = rt_add(l_J_123, ((rt_int)1LL));
}
RT_B_TICK();
} L_end132: ;
{
R9 l_T_133; memset(&l_T_133, 0, sizeof l_T_133);
S_R9(&l_T_133, r_SOURCE_TEXT(l_I_120, l_J_123), 0);
if (r_IS_RESERVED(l_T_133))
{
r_ADD_TOKEN(g_K_RES, l_LINE_121, ((rt_int)0LL), l_T_133);
}
else
{
r_ADD_TOKEN(g_K_ID, l_LINE_121, ((rt_int)0LL), l_T_133);
}
}
l_I_120 = l_J_123;
}
else if ((r_IS_DIGIT(l_C_122) || (((l_C_122 == ((rt_int)46LL)) && r_IS_DIGIT(r_AT_SRC(rt_add(l_I_120, ((rt_int)1LL))))))))
{
{
rt_int l_KIND_134; memset(&l_KIND_134, 0, sizeof l_KIND_134);
l_KIND_134 = g_K_NUM;
rt_int l_SCALE_135; memset(&l_SCALE_135, 0, sizeof l_SCALE_135);
l_SCALE_135 = ((rt_int)0LL);
rt_int l_NEG_136; memset(&l_NEG_136, 0, sizeof l_NEG_136);
l_NEG_136 = 0;
rt_int l_BIG_137; memset(&l_BIG_137, 0, sizeof l_BIG_137);
l_BIG_137 = 0;
l_J_123 = l_I_120;
l_V_124 = ((rt_int)0LL);
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_123)))) goto L_end138;
{
if ((l_V_124 > rt_quot((rt_sub(INT64_MAX, (rt_sub(r_AT_SRC(l_J_123), ((rt_int)48LL))))), ((rt_int)10LL))))
{
l_BIG_137 = 1;
}
else
{
l_V_124 = rt_add(rt_mul(l_V_124, ((rt_int)10LL)), (rt_sub(r_AT_SRC(l_J_123), ((rt_int)48LL))));
}
l_J_123 = rt_add(l_J_123, ((rt_int)1LL));
}
RT_B_TICK();
} L_end138: ;
if ((r_AT_SRC(l_J_123) == ((rt_int)46LL)))
{
l_KIND_134 = g_K_REAL;
l_J_123 = rt_add(l_J_123, ((rt_int)1LL));
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_123)))) goto L_end139;
{
l_J_123 = rt_add(l_J_123, ((rt_int)1LL));
}
RT_B_TICK();
} L_end139: ;
}
if (((r_AT_SRC(l_J_123) == ((rt_int)69LL)) && ((r_IS_DIGIT(r_AT_SRC(rt_add(l_J_123, ((rt_int)1LL)))) || (((((r_AT_SRC(rt_add(l_J_123, ((rt_int)1LL))) == ((rt_int)43LL)) || (r_AT_SRC(rt_add(l_J_123, ((rt_int)1LL))) == ((rt_int)45LL)))) && r_IS_DIGIT(r_AT_SRC(rt_add(l_J_123, ((rt_int)2LL))))))))))
{
l_KIND_134 = g_K_REAL;
l_J_123 = rt_add(l_J_123, ((rt_int)2LL));
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_123)))) goto L_end140;
{
l_J_123 = rt_add(l_J_123, ((rt_int)1LL));
}
RT_B_TICK();
} L_end140: ;
}
{
R9 l_T_141; memset(&l_T_141, 0, sizeof l_T_141);
S_R9(&l_T_141, r_SOURCE_TEXT(l_I_120, l_J_123), 0);
if (((r_AT_SRC(l_J_123) == ((rt_int)92LL)) && (r_AT_SRC(rt_add(l_J_123, ((rt_int)1LL))) == ((rt_int)83LL))))
{
l_KIND_134 = g_K_FIX;
l_J_123 = rt_add(l_J_123, ((rt_int)2LL));
if ((r_AT_SRC(l_J_123) == ((rt_int)45LL)))
{
l_NEG_136 = 1;
l_J_123 = rt_add(l_J_123, ((rt_int)1LL));
}
else if ((r_AT_SRC(l_J_123) == ((rt_int)43LL)))
{
l_J_123 = rt_add(l_J_123, ((rt_int)1LL));
}
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_123)))) goto L_end142;
{
if ((l_SCALE_135 <= ((rt_int)100000LL)))
{
l_SCALE_135 = rt_add(rt_mul(l_SCALE_135, ((rt_int)10LL)), (rt_sub(r_AT_SRC(l_J_123), ((rt_int)48LL))));
}
l_J_123 = rt_add(l_J_123, ((rt_int)1LL));
}
RT_B_TICK();
} L_end142: ;
if (l_NEG_136)
{
l_SCALE_135 = rt_neg(l_SCALE_135);
}
l_V_124 = l_SCALE_135;
}
if (((l_KIND_134 == g_K_NUM) && l_BIG_137))
{
r_FAIL(l_LINE_121, rt_str("an integer literal exceeds the largest INTEGER (3.2.2)", 54));
}
r_ADD_TOKEN(l_KIND_134, l_LINE_121, l_V_124, l_T_141);
}
}
l_I_120 = l_J_123;
}
else
{
l_J_123 = rt_add(l_I_120, r_SYMBOL_LENGTH(l_I_120));
r_ADD_TOKEN(g_K_SYM, l_LINE_121, ((rt_int)0LL), r_SOURCE_TEXT(l_I_120, l_J_123));
l_I_120 = l_J_123;
}
}
RT_B_TICK();
} L_end125: ;
r_ADD_TOKEN(g_K_EOF, l_LINE_121, ((rt_int)0LL), r_MK(rt_str("", 0)));
((*(R7 *)rt_nil_check(g_W))).f_LEXED = l_I_120;
((*(R7 *)rt_nil_check(g_W))).f_LEXLINE = l_LINE_121;
}
static void r_OPTIONS(void) { RT_B_TICK(); 
rt_int l_I_143; memset(&l_I_143, 0, sizeof l_I_143);
l_I_143 = ((rt_int)1LL);
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, r_MK(rt_str("lib", 3)), 0);
((*(R7 *)rt_nil_check(g_W))).f_WORD = ((rt_int)64LL);
for (;;) {
if ((l_I_143 >= rt_argc())) goto L_end144;
{
{
R9 l_A_145; memset(&l_A_145, 0, sizeof l_A_145);
S_R9(&l_A_145, r_MK(rt_arg(l_I_143)), 0);
if ((r_TEQS(l_A_145, rt_str("-L", 2)) && (rt_add(l_I_143, ((rt_int)1LL)) < rt_argc())))
{
l_I_143 = rt_add(l_I_143, ((rt_int)1LL));
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, r_MK(rt_arg(l_I_143)), 0);
}
else if (r_TEQS(l_A_145, rt_str("-suppress", 9)))
{
((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS = 1;
}
else if (r_TEQS(l_A_145, rt_str("-pdp11", 6)))
{
((*(R7 *)rt_nil_check(g_W))).f_WORD = ((rt_int)16LL);
}
else if (r_TEQS(l_A_145, rt_str("-c", 2)))
{
((*(R7 *)rt_nil_check(g_W))).f_SEPC = 1;
}
else
{
r_FAIL(((rt_int)0LL), rt_str("bluec [-L library-directory] [-c] [-suppress] [-pdp11] < program.blu > program.c", 80));
}
}
l_I_143 = rt_add(l_I_143, ((rt_int)1LL));
}
RT_B_TICK();
} L_end144: ;
}
static void r_LOAD_LIBRARY(R9 p_NAME) { RT_B_TICK(); 
R9 l_FILE_146; memset(&l_FILE_146, 0, sizeof l_FILE_146);
S_R9(&l_FILE_146, r_LIB_FILE(((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, p_NAME, rt_str(".bif", 4)), 0);
if ((!r_FILE_EXISTS_T(l_FILE_146)))
{
S_R9(&l_FILE_146, r_LIB_FILE(((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, p_NAME, rt_str(".blu", 4)), 0);
}
else
{
{
R17 * l_N_147; memset(&l_N_147, 0, sizeof l_N_147);
l_N_147 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_147))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_147))).f_IV = r_FILE_PRINT_T(l_FILE_146);
((*(R17 *)rt_nil_check(l_N_147))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXTS;
((*(R7 *)rt_nil_check(g_W))).f_EXTS = l_N_147;
}
}
if (((!r_FILE_EXISTS_T(l_FILE_146)) && (!r_TEQS(((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, rt_str("lib", 3)))))
{
S_R9(&l_FILE_146, r_LIB_FILE(r_MK(rt_str("lib", 3)), p_NAME, rt_str(".blu", 4)), 0);
}
if ((!r_FILE_EXISTS_T(l_FILE_146)))
{
r_FAILT(((rt_int)0LL), rt_str("USES names a segment that is neither in the program nor in the library: ", 72), p_NAME);
}
r_LOAD_TEXT_T(p_NAME, l_FILE_146);
}
static rt_int r_FILE_EXISTS_T(R9 p_F) { RT_B_TICK(); 
{ rt_int rv148 = rt_b_file_exists(r_STR(p_F, (p_F).f_LEN));
return rv148; }
rt_raise(RT_X_INIT);
}
static rt_int r_FILE_PRINT_T(R9 p_F) { RT_B_TICK(); 
{ rt_int rv149 = r_FILE_PRINT(r_STR(p_F, (p_F).f_LEN));
return rv149; }
rt_raise(RT_X_INIT);
}
static void r_LOAD_TEXT_T(R9 p_NAME, R9 p_F) { RT_B_TICK(); 
r_LOAD_TEXT(p_NAME, r_STR(p_F, (p_F).f_LEN));
}
static void r_WRITE_FILE_T(R9 p_F, R9 p_T) { RT_B_TICK(); 
rt_write_file(r_STR(p_F, (p_F).f_LEN), r_STR(p_T, (p_T).f_LEN));
}
static R9 r_LIB_FILE(R9 p_DIR, R9 p_NAME, rstr p_EXT) { RT_B_TICK(); 
{ R9 rv150 = r_CAT(r_CATS(p_DIR, rt_str("/", 1)), r_CATS(p_NAME, p_EXT));
return rv150; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEXT_PRINT(rstr p_T) { RT_B_TICK(); 
rt_int l_H_151; memset(&l_H_151, 0, sizeof l_H_151);
l_H_151 = ((rt_int)7LL);
{ rt_int it153_lo = ((rt_int)0LL), it153_hi = rt_sub((rt_int)(p_T).len, ((rt_int)1LL));
for (rt_int it153 = it153_lo; it153 <= it153_hi; it153++) {
{
l_H_151 = rt_rem((rt_add(rt_mul(l_H_151, ((rt_int)131LL)), r_CODE_OF(rt_b_slice(p_T, it153, it153)))), ((rt_int)1099511627776LL));
}
RT_B_TICK();
if (it153 == it153_hi) break;
} } L_end152: ;
{ rt_int rv154 = l_H_151;
return rv154; }
rt_raise(RT_X_INIT);
}
static rt_int r_FILE_PRINT(rstr p_FNAME) { RT_B_TICK(); 
{ rt_int rv155 = r_TEXT_PRINT(rt_read_file(p_FNAME));
return rv155; }
rt_raise(RT_X_INIT);
}
static R9 r_INPUT_TEXT(void) { RT_B_TICK(); 
{ R9 rv156 = r_SOURCE_TEXT(((rt_int)0LL), ((*(R7 *)rt_nil_check(g_W))).f_STDINLEN);
return rv156; }
rt_raise(RT_X_INIT);
}
static void r_LOAD_TEXT(R9 p_NAME, rstr p_FNAME) { RT_B_TICK(); 
if ((!r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_EXTS, p_NAME)))
{
{
R17 * l_N_157; memset(&l_N_157, 0, sizeof l_N_157);
l_N_157 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_157))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_157))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_LIBSEGS;
((*(R7 *)rt_nil_check(g_W))).f_LIBSEGS = l_N_157;
}
}
{
rstr l_T_158; memset(&l_T_158, 0, sizeof l_T_158);
l_T_158 = rt_b_str_new((rt_int)(rt_read_file(p_FNAME)).len, 0);
rt_b_assign(&l_T_158, rt_read_file(p_FNAME));
if ((rt_add(rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (rt_int)(l_T_158).len), ((rt_int)1LL)) >= g_MAX_SOURCE))
{
r_FAIL(((rt_int)0LL), rt_str("the source is too long", 22));
}
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = ((rt_int)10LL);
((*(R7 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
{ rt_int it160_lo = ((rt_int)0LL), it160_hi = rt_sub((rt_int)(l_T_158).len, ((rt_int)1LL));
for (rt_int it160 = it160_lo; it160 <= it160_hi; it160++) {
{
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = r_CODE_OF(rt_b_slice(l_T_158, it160, it160));
((*(R7 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
}
RT_B_TICK();
if (it160 == it160_hi) break;
} } L_end159: ;
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = ((rt_int)0LL);
}
}
static R10 r_CUR(void) { RT_B_TICK(); 
{ R10 rv161 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv161; }
rt_raise(RT_X_INIT);
}
static R10 r_AHEAD(rt_int p_K) { RT_B_TICK(); 
if ((rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, p_K) >= ((*(R7 *)rt_nil_check(g_W))).f_NTOKS))
{
{ R10 rv162 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv162; }
}
{ R10 rv163 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, p_K), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv163; }
rt_raise(RT_X_INIT);
}
static rt_int r_LINE_NOW(void) { RT_B_TICK(); 
{ rt_int rv164 = ((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_LINE;
return rv164; }
rt_raise(RT_X_INIT);
}
static rt_int r_TOK_IS(R10 p_T, rstr p_S) { RT_B_TICK(); 
if (((((p_T).f_KIND == g_K_SYM) || ((p_T).f_KIND == g_K_RES)) || ((p_T).f_KIND == g_K_ID)))
{
{ rt_int rv165 = r_TEQS((p_T).f_TX, p_S);
return rv165; }
}
{ rt_int rv166 = 0;
return rv166; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS(rstr p_S) { RT_B_TICK(); 
{ rt_int rv167 = r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], p_S);
return rv167; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TARGET_DECL(void) { RT_B_TICK(); 
if (((!r_IS(rt_str("TARGET", 6))) || (((*(R7 *)rt_nil_check(g_W))).f_POS >= rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)))))
{
{ rt_int rv168 = 0;
return rv168; }
}
{ rt_int rv169 = ((r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("PROCEDURE", 9)) || r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("FUNCTION", 8))) || r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("INLINE", 6)));
return rv169; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_KIND(rt_int p_K) { RT_B_TICK(); 
{ rt_int rv170 = (((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_KIND == p_K);
return rv170; }
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
{ rt_int rv171 = 1;
return rv171; }
}
{ rt_int rv172 = 0;
return rv172; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT(rstr p_S) { RT_B_TICK(); 
if ((!r_ACCEPT(p_S)))
{
{
R9 l_T_173; memset(&l_T_173, 0, sizeof l_T_173);
S_R9(&l_T_173, (r_CUR()).f_TX, 0);
r_FAIL(r_LINE_NOW(), rt_b_cat(rt_b_cat(p_S, rt_str(" expected, not ", 15)), r_STR(l_T_173, (l_T_173).f_LEN)));
}
}
}
static R9 r_IDENT(void) { RT_B_TICK(); 
R10 l_T_174; memset(&l_T_174, 0, sizeof l_T_174);
S_R10(&l_T_174, r_CUR(), 0);
if (((!((l_T_174).f_KIND == g_K_ID)) && (!r_IDENT_TOKEN(l_T_174))))
{
r_FAILT((l_T_174).f_LINE, rt_str("an identifier expected, not ", 28), (l_T_174).f_TX);
}
r_SKIP();
{ R9 rv175 = (l_T_174).f_TX;
return rv175; }
rt_raise(RT_X_INIT);
}
static rt_int r_IDENT_TOKEN(R10 p_T) { RT_B_TICK(); 
if ((((((p_T).f_KIND == g_K_ENUM) || ((p_T).f_KIND == g_K_GEN))) && (((p_T).f_TX).f_LEN >= ((rt_int)2LL))))
{
{
rstr l_S_176; memset(&l_S_176, 0, sizeof l_S_176);
l_S_176 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_S_176, r_STR((p_T).f_TX, ((rt_int)2LL)));
{ rt_int rv177 = (((!rt_b_eq(rt_b_slice(l_S_176, ((rt_int)1LL), ((rt_int)1LL)), rt_str("'", 1))) && (!rt_b_eq(rt_b_slice(l_S_176, ((rt_int)1LL), ((rt_int)1LL)), rt_str("[", 1)))) && (!rt_b_eq(rt_b_slice(l_S_176, ((rt_int)1LL), ((rt_int)1LL)), rt_str("]", 1))));
return rv177; }
}
}
{ rt_int rv178 = 0;
return rv178; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT_NAME(R9 p_NAME) { RT_B_TICK(); 
if ((!r_TEQ(r_IDENT(), p_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), p_NAME);
}
}
static R17 * r_NEW_NODE(rt_int p_KIND, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_N_179; memset(&l_N_179, 0, sizeof l_N_179);
l_N_179 = ((R17 *)rt_b_new(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_N_179)), ({ R17 rc180; memset(&rc180, 0, sizeof rc180);  rc180.f_KIND = p_KIND; rc180.f_LINE = p_LINE; rc180.f_IV = ((rt_int)0LL); S_R9(&rc180.f_NAME, ({ R9 rc181; memset(&rc181, 0, sizeof rc181);  rc181.f_AT = ((rt_int)0LL); rc181.f_LEN = ((rt_int)0LL); rc181.f_H = ((rt_int)0LL); rc181; }), 0); rc180.f_A = NULL; rc180.f_B = NULL; rc180.f_C = NULL; rc180.f_D = NULL; rc180.f_E = NULL; rc180.f_NEXT = NULL; rc180.f_FL = ((rt_int)0LL); rc180; }), 0);
{ R17 * rv182 = l_N_179;
return rv182; }
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
rt_int l_K_183; memset(&l_K_183, 0, sizeof l_K_183);
l_K_183 = ((rt_int)0LL);
R17 * l_P_184; memset(&l_P_184, 0, sizeof l_P_184);
l_P_184 = p_N;
for (;;) {
if ((l_P_184 == NULL)) goto L_end185;
{
l_K_183 = rt_add(l_K_183, ((rt_int)1LL));
l_P_184 = ((*(R17 *)rt_nil_check(l_P_184))).f_NEXT;
}
RT_B_TICK();
} L_end185: ;
{ rt_int rv186 = l_K_183;
return rv186; }
rt_raise(RT_X_INIT);
}
static R17 * r_IDENT_NODE(void) { RT_B_TICK(); 
R17 * l_N_187; memset(&l_N_187, 0, sizeof l_N_187);
l_N_187 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_N_187))).f_NAME, r_IDENT(), 0);
{ R17 * rv188 = l_N_187;
return rv188; }
rt_raise(RT_X_INIT);
}
static R17 * r_IDENT_LIST(void) { RT_B_TICK(); 
R17 * l_HEAD_189; memset(&l_HEAD_189, 0, sizeof l_HEAD_189);
l_HEAD_189 = NULL;
R17 * l_TAIL_190; memset(&l_TAIL_190, 0, sizeof l_TAIL_190);
l_TAIL_190 = NULL;
for (;;) {
{
r_ADD_LIST(r_ROUTINE_NAME_NODE(), &l_HEAD_189, &l_TAIL_190);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end191;
} L_end191: ;
{ R17 * rv192 = l_HEAD_189;
return rv192; }
rt_raise(RT_X_INIT);
}
static R17 * r_ROUTINE_NAME_NODE(void) { RT_B_TICK(); 
R17 * l_N_193; memset(&l_N_193, 0, sizeof l_N_193);
l_N_193 = r_IDENT_NODE();
if ((r_IS(rt_str("$", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_SKIP();
S_R9(&((*(R17 *)rt_nil_check(l_N_193))).f_NAME, r_JOINN(((*(R17 *)rt_nil_check(l_N_193))).f_NAME, rt_str("$", 1), (r_CUR()).f_TX), 0);
r_SKIP();
}
{ R17 * rv194 = l_N_193;
return rv194; }
rt_raise(RT_X_INIT);
}
static R17 * r_PAREN_IDENTS(void) { RT_B_TICK(); 
R17 * l_L_195; memset(&l_L_195, 0, sizeof l_L_195);
l_L_195 = NULL;
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str(")", 1))))
{
l_L_195 = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
{ R17 * rv196 = l_L_195;
return rv196; }
rt_raise(RT_X_INIT);
}
static void r_SKIP_PARENS(void) { RT_B_TICK(); 
rt_int l_DEPTH_197; memset(&l_DEPTH_197, 0, sizeof l_DEPTH_197);
l_DEPTH_197 = ((rt_int)0LL);
for (;;) {
{
if (r_IS(rt_str("(", 1)))
{
l_DEPTH_197 = rt_add(l_DEPTH_197, ((rt_int)1LL));
}
else if (r_IS(rt_str(")", 1)))
{
l_DEPTH_197 = rt_sub(l_DEPTH_197, ((rt_int)1LL));
}
r_SKIP();
}
RT_B_TICK();
if ((l_DEPTH_197 == ((rt_int)0LL))) goto L_end198;
} L_end198: ;
}
static R17 * r_PARSE_COMPILATION(void) { RT_B_TICK(); 
R17 * l_HEAD_199; memset(&l_HEAD_199, 0, sizeof l_HEAD_199);
l_HEAD_199 = NULL;
R17 * l_TAIL_200; memset(&l_TAIL_200, 0, sizeof l_TAIL_200);
l_TAIL_200 = NULL;
for (;;) {
if (r_IS_KIND(g_K_EOF)) goto L_end201;
{
r_ADD_LIST(r_PARSE_SEGMENT(), &l_HEAD_199, &l_TAIL_200);
}
RT_B_TICK();
} L_end201: ;
{ R17 * rv202 = l_HEAD_199;
return rv202; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ITEMS(void) { RT_B_TICK(); 
R17 * l_N_203; memset(&l_N_203, 0, sizeof l_N_203);
l_N_203 = r_NEW_NODE(g_N_ITEMS, r_LINE_NOW());
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end204;
{
if (r_ACCEPT(rt_str("DATA", 4)))
{
r_EXPECT(rt_str(":", 1));
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str("#", 1))))
{
((*(R17 *)rt_nil_check(l_N_203))).f_A = r_IDENT_LIST();
}
if (r_ACCEPT(rt_str("#", 1)))
{
((*(R17 *)rt_nil_check(l_N_203))).f_B = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("ROUTINES", 8)))
{
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_203))).f_C = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("TYPES", 5)))
{
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_203))).f_D = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("MODULES", 7)))
{
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_203))).f_E = r_PAREN_IDENTS();
}
else
{
{
R9 l_T_205; memset(&l_T_205, 0, sizeof l_T_205);
S_R9(&l_T_205, (r_CUR()).f_TX, 0);
r_FAILT(r_LINE_NOW(), rt_str("DATA, ROUTINES, TYPES or MODULES expected, not ", 47), l_T_205);
}
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end204: ;
r_EXPECT(rt_str(")", 1));
{
R17 * l_L_206; memset(&l_L_206, 0, sizeof l_L_206);
l_L_206 = ((*(R17 *)rt_nil_check(l_N_203))).f_A;
rt_int l_PASS_207; memset(&l_PASS_207, 0, sizeof l_PASS_207);
l_PASS_207 = ((rt_int)0LL);
for (;;) {
if ((l_PASS_207 == ((rt_int)5LL))) goto L_end208;
{
if ((l_PASS_207 == ((rt_int)1LL)))
{
l_L_206 = ((*(R17 *)rt_nil_check(l_N_203))).f_B;
}
else if ((l_PASS_207 == ((rt_int)2LL)))
{
l_L_206 = ((*(R17 *)rt_nil_check(l_N_203))).f_C;
}
else if ((l_PASS_207 == ((rt_int)3LL)))
{
l_L_206 = ((*(R17 *)rt_nil_check(l_N_203))).f_D;
}
else if ((l_PASS_207 == ((rt_int)4LL)))
{
l_L_206 = ((*(R17 *)rt_nil_check(l_N_203))).f_E;
}
for (;;) {
if ((l_L_206 == NULL)) goto L_end209;
{
if ((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_L_206))).f_NEXT, ((*(R17 *)rt_nil_check(l_L_206))).f_NAME) || (((l_PASS_207 == ((rt_int)0LL)) && r_IN_IDENTS(((*(R17 *)rt_nil_check(l_N_203))).f_B, ((*(R17 *)rt_nil_check(l_L_206))).f_NAME)))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_L_206))).f_LINE, rt_str("a name appears only once in an imports-clause (4.3.1): ", 55), ((*(R17 *)rt_nil_check(l_L_206))).f_NAME);
}
l_L_206 = ((*(R17 *)rt_nil_check(l_L_206))).f_NEXT;
}
RT_B_TICK();
} L_end209: ;
l_PASS_207 = rt_add(l_PASS_207, ((rt_int)1LL));
}
RT_B_TICK();
} L_end208: ;
}
{ R17 * rv210 = l_N_203;
return rv210; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_SEGMENT(void) { RT_B_TICK(); 
R17 * l_S_211; memset(&l_S_211, 0, sizeof l_S_211);
l_S_211 = r_NEW_NODE(g_N_SEGMENT, r_LINE_NOW());
R17 * l_HEAD_212; memset(&l_HEAD_212, 0, sizeof l_HEAD_212);
l_HEAD_212 = NULL;
R17 * l_TAIL_213; memset(&l_TAIL_213, 0, sizeof l_TAIL_213);
l_TAIL_213 = NULL;
if (r_ACCEPT(rt_str("MAIN", 4)))
{
((*(R17 *)rt_nil_check(l_S_211))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("SEGMENT", 7));
S_R9(&((*(R17 *)rt_nil_check(l_S_211))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("USES", 4)))
{
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_U_215; memset(&l_U_215, 0, sizeof l_U_215);
l_U_215 = r_NEW_NODE(g_N_USE, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_U_215))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_U_215))).f_A = r_PARSE_ITEMS();
}
r_ADD_LIST(l_U_215, &l_HEAD_212, &l_TAIL_213);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end214;
} L_end214: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_S_211))).f_A = l_HEAD_212;
}
if (r_ACCEPT(rt_str("DEFINES", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R17 *)rt_nil_check(l_S_211))).f_FL = ((rt_int)1LL);
}
else
{
((*(R17 *)rt_nil_check(l_S_211))).f_C = r_PAREN_IDENTS();
}
}
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_S_211))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SEGMENT", 7));
r_EXPECT_NAME(((*(R17 *)rt_nil_check(l_S_211))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R17 * rv216 = l_S_211;
return rv216; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CLOSED_BODY(void) { RT_B_TICK(); 
R17 * l_B_217; memset(&l_B_217, 0, sizeof l_B_217);
l_B_217 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
R17 * l_HEAD_218; memset(&l_HEAD_218, 0, sizeof l_HEAD_218);
l_HEAD_218 = NULL;
R17 * l_TAIL_219; memset(&l_TAIL_219, 0, sizeof l_TAIL_219);
l_TAIL_219 = NULL;
((*(R17 *)rt_nil_check(l_B_217))).f_A = r_PARSE_DECLARATIONS();
((*(R17 *)rt_nil_check(l_B_217))).f_B = r_PARSE_STATEMENTS();
for (;;) {
{
if ((((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()))
{
r_ADD_LIST(r_PARSE_ROUTINE(), &l_HEAD_218, &l_TAIL_219);
}
else if (r_IS(rt_str("MODULE", 6)))
{
r_ADD_LIST(r_PARSE_MODULE(), &l_HEAD_218, &l_TAIL_219);
}
else
{
goto L_end220;
}
}
RT_B_TICK();
} L_end220: ;
((*(R17 *)rt_nil_check(l_B_217))).f_C = l_HEAD_218;
{ R17 * rv221 = l_B_217;
return rv221; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_BODY(void) { RT_B_TICK(); 
R17 * l_B_222; memset(&l_B_222, 0, sizeof l_B_222);
l_B_222 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_B_222))).f_A = r_PARSE_DECLARATIONS();
((*(R17 *)rt_nil_check(l_B_222))).f_B = r_PARSE_STATEMENTS();
{ R17 * rv223 = l_B_222;
return rv223; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_MODULE(void) { RT_B_TICK(); 
R17 * l_M_224; memset(&l_M_224, 0, sizeof l_M_224);
l_M_224 = r_NEW_NODE(g_N_MODULE, r_LINE_NOW());
R17 * l_HEAD_225; memset(&l_HEAD_225, 0, sizeof l_HEAD_225);
l_HEAD_225 = NULL;
R17 * l_TAIL_226; memset(&l_TAIL_226, 0, sizeof l_TAIL_226);
l_TAIL_226 = NULL;
r_EXPECT(rt_str("MODULE", 6));
S_R9(&((*(R17 *)rt_nil_check(l_M_224))).f_NAME, r_IDENT(), 0);
for (;;) {
{
if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R17 *)rt_nil_check(l_M_224))).f_A = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("EXPORTS", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R17 *)rt_nil_check(l_M_224))).f_FL = ((rt_int)1LL);
}
else
{
{
rt_int l_PAREN_228; memset(&l_PAREN_228, 0, sizeof l_PAREN_228);
l_PAREN_228 = r_ACCEPT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_X_230; memset(&l_X_230, 0, sizeof l_X_230);
l_X_230 = r_NEW_NODE(g_N_EXPORT, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_X_230))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("WITH", 4)))
{
((*(R17 *)rt_nil_check(l_X_230))).f_A = r_PAREN_IDENTS();
}
r_ADD_LIST(l_X_230, &l_HEAD_225, &l_TAIL_226);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end229;
} L_end229: ;
if (l_PAREN_228)
{
r_EXPECT(rt_str(")", 1));
}
}
((*(R17 *)rt_nil_check(l_M_224))).f_B = l_HEAD_225;
}
}
else
{
goto L_end227;
}
}
RT_B_TICK();
} L_end227: ;
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_M_224))).f_C = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("MODULE", 6));
r_EXPECT_NAME(((*(R17 *)rt_nil_check(l_M_224))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R17 * rv231 = l_M_224;
return rv231; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_DECLARATIONS(void) { RT_B_TICK(); 
R17 * l_HEAD_232; memset(&l_HEAD_232, 0, sizeof l_HEAD_232);
l_HEAD_232 = NULL;
R17 * l_TAIL_233; memset(&l_TAIL_233, 0, sizeof l_TAIL_233);
l_TAIL_233 = NULL;
for (;;) {
{
if ((r_IS(rt_str("CONST", 5)) || r_IS(rt_str("VAR", 3))))
{
r_ADD_LIST(r_PARSE_OBJECT_DECL(), &l_HEAD_232, &l_TAIL_233);
}
else if (r_IS(rt_str("TYPE", 4)))
{
r_ADD_LIST(r_PARSE_TYPE_DECL(), &l_HEAD_232, &l_TAIL_233);
}
else if ((r_IS(rt_str("REPTYPE", 7)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_ADD_LIST(r_PARSE_REPTYPE_DECL(), &l_HEAD_232, &l_TAIL_233);
}
else
{
goto L_end234;
}
}
RT_B_TICK();
} L_end234: ;
{ R17 * rv235 = l_HEAD_232;
return rv235; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_OBJECT_DECL(void) { RT_B_TICK(); 
R17 * l_D_236; memset(&l_D_236, 0, sizeof l_D_236);
l_D_236 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
if (r_ACCEPT(rt_str("CONST", 5)))
{
((*(R17 *)rt_nil_check(l_D_236))).f_KIND = g_N_CONST;
}
else
{
r_EXPECT(rt_str("VAR", 3));
}
((*(R17 *)rt_nil_check(l_D_236))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_D_236))).f_B = r_PARSE_TYPE_SPEC();
if (r_ACCEPT(rt_str(":=", 2)))
{
((*(R17 *)rt_nil_check(l_D_236))).f_C = r_PARSE_EXPR();
}
else if ((((*(R17 *)rt_nil_check(l_D_236))).f_KIND == g_N_CONST))
{
r_FAIL(((*(R17 *)rt_nil_check(l_D_236))).f_LINE, rt_str("a constant needs a value", 24));
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv237 = l_D_236;
return rv237; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_FORMALS(void) { RT_B_TICK(); 
R17 * l_HEAD_238; memset(&l_HEAD_238, 0, sizeof l_HEAD_238);
l_HEAD_238 = NULL;
R17 * l_TAIL_239; memset(&l_TAIL_239, 0, sizeof l_TAIL_239);
l_TAIL_239 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_F_241; memset(&l_F_241, 0, sizeof l_F_241);
l_F_241 = r_NEW_NODE(g_N_FORMAL, r_LINE_NOW());
if (r_ACCEPT(rt_str("TAG", 3)))
{
((*(R17 *)rt_nil_check(l_F_241))).f_IV = ((rt_int)1LL);
}
((*(R17 *)rt_nil_check(l_F_241))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
if ((!r_ACCEPT(rt_str("TYPE", 4))))
{
((*(R17 *)rt_nil_check(l_F_241))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_F_241, &l_HEAD_238, &l_TAIL_239);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end240;
} L_end240: ;
r_EXPECT(rt_str(")", 1));
{ R17 * rv242 = l_HEAD_238;
return rv242; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TYPE_DECL(void) { RT_B_TICK(); 
R17 * l_D_243; memset(&l_D_243, 0, sizeof l_D_243);
l_D_243 = r_NEW_NODE(g_N_TYPE, r_LINE_NOW());
r_EXPECT(rt_str("TYPE", 4));
S_R9(&((*(R17 *)rt_nil_check(l_D_243))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_D_243))).f_A = r_PARSE_FORMALS();
}
r_EXPECT(rt_str("=", 1));
((*(R17 *)rt_nil_check(l_D_243))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(";", 1));
{ R17 * rv244 = l_D_243;
return rv244; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_REPTYPE_DECL(void) { RT_B_TICK(); 
R17 * l_D_245; memset(&l_D_245, 0, sizeof l_D_245);
l_D_245 = r_NEW_NODE(g_N_REPTYPE, r_LINE_NOW());
r_EXPECT(rt_str("REPTYPE", 7));
S_R9(&((*(R17 *)rt_nil_check(l_D_245))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_D_245))).f_A = r_PARSE_FORMALS();
}
if (r_ACCEPT(rt_str("OF", 2)))
{
((*(R17 *)rt_nil_check(l_D_245))).f_C = r_IDENT_NODE();
}
r_EXPECT(rt_str("=", 1));
((*(R17 *)rt_nil_check(l_D_245))).f_B = r_PARSE_REP();
r_EXPECT(rt_str(";", 1));
{ R17 * rv246 = l_D_245;
return rv246; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_REP(void) { RT_B_TICK(); 
R17 * l_R_247; memset(&l_R_247, 0, sizeof l_R_247);
l_R_247 = r_NEW_NODE(g_N_REP, r_LINE_NOW());
R17 * l_HEAD_248; memset(&l_HEAD_248, 0, sizeof l_HEAD_248);
l_HEAD_248 = NULL;
R17 * l_TAIL_249; memset(&l_TAIL_249, 0, sizeof l_TAIL_249);
l_TAIL_249 = NULL;
if (r_IS_KIND(g_K_GEN))
{
((*(R17 *)rt_nil_check(l_R_247))).f_KIND = g_TS_GEN;
S_R9(&((*(R17 *)rt_nil_check(l_R_247))).f_NAME, r_GEN_NAME(), 0);
{ R17 * rv250 = l_R_247;
return rv250; }
}
S_R9(&((*(R17 *)rt_nil_check(l_R_247))).f_NAME, r_IDENT(), 0);
if ((!r_IS(rt_str("(", 1))))
{
{ R17 * rv251 = l_R_247;
return rv251; }
}
if (r_TEQS(((*(R17 *)rt_nil_check(l_R_247))).f_NAME, rt_str("RECORD_REP", 10)))
{
r_PARSE_RECORD_REP(l_R_247);
{ R17 * rv252 = l_R_247;
return rv252; }
}
r_SKIP();
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end253;
{
if (r_ACCEPT(rt_str("VALUES", 6)))
{
{
R17 * l_VH_254; memset(&l_VH_254, 0, sizeof l_VH_254);
l_VH_254 = NULL;
R17 * l_VT_255; memset(&l_VT_255, 0, sizeof l_VT_255);
l_VT_255 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_V_257; memset(&l_V_257, 0, sizeof l_V_257);
l_V_257 = r_NEW_NODE(g_N_VALREP, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_V_257))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_EXPECT(rt_str("AS", 2));
((*(R17 *)rt_nil_check(l_V_257))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_V_257, &l_VH_254, &l_VT_255);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end256;
} L_end256: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_R_247))).f_B = l_VH_254;
}
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_248, &l_TAIL_249);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end253: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_R_247))).f_A = l_HEAD_248;
{ R17 * rv258 = l_R_247;
return rv258; }
rt_raise(RT_X_INIT);
}
static void r_PARSE_RECORD_REP(R17 * p_R) { RT_B_TICK(); 
R17 * l_HEAD_259; memset(&l_HEAD_259, 0, sizeof l_HEAD_259);
l_HEAD_259 = NULL;
R17 * l_TAIL_260; memset(&l_TAIL_260, 0, sizeof l_TAIL_260);
l_TAIL_260 = NULL;
R17 * l_VH_261; memset(&l_VH_261, 0, sizeof l_VH_261);
l_VH_261 = NULL;
R17 * l_VT_262; memset(&l_VT_262, 0, sizeof l_VT_262);
l_VT_262 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end263;
{
if (r_IS(rt_str("SELECT", 6)))
{
r_ADD_LIST(r_PARSE_VARIANT_PACKING(), &l_VH_261, &l_VT_262);
}
else
{
r_ADD_LIST(r_PARSE_PACKING_SPEC(), &l_HEAD_259, &l_TAIL_260);
}
if ((r_ACCEPT(rt_str(",", 1)) || r_ACCEPT(rt_str(";", 1))))
{
}
}
RT_B_TICK();
} L_end263: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(p_R))).f_A = l_HEAD_259;
((*(R17 *)rt_nil_check(p_R))).f_C = l_VH_261;
}
static R17 * r_PARSE_PACKING_SPEC(void) { RT_B_TICK(); 
R17 * l_P_264; memset(&l_P_264, 0, sizeof l_P_264);
l_P_264 = r_NEW_NODE(g_N_PSPEC, r_LINE_NOW());
R17 * l_HEAD_265; memset(&l_HEAD_265, 0, sizeof l_HEAD_265);
l_HEAD_265 = NULL;
R17 * l_TAIL_266; memset(&l_TAIL_266, 0, sizeof l_TAIL_266);
l_TAIL_266 = NULL;
if ((r_IS_KIND(g_K_ID) && (((r_IS(rt_str("DENSE", 5)) || r_IS(rt_str("PACKED", 6))) || r_IS(rt_str("UNPACKED", 8))))))
{
S_R9(&((*(R17 *)rt_nil_check(l_P_264))).f_NAME, r_IDENT(), 0);
}
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_P_264))).f_IV = ((rt_int)1LL);
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end267;
{
r_ADD_LIST(r_PARSE_ELEMENT_SPEC(), &l_HEAD_265, &l_TAIL_266);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end267: ;
r_EXPECT(rt_str(")", 1));
}
else if (((((*(R17 *)rt_nil_check(l_P_264))).f_NAME).f_LEN == ((rt_int)0LL)))
{
((*(R17 *)rt_nil_check(l_P_264))).f_IV = ((rt_int)1LL);
r_ADD_LIST(r_PARSE_ELEMENT_SPEC(), &l_HEAD_265, &l_TAIL_266);
}
((*(R17 *)rt_nil_check(l_P_264))).f_A = l_HEAD_265;
{ R17 * rv268 = l_P_264;
return rv268; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ELEMENT_SPEC(void) { RT_B_TICK(); 
R17 * l_E_269; memset(&l_E_269, 0, sizeof l_E_269);
l_E_269 = r_NEW_NODE(g_N_ELEM, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_E_269))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
if ((r_TEQS(((*(R17 *)rt_nil_check(l_E_269))).f_NAME, rt_str("VARIANTS", 8)) || r_TEQS(((*(R17 *)rt_nil_check(l_E_269))).f_NAME, rt_str("OMIT", 4))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_E_269))).f_NAME, rt_str("VARIANTS", 8)))
{
((*(R17 *)rt_nil_check(l_E_269))).f_FL = ((rt_int)1LL);
}
else
{
((*(R17 *)rt_nil_check(l_E_269))).f_FL = ((rt_int)2LL);
}
r_SKIP();
S_R9(&((*(R17 *)rt_nil_check(l_E_269))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(")", 1));
}
else if (((r_TEQS(((*(R17 *)rt_nil_check(l_E_269))).f_NAME, rt_str("FILLER", 6)) || r_TEQS(((*(R17 *)rt_nil_check(l_E_269))).f_NAME, rt_str("ZEROS", 5))) || r_TEQS(((*(R17 *)rt_nil_check(l_E_269))).f_NAME, rt_str("BLANKS", 6))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_E_269))).f_NAME, rt_str("FILLER", 6)))
{
((*(R17 *)rt_nil_check(l_E_269))).f_FL = ((rt_int)3LL);
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_E_269))).f_NAME, rt_str("ZEROS", 5)))
{
((*(R17 *)rt_nil_check(l_E_269))).f_FL = ((rt_int)4LL);
}
else
{
((*(R17 *)rt_nil_check(l_E_269))).f_FL = ((rt_int)5LL);
}
r_SKIP();
((*(R17 *)rt_nil_check(l_E_269))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
}
{ R17 * rv270 = l_E_269;
return rv270; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_VARIANT_PACKING(void) { RT_B_TICK(); 
R17 * l_V_271; memset(&l_V_271, 0, sizeof l_V_271);
l_V_271 = r_NEW_NODE(g_N_VPACK, r_LINE_NOW());
R17 * l_HEAD_272; memset(&l_HEAD_272, 0, sizeof l_HEAD_272);
l_HEAD_272 = NULL;
R17 * l_TAIL_273; memset(&l_TAIL_273, 0, sizeof l_TAIL_273);
l_TAIL_273 = NULL;
r_EXPECT(rt_str("SELECT", 6));
S_R9(&((*(R17 *)rt_nil_check(l_V_271))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end274;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_V_271))).f_IV = ((rt_int)1LL);
if ((!r_IS(rt_str("END", 3))))
{
((*(R17 *)rt_nil_check(l_V_271))).f_B = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_271))).f_B))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
}
else
{
{
R17 * l_S_275; memset(&l_S_275, 0, sizeof l_S_275);
l_S_275 = r_NEW_NODE(g_N_VPSPEC, r_LINE_NOW());
R17 * l_LH_276; memset(&l_LH_276, 0, sizeof l_LH_276);
l_LH_276 = NULL;
R17 * l_LT_277; memset(&l_LT_277, 0, sizeof l_LT_277);
l_LT_277 = NULL;
R17 * l_PH_278; memset(&l_PH_278, 0, sizeof l_PH_278);
l_PH_278 = NULL;
R17 * l_PT_279; memset(&l_PT_279, 0, sizeof l_PT_279);
l_PT_279 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_276, &l_LT_277);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end280;
} L_end280: ;
r_EXPECT(rt_str("-->", 3));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end281;
{
r_ADD_LIST(r_PARSE_PACKING_SPEC(), &l_PH_278, &l_PT_279);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end281: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_S_275))).f_A = l_LH_276;
((*(R17 *)rt_nil_check(l_S_275))).f_B = l_PH_278;
r_ADD_LIST(l_S_275, &l_HEAD_272, &l_TAIL_273);
}
}
}
RT_B_TICK();
} L_end274: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
((*(R17 *)rt_nil_check(l_V_271))).f_A = l_HEAD_272;
{ R17 * rv282 = l_V_271;
return rv282; }
rt_raise(RT_X_INIT);
}
static R9 r_GEN_NAME(void) { RT_B_TICK(); 
R9 l_T_283; memset(&l_T_283, 0, sizeof l_T_283);
S_R9(&l_T_283, (r_CUR()).f_TX, 0);
r_SKIP();
if (((l_T_283).f_LEN == ((rt_int)1LL)))
{
{ R9 rv284 = r_NO_TEXT();
return rv284; }
}
{ R9 rv285 = r_MKN(rt_b_slice(r_STR(l_T_283, (l_T_283).f_LEN), ((rt_int)1LL), rt_sub((l_T_283).f_LEN, ((rt_int)1LL))));
return rv285; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TYPE_ARG(void) { RT_B_TICK(); 
R17 * l_N_286; memset(&l_N_286, 0, sizeof l_N_286);
if (r_IS_KIND(g_K_GEN))
{
{
R9 l_T_287; memset(&l_T_287, 0, sizeof l_T_287);
S_R9(&l_T_287, (r_CUR()).f_TX, 0);
if (((l_T_287).f_LEN == ((rt_int)1LL)))
{
r_SKIP();
{ R17 * rv288 = r_NEW_NODE(g_N_DONTCARE, r_LINE_NOW());
return rv288; }
}
}
l_N_286 = r_NEW_NODE(g_TS_GEN, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_N_286))).f_NAME, r_GEN_NAME(), 0);
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R17 *)rt_nil_check(l_N_286))).f_C = r_PARSE_REP();
}
{ R17 * rv289 = l_N_286;
return rv289; }
}
if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R17 * rv290 = r_NEW_NODE(g_N_ANY, r_LINE_NOW());
return rv290; }
}
if ((r_IS(rt_str("ARRAY", 5)) || r_IS(rt_str("RECORD", 6))))
{
{ R17 * rv291 = r_PARSE_TYPE_SPEC();
return rv291; }
}
if ((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM)))
{
{ R17 * rv292 = r_PARSE_TYPE_SPEC();
return rv292; }
}
l_N_286 = r_PARSE_EXPR();
if ((r_IS(rt_str("REP", 3)) || r_IS(rt_str("[", 1))))
{
{ R17 * rv293 = r_TYPE_SPEC_TAIL(r_EXPR_TO_TS(l_N_286));
return rv293; }
}
{ R17 * rv294 = l_N_286;
return rv294; }
rt_raise(RT_X_INIT);
}
static R17 * r_EXPR_TO_TS(R17 * p_E) { RT_B_TICK(); 
R17 * l_N_295; memset(&l_N_295, 0, sizeof l_N_295);
if ((((((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_NAME) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_ARRAY)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_RECORD)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_ENUM)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN)))
{
{ R17 * rv296 = p_E;
return rv296; }
}
l_N_295 = r_NEW_NODE(g_TS_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME))
{
S_R9(&((*(R17 *)rt_nil_check(l_N_295))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
{ R17 * rv297 = l_N_295;
return rv297; }
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
S_R9(&((*(R17 *)rt_nil_check(l_N_295))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_295))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_A;
{ R17 * rv298 = l_N_295;
return rv298; }
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD))
{
((*(R17 *)rt_nil_check(l_N_295))).f_FL = ((rt_int)3LL);
((*(R17 *)rt_nil_check(l_N_295))).f_E = p_E;
{ R17 * rv299 = l_N_295;
return rv299; }
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_SUBSTR))
{
l_N_295 = r_EXPR_TO_TS(((*(R17 *)rt_nil_check(p_E))).f_A);
if (((!(((*(R17 *)rt_nil_check(l_N_295))).f_KIND == g_TS_NAME)) || (!(((*(R17 *)rt_nil_check(l_N_295))).f_B == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type specification expected", 29));
}
((*(R17 *)rt_nil_check(l_N_295))).f_B = r_NEW_NODE(g_N_RANGE, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_295))).f_B))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_B;
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_295))).f_B))).f_B = ((*(R17 *)rt_nil_check(p_E))).f_C;
{ R17 * rv300 = l_N_295;
return rv300; }
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
{ R17 * rv301 = p_N;
return rv301; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TYPE_SPEC(void) { RT_B_TICK(); 
R17 * l_N_302; memset(&l_N_302, 0, sizeof l_N_302);
R17 * l_HEAD_303; memset(&l_HEAD_303, 0, sizeof l_HEAD_303);
l_HEAD_303 = NULL;
R17 * l_TAIL_304; memset(&l_TAIL_304, 0, sizeof l_TAIL_304);
l_TAIL_304 = NULL;
rt_int l_LINE_305; memset(&l_LINE_305, 0, sizeof l_LINE_305);
l_LINE_305 = r_LINE_NOW();
if (r_ACCEPT(rt_str("ARRAY", 5)))
{
l_N_302 = r_NEW_NODE(g_TS_ARRAY, l_LINE_305);
r_EXPECT(rt_str("[", 1));
for (;;) {
{
{
R17 * l_R_307; memset(&l_R_307, 0, sizeof l_R_307);
l_R_307 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_R_307))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_R_307))).f_B = r_PARSE_EXPR();
r_ADD_LIST(l_R_307, &l_HEAD_303, &l_TAIL_304);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end306;
} L_end306: ;
r_EXPECT(rt_str("]", 1));
((*(R17 *)rt_nil_check(l_N_302))).f_A = l_HEAD_303;
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R17 *)rt_nil_check(l_N_302))).f_D = r_PARSE_REP();
}
r_EXPECT(rt_str("OF", 2));
((*(R17 *)rt_nil_check(l_N_302))).f_C = r_PARSE_TYPE_SPEC();
{ R17 * rv308 = l_N_302;
return rv308; }
}
if (r_ACCEPT(rt_str("RECORD", 6)))
{
l_N_302 = r_NEW_NODE(g_TS_RECORD, l_LINE_305);
((*(R17 *)rt_nil_check(l_N_302))).f_A = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("RECORD", 6));
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R17 *)rt_nil_check(l_N_302))).f_D = r_PARSE_REP();
}
{ R17 * rv309 = l_N_302;
return rv309; }
}
if (r_IS_KIND(g_K_GEN))
{
{ R17 * rv310 = r_PARSE_TYPE_ARG();
return rv310; }
}
if (r_IS(rt_str("(", 1)))
{
l_N_302 = r_NEW_NODE(g_TS_ENUM, l_LINE_305);
((*(R17 *)rt_nil_check(l_N_302))).f_A = r_PARSE_LITERALS();
{ R17 * rv311 = r_TYPE_SPEC_TAIL(l_N_302);
return rv311; }
}
l_N_302 = r_NEW_NODE(g_TS_NAME, l_LINE_305);
S_R9(&((*(R17 *)rt_nil_check(l_N_302))).f_NAME, r_IDENT(), 0);
if ((r_IS(rt_str(".", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
{
R17 * l_X_312; memset(&l_X_312, 0, sizeof l_X_312);
l_X_312 = r_NEW_NODE(g_N_NAME, l_LINE_305);
S_R9(&((*(R17 *)rt_nil_check(l_X_312))).f_NAME, ((*(R17 *)rt_nil_check(l_N_302))).f_NAME, 0);
for (;;) {
if ((!((r_IS(rt_str(".", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID))))) goto L_end313;
{
r_SKIP();
{
R17 * l_F_314; memset(&l_F_314, 0, sizeof l_F_314);
l_F_314 = r_NEW_NODE(g_N_FIELD, l_LINE_305);
((*(R17 *)rt_nil_check(l_F_314))).f_A = l_X_312;
S_R9(&((*(R17 *)rt_nil_check(l_F_314))).f_NAME, r_IDENT(), 0);
l_X_312 = l_F_314;
}
}
RT_B_TICK();
} L_end313: ;
((*(R17 *)rt_nil_check(l_N_302))).f_FL = ((rt_int)3LL);
((*(R17 *)rt_nil_check(l_N_302))).f_E = l_X_312;
{ R17 * rv315 = r_TYPE_SPEC_TAIL(l_N_302);
return rv315; }
}
}
if ((r_TEQS(((*(R17 *)rt_nil_check(l_N_302))).f_NAME, rt_str("ENUM", 4)) || r_TEQS(((*(R17 *)rt_nil_check(l_N_302))).f_NAME, rt_str("UNORDERED", 9))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_N_302))).f_NAME, rt_str("UNORDERED", 9)))
{
((*(R17 *)rt_nil_check(l_N_302))).f_IV = ((rt_int)1LL);
}
((*(R17 *)rt_nil_check(l_N_302))).f_KIND = g_TS_ENUM;
((*(R17 *)rt_nil_check(l_N_302))).f_A = r_PARSE_LITERALS();
{ R17 * rv316 = r_TYPE_SPEC_TAIL(l_N_302);
return rv316; }
}
if ((r_IS(rt_str("(", 1)) && (!r_RANGE_AHEAD())))
{
r_SKIP();
for (;;) {
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_N_302))).f_NAME, rt_str("PTR", 3)))
{
r_ADD_LIST(r_PARSE_TYPE_SPEC(), &l_HEAD_303, &l_TAIL_304);
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_303, &l_TAIL_304);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end317;
} L_end317: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_N_302))).f_A = l_HEAD_303;
}
{ R17 * rv318 = r_TYPE_SPEC_TAIL(l_N_302);
return rv318; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_LITERALS(void) { RT_B_TICK(); 
R17 * l_HEAD_319; memset(&l_HEAD_319, 0, sizeof l_HEAD_319);
l_HEAD_319 = NULL;
R17 * l_TAIL_320; memset(&l_TAIL_320, 0, sizeof l_TAIL_320);
l_TAIL_320 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_L_322; memset(&l_L_322, 0, sizeof l_L_322);
l_L_322 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
if ((!((r_IS_KIND(g_K_ENUM) || r_IS_KIND(g_K_ID)))))
{
r_FAIL(r_LINE_NOW(), rt_str("an enumerated literal expected", 30));
}
S_R9(&((*(R17 *)rt_nil_check(l_L_322))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_ADD_LIST(l_L_322, &l_HEAD_319, &l_TAIL_320);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end321;
} L_end321: ;
r_EXPECT(rt_str(")", 1));
{ R17 * rv323 = l_HEAD_319;
return rv323; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_FIELDS(void) { RT_B_TICK(); 
R17 * l_HEAD_324; memset(&l_HEAD_324, 0, sizeof l_HEAD_324);
l_HEAD_324 = NULL;
R17 * l_TAIL_325; memset(&l_TAIL_325, 0, sizeof l_TAIL_325);
l_TAIL_325 = NULL;
for (;;) {
{
if (r_IS(rt_str("VAR", 3)))
{
{
R17 * l_F_327; memset(&l_F_327, 0, sizeof l_F_327);
l_F_327 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
r_SKIP();
((*(R17 *)rt_nil_check(l_F_327))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_F_327))).f_B = r_PARSE_TYPE_SPEC();
if ((!r_ACCEPT(rt_str(";", 1))))
{
r_EXPECT(rt_str(",", 1));
}
r_ADD_LIST(l_F_327, &l_HEAD_324, &l_TAIL_325);
}
}
else if (r_IS(rt_str("SELECT", 6)))
{
{
R17 * l_V_328; memset(&l_V_328, 0, sizeof l_V_328);
l_V_328 = r_NEW_NODE(g_N_VARIANT, r_LINE_NOW());
R17 * l_VH_329; memset(&l_VH_329, 0, sizeof l_VH_329);
l_VH_329 = NULL;
R17 * l_VT_330; memset(&l_VT_330, 0, sizeof l_VT_330);
l_VT_330 = NULL;
r_SKIP();
S_R9(&((*(R17 *)rt_nil_check(l_V_328))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end331;
{
{
R17 * l_S_332; memset(&l_S_332, 0, sizeof l_S_332);
l_S_332 = r_NEW_NODE(g_N_VARSPEC, r_LINE_NOW());
R17 * l_LH_333; memset(&l_LH_333, 0, sizeof l_LH_333);
l_LH_333 = NULL;
R17 * l_LT_334; memset(&l_LT_334, 0, sizeof l_LT_334);
l_LT_334 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_333, &l_LT_334);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end335;
} L_end335: ;
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_S_332))).f_A = l_LH_333;
((*(R17 *)rt_nil_check(l_S_332))).f_B = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_S_332, &l_VH_329, &l_VT_330);
}
}
RT_B_TICK();
} L_end331: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_V_328))).f_A = l_VH_329;
r_ADD_LIST(l_V_328, &l_HEAD_324, &l_TAIL_325);
}
}
else
{
goto L_end326;
}
}
RT_B_TICK();
} L_end326: ;
{ R17 * rv336 = l_HEAD_324;
return rv336; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_RANGE(void) { RT_B_TICK(); 
R17 * l_R_337; memset(&l_R_337, 0, sizeof l_R_337);
l_R_337 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_R_337))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("[", 1));
}
((*(R17 *)rt_nil_check(l_R_337))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_R_337))).f_B = r_PARSE_EXPR();
if (r_ACCEPT(rt_str(")", 1)))
{
((*(R17 *)rt_nil_check(l_R_337))).f_IV = rt_add(((*(R17 *)rt_nil_check(l_R_337))).f_IV, ((rt_int)2LL));
}
else
{
r_EXPECT(rt_str("]", 1));
}
{ R17 * rv338 = l_R_337;
return rv338; }
rt_raise(RT_X_INIT);
}
static rt_int r_RANGE_AHEAD(void) { RT_B_TICK(); 
rt_int l_DEPTH_339; memset(&l_DEPTH_339, 0, sizeof l_DEPTH_339);
l_DEPTH_339 = ((rt_int)0LL);
rt_int l_K_340; memset(&l_K_340, 0, sizeof l_K_340);
l_K_340 = ((rt_int)0LL);
for (;;) {
{
{
R10 l_T_342; memset(&l_T_342, 0, sizeof l_T_342);
S_R10(&l_T_342, r_AHEAD(l_K_340), 0);
if (((l_T_342).f_KIND == g_K_EOF))
{
{ rt_int rv343 = 0;
return rv343; }
}
if (((l_T_342).f_KIND == g_K_SYM))
{
if ((r_TEQS((l_T_342).f_TX, rt_str("(", 1)) || r_TEQS((l_T_342).f_TX, rt_str("[", 1))))
{
l_DEPTH_339 = rt_add(l_DEPTH_339, ((rt_int)1LL));
}
else if ((r_TEQS((l_T_342).f_TX, rt_str(")", 1)) || r_TEQS((l_T_342).f_TX, rt_str("]", 1))))
{
l_DEPTH_339 = rt_sub(l_DEPTH_339, ((rt_int)1LL));
if ((l_DEPTH_339 == ((rt_int)0LL)))
{
{ rt_int rv344 = 0;
return rv344; }
}
}
else if (((l_DEPTH_339 == ((rt_int)1LL)) && ((r_TEQS((l_T_342).f_TX, rt_str(":", 1)) || r_TEQS((l_T_342).f_TX, rt_str(",", 1))))))
{
{ rt_int rv345 = r_TEQS((l_T_342).f_TX, rt_str(":", 1));
return rv345; }
}
}
}
l_K_340 = rt_add(l_K_340, ((rt_int)1LL));
}
RT_B_TICK();
} L_end341: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_PARAMS(void) { RT_B_TICK(); 
R17 * l_HEAD_346; memset(&l_HEAD_346, 0, sizeof l_HEAD_346);
l_HEAD_346 = NULL;
R17 * l_TAIL_347; memset(&l_TAIL_347, 0, sizeof l_TAIL_347);
l_TAIL_347 = NULL;
rt_int l_MODE_348; memset(&l_MODE_348, 0, sizeof l_MODE_348);
l_MODE_348 = g_M_IN;
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end349;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_348 = rt_add(l_MODE_348, ((rt_int)1LL));
}
else
{
{
R17 * l_NAMES_350; memset(&l_NAMES_350, 0, sizeof l_NAMES_350);
l_NAMES_350 = r_IDENT_LIST();
R17 * l_TS_351; memset(&l_TS_351, 0, sizeof l_TS_351);
l_TS_351 = NULL;
R17 * l_P_352; memset(&l_P_352, 0, sizeof l_P_352);
l_P_352 = l_NAMES_350;
r_EXPECT(rt_str(":", 1));
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else if ((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))))
{
l_TS_351 = r_PARSE_ROUTINE_SPEC();
}
else
{
l_TS_351 = r_PARSE_TYPE_SPEC();
}
for (;;) {
if ((l_P_352 == NULL)) goto L_end353;
{
{
R17 * l_PN_354; memset(&l_PN_354, 0, sizeof l_PN_354);
l_PN_354 = r_NEW_NODE(g_N_PARAM, ((*(R17 *)rt_nil_check(l_P_352))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_PN_354))).f_NAME, ((*(R17 *)rt_nil_check(l_P_352))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_PN_354))).f_IV = l_MODE_348;
((*(R17 *)rt_nil_check(l_PN_354))).f_B = l_TS_351;
r_ADD_LIST(l_PN_354, &l_HEAD_346, &l_TAIL_347);
}
l_P_352 = ((*(R17 *)rt_nil_check(l_P_352))).f_NEXT;
}
RT_B_TICK();
} L_end353: ;
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end349: ;
r_EXPECT(rt_str(")", 1));
{ R17 * rv355 = l_HEAD_346;
return rv355; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TEMPLATE(rt_int p_FUNC) { RT_B_TICK(); 
R17 * l_R_356; memset(&l_R_356, 0, sizeof l_R_356);
l_R_356 = r_NEW_NODE(g_TS_ROUTINE, r_LINE_NOW());
R17 * l_HEAD_357; memset(&l_HEAD_357, 0, sizeof l_HEAD_357);
l_HEAD_357 = NULL;
R17 * l_TAIL_358; memset(&l_TAIL_358, 0, sizeof l_TAIL_358);
l_TAIL_358 = NULL;
rt_int l_MODE_359; memset(&l_MODE_359, 0, sizeof l_MODE_359);
l_MODE_359 = g_M_IN;
if (p_FUNC)
{
((*(R17 *)rt_nil_check(l_R_356))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end360;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_359 = rt_add(l_MODE_359, ((rt_int)1LL));
if (r_IS(rt_str(")", 1)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_356))).f_LINE, rt_str("a # must not be the last symbol of a proc-template (5.1)", 56));
}
}
else
{
{
R17 * l_P_361; memset(&l_P_361, 0, sizeof l_P_361);
l_P_361 = r_NEW_NODE(g_N_PARAM, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_P_361))).f_IV = l_MODE_359;
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else
{
((*(R17 *)rt_nil_check(l_P_361))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_P_361, &l_HEAD_357, &l_TAIL_358);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end360: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_R_356))).f_A = l_HEAD_357;
if (r_ACCEPT(rt_str("RETURNS", 7)))
{
((*(R17 *)rt_nil_check(l_R_356))).f_IV = ((rt_int)1LL);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_R_356))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R17 *)rt_nil_check(l_R_356))).f_B = r_PARSE_TYPE_SPEC();
}
}
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R17 *)rt_nil_check(l_R_356))).f_D = r_PAREN_IDENTS();
}
{ R17 * rv362 = l_R_356;
return rv362; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ROUTINE_SPEC(void) { RT_B_TICK(); 
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
{ R17 * rv363 = r_PARSE_TEMPLATE(1);
return rv363; }
}
r_EXPECT(rt_str("PROCEDURE", 9));
{ R17 * rv364 = r_PARSE_TEMPLATE(0);
return rv364; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_WHERE(void) { RT_B_TICK(); 
R17 * l_HEAD_365; memset(&l_HEAD_365, 0, sizeof l_HEAD_365);
l_HEAD_365 = NULL;
R17 * l_TAIL_366; memset(&l_TAIL_366, 0, sizeof l_TAIL_366);
l_TAIL_366 = NULL;
for (;;) {
{
{
R17 * l_N_368; memset(&l_N_368, 0, sizeof l_N_368);
l_N_368 = r_NEW_NODE(g_N_NEEDS, r_LINE_NOW());
R17 * l_TH_369; memset(&l_TH_369, 0, sizeof l_TH_369);
l_TH_369 = NULL;
R17 * l_TT_370; memset(&l_TT_370, 0, sizeof l_TT_370);
l_TT_370 = NULL;
S_R9(&((*(R17 *)rt_nil_check(l_N_368))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("NEEDS", 5));
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_T_372; memset(&l_T_372, 0, sizeof l_T_372);
l_T_372 = r_NEW_NODE(g_N_TEMPLATE, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_T_372))).f_NAME, ((*(R17 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_T_372))).f_B = r_PARSE_TEMPLATE(0);
r_ADD_LIST(l_T_372, &l_TH_369, &l_TT_370);
}
if (r_ACCEPT(rt_str(";", 1)))
{
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end371;
} L_end371: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_N_368))).f_A = l_TH_369;
r_ADD_LIST(l_N_368, &l_HEAD_365, &l_TAIL_366);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end367;
} L_end367: ;
{ R17 * rv373 = l_HEAD_365;
return rv373; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ROUTINE(void) { RT_B_TICK(); 
R17 * l_R_374; memset(&l_R_374, 0, sizeof l_R_374);
l_R_374 = r_NEW_NODE(g_N_ROUTINE, r_LINE_NOW());
R17 * l_H_375; memset(&l_H_375, 0, sizeof l_H_375);
l_H_375 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
if (r_IS_TARGET_DECL())
{
r_SKIP();
((*(R17 *)rt_nil_check(l_R_374))).f_FL = ((rt_int)2LL);
}
if (r_ACCEPT(rt_str("INLINE", 6)))
{
if ((((*(R17 *)rt_nil_check(l_R_374))).f_FL == ((rt_int)2LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_374))).f_LINE, rt_str("target routines cannot be INLINE (4.8.2)", 40));
}
((*(R17 *)rt_nil_check(l_R_374))).f_FL = rt_add(((*(R17 *)rt_nil_check(l_R_374))).f_FL, ((rt_int)1LL));
}
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
((*(R17 *)rt_nil_check(l_R_374))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
S_R9(&((*(R17 *)rt_nil_check(l_R_374))).f_NAME, ((*(R17 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (r_IS(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_R_374))).f_A = r_PARSE_PARAMS();
}
if ((((*(R17 *)rt_nil_check(l_R_374))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("RETURNS", 7));
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_R_374))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R17 *)rt_nil_check(l_R_374))).f_B = r_PARSE_TYPE_SPEC();
}
}
for (;;) {
{
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R17 *)rt_nil_check(l_H_375))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R17 *)rt_nil_check(l_R_374))).f_E = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("WHERE", 5)))
{
((*(R17 *)rt_nil_check(l_H_375))).f_B = r_PARSE_WHERE();
}
else
{
goto L_end376;
}
}
RT_B_TICK();
} L_end376: ;
((*(R17 *)rt_nil_check(l_R_374))).f_D = l_H_375;
r_EXPECT(rt_str(";", 1));
if ((((*(R17 *)rt_nil_check(l_R_374))).f_FL >= ((rt_int)2LL)))
{
r_EXPECT(rt_str("DYNSIZE", 7));
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_H_375))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
r_EXPECT(rt_str(";", 1));
for (;;) {
if ((r_IS(rt_str("END", 3)) && ((r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PROCEDURE", 9)) || r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("FUNCTION", 8)))))) goto L_end377;
{
r_SKIP();
}
RT_B_TICK();
} L_end377: ;
}
else
{
((*(R17 *)rt_nil_check(l_R_374))).f_C = r_PARSE_CLOSED_BODY();
}
r_EXPECT(rt_str("END", 3));
if ((((*(R17 *)rt_nil_check(l_R_374))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("FUNCTION", 8));
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
if ((!r_TEQ(((*(R17 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, ((*(R17 *)rt_nil_check(l_R_374))).f_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), ((*(R17 *)rt_nil_check(l_R_374))).f_NAME);
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv378 = l_R_374;
return rv378; }
rt_raise(RT_X_INIT);
}
static R17 * r_BIN_NODE(R9 p_OP, rt_int p_LINE, R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_N_379; memset(&l_N_379, 0, sizeof l_N_379);
l_N_379 = r_NEW_NODE(g_N_BINOP, p_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_379))).f_NAME, p_OP, 0);
((*(R17 *)rt_nil_check(l_N_379))).f_A = p_A;
((*(R17 *)rt_nil_check(l_N_379))).f_B = p_B;
{ R17 * rv380 = l_N_379;
return rv380; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_EXPR(void) { RT_B_TICK(); 
R17 * l_E_381; memset(&l_E_381, 0, sizeof l_E_381);
l_E_381 = r_PARSE_SIMPLE();
if (((((r_IS(rt_str("ROUNDED", 7)) || r_IS(rt_str("TRUNCATED", 9))) || r_IS(rt_str("NATIVE_R", 8))) || r_IS(rt_str("NATIVE_T", 8))) || r_ROUNDING_AHEAD()))
{
{
R17 * l_Q_382; memset(&l_Q_382, 0, sizeof l_Q_382);
l_Q_382 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_Q_382))).f_NAME, r_IDENT(), 0);
((*(R17 *)rt_nil_check(l_Q_382))).f_A = l_E_381;
l_E_381 = l_Q_382;
}
}
if ((r_IS(rt_str("WITH", 4)) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PREC", 4))))
{
{
R17 * l_Q_383; memset(&l_Q_383, 0, sizeof l_Q_383);
l_Q_383 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
r_SKIP();
r_SKIP();
if ((((*(R17 *)rt_nil_check(l_E_381))).f_KIND == g_N_QUAL))
{
l_Q_383 = l_E_381;
}
else
{
((*(R17 *)rt_nil_check(l_Q_383))).f_A = l_E_381;
}
((*(R17 *)rt_nil_check(l_Q_383))).f_B = r_PARSE_SIMPLE();
l_E_381 = l_Q_383;
}
}
{ R17 * rv384 = l_E_381;
return rv384; }
rt_raise(RT_X_INIT);
}
static rt_int r_ROUNDING_AHEAD(void) { RT_B_TICK(); 
R10 l_N_385; memset(&l_N_385, 0, sizeof l_N_385);
S_R10(&l_N_385, r_AHEAD(((rt_int)1LL)), 0);
if ((!r_IS_KIND(g_K_ID)))
{
{ rt_int rv386 = 0;
return rv386; }
}
if ((((((((r_IS(rt_str("CONNECT", 7)) || r_IS(rt_str("SIGNALS", 7))) || r_IS(rt_str("IMPORTS", 7))) || r_IS(rt_str("PRIORITY", 8))) || r_IS(rt_str("WHERE", 5))) || r_IS(rt_str("NEEDS", 5))) || r_IS(rt_str("AS", 2))) || r_IS(rt_str("PREC", 4))))
{
{ rt_int rv387 = 0;
return rv387; }
}
{ rt_int rv388 = (!(((((((r_TOK_IS(l_N_385, rt_str("(", 1)) || r_TOK_IS(l_N_385, rt_str(".", 1))) || r_TOK_IS(l_N_385, rt_str(":=", 2))) || r_TOK_IS(l_N_385, rt_str(":", 1))) || r_TOK_IS(l_N_385, rt_str("$", 1))) || r_TOK_IS(l_N_385, rt_str("@", 1))) || r_TOK_IS(l_N_385, rt_str("[", 1)))));
return rv388; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_SIMPLE(void) { RT_B_TICK(); 
R17 * l_LEFT_389; memset(&l_LEFT_389, 0, sizeof l_LEFT_389);
l_LEFT_389 = r_PARSE_CONJ();
for (;;) {
if ((!((((r_IS(rt_str("OR", 2)) || r_IS(rt_str("!", 1))) || r_IS(rt_str("XOR", 3))) || r_IS(rt_str("->", 2)))))) goto L_end390;
{
{
R10 l_T_391; memset(&l_T_391, 0, sizeof l_T_391);
S_R10(&l_T_391, r_CUR(), 0);
r_SKIP();
l_LEFT_389 = r_BIN_NODE((l_T_391).f_TX, (l_T_391).f_LINE, l_LEFT_389, r_PARSE_CONJ());
}
}
RT_B_TICK();
} L_end390: ;
{ R17 * rv392 = l_LEFT_389;
return rv392; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CONJ(void) { RT_B_TICK(); 
R17 * l_LEFT_393; memset(&l_LEFT_393, 0, sizeof l_LEFT_393);
l_LEFT_393 = r_PARSE_RELATION();
for (;;) {
if ((!((r_IS(rt_str("AND", 3)) || r_IS(rt_str("&", 1)))))) goto L_end394;
{
{
R10 l_T_395; memset(&l_T_395, 0, sizeof l_T_395);
S_R10(&l_T_395, r_CUR(), 0);
r_SKIP();
l_LEFT_393 = r_BIN_NODE((l_T_395).f_TX, (l_T_395).f_LINE, l_LEFT_393, r_PARSE_RELATION());
}
}
RT_B_TICK();
} L_end394: ;
{ R17 * rv396 = l_LEFT_393;
return rv396; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_RELATION(void) { RT_B_TICK(); 
R17 * l_LEFT_397; memset(&l_LEFT_397, 0, sizeof l_LEFT_397);
l_LEFT_397 = r_PARSE_SUM();
for (;;) {
{
{
R10 l_T_399; memset(&l_T_399, 0, sizeof l_T_399);
S_R10(&l_T_399, r_CUR(), 0);
if ((((((r_IS(rt_str("=", 1)) || r_IS(rt_str("<", 1))) || r_IS(rt_str(">", 1))) || r_IS(rt_str("<=", 2))) || r_IS(rt_str(">=", 2))) || r_IS(rt_str("<>", 2))))
{
r_SKIP();
l_LEFT_397 = r_BIN_NODE((l_T_399).f_TX, (l_T_399).f_LINE, l_LEFT_397, r_PARSE_SUM());
}
else if (r_IS(rt_str("IN", 2)))
{
{
R17 * l_N_400; memset(&l_N_400, 0, sizeof l_N_400);
l_N_400 = r_NEW_NODE(g_N_IN, (l_T_399).f_LINE);
r_SKIP();
((*(R17 *)rt_nil_check(l_N_400))).f_A = l_LEFT_397;
((*(R17 *)rt_nil_check(l_N_400))).f_B = r_PARSE_RANGE();
l_LEFT_397 = l_N_400;
}
}
else
{
{ R17 * rv401 = l_LEFT_397;
return rv401; }
}
}
}
RT_B_TICK();
} L_end398: ;
rt_raise(RT_X_INIT);
}
static R17 * r_TRY_SCALED(R17 * p_LEFT, rstr p_OPS) { RT_B_TICK(); 
rt_int l_SAVED_402; memset(&l_SAVED_402, 0, sizeof l_SAVED_402);
l_SAVED_402 = ((*(R7 *)rt_nil_check(g_W))).f_POS;
rt_int l_LINE_403; memset(&l_LINE_403, 0, sizeof l_LINE_403);
l_LINE_403 = r_LINE_NOW();
R17 * l_N_404; memset(&l_N_404, 0, sizeof l_N_404);
if ((!r_IS(rt_str("!", 1))))
{
{ R17 * rv405 = NULL;
return rv405; }
}
{
R10 l_OP_406; memset(&l_OP_406, 0, sizeof l_OP_406);
S_R10(&l_OP_406, r_AHEAD(((rt_int)1LL)), 0);
R9 l_T_407; memset(&l_T_407, 0, sizeof l_T_407);
S_R9(&l_T_407, (l_OP_406).f_TX, 0);
rt_int l_FOUND_408; memset(&l_FOUND_408, 0, sizeof l_FOUND_408);
l_FOUND_408 = 0;
if (((!((l_OP_406).f_KIND == g_K_SYM)) && (!((l_OP_406).f_KIND == g_K_RES))))
{
{ R17 * rv409 = NULL;
return rv409; }
}
{ rt_int it411_lo = ((rt_int)0LL), it411_hi = rt_sub((rt_int)(p_OPS).len, (l_T_407).f_LEN);
for (rt_int it411 = it411_lo; it411 <= it411_hi; it411++) {
{
if (rt_b_eq(rt_b_slice(p_OPS, it411, rt_sub(rt_add(it411, (l_T_407).f_LEN), ((rt_int)1LL))), r_STR(l_T_407, (l_T_407).f_LEN)))
{
if (((((it411 == ((rt_int)0LL)) || rt_b_eq(rt_b_slice(p_OPS, rt_sub(it411, ((rt_int)1LL)), rt_sub(it411, ((rt_int)1LL))), rt_str(" ", 1)))) && (((rt_add(it411, (l_T_407).f_LEN) == (rt_int)(p_OPS).len) || rt_b_eq(rt_b_slice(p_OPS, rt_add(it411, (l_T_407).f_LEN), rt_add(it411, (l_T_407).f_LEN)), rt_str(" ", 1))))))
{
l_FOUND_408 = 1;
}
}
}
RT_B_TICK();
if (it411 == it411_hi) break;
} } L_end410: ;
if ((!l_FOUND_408))
{
{ R17 * rv412 = NULL;
return rv412; }
}
r_SKIP();
r_SKIP();
l_N_404 = r_BIN_NODE(l_T_407, l_LINE_403, p_LEFT, NULL);
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R17 *)rt_nil_check(l_N_404))).f_FL = ((rt_int)2LL);
{ R17 * rv413 = l_N_404;
return rv413; }
}
if (((((r_IS_KIND(g_K_NUM) || r_IS_KIND(g_K_ID)) || r_IS(rt_str("(", 1))) || r_IS(rt_str("-", 1))) || r_IS(rt_str("+", 1))))
{
((*(R17 *)rt_nil_check(l_N_404))).f_D = r_PARSE_SECONDARY();
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R17 *)rt_nil_check(l_N_404))).f_FL = ((rt_int)1LL);
{ R17 * rv414 = l_N_404;
return rv414; }
}
}
((*(R7 *)rt_nil_check(g_W))).f_POS = l_SAVED_402;
{ R17 * rv415 = NULL;
return rv415; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_SUM(void) { RT_B_TICK(); 
R17 * l_LEFT_416; memset(&l_LEFT_416, 0, sizeof l_LEFT_416);
l_LEFT_416 = r_PARSE_TERM();
for (;;) {
{
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("!!", 2))))
{
{
R10 l_T_418; memset(&l_T_418, 0, sizeof l_T_418);
S_R10(&l_T_418, r_CUR(), 0);
r_SKIP();
l_LEFT_416 = r_BIN_NODE((l_T_418).f_TX, (l_T_418).f_LINE, l_LEFT_416, r_PARSE_TERM());
}
}
else
{
{
R17 * l_N_419; memset(&l_N_419, 0, sizeof l_N_419);
l_N_419 = r_TRY_SCALED(l_LEFT_416, rt_str("+ -", 3));
if ((l_N_419 == NULL))
{
{ R17 * rv420 = l_LEFT_416;
return rv420; }
}
((*(R17 *)rt_nil_check(l_N_419))).f_B = r_PARSE_TERM();
l_LEFT_416 = l_N_419;
}
}
}
RT_B_TICK();
} L_end417: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TERM(void) { RT_B_TICK(); 
R17 * l_LEFT_421; memset(&l_LEFT_421, 0, sizeof l_LEFT_421);
l_LEFT_421 = r_PARSE_FACTOR();
for (;;) {
{
if ((((r_IS(rt_str("*", 1)) || r_IS(rt_str("/", 1))) || r_IS(rt_str("//", 2))) || r_IS(rt_str("MOD", 3))))
{
{
R10 l_T_423; memset(&l_T_423, 0, sizeof l_T_423);
S_R10(&l_T_423, r_CUR(), 0);
r_SKIP();
l_LEFT_421 = r_BIN_NODE((l_T_423).f_TX, (l_T_423).f_LINE, l_LEFT_421, r_PARSE_FACTOR());
}
}
else
{
{
R17 * l_N_424; memset(&l_N_424, 0, sizeof l_N_424);
l_N_424 = r_TRY_SCALED(l_LEFT_421, rt_str("* / // MOD", 10));
if ((l_N_424 == NULL))
{
{ R17 * rv425 = l_LEFT_421;
return rv425; }
}
((*(R17 *)rt_nil_check(l_N_424))).f_B = r_PARSE_FACTOR();
l_LEFT_421 = l_N_424;
}
}
}
RT_B_TICK();
} L_end422: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_FACTOR(void) { RT_B_TICK(); 
R17 * l_LEFT_426; memset(&l_LEFT_426, 0, sizeof l_LEFT_426);
l_LEFT_426 = r_PARSE_SECONDARY();
for (;;) {
{
if (r_IS(rt_str("**", 2)))
{
{
R10 l_T_428; memset(&l_T_428, 0, sizeof l_T_428);
S_R10(&l_T_428, r_CUR(), 0);
r_SKIP();
l_LEFT_426 = r_BIN_NODE((l_T_428).f_TX, (l_T_428).f_LINE, l_LEFT_426, r_PARSE_SECONDARY());
}
}
else
{
{
R17 * l_N_429; memset(&l_N_429, 0, sizeof l_N_429);
l_N_429 = r_TRY_SCALED(l_LEFT_426, rt_str("**", 2));
if ((l_N_429 == NULL))
{
{ R17 * rv430 = l_LEFT_426;
return rv430; }
}
((*(R17 *)rt_nil_check(l_N_429))).f_B = r_PARSE_SECONDARY();
l_LEFT_426 = l_N_429;
}
}
}
RT_B_TICK();
} L_end427: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_SECONDARY(void) { RT_B_TICK(); 
R10 l_T_431; memset(&l_T_431, 0, sizeof l_T_431);
S_R10(&l_T_431, r_CUR(), 0);
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("NOT", 3))))
{
{
R17 * l_N_432; memset(&l_N_432, 0, sizeof l_N_432);
l_N_432 = r_NEW_NODE(g_N_UNOP, (l_T_431).f_LINE);
r_SKIP();
S_R9(&((*(R17 *)rt_nil_check(l_N_432))).f_NAME, (l_T_431).f_TX, 0);
((*(R17 *)rt_nil_check(l_N_432))).f_A = r_PARSE_POSTFIX();
{ R17 * rv433 = l_N_432;
return rv433; }
}
}
{ R17 * rv434 = r_PARSE_POSTFIX();
return rv434; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ARGS(R17 * p_N) { RT_B_TICK(); 
R17 * l_HEAD_435; memset(&l_HEAD_435, 0, sizeof l_HEAD_435);
l_HEAD_435 = NULL;
R17 * l_TAIL_436; memset(&l_TAIL_436, 0, sizeof l_TAIL_436);
l_TAIL_436 = NULL;
rt_int l_GROUP_437; memset(&l_GROUP_437, 0, sizeof l_GROUP_437);
l_GROUP_437 = ((rt_int)0LL);
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end438;
{
if (r_ACCEPT(rt_str("#", 1)))
{
switch (l_GROUP_437) {
case 0:
{
((*(R17 *)rt_nil_check(p_N))).f_A = l_HEAD_435;
}
break;
case 1:
{
((*(R17 *)rt_nil_check(p_N))).f_B = l_HEAD_435;
}
break;
default:
{
r_FAIL(((*(R17 *)rt_nil_check(p_N))).f_LINE, rt_str("too many # in an argument list", 30));
}
break;
}
l_GROUP_437 = rt_add(l_GROUP_437, ((rt_int)1LL));
l_HEAD_435 = NULL;
l_TAIL_436 = NULL;
}
else
{
if ((l_GROUP_437 == ((rt_int)0LL)))
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_435, &l_TAIL_436);
if ((r_IS(rt_str("RETURNS", 7)) && (((*(R17 *)rt_nil_check(l_TAIL_436))).f_KIND == g_N_APPLY)))
{
r_SKIP();
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_TAIL_436))).f_E = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
}
else
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_435, &l_TAIL_436);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
RT_B_TICK();
} L_end438: ;
r_EXPECT(rt_str(")", 1));
switch (l_GROUP_437) {
case 0:
{
((*(R17 *)rt_nil_check(p_N))).f_A = l_HEAD_435;
}
break;
case 1:
{
((*(R17 *)rt_nil_check(p_N))).f_B = l_HEAD_435;
}
break;
default:
{
((*(R17 *)rt_nil_check(p_N))).f_C = l_HEAD_435;
}
break;
}
{ R17 * rv439 = p_N;
return rv439; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_POSTFIX(void) { RT_B_TICK(); 
R17 * l_E_440; memset(&l_E_440, 0, sizeof l_E_440);
l_E_440 = r_PARSE_ATOM();
R17 * l_N_441; memset(&l_N_441, 0, sizeof l_N_441);
for (;;) {
{
{
rt_int l_LINE_443; memset(&l_LINE_443, 0, sizeof l_LINE_443);
l_LINE_443 = r_LINE_NOW();
if ((r_IS(rt_str("(", 1)) && (((*(R17 *)rt_nil_check(l_E_440))).f_KIND == g_N_ENUMLIT)))
{
((*(R17 *)rt_nil_check(l_E_440))).f_KIND = g_N_NAME;
}
if ((r_IS(rt_str("(", 1)) && (((*(R17 *)rt_nil_check(l_E_440))).f_KIND == g_N_NAME)))
{
((*(R17 *)rt_nil_check(l_E_440))).f_KIND = g_N_APPLY;
l_E_440 = r_PARSE_ARGS(l_E_440);
}
else if (r_IS(rt_str("(", 1)))
{
l_N_441 = r_NEW_NODE(g_N_INDEX, l_LINE_443);
l_N_441 = r_PARSE_ARGS(l_N_441);
((*(R17 *)rt_nil_check(l_N_441))).f_B = ((*(R17 *)rt_nil_check(l_N_441))).f_A;
((*(R17 *)rt_nil_check(l_N_441))).f_A = l_E_440;
l_E_440 = l_N_441;
}
else if (r_ACCEPT(rt_str(".", 1)))
{
l_N_441 = r_NEW_NODE(g_N_FIELD, l_LINE_443);
((*(R17 *)rt_nil_check(l_N_441))).f_A = l_E_440;
S_R9(&((*(R17 *)rt_nil_check(l_N_441))).f_NAME, r_IDENT(), 0);
l_E_440 = l_N_441;
}
else if (r_ACCEPT(rt_str("@", 1)))
{
l_N_441 = r_NEW_NODE(g_N_DEREF, l_LINE_443);
((*(R17 *)rt_nil_check(l_N_441))).f_A = l_E_440;
l_E_440 = l_N_441;
}
else if ((r_IS(rt_str("[", 1)) && (!r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("]", 1)))))
{
r_SKIP();
l_N_441 = r_NEW_NODE(g_N_SUBSTR, l_LINE_443);
((*(R17 *)rt_nil_check(l_N_441))).f_A = l_E_440;
((*(R17 *)rt_nil_check(l_N_441))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_441))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str("]", 1));
l_E_440 = l_N_441;
}
else
{
{ R17 * rv444 = l_E_440;
return rv444; }
}
}
}
RT_B_TICK();
} L_end442: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_BITS(rt_int p_BITS_PER, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_AT_445; memset(&l_AT_445, 0, sizeof l_AT_445);
l_AT_445 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R17 * l_N_446; memset(&l_N_446, 0, sizeof l_N_446);
l_N_446 = r_NEW_NODE(g_N_BITS, p_LINE);
R9 l_R_447; memset(&l_R_447, 0, sizeof l_R_447);
if ((!r_IS_KIND(g_K_STR)))
{
r_FAIL(p_LINE, rt_str("a quoted bitstring expected", 27));
}
for (;;) {
if ((!r_IS_KIND(g_K_STR))) goto L_end448;
{
{
R9 l_T_449; memset(&l_T_449, 0, sizeof l_T_449);
S_R9(&l_T_449, (r_CUR()).f_TX, 0);
rstr l_S_450; memset(&l_S_450, 0, sizeof l_S_450);
l_S_450 = rt_b_str_new((l_T_449).f_LEN, 0);
rt_b_assign(&l_S_450, r_STR(l_T_449, (l_T_449).f_LEN));
{ rt_int it452_lo = ((rt_int)0LL), it452_hi = rt_sub((l_T_449).f_LEN, ((rt_int)1LL));
for (rt_int it452 = it452_lo; it452 <= it452_hi; it452++) {
{
if ((!rt_b_eq(rt_b_slice(l_S_450, it452, it452), rt_str(" ", 1))))
{
{
rt_int l_C_453; memset(&l_C_453, 0, sizeof l_C_453);
l_C_453 = r_CODE_OF(rt_b_slice(l_S_450, it452, it452));
rt_int l_V_454; memset(&l_V_454, 0, sizeof l_V_454);
l_V_454 = rt_sub(l_C_453, ((rt_int)48LL));
rt_int l_P_455; memset(&l_P_455, 0, sizeof l_P_455);
l_P_455 = ((rt_int)1LL);
if ((l_C_453 >= ((rt_int)65LL)))
{
l_V_454 = rt_sub(l_C_453, ((rt_int)55LL));
}
{ rt_int it457_lo = ((rt_int)1LL), it457_hi = p_BITS_PER;
for (rt_int it457 = it457_lo; it457 <= it457_hi; it457++) {
{
l_P_455 = rt_mul(l_P_455, ((rt_int)2LL));
}
RT_B_TICK();
if (it457 == it457_hi) break;
} } L_end456: ;
if (((l_V_454 < ((rt_int)0LL)) || (l_V_454 >= l_P_455)))
{
r_FAIL(p_LINE, rt_str("a bad digit in a bitstring literal", 34));
}
{ rt_int it459_lo = ((rt_int)1LL), it459_hi = p_BITS_PER;
for (rt_int it459 = it459_lo; it459 <= it459_hi; it459++) {
{
l_P_455 = rt_quot(l_P_455, ((rt_int)2LL));
if ((rt_rem((rt_quot(l_V_454, l_P_455)), ((rt_int)2LL)) == ((rt_int)1LL)))
{
S_R9(&l_R_447, r_MK(rt_str("1", 1)), 0);
}
else
{
S_R9(&l_R_447, r_MK(rt_str("0", 1)), 0);
}
}
RT_B_TICK();
if (it459 == it459_hi) break;
} } L_end458: ;
}
}
}
RT_B_TICK();
if (it452 == it452_hi) break;
} } L_end451: ;
}
r_SKIP();
}
RT_B_TICK();
} L_end448: ;
S_R9(&((*(R17 *)rt_nil_check(l_N_446))).f_NAME, ({ R9 rc460; memset(&rc460, 0, sizeof rc460);  rc460.f_AT = l_AT_445; rc460.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_445); rc460.f_H = rt_neg(((rt_int)1LL)); rc460; }), 0);
{ R17 * rv461 = l_N_446;
return rv461; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ATOM(void) { RT_B_TICK(); 
R10 l_T_462; memset(&l_T_462, 0, sizeof l_T_462);
S_R10(&l_T_462, r_CUR(), 0);
R17 * l_N_463; memset(&l_N_463, 0, sizeof l_N_463);
if (((l_T_462).f_KIND == g_K_NUM))
{
l_N_463 = r_NEW_NODE(g_N_INT, (l_T_462).f_LINE);
((*(R17 *)rt_nil_check(l_N_463))).f_IV = (l_T_462).f_IV;
S_R9(&((*(R17 *)rt_nil_check(l_N_463))).f_NAME, (l_T_462).f_TX, 0);
r_SKIP();
{ R17 * rv464 = l_N_463;
return rv464; }
}
if ((((l_T_462).f_KIND == g_K_REAL) || ((l_T_462).f_KIND == g_K_FIX)))
{
l_N_463 = r_NEW_NODE(g_N_REAL, (l_T_462).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_463))).f_NAME, (l_T_462).f_TX, 0);
if (((l_T_462).f_KIND == g_K_FIX))
{
((*(R17 *)rt_nil_check(l_N_463))).f_FL = ((rt_int)1LL);
((*(R17 *)rt_nil_check(l_N_463))).f_IV = (l_T_462).f_IV;
}
r_SKIP();
{ R17 * rv465 = l_N_463;
return rv465; }
}
if (((l_T_462).f_KIND == g_K_GEN))
{
{ R17 * rv466 = r_PARSE_TYPE_ARG();
return rv466; }
}
if (((r_IS(rt_str("BIN", 3)) || r_IS(rt_str("OCT", 3))) || r_IS(rt_str("HEX", 3))))
{
r_SKIP();
if (r_TOK_IS(l_T_462, rt_str("BIN", 3)))
{
{ R17 * rv467 = r_PARSE_BITS(((rt_int)1LL), (l_T_462).f_LINE);
return rv467; }
}
else if (r_TOK_IS(l_T_462, rt_str("OCT", 3)))
{
{ R17 * rv468 = r_PARSE_BITS(((rt_int)3LL), (l_T_462).f_LINE);
return rv468; }
}
{ R17 * rv469 = r_PARSE_BITS(((rt_int)4LL), (l_T_462).f_LINE);
return rv469; }
}
if ((((l_T_462).f_KIND == g_K_STR) || ((l_T_462).f_KIND == g_K_ENUM)))
{
{ R17 * rv470 = r_PARSE_CHARSTRING(r_NO_TEXT());
return rv470; }
}
if ((((l_T_462).f_KIND == g_K_ID) && ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_STR) || (((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM) && (!r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str("(", 1)))) && (!r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":=", 2)))))))))
{
r_SKIP();
{ R17 * rv471 = r_PARSE_CHARSTRING((l_T_462).f_TX);
return rv471; }
}
if (r_ACCEPT(rt_str("TRUE", 4)))
{
l_N_463 = r_NEW_NODE(g_N_BOOL, (l_T_462).f_LINE);
((*(R17 *)rt_nil_check(l_N_463))).f_IV = ((rt_int)1LL);
{ R17 * rv472 = l_N_463;
return rv472; }
}
else if (r_ACCEPT(rt_str("FALSE", 5)))
{
{ R17 * rv473 = r_NEW_NODE(g_N_BOOL, (l_T_462).f_LINE);
return rv473; }
}
else if (r_ACCEPT(rt_str("NIL", 3)))
{
{ R17 * rv474 = r_NEW_NODE(g_N_NIL, (l_T_462).f_LINE);
return rv474; }
}
else if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R17 * rv475 = r_NEW_NODE(g_N_ANY, (l_T_462).f_LINE);
return rv475; }
}
if (r_ACCEPT(rt_str("[", 1)))
{
{
R17 * l_TS_476; memset(&l_TS_476, 0, sizeof l_TS_476);
l_TS_476 = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str("]", 1));
r_EXPECT(rt_str("$$", 2));
if (((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
l_N_463 = r_PARSE_ATOM();
((*(R17 *)rt_nil_check(l_N_463))).f_B = l_TS_476;
{ R17 * rv477 = l_N_463;
return rv477; }
}
l_N_463 = r_NEW_NODE(g_N_TYPESPEC, (l_T_462).f_LINE);
((*(R17 *)rt_nil_check(l_N_463))).f_A = l_TS_476;
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_N_463))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
{ R17 * rv478 = l_N_463;
return rv478; }
}
}
if (r_IS(rt_str("(", 1)))
{
if ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
{
R17 * l_HEAD_479; memset(&l_HEAD_479, 0, sizeof l_HEAD_479);
l_HEAD_479 = NULL;
R17 * l_TAIL_480; memset(&l_TAIL_480, 0, sizeof l_TAIL_480);
l_TAIL_480 = NULL;
r_SKIP();
for (;;) {
{
l_N_463 = r_NEW_NODE(g_N_FINIT, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_N_463))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_463))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_N_463, &l_HEAD_479, &l_TAIL_480);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end481;
} L_end481: ;
r_EXPECT(rt_str(")", 1));
l_N_463 = r_NEW_NODE(g_N_RECCONS, (l_T_462).f_LINE);
((*(R17 *)rt_nil_check(l_N_463))).f_A = l_HEAD_479;
{ R17 * rv482 = l_N_463;
return rv482; }
}
}
r_SKIP();
{
R17 * l_E_483; memset(&l_E_483, 0, sizeof l_E_483);
l_E_483 = r_PARSE_EXPR();
if (r_IS(rt_str(",", 1)))
{
{
R17 * l_HEAD_484; memset(&l_HEAD_484, 0, sizeof l_HEAD_484);
l_HEAD_484 = NULL;
R17 * l_TAIL_485; memset(&l_TAIL_485, 0, sizeof l_TAIL_485);
l_TAIL_485 = NULL;
r_ADD_LIST(l_E_483, &l_HEAD_484, &l_TAIL_485);
for (;;) {
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end486;
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_484, &l_TAIL_485);
}
RT_B_TICK();
} L_end486: ;
r_EXPECT(rt_str(")", 1));
l_N_463 = r_NEW_NODE(g_N_ARRCONS, (l_T_462).f_LINE);
((*(R17 *)rt_nil_check(l_N_463))).f_A = l_HEAD_484;
{ R17 * rv487 = l_N_463;
return rv487; }
}
}
r_EXPECT(rt_str(")", 1));
l_N_463 = r_NEW_NODE(g_N_PAREN, (l_T_462).f_LINE);
((*(R17 *)rt_nil_check(l_N_463))).f_A = l_E_483;
{ R17 * rv488 = l_N_463;
return rv488; }
}
}
if (((l_T_462).f_KIND == g_K_ID))
{
l_N_463 = r_NEW_NODE(g_N_NAME, (l_T_462).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_463))).f_NAME, ((*(R17 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (((((r_TEQS(((*(R17 *)rt_nil_check(l_N_463))).f_NAME, rt_str("NEW", 3)) || r_TEQS(((*(R17 *)rt_nil_check(l_N_463))).f_NAME, rt_str("PTR$NEW", 7))) || r_TEQS(((*(R17 *)rt_nil_check(l_N_463))).f_NAME, rt_str("SEMAPHORE$NEW", 13)))) && r_IS(rt_str("(", 1))))
{
((*(R17 *)rt_nil_check(l_N_463))).f_KIND = g_N_NEW;
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_N_463))).f_A = r_PARSE_TYPE_ARG();
r_EXPECT(rt_str(")", 1));
}
{ R17 * rv489 = l_N_463;
return rv489; }
}
r_FAILT((l_T_462).f_LINE, rt_str("an expression expected, not ", 28), (l_T_462).f_TX);
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CHARSTRING(R9 p_CHARSET) { RT_B_TICK(); 
rt_int l_LINE_490; memset(&l_LINE_490, 0, sizeof l_LINE_490);
l_LINE_490 = r_LINE_NOW();
R17 * l_HEAD_491; memset(&l_HEAD_491, 0, sizeof l_HEAD_491);
l_HEAD_491 = NULL;
R17 * l_TAIL_492; memset(&l_TAIL_492, 0, sizeof l_TAIL_492);
l_TAIL_492 = NULL;
rt_int l_STRINGS_493; memset(&l_STRINGS_493, 0, sizeof l_STRINGS_493);
l_STRINGS_493 = ((rt_int)0LL);
R17 * l_N_494; memset(&l_N_494, 0, sizeof l_N_494);
for (;;) {
if ((!((r_IS_KIND(g_K_STR) || r_IS_KIND(g_K_ENUM))))) goto L_end495;
{
l_N_494 = r_NEW_NODE(g_N_PART, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_N_494))).f_IV = (r_CUR()).f_KIND;
S_R9(&((*(R17 *)rt_nil_check(l_N_494))).f_NAME, (r_CUR()).f_TX, 0);
if ((((*(R17 *)rt_nil_check(l_N_494))).f_IV == g_K_STR))
{
l_STRINGS_493 = rt_add(l_STRINGS_493, ((rt_int)1LL));
}
r_SKIP();
r_ADD_LIST(l_N_494, &l_HEAD_491, &l_TAIL_492);
}
RT_B_TICK();
} L_end495: ;
if ((((l_STRINGS_493 == ((rt_int)0LL)) && ((p_CHARSET).f_LEN == ((rt_int)0LL))) && (((*(R17 *)rt_nil_check(l_HEAD_491))).f_NEXT == NULL)))
{
((*(R17 *)rt_nil_check(l_HEAD_491))).f_KIND = g_N_ENUMLIT;
{ R17 * rv496 = l_HEAD_491;
return rv496; }
}
l_N_494 = r_NEW_NODE(g_N_STR, l_LINE_490);
((*(R17 *)rt_nil_check(l_N_494))).f_A = l_HEAD_491;
S_R9(&((*(R17 *)rt_nil_check(l_N_494))).f_NAME, p_CHARSET, 0);
{ R17 * rv497 = l_N_494;
return rv497; }
rt_raise(RT_X_INIT);
}
static rt_int r_AT_BODY_END(void) { RT_B_TICK(); 
{ rt_int rv498 = ((((((((((r_IS_KIND(g_K_EOF) || r_IS(rt_str("END", 3))) || r_IS(rt_str("ELSE", 4))) || r_IS(rt_str("ORIF", 4))) || r_IS(rt_str("EXCEPT", 6))) || r_IS(rt_str("PROCEDURE", 9))) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()) || r_IS(rt_str("MODULE", 6))) || r_IS(rt_str("PATH", 4)));
return rv498; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_STATEMENTS(void) { RT_B_TICK(); 
R17 * l_HEAD_499; memset(&l_HEAD_499, 0, sizeof l_HEAD_499);
l_HEAD_499 = NULL;
R17 * l_TAIL_500; memset(&l_TAIL_500, 0, sizeof l_TAIL_500);
l_TAIL_500 = NULL;
for (;;) {
if (r_AT_BODY_END()) goto L_end501;
{
r_ADD_LIST(r_PARSE_STATEMENT(), &l_HEAD_499, &l_TAIL_500);
}
RT_B_TICK();
} L_end501: ;
{ R17 * rv502 = l_HEAD_499;
return rv502; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_HANDLERS(void) { RT_B_TICK(); 
R17 * l_HEAD_503; memset(&l_HEAD_503, 0, sizeof l_HEAD_503);
l_HEAD_503 = NULL;
R17 * l_TAIL_504; memset(&l_TAIL_504, 0, sizeof l_TAIL_504);
l_TAIL_504 = NULL;
r_EXPECT(rt_str("EXCEPT", 6));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end505;
{
{
R17 * l_H_506; memset(&l_H_506, 0, sizeof l_H_506);
l_H_506 = r_NEW_NODE(g_N_HANDLER, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_H_506))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_H_506))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_H_506, &l_HEAD_503, &l_TAIL_504);
}
}
RT_B_TICK();
} L_end505: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("EXCEPT", 6));
r_EXPECT(rt_str(";", 1));
{ R17 * rv507 = l_HEAD_503;
return rv507; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_STATEMENT(void) { RT_B_TICK(); 
R17 * l_S_508; memset(&l_S_508, 0, sizeof l_S_508);
if ((r_IS_KIND(g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str(":", 1))))
{
l_S_508 = r_NEW_NODE(g_N_LABELED, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_S_508))).f_NAME, r_IDENT(), 0);
r_SKIP();
((*(R17 *)rt_nil_check(l_S_508))).f_A = r_PARSE_STATEMENT();
{ R17 * rv509 = l_S_508;
return rv509; }
}
l_S_508 = r_PARSE_UNLABELED();
if (r_IS(rt_str("EXCEPT", 6)))
{
{
R17 * l_X_510; memset(&l_X_510, 0, sizeof l_X_510);
l_X_510 = r_NEW_NODE(g_N_EXCEPT, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_X_510))).f_A = l_S_508;
((*(R17 *)rt_nil_check(l_X_510))).f_B = r_PARSE_HANDLERS();
{ R17 * rv511 = l_X_510;
return rv511; }
}
}
{ R17 * rv512 = l_S_508;
return rv512; }
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
rt_int l_LINE_513; memset(&l_LINE_513, 0, sizeof l_LINE_513);
l_LINE_513 = r_LINE_NOW();
R17 * l_S_514; memset(&l_S_514, 0, sizeof l_S_514);
R17 * l_T_515; memset(&l_T_515, 0, sizeof l_T_515);
if (r_ACCEPT(rt_str(";", 1)))
{
{ R17 * rv516 = r_NEW_NODE(g_N_NULL, l_LINE_513);
return rv516; }
}
else if (r_IS(rt_str("IF", 2)))
{
{ R17 * rv517 = r_PARSE_IF();
return rv517; }
}
else if (r_IS(rt_str("SELECT", 6)))
{
{ R17 * rv518 = r_PARSE_CASE();
return rv518; }
}
else if (r_IS(rt_str("LOOP", 4)))
{
{ R17 * rv519 = r_PARSE_LOOP();
return rv519; }
}
else if (r_IS(rt_str("PAR_BLOCK", 9)))
{
{ R17 * rv520 = r_PARSE_PAR();
return rv520; }
}
else if (r_ACCEPT(rt_str("BLOCK", 5)))
{
l_S_514 = r_NEW_NODE(g_N_BLOCK, l_LINE_513);
((*(R17 *)rt_nil_check(l_S_514))).f_A = r_PARSE_BODY();
r_EXPECT_END(rt_str("BLOCK", 5));
{ R17 * rv521 = l_S_514;
return rv521; }
}
else if (r_ACCEPT(rt_str("WITH", 4)))
{
l_S_514 = r_NEW_NODE(g_N_WITH, l_LINE_513);
S_R9(&((*(R17 *)rt_nil_check(l_S_514))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("NAMING", 6)))
{
((*(R17 *)rt_nil_check(l_S_514))).f_IV = ((rt_int)1LL);
((*(R17 *)rt_nil_check(l_S_514))).f_A = r_PARSE_POSTFIX();
}
else
{
r_EXPECT(rt_str(":=", 2));
((*(R17 *)rt_nil_check(l_S_514))).f_A = r_PARSE_EXPR();
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
((*(R17 *)rt_nil_check(l_S_514))).f_B = r_PARSE_UNLABELED();
{ R17 * rv522 = l_S_514;
return rv522; }
}
else if (r_ACCEPT(rt_str("EXIT", 4)))
{
r_EXPECT(rt_str(";", 1));
{ R17 * rv523 = r_NEW_NODE(g_N_EXIT, l_LINE_513);
return rv523; }
}
else if (r_ACCEPT(rt_str("GO", 2)))
{
r_EXPECT(rt_str("TO", 2));
l_S_514 = r_NEW_NODE(g_N_GOTO, l_LINE_513);
S_R9(&((*(R17 *)rt_nil_check(l_S_514))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(";", 1));
{ R17 * rv524 = l_S_514;
return rv524; }
}
else if (r_ACCEPT(rt_str("RETURN", 6)))
{
l_S_514 = r_NEW_NODE(g_N_RETURN, l_LINE_513);
if ((!r_IS(rt_str(";", 1))))
{
((*(R17 *)rt_nil_check(l_S_514))).f_A = r_PARSE_EXPR();
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv525 = l_S_514;
return rv525; }
}
else if (r_ACCEPT(rt_str("SIGNAL", 6)))
{
l_S_514 = r_NEW_NODE(g_N_SIGNAL, l_LINE_513);
if (r_IS_KIND(g_K_ID))
{
S_R9(&((*(R17 *)rt_nil_check(l_S_514))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv526 = l_S_514;
return rv526; }
}
else if (r_ACCEPT(rt_str("ASSERT", 6)))
{
l_S_514 = r_NEW_NODE(g_N_ASSERT, l_LINE_513);
((*(R17 *)rt_nil_check(l_S_514))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R17 * rv527 = l_S_514;
return rv527; }
}
else if (r_ACCEPT(rt_str("TERMINATE", 9)))
{
l_S_514 = r_NEW_NODE(g_N_TERMINATE, l_LINE_513);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_S_514))).f_A = r_PARSE_POSTFIX();
r_EXPECT(rt_str(")", 1));
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv528 = l_S_514;
return rv528; }
}
l_T_515 = r_PARSE_POSTFIX();
if (r_IS(rt_str("[", 1)))
{
r_FAIL(l_LINE_513, rt_str("a substring of a substring", 26));
}
if (r_ACCEPT(rt_str(":=", 2)))
{
l_S_514 = r_NEW_NODE(g_N_ASSIGN, l_LINE_513);
((*(R17 *)rt_nil_check(l_S_514))).f_A = l_T_515;
((*(R17 *)rt_nil_check(l_S_514))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R17 * rv529 = l_S_514;
return rv529; }
}
r_EXPECT(rt_str(";", 1));
if ((((((*(R17 *)rt_nil_check(l_T_515))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_T_515))).f_KIND == g_N_APPLY)) || (((*(R17 *)rt_nil_check(l_T_515))).f_KIND == g_N_ENUMLIT)))
{
((*(R17 *)rt_nil_check(l_T_515))).f_KIND = g_N_CALL;
}
else
{
r_FAIL(l_LINE_513, rt_str("a statement expected", 20));
}
{ R17 * rv530 = l_T_515;
return rv530; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_IF(void) { RT_B_TICK(); 
R17 * l_S_531; memset(&l_S_531, 0, sizeof l_S_531);
l_S_531 = r_NEW_NODE(g_N_IF, r_LINE_NOW());
R17 * l_HEAD_532; memset(&l_HEAD_532, 0, sizeof l_HEAD_532);
l_HEAD_532 = NULL;
R17 * l_TAIL_533; memset(&l_TAIL_533, 0, sizeof l_TAIL_533);
l_TAIL_533 = NULL;
r_EXPECT(rt_str("IF", 2));
for (;;) {
{
{
R17 * l_ARM_535; memset(&l_ARM_535, 0, sizeof l_ARM_535);
l_ARM_535 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_ARM_535))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("THEN", 4));
((*(R17 *)rt_nil_check(l_ARM_535))).f_B = r_PARSE_BODY();
r_ADD_LIST(l_ARM_535, &l_HEAD_532, &l_TAIL_533);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str("ORIF", 4)))) goto L_end534;
} L_end534: ;
((*(R17 *)rt_nil_check(l_S_531))).f_A = l_HEAD_532;
if (r_ACCEPT(rt_str("ELSE", 4)))
{
((*(R17 *)rt_nil_check(l_S_531))).f_B = r_PARSE_BODY();
}
r_EXPECT_END(rt_str("IF", 2));
{ R17 * rv536 = l_S_531;
return rv536; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CASE_LABEL(void) { RT_B_TICK(); 
if ((r_IS(rt_str("[", 1)) || ((r_IS(rt_str("(", 1)) && r_RANGE_AHEAD()))))
{
{ R17 * rv537 = r_PARSE_RANGE();
return rv537; }
}
{ R17 * rv538 = r_PARSE_EXPR();
return rv538; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CASE(void) { RT_B_TICK(); 
R17 * l_S_539; memset(&l_S_539, 0, sizeof l_S_539);
l_S_539 = r_NEW_NODE(g_N_CASE, r_LINE_NOW());
R17 * l_HEAD_540; memset(&l_HEAD_540, 0, sizeof l_HEAD_540);
l_HEAD_540 = NULL;
R17 * l_TAIL_541; memset(&l_TAIL_541, 0, sizeof l_TAIL_541);
l_TAIL_541 = NULL;
r_EXPECT(rt_str("SELECT", 6));
((*(R17 *)rt_nil_check(l_S_539))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end542;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_S_539))).f_C = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R17 *)rt_nil_check(l_S_539))).f_D = r_PARSE_HANDLERS();
}
}
else
{
{
R17 * l_ARM_543; memset(&l_ARM_543, 0, sizeof l_ARM_543);
l_ARM_543 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
R17 * l_LH_544; memset(&l_LH_544, 0, sizeof l_LH_544);
l_LH_544 = NULL;
R17 * l_LT_545; memset(&l_LT_545, 0, sizeof l_LT_545);
l_LT_545 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_544, &l_LT_545);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end546;
} L_end546: ;
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_ARM_543))).f_A = l_LH_544;
((*(R17 *)rt_nil_check(l_ARM_543))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R17 *)rt_nil_check(l_ARM_543))).f_C = r_PARSE_HANDLERS();
}
r_ADD_LIST(l_ARM_543, &l_HEAD_540, &l_TAIL_541);
}
}
}
RT_B_TICK();
} L_end542: ;
((*(R17 *)rt_nil_check(l_S_539))).f_B = l_HEAD_540;
r_EXPECT_END(rt_str("SELECT", 6));
{ R17 * rv547 = l_S_539;
return rv547; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_LOOP(void) { RT_B_TICK(); 
R17 * l_S_548; memset(&l_S_548, 0, sizeof l_S_548);
l_S_548 = r_NEW_NODE(g_N_LOOP, r_LINE_NOW());
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("FOR", 3)))
{
((*(R17 *)rt_nil_check(l_S_548))).f_KIND = g_N_FOR;
if (r_IS_KIND(g_K_ID))
{
S_R9(&((*(R17 *)rt_nil_check(l_S_548))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("IN", 2));
}
((*(R17 *)rt_nil_check(l_S_548))).f_A = r_PARSE_RANGE();
r_EXPECT(rt_str("DO", 2));
((*(R17 *)rt_nil_check(l_S_548))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_IS_KIND(g_K_ID))
{
if ((!r_TEQ(r_IDENT(), ((*(R17 *)rt_nil_check(l_S_548))).f_NAME)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier", 38));
}
}
else if (((((*(R17 *)rt_nil_check(l_S_548))).f_NAME).f_LEN > ((rt_int)0LL)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier (4.5.6.3)", 48));
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R17 * rv549 = l_S_548;
return rv549; }
}
if (r_ACCEPT(rt_str("UNTIL", 5)))
{
((*(R17 *)rt_nil_check(l_S_548))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("DO", 2));
}
((*(R17 *)rt_nil_check(l_S_548))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("WHEN", 4)))
{
if ((!(((*(R17 *)rt_nil_check(l_S_548))).f_A == NULL)))
{
r_FAIL(r_LINE_NOW(), rt_str("only one of UNTIL and WHEN (4.5.6.1)", 36));
}
((*(R17 *)rt_nil_check(l_S_548))).f_C = r_PARSE_EXPR();
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R17 * rv550 = l_S_548;
return rv550; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_PAR(void) { RT_B_TICK(); 
R17 * l_S_551; memset(&l_S_551, 0, sizeof l_S_551);
l_S_551 = r_NEW_NODE(g_N_PAR, r_LINE_NOW());
R17 * l_HEAD_552; memset(&l_HEAD_552, 0, sizeof l_HEAD_552);
l_HEAD_552 = NULL;
R17 * l_TAIL_553; memset(&l_TAIL_553, 0, sizeof l_TAIL_553);
l_TAIL_553 = NULL;
r_EXPECT(rt_str("PAR_BLOCK", 9));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end554;
{
{
R17 * l_P_555; memset(&l_P_555, 0, sizeof l_P_555);
l_P_555 = r_NEW_NODE(g_N_PATH, r_LINE_NOW());
R17 * l_H_556; memset(&l_H_556, 0, sizeof l_H_556);
l_H_556 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
r_EXPECT(rt_str("PATH", 4));
S_R9(&((*(R17 *)rt_nil_check(l_P_555))).f_NAME, r_IDENT(), 0);
((*(R17 *)rt_nil_check(l_P_555))).f_E = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_P_555))).f_LINE);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_555))).f_E))).f_A = l_H_556;
if (r_ACCEPT(rt_str("FOR", 3)))
{
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_555))).f_E))).f_NAME, r_IDENT(), 0);
((*(R17 *)rt_nil_check(l_P_555))).f_FL = ((rt_int)1LL);
r_EXPECT(rt_str("IN", 2));
((*(R17 *)rt_nil_check(l_P_555))).f_A = r_PARSE_RANGE();
}
for (;;) {
{
if (r_ACCEPT(rt_str("PRIORITY", 8)))
{
((*(R17 *)rt_nil_check(l_P_555))).f_C = r_PARSE_EXPR();
}
else if (r_ACCEPT(rt_str("CONNECT", 7)))
{
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_P_555))).f_D = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R17 *)rt_nil_check(l_H_556))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R17 *)rt_nil_check(l_H_556))).f_B = r_PARSE_ITEMS();
}
else
{
goto L_end557;
}
}
RT_B_TICK();
} L_end557: ;
if ((!(((*(R17 *)rt_nil_check(l_P_555))).f_D == NULL)))
{
r_CONNECT_KNOWN(((*(R17 *)rt_nil_check(l_P_555))).f_D, l_H_556);
}
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_P_555))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PATH", 4));
r_EXPECT_NAME(((*(R17 *)rt_nil_check(l_P_555))).f_NAME);
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_P_555, &l_HEAD_552, &l_TAIL_553);
}
}
RT_B_TICK();
} L_end554: ;
((*(R17 *)rt_nil_check(l_S_551))).f_A = l_HEAD_552;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PAR_BLOCK", 9));
r_EXPECT(rt_str(";", 1));
{ R17 * rv558 = l_S_551;
return rv558; }
rt_raise(RT_X_INIT);
}
static void r_CONNECT_KNOWN(R17 * p_E, R17 * p_H) { RT_B_TICK(); 
R17 * l_R_559; memset(&l_R_559, 0, sizeof l_R_559);
l_R_559 = p_E;
for (;;) {
if (((((*(R17 *)rt_nil_check(l_R_559))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_559))).f_KIND == g_N_APPLY))) goto L_end560;
{
if (((!(((*(R17 *)rt_nil_check(l_R_559))).f_KIND == g_N_INDEX)) && (!(((*(R17 *)rt_nil_check(l_R_559))).f_KIND == g_N_FIELD))))
{
return;
}
l_R_559 = ((*(R17 *)rt_nil_check(l_R_559))).f_A;
}
RT_B_TICK();
} L_end560: ;
if ((((*(R17 *)rt_nil_check(p_H))).f_B == NULL))
{
((*(R17 *)rt_nil_check(p_H))).f_B = r_NEW_NODE(g_N_ITEMS, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
{
R17 * l_P_561; memset(&l_P_561, 0, sizeof l_P_561);
l_P_561 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_H))).f_B))).f_A;
for (;;) {
if ((l_P_561 == NULL)) goto L_end562;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_561))).f_NAME, ((*(R17 *)rt_nil_check(l_R_559))).f_NAME))
{
return;
}
l_P_561 = ((*(R17 *)rt_nil_check(l_P_561))).f_NEXT;
}
RT_B_TICK();
} L_end562: ;
l_P_561 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_H))).f_B))).f_B;
for (;;) {
if ((l_P_561 == NULL)) goto L_end563;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_561))).f_NAME, ((*(R17 *)rt_nil_check(l_R_559))).f_NAME))
{
return;
}
l_P_561 = ((*(R17 *)rt_nil_check(l_P_561))).f_NEXT;
}
RT_B_TICK();
} L_end563: ;
}
{
R17 * l_N_564; memset(&l_N_564, 0, sizeof l_N_564);
l_N_564 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_564))).f_NAME, ((*(R17 *)rt_nil_check(l_R_559))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_564))).f_NEXT = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_H))).f_B))).f_B;
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_H))).f_B))).f_B = l_N_564;
}
}
static R9 r_NO_TEXT(void) { RT_B_TICK(); 
{ R9 rv565 = ({ R9 rc566; memset(&rc566, 0, sizeof rc566);  rc566.f_AT = ((rt_int)0LL); rc566.f_LEN = ((rt_int)0LL); rc566.f_H = ((rt_int)0LL); rc566; });
return rv565; }
rt_raise(RT_X_INIT);
}
static R23 r_NO_MVAL(void) { RT_B_TICK(); 
{ R23 rv567 = ({ R23 rc568; memset(&rc568, 0, sizeof rc568);  rc568.f_OK = 0; rc568.f_V = ((rt_int)0LL); rc568; });
return rv567; }
rt_raise(RT_X_INIT);
}
static R23 r_SOME(rt_int p_V) { RT_B_TICK(); 
{ R23 rv569 = ({ R23 rc570; memset(&rc570, 0, sizeof rc570);  rc570.f_OK = 1; rc570.f_V = p_V; rc570; });
return rv569; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_SYM(rt_int p_KIND, R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_571; memset(&l_Y_571, 0, sizeof l_Y_571);
l_Y_571 = ((R12 *)rt_b_new(sizeof (R12)));
rt_int l_LEVEL_572; memset(&l_LEVEL_572, 0, sizeof l_LEVEL_572);
l_LEVEL_572 = ((rt_int)0LL);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_CS == NULL)))
{
l_LEVEL_572 = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
}
S_R12(&(*(R12 *)rt_nil_check(l_Y_571)), ({ R12 rc573; memset(&rc573, 0, sizeof rc573);  rc573.f_KIND = p_KIND; rc573.f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH; rc573.f_LEVEL = l_LEVEL_572; S_R9(&rc573.f_NAME, p_NAME, 0); rc573.f_T = NULL; S_R9(&rc573.f_ACCESS, r_NO_TEXT(), 0); S_R9(&rc573.f_FIELD, r_NO_TEXT(), 0); rc573.f_INPUT = 0; rc573.f_BYREF = 0; rc573.f_HASMV = 0; rc573.f_MV = ((rt_int)0LL); rc573.f_TS = NULL; rc573.f_BUSY = 0; S_R9(&rc573.f_FWD, r_NO_TEXT(), 0); rc573.f_PARAMS = NULL; rc573.f_RESULT = NULL; rc573.f_DECL = NULL; S_R9(&rc573.f_PREFIX, r_NO_TEXT(), 0); rc573.f_MODL = ((*(R7 *)rt_nil_check(g_W))).f_MODL; rc573.f_EXPORTED = 0; rc573.f_GENERIC = 0; rc573.f_FRAMED = 0; rc573.f_USES = NULL; rc573.f_INSTANCES = NULL; rc573.f_BINDINGS = NULL; rc573.f_ORIG = NULL; rc573.f_MEMBERS = NULL; rc573.f_SAVED = NULL; rc573.f_OWNER = r_CUR_OWNER(); rc573.f_WITHV = ((rt_int)0LL); rc573.f_LAZY = ((rt_int)0LL); rc573.f_LINKAGE = ((rt_int)0LL); rc573.f_SEGM = NULL; rc573.f_HOME = ((*(R7 *)rt_nil_check(g_W))).f_TRSEG; rc573.f_CHAIN = NULL; rc573.f_SNEXT = NULL; rc573; }), 0);
{ R12 * rv574 = l_Y_571;
return rv574; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_OWNER(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_IS == NULL))
{
{ rt_int rv575 = ((rt_int)0LL);
return rv575; }
}
{ rt_int rv576 = ((*(R20 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_ID;
return rv576; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIGINAL(R12 * p_Y) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)))
{
{ R12 * rv577 = ((*(R12 *)rt_nil_check(p_Y))).f_ORIG;
return rv577; }
}
{ R12 * rv578 = p_Y;
return rv578; }
rt_raise(RT_X_INIT);
}
static rt_int r_BUCKET(R9 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_H < ((rt_int)0LL)))
{
{ rt_int rv579 = r_HASH_OF(r_STR(p_NAME, (p_NAME).f_LEN));
return rv579; }
}
{ rt_int rv580 = (p_NAME).f_H;
return rv580; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_581; memset(&l_Y_581, 0, sizeof l_Y_581);
l_Y_581 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(r_BUCKET(p_NAME), (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
for (;;) {
if ((l_Y_581 == NULL)) goto L_end582;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_581))).f_NAME, p_NAME))
{
{ R12 * rv583 = l_Y_581;
return rv583; }
}
l_Y_581 = ((*(R12 *)rt_nil_check(l_Y_581))).f_CHAIN;
}
RT_B_TICK();
} L_end582: ;
{ R12 * rv584 = NULL;
return rv584; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_585; memset(&l_Y_585, 0, sizeof l_Y_585);
l_Y_585 = r_LOOKUP(p_NAME);
if ((l_Y_585 == NULL))
{
{ R12 * rv586 = NULL;
return rv586; }
}
{ R12 * rv587 = r_ORIGINAL(l_Y_585);
return rv587; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUPS(rstr p_NAME) { RT_B_TICK(); 
{ R12 * rv588 = r_LOOKUP(r_MKN(p_NAME));
return rv588; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP_NEXT(R12 * p_Y) { RT_B_TICK(); 
R12 * l_Z_589; memset(&l_Z_589, 0, sizeof l_Z_589);
l_Z_589 = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
for (;;) {
if ((l_Z_589 == NULL)) goto L_end590;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Z_589))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ R12 * rv591 = l_Z_589;
return rv591; }
}
l_Z_589 = ((*(R12 *)rt_nil_check(l_Z_589))).f_CHAIN;
}
RT_B_TICK();
} L_end590: ;
{ R12 * rv592 = NULL;
return rv592; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUTINE(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv593 = ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_BUILTIN));
return rv593; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_B_594; memset(&l_B_594, 0, sizeof l_B_594);
l_B_594 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_OLD_595; memset(&l_OLD_595, 0, sizeof l_OLD_595);
l_OLD_595 = r_LOOKUP(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
for (;;) {
if ((l_OLD_595 == NULL)) goto L_end596;
{
if ((!(((*(R12 *)rt_nil_check(l_OLD_595))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
goto L_end596;
}
if ((!((((r_IS_ROUTINE(l_OLD_595) && r_IS_ROUTINE(p_Y))) || (((((*(R12 *)rt_nil_check(l_OLD_595))).f_KIND == g_Y_ENUMLIT) && (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)))))))
{
r_FAILT(p_LINE, rt_str("redeclared in the same scope: ", 30), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
}
l_OLD_595 = r_LOOKUP_NEXT(l_OLD_595);
}
RT_B_TICK();
} L_end596: ;
((*(R12 *)rt_nil_check(p_Y))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_Y))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_594, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_594, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_Y;
((*(R12 *)rt_nil_check(p_Y))).f_SNEXT = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = p_Y;
}
static void r_OPEN_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_add(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
}
static void r_CLOSE_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == NULL)) goto L_end597;
{
if ((((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH <= ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end597;
}
r_UNLINK(((*(R7 *)rt_nil_check(g_W))).f_SCOPE);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_SNEXT;
}
RT_B_TICK();
} L_end597: ;
}
static void r_UNLINK(R12 * p_Y) { RT_B_TICK(); 
rt_int l_B_598; memset(&l_B_598, 0, sizeof l_B_598);
l_B_598 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_P_599; memset(&l_P_599, 0, sizeof l_P_599);
l_P_599 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_598, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
if ((l_P_599 == p_Y))
{
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_598, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
for (;;) {
if ((l_P_599 == NULL)) goto L_end600;
{
if ((((*(R12 *)rt_nil_check(l_P_599))).f_CHAIN == p_Y))
{
((*(R12 *)rt_nil_check(l_P_599))).f_CHAIN = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
l_P_599 = ((*(R12 *)rt_nil_check(l_P_599))).f_CHAIN;
}
RT_B_TICK();
} L_end600: ;
}
static R12 * r_TAKE_SCOPE(R12 * p_MARK) { RT_B_TICK(); 
R12 * l_HEAD_601; memset(&l_HEAD_601, 0, sizeof l_HEAD_601);
l_HEAD_601 = NULL;
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == p_MARK)) goto L_end602;
{
{
R12 * l_Y_603; memset(&l_Y_603, 0, sizeof l_Y_603);
l_Y_603 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_UNLINK(l_Y_603);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(l_Y_603))).f_SNEXT;
((*(R12 *)rt_nil_check(l_Y_603))).f_SNEXT = l_HEAD_601;
l_HEAD_601 = l_Y_603;
}
}
RT_B_TICK();
} L_end602: ;
{ R12 * rv604 = l_HEAD_601;
return rv604; }
rt_raise(RT_X_INIT);
}
static R22 * r_NEW_TYP(rt_int p_KIND) { RT_B_TICK(); 
R22 * l_T_605; memset(&l_T_605, 0, sizeof l_T_605);
l_T_605 = ((R22 *)rt_b_new(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_T_605)), ({ R22 rc606; memset(&rc606, 0, sizeof rc606);  rc606.f_KIND = p_KIND; rc606.f_SCALE = ((rt_int)0LL); S_R9(&rc606.f_LO_C, r_NO_TEXT(), 0); S_R9(&rc606.f_HI_C, r_NO_TEXT(), 0); S_R23(&rc606.f_MLO, r_NO_MVAL(), 0); S_R23(&rc606.f_MHI, r_NO_MVAL(), 0); rc606.f_RLEVEL = ((rt_int)0LL); S_R9(&rc606.f_LEN_C, r_NO_TEXT(), 0); S_R23(&rc606.f_MLEN, r_NO_MVAL(), 0); S_R9(&rc606.f_GEN, r_NO_TEXT(), 0); rc606.f_BASE = NULL; rc606.f_ELEM = NULL; rc606.f_TARGET = NULL; rc606.f_TARGET_TS = NULL; rc606.f_FIELDS = NULL; rc606.f_LITS = NULL; rc606.f_NLITS = ((rt_int)0LL); rc606.f_UNORDERED = 0; rc606.f_BOUNDS = NULL; rc606.f_DIMS = ((rt_int)0LL); rc606.f_ARGS = NULL; S_R9(&rc606.f_NAME, r_NO_TEXT(), 0); S_R9(&rc606.f_CNAME, r_NO_TEXT(), 0); rc606.f_MODL = NULL; rc606.f_REPS = NULL; rc606.f_DECL = NULL; S_R9(&rc606.f_GENP, r_NO_TEXT(), 0); rc606; }), 0);
{ R22 * rv607 = l_T_605;
return rv607; }
rt_raise(RT_X_INIT);
}
static R22 * r_COPY_TYP(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_608; memset(&l_C_608, 0, sizeof l_C_608);
l_C_608 = ((R22 *)rt_b_new(sizeof (R22)));
S_R22(&(*(R22 *)rt_nil_check(l_C_608)), (*(R22 *)rt_nil_check(p_T)), 0);
{ R22 * rv609 = l_C_608;
return rv609; }
rt_raise(RT_X_INIT);
}
static void r_PREDEF_TYPE(rstr p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_610; memset(&l_Y_610, 0, sizeof l_Y_610);
l_Y_610 = r_NEW_SYM(g_Y_TYPE, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_610))).f_T = p_T;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_610))).f_NAME, 0);
}
r_DEFINE(l_Y_610, ((rt_int)0LL));
}
static void r_PREDEF_BUILTIN(rstr p_NAME) { RT_B_TICK(); 
r_DEFINE(r_NEW_SYM(g_Y_BUILTIN, r_MKN(p_NAME)), ((rt_int)0LL));
}
static void r_PREDEF_CONST(rstr p_NAME, R22 * p_T, rt_int p_V) { RT_B_TICK(); 
R12 * l_Y_611; memset(&l_Y_611, 0, sizeof l_Y_611);
l_Y_611 = r_NEW_SYM(g_Y_CONST, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_611))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_611))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_611))).f_MV = p_V;
((*(R12 *)rt_nil_check(l_Y_611))).f_INPUT = 1;
S_R9(&((*(R12 *)rt_nil_check(l_Y_611))).f_ACCESS, r_FMT1(rt_str("((rt_int)@)", 11), r_NUM(p_V)), 0);
r_DEFINE(l_Y_611, ((rt_int)0LL));
}
static R22 * r_PREDEF_ENUM(rstr p_NAME, rstr p_NAMES, rt_int p_UNORDERED) { RT_B_TICK(); 
R17 * l_HEAD_612; memset(&l_HEAD_612, 0, sizeof l_HEAD_612);
l_HEAD_612 = NULL;
R17 * l_TAIL_613; memset(&l_TAIL_613, 0, sizeof l_TAIL_613);
l_TAIL_613 = NULL;
rt_int l_START_614; memset(&l_START_614, 0, sizeof l_START_614);
l_START_614 = ((rt_int)0LL);
{ rt_int it616_lo = ((rt_int)0LL), it616_hi = (rt_int)(p_NAMES).len;
for (rt_int it616 = it616_lo; it616 <= it616_hi; it616++) {
{
if (((it616 == (rt_int)(p_NAMES).len) || rt_b_eq(rt_b_slice(p_NAMES, it616, it616), rt_str(" ", 1))))
{
if ((it616 > l_START_614))
{
{
R17 * l_N_617; memset(&l_N_617, 0, sizeof l_N_617);
l_N_617 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_617))).f_NAME, r_MKN(rt_b_slice(p_NAMES, l_START_614, rt_sub(it616, ((rt_int)1LL)))), 0);
r_ADD_LIST(l_N_617, &l_HEAD_612, &l_TAIL_613);
}
}
l_START_614 = rt_add(it616, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it616 == it616_hi) break;
} } L_end615: ;
{
R22 * l_T_618; memset(&l_T_618, 0, sizeof l_T_618);
l_T_618 = r_ENUM_CLASS(l_HEAD_612, p_UNORDERED, ((rt_int)0LL));
r_PREDEF_TYPE(p_NAME, l_T_618);
{ R22 * rv619 = l_T_618;
return rv619; }
}
rt_raise(RT_X_INIT);
}
static void r_PREDEFINE(void) { RT_B_TICK(); 
R22 * l_T_620; memset(&l_T_620, 0, sizeof l_T_620);
R17 * l_ASCII_LITS_621; memset(&l_ASCII_LITS_621, 0, sizeof l_ASCII_LITS_621);
l_ASCII_LITS_621 = NULL;
R17 * l_TAIL_622; memset(&l_TAIL_622, 0, sizeof l_TAIL_622);
l_TAIL_622 = NULL;
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
{ rt_int it624_lo = ((rt_int)0LL), it624_hi = ((rt_int)127LL);
for (rt_int it624 = it624_lo; it624 <= it624_hi; it624++) {
{
{
R17 * l_N_625; memset(&l_N_625, 0, sizeof l_N_625);
l_N_625 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_625))).f_NAME, r_ASCII_NAME(it624), 0);
r_ADD_LIST(l_N_625, &l_ASCII_LITS_621, &l_TAIL_622);
}
}
RT_B_TICK();
if (it624 == it624_hi) break;
} } L_end623: ;
((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII = r_ENUM_CLASS(l_ASCII_LITS_621, 0, ((rt_int)0LL));
r_PREDEF_TYPE(rt_str("ASCII", 5), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII);
((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS = r_PREDEF_ENUM(rt_str("ROUNDINGS", 9), rt_str("ROUNDED TRUNCATED NATIVE_R NATIVE_T", 35), 0);
l_T_620 = r_PREDEF_ENUM(rt_str("FIXED_PRECISIONS", 16), rt_str("STD", 3), 0);
r_PREDEF_BOUNDS_DEF();
l_T_620 = r_PREDEF_ENUM(rt_str("SIGNING", 7), rt_str("SIGNED UNSIGNED", 15), 1);
l_T_620 = r_PREDEF_ENUM(rt_str("PACKING", 7), rt_str("DENSE PACKED UNPACKED", 21), 1);
l_T_620 = r_PREDEF_ENUM(rt_str("USAGE", 5), rt_str("SYNCH REGION", 12), 1);
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
r_PREDEF_BUILTIN(rt_str("INTERRUPT_AFTER", 15));
r_PREDEF_BUILTIN(rt_str("RELEASE", 7));
r_PREDEF_BUILTIN(rt_str("START_IO", 8));
{
rstr l_OPS_626; memset(&l_OPS_626, 0, sizeof l_OPS_626);
l_OPS_626 = rt_b_str_new(((rt_int)271LL), 0);
rt_b_assign(&l_OPS_626, rt_str(" ADD_ SUBTRACT_ MULTIPLY_ DIVIDE_ MODULUS_ EXPONENTIATE_ CONCATENATE_ EQUAL_ UNEQUAL_ GREATER_THAN_ LESS_THAN_ GREATER_EQUAL_ LESS_EQUAL_ AND_ OR_ XOR_ IMPLIES_ MD_ADD_ MD_SUBTRACT_ MD_MULTIPLY_ MD_DIVIDE_ NEGATE_ MON_PLUS_ COMPLEMENT_ STORE_ SUBSTRING_ SUBSTRING_STORE_ ", 271));
rt_int l_START_627; memset(&l_START_627, 0, sizeof l_START_627);
l_START_627 = ((rt_int)1LL);
{ rt_int it629_lo = ((rt_int)1LL), it629_hi = ((rt_int)270LL);
for (rt_int it629 = it629_lo; it629 <= it629_hi; it629++) {
{
if (rt_b_eq(rt_b_slice(l_OPS_626, it629, it629), rt_str(" ", 1)))
{
if ((it629 > l_START_627))
{
r_PREDEF_BUILTIN(rt_b_slice(l_OPS_626, l_START_627, rt_sub(it629, ((rt_int)1LL))));
}
l_START_627 = rt_add(it629, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it629 == it629_hi) break;
} } L_end628: ;
}
r_PREDEF_CONST(rt_str("MAX_NOM_PREC", 12), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)15LL));
r_PREDEF_CONST(rt_str("CLOCK_SCALE", 11), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)20LL));
r_OPEN_SCOPE();
}
static void r_PREDEF_BOUNDS_DEF(void) { RT_B_TICK(); 
R17 * l_F_630; memset(&l_F_630, 0, sizeof l_F_630);
l_F_630 = r_NEW_NODE(g_N_FORMAL, ((rt_int)0LL));
R17 * l_V_631; memset(&l_V_631, 0, sizeof l_V_631);
l_V_631 = r_NEW_NODE(g_N_VAR, ((rt_int)0LL));
R17 * l_R_632; memset(&l_R_632, 0, sizeof l_R_632);
l_R_632 = r_NEW_NODE(g_TS_RECORD, ((rt_int)0LL));
R17 * l_D_633; memset(&l_D_633, 0, sizeof l_D_633);
l_D_633 = r_NEW_NODE(g_N_TYPE, ((rt_int)0LL));
R17 * l_FX_634; memset(&l_FX_634, 0, sizeof l_FX_634);
l_FX_634 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
R12 * l_Y_635; memset(&l_Y_635, 0, sizeof l_Y_635);
l_Y_635 = r_NEW_SYM(g_Y_TYPE, r_MKN(rt_str("BOUNDS_DEF", 10)));
((*(R17 *)rt_nil_check(l_F_630))).f_A = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_F_630))).f_A))).f_NAME, r_MKN(rt_str("MAX_P", 5)), 0);
((*(R17 *)rt_nil_check(l_F_630))).f_B = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_F_630))).f_B))).f_NAME, r_MKN(rt_str("FIXED_PRECISIONS", 16)), 0);
S_R9(&((*(R17 *)rt_nil_check(l_FX_634))).f_NAME, r_MKN(rt_str("FIXED", 5)), 0);
((*(R17 *)rt_nil_check(l_FX_634))).f_A = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_FX_634))).f_A))).f_NEXT = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_FX_634))).f_A))).f_NEXT))).f_IV = ((rt_int)2LL);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_FX_634))).f_A))).f_NEXT))).f_NEXT = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_FX_634))).f_A))).f_NEXT))).f_NEXT))).f_NAME, r_MKN(rt_str("MAX_P", 5)), 0);
((*(R17 *)rt_nil_check(l_V_631))).f_A = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_631))).f_A))).f_NAME, r_MKN(rt_str("MIN", 3)), 0);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_631))).f_A))).f_NEXT = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_631))).f_A))).f_NEXT))).f_NAME, r_MKN(rt_str("MAX", 3)), 0);
((*(R17 *)rt_nil_check(l_V_631))).f_B = l_FX_634;
((*(R17 *)rt_nil_check(l_R_632))).f_A = l_V_631;
S_R9(&((*(R17 *)rt_nil_check(l_D_633))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_635))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_D_633))).f_A = l_F_630;
((*(R17 *)rt_nil_check(l_D_633))).f_B = l_R_632;
((*(R12 *)rt_nil_check(l_Y_635))).f_DECL = l_D_633;
r_DEFINE(l_Y_635, ((rt_int)0LL));
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
rstr l_CONTROLS_636; memset(&l_CONTROLS_636, 0, sizeof l_CONTROLS_636);
l_CONTROLS_636 = rt_b_str_new(((rt_int)128LL), 0);
rt_b_assign(&l_CONTROLS_636, rt_str(" NUL SOH STX EXT EOT ENQ ACK BEL BS  HT  LF  VT  FF  CR  SO  SI  DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM  SUB ESC FS  GS  RS  US ", 128));
if ((p_C < ((rt_int)32LL)))
{
if (rt_b_eq(rt_b_slice(l_CONTROLS_636, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL))), rt_str(" ", 1)))
{
{ R9 rv637 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_636, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)2LL)))));
return rv637; }
}
{ R9 rv638 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_636, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)))));
return rv638; }
}
else if ((p_C == ((rt_int)39LL)))
{
{ R9 rv639 = r_MKN(rt_str("\\''''", 5));
return rv639; }
}
else if ((p_C < ((rt_int)96LL)))
{
{ R9 rv640 = r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), r_CHAR_OF(p_C)), rt_str("'", 1)));
return rv640; }
}
else if ((p_C == ((rt_int)96LL)))
{
{ R9 rv641 = r_MKN(rt_str("\\ACCENT", 7));
return rv641; }
}
else if ((p_C <= ((rt_int)122LL)))
{
{ R9 rv642 = r_MKN(rt_b_cat(rt_str("\\", 1), r_CHAR_OF(rt_sub(p_C, ((rt_int)32LL)))));
return rv642; }
}
else if ((p_C == ((rt_int)123LL)))
{
{ R9 rv643 = r_MKN(rt_str("\\[", 2));
return rv643; }
}
else if ((p_C == ((rt_int)124LL)))
{
{ R9 rv644 = r_MKN(rt_str("\\BAR", 4));
return rv644; }
}
else if ((p_C == ((rt_int)125LL)))
{
{ R9 rv645 = r_MKN(rt_str("\\]", 2));
return rv645; }
}
else if ((p_C == ((rt_int)126LL)))
{
{ R9 rv646 = r_MKN(rt_str("\\TILDE", 6));
return rv646; }
}
{ R9 rv647 = r_MKN(rt_str("\\DEL", 4));
return rv647; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_SCALAR(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv648 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_BOOL)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv648; }
rt_raise(RT_X_INIT);
}
static R22 * r_REAL_TYPE(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R22 * rv649 = r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv649; }
}
{ R22 * rv650 = p_T;
return rv650; }
rt_raise(RT_X_INIT);
}
static R9 r_TYPE_NAME(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_651; memset(&l_K_651, 0, sizeof l_K_651);
l_K_651 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{ R9 rv652 = ((*(R22 *)rt_nil_check(p_T))).f_NAME;
return rv652; }
}
else if ((l_K_651 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))
{
{ R9 rv653 = r_MK(rt_str("INTEGER", 7));
return rv653; }
}
{ R9 rv654 = r_FMT1(rt_str("FIXED (@, 2, STD)", 17), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv654; }
}
else if ((l_K_651 == g_T_BOOL))
{
{ R9 rv655 = r_MK(rt_str("BOOLEAN", 7));
return rv655; }
}
else if ((l_K_651 == g_T_ENUM))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R9 rv656 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv656; }
}
{ R9 rv657 = r_MK(rt_str("an enumerated type", 18));
return rv657; }
}
else if ((l_K_651 == g_T_STR))
{
{ R9 rv658 = r_MK(rt_str("CHAR_STR", 8));
return rv658; }
}
else if ((l_K_651 == g_T_BITS))
{
{ R9 rv659 = r_MK(rt_str("BIT", 3));
return rv659; }
}
else if ((l_K_651 == g_T_FLOAT))
{
{ R9 rv660 = r_FMT1(rt_str("FLOAT (@)", 9), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv660; }
}
else if ((l_K_651 == g_T_ARR))
{
{ R9 rv661 = r_FMT1(rt_str("ARRAY OF @", 10), r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_ELEM));
return rv661; }
}
else if ((l_K_651 == g_T_REC))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R9 rv662 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv662; }
}
{ R9 rv663 = r_MK(rt_str("RECORD", 6));
return rv663; }
}
else if ((l_K_651 == g_T_PTR))
{
{ R9 rv664 = r_MK(rt_str("PTR", 3));
return rv664; }
}
else if ((l_K_651 == g_T_SEM))
{
{ R9 rv665 = r_MK(rt_str("SEMAPHORE", 9));
return rv665; }
}
else if ((l_K_651 == g_T_NIL))
{
{ R9 rv666 = r_MK(rt_str("NIL", 3));
return rv666; }
}
else if ((l_K_651 == g_T_VOID))
{
{ R9 rv667 = r_MK(rt_str("no value", 8));
return rv667; }
}
{ R9 rv668 = r_MK(rt_str("a type", 6));
return rv668; }
rt_raise(RT_X_INIT);
}
static R9 r_SUBST_SELF(R9 p_T, R9 p_SELF) { RT_B_TICK(); 
rstr l_S_669; memset(&l_S_669, 0, sizeof l_S_669);
l_S_669 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_669, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_670; memset(&l_AT_670, 0, sizeof l_AT_670);
l_AT_670 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_START_671; memset(&l_START_671, 0, sizeof l_START_671);
l_START_671 = ((rt_int)0LL);
R9 l_R_672; memset(&l_R_672, 0, sizeof l_R_672);
rt_int l_I_673; memset(&l_I_673, 0, sizeof l_I_673);
l_I_673 = ((rt_int)0LL);
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ R9 rv674 = p_T;
return rv674; }
}
for (;;) {
if ((l_I_673 >= rt_sub((p_T).f_LEN, ((rt_int)1LL)))) goto L_end675;
{
if (rt_b_eq(rt_b_slice(l_S_669, l_I_673, rt_add(l_I_673, ((rt_int)1LL))), rt_str("$S", 2)))
{
S_R9(&l_R_672, r_MK(rt_b_slice(l_S_669, l_START_671, rt_sub(l_I_673, ((rt_int)1LL)))), 0);
S_R9(&l_R_672, r_MK(r_STR(p_SELF, (p_SELF).f_LEN)), 0);
l_I_673 = rt_add(l_I_673, ((rt_int)2LL));
l_START_671 = l_I_673;
}
else
{
l_I_673 = rt_add(l_I_673, ((rt_int)1LL));
}
}
RT_B_TICK();
} L_end675: ;
if ((l_START_671 == ((rt_int)0LL)))
{
((*(R7 *)rt_nil_check(g_W))).f_TOP = l_AT_670;
{ R9 rv676 = p_T;
return rv676; }
}
S_R9(&l_R_672, r_MK(rt_b_slice(l_S_669, l_START_671, rt_sub((p_T).f_LEN, ((rt_int)1LL)))), 0);
{ R9 rv677 = ({ R9 rc678; memset(&rc678, 0, sizeof rc678);  rc678.f_AT = l_AT_670; rc678.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_670); rc678.f_H = rt_neg(((rt_int)1LL)); rc678; });
return rv677; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LITERALS(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_P_679; memset(&l_P_679, 0, sizeof l_P_679);
l_P_679 = p_A;
R17 * l_Q_680; memset(&l_Q_680, 0, sizeof l_Q_680);
l_Q_680 = p_B;
for (;;) {
if (((l_P_679 == NULL) || (l_Q_680 == NULL))) goto L_end681;
{
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_P_679))).f_NAME, ((*(R17 *)rt_nil_check(l_Q_680))).f_NAME)))
{
{ rt_int rv682 = 0;
return rv682; }
}
l_P_679 = ((*(R17 *)rt_nil_check(l_P_679))).f_NEXT;
l_Q_680 = ((*(R17 *)rt_nil_check(l_Q_680))).f_NEXT;
}
RT_B_TICK();
} L_end681: ;
{ rt_int rv683 = ((l_P_679 == NULL) && (l_Q_680 == NULL));
return rv683; }
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_CLASS(R17 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_684; memset(&l_Y_684, 0, sizeof l_Y_684);
l_Y_684 = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
R22 * l_T_685; memset(&l_T_685, 0, sizeof l_T_685);
{
R17 * l_P_686; memset(&l_P_686, 0, sizeof l_P_686);
l_P_686 = p_LITS;
for (;;) {
if ((l_P_686 == NULL)) goto L_end687;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_P_686))).f_NEXT, ((*(R17 *)rt_nil_check(l_P_686))).f_NAME))
{
r_FAILT(p_LINE, rt_str("an enumerated literal must be unique in its list (3.4.1): ", 58), ((*(R17 *)rt_nil_check(l_P_686))).f_NAME);
}
l_P_686 = ((*(R17 *)rt_nil_check(l_P_686))).f_NEXT;
}
RT_B_TICK();
} L_end687: ;
}
for (;;) {
if ((l_Y_684 == NULL)) goto L_end688;
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_684))).f_T))).f_UNORDERED == p_UNORDERED) && r_SAME_LITERALS(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_684))).f_T))).f_LITS, p_LITS)))
{
r_DECLARE_LITERALS(((*(R12 *)rt_nil_check(l_Y_684))).f_T, p_LINE);
{ R22 * rv689 = ((*(R12 *)rt_nil_check(l_Y_684))).f_T;
return rv689; }
}
l_Y_684 = ((*(R12 *)rt_nil_check(l_Y_684))).f_INSTANCES;
}
RT_B_TICK();
} L_end688: ;
l_T_685 = r_NEW_TYP(g_T_ENUM);
((*(R22 *)rt_nil_check(l_T_685))).f_BASE = l_T_685;
((*(R22 *)rt_nil_check(l_T_685))).f_LITS = p_LITS;
((*(R22 *)rt_nil_check(l_T_685))).f_NLITS = r_LIST_LENGTH(p_LITS);
((*(R22 *)rt_nil_check(l_T_685))).f_UNORDERED = p_UNORDERED;
S_R9(&((*(R22 *)rt_nil_check(l_T_685))).f_CNAME, r_NEW_NAME(rt_str("E", 1)), 0);
l_Y_684 = r_NEW_SYM(g_Y_TYPE, r_NO_TEXT());
((*(R12 *)rt_nil_check(l_Y_684))).f_T = l_T_685;
((*(R12 *)rt_nil_check(l_Y_684))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
((*(R7 *)rt_nil_check(g_W))).f_ENUMS = l_Y_684;
{
R17 * l_P_690; memset(&l_P_690, 0, sizeof l_P_690);
l_P_690 = p_LITS;
R9 l_NAMES_691; memset(&l_NAMES_691, 0, sizeof l_NAMES_691);
S_R9(&l_NAMES_691, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_P_690 == NULL)) goto L_end692;
{
S_R9(&l_NAMES_691, r_FMT2(rt_str("@@, ", 4), l_NAMES_691, r_CSTRING(((*(R17 *)rt_nil_check(l_P_690))).f_NAME)), 0);
l_P_690 = ((*(R17 *)rt_nil_check(l_P_690))).f_NEXT;
}
RT_B_TICK();
} L_end692: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static const char *@[] = { @0 };", 32), ((*(R22 *)rt_nil_check(l_T_685))).f_CNAME, l_NAMES_691));
}
r_DECLARE_LITERALS(l_T_685, p_LINE);
{ R22 * rv693 = l_T_685;
return rv693; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_LITERALS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_P_694; memset(&l_P_694, 0, sizeof l_P_694);
l_P_694 = ((*(R22 *)rt_nil_check(p_T))).f_LITS;
rt_int l_I_695; memset(&l_I_695, 0, sizeof l_I_695);
l_I_695 = ((rt_int)0LL);
for (;;) {
if ((l_P_694 == NULL)) goto L_end696;
{
if ((r_VISIBLE_LITERAL(((*(R17 *)rt_nil_check(l_P_694))).f_NAME, p_T) == NULL))
{
{
R12 * l_Y_697; memset(&l_Y_697, 0, sizeof l_Y_697);
l_Y_697 = r_NEW_SYM(g_Y_ENUMLIT, ((*(R17 *)rt_nil_check(l_P_694))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_697))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_697))).f_MV = l_I_695;
((*(R12 *)rt_nil_check(l_Y_697))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_697))).f_INPUT = 1;
r_DEFINE(l_Y_697, p_LINE);
}
}
l_I_695 = rt_add(l_I_695, ((rt_int)1LL));
l_P_694 = ((*(R17 *)rt_nil_check(l_P_694))).f_NEXT;
}
RT_B_TICK();
} L_end696: ;
}
static R12 * r_FIND_LITERAL(R9 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_V_698; memset(&l_V_698, 0, sizeof l_V_698);
l_V_698 = r_VISIBLE_LITERAL(p_NAME, p_T);
if (((!(l_V_698 == NULL)) || (p_T == NULL)))
{
{ R12 * rv699 = l_V_698;
return rv699; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL))
{
{ R12 * rv700 = NULL;
return rv700; }
}
{
R17 * l_P_701; memset(&l_P_701, 0, sizeof l_P_701);
l_P_701 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
rt_int l_I_702; memset(&l_I_702, 0, sizeof l_I_702);
l_I_702 = ((rt_int)0LL);
for (;;) {
if ((l_P_701 == NULL)) goto L_end703;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_701))).f_NAME, p_NAME))
{
{
R12 * l_Y_704; memset(&l_Y_704, 0, sizeof l_Y_704);
l_Y_704 = r_NEW_SYM(g_Y_ENUMLIT, p_NAME);
((*(R12 *)rt_nil_check(l_Y_704))).f_T = ((*(R22 *)rt_nil_check(p_T))).f_BASE;
((*(R12 *)rt_nil_check(l_Y_704))).f_MV = l_I_702;
((*(R12 *)rt_nil_check(l_Y_704))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_704))).f_INPUT = 1;
{ R12 * rv705 = l_Y_704;
return rv705; }
}
}
l_I_702 = rt_add(l_I_702, ((rt_int)1LL));
l_P_701 = ((*(R17 *)rt_nil_check(l_P_701))).f_NEXT;
}
RT_B_TICK();
} L_end703: ;
}
{ R12 * rv706 = NULL;
return rv706; }
rt_raise(RT_X_INIT);
}
static R12 * r_VISIBLE_LITERAL(R9 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_707; memset(&l_Y_707, 0, sizeof l_Y_707);
l_Y_707 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_707 == NULL)) goto L_end708;
{
if ((((*(R12 *)rt_nil_check(l_Y_707))).f_KIND == g_Y_ENUMLIT))
{
if ((p_T == NULL))
{
{ R12 * rv709 = l_Y_707;
return rv709; }
}
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_707))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv710 = l_Y_707;
return rv710; }
}
}
l_Y_707 = r_LOOKUP_NEXT(l_Y_707);
}
RT_B_TICK();
} L_end708: ;
{ R12 * rv711 = NULL;
return rv711; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_CLASSES(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_712; memset(&l_Y_712, 0, sizeof l_Y_712);
l_Y_712 = r_LOOKUP(p_NAME);
rt_int l_N_713; memset(&l_N_713, 0, sizeof l_N_713);
l_N_713 = ((rt_int)0LL);
for (;;) {
if ((l_Y_712 == NULL)) goto L_end714;
{
if ((((*(R12 *)rt_nil_check(l_Y_712))).f_KIND == g_Y_ENUMLIT))
{
l_N_713 = rt_add(l_N_713, ((rt_int)1LL));
}
l_Y_712 = r_LOOKUP_NEXT(l_Y_712);
}
RT_B_TICK();
} L_end714: ;
{ rt_int rv715 = l_N_713;
return rv715; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE(R17 * p_TS) { RT_B_TICK(); 
{ R22 * rv716 = r_RESOLVE_NAMED(p_TS, r_NO_TEXT());
return rv716; }
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
R22 * l_N_717; memset(&l_N_717, 0, sizeof l_N_717);
if ((p_R == NULL))
{
{ R22 * rv718 = p_T;
return rv718; }
}
if ((r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(p_R))).f_A) || r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(p_R))).f_B)))
{
l_N_717 = r_COPY_TYP(p_T);
S_R9(&((*(R22 *)rt_nil_check(l_N_717))).f_NAME, r_NO_TEXT(), 0);
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_717))).f_LO_C, r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NAME), 0);
}
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_B))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_717))).f_HI_C, r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_B))).f_NAME), 0);
}
{ R22 * rv719 = l_N_717;
return rv719; }
}
if ((!((((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_R))).f_LINE, rt_str("a range is only for fixed, float and enumerated types (3.12.2)", 62));
}
l_N_717 = r_COPY_TYP(p_T);
S_R9(&((*(R22 *)rt_nil_check(l_N_717))).f_NAME, r_NO_TEXT(), 0);
((*(R22 *)rt_nil_check(l_N_717))).f_RLEVEL = r_CUR_LEVEL();
{
R26 l_LO_720; memset(&l_LO_720, 0, sizeof l_LO_720);
R26 l_HI_721; memset(&l_HI_721, 0, sizeof l_HI_721);
S_R26(&l_LO_720, r_EXPR(((*(R17 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R26(&l_HI_721, r_EXPR(((*(R17 *)rt_nil_check(p_R))).f_B, p_T), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_717))).f_LO_C, (l_LO_720).f_C, 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_717))).f_HI_C, (l_HI_721).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_717))).f_MLO, r_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_A), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_717))).f_MHI, r_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_B), 0);
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_717))).f_MLO, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_717))).f_MHI, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_B, p_T), 0);
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_720).f_T), r_REAL_TYPE(p_T))) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_721).f_T), r_REAL_TYPE(p_T)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_R))).f_LINE, rt_str("the bounds of a range must be of the class of the type (3.2.1, 3.3.1, 3.4.1)", 76));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_717))).f_LO_C, r_RESCALE(l_LO_720, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R17 *)rt_nil_check(p_R))).f_LINE), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_717))).f_HI_C, r_RESCALE(l_HI_721, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R17 *)rt_nil_check(p_R))).f_LINE), 0);
if ((((!(((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL))) || (!(((*(R22 *)rt_nil_check((l_LO_720).f_T))).f_SCALE == ((rt_int)0LL)))) || (!(((*(R22 *)rt_nil_check((l_HI_721).f_T))).f_SCALE == ((rt_int)0LL)))))
{
S_R23(&((*(R22 *)rt_nil_check(l_N_717))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R22 *)rt_nil_check(l_N_717))).f_MHI, r_NO_MVAL(), 0);
}
}
if (r_IS_D(p_T))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_717))).f_LO_C, r_AS_D(l_LO_720), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_717))).f_HI_C, r_AS_D(l_HI_721), 0);
}
}
if (((((*(R17 *)rt_nil_check(p_R))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(p_R))).f_IV == ((rt_int)3LL))))
{
if (r_IS_D(p_T))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_717))).f_LO_C, r_FMT1(rt_str("rt_b_dnext(@, 1)", 16), ((*(R22 *)rt_nil_check(l_N_717))).f_LO_C), 0);
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_717))).f_LO_C, r_FMT1(rt_str("nextafter(@, INFINITY)", 22), ((*(R22 *)rt_nil_check(l_N_717))).f_LO_C), 0);
}
else
{
S_R9(&((*(R22 *)rt_nil_check(l_N_717))).f_LO_C, r_FMT1(rt_str("((@) + 1)", 9), ((*(R22 *)rt_nil_check(l_N_717))).f_LO_C), 0);
(((*(R22 *)rt_nil_check(l_N_717))).f_MLO).f_V = rt_add((((*(R22 *)rt_nil_check(l_N_717))).f_MLO).f_V, ((rt_int)1LL));
}
}
if ((((*(R17 *)rt_nil_check(p_R))).f_IV >= ((rt_int)2LL)))
{
if (r_IS_D(p_T))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_717))).f_HI_C, r_FMT1(rt_str("rt_b_dnext(@, 0)", 16), ((*(R22 *)rt_nil_check(l_N_717))).f_HI_C), 0);
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_717))).f_HI_C, r_FMT1(rt_str("nextafter(@, -INFINITY)", 23), ((*(R22 *)rt_nil_check(l_N_717))).f_HI_C), 0);
}
else
{
S_R9(&((*(R22 *)rt_nil_check(l_N_717))).f_HI_C, r_FMT1(rt_str("((@) - 1)", 9), ((*(R22 *)rt_nil_check(l_N_717))).f_HI_C), 0);
(((*(R22 *)rt_nil_check(l_N_717))).f_MHI).f_V = rt_sub((((*(R22 *)rt_nil_check(l_N_717))).f_MHI).f_V, ((rt_int)1LL));
}
}
{ R22 * rv722 = l_N_717;
return rv722; }
rt_raise(RT_X_INIT);
}
static R23 r_ENUM_MANIFEST(R17 * p_E, R22 * p_T) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{
R12 * l_Y_723; memset(&l_Y_723, 0, sizeof l_Y_723);
l_Y_723 = r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, p_T);
if ((!(l_Y_723 == NULL)))
{
{ R23 rv724 = r_SOME(((*(R12 *)rt_nil_check(l_Y_723))).f_MV);
return rv724; }
}
}
}
{ R23 rv725 = r_MANIFEST(p_E);
return rv725; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_LEVEL(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_CS == NULL))
{
{ rt_int rv726 = ((rt_int)0LL);
return rv726; }
}
{ rt_int rv727 = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
return rv727; }
rt_raise(RT_X_INIT);
}
static R22 * r_ARG_TYPE(R17 * p_N) { RT_B_TICK(); 
{ R22 * rv728 = r_RESOLVE(r_EXPR_TO_TS(p_N));
return rv728; }
rt_raise(RT_X_INIT);
}
static R17 * r_NTH_ARG(R17 * p_TS, rt_int p_K) { RT_B_TICK(); 
R17 * l_A_729; memset(&l_A_729, 0, sizeof l_A_729);
l_A_729 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
{ rt_int it731_lo = ((rt_int)1LL), it731_hi = p_K;
for (rt_int it731 = it731_lo; it731 <= it731_hi; it731++) {
{
if ((l_A_729 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
l_A_729 = ((*(R17 *)rt_nil_check(l_A_729))).f_NEXT;
}
RT_B_TICK();
if (it731 == it731_hi) break;
} } L_end730: ;
if ((l_A_729 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
{ R17 * rv732 = l_A_729;
return rv732; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_NAMED(R17 * p_TS, R9 p_CNAME) { RT_B_TICK(); 
R22 * l_T_733; memset(&l_T_733, 0, sizeof l_T_733);
rt_int l_K_734; memset(&l_K_734, 0, sizeof l_K_734);
l_K_734 = ((*(R17 *)rt_nil_check(p_TS))).f_KIND;
if ((l_K_734 == g_TS_ARRAY))
{
{ R22 * rv735 = r_RESOLVE_ARRAY(p_TS);
return rv735; }
}
else if ((l_K_734 == g_TS_RECORD))
{
{ R22 * rv736 = r_RESOLVE_RECORD(p_TS, p_CNAME, NULL, NULL);
return rv736; }
}
else if ((l_K_734 == g_TS_ENUM))
{
l_T_733 = r_ENUM_CLASS(((*(R17 *)rt_nil_check(p_TS))).f_A, (((*(R17 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)), ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
if (((((*(R17 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("an UNORDERED type has no range", 30));
}
l_T_733 = r_WITH_RANGE(l_T_733, ((*(R17 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_733 = r_APPLY_REP(l_T_733, ((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv737 = l_T_733;
return rv737; }
}
else if ((l_K_734 == g_TS_GEN))
{
{ R22 * rv738 = r_GEN_TYPE(p_TS);
return rv738; }
}
else if ((!(l_K_734 == g_TS_NAME)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a type specification expected", 29));
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_FL == ((rt_int)3LL)))
{
l_T_733 = r_WITH_RANGE(r_TYPE_ATTR_TYPE(((*(R17 *)rt_nil_check(p_TS))).f_E), ((*(R17 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_733 = r_APPLY_REP(l_T_733, ((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv739 = l_T_733;
return rv739; }
}
l_T_733 = r_RESOLVE_PREDEFINED(p_TS);
if ((l_T_733 == NULL))
{
l_T_733 = r_RESOLVE_USER(p_TS);
}
l_T_733 = r_WITH_RANGE(l_T_733, ((*(R17 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_733 = r_APPLY_REP(l_T_733, ((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv740 = l_T_733;
return rv740; }
rt_raise(RT_X_INIT);
}
static R22 * r_APPLY_REP(R22 * p_T0, R17 * p_R0, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_741; memset(&l_T_741, 0, sizeof l_T_741);
l_T_741 = r_COPY_TYP(p_T0);
if ((((*(R22 *)rt_nil_check(p_T0))).f_KIND == g_T_ABS))
{
r_FAIL(p_LINE, rt_str("a REP clause is only for a member of a predefined type class (3.12.2)", 69));
}
((*(R22 *)rt_nil_check(l_T_741))).f_REPS = r_EXPAND_REP(p_R0, p_T0, p_LINE);
r_CHECK_REP_CLASS(l_T_741, p_LINE);
if ((((*(R22 *)rt_nil_check(l_T_741))).f_KIND == g_T_ENUM))
{
r_CHECK_ENUM_REP(l_T_741, p_LINE);
}
else if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_741))).f_REPS))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("ENUM_VAL_REP is only for UNORDERED types (3.4.3)", 48));
}
{ R22 * rv742 = l_T_741;
return rv742; }
rt_raise(RT_X_INIT);
}
static R17 * r_EXPAND_REP(R17 * p_R, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_743; memset(&l_Y_743, 0, sizeof l_Y_743);
if ((p_R == NULL))
{
{ R17 * rv744 = p_R;
return rv744; }
}
if ((((*(R17 *)rt_nil_check(p_R))).f_KIND == g_TS_GEN))
{
{ R17 * rv745 = p_R;
return rv745; }
}
l_Y_743 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_R))).f_NAME);
if ((l_Y_743 == NULL))
{
{ R17 * rv746 = p_R;
return rv746; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_743))).f_KIND == g_Y_REPTYPE)))
{
{ R17 * rv747 = p_R;
return rv747; }
}
if (((*(R12 *)rt_nil_check(l_Y_743))).f_BUSY)
{
r_FAILT(p_LINE, rt_str("a circular reptype declaration (3.12.3): ", 41), ((*(R17 *)rt_nil_check(p_R))).f_NAME);
}
{
R17 * l_D_748; memset(&l_D_748, 0, sizeof l_D_748);
l_D_748 = ((*(R12 *)rt_nil_check(l_Y_743))).f_DECL;
R17 * l_X_749; memset(&l_X_749, 0, sizeof l_X_749);
l_X_749 = r_NEW_NODE(g_N_REP, ((*(R17 *)rt_nil_check(p_R))).f_LINE);
R17 * l_HEAD_750; memset(&l_HEAD_750, 0, sizeof l_HEAD_750);
l_HEAD_750 = NULL;
R17 * l_TAIL_751; memset(&l_TAIL_751, 0, sizeof l_TAIL_751);
l_TAIL_751 = NULL;
((*(R12 *)rt_nil_check(l_Y_743))).f_BUSY = 1;
r_OPEN_SCOPE();
if (((!(((*(R17 *)rt_nil_check(l_D_748))).f_A == NULL)) || (!(((*(R17 *)rt_nil_check(p_R))).f_A == NULL))))
{
r_BIND_FORMALS(((*(R17 *)rt_nil_check(l_D_748))).f_A, p_R);
}
if ((!(((*(R17 *)rt_nil_check(l_D_748))).f_C == NULL)))
{
{
R12 * l_B_752; memset(&l_B_752, 0, sizeof l_B_752);
l_B_752 = r_NEW_SYM(g_Y_TYPE, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_748))).f_C))).f_NAME);
((*(R12 *)rt_nil_check(l_B_752))).f_T = p_T;
r_DEFINE(l_B_752, p_LINE);
}
}
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
S_R9(&((*(R17 *)rt_nil_check(l_X_749))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_748))).f_B))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_X_749))).f_B = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_748))).f_B))).f_B;
((*(R17 *)rt_nil_check(l_X_749))).f_C = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_748))).f_B))).f_C;
if (r_TEQS(((*(R17 *)rt_nil_check(l_X_749))).f_NAME, rt_str("RECORD_REP", 10)))
{
l_HEAD_750 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_748))).f_B))).f_A;
}
else
{
{
R17 * l_A_753; memset(&l_A_753, 0, sizeof l_A_753);
l_A_753 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_748))).f_B))).f_A;
for (;;) {
if ((l_A_753 == NULL)) goto L_end754;
{
r_ADD_LIST(r_REP_ARG_VALUE(l_A_753), &l_HEAD_750, &l_TAIL_751);
l_A_753 = ((*(R17 *)rt_nil_check(l_A_753))).f_NEXT;
}
RT_B_TICK();
} L_end754: ;
}
}
((*(R17 *)rt_nil_check(l_X_749))).f_A = l_HEAD_750;
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
r_CLOSE_SCOPE();
l_X_749 = r_EXPAND_REP(l_X_749, p_T, p_LINE);
((*(R12 *)rt_nil_check(l_Y_743))).f_BUSY = 0;
{ R17 * rv755 = l_X_749;
return rv755; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_REP_ARG_VALUE(R17 * p_A) { RT_B_TICK(); 
R17 * l_N_756; memset(&l_N_756, 0, sizeof l_N_756);
R23 l_M_757; memset(&l_M_757, 0, sizeof l_M_757);
if (((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_758; memset(&l_Y_758, 0, sizeof l_Y_758);
l_Y_758 = r_LOOKUP(((*(R17 *)rt_nil_check(p_A))).f_NAME);
if (((l_Y_758 == NULL) || (((!(l_Y_758 == NULL)) && (((*(R12 *)rt_nil_check(l_Y_758))).f_KIND == g_Y_ENUMLIT)))))
{
l_N_756 = r_NEW_NODE(((*(R17 *)rt_nil_check(p_A))).f_KIND, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_756))).f_NAME, ((*(R17 *)rt_nil_check(p_A))).f_NAME, 0);
{ R17 * rv759 = l_N_756;
return rv759; }
}
if (((((*(R12 *)rt_nil_check(l_Y_758))).f_KIND == g_Y_CONST) && (!(((*(R12 *)rt_nil_check(l_Y_758))).f_T == NULL))))
{
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_758))).f_T)))).f_KIND == g_T_ENUM) && ((*(R12 *)rt_nil_check(l_Y_758))).f_HASMV))
{
{
R17 * l_L_760; memset(&l_L_760, 0, sizeof l_L_760);
l_L_760 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_758))).f_T)))).f_BASE))).f_LITS;
rt_int l_I_761; memset(&l_I_761, 0, sizeof l_I_761);
l_I_761 = ((rt_int)0LL);
for (;;) {
if (((l_L_760 == NULL) || (l_I_761 == ((*(R12 *)rt_nil_check(l_Y_758))).f_MV))) goto L_end762;
{
l_I_761 = rt_add(l_I_761, ((rt_int)1LL));
l_L_760 = ((*(R17 *)rt_nil_check(l_L_760))).f_NEXT;
}
RT_B_TICK();
} L_end762: ;
if ((!(l_L_760 == NULL)))
{
l_N_756 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_756))).f_NAME, ((*(R17 *)rt_nil_check(l_L_760))).f_NAME, 0);
{ R17 * rv763 = l_N_756;
return rv763; }
}
}
}
}
}
}
S_R23(&l_M_757, r_MANIFEST(p_A), 0);
if ((!(l_M_757).f_OK))
{
{
R14 l_SAVED_CODE_764; memset(&l_SAVED_CODE_764, 0, sizeof l_SAVED_CODE_764);
S_R14(&l_SAVED_CODE_764, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_765; memset(&l_V_765, 0, sizeof l_V_765);
S_R26(&l_V_765, r_EXPR(p_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_764, 0);
}
{ R17 * rv766 = p_A;
return rv766; }
}
l_N_756 = r_NEW_NODE(g_N_INT, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
if (((l_M_757).f_V < ((rt_int)0LL)))
{
((*(R17 *)rt_nil_check(l_N_756))).f_IV = rt_neg((l_M_757).f_V);
S_R9(&((*(R17 *)rt_nil_check(l_N_756))).f_NAME, r_NUM(rt_neg((l_M_757).f_V)), 0);
{
R17 * l_U_767; memset(&l_U_767, 0, sizeof l_U_767);
l_U_767 = r_NEW_NODE(g_N_UNOP, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_U_767))).f_NAME, r_MK(rt_str("-", 1)), 0);
((*(R17 *)rt_nil_check(l_U_767))).f_A = l_N_756;
{ R17 * rv768 = l_U_767;
return rv768; }
}
}
((*(R17 *)rt_nil_check(l_N_756))).f_IV = (l_M_757).f_V;
S_R9(&((*(R17 *)rt_nil_check(l_N_756))).f_NAME, r_NUM((l_M_757).f_V), 0);
{ R17 * rv769 = l_N_756;
return rv769; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_REP_CLASS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_770; memset(&l_R_770, 0, sizeof l_R_770);
l_R_770 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
rt_int l_K_771; memset(&l_K_771, 0, sizeof l_K_771);
l_K_771 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
rt_int l_OK_772; memset(&l_OK_772, 0, sizeof l_OK_772);
l_OK_772 = 0;
if ((((*(R17 *)rt_nil_check(l_R_770))).f_KIND == g_TS_GEN))
{
return;
}
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R17 *)rt_nil_check(l_R_770))).f_NAME) == NULL)))
{
return;
}
if ((!(r_LOOKUP(((*(R17 *)rt_nil_check(l_R_770))).f_NAME) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_LOOKUP(((*(R17 *)rt_nil_check(l_R_770))).f_NAME)))).f_KIND == g_Y_GEN))
{
return;
}
}
{
R9 l_N_773; memset(&l_N_773, 0, sizeof l_N_773);
S_R9(&l_N_773, ((*(R17 *)rt_nil_check(l_R_770))).f_NAME, 0);
if ((l_K_771 == g_T_INT))
{
l_OK_772 = (r_TEQS(l_N_773, rt_str("FIXED_STD", 9)) || r_TEQS(l_N_773, rt_str("FIXED_REP", 9)));
}
else if ((l_K_771 == g_T_FLOAT))
{
l_OK_772 = r_TEQS(l_N_773, rt_str("FLOAT_STD", 9));
}
else if ((l_K_771 == g_T_BOOL))
{
l_OK_772 = r_TEQS(l_N_773, rt_str("BOOLEAN_STD", 11));
}
else if ((l_K_771 == g_T_ENUM))
{
l_OK_772 = ((r_TEQS(l_N_773, rt_str("ENUM_STD", 8)) || r_TEQS(l_N_773, rt_str("ENUM_REP", 8))) || r_TEQS(l_N_773, rt_str("ENUM_VAL_REP", 12)));
}
else if ((l_K_771 == g_T_STR))
{
l_OK_772 = (r_TEQS(l_N_773, rt_str("CHAR_STR_STD", 12)) || r_TEQS(l_N_773, rt_str("CHAR_STR_REP", 12)));
}
else if ((l_K_771 == g_T_BITS))
{
l_OK_772 = r_TEQS(l_N_773, rt_str("BIT_STD", 7));
}
else if ((l_K_771 == g_T_ARR))
{
l_OK_772 = (r_TEQS(l_N_773, rt_str("ARRAY_STD", 9)) || r_TEQS(l_N_773, rt_str("ARRAY_REP", 9)));
}
else if ((l_K_771 == g_T_REC))
{
l_OK_772 = (r_TEQS(l_N_773, rt_str("RECORD_STD", 10)) || r_TEQS(l_N_773, rt_str("RECORD_REP", 10)));
}
else if ((l_K_771 == g_T_PTR))
{
l_OK_772 = r_TEQS(l_N_773, rt_str("PTR_STD", 7));
}
else if ((l_K_771 == g_T_SEM))
{
l_OK_772 = r_TEQS(l_N_773, rt_str("SEMAPHORE_STD", 13));
}
else if ((l_K_771 == g_T_TYPE))
{
l_OK_772 = 1;
}
if ((!l_OK_772))
{
r_FAILT(p_LINE, rt_str("the representation does not suit the type class (3.12.4): ", 58), l_N_773);
}
if (r_TEQS(l_N_773, rt_str("FIXED_REP", 9)))
{
r_CHECK_FIXED_REP(p_T, p_LINE);
}
}
}
static rt_int r_POW2(rt_int p_N) { RT_B_TICK(); 
rt_int l_P_774; memset(&l_P_774, 0, sizeof l_P_774);
l_P_774 = ((rt_int)1LL);
{ rt_int it776_lo = ((rt_int)1LL), it776_hi = p_N;
for (rt_int it776 = it776_lo; it776 <= it776_hi; it776++) {
{
l_P_774 = rt_mul(l_P_774, ((rt_int)2LL));
}
RT_B_TICK();
if (it776 == it776_hi) break;
} } L_end775: ;
{ rt_int rv777 = l_P_774;
return rv777; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_778; memset(&l_R_778, 0, sizeof l_R_778);
l_R_778 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
rt_int l_UNSIGNED_779; memset(&l_UNSIGNED_779, 0, sizeof l_UNSIGNED_779);
l_UNSIGNED_779 = 0;
if ((((*(R17 *)rt_nil_check(l_R_778))).f_A == NULL))
{
r_FAIL(p_LINE, rt_str("FIXED_REP takes a size and a signing (3.2.3 [3-55])", 51));
}
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_778))).f_A))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_778))).f_A))).f_KIND == g_N_DONTCARE)))
{
return;
}
{
R23 l_N_780; memset(&l_N_780, 0, sizeof l_N_780);
S_R23(&l_N_780, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_778))).f_A), 0);
if ((!(l_N_780).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of FIXED_REP is a manifest integer (3.2.3 [3-56])", 58));
}
if ((((l_N_780).f_V < ((rt_int)0LL)) || ((l_N_780).f_V > ((*(R7 *)rt_nil_check(g_W))).f_WORD)))
{
r_FAIL(p_LINE, rt_str("the size of FIXED_REP is in [0:P], P the default size (3.2.3)", 61));
}
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_778))).f_A))).f_NEXT == NULL)))
{
{
R17 * l_S_781; memset(&l_S_781, 0, sizeof l_S_781);
l_S_781 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_778))).f_A))).f_NEXT;
if (((((*(R17 *)rt_nil_check(l_S_781))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_S_781))).f_KIND == g_N_DONTCARE)))
{
return;
}
if ((!(((((((*(R17 *)rt_nil_check(l_S_781))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_S_781))).f_KIND == g_N_ENUMLIT))) && ((r_TEQS(((*(R17 *)rt_nil_check(l_S_781))).f_NAME, rt_str("SIGNED", 6)) || r_TEQS(((*(R17 *)rt_nil_check(l_S_781))).f_NAME, rt_str("UNSIGNED", 8))))))))
{
r_FAIL(p_LINE, rt_str("the signing of FIXED_REP is a manifest value of SIGNING (3.2.3 [3-57])", 70));
}
l_UNSIGNED_779 = r_TEQS(((*(R17 *)rt_nil_check(l_S_781))).f_NAME, rt_str("UNSIGNED", 8));
if ((!(((*(R17 *)rt_nil_check(l_S_781))).f_NEXT == NULL)))
{
r_FAIL(p_LINE, rt_str("FIXED_REP takes a size and a signing (3.2.3 [3-55])", 51));
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_REPCONV)
{
return;
}
if (l_UNSIGNED_779)
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
if (((((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK) && ((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN > ((rt_int)0LL))) && ((l_N_780).f_V < ((rt_int)63LL))))
{
{
rt_int l_LO_782; memset(&l_LO_782, 0, sizeof l_LO_782);
l_LO_782 = ((rt_int)0LL);
rt_int l_HI_783; memset(&l_HI_783, 0, sizeof l_HI_783);
l_HI_783 = ((rt_int)0LL);
if (l_UNSIGNED_779)
{
l_HI_783 = rt_sub(r_POW2((l_N_780).f_V), ((rt_int)1LL));
}
else if (((l_N_780).f_V > ((rt_int)0LL)))
{
l_LO_782 = rt_neg(r_POW2(rt_sub((l_N_780).f_V, ((rt_int)1LL))));
l_HI_783 = rt_sub(r_POW2(rt_sub((l_N_780).f_V, ((rt_int)1LL))), ((rt_int)1LL));
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_V < l_LO_782) || ((((*(R22 *)rt_nil_check(p_T))).f_MHI).f_V > l_HI_783)))
{
r_FAIL(p_LINE, rt_str("the range of the type exceeds what the size of FIXED_REP represents (3.2.3)", 75));
}
}
}
}
}
static R22 * r_TYPE_ATTR_TYPE(R17 * p_E) { RT_B_TICK(); 
R22 * l_T_784; memset(&l_T_784, 0, sizeof l_T_784);
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type-valued attribute expected", 32));
}
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_IS_TYPE_ATTR(((*(R17 *)rt_nil_check(p_E))).f_A)))
{
l_T_784 = r_TYPE_ATTR_TYPE(((*(R17 *)rt_nil_check(p_E))).f_A);
}
else
{
{
R14 l_SAVED_CODE_785; memset(&l_SAVED_CODE_785, 0, sizeof l_SAVED_CODE_785);
S_R14(&l_SAVED_CODE_785, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
l_T_784 = (r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(p_E))).f_A)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_785, 0);
}
}
{
R22 * l_R_786; memset(&l_R_786, 0, sizeof l_R_786);
l_R_786 = r_REAL_TYPE(l_T_784);
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)))
{
if ((((*(R22 *)rt_nil_check(l_R_786))).f_KIND == g_T_ARR))
{
{ R22 * rv787 = ((*(R22 *)rt_nil_check(l_R_786))).f_ELEM;
return rv787; }
}
else if ((((*(R22 *)rt_nil_check(l_R_786))).f_KIND == g_T_PTR))
{
{ R22 * rv788 = r_TARGET(l_R_786);
return rv788; }
}
}
else if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7)) && (((*(R22 *)rt_nil_check(l_R_786))).f_KIND == g_T_STR)))
{
{ R22 * rv789 = r_CHARSET_OF(l_R_786);
return rv789; }
}
if ((((*(R22 *)rt_nil_check(l_R_786))).f_KIND == g_T_REC))
{
{
R12 * l_C_790; memset(&l_C_790, 0, sizeof l_C_790);
l_C_790 = r_RECORD_CLASS_OF(l_R_786);
if ((!(l_C_790 == NULL)))
{
{
R21 * l_B_791; memset(&l_B_791, 0, sizeof l_B_791);
l_B_791 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_790))).f_BINDINGS, ((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_791 == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(l_B_791))).f_T == NULL)))
{
{ R22 * rv792 = ((*(R21 *)rt_nil_check(l_B_791))).f_T;
return rv792; }
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
{ rt_int rv793 = 0;
return rv793; }
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7))))
{
{ rt_int rv794 = 1;
return rv794; }
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_795; memset(&l_Y_795, 0, sizeof l_Y_795);
l_Y_795 = r_LOOKUP(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME);
if ((!(l_Y_795 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_795))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_795))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_795))).f_T == NULL))))
{
{
R22 * l_R_796; memset(&l_R_796, 0, sizeof l_R_796);
l_R_796 = r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_795))).f_T);
if ((((*(R22 *)rt_nil_check(l_R_796))).f_KIND == g_T_REC))
{
{
R12 * l_C_797; memset(&l_C_797, 0, sizeof l_C_797);
l_C_797 = r_RECORD_CLASS_OF(l_R_796);
if ((!(l_C_797 == NULL)))
{
if ((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_797))).f_BINDINGS, ((*(R17 *)rt_nil_check(p_E))).f_NAME) == NULL)))
{
{ rt_int rv798 = 1;
return rv798; }
}
}
}
}
}
}
}
}
}
{ rt_int rv799 = 0;
return rv799; }
rt_raise(RT_X_INIT);
}
static R22 * r_GEN_TYPE(R17 * p_TS) { RT_B_TICK(); 
R21 * l_B_800; memset(&l_B_800, 0, sizeof l_B_800);
l_B_800 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_800 == NULL)) goto L_end801;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_800))).f_NAME, ((*(R17 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R21 *)rt_nil_check(l_B_800))).f_T == NULL))))
{
{ R22 * rv802 = ((*(R21 *)rt_nil_check(l_B_800))).f_T;
return rv802; }
}
l_B_800 = ((*(R21 *)rt_nil_check(l_B_800))).f_NEXT;
}
RT_B_TICK();
} L_end801: ;
{
R12 * l_Y_803; memset(&l_Y_803, 0, sizeof l_Y_803);
l_Y_803 = r_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_803 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_803))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_803))).f_T == NULL))))
{
{ R22 * rv804 = ((*(R12 *)rt_nil_check(l_Y_803))).f_T;
return rv804; }
}
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a derived generic type outside a formal parameter list: \?", 57), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_PREDEFINED(R17 * p_TS) { RT_B_TICK(); 
R9 l_NAME_805; memset(&l_NAME_805, 0, sizeof l_NAME_805);
S_R9(&l_NAME_805, ((*(R17 *)rt_nil_check(p_TS))).f_NAME, 0);
R22 * l_T_806; memset(&l_T_806, 0, sizeof l_T_806);
if (r_TEQS(l_NAME_805, rt_str("FIXED", 5)))
{
{
R23 l_S_807; memset(&l_S_807, 0, sizeof l_S_807);
S_R23(&l_S_807, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_808; memset(&l_R_808, 0, sizeof l_R_808);
S_R23(&l_R_808, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
R17 * l_P_809; memset(&l_P_809, 0, sizeof l_P_809);
l_P_809 = r_NTH_ARG(p_TS, ((rt_int)2LL));
r_TYPE_ARG_COUNT(p_TS, ((rt_int)3LL));
if ((!((l_R_808).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("only radix 2 is predefined (3.2.1)", 34));
}
r_CHECK_PRECISION_ARG(l_P_809, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
if (((l_S_807).f_V == ((rt_int)0LL)))
{
{ R22 * rv810 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv810; }
}
l_T_806 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_806))).f_SCALE = (l_S_807).f_V;
{ R22 * rv811 = l_T_806;
return rv811; }
}
}
else if (r_TEQS(l_NAME_805, rt_str("FLOAT", 5)))
{
{
R23 l_P_812; memset(&l_P_812, 0, sizeof l_P_812);
S_R23(&l_P_812, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
l_T_806 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_806))).f_SCALE = (l_P_812).f_V;
{ R22 * rv813 = l_T_806;
return rv813; }
}
}
else if (r_TEQS(l_NAME_805, rt_str("BIT", 3)))
{
l_T_806 = r_NEW_TYP(g_T_BITS);
r_STRING_LENGTH(l_T_806, r_NTH_ARG(p_TS, ((rt_int)0LL)));
{ R22 * rv814 = l_T_806;
return rv814; }
}
else if ((r_TEQS(l_NAME_805, rt_str("CHAR_STR", 8)) || r_TEQS(l_NAME_805, rt_str("ASCII_STR", 9))))
{
l_T_806 = r_NEW_TYP(g_T_STR);
r_STRING_LENGTH(l_T_806, r_NTH_ARG(p_TS, ((rt_int)0LL)));
((*(R22 *)rt_nil_check(l_T_806))).f_BASE = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
if (r_TEQS(l_NAME_805, rt_str("CHAR_STR", 8)))
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)2LL));
{
R17 * l_CS_815; memset(&l_CS_815, 0, sizeof l_CS_815);
l_CS_815 = r_NTH_ARG(p_TS, ((rt_int)1LL));
R22 * l_C_816; memset(&l_C_816, 0, sizeof l_C_816);
if (((((*(R17 *)rt_nil_check(l_CS_815))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_CS_815))).f_KIND == g_N_DONTCARE)))
{
((*(R22 *)rt_nil_check(l_T_806))).f_BASE = NULL;
{ R22 * rv817 = l_T_806;
return rv817; }
}
if (((((*(R17 *)rt_nil_check(l_CS_815))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(l_CS_815))).f_NAME, rt_str("CHARSET", 7))))
{
{
R14 l_SAVED_CODE_818; memset(&l_SAVED_CODE_818, 0, sizeof l_SAVED_CODE_818);
S_R14(&l_SAVED_CODE_818, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_819; memset(&l_V_819, 0, sizeof l_V_819);
S_R26(&l_V_819, r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(l_CS_815))).f_A), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_818, 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_819).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("CHARSET is an attribute of character strings (3.7.1)", 52));
}
((*(R22 *)rt_nil_check(l_T_806))).f_BASE = r_CHARSET_OF((l_V_819).f_T);
}
{ R22 * rv820 = l_T_806;
return rv820; }
}
l_C_816 = r_REAL_TYPE(r_ARG_TYPE(l_CS_815));
if ((!(((*(R22 *)rt_nil_check(l_C_816))).f_KIND == g_T_ENUM)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset must be an enumerated type (3.7.1)", 44));
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_816))).f_BASE))).f_UNORDERED || (!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_816))).f_BASE))).f_LITS))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset is an ordered enumerated type with a literal \\'C' (3.7.1, 3.7.2)", 74));
}
((*(R22 *)rt_nil_check(l_T_806))).f_BASE = ((*(R22 *)rt_nil_check(l_C_816))).f_BASE;
}
}
else
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
}
{ R22 * rv821 = l_T_806;
return rv821; }
}
else if (r_TEQS(l_NAME_805, rt_str("PTR", 3)))
{
l_T_806 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_T_806))).f_TARGET_TS = r_NTH_ARG(p_TS, ((rt_int)0LL));
{ R22 * rv822 = l_T_806;
return rv822; }
}
else if (r_TEQS(l_NAME_805, rt_str("SEMAPHORE", 9)))
{
l_T_806 = r_NEW_TYP(g_T_SEM);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
{
R17 * l_U_823; memset(&l_U_823, 0, sizeof l_U_823);
l_U_823 = r_NTH_ARG(p_TS, ((rt_int)0LL));
R22 * l_UT_824; memset(&l_UT_824, 0, sizeof l_UT_824);
l_UT_824 = r_RESOLVE_USER_NAME(r_MK(rt_str("USAGE", 5)), ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
R23 l_M_825; memset(&l_M_825, 0, sizeof l_M_825);
S_R23(&l_M_825, r_NO_MVAL(), 0);
if (((((*(R17 *)rt_nil_check(l_U_823))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_U_823))).f_KIND == g_N_DONTCARE)))
{
S_R23(&l_M_825, r_SOME(((rt_int)0LL)), 0);
}
else if (((((((*(R17 *)rt_nil_check(l_U_823))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_U_823))).f_KIND == g_N_ENUMLIT))) && (!(r_FIND_LITERAL(((*(R17 *)rt_nil_check(l_U_823))).f_NAME, l_UT_824) == NULL))))
{
S_R23(&l_M_825, r_ENUM_MANIFEST(l_U_823, l_UT_824), 0);
}
else
{
{
R14 l_SAVED_CODE_826; memset(&l_SAVED_CODE_826, 0, sizeof l_SAVED_CODE_826);
S_R14(&l_SAVED_CODE_826, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_827; memset(&l_V_827, 0, sizeof l_V_827);
S_R26(&l_V_827, r_EXPR(l_U_823, l_UT_824), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_826, 0);
if (r_SAME_CLASS(r_REAL_TYPE((l_V_827).f_T), r_REAL_TYPE(l_UT_824)))
{
S_R23(&l_M_825, r_MANIFEST(l_U_823), 0);
}
}
}
if ((!(l_M_825).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("the use mode is a manifest value of USAGE, SYNCH or REGION (3.11.1)", 67));
}
((*(R22 *)rt_nil_check(l_T_806))).f_SCALE = (l_M_825).f_V;
}
{ R22 * rv828 = l_T_806;
return rv828; }
}
{ R22 * rv829 = NULL;
return rv829; }
rt_raise(RT_X_INIT);
}
static void r_TYPE_ARG_COUNT(R17 * p_TS, rt_int p_N) { RT_B_TICK(); 
if ((!(r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_TS))).f_A) == p_N)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("the wrong number of arguments for the type ", 43), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
}
static R23 r_MANIFEST_INTEGER_ARG(R17 * p_A, rstr p_WHAT, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
R23 l_M_830; memset(&l_M_830, 0, sizeof l_M_830);
S_R23(&l_M_830, r_MANIFEST(p_A), 0);
if ((!(l_M_830).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" must be manifest (3.2.1, 3.3.1)", 32)));
}
if ((((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) && (!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))) && (!r_BOUND_NAME(p_A))))
{
{
R14 l_SAVED_CODE_831; memset(&l_SAVED_CODE_831, 0, sizeof l_SAVED_CODE_831);
S_R14(&l_SAVED_CODE_831, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R22 * l_T_832; memset(&l_T_832, 0, sizeof l_T_832);
l_T_832 = (r_EXPR(p_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_831, 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_T_832)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_832))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is an integer (3.2.1, 3.3.1)", 29)));
}
}
}
if ((((l_M_830).f_V < p_LO) || ((l_M_830).f_V > p_HI)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is out of the range of the attribute (3.2.1, 3.3.1)", 52)));
}
{ R23 rv833 = l_M_830;
return rv833; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOUND_NAME(R17 * p_A) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv834 = 0;
return rv834; }
}
{ rt_int rv835 = (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R17 *)rt_nil_check(p_A))).f_NAME) == NULL));
return rv835; }
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
R12 * l_Y_836; memset(&l_Y_836, 0, sizeof l_Y_836);
l_Y_836 = r_LOOKUP(((*(R17 *)rt_nil_check(p_P))).f_NAME);
if ((!(l_Y_836 == NULL)))
{
if ((((((*(R12 *)rt_nil_check(l_Y_836))).f_KIND == g_Y_GEN) || (((*(R12 *)rt_nil_check(l_Y_836))).f_KIND == g_Y_CONST)) || (((((*(R12 *)rt_nil_check(l_Y_836))).f_KIND == g_Y_TYPE) && (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R17 *)rt_nil_check(p_P))).f_NAME) == NULL))))))
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
R17 * l_R_837; memset(&l_R_837, 0, sizeof l_R_837);
l_R_837 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
R9 l_NAME_838; memset(&l_NAME_838, 0, sizeof l_NAME_838);
S_R9(&l_NAME_838, ((*(R17 *)rt_nil_check(l_R_837))).f_NAME, 0);
if ((((*(R17 *)rt_nil_check(l_R_837))).f_KIND == g_TS_GEN))
{
return;
}
if ((r_TEQS(l_NAME_838, rt_str("ENUM_STD", 8)) || (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, l_NAME_838) == NULL))))
{
return;
}
if ((!((r_TEQS(l_NAME_838, rt_str("ENUM_REP", 8)) || r_TEQS(l_NAME_838, rt_str("ENUM_VAL_REP", 12))))))
{
if ((!(r_ORIG_LOOKUP(l_NAME_838) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(l_NAME_838)))).f_KIND == g_Y_REPTYPE))
{
return;
}
}
r_FAILT(p_LINE, rt_str("not a representation of an enumerated type (3.4.3): ", 52), l_NAME_838);
}
if ((((*(R17 *)rt_nil_check(l_R_837))).f_A == NULL))
{
r_FAILT(p_LINE, rt_str("the size of the representation is missing: ", 43), l_NAME_838);
}
{
R23 l_N_839; memset(&l_N_839, 0, sizeof l_N_839);
S_R23(&l_N_839, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_837))).f_A), 0);
rt_int l_NL_840; memset(&l_NL_840, 0, sizeof l_NL_840);
l_NL_840 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS;
if ((!(l_N_839).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is manifest (3.4.3)", 60));
}
if ((((l_N_839).f_V > ((rt_int)64LL)) || ((l_N_839).f_V < ((rt_int)0LL))))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is in [0:(FIXED.SIZE).MAX] (3.4.3)", 75));
}
if (r_TEQS(l_NAME_838, rt_str("ENUM_REP", 8)))
{
if ((!(((*(R17 *)rt_nil_check(l_R_837))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("VALUES belong to ENUM_VAL_REP (3.4.3)", 37));
}
if (((l_N_839).f_V < r_BITS_FOR(l_NL_840)))
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
R17 * l_L_841; memset(&l_L_841, 0, sizeof l_L_841);
l_L_841 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
for (;;) {
if ((l_L_841 == NULL)) goto L_end842;
{
{
R17 * l_V_843; memset(&l_V_843, 0, sizeof l_V_843);
l_V_843 = ((*(R17 *)rt_nil_check(l_R_837))).f_B;
rt_int l_FOUND_844; memset(&l_FOUND_844, 0, sizeof l_FOUND_844);
l_FOUND_844 = ((rt_int)0LL);
for (;;) {
if ((l_V_843 == NULL)) goto L_end845;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_V_843))).f_NAME, ((*(R17 *)rt_nil_check(l_L_841))).f_NAME))
{
l_FOUND_844 = rt_add(l_FOUND_844, ((rt_int)1LL));
}
l_V_843 = ((*(R17 *)rt_nil_check(l_V_843))).f_NEXT;
}
RT_B_TICK();
} L_end845: ;
if ((!(l_FOUND_844 == ((rt_int)1LL))))
{
r_FAILT(p_LINE, rt_str("VALUES must give every literal once (3.4.3): ", 45), ((*(R17 *)rt_nil_check(l_L_841))).f_NAME);
}
}
l_L_841 = ((*(R17 *)rt_nil_check(l_L_841))).f_NEXT;
}
RT_B_TICK();
} L_end842: ;
}
{
R17 * l_V_846; memset(&l_V_846, 0, sizeof l_V_846);
l_V_846 = ((*(R17 *)rt_nil_check(l_R_837))).f_B;
for (;;) {
if ((l_V_846 == NULL)) goto L_end847;
{
if ((r_FIND_LITERAL(((*(R17 *)rt_nil_check(l_V_846))).f_NAME, ((*(R22 *)rt_nil_check(p_T))).f_BASE) == NULL))
{
r_FAILT(p_LINE, rt_str("not a literal of the type: ", 27), ((*(R17 *)rt_nil_check(l_V_846))).f_NAME);
}
{
R14 l_SAVED_CODE_848; memset(&l_SAVED_CODE_848, 0, sizeof l_SAVED_CODE_848);
S_R14(&l_SAVED_CODE_848, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_B_849; memset(&l_B_849, 0, sizeof l_B_849);
S_R26(&l_B_849, r_EXPR(((*(R17 *)rt_nil_check(l_V_846))).f_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_848, 0);
if ((!(((*(R22 *)rt_nil_check((l_B_849).f_T))).f_KIND == g_T_BITS)))
{
r_FAIL(p_LINE, rt_str("a representation in VALUES is a bitstring (3.4.3)", 49));
}
if ((((*(R22 *)rt_nil_check((l_B_849).f_T))).f_MLEN).f_OK)
{
if ((!((((*(R22 *)rt_nil_check((l_B_849).f_T))).f_MLEN).f_V == (l_N_839).f_V)))
{
r_FAILT(p_LINE, rt_str("the representation must have SIZE bits (3.4.3): ", 48), ((*(R17 *)rt_nil_check(l_V_846))).f_NAME);
}
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_846))).f_A))).f_KIND == g_N_BITS))
{
{
R17 * l_U_850; memset(&l_U_850, 0, sizeof l_U_850);
l_U_850 = ((*(R17 *)rt_nil_check(l_V_846))).f_NEXT;
for (;;) {
if ((l_U_850 == NULL)) goto L_end851;
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_850))).f_A))).f_KIND == g_N_BITS))
{
if (r_TEQ(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_850))).f_A))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_846))).f_A))).f_NAME))
{
r_FAILT(p_LINE, rt_str("two literals have the same representation (3.4.3): ", 51), ((*(R17 *)rt_nil_check(l_U_850))).f_NAME);
}
}
l_U_850 = ((*(R17 *)rt_nil_check(l_U_850))).f_NEXT;
}
RT_B_TICK();
} L_end851: ;
}
}
}
l_V_846 = ((*(R17 *)rt_nil_check(l_V_846))).f_NEXT;
}
RT_B_TICK();
} L_end847: ;
}
}
}
static void r_STRING_LENGTH(R22 * p_T, R17 * p_A) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
{
R21 * l_B_852; memset(&l_B_852, 0, sizeof l_B_852);
l_B_852 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_852 == NULL)) goto L_end853;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_852))).f_NAME, ((*(R17 *)rt_nil_check(p_A))).f_NAME) && ((((*(R21 *)rt_nil_check(l_B_852))).f_C).f_LEN > ((rt_int)0LL))))
{
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, ((*(R21 *)rt_nil_check(l_B_852))).f_C, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, ({ R23 rc854; memset(&rc854, 0, sizeof rc854);  rc854.f_OK = ((*(R21 *)rt_nil_check(l_B_852))).f_HASMV; rc854.f_V = ((*(R21 *)rt_nil_check(l_B_852))).f_MV; rc854; }), 0);
return;
}
l_B_852 = ((*(R21 *)rt_nil_check(l_B_852))).f_NEXT;
}
RT_B_TICK();
} L_end853: ;
}
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_GEN, ((*(R17 *)rt_nil_check(p_A))).f_NAME, 0);
return;
}
else if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return;
}
{
R9 l_C_855; memset(&l_C_855, 0, sizeof l_C_855);
R23 l_M_856; memset(&l_M_856, 0, sizeof l_M_856);
r_ATTR_VALUE(p_A, &l_C_855, &l_M_856);
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, l_C_855, 0);
S_R23(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, l_M_856, 0);
((*(R22 *)rt_nil_check(p_T))).f_RLEVEL = r_CUR_LEVEL();
}
}
static R22 * r_RESOLVE_ARRAY(R17 * p_TS) { RT_B_TICK(); 
R22 * l_T_857; memset(&l_T_857, 0, sizeof l_T_857);
l_T_857 = r_NEW_TYP(g_T_ARR);
R17 * l_R_858; memset(&l_R_858, 0, sizeof l_R_858);
l_R_858 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R25 * l_TAIL_859; memset(&l_TAIL_859, 0, sizeof l_TAIL_859);
l_TAIL_859 = NULL;
for (;;) {
if ((l_R_858 == NULL)) goto L_end860;
{
{
R25 * l_B_861; memset(&l_B_861, 0, sizeof l_B_861);
l_B_861 = ((R25 *)rt_b_new(sizeof (R25)));
R26 l_LO_862; memset(&l_LO_862, 0, sizeof l_LO_862);
R26 l_HI_863; memset(&l_HI_863, 0, sizeof l_HI_863);
if (r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_858))).f_A))
{
S_R26(&l_LO_862, r_MKET(r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_858))).f_A))).f_NAME), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_LO_862, r_EXPR(((*(R17 *)rt_nil_check(l_R_858))).f_A, NULL), 0);
}
if (r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_858))).f_B))
{
S_R26(&l_HI_863, r_MKET(r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_858))).f_B))).f_NAME), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_HI_863, r_EXPR(((*(R17 *)rt_nil_check(l_R_858))).f_B, (l_LO_862).f_T), 0);
}
S_R25(&(*(R25 *)rt_nil_check(l_B_861)), ({ R25 rc864; memset(&rc864, 0, sizeof rc864);  S_R9(&rc864.f_LO, (l_LO_862).f_C, 0); S_R9(&rc864.f_HI, (l_HI_863).f_C, 0); S_R23(&rc864.f_MLO, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_858))).f_A), 0); S_R23(&rc864.f_MHI, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_858))).f_B), 0); rc864.f_ANYARG = 0; rc864.f_NEXT = NULL; rc864; }), 0);
if (((!r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_858))).f_A)) && (!r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_858))).f_B))))
{
if ((!r_SAME_CLASS(r_REAL_TYPE((l_LO_862).f_T), r_REAL_TYPE((l_HI_863).f_T))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_858))).f_LINE, rt_str("the bounds of an array-bound are of one type class (3.8.1)", 58));
}
S_R9(&((*(R25 *)rt_nil_check(l_B_861))).f_LO, r_INDEX_OF(l_LO_862, ((*(R17 *)rt_nil_check(l_R_858))).f_LINE), 0);
S_R9(&((*(R25 *)rt_nil_check(l_B_861))).f_HI, r_INDEX_OF(l_HI_863, ((*(R17 *)rt_nil_check(l_R_858))).f_LINE), 0);
}
if (((((*(R22 *)rt_nil_check((l_LO_862).f_T))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check((l_LO_862).f_T))).f_KIND == g_T_ABS)))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_861))).f_MLO, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_R_858))).f_A, (l_LO_862).f_T), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_861))).f_MHI, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_R_858))).f_B, (l_LO_862).f_T), 0);
if ((!r_TEQ(((*(R25 *)rt_nil_check(l_B_861))).f_LO, (l_LO_862).f_C)))
{
S_R23(&((*(R25 *)rt_nil_check(l_B_861))).f_MLO, r_NO_MVAL(), 0);
S_R23(&((*(R25 *)rt_nil_check(l_B_861))).f_MHI, r_NO_MVAL(), 0);
}
}
else if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_LO_862).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_858))).f_LINE, rt_str("array bounds are integer or enumerated (3.8.1)", 46));
}
if ((l_TAIL_859 == NULL))
{
((*(R22 *)rt_nil_check(l_T_857))).f_BOUNDS = l_B_861;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_859))).f_NEXT = l_B_861;
}
l_TAIL_859 = l_B_861;
((*(R22 *)rt_nil_check(l_T_857))).f_DIMS = rt_add(((*(R22 *)rt_nil_check(l_T_857))).f_DIMS, ((rt_int)1LL));
}
l_R_858 = ((*(R17 *)rt_nil_check(l_R_858))).f_NEXT;
}
RT_B_TICK();
} L_end860: ;
((*(R22 *)rt_nil_check(l_T_857))).f_RLEVEL = r_CUR_LEVEL();
((*(R22 *)rt_nil_check(l_T_857))).f_ELEM = r_RESOLVE(((*(R17 *)rt_nil_check(p_TS))).f_C);
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_857))).f_ELEM))).f_KIND == g_T_ARR))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("ARRAY ... OF ARRAY is forbidden (3.8.1)", 39));
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_D == NULL)))
{
((*(R22 *)rt_nil_check(l_T_857))).f_REPS = r_EXPAND_REP(((*(R17 *)rt_nil_check(p_TS))).f_D, l_T_857, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
r_CHECK_REP_CLASS(l_T_857, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
S_R9(&((*(R22 *)rt_nil_check(l_T_857))).f_CNAME, r_ARRAY_STRUCT(((*(R22 *)rt_nil_check(l_T_857))).f_ELEM, ((*(R22 *)rt_nil_check(l_T_857))).f_DIMS), 0);
{ R22 * rv865 = l_T_857;
return rv865; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER(R17 * p_TS) { RT_B_TICK(); 
R12 * l_Y_866; memset(&l_Y_866, 0, sizeof l_Y_866);
l_Y_866 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((((*(R17 *)rt_nil_check(p_TS))).f_A == NULL))
{
{
R21 * l_B_867; memset(&l_B_867, 0, sizeof l_B_867);
l_B_867 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_867 == NULL)) goto L_end868;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_867))).f_NAME, ((*(R17 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R21 *)rt_nil_check(l_B_867))).f_T == NULL))))
{
if ((!(r_CUR_GENERIC() == NULL)))
{
if ((r_FIND_BIND(((*(R12 *)rt_nil_check(r_CUR_GENERIC()))).f_BINDINGS, ((*(R17 *)rt_nil_check(p_TS))).f_NAME) == l_B_867))
{
{ R22 * rv869 = r_MARK_GENP(((*(R21 *)rt_nil_check(l_B_867))).f_T, ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
return rv869; }
}
}
{ R22 * rv870 = ((*(R21 *)rt_nil_check(l_B_867))).f_T;
return rv870; }
}
l_B_867 = ((*(R21 *)rt_nil_check(l_B_867))).f_NEXT;
}
RT_B_TICK();
} L_end868: ;
}
}
if ((l_Y_866 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_866))).f_KIND == g_Y_GEN))
{
{ R22 * rv871 = r_GEN_TYPE(p_TS);
return rv871; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_866))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((!r_SEG_VISIBLE(l_Y_866, ((*(R17 *)rt_nil_check(p_TS))).f_LINE)))
{
}
if ((((*(R12 *)rt_nil_check(l_Y_866))).f_DECL == NULL))
{
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
{ R22 * rv872 = ((*(R12 *)rt_nil_check(l_Y_866))).f_T;
return rv872; }
}
{
R17 * l_D_873; memset(&l_D_873, 0, sizeof l_D_873);
l_D_873 = ((*(R12 *)rt_nil_check(l_Y_866))).f_DECL;
R22 * l_T_874; memset(&l_T_874, 0, sizeof l_T_874);
if ((((*(R17 *)rt_nil_check(l_D_873))).f_A == NULL))
{
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_866))).f_T == NULL))
{
if (((*(R12 *)rt_nil_check(l_Y_866))).f_BUSY)
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R12 *)rt_nil_check(l_Y_866))).f_BUSY = 1;
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_873))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R12 *)rt_nil_check(l_Y_866))).f_T = r_RESOLVE_RECORD(((*(R17 *)rt_nil_check(l_D_873))).f_B, r_RECORD_NAME(l_Y_866), l_Y_866, NULL);
}
else
{
((*(R12 *)rt_nil_check(l_Y_866))).f_T = r_RESOLVE_IN_DECL(l_Y_866, NULL);
if ((((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_866))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_866))).f_T))).f_KIND == g_T_ENUM))))
{
((*(R12 *)rt_nil_check(l_Y_866))).f_T = r_COPY_TYP(((*(R12 *)rt_nil_check(l_Y_866))).f_T);
}
}
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_866))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_866))).f_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_866))).f_NAME, 0);
}
((*(R12 *)rt_nil_check(l_Y_866))).f_BUSY = 0;
}
l_T_874 = ((*(R12 *)rt_nil_check(l_Y_866))).f_T;
}
else
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_873))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_874 = r_RECORD_INSTANCE(l_Y_866, p_TS);
}
else
{
l_T_874 = r_RESOLVE_IN_DECL(l_Y_866, p_TS);
}
}
{ R22 * rv875 = r_ABSTRACT_VIEW(l_Y_866, l_T_874);
return rv875; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ABSTRACT_VIEW(R12 * p_Y, R22 * p_T) { RT_B_TICK(); 
R22 * l_A_876; memset(&l_A_876, 0, sizeof l_A_876);
if (((((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL) || (!((*(R12 *)rt_nil_check(p_Y))).f_EXPORTED)))
{
{ R22 * rv877 = p_T;
return rv877; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ R22 * rv878 = p_T;
return rv878; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
if (r_EXPORTS_ORDER(p_Y))
{
{ R22 * rv879 = p_T;
return rv879; }
}
l_A_876 = r_COPY_TYP(p_T);
((*(R22 *)rt_nil_check(l_A_876))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_876))).f_DECL = p_Y;
{ R22 * rv880 = l_A_876;
return rv880; }
}
l_A_876 = r_NEW_TYP(g_T_ABS);
((*(R22 *)rt_nil_check(l_A_876))).f_BASE = p_T;
S_R9(&((*(R22 *)rt_nil_check(l_A_876))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R22 *)rt_nil_check(l_A_876))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_876))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_A_876))).f_ARGS = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
{ R22 * rv881 = l_A_876;
return rv881; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTS_ORDER(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv882 = (((((r_EXPORTS_OP(p_Y, rt_str("LESS_THAN_", 10)) && r_EXPORTS_OP(p_Y, rt_str("LESS_EQUAL_", 11))) && r_EXPORTS_OP(p_Y, rt_str("GREATER_THAN_", 13))) && r_EXPORTS_OP(p_Y, rt_str("GREATER_EQUAL_", 14))) && r_EXPORTS_OP(p_Y, rt_str("SUCC", 4))) && r_EXPORTS_OP(p_Y, rt_str("PRED", 4)));
return rv882; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTS_OP(R12 * p_Y, rstr p_OP) { RT_B_TICK(); 
R12 * l_R_883; memset(&l_R_883, 0, sizeof l_R_883);
l_R_883 = ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_MODL))).f_MEMBERS;
for (;;) {
if ((l_R_883 == NULL)) goto L_end884;
{
if ((((((*(R12 *)rt_nil_check(l_R_883))).f_KIND == g_Y_ROUTINE) && ((*(R12 *)rt_nil_check(l_R_883))).f_EXPORTED) && r_TEQ(((*(R12 *)rt_nil_check(l_R_883))).f_PREFIX, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)))
{
if (r_TEQS(r_BASE_NAME(r_ORIGINAL(l_R_883)), p_OP))
{
{ rt_int rv885 = 1;
return rv885; }
}
}
l_R_883 = ((*(R12 *)rt_nil_check(l_R_883))).f_SNEXT;
}
RT_B_TICK();
} L_end884: ;
{ rt_int rv886 = 0;
return rv886; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_UNORDERED(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))
{
{ rt_int rv887 = 0;
return rv887; }
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_UNORDERED)
{
{ rt_int rv888 = 1;
return rv888; }
}
if (((!(((*(R22 *)rt_nil_check(p_T))).f_DECL == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_MODL == NULL))))
{
{ rt_int rv889 = (!r_IN_MODULE(((*(R22 *)rt_nil_check(p_T))).f_MODL));
return rv889; }
}
{ rt_int rv890 = 0;
return rv890; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_P_891; memset(&l_P_891, 0, sizeof l_P_891);
l_P_891 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_891 == NULL)) goto L_end892;
{
if ((l_P_891 == p_M))
{
{ rt_int rv893 = 1;
return rv893; }
}
l_P_891 = ((*(R12 *)rt_nil_check(l_P_891))).f_MODL;
}
RT_B_TICK();
} L_end892: ;
{ rt_int rv894 = 0;
return rv894; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R17 * p_TS) { RT_B_TICK(); 
R17 * l_D_895; memset(&l_D_895, 0, sizeof l_D_895);
l_D_895 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_896; memset(&l_T_896, 0, sizeof l_T_896);
if ((p_TS == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
l_T_896 = r_RESOLVE(((*(R17 *)rt_nil_check(l_D_895))).f_B);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
{ R22 * rv897 = l_T_896;
return rv897; }
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R17 *)rt_nil_check(l_D_895))).f_A, p_TS);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
l_T_896 = r_RESOLVE(((*(R17 *)rt_nil_check(l_D_895))).f_B);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
r_CLOSE_SCOPE();
{ R22 * rv898 = l_T_896;
return rv898; }
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R17 * p_FORMALS, R17 * p_TS) { RT_B_TICK(); 
R17 * l_F_899; memset(&l_F_899, 0, sizeof l_F_899);
l_F_899 = p_FORMALS;
R17 * l_A_900; memset(&l_A_900, 0, sizeof l_A_900);
l_A_900 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_899 == NULL)) goto L_end901;
{
{
R17 * l_N_902; memset(&l_N_902, 0, sizeof l_N_902);
l_N_902 = ((*(R17 *)rt_nil_check(l_F_899))).f_A;
for (;;) {
if ((l_N_902 == NULL)) goto L_end903;
{
if ((l_A_900 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R17 *)rt_nil_check(l_F_899))).f_B == NULL))
{
{
R12 * l_Y_904; memset(&l_Y_904, 0, sizeof l_Y_904);
l_Y_904 = r_NEW_SYM(g_Y_TYPE, ((*(R17 *)rt_nil_check(l_N_902))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_904))).f_T = r_ARG_TYPE(l_A_900);
r_DEFINE(l_Y_904, ((*(R17 *)rt_nil_check(l_A_900))).f_LINE);
}
}
else
{
{
R12 * l_Y_905; memset(&l_Y_905, 0, sizeof l_Y_905);
l_Y_905 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(l_N_902))).f_NAME);
R9 l_C_906; memset(&l_C_906, 0, sizeof l_C_906);
R23 l_M_907; memset(&l_M_907, 0, sizeof l_M_907);
((*(R12 *)rt_nil_check(l_Y_905))).f_T = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_899))).f_B);
if (((((*(R17 *)rt_nil_check(l_A_900))).f_KIND == g_N_ANY) && (!(((*(R17 *)rt_nil_check(l_F_899))).f_IV == ((rt_int)1LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_900))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
if ((((*(R17 *)rt_nil_check(l_A_900))).f_KIND == g_N_ANY))
{
S_R9(&l_C_906, r_MK(rt_str("ANY", 3)), 0);
S_R23(&l_M_907, r_NO_MVAL(), 0);
}
else if (((((*(R17 *)rt_nil_check(l_A_900))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_A_900))).f_KIND == g_N_DONTCARE)))
{
S_R9(&l_C_906, r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(l_A_900))).f_NAME), 0);
S_R23(&l_M_907, r_NO_MVAL(), 0);
}
else
{
r_ATTR_VALUE(l_A_900, &l_C_906, &l_M_907);
}
if (((((l_M_907).f_OK && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_905))).f_T))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_905))).f_T))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_905))).f_T))).f_SCALE == ((rt_int)0LL))))
{
if ((((l_M_907).f_V < (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_905))).f_T))).f_MLO).f_V) || ((l_M_907).f_V > (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_905))).f_T))).f_MHI).f_V)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_900))).f_LINE, rt_str("the argument is outside the range of the type formal (3.12.2)", 61));
}
}
if ((((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_905))).f_T))).f_KIND == g_T_INT)) && (!r_IS_GEN_TEXT(l_C_906))) && (!(((*(R17 *)rt_nil_check(l_A_900))).f_KIND == g_N_ANY))))
{
S_R9(&l_C_906, (r_EXPR(l_A_900, ((*(R12 *)rt_nil_check(l_Y_905))).f_T)).f_C, 0);
S_R23(&l_M_907, r_ENUM_MANIFEST(l_A_900, ((*(R12 *)rt_nil_check(l_Y_905))).f_T), 0);
}
S_R9(&((*(R12 *)rt_nil_check(l_Y_905))).f_ACCESS, l_C_906, 0);
((*(R12 *)rt_nil_check(l_Y_905))).f_HASMV = (l_M_907).f_OK;
((*(R12 *)rt_nil_check(l_Y_905))).f_MV = (l_M_907).f_V;
((*(R12 *)rt_nil_check(l_Y_905))).f_INPUT = 1;
r_DEFINE(l_Y_905, ((*(R17 *)rt_nil_check(l_A_900))).f_LINE);
}
}
l_A_900 = ((*(R17 *)rt_nil_check(l_A_900))).f_NEXT;
l_N_902 = ((*(R17 *)rt_nil_check(l_N_902))).f_NEXT;
}
RT_B_TICK();
} L_end903: ;
}
l_F_899 = ((*(R17 *)rt_nil_check(l_F_899))).f_NEXT;
}
RT_B_TICK();
} L_end901: ;
if ((!(l_A_900 == NULL)))
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
{ R9 rv908 = ((*(R12 *)rt_nil_check(p_Y))).f_FWD;
return rv908; }
rt_raise(RT_X_INIT);
}
static R22 * r_TARGET(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS);
}
{ R22 * rv909 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET;
return rv909; }
rt_raise(RT_X_INIT);
}
static R9 r_CTYPE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_910; memset(&l_K_910, 0, sizeof l_K_910);
l_K_910 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
{ R9 rv911 = r_MK(rt_str("rt_int", 6));
return rv911; }
}
else if ((l_K_910 == g_T_FLOAT))
{
if (r_IS_D(p_T))
{
{ R9 rv912 = r_MK(rt_str("rt_b_d", 6));
return rv912; }
}
{ R9 rv913 = r_MK(rt_str("double", 6));
return rv913; }
}
else if (((l_K_910 == g_T_STR) || (l_K_910 == g_T_BITS)))
{
{ R9 rv914 = r_MK(rt_str("rstr", 4));
return rv914; }
}
else if (((l_K_910 == g_T_REC) || (l_K_910 == g_T_ARR)))
{
{ R9 rv915 = ((*(R22 *)rt_nil_check(p_T))).f_CNAME;
return rv915; }
}
else if ((l_K_910 == g_T_ABS))
{
{ R9 rv916 = r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv916; }
}
else if ((l_K_910 == g_T_SEM))
{
{ R9 rv917 = r_MK(rt_str("rt_b_sem *", 10));
return rv917; }
}
else if ((l_K_910 == g_T_PATHS))
{
{ R9 rv918 = r_MK(rt_str("rt_b_paths", 10));
return rv918; }
}
else if ((l_K_910 == g_T_VOID))
{
{ R9 rv919 = r_MK(rt_str("void", 4));
return rv919; }
}
else if ((l_K_910 == g_T_PTR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R17 * l_TT_920; memset(&l_TT_920, 0, sizeof l_TT_920);
l_TT_920 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R17 *)rt_nil_check(l_TT_920))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(l_TT_920))).f_A == NULL)))
{
{
R12 * l_Y_921; memset(&l_Y_921, 0, sizeof l_Y_921);
l_Y_921 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(l_TT_920))).f_NAME);
if ((!(l_Y_921 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_921))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_921))).f_DECL == NULL))))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_921))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_921))).f_DECL))).f_A == NULL)))
{
{ R9 rv922 = r_CATS(r_RECORD_NAME(l_Y_921), rt_str(" *", 2));
return rv922; }
}
}
}
}
}
}
}
{ R9 rv923 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv923; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R17 * p_E) { RT_B_TICK(); 
{ rt_int rv924 = ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv924; }
rt_raise(RT_X_INIT);
}
static R24 * r_NEW_FIELD(R9 p_NAME, R22 * p_T, rt_int p_KIND) { RT_B_TICK(); 
R24 * l_F_925; memset(&l_F_925, 0, sizeof l_F_925);
l_F_925 = ((R24 *)rt_b_new(sizeof (R24)));
S_R24(&(*(R24 *)rt_nil_check(l_F_925)), ({ R24 rc926; memset(&rc926, 0, sizeof rc926);  S_R9(&rc926.f_NAME, p_NAME, 0); S_R9(&rc926.f_CNAME, r_FMT1(rt_str("f_@", 3), r_CID(p_NAME)), 0); rc926.f_T = p_T; rc926.f_KIND = p_KIND; S_R9(&rc926.f_TAGF, r_NO_TEXT(), 0); rc926.f_LABELS = NULL; rc926.f_NEXT = NULL; rc926; }), 0);
{ R24 * rv927 = l_F_925;
return rv927; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_FIELD(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R24 * l_F_928; memset(&l_F_928, 0, sizeof l_F_928);
l_F_928 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_928 == NULL)) goto L_end929;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_928))).f_NAME, p_NAME))
{
{ R24 * rv930 = l_F_928;
return rv930; }
}
l_F_928 = ((*(R24 *)rt_nil_check(l_F_928))).f_NEXT;
}
RT_B_TICK();
} L_end929: ;
{ R24 * rv931 = NULL;
return rv931; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_VFIELD(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R24 * l_F_932; memset(&l_F_932, 0, sizeof l_F_932);
l_F_932 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FIRST_933; memset(&l_FIRST_933, 0, sizeof l_FIRST_933);
l_FIRST_933 = NULL;
for (;;) {
if ((l_F_932 == NULL)) goto L_end934;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_932))).f_NAME, p_NAME))
{
if ((l_FIRST_933 == NULL))
{
l_FIRST_933 = l_F_932;
}
if (((((*(R24 *)rt_nil_check(l_F_932))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
{ R24 * rv935 = l_F_932;
return rv935; }
}
{
R23 l_TAGV_936; memset(&l_TAGV_936, 0, sizeof l_TAGV_936);
S_R23(&l_TAGV_936, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(l_F_932))).f_TAGF), 0);
if ((l_TAGV_936).f_OK)
{
if (r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_932))).f_LABELS, (l_TAGV_936).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(l_F_932))).f_TAGF)))).f_T))
{
{ R24 * rv937 = l_F_932;
return rv937; }
}
}
}
}
l_F_932 = ((*(R24 *)rt_nil_check(l_F_932))).f_NEXT;
}
RT_B_TICK();
} L_end934: ;
{ R24 * rv938 = l_FIRST_933;
return rv938; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL) { RT_B_TICK(); 
R24 * l_P_939; memset(&l_P_939, 0, sizeof l_P_939);
l_P_939 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_940; memset(&l_N_940, 0, sizeof l_N_940);
l_N_940 = ((rt_int)0LL);
for (;;) {
if ((l_P_939 == NULL)) goto L_end941;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_P_939))).f_NAME, ((*(R24 *)rt_nil_check(p_F))).f_NAME))
{
if ((((((((*(R24 *)rt_nil_check(l_P_939))).f_TAGF).f_LEN == ((rt_int)0LL)) || ((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL))) || (!r_TEQ(((*(R24 *)rt_nil_check(l_P_939))).f_TAGF, ((*(R24 *)rt_nil_check(p_F))).f_TAGF))) || (((*(R24 *)rt_nil_check(l_P_939))).f_LABELS == ((*(R24 *)rt_nil_check(p_F))).f_LABELS)))
{
r_FAILT(((rt_int)0LL), rt_str("the field names of a record must be distinct (3.9.1): ", 54), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
l_N_940 = rt_add(l_N_940, ((rt_int)1LL));
}
l_P_939 = ((*(R24 *)rt_nil_check(l_P_939))).f_NEXT;
}
RT_B_TICK();
} L_end941: ;
if ((l_N_940 > ((rt_int)0LL)))
{
S_R9(&((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_940)), 0);
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
R17 * l_D_942; memset(&l_D_942, 0, sizeof l_D_942);
l_D_942 = p_DECLS;
for (;;) {
if ((l_D_942 == NULL)) goto L_end943;
{
if ((((*(R17 *)rt_nil_check(l_D_942))).f_KIND == g_N_VAR))
{
{
R22 * l_FT_944; memset(&l_FT_944, 0, sizeof l_FT_944);
l_FT_944 = r_RESOLVE(((*(R17 *)rt_nil_check(l_D_942))).f_B);
R17 * l_N_945; memset(&l_N_945, 0, sizeof l_N_945);
l_N_945 = ((*(R17 *)rt_nil_check(l_D_942))).f_A;
for (;;) {
if ((l_N_945 == NULL)) goto L_end946;
{
{
R24 * l_F_947; memset(&l_F_947, 0, sizeof l_F_947);
l_F_947 = r_NEW_FIELD(((*(R17 *)rt_nil_check(l_N_945))).f_NAME, l_FT_944, ((rt_int)0LL));
S_R9(&((*(R24 *)rt_nil_check(l_F_947))).f_TAGF, p_TAGN, 0);
((*(R24 *)rt_nil_check(l_F_947))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_947, &(*p_TAIL));
if (((r_LOOKUP(((*(R17 *)rt_nil_check(l_N_945))).f_NAME) == NULL) || (!(((*(R12 *)rt_nil_check(r_LOOKUP(((*(R17 *)rt_nil_check(l_N_945))).f_NAME)))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))))
{
{
R12 * l_Y_948; memset(&l_Y_948, 0, sizeof l_Y_948);
l_Y_948 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(l_N_945))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_948))).f_T = l_FT_944;
S_R9(&((*(R12 *)rt_nil_check(l_Y_948))).f_ACCESS, r_FMT1(rt_str("$S.@", 4), ((*(R24 *)rt_nil_check(l_F_947))).f_CNAME), 0);
((*(R12 *)rt_nil_check(l_Y_948))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_Y_948))).f_LEVEL = rt_neg(((rt_int)1LL));
((*(R12 *)rt_nil_check(l_Y_948))).f_OWNER = rt_neg(((rt_int)1LL));
r_DEFINE(l_Y_948, ((*(R17 *)rt_nil_check(l_D_942))).f_LINE);
}
}
}
l_N_945 = ((*(R17 *)rt_nil_check(l_N_945))).f_NEXT;
}
RT_B_TICK();
} L_end946: ;
}
}
else
{
{
R24 * l_TF_949; memset(&l_TF_949, 0, sizeof l_TF_949);
l_TF_949 = r_FIND_FIELD(p_T, ((*(R17 *)rt_nil_check(l_D_942))).f_NAME);
R17 * l_S_950; memset(&l_S_950, 0, sizeof l_S_950);
l_S_950 = ((*(R17 *)rt_nil_check(l_D_942))).f_A;
if ((l_TF_949 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_942))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R17 *)rt_nil_check(l_D_942))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_949))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_942))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R17 *)rt_nil_check(l_D_942))).f_NAME);
}
{
R17 * l_O_951; memset(&l_O_951, 0, sizeof l_O_951);
l_O_951 = p_DECLS;
for (;;) {
if ((l_O_951 == l_D_942)) goto L_end952;
{
if ((((*(R17 *)rt_nil_check(l_O_951))).f_KIND == g_N_VARIANT))
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_O_951))).f_NAME, ((*(R17 *)rt_nil_check(l_D_942))).f_NAME))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_942))).f_LINE, rt_str("two variant parts discriminate on the tag ", 42), ((*(R17 *)rt_nil_check(l_D_942))).f_NAME);
}
}
l_O_951 = ((*(R17 *)rt_nil_check(l_O_951))).f_NEXT;
}
RT_B_TICK();
} L_end952: ;
}
r_CHECK_VARIANT_NAMES(l_D_942, ((*(R24 *)rt_nil_check(l_TF_949))).f_T);
for (;;) {
if ((l_S_950 == NULL)) goto L_end953;
{
r_OPEN_SCOPE();
r_RECORD_FIELDS(p_T, ((*(R17 *)rt_nil_check(l_S_950))).f_B, C_R9(((*(R17 *)rt_nil_check(l_D_942))).f_NAME), ((*(R17 *)rt_nil_check(l_S_950))).f_A, &(*p_TAIL));
r_CLOSE_SCOPE();
l_S_950 = ((*(R17 *)rt_nil_check(l_S_950))).f_NEXT;
}
RT_B_TICK();
} L_end953: ;
}
}
l_D_942 = ((*(R17 *)rt_nil_check(l_D_942))).f_NEXT;
}
RT_B_TICK();
} L_end943: ;
}
static void r_CHECK_VARIANT_NAMES(R17 * p_D, R22 * p_TT) { RT_B_TICK(); 
R17 * l_S_954; memset(&l_S_954, 0, sizeof l_S_954);
l_S_954 = ((*(R17 *)rt_nil_check(p_D))).f_A;
R17 * l_LOS_955; memset(&l_LOS_955, 0, sizeof l_LOS_955);
l_LOS_955 = NULL;
R17 * l_HIS_956; memset(&l_HIS_956, 0, sizeof l_HIS_956);
l_HIS_956 = NULL;
rt_int l_LO_LIM_957; memset(&l_LO_LIM_957, 0, sizeof l_LO_LIM_957);
rt_int l_HI_LIM_958; memset(&l_HI_LIM_958, 0, sizeof l_HI_LIM_958);
R22 * l_R_959; memset(&l_R_959, 0, sizeof l_R_959);
l_R_959 = r_REAL_TYPE(p_TT);
l_LO_LIM_957 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
l_HI_LIM_958 = INT64_MAX;
if ((((*(R22 *)rt_nil_check(l_R_959))).f_KIND == g_T_ENUM))
{
l_LO_LIM_957 = ((rt_int)0LL);
l_HI_LIM_958 = rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_R_959))).f_BASE))).f_NLITS, ((rt_int)1LL));
}
else if ((((*(R22 *)rt_nil_check(l_R_959))).f_KIND == g_T_BOOL))
{
l_LO_LIM_957 = ((rt_int)0LL);
l_HI_LIM_958 = ((rt_int)1LL);
}
if ((((*(R22 *)rt_nil_check(l_R_959))).f_MLO).f_OK)
{
l_LO_LIM_957 = (((*(R22 *)rt_nil_check(l_R_959))).f_MLO).f_V;
}
if ((((*(R22 *)rt_nil_check(l_R_959))).f_MHI).f_OK)
{
l_HI_LIM_958 = (((*(R22 *)rt_nil_check(l_R_959))).f_MHI).f_V;
}
for (;;) {
if ((l_S_954 == NULL)) goto L_end960;
{
{
R17 * l_L_961; memset(&l_L_961, 0, sizeof l_L_961);
l_L_961 = ((*(R17 *)rt_nil_check(l_S_954))).f_A;
for (;;) {
if ((l_L_961 == NULL)) goto L_end962;
{
{
R23 l_A_963; memset(&l_A_963, 0, sizeof l_A_963);
R23 l_B_964; memset(&l_B_964, 0, sizeof l_B_964);
if ((((*(R17 *)rt_nil_check(l_L_961))).f_KIND == g_N_RANGE))
{
S_R23(&l_A_963, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_961))).f_A, p_TT), 0);
S_R23(&l_B_964, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_961))).f_B, p_TT), 0);
if (((l_A_963).f_OK && (((((*(R17 *)rt_nil_check(l_L_961))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_L_961))).f_IV == ((rt_int)3LL))))))
{
(l_A_963).f_V = rt_add((l_A_963).f_V, ((rt_int)1LL));
}
if (((l_B_964).f_OK && (((*(R17 *)rt_nil_check(l_L_961))).f_IV >= ((rt_int)2LL))))
{
(l_B_964).f_V = rt_sub((l_B_964).f_V, ((rt_int)1LL));
}
}
else
{
S_R23(&l_A_963, r_ENUM_MANIFEST(l_L_961, p_TT), 0);
S_R23(&l_B_964, l_A_963, 0);
}
if ((!(((l_A_963).f_OK && (l_B_964).f_OK))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_961))).f_LINE, rt_str("a variant-name is manifest (3.9.1)", 34));
}
if (((((l_A_963).f_V < l_LO_LIM_957) || ((l_B_964).f_V > l_HI_LIM_958)) || ((l_A_963).f_V > (l_B_964).f_V)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_961))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.1)", 49));
}
{
R17 * l_P_965; memset(&l_P_965, 0, sizeof l_P_965);
l_P_965 = l_LOS_955;
R17 * l_Q_966; memset(&l_Q_966, 0, sizeof l_Q_966);
l_Q_966 = l_HIS_956;
for (;;) {
if ((l_P_965 == NULL)) goto L_end967;
{
if ((((l_A_963).f_V <= ((*(R17 *)rt_nil_check(l_Q_966))).f_IV) && ((l_B_964).f_V >= ((*(R17 *)rt_nil_check(l_P_965))).f_IV)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_961))).f_LINE, rt_str("a value of the tag names two variants (3.9.1)", 45));
}
l_P_965 = ((*(R17 *)rt_nil_check(l_P_965))).f_NEXT;
l_Q_966 = ((*(R17 *)rt_nil_check(l_Q_966))).f_NEXT;
}
RT_B_TICK();
} L_end967: ;
}
{
R17 * l_P_968; memset(&l_P_968, 0, sizeof l_P_968);
l_P_968 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
R17 * l_Q_969; memset(&l_Q_969, 0, sizeof l_Q_969);
l_Q_969 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R17 *)rt_nil_check(l_P_968))).f_IV = (l_A_963).f_V;
((*(R17 *)rt_nil_check(l_Q_969))).f_IV = (l_B_964).f_V;
((*(R17 *)rt_nil_check(l_P_968))).f_NEXT = l_LOS_955;
((*(R17 *)rt_nil_check(l_Q_969))).f_NEXT = l_HIS_956;
l_LOS_955 = l_P_968;
l_HIS_956 = l_Q_969;
}
}
l_L_961 = ((*(R17 *)rt_nil_check(l_L_961))).f_NEXT;
}
RT_B_TICK();
} L_end962: ;
}
l_S_954 = ((*(R17 *)rt_nil_check(l_S_954))).f_NEXT;
}
RT_B_TICK();
} L_end960: ;
}
static R22 * r_RESOLVE_RECORD(R17 * p_TS, R9 p_CNAME, R12 * p_Y, R17 * p_FORMALS) { RT_B_TICK(); 
R22 * l_T_970; memset(&l_T_970, 0, sizeof l_T_970);
l_T_970 = r_NEW_TYP(g_T_REC);
R24 * l_TAIL_971; memset(&l_TAIL_971, 0, sizeof l_TAIL_971);
l_TAIL_971 = NULL;
((*(R22 *)rt_nil_check(l_T_970))).f_BASE = l_T_970;
((*(R22 *)rt_nil_check(l_T_970))).f_DECL = p_Y;
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_D == NULL)))
{
((*(R22 *)rt_nil_check(l_T_970))).f_REPS = r_EXPAND_REP(((*(R17 *)rt_nil_check(p_TS))).f_D, l_T_970, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
r_CHECK_REP_CLASS(l_T_970, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(l_T_970))).f_CNAME, p_CNAME, 0);
}
else
{
S_R9(&((*(R22 *)rt_nil_check(l_T_970))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R22 *)rt_nil_check(l_T_970))).f_CNAME, ((*(R22 *)rt_nil_check(l_T_970))).f_CNAME));
}
{
R17 * l_F_972; memset(&l_F_972, 0, sizeof l_F_972);
l_F_972 = p_FORMALS;
for (;;) {
if ((l_F_972 == NULL)) goto L_end973;
{
if ((!(((*(R17 *)rt_nil_check(l_F_972))).f_B == NULL)))
{
{
R22 * l_FT_974; memset(&l_FT_974, 0, sizeof l_FT_974);
l_FT_974 = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_972))).f_B);
R17 * l_N_975; memset(&l_N_975, 0, sizeof l_N_975);
l_N_975 = ((*(R17 *)rt_nil_check(l_F_972))).f_A;
rt_int l_KIND_976; memset(&l_KIND_976, 0, sizeof l_KIND_976);
l_KIND_976 = ((rt_int)1LL);
if ((((*(R17 *)rt_nil_check(l_F_972))).f_IV == ((rt_int)1LL)))
{
l_KIND_976 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_974))) || (!(((*(R22 *)rt_nil_check(l_FT_974))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_F_972))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_975 == NULL)) goto L_end977;
{
r_ADD_FIELD(l_T_970, r_NEW_FIELD(((*(R17 *)rt_nil_check(l_N_975))).f_NAME, l_FT_974, l_KIND_976), &l_TAIL_971);
l_N_975 = ((*(R17 *)rt_nil_check(l_N_975))).f_NEXT;
}
RT_B_TICK();
} L_end977: ;
}
}
l_F_972 = ((*(R17 *)rt_nil_check(l_F_972))).f_NEXT;
}
RT_B_TICK();
} L_end973: ;
}
r_OPEN_SCOPE();
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_RECORD_FIELDS(l_T_970, ((*(R17 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_971);
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_CLOSE_SCOPE();
r_CHECK_RECORD_REP(l_T_970, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
r_COMPLETE_RECORD(l_T_970);
{ R22 * rv978 = l_T_970;
return rv978; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_RECORD_REP(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv979 = 0;
return rv979; }
}
{ rt_int rv980 = ((((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_KIND == g_N_REP) && r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_NAME, rt_str("RECORD_REP", 10)));
return rv980; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_RECORD_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_SEEN_981; memset(&l_SEEN_981, 0, sizeof l_SEEN_981);
l_SEEN_981 = NULL;
rt_int l_LISTED_982; memset(&l_LISTED_982, 0, sizeof l_LISTED_982);
l_LISTED_982 = 0;
if ((!r_IS_RECORD_REP(p_T)))
{
return;
}
{
R17 * l_P_983; memset(&l_P_983, 0, sizeof l_P_983);
l_P_983 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A;
for (;;) {
if ((l_P_983 == NULL)) goto L_end984;
{
if ((((*(R17 *)rt_nil_check(l_P_983))).f_IV == ((rt_int)1LL)))
{
l_LISTED_982 = 1;
}
r_CHECK_ELEMENTS(p_T, ((*(R17 *)rt_nil_check(l_P_983))).f_A, r_NO_TEXT(), NULL, &l_SEEN_981);
l_P_983 = ((*(R17 *)rt_nil_check(l_P_983))).f_NEXT;
}
RT_B_TICK();
} L_end984: ;
}
if (l_LISTED_982)
{
{
R24 * l_F_985; memset(&l_F_985, 0, sizeof l_F_985);
l_F_985 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_985 == NULL)) goto L_end986;
{
if ((((((*(R24 *)rt_nil_check(l_F_985))).f_TAGF).f_LEN == ((rt_int)0LL)) && (!r_IN_IDENTS(l_SEEN_981, ((*(R24 *)rt_nil_check(l_F_985))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("a record-reptype with element-specs positions every field (3.9.3): ", 67), ((*(R24 *)rt_nil_check(l_F_985))).f_NAME);
}
if ((((((*(R24 *)rt_nil_check(l_F_985))).f_TAGF).f_LEN > ((rt_int)0LL)) && (!r_IN_IDENTS(l_SEEN_981, r_CAT(r_MK(rt_str("|", 1)), ((*(R24 *)rt_nil_check(l_F_985))).f_TAGF)))))
{
r_FAILT(p_LINE, rt_str("a record-reptype with element-specs positions every variant part (3.9.3): ", 74), ((*(R24 *)rt_nil_check(l_F_985))).f_TAGF);
}
l_F_985 = ((*(R24 *)rt_nil_check(l_F_985))).f_NEXT;
}
RT_B_TICK();
} L_end986: ;
}
}
{
R17 * l_V_987; memset(&l_V_987, 0, sizeof l_V_987);
l_V_987 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_C;
for (;;) {
if ((l_V_987 == NULL)) goto L_end988;
{
{
R24 * l_TF_989; memset(&l_TF_989, 0, sizeof l_TF_989);
l_TF_989 = r_FIND_FIELD(p_T, ((*(R17 *)rt_nil_check(l_V_987))).f_NAME);
R17 * l_S_990; memset(&l_S_990, 0, sizeof l_S_990);
l_S_990 = ((*(R17 *)rt_nil_check(l_V_987))).f_A;
if ((l_TF_989 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_V_987))).f_LINE, rt_str("not a tag of the record (3.9.3): ", 33), ((*(R17 *)rt_nil_check(l_V_987))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_989))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_V_987))).f_LINE, rt_str("not a tag of the record (3.9.3): ", 33), ((*(R17 *)rt_nil_check(l_V_987))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(l_V_987))).f_B == NULL)))
{
if ((r_PACKING_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_987))).f_B))).f_NAME) < ((rt_int)0LL)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_V_987))).f_LINE, rt_str("a packing-mode is DENSE, PACKED or UNPACKED (3.9.3): ", 53), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_987))).f_B))).f_NAME);
}
}
for (;;) {
if ((l_S_990 == NULL)) goto L_end991;
{
{
R17 * l_L_992; memset(&l_L_992, 0, sizeof l_L_992);
l_L_992 = ((*(R17 *)rt_nil_check(l_S_990))).f_A;
R17 * l_P_993; memset(&l_P_993, 0, sizeof l_P_993);
l_P_993 = ((*(R17 *)rt_nil_check(l_S_990))).f_B;
R17 * l_VSEEN_994; memset(&l_VSEEN_994, 0, sizeof l_VSEEN_994);
l_VSEEN_994 = NULL;
for (;;) {
if ((l_L_992 == NULL)) goto L_end995;
{
{
R14 l_SAVED_CODE_996; memset(&l_SAVED_CODE_996, 0, sizeof l_SAVED_CODE_996);
S_R14(&l_SAVED_CODE_996, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_LV_997; memset(&l_LV_997, 0, sizeof l_LV_997);
S_R26(&l_LV_997, r_EXPR(l_L_992, ((*(R24 *)rt_nil_check(l_TF_989))).f_T), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_996, 0);
if ((!r_SAME_CLASS(r_REAL_TYPE((l_LV_997).f_T), r_REAL_TYPE(((*(R24 *)rt_nil_check(l_TF_989))).f_T))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_992))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.3)", 49));
}
}
l_L_992 = ((*(R17 *)rt_nil_check(l_L_992))).f_NEXT;
}
RT_B_TICK();
} L_end995: ;
for (;;) {
if ((l_P_993 == NULL)) goto L_end998;
{
r_CHECK_ELEMENTS(p_T, ((*(R17 *)rt_nil_check(l_P_993))).f_A, C_R9(((*(R17 *)rt_nil_check(l_V_987))).f_NAME), ((*(R17 *)rt_nil_check(l_S_990))).f_A, &l_VSEEN_994);
l_P_993 = ((*(R17 *)rt_nil_check(l_P_993))).f_NEXT;
}
RT_B_TICK();
} L_end998: ;
}
l_S_990 = ((*(R17 *)rt_nil_check(l_S_990))).f_NEXT;
}
RT_B_TICK();
} L_end991: ;
}
l_V_987 = ((*(R17 *)rt_nil_check(l_V_987))).f_NEXT;
}
RT_B_TICK();
} L_end988: ;
}
}
static void r_CHECK_ELEMENTS(R22 * p_T, R17 * p_L, R9 p_TAGN, R17 * p_LABELS, R17 * *p_SEEN) { RT_B_TICK(); 
R17 * l_E_999; memset(&l_E_999, 0, sizeof l_E_999);
l_E_999 = p_L;
for (;;) {
if ((l_E_999 == NULL)) goto L_end1000;
{
if (((((*(R17 *)rt_nil_check(l_E_999))).f_FL == ((rt_int)0LL)) || (((*(R17 *)rt_nil_check(l_E_999))).f_FL == ((rt_int)2LL))))
{
{
R24 * l_F_1001; memset(&l_F_1001, 0, sizeof l_F_1001);
l_F_1001 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FOUND_1002; memset(&l_FOUND_1002, 0, sizeof l_FOUND_1002);
l_FOUND_1002 = NULL;
for (;;) {
if ((l_F_1001 == NULL)) goto L_end1003;
{
if ((r_TEQ(((*(R24 *)rt_nil_check(l_F_1001))).f_NAME, ((*(R17 *)rt_nil_check(l_E_999))).f_NAME) && r_TEQ(((*(R24 *)rt_nil_check(l_F_1001))).f_TAGF, p_TAGN)))
{
l_FOUND_1002 = l_F_1001;
}
l_F_1001 = ((*(R24 *)rt_nil_check(l_F_1001))).f_NEXT;
}
RT_B_TICK();
} L_end1003: ;
if ((l_FOUND_1002 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_999))).f_LINE, rt_str("not a field of the record accessible here (3.9.3): ", 51), ((*(R17 *)rt_nil_check(l_E_999))).f_NAME);
}
if (((((*(R17 *)rt_nil_check(l_E_999))).f_FL == ((rt_int)2LL)) && (((*(R24 *)rt_nil_check(l_FOUND_1002))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_999))).f_LINE, rt_str("OMIT names a constant or tag field (3.9.3): ", 44), ((*(R17 *)rt_nil_check(l_E_999))).f_NAME);
}
if (r_IN_IDENTS((*p_SEEN), ((*(R17 *)rt_nil_check(l_E_999))).f_NAME))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_999))).f_LINE, rt_str("a field is positioned once in a record-reptype (3.9.3): ", 56), ((*(R17 *)rt_nil_check(l_E_999))).f_NAME);
}
(*p_SEEN) = r_NAME_REF(((*(R17 *)rt_nil_check(l_E_999))).f_NAME, ((rt_int)0LL), NULL, (*p_SEEN));
}
}
else if ((((*(R17 *)rt_nil_check(l_E_999))).f_FL == ((rt_int)1LL)))
{
{
R24 * l_TF_1004; memset(&l_TF_1004, 0, sizeof l_TF_1004);
l_TF_1004 = r_FIND_FIELD(p_T, ((*(R17 *)rt_nil_check(l_E_999))).f_NAME);
R9 l_KEY_1005; memset(&l_KEY_1005, 0, sizeof l_KEY_1005);
S_R9(&l_KEY_1005, r_CAT(r_MK(rt_str("|", 1)), ((*(R17 *)rt_nil_check(l_E_999))).f_NAME), 0);
if ((l_TF_1004 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_999))).f_LINE, rt_str("VARIANTS names a tag of the record (3.9.3): ", 44), ((*(R17 *)rt_nil_check(l_E_999))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_1004))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_999))).f_LINE, rt_str("VARIANTS names a tag of the record (3.9.3): ", 44), ((*(R17 *)rt_nil_check(l_E_999))).f_NAME);
}
if (r_IN_IDENTS((*p_SEEN), l_KEY_1005))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_999))).f_LINE, rt_str("a variant part is positioned once in a record-reptype (3.9.3): ", 63), ((*(R17 *)rt_nil_check(l_E_999))).f_NAME);
}
(*p_SEEN) = r_NAME_REF(l_KEY_1005, ((rt_int)0LL), NULL, (*p_SEEN));
}
}
else
{
{
R23 l_M_1006; memset(&l_M_1006, 0, sizeof l_M_1006);
S_R23(&l_M_1006, r_MANIFEST(((*(R17 *)rt_nil_check(l_E_999))).f_B), 0);
if (((!(l_M_1006).f_OK) || ((l_M_1006).f_V < ((rt_int)0LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_E_999))).f_LINE, rt_str("the length of a filler-spec is a manifest integer, not negative (3.9.3)", 71));
}
}
}
l_E_999 = ((*(R17 *)rt_nil_check(l_E_999))).f_NEXT;
}
RT_B_TICK();
} L_end1000: ;
}
static R9 r_RECORD_SIZE(R22 * p_T, R9 p_C) { RT_B_TICK(); 
R9 l_R_1007; memset(&l_R_1007, 0, sizeof l_R_1007);
S_R9(&l_R_1007, r_MK(rt_str("({ rt_int sz = 0;", 17)), 0);
R17 * l_SAVED_1008; memset(&l_SAVED_1008, 0, sizeof l_SAVED_1008);
l_SAVED_1008 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
((*(R7 *)rt_nil_check(g_W))).f_LDONE = NULL;
if ((!r_IS_RECORD_REP(p_T)))
{
S_R9(&l_R_1007, r_CAT(l_R_1007, r_LAYOUT_ALL(p_T, p_C, r_NO_TEXT(), ((rt_int)2LL))), 0);
S_R9(&l_R_1007, r_CAT(l_R_1007, r_LAYOUT_PARTS(p_T, p_C)), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_SAVED_1008;
{ R9 rv1009 = r_CATS(l_R_1007, rt_str(" sz; })", 7));
return rv1009; }
}
{
R17 * l_P_1010; memset(&l_P_1010, 0, sizeof l_P_1010);
l_P_1010 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A;
for (;;) {
if ((l_P_1010 == NULL)) goto L_end1011;
{
S_R9(&l_R_1007, r_CAT(l_R_1007, r_LAYOUT_SPEC(p_T, p_C, l_P_1010, r_NO_TEXT())), 0);
l_P_1010 = ((*(R17 *)rt_nil_check(l_P_1010))).f_NEXT;
}
RT_B_TICK();
} L_end1011: ;
}
S_R9(&l_R_1007, r_CAT(l_R_1007, r_LAYOUT_ALL(p_T, p_C, r_NO_TEXT(), ((rt_int)2LL))), 0);
S_R9(&l_R_1007, r_CAT(l_R_1007, r_LAYOUT_PARTS(p_T, p_C)), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_SAVED_1008;
{ R9 rv1012 = r_CATS(l_R_1007, rt_str(" sz; })", 7));
return rv1012; }
rt_raise(RT_X_INIT);
}
static R9 r_FIELD_SIZE_C(R24 * p_F, R9 p_C) { RT_B_TICK(); 
{ R9 rv1013 = (r_SIZE_OF(((*(R24 *)rt_nil_check(p_F))).f_T, r_FMT2(rt_str("(@).@", 5), p_C, ((*(R24 *)rt_nil_check(p_F))).f_CNAME))).f_C;
return rv1013; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_ALL(R22 * p_T, R9 p_C, R9 p_TAGN, rt_int p_MODE) { RT_B_TICK(); 
R9 l_R_1014; memset(&l_R_1014, 0, sizeof l_R_1014);
S_R9(&l_R_1014, r_MK(rt_str("", 0)), 0);
R24 * l_F_1015; memset(&l_F_1015, 0, sizeof l_F_1015);
l_F_1015 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1015 == NULL)) goto L_end1016;
{
if ((r_TEQ(((*(R24 *)rt_nil_check(l_F_1015))).f_TAGF, p_TAGN) && (!r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LDONE, ((*(R24 *)rt_nil_check(l_F_1015))).f_NAME))))
{
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(((*(R24 *)rt_nil_check(l_F_1015))).f_NAME, ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_1014, r_FMT4(rt_str("@ sz = rt_b_layout(sz, @, @);", 29), l_R_1014, r_FIELD_SIZE_C(l_F_1015, p_C), r_NUM(p_MODE), r_MK(rt_str("", 0))), 0);
}
else
{
S_R9(&l_R_1014, r_CAT(l_R_1014, r_FMT4(rt_str(" if (@) sz = rt_b_layout(sz, @, @);@", 36), r_VARIANT_COND(l_F_1015, p_T, p_C), r_FIELD_SIZE_C(l_F_1015, p_C), r_NUM(p_MODE), r_MK(rt_str("", 0)))), 0);
}
}
l_F_1015 = ((*(R24 *)rt_nil_check(l_F_1015))).f_NEXT;
}
RT_B_TICK();
} L_end1016: ;
{ R9 rv1017 = l_R_1014;
return rv1017; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_PARTS(R22 * p_T, R9 p_C) { RT_B_TICK(); 
R9 l_R_1018; memset(&l_R_1018, 0, sizeof l_R_1018);
S_R9(&l_R_1018, r_MK(rt_str("", 0)), 0);
R24 * l_F_1019; memset(&l_F_1019, 0, sizeof l_F_1019);
l_F_1019 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1019 == NULL)) goto L_end1020;
{
if ((((((*(R24 *)rt_nil_check(l_F_1019))).f_TAGF).f_LEN > ((rt_int)0LL)) && (!r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LDONE, r_CAT(r_MK(rt_str("|", 1)), ((*(R24 *)rt_nil_check(l_F_1019))).f_TAGF)))))
{
S_R9(&l_R_1018, r_CAT(l_R_1018, r_LAYOUT_VARIANTS(p_T, p_C, ((*(R24 *)rt_nil_check(l_F_1019))).f_TAGF)), 0);
}
l_F_1019 = ((*(R24 *)rt_nil_check(l_F_1019))).f_NEXT;
}
RT_B_TICK();
} L_end1020: ;
{ R9 rv1021 = l_R_1018;
return rv1021; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_SPEC(R22 * p_T, R9 p_C, R17 * p_P, R9 p_TAGN) { RT_B_TICK(); 
rt_int l_MODE_1022; memset(&l_MODE_1022, 0, sizeof l_MODE_1022);
l_MODE_1022 = ((rt_int)2LL);
R9 l_R_1023; memset(&l_R_1023, 0, sizeof l_R_1023);
S_R9(&l_R_1023, r_MK(rt_str("", 0)), 0);
if (((((*(R17 *)rt_nil_check(p_P))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_MODE_1022 = r_PACKING_VALUE(((*(R17 *)rt_nil_check(p_P))).f_NAME);
}
if ((((*(R17 *)rt_nil_check(p_P))).f_IV == ((rt_int)0LL)))
{
S_R9(&l_R_1023, r_LAYOUT_ALL(p_T, p_C, p_TAGN, l_MODE_1022), 0);
if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_1023, r_CAT(l_R_1023, r_LAYOUT_PARTS(p_T, p_C)), 0);
}
{ R9 rv1024 = l_R_1023;
return rv1024; }
}
{
R17 * l_E_1025; memset(&l_E_1025, 0, sizeof l_E_1025);
l_E_1025 = ((*(R17 *)rt_nil_check(p_P))).f_A;
for (;;) {
if ((l_E_1025 == NULL)) goto L_end1026;
{
if (((((*(R17 *)rt_nil_check(l_E_1025))).f_FL == ((rt_int)0LL)) || (((*(R17 *)rt_nil_check(l_E_1025))).f_FL == ((rt_int)2LL))))
{
{
R24 * l_F_1027; memset(&l_F_1027, 0, sizeof l_F_1027);
l_F_1027 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1027 == NULL)) goto L_end1028;
{
if ((r_TEQ(((*(R24 *)rt_nil_check(l_F_1027))).f_NAME, ((*(R17 *)rt_nil_check(l_E_1025))).f_NAME) && r_TEQ(((*(R24 *)rt_nil_check(l_F_1027))).f_TAGF, p_TAGN)))
{
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(((*(R24 *)rt_nil_check(l_F_1027))).f_NAME, ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (((((*(R17 *)rt_nil_check(l_E_1025))).f_FL == ((rt_int)2LL)) && r_ARG_MANIFEST(p_T, l_F_1027)))
{
}
else if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_1023, r_FMT3(rt_str("@ sz = rt_b_layout(sz, @, @);", 29), l_R_1023, r_FIELD_SIZE_C(l_F_1027, p_C), r_NUM(l_MODE_1022)), 0);
}
else
{
S_R9(&l_R_1023, r_CAT(l_R_1023, r_FMT4(rt_str(" if (@) sz = rt_b_layout(sz, @, @);@", 36), r_VARIANT_COND(l_F_1027, p_T, p_C), r_FIELD_SIZE_C(l_F_1027, p_C), r_NUM(l_MODE_1022), r_MK(rt_str("", 0)))), 0);
}
}
l_F_1027 = ((*(R24 *)rt_nil_check(l_F_1027))).f_NEXT;
}
RT_B_TICK();
} L_end1028: ;
}
}
else if ((((*(R17 *)rt_nil_check(l_E_1025))).f_FL == ((rt_int)1LL)))
{
S_R9(&l_R_1023, r_CAT(l_R_1023, r_LAYOUT_VARIANTS(p_T, p_C, ((*(R17 *)rt_nil_check(l_E_1025))).f_NAME)), 0);
}
else if ((((*(R17 *)rt_nil_check(l_E_1025))).f_FL == ((rt_int)5LL)))
{
S_R9(&l_R_1023, r_FMT3(rt_str("@ sz = rt_b_layout(sz, rt_b_pack_size(@, 7, @), ", 48), l_R_1023, r_NUM((r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1025))).f_B)).f_V), r_NUM(l_MODE_1022)), 0);
S_R9(&l_R_1023, r_FMT2(rt_str("@@);", 4), l_R_1023, r_NUM(l_MODE_1022)), 0);
}
else
{
S_R9(&l_R_1023, r_FMT3(rt_str("@ sz = rt_b_layout(sz, @, @);", 29), l_R_1023, r_NUM((r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1025))).f_B)).f_V), r_NUM(l_MODE_1022)), 0);
}
l_E_1025 = ((*(R17 *)rt_nil_check(l_E_1025))).f_NEXT;
}
RT_B_TICK();
} L_end1026: ;
}
{ R9 rv1029 = l_R_1023;
return rv1029; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_VARIANTS(R22 * p_T, R9 p_C, R9 p_TAGN) { RT_B_TICK(); 
R9 l_R_1030; memset(&l_R_1030, 0, sizeof l_R_1030);
S_R9(&l_R_1030, r_MK(rt_str("", 0)), 0);
R9 l_WORD_1031; memset(&l_WORD_1031, 0, sizeof l_WORD_1031);
S_R9(&l_WORD_1031, r_MK(rt_str(" if", 3)), 0);
rt_int l_ELSE_MODE_1032; memset(&l_ELSE_MODE_1032, 0, sizeof l_ELSE_MODE_1032);
l_ELSE_MODE_1032 = ((rt_int)2LL);
R24 * l_TF_1033; memset(&l_TF_1033, 0, sizeof l_TF_1033);
l_TF_1033 = r_FIND_FIELD(p_T, p_TAGN);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(r_CAT(r_MK(rt_str("|", 1)), p_TAGN), ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (r_IS_RECORD_REP(p_T))
{
{
R17 * l_V_1034; memset(&l_V_1034, 0, sizeof l_V_1034);
l_V_1034 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_C;
for (;;) {
if ((l_V_1034 == NULL)) goto L_end1035;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_V_1034))).f_NAME, p_TAGN))
{
{
R17 * l_S_1036; memset(&l_S_1036, 0, sizeof l_S_1036);
l_S_1036 = ((*(R17 *)rt_nil_check(l_V_1034))).f_A;
if ((!(((*(R17 *)rt_nil_check(l_V_1034))).f_B == NULL)))
{
l_ELSE_MODE_1032 = r_PACKING_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_1034))).f_B))).f_NAME);
}
for (;;) {
if ((l_S_1036 == NULL)) goto L_end1037;
{
{
R9 l_COND_1038; memset(&l_COND_1038, 0, sizeof l_COND_1038);
S_R9(&l_COND_1038, r_MK(rt_str("0", 1)), 0);
R17 * l_L_1039; memset(&l_L_1039, 0, sizeof l_L_1039);
l_L_1039 = ((*(R17 *)rt_nil_check(l_S_1036))).f_A;
R17 * l_P_1040; memset(&l_P_1040, 0, sizeof l_P_1040);
l_P_1040 = ((*(R17 *)rt_nil_check(l_S_1036))).f_B;
R17 * l_OUTER_1041; memset(&l_OUTER_1041, 0, sizeof l_OUTER_1041);
l_OUTER_1041 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
R9 l_BODY_1042; memset(&l_BODY_1042, 0, sizeof l_BODY_1042);
S_R9(&l_BODY_1042, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1039 == NULL)) goto L_end1043;
{
S_R9(&l_COND_1038, r_FMT4(rt_str("@ || (@).@ == @", 15), l_COND_1038, p_C, ((*(R24 *)rt_nil_check(l_TF_1033))).f_CNAME, (r_EXPR(l_L_1039, ((*(R24 *)rt_nil_check(l_TF_1033))).f_T)).f_C), 0);
l_L_1039 = ((*(R17 *)rt_nil_check(l_L_1039))).f_NEXT;
}
RT_B_TICK();
} L_end1043: ;
for (;;) {
if ((l_P_1040 == NULL)) goto L_end1044;
{
S_R9(&l_BODY_1042, r_CAT(l_BODY_1042, r_LAYOUT_SPEC(p_T, p_C, l_P_1040, p_TAGN)), 0);
l_P_1040 = ((*(R17 *)rt_nil_check(l_P_1040))).f_NEXT;
}
RT_B_TICK();
} L_end1044: ;
S_R9(&l_BODY_1042, r_CAT(l_BODY_1042, r_LAYOUT_ALL(p_T, p_C, p_TAGN, ((rt_int)2LL))), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_OUTER_1041;
S_R9(&l_R_1030, r_CAT(l_R_1030, r_FMT3(rt_str("@ (@) {@ }", 10), l_WORD_1031, l_COND_1038, l_BODY_1042)), 0);
S_R9(&l_WORD_1031, r_MK(rt_str(" else if", 8)), 0);
}
l_S_1036 = ((*(R17 *)rt_nil_check(l_S_1036))).f_NEXT;
}
RT_B_TICK();
} L_end1037: ;
}
}
l_V_1034 = ((*(R17 *)rt_nil_check(l_V_1034))).f_NEXT;
}
RT_B_TICK();
} L_end1035: ;
}
}
{
R17 * l_OUTER_1045; memset(&l_OUTER_1045, 0, sizeof l_OUTER_1045);
l_OUTER_1045 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
R9 l_REST_1046; memset(&l_REST_1046, 0, sizeof l_REST_1046);
S_R9(&l_REST_1046, r_LAYOUT_ALL(p_T, p_C, p_TAGN, l_ELSE_MODE_1032), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_OUTER_1045;
if (r_TEQS(l_WORD_1031, rt_str(" if", 3)))
{
{ R9 rv1047 = l_REST_1046;
return rv1047; }
}
{ R9 rv1048 = r_FMT2(rt_str("@ else {@ }", 11), l_R_1030, l_REST_1046);
return rv1048; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_ARG_MANIFEST(R22 * p_T, R24 * p_F) { RT_B_TICK(); 
R24 * l_G_1049; memset(&l_G_1049, 0, sizeof l_G_1049);
l_G_1049 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1050; memset(&l_A_1050, 0, sizeof l_A_1050);
l_A_1050 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_G_1049 == NULL) || (l_A_1050 == NULL))) goto L_end1051;
{
if ((!(((*(R24 *)rt_nil_check(l_G_1049))).f_KIND == ((rt_int)0LL))))
{
if ((l_G_1049 == p_F))
{
{ rt_int rv1052 = ((((*(R25 *)rt_nil_check(l_A_1050))).f_MLO).f_OK && (!((*(R25 *)rt_nil_check(l_A_1050))).f_ANYARG));
return rv1052; }
}
l_A_1050 = ((*(R25 *)rt_nil_check(l_A_1050))).f_NEXT;
}
l_G_1049 = ((*(R24 *)rt_nil_check(l_G_1049))).f_NEXT;
}
RT_B_TICK();
} L_end1051: ;
{ rt_int rv1053 = 0;
return rv1053; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ANY_TAG(R17 * p_A) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv1054 = 0;
return rv1054; }
}
{
R12 * l_Y_1055; memset(&l_Y_1055, 0, sizeof l_Y_1055);
l_Y_1055 = r_LOOKUP(((*(R17 *)rt_nil_check(p_A))).f_NAME);
if ((l_Y_1055 == NULL))
{
{ rt_int rv1056 = 0;
return rv1056; }
}
{ rt_int rv1057 = ((((*(R12 *)rt_nil_check(l_Y_1055))).f_KIND == g_Y_CONST) && r_TEQS(((*(R12 *)rt_nil_check(l_Y_1055))).f_ACCESS, rt_str("ANY", 3)));
return rv1057; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R17 * p_TS) { RT_B_TICK(); 
R17 * l_D_1058; memset(&l_D_1058, 0, sizeof l_D_1058);
l_D_1058 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_CLASS_1059; memset(&l_CLASS_1059, 0, sizeof l_CLASS_1059);
l_CLASS_1059 = NULL;
R21 * l_TARGS_1060; memset(&l_TARGS_1060, 0, sizeof l_TARGS_1060);
l_TARGS_1060 = NULL;
R25 * l_VARGS_1061; memset(&l_VARGS_1061, 0, sizeof l_VARGS_1061);
l_VARGS_1061 = NULL;
R25 * l_VTAIL_1062; memset(&l_VTAIL_1062, 0, sizeof l_VTAIL_1062);
l_VTAIL_1062 = NULL;
R17 * l_A_1063; memset(&l_A_1063, 0, sizeof l_A_1063);
l_A_1063 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R17 * l_F_1064; memset(&l_F_1064, 0, sizeof l_F_1064);
l_F_1064 = ((*(R17 *)rt_nil_check(l_D_1058))).f_A;
for (;;) {
if ((l_F_1064 == NULL)) goto L_end1065;
{
{
R17 * l_N_1066; memset(&l_N_1066, 0, sizeof l_N_1066);
l_N_1066 = ((*(R17 *)rt_nil_check(l_F_1064))).f_A;
for (;;) {
if ((l_N_1066 == NULL)) goto L_end1067;
{
if ((l_A_1063 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R17 *)rt_nil_check(l_F_1064))).f_B == NULL))
{
{
R21 * l_B_1068; memset(&l_B_1068, 0, sizeof l_B_1068);
l_B_1068 = ((R21 *)rt_b_new(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_B_1068)), ({ R21 rc1069; memset(&rc1069, 0, sizeof rc1069);  S_R9(&rc1069.f_NAME, ((*(R17 *)rt_nil_check(l_N_1066))).f_NAME, 0); rc1069.f_T = r_ARG_TYPE(l_A_1063); S_R9(&rc1069.f_C, r_NO_TEXT(), 0); rc1069.f_HASMV = 0; rc1069.f_MV = ((rt_int)0LL); rc1069.f_R = NULL; rc1069.f_NEXT = l_TARGS_1060; rc1069; }), 0);
l_TARGS_1060 = l_B_1068;
}
}
else
{
{
R25 * l_V_1070; memset(&l_V_1070, 0, sizeof l_V_1070);
l_V_1070 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_V_1070)), ({ R25 rc1071; memset(&rc1071, 0, sizeof rc1071);  S_R9(&rc1071.f_LO, r_NO_TEXT(), 0); S_R9(&rc1071.f_HI, r_NO_TEXT(), 0); S_R23(&rc1071.f_MLO, r_NO_MVAL(), 0); S_R23(&rc1071.f_MHI, r_NO_MVAL(), 0); rc1071.f_ANYARG = 0; rc1071.f_NEXT = NULL; rc1071; }), 0);
if (((((*(R17 *)rt_nil_check(l_A_1063))).f_KIND == g_N_ANY) || r_IS_ANY_TAG(l_A_1063)))
{
if ((!(((*(R17 *)rt_nil_check(l_F_1064))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_1063))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R25 *)rt_nil_check(l_V_1070))).f_ANYARG = 1;
}
else if ((((*(R17 *)rt_nil_check(l_A_1063))).f_KIND == g_N_DONTCARE))
{
((*(R25 *)rt_nil_check(l_V_1070))).f_ANYARG = 1;
S_R9(&((*(R25 *)rt_nil_check(l_V_1070))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R17 *)rt_nil_check(l_A_1063))).f_KIND == g_TS_GEN))
{
((*(R25 *)rt_nil_check(l_V_1070))).f_ANYARG = 1;
S_R9(&((*(R25 *)rt_nil_check(l_V_1070))).f_HI, r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(l_A_1063))).f_NAME), 0);
}
else
{
{
R22 * l_FT_1072; memset(&l_FT_1072, 0, sizeof l_FT_1072);
l_FT_1072 = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_1064))).f_B);
S_R9(&((*(R25 *)rt_nil_check(l_V_1070))).f_LO, r_CONVERT(r_EXPR(l_A_1063, l_FT_1072), l_FT_1072, ((*(R17 *)rt_nil_check(l_A_1063))).f_LINE, r_NO_TEXT()), 0);
S_R23(&((*(R25 *)rt_nil_check(l_V_1070))).f_MLO, r_ENUM_MANIFEST(l_A_1063, l_FT_1072), 0);
if ((((((*(R25 *)rt_nil_check(l_V_1070))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_FT_1072))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_FT_1072))).f_MHI).f_OK))
{
if ((((((*(R25 *)rt_nil_check(l_V_1070))).f_MLO).f_V < (((*(R22 *)rt_nil_check(l_FT_1072))).f_MLO).f_V) || ((((*(R25 *)rt_nil_check(l_V_1070))).f_MLO).f_V > (((*(R22 *)rt_nil_check(l_FT_1072))).f_MHI).f_V)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_1063))).f_LINE, rt_str("the argument is outside the range of the parameter (3.9.1)", 58));
}
}
if (((((*(R17 *)rt_nil_check(l_F_1064))).f_IV == ((rt_int)1LL)) && (!(((*(R25 *)rt_nil_check(l_V_1070))).f_MLO).f_OK)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_1063))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_1062 == NULL))
{
l_VARGS_1061 = l_V_1070;
}
else
{
((*(R25 *)rt_nil_check(l_VTAIL_1062))).f_NEXT = l_V_1070;
}
l_VTAIL_1062 = l_V_1070;
}
}
l_A_1063 = ((*(R17 *)rt_nil_check(l_A_1063))).f_NEXT;
l_N_1066 = ((*(R17 *)rt_nil_check(l_N_1066))).f_NEXT;
}
RT_B_TICK();
} L_end1067: ;
}
l_F_1064 = ((*(R17 *)rt_nil_check(l_F_1064))).f_NEXT;
}
RT_B_TICK();
} L_end1065: ;
if ((!(l_A_1063 == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
{
R12 * l_R_1073; memset(&l_R_1073, 0, sizeof l_R_1073);
l_R_1073 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_1073 == NULL)) goto L_end1074;
{
if (((((*(R12 *)rt_nil_check(l_R_1073))).f_DECL == l_D_1058) && r_SAME_BINDS(((*(R12 *)rt_nil_check(l_R_1073))).f_BINDINGS, l_TARGS_1060)))
{
l_CLASS_1059 = ((*(R12 *)rt_nil_check(l_R_1073))).f_T;
goto L_end1074;
}
l_R_1073 = ((*(R12 *)rt_nil_check(l_R_1073))).f_INSTANCES;
}
RT_B_TICK();
} L_end1074: ;
}
if ((l_CLASS_1059 == NULL))
{
{
R12 * l_R_1075; memset(&l_R_1075, 0, sizeof l_R_1075);
l_R_1075 = r_NEW_SYM(g_Y_TYPE, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R21 * l_B_1076; memset(&l_B_1076, 0, sizeof l_B_1076);
l_B_1076 = l_TARGS_1060;
R21 * l_SAVED_1077; memset(&l_SAVED_1077, 0, sizeof l_SAVED_1077);
l_SAVED_1077 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
rt_int l_ENTERED_1078; memset(&l_ENTERED_1078, 0, sizeof l_ENTERED_1078);
((*(R12 *)rt_nil_check(l_R_1075))).f_DECL = l_D_1058;
((*(R12 *)rt_nil_check(l_R_1075))).f_BINDINGS = l_TARGS_1060;
((*(R12 *)rt_nil_check(l_R_1075))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
((*(R7 *)rt_nil_check(g_W))).f_RECS = l_R_1075;
l_ENTERED_1078 = r_ENTER_MODULE_FOR(p_Y);
r_OPEN_SCOPE();
for (;;) {
if ((l_B_1076 == NULL)) goto L_end1079;
{
{
R12 * l_TY_1080; memset(&l_TY_1080, 0, sizeof l_TY_1080);
l_TY_1080 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_B_1076))).f_NAME);
((*(R12 *)rt_nil_check(l_TY_1080))).f_T = ((*(R21 *)rt_nil_check(l_B_1076))).f_T;
r_DEFINE(l_TY_1080, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_1076 = ((*(R21 *)rt_nil_check(l_B_1076))).f_NEXT;
}
RT_B_TICK();
} L_end1079: ;
l_F_1064 = ((*(R17 *)rt_nil_check(l_D_1058))).f_A;
for (;;) {
if ((l_F_1064 == NULL)) goto L_end1081;
{
if ((!(((*(R17 *)rt_nil_check(l_F_1064))).f_B == NULL)))
{
{
R17 * l_N_1082; memset(&l_N_1082, 0, sizeof l_N_1082);
l_N_1082 = ((*(R17 *)rt_nil_check(l_F_1064))).f_A;
for (;;) {
if ((l_N_1082 == NULL)) goto L_end1083;
{
{
R12 * l_P_1084; memset(&l_P_1084, 0, sizeof l_P_1084);
l_P_1084 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(l_N_1082))).f_NAME);
((*(R12 *)rt_nil_check(l_P_1084))).f_T = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_1064))).f_B);
S_R9(&((*(R12 *)rt_nil_check(l_P_1084))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), r_CID(((*(R17 *)rt_nil_check(l_N_1082))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_P_1084))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_P_1084))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_1084, ((*(R17 *)rt_nil_check(l_F_1064))).f_LINE);
}
l_N_1082 = ((*(R17 *)rt_nil_check(l_N_1082))).f_NEXT;
}
RT_B_TICK();
} L_end1083: ;
}
}
l_F_1064 = ((*(R17 *)rt_nil_check(l_F_1064))).f_NEXT;
}
RT_B_TICK();
} L_end1081: ;
if ((l_TARGS_1060 == NULL))
{
l_CLASS_1059 = r_RESOLVE_RECORD(((*(R17 *)rt_nil_check(l_D_1058))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R17 *)rt_nil_check(l_D_1058))).f_A);
}
else
{
l_CLASS_1059 = r_RESOLVE_RECORD(((*(R17 *)rt_nil_check(l_D_1058))).f_B, r_NO_TEXT(), p_Y, ((*(R17 *)rt_nil_check(l_D_1058))).f_A);
}
S_R9(&((*(R22 *)rt_nil_check(l_CLASS_1059))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R12 *)rt_nil_check(l_R_1075))).f_T = l_CLASS_1059;
r_CLOSE_SCOPE();
if (l_ENTERED_1078)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1077;
}
}
{
R22 * l_T_1085; memset(&l_T_1085, 0, sizeof l_T_1085);
l_T_1085 = r_COPY_TYP(l_CLASS_1059);
((*(R22 *)rt_nil_check(l_T_1085))).f_ARGS = l_VARGS_1061;
{ R22 * rv1086 = l_T_1085;
return rv1086; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_1087; memset(&l_P_1087, 0, sizeof l_P_1087);
l_P_1087 = p_A;
R21 * l_Q_1088; memset(&l_Q_1088, 0, sizeof l_Q_1088);
l_Q_1088 = p_B;
for (;;) {
if (((l_P_1087 == NULL) || (l_Q_1088 == NULL))) goto L_end1089;
{
if ((((!r_SAME_TYPE(((*(R21 *)rt_nil_check(l_P_1087))).f_T, ((*(R21 *)rt_nil_check(l_Q_1088))).f_T)) || (!r_SAME_LENGTH(((*(R21 *)rt_nil_check(l_P_1087))).f_T, ((*(R21 *)rt_nil_check(l_Q_1088))).f_T))) || (!r_SAME_REPS(((*(R21 *)rt_nil_check(l_P_1087))).f_T, ((*(R21 *)rt_nil_check(l_Q_1088))).f_T))))
{
{ rt_int rv1090 = 0;
return rv1090; }
}
l_P_1087 = ((*(R21 *)rt_nil_check(l_P_1087))).f_NEXT;
l_Q_1088 = ((*(R21 *)rt_nil_check(l_Q_1088))).f_NEXT;
}
RT_B_TICK();
} L_end1089: ;
{ rt_int rv1091 = ((l_P_1087 == NULL) && (l_Q_1088 == NULL));
return rv1091; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R22 * p_T) { RT_B_TICK(); 
R25 * l_A_1092; memset(&l_A_1092, 0, sizeof l_A_1092);
l_A_1092 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_1092 == NULL)) goto L_end1093;
{
if (((*(R25 *)rt_nil_check(l_A_1092))).f_ANYARG)
{
{ rt_int rv1094 = 1;
return rv1094; }
}
l_A_1092 = ((*(R25 *)rt_nil_check(l_A_1092))).f_NEXT;
}
RT_B_TICK();
} L_end1093: ;
{ rt_int rv1095 = 0;
return rv1095; }
rt_raise(RT_X_INIT);
}
static R9 r_VARIANT_COND(R24 * p_F, R22 * p_T, R9 p_SELF) { RT_B_TICK(); 
R17 * l_L_1096; memset(&l_L_1096, 0, sizeof l_L_1096);
l_L_1096 = ((*(R24 *)rt_nil_check(p_F))).f_LABELS;
R9 l_C_1097; memset(&l_C_1097, 0, sizeof l_C_1097);
S_R9(&l_C_1097, r_MK(rt_str("0", 1)), 0);
R24 * l_TF_1098; memset(&l_TF_1098, 0, sizeof l_TF_1098);
l_TF_1098 = r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_1096 == NULL)) goto L_end1099;
{
if ((((*(R17 *)rt_nil_check(l_L_1096))).f_KIND == g_N_RANGE))
{
S_R9(&l_C_1097, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_1097, p_SELF, ((*(R24 *)rt_nil_check(l_TF_1098))).f_CNAME), 0);
S_R9(&l_C_1097, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_1097, (r_EXPR(((*(R17 *)rt_nil_check(l_L_1096))).f_A, ((*(R24 *)rt_nil_check(l_TF_1098))).f_T)).f_C, p_SELF, ((*(R24 *)rt_nil_check(l_TF_1098))).f_CNAME), 0);
S_R9(&l_C_1097, r_FMT2(rt_str("@@)", 3), l_C_1097, (r_EXPR(((*(R17 *)rt_nil_check(l_L_1096))).f_B, ((*(R24 *)rt_nil_check(l_TF_1098))).f_T)).f_C), 0);
}
else
{
S_R9(&l_C_1097, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_1097, p_SELF, ((*(R24 *)rt_nil_check(l_TF_1098))).f_CNAME, (r_EXPR(l_L_1096, ((*(R24 *)rt_nil_check(l_TF_1098))).f_T)).f_C), 0);
}
l_L_1096 = ((*(R17 *)rt_nil_check(l_L_1096))).f_NEXT;
}
RT_B_TICK();
} L_end1099: ;
{ R9 rv1100 = r_FMT1(rt_str("(@)", 3), l_C_1097);
return rv1100; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R22 * p_T) { RT_B_TICK(); 
R9 l_C_1101; memset(&l_C_1101, 0, sizeof l_C_1101);
S_R9(&l_C_1101, ((*(R22 *)rt_nil_check(p_T))).f_CNAME, 0);
R24 * l_F_1102; memset(&l_F_1102, 0, sizeof l_F_1102);
l_F_1102 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_BODY_1103; memset(&l_BODY_1103, 0, sizeof l_BODY_1103);
S_R9(&l_BODY_1103, r_MK(rt_str("", 0)), 0);
R9 l_ASSIGN_1104; memset(&l_ASSIGN_1104, 0, sizeof l_ASSIGN_1104);
S_R9(&l_ASSIGN_1104, r_MK(rt_str("", 0)), 0);
R9 l_COPY_1105; memset(&l_COPY_1105, 0, sizeof l_COPY_1105);
S_R9(&l_COPY_1105, r_MK(rt_str("", 0)), 0);
R9 l_EQ_1106; memset(&l_EQ_1106, 0, sizeof l_EQ_1106);
S_R9(&l_EQ_1106, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_1102 == NULL)) goto L_end1107;
{
S_R9(&l_BODY_1103, r_FMT3(rt_str("@ @ @;", 6), l_BODY_1103, r_CTYPE(((*(R24 *)rt_nil_check(l_F_1102))).f_T), ((*(R24 *)rt_nil_check(l_F_1102))).f_CNAME), 0);
S_R9(&l_COPY_1105, r_FMT3(rt_str("@ d.@ = @;", 10), l_COPY_1105, ((*(R24 *)rt_nil_check(l_F_1102))).f_CNAME, r_COPY_OF(((*(R24 *)rt_nil_check(l_F_1102))).f_T, r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_1102))).f_CNAME))), 0);
if ((((*(R24 *)rt_nil_check(l_F_1102))).f_KIND == ((rt_int)1LL)))
{
S_R9(&l_ASSIGN_1104, r_FMT2(rt_str("@ if (!(@)) rt_raise(RT_B_TYPE_MISMATCH);", 41), l_ASSIGN_1104, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1102))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_1102))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_1102))).f_CNAME))), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1102))).f_KIND == ((rt_int)2LL)))
{
S_R9(&l_ASSIGN_1104, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_1104, ((*(R24 *)rt_nil_check(l_F_1102))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_1102))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_1102))).f_CNAME), 0);
}
else
{
S_R9(&l_ASSIGN_1104, r_FMT2(rt_str("@ @", 3), l_ASSIGN_1104, r_ASSIGN_CODE(((*(R24 *)rt_nil_check(l_F_1102))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_1102))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_1102))).f_CNAME))), 0);
}
if (((((*(R24 *)rt_nil_check(l_F_1102))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R9(&l_EQ_1106, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1106, r_VARIANT_COND(l_F_1102, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1102))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_1102))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_1102))).f_CNAME))), 0);
}
else
{
S_R9(&l_EQ_1106, r_FMT2(rt_str("@ && @", 6), l_EQ_1106, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1102))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_1102))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_1102))).f_CNAME))), 0);
}
l_F_1102 = ((*(R24 *)rt_nil_check(l_F_1102))).f_NEXT;
}
RT_B_TICK();
} L_end1107: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_1101, l_BODY_1103));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_1101, l_C_1101, l_C_1101));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_1101, l_C_1101, l_C_1101));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_1101, l_C_1101, l_C_1101, l_ASSIGN_1104));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_1101, l_C_1101, l_C_1101, l_EQ_1106));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_1101, l_C_1101, l_C_1101));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s;", 28), l_C_1101, l_C_1101, l_C_1101, l_C_1101));
r_EMIT(g_O_HELPERS, r_FMT1(rt_str("@ return d; }", 13), l_COPY_1105));
}
static R9 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R9 l_ET_C_1108; memset(&l_ET_C_1108, 0, sizeof l_ET_C_1108);
S_R9(&l_ET_C_1108, r_CTYPE(p_ELEM), 0);
R9 l_KEY_1109; memset(&l_KEY_1109, 0, sizeof l_KEY_1109);
S_R9(&l_KEY_1109, r_FMT3(rt_str("@/@/@", 5), l_ET_C_1108, r_NUM(p_DIMS), r_NUM(((*(R22 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R12 * l_Y_1110; memset(&l_Y_1110, 0, sizeof l_Y_1110);
l_Y_1110 = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_1110 == NULL)) goto L_end1111;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_1110))).f_NAME, l_KEY_1109) && r_SAME_TYPE(((*(R12 *)rt_nil_check(l_Y_1110))).f_T, p_ELEM)))
{
{ R9 rv1112 = ((*(R12 *)rt_nil_check(l_Y_1110))).f_ACCESS;
return rv1112; }
}
l_Y_1110 = ((*(R12 *)rt_nil_check(l_Y_1110))).f_INSTANCES;
}
RT_B_TICK();
} L_end1111: ;
l_Y_1110 = r_NEW_SYM(g_Y_TYPE, l_KEY_1109);
((*(R12 *)rt_nil_check(l_Y_1110))).f_T = p_ELEM;
S_R9(&((*(R12 *)rt_nil_check(l_Y_1110))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R12 *)rt_nil_check(l_Y_1110))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R7 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_1110;
{
R9 l_C_1113; memset(&l_C_1113, 0, sizeof l_C_1113);
S_R9(&l_C_1113, ((*(R12 *)rt_nil_check(l_Y_1110))).f_ACCESS, 0);
R9 l_D_1114; memset(&l_D_1114, 0, sizeof l_D_1114);
S_R9(&l_D_1114, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_1113, l_C_1113));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_1113, l_D_1114, l_D_1114, l_ET_C_1108));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_1113, l_C_1113, l_C_1113));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_1113, l_C_1113, l_C_1113));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_1113, l_C_1113, l_C_1113, l_D_1114));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_1114, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_1113, l_C_1113, l_C_1113, l_D_1114));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_1114, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_1113, l_C_1113, l_C_1113));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s; ", 29), l_C_1113, l_C_1113, l_C_1113, l_C_1113));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("rt_int n = rt_b_extent(@, s.lo, s.hi); d.p = rt_alloc((n > 0 \? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = @; return d; }", 140), l_D_1114, r_COPY_OF(p_ELEM, r_MK(rt_str("s.p[i]", 6)))));
}
{ R9 rv1115 = ((*(R12 *)rt_nil_check(l_Y_1110))).f_ACCESS;
return rv1115; }
rt_raise(RT_X_INIT);
}
static R9 r_INIT_CODE(R22 * p_T, R9 p_LV) { RT_B_TICK(); 
rt_int l_K_1116; memset(&l_K_1116, 0, sizeof l_K_1116);
l_K_1116 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1116 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1117 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv1117; }
}
{ R9 rv1118 = r_FMT2(rt_str("@ = rt_b_str_new(@, 0);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv1118; }
}
else if ((l_K_1116 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1119 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv1119; }
}
{ R9 rv1120 = r_FMT2(rt_str("@ = rt_b_str_new(@, 1);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv1120; }
}
else if ((l_K_1116 == g_T_SEM))
{
{ R9 rv1121 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv1121; }
}
else if ((l_K_1116 == g_T_ABS))
{
{ R9 rv1122 = r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv1122; }
}
else if ((l_K_1116 == g_T_ARR))
{
{
R25 * l_B_1123; memset(&l_B_1123, 0, sizeof l_B_1123);
l_B_1123 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_1124; memset(&l_I_1124, 0, sizeof l_I_1124);
l_I_1124 = ((rt_int)0LL);
R9 l_R_1125; memset(&l_R_1125, 0, sizeof l_R_1125);
S_R9(&l_R_1125, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_1123 == NULL)) goto L_end1126;
{
S_R9(&l_R_1125, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_1125, p_LV, r_NUM(l_I_1124), ((*(R25 *)rt_nil_check(l_B_1123))).f_LO), 0);
S_R9(&l_R_1125, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_1125, p_LV, r_NUM(l_I_1124), ((*(R25 *)rt_nil_check(l_B_1123))).f_HI), 0);
l_I_1124 = rt_add(l_I_1124, ((rt_int)1LL));
l_B_1123 = ((*(R25 *)rt_nil_check(l_B_1123))).f_NEXT;
}
RT_B_TICK();
} L_end1126: ;
S_R9(&l_R_1125, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_1125, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R9(&l_R_1125, r_FMT4(rt_str("@ @.p = rt_b_array_alloc(n, sizeof *@.p);", 41), l_R_1125, p_LV, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_ELEM))
{
{
R9 l_IV_1127; memset(&l_IV_1127, 0, sizeof l_IV_1127);
S_R9(&l_IV_1127, r_NEW_NAME(rt_str("i", 1)), 0);
S_R9(&l_R_1125, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_1125, l_IV_1127, l_IV_1127, l_IV_1127), 0);
S_R9(&l_R_1125, r_FMT2(rt_str("@ @ }", 5), l_R_1125, r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_1127))), 0);
}
}
{ R9 rv1128 = r_CATS(l_R_1125, rt_str(" }", 2));
return rv1128; }
}
}
else if ((l_K_1116 == g_T_REC))
{
{
R24 * l_F_1129; memset(&l_F_1129, 0, sizeof l_F_1129);
l_F_1129 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1130; memset(&l_A_1130, 0, sizeof l_A_1130);
l_A_1130 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R9 l_R_1131; memset(&l_R_1131, 0, sizeof l_R_1131);
S_R9(&l_R_1131, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_1129 == NULL)) goto L_end1132;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1129))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_1130 == NULL)))
{
if ((!((*(R25 *)rt_nil_check(l_A_1130))).f_ANYARG))
{
S_R9(&l_R_1131, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_1131, p_LV, ((*(R24 *)rt_nil_check(l_F_1129))).f_CNAME, ((*(R25 *)rt_nil_check(l_A_1130))).f_LO), 0);
}
else if (((((*(R24 *)rt_nil_check(l_F_1129))).f_KIND == ((rt_int)2LL)) && ((((*(R25 *)rt_nil_check(l_A_1130))).f_HI).f_LEN == ((rt_int)0LL))))
{
S_R9(&l_R_1131, r_FMT3(rt_str("@ @.@ = INT64_MIN;", 18), l_R_1131, p_LV, ((*(R24 *)rt_nil_check(l_F_1129))).f_CNAME), 0);
}
l_A_1130 = ((*(R25 *)rt_nil_check(l_A_1130))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_1129))).f_T))
{
S_R9(&l_R_1131, r_FMT2(rt_str("@ @", 3), l_R_1131, r_SUBST_SELF(r_INIT_CODE(((*(R24 *)rt_nil_check(l_F_1129))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R24 *)rt_nil_check(l_F_1129))).f_CNAME)), p_LV)), 0);
}
l_F_1129 = ((*(R24 *)rt_nil_check(l_F_1129))).f_NEXT;
}
RT_B_TICK();
} L_end1132: ;
{ R9 rv1133 = l_R_1131;
return rv1133; }
}
}
{ R9 rv1134 = r_NO_TEXT();
return rv1134; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1135; memset(&l_K_1135, 0, sizeof l_K_1135);
l_K_1135 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_1135 == g_T_STR) || (l_K_1135 == g_T_BITS)) || (l_K_1135 == g_T_ARR)) || (l_K_1135 == g_T_SEM)))
{
{ rt_int rv1136 = 1;
return rv1136; }
}
else if ((l_K_1135 == g_T_ABS))
{
{ rt_int rv1137 = r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1137; }
}
else if ((l_K_1135 == g_T_REC))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv1138 = 1;
return rv1138; }
}
{
R24 * l_F_1139; memset(&l_F_1139, 0, sizeof l_F_1139);
l_F_1139 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1139 == NULL)) goto L_end1140;
{
if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_1139))).f_T))
{
{ rt_int rv1141 = 1;
return rv1141; }
}
l_F_1139 = ((*(R24 *)rt_nil_check(l_F_1139))).f_NEXT;
}
RT_B_TICK();
} L_end1140: ;
}
}
{ rt_int rv1142 = 0;
return rv1142; }
rt_raise(RT_X_INIT);
}
static R9 r_COPY_OF(R22 * p_T, R9 p_V) { RT_B_TICK(); 
rt_int l_K_1143; memset(&l_K_1143, 0, sizeof l_K_1143);
l_K_1143 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1143 == g_T_STR) || (l_K_1143 == g_T_BITS)))
{
{ R9 rv1144 = r_FMT1(rt_str("rt_str_copy(@)", 14), p_V);
return rv1144; }
}
else if ((l_K_1143 == g_T_ABS))
{
{ R9 rv1145 = r_COPY_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_V);
return rv1145; }
}
else if (((l_K_1143 == g_T_ARR) || (l_K_1143 == g_T_REC)))
{
{ R9 rv1146 = r_FMT2(rt_str("C_@(@)", 6), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_V);
return rv1146; }
}
{ R9 rv1147 = p_V;
return rv1147; }
rt_raise(RT_X_INIT);
}
static R9 r_ASSIGN_CODE(R22 * p_T, R9 p_LV, R9 p_RV) { RT_B_TICK(); 
rt_int l_K_1148; memset(&l_K_1148, 0, sizeof l_K_1148);
l_K_1148 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1148 == g_T_STR) || (l_K_1148 == g_T_BITS)))
{
{ R9 rv1149 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv1149; }
}
else if ((l_K_1148 == g_T_ABS))
{
{ R9 rv1150 = r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv1150; }
}
else if ((l_K_1148 == g_T_SEM))
{
{ R9 rv1151 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv1151; }
}
else if ((l_K_1148 == g_T_ARR))
{
{ R9 rv1152 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1152; }
}
else if ((l_K_1148 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R9 rv1153 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1153; }
}
{ R9 rv1154 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1154; }
}
{ R9 rv1155 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv1155; }
rt_raise(RT_X_INIT);
}
static R9 r_EQUAL_CODE(R22 * p_T, R9 p_A, R9 p_B) { RT_B_TICK(); 
rt_int l_K_1156; memset(&l_K_1156, 0, sizeof l_K_1156);
l_K_1156 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1156 == g_T_STR) || (l_K_1156 == g_T_BITS)))
{
{ R9 rv1157 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv1157; }
}
else if ((l_K_1156 == g_T_ABS))
{
{ R9 rv1158 = r_EQUAL_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv1158; }
}
else if (((l_K_1156 == g_T_ARR) || (l_K_1156 == g_T_REC)))
{
{ R9 rv1159 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv1159; }
}
else if ((l_K_1156 == g_T_SEM))
{
{ R9 rv1160 = r_MK(rt_str("0", 1));
return rv1160; }
}
else if (r_IS_D(p_T))
{
{ R9 rv1161 = r_FMT2(rt_str("(rt_b_dcmp(@, @) == 0)", 22), p_A, p_B);
return rv1161; }
}
{ R9 rv1162 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv1162; }
rt_raise(RT_X_INIT);
}
static R9 r_RANGE_CHECK(R22 * p_T, R9 p_V, R9 p_SELF) { RT_B_TICK(); 
if (((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))) || ((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS))
{
{ R9 rv1163 = p_V;
return rv1163; }
}
if ((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R9 rv1164 = p_V;
return rv1164; }
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R9 rv1165 = p_V;
return rv1165; }
}
if (r_IS_D(p_T))
{
{
R9 l_TC_1166; memset(&l_TC_1166, 0, sizeof l_TC_1166);
S_R9(&l_TC_1166, r_MK(rt_str("0", 1)), 0);
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
S_R9(&l_TC_1166, r_MK(rt_str("1", 1)), 0);
}
{ R9 rv1167 = r_FMT4(rt_str("rt_b_drange(@, @, @, @)", 23), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF), l_TC_1166);
return rv1167; }
}
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R9 rv1168 = r_FMT3(rt_str("rt_b_tfrange(@, @, @)", 21), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1168; }
}
{ R9 rv1169 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1169; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R9 rv1170 = r_FMT3(rt_str("rt_b_trange(@, @, @)", 20), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1170; }
}
{ R9 rv1171 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1171; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv1172 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv1172; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv1173 = 1;
return rv1173; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv1174 = r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv1174; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv1175 = r_SAME_CLASS(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1175; }
}
if ((!(((*(R22 *)rt_nil_check(p_A))).f_KIND == ((*(R22 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv1176 = 0;
return rv1176; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv1177 = (((*(R22 *)rt_nil_check(p_A))).f_BASE == ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1177; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1178 = ((((*(R22 *)rt_nil_check(p_A))).f_DIMS == ((*(R22 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM));
return rv1178; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv1179 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv1179; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1180 = ((r_ORIGINAL(((*(R22 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R22 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE));
return rv1180; }
}
{ rt_int rv1181 = 1;
return rv1181; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv1182 = 1;
return rv1182; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv1183 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv1183; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv1184 = r_SAME_TYPE(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1184; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv1185 = 0;
return rv1185; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv1186 = (((*(R22 *)rt_nil_check(p_A))).f_SCALE == ((*(R22 *)rt_nil_check(p_B))).f_SCALE);
return rv1186; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1187 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM);
return rv1187; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv1188 = r_SAME_ARGS(((*(R22 *)rt_nil_check(p_A))).f_ARGS, ((*(R22 *)rt_nil_check(p_B))).f_ARGS);
return rv1188; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1189 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1189; }
}
{ rt_int rv1190 = 1;
return rv1190; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R25 * p_B) { RT_B_TICK(); 
if (((((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1191 = 0;
return rv1191; }
}
{ rt_int rv1192 = r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(p_B))).f_HI);
return rv1192; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R25 * p_A, R25 * p_B) { RT_B_TICK(); 
R25 * l_P_1193; memset(&l_P_1193, 0, sizeof l_P_1193);
l_P_1193 = p_A;
R25 * l_Q_1194; memset(&l_Q_1194, 0, sizeof l_Q_1194);
l_Q_1194 = p_B;
for (;;) {
if (((l_P_1193 == NULL) || (l_Q_1194 == NULL))) goto L_end1195;
{
if ((r_IS_GEN_ARG(l_P_1193) || r_IS_GEN_ARG(l_Q_1194)))
{
}
else if ((!(((*(R25 *)rt_nil_check(l_P_1193))).f_ANYARG == ((*(R25 *)rt_nil_check(l_Q_1194))).f_ANYARG)))
{
{ rt_int rv1196 = 0;
return rv1196; }
}
if (((((*(R25 *)rt_nil_check(l_P_1193))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_1194))).f_MLO).f_OK))
{
if ((!((((*(R25 *)rt_nil_check(l_P_1193))).f_MLO).f_V == (((*(R25 *)rt_nil_check(l_Q_1194))).f_MLO).f_V)))
{
{ rt_int rv1197 = 0;
return rv1197; }
}
}
l_P_1193 = ((*(R25 *)rt_nil_check(l_P_1193))).f_NEXT;
l_Q_1194 = ((*(R25 *)rt_nil_check(l_Q_1194))).f_NEXT;
}
RT_B_TICK();
} L_end1195: ;
{ rt_int rv1198 = ((l_P_1193 == NULL) && (l_Q_1194 == NULL));
return rv1198; }
rt_raise(RT_X_INIT);
}
static R9 r_FRAME_OF(rt_int p_LEVEL) { RT_B_TICK(); 
R19 * l_CS_1199; memset(&l_CS_1199, 0, sizeof l_CS_1199);
l_CS_1199 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R9 l_T_1200; memset(&l_T_1200, 0, sizeof l_T_1200);
rt_int l_LEV_1201; memset(&l_LEV_1201, 0, sizeof l_LEV_1201);
if ((((*(R19 *)rt_nil_check(l_CS_1199))).f_LEVEL == p_LEVEL))
{
{ R9 rv1202 = r_MK(rt_str("F", 1));
return rv1202; }
}
if (((*(R19 *)rt_nil_check(l_CS_1199))).f_FRAMED)
{
S_R9(&l_T_1200, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R9(&l_T_1200, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_1201 = rt_sub(((*(R19 *)rt_nil_check(l_CS_1199))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_1201 <= p_LEVEL)) goto L_end1203;
{
S_R9(&l_T_1200, r_CATS(l_T_1200, rt_str("->up", 4)), 0);
l_LEV_1201 = rt_sub(l_LEV_1201, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1203: ;
{ R9 rv1204 = l_T_1200;
return rv1204; }
rt_raise(RT_X_INIT);
}
static R9 r_OBJ_ACCESS(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R12 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R9 rv1205 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1205; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1206 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1206; }
}
if (((*(R12 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R9 rv1207 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1207; }
}
{ R9 rv1208 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1208; }
rt_raise(RT_X_INIT);
}
static R9 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE) { RT_B_TICK(); 
R19 * l_CS_1209; memset(&l_CS_1209, 0, sizeof l_CS_1209);
l_CS_1209 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R22 * l_T_1210; memset(&l_T_1210, 0, sizeof l_T_1210);
l_T_1210 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
R9 l_CN_1211; memset(&l_CN_1211, 0, sizeof l_CN_1211);
if ((((((*(R19 *)rt_nil_check(l_CS_1209))).f_LEVEL == ((rt_int)0LL)) && ((((*(R7 *)rt_nil_check(g_W))).f_SEPSEG).f_LEN > ((rt_int)0LL))) && rt_b_eq(p_BASE, rt_str("", 0))))
{
((*(R7 *)rt_nil_check(g_W))).f_SEPV = rt_add(((*(R7 *)rt_nil_check(g_W))).f_SEPV, ((rt_int)1LL));
S_R9(&l_CN_1211, r_FMT3(rt_str("bs_@_v@_@", 9), r_CID(((*(R7 *)rt_nil_check(g_W))).f_SEPSEG), r_NUM(((*(R7 *)rt_nil_check(g_W))).f_SEPV), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
if (((*(R7 *)rt_nil_check(g_W))).f_EXTSEG)
{
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("extern @ @;", 11), r_CTYPE(l_T_1210), l_CN_1211));
}
else
{
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("@ @;", 4), r_CTYPE(l_T_1210), l_CN_1211));
}
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1211, 0);
{ R9 rv1212 = l_CN_1211;
return rv1212; }
}
if ((((*(R19 *)rt_nil_check(l_CS_1209))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R7 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R7 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R9(&l_CN_1211, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
}
else
{
S_R9(&l_CN_1211, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_1210), l_CN_1211));
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1211, 0);
{ R9 rv1213 = l_CN_1211;
return rv1213; }
}
S_R9(&l_CN_1211, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_FIELD, l_CN_1211, 0);
if (((*(R19 *)rt_nil_check(l_CS_1209))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_1210), l_CN_1211), &((*(R19 *)rt_nil_check(l_CS_1209))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_1211), 0);
{ R9 rv1214 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1214; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_1210), l_CN_1211, l_CN_1211, l_CN_1211));
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1211, 0);
{ R9 rv1215 = l_CN_1211;
return rv1215; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R17 * p_D) { RT_B_TICK(); 
R22 * l_T_1216; memset(&l_T_1216, 0, sizeof l_T_1216);
l_T_1216 = r_RESOLVE(((*(R17 *)rt_nil_check(p_D))).f_B);
R17 * l_N_1217; memset(&l_N_1217, 0, sizeof l_N_1217);
l_N_1217 = ((*(R17 *)rt_nil_check(p_D))).f_A;
R26 l_V_1218; memset(&l_V_1218, 0, sizeof l_V_1218);
rt_int l_HAVE_V_1219; memset(&l_HAVE_V_1219, 0, sizeof l_HAVE_V_1219);
l_HAVE_V_1219 = 0;
if (((((*(R22 *)rt_nil_check(l_T_1216))).f_KIND == g_T_TYPE) || (((*(R22 *)rt_nil_check(l_T_1216))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_1217 == NULL)) goto L_end1220;
{
{
R12 * l_Y_1221; memset(&l_Y_1221, 0, sizeof l_Y_1221);
l_Y_1221 = r_NEW_SYM(g_Y_VAR, ((*(R17 *)rt_nil_check(l_N_1217))).f_NAME);
R9 l_CN_1222; memset(&l_CN_1222, 0, sizeof l_CN_1222);
if ((((*(R17 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R12 *)rt_nil_check(l_Y_1221))).f_KIND = g_Y_CONST;
((*(R12 *)rt_nil_check(l_Y_1221))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_1216) && (((*(R22 *)rt_nil_check(l_T_1216))).f_SCALE == ((rt_int)0LL))))
{
{
R23 l_M_1223; memset(&l_M_1223, 0, sizeof l_M_1223);
S_R23(&l_M_1223, r_MANIFEST(((*(R17 *)rt_nil_check(p_D))).f_C), 0);
((*(R12 *)rt_nil_check(l_Y_1221))).f_HASMV = (l_M_1223).f_OK;
((*(R12 *)rt_nil_check(l_Y_1221))).f_MV = (l_M_1223).f_V;
}
}
}
((*(R12 *)rt_nil_check(l_Y_1221))).f_T = l_T_1216;
S_R9(&l_CN_1222, r_NEW_OBJECT(l_Y_1221, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_1216))
{
r_CODE(r_INIT_CODE(l_T_1216, l_CN_1222));
}
if ((!(((*(R17 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_1219))
{
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R17 *)rt_nil_check(p_D))).f_C;
S_R26(&l_V_1218, r_EXPR(((*(R17 *)rt_nil_check(p_D))).f_C, l_T_1216), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
l_HAVE_V_1219 = 1;
}
r_CODE(r_STORE_CODE(l_T_1216, l_CN_1222, l_V_1218, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_1221, ((*(R17 *)rt_nil_check(l_N_1217))).f_LINE);
}
l_N_1217 = ((*(R17 *)rt_nil_check(l_N_1217))).f_NEXT;
}
RT_B_TICK();
} L_end1220: ;
}
static R26 r_MKET(R9 p_C, R22 * p_T) { RT_B_TICK(); 
{ R26 rv1224 = ({ R26 rc1225; memset(&rc1225, 0, sizeof rc1225);  S_R9(&rc1225.f_C, p_C, 0); rc1225.f_T = p_T; rc1225.f_LVAL = 0; S_R9(&rc1225.f_SELF, r_NO_TEXT(), 0); rc1225; });
return rv1224; }
rt_raise(RT_X_INIT);
}
static R26 r_MKLV(R9 p_C, R22 * p_T, rt_int p_LVAL, R9 p_SELF) { RT_B_TICK(); 
{ R26 rv1226 = ({ R26 rc1227; memset(&rc1227, 0, sizeof rc1227);  S_R9(&rc1227.f_C, p_C, 0); rc1227.f_T = p_T; rc1227.f_LVAL = p_LVAL; S_R9(&rc1227.f_SELF, p_SELF, 0); rc1227; });
return rv1226; }
rt_raise(RT_X_INIT);
}
static R22 * r_INT_TYPE(rt_int p_SCALE) { RT_B_TICK(); 
R22 * l_T_1228; memset(&l_T_1228, 0, sizeof l_T_1228);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R22 * rv1229 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv1229; }
}
l_T_1228 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_1228))).f_SCALE = p_SCALE;
{ R22 * rv1230 = l_T_1228;
return rv1230; }
rt_raise(RT_X_INIT);
}
static R22 * r_STR_TYPE(R9 p_LEN, R23 p_M) { RT_B_TICK(); 
R22 * l_T_1231; memset(&l_T_1231, 0, sizeof l_T_1231);
l_T_1231 = r_NEW_TYP(g_T_STR);
S_R9(&((*(R22 *)rt_nil_check(l_T_1231))).f_LEN_C, p_LEN, 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1231))).f_MLEN, p_M, 0);
{ R22 * rv1232 = l_T_1231;
return rv1232; }
rt_raise(RT_X_INIT);
}
static R9 r_CSTRING(R9 p_T) { RT_B_TICK(); 
rstr l_S_1233; memset(&l_S_1233, 0, sizeof l_S_1233);
l_S_1233 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_1233, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_1234; memset(&l_AT_1234, 0, sizeof l_AT_1234);
l_AT_1234 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R9 l_R_1235; memset(&l_R_1235, 0, sizeof l_R_1235);
S_R9(&l_R_1235, r_MK(rt_str("\"", 1)), 0);
{ rt_int it1237_lo = ((rt_int)0LL), it1237_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it1237 = it1237_lo; it1237 <= it1237_hi; it1237++) {
{
if ((rt_b_eq(rt_b_slice(l_S_1233, it1237, it1237), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_1233, it1237, it1237), rt_str("\\", 1))))
{
S_R9(&l_R_1235, r_MK(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_S_1233, it1237, it1237))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1233, it1237, it1237), rt_str("\?", 1)))
{
S_R9(&l_R_1235, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_1238; memset(&l_C_1238, 0, sizeof l_C_1238);
l_C_1238 = r_CODE_OF(rt_b_slice(l_S_1233, it1237, it1237));
if (({ rt_int iv1239 = l_C_1238; (((rt_int)32LL) <= iv1239) && (iv1239 <= ((rt_int)126LL)); }))
{
S_R9(&l_R_1235, r_MK(rt_b_slice(l_S_1233, it1237, it1237)), 0);
}
else
{
S_R9(&l_R_1235, r_MK(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_1238, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_1238, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_1238, ((rt_int)8LL))))), 0);
}
}
}
}
RT_B_TICK();
if (it1237 == it1237_hi) break;
} } L_end1236: ;
S_R9(&l_R_1235, r_MK(rt_str("\"", 1)), 0);
{ R9 rv1240 = ({ R9 rc1241; memset(&rc1241, 0, sizeof rc1241);  rc1241.f_AT = l_AT_1234; rc1241.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_1234); rc1241.f_H = rt_neg(((rt_int)1LL)); rc1241; });
return rv1240; }
rt_raise(RT_X_INIT);
}
static R23 r_MANIFEST(R17 * p_E) { RT_B_TICK(); 
rt_int l_K_1242; memset(&l_K_1242, 0, sizeof l_K_1242);
l_K_1242 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
R23 l_NO_1243; memset(&l_NO_1243, 0, sizeof l_NO_1243);
S_R23(&l_NO_1243, ({ R23 rc1244; memset(&rc1244, 0, sizeof rc1244);  rc1244.f_OK = 0; rc1244.f_V = ((rt_int)0LL); rc1244; }), 0);
if ((l_K_1242 == g_N_INT))
{
{ R23 rv1245 = ({ R23 rc1246; memset(&rc1246, 0, sizeof rc1246);  rc1246.f_OK = 1; rc1246.f_V = ((*(R17 *)rt_nil_check(p_E))).f_IV; rc1246; });
return rv1245; }
}
else if ((l_K_1242 == g_N_PAREN))
{
{ R23 rv1247 = r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A);
return rv1247; }
}
else if ((l_K_1242 == g_N_BOOL))
{
{ R23 rv1248 = ({ R23 rc1249; memset(&rc1249, 0, sizeof rc1249);  rc1249.f_OK = 1; rc1249.f_V = ((*(R17 *)rt_nil_check(p_E))).f_IV; rc1249; });
return rv1248; }
}
else if ((l_K_1242 == g_N_UNOP))
{
{
R23 l_A_1250; memset(&l_A_1250, 0, sizeof l_A_1250);
S_R23(&l_A_1250, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
if ((!(l_A_1250).f_OK))
{
{ R23 rv1251 = l_NO_1243;
return rv1251; }
}
{ R23 rv1252 = ({ R23 rc1253; memset(&rc1253, 0, sizeof rc1253);  rc1253.f_OK = 1; rc1253.f_V = r_MANIFEST_ARITH(r_MK(rt_str("-", 1)), ((rt_int)0LL), (l_A_1250).f_V, ((*(R17 *)rt_nil_check(p_E))).f_LINE); rc1253; });
return rv1252; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R23 rv1254 = l_A_1250;
return rv1254; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R23 rv1255 = ({ R23 rc1256; memset(&rc1256, 0, sizeof rc1256);  rc1256.f_OK = (l_A_1250).f_OK; rc1256.f_V = rt_sub(((rt_int)1LL), (l_A_1250).f_V); rc1256; });
return rv1255; }
}
}
}
else if ((l_K_1242 == g_N_BINOP))
{
if ((!(((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R23 rv1257 = l_NO_1243;
return rv1257; }
}
{
R23 l_A_1258; memset(&l_A_1258, 0, sizeof l_A_1258);
S_R23(&l_A_1258, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R23 l_B_1259; memset(&l_B_1259, 0, sizeof l_B_1259);
S_R23(&l_B_1259, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
R9 l_OP_1260; memset(&l_OP_1260, 0, sizeof l_OP_1260);
S_R9(&l_OP_1260, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
if (r_TEQS(l_OP_1260, rt_str("&", 1)))
{
if (((((l_A_1258).f_OK && ((l_A_1258).f_V == ((rt_int)0LL)))) || (((l_B_1259).f_OK && ((l_B_1259).f_V == ((rt_int)0LL))))))
{
{ R23 rv1261 = ({ R23 rc1262; memset(&rc1262, 0, sizeof rc1262);  rc1262.f_OK = 1; rc1262.f_V = ((rt_int)0LL); rc1262; });
return rv1261; }
}
if (((l_A_1258).f_OK && (l_B_1259).f_OK))
{
{ R23 rv1263 = ({ R23 rc1264; memset(&rc1264, 0, sizeof rc1264);  rc1264.f_OK = 1; rc1264.f_V = ((rt_int)1LL); rc1264; });
return rv1263; }
}
{ R23 rv1265 = l_NO_1243;
return rv1265; }
}
else if (r_TEQS(l_OP_1260, rt_str("!", 1)))
{
if (((((l_A_1258).f_OK && ((l_A_1258).f_V == ((rt_int)1LL)))) || (((l_B_1259).f_OK && ((l_B_1259).f_V == ((rt_int)1LL))))))
{
{ R23 rv1266 = ({ R23 rc1267; memset(&rc1267, 0, sizeof rc1267);  rc1267.f_OK = 1; rc1267.f_V = ((rt_int)1LL); rc1267; });
return rv1266; }
}
if (((l_A_1258).f_OK && (l_B_1259).f_OK))
{
{ R23 rv1268 = ({ R23 rc1269; memset(&rc1269, 0, sizeof rc1269);  rc1269.f_OK = 1; rc1269.f_V = ((rt_int)0LL); rc1269; });
return rv1268; }
}
{ R23 rv1270 = l_NO_1243;
return rv1270; }
}
if ((!(((l_A_1258).f_OK && (l_B_1259).f_OK))))
{
{ R23 rv1271 = l_NO_1243;
return rv1271; }
}
if ((!((r_MANIFEST_INT(((*(R17 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R17 *)rt_nil_check(p_E))).f_B)))))
{
{ R23 rv1272 = l_NO_1243;
return rv1272; }
}
if (((r_TEQS(l_OP_1260, rt_str("+", 1)) || r_TEQS(l_OP_1260, rt_str("-", 1))) || r_TEQS(l_OP_1260, rt_str("*", 1))))
{
{ R23 rv1273 = ({ R23 rc1274; memset(&rc1274, 0, sizeof rc1274);  rc1274.f_OK = 1; rc1274.f_V = r_MANIFEST_ARITH(l_OP_1260, (l_A_1258).f_V, (l_B_1259).f_V, ((*(R17 *)rt_nil_check(p_E))).f_LINE); rc1274; });
return rv1273; }
}
else if ((r_TEQS(l_OP_1260, rt_str("//", 2)) && (!((l_B_1259).f_V == ((rt_int)0LL)))))
{
{ R23 rv1275 = ({ R23 rc1276; memset(&rc1276, 0, sizeof rc1276);  rc1276.f_OK = 1; rc1276.f_V = rt_quot((l_A_1258).f_V, (l_B_1259).f_V); rc1276; });
return rv1275; }
}
else if ((r_TEQS(l_OP_1260, rt_str("MOD", 3)) && (!((l_B_1259).f_V == ((rt_int)0LL)))))
{
{ R23 rv1277 = ({ R23 rc1278; memset(&rc1278, 0, sizeof rc1278);  rc1278.f_OK = 1; rc1278.f_V = rt_rem((l_A_1258).f_V, (l_B_1259).f_V); rc1278; });
return rv1277; }
}
else if (r_TEQS(l_OP_1260, rt_str("=", 1)))
{
{ R23 rv1279 = ({ R23 rc1280; memset(&rc1280, 0, sizeof rc1280);  rc1280.f_OK = 1; rc1280.f_V = r_BOOL_INT(((l_A_1258).f_V == (l_B_1259).f_V)); rc1280; });
return rv1279; }
}
else if (r_TEQS(l_OP_1260, rt_str("<>", 2)))
{
{ R23 rv1281 = ({ R23 rc1282; memset(&rc1282, 0, sizeof rc1282);  rc1282.f_OK = 1; rc1282.f_V = r_BOOL_INT((!((l_A_1258).f_V == (l_B_1259).f_V))); rc1282; });
return rv1281; }
}
else if (r_TEQS(l_OP_1260, rt_str("<", 1)))
{
{ R23 rv1283 = ({ R23 rc1284; memset(&rc1284, 0, sizeof rc1284);  rc1284.f_OK = 1; rc1284.f_V = r_BOOL_INT(((l_A_1258).f_V < (l_B_1259).f_V)); rc1284; });
return rv1283; }
}
else if (r_TEQS(l_OP_1260, rt_str(">", 1)))
{
{ R23 rv1285 = ({ R23 rc1286; memset(&rc1286, 0, sizeof rc1286);  rc1286.f_OK = 1; rc1286.f_V = r_BOOL_INT(((l_A_1258).f_V > (l_B_1259).f_V)); rc1286; });
return rv1285; }
}
else if (r_TEQS(l_OP_1260, rt_str("<=", 2)))
{
{ R23 rv1287 = ({ R23 rc1288; memset(&rc1288, 0, sizeof rc1288);  rc1288.f_OK = 1; rc1288.f_V = r_BOOL_INT(((l_A_1258).f_V <= (l_B_1259).f_V)); rc1288; });
return rv1287; }
}
else if (r_TEQS(l_OP_1260, rt_str(">=", 2)))
{
{ R23 rv1289 = ({ R23 rc1290; memset(&rc1290, 0, sizeof rc1290);  rc1290.f_OK = 1; rc1290.f_V = r_BOOL_INT(((l_A_1258).f_V >= (l_B_1259).f_V)); rc1290; });
return rv1289; }
}
}
}
else if ((l_K_1242 == g_N_IN))
{
{
R23 l_A_1291; memset(&l_A_1291, 0, sizeof l_A_1291);
S_R23(&l_A_1291, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R23 l_L_1292; memset(&l_L_1292, 0, sizeof l_L_1292);
S_R23(&l_L_1292, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R23 l_U_1293; memset(&l_U_1293, 0, sizeof l_U_1293);
S_R23(&l_U_1293, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_1294; memset(&l_LO_1294, 0, sizeof l_LO_1294);
rt_int l_HI_1295; memset(&l_HI_1295, 0, sizeof l_HI_1295);
if ((!(((((l_A_1291).f_OK && (l_L_1292).f_OK) && (l_U_1293).f_OK) && r_MANIFEST_INT(((*(R17 *)rt_nil_check(p_E))).f_A)))))
{
{ R23 rv1296 = l_NO_1243;
return rv1296; }
}
l_LO_1294 = (l_L_1292).f_V;
l_HI_1295 = (l_U_1293).f_V;
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_1294 = rt_add(l_LO_1294, ((rt_int)1LL));
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_1295 = rt_sub(l_HI_1295, ((rt_int)1LL));
}
{ R23 rv1297 = ({ R23 rc1298; memset(&rc1298, 0, sizeof rc1298);  rc1298.f_OK = 1; rc1298.f_V = r_BOOL_INT((((l_A_1291).f_V >= l_LO_1294) && ((l_A_1291).f_V <= l_HI_1295))); rc1298; });
return rv1297; }
}
}
else if (((l_K_1242 == g_N_NAME) || (l_K_1242 == g_TS_GEN)))
{
{
R12 * l_Y_1299; memset(&l_Y_1299, 0, sizeof l_Y_1299);
l_Y_1299 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
R21 * l_B_1300; memset(&l_B_1300, 0, sizeof l_B_1300);
l_B_1300 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_1300 == NULL)) goto L_end1301;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_1300))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME) && ((*(R21 *)rt_nil_check(l_B_1300))).f_HASMV))
{
{ R23 rv1302 = ({ R23 rc1303; memset(&rc1303, 0, sizeof rc1303);  rc1303.f_OK = 1; rc1303.f_V = ((*(R21 *)rt_nil_check(l_B_1300))).f_MV; rc1303; });
return rv1302; }
}
l_B_1300 = ((*(R21 *)rt_nil_check(l_B_1300))).f_NEXT;
}
RT_B_TICK();
} L_end1301: ;
if ((!(l_Y_1299 == NULL)))
{
if ((((((((*(R12 *)rt_nil_check(l_Y_1299))).f_KIND == g_Y_CONST) || (((*(R12 *)rt_nil_check(l_Y_1299))).f_KIND == g_Y_GEN)) || (((((*(R12 *)rt_nil_check(l_Y_1299))).f_KIND == g_Y_VAR) && ((*(R12 *)rt_nil_check(l_Y_1299))).f_INPUT)))) && ((*(R12 *)rt_nil_check(l_Y_1299))).f_HASMV))
{
{ R23 rv1304 = ({ R23 rc1305; memset(&rc1305, 0, sizeof rc1305);  rc1305.f_OK = 1; rc1305.f_V = ((*(R12 *)rt_nil_check(l_Y_1299))).f_MV; rc1305; });
return rv1304; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1299))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R17 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1306 = ({ R23 rc1307; memset(&rc1307, 0, sizeof rc1307);  rc1307.f_OK = 1; rc1307.f_V = ((*(R12 *)rt_nil_check(l_Y_1299))).f_MV; rc1307; });
return rv1306; }
}
}
}
}
}
else if ((l_K_1242 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R17 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1308 = ({ R23 rc1309; memset(&rc1309, 0, sizeof rc1309);  rc1309.f_OK = 1; rc1309.f_V = ((*(R12 *)rt_nil_check(r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc1309; });
return rv1308; }
}
}
else if ((l_K_1242 == g_N_FIELD))
{
{ R23 rv1310 = r_ATTR_MANIFEST(p_E);
return rv1310; }
}
else if ((l_K_1242 == g_N_APPLY))
{
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R23 rv1311 = ({ R23 rc1312; memset(&rc1312, 0, sizeof rc1312);  rc1312.f_OK = 1; rc1312.f_V = r_BOOL_INT((r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A)).f_OK); rc1312; });
return rv1311; }
}
}
{ R23 rv1313 = l_NO_1243;
return rv1313; }
rt_raise(RT_X_INIT);
}
static R23 r_ATTR_MANIFEST(R17 * p_E) { RT_B_TICK(); 
R17 * l_A_1314; memset(&l_A_1314, 0, sizeof l_A_1314);
l_A_1314 = ((*(R17 *)rt_nil_check(p_E))).f_A;
R9 l_NAME_1315; memset(&l_NAME_1315, 0, sizeof l_NAME_1315);
S_R9(&l_NAME_1315, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
R22 * l_T_1316; memset(&l_T_1316, 0, sizeof l_T_1316);
l_T_1316 = NULL;
if ((((*(R17 *)rt_nil_check(l_A_1314))).f_KIND == g_N_PAREN))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1314))).f_A))).f_KIND == g_N_FIELD))
{
{
R17 * l_INNER_1317; memset(&l_INNER_1317, 0, sizeof l_INNER_1317);
l_INNER_1317 = ((*(R17 *)rt_nil_check(l_A_1314))).f_A;
if (r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1317))).f_NAME, rt_str("LENGTH", 6)))
{
if (r_TEQS(l_NAME_1315, rt_str("MAX", 3)))
{
{ R23 rv1318 = r_SOME(r_MAX_LENGTH());
return rv1318; }
}
else if (r_TEQS(l_NAME_1315, rt_str("MIN", 3)))
{
{ R23 rv1319 = r_SOME(((rt_int)0LL));
return rv1319; }
}
}
else if ((r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1317))).f_NAME, rt_str("NOM_PRECISION", 13)) || r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1317))).f_NAME, rt_str("IMP_PRECISION", 13))))
{
if (r_TEQS(l_NAME_1315, rt_str("MAX", 3)))
{
{ R23 rv1320 = r_SOME(r_MAX_FLOAT_PRECISION());
return rv1320; }
}
else if (r_TEQS(l_NAME_1315, rt_str("MIN", 3)))
{
{ R23 rv1321 = r_SOME(((rt_int)1LL));
return rv1321; }
}
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1317))).f_NAME, rt_str("SCALE", 5)))
{
if (r_TEQS(l_NAME_1315, rt_str("MAX", 3)))
{
{ R23 rv1322 = r_SOME(((rt_int)1000LL));
return rv1322; }
}
else if (r_TEQS(l_NAME_1315, rt_str("MIN", 3)))
{
{ R23 rv1323 = r_SOME(rt_neg(((rt_int)1000LL)));
return rv1323; }
}
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1317))).f_NAME, rt_str("RADIX", 5)))
{
if (r_TEQS(l_NAME_1315, rt_str("MAX", 3)))
{
{ R23 rv1324 = r_SOME(((rt_int)1000LL));
return rv1324; }
}
else if (r_TEQS(l_NAME_1315, rt_str("MIN", 3)))
{
{ R23 rv1325 = r_SOME(((rt_int)2LL));
return rv1325; }
}
}
}
}
}
if (((((*(R17 *)rt_nil_check(l_A_1314))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_A_1314))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_1326; memset(&l_Y_1326, 0, sizeof l_Y_1326);
l_Y_1326 = r_LOOKUP(((*(R17 *)rt_nil_check(l_A_1314))).f_NAME);
if ((l_Y_1326 == NULL))
{
{ R23 rv1327 = r_NO_MVAL();
return rv1327; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1326))).f_KIND == g_Y_TYPE))
{
l_T_1316 = r_RESOLVE_USER_NAME(((*(R17 *)rt_nil_check(l_A_1314))).f_NAME, ((*(R17 *)rt_nil_check(l_A_1314))).f_LINE);
}
else if ((((((*(R12 *)rt_nil_check(l_Y_1326))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1326))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1326))).f_KIND == g_Y_GEN)))
{
l_T_1316 = ((*(R12 *)rt_nil_check(l_Y_1326))).f_T;
}
else
{
{ R23 rv1328 = r_NO_MVAL();
return rv1328; }
}
}
}
else if ((((*(R17 *)rt_nil_check(l_A_1314))).f_KIND == g_N_INT))
{
if ((r_TEQS(l_NAME_1315, rt_str("MIN", 3)) || r_TEQS(l_NAME_1315, rt_str("MAX", 3))))
{
{ R23 rv1329 = r_SOME(((*(R17 *)rt_nil_check(l_A_1314))).f_IV);
return rv1329; }
}
l_T_1316 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
else if ((((((((((((((*(R17 *)rt_nil_check(l_A_1314))).f_KIND == g_N_PAREN) || (((*(R17 *)rt_nil_check(l_A_1314))).f_KIND == g_N_BINOP)) || (((*(R17 *)rt_nil_check(l_A_1314))).f_KIND == g_N_UNOP)) || (((*(R17 *)rt_nil_check(l_A_1314))).f_KIND == g_N_FIELD)) || (((*(R17 *)rt_nil_check(l_A_1314))).f_KIND == g_N_INDEX)) || (((*(R17 *)rt_nil_check(l_A_1314))).f_KIND == g_N_APPLY)) || (((*(R17 *)rt_nil_check(l_A_1314))).f_KIND == g_N_REAL)) || (((*(R17 *)rt_nil_check(l_A_1314))).f_KIND == g_N_STR)) || (((*(R17 *)rt_nil_check(l_A_1314))).f_KIND == g_N_SUBSTR)) || (((*(R17 *)rt_nil_check(l_A_1314))).f_KIND == g_N_DEREF)) || (((*(R17 *)rt_nil_check(l_A_1314))).f_KIND == g_N_TYPESPEC)))
{
if ((((*(R17 *)rt_nil_check(l_A_1314))).f_KIND == g_N_PAREN))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1314))).f_A))).f_KIND == g_N_INT) && ((r_TEQS(l_NAME_1315, rt_str("MIN", 3)) || r_TEQS(l_NAME_1315, rt_str("MAX", 3))))))
{
{ R23 rv1330 = r_SOME(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1314))).f_A))).f_IV);
return rv1330; }
}
}
{
R14 l_SAVED_CODE_1331; memset(&l_SAVED_CODE_1331, 0, sizeof l_SAVED_CODE_1331);
S_R14(&l_SAVED_CODE_1331, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1332; memset(&rc1332, 0, sizeof rc1332);  rc1332.f_HEAD = NULL; rc1332.f_TAIL = NULL; rc1332; }), 0);
l_T_1316 = (r_EXPR(l_A_1314, NULL)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1331, 0);
}
}
else
{
{ R23 rv1333 = r_NO_MVAL();
return rv1333; }
}
if ((l_T_1316 == NULL))
{
{ R23 rv1334 = r_NO_MVAL();
return rv1334; }
}
{ R23 rv1335 = r_TYPE_ATTR_MANIFEST(l_T_1316, l_NAME_1315);
return rv1335; }
rt_raise(RT_X_INIT);
}
static R23 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R9 p_NAME) { RT_B_TICK(); 
R22 * l_T_1336; memset(&l_T_1336, 0, sizeof l_T_1336);
l_T_1336 = r_REAL_TYPE(p_T0);
rt_int l_K_1337; memset(&l_K_1337, 0, sizeof l_K_1337);
l_K_1337 = ((*(R22 *)rt_nil_check(l_T_1336))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R23 rv1338 = r_STATIC_SIZE(p_T0);
return rv1338; }
}
if ((l_K_1337 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R23 rv1339 = r_SOME(((*(R22 *)rt_nil_check(l_T_1336))).f_SCALE);
return rv1339; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1340 = r_SOME(((rt_int)2LL));
return rv1340; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && ((((*(R22 *)rt_nil_check(l_T_1336))).f_LO_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1341 = ((*(R22 *)rt_nil_check(l_T_1336))).f_MLO;
return rv1341; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && ((((*(R22 *)rt_nil_check(l_T_1336))).f_HI_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1342 = ((*(R22 *)rt_nil_check(l_T_1336))).f_MHI;
return rv1342; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && (((*(R22 *)rt_nil_check(l_T_1336))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1343 = r_SOME(r_STD_MIN());
return rv1343; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && (((*(R22 *)rt_nil_check(l_T_1336))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1344 = r_SOME(r_STD_MAX());
return rv1344; }
}
}
else if ((l_K_1337 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R23 rv1345 = r_SOME(((*(R22 *)rt_nil_check(l_T_1336))).f_SCALE);
return rv1345; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R23 rv1346 = r_SOME(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1336))).f_SCALE));
return rv1346; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1347 = r_SOME(((rt_int)2LL));
return rv1347; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R23 rv1348 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1336))).f_SCALE, p_NAME));
return rv1348; }
}
}
else if ((l_K_1337 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1336))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1349 = ((*(R22 *)rt_nil_check(l_T_1336))).f_MLO;
return rv1349; }
}
{ R23 rv1350 = r_SOME(((rt_int)0LL));
return rv1350; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1336))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1351 = ((*(R22 *)rt_nil_check(l_T_1336))).f_MHI;
return rv1351; }
}
{ R23 rv1352 = r_SOME(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1336))).f_BASE))).f_NLITS, ((rt_int)1LL)));
return rv1352; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1336))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ R23 rv1353 = r_SOME(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1336))).f_BASE))).f_NLITS);
return rv1353; }
}
if (((((*(R22 *)rt_nil_check(l_T_1336))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_T_1336))).f_MHI).f_OK))
{
{ R23 rv1354 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R22 *)rt_nil_check(l_T_1336))).f_MHI).f_V, (((*(R22 *)rt_nil_check(l_T_1336))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1354; }
}
}
}
else if (((l_K_1337 == g_T_STR) || (l_K_1337 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R23 rv1355 = ((*(R22 *)rt_nil_check(l_T_1336))).f_MLEN;
return rv1355; }
}
}
else if ((l_K_1337 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R23 rv1356 = r_SOME(((*(R22 *)rt_nil_check(l_T_1336))).f_DIMS);
return rv1356; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1336))).f_DIMS == ((rt_int)1LL))))
{
if (((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1336))).f_BOUNDS))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1336))).f_BOUNDS))).f_MHI).f_OK))
{
{ R23 rv1357 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1336))).f_BOUNDS))).f_MHI).f_V, (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1336))).f_BOUNDS))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1357; }
}
}
}
else if ((l_K_1337 == g_T_REC))
{
{
R24 * l_F_1358; memset(&l_F_1358, 0, sizeof l_F_1358);
l_F_1358 = ((*(R22 *)rt_nil_check(l_T_1336))).f_FIELDS;
R25 * l_B_1359; memset(&l_B_1359, 0, sizeof l_B_1359);
l_B_1359 = ((*(R22 *)rt_nil_check(l_T_1336))).f_ARGS;
for (;;) {
if (((l_F_1358 == NULL) || (l_B_1359 == NULL))) goto L_end1360;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1358))).f_KIND == ((rt_int)0LL))))
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1358))).f_NAME, p_NAME))
{
if (((*(R25 *)rt_nil_check(l_B_1359))).f_ANYARG)
{
{ R23 rv1361 = r_NO_MVAL();
return rv1361; }
}
{ R23 rv1362 = ((*(R25 *)rt_nil_check(l_B_1359))).f_MLO;
return rv1362; }
}
l_B_1359 = ((*(R25 *)rt_nil_check(l_B_1359))).f_NEXT;
}
l_F_1358 = ((*(R24 *)rt_nil_check(l_F_1358))).f_NEXT;
}
RT_B_TICK();
} L_end1360: ;
}
}
{ R23 rv1363 = r_NO_MVAL();
return rv1363; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_ARITH(R9 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); fr_r_MANIFEST_ARITH *F = rt_alloc(sizeof *F); (void)F; F->p_OP = p_OP; F->p_A = p_A; F->p_B = p_B; F->p_LINE = p_LINE;
F->l_R_1364 = ((rt_int)0LL);
{ rt_frame xf1365; if (RT_TRY(xf1365)) {
{
if (r_TEQS(F->p_OP, rt_str("+", 1)))
{
F->l_R_1364 = rt_add(F->p_A, F->p_B);
}
else if (r_TEQS(F->p_OP, rt_str("-", 1)))
{
F->l_R_1364 = rt_sub(F->p_A, F->p_B);
}
else
{
F->l_R_1364 = rt_mul(F->p_A, F->p_B);
}
}
RT_POP(xf1365); } else { RT_POP(xf1365); int xf1365x = rt_xcur;
if (0 || xf1365x == x_OVERFLOW)
{
r_FAIL(F->p_LINE, rt_str("a manifest expression overflows (3.2.4.2)", 41));
}
else rt_raise(xf1365x); } }
{ rt_int rv1366 = F->l_R_1364;
return rv1366; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R17 * p_E) { RT_B_TICK(); 
{ rt_int rv1367 = (!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv1367; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { RT_B_TICK(); 
if (p_B)
{
{ rt_int rv1368 = ((rt_int)1LL);
return rv1368; }
}
{ rt_int rv1369 = ((rt_int)0LL);
return rv1369; }
rt_raise(RT_X_INIT);
}
static R26 r_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_K_1370; memset(&l_K_1370, 0, sizeof l_K_1370);
l_K_1370 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_1370 == g_N_INT))
{
{ R26 rv1371 = r_MKET(r_STD_CHECK(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R17 *)rt_nil_check(p_E))).f_IV))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1371; }
}
else if ((l_K_1370 == g_N_REAL))
{
{ R26 rv1372 = r_REAL_LITERAL(p_E);
return rv1372; }
}
else if ((l_K_1370 == g_N_BOOL))
{
{ R26 rv1373 = r_MKET(r_NUM(((*(R17 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1373; }
}
else if ((l_K_1370 == g_N_NIL))
{
{ R26 rv1374 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1374; }
}
else if ((l_K_1370 == g_N_PAREN))
{
{
R26 l_V_1375; memset(&l_V_1375, 0, sizeof l_V_1375);
S_R26(&l_V_1375, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R9(&(l_V_1375).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1375).f_C), 0);
{ R26 rv1376 = l_V_1375;
return rv1376; }
}
}
else if ((l_K_1370 == g_N_STR))
{
{ R26 rv1377 = r_STRING_LITERAL(p_E);
return rv1377; }
}
else if ((l_K_1370 == g_N_BITS))
{
{ R26 rv1378 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R17 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1378; }
}
else if ((l_K_1370 == g_N_ENUMLIT))
{
if (r_NAMES_OBJECT(((*(R17 *)rt_nil_check(p_E))).f_NAME))
{
{ R26 rv1379 = r_NAME_EXPR(p_E, p_WANT);
return rv1379; }
}
{ R26 rv1380 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1380; }
}
else if ((l_K_1370 == g_N_RECCONS))
{
{ R26 rv1381 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1381; }
}
else if ((l_K_1370 == g_N_ARRCONS))
{
{ R26 rv1382 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1382; }
}
else if ((l_K_1370 == g_N_TYPESPEC))
{
{ R26 rv1383 = r_TYPE_SPECIFIER(p_E);
return rv1383; }
}
else if ((l_K_1370 == g_N_QUAL))
{
{
rt_int l_SAVED_1384; memset(&l_SAVED_1384, 0, sizeof l_SAVED_1384);
l_SAVED_1384 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_1385; memset(&l_SAVED_Q_1385, 0, sizeof l_SAVED_Q_1385);
l_SAVED_Q_1385 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1386; memset(&l_V_1386, 0, sizeof l_V_1386);
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
R23 l_P_1387; memset(&l_P_1387, 0, sizeof l_P_1387);
S_R23(&l_P_1387, r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_B, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
}
}
S_R26(&l_V_1386, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1384;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1385;
{ R26 rv1388 = l_V_1386;
return rv1388; }
}
}
else if ((l_K_1370 == g_N_NEW))
{
if ((r_NAMES_OBJECT(((*(R17 *)rt_nil_check(p_E))).f_NAME) && (!r_CONSTRUCTOR_WANTED(p_WANT))))
{
{
R17 * l_N_1389; memset(&l_N_1389, 0, sizeof l_N_1389);
l_N_1389 = r_NEW_NODE(g_N_APPLY, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1389))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_1389))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_A;
{ R26 rv1390 = r_EXPR(l_N_1389, p_WANT);
return rv1390; }
}
}
{ R26 rv1391 = r_NEW_EXPR(p_E, p_WANT);
return rv1391; }
}
else if ((l_K_1370 == g_N_NAME))
{
{ R26 rv1392 = r_NAME_EXPR(p_E, p_WANT);
return rv1392; }
}
else if (((l_K_1370 == g_N_APPLY) && r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("$PATH_LIST", 10))))
{
{ R26 rv1393 = r_PATH_LIST(((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1393; }
}
else if (((l_K_1370 == g_N_APPLY) && r_IS_STD_REPTYPE(((*(R17 *)rt_nil_check(p_E))).f_NAME)))
{
if (((((((*(R17 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))) || (!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL))) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an explicit-rep-converter converts one expression [3-41]", 56));
}
{
R17 * l_R_1394; memset(&l_R_1394, 0, sizeof l_R_1394);
l_R_1394 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_R_1394))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1395 = r_REP_CONVERTER(l_R_1394, ((*(R17 *)rt_nil_check(p_E))).f_A, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1395; }
}
}
else if ((l_K_1370 == g_N_APPLY))
{
{
R12 * l_Y_1396; memset(&l_Y_1396, 0, sizeof l_Y_1396);
l_Y_1396 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1396 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1396))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1396))).f_KIND == g_Y_CONST)))
{
{
R17 * l_N_1397; memset(&l_N_1397, 0, sizeof l_N_1397);
l_N_1397 = r_NEW_NODE(g_N_INDEX, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
R17 * l_A_1398; memset(&l_A_1398, 0, sizeof l_A_1398);
l_A_1398 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_A_1398))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_1397))).f_A = l_A_1398;
((*(R17 *)rt_nil_check(l_N_1397))).f_B = ((*(R17 *)rt_nil_check(p_E))).f_A;
{ R26 rv1399 = r_EXPR(l_N_1397, p_WANT);
return rv1399; }
}
}
}
{ R26 rv1400 = r_CALL_EXPR(p_E, p_WANT);
return rv1400; }
}
}
else if ((l_K_1370 == g_N_FIELD))
{
{ R26 rv1401 = r_FIELD_EXPR(p_E);
return rv1401; }
}
else if ((l_K_1370 == g_N_DEREF))
{
{
R26 l_B_1402; memset(&l_B_1402, 0, sizeof l_B_1402);
S_R26(&l_B_1402, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1402).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1403; memset(&l_TT_1403, 0, sizeof l_TT_1403);
l_TT_1403 = r_TARGET((l_B_1402).f_T);
{ R26 rv1404 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1403), (l_B_1402).f_C), l_TT_1403, 1, r_NO_TEXT());
return rv1404; }
}
}
}
else if ((l_K_1370 == g_N_INDEX))
{
if (((((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_APPLY) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME))) && r_IS_REPTYPE_NAME(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME)))
{
if (((((*(R17 *)rt_nil_check(p_E))).f_B == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_NEXT == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an explicit-rep-converter converts one expression [3-41]", 56));
}
{ R26 rv1405 = r_REP_CONVERTER(((*(R17 *)rt_nil_check(p_E))).f_A, ((*(R17 *)rt_nil_check(p_E))).f_B, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1405; }
}
{ R26 rv1406 = r_INDEX_EXPR(p_E);
return rv1406; }
}
else if ((l_K_1370 == g_N_SUBSTR))
{
{
R26 l_B_1407; memset(&l_B_1407, 0, sizeof l_B_1407);
S_R26(&l_B_1407, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1408; memset(&l_BT_1408, 0, sizeof l_BT_1408);
l_BT_1408 = r_REAL_TYPE((l_B_1407).f_T);
R9 l_LO_1409; memset(&l_LO_1409, 0, sizeof l_LO_1409);
R9 l_HI_1410; memset(&l_HI_1410, 0, sizeof l_HI_1410);
if (((((*(R22 *)rt_nil_check((l_B_1407).f_T))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_MKN(rt_str("SUBSTRING_", 10)))))
{
{
R27 * l_ARGS_1411; memset(&l_ARGS_1411, 0, sizeof l_ARGS_1411);
l_ARGS_1411 = r_VAL_ARG(l_B_1407, r_NODE_ARG(((*(R17 *)rt_nil_check(p_E))).f_B, g_M_IN, r_NODE_ARG(((*(R17 *)rt_nil_check(p_E))).f_C, g_M_IN, NULL)));
R12 * l_Y_1412; memset(&l_Y_1412, 0, sizeof l_Y_1412);
l_Y_1412 = r_USER_OPERATOR(r_MKN(rt_str("SUBSTRING_", 10)), l_ARGS_1411, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!(l_Y_1412 == NULL)))
{
{ R26 rv1413 = r_CALL_SYM(l_Y_1412, l_ARGS_1411, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1413; }
}
if ((((*(R22 *)rt_nil_check((l_B_1407).f_T))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no operation for this abstract type: ", 37), r_MK(rt_str("SUBSTRING_", 10)));
}
}
}
if ((!(((((*(R22 *)rt_nil_check(l_BT_1408))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1408))).f_KIND == g_T_BITS)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R9(&l_LO_1409, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
S_R9(&l_HI_1410, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1408))).f_KIND == g_T_BITS))
{
{ R26 rv1414 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1407).f_C, l_LO_1409, l_HI_1410), r_BITS_TYPE(((rt_int)1LL)));
return rv1414; }
}
{
R22 * l_T_1415; memset(&l_T_1415, 0, sizeof l_T_1415);
l_T_1415 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1415))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1408))).f_BASE;
{ R26 rv1416 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1407).f_C, l_LO_1409, l_HI_1410), l_T_1415);
return rv1416; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1408))).f_KIND == g_T_BITS))
{
{ R26 rv1417 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1407).f_C, l_LO_1409, l_HI_1410), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1417; }
}
{
R22 * l_T_1418; memset(&l_T_1418, 0, sizeof l_T_1418);
l_T_1418 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1418))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1408))).f_BASE;
{ R26 rv1419 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1407).f_C, l_LO_1409, l_HI_1410), l_T_1418);
return rv1419; }
}
}
}
else if ((l_K_1370 == g_N_UNOP))
{
{ R26 rv1420 = r_UNARY(p_E);
return rv1420; }
}
else if ((l_K_1370 == g_N_BINOP))
{
{ R26 rv1421 = r_BINARY(p_E);
return rv1421; }
}
else if ((l_K_1370 == g_N_IN))
{
{ R26 rv1422 = r_IN_EXPR(p_E);
return rv1422; }
}
else if (((l_K_1370 == g_N_ANY) || (l_K_1370 == g_N_DONTCARE)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((l_K_1370 == g_TS_GEN))
{
{
R17 * l_N_1423; memset(&l_N_1423, 0, sizeof l_N_1423);
l_N_1423 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1423))).f_NAME, r_QMKN(rt_str("\?", 1), ((*(R17 *)rt_nil_check(p_E))).f_NAME), 0);
if (r_NAMES_OBJECT(((*(R17 *)rt_nil_check(l_N_1423))).f_NAME))
{
{ R26 rv1424 = r_NAME_EXPR(l_N_1423, p_WANT);
return rv1424; }
}
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
else if (((((l_K_1370 == g_TS_NAME) || (l_K_1370 == g_TS_ARRAY)) || (l_K_1370 == g_TS_RECORD)) || (l_K_1370 == g_TS_ENUM)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R9 r_INT_EXPR(R17 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1425; memset(&l_SAVED_1425, 0, sizeof l_SAVED_1425);
l_SAVED_1425 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_1426; memset(&l_SAVED_Q_1426, 0, sizeof l_SAVED_Q_1426);
l_SAVED_Q_1426 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1427; memset(&l_V_1427, 0, sizeof l_V_1427);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1427, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1425;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1426;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1427).f_T)))).f_KIND == g_T_ENUM))
{
{ R9 rv1428 = (l_V_1427).f_C;
return rv1428; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1427).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1427).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1427).f_T));
}
{ R9 rv1429 = (l_V_1427).f_C;
return rv1429; }
rt_raise(RT_X_INIT);
}
static R9 r_BOOL_EXPR(R17 * p_E) { RT_B_TICK(); 
R26 l_V_1430; memset(&l_V_1430, 0, sizeof l_V_1430);
S_R26(&l_V_1430, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1430).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1430).f_T));
}
{ R9 rv1431 = (l_V_1430).f_C;
return rv1431; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { RT_B_TICK(); 
R22 * l_T_1432; memset(&l_T_1432, 0, sizeof l_T_1432);
l_T_1432 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(l_T_1432))).f_LEN_C, r_NUM(p_LEN), 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1432))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1433 = l_T_1432;
return rv1433; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R17 * p_E) { RT_B_TICK(); 
R9 l_T_1434; memset(&l_T_1434, 0, sizeof l_T_1434);
S_R9(&l_T_1434, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1435; memset(&l_S_1435, 0, sizeof l_S_1435);
l_S_1435 = rt_b_str_new((l_T_1434).f_LEN, 0);
rt_b_assign(&l_S_1435, r_STR(l_T_1434, (l_T_1434).f_LEN));
rt_int l_POINT_1436; memset(&l_POINT_1436, 0, sizeof l_POINT_1436);
l_POINT_1436 = 0;
rt_int l_DIGITS_1437; memset(&l_DIGITS_1437, 0, sizeof l_DIGITS_1437);
l_DIGITS_1437 = ((rt_int)0LL);
{ rt_int it1439_lo = ((rt_int)0LL), it1439_hi = rt_sub((l_T_1434).f_LEN, ((rt_int)1LL));
for (rt_int it1439 = it1439_lo; it1439 <= it1439_hi; it1439++) {
{
if (rt_b_eq(rt_b_slice(l_S_1435, it1439, it1439), rt_str(".", 1)))
{
l_POINT_1436 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1435, it1439, it1439), rt_str("E", 1)))
{
goto L_end1438;
}
else
{
l_DIGITS_1437 = rt_add(l_DIGITS_1437, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it1439 == it1439_hi) break;
} } L_end1438: ;
if (((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) || (!l_POINT_1436)))
{
r_CHECK_FIXED_LITERAL(p_E);
}
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1440 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1434), r_NUM(((*(R17 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R17 *)rt_nil_check(p_E))).f_IV));
return rv1440; }
}
if ((!l_POINT_1436))
{
{ R26 rv1441 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1434)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1441; }
}
{
R22 * l_F_1442; memset(&l_F_1442, 0, sizeof l_F_1442);
l_F_1442 = r_NEW_TYP(g_T_FLOAT);
R9 l_C_1443; memset(&l_C_1443, 0, sizeof l_C_1443);
S_R9(&l_C_1443, l_T_1434, 0);
((*(R22 *)rt_nil_check(l_F_1442))).f_SCALE = r_MAX_INT(l_DIGITS_1437, r_QUAL_PREC());
if ((((*(R22 *)rt_nil_check(l_F_1442))).f_SCALE > r_MAX_FLOAT_PRECISION()))
{
((*(R22 *)rt_nil_check(l_F_1442))).f_SCALE = r_MAX_FLOAT_PRECISION();
}
if ((((*(R22 *)rt_nil_check(l_F_1442))).f_SCALE < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1442))).f_SCALE = ((rt_int)1LL);
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1442))).f_SCALE)))
{
((*(R22 *)rt_nil_check(l_F_1442))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_F_1442))).f_SCALE, ((rt_int)8LL));
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1442))).f_SCALE)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the float-literal is outside the range of FLOAT (3.3.2)", 68));
}
if (rt_b_eq(rt_b_slice(l_S_1435, rt_sub((l_T_1434).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1434).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
S_R9(&l_C_1443, r_FMT1(rt_str("@0", 2), l_T_1434), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1435, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
S_R9(&l_C_1443, r_FMT1(rt_str("0@", 2), l_T_1434), 0);
}
if (r_IS_D(l_F_1442))
{
{ R26 rv1444 = r_MKET(r_FMT1(rt_str("rt_b_dlit(\"@\")", 14), l_C_1443), l_F_1442);
return rv1444; }
}
else if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_F_1442))).f_SCALE) == ((rt_int)7LL)))
{
{ R26 rv1445 = r_MKET(r_FMT1(rt_str("((double)(float)@)", 18), l_C_1443), l_F_1442);
return rv1445; }
}
{ R26 rv1446 = r_MKET(r_FMT1(rt_str("(@)", 3), l_C_1443), l_F_1442);
return rv1446; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_LITERAL_FITS(R17 * p_E, rt_int p_P) { RT_B_TICK(); 
R9 l_T_1447; memset(&l_T_1447, 0, sizeof l_T_1447);
S_R9(&l_T_1447, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1448; memset(&l_S_1448, 0, sizeof l_S_1448);
l_S_1448 = rt_b_str_new((l_T_1447).f_LEN, 0);
rt_b_assign(&l_S_1448, r_STR(l_T_1447, (l_T_1447).f_LEN));
rt_int l_INT_1449; memset(&l_INT_1449, 0, sizeof l_INT_1449);
l_INT_1449 = ((rt_int)0LL);
rt_int l_SIG_1450; memset(&l_SIG_1450, 0, sizeof l_SIG_1450);
l_SIG_1450 = 0;
rt_int l_POINT_1451; memset(&l_POINT_1451, 0, sizeof l_POINT_1451);
l_POINT_1451 = 0;
rt_int l_LEAD_1452; memset(&l_LEAD_1452, 0, sizeof l_LEAD_1452);
l_LEAD_1452 = ((rt_int)0LL);
rt_int l_I_1453; memset(&l_I_1453, 0, sizeof l_I_1453);
l_I_1453 = ((rt_int)0LL);
rt_int l_EXP_1454; memset(&l_EXP_1454, 0, sizeof l_EXP_1454);
l_EXP_1454 = ((rt_int)0LL);
for (;;) {
if ((l_I_1453 >= (l_T_1447).f_LEN)) goto L_end1455;
{
if (rt_b_eq(rt_b_slice(l_S_1448, l_I_1453, l_I_1453), rt_str("E", 1)))
{
goto L_end1455;
}
else if (rt_b_eq(rt_b_slice(l_S_1448, l_I_1453, l_I_1453), rt_str(".", 1)))
{
l_POINT_1451 = 1;
}
else if ((!rt_b_eq(rt_b_slice(l_S_1448, l_I_1453, l_I_1453), rt_str("0", 1))))
{
if ((!l_POINT_1451))
{
l_INT_1449 = rt_add(l_INT_1449, ((rt_int)1LL));
}
l_SIG_1450 = 1;
}
else if ((l_SIG_1450 && (!l_POINT_1451)))
{
l_INT_1449 = rt_add(l_INT_1449, ((rt_int)1LL));
}
else if ((l_POINT_1451 && (!l_SIG_1450)))
{
l_LEAD_1452 = rt_add(l_LEAD_1452, ((rt_int)1LL));
}
l_I_1453 = rt_add(l_I_1453, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1455: ;
if ((!l_SIG_1450))
{
{ rt_int rv1456 = 1;
return rv1456; }
}
if ((l_I_1453 < (l_T_1447).f_LEN))
{
{
rt_int l_NEG_1457; memset(&l_NEG_1457, 0, sizeof l_NEG_1457);
l_NEG_1457 = 0;
l_I_1453 = rt_add(l_I_1453, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1448, l_I_1453, l_I_1453), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1448, l_I_1453, l_I_1453), rt_str("+", 1))))
{
l_NEG_1457 = rt_b_eq(rt_b_slice(l_S_1448, l_I_1453, l_I_1453), rt_str("-", 1));
l_I_1453 = rt_add(l_I_1453, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1453 >= (l_T_1447).f_LEN)) goto L_end1458;
{
if ((l_EXP_1454 <= ((rt_int)100000LL)))
{
l_EXP_1454 = rt_add(rt_mul(l_EXP_1454, ((rt_int)10LL)), (rt_sub(r_CODE_OF(rt_b_slice(l_S_1448, l_I_1453, l_I_1453)), ((rt_int)48LL))));
}
l_I_1453 = rt_add(l_I_1453, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1458: ;
if (l_NEG_1457)
{
l_EXP_1454 = rt_neg(l_EXP_1454);
}
}
}
{
rt_int l_D_1459; memset(&l_D_1459, 0, sizeof l_D_1459);
l_D_1459 = rt_add(rt_sub(l_INT_1449, ((rt_int)1LL)), l_EXP_1454);
rt_int l_LIM_1460; memset(&l_LIM_1460, 0, sizeof l_LIM_1460);
l_LIM_1460 = ((rt_int)308LL);
if ((l_INT_1449 == ((rt_int)0LL)))
{
l_D_1459 = rt_add(rt_sub(rt_neg(l_LEAD_1452), ((rt_int)1LL)), l_EXP_1454);
}
if (((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)) || (((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL))))
{
l_LIM_1460 = ((rt_int)38LL);
}
{ rt_int rv1461 = ((l_D_1459 <= l_LIM_1460) && (l_D_1459 >= rt_add(rt_neg(l_LIM_1460), ((rt_int)1LL))));
return rv1461; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_LITERAL(R17 * p_E) { RT_B_TICK(); 
R9 l_T_1462; memset(&l_T_1462, 0, sizeof l_T_1462);
S_R9(&l_T_1462, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1463; memset(&l_S_1463, 0, sizeof l_S_1463);
l_S_1463 = rt_b_str_new((l_T_1462).f_LEN, 0);
rt_b_assign(&l_S_1463, r_STR(l_T_1462, (l_T_1462).f_LEN));
rt_int l_SIG_1464; memset(&l_SIG_1464, 0, sizeof l_SIG_1464);
l_SIG_1464 = ((rt_int)0LL);
rt_int l_FRAC_1465; memset(&l_FRAC_1465, 0, sizeof l_FRAC_1465);
l_FRAC_1465 = ((rt_int)0LL);
rt_int l_POINT_1466; memset(&l_POINT_1466, 0, sizeof l_POINT_1466);
l_POINT_1466 = 0;
rt_int l_EXP_1467; memset(&l_EXP_1467, 0, sizeof l_EXP_1467);
l_EXP_1467 = ((rt_int)0LL);
rt_int l_I_1468; memset(&l_I_1468, 0, sizeof l_I_1468);
l_I_1468 = ((rt_int)0LL);
for (;;) {
if ((l_I_1468 >= (l_T_1462).f_LEN)) goto L_end1469;
{
if (rt_b_eq(rt_b_slice(l_S_1463, l_I_1468, l_I_1468), rt_str("E", 1)))
{
goto L_end1469;
}
if (rt_b_eq(rt_b_slice(l_S_1463, l_I_1468, l_I_1468), rt_str(".", 1)))
{
l_POINT_1466 = 1;
}
else
{
if (((l_SIG_1464 > ((rt_int)0LL)) || (!rt_b_eq(rt_b_slice(l_S_1463, l_I_1468, l_I_1468), rt_str("0", 1)))))
{
l_SIG_1464 = rt_add(l_SIG_1464, ((rt_int)1LL));
}
if (l_POINT_1466)
{
l_FRAC_1465 = rt_add(l_FRAC_1465, ((rt_int)1LL));
}
}
l_I_1468 = rt_add(l_I_1468, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1469: ;
if ((rt_sub(l_I_1468, r_BOOL_INT(l_POINT_1466)) > ((rt_int)1000LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a fixed-literal has at most 1000 digits (3.2.2)", 47));
}
if ((l_I_1468 < (l_T_1462).f_LEN))
{
{
rt_int l_NEG_1470; memset(&l_NEG_1470, 0, sizeof l_NEG_1470);
l_NEG_1470 = 0;
l_I_1468 = rt_add(l_I_1468, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1463, l_I_1468, l_I_1468), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1463, l_I_1468, l_I_1468), rt_str("+", 1))))
{
l_NEG_1470 = rt_b_eq(rt_b_slice(l_S_1463, l_I_1468, l_I_1468), rt_str("-", 1));
l_I_1468 = rt_add(l_I_1468, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1468 >= (l_T_1462).f_LEN)) goto L_end1471;
{
if ((l_EXP_1467 <= ((rt_int)1000LL)))
{
l_EXP_1467 = rt_sub(rt_add(rt_mul(l_EXP_1467, ((rt_int)10LL)), r_CODE_OF(rt_b_slice(l_S_1463, l_I_1468, l_I_1468))), ((rt_int)48LL));
}
l_I_1468 = rt_add(l_I_1468, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1471: ;
if ((l_EXP_1467 > ((rt_int)1000LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the exponent of a literal must not exceed 1000 (3.2.2)", 54));
}
if (l_NEG_1470)
{
l_EXP_1467 = rt_neg(l_EXP_1467);
}
}
}
if (((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) && (((((*(R17 *)rt_nil_check(p_E))).f_IV > ((rt_int)1000LL)) || (((*(R17 *)rt_nil_check(p_E))).f_IV < rt_neg(((rt_int)1000LL)))))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a literal must not exceed 1000 (3.2.2)", 51));
}
if ((l_SIG_1464 > ((rt_int)0LL)))
{
{
rt_int l_P10_1472; memset(&l_P10_1472, 0, sizeof l_P10_1472);
l_P10_1472 = rt_sub(rt_add(rt_sub(l_SIG_1464, ((rt_int)1LL)), l_EXP_1467), l_FRAC_1465);
rt_int l_BITS_1473; memset(&l_BITS_1473, 0, sizeof l_BITS_1473);
l_BITS_1473 = rt_add(rt_quot((rt_mul(l_P10_1472, ((rt_int)3321928LL))), ((rt_int)1000000LL)), rt_mul(((*(R17 *)rt_nil_check(p_E))).f_IV, ((*(R17 *)rt_nil_check(p_E))).f_FL));
if ((l_P10_1472 < ((rt_int)0LL)))
{
l_BITS_1473 = rt_add(rt_neg((rt_quot((rt_add(rt_mul(rt_neg(l_P10_1472), ((rt_int)3321929LL)), ((rt_int)999999LL))), ((rt_int)1000000LL)))), rt_mul(((*(R17 *)rt_nil_check(p_E))).f_IV, ((*(R17 *)rt_nil_check(p_E))).f_FL));
}
if ((l_BITS_1473 >= ((rt_int)63LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the literal is outside FIXED_MIN .. FIXED_MAX (3.2.2)", 66));
}
}
}
}
static R26 r_STRING_LITERAL(R17 * p_E) { RT_B_TICK(); 
R22 * l_CS_1474; memset(&l_CS_1474, 0, sizeof l_CS_1474);
l_CS_1474 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R17 * l_P_1475; memset(&l_P_1475, 0, sizeof l_P_1475);
l_P_1475 = ((*(R17 *)rt_nil_check(p_E))).f_A;
R9 l_S_1476; memset(&l_S_1476, 0, sizeof l_S_1476);
S_R9(&l_S_1476, r_MK(rt_str("", 0)), 0);
if (((((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN == ((rt_int)0LL)))
{
l_CS_1474 = r_DEFAULT_CHARSET(((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
else
{
{
R12 * l_Y_1477; memset(&l_Y_1477, 0, sizeof l_Y_1477);
l_Y_1477 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1477 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1477))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1474 = r_RESOLVE_USER_NAME(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1474)))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1474 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1474)))).f_BASE;
if ((!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(l_CS_1474))).f_LITS)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a character set has a literal of the form \\'C' (3.7.2): ", 56), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
}
}
for (;;) {
if ((l_P_1475 == NULL)) goto L_end1478;
{
if ((((*(R17 *)rt_nil_check(l_P_1475))).f_IV == g_K_STR))
{
if ((l_CS_1474 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R9(&l_S_1476, r_CAT(l_S_1476, ((*(R17 *)rt_nil_check(l_P_1475))).f_NAME), 0);
}
else
{
{
R9 l_Q_1479; memset(&l_Q_1479, 0, sizeof l_Q_1479);
S_R9(&l_Q_1479, ((*(R17 *)rt_nil_check(l_P_1475))).f_NAME, 0);
rstr l_QS_1480; memset(&l_QS_1480, 0, sizeof l_QS_1480);
l_QS_1480 = rt_b_str_new((l_Q_1479).f_LEN, 0);
rt_b_assign(&l_QS_1480, r_STR(l_Q_1479, (l_Q_1479).f_LEN));
{ rt_int it1482_lo = ((rt_int)0LL), it1482_hi = rt_sub((l_Q_1479).f_LEN, ((rt_int)1LL));
for (rt_int it1482 = it1482_lo; it1482 <= it1482_hi; it1482++) {
{
{
R9 l_LIT_1483; memset(&l_LIT_1483, 0, sizeof l_LIT_1483);
R12 * l_Y_1484; memset(&l_Y_1484, 0, sizeof l_Y_1484);
if (rt_b_eq(rt_b_slice(l_QS_1480, it1482, it1482), rt_str("'", 1)))
{
S_R9(&l_LIT_1483, r_MKN(rt_str("\\''''", 5)), 0);
}
else
{
S_R9(&l_LIT_1483, r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1480, it1482, it1482)), rt_str("'", 1))), 0);
}
l_Y_1484 = r_FIND_LITERAL(l_LIT_1483, l_CS_1474);
if ((l_Y_1484 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_1475))).f_LINE, rt_b_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1480, it1482, it1482)));
}
S_R9(&l_S_1476, r_CATS(l_S_1476, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1484))).f_MV)), 0);
}
}
RT_B_TICK();
if (it1482 == it1482_hi) break;
} } L_end1481: ;
}
}
}
else
{
{
R12 * l_Y_1485; memset(&l_Y_1485, 0, sizeof l_Y_1485);
l_Y_1485 = r_FIND_LITERAL(((*(R17 *)rt_nil_check(l_P_1475))).f_NAME, l_CS_1474);
if ((l_Y_1485 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_1475))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R17 *)rt_nil_check(l_P_1475))).f_NAME);
}
S_R9(&l_S_1476, r_CATS(l_S_1476, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1485))).f_MV)), 0);
}
}
l_P_1475 = ((*(R17 *)rt_nil_check(l_P_1475))).f_NEXT;
}
RT_B_TICK();
} L_end1478: ;
{
R22 * l_T_1486; memset(&l_T_1486, 0, sizeof l_T_1486);
l_T_1486 = r_STR_TYPE(r_NUM((l_S_1476).f_LEN), r_SOME((l_S_1476).f_LEN));
((*(R22 *)rt_nil_check(l_T_1486))).f_BASE = l_CS_1474;
{ R26 rv1487 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1476), r_NUM((l_S_1476).f_LEN)), l_T_1486);
return rv1487; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_TS_1488; memset(&l_TS_1488, 0, sizeof l_TS_1488);
l_TS_1488 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_TS_1488))).f_NAME, p_NAME, 0);
{ R22 * rv1489 = r_RESOLVE(l_TS_1488);
return rv1489; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1490; memset(&l_Y_1490, 0, sizeof l_Y_1490);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1491; memset(&l_WT_1491, 0, sizeof l_WT_1491);
l_WT_1491 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1491))).f_KIND == g_T_ENUM))
{
l_Y_1490 = r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_WT_1491);
if ((!(l_Y_1490 == NULL)))
{
{ R26 rv1492 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1490))).f_MV), r_ENUM_RESULT(l_Y_1490, p_WANT));
return rv1492; }
}
}
}
}
l_Y_1490 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1493; memset(&l_FOUND_1493, 0, sizeof l_FOUND_1493);
l_FOUND_1493 = NULL;
rt_int l_N_1494; memset(&l_N_1494, 0, sizeof l_N_1494);
l_N_1494 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1490 == NULL)) goto L_end1495;
{
if ((((*(R12 *)rt_nil_check(l_Y_1490))).f_KIND == g_Y_ENUMLIT))
{
if ((l_FOUND_1493 == NULL))
{
l_FOUND_1493 = l_Y_1490;
}
else if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1493))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1490))).f_T))).f_BASE)))
{
l_N_1494 = rt_add(l_N_1494, ((rt_int)1LL));
}
}
l_Y_1490 = r_LOOKUP_NEXT(l_Y_1490);
}
RT_B_TICK();
} L_end1495: ;
if ((l_FOUND_1493 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1494 > ((rt_int)0LL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1496 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1493))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1493))).f_T);
return rv1496; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1497 = p_WANT;
return rv1497; }
}
if ((!(((*(R22 *)rt_nil_check(p_WANT))).f_REPS == NULL)))
{
{
R22 * l_T_1498; memset(&l_T_1498, 0, sizeof l_T_1498);
l_T_1498 = r_COPY_TYP(((*(R12 *)rt_nil_check(p_Y))).f_T);
((*(R22 *)rt_nil_check(l_T_1498))).f_REPS = ((*(R22 *)rt_nil_check(p_WANT))).f_REPS;
{ R22 * rv1499 = l_T_1498;
return rv1499; }
}
}
{ R22 * rv1500 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1500; }
rt_raise(RT_X_INIT);
}
static rt_int r_CONSTRUCTOR_WANTED(R22 * p_WANT) { RT_B_TICK(); 
if ((p_WANT == NULL))
{
{ rt_int rv1501 = 0;
return rv1501; }
}
{ rt_int rv1502 = ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM));
return rv1502; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_OBJECT(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1503; memset(&l_Y_1503, 0, sizeof l_Y_1503);
l_Y_1503 = r_LOOKUP(p_NAME);
if ((l_Y_1503 == NULL))
{
{ rt_int rv1504 = 0;
return rv1504; }
}
{ rt_int rv1505 = (((((*(R12 *)rt_nil_check(l_Y_1503))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1503))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1503))).f_KIND == g_Y_ROUTINE));
return rv1505; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STD_REPTYPE(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv1506 = (((((((((r_TEQS(p_NAME, rt_str("FIXED_STD", 9)) || r_TEQS(p_NAME, rt_str("FLOAT_STD", 9))) || r_TEQS(p_NAME, rt_str("BOOLEAN_STD", 11))) || r_TEQS(p_NAME, rt_str("ENUM_STD", 8))) || r_TEQS(p_NAME, rt_str("CHAR_STR_STD", 12))) || r_TEQS(p_NAME, rt_str("BIT_STD", 7))) || r_TEQS(p_NAME, rt_str("ARRAY_STD", 9))) || r_TEQS(p_NAME, rt_str("RECORD_STD", 10))) || r_TEQS(p_NAME, rt_str("PTR_STD", 7))) || r_TEQS(p_NAME, rt_str("SEMAPHORE_STD", 13)));
return rv1506; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_REPTYPE_NAME(R9 p_NAME) { RT_B_TICK(); 
if (((((((r_IS_STD_REPTYPE(p_NAME) || r_TEQS(p_NAME, rt_str("FIXED_REP", 9))) || r_TEQS(p_NAME, rt_str("ENUM_REP", 8))) || r_TEQS(p_NAME, rt_str("ENUM_VAL_REP", 12))) || r_TEQS(p_NAME, rt_str("CHAR_STR_REP", 12))) || r_TEQS(p_NAME, rt_str("ARRAY_REP", 9))) || r_TEQS(p_NAME, rt_str("RECORD_REP", 10))))
{
{ rt_int rv1507 = (r_LOOKUP(p_NAME) == NULL);
return rv1507; }
}
if ((!(r_ORIG_LOOKUP(p_NAME) == NULL)))
{
{ rt_int rv1508 = (((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(p_NAME)))).f_KIND == g_Y_REPTYPE);
return rv1508; }
}
{ rt_int rv1509 = 0;
return rv1509; }
rt_raise(RT_X_INIT);
}
static R26 r_REP_CONVERTER(R17 * p_S, R17 * p_E, rt_int p_LINE) { RT_B_TICK(); 
R26 l_V_1510; memset(&l_V_1510, 0, sizeof l_V_1510);
S_R26(&l_V_1510, r_EXPR(p_E, NULL), 0);
R17 * l_R_1511; memset(&l_R_1511, 0, sizeof l_R_1511);
l_R_1511 = r_NEW_NODE(g_N_REP, p_LINE);
R22 * l_T_1512; memset(&l_T_1512, 0, sizeof l_T_1512);
S_R9(&((*(R17 *)rt_nil_check(l_R_1511))).f_NAME, ((*(R17 *)rt_nil_check(p_S))).f_NAME, 0);
if ((((*(R17 *)rt_nil_check(p_S))).f_KIND == g_N_APPLY))
{
((*(R17 *)rt_nil_check(l_R_1511))).f_A = ((*(R17 *)rt_nil_check(p_S))).f_A;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1510).f_T)))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check((l_V_1510).f_T))).f_KIND == g_T_ABS)))
{
r_FAIL(p_LINE, rt_str("a representation is only for a member of a predefined type class (3.12.2)", 73));
}
l_T_1512 = r_COPY_TYP(r_REAL_TYPE((l_V_1510).f_T));
((*(R22 *)rt_nil_check(l_T_1512))).f_REPS = r_EXPAND_REP(l_R_1511, l_T_1512, p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_REPCONV = 1;
r_CHECK_REP_CLASS(l_T_1512, p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_REPCONV = 0;
if ((r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1512))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1512))).f_REPS))).f_A == NULL))))
{
{
R23 l_N_1513; memset(&l_N_1513, 0, sizeof l_N_1513);
S_R23(&l_N_1513, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1512))).f_REPS))).f_A), 0);
rt_int l_UNS_1514; memset(&l_UNS_1514, 0, sizeof l_UNS_1514);
l_UNS_1514 = ((rt_int)0LL);
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1512))).f_REPS))).f_A))).f_NEXT == NULL)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1512))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8)))
{
l_UNS_1514 = ((rt_int)1LL);
}
}
if ((l_N_1513).f_OK)
{
{ R26 rv1515 = r_MKET(r_FMT3(rt_str("rt_b_fixed_rep(@, @, @)", 23), (l_V_1510).f_C, r_NUM((l_N_1513).f_V), r_NUM(l_UNS_1514)), l_T_1512);
return rv1515; }
}
}
}
{ R26 rv1516 = r_MKET((l_V_1510).f_C, l_T_1512);
return rv1516; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1517; memset(&l_Y_1517, 0, sizeof l_Y_1517);
l_Y_1517 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1517 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_1517))).f_WITHV == ((rt_int)2LL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the variable is named by a WITH NAMING and not known in its statement (4.5.4): ", 79), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((((((*(R12 *)rt_nil_check(l_Y_1517))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL))) && (!((*(R12 *)rt_nil_check(l_Y_1517))).f_INPUT)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type or reptype declaration is a closed scope: no variable from outside (3.12.1, 3.12.3): ", 92), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1517))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a record-spec is a closed scope: no variable from outside (3.9.1): ", 67), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1517))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1517))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1518; memset(&l_WRITABLE_1518, 0, sizeof l_WRITABLE_1518);
l_WRITABLE_1518 = (r_SEG_VISIBLE(l_Y_1517, ((*(R17 *)rt_nil_check(p_E))).f_LINE) && r_CHECK_IMPORTED(l_Y_1517, ((*(R17 *)rt_nil_check(p_E))).f_LINE));
{ R26 rv1519 = r_MKLV(r_OBJ_ACCESS(l_Y_1517), ((*(R12 *)rt_nil_check(l_Y_1517))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1517))).f_KIND == g_Y_VAR) && l_WRITABLE_1518), r_NO_TEXT());
return rv1519; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1517))).f_KIND == g_Y_GEN))
{
{ R26 rv1520 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1517))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1517))).f_T);
return rv1520; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1517))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1521 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1521; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1517))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1517))).f_KIND == g_Y_BUILTIN)))
{
{
R17 * l_N_1522; memset(&l_N_1522, 0, sizeof l_N_1522);
l_N_1522 = r_NEW_NODE(g_N_APPLY, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1522))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1523 = r_CALL_EXPR(l_N_1522, p_WANT);
return rv1523; }
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R17 * p_E) { RT_B_TICK(); 
R17 * l_A_1524; memset(&l_A_1524, 0, sizeof l_A_1524);
l_A_1524 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))) && r_IS_NUMBER_LITERAL(l_A_1524)))
{
{ R26 rv1525 = r_EXPR(l_A_1524, NULL);
return rv1525; }
}
if ((((*(R17 *)rt_nil_check(l_A_1524))).f_KIND == g_N_INDEX))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1524))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1524))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1526; memset(&l_B_1526, 0, sizeof l_B_1526);
S_R26(&l_B_1526, r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1524))).f_A))).f_A), 0);
R9 l_I_1527; memset(&l_I_1527, 0, sizeof l_I_1527);
S_R9(&l_I_1527, r_INT_EXPR(((*(R17 *)rt_nil_check(l_A_1524))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1526).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1528 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1526).f_C, l_I_1527, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1526).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1528; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1529 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1526).f_C, l_I_1527, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1526).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1529; }
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R17 *)rt_nil_check(l_A_1524))).f_KIND == g_N_PAREN))
{
if (r_IS_TYPE_ATTR(((*(R17 *)rt_nil_check(l_A_1524))).f_A))
{
{ R26 rv1530 = r_ATTRIBUTE(r_TYPE_VALUE_OF(r_TYPE_ATTR_TYPE(((*(R17 *)rt_nil_check(l_A_1524))).f_A)), ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1530; }
}
}
if ((((*(R17 *)rt_nil_check(l_A_1524))).f_KIND == g_N_PAREN))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1524))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1524))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1524))).f_A))).f_A))).f_NAME))
{
{ R26 rv1531 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1524))).f_A))).f_A))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1524))).f_A))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1531; }
}
}
}
}
if ((((*(R17 *)rt_nil_check(l_A_1524))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1532; memset(&l_Y_1532, 0, sizeof l_Y_1532);
l_Y_1532 = r_LOOKUP(((*(R17 *)rt_nil_check(l_A_1524))).f_NAME);
if ((!(l_Y_1532 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1532))).f_KIND == g_Y_TYPE))
{
{ R26 rv1533 = r_TYPE_ATTRIBUTE(((*(R17 *)rt_nil_check(l_A_1524))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1533; }
}
}
else if (r_IS_TYPE_WORD(((*(R17 *)rt_nil_check(l_A_1524))).f_NAME))
{
{ R26 rv1534 = r_TYPE_ATTRIBUTE(((*(R17 *)rt_nil_check(l_A_1524))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1534; }
}
}
}
{
R26 l_B_1535; memset(&l_B_1535, 0, sizeof l_B_1535);
S_R26(&l_B_1535, r_EXPR(l_A_1524, NULL), 0);
R22 * l_BT_1536; memset(&l_BT_1536, 0, sizeof l_BT_1536);
l_BT_1536 = (l_B_1535).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1536))).f_KIND == g_T_REC))
{
{
R24 * l_F_1537; memset(&l_F_1537, 0, sizeof l_F_1537);
l_F_1537 = r_FIND_VFIELD(l_BT_1536, ((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1537 == NULL)))
{
r_CHECK_VARIANT(l_F_1537, l_BT_1536, l_A_1524, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R24 *)rt_nil_check(l_F_1537))).f_KIND == ((rt_int)2LL)) && r_HAS_ANY(l_BT_1536)))
{
{ R26 rv1538 = r_MKET(r_FMT2(rt_str("rt_b_tag((@).@)", 15), (l_B_1535).f_C, ((*(R24 *)rt_nil_check(l_F_1537))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1537))).f_T);
return rv1538; }
}
{ R26 rv1539 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1535).f_C, ((*(R24 *)rt_nil_check(l_F_1537))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1537))).f_T, ((l_B_1535).f_LVAL && (((*(R24 *)rt_nil_check(l_F_1537))).f_KIND == ((rt_int)0LL))), (l_B_1535).f_C);
return rv1539; }
}
}
}
{ R26 rv1540 = r_ATTRIBUTE(l_B_1535, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1540; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_FIXED_LITERAL(R17 * p_A) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1541 = (r_IS_FIXED_LITERAL(((*(R17 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R17 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1541; }
}
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_INT))
{
{ rt_int rv1542 = 1;
return rv1542; }
}
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_REAL))
{
if ((((*(R17 *)rt_nil_check(p_A))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv1543 = 1;
return rv1543; }
}
{
R9 l_NM_1544; memset(&l_NM_1544, 0, sizeof l_NM_1544);
S_R9(&l_NM_1544, ((*(R17 *)rt_nil_check(p_A))).f_NAME, 0);
rstr l_S_1545; memset(&l_S_1545, 0, sizeof l_S_1545);
l_S_1545 = rt_b_str_new((l_NM_1544).f_LEN, 0);
rt_b_assign(&l_S_1545, r_STR(l_NM_1544, (l_NM_1544).f_LEN));
{ rt_int it1547_lo = ((rt_int)0LL), it1547_hi = rt_sub((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN, ((rt_int)1LL));
for (rt_int it1547 = it1547_lo; it1547 <= it1547_hi; it1547++) {
{
if (rt_b_eq(rt_b_slice(l_S_1545, it1547, it1547), rt_str(".", 1)))
{
{ rt_int rv1548 = 0;
return rv1548; }
}
}
RT_B_TICK();
if (it1547 == it1547_hi) break;
} } L_end1546: ;
}
{ rt_int rv1549 = 1;
return rv1549; }
}
{ rt_int rv1550 = 0;
return rv1550; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMBER_LITERAL(R17 * p_A) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1551 = (r_IS_NUMBER_LITERAL(((*(R17 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R17 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1551; }
}
{ rt_int rv1552 = ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_INT) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_REAL));
return rv1552; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv1553 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1553; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R17 * p_BASE, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R23 l_TAGV_1554; memset(&l_TAGV_1554, 0, sizeof l_TAGV_1554);
S_R23(&l_TAGV_1554, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1554).f_OK))
{
r_FAILT(p_LINE, rt_b_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R24 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1554).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R23 r_TAG_VALUE(R22 * p_T, R9 p_TAGN) { RT_B_TICK(); 
R24 * l_F_1555; memset(&l_F_1555, 0, sizeof l_F_1555);
l_F_1555 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1556; memset(&l_A_1556, 0, sizeof l_A_1556);
l_A_1556 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1555 == NULL)) goto L_end1557;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1555))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1556 == NULL))
{
{ R23 rv1558 = r_NO_MVAL();
return rv1558; }
}
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1555))).f_NAME, p_TAGN))
{
if (((*(R25 *)rt_nil_check(l_A_1556))).f_ANYARG)
{
{ R23 rv1559 = r_NO_MVAL();
return rv1559; }
}
{ R23 rv1560 = ((*(R25 *)rt_nil_check(l_A_1556))).f_MLO;
return rv1560; }
}
l_A_1556 = ((*(R25 *)rt_nil_check(l_A_1556))).f_NEXT;
}
l_F_1555 = ((*(R24 *)rt_nil_check(l_F_1555))).f_NEXT;
}
RT_B_TICK();
} L_end1557: ;
{ R23 rv1561 = r_NO_MVAL();
return rv1561; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R17 * p_L, rt_int p_V, R22 * p_T) { RT_B_TICK(); 
R17 * l_P_1562; memset(&l_P_1562, 0, sizeof l_P_1562);
l_P_1562 = p_L;
for (;;) {
if ((l_P_1562 == NULL)) goto L_end1563;
{
if ((((*(R17 *)rt_nil_check(l_P_1562))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_P_1562))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_P_1562))).f_B, p_T)).f_V)))
{
{ rt_int rv1564 = 1;
return rv1564; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1562, p_T)).f_V == p_V))
{
{ rt_int rv1565 = 1;
return rv1565; }
}
l_P_1562 = ((*(R17 *)rt_nil_check(l_P_1562))).f_NEXT;
}
RT_B_TICK();
} L_end1563: ;
{ rt_int rv1566 = 0;
return rv1566; }
rt_raise(RT_X_INIT);
}
static R26 r_VALUE_OR_TYPE(R17 * p_E) { RT_B_TICK(); 
if (r_IS_TYPE_NAME(p_E))
{
{ R26 rv1567 = r_TYPE_VALUE(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1567; }
}
{ R26 rv1568 = r_EXPR(p_E, NULL);
return rv1568; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R17 * p_E) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1569; memset(&l_A_1569, 0, sizeof l_A_1569);
S_R26(&l_A_1569, r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_A), 0);
R9 l_I_1570; memset(&l_I_1570, 0, sizeof l_I_1570);
S_R9(&l_I_1570, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1569).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1571 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1569).f_C, (l_A_1569).f_C, l_I_1570, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1569).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1571; }
}
}
}
{ R26 rv1572 = r_INDEX_EXPR2(p_E);
return rv1572; }
rt_raise(RT_X_INIT);
}
static R9 r_INDEX_VALUE(R17 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1573; memset(&l_SAVED_1573, 0, sizeof l_SAVED_1573);
l_SAVED_1573 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_1574; memset(&l_SAVED_Q_1574, 0, sizeof l_SAVED_Q_1574);
l_SAVED_Q_1574 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1575; memset(&l_V_1575, 0, sizeof l_V_1575);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1575, r_EXPR(p_E, NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1573;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1574;
{ R9 rv1576 = r_INDEX_OF(l_V_1575, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1576; }
rt_raise(RT_X_INIT);
}
static R9 r_INDEX_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1577; memset(&l_T_1577, 0, sizeof l_T_1577);
l_T_1577 = r_REAL_TYPE((p_V).f_T);
if (((((*(R22 *)rt_nil_check((p_V).f_T))).f_KIND == g_T_ABS) || (((((*(R22 *)rt_nil_check(l_T_1577))).f_KIND == g_T_ENUM) && ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1577))).f_BASE))).f_UNORDERED || (!(((*(R22 *)rt_nil_check(l_T_1577))).f_REPS == NULL))))))))
{
{
R27 * l_ARGS_1578; memset(&l_ARGS_1578, 0, sizeof l_ARGS_1578);
l_ARGS_1578 = r_VAL_ARG(p_V, NULL);
R12 * l_Y_1579; memset(&l_Y_1579, 0, sizeof l_Y_1579);
l_Y_1579 = r_FIND_ROUTINE(r_MKN(rt_str("TO_FIXED", 8)), l_ARGS_1578, p_LINE, 0);
if ((l_Y_1579 == NULL))
{
r_FAILT(p_LINE, rt_str("an index of this type needs a TO_FIXED of the program (3.8.1): ", 63), r_TYPE_NAME((p_V).f_T));
}
{ R9 rv1580 = (r_CALL_SYM(l_Y_1579, l_ARGS_1578, p_LINE)).f_C;
return rv1580; }
}
}
if ((((*(R22 *)rt_nil_check(l_T_1577))).f_KIND == g_T_ENUM))
{
{ R9 rv1581 = (p_V).f_C;
return rv1581; }
}
if (((!(((*(R22 *)rt_nil_check(l_T_1577))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_1577))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(p_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((p_V).f_T));
}
{ R9 rv1582 = (p_V).f_C;
return rv1582; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R17 * p_E) { RT_B_TICK(); 
R26 l_B_1583; memset(&l_B_1583, 0, sizeof l_B_1583);
S_R26(&l_B_1583, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1584; memset(&l_T_1584, 0, sizeof l_T_1584);
l_T_1584 = r_REAL_TYPE((l_B_1583).f_T);
R17 * l_S_1585; memset(&l_S_1585, 0, sizeof l_S_1585);
l_S_1585 = ((*(R17 *)rt_nil_check(p_E))).f_B;
R9 l_IX_1586; memset(&l_IX_1586, 0, sizeof l_IX_1586);
S_R9(&l_IX_1586, r_MK(rt_str("", 0)), 0);
rt_int l_N_1587; memset(&l_N_1587, 0, sizeof l_N_1587);
l_N_1587 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1584))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1585 == NULL)) goto L_end1588;
{
if ((l_N_1587 > ((rt_int)0LL)))
{
S_R9(&l_IX_1586, r_CATS(l_IX_1586, rt_str(", ", 2)), 0);
}
S_R9(&l_IX_1586, r_CAT(l_IX_1586, r_INDEX_VALUE(l_S_1585)), 0);
l_N_1587 = rt_add(l_N_1587, ((rt_int)1LL));
l_S_1585 = ((*(R17 *)rt_nil_check(l_S_1585))).f_NEXT;
}
RT_B_TICK();
} L_end1588: ;
if ((!(l_N_1587 == ((*(R22 *)rt_nil_check(l_T_1584))).f_DIMS)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1587 == ((rt_int)1LL)))
{
{ R26 rv1589 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1583).f_C, l_IX_1586, (l_B_1583).f_C, (l_B_1583).f_C), ((*(R22 *)rt_nil_check(l_T_1584))).f_ELEM, (l_B_1583).f_LVAL, r_NO_TEXT());
return rv1589; }
}
{
R9 l_X_1590; memset(&l_X_1590, 0, sizeof l_X_1590);
S_R9(&l_X_1590, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1583).f_C, r_NUM(l_N_1587), (l_B_1583).f_C, (l_B_1583).f_C), 0);
{ R26 rv1591 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1590, l_IX_1586), ((*(R22 *)rt_nil_check(l_T_1584))).f_ELEM, (l_B_1583).f_LVAL, r_NO_TEXT());
return rv1591; }
}
rt_raise(RT_X_INIT);
}
static R9 r_OP_NAME(R9 p_OP, rt_int p_UNARY) { RT_B_TICK(); 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R9 rv1592 = r_MKN(rt_str("NEGATE_", 7));
return rv1592; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R9 rv1593 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1593; }
}
{ R9 rv1594 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1594; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R9 rv1595 = r_MKN(rt_str("ADD_", 4));
return rv1595; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R9 rv1596 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1596; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R9 rv1597 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1597; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R9 rv1598 = r_MKN(rt_str("DIVIDE_", 7));
return rv1598; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R9 rv1599 = r_MKN(rt_str("MODULUS_", 8));
return rv1599; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R9 rv1600 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1600; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R9 rv1601 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1601; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R9 rv1602 = r_MKN(rt_str("EQUAL_", 6));
return rv1602; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R9 rv1603 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1603; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R9 rv1604 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1604; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R9 rv1605 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1605; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R9 rv1606 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1606; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R9 rv1607 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1607; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R9 rv1608 = r_MKN(rt_str("AND_", 4));
return rv1608; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R9 rv1609 = r_MKN(rt_str("OR_", 3));
return rv1609; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R9 rv1610 = r_MKN(rt_str("XOR_", 4));
return rv1610; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R9 rv1611 = r_MKN(rt_str("IMPLIES_", 8));
return rv1611; }
}
{ R9 rv1612 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1612; }
rt_raise(RT_X_INIT);
}
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1613; memset(&l_A_1613, 0, sizeof l_A_1613);
l_A_1613 = ((R27 *)rt_b_new(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1613)), ({ R27 rc1614; memset(&rc1614, 0, sizeof rc1614);  rc1614.f_E = NULL; S_R26(&rc1614.f_V, p_V, 0); rc1614.f_HAVE = 1; rc1614.f_MODE = g_M_IN; rc1614.f_NEXT = p_NEXT; rc1614; }), 0);
{ R27 * rv1615 = l_A_1613;
return rv1615; }
rt_raise(RT_X_INIT);
}
static R27 * r_NODE_ARG(R17 * p_E, rt_int p_MODE, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1616; memset(&l_A_1616, 0, sizeof l_A_1616);
l_A_1616 = ((R27 *)rt_b_new(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1616)), ({ R27 rc1617; memset(&rc1617, 0, sizeof rc1617);  rc1617.f_E = p_E; S_R26(&rc1617.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1617.f_HAVE = 0; rc1617.f_MODE = p_MODE; rc1617.f_NEXT = p_NEXT; rc1617; }), 0);
{ R27 * rv1618 = l_A_1616;
return rv1618; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R9 p_NAME, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1619; memset(&l_Y_1619, 0, sizeof l_Y_1619);
l_Y_1619 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1619 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1619 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1620 = l_Y_1619;
return rv1620; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_USER_ROUTINE(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1621; memset(&l_Y_1621, 0, sizeof l_Y_1621);
l_Y_1621 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_1621 == NULL)) goto L_end1622;
{
if ((((*(R12 *)rt_nil_check(l_Y_1621))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1623 = 1;
return rv1623; }
}
l_Y_1621 = r_LOOKUP_NEXT(l_Y_1621);
}
RT_B_TICK();
} L_end1622: ;
l_Y_1621 = r_LOOKUP(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))));
for (;;) {
if ((l_Y_1621 == NULL)) goto L_end1624;
{
if ((((*(R12 *)rt_nil_check(l_Y_1621))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1625 = 1;
return rv1625; }
}
l_Y_1621 = r_LOOKUP_NEXT(l_Y_1621);
}
RT_B_TICK();
} L_end1624: ;
{ rt_int rv1626 = 0;
return rv1626; }
rt_raise(RT_X_INIT);
}
static R27 * r_QUAL_ARGS(rt_int p_LINE) { RT_B_TICK(); 
R17 * l_Q_1627; memset(&l_Q_1627, 0, sizeof l_Q_1627);
l_Q_1627 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_R_1628; memset(&l_R_1628, 0, sizeof l_R_1628);
l_R_1628 = NULL;
if ((l_Q_1627 == NULL))
{
{ R27 * rv1629 = NULL;
return rv1629; }
}
if (((((*(R17 *)rt_nil_check(l_Q_1627))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_R_1628 = r_VAL_ARG(r_ENUM_LITERAL(r_LIT_NODE_T(((*(R17 *)rt_nil_check(l_Q_1627))).f_NAME, p_LINE), r_ROUNDINGS_TYPE()), NULL);
}
if ((!(((*(R17 *)rt_nil_check(l_Q_1627))).f_B == NULL)))
{
l_R_1628 = r_VAL_ARG(r_EXPR(((*(R17 *)rt_nil_check(l_Q_1627))).f_B, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_R_1628);
}
{ R27 * rv1630 = l_R_1628;
return rv1630; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R9 p_NAME, R26 p_A, R17 * p_B, R17 * p_C, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_ARGS_1631; memset(&l_ARGS_1631, 0, sizeof l_ARGS_1631);
l_ARGS_1631 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1632; memset(&l_Y_1632, 0, sizeof l_Y_1632);
l_Y_1632 = r_USER_OPERATOR(p_NAME, l_ARGS_1631, p_LINE);
if ((l_Y_1632 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1633 = r_CALL_SYM(l_Y_1632, l_ARGS_1631, p_LINE);
return rv1633; }
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
{ R9 rv1634 = p_C;
return rv1634; }
}
if ((p_STO > p_SFROM))
{
{ R9 rv1635 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1635; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R9 rv1636 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1636; }
}
{ R9 rv1637 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1637; }
rt_raise(RT_X_INIT);
}
static R9 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R9 rv1638 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1638; }
rt_raise(RT_X_INIT);
}
static R9 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R9 p_SELF) { RT_B_TICK(); 
R22 * l_RT_1639; memset(&l_RT_1639, 0, sizeof l_RT_1639);
l_RT_1639 = r_REAL_TYPE(p_T);
R22 * l_VT_1640; memset(&l_VT_1640, 0, sizeof l_VT_1640);
l_VT_1640 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1640))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1639))).f_KIND == g_T_PTR)))
{
{ R9 rv1641 = (p_V).f_C;
return rv1641; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1640))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1640)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R9 rv1642 = (p_V).f_C;
return rv1642; }
}
if ((!r_SAME_CLASS(l_RT_1639, l_VT_1640)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1640), (r_TYPE_NAME(l_VT_1640)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1639), (r_TYPE_NAME(l_RT_1639)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1639))).f_KIND == g_T_INT))
{
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_RT_1639))).f_SCALE))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE == ((*(R22 *)rt_nil_check(l_RT_1639))).f_SCALE))
{
{ R9 rv1643 = r_RANGE_CHECK(l_RT_1639, (p_V).f_C, p_SELF);
return rv1643; }
}
{ R9 rv1644 = r_RANGE_CHECK(l_RT_1639, r_FMT3(rt_str("rt_b_conv(@, @, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(l_RT_1639))).f_SCALE)), p_SELF);
return rv1644; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1639))).f_KIND == g_T_FLOAT))
{
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_RT_1639))).f_SCALE) < r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1640))).f_SCALE)))
{
if (r_IS_D(l_VT_1640))
{
{ R9 rv1645 = r_RANGE_CHECK(l_RT_1639, r_FMT2(rt_str("rt_b_single_of_d(@, @, 1)", 25), (p_V).f_C, r_FLOAT_TRUNC()), p_SELF);
return rv1645; }
}
{ R9 rv1646 = r_RANGE_CHECK(l_RT_1639, r_FMT3(rt_str("rt_b_fconv(@, @, @, 1)", 22), (p_V).f_C, r_SINGLE_C(((*(R22 *)rt_nil_check(l_RT_1639))).f_SCALE), r_FLOAT_TRUNC()), p_SELF);
return rv1646; }
}
if (r_IS_D(l_RT_1639))
{
{ R9 rv1647 = r_RANGE_CHECK(l_RT_1639, r_AS_D(p_V), p_SELF);
return rv1647; }
}
{ R9 rv1648 = r_RANGE_CHECK(l_RT_1639, (p_V).f_C, p_SELF);
return rv1648; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1639))).f_KIND == g_T_ENUM))
{
if (((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1639))).f_BASE))).f_UNORDERED && ((r_HAS_VALUES(l_RT_1639) || r_HAS_VALUES(l_VT_1640)))) && (!r_SAME_REPS(l_RT_1639, l_VT_1640))))
{
r_FAIL(p_LINE, rt_str("an UNORDERED value with ENUM_VAL_REP is assigned only with the same reptype (3.4.5)", 83));
}
{ R9 rv1649 = r_RANGE_CHECK(l_RT_1639, (p_V).f_C, p_SELF);
return rv1649; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1639))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1639))).f_KIND == g_T_BITS)))
{
r_SAME_CHARSET(l_RT_1639, l_VT_1640, p_LINE);
if (((((*(R22 *)rt_nil_check(l_RT_1639))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1640))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1639))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1640))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1639))).f_KIND == g_T_PTR))
{
if ((!r_IDENTICAL_TYPE(r_TARGET(l_RT_1639), r_TARGET(l_VT_1640))))
{
r_FAIL(p_LINE, rt_str("the ELEMENT_TYPE of the pointers are not identical (3.10.5)", 59));
}
{ R9 rv1650 = r_TARGET_ARGS_CHECK(r_TARGET(l_RT_1639), r_TARGET(l_VT_1640), (p_V).f_C);
return rv1650; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1639))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1639)) && (!r_HAS_ANY(l_VT_1640))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1639))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1640))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1639))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1639))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1640))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
if ((!r_SAME_EXTENTS(l_RT_1639, l_VT_1640)))
{
r_FAIL(p_LINE, rt_str("the arrays have different EXTENT attributes (3.8.5)", 51));
}
}
{ R9 rv1651 = (p_V).f_C;
return rv1651; }
rt_raise(RT_X_INIT);
}
static R9 r_STORE_CODE(R22 * p_T, R9 p_LV, R26 p_V, rt_int p_LINE, R9 p_SELF) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1652; memset(&l_ARGS_1652, 0, sizeof l_ARGS_1652);
l_ARGS_1652 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1653; memset(&l_Y_1653, 0, sizeof l_Y_1653);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_SQUAL == NULL)))
{
{
R17 * l_SAVED_Q_1654; memset(&l_SAVED_Q_1654, 0, sizeof l_SAVED_Q_1654);
l_SAVED_Q_1654 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_X_1655; memset(&l_X_1655, 0, sizeof l_X_1655);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
l_X_1655 = r_QUAL_ARGS(p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1654;
if ((!(l_X_1655 == NULL)))
{
{
R27 * l_P_1656; memset(&l_P_1656, 0, sizeof l_P_1656);
l_P_1656 = l_X_1655;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_P_1656))).f_NEXT == NULL)) goto L_end1657;
{
l_P_1656 = ((*(R27 *)rt_nil_check(l_P_1656))).f_NEXT;
}
RT_B_TICK();
} L_end1657: ;
((*(R27 *)rt_nil_check(l_P_1656))).f_NEXT = ((*(R27 *)rt_nil_check(l_ARGS_1652))).f_NEXT;
((*(R27 *)rt_nil_check(l_ARGS_1652))).f_NEXT = l_X_1655;
}
}
}
}
{
R27 * l_LAST_1658; memset(&l_LAST_1658, 0, sizeof l_LAST_1658);
l_LAST_1658 = l_ARGS_1652;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_LAST_1658))).f_NEXT == NULL)) goto L_end1659;
{
l_LAST_1658 = ((*(R27 *)rt_nil_check(l_LAST_1658))).f_NEXT;
}
RT_B_TICK();
} L_end1659: ;
((*(R27 *)rt_nil_check(l_LAST_1658))).f_MODE = g_M_OUT;
l_Y_1653 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1652, p_LINE, 0);
if ((l_Y_1653 == NULL))
{
((*(R27 *)rt_nil_check(l_LAST_1658))).f_MODE = g_M_INOUT;
l_Y_1653 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1652, p_LINE, 0);
}
}
if ((l_Y_1653 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R9 rv1660 = r_CATS((r_CALL_SYM(l_Y_1653, l_ARGS_1652, p_LINE)).f_C, rt_str(";", 1));
return rv1660; }
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
if ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, (p_V).f_T)))
{
{ R9 rv1661 = r_COMPONENT_STORE(p_T, (p_V).f_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF), p_LINE);
return rv1661; }
}
}
{ R9 rv1662 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1662; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ABS_PART(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ rt_int rv1663 = 1;
return rv1663; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{ rt_int rv1664 = r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM);
return rv1664; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R24 * l_F_1665; memset(&l_F_1665, 0, sizeof l_F_1665);
l_F_1665 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1665 == NULL)) goto L_end1666;
{
if ((((*(R24 *)rt_nil_check(l_F_1665))).f_KIND == ((rt_int)0LL)))
{
if (r_HAS_ABS_PART(((*(R24 *)rt_nil_check(l_F_1665))).f_T))
{
{ rt_int rv1667 = 1;
return rv1667; }
}
}
l_F_1665 = ((*(R24 *)rt_nil_check(l_F_1665))).f_NEXT;
}
RT_B_TICK();
} L_end1666: ;
}
}
{ rt_int rv1668 = 0;
return rv1668; }
rt_raise(RT_X_INIT);
}
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT) { RT_B_TICK(); 
if (((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_KIND == g_T_ARR))))
{
{ rt_int rv1669 = 0;
return rv1669; }
}
if ((!r_IS_NUMERIC_OR_ENUM(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM))))
{
{ rt_int rv1670 = 0;
return rv1670; }
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1671 = 0;
return rv1671; }
}
{ rt_int rv1672 = (!r_SAME_RANGE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM));
return rv1672; }
rt_raise(RT_X_INIT);
}
static R9 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R9 p_LV, R9 p_RV, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R9 rv1673 = r_STORE_CODE(p_T, p_LV, r_MKET(p_RV, p_VT), p_LINE, r_NO_TEXT());
return rv1673; }
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, p_VT)))))
{
{
R9 l_D_1674; memset(&l_D_1674, 0, sizeof l_D_1674);
S_R9(&l_D_1674, r_NEW_NAME(rt_str("ad", 2)), 0);
R9 l_S_1675; memset(&l_S_1675, 0, sizeof l_S_1675);
S_R9(&l_S_1675, r_NEW_NAME(rt_str("as", 2)), 0);
R9 l_I_1676; memset(&l_I_1676, 0, sizeof l_I_1676);
S_R9(&l_I_1676, r_NEW_NAME(rt_str("ai", 2)), 0);
R9 l_N_1677; memset(&l_N_1677, 0, sizeof l_N_1677);
S_R9(&l_N_1677, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R22 * l_VE_1678; memset(&l_VE_1678, 0, sizeof l_VE_1678);
l_VE_1678 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM;
R9 l_R_1679; memset(&l_R_1679, 0, sizeof l_R_1679);
S_R9(&l_R_1679, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1674, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R9(&l_R_1679, r_FMT3(rt_str("@@ = @; if (!rt_b_same_extents(", 31), l_R_1679, l_S_1675, p_RV), 0);
S_R9(&l_R_1679, r_FMT4(rt_str("@@, @->lo, @->hi, ", 18), l_R_1679, l_N_1677, l_D_1674, l_D_1674), 0);
S_R9(&l_R_1679, r_FMT3(rt_str("@@.lo, @.hi)) rt_raise(RT_B_SIZE); ", 35), l_R_1679, l_S_1675, l_S_1675), 0);
S_R9(&l_R_1679, r_FMT4(rt_str("@rt_int @n = rt_b_extent(@, @->lo, ", 35), l_R_1679, l_I_1676, l_N_1677, l_D_1674), 0);
S_R9(&l_R_1679, r_FMT2(rt_str("@@->hi);", 8), l_R_1679, l_D_1674), 0);
if (r_ELEMENTS_NEED_CHECK(p_T, p_VT))
{
S_R9(&l_R_1679, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1679, l_I_1676, l_I_1676, l_I_1676), 0);
S_R9(&l_R_1679, r_FMT3(rt_str("@@++) (void)@;", 14), l_R_1679, l_I_1676, r_RANGE_CHECK(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_S_1675, l_I_1676), r_NO_TEXT())), 0);
}
S_R9(&l_R_1679, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1679, l_I_1676, l_I_1676, l_I_1676), 0);
if (((r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_REC)) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_ARR)))
{
S_R9(&l_R_1679, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1679, l_I_1676, r_COMPONENT_STORE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, l_VE_1678, r_FMT2(rt_str("@->p[@]", 7), l_D_1674, l_I_1676), r_FMT2(rt_str("@.p[@]", 6), l_S_1675, l_I_1676), p_LINE)), 0);
}
else
{
S_R9(&l_R_1679, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1679, l_I_1676, r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@->p[@]", 7), l_D_1674, l_I_1676), r_FMT2(rt_str("@.p[@]", 6), l_S_1675, l_I_1676))), 0);
}
{ R9 rv1680 = l_R_1679;
return rv1680; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_D_1681; memset(&l_D_1681, 0, sizeof l_D_1681);
S_R9(&l_D_1681, r_NEW_NAME(rt_str("rd", 2)), 0);
R9 l_S_1682; memset(&l_S_1682, 0, sizeof l_S_1682);
S_R9(&l_S_1682, r_NEW_NAME(rt_str("rs", 2)), 0);
R24 * l_F_1683; memset(&l_F_1683, 0, sizeof l_F_1683);
l_F_1683 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_R_1684; memset(&l_R_1684, 0, sizeof l_R_1684);
S_R9(&l_R_1684, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1681, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R9(&l_R_1684, r_FMT3(rt_str("@@ = @;", 7), l_R_1684, l_S_1682, p_RV), 0);
for (;;) {
if ((l_F_1683 == NULL)) goto L_end1685;
{
{
R9 l_DF_1686; memset(&l_DF_1686, 0, sizeof l_DF_1686);
S_R9(&l_DF_1686, r_FMT2(rt_str("@->@", 4), l_D_1681, ((*(R24 *)rt_nil_check(l_F_1683))).f_CNAME), 0);
R9 l_SF_1687; memset(&l_SF_1687, 0, sizeof l_SF_1687);
S_R9(&l_SF_1687, r_FMT2(rt_str("@.@", 3), l_S_1682, ((*(R24 *)rt_nil_check(l_F_1683))).f_CNAME), 0);
if (((((*(R24 *)rt_nil_check(l_F_1683))).f_KIND == ((rt_int)1LL)) || (((((*(R24 *)rt_nil_check(l_F_1683))).f_KIND == ((rt_int)2LL)) && (!r_HAS_ANY(p_T))))))
{
S_R9(&l_R_1684, r_FMT2(rt_str("@ if (!(@)) rt_raise(RT_B_TYPE_MISMATCH);", 41), l_R_1684, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1683))).f_T, l_DF_1686, l_SF_1687)), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1683))).f_KIND == ((rt_int)2LL)))
{
S_R9(&l_R_1684, r_FMT3(rt_str("@ @ = @;", 8), l_R_1684, l_DF_1686, l_SF_1687), 0);
}
else
{
S_R9(&l_R_1684, r_FMT2(rt_str("@ @", 3), l_R_1684, r_COMPONENT_STORE(((*(R24 *)rt_nil_check(l_F_1683))).f_T, ((*(R24 *)rt_nil_check(l_F_1683))).f_T, l_DF_1686, l_SF_1687, p_LINE)), 0);
}
}
l_F_1683 = ((*(R24 *)rt_nil_check(l_F_1683))).f_NEXT;
}
RT_B_TICK();
} L_end1685: ;
{ R9 rv1688 = r_CATS(l_R_1684, rt_str(" }", 2));
return rv1688; }
}
}
{ R9 rv1689 = r_ASSIGN_CODE(p_T, p_LV, p_RV);
return rv1689; }
rt_raise(RT_X_INIT);
}
static R9 r_COMPONENT_EQUAL(R22 * p_T, R9 p_A, R9 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1690; memset(&l_ARGS_1690, 0, sizeof l_ARGS_1690);
l_ARGS_1690 = r_VAL_ARG(r_MKET(p_A, p_T), r_VAL_ARG(r_MKET(p_B, p_T), NULL));
R12 * l_Y_1691; memset(&l_Y_1691, 0, sizeof l_Y_1691);
l_Y_1691 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1690, p_LINE);
if ((l_Y_1691 == NULL))
{
r_FAILT(p_LINE, rt_str("no EQUAL_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R9 rv1692 = (r_CALL_SYM(l_Y_1691, l_ARGS_1690, p_LINE)).f_C;
return rv1692; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_X_1693; memset(&l_X_1693, 0, sizeof l_X_1693);
S_R9(&l_X_1693, r_NEW_NAME(rt_str("ea", 2)), 0);
R9 l_Z_1694; memset(&l_Z_1694, 0, sizeof l_Z_1694);
S_R9(&l_Z_1694, r_NEW_NAME(rt_str("eb", 2)), 0);
R9 l_I_1695; memset(&l_I_1695, 0, sizeof l_I_1695);
S_R9(&l_I_1695, r_NEW_NAME(rt_str("ei", 2)), 0);
R9 l_N_1696; memset(&l_N_1696, 0, sizeof l_N_1696);
S_R9(&l_N_1696, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R9 l_R_1697; memset(&l_R_1697, 0, sizeof l_R_1697);
S_R9(&l_R_1697, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1693, p_A, l_Z_1694), 0);
S_R9(&l_R_1697, r_FMT4(rt_str("@@; int @r = rt_b_same_extents(@, ", 34), l_R_1697, p_B, l_I_1695, l_N_1696), 0);
S_R9(&l_R_1697, r_FMT4(rt_str("@@.lo, @.hi, @.lo, ", 19), l_R_1697, l_X_1693, l_X_1693, l_Z_1694), 0);
S_R9(&l_R_1697, r_FMT4(rt_str("@@.hi); rt_int @n = rt_b_extent(@, ", 35), l_R_1697, l_Z_1694, l_I_1695, l_N_1696), 0);
S_R9(&l_R_1697, r_FMT3(rt_str("@@.lo, @.hi);", 13), l_R_1697, l_X_1693, l_X_1693), 0);
S_R9(&l_R_1697, r_FMT4(rt_str("@ for (rt_int @ = 0; @r && @ < ", 31), l_R_1697, l_I_1695, l_I_1695, l_I_1695), 0);
S_R9(&l_R_1697, r_FMT4(rt_str("@@n; @++) @r = ", 15), l_R_1697, l_I_1695, l_I_1695, l_I_1695), 0);
S_R9(&l_R_1697, r_FMT2(rt_str("@@;", 3), l_R_1697, r_COMPONENT_EQUAL(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_X_1693, l_I_1695), r_FMT2(rt_str("@.p[@]", 6), l_Z_1694, l_I_1695), p_LINE)), 0);
{ R9 rv1698 = r_FMT2(rt_str("@ @r; })", 8), l_R_1697, l_I_1695);
return rv1698; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_X_1699; memset(&l_X_1699, 0, sizeof l_X_1699);
S_R9(&l_X_1699, r_NEW_NAME(rt_str("ra", 2)), 0);
R9 l_Z_1700; memset(&l_Z_1700, 0, sizeof l_Z_1700);
S_R9(&l_Z_1700, r_NEW_NAME(rt_str("rb", 2)), 0);
R24 * l_F_1701; memset(&l_F_1701, 0, sizeof l_F_1701);
l_F_1701 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_R_1702; memset(&l_R_1702, 0, sizeof l_R_1702);
S_R9(&l_R_1702, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1699, p_A, l_Z_1700), 0);
R9 l_EQ_1703; memset(&l_EQ_1703, 0, sizeof l_EQ_1703);
S_R9(&l_EQ_1703, r_MK(rt_str("1", 1)), 0);
S_R9(&l_R_1702, r_FMT2(rt_str("@@;", 3), l_R_1702, p_B), 0);
for (;;) {
if ((l_F_1701 == NULL)) goto L_end1704;
{
{
R9 l_C_1705; memset(&l_C_1705, 0, sizeof l_C_1705);
S_R9(&l_C_1705, r_COMPONENT_EQUAL(((*(R24 *)rt_nil_check(l_F_1701))).f_T, r_FMT2(rt_str("@.@", 3), l_X_1699, ((*(R24 *)rt_nil_check(l_F_1701))).f_CNAME), r_FMT2(rt_str("@.@", 3), l_Z_1700, ((*(R24 *)rt_nil_check(l_F_1701))).f_CNAME), p_LINE), 0);
if (((((*(R24 *)rt_nil_check(l_F_1701))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R9(&l_EQ_1703, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1703, r_VARIANT_COND(l_F_1701, p_T, l_X_1699), l_C_1705), 0);
}
else
{
S_R9(&l_EQ_1703, r_FMT2(rt_str("@ && @", 6), l_EQ_1703, l_C_1705), 0);
}
}
l_F_1701 = ((*(R24 *)rt_nil_check(l_F_1701))).f_NEXT;
}
RT_B_TICK();
} L_end1704: ;
{ R9 rv1706 = r_FMT2(rt_str("@ @; })", 7), l_R_1702, l_EQ_1703);
return rv1706; }
}
}
{ R9 rv1707 = r_EQUAL_CODE(p_T, p_A, p_B);
return rv1707; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R17 * p_E) { RT_B_TICK(); 
{ R26 rv1708 = r_STD_RESULT(r_UNARY1(p_E));
return rv1708; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY1(R17 * p_E) { RT_B_TICK(); 
R26 l_A_1709; memset(&l_A_1709, 0, sizeof l_A_1709);
S_R26(&l_A_1709, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1710; memset(&l_T_1710, 0, sizeof l_T_1710);
l_T_1710 = (l_A_1709).f_T;
R9 l_OP_1711; memset(&l_OP_1711, 0, sizeof l_OP_1711);
S_R9(&l_OP_1711, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
if (((((*(R22 *)rt_nil_check(l_T_1710))).f_GENP).f_LEN > ((rt_int)0LL)))
{
r_REQUIRE_WHERE(r_OP_NAME(l_OP_1711, 1), ((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
if (((((*(R22 *)rt_nil_check(l_T_1710))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_OP_NAME(l_OP_1711, 1))))
{
{
R27 * l_ARGS_1712; memset(&l_ARGS_1712, 0, sizeof l_ARGS_1712);
l_ARGS_1712 = r_VAL_ARG(l_A_1709, r_QUAL_ARGS(((*(R17 *)rt_nil_check(p_E))).f_LINE));
R12 * l_Y_1713; memset(&l_Y_1713, 0, sizeof l_Y_1713);
l_Y_1713 = r_USER_OPERATOR(r_OP_NAME(l_OP_1711, 1), l_ARGS_1712, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if (((l_Y_1713 == NULL) && (!(((*(R27 *)rt_nil_check(l_ARGS_1712))).f_NEXT == NULL))))
{
((*(R27 *)rt_nil_check(l_ARGS_1712))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(r_OP_NAME(l_OP_1711, 1), l_ARGS_1712, ((*(R17 *)rt_nil_check(p_E))).f_LINE) == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("no operation takes the precision or rounding of the expression ", 63), rt_str("as arguments (D.5): ", 20)), r_OP_NAME(l_OP_1711, 1));
}
}
if ((!(l_Y_1713 == NULL)))
{
{ R26 rv1714 = r_CALL_SYM(l_Y_1713, l_ARGS_1712, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1714; }
}
if ((((*(R22 *)rt_nil_check(l_T_1710))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1710));
}
}
}
if (r_TEQS(l_OP_1711, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1710))).f_KIND == g_T_BOOL))
{
{ R26 rv1715 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1709).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1715; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1710))).f_KIND == g_T_BITS))
{
{ R26 rv1716 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1709).f_C), l_T_1710);
return rv1716; }
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1710))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1711, rt_str("-", 1)))
{
{ R26 rv1717 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1709).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1710))).f_SCALE));
return rv1717; }
}
{ R26 rv1718 = r_MKET((l_A_1709).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1710))).f_SCALE));
return rv1718; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1710))).f_KIND == g_T_FLOAT))
{
{
R22 * l_FT_1719; memset(&l_FT_1719, 0, sizeof l_FT_1719);
l_FT_1719 = r_FLOAT_TYPE(r_MAX_INT(((*(R22 *)rt_nil_check(l_T_1710))).f_SCALE, r_QUAL_PREC()));
if (r_TEQS(l_OP_1711, rt_str("-", 1)))
{
{ R26 rv1720 = r_MKET(r_FLOAT_OP(l_OP_1711, r_MKET(r_MK(rt_str("0.0", 3)), r_FLOAT_TYPE(((rt_int)1LL))), l_A_1709, l_FT_1719), l_FT_1719);
return rv1720; }
}
{ R26 rv1721 = r_MKET((l_A_1709).f_C, l_FT_1719);
return rv1721; }
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1710));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R17 * p_E) { RT_B_TICK(); 
{ rt_int rv1722 = (((((((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) && (!r_NAMES_OBJECT(((*(R17 *)rt_nil_check(p_E))).f_NAME)))) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R17 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1722; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R17 * p_E) { RT_B_TICK(); 
R9 l_OP_1723; memset(&l_OP_1723, 0, sizeof l_OP_1723);
S_R9(&l_OP_1723, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1724; memset(&l_A_1724, 0, sizeof l_A_1724);
R26 l_B_1725; memset(&l_B_1725, 0, sizeof l_B_1725);
if ((r_TEQS(l_OP_1723, rt_str("&", 1)) || r_TEQS(l_OP_1723, rt_str("!", 1))))
{
{
R23 l_MA_1726; memset(&l_MA_1726, 0, sizeof l_MA_1726);
S_R23(&l_MA_1726, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R9 l_CA_1727; memset(&l_CA_1727, 0, sizeof l_CA_1727);
S_R9(&l_CA_1727, r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R9 l_CB_1728; memset(&l_CB_1728, 0, sizeof l_CB_1728);
S_R9(&l_CB_1728, r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1723, rt_str("&", 1)))
{
{ R26 rv1729 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1727, l_CB_1728), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1729; }
}
{ R26 rv1730 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1727, l_CB_1728), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1730; }
}
}
if ((r_IS_LITERALISH(((*(R17 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R17 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1725, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1724, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, (l_B_1725).f_T), 0);
}
else
{
S_R26(&l_A_1724, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1725, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, (l_A_1724).f_T), 0);
}
{ R26 rv1731 = r_STD_RESULT(r_APPLY_OPERATOR(p_E, l_OP_1723, l_A_1724, l_B_1725));
return rv1731; }
rt_raise(RT_X_INIT);
}
static R26 r_STD_RESULT(R26 p_V) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R26 rv1732 = p_V;
return rv1732; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((p_V).f_T)))).f_KIND == g_T_INT)))
{
{ R26 rv1733 = p_V;
return rv1733; }
}
{ R26 rv1734 = ({ R26 rc1735; memset(&rc1735, 0, sizeof rc1735);  S_R9(&rc1735.f_C, r_STD_CHECK((p_V).f_C), 0); rc1735.f_T = (p_V).f_T; rc1735.f_LVAL = 0; S_R9(&rc1735.f_SELF, (p_V).f_SELF, 0); rc1735; });
return rv1734; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1736; memset(&l_AT_1736, 0, sizeof l_AT_1736);
l_AT_1736 = (p_A).f_T;
R22 * l_BT_1737; memset(&l_BT_1737, 0, sizeof l_BT_1737);
l_BT_1737 = (p_B).f_T;
rt_int l_LINE_1738; memset(&l_LINE_1738, 0, sizeof l_LINE_1738);
l_LINE_1738 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
{
R9 l_NAME_1739; memset(&l_NAME_1739, 0, sizeof l_NAME_1739);
S_R9(&l_NAME_1739, r_OP_NAME(p_OP, 0), 0);
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
S_R9(&l_NAME_1739, r_QMKN(rt_str("MD_", 3), l_NAME_1739), 0);
}
if ((((((*(R22 *)rt_nil_check(l_AT_1736))).f_GENP).f_LEN > ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_BT_1737))).f_GENP).f_LEN > ((rt_int)0LL))))
{
r_REQUIRE_WHERE(l_NAME_1739, l_LINE_1738);
}
if (((r_HAS_USER_ROUTINE(l_NAME_1739) || (((*(R22 *)rt_nil_check(l_AT_1736))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1737))).f_KIND == g_T_ABS)))
{
{
R27 * l_ARGS_1740; memset(&l_ARGS_1740, 0, sizeof l_ARGS_1740);
l_ARGS_1740 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R27 * l_EXTRA_1741; memset(&l_EXTRA_1741, 0, sizeof l_EXTRA_1741);
l_EXTRA_1741 = r_QUAL_ARGS(l_LINE_1738);
R12 * l_Y_1742; memset(&l_Y_1742, 0, sizeof l_Y_1742);
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
l_EXTRA_1741 = r_VAL_ARG(r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_D, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_EXTRA_1741);
}
if ((!(l_EXTRA_1741 == NULL)))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1740))).f_NEXT))).f_NEXT = l_EXTRA_1741;
l_Y_1742 = r_USER_OPERATOR(l_NAME_1739, l_ARGS_1740, l_LINE_1738);
if ((!(l_Y_1742 == NULL)))
{
{ R26 rv1743 = r_CALL_SYM(l_Y_1742, l_ARGS_1740, l_LINE_1738);
return rv1743; }
}
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1740))).f_NEXT))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(l_NAME_1739, l_ARGS_1740, l_LINE_1738) == NULL)))
{
r_FAILT(l_LINE_1738, rt_b_cat(rt_str("no operation takes the scale, precision or rounding of the ", 59), rt_str("expression as arguments (D.5): ", 31)), l_NAME_1739);
}
}
else
{
l_Y_1742 = r_USER_OPERATOR(l_NAME_1739, l_ARGS_1740, l_LINE_1738);
if ((!(l_Y_1742 == NULL)))
{
{ R26 rv1744 = r_CALL_SYM(l_Y_1742, l_ARGS_1740, l_LINE_1738);
return rv1744; }
}
}
if ((r_TEQS(p_OP, rt_str("<>", 2)) && (((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{
R12 * l_Q_1745; memset(&l_Q_1745, 0, sizeof l_Q_1745);
l_Q_1745 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1740, l_LINE_1738);
if ((!(l_Q_1745 == NULL)))
{
{ R26 rv1746 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1745, l_ARGS_1740, l_LINE_1738)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1746; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1736))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1737))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1738, rt_str("no such operation for the abstract type: ", 41), l_NAME_1739);
}
}
}
}
if ((!r_PREDEFINED_ROUNDING()))
{
r_FAILT(l_LINE_1738, rt_str("no operation is defined for the rounding mode ", 46), ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1747 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1747; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1748 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1748; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1736))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1737))).f_KIND == g_T_INT)))
{
{ R26 rv1749 = r_MKET(r_FIXED_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1749; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1736))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1737))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1750 = r_MKET(r_FLOAT_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1750; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1736))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1736, l_BT_1737)))
{
if ((r_IS_UNORDERED(l_AT_1736) || r_IS_UNORDERED(l_BT_1737)))
{
r_FAIL(l_LINE_1738, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1751 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1751; }
}
r_FAILT(l_LINE_1738, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1736))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1737))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1736))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1737))).f_KIND == g_T_BITS)))))
{
r_SAME_CHARSET(l_AT_1736, l_BT_1737, l_LINE_1738);
{
R22 * l_T_1752; memset(&l_T_1752, 0, sizeof l_T_1752);
l_T_1752 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1736))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1752))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1736))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1736))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1737))).f_MLEN).f_OK))
{
S_R23(&((*(R22 *)rt_nil_check(l_T_1752))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1736))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1737))).f_MLEN).f_V)), 0);
S_R9(&((*(R22 *)rt_nil_check(l_T_1752))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1752))).f_MLEN).f_V), 0);
}
{ R26 rv1753 = r_MKET(r_FMT2(rt_str("rt_b_cat(@, @)", 14), (p_A).f_C, (p_B).f_C), l_T_1752);
return rv1753; }
}
}
r_FAIL(l_LINE_1738, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1736))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1737))).f_KIND == g_T_BITS)))
{
{ R26 rv1754 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1736);
return rv1754; }
}
r_FAILT(l_LINE_1738, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1736))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1737))).f_KIND == g_T_INT)))
{
{ R26 rv1755 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1755; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1736))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1737))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1756; memset(&l_T_1756, 0, sizeof l_T_1756);
l_T_1756 = r_FLOAT_TYPE(r_MAX_INT(r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1736))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1737))).f_SCALE), r_QUAL_PREC()));
if ((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))
{
{ R26 rv1757 = r_MKET(r_FLOAT_OP(p_OP, p_A, p_B, l_T_1756), l_T_1756);
return rv1757; }
}
if (r_TEQS(p_OP, rt_str("**", 2)))
{
r_FAIL(l_LINE_1738, rt_str("** has no predefined meaning for floating point values (3.3.4.2)", 64));
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1736))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1737))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1736))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1737))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1738, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1738, rt_b_cat(rt_b_cat(rt_b_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1736), (r_TYPE_NAME(l_AT_1736)).f_LEN)));
rt_raise(RT_X_INIT);
}
static rt_int r_IDENTICAL_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1758; memset(&l_RA_1758, 0, sizeof l_RA_1758);
l_RA_1758 = r_REAL_TYPE(p_A);
R22 * l_RB_1759; memset(&l_RB_1759, 0, sizeof l_RB_1759);
l_RB_1759 = r_REAL_TYPE(p_B);
if ((p_A == p_B))
{
{ rt_int rv1760 = 1;
return rv1760; }
}
if (((!r_SAME_TYPE(p_A, p_B)) || (!r_SAME_RANGE(p_A, p_B))))
{
{ rt_int rv1761 = 0;
return rv1761; }
}
if (((((*(R22 *)rt_nil_check(l_RA_1758))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RA_1758))).f_KIND == g_T_BITS)))
{
if (((((*(R22 *)rt_nil_check(l_RA_1758))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_1759))).f_MLEN).f_OK))
{
{ rt_int rv1762 = ((((*(R22 *)rt_nil_check(l_RA_1758))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_1759))).f_MLEN).f_V);
return rv1762; }
}
}
else if ((((*(R22 *)rt_nil_check(l_RA_1758))).f_KIND == g_T_ARR))
{
{ rt_int rv1763 = (r_SAME_EXTENTS(l_RA_1758, l_RB_1759) && r_IDENTICAL_TYPE(((*(R22 *)rt_nil_check(l_RA_1758))).f_ELEM, ((*(R22 *)rt_nil_check(l_RB_1759))).f_ELEM));
return rv1763; }
}
{ rt_int rv1764 = 1;
return rv1764; }
rt_raise(RT_X_INIT);
}
static R9 r_TARGET_ARGS_CHECK(R22 * p_RT, R22 * p_VT, R9 p_C) { RT_B_TICK(); 
R22 * l_A_1765; memset(&l_A_1765, 0, sizeof l_A_1765);
l_A_1765 = r_REAL_TYPE(p_RT);
R22 * l_B_1766; memset(&l_B_1766, 0, sizeof l_B_1766);
l_B_1766 = r_REAL_TYPE(p_VT);
R9 l_R_1767; memset(&l_R_1767, 0, sizeof l_R_1767);
S_R9(&l_R_1767, r_MK(rt_str("", 0)), 0);
if (((!(((*(R22 *)rt_nil_check(l_A_1765))).f_KIND == g_T_REC)) || (!(((*(R22 *)rt_nil_check(l_B_1766))).f_KIND == g_T_REC))))
{
{ R9 rv1768 = p_C;
return rv1768; }
}
{
R24 * l_F_1769; memset(&l_F_1769, 0, sizeof l_F_1769);
l_F_1769 = ((*(R22 *)rt_nil_check(l_A_1765))).f_FIELDS;
R25 * l_P_1770; memset(&l_P_1770, 0, sizeof l_P_1770);
l_P_1770 = ((*(R22 *)rt_nil_check(l_A_1765))).f_ARGS;
R25 * l_Q_1771; memset(&l_Q_1771, 0, sizeof l_Q_1771);
l_Q_1771 = ((*(R22 *)rt_nil_check(l_B_1766))).f_ARGS;
for (;;) {
if ((((l_F_1769 == NULL) || (l_P_1770 == NULL)) || (l_Q_1771 == NULL))) goto L_end1772;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1769))).f_KIND == ((rt_int)0LL))))
{
if (((((!((*(R25 *)rt_nil_check(l_P_1770))).f_ANYARG) && (!r_IS_GEN_ARG(l_P_1770))) && (!r_IS_GEN_ARG(l_Q_1771))) && (!(((((*(R25 *)rt_nil_check(l_P_1770))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_1771))).f_MLO).f_OK)))))
{
S_R9(&l_R_1767, r_FMT3(rt_str("@ if (p && p->@ != (@)) rt_raise(RT_B_TYPE_MISMATCH);", 53), l_R_1767, ((*(R24 *)rt_nil_check(l_F_1769))).f_CNAME, ((*(R25 *)rt_nil_check(l_P_1770))).f_LO), 0);
}
l_P_1770 = ((*(R25 *)rt_nil_check(l_P_1770))).f_NEXT;
l_Q_1771 = ((*(R25 *)rt_nil_check(l_Q_1771))).f_NEXT;
}
l_F_1769 = ((*(R24 *)rt_nil_check(l_F_1769))).f_NEXT;
}
RT_B_TICK();
} L_end1772: ;
}
if (((l_R_1767).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1773 = p_C;
return rv1773; }
}
{ R9 rv1774 = r_FMT3(rt_str("({ __typeof__(@) p = (@);@ p; })", 32), p_C, p_C, l_R_1767);
return rv1774; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_EXTENTS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R25 * l_P_1775; memset(&l_P_1775, 0, sizeof l_P_1775);
l_P_1775 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_A)))).f_BOUNDS;
R25 * l_Q_1776; memset(&l_Q_1776, 0, sizeof l_Q_1776);
l_Q_1776 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_B)))).f_BOUNDS;
for (;;) {
if (((l_P_1775 == NULL) || (l_Q_1776 == NULL))) goto L_end1777;
{
if (((((((((((*(R25 *)rt_nil_check(l_P_1775))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_P_1775))).f_MHI).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1776))).f_MLO).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1776))).f_MHI).f_OK) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1775))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1775))).f_HI))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1776))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1776))).f_HI))))
{
if ((!(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_P_1775))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_P_1775))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)) == r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_Q_1776))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_Q_1776))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)))))
{
{ rt_int rv1778 = 0;
return rv1778; }
}
}
l_P_1775 = ((*(R25 *)rt_nil_check(l_P_1775))).f_NEXT;
l_Q_1776 = ((*(R25 *)rt_nil_check(l_Q_1776))).f_NEXT;
}
RT_B_TICK();
} L_end1777: ;
{ rt_int rv1779 = 1;
return rv1779; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_VALUES(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv1780 = 0;
return rv1780; }
}
{ rt_int rv1781 = (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL));
return rv1781; }
rt_raise(RT_X_INIT);
}
static R22 * r_FLOAT_TYPE(rt_int p_P) { RT_B_TICK(); 
R22 * l_T_1782; memset(&l_T_1782, 0, sizeof l_T_1782);
l_T_1782 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1782))).f_SCALE = p_P;
{ R22 * rv1783 = l_T_1782;
return rv1783; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_D(R22 * p_T) { RT_B_TICK(); 
if (((!(((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL))) || (p_T == NULL)))
{
{ rt_int rv1784 = 0;
return rv1784; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv1785 = 0;
return rv1785; }
}
{ rt_int rv1786 = (r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_SCALE) > ((rt_int)7LL));
return rv1786; }
rt_raise(RT_X_INIT);
}
static R9 r_AS_D(R26 p_V) { RT_B_TICK(); 
if (r_IS_D((p_V).f_T))
{
{ R9 rv1787 = (p_V).f_C;
return rv1787; }
}
{ R9 rv1788 = r_FMT1(rt_str("rt_b_d_of_double(@)", 19), (p_V).f_C);
return rv1788; }
rt_raise(RT_X_INIT);
}
static R9 r_AS_DOUBLE(R26 p_V) { RT_B_TICK(); 
if (r_IS_D((p_V).f_T))
{
{ R9 rv1789 = r_FMT1(rt_str("rt_b_double_of_d(@)", 19), (p_V).f_C);
return rv1789; }
}
{ R9 rv1790 = (p_V).f_C;
return rv1790; }
rt_raise(RT_X_INIT);
}
static R9 r_SINGLE_C(rt_int p_P) { RT_B_TICK(); 
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
{ R9 rv1791 = r_MK(rt_str("1", 1));
return rv1791; }
}
{ R9 rv1792 = r_MK(rt_str("0", 1));
return rv1792; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_TRUNC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9)) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8))))
{
{ R9 rv1793 = r_MK(rt_str("1", 1));
return rv1793; }
}
}
{ R9 rv1794 = r_MK(rt_str("0", 1));
return rv1794; }
rt_raise(RT_X_INIT);
}
static rt_int r_QUAL_PREC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B == NULL)))
{
{ rt_int rv1795 = (r_MANIFEST(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B)).f_V;
return rv1795; }
}
}
{ rt_int rv1796 = ((rt_int)0LL);
return rv1796; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_OP(R9 p_OP, R26 p_A, R26 p_B, R22 * p_T) { RT_B_TICK(); 
if (r_IS_D(p_T))
{
{ R9 rv1797 = r_FMT4(rt_str("rt_b_dop('@', @, @, @)", 22), p_OP, r_AS_D(p_A), r_AS_D(p_B), r_FLOAT_TRUNC());
return rv1797; }
}
{ R9 rv1798 = r_CAT(r_FMT3(rt_str("rt_b_fop('@', @, @, ", 20), p_OP, r_AS_DOUBLE(p_A), r_AS_DOUBLE(p_B)), r_FMT2(rt_str("@, @)", 5), r_SINGLE_C(((*(R22 *)rt_nil_check(p_T))).f_SCALE), r_FLOAT_TRUNC()));
return rv1798; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_COMPARE(R26 p_A, R26 p_B, R9 p_OP) { RT_B_TICK(); 
if ((r_IS_D((p_A).f_T) || r_IS_D((p_B).f_T)))
{
{ R9 rv1799 = r_FMT3(rt_str("(rt_b_dcmp(@, @) @ 0)", 21), r_AS_D(p_A), r_AS_D(p_B), r_C_RELOP(p_OP));
return rv1799; }
}
{ R9 rv1800 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, r_C_RELOP(p_OP), (p_B).f_C);
return rv1800; }
rt_raise(RT_X_INIT);
}
static R9 r_C_RELOP(R9 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R9 rv1801 = r_MK(rt_str("==", 2));
return rv1801; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R9 rv1802 = r_MK(rt_str("!=", 2));
return rv1802; }
}
{ R9 rv1803 = p_OP;
return rv1803; }
rt_raise(RT_X_INIT);
}
static R9 r_LOWER_OP(R9 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R9 rv1804 = r_MK(rt_str("and", 3));
return rv1804; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R9 rv1805 = r_MK(rt_str("or", 2));
return rv1805; }
}
{ R9 rv1806 = r_MK(rt_str("xor", 3));
return rv1806; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { RT_B_TICK(); 
if ((p_A > p_B))
{
{ rt_int rv1807 = p_A;
return rv1807; }
}
{ rt_int rv1808 = p_B;
return rv1808; }
rt_raise(RT_X_INIT);
}
static R9 r_FIXED_COMPARE(R26 p_A, R26 p_B, R9 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE == ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE))
{
{ R9 rv1809 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv1809; }
}
{ R9 rv1810 = r_CAT(r_FMT3(rt_str("(rt_b_cmp(@, @, @", 17), (p_A).f_C, r_NUM(((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE), (p_B).f_C), r_FMT2(rt_str(", @) @ 0)", 9), r_NUM(((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE), p_OP));
return rv1810; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1811; memset(&l_AT_1811, 0, sizeof l_AT_1811);
l_AT_1811 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1812; memset(&l_BT_1812, 0, sizeof l_BT_1812);
l_BT_1812 = r_REAL_TYPE((p_B).f_T);
R9 l_R_1813; memset(&l_R_1813, 0, sizeof l_R_1813);
if (((((*(R22 *)rt_nil_check(l_AT_1811))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1812))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1811))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1812))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1811))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1812))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R9(&l_R_1813, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1811))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1812))).f_KIND == g_T_INT)))
{
S_R9(&l_R_1813, r_FIXED_COMPARE(p_A, p_B, r_MK(rt_str("==", 2))), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1811))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1812))).f_KIND == g_T_FLOAT)))
{
S_R9(&l_R_1813, r_FLOAT_COMPARE(p_A, p_B, r_MK(rt_str("=", 1))), 0);
}
else
{
if ((!r_SAME_CLASS(l_AT_1811, l_BT_1812)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1811))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
r_SAME_CHARSET(l_AT_1811, l_BT_1812, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R22 *)rt_nil_check(l_AT_1811))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1811) || r_HAS_ANY(l_BT_1812)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
if ((((*(R22 *)rt_nil_check(l_AT_1811))).f_KIND == g_T_ARR))
{
if ((!r_SAME_EXTENTS(l_AT_1811, l_BT_1812)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("arrays of different EXTENT attributes are compared (3.8.4.1)", 60));
}
}
if ((((*(R22 *)rt_nil_check(l_AT_1811))).f_KIND == g_T_REC))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_AT_1811))).f_ARGS, ((*(R22 *)rt_nil_check(l_BT_1812))).f_ARGS)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("records of different types are compared (3.9.4.1)", 49));
}
}
if (r_HAS_ABS_PART(l_AT_1811))
{
S_R9(&l_R_1813, r_COMPONENT_EQUAL(l_AT_1811, (p_A).f_C, (p_B).f_C, ((*(R17 *)rt_nil_check(p_E))).f_LINE), 0);
}
else
{
S_R9(&l_R_1813, r_EQUAL_CODE(l_AT_1811, (p_A).f_C, (p_B).f_C), 0);
}
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R9(&l_R_1813, r_FMT1(rt_str("(!@)", 4), l_R_1813), 0);
}
{ R26 rv1814 = r_MKET(l_R_1813, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1814; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1815; memset(&l_S1_1815, 0, sizeof l_S1_1815);
l_S1_1815 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1816; memset(&l_S2_1816, 0, sizeof l_S2_1816);
l_S2_1816 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1817; memset(&l_S_1817, 0, sizeof l_S_1817);
l_S_1817 = r_MAX_INT(l_S1_1815, l_S2_1816);
R9 l_FN_1818; memset(&l_FN_1818, 0, sizeof l_FN_1818);
S_R9(&l_FN_1818, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R9(&l_FN_1818, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1819 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1818, r_RESCALE_C((p_A).f_C, l_S1_1815, l_S_1817), r_RESCALE_C((p_B).f_C, l_S2_1816, l_S_1817)), r_INT_TYPE(l_S_1817));
return rv1819; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1820 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1815, l_S2_1816)));
return rv1820; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1821 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1815, l_S2_1816)));
return rv1821; }
}
{ R26 rv1822 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1815, l_S2_1816)));
return rv1822; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1823 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1815));
return rv1823; }
}
{ R26 rv1824 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1815));
return rv1824; }
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
rt_int l_S1_1825; memset(&l_S1_1825, 0, sizeof l_S1_1825);
l_S1_1825 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1826; memset(&l_S2_1826, 0, sizeof l_S2_1826);
l_S2_1826 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R9 l_RND_1827; memset(&l_RND_1827, 0, sizeof l_RND_1827);
S_R9(&l_RND_1827, r_MK(rt_str("0", 1)), 0);
if ((((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_B).f_T)))).f_KIND == g_T_FLOAT)))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no machine-dependent float operator ", 36), p_OP);
}
if ((r_IS_D((p_A).f_T) || r_IS_D((p_B).f_T)))
{
{ R26 rv1828 = r_MKET(r_FMT3(rt_str("rt_b_dmd('@', @, @)", 19), p_OP, r_AS_D(p_A), r_AS_D(p_B)), r_BITS_TYPE(((rt_int)128LL)));
return rv1828; }
}
else if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
{ R26 rv1829 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1829; }
}
{ R26 rv1830 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1830; }
}
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R9(&l_RND_1827, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("//", 2))))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the machine-dependent fixed point operators are !+! !-! !*! !//! (3.2.4.5), not ", 80), p_OP);
}
{ R26 rv1831 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(rt_mul(((rt_int)2LL), ((*(R7 *)rt_nil_check(g_W))).f_WORD)));
return rv1831; }
}
{
R23 l_SM_1832; memset(&l_SM_1832, 0, sizeof l_SM_1832);
S_R23(&l_SM_1832, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1833; memset(&l_S_1833, 0, sizeof l_S_1833);
l_S_1833 = (l_SM_1832).f_V;
rt_int l_SR_1834; memset(&l_SR_1834, 0, sizeof l_SR_1834);
l_SR_1834 = r_MAX_INT(l_S1_1825, l_S2_1826);
if ((!(l_SM_1832).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1835 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1833, l_S1_1825), l_S2_1826)), l_RND_1827), r_INT_TYPE(l_S_1833));
return rv1835; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1836 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1833, l_S1_1825), l_S2_1826)), l_RND_1827), r_INT_TYPE(l_S_1833));
return rv1836; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1837 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1825), r_NUM(l_S_1833), l_RND_1827), r_INT_TYPE(l_S_1833));
return rv1837; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R9 l_SUB_1838; memset(&l_SUB_1838, 0, sizeof l_SUB_1838);
S_R9(&l_SUB_1838, r_MK(rt_str("0", 1)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R9(&l_SUB_1838, r_MK(rt_str("1", 1)), 0);
}
{ R26 rv1839 = r_MKET(r_CAT(r_FMT4(rt_str("rt_b_addsc(@, @, @, @, ", 23), (p_A).f_C, r_NUM(l_S1_1825), (p_B).f_C, r_NUM(l_S2_1826)), r_FMT3(rt_str("@, @, @)", 8), r_NUM(l_S_1833), l_SUB_1838, l_RND_1827)), r_INT_TYPE(l_S_1833));
return rv1839; }
}
}
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R17 * p_E) { RT_B_TICK(); 
R26 l_V_1840; memset(&l_V_1840, 0, sizeof l_V_1840);
S_R26(&l_V_1840, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1841; memset(&l_T_1841, 0, sizeof l_T_1841);
l_T_1841 = r_REAL_TYPE((l_V_1840).f_T);
R17 * l_R_1842; memset(&l_R_1842, 0, sizeof l_R_1842);
l_R_1842 = ((*(R17 *)rt_nil_check(p_E))).f_B;
R9 l_TMP_1843; memset(&l_TMP_1843, 0, sizeof l_TMP_1843);
S_R9(&l_TMP_1843, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1844; memset(&l_LO_1844, 0, sizeof l_LO_1844);
R26 l_HI_1845; memset(&l_HI_1845, 0, sizeof l_HI_1845);
R9 l_LOC_1846; memset(&l_LOC_1846, 0, sizeof l_LOC_1846);
R9 l_HIC_1847; memset(&l_HIC_1847, 0, sizeof l_HIC_1847);
R9 l_LO_OP_1848; memset(&l_LO_OP_1848, 0, sizeof l_LO_OP_1848);
S_R9(&l_LO_OP_1848, r_MK(rt_str("<=", 2)), 0);
R9 l_HI_OP_1849; memset(&l_HI_OP_1849, 0, sizeof l_HI_OP_1849);
S_R9(&l_HI_OP_1849, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1844, r_EXPR(((*(R17 *)rt_nil_check(l_R_1842))).f_A, l_T_1841), 0);
S_R26(&l_HI_1845, r_EXPR(((*(R17 *)rt_nil_check(l_R_1842))).f_B, l_T_1841), 0);
if (r_IS_UNORDERED(l_T_1841))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1841))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1841))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1841))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_1844).f_T), l_T_1841)) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_1845).f_T), l_T_1841))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if (((((*(R17 *)rt_nil_check(l_R_1842))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_R_1842))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LO_OP_1848, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R17 *)rt_nil_check(l_R_1842))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HI_OP_1849, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R22 *)rt_nil_check(l_T_1841))).f_KIND == g_T_INT))
{
{
R26 l_X_1850; memset(&l_X_1850, 0, sizeof l_X_1850);
S_R26(&l_X_1850, r_MKET(l_TMP_1843, (l_V_1840).f_T), 0);
S_R9(&l_LOC_1846, r_FIXED_COMPARE(l_LO_1844, l_X_1850, l_LO_OP_1848), 0);
S_R9(&l_HIC_1847, r_FIXED_COMPARE(l_X_1850, l_HI_1845, l_HI_OP_1849), 0);
}
}
else if ((((*(R22 *)rt_nil_check(l_T_1841))).f_KIND == g_T_FLOAT))
{
S_R9(&l_LOC_1846, r_FLOAT_COMPARE(l_LO_1844, r_MKET(l_TMP_1843, (l_V_1840).f_T), l_LO_OP_1848), 0);
S_R9(&l_HIC_1847, r_FLOAT_COMPARE(r_MKET(l_TMP_1843, (l_V_1840).f_T), l_HI_1845, l_HI_OP_1849), 0);
}
else
{
S_R9(&l_LOC_1846, r_FMT3(rt_str("(@ @ @)", 7), (l_LO_1844).f_C, l_LO_OP_1848, l_TMP_1843), 0);
S_R9(&l_HIC_1847, r_FMT3(rt_str("(@ @ @)", 7), l_TMP_1843, l_HI_OP_1849, (l_HI_1845).f_C), 0);
}
{ R26 rv1851 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; @ && ", 17), r_CTYPE(l_T_1841), l_TMP_1843, (l_V_1840).f_C, l_LOC_1846), r_FMT1(rt_str("@; })", 5), l_HIC_1847)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1851; }
rt_raise(RT_X_INIT);
}
static R9 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R9 rv1852 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1852; }
}
{ R9 rv1853 = (p_V).f_C;
return rv1853; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { RT_B_TICK(); 
{ R26 rv1854 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1854; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { RT_B_TICK(); 
rt_int l_B_1855; memset(&l_B_1855, 0, sizeof l_B_1855);
l_B_1855 = ((rt_int)0LL);
rt_int l_P_1856; memset(&l_P_1856, 0, sizeof l_P_1856);
l_P_1856 = ((rt_int)1LL);
for (;;) {
if ((l_P_1856 >= p_N)) goto L_end1857;
{
l_B_1855 = rt_add(l_B_1855, ((rt_int)1LL));
l_P_1856 = rt_mul(l_P_1856, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1857: ;
{ rt_int rv1858 = l_B_1855;
return rv1858; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R23 l_M_1859; memset(&l_M_1859, 0, sizeof l_M_1859);
S_R23(&l_M_1859, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1859).f_OK)
{
{ rt_int rv1860 = (l_M_1859).f_V;
return rv1860; }
}
}
}
}
{ rt_int rv1861 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1861; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKING_OF(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1862; memset(&l_K_1862, 0, sizeof l_K_1862);
l_K_1862 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
rt_int l_MODE_1863; memset(&l_MODE_1863, 0, sizeof l_MODE_1863);
l_MODE_1863 = ((rt_int)2LL);
if ((l_K_1862 == g_T_STR))
{
l_MODE_1863 = ((rt_int)1LL);
}
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_KIND == g_N_REP) && (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL))))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_KIND == g_N_ENUMLIT)))
{
{
rt_int l_P_1864; memset(&l_P_1864, 0, sizeof l_P_1864);
l_P_1864 = r_PACKING_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_NAME);
if ((l_P_1864 >= ((rt_int)0LL)))
{
l_MODE_1863 = l_P_1864;
}
}
}
}
}
{ rt_int rv1865 = l_MODE_1863;
return rv1865; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKING_VALUE(R9 p_NAME) { RT_B_TICK(); 
if (r_TEQS(p_NAME, rt_str("DENSE", 5)))
{
{ rt_int rv1866 = ((rt_int)0LL);
return rv1866; }
}
else if (r_TEQS(p_NAME, rt_str("PACKED", 6)))
{
{ rt_int rv1867 = ((rt_int)1LL);
return rv1867; }
}
else if (r_TEQS(p_NAME, rt_str("UNPACKED", 8)))
{
{ rt_int rv1868 = ((rt_int)2LL);
return rv1868; }
}
{ rt_int rv1869 = rt_neg(((rt_int)1LL));
return rv1869; }
rt_raise(RT_X_INIT);
}
static R26 r_PACKING_LITERAL(rt_int p_MODE, rt_int p_LINE) { RT_B_TICK(); 
if ((p_MODE == ((rt_int)0LL)))
{
{ R26 rv1870 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("DENSE", 5), p_LINE), NULL);
return rv1870; }
}
else if ((p_MODE == ((rt_int)1LL)))
{
{ R26 rv1871 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1871; }
}
{ R26 rv1872 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1872; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACK_SLOT(rt_int p_ES, rt_int p_MODE) { RT_B_TICK(); 
rt_int l_U_1873; memset(&l_U_1873, 0, sizeof l_U_1873);
l_U_1873 = ((rt_int)8LL);
if ((p_ES <= ((rt_int)0LL)))
{
if ((p_MODE == ((rt_int)0LL)))
{
{ rt_int rv1874 = ((rt_int)0LL);
return rv1874; }
}
{ rt_int rv1875 = ((rt_int)8LL);
return rv1875; }
}
if ((p_MODE == ((rt_int)0LL)))
{
{ rt_int rv1876 = p_ES;
return rv1876; }
}
if (((p_MODE == ((rt_int)1LL)) && (p_ES <= ((*(R7 *)rt_nil_check(g_W))).f_WORD)))
{
for (;;) {
if ((l_U_1873 >= p_ES)) goto L_end1877;
{
l_U_1873 = rt_mul(l_U_1873, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1877: ;
{ rt_int rv1878 = l_U_1873;
return rv1878; }
}
{ rt_int rv1879 = rt_mul((rt_quot((rt_sub(rt_add(p_ES, ((*(R7 *)rt_nil_check(g_W))).f_WORD), ((rt_int)1LL))), ((*(R7 *)rt_nil_check(g_W))).f_WORD)), ((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1879; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_MIN_C(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1880 = r_MK(rt_str("INT64_MIN", 9));
return rv1880; }
}
{ R9 rv1881 = r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(rt_neg(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))))));
return rv1881; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_MAX_C(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1882 = r_MK(rt_str("INT64_MAX", 9));
return rv1882; }
}
{ R9 rv1883 = r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(rt_sub(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))), ((rt_int)1LL))));
return rv1883; }
rt_raise(RT_X_INIT);
}
static rt_int r_STD_MIN(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ rt_int rv1884 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
return rv1884; }
}
{ rt_int rv1885 = rt_neg(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))));
return rv1885; }
rt_raise(RT_X_INIT);
}
static rt_int r_STD_MAX(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ rt_int rv1886 = INT64_MAX;
return rv1886; }
}
{ rt_int rv1887 = rt_sub(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))), ((rt_int)1LL));
return rv1887; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_CHECK(R9 p_C) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1888 = p_C;
return rv1888; }
}
{ R9 rv1889 = r_FMT1(rt_str("rt_b_std(@)", 11), p_C);
return rv1889; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACK_SIZE(rt_int p_N, rt_int p_ES, rt_int p_MODE) { RT_B_TICK(); 
if ((p_N <= ((rt_int)0LL)))
{
{ rt_int rv1890 = ((rt_int)0LL);
return rv1890; }
}
{ rt_int rv1891 = rt_mul(p_N, r_PACK_SLOT(p_ES, p_MODE));
return rv1891; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHAR_SIZE(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv1892 = r_ENUM_SIZE(r_CHARSET_OF(p_T));
return rv1892; }
rt_raise(RT_X_INIT);
}
static R9 r_CHAR_REPS(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_1893; memset(&l_C_1893, 0, sizeof l_C_1893);
l_C_1893 = r_CHARSET_OF(p_T);
if ((!(((*(R22 *)rt_nil_check(l_C_1893))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_1893))).f_REPS))).f_B == NULL)))
{
{ R9 rv1894 = r_REP_TABLE(l_C_1893);
return rv1894; }
}
}
{ R9 rv1895 = r_FMT1(rt_str("NULL, @", 7), r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_1893))).f_BASE))).f_NLITS));
return rv1895; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_LENGTH(void) { RT_B_TICK(); 
{ rt_int rv1896 = ((rt_int)100000000LL);
return rv1896; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_FLOAT_PRECISION(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
{ rt_int rv1897 = ((rt_int)16LL);
return rv1897; }
}
{ rt_int rv1898 = ((rt_int)15LL);
return rv1898; }
rt_raise(RT_X_INIT);
}
static rt_int r_IMP_PRECISION_OF(rt_int p_P) { RT_B_TICK(); 
if ((p_P <= ((rt_int)7LL)))
{
{ rt_int rv1899 = ((rt_int)7LL);
return rv1899; }
}
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
{ rt_int rv1900 = ((rt_int)16LL);
return rv1900; }
}
{ rt_int rv1901 = ((rt_int)15LL);
return rv1901; }
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_FORMAT(rt_int p_P, R9 p_NAME) { RT_B_TICK(); 
rt_int l_SINGLE_1902; memset(&l_SINGLE_1902, 0, sizeof l_SINGLE_1902);
l_SINGLE_1902 = (r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL));
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
{ rt_int rv1903 = rt_neg(((rt_int)127LL));
return rv1903; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
{ rt_int rv1904 = ((rt_int)127LL);
return rv1904; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
{ rt_int rv1905 = ((rt_int)8LL);
return rv1905; }
}
else if ((r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)) && (!l_SINGLE_1902)))
{
{ rt_int rv1906 = ((rt_int)57LL);
return rv1906; }
}
}
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
if (l_SINGLE_1902)
{
{ rt_int rv1907 = rt_neg(((rt_int)125LL));
return rv1907; }
}
{ rt_int rv1908 = rt_neg(((rt_int)1021LL));
return rv1908; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
if (l_SINGLE_1902)
{
{ rt_int rv1909 = ((rt_int)128LL);
return rv1909; }
}
{ rt_int rv1910 = ((rt_int)1024LL);
return rv1910; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
if (l_SINGLE_1902)
{
{ rt_int rv1911 = ((rt_int)25LL);
return rv1911; }
}
{ rt_int rv1912 = ((rt_int)54LL);
return rv1912; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
if (l_SINGLE_1902)
{
{ rt_int rv1913 = ((rt_int)8LL);
return rv1913; }
}
{ rt_int rv1914 = ((rt_int)11LL);
return rv1914; }
}
else if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
if (l_SINGLE_1902)
{
{ rt_int rv1915 = ((rt_int)32LL);
return rv1915; }
}
{ rt_int rv1916 = ((rt_int)64LL);
return rv1916; }
}
{ rt_int rv1917 = ((rt_int)0LL);
return rv1917; }
rt_raise(RT_X_INIT);
}
static R23 r_STATIC_SIZE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1918; memset(&l_K_1918, 0, sizeof l_K_1918);
l_K_1918 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1918 == g_T_ABS))
{
{ R23 rv1919 = r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1919; }
}
else if ((l_K_1918 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R23 rv1920 = r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A);
return rv1920; }
}
}
{ R23 rv1921 = r_SOME(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1921; }
}
else if ((l_K_1918 == g_T_FLOAT))
{
{ R23 rv1922 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1922; }
}
else if ((l_K_1918 == g_T_BOOL))
{
{ R23 rv1923 = r_SOME(((rt_int)1LL));
return rv1923; }
}
else if ((l_K_1918 == g_T_ENUM))
{
{ R23 rv1924 = r_SOME(r_ENUM_SIZE(p_T));
return rv1924; }
}
else if ((l_K_1918 == g_T_BITS))
{
{ R23 rv1925 = ((*(R22 *)rt_nil_check(p_T))).f_MLEN;
return rv1925; }
}
else if ((l_K_1918 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R23 rv1926 = r_SOME(r_PACK_SIZE((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_V, r_CHAR_SIZE(p_T), r_PACKING_OF(p_T)));
return rv1926; }
}
}
else if (((l_K_1918 == g_T_PTR) || (l_K_1918 == g_T_SEM)))
{
{ R23 rv1927 = r_SOME(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1927; }
}
else if ((l_K_1918 == g_T_ARR))
{
{
R23 l_ES_1928; memset(&l_ES_1928, 0, sizeof l_ES_1928);
S_R23(&l_ES_1928, r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM), 0);
rt_int l_N_1929; memset(&l_N_1929, 0, sizeof l_N_1929);
l_N_1929 = ((rt_int)1LL);
R25 * l_B_1930; memset(&l_B_1930, 0, sizeof l_B_1930);
l_B_1930 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
if ((!(l_ES_1928).f_OK))
{
{ R23 rv1931 = r_NO_MVAL();
return rv1931; }
}
for (;;) {
if ((l_B_1930 == NULL)) goto L_end1932;
{
if ((((!(((((*(R25 *)rt_nil_check(l_B_1930))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_B_1930))).f_MHI).f_OK))) || r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1930))).f_LO)) || r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1930))).f_HI)))
{
{ R23 rv1933 = r_NO_MVAL();
return rv1933; }
}
l_N_1929 = rt_mul(l_N_1929, r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_B_1930))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_B_1930))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
l_B_1930 = ((*(R25 *)rt_nil_check(l_B_1930))).f_NEXT;
}
RT_B_TICK();
} L_end1932: ;
{ R23 rv1934 = r_SOME(r_PACK_SIZE(l_N_1929, (l_ES_1928).f_V, r_PACKING_OF(p_T)));
return rv1934; }
}
}
{ R23 rv1935 = r_NO_MVAL();
return rv1935; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1936; memset(&l_T_1936, 0, sizeof l_T_1936);
l_T_1936 = (p_B).f_T;
rt_int l_K_1937; memset(&l_K_1937, 0, sizeof l_K_1937);
l_K_1937 = ((*(R22 *)rt_nil_check(l_T_1936))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv1938 = r_SIZE_OF(l_T_1936, (p_B).f_C);
return rv1938; }
}
if ((l_K_1937 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv1939 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1936))).f_SCALE);
return rv1939; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1940 = r_INT_ET(((rt_int)2LL));
return rv1940; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv1941 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1941; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
if ((!(((*(R22 *)rt_nil_check(l_T_1936))).f_REPS == NULL)))
{
if ((r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1936))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1936))).f_REPS))).f_A == NULL))))
{
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1936))).f_REPS))).f_A))).f_NEXT == NULL)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1936))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8)))
{
{ R26 rv1942 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNSIGNED", 8), p_LINE), NULL);
return rv1942; }
}
}
}
}
{ R26 rv1943 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1943; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1936))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1944 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1936))).f_LO_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1936))).f_SCALE));
return rv1944; }
}
{ R26 rv1945 = r_MKET(r_STD_MIN_C(), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1936))).f_SCALE));
return rv1945; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1936))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1946 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1936))).f_HI_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1936))).f_SCALE));
return rv1946; }
}
{ R26 rv1947 = r_MKET(r_STD_MAX_C(), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1936))).f_SCALE));
return rv1947; }
}
}
else if ((l_K_1937 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv1948 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1936))).f_SCALE);
return rv1948; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv1949 = r_INT_ET(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1936))).f_SCALE));
return rv1949; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1950 = r_INT_ET(((rt_int)2LL));
return rv1950; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R26 rv1951 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1936))).f_SCALE, p_NAME));
return rv1951; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) || r_TEQS(p_NAME, rt_str("MAX", 3))))
{
{
R22 * l_MT_1952; memset(&l_MT_1952, 0, sizeof l_MT_1952);
l_MT_1952 = r_FLOAT_TYPE(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1936))).f_SCALE));
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1936))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1953 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1936))).f_LO_C, (p_B).f_SELF), l_MT_1952);
return rv1953; }
}
{ R26 rv1954 = r_MKET(r_FLOAT_LIMIT(l_MT_1952, p_NAME), l_MT_1952);
return rv1954; }
}
if (((((*(R22 *)rt_nil_check(l_T_1936))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1955 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1936))).f_HI_C, (p_B).f_SELF), l_MT_1952);
return rv1955; }
}
{ R26 rv1956 = r_MKET(r_FLOAT_LIMIT(l_MT_1952, p_NAME), l_MT_1952);
return rv1956; }
}
}
}
else if ((l_K_1937 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1936))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1957 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1936))).f_LO_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1936))).f_BASE);
return rv1957; }
}
{ R26 rv1958 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_1936))).f_BASE);
return rv1958; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1936))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1959 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1936))).f_HI_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1936))).f_BASE);
return rv1959; }
}
{ R26 rv1960 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1936))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_1936))).f_BASE);
return rv1960; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1936))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1961 = r_MKET(r_SUBST_SELF(r_FMT4(rt_str("((@) >= (@) \? (@) - (@) + 1 : 0)", 32), ((*(R22 *)rt_nil_check(l_T_1936))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1936))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1936))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1936))).f_LO_C), (p_B).f_SELF), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1961; }
}
{ R26 rv1962 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1936))).f_BASE))).f_NLITS);
return rv1962; }
}
}
else if (((l_K_1937 == g_T_STR) || (l_K_1937 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv1963 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1963; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1964 = r_PACKING_LITERAL(r_PACKING_OF(l_T_1936), p_LINE);
return rv1964; }
}
}
else if ((l_K_1937 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv1965 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1936))).f_DIMS);
return rv1965; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) || r_TEQS(p_NAME, rt_str("BOUNDS", 6))))
{
{ R26 rv1966 = r_ARRAY_SHAPE(p_B, p_NAME);
return rv1966; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1967 = r_PACKING_LITERAL(r_PACKING_OF(l_T_1936), p_LINE);
return rv1967; }
}
}
else if ((l_K_1937 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_1936))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv1968 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1968; }
}
{ R26 rv1969 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1969; }
}
}
else if (((l_K_1937 == g_T_ABS) || (l_K_1937 == g_T_REC)))
{
{
R22 * l_U_1970; memset(&l_U_1970, 0, sizeof l_U_1970);
l_U_1970 = l_T_1936;
if ((l_K_1937 == g_T_ABS))
{
l_U_1970 = ((*(R22 *)rt_nil_check(l_T_1936))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_1970))).f_KIND == g_T_REC))
{
{
R24 * l_F_1971; memset(&l_F_1971, 0, sizeof l_F_1971);
l_F_1971 = r_FIND_FIELD(l_U_1970, p_NAME);
if ((!(l_F_1971 == NULL)))
{
if ((!(((*(R24 *)rt_nil_check(l_F_1971))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv1972 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R24 *)rt_nil_check(l_F_1971))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1971))).f_T);
return rv1972; }
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
R22 * l_T_1973; memset(&l_T_1973, 0, sizeof l_T_1973);
l_T_1973 = r_REAL_TYPE((p_B).f_T);
R9 l_D_1974; memset(&l_D_1974, 0, sizeof l_D_1974);
S_R9(&l_D_1974, r_NUM(((*(R22 *)rt_nil_check(l_T_1973))).f_DIMS), 0);
R9 l_X_1975; memset(&l_X_1975, 0, sizeof l_X_1975);
S_R9(&l_X_1975, r_NEW_NAME(rt_str("sx", 2)), 0);
R9 l_R_1976; memset(&l_R_1976, 0, sizeof l_R_1976);
S_R9(&l_R_1976, r_NEW_NAME(rt_str("sr", 2)), 0);
R22 * l_ELEM_1977; memset(&l_ELEM_1977, 0, sizeof l_ELEM_1977);
l_ELEM_1977 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
R9 l_C_1978; memset(&l_C_1978, 0, sizeof l_C_1978);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
{
R17 * l_TS_1979; memset(&l_TS_1979, 0, sizeof l_TS_1979);
l_TS_1979 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_TS_1979))).f_NAME, r_MKN(rt_str("BOUNDS_DEF", 10)), 0);
((*(R17 *)rt_nil_check(l_TS_1979))).f_A = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_TS_1979))).f_A))).f_NAME, r_MKN(rt_str("STD", 3)), 0);
l_ELEM_1977 = r_RESOLVE(l_TS_1979);
}
}
{
R22 * l_A_1980; memset(&l_A_1980, 0, sizeof l_A_1980);
l_A_1980 = r_ARRAY_OF(l_ELEM_1977, ((rt_int)1LL));
S_R9(&l_C_1978, r_FMT4(rt_str("({ @ @ = @; @ ", 14), r_CTYPE(l_T_1973), l_X_1975, (p_B).f_C, ((*(R22 *)rt_nil_check(l_A_1980))).f_CNAME), 0);
S_R9(&l_C_1978, r_FMT4(rt_str("@@; memset(&@, 0, sizeof @);", 28), l_C_1978, l_R_1976, l_R_1976, l_R_1976), 0);
S_R9(&l_C_1978, r_FMT4(rt_str("@ @.lo[0] = 0; @.hi[0] = @ - 1;", 31), l_C_1978, l_R_1976, l_R_1976, l_D_1974), 0);
S_R9(&l_C_1978, r_FMT4(rt_str("@ @.p = rt_alloc(@ * sizeof *@.p);", 34), l_C_1978, l_R_1976, l_D_1974, l_R_1976), 0);
S_R9(&l_C_1978, r_FMT2(rt_str("@ for (int i = 0; i < @; i++) {", 31), l_C_1978, l_D_1974), 0);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
S_R9(&l_C_1978, r_FMT2(rt_str("@ @", 3), l_C_1978, r_INIT_CODE(l_ELEM_1977, r_FMT1(rt_str("@.p[i]", 6), l_R_1976))), 0);
S_R9(&l_C_1978, r_FMT4(rt_str("@ @.p[i].f_MIN = @.lo[i]; @.p[i].f_MAX = ", 41), l_C_1978, l_R_1976, l_X_1975, l_R_1976), 0);
S_R9(&l_C_1978, r_FMT2(rt_str("@@.hi[i]; }", 11), l_C_1978, l_X_1975), 0);
}
else
{
S_R9(&l_C_1978, r_FMT4(rt_str("@ @.p[i] = @.hi[i] >= @.lo[i] \? ", 32), l_C_1978, l_R_1976, l_X_1975, l_X_1975), 0);
S_R9(&l_C_1978, r_FMT4(rt_str("@@.hi[i] - @.lo[i] + 1 : 0; }", 29), l_C_1978, l_X_1975, l_X_1975, l_X_1975), 0);
}
{ R26 rv1981 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_C_1978, l_R_1976), l_A_1980);
return rv1981; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_LIT_NODE_T(R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
{ R17 * rv1982 = r_LIT_NODE(r_STR(p_NAME, (p_NAME).f_LEN), p_LINE);
return rv1982; }
rt_raise(RT_X_INIT);
}
static R17 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_N_1983; memset(&l_N_1983, 0, sizeof l_N_1983);
l_N_1983 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1983))).f_NAME, r_MKN(p_NAME), 0);
{ R17 * rv1984 = l_N_1983;
return rv1984; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R9 p_C) { RT_B_TICK(); 
rt_int l_K_1985; memset(&l_K_1985, 0, sizeof l_K_1985);
l_K_1985 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1985 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv1986 = r_MKET((r_EXPR(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1986; }
}
}
{ R26 rv1987 = r_INT_ET(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1987; }
}
else if ((l_K_1985 == g_T_FLOAT))
{
{ R26 rv1988 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1988; }
}
else if ((l_K_1985 == g_T_BOOL))
{
{ R26 rv1989 = r_INT_ET(((rt_int)1LL));
return rv1989; }
}
else if ((l_K_1985 == g_T_ENUM))
{
{ R26 rv1990 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1990; }
}
else if ((l_K_1985 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1991 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1991; }
}
{ R26 rv1992 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1992; }
}
else if ((l_K_1985 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R26 rv1993 = r_INT_ET((r_STATIC_SIZE(p_T)).f_V);
return rv1993; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1994 = r_MKET(r_FMT3(rt_str("rt_b_pack_size(@, @, @)", 23), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C, r_NUM(r_CHAR_SIZE(p_T)), r_NUM(r_PACKING_OF(p_T))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1994; }
}
{ R26 rv1995 = r_MKET(r_FMT3(rt_str("rt_b_pack_size((@).len, @, @)", 29), p_C, r_NUM(r_CHAR_SIZE(p_T)), r_NUM(r_PACKING_OF(p_T))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1995; }
}
else if (((l_K_1985 == g_T_PTR) || (l_K_1985 == g_T_SEM)))
{
{ R26 rv1996 = r_INT_ET(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1996; }
}
else if ((l_K_1985 == g_T_ABS))
{
{ R26 rv1997 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1997; }
}
else if ((l_K_1985 == g_T_REC))
{
{ R26 rv1998 = r_MKET(r_RECORD_SIZE(p_T, p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1998; }
}
else if ((l_K_1985 == g_T_ARR))
{
{
R23 l_ES_1999; memset(&l_ES_1999, 0, sizeof l_ES_1999);
S_R23(&l_ES_1999, r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM), 0);
if ((l_ES_1999).f_OK)
{
{ R26 rv2000 = r_MKET(r_CAT(r_FMT3(rt_str("rt_b_pack_size(rt_b_extent(@, (@).lo, (@).hi), ", 47), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C), r_FMT2(rt_str("@, @)", 5), r_NUM((l_ES_1999).f_V), r_NUM(r_PACKING_OF(p_T)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2000; }
}
}
{ R26 rv2001 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2001; }
}
{ R26 rv2002 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2002; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R9 p_TNAME, R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{ R26 rv2003 = r_ATTRIBUTE(r_TYPE_VALUE(p_TNAME, p_LINE), p_NAME, p_LINE);
return rv2003; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE(R9 p_TNAME, rt_int p_LINE) { RT_B_TICK(); 
{ R26 rv2004 = r_TYPE_VALUE_OF(r_RESOLVE_USER_NAME(p_TNAME, p_LINE));
return rv2004; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_2005; memset(&l_RT_2005, 0, sizeof l_RT_2005);
l_RT_2005 = r_REAL_TYPE(p_T);
if (((((*(R22 *)rt_nil_check(l_RT_2005))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(l_RT_2005))).f_KIND == g_T_REC)))
{
{
R9 l_TMP_2006; memset(&l_TMP_2006, 0, sizeof l_TMP_2006);
S_R9(&l_TMP_2006, r_NEW_NAME(rt_str("tq", 2)), 0);
R9 l_C_2007; memset(&l_C_2007, 0, sizeof l_C_2007);
S_R9(&l_C_2007, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), r_CTYPE(p_T), l_TMP_2006, l_TMP_2006, l_TMP_2006), 0);
S_R9(&l_C_2007, r_FMT3(rt_str("@@ @; })", 8), l_C_2007, r_INIT_CODE(l_RT_2005, l_TMP_2006), l_TMP_2006), 0);
{ R26 rv2008 = r_MKET(l_C_2007, p_T);
return rv2008; }
}
}
{ R26 rv2009 = r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(p_T)), p_T);
return rv2009; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_NAME(R17 * p_E) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{ rt_int rv2010 = 0;
return rv2010; }
}
{
R12 * l_Y_2011; memset(&l_Y_2011, 0, sizeof l_Y_2011);
l_Y_2011 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_2011 == NULL))
{
{ rt_int rv2012 = 0;
return rv2012; }
}
{ rt_int rv2013 = (((*(R12 *)rt_nil_check(l_Y_2011))).f_KIND == g_Y_TYPE);
return rv2013; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R9 p_TNAME, R9 p_A, R9 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv2014 = r_INT_ET(((rt_int)100000000LL));
return rv2014; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv2015 = r_INT_ET(((rt_int)15LL));
return rv2015; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv2016 = r_INT_ET(((rt_int)0LL));
return rv2016; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R22 * l_T_2017; memset(&l_T_2017, 0, sizeof l_T_2017);
l_T_2017 = p_WANT;
if ((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_2017 = r_RESOLVE(((*(R17 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_2017 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_2017 = r_REAL_TYPE(l_T_2017);
if ((!(((*(R22 *)rt_nil_check(l_T_2017))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_2017))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R9 l_TMP_2018; memset(&l_TMP_2018, 0, sizeof l_TMP_2018);
S_R9(&l_TMP_2018, r_NEW_NAME(rt_str("rc", 2)), 0);
R9 l_R_2019; memset(&l_R_2019, 0, sizeof l_R_2019);
S_R9(&l_R_2019, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_2017))).f_CNAME, l_TMP_2018, l_TMP_2018, l_TMP_2018), 0);
R24 * l_F_2020; memset(&l_F_2020, 0, sizeof l_F_2020);
l_F_2020 = ((*(R22 *)rt_nil_check(l_T_2017))).f_FIELDS;
S_R9(&l_R_2019, r_FMT2(rt_str("@@", 2), l_R_2019, r_INIT_CODE(l_T_2017, l_TMP_2018)), 0);
for (;;) {
if ((l_F_2020 == NULL)) goto L_end2021;
{
if ((((*(R24 *)rt_nil_check(l_F_2020))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R24 *)rt_nil_check(l_F_2020))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_2020))).f_LABELS, (r_TAG_VALUE(l_T_2017, ((*(R24 *)rt_nil_check(l_F_2020))).f_TAGF)).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_T_2017, ((*(R24 *)rt_nil_check(l_F_2020))).f_TAGF)))).f_T)))
{
{
R17 * l_INIT_2022; memset(&l_INIT_2022, 0, sizeof l_INIT_2022);
l_INIT_2022 = r_FIND_INIT(((*(R17 *)rt_nil_check(p_E))).f_A, ((*(R24 *)rt_nil_check(l_F_2020))).f_NAME);
if ((l_INIT_2022 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R24 *)rt_nil_check(l_F_2020))).f_NAME);
}
S_R9(&l_R_2019, r_FMT2(rt_str("@ @", 3), l_R_2019, r_STORE_CODE(((*(R24 *)rt_nil_check(l_F_2020))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_2018, ((*(R24 *)rt_nil_check(l_F_2020))).f_CNAME), r_EXPR(((*(R17 *)rt_nil_check(l_INIT_2022))).f_A, ((*(R24 *)rt_nil_check(l_F_2020))).f_T), ((*(R17 *)rt_nil_check(l_INIT_2022))).f_LINE, l_TMP_2018)), 0);
}
}
}
l_F_2020 = ((*(R24 *)rt_nil_check(l_F_2020))).f_NEXT;
}
RT_B_TICK();
} L_end2021: ;
{
R17 * l_P_2023; memset(&l_P_2023, 0, sizeof l_P_2023);
l_P_2023 = ((*(R17 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_2023 == NULL)) goto L_end2024;
{
{
R24 * l_G_2025; memset(&l_G_2025, 0, sizeof l_G_2025);
l_G_2025 = r_FIND_VFIELD(l_T_2017, ((*(R17 *)rt_nil_check(l_P_2023))).f_NAME);
if ((l_G_2025 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_2023))).f_LINE, rt_str("no such field: ", 15), ((*(R17 *)rt_nil_check(l_P_2023))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_G_2025))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_2023))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R17 *)rt_nil_check(l_P_2023))).f_NAME);
}
r_CHECK_VARIANT(l_G_2025, l_T_2017, NULL, ((*(R17 *)rt_nil_check(l_P_2023))).f_LINE);
}
l_P_2023 = ((*(R17 *)rt_nil_check(l_P_2023))).f_NEXT;
}
RT_B_TICK();
} L_end2024: ;
}
{ R26 rv2026 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_2019, l_TMP_2018), l_T_2017);
return rv2026; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_FIND_INIT(R17 * p_L, R9 p_NAME) { RT_B_TICK(); 
R17 * l_P_2027; memset(&l_P_2027, 0, sizeof l_P_2027);
l_P_2027 = p_L;
for (;;) {
if ((l_P_2027 == NULL)) goto L_end2028;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_2027))).f_NAME, p_NAME))
{
{ R17 * rv2029 = l_P_2027;
return rv2029; }
}
l_P_2027 = ((*(R17 *)rt_nil_check(l_P_2027))).f_NEXT;
}
RT_B_TICK();
} L_end2028: ;
{ R17 * rv2030 = NULL;
return rv2030; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_DIMS_2031; memset(&l_DIMS_2031, 0, sizeof l_DIMS_2031);
l_DIMS_2031 = ((rt_int)0LL);
R17 * l_P_2032; memset(&l_P_2032, 0, sizeof l_P_2032);
l_P_2032 = p_E;
R22 * l_ELEM_2033; memset(&l_ELEM_2033, 0, sizeof l_ELEM_2033);
l_ELEM_2033 = NULL;
for (;;) {
if ((!(((*(R17 *)rt_nil_check(l_P_2032))).f_KIND == g_N_ARRCONS))) goto L_end2034;
{
l_DIMS_2031 = rt_add(l_DIMS_2031, ((rt_int)1LL));
l_P_2032 = ((*(R17 *)rt_nil_check(l_P_2032))).f_A;
}
RT_B_TICK();
} L_end2034: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_2033 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_2033 == NULL))
{
l_ELEM_2033 = (r_EXPR(l_P_2032, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_2033))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_2033))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_2033 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
r_CHECK_SHAPE(p_E, l_DIMS_2031);
{
R22 * l_A_2035; memset(&l_A_2035, 0, sizeof l_A_2035);
l_A_2035 = r_ARRAY_OF(l_ELEM_2033, l_DIMS_2031);
R9 l_TMP_2036; memset(&l_TMP_2036, 0, sizeof l_TMP_2036);
S_R9(&l_TMP_2036, r_NEW_NAME(rt_str("ac", 2)), 0);
R9 l_R_2037; memset(&l_R_2037, 0, sizeof l_R_2037);
S_R9(&l_R_2037, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_2035))).f_CNAME, l_TMP_2036, l_TMP_2036), 0);
rt_int l_K_2038; memset(&l_K_2038, 0, sizeof l_K_2038);
l_K_2038 = ((rt_int)0LL);
{
R17 * l_Q_2039; memset(&l_Q_2039, 0, sizeof l_Q_2039);
l_Q_2039 = p_E;
R25 * l_TAIL_2040; memset(&l_TAIL_2040, 0, sizeof l_TAIL_2040);
l_TAIL_2040 = NULL;
{ rt_int it2042_lo = ((rt_int)1LL), it2042_hi = l_DIMS_2031;
for (rt_int it2042 = it2042_lo; it2042 <= it2042_hi; it2042++) {
{
{
R25 * l_B_2043; memset(&l_B_2043, 0, sizeof l_B_2043);
l_B_2043 = ((R25 *)rt_b_new(sizeof (R25)));
rt_int l_N_2044; memset(&l_N_2044, 0, sizeof l_N_2044);
l_N_2044 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(l_Q_2039))).f_A);
S_R25(&(*(R25 *)rt_nil_check(l_B_2043)), ({ R25 rc2045; memset(&rc2045, 0, sizeof rc2045);  S_R9(&rc2045.f_LO, r_MK(rt_str("0", 1)), 0); S_R9(&rc2045.f_HI, r_NUM(rt_sub(l_N_2044, ((rt_int)1LL))), 0); S_R23(&rc2045.f_MLO, r_SOME(((rt_int)0LL)), 0); S_R23(&rc2045.f_MHI, r_SOME(rt_sub(l_N_2044, ((rt_int)1LL))), 0); rc2045.f_ANYARG = 0; rc2045.f_NEXT = NULL; rc2045; }), 0);
if ((l_TAIL_2040 == NULL))
{
((*(R22 *)rt_nil_check(l_A_2035))).f_BOUNDS = l_B_2043;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_2040))).f_NEXT = l_B_2043;
}
l_TAIL_2040 = l_B_2043;
}
l_Q_2039 = ((*(R17 *)rt_nil_check(l_Q_2039))).f_A;
}
RT_B_TICK();
if (it2042 == it2042_hi) break;
} } L_end2041: ;
}
S_R9(&l_R_2037, r_FMT2(rt_str("@@); ", 5), l_R_2037, l_TMP_2036), 0);
l_P_2032 = p_E;
{ rt_int it2047_lo = ((rt_int)0LL), it2047_hi = rt_sub(l_DIMS_2031, ((rt_int)1LL));
for (rt_int it2047 = it2047_lo; it2047 <= it2047_hi; it2047++) {
{
S_R9(&l_R_2037, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_2037, l_TMP_2036, r_NUM(it2047), l_TMP_2036), 0);
S_R9(&l_R_2037, r_FMT3(rt_str("@@] = @;", 8), l_R_2037, r_NUM(it2047), r_NUM(rt_sub(r_LIST_LENGTH(((*(R17 *)rt_nil_check(l_P_2032))).f_A), ((rt_int)1LL)))), 0);
l_P_2032 = ((*(R17 *)rt_nil_check(l_P_2032))).f_A;
}
RT_B_TICK();
if (it2047 == it2047_hi) break;
} } L_end2046: ;
S_R9(&l_R_2037, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_2037, l_TMP_2036, l_TMP_2036, r_NUM(l_DIMS_2031)), 0);
S_R9(&l_R_2037, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_2037, l_TMP_2036, l_TMP_2036), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_2031, l_A_2035, l_TMP_2036, &l_R_2037, &l_K_2038);
{ R26 rv2048 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_2037, l_TMP_2036), l_A_2035);
return rv2048; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_SHAPE(R17 * p_E, rt_int p_DIMS) { RT_B_TICK(); 
R17 * l_P_2049; memset(&l_P_2049, 0, sizeof l_P_2049);
l_P_2049 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((p_DIMS <= ((rt_int)1LL)))
{
return;
}
for (;;) {
if ((l_P_2049 == NULL)) goto L_end2050;
{
if (((!(((*(R17 *)rt_nil_check(l_P_2049))).f_KIND == g_N_ARRCONS)) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_ARRCONS))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
if ((!r_SAME_SHAPE(l_P_2049, ((*(R17 *)rt_nil_check(p_E))).f_A)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
r_CHECK_SHAPE(l_P_2049, rt_sub(p_DIMS, ((rt_int)1LL)));
l_P_2049 = ((*(R17 *)rt_nil_check(l_P_2049))).f_NEXT;
}
RT_B_TICK();
} L_end2050: ;
}
static rt_int r_SAME_SHAPE(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
if (((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) || (!(((*(R17 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS))))
{
{ rt_int rv2051 = ((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) && (!(((*(R17 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS)));
return rv2051; }
}
if ((!(r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_A))).f_A) == r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_B))).f_A))))
{
{ rt_int rv2052 = 0;
return rv2052; }
}
{ rt_int rv2053 = r_SAME_SHAPE(((*(R17 *)rt_nil_check(p_A))).f_A, ((*(R17 *)rt_nil_check(p_B))).f_A);
return rv2053; }
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R17 * p_E, rt_int p_DIMS, R22 * p_A, R9 p_TMP, R9 *p_R, rt_int *p_K) { RT_B_TICK(); 
R17 * l_P_2054; memset(&l_P_2054, 0, sizeof l_P_2054);
l_P_2054 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_2054 == NULL)) goto L_end2055;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_2054, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R17 *)rt_nil_check(l_P_2054))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2054))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R9(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R9(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_2054, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R17 *)rt_nil_check(l_P_2054))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_2054 = ((*(R17 *)rt_nil_check(l_P_2054))).f_NEXT;
}
RT_B_TICK();
} L_end2055: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R22 * l_T_2056; memset(&l_T_2056, 0, sizeof l_T_2056);
l_T_2056 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_2056))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_2056))).f_DIMS = p_DIMS;
S_R9(&((*(R22 *)rt_nil_check(l_T_2056))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv2057 = l_T_2056;
return rv2057; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R17 * p_E) { RT_B_TICK(); 
R22 * l_T_2058; memset(&l_T_2058, 0, sizeof l_T_2058);
l_T_2058 = r_RESOLVE(((*(R17 *)rt_nil_check(p_E))).f_A);
R26 l_V_2059; memset(&l_V_2059, 0, sizeof l_V_2059);
S_R26(&l_V_2059, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, l_T_2058), 0);
R22 * l_RT_2060; memset(&l_RT_2060, 0, sizeof l_RT_2060);
l_RT_2060 = r_REAL_TYPE(l_T_2058);
if (((((*(R22 *)rt_nil_check((l_V_2059).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_2060))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R22 *)rt_nil_check(l_RT_2060))).f_KIND == g_T_INT))
{
{ R26 rv2061 = r_MKET(r_RANGE_CHECK(l_RT_2060, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_2059).f_C), r_NO_TEXT()), l_T_2058);
return rv2061; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_2060))).f_KIND == g_T_BOOL))
{
{ R26 rv2062 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_2059).f_C), l_T_2058);
return rv2062; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_2060))).f_KIND == g_T_ENUM))
{
{ R26 rv2063 = r_MKET(r_ENUM_OF_BITS(l_RT_2060, (l_V_2059).f_C), l_T_2058);
return rv2063; }
}
else if (r_IS_D(l_RT_2060))
{
{ R26 rv2064 = r_MKET(r_FMT1(rt_str("rt_b_d_of_bits(@)", 17), (l_V_2059).f_C), l_T_2058);
return rv2064; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_2060))).f_KIND == g_T_FLOAT) && (((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL))))
{
{ R26 rv2065 = r_MKET(r_FMT1(rt_str("rt_b_f_of_bits(@)", 17), (l_V_2059).f_C), l_T_2058);
return rv2065; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_2060))).f_KIND == g_T_FLOAT))
{
{ R26 rv2066 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_2059).f_C), l_T_2058);
return rv2066; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_2060))).f_KIND == g_T_STR))
{
{ R26 rv2067 = r_MKET(r_FMT4(rt_str("rt_b_chars_of_bits(@, @, @, @)", 30), (l_V_2059).f_C, r_NUM(r_CHAR_SIZE(l_RT_2060)), r_NUM(r_PACKING_OF(l_RT_2060)), r_CHAR_REPS(l_RT_2060)), l_T_2058);
return rv2067; }
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{
R9 l_C_2068; memset(&l_C_2068, 0, sizeof l_C_2068);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 1;
S_R9(&l_C_2068, r_CONVERT(l_V_2059, l_T_2058, ((*(R17 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), 0);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 0;
if ((((((((*(R22 *)rt_nil_check(l_RT_2060))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_2060))).f_KIND == g_T_BITS))) && ((((*(R22 *)rt_nil_check(l_RT_2060))).f_LEN_C).f_LEN > ((rt_int)0LL))) && (!(((((*(R22 *)rt_nil_check(l_RT_2060))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check((l_V_2059).f_T))).f_MLEN).f_OK)))))
{
S_R9(&l_C_2068, r_FMT2(rt_str("rt_b_tlen(@, @)", 15), l_C_2068, ((*(R22 *)rt_nil_check(l_RT_2060))).f_LEN_C), 0);
}
{ R26 rv2069 = r_MKET(l_C_2068, l_T_2058);
return rv2069; }
}
rt_raise(RT_X_INIT);
}
static R9 r_ENUM_OF_BITS(R22 * p_T, R9 p_C) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R9 rv2070 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv2070; }
}
}
{ R9 rv2071 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv2071; }
rt_raise(RT_X_INIT);
}
static R9 r_REP_TABLE(R22 * p_T) { RT_B_TICK(); 
R9 l_NAME_2072; memset(&l_NAME_2072, 0, sizeof l_NAME_2072);
S_R9(&l_NAME_2072, r_NEW_NAME(rt_str("reps", 4)), 0);
R17 * l_L_2073; memset(&l_L_2073, 0, sizeof l_L_2073);
l_L_2073 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R9 l_R_2074; memset(&l_R_2074, 0, sizeof l_R_2074);
S_R9(&l_R_2074, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_2073 == NULL)) goto L_end2075;
{
{
R17 * l_V_2076; memset(&l_V_2076, 0, sizeof l_V_2076);
l_V_2076 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_2077; memset(&l_FOUND_2077, 0, sizeof l_FOUND_2077);
l_FOUND_2077 = 0;
for (;;) {
if ((l_V_2076 == NULL)) goto L_end2078;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_V_2076))).f_NAME, ((*(R17 *)rt_nil_check(l_L_2073))).f_NAME))
{
S_R9(&l_R_2074, r_FMT2(rt_str("@@, ", 4), l_R_2074, (r_EXPR(((*(R17 *)rt_nil_check(l_V_2076))).f_A, NULL)).f_C), 0);
l_FOUND_2077 = 1;
}
l_V_2076 = ((*(R17 *)rt_nil_check(l_V_2076))).f_NEXT;
}
RT_B_TICK();
} L_end2078: ;
if ((!l_FOUND_2077))
{
r_FAILT(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R17 *)rt_nil_check(l_L_2073))).f_NAME);
}
}
l_L_2073 = ((*(R17 *)rt_nil_check(l_L_2073))).f_NEXT;
}
RT_B_TICK();
} L_end2075: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_2072, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_2074, l_NAME_2072, l_NAME_2072));
{ R9 rv2079 = r_FMT2(rt_str("@, @", 4), l_NAME_2072, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv2079; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SEM_2080; memset(&l_SEM_2080, 0, sizeof l_SEM_2080);
l_SEM_2080 = r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(((*(R7 *)rt_nil_check(g_W))).f_NEW_OK == p_E))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("NEW without PTR$ or SEMAPHORE$ only initializes a declaration or is the source ", 79), rt_str("of an assignment (3.10.2, 3.11.2)", 33)));
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_2080 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_2080)
{
{
R22 * l_T_2081; memset(&l_T_2081, 0, sizeof l_T_2081);
l_T_2081 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_2081 = p_WANT;
}
}
{ R26 rv2082 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_2081))).f_SCALE)), l_T_2081);
return rv2082; }
}
}
{
R22 * l_T_2083; memset(&l_T_2083, 0, sizeof l_T_2083);
l_T_2083 = r_RESOLVE(r_EXPR_TO_TS(((*(R17 *)rt_nil_check(p_E))).f_A));
R22 * l_P_2084; memset(&l_P_2084, 0, sizeof l_P_2084);
l_P_2084 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_2084))).f_TARGET = l_T_2083;
((*(R22 *)rt_nil_check(l_P_2084))).f_TARGET_TS = ((*(R17 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_2083))
{
{ R26 rv2085 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_b_new(sizeof *p); @ p; })", 38), r_CTYPE(l_T_2083), r_INIT_CODE(l_T_2083, r_MK(rt_str("(*p)", 4)))), l_P_2084);
return rv2085; }
}
{ R26 rv2086 = r_MKET(r_FMT2(rt_str("((@ *)rt_b_new(sizeof (@)))", 27), r_CTYPE(l_T_2083), r_CTYPE(l_T_2083)), l_P_2084);
return rv2086; }
}
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_CONV(R26 p_V, R22 * p_T, R9 p_TR) { RT_B_TICK(); 
if (r_IS_D(p_T))
{
{ R9 rv2087 = r_AS_D(p_V);
return rv2087; }
}
else if (r_IS_D((p_V).f_T))
{
{ R9 rv2088 = r_FMT2(rt_str("rt_b_single_of_d(@, @, 0)", 25), (p_V).f_C, p_TR);
return rv2088; }
}
{ R9 rv2089 = r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (p_V).f_C, r_SINGLE_C(((*(R22 *)rt_nil_check(p_T))).f_SCALE), p_TR);
return rv2089; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_LIMIT(R22 * p_T, R9 p_WHICH) { RT_B_TICK(); 
R9 l_C_2090; memset(&l_C_2090, 0, sizeof l_C_2090);
S_R9(&l_C_2090, r_MK(rt_str("DBL", 3)), 0);
if (r_IS_D(p_T))
{
if (r_TEQS(p_WHICH, rt_str("MIN", 3)))
{
{ R9 rv2091 = r_MK(rt_str("rt_b_dneg(rt_b_dmax())", 22));
return rv2091; }
}
else if (r_TEQS(p_WHICH, rt_str("MAX", 3)))
{
{ R9 rv2092 = r_MK(rt_str("rt_b_dmax()", 11));
return rv2092; }
}
{ R9 rv2093 = r_MK(rt_str("rt_b_deps()", 11));
return rv2093; }
}
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(p_T))).f_SCALE) == ((rt_int)7LL)))
{
S_R9(&l_C_2090, r_MK(rt_str("FLT", 3)), 0);
}
if (((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)) && (!r_TEQS(p_WHICH, rt_str("EPSILON", 7)))))
{
if (r_TEQS(p_WHICH, rt_str("MIN", 3)))
{
{ R9 rv2094 = r_MK(rt_str("(-0x1.fffffep+126)", 18));
return rv2094; }
}
{ R9 rv2095 = r_MK(rt_str("0x1.fffffep+126", 15));
return rv2095; }
}
if (r_TEQS(p_WHICH, rt_str("MIN", 3)))
{
{ R9 rv2096 = r_FMT1(rt_str("(-@_MAX)", 8), l_C_2090);
return rv2096; }
}
else if (r_TEQS(p_WHICH, rt_str("MAX", 3)))
{
{ R9 rv2097 = r_FMT1(rt_str("@_MAX", 5), l_C_2090);
return rv2097; }
}
{ R9 rv2098 = r_FMT1(rt_str("@_EPSILON", 9), l_C_2090);
return rv2098; }
rt_raise(RT_X_INIT);
}
static R17 * r_NTH(R17 * p_L, rt_int p_K) { RT_B_TICK(); 
R17 * l_P_2099; memset(&l_P_2099, 0, sizeof l_P_2099);
l_P_2099 = p_L;
{ rt_int it2101_lo = ((rt_int)1LL), it2101_hi = p_K;
for (rt_int it2101 = it2101_lo; it2101 <= it2101_hi; it2101++) {
{
if ((!(l_P_2099 == NULL)))
{
l_P_2099 = ((*(R17 *)rt_nil_check(l_P_2099))).f_NEXT;
}
}
RT_B_TICK();
if (it2101 == it2101_hi) break;
} } L_end2100: ;
{ R17 * rv2102 = l_P_2099;
return rv2102; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R17 * p_E, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
rt_int l_N_2103; memset(&l_N_2103, 0, sizeof l_N_2103);
l_N_2103 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A);
if (((l_N_2103 < p_LO) || (l_N_2103 > p_HI)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
}
static R9 r_ROUNDING_ARG(R17 * p_E, rt_int p_N) { RT_B_TICK(); 
R17 * l_L_2104; memset(&l_L_2104, 0, sizeof l_L_2104);
l_L_2104 = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_2104 == NULL)))
{
if (((((*(R17 *)rt_nil_check(l_L_2104))).f_KIND == g_N_QUAL) && ((((*(R17 *)rt_nil_check(l_L_2104))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_L_2104))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R9 rv2105 = r_MK(rt_str("1", 1));
return rv2105; }
}
{ R9 rv2106 = r_MK(rt_str("0", 1));
return rv2106; }
}
if (((((*(R17 *)rt_nil_check(l_L_2104))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_L_2104))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_L_2104))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R9 rv2107 = r_MK(rt_str("1", 1));
return rv2107; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_L_2104))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R9 rv2108 = r_MK(rt_str("0", 1));
return rv2108; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R9 rv2109 = r_MK(rt_str("1", 1));
return rv2109; }
}
{ R9 rv2110 = r_MK(rt_str("0", 1));
return rv2110; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R17 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv2111 = 0;
return rv2111; }
}
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv2112 = (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv2112; }
}
{ rt_int rv2113 = 0;
return rv2113; }
rt_raise(RT_X_INIT);
}
static R17 * r_ARG_EXPR(R17 * p_E) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R17 * rv2114 = ((*(R17 *)rt_nil_check(p_E))).f_A;
return rv2114; }
}
{ R17 * rv2115 = p_E;
return rv2115; }
rt_raise(RT_X_INIT);
}
static R9 r_OPERATOR_SYMBOL(R9 p_NAME) { RT_B_TICK(); 
rstr l_NAMES_2116; memset(&l_NAMES_2116, 0, sizeof l_NAMES_2116);
l_NAMES_2116 = rt_b_str_new(((rt_int)299LL), 0);
rt_b_assign(&l_NAMES_2116, rt_str(" ADD_:+ SUBTRACT_:- MULTIPLY_:* DIVIDE_:/ MODULUS_:MOD EXPONENTIATE_:** CONCATENATE_:!! EQUAL_:= UNEQUAL_:<> GREATER_THAN_:> LESS_THAN_:< GREATER_EQUAL_:>= LESS_EQUAL_:<= AND_:AND OR_:OR XOR_:XOR IMPLIES_:-> MD_ADD_:+ MD_SUBTRACT_:- MD_MULTIPLY_:* MD_DIVIDE_:/ NEGATE_:- MON_PLUS_:+ COMPLEMENT_:NOT ", 299));
rt_int l_L_2117; memset(&l_L_2117, 0, sizeof l_L_2117);
l_L_2117 = (p_NAME).f_LEN;
{ rt_int it2119_lo = ((rt_int)0LL), it2119_hi = rt_sub(rt_sub(((rt_int)299LL), l_L_2117), ((rt_int)2LL));
for (rt_int it2119 = it2119_lo; it2119 <= it2119_hi; it2119++) {
{
if ((rt_b_eq(rt_b_slice(l_NAMES_2116, it2119, it2119), rt_str(" ", 1)) && rt_b_eq(rt_b_slice(l_NAMES_2116, rt_add(rt_add(it2119, l_L_2117), ((rt_int)1LL)), rt_add(rt_add(it2119, l_L_2117), ((rt_int)1LL))), rt_str(":", 1))))
{
if (rt_b_eq(rt_b_slice(l_NAMES_2116, rt_add(it2119, ((rt_int)1LL)), rt_add(it2119, l_L_2117)), r_STR(p_NAME, l_L_2117)))
{
{
rt_int l_J_2120; memset(&l_J_2120, 0, sizeof l_J_2120);
l_J_2120 = rt_add(rt_add(it2119, l_L_2117), ((rt_int)2LL));
for (;;) {
if (rt_b_eq(rt_b_slice(l_NAMES_2116, l_J_2120, l_J_2120), rt_str(" ", 1))) goto L_end2121;
{
l_J_2120 = rt_add(l_J_2120, ((rt_int)1LL));
}
RT_B_TICK();
} L_end2121: ;
{ R9 rv2122 = r_MKN(rt_b_slice(l_NAMES_2116, rt_add(rt_add(it2119, l_L_2117), ((rt_int)2LL)), rt_sub(l_J_2120, ((rt_int)1LL))));
return rv2122; }
}
}
}
}
RT_B_TICK();
if (it2119 == it2119_hi) break;
} } L_end2118: ;
{ R9 rv2123 = r_NO_TEXT();
return rv2123; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_BUILTIN(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R9 l_NAME_2124; memset(&l_NAME_2124, 0, sizeof l_NAME_2124);
S_R9(&l_NAME_2124, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2125; memset(&l_LINE_2125, 0, sizeof l_LINE_2125);
l_LINE_2125 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
rt_int l_N_2126; memset(&l_N_2126, 0, sizeof l_N_2126);
l_N_2126 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A);
if ((r_TEQS(l_NAME_2124, rt_str("STORE_", 6)) || r_TEQS(l_NAME_2124, rt_str("SUBSTRING_STORE_", 16))))
{
{
R17 * l_TGT_2127; memset(&l_TGT_2127, 0, sizeof l_TGT_2127);
l_TGT_2127 = r_FIRST_OUT_ARG(p_E);
R17 * l_S_2128; memset(&l_S_2128, 0, sizeof l_S_2128);
l_S_2128 = r_NEW_NODE(g_N_ASSIGN, l_LINE_2125);
R17 * l_SRC_2129; memset(&l_SRC_2129, 0, sizeof l_SRC_2129);
l_SRC_2129 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if (((l_TGT_2127 == NULL) || (l_SRC_2129 == NULL)))
{
r_FAILT(l_LINE_2125, rt_str("the wrong arguments for ", 24), l_NAME_2124);
}
if (r_TEQS(l_NAME_2124, rt_str("STORE_", 6)))
{
((*(R17 *)rt_nil_check(l_S_2128))).f_A = l_TGT_2127;
}
else
{
if ((l_N_2126 < ((rt_int)3LL)))
{
r_FAIL(l_LINE_2125, rt_str("SUBSTRING_STORE_ (V, L, U # X) (D.5)", 36));
}
((*(R17 *)rt_nil_check(l_S_2128))).f_A = r_NEW_NODE(g_N_SUBSTR, l_LINE_2125);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_2128))).f_A))).f_A = l_TGT_2127;
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_2128))).f_A))).f_B = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_2128))).f_A))).f_C = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
}
((*(R17 *)rt_nil_check(l_S_2128))).f_B = r_QUALIFIED(r_COPY_NODE(l_SRC_2129), r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, rt_add(((rt_int)1LL), rt_mul(((rt_int)2LL), r_BOOL_INT(r_TEQS(l_NAME_2124, rt_str("SUBSTRING_STORE_", 16)))))), l_LINE_2125);
{
R14 l_SAVED_CODE_2130; memset(&l_SAVED_CODE_2130, 0, sizeof l_SAVED_CODE_2130);
S_R14(&l_SAVED_CODE_2130, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R9 l_C_2131; memset(&l_C_2131, 0, sizeof l_C_2131);
S_R9(&l_C_2131, r_MK(rt_str("({", 2)), 0);
R15 * l_P_2132; memset(&l_P_2132, 0, sizeof l_P_2132);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2133; memset(&rc2133, 0, sizeof rc2133);  rc2133.f_HEAD = NULL; rc2133.f_TAIL = NULL; rc2133; }), 0);
r_ASSIGN_STMT(l_S_2128);
l_P_2132 = (((*(R7 *)rt_nil_check(g_W))).f_CODE).f_HEAD;
for (;;) {
if ((l_P_2132 == NULL)) goto L_end2134;
{
S_R9(&l_C_2131, r_FMT2(rt_str("@ @", 3), l_C_2131, ((*(R15 *)rt_nil_check(l_P_2132))).f_T), 0);
l_P_2132 = ((*(R15 *)rt_nil_check(l_P_2132))).f_NEXT;
}
RT_B_TICK();
} L_end2134: ;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2130, 0);
{ R26 rv2135 = r_MKET(r_CATS(l_C_2131, rt_str(" })", 3)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2135; }
}
}
}
if (r_TEQS(l_NAME_2124, rt_str("SUBSTRING_", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R17 * l_S_2136; memset(&l_S_2136, 0, sizeof l_S_2136);
l_S_2136 = r_NEW_NODE(g_N_SUBSTR, l_LINE_2125);
((*(R17 *)rt_nil_check(l_S_2136))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_A;
((*(R17 *)rt_nil_check(l_S_2136))).f_B = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R17 *)rt_nil_check(l_S_2136))).f_C = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
((*(R17 *)rt_nil_check(l_S_2136))).f_A = r_COPY_NODE(((*(R17 *)rt_nil_check(p_E))).f_A);
{ R26 rv2137 = r_EXPR(l_S_2136, p_WANT);
return rv2137; }
}
}
{
R9 l_SYM__2138; memset(&l_SYM__2138, 0, sizeof l_SYM__2138);
S_R9(&l_SYM__2138, r_OPERATOR_SYMBOL(l_NAME_2124), 0);
rt_int l_UNARY_OP_2139; memset(&l_UNARY_OP_2139, 0, sizeof l_UNARY_OP_2139);
l_UNARY_OP_2139 = ((r_TEQS(l_NAME_2124, rt_str("NEGATE_", 7)) || r_TEQS(l_NAME_2124, rt_str("MON_PLUS_", 9))) || r_TEQS(l_NAME_2124, rt_str("COMPLEMENT_", 11)));
R17 * l_X_2140; memset(&l_X_2140, 0, sizeof l_X_2140);
if (l_UNARY_OP_2139)
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)3LL));
l_X_2140 = r_NEW_NODE(g_N_UNOP, l_LINE_2125);
S_R9(&((*(R17 *)rt_nil_check(l_X_2140))).f_NAME, l_SYM__2138, 0);
((*(R17 *)rt_nil_check(l_X_2140))).f_A = r_COPY_NODE(((*(R17 *)rt_nil_check(p_E))).f_A);
{ R26 rv2141 = r_EXPR(r_QUALIFIED(l_X_2140, r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), l_LINE_2125), p_WANT);
return rv2141; }
}
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)4LL));
l_X_2140 = r_BIN_NODE(l_SYM__2138, l_LINE_2125, r_COPY_NODE(((*(R17 *)rt_nil_check(p_E))).f_A), r_COPY_NODE(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))));
if (r_TEQS(l_SYM__2138, rt_str("/", 1)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL)).f_T)))).f_KIND == g_T_FLOAT)))
{
S_R9(&((*(R17 *)rt_nil_check(l_X_2140))).f_NAME, r_MK(rt_str("//", 2)), 0);
}
}
if (rt_b_eq(rt_b_slice(r_STR(l_NAME_2124, (l_NAME_2124).f_LEN), ((rt_int)0LL), ((rt_int)2LL)), rt_str("MD_", 3)))
{
((*(R17 *)rt_nil_check(l_X_2140))).f_FL = ((rt_int)2LL);
}
{ R26 rv2142 = r_EXPR(r_QUALIFIED(l_X_2140, r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_2125), p_WANT);
return rv2142; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_QUALIFIED(R17 * p_X, R17 * p_Q, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_2143; memset(&l_R_2143, 0, sizeof l_R_2143);
l_R_2143 = p_X;
R17 * l_P_2144; memset(&l_P_2144, 0, sizeof l_P_2144);
l_P_2144 = p_Q;
for (;;) {
if ((l_P_2144 == NULL)) goto L_end2145;
{
if ((l_R_2143 == p_X))
{
l_R_2143 = r_NEW_NODE(g_N_QUAL, p_LINE);
((*(R17 *)rt_nil_check(l_R_2143))).f_A = p_X;
}
if (((((((*(R17 *)rt_nil_check(l_P_2144))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_P_2144))).f_KIND == g_N_ENUMLIT))) && r_IS_ROUNDING_NAME(((*(R17 *)rt_nil_check(l_P_2144))).f_NAME)))
{
S_R9(&((*(R17 *)rt_nil_check(l_R_2143))).f_NAME, ((*(R17 *)rt_nil_check(l_P_2144))).f_NAME, 0);
}
else
{
((*(R17 *)rt_nil_check(l_R_2143))).f_B = l_P_2144;
}
l_P_2144 = ((*(R17 *)rt_nil_check(l_P_2144))).f_NEXT;
}
RT_B_TICK();
} L_end2145: ;
{ R17 * rv2146 = l_R_2143;
return rv2146; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING_NAME(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv2147 = (!(r_FIND_LITERAL(p_NAME, r_ROUNDINGS_TYPE()) == NULL));
return rv2147; }
rt_raise(RT_X_INIT);
}
static R22 * r_ROUNDINGS_TYPE(void) { RT_B_TICK(); 
R12 * l_Y_2148; memset(&l_Y_2148, 0, sizeof l_Y_2148);
l_Y_2148 = r_LOOKUP(r_MKN(rt_str("ROUNDINGS", 9)));
if ((!(l_Y_2148 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2148))).f_KIND == g_Y_TYPE))
{
{
R22 * l_T_2149; memset(&l_T_2149, 0, sizeof l_T_2149);
l_T_2149 = r_REAL_TYPE(r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_2148))).f_NAME, ((rt_int)0LL)));
if ((((*(R22 *)rt_nil_check(l_T_2149))).f_KIND == g_T_ENUM))
{
{ R22 * rv2150 = l_T_2149;
return rv2150; }
}
}
}
}
{ R22 * rv2151 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS;
return rv2151; }
rt_raise(RT_X_INIT);
}
static rt_int r_PREDEFINED_ROUNDING(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL))
{
{ rt_int rv2152 = 1;
return rv2152; }
}
if (((((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2153 = 1;
return rv2153; }
}
{ rt_int rv2154 = (((r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9))) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_R", 8))) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8)));
return rv2154; }
rt_raise(RT_X_INIT);
}
static R17 * r_FIRST_OUT_ARG(R17 * p_E) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL)))
{
{ R17 * rv2155 = ((*(R17 *)rt_nil_check(p_E))).f_C;
return rv2155; }
}
{ R17 * rv2156 = ((*(R17 *)rt_nil_check(p_E))).f_B;
return rv2156; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_OBJECT_ARG(R17 * p_L) { RT_B_TICK(); 
R17 * l_A_2157; memset(&l_A_2157, 0, sizeof l_A_2157);
l_A_2157 = p_L;
for (;;) {
if ((l_A_2157 == NULL)) goto L_end2158;
{
if ((((*(R17 *)rt_nil_check(l_A_2157))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_2159; memset(&l_Y_2159, 0, sizeof l_Y_2159);
l_Y_2159 = r_LOOKUP(((*(R17 *)rt_nil_check(l_A_2157))).f_NAME);
if ((!(l_Y_2159 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_2159))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_2159))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_2159))).f_T == NULL))))
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2159))).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
{ rt_int rv2160 = 1;
return rv2160; }
}
}
}
}
}
l_A_2157 = ((*(R17 *)rt_nil_check(l_A_2157))).f_NEXT;
}
RT_B_TICK();
} L_end2158: ;
{ rt_int rv2161 = 0;
return rv2161; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R9 l_NAME_2162; memset(&l_NAME_2162, 0, sizeof l_NAME_2162);
S_R9(&l_NAME_2162, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2163; memset(&l_LINE_2163, 0, sizeof l_LINE_2163);
l_LINE_2163 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
if ((!(r_CUR_GENERIC() == NULL)))
{
if (r_GENERIC_OBJECT_ARG(((*(R17 *)rt_nil_check(p_E))).f_A))
{
r_REQUIRE_WHERE(l_NAME_2162, l_LINE_2163);
}
}
if ((((((r_OPERATOR_SYMBOL(l_NAME_2162)).f_LEN > ((rt_int)0LL)) || r_TEQS(l_NAME_2162, rt_str("STORE_", 6))) || r_TEQS(l_NAME_2162, rt_str("SUBSTRING_", 10))) || r_TEQS(l_NAME_2162, rt_str("SUBSTRING_STORE_", 16))))
{
{ R26 rv2164 = r_OPERATOR_BUILTIN(p_E, p_WANT);
return rv2164; }
}
if ((r_TEQS(l_NAME_2162, rt_str("PUT", 3)) || r_TEQS(l_NAME_2162, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2165; memset(&l_V_2165, 0, sizeof l_V_2165);
S_R26(&l_V_2165, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2165).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_2163, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
r_ASCII_ONLY((l_V_2165).f_T, rt_str("the terminal", 12), l_LINE_2163);
if (r_TEQS(l_NAME_2162, rt_str("PUT", 3)))
{
{ R26 rv2166 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_2165).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2166; }
}
{ R26 rv2167 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_2165).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2167; }
}
}
else if (r_TEQS(l_NAME_2162, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2168 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2168; }
}
else if (r_TEQS(l_NAME_2162, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2169 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2169; }
}
else if (r_TEQS(l_NAME_2162, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2170 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2170; }
}
else if (r_TEQS(l_NAME_2162, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2171 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2171; }
}
else if (r_TEQS(l_NAME_2162, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2172 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2172; }
}
else if (r_TEQS(l_NAME_2162, rt_str("REAL_TIME", 9)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2173 = r_MKET(r_MK(rt_str("rt_b_real_time()", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2173; }
}
else if (r_TEQS(l_NAME_2162, rt_str("ARGUMENT_COUNT", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2174 = r_MKET(r_MK(rt_str("rt_argc()", 9)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2174; }
}
else if (r_TEQS(l_NAME_2162, rt_str("ARGUMENT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2175 = r_MKET(r_FMT1(rt_str("rt_arg(@)", 9), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2175; }
}
else if ((r_TEQS(l_NAME_2162, rt_str("FILE_EXISTS", 11)) || r_TEQS(l_NAME_2162, rt_str("READ_FILE", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2176; memset(&l_V_2176, 0, sizeof l_V_2176);
S_R26(&l_V_2176, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2176).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_2163, rt_str("a file is named by a character string: ", 39), l_NAME_2162);
}
if (r_TEQS(l_NAME_2162, rt_str("FILE_EXISTS", 11)))
{
{ R26 rv2177 = r_MKET(r_FMT1(rt_str("rt_b_file_exists(@)", 19), (l_V_2176).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2177; }
}
{ R26 rv2178 = r_MKET(r_FMT1(rt_str("rt_read_file(@)", 15), (l_V_2176).f_C), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2178; }
}
}
else if (r_TEQS(l_NAME_2162, rt_str("WRITE_FILE", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_N_2179; memset(&l_N_2179, 0, sizeof l_N_2179);
S_R26(&l_N_2179, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R26 l_V_2180; memset(&l_V_2180, 0, sizeof l_V_2180);
S_R26(&l_V_2180, r_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT, NULL), 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_N_2179).f_T)))).f_KIND == g_T_STR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2180).f_T)))).f_KIND == g_T_STR))))
{
r_FAIL(l_LINE_2163, rt_str("WRITE_FILE (name, text) takes two character strings", 51));
}
{ R26 rv2181 = r_MKET(r_FMT2(rt_str("rt_write_file(@, @)", 19), (l_N_2179).f_C, (l_V_2180).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2181; }
}
}
if (r_TEQS(l_NAME_2162, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2182 = r_IMAGE_OF(r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_2163);
return rv2182; }
}
else if (r_TEQS(l_NAME_2162, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv2183 = r_TO_FIXED_CALL(p_E);
return rv2183; }
}
else if (r_TEQS(l_NAME_2162, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_2184; memset(&l_V_2184, 0, sizeof l_V_2184);
S_R26(&l_V_2184, r_EXPR(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), NULL), 0);
R23 l_P_2185; memset(&l_P_2185, 0, sizeof l_P_2185);
S_R23(&l_P_2185, r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_VT_2186; memset(&l_VT_2186, 0, sizeof l_VT_2186);
l_VT_2186 = r_REAL_TYPE((l_V_2184).f_T);
R22 * l_T_2187; memset(&l_T_2187, 0, sizeof l_T_2187);
l_T_2187 = r_FLOAT_TYPE((l_P_2185).f_V);
R9 l_SINGLE_2188; memset(&l_SINGLE_2188, 0, sizeof l_SINGLE_2188);
S_R9(&l_SINGLE_2188, r_SINGLE_C((l_P_2185).f_V), 0);
R9 l_TR_2189; memset(&l_TR_2189, 0, sizeof l_TR_2189);
S_R9(&l_TR_2189, r_MK(rt_str("0", 1)), 0);
if (((r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A) == ((rt_int)3LL)) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT))).f_KIND == g_N_QUAL)))
{
{
R17 * l_R_2190; memset(&l_R_2190, 0, sizeof l_R_2190);
l_R_2190 = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
if ((l_R_2190 == NULL))
{
l_R_2190 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT;
}
if ((((*(R17 *)rt_nil_check(l_R_2190))).f_KIND == g_N_QUAL))
{
l_R_2190 = r_LIT_NODE_T(((*(R17 *)rt_nil_check(l_R_2190))).f_NAME, l_LINE_2163);
}
if (r_TEQS(((*(R17 *)rt_nil_check(l_R_2190))).f_NAME, rt_str("TRUNCATED", 9)))
{
S_R9(&l_TR_2189, r_MK(rt_str("1", 1)), 0);
}
else if ((!r_TEQS(((*(R17 *)rt_nil_check(l_R_2190))).f_NAME, rt_str("ROUNDED", 7))))
{
r_FAIL(l_LINE_2163, rt_str("TO_FLOAT is predefined for ROUNDED and TRUNCATED (3.3.6.1)", 58));
}
}
}
if (((((*(R22 *)rt_nil_check(l_VT_2186))).f_KIND == g_T_INT) && r_IS_D(l_T_2187)))
{
{ R26 rv2191 = r_MKET(r_FMT3(rt_str("rt_b_d_of_fix(@, @, @)", 22), (l_V_2184).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_2186))).f_SCALE), l_TR_2189), l_T_2187);
return rv2191; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_2186))).f_KIND == g_T_INT))
{
{ R26 rv2192 = r_MKET(r_FMT4(rt_str("rt_b_float_of_fix_r(@, @, @, @)", 31), (l_V_2184).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_2186))).f_SCALE), l_SINGLE_2188, l_TR_2189), l_T_2187);
return rv2192; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_2186))).f_KIND == g_T_FLOAT))
{
if (((((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) && (r_IMP_PRECISION_OF((l_P_2185).f_V) > r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_2186))).f_SCALE))))
{
{
R17 * l_Q_2193; memset(&l_Q_2193, 0, sizeof l_Q_2193);
l_Q_2193 = r_NEW_NODE(g_N_QUAL, l_LINE_2163);
R17 * l_SAVED_Q_2194; memset(&l_SAVED_Q_2194, 0, sizeof l_SAVED_Q_2194);
l_SAVED_Q_2194 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_L_2195; memset(&l_L_2195, 0, sizeof l_L_2195);
((*(R17 *)rt_nil_check(l_Q_2193))).f_B = r_ARG_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_Q_2193;
S_R26(&l_L_2195, r_EXPR(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_2194;
{ R26 rv2196 = r_MKET(r_FLOAT_CONV(l_L_2195, l_T_2187, l_TR_2189), l_T_2187);
return rv2196; }
}
}
{ R26 rv2197 = r_MKET(r_FLOAT_CONV(l_V_2184, l_T_2187, l_TR_2189), l_T_2187);
return rv2197; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_2186))).f_KIND == g_T_STR))
{
if (((!(((*(R22 *)rt_nil_check(l_VT_2186))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(l_VT_2186))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))))
{
r_FAIL(l_LINE_2163, rt_str("TO_FLOAT is predefined for ASCII strings only (3.3.6.1)", 55));
}
if (r_IS_D(l_T_2187))
{
{ R26 rv2198 = r_MKET(r_FMT2(rt_str("rt_b_d_of_str(@, @)", 19), (l_V_2184).f_C, l_TR_2189), l_T_2187);
return rv2198; }
}
{ R26 rv2199 = r_MKET(r_FMT3(rt_str("rt_b_fconv(rt_b_float_of_str(@), @, @, 0)", 41), (l_V_2184).f_C, l_SINGLE_2188, l_TR_2189), l_T_2187);
return rv2199; }
}
r_FAIL(l_LINE_2163, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_2162, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2200 = r_BITS_OF(r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_2163);
return rv2200; }
}
else if (r_TEQS(l_NAME_2162, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2201; memset(&l_V_2201, 0, sizeof l_V_2201);
S_R26(&l_V_2201, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2201).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv2202 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_2201).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_2201).f_T))).f_SCALE));
return rv2202; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2201).f_T)))).f_KIND == g_T_FLOAT))
{
if (r_IS_D((l_V_2201).f_T))
{
{ R26 rv2203 = r_MKET(r_FMT1(rt_str("rt_b_dabs(@)", 12), (l_V_2201).f_C), (l_V_2201).f_T);
return rv2203; }
}
{ R26 rv2204 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_2201).f_C), (l_V_2201).f_T);
return rv2204; }
}
r_FAIL(l_LINE_2163, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_2162, rt_str("SUCC", 4)) || r_TEQS(l_NAME_2162, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2205; memset(&l_V_2205, 0, sizeof l_V_2205);
S_R26(&l_V_2205, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_2206; memset(&l_T_2206, 0, sizeof l_T_2206);
l_T_2206 = r_REAL_TYPE((l_V_2205).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_2206))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_2163, rt_str("an enumerated value expected by ", 32), l_NAME_2162);
}
if (r_IS_UNORDERED(l_T_2206))
{
r_FAILT(l_LINE_2163, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_2162);
}
if (r_TEQS(l_NAME_2162, rt_str("SUCC", 4)))
{
{ R26 rv2207 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_2205).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2206))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_2206))).f_BASE);
return rv2207; }
}
{ R26 rv2208 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_2205).f_C), ((*(R22 *)rt_nil_check(l_T_2206))).f_BASE);
return rv2208; }
}
}
else if (r_TEQS(l_NAME_2162, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_2209; memset(&l_V_2209, 0, sizeof l_V_2209);
S_R26(&l_V_2209, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_2210; memset(&l_K_2210, 0, sizeof l_K_2210);
l_K_2210 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2209).f_T)))).f_KIND;
R22 * l_T_2211; memset(&l_T_2211, 0, sizeof l_T_2211);
l_T_2211 = r_NEW_TYP(l_K_2210);
if (((!(l_K_2210 == g_T_STR)) && (!(l_K_2210 == g_T_BITS))))
{
r_FAIL(l_LINE_2163, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_2211))).f_BASE = ((*(R22 *)rt_nil_check((l_V_2209).f_T))).f_BASE;
{ R26 rv2212 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_2209).f_C, r_INT_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_2211);
return rv2212; }
}
}
else if (r_TEQS(l_NAME_2162, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2213 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2213; }
}
else if (r_TEQS(l_NAME_2162, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2214 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv2214; }
}
else if (((r_TEQS(l_NAME_2162, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_2162, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_2162, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R9 l_BITS_2215; memset(&l_BITS_2215, 0, sizeof l_BITS_2215);
S_R9(&l_BITS_2215, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_2162, rt_str("OCT_OF", 6)))
{
S_R9(&l_BITS_2215, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_2162, rt_str("HEX_OF", 6)))
{
S_R9(&l_BITS_2215, r_MK(rt_str("4", 1)), 0);
}
{
R26 l_V_2216; memset(&l_V_2216, 0, sizeof l_V_2216);
S_R26(&l_V_2216, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2216).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_2163, rt_str("a character string expected by ", 31), l_NAME_2162);
}
r_ASCII_ONLY((l_V_2216).f_T, r_STR(l_NAME_2162, (l_NAME_2162).f_LEN), l_LINE_2163);
{ R26 rv2217 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (l_V_2216).f_C, l_BITS_2215), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv2217; }
}
}
}
else if ((r_TEQS(l_NAME_2162, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_2162, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R23 l_S_2218; memset(&l_S_2218, 0, sizeof l_S_2218);
S_R23(&l_S_2218, r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_A, rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_2219; memset(&l_R_2219, 0, sizeof l_R_2219);
S_R23(&l_R_2219, r_MANIFEST_INTEGER_ARG(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
if ((!((l_R_2219).f_V == ((rt_int)2LL))))
{
r_FAIL(l_LINE_2163, rt_str("only radix 2 is predefined (3.2.6.3)", 36));
}
r_CHECK_PRECISION_ARG(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_2163);
if (r_TEQS(l_NAME_2162, rt_str("FIXED_MIN", 9)))
{
{ R26 rv2220 = r_MKET(r_STD_MIN_C(), r_INT_TYPE((l_S_2218).f_V));
return rv2220; }
}
{ R26 rv2221 = r_MKET(r_STD_MAX_C(), r_INT_TYPE((l_S_2218).f_V));
return rv2221; }
}
}
else if (((r_TEQS(l_NAME_2162, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_2162, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_2162, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R23 l_P_2222; memset(&l_P_2222, 0, sizeof l_P_2222);
S_R23(&l_P_2222, r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_T_2223; memset(&l_T_2223, 0, sizeof l_T_2223);
l_T_2223 = r_FLOAT_TYPE((l_P_2222).f_V);
if (r_TEQS(l_NAME_2162, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv2224 = r_MKET(r_FLOAT_LIMIT(l_T_2223, r_MK(rt_str("MIN", 3))), l_T_2223);
return rv2224; }
}
else if (r_TEQS(l_NAME_2162, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv2225 = r_MKET(r_FLOAT_LIMIT(l_T_2223, r_MK(rt_str("MAX", 3))), l_T_2223);
return rv2225; }
}
{ R26 rv2226 = r_MKET(r_FLOAT_LIMIT(l_T_2223, r_MK(rt_str("EPSILON", 7))), l_T_2223);
return rv2226; }
}
}
else if (r_TEQS(l_NAME_2162, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2227 = r_INT_ET(r_IMP_PRECISION_OF((r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION())).f_V));
return rv2227; }
}
else if (r_TEQS(l_NAME_2162, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2228 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2228; }
}
else if (r_TEQS(l_NAME_2162, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2229 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2229; }
}
if (r_TEQS(l_NAME_2162, rt_str("RUN_PATHS", 9)))
{
{ R26 rv2230 = r_RUN_PATHS(p_E);
return rv2230; }
}
{ R26 rv2231 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv2231; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_2232; memset(&l_T_2232, 0, sizeof l_T_2232);
l_T_2232 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_2233; memset(&l_K_2233, 0, sizeof l_K_2233);
l_K_2233 = ((*(R22 *)rt_nil_check(l_T_2232))).f_KIND;
R22 * l_S_2234; memset(&l_S_2234, 0, sizeof l_S_2234);
l_S_2234 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_2233 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_2232))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv2235 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_2234);
return rv2235; }
}
{ R26 rv2236 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_2232))).f_SCALE)), l_S_2234);
return rv2236; }
}
else if (r_IS_D(l_T_2232))
{
{ R26 rv2237 = r_MKET(r_FMT2(rt_str("rt_b_d_image(@, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_2232))).f_SCALE)), l_S_2234);
return rv2237; }
}
else if ((l_K_2233 == g_T_FLOAT))
{
{ R26 rv2238 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_2232))).f_SCALE)), l_S_2234);
return rv2238; }
}
else if ((l_K_2233 == g_T_BOOL))
{
{ R26 rv2239 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_2234);
return rv2239; }
}
else if ((l_K_2233 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_2232))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv2240 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_2234);
return rv2240; }
}
{ R26 rv2241 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2232))).f_BASE))).f_CNAME, (p_V).f_C), l_S_2234);
return rv2241; }
}
else if (((l_K_2233 == g_T_STR) || (l_K_2233 == g_T_BITS)))
{
{ R26 rv2242 = r_MKET((p_V).f_C, l_S_2234);
return rv2242; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_2232));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R17 * p_E) { RT_B_TICK(); 
R26 l_V_2243; memset(&l_V_2243, 0, sizeof l_V_2243);
S_R26(&l_V_2243, r_EXPR(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_2244; memset(&l_T_2244, 0, sizeof l_T_2244);
l_T_2244 = r_REAL_TYPE((l_V_2243).f_T);
rt_int l_N_2245; memset(&l_N_2245, 0, sizeof l_N_2245);
l_N_2245 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A);
R9 l_RND_2246; memset(&l_RND_2246, 0, sizeof l_RND_2246);
S_R9(&l_RND_2246, r_ROUNDING_ARG(p_E, l_N_2245), 0);
rt_int l_S_2247; memset(&l_S_2247, 0, sizeof l_S_2247);
l_S_2247 = ((rt_int)0LL);
if (((l_N_2245 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
l_S_2247 = (r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL))).f_V;
}
{
rt_int l_K_2248; memset(&l_K_2248, 0, sizeof l_K_2248);
l_K_2248 = ((rt_int)2LL);
for (;;) {
if ((l_K_2248 >= l_N_2245)) goto L_end2249;
{
{
R17 * l_R_2250; memset(&l_R_2250, 0, sizeof l_R_2250);
l_R_2250 = r_ARG_EXPR(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, l_K_2248));
if ((r_IS_ROUNDING(l_R_2250) || (((((*(R17 *)rt_nil_check(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, l_K_2248)))).f_KIND == g_N_QUAL) && (l_K_2248 == rt_sub(l_N_2245, ((rt_int)1LL)))))))
{
if ((!(l_K_2248 == rt_sub(l_N_2245, ((rt_int)1LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the rounding mode is the last argument of TO_FIXED (3.2.6.1)", 60));
}
}
else if (((((((*(R17 *)rt_nil_check(l_R_2250))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_2250))).f_KIND == g_N_ENUMLIT))) && (!r_NAMES_OBJECT(((*(R17 *)rt_nil_check(l_R_2250))).f_NAME))))
{
r_CHECK_PRECISION_ARG(l_R_2250, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
else if (((((*(R17 *)rt_nil_check(l_R_2250))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(l_R_2250))).f_NAME, rt_str("PRECISION", 9))))
{
}
else
{
if ((!((r_MANIFEST_INTEGER_ARG(l_R_2250, rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL))).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 is predefined (3.2.6.1)", 36));
}
}
}
l_K_2248 = rt_add(l_K_2248, ((rt_int)1LL));
}
RT_B_TICK();
} L_end2249: ;
}
if (((((*(R22 *)rt_nil_check(l_T_2244))).f_KIND == g_T_INT) && (((((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) || (((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_INT)))))
{
{ R26 rv2251 = r_MKET(r_FMT3(rt_str("rt_b_fix_val(@, @, @)", 21), r_CSTRING(((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_NAME), r_NUM(l_S_2247), l_RND_2246), r_INT_TYPE(l_S_2247));
return rv2251; }
}
if ((((*(R22 *)rt_nil_check(l_T_2244))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_2252; memset(&l_SAVED_2252, 0, sizeof l_SAVED_2252);
l_SAVED_2252 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R9 l_C_2253; memset(&l_C_2253, 0, sizeof l_C_2253);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_2246, rt_str("1", 1));
S_R9(&l_C_2253, r_RESCALE_C((l_V_2243).f_C, ((*(R22 *)rt_nil_check(l_T_2244))).f_SCALE, l_S_2247), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_2252;
{ R26 rv2254 = r_MKET(l_C_2253, r_INT_TYPE(l_S_2247));
return rv2254; }
}
}
else if (r_IS_D(l_T_2244))
{
{ R26 rv2255 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_d(@, @, @)", 22), (l_V_2243).f_C, r_NUM(l_S_2247), l_RND_2246), r_INT_TYPE(l_S_2247));
return rv2255; }
}
else if ((((*(R22 *)rt_nil_check(l_T_2244))).f_KIND == g_T_FLOAT))
{
{ R26 rv2256 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_2243).f_C, r_NUM(l_S_2247), l_RND_2246), r_INT_TYPE(l_S_2247));
return rv2256; }
}
else if (((((*(R22 *)rt_nil_check(l_T_2244))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_2244))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_2244))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_2244))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_2244))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2244))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv2257 = r_MKET(r_RESCALE_C((l_V_2243).f_C, ((rt_int)0LL), l_S_2247), r_INT_TYPE(l_S_2247));
return rv2257; }
}
else if ((((*(R22 *)rt_nil_check(l_T_2244))).f_KIND == g_T_BITS))
{
{ R26 rv2258 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_2243).f_C), ((rt_int)0LL), l_S_2247), r_INT_TYPE(l_S_2247));
return rv2258; }
}
else if ((((*(R22 *)rt_nil_check(l_T_2244))).f_KIND == g_T_STR))
{
r_ASCII_ONLY(l_T_2244, rt_str("TO_FIXED", 8), ((*(R17 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv2259 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_2243).f_C, r_NUM(l_S_2247), l_RND_2246), r_INT_TYPE(l_S_2247));
return rv2259; }
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_2243).f_T));
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_SIZE_OR(R22 * p_T) { RT_B_TICK(); 
R23 l_M_2260; memset(&l_M_2260, 0, sizeof l_M_2260);
S_R23(&l_M_2260, r_STATIC_SIZE(p_T), 0);
if ((l_M_2260).f_OK)
{
{ rt_int rv2261 = (l_M_2260).f_V;
return rv2261; }
}
{ rt_int rv2262 = rt_neg(((rt_int)1LL));
return rv2262; }
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_2263; memset(&l_T_2263, 0, sizeof l_T_2263);
l_T_2263 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_2264; memset(&l_K_2264, 0, sizeof l_K_2264);
l_K_2264 = ((*(R22 *)rt_nil_check(l_T_2263))).f_KIND;
if ((l_K_2264 == g_T_BITS))
{
{ R26 rv2265 = p_V;
return rv2265; }
}
else if ((l_K_2264 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_2263))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2263))).f_REPS))).f_B == NULL)))
{
{ R26 rv2266 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_2263)), r_BITS_TYPE(r_ENUM_SIZE(l_T_2263)));
return rv2266; }
}
}
{ R26 rv2267 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_2263))), r_BITS_TYPE(r_ENUM_SIZE(l_T_2263)));
return rv2267; }
}
else if ((l_K_2264 == g_T_STR))
{
{ R26 rv2268 = r_MKET(r_FMT4(rt_str("rt_b_bits_of_chars(@, @, @, @)", 30), (p_V).f_C, r_NUM(r_CHAR_SIZE(l_T_2263)), r_NUM(r_PACKING_OF(l_T_2263)), r_CHAR_REPS(l_T_2263)), r_BITS_TYPE(r_STATIC_SIZE_OR(l_T_2263)));
return rv2268; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_2264 == g_T_INT))
{
{ R26 rv2269 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(((*(R7 *)rt_nil_check(g_W))).f_WORD)), r_BITS_TYPE(((*(R7 *)rt_nil_check(g_W))).f_WORD));
return rv2269; }
}
else if ((l_K_2264 == g_T_BOOL))
{
{ R26 rv2270 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv2270; }
}
else if (r_IS_D(l_T_2263))
{
{ R26 rv2271 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_d(@)", 17), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv2271; }
}
else if (((l_K_2264 == g_T_FLOAT) && (((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL))))
{
{ R26 rv2272 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_f(@)", 17), (p_V).f_C), r_BITS_TYPE(((rt_int)32LL)));
return rv2272; }
}
else if ((l_K_2264 == g_T_FLOAT))
{
{ R26 rv2273 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv2273; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_2263));
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
{ rt_int rv2274 = 0;
return rv2274; }
}
{ rt_int rv2275 = ((r_IS_LITERALISH(((*(R27 *)rt_nil_check(p_A))).f_E) || (((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv2275; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R27 * p_A) { RT_B_TICK(); 
rt_int l_N_2276; memset(&l_N_2276, 0, sizeof l_N_2276);
l_N_2276 = ((rt_int)0LL);
R27 * l_P_2277; memset(&l_P_2277, 0, sizeof l_P_2277);
l_P_2277 = p_A;
for (;;) {
if ((l_P_2277 == NULL)) goto L_end2278;
{
l_N_2276 = rt_add(l_N_2276, ((rt_int)1LL));
l_P_2277 = ((*(R27 *)rt_nil_check(l_P_2277))).f_NEXT;
}
RT_B_TICK();
} L_end2278: ;
{ rt_int rv2279 = l_N_2276;
return rv2279; }
rt_raise(RT_X_INIT);
}
static R27 * r_CALL_ARGS(R17 * p_E) { RT_B_TICK(); 
R27 * l_HEAD_2280; memset(&l_HEAD_2280, 0, sizeof l_HEAD_2280);
l_HEAD_2280 = NULL;
R27 * l_TAIL_2281; memset(&l_TAIL_2281, 0, sizeof l_TAIL_2281);
l_TAIL_2281 = NULL;
rt_int l_G_2282; memset(&l_G_2282, 0, sizeof l_G_2282);
l_G_2282 = ((rt_int)0LL);
{ rt_int it2284_lo = ((rt_int)0LL), it2284_hi = ((rt_int)2LL);
for (rt_int it2284 = it2284_lo; it2284 <= it2284_hi; it2284++) {
{
{
R17 * l_P_2285; memset(&l_P_2285, 0, sizeof l_P_2285);
l_P_2285 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((it2284 == ((rt_int)1LL)))
{
l_P_2285 = ((*(R17 *)rt_nil_check(p_E))).f_B;
}
else if ((it2284 == ((rt_int)2LL)))
{
l_P_2285 = ((*(R17 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_2285 == NULL)) goto L_end2286;
{
{
R27 * l_A_2287; memset(&l_A_2287, 0, sizeof l_A_2287);
l_A_2287 = r_NODE_ARG(l_P_2285, it2284, NULL);
if ((l_TAIL_2281 == NULL))
{
l_HEAD_2280 = l_A_2287;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2281))).f_NEXT = l_A_2287;
}
l_TAIL_2281 = l_A_2287;
}
l_P_2285 = ((*(R17 *)rt_nil_check(l_P_2285))).f_NEXT;
}
RT_B_TICK();
} L_end2286: ;
}
}
RT_B_TICK();
if (it2284 == it2284_hi) break;
} } L_end2283: ;
{ R27 * rv2288 = l_HEAD_2280;
return rv2288; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SAVED_2289; memset(&l_SAVED_2289, 0, sizeof l_SAVED_2289);
l_SAVED_2289 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_2290; memset(&l_SAVED_Q_2290, 0, sizeof l_SAVED_Q_2290);
l_SAVED_Q_2290 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_2291; memset(&l_V_2291, 0, sizeof l_V_2291);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_2291, r_CALL_EXPR1(p_E, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_2289;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_2290;
{ R26 rv2292 = l_V_2291;
return rv2292; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR1(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R27 * l_ARGS_2293; memset(&l_ARGS_2293, 0, sizeof l_ARGS_2293);
l_ARGS_2293 = r_CALL_ARGS(p_E);
R12 * l_Y_2294; memset(&l_Y_2294, 0, sizeof l_Y_2294);
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv2295 = r_START_IO_CALL(p_E);
return rv2295; }
}
l_Y_2294 = r_BOUND_ROUTINE(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2294 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2294))).f_KIND == g_Y_BUILTIN))
{
{
R17 * l_N_2296; memset(&l_N_2296, 0, sizeof l_N_2296);
l_N_2296 = r_COPY_NODE(p_E);
S_R9(&((*(R17 *)rt_nil_check(l_N_2296))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2294))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2296))).f_NEXT = ((*(R17 *)rt_nil_check(p_E))).f_NEXT;
{ R26 rv2297 = r_BUILTIN(l_N_2296, p_WANT);
return rv2297; }
}
}
{ R26 rv2298 = r_CALL_SYM(l_Y_2294, l_ARGS_2293, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv2298; }
}
{
R9 l_SHORT_2299; memset(&l_SHORT_2299, 0, sizeof l_SHORT_2299);
S_R9(&l_SHORT_2299, r_WHERE_SHORT_NAME(((*(R17 *)rt_nil_check(p_E))).f_NAME), 0);
if ((!r_TEQ(l_SHORT_2299, ((*(R17 *)rt_nil_check(p_E))).f_NAME)))
{
{
R17 * l_N_2300; memset(&l_N_2300, 0, sizeof l_N_2300);
l_N_2300 = r_COPY_NODE(p_E);
S_R9(&((*(R17 *)rt_nil_check(l_N_2300))).f_NAME, l_SHORT_2299, 0);
((*(R17 *)rt_nil_check(l_N_2300))).f_NEXT = ((*(R17 *)rt_nil_check(p_E))).f_NEXT;
{ R26 rv2301 = r_CALL_EXPR1(l_N_2300, p_WANT);
return rv2301; }
}
}
}
l_Y_2294 = r_FIND_ROUTINE(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2293, ((*(R17 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_2294 == NULL))
{
{
R12 * l_P_2302; memset(&l_P_2302, 0, sizeof l_P_2302);
l_P_2302 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_2302 == NULL)) goto L_end2303;
{
if ((((*(R12 *)rt_nil_check(l_P_2302))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv2304 = r_BUILTIN(p_E, p_WANT);
return rv2304; }
}
l_P_2302 = r_LOOKUP_NEXT(l_P_2302);
}
RT_B_TICK();
} L_end2303: ;
}
{
R12 * l_B_2305; memset(&l_B_2305, 0, sizeof l_B_2305);
l_B_2305 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_2305 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_2305))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv2306 = r_BUILTIN(p_E, p_WANT);
return rv2306; }
}
if (((((*(R12 *)rt_nil_check(l_B_2305))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_2305))).f_ORIG == NULL))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
}
{
R9 l_BASE_2307; memset(&l_BASE_2307, 0, sizeof l_BASE_2307);
S_R9(&l_BASE_2307, r_CLASS_OPERATION(((*(R17 *)rt_nil_check(p_E))).f_NAME), 0);
if (((l_BASE_2307).f_LEN > ((rt_int)0LL)))
{
{
R17 * l_N_2308; memset(&l_N_2308, 0, sizeof l_N_2308);
l_N_2308 = r_COPY_NODE(p_E);
S_R9(&((*(R17 *)rt_nil_check(l_N_2308))).f_NAME, l_BASE_2307, 0);
{ R26 rv2309 = r_BUILTIN(l_N_2308, p_WANT);
return rv2309; }
}
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv2310 = r_CALL_SYM(l_Y_2294, l_ARGS_2293, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv2310; }
rt_raise(RT_X_INIT);
}
static R9 r_CLASS_OPERATION(R9 p_NAME) { RT_B_TICK(); 
rstr l_S_2311; memset(&l_S_2311, 0, sizeof l_S_2311);
l_S_2311 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2311, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2313_lo = ((rt_int)1LL), it2313_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2313 = it2313_lo; it2313 <= it2313_hi; it2313++) {
{
if (rt_b_eq(rt_b_slice(l_S_2311, it2313, it2313), rt_str("$", 1)))
{
{
R9 l_P_2314; memset(&l_P_2314, 0, sizeof l_P_2314);
S_R9(&l_P_2314, r_MKN(rt_b_slice(l_S_2311, ((rt_int)0LL), rt_sub(it2313, ((rt_int)1LL)))), 0);
R9 l_B_2315; memset(&l_B_2315, 0, sizeof l_B_2315);
S_R9(&l_B_2315, r_MKN(rt_b_slice(l_S_2311, rt_add(it2313, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))), 0);
if ((((((((r_IS_TYPE_WORD(l_P_2314) || r_TEQS(l_P_2314, rt_str("INTEGER", 7))) || r_TEQS(l_P_2314, rt_str("BOOLEAN", 7))) || r_TEQS(l_P_2314, rt_str("ENUM", 4))) || r_TEQS(l_P_2314, rt_str("ARRAY", 5))) || r_TEQS(l_P_2314, rt_str("RECORD", 6))) || r_TEQS(l_P_2314, rt_str("PTR", 3))) || r_TEQS(l_P_2314, rt_str("SEMAPHORE", 9))))
{
{
R12 * l_Y_2316; memset(&l_Y_2316, 0, sizeof l_Y_2316);
l_Y_2316 = r_LOOKUP(l_B_2315);
for (;;) {
if ((l_Y_2316 == NULL)) goto L_end2317;
{
if ((((*(R12 *)rt_nil_check(l_Y_2316))).f_KIND == g_Y_BUILTIN))
{
{ R9 rv2318 = l_B_2315;
return rv2318; }
}
l_Y_2316 = r_LOOKUP_NEXT(l_Y_2316);
}
RT_B_TICK();
} L_end2317: ;
}
}
}
{ R9 rv2319 = r_NO_TEXT();
return rv2319; }
}
}
RT_B_TICK();
if (it2313 == it2313_hi) break;
} } L_end2312: ;
{ R9 rv2320 = r_NO_TEXT();
return rv2320; }
rt_raise(RT_X_INIT);
}
static R9 r_WHERE_SHORT_NAME(R9 p_NAME) { RT_B_TICK(); 
R12 * l_G_2321; memset(&l_G_2321, 0, sizeof l_G_2321);
l_G_2321 = r_CUR_GENERIC();
rstr l_S_2322; memset(&l_S_2322, 0, sizeof l_S_2322);
l_S_2322 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2322, r_STR(p_NAME, (p_NAME).f_LEN));
if ((l_G_2321 == NULL))
{
{ R9 rv2323 = p_NAME;
return rv2323; }
}
{ rt_int it2325_lo = ((rt_int)1LL), it2325_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2325 = it2325_lo; it2325 <= it2325_hi; it2325++) {
{
if (rt_b_eq(rt_b_slice(l_S_2322, it2325, it2325), rt_str("$", 1)))
{
if (((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_G_2321))).f_BINDINGS, r_MKN(rt_b_slice(l_S_2322, ((rt_int)0LL), rt_sub(it2325, ((rt_int)1LL))))) == NULL)) && r_IN_WHERE(l_G_2321, r_MKN(rt_b_slice(l_S_2322, rt_add(it2325, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))))))
{
{ R9 rv2326 = r_MKN(rt_b_slice(l_S_2322, rt_add(it2325, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))));
return rv2326; }
}
{ R9 rv2327 = p_NAME;
return rv2327; }
}
}
RT_B_TICK();
if (it2325 == it2325_hi) break;
} } L_end2324: ;
{ R9 rv2328 = p_NAME;
return rv2328; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R9 p_NAME) { RT_B_TICK(); 
R21 * l_B_2329; memset(&l_B_2329, 0, sizeof l_B_2329);
l_B_2329 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_2330; memset(&l_S_2330, 0, sizeof l_S_2330);
l_S_2330 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2330, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2332_lo = ((rt_int)1LL), it2332_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2332 = it2332_lo; it2332 <= it2332_hi; it2332++) {
{
if (rt_b_eq(rt_b_slice(l_S_2330, it2332, it2332), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_2330, ((rt_int)0LL), rt_sub(it2332, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv2333 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_2330, rt_add(it2332, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv2333; }
}
goto L_end2331;
}
}
RT_B_TICK();
if (it2332 == it2332_hi) break;
} } L_end2331: ;
}
for (;;) {
if ((l_B_2329 == NULL)) goto L_end2334;
{
if (((!(((*(R21 *)rt_nil_check(l_B_2329))).f_R == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_B_2329))).f_NAME, p_NAME)))
{
{ R12 * rv2335 = ((*(R21 *)rt_nil_check(l_B_2329))).f_R;
return rv2335; }
}
l_B_2329 = ((*(R21 *)rt_nil_check(l_B_2329))).f_NEXT;
}
RT_B_TICK();
} L_end2334: ;
{ R12 * rv2336 = NULL;
return rv2336; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R9 p_NAME) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv2337 = 0;
return rv2337; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv2338 = 0;
return rv2338; }
}
}
}
{ rt_int rv2339 = 1;
return rv2339; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R9 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { RT_B_TICK(); 
R12 * l_Y_2340; memset(&l_Y_2340, 0, sizeof l_Y_2340);
l_Y_2340 = r_LOOKUP(p_NAME);
R12 * l_BEST_2341; memset(&l_BEST_2341, 0, sizeof l_BEST_2341);
l_BEST_2341 = NULL;
rt_int l_BEST_SCORE_2342; memset(&l_BEST_SCORE_2342, 0, sizeof l_BEST_SCORE_2342);
l_BEST_SCORE_2342 = ((rt_int)0LL);
rt_int l_TIES_2343; memset(&l_TIES_2343, 0, sizeof l_TIES_2343);
l_TIES_2343 = ((rt_int)0LL);
rt_int l_COUNT_2344; memset(&l_COUNT_2344, 0, sizeof l_COUNT_2344);
l_COUNT_2344 = ((rt_int)0LL);
rt_int l_N_2345; memset(&l_N_2345, 0, sizeof l_N_2345);
l_N_2345 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_2340 == NULL)) goto L_end2346;
{
if ((!r_IS_ROUTINE(l_Y_2340)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2340))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end2346;
}
}
else if (r_CANDIDATE(l_Y_2340, p_NAME))
{
{
R12 * l_R_2347; memset(&l_R_2347, 0, sizeof l_R_2347);
l_R_2347 = r_ORIGINAL(l_Y_2340);
rt_int l_SCORE_2348; memset(&l_SCORE_2348, 0, sizeof l_SCORE_2348);
r_ROUTINE_HEADER(l_R_2347);
if ((((r_PARAM_COUNT(l_R_2347) == l_N_2345) && (!r_SEEN_ROUTINE(l_R_2347, p_NAME, l_Y_2340))) && (!r_HIDDEN_ROUTINE(l_R_2347, p_NAME, l_Y_2340))))
{
l_COUNT_2344 = rt_add(l_COUNT_2344, ((rt_int)1LL));
l_SCORE_2348 = r_MATCH_SCORE(l_R_2347, p_ARGS);
if ((l_SCORE_2348 > l_BEST_SCORE_2342))
{
l_BEST_2341 = l_R_2347;
l_BEST_SCORE_2342 = l_SCORE_2348;
l_TIES_2343 = ((rt_int)0LL);
}
else if (((l_SCORE_2348 == l_BEST_SCORE_2342) && (l_SCORE_2348 > ((rt_int)0LL))))
{
l_TIES_2343 = rt_add(l_TIES_2343, ((rt_int)1LL));
}
}
}
}
l_Y_2340 = r_LOOKUP_NEXT(l_Y_2340);
}
RT_B_TICK();
} L_end2346: ;
if (((l_TIES_2343 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv2349 = l_BEST_2341;
return rv2349; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R9 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2350; memset(&l_Y_2350, 0, sizeof l_Y_2350);
l_Y_2350 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2350 == p_STOP) || (l_Y_2350 == NULL))) goto L_end2351;
{
if ((((*(R12 *)rt_nil_check(l_Y_2350))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_2350) == p_R))
{
{ rt_int rv2352 = 1;
return rv2352; }
}
}
l_Y_2350 = r_LOOKUP_NEXT(l_Y_2350);
}
RT_B_TICK();
} L_end2351: ;
{ rt_int rv2353 = 0;
return rv2353; }
rt_raise(RT_X_INIT);
}
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R9 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2354; memset(&l_Y_2354, 0, sizeof l_Y_2354);
l_Y_2354 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2354 == p_STOP) || (l_Y_2354 == NULL))) goto L_end2355;
{
if (((((*(R12 *)rt_nil_check(l_Y_2354))).f_KIND == g_Y_ROUTINE) && (((*(R12 *)rt_nil_check(l_Y_2354))).f_DEPTH > ((*(R12 *)rt_nil_check(p_STOP))).f_DEPTH)))
{
{
R12 * l_O_2356; memset(&l_O_2356, 0, sizeof l_O_2356);
l_O_2356 = r_ORIGINAL(l_Y_2354);
if ((!(l_O_2356 == p_R)))
{
r_ROUTINE_HEADER(l_O_2356);
if (r_SAME_SIGNATURE(l_O_2356, p_R))
{
{ rt_int rv2357 = 1;
return rv2357; }
}
}
}
}
l_Y_2354 = r_LOOKUP_NEXT(l_Y_2354);
}
RT_B_TICK();
} L_end2355: ;
{ rt_int rv2358 = 0;
return rv2358; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B) { RT_B_TICK(); 
R28 * l_P_2359; memset(&l_P_2359, 0, sizeof l_P_2359);
l_P_2359 = ((*(R12 *)rt_nil_check(p_A))).f_PARAMS;
R28 * l_Q_2360; memset(&l_Q_2360, 0, sizeof l_Q_2360);
l_Q_2360 = ((*(R12 *)rt_nil_check(p_B))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_A))).f_GENERIC || ((*(R12 *)rt_nil_check(p_B))).f_GENERIC))
{
{ rt_int rv2361 = 0;
return rv2361; }
}
for (;;) {
if (((l_P_2359 == NULL) || (l_Q_2360 == NULL))) goto L_end2362;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2359))).f_MODE == ((*(R28 *)rt_nil_check(l_Q_2360))).f_MODE)))
{
{ rt_int rv2363 = 0;
return rv2363; }
}
if (((((*(R28 *)rt_nil_check(l_P_2359))).f_T == NULL) || (((*(R28 *)rt_nil_check(l_Q_2360))).f_T == NULL)))
{
if ((!(((*(R28 *)rt_nil_check(l_P_2359))).f_T == ((*(R28 *)rt_nil_check(l_Q_2360))).f_T)))
{
{ rt_int rv2364 = 0;
return rv2364; }
}
}
else if ((!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_2359))).f_T, ((*(R28 *)rt_nil_check(l_Q_2360))).f_T)))
{
{ rt_int rv2365 = 0;
return rv2365; }
}
l_P_2359 = ((*(R28 *)rt_nil_check(l_P_2359))).f_NEXT;
l_Q_2360 = ((*(R28 *)rt_nil_check(l_Q_2360))).f_NEXT;
}
RT_B_TICK();
} L_end2362: ;
{ rt_int rv2366 = ((l_P_2359 == NULL) && (l_Q_2360 == NULL));
return rv2366; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { RT_B_TICK(); 
rt_int l_N_2367; memset(&l_N_2367, 0, sizeof l_N_2367);
l_N_2367 = ((rt_int)0LL);
R28 * l_P_2368; memset(&l_P_2368, 0, sizeof l_P_2368);
l_P_2368 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_2368 == NULL)) goto L_end2369;
{
l_N_2367 = rt_add(l_N_2367, ((rt_int)1LL));
l_P_2368 = ((*(R28 *)rt_nil_check(l_P_2368))).f_NEXT;
}
RT_B_TICK();
} L_end2369: ;
{ rt_int rv2370 = l_N_2367;
return rv2370; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS) { RT_B_TICK(); 
R28 * l_P_2371; memset(&l_P_2371, 0, sizeof l_P_2371);
l_P_2371 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R27 * l_A_2372; memset(&l_A_2372, 0, sizeof l_A_2372);
l_A_2372 = p_ARGS;
rt_int l_EXACT_2373; memset(&l_EXACT_2373, 0, sizeof l_EXACT_2373);
l_EXACT_2373 = 1;
R21 * l_BS_2374; memset(&l_BS_2374, 0, sizeof l_BS_2374);
l_BS_2374 = r_NEW_BINDS();
R22 * l_PT_2375; memset(&l_PT_2375, 0, sizeof l_PT_2375);
for (;;) {
if ((l_P_2371 == NULL)) goto L_end2376;
{
l_PT_2375 = r_FORMAL_VIEW(p_R, l_P_2371);
if ((!(((*(R28 *)rt_nil_check(l_P_2371))).f_MODE == ((*(R27 *)rt_nil_check(l_A_2372))).f_MODE)))
{
{ rt_int rv2377 = ((rt_int)0LL);
return rv2377; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R28 *)rt_nil_check(l_P_2371))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_2371, l_A_2372, l_BS_2374)))
{
{ rt_int rv2378 = ((rt_int)0LL);
return rv2378; }
}
}
else if ((l_PT_2375 == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2372))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_A_2372))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv2379 = ((rt_int)0LL);
return rv2379; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_2372))
{
if ((!r_LITERAL_FITS(((*(R27 *)rt_nil_check(l_A_2372))).f_E, l_PT_2375)))
{
{ rt_int rv2380 = ((rt_int)0LL);
return rv2380; }
}
}
else
{
r_TYPE_ARG(l_A_2372);
{
R22 * l_AT_2381; memset(&l_AT_2381, 0, sizeof l_AT_2381);
l_AT_2381 = (((*(R27 *)rt_nil_check(l_A_2372))).f_V).f_T;
if ((!((r_SAME_CLASS(l_PT_2375, l_AT_2381) || (((((*(R22 *)rt_nil_check(l_AT_2381))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2375)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv2382 = ((rt_int)0LL);
return rv2382; }
}
if ((((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2375)))).f_GEN).f_LEN > ((rt_int)0LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2381)))).f_MLEN).f_OK))
{
{
R9 l_KEY_2383; memset(&l_KEY_2383, 0, sizeof l_KEY_2383);
S_R9(&l_KEY_2383, r_QMKN(rt_str("%", 1), ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2375)))).f_GEN), 0);
R21 * l_B_2384; memset(&l_B_2384, 0, sizeof l_B_2384);
l_B_2384 = r_FIND_BIND(((*(R21 *)rt_nil_check(l_BS_2374))).f_NEXT, l_KEY_2383);
if ((!(l_B_2384 == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(l_B_2384))).f_MV == (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2381)))).f_MLEN).f_V)))
{
{ rt_int rv2385 = ((rt_int)0LL);
return rv2385; }
}
}
else
{
r_ADD_BIND(l_KEY_2383, NULL, ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2381)))).f_MLEN, NULL, l_BS_2374);
}
}
}
if ((!r_SAME_TYPE(l_PT_2375, l_AT_2381)))
{
if ((((*(R28 *)rt_nil_check(l_P_2371))).f_MODE == g_M_INOUT))
{
{ rt_int rv2386 = ((rt_int)0LL);
return rv2386; }
}
l_EXACT_2373 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2381)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2375)))).f_KIND == g_T_INT)))
{
if (((((*(R28 *)rt_nil_check(l_P_2371))).f_MODE == g_M_IN) && (((*(R22 *)rt_nil_check(l_AT_2381))).f_SCALE > ((*(R22 *)rt_nil_check(l_PT_2375))).f_SCALE)))
{
{ rt_int rv2387 = ((rt_int)0LL);
return rv2387; }
}
else if (((((*(R28 *)rt_nil_check(l_P_2371))).f_MODE == g_M_OUT) && (((*(R22 *)rt_nil_check(l_PT_2375))).f_SCALE > ((*(R22 *)rt_nil_check(l_AT_2381))).f_SCALE)))
{
{ rt_int rv2388 = ((rt_int)0LL);
return rv2388; }
}
}
}
}
l_P_2371 = ((*(R28 *)rt_nil_check(l_P_2371))).f_NEXT;
l_A_2372 = ((*(R27 *)rt_nil_check(l_A_2372))).f_NEXT;
}
RT_B_TICK();
} L_end2376: ;
if (l_EXACT_2373)
{
{ rt_int rv2389 = ((rt_int)2LL);
return rv2389; }
}
{ rt_int rv2390 = ((rt_int)1LL);
return rv2390; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R17 * p_E, R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_2391; memset(&l_RT_2391, 0, sizeof l_RT_2391);
l_RT_2391 = r_REAL_TYPE(p_T);
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_2391))).f_KIND == g_T_ENUM))
{
{ rt_int rv2392 = (!(r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_RT_2391) == NULL));
return rv2392; }
}
{ rt_int rv2393 = 0;
return rv2393; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv2394 = (((*(R22 *)rt_nil_check(l_RT_2391))).f_KIND == g_T_PTR);
return rv2394; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv2395 = (((*(R22 *)rt_nil_check(l_RT_2391))).f_KIND == g_T_REC);
return rv2395; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv2396 = (((*(R22 *)rt_nil_check(l_RT_2391))).f_KIND == g_T_ARR);
return rv2396; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv2397 = (((*(R22 *)rt_nil_check(l_RT_2391))).f_KIND == g_T_INT);
return rv2397; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv2398 = ((((*(R22 *)rt_nil_check(l_RT_2391))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_2391))).f_KIND == g_T_SEM));
return rv2398; }
}
{ rt_int rv2399 = 0;
return rv2399; }
rt_raise(RT_X_INIT);
}
static R12 * r_ARG_ROOT(R17 * p_E) { RT_B_TICK(); 
R17 * l_N_2400; memset(&l_N_2400, 0, sizeof l_N_2400);
l_N_2400 = p_E;
for (;;) {
if ((l_N_2400 == NULL)) goto L_end2401;
{
if (((((*(R17 *)rt_nil_check(l_N_2400))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_N_2400))).f_KIND == g_N_APPLY)))
{
{
R12 * l_Y_2402; memset(&l_Y_2402, 0, sizeof l_Y_2402);
l_Y_2402 = r_LOOKUP(((*(R17 *)rt_nil_check(l_N_2400))).f_NAME);
if ((l_Y_2402 == NULL))
{
{ R12 * rv2403 = NULL;
return rv2403; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2402))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2404 = NULL;
return rv2404; }
}
{ R12 * rv2405 = l_Y_2402;
return rv2405; }
}
}
else if (((((((*(R17 *)rt_nil_check(l_N_2400))).f_KIND == g_N_INDEX) || (((*(R17 *)rt_nil_check(l_N_2400))).f_KIND == g_N_FIELD)) || (((*(R17 *)rt_nil_check(l_N_2400))).f_KIND == g_N_SUBSTR)) || (((*(R17 *)rt_nil_check(l_N_2400))).f_KIND == g_N_PAREN)))
{
l_N_2400 = ((*(R17 *)rt_nil_check(l_N_2400))).f_A;
}
else
{
{ R12 * rv2406 = NULL;
return rv2406; }
}
}
RT_B_TICK();
} L_end2401: ;
{ R12 * rv2407 = NULL;
return rv2407; }
rt_raise(RT_X_INIT);
}
static R17 * r_PATH_OF(R17 * p_E) { RT_B_TICK(); 
R17 * l_N_2408; memset(&l_N_2408, 0, sizeof l_N_2408);
l_N_2408 = p_E;
R17 * l_P_2409; memset(&l_P_2409, 0, sizeof l_P_2409);
l_P_2409 = NULL;
for (;;) {
if ((l_N_2408 == NULL)) goto L_end2410;
{
if ((((*(R17 *)rt_nil_check(l_N_2408))).f_KIND == g_N_FIELD))
{
l_P_2409 = r_NAME_REF(((*(R17 *)rt_nil_check(l_N_2408))).f_NAME, ((rt_int)0LL), NULL, l_P_2409);
l_N_2408 = ((*(R17 *)rt_nil_check(l_N_2408))).f_A;
}
else if (((((*(R17 *)rt_nil_check(l_N_2408))).f_KIND == g_N_INDEX) || (((*(R17 *)rt_nil_check(l_N_2408))).f_KIND == g_N_SUBSTR)))
{
l_P_2409 = r_NAME_REF(r_MKN(rt_str("*", 1)), ((rt_int)0LL), NULL, l_P_2409);
l_N_2408 = ((*(R17 *)rt_nil_check(l_N_2408))).f_A;
}
else if ((((*(R17 *)rt_nil_check(l_N_2408))).f_KIND == g_N_APPLY))
{
l_P_2409 = r_NAME_REF(r_MKN(rt_str("*", 1)), ((rt_int)0LL), NULL, l_P_2409);
{ R17 * rv2411 = l_P_2409;
return rv2411; }
}
else if ((((*(R17 *)rt_nil_check(l_N_2408))).f_KIND == g_N_PAREN))
{
l_N_2408 = ((*(R17 *)rt_nil_check(l_N_2408))).f_A;
}
else
{
{ R17 * rv2412 = l_P_2409;
return rv2412; }
}
}
RT_B_TICK();
} L_end2410: ;
{ R17 * rv2413 = l_P_2409;
return rv2413; }
rt_raise(RT_X_INIT);
}
static rt_int r_DISJOINT_PATHS(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_P_2414; memset(&l_P_2414, 0, sizeof l_P_2414);
l_P_2414 = p_A;
R17 * l_Q_2415; memset(&l_Q_2415, 0, sizeof l_Q_2415);
l_Q_2415 = p_B;
for (;;) {
if (((l_P_2414 == NULL) || (l_Q_2415 == NULL))) goto L_end2416;
{
if ((((!r_TEQS(((*(R17 *)rt_nil_check(l_P_2414))).f_NAME, rt_str("*", 1))) && (!r_TEQS(((*(R17 *)rt_nil_check(l_Q_2415))).f_NAME, rt_str("*", 1)))) && (!r_TEQ(((*(R17 *)rt_nil_check(l_P_2414))).f_NAME, ((*(R17 *)rt_nil_check(l_Q_2415))).f_NAME))))
{
{ rt_int rv2417 = 1;
return rv2417; }
}
l_P_2414 = ((*(R17 *)rt_nil_check(l_P_2414))).f_NEXT;
l_Q_2415 = ((*(R17 *)rt_nil_check(l_Q_2415))).f_NEXT;
}
RT_B_TICK();
} L_end2416: ;
{ rt_int rv2418 = 0;
return rv2418; }
rt_raise(RT_X_INIT);
}
static void r_EXPLICIT_GENERIC_ARGS(R12 * p_Y, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_USED_2419; memset(&l_USED_2419, 0, sizeof l_USED_2419);
l_USED_2419 = NULL;
R28 * l_P_2420; memset(&l_P_2420, 0, sizeof l_P_2420);
l_P_2420 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
R27 * l_A_2421; memset(&l_A_2421, 0, sizeof l_A_2421);
l_A_2421 = p_ARGS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_DECL == NULL))
{
return;
}
if (((!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_B == NULL)))
{
return;
}
r_NAMES_IN(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_B, &l_USED_2419);
for (;;) {
if (((l_P_2420 == NULL) || (l_A_2421 == NULL))) goto L_end2422;
{
if ((((((*(R28 *)rt_nil_check(l_P_2420))).f_MODE == g_M_IN) && r_IN_IDENTS(l_USED_2419, ((*(R28 *)rt_nil_check(l_P_2420))).f_NAME)) && (!(((*(R27 *)rt_nil_check(l_A_2421))).f_E == NULL))))
{
if ((!r_CONSTANT_EXPR(((*(R27 *)rt_nil_check(l_A_2421))).f_E)))
{
r_FAILT(p_LINE, rt_str("the argument of an explicit generic parameter is a constant or a constant expression (5): ", 90), ((*(R28 *)rt_nil_check(l_P_2420))).f_NAME);
}
}
l_P_2420 = ((*(R28 *)rt_nil_check(l_P_2420))).f_NEXT;
l_A_2421 = ((*(R27 *)rt_nil_check(l_A_2421))).f_NEXT;
}
RT_B_TICK();
} L_end2422: ;
}
static void r_NAMES_IN(R17 * p_L, R17 * *p_HEAD) { RT_B_TICK(); 
R17 * l_N_2423; memset(&l_N_2423, 0, sizeof l_N_2423);
l_N_2423 = p_L;
for (;;) {
if ((l_N_2423 == NULL)) goto L_end2424;
{
if (((((*(R17 *)rt_nil_check(l_N_2423))).f_KIND == g_N_NAME) || (((((*(R17 *)rt_nil_check(l_N_2423))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(l_N_2423))).f_A == NULL)))))
{
(*p_HEAD) = r_NAME_REF(((*(R17 *)rt_nil_check(l_N_2423))).f_NAME, ((rt_int)0LL), NULL, (*p_HEAD));
}
r_NAMES_IN(((*(R17 *)rt_nil_check(l_N_2423))).f_A, &(*p_HEAD));
r_NAMES_IN(((*(R17 *)rt_nil_check(l_N_2423))).f_B, &(*p_HEAD));
r_NAMES_IN(((*(R17 *)rt_nil_check(l_N_2423))).f_C, &(*p_HEAD));
l_N_2423 = ((*(R17 *)rt_nil_check(l_N_2423))).f_NEXT;
}
RT_B_TICK();
} L_end2424: ;
}
static rt_int r_CONSTANT_EXPR(R17 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv2425 = 1;
return rv2425; }
}
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY)))
{
{
R12 * l_Y_2426; memset(&l_Y_2426, 0, sizeof l_Y_2426);
l_Y_2426 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2426 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2426))).f_KIND == g_Y_ROUTINE))
{
if ((!(((*(R12 *)rt_nil_check(r_ORIGINAL(l_Y_2426)))).f_USES == NULL)))
{
{ rt_int rv2427 = 0;
return rv2427; }
}
}
if (((((*(R12 *)rt_nil_check(l_Y_2426))).f_KIND == g_Y_VAR) && (!((*(R12 *)rt_nil_check(l_Y_2426))).f_INPUT)))
{
{ rt_int rv2428 = 0;
return rv2428; }
}
}
}
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_DEREF))
{
{ rt_int rv2429 = 0;
return rv2429; }
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD))
{
{ rt_int rv2430 = r_CONSTANT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A);
return rv2430; }
}
{ rt_int rv2431 = ((r_CONSTANT_LIST(((*(R17 *)rt_nil_check(p_E))).f_A) && r_CONSTANT_LIST(((*(R17 *)rt_nil_check(p_E))).f_B)) && r_CONSTANT_LIST(((*(R17 *)rt_nil_check(p_E))).f_C));
return rv2431; }
rt_raise(RT_X_INIT);
}
static rt_int r_CONSTANT_LIST(R17 * p_L) { RT_B_TICK(); 
R17 * l_N_2432; memset(&l_N_2432, 0, sizeof l_N_2432);
l_N_2432 = p_L;
for (;;) {
if ((l_N_2432 == NULL)) goto L_end2433;
{
if ((!r_CONSTANT_EXPR(l_N_2432)))
{
{ rt_int rv2434 = 0;
return rv2434; }
}
l_N_2432 = ((*(R17 *)rt_nil_check(l_N_2432))).f_NEXT;
}
RT_B_TICK();
} L_end2433: ;
{ rt_int rv2435 = 1;
return rv2435; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKED_ELEMENT(R17 * p_E) { RT_B_TICK(); 
R22 * l_AT_2436; memset(&l_AT_2436, 0, sizeof l_AT_2436);
l_AT_2436 = NULL;
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
{
R12 * l_Y_2437; memset(&l_Y_2437, 0, sizeof l_Y_2437);
l_Y_2437 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_2437 == NULL))
{
{ rt_int rv2438 = 0;
return rv2438; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2437))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(l_Y_2437))).f_T == NULL)))
{
{ rt_int rv2439 = 0;
return rv2439; }
}
l_AT_2436 = r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2437))).f_T);
}
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_INDEX))
{
{
R14 l_SAVED_CODE_2440; memset(&l_SAVED_CODE_2440, 0, sizeof l_SAVED_CODE_2440);
S_R14(&l_SAVED_CODE_2440, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
l_AT_2436 = r_REAL_TYPE((r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL)).f_T);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2440, 0);
}
}
else
{
{ rt_int rv2441 = 0;
return rv2441; }
}
if ((!(((*(R22 *)rt_nil_check(l_AT_2436))).f_KIND == g_T_ARR)))
{
{ rt_int rv2442 = 0;
return rv2442; }
}
{ rt_int rv2443 = (!(r_PACKING_OF(l_AT_2436) == ((rt_int)2LL)));
return rv2443; }
rt_raise(RT_X_INIT);
}
static void r_NO_ALIASING(R12 * p_Y, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_A_2444; memset(&l_A_2444, 0, sizeof l_A_2444);
l_A_2444 = p_ARGS;
for (;;) {
if ((l_A_2444 == NULL)) goto L_end2445;
{
if (((((*(R27 *)rt_nil_check(l_A_2444))).f_MODE == g_M_INOUT) && (!(((*(R27 *)rt_nil_check(l_A_2444))).f_E == NULL))))
{
if (r_PACKED_ELEMENT(((*(R27 *)rt_nil_check(l_A_2444))).f_E))
{
r_FAIL(p_LINE, rt_str("only elements of ARRAY_STD arrays are inout arguments (3.8.3)", 61));
}
}
l_A_2444 = ((*(R27 *)rt_nil_check(l_A_2444))).f_NEXT;
}
RT_B_TICK();
} L_end2445: ;
l_A_2444 = p_ARGS;
for (;;) {
if ((l_A_2444 == NULL)) goto L_end2446;
{
if (((((((*(R27 *)rt_nil_check(l_A_2444))).f_MODE == g_M_INOUT) || (((*(R27 *)rt_nil_check(l_A_2444))).f_MODE == g_M_OUT))) && (!(((*(R27 *)rt_nil_check(l_A_2444))).f_E == NULL))))
{
{
R12 * l_V_2447; memset(&l_V_2447, 0, sizeof l_V_2447);
l_V_2447 = r_ARG_ROOT(((*(R27 *)rt_nil_check(l_A_2444))).f_E);
R27 * l_B_2448; memset(&l_B_2448, 0, sizeof l_B_2448);
l_B_2448 = ((*(R27 *)rt_nil_check(l_A_2444))).f_NEXT;
if ((!(l_V_2447 == NULL)))
{
for (;;) {
if ((l_B_2448 == NULL)) goto L_end2449;
{
if (((((*(R27 *)rt_nil_check(l_B_2448))).f_MODE == ((*(R27 *)rt_nil_check(l_A_2444))).f_MODE) && (!(((*(R27 *)rt_nil_check(l_B_2448))).f_E == NULL))))
{
if (((r_ARG_ROOT(((*(R27 *)rt_nil_check(l_B_2448))).f_E) == l_V_2447) && (!r_DISJOINT_PATHS(r_PATH_OF(((*(R27 *)rt_nil_check(l_A_2444))).f_E), r_PATH_OF(((*(R27 *)rt_nil_check(l_B_2448))).f_E)))))
{
r_FAILT(p_LINE, rt_str("a variable is more than one inout or output argument (4.3.3): ", 62), ((*(R12 *)rt_nil_check(l_V_2447))).f_NAME);
}
}
l_B_2448 = ((*(R27 *)rt_nil_check(l_B_2448))).f_NEXT;
}
RT_B_TICK();
} L_end2449: ;
if (((((*(R27 *)rt_nil_check(l_A_2444))).f_MODE == g_M_INOUT) && (!(((*(R12 *)rt_nil_check(p_Y))).f_USES == NULL))))
{
{
R17 * l_U_2450; memset(&l_U_2450, 0, sizeof l_U_2450);
l_U_2450 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_2450 == NULL)) goto L_end2451;
{
if ((r_TEQ(((*(R17 *)rt_nil_check(l_U_2450))).f_NAME, ((*(R12 *)rt_nil_check(l_V_2447))).f_NAME) && (((*(R17 *)rt_nil_check(l_U_2450))).f_IV == ((*(R12 *)rt_nil_check(l_V_2447))).f_OWNER)))
{
r_FAILT(p_LINE, rt_str("an inout argument the procedure also imports (4.3.3): ", 54), ((*(R12 *)rt_nil_check(l_V_2447))).f_NAME);
}
l_U_2450 = ((*(R17 *)rt_nil_check(l_U_2450))).f_NEXT;
}
RT_B_TICK();
} L_end2451: ;
}
}
}
}
}
l_A_2444 = ((*(R27 *)rt_nil_check(l_A_2444))).f_NEXT;
}
RT_B_TICK();
} L_end2446: ;
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
R21 * l_BS_2452; memset(&l_BS_2452, 0, sizeof l_BS_2452);
l_BS_2452 = r_NEW_BINDS();
R28 * l_P_2453; memset(&l_P_2453, 0, sizeof l_P_2453);
l_P_2453 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2454; memset(&l_A_2454, 0, sizeof l_A_2454);
l_A_2454 = p_ARGS;
rt_int l_SOME_M_2455; memset(&l_SOME_M_2455, 0, sizeof l_SOME_M_2455);
l_SOME_M_2455 = 0;
rt_int l_N_2456; memset(&l_N_2456, 0, sizeof l_N_2456);
l_N_2456 = ((rt_int)0LL);
for (;;) {
if (((l_P_2453 == NULL) || (l_A_2454 == NULL))) goto L_end2457;
{
if ((((((*(R28 *)rt_nil_check(l_P_2453))).f_MODE == g_M_IN) && (!(((*(R27 *)rt_nil_check(l_A_2454))).f_E == NULL))) && (!(((*(R28 *)rt_nil_check(l_P_2453))).f_T == NULL))))
{
{
R22 * l_RT_2458; memset(&l_RT_2458, 0, sizeof l_RT_2458);
l_RT_2458 = r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2453))).f_T);
R23 l_M_2459; memset(&l_M_2459, 0, sizeof l_M_2459);
S_R23(&l_M_2459, r_NO_MVAL(), 0);
if (((((*(R22 *)rt_nil_check(l_RT_2458))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2458))).f_SCALE == ((rt_int)0LL))))
{
if (r_MANIFEST_INT(((*(R27 *)rt_nil_check(l_A_2454))).f_E))
{
S_R23(&l_M_2459, r_MANIFEST(((*(R27 *)rt_nil_check(l_A_2454))).f_E), 0);
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_2458))).f_KIND == g_T_BOOL))
{
S_R23(&l_M_2459, r_MANIFEST(((*(R27 *)rt_nil_check(l_A_2454))).f_E), 0);
}
else if ((((*(R22 *)rt_nil_check(l_RT_2458))).f_KIND == g_T_ENUM))
{
S_R23(&l_M_2459, r_ENUM_MANIFEST(((*(R27 *)rt_nil_check(l_A_2454))).f_E, l_RT_2458), 0);
}
if ((l_M_2459).f_OK)
{
r_ADD_BIND(r_QMKN(rt_str("=", 1), ((*(R28 *)rt_nil_check(l_P_2453))).f_NAME), NULL, l_M_2459, NULL, l_BS_2452);
l_SOME_M_2455 = 1;
}
}
}
l_P_2453 = ((*(R28 *)rt_nil_check(l_P_2453))).f_NEXT;
l_A_2454 = ((*(R27 *)rt_nil_check(l_A_2454))).f_NEXT;
}
RT_B_TICK();
} L_end2457: ;
if ((!l_SOME_M_2455))
{
r_NEED_BODY(p_G);
{ R12 * rv2460 = p_G;
return rv2460; }
}
{
R12 * l_I_2461; memset(&l_I_2461, 0, sizeof l_I_2461);
l_I_2461 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2461 == NULL)) goto L_end2462;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2461))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_BS_2452))).f_NEXT))
{
{ R12 * rv2463 = l_I_2461;
return rv2463; }
}
l_N_2456 = rt_add(l_N_2456, ((rt_int)1LL));
l_I_2461 = ((*(R12 *)rt_nil_check(l_I_2461))).f_INSTANCES;
}
RT_B_TICK();
} L_end2462: ;
}
if ((l_N_2456 > ((rt_int)256LL)))
{
r_FAILT(p_LINE, rt_str("the INLINE expansions of the routine do not end (4.3.1): ", 57), ((*(R12 *)rt_nil_check(p_G))).f_NAME);
}
{ R12 * rv2464 = r_NEW_INSTANCE(p_G, ((*(R21 *)rt_nil_check(l_BS_2452))).f_NEXT, p_ARGS);
return rv2464; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_VISIBLE_2465; memset(&l_VISIBLE_2465, 0, sizeof l_VISIBLE_2465);
l_VISIBLE_2465 = r_SEG_VISIBLE(p_Y0, p_LINE);
R12 * l_Y_2466; memset(&l_Y_2466, 0, sizeof l_Y_2466);
l_Y_2466 = r_ORIGINAL(p_Y0);
R28 * l_P_2467; memset(&l_P_2467, 0, sizeof l_P_2467);
R27 * l_A_2468; memset(&l_A_2468, 0, sizeof l_A_2468);
l_A_2468 = p_ARGS;
R9 l_C_2469; memset(&l_C_2469, 0, sizeof l_C_2469);
S_R9(&l_C_2469, r_MK(rt_str("", 0)), 0);
R9 l_SEP_2470; memset(&l_SEP_2470, 0, sizeof l_SEP_2470);
S_R9(&l_SEP_2470, r_MK(rt_str("", 0)), 0);
R9 l_PRE_2471; memset(&l_PRE_2471, 0, sizeof l_PRE_2471);
S_R9(&l_PRE_2471, r_MK(rt_str("", 0)), 0);
R9 l_POST_2472; memset(&l_POST_2472, 0, sizeof l_POST_2472);
S_R9(&l_POST_2472, r_MK(rt_str("", 0)), 0);
rt_int l_SHARED_2473; memset(&l_SHARED_2473, 0, sizeof l_SHARED_2473);
l_SHARED_2473 = 0;
R22 * l_PT_2474; memset(&l_PT_2474, 0, sizeof l_PT_2474);
if ((!(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
if (((((*(R12 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R))).f_DECL == ((*(R12 *)rt_nil_check(l_Y_2466))).f_DECL) && (!(((*(R12 *)rt_nil_check(l_Y_2466))).f_DECL == NULL))))
{
if ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2466))).f_DECL))).f_FL == ((rt_int)1LL)))
{
r_FAILT(p_LINE, rt_str("an INLINE routine cannot be recursive (4.3.1): ", 47), ((*(R12 *)rt_nil_check(l_Y_2466))).f_NAME);
}
}
}
if (((*(R12 *)rt_nil_check(l_Y_2466))).f_GENERIC)
{
l_Y_2466 = r_INSTANCE(l_Y_2466, p_ARGS, p_LINE);
}
else if (((!(((*(R12 *)rt_nil_check(l_Y_2466))).f_DECL == NULL)) && (((*(R12 *)rt_nil_check(l_Y_2466))).f_BINDINGS == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2466))).f_DECL))).f_KIND == g_N_ROUTINE) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2466))).f_DECL))).f_FL == ((rt_int)1LL))))
{
l_Y_2466 = r_INLINE_INSTANCE(l_Y_2466, p_ARGS, p_LINE);
}
}
r_CHECK_CALL_IMPORTS(l_Y_2466, p_LINE);
r_NO_ALIASING(l_Y_2466, p_ARGS, p_LINE);
r_EXPLICIT_GENERIC_ARGS(l_Y_2466, p_ARGS, p_LINE);
if ((!(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
if (((((*(R12 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R))).f_DECL == ((*(R12 *)rt_nil_check(l_Y_2466))).f_DECL) && (!(((*(R12 *)rt_nil_check(l_Y_2466))).f_DECL == NULL))))
{
if ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2466))).f_DECL))).f_FL == ((rt_int)1LL)))
{
r_FAILT(p_LINE, rt_str("an INLINE routine cannot be recursive (4.3.1): ", 47), ((*(R12 *)rt_nil_check(l_Y_2466))).f_NAME);
}
{
R17 * l_U_2475; memset(&l_U_2475, 0, sizeof l_U_2475);
l_U_2475 = ((*(R12 *)rt_nil_check(l_Y_2466))).f_USES;
for (;;) {
if ((l_U_2475 == NULL)) goto L_end2476;
{
if ((!(r_LOOKUP(((*(R17 *)rt_nil_check(l_U_2475))).f_NAME) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_LOOKUP(((*(R17 *)rt_nil_check(l_U_2475))).f_NAME)))).f_LEVEL > ((rt_int)0LL)))
{
r_FAILT(p_LINE, rt_str("a recursive routine imports only static data (4.3.1): ", 54), ((*(R17 *)rt_nil_check(l_U_2475))).f_NAME);
}
}
l_U_2475 = ((*(R17 *)rt_nil_check(l_U_2475))).f_NEXT;
}
RT_B_TICK();
} L_end2476: ;
}
}
}
if ((!(r_CUR_GENERIC() == NULL)))
{
{
R27 * l_Q_2477; memset(&l_Q_2477, 0, sizeof l_Q_2477);
l_Q_2477 = p_ARGS;
rt_int l_GEN_ARG_2478; memset(&l_GEN_ARG_2478, 0, sizeof l_GEN_ARG_2478);
l_GEN_ARG_2478 = 0;
for (;;) {
if ((l_Q_2477 == NULL)) goto L_end2479;
{
if (((*(R27 *)rt_nil_check(l_Q_2477))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_Q_2477))).f_V).f_T == NULL)))
{
if (((((*(R22 *)rt_nil_check((((*(R27 *)rt_nil_check(l_Q_2477))).f_V).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
l_GEN_ARG_2478 = 1;
}
}
}
l_Q_2477 = ((*(R27 *)rt_nil_check(l_Q_2477))).f_NEXT;
}
RT_B_TICK();
} L_end2479: ;
if (l_GEN_ARG_2478)
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2466))).f_BINDINGS == NULL)))
{
r_REQUIRE_WHERE_SUBSET(l_Y_2466, p_LINE);
}
else
{
r_REQUIRE_WHERE(r_BASE_NAME(l_Y_2466), p_LINE);
}
}
}
}
{
R17 * l_U_2480; memset(&l_U_2480, 0, sizeof l_U_2480);
l_U_2480 = ((*(R12 *)rt_nil_check(l_Y_2466))).f_USES;
for (;;) {
if ((l_U_2480 == NULL)) goto L_end2481;
{
{
R12 * l_H_2482; memset(&l_H_2482, 0, sizeof l_H_2482);
l_H_2482 = r_LOOKUP(((*(R17 *)rt_nil_check(l_U_2480))).f_NAME);
if ((!(l_H_2482 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_H_2482))).f_WITHV == ((rt_int)2LL)) && (((*(R12 *)rt_nil_check(l_H_2482))).f_OWNER == ((*(R17 *)rt_nil_check(l_U_2480))).f_IV)))
{
r_FAIL2(p_LINE, rt_str("the routine ", 12), ((*(R12 *)rt_nil_check(l_Y_2466))).f_NAME, rt_str(" imports ", 9), ((*(R17 *)rt_nil_check(l_U_2480))).f_NAME, rt_str(", which a WITH NAMING hides (4.5.4)", 35));
}
}
}
l_U_2480 = ((*(R17 *)rt_nil_check(l_U_2480))).f_NEXT;
}
RT_B_TICK();
} L_end2481: ;
}
if (((((((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL)) || (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL)))) && (!(((*(R12 *)rt_nil_check(l_Y_2466))).f_USES == NULL))))
{
r_FAILT(p_LINE, rt_str("a record-spec is a closed scope: no function importing a variable (3.9.1): ", 75), ((*(R12 *)rt_nil_check(l_Y_2466))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_2466))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_C_2469, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_2466))).f_LEVEL), 0);
S_R9(&l_SEP_2470, r_MK(rt_str(", ", 2)), 0);
}
{
R27 * l_Q_2483; memset(&l_Q_2483, 0, sizeof l_Q_2483);
l_Q_2483 = p_ARGS;
for (;;) {
if ((l_Q_2483 == NULL)) goto L_end2484;
{
if ((!(((*(R27 *)rt_nil_check(l_Q_2483))).f_MODE == g_M_IN)))
{
l_SHARED_2473 = 1;
}
l_Q_2483 = ((*(R27 *)rt_nil_check(l_Q_2483))).f_NEXT;
}
RT_B_TICK();
} L_end2484: ;
if ((!(((*(R12 *)rt_nil_check(l_Y_2466))).f_USES == NULL)))
{
l_SHARED_2473 = 1;
}
}
l_P_2467 = ((*(R12 *)rt_nil_check(l_Y_2466))).f_PARAMS;
for (;;) {
if ((l_P_2467 == NULL)) goto L_end2485;
{
if ((l_A_2468 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
l_PT_2474 = r_FORMAL_VIEW(l_Y_2466, l_P_2467);
if ((l_PT_2474 == NULL))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2467))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2474)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_2486; memset(&l_V_2486, 0, sizeof l_V_2486);
R9 l_CV_2487; memset(&l_CV_2487, 0, sizeof l_CV_2487);
if ((((*(R27 *)rt_nil_check(l_A_2468))).f_HAVE && (!r_WANT_SENSITIVE(l_A_2468))))
{
S_R26(&l_V_2486, ((*(R27 *)rt_nil_check(l_A_2468))).f_V, 0);
}
else
{
S_R26(&l_V_2486, r_EXPR(((*(R27 *)rt_nil_check(l_A_2468))).f_E, l_PT_2474), 0);
}
S_R9(&l_CV_2487, r_CONVERT(l_V_2486, l_PT_2474, p_LINE, r_NO_TEXT()), 0);
if (((l_SHARED_2473 && (l_V_2486).f_LVAL) && r_IS_STRUCTURED(l_PT_2474)))
{
S_R9(&l_CV_2487, r_COPY_OF(l_PT_2474, l_CV_2487), 0);
}
S_R9(&l_C_2469, r_FMT3(rt_str("@@@", 3), l_C_2469, l_SEP_2470, l_CV_2487), 0);
S_R9(&l_SEP_2470, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_2488; memset(&l_V_2488, 0, sizeof l_V_2488);
if (((*(R27 *)rt_nil_check(l_A_2468))).f_HAVE)
{
S_R26(&l_V_2488, ((*(R27 *)rt_nil_check(l_A_2468))).f_V, 0);
}
else
{
S_R26(&l_V_2488, r_EXPR(((*(R27 *)rt_nil_check(l_A_2468))).f_E, l_PT_2474), 0);
}
if (((!(((*(R27 *)rt_nil_check(l_A_2468))).f_E == NULL)) && (!(l_V_2488).f_LVAL)))
{
if ((((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2468))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2468))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_2488, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_2488).f_C), (l_V_2488).f_T), 0);
(l_V_2488).f_LVAL = 1;
}
}
if ((!(l_V_2488).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(l_PT_2474, (l_V_2488).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(l_PT_2474));
}
if (((((*(R28 *)rt_nil_check(l_P_2467))).f_MODE == g_M_INOUT) && (!((r_SAME_TYPE(l_PT_2474, (l_V_2488).f_T) && r_SAME_RANGE(l_PT_2474, (l_V_2488).f_T))))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
if (((((*(R28 *)rt_nil_check(l_P_2467))).f_MODE == g_M_OUT) && (!((r_SAME_TYPE(l_PT_2474, (l_V_2488).f_T) && r_SAME_RANGE(l_PT_2474, (l_V_2488).f_T))))))
{
{
R9 l_TMP_2489; memset(&l_TMP_2489, 0, sizeof l_TMP_2489);
S_R9(&l_TMP_2489, r_NEW_NAME(rt_str("oa", 2)), 0);
R9 l_AP_2490; memset(&l_AP_2490, 0, sizeof l_AP_2490);
S_R9(&l_AP_2490, r_NEW_NAME(rt_str("op", 2)), 0);
S_R9(&l_PRE_2471, r_FMT4(rt_str("@ @ *@ = &@;", 12), l_PRE_2471, r_CTYPE((l_V_2488).f_T), l_AP_2490, (l_V_2488).f_C), 0);
S_R9(&l_PRE_2471, r_FMT4(rt_str("@ @ @ = @;", 10), l_PRE_2471, r_CTYPE(l_PT_2474), l_TMP_2489, r_COPY_OF((l_V_2488).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2490))), 0);
S_R9(&l_POST_2472, r_FMT2(rt_str("@ @", 3), l_POST_2472, r_STORE_CODE((l_V_2488).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2490), r_MKET(l_TMP_2489, l_PT_2474), p_LINE, r_NO_TEXT())), 0);
S_R9(&l_C_2469, r_FMT3(rt_str("@@&@", 4), l_C_2469, l_SEP_2470, l_TMP_2489), 0);
}
}
else
{
S_R9(&l_C_2469, r_FMT3(rt_str("@@&@", 4), l_C_2469, l_SEP_2470, (l_V_2488).f_C), 0);
}
S_R9(&l_SEP_2470, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_2468 = ((*(R27 *)rt_nil_check(l_A_2468))).f_NEXT;
l_P_2467 = ((*(R28 *)rt_nil_check(l_P_2467))).f_NEXT;
}
RT_B_TICK();
} L_end2485: ;
if ((!(l_A_2468 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
if (((l_PRE_2471).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2491 = r_MKET(r_FMT4(rt_str("({ @ @(@); @ })", 15), l_PRE_2471, ((*(R12 *)rt_nil_check(l_Y_2466))).f_ACCESS, l_C_2469, l_POST_2472), r_RESULT_VIEW(l_Y_2466));
return rv2491; }
}
{ R26 rv2492 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_2466))).f_ACCESS, l_C_2469), r_RESULT_VIEW(l_Y_2466));
return rv2492; }
rt_raise(RT_X_INIT);
}
static R22 * r_FORMAL_VIEW(R12 * p_R, R28 * p_P) { RT_B_TICK(); 
if (((((*(R28 *)rt_nil_check(p_P))).f_T == NULL) || (((*(R28 *)rt_nil_check(p_P))).f_TS == NULL)))
{
{ R22 * rv2493 = ((*(R28 *)rt_nil_check(p_P))).f_T;
return rv2493; }
}
{ R22 * rv2494 = r_OUTSIDE_VIEW(p_R, ((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R28 *)rt_nil_check(p_P))).f_T);
return rv2494; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESULT_VIEW(R12 * p_R) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_R))).f_DECL == NULL) || (((*(R12 *)rt_nil_check(p_R))).f_RESULT == NULL)))
{
{ R22 * rv2495 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2495; }
}
if (((!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B == NULL)))
{
{ R22 * rv2496 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2496; }
}
{ R22 * rv2497 = r_OUTSIDE_VIEW(p_R, ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2497; }
rt_raise(RT_X_INIT);
}
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R17 * p_TS, R22 * p_T) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_R))).f_MODL == NULL) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)) || (!(((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))))
{
{ R22 * rv2498 = p_T;
return rv2498; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_R))).f_MODL))
{
{ R22 * rv2499 = p_T;
return rv2499; }
}
{
R12 * l_M_2500; memset(&l_M_2500, 0, sizeof l_M_2500);
l_M_2500 = ((*(R12 *)rt_nil_check(p_R))).f_MODL;
for (;;) {
if ((l_M_2500 == NULL)) goto L_end2501;
{
{
R12 * l_Y_2502; memset(&l_Y_2502, 0, sizeof l_Y_2502);
l_Y_2502 = r_MEMBER_TYPE(l_M_2500, ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_2502 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_2502))).f_EXPORTED)
{
{ R22 * rv2503 = r_ABSTRACT_VIEW(l_Y_2502, p_T);
return rv2503; }
}
{ R22 * rv2504 = p_T;
return rv2504; }
}
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(l_M_2500))).f_MODL))
{
goto L_end2501;
}
l_M_2500 = ((*(R12 *)rt_nil_check(l_M_2500))).f_MODL;
}
RT_B_TICK();
} L_end2501: ;
}
{ R22 * rv2505 = p_T;
return rv2505; }
rt_raise(RT_X_INIT);
}
static R12 * r_MEMBER_TYPE(R12 * p_M, R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2506; memset(&l_Y_2506, 0, sizeof l_Y_2506);
l_Y_2506 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
if (((*(R12 *)rt_nil_check(p_M))).f_BUSY)
{
{
R12 * l_Z_2507; memset(&l_Z_2507, 0, sizeof l_Z_2507);
l_Z_2507 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Z_2507 == NULL)) goto L_end2508;
{
if ((((((*(R12 *)rt_nil_check(l_Z_2507))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Z_2507))).f_MODL == p_M)) && (((*(R12 *)rt_nil_check(l_Z_2507))).f_ORIG == NULL)))
{
{ R12 * rv2509 = l_Z_2507;
return rv2509; }
}
l_Z_2507 = r_LOOKUP_NEXT(l_Z_2507);
}
RT_B_TICK();
} L_end2508: ;
}
{ R12 * rv2510 = NULL;
return rv2510; }
}
for (;;) {
if ((l_Y_2506 == NULL)) goto L_end2511;
{
if (((((*(R12 *)rt_nil_check(l_Y_2506))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_2506))).f_NAME, p_NAME)))
{
{ R12 * rv2512 = l_Y_2506;
return rv2512; }
}
l_Y_2506 = ((*(R12 *)rt_nil_check(l_Y_2506))).f_SNEXT;
}
RT_B_TICK();
} L_end2511: ;
{ R12 * rv2513 = NULL;
return rv2513; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_2514; memset(&l_K_2514, 0, sizeof l_K_2514);
l_K_2514 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND;
{ rt_int rv2515 = ((((l_K_2514 == g_T_STR) || (l_K_2514 == g_T_BITS)) || (l_K_2514 == g_T_ARR)) || (l_K_2514 == g_T_REC));
return rv2515; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2516; memset(&l_RA_2516, 0, sizeof l_RA_2516);
l_RA_2516 = r_REAL_TYPE(p_A);
R22 * l_RB_2517; memset(&l_RB_2517, 0, sizeof l_RB_2517);
l_RB_2517 = r_REAL_TYPE(p_B);
if ((!r_IS_NUMERIC_OR_ENUM(l_RA_2516)))
{
{ rt_int rv2518 = 1;
return rv2518; }
}
if ((((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2516))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2516))).f_HI_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2517))).f_LO_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2517))).f_HI_C)))
{
{ rt_int rv2519 = 1;
return rv2519; }
}
if ((((((*(R22 *)rt_nil_check(l_RA_2516))).f_LO_C).f_LEN == ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_RB_2517))).f_LO_C).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2520 = ((((*(R22 *)rt_nil_check(l_RA_2516))).f_LO_C).f_LEN == (((*(R22 *)rt_nil_check(l_RB_2517))).f_LO_C).f_LEN);
return rv2520; }
}
if (((((((*(R22 *)rt_nil_check(l_RA_2516))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_RB_2517))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_RA_2516))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(l_RB_2517))).f_MHI).f_OK))
{
{ rt_int rv2521 = (((((*(R22 *)rt_nil_check(l_RA_2516))).f_MLO).f_V == (((*(R22 *)rt_nil_check(l_RB_2517))).f_MLO).f_V) && ((((*(R22 *)rt_nil_check(l_RA_2516))).f_MHI).f_V == (((*(R22 *)rt_nil_check(l_RB_2517))).f_MHI).f_V));
return rv2521; }
}
{ rt_int rv2522 = (r_TEQ(((*(R22 *)rt_nil_check(l_RA_2516))).f_LO_C, ((*(R22 *)rt_nil_check(l_RB_2517))).f_LO_C) && r_TEQ(((*(R22 *)rt_nil_check(l_RA_2516))).f_HI_C, ((*(R22 *)rt_nil_check(l_RB_2517))).f_HI_C));
return rv2522; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R17 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2523 = 0;
return rv2523; }
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv2524 = 1;
return rv2524; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2525 = 1;
return rv2525; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2526 = r_STATIC_GENERIC(((*(R17 *)rt_nil_check(p_TS))).f_C);
return rv2526; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_N_REP) && r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_A)))
{
{ rt_int rv2527 = 1;
return rv2527; }
}
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv2528 = r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(p_TS))).f_A);
return rv2528; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv2529 = r_STATIC_GENERIC(((*(R17 *)rt_nil_check(p_TS))).f_A);
return rv2529; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv2530 = ((((*(R17 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv2530; }
}
else if (((r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv2531 = 0;
return rv2531; }
}
{
R12 * l_Y_2532; memset(&l_Y_2532, 0, sizeof l_Y_2532);
l_Y_2532 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
R17 * l_A_2533; memset(&l_A_2533, 0, sizeof l_A_2533);
l_A_2533 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R17 * l_F_2534; memset(&l_F_2534, 0, sizeof l_F_2534);
if ((l_Y_2532 == NULL))
{
{ rt_int rv2535 = 0;
return rv2535; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2532))).f_KIND == g_Y_GEN))
{
{ rt_int rv2536 = 1;
return rv2536; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2532))).f_DECL == NULL))
{
{ rt_int rv2537 = 0;
return rv2537; }
}
l_F_2534 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2532))).f_DECL))).f_A;
for (;;) {
if ((l_F_2534 == NULL)) goto L_end2538;
{
{
R17 * l_N_2539; memset(&l_N_2539, 0, sizeof l_N_2539);
l_N_2539 = ((*(R17 *)rt_nil_check(l_F_2534))).f_A;
for (;;) {
if ((l_N_2539 == NULL)) goto L_end2540;
{
if ((l_A_2533 == NULL))
{
{ rt_int rv2541 = 0;
return rv2541; }
}
if (((((*(R17 *)rt_nil_check(l_F_2534))).f_B == NULL) && ((((((*(R17 *)rt_nil_check(l_A_2533))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_A_2533))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_2533)))))
{
{ rt_int rv2542 = 1;
return rv2542; }
}
l_A_2533 = ((*(R17 *)rt_nil_check(l_A_2533))).f_NEXT;
l_N_2539 = ((*(R17 *)rt_nil_check(l_N_2539))).f_NEXT;
}
RT_B_TICK();
} L_end2540: ;
}
l_F_2534 = ((*(R17 *)rt_nil_check(l_F_2534))).f_NEXT;
}
RT_B_TICK();
} L_end2538: ;
}
}
{ rt_int rv2543 = 0;
return rv2543; }
rt_raise(RT_X_INIT);
}
static R17 * r_OWN_NAMES(R17 * p_R) { RT_B_TICK(); 
R17 * l_HEAD_2544; memset(&l_HEAD_2544, 0, sizeof l_HEAD_2544);
l_HEAD_2544 = NULL;
r_GEN_NAMES(((*(R17 *)rt_nil_check(p_R))).f_A, &l_HEAD_2544);
{ R17 * rv2545 = l_HEAD_2544;
return rv2545; }
rt_raise(RT_X_INIT);
}
static rt_int r_DECLARES_DERIVED(R17 * p_L) { RT_B_TICK(); 
R17 * l_N_2546; memset(&l_N_2546, 0, sizeof l_N_2546);
l_N_2546 = p_L;
for (;;) {
if ((l_N_2546 == NULL)) goto L_end2547;
{
if (((((*(R17 *)rt_nil_check(l_N_2546))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(l_N_2546))).f_NAME).f_LEN > ((rt_int)0LL))))
{
{ rt_int rv2548 = 1;
return rv2548; }
}
if ((((*(R17 *)rt_nil_check(l_N_2546))).f_KIND == g_N_PARAM))
{
if (r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2546))).f_B))
{
{ rt_int rv2549 = 1;
return rv2549; }
}
}
else if ((!(((*(R17 *)rt_nil_check(l_N_2546))).f_KIND == g_TS_GEN)))
{
if ((r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2546))).f_A) || r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2546))).f_C)))
{
{ rt_int rv2550 = 1;
return rv2550; }
}
if ((!(((*(R17 *)rt_nil_check(l_N_2546))).f_B == NULL)))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_2546))).f_B))).f_KIND == g_N_RANGE))
{
if ((r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_2546))).f_B))).f_A) || r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_2546))).f_B))).f_B)))
{
{ rt_int rv2551 = 1;
return rv2551; }
}
}
else if (r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2546))).f_B))
{
{ rt_int rv2552 = 1;
return rv2552; }
}
}
}
l_N_2546 = ((*(R17 *)rt_nil_check(l_N_2546))).f_NEXT;
}
RT_B_TICK();
} L_end2547: ;
{ rt_int rv2553 = 0;
return rv2553; }
rt_raise(RT_X_INIT);
}
static R22 * r_MARK_GENP(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R22 * l_C_2554; memset(&l_C_2554, 0, sizeof l_C_2554);
l_C_2554 = r_COPY_TYP(p_T);
S_R9(&((*(R22 *)rt_nil_check(l_C_2554))).f_GENP, p_NAME, 0);
{ R22 * rv2555 = l_C_2554;
return rv2555; }
rt_raise(RT_X_INIT);
}
static R12 * r_CUR_GENERIC(void) { RT_B_TICK(); 
R19 * l_CS_2556; memset(&l_CS_2556, 0, sizeof l_CS_2556);
l_CS_2556 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
for (;;) {
if ((l_CS_2556 == NULL)) goto L_end2557;
{
if ((!(((*(R19 *)rt_nil_check(l_CS_2556))).f_R == NULL)))
{
if ((!(((*(R12 *)rt_nil_check(((*(R19 *)rt_nil_check(l_CS_2556))).f_R))).f_BINDINGS == NULL)))
{
{ R12 * rv2558 = ((*(R19 *)rt_nil_check(l_CS_2556))).f_R;
return rv2558; }
}
}
l_CS_2556 = ((*(R19 *)rt_nil_check(l_CS_2556))).f_UP;
}
RT_B_TICK();
} L_end2557: ;
{ R12 * rv2559 = NULL;
return rv2559; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_WHERE(R12 * p_G, R9 p_NAME) { RT_B_TICK(); 
R17 * l_N_2560; memset(&l_N_2560, 0, sizeof l_N_2560);
l_N_2560 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
for (;;) {
if ((l_N_2560 == NULL)) goto L_end2561;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_N_2560))).f_A, p_NAME))
{
{ rt_int rv2562 = 1;
return rv2562; }
}
l_N_2560 = ((*(R17 *)rt_nil_check(l_N_2560))).f_NEXT;
}
RT_B_TICK();
} L_end2561: ;
{ rt_int rv2563 = 0;
return rv2563; }
rt_raise(RT_X_INIT);
}
static void r_REQUIRE_WHERE(R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_G_2564; memset(&l_G_2564, 0, sizeof l_G_2564);
l_G_2564 = r_CUR_GENERIC();
if ((l_G_2564 == NULL))
{
return;
}
if ((!r_IN_WHERE(l_G_2564, p_NAME)))
{
r_FAILT(p_LINE, rt_str("invoked with objects of a TYPE parameter, so named in the WHERE clause (5.2): ", 78), p_NAME);
}
}
static void r_REQUIRE_WHERE_SUBSET(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_N_2565; memset(&l_N_2565, 0, sizeof l_N_2565);
l_N_2565 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_D))).f_B;
R12 * l_G_2566; memset(&l_G_2566, 0, sizeof l_G_2566);
l_G_2566 = r_CUR_GENERIC();
if ((l_G_2566 == NULL))
{
return;
}
for (;;) {
if ((l_N_2565 == NULL)) goto L_end2567;
{
{
R17 * l_T_2568; memset(&l_T_2568, 0, sizeof l_T_2568);
l_T_2568 = ((*(R17 *)rt_nil_check(l_N_2565))).f_A;
for (;;) {
if ((l_T_2568 == NULL)) goto L_end2569;
{
if ((!r_IN_WHERE(l_G_2566, ((*(R17 *)rt_nil_check(l_T_2568))).f_NAME)))
{
r_FAILT(p_LINE, rt_str("the WHERE routines of the invoked generic routine are among the caller's (5.2): ", 80), ((*(R17 *)rt_nil_check(l_T_2568))).f_NAME);
}
l_T_2568 = ((*(R17 *)rt_nil_check(l_T_2568))).f_NEXT;
}
RT_B_TICK();
} L_end2569: ;
}
l_N_2565 = ((*(R17 *)rt_nil_check(l_N_2565))).f_NEXT;
}
RT_B_TICK();
} L_end2567: ;
}
static rt_int r_HAS_GEN_ARG(R17 * p_A) { RT_B_TICK(); 
R17 * l_P_2570; memset(&l_P_2570, 0, sizeof l_P_2570);
l_P_2570 = p_A;
for (;;) {
if ((l_P_2570 == NULL)) goto L_end2571;
{
if (((((*(R17 *)rt_nil_check(l_P_2570))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_P_2570))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2572 = 1;
return rv2572; }
}
l_P_2570 = ((*(R17 *)rt_nil_check(l_P_2570))).f_NEXT;
}
RT_B_TICK();
} L_end2571: ;
{ rt_int rv2573 = 0;
return rv2573; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { RT_B_TICK(); 
rt_int l_ENTERED_2574; memset(&l_ENTERED_2574, 0, sizeof l_ENTERED_2574);
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
l_ENTERED_2574 = r_ENTER_MODULE_FOR(p_Y);
{
R12 * l_SAVED_SEG_2575; memset(&l_SAVED_SEG_2575, 0, sizeof l_SAVED_SEG_2575);
l_SAVED_SEG_2575 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(p_Y))).f_HOME;
r_ROUTINE_HEADER1(p_Y);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_2575;
}
if (l_ENTERED_2574)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
}
static void r_ROUTINE_HEADER1(R12 * p_Y) { RT_B_TICK(); 
R17 * l_R_2576; memset(&l_R_2576, 0, sizeof l_R_2576);
l_R_2576 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R17 * l_P_2577; memset(&l_P_2577, 0, sizeof l_P_2577);
R28 * l_TAIL_2578; memset(&l_TAIL_2578, 0, sizeof l_TAIL_2578);
l_TAIL_2578 = NULL;
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_2577 = ((*(R17 *)rt_nil_check(l_R_2576))).f_A;
for (;;) {
if ((l_P_2577 == NULL)) goto L_end2579;
{
if (((((*(R17 *)rt_nil_check(l_P_2577))).f_B == NULL) || r_STATIC_GENERIC(((*(R17 *)rt_nil_check(l_P_2577))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2577 = ((*(R17 *)rt_nil_check(l_P_2577))).f_NEXT;
}
RT_B_TICK();
} L_end2579: ;
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2576))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
{
R17 * l_N_2580; memset(&l_N_2580, 0, sizeof l_N_2580);
l_N_2580 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2576))).f_D))).f_B;
for (;;) {
if ((l_N_2580 == NULL)) goto L_end2581;
{
{
R17 * l_T_2582; memset(&l_T_2582, 0, sizeof l_T_2582);
l_T_2582 = ((*(R17 *)rt_nil_check(l_N_2580))).f_A;
for (;;) {
if ((l_T_2582 == NULL)) goto L_end2583;
{
if ((r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_T_2582))).f_B))).f_A) || r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_T_2582))).f_B))).f_B)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_T_2582))).f_LINE, rt_str("a WHERE template declares no derived generic parameter (5.2): ", 62), ((*(R17 *)rt_nil_check(l_T_2582))).f_NAME);
}
l_T_2582 = ((*(R17 *)rt_nil_check(l_T_2582))).f_NEXT;
}
RT_B_TICK();
} L_end2583: ;
}
l_N_2580 = ((*(R17 *)rt_nil_check(l_N_2580))).f_NEXT;
}
RT_B_TICK();
} L_end2581: ;
}
}
l_P_2577 = ((*(R17 *)rt_nil_check(l_R_2576))).f_A;
for (;;) {
if ((l_P_2577 == NULL)) goto L_end2584;
{
{
R28 * l_PM_2585; memset(&l_PM_2585, 0, sizeof l_PM_2585);
l_PM_2585 = ((R28 *)rt_b_new(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2585)), ({ R28 rc2586; memset(&rc2586, 0, sizeof rc2586);  S_R9(&rc2586.f_NAME, ((*(R17 *)rt_nil_check(l_P_2577))).f_NAME, 0); rc2586.f_MODE = ((*(R17 *)rt_nil_check(l_P_2577))).f_IV; rc2586.f_T = NULL; rc2586.f_TS = ((*(R17 *)rt_nil_check(l_P_2577))).f_B; rc2586.f_NEXT = NULL; rc2586; }), 0);
if (((((*(R17 *)rt_nil_check(l_R_2576))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(l_P_2577))).f_IV == g_M_IN))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2577))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!(((*(R17 *)rt_nil_check(l_P_2577))).f_B == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_2577))).f_B))).f_KIND == g_TS_ROUTINE) && (!(((*(R17 *)rt_nil_check(l_P_2577))).f_IV == g_M_IN))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2577))).f_LINE, rt_str("a routine-spec declares only input parameters (5.1)", 51));
}
if (r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_P_2577))).f_B, NULL, r_OWN_NAMES(l_R_2576)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2577))).f_LINE, rt_str("the attributes in the type of a formal are manifest (4.3.1)", 59));
}
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R28 *)rt_nil_check(l_PM_2585))).f_T = r_RESOLVE(((*(R17 *)rt_nil_check(l_P_2577))).f_B);
}
if ((l_TAIL_2578 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_2585;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2578))).f_NEXT = l_PM_2585;
}
l_TAIL_2578 = l_PM_2585;
}
l_P_2577 = ((*(R17 *)rt_nil_check(l_P_2577))).f_NEXT;
}
RT_B_TICK();
} L_end2584: ;
if ((!(((*(R17 *)rt_nil_check(l_R_2576))).f_B == NULL)))
{
if (r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_R_2576))).f_B, NULL, r_OWN_NAMES(l_R_2576)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_2576))).f_LINE, rt_str("the returns-clause may not refer to a variable (4.3.1)", 54));
}
}
if ((((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC) && r_TEQS(r_BASE_NAME(p_Y), rt_str("STORE_", 6))) && (!(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS == NULL))))
{
{
R28 * l_LAST_2587; memset(&l_LAST_2587, 0, sizeof l_LAST_2587);
l_LAST_2587 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((((*(R28 *)rt_nil_check(l_LAST_2587))).f_NEXT == NULL)) goto L_end2588;
{
l_LAST_2587 = ((*(R28 *)rt_nil_check(l_LAST_2587))).f_NEXT;
}
RT_B_TICK();
} L_end2588: ;
if ((((!(l_LAST_2587 == ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS)) && (!(((*(R28 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS))).f_T == NULL))) && (!(((*(R28 *)rt_nil_check(l_LAST_2587))).f_T == NULL))))
{
if ((!r_SAME_CLASS(((*(R28 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS))).f_T, ((*(R28 *)rt_nil_check(l_LAST_2587))).f_T)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_2576))).f_LINE, rt_str("both arguments of STORE_ belong to the same type class (D.4)", 60));
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
R17 * l_R_2589; memset(&l_R_2589, 0, sizeof l_R_2589);
l_R_2589 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_2590; memset(&l_T_2590, 0, sizeof l_T_2590);
if ((((*(R17 *)rt_nil_check(l_R_2589))).f_B == NULL))
{
{ R22 * rv2591 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv2591; }
}
r_OPEN_SCOPE();
{
R28 * l_P_2592; memset(&l_P_2592, 0, sizeof l_P_2592);
l_P_2592 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2592 == NULL)) goto L_end2593;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2592))).f_T == NULL)))
{
{
R12 * l_V_2594; memset(&l_V_2594, 0, sizeof l_V_2594);
l_V_2594 = r_NEW_SYM(g_Y_CONST, ((*(R28 *)rt_nil_check(l_P_2592))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2594))).f_T = ((*(R28 *)rt_nil_check(l_P_2592))).f_T;
S_R9(&((*(R12 *)rt_nil_check(l_V_2594))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2592))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_V_2594))).f_INPUT = 1;
r_DEFINE(l_V_2594, ((*(R17 *)rt_nil_check(l_R_2589))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2592))).f_T, ((*(R12 *)rt_nil_check(l_V_2594))).f_ACCESS, ((*(R17 *)rt_nil_check(l_R_2589))).f_LINE, 0);
}
}
l_P_2592 = ((*(R28 *)rt_nil_check(l_P_2592))).f_NEXT;
}
RT_B_TICK();
} L_end2593: ;
}
l_T_2590 = r_RESOLVE(((*(R17 *)rt_nil_check(l_R_2589))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv2595 = l_T_2590;
return rv2595; }
rt_raise(RT_X_INIT);
}
static R9 r_C_HEADER(R12 * p_Y) { RT_B_TICK(); 
R9 l_PS_2596; memset(&l_PS_2596, 0, sizeof l_PS_2596);
S_R9(&l_PS_2596, r_MK(rt_str("", 0)), 0);
R9 l_SEP_2597; memset(&l_SEP_2597, 0, sizeof l_SEP_2597);
S_R9(&l_SEP_2597, r_MK(rt_str("", 0)), 0);
R28 * l_P_2598; memset(&l_P_2598, 0, sizeof l_P_2598);
l_P_2598 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_PS_2596, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R9(&l_SEP_2597, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_2598 == NULL)) goto L_end2599;
{
if ((((*(R28 *)rt_nil_check(l_P_2598))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2598))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2598))).f_MODE == g_M_IN))
{
S_R9(&l_PS_2596, r_FMT4(rt_str("@@@ p_@", 7), l_PS_2596, l_SEP_2597, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2598))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2598))).f_NAME)), 0);
S_R9(&l_SEP_2597, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R9(&l_PS_2596, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_2596, l_SEP_2597, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2598))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2598))).f_NAME)), 0);
S_R9(&l_SEP_2597, r_MK(rt_str(", ", 2)), 0);
}
l_P_2598 = ((*(R28 *)rt_nil_check(l_P_2598))).f_NEXT;
}
RT_B_TICK();
} L_end2599: ;
if (((l_PS_2596).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_PS_2596, r_MK(rt_str("void", 4)), 0);
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_LINKAGE == ((rt_int)1LL)))
{
{ R9 rv2600 = r_FMT3(rt_str("@ @(@)", 6), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2596);
return rv2600; }
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_LINKAGE == ((rt_int)2LL)))
{
{ R9 rv2601 = r_FMT3(rt_str("extern @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2596);
return rv2601; }
}
{ R9 rv2602 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2596);
return rv2602; }
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
R25 * l_B_2603; memset(&l_B_2603, 0, sizeof l_B_2603);
l_B_2603 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_2604; memset(&l_I_2604, 0, sizeof l_I_2604);
l_I_2604 = ((rt_int)0LL);
for (;;) {
if ((l_B_2603 == NULL)) goto L_end2605;
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2603))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2603))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_2604)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2603))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2603))).f_LO) || ((((*(R25 *)rt_nil_check(l_B_2603))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2603))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_2604)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2603))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_2604), p_PC, r_NUM(l_I_2604)), ((*(R25 *)rt_nil_check(l_B_2603))).f_LO), p_LINE, p_CHECK);
}
}
l_I_2604 = rt_add(l_I_2604, ((rt_int)1LL));
l_B_2603 = ((*(R25 *)rt_nil_check(l_B_2603))).f_NEXT;
}
RT_B_TICK();
} L_end2605: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_2606; memset(&l_U_2606, 0, sizeof l_U_2606);
l_U_2606 = r_REAL_TYPE(p_T);
R24 * l_F_2607; memset(&l_F_2607, 0, sizeof l_F_2607);
l_F_2607 = ((*(R22 *)rt_nil_check(l_U_2606))).f_FIELDS;
R25 * l_A_2608; memset(&l_A_2608, 0, sizeof l_A_2608);
l_A_2608 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_2607 == NULL) || (l_A_2608 == NULL))) goto L_end2609;
{
if ((!(((*(R24 *)rt_nil_check(l_F_2607))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_A_2608))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_A_2608))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R24 *)rt_nil_check(l_F_2607))).f_CNAME), p_LINE, p_CHECK);
}
l_A_2608 = ((*(R25 *)rt_nil_check(l_A_2608))).f_NEXT;
}
l_F_2607 = ((*(R24 *)rt_nil_check(l_F_2607))).f_NEXT;
}
RT_B_TICK();
} L_end2609: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R9 p_T) { RT_B_TICK(); 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2610 = 0;
return rv2610; }
}
{ rt_int rv2611 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv2611; }
rt_raise(RT_X_INIT);
}
static R9 r_GEN_TEXT_NAME(R9 p_T) { RT_B_TICK(); 
{ R9 rv2612 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv2612; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R9 p_NAME, R9 p_C, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
R12 * l_OLD_2613; memset(&l_OLD_2613, 0, sizeof l_OLD_2613);
l_OLD_2613 = r_LOOKUP(p_NAME);
if ((!(l_OLD_2613 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_2613))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_2613))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_2613))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_2614; memset(&l_G_2614, 0, sizeof l_G_2614);
l_G_2614 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_2614))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R9(&((*(R12 *)rt_nil_check(l_G_2614))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_2614))).f_INPUT = 1;
r_DEFINE(l_G_2614, p_LINE);
}
}
static R21 * r_NEW_BINDS(void) { RT_B_TICK(); 
R21 * l_B_2615; memset(&l_B_2615, 0, sizeof l_B_2615);
l_B_2615 = ((R21 *)rt_b_new(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_B_2615)), ({ R21 rc2616; memset(&rc2616, 0, sizeof rc2616);  S_R9(&rc2616.f_NAME, r_NO_TEXT(), 0); rc2616.f_T = NULL; S_R9(&rc2616.f_C, r_NO_TEXT(), 0); rc2616.f_HASMV = 0; rc2616.f_MV = ((rt_int)0LL); rc2616.f_R = NULL; rc2616.f_NEXT = NULL; rc2616; }), 0);
{ R21 * rv2617 = l_B_2615;
return rv2617; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R9 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R21 * p_HEAD) { RT_B_TICK(); 
R21 * l_B_2618; memset(&l_B_2618, 0, sizeof l_B_2618);
l_B_2618 = ((R21 *)rt_b_new(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_B_2618)), ({ R21 rc2619; memset(&rc2619, 0, sizeof rc2619);  S_R9(&rc2619.f_NAME, p_NAME, 0); rc2619.f_T = p_T; S_R9(&rc2619.f_C, r_NO_TEXT(), 0); rc2619.f_HASMV = (p_M).f_OK; rc2619.f_MV = (p_M).f_V; rc2619.f_R = p_R; rc2619.f_NEXT = ((*(R21 *)rt_nil_check(p_HEAD))).f_NEXT; rc2619; }), 0);
if ((p_M).f_OK)
{
S_R9(&((*(R21 *)rt_nil_check(l_B_2618))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R21 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_2618;
}
static R21 * r_FIND_BIND(R21 * p_BS, R9 p_NAME) { RT_B_TICK(); 
R21 * l_B_2620; memset(&l_B_2620, 0, sizeof l_B_2620);
l_B_2620 = p_BS;
for (;;) {
if ((l_B_2620 == NULL)) goto L_end2621;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_B_2620))).f_NAME, p_NAME))
{
{ R21 * rv2622 = l_B_2620;
return rv2622; }
}
l_B_2620 = ((*(R21 *)rt_nil_check(l_B_2620))).f_NEXT;
}
RT_B_TICK();
} L_end2621: ;
{ R21 * rv2623 = NULL;
return rv2623; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R17 * p_TS, R22 * p_T, R21 * p_BS) { RT_B_TICK(); 
R22 * l_RT_2624; memset(&l_RT_2624, 0, sizeof l_RT_2624);
l_RT_2624 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv2625 = 1;
return rv2625; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv2626 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv2626; }
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2627 = 1;
return rv2627; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R17 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2628 = 1;
return rv2628; }
}
{
R21 * l_B_2629; memset(&l_B_2629, 0, sizeof l_B_2629);
l_B_2629 = r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_2629 == NULL)))
{
if ((((*(R21 *)rt_nil_check(l_B_2629))).f_T == NULL))
{
{ rt_int rv2630 = 0;
return rv2630; }
}
{ rt_int rv2631 = r_SAME_TYPE(((*(R21 *)rt_nil_check(l_B_2629))).f_T, p_T);
return rv2631; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_C == NULL) && r_NONSTANDARD_REP(p_T)))
{
{ rt_int rv2632 = 0;
return rv2632; }
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
{ rt_int rv2633 = 1;
return rv2633; }
}
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2624))).f_KIND == g_T_ARR)))
{
{ rt_int rv2634 = 0;
return rv2634; }
}
if ((!(r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_2624))).f_DIMS)))
{
{ rt_int rv2635 = 0;
return rv2635; }
}
{ rt_int rv2636 = r_UNIFY(((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_2624))).f_ELEM, p_BS);
return rv2636; }
}
else if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv2637 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2637; }
}
else if ((!(((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2638 = 0;
return rv2638; }
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_2624))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_2624))).f_MHI, p_BS))))
{
{ rt_int rv2639 = 0;
return rv2639; }
}
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_N_REP) && (!r_UNIFY_REP(((*(R17 *)rt_nil_check(p_TS))).f_C, l_RT_2624, p_BS))))
{
{ rt_int rv2640 = 0;
return rv2640; }
}
}
if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2624))).f_KIND == g_T_INT)))
{
{ rt_int rv2641 = 0;
return rv2641; }
}
{ rt_int rv2642 = ((r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2624))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS)) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)2LL)), r_SOME(((rt_int)0LL)), p_BS));
return rv2642; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv2643 = ((((*(R22 *)rt_nil_check(l_RT_2624))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2624))).f_SCALE == ((rt_int)0LL)));
return rv2643; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2624))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv2644 = 0;
return rv2644; }
}
{ rt_int rv2645 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2624))).f_SCALE), p_BS);
return rv2645; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv2646 = (((*(R22 *)rt_nil_check(l_RT_2624))).f_KIND == g_T_BOOL);
return rv2646; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv2647 = ((((*(R22 *)rt_nil_check(l_RT_2624))).f_KIND == g_T_STR) && r_SAME_DERIVED_LENGTH(r_NTH_ARG(p_TS, ((rt_int)0LL)), l_RT_2624, p_BS));
return rv2647; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2624))).f_KIND == g_T_STR)))
{
{ rt_int rv2648 = 0;
return rv2648; }
}
if ((!(((*(R17 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv2649 = 1;
return rv2649; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_2624))).f_BASE == NULL)))
{
{ rt_int rv2650 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_2624))).f_BASE, p_BS);
return rv2650; }
}
{ rt_int rv2651 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv2651; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv2652 = ((((*(R22 *)rt_nil_check(l_RT_2624))).f_KIND == g_T_BITS) && r_SAME_DERIVED_LENGTH(r_NTH_ARG(p_TS, ((rt_int)0LL)), l_RT_2624, p_BS));
return rv2652; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv2653 = (((*(R22 *)rt_nil_check(l_RT_2624))).f_KIND == g_T_SEM);
return rv2653; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2624))).f_KIND == g_T_PTR)))
{
{ rt_int rv2654 = 0;
return rv2654; }
}
{ rt_int rv2655 = r_UNIFY(((*(R17 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_2624), p_BS);
return rv2655; }
}
{
R12 * l_Y_2656; memset(&l_Y_2656, 0, sizeof l_Y_2656);
l_Y_2656 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_2656 == NULL))
{
{ rt_int rv2657 = 0;
return rv2657; }
}
if (((((*(R12 *)rt_nil_check(l_Y_2656))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_2656))).f_DECL == NULL)))
{
{ rt_int rv2658 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_2656))).f_T, p_T);
return rv2658; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2656))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv2659 = 0;
return rv2659; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_2656))))
{
{ rt_int rv2660 = 0;
return rv2660; }
}
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2656))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2624))).f_KIND == g_T_REC)))
{
{ rt_int rv2661 = 0;
return rv2661; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2624))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv2662 = 0;
return rv2662; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2624))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_2656))))
{
{ rt_int rv2663 = 0;
return rv2663; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv2664 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2664; }
}
{ rt_int rv2665 = r_UNIFY(r_SUBST_FORMALS(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2656))).f_DECL))).f_B, ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2656))).f_DECL))).f_A, ((*(R17 *)rt_nil_check(p_TS))).f_A), l_RT_2624, p_BS);
return rv2665; }
}
{
R17 * l_F_2666; memset(&l_F_2666, 0, sizeof l_F_2666);
l_F_2666 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2656))).f_DECL))).f_A;
R17 * l_A_2667; memset(&l_A_2667, 0, sizeof l_A_2667);
l_A_2667 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R25 * l_V_2668; memset(&l_V_2668, 0, sizeof l_V_2668);
l_V_2668 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_2669; memset(&l_CLASS_2669, 0, sizeof l_CLASS_2669);
l_CLASS_2669 = r_RECORD_CLASS_OF(l_RT_2624);
for (;;) {
if ((l_F_2666 == NULL)) goto L_end2670;
{
{
R17 * l_N_2671; memset(&l_N_2671, 0, sizeof l_N_2671);
l_N_2671 = ((*(R17 *)rt_nil_check(l_F_2666))).f_A;
for (;;) {
if ((l_N_2671 == NULL)) goto L_end2672;
{
if ((l_A_2667 == NULL))
{
{ rt_int rv2673 = 0;
return rv2673; }
}
if ((((*(R17 *)rt_nil_check(l_F_2666))).f_B == NULL))
{
if ((!(l_CLASS_2669 == NULL)))
{
{
R21 * l_B_2674; memset(&l_B_2674, 0, sizeof l_B_2674);
l_B_2674 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_2669))).f_BINDINGS, ((*(R17 *)rt_nil_check(l_N_2671))).f_NAME);
if ((!(l_B_2674 == NULL)))
{
if ((!r_UNIFY(l_A_2667, ((*(R21 *)rt_nil_check(l_B_2674))).f_T, p_BS)))
{
{ rt_int rv2675 = 0;
return rv2675; }
}
}
}
}
}
else
{
if ((!(l_V_2668 == NULL)))
{
if ((((!(((*(R17 *)rt_nil_check(l_A_2667))).f_KIND == g_TS_GEN)) && (!(((*(R17 *)rt_nil_check(l_A_2667))).f_KIND == g_N_DONTCARE))) && (!(((*(R17 *)rt_nil_check(l_A_2667))).f_KIND == g_N_ANY))))
{
{
R23 l_M_2676; memset(&l_M_2676, 0, sizeof l_M_2676);
S_R23(&l_M_2676, r_MANIFEST(l_A_2667), 0);
if (((l_M_2676).f_OK && (((*(R25 *)rt_nil_check(l_V_2668))).f_MLO).f_OK))
{
if ((!((l_M_2676).f_V == (((*(R25 *)rt_nil_check(l_V_2668))).f_MLO).f_V)))
{
{ rt_int rv2677 = 0;
return rv2677; }
}
}
}
}
l_V_2668 = ((*(R25 *)rt_nil_check(l_V_2668))).f_NEXT;
}
}
l_A_2667 = ((*(R17 *)rt_nil_check(l_A_2667))).f_NEXT;
l_N_2671 = ((*(R17 *)rt_nil_check(l_N_2671))).f_NEXT;
}
RT_B_TICK();
} L_end2672: ;
}
l_F_2666 = ((*(R17 *)rt_nil_check(l_F_2666))).f_NEXT;
}
RT_B_TICK();
} L_end2670: ;
}
{ rt_int rv2678 = 1;
return rv2678; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_DERIVED_LENGTH(R17 * p_A, R22 * p_RT, R21 * p_BS) { RT_B_TICK(); 
if (((p_A == NULL) || (!(((*(R22 *)rt_nil_check(p_RT))).f_MLEN).f_OK)))
{
{ rt_int rv2679 = 1;
return rv2679; }
}
if (((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) || ((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2680 = 1;
return rv2680; }
}
{
R9 l_KEY_2681; memset(&l_KEY_2681, 0, sizeof l_KEY_2681);
S_R9(&l_KEY_2681, r_QMKN(rt_str("%", 1), ((*(R17 *)rt_nil_check(p_A))).f_NAME), 0);
R21 * l_B_2682; memset(&l_B_2682, 0, sizeof l_B_2682);
l_B_2682 = r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, l_KEY_2681);
if ((!(l_B_2682 == NULL)))
{
{ rt_int rv2683 = (((*(R21 *)rt_nil_check(l_B_2682))).f_MV == (((*(R22 *)rt_nil_check(p_RT))).f_MLEN).f_V);
return rv2683; }
}
r_ADD_BIND(l_KEY_2681, NULL, ((*(R22 *)rt_nil_check(p_RT))).f_MLEN, NULL, p_BS);
{ rt_int rv2684 = 1;
return rv2684; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_REP(R17 * p_R, R22 * p_RT, R21 * p_BS) { RT_B_TICK(); 
R17 * l_A_2685; memset(&l_A_2685, 0, sizeof l_A_2685);
l_A_2685 = ((*(R22 *)rt_nil_check(p_RT))).f_REPS;
if (r_TEQS(((*(R17 *)rt_nil_check(p_R))).f_NAME, rt_str("FIXED_REP", 9)))
{
if ((!(((*(R22 *)rt_nil_check(p_RT))).f_KIND == g_T_INT)))
{
{ rt_int rv2686 = 0;
return rv2686; }
}
{
R9 l_SIGNING_2687; memset(&l_SIGNING_2687, 0, sizeof l_SIGNING_2687);
S_R9(&l_SIGNING_2687, r_MK(rt_str("SIGNED", 6)), 0);
if ((!(l_A_2685 == NULL)))
{
if ((!((r_TEQS(((*(R17 *)rt_nil_check(l_A_2685))).f_NAME, rt_str("FIXED_REP", 9)) || r_TEQS(((*(R17 *)rt_nil_check(l_A_2685))).f_NAME, rt_str("FIXED_STD", 9))))))
{
{ rt_int rv2688 = 1;
return rv2688; }
}
if ((r_TEQS(((*(R17 *)rt_nil_check(l_A_2685))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R17 *)rt_nil_check(l_A_2685))).f_A == NULL))))
{
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_2685))).f_A))).f_NEXT == NULL)))
{
S_R9(&l_SIGNING_2687, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_2685))).f_A))).f_NEXT))).f_NAME, 0);
}
}
}
if ((!r_UNIFY_VALUE(((*(R17 *)rt_nil_check(p_R))).f_A, r_STATIC_SIZE(p_RT), p_BS)))
{
{ rt_int rv2689 = 0;
return rv2689; }
}
if ((!(((*(R17 *)rt_nil_check(p_R))).f_A == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT == NULL)))
{
if (((((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_KIND == g_N_ENUMLIT))) && (!r_TEQ(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_NAME, l_SIGNING_2687))))
{
{ rt_int rv2690 = 0;
return rv2690; }
}
}
}
{ rt_int rv2691 = 1;
return rv2691; }
}
}
if ((l_A_2685 == NULL))
{
{ rt_int rv2692 = 1;
return rv2692; }
}
{ rt_int rv2693 = r_TEQ(((*(R17 *)rt_nil_check(p_R))).f_NAME, ((*(R17 *)rt_nil_check(l_A_2685))).f_NAME);
return rv2693; }
rt_raise(RT_X_INIT);
}
static rt_int r_NONSTANDARD_REP(R22 * p_T) { RT_B_TICK(); 
R17 * l_R_2694; memset(&l_R_2694, 0, sizeof l_R_2694);
l_R_2694 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
if ((l_R_2694 == NULL))
{
{ rt_int rv2695 = 0;
return rv2695; }
}
if ((((*(R17 *)rt_nil_check(l_R_2694))).f_KIND == g_TS_GEN))
{
{ rt_int rv2696 = 0;
return rv2696; }
}
{ rt_int rv2697 = (((((r_TEQS(((*(R17 *)rt_nil_check(l_R_2694))).f_NAME, rt_str("FIXED_REP", 9)) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2694))).f_NAME, rt_str("ENUM_REP", 8))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2694))).f_NAME, rt_str("ENUM_VAL_REP", 12))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2694))).f_NAME, rt_str("CHAR_STR_REP", 12))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2694))).f_NAME, rt_str("ARRAY_REP", 9))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2694))).f_NAME, rt_str("RECORD_REP", 10)));
return rv2697; }
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { RT_B_TICK(); 
R12 * l_R_2698; memset(&l_R_2698, 0, sizeof l_R_2698);
l_R_2698 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv2699 = NULL;
return rv2699; }
}
for (;;) {
if ((l_R_2698 == NULL)) goto L_end2700;
{
if ((((*(R12 *)rt_nil_check(l_R_2698))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv2701 = l_R_2698;
return rv2701; }
}
l_R_2698 = ((*(R12 *)rt_nil_check(l_R_2698))).f_INSTANCES;
}
RT_B_TICK();
} L_end2700: ;
{ R12 * rv2702 = NULL;
return rv2702; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R17 * p_A, R23 p_M, R21 * p_BS) { RT_B_TICK(); 
if ((p_A == NULL))
{
{ rt_int rv2703 = 1;
return rv2703; }
}
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2704 = 1;
return rv2704; }
}
else if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2705 = 1;
return rv2705; }
}
{
R21 * l_B_2706; memset(&l_B_2706, 0, sizeof l_B_2706);
l_B_2706 = r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, ((*(R17 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_2706 == NULL)))
{
{ rt_int rv2707 = ((((*(R21 *)rt_nil_check(l_B_2706))).f_HASMV && (p_M).f_OK) && (((*(R21 *)rt_nil_check(l_B_2706))).f_MV == (p_M).f_V));
return rv2707; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv2708 = 0;
return rv2708; }
}
r_ADD_BIND(((*(R17 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv2709 = 1;
return rv2709; }
}
{
R23 l_V_2710; memset(&l_V_2710, 0, sizeof l_V_2710);
S_R23(&l_V_2710, r_MANIFEST(p_A), 0);
if (((l_V_2710).f_OK && (p_M).f_OK))
{
{ rt_int rv2711 = ((l_V_2710).f_V == (p_M).f_V);
return rv2711; }
}
}
{ rt_int rv2712 = 1;
return rv2712; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R21 * p_BS) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv2713 = 0;
return rv2713; }
}
if (((!(((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME)) && (!(((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_APPLY))))
{
{ rt_int rv2714 = 0;
return rv2714; }
}
{ rt_int rv2715 = (!(r_FIND_ROUTINE_ARG(((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R27 *)rt_nil_check(p_A))).f_E, p_BS, ((rt_int)0LL), 0) == NULL));
return rv2715; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv2716 = 1;
return rv2716; }
}
r_TYPE_ARG(p_A);
{ rt_int rv2717 = r_UNIFY(((*(R28 *)rt_nil_check(p_P))).f_TS, (((*(R27 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv2717; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_BS_2718; memset(&l_BS_2718, 0, sizeof l_BS_2718);
l_BS_2718 = r_NEW_BINDS();
R28 * l_P_2719; memset(&l_P_2719, 0, sizeof l_P_2719);
l_P_2719 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2720; memset(&l_A_2720, 0, sizeof l_A_2720);
l_A_2720 = p_ARGS;
for (;;) {
if ((l_P_2719 == NULL)) goto L_end2721;
{
if ((((*(R28 *)rt_nil_check(l_P_2719))).f_TS == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2720))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2719))).f_NAME, r_ARG_TYPE(((*(R27 *)rt_nil_check(l_A_2720))).f_E), r_NO_MVAL(), NULL, l_BS_2718);
}
else if ((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2719))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2719))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R28 *)rt_nil_check(l_P_2719))).f_TS, ((*(R27 *)rt_nil_check(l_A_2720))).f_E, p_LINE), l_BS_2718);
}
else if (((((!(((*(R27 *)rt_nil_check(l_A_2720))).f_E == NULL)) && (!((*(R27 *)rt_nil_check(l_A_2720))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R28 *)rt_nil_check(l_P_2719))).f_TS))) && (((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2720))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R27 *)rt_nil_check(l_A_2720))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(l_A_2720))).f_V, r_EXPR(((*(R27 *)rt_nil_check(l_A_2720))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(l_A_2720))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R28 *)rt_nil_check(l_P_2719))).f_TS, (((*(R27 *)rt_nil_check(l_A_2720))).f_V).f_T, l_BS_2718)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R28 *)rt_nil_check(l_P_2719))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2719))).f_TS))
{
r_ADD_BIND(r_QMKN(rt_str("\?", 1), ((*(R28 *)rt_nil_check(l_P_2719))).f_NAME), (((*(R27 *)rt_nil_check(l_A_2720))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_2718);
}
}
l_P_2719 = ((*(R28 *)rt_nil_check(l_P_2719))).f_NEXT;
l_A_2720 = ((*(R27 *)rt_nil_check(l_A_2720))).f_NEXT;
}
RT_B_TICK();
} L_end2721: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_2718);
{
R12 * l_I_2722; memset(&l_I_2722, 0, sizeof l_I_2722);
l_I_2722 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2722 == NULL)) goto L_end2723;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2722))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_BS_2718))).f_NEXT))
{
{ R12 * rv2724 = l_I_2722;
return rv2724; }
}
l_I_2722 = ((*(R12 *)rt_nil_check(l_I_2722))).f_INSTANCES;
}
RT_B_TICK();
} L_end2723: ;
}
{ R12 * rv2725 = r_NEW_INSTANCE(p_G, ((*(R21 *)rt_nil_check(l_BS_2718))).f_NEXT, p_ARGS);
return rv2725; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_2726; memset(&l_P_2726, 0, sizeof l_P_2726);
l_P_2726 = p_A;
for (;;) {
if ((l_P_2726 == NULL)) goto L_end2727;
{
{
R21 * l_Q_2728; memset(&l_Q_2728, 0, sizeof l_Q_2728);
l_Q_2728 = r_FIND_BIND(p_B, ((*(R21 *)rt_nil_check(l_P_2726))).f_NAME);
if ((l_Q_2728 == NULL))
{
{ rt_int rv2729 = 0;
return rv2729; }
}
if (((!(((*(R21 *)rt_nil_check(l_P_2726))).f_T == NULL)) || (!(((*(R21 *)rt_nil_check(l_Q_2728))).f_T == NULL))))
{
if (((((*(R21 *)rt_nil_check(l_P_2726))).f_T == NULL) || (((*(R21 *)rt_nil_check(l_Q_2728))).f_T == NULL)))
{
{ rt_int rv2730 = 0;
return rv2730; }
}
if ((!r_SAME_TYPE(((*(R21 *)rt_nil_check(l_P_2726))).f_T, ((*(R21 *)rt_nil_check(l_Q_2728))).f_T)))
{
{ rt_int rv2731 = 0;
return rv2731; }
}
if ((!r_SAME_LENGTH(((*(R21 *)rt_nil_check(l_P_2726))).f_T, ((*(R21 *)rt_nil_check(l_Q_2728))).f_T)))
{
{ rt_int rv2732 = 0;
return rv2732; }
}
if ((!r_SAME_REPS(((*(R21 *)rt_nil_check(l_P_2726))).f_T, ((*(R21 *)rt_nil_check(l_Q_2728))).f_T)))
{
{ rt_int rv2733 = 0;
return rv2733; }
}
}
if ((((!(((*(R21 *)rt_nil_check(l_P_2726))).f_HASMV == ((*(R21 *)rt_nil_check(l_Q_2728))).f_HASMV)) || (!(((*(R21 *)rt_nil_check(l_P_2726))).f_MV == ((*(R21 *)rt_nil_check(l_Q_2728))).f_MV))) || (!(((*(R21 *)rt_nil_check(l_P_2726))).f_R == ((*(R21 *)rt_nil_check(l_Q_2728))).f_R))))
{
{ rt_int rv2734 = 0;
return rv2734; }
}
}
l_P_2726 = ((*(R21 *)rt_nil_check(l_P_2726))).f_NEXT;
}
RT_B_TICK();
} L_end2727: ;
{ rt_int rv2735 = 1;
return rv2735; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2736; memset(&l_RA_2736, 0, sizeof l_RA_2736);
l_RA_2736 = r_REAL_TYPE(p_A);
R22 * l_RB_2737; memset(&l_RB_2737, 0, sizeof l_RB_2737);
l_RB_2737 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_2736))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_2736))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_2736))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_2737))).f_KIND))))
{
{ rt_int rv2738 = 1;
return rv2738; }
}
if (((((*(R22 *)rt_nil_check(l_RA_2736))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_2737))).f_MLEN).f_OK))
{
{ rt_int rv2739 = ((((*(R22 *)rt_nil_check(l_RA_2736))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_2737))).f_MLEN).f_V);
return rv2739; }
}
{ rt_int rv2740 = ((((*(R22 *)rt_nil_check(l_RA_2736))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_2737))).f_MLEN).f_OK);
return rv2740; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R17 * l_RA_2741; memset(&l_RA_2741, 0, sizeof l_RA_2741);
l_RA_2741 = ((*(R22 *)rt_nil_check(p_A))).f_REPS;
R17 * l_RB_2742; memset(&l_RB_2742, 0, sizeof l_RB_2742);
l_RB_2742 = ((*(R22 *)rt_nil_check(p_B))).f_REPS;
if (((l_RA_2741 == NULL) || (l_RB_2742 == NULL)))
{
{ rt_int rv2743 = (l_RA_2741 == l_RB_2742);
return rv2743; }
}
if ((l_RA_2741 == l_RB_2742))
{
{ rt_int rv2744 = 1;
return rv2744; }
}
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_RA_2741))).f_NAME, ((*(R17 *)rt_nil_check(l_RB_2742))).f_NAME)))
{
{ rt_int rv2745 = 0;
return rv2745; }
}
{
R17 * l_X_2746; memset(&l_X_2746, 0, sizeof l_X_2746);
l_X_2746 = ((*(R17 *)rt_nil_check(l_RA_2741))).f_A;
R17 * l_Y_2747; memset(&l_Y_2747, 0, sizeof l_Y_2747);
l_Y_2747 = ((*(R17 *)rt_nil_check(l_RB_2742))).f_A;
for (;;) {
if (((l_X_2746 == NULL) || (l_Y_2747 == NULL))) goto L_end2748;
{
if (((((((*(R17 *)rt_nil_check(l_X_2746))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_X_2746))).f_KIND == g_N_ENUMLIT))) && (((((*(R17 *)rt_nil_check(l_Y_2747))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_Y_2747))).f_KIND == g_N_ENUMLIT)))))
{
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_X_2746))).f_NAME, ((*(R17 *)rt_nil_check(l_Y_2747))).f_NAME)))
{
{ rt_int rv2749 = 0;
return rv2749; }
}
}
else
{
{
R23 l_MX_2750; memset(&l_MX_2750, 0, sizeof l_MX_2750);
S_R23(&l_MX_2750, r_MANIFEST(l_X_2746), 0);
R23 l_MY_2751; memset(&l_MY_2751, 0, sizeof l_MY_2751);
S_R23(&l_MY_2751, r_MANIFEST(l_Y_2747), 0);
if (((!((l_MX_2750).f_OK == (l_MY_2751).f_OK)) || (!((l_MX_2750).f_V == (l_MY_2751).f_V))))
{
{ rt_int rv2752 = 0;
return rv2752; }
}
}
}
l_X_2746 = ((*(R17 *)rt_nil_check(l_X_2746))).f_NEXT;
l_Y_2747 = ((*(R17 *)rt_nil_check(l_Y_2747))).f_NEXT;
}
RT_B_TICK();
} L_end2748: ;
{ rt_int rv2753 = ((((l_X_2746 == NULL) && (l_Y_2747 == NULL)) && (((*(R17 *)rt_nil_check(l_RA_2741))).f_B == NULL)) && (((*(R17 *)rt_nil_check(l_RB_2742))).f_B == NULL));
return rv2753; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R17 * p_TS, R17 * p_E, rt_int p_LINE) { RT_B_TICK(); 
{ R12 * rv2754 = r_FIND_ROUTINE_ARG(p_TS, p_E, NULL, p_LINE, 1);
return rv2754; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE_ARG(R17 * p_TS, R17 * p_E, R21 * p_BS0, rt_int p_LINE, rt_int p_STRICT) { RT_B_TICK(); 
R12 * l_Y_2755; memset(&l_Y_2755, 0, sizeof l_Y_2755);
l_Y_2755 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_2756; memset(&l_FOUND_2756, 0, sizeof l_FOUND_2756);
l_FOUND_2756 = NULL;
R21 * l_BS_2757; memset(&l_BS_2757, 0, sizeof l_BS_2757);
l_BS_2757 = p_BS0;
if ((l_BS_2757 == NULL))
{
l_BS_2757 = r_NEW_BINDS();
}
for (;;) {
if ((l_Y_2755 == NULL)) goto L_end2758;
{
if ((((*(R12 *)rt_nil_check(l_Y_2755))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_2759; memset(&l_R_2759, 0, sizeof l_R_2759);
l_R_2759 = r_ORIGINAL(l_Y_2755);
R21 * l_TRY_2760; memset(&l_TRY_2760, 0, sizeof l_TRY_2760);
l_TRY_2760 = r_NEW_BINDS();
((*(R21 *)rt_nil_check(l_TRY_2760))).f_NEXT = ((*(R21 *)rt_nil_check(l_BS_2757))).f_NEXT;
r_ROUTINE_HEADER(l_R_2759);
if ((((!((*(R12 *)rt_nil_check(l_R_2759))).f_GENERIC) && r_EXPLICIT_TEMPLATE_FITS(p_E, l_R_2759)) && r_TEMPLATE_FITS(p_TS, l_R_2759, l_TRY_2760)))
{
if (((!(l_FOUND_2756 == NULL)) && (!(l_FOUND_2756 == l_R_2759))))
{
if ((!p_STRICT))
{
{ R12 * rv2761 = NULL;
return rv2761; }
}
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_2756 = l_R_2759;
}
}
}
l_Y_2755 = r_LOOKUP_NEXT(l_Y_2755);
}
RT_B_TICK();
} L_end2758: ;
if ((l_FOUND_2756 == NULL))
{
if ((!p_STRICT))
{
{ R12 * rv2762 = NULL;
return rv2762; }
}
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter (5.1): ", 45), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_2756))).f_USES == NULL)))
{
if ((!p_STRICT))
{
{ R12 * rv2763 = NULL;
return rv2763; }
}
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (p_STRICT)
{
if ((!r_TEMPLATE_FITS(p_TS, l_FOUND_2756, l_BS_2757)))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter (5.1): ", 45), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
r_NEED_BODY(l_FOUND_2756);
}
{ R12 * rv2764 = l_FOUND_2756;
return rv2764; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPLICIT_TEMPLATE_FITS(R17 * p_E, R12 * p_R) { RT_B_TICK(); 
R17 * l_A_2765; memset(&l_A_2765, 0, sizeof l_A_2765);
l_A_2765 = ((*(R17 *)rt_nil_check(p_E))).f_A;
R28 * l_Q_2766; memset(&l_Q_2766, 0, sizeof l_Q_2766);
l_Q_2766 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY)))
{
{ rt_int rv2767 = 1;
return rv2767; }
}
if (((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
{ rt_int rv2768 = 0;
return rv2768; }
}
for (;;) {
if (((l_A_2765 == NULL) || (l_Q_2766 == NULL))) goto L_end2769;
{
if ((((*(R28 *)rt_nil_check(l_Q_2766))).f_T == NULL))
{
{ rt_int rv2770 = 0;
return rv2770; }
}
if ((!r_IDENTICAL_TYPE(r_RESOLVE(r_EXPR_TO_TS(l_A_2765)), ((*(R28 *)rt_nil_check(l_Q_2766))).f_T)))
{
{ rt_int rv2771 = 0;
return rv2771; }
}
l_A_2765 = ((*(R17 *)rt_nil_check(l_A_2765))).f_NEXT;
l_Q_2766 = ((*(R28 *)rt_nil_check(l_Q_2766))).f_NEXT;
}
RT_B_TICK();
} L_end2769: ;
if (((!(l_A_2765 == NULL)) || (!(l_Q_2766 == NULL))))
{
{ rt_int rv2772 = 0;
return rv2772; }
}
if ((!(((*(R17 *)rt_nil_check(p_E))).f_E == NULL)))
{
{ rt_int rv2773 = r_IDENTICAL_TYPE(r_RESOLVE(((*(R17 *)rt_nil_check(p_E))).f_E), ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2773; }
}
{ rt_int rv2774 = 1;
return rv2774; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEMPLATE_FITS(R17 * p_TS, R12 * p_R, R21 * p_BS) { RT_B_TICK(); 
R17 * l_P_2775; memset(&l_P_2775, 0, sizeof l_P_2775);
l_P_2775 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R28 * l_Q_2776; memset(&l_Q_2776, 0, sizeof l_Q_2776);
l_Q_2776 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
if ((!(((((*(R17 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL))) == ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_IV == ((rt_int)1LL))))))
{
{ rt_int rv2777 = 0;
return rv2777; }
}
for (;;) {
if (((l_P_2775 == NULL) || (l_Q_2776 == NULL))) goto L_end2778;
{
if ((!(((*(R17 *)rt_nil_check(l_P_2775))).f_IV == ((*(R28 *)rt_nil_check(l_Q_2776))).f_MODE)))
{
{ rt_int rv2779 = 0;
return rv2779; }
}
if (((((*(R17 *)rt_nil_check(l_P_2775))).f_B == NULL) || (((*(R28 *)rt_nil_check(l_Q_2776))).f_T == NULL)))
{
if (((!(((*(R17 *)rt_nil_check(l_P_2775))).f_B == NULL)) || (!(((*(R28 *)rt_nil_check(l_Q_2776))).f_T == NULL))))
{
{ rt_int rv2780 = 0;
return rv2780; }
}
}
else if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_2775))).f_B))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2781 = 0;
return rv2781; }
}
else if ((!r_TYPE_FITS_SPEC(((*(R17 *)rt_nil_check(l_P_2775))).f_B, ((*(R28 *)rt_nil_check(l_Q_2776))).f_T, p_BS)))
{
{ rt_int rv2782 = 0;
return rv2782; }
}
l_P_2775 = ((*(R17 *)rt_nil_check(l_P_2775))).f_NEXT;
l_Q_2776 = ((*(R28 *)rt_nil_check(l_Q_2776))).f_NEXT;
}
RT_B_TICK();
} L_end2778: ;
if (((!(l_P_2775 == NULL)) || (!(l_Q_2776 == NULL))))
{
{ rt_int rv2783 = 0;
return rv2783; }
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if ((!r_TYPE_FITS_SPEC(((*(R17 *)rt_nil_check(p_TS))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT, p_BS)))
{
{ rt_int rv2784 = 0;
return rv2784; }
}
}
{
R17 * l_X_2785; memset(&l_X_2785, 0, sizeof l_X_2785);
l_X_2785 = ((*(R17 *)rt_nil_check(p_TS))).f_D;
for (;;) {
if ((l_X_2785 == NULL)) goto L_end2786;
{
if ((!r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_D))).f_A, ((*(R17 *)rt_nil_check(l_X_2785))).f_NAME)))
{
{ rt_int rv2787 = 0;
return rv2787; }
}
l_X_2785 = ((*(R17 *)rt_nil_check(l_X_2785))).f_NEXT;
}
RT_B_TICK();
} L_end2786: ;
}
{ rt_int rv2788 = 1;
return rv2788; }
rt_raise(RT_X_INIT);
}
static rt_int r_TYPE_FITS_SPEC(R17 * p_TS, R22 * p_T, R21 * p_BS) { RT_B_TICK(); 
if ((r_STATIC_GENERIC(p_TS) || r_HAS_DERIVED(p_TS)))
{
{ rt_int rv2789 = r_UNIFY(p_TS, p_T, p_BS);
return rv2789; }
}
{ rt_int rv2790 = r_IDENTICAL_TYPE(r_RESOLVE(p_TS), p_T);
return rv2790; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_DERIVED(R17 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2791 = 0;
return rv2791; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2792 = 1;
return rv2792; }
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if (r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(p_TS))).f_A))
{
{ rt_int rv2793 = 1;
return rv2793; }
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if ((r_HAS_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_A) || r_HAS_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_B)))
{
{ rt_int rv2794 = 1;
return rv2794; }
}
}
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2795 = 1;
return rv2795; }
}
{ rt_int rv2796 = 0;
return rv2796; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R21 * p_BS) { RT_B_TICK(); 
R17 * l_NEEDL_2797; memset(&l_NEEDL_2797, 0, sizeof l_NEEDL_2797);
l_NEEDL_2797 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R21 * l_SAVED_2798; memset(&l_SAVED_2798, 0, sizeof l_SAVED_2798);
l_SAVED_2798 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R21 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_2797 == NULL)) goto L_end2799;
{
{
R17 * l_T_2800; memset(&l_T_2800, 0, sizeof l_T_2800);
l_T_2800 = ((*(R17 *)rt_nil_check(l_NEEDL_2797))).f_A;
for (;;) {
if ((l_T_2800 == NULL)) goto L_end2801;
{
if ((r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, ((*(R17 *)rt_nil_check(l_T_2800))).f_NAME) == NULL))
{
{
R27 * l_ARGS_2802; memset(&l_ARGS_2802, 0, sizeof l_ARGS_2802);
l_ARGS_2802 = NULL;
R27 * l_TAIL_2803; memset(&l_TAIL_2803, 0, sizeof l_TAIL_2803);
l_TAIL_2803 = NULL;
R17 * l_P_2804; memset(&l_P_2804, 0, sizeof l_P_2804);
l_P_2804 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_T_2800))).f_B))).f_A;
R12 * l_R_2805; memset(&l_R_2805, 0, sizeof l_R_2805);
rt_int l_ENTERED_2806; memset(&l_ENTERED_2806, 0, sizeof l_ENTERED_2806);
l_ENTERED_2806 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_2804 == NULL)) goto L_end2807;
{
{
R27 * l_A_2808; memset(&l_A_2808, 0, sizeof l_A_2808);
if ((((*(R17 *)rt_nil_check(l_P_2804))).f_B == NULL))
{
l_A_2808 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_2808 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R17 *)rt_nil_check(l_P_2804))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R27 *)rt_nil_check(l_A_2808))).f_MODE = ((*(R17 *)rt_nil_check(l_P_2804))).f_IV;
if ((l_TAIL_2803 == NULL))
{
l_ARGS_2802 = l_A_2808;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2803))).f_NEXT = l_A_2808;
}
l_TAIL_2803 = l_A_2808;
}
l_P_2804 = ((*(R17 *)rt_nil_check(l_P_2804))).f_NEXT;
}
RT_B_TICK();
} L_end2807: ;
if (l_ENTERED_2806)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_2805 = r_FIND_ROUTINE(((*(R17 *)rt_nil_check(l_T_2800))).f_NAME, l_ARGS_2802, p_LINE, 0);
if ((l_R_2805 == NULL))
{
l_R_2805 = r_LOOKUP(((*(R17 *)rt_nil_check(l_T_2800))).f_NAME);
for (;;) {
if ((l_R_2805 == NULL)) goto L_end2809;
{
if ((((*(R12 *)rt_nil_check(l_R_2805))).f_KIND == g_Y_BUILTIN))
{
goto L_end2809;
}
l_R_2805 = r_LOOKUP_NEXT(l_R_2805);
}
RT_B_TICK();
} L_end2809: ;
}
if (((l_R_2805 == NULL) && (!r_IS_OPERATOR_NAME(((*(R17 *)rt_nil_check(l_T_2800))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R17 *)rt_nil_check(l_T_2800))).f_NAME);
}
if ((!(l_R_2805 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_R_2805))).f_KIND == g_Y_ROUTINE))
{
r_COMPUTE_USES(r_ORIGINAL(l_R_2805));
if ((!(((*(R12 *)rt_nil_check(r_ORIGINAL(l_R_2805)))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine named in a WHERE clause may not import data (5.2): ", 61), ((*(R17 *)rt_nil_check(l_T_2800))).f_NAME);
}
}
r_ADD_BIND(((*(R17 *)rt_nil_check(l_T_2800))).f_NAME, NULL, r_NO_MVAL(), l_R_2805, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R21 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_2800 = ((*(R17 *)rt_nil_check(l_T_2800))).f_NEXT;
}
RT_B_TICK();
} L_end2801: ;
}
l_NEEDL_2797 = ((*(R17 *)rt_nil_check(l_NEEDL_2797))).f_NEXT;
}
RT_B_TICK();
} L_end2799: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2798;
}
static rt_int r_DONTCARE_TYPE_ARG(R17 * p_TS) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2810 = 0;
return rv2810; }
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{
R17 * l_A_2811; memset(&l_A_2811, 0, sizeof l_A_2811);
l_A_2811 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_A_2811 == NULL)) goto L_end2812;
{
if ((((*(R17 *)rt_nil_check(l_A_2811))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2813 = 1;
return rv2813; }
}
l_A_2811 = ((*(R17 *)rt_nil_check(l_A_2811))).f_NEXT;
}
RT_B_TICK();
} L_end2812: ;
}
{ rt_int rv2814 = 0;
return rv2814; }
}
{
R12 * l_Y_2815; memset(&l_Y_2815, 0, sizeof l_Y_2815);
l_Y_2815 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
R17 * l_A_2816; memset(&l_A_2816, 0, sizeof l_A_2816);
l_A_2816 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R17 * l_F_2817; memset(&l_F_2817, 0, sizeof l_F_2817);
if ((l_Y_2815 == NULL))
{
{ rt_int rv2818 = 0;
return rv2818; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2815))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_2815))).f_DECL == NULL)))
{
{ rt_int rv2819 = 0;
return rv2819; }
}
l_F_2817 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2815))).f_DECL))).f_A;
for (;;) {
if ((l_F_2817 == NULL)) goto L_end2820;
{
{
R17 * l_N_2821; memset(&l_N_2821, 0, sizeof l_N_2821);
l_N_2821 = ((*(R17 *)rt_nil_check(l_F_2817))).f_A;
for (;;) {
if ((l_N_2821 == NULL)) goto L_end2822;
{
if ((l_A_2816 == NULL))
{
{ rt_int rv2823 = 0;
return rv2823; }
}
if (((((*(R17 *)rt_nil_check(l_F_2817))).f_B == NULL) && (((*(R17 *)rt_nil_check(l_A_2816))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2824 = 1;
return rv2824; }
}
l_A_2816 = ((*(R17 *)rt_nil_check(l_A_2816))).f_NEXT;
l_N_2821 = ((*(R17 *)rt_nil_check(l_N_2821))).f_NEXT;
}
RT_B_TICK();
} L_end2822: ;
}
l_F_2817 = ((*(R17 *)rt_nil_check(l_F_2817))).f_NEXT;
}
RT_B_TICK();
} L_end2820: ;
}
{ rt_int rv2825 = 0;
return rv2825; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R21 * p_BS, R27 * p_ARGS) { RT_B_TICK(); 
R27 * l_A_2826; memset(&l_A_2826, 0, sizeof l_A_2826);
l_A_2826 = p_ARGS;
R12 * l_I_2827; memset(&l_I_2827, 0, sizeof l_I_2827);
l_I_2827 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R21 * l_SAVED_2828; memset(&l_SAVED_2828, 0, sizeof l_SAVED_2828);
l_SAVED_2828 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R12 * l_SAVED_SEG_2829; memset(&l_SAVED_SEG_2829, 0, sizeof l_SAVED_SEG_2829);
l_SAVED_SEG_2829 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R12 * l_HOME_2830; memset(&l_HOME_2830, 0, sizeof l_HOME_2830);
l_HOME_2830 = r_ENTER_HOME(p_G);
R28 * l_P_2831; memset(&l_P_2831, 0, sizeof l_P_2831);
l_P_2831 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R28 * l_TAIL_2832; memset(&l_TAIL_2832, 0, sizeof l_TAIL_2832);
l_TAIL_2832 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_2827)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_2827))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_2827))).f_LINKAGE = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_I_2827))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_2827))).f_PARAMS = NULL;
S_R9(&((*(R12 *)rt_nil_check(l_I_2827))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_2827))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_2827;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(p_G))).f_HOME;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_2831 == NULL)) goto L_end2833;
{
{
R28 * l_PM_2834; memset(&l_PM_2834, 0, sizeof l_PM_2834);
l_PM_2834 = ((R28 *)rt_b_new(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2834)), (*(R28 *)rt_nil_check(l_P_2831)), 0);
((*(R28 *)rt_nil_check(l_PM_2834))).f_NEXT = NULL;
if ((((*(R28 *)rt_nil_check(l_P_2831))).f_TS == NULL))
{
((*(R28 *)rt_nil_check(l_PM_2834))).f_T = NULL;
}
else if ((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2831))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R28 *)rt_nil_check(l_PM_2834))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2831))).f_TS) && ((*(R27 *)rt_nil_check(l_A_2826))).f_HAVE))
{
((*(R28 *)rt_nil_check(l_PM_2834))).f_T = (((*(R27 *)rt_nil_check(l_A_2826))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2834))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2834))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R28 *)rt_nil_check(l_PM_2834))).f_T = ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2834))).f_T))).f_BASE;
}
}
}
else
{
((*(R28 *)rt_nil_check(l_PM_2834))).f_T = r_RESOLVE(((*(R28 *)rt_nil_check(l_P_2831))).f_TS);
}
if ((!(((*(R28 *)rt_nil_check(l_P_2831))).f_TS == NULL)))
{
if (((((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2831))).f_TS))).f_KIND == g_TS_GEN) || (((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2831))).f_TS))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2831))).f_TS))).f_A == NULL))))) && ((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2831))).f_TS))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((!(r_FIND_BIND(p_BS, ((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2831))).f_TS))).f_NAME) == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(r_FIND_BIND(p_BS, ((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2831))).f_TS))).f_NAME)))).f_T == NULL)))
{
((*(R28 *)rt_nil_check(l_PM_2834))).f_T = r_MARK_GENP(((*(R28 *)rt_nil_check(l_PM_2834))).f_T, ((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2831))).f_TS))).f_NAME);
}
}
}
}
((*(R28 *)rt_nil_check(l_PM_2834))).f_TS = NULL;
if ((l_TAIL_2832 == NULL))
{
((*(R12 *)rt_nil_check(l_I_2827))).f_PARAMS = l_PM_2834;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2832))).f_NEXT = l_PM_2834;
}
l_TAIL_2832 = l_PM_2834;
}
l_P_2831 = ((*(R28 *)rt_nil_check(l_P_2831))).f_NEXT;
l_A_2826 = ((*(R27 *)rt_nil_check(l_A_2826))).f_NEXT;
}
RT_B_TICK();
} L_end2833: ;
((*(R12 *)rt_nil_check(l_I_2827))).f_RESULT = r_RESULT_TYPE(l_I_2827);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2828;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_2829;
r_LEAVE_HOME(p_G, l_HOME_2830);
S_R9(&((*(R12 *)rt_nil_check(l_I_2827))).f_FWD, r_C_HEADER(l_I_2827), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_2827))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_2827))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_2827;
{ R12 * rv2835 = l_I_2827;
return rv2835; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R9 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2836 = 0;
return rv2836; }
}
{ rt_int rv2837 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv2837; }
rt_raise(RT_X_INIT);
}
static R17 * r_SUBST_FORMALS(R17 * p_TS, R17 * p_FORMALS, R17 * p_ARGS) { RT_B_TICK(); 
R17 * l_C_2838; memset(&l_C_2838, 0, sizeof l_C_2838);
if ((p_TS == NULL))
{
{ R17 * rv2839 = NULL;
return rv2839; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R17 * l_F_2840; memset(&l_F_2840, 0, sizeof l_F_2840);
l_F_2840 = p_FORMALS;
R17 * l_A_2841; memset(&l_A_2841, 0, sizeof l_A_2841);
l_A_2841 = p_ARGS;
for (;;) {
if ((l_F_2840 == NULL)) goto L_end2842;
{
{
R17 * l_N_2843; memset(&l_N_2843, 0, sizeof l_N_2843);
l_N_2843 = ((*(R17 *)rt_nil_check(l_F_2840))).f_A;
for (;;) {
if ((l_N_2843 == NULL)) goto L_end2844;
{
if ((l_A_2841 == NULL))
{
{ R17 * rv2845 = p_TS;
return rv2845; }
}
if (((((*(R17 *)rt_nil_check(l_F_2840))).f_B == NULL) && r_TEQ(((*(R17 *)rt_nil_check(l_N_2843))).f_NAME, ((*(R17 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R17 * rv2846 = l_A_2841;
return rv2846; }
}
l_A_2841 = ((*(R17 *)rt_nil_check(l_A_2841))).f_NEXT;
l_N_2843 = ((*(R17 *)rt_nil_check(l_N_2843))).f_NEXT;
}
RT_B_TICK();
} L_end2844: ;
}
l_F_2840 = ((*(R17 *)rt_nil_check(l_F_2840))).f_NEXT;
}
RT_B_TICK();
} L_end2842: ;
}
{ R17 * rv2847 = p_TS;
return rv2847; }
}
l_C_2838 = r_COPY_NODE(p_TS);
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R17 *)rt_nil_check(l_C_2838))).f_C = r_SUBST_FORMALS(((*(R17 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R17 *)rt_nil_check(l_C_2838))).f_A = r_SUBST_FORMALS(((*(R17 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R17 * rv2848 = l_C_2838;
return rv2848; }
rt_raise(RT_X_INIT);
}
static R17 * r_COPY_NODE(R17 * p_N) { RT_B_TICK(); 
R17 * l_C_2849; memset(&l_C_2849, 0, sizeof l_C_2849);
l_C_2849 = ((R17 *)rt_b_new(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_C_2849)), (*(R17 *)rt_nil_check(p_N)), 0);
((*(R17 *)rt_nil_check(l_C_2849))).f_NEXT = NULL;
{ R17 * rv2850 = l_C_2849;
return rv2850; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R17 * p_L, R9 p_NAME) { RT_B_TICK(); 
R17 * l_P_2851; memset(&l_P_2851, 0, sizeof l_P_2851);
l_P_2851 = p_L;
for (;;) {
if ((l_P_2851 == NULL)) goto L_end2852;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_2851))).f_NAME, p_NAME))
{
{ rt_int rv2853 = 1;
return rv2853; }
}
l_P_2851 = ((*(R17 *)rt_nil_check(l_P_2851))).f_NEXT;
}
RT_B_TICK();
} L_end2852: ;
{ rt_int rv2854 = 0;
return rv2854; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_IS_2855; memset(&l_IS_2855, 0, sizeof l_IS_2855);
l_IS_2855 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv2856 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2856; }
}
if ((l_IS_2855 == NULL))
{
{ rt_int rv2857 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2857; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R20 *)rt_nil_check(l_IS_2855))).f_ID) || (((*(R20 *)rt_nil_check(l_IS_2855))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv2858 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2858; }
}
if ((!(((*(R20 *)rt_nil_check(l_IS_2855))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2855))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2859 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2859; }
}
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2855))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2860 = 0;
return rv2860; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { RT_B_TICK(); 
R17 * l_ITEMS_2861; memset(&l_ITEMS_2861, 0, sizeof l_ITEMS_2861);
l_ITEMS_2861 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R17 * l_HEAD_2862; memset(&l_HEAD_2862, 0, sizeof l_HEAD_2862);
l_HEAD_2862 = NULL;
R17 * l_TAIL_2863; memset(&l_TAIL_2863, 0, sizeof l_TAIL_2863);
l_TAIL_2863 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_2861 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R17 *)rt_nil_check(l_ITEMS_2861))).f_A, &l_HEAD_2862, &l_TAIL_2863);
r_ADD_USES(((*(R17 *)rt_nil_check(l_ITEMS_2861))).f_B, &l_HEAD_2862, &l_TAIL_2863);
{
R17 * l_R_2864; memset(&l_R_2864, 0, sizeof l_R_2864);
l_R_2864 = ((*(R17 *)rt_nil_check(l_ITEMS_2861))).f_C;
for (;;) {
if ((l_R_2864 == NULL)) goto L_end2865;
{
{
R12 * l_Z_2866; memset(&l_Z_2866, 0, sizeof l_Z_2866);
l_Z_2866 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_2864))).f_NAME);
if (((l_Z_2866 == NULL) && (!r_LOCAL_MODULE_EXPORTS(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_C, ((*(R17 *)rt_nil_check(l_R_2864))).f_NAME))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_R_2864))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R17 *)rt_nil_check(l_R_2864))).f_NAME);
}
for (;;) {
if ((l_Z_2866 == NULL)) goto L_end2867;
{
if ((((*(R12 *)rt_nil_check(l_Z_2866))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2868; memset(&l_O_2868, 0, sizeof l_O_2868);
l_O_2868 = r_ORIGINAL(l_Z_2866);
R17 * l_U_2869; memset(&l_U_2869, 0, sizeof l_U_2869);
r_COMPUTE_USES(l_O_2868);
l_U_2869 = ((*(R12 *)rt_nil_check(l_O_2868))).f_USES;
for (;;) {
if ((l_U_2869 == NULL)) goto L_end2870;
{
if ((!r_IN_IDENTS(l_HEAD_2862, ((*(R17 *)rt_nil_check(l_U_2869))).f_NAME)))
{
{
R17 * l_N_2871; memset(&l_N_2871, 0, sizeof l_N_2871);
l_N_2871 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_U_2869))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_2871))).f_NAME, ((*(R17 *)rt_nil_check(l_U_2869))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2871))).f_IV = ((*(R17 *)rt_nil_check(l_U_2869))).f_IV;
r_ADD_LIST(l_N_2871, &l_HEAD_2862, &l_TAIL_2863);
}
}
l_U_2869 = ((*(R17 *)rt_nil_check(l_U_2869))).f_NEXT;
}
RT_B_TICK();
} L_end2870: ;
}
}
l_Z_2866 = r_LOOKUP_NEXT(l_Z_2866);
}
RT_B_TICK();
} L_end2867: ;
}
l_R_2864 = ((*(R17 *)rt_nil_check(l_R_2864))).f_NEXT;
}
RT_B_TICK();
} L_end2865: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_2862;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static rt_int r_LOCAL_MODULE_EXPORTS(R17 * p_B, R9 p_NAME) { RT_B_TICK(); 
R17 * l_M_2872; memset(&l_M_2872, 0, sizeof l_M_2872);
if ((p_B == NULL))
{
{ rt_int rv2873 = 0;
return rv2873; }
}
l_M_2872 = ((*(R17 *)rt_nil_check(p_B))).f_C;
for (;;) {
if ((l_M_2872 == NULL)) goto L_end2874;
{
if ((((*(R17 *)rt_nil_check(l_M_2872))).f_KIND == g_N_MODULE))
{
if ((((((*(R17 *)rt_nil_check(l_M_2872))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(l_M_2872))).f_B, p_NAME)) || r_LOCAL_MODULE_EXPORTS(((*(R17 *)rt_nil_check(l_M_2872))).f_C, p_NAME)))
{
{ rt_int rv2875 = 1;
return rv2875; }
}
}
l_M_2872 = ((*(R17 *)rt_nil_check(l_M_2872))).f_NEXT;
}
RT_B_TICK();
} L_end2874: ;
{ rt_int rv2876 = 0;
return rv2876; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_USES(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_2877; memset(&l_R_2877, 0, sizeof l_R_2877);
l_R_2877 = p_RS;
for (;;) {
if ((l_R_2877 == NULL)) goto L_end2878;
{
if ((((*(R17 *)rt_nil_check(l_R_2877))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_2877));
if ((!(((*(R17 *)rt_nil_check(l_R_2877))).f_E == NULL)))
{
r_IMPORTS_KNOWN(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2877))).f_E))).f_A, 0);
r_IMPORTS_KNOWN(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2877))).f_E))).f_B, 1);
r_INPUT_IMPORT_CONFLICT(((*(R17 *)rt_nil_check(l_R_2877))).f_E, ((*(R17 *)rt_nil_check(l_R_2877))).f_LINE);
}
}
l_R_2877 = ((*(R17 *)rt_nil_check(l_R_2877))).f_NEXT;
}
RT_B_TICK();
} L_end2878: ;
}
static void r_IMPORTS_KNOWN(R17 * p_L, rt_int p_INOUT) { RT_B_TICK(); 
R17 * l_P_2879; memset(&l_P_2879, 0, sizeof l_P_2879);
l_P_2879 = p_L;
for (;;) {
if ((l_P_2879 == NULL)) goto L_end2880;
{
{
R12 * l_V_2881; memset(&l_V_2881, 0, sizeof l_V_2881);
l_V_2881 = r_LOOKUP(((*(R17 *)rt_nil_check(l_P_2879))).f_NAME);
if ((!(l_V_2881 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_V_2881))).f_KIND == g_Y_VAR))
{
if ((((!r_CHECK_IMPORTED(l_V_2881, ((*(R17 *)rt_nil_check(l_P_2879))).f_LINE)) && p_INOUT) && (!((*(R12 *)rt_nil_check(l_V_2881))).f_INPUT)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_2879))).f_LINE, rt_str("imported for change, but only for input in the enclosing scope (4.1.1): ", 72), ((*(R17 *)rt_nil_check(l_P_2879))).f_NAME);
}
}
}
}
l_P_2879 = ((*(R17 *)rt_nil_check(l_P_2879))).f_NEXT;
}
RT_B_TICK();
} L_end2880: ;
}
static void r_INPUT_IMPORT_CONFLICT(R17 * p_ITEMS, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_2882; memset(&l_R_2882, 0, sizeof l_R_2882);
l_R_2882 = ((*(R17 *)rt_nil_check(p_ITEMS))).f_C;
for (;;) {
if ((l_R_2882 == NULL)) goto L_end2883;
{
{
R12 * l_Z_2884; memset(&l_Z_2884, 0, sizeof l_Z_2884);
l_Z_2884 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_2882))).f_NAME);
for (;;) {
if ((l_Z_2884 == NULL)) goto L_end2885;
{
if ((((*(R12 *)rt_nil_check(l_Z_2884))).f_KIND == g_Y_ROUTINE))
{
{
R17 * l_D_2886; memset(&l_D_2886, 0, sizeof l_D_2886);
l_D_2886 = ((*(R12 *)rt_nil_check(r_ORIGINAL(l_Z_2884)))).f_DECL;
if ((!(l_D_2886 == NULL)))
{
if (((((*(R17 *)rt_nil_check(l_D_2886))).f_KIND == g_N_ROUTINE) && (!(((*(R17 *)rt_nil_check(l_D_2886))).f_E == NULL))))
{
{
R17 * l_V_2887; memset(&l_V_2887, 0, sizeof l_V_2887);
l_V_2887 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_2886))).f_E))).f_B;
for (;;) {
if ((l_V_2887 == NULL)) goto L_end2888;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(p_ITEMS))).f_A, ((*(R17 *)rt_nil_check(l_V_2887))).f_NAME))
{
r_FAILT(p_LINE, rt_str("imported for input, and inout by an imported routine (4.3.1): ", 62), ((*(R17 *)rt_nil_check(l_V_2887))).f_NAME);
}
l_V_2887 = ((*(R17 *)rt_nil_check(l_V_2887))).f_NEXT;
}
RT_B_TICK();
} L_end2888: ;
}
}
}
}
}
l_Z_2884 = r_LOOKUP_NEXT(l_Z_2884);
}
RT_B_TICK();
} L_end2885: ;
}
l_R_2882 = ((*(R17 *)rt_nil_check(l_R_2882))).f_NEXT;
}
RT_B_TICK();
} L_end2883: ;
}
static void r_ADD_USES(R17 * p_L, R17 * *p_HEAD, R17 * *p_TAIL) { RT_B_TICK(); 
R17 * l_P_2889; memset(&l_P_2889, 0, sizeof l_P_2889);
l_P_2889 = p_L;
for (;;) {
if ((l_P_2889 == NULL)) goto L_end2890;
{
{
R12 * l_V_2891; memset(&l_V_2891, 0, sizeof l_V_2891);
l_V_2891 = r_LOOKUP(((*(R17 *)rt_nil_check(l_P_2889))).f_NAME);
R17 * l_N_2892; memset(&l_N_2892, 0, sizeof l_N_2892);
l_N_2892 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_P_2889))).f_LINE);
if ((l_V_2891 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_2889))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R17 *)rt_nil_check(l_P_2889))).f_NAME);
}
S_R9(&((*(R17 *)rt_nil_check(l_N_2892))).f_NAME, ((*(R17 *)rt_nil_check(l_P_2889))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2892))).f_IV = ((*(R12 *)rt_nil_check(l_V_2891))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_2891))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_2892, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_2889 = ((*(R17 *)rt_nil_check(l_P_2889))).f_NEXT;
}
RT_B_TICK();
} L_end2890: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_IS_2893; memset(&l_IS_2893, 0, sizeof l_IS_2893);
l_IS_2893 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R17 * l_U_2894; memset(&l_U_2894, 0, sizeof l_U_2894);
l_U_2894 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_2893 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R20 *)rt_nil_check(l_IS_2893))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_2894 == NULL)) goto L_end2895;
{
if ((!(((*(R17 *)rt_nil_check(l_U_2894))).f_IV == ((*(R20 *)rt_nil_check(l_IS_2893))).f_ID)))
{
if ((((*(R20 *)rt_nil_check(l_IS_2893))).f_IMPORTS == NULL))
{
r_FAIL2(p_LINE, rt_str("the routine ", 12), ((*(R12 *)rt_nil_check(p_Y))).f_NAME, rt_str(" uses the variable ", 19), ((*(R17 *)rt_nil_check(l_U_2894))).f_NAME, rt_str(": import one of them (4.1.1)", 28));
}
if ((!(((((((r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2893))).f_IMPORTS))).f_A, ((*(R17 *)rt_nil_check(l_U_2894))).f_NAME) || r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2893))).f_IMPORTS))).f_B, ((*(R17 *)rt_nil_check(l_U_2894))).f_NAME)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2893))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2893))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2893))).f_IMPORTS))).f_E, p_Y)) || ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL)) && r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2893))).f_IMPORTS))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))) || r_IMPORTED_ROUTINE_USES(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2893))).f_IMPORTS))).f_C, ((*(R17 *)rt_nil_check(l_U_2894))).f_NAME)))))
{
r_FAIL2(p_LINE, rt_str("the routine ", 12), ((*(R12 *)rt_nil_check(p_Y))).f_NAME, rt_str(" uses the variable ", 19), ((*(R17 *)rt_nil_check(l_U_2894))).f_NAME, rt_str(": import one of them (4.1.1)", 28));
}
}
l_U_2894 = ((*(R17 *)rt_nil_check(l_U_2894))).f_NEXT;
}
RT_B_TICK();
} L_end2895: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R17 * p_RS, R9 p_NAME) { RT_B_TICK(); 
R17 * l_R_2896; memset(&l_R_2896, 0, sizeof l_R_2896);
l_R_2896 = p_RS;
for (;;) {
if ((l_R_2896 == NULL)) goto L_end2897;
{
{
R12 * l_Z_2898; memset(&l_Z_2898, 0, sizeof l_Z_2898);
l_Z_2898 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_2896))).f_NAME);
for (;;) {
if ((l_Z_2898 == NULL)) goto L_end2899;
{
if ((((*(R12 *)rt_nil_check(l_Z_2898))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2900; memset(&l_O_2900, 0, sizeof l_O_2900);
l_O_2900 = r_ORIGINAL(l_Z_2898);
r_COMPUTE_USES(l_O_2900);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_2900))).f_USES, p_NAME))
{
{ rt_int rv2901 = 1;
return rv2901; }
}
}
}
l_Z_2898 = r_LOOKUP_NEXT(l_Z_2898);
}
RT_B_TICK();
} L_end2899: ;
}
l_R_2896 = ((*(R17 *)rt_nil_check(l_R_2896))).f_NEXT;
}
RT_B_TICK();
} L_end2897: ;
{ rt_int rv2902 = 0;
return rv2902; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R17 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2903; memset(&l_M_2903, 0, sizeof l_M_2903);
l_M_2903 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_2903 == NULL)) goto L_end2904;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_2903))).f_NAME))
{
{ rt_int rv2905 = 1;
return rv2905; }
}
l_M_2903 = ((*(R12 *)rt_nil_check(l_M_2903))).f_MODL;
}
RT_B_TICK();
} L_end2904: ;
{ rt_int rv2906 = 0;
return rv2906; }
rt_raise(RT_X_INIT);
}
static R9 r_BASE_PART(R9 p_N, rt_int p_P) { RT_B_TICK(); 
{ R9 rv2907 = r_MKN(rt_b_slice(r_STR(p_N, (p_N).f_LEN), rt_add(p_P, ((rt_int)1LL)), rt_sub((p_N).f_LEN, ((rt_int)1LL))));
return rv2907; }
rt_raise(RT_X_INIT);
}
static R9 r_BASE_NAME(R12 * p_Y) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R9 rv2908 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv2908; }
}
{ R9 rv2909 = r_BASE_PART(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN);
return rv2909; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R9 p_NAME) { RT_B_TICK(); 
R18 * l_C_2910; memset(&l_C_2910, 0, sizeof l_C_2910);
l_C_2910 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2910 == NULL)) goto L_end2911;
{
if ((((*(R18 *)rt_nil_check(l_C_2910))).f_KIND == ((rt_int)1LL)))
{
goto L_end2911;
}
if ((((*(R18 *)rt_nil_check(l_C_2910))).f_KIND == ((rt_int)3LL)))
{
{
R17 * l_H_2912; memset(&l_H_2912, 0, sizeof l_H_2912);
l_H_2912 = ((*(R18 *)rt_nil_check(l_C_2910))).f_HANDLERS;
for (;;) {
if ((l_H_2912 == NULL)) goto L_end2913;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_H_2912))).f_A, p_NAME))
{
{ rt_int rv2914 = 1;
return rv2914; }
}
l_H_2912 = ((*(R17 *)rt_nil_check(l_H_2912))).f_NEXT;
}
RT_B_TICK();
} L_end2913: ;
}
}
l_C_2910 = ((*(R18 *)rt_nil_check(l_C_2910))).f_NEXT;
}
RT_B_TICK();
} L_end2911: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R20 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv2915 = 1;
return rv2915; }
}
}
{ rt_int rv2916 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv2916; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R9 p_NAME) { RT_B_TICK(); 
R18 * l_C_2917; memset(&l_C_2917, 0, sizeof l_C_2917);
l_C_2917 = ((R18 *)rt_b_new(sizeof (R18)));
S_R18(&(*(R18 *)rt_nil_check(l_C_2917)), ({ R18 rc2918; memset(&rc2918, 0, sizeof rc2918);  rc2918.f_KIND = p_KIND; S_R9(&rc2918.f_NAME, p_NAME, 0); rc2918.f_HANDLERS = NULL; rc2918.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc2918; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_2917;
}
static void r_POP_CTX(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R18 * r_LEAVE(rt_int p_KIND) { RT_B_TICK(); 
R18 * l_C_2919; memset(&l_C_2919, 0, sizeof l_C_2919);
l_C_2919 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2919 == NULL)) goto L_end2920;
{
if ((((*(R18 *)rt_nil_check(l_C_2919))).f_KIND == p_KIND))
{
{ R18 * rv2921 = l_C_2919;
return rv2921; }
}
if ((((*(R18 *)rt_nil_check(l_C_2919))).f_KIND == ((rt_int)1LL)))
{
{ R18 * rv2922 = NULL;
return rv2922; }
}
if ((((*(R18 *)rt_nil_check(l_C_2919))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R18 *)rt_nil_check(l_C_2919))).f_NAME));
}
l_C_2919 = ((*(R18 *)rt_nil_check(l_C_2919))).f_NEXT;
}
RT_B_TICK();
} L_end2920: ;
{ R18 * rv2923 = NULL;
return rv2923; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { RT_B_TICK(); 
R18 * l_C_2924; memset(&l_C_2924, 0, sizeof l_C_2924);
l_C_2924 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_2925; memset(&l_N_2925, 0, sizeof l_N_2925);
l_N_2925 = ((rt_int)0LL);
for (;;) {
if ((l_C_2924 == NULL)) goto L_end2926;
{
if ((((*(R18 *)rt_nil_check(l_C_2924))).f_KIND == ((rt_int)1LL)))
{
goto L_end2926;
}
if ((((*(R18 *)rt_nil_check(l_C_2924))).f_KIND == ((rt_int)3LL)))
{
l_N_2925 = rt_add(l_N_2925, ((rt_int)1LL));
}
l_C_2924 = ((*(R18 *)rt_nil_check(l_C_2924))).f_NEXT;
}
RT_B_TICK();
} L_end2926: ;
{ rt_int rv2927 = l_N_2925;
return rv2927; }
rt_raise(RT_X_INIT);
}
static R9 r_EXC_NAME(R9 p_NAME) { RT_B_TICK(); 
R17 * l_N_2928; memset(&l_N_2928, 0, sizeof l_N_2928);
l_N_2928 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_2928 == NULL)) goto L_end2929;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_N_2928))).f_NAME, p_NAME))
{
{ R9 rv2930 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2930; }
}
l_N_2928 = ((*(R17 *)rt_nil_check(l_N_2928))).f_NEXT;
}
RT_B_TICK();
} L_end2929: ;
l_N_2928 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_2928))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2928))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_2928;
{ R9 rv2931 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2931; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R17 * p_DECLS) { RT_B_TICK(); 
R17 * l_D_2932; memset(&l_D_2932, 0, sizeof l_D_2932);
l_D_2932 = p_DECLS;
for (;;) {
if ((l_D_2932 == NULL)) goto L_end2933;
{
if (((((*(R17 *)rt_nil_check(l_D_2932))).f_KIND == g_N_TYPE) || (((*(R17 *)rt_nil_check(l_D_2932))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_2934; memset(&l_Y_2934, 0, sizeof l_Y_2934);
l_Y_2934 = r_NEW_SYM(g_Y_TYPE, ((*(R17 *)rt_nil_check(l_D_2932))).f_NAME);
if ((((*(R17 *)rt_nil_check(l_D_2932))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_2934))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_2934))).f_DECL = l_D_2932;
r_DEFINE(l_Y_2934, ((*(R17 *)rt_nil_check(l_D_2932))).f_LINE);
if ((((*(R17 *)rt_nil_check(l_D_2932))).f_KIND == g_N_TYPE))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_2932))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_2932))).f_B))).f_A)))
{
((*(R7 *)rt_nil_check(g_W))).f_CHARSETS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_CHARSETS, ((rt_int)1LL));
}
}
}
}
l_D_2932 = ((*(R17 *)rt_nil_check(l_D_2932))).f_NEXT;
}
RT_B_TICK();
} L_end2933: ;
l_D_2932 = p_DECLS;
for (;;) {
if ((l_D_2932 == NULL)) goto L_end2935;
{
if (((((*(R17 *)rt_nil_check(l_D_2932))).f_KIND == g_N_TYPE) || (((*(R17 *)rt_nil_check(l_D_2932))).f_KIND == g_N_REPTYPE)))
{
{
R17 * l_SEEN_2936; memset(&l_SEEN_2936, 0, sizeof l_SEEN_2936);
l_SEEN_2936 = NULL;
rt_int l_FOUND_2937; memset(&l_FOUND_2937, 0, sizeof l_FOUND_2937);
l_FOUND_2937 = 0;
r_REFERS(((*(R17 *)rt_nil_check(l_D_2932))).f_B, C_R9(((*(R17 *)rt_nil_check(l_D_2932))).f_NAME), p_DECLS, &l_SEEN_2936, &l_FOUND_2937);
if (l_FOUND_2937)
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_2932))).f_LINE, rt_str("a circular type declaration (3.12.1, 3.12.3): ", 46), ((*(R17 *)rt_nil_check(l_D_2932))).f_NAME);
}
}
{
R17 * l_F_2938; memset(&l_F_2938, 0, sizeof l_F_2938);
l_F_2938 = ((*(R17 *)rt_nil_check(l_D_2932))).f_A;
for (;;) {
if ((l_F_2938 == NULL)) goto L_end2939;
{
if (((((*(R17 *)rt_nil_check(l_F_2938))).f_IV == ((rt_int)1LL)) && (((*(R17 *)rt_nil_check(l_D_2932))).f_KIND == g_N_TYPE)))
{
{
R17 * l_N_2940; memset(&l_N_2940, 0, sizeof l_N_2940);
l_N_2940 = ((*(R17 *)rt_nil_check(l_F_2938))).f_A;
for (;;) {
if ((l_N_2940 == NULL)) goto L_end2941;
{
if (r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_D_2932))).f_B, ((*(R17 *)rt_nil_check(l_N_2940))).f_NAME))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_2932))).f_LINE, rt_str("a TAG formal is only a tag-name or an argument for a TAG formal (3.12.1): ", 74), ((*(R17 *)rt_nil_check(l_N_2940))).f_NAME);
}
l_N_2940 = ((*(R17 *)rt_nil_check(l_N_2940))).f_NEXT;
}
RT_B_TICK();
} L_end2941: ;
}
}
if ((!(((*(R17 *)rt_nil_check(l_F_2938))).f_B == NULL)))
{
if (r_NAMES_VARIABLE(((*(R17 *)rt_nil_check(l_F_2938))).f_B, p_DECLS))
{
r_FAIL(((*(R17 *)rt_nil_check(l_F_2938))).f_LINE, rt_str("the type-arguments in the type of a formal must be manifest (3.12.1)", 68));
}
}
l_F_2938 = ((*(R17 *)rt_nil_check(l_F_2938))).f_NEXT;
}
RT_B_TICK();
} L_end2939: ;
}
}
l_D_2932 = ((*(R17 *)rt_nil_check(l_D_2932))).f_NEXT;
}
RT_B_TICK();
} L_end2935: ;
l_D_2932 = p_DECLS;
for (;;) {
if ((l_D_2932 == NULL)) goto L_end2942;
{
if ((((*(R17 *)rt_nil_check(l_D_2932))).f_KIND == g_N_TYPE))
{
{
R17 * l_F_2943; memset(&l_F_2943, 0, sizeof l_F_2943);
l_F_2943 = ((*(R17 *)rt_nil_check(l_D_2932))).f_A;
for (;;) {
if ((l_F_2943 == NULL)) goto L_end2944;
{
if (((((*(R17 *)rt_nil_check(l_F_2943))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(l_F_2943))).f_B == NULL))))
{
{
R22 * l_FT_2945; memset(&l_FT_2945, 0, sizeof l_FT_2945);
l_FT_2945 = r_REAL_TYPE(r_RESOLVE(((*(R17 *)rt_nil_check(l_F_2943))).f_B));
if (((!r_IS_SCALAR(l_FT_2945)) || (!(((*(R22 *)rt_nil_check(l_FT_2945))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_F_2943))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
}
l_F_2943 = ((*(R17 *)rt_nil_check(l_F_2943))).f_NEXT;
}
RT_B_TICK();
} L_end2944: ;
}
}
l_D_2932 = ((*(R17 *)rt_nil_check(l_D_2932))).f_NEXT;
}
RT_B_TICK();
} L_end2942: ;
}
static void r_REFERS(R17 * p_L, R9 p_TARGET, R17 * p_DECLS, R17 * *p_SEEN, rt_int *p_FOUND) { RT_B_TICK(); 
R17 * l_N_2946; memset(&l_N_2946, 0, sizeof l_N_2946);
l_N_2946 = p_L;
for (;;) {
if (((l_N_2946 == NULL) || (*p_FOUND))) goto L_end2947;
{
if (((((*(R17 *)rt_nil_check(l_N_2946))).f_KIND == g_TS_NAME) || (((*(R17 *)rt_nil_check(l_N_2946))).f_KIND == g_N_REP)))
{
if ((!r_TEQS(((*(R17 *)rt_nil_check(l_N_2946))).f_NAME, rt_str("PTR", 3))))
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_N_2946))).f_NAME, p_TARGET))
{
(*p_FOUND) = 1;
return;
}
if ((!r_IN_IDENTS((*p_SEEN), ((*(R17 *)rt_nil_check(l_N_2946))).f_NAME)))
{
{
R17 * l_M_2948; memset(&l_M_2948, 0, sizeof l_M_2948);
l_M_2948 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_N_2946))).f_LINE);
R17 * l_D_2949; memset(&l_D_2949, 0, sizeof l_D_2949);
l_D_2949 = p_DECLS;
S_R9(&((*(R17 *)rt_nil_check(l_M_2948))).f_NAME, ((*(R17 *)rt_nil_check(l_N_2946))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_M_2948))).f_NEXT = (*p_SEEN);
(*p_SEEN) = l_M_2948;
for (;;) {
if ((l_D_2949 == NULL)) goto L_end2950;
{
if (((((((*(R17 *)rt_nil_check(l_D_2949))).f_KIND == g_N_TYPE) || (((*(R17 *)rt_nil_check(l_D_2949))).f_KIND == g_N_REPTYPE))) && r_TEQ(((*(R17 *)rt_nil_check(l_D_2949))).f_NAME, ((*(R17 *)rt_nil_check(l_N_2946))).f_NAME)))
{
r_REFERS(((*(R17 *)rt_nil_check(l_D_2949))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
l_D_2949 = ((*(R17 *)rt_nil_check(l_D_2949))).f_NEXT;
}
RT_B_TICK();
} L_end2950: ;
}
}
r_REFERS(((*(R17 *)rt_nil_check(l_N_2946))).f_A, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_2946))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_2946))).f_C, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
}
else
{
r_REFERS(((*(R17 *)rt_nil_check(l_N_2946))).f_A, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_2946))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_2946))).f_C, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_2946))).f_D, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
l_N_2946 = ((*(R17 *)rt_nil_check(l_N_2946))).f_NEXT;
}
RT_B_TICK();
} L_end2947: ;
}
static rt_int r_TAG_MISUSED(R17 * p_L, R9 p_NAME) { RT_B_TICK(); 
R17 * l_N_2951; memset(&l_N_2951, 0, sizeof l_N_2951);
l_N_2951 = p_L;
for (;;) {
if ((l_N_2951 == NULL)) goto L_end2952;
{
if ((((*(R17 *)rt_nil_check(l_N_2951))).f_KIND == g_TS_NAME))
{
{
R17 * l_A_2953; memset(&l_A_2953, 0, sizeof l_A_2953);
l_A_2953 = ((*(R17 *)rt_nil_check(l_N_2951))).f_A;
for (;;) {
if ((l_A_2953 == NULL)) goto L_end2954;
{
if ((!((((((((*(R17 *)rt_nil_check(l_A_2953))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_A_2953))).f_KIND == g_TS_NAME))) && r_TEQ(((*(R17 *)rt_nil_check(l_A_2953))).f_NAME, p_NAME)) && (((*(R17 *)rt_nil_check(l_A_2953))).f_A == NULL)))))
{
if (r_TAG_MISUSED1(l_A_2953, p_NAME))
{
{ rt_int rv2955 = 1;
return rv2955; }
}
}
l_A_2953 = ((*(R17 *)rt_nil_check(l_A_2953))).f_NEXT;
}
RT_B_TICK();
} L_end2954: ;
}
if (((r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_N_2951))).f_B, p_NAME) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_N_2951))).f_C, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_N_2951))).f_E, p_NAME)))
{
{ rt_int rv2956 = 1;
return rv2956; }
}
}
else if (r_TAG_MISUSED1(l_N_2951, p_NAME))
{
{ rt_int rv2957 = 1;
return rv2957; }
}
l_N_2951 = ((*(R17 *)rt_nil_check(l_N_2951))).f_NEXT;
}
RT_B_TICK();
} L_end2952: ;
{ rt_int rv2958 = 0;
return rv2958; }
rt_raise(RT_X_INIT);
}
static rt_int r_TAG_MISUSED1(R17 * p_N, R9 p_NAME) { RT_B_TICK(); 
rt_int l_K_2959; memset(&l_K_2959, 0, sizeof l_K_2959);
l_K_2959 = ((*(R17 *)rt_nil_check(p_N))).f_KIND;
if ((l_K_2959 == g_TS_NAME))
{
{ rt_int rv2960 = (r_TAG_MISUSED(p_N, p_NAME) && 1);
return rv2960; }
}
if ((((((l_K_2959 == g_N_NAME) || (l_K_2959 == g_N_ENUMLIT)) || (l_K_2959 == g_N_APPLY))) && r_TEQ(((*(R17 *)rt_nil_check(p_N))).f_NAME, p_NAME)))
{
{ rt_int rv2961 = 1;
return rv2961; }
}
{ rt_int rv2962 = ((((r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_A, p_NAME) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_B, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_C, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_D, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_E, p_NAME));
return rv2962; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_VARIABLE(R17 * p_L, R17 * p_DECLS) { RT_B_TICK(); 
{ rt_int rv2963 = r_NAMES_VARIABLE_BUT(p_L, p_DECLS, NULL);
return rv2963; }
rt_raise(RT_X_INIT);
}
static void r_GEN_NAMES(R17 * p_L, R17 * *p_HEAD) { RT_B_TICK(); 
R17 * l_N_2964; memset(&l_N_2964, 0, sizeof l_N_2964);
l_N_2964 = p_L;
for (;;) {
if ((l_N_2964 == NULL)) goto L_end2965;
{
if (((((((*(R17 *)rt_nil_check(l_N_2964))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_N_2964))).f_KIND == g_N_PARAM))) && ((((*(R17 *)rt_nil_check(l_N_2964))).f_NAME).f_LEN > ((rt_int)0LL))))
{
{
R17 * l_M_2966; memset(&l_M_2966, 0, sizeof l_M_2966);
l_M_2966 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_N_2964))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_M_2966))).f_NAME, ((*(R17 *)rt_nil_check(l_N_2964))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_M_2966))).f_NEXT = (*p_HEAD);
(*p_HEAD) = l_M_2966;
}
}
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_2964))).f_A, &(*p_HEAD));
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_2964))).f_B, &(*p_HEAD));
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_2964))).f_C, &(*p_HEAD));
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_2964))).f_D, &(*p_HEAD));
l_N_2964 = ((*(R17 *)rt_nil_check(l_N_2964))).f_NEXT;
}
RT_B_TICK();
} L_end2965: ;
}
static rt_int r_NAMES_VARIABLE_BUT(R17 * p_L, R17 * p_DECLS, R17 * p_EXCL) { RT_B_TICK(); 
R17 * l_N_2967; memset(&l_N_2967, 0, sizeof l_N_2967);
l_N_2967 = p_L;
for (;;) {
if ((l_N_2967 == NULL)) goto L_end2968;
{
if (((((*(R17 *)rt_nil_check(l_N_2967))).f_KIND == g_N_NAME) && r_IN_IDENTS(p_EXCL, ((*(R17 *)rt_nil_check(l_N_2967))).f_NAME)))
{
}
else if ((((*(R17 *)rt_nil_check(l_N_2967))).f_KIND == g_N_NAME))
{
{
R17 * l_D_2969; memset(&l_D_2969, 0, sizeof l_D_2969);
l_D_2969 = p_DECLS;
R12 * l_Y_2970; memset(&l_Y_2970, 0, sizeof l_Y_2970);
l_Y_2970 = r_LOOKUP(((*(R17 *)rt_nil_check(l_N_2967))).f_NAME);
for (;;) {
if ((l_D_2969 == NULL)) goto L_end2971;
{
if (((((*(R17 *)rt_nil_check(l_D_2969))).f_KIND == g_N_VAR) && r_IN_IDENTS(((*(R17 *)rt_nil_check(l_D_2969))).f_A, ((*(R17 *)rt_nil_check(l_N_2967))).f_NAME)))
{
{ rt_int rv2972 = 1;
return rv2972; }
}
l_D_2969 = ((*(R17 *)rt_nil_check(l_D_2969))).f_NEXT;
}
RT_B_TICK();
} L_end2971: ;
if ((!(l_Y_2970 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_2970))).f_KIND == g_Y_VAR) && (!((*(R12 *)rt_nil_check(l_Y_2970))).f_INPUT)))
{
{ rt_int rv2973 = 1;
return rv2973; }
}
}
}
}
else if ((((r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_2967))).f_A, p_DECLS, p_EXCL) || r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_2967))).f_B, p_DECLS, p_EXCL)) || r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_2967))).f_C, p_DECLS, p_EXCL)) || r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_2967))).f_D, p_DECLS, p_EXCL)))
{
{ rt_int rv2974 = 1;
return rv2974; }
}
l_N_2967 = ((*(R17 *)rt_nil_check(l_N_2967))).f_NEXT;
}
RT_B_TICK();
} L_end2968: ;
{ rt_int rv2975 = 0;
return rv2975; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_PRINTING_CHAR(R17 * p_L) { RT_B_TICK(); 
R17 * l_P_2976; memset(&l_P_2976, 0, sizeof l_P_2976);
l_P_2976 = p_L;
for (;;) {
if ((l_P_2976 == NULL)) goto L_end2977;
{
if (((((*(R17 *)rt_nil_check(l_P_2976))).f_NAME).f_LEN >= ((rt_int)3LL)))
{
if (rt_b_eq(r_STR(((*(R17 *)rt_nil_check(l_P_2976))).f_NAME, ((rt_int)2LL)), rt_str("\\'", 2)))
{
{ rt_int rv2978 = 1;
return rv2978; }
}
}
l_P_2976 = ((*(R17 *)rt_nil_check(l_P_2976))).f_NEXT;
}
RT_B_TICK();
} L_end2977: ;
{ rt_int rv2979 = 0;
return rv2979; }
rt_raise(RT_X_INIT);
}
static R22 * r_DEFAULT_CHARSET(rt_int p_LINE) { RT_B_TICK(); 
R12 * l_A_2980; memset(&l_A_2980, 0, sizeof l_A_2980);
l_A_2980 = r_LOOKUP(r_MKN(rt_str("ASCII", 5)));
R22 * l_FOUND_2981; memset(&l_FOUND_2981, 0, sizeof l_FOUND_2981);
l_FOUND_2981 = NULL;
rt_int l_N_2982; memset(&l_N_2982, 0, sizeof l_N_2982);
l_N_2982 = ((rt_int)0LL);
R12 * l_Y_2983; memset(&l_Y_2983, 0, sizeof l_Y_2983);
l_Y_2983 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
if (((((*(R7 *)rt_nil_check(g_W))).f_CHARSETS == ((rt_int)0LL)) && (!(l_A_2980 == NULL))))
{
if (((((*(R12 *)rt_nil_check(l_A_2980))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_A_2980))).f_DECL == NULL)))
{
{ R22 * rv2984 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2984; }
}
}
for (;;) {
if ((l_Y_2983 == NULL)) goto L_end2985;
{
if (((((*(R12 *)rt_nil_check(l_Y_2983))).f_KIND == g_Y_TYPE) && ((((*(R12 *)rt_nil_check(l_Y_2983))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((r_LOOKUP(((*(R12 *)rt_nil_check(l_Y_2983))).f_NAME) == l_Y_2983))
{
{
R22 * l_T_2986; memset(&l_T_2986, 0, sizeof l_T_2986);
l_T_2986 = NULL;
if ((((*(R12 *)rt_nil_check(l_Y_2983))).f_DECL == NULL))
{
l_T_2986 = ((*(R12 *)rt_nil_check(l_Y_2983))).f_T;
}
else if (((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2983))).f_DECL))).f_KIND == g_N_TYPE) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2983))).f_DECL))).f_A == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2983))).f_DECL))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2983))).f_DECL))).f_B))).f_A)))
{
l_T_2986 = r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_2983))).f_NAME, p_LINE);
}
}
if ((!(l_T_2986 == NULL)))
{
l_T_2986 = r_REAL_TYPE(l_T_2986);
if ((((*(R22 *)rt_nil_check(l_T_2986))).f_KIND == g_T_ENUM))
{
if ((r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2986))).f_BASE))).f_LITS) && (!(((*(R22 *)rt_nil_check(l_T_2986))).f_BASE == l_FOUND_2981))))
{
if ((!(l_FOUND_2981 == NULL)))
{
r_FAIL(p_LINE, rt_b_cat(rt_str("two character sets are available here: the literal needs ", 57), rt_str("a charset-name (3.7.2)", 22)));
}
l_FOUND_2981 = ((*(R22 *)rt_nil_check(l_T_2986))).f_BASE;
}
}
}
}
}
}
l_Y_2983 = ((*(R12 *)rt_nil_check(l_Y_2983))).f_SNEXT;
}
RT_B_TICK();
} L_end2985: ;
if ((l_FOUND_2981 == NULL))
{
r_FAIL(p_LINE, rt_str("no character set is available for the literal (3.7.2)", 53));
}
{ R22 * rv2987 = l_FOUND_2981;
return rv2987; }
rt_raise(RT_X_INIT);
}
static R22 * r_CHARSET_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_R_2988; memset(&l_R_2988, 0, sizeof l_R_2988);
l_R_2988 = r_REAL_TYPE(p_T);
if ((((*(R22 *)rt_nil_check(l_R_2988))).f_BASE == NULL))
{
{ R22 * rv2989 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2989; }
}
{ R22 * rv2990 = ((*(R22 *)rt_nil_check(l_R_2988))).f_BASE;
return rv2990; }
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
R17 * l_S_2991; memset(&l_S_2991, 0, sizeof l_S_2991);
l_S_2991 = p_S0;
for (;;) {
if ((l_S_2991 == NULL)) goto L_end2992;
{
{
R17 * l_L_2993; memset(&l_L_2993, 0, sizeof l_L_2993);
l_L_2993 = l_S_2991;
for (;;) {
if ((!(((*(R17 *)rt_nil_check(l_L_2993))).f_KIND == g_N_LABELED))) goto L_end2994;
{
{
R12 * l_Y_2995; memset(&l_Y_2995, 0, sizeof l_Y_2995);
l_Y_2995 = r_NEW_SYM(g_Y_LABEL, ((*(R17 *)rt_nil_check(l_L_2993))).f_NAME);
S_R9(&((*(R12 *)rt_nil_check(l_Y_2995))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME_T(r_CID(((*(R17 *)rt_nil_check(l_L_2993))).f_NAME))), 0);
((*(R12 *)rt_nil_check(l_Y_2995))).f_MV = r_GUARDS();
r_DEFINE(l_Y_2995, ((*(R17 *)rt_nil_check(l_L_2993))).f_LINE);
}
l_L_2993 = ((*(R17 *)rt_nil_check(l_L_2993))).f_A;
}
RT_B_TICK();
} L_end2994: ;
}
l_S_2991 = ((*(R17 *)rt_nil_check(l_S_2991))).f_NEXT;
}
RT_B_TICK();
} L_end2992: ;
}
static void r_BODY(R17 * p_B) { RT_B_TICK(); 
R17 * l_D_2996; memset(&l_D_2996, 0, sizeof l_D_2996);
l_D_2996 = ((*(R17 *)rt_nil_check(p_B))).f_A;
R17 * l_S_2997; memset(&l_S_2997, 0, sizeof l_S_2997);
l_S_2997 = ((*(R17 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R17 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2996 == NULL)) goto L_end2998;
{
if (((((*(R17 *)rt_nil_check(l_D_2996))).f_KIND == g_N_VAR) || (((*(R17 *)rt_nil_check(l_D_2996))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2996);
}
l_D_2996 = ((*(R17 *)rt_nil_check(l_D_2996))).f_NEXT;
}
RT_B_TICK();
} L_end2998: ;
r_DECLARE_LABELS(((*(R17 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2997 == NULL)) goto L_end2999;
{
r_STMT(l_S_2997);
l_S_2997 = ((*(R17 *)rt_nil_check(l_S_2997))).f_NEXT;
}
RT_B_TICK();
} L_end2999: ;
}
static void r_OPEN_BODY(R17 * p_B) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R17 * p_S, R17 * p_BODY_NODE, R17 * p_HANDLERS) { RT_B_TICK(); 
R9 l_F_3000; memset(&l_F_3000, 0, sizeof l_F_3000);
S_R9(&l_F_3000, r_NEW_NAME(rt_str("xf", 2)), 0);
R17 * l_H_3001; memset(&l_H_3001, 0, sizeof l_H_3001);
l_H_3001 = p_HANDLERS;
R9 l_WORD_3002; memset(&l_WORD_3002, 0, sizeof l_WORD_3002);
S_R9(&l_WORD_3002, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_3000, l_F_3000));
r_PUSH_CTX(((rt_int)3LL), l_F_3000);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_3000, l_F_3000, l_F_3000));
for (;;) {
if ((l_H_3001 == NULL)) goto L_end3003;
{
{
R17 * l_N_3004; memset(&l_N_3004, 0, sizeof l_N_3004);
l_N_3004 = ((*(R17 *)rt_nil_check(l_H_3001))).f_A;
R9 l_COND_3005; memset(&l_COND_3005, 0, sizeof l_COND_3005);
S_R9(&l_COND_3005, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_3004 == NULL)) goto L_end3006;
{
if ((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_N_3004))).f_NEXT, ((*(R17 *)rt_nil_check(l_N_3004))).f_NAME) || r_IN_HANDLERS(((*(R17 *)rt_nil_check(l_H_3001))).f_NEXT, ((*(R17 *)rt_nil_check(l_N_3004))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_N_3004))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R17 *)rt_nil_check(l_N_3004))).f_NAME);
}
S_R9(&l_COND_3005, r_FMT3(rt_str("@ || @x == @", 12), l_COND_3005, l_F_3000, r_EXC_NAME(((*(R17 *)rt_nil_check(l_N_3004))).f_NAME)), 0);
l_N_3004 = ((*(R17 *)rt_nil_check(l_N_3004))).f_NEXT;
}
RT_B_TICK();
} L_end3006: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3002, l_COND_3005));
S_R9(&l_WORD_3002, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_3000, rt_str("x", 1)));
r_OPEN_BODY(((*(R17 *)rt_nil_check(l_H_3001))).f_B);
r_POP_CTX();
}
l_H_3001 = ((*(R17 *)rt_nil_check(l_H_3001))).f_NEXT;
}
RT_B_TICK();
} L_end3003: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_3000));
}
static void r_INTERFERENCE(R17 * p_S) { RT_B_TICK(); 
rt_int l_K_3007; memset(&l_K_3007, 0, sizeof l_K_3007);
l_K_3007 = ((*(R17 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_3007 == g_N_ASSIGN))
{
{
R17 * l_NAMES_3008; memset(&l_NAMES_3008, 0, sizeof l_NAMES_3008);
l_NAMES_3008 = NULL;
R17 * l_CALLS_3009; memset(&l_CALLS_3009, 0, sizeof l_CALLS_3009);
l_CALLS_3009 = NULL;
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_S))).f_A, &l_NAMES_3008, &l_CALLS_3009);
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_S))).f_B, &l_NAMES_3008, &l_CALLS_3009);
r_CHECK_INTERFERENCE(l_NAMES_3008, l_CALLS_3009, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 0);
}
}
else if ((l_K_3007 == g_N_CALL))
{
{
R17 * l_NAMES_3010; memset(&l_NAMES_3010, 0, sizeof l_NAMES_3010);
l_NAMES_3010 = NULL;
R17 * l_CALLS_3011; memset(&l_CALLS_3011, 0, sizeof l_CALLS_3011);
l_CALLS_3011 = NULL;
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_S))).f_A, &l_NAMES_3010, &l_CALLS_3011);
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_S))).f_B, &l_NAMES_3010, &l_CALLS_3011);
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_S))).f_C, &l_NAMES_3010, &l_CALLS_3011);
r_CHECK_INTERFERENCE(l_NAMES_3010, l_CALLS_3011, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 0);
}
}
else if (((l_K_3007 == g_N_RETURN) || (l_K_3007 == g_N_ASSERT)))
{
if ((!(((*(R17 *)rt_nil_check(p_S))).f_A == NULL)))
{
{
R17 * l_NAMES_3012; memset(&l_NAMES_3012, 0, sizeof l_NAMES_3012);
l_NAMES_3012 = NULL;
R17 * l_CALLS_3013; memset(&l_CALLS_3013, 0, sizeof l_CALLS_3013);
l_CALLS_3013 = NULL;
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_S))).f_A, &l_NAMES_3012, &l_CALLS_3013);
r_CHECK_INTERFERENCE(l_NAMES_3012, l_CALLS_3013, ((*(R17 *)rt_nil_check(p_S))).f_LINE, (l_K_3007 == g_N_ASSERT));
}
}
}
else if ((l_K_3007 == g_N_IF))
{
{
R17 * l_ARM_3014; memset(&l_ARM_3014, 0, sizeof l_ARM_3014);
l_ARM_3014 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_ARM_3014 == NULL)) goto L_end3015;
{
{
R17 * l_NAMES_3016; memset(&l_NAMES_3016, 0, sizeof l_NAMES_3016);
l_NAMES_3016 = NULL;
R17 * l_CALLS_3017; memset(&l_CALLS_3017, 0, sizeof l_CALLS_3017);
l_CALLS_3017 = NULL;
r_COLLECT_REFS(((*(R17 *)rt_nil_check(l_ARM_3014))).f_A, &l_NAMES_3016, &l_CALLS_3017);
r_CHECK_INTERFERENCE(l_NAMES_3016, l_CALLS_3017, ((*(R17 *)rt_nil_check(l_ARM_3014))).f_LINE, 0);
}
l_ARM_3014 = ((*(R17 *)rt_nil_check(l_ARM_3014))).f_NEXT;
}
RT_B_TICK();
} L_end3015: ;
}
}
}
static void r_COLLECT_LIST(R17 * p_L, R17 * *p_NAMES, R17 * *p_CALLS) { RT_B_TICK(); 
R17 * l_N_3018; memset(&l_N_3018, 0, sizeof l_N_3018);
l_N_3018 = p_L;
for (;;) {
if ((l_N_3018 == NULL)) goto L_end3019;
{
r_COLLECT_REFS(l_N_3018, &(*p_NAMES), &(*p_CALLS));
l_N_3018 = ((*(R17 *)rt_nil_check(l_N_3018))).f_NEXT;
}
RT_B_TICK();
} L_end3019: ;
}
static void r_COLLECT_REFS(R17 * p_E, R17 * *p_NAMES, R17 * *p_CALLS) { RT_B_TICK(); 
rt_int l_K_3020; memset(&l_K_3020, 0, sizeof l_K_3020);
if ((p_E == NULL))
{
return;
}
l_K_3020 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_3020 == g_N_NAME))
{
{
R12 * l_Y_3021; memset(&l_Y_3021, 0, sizeof l_Y_3021);
l_Y_3021 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_3021 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_3021))).f_KIND == g_Y_VAR))
{
(*p_NAMES) = r_NAME_REF(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_3021))).f_OWNER, NULL, (*p_NAMES));
}
}
}
}
else if ((l_K_3020 == g_N_APPLY))
{
{
R12 * l_Y_3022; memset(&l_Y_3022, 0, sizeof l_Y_3022);
l_Y_3022 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_3022 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_3022))).f_KIND == g_Y_VAR))
{
(*p_NAMES) = r_NAME_REF(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_3022))).f_OWNER, NULL, (*p_NAMES));
}
else if ((((*(R12 *)rt_nil_check(l_Y_3022))).f_KIND == g_Y_ROUTINE))
{
(*p_CALLS) = r_NAME_REF(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((rt_int)0LL), p_E, (*p_CALLS));
}
}
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_B, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_C, &(*p_NAMES), &(*p_CALLS));
}
}
else if ((((((l_K_3020 == g_N_FIELD) || (l_K_3020 == g_N_DEREF)) || (l_K_3020 == g_N_UNOP)) || (l_K_3020 == g_N_PAREN)) || (l_K_3020 == g_N_QUAL)))
{
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
}
else if (((((l_K_3020 == g_N_INDEX) || (l_K_3020 == g_N_SUBSTR)) || (l_K_3020 == g_N_BINOP)) || (l_K_3020 == g_N_IN)))
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
else if ((l_K_3020 == g_N_RECCONS))
{
{
R17 * l_F_3023; memset(&l_F_3023, 0, sizeof l_F_3023);
l_F_3023 = ((*(R17 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_F_3023 == NULL)) goto L_end3024;
{
r_COLLECT_REFS(((*(R17 *)rt_nil_check(l_F_3023))).f_A, &(*p_NAMES), &(*p_CALLS));
l_F_3023 = ((*(R17 *)rt_nil_check(l_F_3023))).f_NEXT;
}
RT_B_TICK();
} L_end3024: ;
}
}
else if ((l_K_3020 == g_N_ARRCONS))
{
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
}
}
static R17 * r_NAME_REF(R9 p_NAME, rt_int p_OWNER, R17 * p_A, R17 * p_L) { RT_B_TICK(); 
R17 * l_N_3025; memset(&l_N_3025, 0, sizeof l_N_3025);
l_N_3025 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_3025))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_3025))).f_IV = p_OWNER;
((*(R17 *)rt_nil_check(l_N_3025))).f_A = p_A;
((*(R17 *)rt_nil_check(l_N_3025))).f_NEXT = p_L;
{ R17 * rv3026 = l_N_3025;
return rv3026; }
rt_raise(RT_X_INIT);
}
static R17 * r_ROUTINE_DATA(R9 p_NAME, rt_int p_INOUT) { RT_B_TICK(); 
R12 * l_Y_3027; memset(&l_Y_3027, 0, sizeof l_Y_3027);
l_Y_3027 = r_LOOKUP(p_NAME);
R17 * l_R_3028; memset(&l_R_3028, 0, sizeof l_R_3028);
l_R_3028 = NULL;
rt_int l_FIRST_3029; memset(&l_FIRST_3029, 0, sizeof l_FIRST_3029);
l_FIRST_3029 = 1;
for (;;) {
if ((l_Y_3027 == NULL)) goto L_end3030;
{
if ((((*(R12 *)rt_nil_check(l_Y_3027))).f_KIND == g_Y_ROUTINE))
{
{
R17 * l_D_3031; memset(&l_D_3031, 0, sizeof l_D_3031);
l_D_3031 = r_DATA_OF(r_ORIGINAL(l_Y_3027), p_INOUT, ((rt_int)0LL));
if (l_FIRST_3029)
{
l_R_3028 = l_D_3031;
l_FIRST_3029 = 0;
}
else
{
l_R_3028 = r_INTERSECT_REFS(l_R_3028, l_D_3031);
}
}
}
else if (((!(((*(R12 *)rt_nil_check(l_Y_3027))).f_KIND == g_Y_ROUTINE)) && (!l_FIRST_3029)))
{
}
l_Y_3027 = r_LOOKUP_NEXT(l_Y_3027);
}
RT_B_TICK();
} L_end3030: ;
{ R17 * rv3032 = l_R_3028;
return rv3032; }
rt_raise(RT_X_INIT);
}
static R17 * r_DATA_OF(R12 * p_Y, rt_int p_INOUT, rt_int p_DEPTH) { RT_B_TICK(); 
R17 * l_R_3033; memset(&l_R_3033, 0, sizeof l_R_3033);
l_R_3033 = NULL;
if (((((*(R12 *)rt_nil_check(p_Y))).f_DECL == NULL) || (p_DEPTH > ((rt_int)20LL))))
{
{ R17 * rv3034 = NULL;
return rv3034; }
}
if ((!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_KIND == g_N_ROUTINE)))
{
{ R17 * rv3035 = NULL;
return rv3035; }
}
r_COMPUTE_USES(p_Y);
if ((!p_INOUT))
{
{
R17 * l_U_3036; memset(&l_U_3036, 0, sizeof l_U_3036);
l_U_3036 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_3036 == NULL)) goto L_end3037;
{
l_R_3033 = r_NAME_REF(((*(R17 *)rt_nil_check(l_U_3036))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3036))).f_IV, NULL, l_R_3033);
l_U_3036 = ((*(R17 *)rt_nil_check(l_U_3036))).f_NEXT;
}
RT_B_TICK();
} L_end3037: ;
}
{ R17 * rv3038 = l_R_3033;
return rv3038; }
}
if ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E == NULL))
{
{ R17 * rv3039 = NULL;
return rv3039; }
}
{
R17 * l_U_3040; memset(&l_U_3040, 0, sizeof l_U_3040);
l_U_3040 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_3040 == NULL)) goto L_end3041;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E))).f_B, ((*(R17 *)rt_nil_check(l_U_3040))).f_NAME))
{
l_R_3033 = r_NAME_REF(((*(R17 *)rt_nil_check(l_U_3040))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3040))).f_IV, NULL, l_R_3033);
}
l_U_3040 = ((*(R17 *)rt_nil_check(l_U_3040))).f_NEXT;
}
RT_B_TICK();
} L_end3041: ;
}
{
R17 * l_C_3042; memset(&l_C_3042, 0, sizeof l_C_3042);
l_C_3042 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E))).f_C;
for (;;) {
if ((l_C_3042 == NULL)) goto L_end3043;
{
{
R12 * l_Z_3044; memset(&l_Z_3044, 0, sizeof l_Z_3044);
l_Z_3044 = r_LOOKUP(((*(R17 *)rt_nil_check(l_C_3042))).f_NAME);
for (;;) {
if ((l_Z_3044 == NULL)) goto L_end3045;
{
if ((((*(R12 *)rt_nil_check(l_Z_3044))).f_KIND == g_Y_ROUTINE))
{
{
R17 * l_D_3046; memset(&l_D_3046, 0, sizeof l_D_3046);
l_D_3046 = r_DATA_OF(r_ORIGINAL(l_Z_3044), 1, rt_add(p_DEPTH, ((rt_int)1LL)));
for (;;) {
if ((l_D_3046 == NULL)) goto L_end3047;
{
if ((!r_HAS_REF(l_R_3033, ((*(R17 *)rt_nil_check(l_D_3046))).f_NAME, ((*(R17 *)rt_nil_check(l_D_3046))).f_IV)))
{
l_R_3033 = r_NAME_REF(((*(R17 *)rt_nil_check(l_D_3046))).f_NAME, ((*(R17 *)rt_nil_check(l_D_3046))).f_IV, NULL, l_R_3033);
}
l_D_3046 = ((*(R17 *)rt_nil_check(l_D_3046))).f_NEXT;
}
RT_B_TICK();
} L_end3047: ;
}
}
l_Z_3044 = r_LOOKUP_NEXT(l_Z_3044);
}
RT_B_TICK();
} L_end3045: ;
}
l_C_3042 = ((*(R17 *)rt_nil_check(l_C_3042))).f_NEXT;
}
RT_B_TICK();
} L_end3043: ;
}
{ R17 * rv3048 = l_R_3033;
return rv3048; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_REF(R17 * p_L, R9 p_NAME, rt_int p_OWNER) { RT_B_TICK(); 
R17 * l_P_3049; memset(&l_P_3049, 0, sizeof l_P_3049);
l_P_3049 = p_L;
for (;;) {
if ((l_P_3049 == NULL)) goto L_end3050;
{
if ((r_TEQ(((*(R17 *)rt_nil_check(l_P_3049))).f_NAME, p_NAME) && (((*(R17 *)rt_nil_check(l_P_3049))).f_IV == p_OWNER)))
{
{ rt_int rv3051 = 1;
return rv3051; }
}
l_P_3049 = ((*(R17 *)rt_nil_check(l_P_3049))).f_NEXT;
}
RT_B_TICK();
} L_end3050: ;
{ rt_int rv3052 = 0;
return rv3052; }
rt_raise(RT_X_INIT);
}
static R17 * r_INTERSECT_REFS(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_R_3053; memset(&l_R_3053, 0, sizeof l_R_3053);
l_R_3053 = NULL;
R17 * l_P_3054; memset(&l_P_3054, 0, sizeof l_P_3054);
l_P_3054 = p_A;
for (;;) {
if ((l_P_3054 == NULL)) goto L_end3055;
{
if (r_HAS_REF(p_B, ((*(R17 *)rt_nil_check(l_P_3054))).f_NAME, ((*(R17 *)rt_nil_check(l_P_3054))).f_IV))
{
l_R_3053 = r_NAME_REF(((*(R17 *)rt_nil_check(l_P_3054))).f_NAME, ((*(R17 *)rt_nil_check(l_P_3054))).f_IV, NULL, l_R_3053);
}
l_P_3054 = ((*(R17 *)rt_nil_check(l_P_3054))).f_NEXT;
}
RT_B_TICK();
} L_end3055: ;
{ R17 * rv3056 = l_R_3053;
return rv3056; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_INTERFERENCE(R17 * p_NAMES, R17 * p_CALLS, rt_int p_LINE, rt_int p_ASSERTION) { RT_B_TICK(); 
R17 * l_C_3057; memset(&l_C_3057, 0, sizeof l_C_3057);
l_C_3057 = p_CALLS;
for (;;) {
if ((l_C_3057 == NULL)) goto L_end3058;
{
{
R17 * l_V_3059; memset(&l_V_3059, 0, sizeof l_V_3059);
l_V_3059 = r_ROUTINE_DATA(((*(R17 *)rt_nil_check(l_C_3057))).f_NAME, 1);
if (((!(l_V_3059 == NULL)) && p_ASSERTION))
{
r_FAILT(p_LINE, rt_str("the expression of ASSERT must be free of side-effects (4.5.8): ", 63), ((*(R17 *)rt_nil_check(l_C_3057))).f_NAME);
}
for (;;) {
if ((l_V_3059 == NULL)) goto L_end3060;
{
if (r_HAS_REF(p_NAMES, ((*(R17 *)rt_nil_check(l_V_3059))).f_NAME, ((*(R17 *)rt_nil_check(l_V_3059))).f_IV))
{
r_FAILT(p_LINE, rt_str("a function invocation modifies a variable the expression also names (4.3.4): ", 77), ((*(R17 *)rt_nil_check(l_V_3059))).f_NAME);
}
{
R17 * l_D_3061; memset(&l_D_3061, 0, sizeof l_D_3061);
l_D_3061 = p_CALLS;
for (;;) {
if ((l_D_3061 == NULL)) goto L_end3062;
{
if ((!(l_D_3061 == l_C_3057)))
{
if (r_HAS_REF(r_ROUTINE_DATA(((*(R17 *)rt_nil_check(l_D_3061))).f_NAME, 0), ((*(R17 *)rt_nil_check(l_V_3059))).f_NAME, ((*(R17 *)rt_nil_check(l_V_3059))).f_IV))
{
r_FAILT(p_LINE, rt_str("two function invocations of one expression interfere on (4.3.4): ", 65), ((*(R17 *)rt_nil_check(l_V_3059))).f_NAME);
}
}
l_D_3061 = ((*(R17 *)rt_nil_check(l_D_3061))).f_NEXT;
}
RT_B_TICK();
} L_end3062: ;
}
l_V_3059 = ((*(R17 *)rt_nil_check(l_V_3059))).f_NEXT;
}
RT_B_TICK();
} L_end3060: ;
}
l_C_3057 = ((*(R17 *)rt_nil_check(l_C_3057))).f_NEXT;
}
RT_B_TICK();
} L_end3058: ;
}
static rt_int r_IN_HANDLERS(R17 * p_HS, R9 p_NAME) { RT_B_TICK(); 
R17 * l_H_3063; memset(&l_H_3063, 0, sizeof l_H_3063);
l_H_3063 = p_HS;
for (;;) {
if ((l_H_3063 == NULL)) goto L_end3064;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_H_3063))).f_A, p_NAME))
{
{ rt_int rv3065 = 1;
return rv3065; }
}
l_H_3063 = ((*(R17 *)rt_nil_check(l_H_3063))).f_NEXT;
}
RT_B_TICK();
} L_end3064: ;
{ rt_int rv3066 = 0;
return rv3066; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED_STMT(R17 * p_S) { RT_B_TICK(); 
rt_int l_K_3067; memset(&l_K_3067, 0, sizeof l_K_3067);
l_K_3067 = ((*(R17 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_3067 == g_N_EXCEPT))
{
{ rt_int rv3068 = r_IS_STRUCTURED_STMT(((*(R17 *)rt_nil_check(p_S))).f_A);
return rv3068; }
}
{ rt_int rv3069 = (((((((l_K_3067 == g_N_BLOCK) || (l_K_3067 == g_N_IF)) || (l_K_3067 == g_N_CASE)) || (l_K_3067 == g_N_LOOP)) || (l_K_3067 == g_N_FOR)) || (l_K_3067 == g_N_PAR)) || (l_K_3067 == g_N_WITH));
return rv3069; }
rt_raise(RT_X_INIT);
}
static R17 * r_NAMED_ROOT(R17 * p_E) { RT_B_TICK(); 
rt_int l_K_3070; memset(&l_K_3070, 0, sizeof l_K_3070);
l_K_3070 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
if (((l_K_3070 == g_N_NAME) || (l_K_3070 == g_N_APPLY)))
{
{ R17 * rv3071 = p_E;
return rv3071; }
}
else if ((((l_K_3070 == g_N_INDEX) || (l_K_3070 == g_N_FIELD)) || (l_K_3070 == g_N_SUBSTR)))
{
{ R17 * rv3072 = r_NAMED_ROOT(((*(R17 *)rt_nil_check(p_E))).f_A);
return rv3072; }
}
{ R17 * rv3073 = NULL;
return rv3073; }
rt_raise(RT_X_INIT);
}
static void r_STMT(R17 * p_S) { RT_B_TICK(); 
rt_int l_K_3074; memset(&l_K_3074, 0, sizeof l_K_3074);
l_K_3074 = ((*(R17 *)rt_nil_check(p_S))).f_KIND;
r_INTERFERENCE(p_S);
if ((l_K_3074 == g_N_NULL))
{
return;
}
else if ((l_K_3074 == g_N_LABELED))
{
{
R12 * l_Y_3075; memset(&l_Y_3075, 0, sizeof l_Y_3075);
l_Y_3075 = r_LOOKUP(((*(R17 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_3075))).f_ACCESS));
r_STMT(((*(R17 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_3074 == g_N_GOTO))
{
{
R12 * l_Y_3076; memset(&l_Y_3076, 0, sizeof l_Y_3076);
l_Y_3076 = r_LOOKUP(((*(R17 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_3077; memset(&l_N_3077, 0, sizeof l_N_3077);
R18 * l_C_3078; memset(&l_C_3078, 0, sizeof l_C_3078);
l_C_3078 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_3076 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3076))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3076))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
l_N_3077 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_3076))).f_MV);
for (;;) {
if ((l_N_3077 <= ((rt_int)0LL))) goto L_end3079;
{
if ((((*(R18 *)rt_nil_check(l_C_3078))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R18 *)rt_nil_check(l_C_3078))).f_NAME));
l_N_3077 = rt_sub(l_N_3077, ((rt_int)1LL));
}
l_C_3078 = ((*(R18 *)rt_nil_check(l_C_3078))).f_NEXT;
}
RT_B_TICK();
} L_end3079: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_3076))).f_ACCESS));
}
}
else if ((l_K_3074 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_3074 == g_N_CALL))
{
{
R26 l_V_3080; memset(&l_V_3080, 0, sizeof l_V_3080);
S_R26(&l_V_3080, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_3080).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_3080).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_3080).f_C, rt_str(";", 1)));
}
}
else if ((l_K_3074 == g_N_IF))
{
r_IF_STMT(((*(R17 *)rt_nil_check(p_S))).f_A, ((*(R17 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_3074 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_3074 == g_N_LOOP))
{
{
R9 l_END_L_3081; memset(&l_END_L_3081, 0, sizeof l_END_L_3081);
S_R9(&l_END_L_3081, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R17 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A), l_END_L_3081));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_3081);
r_OPEN_BODY(((*(R17 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CODES(rt_str("RT_B_TICK();", 12));
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_C), l_END_L_3081));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_3081));
}
}
else if ((l_K_3074 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_3074 == g_N_EXIT))
{
{
R18 * l_C_3082; memset(&l_C_3082, 0, sizeof l_C_3082);
l_C_3082 = r_LEAVE(((rt_int)2LL));
if ((l_C_3082 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R18 *)rt_nil_check(l_C_3082))).f_NAME));
}
}
else if ((l_K_3074 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_3074 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R17 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_3074 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_3074 == g_N_ASSERT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS)
{
{
R14 l_SAVED_CODE_3083; memset(&l_SAVED_CODE_3083, 0, sizeof l_SAVED_CODE_3083);
S_R14(&l_SAVED_CODE_3083, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R9 l_C_3084; memset(&l_C_3084, 0, sizeof l_C_3084);
S_R9(&l_C_3084, r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3083, 0);
}
}
else
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A)));
}
}
else if ((l_K_3074 == g_N_EXCEPT))
{
r_GUARDED(((*(R17 *)rt_nil_check(p_S))).f_A, NULL, ((*(R17 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_3074 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_3074 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_3074 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R17 * p_S) { RT_B_TICK(); 
R12 * l_Y_3085; memset(&l_Y_3085, 0, sizeof l_Y_3085);
l_Y_3085 = r_LOOKUP(((*(R17 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_3085 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_3085))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_3085))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv3086 = r_CALL_EXPR(p_S, NULL);
return rv3086; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R17 * p_ARMS, R17 * p_ELSE_BODY) { RT_B_TICK(); 
R17 * l_ARM_3087; memset(&l_ARM_3087, 0, sizeof l_ARM_3087);
l_ARM_3087 = p_ARMS;
R9 l_WORD_3088; memset(&l_WORD_3088, 0, sizeof l_WORD_3088);
S_R9(&l_WORD_3088, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_3089; memset(&l_OPEN_3089, 0, sizeof l_OPEN_3089);
l_OPEN_3089 = ((rt_int)0LL);
rt_int l_CHOSEN_3090; memset(&l_CHOSEN_3090, 0, sizeof l_CHOSEN_3090);
l_CHOSEN_3090 = 0;
for (;;) {
if ((l_ARM_3087 == NULL)) goto L_end3091;
{
{
R23 l_M_3092; memset(&l_M_3092, 0, sizeof l_M_3092);
S_R23(&l_M_3092, r_MANIFEST(((*(R17 *)rt_nil_check(l_ARM_3087))).f_A), 0);
if (l_CHOSEN_3090)
{
r_CHECK_COND(((*(R17 *)rt_nil_check(l_ARM_3087))).f_A);
r_CHECK_BODY(((*(R17 *)rt_nil_check(l_ARM_3087))).f_B);
}
else if ((l_M_3092).f_OK)
{
if ((!r_TEQS(l_WORD_3088, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_3089 = rt_add(l_OPEN_3089, ((rt_int)1LL));
S_R9(&l_WORD_3088, r_MK(rt_str("if", 2)), 0);
}
r_CODE(r_FMT1(rt_str("(void)(@);", 10), r_BOOL_EXPR(((*(R17 *)rt_nil_check(l_ARM_3087))).f_A)));
if (((l_M_3092).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R17 *)rt_nil_check(l_ARM_3087))).f_B);
l_CHOSEN_3090 = 1;
}
else
{
r_CHECK_BODY(((*(R17 *)rt_nil_check(l_ARM_3087))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3088, r_BOOL_EXPR(((*(R17 *)rt_nil_check(l_ARM_3087))).f_A)));
r_OPEN_BODY(((*(R17 *)rt_nil_check(l_ARM_3087))).f_B);
S_R9(&l_WORD_3088, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_3087 = ((*(R17 *)rt_nil_check(l_ARM_3087))).f_NEXT;
}
RT_B_TICK();
} L_end3091: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_3090)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_3088, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it3094_lo = ((rt_int)1LL), it3094_hi = l_OPEN_3089;
for (rt_int it3094 = it3094_lo; it3094 <= it3094_hi; it3094++) {
{
r_CODES(rt_str("}", 1));
}
RT_B_TICK();
if (it3094 == it3094_hi) break;
} } L_end3093: ;
}
static void r_CHECK_BODY(R17 * p_B) { RT_B_TICK(); 
R14 l_SAVED_CODE_3095; memset(&l_SAVED_CODE_3095, 0, sizeof l_SAVED_CODE_3095);
S_R14(&l_SAVED_CODE_3095, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3096; memset(&rc3096, 0, sizeof rc3096);  rc3096.f_HEAD = NULL; rc3096.f_TAIL = NULL; rc3096; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3095, 0);
}
static void r_CHECK_COND(R17 * p_E) { RT_B_TICK(); 
R9 l_C_3097; memset(&l_C_3097, 0, sizeof l_C_3097);
S_R9(&l_C_3097, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R17 * p_S) { RT_B_TICK(); 
R9 l_END_L_3098; memset(&l_END_L_3098, 0, sizeof l_END_L_3098);
S_R9(&l_END_L_3098, r_NEW_NAME(rt_str("L_end", 5)), 0);
R9 l_IT_3099; memset(&l_IT_3099, 0, sizeof l_IT_3099);
S_R9(&l_IT_3099, r_NEW_NAME(rt_str("it", 2)), 0);
R17 * l_R_3100; memset(&l_R_3100, 0, sizeof l_R_3100);
l_R_3100 = ((*(R17 *)rt_nil_check(p_S))).f_A;
R26 l_LO_3101; memset(&l_LO_3101, 0, sizeof l_LO_3101);
S_R26(&l_LO_3101, r_EXPR(((*(R17 *)rt_nil_check(l_R_3100))).f_A, NULL), 0);
R26 l_HI_3102; memset(&l_HI_3102, 0, sizeof l_HI_3102);
S_R26(&l_HI_3102, r_EXPR(((*(R17 *)rt_nil_check(l_R_3100))).f_B, (l_LO_3101).f_T), 0);
R22 * l_T_3103; memset(&l_T_3103, 0, sizeof l_T_3103);
l_T_3103 = r_REAL_TYPE((l_LO_3101).f_T);
R9 l_LOC_3104; memset(&l_LOC_3104, 0, sizeof l_LOC_3104);
R9 l_HIC_3105; memset(&l_HIC_3105, 0, sizeof l_HIC_3105);
if ((((*(R22 *)rt_nil_check(l_T_3103))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_3103))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_3103))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_3103))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R9(&l_LOC_3104, (l_LO_3101).f_C, 0);
S_R9(&l_HIC_3105, (l_HI_3102).f_C, 0);
if (((((*(R17 *)rt_nil_check(l_R_3100))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_R_3100))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LOC_3104, r_FMT1(rt_str("(@) + 1", 7), l_LOC_3104), 0);
}
if ((((*(R17 *)rt_nil_check(l_R_3100))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HIC_3105, r_FMT1(rt_str("(@) - 1", 7), l_HIC_3105), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_3099, l_LOC_3104, l_IT_3099, l_HIC_3105));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_3099, l_IT_3099, l_IT_3099, l_IT_3099));
r_OPEN_SCOPE();
if (((((*(R17 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_3106; memset(&l_Y_3106, 0, sizeof l_Y_3106);
l_Y_3106 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3106))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_3103))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_3106))).f_T = ((*(R22 *)rt_nil_check(l_T_3103))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_3106))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_3106, rt_str("", 0)), l_IT_3099));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_3106, rt_str("", 0)), l_IT_3099));
}
else
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3106))).f_ACCESS, l_IT_3099, 0);
}
r_DEFINE(l_Y_3106, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_3098);
r_OPEN_BODY(((*(R17 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODES(rt_str("RT_B_TICK();", 12));
r_CODE(r_FMT2(rt_str("if (@ == @_hi) break;", 21), l_IT_3099, l_IT_3099));
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_3098));
}
static void r_RETURN_STMT(R17 * p_S) { RT_B_TICK(); 
R19 * l_CS_3107; memset(&l_CS_3107, 0, sizeof l_CS_3107);
l_CS_3107 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_C_3108; memset(&l_C_3108, 0, sizeof l_C_3108);
if ((((*(R17 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_3108 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R19 *)rt_nil_check(l_CS_3107))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R19 *)rt_nil_check(l_CS_3107))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R19 *)rt_nil_check(l_CS_3107))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R19 *)rt_nil_check(l_CS_3107))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODE(r_CATS(((*(R19 *)rt_nil_check(l_CS_3107))).f_COPYOUT, rt_str("return;", 7)));
}
return;
}
if (((((*(R19 *)rt_nil_check(l_CS_3107))).f_RESULT == NULL) || ((*(R19 *)rt_nil_check(l_CS_3107))).f_IS_PATH))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R19 *)rt_nil_check(l_CS_3107))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R9 l_V_3109; memset(&l_V_3109, 0, sizeof l_V_3109);
S_R9(&l_V_3109, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R19 *)rt_nil_check(l_CS_3107))).f_RESULT), l_V_3109, r_CONVERT(r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A, ((*(R19 *)rt_nil_check(l_CS_3107))).f_RESULT), ((*(R19 *)rt_nil_check(l_CS_3107))).f_RESULT, ((*(R17 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_3108 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_3109));
}
}
static void r_SIGNAL_STMT(R17 * p_S) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R18 * l_C_3110; memset(&l_C_3110, 0, sizeof l_C_3110);
l_C_3110 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_3110 == NULL)) goto L_end3111;
{
if ((((*(R18 *)rt_nil_check(l_C_3110))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R18 *)rt_nil_check(l_C_3110))).f_NAME));
return;
}
if ((((*(R18 *)rt_nil_check(l_C_3110))).f_KIND == ((rt_int)1LL)))
{
goto L_end3111;
}
l_C_3110 = ((*(R18 *)rt_nil_check(l_C_3110))).f_NEXT;
}
RT_B_TICK();
} L_end3111: ;
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
R17 * l_TG_3112; memset(&l_TG_3112, 0, sizeof l_TG_3112);
l_TG_3112 = ((*(R17 *)rt_nil_check(p_S))).f_A;
if ((((*(R17 *)rt_nil_check(l_TG_3112))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_3113; memset(&l_B_3113, 0, sizeof l_B_3113);
S_R26(&l_B_3113, r_EXPR(((*(R17 *)rt_nil_check(l_TG_3112))).f_A, NULL), 0);
if ((!(l_B_3113).f_LVAL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_3113).f_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_3114; memset(&l_ARGS_3114, 0, sizeof l_ARGS_3114);
l_ARGS_3114 = r_NODE_ARG(((*(R17 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R17 *)rt_nil_check(l_TG_3112))).f_B, g_M_IN, r_NODE_ARG(((*(R17 *)rt_nil_check(l_TG_3112))).f_C, g_M_IN, r_VAL_ARG(l_B_3113, NULL))));
R12 * l_Y_3115; memset(&l_Y_3115, 0, sizeof l_Y_3115);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_3114))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_3115 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_3114, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_3115 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_3114))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_3115 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_3114, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_3115 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_3115, l_ARGS_3114, ((*(R17 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_3113).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_3113).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_3116; memset(&l_V_3116, 0, sizeof l_V_3116);
S_R26(&l_V_3116, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_B, (l_B_3113).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_3116).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_3113).f_T))).f_KIND)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_3113).f_C, r_INT_EXPR(((*(R17 *)rt_nil_check(l_TG_3112))).f_B), r_INT_EXPR(((*(R17 *)rt_nil_check(l_TG_3112))).f_C), (l_V_3116).f_C));
}
}
return;
}
{
R26 l_LV_3117; memset(&l_LV_3117, 0, sizeof l_LV_3117);
S_R26(&l_LV_3117, r_EXPR(l_TG_3112, NULL), 0);
R17 * l_SAVED_Q_3118; memset(&l_SAVED_Q_3118, 0, sizeof l_SAVED_Q_3118);
l_SAVED_Q_3118 = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
if ((!(l_LV_3117).f_LVAL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = NULL;
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_B))).f_KIND == g_N_QUAL))
{
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = ((*(R17 *)rt_nil_check(p_S))).f_B;
}
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R17 *)rt_nil_check(p_S))).f_B;
if (((((*(R22 *)rt_nil_check((l_LV_3117).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
r_REQUIRE_WHERE(r_MKN(rt_str("STORE_", 6)), ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
{
R26 l_V_3119; memset(&l_V_3119, 0, sizeof l_V_3119);
S_R26(&l_V_3119, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_B, (l_LV_3117).f_T), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
r_CODE(r_STORE_CODE((l_LV_3117).f_T, (l_LV_3117).f_C, l_V_3119, ((*(R17 *)rt_nil_check(p_S))).f_LINE, (l_LV_3117).f_SELF));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = l_SAVED_Q_3118;
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
R12 * l_Y_3120; memset(&l_Y_3120, 0, sizeof l_Y_3120);
l_Y_3120 = r_NEW_SYM(g_Y_VAR, ((*(R17 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_3121; memset(&l_V_3121, 0, sizeof l_V_3121);
S_R26(&l_V_3121, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_3120))).f_T = (l_V_3121).f_T;
((*(R12 *)rt_nil_check(l_Y_3120))).f_WITHV = ((rt_int)1LL);
if ((((*(R17 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R9 l_CN_3122; memset(&l_CN_3122, 0, sizeof l_CN_3122);
S_R9(&l_CN_3122, r_NEW_OBJECT(l_Y_3120, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_3121).f_T))
{
r_CODE(r_INIT_CODE((l_V_3121).f_T, l_CN_3122));
}
r_CODE(r_ASSIGN_CODE((l_V_3121).f_T, l_CN_3122, (l_V_3121).f_C));
}
}
else
{
if ((!(l_V_3121).f_LVAL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R9 l_P_3123; memset(&l_P_3123, 0, sizeof l_P_3123);
S_R9(&l_P_3123, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_3121).f_T), l_P_3123, (l_V_3121).f_C));
S_R9(&((*(R12 *)rt_nil_check(l_Y_3120))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_3123), 0);
S_R9(&((*(R12 *)rt_nil_check(l_Y_3120))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_3120))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_3120))).f_OWNER = rt_neg(((rt_int)1LL));
}
{
R17 * l_R_3124; memset(&l_R_3124, 0, sizeof l_R_3124);
l_R_3124 = r_NAMED_ROOT(((*(R17 *)rt_nil_check(p_S))).f_A);
if ((!(l_R_3124 == NULL)))
{
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_R_3124))).f_NAME, ((*(R17 *)rt_nil_check(p_S))).f_NAME)))
{
{
R12 * l_OLD_3125; memset(&l_OLD_3125, 0, sizeof l_OLD_3125);
l_OLD_3125 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_3124))).f_NAME);
if ((!(l_OLD_3125 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_OLD_3125))).f_KIND == g_Y_VAR))
{
{
R12 * l_H_3126; memset(&l_H_3126, 0, sizeof l_H_3126);
l_H_3126 = r_NEW_SYM(g_Y_VAR, ((*(R17 *)rt_nil_check(l_R_3124))).f_NAME);
((*(R12 *)rt_nil_check(l_H_3126))).f_T = ((*(R12 *)rt_nil_check(l_OLD_3125))).f_T;
((*(R12 *)rt_nil_check(l_H_3126))).f_WITHV = ((rt_int)2LL);
((*(R12 *)rt_nil_check(l_H_3126))).f_OWNER = ((*(R12 *)rt_nil_check(l_OLD_3125))).f_OWNER;
r_DEFINE(l_H_3126, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
}
}
}
}
}
}
}
r_DEFINE(l_Y_3120, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R17 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R17 * p_S) { RT_B_TICK(); 
R17 * l_ARM_3127; memset(&l_ARM_3127, 0, sizeof l_ARM_3127);
l_ARM_3127 = ((*(R17 *)rt_nil_check(p_S))).f_B;
R25 * l_SEEN_3128; memset(&l_SEEN_3128, 0, sizeof l_SEEN_3128);
l_SEEN_3128 = NULL;
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_3129; memset(&l_CH_3129, 0, sizeof l_CH_3129);
S_R26(&l_CH_3129, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_3130; memset(&l_T_3130, 0, sizeof l_T_3130);
l_T_3130 = r_REAL_TYPE((l_CH_3129).f_T);
R12 * l_BOUND_3131; memset(&l_BOUND_3131, 0, sizeof l_BOUND_3131);
l_BOUND_3131 = r_DISCRIMINATED(((*(R17 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_3130))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_3130))).f_KIND == g_T_BITS)))
{
{
R9 l_TMP_3132; memset(&l_TMP_3132, 0, sizeof l_TMP_3132);
S_R9(&l_TMP_3132, r_NEW_NAME(rt_str("cs", 2)), 0);
R9 l_WORD_3133; memset(&l_WORD_3133, 0, sizeof l_WORD_3133);
S_R9(&l_WORD_3133, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_3132, (l_CH_3129).f_C));
for (;;) {
if ((l_ARM_3127 == NULL)) goto L_end3134;
{
{
R17 * l_L_3135; memset(&l_L_3135, 0, sizeof l_L_3135);
l_L_3135 = ((*(R17 *)rt_nil_check(l_ARM_3127))).f_A;
R9 l_COND_3136; memset(&l_COND_3136, 0, sizeof l_COND_3136);
S_R9(&l_COND_3136, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3135 == NULL)) goto L_end3137;
{
S_R9(&l_COND_3136, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_3136, l_TMP_3132, (r_EXPR(l_L_3135, l_T_3130)).f_C), 0);
l_L_3135 = ((*(R17 *)rt_nil_check(l_L_3135))).f_NEXT;
}
RT_B_TICK();
} L_end3137: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3133, l_COND_3136));
S_R9(&l_WORD_3133, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3127))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3127))).f_C);
}
l_ARM_3127 = ((*(R17 *)rt_nil_check(l_ARM_3127))).f_NEXT;
}
RT_B_TICK();
} L_end3134: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_3133, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if (((((*(R22 *)rt_nil_check(l_T_3130))).f_KIND == g_T_FLOAT) || (((((*(R22 *)rt_nil_check(l_T_3130))).f_KIND == g_T_INT) && (!(((*(R22 *)rt_nil_check(l_T_3130))).f_SCALE == ((rt_int)0LL)))))))
{
r_VALUE_CASE(p_S, l_CH_3129);
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_3130))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_3130))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_3130))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_3130))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_3130));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_3129).f_C));
for (;;) {
if ((l_ARM_3127 == NULL)) goto L_end3138;
{
{
R17 * l_L_3139; memset(&l_L_3139, 0, sizeof l_L_3139);
l_L_3139 = ((*(R17 *)rt_nil_check(l_ARM_3127))).f_A;
R23 l_FIRST_3140; memset(&l_FIRST_3140, 0, sizeof l_FIRST_3140);
S_R23(&l_FIRST_3140, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_3139 == NULL)) goto L_end3141;
{
if ((((*(R17 *)rt_nil_check(l_L_3139))).f_KIND == g_N_RANGE))
{
{
R23 l_LO_3142; memset(&l_LO_3142, 0, sizeof l_LO_3142);
S_R23(&l_LO_3142, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_3139))).f_A, l_T_3130), 0);
R23 l_HI_3143; memset(&l_HI_3143, 0, sizeof l_HI_3143);
S_R23(&l_HI_3143, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_3139))).f_B, l_T_3130), 0);
rt_int l_A_3144; memset(&l_A_3144, 0, sizeof l_A_3144);
l_A_3144 = (l_LO_3142).f_V;
rt_int l_B_3145; memset(&l_B_3145, 0, sizeof l_B_3145);
l_B_3145 = (l_HI_3143).f_V;
if ((!(((l_LO_3142).f_OK && (l_HI_3143).f_OK))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_3139))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R17 *)rt_nil_check(l_L_3139))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_L_3139))).f_IV == ((rt_int)3LL))))
{
l_A_3144 = rt_add(l_A_3144, ((rt_int)1LL));
}
if ((((*(R17 *)rt_nil_check(l_L_3139))).f_IV >= ((rt_int)2LL)))
{
l_B_3145 = rt_sub(l_B_3145, ((rt_int)1LL));
}
if ((!(l_FIRST_3140).f_OK))
{
S_R23(&l_FIRST_3140, r_SOME(l_A_3144), 0);
}
l_SEEN_3128 = r_DISTINCT_LABEL(l_SEEN_3128, l_A_3144, l_B_3145, ((*(R17 *)rt_nil_check(l_L_3139))).f_LINE);
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_3144), r_NUM(l_B_3145)));
}
}
else
{
{
R23 l_M_3146; memset(&l_M_3146, 0, sizeof l_M_3146);
S_R23(&l_M_3146, r_ENUM_MANIFEST(l_L_3139, l_T_3130), 0);
if ((!(l_M_3146).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_3139))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_3140).f_OK))
{
S_R23(&l_FIRST_3140, l_M_3146, 0);
}
l_SEEN_3128 = r_DISTINCT_LABEL(l_SEEN_3128, (l_M_3146).f_V, (l_M_3146).f_V, ((*(R17 *)rt_nil_check(l_L_3139))).f_LINE);
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_3146).f_V)));
}
}
l_L_3139 = ((*(R17 *)rt_nil_check(l_L_3139))).f_NEXT;
}
RT_B_TICK();
} L_end3141: ;
if ((!(l_BOUND_3131 == NULL)))
{
{
R22 * l_SAVED_3147; memset(&l_SAVED_3147, 0, sizeof l_SAVED_3147);
l_SAVED_3147 = ((*(R12 *)rt_nil_check(l_BOUND_3131))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_3131))).f_T = r_NARROW(l_SAVED_3147, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_3140).f_V);
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3127))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3127))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_3131))).f_T = l_SAVED_3147;
}
}
else
{
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3127))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3127))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_3127 = ((*(R17 *)rt_nil_check(l_ARM_3127))).f_NEXT;
}
RT_B_TICK();
} L_end3138: ;
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
R25 * l_P_3148; memset(&l_P_3148, 0, sizeof l_P_3148);
l_P_3148 = p_SEEN;
if ((p_A > p_B))
{
{ R25 * rv3149 = p_SEEN;
return rv3149; }
}
for (;;) {
if ((l_P_3148 == NULL)) goto L_end3150;
{
if (((p_A <= (((*(R25 *)rt_nil_check(l_P_3148))).f_MHI).f_V) && ((((*(R25 *)rt_nil_check(l_P_3148))).f_MLO).f_V <= p_B)))
{
r_FAIL(p_LINE, rt_str("the choice-label values must be distinct (4.5.5.2)", 50));
}
l_P_3148 = ((*(R25 *)rt_nil_check(l_P_3148))).f_NEXT;
}
RT_B_TICK();
} L_end3150: ;
l_P_3148 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_P_3148)), ({ R25 rc3151; memset(&rc3151, 0, sizeof rc3151);  S_R9(&rc3151.f_LO, r_NO_TEXT(), 0); S_R9(&rc3151.f_HI, r_NO_TEXT(), 0); S_R23(&rc3151.f_MLO, r_SOME(p_A), 0); S_R23(&rc3151.f_MHI, r_SOME(p_B), 0); rc3151.f_ANYARG = 0; rc3151.f_NEXT = p_SEEN; rc3151; }), 0);
{ R25 * rv3152 = l_P_3148;
return rv3152; }
rt_raise(RT_X_INIT);
}
static void r_VALUE_CASE(R17 * p_S, R26 p_CH) { RT_B_TICK(); 
R9 l_TMP_3153; memset(&l_TMP_3153, 0, sizeof l_TMP_3153);
S_R9(&l_TMP_3153, r_NEW_NAME(rt_str("cs", 2)), 0);
R26 l_X_3154; memset(&l_X_3154, 0, sizeof l_X_3154);
S_R26(&l_X_3154, r_MKET(l_TMP_3153, (p_CH).f_T), 0);
R17 * l_ARM_3155; memset(&l_ARM_3155, 0, sizeof l_ARM_3155);
l_ARM_3155 = ((*(R17 *)rt_nil_check(p_S))).f_B;
R9 l_WORD_3156; memset(&l_WORD_3156, 0, sizeof l_WORD_3156);
S_R9(&l_WORD_3156, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(r_REAL_TYPE((p_CH).f_T)), l_TMP_3153, (p_CH).f_C));
for (;;) {
if ((l_ARM_3155 == NULL)) goto L_end3157;
{
{
R17 * l_L_3158; memset(&l_L_3158, 0, sizeof l_L_3158);
l_L_3158 = ((*(R17 *)rt_nil_check(l_ARM_3155))).f_A;
R9 l_COND_3159; memset(&l_COND_3159, 0, sizeof l_COND_3159);
S_R9(&l_COND_3159, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3158 == NULL)) goto L_end3160;
{
if ((((*(R17 *)rt_nil_check(l_L_3158))).f_KIND == g_N_RANGE))
{
{
R26 l_LO_3161; memset(&l_LO_3161, 0, sizeof l_LO_3161);
S_R26(&l_LO_3161, r_CASE_LABEL(((*(R17 *)rt_nil_check(l_L_3158))).f_A, (p_CH).f_T), 0);
R26 l_HI_3162; memset(&l_HI_3162, 0, sizeof l_HI_3162);
S_R26(&l_HI_3162, r_CASE_LABEL(((*(R17 *)rt_nil_check(l_L_3158))).f_B, (p_CH).f_T), 0);
rstr l_GE_3163; memset(&l_GE_3163, 0, sizeof l_GE_3163);
l_GE_3163 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_GE_3163, rt_str(">=", 2));
rstr l_LE_3164; memset(&l_LE_3164, 0, sizeof l_LE_3164);
l_LE_3164 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_LE_3164, rt_str("<=", 2));
if (((((*(R17 *)rt_nil_check(l_L_3158))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_L_3158))).f_IV == ((rt_int)3LL))))
{
rt_b_assign(&l_GE_3163, rt_str("> ", 2));
}
if ((((*(R17 *)rt_nil_check(l_L_3158))).f_IV >= ((rt_int)2LL)))
{
rt_b_assign(&l_LE_3164, rt_str("< ", 2));
}
S_R9(&l_COND_3159, r_FMT3(rt_str("@ || (@ && @)", 13), l_COND_3159, r_VALUE_COMPARE(l_X_3154, l_LO_3161, r_MK(l_GE_3163)), r_VALUE_COMPARE(l_X_3154, l_HI_3162, r_MK(l_LE_3164))), 0);
}
}
else
{
S_R9(&l_COND_3159, r_FMT2(rt_str("@ || @", 6), l_COND_3159, r_VALUE_COMPARE(l_X_3154, r_CASE_LABEL(l_L_3158, (p_CH).f_T), r_MK(rt_str("==", 2)))), 0);
}
l_L_3158 = ((*(R17 *)rt_nil_check(l_L_3158))).f_NEXT;
}
RT_B_TICK();
} L_end3160: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3156, l_COND_3159));
S_R9(&l_WORD_3156, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3155))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3155))).f_C);
}
l_ARM_3155 = ((*(R17 *)rt_nil_check(l_ARM_3155))).f_NEXT;
}
RT_B_TICK();
} L_end3157: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_3156, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
static R26 r_CASE_LABEL(R17 * p_L, R22 * p_T) { RT_B_TICK(); 
R26 l_V_3165; memset(&l_V_3165, 0, sizeof l_V_3165);
S_R26(&l_V_3165, r_EXPR(p_L, p_T), 0);
if ((!r_SAME_CLASS(r_REAL_TYPE((l_V_3165).f_T), r_REAL_TYPE(p_T))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_L))).f_LINE, rt_str("a case label is a value of the type of the choice (4.5.5.2)", 59));
}
{ R26 rv3166 = l_V_3165;
return rv3166; }
rt_raise(RT_X_INIT);
}
static R9 r_VALUE_COMPARE(R26 p_A, R26 p_B, R9 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT))
{
{ R9 rv3167 = r_FLOAT_COMPARE(p_A, p_B, p_OP);
return rv3167; }
}
{ R9 rv3168 = r_FIXED_COMPARE(p_A, p_B, p_OP);
return rv3168; }
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
{ R12 * rv3169 = NULL;
return rv3169; }
}
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv3170 = NULL;
return rv3170; }
}
{
R12 * l_Y_3171; memset(&l_Y_3171, 0, sizeof l_Y_3171);
l_Y_3171 = r_LOOKUP(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_3171 == NULL))
{
{ R12 * rv3172 = NULL;
return rv3172; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3171))).f_KIND == g_Y_VAR)))
{
{ R12 * rv3173 = NULL;
return rv3173; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3171))).f_WITHV == ((rt_int)1LL))))
{
{ R12 * rv3174 = NULL;
return rv3174; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_3171))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv3175 = NULL;
return rv3175; }
}
{
R24 * l_F_3176; memset(&l_F_3176, 0, sizeof l_F_3176);
l_F_3176 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_3171))).f_T), ((*(R17 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_3176 == NULL))
{
{ R12 * rv3177 = NULL;
return rv3177; }
}
if ((!(((*(R24 *)rt_nil_check(l_F_3176))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv3178 = NULL;
return rv3178; }
}
}
{ R12 * rv3179 = l_Y_3171;
return rv3179; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R9 p_TAGN, rt_int p_V) { RT_B_TICK(); 
R22 * l_N_3180; memset(&l_N_3180, 0, sizeof l_N_3180);
l_N_3180 = r_COPY_TYP(p_T);
R24 * l_F_3181; memset(&l_F_3181, 0, sizeof l_F_3181);
l_F_3181 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_3182; memset(&l_A_3182, 0, sizeof l_A_3182);
l_A_3182 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R25 * l_HEAD_3183; memset(&l_HEAD_3183, 0, sizeof l_HEAD_3183);
l_HEAD_3183 = NULL;
R25 * l_TAIL_3184; memset(&l_TAIL_3184, 0, sizeof l_TAIL_3184);
l_TAIL_3184 = NULL;
for (;;) {
if ((l_F_3181 == NULL)) goto L_end3185;
{
if (((!(((*(R24 *)rt_nil_check(l_F_3181))).f_KIND == ((rt_int)0LL))) && (!(l_A_3182 == NULL))))
{
{
R25 * l_B_3186; memset(&l_B_3186, 0, sizeof l_B_3186);
l_B_3186 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_B_3186)), (*(R25 *)rt_nil_check(l_A_3182)), 0);
((*(R25 *)rt_nil_check(l_B_3186))).f_NEXT = NULL;
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_3181))).f_NAME, p_TAGN))
{
((*(R25 *)rt_nil_check(l_B_3186))).f_ANYARG = 0;
S_R23(&((*(R25 *)rt_nil_check(l_B_3186))).f_MLO, r_SOME(p_V), 0);
S_R9(&((*(R25 *)rt_nil_check(l_B_3186))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_3184 == NULL))
{
l_HEAD_3183 = l_B_3186;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_3184))).f_NEXT = l_B_3186;
}
l_TAIL_3184 = l_B_3186;
}
l_A_3182 = ((*(R25 *)rt_nil_check(l_A_3182))).f_NEXT;
}
l_F_3181 = ((*(R24 *)rt_nil_check(l_F_3181))).f_NEXT;
}
RT_B_TICK();
} L_end3185: ;
((*(R22 *)rt_nil_check(l_N_3180))).f_ARGS = l_HEAD_3183;
{ R22 * rv3187 = l_N_3180;
return rv3187; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R17 * p_S) { RT_B_TICK(); 
R17 * l_ARM_3188; memset(&l_ARM_3188, 0, sizeof l_ARM_3188);
l_ARM_3188 = ((*(R17 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_3189; memset(&l_SAVED_3189, 0, sizeof l_SAVED_3189);
l_SAVED_3189 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_3188 == NULL)) goto L_end3190;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_ARM_3188))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3188))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3188))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_3189;
return;
}
l_ARM_3188 = ((*(R17 *)rt_nil_check(l_ARM_3188))).f_NEXT;
}
RT_B_TICK();
} L_end3190: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_3189;
}
}
static R22 * r_PATHS_TYPE(void) { RT_B_TICK(); 
R22 * l_T_3191; memset(&l_T_3191, 0, sizeof l_T_3191);
l_T_3191 = r_NEW_TYP(g_T_PATHS);
S_R9(&((*(R22 *)rt_nil_check(l_T_3191))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv3192 = l_T_3191;
return rv3192; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R17 * p_S) { RT_B_TICK(); 
R9 l_TD_3193; memset(&l_TD_3193, 0, sizeof l_TD_3193);
S_R9(&l_TD_3193, r_NEW_NAME(rt_str("td", 2)), 0);
R17 * l_P_3194; memset(&l_P_3194, 0, sizeof l_P_3194);
l_P_3194 = ((*(R17 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_3194 == NULL)) goto L_end3195;
{
{
R12 * l_Y_3196; memset(&l_Y_3196, 0, sizeof l_Y_3196);
l_Y_3196 = r_NEW_SYM(g_Y_PATH, ((*(R17 *)rt_nil_check(l_P_3194))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3196))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_3196))).f_DECL = l_P_3194;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_3196, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_3196))).f_INPUT = 1;
r_DEFINE(l_Y_3196, ((*(R17 *)rt_nil_check(l_P_3194))).f_LINE);
}
l_P_3194 = ((*(R17 *)rt_nil_check(l_P_3194))).f_NEXT;
}
RT_B_TICK();
} L_end3195: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_3193));
r_CODES(rt_str("rt_b_par_begin();", 17));
r_CODE(r_FMT2(rt_str("{ rt_frame @a; if (RT_TRY(@a)) {", 32), l_TD_3193, l_TD_3193));
l_P_3194 = ((*(R17 *)rt_nil_check(p_S))).f_A;
{
rt_int l_K_3197; memset(&l_K_3197, 0, sizeof l_K_3197);
l_K_3197 = ((rt_int)0LL);
for (;;) {
if ((l_P_3194 == NULL)) goto L_end3198;
{
l_K_3197 = rt_add(l_K_3197, ((rt_int)1LL));
r_ACTIVATE_PATH(l_P_3194, l_TD_3193, l_K_3197);
l_P_3194 = ((*(R17 *)rt_nil_check(l_P_3194))).f_NEXT;
}
RT_B_TICK();
} L_end3198: ;
}
r_CODE(r_FMT3(rt_str("RT_POP(@a); } else { RT_POP(@a); rt_b_par_abandon(&@);", 54), l_TD_3193, l_TD_3193, l_TD_3193));
r_CODES(rt_str("rt_raise(rt_xcur); } }", 22));
if (r_HAS_USER_ROUTINE(r_MKN(rt_str("PAR_BLOCK_", 10))))
{
{
R17 * l_C_3199; memset(&l_C_3199, 0, sizeof l_C_3199);
l_C_3199 = r_NEW_NODE(g_N_CALL, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
R17 * l_A_3200; memset(&l_A_3200, 0, sizeof l_A_3200);
l_A_3200 = r_NEW_NODE(g_N_APPLY, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_C_3199))).f_NAME, r_MKN(rt_str("PAR_BLOCK_", 10)), 0);
S_R9(&((*(R17 *)rt_nil_check(l_A_3200))).f_NAME, r_MKN(rt_str("$PATH_LIST", 10)), 0);
((*(R17 *)rt_nil_check(l_C_3199))).f_A = l_A_3200;
r_CODE(r_FMT1(rt_str("rt_b_par_dispatch_push(&@);", 27), l_TD_3193));
r_STMT(l_C_3199);
r_CODES(rt_str("rt_b_par_dispatch_pop();", 24));
}
}
else
{
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_3193));
}
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static R26 r_PATH_LIST(rt_int p_LINE) { RT_B_TICK(); 
R22 * l_PE_3201; memset(&l_PE_3201, 0, sizeof l_PE_3201);
l_PE_3201 = r_RESOLVE_USER_NAME(r_MK(rt_str("PATH_ENTRY", 10)), p_LINE);
R22 * l_R_3202; memset(&l_R_3202, 0, sizeof l_R_3202);
l_R_3202 = r_REAL_TYPE(l_PE_3201);
R22 * l_AT_3203; memset(&l_AT_3203, 0, sizeof l_AT_3203);
l_AT_3203 = r_ARRAY_OF(l_PE_3201, ((rt_int)1LL));
R9 l_C_3204; memset(&l_C_3204, 0, sizeof l_C_3204);
S_R9(&l_C_3204, r_CTYPE(l_AT_3203), 0);
R9 l_CODE__3205; memset(&l_CODE__3205, 0, sizeof l_CODE__3205);
if ((!(((*(R22 *)rt_nil_check(l_R_3202))).f_KIND == g_T_REC)))
{
r_FAIL(p_LINE, rt_str("PATH_ENTRY is the record type of PARALLEL_SUPPORT (D.7)", 55));
}
S_R9(&l_CODE__3205, r_FMT2(rt_str("({ @ a; rt_int n = rt_b_par_count(); a.lo[0] = 1; a.hi[0] = n; a.p = rt_b_array_alloc(n, sizeof *a.p); memset(a.p, 0, sizeof *a.p * (size_t)(n \? n : 1)); for (rt_int i = 0; i < n; i++) { a.p[i].@ = rt_b_bits_of_int(i + 1, 64);", 226), l_C_3204, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_R_3202, r_MKN(rt_str("PATH_ADDR", 9)))))).f_CNAME), 0);
S_R9(&l_CODE__3205, r_FMT3(rt_str("@ a.p[i].@ = rt_b_par_id(i); a.p[i].@ = rt_b_par_prio(i);", 57), l_CODE__3205, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_R_3202, r_MKN(rt_str("ACTIVATION_ID", 13)))))).f_CNAME, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_R_3202, r_MKN(rt_str("PRIORITY_LEVEL", 14)))))).f_CNAME), 0);
S_R9(&l_CODE__3205, r_FMT3(rt_str("@ a.p[i].@ = rt_b_par_connect(i, @); } a; })", 44), l_CODE__3205, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_R_3202, r_MKN(rt_str("CONNECT_NAME", 12)))))).f_CNAME, r_NUM(r_STATIC_SIZE_OR_LEN(((*(R24 *)rt_nil_check(r_FIND_FIELD(l_R_3202, r_MKN(rt_str("CONNECT_NAME", 12)))))).f_T))), 0);
{ R26 rv3206 = r_MKET(l_CODE__3205, l_AT_3203);
return rv3206; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_SIZE_OR_LEN(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_MLEN).f_OK)
{
{ rt_int rv3207 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_MLEN).f_V;
return rv3207; }
}
{ rt_int rv3208 = ((rt_int)32LL);
return rv3208; }
rt_raise(RT_X_INIT);
}
static R26 r_RUN_PATHS(R17 * p_E) { RT_B_TICK(); 
R26 l_V_3209; memset(&l_V_3209, 0, sizeof l_V_3209);
S_R26(&l_V_3209, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_3210; memset(&l_T_3210, 0, sizeof l_T_3210);
l_T_3210 = r_REAL_TYPE((l_V_3209).f_T);
R22 * l_R_3211; memset(&l_R_3211, 0, sizeof l_R_3211);
if (((!(((*(R22 *)rt_nil_check(l_T_3210))).f_KIND == g_T_ARR)) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("RUN_PATHS takes the ARRAY OF PATH_ENTRY its PAR_BLOCK_ was given (D.7)", 70));
}
l_R_3211 = r_REAL_TYPE(((*(R22 *)rt_nil_check(l_T_3210))).f_ELEM);
if ((!(((*(R22 *)rt_nil_check(l_R_3211))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("RUN_PATHS takes the ARRAY OF PATH_ENTRY its PAR_BLOCK_ was given (D.7)", 70));
}
{ R26 rv3212 = r_MKET(r_FMT4(rt_str("({ @ l = @; rt_int n = rt_b_extent(1, l.lo, l.hi); for (rt_int k = 0; k < n; k++) rt_b_par_select(rt_b_int_of_bits(l.p[k].@), l.p[k].@); rt_b_par_run(); })", 155), r_CTYPE(l_T_3210), (l_V_3209).f_C, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_R_3211, r_MKN(rt_str("PATH_ADDR", 9)))))).f_CNAME, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_R_3211, r_MKN(rt_str("PRIORITY_LEVEL", 14)))))).f_CNAME), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3212; }
rt_raise(RT_X_INIT);
}
static void r_ACTIVATE_PATH(R17 * p_P, R9 p_TD, rt_int p_K) { RT_B_TICK(); 
R9 l_FN_3213; memset(&l_FN_3213, 0, sizeof l_FN_3213);
S_R9(&l_FN_3213, r_NEW_NAME(rt_str("path_", 5)), 0);
R9 l_FT_3214; memset(&l_FT_3214, 0, sizeof l_FT_3214);
S_R9(&l_FT_3214, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_3215; memset(&l_Y_3215, 0, sizeof l_Y_3215);
l_Y_3215 = r_LOOKUP(((*(R17 *)rt_nil_check(p_P))).f_NAME);
R9 l_H_3216; memset(&l_H_3216, 0, sizeof l_H_3216);
S_R9(&l_H_3216, r_OBJ_ACCESS(l_Y_3215), 0);
R9 l_IT_3217; memset(&l_IT_3217, 0, sizeof l_IT_3217);
S_R9(&l_IT_3217, r_NEW_NAME(rt_str("pi", 2)), 0);
R9 l_PRIO_3218; memset(&l_PRIO_3218, 0, sizeof l_PRIO_3218);
S_R9(&l_PRIO_3218, r_MK(rt_str("0", 1)), 0);
R9 l_START_3219; memset(&l_START_3219, 0, sizeof l_START_3219);
R22 * l_LT_3220; memset(&l_LT_3220, 0, sizeof l_LT_3220);
l_LT_3220 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_3214, l_FT_3214));
if ((!(((*(R17 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R9(&l_PRIO_3218, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R17 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R17 * l_R_3221; memset(&l_R_3221, 0, sizeof l_R_3221);
l_R_3221 = ((*(R17 *)rt_nil_check(p_P))).f_A;
R26 l_LV_3222; memset(&l_LV_3222, 0, sizeof l_LV_3222);
S_R26(&l_LV_3222, r_EXPR(((*(R17 *)rt_nil_check(l_R_3221))).f_A, NULL), 0);
R9 l_LO_3223; memset(&l_LO_3223, 0, sizeof l_LO_3223);
S_R9(&l_LO_3223, (l_LV_3222).f_C, 0);
R9 l_HI_3224; memset(&l_HI_3224, 0, sizeof l_HI_3224);
S_R9(&l_HI_3224, (r_EXPR(((*(R17 *)rt_nil_check(l_R_3221))).f_B, (l_LV_3222).f_T)).f_C, 0);
R22 * l_RT_3225; memset(&l_RT_3225, 0, sizeof l_RT_3225);
l_RT_3225 = r_REAL_TYPE((l_LV_3222).f_T);
if ((((*(R22 *)rt_nil_check(l_RT_3225))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_RT_3225))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_str("a loop prefix over an UNORDERED type (4.6.1)", 44));
}
l_LT_3220 = ((*(R22 *)rt_nil_check(l_RT_3225))).f_BASE;
S_R9(&l_HI_3224, (r_EXPR(((*(R17 *)rt_nil_check(l_R_3221))).f_B, l_LT_3220)).f_C, 0);
}
else if (((!(((*(R22 *)rt_nil_check(l_RT_3225))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_RT_3225))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_str("the range of a loop prefix is integer or enumerated (4.6.1)", 59));
}
if (((((*(R17 *)rt_nil_check(l_R_3221))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_R_3221))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LO_3223, r_FMT1(rt_str("(@) + 1", 7), l_LO_3223), 0);
}
if ((((*(R17 *)rt_nil_check(l_R_3221))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HI_3224, r_FMT1(rt_str("(@) - 1", 7), l_HI_3224), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_3216, l_LO_3223, l_HI_3224));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_3217, l_H_3216, l_IT_3217, l_H_3216), l_IT_3217));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_3217));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_3214, r_UP_FRAME()));
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME), l_IT_3217));
}
if ((!(((*(R17 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_3226; memset(&l_V_3226, 0, sizeof l_V_3226);
r_OPEN_SCOPE();
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_3227; memset(&l_I_3227, 0, sizeof l_I_3227);
l_I_3227 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_3227))).f_T = l_LT_3220;
((*(R12 *)rt_nil_check(l_I_3227))).f_INPUT = 1;
S_R9(&((*(R12 *)rt_nil_check(l_I_3227))).f_ACCESS, l_IT_3217, 0);
((*(R12 *)rt_nil_check(l_I_3227))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_3227, ((*(R17 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_3226, r_EXPR(((*(R17 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3226).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
if ((!r_IMPLEMENTATION_SEMAPHORE(((*(R17 *)rt_nil_check(p_P))).f_D)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_b_cat(rt_str("CONNECT names an implementation-defined semaphore, of the machine's ", 68), rt_str("library segment (4.6.1)", 23)));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_3226).f_C));
}
}
S_R9(&l_START_3219, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_3216, l_IT_3217, l_FN_3213, p_TD), 0);
S_R9(&l_PRIO_3218, r_CAT(l_PRIO_3218, r_FMT4(rt_str("); rt_b_path_info(&@, @, @, @", 29), p_TD, r_NUM(p_K), l_IT_3217, r_CONNECT_NAME(p_P))), 0);
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT4(rt_str("@@, @); if (@ == ", 17), l_START_3219, p_TD, l_PRIO_3218, l_IT_3217));
r_CODE(r_FMT1(rt_str("@.hi) break; }", 14), l_H_3216));
}
else
{
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_3219, p_TD, l_PRIO_3218));
}
r_PATH_BODY(p_P, l_FN_3213, l_FT_3214, l_LT_3220);
}
static rt_int r_IMPLEMENTATION_SEMAPHORE(R17 * p_E) { RT_B_TICK(); 
R17 * l_R_3228; memset(&l_R_3228, 0, sizeof l_R_3228);
l_R_3228 = p_E;
for (;;) {
if (((((*(R17 *)rt_nil_check(l_R_3228))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_3228))).f_KIND == g_N_APPLY))) goto L_end3229;
{
if (((!(((*(R17 *)rt_nil_check(l_R_3228))).f_KIND == g_N_INDEX)) && (!(((*(R17 *)rt_nil_check(l_R_3228))).f_KIND == g_N_FIELD))))
{
{ rt_int rv3230 = 0;
return rv3230; }
}
l_R_3228 = ((*(R17 *)rt_nil_check(l_R_3228))).f_A;
}
RT_B_TICK();
} L_end3229: ;
{
R12 * l_Y_3231; memset(&l_Y_3231, 0, sizeof l_Y_3231);
l_Y_3231 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(l_R_3228))).f_NAME);
if ((l_Y_3231 == NULL))
{
{ rt_int rv3232 = 0;
return rv3232; }
}
if ((((*(R12 *)rt_nil_check(l_Y_3231))).f_HOME == NULL))
{
{ rt_int rv3233 = 0;
return rv3233; }
}
{ rt_int rv3234 = r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LIBSEGS, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3231))).f_HOME))).f_NAME);
return rv3234; }
}
rt_raise(RT_X_INIT);
}
static R9 r_CONNECT_NAME(R17 * p_P) { RT_B_TICK(); 
R17 * l_R_3235; memset(&l_R_3235, 0, sizeof l_R_3235);
l_R_3235 = ((*(R17 *)rt_nil_check(p_P))).f_D;
if ((l_R_3235 == NULL))
{
{ R9 rv3236 = r_MK(rt_str("\"\"", 2));
return rv3236; }
}
for (;;) {
if (((((*(R17 *)rt_nil_check(l_R_3235))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_3235))).f_KIND == g_N_APPLY))) goto L_end3237;
{
if (((!(((*(R17 *)rt_nil_check(l_R_3235))).f_KIND == g_N_INDEX)) && (!(((*(R17 *)rt_nil_check(l_R_3235))).f_KIND == g_N_FIELD))))
{
{ R9 rv3238 = r_MK(rt_str("\"\"", 2));
return rv3238; }
}
l_R_3235 = ((*(R17 *)rt_nil_check(l_R_3235))).f_A;
}
RT_B_TICK();
} L_end3237: ;
{ R9 rv3239 = r_CSTRING(((*(R17 *)rt_nil_check(l_R_3235))).f_NAME);
return rv3239; }
rt_raise(RT_X_INIT);
}
static R9 r_UP_FRAME(void) { RT_B_TICK(); 
if ((((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R9 rv3240 = r_MK(rt_str("NULL", 4));
return rv3240; }
}
{ R9 rv3241 = r_MK(rt_str("F", 1));
return rv3241; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R17 * p_P, R9 p_FN, R9 p_FT, R22 * p_LT) { RT_B_TICK(); 
R14 l_SAVED_CODE_3242; memset(&l_SAVED_CODE_3242, 0, sizeof l_SAVED_CODE_3242);
S_R14(&l_SAVED_CODE_3242, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R18 * l_SAVED_CTXS_3243; memset(&l_SAVED_CTXS_3243, 0, sizeof l_SAVED_CTXS_3243);
l_SAVED_CTXS_3243 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R19 * l_OUTER_3244; memset(&l_OUTER_3244, 0, sizeof l_OUTER_3244);
l_OUTER_3244 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_H_3245; memset(&l_H_3245, 0, sizeof l_H_3245);
l_H_3245 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_A;
R19 * l_CS_3246; memset(&l_CS_3246, 0, sizeof l_CS_3246);
l_CS_3246 = ((R19 *)rt_b_new(sizeof (R19)));
R9 l_UPT_3247; memset(&l_UPT_3247, 0, sizeof l_UPT_3247);
S_R9(&l_UPT_3247, r_MK(rt_str("void", 4)), 0);
if ((((*(R19 *)rt_nil_check(l_OUTER_3244))).f_LEVEL > ((rt_int)0LL)))
{
S_R9(&l_UPT_3247, ((*(R19 *)rt_nil_check(l_OUTER_3244))).f_FTYPE, 0);
}
S_R19(&(*(R19 *)rt_nil_check(l_CS_3246)), ({ R19 rc3248; memset(&rc3248, 0, sizeof rc3248);  rc3248.f_LEVEL = rt_add(((*(R19 *)rt_nil_check(l_OUTER_3244))).f_LEVEL, ((rt_int)1LL)); rc3248.f_R = NULL; rc3248.f_FRAMED = 1; S_R9(&rc3248.f_FTYPE, p_FT, 0); S_R14(&rc3248.f_FIELDS, ({ R14 rc3249; memset(&rc3249, 0, sizeof rc3249);  rc3249.f_HEAD = NULL; rc3249.f_TAIL = NULL; rc3249; }), 0); rc3248.f_UP = l_OUTER_3244; rc3248.f_IMPORTS = ((*(R17 *)rt_nil_check(l_H_3245))).f_B; rc3248.f_SIGNALS = ((*(R17 *)rt_nil_check(l_H_3245))).f_A; rc3248.f_RESULT = NULL; rc3248.f_IS_PATH = 1; S_R9(&rc3248.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3248; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_3247), &((*(R19 *)rt_nil_check(l_CS_3246))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_3246;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3250; memset(&rc3250, 0, sizeof rc3250);  rc3250.f_HEAD = NULL; rc3250.f_TAIL = NULL; rc3250; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R17 *)rt_nil_check(l_H_3245))).f_B, ((*(R17 *)rt_nil_check(l_H_3245))).f_A, ((*(R17 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_3251; memset(&l_I_3251, 0, sizeof l_I_3251);
l_I_3251 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_3251))).f_T = p_LT;
((*(R12 *)rt_nil_check(l_I_3251))).f_INPUT = 1;
S_R9(&((*(R12 *)rt_nil_check(l_I_3251))).f_FIELD, r_FMT1(rt_str("l_@", 3), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
S_R9(&((*(R12 *)rt_nil_check(l_I_3251))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3246))).f_FIELDS);
r_DEFINE(l_I_3251, ((*(R17 *)rt_nil_check(p_P))).f_LINE);
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
R17 * l_L_3252; memset(&l_L_3252, 0, sizeof l_L_3252);
l_L_3252 = ((*(R17 *)rt_nil_check(l_H_3245))).f_A;
R9 l_C_3253; memset(&l_C_3253, 0, sizeof l_C_3253);
S_R9(&l_C_3253, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3252 == NULL)) goto L_end3254;
{
S_R9(&l_C_3253, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_3253, r_EXC_NAME(((*(R17 *)rt_nil_check(l_L_3252))).f_NAME)), 0);
l_L_3252 = ((*(R17 *)rt_nil_check(l_L_3252))).f_NEXT;
}
RT_B_TICK();
} L_end3254: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_3253));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R19 *)rt_nil_check(l_CS_3246))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_3244;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3242, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_3243;
}
static R9 r_JOIN_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_3255; memset(&l_C_3255, 0, sizeof l_C_3255);
l_C_3255 = (p_B).f_HEAD;
R9 l_R_3256; memset(&l_R_3256, 0, sizeof l_R_3256);
S_R9(&l_R_3256, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_3255 == NULL)) goto L_end3257;
{
S_R9(&l_R_3256, r_CAT(l_R_3256, ((*(R15 *)rt_nil_check(l_C_3255))).f_T), 0);
l_C_3255 = ((*(R15 *)rt_nil_check(l_C_3255))).f_NEXT;
}
RT_B_TICK();
} L_end3257: ;
{ R9 rv3258 = l_R_3256;
return rv3258; }
rt_raise(RT_X_INIT);
}
static R9 r_PATH_REF(R17 * p_E) { RT_B_TICK(); 
R9 l_NAME_3259; memset(&l_NAME_3259, 0, sizeof l_NAME_3259);
S_R9(&l_NAME_3259, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
R9 l_SUB_3260; memset(&l_SUB_3260, 0, sizeof l_SUB_3260);
S_R9(&l_SUB_3260, r_MK(rt_str("0", 1)), 0);
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R17 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R9(&l_SUB_3260, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_3261; memset(&l_Y_3261, 0, sizeof l_Y_3261);
l_Y_3261 = r_LOOKUP(l_NAME_3259);
if ((l_Y_3261 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_3259);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3261))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_3259);
}
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3261))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R9 rv3262 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_3261), l_SUB_3260);
return rv3262; }
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
R9 l_NAME_3263; memset(&l_NAME_3263, 0, sizeof l_NAME_3263);
S_R9(&l_NAME_3263, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_3264; memset(&l_LINE_3264, 0, sizeof l_LINE_3264);
l_LINE_3264 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_3263, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_3265; memset(&l_V_3265, 0, sizeof l_V_3265);
S_R26(&l_V_3265, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3265).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_3264, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv3266 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_3265).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_3265).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3266; }
}
}
else if (r_TEQS(l_NAME_3263, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv3267 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3267; }
}
{ R26 rv3268 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3268; }
}
else if (r_TEQS(l_NAME_3263, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R17 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv3269 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv3269; }
}
{ R26 rv3270 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R17 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv3270; }
}
else if ((r_TEQS(l_NAME_3263, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_3263, rt_str("RELEASE", 7))))
{
if ((((!(((*(R17 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_3264, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_3263);
}
{
R26 l_V_3271; memset(&l_V_3271, 0, sizeof l_V_3271);
S_R26(&l_V_3271, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3271).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_3264, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_3271).f_LVAL))
{
r_FAIL(l_LINE_3264, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_3263, rt_str("REQUEST", 7)))
{
{ R26 rv3272 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_3271).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3272; }
}
{ R26 rv3273 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_3271).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3273; }
}
}
else if (r_TEQS(l_NAME_3263, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_3264);
{ R26 rv3274 = r_START_IO_CALL(p_E);
return rv3274; }
}
else if (r_TEQS(l_NAME_3263, rt_str("INTERRUPT_AFTER", 15)))
{
r_REQUIRE_MACHINE(l_LINE_3264);
if (((((((*(R17 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))) || (((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAIL(l_LINE_3264, rt_str("INTERRUPT_AFTER (MICROSECONDS # S)", 34));
}
{
R26 l_V_3275; memset(&l_V_3275, 0, sizeof l_V_3275);
S_R26(&l_V_3275, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, NULL), 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3275).f_T)))).f_KIND == g_T_SEM)) || (!(l_V_3275).f_LVAL)))
{
r_FAIL(l_LINE_3264, rt_str("INTERRUPT_AFTER (MICROSECONDS # S): S is a semaphore variable", 61));
}
{ R26 rv3276 = r_MKET(r_FMT2(rt_str("rt_b_interrupt_after(@, @)", 26), (l_V_3275).f_C, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3276; }
}
}
r_FAILT(l_LINE_3264, rt_str("unknown routine ", 16), l_NAME_3263);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R17 * p_E) { RT_B_TICK(); 
R27 * l_ARGS_3277; memset(&l_ARGS_3277, 0, sizeof l_ARGS_3277);
l_ARGS_3277 = r_CALL_ARGS(p_E);
R12 * l_Y_3278; memset(&l_Y_3278, 0, sizeof l_Y_3278);
l_Y_3278 = r_FIND_ROUTINE(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_ARGS_3277, ((*(R17 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_3279; memset(&l_R_3279, 0, sizeof l_R_3279);
if ((l_Y_3278 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_3279, r_CALL_SYM(l_Y_3278, l_ARGS_3277, ((*(R17 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv3280 = l_R_3279;
return rv3280; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R17 * p_IMPORTS, R17 * p_SIGNALS, R9 p_NAME) { RT_B_TICK(); 
R20 * l_I_3281; memset(&l_I_3281, 0, sizeof l_I_3281);
l_I_3281 = ((R20 *)rt_b_new(sizeof (R20)));
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R20(&(*(R20 *)rt_nil_check(l_I_3281)), ({ R20 rc3282; memset(&rc3282, 0, sizeof rc3282);  rc3282.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc3282.f_IMPORTS = p_IMPORTS; rc3282.f_SIGNALS = p_SIGNALS; S_R9(&rc3282.f_NAME, p_NAME, 0); rc3282.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc3282; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_3281;
}
static void r_LEAVE_ISCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R20 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R9 r_ROUTINE_CNAME(R9 p_NAME) { RT_B_TICK(); 
R9 l_BASE0_3283; memset(&l_BASE0_3283, 0, sizeof l_BASE0_3283);
S_R9(&l_BASE0_3283, r_FMT1(rt_str("r_@", 3), r_CID(p_NAME)), 0);
rstr l_S_3284; memset(&l_S_3284, 0, sizeof l_S_3284);
l_S_3284 = rt_b_str_new((l_BASE0_3283).f_LEN, 0);
rt_b_assign(&l_S_3284, r_STR(l_BASE0_3283, (l_BASE0_3283).f_LEN));
R9 l_BASE_3285; memset(&l_BASE_3285, 0, sizeof l_BASE_3285);
S_R9(&l_BASE_3285, l_BASE0_3283, 0);
R17 * l_N_3286; memset(&l_N_3286, 0, sizeof l_N_3286);
l_N_3286 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it3288_lo = ((rt_int)0LL), it3288_hi = rt_sub((l_BASE_3285).f_LEN, ((rt_int)1LL));
for (rt_int it3288 = it3288_lo; it3288 <= it3288_hi; it3288++) {
{
if (rt_b_eq(rt_b_slice(l_S_3284, it3288, it3288), rt_str("$", 1)))
{
S_R9(&l_BASE_3285, r_MK(rt_b_cat(rt_b_cat(rt_b_slice(l_S_3284, ((rt_int)0LL), rt_sub(it3288, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_3284, rt_add(it3288, ((rt_int)1LL)), rt_sub((l_BASE_3285).f_LEN, ((rt_int)1LL))))), 0);
}
}
RT_B_TICK();
if (it3288 == it3288_hi) break;
} } L_end3287: ;
for (;;) {
if ((l_N_3286 == NULL)) goto L_end3289;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_N_3286))).f_NAME, l_BASE_3285))
{
{ R9 rv3290 = r_FMT2(rt_str("@_@", 3), l_BASE_3285, r_NEW_NAME(rt_str("", 0)));
return rv3290; }
}
l_N_3286 = ((*(R17 *)rt_nil_check(l_N_3286))).f_NEXT;
}
RT_B_TICK();
} L_end3289: ;
l_N_3286 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_3286))).f_NAME, l_BASE_3285, 0);
((*(R17 *)rt_nil_check(l_N_3286))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_3286;
{ R9 rv3291 = l_BASE_3285;
return rv3291; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R17 * p_B) { RT_B_TICK(); 
if ((p_B == NULL))
{
{ rt_int rv3292 = 0;
return rv3292; }
}
if ((!(((*(R17 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv3293 = 1;
return rv3293; }
}
{ rt_int rv3294 = r_HAS_HANDLERS(((*(R17 *)rt_nil_check(p_B))).f_B);
return rv3294; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R17 * p_S0) { RT_B_TICK(); 
R17 * l_S_3295; memset(&l_S_3295, 0, sizeof l_S_3295);
l_S_3295 = p_S0;
for (;;) {
if ((l_S_3295 == NULL)) goto L_end3296;
{
if (((((*(R17 *)rt_nil_check(l_S_3295))).f_KIND == g_N_EXCEPT) || (((*(R17 *)rt_nil_check(l_S_3295))).f_KIND == g_N_PAR)))
{
{ rt_int rv3297 = 1;
return rv3297; }
}
if (((((*(R17 *)rt_nil_check(l_S_3295))).f_KIND == g_N_LABELED) || (((*(R17 *)rt_nil_check(l_S_3295))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R17 *)rt_nil_check(l_S_3295))).f_A) || r_HAS_HANDLERS(((*(R17 *)rt_nil_check(l_S_3295))).f_B)))
{
{ rt_int rv3298 = 1;
return rv3298; }
}
}
else if ((((*(R17 *)rt_nil_check(l_S_3295))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3295))).f_A))).f_B))
{
{ rt_int rv3299 = 1;
return rv3299; }
}
}
else if (((((*(R17 *)rt_nil_check(l_S_3295))).f_KIND == g_N_LOOP) || (((*(R17 *)rt_nil_check(l_S_3295))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3295))).f_B))).f_B))
{
{ rt_int rv3300 = 1;
return rv3300; }
}
}
else if (((((*(R17 *)rt_nil_check(l_S_3295))).f_KIND == g_N_IF) || (((*(R17 *)rt_nil_check(l_S_3295))).f_KIND == g_N_CASE)))
{
{
R17 * l_A_3301; memset(&l_A_3301, 0, sizeof l_A_3301);
l_A_3301 = ((*(R17 *)rt_nil_check(l_S_3295))).f_A;
if ((((*(R17 *)rt_nil_check(l_S_3295))).f_KIND == g_N_CASE))
{
l_A_3301 = ((*(R17 *)rt_nil_check(l_S_3295))).f_B;
if ((!(((*(R17 *)rt_nil_check(l_S_3295))).f_D == NULL)))
{
{ rt_int rv3302 = 1;
return rv3302; }
}
if ((!(((*(R17 *)rt_nil_check(l_S_3295))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3295))).f_C))).f_B))
{
{ rt_int rv3303 = 1;
return rv3303; }
}
}
}
else if ((!(((*(R17 *)rt_nil_check(l_S_3295))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3295))).f_B))).f_B))
{
{ rt_int rv3304 = 1;
return rv3304; }
}
}
for (;;) {
if ((l_A_3301 == NULL)) goto L_end3305;
{
if ((!(((*(R17 *)rt_nil_check(l_A_3301))).f_C == NULL)))
{
{ rt_int rv3306 = 1;
return rv3306; }
}
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_3301))).f_B))).f_B))
{
{ rt_int rv3307 = 1;
return rv3307; }
}
l_A_3301 = ((*(R17 *)rt_nil_check(l_A_3301))).f_NEXT;
}
RT_B_TICK();
} L_end3305: ;
}
}
l_S_3295 = ((*(R17 *)rt_nil_check(l_S_3295))).f_NEXT;
}
RT_B_TICK();
} L_end3296: ;
{ rt_int rv3308 = 0;
return rv3308; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R17 * p_R) { RT_B_TICK(); 
R12 * l_Y_3309; memset(&l_Y_3309, 0, sizeof l_Y_3309);
l_Y_3309 = r_NEW_SYM(g_Y_ROUTINE, ((*(R17 *)rt_nil_check(p_R))).f_NAME);
R9 l_RN_3310; memset(&l_RN_3310, 0, sizeof l_RN_3310);
S_R9(&l_RN_3310, ((*(R17 *)rt_nil_check(p_R))).f_NAME, 0);
rstr l_S_3311; memset(&l_S_3311, 0, sizeof l_S_3311);
l_S_3311 = rt_b_str_new((l_RN_3310).f_LEN, 0);
rt_b_assign(&l_S_3311, r_STR(l_RN_3310, (l_RN_3310).f_LEN));
((*(R12 *)rt_nil_check(l_Y_3309))).f_DECL = p_R;
S_R9(&((*(R12 *)rt_nil_check(l_Y_3309))).f_ACCESS, r_ROUTINE_CNAME(((*(R17 *)rt_nil_check(p_R))).f_NAME), 0);
if ((((((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)) && ((((*(R7 *)rt_nil_check(g_W))).f_SEPSEG).f_LEN > ((rt_int)0LL))) && (!(((*(R17 *)rt_nil_check(p_R))).f_FL == ((rt_int)1LL)))))
{
((*(R7 *)rt_nil_check(g_W))).f_SEPR = rt_add(((*(R7 *)rt_nil_check(g_W))).f_SEPR, ((rt_int)1LL));
S_R9(&((*(R12 *)rt_nil_check(l_Y_3309))).f_ACCESS, r_FMT3(rt_str("bs_@_r@_@", 9), r_CID(((*(R7 *)rt_nil_check(g_W))).f_SEPSEG), r_NUM(((*(R7 *)rt_nil_check(g_W))).f_SEPR), r_CID(((*(R17 *)rt_nil_check(p_R))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_Y_3309))).f_LINKAGE = ((rt_int)1LL);
if (((*(R7 *)rt_nil_check(g_W))).f_EXTSEG)
{
((*(R12 *)rt_nil_check(l_Y_3309))).f_LINKAGE = ((rt_int)2LL);
}
}
((*(R12 *)rt_nil_check(l_Y_3309))).f_FRAMED = r_NEEDS_FRAME(((*(R17 *)rt_nil_check(p_R))).f_C);
if ((((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3309))).f_FIELD, ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_3309, ((*(R17 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it3313_lo = ((rt_int)1LL), it3313_hi = rt_sub((((*(R17 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it3313 = it3313_lo; it3313 <= it3313_hi; it3313++) {
{
if (rt_b_eq(rt_b_slice(l_S_3311, it3313, it3313), rt_str("$", 1)))
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3309))).f_PREFIX, r_MKN(rt_b_slice(l_S_3311, ((rt_int)0LL), rt_sub(it3313, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_3314; memset(&l_SHORT_3314, 0, sizeof l_SHORT_3314);
l_SHORT_3314 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_3311, rt_add(it3313, ((rt_int)1LL)), rt_sub((((*(R17 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_3314))).f_ORIG = l_Y_3309;
S_R9(&((*(R12 *)rt_nil_check(l_SHORT_3314))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_3309))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_3314))).f_DECL = p_R;
r_DEFINE(l_SHORT_3314, ((*(R17 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end3312;
}
}
RT_B_TICK();
if (it3313 == it3313_hi) break;
} } L_end3312: ;
}
static void r_DECLARE_MEMBERS(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3315; memset(&l_R_3315, 0, sizeof l_R_3315);
l_R_3315 = p_RS;
for (;;) {
if ((l_R_3315 == NULL)) goto L_end3316;
{
if ((((*(R17 *)rt_nil_check(l_R_3315))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_3315);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_3315);
}
l_R_3315 = ((*(R17 *)rt_nil_check(l_R_3315))).f_NEXT;
}
RT_B_TICK();
} L_end3316: ;
}
static void r_ROUTINE_HEADERS(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3317; memset(&l_R_3317, 0, sizeof l_R_3317);
l_R_3317 = p_RS;
for (;;) {
if ((l_R_3317 == NULL)) goto L_end3318;
{
if ((((*(R17 *)rt_nil_check(l_R_3317))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3319; memset(&l_M_3319, 0, sizeof l_M_3319);
l_M_3319 = r_FIND_DECL(l_R_3317);
r_ENTER_MODULE(l_M_3319);
r_ROUTINE_HEADERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3317))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3319);
}
}
else
{
{
R12 * l_Y_3320; memset(&l_Y_3320, 0, sizeof l_Y_3320);
l_Y_3320 = r_FIND_DECL(l_R_3317);
r_ROUTINE_HEADER(l_Y_3320);
}
}
l_R_3317 = ((*(R17 *)rt_nil_check(l_R_3317))).f_NEXT;
}
RT_B_TICK();
} L_end3318: ;
}
static void r_DISTINCT_SIGNATURES(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3321; memset(&l_R_3321, 0, sizeof l_R_3321);
l_R_3321 = p_RS;
for (;;) {
if ((l_R_3321 == NULL)) goto L_end3322;
{
if ((((*(R17 *)rt_nil_check(l_R_3321))).f_KIND == g_N_ROUTINE))
{
{
R17 * l_Q_3323; memset(&l_Q_3323, 0, sizeof l_Q_3323);
l_Q_3323 = ((*(R17 *)rt_nil_check(l_R_3321))).f_NEXT;
for (;;) {
if ((l_Q_3323 == NULL)) goto L_end3324;
{
if (((((*(R17 *)rt_nil_check(l_Q_3323))).f_KIND == g_N_ROUTINE) && r_TEQ(((*(R17 *)rt_nil_check(l_Q_3323))).f_NAME, ((*(R17 *)rt_nil_check(l_R_3321))).f_NAME)))
{
{
R12 * l_A_3325; memset(&l_A_3325, 0, sizeof l_A_3325);
l_A_3325 = r_FIND_DECL(l_R_3321);
R12 * l_B_3326; memset(&l_B_3326, 0, sizeof l_B_3326);
l_B_3326 = r_FIND_DECL(l_Q_3323);
r_ROUTINE_HEADER(l_A_3325);
r_ROUTINE_HEADER(l_B_3326);
if (r_SAME_SIGNATURE(l_A_3325, l_B_3326))
{
r_FAILT(((*(R17 *)rt_nil_check(l_Q_3323))).f_LINE, rt_str("two routines of one scope with the same signature (4.1): ", 57), ((*(R17 *)rt_nil_check(l_Q_3323))).f_NAME);
}
}
}
l_Q_3323 = ((*(R17 *)rt_nil_check(l_Q_3323))).f_NEXT;
}
RT_B_TICK();
} L_end3324: ;
}
}
l_R_3321 = ((*(R17 *)rt_nil_check(l_R_3321))).f_NEXT;
}
RT_B_TICK();
} L_end3322: ;
}
static R12 * r_FIND_DECL(R17 * p_D) { RT_B_TICK(); 
R12 * l_Y_3327; memset(&l_Y_3327, 0, sizeof l_Y_3327);
l_Y_3327 = r_LOOKUP(((*(R17 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_3327 == NULL)) goto L_end3328;
{
if (((((*(R12 *)rt_nil_check(l_Y_3327))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_3327))).f_ORIG == NULL)))
{
{ R12 * rv3329 = l_Y_3327;
return rv3329; }
}
l_Y_3327 = r_LOOKUP_NEXT(l_Y_3327);
}
RT_B_TICK();
} L_end3328: ;
r_FAILT(((*(R17 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R17 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R17 * p_DECLS) { RT_B_TICK(); 
R17 * l_D_3330; memset(&l_D_3330, 0, sizeof l_D_3330);
l_D_3330 = p_DECLS;
for (;;) {
if ((l_D_3330 == NULL)) goto L_end3331;
{
if (((((*(R17 *)rt_nil_check(l_D_3330))).f_KIND == g_N_TYPE) && (((*(R17 *)rt_nil_check(l_D_3330))).f_A == NULL)))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_3330))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_3332; memset(&l_Y_3332, 0, sizeof l_Y_3332);
l_Y_3332 = r_FIND_DECL(l_D_3330);
R22 * l_T_3333; memset(&l_T_3333, 0, sizeof l_T_3333);
l_T_3333 = r_RESOLVE_USER(r_TYPE_REF(l_D_3330));
}
}
}
l_D_3330 = ((*(R17 *)rt_nil_check(l_D_3330))).f_NEXT;
}
RT_B_TICK();
} L_end3331: ;
}
static R17 * r_TYPE_REF(R17 * p_D) { RT_B_TICK(); 
R17 * l_TS_3334; memset(&l_TS_3334, 0, sizeof l_TS_3334);
l_TS_3334 = r_NEW_NODE(g_TS_NAME, ((*(R17 *)rt_nil_check(p_D))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_TS_3334))).f_NAME, ((*(R17 *)rt_nil_check(p_D))).f_NAME, 0);
{ R17 * rv3335 = l_TS_3334;
return rv3335; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R17 * p_M) { RT_B_TICK(); 
R12 * l_Y_3336; memset(&l_Y_3336, 0, sizeof l_Y_3336);
l_Y_3336 = r_NEW_SYM(g_Y_MODULE, ((*(R17 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_3337; memset(&l_SAVED_3337, 0, sizeof l_SAVED_3337);
l_SAVED_3337 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_3336))).f_DECL = p_M;
r_DEFINE(l_Y_3336, ((*(R17 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_3338; memset(&l_MARK_3338, 0, sizeof l_MARK_3338);
l_MARK_3338 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_3336;
r_DECLARE_TYPES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_3336))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_3338);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_3337;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_3336);
}
static void r_ENTER_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_Y_3339; memset(&l_Y_3339, 0, sizeof l_Y_3339);
l_Y_3339 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_3339 == NULL)) goto L_end3340;
{
{
R12 * l_NEXT_3341; memset(&l_NEXT_3341, 0, sizeof l_NEXT_3341);
l_NEXT_3341 = ((*(R12 *)rt_nil_check(l_Y_3339))).f_SNEXT;
r_DEFINE(l_Y_3339, ((rt_int)0LL));
l_Y_3339 = l_NEXT_3341;
}
}
RT_B_TICK();
} L_end3340: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_MARK_3342; memset(&l_MARK_3342, 0, sizeof l_MARK_3342);
l_MARK_3342 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_3342 == NULL)) goto L_end3343;
{
if ((((*(R12 *)rt_nil_check(l_MARK_3342))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end3343;
}
l_MARK_3342 = ((*(R12 *)rt_nil_check(l_MARK_3342))).f_SNEXT;
}
RT_B_TICK();
} L_end3343: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_3342);
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
{ rt_int rv3344 = 1;
return rv3344; }
}
}
{ rt_int rv3345 = 0;
return rv3345; }
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
R17 * l_D_3346; memset(&l_D_3346, 0, sizeof l_D_3346);
l_D_3346 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_3347; memset(&l_Y_3347, 0, sizeof l_Y_3347);
l_Y_3347 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3347 == NULL)) goto L_end3348;
{
if (r_EXPORTED_BY(l_D_3346, l_Y_3347))
{
((*(R12 *)rt_nil_check(l_Y_3347))).f_EXPORTED = 1;
{
R12 * l_A_3349; memset(&l_A_3349, 0, sizeof l_A_3349);
l_A_3349 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_3347))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_3347))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_3349)), (*(R12 *)rt_nil_check(l_Y_3347)), 0);
((*(R12 *)rt_nil_check(l_A_3349))).f_ORIG = r_ORIGINAL(l_Y_3347);
((*(R12 *)rt_nil_check(l_A_3349))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_3349, ((*(R17 *)rt_nil_check(l_D_3346))).f_LINE);
}
}
l_Y_3347 = ((*(R12 *)rt_nil_check(l_Y_3347))).f_SNEXT;
}
RT_B_TICK();
} L_end3348: ;
{
R17 * l_X_3350; memset(&l_X_3350, 0, sizeof l_X_3350);
l_X_3350 = ((*(R17 *)rt_nil_check(l_D_3346))).f_B;
for (;;) {
if ((l_X_3350 == NULL)) goto L_end3351;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R17 *)rt_nil_check(l_X_3350))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_X_3350))).f_LINE, rt_str("the module does not declare ", 28), ((*(R17 *)rt_nil_check(l_X_3350))).f_NAME);
}
r_CHECK_EXPORT_ITEM(p_M, l_X_3350);
l_X_3350 = ((*(R17 *)rt_nil_check(l_X_3350))).f_NEXT;
}
RT_B_TICK();
} L_end3351: ;
}
}
static void r_CHECK_EXPORT_ITEM(R12 * p_M, R17 * p_X) { RT_B_TICK(); 
R12 * l_Y_3352; memset(&l_Y_3352, 0, sizeof l_Y_3352);
l_Y_3352 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
rt_int l_IS_TYPE_3353; memset(&l_IS_TYPE_3353, 0, sizeof l_IS_TYPE_3353);
l_IS_TYPE_3353 = 0;
rt_int l_IS_ROUTINE_3354; memset(&l_IS_ROUTINE_3354, 0, sizeof l_IS_ROUTINE_3354);
l_IS_ROUTINE_3354 = 0;
for (;;) {
if ((l_Y_3352 == NULL)) goto L_end3355;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_3352))).f_NAME, ((*(R17 *)rt_nil_check(p_X))).f_NAME))
{
if ((((*(R12 *)rt_nil_check(l_Y_3352))).f_KIND == g_Y_TYPE))
{
l_IS_TYPE_3353 = 1;
}
else if ((((((*(R12 *)rt_nil_check(l_Y_3352))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_3352))).f_KIND == g_Y_MODULE)) || (((*(R12 *)rt_nil_check(l_Y_3352))).f_KIND == g_Y_ENUMLIT)))
{
l_IS_ROUTINE_3354 = 1;
}
}
else if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_3352))).f_PREFIX, ((*(R17 *)rt_nil_check(p_X))).f_NAME))
{
l_IS_ROUTINE_3354 = 1;
}
l_Y_3352 = ((*(R12 *)rt_nil_check(l_Y_3352))).f_SNEXT;
}
RT_B_TICK();
} L_end3355: ;
if (((!l_IS_TYPE_3353) && (!l_IS_ROUTINE_3354)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_X))).f_LINE, rt_str("only type and routine names are exported (4.4): ", 48), ((*(R17 *)rt_nil_check(p_X))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(p_X))).f_A == NULL)))
{
if ((!l_IS_TYPE_3353))
{
r_FAILT(((*(R17 *)rt_nil_check(p_X))).f_LINE, rt_str("only a type-name is followed by a WITH clause (4.4): ", 53), ((*(R17 *)rt_nil_check(p_X))).f_NAME);
}
{
R17 * l_OP_3356; memset(&l_OP_3356, 0, sizeof l_OP_3356);
l_OP_3356 = ((*(R17 *)rt_nil_check(p_X))).f_A;
for (;;) {
if ((l_OP_3356 == NULL)) goto L_end3357;
{
{
rt_int l_FOUND_3358; memset(&l_FOUND_3358, 0, sizeof l_FOUND_3358);
l_FOUND_3358 = 0;
l_Y_3352 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3352 == NULL)) goto L_end3359;
{
if (((((*(R12 *)rt_nil_check(l_Y_3352))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_3352))).f_PREFIX, ((*(R17 *)rt_nil_check(p_X))).f_NAME)))
{
if (r_TEQ(r_BASE_NAME(r_ORIGINAL(l_Y_3352)), ((*(R17 *)rt_nil_check(l_OP_3356))).f_NAME))
{
l_FOUND_3358 = 1;
}
}
l_Y_3352 = ((*(R12 *)rt_nil_check(l_Y_3352))).f_SNEXT;
}
RT_B_TICK();
} L_end3359: ;
if ((!l_FOUND_3358))
{
r_FAILT(((*(R17 *)rt_nil_check(l_OP_3356))).f_LINE, rt_str("a WITH clause lists operations of the type (4.4): ", 50), ((*(R17 *)rt_nil_check(l_OP_3356))).f_NAME);
}
}
l_OP_3356 = ((*(R17 *)rt_nil_check(l_OP_3356))).f_NEXT;
}
RT_B_TICK();
} L_end3357: ;
}
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_3360; memset(&l_Y_3360, 0, sizeof l_Y_3360);
l_Y_3360 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3360 == NULL)) goto L_end3361;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_3360))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_3360))).f_PREFIX, p_NAME)))
{
{ rt_int rv3362 = 1;
return rv3362; }
}
l_Y_3360 = ((*(R12 *)rt_nil_check(l_Y_3360))).f_SNEXT;
}
RT_B_TICK();
} L_end3361: ;
{ rt_int rv3363 = 0;
return rv3363; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R17 * p_D, R12 * p_Y) { RT_B_TICK(); 
R17 * l_X_3364; memset(&l_X_3364, 0, sizeof l_X_3364);
l_X_3364 = ((*(R17 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv3365 = 0;
return rv3365; }
}
if ((((*(R17 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv3366 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv3366; }
}
for (;;) {
if ((l_X_3364 == NULL)) goto L_end3367;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_X_3364))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3368 = 1;
return rv3368; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R17 *)rt_nil_check(l_X_3364))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R17 *)rt_nil_check(l_X_3364))).f_A == NULL))
{
{ rt_int rv3369 = 1;
return rv3369; }
}
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_X_3364))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv3370 = 1;
return rv3370; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_3371; memset(&l_T_3371, 0, sizeof l_T_3371);
l_T_3371 = r_ORIG_LOOKUP_MEMBER(((*(R17 *)rt_nil_check(l_X_3364))).f_NAME, p_Y);
if ((!(l_T_3371 == NULL)))
{
{ rt_int rv3372 = 1;
return rv3372; }
}
}
}
l_X_3364 = ((*(R17 *)rt_nil_check(l_X_3364))).f_NEXT;
}
RT_B_TICK();
} L_end3367: ;
{ rt_int rv3373 = 0;
return rv3373; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R9 p_NAME, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3374; memset(&l_M_3374, 0, sizeof l_M_3374);
l_M_3374 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_3375; memset(&l_Z_3375, 0, sizeof l_Z_3375);
if ((l_M_3374 == NULL))
{
{ R12 * rv3376 = NULL;
return rv3376; }
}
l_Z_3375 = ((*(R12 *)rt_nil_check(l_M_3374))).f_MEMBERS;
for (;;) {
if ((l_Z_3375 == NULL)) goto L_end3377;
{
if (((((*(R12 *)rt_nil_check(l_Z_3375))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_3375))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_3375))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_3375))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_3375))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv3378 = l_Z_3375;
return rv3378; }
}
}
}
}
l_Z_3375 = ((*(R12 *)rt_nil_check(l_Z_3375))).f_SNEXT;
}
RT_B_TICK();
} L_end3377: ;
{ R12 * rv3379 = NULL;
return rv3379; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3380; memset(&l_R_3380, 0, sizeof l_R_3380);
l_R_3380 = p_RS;
for (;;) {
if ((l_R_3380 == NULL)) goto L_end3381;
{
if ((((*(R17 *)rt_nil_check(l_R_3380))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3382; memset(&l_M_3382, 0, sizeof l_M_3382);
l_M_3382 = r_FIND_DECL(l_R_3380);
R17 * l_D_3383; memset(&l_D_3383, 0, sizeof l_D_3383);
l_D_3383 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3380))).f_C))).f_A;
r_ENTER_MODULE(l_M_3382);
for (;;) {
if ((l_D_3383 == NULL)) goto L_end3384;
{
if (((((*(R17 *)rt_nil_check(l_D_3383))).f_KIND == g_N_VAR) || (((*(R17 *)rt_nil_check(l_D_3383))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3383);
}
l_D_3383 = ((*(R17 *)rt_nil_check(l_D_3383))).f_NEXT;
}
RT_B_TICK();
} L_end3384: ;
r_MODULE_DATA(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3380))).f_C))).f_C);
r_DISTINCT_SIGNATURES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3380))).f_C))).f_C);
r_ROUTINE_USES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3380))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3382);
}
}
l_R_3380 = ((*(R17 *)rt_nil_check(l_R_3380))).f_NEXT;
}
RT_B_TICK();
} L_end3381: ;
}
static void r_ROUTINE_BODIES(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3385; memset(&l_R_3385, 0, sizeof l_R_3385);
l_R_3385 = p_RS;
for (;;) {
if ((l_R_3385 == NULL)) goto L_end3386;
{
if ((((*(R17 *)rt_nil_check(l_R_3385))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3387; memset(&l_M_3387, 0, sizeof l_M_3387);
l_M_3387 = r_FIND_DECL(l_R_3385);
r_ENTER_MODULE(l_M_3387);
r_ROUTINE_BODIES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3385))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3387);
}
}
else
{
{
R12 * l_Y_3388; memset(&l_Y_3388, 0, sizeof l_Y_3388);
l_Y_3388 = r_FIND_DECL(l_R_3385);
if ((((*(R12 *)rt_nil_check(l_Y_3388))).f_LINKAGE == ((rt_int)2LL)))
{
}
else if (((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3388))).f_DECL))).f_FL == ((rt_int)1LL)) && (!((*(R12 *)rt_nil_check(l_Y_3388))).f_GENERIC)))
{
}
else if ((!((*(R12 *)rt_nil_check(l_Y_3388))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_3388);
}
}
}
l_R_3385 = ((*(R17 *)rt_nil_check(l_R_3385))).f_NEXT;
}
RT_B_TICK();
} L_end3386: ;
}
static void r_PENDING_BODIES(void) { RT_B_TICK(); 
rt_int l_LEVEL_3389; memset(&l_LEVEL_3389, 0, sizeof l_LEVEL_3389);
l_LEVEL_3389 = r_CUR_LEVEL();
rt_int l_MORE_3390; memset(&l_MORE_3390, 0, sizeof l_MORE_3390);
l_MORE_3390 = 1;
for (;;) {
if ((!l_MORE_3390)) goto L_end3391;
{
l_MORE_3390 = 0;
{
R12 * l_P_3392; memset(&l_P_3392, 0, sizeof l_P_3392);
l_P_3392 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_3393; memset(&l_PREV_3393, 0, sizeof l_PREV_3393);
l_PREV_3393 = NULL;
for (;;) {
if ((l_P_3392 == NULL)) goto L_end3394;
{
if ((((*(R12 *)rt_nil_check(l_P_3392))).f_LEVEL == l_LEVEL_3389))
{
if ((l_PREV_3393 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_3392))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_3393))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_3392))).f_MEMBERS;
}
{
R12 * l_SAVED_SEG_3395; memset(&l_SAVED_SEG_3395, 0, sizeof l_SAVED_SEG_3395);
l_SAVED_SEG_3395 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R12 * l_HOME_3396; memset(&l_HOME_3396, 0, sizeof l_HOME_3396);
l_HOME_3396 = r_ENTER_HOME(l_P_3392);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(l_P_3392))).f_HOME;
r_ENTER_MODULE_OF(l_P_3392);
r_ROUTINE_BODY(l_P_3392);
r_LEAVE_MODULE_OF(l_P_3392);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_3395;
r_LEAVE_HOME(l_P_3392, l_HOME_3396);
}
l_MORE_3390 = 1;
goto L_end3394;
}
l_PREV_3393 = l_P_3392;
l_P_3392 = ((*(R12 *)rt_nil_check(l_P_3392))).f_MEMBERS;
}
RT_B_TICK();
} L_end3394: ;
}
}
RT_B_TICK();
} L_end3391: ;
}
static void r_CLOSED_BODY(R17 * p_B) { RT_B_TICK(); 
R17 * l_D_3397; memset(&l_D_3397, 0, sizeof l_D_3397);
l_D_3397 = ((*(R17 *)rt_nil_check(p_B))).f_A;
R17 * l_S_3398; memset(&l_S_3398, 0, sizeof l_S_3398);
l_S_3398 = ((*(R17 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R17 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R17 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R17 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_3397 == NULL)) goto L_end3399;
{
if (((((*(R17 *)rt_nil_check(l_D_3397))).f_KIND == g_N_VAR) || (((*(R17 *)rt_nil_check(l_D_3397))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3397);
}
l_D_3397 = ((*(R17 *)rt_nil_check(l_D_3397))).f_NEXT;
}
RT_B_TICK();
} L_end3399: ;
r_MODULE_DATA(((*(R17 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R17 *)rt_nil_check(p_B))).f_C);
r_DISTINCT_SIGNATURES(((*(R17 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R17 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R17 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_3398 == NULL)) goto L_end3400;
{
r_STMT(l_S_3398);
l_S_3398 = ((*(R17 *)rt_nil_check(l_S_3398))).f_NEXT;
}
RT_B_TICK();
} L_end3400: ;
r_ROUTINE_BODIES(((*(R17 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { RT_B_TICK(); 
R17 * l_R_3401; memset(&l_R_3401, 0, sizeof l_R_3401);
l_R_3401 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_3402; memset(&l_SAVED_CODE_3402, 0, sizeof l_SAVED_CODE_3402);
S_R14(&l_SAVED_CODE_3402, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R18 * l_SAVED_CTXS_3403; memset(&l_SAVED_CTXS_3403, 0, sizeof l_SAVED_CTXS_3403);
l_SAVED_CTXS_3403 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R21 * l_SAVED_BINDS_3404; memset(&l_SAVED_BINDS_3404, 0, sizeof l_SAVED_BINDS_3404);
l_SAVED_BINDS_3404 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R19 * l_OUTER_3405; memset(&l_OUTER_3405, 0, sizeof l_OUTER_3405);
l_OUTER_3405 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R19 * l_CS_3406; memset(&l_CS_3406, 0, sizeof l_CS_3406);
l_CS_3406 = ((R19 *)rt_b_new(sizeof (R19)));
R9 l_PROLOGUE_3407; memset(&l_PROLOGUE_3407, 0, sizeof l_PROLOGUE_3407);
S_R9(&l_PROLOGUE_3407, r_MK(rt_str("", 0)), 0);
S_R19(&(*(R19 *)rt_nil_check(l_CS_3406)), ({ R19 rc3408; memset(&rc3408, 0, sizeof rc3408);  rc3408.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc3408.f_R = p_Y; rc3408.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R9(&rc3408.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc3408.f_FIELDS, ({ R14 rc3409; memset(&rc3409, 0, sizeof rc3409);  rc3409.f_HEAD = NULL; rc3409.f_TAIL = NULL; rc3409; }), 0); rc3408.f_UP = l_OUTER_3405; rc3408.f_IMPORTS = ((*(R17 *)rt_nil_check(l_R_3401))).f_E; rc3408.f_SIGNALS = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3401))).f_D))).f_A; rc3408.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc3408.f_IS_PATH = 0; S_R9(&rc3408.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3408; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R19 *)rt_nil_check(l_CS_3406))).f_FTYPE, ((*(R19 *)rt_nil_check(l_CS_3406))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R19 *)rt_nil_check(l_CS_3406))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R19 *)rt_nil_check(l_CS_3406))).f_FIELDS);
}
S_R9(&l_PROLOGUE_3407, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R19 *)rt_nil_check(l_CS_3406))).f_FTYPE, ((*(R19 *)rt_nil_check(l_CS_3406))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_PROLOGUE_3407, r_CATS(l_PROLOGUE_3407, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_3406;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3410; memset(&rc3410, 0, sizeof rc3410);  rc3410.f_HEAD = NULL; rc3410.f_TAIL = NULL; rc3410; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R17 *)rt_nil_check(l_R_3401))).f_E, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3401))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R17 *)rt_nil_check(l_R_3401))).f_LINE);
{
R28 * l_P_3411; memset(&l_P_3411, 0, sizeof l_P_3411);
l_P_3411 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_3411 == NULL)) goto L_end3412;
{
if ((!(((*(R28 *)rt_nil_check(l_P_3411))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_3411))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_3413; memset(&l_V_3413, 0, sizeof l_V_3413);
l_V_3413 = r_NEW_SYM(g_Y_VAR, ((*(R28 *)rt_nil_check(l_P_3411))).f_NAME);
R21 * l_MB_3414; memset(&l_MB_3414, 0, sizeof l_MB_3414);
l_MB_3414 = r_FIND_BIND(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, r_QMKN(rt_str("=", 1), ((*(R28 *)rt_nil_check(l_P_3411))).f_NAME));
((*(R12 *)rt_nil_check(l_V_3413))).f_T = ((*(R28 *)rt_nil_check(l_P_3411))).f_T;
((*(R12 *)rt_nil_check(l_V_3413))).f_INPUT = (((*(R28 *)rt_nil_check(l_P_3411))).f_MODE == g_M_IN);
if ((!(l_MB_3414 == NULL)))
{
((*(R12 *)rt_nil_check(l_V_3413))).f_HASMV = ((*(R21 *)rt_nil_check(l_MB_3414))).f_HASMV;
((*(R12 *)rt_nil_check(l_V_3413))).f_MV = ((*(R21 *)rt_nil_check(l_MB_3414))).f_MV;
}
((*(R12 *)rt_nil_check(l_V_3413))).f_BYREF = (!(((*(R28 *)rt_nil_check(l_P_3411))).f_MODE == g_M_IN));
S_R9(&((*(R12 *)rt_nil_check(l_V_3413))).f_FIELD, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_3411))).f_NAME)), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_3413))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R28 *)rt_nil_check(l_P_3411))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3411))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3406))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3413))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), r_CID(((*(R28 *)rt_nil_check(l_P_3411))).f_NAME)), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_3411))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3411))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3406))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3413))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_3411))).f_NAME)), 0);
}
S_R9(&l_PROLOGUE_3407, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_3407, r_CID(((*(R28 *)rt_nil_check(l_P_3411))).f_NAME), r_CID(((*(R28 *)rt_nil_check(l_P_3411))).f_NAME)), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_3413))).f_BYREF)
{
S_R9(&((*(R12 *)rt_nil_check(l_V_3413))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), r_CID(((*(R28 *)rt_nil_check(l_P_3411))).f_NAME)), 0);
}
else
{
S_R9(&((*(R12 *)rt_nil_check(l_V_3413))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_3411))).f_NAME)), 0);
}
if ((((*(R28 *)rt_nil_check(l_P_3411))).f_MODE == g_M_OUT))
{
{
R9 l_ARGA_3415; memset(&l_ARGA_3415, 0, sizeof l_ARGA_3415);
S_R9(&l_ARGA_3415, ((*(R12 *)rt_nil_check(l_V_3413))).f_ACCESS, 0);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_3411))).f_T, l_ARGA_3415, ((*(R17 *)rt_nil_check(l_R_3401))).f_LINE, 1);
((*(R12 *)rt_nil_check(l_V_3413))).f_BYREF = 0;
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ o_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_3411))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3411))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3406))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3413))).f_ACCESS, r_FMT1(rt_str("F->o_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_3411))).f_NAME)), 0);
}
else
{
S_R9(&l_PROLOGUE_3407, r_FMT3(rt_str("@ @ o_@;", 8), l_PROLOGUE_3407, r_CTYPE(((*(R28 *)rt_nil_check(l_P_3411))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3411))).f_NAME)), 0);
S_R9(&((*(R12 *)rt_nil_check(l_V_3413))).f_ACCESS, r_FMT1(rt_str("o_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_3411))).f_NAME)), 0);
}
S_R9(&l_PROLOGUE_3407, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_3407, ((*(R12 *)rt_nil_check(l_V_3413))).f_ACCESS, l_ARGA_3415), 0);
if (r_NEEDS_INIT(((*(R28 *)rt_nil_check(l_P_3411))).f_T))
{
S_R9(&l_PROLOGUE_3407, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_3407, ((*(R12 *)rt_nil_check(l_V_3413))).f_ACCESS, r_COPY_OF(((*(R28 *)rt_nil_check(l_P_3411))).f_T, l_ARGA_3415)), 0);
}
S_R9(&((*(R19 *)rt_nil_check(l_CS_3406))).f_COPYOUT, r_CAT(((*(R19 *)rt_nil_check(l_CS_3406))).f_COPYOUT, r_ASSIGN_CODE(((*(R28 *)rt_nil_check(l_P_3411))).f_T, l_ARGA_3415, ((*(R12 *)rt_nil_check(l_V_3413))).f_ACCESS)), 0);
r_DEFINE(l_V_3413, ((*(R17 *)rt_nil_check(l_R_3401))).f_LINE);
}
}
else
{
r_DEFINE(l_V_3413, ((*(R17 *)rt_nil_check(l_R_3401))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_3411))).f_T, ((*(R12 *)rt_nil_check(l_V_3413))).f_ACCESS, ((*(R17 *)rt_nil_check(l_R_3401))).f_LINE, 1);
}
}
}
}
l_P_3411 = ((*(R28 *)rt_nil_check(l_P_3411))).f_NEXT;
}
RT_B_TICK();
} L_end3412: ;
}
if ((((*(R17 *)rt_nil_check(l_R_3401))).f_FL >= ((rt_int)2LL)))
{
{
R17 * l_N_3416; memset(&l_N_3416, 0, sizeof l_N_3416);
l_N_3416 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3401))).f_D))).f_C;
R14 l_SAVED_CODE_3417; memset(&l_SAVED_CODE_3417, 0, sizeof l_SAVED_CODE_3417);
S_R14(&l_SAVED_CODE_3417, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_3418; memset(&l_V_3418, 0, sizeof l_V_3418);
S_R26(&l_V_3418, r_EXPR(l_N_3416, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
R23 l_M_3419; memset(&l_M_3419, 0, sizeof l_M_3419);
S_R23(&l_M_3419, r_MANIFEST(l_N_3416), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3417, 0);
if ((((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3418).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3418).f_T)))).f_SCALE == ((rt_int)0LL)))) || (!(l_M_3419).f_OK)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_N_3416))).f_LINE, rt_str("the stack-size is a manifest integer expression (4.8.2 [4-111])", 63));
}
if (((l_M_3419).f_V < ((rt_int)0LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_N_3416))).f_LINE, rt_str("the stack-size must be greater than or equal to zero (4.8.2)", 60));
}
}
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R17 *)rt_nil_check(l_R_3401))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R17 *)rt_nil_check(l_R_3401))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R19 *)rt_nil_check(l_CS_3406))).f_FTYPE, r_JOIN_BUF(((*(R19 *)rt_nil_check(l_CS_3406))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { RT_B_TICK(); @", 18), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_3407));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
else if (((((*(R19 *)rt_nil_check(l_CS_3406))).f_COPYOUT).f_LEN > ((rt_int)0LL)))
{
r_EMIT(g_O_FUNCS, ((*(R19 *)rt_nil_check(l_CS_3406))).f_COPYOUT);
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_3405;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3402, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_3403;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_3404;
}
static void r_BIND_INSTANCE(R21 * p_BS, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_B_3420; memset(&l_B_3420, 0, sizeof l_B_3420);
l_B_3420 = p_BS;
for (;;) {
if ((l_B_3420 == NULL)) goto L_end3421;
{
if ((!(((*(R21 *)rt_nil_check(l_B_3420))).f_T == NULL)))
{
{
R12 * l_Y_3422; memset(&l_Y_3422, 0, sizeof l_Y_3422);
l_Y_3422 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_B_3420))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3422))).f_T = ((*(R21 *)rt_nil_check(l_B_3420))).f_T;
r_DEFINE(l_Y_3422, p_LINE);
}
}
else if (((*(R21 *)rt_nil_check(l_B_3420))).f_HASMV)
{
{
R12 * l_Y_3423; memset(&l_Y_3423, 0, sizeof l_Y_3423);
l_Y_3423 = r_NEW_SYM(g_Y_GEN, ((*(R21 *)rt_nil_check(l_B_3420))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3423))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_3423))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_3423))).f_MV = ((*(R21 *)rt_nil_check(l_B_3420))).f_MV;
S_R9(&((*(R12 *)rt_nil_check(l_Y_3423))).f_ACCESS, ((*(R21 *)rt_nil_check(l_B_3420))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_3423))).f_INPUT = 1;
r_DEFINE(l_Y_3423, p_LINE);
}
}
l_B_3420 = ((*(R21 *)rt_nil_check(l_B_3420))).f_NEXT;
}
RT_B_TICK();
} L_end3421: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { RT_B_TICK(); 
R15 * l_C_3424; memset(&l_C_3424, 0, sizeof l_C_3424);
l_C_3424 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_3424 == NULL)) goto L_end3425;
{
r_APPEND(C_R9(((*(R15 *)rt_nil_check(l_C_3424))).f_T), &(*p_DST));
l_C_3424 = ((*(R15 *)rt_nil_check(l_C_3424))).f_NEXT;
}
RT_B_TICK();
} L_end3425: ;
}
static rt_int r_USES_SEGMENT(R17 * p_S, rstr p_NAME) { RT_B_TICK(); 
R17 * l_U_3426; memset(&l_U_3426, 0, sizeof l_U_3426);
l_U_3426 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3426 == NULL)) goto L_end3427;
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_U_3426))).f_NAME, p_NAME))
{
{ rt_int rv3428 = 1;
return rv3428; }
}
l_U_3426 = ((*(R17 *)rt_nil_check(l_U_3426))).f_NEXT;
}
RT_B_TICK();
} L_end3427: ;
{ rt_int rv3429 = 0;
return rv3429; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R17 * p_S, R17 * p_SEGS) { RT_B_TICK(); 
R17 * l_U_3430; memset(&l_U_3430, 0, sizeof l_U_3430);
l_U_3430 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3430 == NULL)) goto L_end3431;
{
{
R17 * l_T_3432; memset(&l_T_3432, 0, sizeof l_T_3432);
l_T_3432 = p_SEGS;
for (;;) {
if ((l_T_3432 == NULL)) goto L_end3433;
{
if ((((!(l_T_3432 == p_S)) && (((*(R17 *)rt_nil_check(l_T_3432))).f_D == NULL)) && r_TEQ(((*(R17 *)rt_nil_check(l_T_3432))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3430))).f_NAME)))
{
{ rt_int rv3434 = 0;
return rv3434; }
}
l_T_3432 = ((*(R17 *)rt_nil_check(l_T_3432))).f_NEXT;
}
RT_B_TICK();
} L_end3433: ;
}
l_U_3430 = ((*(R17 *)rt_nil_check(l_U_3430))).f_NEXT;
}
RT_B_TICK();
} L_end3431: ;
{ rt_int rv3435 = 1;
return rv3435; }
rt_raise(RT_X_INIT);
}
static R9 r_MISSING_SEGMENT(R17 * p_SEGS) { RT_B_TICK(); 
R17 * l_S_3436; memset(&l_S_3436, 0, sizeof l_S_3436);
l_S_3436 = p_SEGS;
for (;;) {
if ((l_S_3436 == NULL)) goto L_end3437;
{
{
R17 * l_U_3438; memset(&l_U_3438, 0, sizeof l_U_3438);
l_U_3438 = ((*(R17 *)rt_nil_check(l_S_3436))).f_A;
for (;;) {
if ((l_U_3438 == NULL)) goto L_end3439;
{
if ((!r_TEQS(((*(R17 *)rt_nil_check(l_U_3438))).f_NAME, rt_str("TERMINAL", 8))))
{
{
R17 * l_T_3440; memset(&l_T_3440, 0, sizeof l_T_3440);
l_T_3440 = p_SEGS;
rt_int l_FOUND_3441; memset(&l_FOUND_3441, 0, sizeof l_FOUND_3441);
l_FOUND_3441 = 0;
for (;;) {
if ((l_T_3440 == NULL)) goto L_end3442;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_T_3440))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3438))).f_NAME))
{
l_FOUND_3441 = 1;
}
l_T_3440 = ((*(R17 *)rt_nil_check(l_T_3440))).f_NEXT;
}
RT_B_TICK();
} L_end3442: ;
if ((!l_FOUND_3441))
{
{ R9 rv3443 = ((*(R17 *)rt_nil_check(l_U_3438))).f_NAME;
return rv3443; }
}
}
}
l_U_3438 = ((*(R17 *)rt_nil_check(l_U_3438))).f_NEXT;
}
RT_B_TICK();
} L_end3439: ;
}
l_S_3436 = ((*(R17 *)rt_nil_check(l_S_3436))).f_NEXT;
}
RT_B_TICK();
} L_end3437: ;
{ R9 rv3444 = r_NO_TEXT();
return rv3444; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R17 * p_SEGS) { RT_B_TICK(); 
R17 * l_S_3445; memset(&l_S_3445, 0, sizeof l_S_3445);
l_S_3445 = p_SEGS;
rt_int l_MAINS_3446; memset(&l_MAINS_3446, 0, sizeof l_MAINS_3446);
l_MAINS_3446 = ((rt_int)0LL);
R19 * l_ROOT_3447; memset(&l_ROOT_3447, 0, sizeof l_ROOT_3447);
l_ROOT_3447 = ((R19 *)rt_b_new(sizeof (R19)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R19(&(*(R19 *)rt_nil_check(l_ROOT_3447)), ({ R19 rc3448; memset(&rc3448, 0, sizeof rc3448);  rc3448.f_LEVEL = ((rt_int)0LL); rc3448.f_R = NULL; rc3448.f_FRAMED = 0; S_R9(&rc3448.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc3448.f_FIELDS, ({ R14 rc3449; memset(&rc3449, 0, sizeof rc3449);  rc3449.f_HEAD = NULL; rc3449.f_TAIL = NULL; rc3449; }), 0); rc3448.f_UP = NULL; rc3448.f_IMPORTS = NULL; rc3448.f_SIGNALS = NULL; rc3448.f_RESULT = NULL; rc3448.f_IS_PATH = 0; S_R9(&rc3448.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3448; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_3447;
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
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3450; memset(&rc3450, 0, sizeof rc3450);  rc3450.f_HEAD = NULL; rc3450.f_TAIL = NULL; rc3450; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_3445 = p_SEGS;
for (;;) {
if ((l_S_3445 == NULL)) goto L_end3452;
{
if ((((*(R17 *)rt_nil_check(l_S_3445))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_3445, p_SEGS))
{
goto L_end3452;
}
}
l_S_3445 = ((*(R17 *)rt_nil_check(l_S_3445))).f_NEXT;
}
RT_B_TICK();
} L_end3452: ;
if ((l_S_3445 == NULL))
{
goto L_end3451;
}
((*(R17 *)rt_nil_check(l_S_3445))).f_D = l_S_3445;
l_MAINS_3446 = rt_add(l_MAINS_3446, ((*(R17 *)rt_nil_check(l_S_3445))).f_IV);
if (((((*(R17 *)rt_nil_check(l_S_3445))).f_IV == ((rt_int)0LL)) && (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3445))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_S_3445))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
r_BEGIN_SEGMENT(l_S_3445);
if (r_USES_SEGMENT(l_S_3445, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
((*(R7 *)rt_nil_check(g_W))).f_EXTSEG = r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_EXTS, ((*(R17 *)rt_nil_check(l_S_3445))).f_NAME);
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_SEPSEG, r_NO_TEXT(), 0);
((*(R7 *)rt_nil_check(g_W))).f_SEPV = ((rt_int)0LL);
((*(R7 *)rt_nil_check(g_W))).f_SEPR = ((rt_int)0LL);
if ((((*(R7 *)rt_nil_check(g_W))).f_EXTSEG || ((((*(R7 *)rt_nil_check(g_W))).f_SEPC && r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS, ((*(R17 *)rt_nil_check(l_S_3445))).f_NAME)))))
{
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_SEPSEG, ((*(R17 *)rt_nil_check(l_S_3445))).f_NAME, 0);
if ((((*(R17 *)rt_nil_check(l_S_3445))).f_IV == ((rt_int)1LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_S_3445))).f_LINE, rt_str("a MAIN segment is not translated separately (4.2)", 49));
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_EXTSEG)
{
{
R14 l_SAVED_CODE_3453; memset(&l_SAVED_CODE_3453, 0, sizeof l_SAVED_CODE_3453);
S_R14(&l_SAVED_CODE_3453, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
r_CLOSED_BODY(((*(R17 *)rt_nil_check(l_S_3445))).f_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3453, 0);
r_CODE(r_FMT1(rt_str("bs_@_init();", 12), r_CID(((*(R17 *)rt_nil_check(l_S_3445))).f_NAME)));
r_EMIT(g_O_PROTOS, r_FMT1(rt_str("void bs_@_init(void);", 21), r_CID(((*(R17 *)rt_nil_check(l_S_3445))).f_NAME)));
{
R17 * l_X_3454; memset(&l_X_3454, 0, sizeof l_X_3454);
l_X_3454 = ((*(R7 *)rt_nil_check(g_W))).f_EXTS;
for (;;) {
if (r_TEQ(((*(R17 *)rt_nil_check(l_X_3454))).f_NAME, ((*(R17 *)rt_nil_check(l_S_3445))).f_NAME)) goto L_end3455;
{
l_X_3454 = ((*(R17 *)rt_nil_check(l_X_3454))).f_NEXT;
}
RT_B_TICK();
} L_end3455: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("extern int bs_@_iface_@;", 24), r_CID(((*(R17 *)rt_nil_check(l_S_3445))).f_NAME), r_NUM(((*(R17 *)rt_nil_check(l_X_3454))).f_IV)));
r_EMIT(g_O_GLOBALS, r_CAT(r_FMT2(rt_str("int *bs_needs_@_@ = ", 20), r_UNIT_NAME(), r_CID(((*(R17 *)rt_nil_check(l_S_3445))).f_NAME)), r_FMT2(rt_str("&bs_@_iface_@;", 14), r_CID(((*(R17 *)rt_nil_check(l_S_3445))).f_NAME), r_NUM(((*(R17 *)rt_nil_check(l_X_3454))).f_IV))));
}
}
}
else
{
r_CLOSED_BODY(((*(R17 *)rt_nil_check(l_S_3445))).f_B);
}
r_SEGMENT_EXPORTS(l_S_3445);
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_SEPSEG, r_NO_TEXT(), 0);
((*(R7 *)rt_nil_check(g_W))).f_EXTSEG = 0;
}
RT_B_TICK();
} L_end3451: ;
l_S_3445 = p_SEGS;
for (;;) {
if ((l_S_3445 == NULL)) goto L_end3456;
{
if ((((*(R17 *)rt_nil_check(l_S_3445))).f_D == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_S_3445))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R17 *)rt_nil_check(l_S_3445))).f_NAME);
}
l_S_3445 = ((*(R17 *)rt_nil_check(l_S_3445))).f_NEXT;
}
RT_B_TICK();
} L_end3456: ;
if (((!(l_MAINS_3446 == ((rt_int)1LL))) && (!((*(R7 *)rt_nil_check(g_W))).f_SEPC)))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R17 * l_X_3457; memset(&l_X_3457, 0, sizeof l_X_3457);
l_X_3457 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_3457 == NULL)) goto L_end3458;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), r_CID(((*(R17 *)rt_nil_check(l_X_3457))).f_NAME)));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), r_CID(((*(R17 *)rt_nil_check(l_X_3457))).f_NAME), r_CSTRING(((*(R17 *)rt_nil_check(l_X_3457))).f_NAME)));
l_X_3457 = ((*(R17 *)rt_nil_check(l_X_3457))).f_NEXT;
}
RT_B_TICK();
} L_end3458: ;
}
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if (((*(R7 *)rt_nil_check(g_W))).f_SEPC)
{
{
R9 l_T_3459; memset(&l_T_3459, 0, sizeof l_T_3459);
S_R9(&l_T_3459, r_INPUT_TEXT(), 0);
R9 l_NAME_3460; memset(&l_NAME_3460, 0, sizeof l_NAME_3460);
S_R9(&l_NAME_3460, ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS))).f_NAME, 0);
rt_int l_FP_3461; memset(&l_FP_3461, 0, sizeof l_FP_3461);
l_FP_3461 = r_TEXT_PRINT(r_STR(l_T_3459, (l_T_3459).f_LEN));
r_EMITS(g_O_MAIN, rt_str("}", 1));
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("int bs_@_iface_@ = 1;", 21), r_CID(l_NAME_3460), r_NUM(l_FP_3461)));
r_WRITE_FILE_T(r_LIB_FILE(((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, l_NAME_3460, rt_str(".bif", 4)), l_T_3459);
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
{ R9 rv3462 = r_CID(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS))).f_NAME);
return rv3462; }
}
{ R9 rv3463 = r_MK(rt_str("MAIN", 4));
return rv3463; }
rt_raise(RT_X_INIT);
}
static rt_int r_FROM_DEFINED_MODULE(R17 * p_S, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3464; memset(&l_M_3464, 0, sizeof l_M_3464);
l_M_3464 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv3465 = 0;
return rv3465; }
}
for (;;) {
if ((l_M_3464 == NULL)) goto L_end3466;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_3464))).f_NAME))
{
{ rt_int rv3467 = 1;
return rv3467; }
}
l_M_3464 = ((*(R12 *)rt_nil_check(l_M_3464))).f_MODL;
}
RT_B_TICK();
} L_end3466: ;
{ rt_int rv3468 = 0;
return rv3468; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R17 * p_S) { RT_B_TICK(); 
R12 * l_MARK_3469; memset(&l_MARK_3469, 0, sizeof l_MARK_3469);
l_MARK_3469 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_3470; memset(&l_TAKEN_3470, 0, sizeof l_TAKEN_3470);
R12 * l_SEG_3471; memset(&l_SEG_3471, 0, sizeof l_SEG_3471);
l_SEG_3471 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R17 * l_NAMES_3472; memset(&l_NAMES_3472, 0, sizeof l_NAMES_3472);
l_NAMES_3472 = NULL;
for (;;) {
if ((l_MARK_3469 == NULL)) goto L_end3473;
{
if ((((*(R12 *)rt_nil_check(l_MARK_3469))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end3473;
}
l_MARK_3469 = ((*(R12 *)rt_nil_check(l_MARK_3469))).f_SNEXT;
}
RT_B_TICK();
} L_end3473: ;
l_TAKEN_3470 = r_TAKE_SCOPE(l_MARK_3469);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
{
R17 * l_X_3474; memset(&l_X_3474, 0, sizeof l_X_3474);
l_X_3474 = ((*(R17 *)rt_nil_check(p_S))).f_C;
for (;;) {
if ((l_X_3474 == NULL)) goto L_end3475;
{
{
R12 * l_Y_3476; memset(&l_Y_3476, 0, sizeof l_Y_3476);
l_Y_3476 = l_TAKEN_3470;
rt_int l_FOUND_3477; memset(&l_FOUND_3477, 0, sizeof l_FOUND_3477);
l_FOUND_3477 = (!(r_LOOKUP(((*(R17 *)rt_nil_check(l_X_3474))).f_NAME) == NULL));
for (;;) {
if ((l_Y_3476 == NULL)) goto L_end3478;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_3476))).f_NAME, ((*(R17 *)rt_nil_check(l_X_3474))).f_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_3476))).f_PREFIX, ((*(R17 *)rt_nil_check(l_X_3474))).f_NAME)))
{
l_FOUND_3477 = 1;
}
else if ((((*(R12 *)rt_nil_check(l_Y_3476))).f_KIND == g_Y_ROUTINE))
{
if (r_TEQ(r_BASE_NAME(l_Y_3476), ((*(R17 *)rt_nil_check(l_X_3474))).f_NAME))
{
l_FOUND_3477 = 1;
}
}
l_Y_3476 = ((*(R12 *)rt_nil_check(l_Y_3476))).f_SNEXT;
}
RT_B_TICK();
} L_end3478: ;
if ((!l_FOUND_3477))
{
r_FAILT(((*(R17 *)rt_nil_check(l_X_3474))).f_LINE, rt_str("DEFINES names a name local to the segment or imported into it (4.2): ", 69), ((*(R17 *)rt_nil_check(l_X_3474))).f_NAME);
}
l_NAMES_3472 = r_NAME_REF(((*(R17 *)rt_nil_check(l_X_3474))).f_NAME, ((rt_int)0LL), NULL, l_NAMES_3472);
}
l_X_3474 = ((*(R17 *)rt_nil_check(l_X_3474))).f_NEXT;
}
RT_B_TICK();
} L_end3475: ;
}
for (;;) {
if ((l_TAKEN_3470 == NULL)) goto L_end3479;
{
{
R12 * l_NEXT_3480; memset(&l_NEXT_3480, 0, sizeof l_NEXT_3480);
l_NEXT_3480 = ((*(R12 *)rt_nil_check(l_TAKEN_3470))).f_SNEXT;
if (((!(((*(R12 *)rt_nil_check(l_TAKEN_3470))).f_KIND == g_Y_BUILTIN)) && (((((((((*(R17 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_3470))).f_NAME)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_3470))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_3470))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_3470)) || (((((*(R12 *)rt_nil_check(l_TAKEN_3470))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_3470))))))))
{
((*(R12 *)rt_nil_check(l_TAKEN_3470))).f_SEGM = l_SEG_3471;
l_NAMES_3472 = r_NAME_REF(((*(R12 *)rt_nil_check(l_TAKEN_3470))).f_NAME, ((rt_int)0LL), NULL, l_NAMES_3472);
r_DEFINE(l_TAKEN_3470, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
else if ((!(((*(R12 *)rt_nil_check(l_TAKEN_3470))).f_KIND == g_Y_BUILTIN)))
{
((*(R12 *)rt_nil_check(l_TAKEN_3470))).f_SNEXT = ((*(R12 *)rt_nil_check(l_SEG_3471))).f_MEMBERS;
((*(R12 *)rt_nil_check(l_SEG_3471))).f_MEMBERS = l_TAKEN_3470;
}
l_TAKEN_3470 = l_NEXT_3480;
}
}
RT_B_TICK();
} L_end3479: ;
((*(R12 *)rt_nil_check(l_SEG_3471))).f_USES = l_NAMES_3472;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = NULL;
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = NULL;
}
static void r_BEGIN_SEGMENT(R17 * p_S) { RT_B_TICK(); 
R12 * l_SEG_3481; memset(&l_SEG_3481, 0, sizeof l_SEG_3481);
l_SEG_3481 = r_NEW_SYM(g_Y_SEGMENT, ((*(R17 *)rt_nil_check(p_S))).f_NAME);
R17 * l_U_3482; memset(&l_U_3482, 0, sizeof l_U_3482);
l_U_3482 = ((*(R17 *)rt_nil_check(p_S))).f_A;
((*(R12 *)rt_nil_check(l_SEG_3481))).f_DECL = p_S;
((*(R12 *)rt_nil_check(l_SEG_3481))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_SEGS;
((*(R7 *)rt_nil_check(g_W))).f_SEGS = l_SEG_3481;
for (;;) {
if ((l_U_3482 == NULL)) goto L_end3483;
{
if ((!r_TEQS(((*(R17 *)rt_nil_check(l_U_3482))).f_NAME, rt_str("TERMINAL", 8))))
{
{
R12 * l_T_3484; memset(&l_T_3484, 0, sizeof l_T_3484);
l_T_3484 = r_FIND_SEGMENT(((*(R17 *)rt_nil_check(l_U_3482))).f_NAME);
if ((l_T_3484 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_U_3482))).f_LINE, rt_str("USES names a segment of the program (4.2): ", 43), ((*(R17 *)rt_nil_check(l_U_3482))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(l_U_3482))).f_A == NULL)))
{
r_CHECK_ITEMS_DEFINED(l_T_3484, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3482))).f_A))).f_A);
r_CHECK_ITEMS_DEFINED(l_T_3484, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3482))).f_A))).f_B);
r_CHECK_ITEMS_DEFINED(l_T_3484, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3482))).f_A))).f_C);
r_CHECK_ITEMS_DEFINED(l_T_3484, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3482))).f_A))).f_D);
r_CHECK_ITEMS_DEFINED(l_T_3484, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3482))).f_A))).f_E);
}
}
}
l_U_3482 = ((*(R17 *)rt_nil_check(l_U_3482))).f_NEXT;
}
RT_B_TICK();
} L_end3483: ;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SEG_3481;
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = l_SEG_3481;
l_U_3482 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3482 == NULL)) goto L_end3485;
{
if ((!(((*(R17 *)rt_nil_check(l_U_3482))).f_A == NULL)))
{
r_INPUT_IMPORT_CONFLICT(((*(R17 *)rt_nil_check(l_U_3482))).f_A, ((*(R17 *)rt_nil_check(l_U_3482))).f_LINE);
}
l_U_3482 = ((*(R17 *)rt_nil_check(l_U_3482))).f_NEXT;
}
RT_B_TICK();
} L_end3485: ;
}
static R12 * r_ENTER_HOME(R12 * p_Y) { RT_B_TICK(); 
R12 * l_SAVED_3486; memset(&l_SAVED_3486, 0, sizeof l_SAVED_3486);
l_SAVED_3486 = ((*(R7 *)rt_nil_check(g_W))).f_TRSEG;
if (((((*(R12 *)rt_nil_check(p_Y))).f_HOME == NULL) || (((*(R12 *)rt_nil_check(p_Y))).f_HOME == ((*(R7 *)rt_nil_check(g_W))).f_TRSEG)))
{
{ R12 * rv3487 = l_SAVED_3486;
return rv3487; }
}
r_OPEN_SCOPE();
{
R12 * l_X_3488; memset(&l_X_3488, 0, sizeof l_X_3488);
l_X_3488 = ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_HOME))).f_MEMBERS;
for (;;) {
if ((l_X_3488 == NULL)) goto L_end3489;
{
{
R12 * l_A_3490; memset(&l_A_3490, 0, sizeof l_A_3490);
l_A_3490 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_X_3488))).f_KIND, ((*(R12 *)rt_nil_check(l_X_3488))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_3490)), (*(R12 *)rt_nil_check(l_X_3488)), 0);
((*(R12 *)rt_nil_check(l_A_3490))).f_ORIG = r_ORIGINAL(l_X_3488);
r_DEFINE_ALIAS(l_A_3490);
}
l_X_3488 = ((*(R12 *)rt_nil_check(l_X_3488))).f_SNEXT;
}
RT_B_TICK();
} L_end3489: ;
}
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = ((*(R12 *)rt_nil_check(p_Y))).f_HOME;
{ R12 * rv3491 = l_SAVED_3486;
return rv3491; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_ALIAS(R12 * p_A) { RT_B_TICK(); 
rt_int l_B_3492; memset(&l_B_3492, 0, sizeof l_B_3492);
l_B_3492 = r_BUCKET(((*(R12 *)rt_nil_check(p_A))).f_NAME);
((*(R12 *)rt_nil_check(p_A))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_A))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_3492, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_3492, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_A;
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
R12 * l_T_3493; memset(&l_T_3493, 0, sizeof l_T_3493);
l_T_3493 = ((*(R7 *)rt_nil_check(g_W))).f_SEGS;
for (;;) {
if ((l_T_3493 == NULL)) goto L_end3494;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_T_3493))).f_NAME, p_NAME))
{
{ R12 * rv3495 = l_T_3493;
return rv3495; }
}
l_T_3493 = ((*(R12 *)rt_nil_check(l_T_3493))).f_INSTANCES;
}
RT_B_TICK();
} L_end3494: ;
{ R12 * rv3496 = NULL;
return rv3496; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_ITEMS_DEFINED(R12 * p_T, R17 * p_L) { RT_B_TICK(); 
R17 * l_N_3497; memset(&l_N_3497, 0, sizeof l_N_3497);
l_N_3497 = p_L;
for (;;) {
if ((l_N_3497 == NULL)) goto L_end3498;
{
if ((!r_IN_IDENTS(((*(R12 *)rt_nil_check(p_T))).f_USES, ((*(R17 *)rt_nil_check(l_N_3497))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_N_3497))).f_LINE, rt_str("the segment does not define ", 28), ((*(R17 *)rt_nil_check(l_N_3497))).f_NAME);
}
l_N_3497 = ((*(R17 *)rt_nil_check(l_N_3497))).f_NEXT;
}
RT_B_TICK();
} L_end3498: ;
}
static rt_int r_SEG_VISIBLE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_U_3499; memset(&l_U_3499, 0, sizeof l_U_3499);
rt_int l_INPUT_ONLY_3500; memset(&l_INPUT_ONLY_3500, 0, sizeof l_INPUT_ONLY_3500);
l_INPUT_ONLY_3500 = 0;
if (((((((*(R7 *)rt_nil_check(g_W))).f_CURSEG == NULL) || (((*(R12 *)rt_nil_check(p_Y))).f_SEGM == NULL)) || (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL))) || (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
{ rt_int rv3501 = 1;
return rv3501; }
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_SEGM == ((*(R7 *)rt_nil_check(g_W))).f_CURSEG))
{
{ rt_int rv3502 = 1;
return rv3502; }
}
l_U_3499 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CURSEG))).f_DECL))).f_A;
for (;;) {
if ((l_U_3499 == NULL)) goto L_end3503;
{
{
R12 * l_T_3504; memset(&l_T_3504, 0, sizeof l_T_3504);
l_T_3504 = r_FIND_SEGMENT(((*(R17 *)rt_nil_check(l_U_3499))).f_NAME);
if ((!(l_T_3504 == NULL)))
{
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_T_3504))).f_USES, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
if ((((*(R17 *)rt_nil_check(l_U_3499))).f_A == NULL))
{
{ rt_int rv3505 = 1;
return rv3505; }
}
{
R17 * l_I_3506; memset(&l_I_3506, 0, sizeof l_I_3506);
l_I_3506 = ((*(R17 *)rt_nil_check(l_U_3499))).f_A;
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)))
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3506))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3507 = 1;
return rv3507; }
}
else if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3506))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
l_INPUT_ONLY_3500 = 1;
}
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE))
{
if ((((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3506))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME) || r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3506))).f_C, r_BASE_NAME(p_Y))) || r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3506))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)) || r_FROM_MODULES(((*(R17 *)rt_nil_check(l_I_3506))).f_E, p_Y)))
{
{ rt_int rv3508 = 1;
return rv3508; }
}
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE))
{
if ((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3506))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_NAME) || r_FROM_MODULES(((*(R17 *)rt_nil_check(l_I_3506))).f_E, p_Y)))
{
{ rt_int rv3509 = 1;
return rv3509; }
}
}
else
{
{ rt_int rv3510 = 1;
return rv3510; }
}
}
}
}
}
l_U_3499 = ((*(R17 *)rt_nil_check(l_U_3499))).f_NEXT;
}
RT_B_TICK();
} L_end3503: ;
if (l_INPUT_ONLY_3500)
{
{ rt_int rv3511 = 0;
return rv3511; }
}
r_FAILT(p_LINE, rt_str("not imported by the USES clause of the segment (4.2): ", 54), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static rt_int r_FROM_MODULES(R17 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3512; memset(&l_M_3512, 0, sizeof l_M_3512);
l_M_3512 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((p_MODS == NULL))
{
{ rt_int rv3513 = 0;
return rv3513; }
}
for (;;) {
if ((l_M_3512 == NULL)) goto L_end3514;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_3512))).f_NAME))
{
{ rt_int rv3515 = 1;
return rv3515; }
}
l_M_3512 = ((*(R12 *)rt_nil_check(l_M_3512))).f_MODL;
}
RT_B_TICK();
} L_end3514: ;
{ rt_int rv3516 = 0;
return rv3516; }
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
