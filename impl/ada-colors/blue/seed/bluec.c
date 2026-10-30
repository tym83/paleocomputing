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
struct fr_r_MANIFEST_ARITH { void *up; R9 p_OP; rt_int p_A; rt_int p_B; rt_int p_LINE; rt_int l_R_1360; };
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
}
if (((((*(R17 *)rt_nil_check(p_R))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(p_R))).f_IV == ((rt_int)3LL))))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
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
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
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
{ R9 rv912 = r_MK(rt_str("double", 6));
return rv912; }
}
else if (((l_K_910 == g_T_STR) || (l_K_910 == g_T_BITS)))
{
{ R9 rv913 = r_MK(rt_str("rstr", 4));
return rv913; }
}
else if (((l_K_910 == g_T_REC) || (l_K_910 == g_T_ARR)))
{
{ R9 rv914 = ((*(R22 *)rt_nil_check(p_T))).f_CNAME;
return rv914; }
}
else if ((l_K_910 == g_T_ABS))
{
{ R9 rv915 = r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv915; }
}
else if ((l_K_910 == g_T_SEM))
{
{ R9 rv916 = r_MK(rt_str("rt_b_sem *", 10));
return rv916; }
}
else if ((l_K_910 == g_T_PATHS))
{
{ R9 rv917 = r_MK(rt_str("rt_b_paths", 10));
return rv917; }
}
else if ((l_K_910 == g_T_VOID))
{
{ R9 rv918 = r_MK(rt_str("void", 4));
return rv918; }
}
else if ((l_K_910 == g_T_PTR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R17 * l_TT_919; memset(&l_TT_919, 0, sizeof l_TT_919);
l_TT_919 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R17 *)rt_nil_check(l_TT_919))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(l_TT_919))).f_A == NULL)))
{
{
R12 * l_Y_920; memset(&l_Y_920, 0, sizeof l_Y_920);
l_Y_920 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(l_TT_919))).f_NAME);
if ((!(l_Y_920 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_920))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_920))).f_DECL == NULL))))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_920))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_920))).f_DECL))).f_A == NULL)))
{
{ R9 rv921 = r_CATS(r_RECORD_NAME(l_Y_920), rt_str(" *", 2));
return rv921; }
}
}
}
}
}
}
}
{ R9 rv922 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv922; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R17 * p_E) { RT_B_TICK(); 
{ rt_int rv923 = ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv923; }
rt_raise(RT_X_INIT);
}
static R24 * r_NEW_FIELD(R9 p_NAME, R22 * p_T, rt_int p_KIND) { RT_B_TICK(); 
R24 * l_F_924; memset(&l_F_924, 0, sizeof l_F_924);
l_F_924 = ((R24 *)rt_b_new(sizeof (R24)));
S_R24(&(*(R24 *)rt_nil_check(l_F_924)), ({ R24 rc925; memset(&rc925, 0, sizeof rc925);  S_R9(&rc925.f_NAME, p_NAME, 0); S_R9(&rc925.f_CNAME, r_FMT1(rt_str("f_@", 3), r_CID(p_NAME)), 0); rc925.f_T = p_T; rc925.f_KIND = p_KIND; S_R9(&rc925.f_TAGF, r_NO_TEXT(), 0); rc925.f_LABELS = NULL; rc925.f_NEXT = NULL; rc925; }), 0);
{ R24 * rv926 = l_F_924;
return rv926; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_FIELD(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R24 * l_F_927; memset(&l_F_927, 0, sizeof l_F_927);
l_F_927 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_927 == NULL)) goto L_end928;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_927))).f_NAME, p_NAME))
{
{ R24 * rv929 = l_F_927;
return rv929; }
}
l_F_927 = ((*(R24 *)rt_nil_check(l_F_927))).f_NEXT;
}
RT_B_TICK();
} L_end928: ;
{ R24 * rv930 = NULL;
return rv930; }
rt_raise(RT_X_INIT);
}
static R24 * r_FIND_VFIELD(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R24 * l_F_931; memset(&l_F_931, 0, sizeof l_F_931);
l_F_931 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FIRST_932; memset(&l_FIRST_932, 0, sizeof l_FIRST_932);
l_FIRST_932 = NULL;
for (;;) {
if ((l_F_931 == NULL)) goto L_end933;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_931))).f_NAME, p_NAME))
{
if ((l_FIRST_932 == NULL))
{
l_FIRST_932 = l_F_931;
}
if (((((*(R24 *)rt_nil_check(l_F_931))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
{ R24 * rv934 = l_F_931;
return rv934; }
}
{
R23 l_TAGV_935; memset(&l_TAGV_935, 0, sizeof l_TAGV_935);
S_R23(&l_TAGV_935, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(l_F_931))).f_TAGF), 0);
if ((l_TAGV_935).f_OK)
{
if (r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_931))).f_LABELS, (l_TAGV_935).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(l_F_931))).f_TAGF)))).f_T))
{
{ R24 * rv936 = l_F_931;
return rv936; }
}
}
}
}
l_F_931 = ((*(R24 *)rt_nil_check(l_F_931))).f_NEXT;
}
RT_B_TICK();
} L_end933: ;
{ R24 * rv937 = l_FIRST_932;
return rv937; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R22 * p_T, R24 * p_F, R24 * *p_TAIL) { RT_B_TICK(); 
R24 * l_P_938; memset(&l_P_938, 0, sizeof l_P_938);
l_P_938 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_939; memset(&l_N_939, 0, sizeof l_N_939);
l_N_939 = ((rt_int)0LL);
for (;;) {
if ((l_P_938 == NULL)) goto L_end940;
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_P_938))).f_NAME, ((*(R24 *)rt_nil_check(p_F))).f_NAME))
{
if ((((((((*(R24 *)rt_nil_check(l_P_938))).f_TAGF).f_LEN == ((rt_int)0LL)) || ((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL))) || (!r_TEQ(((*(R24 *)rt_nil_check(l_P_938))).f_TAGF, ((*(R24 *)rt_nil_check(p_F))).f_TAGF))) || (((*(R24 *)rt_nil_check(l_P_938))).f_LABELS == ((*(R24 *)rt_nil_check(p_F))).f_LABELS)))
{
r_FAILT(((rt_int)0LL), rt_str("the field names of a record must be distinct (3.9.1): ", 54), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
l_N_939 = rt_add(l_N_939, ((rt_int)1LL));
}
l_P_938 = ((*(R24 *)rt_nil_check(l_P_938))).f_NEXT;
}
RT_B_TICK();
} L_end940: ;
if ((l_N_939 > ((rt_int)0LL)))
{
S_R9(&((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R24 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_939)), 0);
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
R17 * l_D_941; memset(&l_D_941, 0, sizeof l_D_941);
l_D_941 = p_DECLS;
for (;;) {
if ((l_D_941 == NULL)) goto L_end942;
{
if ((((*(R17 *)rt_nil_check(l_D_941))).f_KIND == g_N_VAR))
{
{
R22 * l_FT_943; memset(&l_FT_943, 0, sizeof l_FT_943);
l_FT_943 = r_RESOLVE(((*(R17 *)rt_nil_check(l_D_941))).f_B);
R17 * l_N_944; memset(&l_N_944, 0, sizeof l_N_944);
l_N_944 = ((*(R17 *)rt_nil_check(l_D_941))).f_A;
for (;;) {
if ((l_N_944 == NULL)) goto L_end945;
{
{
R24 * l_F_946; memset(&l_F_946, 0, sizeof l_F_946);
l_F_946 = r_NEW_FIELD(((*(R17 *)rt_nil_check(l_N_944))).f_NAME, l_FT_943, ((rt_int)0LL));
S_R9(&((*(R24 *)rt_nil_check(l_F_946))).f_TAGF, p_TAGN, 0);
((*(R24 *)rt_nil_check(l_F_946))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_946, &(*p_TAIL));
if (((r_LOOKUP(((*(R17 *)rt_nil_check(l_N_944))).f_NAME) == NULL) || (!(((*(R12 *)rt_nil_check(r_LOOKUP(((*(R17 *)rt_nil_check(l_N_944))).f_NAME)))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))))
{
{
R12 * l_Y_947; memset(&l_Y_947, 0, sizeof l_Y_947);
l_Y_947 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(l_N_944))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_947))).f_T = l_FT_943;
S_R9(&((*(R12 *)rt_nil_check(l_Y_947))).f_ACCESS, r_FMT1(rt_str("$S.@", 4), ((*(R24 *)rt_nil_check(l_F_946))).f_CNAME), 0);
((*(R12 *)rt_nil_check(l_Y_947))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_Y_947))).f_LEVEL = rt_neg(((rt_int)1LL));
((*(R12 *)rt_nil_check(l_Y_947))).f_OWNER = rt_neg(((rt_int)1LL));
r_DEFINE(l_Y_947, ((*(R17 *)rt_nil_check(l_D_941))).f_LINE);
}
}
}
l_N_944 = ((*(R17 *)rt_nil_check(l_N_944))).f_NEXT;
}
RT_B_TICK();
} L_end945: ;
}
}
else
{
{
R24 * l_TF_948; memset(&l_TF_948, 0, sizeof l_TF_948);
l_TF_948 = r_FIND_FIELD(p_T, ((*(R17 *)rt_nil_check(l_D_941))).f_NAME);
R17 * l_S_949; memset(&l_S_949, 0, sizeof l_S_949);
l_S_949 = ((*(R17 *)rt_nil_check(l_D_941))).f_A;
if ((l_TF_948 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_941))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R17 *)rt_nil_check(l_D_941))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_948))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_941))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R17 *)rt_nil_check(l_D_941))).f_NAME);
}
{
R17 * l_O_950; memset(&l_O_950, 0, sizeof l_O_950);
l_O_950 = p_DECLS;
for (;;) {
if ((l_O_950 == l_D_941)) goto L_end951;
{
if ((((*(R17 *)rt_nil_check(l_O_950))).f_KIND == g_N_VARIANT))
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_O_950))).f_NAME, ((*(R17 *)rt_nil_check(l_D_941))).f_NAME))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_941))).f_LINE, rt_str("two variant parts discriminate on the tag ", 42), ((*(R17 *)rt_nil_check(l_D_941))).f_NAME);
}
}
l_O_950 = ((*(R17 *)rt_nil_check(l_O_950))).f_NEXT;
}
RT_B_TICK();
} L_end951: ;
}
r_CHECK_VARIANT_NAMES(l_D_941, ((*(R24 *)rt_nil_check(l_TF_948))).f_T);
for (;;) {
if ((l_S_949 == NULL)) goto L_end952;
{
r_OPEN_SCOPE();
r_RECORD_FIELDS(p_T, ((*(R17 *)rt_nil_check(l_S_949))).f_B, C_R9(((*(R17 *)rt_nil_check(l_D_941))).f_NAME), ((*(R17 *)rt_nil_check(l_S_949))).f_A, &(*p_TAIL));
r_CLOSE_SCOPE();
l_S_949 = ((*(R17 *)rt_nil_check(l_S_949))).f_NEXT;
}
RT_B_TICK();
} L_end952: ;
}
}
l_D_941 = ((*(R17 *)rt_nil_check(l_D_941))).f_NEXT;
}
RT_B_TICK();
} L_end942: ;
}
static void r_CHECK_VARIANT_NAMES(R17 * p_D, R22 * p_TT) { RT_B_TICK(); 
R17 * l_S_953; memset(&l_S_953, 0, sizeof l_S_953);
l_S_953 = ((*(R17 *)rt_nil_check(p_D))).f_A;
R17 * l_LOS_954; memset(&l_LOS_954, 0, sizeof l_LOS_954);
l_LOS_954 = NULL;
R17 * l_HIS_955; memset(&l_HIS_955, 0, sizeof l_HIS_955);
l_HIS_955 = NULL;
rt_int l_LO_LIM_956; memset(&l_LO_LIM_956, 0, sizeof l_LO_LIM_956);
rt_int l_HI_LIM_957; memset(&l_HI_LIM_957, 0, sizeof l_HI_LIM_957);
R22 * l_R_958; memset(&l_R_958, 0, sizeof l_R_958);
l_R_958 = r_REAL_TYPE(p_TT);
l_LO_LIM_956 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
l_HI_LIM_957 = INT64_MAX;
if ((((*(R22 *)rt_nil_check(l_R_958))).f_KIND == g_T_ENUM))
{
l_LO_LIM_956 = ((rt_int)0LL);
l_HI_LIM_957 = rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_R_958))).f_BASE))).f_NLITS, ((rt_int)1LL));
}
else if ((((*(R22 *)rt_nil_check(l_R_958))).f_KIND == g_T_BOOL))
{
l_LO_LIM_956 = ((rt_int)0LL);
l_HI_LIM_957 = ((rt_int)1LL);
}
if ((((*(R22 *)rt_nil_check(l_R_958))).f_MLO).f_OK)
{
l_LO_LIM_956 = (((*(R22 *)rt_nil_check(l_R_958))).f_MLO).f_V;
}
if ((((*(R22 *)rt_nil_check(l_R_958))).f_MHI).f_OK)
{
l_HI_LIM_957 = (((*(R22 *)rt_nil_check(l_R_958))).f_MHI).f_V;
}
for (;;) {
if ((l_S_953 == NULL)) goto L_end959;
{
{
R17 * l_L_960; memset(&l_L_960, 0, sizeof l_L_960);
l_L_960 = ((*(R17 *)rt_nil_check(l_S_953))).f_A;
for (;;) {
if ((l_L_960 == NULL)) goto L_end961;
{
{
R23 l_A_962; memset(&l_A_962, 0, sizeof l_A_962);
R23 l_B_963; memset(&l_B_963, 0, sizeof l_B_963);
if ((((*(R17 *)rt_nil_check(l_L_960))).f_KIND == g_N_RANGE))
{
S_R23(&l_A_962, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_960))).f_A, p_TT), 0);
S_R23(&l_B_963, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_960))).f_B, p_TT), 0);
if (((l_A_962).f_OK && (((((*(R17 *)rt_nil_check(l_L_960))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_L_960))).f_IV == ((rt_int)3LL))))))
{
(l_A_962).f_V = rt_add((l_A_962).f_V, ((rt_int)1LL));
}
if (((l_B_963).f_OK && (((*(R17 *)rt_nil_check(l_L_960))).f_IV >= ((rt_int)2LL))))
{
(l_B_963).f_V = rt_sub((l_B_963).f_V, ((rt_int)1LL));
}
}
else
{
S_R23(&l_A_962, r_ENUM_MANIFEST(l_L_960, p_TT), 0);
S_R23(&l_B_963, l_A_962, 0);
}
if ((!(((l_A_962).f_OK && (l_B_963).f_OK))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_960))).f_LINE, rt_str("a variant-name is manifest (3.9.1)", 34));
}
if (((((l_A_962).f_V < l_LO_LIM_956) || ((l_B_963).f_V > l_HI_LIM_957)) || ((l_A_962).f_V > (l_B_963).f_V)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_960))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.1)", 49));
}
{
R17 * l_P_964; memset(&l_P_964, 0, sizeof l_P_964);
l_P_964 = l_LOS_954;
R17 * l_Q_965; memset(&l_Q_965, 0, sizeof l_Q_965);
l_Q_965 = l_HIS_955;
for (;;) {
if ((l_P_964 == NULL)) goto L_end966;
{
if ((((l_A_962).f_V <= ((*(R17 *)rt_nil_check(l_Q_965))).f_IV) && ((l_B_963).f_V >= ((*(R17 *)rt_nil_check(l_P_964))).f_IV)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_960))).f_LINE, rt_str("a value of the tag names two variants (3.9.1)", 45));
}
l_P_964 = ((*(R17 *)rt_nil_check(l_P_964))).f_NEXT;
l_Q_965 = ((*(R17 *)rt_nil_check(l_Q_965))).f_NEXT;
}
RT_B_TICK();
} L_end966: ;
}
{
R17 * l_P_967; memset(&l_P_967, 0, sizeof l_P_967);
l_P_967 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
R17 * l_Q_968; memset(&l_Q_968, 0, sizeof l_Q_968);
l_Q_968 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R17 *)rt_nil_check(l_P_967))).f_IV = (l_A_962).f_V;
((*(R17 *)rt_nil_check(l_Q_968))).f_IV = (l_B_963).f_V;
((*(R17 *)rt_nil_check(l_P_967))).f_NEXT = l_LOS_954;
((*(R17 *)rt_nil_check(l_Q_968))).f_NEXT = l_HIS_955;
l_LOS_954 = l_P_967;
l_HIS_955 = l_Q_968;
}
}
l_L_960 = ((*(R17 *)rt_nil_check(l_L_960))).f_NEXT;
}
RT_B_TICK();
} L_end961: ;
}
l_S_953 = ((*(R17 *)rt_nil_check(l_S_953))).f_NEXT;
}
RT_B_TICK();
} L_end959: ;
}
static R22 * r_RESOLVE_RECORD(R17 * p_TS, R9 p_CNAME, R12 * p_Y, R17 * p_FORMALS) { RT_B_TICK(); 
R22 * l_T_969; memset(&l_T_969, 0, sizeof l_T_969);
l_T_969 = r_NEW_TYP(g_T_REC);
R24 * l_TAIL_970; memset(&l_TAIL_970, 0, sizeof l_TAIL_970);
l_TAIL_970 = NULL;
((*(R22 *)rt_nil_check(l_T_969))).f_BASE = l_T_969;
((*(R22 *)rt_nil_check(l_T_969))).f_DECL = p_Y;
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_D == NULL)))
{
((*(R22 *)rt_nil_check(l_T_969))).f_REPS = r_EXPAND_REP(((*(R17 *)rt_nil_check(p_TS))).f_D, l_T_969, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
r_CHECK_REP_CLASS(l_T_969, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(l_T_969))).f_CNAME, p_CNAME, 0);
}
else
{
S_R9(&((*(R22 *)rt_nil_check(l_T_969))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R22 *)rt_nil_check(l_T_969))).f_CNAME, ((*(R22 *)rt_nil_check(l_T_969))).f_CNAME));
}
{
R17 * l_F_971; memset(&l_F_971, 0, sizeof l_F_971);
l_F_971 = p_FORMALS;
for (;;) {
if ((l_F_971 == NULL)) goto L_end972;
{
if ((!(((*(R17 *)rt_nil_check(l_F_971))).f_B == NULL)))
{
{
R22 * l_FT_973; memset(&l_FT_973, 0, sizeof l_FT_973);
l_FT_973 = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_971))).f_B);
R17 * l_N_974; memset(&l_N_974, 0, sizeof l_N_974);
l_N_974 = ((*(R17 *)rt_nil_check(l_F_971))).f_A;
rt_int l_KIND_975; memset(&l_KIND_975, 0, sizeof l_KIND_975);
l_KIND_975 = ((rt_int)1LL);
if ((((*(R17 *)rt_nil_check(l_F_971))).f_IV == ((rt_int)1LL)))
{
l_KIND_975 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_973))) || (!(((*(R22 *)rt_nil_check(l_FT_973))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_F_971))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_974 == NULL)) goto L_end976;
{
r_ADD_FIELD(l_T_969, r_NEW_FIELD(((*(R17 *)rt_nil_check(l_N_974))).f_NAME, l_FT_973, l_KIND_975), &l_TAIL_970);
l_N_974 = ((*(R17 *)rt_nil_check(l_N_974))).f_NEXT;
}
RT_B_TICK();
} L_end976: ;
}
}
l_F_971 = ((*(R17 *)rt_nil_check(l_F_971))).f_NEXT;
}
RT_B_TICK();
} L_end972: ;
}
r_OPEN_SCOPE();
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_RECORD_FIELDS(l_T_969, ((*(R17 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_970);
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_CLOSE_SCOPE();
r_CHECK_RECORD_REP(l_T_969, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
r_COMPLETE_RECORD(l_T_969);
{ R22 * rv977 = l_T_969;
return rv977; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_RECORD_REP(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv978 = 0;
return rv978; }
}
{ rt_int rv979 = ((((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_KIND == g_N_REP) && r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_NAME, rt_str("RECORD_REP", 10)));
return rv979; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_RECORD_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_SEEN_980; memset(&l_SEEN_980, 0, sizeof l_SEEN_980);
l_SEEN_980 = NULL;
rt_int l_LISTED_981; memset(&l_LISTED_981, 0, sizeof l_LISTED_981);
l_LISTED_981 = 0;
if ((!r_IS_RECORD_REP(p_T)))
{
return;
}
{
R17 * l_P_982; memset(&l_P_982, 0, sizeof l_P_982);
l_P_982 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A;
for (;;) {
if ((l_P_982 == NULL)) goto L_end983;
{
if ((((*(R17 *)rt_nil_check(l_P_982))).f_IV == ((rt_int)1LL)))
{
l_LISTED_981 = 1;
}
r_CHECK_ELEMENTS(p_T, ((*(R17 *)rt_nil_check(l_P_982))).f_A, r_NO_TEXT(), NULL, &l_SEEN_980);
l_P_982 = ((*(R17 *)rt_nil_check(l_P_982))).f_NEXT;
}
RT_B_TICK();
} L_end983: ;
}
if (l_LISTED_981)
{
{
R24 * l_F_984; memset(&l_F_984, 0, sizeof l_F_984);
l_F_984 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_984 == NULL)) goto L_end985;
{
if ((((((*(R24 *)rt_nil_check(l_F_984))).f_TAGF).f_LEN == ((rt_int)0LL)) && (!r_IN_IDENTS(l_SEEN_980, ((*(R24 *)rt_nil_check(l_F_984))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("a record-reptype with element-specs positions every field (3.9.3): ", 67), ((*(R24 *)rt_nil_check(l_F_984))).f_NAME);
}
if ((((((*(R24 *)rt_nil_check(l_F_984))).f_TAGF).f_LEN > ((rt_int)0LL)) && (!r_IN_IDENTS(l_SEEN_980, r_CAT(r_MK(rt_str("|", 1)), ((*(R24 *)rt_nil_check(l_F_984))).f_TAGF)))))
{
r_FAILT(p_LINE, rt_str("a record-reptype with element-specs positions every variant part (3.9.3): ", 74), ((*(R24 *)rt_nil_check(l_F_984))).f_TAGF);
}
l_F_984 = ((*(R24 *)rt_nil_check(l_F_984))).f_NEXT;
}
RT_B_TICK();
} L_end985: ;
}
}
{
R17 * l_V_986; memset(&l_V_986, 0, sizeof l_V_986);
l_V_986 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_C;
for (;;) {
if ((l_V_986 == NULL)) goto L_end987;
{
{
R24 * l_TF_988; memset(&l_TF_988, 0, sizeof l_TF_988);
l_TF_988 = r_FIND_FIELD(p_T, ((*(R17 *)rt_nil_check(l_V_986))).f_NAME);
R17 * l_S_989; memset(&l_S_989, 0, sizeof l_S_989);
l_S_989 = ((*(R17 *)rt_nil_check(l_V_986))).f_A;
if ((l_TF_988 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_V_986))).f_LINE, rt_str("not a tag of the record (3.9.3): ", 33), ((*(R17 *)rt_nil_check(l_V_986))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_988))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_V_986))).f_LINE, rt_str("not a tag of the record (3.9.3): ", 33), ((*(R17 *)rt_nil_check(l_V_986))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(l_V_986))).f_B == NULL)))
{
if ((r_PACKING_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_986))).f_B))).f_NAME) < ((rt_int)0LL)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_V_986))).f_LINE, rt_str("a packing-mode is DENSE, PACKED or UNPACKED (3.9.3): ", 53), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_986))).f_B))).f_NAME);
}
}
for (;;) {
if ((l_S_989 == NULL)) goto L_end990;
{
{
R17 * l_L_991; memset(&l_L_991, 0, sizeof l_L_991);
l_L_991 = ((*(R17 *)rt_nil_check(l_S_989))).f_A;
R17 * l_P_992; memset(&l_P_992, 0, sizeof l_P_992);
l_P_992 = ((*(R17 *)rt_nil_check(l_S_989))).f_B;
R17 * l_VSEEN_993; memset(&l_VSEEN_993, 0, sizeof l_VSEEN_993);
l_VSEEN_993 = NULL;
for (;;) {
if ((l_L_991 == NULL)) goto L_end994;
{
{
R14 l_SAVED_CODE_995; memset(&l_SAVED_CODE_995, 0, sizeof l_SAVED_CODE_995);
S_R14(&l_SAVED_CODE_995, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_LV_996; memset(&l_LV_996, 0, sizeof l_LV_996);
S_R26(&l_LV_996, r_EXPR(l_L_991, ((*(R24 *)rt_nil_check(l_TF_988))).f_T), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_995, 0);
if ((!r_SAME_CLASS(r_REAL_TYPE((l_LV_996).f_T), r_REAL_TYPE(((*(R24 *)rt_nil_check(l_TF_988))).f_T))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_991))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.3)", 49));
}
}
l_L_991 = ((*(R17 *)rt_nil_check(l_L_991))).f_NEXT;
}
RT_B_TICK();
} L_end994: ;
for (;;) {
if ((l_P_992 == NULL)) goto L_end997;
{
r_CHECK_ELEMENTS(p_T, ((*(R17 *)rt_nil_check(l_P_992))).f_A, C_R9(((*(R17 *)rt_nil_check(l_V_986))).f_NAME), ((*(R17 *)rt_nil_check(l_S_989))).f_A, &l_VSEEN_993);
l_P_992 = ((*(R17 *)rt_nil_check(l_P_992))).f_NEXT;
}
RT_B_TICK();
} L_end997: ;
}
l_S_989 = ((*(R17 *)rt_nil_check(l_S_989))).f_NEXT;
}
RT_B_TICK();
} L_end990: ;
}
l_V_986 = ((*(R17 *)rt_nil_check(l_V_986))).f_NEXT;
}
RT_B_TICK();
} L_end987: ;
}
}
static void r_CHECK_ELEMENTS(R22 * p_T, R17 * p_L, R9 p_TAGN, R17 * p_LABELS, R17 * *p_SEEN) { RT_B_TICK(); 
R17 * l_E_998; memset(&l_E_998, 0, sizeof l_E_998);
l_E_998 = p_L;
for (;;) {
if ((l_E_998 == NULL)) goto L_end999;
{
if (((((*(R17 *)rt_nil_check(l_E_998))).f_FL == ((rt_int)0LL)) || (((*(R17 *)rt_nil_check(l_E_998))).f_FL == ((rt_int)2LL))))
{
{
R24 * l_F_1000; memset(&l_F_1000, 0, sizeof l_F_1000);
l_F_1000 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R24 * l_FOUND_1001; memset(&l_FOUND_1001, 0, sizeof l_FOUND_1001);
l_FOUND_1001 = NULL;
for (;;) {
if ((l_F_1000 == NULL)) goto L_end1002;
{
if ((r_TEQ(((*(R24 *)rt_nil_check(l_F_1000))).f_NAME, ((*(R17 *)rt_nil_check(l_E_998))).f_NAME) && r_TEQ(((*(R24 *)rt_nil_check(l_F_1000))).f_TAGF, p_TAGN)))
{
l_FOUND_1001 = l_F_1000;
}
l_F_1000 = ((*(R24 *)rt_nil_check(l_F_1000))).f_NEXT;
}
RT_B_TICK();
} L_end1002: ;
if ((l_FOUND_1001 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_998))).f_LINE, rt_str("not a field of the record accessible here (3.9.3): ", 51), ((*(R17 *)rt_nil_check(l_E_998))).f_NAME);
}
if (((((*(R17 *)rt_nil_check(l_E_998))).f_FL == ((rt_int)2LL)) && (((*(R24 *)rt_nil_check(l_FOUND_1001))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_998))).f_LINE, rt_str("OMIT names a constant or tag field (3.9.3): ", 44), ((*(R17 *)rt_nil_check(l_E_998))).f_NAME);
}
if (r_IN_IDENTS((*p_SEEN), ((*(R17 *)rt_nil_check(l_E_998))).f_NAME))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_998))).f_LINE, rt_str("a field is positioned once in a record-reptype (3.9.3): ", 56), ((*(R17 *)rt_nil_check(l_E_998))).f_NAME);
}
(*p_SEEN) = r_NAME_REF(((*(R17 *)rt_nil_check(l_E_998))).f_NAME, ((rt_int)0LL), NULL, (*p_SEEN));
}
}
else if ((((*(R17 *)rt_nil_check(l_E_998))).f_FL == ((rt_int)1LL)))
{
{
R24 * l_TF_1003; memset(&l_TF_1003, 0, sizeof l_TF_1003);
l_TF_1003 = r_FIND_FIELD(p_T, ((*(R17 *)rt_nil_check(l_E_998))).f_NAME);
R9 l_KEY_1004; memset(&l_KEY_1004, 0, sizeof l_KEY_1004);
S_R9(&l_KEY_1004, r_CAT(r_MK(rt_str("|", 1)), ((*(R17 *)rt_nil_check(l_E_998))).f_NAME), 0);
if ((l_TF_1003 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_998))).f_LINE, rt_str("VARIANTS names a tag of the record (3.9.3): ", 44), ((*(R17 *)rt_nil_check(l_E_998))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_TF_1003))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_998))).f_LINE, rt_str("VARIANTS names a tag of the record (3.9.3): ", 44), ((*(R17 *)rt_nil_check(l_E_998))).f_NAME);
}
if (r_IN_IDENTS((*p_SEEN), l_KEY_1004))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_998))).f_LINE, rt_str("a variant part is positioned once in a record-reptype (3.9.3): ", 63), ((*(R17 *)rt_nil_check(l_E_998))).f_NAME);
}
(*p_SEEN) = r_NAME_REF(l_KEY_1004, ((rt_int)0LL), NULL, (*p_SEEN));
}
}
else
{
{
R23 l_M_1005; memset(&l_M_1005, 0, sizeof l_M_1005);
S_R23(&l_M_1005, r_MANIFEST(((*(R17 *)rt_nil_check(l_E_998))).f_B), 0);
if (((!(l_M_1005).f_OK) || ((l_M_1005).f_V < ((rt_int)0LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_E_998))).f_LINE, rt_str("the length of a filler-spec is a manifest integer, not negative (3.9.3)", 71));
}
}
}
l_E_998 = ((*(R17 *)rt_nil_check(l_E_998))).f_NEXT;
}
RT_B_TICK();
} L_end999: ;
}
static R9 r_RECORD_SIZE(R22 * p_T, R9 p_C) { RT_B_TICK(); 
R9 l_R_1006; memset(&l_R_1006, 0, sizeof l_R_1006);
S_R9(&l_R_1006, r_MK(rt_str("({ rt_int sz = 0;", 17)), 0);
R17 * l_SAVED_1007; memset(&l_SAVED_1007, 0, sizeof l_SAVED_1007);
l_SAVED_1007 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
((*(R7 *)rt_nil_check(g_W))).f_LDONE = NULL;
if ((!r_IS_RECORD_REP(p_T)))
{
S_R9(&l_R_1006, r_CAT(l_R_1006, r_LAYOUT_ALL(p_T, p_C, r_NO_TEXT(), ((rt_int)2LL))), 0);
S_R9(&l_R_1006, r_CAT(l_R_1006, r_LAYOUT_PARTS(p_T, p_C)), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_SAVED_1007;
{ R9 rv1008 = r_CATS(l_R_1006, rt_str(" sz; })", 7));
return rv1008; }
}
{
R17 * l_P_1009; memset(&l_P_1009, 0, sizeof l_P_1009);
l_P_1009 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A;
for (;;) {
if ((l_P_1009 == NULL)) goto L_end1010;
{
S_R9(&l_R_1006, r_CAT(l_R_1006, r_LAYOUT_SPEC(p_T, p_C, l_P_1009, r_NO_TEXT())), 0);
l_P_1009 = ((*(R17 *)rt_nil_check(l_P_1009))).f_NEXT;
}
RT_B_TICK();
} L_end1010: ;
}
S_R9(&l_R_1006, r_CAT(l_R_1006, r_LAYOUT_ALL(p_T, p_C, r_NO_TEXT(), ((rt_int)2LL))), 0);
S_R9(&l_R_1006, r_CAT(l_R_1006, r_LAYOUT_PARTS(p_T, p_C)), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_SAVED_1007;
{ R9 rv1011 = r_CATS(l_R_1006, rt_str(" sz; })", 7));
return rv1011; }
rt_raise(RT_X_INIT);
}
static R9 r_FIELD_SIZE_C(R24 * p_F, R9 p_C) { RT_B_TICK(); 
{ R9 rv1012 = (r_SIZE_OF(((*(R24 *)rt_nil_check(p_F))).f_T, r_FMT2(rt_str("(@).@", 5), p_C, ((*(R24 *)rt_nil_check(p_F))).f_CNAME))).f_C;
return rv1012; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_ALL(R22 * p_T, R9 p_C, R9 p_TAGN, rt_int p_MODE) { RT_B_TICK(); 
R9 l_R_1013; memset(&l_R_1013, 0, sizeof l_R_1013);
S_R9(&l_R_1013, r_MK(rt_str("", 0)), 0);
R24 * l_F_1014; memset(&l_F_1014, 0, sizeof l_F_1014);
l_F_1014 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1014 == NULL)) goto L_end1015;
{
if ((r_TEQ(((*(R24 *)rt_nil_check(l_F_1014))).f_TAGF, p_TAGN) && (!r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LDONE, ((*(R24 *)rt_nil_check(l_F_1014))).f_NAME))))
{
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(((*(R24 *)rt_nil_check(l_F_1014))).f_NAME, ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_1013, r_FMT4(rt_str("@ sz = rt_b_layout(sz, @, @);", 29), l_R_1013, r_FIELD_SIZE_C(l_F_1014, p_C), r_NUM(p_MODE), r_MK(rt_str("", 0))), 0);
}
else
{
S_R9(&l_R_1013, r_CAT(l_R_1013, r_FMT4(rt_str(" if (@) sz = rt_b_layout(sz, @, @);@", 36), r_VARIANT_COND(l_F_1014, p_T, p_C), r_FIELD_SIZE_C(l_F_1014, p_C), r_NUM(p_MODE), r_MK(rt_str("", 0)))), 0);
}
}
l_F_1014 = ((*(R24 *)rt_nil_check(l_F_1014))).f_NEXT;
}
RT_B_TICK();
} L_end1015: ;
{ R9 rv1016 = l_R_1013;
return rv1016; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_PARTS(R22 * p_T, R9 p_C) { RT_B_TICK(); 
R9 l_R_1017; memset(&l_R_1017, 0, sizeof l_R_1017);
S_R9(&l_R_1017, r_MK(rt_str("", 0)), 0);
R24 * l_F_1018; memset(&l_F_1018, 0, sizeof l_F_1018);
l_F_1018 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1018 == NULL)) goto L_end1019;
{
if ((((((*(R24 *)rt_nil_check(l_F_1018))).f_TAGF).f_LEN > ((rt_int)0LL)) && (!r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LDONE, r_CAT(r_MK(rt_str("|", 1)), ((*(R24 *)rt_nil_check(l_F_1018))).f_TAGF)))))
{
S_R9(&l_R_1017, r_CAT(l_R_1017, r_LAYOUT_VARIANTS(p_T, p_C, ((*(R24 *)rt_nil_check(l_F_1018))).f_TAGF)), 0);
}
l_F_1018 = ((*(R24 *)rt_nil_check(l_F_1018))).f_NEXT;
}
RT_B_TICK();
} L_end1019: ;
{ R9 rv1020 = l_R_1017;
return rv1020; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_SPEC(R22 * p_T, R9 p_C, R17 * p_P, R9 p_TAGN) { RT_B_TICK(); 
rt_int l_MODE_1021; memset(&l_MODE_1021, 0, sizeof l_MODE_1021);
l_MODE_1021 = ((rt_int)2LL);
R9 l_R_1022; memset(&l_R_1022, 0, sizeof l_R_1022);
S_R9(&l_R_1022, r_MK(rt_str("", 0)), 0);
if (((((*(R17 *)rt_nil_check(p_P))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_MODE_1021 = r_PACKING_VALUE(((*(R17 *)rt_nil_check(p_P))).f_NAME);
}
if ((((*(R17 *)rt_nil_check(p_P))).f_IV == ((rt_int)0LL)))
{
S_R9(&l_R_1022, r_LAYOUT_ALL(p_T, p_C, p_TAGN, l_MODE_1021), 0);
if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_1022, r_CAT(l_R_1022, r_LAYOUT_PARTS(p_T, p_C)), 0);
}
{ R9 rv1023 = l_R_1022;
return rv1023; }
}
{
R17 * l_E_1024; memset(&l_E_1024, 0, sizeof l_E_1024);
l_E_1024 = ((*(R17 *)rt_nil_check(p_P))).f_A;
for (;;) {
if ((l_E_1024 == NULL)) goto L_end1025;
{
if (((((*(R17 *)rt_nil_check(l_E_1024))).f_FL == ((rt_int)0LL)) || (((*(R17 *)rt_nil_check(l_E_1024))).f_FL == ((rt_int)2LL))))
{
{
R24 * l_F_1026; memset(&l_F_1026, 0, sizeof l_F_1026);
l_F_1026 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1026 == NULL)) goto L_end1027;
{
if ((r_TEQ(((*(R24 *)rt_nil_check(l_F_1026))).f_NAME, ((*(R17 *)rt_nil_check(l_E_1024))).f_NAME) && r_TEQ(((*(R24 *)rt_nil_check(l_F_1026))).f_TAGF, p_TAGN)))
{
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(((*(R24 *)rt_nil_check(l_F_1026))).f_NAME, ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (((((*(R17 *)rt_nil_check(l_E_1024))).f_FL == ((rt_int)2LL)) && r_ARG_MANIFEST(p_T, l_F_1026)))
{
}
else if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_1022, r_FMT3(rt_str("@ sz = rt_b_layout(sz, @, @);", 29), l_R_1022, r_FIELD_SIZE_C(l_F_1026, p_C), r_NUM(l_MODE_1021)), 0);
}
else
{
S_R9(&l_R_1022, r_CAT(l_R_1022, r_FMT4(rt_str(" if (@) sz = rt_b_layout(sz, @, @);@", 36), r_VARIANT_COND(l_F_1026, p_T, p_C), r_FIELD_SIZE_C(l_F_1026, p_C), r_NUM(l_MODE_1021), r_MK(rt_str("", 0)))), 0);
}
}
l_F_1026 = ((*(R24 *)rt_nil_check(l_F_1026))).f_NEXT;
}
RT_B_TICK();
} L_end1027: ;
}
}
else if ((((*(R17 *)rt_nil_check(l_E_1024))).f_FL == ((rt_int)1LL)))
{
S_R9(&l_R_1022, r_CAT(l_R_1022, r_LAYOUT_VARIANTS(p_T, p_C, ((*(R17 *)rt_nil_check(l_E_1024))).f_NAME)), 0);
}
else if ((((*(R17 *)rt_nil_check(l_E_1024))).f_FL == ((rt_int)5LL)))
{
S_R9(&l_R_1022, r_FMT3(rt_str("@ sz = rt_b_layout(sz, rt_b_pack_size(@, 7, @), ", 48), l_R_1022, r_NUM((r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1024))).f_B)).f_V), r_NUM(l_MODE_1021)), 0);
S_R9(&l_R_1022, r_FMT2(rt_str("@@);", 4), l_R_1022, r_NUM(l_MODE_1021)), 0);
}
else
{
S_R9(&l_R_1022, r_FMT3(rt_str("@ sz = rt_b_layout(sz, @, @);", 29), l_R_1022, r_NUM((r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1024))).f_B)).f_V), r_NUM(l_MODE_1021)), 0);
}
l_E_1024 = ((*(R17 *)rt_nil_check(l_E_1024))).f_NEXT;
}
RT_B_TICK();
} L_end1025: ;
}
{ R9 rv1028 = l_R_1022;
return rv1028; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_VARIANTS(R22 * p_T, R9 p_C, R9 p_TAGN) { RT_B_TICK(); 
R9 l_R_1029; memset(&l_R_1029, 0, sizeof l_R_1029);
S_R9(&l_R_1029, r_MK(rt_str("", 0)), 0);
R9 l_WORD_1030; memset(&l_WORD_1030, 0, sizeof l_WORD_1030);
S_R9(&l_WORD_1030, r_MK(rt_str(" if", 3)), 0);
rt_int l_ELSE_MODE_1031; memset(&l_ELSE_MODE_1031, 0, sizeof l_ELSE_MODE_1031);
l_ELSE_MODE_1031 = ((rt_int)2LL);
R24 * l_TF_1032; memset(&l_TF_1032, 0, sizeof l_TF_1032);
l_TF_1032 = r_FIND_FIELD(p_T, p_TAGN);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(r_CAT(r_MK(rt_str("|", 1)), p_TAGN), ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (r_IS_RECORD_REP(p_T))
{
{
R17 * l_V_1033; memset(&l_V_1033, 0, sizeof l_V_1033);
l_V_1033 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_C;
for (;;) {
if ((l_V_1033 == NULL)) goto L_end1034;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_V_1033))).f_NAME, p_TAGN))
{
{
R17 * l_S_1035; memset(&l_S_1035, 0, sizeof l_S_1035);
l_S_1035 = ((*(R17 *)rt_nil_check(l_V_1033))).f_A;
if ((!(((*(R17 *)rt_nil_check(l_V_1033))).f_B == NULL)))
{
l_ELSE_MODE_1031 = r_PACKING_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_1033))).f_B))).f_NAME);
}
for (;;) {
if ((l_S_1035 == NULL)) goto L_end1036;
{
{
R9 l_COND_1037; memset(&l_COND_1037, 0, sizeof l_COND_1037);
S_R9(&l_COND_1037, r_MK(rt_str("0", 1)), 0);
R17 * l_L_1038; memset(&l_L_1038, 0, sizeof l_L_1038);
l_L_1038 = ((*(R17 *)rt_nil_check(l_S_1035))).f_A;
R17 * l_P_1039; memset(&l_P_1039, 0, sizeof l_P_1039);
l_P_1039 = ((*(R17 *)rt_nil_check(l_S_1035))).f_B;
R17 * l_OUTER_1040; memset(&l_OUTER_1040, 0, sizeof l_OUTER_1040);
l_OUTER_1040 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
R9 l_BODY_1041; memset(&l_BODY_1041, 0, sizeof l_BODY_1041);
S_R9(&l_BODY_1041, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1038 == NULL)) goto L_end1042;
{
S_R9(&l_COND_1037, r_FMT4(rt_str("@ || (@).@ == @", 15), l_COND_1037, p_C, ((*(R24 *)rt_nil_check(l_TF_1032))).f_CNAME, (r_EXPR(l_L_1038, ((*(R24 *)rt_nil_check(l_TF_1032))).f_T)).f_C), 0);
l_L_1038 = ((*(R17 *)rt_nil_check(l_L_1038))).f_NEXT;
}
RT_B_TICK();
} L_end1042: ;
for (;;) {
if ((l_P_1039 == NULL)) goto L_end1043;
{
S_R9(&l_BODY_1041, r_CAT(l_BODY_1041, r_LAYOUT_SPEC(p_T, p_C, l_P_1039, p_TAGN)), 0);
l_P_1039 = ((*(R17 *)rt_nil_check(l_P_1039))).f_NEXT;
}
RT_B_TICK();
} L_end1043: ;
S_R9(&l_BODY_1041, r_CAT(l_BODY_1041, r_LAYOUT_ALL(p_T, p_C, p_TAGN, ((rt_int)2LL))), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_OUTER_1040;
S_R9(&l_R_1029, r_CAT(l_R_1029, r_FMT3(rt_str("@ (@) {@ }", 10), l_WORD_1030, l_COND_1037, l_BODY_1041)), 0);
S_R9(&l_WORD_1030, r_MK(rt_str(" else if", 8)), 0);
}
l_S_1035 = ((*(R17 *)rt_nil_check(l_S_1035))).f_NEXT;
}
RT_B_TICK();
} L_end1036: ;
}
}
l_V_1033 = ((*(R17 *)rt_nil_check(l_V_1033))).f_NEXT;
}
RT_B_TICK();
} L_end1034: ;
}
}
{
R17 * l_OUTER_1044; memset(&l_OUTER_1044, 0, sizeof l_OUTER_1044);
l_OUTER_1044 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
R9 l_REST_1045; memset(&l_REST_1045, 0, sizeof l_REST_1045);
S_R9(&l_REST_1045, r_LAYOUT_ALL(p_T, p_C, p_TAGN, l_ELSE_MODE_1031), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_OUTER_1044;
if (r_TEQS(l_WORD_1030, rt_str(" if", 3)))
{
{ R9 rv1046 = l_REST_1045;
return rv1046; }
}
{ R9 rv1047 = r_FMT2(rt_str("@ else {@ }", 11), l_R_1029, l_REST_1045);
return rv1047; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_ARG_MANIFEST(R22 * p_T, R24 * p_F) { RT_B_TICK(); 
R24 * l_G_1048; memset(&l_G_1048, 0, sizeof l_G_1048);
l_G_1048 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1049; memset(&l_A_1049, 0, sizeof l_A_1049);
l_A_1049 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_G_1048 == NULL) || (l_A_1049 == NULL))) goto L_end1050;
{
if ((!(((*(R24 *)rt_nil_check(l_G_1048))).f_KIND == ((rt_int)0LL))))
{
if ((l_G_1048 == p_F))
{
{ rt_int rv1051 = ((((*(R25 *)rt_nil_check(l_A_1049))).f_MLO).f_OK && (!((*(R25 *)rt_nil_check(l_A_1049))).f_ANYARG));
return rv1051; }
}
l_A_1049 = ((*(R25 *)rt_nil_check(l_A_1049))).f_NEXT;
}
l_G_1048 = ((*(R24 *)rt_nil_check(l_G_1048))).f_NEXT;
}
RT_B_TICK();
} L_end1050: ;
{ rt_int rv1052 = 0;
return rv1052; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ANY_TAG(R17 * p_A) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv1053 = 0;
return rv1053; }
}
{
R12 * l_Y_1054; memset(&l_Y_1054, 0, sizeof l_Y_1054);
l_Y_1054 = r_LOOKUP(((*(R17 *)rt_nil_check(p_A))).f_NAME);
if ((l_Y_1054 == NULL))
{
{ rt_int rv1055 = 0;
return rv1055; }
}
{ rt_int rv1056 = ((((*(R12 *)rt_nil_check(l_Y_1054))).f_KIND == g_Y_CONST) && r_TEQS(((*(R12 *)rt_nil_check(l_Y_1054))).f_ACCESS, rt_str("ANY", 3)));
return rv1056; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R17 * p_TS) { RT_B_TICK(); 
R17 * l_D_1057; memset(&l_D_1057, 0, sizeof l_D_1057);
l_D_1057 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_CLASS_1058; memset(&l_CLASS_1058, 0, sizeof l_CLASS_1058);
l_CLASS_1058 = NULL;
R21 * l_TARGS_1059; memset(&l_TARGS_1059, 0, sizeof l_TARGS_1059);
l_TARGS_1059 = NULL;
R25 * l_VARGS_1060; memset(&l_VARGS_1060, 0, sizeof l_VARGS_1060);
l_VARGS_1060 = NULL;
R25 * l_VTAIL_1061; memset(&l_VTAIL_1061, 0, sizeof l_VTAIL_1061);
l_VTAIL_1061 = NULL;
R17 * l_A_1062; memset(&l_A_1062, 0, sizeof l_A_1062);
l_A_1062 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R17 * l_F_1063; memset(&l_F_1063, 0, sizeof l_F_1063);
l_F_1063 = ((*(R17 *)rt_nil_check(l_D_1057))).f_A;
for (;;) {
if ((l_F_1063 == NULL)) goto L_end1064;
{
{
R17 * l_N_1065; memset(&l_N_1065, 0, sizeof l_N_1065);
l_N_1065 = ((*(R17 *)rt_nil_check(l_F_1063))).f_A;
for (;;) {
if ((l_N_1065 == NULL)) goto L_end1066;
{
if ((l_A_1062 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R17 *)rt_nil_check(l_F_1063))).f_B == NULL))
{
{
R21 * l_B_1067; memset(&l_B_1067, 0, sizeof l_B_1067);
l_B_1067 = ((R21 *)rt_b_new(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_B_1067)), ({ R21 rc1068; memset(&rc1068, 0, sizeof rc1068);  S_R9(&rc1068.f_NAME, ((*(R17 *)rt_nil_check(l_N_1065))).f_NAME, 0); rc1068.f_T = r_ARG_TYPE(l_A_1062); S_R9(&rc1068.f_C, r_NO_TEXT(), 0); rc1068.f_HASMV = 0; rc1068.f_MV = ((rt_int)0LL); rc1068.f_R = NULL; rc1068.f_NEXT = l_TARGS_1059; rc1068; }), 0);
l_TARGS_1059 = l_B_1067;
}
}
else
{
{
R25 * l_V_1069; memset(&l_V_1069, 0, sizeof l_V_1069);
l_V_1069 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_V_1069)), ({ R25 rc1070; memset(&rc1070, 0, sizeof rc1070);  S_R9(&rc1070.f_LO, r_NO_TEXT(), 0); S_R9(&rc1070.f_HI, r_NO_TEXT(), 0); S_R23(&rc1070.f_MLO, r_NO_MVAL(), 0); S_R23(&rc1070.f_MHI, r_NO_MVAL(), 0); rc1070.f_ANYARG = 0; rc1070.f_NEXT = NULL; rc1070; }), 0);
if (((((*(R17 *)rt_nil_check(l_A_1062))).f_KIND == g_N_ANY) || r_IS_ANY_TAG(l_A_1062)))
{
if ((!(((*(R17 *)rt_nil_check(l_F_1063))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_1062))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R25 *)rt_nil_check(l_V_1069))).f_ANYARG = 1;
}
else if ((((*(R17 *)rt_nil_check(l_A_1062))).f_KIND == g_N_DONTCARE))
{
((*(R25 *)rt_nil_check(l_V_1069))).f_ANYARG = 1;
S_R9(&((*(R25 *)rt_nil_check(l_V_1069))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R17 *)rt_nil_check(l_A_1062))).f_KIND == g_TS_GEN))
{
((*(R25 *)rt_nil_check(l_V_1069))).f_ANYARG = 1;
S_R9(&((*(R25 *)rt_nil_check(l_V_1069))).f_HI, r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(l_A_1062))).f_NAME), 0);
}
else
{
{
R22 * l_FT_1071; memset(&l_FT_1071, 0, sizeof l_FT_1071);
l_FT_1071 = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_1063))).f_B);
S_R9(&((*(R25 *)rt_nil_check(l_V_1069))).f_LO, r_CONVERT(r_EXPR(l_A_1062, l_FT_1071), l_FT_1071, ((*(R17 *)rt_nil_check(l_A_1062))).f_LINE, r_NO_TEXT()), 0);
S_R23(&((*(R25 *)rt_nil_check(l_V_1069))).f_MLO, r_ENUM_MANIFEST(l_A_1062, l_FT_1071), 0);
if ((((((*(R25 *)rt_nil_check(l_V_1069))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_FT_1071))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_FT_1071))).f_MHI).f_OK))
{
if ((((((*(R25 *)rt_nil_check(l_V_1069))).f_MLO).f_V < (((*(R22 *)rt_nil_check(l_FT_1071))).f_MLO).f_V) || ((((*(R25 *)rt_nil_check(l_V_1069))).f_MLO).f_V > (((*(R22 *)rt_nil_check(l_FT_1071))).f_MHI).f_V)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_1062))).f_LINE, rt_str("the argument is outside the range of the parameter (3.9.1)", 58));
}
}
if (((((*(R17 *)rt_nil_check(l_F_1063))).f_IV == ((rt_int)1LL)) && (!(((*(R25 *)rt_nil_check(l_V_1069))).f_MLO).f_OK)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_1062))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_1061 == NULL))
{
l_VARGS_1060 = l_V_1069;
}
else
{
((*(R25 *)rt_nil_check(l_VTAIL_1061))).f_NEXT = l_V_1069;
}
l_VTAIL_1061 = l_V_1069;
}
}
l_A_1062 = ((*(R17 *)rt_nil_check(l_A_1062))).f_NEXT;
l_N_1065 = ((*(R17 *)rt_nil_check(l_N_1065))).f_NEXT;
}
RT_B_TICK();
} L_end1066: ;
}
l_F_1063 = ((*(R17 *)rt_nil_check(l_F_1063))).f_NEXT;
}
RT_B_TICK();
} L_end1064: ;
if ((!(l_A_1062 == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
{
R12 * l_R_1072; memset(&l_R_1072, 0, sizeof l_R_1072);
l_R_1072 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_1072 == NULL)) goto L_end1073;
{
if (((((*(R12 *)rt_nil_check(l_R_1072))).f_DECL == l_D_1057) && r_SAME_BINDS(((*(R12 *)rt_nil_check(l_R_1072))).f_BINDINGS, l_TARGS_1059)))
{
l_CLASS_1058 = ((*(R12 *)rt_nil_check(l_R_1072))).f_T;
goto L_end1073;
}
l_R_1072 = ((*(R12 *)rt_nil_check(l_R_1072))).f_INSTANCES;
}
RT_B_TICK();
} L_end1073: ;
}
if ((l_CLASS_1058 == NULL))
{
{
R12 * l_R_1074; memset(&l_R_1074, 0, sizeof l_R_1074);
l_R_1074 = r_NEW_SYM(g_Y_TYPE, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R21 * l_B_1075; memset(&l_B_1075, 0, sizeof l_B_1075);
l_B_1075 = l_TARGS_1059;
R21 * l_SAVED_1076; memset(&l_SAVED_1076, 0, sizeof l_SAVED_1076);
l_SAVED_1076 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
rt_int l_ENTERED_1077; memset(&l_ENTERED_1077, 0, sizeof l_ENTERED_1077);
((*(R12 *)rt_nil_check(l_R_1074))).f_DECL = l_D_1057;
((*(R12 *)rt_nil_check(l_R_1074))).f_BINDINGS = l_TARGS_1059;
((*(R12 *)rt_nil_check(l_R_1074))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
((*(R7 *)rt_nil_check(g_W))).f_RECS = l_R_1074;
l_ENTERED_1077 = r_ENTER_MODULE_FOR(p_Y);
r_OPEN_SCOPE();
for (;;) {
if ((l_B_1075 == NULL)) goto L_end1078;
{
{
R12 * l_TY_1079; memset(&l_TY_1079, 0, sizeof l_TY_1079);
l_TY_1079 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_B_1075))).f_NAME);
((*(R12 *)rt_nil_check(l_TY_1079))).f_T = ((*(R21 *)rt_nil_check(l_B_1075))).f_T;
r_DEFINE(l_TY_1079, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_1075 = ((*(R21 *)rt_nil_check(l_B_1075))).f_NEXT;
}
RT_B_TICK();
} L_end1078: ;
l_F_1063 = ((*(R17 *)rt_nil_check(l_D_1057))).f_A;
for (;;) {
if ((l_F_1063 == NULL)) goto L_end1080;
{
if ((!(((*(R17 *)rt_nil_check(l_F_1063))).f_B == NULL)))
{
{
R17 * l_N_1081; memset(&l_N_1081, 0, sizeof l_N_1081);
l_N_1081 = ((*(R17 *)rt_nil_check(l_F_1063))).f_A;
for (;;) {
if ((l_N_1081 == NULL)) goto L_end1082;
{
{
R12 * l_P_1083; memset(&l_P_1083, 0, sizeof l_P_1083);
l_P_1083 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(l_N_1081))).f_NAME);
((*(R12 *)rt_nil_check(l_P_1083))).f_T = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_1063))).f_B);
S_R9(&((*(R12 *)rt_nil_check(l_P_1083))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), r_CID(((*(R17 *)rt_nil_check(l_N_1081))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_P_1083))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_P_1083))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_1083, ((*(R17 *)rt_nil_check(l_F_1063))).f_LINE);
}
l_N_1081 = ((*(R17 *)rt_nil_check(l_N_1081))).f_NEXT;
}
RT_B_TICK();
} L_end1082: ;
}
}
l_F_1063 = ((*(R17 *)rt_nil_check(l_F_1063))).f_NEXT;
}
RT_B_TICK();
} L_end1080: ;
if ((l_TARGS_1059 == NULL))
{
l_CLASS_1058 = r_RESOLVE_RECORD(((*(R17 *)rt_nil_check(l_D_1057))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R17 *)rt_nil_check(l_D_1057))).f_A);
}
else
{
l_CLASS_1058 = r_RESOLVE_RECORD(((*(R17 *)rt_nil_check(l_D_1057))).f_B, r_NO_TEXT(), p_Y, ((*(R17 *)rt_nil_check(l_D_1057))).f_A);
}
S_R9(&((*(R22 *)rt_nil_check(l_CLASS_1058))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R12 *)rt_nil_check(l_R_1074))).f_T = l_CLASS_1058;
r_CLOSE_SCOPE();
if (l_ENTERED_1077)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1076;
}
}
{
R22 * l_T_1084; memset(&l_T_1084, 0, sizeof l_T_1084);
l_T_1084 = r_COPY_TYP(l_CLASS_1058);
((*(R22 *)rt_nil_check(l_T_1084))).f_ARGS = l_VARGS_1060;
{ R22 * rv1085 = l_T_1084;
return rv1085; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_1086; memset(&l_P_1086, 0, sizeof l_P_1086);
l_P_1086 = p_A;
R21 * l_Q_1087; memset(&l_Q_1087, 0, sizeof l_Q_1087);
l_Q_1087 = p_B;
for (;;) {
if (((l_P_1086 == NULL) || (l_Q_1087 == NULL))) goto L_end1088;
{
if ((((!r_SAME_TYPE(((*(R21 *)rt_nil_check(l_P_1086))).f_T, ((*(R21 *)rt_nil_check(l_Q_1087))).f_T)) || (!r_SAME_LENGTH(((*(R21 *)rt_nil_check(l_P_1086))).f_T, ((*(R21 *)rt_nil_check(l_Q_1087))).f_T))) || (!r_SAME_REPS(((*(R21 *)rt_nil_check(l_P_1086))).f_T, ((*(R21 *)rt_nil_check(l_Q_1087))).f_T))))
{
{ rt_int rv1089 = 0;
return rv1089; }
}
l_P_1086 = ((*(R21 *)rt_nil_check(l_P_1086))).f_NEXT;
l_Q_1087 = ((*(R21 *)rt_nil_check(l_Q_1087))).f_NEXT;
}
RT_B_TICK();
} L_end1088: ;
{ rt_int rv1090 = ((l_P_1086 == NULL) && (l_Q_1087 == NULL));
return rv1090; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R22 * p_T) { RT_B_TICK(); 
R25 * l_A_1091; memset(&l_A_1091, 0, sizeof l_A_1091);
l_A_1091 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_1091 == NULL)) goto L_end1092;
{
if (((*(R25 *)rt_nil_check(l_A_1091))).f_ANYARG)
{
{ rt_int rv1093 = 1;
return rv1093; }
}
l_A_1091 = ((*(R25 *)rt_nil_check(l_A_1091))).f_NEXT;
}
RT_B_TICK();
} L_end1092: ;
{ rt_int rv1094 = 0;
return rv1094; }
rt_raise(RT_X_INIT);
}
static R9 r_VARIANT_COND(R24 * p_F, R22 * p_T, R9 p_SELF) { RT_B_TICK(); 
R17 * l_L_1095; memset(&l_L_1095, 0, sizeof l_L_1095);
l_L_1095 = ((*(R24 *)rt_nil_check(p_F))).f_LABELS;
R9 l_C_1096; memset(&l_C_1096, 0, sizeof l_C_1096);
S_R9(&l_C_1096, r_MK(rt_str("0", 1)), 0);
R24 * l_TF_1097; memset(&l_TF_1097, 0, sizeof l_TF_1097);
l_TF_1097 = r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_1095 == NULL)) goto L_end1098;
{
if ((((*(R17 *)rt_nil_check(l_L_1095))).f_KIND == g_N_RANGE))
{
S_R9(&l_C_1096, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_1096, p_SELF, ((*(R24 *)rt_nil_check(l_TF_1097))).f_CNAME), 0);
S_R9(&l_C_1096, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_1096, (r_EXPR(((*(R17 *)rt_nil_check(l_L_1095))).f_A, ((*(R24 *)rt_nil_check(l_TF_1097))).f_T)).f_C, p_SELF, ((*(R24 *)rt_nil_check(l_TF_1097))).f_CNAME), 0);
S_R9(&l_C_1096, r_FMT2(rt_str("@@)", 3), l_C_1096, (r_EXPR(((*(R17 *)rt_nil_check(l_L_1095))).f_B, ((*(R24 *)rt_nil_check(l_TF_1097))).f_T)).f_C), 0);
}
else
{
S_R9(&l_C_1096, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_1096, p_SELF, ((*(R24 *)rt_nil_check(l_TF_1097))).f_CNAME, (r_EXPR(l_L_1095, ((*(R24 *)rt_nil_check(l_TF_1097))).f_T)).f_C), 0);
}
l_L_1095 = ((*(R17 *)rt_nil_check(l_L_1095))).f_NEXT;
}
RT_B_TICK();
} L_end1098: ;
{ R9 rv1099 = r_FMT1(rt_str("(@)", 3), l_C_1096);
return rv1099; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R22 * p_T) { RT_B_TICK(); 
R9 l_C_1100; memset(&l_C_1100, 0, sizeof l_C_1100);
S_R9(&l_C_1100, ((*(R22 *)rt_nil_check(p_T))).f_CNAME, 0);
R24 * l_F_1101; memset(&l_F_1101, 0, sizeof l_F_1101);
l_F_1101 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_BODY_1102; memset(&l_BODY_1102, 0, sizeof l_BODY_1102);
S_R9(&l_BODY_1102, r_MK(rt_str("", 0)), 0);
R9 l_ASSIGN_1103; memset(&l_ASSIGN_1103, 0, sizeof l_ASSIGN_1103);
S_R9(&l_ASSIGN_1103, r_MK(rt_str("", 0)), 0);
R9 l_COPY_1104; memset(&l_COPY_1104, 0, sizeof l_COPY_1104);
S_R9(&l_COPY_1104, r_MK(rt_str("", 0)), 0);
R9 l_EQ_1105; memset(&l_EQ_1105, 0, sizeof l_EQ_1105);
S_R9(&l_EQ_1105, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_1101 == NULL)) goto L_end1106;
{
S_R9(&l_BODY_1102, r_FMT3(rt_str("@ @ @;", 6), l_BODY_1102, r_CTYPE(((*(R24 *)rt_nil_check(l_F_1101))).f_T), ((*(R24 *)rt_nil_check(l_F_1101))).f_CNAME), 0);
S_R9(&l_COPY_1104, r_FMT3(rt_str("@ d.@ = @;", 10), l_COPY_1104, ((*(R24 *)rt_nil_check(l_F_1101))).f_CNAME, r_COPY_OF(((*(R24 *)rt_nil_check(l_F_1101))).f_T, r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_1101))).f_CNAME))), 0);
if ((((*(R24 *)rt_nil_check(l_F_1101))).f_KIND == ((rt_int)1LL)))
{
S_R9(&l_ASSIGN_1103, r_FMT2(rt_str("@ if (!(@)) rt_raise(RT_B_TYPE_MISMATCH);", 41), l_ASSIGN_1103, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1101))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_1101))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_1101))).f_CNAME))), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1101))).f_KIND == ((rt_int)2LL)))
{
S_R9(&l_ASSIGN_1103, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_1103, ((*(R24 *)rt_nil_check(l_F_1101))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_1101))).f_CNAME, ((*(R24 *)rt_nil_check(l_F_1101))).f_CNAME), 0);
}
else
{
S_R9(&l_ASSIGN_1103, r_FMT2(rt_str("@ @", 3), l_ASSIGN_1103, r_ASSIGN_CODE(((*(R24 *)rt_nil_check(l_F_1101))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R24 *)rt_nil_check(l_F_1101))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R24 *)rt_nil_check(l_F_1101))).f_CNAME))), 0);
}
if (((((*(R24 *)rt_nil_check(l_F_1101))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R9(&l_EQ_1105, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1105, r_VARIANT_COND(l_F_1101, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1101))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_1101))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_1101))).f_CNAME))), 0);
}
else
{
S_R9(&l_EQ_1105, r_FMT2(rt_str("@ && @", 6), l_EQ_1105, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1101))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R24 *)rt_nil_check(l_F_1101))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R24 *)rt_nil_check(l_F_1101))).f_CNAME))), 0);
}
l_F_1101 = ((*(R24 *)rt_nil_check(l_F_1101))).f_NEXT;
}
RT_B_TICK();
} L_end1106: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_1100, l_BODY_1102));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_1100, l_C_1100, l_C_1100));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_1100, l_C_1100, l_C_1100));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_1100, l_C_1100, l_C_1100, l_ASSIGN_1103));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_1100, l_C_1100, l_C_1100, l_EQ_1105));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_1100, l_C_1100, l_C_1100));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s;", 28), l_C_1100, l_C_1100, l_C_1100, l_C_1100));
r_EMIT(g_O_HELPERS, r_FMT1(rt_str("@ return d; }", 13), l_COPY_1104));
}
static R9 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R9 l_ET_C_1107; memset(&l_ET_C_1107, 0, sizeof l_ET_C_1107);
S_R9(&l_ET_C_1107, r_CTYPE(p_ELEM), 0);
R9 l_KEY_1108; memset(&l_KEY_1108, 0, sizeof l_KEY_1108);
S_R9(&l_KEY_1108, r_FMT3(rt_str("@/@/@", 5), l_ET_C_1107, r_NUM(p_DIMS), r_NUM(((*(R22 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R12 * l_Y_1109; memset(&l_Y_1109, 0, sizeof l_Y_1109);
l_Y_1109 = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_1109 == NULL)) goto L_end1110;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_1109))).f_NAME, l_KEY_1108) && r_SAME_TYPE(((*(R12 *)rt_nil_check(l_Y_1109))).f_T, p_ELEM)))
{
{ R9 rv1111 = ((*(R12 *)rt_nil_check(l_Y_1109))).f_ACCESS;
return rv1111; }
}
l_Y_1109 = ((*(R12 *)rt_nil_check(l_Y_1109))).f_INSTANCES;
}
RT_B_TICK();
} L_end1110: ;
l_Y_1109 = r_NEW_SYM(g_Y_TYPE, l_KEY_1108);
((*(R12 *)rt_nil_check(l_Y_1109))).f_T = p_ELEM;
S_R9(&((*(R12 *)rt_nil_check(l_Y_1109))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R12 *)rt_nil_check(l_Y_1109))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R7 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_1109;
{
R9 l_C_1112; memset(&l_C_1112, 0, sizeof l_C_1112);
S_R9(&l_C_1112, ((*(R12 *)rt_nil_check(l_Y_1109))).f_ACCESS, 0);
R9 l_D_1113; memset(&l_D_1113, 0, sizeof l_D_1113);
S_R9(&l_D_1113, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_1112, l_C_1112));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_1112, l_D_1113, l_D_1113, l_ET_C_1107));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_1112, l_C_1112, l_C_1112));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_1112, l_C_1112, l_C_1112));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_1112, l_C_1112, l_C_1112, l_D_1113));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_1113, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_1112, l_C_1112, l_C_1112, l_D_1113));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_1113, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_1112, l_C_1112, l_C_1112));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s; ", 29), l_C_1112, l_C_1112, l_C_1112, l_C_1112));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("rt_int n = rt_b_extent(@, s.lo, s.hi); d.p = rt_alloc((n > 0 \? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = @; return d; }", 140), l_D_1113, r_COPY_OF(p_ELEM, r_MK(rt_str("s.p[i]", 6)))));
}
{ R9 rv1114 = ((*(R12 *)rt_nil_check(l_Y_1109))).f_ACCESS;
return rv1114; }
rt_raise(RT_X_INIT);
}
static R9 r_INIT_CODE(R22 * p_T, R9 p_LV) { RT_B_TICK(); 
rt_int l_K_1115; memset(&l_K_1115, 0, sizeof l_K_1115);
l_K_1115 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1115 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1116 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv1116; }
}
{ R9 rv1117 = r_FMT2(rt_str("@ = rt_b_str_new(@, 0);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv1117; }
}
else if ((l_K_1115 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1118 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv1118; }
}
{ R9 rv1119 = r_FMT2(rt_str("@ = rt_b_str_new(@, 1);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv1119; }
}
else if ((l_K_1115 == g_T_SEM))
{
{ R9 rv1120 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv1120; }
}
else if ((l_K_1115 == g_T_ABS))
{
{ R9 rv1121 = r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv1121; }
}
else if ((l_K_1115 == g_T_ARR))
{
{
R25 * l_B_1122; memset(&l_B_1122, 0, sizeof l_B_1122);
l_B_1122 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_1123; memset(&l_I_1123, 0, sizeof l_I_1123);
l_I_1123 = ((rt_int)0LL);
R9 l_R_1124; memset(&l_R_1124, 0, sizeof l_R_1124);
S_R9(&l_R_1124, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_1122 == NULL)) goto L_end1125;
{
S_R9(&l_R_1124, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_1124, p_LV, r_NUM(l_I_1123), ((*(R25 *)rt_nil_check(l_B_1122))).f_LO), 0);
S_R9(&l_R_1124, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_1124, p_LV, r_NUM(l_I_1123), ((*(R25 *)rt_nil_check(l_B_1122))).f_HI), 0);
l_I_1123 = rt_add(l_I_1123, ((rt_int)1LL));
l_B_1122 = ((*(R25 *)rt_nil_check(l_B_1122))).f_NEXT;
}
RT_B_TICK();
} L_end1125: ;
S_R9(&l_R_1124, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_1124, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
S_R9(&l_R_1124, r_FMT4(rt_str("@ @.p = rt_b_array_alloc(n, sizeof *@.p);", 41), l_R_1124, p_LV, p_LV, p_LV), 0);
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_ELEM))
{
{
R9 l_IV_1126; memset(&l_IV_1126, 0, sizeof l_IV_1126);
S_R9(&l_IV_1126, r_NEW_NAME(rt_str("i", 1)), 0);
S_R9(&l_R_1124, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_1124, l_IV_1126, l_IV_1126, l_IV_1126), 0);
S_R9(&l_R_1124, r_FMT2(rt_str("@ @ }", 5), l_R_1124, r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_1126))), 0);
}
}
{ R9 rv1127 = r_CATS(l_R_1124, rt_str(" }", 2));
return rv1127; }
}
}
else if ((l_K_1115 == g_T_REC))
{
{
R24 * l_F_1128; memset(&l_F_1128, 0, sizeof l_F_1128);
l_F_1128 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1129; memset(&l_A_1129, 0, sizeof l_A_1129);
l_A_1129 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R9 l_R_1130; memset(&l_R_1130, 0, sizeof l_R_1130);
S_R9(&l_R_1130, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_1128 == NULL)) goto L_end1131;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1128))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_1129 == NULL)))
{
if ((!((*(R25 *)rt_nil_check(l_A_1129))).f_ANYARG))
{
S_R9(&l_R_1130, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_1130, p_LV, ((*(R24 *)rt_nil_check(l_F_1128))).f_CNAME, ((*(R25 *)rt_nil_check(l_A_1129))).f_LO), 0);
}
else if (((((*(R24 *)rt_nil_check(l_F_1128))).f_KIND == ((rt_int)2LL)) && ((((*(R25 *)rt_nil_check(l_A_1129))).f_HI).f_LEN == ((rt_int)0LL))))
{
S_R9(&l_R_1130, r_FMT3(rt_str("@ @.@ = INT64_MIN;", 18), l_R_1130, p_LV, ((*(R24 *)rt_nil_check(l_F_1128))).f_CNAME), 0);
}
l_A_1129 = ((*(R25 *)rt_nil_check(l_A_1129))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_1128))).f_T))
{
S_R9(&l_R_1130, r_FMT2(rt_str("@ @", 3), l_R_1130, r_SUBST_SELF(r_INIT_CODE(((*(R24 *)rt_nil_check(l_F_1128))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R24 *)rt_nil_check(l_F_1128))).f_CNAME)), p_LV)), 0);
}
l_F_1128 = ((*(R24 *)rt_nil_check(l_F_1128))).f_NEXT;
}
RT_B_TICK();
} L_end1131: ;
{ R9 rv1132 = l_R_1130;
return rv1132; }
}
}
{ R9 rv1133 = r_NO_TEXT();
return rv1133; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1134; memset(&l_K_1134, 0, sizeof l_K_1134);
l_K_1134 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_1134 == g_T_STR) || (l_K_1134 == g_T_BITS)) || (l_K_1134 == g_T_ARR)) || (l_K_1134 == g_T_SEM)))
{
{ rt_int rv1135 = 1;
return rv1135; }
}
else if ((l_K_1134 == g_T_ABS))
{
{ rt_int rv1136 = r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1136; }
}
else if ((l_K_1134 == g_T_REC))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv1137 = 1;
return rv1137; }
}
{
R24 * l_F_1138; memset(&l_F_1138, 0, sizeof l_F_1138);
l_F_1138 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1138 == NULL)) goto L_end1139;
{
if (r_NEEDS_INIT(((*(R24 *)rt_nil_check(l_F_1138))).f_T))
{
{ rt_int rv1140 = 1;
return rv1140; }
}
l_F_1138 = ((*(R24 *)rt_nil_check(l_F_1138))).f_NEXT;
}
RT_B_TICK();
} L_end1139: ;
}
}
{ rt_int rv1141 = 0;
return rv1141; }
rt_raise(RT_X_INIT);
}
static R9 r_COPY_OF(R22 * p_T, R9 p_V) { RT_B_TICK(); 
rt_int l_K_1142; memset(&l_K_1142, 0, sizeof l_K_1142);
l_K_1142 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1142 == g_T_STR) || (l_K_1142 == g_T_BITS)))
{
{ R9 rv1143 = r_FMT1(rt_str("rt_str_copy(@)", 14), p_V);
return rv1143; }
}
else if ((l_K_1142 == g_T_ABS))
{
{ R9 rv1144 = r_COPY_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_V);
return rv1144; }
}
else if (((l_K_1142 == g_T_ARR) || (l_K_1142 == g_T_REC)))
{
{ R9 rv1145 = r_FMT2(rt_str("C_@(@)", 6), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_V);
return rv1145; }
}
{ R9 rv1146 = p_V;
return rv1146; }
rt_raise(RT_X_INIT);
}
static R9 r_ASSIGN_CODE(R22 * p_T, R9 p_LV, R9 p_RV) { RT_B_TICK(); 
rt_int l_K_1147; memset(&l_K_1147, 0, sizeof l_K_1147);
l_K_1147 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1147 == g_T_STR) || (l_K_1147 == g_T_BITS)))
{
{ R9 rv1148 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv1148; }
}
else if ((l_K_1147 == g_T_ABS))
{
{ R9 rv1149 = r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv1149; }
}
else if ((l_K_1147 == g_T_SEM))
{
{ R9 rv1150 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv1150; }
}
else if ((l_K_1147 == g_T_ARR))
{
{ R9 rv1151 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1151; }
}
else if ((l_K_1147 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R9 rv1152 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1152; }
}
{ R9 rv1153 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1153; }
}
{ R9 rv1154 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv1154; }
rt_raise(RT_X_INIT);
}
static R9 r_EQUAL_CODE(R22 * p_T, R9 p_A, R9 p_B) { RT_B_TICK(); 
rt_int l_K_1155; memset(&l_K_1155, 0, sizeof l_K_1155);
l_K_1155 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1155 == g_T_STR) || (l_K_1155 == g_T_BITS)))
{
{ R9 rv1156 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv1156; }
}
else if ((l_K_1155 == g_T_ABS))
{
{ R9 rv1157 = r_EQUAL_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv1157; }
}
else if (((l_K_1155 == g_T_ARR) || (l_K_1155 == g_T_REC)))
{
{ R9 rv1158 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv1158; }
}
else if ((l_K_1155 == g_T_SEM))
{
{ R9 rv1159 = r_MK(rt_str("0", 1));
return rv1159; }
}
{ R9 rv1160 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv1160; }
rt_raise(RT_X_INIT);
}
static R9 r_RANGE_CHECK(R22 * p_T, R9 p_V, R9 p_SELF) { RT_B_TICK(); 
if (((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))) || ((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS))
{
{ R9 rv1161 = p_V;
return rv1161; }
}
if ((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R9 rv1162 = p_V;
return rv1162; }
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R9 rv1163 = p_V;
return rv1163; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R9 rv1164 = r_FMT3(rt_str("rt_b_tfrange(@, @, @)", 21), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1164; }
}
{ R9 rv1165 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1165; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R9 rv1166 = r_FMT3(rt_str("rt_b_trange(@, @, @)", 20), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1166; }
}
{ R9 rv1167 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1167; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv1168 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv1168; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv1169 = 1;
return rv1169; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv1170 = r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv1170; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv1171 = r_SAME_CLASS(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1171; }
}
if ((!(((*(R22 *)rt_nil_check(p_A))).f_KIND == ((*(R22 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv1172 = 0;
return rv1172; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv1173 = (((*(R22 *)rt_nil_check(p_A))).f_BASE == ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1173; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1174 = ((((*(R22 *)rt_nil_check(p_A))).f_DIMS == ((*(R22 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM));
return rv1174; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv1175 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv1175; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1176 = ((r_ORIGINAL(((*(R22 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R22 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE));
return rv1176; }
}
{ rt_int rv1177 = 1;
return rv1177; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv1178 = 1;
return rv1178; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv1179 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv1179; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv1180 = r_SAME_TYPE(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1180; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv1181 = 0;
return rv1181; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv1182 = (((*(R22 *)rt_nil_check(p_A))).f_SCALE == ((*(R22 *)rt_nil_check(p_B))).f_SCALE);
return rv1182; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1183 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM);
return rv1183; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv1184 = r_SAME_ARGS(((*(R22 *)rt_nil_check(p_A))).f_ARGS, ((*(R22 *)rt_nil_check(p_B))).f_ARGS);
return rv1184; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1185 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1185; }
}
{ rt_int rv1186 = 1;
return rv1186; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R25 * p_B) { RT_B_TICK(); 
if (((((*(R25 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1187 = 0;
return rv1187; }
}
{ rt_int rv1188 = r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(p_B))).f_HI);
return rv1188; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R25 * p_A, R25 * p_B) { RT_B_TICK(); 
R25 * l_P_1189; memset(&l_P_1189, 0, sizeof l_P_1189);
l_P_1189 = p_A;
R25 * l_Q_1190; memset(&l_Q_1190, 0, sizeof l_Q_1190);
l_Q_1190 = p_B;
for (;;) {
if (((l_P_1189 == NULL) || (l_Q_1190 == NULL))) goto L_end1191;
{
if ((r_IS_GEN_ARG(l_P_1189) || r_IS_GEN_ARG(l_Q_1190)))
{
}
else if ((!(((*(R25 *)rt_nil_check(l_P_1189))).f_ANYARG == ((*(R25 *)rt_nil_check(l_Q_1190))).f_ANYARG)))
{
{ rt_int rv1192 = 0;
return rv1192; }
}
if (((((*(R25 *)rt_nil_check(l_P_1189))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_1190))).f_MLO).f_OK))
{
if ((!((((*(R25 *)rt_nil_check(l_P_1189))).f_MLO).f_V == (((*(R25 *)rt_nil_check(l_Q_1190))).f_MLO).f_V)))
{
{ rt_int rv1193 = 0;
return rv1193; }
}
}
l_P_1189 = ((*(R25 *)rt_nil_check(l_P_1189))).f_NEXT;
l_Q_1190 = ((*(R25 *)rt_nil_check(l_Q_1190))).f_NEXT;
}
RT_B_TICK();
} L_end1191: ;
{ rt_int rv1194 = ((l_P_1189 == NULL) && (l_Q_1190 == NULL));
return rv1194; }
rt_raise(RT_X_INIT);
}
static R9 r_FRAME_OF(rt_int p_LEVEL) { RT_B_TICK(); 
R19 * l_CS_1195; memset(&l_CS_1195, 0, sizeof l_CS_1195);
l_CS_1195 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R9 l_T_1196; memset(&l_T_1196, 0, sizeof l_T_1196);
rt_int l_LEV_1197; memset(&l_LEV_1197, 0, sizeof l_LEV_1197);
if ((((*(R19 *)rt_nil_check(l_CS_1195))).f_LEVEL == p_LEVEL))
{
{ R9 rv1198 = r_MK(rt_str("F", 1));
return rv1198; }
}
if (((*(R19 *)rt_nil_check(l_CS_1195))).f_FRAMED)
{
S_R9(&l_T_1196, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R9(&l_T_1196, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_1197 = rt_sub(((*(R19 *)rt_nil_check(l_CS_1195))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_1197 <= p_LEVEL)) goto L_end1199;
{
S_R9(&l_T_1196, r_CATS(l_T_1196, rt_str("->up", 4)), 0);
l_LEV_1197 = rt_sub(l_LEV_1197, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1199: ;
{ R9 rv1200 = l_T_1196;
return rv1200; }
rt_raise(RT_X_INIT);
}
static R9 r_OBJ_ACCESS(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R12 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R9 rv1201 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1201; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1202 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1202; }
}
if (((*(R12 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R9 rv1203 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1203; }
}
{ R9 rv1204 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1204; }
rt_raise(RT_X_INIT);
}
static R9 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE) { RT_B_TICK(); 
R19 * l_CS_1205; memset(&l_CS_1205, 0, sizeof l_CS_1205);
l_CS_1205 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R22 * l_T_1206; memset(&l_T_1206, 0, sizeof l_T_1206);
l_T_1206 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
R9 l_CN_1207; memset(&l_CN_1207, 0, sizeof l_CN_1207);
if ((((((*(R19 *)rt_nil_check(l_CS_1205))).f_LEVEL == ((rt_int)0LL)) && ((((*(R7 *)rt_nil_check(g_W))).f_SEPSEG).f_LEN > ((rt_int)0LL))) && rt_b_eq(p_BASE, rt_str("", 0))))
{
((*(R7 *)rt_nil_check(g_W))).f_SEPV = rt_add(((*(R7 *)rt_nil_check(g_W))).f_SEPV, ((rt_int)1LL));
S_R9(&l_CN_1207, r_FMT3(rt_str("bs_@_v@_@", 9), r_CID(((*(R7 *)rt_nil_check(g_W))).f_SEPSEG), r_NUM(((*(R7 *)rt_nil_check(g_W))).f_SEPV), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
if (((*(R7 *)rt_nil_check(g_W))).f_EXTSEG)
{
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("extern @ @;", 11), r_CTYPE(l_T_1206), l_CN_1207));
}
else
{
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("@ @;", 4), r_CTYPE(l_T_1206), l_CN_1207));
}
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1207, 0);
{ R9 rv1208 = l_CN_1207;
return rv1208; }
}
if ((((*(R19 *)rt_nil_check(l_CS_1205))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R7 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R7 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R9(&l_CN_1207, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
}
else
{
S_R9(&l_CN_1207, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_1206), l_CN_1207));
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1207, 0);
{ R9 rv1209 = l_CN_1207;
return rv1209; }
}
S_R9(&l_CN_1207, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_FIELD, l_CN_1207, 0);
if (((*(R19 *)rt_nil_check(l_CS_1205))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_1206), l_CN_1207), &((*(R19 *)rt_nil_check(l_CS_1205))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_1207), 0);
{ R9 rv1210 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1210; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_1206), l_CN_1207, l_CN_1207, l_CN_1207));
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1207, 0);
{ R9 rv1211 = l_CN_1207;
return rv1211; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R17 * p_D) { RT_B_TICK(); 
R22 * l_T_1212; memset(&l_T_1212, 0, sizeof l_T_1212);
l_T_1212 = r_RESOLVE(((*(R17 *)rt_nil_check(p_D))).f_B);
R17 * l_N_1213; memset(&l_N_1213, 0, sizeof l_N_1213);
l_N_1213 = ((*(R17 *)rt_nil_check(p_D))).f_A;
R26 l_V_1214; memset(&l_V_1214, 0, sizeof l_V_1214);
rt_int l_HAVE_V_1215; memset(&l_HAVE_V_1215, 0, sizeof l_HAVE_V_1215);
l_HAVE_V_1215 = 0;
if (((((*(R22 *)rt_nil_check(l_T_1212))).f_KIND == g_T_TYPE) || (((*(R22 *)rt_nil_check(l_T_1212))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_1213 == NULL)) goto L_end1216;
{
{
R12 * l_Y_1217; memset(&l_Y_1217, 0, sizeof l_Y_1217);
l_Y_1217 = r_NEW_SYM(g_Y_VAR, ((*(R17 *)rt_nil_check(l_N_1213))).f_NAME);
R9 l_CN_1218; memset(&l_CN_1218, 0, sizeof l_CN_1218);
if ((((*(R17 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R12 *)rt_nil_check(l_Y_1217))).f_KIND = g_Y_CONST;
((*(R12 *)rt_nil_check(l_Y_1217))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_1212) && (((*(R22 *)rt_nil_check(l_T_1212))).f_SCALE == ((rt_int)0LL))))
{
{
R23 l_M_1219; memset(&l_M_1219, 0, sizeof l_M_1219);
S_R23(&l_M_1219, r_MANIFEST(((*(R17 *)rt_nil_check(p_D))).f_C), 0);
((*(R12 *)rt_nil_check(l_Y_1217))).f_HASMV = (l_M_1219).f_OK;
((*(R12 *)rt_nil_check(l_Y_1217))).f_MV = (l_M_1219).f_V;
}
}
}
((*(R12 *)rt_nil_check(l_Y_1217))).f_T = l_T_1212;
S_R9(&l_CN_1218, r_NEW_OBJECT(l_Y_1217, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_1212))
{
r_CODE(r_INIT_CODE(l_T_1212, l_CN_1218));
}
if ((!(((*(R17 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_1215))
{
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R17 *)rt_nil_check(p_D))).f_C;
S_R26(&l_V_1214, r_EXPR(((*(R17 *)rt_nil_check(p_D))).f_C, l_T_1212), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
l_HAVE_V_1215 = 1;
}
r_CODE(r_STORE_CODE(l_T_1212, l_CN_1218, l_V_1214, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_1217, ((*(R17 *)rt_nil_check(l_N_1213))).f_LINE);
}
l_N_1213 = ((*(R17 *)rt_nil_check(l_N_1213))).f_NEXT;
}
RT_B_TICK();
} L_end1216: ;
}
static R26 r_MKET(R9 p_C, R22 * p_T) { RT_B_TICK(); 
{ R26 rv1220 = ({ R26 rc1221; memset(&rc1221, 0, sizeof rc1221);  S_R9(&rc1221.f_C, p_C, 0); rc1221.f_T = p_T; rc1221.f_LVAL = 0; S_R9(&rc1221.f_SELF, r_NO_TEXT(), 0); rc1221; });
return rv1220; }
rt_raise(RT_X_INIT);
}
static R26 r_MKLV(R9 p_C, R22 * p_T, rt_int p_LVAL, R9 p_SELF) { RT_B_TICK(); 
{ R26 rv1222 = ({ R26 rc1223; memset(&rc1223, 0, sizeof rc1223);  S_R9(&rc1223.f_C, p_C, 0); rc1223.f_T = p_T; rc1223.f_LVAL = p_LVAL; S_R9(&rc1223.f_SELF, p_SELF, 0); rc1223; });
return rv1222; }
rt_raise(RT_X_INIT);
}
static R22 * r_INT_TYPE(rt_int p_SCALE) { RT_B_TICK(); 
R22 * l_T_1224; memset(&l_T_1224, 0, sizeof l_T_1224);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R22 * rv1225 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv1225; }
}
l_T_1224 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_1224))).f_SCALE = p_SCALE;
{ R22 * rv1226 = l_T_1224;
return rv1226; }
rt_raise(RT_X_INIT);
}
static R22 * r_STR_TYPE(R9 p_LEN, R23 p_M) { RT_B_TICK(); 
R22 * l_T_1227; memset(&l_T_1227, 0, sizeof l_T_1227);
l_T_1227 = r_NEW_TYP(g_T_STR);
S_R9(&((*(R22 *)rt_nil_check(l_T_1227))).f_LEN_C, p_LEN, 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1227))).f_MLEN, p_M, 0);
{ R22 * rv1228 = l_T_1227;
return rv1228; }
rt_raise(RT_X_INIT);
}
static R9 r_CSTRING(R9 p_T) { RT_B_TICK(); 
rstr l_S_1229; memset(&l_S_1229, 0, sizeof l_S_1229);
l_S_1229 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_1229, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_1230; memset(&l_AT_1230, 0, sizeof l_AT_1230);
l_AT_1230 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R9 l_R_1231; memset(&l_R_1231, 0, sizeof l_R_1231);
S_R9(&l_R_1231, r_MK(rt_str("\"", 1)), 0);
{ rt_int it1233_lo = ((rt_int)0LL), it1233_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it1233 = it1233_lo; it1233 <= it1233_hi; it1233++) {
{
if ((rt_b_eq(rt_b_slice(l_S_1229, it1233, it1233), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_1229, it1233, it1233), rt_str("\\", 1))))
{
S_R9(&l_R_1231, r_MK(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_S_1229, it1233, it1233))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1229, it1233, it1233), rt_str("\?", 1)))
{
S_R9(&l_R_1231, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_1234; memset(&l_C_1234, 0, sizeof l_C_1234);
l_C_1234 = r_CODE_OF(rt_b_slice(l_S_1229, it1233, it1233));
if (({ rt_int iv1235 = l_C_1234; (((rt_int)32LL) <= iv1235) && (iv1235 <= ((rt_int)126LL)); }))
{
S_R9(&l_R_1231, r_MK(rt_b_slice(l_S_1229, it1233, it1233)), 0);
}
else
{
S_R9(&l_R_1231, r_MK(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_1234, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_1234, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_1234, ((rt_int)8LL))))), 0);
}
}
}
}
RT_B_TICK();
if (it1233 == it1233_hi) break;
} } L_end1232: ;
S_R9(&l_R_1231, r_MK(rt_str("\"", 1)), 0);
{ R9 rv1236 = ({ R9 rc1237; memset(&rc1237, 0, sizeof rc1237);  rc1237.f_AT = l_AT_1230; rc1237.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_1230); rc1237.f_H = rt_neg(((rt_int)1LL)); rc1237; });
return rv1236; }
rt_raise(RT_X_INIT);
}
static R23 r_MANIFEST(R17 * p_E) { RT_B_TICK(); 
rt_int l_K_1238; memset(&l_K_1238, 0, sizeof l_K_1238);
l_K_1238 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
R23 l_NO_1239; memset(&l_NO_1239, 0, sizeof l_NO_1239);
S_R23(&l_NO_1239, ({ R23 rc1240; memset(&rc1240, 0, sizeof rc1240);  rc1240.f_OK = 0; rc1240.f_V = ((rt_int)0LL); rc1240; }), 0);
if ((l_K_1238 == g_N_INT))
{
{ R23 rv1241 = ({ R23 rc1242; memset(&rc1242, 0, sizeof rc1242);  rc1242.f_OK = 1; rc1242.f_V = ((*(R17 *)rt_nil_check(p_E))).f_IV; rc1242; });
return rv1241; }
}
else if ((l_K_1238 == g_N_PAREN))
{
{ R23 rv1243 = r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A);
return rv1243; }
}
else if ((l_K_1238 == g_N_BOOL))
{
{ R23 rv1244 = ({ R23 rc1245; memset(&rc1245, 0, sizeof rc1245);  rc1245.f_OK = 1; rc1245.f_V = ((*(R17 *)rt_nil_check(p_E))).f_IV; rc1245; });
return rv1244; }
}
else if ((l_K_1238 == g_N_UNOP))
{
{
R23 l_A_1246; memset(&l_A_1246, 0, sizeof l_A_1246);
S_R23(&l_A_1246, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
if ((!(l_A_1246).f_OK))
{
{ R23 rv1247 = l_NO_1239;
return rv1247; }
}
{ R23 rv1248 = ({ R23 rc1249; memset(&rc1249, 0, sizeof rc1249);  rc1249.f_OK = 1; rc1249.f_V = r_MANIFEST_ARITH(r_MK(rt_str("-", 1)), ((rt_int)0LL), (l_A_1246).f_V, ((*(R17 *)rt_nil_check(p_E))).f_LINE); rc1249; });
return rv1248; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R23 rv1250 = l_A_1246;
return rv1250; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R23 rv1251 = ({ R23 rc1252; memset(&rc1252, 0, sizeof rc1252);  rc1252.f_OK = (l_A_1246).f_OK; rc1252.f_V = rt_sub(((rt_int)1LL), (l_A_1246).f_V); rc1252; });
return rv1251; }
}
}
}
else if ((l_K_1238 == g_N_BINOP))
{
if ((!(((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R23 rv1253 = l_NO_1239;
return rv1253; }
}
{
R23 l_A_1254; memset(&l_A_1254, 0, sizeof l_A_1254);
S_R23(&l_A_1254, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R23 l_B_1255; memset(&l_B_1255, 0, sizeof l_B_1255);
S_R23(&l_B_1255, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
R9 l_OP_1256; memset(&l_OP_1256, 0, sizeof l_OP_1256);
S_R9(&l_OP_1256, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
if (r_TEQS(l_OP_1256, rt_str("&", 1)))
{
if (((((l_A_1254).f_OK && ((l_A_1254).f_V == ((rt_int)0LL)))) || (((l_B_1255).f_OK && ((l_B_1255).f_V == ((rt_int)0LL))))))
{
{ R23 rv1257 = ({ R23 rc1258; memset(&rc1258, 0, sizeof rc1258);  rc1258.f_OK = 1; rc1258.f_V = ((rt_int)0LL); rc1258; });
return rv1257; }
}
if (((l_A_1254).f_OK && (l_B_1255).f_OK))
{
{ R23 rv1259 = ({ R23 rc1260; memset(&rc1260, 0, sizeof rc1260);  rc1260.f_OK = 1; rc1260.f_V = ((rt_int)1LL); rc1260; });
return rv1259; }
}
{ R23 rv1261 = l_NO_1239;
return rv1261; }
}
else if (r_TEQS(l_OP_1256, rt_str("!", 1)))
{
if (((((l_A_1254).f_OK && ((l_A_1254).f_V == ((rt_int)1LL)))) || (((l_B_1255).f_OK && ((l_B_1255).f_V == ((rt_int)1LL))))))
{
{ R23 rv1262 = ({ R23 rc1263; memset(&rc1263, 0, sizeof rc1263);  rc1263.f_OK = 1; rc1263.f_V = ((rt_int)1LL); rc1263; });
return rv1262; }
}
if (((l_A_1254).f_OK && (l_B_1255).f_OK))
{
{ R23 rv1264 = ({ R23 rc1265; memset(&rc1265, 0, sizeof rc1265);  rc1265.f_OK = 1; rc1265.f_V = ((rt_int)0LL); rc1265; });
return rv1264; }
}
{ R23 rv1266 = l_NO_1239;
return rv1266; }
}
if ((!(((l_A_1254).f_OK && (l_B_1255).f_OK))))
{
{ R23 rv1267 = l_NO_1239;
return rv1267; }
}
if ((!((r_MANIFEST_INT(((*(R17 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R17 *)rt_nil_check(p_E))).f_B)))))
{
{ R23 rv1268 = l_NO_1239;
return rv1268; }
}
if (((r_TEQS(l_OP_1256, rt_str("+", 1)) || r_TEQS(l_OP_1256, rt_str("-", 1))) || r_TEQS(l_OP_1256, rt_str("*", 1))))
{
{ R23 rv1269 = ({ R23 rc1270; memset(&rc1270, 0, sizeof rc1270);  rc1270.f_OK = 1; rc1270.f_V = r_MANIFEST_ARITH(l_OP_1256, (l_A_1254).f_V, (l_B_1255).f_V, ((*(R17 *)rt_nil_check(p_E))).f_LINE); rc1270; });
return rv1269; }
}
else if ((r_TEQS(l_OP_1256, rt_str("//", 2)) && (!((l_B_1255).f_V == ((rt_int)0LL)))))
{
{ R23 rv1271 = ({ R23 rc1272; memset(&rc1272, 0, sizeof rc1272);  rc1272.f_OK = 1; rc1272.f_V = rt_quot((l_A_1254).f_V, (l_B_1255).f_V); rc1272; });
return rv1271; }
}
else if ((r_TEQS(l_OP_1256, rt_str("MOD", 3)) && (!((l_B_1255).f_V == ((rt_int)0LL)))))
{
{ R23 rv1273 = ({ R23 rc1274; memset(&rc1274, 0, sizeof rc1274);  rc1274.f_OK = 1; rc1274.f_V = rt_rem((l_A_1254).f_V, (l_B_1255).f_V); rc1274; });
return rv1273; }
}
else if (r_TEQS(l_OP_1256, rt_str("=", 1)))
{
{ R23 rv1275 = ({ R23 rc1276; memset(&rc1276, 0, sizeof rc1276);  rc1276.f_OK = 1; rc1276.f_V = r_BOOL_INT(((l_A_1254).f_V == (l_B_1255).f_V)); rc1276; });
return rv1275; }
}
else if (r_TEQS(l_OP_1256, rt_str("<>", 2)))
{
{ R23 rv1277 = ({ R23 rc1278; memset(&rc1278, 0, sizeof rc1278);  rc1278.f_OK = 1; rc1278.f_V = r_BOOL_INT((!((l_A_1254).f_V == (l_B_1255).f_V))); rc1278; });
return rv1277; }
}
else if (r_TEQS(l_OP_1256, rt_str("<", 1)))
{
{ R23 rv1279 = ({ R23 rc1280; memset(&rc1280, 0, sizeof rc1280);  rc1280.f_OK = 1; rc1280.f_V = r_BOOL_INT(((l_A_1254).f_V < (l_B_1255).f_V)); rc1280; });
return rv1279; }
}
else if (r_TEQS(l_OP_1256, rt_str(">", 1)))
{
{ R23 rv1281 = ({ R23 rc1282; memset(&rc1282, 0, sizeof rc1282);  rc1282.f_OK = 1; rc1282.f_V = r_BOOL_INT(((l_A_1254).f_V > (l_B_1255).f_V)); rc1282; });
return rv1281; }
}
else if (r_TEQS(l_OP_1256, rt_str("<=", 2)))
{
{ R23 rv1283 = ({ R23 rc1284; memset(&rc1284, 0, sizeof rc1284);  rc1284.f_OK = 1; rc1284.f_V = r_BOOL_INT(((l_A_1254).f_V <= (l_B_1255).f_V)); rc1284; });
return rv1283; }
}
else if (r_TEQS(l_OP_1256, rt_str(">=", 2)))
{
{ R23 rv1285 = ({ R23 rc1286; memset(&rc1286, 0, sizeof rc1286);  rc1286.f_OK = 1; rc1286.f_V = r_BOOL_INT(((l_A_1254).f_V >= (l_B_1255).f_V)); rc1286; });
return rv1285; }
}
}
}
else if ((l_K_1238 == g_N_IN))
{
{
R23 l_A_1287; memset(&l_A_1287, 0, sizeof l_A_1287);
S_R23(&l_A_1287, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R23 l_L_1288; memset(&l_L_1288, 0, sizeof l_L_1288);
S_R23(&l_L_1288, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R23 l_U_1289; memset(&l_U_1289, 0, sizeof l_U_1289);
S_R23(&l_U_1289, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_1290; memset(&l_LO_1290, 0, sizeof l_LO_1290);
rt_int l_HI_1291; memset(&l_HI_1291, 0, sizeof l_HI_1291);
if ((!(((((l_A_1287).f_OK && (l_L_1288).f_OK) && (l_U_1289).f_OK) && r_MANIFEST_INT(((*(R17 *)rt_nil_check(p_E))).f_A)))))
{
{ R23 rv1292 = l_NO_1239;
return rv1292; }
}
l_LO_1290 = (l_L_1288).f_V;
l_HI_1291 = (l_U_1289).f_V;
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_1290 = rt_add(l_LO_1290, ((rt_int)1LL));
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_1291 = rt_sub(l_HI_1291, ((rt_int)1LL));
}
{ R23 rv1293 = ({ R23 rc1294; memset(&rc1294, 0, sizeof rc1294);  rc1294.f_OK = 1; rc1294.f_V = r_BOOL_INT((((l_A_1287).f_V >= l_LO_1290) && ((l_A_1287).f_V <= l_HI_1291))); rc1294; });
return rv1293; }
}
}
else if (((l_K_1238 == g_N_NAME) || (l_K_1238 == g_TS_GEN)))
{
{
R12 * l_Y_1295; memset(&l_Y_1295, 0, sizeof l_Y_1295);
l_Y_1295 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
R21 * l_B_1296; memset(&l_B_1296, 0, sizeof l_B_1296);
l_B_1296 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_1296 == NULL)) goto L_end1297;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_1296))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME) && ((*(R21 *)rt_nil_check(l_B_1296))).f_HASMV))
{
{ R23 rv1298 = ({ R23 rc1299; memset(&rc1299, 0, sizeof rc1299);  rc1299.f_OK = 1; rc1299.f_V = ((*(R21 *)rt_nil_check(l_B_1296))).f_MV; rc1299; });
return rv1298; }
}
l_B_1296 = ((*(R21 *)rt_nil_check(l_B_1296))).f_NEXT;
}
RT_B_TICK();
} L_end1297: ;
if ((!(l_Y_1295 == NULL)))
{
if ((((((((*(R12 *)rt_nil_check(l_Y_1295))).f_KIND == g_Y_CONST) || (((*(R12 *)rt_nil_check(l_Y_1295))).f_KIND == g_Y_GEN)) || (((((*(R12 *)rt_nil_check(l_Y_1295))).f_KIND == g_Y_VAR) && ((*(R12 *)rt_nil_check(l_Y_1295))).f_INPUT)))) && ((*(R12 *)rt_nil_check(l_Y_1295))).f_HASMV))
{
{ R23 rv1300 = ({ R23 rc1301; memset(&rc1301, 0, sizeof rc1301);  rc1301.f_OK = 1; rc1301.f_V = ((*(R12 *)rt_nil_check(l_Y_1295))).f_MV; rc1301; });
return rv1300; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1295))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R17 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1302 = ({ R23 rc1303; memset(&rc1303, 0, sizeof rc1303);  rc1303.f_OK = 1; rc1303.f_V = ((*(R12 *)rt_nil_check(l_Y_1295))).f_MV; rc1303; });
return rv1302; }
}
}
}
}
}
else if ((l_K_1238 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R17 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R23 rv1304 = ({ R23 rc1305; memset(&rc1305, 0, sizeof rc1305);  rc1305.f_OK = 1; rc1305.f_V = ((*(R12 *)rt_nil_check(r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc1305; });
return rv1304; }
}
}
else if ((l_K_1238 == g_N_FIELD))
{
{ R23 rv1306 = r_ATTR_MANIFEST(p_E);
return rv1306; }
}
else if ((l_K_1238 == g_N_APPLY))
{
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R23 rv1307 = ({ R23 rc1308; memset(&rc1308, 0, sizeof rc1308);  rc1308.f_OK = 1; rc1308.f_V = r_BOOL_INT((r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A)).f_OK); rc1308; });
return rv1307; }
}
}
{ R23 rv1309 = l_NO_1239;
return rv1309; }
rt_raise(RT_X_INIT);
}
static R23 r_ATTR_MANIFEST(R17 * p_E) { RT_B_TICK(); 
R17 * l_A_1310; memset(&l_A_1310, 0, sizeof l_A_1310);
l_A_1310 = ((*(R17 *)rt_nil_check(p_E))).f_A;
R9 l_NAME_1311; memset(&l_NAME_1311, 0, sizeof l_NAME_1311);
S_R9(&l_NAME_1311, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
R22 * l_T_1312; memset(&l_T_1312, 0, sizeof l_T_1312);
l_T_1312 = NULL;
if ((((*(R17 *)rt_nil_check(l_A_1310))).f_KIND == g_N_PAREN))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1310))).f_A))).f_KIND == g_N_FIELD))
{
{
R17 * l_INNER_1313; memset(&l_INNER_1313, 0, sizeof l_INNER_1313);
l_INNER_1313 = ((*(R17 *)rt_nil_check(l_A_1310))).f_A;
if (r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1313))).f_NAME, rt_str("LENGTH", 6)))
{
if (r_TEQS(l_NAME_1311, rt_str("MAX", 3)))
{
{ R23 rv1314 = r_SOME(r_MAX_LENGTH());
return rv1314; }
}
else if (r_TEQS(l_NAME_1311, rt_str("MIN", 3)))
{
{ R23 rv1315 = r_SOME(((rt_int)0LL));
return rv1315; }
}
}
else if ((r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1313))).f_NAME, rt_str("NOM_PRECISION", 13)) || r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1313))).f_NAME, rt_str("IMP_PRECISION", 13))))
{
if (r_TEQS(l_NAME_1311, rt_str("MAX", 3)))
{
{ R23 rv1316 = r_SOME(r_MAX_FLOAT_PRECISION());
return rv1316; }
}
else if (r_TEQS(l_NAME_1311, rt_str("MIN", 3)))
{
{ R23 rv1317 = r_SOME(((rt_int)1LL));
return rv1317; }
}
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1313))).f_NAME, rt_str("SCALE", 5)))
{
if (r_TEQS(l_NAME_1311, rt_str("MAX", 3)))
{
{ R23 rv1318 = r_SOME(((rt_int)1000LL));
return rv1318; }
}
else if (r_TEQS(l_NAME_1311, rt_str("MIN", 3)))
{
{ R23 rv1319 = r_SOME(rt_neg(((rt_int)1000LL)));
return rv1319; }
}
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1313))).f_NAME, rt_str("RADIX", 5)))
{
if (r_TEQS(l_NAME_1311, rt_str("MAX", 3)))
{
{ R23 rv1320 = r_SOME(((rt_int)1000LL));
return rv1320; }
}
else if (r_TEQS(l_NAME_1311, rt_str("MIN", 3)))
{
{ R23 rv1321 = r_SOME(((rt_int)2LL));
return rv1321; }
}
}
}
}
}
if (((((*(R17 *)rt_nil_check(l_A_1310))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_A_1310))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_1322; memset(&l_Y_1322, 0, sizeof l_Y_1322);
l_Y_1322 = r_LOOKUP(((*(R17 *)rt_nil_check(l_A_1310))).f_NAME);
if ((l_Y_1322 == NULL))
{
{ R23 rv1323 = r_NO_MVAL();
return rv1323; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1322))).f_KIND == g_Y_TYPE))
{
l_T_1312 = r_RESOLVE_USER_NAME(((*(R17 *)rt_nil_check(l_A_1310))).f_NAME, ((*(R17 *)rt_nil_check(l_A_1310))).f_LINE);
}
else if ((((((*(R12 *)rt_nil_check(l_Y_1322))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1322))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1322))).f_KIND == g_Y_GEN)))
{
l_T_1312 = ((*(R12 *)rt_nil_check(l_Y_1322))).f_T;
}
else
{
{ R23 rv1324 = r_NO_MVAL();
return rv1324; }
}
}
}
else if ((((*(R17 *)rt_nil_check(l_A_1310))).f_KIND == g_N_INT))
{
if ((r_TEQS(l_NAME_1311, rt_str("MIN", 3)) || r_TEQS(l_NAME_1311, rt_str("MAX", 3))))
{
{ R23 rv1325 = r_SOME(((*(R17 *)rt_nil_check(l_A_1310))).f_IV);
return rv1325; }
}
l_T_1312 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
else if ((((((((((((((*(R17 *)rt_nil_check(l_A_1310))).f_KIND == g_N_PAREN) || (((*(R17 *)rt_nil_check(l_A_1310))).f_KIND == g_N_BINOP)) || (((*(R17 *)rt_nil_check(l_A_1310))).f_KIND == g_N_UNOP)) || (((*(R17 *)rt_nil_check(l_A_1310))).f_KIND == g_N_FIELD)) || (((*(R17 *)rt_nil_check(l_A_1310))).f_KIND == g_N_INDEX)) || (((*(R17 *)rt_nil_check(l_A_1310))).f_KIND == g_N_APPLY)) || (((*(R17 *)rt_nil_check(l_A_1310))).f_KIND == g_N_REAL)) || (((*(R17 *)rt_nil_check(l_A_1310))).f_KIND == g_N_STR)) || (((*(R17 *)rt_nil_check(l_A_1310))).f_KIND == g_N_SUBSTR)) || (((*(R17 *)rt_nil_check(l_A_1310))).f_KIND == g_N_DEREF)) || (((*(R17 *)rt_nil_check(l_A_1310))).f_KIND == g_N_TYPESPEC)))
{
if ((((*(R17 *)rt_nil_check(l_A_1310))).f_KIND == g_N_PAREN))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1310))).f_A))).f_KIND == g_N_INT) && ((r_TEQS(l_NAME_1311, rt_str("MIN", 3)) || r_TEQS(l_NAME_1311, rt_str("MAX", 3))))))
{
{ R23 rv1326 = r_SOME(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1310))).f_A))).f_IV);
return rv1326; }
}
}
{
R14 l_SAVED_CODE_1327; memset(&l_SAVED_CODE_1327, 0, sizeof l_SAVED_CODE_1327);
S_R14(&l_SAVED_CODE_1327, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1328; memset(&rc1328, 0, sizeof rc1328);  rc1328.f_HEAD = NULL; rc1328.f_TAIL = NULL; rc1328; }), 0);
l_T_1312 = (r_EXPR(l_A_1310, NULL)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1327, 0);
}
}
else
{
{ R23 rv1329 = r_NO_MVAL();
return rv1329; }
}
if ((l_T_1312 == NULL))
{
{ R23 rv1330 = r_NO_MVAL();
return rv1330; }
}
{ R23 rv1331 = r_TYPE_ATTR_MANIFEST(l_T_1312, l_NAME_1311);
return rv1331; }
rt_raise(RT_X_INIT);
}
static R23 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R9 p_NAME) { RT_B_TICK(); 
R22 * l_T_1332; memset(&l_T_1332, 0, sizeof l_T_1332);
l_T_1332 = r_REAL_TYPE(p_T0);
rt_int l_K_1333; memset(&l_K_1333, 0, sizeof l_K_1333);
l_K_1333 = ((*(R22 *)rt_nil_check(l_T_1332))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R23 rv1334 = r_STATIC_SIZE(p_T0);
return rv1334; }
}
if ((l_K_1333 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R23 rv1335 = r_SOME(((*(R22 *)rt_nil_check(l_T_1332))).f_SCALE);
return rv1335; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1336 = r_SOME(((rt_int)2LL));
return rv1336; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && ((((*(R22 *)rt_nil_check(l_T_1332))).f_LO_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1337 = ((*(R22 *)rt_nil_check(l_T_1332))).f_MLO;
return rv1337; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && ((((*(R22 *)rt_nil_check(l_T_1332))).f_HI_C).f_LEN > ((rt_int)0LL))))
{
{ R23 rv1338 = ((*(R22 *)rt_nil_check(l_T_1332))).f_MHI;
return rv1338; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && (((*(R22 *)rt_nil_check(l_T_1332))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1339 = r_SOME(r_STD_MIN());
return rv1339; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && (((*(R22 *)rt_nil_check(l_T_1332))).f_SCALE == ((rt_int)0LL))))
{
{ R23 rv1340 = r_SOME(r_STD_MAX());
return rv1340; }
}
}
else if ((l_K_1333 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R23 rv1341 = r_SOME(((*(R22 *)rt_nil_check(l_T_1332))).f_SCALE);
return rv1341; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R23 rv1342 = r_SOME(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1332))).f_SCALE));
return rv1342; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R23 rv1343 = r_SOME(((rt_int)2LL));
return rv1343; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R23 rv1344 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1332))).f_SCALE, p_NAME));
return rv1344; }
}
}
else if ((l_K_1333 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1332))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1345 = ((*(R22 *)rt_nil_check(l_T_1332))).f_MLO;
return rv1345; }
}
{ R23 rv1346 = r_SOME(((rt_int)0LL));
return rv1346; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1332))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R23 rv1347 = ((*(R22 *)rt_nil_check(l_T_1332))).f_MHI;
return rv1347; }
}
{ R23 rv1348 = r_SOME(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1332))).f_BASE))).f_NLITS, ((rt_int)1LL)));
return rv1348; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1332))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ R23 rv1349 = r_SOME(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1332))).f_BASE))).f_NLITS);
return rv1349; }
}
if (((((*(R22 *)rt_nil_check(l_T_1332))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_T_1332))).f_MHI).f_OK))
{
{ R23 rv1350 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R22 *)rt_nil_check(l_T_1332))).f_MHI).f_V, (((*(R22 *)rt_nil_check(l_T_1332))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1350; }
}
}
}
else if (((l_K_1333 == g_T_STR) || (l_K_1333 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R23 rv1351 = ((*(R22 *)rt_nil_check(l_T_1332))).f_MLEN;
return rv1351; }
}
}
else if ((l_K_1333 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R23 rv1352 = r_SOME(((*(R22 *)rt_nil_check(l_T_1332))).f_DIMS);
return rv1352; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1332))).f_DIMS == ((rt_int)1LL))))
{
if (((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1332))).f_BOUNDS))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1332))).f_BOUNDS))).f_MHI).f_OK))
{
{ R23 rv1353 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1332))).f_BOUNDS))).f_MHI).f_V, (((*(R25 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1332))).f_BOUNDS))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1353; }
}
}
}
else if ((l_K_1333 == g_T_REC))
{
{
R24 * l_F_1354; memset(&l_F_1354, 0, sizeof l_F_1354);
l_F_1354 = ((*(R22 *)rt_nil_check(l_T_1332))).f_FIELDS;
R25 * l_B_1355; memset(&l_B_1355, 0, sizeof l_B_1355);
l_B_1355 = ((*(R22 *)rt_nil_check(l_T_1332))).f_ARGS;
for (;;) {
if (((l_F_1354 == NULL) || (l_B_1355 == NULL))) goto L_end1356;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1354))).f_KIND == ((rt_int)0LL))))
{
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1354))).f_NAME, p_NAME))
{
if (((*(R25 *)rt_nil_check(l_B_1355))).f_ANYARG)
{
{ R23 rv1357 = r_NO_MVAL();
return rv1357; }
}
{ R23 rv1358 = ((*(R25 *)rt_nil_check(l_B_1355))).f_MLO;
return rv1358; }
}
l_B_1355 = ((*(R25 *)rt_nil_check(l_B_1355))).f_NEXT;
}
l_F_1354 = ((*(R24 *)rt_nil_check(l_F_1354))).f_NEXT;
}
RT_B_TICK();
} L_end1356: ;
}
}
{ R23 rv1359 = r_NO_MVAL();
return rv1359; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_ARITH(R9 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); fr_r_MANIFEST_ARITH *F = rt_alloc(sizeof *F); (void)F; F->p_OP = p_OP; F->p_A = p_A; F->p_B = p_B; F->p_LINE = p_LINE;
F->l_R_1360 = ((rt_int)0LL);
{ rt_frame xf1361; if (RT_TRY(xf1361)) {
{
if (r_TEQS(F->p_OP, rt_str("+", 1)))
{
F->l_R_1360 = rt_add(F->p_A, F->p_B);
}
else if (r_TEQS(F->p_OP, rt_str("-", 1)))
{
F->l_R_1360 = rt_sub(F->p_A, F->p_B);
}
else
{
F->l_R_1360 = rt_mul(F->p_A, F->p_B);
}
}
RT_POP(xf1361); } else { RT_POP(xf1361); int xf1361x = rt_xcur;
if (0 || xf1361x == x_OVERFLOW)
{
r_FAIL(F->p_LINE, rt_str("a manifest expression overflows (3.2.4.2)", 41));
}
else rt_raise(xf1361x); } }
{ rt_int rv1362 = F->l_R_1360;
return rv1362; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R17 * p_E) { RT_B_TICK(); 
{ rt_int rv1363 = (!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv1363; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { RT_B_TICK(); 
if (p_B)
{
{ rt_int rv1364 = ((rt_int)1LL);
return rv1364; }
}
{ rt_int rv1365 = ((rt_int)0LL);
return rv1365; }
rt_raise(RT_X_INIT);
}
static R26 r_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_K_1366; memset(&l_K_1366, 0, sizeof l_K_1366);
l_K_1366 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_1366 == g_N_INT))
{
{ R26 rv1367 = r_MKET(r_STD_CHECK(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R17 *)rt_nil_check(p_E))).f_IV))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1367; }
}
else if ((l_K_1366 == g_N_REAL))
{
{ R26 rv1368 = r_REAL_LITERAL(p_E);
return rv1368; }
}
else if ((l_K_1366 == g_N_BOOL))
{
{ R26 rv1369 = r_MKET(r_NUM(((*(R17 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1369; }
}
else if ((l_K_1366 == g_N_NIL))
{
{ R26 rv1370 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1370; }
}
else if ((l_K_1366 == g_N_PAREN))
{
{
R26 l_V_1371; memset(&l_V_1371, 0, sizeof l_V_1371);
S_R26(&l_V_1371, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R9(&(l_V_1371).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1371).f_C), 0);
{ R26 rv1372 = l_V_1371;
return rv1372; }
}
}
else if ((l_K_1366 == g_N_STR))
{
{ R26 rv1373 = r_STRING_LITERAL(p_E);
return rv1373; }
}
else if ((l_K_1366 == g_N_BITS))
{
{ R26 rv1374 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R17 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1374; }
}
else if ((l_K_1366 == g_N_ENUMLIT))
{
if (r_NAMES_OBJECT(((*(R17 *)rt_nil_check(p_E))).f_NAME))
{
{ R26 rv1375 = r_NAME_EXPR(p_E, p_WANT);
return rv1375; }
}
{ R26 rv1376 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1376; }
}
else if ((l_K_1366 == g_N_RECCONS))
{
{ R26 rv1377 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1377; }
}
else if ((l_K_1366 == g_N_ARRCONS))
{
{ R26 rv1378 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1378; }
}
else if ((l_K_1366 == g_N_TYPESPEC))
{
{ R26 rv1379 = r_TYPE_SPECIFIER(p_E);
return rv1379; }
}
else if ((l_K_1366 == g_N_QUAL))
{
{
rt_int l_SAVED_1380; memset(&l_SAVED_1380, 0, sizeof l_SAVED_1380);
l_SAVED_1380 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_1381; memset(&l_SAVED_Q_1381, 0, sizeof l_SAVED_Q_1381);
l_SAVED_Q_1381 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1382; memset(&l_V_1382, 0, sizeof l_V_1382);
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
R23 l_P_1383; memset(&l_P_1383, 0, sizeof l_P_1383);
S_R23(&l_P_1383, r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_B, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
}
}
S_R26(&l_V_1382, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1380;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1381;
{ R26 rv1384 = l_V_1382;
return rv1384; }
}
}
else if ((l_K_1366 == g_N_NEW))
{
if ((r_NAMES_OBJECT(((*(R17 *)rt_nil_check(p_E))).f_NAME) && (!r_CONSTRUCTOR_WANTED(p_WANT))))
{
{
R17 * l_N_1385; memset(&l_N_1385, 0, sizeof l_N_1385);
l_N_1385 = r_NEW_NODE(g_N_APPLY, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1385))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_1385))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_A;
{ R26 rv1386 = r_EXPR(l_N_1385, p_WANT);
return rv1386; }
}
}
{ R26 rv1387 = r_NEW_EXPR(p_E, p_WANT);
return rv1387; }
}
else if ((l_K_1366 == g_N_NAME))
{
{ R26 rv1388 = r_NAME_EXPR(p_E, p_WANT);
return rv1388; }
}
else if (((l_K_1366 == g_N_APPLY) && r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("$PATH_LIST", 10))))
{
{ R26 rv1389 = r_PATH_LIST(((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1389; }
}
else if (((l_K_1366 == g_N_APPLY) && r_IS_STD_REPTYPE(((*(R17 *)rt_nil_check(p_E))).f_NAME)))
{
if (((((((*(R17 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))) || (!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL))) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an explicit-rep-converter converts one expression [3-41]", 56));
}
{
R17 * l_R_1390; memset(&l_R_1390, 0, sizeof l_R_1390);
l_R_1390 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_R_1390))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1391 = r_REP_CONVERTER(l_R_1390, ((*(R17 *)rt_nil_check(p_E))).f_A, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1391; }
}
}
else if ((l_K_1366 == g_N_APPLY))
{
{
R12 * l_Y_1392; memset(&l_Y_1392, 0, sizeof l_Y_1392);
l_Y_1392 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1392 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1392))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1392))).f_KIND == g_Y_CONST)))
{
{
R17 * l_N_1393; memset(&l_N_1393, 0, sizeof l_N_1393);
l_N_1393 = r_NEW_NODE(g_N_INDEX, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
R17 * l_A_1394; memset(&l_A_1394, 0, sizeof l_A_1394);
l_A_1394 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_A_1394))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_1393))).f_A = l_A_1394;
((*(R17 *)rt_nil_check(l_N_1393))).f_B = ((*(R17 *)rt_nil_check(p_E))).f_A;
{ R26 rv1395 = r_EXPR(l_N_1393, p_WANT);
return rv1395; }
}
}
}
{ R26 rv1396 = r_CALL_EXPR(p_E, p_WANT);
return rv1396; }
}
}
else if ((l_K_1366 == g_N_FIELD))
{
{ R26 rv1397 = r_FIELD_EXPR(p_E);
return rv1397; }
}
else if ((l_K_1366 == g_N_DEREF))
{
{
R26 l_B_1398; memset(&l_B_1398, 0, sizeof l_B_1398);
S_R26(&l_B_1398, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1398).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1399; memset(&l_TT_1399, 0, sizeof l_TT_1399);
l_TT_1399 = r_TARGET((l_B_1398).f_T);
{ R26 rv1400 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1399), (l_B_1398).f_C), l_TT_1399, 1, r_NO_TEXT());
return rv1400; }
}
}
}
else if ((l_K_1366 == g_N_INDEX))
{
if (((((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_APPLY) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME))) && r_IS_REPTYPE_NAME(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME)))
{
if (((((*(R17 *)rt_nil_check(p_E))).f_B == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_NEXT == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an explicit-rep-converter converts one expression [3-41]", 56));
}
{ R26 rv1401 = r_REP_CONVERTER(((*(R17 *)rt_nil_check(p_E))).f_A, ((*(R17 *)rt_nil_check(p_E))).f_B, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1401; }
}
{ R26 rv1402 = r_INDEX_EXPR(p_E);
return rv1402; }
}
else if ((l_K_1366 == g_N_SUBSTR))
{
{
R26 l_B_1403; memset(&l_B_1403, 0, sizeof l_B_1403);
S_R26(&l_B_1403, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1404; memset(&l_BT_1404, 0, sizeof l_BT_1404);
l_BT_1404 = r_REAL_TYPE((l_B_1403).f_T);
R9 l_LO_1405; memset(&l_LO_1405, 0, sizeof l_LO_1405);
R9 l_HI_1406; memset(&l_HI_1406, 0, sizeof l_HI_1406);
if (((((*(R22 *)rt_nil_check((l_B_1403).f_T))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_MKN(rt_str("SUBSTRING_", 10)))))
{
{
R27 * l_ARGS_1407; memset(&l_ARGS_1407, 0, sizeof l_ARGS_1407);
l_ARGS_1407 = r_VAL_ARG(l_B_1403, r_NODE_ARG(((*(R17 *)rt_nil_check(p_E))).f_B, g_M_IN, r_NODE_ARG(((*(R17 *)rt_nil_check(p_E))).f_C, g_M_IN, NULL)));
R12 * l_Y_1408; memset(&l_Y_1408, 0, sizeof l_Y_1408);
l_Y_1408 = r_USER_OPERATOR(r_MKN(rt_str("SUBSTRING_", 10)), l_ARGS_1407, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!(l_Y_1408 == NULL)))
{
{ R26 rv1409 = r_CALL_SYM(l_Y_1408, l_ARGS_1407, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1409; }
}
if ((((*(R22 *)rt_nil_check((l_B_1403).f_T))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no operation for this abstract type: ", 37), r_MK(rt_str("SUBSTRING_", 10)));
}
}
}
if ((!(((((*(R22 *)rt_nil_check(l_BT_1404))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1404))).f_KIND == g_T_BITS)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R9(&l_LO_1405, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
S_R9(&l_HI_1406, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1404))).f_KIND == g_T_BITS))
{
{ R26 rv1410 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1403).f_C, l_LO_1405, l_HI_1406), r_BITS_TYPE(((rt_int)1LL)));
return rv1410; }
}
{
R22 * l_T_1411; memset(&l_T_1411, 0, sizeof l_T_1411);
l_T_1411 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1411))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1404))).f_BASE;
{ R26 rv1412 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1403).f_C, l_LO_1405, l_HI_1406), l_T_1411);
return rv1412; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1404))).f_KIND == g_T_BITS))
{
{ R26 rv1413 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1403).f_C, l_LO_1405, l_HI_1406), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1413; }
}
{
R22 * l_T_1414; memset(&l_T_1414, 0, sizeof l_T_1414);
l_T_1414 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1414))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1404))).f_BASE;
{ R26 rv1415 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1403).f_C, l_LO_1405, l_HI_1406), l_T_1414);
return rv1415; }
}
}
}
else if ((l_K_1366 == g_N_UNOP))
{
{ R26 rv1416 = r_UNARY(p_E);
return rv1416; }
}
else if ((l_K_1366 == g_N_BINOP))
{
{ R26 rv1417 = r_BINARY(p_E);
return rv1417; }
}
else if ((l_K_1366 == g_N_IN))
{
{ R26 rv1418 = r_IN_EXPR(p_E);
return rv1418; }
}
else if (((l_K_1366 == g_N_ANY) || (l_K_1366 == g_N_DONTCARE)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((l_K_1366 == g_TS_GEN))
{
{
R17 * l_N_1419; memset(&l_N_1419, 0, sizeof l_N_1419);
l_N_1419 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1419))).f_NAME, r_QMKN(rt_str("\?", 1), ((*(R17 *)rt_nil_check(p_E))).f_NAME), 0);
if (r_NAMES_OBJECT(((*(R17 *)rt_nil_check(l_N_1419))).f_NAME))
{
{ R26 rv1420 = r_NAME_EXPR(l_N_1419, p_WANT);
return rv1420; }
}
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
else if (((((l_K_1366 == g_TS_NAME) || (l_K_1366 == g_TS_ARRAY)) || (l_K_1366 == g_TS_RECORD)) || (l_K_1366 == g_TS_ENUM)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R9 r_INT_EXPR(R17 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1421; memset(&l_SAVED_1421, 0, sizeof l_SAVED_1421);
l_SAVED_1421 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_1422; memset(&l_SAVED_Q_1422, 0, sizeof l_SAVED_Q_1422);
l_SAVED_Q_1422 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1423; memset(&l_V_1423, 0, sizeof l_V_1423);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1423, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1421;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1422;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1423).f_T)))).f_KIND == g_T_ENUM))
{
{ R9 rv1424 = (l_V_1423).f_C;
return rv1424; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1423).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1423).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1423).f_T));
}
{ R9 rv1425 = (l_V_1423).f_C;
return rv1425; }
rt_raise(RT_X_INIT);
}
static R9 r_BOOL_EXPR(R17 * p_E) { RT_B_TICK(); 
R26 l_V_1426; memset(&l_V_1426, 0, sizeof l_V_1426);
S_R26(&l_V_1426, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1426).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1426).f_T));
}
{ R9 rv1427 = (l_V_1426).f_C;
return rv1427; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { RT_B_TICK(); 
R22 * l_T_1428; memset(&l_T_1428, 0, sizeof l_T_1428);
l_T_1428 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(l_T_1428))).f_LEN_C, r_NUM(p_LEN), 0);
S_R23(&((*(R22 *)rt_nil_check(l_T_1428))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1429 = l_T_1428;
return rv1429; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R17 * p_E) { RT_B_TICK(); 
R9 l_T_1430; memset(&l_T_1430, 0, sizeof l_T_1430);
S_R9(&l_T_1430, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1431; memset(&l_S_1431, 0, sizeof l_S_1431);
l_S_1431 = rt_b_str_new((l_T_1430).f_LEN, 0);
rt_b_assign(&l_S_1431, r_STR(l_T_1430, (l_T_1430).f_LEN));
rt_int l_POINT_1432; memset(&l_POINT_1432, 0, sizeof l_POINT_1432);
l_POINT_1432 = 0;
rt_int l_DIGITS_1433; memset(&l_DIGITS_1433, 0, sizeof l_DIGITS_1433);
l_DIGITS_1433 = ((rt_int)0LL);
{ rt_int it1435_lo = ((rt_int)0LL), it1435_hi = rt_sub((l_T_1430).f_LEN, ((rt_int)1LL));
for (rt_int it1435 = it1435_lo; it1435 <= it1435_hi; it1435++) {
{
if (rt_b_eq(rt_b_slice(l_S_1431, it1435, it1435), rt_str(".", 1)))
{
l_POINT_1432 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1431, it1435, it1435), rt_str("E", 1)))
{
goto L_end1434;
}
else
{
l_DIGITS_1433 = rt_add(l_DIGITS_1433, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it1435 == it1435_hi) break;
} } L_end1434: ;
if (((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) || (!l_POINT_1432)))
{
r_CHECK_FIXED_LITERAL(p_E);
}
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1436 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1430), r_NUM(((*(R17 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R17 *)rt_nil_check(p_E))).f_IV));
return rv1436; }
}
if ((!l_POINT_1432))
{
{ R26 rv1437 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1430)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1437; }
}
{
R22 * l_F_1438; memset(&l_F_1438, 0, sizeof l_F_1438);
l_F_1438 = r_NEW_TYP(g_T_FLOAT);
R9 l_C_1439; memset(&l_C_1439, 0, sizeof l_C_1439);
S_R9(&l_C_1439, l_T_1430, 0);
((*(R22 *)rt_nil_check(l_F_1438))).f_SCALE = r_MAX_INT(l_DIGITS_1433, r_QUAL_PREC());
if ((((*(R22 *)rt_nil_check(l_F_1438))).f_SCALE > r_MAX_FLOAT_PRECISION()))
{
((*(R22 *)rt_nil_check(l_F_1438))).f_SCALE = r_MAX_FLOAT_PRECISION();
}
if ((((*(R22 *)rt_nil_check(l_F_1438))).f_SCALE < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1438))).f_SCALE = ((rt_int)1LL);
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1438))).f_SCALE)))
{
((*(R22 *)rt_nil_check(l_F_1438))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_F_1438))).f_SCALE, ((rt_int)8LL));
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1438))).f_SCALE)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the float-literal is outside the range of FLOAT (3.3.2)", 68));
}
if (rt_b_eq(rt_b_slice(l_S_1431, rt_sub((l_T_1430).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1430).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
S_R9(&l_C_1439, r_FMT1(rt_str("@0", 2), l_T_1430), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1431, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
S_R9(&l_C_1439, r_FMT1(rt_str("0@", 2), l_T_1430), 0);
}
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_F_1438))).f_SCALE) == ((rt_int)7LL)))
{
{ R26 rv1440 = r_MKET(r_FMT1(rt_str("((double)(float)@)", 18), l_C_1439), l_F_1438);
return rv1440; }
}
{ R26 rv1441 = r_MKET(r_FMT1(rt_str("(@)", 3), l_C_1439), l_F_1438);
return rv1441; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_LITERAL_FITS(R17 * p_E, rt_int p_P) { RT_B_TICK(); 
R9 l_T_1442; memset(&l_T_1442, 0, sizeof l_T_1442);
S_R9(&l_T_1442, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1443; memset(&l_S_1443, 0, sizeof l_S_1443);
l_S_1443 = rt_b_str_new((l_T_1442).f_LEN, 0);
rt_b_assign(&l_S_1443, r_STR(l_T_1442, (l_T_1442).f_LEN));
rt_int l_INT_1444; memset(&l_INT_1444, 0, sizeof l_INT_1444);
l_INT_1444 = ((rt_int)0LL);
rt_int l_SIG_1445; memset(&l_SIG_1445, 0, sizeof l_SIG_1445);
l_SIG_1445 = 0;
rt_int l_POINT_1446; memset(&l_POINT_1446, 0, sizeof l_POINT_1446);
l_POINT_1446 = 0;
rt_int l_LEAD_1447; memset(&l_LEAD_1447, 0, sizeof l_LEAD_1447);
l_LEAD_1447 = ((rt_int)0LL);
rt_int l_I_1448; memset(&l_I_1448, 0, sizeof l_I_1448);
l_I_1448 = ((rt_int)0LL);
rt_int l_EXP_1449; memset(&l_EXP_1449, 0, sizeof l_EXP_1449);
l_EXP_1449 = ((rt_int)0LL);
for (;;) {
if ((l_I_1448 >= (l_T_1442).f_LEN)) goto L_end1450;
{
if (rt_b_eq(rt_b_slice(l_S_1443, l_I_1448, l_I_1448), rt_str("E", 1)))
{
goto L_end1450;
}
else if (rt_b_eq(rt_b_slice(l_S_1443, l_I_1448, l_I_1448), rt_str(".", 1)))
{
l_POINT_1446 = 1;
}
else if ((!rt_b_eq(rt_b_slice(l_S_1443, l_I_1448, l_I_1448), rt_str("0", 1))))
{
if ((!l_POINT_1446))
{
l_INT_1444 = rt_add(l_INT_1444, ((rt_int)1LL));
}
l_SIG_1445 = 1;
}
else if ((l_SIG_1445 && (!l_POINT_1446)))
{
l_INT_1444 = rt_add(l_INT_1444, ((rt_int)1LL));
}
else if ((l_POINT_1446 && (!l_SIG_1445)))
{
l_LEAD_1447 = rt_add(l_LEAD_1447, ((rt_int)1LL));
}
l_I_1448 = rt_add(l_I_1448, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1450: ;
if ((!l_SIG_1445))
{
{ rt_int rv1451 = 1;
return rv1451; }
}
if ((l_I_1448 < (l_T_1442).f_LEN))
{
{
rt_int l_NEG_1452; memset(&l_NEG_1452, 0, sizeof l_NEG_1452);
l_NEG_1452 = 0;
l_I_1448 = rt_add(l_I_1448, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1443, l_I_1448, l_I_1448), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1443, l_I_1448, l_I_1448), rt_str("+", 1))))
{
l_NEG_1452 = rt_b_eq(rt_b_slice(l_S_1443, l_I_1448, l_I_1448), rt_str("-", 1));
l_I_1448 = rt_add(l_I_1448, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1448 >= (l_T_1442).f_LEN)) goto L_end1453;
{
if ((l_EXP_1449 <= ((rt_int)100000LL)))
{
l_EXP_1449 = rt_add(rt_mul(l_EXP_1449, ((rt_int)10LL)), (rt_sub(r_CODE_OF(rt_b_slice(l_S_1443, l_I_1448, l_I_1448)), ((rt_int)48LL))));
}
l_I_1448 = rt_add(l_I_1448, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1453: ;
if (l_NEG_1452)
{
l_EXP_1449 = rt_neg(l_EXP_1449);
}
}
}
{
rt_int l_D_1454; memset(&l_D_1454, 0, sizeof l_D_1454);
l_D_1454 = rt_add(rt_sub(l_INT_1444, ((rt_int)1LL)), l_EXP_1449);
rt_int l_LIM_1455; memset(&l_LIM_1455, 0, sizeof l_LIM_1455);
l_LIM_1455 = ((rt_int)308LL);
if ((l_INT_1444 == ((rt_int)0LL)))
{
l_D_1454 = rt_add(rt_sub(rt_neg(l_LEAD_1447), ((rt_int)1LL)), l_EXP_1449);
}
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
l_LIM_1455 = ((rt_int)38LL);
}
{ rt_int rv1456 = ((l_D_1454 <= l_LIM_1455) && (l_D_1454 >= rt_add(rt_neg(l_LIM_1455), ((rt_int)1LL))));
return rv1456; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_LITERAL(R17 * p_E) { RT_B_TICK(); 
R9 l_T_1457; memset(&l_T_1457, 0, sizeof l_T_1457);
S_R9(&l_T_1457, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1458; memset(&l_S_1458, 0, sizeof l_S_1458);
l_S_1458 = rt_b_str_new((l_T_1457).f_LEN, 0);
rt_b_assign(&l_S_1458, r_STR(l_T_1457, (l_T_1457).f_LEN));
rt_int l_SIG_1459; memset(&l_SIG_1459, 0, sizeof l_SIG_1459);
l_SIG_1459 = ((rt_int)0LL);
rt_int l_FRAC_1460; memset(&l_FRAC_1460, 0, sizeof l_FRAC_1460);
l_FRAC_1460 = ((rt_int)0LL);
rt_int l_POINT_1461; memset(&l_POINT_1461, 0, sizeof l_POINT_1461);
l_POINT_1461 = 0;
rt_int l_EXP_1462; memset(&l_EXP_1462, 0, sizeof l_EXP_1462);
l_EXP_1462 = ((rt_int)0LL);
rt_int l_I_1463; memset(&l_I_1463, 0, sizeof l_I_1463);
l_I_1463 = ((rt_int)0LL);
for (;;) {
if ((l_I_1463 >= (l_T_1457).f_LEN)) goto L_end1464;
{
if (rt_b_eq(rt_b_slice(l_S_1458, l_I_1463, l_I_1463), rt_str("E", 1)))
{
goto L_end1464;
}
if (rt_b_eq(rt_b_slice(l_S_1458, l_I_1463, l_I_1463), rt_str(".", 1)))
{
l_POINT_1461 = 1;
}
else
{
if (((l_SIG_1459 > ((rt_int)0LL)) || (!rt_b_eq(rt_b_slice(l_S_1458, l_I_1463, l_I_1463), rt_str("0", 1)))))
{
l_SIG_1459 = rt_add(l_SIG_1459, ((rt_int)1LL));
}
if (l_POINT_1461)
{
l_FRAC_1460 = rt_add(l_FRAC_1460, ((rt_int)1LL));
}
}
l_I_1463 = rt_add(l_I_1463, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1464: ;
if ((rt_sub(l_I_1463, r_BOOL_INT(l_POINT_1461)) > ((rt_int)1000LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a fixed-literal has at most 1000 digits (3.2.2)", 47));
}
if ((l_I_1463 < (l_T_1457).f_LEN))
{
{
rt_int l_NEG_1465; memset(&l_NEG_1465, 0, sizeof l_NEG_1465);
l_NEG_1465 = 0;
l_I_1463 = rt_add(l_I_1463, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1458, l_I_1463, l_I_1463), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1458, l_I_1463, l_I_1463), rt_str("+", 1))))
{
l_NEG_1465 = rt_b_eq(rt_b_slice(l_S_1458, l_I_1463, l_I_1463), rt_str("-", 1));
l_I_1463 = rt_add(l_I_1463, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1463 >= (l_T_1457).f_LEN)) goto L_end1466;
{
if ((l_EXP_1462 <= ((rt_int)1000LL)))
{
l_EXP_1462 = rt_sub(rt_add(rt_mul(l_EXP_1462, ((rt_int)10LL)), r_CODE_OF(rt_b_slice(l_S_1458, l_I_1463, l_I_1463))), ((rt_int)48LL));
}
l_I_1463 = rt_add(l_I_1463, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1466: ;
if ((l_EXP_1462 > ((rt_int)1000LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the exponent of a literal must not exceed 1000 (3.2.2)", 54));
}
if (l_NEG_1465)
{
l_EXP_1462 = rt_neg(l_EXP_1462);
}
}
}
if (((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) && (((((*(R17 *)rt_nil_check(p_E))).f_IV > ((rt_int)1000LL)) || (((*(R17 *)rt_nil_check(p_E))).f_IV < rt_neg(((rt_int)1000LL)))))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a literal must not exceed 1000 (3.2.2)", 51));
}
if ((l_SIG_1459 > ((rt_int)0LL)))
{
{
rt_int l_P10_1467; memset(&l_P10_1467, 0, sizeof l_P10_1467);
l_P10_1467 = rt_sub(rt_add(rt_sub(l_SIG_1459, ((rt_int)1LL)), l_EXP_1462), l_FRAC_1460);
rt_int l_BITS_1468; memset(&l_BITS_1468, 0, sizeof l_BITS_1468);
l_BITS_1468 = rt_add(rt_quot((rt_mul(l_P10_1467, ((rt_int)3321928LL))), ((rt_int)1000000LL)), rt_mul(((*(R17 *)rt_nil_check(p_E))).f_IV, ((*(R17 *)rt_nil_check(p_E))).f_FL));
if ((l_P10_1467 < ((rt_int)0LL)))
{
l_BITS_1468 = rt_add(rt_neg((rt_quot((rt_add(rt_mul(rt_neg(l_P10_1467), ((rt_int)3321929LL)), ((rt_int)999999LL))), ((rt_int)1000000LL)))), rt_mul(((*(R17 *)rt_nil_check(p_E))).f_IV, ((*(R17 *)rt_nil_check(p_E))).f_FL));
}
if ((l_BITS_1468 >= ((rt_int)63LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the literal is outside FIXED_MIN .. FIXED_MAX (3.2.2)", 66));
}
}
}
}
static R26 r_STRING_LITERAL(R17 * p_E) { RT_B_TICK(); 
R22 * l_CS_1469; memset(&l_CS_1469, 0, sizeof l_CS_1469);
l_CS_1469 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R17 * l_P_1470; memset(&l_P_1470, 0, sizeof l_P_1470);
l_P_1470 = ((*(R17 *)rt_nil_check(p_E))).f_A;
R9 l_S_1471; memset(&l_S_1471, 0, sizeof l_S_1471);
S_R9(&l_S_1471, r_MK(rt_str("", 0)), 0);
if (((((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN == ((rt_int)0LL)))
{
l_CS_1469 = r_DEFAULT_CHARSET(((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
else
{
{
R12 * l_Y_1472; memset(&l_Y_1472, 0, sizeof l_Y_1472);
l_Y_1472 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1472 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1472))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1469 = r_RESOLVE_USER_NAME(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1469)))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1469 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1469)))).f_BASE;
if ((!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(l_CS_1469))).f_LITS)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a character set has a literal of the form \\'C' (3.7.2): ", 56), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
}
}
for (;;) {
if ((l_P_1470 == NULL)) goto L_end1473;
{
if ((((*(R17 *)rt_nil_check(l_P_1470))).f_IV == g_K_STR))
{
if ((l_CS_1469 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R9(&l_S_1471, r_CAT(l_S_1471, ((*(R17 *)rt_nil_check(l_P_1470))).f_NAME), 0);
}
else
{
{
R9 l_Q_1474; memset(&l_Q_1474, 0, sizeof l_Q_1474);
S_R9(&l_Q_1474, ((*(R17 *)rt_nil_check(l_P_1470))).f_NAME, 0);
rstr l_QS_1475; memset(&l_QS_1475, 0, sizeof l_QS_1475);
l_QS_1475 = rt_b_str_new((l_Q_1474).f_LEN, 0);
rt_b_assign(&l_QS_1475, r_STR(l_Q_1474, (l_Q_1474).f_LEN));
{ rt_int it1477_lo = ((rt_int)0LL), it1477_hi = rt_sub((l_Q_1474).f_LEN, ((rt_int)1LL));
for (rt_int it1477 = it1477_lo; it1477 <= it1477_hi; it1477++) {
{
{
R9 l_LIT_1478; memset(&l_LIT_1478, 0, sizeof l_LIT_1478);
R12 * l_Y_1479; memset(&l_Y_1479, 0, sizeof l_Y_1479);
if (rt_b_eq(rt_b_slice(l_QS_1475, it1477, it1477), rt_str("'", 1)))
{
S_R9(&l_LIT_1478, r_MKN(rt_str("\\''''", 5)), 0);
}
else
{
S_R9(&l_LIT_1478, r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1475, it1477, it1477)), rt_str("'", 1))), 0);
}
l_Y_1479 = r_FIND_LITERAL(l_LIT_1478, l_CS_1469);
if ((l_Y_1479 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_1470))).f_LINE, rt_b_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1475, it1477, it1477)));
}
S_R9(&l_S_1471, r_CATS(l_S_1471, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1479))).f_MV)), 0);
}
}
RT_B_TICK();
if (it1477 == it1477_hi) break;
} } L_end1476: ;
}
}
}
else
{
{
R12 * l_Y_1480; memset(&l_Y_1480, 0, sizeof l_Y_1480);
l_Y_1480 = r_FIND_LITERAL(((*(R17 *)rt_nil_check(l_P_1470))).f_NAME, l_CS_1469);
if ((l_Y_1480 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_1470))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R17 *)rt_nil_check(l_P_1470))).f_NAME);
}
S_R9(&l_S_1471, r_CATS(l_S_1471, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1480))).f_MV)), 0);
}
}
l_P_1470 = ((*(R17 *)rt_nil_check(l_P_1470))).f_NEXT;
}
RT_B_TICK();
} L_end1473: ;
{
R22 * l_T_1481; memset(&l_T_1481, 0, sizeof l_T_1481);
l_T_1481 = r_STR_TYPE(r_NUM((l_S_1471).f_LEN), r_SOME((l_S_1471).f_LEN));
((*(R22 *)rt_nil_check(l_T_1481))).f_BASE = l_CS_1469;
{ R26 rv1482 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1471), r_NUM((l_S_1471).f_LEN)), l_T_1481);
return rv1482; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_TS_1483; memset(&l_TS_1483, 0, sizeof l_TS_1483);
l_TS_1483 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_TS_1483))).f_NAME, p_NAME, 0);
{ R22 * rv1484 = r_RESOLVE(l_TS_1483);
return rv1484; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1485; memset(&l_Y_1485, 0, sizeof l_Y_1485);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1486; memset(&l_WT_1486, 0, sizeof l_WT_1486);
l_WT_1486 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1486))).f_KIND == g_T_ENUM))
{
l_Y_1485 = r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_WT_1486);
if ((!(l_Y_1485 == NULL)))
{
{ R26 rv1487 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1485))).f_MV), r_ENUM_RESULT(l_Y_1485, p_WANT));
return rv1487; }
}
}
}
}
l_Y_1485 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1488; memset(&l_FOUND_1488, 0, sizeof l_FOUND_1488);
l_FOUND_1488 = NULL;
rt_int l_N_1489; memset(&l_N_1489, 0, sizeof l_N_1489);
l_N_1489 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1485 == NULL)) goto L_end1490;
{
if ((((*(R12 *)rt_nil_check(l_Y_1485))).f_KIND == g_Y_ENUMLIT))
{
if ((l_FOUND_1488 == NULL))
{
l_FOUND_1488 = l_Y_1485;
}
else if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1488))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1485))).f_T))).f_BASE)))
{
l_N_1489 = rt_add(l_N_1489, ((rt_int)1LL));
}
}
l_Y_1485 = r_LOOKUP_NEXT(l_Y_1485);
}
RT_B_TICK();
} L_end1490: ;
if ((l_FOUND_1488 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1489 > ((rt_int)0LL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1491 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1488))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1488))).f_T);
return rv1491; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1492 = p_WANT;
return rv1492; }
}
if ((!(((*(R22 *)rt_nil_check(p_WANT))).f_REPS == NULL)))
{
{
R22 * l_T_1493; memset(&l_T_1493, 0, sizeof l_T_1493);
l_T_1493 = r_COPY_TYP(((*(R12 *)rt_nil_check(p_Y))).f_T);
((*(R22 *)rt_nil_check(l_T_1493))).f_REPS = ((*(R22 *)rt_nil_check(p_WANT))).f_REPS;
{ R22 * rv1494 = l_T_1493;
return rv1494; }
}
}
{ R22 * rv1495 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1495; }
rt_raise(RT_X_INIT);
}
static rt_int r_CONSTRUCTOR_WANTED(R22 * p_WANT) { RT_B_TICK(); 
if ((p_WANT == NULL))
{
{ rt_int rv1496 = 0;
return rv1496; }
}
{ rt_int rv1497 = ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM));
return rv1497; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_OBJECT(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1498; memset(&l_Y_1498, 0, sizeof l_Y_1498);
l_Y_1498 = r_LOOKUP(p_NAME);
if ((l_Y_1498 == NULL))
{
{ rt_int rv1499 = 0;
return rv1499; }
}
{ rt_int rv1500 = (((((*(R12 *)rt_nil_check(l_Y_1498))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1498))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1498))).f_KIND == g_Y_ROUTINE));
return rv1500; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STD_REPTYPE(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv1501 = (((((((((r_TEQS(p_NAME, rt_str("FIXED_STD", 9)) || r_TEQS(p_NAME, rt_str("FLOAT_STD", 9))) || r_TEQS(p_NAME, rt_str("BOOLEAN_STD", 11))) || r_TEQS(p_NAME, rt_str("ENUM_STD", 8))) || r_TEQS(p_NAME, rt_str("CHAR_STR_STD", 12))) || r_TEQS(p_NAME, rt_str("BIT_STD", 7))) || r_TEQS(p_NAME, rt_str("ARRAY_STD", 9))) || r_TEQS(p_NAME, rt_str("RECORD_STD", 10))) || r_TEQS(p_NAME, rt_str("PTR_STD", 7))) || r_TEQS(p_NAME, rt_str("SEMAPHORE_STD", 13)));
return rv1501; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_REPTYPE_NAME(R9 p_NAME) { RT_B_TICK(); 
if (((((((r_IS_STD_REPTYPE(p_NAME) || r_TEQS(p_NAME, rt_str("FIXED_REP", 9))) || r_TEQS(p_NAME, rt_str("ENUM_REP", 8))) || r_TEQS(p_NAME, rt_str("ENUM_VAL_REP", 12))) || r_TEQS(p_NAME, rt_str("CHAR_STR_REP", 12))) || r_TEQS(p_NAME, rt_str("ARRAY_REP", 9))) || r_TEQS(p_NAME, rt_str("RECORD_REP", 10))))
{
{ rt_int rv1502 = (r_LOOKUP(p_NAME) == NULL);
return rv1502; }
}
if ((!(r_ORIG_LOOKUP(p_NAME) == NULL)))
{
{ rt_int rv1503 = (((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(p_NAME)))).f_KIND == g_Y_REPTYPE);
return rv1503; }
}
{ rt_int rv1504 = 0;
return rv1504; }
rt_raise(RT_X_INIT);
}
static R26 r_REP_CONVERTER(R17 * p_S, R17 * p_E, rt_int p_LINE) { RT_B_TICK(); 
R26 l_V_1505; memset(&l_V_1505, 0, sizeof l_V_1505);
S_R26(&l_V_1505, r_EXPR(p_E, NULL), 0);
R17 * l_R_1506; memset(&l_R_1506, 0, sizeof l_R_1506);
l_R_1506 = r_NEW_NODE(g_N_REP, p_LINE);
R22 * l_T_1507; memset(&l_T_1507, 0, sizeof l_T_1507);
S_R9(&((*(R17 *)rt_nil_check(l_R_1506))).f_NAME, ((*(R17 *)rt_nil_check(p_S))).f_NAME, 0);
if ((((*(R17 *)rt_nil_check(p_S))).f_KIND == g_N_APPLY))
{
((*(R17 *)rt_nil_check(l_R_1506))).f_A = ((*(R17 *)rt_nil_check(p_S))).f_A;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1505).f_T)))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check((l_V_1505).f_T))).f_KIND == g_T_ABS)))
{
r_FAIL(p_LINE, rt_str("a representation is only for a member of a predefined type class (3.12.2)", 73));
}
l_T_1507 = r_COPY_TYP(r_REAL_TYPE((l_V_1505).f_T));
((*(R22 *)rt_nil_check(l_T_1507))).f_REPS = r_EXPAND_REP(l_R_1506, l_T_1507, p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_REPCONV = 1;
r_CHECK_REP_CLASS(l_T_1507, p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_REPCONV = 0;
if ((r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1507))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1507))).f_REPS))).f_A == NULL))))
{
{
R23 l_N_1508; memset(&l_N_1508, 0, sizeof l_N_1508);
S_R23(&l_N_1508, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1507))).f_REPS))).f_A), 0);
rt_int l_UNS_1509; memset(&l_UNS_1509, 0, sizeof l_UNS_1509);
l_UNS_1509 = ((rt_int)0LL);
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1507))).f_REPS))).f_A))).f_NEXT == NULL)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1507))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8)))
{
l_UNS_1509 = ((rt_int)1LL);
}
}
if ((l_N_1508).f_OK)
{
{ R26 rv1510 = r_MKET(r_FMT3(rt_str("rt_b_fixed_rep(@, @, @)", 23), (l_V_1505).f_C, r_NUM((l_N_1508).f_V), r_NUM(l_UNS_1509)), l_T_1507);
return rv1510; }
}
}
}
{ R26 rv1511 = r_MKET((l_V_1505).f_C, l_T_1507);
return rv1511; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1512; memset(&l_Y_1512, 0, sizeof l_Y_1512);
l_Y_1512 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1512 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_1512))).f_WITHV == ((rt_int)2LL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the variable is named by a WITH NAMING and not known in its statement (4.5.4): ", 79), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((((((*(R12 *)rt_nil_check(l_Y_1512))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL))) && (!((*(R12 *)rt_nil_check(l_Y_1512))).f_INPUT)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type or reptype declaration is a closed scope: no variable from outside (3.12.1, 3.12.3): ", 92), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1512))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a record-spec is a closed scope: no variable from outside (3.9.1): ", 67), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1512))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1512))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1513; memset(&l_WRITABLE_1513, 0, sizeof l_WRITABLE_1513);
l_WRITABLE_1513 = (r_SEG_VISIBLE(l_Y_1512, ((*(R17 *)rt_nil_check(p_E))).f_LINE) && r_CHECK_IMPORTED(l_Y_1512, ((*(R17 *)rt_nil_check(p_E))).f_LINE));
{ R26 rv1514 = r_MKLV(r_OBJ_ACCESS(l_Y_1512), ((*(R12 *)rt_nil_check(l_Y_1512))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1512))).f_KIND == g_Y_VAR) && l_WRITABLE_1513), r_NO_TEXT());
return rv1514; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1512))).f_KIND == g_Y_GEN))
{
{ R26 rv1515 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1512))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1512))).f_T);
return rv1515; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1512))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1516 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1516; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1512))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1512))).f_KIND == g_Y_BUILTIN)))
{
{
R17 * l_N_1517; memset(&l_N_1517, 0, sizeof l_N_1517);
l_N_1517 = r_NEW_NODE(g_N_APPLY, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1517))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1518 = r_CALL_EXPR(l_N_1517, p_WANT);
return rv1518; }
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R17 * p_E) { RT_B_TICK(); 
R17 * l_A_1519; memset(&l_A_1519, 0, sizeof l_A_1519);
l_A_1519 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))) && r_IS_NUMBER_LITERAL(l_A_1519)))
{
{ R26 rv1520 = r_EXPR(l_A_1519, NULL);
return rv1520; }
}
if ((((*(R17 *)rt_nil_check(l_A_1519))).f_KIND == g_N_INDEX))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1519))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1519))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1521; memset(&l_B_1521, 0, sizeof l_B_1521);
S_R26(&l_B_1521, r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1519))).f_A))).f_A), 0);
R9 l_I_1522; memset(&l_I_1522, 0, sizeof l_I_1522);
S_R9(&l_I_1522, r_INT_EXPR(((*(R17 *)rt_nil_check(l_A_1519))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1521).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1523 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1521).f_C, l_I_1522, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1521).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1523; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1524 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1521).f_C, l_I_1522, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1521).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1524; }
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R17 *)rt_nil_check(l_A_1519))).f_KIND == g_N_PAREN))
{
if (r_IS_TYPE_ATTR(((*(R17 *)rt_nil_check(l_A_1519))).f_A))
{
{ R26 rv1525 = r_ATTRIBUTE(r_TYPE_VALUE_OF(r_TYPE_ATTR_TYPE(((*(R17 *)rt_nil_check(l_A_1519))).f_A)), ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1525; }
}
}
if ((((*(R17 *)rt_nil_check(l_A_1519))).f_KIND == g_N_PAREN))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1519))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1519))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1519))).f_A))).f_A))).f_NAME))
{
{ R26 rv1526 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1519))).f_A))).f_A))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1519))).f_A))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1526; }
}
}
}
}
if ((((*(R17 *)rt_nil_check(l_A_1519))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1527; memset(&l_Y_1527, 0, sizeof l_Y_1527);
l_Y_1527 = r_LOOKUP(((*(R17 *)rt_nil_check(l_A_1519))).f_NAME);
if ((!(l_Y_1527 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1527))).f_KIND == g_Y_TYPE))
{
{ R26 rv1528 = r_TYPE_ATTRIBUTE(((*(R17 *)rt_nil_check(l_A_1519))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1528; }
}
}
else if (r_IS_TYPE_WORD(((*(R17 *)rt_nil_check(l_A_1519))).f_NAME))
{
{ R26 rv1529 = r_TYPE_ATTRIBUTE(((*(R17 *)rt_nil_check(l_A_1519))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1529; }
}
}
}
{
R26 l_B_1530; memset(&l_B_1530, 0, sizeof l_B_1530);
S_R26(&l_B_1530, r_EXPR(l_A_1519, NULL), 0);
R22 * l_BT_1531; memset(&l_BT_1531, 0, sizeof l_BT_1531);
l_BT_1531 = (l_B_1530).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1531))).f_KIND == g_T_REC))
{
{
R24 * l_F_1532; memset(&l_F_1532, 0, sizeof l_F_1532);
l_F_1532 = r_FIND_VFIELD(l_BT_1531, ((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1532 == NULL)))
{
r_CHECK_VARIANT(l_F_1532, l_BT_1531, l_A_1519, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R24 *)rt_nil_check(l_F_1532))).f_KIND == ((rt_int)2LL)) && r_HAS_ANY(l_BT_1531)))
{
{ R26 rv1533 = r_MKET(r_FMT2(rt_str("rt_b_tag((@).@)", 15), (l_B_1530).f_C, ((*(R24 *)rt_nil_check(l_F_1532))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1532))).f_T);
return rv1533; }
}
{ R26 rv1534 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1530).f_C, ((*(R24 *)rt_nil_check(l_F_1532))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1532))).f_T, ((l_B_1530).f_LVAL && (((*(R24 *)rt_nil_check(l_F_1532))).f_KIND == ((rt_int)0LL))), (l_B_1530).f_C);
return rv1534; }
}
}
}
{ R26 rv1535 = r_ATTRIBUTE(l_B_1530, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1535; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_FIXED_LITERAL(R17 * p_A) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1536 = (r_IS_FIXED_LITERAL(((*(R17 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R17 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1536; }
}
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_INT))
{
{ rt_int rv1537 = 1;
return rv1537; }
}
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_REAL))
{
if ((((*(R17 *)rt_nil_check(p_A))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv1538 = 1;
return rv1538; }
}
{
R9 l_NM_1539; memset(&l_NM_1539, 0, sizeof l_NM_1539);
S_R9(&l_NM_1539, ((*(R17 *)rt_nil_check(p_A))).f_NAME, 0);
rstr l_S_1540; memset(&l_S_1540, 0, sizeof l_S_1540);
l_S_1540 = rt_b_str_new((l_NM_1539).f_LEN, 0);
rt_b_assign(&l_S_1540, r_STR(l_NM_1539, (l_NM_1539).f_LEN));
{ rt_int it1542_lo = ((rt_int)0LL), it1542_hi = rt_sub((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN, ((rt_int)1LL));
for (rt_int it1542 = it1542_lo; it1542 <= it1542_hi; it1542++) {
{
if (rt_b_eq(rt_b_slice(l_S_1540, it1542, it1542), rt_str(".", 1)))
{
{ rt_int rv1543 = 0;
return rv1543; }
}
}
RT_B_TICK();
if (it1542 == it1542_hi) break;
} } L_end1541: ;
}
{ rt_int rv1544 = 1;
return rv1544; }
}
{ rt_int rv1545 = 0;
return rv1545; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMBER_LITERAL(R17 * p_A) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1546 = (r_IS_NUMBER_LITERAL(((*(R17 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R17 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1546; }
}
{ rt_int rv1547 = ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_INT) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_REAL));
return rv1547; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv1548 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1548; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R24 * p_F, R22 * p_T, R17 * p_BASE, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R24 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R23 l_TAGV_1549; memset(&l_TAGV_1549, 0, sizeof l_TAGV_1549);
S_R23(&l_TAGV_1549, r_TAG_VALUE(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1549).f_OK))
{
r_FAILT(p_LINE, rt_b_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R24 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1549).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R24 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R24 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R23 r_TAG_VALUE(R22 * p_T, R9 p_TAGN) { RT_B_TICK(); 
R24 * l_F_1550; memset(&l_F_1550, 0, sizeof l_F_1550);
l_F_1550 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_1551; memset(&l_A_1551, 0, sizeof l_A_1551);
l_A_1551 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1550 == NULL)) goto L_end1552;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1550))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1551 == NULL))
{
{ R23 rv1553 = r_NO_MVAL();
return rv1553; }
}
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_1550))).f_NAME, p_TAGN))
{
if (((*(R25 *)rt_nil_check(l_A_1551))).f_ANYARG)
{
{ R23 rv1554 = r_NO_MVAL();
return rv1554; }
}
{ R23 rv1555 = ((*(R25 *)rt_nil_check(l_A_1551))).f_MLO;
return rv1555; }
}
l_A_1551 = ((*(R25 *)rt_nil_check(l_A_1551))).f_NEXT;
}
l_F_1550 = ((*(R24 *)rt_nil_check(l_F_1550))).f_NEXT;
}
RT_B_TICK();
} L_end1552: ;
{ R23 rv1556 = r_NO_MVAL();
return rv1556; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R17 * p_L, rt_int p_V, R22 * p_T) { RT_B_TICK(); 
R17 * l_P_1557; memset(&l_P_1557, 0, sizeof l_P_1557);
l_P_1557 = p_L;
for (;;) {
if ((l_P_1557 == NULL)) goto L_end1558;
{
if ((((*(R17 *)rt_nil_check(l_P_1557))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_P_1557))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_P_1557))).f_B, p_T)).f_V)))
{
{ rt_int rv1559 = 1;
return rv1559; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1557, p_T)).f_V == p_V))
{
{ rt_int rv1560 = 1;
return rv1560; }
}
l_P_1557 = ((*(R17 *)rt_nil_check(l_P_1557))).f_NEXT;
}
RT_B_TICK();
} L_end1558: ;
{ rt_int rv1561 = 0;
return rv1561; }
rt_raise(RT_X_INIT);
}
static R26 r_VALUE_OR_TYPE(R17 * p_E) { RT_B_TICK(); 
if (r_IS_TYPE_NAME(p_E))
{
{ R26 rv1562 = r_TYPE_VALUE(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1562; }
}
{ R26 rv1563 = r_EXPR(p_E, NULL);
return rv1563; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R17 * p_E) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1564; memset(&l_A_1564, 0, sizeof l_A_1564);
S_R26(&l_A_1564, r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_A), 0);
R9 l_I_1565; memset(&l_I_1565, 0, sizeof l_I_1565);
S_R9(&l_I_1565, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1564).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1566 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1564).f_C, (l_A_1564).f_C, l_I_1565, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1564).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1566; }
}
}
}
{ R26 rv1567 = r_INDEX_EXPR2(p_E);
return rv1567; }
rt_raise(RT_X_INIT);
}
static R9 r_INDEX_VALUE(R17 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1568; memset(&l_SAVED_1568, 0, sizeof l_SAVED_1568);
l_SAVED_1568 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_1569; memset(&l_SAVED_Q_1569, 0, sizeof l_SAVED_Q_1569);
l_SAVED_Q_1569 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1570; memset(&l_V_1570, 0, sizeof l_V_1570);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1570, r_EXPR(p_E, NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1568;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1569;
{ R9 rv1571 = r_INDEX_OF(l_V_1570, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1571; }
rt_raise(RT_X_INIT);
}
static R9 r_INDEX_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1572; memset(&l_T_1572, 0, sizeof l_T_1572);
l_T_1572 = r_REAL_TYPE((p_V).f_T);
if (((((*(R22 *)rt_nil_check((p_V).f_T))).f_KIND == g_T_ABS) || (((((*(R22 *)rt_nil_check(l_T_1572))).f_KIND == g_T_ENUM) && ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1572))).f_BASE))).f_UNORDERED || (!(((*(R22 *)rt_nil_check(l_T_1572))).f_REPS == NULL))))))))
{
{
R27 * l_ARGS_1573; memset(&l_ARGS_1573, 0, sizeof l_ARGS_1573);
l_ARGS_1573 = r_VAL_ARG(p_V, NULL);
R12 * l_Y_1574; memset(&l_Y_1574, 0, sizeof l_Y_1574);
l_Y_1574 = r_FIND_ROUTINE(r_MKN(rt_str("TO_FIXED", 8)), l_ARGS_1573, p_LINE, 0);
if ((l_Y_1574 == NULL))
{
r_FAILT(p_LINE, rt_str("an index of this type needs a TO_FIXED of the program (3.8.1): ", 63), r_TYPE_NAME((p_V).f_T));
}
{ R9 rv1575 = (r_CALL_SYM(l_Y_1574, l_ARGS_1573, p_LINE)).f_C;
return rv1575; }
}
}
if ((((*(R22 *)rt_nil_check(l_T_1572))).f_KIND == g_T_ENUM))
{
{ R9 rv1576 = (p_V).f_C;
return rv1576; }
}
if (((!(((*(R22 *)rt_nil_check(l_T_1572))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_1572))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(p_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((p_V).f_T));
}
{ R9 rv1577 = (p_V).f_C;
return rv1577; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R17 * p_E) { RT_B_TICK(); 
R26 l_B_1578; memset(&l_B_1578, 0, sizeof l_B_1578);
S_R26(&l_B_1578, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1579; memset(&l_T_1579, 0, sizeof l_T_1579);
l_T_1579 = r_REAL_TYPE((l_B_1578).f_T);
R17 * l_S_1580; memset(&l_S_1580, 0, sizeof l_S_1580);
l_S_1580 = ((*(R17 *)rt_nil_check(p_E))).f_B;
R9 l_IX_1581; memset(&l_IX_1581, 0, sizeof l_IX_1581);
S_R9(&l_IX_1581, r_MK(rt_str("", 0)), 0);
rt_int l_N_1582; memset(&l_N_1582, 0, sizeof l_N_1582);
l_N_1582 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1579))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1580 == NULL)) goto L_end1583;
{
if ((l_N_1582 > ((rt_int)0LL)))
{
S_R9(&l_IX_1581, r_CATS(l_IX_1581, rt_str(", ", 2)), 0);
}
S_R9(&l_IX_1581, r_CAT(l_IX_1581, r_INDEX_VALUE(l_S_1580)), 0);
l_N_1582 = rt_add(l_N_1582, ((rt_int)1LL));
l_S_1580 = ((*(R17 *)rt_nil_check(l_S_1580))).f_NEXT;
}
RT_B_TICK();
} L_end1583: ;
if ((!(l_N_1582 == ((*(R22 *)rt_nil_check(l_T_1579))).f_DIMS)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1582 == ((rt_int)1LL)))
{
{ R26 rv1584 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1578).f_C, l_IX_1581, (l_B_1578).f_C, (l_B_1578).f_C), ((*(R22 *)rt_nil_check(l_T_1579))).f_ELEM, (l_B_1578).f_LVAL, r_NO_TEXT());
return rv1584; }
}
{
R9 l_X_1585; memset(&l_X_1585, 0, sizeof l_X_1585);
S_R9(&l_X_1585, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1578).f_C, r_NUM(l_N_1582), (l_B_1578).f_C, (l_B_1578).f_C), 0);
{ R26 rv1586 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1585, l_IX_1581), ((*(R22 *)rt_nil_check(l_T_1579))).f_ELEM, (l_B_1578).f_LVAL, r_NO_TEXT());
return rv1586; }
}
rt_raise(RT_X_INIT);
}
static R9 r_OP_NAME(R9 p_OP, rt_int p_UNARY) { RT_B_TICK(); 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R9 rv1587 = r_MKN(rt_str("NEGATE_", 7));
return rv1587; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R9 rv1588 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1588; }
}
{ R9 rv1589 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1589; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R9 rv1590 = r_MKN(rt_str("ADD_", 4));
return rv1590; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R9 rv1591 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1591; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R9 rv1592 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1592; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R9 rv1593 = r_MKN(rt_str("DIVIDE_", 7));
return rv1593; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R9 rv1594 = r_MKN(rt_str("MODULUS_", 8));
return rv1594; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R9 rv1595 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1595; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R9 rv1596 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1596; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R9 rv1597 = r_MKN(rt_str("EQUAL_", 6));
return rv1597; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R9 rv1598 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1598; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R9 rv1599 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1599; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R9 rv1600 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1600; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R9 rv1601 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1601; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R9 rv1602 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1602; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R9 rv1603 = r_MKN(rt_str("AND_", 4));
return rv1603; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R9 rv1604 = r_MKN(rt_str("OR_", 3));
return rv1604; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R9 rv1605 = r_MKN(rt_str("XOR_", 4));
return rv1605; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R9 rv1606 = r_MKN(rt_str("IMPLIES_", 8));
return rv1606; }
}
{ R9 rv1607 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1607; }
rt_raise(RT_X_INIT);
}
static R27 * r_VAL_ARG(R26 p_V, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1608; memset(&l_A_1608, 0, sizeof l_A_1608);
l_A_1608 = ((R27 *)rt_b_new(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1608)), ({ R27 rc1609; memset(&rc1609, 0, sizeof rc1609);  rc1609.f_E = NULL; S_R26(&rc1609.f_V, p_V, 0); rc1609.f_HAVE = 1; rc1609.f_MODE = g_M_IN; rc1609.f_NEXT = p_NEXT; rc1609; }), 0);
{ R27 * rv1610 = l_A_1608;
return rv1610; }
rt_raise(RT_X_INIT);
}
static R27 * r_NODE_ARG(R17 * p_E, rt_int p_MODE, R27 * p_NEXT) { RT_B_TICK(); 
R27 * l_A_1611; memset(&l_A_1611, 0, sizeof l_A_1611);
l_A_1611 = ((R27 *)rt_b_new(sizeof (R27)));
S_R27(&(*(R27 *)rt_nil_check(l_A_1611)), ({ R27 rc1612; memset(&rc1612, 0, sizeof rc1612);  rc1612.f_E = p_E; S_R26(&rc1612.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1612.f_HAVE = 0; rc1612.f_MODE = p_MODE; rc1612.f_NEXT = p_NEXT; rc1612; }), 0);
{ R27 * rv1613 = l_A_1611;
return rv1613; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R9 p_NAME, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1614; memset(&l_Y_1614, 0, sizeof l_Y_1614);
l_Y_1614 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1614 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1614 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1615 = l_Y_1614;
return rv1615; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_USER_ROUTINE(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1616; memset(&l_Y_1616, 0, sizeof l_Y_1616);
l_Y_1616 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_1616 == NULL)) goto L_end1617;
{
if ((((*(R12 *)rt_nil_check(l_Y_1616))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1618 = 1;
return rv1618; }
}
l_Y_1616 = r_LOOKUP_NEXT(l_Y_1616);
}
RT_B_TICK();
} L_end1617: ;
l_Y_1616 = r_LOOKUP(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))));
for (;;) {
if ((l_Y_1616 == NULL)) goto L_end1619;
{
if ((((*(R12 *)rt_nil_check(l_Y_1616))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1620 = 1;
return rv1620; }
}
l_Y_1616 = r_LOOKUP_NEXT(l_Y_1616);
}
RT_B_TICK();
} L_end1619: ;
{ rt_int rv1621 = 0;
return rv1621; }
rt_raise(RT_X_INIT);
}
static R27 * r_QUAL_ARGS(rt_int p_LINE) { RT_B_TICK(); 
R17 * l_Q_1622; memset(&l_Q_1622, 0, sizeof l_Q_1622);
l_Q_1622 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_R_1623; memset(&l_R_1623, 0, sizeof l_R_1623);
l_R_1623 = NULL;
if ((l_Q_1622 == NULL))
{
{ R27 * rv1624 = NULL;
return rv1624; }
}
if (((((*(R17 *)rt_nil_check(l_Q_1622))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_R_1623 = r_VAL_ARG(r_ENUM_LITERAL(r_LIT_NODE_T(((*(R17 *)rt_nil_check(l_Q_1622))).f_NAME, p_LINE), r_ROUNDINGS_TYPE()), NULL);
}
if ((!(((*(R17 *)rt_nil_check(l_Q_1622))).f_B == NULL)))
{
l_R_1623 = r_VAL_ARG(r_EXPR(((*(R17 *)rt_nil_check(l_Q_1622))).f_B, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_R_1623);
}
{ R27 * rv1625 = l_R_1623;
return rv1625; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R9 p_NAME, R26 p_A, R17 * p_B, R17 * p_C, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_ARGS_1626; memset(&l_ARGS_1626, 0, sizeof l_ARGS_1626);
l_ARGS_1626 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1627; memset(&l_Y_1627, 0, sizeof l_Y_1627);
l_Y_1627 = r_USER_OPERATOR(p_NAME, l_ARGS_1626, p_LINE);
if ((l_Y_1627 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1628 = r_CALL_SYM(l_Y_1627, l_ARGS_1626, p_LINE);
return rv1628; }
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
{ R9 rv1629 = p_C;
return rv1629; }
}
if ((p_STO > p_SFROM))
{
{ R9 rv1630 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1630; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R9 rv1631 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1631; }
}
{ R9 rv1632 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1632; }
rt_raise(RT_X_INIT);
}
static R9 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R9 rv1633 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1633; }
rt_raise(RT_X_INIT);
}
static R9 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R9 p_SELF) { RT_B_TICK(); 
R22 * l_RT_1634; memset(&l_RT_1634, 0, sizeof l_RT_1634);
l_RT_1634 = r_REAL_TYPE(p_T);
R22 * l_VT_1635; memset(&l_VT_1635, 0, sizeof l_VT_1635);
l_VT_1635 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1635))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1634))).f_KIND == g_T_PTR)))
{
{ R9 rv1636 = (p_V).f_C;
return rv1636; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1635))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1635)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R9 rv1637 = (p_V).f_C;
return rv1637; }
}
if ((!r_SAME_CLASS(l_RT_1634, l_VT_1635)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1635), (r_TYPE_NAME(l_VT_1635)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1634), (r_TYPE_NAME(l_RT_1634)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1634))).f_KIND == g_T_INT))
{
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_RT_1634))).f_SCALE))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE == ((*(R22 *)rt_nil_check(l_RT_1634))).f_SCALE))
{
{ R9 rv1638 = r_RANGE_CHECK(l_RT_1634, (p_V).f_C, p_SELF);
return rv1638; }
}
{ R9 rv1639 = r_RANGE_CHECK(l_RT_1634, r_FMT3(rt_str("rt_b_conv(@, @, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(l_RT_1634))).f_SCALE)), p_SELF);
return rv1639; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1634))).f_KIND == g_T_FLOAT))
{
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_RT_1634))).f_SCALE) < r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1635))).f_SCALE)))
{
{ R9 rv1640 = r_RANGE_CHECK(l_RT_1634, r_FMT3(rt_str("rt_b_fconv(@, @, @, 1)", 22), (p_V).f_C, r_SINGLE_C(((*(R22 *)rt_nil_check(l_RT_1634))).f_SCALE), r_FLOAT_TRUNC()), p_SELF);
return rv1640; }
}
{ R9 rv1641 = r_RANGE_CHECK(l_RT_1634, (p_V).f_C, p_SELF);
return rv1641; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1634))).f_KIND == g_T_ENUM))
{
if (((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1634))).f_BASE))).f_UNORDERED && ((r_HAS_VALUES(l_RT_1634) || r_HAS_VALUES(l_VT_1635)))) && (!r_SAME_REPS(l_RT_1634, l_VT_1635))))
{
r_FAIL(p_LINE, rt_str("an UNORDERED value with ENUM_VAL_REP is assigned only with the same reptype (3.4.5)", 83));
}
{ R9 rv1642 = r_RANGE_CHECK(l_RT_1634, (p_V).f_C, p_SELF);
return rv1642; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1634))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1634))).f_KIND == g_T_BITS)))
{
r_SAME_CHARSET(l_RT_1634, l_VT_1635, p_LINE);
if (((((*(R22 *)rt_nil_check(l_RT_1634))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1635))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1634))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1635))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1634))).f_KIND == g_T_PTR))
{
if ((!r_IDENTICAL_TYPE(r_TARGET(l_RT_1634), r_TARGET(l_VT_1635))))
{
r_FAIL(p_LINE, rt_str("the ELEMENT_TYPE of the pointers are not identical (3.10.5)", 59));
}
{ R9 rv1643 = r_TARGET_ARGS_CHECK(r_TARGET(l_RT_1634), r_TARGET(l_VT_1635), (p_V).f_C);
return rv1643; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1634))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1634)) && (!r_HAS_ANY(l_VT_1635))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1634))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1635))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1634))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1634))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1635))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
if ((!r_SAME_EXTENTS(l_RT_1634, l_VT_1635)))
{
r_FAIL(p_LINE, rt_str("the arrays have different EXTENT attributes (3.8.5)", 51));
}
}
{ R9 rv1644 = (p_V).f_C;
return rv1644; }
rt_raise(RT_X_INIT);
}
static R9 r_STORE_CODE(R22 * p_T, R9 p_LV, R26 p_V, rt_int p_LINE, R9 p_SELF) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1645; memset(&l_ARGS_1645, 0, sizeof l_ARGS_1645);
l_ARGS_1645 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1646; memset(&l_Y_1646, 0, sizeof l_Y_1646);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_SQUAL == NULL)))
{
{
R17 * l_SAVED_Q_1647; memset(&l_SAVED_Q_1647, 0, sizeof l_SAVED_Q_1647);
l_SAVED_Q_1647 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R27 * l_X_1648; memset(&l_X_1648, 0, sizeof l_X_1648);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
l_X_1648 = r_QUAL_ARGS(p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1647;
if ((!(l_X_1648 == NULL)))
{
{
R27 * l_P_1649; memset(&l_P_1649, 0, sizeof l_P_1649);
l_P_1649 = l_X_1648;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_P_1649))).f_NEXT == NULL)) goto L_end1650;
{
l_P_1649 = ((*(R27 *)rt_nil_check(l_P_1649))).f_NEXT;
}
RT_B_TICK();
} L_end1650: ;
((*(R27 *)rt_nil_check(l_P_1649))).f_NEXT = ((*(R27 *)rt_nil_check(l_ARGS_1645))).f_NEXT;
((*(R27 *)rt_nil_check(l_ARGS_1645))).f_NEXT = l_X_1648;
}
}
}
}
{
R27 * l_LAST_1651; memset(&l_LAST_1651, 0, sizeof l_LAST_1651);
l_LAST_1651 = l_ARGS_1645;
for (;;) {
if ((((*(R27 *)rt_nil_check(l_LAST_1651))).f_NEXT == NULL)) goto L_end1652;
{
l_LAST_1651 = ((*(R27 *)rt_nil_check(l_LAST_1651))).f_NEXT;
}
RT_B_TICK();
} L_end1652: ;
((*(R27 *)rt_nil_check(l_LAST_1651))).f_MODE = g_M_OUT;
l_Y_1646 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1645, p_LINE, 0);
if ((l_Y_1646 == NULL))
{
((*(R27 *)rt_nil_check(l_LAST_1651))).f_MODE = g_M_INOUT;
l_Y_1646 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1645, p_LINE, 0);
}
}
if ((l_Y_1646 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R9 rv1653 = r_CATS((r_CALL_SYM(l_Y_1646, l_ARGS_1645, p_LINE)).f_C, rt_str(";", 1));
return rv1653; }
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
if ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, (p_V).f_T)))
{
{ R9 rv1654 = r_COMPONENT_STORE(p_T, (p_V).f_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF), p_LINE);
return rv1654; }
}
}
{ R9 rv1655 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1655; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ABS_PART(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ rt_int rv1656 = 1;
return rv1656; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{ rt_int rv1657 = r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM);
return rv1657; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R24 * l_F_1658; memset(&l_F_1658, 0, sizeof l_F_1658);
l_F_1658 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1658 == NULL)) goto L_end1659;
{
if ((((*(R24 *)rt_nil_check(l_F_1658))).f_KIND == ((rt_int)0LL)))
{
if (r_HAS_ABS_PART(((*(R24 *)rt_nil_check(l_F_1658))).f_T))
{
{ rt_int rv1660 = 1;
return rv1660; }
}
}
l_F_1658 = ((*(R24 *)rt_nil_check(l_F_1658))).f_NEXT;
}
RT_B_TICK();
} L_end1659: ;
}
}
{ rt_int rv1661 = 0;
return rv1661; }
rt_raise(RT_X_INIT);
}
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT) { RT_B_TICK(); 
if (((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_KIND == g_T_ARR))))
{
{ rt_int rv1662 = 0;
return rv1662; }
}
if ((!r_IS_NUMERIC_OR_ENUM(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM))))
{
{ rt_int rv1663 = 0;
return rv1663; }
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1664 = 0;
return rv1664; }
}
{ rt_int rv1665 = (!r_SAME_RANGE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM));
return rv1665; }
rt_raise(RT_X_INIT);
}
static R9 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R9 p_LV, R9 p_RV, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R9 rv1666 = r_STORE_CODE(p_T, p_LV, r_MKET(p_RV, p_VT), p_LINE, r_NO_TEXT());
return rv1666; }
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, p_VT)))))
{
{
R9 l_D_1667; memset(&l_D_1667, 0, sizeof l_D_1667);
S_R9(&l_D_1667, r_NEW_NAME(rt_str("ad", 2)), 0);
R9 l_S_1668; memset(&l_S_1668, 0, sizeof l_S_1668);
S_R9(&l_S_1668, r_NEW_NAME(rt_str("as", 2)), 0);
R9 l_I_1669; memset(&l_I_1669, 0, sizeof l_I_1669);
S_R9(&l_I_1669, r_NEW_NAME(rt_str("ai", 2)), 0);
R9 l_N_1670; memset(&l_N_1670, 0, sizeof l_N_1670);
S_R9(&l_N_1670, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R22 * l_VE_1671; memset(&l_VE_1671, 0, sizeof l_VE_1671);
l_VE_1671 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM;
R9 l_R_1672; memset(&l_R_1672, 0, sizeof l_R_1672);
S_R9(&l_R_1672, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1667, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R9(&l_R_1672, r_FMT3(rt_str("@@ = @; if (!rt_b_same_extents(", 31), l_R_1672, l_S_1668, p_RV), 0);
S_R9(&l_R_1672, r_FMT4(rt_str("@@, @->lo, @->hi, ", 18), l_R_1672, l_N_1670, l_D_1667, l_D_1667), 0);
S_R9(&l_R_1672, r_FMT3(rt_str("@@.lo, @.hi)) rt_raise(RT_B_SIZE); ", 35), l_R_1672, l_S_1668, l_S_1668), 0);
S_R9(&l_R_1672, r_FMT4(rt_str("@rt_int @n = rt_b_extent(@, @->lo, ", 35), l_R_1672, l_I_1669, l_N_1670, l_D_1667), 0);
S_R9(&l_R_1672, r_FMT2(rt_str("@@->hi);", 8), l_R_1672, l_D_1667), 0);
if (r_ELEMENTS_NEED_CHECK(p_T, p_VT))
{
S_R9(&l_R_1672, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1672, l_I_1669, l_I_1669, l_I_1669), 0);
S_R9(&l_R_1672, r_FMT3(rt_str("@@++) (void)@;", 14), l_R_1672, l_I_1669, r_RANGE_CHECK(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_S_1668, l_I_1669), r_NO_TEXT())), 0);
}
S_R9(&l_R_1672, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1672, l_I_1669, l_I_1669, l_I_1669), 0);
if (((r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_REC)) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_ARR)))
{
S_R9(&l_R_1672, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1672, l_I_1669, r_COMPONENT_STORE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, l_VE_1671, r_FMT2(rt_str("@->p[@]", 7), l_D_1667, l_I_1669), r_FMT2(rt_str("@.p[@]", 6), l_S_1668, l_I_1669), p_LINE)), 0);
}
else
{
S_R9(&l_R_1672, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1672, l_I_1669, r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@->p[@]", 7), l_D_1667, l_I_1669), r_FMT2(rt_str("@.p[@]", 6), l_S_1668, l_I_1669))), 0);
}
{ R9 rv1673 = l_R_1672;
return rv1673; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_D_1674; memset(&l_D_1674, 0, sizeof l_D_1674);
S_R9(&l_D_1674, r_NEW_NAME(rt_str("rd", 2)), 0);
R9 l_S_1675; memset(&l_S_1675, 0, sizeof l_S_1675);
S_R9(&l_S_1675, r_NEW_NAME(rt_str("rs", 2)), 0);
R24 * l_F_1676; memset(&l_F_1676, 0, sizeof l_F_1676);
l_F_1676 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_R_1677; memset(&l_R_1677, 0, sizeof l_R_1677);
S_R9(&l_R_1677, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1674, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R9(&l_R_1677, r_FMT3(rt_str("@@ = @;", 7), l_R_1677, l_S_1675, p_RV), 0);
for (;;) {
if ((l_F_1676 == NULL)) goto L_end1678;
{
{
R9 l_DF_1679; memset(&l_DF_1679, 0, sizeof l_DF_1679);
S_R9(&l_DF_1679, r_FMT2(rt_str("@->@", 4), l_D_1674, ((*(R24 *)rt_nil_check(l_F_1676))).f_CNAME), 0);
R9 l_SF_1680; memset(&l_SF_1680, 0, sizeof l_SF_1680);
S_R9(&l_SF_1680, r_FMT2(rt_str("@.@", 3), l_S_1675, ((*(R24 *)rt_nil_check(l_F_1676))).f_CNAME), 0);
if (((((*(R24 *)rt_nil_check(l_F_1676))).f_KIND == ((rt_int)1LL)) || (((((*(R24 *)rt_nil_check(l_F_1676))).f_KIND == ((rt_int)2LL)) && (!r_HAS_ANY(p_T))))))
{
S_R9(&l_R_1677, r_FMT2(rt_str("@ if (!(@)) rt_raise(RT_B_TYPE_MISMATCH);", 41), l_R_1677, r_EQUAL_CODE(((*(R24 *)rt_nil_check(l_F_1676))).f_T, l_DF_1679, l_SF_1680)), 0);
}
else if ((((*(R24 *)rt_nil_check(l_F_1676))).f_KIND == ((rt_int)2LL)))
{
S_R9(&l_R_1677, r_FMT3(rt_str("@ @ = @;", 8), l_R_1677, l_DF_1679, l_SF_1680), 0);
}
else
{
S_R9(&l_R_1677, r_FMT2(rt_str("@ @", 3), l_R_1677, r_COMPONENT_STORE(((*(R24 *)rt_nil_check(l_F_1676))).f_T, ((*(R24 *)rt_nil_check(l_F_1676))).f_T, l_DF_1679, l_SF_1680, p_LINE)), 0);
}
}
l_F_1676 = ((*(R24 *)rt_nil_check(l_F_1676))).f_NEXT;
}
RT_B_TICK();
} L_end1678: ;
{ R9 rv1681 = r_CATS(l_R_1677, rt_str(" }", 2));
return rv1681; }
}
}
{ R9 rv1682 = r_ASSIGN_CODE(p_T, p_LV, p_RV);
return rv1682; }
rt_raise(RT_X_INIT);
}
static R9 r_COMPONENT_EQUAL(R22 * p_T, R9 p_A, R9 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_1683; memset(&l_ARGS_1683, 0, sizeof l_ARGS_1683);
l_ARGS_1683 = r_VAL_ARG(r_MKET(p_A, p_T), r_VAL_ARG(r_MKET(p_B, p_T), NULL));
R12 * l_Y_1684; memset(&l_Y_1684, 0, sizeof l_Y_1684);
l_Y_1684 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1683, p_LINE);
if ((l_Y_1684 == NULL))
{
r_FAILT(p_LINE, rt_str("no EQUAL_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R9 rv1685 = (r_CALL_SYM(l_Y_1684, l_ARGS_1683, p_LINE)).f_C;
return rv1685; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_X_1686; memset(&l_X_1686, 0, sizeof l_X_1686);
S_R9(&l_X_1686, r_NEW_NAME(rt_str("ea", 2)), 0);
R9 l_Z_1687; memset(&l_Z_1687, 0, sizeof l_Z_1687);
S_R9(&l_Z_1687, r_NEW_NAME(rt_str("eb", 2)), 0);
R9 l_I_1688; memset(&l_I_1688, 0, sizeof l_I_1688);
S_R9(&l_I_1688, r_NEW_NAME(rt_str("ei", 2)), 0);
R9 l_N_1689; memset(&l_N_1689, 0, sizeof l_N_1689);
S_R9(&l_N_1689, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R9 l_R_1690; memset(&l_R_1690, 0, sizeof l_R_1690);
S_R9(&l_R_1690, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1686, p_A, l_Z_1687), 0);
S_R9(&l_R_1690, r_FMT4(rt_str("@@; int @r = rt_b_same_extents(@, ", 34), l_R_1690, p_B, l_I_1688, l_N_1689), 0);
S_R9(&l_R_1690, r_FMT4(rt_str("@@.lo, @.hi, @.lo, ", 19), l_R_1690, l_X_1686, l_X_1686, l_Z_1687), 0);
S_R9(&l_R_1690, r_FMT4(rt_str("@@.hi); rt_int @n = rt_b_extent(@, ", 35), l_R_1690, l_Z_1687, l_I_1688, l_N_1689), 0);
S_R9(&l_R_1690, r_FMT3(rt_str("@@.lo, @.hi);", 13), l_R_1690, l_X_1686, l_X_1686), 0);
S_R9(&l_R_1690, r_FMT4(rt_str("@ for (rt_int @ = 0; @r && @ < ", 31), l_R_1690, l_I_1688, l_I_1688, l_I_1688), 0);
S_R9(&l_R_1690, r_FMT4(rt_str("@@n; @++) @r = ", 15), l_R_1690, l_I_1688, l_I_1688, l_I_1688), 0);
S_R9(&l_R_1690, r_FMT2(rt_str("@@;", 3), l_R_1690, r_COMPONENT_EQUAL(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_X_1686, l_I_1688), r_FMT2(rt_str("@.p[@]", 6), l_Z_1687, l_I_1688), p_LINE)), 0);
{ R9 rv1691 = r_FMT2(rt_str("@ @r; })", 8), l_R_1690, l_I_1688);
return rv1691; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_X_1692; memset(&l_X_1692, 0, sizeof l_X_1692);
S_R9(&l_X_1692, r_NEW_NAME(rt_str("ra", 2)), 0);
R9 l_Z_1693; memset(&l_Z_1693, 0, sizeof l_Z_1693);
S_R9(&l_Z_1693, r_NEW_NAME(rt_str("rb", 2)), 0);
R24 * l_F_1694; memset(&l_F_1694, 0, sizeof l_F_1694);
l_F_1694 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_R_1695; memset(&l_R_1695, 0, sizeof l_R_1695);
S_R9(&l_R_1695, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1692, p_A, l_Z_1693), 0);
R9 l_EQ_1696; memset(&l_EQ_1696, 0, sizeof l_EQ_1696);
S_R9(&l_EQ_1696, r_MK(rt_str("1", 1)), 0);
S_R9(&l_R_1695, r_FMT2(rt_str("@@;", 3), l_R_1695, p_B), 0);
for (;;) {
if ((l_F_1694 == NULL)) goto L_end1697;
{
{
R9 l_C_1698; memset(&l_C_1698, 0, sizeof l_C_1698);
S_R9(&l_C_1698, r_COMPONENT_EQUAL(((*(R24 *)rt_nil_check(l_F_1694))).f_T, r_FMT2(rt_str("@.@", 3), l_X_1692, ((*(R24 *)rt_nil_check(l_F_1694))).f_CNAME), r_FMT2(rt_str("@.@", 3), l_Z_1693, ((*(R24 *)rt_nil_check(l_F_1694))).f_CNAME), p_LINE), 0);
if (((((*(R24 *)rt_nil_check(l_F_1694))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R9(&l_EQ_1696, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1696, r_VARIANT_COND(l_F_1694, p_T, l_X_1692), l_C_1698), 0);
}
else
{
S_R9(&l_EQ_1696, r_FMT2(rt_str("@ && @", 6), l_EQ_1696, l_C_1698), 0);
}
}
l_F_1694 = ((*(R24 *)rt_nil_check(l_F_1694))).f_NEXT;
}
RT_B_TICK();
} L_end1697: ;
{ R9 rv1699 = r_FMT2(rt_str("@ @; })", 7), l_R_1695, l_EQ_1696);
return rv1699; }
}
}
{ R9 rv1700 = r_EQUAL_CODE(p_T, p_A, p_B);
return rv1700; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R17 * p_E) { RT_B_TICK(); 
{ R26 rv1701 = r_STD_RESULT(r_UNARY1(p_E));
return rv1701; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY1(R17 * p_E) { RT_B_TICK(); 
R26 l_A_1702; memset(&l_A_1702, 0, sizeof l_A_1702);
S_R26(&l_A_1702, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1703; memset(&l_T_1703, 0, sizeof l_T_1703);
l_T_1703 = (l_A_1702).f_T;
R9 l_OP_1704; memset(&l_OP_1704, 0, sizeof l_OP_1704);
S_R9(&l_OP_1704, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
if (((((*(R22 *)rt_nil_check(l_T_1703))).f_GENP).f_LEN > ((rt_int)0LL)))
{
r_REQUIRE_WHERE(r_OP_NAME(l_OP_1704, 1), ((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
if (((((*(R22 *)rt_nil_check(l_T_1703))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_OP_NAME(l_OP_1704, 1))))
{
{
R27 * l_ARGS_1705; memset(&l_ARGS_1705, 0, sizeof l_ARGS_1705);
l_ARGS_1705 = r_VAL_ARG(l_A_1702, r_QUAL_ARGS(((*(R17 *)rt_nil_check(p_E))).f_LINE));
R12 * l_Y_1706; memset(&l_Y_1706, 0, sizeof l_Y_1706);
l_Y_1706 = r_USER_OPERATOR(r_OP_NAME(l_OP_1704, 1), l_ARGS_1705, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if (((l_Y_1706 == NULL) && (!(((*(R27 *)rt_nil_check(l_ARGS_1705))).f_NEXT == NULL))))
{
((*(R27 *)rt_nil_check(l_ARGS_1705))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(r_OP_NAME(l_OP_1704, 1), l_ARGS_1705, ((*(R17 *)rt_nil_check(p_E))).f_LINE) == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("no operation takes the precision or rounding of the expression ", 63), rt_str("as arguments (D.5): ", 20)), r_OP_NAME(l_OP_1704, 1));
}
}
if ((!(l_Y_1706 == NULL)))
{
{ R26 rv1707 = r_CALL_SYM(l_Y_1706, l_ARGS_1705, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1707; }
}
if ((((*(R22 *)rt_nil_check(l_T_1703))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1703));
}
}
}
if (r_TEQS(l_OP_1704, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1703))).f_KIND == g_T_BOOL))
{
{ R26 rv1708 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1702).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1708; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1703))).f_KIND == g_T_BITS))
{
{ R26 rv1709 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1702).f_C), l_T_1703);
return rv1709; }
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1703))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1704, rt_str("-", 1)))
{
{ R26 rv1710 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1702).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1703))).f_SCALE));
return rv1710; }
}
{ R26 rv1711 = r_MKET((l_A_1702).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1703))).f_SCALE));
return rv1711; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1703))).f_KIND == g_T_FLOAT))
{
{
R22 * l_FT_1712; memset(&l_FT_1712, 0, sizeof l_FT_1712);
l_FT_1712 = r_FLOAT_TYPE(r_MAX_INT(((*(R22 *)rt_nil_check(l_T_1703))).f_SCALE, r_QUAL_PREC()));
if (r_TEQS(l_OP_1704, rt_str("-", 1)))
{
{ R26 rv1713 = r_MKET(r_FLOAT_OP(l_OP_1704, r_MK(rt_str("0.0", 3)), (l_A_1702).f_C, l_FT_1712), l_FT_1712);
return rv1713; }
}
{ R26 rv1714 = r_MKET((l_A_1702).f_C, l_FT_1712);
return rv1714; }
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1703));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R17 * p_E) { RT_B_TICK(); 
{ rt_int rv1715 = (((((((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) && (!r_NAMES_OBJECT(((*(R17 *)rt_nil_check(p_E))).f_NAME)))) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R17 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1715; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R17 * p_E) { RT_B_TICK(); 
R9 l_OP_1716; memset(&l_OP_1716, 0, sizeof l_OP_1716);
S_R9(&l_OP_1716, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1717; memset(&l_A_1717, 0, sizeof l_A_1717);
R26 l_B_1718; memset(&l_B_1718, 0, sizeof l_B_1718);
if ((r_TEQS(l_OP_1716, rt_str("&", 1)) || r_TEQS(l_OP_1716, rt_str("!", 1))))
{
{
R23 l_MA_1719; memset(&l_MA_1719, 0, sizeof l_MA_1719);
S_R23(&l_MA_1719, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R9 l_CA_1720; memset(&l_CA_1720, 0, sizeof l_CA_1720);
S_R9(&l_CA_1720, r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R9 l_CB_1721; memset(&l_CB_1721, 0, sizeof l_CB_1721);
S_R9(&l_CB_1721, r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1716, rt_str("&", 1)))
{
{ R26 rv1722 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1720, l_CB_1721), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1722; }
}
{ R26 rv1723 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1720, l_CB_1721), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1723; }
}
}
if ((r_IS_LITERALISH(((*(R17 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R17 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1718, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1717, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, (l_B_1718).f_T), 0);
}
else
{
S_R26(&l_A_1717, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1718, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, (l_A_1717).f_T), 0);
}
{ R26 rv1724 = r_STD_RESULT(r_APPLY_OPERATOR(p_E, l_OP_1716, l_A_1717, l_B_1718));
return rv1724; }
rt_raise(RT_X_INIT);
}
static R26 r_STD_RESULT(R26 p_V) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R26 rv1725 = p_V;
return rv1725; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((p_V).f_T)))).f_KIND == g_T_INT)))
{
{ R26 rv1726 = p_V;
return rv1726; }
}
{ R26 rv1727 = ({ R26 rc1728; memset(&rc1728, 0, sizeof rc1728);  S_R9(&rc1728.f_C, r_STD_CHECK((p_V).f_C), 0); rc1728.f_T = (p_V).f_T; rc1728.f_LVAL = 0; S_R9(&rc1728.f_SELF, (p_V).f_SELF, 0); rc1728; });
return rv1727; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1729; memset(&l_AT_1729, 0, sizeof l_AT_1729);
l_AT_1729 = (p_A).f_T;
R22 * l_BT_1730; memset(&l_BT_1730, 0, sizeof l_BT_1730);
l_BT_1730 = (p_B).f_T;
rt_int l_LINE_1731; memset(&l_LINE_1731, 0, sizeof l_LINE_1731);
l_LINE_1731 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
{
R9 l_NAME_1732; memset(&l_NAME_1732, 0, sizeof l_NAME_1732);
S_R9(&l_NAME_1732, r_OP_NAME(p_OP, 0), 0);
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
S_R9(&l_NAME_1732, r_QMKN(rt_str("MD_", 3), l_NAME_1732), 0);
}
if ((((((*(R22 *)rt_nil_check(l_AT_1729))).f_GENP).f_LEN > ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_BT_1730))).f_GENP).f_LEN > ((rt_int)0LL))))
{
r_REQUIRE_WHERE(l_NAME_1732, l_LINE_1731);
}
if (((r_HAS_USER_ROUTINE(l_NAME_1732) || (((*(R22 *)rt_nil_check(l_AT_1729))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1730))).f_KIND == g_T_ABS)))
{
{
R27 * l_ARGS_1733; memset(&l_ARGS_1733, 0, sizeof l_ARGS_1733);
l_ARGS_1733 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R27 * l_EXTRA_1734; memset(&l_EXTRA_1734, 0, sizeof l_EXTRA_1734);
l_EXTRA_1734 = r_QUAL_ARGS(l_LINE_1731);
R12 * l_Y_1735; memset(&l_Y_1735, 0, sizeof l_Y_1735);
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
l_EXTRA_1734 = r_VAL_ARG(r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_D, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_EXTRA_1734);
}
if ((!(l_EXTRA_1734 == NULL)))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1733))).f_NEXT))).f_NEXT = l_EXTRA_1734;
l_Y_1735 = r_USER_OPERATOR(l_NAME_1732, l_ARGS_1733, l_LINE_1731);
if ((!(l_Y_1735 == NULL)))
{
{ R26 rv1736 = r_CALL_SYM(l_Y_1735, l_ARGS_1733, l_LINE_1731);
return rv1736; }
}
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_1733))).f_NEXT))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(l_NAME_1732, l_ARGS_1733, l_LINE_1731) == NULL)))
{
r_FAILT(l_LINE_1731, rt_b_cat(rt_str("no operation takes the scale, precision or rounding of the ", 59), rt_str("expression as arguments (D.5): ", 31)), l_NAME_1732);
}
}
else
{
l_Y_1735 = r_USER_OPERATOR(l_NAME_1732, l_ARGS_1733, l_LINE_1731);
if ((!(l_Y_1735 == NULL)))
{
{ R26 rv1737 = r_CALL_SYM(l_Y_1735, l_ARGS_1733, l_LINE_1731);
return rv1737; }
}
}
if ((r_TEQS(p_OP, rt_str("<>", 2)) && (((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{
R12 * l_Q_1738; memset(&l_Q_1738, 0, sizeof l_Q_1738);
l_Q_1738 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1733, l_LINE_1731);
if ((!(l_Q_1738 == NULL)))
{
{ R26 rv1739 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1738, l_ARGS_1733, l_LINE_1731)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1739; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1729))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1730))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1731, rt_str("no such operation for the abstract type: ", 41), l_NAME_1732);
}
}
}
}
if ((!r_PREDEFINED_ROUNDING()))
{
r_FAILT(l_LINE_1731, rt_str("no operation is defined for the rounding mode ", 46), ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1740 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1740; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1741 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1741; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1729))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1730))).f_KIND == g_T_INT)))
{
{ R26 rv1742 = r_MKET(r_FIXED_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1742; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1729))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1730))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1743 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1743; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1729))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1729, l_BT_1730)))
{
if ((r_IS_UNORDERED(l_AT_1729) || r_IS_UNORDERED(l_BT_1730)))
{
r_FAIL(l_LINE_1731, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1744 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1744; }
}
r_FAILT(l_LINE_1731, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1729))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1730))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1729))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1730))).f_KIND == g_T_BITS)))))
{
r_SAME_CHARSET(l_AT_1729, l_BT_1730, l_LINE_1731);
{
R22 * l_T_1745; memset(&l_T_1745, 0, sizeof l_T_1745);
l_T_1745 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1729))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1745))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1729))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1729))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1730))).f_MLEN).f_OK))
{
S_R23(&((*(R22 *)rt_nil_check(l_T_1745))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1729))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1730))).f_MLEN).f_V)), 0);
S_R9(&((*(R22 *)rt_nil_check(l_T_1745))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1745))).f_MLEN).f_V), 0);
}
{ R26 rv1746 = r_MKET(r_FMT2(rt_str("rt_b_cat(@, @)", 14), (p_A).f_C, (p_B).f_C), l_T_1745);
return rv1746; }
}
}
r_FAIL(l_LINE_1731, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1729))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1730))).f_KIND == g_T_BITS)))
{
{ R26 rv1747 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1729);
return rv1747; }
}
r_FAILT(l_LINE_1731, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1729))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1730))).f_KIND == g_T_INT)))
{
{ R26 rv1748 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1748; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1729))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1730))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1749; memset(&l_T_1749, 0, sizeof l_T_1749);
l_T_1749 = r_FLOAT_TYPE(r_MAX_INT(r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1729))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1730))).f_SCALE), r_QUAL_PREC()));
if ((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))
{
{ R26 rv1750 = r_MKET(r_FLOAT_OP(p_OP, (p_A).f_C, (p_B).f_C, l_T_1749), l_T_1749);
return rv1750; }
}
if (r_TEQS(p_OP, rt_str("**", 2)))
{
r_FAIL(l_LINE_1731, rt_str("** has no predefined meaning for floating point values (3.3.4.2)", 64));
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1729))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1730))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1729))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1730))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1731, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1731, rt_b_cat(rt_b_cat(rt_b_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1729), (r_TYPE_NAME(l_AT_1729)).f_LEN)));
rt_raise(RT_X_INIT);
}
static rt_int r_IDENTICAL_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1751; memset(&l_RA_1751, 0, sizeof l_RA_1751);
l_RA_1751 = r_REAL_TYPE(p_A);
R22 * l_RB_1752; memset(&l_RB_1752, 0, sizeof l_RB_1752);
l_RB_1752 = r_REAL_TYPE(p_B);
if ((p_A == p_B))
{
{ rt_int rv1753 = 1;
return rv1753; }
}
if (((!r_SAME_TYPE(p_A, p_B)) || (!r_SAME_RANGE(p_A, p_B))))
{
{ rt_int rv1754 = 0;
return rv1754; }
}
if (((((*(R22 *)rt_nil_check(l_RA_1751))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RA_1751))).f_KIND == g_T_BITS)))
{
if (((((*(R22 *)rt_nil_check(l_RA_1751))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_1752))).f_MLEN).f_OK))
{
{ rt_int rv1755 = ((((*(R22 *)rt_nil_check(l_RA_1751))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_1752))).f_MLEN).f_V);
return rv1755; }
}
}
else if ((((*(R22 *)rt_nil_check(l_RA_1751))).f_KIND == g_T_ARR))
{
{ rt_int rv1756 = (r_SAME_EXTENTS(l_RA_1751, l_RB_1752) && r_IDENTICAL_TYPE(((*(R22 *)rt_nil_check(l_RA_1751))).f_ELEM, ((*(R22 *)rt_nil_check(l_RB_1752))).f_ELEM));
return rv1756; }
}
{ rt_int rv1757 = 1;
return rv1757; }
rt_raise(RT_X_INIT);
}
static R9 r_TARGET_ARGS_CHECK(R22 * p_RT, R22 * p_VT, R9 p_C) { RT_B_TICK(); 
R22 * l_A_1758; memset(&l_A_1758, 0, sizeof l_A_1758);
l_A_1758 = r_REAL_TYPE(p_RT);
R22 * l_B_1759; memset(&l_B_1759, 0, sizeof l_B_1759);
l_B_1759 = r_REAL_TYPE(p_VT);
R9 l_R_1760; memset(&l_R_1760, 0, sizeof l_R_1760);
S_R9(&l_R_1760, r_MK(rt_str("", 0)), 0);
if (((!(((*(R22 *)rt_nil_check(l_A_1758))).f_KIND == g_T_REC)) || (!(((*(R22 *)rt_nil_check(l_B_1759))).f_KIND == g_T_REC))))
{
{ R9 rv1761 = p_C;
return rv1761; }
}
{
R24 * l_F_1762; memset(&l_F_1762, 0, sizeof l_F_1762);
l_F_1762 = ((*(R22 *)rt_nil_check(l_A_1758))).f_FIELDS;
R25 * l_P_1763; memset(&l_P_1763, 0, sizeof l_P_1763);
l_P_1763 = ((*(R22 *)rt_nil_check(l_A_1758))).f_ARGS;
R25 * l_Q_1764; memset(&l_Q_1764, 0, sizeof l_Q_1764);
l_Q_1764 = ((*(R22 *)rt_nil_check(l_B_1759))).f_ARGS;
for (;;) {
if ((((l_F_1762 == NULL) || (l_P_1763 == NULL)) || (l_Q_1764 == NULL))) goto L_end1765;
{
if ((!(((*(R24 *)rt_nil_check(l_F_1762))).f_KIND == ((rt_int)0LL))))
{
if (((((!((*(R25 *)rt_nil_check(l_P_1763))).f_ANYARG) && (!r_IS_GEN_ARG(l_P_1763))) && (!r_IS_GEN_ARG(l_Q_1764))) && (!(((((*(R25 *)rt_nil_check(l_P_1763))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_Q_1764))).f_MLO).f_OK)))))
{
S_R9(&l_R_1760, r_FMT3(rt_str("@ if (p && p->@ != (@)) rt_raise(RT_B_TYPE_MISMATCH);", 53), l_R_1760, ((*(R24 *)rt_nil_check(l_F_1762))).f_CNAME, ((*(R25 *)rt_nil_check(l_P_1763))).f_LO), 0);
}
l_P_1763 = ((*(R25 *)rt_nil_check(l_P_1763))).f_NEXT;
l_Q_1764 = ((*(R25 *)rt_nil_check(l_Q_1764))).f_NEXT;
}
l_F_1762 = ((*(R24 *)rt_nil_check(l_F_1762))).f_NEXT;
}
RT_B_TICK();
} L_end1765: ;
}
if (((l_R_1760).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1766 = p_C;
return rv1766; }
}
{ R9 rv1767 = r_FMT3(rt_str("({ __typeof__(@) p = (@);@ p; })", 32), p_C, p_C, l_R_1760);
return rv1767; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_EXTENTS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R25 * l_P_1768; memset(&l_P_1768, 0, sizeof l_P_1768);
l_P_1768 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_A)))).f_BOUNDS;
R25 * l_Q_1769; memset(&l_Q_1769, 0, sizeof l_Q_1769);
l_Q_1769 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_B)))).f_BOUNDS;
for (;;) {
if (((l_P_1768 == NULL) || (l_Q_1769 == NULL))) goto L_end1770;
{
if (((((((((((*(R25 *)rt_nil_check(l_P_1768))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_P_1768))).f_MHI).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1769))).f_MLO).f_OK) && (((*(R25 *)rt_nil_check(l_Q_1769))).f_MHI).f_OK) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1768))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_P_1768))).f_HI))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1769))).f_LO))) && (!r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_Q_1769))).f_HI))))
{
if ((!(r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_P_1768))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_P_1768))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)) == r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_Q_1769))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_Q_1769))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)))))
{
{ rt_int rv1771 = 0;
return rv1771; }
}
}
l_P_1768 = ((*(R25 *)rt_nil_check(l_P_1768))).f_NEXT;
l_Q_1769 = ((*(R25 *)rt_nil_check(l_Q_1769))).f_NEXT;
}
RT_B_TICK();
} L_end1770: ;
{ rt_int rv1772 = 1;
return rv1772; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_VALUES(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv1773 = 0;
return rv1773; }
}
{ rt_int rv1774 = (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL));
return rv1774; }
rt_raise(RT_X_INIT);
}
static R22 * r_FLOAT_TYPE(rt_int p_P) { RT_B_TICK(); 
R22 * l_T_1775; memset(&l_T_1775, 0, sizeof l_T_1775);
l_T_1775 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1775))).f_SCALE = p_P;
{ R22 * rv1776 = l_T_1775;
return rv1776; }
rt_raise(RT_X_INIT);
}
static R9 r_SINGLE_C(rt_int p_P) { RT_B_TICK(); 
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
{ R9 rv1777 = r_MK(rt_str("1", 1));
return rv1777; }
}
{ R9 rv1778 = r_MK(rt_str("0", 1));
return rv1778; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_TRUNC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9)) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8))))
{
{ R9 rv1779 = r_MK(rt_str("1", 1));
return rv1779; }
}
}
{ R9 rv1780 = r_MK(rt_str("0", 1));
return rv1780; }
rt_raise(RT_X_INIT);
}
static rt_int r_QUAL_PREC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B == NULL)))
{
{ rt_int rv1781 = (r_MANIFEST(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B)).f_V;
return rv1781; }
}
}
{ rt_int rv1782 = ((rt_int)0LL);
return rv1782; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_OP(R9 p_OP, R9 p_A, R9 p_B, R22 * p_T) { RT_B_TICK(); 
{ R9 rv1783 = r_CAT(r_FMT3(rt_str("rt_b_fop('@', @, @, ", 20), p_OP, p_A, p_B), r_FMT2(rt_str("@, @)", 5), r_SINGLE_C(((*(R22 *)rt_nil_check(p_T))).f_SCALE), r_FLOAT_TRUNC()));
return rv1783; }
rt_raise(RT_X_INIT);
}
static R9 r_LOWER_OP(R9 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R9 rv1784 = r_MK(rt_str("and", 3));
return rv1784; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R9 rv1785 = r_MK(rt_str("or", 2));
return rv1785; }
}
{ R9 rv1786 = r_MK(rt_str("xor", 3));
return rv1786; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { RT_B_TICK(); 
if ((p_A > p_B))
{
{ rt_int rv1787 = p_A;
return rv1787; }
}
{ rt_int rv1788 = p_B;
return rv1788; }
rt_raise(RT_X_INIT);
}
static R9 r_FIXED_COMPARE(R26 p_A, R26 p_B, R9 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE == ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE))
{
{ R9 rv1789 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv1789; }
}
{ R9 rv1790 = r_CAT(r_FMT3(rt_str("(rt_b_cmp(@, @, @", 17), (p_A).f_C, r_NUM(((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE), (p_B).f_C), r_FMT2(rt_str(", @) @ 0)", 9), r_NUM(((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE), p_OP));
return rv1790; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1791; memset(&l_AT_1791, 0, sizeof l_AT_1791);
l_AT_1791 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1792; memset(&l_BT_1792, 0, sizeof l_BT_1792);
l_BT_1792 = r_REAL_TYPE((p_B).f_T);
R9 l_R_1793; memset(&l_R_1793, 0, sizeof l_R_1793);
if (((((*(R22 *)rt_nil_check(l_AT_1791))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1792))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1791))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1792))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1791))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1792))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R9(&l_R_1793, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1791))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1792))).f_KIND == g_T_INT)))
{
S_R9(&l_R_1793, r_FIXED_COMPARE(p_A, p_B, r_MK(rt_str("==", 2))), 0);
}
else
{
if ((!r_SAME_CLASS(l_AT_1791, l_BT_1792)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1791))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
r_SAME_CHARSET(l_AT_1791, l_BT_1792, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R22 *)rt_nil_check(l_AT_1791))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1791) || r_HAS_ANY(l_BT_1792)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
if ((((*(R22 *)rt_nil_check(l_AT_1791))).f_KIND == g_T_ARR))
{
if ((!r_SAME_EXTENTS(l_AT_1791, l_BT_1792)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("arrays of different EXTENT attributes are compared (3.8.4.1)", 60));
}
}
if ((((*(R22 *)rt_nil_check(l_AT_1791))).f_KIND == g_T_REC))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_AT_1791))).f_ARGS, ((*(R22 *)rt_nil_check(l_BT_1792))).f_ARGS)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("records of different types are compared (3.9.4.1)", 49));
}
}
if (r_HAS_ABS_PART(l_AT_1791))
{
S_R9(&l_R_1793, r_COMPONENT_EQUAL(l_AT_1791, (p_A).f_C, (p_B).f_C, ((*(R17 *)rt_nil_check(p_E))).f_LINE), 0);
}
else
{
S_R9(&l_R_1793, r_EQUAL_CODE(l_AT_1791, (p_A).f_C, (p_B).f_C), 0);
}
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R9(&l_R_1793, r_FMT1(rt_str("(!@)", 4), l_R_1793), 0);
}
{ R26 rv1794 = r_MKET(l_R_1793, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1794; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1795; memset(&l_S1_1795, 0, sizeof l_S1_1795);
l_S1_1795 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1796; memset(&l_S2_1796, 0, sizeof l_S2_1796);
l_S2_1796 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1797; memset(&l_S_1797, 0, sizeof l_S_1797);
l_S_1797 = r_MAX_INT(l_S1_1795, l_S2_1796);
R9 l_FN_1798; memset(&l_FN_1798, 0, sizeof l_FN_1798);
S_R9(&l_FN_1798, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R9(&l_FN_1798, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1799 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1798, r_RESCALE_C((p_A).f_C, l_S1_1795, l_S_1797), r_RESCALE_C((p_B).f_C, l_S2_1796, l_S_1797)), r_INT_TYPE(l_S_1797));
return rv1799; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1800 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1795, l_S2_1796)));
return rv1800; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1801 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1795, l_S2_1796)));
return rv1801; }
}
{ R26 rv1802 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1795, l_S2_1796)));
return rv1802; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1803 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1795));
return rv1803; }
}
{ R26 rv1804 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1795));
return rv1804; }
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
rt_int l_S1_1805; memset(&l_S1_1805, 0, sizeof l_S1_1805);
l_S1_1805 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1806; memset(&l_S2_1806, 0, sizeof l_S2_1806);
l_S2_1806 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R9 l_RND_1807; memset(&l_RND_1807, 0, sizeof l_RND_1807);
S_R9(&l_RND_1807, r_MK(rt_str("0", 1)), 0);
if ((((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_B).f_T)))).f_KIND == g_T_FLOAT)))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no machine-dependent float operator ", 36), p_OP);
}
{ R26 rv1808 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1808; }
}
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R9(&l_RND_1807, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("//", 2))))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the machine-dependent fixed point operators are !+! !-! !*! !//! (3.2.4.5), not ", 80), p_OP);
}
{ R26 rv1809 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1809; }
}
{
R23 l_SM_1810; memset(&l_SM_1810, 0, sizeof l_SM_1810);
S_R23(&l_SM_1810, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1811; memset(&l_S_1811, 0, sizeof l_S_1811);
l_S_1811 = (l_SM_1810).f_V;
rt_int l_SR_1812; memset(&l_SR_1812, 0, sizeof l_SR_1812);
l_SR_1812 = r_MAX_INT(l_S1_1805, l_S2_1806);
if ((!(l_SM_1810).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1813 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1811, l_S1_1805), l_S2_1806)), l_RND_1807), r_INT_TYPE(l_S_1811));
return rv1813; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1814 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1811, l_S1_1805), l_S2_1806)), l_RND_1807), r_INT_TYPE(l_S_1811));
return rv1814; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1815 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1805), r_NUM(l_S_1811), l_RND_1807), r_INT_TYPE(l_S_1811));
return rv1815; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R9 l_SUB_1816; memset(&l_SUB_1816, 0, sizeof l_SUB_1816);
S_R9(&l_SUB_1816, r_MK(rt_str("0", 1)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R9(&l_SUB_1816, r_MK(rt_str("1", 1)), 0);
}
{ R26 rv1817 = r_MKET(r_CAT(r_FMT4(rt_str("rt_b_addsc(@, @, @, @, ", 23), (p_A).f_C, r_NUM(l_S1_1805), (p_B).f_C, r_NUM(l_S2_1806)), r_FMT3(rt_str("@, @, @)", 8), r_NUM(l_S_1811), l_SUB_1816, l_RND_1807)), r_INT_TYPE(l_S_1811));
return rv1817; }
}
}
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R17 * p_E) { RT_B_TICK(); 
R26 l_V_1818; memset(&l_V_1818, 0, sizeof l_V_1818);
S_R26(&l_V_1818, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1819; memset(&l_T_1819, 0, sizeof l_T_1819);
l_T_1819 = r_REAL_TYPE((l_V_1818).f_T);
R17 * l_R_1820; memset(&l_R_1820, 0, sizeof l_R_1820);
l_R_1820 = ((*(R17 *)rt_nil_check(p_E))).f_B;
R9 l_TMP_1821; memset(&l_TMP_1821, 0, sizeof l_TMP_1821);
S_R9(&l_TMP_1821, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1822; memset(&l_LO_1822, 0, sizeof l_LO_1822);
R26 l_HI_1823; memset(&l_HI_1823, 0, sizeof l_HI_1823);
R9 l_LOC_1824; memset(&l_LOC_1824, 0, sizeof l_LOC_1824);
R9 l_HIC_1825; memset(&l_HIC_1825, 0, sizeof l_HIC_1825);
R9 l_LO_OP_1826; memset(&l_LO_OP_1826, 0, sizeof l_LO_OP_1826);
S_R9(&l_LO_OP_1826, r_MK(rt_str("<=", 2)), 0);
R9 l_HI_OP_1827; memset(&l_HI_OP_1827, 0, sizeof l_HI_OP_1827);
S_R9(&l_HI_OP_1827, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1822, r_EXPR(((*(R17 *)rt_nil_check(l_R_1820))).f_A, l_T_1819), 0);
S_R26(&l_HI_1823, r_EXPR(((*(R17 *)rt_nil_check(l_R_1820))).f_B, l_T_1819), 0);
if (r_IS_UNORDERED(l_T_1819))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1819))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1819))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1819))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_1822).f_T), l_T_1819)) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_1823).f_T), l_T_1819))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if (((((*(R17 *)rt_nil_check(l_R_1820))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_R_1820))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LO_OP_1826, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R17 *)rt_nil_check(l_R_1820))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HI_OP_1827, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R22 *)rt_nil_check(l_T_1819))).f_KIND == g_T_INT))
{
{
R26 l_X_1828; memset(&l_X_1828, 0, sizeof l_X_1828);
S_R26(&l_X_1828, r_MKET(l_TMP_1821, (l_V_1818).f_T), 0);
S_R9(&l_LOC_1824, r_FIXED_COMPARE(l_LO_1822, l_X_1828, l_LO_OP_1826), 0);
S_R9(&l_HIC_1825, r_FIXED_COMPARE(l_X_1828, l_HI_1823, l_HI_OP_1827), 0);
}
}
else
{
S_R9(&l_LOC_1824, r_FMT3(rt_str("(@ @ @)", 7), (l_LO_1822).f_C, l_LO_OP_1826, l_TMP_1821), 0);
S_R9(&l_HIC_1825, r_FMT3(rt_str("(@ @ @)", 7), l_TMP_1821, l_HI_OP_1827, (l_HI_1823).f_C), 0);
}
{ R26 rv1829 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; @ && ", 17), r_CTYPE(l_T_1819), l_TMP_1821, (l_V_1818).f_C, l_LOC_1824), r_FMT1(rt_str("@; })", 5), l_HIC_1825)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1829; }
rt_raise(RT_X_INIT);
}
static R9 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R9 rv1830 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1830; }
}
{ R9 rv1831 = (p_V).f_C;
return rv1831; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { RT_B_TICK(); 
{ R26 rv1832 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1832; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { RT_B_TICK(); 
rt_int l_B_1833; memset(&l_B_1833, 0, sizeof l_B_1833);
l_B_1833 = ((rt_int)0LL);
rt_int l_P_1834; memset(&l_P_1834, 0, sizeof l_P_1834);
l_P_1834 = ((rt_int)1LL);
for (;;) {
if ((l_P_1834 >= p_N)) goto L_end1835;
{
l_B_1833 = rt_add(l_B_1833, ((rt_int)1LL));
l_P_1834 = rt_mul(l_P_1834, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1835: ;
{ rt_int rv1836 = l_B_1833;
return rv1836; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R23 l_M_1837; memset(&l_M_1837, 0, sizeof l_M_1837);
S_R23(&l_M_1837, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1837).f_OK)
{
{ rt_int rv1838 = (l_M_1837).f_V;
return rv1838; }
}
}
}
}
{ rt_int rv1839 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1839; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKING_OF(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1840; memset(&l_K_1840, 0, sizeof l_K_1840);
l_K_1840 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
rt_int l_MODE_1841; memset(&l_MODE_1841, 0, sizeof l_MODE_1841);
l_MODE_1841 = ((rt_int)2LL);
if ((l_K_1840 == g_T_STR))
{
l_MODE_1841 = ((rt_int)1LL);
}
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_KIND == g_N_REP) && (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL))))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_KIND == g_N_ENUMLIT)))
{
{
rt_int l_P_1842; memset(&l_P_1842, 0, sizeof l_P_1842);
l_P_1842 = r_PACKING_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_NAME);
if ((l_P_1842 >= ((rt_int)0LL)))
{
l_MODE_1841 = l_P_1842;
}
}
}
}
}
{ rt_int rv1843 = l_MODE_1841;
return rv1843; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKING_VALUE(R9 p_NAME) { RT_B_TICK(); 
if (r_TEQS(p_NAME, rt_str("DENSE", 5)))
{
{ rt_int rv1844 = ((rt_int)0LL);
return rv1844; }
}
else if (r_TEQS(p_NAME, rt_str("PACKED", 6)))
{
{ rt_int rv1845 = ((rt_int)1LL);
return rv1845; }
}
else if (r_TEQS(p_NAME, rt_str("UNPACKED", 8)))
{
{ rt_int rv1846 = ((rt_int)2LL);
return rv1846; }
}
{ rt_int rv1847 = rt_neg(((rt_int)1LL));
return rv1847; }
rt_raise(RT_X_INIT);
}
static R26 r_PACKING_LITERAL(rt_int p_MODE, rt_int p_LINE) { RT_B_TICK(); 
if ((p_MODE == ((rt_int)0LL)))
{
{ R26 rv1848 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("DENSE", 5), p_LINE), NULL);
return rv1848; }
}
else if ((p_MODE == ((rt_int)1LL)))
{
{ R26 rv1849 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1849; }
}
{ R26 rv1850 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1850; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACK_SLOT(rt_int p_ES, rt_int p_MODE) { RT_B_TICK(); 
rt_int l_U_1851; memset(&l_U_1851, 0, sizeof l_U_1851);
l_U_1851 = ((rt_int)8LL);
if ((p_ES <= ((rt_int)0LL)))
{
if ((p_MODE == ((rt_int)0LL)))
{
{ rt_int rv1852 = ((rt_int)0LL);
return rv1852; }
}
{ rt_int rv1853 = ((rt_int)8LL);
return rv1853; }
}
if ((p_MODE == ((rt_int)0LL)))
{
{ rt_int rv1854 = p_ES;
return rv1854; }
}
if (((p_MODE == ((rt_int)1LL)) && (p_ES <= ((*(R7 *)rt_nil_check(g_W))).f_WORD)))
{
for (;;) {
if ((l_U_1851 >= p_ES)) goto L_end1855;
{
l_U_1851 = rt_mul(l_U_1851, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1855: ;
{ rt_int rv1856 = l_U_1851;
return rv1856; }
}
{ rt_int rv1857 = rt_mul((rt_quot((rt_sub(rt_add(p_ES, ((*(R7 *)rt_nil_check(g_W))).f_WORD), ((rt_int)1LL))), ((*(R7 *)rt_nil_check(g_W))).f_WORD)), ((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1857; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_MIN_C(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1858 = r_MK(rt_str("INT64_MIN", 9));
return rv1858; }
}
{ R9 rv1859 = r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(rt_neg(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))))));
return rv1859; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_MAX_C(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1860 = r_MK(rt_str("INT64_MAX", 9));
return rv1860; }
}
{ R9 rv1861 = r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(rt_sub(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))), ((rt_int)1LL))));
return rv1861; }
rt_raise(RT_X_INIT);
}
static rt_int r_STD_MIN(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ rt_int rv1862 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
return rv1862; }
}
{ rt_int rv1863 = rt_neg(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))));
return rv1863; }
rt_raise(RT_X_INIT);
}
static rt_int r_STD_MAX(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ rt_int rv1864 = INT64_MAX;
return rv1864; }
}
{ rt_int rv1865 = rt_sub(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))), ((rt_int)1LL));
return rv1865; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_CHECK(R9 p_C) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1866 = p_C;
return rv1866; }
}
{ R9 rv1867 = r_FMT1(rt_str("rt_b_std(@)", 11), p_C);
return rv1867; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACK_SIZE(rt_int p_N, rt_int p_ES, rt_int p_MODE) { RT_B_TICK(); 
if ((p_N <= ((rt_int)0LL)))
{
{ rt_int rv1868 = ((rt_int)0LL);
return rv1868; }
}
{ rt_int rv1869 = rt_mul(p_N, r_PACK_SLOT(p_ES, p_MODE));
return rv1869; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHAR_SIZE(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv1870 = r_ENUM_SIZE(r_CHARSET_OF(p_T));
return rv1870; }
rt_raise(RT_X_INIT);
}
static R9 r_CHAR_REPS(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_1871; memset(&l_C_1871, 0, sizeof l_C_1871);
l_C_1871 = r_CHARSET_OF(p_T);
if ((!(((*(R22 *)rt_nil_check(l_C_1871))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_1871))).f_REPS))).f_B == NULL)))
{
{ R9 rv1872 = r_REP_TABLE(l_C_1871);
return rv1872; }
}
}
{ R9 rv1873 = r_FMT1(rt_str("NULL, @", 7), r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_1871))).f_BASE))).f_NLITS));
return rv1873; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_LENGTH(void) { RT_B_TICK(); 
{ rt_int rv1874 = ((rt_int)100000000LL);
return rv1874; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_FLOAT_PRECISION(void) { RT_B_TICK(); 
{ rt_int rv1875 = ((rt_int)15LL);
return rv1875; }
rt_raise(RT_X_INIT);
}
static rt_int r_IMP_PRECISION_OF(rt_int p_P) { RT_B_TICK(); 
if ((p_P <= ((rt_int)7LL)))
{
{ rt_int rv1876 = ((rt_int)7LL);
return rv1876; }
}
{ rt_int rv1877 = ((rt_int)15LL);
return rv1877; }
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_FORMAT(rt_int p_P, R9 p_NAME) { RT_B_TICK(); 
rt_int l_SINGLE_1878; memset(&l_SINGLE_1878, 0, sizeof l_SINGLE_1878);
l_SINGLE_1878 = (r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL));
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
{ rt_int rv1879 = rt_neg(((rt_int)127LL));
return rv1879; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
{ rt_int rv1880 = ((rt_int)127LL);
return rv1880; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
{ rt_int rv1881 = ((rt_int)8LL);
return rv1881; }
}
}
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
if (l_SINGLE_1878)
{
{ rt_int rv1882 = rt_neg(((rt_int)125LL));
return rv1882; }
}
{ rt_int rv1883 = rt_neg(((rt_int)1021LL));
return rv1883; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
if (l_SINGLE_1878)
{
{ rt_int rv1884 = ((rt_int)128LL);
return rv1884; }
}
{ rt_int rv1885 = ((rt_int)1024LL);
return rv1885; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
if (l_SINGLE_1878)
{
{ rt_int rv1886 = ((rt_int)25LL);
return rv1886; }
}
{ rt_int rv1887 = ((rt_int)54LL);
return rv1887; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
if (l_SINGLE_1878)
{
{ rt_int rv1888 = ((rt_int)8LL);
return rv1888; }
}
{ rt_int rv1889 = ((rt_int)11LL);
return rv1889; }
}
else if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
if (l_SINGLE_1878)
{
{ rt_int rv1890 = ((rt_int)32LL);
return rv1890; }
}
{ rt_int rv1891 = ((rt_int)64LL);
return rv1891; }
}
{ rt_int rv1892 = ((rt_int)0LL);
return rv1892; }
rt_raise(RT_X_INIT);
}
static R23 r_STATIC_SIZE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1893; memset(&l_K_1893, 0, sizeof l_K_1893);
l_K_1893 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1893 == g_T_ABS))
{
{ R23 rv1894 = r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1894; }
}
else if ((l_K_1893 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R23 rv1895 = r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A);
return rv1895; }
}
}
{ R23 rv1896 = r_SOME(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1896; }
}
else if ((l_K_1893 == g_T_FLOAT))
{
{ R23 rv1897 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1897; }
}
else if ((l_K_1893 == g_T_BOOL))
{
{ R23 rv1898 = r_SOME(((rt_int)1LL));
return rv1898; }
}
else if ((l_K_1893 == g_T_ENUM))
{
{ R23 rv1899 = r_SOME(r_ENUM_SIZE(p_T));
return rv1899; }
}
else if ((l_K_1893 == g_T_BITS))
{
{ R23 rv1900 = ((*(R22 *)rt_nil_check(p_T))).f_MLEN;
return rv1900; }
}
else if ((l_K_1893 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R23 rv1901 = r_SOME(r_PACK_SIZE((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_V, r_CHAR_SIZE(p_T), r_PACKING_OF(p_T)));
return rv1901; }
}
}
else if (((l_K_1893 == g_T_PTR) || (l_K_1893 == g_T_SEM)))
{
{ R23 rv1902 = r_SOME(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1902; }
}
else if ((l_K_1893 == g_T_ARR))
{
{
R23 l_ES_1903; memset(&l_ES_1903, 0, sizeof l_ES_1903);
S_R23(&l_ES_1903, r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM), 0);
rt_int l_N_1904; memset(&l_N_1904, 0, sizeof l_N_1904);
l_N_1904 = ((rt_int)1LL);
R25 * l_B_1905; memset(&l_B_1905, 0, sizeof l_B_1905);
l_B_1905 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
if ((!(l_ES_1903).f_OK))
{
{ R23 rv1906 = r_NO_MVAL();
return rv1906; }
}
for (;;) {
if ((l_B_1905 == NULL)) goto L_end1907;
{
if ((((!(((((*(R25 *)rt_nil_check(l_B_1905))).f_MLO).f_OK && (((*(R25 *)rt_nil_check(l_B_1905))).f_MHI).f_OK))) || r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1905))).f_LO)) || r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_1905))).f_HI)))
{
{ R23 rv1908 = r_NO_MVAL();
return rv1908; }
}
l_N_1904 = rt_mul(l_N_1904, r_MAX_INT(rt_add(rt_sub((((*(R25 *)rt_nil_check(l_B_1905))).f_MHI).f_V, (((*(R25 *)rt_nil_check(l_B_1905))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
l_B_1905 = ((*(R25 *)rt_nil_check(l_B_1905))).f_NEXT;
}
RT_B_TICK();
} L_end1907: ;
{ R23 rv1909 = r_SOME(r_PACK_SIZE(l_N_1904, (l_ES_1903).f_V, r_PACKING_OF(p_T)));
return rv1909; }
}
}
{ R23 rv1910 = r_NO_MVAL();
return rv1910; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1911; memset(&l_T_1911, 0, sizeof l_T_1911);
l_T_1911 = (p_B).f_T;
rt_int l_K_1912; memset(&l_K_1912, 0, sizeof l_K_1912);
l_K_1912 = ((*(R22 *)rt_nil_check(l_T_1911))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv1913 = r_SIZE_OF(l_T_1911, (p_B).f_C);
return rv1913; }
}
if ((l_K_1912 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv1914 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1911))).f_SCALE);
return rv1914; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1915 = r_INT_ET(((rt_int)2LL));
return rv1915; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv1916 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1916; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
if ((!(((*(R22 *)rt_nil_check(l_T_1911))).f_REPS == NULL)))
{
if ((r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1911))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1911))).f_REPS))).f_A == NULL))))
{
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1911))).f_REPS))).f_A))).f_NEXT == NULL)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1911))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8)))
{
{ R26 rv1917 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNSIGNED", 8), p_LINE), NULL);
return rv1917; }
}
}
}
}
{ R26 rv1918 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1918; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1911))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1919 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1911))).f_LO_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1911))).f_SCALE));
return rv1919; }
}
{ R26 rv1920 = r_MKET(r_STD_MIN_C(), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1911))).f_SCALE));
return rv1920; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1911))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1921 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1911))).f_HI_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1911))).f_SCALE));
return rv1921; }
}
{ R26 rv1922 = r_MKET(r_STD_MAX_C(), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1911))).f_SCALE));
return rv1922; }
}
}
else if ((l_K_1912 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv1923 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1911))).f_SCALE);
return rv1923; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv1924 = r_INT_ET(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1911))).f_SCALE));
return rv1924; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv1925 = r_INT_ET(((rt_int)2LL));
return rv1925; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R26 rv1926 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1911))).f_SCALE, p_NAME));
return rv1926; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) || r_TEQS(p_NAME, rt_str("MAX", 3))))
{
{
R22 * l_MT_1927; memset(&l_MT_1927, 0, sizeof l_MT_1927);
l_MT_1927 = r_FLOAT_TYPE(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1911))).f_SCALE));
R9 l_C_1928; memset(&l_C_1928, 0, sizeof l_C_1928);
S_R9(&l_C_1928, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1911))).f_SCALE) == ((rt_int)7LL)))
{
S_R9(&l_C_1928, r_MK(rt_str("FLT", 3)), 0);
}
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1911))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1929 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1911))).f_LO_C, (p_B).f_SELF), l_MT_1927);
return rv1929; }
}
{ R26 rv1930 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_1928), l_MT_1927);
return rv1930; }
}
if (((((*(R22 *)rt_nil_check(l_T_1911))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1931 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1911))).f_HI_C, (p_B).f_SELF), l_MT_1927);
return rv1931; }
}
{ R26 rv1932 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_1928), l_MT_1927);
return rv1932; }
}
}
}
else if ((l_K_1912 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1911))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1933 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1911))).f_LO_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1911))).f_BASE);
return rv1933; }
}
{ R26 rv1934 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_1911))).f_BASE);
return rv1934; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1911))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1935 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1911))).f_HI_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1911))).f_BASE);
return rv1935; }
}
{ R26 rv1936 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1911))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_1911))).f_BASE);
return rv1936; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1911))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1937 = r_MKET(r_SUBST_SELF(r_FMT4(rt_str("((@) >= (@) \? (@) - (@) + 1 : 0)", 32), ((*(R22 *)rt_nil_check(l_T_1911))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1911))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1911))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1911))).f_LO_C), (p_B).f_SELF), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1937; }
}
{ R26 rv1938 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1911))).f_BASE))).f_NLITS);
return rv1938; }
}
}
else if (((l_K_1912 == g_T_STR) || (l_K_1912 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv1939 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1939; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1940 = r_PACKING_LITERAL(r_PACKING_OF(l_T_1911), p_LINE);
return rv1940; }
}
}
else if ((l_K_1912 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv1941 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1911))).f_DIMS);
return rv1941; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) || r_TEQS(p_NAME, rt_str("BOUNDS", 6))))
{
{ R26 rv1942 = r_ARRAY_SHAPE(p_B, p_NAME);
return rv1942; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv1943 = r_PACKING_LITERAL(r_PACKING_OF(l_T_1911), p_LINE);
return rv1943; }
}
}
else if ((l_K_1912 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_1911))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv1944 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv1944; }
}
{ R26 rv1945 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv1945; }
}
}
else if (((l_K_1912 == g_T_ABS) || (l_K_1912 == g_T_REC)))
{
{
R22 * l_U_1946; memset(&l_U_1946, 0, sizeof l_U_1946);
l_U_1946 = l_T_1911;
if ((l_K_1912 == g_T_ABS))
{
l_U_1946 = ((*(R22 *)rt_nil_check(l_T_1911))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_1946))).f_KIND == g_T_REC))
{
{
R24 * l_F_1947; memset(&l_F_1947, 0, sizeof l_F_1947);
l_F_1947 = r_FIND_FIELD(l_U_1946, p_NAME);
if ((!(l_F_1947 == NULL)))
{
if ((!(((*(R24 *)rt_nil_check(l_F_1947))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv1948 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R24 *)rt_nil_check(l_F_1947))).f_CNAME), ((*(R24 *)rt_nil_check(l_F_1947))).f_T);
return rv1948; }
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
R22 * l_T_1949; memset(&l_T_1949, 0, sizeof l_T_1949);
l_T_1949 = r_REAL_TYPE((p_B).f_T);
R9 l_D_1950; memset(&l_D_1950, 0, sizeof l_D_1950);
S_R9(&l_D_1950, r_NUM(((*(R22 *)rt_nil_check(l_T_1949))).f_DIMS), 0);
R9 l_X_1951; memset(&l_X_1951, 0, sizeof l_X_1951);
S_R9(&l_X_1951, r_NEW_NAME(rt_str("sx", 2)), 0);
R9 l_R_1952; memset(&l_R_1952, 0, sizeof l_R_1952);
S_R9(&l_R_1952, r_NEW_NAME(rt_str("sr", 2)), 0);
R22 * l_ELEM_1953; memset(&l_ELEM_1953, 0, sizeof l_ELEM_1953);
l_ELEM_1953 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
R9 l_C_1954; memset(&l_C_1954, 0, sizeof l_C_1954);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
{
R17 * l_TS_1955; memset(&l_TS_1955, 0, sizeof l_TS_1955);
l_TS_1955 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_TS_1955))).f_NAME, r_MKN(rt_str("BOUNDS_DEF", 10)), 0);
((*(R17 *)rt_nil_check(l_TS_1955))).f_A = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_TS_1955))).f_A))).f_NAME, r_MKN(rt_str("STD", 3)), 0);
l_ELEM_1953 = r_RESOLVE(l_TS_1955);
}
}
{
R22 * l_A_1956; memset(&l_A_1956, 0, sizeof l_A_1956);
l_A_1956 = r_ARRAY_OF(l_ELEM_1953, ((rt_int)1LL));
S_R9(&l_C_1954, r_FMT4(rt_str("({ @ @ = @; @ ", 14), r_CTYPE(l_T_1949), l_X_1951, (p_B).f_C, ((*(R22 *)rt_nil_check(l_A_1956))).f_CNAME), 0);
S_R9(&l_C_1954, r_FMT4(rt_str("@@; memset(&@, 0, sizeof @);", 28), l_C_1954, l_R_1952, l_R_1952, l_R_1952), 0);
S_R9(&l_C_1954, r_FMT4(rt_str("@ @.lo[0] = 0; @.hi[0] = @ - 1;", 31), l_C_1954, l_R_1952, l_R_1952, l_D_1950), 0);
S_R9(&l_C_1954, r_FMT4(rt_str("@ @.p = rt_alloc(@ * sizeof *@.p);", 34), l_C_1954, l_R_1952, l_D_1950, l_R_1952), 0);
S_R9(&l_C_1954, r_FMT2(rt_str("@ for (int i = 0; i < @; i++) {", 31), l_C_1954, l_D_1950), 0);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
S_R9(&l_C_1954, r_FMT2(rt_str("@ @", 3), l_C_1954, r_INIT_CODE(l_ELEM_1953, r_FMT1(rt_str("@.p[i]", 6), l_R_1952))), 0);
S_R9(&l_C_1954, r_FMT4(rt_str("@ @.p[i].f_MIN = @.lo[i]; @.p[i].f_MAX = ", 41), l_C_1954, l_R_1952, l_X_1951, l_R_1952), 0);
S_R9(&l_C_1954, r_FMT2(rt_str("@@.hi[i]; }", 11), l_C_1954, l_X_1951), 0);
}
else
{
S_R9(&l_C_1954, r_FMT4(rt_str("@ @.p[i] = @.hi[i] >= @.lo[i] \? ", 32), l_C_1954, l_R_1952, l_X_1951, l_X_1951), 0);
S_R9(&l_C_1954, r_FMT4(rt_str("@@.hi[i] - @.lo[i] + 1 : 0; }", 29), l_C_1954, l_X_1951, l_X_1951, l_X_1951), 0);
}
{ R26 rv1957 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_C_1954, l_R_1952), l_A_1956);
return rv1957; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_LIT_NODE_T(R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
{ R17 * rv1958 = r_LIT_NODE(r_STR(p_NAME, (p_NAME).f_LEN), p_LINE);
return rv1958; }
rt_raise(RT_X_INIT);
}
static R17 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_N_1959; memset(&l_N_1959, 0, sizeof l_N_1959);
l_N_1959 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1959))).f_NAME, r_MKN(p_NAME), 0);
{ R17 * rv1960 = l_N_1959;
return rv1960; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R9 p_C) { RT_B_TICK(); 
rt_int l_K_1961; memset(&l_K_1961, 0, sizeof l_K_1961);
l_K_1961 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1961 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv1962 = r_MKET((r_EXPR(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1962; }
}
}
{ R26 rv1963 = r_INT_ET(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1963; }
}
else if ((l_K_1961 == g_T_FLOAT))
{
{ R26 rv1964 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1964; }
}
else if ((l_K_1961 == g_T_BOOL))
{
{ R26 rv1965 = r_INT_ET(((rt_int)1LL));
return rv1965; }
}
else if ((l_K_1961 == g_T_ENUM))
{
{ R26 rv1966 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv1966; }
}
else if ((l_K_1961 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1967 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1967; }
}
{ R26 rv1968 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1968; }
}
else if ((l_K_1961 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R26 rv1969 = r_INT_ET((r_STATIC_SIZE(p_T)).f_V);
return rv1969; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv1970 = r_MKET(r_FMT3(rt_str("rt_b_pack_size(@, @, @)", 23), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C, r_NUM(r_CHAR_SIZE(p_T)), r_NUM(r_PACKING_OF(p_T))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1970; }
}
{ R26 rv1971 = r_MKET(r_FMT3(rt_str("rt_b_pack_size((@).len, @, @)", 29), p_C, r_NUM(r_CHAR_SIZE(p_T)), r_NUM(r_PACKING_OF(p_T))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1971; }
}
else if (((l_K_1961 == g_T_PTR) || (l_K_1961 == g_T_SEM)))
{
{ R26 rv1972 = r_INT_ET(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1972; }
}
else if ((l_K_1961 == g_T_ABS))
{
{ R26 rv1973 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv1973; }
}
else if ((l_K_1961 == g_T_REC))
{
{ R26 rv1974 = r_MKET(r_RECORD_SIZE(p_T, p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1974; }
}
else if ((l_K_1961 == g_T_ARR))
{
{
R23 l_ES_1975; memset(&l_ES_1975, 0, sizeof l_ES_1975);
S_R23(&l_ES_1975, r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM), 0);
if ((l_ES_1975).f_OK)
{
{ R26 rv1976 = r_MKET(r_CAT(r_FMT3(rt_str("rt_b_pack_size(rt_b_extent(@, (@).lo, (@).hi), ", 47), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C), r_FMT2(rt_str("@, @)", 5), r_NUM((l_ES_1975).f_V), r_NUM(r_PACKING_OF(p_T)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1976; }
}
}
{ R26 rv1977 = r_MKET(r_FMT4(rt_str("(rt_int)(rt_b_extent(@, (@).lo, (@).hi) * sizeof (@) * 8)", 57), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C, r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1977; }
}
{ R26 rv1978 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1978; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R9 p_TNAME, R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{ R26 rv1979 = r_ATTRIBUTE(r_TYPE_VALUE(p_TNAME, p_LINE), p_NAME, p_LINE);
return rv1979; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE(R9 p_TNAME, rt_int p_LINE) { RT_B_TICK(); 
{ R26 rv1980 = r_TYPE_VALUE_OF(r_RESOLVE_USER_NAME(p_TNAME, p_LINE));
return rv1980; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_1981; memset(&l_RT_1981, 0, sizeof l_RT_1981);
l_RT_1981 = r_REAL_TYPE(p_T);
if (((((*(R22 *)rt_nil_check(l_RT_1981))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(l_RT_1981))).f_KIND == g_T_REC)))
{
{
R9 l_TMP_1982; memset(&l_TMP_1982, 0, sizeof l_TMP_1982);
S_R9(&l_TMP_1982, r_NEW_NAME(rt_str("tq", 2)), 0);
R9 l_C_1983; memset(&l_C_1983, 0, sizeof l_C_1983);
S_R9(&l_C_1983, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), r_CTYPE(p_T), l_TMP_1982, l_TMP_1982, l_TMP_1982), 0);
S_R9(&l_C_1983, r_FMT3(rt_str("@@ @; })", 8), l_C_1983, r_INIT_CODE(l_RT_1981, l_TMP_1982), l_TMP_1982), 0);
{ R26 rv1984 = r_MKET(l_C_1983, p_T);
return rv1984; }
}
}
{ R26 rv1985 = r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(p_T)), p_T);
return rv1985; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_NAME(R17 * p_E) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{ rt_int rv1986 = 0;
return rv1986; }
}
{
R12 * l_Y_1987; memset(&l_Y_1987, 0, sizeof l_Y_1987);
l_Y_1987 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1987 == NULL))
{
{ rt_int rv1988 = 0;
return rv1988; }
}
{ rt_int rv1989 = (((*(R12 *)rt_nil_check(l_Y_1987))).f_KIND == g_Y_TYPE);
return rv1989; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R9 p_TNAME, R9 p_A, R9 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1990 = r_INT_ET(((rt_int)100000000LL));
return rv1990; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv1991 = r_INT_ET(((rt_int)15LL));
return rv1991; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv1992 = r_INT_ET(((rt_int)0LL));
return rv1992; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R22 * l_T_1993; memset(&l_T_1993, 0, sizeof l_T_1993);
l_T_1993 = p_WANT;
if ((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_1993 = r_RESOLVE(((*(R17 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_1993 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_1993 = r_REAL_TYPE(l_T_1993);
if ((!(((*(R22 *)rt_nil_check(l_T_1993))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_1993))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R9 l_TMP_1994; memset(&l_TMP_1994, 0, sizeof l_TMP_1994);
S_R9(&l_TMP_1994, r_NEW_NAME(rt_str("rc", 2)), 0);
R9 l_R_1995; memset(&l_R_1995, 0, sizeof l_R_1995);
S_R9(&l_R_1995, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_1993))).f_CNAME, l_TMP_1994, l_TMP_1994, l_TMP_1994), 0);
R24 * l_F_1996; memset(&l_F_1996, 0, sizeof l_F_1996);
l_F_1996 = ((*(R22 *)rt_nil_check(l_T_1993))).f_FIELDS;
S_R9(&l_R_1995, r_FMT2(rt_str("@@", 2), l_R_1995, r_INIT_CODE(l_T_1993, l_TMP_1994)), 0);
for (;;) {
if ((l_F_1996 == NULL)) goto L_end1997;
{
if ((((*(R24 *)rt_nil_check(l_F_1996))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R24 *)rt_nil_check(l_F_1996))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R24 *)rt_nil_check(l_F_1996))).f_LABELS, (r_TAG_VALUE(l_T_1993, ((*(R24 *)rt_nil_check(l_F_1996))).f_TAGF)).f_V, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_T_1993, ((*(R24 *)rt_nil_check(l_F_1996))).f_TAGF)))).f_T)))
{
{
R17 * l_INIT_1998; memset(&l_INIT_1998, 0, sizeof l_INIT_1998);
l_INIT_1998 = r_FIND_INIT(((*(R17 *)rt_nil_check(p_E))).f_A, ((*(R24 *)rt_nil_check(l_F_1996))).f_NAME);
if ((l_INIT_1998 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R24 *)rt_nil_check(l_F_1996))).f_NAME);
}
S_R9(&l_R_1995, r_FMT2(rt_str("@ @", 3), l_R_1995, r_STORE_CODE(((*(R24 *)rt_nil_check(l_F_1996))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_1994, ((*(R24 *)rt_nil_check(l_F_1996))).f_CNAME), r_EXPR(((*(R17 *)rt_nil_check(l_INIT_1998))).f_A, ((*(R24 *)rt_nil_check(l_F_1996))).f_T), ((*(R17 *)rt_nil_check(l_INIT_1998))).f_LINE, l_TMP_1994)), 0);
}
}
}
l_F_1996 = ((*(R24 *)rt_nil_check(l_F_1996))).f_NEXT;
}
RT_B_TICK();
} L_end1997: ;
{
R17 * l_P_1999; memset(&l_P_1999, 0, sizeof l_P_1999);
l_P_1999 = ((*(R17 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_1999 == NULL)) goto L_end2000;
{
{
R24 * l_G_2001; memset(&l_G_2001, 0, sizeof l_G_2001);
l_G_2001 = r_FIND_VFIELD(l_T_1993, ((*(R17 *)rt_nil_check(l_P_1999))).f_NAME);
if ((l_G_2001 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_1999))).f_LINE, rt_str("no such field: ", 15), ((*(R17 *)rt_nil_check(l_P_1999))).f_NAME);
}
if ((!(((*(R24 *)rt_nil_check(l_G_2001))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_1999))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R17 *)rt_nil_check(l_P_1999))).f_NAME);
}
r_CHECK_VARIANT(l_G_2001, l_T_1993, NULL, ((*(R17 *)rt_nil_check(l_P_1999))).f_LINE);
}
l_P_1999 = ((*(R17 *)rt_nil_check(l_P_1999))).f_NEXT;
}
RT_B_TICK();
} L_end2000: ;
}
{ R26 rv2002 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_1995, l_TMP_1994), l_T_1993);
return rv2002; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_FIND_INIT(R17 * p_L, R9 p_NAME) { RT_B_TICK(); 
R17 * l_P_2003; memset(&l_P_2003, 0, sizeof l_P_2003);
l_P_2003 = p_L;
for (;;) {
if ((l_P_2003 == NULL)) goto L_end2004;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_2003))).f_NAME, p_NAME))
{
{ R17 * rv2005 = l_P_2003;
return rv2005; }
}
l_P_2003 = ((*(R17 *)rt_nil_check(l_P_2003))).f_NEXT;
}
RT_B_TICK();
} L_end2004: ;
{ R17 * rv2006 = NULL;
return rv2006; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_DIMS_2007; memset(&l_DIMS_2007, 0, sizeof l_DIMS_2007);
l_DIMS_2007 = ((rt_int)0LL);
R17 * l_P_2008; memset(&l_P_2008, 0, sizeof l_P_2008);
l_P_2008 = p_E;
R22 * l_ELEM_2009; memset(&l_ELEM_2009, 0, sizeof l_ELEM_2009);
l_ELEM_2009 = NULL;
for (;;) {
if ((!(((*(R17 *)rt_nil_check(l_P_2008))).f_KIND == g_N_ARRCONS))) goto L_end2010;
{
l_DIMS_2007 = rt_add(l_DIMS_2007, ((rt_int)1LL));
l_P_2008 = ((*(R17 *)rt_nil_check(l_P_2008))).f_A;
}
RT_B_TICK();
} L_end2010: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_2009 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_2009 == NULL))
{
l_ELEM_2009 = (r_EXPR(l_P_2008, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_2009))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_2009))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_2009 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
r_CHECK_SHAPE(p_E, l_DIMS_2007);
{
R22 * l_A_2011; memset(&l_A_2011, 0, sizeof l_A_2011);
l_A_2011 = r_ARRAY_OF(l_ELEM_2009, l_DIMS_2007);
R9 l_TMP_2012; memset(&l_TMP_2012, 0, sizeof l_TMP_2012);
S_R9(&l_TMP_2012, r_NEW_NAME(rt_str("ac", 2)), 0);
R9 l_R_2013; memset(&l_R_2013, 0, sizeof l_R_2013);
S_R9(&l_R_2013, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_2011))).f_CNAME, l_TMP_2012, l_TMP_2012), 0);
rt_int l_K_2014; memset(&l_K_2014, 0, sizeof l_K_2014);
l_K_2014 = ((rt_int)0LL);
{
R17 * l_Q_2015; memset(&l_Q_2015, 0, sizeof l_Q_2015);
l_Q_2015 = p_E;
R25 * l_TAIL_2016; memset(&l_TAIL_2016, 0, sizeof l_TAIL_2016);
l_TAIL_2016 = NULL;
{ rt_int it2018_lo = ((rt_int)1LL), it2018_hi = l_DIMS_2007;
for (rt_int it2018 = it2018_lo; it2018 <= it2018_hi; it2018++) {
{
{
R25 * l_B_2019; memset(&l_B_2019, 0, sizeof l_B_2019);
l_B_2019 = ((R25 *)rt_b_new(sizeof (R25)));
rt_int l_N_2020; memset(&l_N_2020, 0, sizeof l_N_2020);
l_N_2020 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(l_Q_2015))).f_A);
S_R25(&(*(R25 *)rt_nil_check(l_B_2019)), ({ R25 rc2021; memset(&rc2021, 0, sizeof rc2021);  S_R9(&rc2021.f_LO, r_MK(rt_str("0", 1)), 0); S_R9(&rc2021.f_HI, r_NUM(rt_sub(l_N_2020, ((rt_int)1LL))), 0); S_R23(&rc2021.f_MLO, r_SOME(((rt_int)0LL)), 0); S_R23(&rc2021.f_MHI, r_SOME(rt_sub(l_N_2020, ((rt_int)1LL))), 0); rc2021.f_ANYARG = 0; rc2021.f_NEXT = NULL; rc2021; }), 0);
if ((l_TAIL_2016 == NULL))
{
((*(R22 *)rt_nil_check(l_A_2011))).f_BOUNDS = l_B_2019;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_2016))).f_NEXT = l_B_2019;
}
l_TAIL_2016 = l_B_2019;
}
l_Q_2015 = ((*(R17 *)rt_nil_check(l_Q_2015))).f_A;
}
RT_B_TICK();
if (it2018 == it2018_hi) break;
} } L_end2017: ;
}
S_R9(&l_R_2013, r_FMT2(rt_str("@@); ", 5), l_R_2013, l_TMP_2012), 0);
l_P_2008 = p_E;
{ rt_int it2023_lo = ((rt_int)0LL), it2023_hi = rt_sub(l_DIMS_2007, ((rt_int)1LL));
for (rt_int it2023 = it2023_lo; it2023 <= it2023_hi; it2023++) {
{
S_R9(&l_R_2013, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_2013, l_TMP_2012, r_NUM(it2023), l_TMP_2012), 0);
S_R9(&l_R_2013, r_FMT3(rt_str("@@] = @;", 8), l_R_2013, r_NUM(it2023), r_NUM(rt_sub(r_LIST_LENGTH(((*(R17 *)rt_nil_check(l_P_2008))).f_A), ((rt_int)1LL)))), 0);
l_P_2008 = ((*(R17 *)rt_nil_check(l_P_2008))).f_A;
}
RT_B_TICK();
if (it2023 == it2023_hi) break;
} } L_end2022: ;
S_R9(&l_R_2013, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_2013, l_TMP_2012, l_TMP_2012, r_NUM(l_DIMS_2007)), 0);
S_R9(&l_R_2013, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_2013, l_TMP_2012, l_TMP_2012), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_2007, l_A_2011, l_TMP_2012, &l_R_2013, &l_K_2014);
{ R26 rv2024 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_2013, l_TMP_2012), l_A_2011);
return rv2024; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_SHAPE(R17 * p_E, rt_int p_DIMS) { RT_B_TICK(); 
R17 * l_P_2025; memset(&l_P_2025, 0, sizeof l_P_2025);
l_P_2025 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((p_DIMS <= ((rt_int)1LL)))
{
return;
}
for (;;) {
if ((l_P_2025 == NULL)) goto L_end2026;
{
if (((!(((*(R17 *)rt_nil_check(l_P_2025))).f_KIND == g_N_ARRCONS)) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_ARRCONS))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
if ((!r_SAME_SHAPE(l_P_2025, ((*(R17 *)rt_nil_check(p_E))).f_A)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
r_CHECK_SHAPE(l_P_2025, rt_sub(p_DIMS, ((rt_int)1LL)));
l_P_2025 = ((*(R17 *)rt_nil_check(l_P_2025))).f_NEXT;
}
RT_B_TICK();
} L_end2026: ;
}
static rt_int r_SAME_SHAPE(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
if (((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) || (!(((*(R17 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS))))
{
{ rt_int rv2027 = ((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) && (!(((*(R17 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS)));
return rv2027; }
}
if ((!(r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_A))).f_A) == r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_B))).f_A))))
{
{ rt_int rv2028 = 0;
return rv2028; }
}
{ rt_int rv2029 = r_SAME_SHAPE(((*(R17 *)rt_nil_check(p_A))).f_A, ((*(R17 *)rt_nil_check(p_B))).f_A);
return rv2029; }
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R17 * p_E, rt_int p_DIMS, R22 * p_A, R9 p_TMP, R9 *p_R, rt_int *p_K) { RT_B_TICK(); 
R17 * l_P_2030; memset(&l_P_2030, 0, sizeof l_P_2030);
l_P_2030 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_2030 == NULL)) goto L_end2031;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_2030, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R17 *)rt_nil_check(l_P_2030))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2030))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R9(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R9(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_2030, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R17 *)rt_nil_check(l_P_2030))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_2030 = ((*(R17 *)rt_nil_check(l_P_2030))).f_NEXT;
}
RT_B_TICK();
} L_end2031: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R22 * l_T_2032; memset(&l_T_2032, 0, sizeof l_T_2032);
l_T_2032 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_2032))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_2032))).f_DIMS = p_DIMS;
S_R9(&((*(R22 *)rt_nil_check(l_T_2032))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv2033 = l_T_2032;
return rv2033; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R17 * p_E) { RT_B_TICK(); 
R22 * l_T_2034; memset(&l_T_2034, 0, sizeof l_T_2034);
l_T_2034 = r_RESOLVE(((*(R17 *)rt_nil_check(p_E))).f_A);
R26 l_V_2035; memset(&l_V_2035, 0, sizeof l_V_2035);
S_R26(&l_V_2035, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, l_T_2034), 0);
R22 * l_RT_2036; memset(&l_RT_2036, 0, sizeof l_RT_2036);
l_RT_2036 = r_REAL_TYPE(l_T_2034);
if (((((*(R22 *)rt_nil_check((l_V_2035).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_2036))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R22 *)rt_nil_check(l_RT_2036))).f_KIND == g_T_INT))
{
{ R26 rv2037 = r_MKET(r_RANGE_CHECK(l_RT_2036, r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_2035).f_C), r_NO_TEXT()), l_T_2034);
return rv2037; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_2036))).f_KIND == g_T_BOOL))
{
{ R26 rv2038 = r_MKET(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_2035).f_C), l_T_2034);
return rv2038; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_2036))).f_KIND == g_T_ENUM))
{
{ R26 rv2039 = r_MKET(r_ENUM_OF_BITS(l_RT_2036, (l_V_2035).f_C), l_T_2034);
return rv2039; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_2036))).f_KIND == g_T_FLOAT))
{
{ R26 rv2040 = r_MKET(r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), (l_V_2035).f_C), l_T_2034);
return rv2040; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_2036))).f_KIND == g_T_STR))
{
{ R26 rv2041 = r_MKET(r_FMT4(rt_str("rt_b_chars_of_bits(@, @, @, @)", 30), (l_V_2035).f_C, r_NUM(r_CHAR_SIZE(l_RT_2036)), r_NUM(r_PACKING_OF(l_RT_2036)), r_CHAR_REPS(l_RT_2036)), l_T_2034);
return rv2041; }
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("this type-specifier on a bitstring is not implemented", 53));
}
{
R9 l_C_2042; memset(&l_C_2042, 0, sizeof l_C_2042);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 1;
S_R9(&l_C_2042, r_CONVERT(l_V_2035, l_T_2034, ((*(R17 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), 0);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 0;
if ((((((((*(R22 *)rt_nil_check(l_RT_2036))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_2036))).f_KIND == g_T_BITS))) && ((((*(R22 *)rt_nil_check(l_RT_2036))).f_LEN_C).f_LEN > ((rt_int)0LL))) && (!(((((*(R22 *)rt_nil_check(l_RT_2036))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check((l_V_2035).f_T))).f_MLEN).f_OK)))))
{
S_R9(&l_C_2042, r_FMT2(rt_str("rt_b_tlen(@, @)", 15), l_C_2042, ((*(R22 *)rt_nil_check(l_RT_2036))).f_LEN_C), 0);
}
{ R26 rv2043 = r_MKET(l_C_2042, l_T_2034);
return rv2043; }
}
rt_raise(RT_X_INIT);
}
static R9 r_ENUM_OF_BITS(R22 * p_T, R9 p_C) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R9 rv2044 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv2044; }
}
}
{ R9 rv2045 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv2045; }
rt_raise(RT_X_INIT);
}
static R9 r_REP_TABLE(R22 * p_T) { RT_B_TICK(); 
R9 l_NAME_2046; memset(&l_NAME_2046, 0, sizeof l_NAME_2046);
S_R9(&l_NAME_2046, r_NEW_NAME(rt_str("reps", 4)), 0);
R17 * l_L_2047; memset(&l_L_2047, 0, sizeof l_L_2047);
l_L_2047 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R9 l_R_2048; memset(&l_R_2048, 0, sizeof l_R_2048);
S_R9(&l_R_2048, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_2047 == NULL)) goto L_end2049;
{
{
R17 * l_V_2050; memset(&l_V_2050, 0, sizeof l_V_2050);
l_V_2050 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_2051; memset(&l_FOUND_2051, 0, sizeof l_FOUND_2051);
l_FOUND_2051 = 0;
for (;;) {
if ((l_V_2050 == NULL)) goto L_end2052;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_V_2050))).f_NAME, ((*(R17 *)rt_nil_check(l_L_2047))).f_NAME))
{
S_R9(&l_R_2048, r_FMT2(rt_str("@@, ", 4), l_R_2048, (r_EXPR(((*(R17 *)rt_nil_check(l_V_2050))).f_A, NULL)).f_C), 0);
l_FOUND_2051 = 1;
}
l_V_2050 = ((*(R17 *)rt_nil_check(l_V_2050))).f_NEXT;
}
RT_B_TICK();
} L_end2052: ;
if ((!l_FOUND_2051))
{
r_FAILT(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R17 *)rt_nil_check(l_L_2047))).f_NAME);
}
}
l_L_2047 = ((*(R17 *)rt_nil_check(l_L_2047))).f_NEXT;
}
RT_B_TICK();
} L_end2049: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_2046, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_2048, l_NAME_2046, l_NAME_2046));
{ R9 rv2053 = r_FMT2(rt_str("@, @", 4), l_NAME_2046, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv2053; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SEM_2054; memset(&l_SEM_2054, 0, sizeof l_SEM_2054);
l_SEM_2054 = r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(((*(R7 *)rt_nil_check(g_W))).f_NEW_OK == p_E))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("NEW without PTR$ or SEMAPHORE$ only initializes a declaration or is the source ", 79), rt_str("of an assignment (3.10.2, 3.11.2)", 33)));
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_2054 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_2054)
{
{
R22 * l_T_2055; memset(&l_T_2055, 0, sizeof l_T_2055);
l_T_2055 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_2055 = p_WANT;
}
}
{ R26 rv2056 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_2055))).f_SCALE)), l_T_2055);
return rv2056; }
}
}
{
R22 * l_T_2057; memset(&l_T_2057, 0, sizeof l_T_2057);
l_T_2057 = r_RESOLVE(r_EXPR_TO_TS(((*(R17 *)rt_nil_check(p_E))).f_A));
R22 * l_P_2058; memset(&l_P_2058, 0, sizeof l_P_2058);
l_P_2058 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_2058))).f_TARGET = l_T_2057;
((*(R22 *)rt_nil_check(l_P_2058))).f_TARGET_TS = ((*(R17 *)rt_nil_check(p_E))).f_A;
if (r_NEEDS_INIT(l_T_2057))
{
{ R26 rv2059 = r_MKET(r_FMT2(rt_str("({ @ *p = rt_b_new(sizeof *p); @ p; })", 38), r_CTYPE(l_T_2057), r_INIT_CODE(l_T_2057, r_MK(rt_str("(*p)", 4)))), l_P_2058);
return rv2059; }
}
{ R26 rv2060 = r_MKET(r_FMT2(rt_str("((@ *)rt_b_new(sizeof (@)))", 27), r_CTYPE(l_T_2057), r_CTYPE(l_T_2057)), l_P_2058);
return rv2060; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_NTH(R17 * p_L, rt_int p_K) { RT_B_TICK(); 
R17 * l_P_2061; memset(&l_P_2061, 0, sizeof l_P_2061);
l_P_2061 = p_L;
{ rt_int it2063_lo = ((rt_int)1LL), it2063_hi = p_K;
for (rt_int it2063 = it2063_lo; it2063 <= it2063_hi; it2063++) {
{
if ((!(l_P_2061 == NULL)))
{
l_P_2061 = ((*(R17 *)rt_nil_check(l_P_2061))).f_NEXT;
}
}
RT_B_TICK();
if (it2063 == it2063_hi) break;
} } L_end2062: ;
{ R17 * rv2064 = l_P_2061;
return rv2064; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R17 * p_E, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
rt_int l_N_2065; memset(&l_N_2065, 0, sizeof l_N_2065);
l_N_2065 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A);
if (((l_N_2065 < p_LO) || (l_N_2065 > p_HI)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
}
static R9 r_ROUNDING_ARG(R17 * p_E, rt_int p_N) { RT_B_TICK(); 
R17 * l_L_2066; memset(&l_L_2066, 0, sizeof l_L_2066);
l_L_2066 = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_2066 == NULL)))
{
if (((((*(R17 *)rt_nil_check(l_L_2066))).f_KIND == g_N_QUAL) && ((((*(R17 *)rt_nil_check(l_L_2066))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_L_2066))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R9 rv2067 = r_MK(rt_str("1", 1));
return rv2067; }
}
{ R9 rv2068 = r_MK(rt_str("0", 1));
return rv2068; }
}
if (((((*(R17 *)rt_nil_check(l_L_2066))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_L_2066))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_L_2066))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R9 rv2069 = r_MK(rt_str("1", 1));
return rv2069; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_L_2066))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R9 rv2070 = r_MK(rt_str("0", 1));
return rv2070; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R9 rv2071 = r_MK(rt_str("1", 1));
return rv2071; }
}
{ R9 rv2072 = r_MK(rt_str("0", 1));
return rv2072; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R17 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv2073 = 0;
return rv2073; }
}
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv2074 = (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv2074; }
}
{ rt_int rv2075 = 0;
return rv2075; }
rt_raise(RT_X_INIT);
}
static R17 * r_ARG_EXPR(R17 * p_E) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R17 * rv2076 = ((*(R17 *)rt_nil_check(p_E))).f_A;
return rv2076; }
}
{ R17 * rv2077 = p_E;
return rv2077; }
rt_raise(RT_X_INIT);
}
static R9 r_OPERATOR_SYMBOL(R9 p_NAME) { RT_B_TICK(); 
rstr l_NAMES_2078; memset(&l_NAMES_2078, 0, sizeof l_NAMES_2078);
l_NAMES_2078 = rt_b_str_new(((rt_int)299LL), 0);
rt_b_assign(&l_NAMES_2078, rt_str(" ADD_:+ SUBTRACT_:- MULTIPLY_:* DIVIDE_:/ MODULUS_:MOD EXPONENTIATE_:** CONCATENATE_:!! EQUAL_:= UNEQUAL_:<> GREATER_THAN_:> LESS_THAN_:< GREATER_EQUAL_:>= LESS_EQUAL_:<= AND_:AND OR_:OR XOR_:XOR IMPLIES_:-> MD_ADD_:+ MD_SUBTRACT_:- MD_MULTIPLY_:* MD_DIVIDE_:/ NEGATE_:- MON_PLUS_:+ COMPLEMENT_:NOT ", 299));
rt_int l_L_2079; memset(&l_L_2079, 0, sizeof l_L_2079);
l_L_2079 = (p_NAME).f_LEN;
{ rt_int it2081_lo = ((rt_int)0LL), it2081_hi = rt_sub(rt_sub(((rt_int)299LL), l_L_2079), ((rt_int)2LL));
for (rt_int it2081 = it2081_lo; it2081 <= it2081_hi; it2081++) {
{
if ((rt_b_eq(rt_b_slice(l_NAMES_2078, it2081, it2081), rt_str(" ", 1)) && rt_b_eq(rt_b_slice(l_NAMES_2078, rt_add(rt_add(it2081, l_L_2079), ((rt_int)1LL)), rt_add(rt_add(it2081, l_L_2079), ((rt_int)1LL))), rt_str(":", 1))))
{
if (rt_b_eq(rt_b_slice(l_NAMES_2078, rt_add(it2081, ((rt_int)1LL)), rt_add(it2081, l_L_2079)), r_STR(p_NAME, l_L_2079)))
{
{
rt_int l_J_2082; memset(&l_J_2082, 0, sizeof l_J_2082);
l_J_2082 = rt_add(rt_add(it2081, l_L_2079), ((rt_int)2LL));
for (;;) {
if (rt_b_eq(rt_b_slice(l_NAMES_2078, l_J_2082, l_J_2082), rt_str(" ", 1))) goto L_end2083;
{
l_J_2082 = rt_add(l_J_2082, ((rt_int)1LL));
}
RT_B_TICK();
} L_end2083: ;
{ R9 rv2084 = r_MKN(rt_b_slice(l_NAMES_2078, rt_add(rt_add(it2081, l_L_2079), ((rt_int)2LL)), rt_sub(l_J_2082, ((rt_int)1LL))));
return rv2084; }
}
}
}
}
RT_B_TICK();
if (it2081 == it2081_hi) break;
} } L_end2080: ;
{ R9 rv2085 = r_NO_TEXT();
return rv2085; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_BUILTIN(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R9 l_NAME_2086; memset(&l_NAME_2086, 0, sizeof l_NAME_2086);
S_R9(&l_NAME_2086, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2087; memset(&l_LINE_2087, 0, sizeof l_LINE_2087);
l_LINE_2087 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
rt_int l_N_2088; memset(&l_N_2088, 0, sizeof l_N_2088);
l_N_2088 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A);
if ((r_TEQS(l_NAME_2086, rt_str("STORE_", 6)) || r_TEQS(l_NAME_2086, rt_str("SUBSTRING_STORE_", 16))))
{
{
R17 * l_TGT_2089; memset(&l_TGT_2089, 0, sizeof l_TGT_2089);
l_TGT_2089 = r_FIRST_OUT_ARG(p_E);
R17 * l_S_2090; memset(&l_S_2090, 0, sizeof l_S_2090);
l_S_2090 = r_NEW_NODE(g_N_ASSIGN, l_LINE_2087);
R17 * l_SRC_2091; memset(&l_SRC_2091, 0, sizeof l_SRC_2091);
l_SRC_2091 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if (((l_TGT_2089 == NULL) || (l_SRC_2091 == NULL)))
{
r_FAILT(l_LINE_2087, rt_str("the wrong arguments for ", 24), l_NAME_2086);
}
if (r_TEQS(l_NAME_2086, rt_str("STORE_", 6)))
{
((*(R17 *)rt_nil_check(l_S_2090))).f_A = l_TGT_2089;
}
else
{
if ((l_N_2088 < ((rt_int)3LL)))
{
r_FAIL(l_LINE_2087, rt_str("SUBSTRING_STORE_ (V, L, U # X) (D.5)", 36));
}
((*(R17 *)rt_nil_check(l_S_2090))).f_A = r_NEW_NODE(g_N_SUBSTR, l_LINE_2087);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_2090))).f_A))).f_A = l_TGT_2089;
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_2090))).f_A))).f_B = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_2090))).f_A))).f_C = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
}
((*(R17 *)rt_nil_check(l_S_2090))).f_B = r_QUALIFIED(r_COPY_NODE(l_SRC_2091), r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, rt_add(((rt_int)1LL), rt_mul(((rt_int)2LL), r_BOOL_INT(r_TEQS(l_NAME_2086, rt_str("SUBSTRING_STORE_", 16)))))), l_LINE_2087);
{
R14 l_SAVED_CODE_2092; memset(&l_SAVED_CODE_2092, 0, sizeof l_SAVED_CODE_2092);
S_R14(&l_SAVED_CODE_2092, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R9 l_C_2093; memset(&l_C_2093, 0, sizeof l_C_2093);
S_R9(&l_C_2093, r_MK(rt_str("({", 2)), 0);
R15 * l_P_2094; memset(&l_P_2094, 0, sizeof l_P_2094);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2095; memset(&rc2095, 0, sizeof rc2095);  rc2095.f_HEAD = NULL; rc2095.f_TAIL = NULL; rc2095; }), 0);
r_ASSIGN_STMT(l_S_2090);
l_P_2094 = (((*(R7 *)rt_nil_check(g_W))).f_CODE).f_HEAD;
for (;;) {
if ((l_P_2094 == NULL)) goto L_end2096;
{
S_R9(&l_C_2093, r_FMT2(rt_str("@ @", 3), l_C_2093, ((*(R15 *)rt_nil_check(l_P_2094))).f_T), 0);
l_P_2094 = ((*(R15 *)rt_nil_check(l_P_2094))).f_NEXT;
}
RT_B_TICK();
} L_end2096: ;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2092, 0);
{ R26 rv2097 = r_MKET(r_CATS(l_C_2093, rt_str(" })", 3)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2097; }
}
}
}
if (r_TEQS(l_NAME_2086, rt_str("SUBSTRING_", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R17 * l_S_2098; memset(&l_S_2098, 0, sizeof l_S_2098);
l_S_2098 = r_NEW_NODE(g_N_SUBSTR, l_LINE_2087);
((*(R17 *)rt_nil_check(l_S_2098))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_A;
((*(R17 *)rt_nil_check(l_S_2098))).f_B = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R17 *)rt_nil_check(l_S_2098))).f_C = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
((*(R17 *)rt_nil_check(l_S_2098))).f_A = r_COPY_NODE(((*(R17 *)rt_nil_check(p_E))).f_A);
{ R26 rv2099 = r_EXPR(l_S_2098, p_WANT);
return rv2099; }
}
}
{
R9 l_SYM__2100; memset(&l_SYM__2100, 0, sizeof l_SYM__2100);
S_R9(&l_SYM__2100, r_OPERATOR_SYMBOL(l_NAME_2086), 0);
rt_int l_UNARY_OP_2101; memset(&l_UNARY_OP_2101, 0, sizeof l_UNARY_OP_2101);
l_UNARY_OP_2101 = ((r_TEQS(l_NAME_2086, rt_str("NEGATE_", 7)) || r_TEQS(l_NAME_2086, rt_str("MON_PLUS_", 9))) || r_TEQS(l_NAME_2086, rt_str("COMPLEMENT_", 11)));
R17 * l_X_2102; memset(&l_X_2102, 0, sizeof l_X_2102);
if (l_UNARY_OP_2101)
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)3LL));
l_X_2102 = r_NEW_NODE(g_N_UNOP, l_LINE_2087);
S_R9(&((*(R17 *)rt_nil_check(l_X_2102))).f_NAME, l_SYM__2100, 0);
((*(R17 *)rt_nil_check(l_X_2102))).f_A = r_COPY_NODE(((*(R17 *)rt_nil_check(p_E))).f_A);
{ R26 rv2103 = r_EXPR(r_QUALIFIED(l_X_2102, r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), l_LINE_2087), p_WANT);
return rv2103; }
}
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)4LL));
l_X_2102 = r_BIN_NODE(l_SYM__2100, l_LINE_2087, r_COPY_NODE(((*(R17 *)rt_nil_check(p_E))).f_A), r_COPY_NODE(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))));
if (r_TEQS(l_SYM__2100, rt_str("/", 1)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL)).f_T)))).f_KIND == g_T_FLOAT)))
{
S_R9(&((*(R17 *)rt_nil_check(l_X_2102))).f_NAME, r_MK(rt_str("//", 2)), 0);
}
}
if (rt_b_eq(rt_b_slice(r_STR(l_NAME_2086, (l_NAME_2086).f_LEN), ((rt_int)0LL), ((rt_int)2LL)), rt_str("MD_", 3)))
{
((*(R17 *)rt_nil_check(l_X_2102))).f_FL = ((rt_int)2LL);
}
{ R26 rv2104 = r_EXPR(r_QUALIFIED(l_X_2102, r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_2087), p_WANT);
return rv2104; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_QUALIFIED(R17 * p_X, R17 * p_Q, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_2105; memset(&l_R_2105, 0, sizeof l_R_2105);
l_R_2105 = p_X;
R17 * l_P_2106; memset(&l_P_2106, 0, sizeof l_P_2106);
l_P_2106 = p_Q;
for (;;) {
if ((l_P_2106 == NULL)) goto L_end2107;
{
if ((l_R_2105 == p_X))
{
l_R_2105 = r_NEW_NODE(g_N_QUAL, p_LINE);
((*(R17 *)rt_nil_check(l_R_2105))).f_A = p_X;
}
if (((((((*(R17 *)rt_nil_check(l_P_2106))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_P_2106))).f_KIND == g_N_ENUMLIT))) && r_IS_ROUNDING_NAME(((*(R17 *)rt_nil_check(l_P_2106))).f_NAME)))
{
S_R9(&((*(R17 *)rt_nil_check(l_R_2105))).f_NAME, ((*(R17 *)rt_nil_check(l_P_2106))).f_NAME, 0);
}
else
{
((*(R17 *)rt_nil_check(l_R_2105))).f_B = l_P_2106;
}
l_P_2106 = ((*(R17 *)rt_nil_check(l_P_2106))).f_NEXT;
}
RT_B_TICK();
} L_end2107: ;
{ R17 * rv2108 = l_R_2105;
return rv2108; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING_NAME(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv2109 = (!(r_FIND_LITERAL(p_NAME, r_ROUNDINGS_TYPE()) == NULL));
return rv2109; }
rt_raise(RT_X_INIT);
}
static R22 * r_ROUNDINGS_TYPE(void) { RT_B_TICK(); 
R12 * l_Y_2110; memset(&l_Y_2110, 0, sizeof l_Y_2110);
l_Y_2110 = r_LOOKUP(r_MKN(rt_str("ROUNDINGS", 9)));
if ((!(l_Y_2110 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2110))).f_KIND == g_Y_TYPE))
{
{
R22 * l_T_2111; memset(&l_T_2111, 0, sizeof l_T_2111);
l_T_2111 = r_REAL_TYPE(r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_2110))).f_NAME, ((rt_int)0LL)));
if ((((*(R22 *)rt_nil_check(l_T_2111))).f_KIND == g_T_ENUM))
{
{ R22 * rv2112 = l_T_2111;
return rv2112; }
}
}
}
}
{ R22 * rv2113 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS;
return rv2113; }
rt_raise(RT_X_INIT);
}
static rt_int r_PREDEFINED_ROUNDING(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL))
{
{ rt_int rv2114 = 1;
return rv2114; }
}
if (((((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2115 = 1;
return rv2115; }
}
{ rt_int rv2116 = (((r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9))) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_R", 8))) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8)));
return rv2116; }
rt_raise(RT_X_INIT);
}
static R17 * r_FIRST_OUT_ARG(R17 * p_E) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL)))
{
{ R17 * rv2117 = ((*(R17 *)rt_nil_check(p_E))).f_C;
return rv2117; }
}
{ R17 * rv2118 = ((*(R17 *)rt_nil_check(p_E))).f_B;
return rv2118; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_OBJECT_ARG(R17 * p_L) { RT_B_TICK(); 
R17 * l_A_2119; memset(&l_A_2119, 0, sizeof l_A_2119);
l_A_2119 = p_L;
for (;;) {
if ((l_A_2119 == NULL)) goto L_end2120;
{
if ((((*(R17 *)rt_nil_check(l_A_2119))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_2121; memset(&l_Y_2121, 0, sizeof l_Y_2121);
l_Y_2121 = r_LOOKUP(((*(R17 *)rt_nil_check(l_A_2119))).f_NAME);
if ((!(l_Y_2121 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_2121))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_2121))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_2121))).f_T == NULL))))
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2121))).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
{ rt_int rv2122 = 1;
return rv2122; }
}
}
}
}
}
l_A_2119 = ((*(R17 *)rt_nil_check(l_A_2119))).f_NEXT;
}
RT_B_TICK();
} L_end2120: ;
{ rt_int rv2123 = 0;
return rv2123; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R9 l_NAME_2124; memset(&l_NAME_2124, 0, sizeof l_NAME_2124);
S_R9(&l_NAME_2124, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2125; memset(&l_LINE_2125, 0, sizeof l_LINE_2125);
l_LINE_2125 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
if ((!(r_CUR_GENERIC() == NULL)))
{
if (r_GENERIC_OBJECT_ARG(((*(R17 *)rt_nil_check(p_E))).f_A))
{
r_REQUIRE_WHERE(l_NAME_2124, l_LINE_2125);
}
}
if ((((((r_OPERATOR_SYMBOL(l_NAME_2124)).f_LEN > ((rt_int)0LL)) || r_TEQS(l_NAME_2124, rt_str("STORE_", 6))) || r_TEQS(l_NAME_2124, rt_str("SUBSTRING_", 10))) || r_TEQS(l_NAME_2124, rt_str("SUBSTRING_STORE_", 16))))
{
{ R26 rv2126 = r_OPERATOR_BUILTIN(p_E, p_WANT);
return rv2126; }
}
if ((r_TEQS(l_NAME_2124, rt_str("PUT", 3)) || r_TEQS(l_NAME_2124, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2127; memset(&l_V_2127, 0, sizeof l_V_2127);
S_R26(&l_V_2127, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2127).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_2125, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
r_ASCII_ONLY((l_V_2127).f_T, rt_str("the terminal", 12), l_LINE_2125);
if (r_TEQS(l_NAME_2124, rt_str("PUT", 3)))
{
{ R26 rv2128 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_2127).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2128; }
}
{ R26 rv2129 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_2127).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2129; }
}
}
else if (r_TEQS(l_NAME_2124, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2130 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2130; }
}
else if (r_TEQS(l_NAME_2124, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2131 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2131; }
}
else if (r_TEQS(l_NAME_2124, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2132 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2132; }
}
else if (r_TEQS(l_NAME_2124, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2133 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2133; }
}
else if (r_TEQS(l_NAME_2124, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2134 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2134; }
}
else if (r_TEQS(l_NAME_2124, rt_str("REAL_TIME", 9)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2135 = r_MKET(r_MK(rt_str("rt_b_real_time()", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2135; }
}
else if (r_TEQS(l_NAME_2124, rt_str("ARGUMENT_COUNT", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2136 = r_MKET(r_MK(rt_str("rt_argc()", 9)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2136; }
}
else if (r_TEQS(l_NAME_2124, rt_str("ARGUMENT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2137 = r_MKET(r_FMT1(rt_str("rt_arg(@)", 9), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2137; }
}
else if ((r_TEQS(l_NAME_2124, rt_str("FILE_EXISTS", 11)) || r_TEQS(l_NAME_2124, rt_str("READ_FILE", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2138; memset(&l_V_2138, 0, sizeof l_V_2138);
S_R26(&l_V_2138, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2138).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_2125, rt_str("a file is named by a character string: ", 39), l_NAME_2124);
}
if (r_TEQS(l_NAME_2124, rt_str("FILE_EXISTS", 11)))
{
{ R26 rv2139 = r_MKET(r_FMT1(rt_str("rt_b_file_exists(@)", 19), (l_V_2138).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2139; }
}
{ R26 rv2140 = r_MKET(r_FMT1(rt_str("rt_read_file(@)", 15), (l_V_2138).f_C), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2140; }
}
}
else if (r_TEQS(l_NAME_2124, rt_str("WRITE_FILE", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_N_2141; memset(&l_N_2141, 0, sizeof l_N_2141);
S_R26(&l_N_2141, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R26 l_V_2142; memset(&l_V_2142, 0, sizeof l_V_2142);
S_R26(&l_V_2142, r_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT, NULL), 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_N_2141).f_T)))).f_KIND == g_T_STR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2142).f_T)))).f_KIND == g_T_STR))))
{
r_FAIL(l_LINE_2125, rt_str("WRITE_FILE (name, text) takes two character strings", 51));
}
{ R26 rv2143 = r_MKET(r_FMT2(rt_str("rt_write_file(@, @)", 19), (l_N_2141).f_C, (l_V_2142).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2143; }
}
}
if (r_TEQS(l_NAME_2124, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2144 = r_IMAGE_OF(r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_2125);
return rv2144; }
}
else if (r_TEQS(l_NAME_2124, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv2145 = r_TO_FIXED_CALL(p_E);
return rv2145; }
}
else if (r_TEQS(l_NAME_2124, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_2146; memset(&l_V_2146, 0, sizeof l_V_2146);
S_R26(&l_V_2146, r_EXPR(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), NULL), 0);
R23 l_P_2147; memset(&l_P_2147, 0, sizeof l_P_2147);
S_R23(&l_P_2147, r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_VT_2148; memset(&l_VT_2148, 0, sizeof l_VT_2148);
l_VT_2148 = r_REAL_TYPE((l_V_2146).f_T);
R22 * l_T_2149; memset(&l_T_2149, 0, sizeof l_T_2149);
l_T_2149 = r_FLOAT_TYPE((l_P_2147).f_V);
R9 l_SINGLE_2150; memset(&l_SINGLE_2150, 0, sizeof l_SINGLE_2150);
S_R9(&l_SINGLE_2150, r_SINGLE_C((l_P_2147).f_V), 0);
R9 l_TR_2151; memset(&l_TR_2151, 0, sizeof l_TR_2151);
S_R9(&l_TR_2151, r_MK(rt_str("0", 1)), 0);
if (((r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A) == ((rt_int)3LL)) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT))).f_KIND == g_N_QUAL)))
{
{
R17 * l_R_2152; memset(&l_R_2152, 0, sizeof l_R_2152);
l_R_2152 = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
if ((l_R_2152 == NULL))
{
l_R_2152 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT;
}
if ((((*(R17 *)rt_nil_check(l_R_2152))).f_KIND == g_N_QUAL))
{
l_R_2152 = r_LIT_NODE_T(((*(R17 *)rt_nil_check(l_R_2152))).f_NAME, l_LINE_2125);
}
if (r_TEQS(((*(R17 *)rt_nil_check(l_R_2152))).f_NAME, rt_str("TRUNCATED", 9)))
{
S_R9(&l_TR_2151, r_MK(rt_str("1", 1)), 0);
}
else if ((!r_TEQS(((*(R17 *)rt_nil_check(l_R_2152))).f_NAME, rt_str("ROUNDED", 7))))
{
r_FAIL(l_LINE_2125, rt_str("TO_FLOAT is predefined for ROUNDED and TRUNCATED (3.3.6.1)", 58));
}
}
}
if ((((*(R22 *)rt_nil_check(l_VT_2148))).f_KIND == g_T_INT))
{
{ R26 rv2153 = r_MKET(r_FMT4(rt_str("rt_b_float_of_fix_r(@, @, @, @)", 31), (l_V_2146).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_2148))).f_SCALE), l_SINGLE_2150, l_TR_2151), l_T_2149);
return rv2153; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_2148))).f_KIND == g_T_FLOAT))
{
if (((((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) && (r_IMP_PRECISION_OF((l_P_2147).f_V) > r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_2148))).f_SCALE))))
{
{
R17 * l_Q_2154; memset(&l_Q_2154, 0, sizeof l_Q_2154);
l_Q_2154 = r_NEW_NODE(g_N_QUAL, l_LINE_2125);
R17 * l_SAVED_Q_2155; memset(&l_SAVED_Q_2155, 0, sizeof l_SAVED_Q_2155);
l_SAVED_Q_2155 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_L_2156; memset(&l_L_2156, 0, sizeof l_L_2156);
((*(R17 *)rt_nil_check(l_Q_2154))).f_B = r_ARG_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_Q_2154;
S_R26(&l_L_2156, r_EXPR(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_2155;
{ R26 rv2157 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_L_2156).f_C, l_SINGLE_2150, l_TR_2151), l_T_2149);
return rv2157; }
}
}
{ R26 rv2158 = r_MKET(r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (l_V_2146).f_C, l_SINGLE_2150, l_TR_2151), l_T_2149);
return rv2158; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_2148))).f_KIND == g_T_STR))
{
if (((!(((*(R22 *)rt_nil_check(l_VT_2148))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(l_VT_2148))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))))
{
r_FAIL(l_LINE_2125, rt_str("TO_FLOAT is predefined for ASCII strings only (3.3.6.1)", 55));
}
{ R26 rv2159 = r_MKET(r_FMT3(rt_str("rt_b_fconv(rt_b_float_of_str(@), @, @, 0)", 41), (l_V_2146).f_C, l_SINGLE_2150, l_TR_2151), l_T_2149);
return rv2159; }
}
r_FAIL(l_LINE_2125, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_2124, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2160 = r_BITS_OF(r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_2125);
return rv2160; }
}
else if (r_TEQS(l_NAME_2124, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2161; memset(&l_V_2161, 0, sizeof l_V_2161);
S_R26(&l_V_2161, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2161).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv2162 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_2161).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_2161).f_T))).f_SCALE));
return rv2162; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2161).f_T)))).f_KIND == g_T_FLOAT))
{
{ R26 rv2163 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_2161).f_C), (l_V_2161).f_T);
return rv2163; }
}
r_FAIL(l_LINE_2125, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_2124, rt_str("SUCC", 4)) || r_TEQS(l_NAME_2124, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2164; memset(&l_V_2164, 0, sizeof l_V_2164);
S_R26(&l_V_2164, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_2165; memset(&l_T_2165, 0, sizeof l_T_2165);
l_T_2165 = r_REAL_TYPE((l_V_2164).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_2165))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_2125, rt_str("an enumerated value expected by ", 32), l_NAME_2124);
}
if (r_IS_UNORDERED(l_T_2165))
{
r_FAILT(l_LINE_2125, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_2124);
}
if (r_TEQS(l_NAME_2124, rt_str("SUCC", 4)))
{
{ R26 rv2166 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_2164).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2165))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_2165))).f_BASE);
return rv2166; }
}
{ R26 rv2167 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_2164).f_C), ((*(R22 *)rt_nil_check(l_T_2165))).f_BASE);
return rv2167; }
}
}
else if (r_TEQS(l_NAME_2124, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_2168; memset(&l_V_2168, 0, sizeof l_V_2168);
S_R26(&l_V_2168, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_2169; memset(&l_K_2169, 0, sizeof l_K_2169);
l_K_2169 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2168).f_T)))).f_KIND;
R22 * l_T_2170; memset(&l_T_2170, 0, sizeof l_T_2170);
l_T_2170 = r_NEW_TYP(l_K_2169);
if (((!(l_K_2169 == g_T_STR)) && (!(l_K_2169 == g_T_BITS))))
{
r_FAIL(l_LINE_2125, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_2170))).f_BASE = ((*(R22 *)rt_nil_check((l_V_2168).f_T))).f_BASE;
{ R26 rv2171 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_2168).f_C, r_INT_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_2170);
return rv2171; }
}
}
else if (r_TEQS(l_NAME_2124, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2172 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2172; }
}
else if (r_TEQS(l_NAME_2124, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2173 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv2173; }
}
else if (((r_TEQS(l_NAME_2124, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_2124, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_2124, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R9 l_BITS_2174; memset(&l_BITS_2174, 0, sizeof l_BITS_2174);
S_R9(&l_BITS_2174, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_2124, rt_str("OCT_OF", 6)))
{
S_R9(&l_BITS_2174, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_2124, rt_str("HEX_OF", 6)))
{
S_R9(&l_BITS_2174, r_MK(rt_str("4", 1)), 0);
}
{
R26 l_V_2175; memset(&l_V_2175, 0, sizeof l_V_2175);
S_R26(&l_V_2175, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2175).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_2125, rt_str("a character string expected by ", 31), l_NAME_2124);
}
r_ASCII_ONLY((l_V_2175).f_T, r_STR(l_NAME_2124, (l_NAME_2124).f_LEN), l_LINE_2125);
{ R26 rv2176 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (l_V_2175).f_C, l_BITS_2174), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv2176; }
}
}
}
else if ((r_TEQS(l_NAME_2124, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_2124, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R23 l_S_2177; memset(&l_S_2177, 0, sizeof l_S_2177);
S_R23(&l_S_2177, r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_A, rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R23 l_R_2178; memset(&l_R_2178, 0, sizeof l_R_2178);
S_R23(&l_R_2178, r_MANIFEST_INTEGER_ARG(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
if ((!((l_R_2178).f_V == ((rt_int)2LL))))
{
r_FAIL(l_LINE_2125, rt_str("only radix 2 is predefined (3.2.6.3)", 36));
}
r_CHECK_PRECISION_ARG(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_2125);
if (r_TEQS(l_NAME_2124, rt_str("FIXED_MIN", 9)))
{
{ R26 rv2179 = r_MKET(r_STD_MIN_C(), r_INT_TYPE((l_S_2177).f_V));
return rv2179; }
}
{ R26 rv2180 = r_MKET(r_STD_MAX_C(), r_INT_TYPE((l_S_2177).f_V));
return rv2180; }
}
}
else if (((r_TEQS(l_NAME_2124, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_2124, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_2124, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R23 l_P_2181; memset(&l_P_2181, 0, sizeof l_P_2181);
S_R23(&l_P_2181, r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_T_2182; memset(&l_T_2182, 0, sizeof l_T_2182);
l_T_2182 = r_FLOAT_TYPE((l_P_2181).f_V);
R9 l_C_2183; memset(&l_C_2183, 0, sizeof l_C_2183);
S_R9(&l_C_2183, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF((l_P_2181).f_V) == ((rt_int)7LL)))
{
S_R9(&l_C_2183, r_MK(rt_str("FLT", 3)), 0);
}
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
if (r_TEQS(l_C_2183, rt_str("FLT", 3)))
{
S_R9(&l_C_2183, r_MK(rt_str("0x1.fffffep+126", 15)), 0);
}
else
{
S_R9(&l_C_2183, r_MK(rt_str("0x1.fffffffffffffp+126", 22)), 0);
}
if (r_TEQS(l_NAME_2124, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv2184 = r_MKET(r_FMT1(rt_str("(-@)", 4), l_C_2183), l_T_2182);
return rv2184; }
}
else if (r_TEQS(l_NAME_2124, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv2185 = r_MKET(l_C_2183, l_T_2182);
return rv2185; }
}
S_R9(&l_C_2183, r_MK(rt_str("DBL", 3)), 0);
if ((r_IMP_PRECISION_OF((l_P_2181).f_V) == ((rt_int)7LL)))
{
S_R9(&l_C_2183, r_MK(rt_str("FLT", 3)), 0);
}
}
if (r_TEQS(l_NAME_2124, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv2186 = r_MKET(r_FMT1(rt_str("(-@_MAX)", 8), l_C_2183), l_T_2182);
return rv2186; }
}
else if (r_TEQS(l_NAME_2124, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv2187 = r_MKET(r_FMT1(rt_str("@_MAX", 5), l_C_2183), l_T_2182);
return rv2187; }
}
{ R26 rv2188 = r_MKET(r_FMT1(rt_str("@_EPSILON", 9), l_C_2183), l_T_2182);
return rv2188; }
}
}
else if (r_TEQS(l_NAME_2124, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2189 = r_INT_ET(r_IMP_PRECISION_OF((r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION())).f_V));
return rv2189; }
}
else if (r_TEQS(l_NAME_2124, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2190 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2190; }
}
else if (r_TEQS(l_NAME_2124, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2191 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2191; }
}
if (r_TEQS(l_NAME_2124, rt_str("RUN_PATHS", 9)))
{
{ R26 rv2192 = r_RUN_PATHS(p_E);
return rv2192; }
}
{ R26 rv2193 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv2193; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_2194; memset(&l_T_2194, 0, sizeof l_T_2194);
l_T_2194 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_2195; memset(&l_K_2195, 0, sizeof l_K_2195);
l_K_2195 = ((*(R22 *)rt_nil_check(l_T_2194))).f_KIND;
R22 * l_S_2196; memset(&l_S_2196, 0, sizeof l_S_2196);
l_S_2196 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_2195 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_2194))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv2197 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_2196);
return rv2197; }
}
{ R26 rv2198 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_2194))).f_SCALE)), l_S_2196);
return rv2198; }
}
else if ((l_K_2195 == g_T_FLOAT))
{
{ R26 rv2199 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_2194))).f_SCALE)), l_S_2196);
return rv2199; }
}
else if ((l_K_2195 == g_T_BOOL))
{
{ R26 rv2200 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_2196);
return rv2200; }
}
else if ((l_K_2195 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_2194))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv2201 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_2196);
return rv2201; }
}
{ R26 rv2202 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2194))).f_BASE))).f_CNAME, (p_V).f_C), l_S_2196);
return rv2202; }
}
else if (((l_K_2195 == g_T_STR) || (l_K_2195 == g_T_BITS)))
{
{ R26 rv2203 = r_MKET((p_V).f_C, l_S_2196);
return rv2203; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_2194));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R17 * p_E) { RT_B_TICK(); 
R26 l_V_2204; memset(&l_V_2204, 0, sizeof l_V_2204);
S_R26(&l_V_2204, r_EXPR(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_2205; memset(&l_T_2205, 0, sizeof l_T_2205);
l_T_2205 = r_REAL_TYPE((l_V_2204).f_T);
rt_int l_N_2206; memset(&l_N_2206, 0, sizeof l_N_2206);
l_N_2206 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A);
R9 l_RND_2207; memset(&l_RND_2207, 0, sizeof l_RND_2207);
S_R9(&l_RND_2207, r_ROUNDING_ARG(p_E, l_N_2206), 0);
rt_int l_S_2208; memset(&l_S_2208, 0, sizeof l_S_2208);
l_S_2208 = ((rt_int)0LL);
if (((l_N_2206 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
l_S_2208 = (r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL))).f_V;
}
{
rt_int l_K_2209; memset(&l_K_2209, 0, sizeof l_K_2209);
l_K_2209 = ((rt_int)2LL);
for (;;) {
if ((l_K_2209 >= l_N_2206)) goto L_end2210;
{
{
R17 * l_R_2211; memset(&l_R_2211, 0, sizeof l_R_2211);
l_R_2211 = r_ARG_EXPR(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, l_K_2209));
if ((r_IS_ROUNDING(l_R_2211) || (((((*(R17 *)rt_nil_check(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, l_K_2209)))).f_KIND == g_N_QUAL) && (l_K_2209 == rt_sub(l_N_2206, ((rt_int)1LL)))))))
{
if ((!(l_K_2209 == rt_sub(l_N_2206, ((rt_int)1LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the rounding mode is the last argument of TO_FIXED (3.2.6.1)", 60));
}
}
else if (((((((*(R17 *)rt_nil_check(l_R_2211))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_2211))).f_KIND == g_N_ENUMLIT))) && (!r_NAMES_OBJECT(((*(R17 *)rt_nil_check(l_R_2211))).f_NAME))))
{
r_CHECK_PRECISION_ARG(l_R_2211, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
else if (((((*(R17 *)rt_nil_check(l_R_2211))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(l_R_2211))).f_NAME, rt_str("PRECISION", 9))))
{
}
else
{
if ((!((r_MANIFEST_INTEGER_ARG(l_R_2211, rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL))).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 is predefined (3.2.6.1)", 36));
}
}
}
l_K_2209 = rt_add(l_K_2209, ((rt_int)1LL));
}
RT_B_TICK();
} L_end2210: ;
}
if (((((*(R22 *)rt_nil_check(l_T_2205))).f_KIND == g_T_INT) && (((((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) || (((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_INT)))))
{
{ R26 rv2212 = r_MKET(r_FMT3(rt_str("rt_b_fix_val(@, @, @)", 21), r_CSTRING(((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_NAME), r_NUM(l_S_2208), l_RND_2207), r_INT_TYPE(l_S_2208));
return rv2212; }
}
if ((((*(R22 *)rt_nil_check(l_T_2205))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_2213; memset(&l_SAVED_2213, 0, sizeof l_SAVED_2213);
l_SAVED_2213 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R9 l_C_2214; memset(&l_C_2214, 0, sizeof l_C_2214);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_2207, rt_str("1", 1));
S_R9(&l_C_2214, r_RESCALE_C((l_V_2204).f_C, ((*(R22 *)rt_nil_check(l_T_2205))).f_SCALE, l_S_2208), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_2213;
{ R26 rv2215 = r_MKET(l_C_2214, r_INT_TYPE(l_S_2208));
return rv2215; }
}
}
else if ((((*(R22 *)rt_nil_check(l_T_2205))).f_KIND == g_T_FLOAT))
{
{ R26 rv2216 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_2204).f_C, r_NUM(l_S_2208), l_RND_2207), r_INT_TYPE(l_S_2208));
return rv2216; }
}
else if (((((*(R22 *)rt_nil_check(l_T_2205))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_2205))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_2205))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_2205))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_2205))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2205))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv2217 = r_MKET(r_RESCALE_C((l_V_2204).f_C, ((rt_int)0LL), l_S_2208), r_INT_TYPE(l_S_2208));
return rv2217; }
}
else if ((((*(R22 *)rt_nil_check(l_T_2205))).f_KIND == g_T_BITS))
{
{ R26 rv2218 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_2204).f_C), ((rt_int)0LL), l_S_2208), r_INT_TYPE(l_S_2208));
return rv2218; }
}
else if ((((*(R22 *)rt_nil_check(l_T_2205))).f_KIND == g_T_STR))
{
r_ASCII_ONLY(l_T_2205, rt_str("TO_FIXED", 8), ((*(R17 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv2219 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_2204).f_C, r_NUM(l_S_2208), l_RND_2207), r_INT_TYPE(l_S_2208));
return rv2219; }
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_2204).f_T));
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_SIZE_OR(R22 * p_T) { RT_B_TICK(); 
R23 l_M_2220; memset(&l_M_2220, 0, sizeof l_M_2220);
S_R23(&l_M_2220, r_STATIC_SIZE(p_T), 0);
if ((l_M_2220).f_OK)
{
{ rt_int rv2221 = (l_M_2220).f_V;
return rv2221; }
}
{ rt_int rv2222 = rt_neg(((rt_int)1LL));
return rv2222; }
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_2223; memset(&l_T_2223, 0, sizeof l_T_2223);
l_T_2223 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_2224; memset(&l_K_2224, 0, sizeof l_K_2224);
l_K_2224 = ((*(R22 *)rt_nil_check(l_T_2223))).f_KIND;
if ((l_K_2224 == g_T_BITS))
{
{ R26 rv2225 = p_V;
return rv2225; }
}
else if ((l_K_2224 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_2223))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2223))).f_REPS))).f_B == NULL)))
{
{ R26 rv2226 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_2223)), r_BITS_TYPE(r_ENUM_SIZE(l_T_2223)));
return rv2226; }
}
}
{ R26 rv2227 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_2223))), r_BITS_TYPE(r_ENUM_SIZE(l_T_2223)));
return rv2227; }
}
else if ((l_K_2224 == g_T_STR))
{
{ R26 rv2228 = r_MKET(r_FMT4(rt_str("rt_b_bits_of_chars(@, @, @, @)", 30), (p_V).f_C, r_NUM(r_CHAR_SIZE(l_T_2223)), r_NUM(r_PACKING_OF(l_T_2223)), r_CHAR_REPS(l_T_2223)), r_BITS_TYPE(r_STATIC_SIZE_OR(l_T_2223)));
return rv2228; }
}
r_REQUIRE_MACHINE(p_LINE);
if ((l_K_2224 == g_T_INT))
{
{ R26 rv2229 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(((*(R7 *)rt_nil_check(g_W))).f_WORD)), r_BITS_TYPE(((*(R7 *)rt_nil_check(g_W))).f_WORD));
return rv2229; }
}
else if ((l_K_2224 == g_T_BOOL))
{
{ R26 rv2230 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv2230; }
}
else if ((l_K_2224 == g_T_FLOAT))
{
{ R26 rv2231 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv2231; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_2223));
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
{ rt_int rv2232 = 0;
return rv2232; }
}
{ rt_int rv2233 = ((r_IS_LITERALISH(((*(R27 *)rt_nil_check(p_A))).f_E) || (((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv2233; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R27 * p_A) { RT_B_TICK(); 
rt_int l_N_2234; memset(&l_N_2234, 0, sizeof l_N_2234);
l_N_2234 = ((rt_int)0LL);
R27 * l_P_2235; memset(&l_P_2235, 0, sizeof l_P_2235);
l_P_2235 = p_A;
for (;;) {
if ((l_P_2235 == NULL)) goto L_end2236;
{
l_N_2234 = rt_add(l_N_2234, ((rt_int)1LL));
l_P_2235 = ((*(R27 *)rt_nil_check(l_P_2235))).f_NEXT;
}
RT_B_TICK();
} L_end2236: ;
{ rt_int rv2237 = l_N_2234;
return rv2237; }
rt_raise(RT_X_INIT);
}
static R27 * r_CALL_ARGS(R17 * p_E) { RT_B_TICK(); 
R27 * l_HEAD_2238; memset(&l_HEAD_2238, 0, sizeof l_HEAD_2238);
l_HEAD_2238 = NULL;
R27 * l_TAIL_2239; memset(&l_TAIL_2239, 0, sizeof l_TAIL_2239);
l_TAIL_2239 = NULL;
rt_int l_G_2240; memset(&l_G_2240, 0, sizeof l_G_2240);
l_G_2240 = ((rt_int)0LL);
{ rt_int it2242_lo = ((rt_int)0LL), it2242_hi = ((rt_int)2LL);
for (rt_int it2242 = it2242_lo; it2242 <= it2242_hi; it2242++) {
{
{
R17 * l_P_2243; memset(&l_P_2243, 0, sizeof l_P_2243);
l_P_2243 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((it2242 == ((rt_int)1LL)))
{
l_P_2243 = ((*(R17 *)rt_nil_check(p_E))).f_B;
}
else if ((it2242 == ((rt_int)2LL)))
{
l_P_2243 = ((*(R17 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_2243 == NULL)) goto L_end2244;
{
{
R27 * l_A_2245; memset(&l_A_2245, 0, sizeof l_A_2245);
l_A_2245 = r_NODE_ARG(l_P_2243, it2242, NULL);
if ((l_TAIL_2239 == NULL))
{
l_HEAD_2238 = l_A_2245;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2239))).f_NEXT = l_A_2245;
}
l_TAIL_2239 = l_A_2245;
}
l_P_2243 = ((*(R17 *)rt_nil_check(l_P_2243))).f_NEXT;
}
RT_B_TICK();
} L_end2244: ;
}
}
RT_B_TICK();
if (it2242 == it2242_hi) break;
} } L_end2241: ;
{ R27 * rv2246 = l_HEAD_2238;
return rv2246; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SAVED_2247; memset(&l_SAVED_2247, 0, sizeof l_SAVED_2247);
l_SAVED_2247 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_2248; memset(&l_SAVED_Q_2248, 0, sizeof l_SAVED_Q_2248);
l_SAVED_Q_2248 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_2249; memset(&l_V_2249, 0, sizeof l_V_2249);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_2249, r_CALL_EXPR1(p_E, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_2247;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_2248;
{ R26 rv2250 = l_V_2249;
return rv2250; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR1(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R27 * l_ARGS_2251; memset(&l_ARGS_2251, 0, sizeof l_ARGS_2251);
l_ARGS_2251 = r_CALL_ARGS(p_E);
R12 * l_Y_2252; memset(&l_Y_2252, 0, sizeof l_Y_2252);
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv2253 = r_START_IO_CALL(p_E);
return rv2253; }
}
l_Y_2252 = r_BOUND_ROUTINE(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2252 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2252))).f_KIND == g_Y_BUILTIN))
{
{
R17 * l_N_2254; memset(&l_N_2254, 0, sizeof l_N_2254);
l_N_2254 = r_COPY_NODE(p_E);
S_R9(&((*(R17 *)rt_nil_check(l_N_2254))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2252))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2254))).f_NEXT = ((*(R17 *)rt_nil_check(p_E))).f_NEXT;
{ R26 rv2255 = r_BUILTIN(l_N_2254, p_WANT);
return rv2255; }
}
}
{ R26 rv2256 = r_CALL_SYM(l_Y_2252, l_ARGS_2251, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv2256; }
}
{
R9 l_SHORT_2257; memset(&l_SHORT_2257, 0, sizeof l_SHORT_2257);
S_R9(&l_SHORT_2257, r_WHERE_SHORT_NAME(((*(R17 *)rt_nil_check(p_E))).f_NAME), 0);
if ((!r_TEQ(l_SHORT_2257, ((*(R17 *)rt_nil_check(p_E))).f_NAME)))
{
{
R17 * l_N_2258; memset(&l_N_2258, 0, sizeof l_N_2258);
l_N_2258 = r_COPY_NODE(p_E);
S_R9(&((*(R17 *)rt_nil_check(l_N_2258))).f_NAME, l_SHORT_2257, 0);
((*(R17 *)rt_nil_check(l_N_2258))).f_NEXT = ((*(R17 *)rt_nil_check(p_E))).f_NEXT;
{ R26 rv2259 = r_CALL_EXPR1(l_N_2258, p_WANT);
return rv2259; }
}
}
}
l_Y_2252 = r_FIND_ROUTINE(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2251, ((*(R17 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_2252 == NULL))
{
{
R12 * l_P_2260; memset(&l_P_2260, 0, sizeof l_P_2260);
l_P_2260 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_2260 == NULL)) goto L_end2261;
{
if ((((*(R12 *)rt_nil_check(l_P_2260))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv2262 = r_BUILTIN(p_E, p_WANT);
return rv2262; }
}
l_P_2260 = r_LOOKUP_NEXT(l_P_2260);
}
RT_B_TICK();
} L_end2261: ;
}
{
R12 * l_B_2263; memset(&l_B_2263, 0, sizeof l_B_2263);
l_B_2263 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_2263 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_2263))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv2264 = r_BUILTIN(p_E, p_WANT);
return rv2264; }
}
if (((((*(R12 *)rt_nil_check(l_B_2263))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_2263))).f_ORIG == NULL))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
}
{
R9 l_BASE_2265; memset(&l_BASE_2265, 0, sizeof l_BASE_2265);
S_R9(&l_BASE_2265, r_CLASS_OPERATION(((*(R17 *)rt_nil_check(p_E))).f_NAME), 0);
if (((l_BASE_2265).f_LEN > ((rt_int)0LL)))
{
{
R17 * l_N_2266; memset(&l_N_2266, 0, sizeof l_N_2266);
l_N_2266 = r_COPY_NODE(p_E);
S_R9(&((*(R17 *)rt_nil_check(l_N_2266))).f_NAME, l_BASE_2265, 0);
{ R26 rv2267 = r_BUILTIN(l_N_2266, p_WANT);
return rv2267; }
}
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv2268 = r_CALL_SYM(l_Y_2252, l_ARGS_2251, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv2268; }
rt_raise(RT_X_INIT);
}
static R9 r_CLASS_OPERATION(R9 p_NAME) { RT_B_TICK(); 
rstr l_S_2269; memset(&l_S_2269, 0, sizeof l_S_2269);
l_S_2269 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2269, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2271_lo = ((rt_int)1LL), it2271_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2271 = it2271_lo; it2271 <= it2271_hi; it2271++) {
{
if (rt_b_eq(rt_b_slice(l_S_2269, it2271, it2271), rt_str("$", 1)))
{
{
R9 l_P_2272; memset(&l_P_2272, 0, sizeof l_P_2272);
S_R9(&l_P_2272, r_MKN(rt_b_slice(l_S_2269, ((rt_int)0LL), rt_sub(it2271, ((rt_int)1LL)))), 0);
R9 l_B_2273; memset(&l_B_2273, 0, sizeof l_B_2273);
S_R9(&l_B_2273, r_MKN(rt_b_slice(l_S_2269, rt_add(it2271, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))), 0);
if ((((((((r_IS_TYPE_WORD(l_P_2272) || r_TEQS(l_P_2272, rt_str("INTEGER", 7))) || r_TEQS(l_P_2272, rt_str("BOOLEAN", 7))) || r_TEQS(l_P_2272, rt_str("ENUM", 4))) || r_TEQS(l_P_2272, rt_str("ARRAY", 5))) || r_TEQS(l_P_2272, rt_str("RECORD", 6))) || r_TEQS(l_P_2272, rt_str("PTR", 3))) || r_TEQS(l_P_2272, rt_str("SEMAPHORE", 9))))
{
{
R12 * l_Y_2274; memset(&l_Y_2274, 0, sizeof l_Y_2274);
l_Y_2274 = r_LOOKUP(l_B_2273);
for (;;) {
if ((l_Y_2274 == NULL)) goto L_end2275;
{
if ((((*(R12 *)rt_nil_check(l_Y_2274))).f_KIND == g_Y_BUILTIN))
{
{ R9 rv2276 = l_B_2273;
return rv2276; }
}
l_Y_2274 = r_LOOKUP_NEXT(l_Y_2274);
}
RT_B_TICK();
} L_end2275: ;
}
}
}
{ R9 rv2277 = r_NO_TEXT();
return rv2277; }
}
}
RT_B_TICK();
if (it2271 == it2271_hi) break;
} } L_end2270: ;
{ R9 rv2278 = r_NO_TEXT();
return rv2278; }
rt_raise(RT_X_INIT);
}
static R9 r_WHERE_SHORT_NAME(R9 p_NAME) { RT_B_TICK(); 
R12 * l_G_2279; memset(&l_G_2279, 0, sizeof l_G_2279);
l_G_2279 = r_CUR_GENERIC();
rstr l_S_2280; memset(&l_S_2280, 0, sizeof l_S_2280);
l_S_2280 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2280, r_STR(p_NAME, (p_NAME).f_LEN));
if ((l_G_2279 == NULL))
{
{ R9 rv2281 = p_NAME;
return rv2281; }
}
{ rt_int it2283_lo = ((rt_int)1LL), it2283_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2283 = it2283_lo; it2283 <= it2283_hi; it2283++) {
{
if (rt_b_eq(rt_b_slice(l_S_2280, it2283, it2283), rt_str("$", 1)))
{
if (((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_G_2279))).f_BINDINGS, r_MKN(rt_b_slice(l_S_2280, ((rt_int)0LL), rt_sub(it2283, ((rt_int)1LL))))) == NULL)) && r_IN_WHERE(l_G_2279, r_MKN(rt_b_slice(l_S_2280, rt_add(it2283, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))))))
{
{ R9 rv2284 = r_MKN(rt_b_slice(l_S_2280, rt_add(it2283, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))));
return rv2284; }
}
{ R9 rv2285 = p_NAME;
return rv2285; }
}
}
RT_B_TICK();
if (it2283 == it2283_hi) break;
} } L_end2282: ;
{ R9 rv2286 = p_NAME;
return rv2286; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R9 p_NAME) { RT_B_TICK(); 
R21 * l_B_2287; memset(&l_B_2287, 0, sizeof l_B_2287);
l_B_2287 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_2288; memset(&l_S_2288, 0, sizeof l_S_2288);
l_S_2288 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2288, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2290_lo = ((rt_int)1LL), it2290_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2290 = it2290_lo; it2290 <= it2290_hi; it2290++) {
{
if (rt_b_eq(rt_b_slice(l_S_2288, it2290, it2290), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_2288, ((rt_int)0LL), rt_sub(it2290, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv2291 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_2288, rt_add(it2290, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv2291; }
}
goto L_end2289;
}
}
RT_B_TICK();
if (it2290 == it2290_hi) break;
} } L_end2289: ;
}
for (;;) {
if ((l_B_2287 == NULL)) goto L_end2292;
{
if (((!(((*(R21 *)rt_nil_check(l_B_2287))).f_R == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_B_2287))).f_NAME, p_NAME)))
{
{ R12 * rv2293 = ((*(R21 *)rt_nil_check(l_B_2287))).f_R;
return rv2293; }
}
l_B_2287 = ((*(R21 *)rt_nil_check(l_B_2287))).f_NEXT;
}
RT_B_TICK();
} L_end2292: ;
{ R12 * rv2294 = NULL;
return rv2294; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R9 p_NAME) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv2295 = 0;
return rv2295; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv2296 = 0;
return rv2296; }
}
}
}
{ rt_int rv2297 = 1;
return rv2297; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R9 p_NAME, R27 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { RT_B_TICK(); 
R12 * l_Y_2298; memset(&l_Y_2298, 0, sizeof l_Y_2298);
l_Y_2298 = r_LOOKUP(p_NAME);
R12 * l_BEST_2299; memset(&l_BEST_2299, 0, sizeof l_BEST_2299);
l_BEST_2299 = NULL;
rt_int l_BEST_SCORE_2300; memset(&l_BEST_SCORE_2300, 0, sizeof l_BEST_SCORE_2300);
l_BEST_SCORE_2300 = ((rt_int)0LL);
rt_int l_TIES_2301; memset(&l_TIES_2301, 0, sizeof l_TIES_2301);
l_TIES_2301 = ((rt_int)0LL);
rt_int l_COUNT_2302; memset(&l_COUNT_2302, 0, sizeof l_COUNT_2302);
l_COUNT_2302 = ((rt_int)0LL);
rt_int l_N_2303; memset(&l_N_2303, 0, sizeof l_N_2303);
l_N_2303 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_2298 == NULL)) goto L_end2304;
{
if ((!r_IS_ROUTINE(l_Y_2298)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2298))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end2304;
}
}
else if (r_CANDIDATE(l_Y_2298, p_NAME))
{
{
R12 * l_R_2305; memset(&l_R_2305, 0, sizeof l_R_2305);
l_R_2305 = r_ORIGINAL(l_Y_2298);
rt_int l_SCORE_2306; memset(&l_SCORE_2306, 0, sizeof l_SCORE_2306);
r_ROUTINE_HEADER(l_R_2305);
if ((((r_PARAM_COUNT(l_R_2305) == l_N_2303) && (!r_SEEN_ROUTINE(l_R_2305, p_NAME, l_Y_2298))) && (!r_HIDDEN_ROUTINE(l_R_2305, p_NAME, l_Y_2298))))
{
l_COUNT_2302 = rt_add(l_COUNT_2302, ((rt_int)1LL));
l_SCORE_2306 = r_MATCH_SCORE(l_R_2305, p_ARGS);
if ((l_SCORE_2306 > l_BEST_SCORE_2300))
{
l_BEST_2299 = l_R_2305;
l_BEST_SCORE_2300 = l_SCORE_2306;
l_TIES_2301 = ((rt_int)0LL);
}
else if (((l_SCORE_2306 == l_BEST_SCORE_2300) && (l_SCORE_2306 > ((rt_int)0LL))))
{
l_TIES_2301 = rt_add(l_TIES_2301, ((rt_int)1LL));
}
}
}
}
l_Y_2298 = r_LOOKUP_NEXT(l_Y_2298);
}
RT_B_TICK();
} L_end2304: ;
if (((l_TIES_2301 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv2307 = l_BEST_2299;
return rv2307; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R9 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2308; memset(&l_Y_2308, 0, sizeof l_Y_2308);
l_Y_2308 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2308 == p_STOP) || (l_Y_2308 == NULL))) goto L_end2309;
{
if ((((*(R12 *)rt_nil_check(l_Y_2308))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_2308) == p_R))
{
{ rt_int rv2310 = 1;
return rv2310; }
}
}
l_Y_2308 = r_LOOKUP_NEXT(l_Y_2308);
}
RT_B_TICK();
} L_end2309: ;
{ rt_int rv2311 = 0;
return rv2311; }
rt_raise(RT_X_INIT);
}
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R9 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2312; memset(&l_Y_2312, 0, sizeof l_Y_2312);
l_Y_2312 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2312 == p_STOP) || (l_Y_2312 == NULL))) goto L_end2313;
{
if (((((*(R12 *)rt_nil_check(l_Y_2312))).f_KIND == g_Y_ROUTINE) && (((*(R12 *)rt_nil_check(l_Y_2312))).f_DEPTH > ((*(R12 *)rt_nil_check(p_STOP))).f_DEPTH)))
{
{
R12 * l_O_2314; memset(&l_O_2314, 0, sizeof l_O_2314);
l_O_2314 = r_ORIGINAL(l_Y_2312);
if ((!(l_O_2314 == p_R)))
{
r_ROUTINE_HEADER(l_O_2314);
if (r_SAME_SIGNATURE(l_O_2314, p_R))
{
{ rt_int rv2315 = 1;
return rv2315; }
}
}
}
}
l_Y_2312 = r_LOOKUP_NEXT(l_Y_2312);
}
RT_B_TICK();
} L_end2313: ;
{ rt_int rv2316 = 0;
return rv2316; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B) { RT_B_TICK(); 
R28 * l_P_2317; memset(&l_P_2317, 0, sizeof l_P_2317);
l_P_2317 = ((*(R12 *)rt_nil_check(p_A))).f_PARAMS;
R28 * l_Q_2318; memset(&l_Q_2318, 0, sizeof l_Q_2318);
l_Q_2318 = ((*(R12 *)rt_nil_check(p_B))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_A))).f_GENERIC || ((*(R12 *)rt_nil_check(p_B))).f_GENERIC))
{
{ rt_int rv2319 = 0;
return rv2319; }
}
for (;;) {
if (((l_P_2317 == NULL) || (l_Q_2318 == NULL))) goto L_end2320;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2317))).f_MODE == ((*(R28 *)rt_nil_check(l_Q_2318))).f_MODE)))
{
{ rt_int rv2321 = 0;
return rv2321; }
}
if (((((*(R28 *)rt_nil_check(l_P_2317))).f_T == NULL) || (((*(R28 *)rt_nil_check(l_Q_2318))).f_T == NULL)))
{
if ((!(((*(R28 *)rt_nil_check(l_P_2317))).f_T == ((*(R28 *)rt_nil_check(l_Q_2318))).f_T)))
{
{ rt_int rv2322 = 0;
return rv2322; }
}
}
else if ((!r_SAME_TYPE(((*(R28 *)rt_nil_check(l_P_2317))).f_T, ((*(R28 *)rt_nil_check(l_Q_2318))).f_T)))
{
{ rt_int rv2323 = 0;
return rv2323; }
}
l_P_2317 = ((*(R28 *)rt_nil_check(l_P_2317))).f_NEXT;
l_Q_2318 = ((*(R28 *)rt_nil_check(l_Q_2318))).f_NEXT;
}
RT_B_TICK();
} L_end2320: ;
{ rt_int rv2324 = ((l_P_2317 == NULL) && (l_Q_2318 == NULL));
return rv2324; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { RT_B_TICK(); 
rt_int l_N_2325; memset(&l_N_2325, 0, sizeof l_N_2325);
l_N_2325 = ((rt_int)0LL);
R28 * l_P_2326; memset(&l_P_2326, 0, sizeof l_P_2326);
l_P_2326 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_2326 == NULL)) goto L_end2327;
{
l_N_2325 = rt_add(l_N_2325, ((rt_int)1LL));
l_P_2326 = ((*(R28 *)rt_nil_check(l_P_2326))).f_NEXT;
}
RT_B_TICK();
} L_end2327: ;
{ rt_int rv2328 = l_N_2325;
return rv2328; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R27 * p_ARGS) { RT_B_TICK(); 
R28 * l_P_2329; memset(&l_P_2329, 0, sizeof l_P_2329);
l_P_2329 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R27 * l_A_2330; memset(&l_A_2330, 0, sizeof l_A_2330);
l_A_2330 = p_ARGS;
rt_int l_EXACT_2331; memset(&l_EXACT_2331, 0, sizeof l_EXACT_2331);
l_EXACT_2331 = 1;
R21 * l_BS_2332; memset(&l_BS_2332, 0, sizeof l_BS_2332);
l_BS_2332 = r_NEW_BINDS();
R22 * l_PT_2333; memset(&l_PT_2333, 0, sizeof l_PT_2333);
for (;;) {
if ((l_P_2329 == NULL)) goto L_end2334;
{
l_PT_2333 = r_FORMAL_VIEW(p_R, l_P_2329);
if ((!(((*(R28 *)rt_nil_check(l_P_2329))).f_MODE == ((*(R27 *)rt_nil_check(l_A_2330))).f_MODE)))
{
{ rt_int rv2335 = ((rt_int)0LL);
return rv2335; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R28 *)rt_nil_check(l_P_2329))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_2329, l_A_2330, l_BS_2332)))
{
{ rt_int rv2336 = ((rt_int)0LL);
return rv2336; }
}
}
else if ((l_PT_2333 == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2330))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_A_2330))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv2337 = ((rt_int)0LL);
return rv2337; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_2330))
{
if ((!r_LITERAL_FITS(((*(R27 *)rt_nil_check(l_A_2330))).f_E, l_PT_2333)))
{
{ rt_int rv2338 = ((rt_int)0LL);
return rv2338; }
}
}
else
{
r_TYPE_ARG(l_A_2330);
{
R22 * l_AT_2339; memset(&l_AT_2339, 0, sizeof l_AT_2339);
l_AT_2339 = (((*(R27 *)rt_nil_check(l_A_2330))).f_V).f_T;
if ((!((r_SAME_CLASS(l_PT_2333, l_AT_2339) || (((((*(R22 *)rt_nil_check(l_AT_2339))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2333)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv2340 = ((rt_int)0LL);
return rv2340; }
}
if ((((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2333)))).f_GEN).f_LEN > ((rt_int)0LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2339)))).f_MLEN).f_OK))
{
{
R9 l_KEY_2341; memset(&l_KEY_2341, 0, sizeof l_KEY_2341);
S_R9(&l_KEY_2341, r_QMKN(rt_str("%", 1), ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2333)))).f_GEN), 0);
R21 * l_B_2342; memset(&l_B_2342, 0, sizeof l_B_2342);
l_B_2342 = r_FIND_BIND(((*(R21 *)rt_nil_check(l_BS_2332))).f_NEXT, l_KEY_2341);
if ((!(l_B_2342 == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(l_B_2342))).f_MV == (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2339)))).f_MLEN).f_V)))
{
{ rt_int rv2343 = ((rt_int)0LL);
return rv2343; }
}
}
else
{
r_ADD_BIND(l_KEY_2341, NULL, ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2339)))).f_MLEN, NULL, l_BS_2332);
}
}
}
if ((!r_SAME_TYPE(l_PT_2333, l_AT_2339)))
{
if ((((*(R28 *)rt_nil_check(l_P_2329))).f_MODE == g_M_INOUT))
{
{ rt_int rv2344 = ((rt_int)0LL);
return rv2344; }
}
l_EXACT_2331 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2339)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2333)))).f_KIND == g_T_INT)))
{
if (((((*(R28 *)rt_nil_check(l_P_2329))).f_MODE == g_M_IN) && (((*(R22 *)rt_nil_check(l_AT_2339))).f_SCALE > ((*(R22 *)rt_nil_check(l_PT_2333))).f_SCALE)))
{
{ rt_int rv2345 = ((rt_int)0LL);
return rv2345; }
}
else if (((((*(R28 *)rt_nil_check(l_P_2329))).f_MODE == g_M_OUT) && (((*(R22 *)rt_nil_check(l_PT_2333))).f_SCALE > ((*(R22 *)rt_nil_check(l_AT_2339))).f_SCALE)))
{
{ rt_int rv2346 = ((rt_int)0LL);
return rv2346; }
}
}
}
}
l_P_2329 = ((*(R28 *)rt_nil_check(l_P_2329))).f_NEXT;
l_A_2330 = ((*(R27 *)rt_nil_check(l_A_2330))).f_NEXT;
}
RT_B_TICK();
} L_end2334: ;
if (l_EXACT_2331)
{
{ rt_int rv2347 = ((rt_int)2LL);
return rv2347; }
}
{ rt_int rv2348 = ((rt_int)1LL);
return rv2348; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R17 * p_E, R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_2349; memset(&l_RT_2349, 0, sizeof l_RT_2349);
l_RT_2349 = r_REAL_TYPE(p_T);
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_2349))).f_KIND == g_T_ENUM))
{
{ rt_int rv2350 = (!(r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_RT_2349) == NULL));
return rv2350; }
}
{ rt_int rv2351 = 0;
return rv2351; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv2352 = (((*(R22 *)rt_nil_check(l_RT_2349))).f_KIND == g_T_PTR);
return rv2352; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv2353 = (((*(R22 *)rt_nil_check(l_RT_2349))).f_KIND == g_T_REC);
return rv2353; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv2354 = (((*(R22 *)rt_nil_check(l_RT_2349))).f_KIND == g_T_ARR);
return rv2354; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv2355 = (((*(R22 *)rt_nil_check(l_RT_2349))).f_KIND == g_T_INT);
return rv2355; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv2356 = ((((*(R22 *)rt_nil_check(l_RT_2349))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_2349))).f_KIND == g_T_SEM));
return rv2356; }
}
{ rt_int rv2357 = 0;
return rv2357; }
rt_raise(RT_X_INIT);
}
static R12 * r_ARG_ROOT(R17 * p_E) { RT_B_TICK(); 
R17 * l_N_2358; memset(&l_N_2358, 0, sizeof l_N_2358);
l_N_2358 = p_E;
for (;;) {
if ((l_N_2358 == NULL)) goto L_end2359;
{
if (((((*(R17 *)rt_nil_check(l_N_2358))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_N_2358))).f_KIND == g_N_APPLY)))
{
{
R12 * l_Y_2360; memset(&l_Y_2360, 0, sizeof l_Y_2360);
l_Y_2360 = r_LOOKUP(((*(R17 *)rt_nil_check(l_N_2358))).f_NAME);
if ((l_Y_2360 == NULL))
{
{ R12 * rv2361 = NULL;
return rv2361; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2360))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2362 = NULL;
return rv2362; }
}
{ R12 * rv2363 = l_Y_2360;
return rv2363; }
}
}
else if (((((((*(R17 *)rt_nil_check(l_N_2358))).f_KIND == g_N_INDEX) || (((*(R17 *)rt_nil_check(l_N_2358))).f_KIND == g_N_FIELD)) || (((*(R17 *)rt_nil_check(l_N_2358))).f_KIND == g_N_SUBSTR)) || (((*(R17 *)rt_nil_check(l_N_2358))).f_KIND == g_N_PAREN)))
{
l_N_2358 = ((*(R17 *)rt_nil_check(l_N_2358))).f_A;
}
else
{
{ R12 * rv2364 = NULL;
return rv2364; }
}
}
RT_B_TICK();
} L_end2359: ;
{ R12 * rv2365 = NULL;
return rv2365; }
rt_raise(RT_X_INIT);
}
static R17 * r_PATH_OF(R17 * p_E) { RT_B_TICK(); 
R17 * l_N_2366; memset(&l_N_2366, 0, sizeof l_N_2366);
l_N_2366 = p_E;
R17 * l_P_2367; memset(&l_P_2367, 0, sizeof l_P_2367);
l_P_2367 = NULL;
for (;;) {
if ((l_N_2366 == NULL)) goto L_end2368;
{
if ((((*(R17 *)rt_nil_check(l_N_2366))).f_KIND == g_N_FIELD))
{
l_P_2367 = r_NAME_REF(((*(R17 *)rt_nil_check(l_N_2366))).f_NAME, ((rt_int)0LL), NULL, l_P_2367);
l_N_2366 = ((*(R17 *)rt_nil_check(l_N_2366))).f_A;
}
else if (((((*(R17 *)rt_nil_check(l_N_2366))).f_KIND == g_N_INDEX) || (((*(R17 *)rt_nil_check(l_N_2366))).f_KIND == g_N_SUBSTR)))
{
l_P_2367 = r_NAME_REF(r_MKN(rt_str("*", 1)), ((rt_int)0LL), NULL, l_P_2367);
l_N_2366 = ((*(R17 *)rt_nil_check(l_N_2366))).f_A;
}
else if ((((*(R17 *)rt_nil_check(l_N_2366))).f_KIND == g_N_APPLY))
{
l_P_2367 = r_NAME_REF(r_MKN(rt_str("*", 1)), ((rt_int)0LL), NULL, l_P_2367);
{ R17 * rv2369 = l_P_2367;
return rv2369; }
}
else if ((((*(R17 *)rt_nil_check(l_N_2366))).f_KIND == g_N_PAREN))
{
l_N_2366 = ((*(R17 *)rt_nil_check(l_N_2366))).f_A;
}
else
{
{ R17 * rv2370 = l_P_2367;
return rv2370; }
}
}
RT_B_TICK();
} L_end2368: ;
{ R17 * rv2371 = l_P_2367;
return rv2371; }
rt_raise(RT_X_INIT);
}
static rt_int r_DISJOINT_PATHS(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_P_2372; memset(&l_P_2372, 0, sizeof l_P_2372);
l_P_2372 = p_A;
R17 * l_Q_2373; memset(&l_Q_2373, 0, sizeof l_Q_2373);
l_Q_2373 = p_B;
for (;;) {
if (((l_P_2372 == NULL) || (l_Q_2373 == NULL))) goto L_end2374;
{
if ((((!r_TEQS(((*(R17 *)rt_nil_check(l_P_2372))).f_NAME, rt_str("*", 1))) && (!r_TEQS(((*(R17 *)rt_nil_check(l_Q_2373))).f_NAME, rt_str("*", 1)))) && (!r_TEQ(((*(R17 *)rt_nil_check(l_P_2372))).f_NAME, ((*(R17 *)rt_nil_check(l_Q_2373))).f_NAME))))
{
{ rt_int rv2375 = 1;
return rv2375; }
}
l_P_2372 = ((*(R17 *)rt_nil_check(l_P_2372))).f_NEXT;
l_Q_2373 = ((*(R17 *)rt_nil_check(l_Q_2373))).f_NEXT;
}
RT_B_TICK();
} L_end2374: ;
{ rt_int rv2376 = 0;
return rv2376; }
rt_raise(RT_X_INIT);
}
static void r_EXPLICIT_GENERIC_ARGS(R12 * p_Y, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_USED_2377; memset(&l_USED_2377, 0, sizeof l_USED_2377);
l_USED_2377 = NULL;
R28 * l_P_2378; memset(&l_P_2378, 0, sizeof l_P_2378);
l_P_2378 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
R27 * l_A_2379; memset(&l_A_2379, 0, sizeof l_A_2379);
l_A_2379 = p_ARGS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_DECL == NULL))
{
return;
}
if (((!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_B == NULL)))
{
return;
}
r_NAMES_IN(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_B, &l_USED_2377);
for (;;) {
if (((l_P_2378 == NULL) || (l_A_2379 == NULL))) goto L_end2380;
{
if ((((((*(R28 *)rt_nil_check(l_P_2378))).f_MODE == g_M_IN) && r_IN_IDENTS(l_USED_2377, ((*(R28 *)rt_nil_check(l_P_2378))).f_NAME)) && (!(((*(R27 *)rt_nil_check(l_A_2379))).f_E == NULL))))
{
if ((!r_CONSTANT_EXPR(((*(R27 *)rt_nil_check(l_A_2379))).f_E)))
{
r_FAILT(p_LINE, rt_str("the argument of an explicit generic parameter invokes only pure functions (5): ", 79), ((*(R28 *)rt_nil_check(l_P_2378))).f_NAME);
}
}
l_P_2378 = ((*(R28 *)rt_nil_check(l_P_2378))).f_NEXT;
l_A_2379 = ((*(R27 *)rt_nil_check(l_A_2379))).f_NEXT;
}
RT_B_TICK();
} L_end2380: ;
}
static void r_NAMES_IN(R17 * p_L, R17 * *p_HEAD) { RT_B_TICK(); 
R17 * l_N_2381; memset(&l_N_2381, 0, sizeof l_N_2381);
l_N_2381 = p_L;
for (;;) {
if ((l_N_2381 == NULL)) goto L_end2382;
{
if (((((*(R17 *)rt_nil_check(l_N_2381))).f_KIND == g_N_NAME) || (((((*(R17 *)rt_nil_check(l_N_2381))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(l_N_2381))).f_A == NULL)))))
{
(*p_HEAD) = r_NAME_REF(((*(R17 *)rt_nil_check(l_N_2381))).f_NAME, ((rt_int)0LL), NULL, (*p_HEAD));
}
r_NAMES_IN(((*(R17 *)rt_nil_check(l_N_2381))).f_A, &(*p_HEAD));
r_NAMES_IN(((*(R17 *)rt_nil_check(l_N_2381))).f_B, &(*p_HEAD));
r_NAMES_IN(((*(R17 *)rt_nil_check(l_N_2381))).f_C, &(*p_HEAD));
l_N_2381 = ((*(R17 *)rt_nil_check(l_N_2381))).f_NEXT;
}
RT_B_TICK();
} L_end2382: ;
}
static rt_int r_CONSTANT_EXPR(R17 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv2383 = 1;
return rv2383; }
}
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY)))
{
{
R12 * l_Y_2384; memset(&l_Y_2384, 0, sizeof l_Y_2384);
l_Y_2384 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2384 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2384))).f_KIND == g_Y_ROUTINE))
{
if ((!(((*(R12 *)rt_nil_check(r_ORIGINAL(l_Y_2384)))).f_USES == NULL)))
{
{ rt_int rv2385 = 0;
return rv2385; }
}
}
}
}
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD))
{
{ rt_int rv2386 = r_CONSTANT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A);
return rv2386; }
}
{ rt_int rv2387 = ((r_CONSTANT_LIST(((*(R17 *)rt_nil_check(p_E))).f_A) && r_CONSTANT_LIST(((*(R17 *)rt_nil_check(p_E))).f_B)) && r_CONSTANT_LIST(((*(R17 *)rt_nil_check(p_E))).f_C));
return rv2387; }
rt_raise(RT_X_INIT);
}
static rt_int r_CONSTANT_LIST(R17 * p_L) { RT_B_TICK(); 
R17 * l_N_2388; memset(&l_N_2388, 0, sizeof l_N_2388);
l_N_2388 = p_L;
for (;;) {
if ((l_N_2388 == NULL)) goto L_end2389;
{
if ((!r_CONSTANT_EXPR(l_N_2388)))
{
{ rt_int rv2390 = 0;
return rv2390; }
}
l_N_2388 = ((*(R17 *)rt_nil_check(l_N_2388))).f_NEXT;
}
RT_B_TICK();
} L_end2389: ;
{ rt_int rv2391 = 1;
return rv2391; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKED_ELEMENT(R17 * p_E) { RT_B_TICK(); 
R22 * l_AT_2392; memset(&l_AT_2392, 0, sizeof l_AT_2392);
l_AT_2392 = NULL;
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
{
R12 * l_Y_2393; memset(&l_Y_2393, 0, sizeof l_Y_2393);
l_Y_2393 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_2393 == NULL))
{
{ rt_int rv2394 = 0;
return rv2394; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2393))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(l_Y_2393))).f_T == NULL)))
{
{ rt_int rv2395 = 0;
return rv2395; }
}
l_AT_2392 = r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2393))).f_T);
}
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_INDEX))
{
{
R14 l_SAVED_CODE_2396; memset(&l_SAVED_CODE_2396, 0, sizeof l_SAVED_CODE_2396);
S_R14(&l_SAVED_CODE_2396, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
l_AT_2392 = r_REAL_TYPE((r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL)).f_T);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2396, 0);
}
}
else
{
{ rt_int rv2397 = 0;
return rv2397; }
}
if ((!(((*(R22 *)rt_nil_check(l_AT_2392))).f_KIND == g_T_ARR)))
{
{ rt_int rv2398 = 0;
return rv2398; }
}
{ rt_int rv2399 = (!(r_PACKING_OF(l_AT_2392) == ((rt_int)2LL)));
return rv2399; }
rt_raise(RT_X_INIT);
}
static void r_NO_ALIASING(R12 * p_Y, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_A_2400; memset(&l_A_2400, 0, sizeof l_A_2400);
l_A_2400 = p_ARGS;
for (;;) {
if ((l_A_2400 == NULL)) goto L_end2401;
{
if (((((*(R27 *)rt_nil_check(l_A_2400))).f_MODE == g_M_INOUT) && (!(((*(R27 *)rt_nil_check(l_A_2400))).f_E == NULL))))
{
if (r_PACKED_ELEMENT(((*(R27 *)rt_nil_check(l_A_2400))).f_E))
{
r_FAIL(p_LINE, rt_str("only elements of ARRAY_STD arrays are inout arguments (3.8.3)", 61));
}
}
l_A_2400 = ((*(R27 *)rt_nil_check(l_A_2400))).f_NEXT;
}
RT_B_TICK();
} L_end2401: ;
l_A_2400 = p_ARGS;
for (;;) {
if ((l_A_2400 == NULL)) goto L_end2402;
{
if (((((((*(R27 *)rt_nil_check(l_A_2400))).f_MODE == g_M_INOUT) || (((*(R27 *)rt_nil_check(l_A_2400))).f_MODE == g_M_OUT))) && (!(((*(R27 *)rt_nil_check(l_A_2400))).f_E == NULL))))
{
{
R12 * l_V_2403; memset(&l_V_2403, 0, sizeof l_V_2403);
l_V_2403 = r_ARG_ROOT(((*(R27 *)rt_nil_check(l_A_2400))).f_E);
R27 * l_B_2404; memset(&l_B_2404, 0, sizeof l_B_2404);
l_B_2404 = ((*(R27 *)rt_nil_check(l_A_2400))).f_NEXT;
if ((!(l_V_2403 == NULL)))
{
for (;;) {
if ((l_B_2404 == NULL)) goto L_end2405;
{
if (((((*(R27 *)rt_nil_check(l_B_2404))).f_MODE == ((*(R27 *)rt_nil_check(l_A_2400))).f_MODE) && (!(((*(R27 *)rt_nil_check(l_B_2404))).f_E == NULL))))
{
if (((r_ARG_ROOT(((*(R27 *)rt_nil_check(l_B_2404))).f_E) == l_V_2403) && (!r_DISJOINT_PATHS(r_PATH_OF(((*(R27 *)rt_nil_check(l_A_2400))).f_E), r_PATH_OF(((*(R27 *)rt_nil_check(l_B_2404))).f_E)))))
{
r_FAILT(p_LINE, rt_str("a variable is more than one inout or output argument (4.3.3): ", 62), ((*(R12 *)rt_nil_check(l_V_2403))).f_NAME);
}
}
l_B_2404 = ((*(R27 *)rt_nil_check(l_B_2404))).f_NEXT;
}
RT_B_TICK();
} L_end2405: ;
if (((((*(R27 *)rt_nil_check(l_A_2400))).f_MODE == g_M_INOUT) && (!(((*(R12 *)rt_nil_check(p_Y))).f_USES == NULL))))
{
{
R17 * l_U_2406; memset(&l_U_2406, 0, sizeof l_U_2406);
l_U_2406 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_2406 == NULL)) goto L_end2407;
{
if ((r_TEQ(((*(R17 *)rt_nil_check(l_U_2406))).f_NAME, ((*(R12 *)rt_nil_check(l_V_2403))).f_NAME) && (((*(R17 *)rt_nil_check(l_U_2406))).f_IV == ((*(R12 *)rt_nil_check(l_V_2403))).f_OWNER)))
{
r_FAILT(p_LINE, rt_str("an inout argument the procedure also imports (4.3.3): ", 54), ((*(R12 *)rt_nil_check(l_V_2403))).f_NAME);
}
l_U_2406 = ((*(R17 *)rt_nil_check(l_U_2406))).f_NEXT;
}
RT_B_TICK();
} L_end2407: ;
}
}
}
}
}
l_A_2400 = ((*(R27 *)rt_nil_check(l_A_2400))).f_NEXT;
}
RT_B_TICK();
} L_end2402: ;
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
R21 * l_BS_2408; memset(&l_BS_2408, 0, sizeof l_BS_2408);
l_BS_2408 = r_NEW_BINDS();
R28 * l_P_2409; memset(&l_P_2409, 0, sizeof l_P_2409);
l_P_2409 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2410; memset(&l_A_2410, 0, sizeof l_A_2410);
l_A_2410 = p_ARGS;
rt_int l_SOME_M_2411; memset(&l_SOME_M_2411, 0, sizeof l_SOME_M_2411);
l_SOME_M_2411 = 0;
rt_int l_N_2412; memset(&l_N_2412, 0, sizeof l_N_2412);
l_N_2412 = ((rt_int)0LL);
for (;;) {
if (((l_P_2409 == NULL) || (l_A_2410 == NULL))) goto L_end2413;
{
if ((((((*(R28 *)rt_nil_check(l_P_2409))).f_MODE == g_M_IN) && (!(((*(R27 *)rt_nil_check(l_A_2410))).f_E == NULL))) && (!(((*(R28 *)rt_nil_check(l_P_2409))).f_T == NULL))))
{
{
R22 * l_RT_2414; memset(&l_RT_2414, 0, sizeof l_RT_2414);
l_RT_2414 = r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2409))).f_T);
R23 l_M_2415; memset(&l_M_2415, 0, sizeof l_M_2415);
S_R23(&l_M_2415, r_NO_MVAL(), 0);
if (((((*(R22 *)rt_nil_check(l_RT_2414))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2414))).f_SCALE == ((rt_int)0LL))))
{
if (r_MANIFEST_INT(((*(R27 *)rt_nil_check(l_A_2410))).f_E))
{
S_R23(&l_M_2415, r_MANIFEST(((*(R27 *)rt_nil_check(l_A_2410))).f_E), 0);
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_2414))).f_KIND == g_T_BOOL))
{
S_R23(&l_M_2415, r_MANIFEST(((*(R27 *)rt_nil_check(l_A_2410))).f_E), 0);
}
else if ((((*(R22 *)rt_nil_check(l_RT_2414))).f_KIND == g_T_ENUM))
{
S_R23(&l_M_2415, r_ENUM_MANIFEST(((*(R27 *)rt_nil_check(l_A_2410))).f_E, l_RT_2414), 0);
}
if ((l_M_2415).f_OK)
{
r_ADD_BIND(r_QMKN(rt_str("=", 1), ((*(R28 *)rt_nil_check(l_P_2409))).f_NAME), NULL, l_M_2415, NULL, l_BS_2408);
l_SOME_M_2411 = 1;
}
}
}
l_P_2409 = ((*(R28 *)rt_nil_check(l_P_2409))).f_NEXT;
l_A_2410 = ((*(R27 *)rt_nil_check(l_A_2410))).f_NEXT;
}
RT_B_TICK();
} L_end2413: ;
if ((!l_SOME_M_2411))
{
r_NEED_BODY(p_G);
{ R12 * rv2416 = p_G;
return rv2416; }
}
{
R12 * l_I_2417; memset(&l_I_2417, 0, sizeof l_I_2417);
l_I_2417 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2417 == NULL)) goto L_end2418;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2417))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_BS_2408))).f_NEXT))
{
{ R12 * rv2419 = l_I_2417;
return rv2419; }
}
l_N_2412 = rt_add(l_N_2412, ((rt_int)1LL));
l_I_2417 = ((*(R12 *)rt_nil_check(l_I_2417))).f_INSTANCES;
}
RT_B_TICK();
} L_end2418: ;
}
if ((l_N_2412 > ((rt_int)256LL)))
{
r_FAILT(p_LINE, rt_str("the INLINE expansions of the routine do not end (4.3.1): ", 57), ((*(R12 *)rt_nil_check(p_G))).f_NAME);
}
{ R12 * rv2420 = r_NEW_INSTANCE(p_G, ((*(R21 *)rt_nil_check(l_BS_2408))).f_NEXT, p_ARGS);
return rv2420; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_VISIBLE_2421; memset(&l_VISIBLE_2421, 0, sizeof l_VISIBLE_2421);
l_VISIBLE_2421 = r_SEG_VISIBLE(p_Y0, p_LINE);
R12 * l_Y_2422; memset(&l_Y_2422, 0, sizeof l_Y_2422);
l_Y_2422 = r_ORIGINAL(p_Y0);
R28 * l_P_2423; memset(&l_P_2423, 0, sizeof l_P_2423);
R27 * l_A_2424; memset(&l_A_2424, 0, sizeof l_A_2424);
l_A_2424 = p_ARGS;
R9 l_C_2425; memset(&l_C_2425, 0, sizeof l_C_2425);
S_R9(&l_C_2425, r_MK(rt_str("", 0)), 0);
R9 l_SEP_2426; memset(&l_SEP_2426, 0, sizeof l_SEP_2426);
S_R9(&l_SEP_2426, r_MK(rt_str("", 0)), 0);
R9 l_PRE_2427; memset(&l_PRE_2427, 0, sizeof l_PRE_2427);
S_R9(&l_PRE_2427, r_MK(rt_str("", 0)), 0);
R9 l_POST_2428; memset(&l_POST_2428, 0, sizeof l_POST_2428);
S_R9(&l_POST_2428, r_MK(rt_str("", 0)), 0);
rt_int l_SHARED_2429; memset(&l_SHARED_2429, 0, sizeof l_SHARED_2429);
l_SHARED_2429 = 0;
R22 * l_PT_2430; memset(&l_PT_2430, 0, sizeof l_PT_2430);
if ((!(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
if (((((*(R12 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R))).f_DECL == ((*(R12 *)rt_nil_check(l_Y_2422))).f_DECL) && (!(((*(R12 *)rt_nil_check(l_Y_2422))).f_DECL == NULL))))
{
if ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2422))).f_DECL))).f_FL == ((rt_int)1LL)))
{
r_FAILT(p_LINE, rt_str("an INLINE routine cannot be recursive (4.3.1): ", 47), ((*(R12 *)rt_nil_check(l_Y_2422))).f_NAME);
}
}
}
if (((*(R12 *)rt_nil_check(l_Y_2422))).f_GENERIC)
{
l_Y_2422 = r_INSTANCE(l_Y_2422, p_ARGS, p_LINE);
}
else if (((!(((*(R12 *)rt_nil_check(l_Y_2422))).f_DECL == NULL)) && (((*(R12 *)rt_nil_check(l_Y_2422))).f_BINDINGS == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2422))).f_DECL))).f_KIND == g_N_ROUTINE) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2422))).f_DECL))).f_FL == ((rt_int)1LL))))
{
l_Y_2422 = r_INLINE_INSTANCE(l_Y_2422, p_ARGS, p_LINE);
}
}
r_CHECK_CALL_IMPORTS(l_Y_2422, p_LINE);
r_NO_ALIASING(l_Y_2422, p_ARGS, p_LINE);
r_EXPLICIT_GENERIC_ARGS(l_Y_2422, p_ARGS, p_LINE);
if ((!(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
if (((((*(R12 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R))).f_DECL == ((*(R12 *)rt_nil_check(l_Y_2422))).f_DECL) && (!(((*(R12 *)rt_nil_check(l_Y_2422))).f_DECL == NULL))))
{
if ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2422))).f_DECL))).f_FL == ((rt_int)1LL)))
{
r_FAILT(p_LINE, rt_str("an INLINE routine cannot be recursive (4.3.1): ", 47), ((*(R12 *)rt_nil_check(l_Y_2422))).f_NAME);
}
{
R17 * l_U_2431; memset(&l_U_2431, 0, sizeof l_U_2431);
l_U_2431 = ((*(R12 *)rt_nil_check(l_Y_2422))).f_USES;
for (;;) {
if ((l_U_2431 == NULL)) goto L_end2432;
{
if ((!(r_LOOKUP(((*(R17 *)rt_nil_check(l_U_2431))).f_NAME) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_LOOKUP(((*(R17 *)rt_nil_check(l_U_2431))).f_NAME)))).f_LEVEL > ((rt_int)0LL)))
{
r_FAILT(p_LINE, rt_str("a recursive routine imports only static data (4.3.1): ", 54), ((*(R17 *)rt_nil_check(l_U_2431))).f_NAME);
}
}
l_U_2431 = ((*(R17 *)rt_nil_check(l_U_2431))).f_NEXT;
}
RT_B_TICK();
} L_end2432: ;
}
}
}
if ((!(r_CUR_GENERIC() == NULL)))
{
{
R27 * l_Q_2433; memset(&l_Q_2433, 0, sizeof l_Q_2433);
l_Q_2433 = p_ARGS;
rt_int l_GEN_ARG_2434; memset(&l_GEN_ARG_2434, 0, sizeof l_GEN_ARG_2434);
l_GEN_ARG_2434 = 0;
for (;;) {
if ((l_Q_2433 == NULL)) goto L_end2435;
{
if (((*(R27 *)rt_nil_check(l_Q_2433))).f_HAVE)
{
if ((!((((*(R27 *)rt_nil_check(l_Q_2433))).f_V).f_T == NULL)))
{
if (((((*(R22 *)rt_nil_check((((*(R27 *)rt_nil_check(l_Q_2433))).f_V).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
l_GEN_ARG_2434 = 1;
}
}
}
l_Q_2433 = ((*(R27 *)rt_nil_check(l_Q_2433))).f_NEXT;
}
RT_B_TICK();
} L_end2435: ;
if (l_GEN_ARG_2434)
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2422))).f_BINDINGS == NULL)))
{
r_REQUIRE_WHERE_SUBSET(l_Y_2422, p_LINE);
}
else
{
r_REQUIRE_WHERE(r_BASE_NAME(l_Y_2422), p_LINE);
}
}
}
}
{
R17 * l_U_2436; memset(&l_U_2436, 0, sizeof l_U_2436);
l_U_2436 = ((*(R12 *)rt_nil_check(l_Y_2422))).f_USES;
for (;;) {
if ((l_U_2436 == NULL)) goto L_end2437;
{
{
R12 * l_H_2438; memset(&l_H_2438, 0, sizeof l_H_2438);
l_H_2438 = r_LOOKUP(((*(R17 *)rt_nil_check(l_U_2436))).f_NAME);
if ((!(l_H_2438 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_H_2438))).f_WITHV == ((rt_int)2LL)) && (((*(R12 *)rt_nil_check(l_H_2438))).f_OWNER == ((*(R17 *)rt_nil_check(l_U_2436))).f_IV)))
{
r_FAIL2(p_LINE, rt_str("the routine ", 12), ((*(R12 *)rt_nil_check(l_Y_2422))).f_NAME, rt_str(" imports ", 9), ((*(R17 *)rt_nil_check(l_U_2436))).f_NAME, rt_str(", which a WITH NAMING hides (4.5.4)", 35));
}
}
}
l_U_2436 = ((*(R17 *)rt_nil_check(l_U_2436))).f_NEXT;
}
RT_B_TICK();
} L_end2437: ;
}
if (((((((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL)) || (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL)))) && (!(((*(R12 *)rt_nil_check(l_Y_2422))).f_USES == NULL))))
{
r_FAILT(p_LINE, rt_str("a record-spec is a closed scope: no function importing a variable (3.9.1): ", 75), ((*(R12 *)rt_nil_check(l_Y_2422))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_2422))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_C_2425, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_2422))).f_LEVEL), 0);
S_R9(&l_SEP_2426, r_MK(rt_str(", ", 2)), 0);
}
{
R27 * l_Q_2439; memset(&l_Q_2439, 0, sizeof l_Q_2439);
l_Q_2439 = p_ARGS;
for (;;) {
if ((l_Q_2439 == NULL)) goto L_end2440;
{
if ((!(((*(R27 *)rt_nil_check(l_Q_2439))).f_MODE == g_M_IN)))
{
l_SHARED_2429 = 1;
}
l_Q_2439 = ((*(R27 *)rt_nil_check(l_Q_2439))).f_NEXT;
}
RT_B_TICK();
} L_end2440: ;
if ((!(((*(R12 *)rt_nil_check(l_Y_2422))).f_USES == NULL)))
{
l_SHARED_2429 = 1;
}
}
l_P_2423 = ((*(R12 *)rt_nil_check(l_Y_2422))).f_PARAMS;
for (;;) {
if ((l_P_2423 == NULL)) goto L_end2441;
{
if ((l_A_2424 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
l_PT_2430 = r_FORMAL_VIEW(l_Y_2422, l_P_2423);
if ((l_PT_2430 == NULL))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2423))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2430)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_2442; memset(&l_V_2442, 0, sizeof l_V_2442);
R9 l_CV_2443; memset(&l_CV_2443, 0, sizeof l_CV_2443);
if ((((*(R27 *)rt_nil_check(l_A_2424))).f_HAVE && (!r_WANT_SENSITIVE(l_A_2424))))
{
S_R26(&l_V_2442, ((*(R27 *)rt_nil_check(l_A_2424))).f_V, 0);
}
else
{
S_R26(&l_V_2442, r_EXPR(((*(R27 *)rt_nil_check(l_A_2424))).f_E, l_PT_2430), 0);
}
S_R9(&l_CV_2443, r_CONVERT(l_V_2442, l_PT_2430, p_LINE, r_NO_TEXT()), 0);
if (((l_SHARED_2429 && (l_V_2442).f_LVAL) && r_IS_STRUCTURED(l_PT_2430)))
{
S_R9(&l_CV_2443, r_COPY_OF(l_PT_2430, l_CV_2443), 0);
}
S_R9(&l_C_2425, r_FMT3(rt_str("@@@", 3), l_C_2425, l_SEP_2426, l_CV_2443), 0);
S_R9(&l_SEP_2426, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_2444; memset(&l_V_2444, 0, sizeof l_V_2444);
if (((*(R27 *)rt_nil_check(l_A_2424))).f_HAVE)
{
S_R26(&l_V_2444, ((*(R27 *)rt_nil_check(l_A_2424))).f_V, 0);
}
else
{
S_R26(&l_V_2444, r_EXPR(((*(R27 *)rt_nil_check(l_A_2424))).f_E, l_PT_2430), 0);
}
if (((!(((*(R27 *)rt_nil_check(l_A_2424))).f_E == NULL)) && (!(l_V_2444).f_LVAL)))
{
if ((((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2424))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2424))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_2444, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_2444).f_C), (l_V_2444).f_T), 0);
(l_V_2444).f_LVAL = 1;
}
}
if ((!(l_V_2444).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(l_PT_2430, (l_V_2444).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(l_PT_2430));
}
if (((((*(R28 *)rt_nil_check(l_P_2423))).f_MODE == g_M_INOUT) && (!((r_SAME_TYPE(l_PT_2430, (l_V_2444).f_T) && r_SAME_RANGE(l_PT_2430, (l_V_2444).f_T))))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
if (((((*(R28 *)rt_nil_check(l_P_2423))).f_MODE == g_M_OUT) && (!((r_SAME_TYPE(l_PT_2430, (l_V_2444).f_T) && r_SAME_RANGE(l_PT_2430, (l_V_2444).f_T))))))
{
{
R9 l_TMP_2445; memset(&l_TMP_2445, 0, sizeof l_TMP_2445);
S_R9(&l_TMP_2445, r_NEW_NAME(rt_str("oa", 2)), 0);
R9 l_AP_2446; memset(&l_AP_2446, 0, sizeof l_AP_2446);
S_R9(&l_AP_2446, r_NEW_NAME(rt_str("op", 2)), 0);
S_R9(&l_PRE_2427, r_FMT4(rt_str("@ @ *@ = &@;", 12), l_PRE_2427, r_CTYPE((l_V_2444).f_T), l_AP_2446, (l_V_2444).f_C), 0);
S_R9(&l_PRE_2427, r_FMT4(rt_str("@ @ @ = @;", 10), l_PRE_2427, r_CTYPE(l_PT_2430), l_TMP_2445, r_COPY_OF((l_V_2444).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2446))), 0);
S_R9(&l_POST_2428, r_FMT2(rt_str("@ @", 3), l_POST_2428, r_STORE_CODE((l_V_2444).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2446), r_MKET(l_TMP_2445, l_PT_2430), p_LINE, r_NO_TEXT())), 0);
S_R9(&l_C_2425, r_FMT3(rt_str("@@&@", 4), l_C_2425, l_SEP_2426, l_TMP_2445), 0);
}
}
else
{
S_R9(&l_C_2425, r_FMT3(rt_str("@@&@", 4), l_C_2425, l_SEP_2426, (l_V_2444).f_C), 0);
}
S_R9(&l_SEP_2426, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_2424 = ((*(R27 *)rt_nil_check(l_A_2424))).f_NEXT;
l_P_2423 = ((*(R28 *)rt_nil_check(l_P_2423))).f_NEXT;
}
RT_B_TICK();
} L_end2441: ;
if ((!(l_A_2424 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
if (((l_PRE_2427).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2447 = r_MKET(r_FMT4(rt_str("({ @ @(@); @ })", 15), l_PRE_2427, ((*(R12 *)rt_nil_check(l_Y_2422))).f_ACCESS, l_C_2425, l_POST_2428), r_RESULT_VIEW(l_Y_2422));
return rv2447; }
}
{ R26 rv2448 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_2422))).f_ACCESS, l_C_2425), r_RESULT_VIEW(l_Y_2422));
return rv2448; }
rt_raise(RT_X_INIT);
}
static R22 * r_FORMAL_VIEW(R12 * p_R, R28 * p_P) { RT_B_TICK(); 
if (((((*(R28 *)rt_nil_check(p_P))).f_T == NULL) || (((*(R28 *)rt_nil_check(p_P))).f_TS == NULL)))
{
{ R22 * rv2449 = ((*(R28 *)rt_nil_check(p_P))).f_T;
return rv2449; }
}
{ R22 * rv2450 = r_OUTSIDE_VIEW(p_R, ((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R28 *)rt_nil_check(p_P))).f_T);
return rv2450; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESULT_VIEW(R12 * p_R) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_R))).f_DECL == NULL) || (((*(R12 *)rt_nil_check(p_R))).f_RESULT == NULL)))
{
{ R22 * rv2451 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2451; }
}
if (((!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B == NULL)))
{
{ R22 * rv2452 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2452; }
}
{ R22 * rv2453 = r_OUTSIDE_VIEW(p_R, ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2453; }
rt_raise(RT_X_INIT);
}
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R17 * p_TS, R22 * p_T) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_R))).f_MODL == NULL) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)) || (!(((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))))
{
{ R22 * rv2454 = p_T;
return rv2454; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_R))).f_MODL))
{
{ R22 * rv2455 = p_T;
return rv2455; }
}
{
R12 * l_M_2456; memset(&l_M_2456, 0, sizeof l_M_2456);
l_M_2456 = ((*(R12 *)rt_nil_check(p_R))).f_MODL;
for (;;) {
if ((l_M_2456 == NULL)) goto L_end2457;
{
{
R12 * l_Y_2458; memset(&l_Y_2458, 0, sizeof l_Y_2458);
l_Y_2458 = r_MEMBER_TYPE(l_M_2456, ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_2458 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_2458))).f_EXPORTED)
{
{ R22 * rv2459 = r_ABSTRACT_VIEW(l_Y_2458, p_T);
return rv2459; }
}
{ R22 * rv2460 = p_T;
return rv2460; }
}
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(l_M_2456))).f_MODL))
{
goto L_end2457;
}
l_M_2456 = ((*(R12 *)rt_nil_check(l_M_2456))).f_MODL;
}
RT_B_TICK();
} L_end2457: ;
}
{ R22 * rv2461 = p_T;
return rv2461; }
rt_raise(RT_X_INIT);
}
static R12 * r_MEMBER_TYPE(R12 * p_M, R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2462; memset(&l_Y_2462, 0, sizeof l_Y_2462);
l_Y_2462 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
if (((*(R12 *)rt_nil_check(p_M))).f_BUSY)
{
{
R12 * l_Z_2463; memset(&l_Z_2463, 0, sizeof l_Z_2463);
l_Z_2463 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Z_2463 == NULL)) goto L_end2464;
{
if ((((((*(R12 *)rt_nil_check(l_Z_2463))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Z_2463))).f_MODL == p_M)) && (((*(R12 *)rt_nil_check(l_Z_2463))).f_ORIG == NULL)))
{
{ R12 * rv2465 = l_Z_2463;
return rv2465; }
}
l_Z_2463 = r_LOOKUP_NEXT(l_Z_2463);
}
RT_B_TICK();
} L_end2464: ;
}
{ R12 * rv2466 = NULL;
return rv2466; }
}
for (;;) {
if ((l_Y_2462 == NULL)) goto L_end2467;
{
if (((((*(R12 *)rt_nil_check(l_Y_2462))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_2462))).f_NAME, p_NAME)))
{
{ R12 * rv2468 = l_Y_2462;
return rv2468; }
}
l_Y_2462 = ((*(R12 *)rt_nil_check(l_Y_2462))).f_SNEXT;
}
RT_B_TICK();
} L_end2467: ;
{ R12 * rv2469 = NULL;
return rv2469; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_2470; memset(&l_K_2470, 0, sizeof l_K_2470);
l_K_2470 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND;
{ rt_int rv2471 = ((((l_K_2470 == g_T_STR) || (l_K_2470 == g_T_BITS)) || (l_K_2470 == g_T_ARR)) || (l_K_2470 == g_T_REC));
return rv2471; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2472; memset(&l_RA_2472, 0, sizeof l_RA_2472);
l_RA_2472 = r_REAL_TYPE(p_A);
R22 * l_RB_2473; memset(&l_RB_2473, 0, sizeof l_RB_2473);
l_RB_2473 = r_REAL_TYPE(p_B);
if ((!r_IS_NUMERIC_OR_ENUM(l_RA_2472)))
{
{ rt_int rv2474 = 1;
return rv2474; }
}
if ((((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2472))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2472))).f_HI_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2473))).f_LO_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2473))).f_HI_C)))
{
{ rt_int rv2475 = 1;
return rv2475; }
}
if ((((((*(R22 *)rt_nil_check(l_RA_2472))).f_LO_C).f_LEN == ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_RB_2473))).f_LO_C).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2476 = ((((*(R22 *)rt_nil_check(l_RA_2472))).f_LO_C).f_LEN == (((*(R22 *)rt_nil_check(l_RB_2473))).f_LO_C).f_LEN);
return rv2476; }
}
if (((((((*(R22 *)rt_nil_check(l_RA_2472))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_RB_2473))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_RA_2472))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(l_RB_2473))).f_MHI).f_OK))
{
{ rt_int rv2477 = (((((*(R22 *)rt_nil_check(l_RA_2472))).f_MLO).f_V == (((*(R22 *)rt_nil_check(l_RB_2473))).f_MLO).f_V) && ((((*(R22 *)rt_nil_check(l_RA_2472))).f_MHI).f_V == (((*(R22 *)rt_nil_check(l_RB_2473))).f_MHI).f_V));
return rv2477; }
}
{ rt_int rv2478 = (r_TEQ(((*(R22 *)rt_nil_check(l_RA_2472))).f_LO_C, ((*(R22 *)rt_nil_check(l_RB_2473))).f_LO_C) && r_TEQ(((*(R22 *)rt_nil_check(l_RA_2472))).f_HI_C, ((*(R22 *)rt_nil_check(l_RB_2473))).f_HI_C));
return rv2478; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R17 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2479 = 0;
return rv2479; }
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv2480 = 1;
return rv2480; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2481 = 1;
return rv2481; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2482 = r_STATIC_GENERIC(((*(R17 *)rt_nil_check(p_TS))).f_C);
return rv2482; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_N_REP) && r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_A)))
{
{ rt_int rv2483 = 1;
return rv2483; }
}
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv2484 = r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(p_TS))).f_A);
return rv2484; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv2485 = r_STATIC_GENERIC(((*(R17 *)rt_nil_check(p_TS))).f_A);
return rv2485; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv2486 = ((((*(R17 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv2486; }
}
else if (((r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv2487 = 0;
return rv2487; }
}
{
R12 * l_Y_2488; memset(&l_Y_2488, 0, sizeof l_Y_2488);
l_Y_2488 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
R17 * l_A_2489; memset(&l_A_2489, 0, sizeof l_A_2489);
l_A_2489 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R17 * l_F_2490; memset(&l_F_2490, 0, sizeof l_F_2490);
if ((l_Y_2488 == NULL))
{
{ rt_int rv2491 = 0;
return rv2491; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2488))).f_KIND == g_Y_GEN))
{
{ rt_int rv2492 = 1;
return rv2492; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2488))).f_DECL == NULL))
{
{ rt_int rv2493 = 0;
return rv2493; }
}
l_F_2490 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2488))).f_DECL))).f_A;
for (;;) {
if ((l_F_2490 == NULL)) goto L_end2494;
{
{
R17 * l_N_2495; memset(&l_N_2495, 0, sizeof l_N_2495);
l_N_2495 = ((*(R17 *)rt_nil_check(l_F_2490))).f_A;
for (;;) {
if ((l_N_2495 == NULL)) goto L_end2496;
{
if ((l_A_2489 == NULL))
{
{ rt_int rv2497 = 0;
return rv2497; }
}
if (((((*(R17 *)rt_nil_check(l_F_2490))).f_B == NULL) && ((((((*(R17 *)rt_nil_check(l_A_2489))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_A_2489))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_2489)))))
{
{ rt_int rv2498 = 1;
return rv2498; }
}
l_A_2489 = ((*(R17 *)rt_nil_check(l_A_2489))).f_NEXT;
l_N_2495 = ((*(R17 *)rt_nil_check(l_N_2495))).f_NEXT;
}
RT_B_TICK();
} L_end2496: ;
}
l_F_2490 = ((*(R17 *)rt_nil_check(l_F_2490))).f_NEXT;
}
RT_B_TICK();
} L_end2494: ;
}
}
{ rt_int rv2499 = 0;
return rv2499; }
rt_raise(RT_X_INIT);
}
static R17 * r_OWN_NAMES(R17 * p_R) { RT_B_TICK(); 
R17 * l_HEAD_2500; memset(&l_HEAD_2500, 0, sizeof l_HEAD_2500);
l_HEAD_2500 = NULL;
r_GEN_NAMES(((*(R17 *)rt_nil_check(p_R))).f_A, &l_HEAD_2500);
{ R17 * rv2501 = l_HEAD_2500;
return rv2501; }
rt_raise(RT_X_INIT);
}
static rt_int r_DECLARES_DERIVED(R17 * p_L) { RT_B_TICK(); 
R17 * l_N_2502; memset(&l_N_2502, 0, sizeof l_N_2502);
l_N_2502 = p_L;
for (;;) {
if ((l_N_2502 == NULL)) goto L_end2503;
{
if (((((*(R17 *)rt_nil_check(l_N_2502))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(l_N_2502))).f_NAME).f_LEN > ((rt_int)0LL))))
{
{ rt_int rv2504 = 1;
return rv2504; }
}
if ((((*(R17 *)rt_nil_check(l_N_2502))).f_KIND == g_N_PARAM))
{
if (r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2502))).f_B))
{
{ rt_int rv2505 = 1;
return rv2505; }
}
}
else if ((!(((*(R17 *)rt_nil_check(l_N_2502))).f_KIND == g_TS_GEN)))
{
if ((r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2502))).f_A) || r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2502))).f_C)))
{
{ rt_int rv2506 = 1;
return rv2506; }
}
if ((!(((*(R17 *)rt_nil_check(l_N_2502))).f_B == NULL)))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_2502))).f_B))).f_KIND == g_N_RANGE))
{
if ((r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_2502))).f_B))).f_A) || r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_2502))).f_B))).f_B)))
{
{ rt_int rv2507 = 1;
return rv2507; }
}
}
else if (r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2502))).f_B))
{
{ rt_int rv2508 = 1;
return rv2508; }
}
}
}
l_N_2502 = ((*(R17 *)rt_nil_check(l_N_2502))).f_NEXT;
}
RT_B_TICK();
} L_end2503: ;
{ rt_int rv2509 = 0;
return rv2509; }
rt_raise(RT_X_INIT);
}
static R22 * r_MARK_GENP(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R22 * l_C_2510; memset(&l_C_2510, 0, sizeof l_C_2510);
l_C_2510 = r_COPY_TYP(p_T);
S_R9(&((*(R22 *)rt_nil_check(l_C_2510))).f_GENP, p_NAME, 0);
{ R22 * rv2511 = l_C_2510;
return rv2511; }
rt_raise(RT_X_INIT);
}
static R12 * r_CUR_GENERIC(void) { RT_B_TICK(); 
R19 * l_CS_2512; memset(&l_CS_2512, 0, sizeof l_CS_2512);
l_CS_2512 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
for (;;) {
if ((l_CS_2512 == NULL)) goto L_end2513;
{
if ((!(((*(R19 *)rt_nil_check(l_CS_2512))).f_R == NULL)))
{
if ((!(((*(R12 *)rt_nil_check(((*(R19 *)rt_nil_check(l_CS_2512))).f_R))).f_BINDINGS == NULL)))
{
{ R12 * rv2514 = ((*(R19 *)rt_nil_check(l_CS_2512))).f_R;
return rv2514; }
}
}
l_CS_2512 = ((*(R19 *)rt_nil_check(l_CS_2512))).f_UP;
}
RT_B_TICK();
} L_end2513: ;
{ R12 * rv2515 = NULL;
return rv2515; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_WHERE(R12 * p_G, R9 p_NAME) { RT_B_TICK(); 
R17 * l_N_2516; memset(&l_N_2516, 0, sizeof l_N_2516);
l_N_2516 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
for (;;) {
if ((l_N_2516 == NULL)) goto L_end2517;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_N_2516))).f_A, p_NAME))
{
{ rt_int rv2518 = 1;
return rv2518; }
}
l_N_2516 = ((*(R17 *)rt_nil_check(l_N_2516))).f_NEXT;
}
RT_B_TICK();
} L_end2517: ;
{ rt_int rv2519 = 0;
return rv2519; }
rt_raise(RT_X_INIT);
}
static void r_REQUIRE_WHERE(R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_G_2520; memset(&l_G_2520, 0, sizeof l_G_2520);
l_G_2520 = r_CUR_GENERIC();
if ((l_G_2520 == NULL))
{
return;
}
if ((!r_IN_WHERE(l_G_2520, p_NAME)))
{
r_FAILT(p_LINE, rt_str("invoked with objects of a TYPE parameter, so named in the WHERE clause (5.2): ", 78), p_NAME);
}
}
static void r_REQUIRE_WHERE_SUBSET(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_N_2521; memset(&l_N_2521, 0, sizeof l_N_2521);
l_N_2521 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_D))).f_B;
R12 * l_G_2522; memset(&l_G_2522, 0, sizeof l_G_2522);
l_G_2522 = r_CUR_GENERIC();
if ((l_G_2522 == NULL))
{
return;
}
for (;;) {
if ((l_N_2521 == NULL)) goto L_end2523;
{
{
R17 * l_T_2524; memset(&l_T_2524, 0, sizeof l_T_2524);
l_T_2524 = ((*(R17 *)rt_nil_check(l_N_2521))).f_A;
for (;;) {
if ((l_T_2524 == NULL)) goto L_end2525;
{
if ((!r_IN_WHERE(l_G_2522, ((*(R17 *)rt_nil_check(l_T_2524))).f_NAME)))
{
r_FAILT(p_LINE, rt_str("the WHERE routines of the invoked generic routine are among the caller's (5.2): ", 80), ((*(R17 *)rt_nil_check(l_T_2524))).f_NAME);
}
l_T_2524 = ((*(R17 *)rt_nil_check(l_T_2524))).f_NEXT;
}
RT_B_TICK();
} L_end2525: ;
}
l_N_2521 = ((*(R17 *)rt_nil_check(l_N_2521))).f_NEXT;
}
RT_B_TICK();
} L_end2523: ;
}
static rt_int r_HAS_GEN_ARG(R17 * p_A) { RT_B_TICK(); 
R17 * l_P_2526; memset(&l_P_2526, 0, sizeof l_P_2526);
l_P_2526 = p_A;
for (;;) {
if ((l_P_2526 == NULL)) goto L_end2527;
{
if (((((*(R17 *)rt_nil_check(l_P_2526))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_P_2526))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2528 = 1;
return rv2528; }
}
l_P_2526 = ((*(R17 *)rt_nil_check(l_P_2526))).f_NEXT;
}
RT_B_TICK();
} L_end2527: ;
{ rt_int rv2529 = 0;
return rv2529; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { RT_B_TICK(); 
rt_int l_ENTERED_2530; memset(&l_ENTERED_2530, 0, sizeof l_ENTERED_2530);
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
l_ENTERED_2530 = r_ENTER_MODULE_FOR(p_Y);
{
R12 * l_SAVED_SEG_2531; memset(&l_SAVED_SEG_2531, 0, sizeof l_SAVED_SEG_2531);
l_SAVED_SEG_2531 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(p_Y))).f_HOME;
r_ROUTINE_HEADER1(p_Y);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_2531;
}
if (l_ENTERED_2530)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
}
static void r_ROUTINE_HEADER1(R12 * p_Y) { RT_B_TICK(); 
R17 * l_R_2532; memset(&l_R_2532, 0, sizeof l_R_2532);
l_R_2532 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R17 * l_P_2533; memset(&l_P_2533, 0, sizeof l_P_2533);
R28 * l_TAIL_2534; memset(&l_TAIL_2534, 0, sizeof l_TAIL_2534);
l_TAIL_2534 = NULL;
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_2533 = ((*(R17 *)rt_nil_check(l_R_2532))).f_A;
for (;;) {
if ((l_P_2533 == NULL)) goto L_end2535;
{
if (((((*(R17 *)rt_nil_check(l_P_2533))).f_B == NULL) || r_STATIC_GENERIC(((*(R17 *)rt_nil_check(l_P_2533))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2533 = ((*(R17 *)rt_nil_check(l_P_2533))).f_NEXT;
}
RT_B_TICK();
} L_end2535: ;
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2532))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
{
R17 * l_N_2536; memset(&l_N_2536, 0, sizeof l_N_2536);
l_N_2536 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2532))).f_D))).f_B;
for (;;) {
if ((l_N_2536 == NULL)) goto L_end2537;
{
{
R17 * l_T_2538; memset(&l_T_2538, 0, sizeof l_T_2538);
l_T_2538 = ((*(R17 *)rt_nil_check(l_N_2536))).f_A;
for (;;) {
if ((l_T_2538 == NULL)) goto L_end2539;
{
if ((r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_T_2538))).f_B))).f_A) || r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_T_2538))).f_B))).f_B)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_T_2538))).f_LINE, rt_str("a WHERE template declares no derived generic parameter (5.2): ", 62), ((*(R17 *)rt_nil_check(l_T_2538))).f_NAME);
}
l_T_2538 = ((*(R17 *)rt_nil_check(l_T_2538))).f_NEXT;
}
RT_B_TICK();
} L_end2539: ;
}
l_N_2536 = ((*(R17 *)rt_nil_check(l_N_2536))).f_NEXT;
}
RT_B_TICK();
} L_end2537: ;
}
}
l_P_2533 = ((*(R17 *)rt_nil_check(l_R_2532))).f_A;
for (;;) {
if ((l_P_2533 == NULL)) goto L_end2540;
{
{
R28 * l_PM_2541; memset(&l_PM_2541, 0, sizeof l_PM_2541);
l_PM_2541 = ((R28 *)rt_b_new(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2541)), ({ R28 rc2542; memset(&rc2542, 0, sizeof rc2542);  S_R9(&rc2542.f_NAME, ((*(R17 *)rt_nil_check(l_P_2533))).f_NAME, 0); rc2542.f_MODE = ((*(R17 *)rt_nil_check(l_P_2533))).f_IV; rc2542.f_T = NULL; rc2542.f_TS = ((*(R17 *)rt_nil_check(l_P_2533))).f_B; rc2542.f_NEXT = NULL; rc2542; }), 0);
if (((((*(R17 *)rt_nil_check(l_R_2532))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(l_P_2533))).f_IV == g_M_IN))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2533))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!(((*(R17 *)rt_nil_check(l_P_2533))).f_B == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_2533))).f_B))).f_KIND == g_TS_ROUTINE) && (!(((*(R17 *)rt_nil_check(l_P_2533))).f_IV == g_M_IN))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2533))).f_LINE, rt_str("a routine-spec declares only input parameters (5.1)", 51));
}
if (r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_P_2533))).f_B, NULL, r_OWN_NAMES(l_R_2532)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2533))).f_LINE, rt_str("the attributes in the type of a formal are manifest (4.3.1)", 59));
}
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R28 *)rt_nil_check(l_PM_2541))).f_T = r_RESOLVE(((*(R17 *)rt_nil_check(l_P_2533))).f_B);
}
if ((l_TAIL_2534 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_2541;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2534))).f_NEXT = l_PM_2541;
}
l_TAIL_2534 = l_PM_2541;
}
l_P_2533 = ((*(R17 *)rt_nil_check(l_P_2533))).f_NEXT;
}
RT_B_TICK();
} L_end2540: ;
if ((!(((*(R17 *)rt_nil_check(l_R_2532))).f_B == NULL)))
{
if (r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_R_2532))).f_B, NULL, r_OWN_NAMES(l_R_2532)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_2532))).f_LINE, rt_str("the returns-clause may not refer to a variable (4.3.1)", 54));
}
}
if ((((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC) && r_TEQS(r_BASE_NAME(p_Y), rt_str("STORE_", 6))) && (!(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS == NULL))))
{
{
R28 * l_LAST_2543; memset(&l_LAST_2543, 0, sizeof l_LAST_2543);
l_LAST_2543 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((((*(R28 *)rt_nil_check(l_LAST_2543))).f_NEXT == NULL)) goto L_end2544;
{
l_LAST_2543 = ((*(R28 *)rt_nil_check(l_LAST_2543))).f_NEXT;
}
RT_B_TICK();
} L_end2544: ;
if ((((!(l_LAST_2543 == ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS)) && (!(((*(R28 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS))).f_T == NULL))) && (!(((*(R28 *)rt_nil_check(l_LAST_2543))).f_T == NULL))))
{
if ((!r_SAME_CLASS(((*(R28 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS))).f_T, ((*(R28 *)rt_nil_check(l_LAST_2543))).f_T)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_2532))).f_LINE, rt_str("both arguments of STORE_ belong to the same type class (D.4)", 60));
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
R17 * l_R_2545; memset(&l_R_2545, 0, sizeof l_R_2545);
l_R_2545 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_2546; memset(&l_T_2546, 0, sizeof l_T_2546);
if ((((*(R17 *)rt_nil_check(l_R_2545))).f_B == NULL))
{
{ R22 * rv2547 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv2547; }
}
r_OPEN_SCOPE();
{
R28 * l_P_2548; memset(&l_P_2548, 0, sizeof l_P_2548);
l_P_2548 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2548 == NULL)) goto L_end2549;
{
if ((!(((*(R28 *)rt_nil_check(l_P_2548))).f_T == NULL)))
{
{
R12 * l_V_2550; memset(&l_V_2550, 0, sizeof l_V_2550);
l_V_2550 = r_NEW_SYM(g_Y_CONST, ((*(R28 *)rt_nil_check(l_P_2548))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2550))).f_T = ((*(R28 *)rt_nil_check(l_P_2548))).f_T;
S_R9(&((*(R12 *)rt_nil_check(l_V_2550))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_2548))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_V_2550))).f_INPUT = 1;
r_DEFINE(l_V_2550, ((*(R17 *)rt_nil_check(l_R_2545))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_2548))).f_T, ((*(R12 *)rt_nil_check(l_V_2550))).f_ACCESS, ((*(R17 *)rt_nil_check(l_R_2545))).f_LINE, 0);
}
}
l_P_2548 = ((*(R28 *)rt_nil_check(l_P_2548))).f_NEXT;
}
RT_B_TICK();
} L_end2549: ;
}
l_T_2546 = r_RESOLVE(((*(R17 *)rt_nil_check(l_R_2545))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv2551 = l_T_2546;
return rv2551; }
rt_raise(RT_X_INIT);
}
static R9 r_C_HEADER(R12 * p_Y) { RT_B_TICK(); 
R9 l_PS_2552; memset(&l_PS_2552, 0, sizeof l_PS_2552);
S_R9(&l_PS_2552, r_MK(rt_str("", 0)), 0);
R9 l_SEP_2553; memset(&l_SEP_2553, 0, sizeof l_SEP_2553);
S_R9(&l_SEP_2553, r_MK(rt_str("", 0)), 0);
R28 * l_P_2554; memset(&l_P_2554, 0, sizeof l_P_2554);
l_P_2554 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_PS_2552, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R9(&l_SEP_2553, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_2554 == NULL)) goto L_end2555;
{
if ((((*(R28 *)rt_nil_check(l_P_2554))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_2554))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R28 *)rt_nil_check(l_P_2554))).f_MODE == g_M_IN))
{
S_R9(&l_PS_2552, r_FMT4(rt_str("@@@ p_@", 7), l_PS_2552, l_SEP_2553, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2554))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2554))).f_NAME)), 0);
S_R9(&l_SEP_2553, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R9(&l_PS_2552, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_2552, l_SEP_2553, r_CTYPE(((*(R28 *)rt_nil_check(l_P_2554))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_2554))).f_NAME)), 0);
S_R9(&l_SEP_2553, r_MK(rt_str(", ", 2)), 0);
}
l_P_2554 = ((*(R28 *)rt_nil_check(l_P_2554))).f_NEXT;
}
RT_B_TICK();
} L_end2555: ;
if (((l_PS_2552).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_PS_2552, r_MK(rt_str("void", 4)), 0);
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_LINKAGE == ((rt_int)1LL)))
{
{ R9 rv2556 = r_FMT3(rt_str("@ @(@)", 6), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2552);
return rv2556; }
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_LINKAGE == ((rt_int)2LL)))
{
{ R9 rv2557 = r_FMT3(rt_str("extern @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2552);
return rv2557; }
}
{ R9 rv2558 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2552);
return rv2558; }
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
R25 * l_B_2559; memset(&l_B_2559, 0, sizeof l_B_2559);
l_B_2559 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_2560; memset(&l_I_2560, 0, sizeof l_I_2560);
l_I_2560 = ((rt_int)0LL);
for (;;) {
if ((l_B_2559 == NULL)) goto L_end2561;
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2559))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2559))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_2560)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2559))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_B_2559))).f_LO) || ((((*(R25 *)rt_nil_check(l_B_2559))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2559))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_2560)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_B_2559))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_2560), p_PC, r_NUM(l_I_2560)), ((*(R25 *)rt_nil_check(l_B_2559))).f_LO), p_LINE, p_CHECK);
}
}
l_I_2560 = rt_add(l_I_2560, ((rt_int)1LL));
l_B_2559 = ((*(R25 *)rt_nil_check(l_B_2559))).f_NEXT;
}
RT_B_TICK();
} L_end2561: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_2562; memset(&l_U_2562, 0, sizeof l_U_2562);
l_U_2562 = r_REAL_TYPE(p_T);
R24 * l_F_2563; memset(&l_F_2563, 0, sizeof l_F_2563);
l_F_2563 = ((*(R22 *)rt_nil_check(l_U_2562))).f_FIELDS;
R25 * l_A_2564; memset(&l_A_2564, 0, sizeof l_A_2564);
l_A_2564 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_2563 == NULL) || (l_A_2564 == NULL))) goto L_end2565;
{
if ((!(((*(R24 *)rt_nil_check(l_F_2563))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R25 *)rt_nil_check(l_A_2564))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R25 *)rt_nil_check(l_A_2564))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R24 *)rt_nil_check(l_F_2563))).f_CNAME), p_LINE, p_CHECK);
}
l_A_2564 = ((*(R25 *)rt_nil_check(l_A_2564))).f_NEXT;
}
l_F_2563 = ((*(R24 *)rt_nil_check(l_F_2563))).f_NEXT;
}
RT_B_TICK();
} L_end2565: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R9 p_T) { RT_B_TICK(); 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2566 = 0;
return rv2566; }
}
{ rt_int rv2567 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv2567; }
rt_raise(RT_X_INIT);
}
static R9 r_GEN_TEXT_NAME(R9 p_T) { RT_B_TICK(); 
{ R9 rv2568 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv2568; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R9 p_NAME, R9 p_C, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
R12 * l_OLD_2569; memset(&l_OLD_2569, 0, sizeof l_OLD_2569);
l_OLD_2569 = r_LOOKUP(p_NAME);
if ((!(l_OLD_2569 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_2569))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_2569))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_2569))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_2570; memset(&l_G_2570, 0, sizeof l_G_2570);
l_G_2570 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_2570))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R9(&((*(R12 *)rt_nil_check(l_G_2570))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_2570))).f_INPUT = 1;
r_DEFINE(l_G_2570, p_LINE);
}
}
static R21 * r_NEW_BINDS(void) { RT_B_TICK(); 
R21 * l_B_2571; memset(&l_B_2571, 0, sizeof l_B_2571);
l_B_2571 = ((R21 *)rt_b_new(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_B_2571)), ({ R21 rc2572; memset(&rc2572, 0, sizeof rc2572);  S_R9(&rc2572.f_NAME, r_NO_TEXT(), 0); rc2572.f_T = NULL; S_R9(&rc2572.f_C, r_NO_TEXT(), 0); rc2572.f_HASMV = 0; rc2572.f_MV = ((rt_int)0LL); rc2572.f_R = NULL; rc2572.f_NEXT = NULL; rc2572; }), 0);
{ R21 * rv2573 = l_B_2571;
return rv2573; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R9 p_NAME, R22 * p_T, R23 p_M, R12 * p_R, R21 * p_HEAD) { RT_B_TICK(); 
R21 * l_B_2574; memset(&l_B_2574, 0, sizeof l_B_2574);
l_B_2574 = ((R21 *)rt_b_new(sizeof (R21)));
S_R21(&(*(R21 *)rt_nil_check(l_B_2574)), ({ R21 rc2575; memset(&rc2575, 0, sizeof rc2575);  S_R9(&rc2575.f_NAME, p_NAME, 0); rc2575.f_T = p_T; S_R9(&rc2575.f_C, r_NO_TEXT(), 0); rc2575.f_HASMV = (p_M).f_OK; rc2575.f_MV = (p_M).f_V; rc2575.f_R = p_R; rc2575.f_NEXT = ((*(R21 *)rt_nil_check(p_HEAD))).f_NEXT; rc2575; }), 0);
if ((p_M).f_OK)
{
S_R9(&((*(R21 *)rt_nil_check(l_B_2574))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R21 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_2574;
}
static R21 * r_FIND_BIND(R21 * p_BS, R9 p_NAME) { RT_B_TICK(); 
R21 * l_B_2576; memset(&l_B_2576, 0, sizeof l_B_2576);
l_B_2576 = p_BS;
for (;;) {
if ((l_B_2576 == NULL)) goto L_end2577;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_B_2576))).f_NAME, p_NAME))
{
{ R21 * rv2578 = l_B_2576;
return rv2578; }
}
l_B_2576 = ((*(R21 *)rt_nil_check(l_B_2576))).f_NEXT;
}
RT_B_TICK();
} L_end2577: ;
{ R21 * rv2579 = NULL;
return rv2579; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R17 * p_TS, R22 * p_T, R21 * p_BS) { RT_B_TICK(); 
R22 * l_RT_2580; memset(&l_RT_2580, 0, sizeof l_RT_2580);
l_RT_2580 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv2581 = 1;
return rv2581; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv2582 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv2582; }
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2583 = 1;
return rv2583; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R17 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2584 = 1;
return rv2584; }
}
{
R21 * l_B_2585; memset(&l_B_2585, 0, sizeof l_B_2585);
l_B_2585 = r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_2585 == NULL)))
{
if ((((*(R21 *)rt_nil_check(l_B_2585))).f_T == NULL))
{
{ rt_int rv2586 = 0;
return rv2586; }
}
{ rt_int rv2587 = r_SAME_TYPE(((*(R21 *)rt_nil_check(l_B_2585))).f_T, p_T);
return rv2587; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_C == NULL) && r_NONSTANDARD_REP(p_T)))
{
{ rt_int rv2588 = 0;
return rv2588; }
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
{ rt_int rv2589 = 1;
return rv2589; }
}
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2580))).f_KIND == g_T_ARR)))
{
{ rt_int rv2590 = 0;
return rv2590; }
}
if ((!(r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_2580))).f_DIMS)))
{
{ rt_int rv2591 = 0;
return rv2591; }
}
{ rt_int rv2592 = r_UNIFY(((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_2580))).f_ELEM, p_BS);
return rv2592; }
}
else if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv2593 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2593; }
}
else if ((!(((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2594 = 0;
return rv2594; }
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_2580))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_2580))).f_MHI, p_BS))))
{
{ rt_int rv2595 = 0;
return rv2595; }
}
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_N_REP) && (!r_UNIFY_REP(((*(R17 *)rt_nil_check(p_TS))).f_C, l_RT_2580, p_BS))))
{
{ rt_int rv2596 = 0;
return rv2596; }
}
}
if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2580))).f_KIND == g_T_INT)))
{
{ rt_int rv2597 = 0;
return rv2597; }
}
{ rt_int rv2598 = ((r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2580))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS)) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)2LL)), r_SOME(((rt_int)0LL)), p_BS));
return rv2598; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv2599 = ((((*(R22 *)rt_nil_check(l_RT_2580))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2580))).f_SCALE == ((rt_int)0LL)));
return rv2599; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2580))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv2600 = 0;
return rv2600; }
}
{ rt_int rv2601 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2580))).f_SCALE), p_BS);
return rv2601; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv2602 = (((*(R22 *)rt_nil_check(l_RT_2580))).f_KIND == g_T_BOOL);
return rv2602; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv2603 = ((((*(R22 *)rt_nil_check(l_RT_2580))).f_KIND == g_T_STR) && r_SAME_DERIVED_LENGTH(r_NTH_ARG(p_TS, ((rt_int)0LL)), l_RT_2580, p_BS));
return rv2603; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2580))).f_KIND == g_T_STR)))
{
{ rt_int rv2604 = 0;
return rv2604; }
}
if ((!(((*(R17 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv2605 = 1;
return rv2605; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_2580))).f_BASE == NULL)))
{
{ rt_int rv2606 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_2580))).f_BASE, p_BS);
return rv2606; }
}
{ rt_int rv2607 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv2607; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv2608 = ((((*(R22 *)rt_nil_check(l_RT_2580))).f_KIND == g_T_BITS) && r_SAME_DERIVED_LENGTH(r_NTH_ARG(p_TS, ((rt_int)0LL)), l_RT_2580, p_BS));
return rv2608; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv2609 = (((*(R22 *)rt_nil_check(l_RT_2580))).f_KIND == g_T_SEM);
return rv2609; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2580))).f_KIND == g_T_PTR)))
{
{ rt_int rv2610 = 0;
return rv2610; }
}
{ rt_int rv2611 = r_UNIFY(((*(R17 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_2580), p_BS);
return rv2611; }
}
{
R12 * l_Y_2612; memset(&l_Y_2612, 0, sizeof l_Y_2612);
l_Y_2612 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_2612 == NULL))
{
{ rt_int rv2613 = 0;
return rv2613; }
}
if (((((*(R12 *)rt_nil_check(l_Y_2612))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_2612))).f_DECL == NULL)))
{
{ rt_int rv2614 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_2612))).f_T, p_T);
return rv2614; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2612))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv2615 = 0;
return rv2615; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_2612))))
{
{ rt_int rv2616 = 0;
return rv2616; }
}
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2612))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2580))).f_KIND == g_T_REC)))
{
{ rt_int rv2617 = 0;
return rv2617; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2580))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv2618 = 0;
return rv2618; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2580))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_2612))))
{
{ rt_int rv2619 = 0;
return rv2619; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv2620 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2620; }
}
{ rt_int rv2621 = r_UNIFY(r_SUBST_FORMALS(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2612))).f_DECL))).f_B, ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2612))).f_DECL))).f_A, ((*(R17 *)rt_nil_check(p_TS))).f_A), l_RT_2580, p_BS);
return rv2621; }
}
{
R17 * l_F_2622; memset(&l_F_2622, 0, sizeof l_F_2622);
l_F_2622 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2612))).f_DECL))).f_A;
R17 * l_A_2623; memset(&l_A_2623, 0, sizeof l_A_2623);
l_A_2623 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R25 * l_V_2624; memset(&l_V_2624, 0, sizeof l_V_2624);
l_V_2624 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_2625; memset(&l_CLASS_2625, 0, sizeof l_CLASS_2625);
l_CLASS_2625 = r_RECORD_CLASS_OF(l_RT_2580);
for (;;) {
if ((l_F_2622 == NULL)) goto L_end2626;
{
{
R17 * l_N_2627; memset(&l_N_2627, 0, sizeof l_N_2627);
l_N_2627 = ((*(R17 *)rt_nil_check(l_F_2622))).f_A;
for (;;) {
if ((l_N_2627 == NULL)) goto L_end2628;
{
if ((l_A_2623 == NULL))
{
{ rt_int rv2629 = 0;
return rv2629; }
}
if ((((*(R17 *)rt_nil_check(l_F_2622))).f_B == NULL))
{
if ((!(l_CLASS_2625 == NULL)))
{
{
R21 * l_B_2630; memset(&l_B_2630, 0, sizeof l_B_2630);
l_B_2630 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_2625))).f_BINDINGS, ((*(R17 *)rt_nil_check(l_N_2627))).f_NAME);
if ((!(l_B_2630 == NULL)))
{
if ((!r_UNIFY(l_A_2623, ((*(R21 *)rt_nil_check(l_B_2630))).f_T, p_BS)))
{
{ rt_int rv2631 = 0;
return rv2631; }
}
}
}
}
}
else
{
if ((!(l_V_2624 == NULL)))
{
if ((((!(((*(R17 *)rt_nil_check(l_A_2623))).f_KIND == g_TS_GEN)) && (!(((*(R17 *)rt_nil_check(l_A_2623))).f_KIND == g_N_DONTCARE))) && (!(((*(R17 *)rt_nil_check(l_A_2623))).f_KIND == g_N_ANY))))
{
{
R23 l_M_2632; memset(&l_M_2632, 0, sizeof l_M_2632);
S_R23(&l_M_2632, r_MANIFEST(l_A_2623), 0);
if (((l_M_2632).f_OK && (((*(R25 *)rt_nil_check(l_V_2624))).f_MLO).f_OK))
{
if ((!((l_M_2632).f_V == (((*(R25 *)rt_nil_check(l_V_2624))).f_MLO).f_V)))
{
{ rt_int rv2633 = 0;
return rv2633; }
}
}
}
}
l_V_2624 = ((*(R25 *)rt_nil_check(l_V_2624))).f_NEXT;
}
}
l_A_2623 = ((*(R17 *)rt_nil_check(l_A_2623))).f_NEXT;
l_N_2627 = ((*(R17 *)rt_nil_check(l_N_2627))).f_NEXT;
}
RT_B_TICK();
} L_end2628: ;
}
l_F_2622 = ((*(R17 *)rt_nil_check(l_F_2622))).f_NEXT;
}
RT_B_TICK();
} L_end2626: ;
}
{ rt_int rv2634 = 1;
return rv2634; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_DERIVED_LENGTH(R17 * p_A, R22 * p_RT, R21 * p_BS) { RT_B_TICK(); 
if (((p_A == NULL) || (!(((*(R22 *)rt_nil_check(p_RT))).f_MLEN).f_OK)))
{
{ rt_int rv2635 = 1;
return rv2635; }
}
if (((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) || ((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2636 = 1;
return rv2636; }
}
{
R9 l_KEY_2637; memset(&l_KEY_2637, 0, sizeof l_KEY_2637);
S_R9(&l_KEY_2637, r_QMKN(rt_str("%", 1), ((*(R17 *)rt_nil_check(p_A))).f_NAME), 0);
R21 * l_B_2638; memset(&l_B_2638, 0, sizeof l_B_2638);
l_B_2638 = r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, l_KEY_2637);
if ((!(l_B_2638 == NULL)))
{
{ rt_int rv2639 = (((*(R21 *)rt_nil_check(l_B_2638))).f_MV == (((*(R22 *)rt_nil_check(p_RT))).f_MLEN).f_V);
return rv2639; }
}
r_ADD_BIND(l_KEY_2637, NULL, ((*(R22 *)rt_nil_check(p_RT))).f_MLEN, NULL, p_BS);
{ rt_int rv2640 = 1;
return rv2640; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_REP(R17 * p_R, R22 * p_RT, R21 * p_BS) { RT_B_TICK(); 
R17 * l_A_2641; memset(&l_A_2641, 0, sizeof l_A_2641);
l_A_2641 = ((*(R22 *)rt_nil_check(p_RT))).f_REPS;
if (r_TEQS(((*(R17 *)rt_nil_check(p_R))).f_NAME, rt_str("FIXED_REP", 9)))
{
if ((!(((*(R22 *)rt_nil_check(p_RT))).f_KIND == g_T_INT)))
{
{ rt_int rv2642 = 0;
return rv2642; }
}
{
R9 l_SIGNING_2643; memset(&l_SIGNING_2643, 0, sizeof l_SIGNING_2643);
S_R9(&l_SIGNING_2643, r_MK(rt_str("SIGNED", 6)), 0);
if ((!(l_A_2641 == NULL)))
{
if ((!((r_TEQS(((*(R17 *)rt_nil_check(l_A_2641))).f_NAME, rt_str("FIXED_REP", 9)) || r_TEQS(((*(R17 *)rt_nil_check(l_A_2641))).f_NAME, rt_str("FIXED_STD", 9))))))
{
{ rt_int rv2644 = 1;
return rv2644; }
}
if ((r_TEQS(((*(R17 *)rt_nil_check(l_A_2641))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R17 *)rt_nil_check(l_A_2641))).f_A == NULL))))
{
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_2641))).f_A))).f_NEXT == NULL)))
{
S_R9(&l_SIGNING_2643, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_2641))).f_A))).f_NEXT))).f_NAME, 0);
}
}
}
if ((!r_UNIFY_VALUE(((*(R17 *)rt_nil_check(p_R))).f_A, r_STATIC_SIZE(p_RT), p_BS)))
{
{ rt_int rv2645 = 0;
return rv2645; }
}
if ((!(((*(R17 *)rt_nil_check(p_R))).f_A == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT == NULL)))
{
if (((((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_KIND == g_N_ENUMLIT))) && (!r_TEQ(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_NAME, l_SIGNING_2643))))
{
{ rt_int rv2646 = 0;
return rv2646; }
}
}
}
{ rt_int rv2647 = 1;
return rv2647; }
}
}
if ((l_A_2641 == NULL))
{
{ rt_int rv2648 = 1;
return rv2648; }
}
{ rt_int rv2649 = r_TEQ(((*(R17 *)rt_nil_check(p_R))).f_NAME, ((*(R17 *)rt_nil_check(l_A_2641))).f_NAME);
return rv2649; }
rt_raise(RT_X_INIT);
}
static rt_int r_NONSTANDARD_REP(R22 * p_T) { RT_B_TICK(); 
R17 * l_R_2650; memset(&l_R_2650, 0, sizeof l_R_2650);
l_R_2650 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
if ((l_R_2650 == NULL))
{
{ rt_int rv2651 = 0;
return rv2651; }
}
if ((((*(R17 *)rt_nil_check(l_R_2650))).f_KIND == g_TS_GEN))
{
{ rt_int rv2652 = 0;
return rv2652; }
}
{ rt_int rv2653 = (((((r_TEQS(((*(R17 *)rt_nil_check(l_R_2650))).f_NAME, rt_str("FIXED_REP", 9)) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2650))).f_NAME, rt_str("ENUM_REP", 8))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2650))).f_NAME, rt_str("ENUM_VAL_REP", 12))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2650))).f_NAME, rt_str("CHAR_STR_REP", 12))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2650))).f_NAME, rt_str("ARRAY_REP", 9))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2650))).f_NAME, rt_str("RECORD_REP", 10)));
return rv2653; }
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { RT_B_TICK(); 
R12 * l_R_2654; memset(&l_R_2654, 0, sizeof l_R_2654);
l_R_2654 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv2655 = NULL;
return rv2655; }
}
for (;;) {
if ((l_R_2654 == NULL)) goto L_end2656;
{
if ((((*(R12 *)rt_nil_check(l_R_2654))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv2657 = l_R_2654;
return rv2657; }
}
l_R_2654 = ((*(R12 *)rt_nil_check(l_R_2654))).f_INSTANCES;
}
RT_B_TICK();
} L_end2656: ;
{ R12 * rv2658 = NULL;
return rv2658; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R17 * p_A, R23 p_M, R21 * p_BS) { RT_B_TICK(); 
if ((p_A == NULL))
{
{ rt_int rv2659 = 1;
return rv2659; }
}
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2660 = 1;
return rv2660; }
}
else if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2661 = 1;
return rv2661; }
}
{
R21 * l_B_2662; memset(&l_B_2662, 0, sizeof l_B_2662);
l_B_2662 = r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, ((*(R17 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_2662 == NULL)))
{
{ rt_int rv2663 = ((((*(R21 *)rt_nil_check(l_B_2662))).f_HASMV && (p_M).f_OK) && (((*(R21 *)rt_nil_check(l_B_2662))).f_MV == (p_M).f_V));
return rv2663; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv2664 = 0;
return rv2664; }
}
r_ADD_BIND(((*(R17 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv2665 = 1;
return rv2665; }
}
{
R23 l_V_2666; memset(&l_V_2666, 0, sizeof l_V_2666);
S_R23(&l_V_2666, r_MANIFEST(p_A), 0);
if (((l_V_2666).f_OK && (p_M).f_OK))
{
{ rt_int rv2667 = ((l_V_2666).f_V == (p_M).f_V);
return rv2667; }
}
}
{ rt_int rv2668 = 1;
return rv2668; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R28 * p_P, R27 * p_A, R21 * p_BS) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R27 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv2669 = 0;
return rv2669; }
}
if (((!(((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME)) && (!(((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_APPLY))))
{
{ rt_int rv2670 = 0;
return rv2670; }
}
{ rt_int rv2671 = (!(r_FIND_ROUTINE_ARG(((*(R28 *)rt_nil_check(p_P))).f_TS, ((*(R27 *)rt_nil_check(p_A))).f_E, p_BS, ((rt_int)0LL), 0) == NULL));
return rv2671; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv2672 = 1;
return rv2672; }
}
r_TYPE_ARG(p_A);
{ rt_int rv2673 = r_UNIFY(((*(R28 *)rt_nil_check(p_P))).f_TS, (((*(R27 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv2673; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R27 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_BS_2674; memset(&l_BS_2674, 0, sizeof l_BS_2674);
l_BS_2674 = r_NEW_BINDS();
R28 * l_P_2675; memset(&l_P_2675, 0, sizeof l_P_2675);
l_P_2675 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R27 * l_A_2676; memset(&l_A_2676, 0, sizeof l_A_2676);
l_A_2676 = p_ARGS;
for (;;) {
if ((l_P_2675 == NULL)) goto L_end2677;
{
if ((((*(R28 *)rt_nil_check(l_P_2675))).f_TS == NULL))
{
if (((*(R27 *)rt_nil_check(l_A_2676))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2675))).f_NAME, r_ARG_TYPE(((*(R27 *)rt_nil_check(l_A_2676))).f_E), r_NO_MVAL(), NULL, l_BS_2674);
}
else if ((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2675))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R28 *)rt_nil_check(l_P_2675))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R28 *)rt_nil_check(l_P_2675))).f_TS, ((*(R27 *)rt_nil_check(l_A_2676))).f_E, p_LINE), l_BS_2674);
}
else if (((((!(((*(R27 *)rt_nil_check(l_A_2676))).f_E == NULL)) && (!((*(R27 *)rt_nil_check(l_A_2676))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R28 *)rt_nil_check(l_P_2675))).f_TS))) && (((*(R17 *)rt_nil_check(((*(R27 *)rt_nil_check(l_A_2676))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R27 *)rt_nil_check(l_A_2676))).f_HAVE))
{
S_R26(&((*(R27 *)rt_nil_check(l_A_2676))).f_V, r_EXPR(((*(R27 *)rt_nil_check(l_A_2676))).f_E, NULL), 0);
((*(R27 *)rt_nil_check(l_A_2676))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R28 *)rt_nil_check(l_P_2675))).f_TS, (((*(R27 *)rt_nil_check(l_A_2676))).f_V).f_T, l_BS_2674)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R28 *)rt_nil_check(l_P_2675))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2675))).f_TS))
{
r_ADD_BIND(r_QMKN(rt_str("\?", 1), ((*(R28 *)rt_nil_check(l_P_2675))).f_NAME), (((*(R27 *)rt_nil_check(l_A_2676))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_2674);
}
}
l_P_2675 = ((*(R28 *)rt_nil_check(l_P_2675))).f_NEXT;
l_A_2676 = ((*(R27 *)rt_nil_check(l_A_2676))).f_NEXT;
}
RT_B_TICK();
} L_end2677: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_2674);
{
R12 * l_I_2678; memset(&l_I_2678, 0, sizeof l_I_2678);
l_I_2678 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2678 == NULL)) goto L_end2679;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2678))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_BS_2674))).f_NEXT))
{
{ R12 * rv2680 = l_I_2678;
return rv2680; }
}
l_I_2678 = ((*(R12 *)rt_nil_check(l_I_2678))).f_INSTANCES;
}
RT_B_TICK();
} L_end2679: ;
}
{ R12 * rv2681 = r_NEW_INSTANCE(p_G, ((*(R21 *)rt_nil_check(l_BS_2674))).f_NEXT, p_ARGS);
return rv2681; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_2682; memset(&l_P_2682, 0, sizeof l_P_2682);
l_P_2682 = p_A;
for (;;) {
if ((l_P_2682 == NULL)) goto L_end2683;
{
{
R21 * l_Q_2684; memset(&l_Q_2684, 0, sizeof l_Q_2684);
l_Q_2684 = r_FIND_BIND(p_B, ((*(R21 *)rt_nil_check(l_P_2682))).f_NAME);
if ((l_Q_2684 == NULL))
{
{ rt_int rv2685 = 0;
return rv2685; }
}
if (((!(((*(R21 *)rt_nil_check(l_P_2682))).f_T == NULL)) || (!(((*(R21 *)rt_nil_check(l_Q_2684))).f_T == NULL))))
{
if (((((*(R21 *)rt_nil_check(l_P_2682))).f_T == NULL) || (((*(R21 *)rt_nil_check(l_Q_2684))).f_T == NULL)))
{
{ rt_int rv2686 = 0;
return rv2686; }
}
if ((!r_SAME_TYPE(((*(R21 *)rt_nil_check(l_P_2682))).f_T, ((*(R21 *)rt_nil_check(l_Q_2684))).f_T)))
{
{ rt_int rv2687 = 0;
return rv2687; }
}
if ((!r_SAME_LENGTH(((*(R21 *)rt_nil_check(l_P_2682))).f_T, ((*(R21 *)rt_nil_check(l_Q_2684))).f_T)))
{
{ rt_int rv2688 = 0;
return rv2688; }
}
if ((!r_SAME_REPS(((*(R21 *)rt_nil_check(l_P_2682))).f_T, ((*(R21 *)rt_nil_check(l_Q_2684))).f_T)))
{
{ rt_int rv2689 = 0;
return rv2689; }
}
}
if ((((!(((*(R21 *)rt_nil_check(l_P_2682))).f_HASMV == ((*(R21 *)rt_nil_check(l_Q_2684))).f_HASMV)) || (!(((*(R21 *)rt_nil_check(l_P_2682))).f_MV == ((*(R21 *)rt_nil_check(l_Q_2684))).f_MV))) || (!(((*(R21 *)rt_nil_check(l_P_2682))).f_R == ((*(R21 *)rt_nil_check(l_Q_2684))).f_R))))
{
{ rt_int rv2690 = 0;
return rv2690; }
}
}
l_P_2682 = ((*(R21 *)rt_nil_check(l_P_2682))).f_NEXT;
}
RT_B_TICK();
} L_end2683: ;
{ rt_int rv2691 = 1;
return rv2691; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2692; memset(&l_RA_2692, 0, sizeof l_RA_2692);
l_RA_2692 = r_REAL_TYPE(p_A);
R22 * l_RB_2693; memset(&l_RB_2693, 0, sizeof l_RB_2693);
l_RB_2693 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_2692))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_2692))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_2692))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_2693))).f_KIND))))
{
{ rt_int rv2694 = 1;
return rv2694; }
}
if (((((*(R22 *)rt_nil_check(l_RA_2692))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_2693))).f_MLEN).f_OK))
{
{ rt_int rv2695 = ((((*(R22 *)rt_nil_check(l_RA_2692))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_2693))).f_MLEN).f_V);
return rv2695; }
}
{ rt_int rv2696 = ((((*(R22 *)rt_nil_check(l_RA_2692))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_2693))).f_MLEN).f_OK);
return rv2696; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R17 * l_RA_2697; memset(&l_RA_2697, 0, sizeof l_RA_2697);
l_RA_2697 = ((*(R22 *)rt_nil_check(p_A))).f_REPS;
R17 * l_RB_2698; memset(&l_RB_2698, 0, sizeof l_RB_2698);
l_RB_2698 = ((*(R22 *)rt_nil_check(p_B))).f_REPS;
if (((l_RA_2697 == NULL) || (l_RB_2698 == NULL)))
{
{ rt_int rv2699 = (l_RA_2697 == l_RB_2698);
return rv2699; }
}
if ((l_RA_2697 == l_RB_2698))
{
{ rt_int rv2700 = 1;
return rv2700; }
}
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_RA_2697))).f_NAME, ((*(R17 *)rt_nil_check(l_RB_2698))).f_NAME)))
{
{ rt_int rv2701 = 0;
return rv2701; }
}
{
R17 * l_X_2702; memset(&l_X_2702, 0, sizeof l_X_2702);
l_X_2702 = ((*(R17 *)rt_nil_check(l_RA_2697))).f_A;
R17 * l_Y_2703; memset(&l_Y_2703, 0, sizeof l_Y_2703);
l_Y_2703 = ((*(R17 *)rt_nil_check(l_RB_2698))).f_A;
for (;;) {
if (((l_X_2702 == NULL) || (l_Y_2703 == NULL))) goto L_end2704;
{
if (((((((*(R17 *)rt_nil_check(l_X_2702))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_X_2702))).f_KIND == g_N_ENUMLIT))) && (((((*(R17 *)rt_nil_check(l_Y_2703))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_Y_2703))).f_KIND == g_N_ENUMLIT)))))
{
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_X_2702))).f_NAME, ((*(R17 *)rt_nil_check(l_Y_2703))).f_NAME)))
{
{ rt_int rv2705 = 0;
return rv2705; }
}
}
else
{
{
R23 l_MX_2706; memset(&l_MX_2706, 0, sizeof l_MX_2706);
S_R23(&l_MX_2706, r_MANIFEST(l_X_2702), 0);
R23 l_MY_2707; memset(&l_MY_2707, 0, sizeof l_MY_2707);
S_R23(&l_MY_2707, r_MANIFEST(l_Y_2703), 0);
if (((!((l_MX_2706).f_OK == (l_MY_2707).f_OK)) || (!((l_MX_2706).f_V == (l_MY_2707).f_V))))
{
{ rt_int rv2708 = 0;
return rv2708; }
}
}
}
l_X_2702 = ((*(R17 *)rt_nil_check(l_X_2702))).f_NEXT;
l_Y_2703 = ((*(R17 *)rt_nil_check(l_Y_2703))).f_NEXT;
}
RT_B_TICK();
} L_end2704: ;
{ rt_int rv2709 = ((((l_X_2702 == NULL) && (l_Y_2703 == NULL)) && (((*(R17 *)rt_nil_check(l_RA_2697))).f_B == NULL)) && (((*(R17 *)rt_nil_check(l_RB_2698))).f_B == NULL));
return rv2709; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R17 * p_TS, R17 * p_E, rt_int p_LINE) { RT_B_TICK(); 
{ R12 * rv2710 = r_FIND_ROUTINE_ARG(p_TS, p_E, NULL, p_LINE, 1);
return rv2710; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE_ARG(R17 * p_TS, R17 * p_E, R21 * p_BS0, rt_int p_LINE, rt_int p_STRICT) { RT_B_TICK(); 
R12 * l_Y_2711; memset(&l_Y_2711, 0, sizeof l_Y_2711);
l_Y_2711 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_2712; memset(&l_FOUND_2712, 0, sizeof l_FOUND_2712);
l_FOUND_2712 = NULL;
R21 * l_BS_2713; memset(&l_BS_2713, 0, sizeof l_BS_2713);
l_BS_2713 = p_BS0;
if ((l_BS_2713 == NULL))
{
l_BS_2713 = r_NEW_BINDS();
}
for (;;) {
if ((l_Y_2711 == NULL)) goto L_end2714;
{
if ((((*(R12 *)rt_nil_check(l_Y_2711))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_2715; memset(&l_R_2715, 0, sizeof l_R_2715);
l_R_2715 = r_ORIGINAL(l_Y_2711);
R21 * l_TRY_2716; memset(&l_TRY_2716, 0, sizeof l_TRY_2716);
l_TRY_2716 = r_NEW_BINDS();
((*(R21 *)rt_nil_check(l_TRY_2716))).f_NEXT = ((*(R21 *)rt_nil_check(l_BS_2713))).f_NEXT;
r_ROUTINE_HEADER(l_R_2715);
if ((((!((*(R12 *)rt_nil_check(l_R_2715))).f_GENERIC) && r_EXPLICIT_TEMPLATE_FITS(p_E, l_R_2715)) && r_TEMPLATE_FITS(p_TS, l_R_2715, l_TRY_2716)))
{
if (((!(l_FOUND_2712 == NULL)) && (!(l_FOUND_2712 == l_R_2715))))
{
if ((!p_STRICT))
{
{ R12 * rv2717 = NULL;
return rv2717; }
}
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_2712 = l_R_2715;
}
}
}
l_Y_2711 = r_LOOKUP_NEXT(l_Y_2711);
}
RT_B_TICK();
} L_end2714: ;
if ((l_FOUND_2712 == NULL))
{
if ((!p_STRICT))
{
{ R12 * rv2718 = NULL;
return rv2718; }
}
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter (5.1): ", 45), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_2712))).f_USES == NULL)))
{
if ((!p_STRICT))
{
{ R12 * rv2719 = NULL;
return rv2719; }
}
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (p_STRICT)
{
if ((!r_TEMPLATE_FITS(p_TS, l_FOUND_2712, l_BS_2713)))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter (5.1): ", 45), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
r_NEED_BODY(l_FOUND_2712);
}
{ R12 * rv2720 = l_FOUND_2712;
return rv2720; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPLICIT_TEMPLATE_FITS(R17 * p_E, R12 * p_R) { RT_B_TICK(); 
R17 * l_A_2721; memset(&l_A_2721, 0, sizeof l_A_2721);
l_A_2721 = ((*(R17 *)rt_nil_check(p_E))).f_A;
R28 * l_Q_2722; memset(&l_Q_2722, 0, sizeof l_Q_2722);
l_Q_2722 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY)))
{
{ rt_int rv2723 = 1;
return rv2723; }
}
if (((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
{ rt_int rv2724 = 0;
return rv2724; }
}
for (;;) {
if (((l_A_2721 == NULL) || (l_Q_2722 == NULL))) goto L_end2725;
{
if ((((*(R28 *)rt_nil_check(l_Q_2722))).f_T == NULL))
{
{ rt_int rv2726 = 0;
return rv2726; }
}
if ((!r_IDENTICAL_TYPE(r_RESOLVE(r_EXPR_TO_TS(l_A_2721)), ((*(R28 *)rt_nil_check(l_Q_2722))).f_T)))
{
{ rt_int rv2727 = 0;
return rv2727; }
}
l_A_2721 = ((*(R17 *)rt_nil_check(l_A_2721))).f_NEXT;
l_Q_2722 = ((*(R28 *)rt_nil_check(l_Q_2722))).f_NEXT;
}
RT_B_TICK();
} L_end2725: ;
if (((!(l_A_2721 == NULL)) || (!(l_Q_2722 == NULL))))
{
{ rt_int rv2728 = 0;
return rv2728; }
}
if ((!(((*(R17 *)rt_nil_check(p_E))).f_E == NULL)))
{
{ rt_int rv2729 = r_IDENTICAL_TYPE(r_RESOLVE(((*(R17 *)rt_nil_check(p_E))).f_E), ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2729; }
}
{ rt_int rv2730 = 1;
return rv2730; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEMPLATE_FITS(R17 * p_TS, R12 * p_R, R21 * p_BS) { RT_B_TICK(); 
R17 * l_P_2731; memset(&l_P_2731, 0, sizeof l_P_2731);
l_P_2731 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R28 * l_Q_2732; memset(&l_Q_2732, 0, sizeof l_Q_2732);
l_Q_2732 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
if ((!(((((*(R17 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL))) == ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_IV == ((rt_int)1LL))))))
{
{ rt_int rv2733 = 0;
return rv2733; }
}
for (;;) {
if (((l_P_2731 == NULL) || (l_Q_2732 == NULL))) goto L_end2734;
{
if ((!(((*(R17 *)rt_nil_check(l_P_2731))).f_IV == ((*(R28 *)rt_nil_check(l_Q_2732))).f_MODE)))
{
{ rt_int rv2735 = 0;
return rv2735; }
}
if (((((*(R17 *)rt_nil_check(l_P_2731))).f_B == NULL) || (((*(R28 *)rt_nil_check(l_Q_2732))).f_T == NULL)))
{
if (((!(((*(R17 *)rt_nil_check(l_P_2731))).f_B == NULL)) || (!(((*(R28 *)rt_nil_check(l_Q_2732))).f_T == NULL))))
{
{ rt_int rv2736 = 0;
return rv2736; }
}
}
else if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_2731))).f_B))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2737 = 0;
return rv2737; }
}
else if ((!r_TYPE_FITS_SPEC(((*(R17 *)rt_nil_check(l_P_2731))).f_B, ((*(R28 *)rt_nil_check(l_Q_2732))).f_T, p_BS)))
{
{ rt_int rv2738 = 0;
return rv2738; }
}
l_P_2731 = ((*(R17 *)rt_nil_check(l_P_2731))).f_NEXT;
l_Q_2732 = ((*(R28 *)rt_nil_check(l_Q_2732))).f_NEXT;
}
RT_B_TICK();
} L_end2734: ;
if (((!(l_P_2731 == NULL)) || (!(l_Q_2732 == NULL))))
{
{ rt_int rv2739 = 0;
return rv2739; }
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if ((!r_TYPE_FITS_SPEC(((*(R17 *)rt_nil_check(p_TS))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT, p_BS)))
{
{ rt_int rv2740 = 0;
return rv2740; }
}
}
{
R17 * l_X_2741; memset(&l_X_2741, 0, sizeof l_X_2741);
l_X_2741 = ((*(R17 *)rt_nil_check(p_TS))).f_D;
for (;;) {
if ((l_X_2741 == NULL)) goto L_end2742;
{
if ((!r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_D))).f_A, ((*(R17 *)rt_nil_check(l_X_2741))).f_NAME)))
{
{ rt_int rv2743 = 0;
return rv2743; }
}
l_X_2741 = ((*(R17 *)rt_nil_check(l_X_2741))).f_NEXT;
}
RT_B_TICK();
} L_end2742: ;
}
{ rt_int rv2744 = 1;
return rv2744; }
rt_raise(RT_X_INIT);
}
static rt_int r_TYPE_FITS_SPEC(R17 * p_TS, R22 * p_T, R21 * p_BS) { RT_B_TICK(); 
if ((r_STATIC_GENERIC(p_TS) || r_HAS_DERIVED(p_TS)))
{
{ rt_int rv2745 = r_UNIFY(p_TS, p_T, p_BS);
return rv2745; }
}
{ rt_int rv2746 = r_IDENTICAL_TYPE(r_RESOLVE(p_TS), p_T);
return rv2746; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_DERIVED(R17 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2747 = 0;
return rv2747; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2748 = 1;
return rv2748; }
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if (r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(p_TS))).f_A))
{
{ rt_int rv2749 = 1;
return rv2749; }
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if ((r_HAS_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_A) || r_HAS_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_B)))
{
{ rt_int rv2750 = 1;
return rv2750; }
}
}
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2751 = 1;
return rv2751; }
}
{ rt_int rv2752 = 0;
return rv2752; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R21 * p_BS) { RT_B_TICK(); 
R17 * l_NEEDL_2753; memset(&l_NEEDL_2753, 0, sizeof l_NEEDL_2753);
l_NEEDL_2753 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R21 * l_SAVED_2754; memset(&l_SAVED_2754, 0, sizeof l_SAVED_2754);
l_SAVED_2754 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R21 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_2753 == NULL)) goto L_end2755;
{
{
R17 * l_T_2756; memset(&l_T_2756, 0, sizeof l_T_2756);
l_T_2756 = ((*(R17 *)rt_nil_check(l_NEEDL_2753))).f_A;
for (;;) {
if ((l_T_2756 == NULL)) goto L_end2757;
{
if ((r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, ((*(R17 *)rt_nil_check(l_T_2756))).f_NAME) == NULL))
{
{
R27 * l_ARGS_2758; memset(&l_ARGS_2758, 0, sizeof l_ARGS_2758);
l_ARGS_2758 = NULL;
R27 * l_TAIL_2759; memset(&l_TAIL_2759, 0, sizeof l_TAIL_2759);
l_TAIL_2759 = NULL;
R17 * l_P_2760; memset(&l_P_2760, 0, sizeof l_P_2760);
l_P_2760 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_T_2756))).f_B))).f_A;
R12 * l_R_2761; memset(&l_R_2761, 0, sizeof l_R_2761);
rt_int l_ENTERED_2762; memset(&l_ENTERED_2762, 0, sizeof l_ENTERED_2762);
l_ENTERED_2762 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_2760 == NULL)) goto L_end2763;
{
{
R27 * l_A_2764; memset(&l_A_2764, 0, sizeof l_A_2764);
if ((((*(R17 *)rt_nil_check(l_P_2760))).f_B == NULL))
{
l_A_2764 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_2764 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R17 *)rt_nil_check(l_P_2760))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R27 *)rt_nil_check(l_A_2764))).f_MODE = ((*(R17 *)rt_nil_check(l_P_2760))).f_IV;
if ((l_TAIL_2759 == NULL))
{
l_ARGS_2758 = l_A_2764;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2759))).f_NEXT = l_A_2764;
}
l_TAIL_2759 = l_A_2764;
}
l_P_2760 = ((*(R17 *)rt_nil_check(l_P_2760))).f_NEXT;
}
RT_B_TICK();
} L_end2763: ;
if (l_ENTERED_2762)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_2761 = r_FIND_ROUTINE(((*(R17 *)rt_nil_check(l_T_2756))).f_NAME, l_ARGS_2758, p_LINE, 0);
if ((l_R_2761 == NULL))
{
l_R_2761 = r_LOOKUP(((*(R17 *)rt_nil_check(l_T_2756))).f_NAME);
for (;;) {
if ((l_R_2761 == NULL)) goto L_end2765;
{
if ((((*(R12 *)rt_nil_check(l_R_2761))).f_KIND == g_Y_BUILTIN))
{
goto L_end2765;
}
l_R_2761 = r_LOOKUP_NEXT(l_R_2761);
}
RT_B_TICK();
} L_end2765: ;
}
if (((l_R_2761 == NULL) && (!r_IS_OPERATOR_NAME(((*(R17 *)rt_nil_check(l_T_2756))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R17 *)rt_nil_check(l_T_2756))).f_NAME);
}
if ((!(l_R_2761 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_R_2761))).f_KIND == g_Y_ROUTINE))
{
r_COMPUTE_USES(r_ORIGINAL(l_R_2761));
if ((!(((*(R12 *)rt_nil_check(r_ORIGINAL(l_R_2761)))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine named in a WHERE clause may not import data (5.2): ", 61), ((*(R17 *)rt_nil_check(l_T_2756))).f_NAME);
}
}
r_ADD_BIND(((*(R17 *)rt_nil_check(l_T_2756))).f_NAME, NULL, r_NO_MVAL(), l_R_2761, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R21 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_2756 = ((*(R17 *)rt_nil_check(l_T_2756))).f_NEXT;
}
RT_B_TICK();
} L_end2757: ;
}
l_NEEDL_2753 = ((*(R17 *)rt_nil_check(l_NEEDL_2753))).f_NEXT;
}
RT_B_TICK();
} L_end2755: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2754;
}
static rt_int r_DONTCARE_TYPE_ARG(R17 * p_TS) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2766 = 0;
return rv2766; }
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{
R17 * l_A_2767; memset(&l_A_2767, 0, sizeof l_A_2767);
l_A_2767 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_A_2767 == NULL)) goto L_end2768;
{
if ((((*(R17 *)rt_nil_check(l_A_2767))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2769 = 1;
return rv2769; }
}
l_A_2767 = ((*(R17 *)rt_nil_check(l_A_2767))).f_NEXT;
}
RT_B_TICK();
} L_end2768: ;
}
{ rt_int rv2770 = 0;
return rv2770; }
}
{
R12 * l_Y_2771; memset(&l_Y_2771, 0, sizeof l_Y_2771);
l_Y_2771 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
R17 * l_A_2772; memset(&l_A_2772, 0, sizeof l_A_2772);
l_A_2772 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R17 * l_F_2773; memset(&l_F_2773, 0, sizeof l_F_2773);
if ((l_Y_2771 == NULL))
{
{ rt_int rv2774 = 0;
return rv2774; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2771))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_2771))).f_DECL == NULL)))
{
{ rt_int rv2775 = 0;
return rv2775; }
}
l_F_2773 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2771))).f_DECL))).f_A;
for (;;) {
if ((l_F_2773 == NULL)) goto L_end2776;
{
{
R17 * l_N_2777; memset(&l_N_2777, 0, sizeof l_N_2777);
l_N_2777 = ((*(R17 *)rt_nil_check(l_F_2773))).f_A;
for (;;) {
if ((l_N_2777 == NULL)) goto L_end2778;
{
if ((l_A_2772 == NULL))
{
{ rt_int rv2779 = 0;
return rv2779; }
}
if (((((*(R17 *)rt_nil_check(l_F_2773))).f_B == NULL) && (((*(R17 *)rt_nil_check(l_A_2772))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2780 = 1;
return rv2780; }
}
l_A_2772 = ((*(R17 *)rt_nil_check(l_A_2772))).f_NEXT;
l_N_2777 = ((*(R17 *)rt_nil_check(l_N_2777))).f_NEXT;
}
RT_B_TICK();
} L_end2778: ;
}
l_F_2773 = ((*(R17 *)rt_nil_check(l_F_2773))).f_NEXT;
}
RT_B_TICK();
} L_end2776: ;
}
{ rt_int rv2781 = 0;
return rv2781; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R21 * p_BS, R27 * p_ARGS) { RT_B_TICK(); 
R27 * l_A_2782; memset(&l_A_2782, 0, sizeof l_A_2782);
l_A_2782 = p_ARGS;
R12 * l_I_2783; memset(&l_I_2783, 0, sizeof l_I_2783);
l_I_2783 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R21 * l_SAVED_2784; memset(&l_SAVED_2784, 0, sizeof l_SAVED_2784);
l_SAVED_2784 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R12 * l_SAVED_SEG_2785; memset(&l_SAVED_SEG_2785, 0, sizeof l_SAVED_SEG_2785);
l_SAVED_SEG_2785 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R12 * l_HOME_2786; memset(&l_HOME_2786, 0, sizeof l_HOME_2786);
l_HOME_2786 = r_ENTER_HOME(p_G);
R28 * l_P_2787; memset(&l_P_2787, 0, sizeof l_P_2787);
l_P_2787 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R28 * l_TAIL_2788; memset(&l_TAIL_2788, 0, sizeof l_TAIL_2788);
l_TAIL_2788 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_2783)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_2783))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_2783))).f_LINKAGE = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_I_2783))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_2783))).f_PARAMS = NULL;
S_R9(&((*(R12 *)rt_nil_check(l_I_2783))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_2783))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_2783;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(p_G))).f_HOME;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_2787 == NULL)) goto L_end2789;
{
{
R28 * l_PM_2790; memset(&l_PM_2790, 0, sizeof l_PM_2790);
l_PM_2790 = ((R28 *)rt_b_new(sizeof (R28)));
S_R28(&(*(R28 *)rt_nil_check(l_PM_2790)), (*(R28 *)rt_nil_check(l_P_2787)), 0);
((*(R28 *)rt_nil_check(l_PM_2790))).f_NEXT = NULL;
if ((((*(R28 *)rt_nil_check(l_P_2787))).f_TS == NULL))
{
((*(R28 *)rt_nil_check(l_PM_2790))).f_T = NULL;
}
else if ((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2787))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R28 *)rt_nil_check(l_PM_2790))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R28 *)rt_nil_check(l_P_2787))).f_TS) && ((*(R27 *)rt_nil_check(l_A_2782))).f_HAVE))
{
((*(R28 *)rt_nil_check(l_PM_2790))).f_T = (((*(R27 *)rt_nil_check(l_A_2782))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2790))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2790))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R28 *)rt_nil_check(l_PM_2790))).f_T = ((*(R22 *)rt_nil_check(((*(R28 *)rt_nil_check(l_PM_2790))).f_T))).f_BASE;
}
}
}
else
{
((*(R28 *)rt_nil_check(l_PM_2790))).f_T = r_RESOLVE(((*(R28 *)rt_nil_check(l_P_2787))).f_TS);
}
if ((!(((*(R28 *)rt_nil_check(l_P_2787))).f_TS == NULL)))
{
if (((((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2787))).f_TS))).f_KIND == g_TS_GEN) || (((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2787))).f_TS))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2787))).f_TS))).f_A == NULL))))) && ((((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2787))).f_TS))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((!(r_FIND_BIND(p_BS, ((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2787))).f_TS))).f_NAME) == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(r_FIND_BIND(p_BS, ((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2787))).f_TS))).f_NAME)))).f_T == NULL)))
{
((*(R28 *)rt_nil_check(l_PM_2790))).f_T = r_MARK_GENP(((*(R28 *)rt_nil_check(l_PM_2790))).f_T, ((*(R17 *)rt_nil_check(((*(R28 *)rt_nil_check(l_P_2787))).f_TS))).f_NAME);
}
}
}
}
((*(R28 *)rt_nil_check(l_PM_2790))).f_TS = NULL;
if ((l_TAIL_2788 == NULL))
{
((*(R12 *)rt_nil_check(l_I_2783))).f_PARAMS = l_PM_2790;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2788))).f_NEXT = l_PM_2790;
}
l_TAIL_2788 = l_PM_2790;
}
l_P_2787 = ((*(R28 *)rt_nil_check(l_P_2787))).f_NEXT;
l_A_2782 = ((*(R27 *)rt_nil_check(l_A_2782))).f_NEXT;
}
RT_B_TICK();
} L_end2789: ;
((*(R12 *)rt_nil_check(l_I_2783))).f_RESULT = r_RESULT_TYPE(l_I_2783);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2784;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_2785;
r_LEAVE_HOME(p_G, l_HOME_2786);
S_R9(&((*(R12 *)rt_nil_check(l_I_2783))).f_FWD, r_C_HEADER(l_I_2783), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_2783))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_2783))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_2783;
{ R12 * rv2791 = l_I_2783;
return rv2791; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R9 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2792 = 0;
return rv2792; }
}
{ rt_int rv2793 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv2793; }
rt_raise(RT_X_INIT);
}
static R17 * r_SUBST_FORMALS(R17 * p_TS, R17 * p_FORMALS, R17 * p_ARGS) { RT_B_TICK(); 
R17 * l_C_2794; memset(&l_C_2794, 0, sizeof l_C_2794);
if ((p_TS == NULL))
{
{ R17 * rv2795 = NULL;
return rv2795; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R17 * l_F_2796; memset(&l_F_2796, 0, sizeof l_F_2796);
l_F_2796 = p_FORMALS;
R17 * l_A_2797; memset(&l_A_2797, 0, sizeof l_A_2797);
l_A_2797 = p_ARGS;
for (;;) {
if ((l_F_2796 == NULL)) goto L_end2798;
{
{
R17 * l_N_2799; memset(&l_N_2799, 0, sizeof l_N_2799);
l_N_2799 = ((*(R17 *)rt_nil_check(l_F_2796))).f_A;
for (;;) {
if ((l_N_2799 == NULL)) goto L_end2800;
{
if ((l_A_2797 == NULL))
{
{ R17 * rv2801 = p_TS;
return rv2801; }
}
if (((((*(R17 *)rt_nil_check(l_F_2796))).f_B == NULL) && r_TEQ(((*(R17 *)rt_nil_check(l_N_2799))).f_NAME, ((*(R17 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R17 * rv2802 = l_A_2797;
return rv2802; }
}
l_A_2797 = ((*(R17 *)rt_nil_check(l_A_2797))).f_NEXT;
l_N_2799 = ((*(R17 *)rt_nil_check(l_N_2799))).f_NEXT;
}
RT_B_TICK();
} L_end2800: ;
}
l_F_2796 = ((*(R17 *)rt_nil_check(l_F_2796))).f_NEXT;
}
RT_B_TICK();
} L_end2798: ;
}
{ R17 * rv2803 = p_TS;
return rv2803; }
}
l_C_2794 = r_COPY_NODE(p_TS);
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R17 *)rt_nil_check(l_C_2794))).f_C = r_SUBST_FORMALS(((*(R17 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R17 *)rt_nil_check(l_C_2794))).f_A = r_SUBST_FORMALS(((*(R17 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R17 * rv2804 = l_C_2794;
return rv2804; }
rt_raise(RT_X_INIT);
}
static R17 * r_COPY_NODE(R17 * p_N) { RT_B_TICK(); 
R17 * l_C_2805; memset(&l_C_2805, 0, sizeof l_C_2805);
l_C_2805 = ((R17 *)rt_b_new(sizeof (R17)));
S_R17(&(*(R17 *)rt_nil_check(l_C_2805)), (*(R17 *)rt_nil_check(p_N)), 0);
((*(R17 *)rt_nil_check(l_C_2805))).f_NEXT = NULL;
{ R17 * rv2806 = l_C_2805;
return rv2806; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R17 * p_L, R9 p_NAME) { RT_B_TICK(); 
R17 * l_P_2807; memset(&l_P_2807, 0, sizeof l_P_2807);
l_P_2807 = p_L;
for (;;) {
if ((l_P_2807 == NULL)) goto L_end2808;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_2807))).f_NAME, p_NAME))
{
{ rt_int rv2809 = 1;
return rv2809; }
}
l_P_2807 = ((*(R17 *)rt_nil_check(l_P_2807))).f_NEXT;
}
RT_B_TICK();
} L_end2808: ;
{ rt_int rv2810 = 0;
return rv2810; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_IS_2811; memset(&l_IS_2811, 0, sizeof l_IS_2811);
l_IS_2811 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv2812 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2812; }
}
if ((l_IS_2811 == NULL))
{
{ rt_int rv2813 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2813; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R20 *)rt_nil_check(l_IS_2811))).f_ID) || (((*(R20 *)rt_nil_check(l_IS_2811))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv2814 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2814; }
}
if ((!(((*(R20 *)rt_nil_check(l_IS_2811))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2811))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2815 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2815; }
}
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2811))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2816 = 0;
return rv2816; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { RT_B_TICK(); 
R17 * l_ITEMS_2817; memset(&l_ITEMS_2817, 0, sizeof l_ITEMS_2817);
l_ITEMS_2817 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R17 * l_HEAD_2818; memset(&l_HEAD_2818, 0, sizeof l_HEAD_2818);
l_HEAD_2818 = NULL;
R17 * l_TAIL_2819; memset(&l_TAIL_2819, 0, sizeof l_TAIL_2819);
l_TAIL_2819 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_2817 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R17 *)rt_nil_check(l_ITEMS_2817))).f_A, &l_HEAD_2818, &l_TAIL_2819);
r_ADD_USES(((*(R17 *)rt_nil_check(l_ITEMS_2817))).f_B, &l_HEAD_2818, &l_TAIL_2819);
{
R17 * l_R_2820; memset(&l_R_2820, 0, sizeof l_R_2820);
l_R_2820 = ((*(R17 *)rt_nil_check(l_ITEMS_2817))).f_C;
for (;;) {
if ((l_R_2820 == NULL)) goto L_end2821;
{
{
R12 * l_Z_2822; memset(&l_Z_2822, 0, sizeof l_Z_2822);
l_Z_2822 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_2820))).f_NAME);
if (((l_Z_2822 == NULL) && (!r_LOCAL_MODULE_EXPORTS(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_C, ((*(R17 *)rt_nil_check(l_R_2820))).f_NAME))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_R_2820))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R17 *)rt_nil_check(l_R_2820))).f_NAME);
}
for (;;) {
if ((l_Z_2822 == NULL)) goto L_end2823;
{
if ((((*(R12 *)rt_nil_check(l_Z_2822))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2824; memset(&l_O_2824, 0, sizeof l_O_2824);
l_O_2824 = r_ORIGINAL(l_Z_2822);
R17 * l_U_2825; memset(&l_U_2825, 0, sizeof l_U_2825);
r_COMPUTE_USES(l_O_2824);
l_U_2825 = ((*(R12 *)rt_nil_check(l_O_2824))).f_USES;
for (;;) {
if ((l_U_2825 == NULL)) goto L_end2826;
{
if ((!r_IN_IDENTS(l_HEAD_2818, ((*(R17 *)rt_nil_check(l_U_2825))).f_NAME)))
{
{
R17 * l_N_2827; memset(&l_N_2827, 0, sizeof l_N_2827);
l_N_2827 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_U_2825))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_2827))).f_NAME, ((*(R17 *)rt_nil_check(l_U_2825))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2827))).f_IV = ((*(R17 *)rt_nil_check(l_U_2825))).f_IV;
r_ADD_LIST(l_N_2827, &l_HEAD_2818, &l_TAIL_2819);
}
}
l_U_2825 = ((*(R17 *)rt_nil_check(l_U_2825))).f_NEXT;
}
RT_B_TICK();
} L_end2826: ;
}
}
l_Z_2822 = r_LOOKUP_NEXT(l_Z_2822);
}
RT_B_TICK();
} L_end2823: ;
}
l_R_2820 = ((*(R17 *)rt_nil_check(l_R_2820))).f_NEXT;
}
RT_B_TICK();
} L_end2821: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_2818;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static rt_int r_LOCAL_MODULE_EXPORTS(R17 * p_B, R9 p_NAME) { RT_B_TICK(); 
R17 * l_M_2828; memset(&l_M_2828, 0, sizeof l_M_2828);
if ((p_B == NULL))
{
{ rt_int rv2829 = 0;
return rv2829; }
}
l_M_2828 = ((*(R17 *)rt_nil_check(p_B))).f_C;
for (;;) {
if ((l_M_2828 == NULL)) goto L_end2830;
{
if ((((*(R17 *)rt_nil_check(l_M_2828))).f_KIND == g_N_MODULE))
{
if ((((((*(R17 *)rt_nil_check(l_M_2828))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(l_M_2828))).f_B, p_NAME)) || r_LOCAL_MODULE_EXPORTS(((*(R17 *)rt_nil_check(l_M_2828))).f_C, p_NAME)))
{
{ rt_int rv2831 = 1;
return rv2831; }
}
}
l_M_2828 = ((*(R17 *)rt_nil_check(l_M_2828))).f_NEXT;
}
RT_B_TICK();
} L_end2830: ;
{ rt_int rv2832 = 0;
return rv2832; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_USES(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_2833; memset(&l_R_2833, 0, sizeof l_R_2833);
l_R_2833 = p_RS;
for (;;) {
if ((l_R_2833 == NULL)) goto L_end2834;
{
if ((((*(R17 *)rt_nil_check(l_R_2833))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_2833));
if ((!(((*(R17 *)rt_nil_check(l_R_2833))).f_E == NULL)))
{
r_IMPORTS_KNOWN(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2833))).f_E))).f_A, 0);
r_IMPORTS_KNOWN(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2833))).f_E))).f_B, 1);
r_INPUT_IMPORT_CONFLICT(((*(R17 *)rt_nil_check(l_R_2833))).f_E, ((*(R17 *)rt_nil_check(l_R_2833))).f_LINE);
}
}
l_R_2833 = ((*(R17 *)rt_nil_check(l_R_2833))).f_NEXT;
}
RT_B_TICK();
} L_end2834: ;
}
static void r_IMPORTS_KNOWN(R17 * p_L, rt_int p_INOUT) { RT_B_TICK(); 
R17 * l_P_2835; memset(&l_P_2835, 0, sizeof l_P_2835);
l_P_2835 = p_L;
for (;;) {
if ((l_P_2835 == NULL)) goto L_end2836;
{
{
R12 * l_V_2837; memset(&l_V_2837, 0, sizeof l_V_2837);
l_V_2837 = r_LOOKUP(((*(R17 *)rt_nil_check(l_P_2835))).f_NAME);
if ((!(l_V_2837 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_V_2837))).f_KIND == g_Y_VAR))
{
if ((((!r_CHECK_IMPORTED(l_V_2837, ((*(R17 *)rt_nil_check(l_P_2835))).f_LINE)) && p_INOUT) && (!((*(R12 *)rt_nil_check(l_V_2837))).f_INPUT)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_2835))).f_LINE, rt_str("imported for change, but only for input in the enclosing scope (4.1.1): ", 72), ((*(R17 *)rt_nil_check(l_P_2835))).f_NAME);
}
}
}
}
l_P_2835 = ((*(R17 *)rt_nil_check(l_P_2835))).f_NEXT;
}
RT_B_TICK();
} L_end2836: ;
}
static void r_INPUT_IMPORT_CONFLICT(R17 * p_ITEMS, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_2838; memset(&l_R_2838, 0, sizeof l_R_2838);
l_R_2838 = ((*(R17 *)rt_nil_check(p_ITEMS))).f_C;
for (;;) {
if ((l_R_2838 == NULL)) goto L_end2839;
{
{
R12 * l_Z_2840; memset(&l_Z_2840, 0, sizeof l_Z_2840);
l_Z_2840 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_2838))).f_NAME);
for (;;) {
if ((l_Z_2840 == NULL)) goto L_end2841;
{
if ((((*(R12 *)rt_nil_check(l_Z_2840))).f_KIND == g_Y_ROUTINE))
{
{
R17 * l_D_2842; memset(&l_D_2842, 0, sizeof l_D_2842);
l_D_2842 = ((*(R12 *)rt_nil_check(r_ORIGINAL(l_Z_2840)))).f_DECL;
if ((!(l_D_2842 == NULL)))
{
if (((((*(R17 *)rt_nil_check(l_D_2842))).f_KIND == g_N_ROUTINE) && (!(((*(R17 *)rt_nil_check(l_D_2842))).f_E == NULL))))
{
{
R17 * l_V_2843; memset(&l_V_2843, 0, sizeof l_V_2843);
l_V_2843 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_2842))).f_E))).f_B;
for (;;) {
if ((l_V_2843 == NULL)) goto L_end2844;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(p_ITEMS))).f_A, ((*(R17 *)rt_nil_check(l_V_2843))).f_NAME))
{
r_FAILT(p_LINE, rt_str("imported for input, and inout by an imported routine (4.3.1): ", 62), ((*(R17 *)rt_nil_check(l_V_2843))).f_NAME);
}
l_V_2843 = ((*(R17 *)rt_nil_check(l_V_2843))).f_NEXT;
}
RT_B_TICK();
} L_end2844: ;
}
}
}
}
}
l_Z_2840 = r_LOOKUP_NEXT(l_Z_2840);
}
RT_B_TICK();
} L_end2841: ;
}
l_R_2838 = ((*(R17 *)rt_nil_check(l_R_2838))).f_NEXT;
}
RT_B_TICK();
} L_end2839: ;
}
static void r_ADD_USES(R17 * p_L, R17 * *p_HEAD, R17 * *p_TAIL) { RT_B_TICK(); 
R17 * l_P_2845; memset(&l_P_2845, 0, sizeof l_P_2845);
l_P_2845 = p_L;
for (;;) {
if ((l_P_2845 == NULL)) goto L_end2846;
{
{
R12 * l_V_2847; memset(&l_V_2847, 0, sizeof l_V_2847);
l_V_2847 = r_LOOKUP(((*(R17 *)rt_nil_check(l_P_2845))).f_NAME);
R17 * l_N_2848; memset(&l_N_2848, 0, sizeof l_N_2848);
l_N_2848 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_P_2845))).f_LINE);
if ((l_V_2847 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_2845))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R17 *)rt_nil_check(l_P_2845))).f_NAME);
}
S_R9(&((*(R17 *)rt_nil_check(l_N_2848))).f_NAME, ((*(R17 *)rt_nil_check(l_P_2845))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2848))).f_IV = ((*(R12 *)rt_nil_check(l_V_2847))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_2847))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_2848, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_2845 = ((*(R17 *)rt_nil_check(l_P_2845))).f_NEXT;
}
RT_B_TICK();
} L_end2846: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_IS_2849; memset(&l_IS_2849, 0, sizeof l_IS_2849);
l_IS_2849 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R17 * l_U_2850; memset(&l_U_2850, 0, sizeof l_U_2850);
l_U_2850 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_2849 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R20 *)rt_nil_check(l_IS_2849))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_2850 == NULL)) goto L_end2851;
{
if ((!(((*(R17 *)rt_nil_check(l_U_2850))).f_IV == ((*(R20 *)rt_nil_check(l_IS_2849))).f_ID)))
{
if ((((*(R20 *)rt_nil_check(l_IS_2849))).f_IMPORTS == NULL))
{
r_FAIL2(p_LINE, rt_str("the routine ", 12), ((*(R12 *)rt_nil_check(p_Y))).f_NAME, rt_str(" uses the variable ", 19), ((*(R17 *)rt_nil_check(l_U_2850))).f_NAME, rt_str(": import one of them (4.1.1)", 28));
}
if ((!(((((((r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2849))).f_IMPORTS))).f_A, ((*(R17 *)rt_nil_check(l_U_2850))).f_NAME) || r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2849))).f_IMPORTS))).f_B, ((*(R17 *)rt_nil_check(l_U_2850))).f_NAME)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2849))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2849))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2849))).f_IMPORTS))).f_E, p_Y)) || ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL)) && r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2849))).f_IMPORTS))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))) || r_IMPORTED_ROUTINE_USES(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2849))).f_IMPORTS))).f_C, ((*(R17 *)rt_nil_check(l_U_2850))).f_NAME)))))
{
r_FAIL2(p_LINE, rt_str("the routine ", 12), ((*(R12 *)rt_nil_check(p_Y))).f_NAME, rt_str(" uses the variable ", 19), ((*(R17 *)rt_nil_check(l_U_2850))).f_NAME, rt_str(": import one of them (4.1.1)", 28));
}
}
l_U_2850 = ((*(R17 *)rt_nil_check(l_U_2850))).f_NEXT;
}
RT_B_TICK();
} L_end2851: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R17 * p_RS, R9 p_NAME) { RT_B_TICK(); 
R17 * l_R_2852; memset(&l_R_2852, 0, sizeof l_R_2852);
l_R_2852 = p_RS;
for (;;) {
if ((l_R_2852 == NULL)) goto L_end2853;
{
{
R12 * l_Z_2854; memset(&l_Z_2854, 0, sizeof l_Z_2854);
l_Z_2854 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_2852))).f_NAME);
for (;;) {
if ((l_Z_2854 == NULL)) goto L_end2855;
{
if ((((*(R12 *)rt_nil_check(l_Z_2854))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2856; memset(&l_O_2856, 0, sizeof l_O_2856);
l_O_2856 = r_ORIGINAL(l_Z_2854);
r_COMPUTE_USES(l_O_2856);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_2856))).f_USES, p_NAME))
{
{ rt_int rv2857 = 1;
return rv2857; }
}
}
}
l_Z_2854 = r_LOOKUP_NEXT(l_Z_2854);
}
RT_B_TICK();
} L_end2855: ;
}
l_R_2852 = ((*(R17 *)rt_nil_check(l_R_2852))).f_NEXT;
}
RT_B_TICK();
} L_end2853: ;
{ rt_int rv2858 = 0;
return rv2858; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R17 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2859; memset(&l_M_2859, 0, sizeof l_M_2859);
l_M_2859 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_2859 == NULL)) goto L_end2860;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_2859))).f_NAME))
{
{ rt_int rv2861 = 1;
return rv2861; }
}
l_M_2859 = ((*(R12 *)rt_nil_check(l_M_2859))).f_MODL;
}
RT_B_TICK();
} L_end2860: ;
{ rt_int rv2862 = 0;
return rv2862; }
rt_raise(RT_X_INIT);
}
static R9 r_BASE_PART(R9 p_N, rt_int p_P) { RT_B_TICK(); 
{ R9 rv2863 = r_MKN(rt_b_slice(r_STR(p_N, (p_N).f_LEN), rt_add(p_P, ((rt_int)1LL)), rt_sub((p_N).f_LEN, ((rt_int)1LL))));
return rv2863; }
rt_raise(RT_X_INIT);
}
static R9 r_BASE_NAME(R12 * p_Y) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R9 rv2864 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv2864; }
}
{ R9 rv2865 = r_BASE_PART(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN);
return rv2865; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R9 p_NAME) { RT_B_TICK(); 
R18 * l_C_2866; memset(&l_C_2866, 0, sizeof l_C_2866);
l_C_2866 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2866 == NULL)) goto L_end2867;
{
if ((((*(R18 *)rt_nil_check(l_C_2866))).f_KIND == ((rt_int)1LL)))
{
goto L_end2867;
}
if ((((*(R18 *)rt_nil_check(l_C_2866))).f_KIND == ((rt_int)3LL)))
{
{
R17 * l_H_2868; memset(&l_H_2868, 0, sizeof l_H_2868);
l_H_2868 = ((*(R18 *)rt_nil_check(l_C_2866))).f_HANDLERS;
for (;;) {
if ((l_H_2868 == NULL)) goto L_end2869;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_H_2868))).f_A, p_NAME))
{
{ rt_int rv2870 = 1;
return rv2870; }
}
l_H_2868 = ((*(R17 *)rt_nil_check(l_H_2868))).f_NEXT;
}
RT_B_TICK();
} L_end2869: ;
}
}
l_C_2866 = ((*(R18 *)rt_nil_check(l_C_2866))).f_NEXT;
}
RT_B_TICK();
} L_end2867: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R20 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv2871 = 1;
return rv2871; }
}
}
{ rt_int rv2872 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv2872; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R9 p_NAME) { RT_B_TICK(); 
R18 * l_C_2873; memset(&l_C_2873, 0, sizeof l_C_2873);
l_C_2873 = ((R18 *)rt_b_new(sizeof (R18)));
S_R18(&(*(R18 *)rt_nil_check(l_C_2873)), ({ R18 rc2874; memset(&rc2874, 0, sizeof rc2874);  rc2874.f_KIND = p_KIND; S_R9(&rc2874.f_NAME, p_NAME, 0); rc2874.f_HANDLERS = NULL; rc2874.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc2874; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_2873;
}
static void r_POP_CTX(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R18 * r_LEAVE(rt_int p_KIND) { RT_B_TICK(); 
R18 * l_C_2875; memset(&l_C_2875, 0, sizeof l_C_2875);
l_C_2875 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2875 == NULL)) goto L_end2876;
{
if ((((*(R18 *)rt_nil_check(l_C_2875))).f_KIND == p_KIND))
{
{ R18 * rv2877 = l_C_2875;
return rv2877; }
}
if ((((*(R18 *)rt_nil_check(l_C_2875))).f_KIND == ((rt_int)1LL)))
{
{ R18 * rv2878 = NULL;
return rv2878; }
}
if ((((*(R18 *)rt_nil_check(l_C_2875))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R18 *)rt_nil_check(l_C_2875))).f_NAME));
}
l_C_2875 = ((*(R18 *)rt_nil_check(l_C_2875))).f_NEXT;
}
RT_B_TICK();
} L_end2876: ;
{ R18 * rv2879 = NULL;
return rv2879; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { RT_B_TICK(); 
R18 * l_C_2880; memset(&l_C_2880, 0, sizeof l_C_2880);
l_C_2880 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_2881; memset(&l_N_2881, 0, sizeof l_N_2881);
l_N_2881 = ((rt_int)0LL);
for (;;) {
if ((l_C_2880 == NULL)) goto L_end2882;
{
if ((((*(R18 *)rt_nil_check(l_C_2880))).f_KIND == ((rt_int)1LL)))
{
goto L_end2882;
}
if ((((*(R18 *)rt_nil_check(l_C_2880))).f_KIND == ((rt_int)3LL)))
{
l_N_2881 = rt_add(l_N_2881, ((rt_int)1LL));
}
l_C_2880 = ((*(R18 *)rt_nil_check(l_C_2880))).f_NEXT;
}
RT_B_TICK();
} L_end2882: ;
{ rt_int rv2883 = l_N_2881;
return rv2883; }
rt_raise(RT_X_INIT);
}
static R9 r_EXC_NAME(R9 p_NAME) { RT_B_TICK(); 
R17 * l_N_2884; memset(&l_N_2884, 0, sizeof l_N_2884);
l_N_2884 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_2884 == NULL)) goto L_end2885;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_N_2884))).f_NAME, p_NAME))
{
{ R9 rv2886 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2886; }
}
l_N_2884 = ((*(R17 *)rt_nil_check(l_N_2884))).f_NEXT;
}
RT_B_TICK();
} L_end2885: ;
l_N_2884 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_2884))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2884))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_2884;
{ R9 rv2887 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv2887; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R17 * p_DECLS) { RT_B_TICK(); 
R17 * l_D_2888; memset(&l_D_2888, 0, sizeof l_D_2888);
l_D_2888 = p_DECLS;
for (;;) {
if ((l_D_2888 == NULL)) goto L_end2889;
{
if (((((*(R17 *)rt_nil_check(l_D_2888))).f_KIND == g_N_TYPE) || (((*(R17 *)rt_nil_check(l_D_2888))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_2890; memset(&l_Y_2890, 0, sizeof l_Y_2890);
l_Y_2890 = r_NEW_SYM(g_Y_TYPE, ((*(R17 *)rt_nil_check(l_D_2888))).f_NAME);
if ((((*(R17 *)rt_nil_check(l_D_2888))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_2890))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_2890))).f_DECL = l_D_2888;
r_DEFINE(l_Y_2890, ((*(R17 *)rt_nil_check(l_D_2888))).f_LINE);
if ((((*(R17 *)rt_nil_check(l_D_2888))).f_KIND == g_N_TYPE))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_2888))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_2888))).f_B))).f_A)))
{
((*(R7 *)rt_nil_check(g_W))).f_CHARSETS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_CHARSETS, ((rt_int)1LL));
}
}
}
}
l_D_2888 = ((*(R17 *)rt_nil_check(l_D_2888))).f_NEXT;
}
RT_B_TICK();
} L_end2889: ;
l_D_2888 = p_DECLS;
for (;;) {
if ((l_D_2888 == NULL)) goto L_end2891;
{
if (((((*(R17 *)rt_nil_check(l_D_2888))).f_KIND == g_N_TYPE) || (((*(R17 *)rt_nil_check(l_D_2888))).f_KIND == g_N_REPTYPE)))
{
{
R17 * l_SEEN_2892; memset(&l_SEEN_2892, 0, sizeof l_SEEN_2892);
l_SEEN_2892 = NULL;
rt_int l_FOUND_2893; memset(&l_FOUND_2893, 0, sizeof l_FOUND_2893);
l_FOUND_2893 = 0;
r_REFERS(((*(R17 *)rt_nil_check(l_D_2888))).f_B, C_R9(((*(R17 *)rt_nil_check(l_D_2888))).f_NAME), p_DECLS, &l_SEEN_2892, &l_FOUND_2893);
if (l_FOUND_2893)
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_2888))).f_LINE, rt_str("a circular type declaration (3.12.1, 3.12.3): ", 46), ((*(R17 *)rt_nil_check(l_D_2888))).f_NAME);
}
}
{
R17 * l_F_2894; memset(&l_F_2894, 0, sizeof l_F_2894);
l_F_2894 = ((*(R17 *)rt_nil_check(l_D_2888))).f_A;
for (;;) {
if ((l_F_2894 == NULL)) goto L_end2895;
{
if (((((*(R17 *)rt_nil_check(l_F_2894))).f_IV == ((rt_int)1LL)) && (((*(R17 *)rt_nil_check(l_D_2888))).f_KIND == g_N_TYPE)))
{
{
R17 * l_N_2896; memset(&l_N_2896, 0, sizeof l_N_2896);
l_N_2896 = ((*(R17 *)rt_nil_check(l_F_2894))).f_A;
for (;;) {
if ((l_N_2896 == NULL)) goto L_end2897;
{
if (r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_D_2888))).f_B, ((*(R17 *)rt_nil_check(l_N_2896))).f_NAME))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_2888))).f_LINE, rt_str("a TAG formal is only a tag-name or an argument for a TAG formal (3.12.1): ", 74), ((*(R17 *)rt_nil_check(l_N_2896))).f_NAME);
}
l_N_2896 = ((*(R17 *)rt_nil_check(l_N_2896))).f_NEXT;
}
RT_B_TICK();
} L_end2897: ;
}
}
if ((!(((*(R17 *)rt_nil_check(l_F_2894))).f_B == NULL)))
{
if (r_NAMES_VARIABLE(((*(R17 *)rt_nil_check(l_F_2894))).f_B, p_DECLS))
{
r_FAIL(((*(R17 *)rt_nil_check(l_F_2894))).f_LINE, rt_str("the type-arguments in the type of a formal must be manifest (3.12.1)", 68));
}
}
l_F_2894 = ((*(R17 *)rt_nil_check(l_F_2894))).f_NEXT;
}
RT_B_TICK();
} L_end2895: ;
}
}
l_D_2888 = ((*(R17 *)rt_nil_check(l_D_2888))).f_NEXT;
}
RT_B_TICK();
} L_end2891: ;
l_D_2888 = p_DECLS;
for (;;) {
if ((l_D_2888 == NULL)) goto L_end2898;
{
if ((((*(R17 *)rt_nil_check(l_D_2888))).f_KIND == g_N_TYPE))
{
{
R17 * l_F_2899; memset(&l_F_2899, 0, sizeof l_F_2899);
l_F_2899 = ((*(R17 *)rt_nil_check(l_D_2888))).f_A;
for (;;) {
if ((l_F_2899 == NULL)) goto L_end2900;
{
if (((((*(R17 *)rt_nil_check(l_F_2899))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(l_F_2899))).f_B == NULL))))
{
{
R22 * l_FT_2901; memset(&l_FT_2901, 0, sizeof l_FT_2901);
l_FT_2901 = r_REAL_TYPE(r_RESOLVE(((*(R17 *)rt_nil_check(l_F_2899))).f_B));
if (((!r_IS_SCALAR(l_FT_2901)) || (!(((*(R22 *)rt_nil_check(l_FT_2901))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_F_2899))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
}
l_F_2899 = ((*(R17 *)rt_nil_check(l_F_2899))).f_NEXT;
}
RT_B_TICK();
} L_end2900: ;
}
}
l_D_2888 = ((*(R17 *)rt_nil_check(l_D_2888))).f_NEXT;
}
RT_B_TICK();
} L_end2898: ;
}
static void r_REFERS(R17 * p_L, R9 p_TARGET, R17 * p_DECLS, R17 * *p_SEEN, rt_int *p_FOUND) { RT_B_TICK(); 
R17 * l_N_2902; memset(&l_N_2902, 0, sizeof l_N_2902);
l_N_2902 = p_L;
for (;;) {
if (((l_N_2902 == NULL) || (*p_FOUND))) goto L_end2903;
{
if (((((*(R17 *)rt_nil_check(l_N_2902))).f_KIND == g_TS_NAME) || (((*(R17 *)rt_nil_check(l_N_2902))).f_KIND == g_N_REP)))
{
if ((!r_TEQS(((*(R17 *)rt_nil_check(l_N_2902))).f_NAME, rt_str("PTR", 3))))
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_N_2902))).f_NAME, p_TARGET))
{
(*p_FOUND) = 1;
return;
}
if ((!r_IN_IDENTS((*p_SEEN), ((*(R17 *)rt_nil_check(l_N_2902))).f_NAME)))
{
{
R17 * l_M_2904; memset(&l_M_2904, 0, sizeof l_M_2904);
l_M_2904 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_N_2902))).f_LINE);
R17 * l_D_2905; memset(&l_D_2905, 0, sizeof l_D_2905);
l_D_2905 = p_DECLS;
S_R9(&((*(R17 *)rt_nil_check(l_M_2904))).f_NAME, ((*(R17 *)rt_nil_check(l_N_2902))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_M_2904))).f_NEXT = (*p_SEEN);
(*p_SEEN) = l_M_2904;
for (;;) {
if ((l_D_2905 == NULL)) goto L_end2906;
{
if (((((((*(R17 *)rt_nil_check(l_D_2905))).f_KIND == g_N_TYPE) || (((*(R17 *)rt_nil_check(l_D_2905))).f_KIND == g_N_REPTYPE))) && r_TEQ(((*(R17 *)rt_nil_check(l_D_2905))).f_NAME, ((*(R17 *)rt_nil_check(l_N_2902))).f_NAME)))
{
r_REFERS(((*(R17 *)rt_nil_check(l_D_2905))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
l_D_2905 = ((*(R17 *)rt_nil_check(l_D_2905))).f_NEXT;
}
RT_B_TICK();
} L_end2906: ;
}
}
r_REFERS(((*(R17 *)rt_nil_check(l_N_2902))).f_A, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_2902))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_2902))).f_C, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
}
else
{
r_REFERS(((*(R17 *)rt_nil_check(l_N_2902))).f_A, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_2902))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_2902))).f_C, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_2902))).f_D, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
l_N_2902 = ((*(R17 *)rt_nil_check(l_N_2902))).f_NEXT;
}
RT_B_TICK();
} L_end2903: ;
}
static rt_int r_TAG_MISUSED(R17 * p_L, R9 p_NAME) { RT_B_TICK(); 
R17 * l_N_2907; memset(&l_N_2907, 0, sizeof l_N_2907);
l_N_2907 = p_L;
for (;;) {
if ((l_N_2907 == NULL)) goto L_end2908;
{
if ((((*(R17 *)rt_nil_check(l_N_2907))).f_KIND == g_TS_NAME))
{
{
R17 * l_A_2909; memset(&l_A_2909, 0, sizeof l_A_2909);
l_A_2909 = ((*(R17 *)rt_nil_check(l_N_2907))).f_A;
for (;;) {
if ((l_A_2909 == NULL)) goto L_end2910;
{
if ((!((((((((*(R17 *)rt_nil_check(l_A_2909))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_A_2909))).f_KIND == g_TS_NAME))) && r_TEQ(((*(R17 *)rt_nil_check(l_A_2909))).f_NAME, p_NAME)) && (((*(R17 *)rt_nil_check(l_A_2909))).f_A == NULL)))))
{
if (r_TAG_MISUSED1(l_A_2909, p_NAME))
{
{ rt_int rv2911 = 1;
return rv2911; }
}
}
l_A_2909 = ((*(R17 *)rt_nil_check(l_A_2909))).f_NEXT;
}
RT_B_TICK();
} L_end2910: ;
}
if (((r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_N_2907))).f_B, p_NAME) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_N_2907))).f_C, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_N_2907))).f_E, p_NAME)))
{
{ rt_int rv2912 = 1;
return rv2912; }
}
}
else if (r_TAG_MISUSED1(l_N_2907, p_NAME))
{
{ rt_int rv2913 = 1;
return rv2913; }
}
l_N_2907 = ((*(R17 *)rt_nil_check(l_N_2907))).f_NEXT;
}
RT_B_TICK();
} L_end2908: ;
{ rt_int rv2914 = 0;
return rv2914; }
rt_raise(RT_X_INIT);
}
static rt_int r_TAG_MISUSED1(R17 * p_N, R9 p_NAME) { RT_B_TICK(); 
rt_int l_K_2915; memset(&l_K_2915, 0, sizeof l_K_2915);
l_K_2915 = ((*(R17 *)rt_nil_check(p_N))).f_KIND;
if ((l_K_2915 == g_TS_NAME))
{
{ rt_int rv2916 = (r_TAG_MISUSED(p_N, p_NAME) && 1);
return rv2916; }
}
if ((((((l_K_2915 == g_N_NAME) || (l_K_2915 == g_N_ENUMLIT)) || (l_K_2915 == g_N_APPLY))) && r_TEQ(((*(R17 *)rt_nil_check(p_N))).f_NAME, p_NAME)))
{
{ rt_int rv2917 = 1;
return rv2917; }
}
{ rt_int rv2918 = ((((r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_A, p_NAME) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_B, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_C, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_D, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_E, p_NAME));
return rv2918; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_VARIABLE(R17 * p_L, R17 * p_DECLS) { RT_B_TICK(); 
{ rt_int rv2919 = r_NAMES_VARIABLE_BUT(p_L, p_DECLS, NULL);
return rv2919; }
rt_raise(RT_X_INIT);
}
static void r_GEN_NAMES(R17 * p_L, R17 * *p_HEAD) { RT_B_TICK(); 
R17 * l_N_2920; memset(&l_N_2920, 0, sizeof l_N_2920);
l_N_2920 = p_L;
for (;;) {
if ((l_N_2920 == NULL)) goto L_end2921;
{
if (((((((*(R17 *)rt_nil_check(l_N_2920))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_N_2920))).f_KIND == g_N_PARAM))) && ((((*(R17 *)rt_nil_check(l_N_2920))).f_NAME).f_LEN > ((rt_int)0LL))))
{
{
R17 * l_M_2922; memset(&l_M_2922, 0, sizeof l_M_2922);
l_M_2922 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_N_2920))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_M_2922))).f_NAME, ((*(R17 *)rt_nil_check(l_N_2920))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_M_2922))).f_NEXT = (*p_HEAD);
(*p_HEAD) = l_M_2922;
}
}
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_2920))).f_A, &(*p_HEAD));
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_2920))).f_B, &(*p_HEAD));
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_2920))).f_C, &(*p_HEAD));
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_2920))).f_D, &(*p_HEAD));
l_N_2920 = ((*(R17 *)rt_nil_check(l_N_2920))).f_NEXT;
}
RT_B_TICK();
} L_end2921: ;
}
static rt_int r_NAMES_VARIABLE_BUT(R17 * p_L, R17 * p_DECLS, R17 * p_EXCL) { RT_B_TICK(); 
R17 * l_N_2923; memset(&l_N_2923, 0, sizeof l_N_2923);
l_N_2923 = p_L;
for (;;) {
if ((l_N_2923 == NULL)) goto L_end2924;
{
if (((((*(R17 *)rt_nil_check(l_N_2923))).f_KIND == g_N_NAME) && r_IN_IDENTS(p_EXCL, ((*(R17 *)rt_nil_check(l_N_2923))).f_NAME)))
{
}
else if ((((*(R17 *)rt_nil_check(l_N_2923))).f_KIND == g_N_NAME))
{
{
R17 * l_D_2925; memset(&l_D_2925, 0, sizeof l_D_2925);
l_D_2925 = p_DECLS;
R12 * l_Y_2926; memset(&l_Y_2926, 0, sizeof l_Y_2926);
l_Y_2926 = r_LOOKUP(((*(R17 *)rt_nil_check(l_N_2923))).f_NAME);
for (;;) {
if ((l_D_2925 == NULL)) goto L_end2927;
{
if (((((*(R17 *)rt_nil_check(l_D_2925))).f_KIND == g_N_VAR) && r_IN_IDENTS(((*(R17 *)rt_nil_check(l_D_2925))).f_A, ((*(R17 *)rt_nil_check(l_N_2923))).f_NAME)))
{
{ rt_int rv2928 = 1;
return rv2928; }
}
l_D_2925 = ((*(R17 *)rt_nil_check(l_D_2925))).f_NEXT;
}
RT_B_TICK();
} L_end2927: ;
if ((!(l_Y_2926 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_2926))).f_KIND == g_Y_VAR) && (!((*(R12 *)rt_nil_check(l_Y_2926))).f_INPUT)))
{
{ rt_int rv2929 = 1;
return rv2929; }
}
}
}
}
else if ((((r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_2923))).f_A, p_DECLS, p_EXCL) || r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_2923))).f_B, p_DECLS, p_EXCL)) || r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_2923))).f_C, p_DECLS, p_EXCL)) || r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_2923))).f_D, p_DECLS, p_EXCL)))
{
{ rt_int rv2930 = 1;
return rv2930; }
}
l_N_2923 = ((*(R17 *)rt_nil_check(l_N_2923))).f_NEXT;
}
RT_B_TICK();
} L_end2924: ;
{ rt_int rv2931 = 0;
return rv2931; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_PRINTING_CHAR(R17 * p_L) { RT_B_TICK(); 
R17 * l_P_2932; memset(&l_P_2932, 0, sizeof l_P_2932);
l_P_2932 = p_L;
for (;;) {
if ((l_P_2932 == NULL)) goto L_end2933;
{
if (((((*(R17 *)rt_nil_check(l_P_2932))).f_NAME).f_LEN >= ((rt_int)3LL)))
{
if (rt_b_eq(r_STR(((*(R17 *)rt_nil_check(l_P_2932))).f_NAME, ((rt_int)2LL)), rt_str("\\'", 2)))
{
{ rt_int rv2934 = 1;
return rv2934; }
}
}
l_P_2932 = ((*(R17 *)rt_nil_check(l_P_2932))).f_NEXT;
}
RT_B_TICK();
} L_end2933: ;
{ rt_int rv2935 = 0;
return rv2935; }
rt_raise(RT_X_INIT);
}
static R22 * r_DEFAULT_CHARSET(rt_int p_LINE) { RT_B_TICK(); 
R12 * l_A_2936; memset(&l_A_2936, 0, sizeof l_A_2936);
l_A_2936 = r_LOOKUP(r_MKN(rt_str("ASCII", 5)));
R22 * l_FOUND_2937; memset(&l_FOUND_2937, 0, sizeof l_FOUND_2937);
l_FOUND_2937 = NULL;
rt_int l_N_2938; memset(&l_N_2938, 0, sizeof l_N_2938);
l_N_2938 = ((rt_int)0LL);
R12 * l_Y_2939; memset(&l_Y_2939, 0, sizeof l_Y_2939);
l_Y_2939 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
if (((((*(R7 *)rt_nil_check(g_W))).f_CHARSETS == ((rt_int)0LL)) && (!(l_A_2936 == NULL))))
{
if (((((*(R12 *)rt_nil_check(l_A_2936))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_A_2936))).f_DECL == NULL)))
{
{ R22 * rv2940 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2940; }
}
}
for (;;) {
if ((l_Y_2939 == NULL)) goto L_end2941;
{
if (((((*(R12 *)rt_nil_check(l_Y_2939))).f_KIND == g_Y_TYPE) && ((((*(R12 *)rt_nil_check(l_Y_2939))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((r_LOOKUP(((*(R12 *)rt_nil_check(l_Y_2939))).f_NAME) == l_Y_2939))
{
{
R22 * l_T_2942; memset(&l_T_2942, 0, sizeof l_T_2942);
l_T_2942 = NULL;
if ((((*(R12 *)rt_nil_check(l_Y_2939))).f_DECL == NULL))
{
l_T_2942 = ((*(R12 *)rt_nil_check(l_Y_2939))).f_T;
}
else if (((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2939))).f_DECL))).f_KIND == g_N_TYPE) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2939))).f_DECL))).f_A == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2939))).f_DECL))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2939))).f_DECL))).f_B))).f_A)))
{
l_T_2942 = r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_2939))).f_NAME, p_LINE);
}
}
if ((!(l_T_2942 == NULL)))
{
l_T_2942 = r_REAL_TYPE(l_T_2942);
if ((((*(R22 *)rt_nil_check(l_T_2942))).f_KIND == g_T_ENUM))
{
if ((r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2942))).f_BASE))).f_LITS) && (!(((*(R22 *)rt_nil_check(l_T_2942))).f_BASE == l_FOUND_2937))))
{
if ((!(l_FOUND_2937 == NULL)))
{
r_FAIL(p_LINE, rt_b_cat(rt_str("two character sets are available here: the literal needs ", 57), rt_str("a charset-name (3.7.2)", 22)));
}
l_FOUND_2937 = ((*(R22 *)rt_nil_check(l_T_2942))).f_BASE;
}
}
}
}
}
}
l_Y_2939 = ((*(R12 *)rt_nil_check(l_Y_2939))).f_SNEXT;
}
RT_B_TICK();
} L_end2941: ;
if ((l_FOUND_2937 == NULL))
{
r_FAIL(p_LINE, rt_str("no character set is available for the literal (3.7.2)", 53));
}
{ R22 * rv2943 = l_FOUND_2937;
return rv2943; }
rt_raise(RT_X_INIT);
}
static R22 * r_CHARSET_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_R_2944; memset(&l_R_2944, 0, sizeof l_R_2944);
l_R_2944 = r_REAL_TYPE(p_T);
if ((((*(R22 *)rt_nil_check(l_R_2944))).f_BASE == NULL))
{
{ R22 * rv2945 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv2945; }
}
{ R22 * rv2946 = ((*(R22 *)rt_nil_check(l_R_2944))).f_BASE;
return rv2946; }
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
R17 * l_S_2947; memset(&l_S_2947, 0, sizeof l_S_2947);
l_S_2947 = p_S0;
for (;;) {
if ((l_S_2947 == NULL)) goto L_end2948;
{
{
R17 * l_L_2949; memset(&l_L_2949, 0, sizeof l_L_2949);
l_L_2949 = l_S_2947;
for (;;) {
if ((!(((*(R17 *)rt_nil_check(l_L_2949))).f_KIND == g_N_LABELED))) goto L_end2950;
{
{
R12 * l_Y_2951; memset(&l_Y_2951, 0, sizeof l_Y_2951);
l_Y_2951 = r_NEW_SYM(g_Y_LABEL, ((*(R17 *)rt_nil_check(l_L_2949))).f_NAME);
S_R9(&((*(R12 *)rt_nil_check(l_Y_2951))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME_T(r_CID(((*(R17 *)rt_nil_check(l_L_2949))).f_NAME))), 0);
((*(R12 *)rt_nil_check(l_Y_2951))).f_MV = r_GUARDS();
r_DEFINE(l_Y_2951, ((*(R17 *)rt_nil_check(l_L_2949))).f_LINE);
}
l_L_2949 = ((*(R17 *)rt_nil_check(l_L_2949))).f_A;
}
RT_B_TICK();
} L_end2950: ;
}
l_S_2947 = ((*(R17 *)rt_nil_check(l_S_2947))).f_NEXT;
}
RT_B_TICK();
} L_end2948: ;
}
static void r_BODY(R17 * p_B) { RT_B_TICK(); 
R17 * l_D_2952; memset(&l_D_2952, 0, sizeof l_D_2952);
l_D_2952 = ((*(R17 *)rt_nil_check(p_B))).f_A;
R17 * l_S_2953; memset(&l_S_2953, 0, sizeof l_S_2953);
l_S_2953 = ((*(R17 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R17 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_2952 == NULL)) goto L_end2954;
{
if (((((*(R17 *)rt_nil_check(l_D_2952))).f_KIND == g_N_VAR) || (((*(R17 *)rt_nil_check(l_D_2952))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_2952);
}
l_D_2952 = ((*(R17 *)rt_nil_check(l_D_2952))).f_NEXT;
}
RT_B_TICK();
} L_end2954: ;
r_DECLARE_LABELS(((*(R17 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_2953 == NULL)) goto L_end2955;
{
r_STMT(l_S_2953);
l_S_2953 = ((*(R17 *)rt_nil_check(l_S_2953))).f_NEXT;
}
RT_B_TICK();
} L_end2955: ;
}
static void r_OPEN_BODY(R17 * p_B) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R17 * p_S, R17 * p_BODY_NODE, R17 * p_HANDLERS) { RT_B_TICK(); 
R9 l_F_2956; memset(&l_F_2956, 0, sizeof l_F_2956);
S_R9(&l_F_2956, r_NEW_NAME(rt_str("xf", 2)), 0);
R17 * l_H_2957; memset(&l_H_2957, 0, sizeof l_H_2957);
l_H_2957 = p_HANDLERS;
R9 l_WORD_2958; memset(&l_WORD_2958, 0, sizeof l_WORD_2958);
S_R9(&l_WORD_2958, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_2956, l_F_2956));
r_PUSH_CTX(((rt_int)3LL), l_F_2956);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_2956, l_F_2956, l_F_2956));
for (;;) {
if ((l_H_2957 == NULL)) goto L_end2959;
{
{
R17 * l_N_2960; memset(&l_N_2960, 0, sizeof l_N_2960);
l_N_2960 = ((*(R17 *)rt_nil_check(l_H_2957))).f_A;
R9 l_COND_2961; memset(&l_COND_2961, 0, sizeof l_COND_2961);
S_R9(&l_COND_2961, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_2960 == NULL)) goto L_end2962;
{
if ((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_N_2960))).f_NEXT, ((*(R17 *)rt_nil_check(l_N_2960))).f_NAME) || r_IN_HANDLERS(((*(R17 *)rt_nil_check(l_H_2957))).f_NEXT, ((*(R17 *)rt_nil_check(l_N_2960))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_N_2960))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R17 *)rt_nil_check(l_N_2960))).f_NAME);
}
S_R9(&l_COND_2961, r_FMT3(rt_str("@ || @x == @", 12), l_COND_2961, l_F_2956, r_EXC_NAME(((*(R17 *)rt_nil_check(l_N_2960))).f_NAME)), 0);
l_N_2960 = ((*(R17 *)rt_nil_check(l_N_2960))).f_NEXT;
}
RT_B_TICK();
} L_end2962: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_2958, l_COND_2961));
S_R9(&l_WORD_2958, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_2956, rt_str("x", 1)));
r_OPEN_BODY(((*(R17 *)rt_nil_check(l_H_2957))).f_B);
r_POP_CTX();
}
l_H_2957 = ((*(R17 *)rt_nil_check(l_H_2957))).f_NEXT;
}
RT_B_TICK();
} L_end2959: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_2956));
}
static void r_INTERFERENCE(R17 * p_S) { RT_B_TICK(); 
rt_int l_K_2963; memset(&l_K_2963, 0, sizeof l_K_2963);
l_K_2963 = ((*(R17 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_2963 == g_N_ASSIGN))
{
{
R17 * l_NAMES_2964; memset(&l_NAMES_2964, 0, sizeof l_NAMES_2964);
l_NAMES_2964 = NULL;
R17 * l_CALLS_2965; memset(&l_CALLS_2965, 0, sizeof l_CALLS_2965);
l_CALLS_2965 = NULL;
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_S))).f_A, &l_NAMES_2964, &l_CALLS_2965);
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_S))).f_B, &l_NAMES_2964, &l_CALLS_2965);
r_CHECK_INTERFERENCE(l_NAMES_2964, l_CALLS_2965, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 0);
}
}
else if ((l_K_2963 == g_N_CALL))
{
{
R17 * l_NAMES_2966; memset(&l_NAMES_2966, 0, sizeof l_NAMES_2966);
l_NAMES_2966 = NULL;
R17 * l_CALLS_2967; memset(&l_CALLS_2967, 0, sizeof l_CALLS_2967);
l_CALLS_2967 = NULL;
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_S))).f_A, &l_NAMES_2966, &l_CALLS_2967);
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_S))).f_B, &l_NAMES_2966, &l_CALLS_2967);
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_S))).f_C, &l_NAMES_2966, &l_CALLS_2967);
r_CHECK_INTERFERENCE(l_NAMES_2966, l_CALLS_2967, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 0);
}
}
else if (((l_K_2963 == g_N_RETURN) || (l_K_2963 == g_N_ASSERT)))
{
if ((!(((*(R17 *)rt_nil_check(p_S))).f_A == NULL)))
{
{
R17 * l_NAMES_2968; memset(&l_NAMES_2968, 0, sizeof l_NAMES_2968);
l_NAMES_2968 = NULL;
R17 * l_CALLS_2969; memset(&l_CALLS_2969, 0, sizeof l_CALLS_2969);
l_CALLS_2969 = NULL;
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_S))).f_A, &l_NAMES_2968, &l_CALLS_2969);
r_CHECK_INTERFERENCE(l_NAMES_2968, l_CALLS_2969, ((*(R17 *)rt_nil_check(p_S))).f_LINE, (l_K_2963 == g_N_ASSERT));
}
}
}
else if ((l_K_2963 == g_N_IF))
{
{
R17 * l_ARM_2970; memset(&l_ARM_2970, 0, sizeof l_ARM_2970);
l_ARM_2970 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_ARM_2970 == NULL)) goto L_end2971;
{
{
R17 * l_NAMES_2972; memset(&l_NAMES_2972, 0, sizeof l_NAMES_2972);
l_NAMES_2972 = NULL;
R17 * l_CALLS_2973; memset(&l_CALLS_2973, 0, sizeof l_CALLS_2973);
l_CALLS_2973 = NULL;
r_COLLECT_REFS(((*(R17 *)rt_nil_check(l_ARM_2970))).f_A, &l_NAMES_2972, &l_CALLS_2973);
r_CHECK_INTERFERENCE(l_NAMES_2972, l_CALLS_2973, ((*(R17 *)rt_nil_check(l_ARM_2970))).f_LINE, 0);
}
l_ARM_2970 = ((*(R17 *)rt_nil_check(l_ARM_2970))).f_NEXT;
}
RT_B_TICK();
} L_end2971: ;
}
}
}
static void r_COLLECT_LIST(R17 * p_L, R17 * *p_NAMES, R17 * *p_CALLS) { RT_B_TICK(); 
R17 * l_N_2974; memset(&l_N_2974, 0, sizeof l_N_2974);
l_N_2974 = p_L;
for (;;) {
if ((l_N_2974 == NULL)) goto L_end2975;
{
r_COLLECT_REFS(l_N_2974, &(*p_NAMES), &(*p_CALLS));
l_N_2974 = ((*(R17 *)rt_nil_check(l_N_2974))).f_NEXT;
}
RT_B_TICK();
} L_end2975: ;
}
static void r_COLLECT_REFS(R17 * p_E, R17 * *p_NAMES, R17 * *p_CALLS) { RT_B_TICK(); 
rt_int l_K_2976; memset(&l_K_2976, 0, sizeof l_K_2976);
if ((p_E == NULL))
{
return;
}
l_K_2976 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_2976 == g_N_NAME))
{
{
R12 * l_Y_2977; memset(&l_Y_2977, 0, sizeof l_Y_2977);
l_Y_2977 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2977 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2977))).f_KIND == g_Y_VAR))
{
(*p_NAMES) = r_NAME_REF(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2977))).f_OWNER, NULL, (*p_NAMES));
}
}
}
}
else if ((l_K_2976 == g_N_APPLY))
{
{
R12 * l_Y_2978; memset(&l_Y_2978, 0, sizeof l_Y_2978);
l_Y_2978 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2978 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2978))).f_KIND == g_Y_VAR))
{
(*p_NAMES) = r_NAME_REF(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2978))).f_OWNER, NULL, (*p_NAMES));
}
else if ((((*(R12 *)rt_nil_check(l_Y_2978))).f_KIND == g_Y_ROUTINE))
{
(*p_CALLS) = r_NAME_REF(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((rt_int)0LL), p_E, (*p_CALLS));
}
}
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_B, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_C, &(*p_NAMES), &(*p_CALLS));
}
}
else if ((((((l_K_2976 == g_N_FIELD) || (l_K_2976 == g_N_DEREF)) || (l_K_2976 == g_N_UNOP)) || (l_K_2976 == g_N_PAREN)) || (l_K_2976 == g_N_QUAL)))
{
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
}
else if (((((l_K_2976 == g_N_INDEX) || (l_K_2976 == g_N_SUBSTR)) || (l_K_2976 == g_N_BINOP)) || (l_K_2976 == g_N_IN)))
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
else if ((l_K_2976 == g_N_RECCONS))
{
{
R17 * l_F_2979; memset(&l_F_2979, 0, sizeof l_F_2979);
l_F_2979 = ((*(R17 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_F_2979 == NULL)) goto L_end2980;
{
r_COLLECT_REFS(((*(R17 *)rt_nil_check(l_F_2979))).f_A, &(*p_NAMES), &(*p_CALLS));
l_F_2979 = ((*(R17 *)rt_nil_check(l_F_2979))).f_NEXT;
}
RT_B_TICK();
} L_end2980: ;
}
}
else if ((l_K_2976 == g_N_ARRCONS))
{
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
}
}
static R17 * r_NAME_REF(R9 p_NAME, rt_int p_OWNER, R17 * p_A, R17 * p_L) { RT_B_TICK(); 
R17 * l_N_2981; memset(&l_N_2981, 0, sizeof l_N_2981);
l_N_2981 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_2981))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2981))).f_IV = p_OWNER;
((*(R17 *)rt_nil_check(l_N_2981))).f_A = p_A;
((*(R17 *)rt_nil_check(l_N_2981))).f_NEXT = p_L;
{ R17 * rv2982 = l_N_2981;
return rv2982; }
rt_raise(RT_X_INIT);
}
static R17 * r_ROUTINE_DATA(R9 p_NAME, rt_int p_INOUT) { RT_B_TICK(); 
R12 * l_Y_2983; memset(&l_Y_2983, 0, sizeof l_Y_2983);
l_Y_2983 = r_LOOKUP(p_NAME);
R17 * l_R_2984; memset(&l_R_2984, 0, sizeof l_R_2984);
l_R_2984 = NULL;
rt_int l_FIRST_2985; memset(&l_FIRST_2985, 0, sizeof l_FIRST_2985);
l_FIRST_2985 = 1;
for (;;) {
if ((l_Y_2983 == NULL)) goto L_end2986;
{
if ((((*(R12 *)rt_nil_check(l_Y_2983))).f_KIND == g_Y_ROUTINE))
{
{
R17 * l_D_2987; memset(&l_D_2987, 0, sizeof l_D_2987);
l_D_2987 = r_DATA_OF(r_ORIGINAL(l_Y_2983), p_INOUT, ((rt_int)0LL));
if (l_FIRST_2985)
{
l_R_2984 = l_D_2987;
l_FIRST_2985 = 0;
}
else
{
l_R_2984 = r_INTERSECT_REFS(l_R_2984, l_D_2987);
}
}
}
else if (((!(((*(R12 *)rt_nil_check(l_Y_2983))).f_KIND == g_Y_ROUTINE)) && (!l_FIRST_2985)))
{
}
l_Y_2983 = r_LOOKUP_NEXT(l_Y_2983);
}
RT_B_TICK();
} L_end2986: ;
{ R17 * rv2988 = l_R_2984;
return rv2988; }
rt_raise(RT_X_INIT);
}
static R17 * r_DATA_OF(R12 * p_Y, rt_int p_INOUT, rt_int p_DEPTH) { RT_B_TICK(); 
R17 * l_R_2989; memset(&l_R_2989, 0, sizeof l_R_2989);
l_R_2989 = NULL;
if (((((*(R12 *)rt_nil_check(p_Y))).f_DECL == NULL) || (p_DEPTH > ((rt_int)20LL))))
{
{ R17 * rv2990 = NULL;
return rv2990; }
}
if ((!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_KIND == g_N_ROUTINE)))
{
{ R17 * rv2991 = NULL;
return rv2991; }
}
r_COMPUTE_USES(p_Y);
if ((!p_INOUT))
{
{
R17 * l_U_2992; memset(&l_U_2992, 0, sizeof l_U_2992);
l_U_2992 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_2992 == NULL)) goto L_end2993;
{
l_R_2989 = r_NAME_REF(((*(R17 *)rt_nil_check(l_U_2992))).f_NAME, ((*(R17 *)rt_nil_check(l_U_2992))).f_IV, NULL, l_R_2989);
l_U_2992 = ((*(R17 *)rt_nil_check(l_U_2992))).f_NEXT;
}
RT_B_TICK();
} L_end2993: ;
}
{ R17 * rv2994 = l_R_2989;
return rv2994; }
}
if ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E == NULL))
{
{ R17 * rv2995 = NULL;
return rv2995; }
}
{
R17 * l_U_2996; memset(&l_U_2996, 0, sizeof l_U_2996);
l_U_2996 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_2996 == NULL)) goto L_end2997;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E))).f_B, ((*(R17 *)rt_nil_check(l_U_2996))).f_NAME))
{
l_R_2989 = r_NAME_REF(((*(R17 *)rt_nil_check(l_U_2996))).f_NAME, ((*(R17 *)rt_nil_check(l_U_2996))).f_IV, NULL, l_R_2989);
}
l_U_2996 = ((*(R17 *)rt_nil_check(l_U_2996))).f_NEXT;
}
RT_B_TICK();
} L_end2997: ;
}
{
R17 * l_C_2998; memset(&l_C_2998, 0, sizeof l_C_2998);
l_C_2998 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E))).f_C;
for (;;) {
if ((l_C_2998 == NULL)) goto L_end2999;
{
{
R12 * l_Z_3000; memset(&l_Z_3000, 0, sizeof l_Z_3000);
l_Z_3000 = r_LOOKUP(((*(R17 *)rt_nil_check(l_C_2998))).f_NAME);
for (;;) {
if ((l_Z_3000 == NULL)) goto L_end3001;
{
if ((((*(R12 *)rt_nil_check(l_Z_3000))).f_KIND == g_Y_ROUTINE))
{
{
R17 * l_D_3002; memset(&l_D_3002, 0, sizeof l_D_3002);
l_D_3002 = r_DATA_OF(r_ORIGINAL(l_Z_3000), 1, rt_add(p_DEPTH, ((rt_int)1LL)));
for (;;) {
if ((l_D_3002 == NULL)) goto L_end3003;
{
if ((!r_HAS_REF(l_R_2989, ((*(R17 *)rt_nil_check(l_D_3002))).f_NAME, ((*(R17 *)rt_nil_check(l_D_3002))).f_IV)))
{
l_R_2989 = r_NAME_REF(((*(R17 *)rt_nil_check(l_D_3002))).f_NAME, ((*(R17 *)rt_nil_check(l_D_3002))).f_IV, NULL, l_R_2989);
}
l_D_3002 = ((*(R17 *)rt_nil_check(l_D_3002))).f_NEXT;
}
RT_B_TICK();
} L_end3003: ;
}
}
l_Z_3000 = r_LOOKUP_NEXT(l_Z_3000);
}
RT_B_TICK();
} L_end3001: ;
}
l_C_2998 = ((*(R17 *)rt_nil_check(l_C_2998))).f_NEXT;
}
RT_B_TICK();
} L_end2999: ;
}
{ R17 * rv3004 = l_R_2989;
return rv3004; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_REF(R17 * p_L, R9 p_NAME, rt_int p_OWNER) { RT_B_TICK(); 
R17 * l_P_3005; memset(&l_P_3005, 0, sizeof l_P_3005);
l_P_3005 = p_L;
for (;;) {
if ((l_P_3005 == NULL)) goto L_end3006;
{
if ((r_TEQ(((*(R17 *)rt_nil_check(l_P_3005))).f_NAME, p_NAME) && (((*(R17 *)rt_nil_check(l_P_3005))).f_IV == p_OWNER)))
{
{ rt_int rv3007 = 1;
return rv3007; }
}
l_P_3005 = ((*(R17 *)rt_nil_check(l_P_3005))).f_NEXT;
}
RT_B_TICK();
} L_end3006: ;
{ rt_int rv3008 = 0;
return rv3008; }
rt_raise(RT_X_INIT);
}
static R17 * r_INTERSECT_REFS(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_R_3009; memset(&l_R_3009, 0, sizeof l_R_3009);
l_R_3009 = NULL;
R17 * l_P_3010; memset(&l_P_3010, 0, sizeof l_P_3010);
l_P_3010 = p_A;
for (;;) {
if ((l_P_3010 == NULL)) goto L_end3011;
{
if (r_HAS_REF(p_B, ((*(R17 *)rt_nil_check(l_P_3010))).f_NAME, ((*(R17 *)rt_nil_check(l_P_3010))).f_IV))
{
l_R_3009 = r_NAME_REF(((*(R17 *)rt_nil_check(l_P_3010))).f_NAME, ((*(R17 *)rt_nil_check(l_P_3010))).f_IV, NULL, l_R_3009);
}
l_P_3010 = ((*(R17 *)rt_nil_check(l_P_3010))).f_NEXT;
}
RT_B_TICK();
} L_end3011: ;
{ R17 * rv3012 = l_R_3009;
return rv3012; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_INTERFERENCE(R17 * p_NAMES, R17 * p_CALLS, rt_int p_LINE, rt_int p_ASSERTION) { RT_B_TICK(); 
R17 * l_C_3013; memset(&l_C_3013, 0, sizeof l_C_3013);
l_C_3013 = p_CALLS;
for (;;) {
if ((l_C_3013 == NULL)) goto L_end3014;
{
{
R17 * l_V_3015; memset(&l_V_3015, 0, sizeof l_V_3015);
l_V_3015 = r_ROUTINE_DATA(((*(R17 *)rt_nil_check(l_C_3013))).f_NAME, 1);
if (((!(l_V_3015 == NULL)) && p_ASSERTION))
{
r_FAILT(p_LINE, rt_str("the expression of ASSERT must be free of side-effects (4.5.8): ", 63), ((*(R17 *)rt_nil_check(l_C_3013))).f_NAME);
}
for (;;) {
if ((l_V_3015 == NULL)) goto L_end3016;
{
if (r_HAS_REF(p_NAMES, ((*(R17 *)rt_nil_check(l_V_3015))).f_NAME, ((*(R17 *)rt_nil_check(l_V_3015))).f_IV))
{
r_FAILT(p_LINE, rt_str("a function invocation modifies a variable the expression also names (4.3.4): ", 77), ((*(R17 *)rt_nil_check(l_V_3015))).f_NAME);
}
{
R17 * l_D_3017; memset(&l_D_3017, 0, sizeof l_D_3017);
l_D_3017 = p_CALLS;
for (;;) {
if ((l_D_3017 == NULL)) goto L_end3018;
{
if ((!(l_D_3017 == l_C_3013)))
{
if (r_HAS_REF(r_ROUTINE_DATA(((*(R17 *)rt_nil_check(l_D_3017))).f_NAME, 0), ((*(R17 *)rt_nil_check(l_V_3015))).f_NAME, ((*(R17 *)rt_nil_check(l_V_3015))).f_IV))
{
r_FAILT(p_LINE, rt_str("two function invocations of one expression interfere on (4.3.4): ", 65), ((*(R17 *)rt_nil_check(l_V_3015))).f_NAME);
}
}
l_D_3017 = ((*(R17 *)rt_nil_check(l_D_3017))).f_NEXT;
}
RT_B_TICK();
} L_end3018: ;
}
l_V_3015 = ((*(R17 *)rt_nil_check(l_V_3015))).f_NEXT;
}
RT_B_TICK();
} L_end3016: ;
}
l_C_3013 = ((*(R17 *)rt_nil_check(l_C_3013))).f_NEXT;
}
RT_B_TICK();
} L_end3014: ;
}
static rt_int r_IN_HANDLERS(R17 * p_HS, R9 p_NAME) { RT_B_TICK(); 
R17 * l_H_3019; memset(&l_H_3019, 0, sizeof l_H_3019);
l_H_3019 = p_HS;
for (;;) {
if ((l_H_3019 == NULL)) goto L_end3020;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_H_3019))).f_A, p_NAME))
{
{ rt_int rv3021 = 1;
return rv3021; }
}
l_H_3019 = ((*(R17 *)rt_nil_check(l_H_3019))).f_NEXT;
}
RT_B_TICK();
} L_end3020: ;
{ rt_int rv3022 = 0;
return rv3022; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED_STMT(R17 * p_S) { RT_B_TICK(); 
rt_int l_K_3023; memset(&l_K_3023, 0, sizeof l_K_3023);
l_K_3023 = ((*(R17 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_3023 == g_N_EXCEPT))
{
{ rt_int rv3024 = r_IS_STRUCTURED_STMT(((*(R17 *)rt_nil_check(p_S))).f_A);
return rv3024; }
}
{ rt_int rv3025 = (((((((l_K_3023 == g_N_BLOCK) || (l_K_3023 == g_N_IF)) || (l_K_3023 == g_N_CASE)) || (l_K_3023 == g_N_LOOP)) || (l_K_3023 == g_N_FOR)) || (l_K_3023 == g_N_PAR)) || (l_K_3023 == g_N_WITH));
return rv3025; }
rt_raise(RT_X_INIT);
}
static R17 * r_NAMED_ROOT(R17 * p_E) { RT_B_TICK(); 
rt_int l_K_3026; memset(&l_K_3026, 0, sizeof l_K_3026);
l_K_3026 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
if (((l_K_3026 == g_N_NAME) || (l_K_3026 == g_N_APPLY)))
{
{ R17 * rv3027 = p_E;
return rv3027; }
}
else if ((((l_K_3026 == g_N_INDEX) || (l_K_3026 == g_N_FIELD)) || (l_K_3026 == g_N_SUBSTR)))
{
{ R17 * rv3028 = r_NAMED_ROOT(((*(R17 *)rt_nil_check(p_E))).f_A);
return rv3028; }
}
{ R17 * rv3029 = NULL;
return rv3029; }
rt_raise(RT_X_INIT);
}
static void r_STMT(R17 * p_S) { RT_B_TICK(); 
rt_int l_K_3030; memset(&l_K_3030, 0, sizeof l_K_3030);
l_K_3030 = ((*(R17 *)rt_nil_check(p_S))).f_KIND;
r_INTERFERENCE(p_S);
if ((l_K_3030 == g_N_NULL))
{
return;
}
else if ((l_K_3030 == g_N_LABELED))
{
{
R12 * l_Y_3031; memset(&l_Y_3031, 0, sizeof l_Y_3031);
l_Y_3031 = r_LOOKUP(((*(R17 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_3031))).f_ACCESS));
r_STMT(((*(R17 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_3030 == g_N_GOTO))
{
{
R12 * l_Y_3032; memset(&l_Y_3032, 0, sizeof l_Y_3032);
l_Y_3032 = r_LOOKUP(((*(R17 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_3033; memset(&l_N_3033, 0, sizeof l_N_3033);
R18 * l_C_3034; memset(&l_C_3034, 0, sizeof l_C_3034);
l_C_3034 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_3032 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3032))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3032))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
l_N_3033 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_3032))).f_MV);
for (;;) {
if ((l_N_3033 <= ((rt_int)0LL))) goto L_end3035;
{
if ((((*(R18 *)rt_nil_check(l_C_3034))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R18 *)rt_nil_check(l_C_3034))).f_NAME));
l_N_3033 = rt_sub(l_N_3033, ((rt_int)1LL));
}
l_C_3034 = ((*(R18 *)rt_nil_check(l_C_3034))).f_NEXT;
}
RT_B_TICK();
} L_end3035: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_3032))).f_ACCESS));
}
}
else if ((l_K_3030 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_3030 == g_N_CALL))
{
{
R26 l_V_3036; memset(&l_V_3036, 0, sizeof l_V_3036);
S_R26(&l_V_3036, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_3036).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_3036).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_3036).f_C, rt_str(";", 1)));
}
}
else if ((l_K_3030 == g_N_IF))
{
r_IF_STMT(((*(R17 *)rt_nil_check(p_S))).f_A, ((*(R17 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_3030 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_3030 == g_N_LOOP))
{
{
R9 l_END_L_3037; memset(&l_END_L_3037, 0, sizeof l_END_L_3037);
S_R9(&l_END_L_3037, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R17 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A), l_END_L_3037));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_3037);
r_OPEN_BODY(((*(R17 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CODES(rt_str("RT_B_TICK();", 12));
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_C), l_END_L_3037));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_3037));
}
}
else if ((l_K_3030 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_3030 == g_N_EXIT))
{
{
R18 * l_C_3038; memset(&l_C_3038, 0, sizeof l_C_3038);
l_C_3038 = r_LEAVE(((rt_int)2LL));
if ((l_C_3038 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R18 *)rt_nil_check(l_C_3038))).f_NAME));
}
}
else if ((l_K_3030 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_3030 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R17 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_3030 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_3030 == g_N_ASSERT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS)
{
{
R14 l_SAVED_CODE_3039; memset(&l_SAVED_CODE_3039, 0, sizeof l_SAVED_CODE_3039);
S_R14(&l_SAVED_CODE_3039, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R9 l_C_3040; memset(&l_C_3040, 0, sizeof l_C_3040);
S_R9(&l_C_3040, r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3039, 0);
}
}
else
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A)));
}
}
else if ((l_K_3030 == g_N_EXCEPT))
{
r_GUARDED(((*(R17 *)rt_nil_check(p_S))).f_A, NULL, ((*(R17 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_3030 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_3030 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_3030 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R17 * p_S) { RT_B_TICK(); 
R12 * l_Y_3041; memset(&l_Y_3041, 0, sizeof l_Y_3041);
l_Y_3041 = r_LOOKUP(((*(R17 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_3041 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_3041))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_3041))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv3042 = r_CALL_EXPR(p_S, NULL);
return rv3042; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R17 * p_ARMS, R17 * p_ELSE_BODY) { RT_B_TICK(); 
R17 * l_ARM_3043; memset(&l_ARM_3043, 0, sizeof l_ARM_3043);
l_ARM_3043 = p_ARMS;
R9 l_WORD_3044; memset(&l_WORD_3044, 0, sizeof l_WORD_3044);
S_R9(&l_WORD_3044, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_3045; memset(&l_OPEN_3045, 0, sizeof l_OPEN_3045);
l_OPEN_3045 = ((rt_int)0LL);
rt_int l_CHOSEN_3046; memset(&l_CHOSEN_3046, 0, sizeof l_CHOSEN_3046);
l_CHOSEN_3046 = 0;
for (;;) {
if ((l_ARM_3043 == NULL)) goto L_end3047;
{
{
R23 l_M_3048; memset(&l_M_3048, 0, sizeof l_M_3048);
S_R23(&l_M_3048, r_MANIFEST(((*(R17 *)rt_nil_check(l_ARM_3043))).f_A), 0);
if (l_CHOSEN_3046)
{
r_CHECK_COND(((*(R17 *)rt_nil_check(l_ARM_3043))).f_A);
r_CHECK_BODY(((*(R17 *)rt_nil_check(l_ARM_3043))).f_B);
}
else if ((l_M_3048).f_OK)
{
if ((!r_TEQS(l_WORD_3044, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_3045 = rt_add(l_OPEN_3045, ((rt_int)1LL));
S_R9(&l_WORD_3044, r_MK(rt_str("if", 2)), 0);
}
r_CODE(r_FMT1(rt_str("(void)(@);", 10), r_BOOL_EXPR(((*(R17 *)rt_nil_check(l_ARM_3043))).f_A)));
if (((l_M_3048).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R17 *)rt_nil_check(l_ARM_3043))).f_B);
l_CHOSEN_3046 = 1;
}
else
{
r_CHECK_BODY(((*(R17 *)rt_nil_check(l_ARM_3043))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3044, r_BOOL_EXPR(((*(R17 *)rt_nil_check(l_ARM_3043))).f_A)));
r_OPEN_BODY(((*(R17 *)rt_nil_check(l_ARM_3043))).f_B);
S_R9(&l_WORD_3044, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_3043 = ((*(R17 *)rt_nil_check(l_ARM_3043))).f_NEXT;
}
RT_B_TICK();
} L_end3047: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_3046)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_3044, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it3050_lo = ((rt_int)1LL), it3050_hi = l_OPEN_3045;
for (rt_int it3050 = it3050_lo; it3050 <= it3050_hi; it3050++) {
{
r_CODES(rt_str("}", 1));
}
RT_B_TICK();
if (it3050 == it3050_hi) break;
} } L_end3049: ;
}
static void r_CHECK_BODY(R17 * p_B) { RT_B_TICK(); 
R14 l_SAVED_CODE_3051; memset(&l_SAVED_CODE_3051, 0, sizeof l_SAVED_CODE_3051);
S_R14(&l_SAVED_CODE_3051, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3052; memset(&rc3052, 0, sizeof rc3052);  rc3052.f_HEAD = NULL; rc3052.f_TAIL = NULL; rc3052; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3051, 0);
}
static void r_CHECK_COND(R17 * p_E) { RT_B_TICK(); 
R9 l_C_3053; memset(&l_C_3053, 0, sizeof l_C_3053);
S_R9(&l_C_3053, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R17 * p_S) { RT_B_TICK(); 
R9 l_END_L_3054; memset(&l_END_L_3054, 0, sizeof l_END_L_3054);
S_R9(&l_END_L_3054, r_NEW_NAME(rt_str("L_end", 5)), 0);
R9 l_IT_3055; memset(&l_IT_3055, 0, sizeof l_IT_3055);
S_R9(&l_IT_3055, r_NEW_NAME(rt_str("it", 2)), 0);
R17 * l_R_3056; memset(&l_R_3056, 0, sizeof l_R_3056);
l_R_3056 = ((*(R17 *)rt_nil_check(p_S))).f_A;
R26 l_LO_3057; memset(&l_LO_3057, 0, sizeof l_LO_3057);
S_R26(&l_LO_3057, r_EXPR(((*(R17 *)rt_nil_check(l_R_3056))).f_A, NULL), 0);
R26 l_HI_3058; memset(&l_HI_3058, 0, sizeof l_HI_3058);
S_R26(&l_HI_3058, r_EXPR(((*(R17 *)rt_nil_check(l_R_3056))).f_B, (l_LO_3057).f_T), 0);
R22 * l_T_3059; memset(&l_T_3059, 0, sizeof l_T_3059);
l_T_3059 = r_REAL_TYPE((l_LO_3057).f_T);
R9 l_LOC_3060; memset(&l_LOC_3060, 0, sizeof l_LOC_3060);
R9 l_HIC_3061; memset(&l_HIC_3061, 0, sizeof l_HIC_3061);
if ((((*(R22 *)rt_nil_check(l_T_3059))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_3059))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_3059))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_3059))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R9(&l_LOC_3060, (l_LO_3057).f_C, 0);
S_R9(&l_HIC_3061, (l_HI_3058).f_C, 0);
if (((((*(R17 *)rt_nil_check(l_R_3056))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_R_3056))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LOC_3060, r_FMT1(rt_str("(@) + 1", 7), l_LOC_3060), 0);
}
if ((((*(R17 *)rt_nil_check(l_R_3056))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HIC_3061, r_FMT1(rt_str("(@) - 1", 7), l_HIC_3061), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_3055, l_LOC_3060, l_IT_3055, l_HIC_3061));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_3055, l_IT_3055, l_IT_3055, l_IT_3055));
r_OPEN_SCOPE();
if (((((*(R17 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_3062; memset(&l_Y_3062, 0, sizeof l_Y_3062);
l_Y_3062 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3062))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_3059))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_3062))).f_T = ((*(R22 *)rt_nil_check(l_T_3059))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_3062))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_3062, rt_str("", 0)), l_IT_3055));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_3062, rt_str("", 0)), l_IT_3055));
}
else
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3062))).f_ACCESS, l_IT_3055, 0);
}
r_DEFINE(l_Y_3062, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_3054);
r_OPEN_BODY(((*(R17 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODES(rt_str("RT_B_TICK();", 12));
r_CODE(r_FMT2(rt_str("if (@ == @_hi) break;", 21), l_IT_3055, l_IT_3055));
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_3054));
}
static void r_RETURN_STMT(R17 * p_S) { RT_B_TICK(); 
R19 * l_CS_3063; memset(&l_CS_3063, 0, sizeof l_CS_3063);
l_CS_3063 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_C_3064; memset(&l_C_3064, 0, sizeof l_C_3064);
if ((((*(R17 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_3064 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R19 *)rt_nil_check(l_CS_3063))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R19 *)rt_nil_check(l_CS_3063))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R19 *)rt_nil_check(l_CS_3063))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R19 *)rt_nil_check(l_CS_3063))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODE(r_CATS(((*(R19 *)rt_nil_check(l_CS_3063))).f_COPYOUT, rt_str("return;", 7)));
}
return;
}
if (((((*(R19 *)rt_nil_check(l_CS_3063))).f_RESULT == NULL) || ((*(R19 *)rt_nil_check(l_CS_3063))).f_IS_PATH))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R19 *)rt_nil_check(l_CS_3063))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R9 l_V_3065; memset(&l_V_3065, 0, sizeof l_V_3065);
S_R9(&l_V_3065, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R19 *)rt_nil_check(l_CS_3063))).f_RESULT), l_V_3065, r_CONVERT(r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A, ((*(R19 *)rt_nil_check(l_CS_3063))).f_RESULT), ((*(R19 *)rt_nil_check(l_CS_3063))).f_RESULT, ((*(R17 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_3064 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_3065));
}
}
static void r_SIGNAL_STMT(R17 * p_S) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R18 * l_C_3066; memset(&l_C_3066, 0, sizeof l_C_3066);
l_C_3066 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_3066 == NULL)) goto L_end3067;
{
if ((((*(R18 *)rt_nil_check(l_C_3066))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R18 *)rt_nil_check(l_C_3066))).f_NAME));
return;
}
if ((((*(R18 *)rt_nil_check(l_C_3066))).f_KIND == ((rt_int)1LL)))
{
goto L_end3067;
}
l_C_3066 = ((*(R18 *)rt_nil_check(l_C_3066))).f_NEXT;
}
RT_B_TICK();
} L_end3067: ;
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
R17 * l_TG_3068; memset(&l_TG_3068, 0, sizeof l_TG_3068);
l_TG_3068 = ((*(R17 *)rt_nil_check(p_S))).f_A;
if ((((*(R17 *)rt_nil_check(l_TG_3068))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_3069; memset(&l_B_3069, 0, sizeof l_B_3069);
S_R26(&l_B_3069, r_EXPR(((*(R17 *)rt_nil_check(l_TG_3068))).f_A, NULL), 0);
if ((!(l_B_3069).f_LVAL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_3069).f_T))).f_KIND == g_T_ABS))
{
{
R27 * l_ARGS_3070; memset(&l_ARGS_3070, 0, sizeof l_ARGS_3070);
l_ARGS_3070 = r_NODE_ARG(((*(R17 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R17 *)rt_nil_check(l_TG_3068))).f_B, g_M_IN, r_NODE_ARG(((*(R17 *)rt_nil_check(l_TG_3068))).f_C, g_M_IN, r_VAL_ARG(l_B_3069, NULL))));
R12 * l_Y_3071; memset(&l_Y_3071, 0, sizeof l_Y_3071);
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_3070))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_3071 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_3070, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_3071 == NULL))
{
((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(((*(R27 *)rt_nil_check(l_ARGS_3070))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_3071 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_3070, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_3071 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_3071, l_ARGS_3070, ((*(R17 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_3069).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_3069).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_3072; memset(&l_V_3072, 0, sizeof l_V_3072);
S_R26(&l_V_3072, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_B, (l_B_3069).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_3072).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_3069).f_T))).f_KIND)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_3069).f_C, r_INT_EXPR(((*(R17 *)rt_nil_check(l_TG_3068))).f_B), r_INT_EXPR(((*(R17 *)rt_nil_check(l_TG_3068))).f_C), (l_V_3072).f_C));
}
}
return;
}
{
R26 l_LV_3073; memset(&l_LV_3073, 0, sizeof l_LV_3073);
S_R26(&l_LV_3073, r_EXPR(l_TG_3068, NULL), 0);
R17 * l_SAVED_Q_3074; memset(&l_SAVED_Q_3074, 0, sizeof l_SAVED_Q_3074);
l_SAVED_Q_3074 = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
if ((!(l_LV_3073).f_LVAL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = NULL;
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_B))).f_KIND == g_N_QUAL))
{
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = ((*(R17 *)rt_nil_check(p_S))).f_B;
}
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R17 *)rt_nil_check(p_S))).f_B;
if (((((*(R22 *)rt_nil_check((l_LV_3073).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
r_REQUIRE_WHERE(r_MKN(rt_str("STORE_", 6)), ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
{
R26 l_V_3075; memset(&l_V_3075, 0, sizeof l_V_3075);
S_R26(&l_V_3075, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_B, (l_LV_3073).f_T), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
r_CODE(r_STORE_CODE((l_LV_3073).f_T, (l_LV_3073).f_C, l_V_3075, ((*(R17 *)rt_nil_check(p_S))).f_LINE, (l_LV_3073).f_SELF));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = l_SAVED_Q_3074;
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
R12 * l_Y_3076; memset(&l_Y_3076, 0, sizeof l_Y_3076);
l_Y_3076 = r_NEW_SYM(g_Y_VAR, ((*(R17 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_3077; memset(&l_V_3077, 0, sizeof l_V_3077);
S_R26(&l_V_3077, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_3076))).f_T = (l_V_3077).f_T;
((*(R12 *)rt_nil_check(l_Y_3076))).f_WITHV = ((rt_int)1LL);
if ((((*(R17 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R9 l_CN_3078; memset(&l_CN_3078, 0, sizeof l_CN_3078);
S_R9(&l_CN_3078, r_NEW_OBJECT(l_Y_3076, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_3077).f_T))
{
r_CODE(r_INIT_CODE((l_V_3077).f_T, l_CN_3078));
}
r_CODE(r_ASSIGN_CODE((l_V_3077).f_T, l_CN_3078, (l_V_3077).f_C));
}
}
else
{
if ((!(l_V_3077).f_LVAL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R9 l_P_3079; memset(&l_P_3079, 0, sizeof l_P_3079);
S_R9(&l_P_3079, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_3077).f_T), l_P_3079, (l_V_3077).f_C));
S_R9(&((*(R12 *)rt_nil_check(l_Y_3076))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_3079), 0);
S_R9(&((*(R12 *)rt_nil_check(l_Y_3076))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_3076))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_3076))).f_OWNER = rt_neg(((rt_int)1LL));
}
{
R17 * l_R_3080; memset(&l_R_3080, 0, sizeof l_R_3080);
l_R_3080 = r_NAMED_ROOT(((*(R17 *)rt_nil_check(p_S))).f_A);
if ((!(l_R_3080 == NULL)))
{
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_R_3080))).f_NAME, ((*(R17 *)rt_nil_check(p_S))).f_NAME)))
{
{
R12 * l_OLD_3081; memset(&l_OLD_3081, 0, sizeof l_OLD_3081);
l_OLD_3081 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_3080))).f_NAME);
if ((!(l_OLD_3081 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_OLD_3081))).f_KIND == g_Y_VAR))
{
{
R12 * l_H_3082; memset(&l_H_3082, 0, sizeof l_H_3082);
l_H_3082 = r_NEW_SYM(g_Y_VAR, ((*(R17 *)rt_nil_check(l_R_3080))).f_NAME);
((*(R12 *)rt_nil_check(l_H_3082))).f_T = ((*(R12 *)rt_nil_check(l_OLD_3081))).f_T;
((*(R12 *)rt_nil_check(l_H_3082))).f_WITHV = ((rt_int)2LL);
((*(R12 *)rt_nil_check(l_H_3082))).f_OWNER = ((*(R12 *)rt_nil_check(l_OLD_3081))).f_OWNER;
r_DEFINE(l_H_3082, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
}
}
}
}
}
}
}
r_DEFINE(l_Y_3076, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R17 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R17 * p_S) { RT_B_TICK(); 
R17 * l_ARM_3083; memset(&l_ARM_3083, 0, sizeof l_ARM_3083);
l_ARM_3083 = ((*(R17 *)rt_nil_check(p_S))).f_B;
R25 * l_SEEN_3084; memset(&l_SEEN_3084, 0, sizeof l_SEEN_3084);
l_SEEN_3084 = NULL;
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_3085; memset(&l_CH_3085, 0, sizeof l_CH_3085);
S_R26(&l_CH_3085, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_3086; memset(&l_T_3086, 0, sizeof l_T_3086);
l_T_3086 = r_REAL_TYPE((l_CH_3085).f_T);
R12 * l_BOUND_3087; memset(&l_BOUND_3087, 0, sizeof l_BOUND_3087);
l_BOUND_3087 = r_DISCRIMINATED(((*(R17 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_3086))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_3086))).f_KIND == g_T_BITS)))
{
{
R9 l_TMP_3088; memset(&l_TMP_3088, 0, sizeof l_TMP_3088);
S_R9(&l_TMP_3088, r_NEW_NAME(rt_str("cs", 2)), 0);
R9 l_WORD_3089; memset(&l_WORD_3089, 0, sizeof l_WORD_3089);
S_R9(&l_WORD_3089, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_3088, (l_CH_3085).f_C));
for (;;) {
if ((l_ARM_3083 == NULL)) goto L_end3090;
{
{
R17 * l_L_3091; memset(&l_L_3091, 0, sizeof l_L_3091);
l_L_3091 = ((*(R17 *)rt_nil_check(l_ARM_3083))).f_A;
R9 l_COND_3092; memset(&l_COND_3092, 0, sizeof l_COND_3092);
S_R9(&l_COND_3092, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3091 == NULL)) goto L_end3093;
{
S_R9(&l_COND_3092, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_3092, l_TMP_3088, (r_EXPR(l_L_3091, l_T_3086)).f_C), 0);
l_L_3091 = ((*(R17 *)rt_nil_check(l_L_3091))).f_NEXT;
}
RT_B_TICK();
} L_end3093: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3089, l_COND_3092));
S_R9(&l_WORD_3089, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3083))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3083))).f_C);
}
l_ARM_3083 = ((*(R17 *)rt_nil_check(l_ARM_3083))).f_NEXT;
}
RT_B_TICK();
} L_end3090: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_3089, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if (((((*(R22 *)rt_nil_check(l_T_3086))).f_KIND == g_T_FLOAT) || (((((*(R22 *)rt_nil_check(l_T_3086))).f_KIND == g_T_INT) && (!(((*(R22 *)rt_nil_check(l_T_3086))).f_SCALE == ((rt_int)0LL)))))))
{
r_VALUE_CASE(p_S, l_CH_3085);
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_3086))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_3086))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_3086))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_3086))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_3086));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_3085).f_C));
for (;;) {
if ((l_ARM_3083 == NULL)) goto L_end3094;
{
{
R17 * l_L_3095; memset(&l_L_3095, 0, sizeof l_L_3095);
l_L_3095 = ((*(R17 *)rt_nil_check(l_ARM_3083))).f_A;
R23 l_FIRST_3096; memset(&l_FIRST_3096, 0, sizeof l_FIRST_3096);
S_R23(&l_FIRST_3096, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_3095 == NULL)) goto L_end3097;
{
if ((((*(R17 *)rt_nil_check(l_L_3095))).f_KIND == g_N_RANGE))
{
{
R23 l_LO_3098; memset(&l_LO_3098, 0, sizeof l_LO_3098);
S_R23(&l_LO_3098, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_3095))).f_A, l_T_3086), 0);
R23 l_HI_3099; memset(&l_HI_3099, 0, sizeof l_HI_3099);
S_R23(&l_HI_3099, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_3095))).f_B, l_T_3086), 0);
rt_int l_A_3100; memset(&l_A_3100, 0, sizeof l_A_3100);
l_A_3100 = (l_LO_3098).f_V;
rt_int l_B_3101; memset(&l_B_3101, 0, sizeof l_B_3101);
l_B_3101 = (l_HI_3099).f_V;
if ((!(((l_LO_3098).f_OK && (l_HI_3099).f_OK))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_3095))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R17 *)rt_nil_check(l_L_3095))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_L_3095))).f_IV == ((rt_int)3LL))))
{
l_A_3100 = rt_add(l_A_3100, ((rt_int)1LL));
}
if ((((*(R17 *)rt_nil_check(l_L_3095))).f_IV >= ((rt_int)2LL)))
{
l_B_3101 = rt_sub(l_B_3101, ((rt_int)1LL));
}
if ((!(l_FIRST_3096).f_OK))
{
S_R23(&l_FIRST_3096, r_SOME(l_A_3100), 0);
}
l_SEEN_3084 = r_DISTINCT_LABEL(l_SEEN_3084, l_A_3100, l_B_3101, ((*(R17 *)rt_nil_check(l_L_3095))).f_LINE);
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_3100), r_NUM(l_B_3101)));
}
}
else
{
{
R23 l_M_3102; memset(&l_M_3102, 0, sizeof l_M_3102);
S_R23(&l_M_3102, r_ENUM_MANIFEST(l_L_3095, l_T_3086), 0);
if ((!(l_M_3102).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_3095))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_3096).f_OK))
{
S_R23(&l_FIRST_3096, l_M_3102, 0);
}
l_SEEN_3084 = r_DISTINCT_LABEL(l_SEEN_3084, (l_M_3102).f_V, (l_M_3102).f_V, ((*(R17 *)rt_nil_check(l_L_3095))).f_LINE);
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_3102).f_V)));
}
}
l_L_3095 = ((*(R17 *)rt_nil_check(l_L_3095))).f_NEXT;
}
RT_B_TICK();
} L_end3097: ;
if ((!(l_BOUND_3087 == NULL)))
{
{
R22 * l_SAVED_3103; memset(&l_SAVED_3103, 0, sizeof l_SAVED_3103);
l_SAVED_3103 = ((*(R12 *)rt_nil_check(l_BOUND_3087))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_3087))).f_T = r_NARROW(l_SAVED_3103, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_3096).f_V);
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3083))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3083))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_3087))).f_T = l_SAVED_3103;
}
}
else
{
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3083))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3083))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_3083 = ((*(R17 *)rt_nil_check(l_ARM_3083))).f_NEXT;
}
RT_B_TICK();
} L_end3094: ;
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
R25 * l_P_3104; memset(&l_P_3104, 0, sizeof l_P_3104);
l_P_3104 = p_SEEN;
if ((p_A > p_B))
{
{ R25 * rv3105 = p_SEEN;
return rv3105; }
}
for (;;) {
if ((l_P_3104 == NULL)) goto L_end3106;
{
if (((p_A <= (((*(R25 *)rt_nil_check(l_P_3104))).f_MHI).f_V) && ((((*(R25 *)rt_nil_check(l_P_3104))).f_MLO).f_V <= p_B)))
{
r_FAIL(p_LINE, rt_str("the choice-label values must be distinct (4.5.5.2)", 50));
}
l_P_3104 = ((*(R25 *)rt_nil_check(l_P_3104))).f_NEXT;
}
RT_B_TICK();
} L_end3106: ;
l_P_3104 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_P_3104)), ({ R25 rc3107; memset(&rc3107, 0, sizeof rc3107);  S_R9(&rc3107.f_LO, r_NO_TEXT(), 0); S_R9(&rc3107.f_HI, r_NO_TEXT(), 0); S_R23(&rc3107.f_MLO, r_SOME(p_A), 0); S_R23(&rc3107.f_MHI, r_SOME(p_B), 0); rc3107.f_ANYARG = 0; rc3107.f_NEXT = p_SEEN; rc3107; }), 0);
{ R25 * rv3108 = l_P_3104;
return rv3108; }
rt_raise(RT_X_INIT);
}
static void r_VALUE_CASE(R17 * p_S, R26 p_CH) { RT_B_TICK(); 
R9 l_TMP_3109; memset(&l_TMP_3109, 0, sizeof l_TMP_3109);
S_R9(&l_TMP_3109, r_NEW_NAME(rt_str("cs", 2)), 0);
R26 l_X_3110; memset(&l_X_3110, 0, sizeof l_X_3110);
S_R26(&l_X_3110, r_MKET(l_TMP_3109, (p_CH).f_T), 0);
R17 * l_ARM_3111; memset(&l_ARM_3111, 0, sizeof l_ARM_3111);
l_ARM_3111 = ((*(R17 *)rt_nil_check(p_S))).f_B;
R9 l_WORD_3112; memset(&l_WORD_3112, 0, sizeof l_WORD_3112);
S_R9(&l_WORD_3112, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(r_REAL_TYPE((p_CH).f_T)), l_TMP_3109, (p_CH).f_C));
for (;;) {
if ((l_ARM_3111 == NULL)) goto L_end3113;
{
{
R17 * l_L_3114; memset(&l_L_3114, 0, sizeof l_L_3114);
l_L_3114 = ((*(R17 *)rt_nil_check(l_ARM_3111))).f_A;
R9 l_COND_3115; memset(&l_COND_3115, 0, sizeof l_COND_3115);
S_R9(&l_COND_3115, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3114 == NULL)) goto L_end3116;
{
if ((((*(R17 *)rt_nil_check(l_L_3114))).f_KIND == g_N_RANGE))
{
{
R26 l_LO_3117; memset(&l_LO_3117, 0, sizeof l_LO_3117);
S_R26(&l_LO_3117, r_CASE_LABEL(((*(R17 *)rt_nil_check(l_L_3114))).f_A, (p_CH).f_T), 0);
R26 l_HI_3118; memset(&l_HI_3118, 0, sizeof l_HI_3118);
S_R26(&l_HI_3118, r_CASE_LABEL(((*(R17 *)rt_nil_check(l_L_3114))).f_B, (p_CH).f_T), 0);
rstr l_GE_3119; memset(&l_GE_3119, 0, sizeof l_GE_3119);
l_GE_3119 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_GE_3119, rt_str(">=", 2));
rstr l_LE_3120; memset(&l_LE_3120, 0, sizeof l_LE_3120);
l_LE_3120 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_LE_3120, rt_str("<=", 2));
if (((((*(R17 *)rt_nil_check(l_L_3114))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_L_3114))).f_IV == ((rt_int)3LL))))
{
rt_b_assign(&l_GE_3119, rt_str("> ", 2));
}
if ((((*(R17 *)rt_nil_check(l_L_3114))).f_IV >= ((rt_int)2LL)))
{
rt_b_assign(&l_LE_3120, rt_str("< ", 2));
}
S_R9(&l_COND_3115, r_FMT3(rt_str("@ || (@ && @)", 13), l_COND_3115, r_VALUE_COMPARE(l_X_3110, l_LO_3117, r_MK(l_GE_3119)), r_VALUE_COMPARE(l_X_3110, l_HI_3118, r_MK(l_LE_3120))), 0);
}
}
else
{
S_R9(&l_COND_3115, r_FMT2(rt_str("@ || @", 6), l_COND_3115, r_VALUE_COMPARE(l_X_3110, r_CASE_LABEL(l_L_3114, (p_CH).f_T), r_MK(rt_str("==", 2)))), 0);
}
l_L_3114 = ((*(R17 *)rt_nil_check(l_L_3114))).f_NEXT;
}
RT_B_TICK();
} L_end3116: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3112, l_COND_3115));
S_R9(&l_WORD_3112, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3111))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3111))).f_C);
}
l_ARM_3111 = ((*(R17 *)rt_nil_check(l_ARM_3111))).f_NEXT;
}
RT_B_TICK();
} L_end3113: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_3112, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
static R26 r_CASE_LABEL(R17 * p_L, R22 * p_T) { RT_B_TICK(); 
R26 l_V_3121; memset(&l_V_3121, 0, sizeof l_V_3121);
S_R26(&l_V_3121, r_EXPR(p_L, p_T), 0);
if ((!r_SAME_CLASS(r_REAL_TYPE((l_V_3121).f_T), r_REAL_TYPE(p_T))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_L))).f_LINE, rt_str("a case label is a value of the type of the choice (4.5.5.2)", 59));
}
{ R26 rv3122 = l_V_3121;
return rv3122; }
rt_raise(RT_X_INIT);
}
static R9 r_VALUE_COMPARE(R26 p_A, R26 p_B, R9 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT))
{
{ R9 rv3123 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv3123; }
}
{ R9 rv3124 = r_FIXED_COMPARE(p_A, p_B, p_OP);
return rv3124; }
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
{ R12 * rv3125 = NULL;
return rv3125; }
}
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv3126 = NULL;
return rv3126; }
}
{
R12 * l_Y_3127; memset(&l_Y_3127, 0, sizeof l_Y_3127);
l_Y_3127 = r_LOOKUP(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_3127 == NULL))
{
{ R12 * rv3128 = NULL;
return rv3128; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3127))).f_KIND == g_Y_VAR)))
{
{ R12 * rv3129 = NULL;
return rv3129; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3127))).f_WITHV == ((rt_int)1LL))))
{
{ R12 * rv3130 = NULL;
return rv3130; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_3127))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv3131 = NULL;
return rv3131; }
}
{
R24 * l_F_3132; memset(&l_F_3132, 0, sizeof l_F_3132);
l_F_3132 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_3127))).f_T), ((*(R17 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_3132 == NULL))
{
{ R12 * rv3133 = NULL;
return rv3133; }
}
if ((!(((*(R24 *)rt_nil_check(l_F_3132))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv3134 = NULL;
return rv3134; }
}
}
{ R12 * rv3135 = l_Y_3127;
return rv3135; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R9 p_TAGN, rt_int p_V) { RT_B_TICK(); 
R22 * l_N_3136; memset(&l_N_3136, 0, sizeof l_N_3136);
l_N_3136 = r_COPY_TYP(p_T);
R24 * l_F_3137; memset(&l_F_3137, 0, sizeof l_F_3137);
l_F_3137 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R25 * l_A_3138; memset(&l_A_3138, 0, sizeof l_A_3138);
l_A_3138 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R25 * l_HEAD_3139; memset(&l_HEAD_3139, 0, sizeof l_HEAD_3139);
l_HEAD_3139 = NULL;
R25 * l_TAIL_3140; memset(&l_TAIL_3140, 0, sizeof l_TAIL_3140);
l_TAIL_3140 = NULL;
for (;;) {
if ((l_F_3137 == NULL)) goto L_end3141;
{
if (((!(((*(R24 *)rt_nil_check(l_F_3137))).f_KIND == ((rt_int)0LL))) && (!(l_A_3138 == NULL))))
{
{
R25 * l_B_3142; memset(&l_B_3142, 0, sizeof l_B_3142);
l_B_3142 = ((R25 *)rt_b_new(sizeof (R25)));
S_R25(&(*(R25 *)rt_nil_check(l_B_3142)), (*(R25 *)rt_nil_check(l_A_3138)), 0);
((*(R25 *)rt_nil_check(l_B_3142))).f_NEXT = NULL;
if (r_TEQ(((*(R24 *)rt_nil_check(l_F_3137))).f_NAME, p_TAGN))
{
((*(R25 *)rt_nil_check(l_B_3142))).f_ANYARG = 0;
S_R23(&((*(R25 *)rt_nil_check(l_B_3142))).f_MLO, r_SOME(p_V), 0);
S_R9(&((*(R25 *)rt_nil_check(l_B_3142))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_3140 == NULL))
{
l_HEAD_3139 = l_B_3142;
}
else
{
((*(R25 *)rt_nil_check(l_TAIL_3140))).f_NEXT = l_B_3142;
}
l_TAIL_3140 = l_B_3142;
}
l_A_3138 = ((*(R25 *)rt_nil_check(l_A_3138))).f_NEXT;
}
l_F_3137 = ((*(R24 *)rt_nil_check(l_F_3137))).f_NEXT;
}
RT_B_TICK();
} L_end3141: ;
((*(R22 *)rt_nil_check(l_N_3136))).f_ARGS = l_HEAD_3139;
{ R22 * rv3143 = l_N_3136;
return rv3143; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R17 * p_S) { RT_B_TICK(); 
R17 * l_ARM_3144; memset(&l_ARM_3144, 0, sizeof l_ARM_3144);
l_ARM_3144 = ((*(R17 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_3145; memset(&l_SAVED_3145, 0, sizeof l_SAVED_3145);
l_SAVED_3145 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_3144 == NULL)) goto L_end3146;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_ARM_3144))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3144))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3144))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_3145;
return;
}
l_ARM_3144 = ((*(R17 *)rt_nil_check(l_ARM_3144))).f_NEXT;
}
RT_B_TICK();
} L_end3146: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_3145;
}
}
static R22 * r_PATHS_TYPE(void) { RT_B_TICK(); 
R22 * l_T_3147; memset(&l_T_3147, 0, sizeof l_T_3147);
l_T_3147 = r_NEW_TYP(g_T_PATHS);
S_R9(&((*(R22 *)rt_nil_check(l_T_3147))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv3148 = l_T_3147;
return rv3148; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R17 * p_S) { RT_B_TICK(); 
R9 l_TD_3149; memset(&l_TD_3149, 0, sizeof l_TD_3149);
S_R9(&l_TD_3149, r_NEW_NAME(rt_str("td", 2)), 0);
R17 * l_P_3150; memset(&l_P_3150, 0, sizeof l_P_3150);
l_P_3150 = ((*(R17 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_3150 == NULL)) goto L_end3151;
{
{
R12 * l_Y_3152; memset(&l_Y_3152, 0, sizeof l_Y_3152);
l_Y_3152 = r_NEW_SYM(g_Y_PATH, ((*(R17 *)rt_nil_check(l_P_3150))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3152))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_3152))).f_DECL = l_P_3150;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_3152, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_3152))).f_INPUT = 1;
r_DEFINE(l_Y_3152, ((*(R17 *)rt_nil_check(l_P_3150))).f_LINE);
}
l_P_3150 = ((*(R17 *)rt_nil_check(l_P_3150))).f_NEXT;
}
RT_B_TICK();
} L_end3151: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_3149));
r_CODES(rt_str("rt_b_par_begin();", 17));
r_CODE(r_FMT2(rt_str("{ rt_frame @a; if (RT_TRY(@a)) {", 32), l_TD_3149, l_TD_3149));
l_P_3150 = ((*(R17 *)rt_nil_check(p_S))).f_A;
{
rt_int l_K_3153; memset(&l_K_3153, 0, sizeof l_K_3153);
l_K_3153 = ((rt_int)0LL);
for (;;) {
if ((l_P_3150 == NULL)) goto L_end3154;
{
l_K_3153 = rt_add(l_K_3153, ((rt_int)1LL));
r_ACTIVATE_PATH(l_P_3150, l_TD_3149, l_K_3153);
l_P_3150 = ((*(R17 *)rt_nil_check(l_P_3150))).f_NEXT;
}
RT_B_TICK();
} L_end3154: ;
}
r_CODE(r_FMT3(rt_str("RT_POP(@a); } else { RT_POP(@a); rt_b_par_abandon(&@);", 54), l_TD_3149, l_TD_3149, l_TD_3149));
r_CODES(rt_str("rt_raise(rt_xcur); } }", 22));
if (r_HAS_USER_ROUTINE(r_MKN(rt_str("PAR_BLOCK_", 10))))
{
{
R17 * l_C_3155; memset(&l_C_3155, 0, sizeof l_C_3155);
l_C_3155 = r_NEW_NODE(g_N_CALL, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
R17 * l_A_3156; memset(&l_A_3156, 0, sizeof l_A_3156);
l_A_3156 = r_NEW_NODE(g_N_APPLY, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_C_3155))).f_NAME, r_MKN(rt_str("PAR_BLOCK_", 10)), 0);
S_R9(&((*(R17 *)rt_nil_check(l_A_3156))).f_NAME, r_MKN(rt_str("$PATH_LIST", 10)), 0);
((*(R17 *)rt_nil_check(l_C_3155))).f_A = l_A_3156;
r_CODE(r_FMT1(rt_str("rt_b_par_dispatch_push(&@);", 27), l_TD_3149));
r_STMT(l_C_3155);
r_CODES(rt_str("rt_b_par_dispatch_pop();", 24));
}
}
else
{
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_3149));
}
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static R26 r_PATH_LIST(rt_int p_LINE) { RT_B_TICK(); 
R22 * l_PE_3157; memset(&l_PE_3157, 0, sizeof l_PE_3157);
l_PE_3157 = r_RESOLVE_USER_NAME(r_MK(rt_str("PATH_ENTRY", 10)), p_LINE);
R22 * l_R_3158; memset(&l_R_3158, 0, sizeof l_R_3158);
l_R_3158 = r_REAL_TYPE(l_PE_3157);
R22 * l_AT_3159; memset(&l_AT_3159, 0, sizeof l_AT_3159);
l_AT_3159 = r_ARRAY_OF(l_PE_3157, ((rt_int)1LL));
R9 l_C_3160; memset(&l_C_3160, 0, sizeof l_C_3160);
S_R9(&l_C_3160, r_CTYPE(l_AT_3159), 0);
R9 l_CODE__3161; memset(&l_CODE__3161, 0, sizeof l_CODE__3161);
if ((!(((*(R22 *)rt_nil_check(l_R_3158))).f_KIND == g_T_REC)))
{
r_FAIL(p_LINE, rt_str("PATH_ENTRY is the record type of PARALLEL_SUPPORT (D.7)", 55));
}
S_R9(&l_CODE__3161, r_FMT2(rt_str("({ @ a; rt_int n = rt_b_par_count(); a.lo[0] = 1; a.hi[0] = n; a.p = rt_b_array_alloc(n, sizeof *a.p); memset(a.p, 0, sizeof *a.p * (size_t)(n \? n : 1)); for (rt_int i = 0; i < n; i++) { a.p[i].@ = rt_b_bits_of_int(i + 1, 64);", 226), l_C_3160, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_R_3158, r_MKN(rt_str("PATH_ADDR", 9)))))).f_CNAME), 0);
S_R9(&l_CODE__3161, r_FMT3(rt_str("@ a.p[i].@ = rt_b_par_id(i); a.p[i].@ = rt_b_par_prio(i);", 57), l_CODE__3161, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_R_3158, r_MKN(rt_str("ACTIVATION_ID", 13)))))).f_CNAME, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_R_3158, r_MKN(rt_str("PRIORITY_LEVEL", 14)))))).f_CNAME), 0);
S_R9(&l_CODE__3161, r_FMT3(rt_str("@ a.p[i].@ = rt_b_par_connect(i, @); } a; })", 44), l_CODE__3161, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_R_3158, r_MKN(rt_str("CONNECT_NAME", 12)))))).f_CNAME, r_NUM(r_STATIC_SIZE_OR_LEN(((*(R24 *)rt_nil_check(r_FIND_FIELD(l_R_3158, r_MKN(rt_str("CONNECT_NAME", 12)))))).f_T))), 0);
{ R26 rv3162 = r_MKET(l_CODE__3161, l_AT_3159);
return rv3162; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_SIZE_OR_LEN(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_MLEN).f_OK)
{
{ rt_int rv3163 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_MLEN).f_V;
return rv3163; }
}
{ rt_int rv3164 = ((rt_int)32LL);
return rv3164; }
rt_raise(RT_X_INIT);
}
static R26 r_RUN_PATHS(R17 * p_E) { RT_B_TICK(); 
R26 l_V_3165; memset(&l_V_3165, 0, sizeof l_V_3165);
S_R26(&l_V_3165, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_3166; memset(&l_T_3166, 0, sizeof l_T_3166);
l_T_3166 = r_REAL_TYPE((l_V_3165).f_T);
R22 * l_R_3167; memset(&l_R_3167, 0, sizeof l_R_3167);
if (((!(((*(R22 *)rt_nil_check(l_T_3166))).f_KIND == g_T_ARR)) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("RUN_PATHS takes the ARRAY OF PATH_ENTRY its PAR_BLOCK_ was given (D.7)", 70));
}
l_R_3167 = r_REAL_TYPE(((*(R22 *)rt_nil_check(l_T_3166))).f_ELEM);
if ((!(((*(R22 *)rt_nil_check(l_R_3167))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("RUN_PATHS takes the ARRAY OF PATH_ENTRY its PAR_BLOCK_ was given (D.7)", 70));
}
{ R26 rv3168 = r_MKET(r_FMT4(rt_str("({ @ l = @; rt_int n = rt_b_extent(1, l.lo, l.hi); for (rt_int k = 0; k < n; k++) rt_b_par_select(rt_b_int_of_bits(l.p[k].@), l.p[k].@); rt_b_par_run(); })", 155), r_CTYPE(l_T_3166), (l_V_3165).f_C, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_R_3167, r_MKN(rt_str("PATH_ADDR", 9)))))).f_CNAME, ((*(R24 *)rt_nil_check(r_FIND_FIELD(l_R_3167, r_MKN(rt_str("PRIORITY_LEVEL", 14)))))).f_CNAME), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3168; }
rt_raise(RT_X_INIT);
}
static void r_ACTIVATE_PATH(R17 * p_P, R9 p_TD, rt_int p_K) { RT_B_TICK(); 
R9 l_FN_3169; memset(&l_FN_3169, 0, sizeof l_FN_3169);
S_R9(&l_FN_3169, r_NEW_NAME(rt_str("path_", 5)), 0);
R9 l_FT_3170; memset(&l_FT_3170, 0, sizeof l_FT_3170);
S_R9(&l_FT_3170, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_3171; memset(&l_Y_3171, 0, sizeof l_Y_3171);
l_Y_3171 = r_LOOKUP(((*(R17 *)rt_nil_check(p_P))).f_NAME);
R9 l_H_3172; memset(&l_H_3172, 0, sizeof l_H_3172);
S_R9(&l_H_3172, r_OBJ_ACCESS(l_Y_3171), 0);
R9 l_IT_3173; memset(&l_IT_3173, 0, sizeof l_IT_3173);
S_R9(&l_IT_3173, r_NEW_NAME(rt_str("pi", 2)), 0);
R9 l_PRIO_3174; memset(&l_PRIO_3174, 0, sizeof l_PRIO_3174);
S_R9(&l_PRIO_3174, r_MK(rt_str("0", 1)), 0);
R9 l_START_3175; memset(&l_START_3175, 0, sizeof l_START_3175);
R22 * l_LT_3176; memset(&l_LT_3176, 0, sizeof l_LT_3176);
l_LT_3176 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_3170, l_FT_3170));
if ((!(((*(R17 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R9(&l_PRIO_3174, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R17 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R17 * l_R_3177; memset(&l_R_3177, 0, sizeof l_R_3177);
l_R_3177 = ((*(R17 *)rt_nil_check(p_P))).f_A;
R26 l_LV_3178; memset(&l_LV_3178, 0, sizeof l_LV_3178);
S_R26(&l_LV_3178, r_EXPR(((*(R17 *)rt_nil_check(l_R_3177))).f_A, NULL), 0);
R9 l_LO_3179; memset(&l_LO_3179, 0, sizeof l_LO_3179);
S_R9(&l_LO_3179, (l_LV_3178).f_C, 0);
R9 l_HI_3180; memset(&l_HI_3180, 0, sizeof l_HI_3180);
S_R9(&l_HI_3180, (r_EXPR(((*(R17 *)rt_nil_check(l_R_3177))).f_B, (l_LV_3178).f_T)).f_C, 0);
R22 * l_RT_3181; memset(&l_RT_3181, 0, sizeof l_RT_3181);
l_RT_3181 = r_REAL_TYPE((l_LV_3178).f_T);
if ((((*(R22 *)rt_nil_check(l_RT_3181))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_RT_3181))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_str("a loop prefix over an UNORDERED type (4.6.1)", 44));
}
l_LT_3176 = ((*(R22 *)rt_nil_check(l_RT_3181))).f_BASE;
S_R9(&l_HI_3180, (r_EXPR(((*(R17 *)rt_nil_check(l_R_3177))).f_B, l_LT_3176)).f_C, 0);
}
else if (((!(((*(R22 *)rt_nil_check(l_RT_3181))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_RT_3181))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_str("the range of a loop prefix is integer or enumerated (4.6.1)", 59));
}
if (((((*(R17 *)rt_nil_check(l_R_3177))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_R_3177))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LO_3179, r_FMT1(rt_str("(@) + 1", 7), l_LO_3179), 0);
}
if ((((*(R17 *)rt_nil_check(l_R_3177))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HI_3180, r_FMT1(rt_str("(@) - 1", 7), l_HI_3180), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_3172, l_LO_3179, l_HI_3180));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_3173, l_H_3172, l_IT_3173, l_H_3172), l_IT_3173));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_3173));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_3170, r_UP_FRAME()));
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME), l_IT_3173));
}
if ((!(((*(R17 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_3182; memset(&l_V_3182, 0, sizeof l_V_3182);
r_OPEN_SCOPE();
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_3183; memset(&l_I_3183, 0, sizeof l_I_3183);
l_I_3183 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_3183))).f_T = l_LT_3176;
((*(R12 *)rt_nil_check(l_I_3183))).f_INPUT = 1;
S_R9(&((*(R12 *)rt_nil_check(l_I_3183))).f_ACCESS, l_IT_3173, 0);
((*(R12 *)rt_nil_check(l_I_3183))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_3183, ((*(R17 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_3182, r_EXPR(((*(R17 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3182).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
if ((!r_IMPLEMENTATION_SEMAPHORE(((*(R17 *)rt_nil_check(p_P))).f_D)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_b_cat(rt_str("CONNECT names an implementation-defined semaphore, of the machine's ", 68), rt_str("library segment (4.6.1)", 23)));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_3182).f_C));
}
}
S_R9(&l_START_3175, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_3172, l_IT_3173, l_FN_3169, p_TD), 0);
S_R9(&l_PRIO_3174, r_CAT(l_PRIO_3174, r_FMT4(rt_str("); rt_b_path_info(&@, @, @, @", 29), p_TD, r_NUM(p_K), l_IT_3173, r_CONNECT_NAME(p_P))), 0);
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT4(rt_str("@@, @); if (@ == ", 17), l_START_3175, p_TD, l_PRIO_3174, l_IT_3173));
r_CODE(r_FMT1(rt_str("@.hi) break; }", 14), l_H_3172));
}
else
{
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_3175, p_TD, l_PRIO_3174));
}
r_PATH_BODY(p_P, l_FN_3169, l_FT_3170, l_LT_3176);
}
static rt_int r_IMPLEMENTATION_SEMAPHORE(R17 * p_E) { RT_B_TICK(); 
R17 * l_R_3184; memset(&l_R_3184, 0, sizeof l_R_3184);
l_R_3184 = p_E;
for (;;) {
if (((((*(R17 *)rt_nil_check(l_R_3184))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_3184))).f_KIND == g_N_APPLY))) goto L_end3185;
{
if (((!(((*(R17 *)rt_nil_check(l_R_3184))).f_KIND == g_N_INDEX)) && (!(((*(R17 *)rt_nil_check(l_R_3184))).f_KIND == g_N_FIELD))))
{
{ rt_int rv3186 = 0;
return rv3186; }
}
l_R_3184 = ((*(R17 *)rt_nil_check(l_R_3184))).f_A;
}
RT_B_TICK();
} L_end3185: ;
{
R12 * l_Y_3187; memset(&l_Y_3187, 0, sizeof l_Y_3187);
l_Y_3187 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(l_R_3184))).f_NAME);
if ((l_Y_3187 == NULL))
{
{ rt_int rv3188 = 0;
return rv3188; }
}
if ((((*(R12 *)rt_nil_check(l_Y_3187))).f_HOME == NULL))
{
{ rt_int rv3189 = 0;
return rv3189; }
}
{ rt_int rv3190 = r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LIBSEGS, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3187))).f_HOME))).f_NAME);
return rv3190; }
}
rt_raise(RT_X_INIT);
}
static R9 r_CONNECT_NAME(R17 * p_P) { RT_B_TICK(); 
R17 * l_R_3191; memset(&l_R_3191, 0, sizeof l_R_3191);
l_R_3191 = ((*(R17 *)rt_nil_check(p_P))).f_D;
if ((l_R_3191 == NULL))
{
{ R9 rv3192 = r_MK(rt_str("\"\"", 2));
return rv3192; }
}
for (;;) {
if (((((*(R17 *)rt_nil_check(l_R_3191))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_3191))).f_KIND == g_N_APPLY))) goto L_end3193;
{
if (((!(((*(R17 *)rt_nil_check(l_R_3191))).f_KIND == g_N_INDEX)) && (!(((*(R17 *)rt_nil_check(l_R_3191))).f_KIND == g_N_FIELD))))
{
{ R9 rv3194 = r_MK(rt_str("\"\"", 2));
return rv3194; }
}
l_R_3191 = ((*(R17 *)rt_nil_check(l_R_3191))).f_A;
}
RT_B_TICK();
} L_end3193: ;
{ R9 rv3195 = r_CSTRING(((*(R17 *)rt_nil_check(l_R_3191))).f_NAME);
return rv3195; }
rt_raise(RT_X_INIT);
}
static R9 r_UP_FRAME(void) { RT_B_TICK(); 
if ((((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R9 rv3196 = r_MK(rt_str("NULL", 4));
return rv3196; }
}
{ R9 rv3197 = r_MK(rt_str("F", 1));
return rv3197; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R17 * p_P, R9 p_FN, R9 p_FT, R22 * p_LT) { RT_B_TICK(); 
R14 l_SAVED_CODE_3198; memset(&l_SAVED_CODE_3198, 0, sizeof l_SAVED_CODE_3198);
S_R14(&l_SAVED_CODE_3198, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R18 * l_SAVED_CTXS_3199; memset(&l_SAVED_CTXS_3199, 0, sizeof l_SAVED_CTXS_3199);
l_SAVED_CTXS_3199 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R19 * l_OUTER_3200; memset(&l_OUTER_3200, 0, sizeof l_OUTER_3200);
l_OUTER_3200 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_H_3201; memset(&l_H_3201, 0, sizeof l_H_3201);
l_H_3201 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_A;
R19 * l_CS_3202; memset(&l_CS_3202, 0, sizeof l_CS_3202);
l_CS_3202 = ((R19 *)rt_b_new(sizeof (R19)));
R9 l_UPT_3203; memset(&l_UPT_3203, 0, sizeof l_UPT_3203);
S_R9(&l_UPT_3203, r_MK(rt_str("void", 4)), 0);
if ((((*(R19 *)rt_nil_check(l_OUTER_3200))).f_LEVEL > ((rt_int)0LL)))
{
S_R9(&l_UPT_3203, ((*(R19 *)rt_nil_check(l_OUTER_3200))).f_FTYPE, 0);
}
S_R19(&(*(R19 *)rt_nil_check(l_CS_3202)), ({ R19 rc3204; memset(&rc3204, 0, sizeof rc3204);  rc3204.f_LEVEL = rt_add(((*(R19 *)rt_nil_check(l_OUTER_3200))).f_LEVEL, ((rt_int)1LL)); rc3204.f_R = NULL; rc3204.f_FRAMED = 1; S_R9(&rc3204.f_FTYPE, p_FT, 0); S_R14(&rc3204.f_FIELDS, ({ R14 rc3205; memset(&rc3205, 0, sizeof rc3205);  rc3205.f_HEAD = NULL; rc3205.f_TAIL = NULL; rc3205; }), 0); rc3204.f_UP = l_OUTER_3200; rc3204.f_IMPORTS = ((*(R17 *)rt_nil_check(l_H_3201))).f_B; rc3204.f_SIGNALS = ((*(R17 *)rt_nil_check(l_H_3201))).f_A; rc3204.f_RESULT = NULL; rc3204.f_IS_PATH = 1; S_R9(&rc3204.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3204; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_3203), &((*(R19 *)rt_nil_check(l_CS_3202))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_3202;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3206; memset(&rc3206, 0, sizeof rc3206);  rc3206.f_HEAD = NULL; rc3206.f_TAIL = NULL; rc3206; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R17 *)rt_nil_check(l_H_3201))).f_B, ((*(R17 *)rt_nil_check(l_H_3201))).f_A, ((*(R17 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_3207; memset(&l_I_3207, 0, sizeof l_I_3207);
l_I_3207 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_3207))).f_T = p_LT;
((*(R12 *)rt_nil_check(l_I_3207))).f_INPUT = 1;
S_R9(&((*(R12 *)rt_nil_check(l_I_3207))).f_FIELD, r_FMT1(rt_str("l_@", 3), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
S_R9(&((*(R12 *)rt_nil_check(l_I_3207))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3202))).f_FIELDS);
r_DEFINE(l_I_3207, ((*(R17 *)rt_nil_check(p_P))).f_LINE);
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
R17 * l_L_3208; memset(&l_L_3208, 0, sizeof l_L_3208);
l_L_3208 = ((*(R17 *)rt_nil_check(l_H_3201))).f_A;
R9 l_C_3209; memset(&l_C_3209, 0, sizeof l_C_3209);
S_R9(&l_C_3209, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3208 == NULL)) goto L_end3210;
{
S_R9(&l_C_3209, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_3209, r_EXC_NAME(((*(R17 *)rt_nil_check(l_L_3208))).f_NAME)), 0);
l_L_3208 = ((*(R17 *)rt_nil_check(l_L_3208))).f_NEXT;
}
RT_B_TICK();
} L_end3210: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_3209));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R19 *)rt_nil_check(l_CS_3202))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_3200;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3198, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_3199;
}
static R9 r_JOIN_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_3211; memset(&l_C_3211, 0, sizeof l_C_3211);
l_C_3211 = (p_B).f_HEAD;
R9 l_R_3212; memset(&l_R_3212, 0, sizeof l_R_3212);
S_R9(&l_R_3212, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_3211 == NULL)) goto L_end3213;
{
S_R9(&l_R_3212, r_CAT(l_R_3212, ((*(R15 *)rt_nil_check(l_C_3211))).f_T), 0);
l_C_3211 = ((*(R15 *)rt_nil_check(l_C_3211))).f_NEXT;
}
RT_B_TICK();
} L_end3213: ;
{ R9 rv3214 = l_R_3212;
return rv3214; }
rt_raise(RT_X_INIT);
}
static R9 r_PATH_REF(R17 * p_E) { RT_B_TICK(); 
R9 l_NAME_3215; memset(&l_NAME_3215, 0, sizeof l_NAME_3215);
S_R9(&l_NAME_3215, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
R9 l_SUB_3216; memset(&l_SUB_3216, 0, sizeof l_SUB_3216);
S_R9(&l_SUB_3216, r_MK(rt_str("0", 1)), 0);
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R17 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R9(&l_SUB_3216, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_3217; memset(&l_Y_3217, 0, sizeof l_Y_3217);
l_Y_3217 = r_LOOKUP(l_NAME_3215);
if ((l_Y_3217 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_3215);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3217))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_3215);
}
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3217))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R9 rv3218 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_3217), l_SUB_3216);
return rv3218; }
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
R9 l_NAME_3219; memset(&l_NAME_3219, 0, sizeof l_NAME_3219);
S_R9(&l_NAME_3219, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_3220; memset(&l_LINE_3220, 0, sizeof l_LINE_3220);
l_LINE_3220 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_3219, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_3221; memset(&l_V_3221, 0, sizeof l_V_3221);
S_R26(&l_V_3221, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3221).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_3220, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv3222 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_3221).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_3221).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3222; }
}
}
else if (r_TEQS(l_NAME_3219, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv3223 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3223; }
}
{ R26 rv3224 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3224; }
}
else if (r_TEQS(l_NAME_3219, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R17 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv3225 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv3225; }
}
{ R26 rv3226 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R17 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv3226; }
}
else if ((r_TEQS(l_NAME_3219, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_3219, rt_str("RELEASE", 7))))
{
if ((((!(((*(R17 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_3220, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_3219);
}
{
R26 l_V_3227; memset(&l_V_3227, 0, sizeof l_V_3227);
S_R26(&l_V_3227, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3227).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_3220, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_3227).f_LVAL))
{
r_FAIL(l_LINE_3220, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_3219, rt_str("REQUEST", 7)))
{
{ R26 rv3228 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_3227).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3228; }
}
{ R26 rv3229 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_3227).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3229; }
}
}
else if (r_TEQS(l_NAME_3219, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_3220);
{ R26 rv3230 = r_START_IO_CALL(p_E);
return rv3230; }
}
r_FAILT(l_LINE_3220, rt_str("unknown routine ", 16), l_NAME_3219);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R17 * p_E) { RT_B_TICK(); 
R27 * l_ARGS_3231; memset(&l_ARGS_3231, 0, sizeof l_ARGS_3231);
l_ARGS_3231 = r_CALL_ARGS(p_E);
R12 * l_Y_3232; memset(&l_Y_3232, 0, sizeof l_Y_3232);
l_Y_3232 = r_FIND_ROUTINE(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_ARGS_3231, ((*(R17 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_3233; memset(&l_R_3233, 0, sizeof l_R_3233);
if ((l_Y_3232 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_3233, r_CALL_SYM(l_Y_3232, l_ARGS_3231, ((*(R17 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv3234 = l_R_3233;
return rv3234; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R17 * p_IMPORTS, R17 * p_SIGNALS, R9 p_NAME) { RT_B_TICK(); 
R20 * l_I_3235; memset(&l_I_3235, 0, sizeof l_I_3235);
l_I_3235 = ((R20 *)rt_b_new(sizeof (R20)));
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R20(&(*(R20 *)rt_nil_check(l_I_3235)), ({ R20 rc3236; memset(&rc3236, 0, sizeof rc3236);  rc3236.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc3236.f_IMPORTS = p_IMPORTS; rc3236.f_SIGNALS = p_SIGNALS; S_R9(&rc3236.f_NAME, p_NAME, 0); rc3236.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc3236; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_3235;
}
static void r_LEAVE_ISCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R20 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R9 r_ROUTINE_CNAME(R9 p_NAME) { RT_B_TICK(); 
R9 l_BASE0_3237; memset(&l_BASE0_3237, 0, sizeof l_BASE0_3237);
S_R9(&l_BASE0_3237, r_FMT1(rt_str("r_@", 3), r_CID(p_NAME)), 0);
rstr l_S_3238; memset(&l_S_3238, 0, sizeof l_S_3238);
l_S_3238 = rt_b_str_new((l_BASE0_3237).f_LEN, 0);
rt_b_assign(&l_S_3238, r_STR(l_BASE0_3237, (l_BASE0_3237).f_LEN));
R9 l_BASE_3239; memset(&l_BASE_3239, 0, sizeof l_BASE_3239);
S_R9(&l_BASE_3239, l_BASE0_3237, 0);
R17 * l_N_3240; memset(&l_N_3240, 0, sizeof l_N_3240);
l_N_3240 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it3242_lo = ((rt_int)0LL), it3242_hi = rt_sub((l_BASE_3239).f_LEN, ((rt_int)1LL));
for (rt_int it3242 = it3242_lo; it3242 <= it3242_hi; it3242++) {
{
if (rt_b_eq(rt_b_slice(l_S_3238, it3242, it3242), rt_str("$", 1)))
{
S_R9(&l_BASE_3239, r_MK(rt_b_cat(rt_b_cat(rt_b_slice(l_S_3238, ((rt_int)0LL), rt_sub(it3242, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_3238, rt_add(it3242, ((rt_int)1LL)), rt_sub((l_BASE_3239).f_LEN, ((rt_int)1LL))))), 0);
}
}
RT_B_TICK();
if (it3242 == it3242_hi) break;
} } L_end3241: ;
for (;;) {
if ((l_N_3240 == NULL)) goto L_end3243;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_N_3240))).f_NAME, l_BASE_3239))
{
{ R9 rv3244 = r_FMT2(rt_str("@_@", 3), l_BASE_3239, r_NEW_NAME(rt_str("", 0)));
return rv3244; }
}
l_N_3240 = ((*(R17 *)rt_nil_check(l_N_3240))).f_NEXT;
}
RT_B_TICK();
} L_end3243: ;
l_N_3240 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_3240))).f_NAME, l_BASE_3239, 0);
((*(R17 *)rt_nil_check(l_N_3240))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_3240;
{ R9 rv3245 = l_BASE_3239;
return rv3245; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R17 * p_B) { RT_B_TICK(); 
if ((p_B == NULL))
{
{ rt_int rv3246 = 0;
return rv3246; }
}
if ((!(((*(R17 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv3247 = 1;
return rv3247; }
}
{ rt_int rv3248 = r_HAS_HANDLERS(((*(R17 *)rt_nil_check(p_B))).f_B);
return rv3248; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R17 * p_S0) { RT_B_TICK(); 
R17 * l_S_3249; memset(&l_S_3249, 0, sizeof l_S_3249);
l_S_3249 = p_S0;
for (;;) {
if ((l_S_3249 == NULL)) goto L_end3250;
{
if (((((*(R17 *)rt_nil_check(l_S_3249))).f_KIND == g_N_EXCEPT) || (((*(R17 *)rt_nil_check(l_S_3249))).f_KIND == g_N_PAR)))
{
{ rt_int rv3251 = 1;
return rv3251; }
}
if (((((*(R17 *)rt_nil_check(l_S_3249))).f_KIND == g_N_LABELED) || (((*(R17 *)rt_nil_check(l_S_3249))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R17 *)rt_nil_check(l_S_3249))).f_A) || r_HAS_HANDLERS(((*(R17 *)rt_nil_check(l_S_3249))).f_B)))
{
{ rt_int rv3252 = 1;
return rv3252; }
}
}
else if ((((*(R17 *)rt_nil_check(l_S_3249))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3249))).f_A))).f_B))
{
{ rt_int rv3253 = 1;
return rv3253; }
}
}
else if (((((*(R17 *)rt_nil_check(l_S_3249))).f_KIND == g_N_LOOP) || (((*(R17 *)rt_nil_check(l_S_3249))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3249))).f_B))).f_B))
{
{ rt_int rv3254 = 1;
return rv3254; }
}
}
else if (((((*(R17 *)rt_nil_check(l_S_3249))).f_KIND == g_N_IF) || (((*(R17 *)rt_nil_check(l_S_3249))).f_KIND == g_N_CASE)))
{
{
R17 * l_A_3255; memset(&l_A_3255, 0, sizeof l_A_3255);
l_A_3255 = ((*(R17 *)rt_nil_check(l_S_3249))).f_A;
if ((((*(R17 *)rt_nil_check(l_S_3249))).f_KIND == g_N_CASE))
{
l_A_3255 = ((*(R17 *)rt_nil_check(l_S_3249))).f_B;
if ((!(((*(R17 *)rt_nil_check(l_S_3249))).f_D == NULL)))
{
{ rt_int rv3256 = 1;
return rv3256; }
}
if ((!(((*(R17 *)rt_nil_check(l_S_3249))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3249))).f_C))).f_B))
{
{ rt_int rv3257 = 1;
return rv3257; }
}
}
}
else if ((!(((*(R17 *)rt_nil_check(l_S_3249))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3249))).f_B))).f_B))
{
{ rt_int rv3258 = 1;
return rv3258; }
}
}
for (;;) {
if ((l_A_3255 == NULL)) goto L_end3259;
{
if ((!(((*(R17 *)rt_nil_check(l_A_3255))).f_C == NULL)))
{
{ rt_int rv3260 = 1;
return rv3260; }
}
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_3255))).f_B))).f_B))
{
{ rt_int rv3261 = 1;
return rv3261; }
}
l_A_3255 = ((*(R17 *)rt_nil_check(l_A_3255))).f_NEXT;
}
RT_B_TICK();
} L_end3259: ;
}
}
l_S_3249 = ((*(R17 *)rt_nil_check(l_S_3249))).f_NEXT;
}
RT_B_TICK();
} L_end3250: ;
{ rt_int rv3262 = 0;
return rv3262; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R17 * p_R) { RT_B_TICK(); 
R12 * l_Y_3263; memset(&l_Y_3263, 0, sizeof l_Y_3263);
l_Y_3263 = r_NEW_SYM(g_Y_ROUTINE, ((*(R17 *)rt_nil_check(p_R))).f_NAME);
R9 l_RN_3264; memset(&l_RN_3264, 0, sizeof l_RN_3264);
S_R9(&l_RN_3264, ((*(R17 *)rt_nil_check(p_R))).f_NAME, 0);
rstr l_S_3265; memset(&l_S_3265, 0, sizeof l_S_3265);
l_S_3265 = rt_b_str_new((l_RN_3264).f_LEN, 0);
rt_b_assign(&l_S_3265, r_STR(l_RN_3264, (l_RN_3264).f_LEN));
((*(R12 *)rt_nil_check(l_Y_3263))).f_DECL = p_R;
S_R9(&((*(R12 *)rt_nil_check(l_Y_3263))).f_ACCESS, r_ROUTINE_CNAME(((*(R17 *)rt_nil_check(p_R))).f_NAME), 0);
if ((((((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)) && ((((*(R7 *)rt_nil_check(g_W))).f_SEPSEG).f_LEN > ((rt_int)0LL))) && (!(((*(R17 *)rt_nil_check(p_R))).f_FL == ((rt_int)1LL)))))
{
((*(R7 *)rt_nil_check(g_W))).f_SEPR = rt_add(((*(R7 *)rt_nil_check(g_W))).f_SEPR, ((rt_int)1LL));
S_R9(&((*(R12 *)rt_nil_check(l_Y_3263))).f_ACCESS, r_FMT3(rt_str("bs_@_r@_@", 9), r_CID(((*(R7 *)rt_nil_check(g_W))).f_SEPSEG), r_NUM(((*(R7 *)rt_nil_check(g_W))).f_SEPR), r_CID(((*(R17 *)rt_nil_check(p_R))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_Y_3263))).f_LINKAGE = ((rt_int)1LL);
if (((*(R7 *)rt_nil_check(g_W))).f_EXTSEG)
{
((*(R12 *)rt_nil_check(l_Y_3263))).f_LINKAGE = ((rt_int)2LL);
}
}
((*(R12 *)rt_nil_check(l_Y_3263))).f_FRAMED = r_NEEDS_FRAME(((*(R17 *)rt_nil_check(p_R))).f_C);
if ((((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3263))).f_FIELD, ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_3263, ((*(R17 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it3267_lo = ((rt_int)1LL), it3267_hi = rt_sub((((*(R17 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it3267 = it3267_lo; it3267 <= it3267_hi; it3267++) {
{
if (rt_b_eq(rt_b_slice(l_S_3265, it3267, it3267), rt_str("$", 1)))
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3263))).f_PREFIX, r_MKN(rt_b_slice(l_S_3265, ((rt_int)0LL), rt_sub(it3267, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_3268; memset(&l_SHORT_3268, 0, sizeof l_SHORT_3268);
l_SHORT_3268 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_3265, rt_add(it3267, ((rt_int)1LL)), rt_sub((((*(R17 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_3268))).f_ORIG = l_Y_3263;
S_R9(&((*(R12 *)rt_nil_check(l_SHORT_3268))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_3263))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_3268))).f_DECL = p_R;
r_DEFINE(l_SHORT_3268, ((*(R17 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end3266;
}
}
RT_B_TICK();
if (it3267 == it3267_hi) break;
} } L_end3266: ;
}
static void r_DECLARE_MEMBERS(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3269; memset(&l_R_3269, 0, sizeof l_R_3269);
l_R_3269 = p_RS;
for (;;) {
if ((l_R_3269 == NULL)) goto L_end3270;
{
if ((((*(R17 *)rt_nil_check(l_R_3269))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_3269);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_3269);
}
l_R_3269 = ((*(R17 *)rt_nil_check(l_R_3269))).f_NEXT;
}
RT_B_TICK();
} L_end3270: ;
}
static void r_ROUTINE_HEADERS(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3271; memset(&l_R_3271, 0, sizeof l_R_3271);
l_R_3271 = p_RS;
for (;;) {
if ((l_R_3271 == NULL)) goto L_end3272;
{
if ((((*(R17 *)rt_nil_check(l_R_3271))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3273; memset(&l_M_3273, 0, sizeof l_M_3273);
l_M_3273 = r_FIND_DECL(l_R_3271);
r_ENTER_MODULE(l_M_3273);
r_ROUTINE_HEADERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3271))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3273);
}
}
else
{
{
R12 * l_Y_3274; memset(&l_Y_3274, 0, sizeof l_Y_3274);
l_Y_3274 = r_FIND_DECL(l_R_3271);
r_ROUTINE_HEADER(l_Y_3274);
}
}
l_R_3271 = ((*(R17 *)rt_nil_check(l_R_3271))).f_NEXT;
}
RT_B_TICK();
} L_end3272: ;
}
static void r_DISTINCT_SIGNATURES(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3275; memset(&l_R_3275, 0, sizeof l_R_3275);
l_R_3275 = p_RS;
for (;;) {
if ((l_R_3275 == NULL)) goto L_end3276;
{
if ((((*(R17 *)rt_nil_check(l_R_3275))).f_KIND == g_N_ROUTINE))
{
{
R17 * l_Q_3277; memset(&l_Q_3277, 0, sizeof l_Q_3277);
l_Q_3277 = ((*(R17 *)rt_nil_check(l_R_3275))).f_NEXT;
for (;;) {
if ((l_Q_3277 == NULL)) goto L_end3278;
{
if (((((*(R17 *)rt_nil_check(l_Q_3277))).f_KIND == g_N_ROUTINE) && r_TEQ(((*(R17 *)rt_nil_check(l_Q_3277))).f_NAME, ((*(R17 *)rt_nil_check(l_R_3275))).f_NAME)))
{
{
R12 * l_A_3279; memset(&l_A_3279, 0, sizeof l_A_3279);
l_A_3279 = r_FIND_DECL(l_R_3275);
R12 * l_B_3280; memset(&l_B_3280, 0, sizeof l_B_3280);
l_B_3280 = r_FIND_DECL(l_Q_3277);
r_ROUTINE_HEADER(l_A_3279);
r_ROUTINE_HEADER(l_B_3280);
if (r_SAME_SIGNATURE(l_A_3279, l_B_3280))
{
r_FAILT(((*(R17 *)rt_nil_check(l_Q_3277))).f_LINE, rt_str("two routines of one scope with the same signature (4.1): ", 57), ((*(R17 *)rt_nil_check(l_Q_3277))).f_NAME);
}
}
}
l_Q_3277 = ((*(R17 *)rt_nil_check(l_Q_3277))).f_NEXT;
}
RT_B_TICK();
} L_end3278: ;
}
}
l_R_3275 = ((*(R17 *)rt_nil_check(l_R_3275))).f_NEXT;
}
RT_B_TICK();
} L_end3276: ;
}
static R12 * r_FIND_DECL(R17 * p_D) { RT_B_TICK(); 
R12 * l_Y_3281; memset(&l_Y_3281, 0, sizeof l_Y_3281);
l_Y_3281 = r_LOOKUP(((*(R17 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_3281 == NULL)) goto L_end3282;
{
if (((((*(R12 *)rt_nil_check(l_Y_3281))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_3281))).f_ORIG == NULL)))
{
{ R12 * rv3283 = l_Y_3281;
return rv3283; }
}
l_Y_3281 = r_LOOKUP_NEXT(l_Y_3281);
}
RT_B_TICK();
} L_end3282: ;
r_FAILT(((*(R17 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R17 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R17 * p_DECLS) { RT_B_TICK(); 
R17 * l_D_3284; memset(&l_D_3284, 0, sizeof l_D_3284);
l_D_3284 = p_DECLS;
for (;;) {
if ((l_D_3284 == NULL)) goto L_end3285;
{
if (((((*(R17 *)rt_nil_check(l_D_3284))).f_KIND == g_N_TYPE) && (((*(R17 *)rt_nil_check(l_D_3284))).f_A == NULL)))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_3284))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_3286; memset(&l_Y_3286, 0, sizeof l_Y_3286);
l_Y_3286 = r_FIND_DECL(l_D_3284);
R22 * l_T_3287; memset(&l_T_3287, 0, sizeof l_T_3287);
l_T_3287 = r_RESOLVE_USER(r_TYPE_REF(l_D_3284));
}
}
}
l_D_3284 = ((*(R17 *)rt_nil_check(l_D_3284))).f_NEXT;
}
RT_B_TICK();
} L_end3285: ;
}
static R17 * r_TYPE_REF(R17 * p_D) { RT_B_TICK(); 
R17 * l_TS_3288; memset(&l_TS_3288, 0, sizeof l_TS_3288);
l_TS_3288 = r_NEW_NODE(g_TS_NAME, ((*(R17 *)rt_nil_check(p_D))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_TS_3288))).f_NAME, ((*(R17 *)rt_nil_check(p_D))).f_NAME, 0);
{ R17 * rv3289 = l_TS_3288;
return rv3289; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R17 * p_M) { RT_B_TICK(); 
R12 * l_Y_3290; memset(&l_Y_3290, 0, sizeof l_Y_3290);
l_Y_3290 = r_NEW_SYM(g_Y_MODULE, ((*(R17 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_3291; memset(&l_SAVED_3291, 0, sizeof l_SAVED_3291);
l_SAVED_3291 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_3290))).f_DECL = p_M;
r_DEFINE(l_Y_3290, ((*(R17 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_3292; memset(&l_MARK_3292, 0, sizeof l_MARK_3292);
l_MARK_3292 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_3290;
r_DECLARE_TYPES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_3290))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_3292);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_3291;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_3290);
}
static void r_ENTER_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_Y_3293; memset(&l_Y_3293, 0, sizeof l_Y_3293);
l_Y_3293 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_3293 == NULL)) goto L_end3294;
{
{
R12 * l_NEXT_3295; memset(&l_NEXT_3295, 0, sizeof l_NEXT_3295);
l_NEXT_3295 = ((*(R12 *)rt_nil_check(l_Y_3293))).f_SNEXT;
r_DEFINE(l_Y_3293, ((rt_int)0LL));
l_Y_3293 = l_NEXT_3295;
}
}
RT_B_TICK();
} L_end3294: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_MARK_3296; memset(&l_MARK_3296, 0, sizeof l_MARK_3296);
l_MARK_3296 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_3296 == NULL)) goto L_end3297;
{
if ((((*(R12 *)rt_nil_check(l_MARK_3296))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end3297;
}
l_MARK_3296 = ((*(R12 *)rt_nil_check(l_MARK_3296))).f_SNEXT;
}
RT_B_TICK();
} L_end3297: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_3296);
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
{ rt_int rv3298 = 1;
return rv3298; }
}
}
{ rt_int rv3299 = 0;
return rv3299; }
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
R17 * l_D_3300; memset(&l_D_3300, 0, sizeof l_D_3300);
l_D_3300 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_3301; memset(&l_Y_3301, 0, sizeof l_Y_3301);
l_Y_3301 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3301 == NULL)) goto L_end3302;
{
if (r_EXPORTED_BY(l_D_3300, l_Y_3301))
{
((*(R12 *)rt_nil_check(l_Y_3301))).f_EXPORTED = 1;
{
R12 * l_A_3303; memset(&l_A_3303, 0, sizeof l_A_3303);
l_A_3303 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_3301))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_3301))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_3303)), (*(R12 *)rt_nil_check(l_Y_3301)), 0);
((*(R12 *)rt_nil_check(l_A_3303))).f_ORIG = r_ORIGINAL(l_Y_3301);
((*(R12 *)rt_nil_check(l_A_3303))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_3303, ((*(R17 *)rt_nil_check(l_D_3300))).f_LINE);
}
}
l_Y_3301 = ((*(R12 *)rt_nil_check(l_Y_3301))).f_SNEXT;
}
RT_B_TICK();
} L_end3302: ;
{
R17 * l_X_3304; memset(&l_X_3304, 0, sizeof l_X_3304);
l_X_3304 = ((*(R17 *)rt_nil_check(l_D_3300))).f_B;
for (;;) {
if ((l_X_3304 == NULL)) goto L_end3305;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R17 *)rt_nil_check(l_X_3304))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_X_3304))).f_LINE, rt_str("the module does not declare ", 28), ((*(R17 *)rt_nil_check(l_X_3304))).f_NAME);
}
r_CHECK_EXPORT_ITEM(p_M, l_X_3304);
l_X_3304 = ((*(R17 *)rt_nil_check(l_X_3304))).f_NEXT;
}
RT_B_TICK();
} L_end3305: ;
}
}
static void r_CHECK_EXPORT_ITEM(R12 * p_M, R17 * p_X) { RT_B_TICK(); 
R12 * l_Y_3306; memset(&l_Y_3306, 0, sizeof l_Y_3306);
l_Y_3306 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
rt_int l_IS_TYPE_3307; memset(&l_IS_TYPE_3307, 0, sizeof l_IS_TYPE_3307);
l_IS_TYPE_3307 = 0;
rt_int l_IS_ROUTINE_3308; memset(&l_IS_ROUTINE_3308, 0, sizeof l_IS_ROUTINE_3308);
l_IS_ROUTINE_3308 = 0;
for (;;) {
if ((l_Y_3306 == NULL)) goto L_end3309;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_3306))).f_NAME, ((*(R17 *)rt_nil_check(p_X))).f_NAME))
{
if ((((*(R12 *)rt_nil_check(l_Y_3306))).f_KIND == g_Y_TYPE))
{
l_IS_TYPE_3307 = 1;
}
else if ((((((*(R12 *)rt_nil_check(l_Y_3306))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_3306))).f_KIND == g_Y_MODULE)) || (((*(R12 *)rt_nil_check(l_Y_3306))).f_KIND == g_Y_ENUMLIT)))
{
l_IS_ROUTINE_3308 = 1;
}
}
else if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_3306))).f_PREFIX, ((*(R17 *)rt_nil_check(p_X))).f_NAME))
{
l_IS_ROUTINE_3308 = 1;
}
l_Y_3306 = ((*(R12 *)rt_nil_check(l_Y_3306))).f_SNEXT;
}
RT_B_TICK();
} L_end3309: ;
if (((!l_IS_TYPE_3307) && (!l_IS_ROUTINE_3308)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_X))).f_LINE, rt_str("only type and routine names are exported (4.4): ", 48), ((*(R17 *)rt_nil_check(p_X))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(p_X))).f_A == NULL)))
{
if ((!l_IS_TYPE_3307))
{
r_FAILT(((*(R17 *)rt_nil_check(p_X))).f_LINE, rt_str("only a type-name is followed by a WITH clause (4.4): ", 53), ((*(R17 *)rt_nil_check(p_X))).f_NAME);
}
{
R17 * l_OP_3310; memset(&l_OP_3310, 0, sizeof l_OP_3310);
l_OP_3310 = ((*(R17 *)rt_nil_check(p_X))).f_A;
for (;;) {
if ((l_OP_3310 == NULL)) goto L_end3311;
{
{
rt_int l_FOUND_3312; memset(&l_FOUND_3312, 0, sizeof l_FOUND_3312);
l_FOUND_3312 = 0;
l_Y_3306 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3306 == NULL)) goto L_end3313;
{
if (((((*(R12 *)rt_nil_check(l_Y_3306))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_3306))).f_PREFIX, ((*(R17 *)rt_nil_check(p_X))).f_NAME)))
{
if (r_TEQ(r_BASE_NAME(r_ORIGINAL(l_Y_3306)), ((*(R17 *)rt_nil_check(l_OP_3310))).f_NAME))
{
l_FOUND_3312 = 1;
}
}
l_Y_3306 = ((*(R12 *)rt_nil_check(l_Y_3306))).f_SNEXT;
}
RT_B_TICK();
} L_end3313: ;
if ((!l_FOUND_3312))
{
r_FAILT(((*(R17 *)rt_nil_check(l_OP_3310))).f_LINE, rt_str("a WITH clause lists operations of the type (4.4): ", 50), ((*(R17 *)rt_nil_check(l_OP_3310))).f_NAME);
}
}
l_OP_3310 = ((*(R17 *)rt_nil_check(l_OP_3310))).f_NEXT;
}
RT_B_TICK();
} L_end3311: ;
}
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_3314; memset(&l_Y_3314, 0, sizeof l_Y_3314);
l_Y_3314 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3314 == NULL)) goto L_end3315;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_3314))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_3314))).f_PREFIX, p_NAME)))
{
{ rt_int rv3316 = 1;
return rv3316; }
}
l_Y_3314 = ((*(R12 *)rt_nil_check(l_Y_3314))).f_SNEXT;
}
RT_B_TICK();
} L_end3315: ;
{ rt_int rv3317 = 0;
return rv3317; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R17 * p_D, R12 * p_Y) { RT_B_TICK(); 
R17 * l_X_3318; memset(&l_X_3318, 0, sizeof l_X_3318);
l_X_3318 = ((*(R17 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv3319 = 0;
return rv3319; }
}
if ((((*(R17 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv3320 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv3320; }
}
for (;;) {
if ((l_X_3318 == NULL)) goto L_end3321;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_X_3318))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3322 = 1;
return rv3322; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R17 *)rt_nil_check(l_X_3318))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R17 *)rt_nil_check(l_X_3318))).f_A == NULL))
{
{ rt_int rv3323 = 1;
return rv3323; }
}
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_X_3318))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv3324 = 1;
return rv3324; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_3325; memset(&l_T_3325, 0, sizeof l_T_3325);
l_T_3325 = r_ORIG_LOOKUP_MEMBER(((*(R17 *)rt_nil_check(l_X_3318))).f_NAME, p_Y);
if ((!(l_T_3325 == NULL)))
{
{ rt_int rv3326 = 1;
return rv3326; }
}
}
}
l_X_3318 = ((*(R17 *)rt_nil_check(l_X_3318))).f_NEXT;
}
RT_B_TICK();
} L_end3321: ;
{ rt_int rv3327 = 0;
return rv3327; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R9 p_NAME, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3328; memset(&l_M_3328, 0, sizeof l_M_3328);
l_M_3328 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_3329; memset(&l_Z_3329, 0, sizeof l_Z_3329);
if ((l_M_3328 == NULL))
{
{ R12 * rv3330 = NULL;
return rv3330; }
}
l_Z_3329 = ((*(R12 *)rt_nil_check(l_M_3328))).f_MEMBERS;
for (;;) {
if ((l_Z_3329 == NULL)) goto L_end3331;
{
if (((((*(R12 *)rt_nil_check(l_Z_3329))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_3329))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_3329))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_3329))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_3329))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv3332 = l_Z_3329;
return rv3332; }
}
}
}
}
l_Z_3329 = ((*(R12 *)rt_nil_check(l_Z_3329))).f_SNEXT;
}
RT_B_TICK();
} L_end3331: ;
{ R12 * rv3333 = NULL;
return rv3333; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3334; memset(&l_R_3334, 0, sizeof l_R_3334);
l_R_3334 = p_RS;
for (;;) {
if ((l_R_3334 == NULL)) goto L_end3335;
{
if ((((*(R17 *)rt_nil_check(l_R_3334))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3336; memset(&l_M_3336, 0, sizeof l_M_3336);
l_M_3336 = r_FIND_DECL(l_R_3334);
R17 * l_D_3337; memset(&l_D_3337, 0, sizeof l_D_3337);
l_D_3337 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3334))).f_C))).f_A;
r_ENTER_MODULE(l_M_3336);
for (;;) {
if ((l_D_3337 == NULL)) goto L_end3338;
{
if (((((*(R17 *)rt_nil_check(l_D_3337))).f_KIND == g_N_VAR) || (((*(R17 *)rt_nil_check(l_D_3337))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3337);
}
l_D_3337 = ((*(R17 *)rt_nil_check(l_D_3337))).f_NEXT;
}
RT_B_TICK();
} L_end3338: ;
r_MODULE_DATA(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3334))).f_C))).f_C);
r_DISTINCT_SIGNATURES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3334))).f_C))).f_C);
r_ROUTINE_USES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3334))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3336);
}
}
l_R_3334 = ((*(R17 *)rt_nil_check(l_R_3334))).f_NEXT;
}
RT_B_TICK();
} L_end3335: ;
}
static void r_ROUTINE_BODIES(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3339; memset(&l_R_3339, 0, sizeof l_R_3339);
l_R_3339 = p_RS;
for (;;) {
if ((l_R_3339 == NULL)) goto L_end3340;
{
if ((((*(R17 *)rt_nil_check(l_R_3339))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3341; memset(&l_M_3341, 0, sizeof l_M_3341);
l_M_3341 = r_FIND_DECL(l_R_3339);
r_ENTER_MODULE(l_M_3341);
r_ROUTINE_BODIES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3339))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3341);
}
}
else
{
{
R12 * l_Y_3342; memset(&l_Y_3342, 0, sizeof l_Y_3342);
l_Y_3342 = r_FIND_DECL(l_R_3339);
if ((((*(R12 *)rt_nil_check(l_Y_3342))).f_LINKAGE == ((rt_int)2LL)))
{
}
else if (((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3342))).f_DECL))).f_FL == ((rt_int)1LL)) && (!((*(R12 *)rt_nil_check(l_Y_3342))).f_GENERIC)))
{
}
else if ((!((*(R12 *)rt_nil_check(l_Y_3342))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_3342);
}
}
}
l_R_3339 = ((*(R17 *)rt_nil_check(l_R_3339))).f_NEXT;
}
RT_B_TICK();
} L_end3340: ;
}
static void r_PENDING_BODIES(void) { RT_B_TICK(); 
rt_int l_LEVEL_3343; memset(&l_LEVEL_3343, 0, sizeof l_LEVEL_3343);
l_LEVEL_3343 = r_CUR_LEVEL();
rt_int l_MORE_3344; memset(&l_MORE_3344, 0, sizeof l_MORE_3344);
l_MORE_3344 = 1;
for (;;) {
if ((!l_MORE_3344)) goto L_end3345;
{
l_MORE_3344 = 0;
{
R12 * l_P_3346; memset(&l_P_3346, 0, sizeof l_P_3346);
l_P_3346 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_3347; memset(&l_PREV_3347, 0, sizeof l_PREV_3347);
l_PREV_3347 = NULL;
for (;;) {
if ((l_P_3346 == NULL)) goto L_end3348;
{
if ((((*(R12 *)rt_nil_check(l_P_3346))).f_LEVEL == l_LEVEL_3343))
{
if ((l_PREV_3347 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_3346))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_3347))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_3346))).f_MEMBERS;
}
{
R12 * l_SAVED_SEG_3349; memset(&l_SAVED_SEG_3349, 0, sizeof l_SAVED_SEG_3349);
l_SAVED_SEG_3349 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R12 * l_HOME_3350; memset(&l_HOME_3350, 0, sizeof l_HOME_3350);
l_HOME_3350 = r_ENTER_HOME(l_P_3346);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(l_P_3346))).f_HOME;
r_ENTER_MODULE_OF(l_P_3346);
r_ROUTINE_BODY(l_P_3346);
r_LEAVE_MODULE_OF(l_P_3346);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_3349;
r_LEAVE_HOME(l_P_3346, l_HOME_3350);
}
l_MORE_3344 = 1;
goto L_end3348;
}
l_PREV_3347 = l_P_3346;
l_P_3346 = ((*(R12 *)rt_nil_check(l_P_3346))).f_MEMBERS;
}
RT_B_TICK();
} L_end3348: ;
}
}
RT_B_TICK();
} L_end3345: ;
}
static void r_CLOSED_BODY(R17 * p_B) { RT_B_TICK(); 
R17 * l_D_3351; memset(&l_D_3351, 0, sizeof l_D_3351);
l_D_3351 = ((*(R17 *)rt_nil_check(p_B))).f_A;
R17 * l_S_3352; memset(&l_S_3352, 0, sizeof l_S_3352);
l_S_3352 = ((*(R17 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R17 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R17 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R17 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_3351 == NULL)) goto L_end3353;
{
if (((((*(R17 *)rt_nil_check(l_D_3351))).f_KIND == g_N_VAR) || (((*(R17 *)rt_nil_check(l_D_3351))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3351);
}
l_D_3351 = ((*(R17 *)rt_nil_check(l_D_3351))).f_NEXT;
}
RT_B_TICK();
} L_end3353: ;
r_MODULE_DATA(((*(R17 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R17 *)rt_nil_check(p_B))).f_C);
r_DISTINCT_SIGNATURES(((*(R17 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R17 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R17 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_3352 == NULL)) goto L_end3354;
{
r_STMT(l_S_3352);
l_S_3352 = ((*(R17 *)rt_nil_check(l_S_3352))).f_NEXT;
}
RT_B_TICK();
} L_end3354: ;
r_ROUTINE_BODIES(((*(R17 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { RT_B_TICK(); 
R17 * l_R_3355; memset(&l_R_3355, 0, sizeof l_R_3355);
l_R_3355 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_3356; memset(&l_SAVED_CODE_3356, 0, sizeof l_SAVED_CODE_3356);
S_R14(&l_SAVED_CODE_3356, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R18 * l_SAVED_CTXS_3357; memset(&l_SAVED_CTXS_3357, 0, sizeof l_SAVED_CTXS_3357);
l_SAVED_CTXS_3357 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R21 * l_SAVED_BINDS_3358; memset(&l_SAVED_BINDS_3358, 0, sizeof l_SAVED_BINDS_3358);
l_SAVED_BINDS_3358 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R19 * l_OUTER_3359; memset(&l_OUTER_3359, 0, sizeof l_OUTER_3359);
l_OUTER_3359 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R19 * l_CS_3360; memset(&l_CS_3360, 0, sizeof l_CS_3360);
l_CS_3360 = ((R19 *)rt_b_new(sizeof (R19)));
R9 l_PROLOGUE_3361; memset(&l_PROLOGUE_3361, 0, sizeof l_PROLOGUE_3361);
S_R9(&l_PROLOGUE_3361, r_MK(rt_str("", 0)), 0);
S_R19(&(*(R19 *)rt_nil_check(l_CS_3360)), ({ R19 rc3362; memset(&rc3362, 0, sizeof rc3362);  rc3362.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc3362.f_R = p_Y; rc3362.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R9(&rc3362.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc3362.f_FIELDS, ({ R14 rc3363; memset(&rc3363, 0, sizeof rc3363);  rc3363.f_HEAD = NULL; rc3363.f_TAIL = NULL; rc3363; }), 0); rc3362.f_UP = l_OUTER_3359; rc3362.f_IMPORTS = ((*(R17 *)rt_nil_check(l_R_3355))).f_E; rc3362.f_SIGNALS = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3355))).f_D))).f_A; rc3362.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc3362.f_IS_PATH = 0; S_R9(&rc3362.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3362; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R19 *)rt_nil_check(l_CS_3360))).f_FTYPE, ((*(R19 *)rt_nil_check(l_CS_3360))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R19 *)rt_nil_check(l_CS_3360))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R19 *)rt_nil_check(l_CS_3360))).f_FIELDS);
}
S_R9(&l_PROLOGUE_3361, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R19 *)rt_nil_check(l_CS_3360))).f_FTYPE, ((*(R19 *)rt_nil_check(l_CS_3360))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_PROLOGUE_3361, r_CATS(l_PROLOGUE_3361, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_3360;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3364; memset(&rc3364, 0, sizeof rc3364);  rc3364.f_HEAD = NULL; rc3364.f_TAIL = NULL; rc3364; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R17 *)rt_nil_check(l_R_3355))).f_E, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3355))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R17 *)rt_nil_check(l_R_3355))).f_LINE);
{
R28 * l_P_3365; memset(&l_P_3365, 0, sizeof l_P_3365);
l_P_3365 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_3365 == NULL)) goto L_end3366;
{
if ((!(((*(R28 *)rt_nil_check(l_P_3365))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R28 *)rt_nil_check(l_P_3365))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_3367; memset(&l_V_3367, 0, sizeof l_V_3367);
l_V_3367 = r_NEW_SYM(g_Y_VAR, ((*(R28 *)rt_nil_check(l_P_3365))).f_NAME);
R21 * l_MB_3368; memset(&l_MB_3368, 0, sizeof l_MB_3368);
l_MB_3368 = r_FIND_BIND(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, r_QMKN(rt_str("=", 1), ((*(R28 *)rt_nil_check(l_P_3365))).f_NAME));
((*(R12 *)rt_nil_check(l_V_3367))).f_T = ((*(R28 *)rt_nil_check(l_P_3365))).f_T;
((*(R12 *)rt_nil_check(l_V_3367))).f_INPUT = (((*(R28 *)rt_nil_check(l_P_3365))).f_MODE == g_M_IN);
if ((!(l_MB_3368 == NULL)))
{
((*(R12 *)rt_nil_check(l_V_3367))).f_HASMV = ((*(R21 *)rt_nil_check(l_MB_3368))).f_HASMV;
((*(R12 *)rt_nil_check(l_V_3367))).f_MV = ((*(R21 *)rt_nil_check(l_MB_3368))).f_MV;
}
((*(R12 *)rt_nil_check(l_V_3367))).f_BYREF = (!(((*(R28 *)rt_nil_check(l_P_3365))).f_MODE == g_M_IN));
S_R9(&((*(R12 *)rt_nil_check(l_V_3367))).f_FIELD, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_3365))).f_NAME)), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_3367))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R28 *)rt_nil_check(l_P_3365))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3365))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3360))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3367))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), r_CID(((*(R28 *)rt_nil_check(l_P_3365))).f_NAME)), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_3365))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3365))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3360))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3367))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_3365))).f_NAME)), 0);
}
S_R9(&l_PROLOGUE_3361, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_3361, r_CID(((*(R28 *)rt_nil_check(l_P_3365))).f_NAME), r_CID(((*(R28 *)rt_nil_check(l_P_3365))).f_NAME)), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_3367))).f_BYREF)
{
S_R9(&((*(R12 *)rt_nil_check(l_V_3367))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), r_CID(((*(R28 *)rt_nil_check(l_P_3365))).f_NAME)), 0);
}
else
{
S_R9(&((*(R12 *)rt_nil_check(l_V_3367))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_3365))).f_NAME)), 0);
}
if ((((*(R28 *)rt_nil_check(l_P_3365))).f_MODE == g_M_OUT))
{
{
R9 l_ARGA_3369; memset(&l_ARGA_3369, 0, sizeof l_ARGA_3369);
S_R9(&l_ARGA_3369, ((*(R12 *)rt_nil_check(l_V_3367))).f_ACCESS, 0);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_3365))).f_T, l_ARGA_3369, ((*(R17 *)rt_nil_check(l_R_3355))).f_LINE, 1);
((*(R12 *)rt_nil_check(l_V_3367))).f_BYREF = 0;
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ o_@;", 7), r_CTYPE(((*(R28 *)rt_nil_check(l_P_3365))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3365))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3360))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3367))).f_ACCESS, r_FMT1(rt_str("F->o_@", 6), r_CID(((*(R28 *)rt_nil_check(l_P_3365))).f_NAME)), 0);
}
else
{
S_R9(&l_PROLOGUE_3361, r_FMT3(rt_str("@ @ o_@;", 8), l_PROLOGUE_3361, r_CTYPE(((*(R28 *)rt_nil_check(l_P_3365))).f_T), r_CID(((*(R28 *)rt_nil_check(l_P_3365))).f_NAME)), 0);
S_R9(&((*(R12 *)rt_nil_check(l_V_3367))).f_ACCESS, r_FMT1(rt_str("o_@", 3), r_CID(((*(R28 *)rt_nil_check(l_P_3365))).f_NAME)), 0);
}
S_R9(&l_PROLOGUE_3361, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_3361, ((*(R12 *)rt_nil_check(l_V_3367))).f_ACCESS, l_ARGA_3369), 0);
if (r_NEEDS_INIT(((*(R28 *)rt_nil_check(l_P_3365))).f_T))
{
S_R9(&l_PROLOGUE_3361, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_3361, ((*(R12 *)rt_nil_check(l_V_3367))).f_ACCESS, r_COPY_OF(((*(R28 *)rt_nil_check(l_P_3365))).f_T, l_ARGA_3369)), 0);
}
S_R9(&((*(R19 *)rt_nil_check(l_CS_3360))).f_COPYOUT, r_CAT(((*(R19 *)rt_nil_check(l_CS_3360))).f_COPYOUT, r_ASSIGN_CODE(((*(R28 *)rt_nil_check(l_P_3365))).f_T, l_ARGA_3369, ((*(R12 *)rt_nil_check(l_V_3367))).f_ACCESS)), 0);
r_DEFINE(l_V_3367, ((*(R17 *)rt_nil_check(l_R_3355))).f_LINE);
}
}
else
{
r_DEFINE(l_V_3367, ((*(R17 *)rt_nil_check(l_R_3355))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R28 *)rt_nil_check(l_P_3365))).f_T, ((*(R12 *)rt_nil_check(l_V_3367))).f_ACCESS, ((*(R17 *)rt_nil_check(l_R_3355))).f_LINE, 1);
}
}
}
}
l_P_3365 = ((*(R28 *)rt_nil_check(l_P_3365))).f_NEXT;
}
RT_B_TICK();
} L_end3366: ;
}
if ((((*(R17 *)rt_nil_check(l_R_3355))).f_FL >= ((rt_int)2LL)))
{
{
R17 * l_N_3370; memset(&l_N_3370, 0, sizeof l_N_3370);
l_N_3370 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3355))).f_D))).f_C;
R14 l_SAVED_CODE_3371; memset(&l_SAVED_CODE_3371, 0, sizeof l_SAVED_CODE_3371);
S_R14(&l_SAVED_CODE_3371, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_3372; memset(&l_V_3372, 0, sizeof l_V_3372);
S_R26(&l_V_3372, r_EXPR(l_N_3370, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
R23 l_M_3373; memset(&l_M_3373, 0, sizeof l_M_3373);
S_R23(&l_M_3373, r_MANIFEST(l_N_3370), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3371, 0);
if ((((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3372).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3372).f_T)))).f_SCALE == ((rt_int)0LL)))) || (!(l_M_3373).f_OK)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_N_3370))).f_LINE, rt_str("the stack-size is a manifest integer expression (4.8.2 [4-111])", 63));
}
if (((l_M_3373).f_V < ((rt_int)0LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_N_3370))).f_LINE, rt_str("the stack-size must be greater than or equal to zero (4.8.2)", 60));
}
}
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R17 *)rt_nil_check(l_R_3355))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R17 *)rt_nil_check(l_R_3355))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R19 *)rt_nil_check(l_CS_3360))).f_FTYPE, r_JOIN_BUF(((*(R19 *)rt_nil_check(l_CS_3360))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { RT_B_TICK(); @", 18), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_3361));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
else if (((((*(R19 *)rt_nil_check(l_CS_3360))).f_COPYOUT).f_LEN > ((rt_int)0LL)))
{
r_EMIT(g_O_FUNCS, ((*(R19 *)rt_nil_check(l_CS_3360))).f_COPYOUT);
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_3359;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3356, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_3357;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_3358;
}
static void r_BIND_INSTANCE(R21 * p_BS, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_B_3374; memset(&l_B_3374, 0, sizeof l_B_3374);
l_B_3374 = p_BS;
for (;;) {
if ((l_B_3374 == NULL)) goto L_end3375;
{
if ((!(((*(R21 *)rt_nil_check(l_B_3374))).f_T == NULL)))
{
{
R12 * l_Y_3376; memset(&l_Y_3376, 0, sizeof l_Y_3376);
l_Y_3376 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_B_3374))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3376))).f_T = ((*(R21 *)rt_nil_check(l_B_3374))).f_T;
r_DEFINE(l_Y_3376, p_LINE);
}
}
else if (((*(R21 *)rt_nil_check(l_B_3374))).f_HASMV)
{
{
R12 * l_Y_3377; memset(&l_Y_3377, 0, sizeof l_Y_3377);
l_Y_3377 = r_NEW_SYM(g_Y_GEN, ((*(R21 *)rt_nil_check(l_B_3374))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3377))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_3377))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_3377))).f_MV = ((*(R21 *)rt_nil_check(l_B_3374))).f_MV;
S_R9(&((*(R12 *)rt_nil_check(l_Y_3377))).f_ACCESS, ((*(R21 *)rt_nil_check(l_B_3374))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_3377))).f_INPUT = 1;
r_DEFINE(l_Y_3377, p_LINE);
}
}
l_B_3374 = ((*(R21 *)rt_nil_check(l_B_3374))).f_NEXT;
}
RT_B_TICK();
} L_end3375: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { RT_B_TICK(); 
R15 * l_C_3378; memset(&l_C_3378, 0, sizeof l_C_3378);
l_C_3378 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_3378 == NULL)) goto L_end3379;
{
r_APPEND(C_R9(((*(R15 *)rt_nil_check(l_C_3378))).f_T), &(*p_DST));
l_C_3378 = ((*(R15 *)rt_nil_check(l_C_3378))).f_NEXT;
}
RT_B_TICK();
} L_end3379: ;
}
static rt_int r_USES_SEGMENT(R17 * p_S, rstr p_NAME) { RT_B_TICK(); 
R17 * l_U_3380; memset(&l_U_3380, 0, sizeof l_U_3380);
l_U_3380 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3380 == NULL)) goto L_end3381;
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_U_3380))).f_NAME, p_NAME))
{
{ rt_int rv3382 = 1;
return rv3382; }
}
l_U_3380 = ((*(R17 *)rt_nil_check(l_U_3380))).f_NEXT;
}
RT_B_TICK();
} L_end3381: ;
{ rt_int rv3383 = 0;
return rv3383; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R17 * p_S, R17 * p_SEGS) { RT_B_TICK(); 
R17 * l_U_3384; memset(&l_U_3384, 0, sizeof l_U_3384);
l_U_3384 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3384 == NULL)) goto L_end3385;
{
{
R17 * l_T_3386; memset(&l_T_3386, 0, sizeof l_T_3386);
l_T_3386 = p_SEGS;
for (;;) {
if ((l_T_3386 == NULL)) goto L_end3387;
{
if ((((!(l_T_3386 == p_S)) && (((*(R17 *)rt_nil_check(l_T_3386))).f_D == NULL)) && r_TEQ(((*(R17 *)rt_nil_check(l_T_3386))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3384))).f_NAME)))
{
{ rt_int rv3388 = 0;
return rv3388; }
}
l_T_3386 = ((*(R17 *)rt_nil_check(l_T_3386))).f_NEXT;
}
RT_B_TICK();
} L_end3387: ;
}
l_U_3384 = ((*(R17 *)rt_nil_check(l_U_3384))).f_NEXT;
}
RT_B_TICK();
} L_end3385: ;
{ rt_int rv3389 = 1;
return rv3389; }
rt_raise(RT_X_INIT);
}
static R9 r_MISSING_SEGMENT(R17 * p_SEGS) { RT_B_TICK(); 
R17 * l_S_3390; memset(&l_S_3390, 0, sizeof l_S_3390);
l_S_3390 = p_SEGS;
for (;;) {
if ((l_S_3390 == NULL)) goto L_end3391;
{
{
R17 * l_U_3392; memset(&l_U_3392, 0, sizeof l_U_3392);
l_U_3392 = ((*(R17 *)rt_nil_check(l_S_3390))).f_A;
for (;;) {
if ((l_U_3392 == NULL)) goto L_end3393;
{
if ((!r_TEQS(((*(R17 *)rt_nil_check(l_U_3392))).f_NAME, rt_str("TERMINAL", 8))))
{
{
R17 * l_T_3394; memset(&l_T_3394, 0, sizeof l_T_3394);
l_T_3394 = p_SEGS;
rt_int l_FOUND_3395; memset(&l_FOUND_3395, 0, sizeof l_FOUND_3395);
l_FOUND_3395 = 0;
for (;;) {
if ((l_T_3394 == NULL)) goto L_end3396;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_T_3394))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3392))).f_NAME))
{
l_FOUND_3395 = 1;
}
l_T_3394 = ((*(R17 *)rt_nil_check(l_T_3394))).f_NEXT;
}
RT_B_TICK();
} L_end3396: ;
if ((!l_FOUND_3395))
{
{ R9 rv3397 = ((*(R17 *)rt_nil_check(l_U_3392))).f_NAME;
return rv3397; }
}
}
}
l_U_3392 = ((*(R17 *)rt_nil_check(l_U_3392))).f_NEXT;
}
RT_B_TICK();
} L_end3393: ;
}
l_S_3390 = ((*(R17 *)rt_nil_check(l_S_3390))).f_NEXT;
}
RT_B_TICK();
} L_end3391: ;
{ R9 rv3398 = r_NO_TEXT();
return rv3398; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R17 * p_SEGS) { RT_B_TICK(); 
R17 * l_S_3399; memset(&l_S_3399, 0, sizeof l_S_3399);
l_S_3399 = p_SEGS;
rt_int l_MAINS_3400; memset(&l_MAINS_3400, 0, sizeof l_MAINS_3400);
l_MAINS_3400 = ((rt_int)0LL);
R19 * l_ROOT_3401; memset(&l_ROOT_3401, 0, sizeof l_ROOT_3401);
l_ROOT_3401 = ((R19 *)rt_b_new(sizeof (R19)));
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R19(&(*(R19 *)rt_nil_check(l_ROOT_3401)), ({ R19 rc3402; memset(&rc3402, 0, sizeof rc3402);  rc3402.f_LEVEL = ((rt_int)0LL); rc3402.f_R = NULL; rc3402.f_FRAMED = 0; S_R9(&rc3402.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc3402.f_FIELDS, ({ R14 rc3403; memset(&rc3403, 0, sizeof rc3403);  rc3403.f_HEAD = NULL; rc3403.f_TAIL = NULL; rc3403; }), 0); rc3402.f_UP = NULL; rc3402.f_IMPORTS = NULL; rc3402.f_SIGNALS = NULL; rc3402.f_RESULT = NULL; rc3402.f_IS_PATH = 0; S_R9(&rc3402.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3402; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_3401;
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
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3404; memset(&rc3404, 0, sizeof rc3404);  rc3404.f_HEAD = NULL; rc3404.f_TAIL = NULL; rc3404; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_3399 = p_SEGS;
for (;;) {
if ((l_S_3399 == NULL)) goto L_end3406;
{
if ((((*(R17 *)rt_nil_check(l_S_3399))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_3399, p_SEGS))
{
goto L_end3406;
}
}
l_S_3399 = ((*(R17 *)rt_nil_check(l_S_3399))).f_NEXT;
}
RT_B_TICK();
} L_end3406: ;
if ((l_S_3399 == NULL))
{
goto L_end3405;
}
((*(R17 *)rt_nil_check(l_S_3399))).f_D = l_S_3399;
l_MAINS_3400 = rt_add(l_MAINS_3400, ((*(R17 *)rt_nil_check(l_S_3399))).f_IV);
if (((((*(R17 *)rt_nil_check(l_S_3399))).f_IV == ((rt_int)0LL)) && (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3399))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_S_3399))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
r_BEGIN_SEGMENT(l_S_3399);
if (r_USES_SEGMENT(l_S_3399, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
((*(R7 *)rt_nil_check(g_W))).f_EXTSEG = r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_EXTS, ((*(R17 *)rt_nil_check(l_S_3399))).f_NAME);
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_SEPSEG, r_NO_TEXT(), 0);
((*(R7 *)rt_nil_check(g_W))).f_SEPV = ((rt_int)0LL);
((*(R7 *)rt_nil_check(g_W))).f_SEPR = ((rt_int)0LL);
if ((((*(R7 *)rt_nil_check(g_W))).f_EXTSEG || ((((*(R7 *)rt_nil_check(g_W))).f_SEPC && r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS, ((*(R17 *)rt_nil_check(l_S_3399))).f_NAME)))))
{
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_SEPSEG, ((*(R17 *)rt_nil_check(l_S_3399))).f_NAME, 0);
if ((((*(R17 *)rt_nil_check(l_S_3399))).f_IV == ((rt_int)1LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_S_3399))).f_LINE, rt_str("a MAIN segment is not translated separately (4.2)", 49));
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_EXTSEG)
{
{
R14 l_SAVED_CODE_3407; memset(&l_SAVED_CODE_3407, 0, sizeof l_SAVED_CODE_3407);
S_R14(&l_SAVED_CODE_3407, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
r_CLOSED_BODY(((*(R17 *)rt_nil_check(l_S_3399))).f_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3407, 0);
r_CODE(r_FMT1(rt_str("bs_@_init();", 12), r_CID(((*(R17 *)rt_nil_check(l_S_3399))).f_NAME)));
r_EMIT(g_O_PROTOS, r_FMT1(rt_str("void bs_@_init(void);", 21), r_CID(((*(R17 *)rt_nil_check(l_S_3399))).f_NAME)));
{
R17 * l_X_3408; memset(&l_X_3408, 0, sizeof l_X_3408);
l_X_3408 = ((*(R7 *)rt_nil_check(g_W))).f_EXTS;
for (;;) {
if (r_TEQ(((*(R17 *)rt_nil_check(l_X_3408))).f_NAME, ((*(R17 *)rt_nil_check(l_S_3399))).f_NAME)) goto L_end3409;
{
l_X_3408 = ((*(R17 *)rt_nil_check(l_X_3408))).f_NEXT;
}
RT_B_TICK();
} L_end3409: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("extern int bs_@_iface_@;", 24), r_CID(((*(R17 *)rt_nil_check(l_S_3399))).f_NAME), r_NUM(((*(R17 *)rt_nil_check(l_X_3408))).f_IV)));
r_EMIT(g_O_GLOBALS, r_CAT(r_FMT2(rt_str("int *bs_needs_@_@ = ", 20), r_UNIT_NAME(), r_CID(((*(R17 *)rt_nil_check(l_S_3399))).f_NAME)), r_FMT2(rt_str("&bs_@_iface_@;", 14), r_CID(((*(R17 *)rt_nil_check(l_S_3399))).f_NAME), r_NUM(((*(R17 *)rt_nil_check(l_X_3408))).f_IV))));
}
}
}
else
{
r_CLOSED_BODY(((*(R17 *)rt_nil_check(l_S_3399))).f_B);
}
r_SEGMENT_EXPORTS(l_S_3399);
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_SEPSEG, r_NO_TEXT(), 0);
((*(R7 *)rt_nil_check(g_W))).f_EXTSEG = 0;
}
RT_B_TICK();
} L_end3405: ;
l_S_3399 = p_SEGS;
for (;;) {
if ((l_S_3399 == NULL)) goto L_end3410;
{
if ((((*(R17 *)rt_nil_check(l_S_3399))).f_D == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_S_3399))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R17 *)rt_nil_check(l_S_3399))).f_NAME);
}
l_S_3399 = ((*(R17 *)rt_nil_check(l_S_3399))).f_NEXT;
}
RT_B_TICK();
} L_end3410: ;
if (((!(l_MAINS_3400 == ((rt_int)1LL))) && (!((*(R7 *)rt_nil_check(g_W))).f_SEPC)))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R17 * l_X_3411; memset(&l_X_3411, 0, sizeof l_X_3411);
l_X_3411 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_3411 == NULL)) goto L_end3412;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), r_CID(((*(R17 *)rt_nil_check(l_X_3411))).f_NAME)));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), r_CID(((*(R17 *)rt_nil_check(l_X_3411))).f_NAME), r_CSTRING(((*(R17 *)rt_nil_check(l_X_3411))).f_NAME)));
l_X_3411 = ((*(R17 *)rt_nil_check(l_X_3411))).f_NEXT;
}
RT_B_TICK();
} L_end3412: ;
}
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if (((*(R7 *)rt_nil_check(g_W))).f_SEPC)
{
{
R9 l_T_3413; memset(&l_T_3413, 0, sizeof l_T_3413);
S_R9(&l_T_3413, r_INPUT_TEXT(), 0);
R9 l_NAME_3414; memset(&l_NAME_3414, 0, sizeof l_NAME_3414);
S_R9(&l_NAME_3414, ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS))).f_NAME, 0);
rt_int l_FP_3415; memset(&l_FP_3415, 0, sizeof l_FP_3415);
l_FP_3415 = r_TEXT_PRINT(r_STR(l_T_3413, (l_T_3413).f_LEN));
r_EMITS(g_O_MAIN, rt_str("}", 1));
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("int bs_@_iface_@ = 1;", 21), r_CID(l_NAME_3414), r_NUM(l_FP_3415)));
r_WRITE_FILE_T(r_LIB_FILE(((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, l_NAME_3414, rt_str(".bif", 4)), l_T_3413);
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
{ R9 rv3416 = r_CID(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS))).f_NAME);
return rv3416; }
}
{ R9 rv3417 = r_MK(rt_str("MAIN", 4));
return rv3417; }
rt_raise(RT_X_INIT);
}
static rt_int r_FROM_DEFINED_MODULE(R17 * p_S, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3418; memset(&l_M_3418, 0, sizeof l_M_3418);
l_M_3418 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv3419 = 0;
return rv3419; }
}
for (;;) {
if ((l_M_3418 == NULL)) goto L_end3420;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_3418))).f_NAME))
{
{ rt_int rv3421 = 1;
return rv3421; }
}
l_M_3418 = ((*(R12 *)rt_nil_check(l_M_3418))).f_MODL;
}
RT_B_TICK();
} L_end3420: ;
{ rt_int rv3422 = 0;
return rv3422; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R17 * p_S) { RT_B_TICK(); 
R12 * l_MARK_3423; memset(&l_MARK_3423, 0, sizeof l_MARK_3423);
l_MARK_3423 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_3424; memset(&l_TAKEN_3424, 0, sizeof l_TAKEN_3424);
R12 * l_SEG_3425; memset(&l_SEG_3425, 0, sizeof l_SEG_3425);
l_SEG_3425 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R17 * l_NAMES_3426; memset(&l_NAMES_3426, 0, sizeof l_NAMES_3426);
l_NAMES_3426 = NULL;
for (;;) {
if ((l_MARK_3423 == NULL)) goto L_end3427;
{
if ((((*(R12 *)rt_nil_check(l_MARK_3423))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end3427;
}
l_MARK_3423 = ((*(R12 *)rt_nil_check(l_MARK_3423))).f_SNEXT;
}
RT_B_TICK();
} L_end3427: ;
l_TAKEN_3424 = r_TAKE_SCOPE(l_MARK_3423);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
{
R17 * l_X_3428; memset(&l_X_3428, 0, sizeof l_X_3428);
l_X_3428 = ((*(R17 *)rt_nil_check(p_S))).f_C;
for (;;) {
if ((l_X_3428 == NULL)) goto L_end3429;
{
{
R12 * l_Y_3430; memset(&l_Y_3430, 0, sizeof l_Y_3430);
l_Y_3430 = l_TAKEN_3424;
rt_int l_FOUND_3431; memset(&l_FOUND_3431, 0, sizeof l_FOUND_3431);
l_FOUND_3431 = (!(r_LOOKUP(((*(R17 *)rt_nil_check(l_X_3428))).f_NAME) == NULL));
for (;;) {
if ((l_Y_3430 == NULL)) goto L_end3432;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_3430))).f_NAME, ((*(R17 *)rt_nil_check(l_X_3428))).f_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_3430))).f_PREFIX, ((*(R17 *)rt_nil_check(l_X_3428))).f_NAME)))
{
l_FOUND_3431 = 1;
}
else if ((((*(R12 *)rt_nil_check(l_Y_3430))).f_KIND == g_Y_ROUTINE))
{
if (r_TEQ(r_BASE_NAME(l_Y_3430), ((*(R17 *)rt_nil_check(l_X_3428))).f_NAME))
{
l_FOUND_3431 = 1;
}
}
l_Y_3430 = ((*(R12 *)rt_nil_check(l_Y_3430))).f_SNEXT;
}
RT_B_TICK();
} L_end3432: ;
if ((!l_FOUND_3431))
{
r_FAILT(((*(R17 *)rt_nil_check(l_X_3428))).f_LINE, rt_str("DEFINES names a name local to the segment or imported into it (4.2): ", 69), ((*(R17 *)rt_nil_check(l_X_3428))).f_NAME);
}
l_NAMES_3426 = r_NAME_REF(((*(R17 *)rt_nil_check(l_X_3428))).f_NAME, ((rt_int)0LL), NULL, l_NAMES_3426);
}
l_X_3428 = ((*(R17 *)rt_nil_check(l_X_3428))).f_NEXT;
}
RT_B_TICK();
} L_end3429: ;
}
for (;;) {
if ((l_TAKEN_3424 == NULL)) goto L_end3433;
{
{
R12 * l_NEXT_3434; memset(&l_NEXT_3434, 0, sizeof l_NEXT_3434);
l_NEXT_3434 = ((*(R12 *)rt_nil_check(l_TAKEN_3424))).f_SNEXT;
if (((!(((*(R12 *)rt_nil_check(l_TAKEN_3424))).f_KIND == g_Y_BUILTIN)) && (((((((((*(R17 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_3424))).f_NAME)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_3424))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_3424))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_3424)) || (((((*(R12 *)rt_nil_check(l_TAKEN_3424))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_3424))))))))
{
((*(R12 *)rt_nil_check(l_TAKEN_3424))).f_SEGM = l_SEG_3425;
l_NAMES_3426 = r_NAME_REF(((*(R12 *)rt_nil_check(l_TAKEN_3424))).f_NAME, ((rt_int)0LL), NULL, l_NAMES_3426);
r_DEFINE(l_TAKEN_3424, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
else if ((!(((*(R12 *)rt_nil_check(l_TAKEN_3424))).f_KIND == g_Y_BUILTIN)))
{
((*(R12 *)rt_nil_check(l_TAKEN_3424))).f_SNEXT = ((*(R12 *)rt_nil_check(l_SEG_3425))).f_MEMBERS;
((*(R12 *)rt_nil_check(l_SEG_3425))).f_MEMBERS = l_TAKEN_3424;
}
l_TAKEN_3424 = l_NEXT_3434;
}
}
RT_B_TICK();
} L_end3433: ;
((*(R12 *)rt_nil_check(l_SEG_3425))).f_USES = l_NAMES_3426;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = NULL;
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = NULL;
}
static void r_BEGIN_SEGMENT(R17 * p_S) { RT_B_TICK(); 
R12 * l_SEG_3435; memset(&l_SEG_3435, 0, sizeof l_SEG_3435);
l_SEG_3435 = r_NEW_SYM(g_Y_SEGMENT, ((*(R17 *)rt_nil_check(p_S))).f_NAME);
R17 * l_U_3436; memset(&l_U_3436, 0, sizeof l_U_3436);
l_U_3436 = ((*(R17 *)rt_nil_check(p_S))).f_A;
((*(R12 *)rt_nil_check(l_SEG_3435))).f_DECL = p_S;
((*(R12 *)rt_nil_check(l_SEG_3435))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_SEGS;
((*(R7 *)rt_nil_check(g_W))).f_SEGS = l_SEG_3435;
for (;;) {
if ((l_U_3436 == NULL)) goto L_end3437;
{
if ((!r_TEQS(((*(R17 *)rt_nil_check(l_U_3436))).f_NAME, rt_str("TERMINAL", 8))))
{
{
R12 * l_T_3438; memset(&l_T_3438, 0, sizeof l_T_3438);
l_T_3438 = r_FIND_SEGMENT(((*(R17 *)rt_nil_check(l_U_3436))).f_NAME);
if ((l_T_3438 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_U_3436))).f_LINE, rt_str("USES names a segment of the program (4.2): ", 43), ((*(R17 *)rt_nil_check(l_U_3436))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(l_U_3436))).f_A == NULL)))
{
r_CHECK_ITEMS_DEFINED(l_T_3438, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3436))).f_A))).f_A);
r_CHECK_ITEMS_DEFINED(l_T_3438, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3436))).f_A))).f_B);
r_CHECK_ITEMS_DEFINED(l_T_3438, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3436))).f_A))).f_C);
r_CHECK_ITEMS_DEFINED(l_T_3438, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3436))).f_A))).f_D);
r_CHECK_ITEMS_DEFINED(l_T_3438, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3436))).f_A))).f_E);
}
}
}
l_U_3436 = ((*(R17 *)rt_nil_check(l_U_3436))).f_NEXT;
}
RT_B_TICK();
} L_end3437: ;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SEG_3435;
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = l_SEG_3435;
l_U_3436 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3436 == NULL)) goto L_end3439;
{
if ((!(((*(R17 *)rt_nil_check(l_U_3436))).f_A == NULL)))
{
r_INPUT_IMPORT_CONFLICT(((*(R17 *)rt_nil_check(l_U_3436))).f_A, ((*(R17 *)rt_nil_check(l_U_3436))).f_LINE);
}
l_U_3436 = ((*(R17 *)rt_nil_check(l_U_3436))).f_NEXT;
}
RT_B_TICK();
} L_end3439: ;
}
static R12 * r_ENTER_HOME(R12 * p_Y) { RT_B_TICK(); 
R12 * l_SAVED_3440; memset(&l_SAVED_3440, 0, sizeof l_SAVED_3440);
l_SAVED_3440 = ((*(R7 *)rt_nil_check(g_W))).f_TRSEG;
if (((((*(R12 *)rt_nil_check(p_Y))).f_HOME == NULL) || (((*(R12 *)rt_nil_check(p_Y))).f_HOME == ((*(R7 *)rt_nil_check(g_W))).f_TRSEG)))
{
{ R12 * rv3441 = l_SAVED_3440;
return rv3441; }
}
r_OPEN_SCOPE();
{
R12 * l_X_3442; memset(&l_X_3442, 0, sizeof l_X_3442);
l_X_3442 = ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_HOME))).f_MEMBERS;
for (;;) {
if ((l_X_3442 == NULL)) goto L_end3443;
{
{
R12 * l_A_3444; memset(&l_A_3444, 0, sizeof l_A_3444);
l_A_3444 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_X_3442))).f_KIND, ((*(R12 *)rt_nil_check(l_X_3442))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_3444)), (*(R12 *)rt_nil_check(l_X_3442)), 0);
((*(R12 *)rt_nil_check(l_A_3444))).f_ORIG = r_ORIGINAL(l_X_3442);
r_DEFINE_ALIAS(l_A_3444);
}
l_X_3442 = ((*(R12 *)rt_nil_check(l_X_3442))).f_SNEXT;
}
RT_B_TICK();
} L_end3443: ;
}
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = ((*(R12 *)rt_nil_check(p_Y))).f_HOME;
{ R12 * rv3445 = l_SAVED_3440;
return rv3445; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_ALIAS(R12 * p_A) { RT_B_TICK(); 
rt_int l_B_3446; memset(&l_B_3446, 0, sizeof l_B_3446);
l_B_3446 = r_BUCKET(((*(R12 *)rt_nil_check(p_A))).f_NAME);
((*(R12 *)rt_nil_check(p_A))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_A))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_3446, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_3446, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_A;
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
R12 * l_T_3447; memset(&l_T_3447, 0, sizeof l_T_3447);
l_T_3447 = ((*(R7 *)rt_nil_check(g_W))).f_SEGS;
for (;;) {
if ((l_T_3447 == NULL)) goto L_end3448;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_T_3447))).f_NAME, p_NAME))
{
{ R12 * rv3449 = l_T_3447;
return rv3449; }
}
l_T_3447 = ((*(R12 *)rt_nil_check(l_T_3447))).f_INSTANCES;
}
RT_B_TICK();
} L_end3448: ;
{ R12 * rv3450 = NULL;
return rv3450; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_ITEMS_DEFINED(R12 * p_T, R17 * p_L) { RT_B_TICK(); 
R17 * l_N_3451; memset(&l_N_3451, 0, sizeof l_N_3451);
l_N_3451 = p_L;
for (;;) {
if ((l_N_3451 == NULL)) goto L_end3452;
{
if ((!r_IN_IDENTS(((*(R12 *)rt_nil_check(p_T))).f_USES, ((*(R17 *)rt_nil_check(l_N_3451))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_N_3451))).f_LINE, rt_str("the segment does not define ", 28), ((*(R17 *)rt_nil_check(l_N_3451))).f_NAME);
}
l_N_3451 = ((*(R17 *)rt_nil_check(l_N_3451))).f_NEXT;
}
RT_B_TICK();
} L_end3452: ;
}
static rt_int r_SEG_VISIBLE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_U_3453; memset(&l_U_3453, 0, sizeof l_U_3453);
rt_int l_INPUT_ONLY_3454; memset(&l_INPUT_ONLY_3454, 0, sizeof l_INPUT_ONLY_3454);
l_INPUT_ONLY_3454 = 0;
if (((((((*(R7 *)rt_nil_check(g_W))).f_CURSEG == NULL) || (((*(R12 *)rt_nil_check(p_Y))).f_SEGM == NULL)) || (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL))) || (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
{ rt_int rv3455 = 1;
return rv3455; }
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_SEGM == ((*(R7 *)rt_nil_check(g_W))).f_CURSEG))
{
{ rt_int rv3456 = 1;
return rv3456; }
}
l_U_3453 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CURSEG))).f_DECL))).f_A;
for (;;) {
if ((l_U_3453 == NULL)) goto L_end3457;
{
{
R12 * l_T_3458; memset(&l_T_3458, 0, sizeof l_T_3458);
l_T_3458 = r_FIND_SEGMENT(((*(R17 *)rt_nil_check(l_U_3453))).f_NAME);
if ((!(l_T_3458 == NULL)))
{
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_T_3458))).f_USES, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
if ((((*(R17 *)rt_nil_check(l_U_3453))).f_A == NULL))
{
{ rt_int rv3459 = 1;
return rv3459; }
}
{
R17 * l_I_3460; memset(&l_I_3460, 0, sizeof l_I_3460);
l_I_3460 = ((*(R17 *)rt_nil_check(l_U_3453))).f_A;
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)))
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3460))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3461 = 1;
return rv3461; }
}
else if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3460))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
l_INPUT_ONLY_3454 = 1;
}
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE))
{
if ((((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3460))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME) || r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3460))).f_C, r_BASE_NAME(p_Y))) || r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3460))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)) || r_FROM_MODULES(((*(R17 *)rt_nil_check(l_I_3460))).f_E, p_Y)))
{
{ rt_int rv3462 = 1;
return rv3462; }
}
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE))
{
if ((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3460))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_NAME) || r_FROM_MODULES(((*(R17 *)rt_nil_check(l_I_3460))).f_E, p_Y)))
{
{ rt_int rv3463 = 1;
return rv3463; }
}
}
else
{
{ rt_int rv3464 = 1;
return rv3464; }
}
}
}
}
}
l_U_3453 = ((*(R17 *)rt_nil_check(l_U_3453))).f_NEXT;
}
RT_B_TICK();
} L_end3457: ;
if (l_INPUT_ONLY_3454)
{
{ rt_int rv3465 = 0;
return rv3465; }
}
r_FAILT(p_LINE, rt_str("not imported by the USES clause of the segment (4.2): ", 54), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static rt_int r_FROM_MODULES(R17 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3466; memset(&l_M_3466, 0, sizeof l_M_3466);
l_M_3466 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((p_MODS == NULL))
{
{ rt_int rv3467 = 0;
return rv3467; }
}
for (;;) {
if ((l_M_3466 == NULL)) goto L_end3468;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_3466))).f_NAME))
{
{ rt_int rv3469 = 1;
return rv3469; }
}
l_M_3466 = ((*(R12 *)rt_nil_check(l_M_3466))).f_MODL;
}
RT_B_TICK();
} L_end3468: ;
{ rt_int rv3470 = 0;
return rv3470; }
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
