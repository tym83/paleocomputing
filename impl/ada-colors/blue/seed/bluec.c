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
typedef struct R25 R25;
typedef struct R26 R26;
typedef struct R27 R27;
typedef struct R28 R28;
typedef struct R29 R29;
typedef struct R30 R30;
typedef struct fr_r_MANIFEST_ARITH fr_r_MANIFEST_ARITH;
struct A8 { rt_int lo[1], hi[1]; rt_int *p; };
struct R9 { int dummy_; rt_int f_AT; rt_int f_LEN; rt_int f_H; };
struct R10 { int dummy_; rt_int f_KIND; rt_int f_LINE; rt_int f_IV; R9 f_TX; };
struct A11 { rt_int lo[1], hi[1]; R10 *p; };
struct A13 { rt_int lo[1], hi[1]; R12 * *p; };
struct R14 { int dummy_; R15 * f_HEAD; R15 * f_TAIL; };
struct A16 { rt_int lo[1], hi[1]; R14 *p; };
struct R7 { int dummy_; rstr f_ARENA; rt_int f_TOP; A8 f_SRC; rt_int f_NSRC; rt_int f_LEXED; rt_int f_LEXLINE; R9 f_LIBDIR; R17 * f_LIBSEGS; rt_int f_SUPPRESS; rt_int f_WORD; rt_int f_SEPC; R9 f_SEPSEG; rt_int f_EXTSEG; rt_int f_SEPV; rt_int f_SEPR; R17 * f_OWNSEGS; R17 * f_EXTS; rt_int f_STDINLEN; A11 f_TOKS; rt_int f_NTOKS; rt_int f_POS; A13 f_TABLE; R12 * f_SCOPE; rt_int f_DEPTH; A16 f_OUT; R14 f_CODE; R18 * f_CTXS; R19 * f_CS; R20 * f_IS; rt_int f_NSCOPES; R12 * f_MODL; R21 * f_BINDS; rt_int f_ROUNDED; R17 * f_QUAL; R17 * f_SQUAL; rt_int f_TYPECHECK; rt_int f_CHARSETS; rt_int f_IN_RECORD; rt_int f_IN_TYPEDECL; rt_int f_REPCONV; R17 * f_LDONE; rt_int f_LMODE; R9 f_LIMG; R17 * f_NEW_OK; rt_int f_START_IO; rt_int f_MACHINE; rt_int f_SERIAL; R17 * f_EXCS; R22 * f_TY_INT; R22 * f_TY_BOOL; R22 * f_TY_STR; R22 * f_TY_VOID; R22 * f_TY_NIL; R22 * f_TY_ASCII; R22 * f_TY_FLOAT; R22 * f_TY_BITS; R22 * f_TY_ROUNDINGS; R22 * f_TY_TYPE; R12 * f_PENDING; R17 * f_CNAMES; R12 * f_ENUMS; R12 * f_SEGS; R12 * f_CURSEG; R12 * f_TRSEG; R12 * f_ARRAYS; R12 * f_RECS; };
struct R25 { int dummy_; rt_int f_OK; rt_int f_V; };
struct R28 { int dummy_; R9 f_C; R22 * f_T; rt_int f_LVAL; R9 f_SELF; };
struct R17 { int dummy_; rt_int f_KIND; rt_int f_LINE; rt_int f_IV; R9 f_NAME; R17 * f_A; R17 * f_B; R17 * f_C; R17 * f_D; R17 * f_E; R17 * f_NEXT; rt_int f_FL; };
struct R15 { int dummy_; R9 f_T; R15 * f_NEXT; };
struct R12 { int dummy_; rt_int f_KIND; rt_int f_DEPTH; rt_int f_LEVEL; R9 f_NAME; R22 * f_T; R9 f_ACCESS; R9 f_FIELD; rt_int f_INPUT; rt_int f_BYREF; rt_int f_HASMV; rt_int f_MV; R17 * f_TS; rt_int f_BUSY; R9 f_FWD; R30 * f_PARAMS; R22 * f_RESULT; R17 * f_DECL; R9 f_PREFIX; R12 * f_MODL; rt_int f_EXPORTED; rt_int f_GENERIC; rt_int f_FRAMED; R17 * f_USES; R12 * f_INSTANCES; R21 * f_BINDINGS; R12 * f_ORIG; R12 * f_MEMBERS; R12 * f_SAVED; rt_int f_OWNER; rt_int f_WITHV; rt_int f_LAZY; rt_int f_LINKAGE; R12 * f_SEGM; R12 * f_HOME; R12 * f_CHAIN; R12 * f_SNEXT; };
struct R19 { int dummy_; rt_int f_LEVEL; R12 * f_R; rt_int f_FRAMED; R9 f_FTYPE; R14 f_FIELDS; R19 * f_UP; R17 * f_IMPORTS; R17 * f_SIGNALS; R22 * f_RESULT; rt_int f_IS_PATH; R9 f_COPYOUT; };
struct R20 { int dummy_; rt_int f_ID; R17 * f_IMPORTS; R17 * f_SIGNALS; R9 f_NAME; R20 * f_UP; };
struct R22 { int dummy_; rt_int f_KIND; rt_int f_SCALE; R9 f_LO_C; R9 f_HI_C; R25 f_MLO; R25 f_MHI; rt_int f_RLEVEL; R9 f_LEN_C; R25 f_MLEN; R9 f_GEN; R22 * f_BASE; R22 * f_ELEM; R22 * f_TARGET; R17 * f_TARGET_TS; R26 * f_FIELDS; R17 * f_LITS; rt_int f_NLITS; rt_int f_UNORDERED; R27 * f_BOUNDS; rt_int f_DIMS; R27 * f_ARGS; R9 f_NAME; R9 f_CNAME; R12 * f_MODL; R17 * f_REPS; R12 * f_DECL; R9 f_GENP; };
struct R21 { int dummy_; R9 f_NAME; R22 * f_T; R9 f_C; rt_int f_HASMV; rt_int f_MV; R12 * f_R; R21 * f_NEXT; };
struct R27 { int dummy_; R9 f_LO; R9 f_HI; R25 f_MLO; R25 f_MHI; rt_int f_ANYARG; R27 * f_NEXT; };
struct R26 { int dummy_; R9 f_NAME; R9 f_CNAME; R22 * f_T; rt_int f_KIND; R9 f_TAGF; R17 * f_LABELS; R26 * f_NEXT; };
struct fr_r_MANIFEST_ARITH { void *up; R9 p_OP; rt_int p_A; rt_int p_B; rt_int p_LINE; rt_int l_R_1404; };
struct R29 { int dummy_; R17 * f_E; R28 f_V; rt_int f_HAVE; rt_int f_MODE; R29 * f_NEXT; };
struct R30 { int dummy_; R9 f_NAME; rt_int f_MODE; R22 * f_T; R17 * f_TS; R30 * f_NEXT; };
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
static R17 * g_SEGS_31;
static R17 * g_S_32;
static R17 * g_N_34;
static R9 g_NAME_36;
static R17 * g_MORE_37;
static R17 * g_LAST_38;
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
static void S_R25(R25 *d, R25 s, int any);
static int E_R25(R25 a, R25 b);
static R25 C_R25(R25 s);
static R25 r_NO_MVAL(void);
static R25 r_SOME(rt_int p_V);
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
static void r_ATTR_VALUE(R17 * p_E, R9 *p_C, R25 *p_M);
static R22 * r_WITH_RANGE(R22 * p_T, R17 * p_R);
static R25 r_ENUM_MANIFEST(R17 * p_E, R22 * p_T);
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
static R25 r_MANIFEST_INTEGER_ARG(R17 * p_A, rstr p_WHAT, rt_int p_LO, rt_int p_HI);
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
static R26 * r_NEW_FIELD(R9 p_NAME, R22 * p_T, rt_int p_KIND);
static R26 * r_FIND_FIELD(R22 * p_T, R9 p_NAME);
static R26 * r_FIND_VFIELD(R22 * p_T, R9 p_NAME);
static void r_ADD_FIELD(R22 * p_T, R26 * p_F, R26 * *p_TAIL);
static void r_RECORD_FIELDS(R22 * p_T, R17 * p_DECLS, R9 p_TAGN, R17 * p_LABELS, R26 * *p_TAIL);
static void r_CHECK_VARIANT_NAMES(R17 * p_D, R22 * p_TT);
static R22 * r_RESOLVE_RECORD(R17 * p_TS, R9 p_CNAME, R12 * p_Y, R17 * p_FORMALS);
static rt_int r_IS_RECORD_REP(R22 * p_T);
static void r_CHECK_RECORD_REP(R22 * p_T, rt_int p_LINE);
static void r_CHECK_ELEMENTS(R22 * p_T, R17 * p_L, R9 p_TAGN, R17 * p_LABELS, R17 * *p_SEEN);
static R9 r_RECORD_SIZE(R22 * p_T, R9 p_C);
static R9 r_RECORD_BITS(R22 * p_T, R9 p_C);
static R9 r_RECORD_OF_BITS(R22 * p_T, R9 p_B);
static R9 r_RECORD_LAYOUT(R22 * p_T, R9 p_C, rt_int p_MODE, R9 p_IMG);
static R9 r_LAY_FIELD(R26 * p_F, R22 * p_T, R9 p_C, rt_int p_MODE);
static R9 r_LAY_FILL(R9 p_SIZE, R9 p_BITS, rt_int p_MODE);
static rt_int r_IS_ANY_FIELD(R22 * p_T, R26 * p_F);
static R9 r_FIELD_SIZE_C(R26 * p_F, R9 p_C);
static R9 r_LAYOUT_ALL(R22 * p_T, R9 p_C, R9 p_TAGN, rt_int p_MODE);
static R9 r_LAYOUT_PARTS(R22 * p_T, R9 p_C);
static R9 r_LAYOUT_SPEC(R22 * p_T, R9 p_C, R17 * p_P, R9 p_TAGN);
static R9 r_LAYOUT_VARIANTS(R22 * p_T, R9 p_C, R9 p_TAGN);
static rt_int r_ARG_MANIFEST(R22 * p_T, R26 * p_F);
static rt_int r_IS_ANY_TAG(R17 * p_A);
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R17 * p_TS);
static rt_int r_SAME_BINDS(R21 * p_A, R21 * p_B);
static rt_int r_HAS_ANY(R22 * p_T);
static R9 r_VARIANT_COND(R26 * p_F, R22 * p_T, R9 p_SELF);
static void r_COMPLETE_RECORD(R22 * p_T);
static R9 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS);
static R9 r_INIT_CODE(R22 * p_T, R9 p_LV);
static rt_int r_NEEDS_INIT(R22 * p_T);
static R9 r_COPY_OF(R22 * p_T, R9 p_V);
static R9 r_ASSIGN_CODE(R22 * p_T, R9 p_LV, R9 p_RV);
static R9 r_EQUAL_CODE(R22 * p_T, R9 p_A, R9 p_B);
static R9 r_RANGE_CHECK(R22 * p_T, R9 p_V, R9 p_SELF);
static R9 r_RANGE_CHECK_IN(R22 * p_T, R9 p_V, R9 p_SELF);
static rt_int r_REP_BITS(R22 * p_T);
static rt_int r_REP_UNSIGNED(R22 * p_T);
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T);
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B);
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B);
static rt_int r_IS_GEN_ARG(R27 * p_B);
static rt_int r_SAME_ARGS(R27 * p_A, R27 * p_B);
static R9 r_FRAME_OF(rt_int p_LEVEL);
static R9 r_OBJ_ACCESS(R12 * p_Y);
static R9 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE);
static void r_DECLARE_OBJECTS(R17 * p_D);
static void S_R28(R28 *d, R28 s, int any);
static int E_R28(R28 a, R28 b);
static R28 C_R28(R28 s);
static R28 r_MKET(R9 p_C, R22 * p_T);
static R28 r_MKLV(R9 p_C, R22 * p_T, rt_int p_LVAL, R9 p_SELF);
static R22 * r_INT_TYPE(rt_int p_SCALE);
static R22 * r_STR_TYPE(R9 p_LEN, R25 p_M);
static R9 r_CSTRING(R9 p_T);
static R25 r_MANIFEST(R17 * p_E);
static R25 r_ATTR_MANIFEST(R17 * p_E);
static R25 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R9 p_NAME);
static rt_int r_MANIFEST_ARITH(R9 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE);
static rt_int r_MANIFEST_INT(R17 * p_E);
static rt_int r_BOOL_INT(rt_int p_B);
static R28 r_EXPR(R17 * p_E, R22 * p_WANT);
static R9 r_INT_EXPR(R17 * p_E);
static R9 r_BOOL_EXPR(R17 * p_E);
static R22 * r_BITS_TYPE(rt_int p_LEN);
static R28 r_REAL_LITERAL(R17 * p_E);
static rt_int r_FLOAT_LITERAL_FITS(R17 * p_E, rt_int p_P);
static void r_CHECK_FIXED_LITERAL(R17 * p_E);
static R28 r_STRING_LITERAL(R17 * p_E);
static R22 * r_RESOLVE_USER_NAME(R9 p_NAME, rt_int p_LINE);
static R28 r_ENUM_LITERAL(R17 * p_E, R22 * p_WANT);
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT);
static rt_int r_CONSTRUCTOR_WANTED(R22 * p_WANT);
static rt_int r_NAMES_OBJECT(R9 p_NAME);
static rt_int r_IS_STD_REPTYPE(R9 p_NAME);
static rt_int r_IS_REPTYPE_NAME(R9 p_NAME);
static R28 r_REP_CONVERTER(R17 * p_S, R17 * p_E, rt_int p_LINE);
static R28 r_NAME_EXPR(R17 * p_E, R22 * p_WANT);
static R28 r_FIELD_EXPR(R17 * p_E);
static rt_int r_IS_FIXED_LITERAL(R17 * p_A);
static rt_int r_IS_NUMBER_LITERAL(R17 * p_A);
static rt_int r_IS_TYPE_WORD(R9 p_NAME);
static void r_CHECK_VARIANT(R26 * p_F, R22 * p_T, R17 * p_BASE, rt_int p_LINE);
static R25 r_TAG_VALUE(R22 * p_T, R9 p_TAGN);
static rt_int r_LABELS_HAVE(R17 * p_L, rt_int p_V, R22 * p_T);
static R28 r_VALUE_OR_TYPE(R17 * p_E);
static R28 r_INDEX_EXPR(R17 * p_E);
static R9 r_INDEX_VALUE(R17 * p_E);
static R9 r_INDEX_OF(R28 p_V, rt_int p_LINE);
static R28 r_INDEX_EXPR2(R17 * p_E);
static R9 r_OP_NAME(R9 p_OP, rt_int p_UNARY);
static R29 * r_VAL_ARG(R28 p_V, R29 * p_NEXT);
static R29 * r_NODE_ARG(R17 * p_E, rt_int p_MODE, R29 * p_NEXT);
static R12 * r_USER_OPERATOR(R9 p_NAME, R29 * p_ARGS, rt_int p_LINE);
static rt_int r_HAS_USER_ROUTINE(R9 p_NAME);
static R29 * r_QUAL_ARGS(rt_int p_LINE);
static R28 r_OPERATOR_CALL3(R9 p_NAME, R28 p_A, R17 * p_B, R17 * p_C, rt_int p_LINE);
static void r_REQUIRE_MACHINE(rt_int p_LINE);
static R9 r_RESCALE_C(R9 p_C, rt_int p_SFROM, rt_int p_STO);
static R9 r_RESCALE(R28 p_V, rt_int p_S, rt_int p_LINE);
static R9 r_CONVERT(R28 p_V, R22 * p_T, rt_int p_LINE, R9 p_SELF);
static R9 r_STORE_CODE(R22 * p_T, R9 p_LV, R28 p_V, rt_int p_LINE, R9 p_SELF);
static rt_int r_HAS_ABS_PART(R22 * p_T);
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT);
static R9 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R9 p_LV, R9 p_RV, rt_int p_LINE);
static R9 r_COMPONENT_EQUAL(R22 * p_T, R9 p_A, R9 p_B, rt_int p_LINE);
static R28 r_UNARY(R17 * p_E);
static R28 r_UNARY1(R17 * p_E);
static rt_int r_IS_LITERALISH(R17 * p_E);
static R28 r_BINARY(R17 * p_E);
static R28 r_STD_RESULT(R28 p_V);
static R28 r_APPLY_OPERATOR(R17 * p_E, R9 p_OP, R28 p_A, R28 p_B);
static rt_int r_IDENTICAL_TYPE(R22 * p_A, R22 * p_B);
static R9 r_TARGET_ARGS_CHECK(R22 * p_RT, R22 * p_VT, R9 p_C);
static rt_int r_SAME_EXTENTS(R22 * p_A, R22 * p_B);
static rt_int r_HAS_VALUES(R22 * p_T);
static R22 * r_FLOAT_TYPE(rt_int p_P);
static rt_int r_IS_D(R22 * p_T);
static R9 r_AS_D(R28 p_V);
static R9 r_AS_DOUBLE(R28 p_V);
static R9 r_SINGLE_C(rt_int p_P);
static R9 r_FLOAT_TRUNC(void);
static rt_int r_QUAL_PREC(void);
static R9 r_FLOAT_OP(R9 p_OP, R28 p_A, R28 p_B, R22 * p_T);
static R9 r_FLOAT_COMPARE(R28 p_A, R28 p_B, R9 p_OP);
static R9 r_C_RELOP(R9 p_OP);
static R9 r_LOWER_OP(R9 p_OP);
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B);
static R9 r_FIXED_COMPARE(R28 p_A, R28 p_B, R9 p_OP);
static R28 r_EQUALITY(R17 * p_E, R9 p_OP, R28 p_A, R28 p_B);
static R28 r_FIXED_ARITH(R17 * p_E, R9 p_OP, R28 p_A, R28 p_B);
static R28 r_SCALED_OPERATOR(R17 * p_E, R9 p_OP, R28 p_A, R28 p_B);
static R28 r_IN_EXPR(R17 * p_E);
static R9 r_CONVERT_TO_SCALE(R28 p_V, R22 * p_T, rt_int p_LINE);
static R28 r_INT_ET(rt_int p_V);
static rt_int r_BITS_FOR(rt_int p_N);
static rt_int r_ENUM_SIZE(R22 * p_T);
static rt_int r_PACKING_OF(R22 * p_T);
static rt_int r_PACKING_VALUE(R9 p_NAME);
static R28 r_PACKING_LITERAL(rt_int p_MODE, rt_int p_LINE);
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
static R25 r_STATIC_SIZE(R22 * p_T);
static R28 r_ATTRIBUTE(R28 p_B, R9 p_NAME, rt_int p_LINE);
static R28 r_ARRAY_SHAPE(R28 p_B, R9 p_NAME);
static R17 * r_LIT_NODE_T(R9 p_NAME, rt_int p_LINE);
static R17 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE);
static R28 r_SIZE_OF(R22 * p_T, R9 p_C);
static R28 r_TYPE_ATTRIBUTE(R9 p_TNAME, R9 p_NAME, rt_int p_LINE);
static R28 r_TYPE_VALUE(R9 p_TNAME, rt_int p_LINE);
static R28 r_TYPE_VALUE_OF(R22 * p_T);
static rt_int r_IS_TYPE_NAME(R17 * p_E);
static R28 r_ATTRIBUTE_OF_ATTRIBUTE(R9 p_TNAME, R9 p_A, R9 p_B, rt_int p_LINE);
static R28 r_RECORD_CONSTRUCTOR(R17 * p_E, R22 * p_WANT);
static R17 * r_FIND_INIT(R17 * p_L, R9 p_NAME);
static R28 r_ARRAY_CONSTRUCTOR(R17 * p_E, R22 * p_WANT);
static void r_CHECK_SHAPE(R17 * p_E, rt_int p_DIMS);
static rt_int r_SAME_SHAPE(R17 * p_A, R17 * p_B);
static void r_ARRAY_ELEMENTS(R17 * p_E, rt_int p_DIMS, R22 * p_A, R9 p_TMP, R9 *p_R, rt_int *p_K);
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS);
static R28 r_TYPE_SPECIFIER(R17 * p_E);
static R9 r_OF_BITS(R22 * p_T, R9 p_B, rt_int p_LINE);
static R9 r_ARRAY_BITS(R22 * p_T, R9 p_C);
static R9 r_ARRAY_OF_BITS(R22 * p_T, R9 p_B);
static R9 r_ENUM_OF_BITS(R22 * p_T, R9 p_C);
static R9 r_REP_TABLE(R22 * p_T);
static R28 r_NEW_EXPR(R17 * p_E, R22 * p_WANT);
static R9 r_FLOAT_CONV(R28 p_V, R22 * p_T, R9 p_TR);
static R9 r_FLOAT_LIMIT(R22 * p_T, R9 p_WHICH);
static R17 * r_NTH(R17 * p_L, rt_int p_K);
static void r_NEED_ARGS(R17 * p_E, rt_int p_LO, rt_int p_HI);
static R9 r_ROUNDING_ARG(R17 * p_E, rt_int p_N);
static rt_int r_IS_ROUNDING(R17 * p_E);
static R17 * r_ARG_EXPR(R17 * p_E);
static R9 r_OPERATOR_SYMBOL(R9 p_NAME);
static R28 r_OPERATOR_BUILTIN(R17 * p_E, R22 * p_WANT);
static R17 * r_QUALIFIED(R17 * p_X, R17 * p_Q, rt_int p_LINE);
static rt_int r_IS_ROUNDING_NAME(R9 p_NAME);
static R22 * r_ROUNDINGS_TYPE(void);
static rt_int r_PREDEFINED_ROUNDING(void);
static R17 * r_FIRST_OUT_ARG(R17 * p_E);
static rt_int r_GENERIC_OBJECT_ARG(R17 * p_L);
static R28 r_BUILTIN(R17 * p_E, R22 * p_WANT);
static R28 r_IMAGE_OF(R28 p_V, rt_int p_LINE);
static R28 r_TO_FIXED_CALL(R17 * p_E);
static rt_int r_STATIC_SIZE_OR(R22 * p_T);
static R28 r_BITS_OF(R28 p_V, rt_int p_LINE);
static void r_TYPE_ARG(R29 * p_A);
static rt_int r_WANT_SENSITIVE(R29 * p_A);
static rt_int r_COUNT_ARGS(R29 * p_A);
static R29 * r_CALL_ARGS(R17 * p_E);
static R28 r_CALL_EXPR(R17 * p_E, R22 * p_WANT);
static R28 r_CALL_EXPR1(R17 * p_E, R22 * p_WANT);
static R9 r_CLASS_OPERATION(R9 p_NAME);
static R9 r_WHERE_SHORT_NAME(R9 p_NAME);
static R12 * r_BOUND_ROUTINE(R9 p_NAME);
static rt_int r_CANDIDATE(R12 * p_Y, R9 p_NAME);
static R12 * r_FIND_ROUTINE(R9 p_NAME, R29 * p_ARGS, rt_int p_LINE, rt_int p_MUST);
static rt_int r_SEEN_ROUTINE(R12 * p_R, R9 p_NAME, R12 * p_STOP);
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R9 p_NAME, R12 * p_STOP);
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B);
static rt_int r_PARAM_COUNT(R12 * p_R);
static rt_int r_MATCH_SCORE(R12 * p_R, R29 * p_ARGS);
static rt_int r_LITERAL_FITS(R17 * p_E, R22 * p_T);
static R12 * r_ARG_ROOT(R17 * p_E);
static R17 * r_PATH_OF(R17 * p_E);
static rt_int r_DISJOINT_PATHS(R17 * p_A, R17 * p_B);
static void r_EXPLICIT_GENERIC_ARGS(R12 * p_Y, R29 * p_ARGS, rt_int p_LINE);
static void r_NAMES_IN(R17 * p_L, R17 * *p_HEAD);
static rt_int r_CONSTANT_EXPR(R17 * p_E);
static rt_int r_CONSTANT_LIST(R17 * p_L);
static rt_int r_PACKED_ELEMENT(R17 * p_E);
static void r_NO_ALIASING(R12 * p_Y, R29 * p_ARGS, rt_int p_LINE);
static void r_NEED_BODY(R12 * p_G);
static R12 * r_INLINE_INSTANCE(R12 * p_G, R29 * p_ARGS, rt_int p_LINE);
static R28 r_CALL_SYM(R12 * p_Y0, R29 * p_ARGS, rt_int p_LINE);
static R22 * r_FORMAL_VIEW(R12 * p_R, R30 * p_P);
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
static void r_ADD_BIND(R9 p_NAME, R22 * p_T, R25 p_M, R12 * p_R, R21 * p_HEAD);
static R21 * r_FIND_BIND(R21 * p_BS, R9 p_NAME);
static rt_int r_UNIFY(R17 * p_TS, R22 * p_T, R21 * p_BS);
static rt_int r_SAME_DERIVED_LENGTH(R17 * p_A, R22 * p_RT, R21 * p_BS);
static rt_int r_UNIFY_REP(R17 * p_R, R22 * p_RT, R21 * p_BS);
static rt_int r_NONSTANDARD_REP(R22 * p_T);
static R12 * r_RECORD_CLASS_OF(R22 * p_T);
static rt_int r_UNIFY_VALUE(R17 * p_A, R25 p_M, R21 * p_BS);
static rt_int r_GENERIC_FITS(R30 * p_P, R29 * p_A, R21 * p_BS);
static R12 * r_INSTANCE(R12 * p_G, R29 * p_ARGS, rt_int p_LINE);
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
static R12 * r_NEW_INSTANCE(R12 * p_G, R21 * p_BS, R29 * p_ARGS);
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
static R28 r_PROCEDURE_CALL(R17 * p_S);
static void r_IF_STMT(R17 * p_ARMS, R17 * p_ELSE_BODY);
static void r_CHECK_BODY(R17 * p_B);
static void r_CHECK_COND(R17 * p_E);
static void r_FOR_STMT(R17 * p_S);
static void r_RETURN_STMT(R17 * p_S);
static void r_SIGNAL_STMT(R17 * p_S);
static void r_ASSIGN_STMT(R17 * p_S);
static void r_WITH_STMT(R17 * p_S);
static void r_CASE_STMT(R17 * p_S);
static R27 * r_DISTINCT_LABEL(R27 * p_SEEN, rt_int p_A, rt_int p_B, rt_int p_LINE);
static void r_VALUE_CASE(R17 * p_S, R28 p_CH);
static R28 r_CASE_LABEL(R17 * p_L, R22 * p_T);
static R9 r_VALUE_COMPARE(R28 p_A, R28 p_B, R9 p_OP);
static void r_CASE_ELEMENT(R17 * p_B, R17 * p_HANDLERS);
static R12 * r_DISCRIMINATED(R17 * p_CH);
static R22 * r_NARROW(R22 * p_T, R9 p_TAGN, rt_int p_V);
static void r_MACHINE_CASE(R17 * p_S);
static R22 * r_PATHS_TYPE(void);
static void r_PARALLEL_BLOCK(R17 * p_S);
static R28 r_PATH_LIST(rt_int p_LINE);
static rt_int r_STATIC_SIZE_OR_LEN(R22 * p_T);
static R28 r_RUN_PATHS(R17 * p_E);
static void r_ACTIVATE_PATH(R17 * p_P, R9 p_TD, rt_int p_K);
static rt_int r_IMPLEMENTATION_SEMAPHORE(R17 * p_E);
static R9 r_CONNECT_NAME(R17 * p_P);
static R9 r_UP_FRAME(void);
static void r_PATH_BODY(R17 * p_P, R9 p_FN, R9 p_FT, R22 * p_LT);
static R9 r_JOIN_BUF(R14 p_B);
static R9 r_PATH_REF(R17 * p_E);
static void r_TERMINATE_STMT(R17 * p_S);
static R28 r_PARALLEL_BUILTIN(R17 * p_E, R22 * p_WANT);
static R28 r_START_IO_CALL(R17 * p_E);
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
static void S_R27(R27 *d, R27 s, int any);
static int E_R27(R27 a, R27 b);
static R27 C_R27(R27 s);
static void S_R26(R26 *d, R26 s, int any);
static int E_R26(R26 a, R26 b);
static R26 C_R26(R26 s);
static void S_R29(R29 *d, R29 s, int any);
static int E_R29(R29 a, R29 b);
static R29 C_R29(R29 s);
static void S_R30(R30 *d, R30 s, int any);
static int E_R30(R30 a, R30 b);
static R30 C_R30(R30 s);
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
static void S_R7(R7 *d, R7 s, int any) {  rt_b_assign(&d->f_ARENA, s.f_ARENA); d->f_TOP = s.f_TOP; S_A8(&d->f_SRC, s.f_SRC, 0); d->f_NSRC = s.f_NSRC; d->f_LEXED = s.f_LEXED; d->f_LEXLINE = s.f_LEXLINE; S_R9(&d->f_LIBDIR, s.f_LIBDIR, 0); d->f_LIBSEGS = s.f_LIBSEGS; d->f_SUPPRESS = s.f_SUPPRESS; d->f_WORD = s.f_WORD; d->f_SEPC = s.f_SEPC; S_R9(&d->f_SEPSEG, s.f_SEPSEG, 0); d->f_EXTSEG = s.f_EXTSEG; d->f_SEPV = s.f_SEPV; d->f_SEPR = s.f_SEPR; d->f_OWNSEGS = s.f_OWNSEGS; d->f_EXTS = s.f_EXTS; d->f_STDINLEN = s.f_STDINLEN; S_A11(&d->f_TOKS, s.f_TOKS, 0); d->f_NTOKS = s.f_NTOKS; d->f_POS = s.f_POS; S_A13(&d->f_TABLE, s.f_TABLE, 0); d->f_SCOPE = s.f_SCOPE; d->f_DEPTH = s.f_DEPTH; S_A16(&d->f_OUT, s.f_OUT, 0); S_R14(&d->f_CODE, s.f_CODE, 0); d->f_CTXS = s.f_CTXS; d->f_CS = s.f_CS; d->f_IS = s.f_IS; d->f_NSCOPES = s.f_NSCOPES; d->f_MODL = s.f_MODL; d->f_BINDS = s.f_BINDS; d->f_ROUNDED = s.f_ROUNDED; d->f_QUAL = s.f_QUAL; d->f_SQUAL = s.f_SQUAL; d->f_TYPECHECK = s.f_TYPECHECK; d->f_CHARSETS = s.f_CHARSETS; d->f_IN_RECORD = s.f_IN_RECORD; d->f_IN_TYPEDECL = s.f_IN_TYPEDECL; d->f_REPCONV = s.f_REPCONV; d->f_LDONE = s.f_LDONE; d->f_LMODE = s.f_LMODE; S_R9(&d->f_LIMG, s.f_LIMG, 0); d->f_NEW_OK = s.f_NEW_OK; d->f_START_IO = s.f_START_IO; d->f_MACHINE = s.f_MACHINE; d->f_SERIAL = s.f_SERIAL; d->f_EXCS = s.f_EXCS; d->f_TY_INT = s.f_TY_INT; d->f_TY_BOOL = s.f_TY_BOOL; d->f_TY_STR = s.f_TY_STR; d->f_TY_VOID = s.f_TY_VOID; d->f_TY_NIL = s.f_TY_NIL; d->f_TY_ASCII = s.f_TY_ASCII; d->f_TY_FLOAT = s.f_TY_FLOAT; d->f_TY_BITS = s.f_TY_BITS; d->f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d->f_TY_TYPE = s.f_TY_TYPE; d->f_PENDING = s.f_PENDING; d->f_CNAMES = s.f_CNAMES; d->f_ENUMS = s.f_ENUMS; d->f_SEGS = s.f_SEGS; d->f_CURSEG = s.f_CURSEG; d->f_TRSEG = s.f_TRSEG; d->f_ARRAYS = s.f_ARRAYS; d->f_RECS = s.f_RECS; }
static int E_R7(R7 a, R7 b) { return 1 && rt_b_eq(a.f_ARENA, b.f_ARENA) && (a.f_TOP == b.f_TOP) && E_A8(a.f_SRC, b.f_SRC) && (a.f_NSRC == b.f_NSRC) && (a.f_LEXED == b.f_LEXED) && (a.f_LEXLINE == b.f_LEXLINE) && E_R9(a.f_LIBDIR, b.f_LIBDIR) && (a.f_LIBSEGS == b.f_LIBSEGS) && (a.f_SUPPRESS == b.f_SUPPRESS) && (a.f_WORD == b.f_WORD) && (a.f_SEPC == b.f_SEPC) && E_R9(a.f_SEPSEG, b.f_SEPSEG) && (a.f_EXTSEG == b.f_EXTSEG) && (a.f_SEPV == b.f_SEPV) && (a.f_SEPR == b.f_SEPR) && (a.f_OWNSEGS == b.f_OWNSEGS) && (a.f_EXTS == b.f_EXTS) && (a.f_STDINLEN == b.f_STDINLEN) && E_A11(a.f_TOKS, b.f_TOKS) && (a.f_NTOKS == b.f_NTOKS) && (a.f_POS == b.f_POS) && E_A13(a.f_TABLE, b.f_TABLE) && (a.f_SCOPE == b.f_SCOPE) && (a.f_DEPTH == b.f_DEPTH) && E_A16(a.f_OUT, b.f_OUT) && E_R14(a.f_CODE, b.f_CODE) && (a.f_CTXS == b.f_CTXS) && (a.f_CS == b.f_CS) && (a.f_IS == b.f_IS) && (a.f_NSCOPES == b.f_NSCOPES) && (a.f_MODL == b.f_MODL) && (a.f_BINDS == b.f_BINDS) && (a.f_ROUNDED == b.f_ROUNDED) && (a.f_QUAL == b.f_QUAL) && (a.f_SQUAL == b.f_SQUAL) && (a.f_TYPECHECK == b.f_TYPECHECK) && (a.f_CHARSETS == b.f_CHARSETS) && (a.f_IN_RECORD == b.f_IN_RECORD) && (a.f_IN_TYPEDECL == b.f_IN_TYPEDECL) && (a.f_REPCONV == b.f_REPCONV) && (a.f_LDONE == b.f_LDONE) && (a.f_LMODE == b.f_LMODE) && E_R9(a.f_LIMG, b.f_LIMG) && (a.f_NEW_OK == b.f_NEW_OK) && (a.f_START_IO == b.f_START_IO) && (a.f_MACHINE == b.f_MACHINE) && (a.f_SERIAL == b.f_SERIAL) && (a.f_EXCS == b.f_EXCS) && (a.f_TY_INT == b.f_TY_INT) && (a.f_TY_BOOL == b.f_TY_BOOL) && (a.f_TY_STR == b.f_TY_STR) && (a.f_TY_VOID == b.f_TY_VOID) && (a.f_TY_NIL == b.f_TY_NIL) && (a.f_TY_ASCII == b.f_TY_ASCII) && (a.f_TY_FLOAT == b.f_TY_FLOAT) && (a.f_TY_BITS == b.f_TY_BITS) && (a.f_TY_ROUNDINGS == b.f_TY_ROUNDINGS) && (a.f_TY_TYPE == b.f_TY_TYPE) && (a.f_PENDING == b.f_PENDING) && (a.f_CNAMES == b.f_CNAMES) && (a.f_ENUMS == b.f_ENUMS) && (a.f_SEGS == b.f_SEGS) && (a.f_CURSEG == b.f_CURSEG) && (a.f_TRSEG == b.f_TRSEG) && (a.f_ARRAYS == b.f_ARRAYS) && (a.f_RECS == b.f_RECS); }
static R7 C_R7(R7 s) { R7 d = s;
 d.f_ARENA = rt_str_copy(s.f_ARENA); d.f_TOP = s.f_TOP; d.f_SRC = C_A8(s.f_SRC); d.f_NSRC = s.f_NSRC; d.f_LEXED = s.f_LEXED; d.f_LEXLINE = s.f_LEXLINE; d.f_LIBDIR = C_R9(s.f_LIBDIR); d.f_LIBSEGS = s.f_LIBSEGS; d.f_SUPPRESS = s.f_SUPPRESS; d.f_WORD = s.f_WORD; d.f_SEPC = s.f_SEPC; d.f_SEPSEG = C_R9(s.f_SEPSEG); d.f_EXTSEG = s.f_EXTSEG; d.f_SEPV = s.f_SEPV; d.f_SEPR = s.f_SEPR; d.f_OWNSEGS = s.f_OWNSEGS; d.f_EXTS = s.f_EXTS; d.f_STDINLEN = s.f_STDINLEN; d.f_TOKS = C_A11(s.f_TOKS); d.f_NTOKS = s.f_NTOKS; d.f_POS = s.f_POS; d.f_TABLE = C_A13(s.f_TABLE); d.f_SCOPE = s.f_SCOPE; d.f_DEPTH = s.f_DEPTH; d.f_OUT = C_A16(s.f_OUT); d.f_CODE = C_R14(s.f_CODE); d.f_CTXS = s.f_CTXS; d.f_CS = s.f_CS; d.f_IS = s.f_IS; d.f_NSCOPES = s.f_NSCOPES; d.f_MODL = s.f_MODL; d.f_BINDS = s.f_BINDS; d.f_ROUNDED = s.f_ROUNDED; d.f_QUAL = s.f_QUAL; d.f_SQUAL = s.f_SQUAL; d.f_TYPECHECK = s.f_TYPECHECK; d.f_CHARSETS = s.f_CHARSETS; d.f_IN_RECORD = s.f_IN_RECORD; d.f_IN_TYPEDECL = s.f_IN_TYPEDECL; d.f_REPCONV = s.f_REPCONV; d.f_LDONE = s.f_LDONE; d.f_LMODE = s.f_LMODE; d.f_LIMG = C_R9(s.f_LIMG); d.f_NEW_OK = s.f_NEW_OK; d.f_START_IO = s.f_START_IO; d.f_MACHINE = s.f_MACHINE; d.f_SERIAL = s.f_SERIAL; d.f_EXCS = s.f_EXCS; d.f_TY_INT = s.f_TY_INT; d.f_TY_BOOL = s.f_TY_BOOL; d.f_TY_STR = s.f_TY_STR; d.f_TY_VOID = s.f_TY_VOID; d.f_TY_NIL = s.f_TY_NIL; d.f_TY_ASCII = s.f_TY_ASCII; d.f_TY_FLOAT = s.f_TY_FLOAT; d.f_TY_BITS = s.f_TY_BITS; d.f_TY_ROUNDINGS = s.f_TY_ROUNDINGS; d.f_TY_TYPE = s.f_TY_TYPE; d.f_PENDING = s.f_PENDING; d.f_CNAMES = s.f_CNAMES; d.f_ENUMS = s.f_ENUMS; d.f_SEGS = s.f_SEGS; d.f_CURSEG = s.f_CURSEG; d.f_TRSEG = s.f_TRSEG; d.f_ARRAYS = s.f_ARRAYS; d.f_RECS = s.f_RECS; return d; }
static void S_R25(R25 *d, R25 s, int any) {  d->f_OK = s.f_OK; d->f_V = s.f_V; }
static int E_R25(R25 a, R25 b) { return 1 && (a.f_OK == b.f_OK) && (a.f_V == b.f_V); }
static R25 C_R25(R25 s) { R25 d = s;
 d.f_OK = s.f_OK; d.f_V = s.f_V; return d; }
static void S_R28(R28 *d, R28 s, int any) {  S_R9(&d->f_C, s.f_C, 0); d->f_T = s.f_T; d->f_LVAL = s.f_LVAL; S_R9(&d->f_SELF, s.f_SELF, 0); }
static int E_R28(R28 a, R28 b) { return 1 && E_R9(a.f_C, b.f_C) && (a.f_T == b.f_T) && (a.f_LVAL == b.f_LVAL) && E_R9(a.f_SELF, b.f_SELF); }
static R28 C_R28(R28 s) { R28 d = s;
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
static void S_R22(R22 *d, R22 s, int any) {  d->f_KIND = s.f_KIND; d->f_SCALE = s.f_SCALE; S_R9(&d->f_LO_C, s.f_LO_C, 0); S_R9(&d->f_HI_C, s.f_HI_C, 0); S_R25(&d->f_MLO, s.f_MLO, 0); S_R25(&d->f_MHI, s.f_MHI, 0); d->f_RLEVEL = s.f_RLEVEL; S_R9(&d->f_LEN_C, s.f_LEN_C, 0); S_R25(&d->f_MLEN, s.f_MLEN, 0); S_R9(&d->f_GEN, s.f_GEN, 0); d->f_BASE = s.f_BASE; d->f_ELEM = s.f_ELEM; d->f_TARGET = s.f_TARGET; d->f_TARGET_TS = s.f_TARGET_TS; d->f_FIELDS = s.f_FIELDS; d->f_LITS = s.f_LITS; d->f_NLITS = s.f_NLITS; d->f_UNORDERED = s.f_UNORDERED; d->f_BOUNDS = s.f_BOUNDS; d->f_DIMS = s.f_DIMS; d->f_ARGS = s.f_ARGS; S_R9(&d->f_NAME, s.f_NAME, 0); S_R9(&d->f_CNAME, s.f_CNAME, 0); d->f_MODL = s.f_MODL; d->f_REPS = s.f_REPS; d->f_DECL = s.f_DECL; S_R9(&d->f_GENP, s.f_GENP, 0); }
static int E_R22(R22 a, R22 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_SCALE == b.f_SCALE) && E_R9(a.f_LO_C, b.f_LO_C) && E_R9(a.f_HI_C, b.f_HI_C) && E_R25(a.f_MLO, b.f_MLO) && E_R25(a.f_MHI, b.f_MHI) && (a.f_RLEVEL == b.f_RLEVEL) && E_R9(a.f_LEN_C, b.f_LEN_C) && E_R25(a.f_MLEN, b.f_MLEN) && E_R9(a.f_GEN, b.f_GEN) && (a.f_BASE == b.f_BASE) && (a.f_ELEM == b.f_ELEM) && (a.f_TARGET == b.f_TARGET) && (a.f_TARGET_TS == b.f_TARGET_TS) && (a.f_FIELDS == b.f_FIELDS) && (a.f_LITS == b.f_LITS) && (a.f_NLITS == b.f_NLITS) && (a.f_UNORDERED == b.f_UNORDERED) && (a.f_BOUNDS == b.f_BOUNDS) && (a.f_DIMS == b.f_DIMS) && (a.f_ARGS == b.f_ARGS) && E_R9(a.f_NAME, b.f_NAME) && E_R9(a.f_CNAME, b.f_CNAME) && (a.f_MODL == b.f_MODL) && (a.f_REPS == b.f_REPS) && (a.f_DECL == b.f_DECL) && E_R9(a.f_GENP, b.f_GENP); }
static R22 C_R22(R22 s) { R22 d = s;
 d.f_KIND = s.f_KIND; d.f_SCALE = s.f_SCALE; d.f_LO_C = C_R9(s.f_LO_C); d.f_HI_C = C_R9(s.f_HI_C); d.f_MLO = C_R25(s.f_MLO); d.f_MHI = C_R25(s.f_MHI); d.f_RLEVEL = s.f_RLEVEL; d.f_LEN_C = C_R9(s.f_LEN_C); d.f_MLEN = C_R25(s.f_MLEN); d.f_GEN = C_R9(s.f_GEN); d.f_BASE = s.f_BASE; d.f_ELEM = s.f_ELEM; d.f_TARGET = s.f_TARGET; d.f_TARGET_TS = s.f_TARGET_TS; d.f_FIELDS = s.f_FIELDS; d.f_LITS = s.f_LITS; d.f_NLITS = s.f_NLITS; d.f_UNORDERED = s.f_UNORDERED; d.f_BOUNDS = s.f_BOUNDS; d.f_DIMS = s.f_DIMS; d.f_ARGS = s.f_ARGS; d.f_NAME = C_R9(s.f_NAME); d.f_CNAME = C_R9(s.f_CNAME); d.f_MODL = s.f_MODL; d.f_REPS = s.f_REPS; d.f_DECL = s.f_DECL; d.f_GENP = C_R9(s.f_GENP); return d; }
static void S_R21(R21 *d, R21 s, int any) {  S_R9(&d->f_NAME, s.f_NAME, 0); d->f_T = s.f_T; S_R9(&d->f_C, s.f_C, 0); d->f_HASMV = s.f_HASMV; d->f_MV = s.f_MV; d->f_R = s.f_R; d->f_NEXT = s.f_NEXT; }
static int E_R21(R21 a, R21 b) { return 1 && E_R9(a.f_NAME, b.f_NAME) && (a.f_T == b.f_T) && E_R9(a.f_C, b.f_C) && (a.f_HASMV == b.f_HASMV) && (a.f_MV == b.f_MV) && (a.f_R == b.f_R) && (a.f_NEXT == b.f_NEXT); }
static R21 C_R21(R21 s) { R21 d = s;
 d.f_NAME = C_R9(s.f_NAME); d.f_T = s.f_T; d.f_C = C_R9(s.f_C); d.f_HASMV = s.f_HASMV; d.f_MV = s.f_MV; d.f_R = s.f_R; d.f_NEXT = s.f_NEXT; return d; }
static void S_R27(R27 *d, R27 s, int any) {  S_R9(&d->f_LO, s.f_LO, 0); S_R9(&d->f_HI, s.f_HI, 0); S_R25(&d->f_MLO, s.f_MLO, 0); S_R25(&d->f_MHI, s.f_MHI, 0); d->f_ANYARG = s.f_ANYARG; d->f_NEXT = s.f_NEXT; }
static int E_R27(R27 a, R27 b) { return 1 && E_R9(a.f_LO, b.f_LO) && E_R9(a.f_HI, b.f_HI) && E_R25(a.f_MLO, b.f_MLO) && E_R25(a.f_MHI, b.f_MHI) && (a.f_ANYARG == b.f_ANYARG) && (a.f_NEXT == b.f_NEXT); }
static R27 C_R27(R27 s) { R27 d = s;
 d.f_LO = C_R9(s.f_LO); d.f_HI = C_R9(s.f_HI); d.f_MLO = C_R25(s.f_MLO); d.f_MHI = C_R25(s.f_MHI); d.f_ANYARG = s.f_ANYARG; d.f_NEXT = s.f_NEXT; return d; }
static void S_R26(R26 *d, R26 s, int any) {  S_R9(&d->f_NAME, s.f_NAME, 0); S_R9(&d->f_CNAME, s.f_CNAME, 0); d->f_T = s.f_T; d->f_KIND = s.f_KIND; S_R9(&d->f_TAGF, s.f_TAGF, 0); d->f_LABELS = s.f_LABELS; d->f_NEXT = s.f_NEXT; }
static int E_R26(R26 a, R26 b) { return 1 && E_R9(a.f_NAME, b.f_NAME) && E_R9(a.f_CNAME, b.f_CNAME) && (a.f_T == b.f_T) && (a.f_KIND == b.f_KIND) && E_R9(a.f_TAGF, b.f_TAGF) && (a.f_LABELS == b.f_LABELS) && (a.f_NEXT == b.f_NEXT); }
static R26 C_R26(R26 s) { R26 d = s;
 d.f_NAME = C_R9(s.f_NAME); d.f_CNAME = C_R9(s.f_CNAME); d.f_T = s.f_T; d.f_KIND = s.f_KIND; d.f_TAGF = C_R9(s.f_TAGF); d.f_LABELS = s.f_LABELS; d.f_NEXT = s.f_NEXT; return d; }
static void S_R29(R29 *d, R29 s, int any) {  d->f_E = s.f_E; S_R28(&d->f_V, s.f_V, 0); d->f_HAVE = s.f_HAVE; d->f_MODE = s.f_MODE; d->f_NEXT = s.f_NEXT; }
static int E_R29(R29 a, R29 b) { return 1 && (a.f_E == b.f_E) && E_R28(a.f_V, b.f_V) && (a.f_HAVE == b.f_HAVE) && (a.f_MODE == b.f_MODE) && (a.f_NEXT == b.f_NEXT); }
static R29 C_R29(R29 s) { R29 d = s;
 d.f_E = s.f_E; d.f_V = C_R28(s.f_V); d.f_HAVE = s.f_HAVE; d.f_MODE = s.f_MODE; d.f_NEXT = s.f_NEXT; return d; }
static void S_R30(R30 *d, R30 s, int any) {  S_R9(&d->f_NAME, s.f_NAME, 0); d->f_MODE = s.f_MODE; d->f_T = s.f_T; d->f_TS = s.f_TS; d->f_NEXT = s.f_NEXT; }
static int E_R30(R30 a, R30 b) { return 1 && E_R9(a.f_NAME, b.f_NAME) && (a.f_MODE == b.f_MODE) && (a.f_T == b.f_T) && (a.f_TS == b.f_TS) && (a.f_NEXT == b.f_NEXT); }
static R30 C_R30(R30 s) { R30 d = s;
 d.f_NAME = C_R9(s.f_NAME); d.f_MODE = s.f_MODE; d.f_T = s.f_T; d.f_TS = s.f_TS; d.f_NEXT = s.f_NEXT; return d; }
static void S_R18(R18 *d, R18 s, int any) {  d->f_KIND = s.f_KIND; S_R9(&d->f_NAME, s.f_NAME, 0); d->f_HANDLERS = s.f_HANDLERS; d->f_NEXT = s.f_NEXT; }
static int E_R18(R18 a, R18 b) { return 1 && (a.f_KIND == b.f_KIND) && E_R9(a.f_NAME, b.f_NAME) && (a.f_HANDLERS == b.f_HANDLERS) && (a.f_NEXT == b.f_NEXT); }
static R18 C_R18(R18 s) { R18 d = s;
 d.f_KIND = s.f_KIND; d.f_NAME = C_R9(s.f_NAME); d.f_HANDLERS = s.f_HANDLERS; d.f_NEXT = s.f_NEXT; return d; }
static rstr r_CHAR_OF(rt_int p_C) { RT_B_TICK(); 
if (({ rt_int iv40 = p_C; (((rt_int)32LL) <= iv40) && (iv40 <= ((rt_int)126LL)); }))
{
{ rstr rv41 = rt_b_slice(g_GRAPHIC, rt_sub(p_C, ((rt_int)32LL)), rt_sub(p_C, ((rt_int)32LL)));
return rv41; }
}
{
rt_int l_N_42; memset(&l_N_42, 0, sizeof l_N_42);
l_N_42 = (rt_int)(8);
rstr l_B_43; memset(&l_B_43, 0, sizeof l_B_43);
l_B_43 = rt_b_str_new(((rt_int)8LL), 1);
rt_b_assign(&l_B_43, rt_b_zeros(l_N_42));
rt_int l_V_44; memset(&l_V_44, 0, sizeof l_V_44);
l_V_44 = p_C;
{ rt_int it46_lo = ((rt_int)0LL), it46_hi = rt_sub(l_N_42, ((rt_int)1LL));
for (rt_int it46 = it46_lo; it46 <= it46_hi; it46++) {
{
if ((rt_rem(l_V_44, ((rt_int)2LL)) == ((rt_int)1LL)))
{
rt_b_slice_assign(&l_B_43, rt_sub(rt_sub(l_N_42, ((rt_int)1LL)), it46), rt_sub(rt_sub(l_N_42, ((rt_int)1LL)), it46), rt_str("1", 1));
}
l_V_44 = rt_quot(l_V_44, ((rt_int)2LL));
}
RT_B_TICK();
if (it46 == it46_hi) break;
} } L_end45: ;
if ((l_V_44 == ((rt_int)0LL)))
{
{
{ rstr rv47 = rt_b_chars_of_bits(l_B_43, 7, 1, NULL, 128);
return rv47; }
}
}
}
{ rstr rv48 = rt_str("\?", 1);
return rv48; }
rt_raise(RT_X_INIT);
}
static rt_int r_CODE_OF(rstr p_S) { RT_B_TICK(); 
{ rt_int rv49 = rt_b_int_of_bits(rt_b_bits_of_chars(p_S, 7, 1, NULL, 128));
return rv49; }
rt_raise(RT_X_INIT);
}
static rt_int r_HASH_CODES(rt_int p_L, rt_int p_C1, rt_int p_C2, rt_int p_C3) { RT_B_TICK(); 
{ rt_int rv50 = rt_rem((rt_add(rt_add(rt_add(rt_mul(p_L, ((rt_int)31LL)), rt_mul(p_C1, ((rt_int)7LL))), rt_mul(p_C2, ((rt_int)3LL))), p_C3)), g_HASH_SIZE);
return rv50; }
rt_raise(RT_X_INIT);
}
static rt_int r_HASH_OF(rstr p_S) { RT_B_TICK(); 
if (((rt_int)(p_S).len == ((rt_int)0LL)))
{
{ rt_int rv51 = ((rt_int)0LL);
return rv51; }
}
{ rt_int rv52 = r_HASH_CODES((rt_int)(p_S).len, r_CODE_OF(rt_b_slice(p_S, ((rt_int)0LL), ((rt_int)0LL))), r_CODE_OF(rt_b_slice(p_S, rt_quot((rt_int)(p_S).len, ((rt_int)2LL)), rt_quot((rt_int)(p_S).len, ((rt_int)2LL)))), r_CODE_OF(rt_b_slice(p_S, rt_sub((rt_int)(p_S).len, ((rt_int)1LL)), rt_sub((rt_int)(p_S).len, ((rt_int)1LL)))));
return rv52; }
rt_raise(RT_X_INIT);
}
static R9 r_MK(rstr p_S) { RT_B_TICK(); 
rt_int l_AT_53; memset(&l_AT_53, 0, sizeof l_AT_53);
l_AT_53 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
if ((rt_add(l_AT_53, (rt_int)(p_S).len) > g_ARENA_SIZE))
{
rt_putln(rt_str("*** the arena is full", 21));
rt_exit(((rt_int)2LL));
}
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, l_AT_53, rt_sub(rt_add(l_AT_53, (rt_int)(p_S).len), ((rt_int)1LL)), p_S);
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(l_AT_53, (rt_int)(p_S).len);
{ R9 rv54 = ({ R9 rc55; memset(&rc55, 0, sizeof rc55);  rc55.f_AT = l_AT_53; rc55.f_LEN = (rt_int)(p_S).len; rc55.f_H = rt_neg(((rt_int)1LL)); rc55; });
return rv54; }
rt_raise(RT_X_INIT);
}
static R9 r_MKN(rstr p_S) { RT_B_TICK(); 
R9 l_T_56; memset(&l_T_56, 0, sizeof l_T_56);
S_R9(&l_T_56, r_MK(p_S), 0);
(l_T_56).f_H = r_HASH_OF(p_S);
{ R9 rv57 = l_T_56;
return rv57; }
rt_raise(RT_X_INIT);
}
static rstr r_STR(R9 p_T, rt_int p_L) { RT_B_TICK(); 
{ rstr rv58 = rt_b_slice(((*(R7 *)rt_nil_check(g_W))).f_ARENA, (p_T).f_AT, rt_sub(rt_add((p_T).f_AT, p_L), ((rt_int)1LL)));
return rv58; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEQ(R9 p_A, R9 p_B) { RT_B_TICK(); 
if ((!((p_A).f_LEN == (p_B).f_LEN)))
{
{ rt_int rv59 = 0;
return rv59; }
}
{ rt_int rv60 = rt_b_eq(r_STR(p_A, (p_A).f_LEN), r_STR(p_B, (p_B).f_LEN));
return rv60; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEQS(R9 p_A, rstr p_S) { RT_B_TICK(); 
if ((!((p_A).f_LEN == (rt_int)(p_S).len)))
{
{ rt_int rv61 = 0;
return rv61; }
}
{ rt_int rv62 = rt_b_eq(r_STR(p_A, (p_A).f_LEN), p_S);
return rv62; }
rt_raise(RT_X_INIT);
}
static R9 r_CAT(R9 p_A, R9 p_B) { RT_B_TICK(); 
{ R9 rv63 = r_MK(rt_b_cat(r_STR(p_A, (p_A).f_LEN), r_STR(p_B, (p_B).f_LEN)));
return rv63; }
rt_raise(RT_X_INIT);
}
static R9 r_CATS(R9 p_A, rstr p_S) { RT_B_TICK(); 
{ R9 rv64 = r_MK(rt_b_cat(r_STR(p_A, (p_A).f_LEN), p_S));
return rv64; }
rt_raise(RT_X_INIT);
}
static R9 r_FMT4(rstr p_P, R9 p_A, R9 p_B, R9 p_C, R9 p_D) { RT_B_TICK(); 
rt_int l_AT_65; memset(&l_AT_65, 0, sizeof l_AT_65);
l_AT_65 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_N_66; memset(&l_N_66, 0, sizeof l_N_66);
l_N_66 = ((rt_int)0LL);
rt_int l_START_67; memset(&l_START_67, 0, sizeof l_START_67);
l_START_67 = ((rt_int)0LL);
R9 l_R_68; memset(&l_R_68, 0, sizeof l_R_68);
{ rt_int it70_lo = ((rt_int)0LL), it70_hi = rt_sub((rt_int)(p_P).len, ((rt_int)1LL));
for (rt_int it70 = it70_lo; it70 <= it70_hi; it70++) {
{
if (rt_b_eq(rt_b_slice(p_P, it70, it70), rt_str("@", 1)))
{
S_R9(&l_R_68, r_MK(rt_b_slice(p_P, l_START_67, rt_sub(it70, ((rt_int)1LL)))), 0);
switch (l_N_66) {
case 0:
{
S_R9(&l_R_68, r_MK(r_STR(p_A, (p_A).f_LEN)), 0);
}
break;
case 1:
{
S_R9(&l_R_68, r_MK(r_STR(p_B, (p_B).f_LEN)), 0);
}
break;
case 2:
{
S_R9(&l_R_68, r_MK(r_STR(p_C, (p_C).f_LEN)), 0);
}
break;
default:
{
S_R9(&l_R_68, r_MK(r_STR(p_D, (p_D).f_LEN)), 0);
}
break;
}
l_N_66 = rt_add(l_N_66, ((rt_int)1LL));
l_START_67 = rt_add(it70, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it70 == it70_hi) break;
} } L_end69: ;
S_R9(&l_R_68, r_MK(rt_b_slice(p_P, l_START_67, rt_sub((rt_int)(p_P).len, ((rt_int)1LL)))), 0);
{ R9 rv71 = ({ R9 rc72; memset(&rc72, 0, sizeof rc72);  rc72.f_AT = l_AT_65; rc72.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_65); rc72.f_H = rt_neg(((rt_int)1LL)); rc72; });
return rv71; }
rt_raise(RT_X_INIT);
}
static R9 r_FMT1(rstr p_P, R9 p_A) { RT_B_TICK(); 
{ R9 rv73 = r_FMT4(p_P, p_A, p_A, p_A, p_A);
return rv73; }
rt_raise(RT_X_INIT);
}
static R9 r_FMT2(rstr p_P, R9 p_A, R9 p_B) { RT_B_TICK(); 
{ R9 rv74 = r_FMT4(p_P, p_A, p_B, p_B, p_B);
return rv74; }
rt_raise(RT_X_INIT);
}
static R9 r_FMT3(rstr p_P, R9 p_A, R9 p_B, R9 p_C) { RT_B_TICK(); 
{ R9 rv75 = r_FMT4(p_P, p_A, p_B, p_C, p_C);
return rv75; }
rt_raise(RT_X_INIT);
}
static R9 r_NUM(rt_int p_V) { RT_B_TICK(); 
{ R9 rv76 = r_MK(rt_b_image(p_V));
return rv76; }
rt_raise(RT_X_INIT);
}
static R9 r_QMK(rstr p_P, R9 p_T) { RT_B_TICK(); 
{ R9 rv77 = r_MK(rt_b_cat(p_P, r_STR(p_T, (p_T).f_LEN)));
return rv77; }
rt_raise(RT_X_INIT);
}
static R9 r_QMKN(rstr p_P, R9 p_T) { RT_B_TICK(); 
{ R9 rv78 = r_MKN(rt_b_cat(p_P, r_STR(p_T, (p_T).f_LEN)));
return rv78; }
rt_raise(RT_X_INIT);
}
static R9 r_JOINN(R9 p_A, rstr p_S, R9 p_B) { RT_B_TICK(); 
{ R9 rv79 = r_MKN(rt_b_cat(rt_b_cat(r_STR(p_A, (p_A).f_LEN), p_S), r_STR(p_B, (p_B).f_LEN)));
return rv79; }
rt_raise(RT_X_INIT);
}
static void r_FAIL2(rt_int p_LINE, rstr p_A, R9 p_X, rstr p_B, R9 p_Y, rstr p_C) { RT_B_TICK(); 
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(p_A, r_STR(p_X, (p_X).f_LEN)), p_B), r_STR(p_Y, (p_Y).f_LEN)), p_C));
}
static R9 r_CID(R9 p_T) { RT_B_TICK(); 
rstr l_S_80; memset(&l_S_80, 0, sizeof l_S_80);
l_S_80 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_80, r_STR(p_T, (p_T).f_LEN));
R9 l_R_81; memset(&l_R_81, 0, sizeof l_R_81);
if (((p_T).f_LEN == ((rt_int)0LL)))
{
{ R9 rv82 = p_T;
return rv82; }
}
if (((!rt_b_eq(rt_b_slice(l_S_80, ((rt_int)0LL), ((rt_int)0LL)), rt_str("\\", 1))) && (!rt_b_eq(rt_b_slice(l_S_80, ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1)))))
{
{ R9 rv83 = p_T;
return rv83; }
}
if (rt_b_eq(rt_b_slice(l_S_80, ((rt_int)0LL), ((rt_int)0LL)), rt_str("\\", 1)))
{
S_R9(&l_R_81, r_MK(rt_str("bs_", 3)), 0);
}
else
{
S_R9(&l_R_81, r_MK(rt_str("qm_", 3)), 0);
}
if (((p_T).f_LEN == ((rt_int)1LL)))
{
{ R9 rv84 = l_R_81;
return rv84; }
}
{ R9 rv85 = r_CATS(l_R_81, rt_b_slice(l_S_80, ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv85; }
rt_raise(RT_X_INIT);
}
static R9 r_NEW_NAME_T(R9 p_BASE) { RT_B_TICK(); 
{ R9 rv86 = r_NEW_NAME(r_STR(p_BASE, (p_BASE).f_LEN));
return rv86; }
rt_raise(RT_X_INIT);
}
static R9 r_NEW_NAME(rstr p_BASE) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_SERIAL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_SERIAL, ((rt_int)1LL));
{ R9 rv87 = r_MK(rt_b_cat(p_BASE, rt_b_image(((*(R7 *)rt_nil_check(g_W))).f_SERIAL)));
return rv87; }
rt_raise(RT_X_INIT);
}
static void r_APPEND(R9 p_T, R14 *p_B) { RT_B_TICK(); 
R15 * l_C_88; memset(&l_C_88, 0, sizeof l_C_88);
l_C_88 = ({ R15 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R9(&((*(R15 *)rt_nil_check(l_C_88))).f_T, p_T, 0);
((*(R15 *)rt_nil_check(l_C_88))).f_NEXT = NULL;
if ((((*p_B)).f_TAIL == NULL))
{
((*p_B)).f_HEAD = l_C_88;
}
else
{
((*(R15 *)rt_nil_check(((*p_B)).f_TAIL))).f_NEXT = l_C_88;
}
((*p_B)).f_TAIL = l_C_88;
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
R15 * l_C_89; memset(&l_C_89, 0, sizeof l_C_89);
l_C_89 = (p_B).f_HEAD;
for (;;) {
if ((l_C_89 == NULL)) goto L_end90;
{
{
R9 l_T_91; memset(&l_T_91, 0, sizeof l_T_91);
S_R9(&l_T_91, ((*(R15 *)rt_nil_check(l_C_89))).f_T, 0);
rt_putln(r_STR(l_T_91, (l_T_91).f_LEN));
}
l_C_89 = ((*(R15 *)rt_nil_check(l_C_89))).f_NEXT;
}
RT_B_TICK();
} L_end90: ;
}
static void r_WRITE_OUTPUT(void) { RT_B_TICK(); 
{ rt_int it93_lo = ((rt_int)0LL), it93_hi = g_O_LAST;
for (rt_int it93 = it93_lo; it93 <= it93_hi; it93++) {
{
r_PUT_BUF((((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(it93, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
}
RT_B_TICK();
if (it93 == it93_hi) break;
} } L_end92: ;
}
static void r_FAIL(rt_int p_LINE, rstr p_MSG) { RT_B_TICK(); 
rt_putln(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("line ", 5), rt_b_image(p_LINE)), rt_str(": ", 2)), p_MSG));
rt_exit(((rt_int)1LL));
}
static void r_FAILT(rt_int p_LINE, rstr p_MSG, R9 p_T) { RT_B_TICK(); 
r_FAIL(p_LINE, rt_b_cat(p_MSG, r_STR(p_T, (p_T).f_LEN)));
}
static void r_READ_SOURCE(void) { RT_B_TICK(); 
rt_int l_C_94; memset(&l_C_94, 0, sizeof l_C_94);
l_C_94 = rt_b_get_code();
for (;;) {
if ((l_C_94 < ((rt_int)0LL))) goto L_end95;
{
if ((((*(R7 *)rt_nil_check(g_W))).f_NSRC >= g_MAX_SOURCE))
{
r_FAIL(((rt_int)0LL), rt_str("the source is too long", 22));
}
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = l_C_94;
((*(R7 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
l_C_94 = rt_b_get_code();
}
RT_B_TICK();
} L_end95: ;
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = ((rt_int)0LL);
((*(R7 *)rt_nil_check(g_W))).f_STDINLEN = ((*(R7 *)rt_nil_check(g_W))).f_NSRC;
}
static rt_int r_AT_SRC(rt_int p_I) { RT_B_TICK(); 
if ((p_I >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC))
{
{ rt_int rv96 = ((rt_int)0LL);
return rv96; }
}
{ rt_int rv97 = (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(p_I, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])];
return rv97; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LETTER(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv98 = ({ rt_int iv99 = p_C; (((rt_int)65LL) <= iv99) && (iv99 <= ((rt_int)90LL)); });
return rv98; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_DIGIT(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv100 = ({ rt_int iv101 = p_C; (((rt_int)48LL) <= iv101) && (iv101 <= ((rt_int)57LL)); });
return rv100; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_IDCHAR(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv102 = ((r_IS_LETTER(p_C) || r_IS_DIGIT(p_C)) || (p_C == ((rt_int)95LL)));
return rv102; }
rt_raise(RT_X_INIT);
}
static R9 r_SOURCE_TEXT(rt_int p_FIRST, rt_int p_BEYOND) { RT_B_TICK(); 
rt_int l_AT_103; memset(&l_AT_103, 0, sizeof l_AT_103);
l_AT_103 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_L_104; memset(&l_L_104, 0, sizeof l_L_104);
l_L_104 = rt_sub(p_BEYOND, p_FIRST);
R9 l_T_105; memset(&l_T_105, 0, sizeof l_T_105);
if ((rt_add(l_AT_103, l_L_104) > g_ARENA_SIZE))
{
r_FAIL(((rt_int)0LL), rt_str("the arena is full", 17));
}
{ rt_int it107_lo = p_FIRST, it107_hi = rt_sub(p_BEYOND, ((rt_int)1LL));
for (rt_int it107 = it107_lo; it107 <= it107_hi; it107++) {
{
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, ((*(R7 *)rt_nil_check(g_W))).f_TOP, ((*(R7 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(it107, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]));
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R7 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
}
RT_B_TICK();
if (it107 == it107_hi) break;
} } L_end106: ;
S_R9(&l_T_105, ({ R9 rc108; memset(&rc108, 0, sizeof rc108);  rc108.f_AT = l_AT_103; rc108.f_LEN = l_L_104; rc108.f_H = ((rt_int)0LL); rc108; }), 0);
if ((l_L_104 > ((rt_int)0LL)))
{
(l_T_105).f_H = r_HASH_CODES(l_L_104, (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(p_FIRST, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])], (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(rt_add(p_FIRST, rt_quot(l_L_104, ((rt_int)2LL))), (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])], (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(rt_sub(p_BEYOND, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]);
}
{ R9 rv109 = l_T_105;
return rv109; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_RESERVED(R9 p_T) { RT_B_TICK(); 
rstr l_WORDS_110; memset(&l_WORDS_110, 0, sizeof l_WORDS_110);
l_WORDS_110 = rt_b_str_new(((rt_int)290LL), 0);
rt_b_assign(&l_WORDS_110, rt_str(" AND ANY ARRAY ASSERT BIN BLOCK CONST DO ELSE END EXCEPT EXIT FALSE FOR FROM FUNCTION GO HEX IF IN INLINE LOOP MAIN MOD MODULE NAMING NEEDS NIL NOT OCT OF OR ORIF PAR_BLOCK PATH PROCEDURE RECORD REP RETURN SEGMENT SELECT SIGNAL TAG TERMINATE THEN TO TRUE TYPE UNTIL VAR WHEN WHERE WITH XOR ", 290));
rt_int l_L_111; memset(&l_L_111, 0, sizeof l_L_111);
l_L_111 = (p_T).f_LEN;
{ rt_int it113_lo = ((rt_int)0LL), it113_hi = rt_sub(rt_sub(((rt_int)290LL), l_L_111), ((rt_int)2LL));
for (rt_int it113 = it113_lo; it113 <= it113_hi; it113++) {
{
if (rt_b_eq(rt_b_slice(l_WORDS_110, it113, it113), rt_str(" ", 1)))
{
if (rt_b_eq(rt_b_slice(l_WORDS_110, rt_add(rt_add(it113, l_L_111), ((rt_int)1LL)), rt_add(rt_add(it113, l_L_111), ((rt_int)1LL))), rt_str(" ", 1)))
{
if (rt_b_eq(rt_b_slice(l_WORDS_110, rt_add(it113, ((rt_int)1LL)), rt_add(it113, l_L_111)), r_STR(p_T, l_L_111)))
{
{ rt_int rv114 = 1;
return rv114; }
}
}
}
}
RT_B_TICK();
if (it113 == it113_hi) break;
} } L_end112: ;
{ rt_int rv115 = 0;
return rv115; }
rt_raise(RT_X_INIT);
}
static void r_ADD_TOKEN(rt_int p_KIND, rt_int p_LINE, rt_int p_IV, R9 p_TX) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_NTOKS >= g_MAX_TOKENS))
{
r_FAIL(p_LINE, rt_str("too many tokens", 15));
}
S_R10(&(((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], ({ R10 rc116; memset(&rc116, 0, sizeof rc116);  rc116.f_KIND = p_KIND; rc116.f_LINE = p_LINE; rc116.f_IV = p_IV; S_R9(&rc116.f_TX, p_TX, 0); rc116; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_NTOKS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL));
}
static rt_int r_SYMBOL_LENGTH(rt_int p_I) { RT_B_TICK(); 
rt_int l_C_117; memset(&l_C_117, 0, sizeof l_C_117);
l_C_117 = r_AT_SRC(p_I);
rt_int l_D_118; memset(&l_D_118, 0, sizeof l_D_118);
l_D_118 = r_AT_SRC(rt_add(p_I, ((rt_int)1LL)));
if ((((l_C_117 == ((rt_int)45LL)) && (l_D_118 == ((rt_int)45LL))) && (r_AT_SRC(rt_add(p_I, ((rt_int)2LL))) == ((rt_int)62LL))))
{
{ rt_int rv119 = ((rt_int)3LL);
return rv119; }
}
if ((((((((((((l_C_117 == ((rt_int)58LL)) && (l_D_118 == ((rt_int)61LL)))) || (((l_C_117 == ((rt_int)45LL)) && (l_D_118 == ((rt_int)62LL))))) || (((l_C_117 == ((rt_int)60LL)) && (l_D_118 == ((rt_int)61LL))))) || (((l_C_117 == ((rt_int)62LL)) && (l_D_118 == ((rt_int)61LL))))) || (((l_C_117 == ((rt_int)60LL)) && (l_D_118 == ((rt_int)62LL))))) || (((l_C_117 == ((rt_int)42LL)) && (l_D_118 == ((rt_int)42LL))))) || (((l_C_117 == ((rt_int)47LL)) && (l_D_118 == ((rt_int)47LL))))) || (((l_C_117 == ((rt_int)36LL)) && (l_D_118 == ((rt_int)36LL))))) || (((l_C_117 == ((rt_int)33LL)) && (l_D_118 == ((rt_int)33LL))))))
{
{ rt_int rv120 = ((rt_int)2LL);
return rv120; }
}
{ rt_int rv121 = ((rt_int)1LL);
return rv121; }
rt_raise(RT_X_INIT);
}
static void r_LEX(void) { RT_B_TICK(); 
rt_int l_I_122; memset(&l_I_122, 0, sizeof l_I_122);
l_I_122 = ((*(R7 *)rt_nil_check(g_W))).f_LEXED;
rt_int l_LINE_123; memset(&l_LINE_123, 0, sizeof l_LINE_123);
l_LINE_123 = rt_add(((*(R7 *)rt_nil_check(g_W))).f_LEXLINE, ((rt_int)1LL));
rt_int l_C_124; memset(&l_C_124, 0, sizeof l_C_124);
rt_int l_J_125; memset(&l_J_125, 0, sizeof l_J_125);
rt_int l_V_126; memset(&l_V_126, 0, sizeof l_V_126);
if ((((*(R7 *)rt_nil_check(g_W))).f_NTOKS > ((rt_int)0LL)))
{
((*(R7 *)rt_nil_check(g_W))).f_NTOKS = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL));
}
for (;;) {
if ((l_I_122 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC)) goto L_end127;
{
l_C_124 = (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_122, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])];
if ((l_C_124 == ((rt_int)10LL)))
{
l_LINE_123 = rt_add(l_LINE_123, ((rt_int)1LL));
l_I_122 = rt_add(l_I_122, ((rt_int)1LL));
}
else if (((((l_C_124 == ((rt_int)32LL)) || (l_C_124 == ((rt_int)9LL))) || (l_C_124 == ((rt_int)13LL))) || (l_C_124 == ((rt_int)12LL))))
{
l_I_122 = rt_add(l_I_122, ((rt_int)1LL));
}
else if ((l_C_124 == ((rt_int)37LL)))
{
l_I_122 = rt_add(l_I_122, ((rt_int)1LL));
for (;;) {
if ((((l_I_122 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_122, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)37LL))) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_122, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)10LL)))) goto L_end128;
{
l_I_122 = rt_add(l_I_122, ((rt_int)1LL));
}
RT_B_TICK();
} L_end128: ;
if ((r_AT_SRC(l_I_122) == ((rt_int)37LL)))
{
l_I_122 = rt_add(l_I_122, ((rt_int)1LL));
}
}
else if ((l_C_124 == ((rt_int)39LL)))
{
{
rt_int l_AT_129; memset(&l_AT_129, 0, sizeof l_AT_129);
l_AT_129 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
l_I_122 = rt_add(l_I_122, ((rt_int)1LL));
for (;;) {
{
if (((l_I_122 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_122, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)10LL))))
{
r_FAIL(l_LINE_123, rt_str("a string must end on its line", 29));
}
if (((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_122, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)39LL)))
{
if ((!(r_AT_SRC(rt_add(l_I_122, ((rt_int)1LL))) == ((rt_int)39LL))))
{
l_I_122 = rt_add(l_I_122, ((rt_int)1LL));
goto L_end130;
}
l_I_122 = rt_add(l_I_122, ((rt_int)1LL));
}
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, ((*(R7 *)rt_nil_check(g_W))).f_TOP, ((*(R7 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_122, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]));
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R7 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
l_I_122 = rt_add(l_I_122, ((rt_int)1LL));
}
RT_B_TICK();
} L_end130: ;
r_ADD_TOKEN(g_K_STR, l_LINE_123, ((rt_int)0LL), ({ R9 rc131; memset(&rc131, 0, sizeof rc131);  rc131.f_AT = l_AT_129; rc131.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_129); rc131.f_H = rt_neg(((rt_int)1LL)); rc131; }));
}
}
else if ((l_C_124 == ((rt_int)92LL)))
{
l_J_125 = rt_add(l_I_122, ((rt_int)1LL));
if (((((r_AT_SRC(l_J_125) == ((rt_int)39LL)) && (r_AT_SRC(rt_add(l_J_125, ((rt_int)1LL))) == ((rt_int)39LL))) && (r_AT_SRC(rt_add(l_J_125, ((rt_int)2LL))) == ((rt_int)39LL))) && (r_AT_SRC(rt_add(l_J_125, ((rt_int)3LL))) == ((rt_int)39LL))))
{
l_J_125 = rt_add(l_I_122, ((rt_int)5LL));
}
else if (((r_AT_SRC(l_J_125) == ((rt_int)39LL)) && (r_AT_SRC(rt_add(l_J_125, ((rt_int)2LL))) == ((rt_int)39LL))))
{
l_J_125 = rt_add(l_I_122, ((rt_int)4LL));
}
else if (((r_AT_SRC(l_J_125) == ((rt_int)91LL)) || (r_AT_SRC(l_J_125) == ((rt_int)93LL))))
{
l_J_125 = rt_add(l_I_122, ((rt_int)2LL));
}
else
{
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_125)))) goto L_end132;
{
l_J_125 = rt_add(l_J_125, ((rt_int)1LL));
}
RT_B_TICK();
} L_end132: ;
if ((l_J_125 == rt_add(l_I_122, ((rt_int)1LL))))
{
r_FAIL(l_LINE_123, rt_str("a stray backslash", 17));
}
}
r_ADD_TOKEN(g_K_ENUM, l_LINE_123, ((rt_int)0LL), r_SOURCE_TEXT(l_I_122, l_J_125));
l_I_122 = l_J_125;
}
else if ((l_C_124 == ((rt_int)63LL)))
{
l_J_125 = rt_add(l_I_122, ((rt_int)1LL));
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_125)))) goto L_end133;
{
l_J_125 = rt_add(l_J_125, ((rt_int)1LL));
}
RT_B_TICK();
} L_end133: ;
r_ADD_TOKEN(g_K_GEN, l_LINE_123, ((rt_int)0LL), r_SOURCE_TEXT(l_I_122, l_J_125));
l_I_122 = l_J_125;
}
else if (r_IS_LETTER(l_C_124))
{
l_J_125 = l_I_122;
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_125)))) goto L_end134;
{
l_J_125 = rt_add(l_J_125, ((rt_int)1LL));
}
RT_B_TICK();
} L_end134: ;
{
R9 l_T_135; memset(&l_T_135, 0, sizeof l_T_135);
S_R9(&l_T_135, r_SOURCE_TEXT(l_I_122, l_J_125), 0);
if (r_IS_RESERVED(l_T_135))
{
r_ADD_TOKEN(g_K_RES, l_LINE_123, ((rt_int)0LL), l_T_135);
}
else
{
r_ADD_TOKEN(g_K_ID, l_LINE_123, ((rt_int)0LL), l_T_135);
}
}
l_I_122 = l_J_125;
}
else if ((r_IS_DIGIT(l_C_124) || (((l_C_124 == ((rt_int)46LL)) && r_IS_DIGIT(r_AT_SRC(rt_add(l_I_122, ((rt_int)1LL))))))))
{
{
rt_int l_KIND_136; memset(&l_KIND_136, 0, sizeof l_KIND_136);
l_KIND_136 = g_K_NUM;
rt_int l_SCALE_137; memset(&l_SCALE_137, 0, sizeof l_SCALE_137);
l_SCALE_137 = ((rt_int)0LL);
rt_int l_NEG_138; memset(&l_NEG_138, 0, sizeof l_NEG_138);
l_NEG_138 = 0;
rt_int l_BIG_139; memset(&l_BIG_139, 0, sizeof l_BIG_139);
l_BIG_139 = 0;
l_J_125 = l_I_122;
l_V_126 = ((rt_int)0LL);
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_125)))) goto L_end140;
{
if ((l_V_126 > rt_quot((rt_sub(INT64_MAX, (rt_sub(r_AT_SRC(l_J_125), ((rt_int)48LL))))), ((rt_int)10LL))))
{
l_BIG_139 = 1;
}
else
{
l_V_126 = rt_add(rt_mul(l_V_126, ((rt_int)10LL)), (rt_sub(r_AT_SRC(l_J_125), ((rt_int)48LL))));
}
l_J_125 = rt_add(l_J_125, ((rt_int)1LL));
}
RT_B_TICK();
} L_end140: ;
if ((r_AT_SRC(l_J_125) == ((rt_int)46LL)))
{
l_KIND_136 = g_K_REAL;
l_J_125 = rt_add(l_J_125, ((rt_int)1LL));
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_125)))) goto L_end141;
{
l_J_125 = rt_add(l_J_125, ((rt_int)1LL));
}
RT_B_TICK();
} L_end141: ;
}
if (((r_AT_SRC(l_J_125) == ((rt_int)69LL)) && ((r_IS_DIGIT(r_AT_SRC(rt_add(l_J_125, ((rt_int)1LL)))) || (((((r_AT_SRC(rt_add(l_J_125, ((rt_int)1LL))) == ((rt_int)43LL)) || (r_AT_SRC(rt_add(l_J_125, ((rt_int)1LL))) == ((rt_int)45LL)))) && r_IS_DIGIT(r_AT_SRC(rt_add(l_J_125, ((rt_int)2LL))))))))))
{
l_KIND_136 = g_K_REAL;
l_J_125 = rt_add(l_J_125, ((rt_int)2LL));
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_125)))) goto L_end142;
{
l_J_125 = rt_add(l_J_125, ((rt_int)1LL));
}
RT_B_TICK();
} L_end142: ;
}
{
R9 l_T_143; memset(&l_T_143, 0, sizeof l_T_143);
S_R9(&l_T_143, r_SOURCE_TEXT(l_I_122, l_J_125), 0);
if (((r_AT_SRC(l_J_125) == ((rt_int)92LL)) && (r_AT_SRC(rt_add(l_J_125, ((rt_int)1LL))) == ((rt_int)83LL))))
{
l_KIND_136 = g_K_FIX;
l_J_125 = rt_add(l_J_125, ((rt_int)2LL));
if ((r_AT_SRC(l_J_125) == ((rt_int)45LL)))
{
l_NEG_138 = 1;
l_J_125 = rt_add(l_J_125, ((rt_int)1LL));
}
else if ((r_AT_SRC(l_J_125) == ((rt_int)43LL)))
{
l_J_125 = rt_add(l_J_125, ((rt_int)1LL));
}
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_125)))) goto L_end144;
{
if ((l_SCALE_137 <= ((rt_int)100000LL)))
{
l_SCALE_137 = rt_add(rt_mul(l_SCALE_137, ((rt_int)10LL)), (rt_sub(r_AT_SRC(l_J_125), ((rt_int)48LL))));
}
l_J_125 = rt_add(l_J_125, ((rt_int)1LL));
}
RT_B_TICK();
} L_end144: ;
if (l_NEG_138)
{
l_SCALE_137 = rt_neg(l_SCALE_137);
}
l_V_126 = l_SCALE_137;
}
if (((l_KIND_136 == g_K_NUM) && l_BIG_139))
{
r_FAIL(l_LINE_123, rt_str("an integer literal exceeds the largest INTEGER (3.2.2)", 54));
}
r_ADD_TOKEN(l_KIND_136, l_LINE_123, l_V_126, l_T_143);
}
}
l_I_122 = l_J_125;
}
else
{
l_J_125 = rt_add(l_I_122, r_SYMBOL_LENGTH(l_I_122));
r_ADD_TOKEN(g_K_SYM, l_LINE_123, ((rt_int)0LL), r_SOURCE_TEXT(l_I_122, l_J_125));
l_I_122 = l_J_125;
}
}
RT_B_TICK();
} L_end127: ;
r_ADD_TOKEN(g_K_EOF, l_LINE_123, ((rt_int)0LL), r_MK(rt_str("", 0)));
((*(R7 *)rt_nil_check(g_W))).f_LEXED = l_I_122;
((*(R7 *)rt_nil_check(g_W))).f_LEXLINE = l_LINE_123;
}
static void r_OPTIONS(void) { RT_B_TICK(); 
rt_int l_I_145; memset(&l_I_145, 0, sizeof l_I_145);
l_I_145 = ((rt_int)1LL);
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, r_MK(rt_str("lib", 3)), 0);
((*(R7 *)rt_nil_check(g_W))).f_WORD = ((rt_int)64LL);
for (;;) {
if ((l_I_145 >= rt_argc())) goto L_end146;
{
{
R9 l_A_147; memset(&l_A_147, 0, sizeof l_A_147);
S_R9(&l_A_147, r_MK(rt_arg(l_I_145)), 0);
if ((r_TEQS(l_A_147, rt_str("-L", 2)) && (rt_add(l_I_145, ((rt_int)1LL)) < rt_argc())))
{
l_I_145 = rt_add(l_I_145, ((rt_int)1LL));
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, r_MK(rt_arg(l_I_145)), 0);
}
else if (r_TEQS(l_A_147, rt_str("-suppress", 9)))
{
((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS = 1;
}
else if (r_TEQS(l_A_147, rt_str("-pdp11", 6)))
{
((*(R7 *)rt_nil_check(g_W))).f_WORD = ((rt_int)16LL);
}
else if (r_TEQS(l_A_147, rt_str("-c", 2)))
{
((*(R7 *)rt_nil_check(g_W))).f_SEPC = 1;
}
else
{
r_FAIL(((rt_int)0LL), rt_str("bluec [-L library-directory] [-c] [-suppress] [-pdp11] < program.blu > program.c", 80));
}
}
l_I_145 = rt_add(l_I_145, ((rt_int)1LL));
}
RT_B_TICK();
} L_end146: ;
}
static void r_LOAD_LIBRARY(R9 p_NAME) { RT_B_TICK(); 
R9 l_FILE_148; memset(&l_FILE_148, 0, sizeof l_FILE_148);
S_R9(&l_FILE_148, r_LIB_FILE(((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, p_NAME, rt_str(".bif", 4)), 0);
if ((!r_FILE_EXISTS_T(l_FILE_148)))
{
S_R9(&l_FILE_148, r_LIB_FILE(((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, p_NAME, rt_str(".blu", 4)), 0);
}
else
{
{
R17 * l_N_149; memset(&l_N_149, 0, sizeof l_N_149);
l_N_149 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_149))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_149))).f_IV = r_FILE_PRINT_T(l_FILE_148);
((*(R17 *)rt_nil_check(l_N_149))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXTS;
((*(R7 *)rt_nil_check(g_W))).f_EXTS = l_N_149;
}
}
if (((!r_FILE_EXISTS_T(l_FILE_148)) && (!r_TEQS(((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, rt_str("lib", 3)))))
{
S_R9(&l_FILE_148, r_LIB_FILE(r_MK(rt_str("lib", 3)), p_NAME, rt_str(".blu", 4)), 0);
}
if ((!r_FILE_EXISTS_T(l_FILE_148)))
{
r_FAILT(((rt_int)0LL), rt_str("USES names a segment that is neither in the program nor in the library: ", 72), p_NAME);
}
r_LOAD_TEXT_T(p_NAME, l_FILE_148);
}
static rt_int r_FILE_EXISTS_T(R9 p_F) { RT_B_TICK(); 
{ rt_int rv150 = rt_b_file_exists(r_STR(p_F, (p_F).f_LEN));
return rv150; }
rt_raise(RT_X_INIT);
}
static rt_int r_FILE_PRINT_T(R9 p_F) { RT_B_TICK(); 
{ rt_int rv151 = r_FILE_PRINT(r_STR(p_F, (p_F).f_LEN));
return rv151; }
rt_raise(RT_X_INIT);
}
static void r_LOAD_TEXT_T(R9 p_NAME, R9 p_F) { RT_B_TICK(); 
r_LOAD_TEXT(p_NAME, r_STR(p_F, (p_F).f_LEN));
}
static void r_WRITE_FILE_T(R9 p_F, R9 p_T) { RT_B_TICK(); 
rt_write_file(r_STR(p_F, (p_F).f_LEN), r_STR(p_T, (p_T).f_LEN));
}
static R9 r_LIB_FILE(R9 p_DIR, R9 p_NAME, rstr p_EXT) { RT_B_TICK(); 
{ R9 rv152 = r_CAT(r_CATS(p_DIR, rt_str("/", 1)), r_CATS(p_NAME, p_EXT));
return rv152; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEXT_PRINT(rstr p_T) { RT_B_TICK(); 
rt_int l_H_153; memset(&l_H_153, 0, sizeof l_H_153);
l_H_153 = ((rt_int)7LL);
{ rt_int it155_lo = ((rt_int)0LL), it155_hi = rt_sub((rt_int)(p_T).len, ((rt_int)1LL));
for (rt_int it155 = it155_lo; it155 <= it155_hi; it155++) {
{
l_H_153 = rt_rem((rt_add(rt_mul(l_H_153, ((rt_int)131LL)), r_CODE_OF(rt_b_slice(p_T, it155, it155)))), ((rt_int)1099511627776LL));
}
RT_B_TICK();
if (it155 == it155_hi) break;
} } L_end154: ;
{ rt_int rv156 = l_H_153;
return rv156; }
rt_raise(RT_X_INIT);
}
static rt_int r_FILE_PRINT(rstr p_FNAME) { RT_B_TICK(); 
{ rt_int rv157 = r_TEXT_PRINT(rt_read_file(p_FNAME));
return rv157; }
rt_raise(RT_X_INIT);
}
static R9 r_INPUT_TEXT(void) { RT_B_TICK(); 
{ R9 rv158 = r_SOURCE_TEXT(((rt_int)0LL), ((*(R7 *)rt_nil_check(g_W))).f_STDINLEN);
return rv158; }
rt_raise(RT_X_INIT);
}
static void r_LOAD_TEXT(R9 p_NAME, rstr p_FNAME) { RT_B_TICK(); 
if ((!r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_EXTS, p_NAME)))
{
{
R17 * l_N_159; memset(&l_N_159, 0, sizeof l_N_159);
l_N_159 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_159))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_159))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_LIBSEGS;
((*(R7 *)rt_nil_check(g_W))).f_LIBSEGS = l_N_159;
}
}
{
rstr l_T_160; memset(&l_T_160, 0, sizeof l_T_160);
l_T_160 = rt_b_str_new((rt_int)(rt_read_file(p_FNAME)).len, 0);
rt_b_assign(&l_T_160, rt_read_file(p_FNAME));
if ((rt_add(rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (rt_int)(l_T_160).len), ((rt_int)1LL)) >= g_MAX_SOURCE))
{
r_FAIL(((rt_int)0LL), rt_str("the source is too long", 22));
}
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = ((rt_int)10LL);
((*(R7 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
{ rt_int it162_lo = ((rt_int)0LL), it162_hi = rt_sub((rt_int)(l_T_160).len, ((rt_int)1LL));
for (rt_int it162 = it162_lo; it162 <= it162_hi; it162++) {
{
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = r_CODE_OF(rt_b_slice(l_T_160, it162, it162));
((*(R7 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
}
RT_B_TICK();
if (it162 == it162_hi) break;
} } L_end161: ;
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = ((rt_int)0LL);
}
}
static R10 r_CUR(void) { RT_B_TICK(); 
{ R10 rv163 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv163; }
rt_raise(RT_X_INIT);
}
static R10 r_AHEAD(rt_int p_K) { RT_B_TICK(); 
if ((rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, p_K) >= ((*(R7 *)rt_nil_check(g_W))).f_NTOKS))
{
{ R10 rv164 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv164; }
}
{ R10 rv165 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, p_K), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv165; }
rt_raise(RT_X_INIT);
}
static rt_int r_LINE_NOW(void) { RT_B_TICK(); 
{ rt_int rv166 = ((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_LINE;
return rv166; }
rt_raise(RT_X_INIT);
}
static rt_int r_TOK_IS(R10 p_T, rstr p_S) { RT_B_TICK(); 
if (((((p_T).f_KIND == g_K_SYM) || ((p_T).f_KIND == g_K_RES)) || ((p_T).f_KIND == g_K_ID)))
{
{ rt_int rv167 = r_TEQS((p_T).f_TX, p_S);
return rv167; }
}
{ rt_int rv168 = 0;
return rv168; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS(rstr p_S) { RT_B_TICK(); 
{ rt_int rv169 = r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], p_S);
return rv169; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TARGET_DECL(void) { RT_B_TICK(); 
if (((!r_IS(rt_str("TARGET", 6))) || (((*(R7 *)rt_nil_check(g_W))).f_POS >= rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)))))
{
{ rt_int rv170 = 0;
return rv170; }
}
{ rt_int rv171 = ((r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("PROCEDURE", 9)) || r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("FUNCTION", 8))) || r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("INLINE", 6)));
return rv171; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_KIND(rt_int p_K) { RT_B_TICK(); 
{ rt_int rv172 = (((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_KIND == p_K);
return rv172; }
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
{ rt_int rv173 = 1;
return rv173; }
}
{ rt_int rv174 = 0;
return rv174; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT(rstr p_S) { RT_B_TICK(); 
if ((!r_ACCEPT(p_S)))
{
{
R9 l_T_175; memset(&l_T_175, 0, sizeof l_T_175);
S_R9(&l_T_175, (r_CUR()).f_TX, 0);
r_FAIL(r_LINE_NOW(), rt_b_cat(rt_b_cat(p_S, rt_str(" expected, not ", 15)), r_STR(l_T_175, (l_T_175).f_LEN)));
}
}
}
static R9 r_IDENT(void) { RT_B_TICK(); 
R10 l_T_176; memset(&l_T_176, 0, sizeof l_T_176);
S_R10(&l_T_176, r_CUR(), 0);
if (((!((l_T_176).f_KIND == g_K_ID)) && (!r_IDENT_TOKEN(l_T_176))))
{
r_FAILT((l_T_176).f_LINE, rt_str("an identifier expected, not ", 28), (l_T_176).f_TX);
}
r_SKIP();
{ R9 rv177 = (l_T_176).f_TX;
return rv177; }
rt_raise(RT_X_INIT);
}
static rt_int r_IDENT_TOKEN(R10 p_T) { RT_B_TICK(); 
if ((((((p_T).f_KIND == g_K_ENUM) || ((p_T).f_KIND == g_K_GEN))) && (((p_T).f_TX).f_LEN >= ((rt_int)2LL))))
{
{
rstr l_S_178; memset(&l_S_178, 0, sizeof l_S_178);
l_S_178 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_S_178, r_STR((p_T).f_TX, ((rt_int)2LL)));
{ rt_int rv179 = (((!rt_b_eq(rt_b_slice(l_S_178, ((rt_int)1LL), ((rt_int)1LL)), rt_str("'", 1))) && (!rt_b_eq(rt_b_slice(l_S_178, ((rt_int)1LL), ((rt_int)1LL)), rt_str("[", 1)))) && (!rt_b_eq(rt_b_slice(l_S_178, ((rt_int)1LL), ((rt_int)1LL)), rt_str("]", 1))));
return rv179; }
}
}
{ rt_int rv180 = 0;
return rv180; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT_NAME(R9 p_NAME) { RT_B_TICK(); 
if ((!r_TEQ(r_IDENT(), p_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), p_NAME);
}
}
static R17 * r_NEW_NODE(rt_int p_KIND, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_N_181; memset(&l_N_181, 0, sizeof l_N_181);
l_N_181 = ({ R17 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R17(&(*(R17 *)rt_nil_check(l_N_181)), ({ R17 rc182; memset(&rc182, 0, sizeof rc182);  rc182.f_KIND = p_KIND; rc182.f_LINE = p_LINE; rc182.f_IV = ((rt_int)0LL); S_R9(&rc182.f_NAME, ({ R9 rc183; memset(&rc183, 0, sizeof rc183);  rc183.f_AT = ((rt_int)0LL); rc183.f_LEN = ((rt_int)0LL); rc183.f_H = ((rt_int)0LL); rc183; }), 0); rc182.f_A = NULL; rc182.f_B = NULL; rc182.f_C = NULL; rc182.f_D = NULL; rc182.f_E = NULL; rc182.f_NEXT = NULL; rc182.f_FL = ((rt_int)0LL); rc182; }), 0);
{ R17 * rv184 = l_N_181;
return rv184; }
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
rt_int l_K_185; memset(&l_K_185, 0, sizeof l_K_185);
l_K_185 = ((rt_int)0LL);
R17 * l_P_186; memset(&l_P_186, 0, sizeof l_P_186);
l_P_186 = p_N;
for (;;) {
if ((l_P_186 == NULL)) goto L_end187;
{
l_K_185 = rt_add(l_K_185, ((rt_int)1LL));
l_P_186 = ((*(R17 *)rt_nil_check(l_P_186))).f_NEXT;
}
RT_B_TICK();
} L_end187: ;
{ rt_int rv188 = l_K_185;
return rv188; }
rt_raise(RT_X_INIT);
}
static R17 * r_IDENT_NODE(void) { RT_B_TICK(); 
R17 * l_N_189; memset(&l_N_189, 0, sizeof l_N_189);
l_N_189 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_N_189))).f_NAME, r_IDENT(), 0);
{ R17 * rv190 = l_N_189;
return rv190; }
rt_raise(RT_X_INIT);
}
static R17 * r_IDENT_LIST(void) { RT_B_TICK(); 
R17 * l_HEAD_191; memset(&l_HEAD_191, 0, sizeof l_HEAD_191);
l_HEAD_191 = NULL;
R17 * l_TAIL_192; memset(&l_TAIL_192, 0, sizeof l_TAIL_192);
l_TAIL_192 = NULL;
for (;;) {
{
r_ADD_LIST(r_ROUTINE_NAME_NODE(), &l_HEAD_191, &l_TAIL_192);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end193;
} L_end193: ;
{ R17 * rv194 = l_HEAD_191;
return rv194; }
rt_raise(RT_X_INIT);
}
static R17 * r_ROUTINE_NAME_NODE(void) { RT_B_TICK(); 
R17 * l_N_195; memset(&l_N_195, 0, sizeof l_N_195);
l_N_195 = r_IDENT_NODE();
if ((r_IS(rt_str("$", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_SKIP();
S_R9(&((*(R17 *)rt_nil_check(l_N_195))).f_NAME, r_JOINN(((*(R17 *)rt_nil_check(l_N_195))).f_NAME, rt_str("$", 1), (r_CUR()).f_TX), 0);
r_SKIP();
}
{ R17 * rv196 = l_N_195;
return rv196; }
rt_raise(RT_X_INIT);
}
static R17 * r_PAREN_IDENTS(void) { RT_B_TICK(); 
R17 * l_L_197; memset(&l_L_197, 0, sizeof l_L_197);
l_L_197 = NULL;
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str(")", 1))))
{
l_L_197 = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
{ R17 * rv198 = l_L_197;
return rv198; }
rt_raise(RT_X_INIT);
}
static void r_SKIP_PARENS(void) { RT_B_TICK(); 
rt_int l_DEPTH_199; memset(&l_DEPTH_199, 0, sizeof l_DEPTH_199);
l_DEPTH_199 = ((rt_int)0LL);
for (;;) {
{
if (r_IS(rt_str("(", 1)))
{
l_DEPTH_199 = rt_add(l_DEPTH_199, ((rt_int)1LL));
}
else if (r_IS(rt_str(")", 1)))
{
l_DEPTH_199 = rt_sub(l_DEPTH_199, ((rt_int)1LL));
}
r_SKIP();
}
RT_B_TICK();
if ((l_DEPTH_199 == ((rt_int)0LL))) goto L_end200;
} L_end200: ;
}
static R17 * r_PARSE_COMPILATION(void) { RT_B_TICK(); 
R17 * l_HEAD_201; memset(&l_HEAD_201, 0, sizeof l_HEAD_201);
l_HEAD_201 = NULL;
R17 * l_TAIL_202; memset(&l_TAIL_202, 0, sizeof l_TAIL_202);
l_TAIL_202 = NULL;
for (;;) {
if (r_IS_KIND(g_K_EOF)) goto L_end203;
{
r_ADD_LIST(r_PARSE_SEGMENT(), &l_HEAD_201, &l_TAIL_202);
}
RT_B_TICK();
} L_end203: ;
{ R17 * rv204 = l_HEAD_201;
return rv204; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ITEMS(void) { RT_B_TICK(); 
R17 * l_N_205; memset(&l_N_205, 0, sizeof l_N_205);
l_N_205 = r_NEW_NODE(g_N_ITEMS, r_LINE_NOW());
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end206;
{
if (r_ACCEPT(rt_str("DATA", 4)))
{
r_EXPECT(rt_str(":", 1));
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str("#", 1))))
{
((*(R17 *)rt_nil_check(l_N_205))).f_A = r_IDENT_LIST();
}
if (r_ACCEPT(rt_str("#", 1)))
{
((*(R17 *)rt_nil_check(l_N_205))).f_B = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("ROUTINES", 8)))
{
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_205))).f_C = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("TYPES", 5)))
{
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_205))).f_D = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("MODULES", 7)))
{
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_205))).f_E = r_PAREN_IDENTS();
}
else
{
{
R9 l_T_207; memset(&l_T_207, 0, sizeof l_T_207);
S_R9(&l_T_207, (r_CUR()).f_TX, 0);
r_FAILT(r_LINE_NOW(), rt_str("DATA, ROUTINES, TYPES or MODULES expected, not ", 47), l_T_207);
}
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end206: ;
r_EXPECT(rt_str(")", 1));
{
R17 * l_L_208; memset(&l_L_208, 0, sizeof l_L_208);
l_L_208 = ((*(R17 *)rt_nil_check(l_N_205))).f_A;
rt_int l_PASS_209; memset(&l_PASS_209, 0, sizeof l_PASS_209);
l_PASS_209 = ((rt_int)0LL);
for (;;) {
if ((l_PASS_209 == ((rt_int)5LL))) goto L_end210;
{
if ((l_PASS_209 == ((rt_int)1LL)))
{
l_L_208 = ((*(R17 *)rt_nil_check(l_N_205))).f_B;
}
else if ((l_PASS_209 == ((rt_int)2LL)))
{
l_L_208 = ((*(R17 *)rt_nil_check(l_N_205))).f_C;
}
else if ((l_PASS_209 == ((rt_int)3LL)))
{
l_L_208 = ((*(R17 *)rt_nil_check(l_N_205))).f_D;
}
else if ((l_PASS_209 == ((rt_int)4LL)))
{
l_L_208 = ((*(R17 *)rt_nil_check(l_N_205))).f_E;
}
for (;;) {
if ((l_L_208 == NULL)) goto L_end211;
{
if ((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_L_208))).f_NEXT, ((*(R17 *)rt_nil_check(l_L_208))).f_NAME) || (((l_PASS_209 == ((rt_int)0LL)) && r_IN_IDENTS(((*(R17 *)rt_nil_check(l_N_205))).f_B, ((*(R17 *)rt_nil_check(l_L_208))).f_NAME)))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_L_208))).f_LINE, rt_str("a name appears only once in an imports-clause (4.3.1): ", 55), ((*(R17 *)rt_nil_check(l_L_208))).f_NAME);
}
l_L_208 = ((*(R17 *)rt_nil_check(l_L_208))).f_NEXT;
}
RT_B_TICK();
} L_end211: ;
l_PASS_209 = rt_add(l_PASS_209, ((rt_int)1LL));
}
RT_B_TICK();
} L_end210: ;
}
{ R17 * rv212 = l_N_205;
return rv212; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_SEGMENT(void) { RT_B_TICK(); 
R17 * l_S_213; memset(&l_S_213, 0, sizeof l_S_213);
l_S_213 = r_NEW_NODE(g_N_SEGMENT, r_LINE_NOW());
R17 * l_HEAD_214; memset(&l_HEAD_214, 0, sizeof l_HEAD_214);
l_HEAD_214 = NULL;
R17 * l_TAIL_215; memset(&l_TAIL_215, 0, sizeof l_TAIL_215);
l_TAIL_215 = NULL;
if (r_ACCEPT(rt_str("MAIN", 4)))
{
((*(R17 *)rt_nil_check(l_S_213))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("SEGMENT", 7));
S_R9(&((*(R17 *)rt_nil_check(l_S_213))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("USES", 4)))
{
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_U_217; memset(&l_U_217, 0, sizeof l_U_217);
l_U_217 = r_NEW_NODE(g_N_USE, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_U_217))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_U_217))).f_A = r_PARSE_ITEMS();
}
r_ADD_LIST(l_U_217, &l_HEAD_214, &l_TAIL_215);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end216;
} L_end216: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_S_213))).f_A = l_HEAD_214;
}
if (r_ACCEPT(rt_str("DEFINES", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R17 *)rt_nil_check(l_S_213))).f_FL = ((rt_int)1LL);
}
else
{
((*(R17 *)rt_nil_check(l_S_213))).f_C = r_PAREN_IDENTS();
}
}
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_S_213))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SEGMENT", 7));
r_EXPECT_NAME(((*(R17 *)rt_nil_check(l_S_213))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R17 * rv218 = l_S_213;
return rv218; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CLOSED_BODY(void) { RT_B_TICK(); 
R17 * l_B_219; memset(&l_B_219, 0, sizeof l_B_219);
l_B_219 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
R17 * l_HEAD_220; memset(&l_HEAD_220, 0, sizeof l_HEAD_220);
l_HEAD_220 = NULL;
R17 * l_TAIL_221; memset(&l_TAIL_221, 0, sizeof l_TAIL_221);
l_TAIL_221 = NULL;
((*(R17 *)rt_nil_check(l_B_219))).f_A = r_PARSE_DECLARATIONS();
((*(R17 *)rt_nil_check(l_B_219))).f_B = r_PARSE_STATEMENTS();
for (;;) {
{
if ((((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()))
{
r_ADD_LIST(r_PARSE_ROUTINE(), &l_HEAD_220, &l_TAIL_221);
}
else if (r_IS(rt_str("MODULE", 6)))
{
r_ADD_LIST(r_PARSE_MODULE(), &l_HEAD_220, &l_TAIL_221);
}
else
{
goto L_end222;
}
}
RT_B_TICK();
} L_end222: ;
((*(R17 *)rt_nil_check(l_B_219))).f_C = l_HEAD_220;
{ R17 * rv223 = l_B_219;
return rv223; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_BODY(void) { RT_B_TICK(); 
R17 * l_B_224; memset(&l_B_224, 0, sizeof l_B_224);
l_B_224 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_B_224))).f_A = r_PARSE_DECLARATIONS();
((*(R17 *)rt_nil_check(l_B_224))).f_B = r_PARSE_STATEMENTS();
{ R17 * rv225 = l_B_224;
return rv225; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_MODULE(void) { RT_B_TICK(); 
R17 * l_M_226; memset(&l_M_226, 0, sizeof l_M_226);
l_M_226 = r_NEW_NODE(g_N_MODULE, r_LINE_NOW());
R17 * l_HEAD_227; memset(&l_HEAD_227, 0, sizeof l_HEAD_227);
l_HEAD_227 = NULL;
R17 * l_TAIL_228; memset(&l_TAIL_228, 0, sizeof l_TAIL_228);
l_TAIL_228 = NULL;
r_EXPECT(rt_str("MODULE", 6));
S_R9(&((*(R17 *)rt_nil_check(l_M_226))).f_NAME, r_IDENT(), 0);
for (;;) {
{
if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R17 *)rt_nil_check(l_M_226))).f_A = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("EXPORTS", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R17 *)rt_nil_check(l_M_226))).f_FL = ((rt_int)1LL);
}
else
{
{
rt_int l_PAREN_230; memset(&l_PAREN_230, 0, sizeof l_PAREN_230);
l_PAREN_230 = r_ACCEPT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_X_232; memset(&l_X_232, 0, sizeof l_X_232);
l_X_232 = r_NEW_NODE(g_N_EXPORT, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_X_232))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("WITH", 4)))
{
((*(R17 *)rt_nil_check(l_X_232))).f_A = r_PAREN_IDENTS();
}
r_ADD_LIST(l_X_232, &l_HEAD_227, &l_TAIL_228);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end231;
} L_end231: ;
if (l_PAREN_230)
{
r_EXPECT(rt_str(")", 1));
}
}
((*(R17 *)rt_nil_check(l_M_226))).f_B = l_HEAD_227;
}
}
else
{
goto L_end229;
}
}
RT_B_TICK();
} L_end229: ;
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_M_226))).f_C = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("MODULE", 6));
r_EXPECT_NAME(((*(R17 *)rt_nil_check(l_M_226))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R17 * rv233 = l_M_226;
return rv233; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_DECLARATIONS(void) { RT_B_TICK(); 
R17 * l_HEAD_234; memset(&l_HEAD_234, 0, sizeof l_HEAD_234);
l_HEAD_234 = NULL;
R17 * l_TAIL_235; memset(&l_TAIL_235, 0, sizeof l_TAIL_235);
l_TAIL_235 = NULL;
for (;;) {
{
if ((r_IS(rt_str("CONST", 5)) || r_IS(rt_str("VAR", 3))))
{
r_ADD_LIST(r_PARSE_OBJECT_DECL(), &l_HEAD_234, &l_TAIL_235);
}
else if (r_IS(rt_str("TYPE", 4)))
{
r_ADD_LIST(r_PARSE_TYPE_DECL(), &l_HEAD_234, &l_TAIL_235);
}
else if ((r_IS(rt_str("REPTYPE", 7)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_ADD_LIST(r_PARSE_REPTYPE_DECL(), &l_HEAD_234, &l_TAIL_235);
}
else
{
goto L_end236;
}
}
RT_B_TICK();
} L_end236: ;
{ R17 * rv237 = l_HEAD_234;
return rv237; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_OBJECT_DECL(void) { RT_B_TICK(); 
R17 * l_D_238; memset(&l_D_238, 0, sizeof l_D_238);
l_D_238 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
if (r_ACCEPT(rt_str("CONST", 5)))
{
((*(R17 *)rt_nil_check(l_D_238))).f_KIND = g_N_CONST;
}
else
{
r_EXPECT(rt_str("VAR", 3));
}
((*(R17 *)rt_nil_check(l_D_238))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_D_238))).f_B = r_PARSE_TYPE_SPEC();
if (r_ACCEPT(rt_str(":=", 2)))
{
((*(R17 *)rt_nil_check(l_D_238))).f_C = r_PARSE_EXPR();
}
else if ((((*(R17 *)rt_nil_check(l_D_238))).f_KIND == g_N_CONST))
{
r_FAIL(((*(R17 *)rt_nil_check(l_D_238))).f_LINE, rt_str("a constant needs a value", 24));
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv239 = l_D_238;
return rv239; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_FORMALS(void) { RT_B_TICK(); 
R17 * l_HEAD_240; memset(&l_HEAD_240, 0, sizeof l_HEAD_240);
l_HEAD_240 = NULL;
R17 * l_TAIL_241; memset(&l_TAIL_241, 0, sizeof l_TAIL_241);
l_TAIL_241 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_F_243; memset(&l_F_243, 0, sizeof l_F_243);
l_F_243 = r_NEW_NODE(g_N_FORMAL, r_LINE_NOW());
if (r_ACCEPT(rt_str("TAG", 3)))
{
((*(R17 *)rt_nil_check(l_F_243))).f_IV = ((rt_int)1LL);
}
((*(R17 *)rt_nil_check(l_F_243))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
if ((!r_ACCEPT(rt_str("TYPE", 4))))
{
((*(R17 *)rt_nil_check(l_F_243))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_F_243, &l_HEAD_240, &l_TAIL_241);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end242;
} L_end242: ;
r_EXPECT(rt_str(")", 1));
{ R17 * rv244 = l_HEAD_240;
return rv244; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TYPE_DECL(void) { RT_B_TICK(); 
R17 * l_D_245; memset(&l_D_245, 0, sizeof l_D_245);
l_D_245 = r_NEW_NODE(g_N_TYPE, r_LINE_NOW());
r_EXPECT(rt_str("TYPE", 4));
S_R9(&((*(R17 *)rt_nil_check(l_D_245))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_D_245))).f_A = r_PARSE_FORMALS();
}
r_EXPECT(rt_str("=", 1));
((*(R17 *)rt_nil_check(l_D_245))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(";", 1));
{ R17 * rv246 = l_D_245;
return rv246; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_REPTYPE_DECL(void) { RT_B_TICK(); 
R17 * l_D_247; memset(&l_D_247, 0, sizeof l_D_247);
l_D_247 = r_NEW_NODE(g_N_REPTYPE, r_LINE_NOW());
r_EXPECT(rt_str("REPTYPE", 7));
S_R9(&((*(R17 *)rt_nil_check(l_D_247))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_D_247))).f_A = r_PARSE_FORMALS();
}
if (r_ACCEPT(rt_str("OF", 2)))
{
((*(R17 *)rt_nil_check(l_D_247))).f_C = r_IDENT_NODE();
}
r_EXPECT(rt_str("=", 1));
((*(R17 *)rt_nil_check(l_D_247))).f_B = r_PARSE_REP();
r_EXPECT(rt_str(";", 1));
{ R17 * rv248 = l_D_247;
return rv248; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_REP(void) { RT_B_TICK(); 
R17 * l_R_249; memset(&l_R_249, 0, sizeof l_R_249);
l_R_249 = r_NEW_NODE(g_N_REP, r_LINE_NOW());
R17 * l_HEAD_250; memset(&l_HEAD_250, 0, sizeof l_HEAD_250);
l_HEAD_250 = NULL;
R17 * l_TAIL_251; memset(&l_TAIL_251, 0, sizeof l_TAIL_251);
l_TAIL_251 = NULL;
if (r_IS_KIND(g_K_GEN))
{
((*(R17 *)rt_nil_check(l_R_249))).f_KIND = g_TS_GEN;
S_R9(&((*(R17 *)rt_nil_check(l_R_249))).f_NAME, r_GEN_NAME(), 0);
{ R17 * rv252 = l_R_249;
return rv252; }
}
S_R9(&((*(R17 *)rt_nil_check(l_R_249))).f_NAME, r_IDENT(), 0);
if ((!r_IS(rt_str("(", 1))))
{
{ R17 * rv253 = l_R_249;
return rv253; }
}
if (r_TEQS(((*(R17 *)rt_nil_check(l_R_249))).f_NAME, rt_str("RECORD_REP", 10)))
{
r_PARSE_RECORD_REP(l_R_249);
{ R17 * rv254 = l_R_249;
return rv254; }
}
r_SKIP();
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end255;
{
if (r_ACCEPT(rt_str("VALUES", 6)))
{
{
R17 * l_VH_256; memset(&l_VH_256, 0, sizeof l_VH_256);
l_VH_256 = NULL;
R17 * l_VT_257; memset(&l_VT_257, 0, sizeof l_VT_257);
l_VT_257 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_V_259; memset(&l_V_259, 0, sizeof l_V_259);
l_V_259 = r_NEW_NODE(g_N_VALREP, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_V_259))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_EXPECT(rt_str("AS", 2));
((*(R17 *)rt_nil_check(l_V_259))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_V_259, &l_VH_256, &l_VT_257);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end258;
} L_end258: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_R_249))).f_B = l_VH_256;
}
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_250, &l_TAIL_251);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end255: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_R_249))).f_A = l_HEAD_250;
{ R17 * rv260 = l_R_249;
return rv260; }
rt_raise(RT_X_INIT);
}
static void r_PARSE_RECORD_REP(R17 * p_R) { RT_B_TICK(); 
R17 * l_HEAD_261; memset(&l_HEAD_261, 0, sizeof l_HEAD_261);
l_HEAD_261 = NULL;
R17 * l_TAIL_262; memset(&l_TAIL_262, 0, sizeof l_TAIL_262);
l_TAIL_262 = NULL;
R17 * l_VH_263; memset(&l_VH_263, 0, sizeof l_VH_263);
l_VH_263 = NULL;
R17 * l_VT_264; memset(&l_VT_264, 0, sizeof l_VT_264);
l_VT_264 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end265;
{
if (r_IS(rt_str("SELECT", 6)))
{
r_ADD_LIST(r_PARSE_VARIANT_PACKING(), &l_VH_263, &l_VT_264);
}
else
{
r_ADD_LIST(r_PARSE_PACKING_SPEC(), &l_HEAD_261, &l_TAIL_262);
}
if ((r_ACCEPT(rt_str(",", 1)) || r_ACCEPT(rt_str(";", 1))))
{
}
}
RT_B_TICK();
} L_end265: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(p_R))).f_A = l_HEAD_261;
((*(R17 *)rt_nil_check(p_R))).f_C = l_VH_263;
}
static R17 * r_PARSE_PACKING_SPEC(void) { RT_B_TICK(); 
R17 * l_P_266; memset(&l_P_266, 0, sizeof l_P_266);
l_P_266 = r_NEW_NODE(g_N_PSPEC, r_LINE_NOW());
R17 * l_HEAD_267; memset(&l_HEAD_267, 0, sizeof l_HEAD_267);
l_HEAD_267 = NULL;
R17 * l_TAIL_268; memset(&l_TAIL_268, 0, sizeof l_TAIL_268);
l_TAIL_268 = NULL;
if ((r_IS_KIND(g_K_ID) && (((r_IS(rt_str("DENSE", 5)) || r_IS(rt_str("PACKED", 6))) || r_IS(rt_str("UNPACKED", 8))))))
{
S_R9(&((*(R17 *)rt_nil_check(l_P_266))).f_NAME, r_IDENT(), 0);
}
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_P_266))).f_IV = ((rt_int)1LL);
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end269;
{
r_ADD_LIST(r_PARSE_ELEMENT_SPEC(), &l_HEAD_267, &l_TAIL_268);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end269: ;
r_EXPECT(rt_str(")", 1));
}
else if (((((*(R17 *)rt_nil_check(l_P_266))).f_NAME).f_LEN == ((rt_int)0LL)))
{
((*(R17 *)rt_nil_check(l_P_266))).f_IV = ((rt_int)1LL);
r_ADD_LIST(r_PARSE_ELEMENT_SPEC(), &l_HEAD_267, &l_TAIL_268);
}
((*(R17 *)rt_nil_check(l_P_266))).f_A = l_HEAD_267;
{ R17 * rv270 = l_P_266;
return rv270; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ELEMENT_SPEC(void) { RT_B_TICK(); 
R17 * l_E_271; memset(&l_E_271, 0, sizeof l_E_271);
l_E_271 = r_NEW_NODE(g_N_ELEM, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_E_271))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
if ((r_TEQS(((*(R17 *)rt_nil_check(l_E_271))).f_NAME, rt_str("VARIANTS", 8)) || r_TEQS(((*(R17 *)rt_nil_check(l_E_271))).f_NAME, rt_str("OMIT", 4))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_E_271))).f_NAME, rt_str("VARIANTS", 8)))
{
((*(R17 *)rt_nil_check(l_E_271))).f_FL = ((rt_int)1LL);
}
else
{
((*(R17 *)rt_nil_check(l_E_271))).f_FL = ((rt_int)2LL);
}
r_SKIP();
S_R9(&((*(R17 *)rt_nil_check(l_E_271))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(")", 1));
}
else if (((r_TEQS(((*(R17 *)rt_nil_check(l_E_271))).f_NAME, rt_str("FILLER", 6)) || r_TEQS(((*(R17 *)rt_nil_check(l_E_271))).f_NAME, rt_str("ZEROS", 5))) || r_TEQS(((*(R17 *)rt_nil_check(l_E_271))).f_NAME, rt_str("BLANKS", 6))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_E_271))).f_NAME, rt_str("FILLER", 6)))
{
((*(R17 *)rt_nil_check(l_E_271))).f_FL = ((rt_int)3LL);
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_E_271))).f_NAME, rt_str("ZEROS", 5)))
{
((*(R17 *)rt_nil_check(l_E_271))).f_FL = ((rt_int)4LL);
}
else
{
((*(R17 *)rt_nil_check(l_E_271))).f_FL = ((rt_int)5LL);
}
r_SKIP();
((*(R17 *)rt_nil_check(l_E_271))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
}
{ R17 * rv272 = l_E_271;
return rv272; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_VARIANT_PACKING(void) { RT_B_TICK(); 
R17 * l_V_273; memset(&l_V_273, 0, sizeof l_V_273);
l_V_273 = r_NEW_NODE(g_N_VPACK, r_LINE_NOW());
R17 * l_HEAD_274; memset(&l_HEAD_274, 0, sizeof l_HEAD_274);
l_HEAD_274 = NULL;
R17 * l_TAIL_275; memset(&l_TAIL_275, 0, sizeof l_TAIL_275);
l_TAIL_275 = NULL;
r_EXPECT(rt_str("SELECT", 6));
S_R9(&((*(R17 *)rt_nil_check(l_V_273))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end276;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_V_273))).f_IV = ((rt_int)1LL);
if ((!r_IS(rt_str("END", 3))))
{
((*(R17 *)rt_nil_check(l_V_273))).f_B = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_273))).f_B))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
}
else
{
{
R17 * l_S_277; memset(&l_S_277, 0, sizeof l_S_277);
l_S_277 = r_NEW_NODE(g_N_VPSPEC, r_LINE_NOW());
R17 * l_LH_278; memset(&l_LH_278, 0, sizeof l_LH_278);
l_LH_278 = NULL;
R17 * l_LT_279; memset(&l_LT_279, 0, sizeof l_LT_279);
l_LT_279 = NULL;
R17 * l_PH_280; memset(&l_PH_280, 0, sizeof l_PH_280);
l_PH_280 = NULL;
R17 * l_PT_281; memset(&l_PT_281, 0, sizeof l_PT_281);
l_PT_281 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_278, &l_LT_279);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end282;
} L_end282: ;
r_EXPECT(rt_str("-->", 3));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end283;
{
r_ADD_LIST(r_PARSE_PACKING_SPEC(), &l_PH_280, &l_PT_281);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end283: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_S_277))).f_A = l_LH_278;
((*(R17 *)rt_nil_check(l_S_277))).f_B = l_PH_280;
r_ADD_LIST(l_S_277, &l_HEAD_274, &l_TAIL_275);
}
}
}
RT_B_TICK();
} L_end276: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
((*(R17 *)rt_nil_check(l_V_273))).f_A = l_HEAD_274;
{ R17 * rv284 = l_V_273;
return rv284; }
rt_raise(RT_X_INIT);
}
static R9 r_GEN_NAME(void) { RT_B_TICK(); 
R9 l_T_285; memset(&l_T_285, 0, sizeof l_T_285);
S_R9(&l_T_285, (r_CUR()).f_TX, 0);
r_SKIP();
if (((l_T_285).f_LEN == ((rt_int)1LL)))
{
{ R9 rv286 = r_NO_TEXT();
return rv286; }
}
{ R9 rv287 = r_MKN(rt_b_slice(r_STR(l_T_285, (l_T_285).f_LEN), ((rt_int)1LL), rt_sub((l_T_285).f_LEN, ((rt_int)1LL))));
return rv287; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TYPE_ARG(void) { RT_B_TICK(); 
R17 * l_N_288; memset(&l_N_288, 0, sizeof l_N_288);
if (r_IS_KIND(g_K_GEN))
{
{
R9 l_T_289; memset(&l_T_289, 0, sizeof l_T_289);
S_R9(&l_T_289, (r_CUR()).f_TX, 0);
if (((l_T_289).f_LEN == ((rt_int)1LL)))
{
r_SKIP();
{ R17 * rv290 = r_NEW_NODE(g_N_DONTCARE, r_LINE_NOW());
return rv290; }
}
}
l_N_288 = r_NEW_NODE(g_TS_GEN, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_N_288))).f_NAME, r_GEN_NAME(), 0);
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R17 *)rt_nil_check(l_N_288))).f_C = r_PARSE_REP();
}
{ R17 * rv291 = l_N_288;
return rv291; }
}
if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R17 * rv292 = r_NEW_NODE(g_N_ANY, r_LINE_NOW());
return rv292; }
}
if ((r_IS(rt_str("ARRAY", 5)) || r_IS(rt_str("RECORD", 6))))
{
{ R17 * rv293 = r_PARSE_TYPE_SPEC();
return rv293; }
}
if ((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM)))
{
{ R17 * rv294 = r_PARSE_TYPE_SPEC();
return rv294; }
}
l_N_288 = r_PARSE_EXPR();
if ((r_IS(rt_str("REP", 3)) || r_IS(rt_str("[", 1))))
{
{ R17 * rv295 = r_TYPE_SPEC_TAIL(r_EXPR_TO_TS(l_N_288));
return rv295; }
}
{ R17 * rv296 = l_N_288;
return rv296; }
rt_raise(RT_X_INIT);
}
static R17 * r_EXPR_TO_TS(R17 * p_E) { RT_B_TICK(); 
R17 * l_N_297; memset(&l_N_297, 0, sizeof l_N_297);
if ((((((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_NAME) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_ARRAY)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_RECORD)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_ENUM)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN)))
{
{ R17 * rv298 = p_E;
return rv298; }
}
l_N_297 = r_NEW_NODE(g_TS_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME))
{
S_R9(&((*(R17 *)rt_nil_check(l_N_297))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
{ R17 * rv299 = l_N_297;
return rv299; }
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
S_R9(&((*(R17 *)rt_nil_check(l_N_297))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_297))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_A;
{ R17 * rv300 = l_N_297;
return rv300; }
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD))
{
((*(R17 *)rt_nil_check(l_N_297))).f_FL = ((rt_int)3LL);
((*(R17 *)rt_nil_check(l_N_297))).f_E = p_E;
{ R17 * rv301 = l_N_297;
return rv301; }
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_SUBSTR))
{
l_N_297 = r_EXPR_TO_TS(((*(R17 *)rt_nil_check(p_E))).f_A);
if (((!(((*(R17 *)rt_nil_check(l_N_297))).f_KIND == g_TS_NAME)) || (!(((*(R17 *)rt_nil_check(l_N_297))).f_B == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type specification expected", 29));
}
((*(R17 *)rt_nil_check(l_N_297))).f_B = r_NEW_NODE(g_N_RANGE, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_297))).f_B))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_B;
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_297))).f_B))).f_B = ((*(R17 *)rt_nil_check(p_E))).f_C;
{ R17 * rv302 = l_N_297;
return rv302; }
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
{ R17 * rv303 = p_N;
return rv303; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TYPE_SPEC(void) { RT_B_TICK(); 
R17 * l_N_304; memset(&l_N_304, 0, sizeof l_N_304);
R17 * l_HEAD_305; memset(&l_HEAD_305, 0, sizeof l_HEAD_305);
l_HEAD_305 = NULL;
R17 * l_TAIL_306; memset(&l_TAIL_306, 0, sizeof l_TAIL_306);
l_TAIL_306 = NULL;
rt_int l_LINE_307; memset(&l_LINE_307, 0, sizeof l_LINE_307);
l_LINE_307 = r_LINE_NOW();
if (r_ACCEPT(rt_str("ARRAY", 5)))
{
l_N_304 = r_NEW_NODE(g_TS_ARRAY, l_LINE_307);
r_EXPECT(rt_str("[", 1));
for (;;) {
{
{
R17 * l_R_309; memset(&l_R_309, 0, sizeof l_R_309);
l_R_309 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_R_309))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_R_309))).f_B = r_PARSE_EXPR();
r_ADD_LIST(l_R_309, &l_HEAD_305, &l_TAIL_306);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end308;
} L_end308: ;
r_EXPECT(rt_str("]", 1));
((*(R17 *)rt_nil_check(l_N_304))).f_A = l_HEAD_305;
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R17 *)rt_nil_check(l_N_304))).f_D = r_PARSE_REP();
}
r_EXPECT(rt_str("OF", 2));
((*(R17 *)rt_nil_check(l_N_304))).f_C = r_PARSE_TYPE_SPEC();
{ R17 * rv310 = l_N_304;
return rv310; }
}
if (r_ACCEPT(rt_str("RECORD", 6)))
{
l_N_304 = r_NEW_NODE(g_TS_RECORD, l_LINE_307);
((*(R17 *)rt_nil_check(l_N_304))).f_A = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("RECORD", 6));
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R17 *)rt_nil_check(l_N_304))).f_D = r_PARSE_REP();
}
{ R17 * rv311 = l_N_304;
return rv311; }
}
if (r_IS_KIND(g_K_GEN))
{
{ R17 * rv312 = r_PARSE_TYPE_ARG();
return rv312; }
}
if (r_IS(rt_str("(", 1)))
{
l_N_304 = r_NEW_NODE(g_TS_ENUM, l_LINE_307);
((*(R17 *)rt_nil_check(l_N_304))).f_A = r_PARSE_LITERALS();
{ R17 * rv313 = r_TYPE_SPEC_TAIL(l_N_304);
return rv313; }
}
l_N_304 = r_NEW_NODE(g_TS_NAME, l_LINE_307);
S_R9(&((*(R17 *)rt_nil_check(l_N_304))).f_NAME, r_IDENT(), 0);
if ((r_IS(rt_str(".", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
{
R17 * l_X_314; memset(&l_X_314, 0, sizeof l_X_314);
l_X_314 = r_NEW_NODE(g_N_NAME, l_LINE_307);
S_R9(&((*(R17 *)rt_nil_check(l_X_314))).f_NAME, ((*(R17 *)rt_nil_check(l_N_304))).f_NAME, 0);
for (;;) {
if ((!((r_IS(rt_str(".", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID))))) goto L_end315;
{
r_SKIP();
{
R17 * l_F_316; memset(&l_F_316, 0, sizeof l_F_316);
l_F_316 = r_NEW_NODE(g_N_FIELD, l_LINE_307);
((*(R17 *)rt_nil_check(l_F_316))).f_A = l_X_314;
S_R9(&((*(R17 *)rt_nil_check(l_F_316))).f_NAME, r_IDENT(), 0);
l_X_314 = l_F_316;
}
}
RT_B_TICK();
} L_end315: ;
((*(R17 *)rt_nil_check(l_N_304))).f_FL = ((rt_int)3LL);
((*(R17 *)rt_nil_check(l_N_304))).f_E = l_X_314;
{ R17 * rv317 = r_TYPE_SPEC_TAIL(l_N_304);
return rv317; }
}
}
if ((r_TEQS(((*(R17 *)rt_nil_check(l_N_304))).f_NAME, rt_str("ENUM", 4)) || r_TEQS(((*(R17 *)rt_nil_check(l_N_304))).f_NAME, rt_str("UNORDERED", 9))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_N_304))).f_NAME, rt_str("UNORDERED", 9)))
{
((*(R17 *)rt_nil_check(l_N_304))).f_IV = ((rt_int)1LL);
}
((*(R17 *)rt_nil_check(l_N_304))).f_KIND = g_TS_ENUM;
((*(R17 *)rt_nil_check(l_N_304))).f_A = r_PARSE_LITERALS();
{ R17 * rv318 = r_TYPE_SPEC_TAIL(l_N_304);
return rv318; }
}
if ((r_IS(rt_str("(", 1)) && (!r_RANGE_AHEAD())))
{
r_SKIP();
for (;;) {
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_N_304))).f_NAME, rt_str("PTR", 3)))
{
r_ADD_LIST(r_PARSE_TYPE_SPEC(), &l_HEAD_305, &l_TAIL_306);
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_305, &l_TAIL_306);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end319;
} L_end319: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_N_304))).f_A = l_HEAD_305;
}
{ R17 * rv320 = r_TYPE_SPEC_TAIL(l_N_304);
return rv320; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_LITERALS(void) { RT_B_TICK(); 
R17 * l_HEAD_321; memset(&l_HEAD_321, 0, sizeof l_HEAD_321);
l_HEAD_321 = NULL;
R17 * l_TAIL_322; memset(&l_TAIL_322, 0, sizeof l_TAIL_322);
l_TAIL_322 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_L_324; memset(&l_L_324, 0, sizeof l_L_324);
l_L_324 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
if ((!((r_IS_KIND(g_K_ENUM) || r_IS_KIND(g_K_ID)))))
{
r_FAIL(r_LINE_NOW(), rt_str("an enumerated literal expected", 30));
}
S_R9(&((*(R17 *)rt_nil_check(l_L_324))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_ADD_LIST(l_L_324, &l_HEAD_321, &l_TAIL_322);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end323;
} L_end323: ;
r_EXPECT(rt_str(")", 1));
{ R17 * rv325 = l_HEAD_321;
return rv325; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_FIELDS(void) { RT_B_TICK(); 
R17 * l_HEAD_326; memset(&l_HEAD_326, 0, sizeof l_HEAD_326);
l_HEAD_326 = NULL;
R17 * l_TAIL_327; memset(&l_TAIL_327, 0, sizeof l_TAIL_327);
l_TAIL_327 = NULL;
for (;;) {
{
if (r_IS(rt_str("VAR", 3)))
{
{
R17 * l_F_329; memset(&l_F_329, 0, sizeof l_F_329);
l_F_329 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
r_SKIP();
((*(R17 *)rt_nil_check(l_F_329))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_F_329))).f_B = r_PARSE_TYPE_SPEC();
if ((!r_ACCEPT(rt_str(";", 1))))
{
r_EXPECT(rt_str(",", 1));
}
r_ADD_LIST(l_F_329, &l_HEAD_326, &l_TAIL_327);
}
}
else if (r_IS(rt_str("SELECT", 6)))
{
{
R17 * l_V_330; memset(&l_V_330, 0, sizeof l_V_330);
l_V_330 = r_NEW_NODE(g_N_VARIANT, r_LINE_NOW());
R17 * l_VH_331; memset(&l_VH_331, 0, sizeof l_VH_331);
l_VH_331 = NULL;
R17 * l_VT_332; memset(&l_VT_332, 0, sizeof l_VT_332);
l_VT_332 = NULL;
r_SKIP();
S_R9(&((*(R17 *)rt_nil_check(l_V_330))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end333;
{
{
R17 * l_S_334; memset(&l_S_334, 0, sizeof l_S_334);
l_S_334 = r_NEW_NODE(g_N_VARSPEC, r_LINE_NOW());
R17 * l_LH_335; memset(&l_LH_335, 0, sizeof l_LH_335);
l_LH_335 = NULL;
R17 * l_LT_336; memset(&l_LT_336, 0, sizeof l_LT_336);
l_LT_336 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_335, &l_LT_336);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end337;
} L_end337: ;
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_S_334))).f_A = l_LH_335;
((*(R17 *)rt_nil_check(l_S_334))).f_B = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_S_334, &l_VH_331, &l_VT_332);
}
}
RT_B_TICK();
} L_end333: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_V_330))).f_A = l_VH_331;
r_ADD_LIST(l_V_330, &l_HEAD_326, &l_TAIL_327);
}
}
else
{
goto L_end328;
}
}
RT_B_TICK();
} L_end328: ;
{ R17 * rv338 = l_HEAD_326;
return rv338; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_RANGE(void) { RT_B_TICK(); 
R17 * l_R_339; memset(&l_R_339, 0, sizeof l_R_339);
l_R_339 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_R_339))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("[", 1));
}
((*(R17 *)rt_nil_check(l_R_339))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_R_339))).f_B = r_PARSE_EXPR();
if (r_ACCEPT(rt_str(")", 1)))
{
((*(R17 *)rt_nil_check(l_R_339))).f_IV = rt_add(((*(R17 *)rt_nil_check(l_R_339))).f_IV, ((rt_int)2LL));
}
else
{
r_EXPECT(rt_str("]", 1));
}
{ R17 * rv340 = l_R_339;
return rv340; }
rt_raise(RT_X_INIT);
}
static rt_int r_RANGE_AHEAD(void) { RT_B_TICK(); 
rt_int l_DEPTH_341; memset(&l_DEPTH_341, 0, sizeof l_DEPTH_341);
l_DEPTH_341 = ((rt_int)0LL);
rt_int l_K_342; memset(&l_K_342, 0, sizeof l_K_342);
l_K_342 = ((rt_int)0LL);
for (;;) {
{
{
R10 l_T_344; memset(&l_T_344, 0, sizeof l_T_344);
S_R10(&l_T_344, r_AHEAD(l_K_342), 0);
if (((l_T_344).f_KIND == g_K_EOF))
{
{ rt_int rv345 = 0;
return rv345; }
}
if (((l_T_344).f_KIND == g_K_SYM))
{
if ((r_TEQS((l_T_344).f_TX, rt_str("(", 1)) || r_TEQS((l_T_344).f_TX, rt_str("[", 1))))
{
l_DEPTH_341 = rt_add(l_DEPTH_341, ((rt_int)1LL));
}
else if ((r_TEQS((l_T_344).f_TX, rt_str(")", 1)) || r_TEQS((l_T_344).f_TX, rt_str("]", 1))))
{
l_DEPTH_341 = rt_sub(l_DEPTH_341, ((rt_int)1LL));
if ((l_DEPTH_341 == ((rt_int)0LL)))
{
{ rt_int rv346 = 0;
return rv346; }
}
}
else if (((l_DEPTH_341 == ((rt_int)1LL)) && ((r_TEQS((l_T_344).f_TX, rt_str(":", 1)) || r_TEQS((l_T_344).f_TX, rt_str(",", 1))))))
{
{ rt_int rv347 = r_TEQS((l_T_344).f_TX, rt_str(":", 1));
return rv347; }
}
}
}
l_K_342 = rt_add(l_K_342, ((rt_int)1LL));
}
RT_B_TICK();
} L_end343: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_PARAMS(void) { RT_B_TICK(); 
R17 * l_HEAD_348; memset(&l_HEAD_348, 0, sizeof l_HEAD_348);
l_HEAD_348 = NULL;
R17 * l_TAIL_349; memset(&l_TAIL_349, 0, sizeof l_TAIL_349);
l_TAIL_349 = NULL;
rt_int l_MODE_350; memset(&l_MODE_350, 0, sizeof l_MODE_350);
l_MODE_350 = g_M_IN;
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end351;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_350 = rt_add(l_MODE_350, ((rt_int)1LL));
}
else
{
{
R17 * l_NAMES_352; memset(&l_NAMES_352, 0, sizeof l_NAMES_352);
l_NAMES_352 = r_IDENT_LIST();
R17 * l_TS_353; memset(&l_TS_353, 0, sizeof l_TS_353);
l_TS_353 = NULL;
R17 * l_P_354; memset(&l_P_354, 0, sizeof l_P_354);
l_P_354 = l_NAMES_352;
r_EXPECT(rt_str(":", 1));
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else if ((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))))
{
l_TS_353 = r_PARSE_ROUTINE_SPEC();
}
else
{
l_TS_353 = r_PARSE_TYPE_SPEC();
}
for (;;) {
if ((l_P_354 == NULL)) goto L_end355;
{
{
R17 * l_PN_356; memset(&l_PN_356, 0, sizeof l_PN_356);
l_PN_356 = r_NEW_NODE(g_N_PARAM, ((*(R17 *)rt_nil_check(l_P_354))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_PN_356))).f_NAME, ((*(R17 *)rt_nil_check(l_P_354))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_PN_356))).f_IV = l_MODE_350;
((*(R17 *)rt_nil_check(l_PN_356))).f_B = l_TS_353;
r_ADD_LIST(l_PN_356, &l_HEAD_348, &l_TAIL_349);
}
l_P_354 = ((*(R17 *)rt_nil_check(l_P_354))).f_NEXT;
}
RT_B_TICK();
} L_end355: ;
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end351: ;
r_EXPECT(rt_str(")", 1));
{ R17 * rv357 = l_HEAD_348;
return rv357; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TEMPLATE(rt_int p_FUNC) { RT_B_TICK(); 
R17 * l_R_358; memset(&l_R_358, 0, sizeof l_R_358);
l_R_358 = r_NEW_NODE(g_TS_ROUTINE, r_LINE_NOW());
R17 * l_HEAD_359; memset(&l_HEAD_359, 0, sizeof l_HEAD_359);
l_HEAD_359 = NULL;
R17 * l_TAIL_360; memset(&l_TAIL_360, 0, sizeof l_TAIL_360);
l_TAIL_360 = NULL;
rt_int l_MODE_361; memset(&l_MODE_361, 0, sizeof l_MODE_361);
l_MODE_361 = g_M_IN;
if (p_FUNC)
{
((*(R17 *)rt_nil_check(l_R_358))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end362;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_361 = rt_add(l_MODE_361, ((rt_int)1LL));
if (r_IS(rt_str(")", 1)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_358))).f_LINE, rt_str("a # must not be the last symbol of a proc-template (5.1)", 56));
}
}
else
{
{
R17 * l_P_363; memset(&l_P_363, 0, sizeof l_P_363);
l_P_363 = r_NEW_NODE(g_N_PARAM, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_P_363))).f_IV = l_MODE_361;
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else
{
((*(R17 *)rt_nil_check(l_P_363))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_P_363, &l_HEAD_359, &l_TAIL_360);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end362: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_R_358))).f_A = l_HEAD_359;
if (r_ACCEPT(rt_str("RETURNS", 7)))
{
((*(R17 *)rt_nil_check(l_R_358))).f_IV = ((rt_int)1LL);
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
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R17 *)rt_nil_check(l_R_358))).f_D = r_PAREN_IDENTS();
}
{ R17 * rv364 = l_R_358;
return rv364; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ROUTINE_SPEC(void) { RT_B_TICK(); 
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
{ R17 * rv365 = r_PARSE_TEMPLATE(1);
return rv365; }
}
r_EXPECT(rt_str("PROCEDURE", 9));
{ R17 * rv366 = r_PARSE_TEMPLATE(0);
return rv366; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_WHERE(void) { RT_B_TICK(); 
R17 * l_HEAD_367; memset(&l_HEAD_367, 0, sizeof l_HEAD_367);
l_HEAD_367 = NULL;
R17 * l_TAIL_368; memset(&l_TAIL_368, 0, sizeof l_TAIL_368);
l_TAIL_368 = NULL;
for (;;) {
{
{
R17 * l_N_370; memset(&l_N_370, 0, sizeof l_N_370);
l_N_370 = r_NEW_NODE(g_N_NEEDS, r_LINE_NOW());
R17 * l_TH_371; memset(&l_TH_371, 0, sizeof l_TH_371);
l_TH_371 = NULL;
R17 * l_TT_372; memset(&l_TT_372, 0, sizeof l_TT_372);
l_TT_372 = NULL;
S_R9(&((*(R17 *)rt_nil_check(l_N_370))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("NEEDS", 5));
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_T_374; memset(&l_T_374, 0, sizeof l_T_374);
l_T_374 = r_NEW_NODE(g_N_TEMPLATE, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_T_374))).f_NAME, ((*(R17 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_T_374))).f_B = r_PARSE_TEMPLATE(0);
r_ADD_LIST(l_T_374, &l_TH_371, &l_TT_372);
}
if (r_ACCEPT(rt_str(";", 1)))
{
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end373;
} L_end373: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_N_370))).f_A = l_TH_371;
r_ADD_LIST(l_N_370, &l_HEAD_367, &l_TAIL_368);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end369;
} L_end369: ;
{ R17 * rv375 = l_HEAD_367;
return rv375; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ROUTINE(void) { RT_B_TICK(); 
R17 * l_R_376; memset(&l_R_376, 0, sizeof l_R_376);
l_R_376 = r_NEW_NODE(g_N_ROUTINE, r_LINE_NOW());
R17 * l_H_377; memset(&l_H_377, 0, sizeof l_H_377);
l_H_377 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
if (r_IS_TARGET_DECL())
{
r_SKIP();
((*(R17 *)rt_nil_check(l_R_376))).f_FL = ((rt_int)2LL);
}
if (r_ACCEPT(rt_str("INLINE", 6)))
{
if ((((*(R17 *)rt_nil_check(l_R_376))).f_FL == ((rt_int)2LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_376))).f_LINE, rt_str("target routines cannot be INLINE (4.8.2)", 40));
}
((*(R17 *)rt_nil_check(l_R_376))).f_FL = rt_add(((*(R17 *)rt_nil_check(l_R_376))).f_FL, ((rt_int)1LL));
}
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
((*(R17 *)rt_nil_check(l_R_376))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
S_R9(&((*(R17 *)rt_nil_check(l_R_376))).f_NAME, ((*(R17 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (r_IS(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_R_376))).f_A = r_PARSE_PARAMS();
}
if ((((*(R17 *)rt_nil_check(l_R_376))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("RETURNS", 7));
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_R_376))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R17 *)rt_nil_check(l_R_376))).f_B = r_PARSE_TYPE_SPEC();
}
}
for (;;) {
{
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R17 *)rt_nil_check(l_H_377))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R17 *)rt_nil_check(l_R_376))).f_E = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("WHERE", 5)))
{
((*(R17 *)rt_nil_check(l_H_377))).f_B = r_PARSE_WHERE();
}
else
{
goto L_end378;
}
}
RT_B_TICK();
} L_end378: ;
((*(R17 *)rt_nil_check(l_R_376))).f_D = l_H_377;
r_EXPECT(rt_str(";", 1));
if ((((*(R17 *)rt_nil_check(l_R_376))).f_FL >= ((rt_int)2LL)))
{
r_EXPECT(rt_str("DYNSIZE", 7));
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_H_377))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
r_EXPECT(rt_str(";", 1));
for (;;) {
if ((r_IS(rt_str("END", 3)) && ((r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PROCEDURE", 9)) || r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("FUNCTION", 8)))))) goto L_end379;
{
r_SKIP();
}
RT_B_TICK();
} L_end379: ;
}
else
{
((*(R17 *)rt_nil_check(l_R_376))).f_C = r_PARSE_CLOSED_BODY();
}
r_EXPECT(rt_str("END", 3));
if ((((*(R17 *)rt_nil_check(l_R_376))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("FUNCTION", 8));
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
if ((!r_TEQ(((*(R17 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, ((*(R17 *)rt_nil_check(l_R_376))).f_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), ((*(R17 *)rt_nil_check(l_R_376))).f_NAME);
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv380 = l_R_376;
return rv380; }
rt_raise(RT_X_INIT);
}
static R17 * r_BIN_NODE(R9 p_OP, rt_int p_LINE, R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_N_381; memset(&l_N_381, 0, sizeof l_N_381);
l_N_381 = r_NEW_NODE(g_N_BINOP, p_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_381))).f_NAME, p_OP, 0);
((*(R17 *)rt_nil_check(l_N_381))).f_A = p_A;
((*(R17 *)rt_nil_check(l_N_381))).f_B = p_B;
{ R17 * rv382 = l_N_381;
return rv382; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_EXPR(void) { RT_B_TICK(); 
R17 * l_E_383; memset(&l_E_383, 0, sizeof l_E_383);
l_E_383 = r_PARSE_SIMPLE();
if (((((r_IS(rt_str("ROUNDED", 7)) || r_IS(rt_str("TRUNCATED", 9))) || r_IS(rt_str("NATIVE_R", 8))) || r_IS(rt_str("NATIVE_T", 8))) || r_ROUNDING_AHEAD()))
{
{
R17 * l_Q_384; memset(&l_Q_384, 0, sizeof l_Q_384);
l_Q_384 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_Q_384))).f_NAME, r_IDENT(), 0);
((*(R17 *)rt_nil_check(l_Q_384))).f_A = l_E_383;
l_E_383 = l_Q_384;
}
}
if ((r_IS(rt_str("WITH", 4)) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PREC", 4))))
{
{
R17 * l_Q_385; memset(&l_Q_385, 0, sizeof l_Q_385);
l_Q_385 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
r_SKIP();
r_SKIP();
if ((((*(R17 *)rt_nil_check(l_E_383))).f_KIND == g_N_QUAL))
{
l_Q_385 = l_E_383;
}
else
{
((*(R17 *)rt_nil_check(l_Q_385))).f_A = l_E_383;
}
((*(R17 *)rt_nil_check(l_Q_385))).f_B = r_PARSE_SIMPLE();
l_E_383 = l_Q_385;
}
}
{ R17 * rv386 = l_E_383;
return rv386; }
rt_raise(RT_X_INIT);
}
static rt_int r_ROUNDING_AHEAD(void) { RT_B_TICK(); 
R10 l_N_387; memset(&l_N_387, 0, sizeof l_N_387);
S_R10(&l_N_387, r_AHEAD(((rt_int)1LL)), 0);
if ((!r_IS_KIND(g_K_ID)))
{
{ rt_int rv388 = 0;
return rv388; }
}
if ((((((((r_IS(rt_str("CONNECT", 7)) || r_IS(rt_str("SIGNALS", 7))) || r_IS(rt_str("IMPORTS", 7))) || r_IS(rt_str("PRIORITY", 8))) || r_IS(rt_str("WHERE", 5))) || r_IS(rt_str("NEEDS", 5))) || r_IS(rt_str("AS", 2))) || r_IS(rt_str("PREC", 4))))
{
{ rt_int rv389 = 0;
return rv389; }
}
{ rt_int rv390 = (!(((((((r_TOK_IS(l_N_387, rt_str("(", 1)) || r_TOK_IS(l_N_387, rt_str(".", 1))) || r_TOK_IS(l_N_387, rt_str(":=", 2))) || r_TOK_IS(l_N_387, rt_str(":", 1))) || r_TOK_IS(l_N_387, rt_str("$", 1))) || r_TOK_IS(l_N_387, rt_str("@", 1))) || r_TOK_IS(l_N_387, rt_str("[", 1)))));
return rv390; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_SIMPLE(void) { RT_B_TICK(); 
R17 * l_LEFT_391; memset(&l_LEFT_391, 0, sizeof l_LEFT_391);
l_LEFT_391 = r_PARSE_CONJ();
for (;;) {
if ((!((((r_IS(rt_str("OR", 2)) || r_IS(rt_str("!", 1))) || r_IS(rt_str("XOR", 3))) || r_IS(rt_str("->", 2)))))) goto L_end392;
{
{
R10 l_T_393; memset(&l_T_393, 0, sizeof l_T_393);
S_R10(&l_T_393, r_CUR(), 0);
r_SKIP();
l_LEFT_391 = r_BIN_NODE((l_T_393).f_TX, (l_T_393).f_LINE, l_LEFT_391, r_PARSE_CONJ());
}
}
RT_B_TICK();
} L_end392: ;
{ R17 * rv394 = l_LEFT_391;
return rv394; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CONJ(void) { RT_B_TICK(); 
R17 * l_LEFT_395; memset(&l_LEFT_395, 0, sizeof l_LEFT_395);
l_LEFT_395 = r_PARSE_RELATION();
for (;;) {
if ((!((r_IS(rt_str("AND", 3)) || r_IS(rt_str("&", 1)))))) goto L_end396;
{
{
R10 l_T_397; memset(&l_T_397, 0, sizeof l_T_397);
S_R10(&l_T_397, r_CUR(), 0);
r_SKIP();
l_LEFT_395 = r_BIN_NODE((l_T_397).f_TX, (l_T_397).f_LINE, l_LEFT_395, r_PARSE_RELATION());
}
}
RT_B_TICK();
} L_end396: ;
{ R17 * rv398 = l_LEFT_395;
return rv398; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_RELATION(void) { RT_B_TICK(); 
R17 * l_LEFT_399; memset(&l_LEFT_399, 0, sizeof l_LEFT_399);
l_LEFT_399 = r_PARSE_SUM();
for (;;) {
{
{
R10 l_T_401; memset(&l_T_401, 0, sizeof l_T_401);
S_R10(&l_T_401, r_CUR(), 0);
if ((((((r_IS(rt_str("=", 1)) || r_IS(rt_str("<", 1))) || r_IS(rt_str(">", 1))) || r_IS(rt_str("<=", 2))) || r_IS(rt_str(">=", 2))) || r_IS(rt_str("<>", 2))))
{
r_SKIP();
l_LEFT_399 = r_BIN_NODE((l_T_401).f_TX, (l_T_401).f_LINE, l_LEFT_399, r_PARSE_SUM());
}
else if (r_IS(rt_str("IN", 2)))
{
{
R17 * l_N_402; memset(&l_N_402, 0, sizeof l_N_402);
l_N_402 = r_NEW_NODE(g_N_IN, (l_T_401).f_LINE);
r_SKIP();
((*(R17 *)rt_nil_check(l_N_402))).f_A = l_LEFT_399;
((*(R17 *)rt_nil_check(l_N_402))).f_B = r_PARSE_RANGE();
l_LEFT_399 = l_N_402;
}
}
else
{
{ R17 * rv403 = l_LEFT_399;
return rv403; }
}
}
}
RT_B_TICK();
} L_end400: ;
rt_raise(RT_X_INIT);
}
static R17 * r_TRY_SCALED(R17 * p_LEFT, rstr p_OPS) { RT_B_TICK(); 
rt_int l_SAVED_404; memset(&l_SAVED_404, 0, sizeof l_SAVED_404);
l_SAVED_404 = ((*(R7 *)rt_nil_check(g_W))).f_POS;
rt_int l_LINE_405; memset(&l_LINE_405, 0, sizeof l_LINE_405);
l_LINE_405 = r_LINE_NOW();
R17 * l_N_406; memset(&l_N_406, 0, sizeof l_N_406);
if ((!r_IS(rt_str("!", 1))))
{
{ R17 * rv407 = NULL;
return rv407; }
}
{
R10 l_OP_408; memset(&l_OP_408, 0, sizeof l_OP_408);
S_R10(&l_OP_408, r_AHEAD(((rt_int)1LL)), 0);
R9 l_T_409; memset(&l_T_409, 0, sizeof l_T_409);
S_R9(&l_T_409, (l_OP_408).f_TX, 0);
rt_int l_FOUND_410; memset(&l_FOUND_410, 0, sizeof l_FOUND_410);
l_FOUND_410 = 0;
if (((!((l_OP_408).f_KIND == g_K_SYM)) && (!((l_OP_408).f_KIND == g_K_RES))))
{
{ R17 * rv411 = NULL;
return rv411; }
}
{ rt_int it413_lo = ((rt_int)0LL), it413_hi = rt_sub((rt_int)(p_OPS).len, (l_T_409).f_LEN);
for (rt_int it413 = it413_lo; it413 <= it413_hi; it413++) {
{
if (rt_b_eq(rt_b_slice(p_OPS, it413, rt_sub(rt_add(it413, (l_T_409).f_LEN), ((rt_int)1LL))), r_STR(l_T_409, (l_T_409).f_LEN)))
{
if (((((it413 == ((rt_int)0LL)) || rt_b_eq(rt_b_slice(p_OPS, rt_sub(it413, ((rt_int)1LL)), rt_sub(it413, ((rt_int)1LL))), rt_str(" ", 1)))) && (((rt_add(it413, (l_T_409).f_LEN) == (rt_int)(p_OPS).len) || rt_b_eq(rt_b_slice(p_OPS, rt_add(it413, (l_T_409).f_LEN), rt_add(it413, (l_T_409).f_LEN)), rt_str(" ", 1))))))
{
l_FOUND_410 = 1;
}
}
}
RT_B_TICK();
if (it413 == it413_hi) break;
} } L_end412: ;
if ((!l_FOUND_410))
{
{ R17 * rv414 = NULL;
return rv414; }
}
r_SKIP();
r_SKIP();
l_N_406 = r_BIN_NODE(l_T_409, l_LINE_405, p_LEFT, NULL);
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R17 *)rt_nil_check(l_N_406))).f_FL = ((rt_int)2LL);
{ R17 * rv415 = l_N_406;
return rv415; }
}
if (((((r_IS_KIND(g_K_NUM) || r_IS_KIND(g_K_ID)) || r_IS(rt_str("(", 1))) || r_IS(rt_str("-", 1))) || r_IS(rt_str("+", 1))))
{
((*(R17 *)rt_nil_check(l_N_406))).f_D = r_PARSE_SECONDARY();
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R17 *)rt_nil_check(l_N_406))).f_FL = ((rt_int)1LL);
{ R17 * rv416 = l_N_406;
return rv416; }
}
}
((*(R7 *)rt_nil_check(g_W))).f_POS = l_SAVED_404;
{ R17 * rv417 = NULL;
return rv417; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_SUM(void) { RT_B_TICK(); 
R17 * l_LEFT_418; memset(&l_LEFT_418, 0, sizeof l_LEFT_418);
l_LEFT_418 = r_PARSE_TERM();
for (;;) {
{
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("!!", 2))))
{
{
R10 l_T_420; memset(&l_T_420, 0, sizeof l_T_420);
S_R10(&l_T_420, r_CUR(), 0);
r_SKIP();
l_LEFT_418 = r_BIN_NODE((l_T_420).f_TX, (l_T_420).f_LINE, l_LEFT_418, r_PARSE_TERM());
}
}
else
{
{
R17 * l_N_421; memset(&l_N_421, 0, sizeof l_N_421);
l_N_421 = r_TRY_SCALED(l_LEFT_418, rt_str("+ -", 3));
if ((l_N_421 == NULL))
{
{ R17 * rv422 = l_LEFT_418;
return rv422; }
}
((*(R17 *)rt_nil_check(l_N_421))).f_B = r_PARSE_TERM();
l_LEFT_418 = l_N_421;
}
}
}
RT_B_TICK();
} L_end419: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TERM(void) { RT_B_TICK(); 
R17 * l_LEFT_423; memset(&l_LEFT_423, 0, sizeof l_LEFT_423);
l_LEFT_423 = r_PARSE_FACTOR();
for (;;) {
{
if ((((r_IS(rt_str("*", 1)) || r_IS(rt_str("/", 1))) || r_IS(rt_str("//", 2))) || r_IS(rt_str("MOD", 3))))
{
{
R10 l_T_425; memset(&l_T_425, 0, sizeof l_T_425);
S_R10(&l_T_425, r_CUR(), 0);
r_SKIP();
l_LEFT_423 = r_BIN_NODE((l_T_425).f_TX, (l_T_425).f_LINE, l_LEFT_423, r_PARSE_FACTOR());
}
}
else
{
{
R17 * l_N_426; memset(&l_N_426, 0, sizeof l_N_426);
l_N_426 = r_TRY_SCALED(l_LEFT_423, rt_str("* / // MOD", 10));
if ((l_N_426 == NULL))
{
{ R17 * rv427 = l_LEFT_423;
return rv427; }
}
((*(R17 *)rt_nil_check(l_N_426))).f_B = r_PARSE_FACTOR();
l_LEFT_423 = l_N_426;
}
}
}
RT_B_TICK();
} L_end424: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_FACTOR(void) { RT_B_TICK(); 
R17 * l_LEFT_428; memset(&l_LEFT_428, 0, sizeof l_LEFT_428);
l_LEFT_428 = r_PARSE_SECONDARY();
for (;;) {
{
if (r_IS(rt_str("**", 2)))
{
{
R10 l_T_430; memset(&l_T_430, 0, sizeof l_T_430);
S_R10(&l_T_430, r_CUR(), 0);
r_SKIP();
l_LEFT_428 = r_BIN_NODE((l_T_430).f_TX, (l_T_430).f_LINE, l_LEFT_428, r_PARSE_SECONDARY());
}
}
else
{
{
R17 * l_N_431; memset(&l_N_431, 0, sizeof l_N_431);
l_N_431 = r_TRY_SCALED(l_LEFT_428, rt_str("**", 2));
if ((l_N_431 == NULL))
{
{ R17 * rv432 = l_LEFT_428;
return rv432; }
}
((*(R17 *)rt_nil_check(l_N_431))).f_B = r_PARSE_SECONDARY();
l_LEFT_428 = l_N_431;
}
}
}
RT_B_TICK();
} L_end429: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_SECONDARY(void) { RT_B_TICK(); 
R10 l_T_433; memset(&l_T_433, 0, sizeof l_T_433);
S_R10(&l_T_433, r_CUR(), 0);
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("NOT", 3))))
{
{
R17 * l_N_434; memset(&l_N_434, 0, sizeof l_N_434);
l_N_434 = r_NEW_NODE(g_N_UNOP, (l_T_433).f_LINE);
r_SKIP();
S_R9(&((*(R17 *)rt_nil_check(l_N_434))).f_NAME, (l_T_433).f_TX, 0);
((*(R17 *)rt_nil_check(l_N_434))).f_A = r_PARSE_POSTFIX();
{ R17 * rv435 = l_N_434;
return rv435; }
}
}
{ R17 * rv436 = r_PARSE_POSTFIX();
return rv436; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ARGS(R17 * p_N) { RT_B_TICK(); 
R17 * l_HEAD_437; memset(&l_HEAD_437, 0, sizeof l_HEAD_437);
l_HEAD_437 = NULL;
R17 * l_TAIL_438; memset(&l_TAIL_438, 0, sizeof l_TAIL_438);
l_TAIL_438 = NULL;
rt_int l_GROUP_439; memset(&l_GROUP_439, 0, sizeof l_GROUP_439);
l_GROUP_439 = ((rt_int)0LL);
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end440;
{
if (r_ACCEPT(rt_str("#", 1)))
{
switch (l_GROUP_439) {
case 0:
{
((*(R17 *)rt_nil_check(p_N))).f_A = l_HEAD_437;
}
break;
case 1:
{
((*(R17 *)rt_nil_check(p_N))).f_B = l_HEAD_437;
}
break;
default:
{
r_FAIL(((*(R17 *)rt_nil_check(p_N))).f_LINE, rt_str("too many # in an argument list", 30));
}
break;
}
l_GROUP_439 = rt_add(l_GROUP_439, ((rt_int)1LL));
l_HEAD_437 = NULL;
l_TAIL_438 = NULL;
}
else
{
if ((l_GROUP_439 == ((rt_int)0LL)))
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_437, &l_TAIL_438);
if ((r_IS(rt_str("RETURNS", 7)) && (((*(R17 *)rt_nil_check(l_TAIL_438))).f_KIND == g_N_APPLY)))
{
r_SKIP();
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_TAIL_438))).f_E = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
}
else
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_437, &l_TAIL_438);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
RT_B_TICK();
} L_end440: ;
r_EXPECT(rt_str(")", 1));
switch (l_GROUP_439) {
case 0:
{
((*(R17 *)rt_nil_check(p_N))).f_A = l_HEAD_437;
}
break;
case 1:
{
((*(R17 *)rt_nil_check(p_N))).f_B = l_HEAD_437;
}
break;
default:
{
((*(R17 *)rt_nil_check(p_N))).f_C = l_HEAD_437;
}
break;
}
{ R17 * rv441 = p_N;
return rv441; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_POSTFIX(void) { RT_B_TICK(); 
R17 * l_E_442; memset(&l_E_442, 0, sizeof l_E_442);
l_E_442 = r_PARSE_ATOM();
R17 * l_N_443; memset(&l_N_443, 0, sizeof l_N_443);
for (;;) {
{
{
rt_int l_LINE_445; memset(&l_LINE_445, 0, sizeof l_LINE_445);
l_LINE_445 = r_LINE_NOW();
if ((r_IS(rt_str("(", 1)) && (((*(R17 *)rt_nil_check(l_E_442))).f_KIND == g_N_ENUMLIT)))
{
((*(R17 *)rt_nil_check(l_E_442))).f_KIND = g_N_NAME;
}
if ((r_IS(rt_str("(", 1)) && (((*(R17 *)rt_nil_check(l_E_442))).f_KIND == g_N_NAME)))
{
((*(R17 *)rt_nil_check(l_E_442))).f_KIND = g_N_APPLY;
l_E_442 = r_PARSE_ARGS(l_E_442);
}
else if (r_IS(rt_str("(", 1)))
{
l_N_443 = r_NEW_NODE(g_N_INDEX, l_LINE_445);
l_N_443 = r_PARSE_ARGS(l_N_443);
((*(R17 *)rt_nil_check(l_N_443))).f_B = ((*(R17 *)rt_nil_check(l_N_443))).f_A;
((*(R17 *)rt_nil_check(l_N_443))).f_A = l_E_442;
l_E_442 = l_N_443;
}
else if (r_ACCEPT(rt_str(".", 1)))
{
l_N_443 = r_NEW_NODE(g_N_FIELD, l_LINE_445);
((*(R17 *)rt_nil_check(l_N_443))).f_A = l_E_442;
S_R9(&((*(R17 *)rt_nil_check(l_N_443))).f_NAME, r_IDENT(), 0);
l_E_442 = l_N_443;
}
else if (r_ACCEPT(rt_str("@", 1)))
{
l_N_443 = r_NEW_NODE(g_N_DEREF, l_LINE_445);
((*(R17 *)rt_nil_check(l_N_443))).f_A = l_E_442;
l_E_442 = l_N_443;
}
else if ((r_IS(rt_str("[", 1)) && (!r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("]", 1)))))
{
r_SKIP();
l_N_443 = r_NEW_NODE(g_N_SUBSTR, l_LINE_445);
((*(R17 *)rt_nil_check(l_N_443))).f_A = l_E_442;
((*(R17 *)rt_nil_check(l_N_443))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_443))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str("]", 1));
l_E_442 = l_N_443;
}
else
{
{ R17 * rv446 = l_E_442;
return rv446; }
}
}
}
RT_B_TICK();
} L_end444: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_BITS(rt_int p_BITS_PER, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_AT_447; memset(&l_AT_447, 0, sizeof l_AT_447);
l_AT_447 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R17 * l_N_448; memset(&l_N_448, 0, sizeof l_N_448);
l_N_448 = r_NEW_NODE(g_N_BITS, p_LINE);
R9 l_R_449; memset(&l_R_449, 0, sizeof l_R_449);
if ((!r_IS_KIND(g_K_STR)))
{
r_FAIL(p_LINE, rt_str("a quoted bitstring expected", 27));
}
for (;;) {
if ((!r_IS_KIND(g_K_STR))) goto L_end450;
{
{
R9 l_T_451; memset(&l_T_451, 0, sizeof l_T_451);
S_R9(&l_T_451, (r_CUR()).f_TX, 0);
rstr l_S_452; memset(&l_S_452, 0, sizeof l_S_452);
l_S_452 = rt_b_str_new((l_T_451).f_LEN, 0);
rt_b_assign(&l_S_452, r_STR(l_T_451, (l_T_451).f_LEN));
{ rt_int it454_lo = ((rt_int)0LL), it454_hi = rt_sub((l_T_451).f_LEN, ((rt_int)1LL));
for (rt_int it454 = it454_lo; it454 <= it454_hi; it454++) {
{
if ((!rt_b_eq(rt_b_slice(l_S_452, it454, it454), rt_str(" ", 1))))
{
{
rt_int l_C_455; memset(&l_C_455, 0, sizeof l_C_455);
l_C_455 = r_CODE_OF(rt_b_slice(l_S_452, it454, it454));
rt_int l_V_456; memset(&l_V_456, 0, sizeof l_V_456);
l_V_456 = rt_sub(l_C_455, ((rt_int)48LL));
rt_int l_P_457; memset(&l_P_457, 0, sizeof l_P_457);
l_P_457 = ((rt_int)1LL);
if ((l_C_455 >= ((rt_int)65LL)))
{
l_V_456 = rt_sub(l_C_455, ((rt_int)55LL));
}
{ rt_int it459_lo = ((rt_int)1LL), it459_hi = p_BITS_PER;
for (rt_int it459 = it459_lo; it459 <= it459_hi; it459++) {
{
l_P_457 = rt_mul(l_P_457, ((rt_int)2LL));
}
RT_B_TICK();
if (it459 == it459_hi) break;
} } L_end458: ;
if (((l_V_456 < ((rt_int)0LL)) || (l_V_456 >= l_P_457)))
{
r_FAIL(p_LINE, rt_str("a bad digit in a bitstring literal", 34));
}
{ rt_int it461_lo = ((rt_int)1LL), it461_hi = p_BITS_PER;
for (rt_int it461 = it461_lo; it461 <= it461_hi; it461++) {
{
l_P_457 = rt_quot(l_P_457, ((rt_int)2LL));
if ((rt_rem((rt_quot(l_V_456, l_P_457)), ((rt_int)2LL)) == ((rt_int)1LL)))
{
S_R9(&l_R_449, r_MK(rt_str("1", 1)), 0);
}
else
{
S_R9(&l_R_449, r_MK(rt_str("0", 1)), 0);
}
}
RT_B_TICK();
if (it461 == it461_hi) break;
} } L_end460: ;
}
}
}
RT_B_TICK();
if (it454 == it454_hi) break;
} } L_end453: ;
}
r_SKIP();
}
RT_B_TICK();
} L_end450: ;
S_R9(&((*(R17 *)rt_nil_check(l_N_448))).f_NAME, ({ R9 rc462; memset(&rc462, 0, sizeof rc462);  rc462.f_AT = l_AT_447; rc462.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_447); rc462.f_H = rt_neg(((rt_int)1LL)); rc462; }), 0);
{ R17 * rv463 = l_N_448;
return rv463; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ATOM(void) { RT_B_TICK(); 
R10 l_T_464; memset(&l_T_464, 0, sizeof l_T_464);
S_R10(&l_T_464, r_CUR(), 0);
R17 * l_N_465; memset(&l_N_465, 0, sizeof l_N_465);
if (((l_T_464).f_KIND == g_K_NUM))
{
l_N_465 = r_NEW_NODE(g_N_INT, (l_T_464).f_LINE);
((*(R17 *)rt_nil_check(l_N_465))).f_IV = (l_T_464).f_IV;
S_R9(&((*(R17 *)rt_nil_check(l_N_465))).f_NAME, (l_T_464).f_TX, 0);
r_SKIP();
{ R17 * rv466 = l_N_465;
return rv466; }
}
if ((((l_T_464).f_KIND == g_K_REAL) || ((l_T_464).f_KIND == g_K_FIX)))
{
l_N_465 = r_NEW_NODE(g_N_REAL, (l_T_464).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_465))).f_NAME, (l_T_464).f_TX, 0);
if (((l_T_464).f_KIND == g_K_FIX))
{
((*(R17 *)rt_nil_check(l_N_465))).f_FL = ((rt_int)1LL);
((*(R17 *)rt_nil_check(l_N_465))).f_IV = (l_T_464).f_IV;
}
r_SKIP();
{ R17 * rv467 = l_N_465;
return rv467; }
}
if (((l_T_464).f_KIND == g_K_GEN))
{
{ R17 * rv468 = r_PARSE_TYPE_ARG();
return rv468; }
}
if (((r_IS(rt_str("BIN", 3)) || r_IS(rt_str("OCT", 3))) || r_IS(rt_str("HEX", 3))))
{
r_SKIP();
if (r_TOK_IS(l_T_464, rt_str("BIN", 3)))
{
{ R17 * rv469 = r_PARSE_BITS(((rt_int)1LL), (l_T_464).f_LINE);
return rv469; }
}
else if (r_TOK_IS(l_T_464, rt_str("OCT", 3)))
{
{ R17 * rv470 = r_PARSE_BITS(((rt_int)3LL), (l_T_464).f_LINE);
return rv470; }
}
{ R17 * rv471 = r_PARSE_BITS(((rt_int)4LL), (l_T_464).f_LINE);
return rv471; }
}
if ((((l_T_464).f_KIND == g_K_STR) || ((l_T_464).f_KIND == g_K_ENUM)))
{
{ R17 * rv472 = r_PARSE_CHARSTRING(r_NO_TEXT());
return rv472; }
}
if ((((l_T_464).f_KIND == g_K_ID) && ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_STR) || (((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM) && (!r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str("(", 1)))) && (!r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":=", 2)))))))))
{
r_SKIP();
{ R17 * rv473 = r_PARSE_CHARSTRING((l_T_464).f_TX);
return rv473; }
}
if (r_ACCEPT(rt_str("TRUE", 4)))
{
l_N_465 = r_NEW_NODE(g_N_BOOL, (l_T_464).f_LINE);
((*(R17 *)rt_nil_check(l_N_465))).f_IV = ((rt_int)1LL);
{ R17 * rv474 = l_N_465;
return rv474; }
}
else if (r_ACCEPT(rt_str("FALSE", 5)))
{
{ R17 * rv475 = r_NEW_NODE(g_N_BOOL, (l_T_464).f_LINE);
return rv475; }
}
else if (r_ACCEPT(rt_str("NIL", 3)))
{
{ R17 * rv476 = r_NEW_NODE(g_N_NIL, (l_T_464).f_LINE);
return rv476; }
}
else if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R17 * rv477 = r_NEW_NODE(g_N_ANY, (l_T_464).f_LINE);
return rv477; }
}
if (r_ACCEPT(rt_str("[", 1)))
{
{
R17 * l_TS_478; memset(&l_TS_478, 0, sizeof l_TS_478);
l_TS_478 = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str("]", 1));
r_EXPECT(rt_str("$$", 2));
if (((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
l_N_465 = r_PARSE_ATOM();
((*(R17 *)rt_nil_check(l_N_465))).f_B = l_TS_478;
{ R17 * rv479 = l_N_465;
return rv479; }
}
l_N_465 = r_NEW_NODE(g_N_TYPESPEC, (l_T_464).f_LINE);
((*(R17 *)rt_nil_check(l_N_465))).f_A = l_TS_478;
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_N_465))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
{ R17 * rv480 = l_N_465;
return rv480; }
}
}
if (r_IS(rt_str("(", 1)))
{
if ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
{
R17 * l_HEAD_481; memset(&l_HEAD_481, 0, sizeof l_HEAD_481);
l_HEAD_481 = NULL;
R17 * l_TAIL_482; memset(&l_TAIL_482, 0, sizeof l_TAIL_482);
l_TAIL_482 = NULL;
r_SKIP();
for (;;) {
{
l_N_465 = r_NEW_NODE(g_N_FINIT, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_N_465))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_465))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_N_465, &l_HEAD_481, &l_TAIL_482);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end483;
} L_end483: ;
r_EXPECT(rt_str(")", 1));
l_N_465 = r_NEW_NODE(g_N_RECCONS, (l_T_464).f_LINE);
((*(R17 *)rt_nil_check(l_N_465))).f_A = l_HEAD_481;
{ R17 * rv484 = l_N_465;
return rv484; }
}
}
r_SKIP();
{
R17 * l_E_485; memset(&l_E_485, 0, sizeof l_E_485);
l_E_485 = r_PARSE_EXPR();
if (r_IS(rt_str(",", 1)))
{
{
R17 * l_HEAD_486; memset(&l_HEAD_486, 0, sizeof l_HEAD_486);
l_HEAD_486 = NULL;
R17 * l_TAIL_487; memset(&l_TAIL_487, 0, sizeof l_TAIL_487);
l_TAIL_487 = NULL;
r_ADD_LIST(l_E_485, &l_HEAD_486, &l_TAIL_487);
for (;;) {
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end488;
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_486, &l_TAIL_487);
}
RT_B_TICK();
} L_end488: ;
r_EXPECT(rt_str(")", 1));
l_N_465 = r_NEW_NODE(g_N_ARRCONS, (l_T_464).f_LINE);
((*(R17 *)rt_nil_check(l_N_465))).f_A = l_HEAD_486;
{ R17 * rv489 = l_N_465;
return rv489; }
}
}
r_EXPECT(rt_str(")", 1));
l_N_465 = r_NEW_NODE(g_N_PAREN, (l_T_464).f_LINE);
((*(R17 *)rt_nil_check(l_N_465))).f_A = l_E_485;
{ R17 * rv490 = l_N_465;
return rv490; }
}
}
if (((l_T_464).f_KIND == g_K_ID))
{
l_N_465 = r_NEW_NODE(g_N_NAME, (l_T_464).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_465))).f_NAME, ((*(R17 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (((((r_TEQS(((*(R17 *)rt_nil_check(l_N_465))).f_NAME, rt_str("NEW", 3)) || r_TEQS(((*(R17 *)rt_nil_check(l_N_465))).f_NAME, rt_str("PTR$NEW", 7))) || r_TEQS(((*(R17 *)rt_nil_check(l_N_465))).f_NAME, rt_str("SEMAPHORE$NEW", 13)))) && r_IS(rt_str("(", 1))))
{
((*(R17 *)rt_nil_check(l_N_465))).f_KIND = g_N_NEW;
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_N_465))).f_A = r_PARSE_TYPE_ARG();
r_EXPECT(rt_str(")", 1));
}
{ R17 * rv491 = l_N_465;
return rv491; }
}
r_FAILT((l_T_464).f_LINE, rt_str("an expression expected, not ", 28), (l_T_464).f_TX);
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CHARSTRING(R9 p_CHARSET) { RT_B_TICK(); 
rt_int l_LINE_492; memset(&l_LINE_492, 0, sizeof l_LINE_492);
l_LINE_492 = r_LINE_NOW();
R17 * l_HEAD_493; memset(&l_HEAD_493, 0, sizeof l_HEAD_493);
l_HEAD_493 = NULL;
R17 * l_TAIL_494; memset(&l_TAIL_494, 0, sizeof l_TAIL_494);
l_TAIL_494 = NULL;
rt_int l_STRINGS_495; memset(&l_STRINGS_495, 0, sizeof l_STRINGS_495);
l_STRINGS_495 = ((rt_int)0LL);
R17 * l_N_496; memset(&l_N_496, 0, sizeof l_N_496);
for (;;) {
if ((!((r_IS_KIND(g_K_STR) || r_IS_KIND(g_K_ENUM))))) goto L_end497;
{
l_N_496 = r_NEW_NODE(g_N_PART, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_N_496))).f_IV = (r_CUR()).f_KIND;
S_R9(&((*(R17 *)rt_nil_check(l_N_496))).f_NAME, (r_CUR()).f_TX, 0);
if ((((*(R17 *)rt_nil_check(l_N_496))).f_IV == g_K_STR))
{
l_STRINGS_495 = rt_add(l_STRINGS_495, ((rt_int)1LL));
}
r_SKIP();
r_ADD_LIST(l_N_496, &l_HEAD_493, &l_TAIL_494);
}
RT_B_TICK();
} L_end497: ;
if ((((l_STRINGS_495 == ((rt_int)0LL)) && ((p_CHARSET).f_LEN == ((rt_int)0LL))) && (((*(R17 *)rt_nil_check(l_HEAD_493))).f_NEXT == NULL)))
{
((*(R17 *)rt_nil_check(l_HEAD_493))).f_KIND = g_N_ENUMLIT;
{ R17 * rv498 = l_HEAD_493;
return rv498; }
}
l_N_496 = r_NEW_NODE(g_N_STR, l_LINE_492);
((*(R17 *)rt_nil_check(l_N_496))).f_A = l_HEAD_493;
S_R9(&((*(R17 *)rt_nil_check(l_N_496))).f_NAME, p_CHARSET, 0);
{ R17 * rv499 = l_N_496;
return rv499; }
rt_raise(RT_X_INIT);
}
static rt_int r_AT_BODY_END(void) { RT_B_TICK(); 
{ rt_int rv500 = ((((((((((r_IS_KIND(g_K_EOF) || r_IS(rt_str("END", 3))) || r_IS(rt_str("ELSE", 4))) || r_IS(rt_str("ORIF", 4))) || r_IS(rt_str("EXCEPT", 6))) || r_IS(rt_str("PROCEDURE", 9))) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()) || r_IS(rt_str("MODULE", 6))) || r_IS(rt_str("PATH", 4)));
return rv500; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_STATEMENTS(void) { RT_B_TICK(); 
R17 * l_HEAD_501; memset(&l_HEAD_501, 0, sizeof l_HEAD_501);
l_HEAD_501 = NULL;
R17 * l_TAIL_502; memset(&l_TAIL_502, 0, sizeof l_TAIL_502);
l_TAIL_502 = NULL;
for (;;) {
if (r_AT_BODY_END()) goto L_end503;
{
r_ADD_LIST(r_PARSE_STATEMENT(), &l_HEAD_501, &l_TAIL_502);
}
RT_B_TICK();
} L_end503: ;
{ R17 * rv504 = l_HEAD_501;
return rv504; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_HANDLERS(void) { RT_B_TICK(); 
R17 * l_HEAD_505; memset(&l_HEAD_505, 0, sizeof l_HEAD_505);
l_HEAD_505 = NULL;
R17 * l_TAIL_506; memset(&l_TAIL_506, 0, sizeof l_TAIL_506);
l_TAIL_506 = NULL;
r_EXPECT(rt_str("EXCEPT", 6));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end507;
{
{
R17 * l_H_508; memset(&l_H_508, 0, sizeof l_H_508);
l_H_508 = r_NEW_NODE(g_N_HANDLER, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_H_508))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_H_508))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_H_508, &l_HEAD_505, &l_TAIL_506);
}
}
RT_B_TICK();
} L_end507: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("EXCEPT", 6));
r_EXPECT(rt_str(";", 1));
{ R17 * rv509 = l_HEAD_505;
return rv509; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_STATEMENT(void) { RT_B_TICK(); 
R17 * l_S_510; memset(&l_S_510, 0, sizeof l_S_510);
if ((r_IS_KIND(g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str(":", 1))))
{
l_S_510 = r_NEW_NODE(g_N_LABELED, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_S_510))).f_NAME, r_IDENT(), 0);
r_SKIP();
((*(R17 *)rt_nil_check(l_S_510))).f_A = r_PARSE_STATEMENT();
{ R17 * rv511 = l_S_510;
return rv511; }
}
l_S_510 = r_PARSE_UNLABELED();
if (r_IS(rt_str("EXCEPT", 6)))
{
{
R17 * l_X_512; memset(&l_X_512, 0, sizeof l_X_512);
l_X_512 = r_NEW_NODE(g_N_EXCEPT, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_X_512))).f_A = l_S_510;
((*(R17 *)rt_nil_check(l_X_512))).f_B = r_PARSE_HANDLERS();
{ R17 * rv513 = l_X_512;
return rv513; }
}
}
{ R17 * rv514 = l_S_510;
return rv514; }
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
rt_int l_LINE_515; memset(&l_LINE_515, 0, sizeof l_LINE_515);
l_LINE_515 = r_LINE_NOW();
R17 * l_S_516; memset(&l_S_516, 0, sizeof l_S_516);
R17 * l_T_517; memset(&l_T_517, 0, sizeof l_T_517);
if (r_ACCEPT(rt_str(";", 1)))
{
{ R17 * rv518 = r_NEW_NODE(g_N_NULL, l_LINE_515);
return rv518; }
}
else if (r_IS(rt_str("IF", 2)))
{
{ R17 * rv519 = r_PARSE_IF();
return rv519; }
}
else if (r_IS(rt_str("SELECT", 6)))
{
{ R17 * rv520 = r_PARSE_CASE();
return rv520; }
}
else if (r_IS(rt_str("LOOP", 4)))
{
{ R17 * rv521 = r_PARSE_LOOP();
return rv521; }
}
else if (r_IS(rt_str("PAR_BLOCK", 9)))
{
{ R17 * rv522 = r_PARSE_PAR();
return rv522; }
}
else if (r_ACCEPT(rt_str("BLOCK", 5)))
{
l_S_516 = r_NEW_NODE(g_N_BLOCK, l_LINE_515);
((*(R17 *)rt_nil_check(l_S_516))).f_A = r_PARSE_BODY();
r_EXPECT_END(rt_str("BLOCK", 5));
{ R17 * rv523 = l_S_516;
return rv523; }
}
else if (r_ACCEPT(rt_str("WITH", 4)))
{
l_S_516 = r_NEW_NODE(g_N_WITH, l_LINE_515);
S_R9(&((*(R17 *)rt_nil_check(l_S_516))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("NAMING", 6)))
{
((*(R17 *)rt_nil_check(l_S_516))).f_IV = ((rt_int)1LL);
((*(R17 *)rt_nil_check(l_S_516))).f_A = r_PARSE_POSTFIX();
}
else
{
r_EXPECT(rt_str(":=", 2));
((*(R17 *)rt_nil_check(l_S_516))).f_A = r_PARSE_EXPR();
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
((*(R17 *)rt_nil_check(l_S_516))).f_B = r_PARSE_UNLABELED();
{ R17 * rv524 = l_S_516;
return rv524; }
}
else if (r_ACCEPT(rt_str("EXIT", 4)))
{
r_EXPECT(rt_str(";", 1));
{ R17 * rv525 = r_NEW_NODE(g_N_EXIT, l_LINE_515);
return rv525; }
}
else if (r_ACCEPT(rt_str("GO", 2)))
{
r_EXPECT(rt_str("TO", 2));
l_S_516 = r_NEW_NODE(g_N_GOTO, l_LINE_515);
S_R9(&((*(R17 *)rt_nil_check(l_S_516))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(";", 1));
{ R17 * rv526 = l_S_516;
return rv526; }
}
else if (r_ACCEPT(rt_str("RETURN", 6)))
{
l_S_516 = r_NEW_NODE(g_N_RETURN, l_LINE_515);
if ((!r_IS(rt_str(";", 1))))
{
((*(R17 *)rt_nil_check(l_S_516))).f_A = r_PARSE_EXPR();
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv527 = l_S_516;
return rv527; }
}
else if (r_ACCEPT(rt_str("SIGNAL", 6)))
{
l_S_516 = r_NEW_NODE(g_N_SIGNAL, l_LINE_515);
if (r_IS_KIND(g_K_ID))
{
S_R9(&((*(R17 *)rt_nil_check(l_S_516))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv528 = l_S_516;
return rv528; }
}
else if (r_ACCEPT(rt_str("ASSERT", 6)))
{
l_S_516 = r_NEW_NODE(g_N_ASSERT, l_LINE_515);
((*(R17 *)rt_nil_check(l_S_516))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R17 * rv529 = l_S_516;
return rv529; }
}
else if (r_ACCEPT(rt_str("TERMINATE", 9)))
{
l_S_516 = r_NEW_NODE(g_N_TERMINATE, l_LINE_515);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_S_516))).f_A = r_PARSE_POSTFIX();
r_EXPECT(rt_str(")", 1));
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv530 = l_S_516;
return rv530; }
}
l_T_517 = r_PARSE_POSTFIX();
if (r_IS(rt_str("[", 1)))
{
r_FAIL(l_LINE_515, rt_str("a substring of a substring", 26));
}
if (r_ACCEPT(rt_str(":=", 2)))
{
l_S_516 = r_NEW_NODE(g_N_ASSIGN, l_LINE_515);
((*(R17 *)rt_nil_check(l_S_516))).f_A = l_T_517;
((*(R17 *)rt_nil_check(l_S_516))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R17 * rv531 = l_S_516;
return rv531; }
}
r_EXPECT(rt_str(";", 1));
if ((((((*(R17 *)rt_nil_check(l_T_517))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_T_517))).f_KIND == g_N_APPLY)) || (((*(R17 *)rt_nil_check(l_T_517))).f_KIND == g_N_ENUMLIT)))
{
((*(R17 *)rt_nil_check(l_T_517))).f_KIND = g_N_CALL;
}
else
{
r_FAIL(l_LINE_515, rt_str("a statement expected", 20));
}
{ R17 * rv532 = l_T_517;
return rv532; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_IF(void) { RT_B_TICK(); 
R17 * l_S_533; memset(&l_S_533, 0, sizeof l_S_533);
l_S_533 = r_NEW_NODE(g_N_IF, r_LINE_NOW());
R17 * l_HEAD_534; memset(&l_HEAD_534, 0, sizeof l_HEAD_534);
l_HEAD_534 = NULL;
R17 * l_TAIL_535; memset(&l_TAIL_535, 0, sizeof l_TAIL_535);
l_TAIL_535 = NULL;
r_EXPECT(rt_str("IF", 2));
for (;;) {
{
{
R17 * l_ARM_537; memset(&l_ARM_537, 0, sizeof l_ARM_537);
l_ARM_537 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_ARM_537))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("THEN", 4));
((*(R17 *)rt_nil_check(l_ARM_537))).f_B = r_PARSE_BODY();
r_ADD_LIST(l_ARM_537, &l_HEAD_534, &l_TAIL_535);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str("ORIF", 4)))) goto L_end536;
} L_end536: ;
((*(R17 *)rt_nil_check(l_S_533))).f_A = l_HEAD_534;
if (r_ACCEPT(rt_str("ELSE", 4)))
{
((*(R17 *)rt_nil_check(l_S_533))).f_B = r_PARSE_BODY();
}
r_EXPECT_END(rt_str("IF", 2));
{ R17 * rv538 = l_S_533;
return rv538; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CASE_LABEL(void) { RT_B_TICK(); 
if ((r_IS(rt_str("[", 1)) || ((r_IS(rt_str("(", 1)) && r_RANGE_AHEAD()))))
{
{ R17 * rv539 = r_PARSE_RANGE();
return rv539; }
}
{ R17 * rv540 = r_PARSE_EXPR();
return rv540; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CASE(void) { RT_B_TICK(); 
R17 * l_S_541; memset(&l_S_541, 0, sizeof l_S_541);
l_S_541 = r_NEW_NODE(g_N_CASE, r_LINE_NOW());
R17 * l_HEAD_542; memset(&l_HEAD_542, 0, sizeof l_HEAD_542);
l_HEAD_542 = NULL;
R17 * l_TAIL_543; memset(&l_TAIL_543, 0, sizeof l_TAIL_543);
l_TAIL_543 = NULL;
r_EXPECT(rt_str("SELECT", 6));
((*(R17 *)rt_nil_check(l_S_541))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end544;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_S_541))).f_C = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R17 *)rt_nil_check(l_S_541))).f_D = r_PARSE_HANDLERS();
}
}
else
{
{
R17 * l_ARM_545; memset(&l_ARM_545, 0, sizeof l_ARM_545);
l_ARM_545 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
R17 * l_LH_546; memset(&l_LH_546, 0, sizeof l_LH_546);
l_LH_546 = NULL;
R17 * l_LT_547; memset(&l_LT_547, 0, sizeof l_LT_547);
l_LT_547 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_546, &l_LT_547);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end548;
} L_end548: ;
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_ARM_545))).f_A = l_LH_546;
((*(R17 *)rt_nil_check(l_ARM_545))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R17 *)rt_nil_check(l_ARM_545))).f_C = r_PARSE_HANDLERS();
}
r_ADD_LIST(l_ARM_545, &l_HEAD_542, &l_TAIL_543);
}
}
}
RT_B_TICK();
} L_end544: ;
((*(R17 *)rt_nil_check(l_S_541))).f_B = l_HEAD_542;
r_EXPECT_END(rt_str("SELECT", 6));
{ R17 * rv549 = l_S_541;
return rv549; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_LOOP(void) { RT_B_TICK(); 
R17 * l_S_550; memset(&l_S_550, 0, sizeof l_S_550);
l_S_550 = r_NEW_NODE(g_N_LOOP, r_LINE_NOW());
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("FOR", 3)))
{
((*(R17 *)rt_nil_check(l_S_550))).f_KIND = g_N_FOR;
if (r_IS_KIND(g_K_ID))
{
S_R9(&((*(R17 *)rt_nil_check(l_S_550))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("IN", 2));
}
((*(R17 *)rt_nil_check(l_S_550))).f_A = r_PARSE_RANGE();
r_EXPECT(rt_str("DO", 2));
((*(R17 *)rt_nil_check(l_S_550))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_IS_KIND(g_K_ID))
{
if ((!r_TEQ(r_IDENT(), ((*(R17 *)rt_nil_check(l_S_550))).f_NAME)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier", 38));
}
}
else if (((((*(R17 *)rt_nil_check(l_S_550))).f_NAME).f_LEN > ((rt_int)0LL)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier (4.5.6.3)", 48));
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R17 * rv551 = l_S_550;
return rv551; }
}
if (r_ACCEPT(rt_str("UNTIL", 5)))
{
((*(R17 *)rt_nil_check(l_S_550))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("DO", 2));
}
((*(R17 *)rt_nil_check(l_S_550))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("WHEN", 4)))
{
if ((!(((*(R17 *)rt_nil_check(l_S_550))).f_A == NULL)))
{
r_FAIL(r_LINE_NOW(), rt_str("only one of UNTIL and WHEN (4.5.6.1)", 36));
}
((*(R17 *)rt_nil_check(l_S_550))).f_C = r_PARSE_EXPR();
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R17 * rv552 = l_S_550;
return rv552; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_PAR(void) { RT_B_TICK(); 
R17 * l_S_553; memset(&l_S_553, 0, sizeof l_S_553);
l_S_553 = r_NEW_NODE(g_N_PAR, r_LINE_NOW());
R17 * l_HEAD_554; memset(&l_HEAD_554, 0, sizeof l_HEAD_554);
l_HEAD_554 = NULL;
R17 * l_TAIL_555; memset(&l_TAIL_555, 0, sizeof l_TAIL_555);
l_TAIL_555 = NULL;
r_EXPECT(rt_str("PAR_BLOCK", 9));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end556;
{
{
R17 * l_P_557; memset(&l_P_557, 0, sizeof l_P_557);
l_P_557 = r_NEW_NODE(g_N_PATH, r_LINE_NOW());
R17 * l_H_558; memset(&l_H_558, 0, sizeof l_H_558);
l_H_558 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
r_EXPECT(rt_str("PATH", 4));
S_R9(&((*(R17 *)rt_nil_check(l_P_557))).f_NAME, r_IDENT(), 0);
((*(R17 *)rt_nil_check(l_P_557))).f_E = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_P_557))).f_LINE);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_557))).f_E))).f_A = l_H_558;
if (r_ACCEPT(rt_str("FOR", 3)))
{
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_557))).f_E))).f_NAME, r_IDENT(), 0);
((*(R17 *)rt_nil_check(l_P_557))).f_FL = ((rt_int)1LL);
r_EXPECT(rt_str("IN", 2));
((*(R17 *)rt_nil_check(l_P_557))).f_A = r_PARSE_RANGE();
}
for (;;) {
{
if (r_ACCEPT(rt_str("PRIORITY", 8)))
{
((*(R17 *)rt_nil_check(l_P_557))).f_C = r_PARSE_EXPR();
}
else if (r_ACCEPT(rt_str("CONNECT", 7)))
{
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_P_557))).f_D = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R17 *)rt_nil_check(l_H_558))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R17 *)rt_nil_check(l_H_558))).f_B = r_PARSE_ITEMS();
}
else
{
goto L_end559;
}
}
RT_B_TICK();
} L_end559: ;
if ((!(((*(R17 *)rt_nil_check(l_P_557))).f_D == NULL)))
{
r_CONNECT_KNOWN(((*(R17 *)rt_nil_check(l_P_557))).f_D, l_H_558);
}
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_P_557))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PATH", 4));
r_EXPECT_NAME(((*(R17 *)rt_nil_check(l_P_557))).f_NAME);
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_P_557, &l_HEAD_554, &l_TAIL_555);
}
}
RT_B_TICK();
} L_end556: ;
((*(R17 *)rt_nil_check(l_S_553))).f_A = l_HEAD_554;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PAR_BLOCK", 9));
r_EXPECT(rt_str(";", 1));
{ R17 * rv560 = l_S_553;
return rv560; }
rt_raise(RT_X_INIT);
}
static void r_CONNECT_KNOWN(R17 * p_E, R17 * p_H) { RT_B_TICK(); 
R17 * l_R_561; memset(&l_R_561, 0, sizeof l_R_561);
l_R_561 = p_E;
for (;;) {
if (((((*(R17 *)rt_nil_check(l_R_561))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_561))).f_KIND == g_N_APPLY))) goto L_end562;
{
if (((!(((*(R17 *)rt_nil_check(l_R_561))).f_KIND == g_N_INDEX)) && (!(((*(R17 *)rt_nil_check(l_R_561))).f_KIND == g_N_FIELD))))
{
return;
}
l_R_561 = ((*(R17 *)rt_nil_check(l_R_561))).f_A;
}
RT_B_TICK();
} L_end562: ;
if ((((*(R17 *)rt_nil_check(p_H))).f_B == NULL))
{
((*(R17 *)rt_nil_check(p_H))).f_B = r_NEW_NODE(g_N_ITEMS, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
{
R17 * l_P_563; memset(&l_P_563, 0, sizeof l_P_563);
l_P_563 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_H))).f_B))).f_A;
for (;;) {
if ((l_P_563 == NULL)) goto L_end564;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_563))).f_NAME, ((*(R17 *)rt_nil_check(l_R_561))).f_NAME))
{
return;
}
l_P_563 = ((*(R17 *)rt_nil_check(l_P_563))).f_NEXT;
}
RT_B_TICK();
} L_end564: ;
l_P_563 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_H))).f_B))).f_B;
for (;;) {
if ((l_P_563 == NULL)) goto L_end565;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_563))).f_NAME, ((*(R17 *)rt_nil_check(l_R_561))).f_NAME))
{
return;
}
l_P_563 = ((*(R17 *)rt_nil_check(l_P_563))).f_NEXT;
}
RT_B_TICK();
} L_end565: ;
}
{
R17 * l_N_566; memset(&l_N_566, 0, sizeof l_N_566);
l_N_566 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_566))).f_NAME, ((*(R17 *)rt_nil_check(l_R_561))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_566))).f_NEXT = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_H))).f_B))).f_B;
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_H))).f_B))).f_B = l_N_566;
}
}
static R9 r_NO_TEXT(void) { RT_B_TICK(); 
{ R9 rv567 = ({ R9 rc568; memset(&rc568, 0, sizeof rc568);  rc568.f_AT = ((rt_int)0LL); rc568.f_LEN = ((rt_int)0LL); rc568.f_H = ((rt_int)0LL); rc568; });
return rv567; }
rt_raise(RT_X_INIT);
}
static R25 r_NO_MVAL(void) { RT_B_TICK(); 
{ R25 rv569 = ({ R25 rc570; memset(&rc570, 0, sizeof rc570);  rc570.f_OK = 0; rc570.f_V = ((rt_int)0LL); rc570; });
return rv569; }
rt_raise(RT_X_INIT);
}
static R25 r_SOME(rt_int p_V) { RT_B_TICK(); 
{ R25 rv571 = ({ R25 rc572; memset(&rc572, 0, sizeof rc572);  rc572.f_OK = 1; rc572.f_V = p_V; rc572; });
return rv571; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_SYM(rt_int p_KIND, R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_573; memset(&l_Y_573, 0, sizeof l_Y_573);
l_Y_573 = ({ R12 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
rt_int l_LEVEL_574; memset(&l_LEVEL_574, 0, sizeof l_LEVEL_574);
l_LEVEL_574 = ((rt_int)0LL);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_CS == NULL)))
{
l_LEVEL_574 = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
}
S_R12(&(*(R12 *)rt_nil_check(l_Y_573)), ({ R12 rc575; memset(&rc575, 0, sizeof rc575);  rc575.f_KIND = p_KIND; rc575.f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH; rc575.f_LEVEL = l_LEVEL_574; S_R9(&rc575.f_NAME, p_NAME, 0); rc575.f_T = NULL; S_R9(&rc575.f_ACCESS, r_NO_TEXT(), 0); S_R9(&rc575.f_FIELD, r_NO_TEXT(), 0); rc575.f_INPUT = 0; rc575.f_BYREF = 0; rc575.f_HASMV = 0; rc575.f_MV = ((rt_int)0LL); rc575.f_TS = NULL; rc575.f_BUSY = 0; S_R9(&rc575.f_FWD, r_NO_TEXT(), 0); rc575.f_PARAMS = NULL; rc575.f_RESULT = NULL; rc575.f_DECL = NULL; S_R9(&rc575.f_PREFIX, r_NO_TEXT(), 0); rc575.f_MODL = ((*(R7 *)rt_nil_check(g_W))).f_MODL; rc575.f_EXPORTED = 0; rc575.f_GENERIC = 0; rc575.f_FRAMED = 0; rc575.f_USES = NULL; rc575.f_INSTANCES = NULL; rc575.f_BINDINGS = NULL; rc575.f_ORIG = NULL; rc575.f_MEMBERS = NULL; rc575.f_SAVED = NULL; rc575.f_OWNER = r_CUR_OWNER(); rc575.f_WITHV = ((rt_int)0LL); rc575.f_LAZY = ((rt_int)0LL); rc575.f_LINKAGE = ((rt_int)0LL); rc575.f_SEGM = NULL; rc575.f_HOME = ((*(R7 *)rt_nil_check(g_W))).f_TRSEG; rc575.f_CHAIN = NULL; rc575.f_SNEXT = NULL; rc575; }), 0);
{ R12 * rv576 = l_Y_573;
return rv576; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_OWNER(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_IS == NULL))
{
{ rt_int rv577 = ((rt_int)0LL);
return rv577; }
}
{ rt_int rv578 = ((*(R20 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_ID;
return rv578; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIGINAL(R12 * p_Y) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)))
{
{ R12 * rv579 = ((*(R12 *)rt_nil_check(p_Y))).f_ORIG;
return rv579; }
}
{ R12 * rv580 = p_Y;
return rv580; }
rt_raise(RT_X_INIT);
}
static rt_int r_BUCKET(R9 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_H < ((rt_int)0LL)))
{
{ rt_int rv581 = r_HASH_OF(r_STR(p_NAME, (p_NAME).f_LEN));
return rv581; }
}
{ rt_int rv582 = (p_NAME).f_H;
return rv582; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_583; memset(&l_Y_583, 0, sizeof l_Y_583);
l_Y_583 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(r_BUCKET(p_NAME), (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
for (;;) {
if ((l_Y_583 == NULL)) goto L_end584;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_583))).f_NAME, p_NAME))
{
{ R12 * rv585 = l_Y_583;
return rv585; }
}
l_Y_583 = ((*(R12 *)rt_nil_check(l_Y_583))).f_CHAIN;
}
RT_B_TICK();
} L_end584: ;
{ R12 * rv586 = NULL;
return rv586; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_587; memset(&l_Y_587, 0, sizeof l_Y_587);
l_Y_587 = r_LOOKUP(p_NAME);
if ((l_Y_587 == NULL))
{
{ R12 * rv588 = NULL;
return rv588; }
}
{ R12 * rv589 = r_ORIGINAL(l_Y_587);
return rv589; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUPS(rstr p_NAME) { RT_B_TICK(); 
{ R12 * rv590 = r_LOOKUP(r_MKN(p_NAME));
return rv590; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP_NEXT(R12 * p_Y) { RT_B_TICK(); 
R12 * l_Z_591; memset(&l_Z_591, 0, sizeof l_Z_591);
l_Z_591 = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
for (;;) {
if ((l_Z_591 == NULL)) goto L_end592;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Z_591))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ R12 * rv593 = l_Z_591;
return rv593; }
}
l_Z_591 = ((*(R12 *)rt_nil_check(l_Z_591))).f_CHAIN;
}
RT_B_TICK();
} L_end592: ;
{ R12 * rv594 = NULL;
return rv594; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUTINE(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv595 = ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_BUILTIN));
return rv595; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_B_596; memset(&l_B_596, 0, sizeof l_B_596);
l_B_596 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_OLD_597; memset(&l_OLD_597, 0, sizeof l_OLD_597);
l_OLD_597 = r_LOOKUP(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
for (;;) {
if ((l_OLD_597 == NULL)) goto L_end598;
{
if ((!(((*(R12 *)rt_nil_check(l_OLD_597))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
goto L_end598;
}
if ((!((((r_IS_ROUTINE(l_OLD_597) && r_IS_ROUTINE(p_Y))) || (((((*(R12 *)rt_nil_check(l_OLD_597))).f_KIND == g_Y_ENUMLIT) && (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)))))))
{
r_FAILT(p_LINE, rt_str("redeclared in the same scope: ", 30), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
}
l_OLD_597 = r_LOOKUP_NEXT(l_OLD_597);
}
RT_B_TICK();
} L_end598: ;
((*(R12 *)rt_nil_check(p_Y))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_Y))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_596, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_596, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_Y;
((*(R12 *)rt_nil_check(p_Y))).f_SNEXT = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = p_Y;
}
static void r_OPEN_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_add(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
}
static void r_CLOSE_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == NULL)) goto L_end599;
{
if ((((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH <= ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end599;
}
r_UNLINK(((*(R7 *)rt_nil_check(g_W))).f_SCOPE);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_SNEXT;
}
RT_B_TICK();
} L_end599: ;
}
static void r_UNLINK(R12 * p_Y) { RT_B_TICK(); 
rt_int l_B_600; memset(&l_B_600, 0, sizeof l_B_600);
l_B_600 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_P_601; memset(&l_P_601, 0, sizeof l_P_601);
l_P_601 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_600, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
if ((l_P_601 == p_Y))
{
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_600, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
for (;;) {
if ((l_P_601 == NULL)) goto L_end602;
{
if ((((*(R12 *)rt_nil_check(l_P_601))).f_CHAIN == p_Y))
{
((*(R12 *)rt_nil_check(l_P_601))).f_CHAIN = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
l_P_601 = ((*(R12 *)rt_nil_check(l_P_601))).f_CHAIN;
}
RT_B_TICK();
} L_end602: ;
}
static R12 * r_TAKE_SCOPE(R12 * p_MARK) { RT_B_TICK(); 
R12 * l_HEAD_603; memset(&l_HEAD_603, 0, sizeof l_HEAD_603);
l_HEAD_603 = NULL;
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == p_MARK)) goto L_end604;
{
{
R12 * l_Y_605; memset(&l_Y_605, 0, sizeof l_Y_605);
l_Y_605 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_UNLINK(l_Y_605);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(l_Y_605))).f_SNEXT;
((*(R12 *)rt_nil_check(l_Y_605))).f_SNEXT = l_HEAD_603;
l_HEAD_603 = l_Y_605;
}
}
RT_B_TICK();
} L_end604: ;
{ R12 * rv606 = l_HEAD_603;
return rv606; }
rt_raise(RT_X_INIT);
}
static R22 * r_NEW_TYP(rt_int p_KIND) { RT_B_TICK(); 
R22 * l_T_607; memset(&l_T_607, 0, sizeof l_T_607);
l_T_607 = ({ R22 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz; })); p; });
S_R22(&(*(R22 *)rt_nil_check(l_T_607)), ({ R22 rc608; memset(&rc608, 0, sizeof rc608);  rc608.f_KIND = p_KIND; rc608.f_SCALE = ((rt_int)0LL); S_R9(&rc608.f_LO_C, r_NO_TEXT(), 0); S_R9(&rc608.f_HI_C, r_NO_TEXT(), 0); S_R25(&rc608.f_MLO, r_NO_MVAL(), 0); S_R25(&rc608.f_MHI, r_NO_MVAL(), 0); rc608.f_RLEVEL = ((rt_int)0LL); S_R9(&rc608.f_LEN_C, r_NO_TEXT(), 0); S_R25(&rc608.f_MLEN, r_NO_MVAL(), 0); S_R9(&rc608.f_GEN, r_NO_TEXT(), 0); rc608.f_BASE = NULL; rc608.f_ELEM = NULL; rc608.f_TARGET = NULL; rc608.f_TARGET_TS = NULL; rc608.f_FIELDS = NULL; rc608.f_LITS = NULL; rc608.f_NLITS = ((rt_int)0LL); rc608.f_UNORDERED = 0; rc608.f_BOUNDS = NULL; rc608.f_DIMS = ((rt_int)0LL); rc608.f_ARGS = NULL; S_R9(&rc608.f_NAME, r_NO_TEXT(), 0); S_R9(&rc608.f_CNAME, r_NO_TEXT(), 0); rc608.f_MODL = NULL; rc608.f_REPS = NULL; rc608.f_DECL = NULL; S_R9(&rc608.f_GENP, r_NO_TEXT(), 0); rc608; }), 0);
{ R22 * rv609 = l_T_607;
return rv609; }
rt_raise(RT_X_INIT);
}
static R22 * r_COPY_TYP(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_610; memset(&l_C_610, 0, sizeof l_C_610);
l_C_610 = ({ R22 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz; })); p; });
S_R22(&(*(R22 *)rt_nil_check(l_C_610)), (*(R22 *)rt_nil_check(p_T)), 0);
{ R22 * rv611 = l_C_610;
return rv611; }
rt_raise(RT_X_INIT);
}
static void r_PREDEF_TYPE(rstr p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_612; memset(&l_Y_612, 0, sizeof l_Y_612);
l_Y_612 = r_NEW_SYM(g_Y_TYPE, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_612))).f_T = p_T;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_612))).f_NAME, 0);
}
r_DEFINE(l_Y_612, ((rt_int)0LL));
}
static void r_PREDEF_BUILTIN(rstr p_NAME) { RT_B_TICK(); 
r_DEFINE(r_NEW_SYM(g_Y_BUILTIN, r_MKN(p_NAME)), ((rt_int)0LL));
}
static void r_PREDEF_CONST(rstr p_NAME, R22 * p_T, rt_int p_V) { RT_B_TICK(); 
R12 * l_Y_613; memset(&l_Y_613, 0, sizeof l_Y_613);
l_Y_613 = r_NEW_SYM(g_Y_CONST, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_613))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_613))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_613))).f_MV = p_V;
((*(R12 *)rt_nil_check(l_Y_613))).f_INPUT = 1;
S_R9(&((*(R12 *)rt_nil_check(l_Y_613))).f_ACCESS, r_FMT1(rt_str("((rt_int)@)", 11), r_NUM(p_V)), 0);
r_DEFINE(l_Y_613, ((rt_int)0LL));
}
static R22 * r_PREDEF_ENUM(rstr p_NAME, rstr p_NAMES, rt_int p_UNORDERED) { RT_B_TICK(); 
R17 * l_HEAD_614; memset(&l_HEAD_614, 0, sizeof l_HEAD_614);
l_HEAD_614 = NULL;
R17 * l_TAIL_615; memset(&l_TAIL_615, 0, sizeof l_TAIL_615);
l_TAIL_615 = NULL;
rt_int l_START_616; memset(&l_START_616, 0, sizeof l_START_616);
l_START_616 = ((rt_int)0LL);
{ rt_int it618_lo = ((rt_int)0LL), it618_hi = (rt_int)(p_NAMES).len;
for (rt_int it618 = it618_lo; it618 <= it618_hi; it618++) {
{
if (((it618 == (rt_int)(p_NAMES).len) || rt_b_eq(rt_b_slice(p_NAMES, it618, it618), rt_str(" ", 1))))
{
if ((it618 > l_START_616))
{
{
R17 * l_N_619; memset(&l_N_619, 0, sizeof l_N_619);
l_N_619 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_619))).f_NAME, r_MKN(rt_b_slice(p_NAMES, l_START_616, rt_sub(it618, ((rt_int)1LL)))), 0);
r_ADD_LIST(l_N_619, &l_HEAD_614, &l_TAIL_615);
}
}
l_START_616 = rt_add(it618, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it618 == it618_hi) break;
} } L_end617: ;
{
R22 * l_T_620; memset(&l_T_620, 0, sizeof l_T_620);
l_T_620 = r_ENUM_CLASS(l_HEAD_614, p_UNORDERED, ((rt_int)0LL));
r_PREDEF_TYPE(p_NAME, l_T_620);
{ R22 * rv621 = l_T_620;
return rv621; }
}
rt_raise(RT_X_INIT);
}
static void r_PREDEFINE(void) { RT_B_TICK(); 
R22 * l_T_622; memset(&l_T_622, 0, sizeof l_T_622);
R17 * l_ASCII_LITS_623; memset(&l_ASCII_LITS_623, 0, sizeof l_ASCII_LITS_623);
l_ASCII_LITS_623 = NULL;
R17 * l_TAIL_624; memset(&l_TAIL_624, 0, sizeof l_TAIL_624);
l_TAIL_624 = NULL;
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
{ rt_int it626_lo = ((rt_int)0LL), it626_hi = ((rt_int)127LL);
for (rt_int it626 = it626_lo; it626 <= it626_hi; it626++) {
{
{
R17 * l_N_627; memset(&l_N_627, 0, sizeof l_N_627);
l_N_627 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_627))).f_NAME, r_ASCII_NAME(it626), 0);
r_ADD_LIST(l_N_627, &l_ASCII_LITS_623, &l_TAIL_624);
}
}
RT_B_TICK();
if (it626 == it626_hi) break;
} } L_end625: ;
((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII = r_ENUM_CLASS(l_ASCII_LITS_623, 0, ((rt_int)0LL));
r_PREDEF_TYPE(rt_str("ASCII", 5), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII);
((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS = r_PREDEF_ENUM(rt_str("ROUNDINGS", 9), rt_str("ROUNDED TRUNCATED NATIVE_R NATIVE_T", 35), 0);
l_T_622 = r_PREDEF_ENUM(rt_str("FIXED_PRECISIONS", 16), rt_str("STD", 3), 0);
r_PREDEF_BOUNDS_DEF();
l_T_622 = r_PREDEF_ENUM(rt_str("SIGNING", 7), rt_str("SIGNED UNSIGNED", 15), 1);
l_T_622 = r_PREDEF_ENUM(rt_str("PACKING", 7), rt_str("DENSE PACKED UNPACKED", 21), 1);
l_T_622 = r_PREDEF_ENUM(rt_str("USAGE", 5), rt_str("SYNCH REGION", 12), 1);
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
rstr l_OPS_628; memset(&l_OPS_628, 0, sizeof l_OPS_628);
l_OPS_628 = rt_b_str_new(((rt_int)271LL), 0);
rt_b_assign(&l_OPS_628, rt_str(" ADD_ SUBTRACT_ MULTIPLY_ DIVIDE_ MODULUS_ EXPONENTIATE_ CONCATENATE_ EQUAL_ UNEQUAL_ GREATER_THAN_ LESS_THAN_ GREATER_EQUAL_ LESS_EQUAL_ AND_ OR_ XOR_ IMPLIES_ MD_ADD_ MD_SUBTRACT_ MD_MULTIPLY_ MD_DIVIDE_ NEGATE_ MON_PLUS_ COMPLEMENT_ STORE_ SUBSTRING_ SUBSTRING_STORE_ ", 271));
rt_int l_START_629; memset(&l_START_629, 0, sizeof l_START_629);
l_START_629 = ((rt_int)1LL);
{ rt_int it631_lo = ((rt_int)1LL), it631_hi = ((rt_int)270LL);
for (rt_int it631 = it631_lo; it631 <= it631_hi; it631++) {
{
if (rt_b_eq(rt_b_slice(l_OPS_628, it631, it631), rt_str(" ", 1)))
{
if ((it631 > l_START_629))
{
r_PREDEF_BUILTIN(rt_b_slice(l_OPS_628, l_START_629, rt_sub(it631, ((rt_int)1LL))));
}
l_START_629 = rt_add(it631, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it631 == it631_hi) break;
} } L_end630: ;
}
r_PREDEF_CONST(rt_str("MAX_NOM_PREC", 12), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)15LL));
r_PREDEF_CONST(rt_str("CLOCK_SCALE", 11), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)20LL));
r_OPEN_SCOPE();
}
static void r_PREDEF_BOUNDS_DEF(void) { RT_B_TICK(); 
R17 * l_F_632; memset(&l_F_632, 0, sizeof l_F_632);
l_F_632 = r_NEW_NODE(g_N_FORMAL, ((rt_int)0LL));
R17 * l_V_633; memset(&l_V_633, 0, sizeof l_V_633);
l_V_633 = r_NEW_NODE(g_N_VAR, ((rt_int)0LL));
R17 * l_R_634; memset(&l_R_634, 0, sizeof l_R_634);
l_R_634 = r_NEW_NODE(g_TS_RECORD, ((rt_int)0LL));
R17 * l_D_635; memset(&l_D_635, 0, sizeof l_D_635);
l_D_635 = r_NEW_NODE(g_N_TYPE, ((rt_int)0LL));
R17 * l_FX_636; memset(&l_FX_636, 0, sizeof l_FX_636);
l_FX_636 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
R12 * l_Y_637; memset(&l_Y_637, 0, sizeof l_Y_637);
l_Y_637 = r_NEW_SYM(g_Y_TYPE, r_MKN(rt_str("BOUNDS_DEF", 10)));
((*(R17 *)rt_nil_check(l_F_632))).f_A = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_F_632))).f_A))).f_NAME, r_MKN(rt_str("MAX_P", 5)), 0);
((*(R17 *)rt_nil_check(l_F_632))).f_B = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_F_632))).f_B))).f_NAME, r_MKN(rt_str("FIXED_PRECISIONS", 16)), 0);
S_R9(&((*(R17 *)rt_nil_check(l_FX_636))).f_NAME, r_MKN(rt_str("FIXED", 5)), 0);
((*(R17 *)rt_nil_check(l_FX_636))).f_A = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_FX_636))).f_A))).f_NEXT = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_FX_636))).f_A))).f_NEXT))).f_IV = ((rt_int)2LL);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_FX_636))).f_A))).f_NEXT))).f_NEXT = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_FX_636))).f_A))).f_NEXT))).f_NEXT))).f_NAME, r_MKN(rt_str("MAX_P", 5)), 0);
((*(R17 *)rt_nil_check(l_V_633))).f_A = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_633))).f_A))).f_NAME, r_MKN(rt_str("MIN", 3)), 0);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_633))).f_A))).f_NEXT = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_633))).f_A))).f_NEXT))).f_NAME, r_MKN(rt_str("MAX", 3)), 0);
((*(R17 *)rt_nil_check(l_V_633))).f_B = l_FX_636;
((*(R17 *)rt_nil_check(l_R_634))).f_A = l_V_633;
S_R9(&((*(R17 *)rt_nil_check(l_D_635))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_637))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_D_635))).f_A = l_F_632;
((*(R17 *)rt_nil_check(l_D_635))).f_B = l_R_634;
((*(R12 *)rt_nil_check(l_Y_637))).f_DECL = l_D_635;
r_DEFINE(l_Y_637, ((rt_int)0LL));
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
rstr l_CONTROLS_638; memset(&l_CONTROLS_638, 0, sizeof l_CONTROLS_638);
l_CONTROLS_638 = rt_b_str_new(((rt_int)128LL), 0);
rt_b_assign(&l_CONTROLS_638, rt_str(" NUL SOH STX EXT EOT ENQ ACK BEL BS  HT  LF  VT  FF  CR  SO  SI  DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM  SUB ESC FS  GS  RS  US ", 128));
if ((p_C < ((rt_int)32LL)))
{
if (rt_b_eq(rt_b_slice(l_CONTROLS_638, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL))), rt_str(" ", 1)))
{
{ R9 rv639 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_638, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)2LL)))));
return rv639; }
}
{ R9 rv640 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_638, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)))));
return rv640; }
}
else if ((p_C == ((rt_int)39LL)))
{
{ R9 rv641 = r_MKN(rt_str("\\''''", 5));
return rv641; }
}
else if ((p_C < ((rt_int)96LL)))
{
{ R9 rv642 = r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), r_CHAR_OF(p_C)), rt_str("'", 1)));
return rv642; }
}
else if ((p_C == ((rt_int)96LL)))
{
{ R9 rv643 = r_MKN(rt_str("\\ACCENT", 7));
return rv643; }
}
else if ((p_C <= ((rt_int)122LL)))
{
{ R9 rv644 = r_MKN(rt_b_cat(rt_str("\\", 1), r_CHAR_OF(rt_sub(p_C, ((rt_int)32LL)))));
return rv644; }
}
else if ((p_C == ((rt_int)123LL)))
{
{ R9 rv645 = r_MKN(rt_str("\\[", 2));
return rv645; }
}
else if ((p_C == ((rt_int)124LL)))
{
{ R9 rv646 = r_MKN(rt_str("\\BAR", 4));
return rv646; }
}
else if ((p_C == ((rt_int)125LL)))
{
{ R9 rv647 = r_MKN(rt_str("\\]", 2));
return rv647; }
}
else if ((p_C == ((rt_int)126LL)))
{
{ R9 rv648 = r_MKN(rt_str("\\TILDE", 6));
return rv648; }
}
{ R9 rv649 = r_MKN(rt_str("\\DEL", 4));
return rv649; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_SCALAR(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv650 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_BOOL)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv650; }
rt_raise(RT_X_INIT);
}
static R22 * r_REAL_TYPE(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R22 * rv651 = r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv651; }
}
{ R22 * rv652 = p_T;
return rv652; }
rt_raise(RT_X_INIT);
}
static R9 r_TYPE_NAME(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_653; memset(&l_K_653, 0, sizeof l_K_653);
l_K_653 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{ R9 rv654 = ((*(R22 *)rt_nil_check(p_T))).f_NAME;
return rv654; }
}
else if ((l_K_653 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))
{
{ R9 rv655 = r_MK(rt_str("INTEGER", 7));
return rv655; }
}
{ R9 rv656 = r_FMT1(rt_str("FIXED (@, 2, STD)", 17), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv656; }
}
else if ((l_K_653 == g_T_BOOL))
{
{ R9 rv657 = r_MK(rt_str("BOOLEAN", 7));
return rv657; }
}
else if ((l_K_653 == g_T_ENUM))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R9 rv658 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv658; }
}
{ R9 rv659 = r_MK(rt_str("an enumerated type", 18));
return rv659; }
}
else if ((l_K_653 == g_T_STR))
{
{ R9 rv660 = r_MK(rt_str("CHAR_STR", 8));
return rv660; }
}
else if ((l_K_653 == g_T_BITS))
{
{ R9 rv661 = r_MK(rt_str("BIT", 3));
return rv661; }
}
else if ((l_K_653 == g_T_FLOAT))
{
{ R9 rv662 = r_FMT1(rt_str("FLOAT (@)", 9), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv662; }
}
else if ((l_K_653 == g_T_ARR))
{
{ R9 rv663 = r_FMT1(rt_str("ARRAY OF @", 10), r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_ELEM));
return rv663; }
}
else if ((l_K_653 == g_T_REC))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R9 rv664 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv664; }
}
{ R9 rv665 = r_MK(rt_str("RECORD", 6));
return rv665; }
}
else if ((l_K_653 == g_T_PTR))
{
{ R9 rv666 = r_MK(rt_str("PTR", 3));
return rv666; }
}
else if ((l_K_653 == g_T_SEM))
{
{ R9 rv667 = r_MK(rt_str("SEMAPHORE", 9));
return rv667; }
}
else if ((l_K_653 == g_T_NIL))
{
{ R9 rv668 = r_MK(rt_str("NIL", 3));
return rv668; }
}
else if ((l_K_653 == g_T_VOID))
{
{ R9 rv669 = r_MK(rt_str("no value", 8));
return rv669; }
}
{ R9 rv670 = r_MK(rt_str("a type", 6));
return rv670; }
rt_raise(RT_X_INIT);
}
static R9 r_SUBST_SELF(R9 p_T, R9 p_SELF) { RT_B_TICK(); 
rstr l_S_671; memset(&l_S_671, 0, sizeof l_S_671);
l_S_671 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_671, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_672; memset(&l_AT_672, 0, sizeof l_AT_672);
l_AT_672 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_START_673; memset(&l_START_673, 0, sizeof l_START_673);
l_START_673 = ((rt_int)0LL);
R9 l_R_674; memset(&l_R_674, 0, sizeof l_R_674);
rt_int l_I_675; memset(&l_I_675, 0, sizeof l_I_675);
l_I_675 = ((rt_int)0LL);
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ R9 rv676 = p_T;
return rv676; }
}
for (;;) {
if ((l_I_675 >= rt_sub((p_T).f_LEN, ((rt_int)1LL)))) goto L_end677;
{
if (rt_b_eq(rt_b_slice(l_S_671, l_I_675, rt_add(l_I_675, ((rt_int)1LL))), rt_str("$S", 2)))
{
S_R9(&l_R_674, r_MK(rt_b_slice(l_S_671, l_START_673, rt_sub(l_I_675, ((rt_int)1LL)))), 0);
S_R9(&l_R_674, r_MK(r_STR(p_SELF, (p_SELF).f_LEN)), 0);
l_I_675 = rt_add(l_I_675, ((rt_int)2LL));
l_START_673 = l_I_675;
}
else
{
l_I_675 = rt_add(l_I_675, ((rt_int)1LL));
}
}
RT_B_TICK();
} L_end677: ;
if ((l_START_673 == ((rt_int)0LL)))
{
((*(R7 *)rt_nil_check(g_W))).f_TOP = l_AT_672;
{ R9 rv678 = p_T;
return rv678; }
}
S_R9(&l_R_674, r_MK(rt_b_slice(l_S_671, l_START_673, rt_sub((p_T).f_LEN, ((rt_int)1LL)))), 0);
{ R9 rv679 = ({ R9 rc680; memset(&rc680, 0, sizeof rc680);  rc680.f_AT = l_AT_672; rc680.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_672); rc680.f_H = rt_neg(((rt_int)1LL)); rc680; });
return rv679; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LITERALS(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_P_681; memset(&l_P_681, 0, sizeof l_P_681);
l_P_681 = p_A;
R17 * l_Q_682; memset(&l_Q_682, 0, sizeof l_Q_682);
l_Q_682 = p_B;
for (;;) {
if (((l_P_681 == NULL) || (l_Q_682 == NULL))) goto L_end683;
{
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_P_681))).f_NAME, ((*(R17 *)rt_nil_check(l_Q_682))).f_NAME)))
{
{ rt_int rv684 = 0;
return rv684; }
}
l_P_681 = ((*(R17 *)rt_nil_check(l_P_681))).f_NEXT;
l_Q_682 = ((*(R17 *)rt_nil_check(l_Q_682))).f_NEXT;
}
RT_B_TICK();
} L_end683: ;
{ rt_int rv685 = ((l_P_681 == NULL) && (l_Q_682 == NULL));
return rv685; }
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_CLASS(R17 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_686; memset(&l_Y_686, 0, sizeof l_Y_686);
l_Y_686 = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
R22 * l_T_687; memset(&l_T_687, 0, sizeof l_T_687);
{
R17 * l_P_688; memset(&l_P_688, 0, sizeof l_P_688);
l_P_688 = p_LITS;
for (;;) {
if ((l_P_688 == NULL)) goto L_end689;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_P_688))).f_NEXT, ((*(R17 *)rt_nil_check(l_P_688))).f_NAME))
{
r_FAILT(p_LINE, rt_str("an enumerated literal must be unique in its list (3.4.1): ", 58), ((*(R17 *)rt_nil_check(l_P_688))).f_NAME);
}
l_P_688 = ((*(R17 *)rt_nil_check(l_P_688))).f_NEXT;
}
RT_B_TICK();
} L_end689: ;
}
for (;;) {
if ((l_Y_686 == NULL)) goto L_end690;
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_686))).f_T))).f_UNORDERED == p_UNORDERED) && r_SAME_LITERALS(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_686))).f_T))).f_LITS, p_LITS)))
{
r_DECLARE_LITERALS(((*(R12 *)rt_nil_check(l_Y_686))).f_T, p_LINE);
{ R22 * rv691 = ((*(R12 *)rt_nil_check(l_Y_686))).f_T;
return rv691; }
}
l_Y_686 = ((*(R12 *)rt_nil_check(l_Y_686))).f_INSTANCES;
}
RT_B_TICK();
} L_end690: ;
l_T_687 = r_NEW_TYP(g_T_ENUM);
((*(R22 *)rt_nil_check(l_T_687))).f_BASE = l_T_687;
((*(R22 *)rt_nil_check(l_T_687))).f_LITS = p_LITS;
((*(R22 *)rt_nil_check(l_T_687))).f_NLITS = r_LIST_LENGTH(p_LITS);
((*(R22 *)rt_nil_check(l_T_687))).f_UNORDERED = p_UNORDERED;
S_R9(&((*(R22 *)rt_nil_check(l_T_687))).f_CNAME, r_NEW_NAME(rt_str("E", 1)), 0);
l_Y_686 = r_NEW_SYM(g_Y_TYPE, r_NO_TEXT());
((*(R12 *)rt_nil_check(l_Y_686))).f_T = l_T_687;
((*(R12 *)rt_nil_check(l_Y_686))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
((*(R7 *)rt_nil_check(g_W))).f_ENUMS = l_Y_686;
{
R17 * l_P_692; memset(&l_P_692, 0, sizeof l_P_692);
l_P_692 = p_LITS;
R9 l_NAMES_693; memset(&l_NAMES_693, 0, sizeof l_NAMES_693);
S_R9(&l_NAMES_693, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_P_692 == NULL)) goto L_end694;
{
S_R9(&l_NAMES_693, r_FMT2(rt_str("@@, ", 4), l_NAMES_693, r_CSTRING(((*(R17 *)rt_nil_check(l_P_692))).f_NAME)), 0);
l_P_692 = ((*(R17 *)rt_nil_check(l_P_692))).f_NEXT;
}
RT_B_TICK();
} L_end694: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static const char *@[] = { @0 };", 32), ((*(R22 *)rt_nil_check(l_T_687))).f_CNAME, l_NAMES_693));
}
r_DECLARE_LITERALS(l_T_687, p_LINE);
{ R22 * rv695 = l_T_687;
return rv695; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_LITERALS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_P_696; memset(&l_P_696, 0, sizeof l_P_696);
l_P_696 = ((*(R22 *)rt_nil_check(p_T))).f_LITS;
rt_int l_I_697; memset(&l_I_697, 0, sizeof l_I_697);
l_I_697 = ((rt_int)0LL);
for (;;) {
if ((l_P_696 == NULL)) goto L_end698;
{
if ((r_VISIBLE_LITERAL(((*(R17 *)rt_nil_check(l_P_696))).f_NAME, p_T) == NULL))
{
{
R12 * l_Y_699; memset(&l_Y_699, 0, sizeof l_Y_699);
l_Y_699 = r_NEW_SYM(g_Y_ENUMLIT, ((*(R17 *)rt_nil_check(l_P_696))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_699))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_699))).f_MV = l_I_697;
((*(R12 *)rt_nil_check(l_Y_699))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_699))).f_INPUT = 1;
r_DEFINE(l_Y_699, p_LINE);
}
}
l_I_697 = rt_add(l_I_697, ((rt_int)1LL));
l_P_696 = ((*(R17 *)rt_nil_check(l_P_696))).f_NEXT;
}
RT_B_TICK();
} L_end698: ;
}
static R12 * r_FIND_LITERAL(R9 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_V_700; memset(&l_V_700, 0, sizeof l_V_700);
l_V_700 = r_VISIBLE_LITERAL(p_NAME, p_T);
if (((!(l_V_700 == NULL)) || (p_T == NULL)))
{
{ R12 * rv701 = l_V_700;
return rv701; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL))
{
{ R12 * rv702 = NULL;
return rv702; }
}
{
R17 * l_P_703; memset(&l_P_703, 0, sizeof l_P_703);
l_P_703 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
rt_int l_I_704; memset(&l_I_704, 0, sizeof l_I_704);
l_I_704 = ((rt_int)0LL);
for (;;) {
if ((l_P_703 == NULL)) goto L_end705;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_703))).f_NAME, p_NAME))
{
{
R12 * l_Y_706; memset(&l_Y_706, 0, sizeof l_Y_706);
l_Y_706 = r_NEW_SYM(g_Y_ENUMLIT, p_NAME);
((*(R12 *)rt_nil_check(l_Y_706))).f_T = ((*(R22 *)rt_nil_check(p_T))).f_BASE;
((*(R12 *)rt_nil_check(l_Y_706))).f_MV = l_I_704;
((*(R12 *)rt_nil_check(l_Y_706))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_706))).f_INPUT = 1;
{ R12 * rv707 = l_Y_706;
return rv707; }
}
}
l_I_704 = rt_add(l_I_704, ((rt_int)1LL));
l_P_703 = ((*(R17 *)rt_nil_check(l_P_703))).f_NEXT;
}
RT_B_TICK();
} L_end705: ;
}
{ R12 * rv708 = NULL;
return rv708; }
rt_raise(RT_X_INIT);
}
static R12 * r_VISIBLE_LITERAL(R9 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_709; memset(&l_Y_709, 0, sizeof l_Y_709);
l_Y_709 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_709 == NULL)) goto L_end710;
{
if ((((*(R12 *)rt_nil_check(l_Y_709))).f_KIND == g_Y_ENUMLIT))
{
if ((p_T == NULL))
{
{ R12 * rv711 = l_Y_709;
return rv711; }
}
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_709))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv712 = l_Y_709;
return rv712; }
}
}
l_Y_709 = r_LOOKUP_NEXT(l_Y_709);
}
RT_B_TICK();
} L_end710: ;
{ R12 * rv713 = NULL;
return rv713; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_CLASSES(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_714; memset(&l_Y_714, 0, sizeof l_Y_714);
l_Y_714 = r_LOOKUP(p_NAME);
rt_int l_N_715; memset(&l_N_715, 0, sizeof l_N_715);
l_N_715 = ((rt_int)0LL);
for (;;) {
if ((l_Y_714 == NULL)) goto L_end716;
{
if ((((*(R12 *)rt_nil_check(l_Y_714))).f_KIND == g_Y_ENUMLIT))
{
l_N_715 = rt_add(l_N_715, ((rt_int)1LL));
}
l_Y_714 = r_LOOKUP_NEXT(l_Y_714);
}
RT_B_TICK();
} L_end716: ;
{ rt_int rv717 = l_N_715;
return rv717; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE(R17 * p_TS) { RT_B_TICK(); 
{ R22 * rv718 = r_RESOLVE_NAMED(p_TS, r_NO_TEXT());
return rv718; }
rt_raise(RT_X_INIT);
}
static void r_ATTR_VALUE(R17 * p_E, R9 *p_C, R25 *p_M) { RT_B_TICK(); 
S_R9(&(*p_C), (r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, 0);
S_R25(&(*p_M), r_MANIFEST(p_E), 0);
if (((*p_M)).f_OK)
{
S_R9(&(*p_C), r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*p_M)).f_V)), 0);
}
}
static R22 * r_WITH_RANGE(R22 * p_T, R17 * p_R) { RT_B_TICK(); 
R22 * l_N_719; memset(&l_N_719, 0, sizeof l_N_719);
if ((p_R == NULL))
{
{ R22 * rv720 = p_T;
return rv720; }
}
if ((r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(p_R))).f_A) || r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(p_R))).f_B)))
{
l_N_719 = r_COPY_TYP(p_T);
S_R9(&((*(R22 *)rt_nil_check(l_N_719))).f_NAME, r_NO_TEXT(), 0);
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_719))).f_LO_C, r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NAME), 0);
}
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_B))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_719))).f_HI_C, r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_B))).f_NAME), 0);
}
{ R22 * rv721 = l_N_719;
return rv721; }
}
if ((!((((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_R))).f_LINE, rt_str("a range is only for fixed, float and enumerated types (3.12.2)", 62));
}
l_N_719 = r_COPY_TYP(p_T);
S_R9(&((*(R22 *)rt_nil_check(l_N_719))).f_NAME, r_NO_TEXT(), 0);
((*(R22 *)rt_nil_check(l_N_719))).f_RLEVEL = r_CUR_LEVEL();
{
R28 l_LO_722; memset(&l_LO_722, 0, sizeof l_LO_722);
R28 l_HI_723; memset(&l_HI_723, 0, sizeof l_HI_723);
S_R28(&l_LO_722, r_EXPR(((*(R17 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R28(&l_HI_723, r_EXPR(((*(R17 *)rt_nil_check(p_R))).f_B, p_T), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_719))).f_LO_C, (l_LO_722).f_C, 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_719))).f_HI_C, (l_HI_723).f_C, 0);
S_R25(&((*(R22 *)rt_nil_check(l_N_719))).f_MLO, r_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_A), 0);
S_R25(&((*(R22 *)rt_nil_check(l_N_719))).f_MHI, r_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_B), 0);
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
S_R25(&((*(R22 *)rt_nil_check(l_N_719))).f_MLO, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R25(&((*(R22 *)rt_nil_check(l_N_719))).f_MHI, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_B, p_T), 0);
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_722).f_T), r_REAL_TYPE(p_T))) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_723).f_T), r_REAL_TYPE(p_T)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_R))).f_LINE, rt_str("the bounds of a range must be of the class of the type (3.2.1, 3.3.1, 3.4.1)", 76));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_719))).f_LO_C, r_RESCALE(l_LO_722, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R17 *)rt_nil_check(p_R))).f_LINE), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_719))).f_HI_C, r_RESCALE(l_HI_723, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R17 *)rt_nil_check(p_R))).f_LINE), 0);
if ((((!(((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL))) || (!(((*(R22 *)rt_nil_check((l_LO_722).f_T))).f_SCALE == ((rt_int)0LL)))) || (!(((*(R22 *)rt_nil_check((l_HI_723).f_T))).f_SCALE == ((rt_int)0LL)))))
{
S_R25(&((*(R22 *)rt_nil_check(l_N_719))).f_MLO, r_NO_MVAL(), 0);
S_R25(&((*(R22 *)rt_nil_check(l_N_719))).f_MHI, r_NO_MVAL(), 0);
}
}
if (r_IS_D(p_T))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_719))).f_LO_C, r_AS_D(l_LO_722), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_719))).f_HI_C, r_AS_D(l_HI_723), 0);
}
}
if (((((*(R17 *)rt_nil_check(p_R))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(p_R))).f_IV == ((rt_int)3LL))))
{
if (r_IS_D(p_T))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_719))).f_LO_C, r_FMT1(rt_str("rt_b_dnext(@, 1)", 16), ((*(R22 *)rt_nil_check(l_N_719))).f_LO_C), 0);
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_719))).f_LO_C, r_FMT1(rt_str("nextafter(@, INFINITY)", 22), ((*(R22 *)rt_nil_check(l_N_719))).f_LO_C), 0);
}
else
{
S_R9(&((*(R22 *)rt_nil_check(l_N_719))).f_LO_C, r_FMT1(rt_str("((@) + 1)", 9), ((*(R22 *)rt_nil_check(l_N_719))).f_LO_C), 0);
(((*(R22 *)rt_nil_check(l_N_719))).f_MLO).f_V = rt_add((((*(R22 *)rt_nil_check(l_N_719))).f_MLO).f_V, ((rt_int)1LL));
}
}
if ((((*(R17 *)rt_nil_check(p_R))).f_IV >= ((rt_int)2LL)))
{
if (r_IS_D(p_T))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_719))).f_HI_C, r_FMT1(rt_str("rt_b_dnext(@, 0)", 16), ((*(R22 *)rt_nil_check(l_N_719))).f_HI_C), 0);
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_719))).f_HI_C, r_FMT1(rt_str("nextafter(@, -INFINITY)", 23), ((*(R22 *)rt_nil_check(l_N_719))).f_HI_C), 0);
}
else
{
S_R9(&((*(R22 *)rt_nil_check(l_N_719))).f_HI_C, r_FMT1(rt_str("((@) - 1)", 9), ((*(R22 *)rt_nil_check(l_N_719))).f_HI_C), 0);
(((*(R22 *)rt_nil_check(l_N_719))).f_MHI).f_V = rt_sub((((*(R22 *)rt_nil_check(l_N_719))).f_MHI).f_V, ((rt_int)1LL));
}
}
{ R22 * rv724 = l_N_719;
return rv724; }
rt_raise(RT_X_INIT);
}
static R25 r_ENUM_MANIFEST(R17 * p_E, R22 * p_T) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{
R12 * l_Y_725; memset(&l_Y_725, 0, sizeof l_Y_725);
l_Y_725 = r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, p_T);
if ((!(l_Y_725 == NULL)))
{
{ R25 rv726 = r_SOME(((*(R12 *)rt_nil_check(l_Y_725))).f_MV);
return rv726; }
}
}
}
{ R25 rv727 = r_MANIFEST(p_E);
return rv727; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_LEVEL(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_CS == NULL))
{
{ rt_int rv728 = ((rt_int)0LL);
return rv728; }
}
{ rt_int rv729 = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
return rv729; }
rt_raise(RT_X_INIT);
}
static R22 * r_ARG_TYPE(R17 * p_N) { RT_B_TICK(); 
{ R22 * rv730 = r_RESOLVE(r_EXPR_TO_TS(p_N));
return rv730; }
rt_raise(RT_X_INIT);
}
static R17 * r_NTH_ARG(R17 * p_TS, rt_int p_K) { RT_B_TICK(); 
R17 * l_A_731; memset(&l_A_731, 0, sizeof l_A_731);
l_A_731 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
{ rt_int it733_lo = ((rt_int)1LL), it733_hi = p_K;
for (rt_int it733 = it733_lo; it733 <= it733_hi; it733++) {
{
if ((l_A_731 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
l_A_731 = ((*(R17 *)rt_nil_check(l_A_731))).f_NEXT;
}
RT_B_TICK();
if (it733 == it733_hi) break;
} } L_end732: ;
if ((l_A_731 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
{ R17 * rv734 = l_A_731;
return rv734; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_NAMED(R17 * p_TS, R9 p_CNAME) { RT_B_TICK(); 
R22 * l_T_735; memset(&l_T_735, 0, sizeof l_T_735);
rt_int l_K_736; memset(&l_K_736, 0, sizeof l_K_736);
l_K_736 = ((*(R17 *)rt_nil_check(p_TS))).f_KIND;
if ((l_K_736 == g_TS_ARRAY))
{
{ R22 * rv737 = r_RESOLVE_ARRAY(p_TS);
return rv737; }
}
else if ((l_K_736 == g_TS_RECORD))
{
{ R22 * rv738 = r_RESOLVE_RECORD(p_TS, p_CNAME, NULL, NULL);
return rv738; }
}
else if ((l_K_736 == g_TS_ENUM))
{
l_T_735 = r_ENUM_CLASS(((*(R17 *)rt_nil_check(p_TS))).f_A, (((*(R17 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)), ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
if (((((*(R17 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("an UNORDERED type has no range", 30));
}
l_T_735 = r_WITH_RANGE(l_T_735, ((*(R17 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_735 = r_APPLY_REP(l_T_735, ((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv739 = l_T_735;
return rv739; }
}
else if ((l_K_736 == g_TS_GEN))
{
{ R22 * rv740 = r_GEN_TYPE(p_TS);
return rv740; }
}
else if ((!(l_K_736 == g_TS_NAME)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a type specification expected", 29));
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_FL == ((rt_int)3LL)))
{
l_T_735 = r_WITH_RANGE(r_TYPE_ATTR_TYPE(((*(R17 *)rt_nil_check(p_TS))).f_E), ((*(R17 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_735 = r_APPLY_REP(l_T_735, ((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv741 = l_T_735;
return rv741; }
}
l_T_735 = r_RESOLVE_PREDEFINED(p_TS);
if ((l_T_735 == NULL))
{
l_T_735 = r_RESOLVE_USER(p_TS);
}
l_T_735 = r_WITH_RANGE(l_T_735, ((*(R17 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_735 = r_APPLY_REP(l_T_735, ((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv742 = l_T_735;
return rv742; }
rt_raise(RT_X_INIT);
}
static R22 * r_APPLY_REP(R22 * p_T0, R17 * p_R0, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_743; memset(&l_T_743, 0, sizeof l_T_743);
l_T_743 = r_COPY_TYP(p_T0);
if ((((*(R22 *)rt_nil_check(p_T0))).f_KIND == g_T_ABS))
{
r_FAIL(p_LINE, rt_str("a REP clause is only for a member of a predefined type class (3.12.2)", 69));
}
((*(R22 *)rt_nil_check(l_T_743))).f_REPS = r_EXPAND_REP(p_R0, p_T0, p_LINE);
r_CHECK_REP_CLASS(l_T_743, p_LINE);
if ((((*(R22 *)rt_nil_check(l_T_743))).f_KIND == g_T_ENUM))
{
r_CHECK_ENUM_REP(l_T_743, p_LINE);
}
else if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_743))).f_REPS))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("ENUM_VAL_REP is only for UNORDERED types (3.4.3)", 48));
}
{ R22 * rv744 = l_T_743;
return rv744; }
rt_raise(RT_X_INIT);
}
static R17 * r_EXPAND_REP(R17 * p_R, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_745; memset(&l_Y_745, 0, sizeof l_Y_745);
if ((p_R == NULL))
{
{ R17 * rv746 = p_R;
return rv746; }
}
if ((((*(R17 *)rt_nil_check(p_R))).f_KIND == g_TS_GEN))
{
{ R17 * rv747 = p_R;
return rv747; }
}
l_Y_745 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_R))).f_NAME);
if ((l_Y_745 == NULL))
{
{ R17 * rv748 = p_R;
return rv748; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_745))).f_KIND == g_Y_REPTYPE)))
{
{ R17 * rv749 = p_R;
return rv749; }
}
if (((*(R12 *)rt_nil_check(l_Y_745))).f_BUSY)
{
r_FAILT(p_LINE, rt_str("a circular reptype declaration (3.12.3): ", 41), ((*(R17 *)rt_nil_check(p_R))).f_NAME);
}
{
R17 * l_D_750; memset(&l_D_750, 0, sizeof l_D_750);
l_D_750 = ((*(R12 *)rt_nil_check(l_Y_745))).f_DECL;
R17 * l_X_751; memset(&l_X_751, 0, sizeof l_X_751);
l_X_751 = r_NEW_NODE(g_N_REP, ((*(R17 *)rt_nil_check(p_R))).f_LINE);
R17 * l_HEAD_752; memset(&l_HEAD_752, 0, sizeof l_HEAD_752);
l_HEAD_752 = NULL;
R17 * l_TAIL_753; memset(&l_TAIL_753, 0, sizeof l_TAIL_753);
l_TAIL_753 = NULL;
((*(R12 *)rt_nil_check(l_Y_745))).f_BUSY = 1;
r_OPEN_SCOPE();
if (((!(((*(R17 *)rt_nil_check(l_D_750))).f_A == NULL)) || (!(((*(R17 *)rt_nil_check(p_R))).f_A == NULL))))
{
r_BIND_FORMALS(((*(R17 *)rt_nil_check(l_D_750))).f_A, p_R);
}
if ((!(((*(R17 *)rt_nil_check(l_D_750))).f_C == NULL)))
{
{
R12 * l_B_754; memset(&l_B_754, 0, sizeof l_B_754);
l_B_754 = r_NEW_SYM(g_Y_TYPE, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_750))).f_C))).f_NAME);
((*(R12 *)rt_nil_check(l_B_754))).f_T = p_T;
r_DEFINE(l_B_754, p_LINE);
}
}
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
S_R9(&((*(R17 *)rt_nil_check(l_X_751))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_750))).f_B))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_X_751))).f_B = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_750))).f_B))).f_B;
((*(R17 *)rt_nil_check(l_X_751))).f_C = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_750))).f_B))).f_C;
if (r_TEQS(((*(R17 *)rt_nil_check(l_X_751))).f_NAME, rt_str("RECORD_REP", 10)))
{
l_HEAD_752 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_750))).f_B))).f_A;
}
else
{
{
R17 * l_A_755; memset(&l_A_755, 0, sizeof l_A_755);
l_A_755 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_750))).f_B))).f_A;
for (;;) {
if ((l_A_755 == NULL)) goto L_end756;
{
r_ADD_LIST(r_REP_ARG_VALUE(l_A_755), &l_HEAD_752, &l_TAIL_753);
l_A_755 = ((*(R17 *)rt_nil_check(l_A_755))).f_NEXT;
}
RT_B_TICK();
} L_end756: ;
}
}
((*(R17 *)rt_nil_check(l_X_751))).f_A = l_HEAD_752;
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
r_CLOSE_SCOPE();
l_X_751 = r_EXPAND_REP(l_X_751, p_T, p_LINE);
((*(R12 *)rt_nil_check(l_Y_745))).f_BUSY = 0;
{ R17 * rv757 = l_X_751;
return rv757; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_REP_ARG_VALUE(R17 * p_A) { RT_B_TICK(); 
R17 * l_N_758; memset(&l_N_758, 0, sizeof l_N_758);
R25 l_M_759; memset(&l_M_759, 0, sizeof l_M_759);
if (((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_760; memset(&l_Y_760, 0, sizeof l_Y_760);
l_Y_760 = r_LOOKUP(((*(R17 *)rt_nil_check(p_A))).f_NAME);
if (((l_Y_760 == NULL) || (((!(l_Y_760 == NULL)) && (((*(R12 *)rt_nil_check(l_Y_760))).f_KIND == g_Y_ENUMLIT)))))
{
l_N_758 = r_NEW_NODE(((*(R17 *)rt_nil_check(p_A))).f_KIND, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_758))).f_NAME, ((*(R17 *)rt_nil_check(p_A))).f_NAME, 0);
{ R17 * rv761 = l_N_758;
return rv761; }
}
if (((((*(R12 *)rt_nil_check(l_Y_760))).f_KIND == g_Y_CONST) && (!(((*(R12 *)rt_nil_check(l_Y_760))).f_T == NULL))))
{
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_760))).f_T)))).f_KIND == g_T_ENUM) && ((*(R12 *)rt_nil_check(l_Y_760))).f_HASMV))
{
{
R17 * l_L_762; memset(&l_L_762, 0, sizeof l_L_762);
l_L_762 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_760))).f_T)))).f_BASE))).f_LITS;
rt_int l_I_763; memset(&l_I_763, 0, sizeof l_I_763);
l_I_763 = ((rt_int)0LL);
for (;;) {
if (((l_L_762 == NULL) || (l_I_763 == ((*(R12 *)rt_nil_check(l_Y_760))).f_MV))) goto L_end764;
{
l_I_763 = rt_add(l_I_763, ((rt_int)1LL));
l_L_762 = ((*(R17 *)rt_nil_check(l_L_762))).f_NEXT;
}
RT_B_TICK();
} L_end764: ;
if ((!(l_L_762 == NULL)))
{
l_N_758 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_758))).f_NAME, ((*(R17 *)rt_nil_check(l_L_762))).f_NAME, 0);
{ R17 * rv765 = l_N_758;
return rv765; }
}
}
}
}
}
}
S_R25(&l_M_759, r_MANIFEST(p_A), 0);
if ((!(l_M_759).f_OK))
{
{
R14 l_SAVED_CODE_766; memset(&l_SAVED_CODE_766, 0, sizeof l_SAVED_CODE_766);
S_R14(&l_SAVED_CODE_766, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R28 l_V_767; memset(&l_V_767, 0, sizeof l_V_767);
S_R28(&l_V_767, r_EXPR(p_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_766, 0);
}
{ R17 * rv768 = p_A;
return rv768; }
}
l_N_758 = r_NEW_NODE(g_N_INT, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
if (((l_M_759).f_V < ((rt_int)0LL)))
{
((*(R17 *)rt_nil_check(l_N_758))).f_IV = rt_neg((l_M_759).f_V);
S_R9(&((*(R17 *)rt_nil_check(l_N_758))).f_NAME, r_NUM(rt_neg((l_M_759).f_V)), 0);
{
R17 * l_U_769; memset(&l_U_769, 0, sizeof l_U_769);
l_U_769 = r_NEW_NODE(g_N_UNOP, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_U_769))).f_NAME, r_MK(rt_str("-", 1)), 0);
((*(R17 *)rt_nil_check(l_U_769))).f_A = l_N_758;
{ R17 * rv770 = l_U_769;
return rv770; }
}
}
((*(R17 *)rt_nil_check(l_N_758))).f_IV = (l_M_759).f_V;
S_R9(&((*(R17 *)rt_nil_check(l_N_758))).f_NAME, r_NUM((l_M_759).f_V), 0);
{ R17 * rv771 = l_N_758;
return rv771; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_REP_CLASS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_772; memset(&l_R_772, 0, sizeof l_R_772);
l_R_772 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
rt_int l_K_773; memset(&l_K_773, 0, sizeof l_K_773);
l_K_773 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
rt_int l_OK_774; memset(&l_OK_774, 0, sizeof l_OK_774);
l_OK_774 = 0;
if ((((*(R17 *)rt_nil_check(l_R_772))).f_KIND == g_TS_GEN))
{
return;
}
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R17 *)rt_nil_check(l_R_772))).f_NAME) == NULL)))
{
return;
}
if ((!(r_LOOKUP(((*(R17 *)rt_nil_check(l_R_772))).f_NAME) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_LOOKUP(((*(R17 *)rt_nil_check(l_R_772))).f_NAME)))).f_KIND == g_Y_GEN))
{
return;
}
}
{
R9 l_N_775; memset(&l_N_775, 0, sizeof l_N_775);
S_R9(&l_N_775, ((*(R17 *)rt_nil_check(l_R_772))).f_NAME, 0);
if ((l_K_773 == g_T_INT))
{
l_OK_774 = (r_TEQS(l_N_775, rt_str("FIXED_STD", 9)) || r_TEQS(l_N_775, rt_str("FIXED_REP", 9)));
}
else if ((l_K_773 == g_T_FLOAT))
{
l_OK_774 = r_TEQS(l_N_775, rt_str("FLOAT_STD", 9));
}
else if ((l_K_773 == g_T_BOOL))
{
l_OK_774 = r_TEQS(l_N_775, rt_str("BOOLEAN_STD", 11));
}
else if ((l_K_773 == g_T_ENUM))
{
l_OK_774 = ((r_TEQS(l_N_775, rt_str("ENUM_STD", 8)) || r_TEQS(l_N_775, rt_str("ENUM_REP", 8))) || r_TEQS(l_N_775, rt_str("ENUM_VAL_REP", 12)));
}
else if ((l_K_773 == g_T_STR))
{
l_OK_774 = (r_TEQS(l_N_775, rt_str("CHAR_STR_STD", 12)) || r_TEQS(l_N_775, rt_str("CHAR_STR_REP", 12)));
}
else if ((l_K_773 == g_T_BITS))
{
l_OK_774 = r_TEQS(l_N_775, rt_str("BIT_STD", 7));
}
else if ((l_K_773 == g_T_ARR))
{
l_OK_774 = (r_TEQS(l_N_775, rt_str("ARRAY_STD", 9)) || r_TEQS(l_N_775, rt_str("ARRAY_REP", 9)));
}
else if ((l_K_773 == g_T_REC))
{
l_OK_774 = (r_TEQS(l_N_775, rt_str("RECORD_STD", 10)) || r_TEQS(l_N_775, rt_str("RECORD_REP", 10)));
}
else if ((l_K_773 == g_T_PTR))
{
l_OK_774 = r_TEQS(l_N_775, rt_str("PTR_STD", 7));
}
else if ((l_K_773 == g_T_SEM))
{
l_OK_774 = r_TEQS(l_N_775, rt_str("SEMAPHORE_STD", 13));
}
else if ((l_K_773 == g_T_TYPE))
{
l_OK_774 = 1;
}
if ((!l_OK_774))
{
r_FAILT(p_LINE, rt_str("the representation does not suit the type class (3.12.4): ", 58), l_N_775);
}
if (r_TEQS(l_N_775, rt_str("FIXED_REP", 9)))
{
r_CHECK_FIXED_REP(p_T, p_LINE);
}
}
}
static rt_int r_POW2(rt_int p_N) { RT_B_TICK(); 
rt_int l_P_776; memset(&l_P_776, 0, sizeof l_P_776);
l_P_776 = ((rt_int)1LL);
{ rt_int it778_lo = ((rt_int)1LL), it778_hi = p_N;
for (rt_int it778 = it778_lo; it778 <= it778_hi; it778++) {
{
l_P_776 = rt_mul(l_P_776, ((rt_int)2LL));
}
RT_B_TICK();
if (it778 == it778_hi) break;
} } L_end777: ;
{ rt_int rv779 = l_P_776;
return rv779; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_780; memset(&l_R_780, 0, sizeof l_R_780);
l_R_780 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
rt_int l_UNSIGNED_781; memset(&l_UNSIGNED_781, 0, sizeof l_UNSIGNED_781);
l_UNSIGNED_781 = 0;
if ((((*(R17 *)rt_nil_check(l_R_780))).f_A == NULL))
{
r_FAIL(p_LINE, rt_str("FIXED_REP takes a size and a signing (3.2.3 [3-55])", 51));
}
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_780))).f_A))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_780))).f_A))).f_KIND == g_N_DONTCARE)))
{
return;
}
{
R25 l_N_782; memset(&l_N_782, 0, sizeof l_N_782);
S_R25(&l_N_782, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_780))).f_A), 0);
if ((!(l_N_782).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of FIXED_REP is a manifest integer (3.2.3 [3-56])", 58));
}
if ((((l_N_782).f_V < ((rt_int)0LL)) || ((l_N_782).f_V > ((*(R7 *)rt_nil_check(g_W))).f_WORD)))
{
r_FAIL(p_LINE, rt_str("the size of FIXED_REP is in [0:P], P the default size (3.2.3)", 61));
}
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_780))).f_A))).f_NEXT == NULL)))
{
{
R17 * l_S_783; memset(&l_S_783, 0, sizeof l_S_783);
l_S_783 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_780))).f_A))).f_NEXT;
if (((((*(R17 *)rt_nil_check(l_S_783))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_S_783))).f_KIND == g_N_DONTCARE)))
{
return;
}
if ((!(((((((*(R17 *)rt_nil_check(l_S_783))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_S_783))).f_KIND == g_N_ENUMLIT))) && ((r_TEQS(((*(R17 *)rt_nil_check(l_S_783))).f_NAME, rt_str("SIGNED", 6)) || r_TEQS(((*(R17 *)rt_nil_check(l_S_783))).f_NAME, rt_str("UNSIGNED", 8))))))))
{
r_FAIL(p_LINE, rt_str("the signing of FIXED_REP is a manifest value of SIGNING (3.2.3 [3-57])", 70));
}
l_UNSIGNED_781 = r_TEQS(((*(R17 *)rt_nil_check(l_S_783))).f_NAME, rt_str("UNSIGNED", 8));
if ((!(((*(R17 *)rt_nil_check(l_S_783))).f_NEXT == NULL)))
{
r_FAIL(p_LINE, rt_str("FIXED_REP takes a size and a signing (3.2.3 [3-55])", 51));
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_REPCONV)
{
return;
}
if (l_UNSIGNED_781)
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
if ((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) && ((l_N_782).f_V < ((*(R7 *)rt_nil_check(g_W))).f_WORD)))
{
r_FAIL(p_LINE, rt_str("the range of the type exceeds what the size of FIXED_REP represents (3.2.3)", 75));
}
if (((((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK) && ((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN > ((rt_int)0LL))) && ((l_N_782).f_V < ((rt_int)63LL))))
{
{
rt_int l_LO_784; memset(&l_LO_784, 0, sizeof l_LO_784);
l_LO_784 = ((rt_int)0LL);
rt_int l_HI_785; memset(&l_HI_785, 0, sizeof l_HI_785);
l_HI_785 = ((rt_int)0LL);
if (l_UNSIGNED_781)
{
l_HI_785 = rt_sub(r_POW2((l_N_782).f_V), ((rt_int)1LL));
}
else if (((l_N_782).f_V > ((rt_int)0LL)))
{
l_LO_784 = rt_neg(r_POW2(rt_sub((l_N_782).f_V, ((rt_int)1LL))));
l_HI_785 = rt_sub(r_POW2(rt_sub((l_N_782).f_V, ((rt_int)1LL))), ((rt_int)1LL));
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_V < l_LO_784) || ((((*(R22 *)rt_nil_check(p_T))).f_MHI).f_V > l_HI_785)))
{
r_FAIL(p_LINE, rt_str("the range of the type exceeds what the size of FIXED_REP represents (3.2.3)", 75));
}
}
}
}
}
static R22 * r_TYPE_ATTR_TYPE(R17 * p_E) { RT_B_TICK(); 
R22 * l_T_786; memset(&l_T_786, 0, sizeof l_T_786);
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type-valued attribute expected", 32));
}
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_IS_TYPE_ATTR(((*(R17 *)rt_nil_check(p_E))).f_A)))
{
l_T_786 = r_TYPE_ATTR_TYPE(((*(R17 *)rt_nil_check(p_E))).f_A);
}
else
{
{
R14 l_SAVED_CODE_787; memset(&l_SAVED_CODE_787, 0, sizeof l_SAVED_CODE_787);
S_R14(&l_SAVED_CODE_787, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
l_T_786 = (r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(p_E))).f_A)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_787, 0);
}
}
{
R22 * l_R_788; memset(&l_R_788, 0, sizeof l_R_788);
l_R_788 = r_REAL_TYPE(l_T_786);
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)))
{
if ((((*(R22 *)rt_nil_check(l_R_788))).f_KIND == g_T_ARR))
{
{ R22 * rv789 = ((*(R22 *)rt_nil_check(l_R_788))).f_ELEM;
return rv789; }
}
else if ((((*(R22 *)rt_nil_check(l_R_788))).f_KIND == g_T_PTR))
{
{ R22 * rv790 = r_TARGET(l_R_788);
return rv790; }
}
}
else if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7)) && (((*(R22 *)rt_nil_check(l_R_788))).f_KIND == g_T_STR)))
{
{ R22 * rv791 = r_CHARSET_OF(l_R_788);
return rv791; }
}
if ((((*(R22 *)rt_nil_check(l_R_788))).f_KIND == g_T_REC))
{
{
R12 * l_C_792; memset(&l_C_792, 0, sizeof l_C_792);
l_C_792 = r_RECORD_CLASS_OF(l_R_788);
if ((!(l_C_792 == NULL)))
{
{
R21 * l_B_793; memset(&l_B_793, 0, sizeof l_B_793);
l_B_793 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_792))).f_BINDINGS, ((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_793 == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(l_B_793))).f_T == NULL)))
{
{ R22 * rv794 = ((*(R21 *)rt_nil_check(l_B_793))).f_T;
return rv794; }
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
{ rt_int rv795 = 0;
return rv795; }
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7))))
{
{ rt_int rv796 = 1;
return rv796; }
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_797; memset(&l_Y_797, 0, sizeof l_Y_797);
l_Y_797 = r_LOOKUP(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME);
if ((!(l_Y_797 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_797))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_797))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_797))).f_T == NULL))))
{
{
R22 * l_R_798; memset(&l_R_798, 0, sizeof l_R_798);
l_R_798 = r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_797))).f_T);
if ((((*(R22 *)rt_nil_check(l_R_798))).f_KIND == g_T_REC))
{
{
R12 * l_C_799; memset(&l_C_799, 0, sizeof l_C_799);
l_C_799 = r_RECORD_CLASS_OF(l_R_798);
if ((!(l_C_799 == NULL)))
{
if ((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_799))).f_BINDINGS, ((*(R17 *)rt_nil_check(p_E))).f_NAME) == NULL)))
{
{ rt_int rv800 = 1;
return rv800; }
}
}
}
}
}
}
}
}
}
{ rt_int rv801 = 0;
return rv801; }
rt_raise(RT_X_INIT);
}
static R22 * r_GEN_TYPE(R17 * p_TS) { RT_B_TICK(); 
R21 * l_B_802; memset(&l_B_802, 0, sizeof l_B_802);
l_B_802 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_802 == NULL)) goto L_end803;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_802))).f_NAME, ((*(R17 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R21 *)rt_nil_check(l_B_802))).f_T == NULL))))
{
{ R22 * rv804 = ((*(R21 *)rt_nil_check(l_B_802))).f_T;
return rv804; }
}
l_B_802 = ((*(R21 *)rt_nil_check(l_B_802))).f_NEXT;
}
RT_B_TICK();
} L_end803: ;
{
R12 * l_Y_805; memset(&l_Y_805, 0, sizeof l_Y_805);
l_Y_805 = r_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_805 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_805))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_805))).f_T == NULL))))
{
{ R22 * rv806 = ((*(R12 *)rt_nil_check(l_Y_805))).f_T;
return rv806; }
}
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a derived generic type outside a formal parameter list: \?", 57), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_PREDEFINED(R17 * p_TS) { RT_B_TICK(); 
R9 l_NAME_807; memset(&l_NAME_807, 0, sizeof l_NAME_807);
S_R9(&l_NAME_807, ((*(R17 *)rt_nil_check(p_TS))).f_NAME, 0);
R22 * l_T_808; memset(&l_T_808, 0, sizeof l_T_808);
if (r_TEQS(l_NAME_807, rt_str("FIXED", 5)))
{
{
R25 l_S_809; memset(&l_S_809, 0, sizeof l_S_809);
S_R25(&l_S_809, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R25 l_R_810; memset(&l_R_810, 0, sizeof l_R_810);
S_R25(&l_R_810, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
R17 * l_P_811; memset(&l_P_811, 0, sizeof l_P_811);
l_P_811 = r_NTH_ARG(p_TS, ((rt_int)2LL));
r_TYPE_ARG_COUNT(p_TS, ((rt_int)3LL));
if ((!((l_R_810).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("only radix 2 is predefined (3.2.1)", 34));
}
r_CHECK_PRECISION_ARG(l_P_811, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
if (((l_S_809).f_V == ((rt_int)0LL)))
{
{ R22 * rv812 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv812; }
}
l_T_808 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_808))).f_SCALE = (l_S_809).f_V;
{ R22 * rv813 = l_T_808;
return rv813; }
}
}
else if (r_TEQS(l_NAME_807, rt_str("FLOAT", 5)))
{
{
R25 l_P_814; memset(&l_P_814, 0, sizeof l_P_814);
S_R25(&l_P_814, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
l_T_808 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_808))).f_SCALE = (l_P_814).f_V;
{ R22 * rv815 = l_T_808;
return rv815; }
}
}
else if (r_TEQS(l_NAME_807, rt_str("BIT", 3)))
{
l_T_808 = r_NEW_TYP(g_T_BITS);
r_STRING_LENGTH(l_T_808, r_NTH_ARG(p_TS, ((rt_int)0LL)));
{ R22 * rv816 = l_T_808;
return rv816; }
}
else if ((r_TEQS(l_NAME_807, rt_str("CHAR_STR", 8)) || r_TEQS(l_NAME_807, rt_str("ASCII_STR", 9))))
{
l_T_808 = r_NEW_TYP(g_T_STR);
r_STRING_LENGTH(l_T_808, r_NTH_ARG(p_TS, ((rt_int)0LL)));
((*(R22 *)rt_nil_check(l_T_808))).f_BASE = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
if (r_TEQS(l_NAME_807, rt_str("CHAR_STR", 8)))
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)2LL));
{
R17 * l_CS_817; memset(&l_CS_817, 0, sizeof l_CS_817);
l_CS_817 = r_NTH_ARG(p_TS, ((rt_int)1LL));
R22 * l_C_818; memset(&l_C_818, 0, sizeof l_C_818);
if (((((*(R17 *)rt_nil_check(l_CS_817))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_CS_817))).f_KIND == g_N_DONTCARE)))
{
((*(R22 *)rt_nil_check(l_T_808))).f_BASE = NULL;
{ R22 * rv819 = l_T_808;
return rv819; }
}
if (((((*(R17 *)rt_nil_check(l_CS_817))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(l_CS_817))).f_NAME, rt_str("CHARSET", 7))))
{
{
R14 l_SAVED_CODE_820; memset(&l_SAVED_CODE_820, 0, sizeof l_SAVED_CODE_820);
S_R14(&l_SAVED_CODE_820, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R28 l_V_821; memset(&l_V_821, 0, sizeof l_V_821);
S_R28(&l_V_821, r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(l_CS_817))).f_A), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_820, 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_821).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("CHARSET is an attribute of character strings (3.7.1)", 52));
}
((*(R22 *)rt_nil_check(l_T_808))).f_BASE = r_CHARSET_OF((l_V_821).f_T);
}
{ R22 * rv822 = l_T_808;
return rv822; }
}
l_C_818 = r_REAL_TYPE(r_ARG_TYPE(l_CS_817));
if ((!(((*(R22 *)rt_nil_check(l_C_818))).f_KIND == g_T_ENUM)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset must be an enumerated type (3.7.1)", 44));
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_818))).f_BASE))).f_UNORDERED || (!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_818))).f_BASE))).f_LITS))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset is an ordered enumerated type with a literal \\'C' (3.7.1, 3.7.2)", 74));
}
((*(R22 *)rt_nil_check(l_T_808))).f_BASE = ((*(R22 *)rt_nil_check(l_C_818))).f_BASE;
}
}
else
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
}
{ R22 * rv823 = l_T_808;
return rv823; }
}
else if (r_TEQS(l_NAME_807, rt_str("PTR", 3)))
{
l_T_808 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_T_808))).f_TARGET_TS = r_NTH_ARG(p_TS, ((rt_int)0LL));
{ R22 * rv824 = l_T_808;
return rv824; }
}
else if (r_TEQS(l_NAME_807, rt_str("SEMAPHORE", 9)))
{
l_T_808 = r_NEW_TYP(g_T_SEM);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
{
R17 * l_U_825; memset(&l_U_825, 0, sizeof l_U_825);
l_U_825 = r_NTH_ARG(p_TS, ((rt_int)0LL));
R22 * l_UT_826; memset(&l_UT_826, 0, sizeof l_UT_826);
l_UT_826 = r_RESOLVE_USER_NAME(r_MK(rt_str("USAGE", 5)), ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
R25 l_M_827; memset(&l_M_827, 0, sizeof l_M_827);
S_R25(&l_M_827, r_NO_MVAL(), 0);
if (((((*(R17 *)rt_nil_check(l_U_825))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_U_825))).f_KIND == g_N_DONTCARE)))
{
S_R25(&l_M_827, r_SOME(((rt_int)0LL)), 0);
}
else if (((((((*(R17 *)rt_nil_check(l_U_825))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_U_825))).f_KIND == g_N_ENUMLIT))) && (!(r_FIND_LITERAL(((*(R17 *)rt_nil_check(l_U_825))).f_NAME, l_UT_826) == NULL))))
{
S_R25(&l_M_827, r_ENUM_MANIFEST(l_U_825, l_UT_826), 0);
}
else
{
{
R14 l_SAVED_CODE_828; memset(&l_SAVED_CODE_828, 0, sizeof l_SAVED_CODE_828);
S_R14(&l_SAVED_CODE_828, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R28 l_V_829; memset(&l_V_829, 0, sizeof l_V_829);
S_R28(&l_V_829, r_EXPR(l_U_825, l_UT_826), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_828, 0);
if (r_SAME_CLASS(r_REAL_TYPE((l_V_829).f_T), r_REAL_TYPE(l_UT_826)))
{
S_R25(&l_M_827, r_MANIFEST(l_U_825), 0);
}
}
}
if ((!(l_M_827).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("the use mode is a manifest value of USAGE, SYNCH or REGION (3.11.1)", 67));
}
((*(R22 *)rt_nil_check(l_T_808))).f_SCALE = (l_M_827).f_V;
}
{ R22 * rv830 = l_T_808;
return rv830; }
}
{ R22 * rv831 = NULL;
return rv831; }
rt_raise(RT_X_INIT);
}
static void r_TYPE_ARG_COUNT(R17 * p_TS, rt_int p_N) { RT_B_TICK(); 
if ((!(r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_TS))).f_A) == p_N)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("the wrong number of arguments for the type ", 43), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
}
static R25 r_MANIFEST_INTEGER_ARG(R17 * p_A, rstr p_WHAT, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
R25 l_M_832; memset(&l_M_832, 0, sizeof l_M_832);
S_R25(&l_M_832, r_MANIFEST(p_A), 0);
if ((!(l_M_832).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" must be manifest (3.2.1, 3.3.1)", 32)));
}
if ((((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) && (!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))) && (!r_BOUND_NAME(p_A))))
{
{
R14 l_SAVED_CODE_833; memset(&l_SAVED_CODE_833, 0, sizeof l_SAVED_CODE_833);
S_R14(&l_SAVED_CODE_833, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R22 * l_T_834; memset(&l_T_834, 0, sizeof l_T_834);
l_T_834 = (r_EXPR(p_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_833, 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_T_834)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_834))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is an integer (3.2.1, 3.3.1)", 29)));
}
}
}
if ((((l_M_832).f_V < p_LO) || ((l_M_832).f_V > p_HI)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is out of the range of the attribute (3.2.1, 3.3.1)", 52)));
}
{ R25 rv835 = l_M_832;
return rv835; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOUND_NAME(R17 * p_A) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv836 = 0;
return rv836; }
}
{ rt_int rv837 = (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R17 *)rt_nil_check(p_A))).f_NAME) == NULL));
return rv837; }
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
R12 * l_Y_838; memset(&l_Y_838, 0, sizeof l_Y_838);
l_Y_838 = r_LOOKUP(((*(R17 *)rt_nil_check(p_P))).f_NAME);
if ((!(l_Y_838 == NULL)))
{
if ((((((*(R12 *)rt_nil_check(l_Y_838))).f_KIND == g_Y_GEN) || (((*(R12 *)rt_nil_check(l_Y_838))).f_KIND == g_Y_CONST)) || (((((*(R12 *)rt_nil_check(l_Y_838))).f_KIND == g_Y_TYPE) && (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R17 *)rt_nil_check(p_P))).f_NAME) == NULL))))))
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
R17 * l_R_839; memset(&l_R_839, 0, sizeof l_R_839);
l_R_839 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
R9 l_NAME_840; memset(&l_NAME_840, 0, sizeof l_NAME_840);
S_R9(&l_NAME_840, ((*(R17 *)rt_nil_check(l_R_839))).f_NAME, 0);
if ((((*(R17 *)rt_nil_check(l_R_839))).f_KIND == g_TS_GEN))
{
return;
}
if ((r_TEQS(l_NAME_840, rt_str("ENUM_STD", 8)) || (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, l_NAME_840) == NULL))))
{
return;
}
if ((!((r_TEQS(l_NAME_840, rt_str("ENUM_REP", 8)) || r_TEQS(l_NAME_840, rt_str("ENUM_VAL_REP", 12))))))
{
if ((!(r_ORIG_LOOKUP(l_NAME_840) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(l_NAME_840)))).f_KIND == g_Y_REPTYPE))
{
return;
}
}
r_FAILT(p_LINE, rt_str("not a representation of an enumerated type (3.4.3): ", 52), l_NAME_840);
}
if ((((*(R17 *)rt_nil_check(l_R_839))).f_A == NULL))
{
r_FAILT(p_LINE, rt_str("the size of the representation is missing: ", 43), l_NAME_840);
}
{
R25 l_N_841; memset(&l_N_841, 0, sizeof l_N_841);
S_R25(&l_N_841, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_839))).f_A), 0);
rt_int l_NL_842; memset(&l_NL_842, 0, sizeof l_NL_842);
l_NL_842 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS;
if ((!(l_N_841).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is manifest (3.4.3)", 60));
}
if ((((l_N_841).f_V > ((rt_int)64LL)) || ((l_N_841).f_V < ((rt_int)0LL))))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is in [0:(FIXED.SIZE).MAX] (3.4.3)", 75));
}
if (r_TEQS(l_NAME_840, rt_str("ENUM_REP", 8)))
{
if ((!(((*(R17 *)rt_nil_check(l_R_839))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("VALUES belong to ENUM_VAL_REP (3.4.3)", 37));
}
if (((l_N_841).f_V < r_BITS_FOR(l_NL_842)))
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
R17 * l_L_843; memset(&l_L_843, 0, sizeof l_L_843);
l_L_843 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
for (;;) {
if ((l_L_843 == NULL)) goto L_end844;
{
{
R17 * l_V_845; memset(&l_V_845, 0, sizeof l_V_845);
l_V_845 = ((*(R17 *)rt_nil_check(l_R_839))).f_B;
rt_int l_FOUND_846; memset(&l_FOUND_846, 0, sizeof l_FOUND_846);
l_FOUND_846 = ((rt_int)0LL);
for (;;) {
if ((l_V_845 == NULL)) goto L_end847;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_V_845))).f_NAME, ((*(R17 *)rt_nil_check(l_L_843))).f_NAME))
{
l_FOUND_846 = rt_add(l_FOUND_846, ((rt_int)1LL));
}
l_V_845 = ((*(R17 *)rt_nil_check(l_V_845))).f_NEXT;
}
RT_B_TICK();
} L_end847: ;
if ((!(l_FOUND_846 == ((rt_int)1LL))))
{
r_FAILT(p_LINE, rt_str("VALUES must give every literal once (3.4.3): ", 45), ((*(R17 *)rt_nil_check(l_L_843))).f_NAME);
}
}
l_L_843 = ((*(R17 *)rt_nil_check(l_L_843))).f_NEXT;
}
RT_B_TICK();
} L_end844: ;
}
{
R17 * l_V_848; memset(&l_V_848, 0, sizeof l_V_848);
l_V_848 = ((*(R17 *)rt_nil_check(l_R_839))).f_B;
for (;;) {
if ((l_V_848 == NULL)) goto L_end849;
{
if ((r_FIND_LITERAL(((*(R17 *)rt_nil_check(l_V_848))).f_NAME, ((*(R22 *)rt_nil_check(p_T))).f_BASE) == NULL))
{
r_FAILT(p_LINE, rt_str("not a literal of the type: ", 27), ((*(R17 *)rt_nil_check(l_V_848))).f_NAME);
}
{
R14 l_SAVED_CODE_850; memset(&l_SAVED_CODE_850, 0, sizeof l_SAVED_CODE_850);
S_R14(&l_SAVED_CODE_850, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R28 l_B_851; memset(&l_B_851, 0, sizeof l_B_851);
S_R28(&l_B_851, r_EXPR(((*(R17 *)rt_nil_check(l_V_848))).f_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_850, 0);
if ((!(((*(R22 *)rt_nil_check((l_B_851).f_T))).f_KIND == g_T_BITS)))
{
r_FAIL(p_LINE, rt_str("a representation in VALUES is a bitstring (3.4.3)", 49));
}
if ((((*(R22 *)rt_nil_check((l_B_851).f_T))).f_MLEN).f_OK)
{
if ((!((((*(R22 *)rt_nil_check((l_B_851).f_T))).f_MLEN).f_V == (l_N_841).f_V)))
{
r_FAILT(p_LINE, rt_str("the representation must have SIZE bits (3.4.3): ", 48), ((*(R17 *)rt_nil_check(l_V_848))).f_NAME);
}
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_848))).f_A))).f_KIND == g_N_BITS))
{
{
R17 * l_U_852; memset(&l_U_852, 0, sizeof l_U_852);
l_U_852 = ((*(R17 *)rt_nil_check(l_V_848))).f_NEXT;
for (;;) {
if ((l_U_852 == NULL)) goto L_end853;
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_852))).f_A))).f_KIND == g_N_BITS))
{
if (r_TEQ(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_852))).f_A))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_848))).f_A))).f_NAME))
{
r_FAILT(p_LINE, rt_str("two literals have the same representation (3.4.3): ", 51), ((*(R17 *)rt_nil_check(l_U_852))).f_NAME);
}
}
l_U_852 = ((*(R17 *)rt_nil_check(l_U_852))).f_NEXT;
}
RT_B_TICK();
} L_end853: ;
}
}
}
l_V_848 = ((*(R17 *)rt_nil_check(l_V_848))).f_NEXT;
}
RT_B_TICK();
} L_end849: ;
}
}
}
static void r_STRING_LENGTH(R22 * p_T, R17 * p_A) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
{
R21 * l_B_854; memset(&l_B_854, 0, sizeof l_B_854);
l_B_854 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_854 == NULL)) goto L_end855;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_854))).f_NAME, ((*(R17 *)rt_nil_check(p_A))).f_NAME) && ((((*(R21 *)rt_nil_check(l_B_854))).f_C).f_LEN > ((rt_int)0LL))))
{
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, ((*(R21 *)rt_nil_check(l_B_854))).f_C, 0);
S_R25(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, ({ R25 rc856; memset(&rc856, 0, sizeof rc856);  rc856.f_OK = ((*(R21 *)rt_nil_check(l_B_854))).f_HASMV; rc856.f_V = ((*(R21 *)rt_nil_check(l_B_854))).f_MV; rc856; }), 0);
return;
}
l_B_854 = ((*(R21 *)rt_nil_check(l_B_854))).f_NEXT;
}
RT_B_TICK();
} L_end855: ;
}
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_GEN, ((*(R17 *)rt_nil_check(p_A))).f_NAME, 0);
return;
}
else if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return;
}
{
R9 l_C_857; memset(&l_C_857, 0, sizeof l_C_857);
R25 l_M_858; memset(&l_M_858, 0, sizeof l_M_858);
r_ATTR_VALUE(p_A, &l_C_857, &l_M_858);
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, l_C_857, 0);
S_R25(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, l_M_858, 0);
((*(R22 *)rt_nil_check(p_T))).f_RLEVEL = r_CUR_LEVEL();
}
}
static R22 * r_RESOLVE_ARRAY(R17 * p_TS) { RT_B_TICK(); 
R22 * l_T_859; memset(&l_T_859, 0, sizeof l_T_859);
l_T_859 = r_NEW_TYP(g_T_ARR);
R17 * l_R_860; memset(&l_R_860, 0, sizeof l_R_860);
l_R_860 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R27 * l_TAIL_861; memset(&l_TAIL_861, 0, sizeof l_TAIL_861);
l_TAIL_861 = NULL;
for (;;) {
if ((l_R_860 == NULL)) goto L_end862;
{
{
R27 * l_B_863; memset(&l_B_863, 0, sizeof l_B_863);
l_B_863 = ({ R27 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
R28 l_LO_864; memset(&l_LO_864, 0, sizeof l_LO_864);
R28 l_HI_865; memset(&l_HI_865, 0, sizeof l_HI_865);
if (r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_860))).f_A))
{
S_R28(&l_LO_864, r_MKET(r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_860))).f_A))).f_NAME), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R28(&l_LO_864, r_EXPR(((*(R17 *)rt_nil_check(l_R_860))).f_A, NULL), 0);
}
if (r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_860))).f_B))
{
S_R28(&l_HI_865, r_MKET(r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_860))).f_B))).f_NAME), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R28(&l_HI_865, r_EXPR(((*(R17 *)rt_nil_check(l_R_860))).f_B, (l_LO_864).f_T), 0);
}
S_R27(&(*(R27 *)rt_nil_check(l_B_863)), ({ R27 rc866; memset(&rc866, 0, sizeof rc866);  S_R9(&rc866.f_LO, (l_LO_864).f_C, 0); S_R9(&rc866.f_HI, (l_HI_865).f_C, 0); S_R25(&rc866.f_MLO, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_860))).f_A), 0); S_R25(&rc866.f_MHI, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_860))).f_B), 0); rc866.f_ANYARG = 0; rc866.f_NEXT = NULL; rc866; }), 0);
if (((!r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_860))).f_A)) && (!r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_860))).f_B))))
{
if ((!r_SAME_CLASS(r_REAL_TYPE((l_LO_864).f_T), r_REAL_TYPE((l_HI_865).f_T))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_860))).f_LINE, rt_str("the bounds of an array-bound are of one type class (3.8.1)", 58));
}
S_R9(&((*(R27 *)rt_nil_check(l_B_863))).f_LO, r_INDEX_OF(l_LO_864, ((*(R17 *)rt_nil_check(l_R_860))).f_LINE), 0);
S_R9(&((*(R27 *)rt_nil_check(l_B_863))).f_HI, r_INDEX_OF(l_HI_865, ((*(R17 *)rt_nil_check(l_R_860))).f_LINE), 0);
}
if (((((*(R22 *)rt_nil_check((l_LO_864).f_T))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check((l_LO_864).f_T))).f_KIND == g_T_ABS)))
{
S_R25(&((*(R27 *)rt_nil_check(l_B_863))).f_MLO, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_R_860))).f_A, (l_LO_864).f_T), 0);
S_R25(&((*(R27 *)rt_nil_check(l_B_863))).f_MHI, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_R_860))).f_B, (l_LO_864).f_T), 0);
if ((!r_TEQ(((*(R27 *)rt_nil_check(l_B_863))).f_LO, (l_LO_864).f_C)))
{
S_R25(&((*(R27 *)rt_nil_check(l_B_863))).f_MLO, r_NO_MVAL(), 0);
S_R25(&((*(R27 *)rt_nil_check(l_B_863))).f_MHI, r_NO_MVAL(), 0);
}
}
else if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_LO_864).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_860))).f_LINE, rt_str("array bounds are integer or enumerated (3.8.1)", 46));
}
if ((l_TAIL_861 == NULL))
{
((*(R22 *)rt_nil_check(l_T_859))).f_BOUNDS = l_B_863;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_861))).f_NEXT = l_B_863;
}
l_TAIL_861 = l_B_863;
((*(R22 *)rt_nil_check(l_T_859))).f_DIMS = rt_add(((*(R22 *)rt_nil_check(l_T_859))).f_DIMS, ((rt_int)1LL));
}
l_R_860 = ((*(R17 *)rt_nil_check(l_R_860))).f_NEXT;
}
RT_B_TICK();
} L_end862: ;
((*(R22 *)rt_nil_check(l_T_859))).f_RLEVEL = r_CUR_LEVEL();
((*(R22 *)rt_nil_check(l_T_859))).f_ELEM = r_RESOLVE(((*(R17 *)rt_nil_check(p_TS))).f_C);
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_859))).f_ELEM))).f_KIND == g_T_ARR))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("ARRAY ... OF ARRAY is forbidden (3.8.1)", 39));
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_D == NULL)))
{
((*(R22 *)rt_nil_check(l_T_859))).f_REPS = r_EXPAND_REP(((*(R17 *)rt_nil_check(p_TS))).f_D, l_T_859, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
r_CHECK_REP_CLASS(l_T_859, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
S_R9(&((*(R22 *)rt_nil_check(l_T_859))).f_CNAME, r_ARRAY_STRUCT(((*(R22 *)rt_nil_check(l_T_859))).f_ELEM, ((*(R22 *)rt_nil_check(l_T_859))).f_DIMS), 0);
{ R22 * rv867 = l_T_859;
return rv867; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER(R17 * p_TS) { RT_B_TICK(); 
R12 * l_Y_868; memset(&l_Y_868, 0, sizeof l_Y_868);
l_Y_868 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((((*(R17 *)rt_nil_check(p_TS))).f_A == NULL))
{
{
R21 * l_B_869; memset(&l_B_869, 0, sizeof l_B_869);
l_B_869 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_869 == NULL)) goto L_end870;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_869))).f_NAME, ((*(R17 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R21 *)rt_nil_check(l_B_869))).f_T == NULL))))
{
if ((!(r_CUR_GENERIC() == NULL)))
{
if ((r_FIND_BIND(((*(R12 *)rt_nil_check(r_CUR_GENERIC()))).f_BINDINGS, ((*(R17 *)rt_nil_check(p_TS))).f_NAME) == l_B_869))
{
{ R22 * rv871 = r_MARK_GENP(((*(R21 *)rt_nil_check(l_B_869))).f_T, ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
return rv871; }
}
}
{ R22 * rv872 = ((*(R21 *)rt_nil_check(l_B_869))).f_T;
return rv872; }
}
l_B_869 = ((*(R21 *)rt_nil_check(l_B_869))).f_NEXT;
}
RT_B_TICK();
} L_end870: ;
}
}
if ((l_Y_868 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_868))).f_KIND == g_Y_GEN))
{
{ R22 * rv873 = r_GEN_TYPE(p_TS);
return rv873; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_868))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((!r_SEG_VISIBLE(l_Y_868, ((*(R17 *)rt_nil_check(p_TS))).f_LINE)))
{
}
if ((((*(R12 *)rt_nil_check(l_Y_868))).f_DECL == NULL))
{
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
{ R22 * rv874 = ((*(R12 *)rt_nil_check(l_Y_868))).f_T;
return rv874; }
}
{
R17 * l_D_875; memset(&l_D_875, 0, sizeof l_D_875);
l_D_875 = ((*(R12 *)rt_nil_check(l_Y_868))).f_DECL;
R22 * l_T_876; memset(&l_T_876, 0, sizeof l_T_876);
if ((((*(R17 *)rt_nil_check(l_D_875))).f_A == NULL))
{
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_868))).f_T == NULL))
{
if (((*(R12 *)rt_nil_check(l_Y_868))).f_BUSY)
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R12 *)rt_nil_check(l_Y_868))).f_BUSY = 1;
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_875))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R12 *)rt_nil_check(l_Y_868))).f_T = r_RESOLVE_RECORD(((*(R17 *)rt_nil_check(l_D_875))).f_B, r_RECORD_NAME(l_Y_868), l_Y_868, NULL);
}
else
{
((*(R12 *)rt_nil_check(l_Y_868))).f_T = r_RESOLVE_IN_DECL(l_Y_868, NULL);
if ((((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_868))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_868))).f_T))).f_KIND == g_T_ENUM))))
{
((*(R12 *)rt_nil_check(l_Y_868))).f_T = r_COPY_TYP(((*(R12 *)rt_nil_check(l_Y_868))).f_T);
}
}
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_868))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_868))).f_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_868))).f_NAME, 0);
}
((*(R12 *)rt_nil_check(l_Y_868))).f_BUSY = 0;
}
l_T_876 = ((*(R12 *)rt_nil_check(l_Y_868))).f_T;
}
else
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_875))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_876 = r_RECORD_INSTANCE(l_Y_868, p_TS);
}
else
{
l_T_876 = r_RESOLVE_IN_DECL(l_Y_868, p_TS);
}
}
{ R22 * rv877 = r_ABSTRACT_VIEW(l_Y_868, l_T_876);
return rv877; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ABSTRACT_VIEW(R12 * p_Y, R22 * p_T) { RT_B_TICK(); 
R22 * l_A_878; memset(&l_A_878, 0, sizeof l_A_878);
if (((((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL) || (!((*(R12 *)rt_nil_check(p_Y))).f_EXPORTED)))
{
{ R22 * rv879 = p_T;
return rv879; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ R22 * rv880 = p_T;
return rv880; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
if (r_EXPORTS_ORDER(p_Y))
{
{ R22 * rv881 = p_T;
return rv881; }
}
l_A_878 = r_COPY_TYP(p_T);
((*(R22 *)rt_nil_check(l_A_878))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_878))).f_DECL = p_Y;
{ R22 * rv882 = l_A_878;
return rv882; }
}
l_A_878 = r_NEW_TYP(g_T_ABS);
((*(R22 *)rt_nil_check(l_A_878))).f_BASE = p_T;
S_R9(&((*(R22 *)rt_nil_check(l_A_878))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R22 *)rt_nil_check(l_A_878))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_878))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_A_878))).f_ARGS = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
{ R22 * rv883 = l_A_878;
return rv883; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTS_ORDER(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv884 = (((((r_EXPORTS_OP(p_Y, rt_str("LESS_THAN_", 10)) && r_EXPORTS_OP(p_Y, rt_str("LESS_EQUAL_", 11))) && r_EXPORTS_OP(p_Y, rt_str("GREATER_THAN_", 13))) && r_EXPORTS_OP(p_Y, rt_str("GREATER_EQUAL_", 14))) && r_EXPORTS_OP(p_Y, rt_str("SUCC", 4))) && r_EXPORTS_OP(p_Y, rt_str("PRED", 4)));
return rv884; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTS_OP(R12 * p_Y, rstr p_OP) { RT_B_TICK(); 
R12 * l_R_885; memset(&l_R_885, 0, sizeof l_R_885);
l_R_885 = ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_MODL))).f_MEMBERS;
for (;;) {
if ((l_R_885 == NULL)) goto L_end886;
{
if ((((((*(R12 *)rt_nil_check(l_R_885))).f_KIND == g_Y_ROUTINE) && ((*(R12 *)rt_nil_check(l_R_885))).f_EXPORTED) && r_TEQ(((*(R12 *)rt_nil_check(l_R_885))).f_PREFIX, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)))
{
if (r_TEQS(r_BASE_NAME(r_ORIGINAL(l_R_885)), p_OP))
{
{ rt_int rv887 = 1;
return rv887; }
}
}
l_R_885 = ((*(R12 *)rt_nil_check(l_R_885))).f_SNEXT;
}
RT_B_TICK();
} L_end886: ;
{ rt_int rv888 = 0;
return rv888; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_UNORDERED(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))
{
{ rt_int rv889 = 0;
return rv889; }
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_UNORDERED)
{
{ rt_int rv890 = 1;
return rv890; }
}
if (((!(((*(R22 *)rt_nil_check(p_T))).f_DECL == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_MODL == NULL))))
{
{ rt_int rv891 = (!r_IN_MODULE(((*(R22 *)rt_nil_check(p_T))).f_MODL));
return rv891; }
}
{ rt_int rv892 = 0;
return rv892; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_P_893; memset(&l_P_893, 0, sizeof l_P_893);
l_P_893 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_893 == NULL)) goto L_end894;
{
if ((l_P_893 == p_M))
{
{ rt_int rv895 = 1;
return rv895; }
}
l_P_893 = ((*(R12 *)rt_nil_check(l_P_893))).f_MODL;
}
RT_B_TICK();
} L_end894: ;
{ rt_int rv896 = 0;
return rv896; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R17 * p_TS) { RT_B_TICK(); 
R17 * l_D_897; memset(&l_D_897, 0, sizeof l_D_897);
l_D_897 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_898; memset(&l_T_898, 0, sizeof l_T_898);
if ((p_TS == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
l_T_898 = r_RESOLVE(((*(R17 *)rt_nil_check(l_D_897))).f_B);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
{ R22 * rv899 = l_T_898;
return rv899; }
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R17 *)rt_nil_check(l_D_897))).f_A, p_TS);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
l_T_898 = r_RESOLVE(((*(R17 *)rt_nil_check(l_D_897))).f_B);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
r_CLOSE_SCOPE();
{ R22 * rv900 = l_T_898;
return rv900; }
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R17 * p_FORMALS, R17 * p_TS) { RT_B_TICK(); 
R17 * l_F_901; memset(&l_F_901, 0, sizeof l_F_901);
l_F_901 = p_FORMALS;
R17 * l_A_902; memset(&l_A_902, 0, sizeof l_A_902);
l_A_902 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_901 == NULL)) goto L_end903;
{
{
R17 * l_N_904; memset(&l_N_904, 0, sizeof l_N_904);
l_N_904 = ((*(R17 *)rt_nil_check(l_F_901))).f_A;
for (;;) {
if ((l_N_904 == NULL)) goto L_end905;
{
if ((l_A_902 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R17 *)rt_nil_check(l_F_901))).f_B == NULL))
{
{
R12 * l_Y_906; memset(&l_Y_906, 0, sizeof l_Y_906);
l_Y_906 = r_NEW_SYM(g_Y_TYPE, ((*(R17 *)rt_nil_check(l_N_904))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_906))).f_T = r_ARG_TYPE(l_A_902);
r_DEFINE(l_Y_906, ((*(R17 *)rt_nil_check(l_A_902))).f_LINE);
}
}
else
{
{
R12 * l_Y_907; memset(&l_Y_907, 0, sizeof l_Y_907);
l_Y_907 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(l_N_904))).f_NAME);
R9 l_C_908; memset(&l_C_908, 0, sizeof l_C_908);
R25 l_M_909; memset(&l_M_909, 0, sizeof l_M_909);
((*(R12 *)rt_nil_check(l_Y_907))).f_T = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_901))).f_B);
if (((((*(R17 *)rt_nil_check(l_A_902))).f_KIND == g_N_ANY) && (!(((*(R17 *)rt_nil_check(l_F_901))).f_IV == ((rt_int)1LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_902))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
if ((((*(R17 *)rt_nil_check(l_A_902))).f_KIND == g_N_ANY))
{
S_R9(&l_C_908, r_MK(rt_str("ANY", 3)), 0);
S_R25(&l_M_909, r_NO_MVAL(), 0);
}
else if (((((*(R17 *)rt_nil_check(l_A_902))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_A_902))).f_KIND == g_N_DONTCARE)))
{
S_R9(&l_C_908, r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(l_A_902))).f_NAME), 0);
S_R25(&l_M_909, r_NO_MVAL(), 0);
}
else
{
r_ATTR_VALUE(l_A_902, &l_C_908, &l_M_909);
}
if (((((l_M_909).f_OK && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_907))).f_T))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_907))).f_T))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_907))).f_T))).f_SCALE == ((rt_int)0LL))))
{
if ((((l_M_909).f_V < (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_907))).f_T))).f_MLO).f_V) || ((l_M_909).f_V > (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_907))).f_T))).f_MHI).f_V)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_902))).f_LINE, rt_str("the argument is outside the range of the type formal (3.12.2)", 61));
}
}
if ((((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_907))).f_T))).f_KIND == g_T_INT)) && (!r_IS_GEN_TEXT(l_C_908))) && (!(((*(R17 *)rt_nil_check(l_A_902))).f_KIND == g_N_ANY))))
{
S_R9(&l_C_908, (r_EXPR(l_A_902, ((*(R12 *)rt_nil_check(l_Y_907))).f_T)).f_C, 0);
S_R25(&l_M_909, r_ENUM_MANIFEST(l_A_902, ((*(R12 *)rt_nil_check(l_Y_907))).f_T), 0);
}
S_R9(&((*(R12 *)rt_nil_check(l_Y_907))).f_ACCESS, l_C_908, 0);
((*(R12 *)rt_nil_check(l_Y_907))).f_HASMV = (l_M_909).f_OK;
((*(R12 *)rt_nil_check(l_Y_907))).f_MV = (l_M_909).f_V;
((*(R12 *)rt_nil_check(l_Y_907))).f_INPUT = 1;
r_DEFINE(l_Y_907, ((*(R17 *)rt_nil_check(l_A_902))).f_LINE);
}
}
l_A_902 = ((*(R17 *)rt_nil_check(l_A_902))).f_NEXT;
l_N_904 = ((*(R17 *)rt_nil_check(l_N_904))).f_NEXT;
}
RT_B_TICK();
} L_end905: ;
}
l_F_901 = ((*(R17 *)rt_nil_check(l_F_901))).f_NEXT;
}
RT_B_TICK();
} L_end903: ;
if ((!(l_A_902 == NULL)))
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
{ R9 rv910 = ((*(R12 *)rt_nil_check(p_Y))).f_FWD;
return rv910; }
rt_raise(RT_X_INIT);
}
static R22 * r_TARGET(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS);
}
{ R22 * rv911 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET;
return rv911; }
rt_raise(RT_X_INIT);
}
static R9 r_CTYPE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_912; memset(&l_K_912, 0, sizeof l_K_912);
l_K_912 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
{ R9 rv913 = r_MK(rt_str("rt_int", 6));
return rv913; }
}
else if ((l_K_912 == g_T_FLOAT))
{
if (r_IS_D(p_T))
{
{ R9 rv914 = r_MK(rt_str("rt_b_d", 6));
return rv914; }
}
{ R9 rv915 = r_MK(rt_str("double", 6));
return rv915; }
}
else if (((l_K_912 == g_T_STR) || (l_K_912 == g_T_BITS)))
{
{ R9 rv916 = r_MK(rt_str("rstr", 4));
return rv916; }
}
else if (((l_K_912 == g_T_REC) || (l_K_912 == g_T_ARR)))
{
{ R9 rv917 = ((*(R22 *)rt_nil_check(p_T))).f_CNAME;
return rv917; }
}
else if ((l_K_912 == g_T_ABS))
{
{ R9 rv918 = r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv918; }
}
else if ((l_K_912 == g_T_SEM))
{
{ R9 rv919 = r_MK(rt_str("rt_b_sem *", 10));
return rv919; }
}
else if ((l_K_912 == g_T_PATHS))
{
{ R9 rv920 = r_MK(rt_str("rt_b_paths", 10));
return rv920; }
}
else if ((l_K_912 == g_T_VOID))
{
{ R9 rv921 = r_MK(rt_str("void", 4));
return rv921; }
}
else if ((l_K_912 == g_T_PTR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R17 * l_TT_922; memset(&l_TT_922, 0, sizeof l_TT_922);
l_TT_922 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R17 *)rt_nil_check(l_TT_922))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(l_TT_922))).f_A == NULL)))
{
{
R12 * l_Y_923; memset(&l_Y_923, 0, sizeof l_Y_923);
l_Y_923 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(l_TT_922))).f_NAME);
if ((!(l_Y_923 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_923))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_923))).f_DECL == NULL))))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_923))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_923))).f_DECL))).f_A == NULL)))
{
{ R9 rv924 = r_CATS(r_RECORD_NAME(l_Y_923), rt_str(" *", 2));
return rv924; }
}
}
}
}
}
}
}
{ R9 rv925 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv925; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R17 * p_E) { RT_B_TICK(); 
{ rt_int rv926 = ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv926; }
rt_raise(RT_X_INIT);
}
static R26 * r_NEW_FIELD(R9 p_NAME, R22 * p_T, rt_int p_KIND) { RT_B_TICK(); 
R26 * l_F_927; memset(&l_F_927, 0, sizeof l_F_927);
l_F_927 = ({ R26 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R26(&(*(R26 *)rt_nil_check(l_F_927)), ({ R26 rc928; memset(&rc928, 0, sizeof rc928);  S_R9(&rc928.f_NAME, p_NAME, 0); S_R9(&rc928.f_CNAME, r_FMT1(rt_str("f_@", 3), r_CID(p_NAME)), 0); rc928.f_T = p_T; rc928.f_KIND = p_KIND; S_R9(&rc928.f_TAGF, r_NO_TEXT(), 0); rc928.f_LABELS = NULL; rc928.f_NEXT = NULL; rc928; }), 0);
{ R26 * rv929 = l_F_927;
return rv929; }
rt_raise(RT_X_INIT);
}
static R26 * r_FIND_FIELD(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R26 * l_F_930; memset(&l_F_930, 0, sizeof l_F_930);
l_F_930 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_930 == NULL)) goto L_end931;
{
if (r_TEQ(((*(R26 *)rt_nil_check(l_F_930))).f_NAME, p_NAME))
{
{ R26 * rv932 = l_F_930;
return rv932; }
}
l_F_930 = ((*(R26 *)rt_nil_check(l_F_930))).f_NEXT;
}
RT_B_TICK();
} L_end931: ;
{ R26 * rv933 = NULL;
return rv933; }
rt_raise(RT_X_INIT);
}
static R26 * r_FIND_VFIELD(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R26 * l_F_934; memset(&l_F_934, 0, sizeof l_F_934);
l_F_934 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R26 * l_FIRST_935; memset(&l_FIRST_935, 0, sizeof l_FIRST_935);
l_FIRST_935 = NULL;
for (;;) {
if ((l_F_934 == NULL)) goto L_end936;
{
if (r_TEQ(((*(R26 *)rt_nil_check(l_F_934))).f_NAME, p_NAME))
{
if ((l_FIRST_935 == NULL))
{
l_FIRST_935 = l_F_934;
}
if (((((*(R26 *)rt_nil_check(l_F_934))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
{ R26 * rv937 = l_F_934;
return rv937; }
}
{
R25 l_TAGV_938; memset(&l_TAGV_938, 0, sizeof l_TAGV_938);
S_R25(&l_TAGV_938, r_TAG_VALUE(p_T, ((*(R26 *)rt_nil_check(l_F_934))).f_TAGF), 0);
if ((l_TAGV_938).f_OK)
{
if (r_LABELS_HAVE(((*(R26 *)rt_nil_check(l_F_934))).f_LABELS, (l_TAGV_938).f_V, ((*(R26 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R26 *)rt_nil_check(l_F_934))).f_TAGF)))).f_T))
{
{ R26 * rv939 = l_F_934;
return rv939; }
}
}
}
}
l_F_934 = ((*(R26 *)rt_nil_check(l_F_934))).f_NEXT;
}
RT_B_TICK();
} L_end936: ;
{ R26 * rv940 = l_FIRST_935;
return rv940; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R22 * p_T, R26 * p_F, R26 * *p_TAIL) { RT_B_TICK(); 
R26 * l_P_941; memset(&l_P_941, 0, sizeof l_P_941);
l_P_941 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_942; memset(&l_N_942, 0, sizeof l_N_942);
l_N_942 = ((rt_int)0LL);
for (;;) {
if ((l_P_941 == NULL)) goto L_end943;
{
if (r_TEQ(((*(R26 *)rt_nil_check(l_P_941))).f_NAME, ((*(R26 *)rt_nil_check(p_F))).f_NAME))
{
if ((((((((*(R26 *)rt_nil_check(l_P_941))).f_TAGF).f_LEN == ((rt_int)0LL)) || ((((*(R26 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL))) || (!r_TEQ(((*(R26 *)rt_nil_check(l_P_941))).f_TAGF, ((*(R26 *)rt_nil_check(p_F))).f_TAGF))) || (((*(R26 *)rt_nil_check(l_P_941))).f_LABELS == ((*(R26 *)rt_nil_check(p_F))).f_LABELS)))
{
r_FAILT(((rt_int)0LL), rt_str("the field names of a record must be distinct (3.9.1): ", 54), ((*(R26 *)rt_nil_check(p_F))).f_NAME);
}
l_N_942 = rt_add(l_N_942, ((rt_int)1LL));
}
l_P_941 = ((*(R26 *)rt_nil_check(l_P_941))).f_NEXT;
}
RT_B_TICK();
} L_end943: ;
if ((l_N_942 > ((rt_int)0LL)))
{
S_R9(&((*(R26 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R26 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_942)), 0);
}
if (((*p_TAIL) == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_FIELDS = p_F;
}
else
{
((*(R26 *)rt_nil_check((*p_TAIL)))).f_NEXT = p_F;
}
(*p_TAIL) = p_F;
}
static void r_RECORD_FIELDS(R22 * p_T, R17 * p_DECLS, R9 p_TAGN, R17 * p_LABELS, R26 * *p_TAIL) { RT_B_TICK(); 
R17 * l_D_944; memset(&l_D_944, 0, sizeof l_D_944);
l_D_944 = p_DECLS;
for (;;) {
if ((l_D_944 == NULL)) goto L_end945;
{
if ((((*(R17 *)rt_nil_check(l_D_944))).f_KIND == g_N_VAR))
{
{
R22 * l_FT_946; memset(&l_FT_946, 0, sizeof l_FT_946);
l_FT_946 = r_RESOLVE(((*(R17 *)rt_nil_check(l_D_944))).f_B);
R17 * l_N_947; memset(&l_N_947, 0, sizeof l_N_947);
l_N_947 = ((*(R17 *)rt_nil_check(l_D_944))).f_A;
for (;;) {
if ((l_N_947 == NULL)) goto L_end948;
{
{
R26 * l_F_949; memset(&l_F_949, 0, sizeof l_F_949);
l_F_949 = r_NEW_FIELD(((*(R17 *)rt_nil_check(l_N_947))).f_NAME, l_FT_946, ((rt_int)0LL));
S_R9(&((*(R26 *)rt_nil_check(l_F_949))).f_TAGF, p_TAGN, 0);
((*(R26 *)rt_nil_check(l_F_949))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_949, &(*p_TAIL));
if (((r_LOOKUP(((*(R17 *)rt_nil_check(l_N_947))).f_NAME) == NULL) || (!(((*(R12 *)rt_nil_check(r_LOOKUP(((*(R17 *)rt_nil_check(l_N_947))).f_NAME)))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))))
{
{
R12 * l_Y_950; memset(&l_Y_950, 0, sizeof l_Y_950);
l_Y_950 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(l_N_947))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_950))).f_T = l_FT_946;
S_R9(&((*(R12 *)rt_nil_check(l_Y_950))).f_ACCESS, r_FMT1(rt_str("$S.@", 4), ((*(R26 *)rt_nil_check(l_F_949))).f_CNAME), 0);
((*(R12 *)rt_nil_check(l_Y_950))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_Y_950))).f_LEVEL = rt_neg(((rt_int)1LL));
((*(R12 *)rt_nil_check(l_Y_950))).f_OWNER = rt_neg(((rt_int)1LL));
r_DEFINE(l_Y_950, ((*(R17 *)rt_nil_check(l_D_944))).f_LINE);
}
}
}
l_N_947 = ((*(R17 *)rt_nil_check(l_N_947))).f_NEXT;
}
RT_B_TICK();
} L_end948: ;
}
}
else
{
{
R26 * l_TF_951; memset(&l_TF_951, 0, sizeof l_TF_951);
l_TF_951 = r_FIND_FIELD(p_T, ((*(R17 *)rt_nil_check(l_D_944))).f_NAME);
R17 * l_S_952; memset(&l_S_952, 0, sizeof l_S_952);
l_S_952 = ((*(R17 *)rt_nil_check(l_D_944))).f_A;
if ((l_TF_951 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_944))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R17 *)rt_nil_check(l_D_944))).f_NAME);
}
if ((!(((*(R26 *)rt_nil_check(l_TF_951))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_944))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R17 *)rt_nil_check(l_D_944))).f_NAME);
}
{
R17 * l_O_953; memset(&l_O_953, 0, sizeof l_O_953);
l_O_953 = p_DECLS;
for (;;) {
if ((l_O_953 == l_D_944)) goto L_end954;
{
if ((((*(R17 *)rt_nil_check(l_O_953))).f_KIND == g_N_VARIANT))
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_O_953))).f_NAME, ((*(R17 *)rt_nil_check(l_D_944))).f_NAME))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_944))).f_LINE, rt_str("two variant parts discriminate on the tag ", 42), ((*(R17 *)rt_nil_check(l_D_944))).f_NAME);
}
}
l_O_953 = ((*(R17 *)rt_nil_check(l_O_953))).f_NEXT;
}
RT_B_TICK();
} L_end954: ;
}
r_CHECK_VARIANT_NAMES(l_D_944, ((*(R26 *)rt_nil_check(l_TF_951))).f_T);
for (;;) {
if ((l_S_952 == NULL)) goto L_end955;
{
r_OPEN_SCOPE();
r_RECORD_FIELDS(p_T, ((*(R17 *)rt_nil_check(l_S_952))).f_B, C_R9(((*(R17 *)rt_nil_check(l_D_944))).f_NAME), ((*(R17 *)rt_nil_check(l_S_952))).f_A, &(*p_TAIL));
r_CLOSE_SCOPE();
l_S_952 = ((*(R17 *)rt_nil_check(l_S_952))).f_NEXT;
}
RT_B_TICK();
} L_end955: ;
}
}
l_D_944 = ((*(R17 *)rt_nil_check(l_D_944))).f_NEXT;
}
RT_B_TICK();
} L_end945: ;
}
static void r_CHECK_VARIANT_NAMES(R17 * p_D, R22 * p_TT) { RT_B_TICK(); 
R17 * l_S_956; memset(&l_S_956, 0, sizeof l_S_956);
l_S_956 = ((*(R17 *)rt_nil_check(p_D))).f_A;
R17 * l_LOS_957; memset(&l_LOS_957, 0, sizeof l_LOS_957);
l_LOS_957 = NULL;
R17 * l_HIS_958; memset(&l_HIS_958, 0, sizeof l_HIS_958);
l_HIS_958 = NULL;
rt_int l_LO_LIM_959; memset(&l_LO_LIM_959, 0, sizeof l_LO_LIM_959);
rt_int l_HI_LIM_960; memset(&l_HI_LIM_960, 0, sizeof l_HI_LIM_960);
R22 * l_R_961; memset(&l_R_961, 0, sizeof l_R_961);
l_R_961 = r_REAL_TYPE(p_TT);
l_LO_LIM_959 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
l_HI_LIM_960 = INT64_MAX;
if ((((*(R22 *)rt_nil_check(l_R_961))).f_KIND == g_T_ENUM))
{
l_LO_LIM_959 = ((rt_int)0LL);
l_HI_LIM_960 = rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_R_961))).f_BASE))).f_NLITS, ((rt_int)1LL));
}
else if ((((*(R22 *)rt_nil_check(l_R_961))).f_KIND == g_T_BOOL))
{
l_LO_LIM_959 = ((rt_int)0LL);
l_HI_LIM_960 = ((rt_int)1LL);
}
if ((((*(R22 *)rt_nil_check(l_R_961))).f_MLO).f_OK)
{
l_LO_LIM_959 = (((*(R22 *)rt_nil_check(l_R_961))).f_MLO).f_V;
}
if ((((*(R22 *)rt_nil_check(l_R_961))).f_MHI).f_OK)
{
l_HI_LIM_960 = (((*(R22 *)rt_nil_check(l_R_961))).f_MHI).f_V;
}
for (;;) {
if ((l_S_956 == NULL)) goto L_end962;
{
{
R17 * l_L_963; memset(&l_L_963, 0, sizeof l_L_963);
l_L_963 = ((*(R17 *)rt_nil_check(l_S_956))).f_A;
for (;;) {
if ((l_L_963 == NULL)) goto L_end964;
{
{
R25 l_A_965; memset(&l_A_965, 0, sizeof l_A_965);
R25 l_B_966; memset(&l_B_966, 0, sizeof l_B_966);
if ((((*(R17 *)rt_nil_check(l_L_963))).f_KIND == g_N_RANGE))
{
S_R25(&l_A_965, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_963))).f_A, p_TT), 0);
S_R25(&l_B_966, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_963))).f_B, p_TT), 0);
if (((l_A_965).f_OK && (((((*(R17 *)rt_nil_check(l_L_963))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_L_963))).f_IV == ((rt_int)3LL))))))
{
(l_A_965).f_V = rt_add((l_A_965).f_V, ((rt_int)1LL));
}
if (((l_B_966).f_OK && (((*(R17 *)rt_nil_check(l_L_963))).f_IV >= ((rt_int)2LL))))
{
(l_B_966).f_V = rt_sub((l_B_966).f_V, ((rt_int)1LL));
}
}
else
{
S_R25(&l_A_965, r_ENUM_MANIFEST(l_L_963, p_TT), 0);
S_R25(&l_B_966, l_A_965, 0);
}
if ((!(((l_A_965).f_OK && (l_B_966).f_OK))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_963))).f_LINE, rt_str("a variant-name is manifest (3.9.1)", 34));
}
if (((((l_A_965).f_V < l_LO_LIM_959) || ((l_B_966).f_V > l_HI_LIM_960)) || ((l_A_965).f_V > (l_B_966).f_V)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_963))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.1)", 49));
}
{
R17 * l_P_967; memset(&l_P_967, 0, sizeof l_P_967);
l_P_967 = l_LOS_957;
R17 * l_Q_968; memset(&l_Q_968, 0, sizeof l_Q_968);
l_Q_968 = l_HIS_958;
for (;;) {
if ((l_P_967 == NULL)) goto L_end969;
{
if ((((l_A_965).f_V <= ((*(R17 *)rt_nil_check(l_Q_968))).f_IV) && ((l_B_966).f_V >= ((*(R17 *)rt_nil_check(l_P_967))).f_IV)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_963))).f_LINE, rt_str("a value of the tag names two variants (3.9.1)", 45));
}
l_P_967 = ((*(R17 *)rt_nil_check(l_P_967))).f_NEXT;
l_Q_968 = ((*(R17 *)rt_nil_check(l_Q_968))).f_NEXT;
}
RT_B_TICK();
} L_end969: ;
}
{
R17 * l_P_970; memset(&l_P_970, 0, sizeof l_P_970);
l_P_970 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
R17 * l_Q_971; memset(&l_Q_971, 0, sizeof l_Q_971);
l_Q_971 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R17 *)rt_nil_check(l_P_970))).f_IV = (l_A_965).f_V;
((*(R17 *)rt_nil_check(l_Q_971))).f_IV = (l_B_966).f_V;
((*(R17 *)rt_nil_check(l_P_970))).f_NEXT = l_LOS_957;
((*(R17 *)rt_nil_check(l_Q_971))).f_NEXT = l_HIS_958;
l_LOS_957 = l_P_970;
l_HIS_958 = l_Q_971;
}
}
l_L_963 = ((*(R17 *)rt_nil_check(l_L_963))).f_NEXT;
}
RT_B_TICK();
} L_end964: ;
}
l_S_956 = ((*(R17 *)rt_nil_check(l_S_956))).f_NEXT;
}
RT_B_TICK();
} L_end962: ;
}
static R22 * r_RESOLVE_RECORD(R17 * p_TS, R9 p_CNAME, R12 * p_Y, R17 * p_FORMALS) { RT_B_TICK(); 
R22 * l_T_972; memset(&l_T_972, 0, sizeof l_T_972);
l_T_972 = r_NEW_TYP(g_T_REC);
R26 * l_TAIL_973; memset(&l_TAIL_973, 0, sizeof l_TAIL_973);
l_TAIL_973 = NULL;
((*(R22 *)rt_nil_check(l_T_972))).f_BASE = l_T_972;
((*(R22 *)rt_nil_check(l_T_972))).f_DECL = p_Y;
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_D == NULL)))
{
((*(R22 *)rt_nil_check(l_T_972))).f_REPS = r_EXPAND_REP(((*(R17 *)rt_nil_check(p_TS))).f_D, l_T_972, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
r_CHECK_REP_CLASS(l_T_972, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(l_T_972))).f_CNAME, p_CNAME, 0);
}
else
{
S_R9(&((*(R22 *)rt_nil_check(l_T_972))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R22 *)rt_nil_check(l_T_972))).f_CNAME, ((*(R22 *)rt_nil_check(l_T_972))).f_CNAME));
}
{
R17 * l_F_974; memset(&l_F_974, 0, sizeof l_F_974);
l_F_974 = p_FORMALS;
for (;;) {
if ((l_F_974 == NULL)) goto L_end975;
{
if ((!(((*(R17 *)rt_nil_check(l_F_974))).f_B == NULL)))
{
{
R22 * l_FT_976; memset(&l_FT_976, 0, sizeof l_FT_976);
l_FT_976 = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_974))).f_B);
R17 * l_N_977; memset(&l_N_977, 0, sizeof l_N_977);
l_N_977 = ((*(R17 *)rt_nil_check(l_F_974))).f_A;
rt_int l_KIND_978; memset(&l_KIND_978, 0, sizeof l_KIND_978);
l_KIND_978 = ((rt_int)1LL);
if ((((*(R17 *)rt_nil_check(l_F_974))).f_IV == ((rt_int)1LL)))
{
l_KIND_978 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_976))) || (!(((*(R22 *)rt_nil_check(l_FT_976))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_F_974))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_977 == NULL)) goto L_end979;
{
r_ADD_FIELD(l_T_972, r_NEW_FIELD(((*(R17 *)rt_nil_check(l_N_977))).f_NAME, l_FT_976, l_KIND_978), &l_TAIL_973);
l_N_977 = ((*(R17 *)rt_nil_check(l_N_977))).f_NEXT;
}
RT_B_TICK();
} L_end979: ;
}
}
l_F_974 = ((*(R17 *)rt_nil_check(l_F_974))).f_NEXT;
}
RT_B_TICK();
} L_end975: ;
}
r_OPEN_SCOPE();
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_RECORD_FIELDS(l_T_972, ((*(R17 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_973);
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_CLOSE_SCOPE();
r_CHECK_RECORD_REP(l_T_972, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
r_COMPLETE_RECORD(l_T_972);
{ R22 * rv980 = l_T_972;
return rv980; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_RECORD_REP(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv981 = 0;
return rv981; }
}
{ rt_int rv982 = ((((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_KIND == g_N_REP) && r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_NAME, rt_str("RECORD_REP", 10)));
return rv982; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_RECORD_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_SEEN_983; memset(&l_SEEN_983, 0, sizeof l_SEEN_983);
l_SEEN_983 = NULL;
rt_int l_LISTED_984; memset(&l_LISTED_984, 0, sizeof l_LISTED_984);
l_LISTED_984 = 0;
if ((!r_IS_RECORD_REP(p_T)))
{
return;
}
{
R17 * l_P_985; memset(&l_P_985, 0, sizeof l_P_985);
l_P_985 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A;
for (;;) {
if ((l_P_985 == NULL)) goto L_end986;
{
if ((((*(R17 *)rt_nil_check(l_P_985))).f_IV == ((rt_int)1LL)))
{
l_LISTED_984 = 1;
}
r_CHECK_ELEMENTS(p_T, ((*(R17 *)rt_nil_check(l_P_985))).f_A, r_NO_TEXT(), NULL, &l_SEEN_983);
l_P_985 = ((*(R17 *)rt_nil_check(l_P_985))).f_NEXT;
}
RT_B_TICK();
} L_end986: ;
}
if (l_LISTED_984)
{
{
R26 * l_F_987; memset(&l_F_987, 0, sizeof l_F_987);
l_F_987 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_987 == NULL)) goto L_end988;
{
if ((((((*(R26 *)rt_nil_check(l_F_987))).f_TAGF).f_LEN == ((rt_int)0LL)) && (!r_IN_IDENTS(l_SEEN_983, ((*(R26 *)rt_nil_check(l_F_987))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("a record-reptype with element-specs positions every field (3.9.3): ", 67), ((*(R26 *)rt_nil_check(l_F_987))).f_NAME);
}
if ((((((*(R26 *)rt_nil_check(l_F_987))).f_TAGF).f_LEN > ((rt_int)0LL)) && (!r_IN_IDENTS(l_SEEN_983, r_CAT(r_MK(rt_str("|", 1)), ((*(R26 *)rt_nil_check(l_F_987))).f_TAGF)))))
{
r_FAILT(p_LINE, rt_str("a record-reptype with element-specs positions every variant part (3.9.3): ", 74), ((*(R26 *)rt_nil_check(l_F_987))).f_TAGF);
}
l_F_987 = ((*(R26 *)rt_nil_check(l_F_987))).f_NEXT;
}
RT_B_TICK();
} L_end988: ;
}
}
{
R17 * l_V_989; memset(&l_V_989, 0, sizeof l_V_989);
l_V_989 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_C;
for (;;) {
if ((l_V_989 == NULL)) goto L_end990;
{
{
R26 * l_TF_991; memset(&l_TF_991, 0, sizeof l_TF_991);
l_TF_991 = r_FIND_FIELD(p_T, ((*(R17 *)rt_nil_check(l_V_989))).f_NAME);
R17 * l_S_992; memset(&l_S_992, 0, sizeof l_S_992);
l_S_992 = ((*(R17 *)rt_nil_check(l_V_989))).f_A;
if ((l_TF_991 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_V_989))).f_LINE, rt_str("not a tag of the record (3.9.3): ", 33), ((*(R17 *)rt_nil_check(l_V_989))).f_NAME);
}
if ((!(((*(R26 *)rt_nil_check(l_TF_991))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_V_989))).f_LINE, rt_str("not a tag of the record (3.9.3): ", 33), ((*(R17 *)rt_nil_check(l_V_989))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(l_V_989))).f_B == NULL)))
{
if ((r_PACKING_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_989))).f_B))).f_NAME) < ((rt_int)0LL)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_V_989))).f_LINE, rt_str("a packing-mode is DENSE, PACKED or UNPACKED (3.9.3): ", 53), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_989))).f_B))).f_NAME);
}
}
for (;;) {
if ((l_S_992 == NULL)) goto L_end993;
{
{
R17 * l_L_994; memset(&l_L_994, 0, sizeof l_L_994);
l_L_994 = ((*(R17 *)rt_nil_check(l_S_992))).f_A;
R17 * l_P_995; memset(&l_P_995, 0, sizeof l_P_995);
l_P_995 = ((*(R17 *)rt_nil_check(l_S_992))).f_B;
R17 * l_VSEEN_996; memset(&l_VSEEN_996, 0, sizeof l_VSEEN_996);
l_VSEEN_996 = NULL;
for (;;) {
if ((l_L_994 == NULL)) goto L_end997;
{
{
R14 l_SAVED_CODE_998; memset(&l_SAVED_CODE_998, 0, sizeof l_SAVED_CODE_998);
S_R14(&l_SAVED_CODE_998, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R28 l_LV_999; memset(&l_LV_999, 0, sizeof l_LV_999);
S_R28(&l_LV_999, r_EXPR(l_L_994, ((*(R26 *)rt_nil_check(l_TF_991))).f_T), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_998, 0);
if ((!r_SAME_CLASS(r_REAL_TYPE((l_LV_999).f_T), r_REAL_TYPE(((*(R26 *)rt_nil_check(l_TF_991))).f_T))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_994))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.3)", 49));
}
}
l_L_994 = ((*(R17 *)rt_nil_check(l_L_994))).f_NEXT;
}
RT_B_TICK();
} L_end997: ;
for (;;) {
if ((l_P_995 == NULL)) goto L_end1000;
{
r_CHECK_ELEMENTS(p_T, ((*(R17 *)rt_nil_check(l_P_995))).f_A, C_R9(((*(R17 *)rt_nil_check(l_V_989))).f_NAME), ((*(R17 *)rt_nil_check(l_S_992))).f_A, &l_VSEEN_996);
l_P_995 = ((*(R17 *)rt_nil_check(l_P_995))).f_NEXT;
}
RT_B_TICK();
} L_end1000: ;
}
l_S_992 = ((*(R17 *)rt_nil_check(l_S_992))).f_NEXT;
}
RT_B_TICK();
} L_end993: ;
}
l_V_989 = ((*(R17 *)rt_nil_check(l_V_989))).f_NEXT;
}
RT_B_TICK();
} L_end990: ;
}
}
static void r_CHECK_ELEMENTS(R22 * p_T, R17 * p_L, R9 p_TAGN, R17 * p_LABELS, R17 * *p_SEEN) { RT_B_TICK(); 
R17 * l_E_1001; memset(&l_E_1001, 0, sizeof l_E_1001);
l_E_1001 = p_L;
for (;;) {
if ((l_E_1001 == NULL)) goto L_end1002;
{
if (((((*(R17 *)rt_nil_check(l_E_1001))).f_FL == ((rt_int)0LL)) || (((*(R17 *)rt_nil_check(l_E_1001))).f_FL == ((rt_int)2LL))))
{
{
R26 * l_F_1003; memset(&l_F_1003, 0, sizeof l_F_1003);
l_F_1003 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R26 * l_FOUND_1004; memset(&l_FOUND_1004, 0, sizeof l_FOUND_1004);
l_FOUND_1004 = NULL;
for (;;) {
if ((l_F_1003 == NULL)) goto L_end1005;
{
if ((r_TEQ(((*(R26 *)rt_nil_check(l_F_1003))).f_NAME, ((*(R17 *)rt_nil_check(l_E_1001))).f_NAME) && r_TEQ(((*(R26 *)rt_nil_check(l_F_1003))).f_TAGF, p_TAGN)))
{
l_FOUND_1004 = l_F_1003;
}
l_F_1003 = ((*(R26 *)rt_nil_check(l_F_1003))).f_NEXT;
}
RT_B_TICK();
} L_end1005: ;
if ((l_FOUND_1004 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_1001))).f_LINE, rt_str("not a field of the record accessible here (3.9.3): ", 51), ((*(R17 *)rt_nil_check(l_E_1001))).f_NAME);
}
if (((((*(R17 *)rt_nil_check(l_E_1001))).f_FL == ((rt_int)2LL)) && (((*(R26 *)rt_nil_check(l_FOUND_1004))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_1001))).f_LINE, rt_str("OMIT names a constant or tag field (3.9.3): ", 44), ((*(R17 *)rt_nil_check(l_E_1001))).f_NAME);
}
if (r_IN_IDENTS((*p_SEEN), ((*(R17 *)rt_nil_check(l_E_1001))).f_NAME))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_1001))).f_LINE, rt_str("a field is positioned once in a record-reptype (3.9.3): ", 56), ((*(R17 *)rt_nil_check(l_E_1001))).f_NAME);
}
(*p_SEEN) = r_NAME_REF(((*(R17 *)rt_nil_check(l_E_1001))).f_NAME, ((rt_int)0LL), NULL, (*p_SEEN));
}
}
else if ((((*(R17 *)rt_nil_check(l_E_1001))).f_FL == ((rt_int)1LL)))
{
{
R26 * l_TF_1006; memset(&l_TF_1006, 0, sizeof l_TF_1006);
l_TF_1006 = r_FIND_FIELD(p_T, ((*(R17 *)rt_nil_check(l_E_1001))).f_NAME);
R9 l_KEY_1007; memset(&l_KEY_1007, 0, sizeof l_KEY_1007);
S_R9(&l_KEY_1007, r_CAT(r_MK(rt_str("|", 1)), ((*(R17 *)rt_nil_check(l_E_1001))).f_NAME), 0);
if ((l_TF_1006 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_1001))).f_LINE, rt_str("VARIANTS names a tag of the record (3.9.3): ", 44), ((*(R17 *)rt_nil_check(l_E_1001))).f_NAME);
}
if ((!(((*(R26 *)rt_nil_check(l_TF_1006))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_1001))).f_LINE, rt_str("VARIANTS names a tag of the record (3.9.3): ", 44), ((*(R17 *)rt_nil_check(l_E_1001))).f_NAME);
}
if (r_IN_IDENTS((*p_SEEN), l_KEY_1007))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_1001))).f_LINE, rt_str("a variant part is positioned once in a record-reptype (3.9.3): ", 63), ((*(R17 *)rt_nil_check(l_E_1001))).f_NAME);
}
(*p_SEEN) = r_NAME_REF(l_KEY_1007, ((rt_int)0LL), NULL, (*p_SEEN));
}
}
else
{
{
R25 l_M_1008; memset(&l_M_1008, 0, sizeof l_M_1008);
S_R25(&l_M_1008, r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1001))).f_B), 0);
if (((!(l_M_1008).f_OK) || ((l_M_1008).f_V < ((rt_int)0LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_E_1001))).f_LINE, rt_str("the length of a filler-spec is a manifest integer, not negative (3.9.3)", 71));
}
}
}
l_E_1001 = ((*(R17 *)rt_nil_check(l_E_1001))).f_NEXT;
}
RT_B_TICK();
} L_end1002: ;
}
static R9 r_RECORD_SIZE(R22 * p_T, R9 p_C) { RT_B_TICK(); 
{ R9 rv1009 = r_FMT1(rt_str("({ rt_int sz = 0;@ sz; })", 25), r_RECORD_LAYOUT(p_T, p_C, ((rt_int)0LL), r_NO_TEXT()));
return rv1009; }
rt_raise(RT_X_INIT);
}
static R9 r_RECORD_BITS(R22 * p_T, R9 p_C) { RT_B_TICK(); 
R9 l_V_1010; memset(&l_V_1010, 0, sizeof l_V_1010);
S_R9(&l_V_1010, r_NEW_NAME(rt_str("rb", 2)), 0);
R9 l_IMG_1011; memset(&l_IMG_1011, 0, sizeof l_IMG_1011);
S_R9(&l_IMG_1011, r_NEW_NAME(rt_str("im", 2)), 0);
R9 l_BODY_1012; memset(&l_BODY_1012, 0, sizeof l_BODY_1012);
S_R9(&l_BODY_1012, r_RECORD_LAYOUT(p_T, l_V_1010, ((rt_int)1LL), l_IMG_1011), 0);
{ R9 rv1013 = r_CAT(r_FMT4(rt_str("({ @ @ = @; rstr @ = rt_str_new(0); rt_int sz = 0;", 50), r_CTYPE(p_T), l_V_1010, p_C, l_IMG_1011), r_FMT2(rt_str("@ @; })", 7), l_BODY_1012, l_IMG_1011));
return rv1013; }
rt_raise(RT_X_INIT);
}
static R9 r_RECORD_OF_BITS(R22 * p_T, R9 p_B) { RT_B_TICK(); 
R9 l_V_1014; memset(&l_V_1014, 0, sizeof l_V_1014);
S_R9(&l_V_1014, r_NEW_NAME(rt_str("rv", 2)), 0);
R9 l_IMG_1015; memset(&l_IMG_1015, 0, sizeof l_IMG_1015);
S_R9(&l_IMG_1015, r_NEW_NAME(rt_str("im", 2)), 0);
R9 l_BODY_1016; memset(&l_BODY_1016, 0, sizeof l_BODY_1016);
S_R9(&l_BODY_1016, r_RECORD_LAYOUT(p_T, l_V_1014, ((rt_int)2LL), l_IMG_1015), 0);
{ R9 rv1017 = r_CAT(r_FMT4(rt_str("({ rstr @ = @; @ @;", 19), l_IMG_1015, p_B, r_CTYPE(p_T), l_V_1014), r_CAT(r_FMT3(rt_str(" @ rt_int sz = 0;@ rt_b_lay_end(@, sz);", 39), r_INIT_CODE(p_T, l_V_1014), l_BODY_1016, l_IMG_1015), r_FMT1(rt_str(" @; })", 6), l_V_1014)));
return rv1017; }
rt_raise(RT_X_INIT);
}
static R9 r_RECORD_LAYOUT(R22 * p_T, R9 p_C, rt_int p_MODE, R9 p_IMG) { RT_B_TICK(); 
R9 l_R_1018; memset(&l_R_1018, 0, sizeof l_R_1018);
S_R9(&l_R_1018, r_MK(rt_str("", 0)), 0);
R17 * l_SAVED_1019; memset(&l_SAVED_1019, 0, sizeof l_SAVED_1019);
l_SAVED_1019 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
rt_int l_SAVED_MODE_1020; memset(&l_SAVED_MODE_1020, 0, sizeof l_SAVED_MODE_1020);
l_SAVED_MODE_1020 = ((*(R7 *)rt_nil_check(g_W))).f_LMODE;
R9 l_SAVED_IMG_1021; memset(&l_SAVED_IMG_1021, 0, sizeof l_SAVED_IMG_1021);
S_R9(&l_SAVED_IMG_1021, ((*(R7 *)rt_nil_check(g_W))).f_LIMG, 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = NULL;
((*(R7 *)rt_nil_check(g_W))).f_LMODE = p_MODE;
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_LIMG, p_IMG, 0);
if (r_IS_RECORD_REP(p_T))
{
{
R17 * l_P_1022; memset(&l_P_1022, 0, sizeof l_P_1022);
l_P_1022 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A;
for (;;) {
if ((l_P_1022 == NULL)) goto L_end1023;
{
S_R9(&l_R_1018, r_CAT(l_R_1018, r_LAYOUT_SPEC(p_T, p_C, l_P_1022, r_NO_TEXT())), 0);
l_P_1022 = ((*(R17 *)rt_nil_check(l_P_1022))).f_NEXT;
}
RT_B_TICK();
} L_end1023: ;
}
}
S_R9(&l_R_1018, r_CAT(l_R_1018, r_LAYOUT_ALL(p_T, p_C, r_NO_TEXT(), ((rt_int)2LL))), 0);
S_R9(&l_R_1018, r_CAT(l_R_1018, r_LAYOUT_PARTS(p_T, p_C)), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_SAVED_1019;
((*(R7 *)rt_nil_check(g_W))).f_LMODE = l_SAVED_MODE_1020;
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_LIMG, l_SAVED_IMG_1021, 0);
{ R9 rv1024 = l_R_1018;
return rv1024; }
rt_raise(RT_X_INIT);
}
static R9 r_LAY_FIELD(R26 * p_F, R22 * p_T, R9 p_C, rt_int p_MODE) { RT_B_TICK(); 
R9 l_X_1025; memset(&l_X_1025, 0, sizeof l_X_1025);
S_R9(&l_X_1025, r_FMT2(rt_str("(@).@", 5), p_C, ((*(R26 *)rt_nil_check(p_F))).f_CNAME), 0);
if ((((*(R7 *)rt_nil_check(g_W))).f_LMODE == ((rt_int)0LL)))
{
{ R9 rv1026 = r_FMT2(rt_str(" sz = rt_b_layout(sz, @, @);", 28), r_FIELD_SIZE_C(p_F, p_C), r_NUM(p_MODE));
return rv1026; }
}
else if ((((*(R7 *)rt_nil_check(g_W))).f_LMODE == ((rt_int)1LL)))
{
{
R9 l_IMG_1027; memset(&l_IMG_1027, 0, sizeof l_IMG_1027);
S_R9(&l_IMG_1027, ((*(R7 *)rt_nil_check(g_W))).f_LIMG, 0);
R9 l_BITS_1028; memset(&l_BITS_1028, 0, sizeof l_BITS_1028);
S_R9(&l_BITS_1028, (r_BITS_OF(r_MKET(l_X_1025, ((*(R26 *)rt_nil_check(p_F))).f_T), ((rt_int)0LL))).f_C, 0);
{ R9 rv1029 = r_FMT3(rt_str(" sz = rt_b_lay_put(&@, sz, @, @);", 33), l_IMG_1027, l_BITS_1028, r_NUM(p_MODE));
return rv1029; }
}
}
{
R9 l_IMG_1030; memset(&l_IMG_1030, 0, sizeof l_IMG_1030);
S_R9(&l_IMG_1030, ((*(R7 *)rt_nil_check(g_W))).f_LIMG, 0);
R9 l_TAKE_1031; memset(&l_TAKE_1031, 0, sizeof l_TAKE_1031);
S_R9(&l_TAKE_1031, r_FMT3(rt_str("rt_b_lay_take(@, &sz, @, @)", 27), l_IMG_1030, r_FIELD_SIZE_C(p_F, p_C), r_NUM(p_MODE)), 0);
R9 l_V_1032; memset(&l_V_1032, 0, sizeof l_V_1032);
S_R9(&l_V_1032, r_OF_BITS(((*(R26 *)rt_nil_check(p_F))).f_T, l_TAKE_1031, ((rt_int)0LL)), 0);
if (((((*(R26 *)rt_nil_check(p_F))).f_KIND == ((rt_int)0LL)) || r_IS_ANY_FIELD(p_T, p_F)))
{
{ R9 rv1033 = r_FMT2(rt_str(" @ = @;", 7), l_X_1025, l_V_1032);
return rv1033; }
}
{ R9 rv1034 = r_FMT1(rt_str(" if (!@) rt_raise(RT_B_INVALID_TYPE);", 37), r_EQUAL_CODE(r_REAL_TYPE(((*(R26 *)rt_nil_check(p_F))).f_T), l_X_1025, l_V_1032));
return rv1034; }
}
rt_raise(RT_X_INIT);
}
static R9 r_LAY_FILL(R9 p_SIZE, R9 p_BITS, rt_int p_MODE) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_LMODE == ((rt_int)0LL)))
{
{ R9 rv1035 = r_FMT2(rt_str(" sz = rt_b_layout(sz, @, @);", 28), p_SIZE, r_NUM(p_MODE));
return rv1035; }
}
else if ((((*(R7 *)rt_nil_check(g_W))).f_LMODE == ((rt_int)1LL)))
{
{ R9 rv1036 = r_FMT3(rt_str(" sz = rt_b_lay_put(&@, sz, @, @);", 33), ((*(R7 *)rt_nil_check(g_W))).f_LIMG, p_BITS, r_NUM(p_MODE));
return rv1036; }
}
{ R9 rv1037 = r_FMT3(rt_str(" (void)rt_b_lay_take(@, &sz, @, @);", 35), ((*(R7 *)rt_nil_check(g_W))).f_LIMG, p_SIZE, r_NUM(p_MODE));
return rv1037; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ANY_FIELD(R22 * p_T, R26 * p_F) { RT_B_TICK(); 
R26 * l_G_1038; memset(&l_G_1038, 0, sizeof l_G_1038);
l_G_1038 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R27 * l_A_1039; memset(&l_A_1039, 0, sizeof l_A_1039);
l_A_1039 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_G_1038 == NULL) || (l_A_1039 == NULL))) goto L_end1040;
{
if ((!(((*(R26 *)rt_nil_check(l_G_1038))).f_KIND == ((rt_int)0LL))))
{
if ((l_G_1038 == p_F))
{
{ rt_int rv1041 = ((*(R27 *)rt_nil_check(l_A_1039))).f_ANYARG;
return rv1041; }
}
l_A_1039 = ((*(R27 *)rt_nil_check(l_A_1039))).f_NEXT;
}
l_G_1038 = ((*(R26 *)rt_nil_check(l_G_1038))).f_NEXT;
}
RT_B_TICK();
} L_end1040: ;
{ rt_int rv1042 = 1;
return rv1042; }
rt_raise(RT_X_INIT);
}
static R9 r_FIELD_SIZE_C(R26 * p_F, R9 p_C) { RT_B_TICK(); 
{ R9 rv1043 = (r_SIZE_OF(((*(R26 *)rt_nil_check(p_F))).f_T, r_FMT2(rt_str("(@).@", 5), p_C, ((*(R26 *)rt_nil_check(p_F))).f_CNAME))).f_C;
return rv1043; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_ALL(R22 * p_T, R9 p_C, R9 p_TAGN, rt_int p_MODE) { RT_B_TICK(); 
R9 l_R_1044; memset(&l_R_1044, 0, sizeof l_R_1044);
S_R9(&l_R_1044, r_MK(rt_str("", 0)), 0);
R26 * l_F_1045; memset(&l_F_1045, 0, sizeof l_F_1045);
l_F_1045 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1045 == NULL)) goto L_end1046;
{
if ((r_TEQ(((*(R26 *)rt_nil_check(l_F_1045))).f_TAGF, p_TAGN) && (!r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LDONE, ((*(R26 *)rt_nil_check(l_F_1045))).f_NAME))))
{
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(((*(R26 *)rt_nil_check(l_F_1045))).f_NAME, ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_1044, r_CAT(l_R_1044, r_LAY_FIELD(l_F_1045, p_T, p_C, p_MODE)), 0);
}
else
{
S_R9(&l_R_1044, r_CAT(l_R_1044, r_FMT2(rt_str(" if (@) {@ }", 12), r_VARIANT_COND(l_F_1045, p_T, p_C), r_LAY_FIELD(l_F_1045, p_T, p_C, p_MODE))), 0);
}
}
l_F_1045 = ((*(R26 *)rt_nil_check(l_F_1045))).f_NEXT;
}
RT_B_TICK();
} L_end1046: ;
{ R9 rv1047 = l_R_1044;
return rv1047; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_PARTS(R22 * p_T, R9 p_C) { RT_B_TICK(); 
R9 l_R_1048; memset(&l_R_1048, 0, sizeof l_R_1048);
S_R9(&l_R_1048, r_MK(rt_str("", 0)), 0);
R26 * l_F_1049; memset(&l_F_1049, 0, sizeof l_F_1049);
l_F_1049 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1049 == NULL)) goto L_end1050;
{
if ((((((*(R26 *)rt_nil_check(l_F_1049))).f_TAGF).f_LEN > ((rt_int)0LL)) && (!r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LDONE, r_CAT(r_MK(rt_str("|", 1)), ((*(R26 *)rt_nil_check(l_F_1049))).f_TAGF)))))
{
S_R9(&l_R_1048, r_CAT(l_R_1048, r_LAYOUT_VARIANTS(p_T, p_C, ((*(R26 *)rt_nil_check(l_F_1049))).f_TAGF)), 0);
}
l_F_1049 = ((*(R26 *)rt_nil_check(l_F_1049))).f_NEXT;
}
RT_B_TICK();
} L_end1050: ;
{ R9 rv1051 = l_R_1048;
return rv1051; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_SPEC(R22 * p_T, R9 p_C, R17 * p_P, R9 p_TAGN) { RT_B_TICK(); 
rt_int l_MODE_1052; memset(&l_MODE_1052, 0, sizeof l_MODE_1052);
l_MODE_1052 = ((rt_int)2LL);
R9 l_R_1053; memset(&l_R_1053, 0, sizeof l_R_1053);
S_R9(&l_R_1053, r_MK(rt_str("", 0)), 0);
if (((((*(R17 *)rt_nil_check(p_P))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_MODE_1052 = r_PACKING_VALUE(((*(R17 *)rt_nil_check(p_P))).f_NAME);
}
if ((((*(R17 *)rt_nil_check(p_P))).f_IV == ((rt_int)0LL)))
{
S_R9(&l_R_1053, r_LAYOUT_ALL(p_T, p_C, p_TAGN, l_MODE_1052), 0);
if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_1053, r_CAT(l_R_1053, r_LAYOUT_PARTS(p_T, p_C)), 0);
}
{ R9 rv1054 = l_R_1053;
return rv1054; }
}
{
R17 * l_E_1055; memset(&l_E_1055, 0, sizeof l_E_1055);
l_E_1055 = ((*(R17 *)rt_nil_check(p_P))).f_A;
for (;;) {
if ((l_E_1055 == NULL)) goto L_end1056;
{
if (((((*(R17 *)rt_nil_check(l_E_1055))).f_FL == ((rt_int)0LL)) || (((*(R17 *)rt_nil_check(l_E_1055))).f_FL == ((rt_int)2LL))))
{
{
R26 * l_F_1057; memset(&l_F_1057, 0, sizeof l_F_1057);
l_F_1057 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1057 == NULL)) goto L_end1058;
{
if ((r_TEQ(((*(R26 *)rt_nil_check(l_F_1057))).f_NAME, ((*(R17 *)rt_nil_check(l_E_1055))).f_NAME) && r_TEQ(((*(R26 *)rt_nil_check(l_F_1057))).f_TAGF, p_TAGN)))
{
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(((*(R26 *)rt_nil_check(l_F_1057))).f_NAME, ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (((((*(R17 *)rt_nil_check(l_E_1055))).f_FL == ((rt_int)2LL)) && r_ARG_MANIFEST(p_T, l_F_1057)))
{
}
else if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_1053, r_CAT(l_R_1053, r_LAY_FIELD(l_F_1057, p_T, p_C, l_MODE_1052)), 0);
}
else
{
S_R9(&l_R_1053, r_CAT(l_R_1053, r_FMT2(rt_str(" if (@) {@ }", 12), r_VARIANT_COND(l_F_1057, p_T, p_C), r_LAY_FIELD(l_F_1057, p_T, p_C, l_MODE_1052))), 0);
}
}
l_F_1057 = ((*(R26 *)rt_nil_check(l_F_1057))).f_NEXT;
}
RT_B_TICK();
} L_end1058: ;
}
}
else if ((((*(R17 *)rt_nil_check(l_E_1055))).f_FL == ((rt_int)1LL)))
{
S_R9(&l_R_1053, r_CAT(l_R_1053, r_LAYOUT_VARIANTS(p_T, p_C, ((*(R17 *)rt_nil_check(l_E_1055))).f_NAME)), 0);
}
else if ((((*(R17 *)rt_nil_check(l_E_1055))).f_FL == ((rt_int)5LL)))
{
S_R9(&l_R_1053, r_CAT(l_R_1053, r_LAY_FILL(r_FMT2(rt_str("rt_b_pack_size(@, 7, @)", 23), r_NUM((r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1055))).f_B)).f_V), r_NUM(l_MODE_1052)), r_FMT2(rt_str("rt_b_blank_bits(@, @)", 21), r_NUM((r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1055))).f_B)).f_V), r_NUM(l_MODE_1052)), l_MODE_1052)), 0);
}
else
{
S_R9(&l_R_1053, r_CAT(l_R_1053, r_LAY_FILL(r_NUM((r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1055))).f_B)).f_V), r_FMT1(rt_str("rt_b_zeros(@)", 13), r_NUM((r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1055))).f_B)).f_V)), l_MODE_1052)), 0);
}
l_E_1055 = ((*(R17 *)rt_nil_check(l_E_1055))).f_NEXT;
}
RT_B_TICK();
} L_end1056: ;
}
{ R9 rv1059 = l_R_1053;
return rv1059; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_VARIANTS(R22 * p_T, R9 p_C, R9 p_TAGN) { RT_B_TICK(); 
R9 l_R_1060; memset(&l_R_1060, 0, sizeof l_R_1060);
S_R9(&l_R_1060, r_MK(rt_str("", 0)), 0);
R9 l_WORD_1061; memset(&l_WORD_1061, 0, sizeof l_WORD_1061);
S_R9(&l_WORD_1061, r_MK(rt_str(" if", 3)), 0);
rt_int l_ELSE_MODE_1062; memset(&l_ELSE_MODE_1062, 0, sizeof l_ELSE_MODE_1062);
l_ELSE_MODE_1062 = ((rt_int)2LL);
R26 * l_TF_1063; memset(&l_TF_1063, 0, sizeof l_TF_1063);
l_TF_1063 = r_FIND_FIELD(p_T, p_TAGN);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(r_CAT(r_MK(rt_str("|", 1)), p_TAGN), ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (r_IS_RECORD_REP(p_T))
{
{
R17 * l_V_1064; memset(&l_V_1064, 0, sizeof l_V_1064);
l_V_1064 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_C;
for (;;) {
if ((l_V_1064 == NULL)) goto L_end1065;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_V_1064))).f_NAME, p_TAGN))
{
{
R17 * l_S_1066; memset(&l_S_1066, 0, sizeof l_S_1066);
l_S_1066 = ((*(R17 *)rt_nil_check(l_V_1064))).f_A;
if ((!(((*(R17 *)rt_nil_check(l_V_1064))).f_B == NULL)))
{
l_ELSE_MODE_1062 = r_PACKING_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_1064))).f_B))).f_NAME);
}
for (;;) {
if ((l_S_1066 == NULL)) goto L_end1067;
{
{
R9 l_COND_1068; memset(&l_COND_1068, 0, sizeof l_COND_1068);
S_R9(&l_COND_1068, r_MK(rt_str("0", 1)), 0);
R17 * l_L_1069; memset(&l_L_1069, 0, sizeof l_L_1069);
l_L_1069 = ((*(R17 *)rt_nil_check(l_S_1066))).f_A;
R17 * l_P_1070; memset(&l_P_1070, 0, sizeof l_P_1070);
l_P_1070 = ((*(R17 *)rt_nil_check(l_S_1066))).f_B;
R17 * l_OUTER_1071; memset(&l_OUTER_1071, 0, sizeof l_OUTER_1071);
l_OUTER_1071 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
R9 l_BODY_1072; memset(&l_BODY_1072, 0, sizeof l_BODY_1072);
S_R9(&l_BODY_1072, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1069 == NULL)) goto L_end1073;
{
S_R9(&l_COND_1068, r_FMT4(rt_str("@ || (@).@ == @", 15), l_COND_1068, p_C, ((*(R26 *)rt_nil_check(l_TF_1063))).f_CNAME, (r_EXPR(l_L_1069, ((*(R26 *)rt_nil_check(l_TF_1063))).f_T)).f_C), 0);
l_L_1069 = ((*(R17 *)rt_nil_check(l_L_1069))).f_NEXT;
}
RT_B_TICK();
} L_end1073: ;
for (;;) {
if ((l_P_1070 == NULL)) goto L_end1074;
{
S_R9(&l_BODY_1072, r_CAT(l_BODY_1072, r_LAYOUT_SPEC(p_T, p_C, l_P_1070, p_TAGN)), 0);
l_P_1070 = ((*(R17 *)rt_nil_check(l_P_1070))).f_NEXT;
}
RT_B_TICK();
} L_end1074: ;
S_R9(&l_BODY_1072, r_CAT(l_BODY_1072, r_LAYOUT_ALL(p_T, p_C, p_TAGN, ((rt_int)2LL))), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_OUTER_1071;
S_R9(&l_R_1060, r_CAT(l_R_1060, r_FMT3(rt_str("@ (@) {@ }", 10), l_WORD_1061, l_COND_1068, l_BODY_1072)), 0);
S_R9(&l_WORD_1061, r_MK(rt_str(" else if", 8)), 0);
}
l_S_1066 = ((*(R17 *)rt_nil_check(l_S_1066))).f_NEXT;
}
RT_B_TICK();
} L_end1067: ;
}
}
l_V_1064 = ((*(R17 *)rt_nil_check(l_V_1064))).f_NEXT;
}
RT_B_TICK();
} L_end1065: ;
}
}
{
R17 * l_OUTER_1075; memset(&l_OUTER_1075, 0, sizeof l_OUTER_1075);
l_OUTER_1075 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
R9 l_REST_1076; memset(&l_REST_1076, 0, sizeof l_REST_1076);
S_R9(&l_REST_1076, r_LAYOUT_ALL(p_T, p_C, p_TAGN, l_ELSE_MODE_1062), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_OUTER_1075;
if (r_TEQS(l_WORD_1061, rt_str(" if", 3)))
{
{ R9 rv1077 = l_REST_1076;
return rv1077; }
}
{ R9 rv1078 = r_FMT2(rt_str("@ else {@ }", 11), l_R_1060, l_REST_1076);
return rv1078; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_ARG_MANIFEST(R22 * p_T, R26 * p_F) { RT_B_TICK(); 
R26 * l_G_1079; memset(&l_G_1079, 0, sizeof l_G_1079);
l_G_1079 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R27 * l_A_1080; memset(&l_A_1080, 0, sizeof l_A_1080);
l_A_1080 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_G_1079 == NULL) || (l_A_1080 == NULL))) goto L_end1081;
{
if ((!(((*(R26 *)rt_nil_check(l_G_1079))).f_KIND == ((rt_int)0LL))))
{
if ((l_G_1079 == p_F))
{
{ rt_int rv1082 = ((((*(R27 *)rt_nil_check(l_A_1080))).f_MLO).f_OK && (!((*(R27 *)rt_nil_check(l_A_1080))).f_ANYARG));
return rv1082; }
}
l_A_1080 = ((*(R27 *)rt_nil_check(l_A_1080))).f_NEXT;
}
l_G_1079 = ((*(R26 *)rt_nil_check(l_G_1079))).f_NEXT;
}
RT_B_TICK();
} L_end1081: ;
{ rt_int rv1083 = 0;
return rv1083; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ANY_TAG(R17 * p_A) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv1084 = 0;
return rv1084; }
}
{
R12 * l_Y_1085; memset(&l_Y_1085, 0, sizeof l_Y_1085);
l_Y_1085 = r_LOOKUP(((*(R17 *)rt_nil_check(p_A))).f_NAME);
if ((l_Y_1085 == NULL))
{
{ rt_int rv1086 = 0;
return rv1086; }
}
{ rt_int rv1087 = ((((*(R12 *)rt_nil_check(l_Y_1085))).f_KIND == g_Y_CONST) && r_TEQS(((*(R12 *)rt_nil_check(l_Y_1085))).f_ACCESS, rt_str("ANY", 3)));
return rv1087; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R17 * p_TS) { RT_B_TICK(); 
R17 * l_D_1088; memset(&l_D_1088, 0, sizeof l_D_1088);
l_D_1088 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_CLASS_1089; memset(&l_CLASS_1089, 0, sizeof l_CLASS_1089);
l_CLASS_1089 = NULL;
R21 * l_TARGS_1090; memset(&l_TARGS_1090, 0, sizeof l_TARGS_1090);
l_TARGS_1090 = NULL;
R27 * l_VARGS_1091; memset(&l_VARGS_1091, 0, sizeof l_VARGS_1091);
l_VARGS_1091 = NULL;
R27 * l_VTAIL_1092; memset(&l_VTAIL_1092, 0, sizeof l_VTAIL_1092);
l_VTAIL_1092 = NULL;
R17 * l_A_1093; memset(&l_A_1093, 0, sizeof l_A_1093);
l_A_1093 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R17 * l_F_1094; memset(&l_F_1094, 0, sizeof l_F_1094);
l_F_1094 = ((*(R17 *)rt_nil_check(l_D_1088))).f_A;
for (;;) {
if ((l_F_1094 == NULL)) goto L_end1095;
{
{
R17 * l_N_1096; memset(&l_N_1096, 0, sizeof l_N_1096);
l_N_1096 = ((*(R17 *)rt_nil_check(l_F_1094))).f_A;
for (;;) {
if ((l_N_1096 == NULL)) goto L_end1097;
{
if ((l_A_1093 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R17 *)rt_nil_check(l_F_1094))).f_B == NULL))
{
{
R21 * l_B_1098; memset(&l_B_1098, 0, sizeof l_B_1098);
l_B_1098 = ({ R21 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R21(&(*(R21 *)rt_nil_check(l_B_1098)), ({ R21 rc1099; memset(&rc1099, 0, sizeof rc1099);  S_R9(&rc1099.f_NAME, ((*(R17 *)rt_nil_check(l_N_1096))).f_NAME, 0); rc1099.f_T = r_ARG_TYPE(l_A_1093); S_R9(&rc1099.f_C, r_NO_TEXT(), 0); rc1099.f_HASMV = 0; rc1099.f_MV = ((rt_int)0LL); rc1099.f_R = NULL; rc1099.f_NEXT = l_TARGS_1090; rc1099; }), 0);
l_TARGS_1090 = l_B_1098;
}
}
else
{
{
R27 * l_V_1100; memset(&l_V_1100, 0, sizeof l_V_1100);
l_V_1100 = ({ R27 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R27(&(*(R27 *)rt_nil_check(l_V_1100)), ({ R27 rc1101; memset(&rc1101, 0, sizeof rc1101);  S_R9(&rc1101.f_LO, r_NO_TEXT(), 0); S_R9(&rc1101.f_HI, r_NO_TEXT(), 0); S_R25(&rc1101.f_MLO, r_NO_MVAL(), 0); S_R25(&rc1101.f_MHI, r_NO_MVAL(), 0); rc1101.f_ANYARG = 0; rc1101.f_NEXT = NULL; rc1101; }), 0);
if (((((*(R17 *)rt_nil_check(l_A_1093))).f_KIND == g_N_ANY) || r_IS_ANY_TAG(l_A_1093)))
{
if ((!(((*(R17 *)rt_nil_check(l_F_1094))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_1093))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R27 *)rt_nil_check(l_V_1100))).f_ANYARG = 1;
}
else if ((((*(R17 *)rt_nil_check(l_A_1093))).f_KIND == g_N_DONTCARE))
{
((*(R27 *)rt_nil_check(l_V_1100))).f_ANYARG = 1;
S_R9(&((*(R27 *)rt_nil_check(l_V_1100))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R17 *)rt_nil_check(l_A_1093))).f_KIND == g_TS_GEN))
{
((*(R27 *)rt_nil_check(l_V_1100))).f_ANYARG = 1;
S_R9(&((*(R27 *)rt_nil_check(l_V_1100))).f_HI, r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(l_A_1093))).f_NAME), 0);
}
else
{
{
R22 * l_FT_1102; memset(&l_FT_1102, 0, sizeof l_FT_1102);
l_FT_1102 = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_1094))).f_B);
S_R9(&((*(R27 *)rt_nil_check(l_V_1100))).f_LO, r_CONVERT(r_EXPR(l_A_1093, l_FT_1102), l_FT_1102, ((*(R17 *)rt_nil_check(l_A_1093))).f_LINE, r_NO_TEXT()), 0);
S_R25(&((*(R27 *)rt_nil_check(l_V_1100))).f_MLO, r_ENUM_MANIFEST(l_A_1093, l_FT_1102), 0);
if ((((((*(R27 *)rt_nil_check(l_V_1100))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_FT_1102))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_FT_1102))).f_MHI).f_OK))
{
if ((((((*(R27 *)rt_nil_check(l_V_1100))).f_MLO).f_V < (((*(R22 *)rt_nil_check(l_FT_1102))).f_MLO).f_V) || ((((*(R27 *)rt_nil_check(l_V_1100))).f_MLO).f_V > (((*(R22 *)rt_nil_check(l_FT_1102))).f_MHI).f_V)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_1093))).f_LINE, rt_str("the argument is outside the range of the parameter (3.9.1)", 58));
}
}
if (((((*(R17 *)rt_nil_check(l_F_1094))).f_IV == ((rt_int)1LL)) && (!(((*(R27 *)rt_nil_check(l_V_1100))).f_MLO).f_OK)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_1093))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_1092 == NULL))
{
l_VARGS_1091 = l_V_1100;
}
else
{
((*(R27 *)rt_nil_check(l_VTAIL_1092))).f_NEXT = l_V_1100;
}
l_VTAIL_1092 = l_V_1100;
}
}
l_A_1093 = ((*(R17 *)rt_nil_check(l_A_1093))).f_NEXT;
l_N_1096 = ((*(R17 *)rt_nil_check(l_N_1096))).f_NEXT;
}
RT_B_TICK();
} L_end1097: ;
}
l_F_1094 = ((*(R17 *)rt_nil_check(l_F_1094))).f_NEXT;
}
RT_B_TICK();
} L_end1095: ;
if ((!(l_A_1093 == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
{
R12 * l_R_1103; memset(&l_R_1103, 0, sizeof l_R_1103);
l_R_1103 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_1103 == NULL)) goto L_end1104;
{
if (((((*(R12 *)rt_nil_check(l_R_1103))).f_DECL == l_D_1088) && r_SAME_BINDS(((*(R12 *)rt_nil_check(l_R_1103))).f_BINDINGS, l_TARGS_1090)))
{
l_CLASS_1089 = ((*(R12 *)rt_nil_check(l_R_1103))).f_T;
goto L_end1104;
}
l_R_1103 = ((*(R12 *)rt_nil_check(l_R_1103))).f_INSTANCES;
}
RT_B_TICK();
} L_end1104: ;
}
if ((l_CLASS_1089 == NULL))
{
{
R12 * l_R_1105; memset(&l_R_1105, 0, sizeof l_R_1105);
l_R_1105 = r_NEW_SYM(g_Y_TYPE, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R21 * l_B_1106; memset(&l_B_1106, 0, sizeof l_B_1106);
l_B_1106 = l_TARGS_1090;
R21 * l_SAVED_1107; memset(&l_SAVED_1107, 0, sizeof l_SAVED_1107);
l_SAVED_1107 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
rt_int l_ENTERED_1108; memset(&l_ENTERED_1108, 0, sizeof l_ENTERED_1108);
((*(R12 *)rt_nil_check(l_R_1105))).f_DECL = l_D_1088;
((*(R12 *)rt_nil_check(l_R_1105))).f_BINDINGS = l_TARGS_1090;
((*(R12 *)rt_nil_check(l_R_1105))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
((*(R7 *)rt_nil_check(g_W))).f_RECS = l_R_1105;
l_ENTERED_1108 = r_ENTER_MODULE_FOR(p_Y);
r_OPEN_SCOPE();
for (;;) {
if ((l_B_1106 == NULL)) goto L_end1109;
{
{
R12 * l_TY_1110; memset(&l_TY_1110, 0, sizeof l_TY_1110);
l_TY_1110 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_B_1106))).f_NAME);
((*(R12 *)rt_nil_check(l_TY_1110))).f_T = ((*(R21 *)rt_nil_check(l_B_1106))).f_T;
r_DEFINE(l_TY_1110, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_1106 = ((*(R21 *)rt_nil_check(l_B_1106))).f_NEXT;
}
RT_B_TICK();
} L_end1109: ;
l_F_1094 = ((*(R17 *)rt_nil_check(l_D_1088))).f_A;
for (;;) {
if ((l_F_1094 == NULL)) goto L_end1111;
{
if ((!(((*(R17 *)rt_nil_check(l_F_1094))).f_B == NULL)))
{
{
R17 * l_N_1112; memset(&l_N_1112, 0, sizeof l_N_1112);
l_N_1112 = ((*(R17 *)rt_nil_check(l_F_1094))).f_A;
for (;;) {
if ((l_N_1112 == NULL)) goto L_end1113;
{
{
R12 * l_P_1114; memset(&l_P_1114, 0, sizeof l_P_1114);
l_P_1114 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(l_N_1112))).f_NAME);
((*(R12 *)rt_nil_check(l_P_1114))).f_T = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_1094))).f_B);
S_R9(&((*(R12 *)rt_nil_check(l_P_1114))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), r_CID(((*(R17 *)rt_nil_check(l_N_1112))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_P_1114))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_P_1114))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_1114, ((*(R17 *)rt_nil_check(l_F_1094))).f_LINE);
}
l_N_1112 = ((*(R17 *)rt_nil_check(l_N_1112))).f_NEXT;
}
RT_B_TICK();
} L_end1113: ;
}
}
l_F_1094 = ((*(R17 *)rt_nil_check(l_F_1094))).f_NEXT;
}
RT_B_TICK();
} L_end1111: ;
if ((l_TARGS_1090 == NULL))
{
l_CLASS_1089 = r_RESOLVE_RECORD(((*(R17 *)rt_nil_check(l_D_1088))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R17 *)rt_nil_check(l_D_1088))).f_A);
}
else
{
l_CLASS_1089 = r_RESOLVE_RECORD(((*(R17 *)rt_nil_check(l_D_1088))).f_B, r_NO_TEXT(), p_Y, ((*(R17 *)rt_nil_check(l_D_1088))).f_A);
}
S_R9(&((*(R22 *)rt_nil_check(l_CLASS_1089))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R12 *)rt_nil_check(l_R_1105))).f_T = l_CLASS_1089;
r_CLOSE_SCOPE();
if (l_ENTERED_1108)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1107;
}
}
{
R22 * l_T_1115; memset(&l_T_1115, 0, sizeof l_T_1115);
l_T_1115 = r_COPY_TYP(l_CLASS_1089);
((*(R22 *)rt_nil_check(l_T_1115))).f_ARGS = l_VARGS_1091;
{ R22 * rv1116 = l_T_1115;
return rv1116; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_1117; memset(&l_P_1117, 0, sizeof l_P_1117);
l_P_1117 = p_A;
R21 * l_Q_1118; memset(&l_Q_1118, 0, sizeof l_Q_1118);
l_Q_1118 = p_B;
for (;;) {
if (((l_P_1117 == NULL) || (l_Q_1118 == NULL))) goto L_end1119;
{
if ((((!r_SAME_TYPE(((*(R21 *)rt_nil_check(l_P_1117))).f_T, ((*(R21 *)rt_nil_check(l_Q_1118))).f_T)) || (!r_SAME_LENGTH(((*(R21 *)rt_nil_check(l_P_1117))).f_T, ((*(R21 *)rt_nil_check(l_Q_1118))).f_T))) || (!r_SAME_REPS(((*(R21 *)rt_nil_check(l_P_1117))).f_T, ((*(R21 *)rt_nil_check(l_Q_1118))).f_T))))
{
{ rt_int rv1120 = 0;
return rv1120; }
}
l_P_1117 = ((*(R21 *)rt_nil_check(l_P_1117))).f_NEXT;
l_Q_1118 = ((*(R21 *)rt_nil_check(l_Q_1118))).f_NEXT;
}
RT_B_TICK();
} L_end1119: ;
{ rt_int rv1121 = ((l_P_1117 == NULL) && (l_Q_1118 == NULL));
return rv1121; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R22 * p_T) { RT_B_TICK(); 
R27 * l_A_1122; memset(&l_A_1122, 0, sizeof l_A_1122);
l_A_1122 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_1122 == NULL)) goto L_end1123;
{
if (((*(R27 *)rt_nil_check(l_A_1122))).f_ANYARG)
{
{ rt_int rv1124 = 1;
return rv1124; }
}
l_A_1122 = ((*(R27 *)rt_nil_check(l_A_1122))).f_NEXT;
}
RT_B_TICK();
} L_end1123: ;
{ rt_int rv1125 = 0;
return rv1125; }
rt_raise(RT_X_INIT);
}
static R9 r_VARIANT_COND(R26 * p_F, R22 * p_T, R9 p_SELF) { RT_B_TICK(); 
R17 * l_L_1126; memset(&l_L_1126, 0, sizeof l_L_1126);
l_L_1126 = ((*(R26 *)rt_nil_check(p_F))).f_LABELS;
R9 l_C_1127; memset(&l_C_1127, 0, sizeof l_C_1127);
S_R9(&l_C_1127, r_MK(rt_str("0", 1)), 0);
R26 * l_TF_1128; memset(&l_TF_1128, 0, sizeof l_TF_1128);
l_TF_1128 = r_FIND_FIELD(p_T, ((*(R26 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_1126 == NULL)) goto L_end1129;
{
if ((((*(R17 *)rt_nil_check(l_L_1126))).f_KIND == g_N_RANGE))
{
S_R9(&l_C_1127, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_1127, p_SELF, ((*(R26 *)rt_nil_check(l_TF_1128))).f_CNAME), 0);
S_R9(&l_C_1127, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_1127, (r_EXPR(((*(R17 *)rt_nil_check(l_L_1126))).f_A, ((*(R26 *)rt_nil_check(l_TF_1128))).f_T)).f_C, p_SELF, ((*(R26 *)rt_nil_check(l_TF_1128))).f_CNAME), 0);
S_R9(&l_C_1127, r_FMT2(rt_str("@@)", 3), l_C_1127, (r_EXPR(((*(R17 *)rt_nil_check(l_L_1126))).f_B, ((*(R26 *)rt_nil_check(l_TF_1128))).f_T)).f_C), 0);
}
else
{
S_R9(&l_C_1127, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_1127, p_SELF, ((*(R26 *)rt_nil_check(l_TF_1128))).f_CNAME, (r_EXPR(l_L_1126, ((*(R26 *)rt_nil_check(l_TF_1128))).f_T)).f_C), 0);
}
l_L_1126 = ((*(R17 *)rt_nil_check(l_L_1126))).f_NEXT;
}
RT_B_TICK();
} L_end1129: ;
{ R9 rv1130 = r_FMT1(rt_str("(@)", 3), l_C_1127);
return rv1130; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R22 * p_T) { RT_B_TICK(); 
R9 l_C_1131; memset(&l_C_1131, 0, sizeof l_C_1131);
S_R9(&l_C_1131, ((*(R22 *)rt_nil_check(p_T))).f_CNAME, 0);
R26 * l_F_1132; memset(&l_F_1132, 0, sizeof l_F_1132);
l_F_1132 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_BODY_1133; memset(&l_BODY_1133, 0, sizeof l_BODY_1133);
S_R9(&l_BODY_1133, r_MK(rt_str("", 0)), 0);
R9 l_ASSIGN_1134; memset(&l_ASSIGN_1134, 0, sizeof l_ASSIGN_1134);
S_R9(&l_ASSIGN_1134, r_MK(rt_str("", 0)), 0);
R9 l_COPY_1135; memset(&l_COPY_1135, 0, sizeof l_COPY_1135);
S_R9(&l_COPY_1135, r_MK(rt_str("", 0)), 0);
R9 l_EQ_1136; memset(&l_EQ_1136, 0, sizeof l_EQ_1136);
S_R9(&l_EQ_1136, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_1132 == NULL)) goto L_end1137;
{
S_R9(&l_BODY_1133, r_FMT3(rt_str("@ @ @;", 6), l_BODY_1133, r_CTYPE(((*(R26 *)rt_nil_check(l_F_1132))).f_T), ((*(R26 *)rt_nil_check(l_F_1132))).f_CNAME), 0);
S_R9(&l_COPY_1135, r_FMT3(rt_str("@ d.@ = @;", 10), l_COPY_1135, ((*(R26 *)rt_nil_check(l_F_1132))).f_CNAME, r_COPY_OF(((*(R26 *)rt_nil_check(l_F_1132))).f_T, r_FMT1(rt_str("s.@", 3), ((*(R26 *)rt_nil_check(l_F_1132))).f_CNAME))), 0);
if ((((*(R26 *)rt_nil_check(l_F_1132))).f_KIND == ((rt_int)1LL)))
{
S_R9(&l_ASSIGN_1134, r_FMT2(rt_str("@ if (!(@)) rt_raise(RT_B_TYPE_MISMATCH);", 41), l_ASSIGN_1134, r_EQUAL_CODE(((*(R26 *)rt_nil_check(l_F_1132))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R26 *)rt_nil_check(l_F_1132))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R26 *)rt_nil_check(l_F_1132))).f_CNAME))), 0);
}
else if ((((*(R26 *)rt_nil_check(l_F_1132))).f_KIND == ((rt_int)2LL)))
{
S_R9(&l_ASSIGN_1134, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_1134, ((*(R26 *)rt_nil_check(l_F_1132))).f_CNAME, ((*(R26 *)rt_nil_check(l_F_1132))).f_CNAME, ((*(R26 *)rt_nil_check(l_F_1132))).f_CNAME), 0);
}
else
{
S_R9(&l_ASSIGN_1134, r_FMT2(rt_str("@ @", 3), l_ASSIGN_1134, r_ASSIGN_CODE(((*(R26 *)rt_nil_check(l_F_1132))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R26 *)rt_nil_check(l_F_1132))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R26 *)rt_nil_check(l_F_1132))).f_CNAME))), 0);
}
if (((((*(R26 *)rt_nil_check(l_F_1132))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R9(&l_EQ_1136, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1136, r_VARIANT_COND(l_F_1132, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R26 *)rt_nil_check(l_F_1132))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R26 *)rt_nil_check(l_F_1132))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R26 *)rt_nil_check(l_F_1132))).f_CNAME))), 0);
}
else
{
S_R9(&l_EQ_1136, r_FMT2(rt_str("@ && @", 6), l_EQ_1136, r_EQUAL_CODE(((*(R26 *)rt_nil_check(l_F_1132))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R26 *)rt_nil_check(l_F_1132))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R26 *)rt_nil_check(l_F_1132))).f_CNAME))), 0);
}
l_F_1132 = ((*(R26 *)rt_nil_check(l_F_1132))).f_NEXT;
}
RT_B_TICK();
} L_end1137: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_1131, l_BODY_1133));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_1131, l_C_1131, l_C_1131));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_1131, l_C_1131, l_C_1131));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_1131, l_C_1131, l_C_1131, l_ASSIGN_1134));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_1131, l_C_1131, l_C_1131, l_EQ_1136));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_1131, l_C_1131, l_C_1131));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s;", 28), l_C_1131, l_C_1131, l_C_1131, l_C_1131));
r_EMIT(g_O_HELPERS, r_FMT1(rt_str("@ return d; }", 13), l_COPY_1135));
}
static R9 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R9 l_ET_C_1138; memset(&l_ET_C_1138, 0, sizeof l_ET_C_1138);
S_R9(&l_ET_C_1138, r_CTYPE(p_ELEM), 0);
R9 l_KEY_1139; memset(&l_KEY_1139, 0, sizeof l_KEY_1139);
S_R9(&l_KEY_1139, r_FMT3(rt_str("@/@/@", 5), l_ET_C_1138, r_NUM(p_DIMS), r_NUM(((*(R22 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R12 * l_Y_1140; memset(&l_Y_1140, 0, sizeof l_Y_1140);
l_Y_1140 = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_1140 == NULL)) goto L_end1141;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_1140))).f_NAME, l_KEY_1139) && r_SAME_TYPE(((*(R12 *)rt_nil_check(l_Y_1140))).f_T, p_ELEM)))
{
{ R9 rv1142 = ((*(R12 *)rt_nil_check(l_Y_1140))).f_ACCESS;
return rv1142; }
}
l_Y_1140 = ((*(R12 *)rt_nil_check(l_Y_1140))).f_INSTANCES;
}
RT_B_TICK();
} L_end1141: ;
l_Y_1140 = r_NEW_SYM(g_Y_TYPE, l_KEY_1139);
((*(R12 *)rt_nil_check(l_Y_1140))).f_T = p_ELEM;
S_R9(&((*(R12 *)rt_nil_check(l_Y_1140))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R12 *)rt_nil_check(l_Y_1140))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R7 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_1140;
{
R9 l_C_1143; memset(&l_C_1143, 0, sizeof l_C_1143);
S_R9(&l_C_1143, ((*(R12 *)rt_nil_check(l_Y_1140))).f_ACCESS, 0);
R9 l_D_1144; memset(&l_D_1144, 0, sizeof l_D_1144);
S_R9(&l_D_1144, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_1143, l_C_1143));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_1143, l_D_1144, l_D_1144, l_ET_C_1138));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_1143, l_C_1143, l_C_1143));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_1143, l_C_1143, l_C_1143));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_1143, l_C_1143, l_C_1143, l_D_1144));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_1144, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_1143, l_C_1143, l_C_1143, l_D_1144));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_1144, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_1143, l_C_1143, l_C_1143));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s; ", 29), l_C_1143, l_C_1143, l_C_1143, l_C_1143));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("rt_int n = rt_b_extent(@, s.lo, s.hi); d.p = rt_alloc((n > 0 \? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = @; return d; }", 140), l_D_1144, r_COPY_OF(p_ELEM, r_MK(rt_str("s.p[i]", 6)))));
}
{ R9 rv1145 = ((*(R12 *)rt_nil_check(l_Y_1140))).f_ACCESS;
return rv1145; }
rt_raise(RT_X_INIT);
}
static R9 r_INIT_CODE(R22 * p_T, R9 p_LV) { RT_B_TICK(); 
rt_int l_K_1146; memset(&l_K_1146, 0, sizeof l_K_1146);
l_K_1146 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1146 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1147 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv1147; }
}
{ R9 rv1148 = r_FMT2(rt_str("@ = rt_b_str_new(@, 0);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv1148; }
}
else if ((l_K_1146 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1149 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv1149; }
}
{ R9 rv1150 = r_FMT2(rt_str("@ = rt_b_str_new(@, 1);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv1150; }
}
else if ((l_K_1146 == g_T_SEM))
{
{ R9 rv1151 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv1151; }
}
else if ((l_K_1146 == g_T_ABS))
{
{ R9 rv1152 = r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv1152; }
}
else if ((l_K_1146 == g_T_ARR))
{
{
R27 * l_B_1153; memset(&l_B_1153, 0, sizeof l_B_1153);
l_B_1153 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_1154; memset(&l_I_1154, 0, sizeof l_I_1154);
l_I_1154 = ((rt_int)0LL);
R9 l_R_1155; memset(&l_R_1155, 0, sizeof l_R_1155);
S_R9(&l_R_1155, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_1153 == NULL)) goto L_end1156;
{
S_R9(&l_R_1155, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_1155, p_LV, r_NUM(l_I_1154), ((*(R27 *)rt_nil_check(l_B_1153))).f_LO), 0);
S_R9(&l_R_1155, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_1155, p_LV, r_NUM(l_I_1154), ((*(R27 *)rt_nil_check(l_B_1153))).f_HI), 0);
l_I_1154 = rt_add(l_I_1154, ((rt_int)1LL));
l_B_1153 = ((*(R27 *)rt_nil_check(l_B_1153))).f_NEXT;
}
RT_B_TICK();
} L_end1156: ;
S_R9(&l_R_1155, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_1155, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
if ((r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)).f_OK)
{
S_R9(&l_R_1155, r_FMT4(rt_str("@ @.p = rt_b_array_alloc_bits(n, sizeof *@.p, @", 47), l_R_1155, p_LV, p_LV, r_FMT2(rt_str("rt_b_pack_size(n, @, @));", 25), r_NUM((r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)).f_V), r_NUM(r_PACKING_OF(p_T)))), 0);
}
else
{
S_R9(&l_R_1155, r_FMT4(rt_str("@ @.p = rt_b_array_alloc(n, sizeof *@.p);", 41), l_R_1155, p_LV, p_LV, p_LV), 0);
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_ELEM))
{
{
R9 l_IV_1157; memset(&l_IV_1157, 0, sizeof l_IV_1157);
S_R9(&l_IV_1157, r_NEW_NAME(rt_str("i", 1)), 0);
S_R9(&l_R_1155, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_1155, l_IV_1157, l_IV_1157, l_IV_1157), 0);
S_R9(&l_R_1155, r_FMT2(rt_str("@ @ }", 5), l_R_1155, r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_1157))), 0);
}
}
if ((!(r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)).f_OK))
{
S_R9(&l_R_1155, r_FMT4(rt_str("@ rt_b_array_check(rt_b_pack_size(n, n \? @ : 0, @));", 52), l_R_1155, (r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT1(rt_str("@.p[0]", 6), p_LV))).f_C, r_NUM(r_PACKING_OF(p_T)), r_MK(rt_str("", 0))), 0);
}
{ R9 rv1158 = r_CATS(l_R_1155, rt_str(" }", 2));
return rv1158; }
}
}
else if ((l_K_1146 == g_T_REC))
{
{
R26 * l_F_1159; memset(&l_F_1159, 0, sizeof l_F_1159);
l_F_1159 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R27 * l_A_1160; memset(&l_A_1160, 0, sizeof l_A_1160);
l_A_1160 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R9 l_R_1161; memset(&l_R_1161, 0, sizeof l_R_1161);
S_R9(&l_R_1161, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_1159 == NULL)) goto L_end1162;
{
if ((!(((*(R26 *)rt_nil_check(l_F_1159))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_1160 == NULL)))
{
if ((!((*(R27 *)rt_nil_check(l_A_1160))).f_ANYARG))
{
S_R9(&l_R_1161, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_1161, p_LV, ((*(R26 *)rt_nil_check(l_F_1159))).f_CNAME, ((*(R27 *)rt_nil_check(l_A_1160))).f_LO), 0);
}
else if (((((*(R26 *)rt_nil_check(l_F_1159))).f_KIND == ((rt_int)2LL)) && ((((*(R27 *)rt_nil_check(l_A_1160))).f_HI).f_LEN == ((rt_int)0LL))))
{
S_R9(&l_R_1161, r_FMT3(rt_str("@ @.@ = INT64_MIN;", 18), l_R_1161, p_LV, ((*(R26 *)rt_nil_check(l_F_1159))).f_CNAME), 0);
}
l_A_1160 = ((*(R27 *)rt_nil_check(l_A_1160))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R26 *)rt_nil_check(l_F_1159))).f_T))
{
S_R9(&l_R_1161, r_FMT2(rt_str("@ @", 3), l_R_1161, r_SUBST_SELF(r_INIT_CODE(((*(R26 *)rt_nil_check(l_F_1159))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R26 *)rt_nil_check(l_F_1159))).f_CNAME)), p_LV)), 0);
}
l_F_1159 = ((*(R26 *)rt_nil_check(l_F_1159))).f_NEXT;
}
RT_B_TICK();
} L_end1162: ;
{ R9 rv1163 = l_R_1161;
return rv1163; }
}
}
{ R9 rv1164 = r_NO_TEXT();
return rv1164; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1165; memset(&l_K_1165, 0, sizeof l_K_1165);
l_K_1165 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((l_K_1165 == g_T_STR) || (l_K_1165 == g_T_BITS)) || (l_K_1165 == g_T_ARR)) || (l_K_1165 == g_T_SEM)))
{
{ rt_int rv1166 = 1;
return rv1166; }
}
else if ((l_K_1165 == g_T_ABS))
{
{ rt_int rv1167 = r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1167; }
}
else if ((l_K_1165 == g_T_REC))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv1168 = 1;
return rv1168; }
}
{
R26 * l_F_1169; memset(&l_F_1169, 0, sizeof l_F_1169);
l_F_1169 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1169 == NULL)) goto L_end1170;
{
if (r_NEEDS_INIT(((*(R26 *)rt_nil_check(l_F_1169))).f_T))
{
{ rt_int rv1171 = 1;
return rv1171; }
}
l_F_1169 = ((*(R26 *)rt_nil_check(l_F_1169))).f_NEXT;
}
RT_B_TICK();
} L_end1170: ;
}
}
{ rt_int rv1172 = 0;
return rv1172; }
rt_raise(RT_X_INIT);
}
static R9 r_COPY_OF(R22 * p_T, R9 p_V) { RT_B_TICK(); 
rt_int l_K_1173; memset(&l_K_1173, 0, sizeof l_K_1173);
l_K_1173 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1173 == g_T_STR) || (l_K_1173 == g_T_BITS)))
{
{ R9 rv1174 = r_FMT1(rt_str("rt_str_copy(@)", 14), p_V);
return rv1174; }
}
else if ((l_K_1173 == g_T_ABS))
{
{ R9 rv1175 = r_COPY_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_V);
return rv1175; }
}
else if (((l_K_1173 == g_T_ARR) || (l_K_1173 == g_T_REC)))
{
{ R9 rv1176 = r_FMT2(rt_str("C_@(@)", 6), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_V);
return rv1176; }
}
{ R9 rv1177 = p_V;
return rv1177; }
rt_raise(RT_X_INIT);
}
static R9 r_ASSIGN_CODE(R22 * p_T, R9 p_LV, R9 p_RV) { RT_B_TICK(); 
rt_int l_K_1178; memset(&l_K_1178, 0, sizeof l_K_1178);
l_K_1178 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1178 == g_T_STR) || (l_K_1178 == g_T_BITS)))
{
{ R9 rv1179 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv1179; }
}
else if ((l_K_1178 == g_T_ABS))
{
{ R9 rv1180 = r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv1180; }
}
else if ((l_K_1178 == g_T_SEM))
{
{ R9 rv1181 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv1181; }
}
else if ((l_K_1178 == g_T_ARR))
{
{ R9 rv1182 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1182; }
}
else if ((l_K_1178 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R9 rv1183 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1183; }
}
{ R9 rv1184 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1184; }
}
{ R9 rv1185 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv1185; }
rt_raise(RT_X_INIT);
}
static R9 r_EQUAL_CODE(R22 * p_T, R9 p_A, R9 p_B) { RT_B_TICK(); 
rt_int l_K_1186; memset(&l_K_1186, 0, sizeof l_K_1186);
l_K_1186 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((l_K_1186 == g_T_STR) || (l_K_1186 == g_T_BITS)))
{
{ R9 rv1187 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv1187; }
}
else if ((l_K_1186 == g_T_ABS))
{
{ R9 rv1188 = r_EQUAL_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv1188; }
}
else if (((l_K_1186 == g_T_ARR) || (l_K_1186 == g_T_REC)))
{
{ R9 rv1189 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv1189; }
}
else if ((l_K_1186 == g_T_SEM))
{
{ R9 rv1190 = r_MK(rt_str("0", 1));
return rv1190; }
}
else if (r_IS_D(p_T))
{
{ R9 rv1191 = r_FMT2(rt_str("(rt_b_dcmp(@, @) == 0)", 22), p_A, p_B);
return rv1191; }
}
{ R9 rv1192 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv1192; }
rt_raise(RT_X_INIT);
}
static R9 r_RANGE_CHECK(R22 * p_T, R9 p_V, R9 p_SELF) { RT_B_TICK(); 
if ((((((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) && ((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN > ((rt_int)0LL))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))) && (r_REP_BITS(p_T) < ((rt_int)63LL))) && (!((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS)))
{
{
R9 l_U_1193; memset(&l_U_1193, 0, sizeof l_U_1193);
S_R9(&l_U_1193, r_MK(rt_str("0", 1)), 0);
if (r_REP_UNSIGNED(p_T))
{
S_R9(&l_U_1193, r_MK(rt_str("1", 1)), 0);
}
{ R9 rv1194 = r_RANGE_CHECK_IN(p_T, r_FMT3(rt_str("rt_b_rep_fits(@, @, @)", 22), p_V, r_NUM(r_REP_BITS(p_T)), l_U_1193), p_SELF);
return rv1194; }
}
}
{ R9 rv1195 = r_RANGE_CHECK_IN(p_T, p_V, p_SELF);
return rv1195; }
rt_raise(RT_X_INIT);
}
static R9 r_RANGE_CHECK_IN(R22 * p_T, R9 p_V, R9 p_SELF) { RT_B_TICK(); 
if (((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))) || ((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS))
{
{ R9 rv1196 = p_V;
return rv1196; }
}
if ((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R9 rv1197 = p_V;
return rv1197; }
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R9 rv1198 = p_V;
return rv1198; }
}
if (r_IS_D(p_T))
{
{
R9 l_TC_1199; memset(&l_TC_1199, 0, sizeof l_TC_1199);
S_R9(&l_TC_1199, r_MK(rt_str("0", 1)), 0);
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
S_R9(&l_TC_1199, r_MK(rt_str("1", 1)), 0);
}
{ R9 rv1200 = r_FMT4(rt_str("rt_b_drange(@, @, @, @)", 23), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF), l_TC_1199);
return rv1200; }
}
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R9 rv1201 = r_FMT3(rt_str("rt_b_tfrange(@, @, @)", 21), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1201; }
}
{ R9 rv1202 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1202; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R9 rv1203 = r_FMT3(rt_str("rt_b_trange(@, @, @)", 20), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1203; }
}
{ R9 rv1204 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1204; }
rt_raise(RT_X_INIT);
}
static rt_int r_REP_BITS(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv1205 = ((rt_int)63LL);
return rv1205; }
}
if (((!r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9))) || (((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ rt_int rv1206 = ((rt_int)63LL);
return rv1206; }
}
{
R25 l_N_1207; memset(&l_N_1207, 0, sizeof l_N_1207);
S_R25(&l_N_1207, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((((l_N_1207).f_OK && ((l_N_1207).f_V >= ((rt_int)0LL))) && ((l_N_1207).f_V < ((rt_int)63LL))))
{
{ rt_int rv1208 = (l_N_1207).f_V;
return rv1208; }
}
}
{ rt_int rv1209 = ((rt_int)63LL);
return rv1209; }
rt_raise(RT_X_INIT);
}
static rt_int r_REP_UNSIGNED(R22 * p_T) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_NEXT == NULL))
{
{ rt_int rv1210 = 0;
return rv1210; }
}
{ rt_int rv1211 = r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8));
return rv1211; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv1212 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv1212; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv1213 = 1;
return rv1213; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv1214 = r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv1214; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv1215 = r_SAME_CLASS(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1215; }
}
if ((!(((*(R22 *)rt_nil_check(p_A))).f_KIND == ((*(R22 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv1216 = 0;
return rv1216; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv1217 = (((*(R22 *)rt_nil_check(p_A))).f_BASE == ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1217; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1218 = ((((*(R22 *)rt_nil_check(p_A))).f_DIMS == ((*(R22 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM));
return rv1218; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv1219 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv1219; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1220 = ((r_ORIGINAL(((*(R22 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R22 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE));
return rv1220; }
}
{ rt_int rv1221 = 1;
return rv1221; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv1222 = 1;
return rv1222; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv1223 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv1223; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv1224 = r_SAME_TYPE(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1224; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv1225 = 0;
return rv1225; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv1226 = (((*(R22 *)rt_nil_check(p_A))).f_SCALE == ((*(R22 *)rt_nil_check(p_B))).f_SCALE);
return rv1226; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1227 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM);
return rv1227; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv1228 = r_SAME_ARGS(((*(R22 *)rt_nil_check(p_A))).f_ARGS, ((*(R22 *)rt_nil_check(p_B))).f_ARGS);
return rv1228; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1229 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1229; }
}
{ rt_int rv1230 = 1;
return rv1230; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R27 * p_B) { RT_B_TICK(); 
if (((((*(R27 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1231 = 0;
return rv1231; }
}
{ rt_int rv1232 = r_IS_GEN_TEXT(((*(R27 *)rt_nil_check(p_B))).f_HI);
return rv1232; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R27 * p_A, R27 * p_B) { RT_B_TICK(); 
R27 * l_P_1233; memset(&l_P_1233, 0, sizeof l_P_1233);
l_P_1233 = p_A;
R27 * l_Q_1234; memset(&l_Q_1234, 0, sizeof l_Q_1234);
l_Q_1234 = p_B;
for (;;) {
if (((l_P_1233 == NULL) || (l_Q_1234 == NULL))) goto L_end1235;
{
if ((r_IS_GEN_ARG(l_P_1233) || r_IS_GEN_ARG(l_Q_1234)))
{
}
else if ((!(((*(R27 *)rt_nil_check(l_P_1233))).f_ANYARG == ((*(R27 *)rt_nil_check(l_Q_1234))).f_ANYARG)))
{
{ rt_int rv1236 = 0;
return rv1236; }
}
if (((((*(R27 *)rt_nil_check(l_P_1233))).f_MLO).f_OK && (((*(R27 *)rt_nil_check(l_Q_1234))).f_MLO).f_OK))
{
if ((!((((*(R27 *)rt_nil_check(l_P_1233))).f_MLO).f_V == (((*(R27 *)rt_nil_check(l_Q_1234))).f_MLO).f_V)))
{
{ rt_int rv1237 = 0;
return rv1237; }
}
}
l_P_1233 = ((*(R27 *)rt_nil_check(l_P_1233))).f_NEXT;
l_Q_1234 = ((*(R27 *)rt_nil_check(l_Q_1234))).f_NEXT;
}
RT_B_TICK();
} L_end1235: ;
{ rt_int rv1238 = ((l_P_1233 == NULL) && (l_Q_1234 == NULL));
return rv1238; }
rt_raise(RT_X_INIT);
}
static R9 r_FRAME_OF(rt_int p_LEVEL) { RT_B_TICK(); 
R19 * l_CS_1239; memset(&l_CS_1239, 0, sizeof l_CS_1239);
l_CS_1239 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R9 l_T_1240; memset(&l_T_1240, 0, sizeof l_T_1240);
rt_int l_LEV_1241; memset(&l_LEV_1241, 0, sizeof l_LEV_1241);
if ((((*(R19 *)rt_nil_check(l_CS_1239))).f_LEVEL == p_LEVEL))
{
{ R9 rv1242 = r_MK(rt_str("F", 1));
return rv1242; }
}
if (((*(R19 *)rt_nil_check(l_CS_1239))).f_FRAMED)
{
S_R9(&l_T_1240, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R9(&l_T_1240, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_1241 = rt_sub(((*(R19 *)rt_nil_check(l_CS_1239))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_1241 <= p_LEVEL)) goto L_end1243;
{
S_R9(&l_T_1240, r_CATS(l_T_1240, rt_str("->up", 4)), 0);
l_LEV_1241 = rt_sub(l_LEV_1241, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1243: ;
{ R9 rv1244 = l_T_1240;
return rv1244; }
rt_raise(RT_X_INIT);
}
static R9 r_OBJ_ACCESS(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R12 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R9 rv1245 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1245; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1246 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1246; }
}
if (((*(R12 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R9 rv1247 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1247; }
}
{ R9 rv1248 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1248; }
rt_raise(RT_X_INIT);
}
static R9 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE) { RT_B_TICK(); 
R19 * l_CS_1249; memset(&l_CS_1249, 0, sizeof l_CS_1249);
l_CS_1249 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R22 * l_T_1250; memset(&l_T_1250, 0, sizeof l_T_1250);
l_T_1250 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
R9 l_CN_1251; memset(&l_CN_1251, 0, sizeof l_CN_1251);
if ((((((*(R19 *)rt_nil_check(l_CS_1249))).f_LEVEL == ((rt_int)0LL)) && ((((*(R7 *)rt_nil_check(g_W))).f_SEPSEG).f_LEN > ((rt_int)0LL))) && rt_b_eq(p_BASE, rt_str("", 0))))
{
((*(R7 *)rt_nil_check(g_W))).f_SEPV = rt_add(((*(R7 *)rt_nil_check(g_W))).f_SEPV, ((rt_int)1LL));
S_R9(&l_CN_1251, r_FMT3(rt_str("bs_@_v@_@", 9), r_CID(((*(R7 *)rt_nil_check(g_W))).f_SEPSEG), r_NUM(((*(R7 *)rt_nil_check(g_W))).f_SEPV), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
if (((*(R7 *)rt_nil_check(g_W))).f_EXTSEG)
{
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("extern @ @;", 11), r_CTYPE(l_T_1250), l_CN_1251));
}
else
{
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("@ @;", 4), r_CTYPE(l_T_1250), l_CN_1251));
}
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1251, 0);
{ R9 rv1252 = l_CN_1251;
return rv1252; }
}
if ((((*(R19 *)rt_nil_check(l_CS_1249))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R7 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R7 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R9(&l_CN_1251, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
}
else
{
S_R9(&l_CN_1251, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_1250), l_CN_1251));
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1251, 0);
{ R9 rv1253 = l_CN_1251;
return rv1253; }
}
S_R9(&l_CN_1251, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_FIELD, l_CN_1251, 0);
if (((*(R19 *)rt_nil_check(l_CS_1249))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_1250), l_CN_1251), &((*(R19 *)rt_nil_check(l_CS_1249))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_1251), 0);
{ R9 rv1254 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1254; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_1250), l_CN_1251, l_CN_1251, l_CN_1251));
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1251, 0);
{ R9 rv1255 = l_CN_1251;
return rv1255; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R17 * p_D) { RT_B_TICK(); 
R22 * l_T_1256; memset(&l_T_1256, 0, sizeof l_T_1256);
l_T_1256 = r_RESOLVE(((*(R17 *)rt_nil_check(p_D))).f_B);
R17 * l_N_1257; memset(&l_N_1257, 0, sizeof l_N_1257);
l_N_1257 = ((*(R17 *)rt_nil_check(p_D))).f_A;
R28 l_V_1258; memset(&l_V_1258, 0, sizeof l_V_1258);
rt_int l_HAVE_V_1259; memset(&l_HAVE_V_1259, 0, sizeof l_HAVE_V_1259);
l_HAVE_V_1259 = 0;
if (((((*(R22 *)rt_nil_check(l_T_1256))).f_KIND == g_T_TYPE) || (((*(R22 *)rt_nil_check(l_T_1256))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_1257 == NULL)) goto L_end1260;
{
{
R12 * l_Y_1261; memset(&l_Y_1261, 0, sizeof l_Y_1261);
l_Y_1261 = r_NEW_SYM(g_Y_VAR, ((*(R17 *)rt_nil_check(l_N_1257))).f_NAME);
R9 l_CN_1262; memset(&l_CN_1262, 0, sizeof l_CN_1262);
if ((((*(R17 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R12 *)rt_nil_check(l_Y_1261))).f_KIND = g_Y_CONST;
((*(R12 *)rt_nil_check(l_Y_1261))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_1256) && (((*(R22 *)rt_nil_check(l_T_1256))).f_SCALE == ((rt_int)0LL))))
{
{
R25 l_M_1263; memset(&l_M_1263, 0, sizeof l_M_1263);
S_R25(&l_M_1263, r_MANIFEST(((*(R17 *)rt_nil_check(p_D))).f_C), 0);
((*(R12 *)rt_nil_check(l_Y_1261))).f_HASMV = (l_M_1263).f_OK;
((*(R12 *)rt_nil_check(l_Y_1261))).f_MV = (l_M_1263).f_V;
}
}
}
((*(R12 *)rt_nil_check(l_Y_1261))).f_T = l_T_1256;
S_R9(&l_CN_1262, r_NEW_OBJECT(l_Y_1261, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_1256))
{
r_CODE(r_INIT_CODE(l_T_1256, l_CN_1262));
}
if ((!(((*(R17 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_1259))
{
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R17 *)rt_nil_check(p_D))).f_C;
S_R28(&l_V_1258, r_EXPR(((*(R17 *)rt_nil_check(p_D))).f_C, l_T_1256), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
l_HAVE_V_1259 = 1;
}
r_CODE(r_STORE_CODE(l_T_1256, l_CN_1262, l_V_1258, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_1261, ((*(R17 *)rt_nil_check(l_N_1257))).f_LINE);
}
l_N_1257 = ((*(R17 *)rt_nil_check(l_N_1257))).f_NEXT;
}
RT_B_TICK();
} L_end1260: ;
}
static R28 r_MKET(R9 p_C, R22 * p_T) { RT_B_TICK(); 
{ R28 rv1264 = ({ R28 rc1265; memset(&rc1265, 0, sizeof rc1265);  S_R9(&rc1265.f_C, p_C, 0); rc1265.f_T = p_T; rc1265.f_LVAL = 0; S_R9(&rc1265.f_SELF, r_NO_TEXT(), 0); rc1265; });
return rv1264; }
rt_raise(RT_X_INIT);
}
static R28 r_MKLV(R9 p_C, R22 * p_T, rt_int p_LVAL, R9 p_SELF) { RT_B_TICK(); 
{ R28 rv1266 = ({ R28 rc1267; memset(&rc1267, 0, sizeof rc1267);  S_R9(&rc1267.f_C, p_C, 0); rc1267.f_T = p_T; rc1267.f_LVAL = p_LVAL; S_R9(&rc1267.f_SELF, p_SELF, 0); rc1267; });
return rv1266; }
rt_raise(RT_X_INIT);
}
static R22 * r_INT_TYPE(rt_int p_SCALE) { RT_B_TICK(); 
R22 * l_T_1268; memset(&l_T_1268, 0, sizeof l_T_1268);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R22 * rv1269 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv1269; }
}
l_T_1268 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_1268))).f_SCALE = p_SCALE;
{ R22 * rv1270 = l_T_1268;
return rv1270; }
rt_raise(RT_X_INIT);
}
static R22 * r_STR_TYPE(R9 p_LEN, R25 p_M) { RT_B_TICK(); 
R22 * l_T_1271; memset(&l_T_1271, 0, sizeof l_T_1271);
l_T_1271 = r_NEW_TYP(g_T_STR);
S_R9(&((*(R22 *)rt_nil_check(l_T_1271))).f_LEN_C, p_LEN, 0);
S_R25(&((*(R22 *)rt_nil_check(l_T_1271))).f_MLEN, p_M, 0);
{ R22 * rv1272 = l_T_1271;
return rv1272; }
rt_raise(RT_X_INIT);
}
static R9 r_CSTRING(R9 p_T) { RT_B_TICK(); 
rstr l_S_1273; memset(&l_S_1273, 0, sizeof l_S_1273);
l_S_1273 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_1273, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_1274; memset(&l_AT_1274, 0, sizeof l_AT_1274);
l_AT_1274 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R9 l_R_1275; memset(&l_R_1275, 0, sizeof l_R_1275);
S_R9(&l_R_1275, r_MK(rt_str("\"", 1)), 0);
{ rt_int it1277_lo = ((rt_int)0LL), it1277_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it1277 = it1277_lo; it1277 <= it1277_hi; it1277++) {
{
if ((rt_b_eq(rt_b_slice(l_S_1273, it1277, it1277), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_1273, it1277, it1277), rt_str("\\", 1))))
{
S_R9(&l_R_1275, r_MK(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_S_1273, it1277, it1277))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1273, it1277, it1277), rt_str("\?", 1)))
{
S_R9(&l_R_1275, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_1278; memset(&l_C_1278, 0, sizeof l_C_1278);
l_C_1278 = r_CODE_OF(rt_b_slice(l_S_1273, it1277, it1277));
if (({ rt_int iv1279 = l_C_1278; (((rt_int)32LL) <= iv1279) && (iv1279 <= ((rt_int)126LL)); }))
{
S_R9(&l_R_1275, r_MK(rt_b_slice(l_S_1273, it1277, it1277)), 0);
}
else
{
S_R9(&l_R_1275, r_MK(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_1278, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_1278, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_1278, ((rt_int)8LL))))), 0);
}
}
}
}
RT_B_TICK();
if (it1277 == it1277_hi) break;
} } L_end1276: ;
S_R9(&l_R_1275, r_MK(rt_str("\"", 1)), 0);
{ R9 rv1280 = ({ R9 rc1281; memset(&rc1281, 0, sizeof rc1281);  rc1281.f_AT = l_AT_1274; rc1281.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_1274); rc1281.f_H = rt_neg(((rt_int)1LL)); rc1281; });
return rv1280; }
rt_raise(RT_X_INIT);
}
static R25 r_MANIFEST(R17 * p_E) { RT_B_TICK(); 
rt_int l_K_1282; memset(&l_K_1282, 0, sizeof l_K_1282);
l_K_1282 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
R25 l_NO_1283; memset(&l_NO_1283, 0, sizeof l_NO_1283);
S_R25(&l_NO_1283, ({ R25 rc1284; memset(&rc1284, 0, sizeof rc1284);  rc1284.f_OK = 0; rc1284.f_V = ((rt_int)0LL); rc1284; }), 0);
if ((l_K_1282 == g_N_INT))
{
{ R25 rv1285 = ({ R25 rc1286; memset(&rc1286, 0, sizeof rc1286);  rc1286.f_OK = 1; rc1286.f_V = ((*(R17 *)rt_nil_check(p_E))).f_IV; rc1286; });
return rv1285; }
}
else if ((l_K_1282 == g_N_PAREN))
{
{ R25 rv1287 = r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A);
return rv1287; }
}
else if ((l_K_1282 == g_N_BOOL))
{
{ R25 rv1288 = ({ R25 rc1289; memset(&rc1289, 0, sizeof rc1289);  rc1289.f_OK = 1; rc1289.f_V = ((*(R17 *)rt_nil_check(p_E))).f_IV; rc1289; });
return rv1288; }
}
else if ((l_K_1282 == g_N_UNOP))
{
{
R25 l_A_1290; memset(&l_A_1290, 0, sizeof l_A_1290);
S_R25(&l_A_1290, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
if ((!(l_A_1290).f_OK))
{
{ R25 rv1291 = l_NO_1283;
return rv1291; }
}
{ R25 rv1292 = ({ R25 rc1293; memset(&rc1293, 0, sizeof rc1293);  rc1293.f_OK = 1; rc1293.f_V = r_MANIFEST_ARITH(r_MK(rt_str("-", 1)), ((rt_int)0LL), (l_A_1290).f_V, ((*(R17 *)rt_nil_check(p_E))).f_LINE); rc1293; });
return rv1292; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R25 rv1294 = l_A_1290;
return rv1294; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R25 rv1295 = ({ R25 rc1296; memset(&rc1296, 0, sizeof rc1296);  rc1296.f_OK = (l_A_1290).f_OK; rc1296.f_V = rt_sub(((rt_int)1LL), (l_A_1290).f_V); rc1296; });
return rv1295; }
}
}
}
else if ((l_K_1282 == g_N_BINOP))
{
if ((!(((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R25 rv1297 = l_NO_1283;
return rv1297; }
}
{
R25 l_A_1298; memset(&l_A_1298, 0, sizeof l_A_1298);
S_R25(&l_A_1298, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R25 l_B_1299; memset(&l_B_1299, 0, sizeof l_B_1299);
S_R25(&l_B_1299, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
R9 l_OP_1300; memset(&l_OP_1300, 0, sizeof l_OP_1300);
S_R9(&l_OP_1300, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
if (r_TEQS(l_OP_1300, rt_str("&", 1)))
{
if (((((l_A_1298).f_OK && ((l_A_1298).f_V == ((rt_int)0LL)))) || (((l_B_1299).f_OK && ((l_B_1299).f_V == ((rt_int)0LL))))))
{
{ R25 rv1301 = ({ R25 rc1302; memset(&rc1302, 0, sizeof rc1302);  rc1302.f_OK = 1; rc1302.f_V = ((rt_int)0LL); rc1302; });
return rv1301; }
}
if (((l_A_1298).f_OK && (l_B_1299).f_OK))
{
{ R25 rv1303 = ({ R25 rc1304; memset(&rc1304, 0, sizeof rc1304);  rc1304.f_OK = 1; rc1304.f_V = ((rt_int)1LL); rc1304; });
return rv1303; }
}
{ R25 rv1305 = l_NO_1283;
return rv1305; }
}
else if (r_TEQS(l_OP_1300, rt_str("!", 1)))
{
if (((((l_A_1298).f_OK && ((l_A_1298).f_V == ((rt_int)1LL)))) || (((l_B_1299).f_OK && ((l_B_1299).f_V == ((rt_int)1LL))))))
{
{ R25 rv1306 = ({ R25 rc1307; memset(&rc1307, 0, sizeof rc1307);  rc1307.f_OK = 1; rc1307.f_V = ((rt_int)1LL); rc1307; });
return rv1306; }
}
if (((l_A_1298).f_OK && (l_B_1299).f_OK))
{
{ R25 rv1308 = ({ R25 rc1309; memset(&rc1309, 0, sizeof rc1309);  rc1309.f_OK = 1; rc1309.f_V = ((rt_int)0LL); rc1309; });
return rv1308; }
}
{ R25 rv1310 = l_NO_1283;
return rv1310; }
}
if ((!(((l_A_1298).f_OK && (l_B_1299).f_OK))))
{
{ R25 rv1311 = l_NO_1283;
return rv1311; }
}
if ((!((r_MANIFEST_INT(((*(R17 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R17 *)rt_nil_check(p_E))).f_B)))))
{
{ R25 rv1312 = l_NO_1283;
return rv1312; }
}
if (((r_TEQS(l_OP_1300, rt_str("+", 1)) || r_TEQS(l_OP_1300, rt_str("-", 1))) || r_TEQS(l_OP_1300, rt_str("*", 1))))
{
{ R25 rv1313 = ({ R25 rc1314; memset(&rc1314, 0, sizeof rc1314);  rc1314.f_OK = 1; rc1314.f_V = r_MANIFEST_ARITH(l_OP_1300, (l_A_1298).f_V, (l_B_1299).f_V, ((*(R17 *)rt_nil_check(p_E))).f_LINE); rc1314; });
return rv1313; }
}
else if ((r_TEQS(l_OP_1300, rt_str("//", 2)) && (!((l_B_1299).f_V == ((rt_int)0LL)))))
{
{ R25 rv1315 = ({ R25 rc1316; memset(&rc1316, 0, sizeof rc1316);  rc1316.f_OK = 1; rc1316.f_V = rt_quot((l_A_1298).f_V, (l_B_1299).f_V); rc1316; });
return rv1315; }
}
else if ((r_TEQS(l_OP_1300, rt_str("MOD", 3)) && (!((l_B_1299).f_V == ((rt_int)0LL)))))
{
{ R25 rv1317 = ({ R25 rc1318; memset(&rc1318, 0, sizeof rc1318);  rc1318.f_OK = 1; rc1318.f_V = rt_rem((l_A_1298).f_V, (l_B_1299).f_V); rc1318; });
return rv1317; }
}
else if (r_TEQS(l_OP_1300, rt_str("=", 1)))
{
{ R25 rv1319 = ({ R25 rc1320; memset(&rc1320, 0, sizeof rc1320);  rc1320.f_OK = 1; rc1320.f_V = r_BOOL_INT(((l_A_1298).f_V == (l_B_1299).f_V)); rc1320; });
return rv1319; }
}
else if (r_TEQS(l_OP_1300, rt_str("<>", 2)))
{
{ R25 rv1321 = ({ R25 rc1322; memset(&rc1322, 0, sizeof rc1322);  rc1322.f_OK = 1; rc1322.f_V = r_BOOL_INT((!((l_A_1298).f_V == (l_B_1299).f_V))); rc1322; });
return rv1321; }
}
else if (r_TEQS(l_OP_1300, rt_str("<", 1)))
{
{ R25 rv1323 = ({ R25 rc1324; memset(&rc1324, 0, sizeof rc1324);  rc1324.f_OK = 1; rc1324.f_V = r_BOOL_INT(((l_A_1298).f_V < (l_B_1299).f_V)); rc1324; });
return rv1323; }
}
else if (r_TEQS(l_OP_1300, rt_str(">", 1)))
{
{ R25 rv1325 = ({ R25 rc1326; memset(&rc1326, 0, sizeof rc1326);  rc1326.f_OK = 1; rc1326.f_V = r_BOOL_INT(((l_A_1298).f_V > (l_B_1299).f_V)); rc1326; });
return rv1325; }
}
else if (r_TEQS(l_OP_1300, rt_str("<=", 2)))
{
{ R25 rv1327 = ({ R25 rc1328; memset(&rc1328, 0, sizeof rc1328);  rc1328.f_OK = 1; rc1328.f_V = r_BOOL_INT(((l_A_1298).f_V <= (l_B_1299).f_V)); rc1328; });
return rv1327; }
}
else if (r_TEQS(l_OP_1300, rt_str(">=", 2)))
{
{ R25 rv1329 = ({ R25 rc1330; memset(&rc1330, 0, sizeof rc1330);  rc1330.f_OK = 1; rc1330.f_V = r_BOOL_INT(((l_A_1298).f_V >= (l_B_1299).f_V)); rc1330; });
return rv1329; }
}
}
}
else if ((l_K_1282 == g_N_IN))
{
{
R25 l_A_1331; memset(&l_A_1331, 0, sizeof l_A_1331);
S_R25(&l_A_1331, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R25 l_L_1332; memset(&l_L_1332, 0, sizeof l_L_1332);
S_R25(&l_L_1332, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R25 l_U_1333; memset(&l_U_1333, 0, sizeof l_U_1333);
S_R25(&l_U_1333, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_1334; memset(&l_LO_1334, 0, sizeof l_LO_1334);
rt_int l_HI_1335; memset(&l_HI_1335, 0, sizeof l_HI_1335);
if ((!(((((l_A_1331).f_OK && (l_L_1332).f_OK) && (l_U_1333).f_OK) && r_MANIFEST_INT(((*(R17 *)rt_nil_check(p_E))).f_A)))))
{
{ R25 rv1336 = l_NO_1283;
return rv1336; }
}
l_LO_1334 = (l_L_1332).f_V;
l_HI_1335 = (l_U_1333).f_V;
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_1334 = rt_add(l_LO_1334, ((rt_int)1LL));
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_1335 = rt_sub(l_HI_1335, ((rt_int)1LL));
}
{ R25 rv1337 = ({ R25 rc1338; memset(&rc1338, 0, sizeof rc1338);  rc1338.f_OK = 1; rc1338.f_V = r_BOOL_INT((((l_A_1331).f_V >= l_LO_1334) && ((l_A_1331).f_V <= l_HI_1335))); rc1338; });
return rv1337; }
}
}
else if (((l_K_1282 == g_N_NAME) || (l_K_1282 == g_TS_GEN)))
{
{
R12 * l_Y_1339; memset(&l_Y_1339, 0, sizeof l_Y_1339);
l_Y_1339 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
R21 * l_B_1340; memset(&l_B_1340, 0, sizeof l_B_1340);
l_B_1340 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_1340 == NULL)) goto L_end1341;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_1340))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME) && ((*(R21 *)rt_nil_check(l_B_1340))).f_HASMV))
{
{ R25 rv1342 = ({ R25 rc1343; memset(&rc1343, 0, sizeof rc1343);  rc1343.f_OK = 1; rc1343.f_V = ((*(R21 *)rt_nil_check(l_B_1340))).f_MV; rc1343; });
return rv1342; }
}
l_B_1340 = ((*(R21 *)rt_nil_check(l_B_1340))).f_NEXT;
}
RT_B_TICK();
} L_end1341: ;
if ((!(l_Y_1339 == NULL)))
{
if ((((((((*(R12 *)rt_nil_check(l_Y_1339))).f_KIND == g_Y_CONST) || (((*(R12 *)rt_nil_check(l_Y_1339))).f_KIND == g_Y_GEN)) || (((((*(R12 *)rt_nil_check(l_Y_1339))).f_KIND == g_Y_VAR) && ((*(R12 *)rt_nil_check(l_Y_1339))).f_INPUT)))) && ((*(R12 *)rt_nil_check(l_Y_1339))).f_HASMV))
{
{ R25 rv1344 = ({ R25 rc1345; memset(&rc1345, 0, sizeof rc1345);  rc1345.f_OK = 1; rc1345.f_V = ((*(R12 *)rt_nil_check(l_Y_1339))).f_MV; rc1345; });
return rv1344; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1339))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R17 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R25 rv1346 = ({ R25 rc1347; memset(&rc1347, 0, sizeof rc1347);  rc1347.f_OK = 1; rc1347.f_V = ((*(R12 *)rt_nil_check(l_Y_1339))).f_MV; rc1347; });
return rv1346; }
}
}
}
}
}
else if ((l_K_1282 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R17 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R25 rv1348 = ({ R25 rc1349; memset(&rc1349, 0, sizeof rc1349);  rc1349.f_OK = 1; rc1349.f_V = ((*(R12 *)rt_nil_check(r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc1349; });
return rv1348; }
}
}
else if ((l_K_1282 == g_N_FIELD))
{
{ R25 rv1350 = r_ATTR_MANIFEST(p_E);
return rv1350; }
}
else if ((l_K_1282 == g_N_APPLY))
{
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R25 rv1351 = ({ R25 rc1352; memset(&rc1352, 0, sizeof rc1352);  rc1352.f_OK = 1; rc1352.f_V = r_BOOL_INT((r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A)).f_OK); rc1352; });
return rv1351; }
}
}
{ R25 rv1353 = l_NO_1283;
return rv1353; }
rt_raise(RT_X_INIT);
}
static R25 r_ATTR_MANIFEST(R17 * p_E) { RT_B_TICK(); 
R17 * l_A_1354; memset(&l_A_1354, 0, sizeof l_A_1354);
l_A_1354 = ((*(R17 *)rt_nil_check(p_E))).f_A;
R9 l_NAME_1355; memset(&l_NAME_1355, 0, sizeof l_NAME_1355);
S_R9(&l_NAME_1355, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
R22 * l_T_1356; memset(&l_T_1356, 0, sizeof l_T_1356);
l_T_1356 = NULL;
if ((((*(R17 *)rt_nil_check(l_A_1354))).f_KIND == g_N_PAREN))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1354))).f_A))).f_KIND == g_N_FIELD))
{
{
R17 * l_INNER_1357; memset(&l_INNER_1357, 0, sizeof l_INNER_1357);
l_INNER_1357 = ((*(R17 *)rt_nil_check(l_A_1354))).f_A;
if (r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1357))).f_NAME, rt_str("LENGTH", 6)))
{
if (r_TEQS(l_NAME_1355, rt_str("MAX", 3)))
{
{ R25 rv1358 = r_SOME(r_MAX_LENGTH());
return rv1358; }
}
else if (r_TEQS(l_NAME_1355, rt_str("MIN", 3)))
{
{ R25 rv1359 = r_SOME(((rt_int)0LL));
return rv1359; }
}
}
else if ((r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1357))).f_NAME, rt_str("NOM_PRECISION", 13)) || r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1357))).f_NAME, rt_str("IMP_PRECISION", 13))))
{
if (r_TEQS(l_NAME_1355, rt_str("MAX", 3)))
{
{ R25 rv1360 = r_SOME(r_MAX_FLOAT_PRECISION());
return rv1360; }
}
else if (r_TEQS(l_NAME_1355, rt_str("MIN", 3)))
{
{ R25 rv1361 = r_SOME(((rt_int)1LL));
return rv1361; }
}
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1357))).f_NAME, rt_str("SCALE", 5)))
{
if (r_TEQS(l_NAME_1355, rt_str("MAX", 3)))
{
{ R25 rv1362 = r_SOME(((rt_int)1000LL));
return rv1362; }
}
else if (r_TEQS(l_NAME_1355, rt_str("MIN", 3)))
{
{ R25 rv1363 = r_SOME(rt_neg(((rt_int)1000LL)));
return rv1363; }
}
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1357))).f_NAME, rt_str("RADIX", 5)))
{
if (r_TEQS(l_NAME_1355, rt_str("MAX", 3)))
{
{ R25 rv1364 = r_SOME(((rt_int)1000LL));
return rv1364; }
}
else if (r_TEQS(l_NAME_1355, rt_str("MIN", 3)))
{
{ R25 rv1365 = r_SOME(((rt_int)2LL));
return rv1365; }
}
}
}
}
}
if (((((*(R17 *)rt_nil_check(l_A_1354))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_A_1354))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_1366; memset(&l_Y_1366, 0, sizeof l_Y_1366);
l_Y_1366 = r_LOOKUP(((*(R17 *)rt_nil_check(l_A_1354))).f_NAME);
if ((l_Y_1366 == NULL))
{
{ R25 rv1367 = r_NO_MVAL();
return rv1367; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1366))).f_KIND == g_Y_TYPE))
{
l_T_1356 = r_RESOLVE_USER_NAME(((*(R17 *)rt_nil_check(l_A_1354))).f_NAME, ((*(R17 *)rt_nil_check(l_A_1354))).f_LINE);
}
else if ((((((*(R12 *)rt_nil_check(l_Y_1366))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1366))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1366))).f_KIND == g_Y_GEN)))
{
l_T_1356 = ((*(R12 *)rt_nil_check(l_Y_1366))).f_T;
}
else
{
{ R25 rv1368 = r_NO_MVAL();
return rv1368; }
}
}
}
else if ((((*(R17 *)rt_nil_check(l_A_1354))).f_KIND == g_N_INT))
{
if ((r_TEQS(l_NAME_1355, rt_str("MIN", 3)) || r_TEQS(l_NAME_1355, rt_str("MAX", 3))))
{
{ R25 rv1369 = r_SOME(((*(R17 *)rt_nil_check(l_A_1354))).f_IV);
return rv1369; }
}
l_T_1356 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
else if ((((((((((((((*(R17 *)rt_nil_check(l_A_1354))).f_KIND == g_N_PAREN) || (((*(R17 *)rt_nil_check(l_A_1354))).f_KIND == g_N_BINOP)) || (((*(R17 *)rt_nil_check(l_A_1354))).f_KIND == g_N_UNOP)) || (((*(R17 *)rt_nil_check(l_A_1354))).f_KIND == g_N_FIELD)) || (((*(R17 *)rt_nil_check(l_A_1354))).f_KIND == g_N_INDEX)) || (((*(R17 *)rt_nil_check(l_A_1354))).f_KIND == g_N_APPLY)) || (((*(R17 *)rt_nil_check(l_A_1354))).f_KIND == g_N_REAL)) || (((*(R17 *)rt_nil_check(l_A_1354))).f_KIND == g_N_STR)) || (((*(R17 *)rt_nil_check(l_A_1354))).f_KIND == g_N_SUBSTR)) || (((*(R17 *)rt_nil_check(l_A_1354))).f_KIND == g_N_DEREF)) || (((*(R17 *)rt_nil_check(l_A_1354))).f_KIND == g_N_TYPESPEC)))
{
if ((((*(R17 *)rt_nil_check(l_A_1354))).f_KIND == g_N_PAREN))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1354))).f_A))).f_KIND == g_N_INT) && ((r_TEQS(l_NAME_1355, rt_str("MIN", 3)) || r_TEQS(l_NAME_1355, rt_str("MAX", 3))))))
{
{ R25 rv1370 = r_SOME(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1354))).f_A))).f_IV);
return rv1370; }
}
}
{
R14 l_SAVED_CODE_1371; memset(&l_SAVED_CODE_1371, 0, sizeof l_SAVED_CODE_1371);
S_R14(&l_SAVED_CODE_1371, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1372; memset(&rc1372, 0, sizeof rc1372);  rc1372.f_HEAD = NULL; rc1372.f_TAIL = NULL; rc1372; }), 0);
l_T_1356 = (r_EXPR(l_A_1354, NULL)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1371, 0);
}
}
else
{
{ R25 rv1373 = r_NO_MVAL();
return rv1373; }
}
if ((l_T_1356 == NULL))
{
{ R25 rv1374 = r_NO_MVAL();
return rv1374; }
}
{ R25 rv1375 = r_TYPE_ATTR_MANIFEST(l_T_1356, l_NAME_1355);
return rv1375; }
rt_raise(RT_X_INIT);
}
static R25 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R9 p_NAME) { RT_B_TICK(); 
R22 * l_T_1376; memset(&l_T_1376, 0, sizeof l_T_1376);
l_T_1376 = r_REAL_TYPE(p_T0);
rt_int l_K_1377; memset(&l_K_1377, 0, sizeof l_K_1377);
l_K_1377 = ((*(R22 *)rt_nil_check(l_T_1376))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R25 rv1378 = r_STATIC_SIZE(p_T0);
return rv1378; }
}
if ((l_K_1377 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R25 rv1379 = r_SOME(((*(R22 *)rt_nil_check(l_T_1376))).f_SCALE);
return rv1379; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R25 rv1380 = r_SOME(((rt_int)2LL));
return rv1380; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && ((((*(R22 *)rt_nil_check(l_T_1376))).f_LO_C).f_LEN > ((rt_int)0LL))))
{
{ R25 rv1381 = ((*(R22 *)rt_nil_check(l_T_1376))).f_MLO;
return rv1381; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && ((((*(R22 *)rt_nil_check(l_T_1376))).f_HI_C).f_LEN > ((rt_int)0LL))))
{
{ R25 rv1382 = ((*(R22 *)rt_nil_check(l_T_1376))).f_MHI;
return rv1382; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && (((*(R22 *)rt_nil_check(l_T_1376))).f_SCALE == ((rt_int)0LL))))
{
{ R25 rv1383 = r_SOME(r_STD_MIN());
return rv1383; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && (((*(R22 *)rt_nil_check(l_T_1376))).f_SCALE == ((rt_int)0LL))))
{
{ R25 rv1384 = r_SOME(r_STD_MAX());
return rv1384; }
}
}
else if ((l_K_1377 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R25 rv1385 = r_SOME(((*(R22 *)rt_nil_check(l_T_1376))).f_SCALE);
return rv1385; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R25 rv1386 = r_SOME(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1376))).f_SCALE));
return rv1386; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R25 rv1387 = r_SOME(((rt_int)2LL));
return rv1387; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R25 rv1388 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1376))).f_SCALE, p_NAME));
return rv1388; }
}
}
else if ((l_K_1377 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1376))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R25 rv1389 = ((*(R22 *)rt_nil_check(l_T_1376))).f_MLO;
return rv1389; }
}
{ R25 rv1390 = r_SOME(((rt_int)0LL));
return rv1390; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1376))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R25 rv1391 = ((*(R22 *)rt_nil_check(l_T_1376))).f_MHI;
return rv1391; }
}
{ R25 rv1392 = r_SOME(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1376))).f_BASE))).f_NLITS, ((rt_int)1LL)));
return rv1392; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1376))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ R25 rv1393 = r_SOME(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1376))).f_BASE))).f_NLITS);
return rv1393; }
}
if (((((*(R22 *)rt_nil_check(l_T_1376))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_T_1376))).f_MHI).f_OK))
{
{ R25 rv1394 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R22 *)rt_nil_check(l_T_1376))).f_MHI).f_V, (((*(R22 *)rt_nil_check(l_T_1376))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1394; }
}
}
}
else if (((l_K_1377 == g_T_STR) || (l_K_1377 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R25 rv1395 = ((*(R22 *)rt_nil_check(l_T_1376))).f_MLEN;
return rv1395; }
}
}
else if ((l_K_1377 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R25 rv1396 = r_SOME(((*(R22 *)rt_nil_check(l_T_1376))).f_DIMS);
return rv1396; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1376))).f_DIMS == ((rt_int)1LL))))
{
if (((((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1376))).f_BOUNDS))).f_MLO).f_OK && (((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1376))).f_BOUNDS))).f_MHI).f_OK))
{
{ R25 rv1397 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1376))).f_BOUNDS))).f_MHI).f_V, (((*(R27 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1376))).f_BOUNDS))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1397; }
}
}
}
else if ((l_K_1377 == g_T_REC))
{
{
R26 * l_F_1398; memset(&l_F_1398, 0, sizeof l_F_1398);
l_F_1398 = ((*(R22 *)rt_nil_check(l_T_1376))).f_FIELDS;
R27 * l_B_1399; memset(&l_B_1399, 0, sizeof l_B_1399);
l_B_1399 = ((*(R22 *)rt_nil_check(l_T_1376))).f_ARGS;
for (;;) {
if (((l_F_1398 == NULL) || (l_B_1399 == NULL))) goto L_end1400;
{
if ((!(((*(R26 *)rt_nil_check(l_F_1398))).f_KIND == ((rt_int)0LL))))
{
if (r_TEQ(((*(R26 *)rt_nil_check(l_F_1398))).f_NAME, p_NAME))
{
if (((*(R27 *)rt_nil_check(l_B_1399))).f_ANYARG)
{
{ R25 rv1401 = r_NO_MVAL();
return rv1401; }
}
{ R25 rv1402 = ((*(R27 *)rt_nil_check(l_B_1399))).f_MLO;
return rv1402; }
}
l_B_1399 = ((*(R27 *)rt_nil_check(l_B_1399))).f_NEXT;
}
l_F_1398 = ((*(R26 *)rt_nil_check(l_F_1398))).f_NEXT;
}
RT_B_TICK();
} L_end1400: ;
}
}
{ R25 rv1403 = r_NO_MVAL();
return rv1403; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_ARITH(R9 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); fr_r_MANIFEST_ARITH *F = rt_alloc(sizeof *F); (void)F; F->p_OP = p_OP; F->p_A = p_A; F->p_B = p_B; F->p_LINE = p_LINE;
F->l_R_1404 = ((rt_int)0LL);
{ rt_frame xf1405; if (RT_TRY(xf1405)) {
{
if (r_TEQS(F->p_OP, rt_str("+", 1)))
{
F->l_R_1404 = rt_add(F->p_A, F->p_B);
}
else if (r_TEQS(F->p_OP, rt_str("-", 1)))
{
F->l_R_1404 = rt_sub(F->p_A, F->p_B);
}
else
{
F->l_R_1404 = rt_mul(F->p_A, F->p_B);
}
}
RT_POP(xf1405); } else { RT_POP(xf1405); int xf1405x = rt_xcur;
if (0 || xf1405x == x_OVERFLOW)
{
r_FAIL(F->p_LINE, rt_str("a manifest expression overflows (3.2.4.2)", 41));
}
else rt_raise(xf1405x); } }
{ rt_int rv1406 = F->l_R_1404;
return rv1406; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R17 * p_E) { RT_B_TICK(); 
{ rt_int rv1407 = (!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv1407; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { RT_B_TICK(); 
if (p_B)
{
{ rt_int rv1408 = ((rt_int)1LL);
return rv1408; }
}
{ rt_int rv1409 = ((rt_int)0LL);
return rv1409; }
rt_raise(RT_X_INIT);
}
static R28 r_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_K_1410; memset(&l_K_1410, 0, sizeof l_K_1410);
l_K_1410 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_1410 == g_N_INT))
{
{ R28 rv1411 = r_MKET(r_STD_CHECK(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R17 *)rt_nil_check(p_E))).f_IV))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1411; }
}
else if ((l_K_1410 == g_N_REAL))
{
{ R28 rv1412 = r_REAL_LITERAL(p_E);
return rv1412; }
}
else if ((l_K_1410 == g_N_BOOL))
{
{ R28 rv1413 = r_MKET(r_NUM(((*(R17 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1413; }
}
else if ((l_K_1410 == g_N_NIL))
{
{ R28 rv1414 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1414; }
}
else if ((l_K_1410 == g_N_PAREN))
{
{
R28 l_V_1415; memset(&l_V_1415, 0, sizeof l_V_1415);
S_R28(&l_V_1415, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R9(&(l_V_1415).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1415).f_C), 0);
{ R28 rv1416 = l_V_1415;
return rv1416; }
}
}
else if ((l_K_1410 == g_N_STR))
{
{ R28 rv1417 = r_STRING_LITERAL(p_E);
return rv1417; }
}
else if ((l_K_1410 == g_N_BITS))
{
{ R28 rv1418 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R17 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1418; }
}
else if ((l_K_1410 == g_N_ENUMLIT))
{
if (r_NAMES_OBJECT(((*(R17 *)rt_nil_check(p_E))).f_NAME))
{
{ R28 rv1419 = r_NAME_EXPR(p_E, p_WANT);
return rv1419; }
}
{ R28 rv1420 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1420; }
}
else if ((l_K_1410 == g_N_RECCONS))
{
{ R28 rv1421 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1421; }
}
else if ((l_K_1410 == g_N_ARRCONS))
{
{ R28 rv1422 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1422; }
}
else if ((l_K_1410 == g_N_TYPESPEC))
{
{ R28 rv1423 = r_TYPE_SPECIFIER(p_E);
return rv1423; }
}
else if ((l_K_1410 == g_N_QUAL))
{
{
rt_int l_SAVED_1424; memset(&l_SAVED_1424, 0, sizeof l_SAVED_1424);
l_SAVED_1424 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_1425; memset(&l_SAVED_Q_1425, 0, sizeof l_SAVED_Q_1425);
l_SAVED_Q_1425 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R28 l_V_1426; memset(&l_V_1426, 0, sizeof l_V_1426);
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
R25 l_P_1427; memset(&l_P_1427, 0, sizeof l_P_1427);
S_R25(&l_P_1427, r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_B, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
}
}
S_R28(&l_V_1426, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1424;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1425;
{ R28 rv1428 = l_V_1426;
return rv1428; }
}
}
else if ((l_K_1410 == g_N_NEW))
{
if ((r_NAMES_OBJECT(((*(R17 *)rt_nil_check(p_E))).f_NAME) && (!r_CONSTRUCTOR_WANTED(p_WANT))))
{
{
R17 * l_N_1429; memset(&l_N_1429, 0, sizeof l_N_1429);
l_N_1429 = r_NEW_NODE(g_N_APPLY, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1429))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_1429))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_A;
{ R28 rv1430 = r_EXPR(l_N_1429, p_WANT);
return rv1430; }
}
}
{ R28 rv1431 = r_NEW_EXPR(p_E, p_WANT);
return rv1431; }
}
else if ((l_K_1410 == g_N_NAME))
{
{ R28 rv1432 = r_NAME_EXPR(p_E, p_WANT);
return rv1432; }
}
else if (((l_K_1410 == g_N_APPLY) && r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("$PATH_LIST", 10))))
{
{ R28 rv1433 = r_PATH_LIST(((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1433; }
}
else if (((l_K_1410 == g_N_APPLY) && r_IS_STD_REPTYPE(((*(R17 *)rt_nil_check(p_E))).f_NAME)))
{
if (((((((*(R17 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))) || (!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL))) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an explicit-rep-converter converts one expression [3-41]", 56));
}
{
R17 * l_R_1434; memset(&l_R_1434, 0, sizeof l_R_1434);
l_R_1434 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_R_1434))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
{ R28 rv1435 = r_REP_CONVERTER(l_R_1434, ((*(R17 *)rt_nil_check(p_E))).f_A, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1435; }
}
}
else if ((l_K_1410 == g_N_APPLY))
{
{
R12 * l_Y_1436; memset(&l_Y_1436, 0, sizeof l_Y_1436);
l_Y_1436 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1436 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1436))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1436))).f_KIND == g_Y_CONST)))
{
{
R17 * l_N_1437; memset(&l_N_1437, 0, sizeof l_N_1437);
l_N_1437 = r_NEW_NODE(g_N_INDEX, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
R17 * l_A_1438; memset(&l_A_1438, 0, sizeof l_A_1438);
l_A_1438 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_A_1438))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_1437))).f_A = l_A_1438;
((*(R17 *)rt_nil_check(l_N_1437))).f_B = ((*(R17 *)rt_nil_check(p_E))).f_A;
{ R28 rv1439 = r_EXPR(l_N_1437, p_WANT);
return rv1439; }
}
}
}
{ R28 rv1440 = r_CALL_EXPR(p_E, p_WANT);
return rv1440; }
}
}
else if ((l_K_1410 == g_N_FIELD))
{
{ R28 rv1441 = r_FIELD_EXPR(p_E);
return rv1441; }
}
else if ((l_K_1410 == g_N_DEREF))
{
{
R28 l_B_1442; memset(&l_B_1442, 0, sizeof l_B_1442);
S_R28(&l_B_1442, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1442).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1443; memset(&l_TT_1443, 0, sizeof l_TT_1443);
l_TT_1443 = r_TARGET((l_B_1442).f_T);
{ R28 rv1444 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1443), (l_B_1442).f_C), l_TT_1443, 1, r_NO_TEXT());
return rv1444; }
}
}
}
else if ((l_K_1410 == g_N_INDEX))
{
if (((((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_APPLY) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME))) && r_IS_REPTYPE_NAME(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME)))
{
if (((((*(R17 *)rt_nil_check(p_E))).f_B == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_NEXT == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an explicit-rep-converter converts one expression [3-41]", 56));
}
{ R28 rv1445 = r_REP_CONVERTER(((*(R17 *)rt_nil_check(p_E))).f_A, ((*(R17 *)rt_nil_check(p_E))).f_B, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1445; }
}
{ R28 rv1446 = r_INDEX_EXPR(p_E);
return rv1446; }
}
else if ((l_K_1410 == g_N_SUBSTR))
{
{
R28 l_B_1447; memset(&l_B_1447, 0, sizeof l_B_1447);
S_R28(&l_B_1447, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1448; memset(&l_BT_1448, 0, sizeof l_BT_1448);
l_BT_1448 = r_REAL_TYPE((l_B_1447).f_T);
R9 l_LO_1449; memset(&l_LO_1449, 0, sizeof l_LO_1449);
R9 l_HI_1450; memset(&l_HI_1450, 0, sizeof l_HI_1450);
if (((((*(R22 *)rt_nil_check((l_B_1447).f_T))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_MKN(rt_str("SUBSTRING_", 10)))))
{
{
R29 * l_ARGS_1451; memset(&l_ARGS_1451, 0, sizeof l_ARGS_1451);
l_ARGS_1451 = r_VAL_ARG(l_B_1447, r_NODE_ARG(((*(R17 *)rt_nil_check(p_E))).f_B, g_M_IN, r_NODE_ARG(((*(R17 *)rt_nil_check(p_E))).f_C, g_M_IN, NULL)));
R12 * l_Y_1452; memset(&l_Y_1452, 0, sizeof l_Y_1452);
l_Y_1452 = r_USER_OPERATOR(r_MKN(rt_str("SUBSTRING_", 10)), l_ARGS_1451, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!(l_Y_1452 == NULL)))
{
{ R28 rv1453 = r_CALL_SYM(l_Y_1452, l_ARGS_1451, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1453; }
}
if ((((*(R22 *)rt_nil_check((l_B_1447).f_T))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no operation for this abstract type: ", 37), r_MK(rt_str("SUBSTRING_", 10)));
}
}
}
if ((!(((((*(R22 *)rt_nil_check(l_BT_1448))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1448))).f_KIND == g_T_BITS)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R9(&l_LO_1449, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
S_R9(&l_HI_1450, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1448))).f_KIND == g_T_BITS))
{
{ R28 rv1454 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1447).f_C, l_LO_1449, l_HI_1450), r_BITS_TYPE(((rt_int)1LL)));
return rv1454; }
}
{
R22 * l_T_1455; memset(&l_T_1455, 0, sizeof l_T_1455);
l_T_1455 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1455))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1448))).f_BASE;
{ R28 rv1456 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1447).f_C, l_LO_1449, l_HI_1450), l_T_1455);
return rv1456; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1448))).f_KIND == g_T_BITS))
{
{ R28 rv1457 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1447).f_C, l_LO_1449, l_HI_1450), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1457; }
}
{
R22 * l_T_1458; memset(&l_T_1458, 0, sizeof l_T_1458);
l_T_1458 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1458))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1448))).f_BASE;
{ R28 rv1459 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1447).f_C, l_LO_1449, l_HI_1450), l_T_1458);
return rv1459; }
}
}
}
else if ((l_K_1410 == g_N_UNOP))
{
{ R28 rv1460 = r_UNARY(p_E);
return rv1460; }
}
else if ((l_K_1410 == g_N_BINOP))
{
{ R28 rv1461 = r_BINARY(p_E);
return rv1461; }
}
else if ((l_K_1410 == g_N_IN))
{
{ R28 rv1462 = r_IN_EXPR(p_E);
return rv1462; }
}
else if (((l_K_1410 == g_N_ANY) || (l_K_1410 == g_N_DONTCARE)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((l_K_1410 == g_TS_GEN))
{
{
R17 * l_N_1463; memset(&l_N_1463, 0, sizeof l_N_1463);
l_N_1463 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1463))).f_NAME, r_QMKN(rt_str("\?", 1), ((*(R17 *)rt_nil_check(p_E))).f_NAME), 0);
if (r_NAMES_OBJECT(((*(R17 *)rt_nil_check(l_N_1463))).f_NAME))
{
{ R28 rv1464 = r_NAME_EXPR(l_N_1463, p_WANT);
return rv1464; }
}
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
else if (((((l_K_1410 == g_TS_NAME) || (l_K_1410 == g_TS_ARRAY)) || (l_K_1410 == g_TS_RECORD)) || (l_K_1410 == g_TS_ENUM)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R9 r_INT_EXPR(R17 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1465; memset(&l_SAVED_1465, 0, sizeof l_SAVED_1465);
l_SAVED_1465 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_1466; memset(&l_SAVED_Q_1466, 0, sizeof l_SAVED_Q_1466);
l_SAVED_Q_1466 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R28 l_V_1467; memset(&l_V_1467, 0, sizeof l_V_1467);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R28(&l_V_1467, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1465;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1466;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1467).f_T)))).f_KIND == g_T_ENUM))
{
{ R9 rv1468 = (l_V_1467).f_C;
return rv1468; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1467).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1467).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1467).f_T));
}
{ R9 rv1469 = (l_V_1467).f_C;
return rv1469; }
rt_raise(RT_X_INIT);
}
static R9 r_BOOL_EXPR(R17 * p_E) { RT_B_TICK(); 
R28 l_V_1470; memset(&l_V_1470, 0, sizeof l_V_1470);
S_R28(&l_V_1470, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1470).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1470).f_T));
}
{ R9 rv1471 = (l_V_1470).f_C;
return rv1471; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { RT_B_TICK(); 
R22 * l_T_1472; memset(&l_T_1472, 0, sizeof l_T_1472);
l_T_1472 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(l_T_1472))).f_LEN_C, r_NUM(p_LEN), 0);
S_R25(&((*(R22 *)rt_nil_check(l_T_1472))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1473 = l_T_1472;
return rv1473; }
rt_raise(RT_X_INIT);
}
static R28 r_REAL_LITERAL(R17 * p_E) { RT_B_TICK(); 
R9 l_T_1474; memset(&l_T_1474, 0, sizeof l_T_1474);
S_R9(&l_T_1474, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1475; memset(&l_S_1475, 0, sizeof l_S_1475);
l_S_1475 = rt_b_str_new((l_T_1474).f_LEN, 0);
rt_b_assign(&l_S_1475, r_STR(l_T_1474, (l_T_1474).f_LEN));
rt_int l_POINT_1476; memset(&l_POINT_1476, 0, sizeof l_POINT_1476);
l_POINT_1476 = 0;
rt_int l_DIGITS_1477; memset(&l_DIGITS_1477, 0, sizeof l_DIGITS_1477);
l_DIGITS_1477 = ((rt_int)0LL);
{ rt_int it1479_lo = ((rt_int)0LL), it1479_hi = rt_sub((l_T_1474).f_LEN, ((rt_int)1LL));
for (rt_int it1479 = it1479_lo; it1479 <= it1479_hi; it1479++) {
{
if (rt_b_eq(rt_b_slice(l_S_1475, it1479, it1479), rt_str(".", 1)))
{
l_POINT_1476 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1475, it1479, it1479), rt_str("E", 1)))
{
goto L_end1478;
}
else
{
l_DIGITS_1477 = rt_add(l_DIGITS_1477, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it1479 == it1479_hi) break;
} } L_end1478: ;
if (((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) || (!l_POINT_1476)))
{
r_CHECK_FIXED_LITERAL(p_E);
}
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R28 rv1480 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1474), r_NUM(((*(R17 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R17 *)rt_nil_check(p_E))).f_IV));
return rv1480; }
}
if ((!l_POINT_1476))
{
{ R28 rv1481 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1474)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1481; }
}
{
R22 * l_F_1482; memset(&l_F_1482, 0, sizeof l_F_1482);
l_F_1482 = r_NEW_TYP(g_T_FLOAT);
R9 l_C_1483; memset(&l_C_1483, 0, sizeof l_C_1483);
S_R9(&l_C_1483, l_T_1474, 0);
((*(R22 *)rt_nil_check(l_F_1482))).f_SCALE = r_MAX_INT(l_DIGITS_1477, r_QUAL_PREC());
if ((((*(R22 *)rt_nil_check(l_F_1482))).f_SCALE > r_MAX_FLOAT_PRECISION()))
{
((*(R22 *)rt_nil_check(l_F_1482))).f_SCALE = r_MAX_FLOAT_PRECISION();
}
if ((((*(R22 *)rt_nil_check(l_F_1482))).f_SCALE < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1482))).f_SCALE = ((rt_int)1LL);
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1482))).f_SCALE)))
{
((*(R22 *)rt_nil_check(l_F_1482))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_F_1482))).f_SCALE, ((rt_int)8LL));
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1482))).f_SCALE)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the float-literal is outside the range of FLOAT (3.3.2)", 68));
}
if (rt_b_eq(rt_b_slice(l_S_1475, rt_sub((l_T_1474).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1474).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
S_R9(&l_C_1483, r_FMT1(rt_str("@0", 2), l_T_1474), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1475, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
S_R9(&l_C_1483, r_FMT1(rt_str("0@", 2), l_T_1474), 0);
}
if (r_IS_D(l_F_1482))
{
{ R28 rv1484 = r_MKET(r_FMT1(rt_str("rt_b_dlit(\"@\")", 14), l_C_1483), l_F_1482);
return rv1484; }
}
else if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_F_1482))).f_SCALE) == ((rt_int)7LL)))
{
{ R28 rv1485 = r_MKET(r_FMT1(rt_str("((double)(float)@)", 18), l_C_1483), l_F_1482);
return rv1485; }
}
{ R28 rv1486 = r_MKET(r_FMT1(rt_str("(@)", 3), l_C_1483), l_F_1482);
return rv1486; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_LITERAL_FITS(R17 * p_E, rt_int p_P) { RT_B_TICK(); 
R9 l_T_1487; memset(&l_T_1487, 0, sizeof l_T_1487);
S_R9(&l_T_1487, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1488; memset(&l_S_1488, 0, sizeof l_S_1488);
l_S_1488 = rt_b_str_new((l_T_1487).f_LEN, 0);
rt_b_assign(&l_S_1488, r_STR(l_T_1487, (l_T_1487).f_LEN));
rt_int l_INT_1489; memset(&l_INT_1489, 0, sizeof l_INT_1489);
l_INT_1489 = ((rt_int)0LL);
rt_int l_SIG_1490; memset(&l_SIG_1490, 0, sizeof l_SIG_1490);
l_SIG_1490 = 0;
rt_int l_POINT_1491; memset(&l_POINT_1491, 0, sizeof l_POINT_1491);
l_POINT_1491 = 0;
rt_int l_LEAD_1492; memset(&l_LEAD_1492, 0, sizeof l_LEAD_1492);
l_LEAD_1492 = ((rt_int)0LL);
rt_int l_I_1493; memset(&l_I_1493, 0, sizeof l_I_1493);
l_I_1493 = ((rt_int)0LL);
rt_int l_EXP_1494; memset(&l_EXP_1494, 0, sizeof l_EXP_1494);
l_EXP_1494 = ((rt_int)0LL);
for (;;) {
if ((l_I_1493 >= (l_T_1487).f_LEN)) goto L_end1495;
{
if (rt_b_eq(rt_b_slice(l_S_1488, l_I_1493, l_I_1493), rt_str("E", 1)))
{
goto L_end1495;
}
else if (rt_b_eq(rt_b_slice(l_S_1488, l_I_1493, l_I_1493), rt_str(".", 1)))
{
l_POINT_1491 = 1;
}
else if ((!rt_b_eq(rt_b_slice(l_S_1488, l_I_1493, l_I_1493), rt_str("0", 1))))
{
if ((!l_POINT_1491))
{
l_INT_1489 = rt_add(l_INT_1489, ((rt_int)1LL));
}
l_SIG_1490 = 1;
}
else if ((l_SIG_1490 && (!l_POINT_1491)))
{
l_INT_1489 = rt_add(l_INT_1489, ((rt_int)1LL));
}
else if ((l_POINT_1491 && (!l_SIG_1490)))
{
l_LEAD_1492 = rt_add(l_LEAD_1492, ((rt_int)1LL));
}
l_I_1493 = rt_add(l_I_1493, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1495: ;
if ((!l_SIG_1490))
{
{ rt_int rv1496 = 1;
return rv1496; }
}
if ((l_I_1493 < (l_T_1487).f_LEN))
{
{
rt_int l_NEG_1497; memset(&l_NEG_1497, 0, sizeof l_NEG_1497);
l_NEG_1497 = 0;
l_I_1493 = rt_add(l_I_1493, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1488, l_I_1493, l_I_1493), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1488, l_I_1493, l_I_1493), rt_str("+", 1))))
{
l_NEG_1497 = rt_b_eq(rt_b_slice(l_S_1488, l_I_1493, l_I_1493), rt_str("-", 1));
l_I_1493 = rt_add(l_I_1493, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1493 >= (l_T_1487).f_LEN)) goto L_end1498;
{
if ((l_EXP_1494 <= ((rt_int)100000LL)))
{
l_EXP_1494 = rt_add(rt_mul(l_EXP_1494, ((rt_int)10LL)), (rt_sub(r_CODE_OF(rt_b_slice(l_S_1488, l_I_1493, l_I_1493)), ((rt_int)48LL))));
}
l_I_1493 = rt_add(l_I_1493, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1498: ;
if (l_NEG_1497)
{
l_EXP_1494 = rt_neg(l_EXP_1494);
}
}
}
{
rt_int l_D_1499; memset(&l_D_1499, 0, sizeof l_D_1499);
l_D_1499 = rt_add(rt_sub(l_INT_1489, ((rt_int)1LL)), l_EXP_1494);
rt_int l_LIM_1500; memset(&l_LIM_1500, 0, sizeof l_LIM_1500);
l_LIM_1500 = ((rt_int)308LL);
if ((l_INT_1489 == ((rt_int)0LL)))
{
l_D_1499 = rt_add(rt_sub(rt_neg(l_LEAD_1492), ((rt_int)1LL)), l_EXP_1494);
}
if (((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)) || (((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL))))
{
l_LIM_1500 = ((rt_int)38LL);
}
{ rt_int rv1501 = ((l_D_1499 <= l_LIM_1500) && (l_D_1499 >= rt_add(rt_neg(l_LIM_1500), ((rt_int)1LL))));
return rv1501; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_LITERAL(R17 * p_E) { RT_B_TICK(); 
R9 l_T_1502; memset(&l_T_1502, 0, sizeof l_T_1502);
S_R9(&l_T_1502, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1503; memset(&l_S_1503, 0, sizeof l_S_1503);
l_S_1503 = rt_b_str_new((l_T_1502).f_LEN, 0);
rt_b_assign(&l_S_1503, r_STR(l_T_1502, (l_T_1502).f_LEN));
rt_int l_SIG_1504; memset(&l_SIG_1504, 0, sizeof l_SIG_1504);
l_SIG_1504 = ((rt_int)0LL);
rt_int l_FRAC_1505; memset(&l_FRAC_1505, 0, sizeof l_FRAC_1505);
l_FRAC_1505 = ((rt_int)0LL);
rt_int l_POINT_1506; memset(&l_POINT_1506, 0, sizeof l_POINT_1506);
l_POINT_1506 = 0;
rt_int l_EXP_1507; memset(&l_EXP_1507, 0, sizeof l_EXP_1507);
l_EXP_1507 = ((rt_int)0LL);
rt_int l_I_1508; memset(&l_I_1508, 0, sizeof l_I_1508);
l_I_1508 = ((rt_int)0LL);
for (;;) {
if ((l_I_1508 >= (l_T_1502).f_LEN)) goto L_end1509;
{
if (rt_b_eq(rt_b_slice(l_S_1503, l_I_1508, l_I_1508), rt_str("E", 1)))
{
goto L_end1509;
}
if (rt_b_eq(rt_b_slice(l_S_1503, l_I_1508, l_I_1508), rt_str(".", 1)))
{
l_POINT_1506 = 1;
}
else
{
if (((l_SIG_1504 > ((rt_int)0LL)) || (!rt_b_eq(rt_b_slice(l_S_1503, l_I_1508, l_I_1508), rt_str("0", 1)))))
{
l_SIG_1504 = rt_add(l_SIG_1504, ((rt_int)1LL));
}
if (l_POINT_1506)
{
l_FRAC_1505 = rt_add(l_FRAC_1505, ((rt_int)1LL));
}
}
l_I_1508 = rt_add(l_I_1508, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1509: ;
if ((rt_sub(l_I_1508, r_BOOL_INT(l_POINT_1506)) > ((rt_int)1000LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a fixed-literal has at most 1000 digits (3.2.2)", 47));
}
if ((l_I_1508 < (l_T_1502).f_LEN))
{
{
rt_int l_NEG_1510; memset(&l_NEG_1510, 0, sizeof l_NEG_1510);
l_NEG_1510 = 0;
l_I_1508 = rt_add(l_I_1508, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1503, l_I_1508, l_I_1508), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1503, l_I_1508, l_I_1508), rt_str("+", 1))))
{
l_NEG_1510 = rt_b_eq(rt_b_slice(l_S_1503, l_I_1508, l_I_1508), rt_str("-", 1));
l_I_1508 = rt_add(l_I_1508, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1508 >= (l_T_1502).f_LEN)) goto L_end1511;
{
if ((l_EXP_1507 <= ((rt_int)1000LL)))
{
l_EXP_1507 = rt_sub(rt_add(rt_mul(l_EXP_1507, ((rt_int)10LL)), r_CODE_OF(rt_b_slice(l_S_1503, l_I_1508, l_I_1508))), ((rt_int)48LL));
}
l_I_1508 = rt_add(l_I_1508, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1511: ;
if ((l_EXP_1507 > ((rt_int)1000LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the exponent of a literal must not exceed 1000 (3.2.2)", 54));
}
if (l_NEG_1510)
{
l_EXP_1507 = rt_neg(l_EXP_1507);
}
}
}
if (((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) && (((((*(R17 *)rt_nil_check(p_E))).f_IV > ((rt_int)1000LL)) || (((*(R17 *)rt_nil_check(p_E))).f_IV < rt_neg(((rt_int)1000LL)))))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a literal must not exceed 1000 (3.2.2)", 51));
}
if ((l_SIG_1504 > ((rt_int)0LL)))
{
{
rt_int l_P10_1512; memset(&l_P10_1512, 0, sizeof l_P10_1512);
l_P10_1512 = rt_sub(rt_add(rt_sub(l_SIG_1504, ((rt_int)1LL)), l_EXP_1507), l_FRAC_1505);
rt_int l_BITS_1513; memset(&l_BITS_1513, 0, sizeof l_BITS_1513);
l_BITS_1513 = rt_add(rt_quot((rt_mul(l_P10_1512, ((rt_int)3321928LL))), ((rt_int)1000000LL)), rt_mul(((*(R17 *)rt_nil_check(p_E))).f_IV, ((*(R17 *)rt_nil_check(p_E))).f_FL));
if ((l_P10_1512 < ((rt_int)0LL)))
{
l_BITS_1513 = rt_add(rt_neg((rt_quot((rt_add(rt_mul(rt_neg(l_P10_1512), ((rt_int)3321929LL)), ((rt_int)999999LL))), ((rt_int)1000000LL)))), rt_mul(((*(R17 *)rt_nil_check(p_E))).f_IV, ((*(R17 *)rt_nil_check(p_E))).f_FL));
}
if ((l_BITS_1513 >= ((rt_int)63LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the literal is outside FIXED_MIN .. FIXED_MAX (3.2.2)", 66));
}
}
}
}
static R28 r_STRING_LITERAL(R17 * p_E) { RT_B_TICK(); 
R22 * l_CS_1514; memset(&l_CS_1514, 0, sizeof l_CS_1514);
l_CS_1514 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R17 * l_P_1515; memset(&l_P_1515, 0, sizeof l_P_1515);
l_P_1515 = ((*(R17 *)rt_nil_check(p_E))).f_A;
R9 l_S_1516; memset(&l_S_1516, 0, sizeof l_S_1516);
S_R9(&l_S_1516, r_MK(rt_str("", 0)), 0);
if (((((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN == ((rt_int)0LL)))
{
l_CS_1514 = r_DEFAULT_CHARSET(((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
else
{
{
R12 * l_Y_1517; memset(&l_Y_1517, 0, sizeof l_Y_1517);
l_Y_1517 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1517 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1517))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1514 = r_RESOLVE_USER_NAME(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1514)))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1514 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1514)))).f_BASE;
if ((!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(l_CS_1514))).f_LITS)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a character set has a literal of the form \\'C' (3.7.2): ", 56), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
}
}
for (;;) {
if ((l_P_1515 == NULL)) goto L_end1518;
{
if ((((*(R17 *)rt_nil_check(l_P_1515))).f_IV == g_K_STR))
{
if ((l_CS_1514 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R9(&l_S_1516, r_CAT(l_S_1516, ((*(R17 *)rt_nil_check(l_P_1515))).f_NAME), 0);
}
else
{
{
R9 l_Q_1519; memset(&l_Q_1519, 0, sizeof l_Q_1519);
S_R9(&l_Q_1519, ((*(R17 *)rt_nil_check(l_P_1515))).f_NAME, 0);
rstr l_QS_1520; memset(&l_QS_1520, 0, sizeof l_QS_1520);
l_QS_1520 = rt_b_str_new((l_Q_1519).f_LEN, 0);
rt_b_assign(&l_QS_1520, r_STR(l_Q_1519, (l_Q_1519).f_LEN));
{ rt_int it1522_lo = ((rt_int)0LL), it1522_hi = rt_sub((l_Q_1519).f_LEN, ((rt_int)1LL));
for (rt_int it1522 = it1522_lo; it1522 <= it1522_hi; it1522++) {
{
{
R9 l_LIT_1523; memset(&l_LIT_1523, 0, sizeof l_LIT_1523);
R12 * l_Y_1524; memset(&l_Y_1524, 0, sizeof l_Y_1524);
if (rt_b_eq(rt_b_slice(l_QS_1520, it1522, it1522), rt_str("'", 1)))
{
S_R9(&l_LIT_1523, r_MKN(rt_str("\\''''", 5)), 0);
}
else
{
S_R9(&l_LIT_1523, r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1520, it1522, it1522)), rt_str("'", 1))), 0);
}
l_Y_1524 = r_FIND_LITERAL(l_LIT_1523, l_CS_1514);
if ((l_Y_1524 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_1515))).f_LINE, rt_b_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1520, it1522, it1522)));
}
S_R9(&l_S_1516, r_CATS(l_S_1516, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1524))).f_MV)), 0);
}
}
RT_B_TICK();
if (it1522 == it1522_hi) break;
} } L_end1521: ;
}
}
}
else
{
{
R12 * l_Y_1525; memset(&l_Y_1525, 0, sizeof l_Y_1525);
l_Y_1525 = r_FIND_LITERAL(((*(R17 *)rt_nil_check(l_P_1515))).f_NAME, l_CS_1514);
if ((l_Y_1525 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_1515))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R17 *)rt_nil_check(l_P_1515))).f_NAME);
}
S_R9(&l_S_1516, r_CATS(l_S_1516, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1525))).f_MV)), 0);
}
}
l_P_1515 = ((*(R17 *)rt_nil_check(l_P_1515))).f_NEXT;
}
RT_B_TICK();
} L_end1518: ;
{
R22 * l_T_1526; memset(&l_T_1526, 0, sizeof l_T_1526);
l_T_1526 = r_STR_TYPE(r_NUM((l_S_1516).f_LEN), r_SOME((l_S_1516).f_LEN));
((*(R22 *)rt_nil_check(l_T_1526))).f_BASE = l_CS_1514;
{ R28 rv1527 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1516), r_NUM((l_S_1516).f_LEN)), l_T_1526);
return rv1527; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_TS_1528; memset(&l_TS_1528, 0, sizeof l_TS_1528);
l_TS_1528 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_TS_1528))).f_NAME, p_NAME, 0);
{ R22 * rv1529 = r_RESOLVE(l_TS_1528);
return rv1529; }
rt_raise(RT_X_INIT);
}
static R28 r_ENUM_LITERAL(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1530; memset(&l_Y_1530, 0, sizeof l_Y_1530);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1531; memset(&l_WT_1531, 0, sizeof l_WT_1531);
l_WT_1531 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1531))).f_KIND == g_T_ENUM))
{
l_Y_1530 = r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_WT_1531);
if ((!(l_Y_1530 == NULL)))
{
{ R28 rv1532 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1530))).f_MV), r_ENUM_RESULT(l_Y_1530, p_WANT));
return rv1532; }
}
}
}
}
l_Y_1530 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1533; memset(&l_FOUND_1533, 0, sizeof l_FOUND_1533);
l_FOUND_1533 = NULL;
rt_int l_N_1534; memset(&l_N_1534, 0, sizeof l_N_1534);
l_N_1534 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1530 == NULL)) goto L_end1535;
{
if ((((*(R12 *)rt_nil_check(l_Y_1530))).f_KIND == g_Y_ENUMLIT))
{
if ((l_FOUND_1533 == NULL))
{
l_FOUND_1533 = l_Y_1530;
}
else if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1533))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1530))).f_T))).f_BASE)))
{
l_N_1534 = rt_add(l_N_1534, ((rt_int)1LL));
}
}
l_Y_1530 = r_LOOKUP_NEXT(l_Y_1530);
}
RT_B_TICK();
} L_end1535: ;
if ((l_FOUND_1533 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1534 > ((rt_int)0LL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
{ R28 rv1536 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1533))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1533))).f_T);
return rv1536; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1537 = p_WANT;
return rv1537; }
}
if ((!(((*(R22 *)rt_nil_check(p_WANT))).f_REPS == NULL)))
{
{
R22 * l_T_1538; memset(&l_T_1538, 0, sizeof l_T_1538);
l_T_1538 = r_COPY_TYP(((*(R12 *)rt_nil_check(p_Y))).f_T);
((*(R22 *)rt_nil_check(l_T_1538))).f_REPS = ((*(R22 *)rt_nil_check(p_WANT))).f_REPS;
{ R22 * rv1539 = l_T_1538;
return rv1539; }
}
}
{ R22 * rv1540 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1540; }
rt_raise(RT_X_INIT);
}
static rt_int r_CONSTRUCTOR_WANTED(R22 * p_WANT) { RT_B_TICK(); 
if ((p_WANT == NULL))
{
{ rt_int rv1541 = 0;
return rv1541; }
}
{ rt_int rv1542 = ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM));
return rv1542; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_OBJECT(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1543; memset(&l_Y_1543, 0, sizeof l_Y_1543);
l_Y_1543 = r_LOOKUP(p_NAME);
if ((l_Y_1543 == NULL))
{
{ rt_int rv1544 = 0;
return rv1544; }
}
{ rt_int rv1545 = (((((*(R12 *)rt_nil_check(l_Y_1543))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1543))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1543))).f_KIND == g_Y_ROUTINE));
return rv1545; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STD_REPTYPE(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv1546 = (((((((((r_TEQS(p_NAME, rt_str("FIXED_STD", 9)) || r_TEQS(p_NAME, rt_str("FLOAT_STD", 9))) || r_TEQS(p_NAME, rt_str("BOOLEAN_STD", 11))) || r_TEQS(p_NAME, rt_str("ENUM_STD", 8))) || r_TEQS(p_NAME, rt_str("CHAR_STR_STD", 12))) || r_TEQS(p_NAME, rt_str("BIT_STD", 7))) || r_TEQS(p_NAME, rt_str("ARRAY_STD", 9))) || r_TEQS(p_NAME, rt_str("RECORD_STD", 10))) || r_TEQS(p_NAME, rt_str("PTR_STD", 7))) || r_TEQS(p_NAME, rt_str("SEMAPHORE_STD", 13)));
return rv1546; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_REPTYPE_NAME(R9 p_NAME) { RT_B_TICK(); 
if (((((((r_IS_STD_REPTYPE(p_NAME) || r_TEQS(p_NAME, rt_str("FIXED_REP", 9))) || r_TEQS(p_NAME, rt_str("ENUM_REP", 8))) || r_TEQS(p_NAME, rt_str("ENUM_VAL_REP", 12))) || r_TEQS(p_NAME, rt_str("CHAR_STR_REP", 12))) || r_TEQS(p_NAME, rt_str("ARRAY_REP", 9))) || r_TEQS(p_NAME, rt_str("RECORD_REP", 10))))
{
{ rt_int rv1547 = (r_LOOKUP(p_NAME) == NULL);
return rv1547; }
}
if ((!(r_ORIG_LOOKUP(p_NAME) == NULL)))
{
{ rt_int rv1548 = (((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(p_NAME)))).f_KIND == g_Y_REPTYPE);
return rv1548; }
}
{ rt_int rv1549 = 0;
return rv1549; }
rt_raise(RT_X_INIT);
}
static R28 r_REP_CONVERTER(R17 * p_S, R17 * p_E, rt_int p_LINE) { RT_B_TICK(); 
R28 l_V_1550; memset(&l_V_1550, 0, sizeof l_V_1550);
S_R28(&l_V_1550, r_EXPR(p_E, NULL), 0);
R17 * l_R_1551; memset(&l_R_1551, 0, sizeof l_R_1551);
l_R_1551 = r_NEW_NODE(g_N_REP, p_LINE);
R22 * l_T_1552; memset(&l_T_1552, 0, sizeof l_T_1552);
S_R9(&((*(R17 *)rt_nil_check(l_R_1551))).f_NAME, ((*(R17 *)rt_nil_check(p_S))).f_NAME, 0);
if ((((*(R17 *)rt_nil_check(p_S))).f_KIND == g_N_APPLY))
{
((*(R17 *)rt_nil_check(l_R_1551))).f_A = ((*(R17 *)rt_nil_check(p_S))).f_A;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1550).f_T)))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check((l_V_1550).f_T))).f_KIND == g_T_ABS)))
{
r_FAIL(p_LINE, rt_str("a representation is only for a member of a predefined type class (3.12.2)", 73));
}
l_T_1552 = r_COPY_TYP(r_REAL_TYPE((l_V_1550).f_T));
((*(R22 *)rt_nil_check(l_T_1552))).f_REPS = r_EXPAND_REP(l_R_1551, l_T_1552, p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_REPCONV = 1;
r_CHECK_REP_CLASS(l_T_1552, p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_REPCONV = 0;
if ((r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1552))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1552))).f_REPS))).f_A == NULL))))
{
{
R25 l_N_1553; memset(&l_N_1553, 0, sizeof l_N_1553);
S_R25(&l_N_1553, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1552))).f_REPS))).f_A), 0);
rt_int l_UNS_1554; memset(&l_UNS_1554, 0, sizeof l_UNS_1554);
l_UNS_1554 = ((rt_int)0LL);
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1552))).f_REPS))).f_A))).f_NEXT == NULL)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1552))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8)))
{
l_UNS_1554 = ((rt_int)1LL);
}
}
if ((l_N_1553).f_OK)
{
{ R28 rv1555 = r_MKET(r_FMT3(rt_str("rt_b_fixed_rep(@, @, @)", 23), (l_V_1550).f_C, r_NUM((l_N_1553).f_V), r_NUM(l_UNS_1554)), l_T_1552);
return rv1555; }
}
}
}
{ R28 rv1556 = r_MKET((l_V_1550).f_C, l_T_1552);
return rv1556; }
rt_raise(RT_X_INIT);
}
static R28 r_NAME_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1557; memset(&l_Y_1557, 0, sizeof l_Y_1557);
l_Y_1557 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1557 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_1557))).f_WITHV == ((rt_int)2LL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the variable is named by a WITH NAMING and not known in its statement (4.5.4): ", 79), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((((((*(R12 *)rt_nil_check(l_Y_1557))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL))) && (!((*(R12 *)rt_nil_check(l_Y_1557))).f_INPUT)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type or reptype declaration is a closed scope: no variable from outside (3.12.1, 3.12.3): ", 92), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1557))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a record-spec is a closed scope: no variable from outside (3.9.1): ", 67), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1557))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1557))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1558; memset(&l_WRITABLE_1558, 0, sizeof l_WRITABLE_1558);
l_WRITABLE_1558 = (r_SEG_VISIBLE(l_Y_1557, ((*(R17 *)rt_nil_check(p_E))).f_LINE) && r_CHECK_IMPORTED(l_Y_1557, ((*(R17 *)rt_nil_check(p_E))).f_LINE));
{ R28 rv1559 = r_MKLV(r_OBJ_ACCESS(l_Y_1557), ((*(R12 *)rt_nil_check(l_Y_1557))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1557))).f_KIND == g_Y_VAR) && l_WRITABLE_1558), r_NO_TEXT());
return rv1559; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1557))).f_KIND == g_Y_GEN))
{
{ R28 rv1560 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1557))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1557))).f_T);
return rv1560; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1557))).f_KIND == g_Y_ENUMLIT))
{
{ R28 rv1561 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1561; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1557))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1557))).f_KIND == g_Y_BUILTIN)))
{
{
R17 * l_N_1562; memset(&l_N_1562, 0, sizeof l_N_1562);
l_N_1562 = r_NEW_NODE(g_N_APPLY, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1562))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
{ R28 rv1563 = r_CALL_EXPR(l_N_1562, p_WANT);
return rv1563; }
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R28 r_FIELD_EXPR(R17 * p_E) { RT_B_TICK(); 
R17 * l_A_1564; memset(&l_A_1564, 0, sizeof l_A_1564);
l_A_1564 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))) && r_IS_NUMBER_LITERAL(l_A_1564)))
{
{ R28 rv1565 = r_EXPR(l_A_1564, NULL);
return rv1565; }
}
if ((((*(R17 *)rt_nil_check(l_A_1564))).f_KIND == g_N_INDEX))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1564))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1564))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R28 l_B_1566; memset(&l_B_1566, 0, sizeof l_B_1566);
S_R28(&l_B_1566, r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1564))).f_A))).f_A), 0);
R9 l_I_1567; memset(&l_I_1567, 0, sizeof l_I_1567);
S_R9(&l_I_1567, r_INT_EXPR(((*(R17 *)rt_nil_check(l_A_1564))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1566).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R28 rv1568 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1566).f_C, l_I_1567, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1566).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1568; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R28 rv1569 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1566).f_C, l_I_1567, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1566).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1569; }
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R17 *)rt_nil_check(l_A_1564))).f_KIND == g_N_PAREN))
{
if (r_IS_TYPE_ATTR(((*(R17 *)rt_nil_check(l_A_1564))).f_A))
{
{ R28 rv1570 = r_ATTRIBUTE(r_TYPE_VALUE_OF(r_TYPE_ATTR_TYPE(((*(R17 *)rt_nil_check(l_A_1564))).f_A)), ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1570; }
}
}
if ((((*(R17 *)rt_nil_check(l_A_1564))).f_KIND == g_N_PAREN))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1564))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1564))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1564))).f_A))).f_A))).f_NAME))
{
{ R28 rv1571 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1564))).f_A))).f_A))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1564))).f_A))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1571; }
}
}
}
}
if ((((*(R17 *)rt_nil_check(l_A_1564))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1572; memset(&l_Y_1572, 0, sizeof l_Y_1572);
l_Y_1572 = r_LOOKUP(((*(R17 *)rt_nil_check(l_A_1564))).f_NAME);
if ((!(l_Y_1572 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1572))).f_KIND == g_Y_TYPE))
{
{ R28 rv1573 = r_TYPE_ATTRIBUTE(((*(R17 *)rt_nil_check(l_A_1564))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1573; }
}
}
else if (r_IS_TYPE_WORD(((*(R17 *)rt_nil_check(l_A_1564))).f_NAME))
{
{ R28 rv1574 = r_TYPE_ATTRIBUTE(((*(R17 *)rt_nil_check(l_A_1564))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1574; }
}
}
}
{
R28 l_B_1575; memset(&l_B_1575, 0, sizeof l_B_1575);
S_R28(&l_B_1575, r_EXPR(l_A_1564, NULL), 0);
R22 * l_BT_1576; memset(&l_BT_1576, 0, sizeof l_BT_1576);
l_BT_1576 = (l_B_1575).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1576))).f_KIND == g_T_REC))
{
{
R26 * l_F_1577; memset(&l_F_1577, 0, sizeof l_F_1577);
l_F_1577 = r_FIND_VFIELD(l_BT_1576, ((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1577 == NULL)))
{
r_CHECK_VARIANT(l_F_1577, l_BT_1576, l_A_1564, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R26 *)rt_nil_check(l_F_1577))).f_KIND == ((rt_int)2LL)) && r_HAS_ANY(l_BT_1576)))
{
{ R28 rv1578 = r_MKET(r_FMT2(rt_str("rt_b_tag((@).@)", 15), (l_B_1575).f_C, ((*(R26 *)rt_nil_check(l_F_1577))).f_CNAME), ((*(R26 *)rt_nil_check(l_F_1577))).f_T);
return rv1578; }
}
{ R28 rv1579 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1575).f_C, ((*(R26 *)rt_nil_check(l_F_1577))).f_CNAME), ((*(R26 *)rt_nil_check(l_F_1577))).f_T, ((l_B_1575).f_LVAL && (((*(R26 *)rt_nil_check(l_F_1577))).f_KIND == ((rt_int)0LL))), (l_B_1575).f_C);
return rv1579; }
}
}
}
{ R28 rv1580 = r_ATTRIBUTE(l_B_1575, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1580; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_FIXED_LITERAL(R17 * p_A) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1581 = (r_IS_FIXED_LITERAL(((*(R17 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R17 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1581; }
}
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_INT))
{
{ rt_int rv1582 = 1;
return rv1582; }
}
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_REAL))
{
if ((((*(R17 *)rt_nil_check(p_A))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv1583 = 1;
return rv1583; }
}
{
R9 l_NM_1584; memset(&l_NM_1584, 0, sizeof l_NM_1584);
S_R9(&l_NM_1584, ((*(R17 *)rt_nil_check(p_A))).f_NAME, 0);
rstr l_S_1585; memset(&l_S_1585, 0, sizeof l_S_1585);
l_S_1585 = rt_b_str_new((l_NM_1584).f_LEN, 0);
rt_b_assign(&l_S_1585, r_STR(l_NM_1584, (l_NM_1584).f_LEN));
{ rt_int it1587_lo = ((rt_int)0LL), it1587_hi = rt_sub((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN, ((rt_int)1LL));
for (rt_int it1587 = it1587_lo; it1587 <= it1587_hi; it1587++) {
{
if (rt_b_eq(rt_b_slice(l_S_1585, it1587, it1587), rt_str(".", 1)))
{
{ rt_int rv1588 = 0;
return rv1588; }
}
}
RT_B_TICK();
if (it1587 == it1587_hi) break;
} } L_end1586: ;
}
{ rt_int rv1589 = 1;
return rv1589; }
}
{ rt_int rv1590 = 0;
return rv1590; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMBER_LITERAL(R17 * p_A) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1591 = (r_IS_NUMBER_LITERAL(((*(R17 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R17 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1591; }
}
{ rt_int rv1592 = ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_INT) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_REAL));
return rv1592; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv1593 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1593; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R26 * p_F, R22 * p_T, R17 * p_BASE, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R26 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R25 l_TAGV_1594; memset(&l_TAGV_1594, 0, sizeof l_TAGV_1594);
S_R25(&l_TAGV_1594, r_TAG_VALUE(p_T, ((*(R26 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1594).f_OK))
{
r_FAILT(p_LINE, rt_b_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R26 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R26 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1594).f_V, ((*(R26 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R26 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R26 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R25 r_TAG_VALUE(R22 * p_T, R9 p_TAGN) { RT_B_TICK(); 
R26 * l_F_1595; memset(&l_F_1595, 0, sizeof l_F_1595);
l_F_1595 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R27 * l_A_1596; memset(&l_A_1596, 0, sizeof l_A_1596);
l_A_1596 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1595 == NULL)) goto L_end1597;
{
if ((!(((*(R26 *)rt_nil_check(l_F_1595))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1596 == NULL))
{
{ R25 rv1598 = r_NO_MVAL();
return rv1598; }
}
if (r_TEQ(((*(R26 *)rt_nil_check(l_F_1595))).f_NAME, p_TAGN))
{
if (((*(R27 *)rt_nil_check(l_A_1596))).f_ANYARG)
{
{ R25 rv1599 = r_NO_MVAL();
return rv1599; }
}
{ R25 rv1600 = ((*(R27 *)rt_nil_check(l_A_1596))).f_MLO;
return rv1600; }
}
l_A_1596 = ((*(R27 *)rt_nil_check(l_A_1596))).f_NEXT;
}
l_F_1595 = ((*(R26 *)rt_nil_check(l_F_1595))).f_NEXT;
}
RT_B_TICK();
} L_end1597: ;
{ R25 rv1601 = r_NO_MVAL();
return rv1601; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R17 * p_L, rt_int p_V, R22 * p_T) { RT_B_TICK(); 
R17 * l_P_1602; memset(&l_P_1602, 0, sizeof l_P_1602);
l_P_1602 = p_L;
for (;;) {
if ((l_P_1602 == NULL)) goto L_end1603;
{
if ((((*(R17 *)rt_nil_check(l_P_1602))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_P_1602))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_P_1602))).f_B, p_T)).f_V)))
{
{ rt_int rv1604 = 1;
return rv1604; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1602, p_T)).f_V == p_V))
{
{ rt_int rv1605 = 1;
return rv1605; }
}
l_P_1602 = ((*(R17 *)rt_nil_check(l_P_1602))).f_NEXT;
}
RT_B_TICK();
} L_end1603: ;
{ rt_int rv1606 = 0;
return rv1606; }
rt_raise(RT_X_INIT);
}
static R28 r_VALUE_OR_TYPE(R17 * p_E) { RT_B_TICK(); 
if (r_IS_TYPE_NAME(p_E))
{
{ R28 rv1607 = r_TYPE_VALUE(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1607; }
}
{ R28 rv1608 = r_EXPR(p_E, NULL);
return rv1608; }
rt_raise(RT_X_INIT);
}
static R28 r_INDEX_EXPR(R17 * p_E) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R28 l_A_1609; memset(&l_A_1609, 0, sizeof l_A_1609);
S_R28(&l_A_1609, r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_A), 0);
R9 l_I_1610; memset(&l_I_1610, 0, sizeof l_I_1610);
S_R9(&l_I_1610, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1609).f_T)))).f_KIND == g_T_ARR))
{
{ R28 rv1611 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1609).f_C, (l_A_1609).f_C, l_I_1610, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1609).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1611; }
}
}
}
{ R28 rv1612 = r_INDEX_EXPR2(p_E);
return rv1612; }
rt_raise(RT_X_INIT);
}
static R9 r_INDEX_VALUE(R17 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1613; memset(&l_SAVED_1613, 0, sizeof l_SAVED_1613);
l_SAVED_1613 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_1614; memset(&l_SAVED_Q_1614, 0, sizeof l_SAVED_Q_1614);
l_SAVED_Q_1614 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R28 l_V_1615; memset(&l_V_1615, 0, sizeof l_V_1615);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R28(&l_V_1615, r_EXPR(p_E, NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1613;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1614;
{ R9 rv1616 = r_INDEX_OF(l_V_1615, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1616; }
rt_raise(RT_X_INIT);
}
static R9 r_INDEX_OF(R28 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1617; memset(&l_T_1617, 0, sizeof l_T_1617);
l_T_1617 = r_REAL_TYPE((p_V).f_T);
if (((((*(R22 *)rt_nil_check((p_V).f_T))).f_KIND == g_T_ABS) || (((((*(R22 *)rt_nil_check(l_T_1617))).f_KIND == g_T_ENUM) && ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1617))).f_BASE))).f_UNORDERED || (!(((*(R22 *)rt_nil_check(l_T_1617))).f_REPS == NULL))))))))
{
{
R29 * l_ARGS_1618; memset(&l_ARGS_1618, 0, sizeof l_ARGS_1618);
l_ARGS_1618 = r_VAL_ARG(p_V, NULL);
R12 * l_Y_1619; memset(&l_Y_1619, 0, sizeof l_Y_1619);
l_Y_1619 = r_FIND_ROUTINE(r_MKN(rt_str("TO_FIXED", 8)), l_ARGS_1618, p_LINE, 0);
if ((l_Y_1619 == NULL))
{
r_FAILT(p_LINE, rt_str("an index of this type needs a TO_FIXED of the program (3.8.1): ", 63), r_TYPE_NAME((p_V).f_T));
}
{ R9 rv1620 = (r_CALL_SYM(l_Y_1619, l_ARGS_1618, p_LINE)).f_C;
return rv1620; }
}
}
if ((((*(R22 *)rt_nil_check(l_T_1617))).f_KIND == g_T_ENUM))
{
{ R9 rv1621 = (p_V).f_C;
return rv1621; }
}
if (((!(((*(R22 *)rt_nil_check(l_T_1617))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_1617))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(p_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((p_V).f_T));
}
{ R9 rv1622 = (p_V).f_C;
return rv1622; }
rt_raise(RT_X_INIT);
}
static R28 r_INDEX_EXPR2(R17 * p_E) { RT_B_TICK(); 
R28 l_B_1623; memset(&l_B_1623, 0, sizeof l_B_1623);
S_R28(&l_B_1623, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1624; memset(&l_T_1624, 0, sizeof l_T_1624);
l_T_1624 = r_REAL_TYPE((l_B_1623).f_T);
R17 * l_S_1625; memset(&l_S_1625, 0, sizeof l_S_1625);
l_S_1625 = ((*(R17 *)rt_nil_check(p_E))).f_B;
R9 l_IX_1626; memset(&l_IX_1626, 0, sizeof l_IX_1626);
S_R9(&l_IX_1626, r_MK(rt_str("", 0)), 0);
rt_int l_N_1627; memset(&l_N_1627, 0, sizeof l_N_1627);
l_N_1627 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1624))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1625 == NULL)) goto L_end1628;
{
if ((l_N_1627 > ((rt_int)0LL)))
{
S_R9(&l_IX_1626, r_CATS(l_IX_1626, rt_str(", ", 2)), 0);
}
S_R9(&l_IX_1626, r_CAT(l_IX_1626, r_INDEX_VALUE(l_S_1625)), 0);
l_N_1627 = rt_add(l_N_1627, ((rt_int)1LL));
l_S_1625 = ((*(R17 *)rt_nil_check(l_S_1625))).f_NEXT;
}
RT_B_TICK();
} L_end1628: ;
if ((!(l_N_1627 == ((*(R22 *)rt_nil_check(l_T_1624))).f_DIMS)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1627 == ((rt_int)1LL)))
{
{ R28 rv1629 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1623).f_C, l_IX_1626, (l_B_1623).f_C, (l_B_1623).f_C), ((*(R22 *)rt_nil_check(l_T_1624))).f_ELEM, (l_B_1623).f_LVAL, r_NO_TEXT());
return rv1629; }
}
{
R9 l_X_1630; memset(&l_X_1630, 0, sizeof l_X_1630);
S_R9(&l_X_1630, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1623).f_C, r_NUM(l_N_1627), (l_B_1623).f_C, (l_B_1623).f_C), 0);
{ R28 rv1631 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1630, l_IX_1626), ((*(R22 *)rt_nil_check(l_T_1624))).f_ELEM, (l_B_1623).f_LVAL, r_NO_TEXT());
return rv1631; }
}
rt_raise(RT_X_INIT);
}
static R9 r_OP_NAME(R9 p_OP, rt_int p_UNARY) { RT_B_TICK(); 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R9 rv1632 = r_MKN(rt_str("NEGATE_", 7));
return rv1632; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R9 rv1633 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1633; }
}
{ R9 rv1634 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1634; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R9 rv1635 = r_MKN(rt_str("ADD_", 4));
return rv1635; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R9 rv1636 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1636; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R9 rv1637 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1637; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R9 rv1638 = r_MKN(rt_str("DIVIDE_", 7));
return rv1638; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R9 rv1639 = r_MKN(rt_str("MODULUS_", 8));
return rv1639; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R9 rv1640 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1640; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R9 rv1641 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1641; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R9 rv1642 = r_MKN(rt_str("EQUAL_", 6));
return rv1642; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R9 rv1643 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1643; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R9 rv1644 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1644; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R9 rv1645 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1645; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R9 rv1646 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1646; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R9 rv1647 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1647; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R9 rv1648 = r_MKN(rt_str("AND_", 4));
return rv1648; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R9 rv1649 = r_MKN(rt_str("OR_", 3));
return rv1649; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R9 rv1650 = r_MKN(rt_str("XOR_", 4));
return rv1650; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R9 rv1651 = r_MKN(rt_str("IMPLIES_", 8));
return rv1651; }
}
{ R9 rv1652 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1652; }
rt_raise(RT_X_INIT);
}
static R29 * r_VAL_ARG(R28 p_V, R29 * p_NEXT) { RT_B_TICK(); 
R29 * l_A_1653; memset(&l_A_1653, 0, sizeof l_A_1653);
l_A_1653 = ({ R29 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R29(&(*(R29 *)rt_nil_check(l_A_1653)), ({ R29 rc1654; memset(&rc1654, 0, sizeof rc1654);  rc1654.f_E = NULL; S_R28(&rc1654.f_V, p_V, 0); rc1654.f_HAVE = 1; rc1654.f_MODE = g_M_IN; rc1654.f_NEXT = p_NEXT; rc1654; }), 0);
{ R29 * rv1655 = l_A_1653;
return rv1655; }
rt_raise(RT_X_INIT);
}
static R29 * r_NODE_ARG(R17 * p_E, rt_int p_MODE, R29 * p_NEXT) { RT_B_TICK(); 
R29 * l_A_1656; memset(&l_A_1656, 0, sizeof l_A_1656);
l_A_1656 = ({ R29 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R29(&(*(R29 *)rt_nil_check(l_A_1656)), ({ R29 rc1657; memset(&rc1657, 0, sizeof rc1657);  rc1657.f_E = p_E; S_R28(&rc1657.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1657.f_HAVE = 0; rc1657.f_MODE = p_MODE; rc1657.f_NEXT = p_NEXT; rc1657; }), 0);
{ R29 * rv1658 = l_A_1656;
return rv1658; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R9 p_NAME, R29 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1659; memset(&l_Y_1659, 0, sizeof l_Y_1659);
l_Y_1659 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1659 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1659 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1660 = l_Y_1659;
return rv1660; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_USER_ROUTINE(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1661; memset(&l_Y_1661, 0, sizeof l_Y_1661);
l_Y_1661 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_1661 == NULL)) goto L_end1662;
{
if ((((*(R12 *)rt_nil_check(l_Y_1661))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1663 = 1;
return rv1663; }
}
l_Y_1661 = r_LOOKUP_NEXT(l_Y_1661);
}
RT_B_TICK();
} L_end1662: ;
l_Y_1661 = r_LOOKUP(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))));
for (;;) {
if ((l_Y_1661 == NULL)) goto L_end1664;
{
if ((((*(R12 *)rt_nil_check(l_Y_1661))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1665 = 1;
return rv1665; }
}
l_Y_1661 = r_LOOKUP_NEXT(l_Y_1661);
}
RT_B_TICK();
} L_end1664: ;
{ rt_int rv1666 = 0;
return rv1666; }
rt_raise(RT_X_INIT);
}
static R29 * r_QUAL_ARGS(rt_int p_LINE) { RT_B_TICK(); 
R17 * l_Q_1667; memset(&l_Q_1667, 0, sizeof l_Q_1667);
l_Q_1667 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R29 * l_R_1668; memset(&l_R_1668, 0, sizeof l_R_1668);
l_R_1668 = NULL;
if ((l_Q_1667 == NULL))
{
{ R29 * rv1669 = NULL;
return rv1669; }
}
if (((((*(R17 *)rt_nil_check(l_Q_1667))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_R_1668 = r_VAL_ARG(r_ENUM_LITERAL(r_LIT_NODE_T(((*(R17 *)rt_nil_check(l_Q_1667))).f_NAME, p_LINE), r_ROUNDINGS_TYPE()), NULL);
}
if ((!(((*(R17 *)rt_nil_check(l_Q_1667))).f_B == NULL)))
{
l_R_1668 = r_VAL_ARG(r_EXPR(((*(R17 *)rt_nil_check(l_Q_1667))).f_B, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_R_1668);
}
{ R29 * rv1670 = l_R_1668;
return rv1670; }
rt_raise(RT_X_INIT);
}
static R28 r_OPERATOR_CALL3(R9 p_NAME, R28 p_A, R17 * p_B, R17 * p_C, rt_int p_LINE) { RT_B_TICK(); 
R29 * l_ARGS_1671; memset(&l_ARGS_1671, 0, sizeof l_ARGS_1671);
l_ARGS_1671 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1672; memset(&l_Y_1672, 0, sizeof l_Y_1672);
l_Y_1672 = r_USER_OPERATOR(p_NAME, l_ARGS_1671, p_LINE);
if ((l_Y_1672 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R28 rv1673 = r_CALL_SYM(l_Y_1672, l_ARGS_1671, p_LINE);
return rv1673; }
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
{ R9 rv1674 = p_C;
return rv1674; }
}
if ((p_STO > p_SFROM))
{
{ R9 rv1675 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1675; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R9 rv1676 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1676; }
}
{ R9 rv1677 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1677; }
rt_raise(RT_X_INIT);
}
static R9 r_RESCALE(R28 p_V, rt_int p_S, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R9 rv1678 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1678; }
rt_raise(RT_X_INIT);
}
static R9 r_CONVERT(R28 p_V, R22 * p_T, rt_int p_LINE, R9 p_SELF) { RT_B_TICK(); 
R22 * l_RT_1679; memset(&l_RT_1679, 0, sizeof l_RT_1679);
l_RT_1679 = r_REAL_TYPE(p_T);
R22 * l_VT_1680; memset(&l_VT_1680, 0, sizeof l_VT_1680);
l_VT_1680 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1680))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1679))).f_KIND == g_T_PTR)))
{
{ R9 rv1681 = (p_V).f_C;
return rv1681; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1680))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1680)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R9 rv1682 = (p_V).f_C;
return rv1682; }
}
if ((!r_SAME_CLASS(l_RT_1679, l_VT_1680)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1680), (r_TYPE_NAME(l_VT_1680)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1679), (r_TYPE_NAME(l_RT_1679)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1679))).f_KIND == g_T_INT))
{
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_RT_1679))).f_SCALE))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE == ((*(R22 *)rt_nil_check(l_RT_1679))).f_SCALE))
{
{ R9 rv1683 = r_RANGE_CHECK(l_RT_1679, (p_V).f_C, p_SELF);
return rv1683; }
}
{ R9 rv1684 = r_RANGE_CHECK(l_RT_1679, r_FMT3(rt_str("rt_b_conv(@, @, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(l_RT_1679))).f_SCALE)), p_SELF);
return rv1684; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1679))).f_KIND == g_T_FLOAT))
{
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_RT_1679))).f_SCALE) < r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1680))).f_SCALE)))
{
if (r_IS_D(l_VT_1680))
{
{ R9 rv1685 = r_RANGE_CHECK(l_RT_1679, r_FMT2(rt_str("rt_b_single_of_d(@, @, 1)", 25), (p_V).f_C, r_FLOAT_TRUNC()), p_SELF);
return rv1685; }
}
{ R9 rv1686 = r_RANGE_CHECK(l_RT_1679, r_FMT3(rt_str("rt_b_fconv(@, @, @, 1)", 22), (p_V).f_C, r_SINGLE_C(((*(R22 *)rt_nil_check(l_RT_1679))).f_SCALE), r_FLOAT_TRUNC()), p_SELF);
return rv1686; }
}
if (r_IS_D(l_RT_1679))
{
{ R9 rv1687 = r_RANGE_CHECK(l_RT_1679, r_AS_D(p_V), p_SELF);
return rv1687; }
}
{ R9 rv1688 = r_RANGE_CHECK(l_RT_1679, (p_V).f_C, p_SELF);
return rv1688; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1679))).f_KIND == g_T_ENUM))
{
if (((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1679))).f_BASE))).f_UNORDERED && ((r_HAS_VALUES(l_RT_1679) || r_HAS_VALUES(l_VT_1680)))) && (!r_SAME_REPS(l_RT_1679, l_VT_1680))))
{
r_FAIL(p_LINE, rt_str("an UNORDERED value with ENUM_VAL_REP is assigned only with the same reptype (3.4.5)", 83));
}
{ R9 rv1689 = r_RANGE_CHECK(l_RT_1679, (p_V).f_C, p_SELF);
return rv1689; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1679))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1679))).f_KIND == g_T_BITS)))
{
r_SAME_CHARSET(l_RT_1679, l_VT_1680, p_LINE);
if (((((*(R22 *)rt_nil_check(l_RT_1679))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1680))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1679))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1680))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1679))).f_KIND == g_T_PTR))
{
if ((!r_IDENTICAL_TYPE(r_TARGET(l_RT_1679), r_TARGET(l_VT_1680))))
{
r_FAIL(p_LINE, rt_str("the ELEMENT_TYPE of the pointers are not identical (3.10.5)", 59));
}
{ R9 rv1690 = r_TARGET_ARGS_CHECK(r_TARGET(l_RT_1679), r_TARGET(l_VT_1680), (p_V).f_C);
return rv1690; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1679))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1679)) && (!r_HAS_ANY(l_VT_1680))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1679))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1680))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1679))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1679))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1680))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
if ((!r_SAME_EXTENTS(l_RT_1679, l_VT_1680)))
{
r_FAIL(p_LINE, rt_str("the arrays have different EXTENT attributes (3.8.5)", 51));
}
}
{ R9 rv1691 = (p_V).f_C;
return rv1691; }
rt_raise(RT_X_INIT);
}
static R9 r_STORE_CODE(R22 * p_T, R9 p_LV, R28 p_V, rt_int p_LINE, R9 p_SELF) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R29 * l_ARGS_1692; memset(&l_ARGS_1692, 0, sizeof l_ARGS_1692);
l_ARGS_1692 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1693; memset(&l_Y_1693, 0, sizeof l_Y_1693);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_SQUAL == NULL)))
{
{
R17 * l_SAVED_Q_1694; memset(&l_SAVED_Q_1694, 0, sizeof l_SAVED_Q_1694);
l_SAVED_Q_1694 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R29 * l_X_1695; memset(&l_X_1695, 0, sizeof l_X_1695);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
l_X_1695 = r_QUAL_ARGS(p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1694;
if ((!(l_X_1695 == NULL)))
{
{
R29 * l_P_1696; memset(&l_P_1696, 0, sizeof l_P_1696);
l_P_1696 = l_X_1695;
for (;;) {
if ((((*(R29 *)rt_nil_check(l_P_1696))).f_NEXT == NULL)) goto L_end1697;
{
l_P_1696 = ((*(R29 *)rt_nil_check(l_P_1696))).f_NEXT;
}
RT_B_TICK();
} L_end1697: ;
((*(R29 *)rt_nil_check(l_P_1696))).f_NEXT = ((*(R29 *)rt_nil_check(l_ARGS_1692))).f_NEXT;
((*(R29 *)rt_nil_check(l_ARGS_1692))).f_NEXT = l_X_1695;
}
}
}
}
{
R29 * l_LAST_1698; memset(&l_LAST_1698, 0, sizeof l_LAST_1698);
l_LAST_1698 = l_ARGS_1692;
for (;;) {
if ((((*(R29 *)rt_nil_check(l_LAST_1698))).f_NEXT == NULL)) goto L_end1699;
{
l_LAST_1698 = ((*(R29 *)rt_nil_check(l_LAST_1698))).f_NEXT;
}
RT_B_TICK();
} L_end1699: ;
((*(R29 *)rt_nil_check(l_LAST_1698))).f_MODE = g_M_OUT;
l_Y_1693 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1692, p_LINE, 0);
if ((l_Y_1693 == NULL))
{
((*(R29 *)rt_nil_check(l_LAST_1698))).f_MODE = g_M_INOUT;
l_Y_1693 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1692, p_LINE, 0);
}
}
if ((l_Y_1693 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R9 rv1700 = r_CATS((r_CALL_SYM(l_Y_1693, l_ARGS_1692, p_LINE)).f_C, rt_str(";", 1));
return rv1700; }
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
if ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, (p_V).f_T)))
{
{ R9 rv1701 = r_COMPONENT_STORE(p_T, (p_V).f_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF), p_LINE);
return rv1701; }
}
}
{ R9 rv1702 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1702; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ABS_PART(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ rt_int rv1703 = 1;
return rv1703; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{ rt_int rv1704 = r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM);
return rv1704; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R26 * l_F_1705; memset(&l_F_1705, 0, sizeof l_F_1705);
l_F_1705 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1705 == NULL)) goto L_end1706;
{
if ((((*(R26 *)rt_nil_check(l_F_1705))).f_KIND == ((rt_int)0LL)))
{
if (r_HAS_ABS_PART(((*(R26 *)rt_nil_check(l_F_1705))).f_T))
{
{ rt_int rv1707 = 1;
return rv1707; }
}
}
l_F_1705 = ((*(R26 *)rt_nil_check(l_F_1705))).f_NEXT;
}
RT_B_TICK();
} L_end1706: ;
}
}
{ rt_int rv1708 = 0;
return rv1708; }
rt_raise(RT_X_INIT);
}
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT) { RT_B_TICK(); 
if (((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_KIND == g_T_ARR))))
{
{ rt_int rv1709 = 0;
return rv1709; }
}
if ((!r_IS_NUMERIC_OR_ENUM(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM))))
{
{ rt_int rv1710 = 0;
return rv1710; }
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1711 = 0;
return rv1711; }
}
{ rt_int rv1712 = (!r_SAME_RANGE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM));
return rv1712; }
rt_raise(RT_X_INIT);
}
static R9 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R9 p_LV, R9 p_RV, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R9 rv1713 = r_STORE_CODE(p_T, p_LV, r_MKET(p_RV, p_VT), p_LINE, r_NO_TEXT());
return rv1713; }
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, p_VT)))))
{
{
R9 l_D_1714; memset(&l_D_1714, 0, sizeof l_D_1714);
S_R9(&l_D_1714, r_NEW_NAME(rt_str("ad", 2)), 0);
R9 l_S_1715; memset(&l_S_1715, 0, sizeof l_S_1715);
S_R9(&l_S_1715, r_NEW_NAME(rt_str("as", 2)), 0);
R9 l_I_1716; memset(&l_I_1716, 0, sizeof l_I_1716);
S_R9(&l_I_1716, r_NEW_NAME(rt_str("ai", 2)), 0);
R9 l_N_1717; memset(&l_N_1717, 0, sizeof l_N_1717);
S_R9(&l_N_1717, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R22 * l_VE_1718; memset(&l_VE_1718, 0, sizeof l_VE_1718);
l_VE_1718 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM;
R9 l_R_1719; memset(&l_R_1719, 0, sizeof l_R_1719);
S_R9(&l_R_1719, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1714, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R9(&l_R_1719, r_FMT3(rt_str("@@ = @; if (!rt_b_same_extents(", 31), l_R_1719, l_S_1715, p_RV), 0);
S_R9(&l_R_1719, r_FMT4(rt_str("@@, @->lo, @->hi, ", 18), l_R_1719, l_N_1717, l_D_1714, l_D_1714), 0);
S_R9(&l_R_1719, r_FMT3(rt_str("@@.lo, @.hi)) rt_raise(RT_B_SIZE); ", 35), l_R_1719, l_S_1715, l_S_1715), 0);
S_R9(&l_R_1719, r_FMT4(rt_str("@rt_int @n = rt_b_extent(@, @->lo, ", 35), l_R_1719, l_I_1716, l_N_1717, l_D_1714), 0);
S_R9(&l_R_1719, r_FMT2(rt_str("@@->hi);", 8), l_R_1719, l_D_1714), 0);
if (r_ELEMENTS_NEED_CHECK(p_T, p_VT))
{
S_R9(&l_R_1719, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1719, l_I_1716, l_I_1716, l_I_1716), 0);
S_R9(&l_R_1719, r_FMT3(rt_str("@@++) (void)@;", 14), l_R_1719, l_I_1716, r_RANGE_CHECK(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_S_1715, l_I_1716), r_NO_TEXT())), 0);
}
S_R9(&l_R_1719, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1719, l_I_1716, l_I_1716, l_I_1716), 0);
if (((r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_REC)) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_ARR)))
{
S_R9(&l_R_1719, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1719, l_I_1716, r_COMPONENT_STORE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, l_VE_1718, r_FMT2(rt_str("@->p[@]", 7), l_D_1714, l_I_1716), r_FMT2(rt_str("@.p[@]", 6), l_S_1715, l_I_1716), p_LINE)), 0);
}
else
{
S_R9(&l_R_1719, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1719, l_I_1716, r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@->p[@]", 7), l_D_1714, l_I_1716), r_FMT2(rt_str("@.p[@]", 6), l_S_1715, l_I_1716))), 0);
}
{ R9 rv1720 = l_R_1719;
return rv1720; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_D_1721; memset(&l_D_1721, 0, sizeof l_D_1721);
S_R9(&l_D_1721, r_NEW_NAME(rt_str("rd", 2)), 0);
R9 l_S_1722; memset(&l_S_1722, 0, sizeof l_S_1722);
S_R9(&l_S_1722, r_NEW_NAME(rt_str("rs", 2)), 0);
R26 * l_F_1723; memset(&l_F_1723, 0, sizeof l_F_1723);
l_F_1723 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_R_1724; memset(&l_R_1724, 0, sizeof l_R_1724);
S_R9(&l_R_1724, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1721, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R9(&l_R_1724, r_FMT3(rt_str("@@ = @;", 7), l_R_1724, l_S_1722, p_RV), 0);
for (;;) {
if ((l_F_1723 == NULL)) goto L_end1725;
{
{
R9 l_DF_1726; memset(&l_DF_1726, 0, sizeof l_DF_1726);
S_R9(&l_DF_1726, r_FMT2(rt_str("@->@", 4), l_D_1721, ((*(R26 *)rt_nil_check(l_F_1723))).f_CNAME), 0);
R9 l_SF_1727; memset(&l_SF_1727, 0, sizeof l_SF_1727);
S_R9(&l_SF_1727, r_FMT2(rt_str("@.@", 3), l_S_1722, ((*(R26 *)rt_nil_check(l_F_1723))).f_CNAME), 0);
if (((((*(R26 *)rt_nil_check(l_F_1723))).f_KIND == ((rt_int)1LL)) || (((((*(R26 *)rt_nil_check(l_F_1723))).f_KIND == ((rt_int)2LL)) && (!r_HAS_ANY(p_T))))))
{
S_R9(&l_R_1724, r_FMT2(rt_str("@ if (!(@)) rt_raise(RT_B_TYPE_MISMATCH);", 41), l_R_1724, r_EQUAL_CODE(((*(R26 *)rt_nil_check(l_F_1723))).f_T, l_DF_1726, l_SF_1727)), 0);
}
else if ((((*(R26 *)rt_nil_check(l_F_1723))).f_KIND == ((rt_int)2LL)))
{
S_R9(&l_R_1724, r_FMT3(rt_str("@ @ = @;", 8), l_R_1724, l_DF_1726, l_SF_1727), 0);
}
else
{
S_R9(&l_R_1724, r_FMT2(rt_str("@ @", 3), l_R_1724, r_COMPONENT_STORE(((*(R26 *)rt_nil_check(l_F_1723))).f_T, ((*(R26 *)rt_nil_check(l_F_1723))).f_T, l_DF_1726, l_SF_1727, p_LINE)), 0);
}
}
l_F_1723 = ((*(R26 *)rt_nil_check(l_F_1723))).f_NEXT;
}
RT_B_TICK();
} L_end1725: ;
{ R9 rv1728 = r_CATS(l_R_1724, rt_str(" }", 2));
return rv1728; }
}
}
{ R9 rv1729 = r_ASSIGN_CODE(p_T, p_LV, p_RV);
return rv1729; }
rt_raise(RT_X_INIT);
}
static R9 r_COMPONENT_EQUAL(R22 * p_T, R9 p_A, R9 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R29 * l_ARGS_1730; memset(&l_ARGS_1730, 0, sizeof l_ARGS_1730);
l_ARGS_1730 = r_VAL_ARG(r_MKET(p_A, p_T), r_VAL_ARG(r_MKET(p_B, p_T), NULL));
R12 * l_Y_1731; memset(&l_Y_1731, 0, sizeof l_Y_1731);
l_Y_1731 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1730, p_LINE);
if ((l_Y_1731 == NULL))
{
r_FAILT(p_LINE, rt_str("no EQUAL_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R9 rv1732 = (r_CALL_SYM(l_Y_1731, l_ARGS_1730, p_LINE)).f_C;
return rv1732; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_X_1733; memset(&l_X_1733, 0, sizeof l_X_1733);
S_R9(&l_X_1733, r_NEW_NAME(rt_str("ea", 2)), 0);
R9 l_Z_1734; memset(&l_Z_1734, 0, sizeof l_Z_1734);
S_R9(&l_Z_1734, r_NEW_NAME(rt_str("eb", 2)), 0);
R9 l_I_1735; memset(&l_I_1735, 0, sizeof l_I_1735);
S_R9(&l_I_1735, r_NEW_NAME(rt_str("ei", 2)), 0);
R9 l_N_1736; memset(&l_N_1736, 0, sizeof l_N_1736);
S_R9(&l_N_1736, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R9 l_R_1737; memset(&l_R_1737, 0, sizeof l_R_1737);
S_R9(&l_R_1737, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1733, p_A, l_Z_1734), 0);
S_R9(&l_R_1737, r_FMT4(rt_str("@@; int @r = rt_b_same_extents(@, ", 34), l_R_1737, p_B, l_I_1735, l_N_1736), 0);
S_R9(&l_R_1737, r_FMT4(rt_str("@@.lo, @.hi, @.lo, ", 19), l_R_1737, l_X_1733, l_X_1733, l_Z_1734), 0);
S_R9(&l_R_1737, r_FMT4(rt_str("@@.hi); rt_int @n = rt_b_extent(@, ", 35), l_R_1737, l_Z_1734, l_I_1735, l_N_1736), 0);
S_R9(&l_R_1737, r_FMT3(rt_str("@@.lo, @.hi);", 13), l_R_1737, l_X_1733, l_X_1733), 0);
S_R9(&l_R_1737, r_FMT4(rt_str("@ for (rt_int @ = 0; @r && @ < ", 31), l_R_1737, l_I_1735, l_I_1735, l_I_1735), 0);
S_R9(&l_R_1737, r_FMT4(rt_str("@@n; @++) @r = ", 15), l_R_1737, l_I_1735, l_I_1735, l_I_1735), 0);
S_R9(&l_R_1737, r_FMT2(rt_str("@@;", 3), l_R_1737, r_COMPONENT_EQUAL(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_X_1733, l_I_1735), r_FMT2(rt_str("@.p[@]", 6), l_Z_1734, l_I_1735), p_LINE)), 0);
{ R9 rv1738 = r_FMT2(rt_str("@ @r; })", 8), l_R_1737, l_I_1735);
return rv1738; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_X_1739; memset(&l_X_1739, 0, sizeof l_X_1739);
S_R9(&l_X_1739, r_NEW_NAME(rt_str("ra", 2)), 0);
R9 l_Z_1740; memset(&l_Z_1740, 0, sizeof l_Z_1740);
S_R9(&l_Z_1740, r_NEW_NAME(rt_str("rb", 2)), 0);
R26 * l_F_1741; memset(&l_F_1741, 0, sizeof l_F_1741);
l_F_1741 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_R_1742; memset(&l_R_1742, 0, sizeof l_R_1742);
S_R9(&l_R_1742, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1739, p_A, l_Z_1740), 0);
R9 l_EQ_1743; memset(&l_EQ_1743, 0, sizeof l_EQ_1743);
S_R9(&l_EQ_1743, r_MK(rt_str("1", 1)), 0);
S_R9(&l_R_1742, r_FMT2(rt_str("@@;", 3), l_R_1742, p_B), 0);
for (;;) {
if ((l_F_1741 == NULL)) goto L_end1744;
{
{
R9 l_C_1745; memset(&l_C_1745, 0, sizeof l_C_1745);
S_R9(&l_C_1745, r_COMPONENT_EQUAL(((*(R26 *)rt_nil_check(l_F_1741))).f_T, r_FMT2(rt_str("@.@", 3), l_X_1739, ((*(R26 *)rt_nil_check(l_F_1741))).f_CNAME), r_FMT2(rt_str("@.@", 3), l_Z_1740, ((*(R26 *)rt_nil_check(l_F_1741))).f_CNAME), p_LINE), 0);
if (((((*(R26 *)rt_nil_check(l_F_1741))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R9(&l_EQ_1743, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1743, r_VARIANT_COND(l_F_1741, p_T, l_X_1739), l_C_1745), 0);
}
else
{
S_R9(&l_EQ_1743, r_FMT2(rt_str("@ && @", 6), l_EQ_1743, l_C_1745), 0);
}
}
l_F_1741 = ((*(R26 *)rt_nil_check(l_F_1741))).f_NEXT;
}
RT_B_TICK();
} L_end1744: ;
{ R9 rv1746 = r_FMT2(rt_str("@ @; })", 7), l_R_1742, l_EQ_1743);
return rv1746; }
}
}
{ R9 rv1747 = r_EQUAL_CODE(p_T, p_A, p_B);
return rv1747; }
rt_raise(RT_X_INIT);
}
static R28 r_UNARY(R17 * p_E) { RT_B_TICK(); 
{ R28 rv1748 = r_STD_RESULT(r_UNARY1(p_E));
return rv1748; }
rt_raise(RT_X_INIT);
}
static R28 r_UNARY1(R17 * p_E) { RT_B_TICK(); 
R28 l_A_1749; memset(&l_A_1749, 0, sizeof l_A_1749);
S_R28(&l_A_1749, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1750; memset(&l_T_1750, 0, sizeof l_T_1750);
l_T_1750 = (l_A_1749).f_T;
R9 l_OP_1751; memset(&l_OP_1751, 0, sizeof l_OP_1751);
S_R9(&l_OP_1751, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
if (((((*(R22 *)rt_nil_check(l_T_1750))).f_GENP).f_LEN > ((rt_int)0LL)))
{
r_REQUIRE_WHERE(r_OP_NAME(l_OP_1751, 1), ((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
if (((((*(R22 *)rt_nil_check(l_T_1750))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_OP_NAME(l_OP_1751, 1))))
{
{
R29 * l_ARGS_1752; memset(&l_ARGS_1752, 0, sizeof l_ARGS_1752);
l_ARGS_1752 = r_VAL_ARG(l_A_1749, r_QUAL_ARGS(((*(R17 *)rt_nil_check(p_E))).f_LINE));
R12 * l_Y_1753; memset(&l_Y_1753, 0, sizeof l_Y_1753);
l_Y_1753 = r_USER_OPERATOR(r_OP_NAME(l_OP_1751, 1), l_ARGS_1752, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if (((l_Y_1753 == NULL) && (!(((*(R29 *)rt_nil_check(l_ARGS_1752))).f_NEXT == NULL))))
{
((*(R29 *)rt_nil_check(l_ARGS_1752))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(r_OP_NAME(l_OP_1751, 1), l_ARGS_1752, ((*(R17 *)rt_nil_check(p_E))).f_LINE) == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("no operation takes the precision or rounding of the expression ", 63), rt_str("as arguments (D.5): ", 20)), r_OP_NAME(l_OP_1751, 1));
}
}
if ((!(l_Y_1753 == NULL)))
{
{ R28 rv1754 = r_CALL_SYM(l_Y_1753, l_ARGS_1752, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1754; }
}
if ((((*(R22 *)rt_nil_check(l_T_1750))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator for the abstract type ", 41), r_TYPE_NAME(l_T_1750));
}
}
}
if (r_TEQS(l_OP_1751, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1750))).f_KIND == g_T_BOOL))
{
{ R28 rv1755 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1749).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1755; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1750))).f_KIND == g_T_BITS))
{
{ R28 rv1756 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1749).f_C), l_T_1750);
return rv1756; }
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1750))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1751, rt_str("-", 1)))
{
{ R28 rv1757 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1749).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1750))).f_SCALE));
return rv1757; }
}
{ R28 rv1758 = r_MKET((l_A_1749).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1750))).f_SCALE));
return rv1758; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1750))).f_KIND == g_T_FLOAT))
{
{
R22 * l_FT_1759; memset(&l_FT_1759, 0, sizeof l_FT_1759);
l_FT_1759 = r_FLOAT_TYPE(r_MAX_INT(((*(R22 *)rt_nil_check(l_T_1750))).f_SCALE, r_QUAL_PREC()));
if (r_TEQS(l_OP_1751, rt_str("-", 1)))
{
{ R28 rv1760 = r_MKET(r_FLOAT_OP(l_OP_1751, r_MKET(r_MK(rt_str("0.0", 3)), r_FLOAT_TYPE(((rt_int)1LL))), l_A_1749, l_FT_1759), l_FT_1759);
return rv1760; }
}
{ R28 rv1761 = r_MKET((l_A_1749).f_C, l_FT_1759);
return rv1761; }
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1750));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R17 * p_E) { RT_B_TICK(); 
{ rt_int rv1762 = (((((((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) && (!r_NAMES_OBJECT(((*(R17 *)rt_nil_check(p_E))).f_NAME)))) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R17 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1762; }
rt_raise(RT_X_INIT);
}
static R28 r_BINARY(R17 * p_E) { RT_B_TICK(); 
R9 l_OP_1763; memset(&l_OP_1763, 0, sizeof l_OP_1763);
S_R9(&l_OP_1763, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
R28 l_A_1764; memset(&l_A_1764, 0, sizeof l_A_1764);
R28 l_B_1765; memset(&l_B_1765, 0, sizeof l_B_1765);
if ((r_TEQS(l_OP_1763, rt_str("&", 1)) || r_TEQS(l_OP_1763, rt_str("!", 1))))
{
{
R25 l_MA_1766; memset(&l_MA_1766, 0, sizeof l_MA_1766);
S_R25(&l_MA_1766, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R9 l_CA_1767; memset(&l_CA_1767, 0, sizeof l_CA_1767);
S_R9(&l_CA_1767, r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R9 l_CB_1768; memset(&l_CB_1768, 0, sizeof l_CB_1768);
S_R9(&l_CB_1768, r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1763, rt_str("&", 1)))
{
{ R28 rv1769 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1767, l_CB_1768), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1769; }
}
{ R28 rv1770 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1767, l_CB_1768), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1770; }
}
}
if ((r_IS_LITERALISH(((*(R17 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R17 *)rt_nil_check(p_E))).f_B))))
{
S_R28(&l_B_1765, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R28(&l_A_1764, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, (l_B_1765).f_T), 0);
}
else
{
S_R28(&l_A_1764, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R28(&l_B_1765, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, (l_A_1764).f_T), 0);
}
{ R28 rv1771 = r_STD_RESULT(r_APPLY_OPERATOR(p_E, l_OP_1763, l_A_1764, l_B_1765));
return rv1771; }
rt_raise(RT_X_INIT);
}
static R28 r_STD_RESULT(R28 p_V) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R28 rv1772 = p_V;
return rv1772; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((p_V).f_T)))).f_KIND == g_T_INT)))
{
{ R28 rv1773 = p_V;
return rv1773; }
}
{ R28 rv1774 = ({ R28 rc1775; memset(&rc1775, 0, sizeof rc1775);  S_R9(&rc1775.f_C, r_STD_CHECK((p_V).f_C), 0); rc1775.f_T = (p_V).f_T; rc1775.f_LVAL = 0; S_R9(&rc1775.f_SELF, (p_V).f_SELF, 0); rc1775; });
return rv1774; }
rt_raise(RT_X_INIT);
}
static R28 r_APPLY_OPERATOR(R17 * p_E, R9 p_OP, R28 p_A, R28 p_B) { RT_B_TICK(); 
R22 * l_AT_1776; memset(&l_AT_1776, 0, sizeof l_AT_1776);
l_AT_1776 = (p_A).f_T;
R22 * l_BT_1777; memset(&l_BT_1777, 0, sizeof l_BT_1777);
l_BT_1777 = (p_B).f_T;
rt_int l_LINE_1778; memset(&l_LINE_1778, 0, sizeof l_LINE_1778);
l_LINE_1778 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
{
R9 l_NAME_1779; memset(&l_NAME_1779, 0, sizeof l_NAME_1779);
S_R9(&l_NAME_1779, r_OP_NAME(p_OP, 0), 0);
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
S_R9(&l_NAME_1779, r_QMKN(rt_str("MD_", 3), l_NAME_1779), 0);
}
if ((((((*(R22 *)rt_nil_check(l_AT_1776))).f_GENP).f_LEN > ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_BT_1777))).f_GENP).f_LEN > ((rt_int)0LL))))
{
r_REQUIRE_WHERE(l_NAME_1779, l_LINE_1778);
}
if (((r_HAS_USER_ROUTINE(l_NAME_1779) || (((*(R22 *)rt_nil_check(l_AT_1776))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1777))).f_KIND == g_T_ABS)))
{
{
R29 * l_ARGS_1780; memset(&l_ARGS_1780, 0, sizeof l_ARGS_1780);
l_ARGS_1780 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R29 * l_EXTRA_1781; memset(&l_EXTRA_1781, 0, sizeof l_EXTRA_1781);
l_EXTRA_1781 = r_QUAL_ARGS(l_LINE_1778);
R12 * l_Y_1782; memset(&l_Y_1782, 0, sizeof l_Y_1782);
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
l_EXTRA_1781 = r_VAL_ARG(r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_D, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_EXTRA_1781);
}
if ((!(l_EXTRA_1781 == NULL)))
{
((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(l_ARGS_1780))).f_NEXT))).f_NEXT = l_EXTRA_1781;
l_Y_1782 = r_USER_OPERATOR(l_NAME_1779, l_ARGS_1780, l_LINE_1778);
if ((!(l_Y_1782 == NULL)))
{
{ R28 rv1783 = r_CALL_SYM(l_Y_1782, l_ARGS_1780, l_LINE_1778);
return rv1783; }
}
((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(l_ARGS_1780))).f_NEXT))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(l_NAME_1779, l_ARGS_1780, l_LINE_1778) == NULL)))
{
r_FAILT(l_LINE_1778, rt_b_cat(rt_str("no operation takes the scale, precision or rounding of the ", 59), rt_str("expression as arguments (D.5): ", 31)), l_NAME_1779);
}
}
else
{
l_Y_1782 = r_USER_OPERATOR(l_NAME_1779, l_ARGS_1780, l_LINE_1778);
if ((!(l_Y_1782 == NULL)))
{
{ R28 rv1784 = r_CALL_SYM(l_Y_1782, l_ARGS_1780, l_LINE_1778);
return rv1784; }
}
}
if ((r_TEQS(p_OP, rt_str("<>", 2)) && (((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{
R12 * l_Q_1785; memset(&l_Q_1785, 0, sizeof l_Q_1785);
l_Q_1785 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1780, l_LINE_1778);
if ((!(l_Q_1785 == NULL)))
{
{ R28 rv1786 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1785, l_ARGS_1780, l_LINE_1778)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1786; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1776))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1777))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1778, rt_str("no such operation for the abstract type: ", 41), l_NAME_1779);
}
}
}
}
if ((!r_PREDEFINED_ROUNDING()))
{
r_FAILT(l_LINE_1778, rt_str("no operation is defined for the rounding mode ", 46), ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R28 rv1787 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1787; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R28 rv1788 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1788; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1776))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1777))).f_KIND == g_T_INT)))
{
{ R28 rv1789 = r_MKET(r_FIXED_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1789; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1776))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1777))).f_KIND == g_T_FLOAT)))
{
{ R28 rv1790 = r_MKET(r_FLOAT_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1790; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1776))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1776, l_BT_1777)))
{
if ((r_IS_UNORDERED(l_AT_1776) || r_IS_UNORDERED(l_BT_1777)))
{
r_FAIL(l_LINE_1778, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R28 rv1791 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1791; }
}
r_FAILT(l_LINE_1778, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1776))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1777))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1776))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1777))).f_KIND == g_T_BITS)))))
{
r_SAME_CHARSET(l_AT_1776, l_BT_1777, l_LINE_1778);
{
R22 * l_T_1792; memset(&l_T_1792, 0, sizeof l_T_1792);
l_T_1792 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1776))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1792))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1776))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1776))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1777))).f_MLEN).f_OK))
{
S_R25(&((*(R22 *)rt_nil_check(l_T_1792))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1776))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1777))).f_MLEN).f_V)), 0);
S_R9(&((*(R22 *)rt_nil_check(l_T_1792))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1792))).f_MLEN).f_V), 0);
}
{ R28 rv1793 = r_MKET(r_FMT2(rt_str("rt_b_cat(@, @)", 14), (p_A).f_C, (p_B).f_C), l_T_1792);
return rv1793; }
}
}
r_FAIL(l_LINE_1778, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1776))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1777))).f_KIND == g_T_BITS)))
{
{ R28 rv1794 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1776);
return rv1794; }
}
r_FAILT(l_LINE_1778, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1776))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1777))).f_KIND == g_T_INT)))
{
{ R28 rv1795 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1795; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1776))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1777))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1796; memset(&l_T_1796, 0, sizeof l_T_1796);
l_T_1796 = r_FLOAT_TYPE(r_MAX_INT(r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1776))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1777))).f_SCALE), r_QUAL_PREC()));
if ((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))
{
{ R28 rv1797 = r_MKET(r_FLOAT_OP(p_OP, p_A, p_B, l_T_1796), l_T_1796);
return rv1797; }
}
if (r_TEQS(p_OP, rt_str("**", 2)))
{
r_FAIL(l_LINE_1778, rt_str("** has no predefined meaning for floating point values (3.3.4.2)", 64));
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1776))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1777))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1776))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1777))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1778, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1778, rt_b_cat(rt_b_cat(rt_b_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1776), (r_TYPE_NAME(l_AT_1776)).f_LEN)));
rt_raise(RT_X_INIT);
}
static rt_int r_IDENTICAL_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1798; memset(&l_RA_1798, 0, sizeof l_RA_1798);
l_RA_1798 = r_REAL_TYPE(p_A);
R22 * l_RB_1799; memset(&l_RB_1799, 0, sizeof l_RB_1799);
l_RB_1799 = r_REAL_TYPE(p_B);
if ((p_A == p_B))
{
{ rt_int rv1800 = 1;
return rv1800; }
}
if (((!r_SAME_TYPE(p_A, p_B)) || (!r_SAME_RANGE(p_A, p_B))))
{
{ rt_int rv1801 = 0;
return rv1801; }
}
if (((((*(R22 *)rt_nil_check(l_RA_1798))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RA_1798))).f_KIND == g_T_BITS)))
{
if (((((*(R22 *)rt_nil_check(l_RA_1798))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_1799))).f_MLEN).f_OK))
{
{ rt_int rv1802 = ((((*(R22 *)rt_nil_check(l_RA_1798))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_1799))).f_MLEN).f_V);
return rv1802; }
}
}
else if ((((*(R22 *)rt_nil_check(l_RA_1798))).f_KIND == g_T_ARR))
{
{ rt_int rv1803 = (r_SAME_EXTENTS(l_RA_1798, l_RB_1799) && r_IDENTICAL_TYPE(((*(R22 *)rt_nil_check(l_RA_1798))).f_ELEM, ((*(R22 *)rt_nil_check(l_RB_1799))).f_ELEM));
return rv1803; }
}
{ rt_int rv1804 = 1;
return rv1804; }
rt_raise(RT_X_INIT);
}
static R9 r_TARGET_ARGS_CHECK(R22 * p_RT, R22 * p_VT, R9 p_C) { RT_B_TICK(); 
R22 * l_A_1805; memset(&l_A_1805, 0, sizeof l_A_1805);
l_A_1805 = r_REAL_TYPE(p_RT);
R22 * l_B_1806; memset(&l_B_1806, 0, sizeof l_B_1806);
l_B_1806 = r_REAL_TYPE(p_VT);
R9 l_R_1807; memset(&l_R_1807, 0, sizeof l_R_1807);
S_R9(&l_R_1807, r_MK(rt_str("", 0)), 0);
if (((!(((*(R22 *)rt_nil_check(l_A_1805))).f_KIND == g_T_REC)) || (!(((*(R22 *)rt_nil_check(l_B_1806))).f_KIND == g_T_REC))))
{
{ R9 rv1808 = p_C;
return rv1808; }
}
{
R26 * l_F_1809; memset(&l_F_1809, 0, sizeof l_F_1809);
l_F_1809 = ((*(R22 *)rt_nil_check(l_A_1805))).f_FIELDS;
R27 * l_P_1810; memset(&l_P_1810, 0, sizeof l_P_1810);
l_P_1810 = ((*(R22 *)rt_nil_check(l_A_1805))).f_ARGS;
R27 * l_Q_1811; memset(&l_Q_1811, 0, sizeof l_Q_1811);
l_Q_1811 = ((*(R22 *)rt_nil_check(l_B_1806))).f_ARGS;
for (;;) {
if ((((l_F_1809 == NULL) || (l_P_1810 == NULL)) || (l_Q_1811 == NULL))) goto L_end1812;
{
if ((!(((*(R26 *)rt_nil_check(l_F_1809))).f_KIND == ((rt_int)0LL))))
{
if (((((!((*(R27 *)rt_nil_check(l_P_1810))).f_ANYARG) && (!r_IS_GEN_ARG(l_P_1810))) && (!r_IS_GEN_ARG(l_Q_1811))) && (!(((((*(R27 *)rt_nil_check(l_P_1810))).f_MLO).f_OK && (((*(R27 *)rt_nil_check(l_Q_1811))).f_MLO).f_OK)))))
{
S_R9(&l_R_1807, r_FMT3(rt_str("@ if (p && p->@ != (@)) rt_raise(RT_B_TYPE_MISMATCH);", 53), l_R_1807, ((*(R26 *)rt_nil_check(l_F_1809))).f_CNAME, ((*(R27 *)rt_nil_check(l_P_1810))).f_LO), 0);
}
l_P_1810 = ((*(R27 *)rt_nil_check(l_P_1810))).f_NEXT;
l_Q_1811 = ((*(R27 *)rt_nil_check(l_Q_1811))).f_NEXT;
}
l_F_1809 = ((*(R26 *)rt_nil_check(l_F_1809))).f_NEXT;
}
RT_B_TICK();
} L_end1812: ;
}
if (((l_R_1807).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1813 = p_C;
return rv1813; }
}
{ R9 rv1814 = r_FMT3(rt_str("({ __typeof__(@) p = (@);@ p; })", 32), p_C, p_C, l_R_1807);
return rv1814; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_EXTENTS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R27 * l_P_1815; memset(&l_P_1815, 0, sizeof l_P_1815);
l_P_1815 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_A)))).f_BOUNDS;
R27 * l_Q_1816; memset(&l_Q_1816, 0, sizeof l_Q_1816);
l_Q_1816 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_B)))).f_BOUNDS;
for (;;) {
if (((l_P_1815 == NULL) || (l_Q_1816 == NULL))) goto L_end1817;
{
if (((((((((((*(R27 *)rt_nil_check(l_P_1815))).f_MLO).f_OK && (((*(R27 *)rt_nil_check(l_P_1815))).f_MHI).f_OK) && (((*(R27 *)rt_nil_check(l_Q_1816))).f_MLO).f_OK) && (((*(R27 *)rt_nil_check(l_Q_1816))).f_MHI).f_OK) && (!r_IS_GEN_TEXT(((*(R27 *)rt_nil_check(l_P_1815))).f_LO))) && (!r_IS_GEN_TEXT(((*(R27 *)rt_nil_check(l_P_1815))).f_HI))) && (!r_IS_GEN_TEXT(((*(R27 *)rt_nil_check(l_Q_1816))).f_LO))) && (!r_IS_GEN_TEXT(((*(R27 *)rt_nil_check(l_Q_1816))).f_HI))))
{
if ((!(r_MAX_INT(rt_add(rt_sub((((*(R27 *)rt_nil_check(l_P_1815))).f_MHI).f_V, (((*(R27 *)rt_nil_check(l_P_1815))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)) == r_MAX_INT(rt_add(rt_sub((((*(R27 *)rt_nil_check(l_Q_1816))).f_MHI).f_V, (((*(R27 *)rt_nil_check(l_Q_1816))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)))))
{
{ rt_int rv1818 = 0;
return rv1818; }
}
}
l_P_1815 = ((*(R27 *)rt_nil_check(l_P_1815))).f_NEXT;
l_Q_1816 = ((*(R27 *)rt_nil_check(l_Q_1816))).f_NEXT;
}
RT_B_TICK();
} L_end1817: ;
{ rt_int rv1819 = 1;
return rv1819; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_VALUES(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv1820 = 0;
return rv1820; }
}
{ rt_int rv1821 = (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL));
return rv1821; }
rt_raise(RT_X_INIT);
}
static R22 * r_FLOAT_TYPE(rt_int p_P) { RT_B_TICK(); 
R22 * l_T_1822; memset(&l_T_1822, 0, sizeof l_T_1822);
l_T_1822 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1822))).f_SCALE = p_P;
{ R22 * rv1823 = l_T_1822;
return rv1823; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_D(R22 * p_T) { RT_B_TICK(); 
if (((!(((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL))) || (p_T == NULL)))
{
{ rt_int rv1824 = 0;
return rv1824; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv1825 = 0;
return rv1825; }
}
{ rt_int rv1826 = (r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_SCALE) > ((rt_int)7LL));
return rv1826; }
rt_raise(RT_X_INIT);
}
static R9 r_AS_D(R28 p_V) { RT_B_TICK(); 
if (r_IS_D((p_V).f_T))
{
{ R9 rv1827 = (p_V).f_C;
return rv1827; }
}
{ R9 rv1828 = r_FMT1(rt_str("rt_b_d_of_double(@)", 19), (p_V).f_C);
return rv1828; }
rt_raise(RT_X_INIT);
}
static R9 r_AS_DOUBLE(R28 p_V) { RT_B_TICK(); 
if (r_IS_D((p_V).f_T))
{
{ R9 rv1829 = r_FMT1(rt_str("rt_b_double_of_d(@)", 19), (p_V).f_C);
return rv1829; }
}
{ R9 rv1830 = (p_V).f_C;
return rv1830; }
rt_raise(RT_X_INIT);
}
static R9 r_SINGLE_C(rt_int p_P) { RT_B_TICK(); 
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
{ R9 rv1831 = r_MK(rt_str("1", 1));
return rv1831; }
}
{ R9 rv1832 = r_MK(rt_str("0", 1));
return rv1832; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_TRUNC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9)) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8))))
{
{ R9 rv1833 = r_MK(rt_str("1", 1));
return rv1833; }
}
}
{ R9 rv1834 = r_MK(rt_str("0", 1));
return rv1834; }
rt_raise(RT_X_INIT);
}
static rt_int r_QUAL_PREC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B == NULL)))
{
{ rt_int rv1835 = (r_MANIFEST(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B)).f_V;
return rv1835; }
}
}
{ rt_int rv1836 = ((rt_int)0LL);
return rv1836; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_OP(R9 p_OP, R28 p_A, R28 p_B, R22 * p_T) { RT_B_TICK(); 
if (r_IS_D(p_T))
{
{ R9 rv1837 = r_FMT4(rt_str("rt_b_dop('@', @, @, @)", 22), p_OP, r_AS_D(p_A), r_AS_D(p_B), r_FLOAT_TRUNC());
return rv1837; }
}
{ R9 rv1838 = r_CAT(r_FMT3(rt_str("rt_b_fop('@', @, @, ", 20), p_OP, r_AS_DOUBLE(p_A), r_AS_DOUBLE(p_B)), r_FMT2(rt_str("@, @)", 5), r_SINGLE_C(((*(R22 *)rt_nil_check(p_T))).f_SCALE), r_FLOAT_TRUNC()));
return rv1838; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_COMPARE(R28 p_A, R28 p_B, R9 p_OP) { RT_B_TICK(); 
if ((r_IS_D((p_A).f_T) || r_IS_D((p_B).f_T)))
{
{ R9 rv1839 = r_FMT3(rt_str("(rt_b_dcmp(@, @) @ 0)", 21), r_AS_D(p_A), r_AS_D(p_B), r_C_RELOP(p_OP));
return rv1839; }
}
{ R9 rv1840 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, r_C_RELOP(p_OP), (p_B).f_C);
return rv1840; }
rt_raise(RT_X_INIT);
}
static R9 r_C_RELOP(R9 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R9 rv1841 = r_MK(rt_str("==", 2));
return rv1841; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R9 rv1842 = r_MK(rt_str("!=", 2));
return rv1842; }
}
{ R9 rv1843 = p_OP;
return rv1843; }
rt_raise(RT_X_INIT);
}
static R9 r_LOWER_OP(R9 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R9 rv1844 = r_MK(rt_str("and", 3));
return rv1844; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R9 rv1845 = r_MK(rt_str("or", 2));
return rv1845; }
}
{ R9 rv1846 = r_MK(rt_str("xor", 3));
return rv1846; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { RT_B_TICK(); 
if ((p_A > p_B))
{
{ rt_int rv1847 = p_A;
return rv1847; }
}
{ rt_int rv1848 = p_B;
return rv1848; }
rt_raise(RT_X_INIT);
}
static R9 r_FIXED_COMPARE(R28 p_A, R28 p_B, R9 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE == ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE))
{
{ R9 rv1849 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv1849; }
}
{ R9 rv1850 = r_CAT(r_FMT3(rt_str("(rt_b_cmp(@, @, @", 17), (p_A).f_C, r_NUM(((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE), (p_B).f_C), r_FMT2(rt_str(", @) @ 0)", 9), r_NUM(((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE), p_OP));
return rv1850; }
rt_raise(RT_X_INIT);
}
static R28 r_EQUALITY(R17 * p_E, R9 p_OP, R28 p_A, R28 p_B) { RT_B_TICK(); 
R22 * l_AT_1851; memset(&l_AT_1851, 0, sizeof l_AT_1851);
l_AT_1851 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1852; memset(&l_BT_1852, 0, sizeof l_BT_1852);
l_BT_1852 = r_REAL_TYPE((p_B).f_T);
R9 l_R_1853; memset(&l_R_1853, 0, sizeof l_R_1853);
if (((((*(R22 *)rt_nil_check(l_AT_1851))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1852))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1851))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1852))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1851))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1852))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R9(&l_R_1853, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1851))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1852))).f_KIND == g_T_INT)))
{
S_R9(&l_R_1853, r_FIXED_COMPARE(p_A, p_B, r_MK(rt_str("==", 2))), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1851))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1852))).f_KIND == g_T_FLOAT)))
{
S_R9(&l_R_1853, r_FLOAT_COMPARE(p_A, p_B, r_MK(rt_str("=", 1))), 0);
}
else
{
if ((!r_SAME_CLASS(l_AT_1851, l_BT_1852)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1851))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
r_SAME_CHARSET(l_AT_1851, l_BT_1852, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R22 *)rt_nil_check(l_AT_1851))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1851) || r_HAS_ANY(l_BT_1852)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
if ((((*(R22 *)rt_nil_check(l_AT_1851))).f_KIND == g_T_ARR))
{
if ((!r_SAME_EXTENTS(l_AT_1851, l_BT_1852)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("arrays of different EXTENT attributes are compared (3.8.4.1)", 60));
}
}
if ((((*(R22 *)rt_nil_check(l_AT_1851))).f_KIND == g_T_REC))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_AT_1851))).f_ARGS, ((*(R22 *)rt_nil_check(l_BT_1852))).f_ARGS)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("records of different types are compared (3.9.4.1)", 49));
}
}
if (r_HAS_ABS_PART(l_AT_1851))
{
S_R9(&l_R_1853, r_COMPONENT_EQUAL(l_AT_1851, (p_A).f_C, (p_B).f_C, ((*(R17 *)rt_nil_check(p_E))).f_LINE), 0);
}
else
{
S_R9(&l_R_1853, r_EQUAL_CODE(l_AT_1851, (p_A).f_C, (p_B).f_C), 0);
}
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R9(&l_R_1853, r_FMT1(rt_str("(!@)", 4), l_R_1853), 0);
}
{ R28 rv1854 = r_MKET(l_R_1853, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1854; }
rt_raise(RT_X_INIT);
}
static R28 r_FIXED_ARITH(R17 * p_E, R9 p_OP, R28 p_A, R28 p_B) { RT_B_TICK(); 
rt_int l_S1_1855; memset(&l_S1_1855, 0, sizeof l_S1_1855);
l_S1_1855 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1856; memset(&l_S2_1856, 0, sizeof l_S2_1856);
l_S2_1856 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1857; memset(&l_S_1857, 0, sizeof l_S_1857);
l_S_1857 = r_MAX_INT(l_S1_1855, l_S2_1856);
R9 l_FN_1858; memset(&l_FN_1858, 0, sizeof l_FN_1858);
S_R9(&l_FN_1858, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R9(&l_FN_1858, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R28 rv1859 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1858, r_RESCALE_C((p_A).f_C, l_S1_1855, l_S_1857), r_RESCALE_C((p_B).f_C, l_S2_1856, l_S_1857)), r_INT_TYPE(l_S_1857));
return rv1859; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R28 rv1860 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1855, l_S2_1856)));
return rv1860; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R28 rv1861 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1855, l_S2_1856)));
return rv1861; }
}
{ R28 rv1862 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1855, l_S2_1856)));
return rv1862; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R28 rv1863 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1855));
return rv1863; }
}
{ R28 rv1864 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1855));
return rv1864; }
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
static R28 r_SCALED_OPERATOR(R17 * p_E, R9 p_OP, R28 p_A, R28 p_B) { RT_B_TICK(); 
rt_int l_S1_1865; memset(&l_S1_1865, 0, sizeof l_S1_1865);
l_S1_1865 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1866; memset(&l_S2_1866, 0, sizeof l_S2_1866);
l_S2_1866 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R9 l_RND_1867; memset(&l_RND_1867, 0, sizeof l_RND_1867);
S_R9(&l_RND_1867, r_MK(rt_str("0", 1)), 0);
if ((((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_B).f_T)))).f_KIND == g_T_FLOAT)))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no machine-dependent float operator ", 36), p_OP);
}
if ((r_IS_D((p_A).f_T) || r_IS_D((p_B).f_T)))
{
{ R28 rv1868 = r_MKET(r_FMT3(rt_str("rt_b_dmd('@', @, @)", 19), p_OP, r_AS_D(p_A), r_AS_D(p_B)), r_BITS_TYPE(((rt_int)128LL)));
return rv1868; }
}
else if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
{ R28 rv1869 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1869; }
}
{ R28 rv1870 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1870; }
}
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R9(&l_RND_1867, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("//", 2))))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the machine-dependent fixed point operators are !+! !-! !*! !//! (3.2.4.5), not ", 80), p_OP);
}
{ R28 rv1871 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(rt_mul(((rt_int)2LL), ((*(R7 *)rt_nil_check(g_W))).f_WORD)));
return rv1871; }
}
{
R25 l_SM_1872; memset(&l_SM_1872, 0, sizeof l_SM_1872);
S_R25(&l_SM_1872, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1873; memset(&l_S_1873, 0, sizeof l_S_1873);
l_S_1873 = (l_SM_1872).f_V;
rt_int l_SR_1874; memset(&l_SR_1874, 0, sizeof l_SR_1874);
l_SR_1874 = r_MAX_INT(l_S1_1865, l_S2_1866);
if ((!(l_SM_1872).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R28 rv1875 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1873, l_S1_1865), l_S2_1866)), l_RND_1867), r_INT_TYPE(l_S_1873));
return rv1875; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R28 rv1876 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1873, l_S1_1865), l_S2_1866)), l_RND_1867), r_INT_TYPE(l_S_1873));
return rv1876; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R28 rv1877 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1865), r_NUM(l_S_1873), l_RND_1867), r_INT_TYPE(l_S_1873));
return rv1877; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R9 l_SUB_1878; memset(&l_SUB_1878, 0, sizeof l_SUB_1878);
S_R9(&l_SUB_1878, r_MK(rt_str("0", 1)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R9(&l_SUB_1878, r_MK(rt_str("1", 1)), 0);
}
{ R28 rv1879 = r_MKET(r_CAT(r_FMT4(rt_str("rt_b_addsc(@, @, @, @, ", 23), (p_A).f_C, r_NUM(l_S1_1865), (p_B).f_C, r_NUM(l_S2_1866)), r_FMT3(rt_str("@, @, @)", 8), r_NUM(l_S_1873), l_SUB_1878, l_RND_1867)), r_INT_TYPE(l_S_1873));
return rv1879; }
}
}
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R28 r_IN_EXPR(R17 * p_E) { RT_B_TICK(); 
R28 l_V_1880; memset(&l_V_1880, 0, sizeof l_V_1880);
S_R28(&l_V_1880, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1881; memset(&l_T_1881, 0, sizeof l_T_1881);
l_T_1881 = r_REAL_TYPE((l_V_1880).f_T);
R17 * l_R_1882; memset(&l_R_1882, 0, sizeof l_R_1882);
l_R_1882 = ((*(R17 *)rt_nil_check(p_E))).f_B;
R9 l_TMP_1883; memset(&l_TMP_1883, 0, sizeof l_TMP_1883);
S_R9(&l_TMP_1883, r_NEW_NAME(rt_str("iv", 2)), 0);
R28 l_LO_1884; memset(&l_LO_1884, 0, sizeof l_LO_1884);
R28 l_HI_1885; memset(&l_HI_1885, 0, sizeof l_HI_1885);
R9 l_LOC_1886; memset(&l_LOC_1886, 0, sizeof l_LOC_1886);
R9 l_HIC_1887; memset(&l_HIC_1887, 0, sizeof l_HIC_1887);
R9 l_LO_OP_1888; memset(&l_LO_OP_1888, 0, sizeof l_LO_OP_1888);
S_R9(&l_LO_OP_1888, r_MK(rt_str("<=", 2)), 0);
R9 l_HI_OP_1889; memset(&l_HI_OP_1889, 0, sizeof l_HI_OP_1889);
S_R9(&l_HI_OP_1889, r_MK(rt_str("<=", 2)), 0);
S_R28(&l_LO_1884, r_EXPR(((*(R17 *)rt_nil_check(l_R_1882))).f_A, l_T_1881), 0);
S_R28(&l_HI_1885, r_EXPR(((*(R17 *)rt_nil_check(l_R_1882))).f_B, l_T_1881), 0);
if (r_IS_UNORDERED(l_T_1881))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1881))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1881))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1881))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_1884).f_T), l_T_1881)) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_1885).f_T), l_T_1881))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if (((((*(R17 *)rt_nil_check(l_R_1882))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_R_1882))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LO_OP_1888, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R17 *)rt_nil_check(l_R_1882))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HI_OP_1889, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R22 *)rt_nil_check(l_T_1881))).f_KIND == g_T_INT))
{
{
R28 l_X_1890; memset(&l_X_1890, 0, sizeof l_X_1890);
S_R28(&l_X_1890, r_MKET(l_TMP_1883, (l_V_1880).f_T), 0);
S_R9(&l_LOC_1886, r_FIXED_COMPARE(l_LO_1884, l_X_1890, l_LO_OP_1888), 0);
S_R9(&l_HIC_1887, r_FIXED_COMPARE(l_X_1890, l_HI_1885, l_HI_OP_1889), 0);
}
}
else if ((((*(R22 *)rt_nil_check(l_T_1881))).f_KIND == g_T_FLOAT))
{
S_R9(&l_LOC_1886, r_FLOAT_COMPARE(l_LO_1884, r_MKET(l_TMP_1883, (l_V_1880).f_T), l_LO_OP_1888), 0);
S_R9(&l_HIC_1887, r_FLOAT_COMPARE(r_MKET(l_TMP_1883, (l_V_1880).f_T), l_HI_1885, l_HI_OP_1889), 0);
}
else
{
S_R9(&l_LOC_1886, r_FMT3(rt_str("(@ @ @)", 7), (l_LO_1884).f_C, l_LO_OP_1888, l_TMP_1883), 0);
S_R9(&l_HIC_1887, r_FMT3(rt_str("(@ @ @)", 7), l_TMP_1883, l_HI_OP_1889, (l_HI_1885).f_C), 0);
}
{ R28 rv1891 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; @ && ", 17), r_CTYPE(l_T_1881), l_TMP_1883, (l_V_1880).f_C, l_LOC_1886), r_FMT1(rt_str("@; })", 5), l_HIC_1887)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1891; }
rt_raise(RT_X_INIT);
}
static R9 r_CONVERT_TO_SCALE(R28 p_V, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R9 rv1892 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1892; }
}
{ R9 rv1893 = (p_V).f_C;
return rv1893; }
rt_raise(RT_X_INIT);
}
static R28 r_INT_ET(rt_int p_V) { RT_B_TICK(); 
{ R28 rv1894 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1894; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { RT_B_TICK(); 
rt_int l_B_1895; memset(&l_B_1895, 0, sizeof l_B_1895);
l_B_1895 = ((rt_int)0LL);
rt_int l_P_1896; memset(&l_P_1896, 0, sizeof l_P_1896);
l_P_1896 = ((rt_int)1LL);
for (;;) {
if ((l_P_1896 >= p_N)) goto L_end1897;
{
l_B_1895 = rt_add(l_B_1895, ((rt_int)1LL));
l_P_1896 = rt_mul(l_P_1896, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1897: ;
{ rt_int rv1898 = l_B_1895;
return rv1898; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R25 l_M_1899; memset(&l_M_1899, 0, sizeof l_M_1899);
S_R25(&l_M_1899, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1899).f_OK)
{
{ rt_int rv1900 = (l_M_1899).f_V;
return rv1900; }
}
}
}
}
{ rt_int rv1901 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1901; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKING_OF(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1902; memset(&l_K_1902, 0, sizeof l_K_1902);
l_K_1902 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
rt_int l_MODE_1903; memset(&l_MODE_1903, 0, sizeof l_MODE_1903);
l_MODE_1903 = ((rt_int)2LL);
if ((l_K_1902 == g_T_STR))
{
l_MODE_1903 = ((rt_int)1LL);
}
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_KIND == g_N_REP) && (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL))))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_KIND == g_N_ENUMLIT)))
{
{
rt_int l_P_1904; memset(&l_P_1904, 0, sizeof l_P_1904);
l_P_1904 = r_PACKING_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_NAME);
if ((l_P_1904 >= ((rt_int)0LL)))
{
l_MODE_1903 = l_P_1904;
}
}
}
}
}
{ rt_int rv1905 = l_MODE_1903;
return rv1905; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKING_VALUE(R9 p_NAME) { RT_B_TICK(); 
if (r_TEQS(p_NAME, rt_str("DENSE", 5)))
{
{ rt_int rv1906 = ((rt_int)0LL);
return rv1906; }
}
else if (r_TEQS(p_NAME, rt_str("PACKED", 6)))
{
{ rt_int rv1907 = ((rt_int)1LL);
return rv1907; }
}
else if (r_TEQS(p_NAME, rt_str("UNPACKED", 8)))
{
{ rt_int rv1908 = ((rt_int)2LL);
return rv1908; }
}
{ rt_int rv1909 = rt_neg(((rt_int)1LL));
return rv1909; }
rt_raise(RT_X_INIT);
}
static R28 r_PACKING_LITERAL(rt_int p_MODE, rt_int p_LINE) { RT_B_TICK(); 
if ((p_MODE == ((rt_int)0LL)))
{
{ R28 rv1910 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("DENSE", 5), p_LINE), NULL);
return rv1910; }
}
else if ((p_MODE == ((rt_int)1LL)))
{
{ R28 rv1911 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1911; }
}
{ R28 rv1912 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1912; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACK_SLOT(rt_int p_ES, rt_int p_MODE) { RT_B_TICK(); 
rt_int l_U_1913; memset(&l_U_1913, 0, sizeof l_U_1913);
l_U_1913 = ((rt_int)8LL);
if ((p_ES <= ((rt_int)0LL)))
{
if ((p_MODE == ((rt_int)0LL)))
{
{ rt_int rv1914 = ((rt_int)0LL);
return rv1914; }
}
{ rt_int rv1915 = ((rt_int)8LL);
return rv1915; }
}
if ((p_MODE == ((rt_int)0LL)))
{
{ rt_int rv1916 = p_ES;
return rv1916; }
}
if (((p_MODE == ((rt_int)1LL)) && (p_ES <= ((*(R7 *)rt_nil_check(g_W))).f_WORD)))
{
for (;;) {
if ((l_U_1913 >= p_ES)) goto L_end1917;
{
l_U_1913 = rt_mul(l_U_1913, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1917: ;
{ rt_int rv1918 = l_U_1913;
return rv1918; }
}
{ rt_int rv1919 = rt_mul((rt_quot((rt_sub(rt_add(p_ES, ((*(R7 *)rt_nil_check(g_W))).f_WORD), ((rt_int)1LL))), ((*(R7 *)rt_nil_check(g_W))).f_WORD)), ((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1919; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_MIN_C(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1920 = r_MK(rt_str("INT64_MIN", 9));
return rv1920; }
}
{ R9 rv1921 = r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(rt_neg(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))))));
return rv1921; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_MAX_C(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1922 = r_MK(rt_str("INT64_MAX", 9));
return rv1922; }
}
{ R9 rv1923 = r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(rt_sub(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))), ((rt_int)1LL))));
return rv1923; }
rt_raise(RT_X_INIT);
}
static rt_int r_STD_MIN(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ rt_int rv1924 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
return rv1924; }
}
{ rt_int rv1925 = rt_neg(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))));
return rv1925; }
rt_raise(RT_X_INIT);
}
static rt_int r_STD_MAX(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ rt_int rv1926 = INT64_MAX;
return rv1926; }
}
{ rt_int rv1927 = rt_sub(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))), ((rt_int)1LL));
return rv1927; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_CHECK(R9 p_C) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1928 = p_C;
return rv1928; }
}
{ R9 rv1929 = r_FMT1(rt_str("rt_b_std(@)", 11), p_C);
return rv1929; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACK_SIZE(rt_int p_N, rt_int p_ES, rt_int p_MODE) { RT_B_TICK(); 
if ((p_N <= ((rt_int)0LL)))
{
{ rt_int rv1930 = ((rt_int)0LL);
return rv1930; }
}
{ rt_int rv1931 = rt_mul(p_N, r_PACK_SLOT(p_ES, p_MODE));
return rv1931; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHAR_SIZE(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv1932 = r_ENUM_SIZE(r_CHARSET_OF(p_T));
return rv1932; }
rt_raise(RT_X_INIT);
}
static R9 r_CHAR_REPS(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_1933; memset(&l_C_1933, 0, sizeof l_C_1933);
l_C_1933 = r_CHARSET_OF(p_T);
if ((!(((*(R22 *)rt_nil_check(l_C_1933))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_1933))).f_REPS))).f_B == NULL)))
{
{ R9 rv1934 = r_REP_TABLE(l_C_1933);
return rv1934; }
}
}
{ R9 rv1935 = r_FMT1(rt_str("NULL, @", 7), r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_1933))).f_BASE))).f_NLITS));
return rv1935; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_LENGTH(void) { RT_B_TICK(); 
{ rt_int rv1936 = ((rt_int)100000000LL);
return rv1936; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_FLOAT_PRECISION(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
{ rt_int rv1937 = ((rt_int)16LL);
return rv1937; }
}
{ rt_int rv1938 = ((rt_int)15LL);
return rv1938; }
rt_raise(RT_X_INIT);
}
static rt_int r_IMP_PRECISION_OF(rt_int p_P) { RT_B_TICK(); 
if ((p_P <= ((rt_int)7LL)))
{
{ rt_int rv1939 = ((rt_int)7LL);
return rv1939; }
}
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
{ rt_int rv1940 = ((rt_int)16LL);
return rv1940; }
}
{ rt_int rv1941 = ((rt_int)15LL);
return rv1941; }
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_FORMAT(rt_int p_P, R9 p_NAME) { RT_B_TICK(); 
rt_int l_SINGLE_1942; memset(&l_SINGLE_1942, 0, sizeof l_SINGLE_1942);
l_SINGLE_1942 = (r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL));
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
{ rt_int rv1943 = rt_neg(((rt_int)127LL));
return rv1943; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
{ rt_int rv1944 = ((rt_int)127LL);
return rv1944; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
{ rt_int rv1945 = ((rt_int)8LL);
return rv1945; }
}
else if ((r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)) && (!l_SINGLE_1942)))
{
{ rt_int rv1946 = ((rt_int)57LL);
return rv1946; }
}
}
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
if (l_SINGLE_1942)
{
{ rt_int rv1947 = rt_neg(((rt_int)125LL));
return rv1947; }
}
{ rt_int rv1948 = rt_neg(((rt_int)1021LL));
return rv1948; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
if (l_SINGLE_1942)
{
{ rt_int rv1949 = ((rt_int)128LL);
return rv1949; }
}
{ rt_int rv1950 = ((rt_int)1024LL);
return rv1950; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
if (l_SINGLE_1942)
{
{ rt_int rv1951 = ((rt_int)25LL);
return rv1951; }
}
{ rt_int rv1952 = ((rt_int)54LL);
return rv1952; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
if (l_SINGLE_1942)
{
{ rt_int rv1953 = ((rt_int)8LL);
return rv1953; }
}
{ rt_int rv1954 = ((rt_int)11LL);
return rv1954; }
}
else if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
if (l_SINGLE_1942)
{
{ rt_int rv1955 = ((rt_int)32LL);
return rv1955; }
}
{ rt_int rv1956 = ((rt_int)64LL);
return rv1956; }
}
{ rt_int rv1957 = ((rt_int)0LL);
return rv1957; }
rt_raise(RT_X_INIT);
}
static R25 r_STATIC_SIZE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1958; memset(&l_K_1958, 0, sizeof l_K_1958);
l_K_1958 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1958 == g_T_ABS))
{
{ R25 rv1959 = r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1959; }
}
else if ((l_K_1958 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R25 rv1960 = r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A);
return rv1960; }
}
}
{ R25 rv1961 = r_SOME(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1961; }
}
else if ((l_K_1958 == g_T_FLOAT))
{
{ R25 rv1962 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv1962; }
}
else if ((l_K_1958 == g_T_BOOL))
{
{ R25 rv1963 = r_SOME(((rt_int)1LL));
return rv1963; }
}
else if ((l_K_1958 == g_T_ENUM))
{
{ R25 rv1964 = r_SOME(r_ENUM_SIZE(p_T));
return rv1964; }
}
else if ((l_K_1958 == g_T_BITS))
{
{ R25 rv1965 = ((*(R22 *)rt_nil_check(p_T))).f_MLEN;
return rv1965; }
}
else if ((l_K_1958 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R25 rv1966 = r_SOME(r_PACK_SIZE((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_V, r_CHAR_SIZE(p_T), r_PACKING_OF(p_T)));
return rv1966; }
}
}
else if (((l_K_1958 == g_T_PTR) || (l_K_1958 == g_T_SEM)))
{
{ R25 rv1967 = r_SOME(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1967; }
}
else if ((l_K_1958 == g_T_ARR))
{
{
R25 l_ES_1968; memset(&l_ES_1968, 0, sizeof l_ES_1968);
S_R25(&l_ES_1968, r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM), 0);
rt_int l_N_1969; memset(&l_N_1969, 0, sizeof l_N_1969);
l_N_1969 = ((rt_int)1LL);
R27 * l_B_1970; memset(&l_B_1970, 0, sizeof l_B_1970);
l_B_1970 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
if ((!(l_ES_1968).f_OK))
{
{ R25 rv1971 = r_NO_MVAL();
return rv1971; }
}
for (;;) {
if ((l_B_1970 == NULL)) goto L_end1972;
{
if ((((!(((((*(R27 *)rt_nil_check(l_B_1970))).f_MLO).f_OK && (((*(R27 *)rt_nil_check(l_B_1970))).f_MHI).f_OK))) || r_IS_GEN_TEXT(((*(R27 *)rt_nil_check(l_B_1970))).f_LO)) || r_IS_GEN_TEXT(((*(R27 *)rt_nil_check(l_B_1970))).f_HI)))
{
{ R25 rv1973 = r_NO_MVAL();
return rv1973; }
}
l_N_1969 = rt_mul(l_N_1969, r_MAX_INT(rt_add(rt_sub((((*(R27 *)rt_nil_check(l_B_1970))).f_MHI).f_V, (((*(R27 *)rt_nil_check(l_B_1970))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
l_B_1970 = ((*(R27 *)rt_nil_check(l_B_1970))).f_NEXT;
}
RT_B_TICK();
} L_end1972: ;
{ R25 rv1974 = r_SOME(r_PACK_SIZE(l_N_1969, (l_ES_1968).f_V, r_PACKING_OF(p_T)));
return rv1974; }
}
}
{ R25 rv1975 = r_NO_MVAL();
return rv1975; }
rt_raise(RT_X_INIT);
}
static R28 r_ATTRIBUTE(R28 p_B, R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1976; memset(&l_T_1976, 0, sizeof l_T_1976);
l_T_1976 = (p_B).f_T;
rt_int l_K_1977; memset(&l_K_1977, 0, sizeof l_K_1977);
l_K_1977 = ((*(R22 *)rt_nil_check(l_T_1976))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R28 rv1978 = r_SIZE_OF(l_T_1976, (p_B).f_C);
return rv1978; }
}
if ((l_K_1977 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R28 rv1979 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1976))).f_SCALE);
return rv1979; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R28 rv1980 = r_INT_ET(((rt_int)2LL));
return rv1980; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R28 rv1981 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv1981; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
if ((!(((*(R22 *)rt_nil_check(l_T_1976))).f_REPS == NULL)))
{
if ((r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1976))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1976))).f_REPS))).f_A == NULL))))
{
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1976))).f_REPS))).f_A))).f_NEXT == NULL)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1976))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8)))
{
{ R28 rv1982 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNSIGNED", 8), p_LINE), NULL);
return rv1982; }
}
}
}
}
{ R28 rv1983 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv1983; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1976))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R28 rv1984 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1976))).f_LO_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1976))).f_SCALE));
return rv1984; }
}
{ R28 rv1985 = r_MKET(r_STD_MIN_C(), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1976))).f_SCALE));
return rv1985; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1976))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R28 rv1986 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1976))).f_HI_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1976))).f_SCALE));
return rv1986; }
}
{ R28 rv1987 = r_MKET(r_STD_MAX_C(), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1976))).f_SCALE));
return rv1987; }
}
}
else if ((l_K_1977 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R28 rv1988 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1976))).f_SCALE);
return rv1988; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R28 rv1989 = r_INT_ET(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1976))).f_SCALE));
return rv1989; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R28 rv1990 = r_INT_ET(((rt_int)2LL));
return rv1990; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R28 rv1991 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1976))).f_SCALE, p_NAME));
return rv1991; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) || r_TEQS(p_NAME, rt_str("MAX", 3))))
{
{
R22 * l_MT_1992; memset(&l_MT_1992, 0, sizeof l_MT_1992);
l_MT_1992 = r_FLOAT_TYPE(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1976))).f_SCALE));
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1976))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R28 rv1993 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1976))).f_LO_C, (p_B).f_SELF), l_MT_1992);
return rv1993; }
}
{ R28 rv1994 = r_MKET(r_FLOAT_LIMIT(l_MT_1992, p_NAME), l_MT_1992);
return rv1994; }
}
if (((((*(R22 *)rt_nil_check(l_T_1976))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R28 rv1995 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1976))).f_HI_C, (p_B).f_SELF), l_MT_1992);
return rv1995; }
}
{ R28 rv1996 = r_MKET(r_FLOAT_LIMIT(l_MT_1992, p_NAME), l_MT_1992);
return rv1996; }
}
}
}
else if ((l_K_1977 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1976))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R28 rv1997 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1976))).f_LO_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1976))).f_BASE);
return rv1997; }
}
{ R28 rv1998 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_1976))).f_BASE);
return rv1998; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1976))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R28 rv1999 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_1976))).f_HI_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_1976))).f_BASE);
return rv1999; }
}
{ R28 rv2000 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1976))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_1976))).f_BASE);
return rv2000; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1976))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R28 rv2001 = r_MKET(r_SUBST_SELF(r_FMT4(rt_str("((@) >= (@) \? (@) - (@) + 1 : 0)", 32), ((*(R22 *)rt_nil_check(l_T_1976))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1976))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_1976))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_1976))).f_LO_C), (p_B).f_SELF), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2001; }
}
{ R28 rv2002 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1976))).f_BASE))).f_NLITS);
return rv2002; }
}
}
else if (((l_K_1977 == g_T_STR) || (l_K_1977 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R28 rv2003 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2003; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R28 rv2004 = r_PACKING_LITERAL(r_PACKING_OF(l_T_1976), p_LINE);
return rv2004; }
}
}
else if ((l_K_1977 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R28 rv2005 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_1976))).f_DIMS);
return rv2005; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) || r_TEQS(p_NAME, rt_str("BOUNDS", 6))))
{
{ R28 rv2006 = r_ARRAY_SHAPE(p_B, p_NAME);
return rv2006; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R28 rv2007 = r_PACKING_LITERAL(r_PACKING_OF(l_T_1976), p_LINE);
return rv2007; }
}
}
else if ((l_K_1977 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_1976))).f_SCALE == ((rt_int)1LL)))
{
{ R28 rv2008 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv2008; }
}
{ R28 rv2009 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv2009; }
}
}
else if (((l_K_1977 == g_T_ABS) || (l_K_1977 == g_T_REC)))
{
{
R22 * l_U_2010; memset(&l_U_2010, 0, sizeof l_U_2010);
l_U_2010 = l_T_1976;
if ((l_K_1977 == g_T_ABS))
{
l_U_2010 = ((*(R22 *)rt_nil_check(l_T_1976))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_2010))).f_KIND == g_T_REC))
{
{
R26 * l_F_2011; memset(&l_F_2011, 0, sizeof l_F_2011);
l_F_2011 = r_FIND_FIELD(l_U_2010, p_NAME);
if ((!(l_F_2011 == NULL)))
{
if ((!(((*(R26 *)rt_nil_check(l_F_2011))).f_KIND == ((rt_int)0LL))))
{
{ R28 rv2012 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R26 *)rt_nil_check(l_F_2011))).f_CNAME), ((*(R26 *)rt_nil_check(l_F_2011))).f_T);
return rv2012; }
}
}
}
}
}
}
r_FAILT(p_LINE, rt_str("no such field or attribute: ", 28), p_NAME);
rt_raise(RT_X_INIT);
}
static R28 r_ARRAY_SHAPE(R28 p_B, R9 p_NAME) { RT_B_TICK(); 
R22 * l_T_2013; memset(&l_T_2013, 0, sizeof l_T_2013);
l_T_2013 = r_REAL_TYPE((p_B).f_T);
R9 l_D_2014; memset(&l_D_2014, 0, sizeof l_D_2014);
S_R9(&l_D_2014, r_NUM(((*(R22 *)rt_nil_check(l_T_2013))).f_DIMS), 0);
R9 l_X_2015; memset(&l_X_2015, 0, sizeof l_X_2015);
S_R9(&l_X_2015, r_NEW_NAME(rt_str("sx", 2)), 0);
R9 l_R_2016; memset(&l_R_2016, 0, sizeof l_R_2016);
S_R9(&l_R_2016, r_NEW_NAME(rt_str("sr", 2)), 0);
R22 * l_ELEM_2017; memset(&l_ELEM_2017, 0, sizeof l_ELEM_2017);
l_ELEM_2017 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
R9 l_C_2018; memset(&l_C_2018, 0, sizeof l_C_2018);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
{
R17 * l_TS_2019; memset(&l_TS_2019, 0, sizeof l_TS_2019);
l_TS_2019 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_TS_2019))).f_NAME, r_MKN(rt_str("BOUNDS_DEF", 10)), 0);
((*(R17 *)rt_nil_check(l_TS_2019))).f_A = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_TS_2019))).f_A))).f_NAME, r_MKN(rt_str("STD", 3)), 0);
l_ELEM_2017 = r_RESOLVE(l_TS_2019);
}
}
{
R22 * l_A_2020; memset(&l_A_2020, 0, sizeof l_A_2020);
l_A_2020 = r_ARRAY_OF(l_ELEM_2017, ((rt_int)1LL));
S_R9(&l_C_2018, r_FMT4(rt_str("({ @ @ = @; @ ", 14), r_CTYPE(l_T_2013), l_X_2015, (p_B).f_C, ((*(R22 *)rt_nil_check(l_A_2020))).f_CNAME), 0);
S_R9(&l_C_2018, r_FMT4(rt_str("@@; memset(&@, 0, sizeof @);", 28), l_C_2018, l_R_2016, l_R_2016, l_R_2016), 0);
S_R9(&l_C_2018, r_FMT4(rt_str("@ @.lo[0] = 0; @.hi[0] = @ - 1;", 31), l_C_2018, l_R_2016, l_R_2016, l_D_2014), 0);
S_R9(&l_C_2018, r_FMT4(rt_str("@ @.p = rt_alloc(@ * sizeof *@.p);", 34), l_C_2018, l_R_2016, l_D_2014, l_R_2016), 0);
S_R9(&l_C_2018, r_FMT2(rt_str("@ for (int i = 0; i < @; i++) {", 31), l_C_2018, l_D_2014), 0);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
S_R9(&l_C_2018, r_FMT2(rt_str("@ @", 3), l_C_2018, r_INIT_CODE(l_ELEM_2017, r_FMT1(rt_str("@.p[i]", 6), l_R_2016))), 0);
S_R9(&l_C_2018, r_FMT4(rt_str("@ @.p[i].f_MIN = @.lo[i]; @.p[i].f_MAX = ", 41), l_C_2018, l_R_2016, l_X_2015, l_R_2016), 0);
S_R9(&l_C_2018, r_FMT2(rt_str("@@.hi[i]; }", 11), l_C_2018, l_X_2015), 0);
}
else
{
S_R9(&l_C_2018, r_FMT4(rt_str("@ @.p[i] = @.hi[i] >= @.lo[i] \? ", 32), l_C_2018, l_R_2016, l_X_2015, l_X_2015), 0);
S_R9(&l_C_2018, r_FMT4(rt_str("@@.hi[i] - @.lo[i] + 1 : 0; }", 29), l_C_2018, l_X_2015, l_X_2015, l_X_2015), 0);
}
{ R28 rv2021 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_C_2018, l_R_2016), l_A_2020);
return rv2021; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_LIT_NODE_T(R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
{ R17 * rv2022 = r_LIT_NODE(r_STR(p_NAME, (p_NAME).f_LEN), p_LINE);
return rv2022; }
rt_raise(RT_X_INIT);
}
static R17 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_N_2023; memset(&l_N_2023, 0, sizeof l_N_2023);
l_N_2023 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_2023))).f_NAME, r_MKN(p_NAME), 0);
{ R17 * rv2024 = l_N_2023;
return rv2024; }
rt_raise(RT_X_INIT);
}
static R28 r_SIZE_OF(R22 * p_T, R9 p_C) { RT_B_TICK(); 
rt_int l_K_2025; memset(&l_K_2025, 0, sizeof l_K_2025);
l_K_2025 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_2025 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R28 rv2026 = r_MKET((r_EXPR(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2026; }
}
}
{ R28 rv2027 = r_INT_ET(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv2027; }
}
else if ((l_K_2025 == g_T_FLOAT))
{
{ R28 rv2028 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv2028; }
}
else if ((l_K_2025 == g_T_BOOL))
{
{ R28 rv2029 = r_INT_ET(((rt_int)1LL));
return rv2029; }
}
else if ((l_K_2025 == g_T_ENUM))
{
{ R28 rv2030 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv2030; }
}
else if ((l_K_2025 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R28 rv2031 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2031; }
}
{ R28 rv2032 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2032; }
}
else if ((l_K_2025 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R28 rv2033 = r_INT_ET((r_STATIC_SIZE(p_T)).f_V);
return rv2033; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R28 rv2034 = r_MKET(r_FMT3(rt_str("rt_b_pack_size(@, @, @)", 23), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C, r_NUM(r_CHAR_SIZE(p_T)), r_NUM(r_PACKING_OF(p_T))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2034; }
}
{ R28 rv2035 = r_MKET(r_FMT3(rt_str("rt_b_pack_size((@).len, @, @)", 29), p_C, r_NUM(r_CHAR_SIZE(p_T)), r_NUM(r_PACKING_OF(p_T))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2035; }
}
else if (((l_K_2025 == g_T_PTR) || (l_K_2025 == g_T_SEM)))
{
{ R28 rv2036 = r_INT_ET(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv2036; }
}
else if ((l_K_2025 == g_T_ABS))
{
{ R28 rv2037 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv2037; }
}
else if ((l_K_2025 == g_T_REC))
{
{ R28 rv2038 = r_MKET(r_RECORD_SIZE(p_T, p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2038; }
}
else if ((l_K_2025 == g_T_ARR))
{
{
R25 l_ES_2039; memset(&l_ES_2039, 0, sizeof l_ES_2039);
S_R25(&l_ES_2039, r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM), 0);
if ((l_ES_2039).f_OK)
{
{ R28 rv2040 = r_MKET(r_CAT(r_FMT3(rt_str("rt_b_pack_size(rt_b_extent(@, (@).lo, (@).hi), ", 47), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C), r_FMT2(rt_str("@, @)", 5), r_NUM((l_ES_2039).f_V), r_NUM(r_PACKING_OF(p_T)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2040; }
}
}
{
R9 l_A_2041; memset(&l_A_2041, 0, sizeof l_A_2041);
S_R9(&l_A_2041, r_NEW_NAME(rt_str("sa", 2)), 0);
R28 l_ES_2042; memset(&l_ES_2042, 0, sizeof l_ES_2042);
S_R28(&l_ES_2042, r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT1(rt_str("@.p[0]", 6), l_A_2041)), 0);
{ R28 rv2043 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; rt_int n_ = rt_b_extent(@, ", 39), r_CTYPE(p_T), l_A_2041, p_C, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS)), r_CAT(r_FMT3(rt_str("@.lo, @.hi); rt_b_pack_size(n_, n_ \? @ : 0, ", 44), l_A_2041, l_A_2041, (l_ES_2042).f_C), r_FMT1(rt_str("@); })", 6), r_NUM(r_PACKING_OF(p_T))))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2043; }
}
}
{ R28 rv2044 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2044; }
rt_raise(RT_X_INIT);
}
static R28 r_TYPE_ATTRIBUTE(R9 p_TNAME, R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{ R28 rv2045 = r_ATTRIBUTE(r_TYPE_VALUE(p_TNAME, p_LINE), p_NAME, p_LINE);
return rv2045; }
rt_raise(RT_X_INIT);
}
static R28 r_TYPE_VALUE(R9 p_TNAME, rt_int p_LINE) { RT_B_TICK(); 
{ R28 rv2046 = r_TYPE_VALUE_OF(r_RESOLVE_USER_NAME(p_TNAME, p_LINE));
return rv2046; }
rt_raise(RT_X_INIT);
}
static R28 r_TYPE_VALUE_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_2047; memset(&l_RT_2047, 0, sizeof l_RT_2047);
l_RT_2047 = r_REAL_TYPE(p_T);
if (((((*(R22 *)rt_nil_check(l_RT_2047))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(l_RT_2047))).f_KIND == g_T_REC)))
{
{
R9 l_TMP_2048; memset(&l_TMP_2048, 0, sizeof l_TMP_2048);
S_R9(&l_TMP_2048, r_NEW_NAME(rt_str("tq", 2)), 0);
R9 l_C_2049; memset(&l_C_2049, 0, sizeof l_C_2049);
S_R9(&l_C_2049, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), r_CTYPE(p_T), l_TMP_2048, l_TMP_2048, l_TMP_2048), 0);
S_R9(&l_C_2049, r_FMT3(rt_str("@@ @; })", 8), l_C_2049, r_INIT_CODE(l_RT_2047, l_TMP_2048), l_TMP_2048), 0);
{ R28 rv2050 = r_MKET(l_C_2049, p_T);
return rv2050; }
}
}
{ R28 rv2051 = r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(p_T)), p_T);
return rv2051; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_NAME(R17 * p_E) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{ rt_int rv2052 = 0;
return rv2052; }
}
{
R12 * l_Y_2053; memset(&l_Y_2053, 0, sizeof l_Y_2053);
l_Y_2053 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_2053 == NULL))
{
{ rt_int rv2054 = 0;
return rv2054; }
}
{ rt_int rv2055 = (((*(R12 *)rt_nil_check(l_Y_2053))).f_KIND == g_Y_TYPE);
return rv2055; }
}
rt_raise(RT_X_INIT);
}
static R28 r_ATTRIBUTE_OF_ATTRIBUTE(R9 p_TNAME, R9 p_A, R9 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R28 rv2056 = r_INT_ET(((rt_int)100000000LL));
return rv2056; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R28 rv2057 = r_INT_ET(((rt_int)15LL));
return rv2057; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R28 rv2058 = r_INT_ET(((rt_int)0LL));
return rv2058; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R28 r_RECORD_CONSTRUCTOR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R22 * l_T_2059; memset(&l_T_2059, 0, sizeof l_T_2059);
l_T_2059 = p_WANT;
if ((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_2059 = r_RESOLVE(((*(R17 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_2059 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_2059 = r_REAL_TYPE(l_T_2059);
if ((!(((*(R22 *)rt_nil_check(l_T_2059))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_2059))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R9 l_TMP_2060; memset(&l_TMP_2060, 0, sizeof l_TMP_2060);
S_R9(&l_TMP_2060, r_NEW_NAME(rt_str("rc", 2)), 0);
R9 l_R_2061; memset(&l_R_2061, 0, sizeof l_R_2061);
S_R9(&l_R_2061, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_2059))).f_CNAME, l_TMP_2060, l_TMP_2060, l_TMP_2060), 0);
R26 * l_F_2062; memset(&l_F_2062, 0, sizeof l_F_2062);
l_F_2062 = ((*(R22 *)rt_nil_check(l_T_2059))).f_FIELDS;
S_R9(&l_R_2061, r_FMT2(rt_str("@@", 2), l_R_2061, r_INIT_CODE(l_T_2059, l_TMP_2060)), 0);
for (;;) {
if ((l_F_2062 == NULL)) goto L_end2063;
{
if ((((*(R26 *)rt_nil_check(l_F_2062))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R26 *)rt_nil_check(l_F_2062))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R26 *)rt_nil_check(l_F_2062))).f_LABELS, (r_TAG_VALUE(l_T_2059, ((*(R26 *)rt_nil_check(l_F_2062))).f_TAGF)).f_V, ((*(R26 *)rt_nil_check(r_FIND_FIELD(l_T_2059, ((*(R26 *)rt_nil_check(l_F_2062))).f_TAGF)))).f_T)))
{
{
R17 * l_INIT_2064; memset(&l_INIT_2064, 0, sizeof l_INIT_2064);
l_INIT_2064 = r_FIND_INIT(((*(R17 *)rt_nil_check(p_E))).f_A, ((*(R26 *)rt_nil_check(l_F_2062))).f_NAME);
if ((l_INIT_2064 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R26 *)rt_nil_check(l_F_2062))).f_NAME);
}
S_R9(&l_R_2061, r_FMT2(rt_str("@ @", 3), l_R_2061, r_STORE_CODE(((*(R26 *)rt_nil_check(l_F_2062))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_2060, ((*(R26 *)rt_nil_check(l_F_2062))).f_CNAME), r_EXPR(((*(R17 *)rt_nil_check(l_INIT_2064))).f_A, ((*(R26 *)rt_nil_check(l_F_2062))).f_T), ((*(R17 *)rt_nil_check(l_INIT_2064))).f_LINE, l_TMP_2060)), 0);
}
}
}
l_F_2062 = ((*(R26 *)rt_nil_check(l_F_2062))).f_NEXT;
}
RT_B_TICK();
} L_end2063: ;
{
R17 * l_P_2065; memset(&l_P_2065, 0, sizeof l_P_2065);
l_P_2065 = ((*(R17 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_2065 == NULL)) goto L_end2066;
{
{
R26 * l_G_2067; memset(&l_G_2067, 0, sizeof l_G_2067);
l_G_2067 = r_FIND_VFIELD(l_T_2059, ((*(R17 *)rt_nil_check(l_P_2065))).f_NAME);
if ((l_G_2067 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_2065))).f_LINE, rt_str("no such field: ", 15), ((*(R17 *)rt_nil_check(l_P_2065))).f_NAME);
}
if ((!(((*(R26 *)rt_nil_check(l_G_2067))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_2065))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R17 *)rt_nil_check(l_P_2065))).f_NAME);
}
r_CHECK_VARIANT(l_G_2067, l_T_2059, NULL, ((*(R17 *)rt_nil_check(l_P_2065))).f_LINE);
}
l_P_2065 = ((*(R17 *)rt_nil_check(l_P_2065))).f_NEXT;
}
RT_B_TICK();
} L_end2066: ;
}
{ R28 rv2068 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_2061, l_TMP_2060), l_T_2059);
return rv2068; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_FIND_INIT(R17 * p_L, R9 p_NAME) { RT_B_TICK(); 
R17 * l_P_2069; memset(&l_P_2069, 0, sizeof l_P_2069);
l_P_2069 = p_L;
for (;;) {
if ((l_P_2069 == NULL)) goto L_end2070;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_2069))).f_NAME, p_NAME))
{
{ R17 * rv2071 = l_P_2069;
return rv2071; }
}
l_P_2069 = ((*(R17 *)rt_nil_check(l_P_2069))).f_NEXT;
}
RT_B_TICK();
} L_end2070: ;
{ R17 * rv2072 = NULL;
return rv2072; }
rt_raise(RT_X_INIT);
}
static R28 r_ARRAY_CONSTRUCTOR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_DIMS_2073; memset(&l_DIMS_2073, 0, sizeof l_DIMS_2073);
l_DIMS_2073 = ((rt_int)0LL);
R17 * l_P_2074; memset(&l_P_2074, 0, sizeof l_P_2074);
l_P_2074 = p_E;
R22 * l_ELEM_2075; memset(&l_ELEM_2075, 0, sizeof l_ELEM_2075);
l_ELEM_2075 = NULL;
for (;;) {
if ((!(((*(R17 *)rt_nil_check(l_P_2074))).f_KIND == g_N_ARRCONS))) goto L_end2076;
{
l_DIMS_2073 = rt_add(l_DIMS_2073, ((rt_int)1LL));
l_P_2074 = ((*(R17 *)rt_nil_check(l_P_2074))).f_A;
}
RT_B_TICK();
} L_end2076: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_2075 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_2075 == NULL))
{
l_ELEM_2075 = (r_EXPR(l_P_2074, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_2075))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_2075))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_2075 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
r_CHECK_SHAPE(p_E, l_DIMS_2073);
{
R22 * l_A_2077; memset(&l_A_2077, 0, sizeof l_A_2077);
l_A_2077 = r_ARRAY_OF(l_ELEM_2075, l_DIMS_2073);
R9 l_TMP_2078; memset(&l_TMP_2078, 0, sizeof l_TMP_2078);
S_R9(&l_TMP_2078, r_NEW_NAME(rt_str("ac", 2)), 0);
R9 l_R_2079; memset(&l_R_2079, 0, sizeof l_R_2079);
S_R9(&l_R_2079, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_2077))).f_CNAME, l_TMP_2078, l_TMP_2078), 0);
rt_int l_K_2080; memset(&l_K_2080, 0, sizeof l_K_2080);
l_K_2080 = ((rt_int)0LL);
{
R17 * l_Q_2081; memset(&l_Q_2081, 0, sizeof l_Q_2081);
l_Q_2081 = p_E;
R27 * l_TAIL_2082; memset(&l_TAIL_2082, 0, sizeof l_TAIL_2082);
l_TAIL_2082 = NULL;
{ rt_int it2084_lo = ((rt_int)1LL), it2084_hi = l_DIMS_2073;
for (rt_int it2084 = it2084_lo; it2084 <= it2084_hi; it2084++) {
{
{
R27 * l_B_2085; memset(&l_B_2085, 0, sizeof l_B_2085);
l_B_2085 = ({ R27 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
rt_int l_N_2086; memset(&l_N_2086, 0, sizeof l_N_2086);
l_N_2086 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(l_Q_2081))).f_A);
S_R27(&(*(R27 *)rt_nil_check(l_B_2085)), ({ R27 rc2087; memset(&rc2087, 0, sizeof rc2087);  S_R9(&rc2087.f_LO, r_MK(rt_str("0", 1)), 0); S_R9(&rc2087.f_HI, r_NUM(rt_sub(l_N_2086, ((rt_int)1LL))), 0); S_R25(&rc2087.f_MLO, r_SOME(((rt_int)0LL)), 0); S_R25(&rc2087.f_MHI, r_SOME(rt_sub(l_N_2086, ((rt_int)1LL))), 0); rc2087.f_ANYARG = 0; rc2087.f_NEXT = NULL; rc2087; }), 0);
if ((l_TAIL_2082 == NULL))
{
((*(R22 *)rt_nil_check(l_A_2077))).f_BOUNDS = l_B_2085;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_2082))).f_NEXT = l_B_2085;
}
l_TAIL_2082 = l_B_2085;
}
l_Q_2081 = ((*(R17 *)rt_nil_check(l_Q_2081))).f_A;
}
RT_B_TICK();
if (it2084 == it2084_hi) break;
} } L_end2083: ;
}
S_R9(&l_R_2079, r_FMT2(rt_str("@@); ", 5), l_R_2079, l_TMP_2078), 0);
l_P_2074 = p_E;
{ rt_int it2089_lo = ((rt_int)0LL), it2089_hi = rt_sub(l_DIMS_2073, ((rt_int)1LL));
for (rt_int it2089 = it2089_lo; it2089 <= it2089_hi; it2089++) {
{
S_R9(&l_R_2079, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_2079, l_TMP_2078, r_NUM(it2089), l_TMP_2078), 0);
S_R9(&l_R_2079, r_FMT3(rt_str("@@] = @;", 8), l_R_2079, r_NUM(it2089), r_NUM(rt_sub(r_LIST_LENGTH(((*(R17 *)rt_nil_check(l_P_2074))).f_A), ((rt_int)1LL)))), 0);
l_P_2074 = ((*(R17 *)rt_nil_check(l_P_2074))).f_A;
}
RT_B_TICK();
if (it2089 == it2089_hi) break;
} } L_end2088: ;
S_R9(&l_R_2079, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_2079, l_TMP_2078, l_TMP_2078, r_NUM(l_DIMS_2073)), 0);
S_R9(&l_R_2079, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_2079, l_TMP_2078, l_TMP_2078), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_2073, l_A_2077, l_TMP_2078, &l_R_2079, &l_K_2080);
{ R28 rv2090 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_2079, l_TMP_2078), l_A_2077);
return rv2090; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_SHAPE(R17 * p_E, rt_int p_DIMS) { RT_B_TICK(); 
R17 * l_P_2091; memset(&l_P_2091, 0, sizeof l_P_2091);
l_P_2091 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((p_DIMS <= ((rt_int)1LL)))
{
return;
}
for (;;) {
if ((l_P_2091 == NULL)) goto L_end2092;
{
if (((!(((*(R17 *)rt_nil_check(l_P_2091))).f_KIND == g_N_ARRCONS)) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_ARRCONS))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
if ((!r_SAME_SHAPE(l_P_2091, ((*(R17 *)rt_nil_check(p_E))).f_A)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
r_CHECK_SHAPE(l_P_2091, rt_sub(p_DIMS, ((rt_int)1LL)));
l_P_2091 = ((*(R17 *)rt_nil_check(l_P_2091))).f_NEXT;
}
RT_B_TICK();
} L_end2092: ;
}
static rt_int r_SAME_SHAPE(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
if (((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) || (!(((*(R17 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS))))
{
{ rt_int rv2093 = ((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) && (!(((*(R17 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS)));
return rv2093; }
}
if ((!(r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_A))).f_A) == r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_B))).f_A))))
{
{ rt_int rv2094 = 0;
return rv2094; }
}
{ rt_int rv2095 = r_SAME_SHAPE(((*(R17 *)rt_nil_check(p_A))).f_A, ((*(R17 *)rt_nil_check(p_B))).f_A);
return rv2095; }
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R17 * p_E, rt_int p_DIMS, R22 * p_A, R9 p_TMP, R9 *p_R, rt_int *p_K) { RT_B_TICK(); 
R17 * l_P_2096; memset(&l_P_2096, 0, sizeof l_P_2096);
l_P_2096 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_2096 == NULL)) goto L_end2097;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_2096, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R17 *)rt_nil_check(l_P_2096))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2096))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R9(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R9(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_2096, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R17 *)rt_nil_check(l_P_2096))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_2096 = ((*(R17 *)rt_nil_check(l_P_2096))).f_NEXT;
}
RT_B_TICK();
} L_end2097: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R22 * l_T_2098; memset(&l_T_2098, 0, sizeof l_T_2098);
l_T_2098 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_2098))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_2098))).f_DIMS = p_DIMS;
S_R9(&((*(R22 *)rt_nil_check(l_T_2098))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv2099 = l_T_2098;
return rv2099; }
rt_raise(RT_X_INIT);
}
static R28 r_TYPE_SPECIFIER(R17 * p_E) { RT_B_TICK(); 
R22 * l_T_2100; memset(&l_T_2100, 0, sizeof l_T_2100);
l_T_2100 = r_RESOLVE(((*(R17 *)rt_nil_check(p_E))).f_A);
R28 l_V_2101; memset(&l_V_2101, 0, sizeof l_V_2101);
S_R28(&l_V_2101, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, l_T_2100), 0);
R22 * l_RT_2102; memset(&l_RT_2102, 0, sizeof l_RT_2102);
l_RT_2102 = r_REAL_TYPE(l_T_2100);
if (((((*(R22 *)rt_nil_check((l_V_2101).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_2102))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
{ R28 rv2103 = r_MKET(r_OF_BITS(l_RT_2102, (l_V_2101).f_C, ((*(R17 *)rt_nil_check(p_E))).f_LINE), l_T_2100);
return rv2103; }
}
{
R9 l_C_2104; memset(&l_C_2104, 0, sizeof l_C_2104);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 1;
S_R9(&l_C_2104, r_CONVERT(l_V_2101, l_T_2100, ((*(R17 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), 0);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 0;
if ((((((((*(R22 *)rt_nil_check(l_RT_2102))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_2102))).f_KIND == g_T_BITS))) && ((((*(R22 *)rt_nil_check(l_RT_2102))).f_LEN_C).f_LEN > ((rt_int)0LL))) && (!(((((*(R22 *)rt_nil_check(l_RT_2102))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check((l_V_2101).f_T))).f_MLEN).f_OK)))))
{
S_R9(&l_C_2104, r_FMT2(rt_str("rt_b_tlen(@, @)", 15), l_C_2104, ((*(R22 *)rt_nil_check(l_RT_2102))).f_LEN_C), 0);
}
{ R28 rv2105 = r_MKET(l_C_2104, l_T_2100);
return rv2105; }
}
rt_raise(RT_X_INIT);
}
static R9 r_OF_BITS(R22 * p_T, R9 p_B, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_RT_2106; memset(&l_RT_2106, 0, sizeof l_RT_2106);
l_RT_2106 = r_REAL_TYPE(p_T);
rt_int l_K_2107; memset(&l_K_2107, 0, sizeof l_K_2107);
l_K_2107 = ((*(R22 *)rt_nil_check(l_RT_2106))).f_KIND;
if ((l_K_2107 == g_T_INT))
{
{
rt_int l_N_2108; memset(&l_N_2108, 0, sizeof l_N_2108);
l_N_2108 = r_REP_BITS(l_RT_2106);
R9 l_U_2109; memset(&l_U_2109, 0, sizeof l_U_2109);
S_R9(&l_U_2109, r_MK(rt_str("0", 1)), 0);
if ((l_N_2108 >= ((rt_int)63LL)))
{
l_N_2108 = ((*(R7 *)rt_nil_check(g_W))).f_WORD;
}
else if (r_REP_UNSIGNED(l_RT_2106))
{
S_R9(&l_U_2109, r_MK(rt_str("1", 1)), 0);
}
{ R9 rv2110 = r_RANGE_CHECK(l_RT_2106, r_FMT3(rt_str("rt_b_rep_int_of_bits(@, @, @)", 29), p_B, r_NUM(l_N_2108), l_U_2109), r_NO_TEXT());
return rv2110; }
}
}
else if ((l_K_2107 == g_T_BOOL))
{
{ R9 rv2111 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_B);
return rv2111; }
}
else if ((l_K_2107 == g_T_ENUM))
{
{ R9 rv2112 = r_ENUM_OF_BITS(l_RT_2106, p_B);
return rv2112; }
}
else if (r_IS_D(l_RT_2106))
{
{ R9 rv2113 = r_FMT1(rt_str("rt_b_d_of_bits(@)", 17), p_B);
return rv2113; }
}
else if (((l_K_2107 == g_T_FLOAT) && (((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL))))
{
{ R9 rv2114 = r_FMT1(rt_str("rt_b_f_of_bits(@)", 17), p_B);
return rv2114; }
}
else if (((l_K_2107 == g_T_FLOAT) && (r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_RT_2106))).f_SCALE) == ((rt_int)7LL))))
{
{ R9 rv2115 = r_FMT1(rt_str("rt_b_single_of_bits(@)", 22), p_B);
return rv2115; }
}
else if ((l_K_2107 == g_T_FLOAT))
{
{ R9 rv2116 = r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), p_B);
return rv2116; }
}
else if ((l_K_2107 == g_T_STR))
{
{ R9 rv2117 = r_FMT4(rt_str("rt_b_chars_of_bits(@, @, @, @)", 30), p_B, r_NUM(r_CHAR_SIZE(l_RT_2106)), r_NUM(r_PACKING_OF(l_RT_2106)), r_CHAR_REPS(l_RT_2106));
return rv2117; }
}
else if ((l_K_2107 == g_T_BITS))
{
{ R9 rv2118 = p_B;
return rv2118; }
}
else if ((l_K_2107 == g_T_PTR))
{
{ R9 rv2119 = r_FMT2(rt_str("((@)rt_b_ptr_at(rt_b_int_of_bits(@)))", 37), r_CTYPE(l_RT_2106), p_B);
return rv2119; }
}
else if ((l_K_2107 == g_T_SEM))
{
{ R9 rv2120 = r_FMT2(rt_str("rt_b_sem_value(rt_b_int_of_bits(@), @)", 38), p_B, r_NUM(((*(R22 *)rt_nil_check(l_RT_2106))).f_SCALE));
return rv2120; }
}
else if ((l_K_2107 == g_T_REC))
{
{ R9 rv2121 = r_RECORD_OF_BITS(l_RT_2106, p_B);
return rv2121; }
}
else if ((l_K_2107 == g_T_ARR))
{
{ R9 rv2122 = r_ARRAY_OF_BITS(l_RT_2106, p_B);
return rv2122; }
}
r_FAILT(p_LINE, rt_str("no representation as a bitstring for ", 37), r_TYPE_NAME(p_T));
rt_raise(RT_X_INIT);
}
static R9 r_ARRAY_BITS(R22 * p_T, R9 p_C) { RT_B_TICK(); 
R9 l_A_2123; memset(&l_A_2123, 0, sizeof l_A_2123);
S_R9(&l_A_2123, r_NEW_NAME(rt_str("ab", 2)), 0);
R9 l_N_2124; memset(&l_N_2124, 0, sizeof l_N_2124);
S_R9(&l_N_2124, r_NEW_NAME(rt_str("an", 2)), 0);
R9 l_I_2125; memset(&l_I_2125, 0, sizeof l_I_2125);
S_R9(&l_I_2125, r_NEW_NAME(rt_str("ai", 2)), 0);
R9 l_IMG_2126; memset(&l_IMG_2126, 0, sizeof l_IMG_2126);
S_R9(&l_IMG_2126, r_NEW_NAME(rt_str("im", 2)), 0);
R9 l_EB_2127; memset(&l_EB_2127, 0, sizeof l_EB_2127);
S_R9(&l_EB_2127, (r_BITS_OF(r_MKET(r_FMT2(rt_str("@.p[@]", 6), l_A_2123, l_I_2125), ((*(R22 *)rt_nil_check(p_T))).f_ELEM), ((rt_int)0LL))).f_C, 0);
{ R9 rv2128 = r_CAT(r_CAT(r_FMT4(rt_str("({ @ @ = @; rt_int @ = ", 23), r_CTYPE(p_T), l_A_2123, p_C, l_N_2124), r_FMT4(rt_str("rt_b_extent(@, @.lo, @.hi); rstr @ = rt_str_new(0);", 51), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), l_A_2123, l_A_2123, l_IMG_2126)), r_CAT(r_FMT4(rt_str(" for (rt_int @ = 0; @ < @; @++)", 31), l_I_2125, l_I_2125, l_N_2124, l_I_2125), r_CAT(r_FMT4(rt_str(" @ = rt_b_arr_put(@, @, @, ", 27), l_IMG_2126, l_IMG_2126, l_I_2125, l_N_2124), r_FMT3(rt_str("@, @); @; })", 12), l_EB_2127, r_NUM(r_PACKING_OF(p_T)), l_IMG_2126))));
return rv2128; }
rt_raise(RT_X_INIT);
}
static R9 r_ARRAY_OF_BITS(R22 * p_T, R9 p_B) { RT_B_TICK(); 
R9 l_A_2129; memset(&l_A_2129, 0, sizeof l_A_2129);
S_R9(&l_A_2129, r_NEW_NAME(rt_str("av", 2)), 0);
R9 l_N_2130; memset(&l_N_2130, 0, sizeof l_N_2130);
S_R9(&l_N_2130, r_NEW_NAME(rt_str("an", 2)), 0);
R9 l_I_2131; memset(&l_I_2131, 0, sizeof l_I_2131);
S_R9(&l_I_2131, r_NEW_NAME(rt_str("ai", 2)), 0);
R9 l_ES_2132; memset(&l_ES_2132, 0, sizeof l_ES_2132);
S_R9(&l_ES_2132, r_NEW_NAME(rt_str("es", 2)), 0);
R9 l_IMG_2133; memset(&l_IMG_2133, 0, sizeof l_IMG_2133);
S_R9(&l_IMG_2133, r_NEW_NAME(rt_str("im", 2)), 0);
R9 l_MODE_2134; memset(&l_MODE_2134, 0, sizeof l_MODE_2134);
S_R9(&l_MODE_2134, r_NUM(r_PACKING_OF(p_T)), 0);
R9 l_TAKE_2135; memset(&l_TAKE_2135, 0, sizeof l_TAKE_2135);
S_R9(&l_TAKE_2135, r_FMT4(rt_str("rt_b_arr_take(@, @, @, @, ", 26), l_IMG_2133, l_I_2131, l_N_2130, l_ES_2132), 0);
R9 l_EV_2136; memset(&l_EV_2136, 0, sizeof l_EV_2136);
S_R9(&l_EV_2136, r_OF_BITS(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@@)", 3), l_TAKE_2135, l_MODE_2134), ((rt_int)0LL)), 0);
R9 l_EST_2137; memset(&l_EST_2137, 0, sizeof l_EST_2137);
S_R9(&l_EST_2137, (r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT1(rt_str("@.p[0]", 6), l_A_2129))).f_C, 0);
{ R9 rv2138 = r_CAT(r_CAT(r_FMT4(rt_str("({ rstr @ = @; @ @;", 19), l_IMG_2133, p_B, r_CTYPE(p_T), l_A_2129), r_CAT(r_FMT4(rt_str(" @ rt_int @ = rt_b_extent(@, @.lo, ", 35), r_INIT_CODE(p_T, l_A_2129), l_N_2130, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), l_A_2129), r_FMT4(rt_str("@.hi); rt_int @ = @ \? @ : 0;", 28), l_A_2129, l_ES_2132, l_N_2130, l_EST_2137))), r_CAT(r_CAT(r_FMT3(rt_str(" if (!@) rt_b_lay_end(@, 0); for (rt_int @ = 0; ", 48), l_N_2130, l_IMG_2133, l_I_2131), r_FMT4(rt_str("@ < @; @++) @.p", 15), l_I_2131, l_N_2130, l_I_2131, l_A_2129)), r_FMT3(rt_str("[@] = @; @; })", 14), l_I_2131, l_EV_2136, l_A_2129)));
return rv2138; }
rt_raise(RT_X_INIT);
}
static R9 r_ENUM_OF_BITS(R22 * p_T, R9 p_C) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R9 rv2139 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv2139; }
}
}
{ R9 rv2140 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv2140; }
rt_raise(RT_X_INIT);
}
static R9 r_REP_TABLE(R22 * p_T) { RT_B_TICK(); 
R9 l_NAME_2141; memset(&l_NAME_2141, 0, sizeof l_NAME_2141);
S_R9(&l_NAME_2141, r_NEW_NAME(rt_str("reps", 4)), 0);
R17 * l_L_2142; memset(&l_L_2142, 0, sizeof l_L_2142);
l_L_2142 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R9 l_R_2143; memset(&l_R_2143, 0, sizeof l_R_2143);
S_R9(&l_R_2143, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_2142 == NULL)) goto L_end2144;
{
{
R17 * l_V_2145; memset(&l_V_2145, 0, sizeof l_V_2145);
l_V_2145 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_2146; memset(&l_FOUND_2146, 0, sizeof l_FOUND_2146);
l_FOUND_2146 = 0;
for (;;) {
if ((l_V_2145 == NULL)) goto L_end2147;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_V_2145))).f_NAME, ((*(R17 *)rt_nil_check(l_L_2142))).f_NAME))
{
S_R9(&l_R_2143, r_FMT2(rt_str("@@, ", 4), l_R_2143, (r_EXPR(((*(R17 *)rt_nil_check(l_V_2145))).f_A, NULL)).f_C), 0);
l_FOUND_2146 = 1;
}
l_V_2145 = ((*(R17 *)rt_nil_check(l_V_2145))).f_NEXT;
}
RT_B_TICK();
} L_end2147: ;
if ((!l_FOUND_2146))
{
r_FAILT(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R17 *)rt_nil_check(l_L_2142))).f_NAME);
}
}
l_L_2142 = ((*(R17 *)rt_nil_check(l_L_2142))).f_NEXT;
}
RT_B_TICK();
} L_end2144: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_2141, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_2143, l_NAME_2141, l_NAME_2141));
{ R9 rv2148 = r_FMT2(rt_str("@, @", 4), l_NAME_2141, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv2148; }
rt_raise(RT_X_INIT);
}
static R28 r_NEW_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SEM_2149; memset(&l_SEM_2149, 0, sizeof l_SEM_2149);
l_SEM_2149 = r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(((*(R7 *)rt_nil_check(g_W))).f_NEW_OK == p_E))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("NEW without PTR$ or SEMAPHORE$ only initializes a declaration or is the source ", 79), rt_str("of an assignment (3.10.2, 3.11.2)", 33)));
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_2149 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_2149)
{
{
R22 * l_T_2150; memset(&l_T_2150, 0, sizeof l_T_2150);
l_T_2150 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_2150 = p_WANT;
}
}
{ R28 rv2151 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_2150))).f_SCALE)), l_T_2150);
return rv2151; }
}
}
{
R22 * l_T_2152; memset(&l_T_2152, 0, sizeof l_T_2152);
l_T_2152 = r_RESOLVE(r_EXPR_TO_TS(((*(R17 *)rt_nil_check(p_E))).f_A));
R22 * l_P_2153; memset(&l_P_2153, 0, sizeof l_P_2153);
l_P_2153 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_2153))).f_TARGET = l_T_2152;
((*(R22 *)rt_nil_check(l_P_2153))).f_TARGET_TS = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((r_STATIC_SIZE(l_T_2152)).f_OK)
{
{ R28 rv2154 = r_MKET(r_FMT3(rt_str("({ @ *p = rt_b_new_bits(sizeof *p, @); @ p; })", 46), r_CTYPE(l_T_2152), r_NUM((r_STATIC_SIZE(l_T_2152)).f_V), r_INIT_CODE(l_T_2152, r_MK(rt_str("(*p)", 4)))), l_P_2153);
return rv2154; }
}
{ R28 rv2155 = r_MKET(r_FMT3(rt_str("({ @ *p = rt_b_new_bits(sizeof *p, 0); @ rt_b_new_more(@); p; })", 64), r_CTYPE(l_T_2152), r_INIT_CODE(l_T_2152, r_MK(rt_str("(*p)", 4))), (r_SIZE_OF(l_T_2152, r_MK(rt_str("(*p)", 4)))).f_C), l_P_2153);
return rv2155; }
}
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_CONV(R28 p_V, R22 * p_T, R9 p_TR) { RT_B_TICK(); 
if (r_IS_D(p_T))
{
{ R9 rv2156 = r_AS_D(p_V);
return rv2156; }
}
else if (r_IS_D((p_V).f_T))
{
{ R9 rv2157 = r_FMT2(rt_str("rt_b_single_of_d(@, @, 0)", 25), (p_V).f_C, p_TR);
return rv2157; }
}
{ R9 rv2158 = r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (p_V).f_C, r_SINGLE_C(((*(R22 *)rt_nil_check(p_T))).f_SCALE), p_TR);
return rv2158; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_LIMIT(R22 * p_T, R9 p_WHICH) { RT_B_TICK(); 
R9 l_C_2159; memset(&l_C_2159, 0, sizeof l_C_2159);
S_R9(&l_C_2159, r_MK(rt_str("DBL", 3)), 0);
if (r_IS_D(p_T))
{
if (r_TEQS(p_WHICH, rt_str("MIN", 3)))
{
{ R9 rv2160 = r_MK(rt_str("rt_b_dneg(rt_b_dmax())", 22));
return rv2160; }
}
else if (r_TEQS(p_WHICH, rt_str("MAX", 3)))
{
{ R9 rv2161 = r_MK(rt_str("rt_b_dmax()", 11));
return rv2161; }
}
{ R9 rv2162 = r_MK(rt_str("rt_b_deps()", 11));
return rv2162; }
}
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(p_T))).f_SCALE) == ((rt_int)7LL)))
{
S_R9(&l_C_2159, r_MK(rt_str("FLT", 3)), 0);
}
if (((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)) && (!r_TEQS(p_WHICH, rt_str("EPSILON", 7)))))
{
if (r_TEQS(p_WHICH, rt_str("MIN", 3)))
{
{ R9 rv2163 = r_MK(rt_str("(-0x1.fffffep+126)", 18));
return rv2163; }
}
{ R9 rv2164 = r_MK(rt_str("0x1.fffffep+126", 15));
return rv2164; }
}
if (r_TEQS(p_WHICH, rt_str("MIN", 3)))
{
{ R9 rv2165 = r_FMT1(rt_str("(-@_MAX)", 8), l_C_2159);
return rv2165; }
}
else if (r_TEQS(p_WHICH, rt_str("MAX", 3)))
{
{ R9 rv2166 = r_FMT1(rt_str("@_MAX", 5), l_C_2159);
return rv2166; }
}
{ R9 rv2167 = r_FMT1(rt_str("@_EPSILON", 9), l_C_2159);
return rv2167; }
rt_raise(RT_X_INIT);
}
static R17 * r_NTH(R17 * p_L, rt_int p_K) { RT_B_TICK(); 
R17 * l_P_2168; memset(&l_P_2168, 0, sizeof l_P_2168);
l_P_2168 = p_L;
{ rt_int it2170_lo = ((rt_int)1LL), it2170_hi = p_K;
for (rt_int it2170 = it2170_lo; it2170 <= it2170_hi; it2170++) {
{
if ((!(l_P_2168 == NULL)))
{
l_P_2168 = ((*(R17 *)rt_nil_check(l_P_2168))).f_NEXT;
}
}
RT_B_TICK();
if (it2170 == it2170_hi) break;
} } L_end2169: ;
{ R17 * rv2171 = l_P_2168;
return rv2171; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R17 * p_E, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
rt_int l_N_2172; memset(&l_N_2172, 0, sizeof l_N_2172);
l_N_2172 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A);
if (((l_N_2172 < p_LO) || (l_N_2172 > p_HI)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
}
static R9 r_ROUNDING_ARG(R17 * p_E, rt_int p_N) { RT_B_TICK(); 
R17 * l_L_2173; memset(&l_L_2173, 0, sizeof l_L_2173);
l_L_2173 = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_2173 == NULL)))
{
if (((((*(R17 *)rt_nil_check(l_L_2173))).f_KIND == g_N_QUAL) && ((((*(R17 *)rt_nil_check(l_L_2173))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_L_2173))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R9 rv2174 = r_MK(rt_str("1", 1));
return rv2174; }
}
{ R9 rv2175 = r_MK(rt_str("0", 1));
return rv2175; }
}
if (((((*(R17 *)rt_nil_check(l_L_2173))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_L_2173))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_L_2173))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R9 rv2176 = r_MK(rt_str("1", 1));
return rv2176; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_L_2173))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R9 rv2177 = r_MK(rt_str("0", 1));
return rv2177; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R9 rv2178 = r_MK(rt_str("1", 1));
return rv2178; }
}
{ R9 rv2179 = r_MK(rt_str("0", 1));
return rv2179; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R17 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv2180 = 0;
return rv2180; }
}
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv2181 = (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv2181; }
}
{ rt_int rv2182 = 0;
return rv2182; }
rt_raise(RT_X_INIT);
}
static R17 * r_ARG_EXPR(R17 * p_E) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R17 * rv2183 = ((*(R17 *)rt_nil_check(p_E))).f_A;
return rv2183; }
}
{ R17 * rv2184 = p_E;
return rv2184; }
rt_raise(RT_X_INIT);
}
static R9 r_OPERATOR_SYMBOL(R9 p_NAME) { RT_B_TICK(); 
rstr l_NAMES_2185; memset(&l_NAMES_2185, 0, sizeof l_NAMES_2185);
l_NAMES_2185 = rt_b_str_new(((rt_int)299LL), 0);
rt_b_assign(&l_NAMES_2185, rt_str(" ADD_:+ SUBTRACT_:- MULTIPLY_:* DIVIDE_:/ MODULUS_:MOD EXPONENTIATE_:** CONCATENATE_:!! EQUAL_:= UNEQUAL_:<> GREATER_THAN_:> LESS_THAN_:< GREATER_EQUAL_:>= LESS_EQUAL_:<= AND_:AND OR_:OR XOR_:XOR IMPLIES_:-> MD_ADD_:+ MD_SUBTRACT_:- MD_MULTIPLY_:* MD_DIVIDE_:/ NEGATE_:- MON_PLUS_:+ COMPLEMENT_:NOT ", 299));
rt_int l_L_2186; memset(&l_L_2186, 0, sizeof l_L_2186);
l_L_2186 = (p_NAME).f_LEN;
{ rt_int it2188_lo = ((rt_int)0LL), it2188_hi = rt_sub(rt_sub(((rt_int)299LL), l_L_2186), ((rt_int)2LL));
for (rt_int it2188 = it2188_lo; it2188 <= it2188_hi; it2188++) {
{
if ((rt_b_eq(rt_b_slice(l_NAMES_2185, it2188, it2188), rt_str(" ", 1)) && rt_b_eq(rt_b_slice(l_NAMES_2185, rt_add(rt_add(it2188, l_L_2186), ((rt_int)1LL)), rt_add(rt_add(it2188, l_L_2186), ((rt_int)1LL))), rt_str(":", 1))))
{
if (rt_b_eq(rt_b_slice(l_NAMES_2185, rt_add(it2188, ((rt_int)1LL)), rt_add(it2188, l_L_2186)), r_STR(p_NAME, l_L_2186)))
{
{
rt_int l_J_2189; memset(&l_J_2189, 0, sizeof l_J_2189);
l_J_2189 = rt_add(rt_add(it2188, l_L_2186), ((rt_int)2LL));
for (;;) {
if (rt_b_eq(rt_b_slice(l_NAMES_2185, l_J_2189, l_J_2189), rt_str(" ", 1))) goto L_end2190;
{
l_J_2189 = rt_add(l_J_2189, ((rt_int)1LL));
}
RT_B_TICK();
} L_end2190: ;
{ R9 rv2191 = r_MKN(rt_b_slice(l_NAMES_2185, rt_add(rt_add(it2188, l_L_2186), ((rt_int)2LL)), rt_sub(l_J_2189, ((rt_int)1LL))));
return rv2191; }
}
}
}
}
RT_B_TICK();
if (it2188 == it2188_hi) break;
} } L_end2187: ;
{ R9 rv2192 = r_NO_TEXT();
return rv2192; }
rt_raise(RT_X_INIT);
}
static R28 r_OPERATOR_BUILTIN(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R9 l_NAME_2193; memset(&l_NAME_2193, 0, sizeof l_NAME_2193);
S_R9(&l_NAME_2193, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2194; memset(&l_LINE_2194, 0, sizeof l_LINE_2194);
l_LINE_2194 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
rt_int l_N_2195; memset(&l_N_2195, 0, sizeof l_N_2195);
l_N_2195 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A);
if ((r_TEQS(l_NAME_2193, rt_str("STORE_", 6)) || r_TEQS(l_NAME_2193, rt_str("SUBSTRING_STORE_", 16))))
{
{
R17 * l_TGT_2196; memset(&l_TGT_2196, 0, sizeof l_TGT_2196);
l_TGT_2196 = r_FIRST_OUT_ARG(p_E);
R17 * l_S_2197; memset(&l_S_2197, 0, sizeof l_S_2197);
l_S_2197 = r_NEW_NODE(g_N_ASSIGN, l_LINE_2194);
R17 * l_SRC_2198; memset(&l_SRC_2198, 0, sizeof l_SRC_2198);
l_SRC_2198 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if (((l_TGT_2196 == NULL) || (l_SRC_2198 == NULL)))
{
r_FAILT(l_LINE_2194, rt_str("the wrong arguments for ", 24), l_NAME_2193);
}
if (r_TEQS(l_NAME_2193, rt_str("STORE_", 6)))
{
((*(R17 *)rt_nil_check(l_S_2197))).f_A = l_TGT_2196;
}
else
{
if ((l_N_2195 < ((rt_int)3LL)))
{
r_FAIL(l_LINE_2194, rt_str("SUBSTRING_STORE_ (V, L, U # X) (D.5)", 36));
}
((*(R17 *)rt_nil_check(l_S_2197))).f_A = r_NEW_NODE(g_N_SUBSTR, l_LINE_2194);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_2197))).f_A))).f_A = l_TGT_2196;
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_2197))).f_A))).f_B = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_2197))).f_A))).f_C = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
}
((*(R17 *)rt_nil_check(l_S_2197))).f_B = r_QUALIFIED(r_COPY_NODE(l_SRC_2198), r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, rt_add(((rt_int)1LL), rt_mul(((rt_int)2LL), r_BOOL_INT(r_TEQS(l_NAME_2193, rt_str("SUBSTRING_STORE_", 16)))))), l_LINE_2194);
{
R14 l_SAVED_CODE_2199; memset(&l_SAVED_CODE_2199, 0, sizeof l_SAVED_CODE_2199);
S_R14(&l_SAVED_CODE_2199, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R9 l_C_2200; memset(&l_C_2200, 0, sizeof l_C_2200);
S_R9(&l_C_2200, r_MK(rt_str("({", 2)), 0);
R15 * l_P_2201; memset(&l_P_2201, 0, sizeof l_P_2201);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2202; memset(&rc2202, 0, sizeof rc2202);  rc2202.f_HEAD = NULL; rc2202.f_TAIL = NULL; rc2202; }), 0);
r_ASSIGN_STMT(l_S_2197);
l_P_2201 = (((*(R7 *)rt_nil_check(g_W))).f_CODE).f_HEAD;
for (;;) {
if ((l_P_2201 == NULL)) goto L_end2203;
{
S_R9(&l_C_2200, r_FMT2(rt_str("@ @", 3), l_C_2200, ((*(R15 *)rt_nil_check(l_P_2201))).f_T), 0);
l_P_2201 = ((*(R15 *)rt_nil_check(l_P_2201))).f_NEXT;
}
RT_B_TICK();
} L_end2203: ;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2199, 0);
{ R28 rv2204 = r_MKET(r_CATS(l_C_2200, rt_str(" })", 3)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2204; }
}
}
}
if (r_TEQS(l_NAME_2193, rt_str("SUBSTRING_", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R17 * l_S_2205; memset(&l_S_2205, 0, sizeof l_S_2205);
l_S_2205 = r_NEW_NODE(g_N_SUBSTR, l_LINE_2194);
((*(R17 *)rt_nil_check(l_S_2205))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_A;
((*(R17 *)rt_nil_check(l_S_2205))).f_B = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R17 *)rt_nil_check(l_S_2205))).f_C = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
((*(R17 *)rt_nil_check(l_S_2205))).f_A = r_COPY_NODE(((*(R17 *)rt_nil_check(p_E))).f_A);
{ R28 rv2206 = r_EXPR(l_S_2205, p_WANT);
return rv2206; }
}
}
{
R9 l_SYM__2207; memset(&l_SYM__2207, 0, sizeof l_SYM__2207);
S_R9(&l_SYM__2207, r_OPERATOR_SYMBOL(l_NAME_2193), 0);
rt_int l_UNARY_OP_2208; memset(&l_UNARY_OP_2208, 0, sizeof l_UNARY_OP_2208);
l_UNARY_OP_2208 = ((r_TEQS(l_NAME_2193, rt_str("NEGATE_", 7)) || r_TEQS(l_NAME_2193, rt_str("MON_PLUS_", 9))) || r_TEQS(l_NAME_2193, rt_str("COMPLEMENT_", 11)));
R17 * l_X_2209; memset(&l_X_2209, 0, sizeof l_X_2209);
if (l_UNARY_OP_2208)
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)3LL));
l_X_2209 = r_NEW_NODE(g_N_UNOP, l_LINE_2194);
S_R9(&((*(R17 *)rt_nil_check(l_X_2209))).f_NAME, l_SYM__2207, 0);
((*(R17 *)rt_nil_check(l_X_2209))).f_A = r_COPY_NODE(((*(R17 *)rt_nil_check(p_E))).f_A);
{ R28 rv2210 = r_EXPR(r_QUALIFIED(l_X_2209, r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), l_LINE_2194), p_WANT);
return rv2210; }
}
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)4LL));
l_X_2209 = r_BIN_NODE(l_SYM__2207, l_LINE_2194, r_COPY_NODE(((*(R17 *)rt_nil_check(p_E))).f_A), r_COPY_NODE(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))));
if (r_TEQS(l_SYM__2207, rt_str("/", 1)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL)).f_T)))).f_KIND == g_T_FLOAT)))
{
S_R9(&((*(R17 *)rt_nil_check(l_X_2209))).f_NAME, r_MK(rt_str("//", 2)), 0);
}
}
if (rt_b_eq(rt_b_slice(r_STR(l_NAME_2193, (l_NAME_2193).f_LEN), ((rt_int)0LL), ((rt_int)2LL)), rt_str("MD_", 3)))
{
((*(R17 *)rt_nil_check(l_X_2209))).f_FL = ((rt_int)2LL);
}
{ R28 rv2211 = r_EXPR(r_QUALIFIED(l_X_2209, r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_2194), p_WANT);
return rv2211; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_QUALIFIED(R17 * p_X, R17 * p_Q, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_2212; memset(&l_R_2212, 0, sizeof l_R_2212);
l_R_2212 = p_X;
R17 * l_P_2213; memset(&l_P_2213, 0, sizeof l_P_2213);
l_P_2213 = p_Q;
for (;;) {
if ((l_P_2213 == NULL)) goto L_end2214;
{
if ((l_R_2212 == p_X))
{
l_R_2212 = r_NEW_NODE(g_N_QUAL, p_LINE);
((*(R17 *)rt_nil_check(l_R_2212))).f_A = p_X;
}
if (((((((*(R17 *)rt_nil_check(l_P_2213))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_P_2213))).f_KIND == g_N_ENUMLIT))) && r_IS_ROUNDING_NAME(((*(R17 *)rt_nil_check(l_P_2213))).f_NAME)))
{
S_R9(&((*(R17 *)rt_nil_check(l_R_2212))).f_NAME, ((*(R17 *)rt_nil_check(l_P_2213))).f_NAME, 0);
}
else
{
((*(R17 *)rt_nil_check(l_R_2212))).f_B = l_P_2213;
}
l_P_2213 = ((*(R17 *)rt_nil_check(l_P_2213))).f_NEXT;
}
RT_B_TICK();
} L_end2214: ;
{ R17 * rv2215 = l_R_2212;
return rv2215; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING_NAME(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv2216 = (!(r_FIND_LITERAL(p_NAME, r_ROUNDINGS_TYPE()) == NULL));
return rv2216; }
rt_raise(RT_X_INIT);
}
static R22 * r_ROUNDINGS_TYPE(void) { RT_B_TICK(); 
R12 * l_Y_2217; memset(&l_Y_2217, 0, sizeof l_Y_2217);
l_Y_2217 = r_LOOKUP(r_MKN(rt_str("ROUNDINGS", 9)));
if ((!(l_Y_2217 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2217))).f_KIND == g_Y_TYPE))
{
{
R22 * l_T_2218; memset(&l_T_2218, 0, sizeof l_T_2218);
l_T_2218 = r_REAL_TYPE(r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_2217))).f_NAME, ((rt_int)0LL)));
if ((((*(R22 *)rt_nil_check(l_T_2218))).f_KIND == g_T_ENUM))
{
{ R22 * rv2219 = l_T_2218;
return rv2219; }
}
}
}
}
{ R22 * rv2220 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS;
return rv2220; }
rt_raise(RT_X_INIT);
}
static rt_int r_PREDEFINED_ROUNDING(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL))
{
{ rt_int rv2221 = 1;
return rv2221; }
}
if (((((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2222 = 1;
return rv2222; }
}
{ rt_int rv2223 = (((r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9))) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_R", 8))) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8)));
return rv2223; }
rt_raise(RT_X_INIT);
}
static R17 * r_FIRST_OUT_ARG(R17 * p_E) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL)))
{
{ R17 * rv2224 = ((*(R17 *)rt_nil_check(p_E))).f_C;
return rv2224; }
}
{ R17 * rv2225 = ((*(R17 *)rt_nil_check(p_E))).f_B;
return rv2225; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_OBJECT_ARG(R17 * p_L) { RT_B_TICK(); 
R17 * l_A_2226; memset(&l_A_2226, 0, sizeof l_A_2226);
l_A_2226 = p_L;
for (;;) {
if ((l_A_2226 == NULL)) goto L_end2227;
{
if ((((*(R17 *)rt_nil_check(l_A_2226))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_2228; memset(&l_Y_2228, 0, sizeof l_Y_2228);
l_Y_2228 = r_LOOKUP(((*(R17 *)rt_nil_check(l_A_2226))).f_NAME);
if ((!(l_Y_2228 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_2228))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_2228))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_2228))).f_T == NULL))))
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2228))).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
{ rt_int rv2229 = 1;
return rv2229; }
}
}
}
}
}
l_A_2226 = ((*(R17 *)rt_nil_check(l_A_2226))).f_NEXT;
}
RT_B_TICK();
} L_end2227: ;
{ rt_int rv2230 = 0;
return rv2230; }
rt_raise(RT_X_INIT);
}
static R28 r_BUILTIN(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R9 l_NAME_2231; memset(&l_NAME_2231, 0, sizeof l_NAME_2231);
S_R9(&l_NAME_2231, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2232; memset(&l_LINE_2232, 0, sizeof l_LINE_2232);
l_LINE_2232 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
if ((!(r_CUR_GENERIC() == NULL)))
{
if (r_GENERIC_OBJECT_ARG(((*(R17 *)rt_nil_check(p_E))).f_A))
{
r_REQUIRE_WHERE(l_NAME_2231, l_LINE_2232);
}
}
if ((((((r_OPERATOR_SYMBOL(l_NAME_2231)).f_LEN > ((rt_int)0LL)) || r_TEQS(l_NAME_2231, rt_str("STORE_", 6))) || r_TEQS(l_NAME_2231, rt_str("SUBSTRING_", 10))) || r_TEQS(l_NAME_2231, rt_str("SUBSTRING_STORE_", 16))))
{
{ R28 rv2233 = r_OPERATOR_BUILTIN(p_E, p_WANT);
return rv2233; }
}
if ((r_TEQS(l_NAME_2231, rt_str("PUT", 3)) || r_TEQS(l_NAME_2231, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R28 l_V_2234; memset(&l_V_2234, 0, sizeof l_V_2234);
S_R28(&l_V_2234, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2234).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_2232, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
r_ASCII_ONLY((l_V_2234).f_T, rt_str("the terminal", 12), l_LINE_2232);
if (r_TEQS(l_NAME_2231, rt_str("PUT", 3)))
{
{ R28 rv2235 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_2234).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2235; }
}
{ R28 rv2236 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_2234).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2236; }
}
}
else if (r_TEQS(l_NAME_2231, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R28 rv2237 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2237; }
}
else if (r_TEQS(l_NAME_2231, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R28 rv2238 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2238; }
}
else if (r_TEQS(l_NAME_2231, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R28 rv2239 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2239; }
}
else if (r_TEQS(l_NAME_2231, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R28 rv2240 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2240; }
}
else if (r_TEQS(l_NAME_2231, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R28 rv2241 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2241; }
}
else if (r_TEQS(l_NAME_2231, rt_str("REAL_TIME", 9)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R28 rv2242 = r_MKET(r_MK(rt_str("rt_b_real_time()", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2242; }
}
else if (r_TEQS(l_NAME_2231, rt_str("ARGUMENT_COUNT", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R28 rv2243 = r_MKET(r_MK(rt_str("rt_argc()", 9)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2243; }
}
else if (r_TEQS(l_NAME_2231, rt_str("ARGUMENT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R28 rv2244 = r_MKET(r_FMT1(rt_str("rt_arg(@)", 9), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2244; }
}
else if ((r_TEQS(l_NAME_2231, rt_str("FILE_EXISTS", 11)) || r_TEQS(l_NAME_2231, rt_str("READ_FILE", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R28 l_V_2245; memset(&l_V_2245, 0, sizeof l_V_2245);
S_R28(&l_V_2245, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2245).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_2232, rt_str("a file is named by a character string: ", 39), l_NAME_2231);
}
if (r_TEQS(l_NAME_2231, rt_str("FILE_EXISTS", 11)))
{
{ R28 rv2246 = r_MKET(r_FMT1(rt_str("rt_b_file_exists(@)", 19), (l_V_2245).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2246; }
}
{ R28 rv2247 = r_MKET(r_FMT1(rt_str("rt_read_file(@)", 15), (l_V_2245).f_C), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2247; }
}
}
else if (r_TEQS(l_NAME_2231, rt_str("WRITE_FILE", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R28 l_N_2248; memset(&l_N_2248, 0, sizeof l_N_2248);
S_R28(&l_N_2248, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R28 l_V_2249; memset(&l_V_2249, 0, sizeof l_V_2249);
S_R28(&l_V_2249, r_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT, NULL), 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_N_2248).f_T)))).f_KIND == g_T_STR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2249).f_T)))).f_KIND == g_T_STR))))
{
r_FAIL(l_LINE_2232, rt_str("WRITE_FILE (name, text) takes two character strings", 51));
}
{ R28 rv2250 = r_MKET(r_FMT2(rt_str("rt_write_file(@, @)", 19), (l_N_2248).f_C, (l_V_2249).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2250; }
}
}
if (r_TEQS(l_NAME_2231, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R28 rv2251 = r_IMAGE_OF(r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_2232);
return rv2251; }
}
else if (r_TEQS(l_NAME_2231, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R28 rv2252 = r_TO_FIXED_CALL(p_E);
return rv2252; }
}
else if (r_TEQS(l_NAME_2231, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R28 l_V_2253; memset(&l_V_2253, 0, sizeof l_V_2253);
S_R28(&l_V_2253, r_EXPR(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), NULL), 0);
R25 l_P_2254; memset(&l_P_2254, 0, sizeof l_P_2254);
S_R25(&l_P_2254, r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_VT_2255; memset(&l_VT_2255, 0, sizeof l_VT_2255);
l_VT_2255 = r_REAL_TYPE((l_V_2253).f_T);
R22 * l_T_2256; memset(&l_T_2256, 0, sizeof l_T_2256);
l_T_2256 = r_FLOAT_TYPE((l_P_2254).f_V);
R9 l_SINGLE_2257; memset(&l_SINGLE_2257, 0, sizeof l_SINGLE_2257);
S_R9(&l_SINGLE_2257, r_SINGLE_C((l_P_2254).f_V), 0);
R9 l_TR_2258; memset(&l_TR_2258, 0, sizeof l_TR_2258);
S_R9(&l_TR_2258, r_MK(rt_str("0", 1)), 0);
if (((r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A) == ((rt_int)3LL)) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT))).f_KIND == g_N_QUAL)))
{
{
R17 * l_R_2259; memset(&l_R_2259, 0, sizeof l_R_2259);
l_R_2259 = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
if ((l_R_2259 == NULL))
{
l_R_2259 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT;
}
if ((((*(R17 *)rt_nil_check(l_R_2259))).f_KIND == g_N_QUAL))
{
l_R_2259 = r_LIT_NODE_T(((*(R17 *)rt_nil_check(l_R_2259))).f_NAME, l_LINE_2232);
}
if (r_TEQS(((*(R17 *)rt_nil_check(l_R_2259))).f_NAME, rt_str("TRUNCATED", 9)))
{
S_R9(&l_TR_2258, r_MK(rt_str("1", 1)), 0);
}
else if ((!r_TEQS(((*(R17 *)rt_nil_check(l_R_2259))).f_NAME, rt_str("ROUNDED", 7))))
{
r_FAIL(l_LINE_2232, rt_str("TO_FLOAT is predefined for ROUNDED and TRUNCATED (3.3.6.1)", 58));
}
}
}
if (((((*(R22 *)rt_nil_check(l_VT_2255))).f_KIND == g_T_INT) && r_IS_D(l_T_2256)))
{
{ R28 rv2260 = r_MKET(r_FMT3(rt_str("rt_b_d_of_fix(@, @, @)", 22), (l_V_2253).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_2255))).f_SCALE), l_TR_2258), l_T_2256);
return rv2260; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_2255))).f_KIND == g_T_INT))
{
{ R28 rv2261 = r_MKET(r_FMT4(rt_str("rt_b_float_of_fix_r(@, @, @, @)", 31), (l_V_2253).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_2255))).f_SCALE), l_SINGLE_2257, l_TR_2258), l_T_2256);
return rv2261; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_2255))).f_KIND == g_T_FLOAT))
{
if (((((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) && (r_IMP_PRECISION_OF((l_P_2254).f_V) > r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_2255))).f_SCALE))))
{
{
R17 * l_Q_2262; memset(&l_Q_2262, 0, sizeof l_Q_2262);
l_Q_2262 = r_NEW_NODE(g_N_QUAL, l_LINE_2232);
R17 * l_SAVED_Q_2263; memset(&l_SAVED_Q_2263, 0, sizeof l_SAVED_Q_2263);
l_SAVED_Q_2263 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R28 l_L_2264; memset(&l_L_2264, 0, sizeof l_L_2264);
((*(R17 *)rt_nil_check(l_Q_2262))).f_B = r_ARG_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_Q_2262;
S_R28(&l_L_2264, r_EXPR(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_2263;
{ R28 rv2265 = r_MKET(r_FLOAT_CONV(l_L_2264, l_T_2256, l_TR_2258), l_T_2256);
return rv2265; }
}
}
{ R28 rv2266 = r_MKET(r_FLOAT_CONV(l_V_2253, l_T_2256, l_TR_2258), l_T_2256);
return rv2266; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_2255))).f_KIND == g_T_STR))
{
if (((!(((*(R22 *)rt_nil_check(l_VT_2255))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(l_VT_2255))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))))
{
r_FAIL(l_LINE_2232, rt_str("TO_FLOAT is predefined for ASCII strings only (3.3.6.1)", 55));
}
if (r_IS_D(l_T_2256))
{
{ R28 rv2267 = r_MKET(r_FMT2(rt_str("rt_b_d_of_str(@, @)", 19), (l_V_2253).f_C, l_TR_2258), l_T_2256);
return rv2267; }
}
{ R28 rv2268 = r_MKET(r_FMT3(rt_str("rt_b_fconv(rt_b_float_of_str(@), @, @, 0)", 41), (l_V_2253).f_C, l_SINGLE_2257, l_TR_2258), l_T_2256);
return rv2268; }
}
r_FAIL(l_LINE_2232, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_2231, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R28 rv2269 = r_BITS_OF(r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_2232);
return rv2269; }
}
else if (r_TEQS(l_NAME_2231, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R28 l_V_2270; memset(&l_V_2270, 0, sizeof l_V_2270);
S_R28(&l_V_2270, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2270).f_T)))).f_KIND == g_T_INT))
{
{ R28 rv2271 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_2270).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_2270).f_T))).f_SCALE));
return rv2271; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2270).f_T)))).f_KIND == g_T_FLOAT))
{
if (r_IS_D((l_V_2270).f_T))
{
{ R28 rv2272 = r_MKET(r_FMT1(rt_str("rt_b_dabs(@)", 12), (l_V_2270).f_C), (l_V_2270).f_T);
return rv2272; }
}
{ R28 rv2273 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_2270).f_C), (l_V_2270).f_T);
return rv2273; }
}
r_FAIL(l_LINE_2232, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_2231, rt_str("SUCC", 4)) || r_TEQS(l_NAME_2231, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R28 l_V_2274; memset(&l_V_2274, 0, sizeof l_V_2274);
S_R28(&l_V_2274, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_2275; memset(&l_T_2275, 0, sizeof l_T_2275);
l_T_2275 = r_REAL_TYPE((l_V_2274).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_2275))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_2232, rt_str("an enumerated value expected by ", 32), l_NAME_2231);
}
if (r_IS_UNORDERED(l_T_2275))
{
r_FAILT(l_LINE_2232, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_2231);
}
if (r_TEQS(l_NAME_2231, rt_str("SUCC", 4)))
{
{ R28 rv2276 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_2274).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2275))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_2275))).f_BASE);
return rv2276; }
}
{ R28 rv2277 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_2274).f_C), ((*(R22 *)rt_nil_check(l_T_2275))).f_BASE);
return rv2277; }
}
}
else if (r_TEQS(l_NAME_2231, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R28 l_V_2278; memset(&l_V_2278, 0, sizeof l_V_2278);
S_R28(&l_V_2278, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_2279; memset(&l_K_2279, 0, sizeof l_K_2279);
l_K_2279 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2278).f_T)))).f_KIND;
R22 * l_T_2280; memset(&l_T_2280, 0, sizeof l_T_2280);
l_T_2280 = r_NEW_TYP(l_K_2279);
if (((!(l_K_2279 == g_T_STR)) && (!(l_K_2279 == g_T_BITS))))
{
r_FAIL(l_LINE_2232, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_2280))).f_BASE = ((*(R22 *)rt_nil_check((l_V_2278).f_T))).f_BASE;
{ R28 rv2281 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_2278).f_C, r_INT_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_2280);
return rv2281; }
}
}
else if (r_TEQS(l_NAME_2231, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R28 rv2282 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2282; }
}
else if (r_TEQS(l_NAME_2231, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R28 rv2283 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv2283; }
}
else if (((r_TEQS(l_NAME_2231, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_2231, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_2231, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R9 l_BITS_2284; memset(&l_BITS_2284, 0, sizeof l_BITS_2284);
S_R9(&l_BITS_2284, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_2231, rt_str("OCT_OF", 6)))
{
S_R9(&l_BITS_2284, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_2231, rt_str("HEX_OF", 6)))
{
S_R9(&l_BITS_2284, r_MK(rt_str("4", 1)), 0);
}
{
R28 l_V_2285; memset(&l_V_2285, 0, sizeof l_V_2285);
S_R28(&l_V_2285, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2285).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_2232, rt_str("a character string expected by ", 31), l_NAME_2231);
}
r_ASCII_ONLY((l_V_2285).f_T, r_STR(l_NAME_2231, (l_NAME_2231).f_LEN), l_LINE_2232);
{ R28 rv2286 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (l_V_2285).f_C, l_BITS_2284), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv2286; }
}
}
}
else if ((r_TEQS(l_NAME_2231, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_2231, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R25 l_S_2287; memset(&l_S_2287, 0, sizeof l_S_2287);
S_R25(&l_S_2287, r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_A, rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R25 l_R_2288; memset(&l_R_2288, 0, sizeof l_R_2288);
S_R25(&l_R_2288, r_MANIFEST_INTEGER_ARG(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
if ((!((l_R_2288).f_V == ((rt_int)2LL))))
{
r_FAIL(l_LINE_2232, rt_str("only radix 2 is predefined (3.2.6.3)", 36));
}
r_CHECK_PRECISION_ARG(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_2232);
if (r_TEQS(l_NAME_2231, rt_str("FIXED_MIN", 9)))
{
{ R28 rv2289 = r_MKET(r_STD_MIN_C(), r_INT_TYPE((l_S_2287).f_V));
return rv2289; }
}
{ R28 rv2290 = r_MKET(r_STD_MAX_C(), r_INT_TYPE((l_S_2287).f_V));
return rv2290; }
}
}
else if (((r_TEQS(l_NAME_2231, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_2231, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_2231, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R25 l_P_2291; memset(&l_P_2291, 0, sizeof l_P_2291);
S_R25(&l_P_2291, r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_T_2292; memset(&l_T_2292, 0, sizeof l_T_2292);
l_T_2292 = r_FLOAT_TYPE((l_P_2291).f_V);
if (r_TEQS(l_NAME_2231, rt_str("FLOAT_MIN", 9)))
{
{ R28 rv2293 = r_MKET(r_FLOAT_LIMIT(l_T_2292, r_MK(rt_str("MIN", 3))), l_T_2292);
return rv2293; }
}
else if (r_TEQS(l_NAME_2231, rt_str("FLOAT_MAX", 9)))
{
{ R28 rv2294 = r_MKET(r_FLOAT_LIMIT(l_T_2292, r_MK(rt_str("MAX", 3))), l_T_2292);
return rv2294; }
}
{ R28 rv2295 = r_MKET(r_FLOAT_LIMIT(l_T_2292, r_MK(rt_str("EPSILON", 7))), l_T_2292);
return rv2295; }
}
}
else if (r_TEQS(l_NAME_2231, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R28 rv2296 = r_INT_ET(r_IMP_PRECISION_OF((r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION())).f_V));
return rv2296; }
}
else if (r_TEQS(l_NAME_2231, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R28 rv2297 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2297; }
}
else if (r_TEQS(l_NAME_2231, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R28 rv2298 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2298; }
}
if (r_TEQS(l_NAME_2231, rt_str("RUN_PATHS", 9)))
{
{ R28 rv2299 = r_RUN_PATHS(p_E);
return rv2299; }
}
{ R28 rv2300 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv2300; }
rt_raise(RT_X_INIT);
}
static R28 r_IMAGE_OF(R28 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_2301; memset(&l_T_2301, 0, sizeof l_T_2301);
l_T_2301 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_2302; memset(&l_K_2302, 0, sizeof l_K_2302);
l_K_2302 = ((*(R22 *)rt_nil_check(l_T_2301))).f_KIND;
R22 * l_S_2303; memset(&l_S_2303, 0, sizeof l_S_2303);
l_S_2303 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_2302 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_2301))).f_SCALE == ((rt_int)0LL)))
{
{ R28 rv2304 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_2303);
return rv2304; }
}
{ R28 rv2305 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_2301))).f_SCALE)), l_S_2303);
return rv2305; }
}
else if (r_IS_D(l_T_2301))
{
{ R28 rv2306 = r_MKET(r_FMT2(rt_str("rt_b_d_image(@, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_2301))).f_SCALE)), l_S_2303);
return rv2306; }
}
else if ((l_K_2302 == g_T_FLOAT))
{
{ R28 rv2307 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_2301))).f_SCALE)), l_S_2303);
return rv2307; }
}
else if ((l_K_2302 == g_T_BOOL))
{
{ R28 rv2308 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_2303);
return rv2308; }
}
else if ((l_K_2302 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_2301))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R28 rv2309 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_2303);
return rv2309; }
}
{ R28 rv2310 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2301))).f_BASE))).f_CNAME, (p_V).f_C), l_S_2303);
return rv2310; }
}
else if (((l_K_2302 == g_T_STR) || (l_K_2302 == g_T_BITS)))
{
{ R28 rv2311 = r_MKET((p_V).f_C, l_S_2303);
return rv2311; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_2301));
rt_raise(RT_X_INIT);
}
static R28 r_TO_FIXED_CALL(R17 * p_E) { RT_B_TICK(); 
R28 l_V_2312; memset(&l_V_2312, 0, sizeof l_V_2312);
S_R28(&l_V_2312, r_EXPR(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_2313; memset(&l_T_2313, 0, sizeof l_T_2313);
l_T_2313 = r_REAL_TYPE((l_V_2312).f_T);
rt_int l_N_2314; memset(&l_N_2314, 0, sizeof l_N_2314);
l_N_2314 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A);
R9 l_RND_2315; memset(&l_RND_2315, 0, sizeof l_RND_2315);
S_R9(&l_RND_2315, r_ROUNDING_ARG(p_E, l_N_2314), 0);
rt_int l_S_2316; memset(&l_S_2316, 0, sizeof l_S_2316);
l_S_2316 = ((rt_int)0LL);
if (((l_N_2314 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
l_S_2316 = (r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL))).f_V;
}
{
rt_int l_K_2317; memset(&l_K_2317, 0, sizeof l_K_2317);
l_K_2317 = ((rt_int)2LL);
for (;;) {
if ((l_K_2317 >= l_N_2314)) goto L_end2318;
{
{
R17 * l_R_2319; memset(&l_R_2319, 0, sizeof l_R_2319);
l_R_2319 = r_ARG_EXPR(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, l_K_2317));
if ((r_IS_ROUNDING(l_R_2319) || (((((*(R17 *)rt_nil_check(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, l_K_2317)))).f_KIND == g_N_QUAL) && (l_K_2317 == rt_sub(l_N_2314, ((rt_int)1LL)))))))
{
if ((!(l_K_2317 == rt_sub(l_N_2314, ((rt_int)1LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the rounding mode is the last argument of TO_FIXED (3.2.6.1)", 60));
}
}
else if (((((((*(R17 *)rt_nil_check(l_R_2319))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_2319))).f_KIND == g_N_ENUMLIT))) && (!r_NAMES_OBJECT(((*(R17 *)rt_nil_check(l_R_2319))).f_NAME))))
{
r_CHECK_PRECISION_ARG(l_R_2319, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
else if (((((*(R17 *)rt_nil_check(l_R_2319))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(l_R_2319))).f_NAME, rt_str("PRECISION", 9))))
{
}
else
{
if ((!((r_MANIFEST_INTEGER_ARG(l_R_2319, rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL))).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 is predefined (3.2.6.1)", 36));
}
}
}
l_K_2317 = rt_add(l_K_2317, ((rt_int)1LL));
}
RT_B_TICK();
} L_end2318: ;
}
if (((((*(R22 *)rt_nil_check(l_T_2313))).f_KIND == g_T_INT) && (((((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) || (((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_INT)))))
{
{ R28 rv2320 = r_MKET(r_FMT3(rt_str("rt_b_fix_val(@, @, @)", 21), r_CSTRING(((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_NAME), r_NUM(l_S_2316), l_RND_2315), r_INT_TYPE(l_S_2316));
return rv2320; }
}
if ((((*(R22 *)rt_nil_check(l_T_2313))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_2321; memset(&l_SAVED_2321, 0, sizeof l_SAVED_2321);
l_SAVED_2321 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R9 l_C_2322; memset(&l_C_2322, 0, sizeof l_C_2322);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_2315, rt_str("1", 1));
S_R9(&l_C_2322, r_RESCALE_C((l_V_2312).f_C, ((*(R22 *)rt_nil_check(l_T_2313))).f_SCALE, l_S_2316), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_2321;
{ R28 rv2323 = r_MKET(l_C_2322, r_INT_TYPE(l_S_2316));
return rv2323; }
}
}
else if (r_IS_D(l_T_2313))
{
{ R28 rv2324 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_d(@, @, @)", 22), (l_V_2312).f_C, r_NUM(l_S_2316), l_RND_2315), r_INT_TYPE(l_S_2316));
return rv2324; }
}
else if ((((*(R22 *)rt_nil_check(l_T_2313))).f_KIND == g_T_FLOAT))
{
{ R28 rv2325 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_2312).f_C, r_NUM(l_S_2316), l_RND_2315), r_INT_TYPE(l_S_2316));
return rv2325; }
}
else if (((((*(R22 *)rt_nil_check(l_T_2313))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_2313))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_2313))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_2313))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_2313))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2313))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R28 rv2326 = r_MKET(r_RESCALE_C((l_V_2312).f_C, ((rt_int)0LL), l_S_2316), r_INT_TYPE(l_S_2316));
return rv2326; }
}
else if ((((*(R22 *)rt_nil_check(l_T_2313))).f_KIND == g_T_BITS))
{
{ R28 rv2327 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_2312).f_C), ((rt_int)0LL), l_S_2316), r_INT_TYPE(l_S_2316));
return rv2327; }
}
else if ((((*(R22 *)rt_nil_check(l_T_2313))).f_KIND == g_T_STR))
{
r_ASCII_ONLY(l_T_2313, rt_str("TO_FIXED", 8), ((*(R17 *)rt_nil_check(p_E))).f_LINE);
{ R28 rv2328 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_2312).f_C, r_NUM(l_S_2316), l_RND_2315), r_INT_TYPE(l_S_2316));
return rv2328; }
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_2312).f_T));
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_SIZE_OR(R22 * p_T) { RT_B_TICK(); 
R25 l_M_2329; memset(&l_M_2329, 0, sizeof l_M_2329);
S_R25(&l_M_2329, r_STATIC_SIZE(p_T), 0);
if ((l_M_2329).f_OK)
{
{ rt_int rv2330 = (l_M_2329).f_V;
return rv2330; }
}
{ rt_int rv2331 = rt_neg(((rt_int)1LL));
return rv2331; }
rt_raise(RT_X_INIT);
}
static R28 r_BITS_OF(R28 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_2332; memset(&l_T_2332, 0, sizeof l_T_2332);
l_T_2332 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_2333; memset(&l_K_2333, 0, sizeof l_K_2333);
l_K_2333 = ((*(R22 *)rt_nil_check(l_T_2332))).f_KIND;
if ((l_K_2333 == g_T_BITS))
{
{ R28 rv2334 = p_V;
return rv2334; }
}
else if ((l_K_2333 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_2332))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2332))).f_REPS))).f_B == NULL)))
{
{ R28 rv2335 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_2332)), r_BITS_TYPE(r_ENUM_SIZE(l_T_2332)));
return rv2335; }
}
}
{ R28 rv2336 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_2332))), r_BITS_TYPE(r_ENUM_SIZE(l_T_2332)));
return rv2336; }
}
else if ((l_K_2333 == g_T_STR))
{
{ R28 rv2337 = r_MKET(r_FMT4(rt_str("rt_b_bits_of_chars(@, @, @, @)", 30), (p_V).f_C, r_NUM(r_CHAR_SIZE(l_T_2332)), r_NUM(r_PACKING_OF(l_T_2332)), r_CHAR_REPS(l_T_2332)), r_BITS_TYPE(r_STATIC_SIZE_OR(l_T_2332)));
return rv2337; }
}
r_REQUIRE_MACHINE(p_LINE);
if (((l_K_2333 == g_T_INT) && (r_REP_BITS(l_T_2332) < ((rt_int)63LL))))
{
{ R28 rv2338 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_REP_BITS(l_T_2332))), r_BITS_TYPE(r_REP_BITS(l_T_2332)));
return rv2338; }
}
else if ((l_K_2333 == g_T_INT))
{
{ R28 rv2339 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(((*(R7 *)rt_nil_check(g_W))).f_WORD)), r_BITS_TYPE(((*(R7 *)rt_nil_check(g_W))).f_WORD));
return rv2339; }
}
else if ((l_K_2333 == g_T_BOOL))
{
{ R28 rv2340 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv2340; }
}
else if (r_IS_D(l_T_2332))
{
{ R28 rv2341 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_d(@)", 17), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv2341; }
}
else if (((l_K_2333 == g_T_FLOAT) && (((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL))))
{
{ R28 rv2342 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_f(@)", 17), (p_V).f_C), r_BITS_TYPE(((rt_int)32LL)));
return rv2342; }
}
else if (((l_K_2333 == g_T_FLOAT) && (r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_2332))).f_SCALE) == ((rt_int)7LL))))
{
{ R28 rv2343 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_single(@)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)32LL)));
return rv2343; }
}
else if ((l_K_2333 == g_T_FLOAT))
{
{ R28 rv2344 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv2344; }
}
else if ((l_K_2333 == g_T_PTR))
{
{ R28 rv2345 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(rt_b_ptr_addr(@), @)", 37), (p_V).f_C, r_NUM(((*(R7 *)rt_nil_check(g_W))).f_WORD)), r_BITS_TYPE(((*(R7 *)rt_nil_check(g_W))).f_WORD));
return rv2345; }
}
else if ((l_K_2333 == g_T_SEM))
{
{ R28 rv2346 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(rt_b_sem_count(@), @)", 38), (p_V).f_C, r_NUM(((*(R7 *)rt_nil_check(g_W))).f_WORD)), r_BITS_TYPE(((*(R7 *)rt_nil_check(g_W))).f_WORD));
return rv2346; }
}
else if ((l_K_2333 == g_T_REC))
{
{ R28 rv2347 = r_MKET(r_RECORD_BITS(l_T_2332, (p_V).f_C), r_BITS_TYPE(r_STATIC_SIZE_OR(l_T_2332)));
return rv2347; }
}
else if ((l_K_2333 == g_T_ARR))
{
{ R28 rv2348 = r_MKET(r_ARRAY_BITS(l_T_2332, (p_V).f_C), r_BITS_TYPE(r_STATIC_SIZE_OR(l_T_2332)));
return rv2348; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_2332));
rt_raise(RT_X_INIT);
}
static void r_TYPE_ARG(R29 * p_A) { RT_B_TICK(); 
if ((!((*(R29 *)rt_nil_check(p_A))).f_HAVE))
{
S_R28(&((*(R29 *)rt_nil_check(p_A))).f_V, r_EXPR(((*(R29 *)rt_nil_check(p_A))).f_E, NULL), 0);
((*(R29 *)rt_nil_check(p_A))).f_HAVE = 1;
}
}
static rt_int r_WANT_SENSITIVE(R29 * p_A) { RT_B_TICK(); 
if (((*(R29 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv2349 = 0;
return rv2349; }
}
{ rt_int rv2350 = ((r_IS_LITERALISH(((*(R29 *)rt_nil_check(p_A))).f_E) || (((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv2350; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R29 * p_A) { RT_B_TICK(); 
rt_int l_N_2351; memset(&l_N_2351, 0, sizeof l_N_2351);
l_N_2351 = ((rt_int)0LL);
R29 * l_P_2352; memset(&l_P_2352, 0, sizeof l_P_2352);
l_P_2352 = p_A;
for (;;) {
if ((l_P_2352 == NULL)) goto L_end2353;
{
l_N_2351 = rt_add(l_N_2351, ((rt_int)1LL));
l_P_2352 = ((*(R29 *)rt_nil_check(l_P_2352))).f_NEXT;
}
RT_B_TICK();
} L_end2353: ;
{ rt_int rv2354 = l_N_2351;
return rv2354; }
rt_raise(RT_X_INIT);
}
static R29 * r_CALL_ARGS(R17 * p_E) { RT_B_TICK(); 
R29 * l_HEAD_2355; memset(&l_HEAD_2355, 0, sizeof l_HEAD_2355);
l_HEAD_2355 = NULL;
R29 * l_TAIL_2356; memset(&l_TAIL_2356, 0, sizeof l_TAIL_2356);
l_TAIL_2356 = NULL;
rt_int l_G_2357; memset(&l_G_2357, 0, sizeof l_G_2357);
l_G_2357 = ((rt_int)0LL);
{ rt_int it2359_lo = ((rt_int)0LL), it2359_hi = ((rt_int)2LL);
for (rt_int it2359 = it2359_lo; it2359 <= it2359_hi; it2359++) {
{
{
R17 * l_P_2360; memset(&l_P_2360, 0, sizeof l_P_2360);
l_P_2360 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((it2359 == ((rt_int)1LL)))
{
l_P_2360 = ((*(R17 *)rt_nil_check(p_E))).f_B;
}
else if ((it2359 == ((rt_int)2LL)))
{
l_P_2360 = ((*(R17 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_2360 == NULL)) goto L_end2361;
{
{
R29 * l_A_2362; memset(&l_A_2362, 0, sizeof l_A_2362);
l_A_2362 = r_NODE_ARG(l_P_2360, it2359, NULL);
if ((l_TAIL_2356 == NULL))
{
l_HEAD_2355 = l_A_2362;
}
else
{
((*(R29 *)rt_nil_check(l_TAIL_2356))).f_NEXT = l_A_2362;
}
l_TAIL_2356 = l_A_2362;
}
l_P_2360 = ((*(R17 *)rt_nil_check(l_P_2360))).f_NEXT;
}
RT_B_TICK();
} L_end2361: ;
}
}
RT_B_TICK();
if (it2359 == it2359_hi) break;
} } L_end2358: ;
{ R29 * rv2363 = l_HEAD_2355;
return rv2363; }
rt_raise(RT_X_INIT);
}
static R28 r_CALL_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SAVED_2364; memset(&l_SAVED_2364, 0, sizeof l_SAVED_2364);
l_SAVED_2364 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_2365; memset(&l_SAVED_Q_2365, 0, sizeof l_SAVED_Q_2365);
l_SAVED_Q_2365 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R28 l_V_2366; memset(&l_V_2366, 0, sizeof l_V_2366);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R28(&l_V_2366, r_CALL_EXPR1(p_E, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_2364;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_2365;
{ R28 rv2367 = l_V_2366;
return rv2367; }
rt_raise(RT_X_INIT);
}
static R28 r_CALL_EXPR1(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R29 * l_ARGS_2368; memset(&l_ARGS_2368, 0, sizeof l_ARGS_2368);
l_ARGS_2368 = r_CALL_ARGS(p_E);
R12 * l_Y_2369; memset(&l_Y_2369, 0, sizeof l_Y_2369);
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
{ R28 rv2370 = r_START_IO_CALL(p_E);
return rv2370; }
}
l_Y_2369 = r_BOUND_ROUTINE(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2369 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2369))).f_KIND == g_Y_BUILTIN))
{
{
R17 * l_N_2371; memset(&l_N_2371, 0, sizeof l_N_2371);
l_N_2371 = r_COPY_NODE(p_E);
S_R9(&((*(R17 *)rt_nil_check(l_N_2371))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2369))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2371))).f_NEXT = ((*(R17 *)rt_nil_check(p_E))).f_NEXT;
{ R28 rv2372 = r_BUILTIN(l_N_2371, p_WANT);
return rv2372; }
}
}
{ R28 rv2373 = r_CALL_SYM(l_Y_2369, l_ARGS_2368, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv2373; }
}
{
R9 l_SHORT_2374; memset(&l_SHORT_2374, 0, sizeof l_SHORT_2374);
S_R9(&l_SHORT_2374, r_WHERE_SHORT_NAME(((*(R17 *)rt_nil_check(p_E))).f_NAME), 0);
if ((!r_TEQ(l_SHORT_2374, ((*(R17 *)rt_nil_check(p_E))).f_NAME)))
{
{
R17 * l_N_2375; memset(&l_N_2375, 0, sizeof l_N_2375);
l_N_2375 = r_COPY_NODE(p_E);
S_R9(&((*(R17 *)rt_nil_check(l_N_2375))).f_NAME, l_SHORT_2374, 0);
((*(R17 *)rt_nil_check(l_N_2375))).f_NEXT = ((*(R17 *)rt_nil_check(p_E))).f_NEXT;
{ R28 rv2376 = r_CALL_EXPR1(l_N_2375, p_WANT);
return rv2376; }
}
}
}
l_Y_2369 = r_FIND_ROUTINE(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2368, ((*(R17 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_2369 == NULL))
{
{
R12 * l_P_2377; memset(&l_P_2377, 0, sizeof l_P_2377);
l_P_2377 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_2377 == NULL)) goto L_end2378;
{
if ((((*(R12 *)rt_nil_check(l_P_2377))).f_KIND == g_Y_BUILTIN))
{
{ R28 rv2379 = r_BUILTIN(p_E, p_WANT);
return rv2379; }
}
l_P_2377 = r_LOOKUP_NEXT(l_P_2377);
}
RT_B_TICK();
} L_end2378: ;
}
{
R12 * l_B_2380; memset(&l_B_2380, 0, sizeof l_B_2380);
l_B_2380 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_2380 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_2380))).f_KIND == g_Y_BUILTIN))
{
{ R28 rv2381 = r_BUILTIN(p_E, p_WANT);
return rv2381; }
}
if (((((*(R12 *)rt_nil_check(l_B_2380))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_2380))).f_ORIG == NULL))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
}
{
R9 l_BASE_2382; memset(&l_BASE_2382, 0, sizeof l_BASE_2382);
S_R9(&l_BASE_2382, r_CLASS_OPERATION(((*(R17 *)rt_nil_check(p_E))).f_NAME), 0);
if (((l_BASE_2382).f_LEN > ((rt_int)0LL)))
{
{
R17 * l_N_2383; memset(&l_N_2383, 0, sizeof l_N_2383);
l_N_2383 = r_COPY_NODE(p_E);
S_R9(&((*(R17 *)rt_nil_check(l_N_2383))).f_NAME, l_BASE_2382, 0);
{ R28 rv2384 = r_BUILTIN(l_N_2383, p_WANT);
return rv2384; }
}
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
{ R28 rv2385 = r_CALL_SYM(l_Y_2369, l_ARGS_2368, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv2385; }
rt_raise(RT_X_INIT);
}
static R9 r_CLASS_OPERATION(R9 p_NAME) { RT_B_TICK(); 
rstr l_S_2386; memset(&l_S_2386, 0, sizeof l_S_2386);
l_S_2386 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2386, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2388_lo = ((rt_int)1LL), it2388_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2388 = it2388_lo; it2388 <= it2388_hi; it2388++) {
{
if (rt_b_eq(rt_b_slice(l_S_2386, it2388, it2388), rt_str("$", 1)))
{
{
R9 l_P_2389; memset(&l_P_2389, 0, sizeof l_P_2389);
S_R9(&l_P_2389, r_MKN(rt_b_slice(l_S_2386, ((rt_int)0LL), rt_sub(it2388, ((rt_int)1LL)))), 0);
R9 l_B_2390; memset(&l_B_2390, 0, sizeof l_B_2390);
S_R9(&l_B_2390, r_MKN(rt_b_slice(l_S_2386, rt_add(it2388, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))), 0);
if ((((((((r_IS_TYPE_WORD(l_P_2389) || r_TEQS(l_P_2389, rt_str("INTEGER", 7))) || r_TEQS(l_P_2389, rt_str("BOOLEAN", 7))) || r_TEQS(l_P_2389, rt_str("ENUM", 4))) || r_TEQS(l_P_2389, rt_str("ARRAY", 5))) || r_TEQS(l_P_2389, rt_str("RECORD", 6))) || r_TEQS(l_P_2389, rt_str("PTR", 3))) || r_TEQS(l_P_2389, rt_str("SEMAPHORE", 9))))
{
{
R12 * l_Y_2391; memset(&l_Y_2391, 0, sizeof l_Y_2391);
l_Y_2391 = r_LOOKUP(l_B_2390);
for (;;) {
if ((l_Y_2391 == NULL)) goto L_end2392;
{
if ((((*(R12 *)rt_nil_check(l_Y_2391))).f_KIND == g_Y_BUILTIN))
{
{ R9 rv2393 = l_B_2390;
return rv2393; }
}
l_Y_2391 = r_LOOKUP_NEXT(l_Y_2391);
}
RT_B_TICK();
} L_end2392: ;
}
}
}
{ R9 rv2394 = r_NO_TEXT();
return rv2394; }
}
}
RT_B_TICK();
if (it2388 == it2388_hi) break;
} } L_end2387: ;
{ R9 rv2395 = r_NO_TEXT();
return rv2395; }
rt_raise(RT_X_INIT);
}
static R9 r_WHERE_SHORT_NAME(R9 p_NAME) { RT_B_TICK(); 
R12 * l_G_2396; memset(&l_G_2396, 0, sizeof l_G_2396);
l_G_2396 = r_CUR_GENERIC();
rstr l_S_2397; memset(&l_S_2397, 0, sizeof l_S_2397);
l_S_2397 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2397, r_STR(p_NAME, (p_NAME).f_LEN));
if ((l_G_2396 == NULL))
{
{ R9 rv2398 = p_NAME;
return rv2398; }
}
{ rt_int it2400_lo = ((rt_int)1LL), it2400_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2400 = it2400_lo; it2400 <= it2400_hi; it2400++) {
{
if (rt_b_eq(rt_b_slice(l_S_2397, it2400, it2400), rt_str("$", 1)))
{
if (((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_G_2396))).f_BINDINGS, r_MKN(rt_b_slice(l_S_2397, ((rt_int)0LL), rt_sub(it2400, ((rt_int)1LL))))) == NULL)) && r_IN_WHERE(l_G_2396, r_MKN(rt_b_slice(l_S_2397, rt_add(it2400, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))))))
{
{ R9 rv2401 = r_MKN(rt_b_slice(l_S_2397, rt_add(it2400, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))));
return rv2401; }
}
{ R9 rv2402 = p_NAME;
return rv2402; }
}
}
RT_B_TICK();
if (it2400 == it2400_hi) break;
} } L_end2399: ;
{ R9 rv2403 = p_NAME;
return rv2403; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R9 p_NAME) { RT_B_TICK(); 
R21 * l_B_2404; memset(&l_B_2404, 0, sizeof l_B_2404);
l_B_2404 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_2405; memset(&l_S_2405, 0, sizeof l_S_2405);
l_S_2405 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2405, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2407_lo = ((rt_int)1LL), it2407_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2407 = it2407_lo; it2407 <= it2407_hi; it2407++) {
{
if (rt_b_eq(rt_b_slice(l_S_2405, it2407, it2407), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_2405, ((rt_int)0LL), rt_sub(it2407, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv2408 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_2405, rt_add(it2407, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv2408; }
}
goto L_end2406;
}
}
RT_B_TICK();
if (it2407 == it2407_hi) break;
} } L_end2406: ;
}
for (;;) {
if ((l_B_2404 == NULL)) goto L_end2409;
{
if (((!(((*(R21 *)rt_nil_check(l_B_2404))).f_R == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_B_2404))).f_NAME, p_NAME)))
{
{ R12 * rv2410 = ((*(R21 *)rt_nil_check(l_B_2404))).f_R;
return rv2410; }
}
l_B_2404 = ((*(R21 *)rt_nil_check(l_B_2404))).f_NEXT;
}
RT_B_TICK();
} L_end2409: ;
{ R12 * rv2411 = NULL;
return rv2411; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R9 p_NAME) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv2412 = 0;
return rv2412; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv2413 = 0;
return rv2413; }
}
}
}
{ rt_int rv2414 = 1;
return rv2414; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R9 p_NAME, R29 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { RT_B_TICK(); 
R12 * l_Y_2415; memset(&l_Y_2415, 0, sizeof l_Y_2415);
l_Y_2415 = r_LOOKUP(p_NAME);
R12 * l_BEST_2416; memset(&l_BEST_2416, 0, sizeof l_BEST_2416);
l_BEST_2416 = NULL;
rt_int l_BEST_SCORE_2417; memset(&l_BEST_SCORE_2417, 0, sizeof l_BEST_SCORE_2417);
l_BEST_SCORE_2417 = ((rt_int)0LL);
rt_int l_TIES_2418; memset(&l_TIES_2418, 0, sizeof l_TIES_2418);
l_TIES_2418 = ((rt_int)0LL);
rt_int l_COUNT_2419; memset(&l_COUNT_2419, 0, sizeof l_COUNT_2419);
l_COUNT_2419 = ((rt_int)0LL);
rt_int l_N_2420; memset(&l_N_2420, 0, sizeof l_N_2420);
l_N_2420 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_2415 == NULL)) goto L_end2421;
{
if ((!r_IS_ROUTINE(l_Y_2415)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2415))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end2421;
}
}
else if (r_CANDIDATE(l_Y_2415, p_NAME))
{
{
R12 * l_R_2422; memset(&l_R_2422, 0, sizeof l_R_2422);
l_R_2422 = r_ORIGINAL(l_Y_2415);
rt_int l_SCORE_2423; memset(&l_SCORE_2423, 0, sizeof l_SCORE_2423);
r_ROUTINE_HEADER(l_R_2422);
if ((((r_PARAM_COUNT(l_R_2422) == l_N_2420) && (!r_SEEN_ROUTINE(l_R_2422, p_NAME, l_Y_2415))) && (!r_HIDDEN_ROUTINE(l_R_2422, p_NAME, l_Y_2415))))
{
l_COUNT_2419 = rt_add(l_COUNT_2419, ((rt_int)1LL));
l_SCORE_2423 = r_MATCH_SCORE(l_R_2422, p_ARGS);
if ((l_SCORE_2423 > l_BEST_SCORE_2417))
{
l_BEST_2416 = l_R_2422;
l_BEST_SCORE_2417 = l_SCORE_2423;
l_TIES_2418 = ((rt_int)0LL);
}
else if (((l_SCORE_2423 == l_BEST_SCORE_2417) && (l_SCORE_2423 > ((rt_int)0LL))))
{
l_TIES_2418 = rt_add(l_TIES_2418, ((rt_int)1LL));
}
}
}
}
l_Y_2415 = r_LOOKUP_NEXT(l_Y_2415);
}
RT_B_TICK();
} L_end2421: ;
if (((l_TIES_2418 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv2424 = l_BEST_2416;
return rv2424; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R9 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2425; memset(&l_Y_2425, 0, sizeof l_Y_2425);
l_Y_2425 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2425 == p_STOP) || (l_Y_2425 == NULL))) goto L_end2426;
{
if ((((*(R12 *)rt_nil_check(l_Y_2425))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_2425) == p_R))
{
{ rt_int rv2427 = 1;
return rv2427; }
}
}
l_Y_2425 = r_LOOKUP_NEXT(l_Y_2425);
}
RT_B_TICK();
} L_end2426: ;
{ rt_int rv2428 = 0;
return rv2428; }
rt_raise(RT_X_INIT);
}
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R9 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2429; memset(&l_Y_2429, 0, sizeof l_Y_2429);
l_Y_2429 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2429 == p_STOP) || (l_Y_2429 == NULL))) goto L_end2430;
{
if (((((*(R12 *)rt_nil_check(l_Y_2429))).f_KIND == g_Y_ROUTINE) && (((*(R12 *)rt_nil_check(l_Y_2429))).f_DEPTH > ((*(R12 *)rt_nil_check(p_STOP))).f_DEPTH)))
{
{
R12 * l_O_2431; memset(&l_O_2431, 0, sizeof l_O_2431);
l_O_2431 = r_ORIGINAL(l_Y_2429);
if ((!(l_O_2431 == p_R)))
{
r_ROUTINE_HEADER(l_O_2431);
if (r_SAME_SIGNATURE(l_O_2431, p_R))
{
{ rt_int rv2432 = 1;
return rv2432; }
}
}
}
}
l_Y_2429 = r_LOOKUP_NEXT(l_Y_2429);
}
RT_B_TICK();
} L_end2430: ;
{ rt_int rv2433 = 0;
return rv2433; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B) { RT_B_TICK(); 
R30 * l_P_2434; memset(&l_P_2434, 0, sizeof l_P_2434);
l_P_2434 = ((*(R12 *)rt_nil_check(p_A))).f_PARAMS;
R30 * l_Q_2435; memset(&l_Q_2435, 0, sizeof l_Q_2435);
l_Q_2435 = ((*(R12 *)rt_nil_check(p_B))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_A))).f_GENERIC || ((*(R12 *)rt_nil_check(p_B))).f_GENERIC))
{
{ rt_int rv2436 = 0;
return rv2436; }
}
for (;;) {
if (((l_P_2434 == NULL) || (l_Q_2435 == NULL))) goto L_end2437;
{
if ((!(((*(R30 *)rt_nil_check(l_P_2434))).f_MODE == ((*(R30 *)rt_nil_check(l_Q_2435))).f_MODE)))
{
{ rt_int rv2438 = 0;
return rv2438; }
}
if (((((*(R30 *)rt_nil_check(l_P_2434))).f_T == NULL) || (((*(R30 *)rt_nil_check(l_Q_2435))).f_T == NULL)))
{
if ((!(((*(R30 *)rt_nil_check(l_P_2434))).f_T == ((*(R30 *)rt_nil_check(l_Q_2435))).f_T)))
{
{ rt_int rv2439 = 0;
return rv2439; }
}
}
else if ((!r_SAME_TYPE(((*(R30 *)rt_nil_check(l_P_2434))).f_T, ((*(R30 *)rt_nil_check(l_Q_2435))).f_T)))
{
{ rt_int rv2440 = 0;
return rv2440; }
}
l_P_2434 = ((*(R30 *)rt_nil_check(l_P_2434))).f_NEXT;
l_Q_2435 = ((*(R30 *)rt_nil_check(l_Q_2435))).f_NEXT;
}
RT_B_TICK();
} L_end2437: ;
{ rt_int rv2441 = ((l_P_2434 == NULL) && (l_Q_2435 == NULL));
return rv2441; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { RT_B_TICK(); 
rt_int l_N_2442; memset(&l_N_2442, 0, sizeof l_N_2442);
l_N_2442 = ((rt_int)0LL);
R30 * l_P_2443; memset(&l_P_2443, 0, sizeof l_P_2443);
l_P_2443 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_2443 == NULL)) goto L_end2444;
{
l_N_2442 = rt_add(l_N_2442, ((rt_int)1LL));
l_P_2443 = ((*(R30 *)rt_nil_check(l_P_2443))).f_NEXT;
}
RT_B_TICK();
} L_end2444: ;
{ rt_int rv2445 = l_N_2442;
return rv2445; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R29 * p_ARGS) { RT_B_TICK(); 
R30 * l_P_2446; memset(&l_P_2446, 0, sizeof l_P_2446);
l_P_2446 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R29 * l_A_2447; memset(&l_A_2447, 0, sizeof l_A_2447);
l_A_2447 = p_ARGS;
rt_int l_EXACT_2448; memset(&l_EXACT_2448, 0, sizeof l_EXACT_2448);
l_EXACT_2448 = 1;
R21 * l_BS_2449; memset(&l_BS_2449, 0, sizeof l_BS_2449);
l_BS_2449 = r_NEW_BINDS();
R22 * l_PT_2450; memset(&l_PT_2450, 0, sizeof l_PT_2450);
for (;;) {
if ((l_P_2446 == NULL)) goto L_end2451;
{
l_PT_2450 = r_FORMAL_VIEW(p_R, l_P_2446);
if ((!(((*(R30 *)rt_nil_check(l_P_2446))).f_MODE == ((*(R29 *)rt_nil_check(l_A_2447))).f_MODE)))
{
{ rt_int rv2452 = ((rt_int)0LL);
return rv2452; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R30 *)rt_nil_check(l_P_2446))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_2446, l_A_2447, l_BS_2449)))
{
{ rt_int rv2453 = ((rt_int)0LL);
return rv2453; }
}
}
else if ((l_PT_2450 == NULL))
{
if (((*(R29 *)rt_nil_check(l_A_2447))).f_HAVE)
{
if ((!((((*(R29 *)rt_nil_check(l_A_2447))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv2454 = ((rt_int)0LL);
return rv2454; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_2447))
{
if ((!r_LITERAL_FITS(((*(R29 *)rt_nil_check(l_A_2447))).f_E, l_PT_2450)))
{
{ rt_int rv2455 = ((rt_int)0LL);
return rv2455; }
}
}
else
{
r_TYPE_ARG(l_A_2447);
{
R22 * l_AT_2456; memset(&l_AT_2456, 0, sizeof l_AT_2456);
l_AT_2456 = (((*(R29 *)rt_nil_check(l_A_2447))).f_V).f_T;
if ((!((r_SAME_CLASS(l_PT_2450, l_AT_2456) || (((((*(R22 *)rt_nil_check(l_AT_2456))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2450)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv2457 = ((rt_int)0LL);
return rv2457; }
}
if ((((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2450)))).f_GEN).f_LEN > ((rt_int)0LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2456)))).f_MLEN).f_OK))
{
{
R9 l_KEY_2458; memset(&l_KEY_2458, 0, sizeof l_KEY_2458);
S_R9(&l_KEY_2458, r_QMKN(rt_str("%", 1), ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2450)))).f_GEN), 0);
R21 * l_B_2459; memset(&l_B_2459, 0, sizeof l_B_2459);
l_B_2459 = r_FIND_BIND(((*(R21 *)rt_nil_check(l_BS_2449))).f_NEXT, l_KEY_2458);
if ((!(l_B_2459 == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(l_B_2459))).f_MV == (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2456)))).f_MLEN).f_V)))
{
{ rt_int rv2460 = ((rt_int)0LL);
return rv2460; }
}
}
else
{
r_ADD_BIND(l_KEY_2458, NULL, ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2456)))).f_MLEN, NULL, l_BS_2449);
}
}
}
if ((!r_SAME_TYPE(l_PT_2450, l_AT_2456)))
{
if ((((*(R30 *)rt_nil_check(l_P_2446))).f_MODE == g_M_INOUT))
{
{ rt_int rv2461 = ((rt_int)0LL);
return rv2461; }
}
l_EXACT_2448 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2456)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2450)))).f_KIND == g_T_INT)))
{
if (((((*(R30 *)rt_nil_check(l_P_2446))).f_MODE == g_M_IN) && (((*(R22 *)rt_nil_check(l_AT_2456))).f_SCALE > ((*(R22 *)rt_nil_check(l_PT_2450))).f_SCALE)))
{
{ rt_int rv2462 = ((rt_int)0LL);
return rv2462; }
}
else if (((((*(R30 *)rt_nil_check(l_P_2446))).f_MODE == g_M_OUT) && (((*(R22 *)rt_nil_check(l_PT_2450))).f_SCALE > ((*(R22 *)rt_nil_check(l_AT_2456))).f_SCALE)))
{
{ rt_int rv2463 = ((rt_int)0LL);
return rv2463; }
}
}
}
}
l_P_2446 = ((*(R30 *)rt_nil_check(l_P_2446))).f_NEXT;
l_A_2447 = ((*(R29 *)rt_nil_check(l_A_2447))).f_NEXT;
}
RT_B_TICK();
} L_end2451: ;
if (l_EXACT_2448)
{
{ rt_int rv2464 = ((rt_int)2LL);
return rv2464; }
}
{ rt_int rv2465 = ((rt_int)1LL);
return rv2465; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R17 * p_E, R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_2466; memset(&l_RT_2466, 0, sizeof l_RT_2466);
l_RT_2466 = r_REAL_TYPE(p_T);
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_2466))).f_KIND == g_T_ENUM))
{
{ rt_int rv2467 = (!(r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_RT_2466) == NULL));
return rv2467; }
}
{ rt_int rv2468 = 0;
return rv2468; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv2469 = (((*(R22 *)rt_nil_check(l_RT_2466))).f_KIND == g_T_PTR);
return rv2469; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv2470 = (((*(R22 *)rt_nil_check(l_RT_2466))).f_KIND == g_T_REC);
return rv2470; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv2471 = (((*(R22 *)rt_nil_check(l_RT_2466))).f_KIND == g_T_ARR);
return rv2471; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv2472 = (((*(R22 *)rt_nil_check(l_RT_2466))).f_KIND == g_T_INT);
return rv2472; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv2473 = ((((*(R22 *)rt_nil_check(l_RT_2466))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_2466))).f_KIND == g_T_SEM));
return rv2473; }
}
{ rt_int rv2474 = 0;
return rv2474; }
rt_raise(RT_X_INIT);
}
static R12 * r_ARG_ROOT(R17 * p_E) { RT_B_TICK(); 
R17 * l_N_2475; memset(&l_N_2475, 0, sizeof l_N_2475);
l_N_2475 = p_E;
for (;;) {
if ((l_N_2475 == NULL)) goto L_end2476;
{
if (((((*(R17 *)rt_nil_check(l_N_2475))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_N_2475))).f_KIND == g_N_APPLY)))
{
{
R12 * l_Y_2477; memset(&l_Y_2477, 0, sizeof l_Y_2477);
l_Y_2477 = r_LOOKUP(((*(R17 *)rt_nil_check(l_N_2475))).f_NAME);
if ((l_Y_2477 == NULL))
{
{ R12 * rv2478 = NULL;
return rv2478; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2477))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2479 = NULL;
return rv2479; }
}
{ R12 * rv2480 = l_Y_2477;
return rv2480; }
}
}
else if (((((((*(R17 *)rt_nil_check(l_N_2475))).f_KIND == g_N_INDEX) || (((*(R17 *)rt_nil_check(l_N_2475))).f_KIND == g_N_FIELD)) || (((*(R17 *)rt_nil_check(l_N_2475))).f_KIND == g_N_SUBSTR)) || (((*(R17 *)rt_nil_check(l_N_2475))).f_KIND == g_N_PAREN)))
{
l_N_2475 = ((*(R17 *)rt_nil_check(l_N_2475))).f_A;
}
else
{
{ R12 * rv2481 = NULL;
return rv2481; }
}
}
RT_B_TICK();
} L_end2476: ;
{ R12 * rv2482 = NULL;
return rv2482; }
rt_raise(RT_X_INIT);
}
static R17 * r_PATH_OF(R17 * p_E) { RT_B_TICK(); 
R17 * l_N_2483; memset(&l_N_2483, 0, sizeof l_N_2483);
l_N_2483 = p_E;
R17 * l_P_2484; memset(&l_P_2484, 0, sizeof l_P_2484);
l_P_2484 = NULL;
for (;;) {
if ((l_N_2483 == NULL)) goto L_end2485;
{
if ((((*(R17 *)rt_nil_check(l_N_2483))).f_KIND == g_N_FIELD))
{
l_P_2484 = r_NAME_REF(((*(R17 *)rt_nil_check(l_N_2483))).f_NAME, ((rt_int)0LL), NULL, l_P_2484);
l_N_2483 = ((*(R17 *)rt_nil_check(l_N_2483))).f_A;
}
else if (((((*(R17 *)rt_nil_check(l_N_2483))).f_KIND == g_N_INDEX) || (((*(R17 *)rt_nil_check(l_N_2483))).f_KIND == g_N_SUBSTR)))
{
l_P_2484 = r_NAME_REF(r_MKN(rt_str("*", 1)), ((rt_int)0LL), NULL, l_P_2484);
l_N_2483 = ((*(R17 *)rt_nil_check(l_N_2483))).f_A;
}
else if ((((*(R17 *)rt_nil_check(l_N_2483))).f_KIND == g_N_APPLY))
{
l_P_2484 = r_NAME_REF(r_MKN(rt_str("*", 1)), ((rt_int)0LL), NULL, l_P_2484);
{ R17 * rv2486 = l_P_2484;
return rv2486; }
}
else if ((((*(R17 *)rt_nil_check(l_N_2483))).f_KIND == g_N_PAREN))
{
l_N_2483 = ((*(R17 *)rt_nil_check(l_N_2483))).f_A;
}
else
{
{ R17 * rv2487 = l_P_2484;
return rv2487; }
}
}
RT_B_TICK();
} L_end2485: ;
{ R17 * rv2488 = l_P_2484;
return rv2488; }
rt_raise(RT_X_INIT);
}
static rt_int r_DISJOINT_PATHS(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_P_2489; memset(&l_P_2489, 0, sizeof l_P_2489);
l_P_2489 = p_A;
R17 * l_Q_2490; memset(&l_Q_2490, 0, sizeof l_Q_2490);
l_Q_2490 = p_B;
for (;;) {
if (((l_P_2489 == NULL) || (l_Q_2490 == NULL))) goto L_end2491;
{
if ((((!r_TEQS(((*(R17 *)rt_nil_check(l_P_2489))).f_NAME, rt_str("*", 1))) && (!r_TEQS(((*(R17 *)rt_nil_check(l_Q_2490))).f_NAME, rt_str("*", 1)))) && (!r_TEQ(((*(R17 *)rt_nil_check(l_P_2489))).f_NAME, ((*(R17 *)rt_nil_check(l_Q_2490))).f_NAME))))
{
{ rt_int rv2492 = 1;
return rv2492; }
}
l_P_2489 = ((*(R17 *)rt_nil_check(l_P_2489))).f_NEXT;
l_Q_2490 = ((*(R17 *)rt_nil_check(l_Q_2490))).f_NEXT;
}
RT_B_TICK();
} L_end2491: ;
{ rt_int rv2493 = 0;
return rv2493; }
rt_raise(RT_X_INIT);
}
static void r_EXPLICIT_GENERIC_ARGS(R12 * p_Y, R29 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_USED_2494; memset(&l_USED_2494, 0, sizeof l_USED_2494);
l_USED_2494 = NULL;
R30 * l_P_2495; memset(&l_P_2495, 0, sizeof l_P_2495);
l_P_2495 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
R29 * l_A_2496; memset(&l_A_2496, 0, sizeof l_A_2496);
l_A_2496 = p_ARGS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_DECL == NULL))
{
return;
}
if (((!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_B == NULL)))
{
return;
}
r_NAMES_IN(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_B, &l_USED_2494);
for (;;) {
if (((l_P_2495 == NULL) || (l_A_2496 == NULL))) goto L_end2497;
{
if ((((((*(R30 *)rt_nil_check(l_P_2495))).f_MODE == g_M_IN) && r_IN_IDENTS(l_USED_2494, ((*(R30 *)rt_nil_check(l_P_2495))).f_NAME)) && (!(((*(R29 *)rt_nil_check(l_A_2496))).f_E == NULL))))
{
if ((!r_CONSTANT_EXPR(((*(R29 *)rt_nil_check(l_A_2496))).f_E)))
{
r_FAILT(p_LINE, rt_str("the argument of an explicit generic parameter is a constant or a constant expression (5): ", 90), ((*(R30 *)rt_nil_check(l_P_2495))).f_NAME);
}
}
l_P_2495 = ((*(R30 *)rt_nil_check(l_P_2495))).f_NEXT;
l_A_2496 = ((*(R29 *)rt_nil_check(l_A_2496))).f_NEXT;
}
RT_B_TICK();
} L_end2497: ;
}
static void r_NAMES_IN(R17 * p_L, R17 * *p_HEAD) { RT_B_TICK(); 
R17 * l_N_2498; memset(&l_N_2498, 0, sizeof l_N_2498);
l_N_2498 = p_L;
for (;;) {
if ((l_N_2498 == NULL)) goto L_end2499;
{
if (((((*(R17 *)rt_nil_check(l_N_2498))).f_KIND == g_N_NAME) || (((((*(R17 *)rt_nil_check(l_N_2498))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(l_N_2498))).f_A == NULL)))))
{
(*p_HEAD) = r_NAME_REF(((*(R17 *)rt_nil_check(l_N_2498))).f_NAME, ((rt_int)0LL), NULL, (*p_HEAD));
}
r_NAMES_IN(((*(R17 *)rt_nil_check(l_N_2498))).f_A, &(*p_HEAD));
r_NAMES_IN(((*(R17 *)rt_nil_check(l_N_2498))).f_B, &(*p_HEAD));
r_NAMES_IN(((*(R17 *)rt_nil_check(l_N_2498))).f_C, &(*p_HEAD));
l_N_2498 = ((*(R17 *)rt_nil_check(l_N_2498))).f_NEXT;
}
RT_B_TICK();
} L_end2499: ;
}
static rt_int r_CONSTANT_EXPR(R17 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv2500 = 1;
return rv2500; }
}
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY)))
{
{
R12 * l_Y_2501; memset(&l_Y_2501, 0, sizeof l_Y_2501);
l_Y_2501 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2501 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2501))).f_KIND == g_Y_ROUTINE))
{
if ((!(((*(R12 *)rt_nil_check(r_ORIGINAL(l_Y_2501)))).f_USES == NULL)))
{
{ rt_int rv2502 = 0;
return rv2502; }
}
}
if (((((*(R12 *)rt_nil_check(l_Y_2501))).f_KIND == g_Y_VAR) && (!((*(R12 *)rt_nil_check(l_Y_2501))).f_INPUT)))
{
{ rt_int rv2503 = 0;
return rv2503; }
}
}
}
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_DEREF))
{
{ rt_int rv2504 = 0;
return rv2504; }
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD))
{
{ rt_int rv2505 = r_CONSTANT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A);
return rv2505; }
}
{ rt_int rv2506 = ((r_CONSTANT_LIST(((*(R17 *)rt_nil_check(p_E))).f_A) && r_CONSTANT_LIST(((*(R17 *)rt_nil_check(p_E))).f_B)) && r_CONSTANT_LIST(((*(R17 *)rt_nil_check(p_E))).f_C));
return rv2506; }
rt_raise(RT_X_INIT);
}
static rt_int r_CONSTANT_LIST(R17 * p_L) { RT_B_TICK(); 
R17 * l_N_2507; memset(&l_N_2507, 0, sizeof l_N_2507);
l_N_2507 = p_L;
for (;;) {
if ((l_N_2507 == NULL)) goto L_end2508;
{
if ((!r_CONSTANT_EXPR(l_N_2507)))
{
{ rt_int rv2509 = 0;
return rv2509; }
}
l_N_2507 = ((*(R17 *)rt_nil_check(l_N_2507))).f_NEXT;
}
RT_B_TICK();
} L_end2508: ;
{ rt_int rv2510 = 1;
return rv2510; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKED_ELEMENT(R17 * p_E) { RT_B_TICK(); 
R22 * l_AT_2511; memset(&l_AT_2511, 0, sizeof l_AT_2511);
l_AT_2511 = NULL;
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
{
R12 * l_Y_2512; memset(&l_Y_2512, 0, sizeof l_Y_2512);
l_Y_2512 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_2512 == NULL))
{
{ rt_int rv2513 = 0;
return rv2513; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2512))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(l_Y_2512))).f_T == NULL)))
{
{ rt_int rv2514 = 0;
return rv2514; }
}
l_AT_2511 = r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2512))).f_T);
}
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_INDEX))
{
{
R14 l_SAVED_CODE_2515; memset(&l_SAVED_CODE_2515, 0, sizeof l_SAVED_CODE_2515);
S_R14(&l_SAVED_CODE_2515, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
l_AT_2511 = r_REAL_TYPE((r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL)).f_T);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2515, 0);
}
}
else
{
{ rt_int rv2516 = 0;
return rv2516; }
}
if ((!(((*(R22 *)rt_nil_check(l_AT_2511))).f_KIND == g_T_ARR)))
{
{ rt_int rv2517 = 0;
return rv2517; }
}
{ rt_int rv2518 = (!(r_PACKING_OF(l_AT_2511) == ((rt_int)2LL)));
return rv2518; }
rt_raise(RT_X_INIT);
}
static void r_NO_ALIASING(R12 * p_Y, R29 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R29 * l_A_2519; memset(&l_A_2519, 0, sizeof l_A_2519);
l_A_2519 = p_ARGS;
for (;;) {
if ((l_A_2519 == NULL)) goto L_end2520;
{
if (((((*(R29 *)rt_nil_check(l_A_2519))).f_MODE == g_M_INOUT) && (!(((*(R29 *)rt_nil_check(l_A_2519))).f_E == NULL))))
{
if (r_PACKED_ELEMENT(((*(R29 *)rt_nil_check(l_A_2519))).f_E))
{
r_FAIL(p_LINE, rt_str("only elements of ARRAY_STD arrays are inout arguments (3.8.3)", 61));
}
}
l_A_2519 = ((*(R29 *)rt_nil_check(l_A_2519))).f_NEXT;
}
RT_B_TICK();
} L_end2520: ;
l_A_2519 = p_ARGS;
for (;;) {
if ((l_A_2519 == NULL)) goto L_end2521;
{
if (((((((*(R29 *)rt_nil_check(l_A_2519))).f_MODE == g_M_INOUT) || (((*(R29 *)rt_nil_check(l_A_2519))).f_MODE == g_M_OUT))) && (!(((*(R29 *)rt_nil_check(l_A_2519))).f_E == NULL))))
{
{
R12 * l_V_2522; memset(&l_V_2522, 0, sizeof l_V_2522);
l_V_2522 = r_ARG_ROOT(((*(R29 *)rt_nil_check(l_A_2519))).f_E);
R29 * l_B_2523; memset(&l_B_2523, 0, sizeof l_B_2523);
l_B_2523 = ((*(R29 *)rt_nil_check(l_A_2519))).f_NEXT;
if ((!(l_V_2522 == NULL)))
{
for (;;) {
if ((l_B_2523 == NULL)) goto L_end2524;
{
if (((((*(R29 *)rt_nil_check(l_B_2523))).f_MODE == ((*(R29 *)rt_nil_check(l_A_2519))).f_MODE) && (!(((*(R29 *)rt_nil_check(l_B_2523))).f_E == NULL))))
{
if (((r_ARG_ROOT(((*(R29 *)rt_nil_check(l_B_2523))).f_E) == l_V_2522) && (!r_DISJOINT_PATHS(r_PATH_OF(((*(R29 *)rt_nil_check(l_A_2519))).f_E), r_PATH_OF(((*(R29 *)rt_nil_check(l_B_2523))).f_E)))))
{
r_FAILT(p_LINE, rt_str("a variable is more than one inout or output argument (4.3.3): ", 62), ((*(R12 *)rt_nil_check(l_V_2522))).f_NAME);
}
}
l_B_2523 = ((*(R29 *)rt_nil_check(l_B_2523))).f_NEXT;
}
RT_B_TICK();
} L_end2524: ;
if (((((*(R29 *)rt_nil_check(l_A_2519))).f_MODE == g_M_INOUT) && (!(((*(R12 *)rt_nil_check(p_Y))).f_USES == NULL))))
{
{
R17 * l_U_2525; memset(&l_U_2525, 0, sizeof l_U_2525);
l_U_2525 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_2525 == NULL)) goto L_end2526;
{
if ((r_TEQ(((*(R17 *)rt_nil_check(l_U_2525))).f_NAME, ((*(R12 *)rt_nil_check(l_V_2522))).f_NAME) && (((*(R17 *)rt_nil_check(l_U_2525))).f_IV == ((*(R12 *)rt_nil_check(l_V_2522))).f_OWNER)))
{
r_FAILT(p_LINE, rt_str("an inout argument the procedure also imports (4.3.3): ", 54), ((*(R12 *)rt_nil_check(l_V_2522))).f_NAME);
}
l_U_2525 = ((*(R17 *)rt_nil_check(l_U_2525))).f_NEXT;
}
RT_B_TICK();
} L_end2526: ;
}
}
}
}
}
l_A_2519 = ((*(R29 *)rt_nil_check(l_A_2519))).f_NEXT;
}
RT_B_TICK();
} L_end2521: ;
}
static void r_NEED_BODY(R12 * p_G) { RT_B_TICK(); 
if (((!(((*(R12 *)rt_nil_check(p_G))).f_LAZY == ((rt_int)2LL))) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_FL == ((rt_int)1LL))))
{
((*(R12 *)rt_nil_check(p_G))).f_LAZY = ((rt_int)2LL);
((*(R12 *)rt_nil_check(p_G))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = p_G;
}
}
static R12 * r_INLINE_INSTANCE(R12 * p_G, R29 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_BS_2527; memset(&l_BS_2527, 0, sizeof l_BS_2527);
l_BS_2527 = r_NEW_BINDS();
R30 * l_P_2528; memset(&l_P_2528, 0, sizeof l_P_2528);
l_P_2528 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R29 * l_A_2529; memset(&l_A_2529, 0, sizeof l_A_2529);
l_A_2529 = p_ARGS;
rt_int l_SOME_M_2530; memset(&l_SOME_M_2530, 0, sizeof l_SOME_M_2530);
l_SOME_M_2530 = 0;
rt_int l_N_2531; memset(&l_N_2531, 0, sizeof l_N_2531);
l_N_2531 = ((rt_int)0LL);
for (;;) {
if (((l_P_2528 == NULL) || (l_A_2529 == NULL))) goto L_end2532;
{
if ((((((*(R30 *)rt_nil_check(l_P_2528))).f_MODE == g_M_IN) && (!(((*(R29 *)rt_nil_check(l_A_2529))).f_E == NULL))) && (!(((*(R30 *)rt_nil_check(l_P_2528))).f_T == NULL))))
{
{
R22 * l_RT_2533; memset(&l_RT_2533, 0, sizeof l_RT_2533);
l_RT_2533 = r_REAL_TYPE(((*(R30 *)rt_nil_check(l_P_2528))).f_T);
R25 l_M_2534; memset(&l_M_2534, 0, sizeof l_M_2534);
S_R25(&l_M_2534, r_NO_MVAL(), 0);
if (((((*(R22 *)rt_nil_check(l_RT_2533))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2533))).f_SCALE == ((rt_int)0LL))))
{
if (r_MANIFEST_INT(((*(R29 *)rt_nil_check(l_A_2529))).f_E))
{
S_R25(&l_M_2534, r_MANIFEST(((*(R29 *)rt_nil_check(l_A_2529))).f_E), 0);
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_2533))).f_KIND == g_T_BOOL))
{
S_R25(&l_M_2534, r_MANIFEST(((*(R29 *)rt_nil_check(l_A_2529))).f_E), 0);
}
else if ((((*(R22 *)rt_nil_check(l_RT_2533))).f_KIND == g_T_ENUM))
{
S_R25(&l_M_2534, r_ENUM_MANIFEST(((*(R29 *)rt_nil_check(l_A_2529))).f_E, l_RT_2533), 0);
}
if ((l_M_2534).f_OK)
{
r_ADD_BIND(r_QMKN(rt_str("=", 1), ((*(R30 *)rt_nil_check(l_P_2528))).f_NAME), NULL, l_M_2534, NULL, l_BS_2527);
l_SOME_M_2530 = 1;
}
}
}
l_P_2528 = ((*(R30 *)rt_nil_check(l_P_2528))).f_NEXT;
l_A_2529 = ((*(R29 *)rt_nil_check(l_A_2529))).f_NEXT;
}
RT_B_TICK();
} L_end2532: ;
if ((!l_SOME_M_2530))
{
r_NEED_BODY(p_G);
{ R12 * rv2535 = p_G;
return rv2535; }
}
{
R12 * l_I_2536; memset(&l_I_2536, 0, sizeof l_I_2536);
l_I_2536 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2536 == NULL)) goto L_end2537;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2536))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_BS_2527))).f_NEXT))
{
{ R12 * rv2538 = l_I_2536;
return rv2538; }
}
l_N_2531 = rt_add(l_N_2531, ((rt_int)1LL));
l_I_2536 = ((*(R12 *)rt_nil_check(l_I_2536))).f_INSTANCES;
}
RT_B_TICK();
} L_end2537: ;
}
if ((l_N_2531 > ((rt_int)256LL)))
{
r_FAILT(p_LINE, rt_str("the INLINE expansions of the routine do not end (4.3.1): ", 57), ((*(R12 *)rt_nil_check(p_G))).f_NAME);
}
{ R12 * rv2539 = r_NEW_INSTANCE(p_G, ((*(R21 *)rt_nil_check(l_BS_2527))).f_NEXT, p_ARGS);
return rv2539; }
rt_raise(RT_X_INIT);
}
static R28 r_CALL_SYM(R12 * p_Y0, R29 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_VISIBLE_2540; memset(&l_VISIBLE_2540, 0, sizeof l_VISIBLE_2540);
l_VISIBLE_2540 = r_SEG_VISIBLE(p_Y0, p_LINE);
R12 * l_Y_2541; memset(&l_Y_2541, 0, sizeof l_Y_2541);
l_Y_2541 = r_ORIGINAL(p_Y0);
R30 * l_P_2542; memset(&l_P_2542, 0, sizeof l_P_2542);
R29 * l_A_2543; memset(&l_A_2543, 0, sizeof l_A_2543);
l_A_2543 = p_ARGS;
R9 l_C_2544; memset(&l_C_2544, 0, sizeof l_C_2544);
S_R9(&l_C_2544, r_MK(rt_str("", 0)), 0);
R9 l_SEP_2545; memset(&l_SEP_2545, 0, sizeof l_SEP_2545);
S_R9(&l_SEP_2545, r_MK(rt_str("", 0)), 0);
R9 l_PRE_2546; memset(&l_PRE_2546, 0, sizeof l_PRE_2546);
S_R9(&l_PRE_2546, r_MK(rt_str("", 0)), 0);
R9 l_POST_2547; memset(&l_POST_2547, 0, sizeof l_POST_2547);
S_R9(&l_POST_2547, r_MK(rt_str("", 0)), 0);
rt_int l_SHARED_2548; memset(&l_SHARED_2548, 0, sizeof l_SHARED_2548);
l_SHARED_2548 = 0;
R22 * l_PT_2549; memset(&l_PT_2549, 0, sizeof l_PT_2549);
if ((!(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
if (((((*(R12 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R))).f_DECL == ((*(R12 *)rt_nil_check(l_Y_2541))).f_DECL) && (!(((*(R12 *)rt_nil_check(l_Y_2541))).f_DECL == NULL))))
{
if ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2541))).f_DECL))).f_FL == ((rt_int)1LL)))
{
r_FAILT(p_LINE, rt_str("an INLINE routine cannot be recursive (4.3.1): ", 47), ((*(R12 *)rt_nil_check(l_Y_2541))).f_NAME);
}
}
}
if (((*(R12 *)rt_nil_check(l_Y_2541))).f_GENERIC)
{
l_Y_2541 = r_INSTANCE(l_Y_2541, p_ARGS, p_LINE);
}
else if (((!(((*(R12 *)rt_nil_check(l_Y_2541))).f_DECL == NULL)) && (((*(R12 *)rt_nil_check(l_Y_2541))).f_BINDINGS == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2541))).f_DECL))).f_KIND == g_N_ROUTINE) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2541))).f_DECL))).f_FL == ((rt_int)1LL))))
{
l_Y_2541 = r_INLINE_INSTANCE(l_Y_2541, p_ARGS, p_LINE);
}
}
r_CHECK_CALL_IMPORTS(l_Y_2541, p_LINE);
r_NO_ALIASING(l_Y_2541, p_ARGS, p_LINE);
r_EXPLICIT_GENERIC_ARGS(l_Y_2541, p_ARGS, p_LINE);
if ((!(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
if (((((*(R12 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R))).f_DECL == ((*(R12 *)rt_nil_check(l_Y_2541))).f_DECL) && (!(((*(R12 *)rt_nil_check(l_Y_2541))).f_DECL == NULL))))
{
if ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2541))).f_DECL))).f_FL == ((rt_int)1LL)))
{
r_FAILT(p_LINE, rt_str("an INLINE routine cannot be recursive (4.3.1): ", 47), ((*(R12 *)rt_nil_check(l_Y_2541))).f_NAME);
}
{
R17 * l_U_2550; memset(&l_U_2550, 0, sizeof l_U_2550);
l_U_2550 = ((*(R12 *)rt_nil_check(l_Y_2541))).f_USES;
for (;;) {
if ((l_U_2550 == NULL)) goto L_end2551;
{
if ((!(r_LOOKUP(((*(R17 *)rt_nil_check(l_U_2550))).f_NAME) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_LOOKUP(((*(R17 *)rt_nil_check(l_U_2550))).f_NAME)))).f_LEVEL > ((rt_int)0LL)))
{
r_FAILT(p_LINE, rt_str("a recursive routine imports only static data (4.3.1): ", 54), ((*(R17 *)rt_nil_check(l_U_2550))).f_NAME);
}
}
l_U_2550 = ((*(R17 *)rt_nil_check(l_U_2550))).f_NEXT;
}
RT_B_TICK();
} L_end2551: ;
}
}
}
if ((!(r_CUR_GENERIC() == NULL)))
{
{
R29 * l_Q_2552; memset(&l_Q_2552, 0, sizeof l_Q_2552);
l_Q_2552 = p_ARGS;
rt_int l_GEN_ARG_2553; memset(&l_GEN_ARG_2553, 0, sizeof l_GEN_ARG_2553);
l_GEN_ARG_2553 = 0;
for (;;) {
if ((l_Q_2552 == NULL)) goto L_end2554;
{
if (((*(R29 *)rt_nil_check(l_Q_2552))).f_HAVE)
{
if ((!((((*(R29 *)rt_nil_check(l_Q_2552))).f_V).f_T == NULL)))
{
if (((((*(R22 *)rt_nil_check((((*(R29 *)rt_nil_check(l_Q_2552))).f_V).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
l_GEN_ARG_2553 = 1;
}
}
}
l_Q_2552 = ((*(R29 *)rt_nil_check(l_Q_2552))).f_NEXT;
}
RT_B_TICK();
} L_end2554: ;
if (l_GEN_ARG_2553)
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2541))).f_BINDINGS == NULL)))
{
r_REQUIRE_WHERE_SUBSET(l_Y_2541, p_LINE);
}
else
{
r_REQUIRE_WHERE(r_BASE_NAME(l_Y_2541), p_LINE);
}
}
}
}
{
R17 * l_U_2555; memset(&l_U_2555, 0, sizeof l_U_2555);
l_U_2555 = ((*(R12 *)rt_nil_check(l_Y_2541))).f_USES;
for (;;) {
if ((l_U_2555 == NULL)) goto L_end2556;
{
{
R12 * l_H_2557; memset(&l_H_2557, 0, sizeof l_H_2557);
l_H_2557 = r_LOOKUP(((*(R17 *)rt_nil_check(l_U_2555))).f_NAME);
if ((!(l_H_2557 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_H_2557))).f_WITHV == ((rt_int)2LL)) && (((*(R12 *)rt_nil_check(l_H_2557))).f_OWNER == ((*(R17 *)rt_nil_check(l_U_2555))).f_IV)))
{
r_FAIL2(p_LINE, rt_str("the routine ", 12), ((*(R12 *)rt_nil_check(l_Y_2541))).f_NAME, rt_str(" imports ", 9), ((*(R17 *)rt_nil_check(l_U_2555))).f_NAME, rt_str(", which a WITH NAMING hides (4.5.4)", 35));
}
}
}
l_U_2555 = ((*(R17 *)rt_nil_check(l_U_2555))).f_NEXT;
}
RT_B_TICK();
} L_end2556: ;
}
if (((((((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL)) || (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL)))) && (!(((*(R12 *)rt_nil_check(l_Y_2541))).f_USES == NULL))))
{
r_FAILT(p_LINE, rt_str("a record-spec is a closed scope: no function importing a variable (3.9.1): ", 75), ((*(R12 *)rt_nil_check(l_Y_2541))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_2541))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_C_2544, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_2541))).f_LEVEL), 0);
S_R9(&l_SEP_2545, r_MK(rt_str(", ", 2)), 0);
}
{
R29 * l_Q_2558; memset(&l_Q_2558, 0, sizeof l_Q_2558);
l_Q_2558 = p_ARGS;
for (;;) {
if ((l_Q_2558 == NULL)) goto L_end2559;
{
if ((!(((*(R29 *)rt_nil_check(l_Q_2558))).f_MODE == g_M_IN)))
{
l_SHARED_2548 = 1;
}
l_Q_2558 = ((*(R29 *)rt_nil_check(l_Q_2558))).f_NEXT;
}
RT_B_TICK();
} L_end2559: ;
if ((!(((*(R12 *)rt_nil_check(l_Y_2541))).f_USES == NULL)))
{
l_SHARED_2548 = 1;
}
}
l_P_2542 = ((*(R12 *)rt_nil_check(l_Y_2541))).f_PARAMS;
for (;;) {
if ((l_P_2542 == NULL)) goto L_end2560;
{
if ((l_A_2543 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
l_PT_2549 = r_FORMAL_VIEW(l_Y_2541, l_P_2542);
if ((l_PT_2549 == NULL))
{
}
else if ((((*(R30 *)rt_nil_check(l_P_2542))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2549)))).f_KIND == g_T_VOID))
{
}
else
{
{
R28 l_V_2561; memset(&l_V_2561, 0, sizeof l_V_2561);
R9 l_CV_2562; memset(&l_CV_2562, 0, sizeof l_CV_2562);
if ((((*(R29 *)rt_nil_check(l_A_2543))).f_HAVE && (!r_WANT_SENSITIVE(l_A_2543))))
{
S_R28(&l_V_2561, ((*(R29 *)rt_nil_check(l_A_2543))).f_V, 0);
}
else
{
S_R28(&l_V_2561, r_EXPR(((*(R29 *)rt_nil_check(l_A_2543))).f_E, l_PT_2549), 0);
}
S_R9(&l_CV_2562, r_CONVERT(l_V_2561, l_PT_2549, p_LINE, r_NO_TEXT()), 0);
if (((l_SHARED_2548 && (l_V_2561).f_LVAL) && r_IS_STRUCTURED(l_PT_2549)))
{
S_R9(&l_CV_2562, r_COPY_OF(l_PT_2549, l_CV_2562), 0);
}
S_R9(&l_C_2544, r_FMT3(rt_str("@@@", 3), l_C_2544, l_SEP_2545, l_CV_2562), 0);
S_R9(&l_SEP_2545, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R28 l_V_2563; memset(&l_V_2563, 0, sizeof l_V_2563);
if (((*(R29 *)rt_nil_check(l_A_2543))).f_HAVE)
{
S_R28(&l_V_2563, ((*(R29 *)rt_nil_check(l_A_2543))).f_V, 0);
}
else
{
S_R28(&l_V_2563, r_EXPR(((*(R29 *)rt_nil_check(l_A_2543))).f_E, l_PT_2549), 0);
}
if (((!(((*(R29 *)rt_nil_check(l_A_2543))).f_E == NULL)) && (!(l_V_2563).f_LVAL)))
{
if ((((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(l_A_2543))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(l_A_2543))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R28(&l_V_2563, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_2563).f_C), (l_V_2563).f_T), 0);
(l_V_2563).f_LVAL = 1;
}
}
if ((!(l_V_2563).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(l_PT_2549, (l_V_2563).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(l_PT_2549));
}
if (((((*(R30 *)rt_nil_check(l_P_2542))).f_MODE == g_M_INOUT) && (!((r_SAME_TYPE(l_PT_2549, (l_V_2563).f_T) && r_SAME_RANGE(l_PT_2549, (l_V_2563).f_T))))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
if (((((*(R30 *)rt_nil_check(l_P_2542))).f_MODE == g_M_OUT) && (!((r_SAME_TYPE(l_PT_2549, (l_V_2563).f_T) && r_SAME_RANGE(l_PT_2549, (l_V_2563).f_T))))))
{
{
R9 l_TMP_2564; memset(&l_TMP_2564, 0, sizeof l_TMP_2564);
S_R9(&l_TMP_2564, r_NEW_NAME(rt_str("oa", 2)), 0);
R9 l_AP_2565; memset(&l_AP_2565, 0, sizeof l_AP_2565);
S_R9(&l_AP_2565, r_NEW_NAME(rt_str("op", 2)), 0);
S_R9(&l_PRE_2546, r_FMT4(rt_str("@ @ *@ = &@;", 12), l_PRE_2546, r_CTYPE((l_V_2563).f_T), l_AP_2565, (l_V_2563).f_C), 0);
S_R9(&l_PRE_2546, r_FMT4(rt_str("@ @ @ = @;", 10), l_PRE_2546, r_CTYPE(l_PT_2549), l_TMP_2564, r_COPY_OF((l_V_2563).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2565))), 0);
S_R9(&l_POST_2547, r_FMT2(rt_str("@ @", 3), l_POST_2547, r_STORE_CODE((l_V_2563).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2565), r_MKET(l_TMP_2564, l_PT_2549), p_LINE, r_NO_TEXT())), 0);
S_R9(&l_C_2544, r_FMT3(rt_str("@@&@", 4), l_C_2544, l_SEP_2545, l_TMP_2564), 0);
}
}
else
{
S_R9(&l_C_2544, r_FMT3(rt_str("@@&@", 4), l_C_2544, l_SEP_2545, (l_V_2563).f_C), 0);
}
S_R9(&l_SEP_2545, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_2543 = ((*(R29 *)rt_nil_check(l_A_2543))).f_NEXT;
l_P_2542 = ((*(R30 *)rt_nil_check(l_P_2542))).f_NEXT;
}
RT_B_TICK();
} L_end2560: ;
if ((!(l_A_2543 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
if (((l_PRE_2546).f_LEN > ((rt_int)0LL)))
{
{ R28 rv2566 = r_MKET(r_FMT4(rt_str("({ @ @(@); @ })", 15), l_PRE_2546, ((*(R12 *)rt_nil_check(l_Y_2541))).f_ACCESS, l_C_2544, l_POST_2547), r_RESULT_VIEW(l_Y_2541));
return rv2566; }
}
{ R28 rv2567 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_2541))).f_ACCESS, l_C_2544), r_RESULT_VIEW(l_Y_2541));
return rv2567; }
rt_raise(RT_X_INIT);
}
static R22 * r_FORMAL_VIEW(R12 * p_R, R30 * p_P) { RT_B_TICK(); 
if (((((*(R30 *)rt_nil_check(p_P))).f_T == NULL) || (((*(R30 *)rt_nil_check(p_P))).f_TS == NULL)))
{
{ R22 * rv2568 = ((*(R30 *)rt_nil_check(p_P))).f_T;
return rv2568; }
}
{ R22 * rv2569 = r_OUTSIDE_VIEW(p_R, ((*(R30 *)rt_nil_check(p_P))).f_TS, ((*(R30 *)rt_nil_check(p_P))).f_T);
return rv2569; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESULT_VIEW(R12 * p_R) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_R))).f_DECL == NULL) || (((*(R12 *)rt_nil_check(p_R))).f_RESULT == NULL)))
{
{ R22 * rv2570 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2570; }
}
if (((!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B == NULL)))
{
{ R22 * rv2571 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2571; }
}
{ R22 * rv2572 = r_OUTSIDE_VIEW(p_R, ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2572; }
rt_raise(RT_X_INIT);
}
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R17 * p_TS, R22 * p_T) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_R))).f_MODL == NULL) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)) || (!(((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))))
{
{ R22 * rv2573 = p_T;
return rv2573; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_R))).f_MODL))
{
{ R22 * rv2574 = p_T;
return rv2574; }
}
{
R12 * l_M_2575; memset(&l_M_2575, 0, sizeof l_M_2575);
l_M_2575 = ((*(R12 *)rt_nil_check(p_R))).f_MODL;
for (;;) {
if ((l_M_2575 == NULL)) goto L_end2576;
{
{
R12 * l_Y_2577; memset(&l_Y_2577, 0, sizeof l_Y_2577);
l_Y_2577 = r_MEMBER_TYPE(l_M_2575, ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_2577 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_2577))).f_EXPORTED)
{
{ R22 * rv2578 = r_ABSTRACT_VIEW(l_Y_2577, p_T);
return rv2578; }
}
{ R22 * rv2579 = p_T;
return rv2579; }
}
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(l_M_2575))).f_MODL))
{
goto L_end2576;
}
l_M_2575 = ((*(R12 *)rt_nil_check(l_M_2575))).f_MODL;
}
RT_B_TICK();
} L_end2576: ;
}
{ R22 * rv2580 = p_T;
return rv2580; }
rt_raise(RT_X_INIT);
}
static R12 * r_MEMBER_TYPE(R12 * p_M, R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2581; memset(&l_Y_2581, 0, sizeof l_Y_2581);
l_Y_2581 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
if (((*(R12 *)rt_nil_check(p_M))).f_BUSY)
{
{
R12 * l_Z_2582; memset(&l_Z_2582, 0, sizeof l_Z_2582);
l_Z_2582 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Z_2582 == NULL)) goto L_end2583;
{
if ((((((*(R12 *)rt_nil_check(l_Z_2582))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Z_2582))).f_MODL == p_M)) && (((*(R12 *)rt_nil_check(l_Z_2582))).f_ORIG == NULL)))
{
{ R12 * rv2584 = l_Z_2582;
return rv2584; }
}
l_Z_2582 = r_LOOKUP_NEXT(l_Z_2582);
}
RT_B_TICK();
} L_end2583: ;
}
{ R12 * rv2585 = NULL;
return rv2585; }
}
for (;;) {
if ((l_Y_2581 == NULL)) goto L_end2586;
{
if (((((*(R12 *)rt_nil_check(l_Y_2581))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_2581))).f_NAME, p_NAME)))
{
{ R12 * rv2587 = l_Y_2581;
return rv2587; }
}
l_Y_2581 = ((*(R12 *)rt_nil_check(l_Y_2581))).f_SNEXT;
}
RT_B_TICK();
} L_end2586: ;
{ R12 * rv2588 = NULL;
return rv2588; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_2589; memset(&l_K_2589, 0, sizeof l_K_2589);
l_K_2589 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND;
{ rt_int rv2590 = ((((l_K_2589 == g_T_STR) || (l_K_2589 == g_T_BITS)) || (l_K_2589 == g_T_ARR)) || (l_K_2589 == g_T_REC));
return rv2590; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2591; memset(&l_RA_2591, 0, sizeof l_RA_2591);
l_RA_2591 = r_REAL_TYPE(p_A);
R22 * l_RB_2592; memset(&l_RB_2592, 0, sizeof l_RB_2592);
l_RB_2592 = r_REAL_TYPE(p_B);
if ((!r_IS_NUMERIC_OR_ENUM(l_RA_2591)))
{
{ rt_int rv2593 = 1;
return rv2593; }
}
if ((((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2591))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2591))).f_HI_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2592))).f_LO_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2592))).f_HI_C)))
{
{ rt_int rv2594 = 1;
return rv2594; }
}
if ((((((*(R22 *)rt_nil_check(l_RA_2591))).f_LO_C).f_LEN == ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_RB_2592))).f_LO_C).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2595 = ((((*(R22 *)rt_nil_check(l_RA_2591))).f_LO_C).f_LEN == (((*(R22 *)rt_nil_check(l_RB_2592))).f_LO_C).f_LEN);
return rv2595; }
}
if (((((((*(R22 *)rt_nil_check(l_RA_2591))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_RB_2592))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_RA_2591))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(l_RB_2592))).f_MHI).f_OK))
{
{ rt_int rv2596 = (((((*(R22 *)rt_nil_check(l_RA_2591))).f_MLO).f_V == (((*(R22 *)rt_nil_check(l_RB_2592))).f_MLO).f_V) && ((((*(R22 *)rt_nil_check(l_RA_2591))).f_MHI).f_V == (((*(R22 *)rt_nil_check(l_RB_2592))).f_MHI).f_V));
return rv2596; }
}
{ rt_int rv2597 = (r_TEQ(((*(R22 *)rt_nil_check(l_RA_2591))).f_LO_C, ((*(R22 *)rt_nil_check(l_RB_2592))).f_LO_C) && r_TEQ(((*(R22 *)rt_nil_check(l_RA_2591))).f_HI_C, ((*(R22 *)rt_nil_check(l_RB_2592))).f_HI_C));
return rv2597; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R17 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2598 = 0;
return rv2598; }
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv2599 = 1;
return rv2599; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2600 = 1;
return rv2600; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2601 = r_STATIC_GENERIC(((*(R17 *)rt_nil_check(p_TS))).f_C);
return rv2601; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_N_REP) && r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_A)))
{
{ rt_int rv2602 = 1;
return rv2602; }
}
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv2603 = r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(p_TS))).f_A);
return rv2603; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv2604 = r_STATIC_GENERIC(((*(R17 *)rt_nil_check(p_TS))).f_A);
return rv2604; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv2605 = ((((*(R17 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv2605; }
}
else if (((r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv2606 = 0;
return rv2606; }
}
{
R12 * l_Y_2607; memset(&l_Y_2607, 0, sizeof l_Y_2607);
l_Y_2607 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
R17 * l_A_2608; memset(&l_A_2608, 0, sizeof l_A_2608);
l_A_2608 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R17 * l_F_2609; memset(&l_F_2609, 0, sizeof l_F_2609);
if ((l_Y_2607 == NULL))
{
{ rt_int rv2610 = 0;
return rv2610; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2607))).f_KIND == g_Y_GEN))
{
{ rt_int rv2611 = 1;
return rv2611; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2607))).f_DECL == NULL))
{
{ rt_int rv2612 = 0;
return rv2612; }
}
l_F_2609 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2607))).f_DECL))).f_A;
for (;;) {
if ((l_F_2609 == NULL)) goto L_end2613;
{
{
R17 * l_N_2614; memset(&l_N_2614, 0, sizeof l_N_2614);
l_N_2614 = ((*(R17 *)rt_nil_check(l_F_2609))).f_A;
for (;;) {
if ((l_N_2614 == NULL)) goto L_end2615;
{
if ((l_A_2608 == NULL))
{
{ rt_int rv2616 = 0;
return rv2616; }
}
if (((((*(R17 *)rt_nil_check(l_F_2609))).f_B == NULL) && ((((((*(R17 *)rt_nil_check(l_A_2608))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_A_2608))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_2608)))))
{
{ rt_int rv2617 = 1;
return rv2617; }
}
l_A_2608 = ((*(R17 *)rt_nil_check(l_A_2608))).f_NEXT;
l_N_2614 = ((*(R17 *)rt_nil_check(l_N_2614))).f_NEXT;
}
RT_B_TICK();
} L_end2615: ;
}
l_F_2609 = ((*(R17 *)rt_nil_check(l_F_2609))).f_NEXT;
}
RT_B_TICK();
} L_end2613: ;
}
}
{ rt_int rv2618 = 0;
return rv2618; }
rt_raise(RT_X_INIT);
}
static R17 * r_OWN_NAMES(R17 * p_R) { RT_B_TICK(); 
R17 * l_HEAD_2619; memset(&l_HEAD_2619, 0, sizeof l_HEAD_2619);
l_HEAD_2619 = NULL;
r_GEN_NAMES(((*(R17 *)rt_nil_check(p_R))).f_A, &l_HEAD_2619);
{ R17 * rv2620 = l_HEAD_2619;
return rv2620; }
rt_raise(RT_X_INIT);
}
static rt_int r_DECLARES_DERIVED(R17 * p_L) { RT_B_TICK(); 
R17 * l_N_2621; memset(&l_N_2621, 0, sizeof l_N_2621);
l_N_2621 = p_L;
for (;;) {
if ((l_N_2621 == NULL)) goto L_end2622;
{
if (((((*(R17 *)rt_nil_check(l_N_2621))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(l_N_2621))).f_NAME).f_LEN > ((rt_int)0LL))))
{
{ rt_int rv2623 = 1;
return rv2623; }
}
if ((((*(R17 *)rt_nil_check(l_N_2621))).f_KIND == g_N_PARAM))
{
if (r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2621))).f_B))
{
{ rt_int rv2624 = 1;
return rv2624; }
}
}
else if ((!(((*(R17 *)rt_nil_check(l_N_2621))).f_KIND == g_TS_GEN)))
{
if ((r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2621))).f_A) || r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2621))).f_C)))
{
{ rt_int rv2625 = 1;
return rv2625; }
}
if ((!(((*(R17 *)rt_nil_check(l_N_2621))).f_B == NULL)))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_2621))).f_B))).f_KIND == g_N_RANGE))
{
if ((r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_2621))).f_B))).f_A) || r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_2621))).f_B))).f_B)))
{
{ rt_int rv2626 = 1;
return rv2626; }
}
}
else if (r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2621))).f_B))
{
{ rt_int rv2627 = 1;
return rv2627; }
}
}
}
l_N_2621 = ((*(R17 *)rt_nil_check(l_N_2621))).f_NEXT;
}
RT_B_TICK();
} L_end2622: ;
{ rt_int rv2628 = 0;
return rv2628; }
rt_raise(RT_X_INIT);
}
static R22 * r_MARK_GENP(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R22 * l_C_2629; memset(&l_C_2629, 0, sizeof l_C_2629);
l_C_2629 = r_COPY_TYP(p_T);
S_R9(&((*(R22 *)rt_nil_check(l_C_2629))).f_GENP, p_NAME, 0);
{ R22 * rv2630 = l_C_2629;
return rv2630; }
rt_raise(RT_X_INIT);
}
static R12 * r_CUR_GENERIC(void) { RT_B_TICK(); 
R19 * l_CS_2631; memset(&l_CS_2631, 0, sizeof l_CS_2631);
l_CS_2631 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
for (;;) {
if ((l_CS_2631 == NULL)) goto L_end2632;
{
if ((!(((*(R19 *)rt_nil_check(l_CS_2631))).f_R == NULL)))
{
if ((!(((*(R12 *)rt_nil_check(((*(R19 *)rt_nil_check(l_CS_2631))).f_R))).f_BINDINGS == NULL)))
{
{ R12 * rv2633 = ((*(R19 *)rt_nil_check(l_CS_2631))).f_R;
return rv2633; }
}
}
l_CS_2631 = ((*(R19 *)rt_nil_check(l_CS_2631))).f_UP;
}
RT_B_TICK();
} L_end2632: ;
{ R12 * rv2634 = NULL;
return rv2634; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_WHERE(R12 * p_G, R9 p_NAME) { RT_B_TICK(); 
R17 * l_N_2635; memset(&l_N_2635, 0, sizeof l_N_2635);
l_N_2635 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
for (;;) {
if ((l_N_2635 == NULL)) goto L_end2636;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_N_2635))).f_A, p_NAME))
{
{ rt_int rv2637 = 1;
return rv2637; }
}
l_N_2635 = ((*(R17 *)rt_nil_check(l_N_2635))).f_NEXT;
}
RT_B_TICK();
} L_end2636: ;
{ rt_int rv2638 = 0;
return rv2638; }
rt_raise(RT_X_INIT);
}
static void r_REQUIRE_WHERE(R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_G_2639; memset(&l_G_2639, 0, sizeof l_G_2639);
l_G_2639 = r_CUR_GENERIC();
if ((l_G_2639 == NULL))
{
return;
}
if ((!r_IN_WHERE(l_G_2639, p_NAME)))
{
r_FAILT(p_LINE, rt_str("invoked with objects of a TYPE parameter, so named in the WHERE clause (5.2): ", 78), p_NAME);
}
}
static void r_REQUIRE_WHERE_SUBSET(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_N_2640; memset(&l_N_2640, 0, sizeof l_N_2640);
l_N_2640 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_D))).f_B;
R12 * l_G_2641; memset(&l_G_2641, 0, sizeof l_G_2641);
l_G_2641 = r_CUR_GENERIC();
if ((l_G_2641 == NULL))
{
return;
}
for (;;) {
if ((l_N_2640 == NULL)) goto L_end2642;
{
{
R17 * l_T_2643; memset(&l_T_2643, 0, sizeof l_T_2643);
l_T_2643 = ((*(R17 *)rt_nil_check(l_N_2640))).f_A;
for (;;) {
if ((l_T_2643 == NULL)) goto L_end2644;
{
if ((!r_IN_WHERE(l_G_2641, ((*(R17 *)rt_nil_check(l_T_2643))).f_NAME)))
{
r_FAILT(p_LINE, rt_str("the WHERE routines of the invoked generic routine are among the caller's (5.2): ", 80), ((*(R17 *)rt_nil_check(l_T_2643))).f_NAME);
}
l_T_2643 = ((*(R17 *)rt_nil_check(l_T_2643))).f_NEXT;
}
RT_B_TICK();
} L_end2644: ;
}
l_N_2640 = ((*(R17 *)rt_nil_check(l_N_2640))).f_NEXT;
}
RT_B_TICK();
} L_end2642: ;
}
static rt_int r_HAS_GEN_ARG(R17 * p_A) { RT_B_TICK(); 
R17 * l_P_2645; memset(&l_P_2645, 0, sizeof l_P_2645);
l_P_2645 = p_A;
for (;;) {
if ((l_P_2645 == NULL)) goto L_end2646;
{
if (((((*(R17 *)rt_nil_check(l_P_2645))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_P_2645))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2647 = 1;
return rv2647; }
}
l_P_2645 = ((*(R17 *)rt_nil_check(l_P_2645))).f_NEXT;
}
RT_B_TICK();
} L_end2646: ;
{ rt_int rv2648 = 0;
return rv2648; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { RT_B_TICK(); 
rt_int l_ENTERED_2649; memset(&l_ENTERED_2649, 0, sizeof l_ENTERED_2649);
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
l_ENTERED_2649 = r_ENTER_MODULE_FOR(p_Y);
{
R12 * l_SAVED_SEG_2650; memset(&l_SAVED_SEG_2650, 0, sizeof l_SAVED_SEG_2650);
l_SAVED_SEG_2650 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(p_Y))).f_HOME;
r_ROUTINE_HEADER1(p_Y);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_2650;
}
if (l_ENTERED_2649)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
}
static void r_ROUTINE_HEADER1(R12 * p_Y) { RT_B_TICK(); 
R17 * l_R_2651; memset(&l_R_2651, 0, sizeof l_R_2651);
l_R_2651 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R17 * l_P_2652; memset(&l_P_2652, 0, sizeof l_P_2652);
R30 * l_TAIL_2653; memset(&l_TAIL_2653, 0, sizeof l_TAIL_2653);
l_TAIL_2653 = NULL;
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_2652 = ((*(R17 *)rt_nil_check(l_R_2651))).f_A;
for (;;) {
if ((l_P_2652 == NULL)) goto L_end2654;
{
if (((((*(R17 *)rt_nil_check(l_P_2652))).f_B == NULL) || r_STATIC_GENERIC(((*(R17 *)rt_nil_check(l_P_2652))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2652 = ((*(R17 *)rt_nil_check(l_P_2652))).f_NEXT;
}
RT_B_TICK();
} L_end2654: ;
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2651))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
{
R17 * l_N_2655; memset(&l_N_2655, 0, sizeof l_N_2655);
l_N_2655 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2651))).f_D))).f_B;
for (;;) {
if ((l_N_2655 == NULL)) goto L_end2656;
{
{
R17 * l_T_2657; memset(&l_T_2657, 0, sizeof l_T_2657);
l_T_2657 = ((*(R17 *)rt_nil_check(l_N_2655))).f_A;
for (;;) {
if ((l_T_2657 == NULL)) goto L_end2658;
{
if ((r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_T_2657))).f_B))).f_A) || r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_T_2657))).f_B))).f_B)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_T_2657))).f_LINE, rt_str("a WHERE template declares no derived generic parameter (5.2): ", 62), ((*(R17 *)rt_nil_check(l_T_2657))).f_NAME);
}
l_T_2657 = ((*(R17 *)rt_nil_check(l_T_2657))).f_NEXT;
}
RT_B_TICK();
} L_end2658: ;
}
l_N_2655 = ((*(R17 *)rt_nil_check(l_N_2655))).f_NEXT;
}
RT_B_TICK();
} L_end2656: ;
}
}
l_P_2652 = ((*(R17 *)rt_nil_check(l_R_2651))).f_A;
for (;;) {
if ((l_P_2652 == NULL)) goto L_end2659;
{
{
R30 * l_PM_2660; memset(&l_PM_2660, 0, sizeof l_PM_2660);
l_PM_2660 = ({ R30 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R30(&(*(R30 *)rt_nil_check(l_PM_2660)), ({ R30 rc2661; memset(&rc2661, 0, sizeof rc2661);  S_R9(&rc2661.f_NAME, ((*(R17 *)rt_nil_check(l_P_2652))).f_NAME, 0); rc2661.f_MODE = ((*(R17 *)rt_nil_check(l_P_2652))).f_IV; rc2661.f_T = NULL; rc2661.f_TS = ((*(R17 *)rt_nil_check(l_P_2652))).f_B; rc2661.f_NEXT = NULL; rc2661; }), 0);
if (((((*(R17 *)rt_nil_check(l_R_2651))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(l_P_2652))).f_IV == g_M_IN))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2652))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!(((*(R17 *)rt_nil_check(l_P_2652))).f_B == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_2652))).f_B))).f_KIND == g_TS_ROUTINE) && (!(((*(R17 *)rt_nil_check(l_P_2652))).f_IV == g_M_IN))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2652))).f_LINE, rt_str("a routine-spec declares only input parameters (5.1)", 51));
}
if (r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_P_2652))).f_B, NULL, r_OWN_NAMES(l_R_2651)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2652))).f_LINE, rt_str("the attributes in the type of a formal are manifest (4.3.1)", 59));
}
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R30 *)rt_nil_check(l_PM_2660))).f_T = r_RESOLVE(((*(R17 *)rt_nil_check(l_P_2652))).f_B);
}
if ((l_TAIL_2653 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_2660;
}
else
{
((*(R30 *)rt_nil_check(l_TAIL_2653))).f_NEXT = l_PM_2660;
}
l_TAIL_2653 = l_PM_2660;
}
l_P_2652 = ((*(R17 *)rt_nil_check(l_P_2652))).f_NEXT;
}
RT_B_TICK();
} L_end2659: ;
if ((!(((*(R17 *)rt_nil_check(l_R_2651))).f_B == NULL)))
{
if (r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_R_2651))).f_B, NULL, r_OWN_NAMES(l_R_2651)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_2651))).f_LINE, rt_str("the returns-clause may not refer to a variable (4.3.1)", 54));
}
}
if ((((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC) && r_TEQS(r_BASE_NAME(p_Y), rt_str("STORE_", 6))) && (!(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS == NULL))))
{
{
R30 * l_LAST_2662; memset(&l_LAST_2662, 0, sizeof l_LAST_2662);
l_LAST_2662 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((((*(R30 *)rt_nil_check(l_LAST_2662))).f_NEXT == NULL)) goto L_end2663;
{
l_LAST_2662 = ((*(R30 *)rt_nil_check(l_LAST_2662))).f_NEXT;
}
RT_B_TICK();
} L_end2663: ;
if ((((!(l_LAST_2662 == ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS)) && (!(((*(R30 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS))).f_T == NULL))) && (!(((*(R30 *)rt_nil_check(l_LAST_2662))).f_T == NULL))))
{
if ((!r_SAME_CLASS(((*(R30 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS))).f_T, ((*(R30 *)rt_nil_check(l_LAST_2662))).f_T)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_2651))).f_LINE, rt_str("both arguments of STORE_ belong to the same type class (D.4)", 60));
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
R17 * l_R_2664; memset(&l_R_2664, 0, sizeof l_R_2664);
l_R_2664 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_2665; memset(&l_T_2665, 0, sizeof l_T_2665);
if ((((*(R17 *)rt_nil_check(l_R_2664))).f_B == NULL))
{
{ R22 * rv2666 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv2666; }
}
r_OPEN_SCOPE();
{
R30 * l_P_2667; memset(&l_P_2667, 0, sizeof l_P_2667);
l_P_2667 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2667 == NULL)) goto L_end2668;
{
if ((!(((*(R30 *)rt_nil_check(l_P_2667))).f_T == NULL)))
{
{
R12 * l_V_2669; memset(&l_V_2669, 0, sizeof l_V_2669);
l_V_2669 = r_NEW_SYM(g_Y_CONST, ((*(R30 *)rt_nil_check(l_P_2667))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2669))).f_T = ((*(R30 *)rt_nil_check(l_P_2667))).f_T;
S_R9(&((*(R12 *)rt_nil_check(l_V_2669))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R30 *)rt_nil_check(l_P_2667))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_V_2669))).f_INPUT = 1;
r_DEFINE(l_V_2669, ((*(R17 *)rt_nil_check(l_R_2664))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R30 *)rt_nil_check(l_P_2667))).f_T, ((*(R12 *)rt_nil_check(l_V_2669))).f_ACCESS, ((*(R17 *)rt_nil_check(l_R_2664))).f_LINE, 0);
}
}
l_P_2667 = ((*(R30 *)rt_nil_check(l_P_2667))).f_NEXT;
}
RT_B_TICK();
} L_end2668: ;
}
l_T_2665 = r_RESOLVE(((*(R17 *)rt_nil_check(l_R_2664))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv2670 = l_T_2665;
return rv2670; }
rt_raise(RT_X_INIT);
}
static R9 r_C_HEADER(R12 * p_Y) { RT_B_TICK(); 
R9 l_PS_2671; memset(&l_PS_2671, 0, sizeof l_PS_2671);
S_R9(&l_PS_2671, r_MK(rt_str("", 0)), 0);
R9 l_SEP_2672; memset(&l_SEP_2672, 0, sizeof l_SEP_2672);
S_R9(&l_SEP_2672, r_MK(rt_str("", 0)), 0);
R30 * l_P_2673; memset(&l_P_2673, 0, sizeof l_P_2673);
l_P_2673 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_PS_2671, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R9(&l_SEP_2672, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_2673 == NULL)) goto L_end2674;
{
if ((((*(R30 *)rt_nil_check(l_P_2673))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R30 *)rt_nil_check(l_P_2673))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R30 *)rt_nil_check(l_P_2673))).f_MODE == g_M_IN))
{
S_R9(&l_PS_2671, r_FMT4(rt_str("@@@ p_@", 7), l_PS_2671, l_SEP_2672, r_CTYPE(((*(R30 *)rt_nil_check(l_P_2673))).f_T), r_CID(((*(R30 *)rt_nil_check(l_P_2673))).f_NAME)), 0);
S_R9(&l_SEP_2672, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R9(&l_PS_2671, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_2671, l_SEP_2672, r_CTYPE(((*(R30 *)rt_nil_check(l_P_2673))).f_T), r_CID(((*(R30 *)rt_nil_check(l_P_2673))).f_NAME)), 0);
S_R9(&l_SEP_2672, r_MK(rt_str(", ", 2)), 0);
}
l_P_2673 = ((*(R30 *)rt_nil_check(l_P_2673))).f_NEXT;
}
RT_B_TICK();
} L_end2674: ;
if (((l_PS_2671).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_PS_2671, r_MK(rt_str("void", 4)), 0);
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_LINKAGE == ((rt_int)1LL)))
{
{ R9 rv2675 = r_FMT3(rt_str("@ @(@)", 6), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2671);
return rv2675; }
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_LINKAGE == ((rt_int)2LL)))
{
{ R9 rv2676 = r_FMT3(rt_str("extern @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2671);
return rv2676; }
}
{ R9 rv2677 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2671);
return rv2677; }
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
R27 * l_B_2678; memset(&l_B_2678, 0, sizeof l_B_2678);
l_B_2678 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_2679; memset(&l_I_2679, 0, sizeof l_I_2679);
l_I_2679 = ((rt_int)0LL);
for (;;) {
if ((l_B_2678 == NULL)) goto L_end2680;
{
if (r_IS_GEN_TEXT(((*(R27 *)rt_nil_check(l_B_2678))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R27 *)rt_nil_check(l_B_2678))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_2679)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R27 *)rt_nil_check(l_B_2678))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R27 *)rt_nil_check(l_B_2678))).f_LO) || ((((*(R27 *)rt_nil_check(l_B_2678))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R27 *)rt_nil_check(l_B_2678))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_2679)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R27 *)rt_nil_check(l_B_2678))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_2679), p_PC, r_NUM(l_I_2679)), ((*(R27 *)rt_nil_check(l_B_2678))).f_LO), p_LINE, p_CHECK);
}
}
l_I_2679 = rt_add(l_I_2679, ((rt_int)1LL));
l_B_2678 = ((*(R27 *)rt_nil_check(l_B_2678))).f_NEXT;
}
RT_B_TICK();
} L_end2680: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_2681; memset(&l_U_2681, 0, sizeof l_U_2681);
l_U_2681 = r_REAL_TYPE(p_T);
R26 * l_F_2682; memset(&l_F_2682, 0, sizeof l_F_2682);
l_F_2682 = ((*(R22 *)rt_nil_check(l_U_2681))).f_FIELDS;
R27 * l_A_2683; memset(&l_A_2683, 0, sizeof l_A_2683);
l_A_2683 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_2682 == NULL) || (l_A_2683 == NULL))) goto L_end2684;
{
if ((!(((*(R26 *)rt_nil_check(l_F_2682))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R27 *)rt_nil_check(l_A_2683))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R27 *)rt_nil_check(l_A_2683))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R26 *)rt_nil_check(l_F_2682))).f_CNAME), p_LINE, p_CHECK);
}
l_A_2683 = ((*(R27 *)rt_nil_check(l_A_2683))).f_NEXT;
}
l_F_2682 = ((*(R26 *)rt_nil_check(l_F_2682))).f_NEXT;
}
RT_B_TICK();
} L_end2684: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R9 p_T) { RT_B_TICK(); 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2685 = 0;
return rv2685; }
}
{ rt_int rv2686 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv2686; }
rt_raise(RT_X_INIT);
}
static R9 r_GEN_TEXT_NAME(R9 p_T) { RT_B_TICK(); 
{ R9 rv2687 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv2687; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R9 p_NAME, R9 p_C, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
R12 * l_OLD_2688; memset(&l_OLD_2688, 0, sizeof l_OLD_2688);
l_OLD_2688 = r_LOOKUP(p_NAME);
if ((!(l_OLD_2688 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_2688))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_2688))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_2688))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_2689; memset(&l_G_2689, 0, sizeof l_G_2689);
l_G_2689 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_2689))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R9(&((*(R12 *)rt_nil_check(l_G_2689))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_2689))).f_INPUT = 1;
r_DEFINE(l_G_2689, p_LINE);
}
}
static R21 * r_NEW_BINDS(void) { RT_B_TICK(); 
R21 * l_B_2690; memset(&l_B_2690, 0, sizeof l_B_2690);
l_B_2690 = ({ R21 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R21(&(*(R21 *)rt_nil_check(l_B_2690)), ({ R21 rc2691; memset(&rc2691, 0, sizeof rc2691);  S_R9(&rc2691.f_NAME, r_NO_TEXT(), 0); rc2691.f_T = NULL; S_R9(&rc2691.f_C, r_NO_TEXT(), 0); rc2691.f_HASMV = 0; rc2691.f_MV = ((rt_int)0LL); rc2691.f_R = NULL; rc2691.f_NEXT = NULL; rc2691; }), 0);
{ R21 * rv2692 = l_B_2690;
return rv2692; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R9 p_NAME, R22 * p_T, R25 p_M, R12 * p_R, R21 * p_HEAD) { RT_B_TICK(); 
R21 * l_B_2693; memset(&l_B_2693, 0, sizeof l_B_2693);
l_B_2693 = ({ R21 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R21(&(*(R21 *)rt_nil_check(l_B_2693)), ({ R21 rc2694; memset(&rc2694, 0, sizeof rc2694);  S_R9(&rc2694.f_NAME, p_NAME, 0); rc2694.f_T = p_T; S_R9(&rc2694.f_C, r_NO_TEXT(), 0); rc2694.f_HASMV = (p_M).f_OK; rc2694.f_MV = (p_M).f_V; rc2694.f_R = p_R; rc2694.f_NEXT = ((*(R21 *)rt_nil_check(p_HEAD))).f_NEXT; rc2694; }), 0);
if ((p_M).f_OK)
{
S_R9(&((*(R21 *)rt_nil_check(l_B_2693))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R21 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_2693;
}
static R21 * r_FIND_BIND(R21 * p_BS, R9 p_NAME) { RT_B_TICK(); 
R21 * l_B_2695; memset(&l_B_2695, 0, sizeof l_B_2695);
l_B_2695 = p_BS;
for (;;) {
if ((l_B_2695 == NULL)) goto L_end2696;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_B_2695))).f_NAME, p_NAME))
{
{ R21 * rv2697 = l_B_2695;
return rv2697; }
}
l_B_2695 = ((*(R21 *)rt_nil_check(l_B_2695))).f_NEXT;
}
RT_B_TICK();
} L_end2696: ;
{ R21 * rv2698 = NULL;
return rv2698; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R17 * p_TS, R22 * p_T, R21 * p_BS) { RT_B_TICK(); 
R22 * l_RT_2699; memset(&l_RT_2699, 0, sizeof l_RT_2699);
l_RT_2699 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv2700 = 1;
return rv2700; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv2701 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv2701; }
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2702 = 1;
return rv2702; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R17 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2703 = 1;
return rv2703; }
}
{
R21 * l_B_2704; memset(&l_B_2704, 0, sizeof l_B_2704);
l_B_2704 = r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_2704 == NULL)))
{
if ((((*(R21 *)rt_nil_check(l_B_2704))).f_T == NULL))
{
{ rt_int rv2705 = 0;
return rv2705; }
}
{ rt_int rv2706 = r_SAME_TYPE(((*(R21 *)rt_nil_check(l_B_2704))).f_T, p_T);
return rv2706; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_C == NULL) && r_NONSTANDARD_REP(p_T)))
{
{ rt_int rv2707 = 0;
return rv2707; }
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
{ rt_int rv2708 = 1;
return rv2708; }
}
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2699))).f_KIND == g_T_ARR)))
{
{ rt_int rv2709 = 0;
return rv2709; }
}
if ((!(r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_2699))).f_DIMS)))
{
{ rt_int rv2710 = 0;
return rv2710; }
}
{ rt_int rv2711 = r_UNIFY(((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_2699))).f_ELEM, p_BS);
return rv2711; }
}
else if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv2712 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2712; }
}
else if ((!(((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2713 = 0;
return rv2713; }
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_2699))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_2699))).f_MHI, p_BS))))
{
{ rt_int rv2714 = 0;
return rv2714; }
}
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_N_REP) && (!r_UNIFY_REP(((*(R17 *)rt_nil_check(p_TS))).f_C, l_RT_2699, p_BS))))
{
{ rt_int rv2715 = 0;
return rv2715; }
}
}
if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2699))).f_KIND == g_T_INT)))
{
{ rt_int rv2716 = 0;
return rv2716; }
}
{ rt_int rv2717 = ((r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2699))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS)) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)2LL)), r_SOME(((rt_int)0LL)), p_BS));
return rv2717; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv2718 = ((((*(R22 *)rt_nil_check(l_RT_2699))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2699))).f_SCALE == ((rt_int)0LL)));
return rv2718; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2699))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv2719 = 0;
return rv2719; }
}
{ rt_int rv2720 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2699))).f_SCALE), p_BS);
return rv2720; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv2721 = (((*(R22 *)rt_nil_check(l_RT_2699))).f_KIND == g_T_BOOL);
return rv2721; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv2722 = ((((*(R22 *)rt_nil_check(l_RT_2699))).f_KIND == g_T_STR) && r_SAME_DERIVED_LENGTH(r_NTH_ARG(p_TS, ((rt_int)0LL)), l_RT_2699, p_BS));
return rv2722; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2699))).f_KIND == g_T_STR)))
{
{ rt_int rv2723 = 0;
return rv2723; }
}
if ((!(((*(R17 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv2724 = 1;
return rv2724; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_2699))).f_BASE == NULL)))
{
{ rt_int rv2725 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_2699))).f_BASE, p_BS);
return rv2725; }
}
{ rt_int rv2726 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv2726; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv2727 = ((((*(R22 *)rt_nil_check(l_RT_2699))).f_KIND == g_T_BITS) && r_SAME_DERIVED_LENGTH(r_NTH_ARG(p_TS, ((rt_int)0LL)), l_RT_2699, p_BS));
return rv2727; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv2728 = (((*(R22 *)rt_nil_check(l_RT_2699))).f_KIND == g_T_SEM);
return rv2728; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2699))).f_KIND == g_T_PTR)))
{
{ rt_int rv2729 = 0;
return rv2729; }
}
{ rt_int rv2730 = r_UNIFY(((*(R17 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_2699), p_BS);
return rv2730; }
}
{
R12 * l_Y_2731; memset(&l_Y_2731, 0, sizeof l_Y_2731);
l_Y_2731 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_2731 == NULL))
{
{ rt_int rv2732 = 0;
return rv2732; }
}
if (((((*(R12 *)rt_nil_check(l_Y_2731))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_2731))).f_DECL == NULL)))
{
{ rt_int rv2733 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_2731))).f_T, p_T);
return rv2733; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2731))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv2734 = 0;
return rv2734; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_2731))))
{
{ rt_int rv2735 = 0;
return rv2735; }
}
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2731))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2699))).f_KIND == g_T_REC)))
{
{ rt_int rv2736 = 0;
return rv2736; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2699))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv2737 = 0;
return rv2737; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2699))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_2731))))
{
{ rt_int rv2738 = 0;
return rv2738; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv2739 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2739; }
}
{ rt_int rv2740 = r_UNIFY(r_SUBST_FORMALS(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2731))).f_DECL))).f_B, ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2731))).f_DECL))).f_A, ((*(R17 *)rt_nil_check(p_TS))).f_A), l_RT_2699, p_BS);
return rv2740; }
}
{
R17 * l_F_2741; memset(&l_F_2741, 0, sizeof l_F_2741);
l_F_2741 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2731))).f_DECL))).f_A;
R17 * l_A_2742; memset(&l_A_2742, 0, sizeof l_A_2742);
l_A_2742 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R27 * l_V_2743; memset(&l_V_2743, 0, sizeof l_V_2743);
l_V_2743 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_2744; memset(&l_CLASS_2744, 0, sizeof l_CLASS_2744);
l_CLASS_2744 = r_RECORD_CLASS_OF(l_RT_2699);
for (;;) {
if ((l_F_2741 == NULL)) goto L_end2745;
{
{
R17 * l_N_2746; memset(&l_N_2746, 0, sizeof l_N_2746);
l_N_2746 = ((*(R17 *)rt_nil_check(l_F_2741))).f_A;
for (;;) {
if ((l_N_2746 == NULL)) goto L_end2747;
{
if ((l_A_2742 == NULL))
{
{ rt_int rv2748 = 0;
return rv2748; }
}
if ((((*(R17 *)rt_nil_check(l_F_2741))).f_B == NULL))
{
if ((!(l_CLASS_2744 == NULL)))
{
{
R21 * l_B_2749; memset(&l_B_2749, 0, sizeof l_B_2749);
l_B_2749 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_2744))).f_BINDINGS, ((*(R17 *)rt_nil_check(l_N_2746))).f_NAME);
if ((!(l_B_2749 == NULL)))
{
if ((!r_UNIFY(l_A_2742, ((*(R21 *)rt_nil_check(l_B_2749))).f_T, p_BS)))
{
{ rt_int rv2750 = 0;
return rv2750; }
}
}
}
}
}
else
{
if ((!(l_V_2743 == NULL)))
{
if ((((!(((*(R17 *)rt_nil_check(l_A_2742))).f_KIND == g_TS_GEN)) && (!(((*(R17 *)rt_nil_check(l_A_2742))).f_KIND == g_N_DONTCARE))) && (!(((*(R17 *)rt_nil_check(l_A_2742))).f_KIND == g_N_ANY))))
{
{
R25 l_M_2751; memset(&l_M_2751, 0, sizeof l_M_2751);
S_R25(&l_M_2751, r_MANIFEST(l_A_2742), 0);
if (((l_M_2751).f_OK && (((*(R27 *)rt_nil_check(l_V_2743))).f_MLO).f_OK))
{
if ((!((l_M_2751).f_V == (((*(R27 *)rt_nil_check(l_V_2743))).f_MLO).f_V)))
{
{ rt_int rv2752 = 0;
return rv2752; }
}
}
}
}
l_V_2743 = ((*(R27 *)rt_nil_check(l_V_2743))).f_NEXT;
}
}
l_A_2742 = ((*(R17 *)rt_nil_check(l_A_2742))).f_NEXT;
l_N_2746 = ((*(R17 *)rt_nil_check(l_N_2746))).f_NEXT;
}
RT_B_TICK();
} L_end2747: ;
}
l_F_2741 = ((*(R17 *)rt_nil_check(l_F_2741))).f_NEXT;
}
RT_B_TICK();
} L_end2745: ;
}
{ rt_int rv2753 = 1;
return rv2753; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_DERIVED_LENGTH(R17 * p_A, R22 * p_RT, R21 * p_BS) { RT_B_TICK(); 
if (((p_A == NULL) || (!(((*(R22 *)rt_nil_check(p_RT))).f_MLEN).f_OK)))
{
{ rt_int rv2754 = 1;
return rv2754; }
}
if (((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) || ((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2755 = 1;
return rv2755; }
}
{
R9 l_KEY_2756; memset(&l_KEY_2756, 0, sizeof l_KEY_2756);
S_R9(&l_KEY_2756, r_QMKN(rt_str("%", 1), ((*(R17 *)rt_nil_check(p_A))).f_NAME), 0);
R21 * l_B_2757; memset(&l_B_2757, 0, sizeof l_B_2757);
l_B_2757 = r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, l_KEY_2756);
if ((!(l_B_2757 == NULL)))
{
{ rt_int rv2758 = (((*(R21 *)rt_nil_check(l_B_2757))).f_MV == (((*(R22 *)rt_nil_check(p_RT))).f_MLEN).f_V);
return rv2758; }
}
r_ADD_BIND(l_KEY_2756, NULL, ((*(R22 *)rt_nil_check(p_RT))).f_MLEN, NULL, p_BS);
{ rt_int rv2759 = 1;
return rv2759; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_REP(R17 * p_R, R22 * p_RT, R21 * p_BS) { RT_B_TICK(); 
R17 * l_A_2760; memset(&l_A_2760, 0, sizeof l_A_2760);
l_A_2760 = ((*(R22 *)rt_nil_check(p_RT))).f_REPS;
if (r_TEQS(((*(R17 *)rt_nil_check(p_R))).f_NAME, rt_str("FIXED_REP", 9)))
{
if ((!(((*(R22 *)rt_nil_check(p_RT))).f_KIND == g_T_INT)))
{
{ rt_int rv2761 = 0;
return rv2761; }
}
{
R9 l_SIGNING_2762; memset(&l_SIGNING_2762, 0, sizeof l_SIGNING_2762);
S_R9(&l_SIGNING_2762, r_MK(rt_str("SIGNED", 6)), 0);
if ((!(l_A_2760 == NULL)))
{
if ((!((r_TEQS(((*(R17 *)rt_nil_check(l_A_2760))).f_NAME, rt_str("FIXED_REP", 9)) || r_TEQS(((*(R17 *)rt_nil_check(l_A_2760))).f_NAME, rt_str("FIXED_STD", 9))))))
{
{ rt_int rv2763 = 1;
return rv2763; }
}
if ((r_TEQS(((*(R17 *)rt_nil_check(l_A_2760))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R17 *)rt_nil_check(l_A_2760))).f_A == NULL))))
{
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_2760))).f_A))).f_NEXT == NULL)))
{
S_R9(&l_SIGNING_2762, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_2760))).f_A))).f_NEXT))).f_NAME, 0);
}
}
}
if ((!r_UNIFY_VALUE(((*(R17 *)rt_nil_check(p_R))).f_A, r_STATIC_SIZE(p_RT), p_BS)))
{
{ rt_int rv2764 = 0;
return rv2764; }
}
if ((!(((*(R17 *)rt_nil_check(p_R))).f_A == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT == NULL)))
{
if (((((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_KIND == g_N_ENUMLIT))) && (!r_TEQ(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_NAME, l_SIGNING_2762))))
{
{ rt_int rv2765 = 0;
return rv2765; }
}
}
}
{ rt_int rv2766 = 1;
return rv2766; }
}
}
if ((l_A_2760 == NULL))
{
{ rt_int rv2767 = 1;
return rv2767; }
}
{ rt_int rv2768 = r_TEQ(((*(R17 *)rt_nil_check(p_R))).f_NAME, ((*(R17 *)rt_nil_check(l_A_2760))).f_NAME);
return rv2768; }
rt_raise(RT_X_INIT);
}
static rt_int r_NONSTANDARD_REP(R22 * p_T) { RT_B_TICK(); 
R17 * l_R_2769; memset(&l_R_2769, 0, sizeof l_R_2769);
l_R_2769 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
if ((l_R_2769 == NULL))
{
{ rt_int rv2770 = 0;
return rv2770; }
}
if ((((*(R17 *)rt_nil_check(l_R_2769))).f_KIND == g_TS_GEN))
{
{ rt_int rv2771 = 0;
return rv2771; }
}
{ rt_int rv2772 = (((((r_TEQS(((*(R17 *)rt_nil_check(l_R_2769))).f_NAME, rt_str("FIXED_REP", 9)) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2769))).f_NAME, rt_str("ENUM_REP", 8))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2769))).f_NAME, rt_str("ENUM_VAL_REP", 12))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2769))).f_NAME, rt_str("CHAR_STR_REP", 12))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2769))).f_NAME, rt_str("ARRAY_REP", 9))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2769))).f_NAME, rt_str("RECORD_REP", 10)));
return rv2772; }
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { RT_B_TICK(); 
R12 * l_R_2773; memset(&l_R_2773, 0, sizeof l_R_2773);
l_R_2773 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv2774 = NULL;
return rv2774; }
}
for (;;) {
if ((l_R_2773 == NULL)) goto L_end2775;
{
if ((((*(R12 *)rt_nil_check(l_R_2773))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv2776 = l_R_2773;
return rv2776; }
}
l_R_2773 = ((*(R12 *)rt_nil_check(l_R_2773))).f_INSTANCES;
}
RT_B_TICK();
} L_end2775: ;
{ R12 * rv2777 = NULL;
return rv2777; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R17 * p_A, R25 p_M, R21 * p_BS) { RT_B_TICK(); 
if ((p_A == NULL))
{
{ rt_int rv2778 = 1;
return rv2778; }
}
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2779 = 1;
return rv2779; }
}
else if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2780 = 1;
return rv2780; }
}
{
R21 * l_B_2781; memset(&l_B_2781, 0, sizeof l_B_2781);
l_B_2781 = r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, ((*(R17 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_2781 == NULL)))
{
{ rt_int rv2782 = ((((*(R21 *)rt_nil_check(l_B_2781))).f_HASMV && (p_M).f_OK) && (((*(R21 *)rt_nil_check(l_B_2781))).f_MV == (p_M).f_V));
return rv2782; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv2783 = 0;
return rv2783; }
}
r_ADD_BIND(((*(R17 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv2784 = 1;
return rv2784; }
}
{
R25 l_V_2785; memset(&l_V_2785, 0, sizeof l_V_2785);
S_R25(&l_V_2785, r_MANIFEST(p_A), 0);
if (((l_V_2785).f_OK && (p_M).f_OK))
{
{ rt_int rv2786 = ((l_V_2785).f_V == (p_M).f_V);
return rv2786; }
}
}
{ rt_int rv2787 = 1;
return rv2787; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R30 * p_P, R29 * p_A, R21 * p_BS) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R29 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv2788 = 0;
return rv2788; }
}
if (((!(((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME)) && (!(((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_APPLY))))
{
{ rt_int rv2789 = 0;
return rv2789; }
}
{ rt_int rv2790 = (!(r_FIND_ROUTINE_ARG(((*(R30 *)rt_nil_check(p_P))).f_TS, ((*(R29 *)rt_nil_check(p_A))).f_E, p_BS, ((rt_int)0LL), 0) == NULL));
return rv2790; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv2791 = 1;
return rv2791; }
}
r_TYPE_ARG(p_A);
{ rt_int rv2792 = r_UNIFY(((*(R30 *)rt_nil_check(p_P))).f_TS, (((*(R29 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv2792; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R29 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_BS_2793; memset(&l_BS_2793, 0, sizeof l_BS_2793);
l_BS_2793 = r_NEW_BINDS();
R30 * l_P_2794; memset(&l_P_2794, 0, sizeof l_P_2794);
l_P_2794 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R29 * l_A_2795; memset(&l_A_2795, 0, sizeof l_A_2795);
l_A_2795 = p_ARGS;
for (;;) {
if ((l_P_2794 == NULL)) goto L_end2796;
{
if ((((*(R30 *)rt_nil_check(l_P_2794))).f_TS == NULL))
{
if (((*(R29 *)rt_nil_check(l_A_2795))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R30 *)rt_nil_check(l_P_2794))).f_NAME, r_ARG_TYPE(((*(R29 *)rt_nil_check(l_A_2795))).f_E), r_NO_MVAL(), NULL, l_BS_2793);
}
else if ((((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2794))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R30 *)rt_nil_check(l_P_2794))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R30 *)rt_nil_check(l_P_2794))).f_TS, ((*(R29 *)rt_nil_check(l_A_2795))).f_E, p_LINE), l_BS_2793);
}
else if (((((!(((*(R29 *)rt_nil_check(l_A_2795))).f_E == NULL)) && (!((*(R29 *)rt_nil_check(l_A_2795))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R30 *)rt_nil_check(l_P_2794))).f_TS))) && (((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(l_A_2795))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R29 *)rt_nil_check(l_A_2795))).f_HAVE))
{
S_R28(&((*(R29 *)rt_nil_check(l_A_2795))).f_V, r_EXPR(((*(R29 *)rt_nil_check(l_A_2795))).f_E, NULL), 0);
((*(R29 *)rt_nil_check(l_A_2795))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R30 *)rt_nil_check(l_P_2794))).f_TS, (((*(R29 *)rt_nil_check(l_A_2795))).f_V).f_T, l_BS_2793)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R30 *)rt_nil_check(l_P_2794))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R30 *)rt_nil_check(l_P_2794))).f_TS))
{
r_ADD_BIND(r_QMKN(rt_str("\?", 1), ((*(R30 *)rt_nil_check(l_P_2794))).f_NAME), (((*(R29 *)rt_nil_check(l_A_2795))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_2793);
}
}
l_P_2794 = ((*(R30 *)rt_nil_check(l_P_2794))).f_NEXT;
l_A_2795 = ((*(R29 *)rt_nil_check(l_A_2795))).f_NEXT;
}
RT_B_TICK();
} L_end2796: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_2793);
{
R12 * l_I_2797; memset(&l_I_2797, 0, sizeof l_I_2797);
l_I_2797 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2797 == NULL)) goto L_end2798;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2797))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_BS_2793))).f_NEXT))
{
{ R12 * rv2799 = l_I_2797;
return rv2799; }
}
l_I_2797 = ((*(R12 *)rt_nil_check(l_I_2797))).f_INSTANCES;
}
RT_B_TICK();
} L_end2798: ;
}
{ R12 * rv2800 = r_NEW_INSTANCE(p_G, ((*(R21 *)rt_nil_check(l_BS_2793))).f_NEXT, p_ARGS);
return rv2800; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_2801; memset(&l_P_2801, 0, sizeof l_P_2801);
l_P_2801 = p_A;
for (;;) {
if ((l_P_2801 == NULL)) goto L_end2802;
{
{
R21 * l_Q_2803; memset(&l_Q_2803, 0, sizeof l_Q_2803);
l_Q_2803 = r_FIND_BIND(p_B, ((*(R21 *)rt_nil_check(l_P_2801))).f_NAME);
if ((l_Q_2803 == NULL))
{
{ rt_int rv2804 = 0;
return rv2804; }
}
if (((!(((*(R21 *)rt_nil_check(l_P_2801))).f_T == NULL)) || (!(((*(R21 *)rt_nil_check(l_Q_2803))).f_T == NULL))))
{
if (((((*(R21 *)rt_nil_check(l_P_2801))).f_T == NULL) || (((*(R21 *)rt_nil_check(l_Q_2803))).f_T == NULL)))
{
{ rt_int rv2805 = 0;
return rv2805; }
}
if ((!r_SAME_TYPE(((*(R21 *)rt_nil_check(l_P_2801))).f_T, ((*(R21 *)rt_nil_check(l_Q_2803))).f_T)))
{
{ rt_int rv2806 = 0;
return rv2806; }
}
if ((!r_SAME_LENGTH(((*(R21 *)rt_nil_check(l_P_2801))).f_T, ((*(R21 *)rt_nil_check(l_Q_2803))).f_T)))
{
{ rt_int rv2807 = 0;
return rv2807; }
}
if ((!r_SAME_REPS(((*(R21 *)rt_nil_check(l_P_2801))).f_T, ((*(R21 *)rt_nil_check(l_Q_2803))).f_T)))
{
{ rt_int rv2808 = 0;
return rv2808; }
}
}
if ((((!(((*(R21 *)rt_nil_check(l_P_2801))).f_HASMV == ((*(R21 *)rt_nil_check(l_Q_2803))).f_HASMV)) || (!(((*(R21 *)rt_nil_check(l_P_2801))).f_MV == ((*(R21 *)rt_nil_check(l_Q_2803))).f_MV))) || (!(((*(R21 *)rt_nil_check(l_P_2801))).f_R == ((*(R21 *)rt_nil_check(l_Q_2803))).f_R))))
{
{ rt_int rv2809 = 0;
return rv2809; }
}
}
l_P_2801 = ((*(R21 *)rt_nil_check(l_P_2801))).f_NEXT;
}
RT_B_TICK();
} L_end2802: ;
{ rt_int rv2810 = 1;
return rv2810; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2811; memset(&l_RA_2811, 0, sizeof l_RA_2811);
l_RA_2811 = r_REAL_TYPE(p_A);
R22 * l_RB_2812; memset(&l_RB_2812, 0, sizeof l_RB_2812);
l_RB_2812 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_2811))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_2811))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_2811))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_2812))).f_KIND))))
{
{ rt_int rv2813 = 1;
return rv2813; }
}
if (((((*(R22 *)rt_nil_check(l_RA_2811))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_2812))).f_MLEN).f_OK))
{
{ rt_int rv2814 = ((((*(R22 *)rt_nil_check(l_RA_2811))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_2812))).f_MLEN).f_V);
return rv2814; }
}
{ rt_int rv2815 = ((((*(R22 *)rt_nil_check(l_RA_2811))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_2812))).f_MLEN).f_OK);
return rv2815; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R17 * l_RA_2816; memset(&l_RA_2816, 0, sizeof l_RA_2816);
l_RA_2816 = ((*(R22 *)rt_nil_check(p_A))).f_REPS;
R17 * l_RB_2817; memset(&l_RB_2817, 0, sizeof l_RB_2817);
l_RB_2817 = ((*(R22 *)rt_nil_check(p_B))).f_REPS;
if (((l_RA_2816 == NULL) || (l_RB_2817 == NULL)))
{
{ rt_int rv2818 = (l_RA_2816 == l_RB_2817);
return rv2818; }
}
if ((l_RA_2816 == l_RB_2817))
{
{ rt_int rv2819 = 1;
return rv2819; }
}
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_RA_2816))).f_NAME, ((*(R17 *)rt_nil_check(l_RB_2817))).f_NAME)))
{
{ rt_int rv2820 = 0;
return rv2820; }
}
{
R17 * l_X_2821; memset(&l_X_2821, 0, sizeof l_X_2821);
l_X_2821 = ((*(R17 *)rt_nil_check(l_RA_2816))).f_A;
R17 * l_Y_2822; memset(&l_Y_2822, 0, sizeof l_Y_2822);
l_Y_2822 = ((*(R17 *)rt_nil_check(l_RB_2817))).f_A;
for (;;) {
if (((l_X_2821 == NULL) || (l_Y_2822 == NULL))) goto L_end2823;
{
if (((((((*(R17 *)rt_nil_check(l_X_2821))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_X_2821))).f_KIND == g_N_ENUMLIT))) && (((((*(R17 *)rt_nil_check(l_Y_2822))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_Y_2822))).f_KIND == g_N_ENUMLIT)))))
{
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_X_2821))).f_NAME, ((*(R17 *)rt_nil_check(l_Y_2822))).f_NAME)))
{
{ rt_int rv2824 = 0;
return rv2824; }
}
}
else
{
{
R25 l_MX_2825; memset(&l_MX_2825, 0, sizeof l_MX_2825);
S_R25(&l_MX_2825, r_MANIFEST(l_X_2821), 0);
R25 l_MY_2826; memset(&l_MY_2826, 0, sizeof l_MY_2826);
S_R25(&l_MY_2826, r_MANIFEST(l_Y_2822), 0);
if (((!((l_MX_2825).f_OK == (l_MY_2826).f_OK)) || (!((l_MX_2825).f_V == (l_MY_2826).f_V))))
{
{ rt_int rv2827 = 0;
return rv2827; }
}
}
}
l_X_2821 = ((*(R17 *)rt_nil_check(l_X_2821))).f_NEXT;
l_Y_2822 = ((*(R17 *)rt_nil_check(l_Y_2822))).f_NEXT;
}
RT_B_TICK();
} L_end2823: ;
{ rt_int rv2828 = ((((l_X_2821 == NULL) && (l_Y_2822 == NULL)) && (((*(R17 *)rt_nil_check(l_RA_2816))).f_B == NULL)) && (((*(R17 *)rt_nil_check(l_RB_2817))).f_B == NULL));
return rv2828; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R17 * p_TS, R17 * p_E, rt_int p_LINE) { RT_B_TICK(); 
{ R12 * rv2829 = r_FIND_ROUTINE_ARG(p_TS, p_E, NULL, p_LINE, 1);
return rv2829; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE_ARG(R17 * p_TS, R17 * p_E, R21 * p_BS0, rt_int p_LINE, rt_int p_STRICT) { RT_B_TICK(); 
R12 * l_Y_2830; memset(&l_Y_2830, 0, sizeof l_Y_2830);
l_Y_2830 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_2831; memset(&l_FOUND_2831, 0, sizeof l_FOUND_2831);
l_FOUND_2831 = NULL;
R21 * l_BS_2832; memset(&l_BS_2832, 0, sizeof l_BS_2832);
l_BS_2832 = p_BS0;
if ((l_BS_2832 == NULL))
{
l_BS_2832 = r_NEW_BINDS();
}
for (;;) {
if ((l_Y_2830 == NULL)) goto L_end2833;
{
if ((((*(R12 *)rt_nil_check(l_Y_2830))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_2834; memset(&l_R_2834, 0, sizeof l_R_2834);
l_R_2834 = r_ORIGINAL(l_Y_2830);
R21 * l_TRY_2835; memset(&l_TRY_2835, 0, sizeof l_TRY_2835);
l_TRY_2835 = r_NEW_BINDS();
((*(R21 *)rt_nil_check(l_TRY_2835))).f_NEXT = ((*(R21 *)rt_nil_check(l_BS_2832))).f_NEXT;
r_ROUTINE_HEADER(l_R_2834);
if ((((!((*(R12 *)rt_nil_check(l_R_2834))).f_GENERIC) && r_EXPLICIT_TEMPLATE_FITS(p_E, l_R_2834)) && r_TEMPLATE_FITS(p_TS, l_R_2834, l_TRY_2835)))
{
if (((!(l_FOUND_2831 == NULL)) && (!(l_FOUND_2831 == l_R_2834))))
{
if ((!p_STRICT))
{
{ R12 * rv2836 = NULL;
return rv2836; }
}
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_2831 = l_R_2834;
}
}
}
l_Y_2830 = r_LOOKUP_NEXT(l_Y_2830);
}
RT_B_TICK();
} L_end2833: ;
if ((l_FOUND_2831 == NULL))
{
if ((!p_STRICT))
{
{ R12 * rv2837 = NULL;
return rv2837; }
}
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter (5.1): ", 45), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_2831))).f_USES == NULL)))
{
if ((!p_STRICT))
{
{ R12 * rv2838 = NULL;
return rv2838; }
}
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (p_STRICT)
{
if ((!r_TEMPLATE_FITS(p_TS, l_FOUND_2831, l_BS_2832)))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter (5.1): ", 45), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
r_NEED_BODY(l_FOUND_2831);
}
{ R12 * rv2839 = l_FOUND_2831;
return rv2839; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPLICIT_TEMPLATE_FITS(R17 * p_E, R12 * p_R) { RT_B_TICK(); 
R17 * l_A_2840; memset(&l_A_2840, 0, sizeof l_A_2840);
l_A_2840 = ((*(R17 *)rt_nil_check(p_E))).f_A;
R30 * l_Q_2841; memset(&l_Q_2841, 0, sizeof l_Q_2841);
l_Q_2841 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY)))
{
{ rt_int rv2842 = 1;
return rv2842; }
}
if (((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
{ rt_int rv2843 = 0;
return rv2843; }
}
for (;;) {
if (((l_A_2840 == NULL) || (l_Q_2841 == NULL))) goto L_end2844;
{
if ((((*(R30 *)rt_nil_check(l_Q_2841))).f_T == NULL))
{
{ rt_int rv2845 = 0;
return rv2845; }
}
if ((!r_IDENTICAL_TYPE(r_RESOLVE(r_EXPR_TO_TS(l_A_2840)), ((*(R30 *)rt_nil_check(l_Q_2841))).f_T)))
{
{ rt_int rv2846 = 0;
return rv2846; }
}
l_A_2840 = ((*(R17 *)rt_nil_check(l_A_2840))).f_NEXT;
l_Q_2841 = ((*(R30 *)rt_nil_check(l_Q_2841))).f_NEXT;
}
RT_B_TICK();
} L_end2844: ;
if (((!(l_A_2840 == NULL)) || (!(l_Q_2841 == NULL))))
{
{ rt_int rv2847 = 0;
return rv2847; }
}
if ((!(((*(R17 *)rt_nil_check(p_E))).f_E == NULL)))
{
{ rt_int rv2848 = r_IDENTICAL_TYPE(r_RESOLVE(((*(R17 *)rt_nil_check(p_E))).f_E), ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2848; }
}
{ rt_int rv2849 = 1;
return rv2849; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEMPLATE_FITS(R17 * p_TS, R12 * p_R, R21 * p_BS) { RT_B_TICK(); 
R17 * l_P_2850; memset(&l_P_2850, 0, sizeof l_P_2850);
l_P_2850 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R30 * l_Q_2851; memset(&l_Q_2851, 0, sizeof l_Q_2851);
l_Q_2851 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
if ((!(((((*(R17 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL))) == ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_IV == ((rt_int)1LL))))))
{
{ rt_int rv2852 = 0;
return rv2852; }
}
for (;;) {
if (((l_P_2850 == NULL) || (l_Q_2851 == NULL))) goto L_end2853;
{
if ((!(((*(R17 *)rt_nil_check(l_P_2850))).f_IV == ((*(R30 *)rt_nil_check(l_Q_2851))).f_MODE)))
{
{ rt_int rv2854 = 0;
return rv2854; }
}
if (((((*(R17 *)rt_nil_check(l_P_2850))).f_B == NULL) || (((*(R30 *)rt_nil_check(l_Q_2851))).f_T == NULL)))
{
if (((!(((*(R17 *)rt_nil_check(l_P_2850))).f_B == NULL)) || (!(((*(R30 *)rt_nil_check(l_Q_2851))).f_T == NULL))))
{
{ rt_int rv2855 = 0;
return rv2855; }
}
}
else if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_2850))).f_B))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2856 = 0;
return rv2856; }
}
else if ((!r_TYPE_FITS_SPEC(((*(R17 *)rt_nil_check(l_P_2850))).f_B, ((*(R30 *)rt_nil_check(l_Q_2851))).f_T, p_BS)))
{
{ rt_int rv2857 = 0;
return rv2857; }
}
l_P_2850 = ((*(R17 *)rt_nil_check(l_P_2850))).f_NEXT;
l_Q_2851 = ((*(R30 *)rt_nil_check(l_Q_2851))).f_NEXT;
}
RT_B_TICK();
} L_end2853: ;
if (((!(l_P_2850 == NULL)) || (!(l_Q_2851 == NULL))))
{
{ rt_int rv2858 = 0;
return rv2858; }
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if ((!r_TYPE_FITS_SPEC(((*(R17 *)rt_nil_check(p_TS))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT, p_BS)))
{
{ rt_int rv2859 = 0;
return rv2859; }
}
}
{
R17 * l_X_2860; memset(&l_X_2860, 0, sizeof l_X_2860);
l_X_2860 = ((*(R17 *)rt_nil_check(p_TS))).f_D;
for (;;) {
if ((l_X_2860 == NULL)) goto L_end2861;
{
if ((!r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_D))).f_A, ((*(R17 *)rt_nil_check(l_X_2860))).f_NAME)))
{
{ rt_int rv2862 = 0;
return rv2862; }
}
l_X_2860 = ((*(R17 *)rt_nil_check(l_X_2860))).f_NEXT;
}
RT_B_TICK();
} L_end2861: ;
}
{ rt_int rv2863 = 1;
return rv2863; }
rt_raise(RT_X_INIT);
}
static rt_int r_TYPE_FITS_SPEC(R17 * p_TS, R22 * p_T, R21 * p_BS) { RT_B_TICK(); 
if ((r_STATIC_GENERIC(p_TS) || r_HAS_DERIVED(p_TS)))
{
{ rt_int rv2864 = r_UNIFY(p_TS, p_T, p_BS);
return rv2864; }
}
{ rt_int rv2865 = r_IDENTICAL_TYPE(r_RESOLVE(p_TS), p_T);
return rv2865; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_DERIVED(R17 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2866 = 0;
return rv2866; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2867 = 1;
return rv2867; }
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if (r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(p_TS))).f_A))
{
{ rt_int rv2868 = 1;
return rv2868; }
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if ((r_HAS_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_A) || r_HAS_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_B)))
{
{ rt_int rv2869 = 1;
return rv2869; }
}
}
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2870 = 1;
return rv2870; }
}
{ rt_int rv2871 = 0;
return rv2871; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R21 * p_BS) { RT_B_TICK(); 
R17 * l_NEEDL_2872; memset(&l_NEEDL_2872, 0, sizeof l_NEEDL_2872);
l_NEEDL_2872 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R21 * l_SAVED_2873; memset(&l_SAVED_2873, 0, sizeof l_SAVED_2873);
l_SAVED_2873 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R21 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_2872 == NULL)) goto L_end2874;
{
{
R17 * l_T_2875; memset(&l_T_2875, 0, sizeof l_T_2875);
l_T_2875 = ((*(R17 *)rt_nil_check(l_NEEDL_2872))).f_A;
for (;;) {
if ((l_T_2875 == NULL)) goto L_end2876;
{
if ((r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, ((*(R17 *)rt_nil_check(l_T_2875))).f_NAME) == NULL))
{
{
R29 * l_ARGS_2877; memset(&l_ARGS_2877, 0, sizeof l_ARGS_2877);
l_ARGS_2877 = NULL;
R29 * l_TAIL_2878; memset(&l_TAIL_2878, 0, sizeof l_TAIL_2878);
l_TAIL_2878 = NULL;
R17 * l_P_2879; memset(&l_P_2879, 0, sizeof l_P_2879);
l_P_2879 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_T_2875))).f_B))).f_A;
R12 * l_R_2880; memset(&l_R_2880, 0, sizeof l_R_2880);
rt_int l_ENTERED_2881; memset(&l_ENTERED_2881, 0, sizeof l_ENTERED_2881);
l_ENTERED_2881 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_2879 == NULL)) goto L_end2882;
{
{
R29 * l_A_2883; memset(&l_A_2883, 0, sizeof l_A_2883);
if ((((*(R17 *)rt_nil_check(l_P_2879))).f_B == NULL))
{
l_A_2883 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_2883 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R17 *)rt_nil_check(l_P_2879))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R29 *)rt_nil_check(l_A_2883))).f_MODE = ((*(R17 *)rt_nil_check(l_P_2879))).f_IV;
if ((l_TAIL_2878 == NULL))
{
l_ARGS_2877 = l_A_2883;
}
else
{
((*(R29 *)rt_nil_check(l_TAIL_2878))).f_NEXT = l_A_2883;
}
l_TAIL_2878 = l_A_2883;
}
l_P_2879 = ((*(R17 *)rt_nil_check(l_P_2879))).f_NEXT;
}
RT_B_TICK();
} L_end2882: ;
if (l_ENTERED_2881)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_2880 = r_FIND_ROUTINE(((*(R17 *)rt_nil_check(l_T_2875))).f_NAME, l_ARGS_2877, p_LINE, 0);
if ((l_R_2880 == NULL))
{
l_R_2880 = r_LOOKUP(((*(R17 *)rt_nil_check(l_T_2875))).f_NAME);
for (;;) {
if ((l_R_2880 == NULL)) goto L_end2884;
{
if ((((*(R12 *)rt_nil_check(l_R_2880))).f_KIND == g_Y_BUILTIN))
{
goto L_end2884;
}
l_R_2880 = r_LOOKUP_NEXT(l_R_2880);
}
RT_B_TICK();
} L_end2884: ;
}
if (((l_R_2880 == NULL) && (!r_IS_OPERATOR_NAME(((*(R17 *)rt_nil_check(l_T_2875))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R17 *)rt_nil_check(l_T_2875))).f_NAME);
}
if ((!(l_R_2880 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_R_2880))).f_KIND == g_Y_ROUTINE))
{
r_COMPUTE_USES(r_ORIGINAL(l_R_2880));
if ((!(((*(R12 *)rt_nil_check(r_ORIGINAL(l_R_2880)))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine named in a WHERE clause may not import data (5.2): ", 61), ((*(R17 *)rt_nil_check(l_T_2875))).f_NAME);
}
}
r_ADD_BIND(((*(R17 *)rt_nil_check(l_T_2875))).f_NAME, NULL, r_NO_MVAL(), l_R_2880, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R21 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_2875 = ((*(R17 *)rt_nil_check(l_T_2875))).f_NEXT;
}
RT_B_TICK();
} L_end2876: ;
}
l_NEEDL_2872 = ((*(R17 *)rt_nil_check(l_NEEDL_2872))).f_NEXT;
}
RT_B_TICK();
} L_end2874: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2873;
}
static rt_int r_DONTCARE_TYPE_ARG(R17 * p_TS) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2885 = 0;
return rv2885; }
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{
R17 * l_A_2886; memset(&l_A_2886, 0, sizeof l_A_2886);
l_A_2886 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_A_2886 == NULL)) goto L_end2887;
{
if ((((*(R17 *)rt_nil_check(l_A_2886))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2888 = 1;
return rv2888; }
}
l_A_2886 = ((*(R17 *)rt_nil_check(l_A_2886))).f_NEXT;
}
RT_B_TICK();
} L_end2887: ;
}
{ rt_int rv2889 = 0;
return rv2889; }
}
{
R12 * l_Y_2890; memset(&l_Y_2890, 0, sizeof l_Y_2890);
l_Y_2890 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
R17 * l_A_2891; memset(&l_A_2891, 0, sizeof l_A_2891);
l_A_2891 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R17 * l_F_2892; memset(&l_F_2892, 0, sizeof l_F_2892);
if ((l_Y_2890 == NULL))
{
{ rt_int rv2893 = 0;
return rv2893; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2890))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_2890))).f_DECL == NULL)))
{
{ rt_int rv2894 = 0;
return rv2894; }
}
l_F_2892 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2890))).f_DECL))).f_A;
for (;;) {
if ((l_F_2892 == NULL)) goto L_end2895;
{
{
R17 * l_N_2896; memset(&l_N_2896, 0, sizeof l_N_2896);
l_N_2896 = ((*(R17 *)rt_nil_check(l_F_2892))).f_A;
for (;;) {
if ((l_N_2896 == NULL)) goto L_end2897;
{
if ((l_A_2891 == NULL))
{
{ rt_int rv2898 = 0;
return rv2898; }
}
if (((((*(R17 *)rt_nil_check(l_F_2892))).f_B == NULL) && (((*(R17 *)rt_nil_check(l_A_2891))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2899 = 1;
return rv2899; }
}
l_A_2891 = ((*(R17 *)rt_nil_check(l_A_2891))).f_NEXT;
l_N_2896 = ((*(R17 *)rt_nil_check(l_N_2896))).f_NEXT;
}
RT_B_TICK();
} L_end2897: ;
}
l_F_2892 = ((*(R17 *)rt_nil_check(l_F_2892))).f_NEXT;
}
RT_B_TICK();
} L_end2895: ;
}
{ rt_int rv2900 = 0;
return rv2900; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R21 * p_BS, R29 * p_ARGS) { RT_B_TICK(); 
R29 * l_A_2901; memset(&l_A_2901, 0, sizeof l_A_2901);
l_A_2901 = p_ARGS;
R12 * l_I_2902; memset(&l_I_2902, 0, sizeof l_I_2902);
l_I_2902 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R21 * l_SAVED_2903; memset(&l_SAVED_2903, 0, sizeof l_SAVED_2903);
l_SAVED_2903 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R12 * l_SAVED_SEG_2904; memset(&l_SAVED_SEG_2904, 0, sizeof l_SAVED_SEG_2904);
l_SAVED_SEG_2904 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R12 * l_HOME_2905; memset(&l_HOME_2905, 0, sizeof l_HOME_2905);
l_HOME_2905 = r_ENTER_HOME(p_G);
R30 * l_P_2906; memset(&l_P_2906, 0, sizeof l_P_2906);
l_P_2906 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R30 * l_TAIL_2907; memset(&l_TAIL_2907, 0, sizeof l_TAIL_2907);
l_TAIL_2907 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_2902)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_2902))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_2902))).f_LINKAGE = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_I_2902))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_2902))).f_PARAMS = NULL;
S_R9(&((*(R12 *)rt_nil_check(l_I_2902))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_2902))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_2902;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(p_G))).f_HOME;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_2906 == NULL)) goto L_end2908;
{
{
R30 * l_PM_2909; memset(&l_PM_2909, 0, sizeof l_PM_2909);
l_PM_2909 = ({ R30 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R30(&(*(R30 *)rt_nil_check(l_PM_2909)), (*(R30 *)rt_nil_check(l_P_2906)), 0);
((*(R30 *)rt_nil_check(l_PM_2909))).f_NEXT = NULL;
if ((((*(R30 *)rt_nil_check(l_P_2906))).f_TS == NULL))
{
((*(R30 *)rt_nil_check(l_PM_2909))).f_T = NULL;
}
else if ((((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2906))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R30 *)rt_nil_check(l_PM_2909))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R30 *)rt_nil_check(l_P_2906))).f_TS) && ((*(R29 *)rt_nil_check(l_A_2901))).f_HAVE))
{
((*(R30 *)rt_nil_check(l_PM_2909))).f_T = (((*(R29 *)rt_nil_check(l_A_2901))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R30 *)rt_nil_check(l_PM_2909))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R30 *)rt_nil_check(l_PM_2909))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R30 *)rt_nil_check(l_PM_2909))).f_T = ((*(R22 *)rt_nil_check(((*(R30 *)rt_nil_check(l_PM_2909))).f_T))).f_BASE;
}
}
}
else
{
((*(R30 *)rt_nil_check(l_PM_2909))).f_T = r_RESOLVE(((*(R30 *)rt_nil_check(l_P_2906))).f_TS);
}
if ((!(((*(R30 *)rt_nil_check(l_P_2906))).f_TS == NULL)))
{
if (((((((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2906))).f_TS))).f_KIND == g_TS_GEN) || (((((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2906))).f_TS))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2906))).f_TS))).f_A == NULL))))) && ((((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2906))).f_TS))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((!(r_FIND_BIND(p_BS, ((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2906))).f_TS))).f_NAME) == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(r_FIND_BIND(p_BS, ((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2906))).f_TS))).f_NAME)))).f_T == NULL)))
{
((*(R30 *)rt_nil_check(l_PM_2909))).f_T = r_MARK_GENP(((*(R30 *)rt_nil_check(l_PM_2909))).f_T, ((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2906))).f_TS))).f_NAME);
}
}
}
}
((*(R30 *)rt_nil_check(l_PM_2909))).f_TS = NULL;
if ((l_TAIL_2907 == NULL))
{
((*(R12 *)rt_nil_check(l_I_2902))).f_PARAMS = l_PM_2909;
}
else
{
((*(R30 *)rt_nil_check(l_TAIL_2907))).f_NEXT = l_PM_2909;
}
l_TAIL_2907 = l_PM_2909;
}
l_P_2906 = ((*(R30 *)rt_nil_check(l_P_2906))).f_NEXT;
l_A_2901 = ((*(R29 *)rt_nil_check(l_A_2901))).f_NEXT;
}
RT_B_TICK();
} L_end2908: ;
((*(R12 *)rt_nil_check(l_I_2902))).f_RESULT = r_RESULT_TYPE(l_I_2902);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2903;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_2904;
r_LEAVE_HOME(p_G, l_HOME_2905);
S_R9(&((*(R12 *)rt_nil_check(l_I_2902))).f_FWD, r_C_HEADER(l_I_2902), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_2902))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_2902))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_2902;
{ R12 * rv2910 = l_I_2902;
return rv2910; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R9 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2911 = 0;
return rv2911; }
}
{ rt_int rv2912 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv2912; }
rt_raise(RT_X_INIT);
}
static R17 * r_SUBST_FORMALS(R17 * p_TS, R17 * p_FORMALS, R17 * p_ARGS) { RT_B_TICK(); 
R17 * l_C_2913; memset(&l_C_2913, 0, sizeof l_C_2913);
if ((p_TS == NULL))
{
{ R17 * rv2914 = NULL;
return rv2914; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R17 * l_F_2915; memset(&l_F_2915, 0, sizeof l_F_2915);
l_F_2915 = p_FORMALS;
R17 * l_A_2916; memset(&l_A_2916, 0, sizeof l_A_2916);
l_A_2916 = p_ARGS;
for (;;) {
if ((l_F_2915 == NULL)) goto L_end2917;
{
{
R17 * l_N_2918; memset(&l_N_2918, 0, sizeof l_N_2918);
l_N_2918 = ((*(R17 *)rt_nil_check(l_F_2915))).f_A;
for (;;) {
if ((l_N_2918 == NULL)) goto L_end2919;
{
if ((l_A_2916 == NULL))
{
{ R17 * rv2920 = p_TS;
return rv2920; }
}
if (((((*(R17 *)rt_nil_check(l_F_2915))).f_B == NULL) && r_TEQ(((*(R17 *)rt_nil_check(l_N_2918))).f_NAME, ((*(R17 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R17 * rv2921 = l_A_2916;
return rv2921; }
}
l_A_2916 = ((*(R17 *)rt_nil_check(l_A_2916))).f_NEXT;
l_N_2918 = ((*(R17 *)rt_nil_check(l_N_2918))).f_NEXT;
}
RT_B_TICK();
} L_end2919: ;
}
l_F_2915 = ((*(R17 *)rt_nil_check(l_F_2915))).f_NEXT;
}
RT_B_TICK();
} L_end2917: ;
}
{ R17 * rv2922 = p_TS;
return rv2922; }
}
l_C_2913 = r_COPY_NODE(p_TS);
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R17 *)rt_nil_check(l_C_2913))).f_C = r_SUBST_FORMALS(((*(R17 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R17 *)rt_nil_check(l_C_2913))).f_A = r_SUBST_FORMALS(((*(R17 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R17 * rv2923 = l_C_2913;
return rv2923; }
rt_raise(RT_X_INIT);
}
static R17 * r_COPY_NODE(R17 * p_N) { RT_B_TICK(); 
R17 * l_C_2924; memset(&l_C_2924, 0, sizeof l_C_2924);
l_C_2924 = ({ R17 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R17(&(*(R17 *)rt_nil_check(l_C_2924)), (*(R17 *)rt_nil_check(p_N)), 0);
((*(R17 *)rt_nil_check(l_C_2924))).f_NEXT = NULL;
{ R17 * rv2925 = l_C_2924;
return rv2925; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R17 * p_L, R9 p_NAME) { RT_B_TICK(); 
R17 * l_P_2926; memset(&l_P_2926, 0, sizeof l_P_2926);
l_P_2926 = p_L;
for (;;) {
if ((l_P_2926 == NULL)) goto L_end2927;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_2926))).f_NAME, p_NAME))
{
{ rt_int rv2928 = 1;
return rv2928; }
}
l_P_2926 = ((*(R17 *)rt_nil_check(l_P_2926))).f_NEXT;
}
RT_B_TICK();
} L_end2927: ;
{ rt_int rv2929 = 0;
return rv2929; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_IS_2930; memset(&l_IS_2930, 0, sizeof l_IS_2930);
l_IS_2930 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv2931 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2931; }
}
if ((l_IS_2930 == NULL))
{
{ rt_int rv2932 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2932; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R20 *)rt_nil_check(l_IS_2930))).f_ID) || (((*(R20 *)rt_nil_check(l_IS_2930))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv2933 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2933; }
}
if ((!(((*(R20 *)rt_nil_check(l_IS_2930))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2930))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2934 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv2934; }
}
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2930))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv2935 = 0;
return rv2935; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { RT_B_TICK(); 
R17 * l_ITEMS_2936; memset(&l_ITEMS_2936, 0, sizeof l_ITEMS_2936);
l_ITEMS_2936 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R17 * l_HEAD_2937; memset(&l_HEAD_2937, 0, sizeof l_HEAD_2937);
l_HEAD_2937 = NULL;
R17 * l_TAIL_2938; memset(&l_TAIL_2938, 0, sizeof l_TAIL_2938);
l_TAIL_2938 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_2936 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R17 *)rt_nil_check(l_ITEMS_2936))).f_A, &l_HEAD_2937, &l_TAIL_2938);
r_ADD_USES(((*(R17 *)rt_nil_check(l_ITEMS_2936))).f_B, &l_HEAD_2937, &l_TAIL_2938);
{
R17 * l_R_2939; memset(&l_R_2939, 0, sizeof l_R_2939);
l_R_2939 = ((*(R17 *)rt_nil_check(l_ITEMS_2936))).f_C;
for (;;) {
if ((l_R_2939 == NULL)) goto L_end2940;
{
{
R12 * l_Z_2941; memset(&l_Z_2941, 0, sizeof l_Z_2941);
l_Z_2941 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_2939))).f_NAME);
if (((l_Z_2941 == NULL) && (!r_LOCAL_MODULE_EXPORTS(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_C, ((*(R17 *)rt_nil_check(l_R_2939))).f_NAME))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_R_2939))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R17 *)rt_nil_check(l_R_2939))).f_NAME);
}
for (;;) {
if ((l_Z_2941 == NULL)) goto L_end2942;
{
if ((((*(R12 *)rt_nil_check(l_Z_2941))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2943; memset(&l_O_2943, 0, sizeof l_O_2943);
l_O_2943 = r_ORIGINAL(l_Z_2941);
R17 * l_U_2944; memset(&l_U_2944, 0, sizeof l_U_2944);
r_COMPUTE_USES(l_O_2943);
l_U_2944 = ((*(R12 *)rt_nil_check(l_O_2943))).f_USES;
for (;;) {
if ((l_U_2944 == NULL)) goto L_end2945;
{
if ((!r_IN_IDENTS(l_HEAD_2937, ((*(R17 *)rt_nil_check(l_U_2944))).f_NAME)))
{
{
R17 * l_N_2946; memset(&l_N_2946, 0, sizeof l_N_2946);
l_N_2946 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_U_2944))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_2946))).f_NAME, ((*(R17 *)rt_nil_check(l_U_2944))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2946))).f_IV = ((*(R17 *)rt_nil_check(l_U_2944))).f_IV;
r_ADD_LIST(l_N_2946, &l_HEAD_2937, &l_TAIL_2938);
}
}
l_U_2944 = ((*(R17 *)rt_nil_check(l_U_2944))).f_NEXT;
}
RT_B_TICK();
} L_end2945: ;
}
}
l_Z_2941 = r_LOOKUP_NEXT(l_Z_2941);
}
RT_B_TICK();
} L_end2942: ;
}
l_R_2939 = ((*(R17 *)rt_nil_check(l_R_2939))).f_NEXT;
}
RT_B_TICK();
} L_end2940: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_2937;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static rt_int r_LOCAL_MODULE_EXPORTS(R17 * p_B, R9 p_NAME) { RT_B_TICK(); 
R17 * l_M_2947; memset(&l_M_2947, 0, sizeof l_M_2947);
if ((p_B == NULL))
{
{ rt_int rv2948 = 0;
return rv2948; }
}
l_M_2947 = ((*(R17 *)rt_nil_check(p_B))).f_C;
for (;;) {
if ((l_M_2947 == NULL)) goto L_end2949;
{
if ((((*(R17 *)rt_nil_check(l_M_2947))).f_KIND == g_N_MODULE))
{
if ((((((*(R17 *)rt_nil_check(l_M_2947))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(l_M_2947))).f_B, p_NAME)) || r_LOCAL_MODULE_EXPORTS(((*(R17 *)rt_nil_check(l_M_2947))).f_C, p_NAME)))
{
{ rt_int rv2950 = 1;
return rv2950; }
}
}
l_M_2947 = ((*(R17 *)rt_nil_check(l_M_2947))).f_NEXT;
}
RT_B_TICK();
} L_end2949: ;
{ rt_int rv2951 = 0;
return rv2951; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_USES(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_2952; memset(&l_R_2952, 0, sizeof l_R_2952);
l_R_2952 = p_RS;
for (;;) {
if ((l_R_2952 == NULL)) goto L_end2953;
{
if ((((*(R17 *)rt_nil_check(l_R_2952))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_2952));
if ((!(((*(R17 *)rt_nil_check(l_R_2952))).f_E == NULL)))
{
r_IMPORTS_KNOWN(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2952))).f_E))).f_A, 0);
r_IMPORTS_KNOWN(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2952))).f_E))).f_B, 1);
r_INPUT_IMPORT_CONFLICT(((*(R17 *)rt_nil_check(l_R_2952))).f_E, ((*(R17 *)rt_nil_check(l_R_2952))).f_LINE);
}
}
l_R_2952 = ((*(R17 *)rt_nil_check(l_R_2952))).f_NEXT;
}
RT_B_TICK();
} L_end2953: ;
}
static void r_IMPORTS_KNOWN(R17 * p_L, rt_int p_INOUT) { RT_B_TICK(); 
R17 * l_P_2954; memset(&l_P_2954, 0, sizeof l_P_2954);
l_P_2954 = p_L;
for (;;) {
if ((l_P_2954 == NULL)) goto L_end2955;
{
{
R12 * l_V_2956; memset(&l_V_2956, 0, sizeof l_V_2956);
l_V_2956 = r_LOOKUP(((*(R17 *)rt_nil_check(l_P_2954))).f_NAME);
if ((!(l_V_2956 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_V_2956))).f_KIND == g_Y_VAR))
{
if ((((!r_CHECK_IMPORTED(l_V_2956, ((*(R17 *)rt_nil_check(l_P_2954))).f_LINE)) && p_INOUT) && (!((*(R12 *)rt_nil_check(l_V_2956))).f_INPUT)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_2954))).f_LINE, rt_str("imported for change, but only for input in the enclosing scope (4.1.1): ", 72), ((*(R17 *)rt_nil_check(l_P_2954))).f_NAME);
}
}
}
}
l_P_2954 = ((*(R17 *)rt_nil_check(l_P_2954))).f_NEXT;
}
RT_B_TICK();
} L_end2955: ;
}
static void r_INPUT_IMPORT_CONFLICT(R17 * p_ITEMS, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_2957; memset(&l_R_2957, 0, sizeof l_R_2957);
l_R_2957 = ((*(R17 *)rt_nil_check(p_ITEMS))).f_C;
for (;;) {
if ((l_R_2957 == NULL)) goto L_end2958;
{
{
R12 * l_Z_2959; memset(&l_Z_2959, 0, sizeof l_Z_2959);
l_Z_2959 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_2957))).f_NAME);
for (;;) {
if ((l_Z_2959 == NULL)) goto L_end2960;
{
if ((((*(R12 *)rt_nil_check(l_Z_2959))).f_KIND == g_Y_ROUTINE))
{
{
R17 * l_D_2961; memset(&l_D_2961, 0, sizeof l_D_2961);
l_D_2961 = ((*(R12 *)rt_nil_check(r_ORIGINAL(l_Z_2959)))).f_DECL;
if ((!(l_D_2961 == NULL)))
{
if (((((*(R17 *)rt_nil_check(l_D_2961))).f_KIND == g_N_ROUTINE) && (!(((*(R17 *)rt_nil_check(l_D_2961))).f_E == NULL))))
{
{
R17 * l_V_2962; memset(&l_V_2962, 0, sizeof l_V_2962);
l_V_2962 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_2961))).f_E))).f_B;
for (;;) {
if ((l_V_2962 == NULL)) goto L_end2963;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(p_ITEMS))).f_A, ((*(R17 *)rt_nil_check(l_V_2962))).f_NAME))
{
r_FAILT(p_LINE, rt_str("imported for input, and inout by an imported routine (4.3.1): ", 62), ((*(R17 *)rt_nil_check(l_V_2962))).f_NAME);
}
l_V_2962 = ((*(R17 *)rt_nil_check(l_V_2962))).f_NEXT;
}
RT_B_TICK();
} L_end2963: ;
}
}
}
}
}
l_Z_2959 = r_LOOKUP_NEXT(l_Z_2959);
}
RT_B_TICK();
} L_end2960: ;
}
l_R_2957 = ((*(R17 *)rt_nil_check(l_R_2957))).f_NEXT;
}
RT_B_TICK();
} L_end2958: ;
}
static void r_ADD_USES(R17 * p_L, R17 * *p_HEAD, R17 * *p_TAIL) { RT_B_TICK(); 
R17 * l_P_2964; memset(&l_P_2964, 0, sizeof l_P_2964);
l_P_2964 = p_L;
for (;;) {
if ((l_P_2964 == NULL)) goto L_end2965;
{
{
R12 * l_V_2966; memset(&l_V_2966, 0, sizeof l_V_2966);
l_V_2966 = r_LOOKUP(((*(R17 *)rt_nil_check(l_P_2964))).f_NAME);
R17 * l_N_2967; memset(&l_N_2967, 0, sizeof l_N_2967);
l_N_2967 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_P_2964))).f_LINE);
if ((l_V_2966 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_2964))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R17 *)rt_nil_check(l_P_2964))).f_NAME);
}
S_R9(&((*(R17 *)rt_nil_check(l_N_2967))).f_NAME, ((*(R17 *)rt_nil_check(l_P_2964))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2967))).f_IV = ((*(R12 *)rt_nil_check(l_V_2966))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_2966))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_2967, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_2964 = ((*(R17 *)rt_nil_check(l_P_2964))).f_NEXT;
}
RT_B_TICK();
} L_end2965: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_IS_2968; memset(&l_IS_2968, 0, sizeof l_IS_2968);
l_IS_2968 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R17 * l_U_2969; memset(&l_U_2969, 0, sizeof l_U_2969);
l_U_2969 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_2968 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R20 *)rt_nil_check(l_IS_2968))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_2969 == NULL)) goto L_end2970;
{
if ((!(((*(R17 *)rt_nil_check(l_U_2969))).f_IV == ((*(R20 *)rt_nil_check(l_IS_2968))).f_ID)))
{
if ((((*(R20 *)rt_nil_check(l_IS_2968))).f_IMPORTS == NULL))
{
r_FAIL2(p_LINE, rt_str("the routine ", 12), ((*(R12 *)rt_nil_check(p_Y))).f_NAME, rt_str(" uses the variable ", 19), ((*(R17 *)rt_nil_check(l_U_2969))).f_NAME, rt_str(": import one of them (4.1.1)", 28));
}
if ((!(((((((r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2968))).f_IMPORTS))).f_A, ((*(R17 *)rt_nil_check(l_U_2969))).f_NAME) || r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2968))).f_IMPORTS))).f_B, ((*(R17 *)rt_nil_check(l_U_2969))).f_NAME)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2968))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2968))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2968))).f_IMPORTS))).f_E, p_Y)) || ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL)) && r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2968))).f_IMPORTS))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))) || r_IMPORTED_ROUTINE_USES(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_2968))).f_IMPORTS))).f_C, ((*(R17 *)rt_nil_check(l_U_2969))).f_NAME)))))
{
r_FAIL2(p_LINE, rt_str("the routine ", 12), ((*(R12 *)rt_nil_check(p_Y))).f_NAME, rt_str(" uses the variable ", 19), ((*(R17 *)rt_nil_check(l_U_2969))).f_NAME, rt_str(": import one of them (4.1.1)", 28));
}
}
l_U_2969 = ((*(R17 *)rt_nil_check(l_U_2969))).f_NEXT;
}
RT_B_TICK();
} L_end2970: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R17 * p_RS, R9 p_NAME) { RT_B_TICK(); 
R17 * l_R_2971; memset(&l_R_2971, 0, sizeof l_R_2971);
l_R_2971 = p_RS;
for (;;) {
if ((l_R_2971 == NULL)) goto L_end2972;
{
{
R12 * l_Z_2973; memset(&l_Z_2973, 0, sizeof l_Z_2973);
l_Z_2973 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_2971))).f_NAME);
for (;;) {
if ((l_Z_2973 == NULL)) goto L_end2974;
{
if ((((*(R12 *)rt_nil_check(l_Z_2973))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_2975; memset(&l_O_2975, 0, sizeof l_O_2975);
l_O_2975 = r_ORIGINAL(l_Z_2973);
r_COMPUTE_USES(l_O_2975);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_2975))).f_USES, p_NAME))
{
{ rt_int rv2976 = 1;
return rv2976; }
}
}
}
l_Z_2973 = r_LOOKUP_NEXT(l_Z_2973);
}
RT_B_TICK();
} L_end2974: ;
}
l_R_2971 = ((*(R17 *)rt_nil_check(l_R_2971))).f_NEXT;
}
RT_B_TICK();
} L_end2972: ;
{ rt_int rv2977 = 0;
return rv2977; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R17 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_2978; memset(&l_M_2978, 0, sizeof l_M_2978);
l_M_2978 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_2978 == NULL)) goto L_end2979;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_2978))).f_NAME))
{
{ rt_int rv2980 = 1;
return rv2980; }
}
l_M_2978 = ((*(R12 *)rt_nil_check(l_M_2978))).f_MODL;
}
RT_B_TICK();
} L_end2979: ;
{ rt_int rv2981 = 0;
return rv2981; }
rt_raise(RT_X_INIT);
}
static R9 r_BASE_PART(R9 p_N, rt_int p_P) { RT_B_TICK(); 
{ R9 rv2982 = r_MKN(rt_b_slice(r_STR(p_N, (p_N).f_LEN), rt_add(p_P, ((rt_int)1LL)), rt_sub((p_N).f_LEN, ((rt_int)1LL))));
return rv2982; }
rt_raise(RT_X_INIT);
}
static R9 r_BASE_NAME(R12 * p_Y) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R9 rv2983 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv2983; }
}
{ R9 rv2984 = r_BASE_PART(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN);
return rv2984; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R9 p_NAME) { RT_B_TICK(); 
R18 * l_C_2985; memset(&l_C_2985, 0, sizeof l_C_2985);
l_C_2985 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2985 == NULL)) goto L_end2986;
{
if ((((*(R18 *)rt_nil_check(l_C_2985))).f_KIND == ((rt_int)1LL)))
{
goto L_end2986;
}
if ((((*(R18 *)rt_nil_check(l_C_2985))).f_KIND == ((rt_int)3LL)))
{
{
R17 * l_H_2987; memset(&l_H_2987, 0, sizeof l_H_2987);
l_H_2987 = ((*(R18 *)rt_nil_check(l_C_2985))).f_HANDLERS;
for (;;) {
if ((l_H_2987 == NULL)) goto L_end2988;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_H_2987))).f_A, p_NAME))
{
{ rt_int rv2989 = 1;
return rv2989; }
}
l_H_2987 = ((*(R17 *)rt_nil_check(l_H_2987))).f_NEXT;
}
RT_B_TICK();
} L_end2988: ;
}
}
l_C_2985 = ((*(R18 *)rt_nil_check(l_C_2985))).f_NEXT;
}
RT_B_TICK();
} L_end2986: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R20 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv2990 = 1;
return rv2990; }
}
}
{ rt_int rv2991 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv2991; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R9 p_NAME) { RT_B_TICK(); 
R18 * l_C_2992; memset(&l_C_2992, 0, sizeof l_C_2992);
l_C_2992 = ({ R18 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R18(&(*(R18 *)rt_nil_check(l_C_2992)), ({ R18 rc2993; memset(&rc2993, 0, sizeof rc2993);  rc2993.f_KIND = p_KIND; S_R9(&rc2993.f_NAME, p_NAME, 0); rc2993.f_HANDLERS = NULL; rc2993.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc2993; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_2992;
}
static void r_POP_CTX(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R18 * r_LEAVE(rt_int p_KIND) { RT_B_TICK(); 
R18 * l_C_2994; memset(&l_C_2994, 0, sizeof l_C_2994);
l_C_2994 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_2994 == NULL)) goto L_end2995;
{
if ((((*(R18 *)rt_nil_check(l_C_2994))).f_KIND == p_KIND))
{
{ R18 * rv2996 = l_C_2994;
return rv2996; }
}
if ((((*(R18 *)rt_nil_check(l_C_2994))).f_KIND == ((rt_int)1LL)))
{
{ R18 * rv2997 = NULL;
return rv2997; }
}
if ((((*(R18 *)rt_nil_check(l_C_2994))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R18 *)rt_nil_check(l_C_2994))).f_NAME));
}
l_C_2994 = ((*(R18 *)rt_nil_check(l_C_2994))).f_NEXT;
}
RT_B_TICK();
} L_end2995: ;
{ R18 * rv2998 = NULL;
return rv2998; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { RT_B_TICK(); 
R18 * l_C_2999; memset(&l_C_2999, 0, sizeof l_C_2999);
l_C_2999 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_3000; memset(&l_N_3000, 0, sizeof l_N_3000);
l_N_3000 = ((rt_int)0LL);
for (;;) {
if ((l_C_2999 == NULL)) goto L_end3001;
{
if ((((*(R18 *)rt_nil_check(l_C_2999))).f_KIND == ((rt_int)1LL)))
{
goto L_end3001;
}
if ((((*(R18 *)rt_nil_check(l_C_2999))).f_KIND == ((rt_int)3LL)))
{
l_N_3000 = rt_add(l_N_3000, ((rt_int)1LL));
}
l_C_2999 = ((*(R18 *)rt_nil_check(l_C_2999))).f_NEXT;
}
RT_B_TICK();
} L_end3001: ;
{ rt_int rv3002 = l_N_3000;
return rv3002; }
rt_raise(RT_X_INIT);
}
static R9 r_EXC_NAME(R9 p_NAME) { RT_B_TICK(); 
R17 * l_N_3003; memset(&l_N_3003, 0, sizeof l_N_3003);
l_N_3003 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_3003 == NULL)) goto L_end3004;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_N_3003))).f_NAME, p_NAME))
{
{ R9 rv3005 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv3005; }
}
l_N_3003 = ((*(R17 *)rt_nil_check(l_N_3003))).f_NEXT;
}
RT_B_TICK();
} L_end3004: ;
l_N_3003 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_3003))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_3003))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_3003;
{ R9 rv3006 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv3006; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R17 * p_DECLS) { RT_B_TICK(); 
R17 * l_D_3007; memset(&l_D_3007, 0, sizeof l_D_3007);
l_D_3007 = p_DECLS;
for (;;) {
if ((l_D_3007 == NULL)) goto L_end3008;
{
if (((((*(R17 *)rt_nil_check(l_D_3007))).f_KIND == g_N_TYPE) || (((*(R17 *)rt_nil_check(l_D_3007))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_3009; memset(&l_Y_3009, 0, sizeof l_Y_3009);
l_Y_3009 = r_NEW_SYM(g_Y_TYPE, ((*(R17 *)rt_nil_check(l_D_3007))).f_NAME);
if ((((*(R17 *)rt_nil_check(l_D_3007))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_3009))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_3009))).f_DECL = l_D_3007;
r_DEFINE(l_Y_3009, ((*(R17 *)rt_nil_check(l_D_3007))).f_LINE);
if ((((*(R17 *)rt_nil_check(l_D_3007))).f_KIND == g_N_TYPE))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_3007))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_3007))).f_B))).f_A)))
{
((*(R7 *)rt_nil_check(g_W))).f_CHARSETS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_CHARSETS, ((rt_int)1LL));
}
}
}
}
l_D_3007 = ((*(R17 *)rt_nil_check(l_D_3007))).f_NEXT;
}
RT_B_TICK();
} L_end3008: ;
l_D_3007 = p_DECLS;
for (;;) {
if ((l_D_3007 == NULL)) goto L_end3010;
{
if (((((*(R17 *)rt_nil_check(l_D_3007))).f_KIND == g_N_TYPE) || (((*(R17 *)rt_nil_check(l_D_3007))).f_KIND == g_N_REPTYPE)))
{
{
R17 * l_SEEN_3011; memset(&l_SEEN_3011, 0, sizeof l_SEEN_3011);
l_SEEN_3011 = NULL;
rt_int l_FOUND_3012; memset(&l_FOUND_3012, 0, sizeof l_FOUND_3012);
l_FOUND_3012 = 0;
r_REFERS(((*(R17 *)rt_nil_check(l_D_3007))).f_B, C_R9(((*(R17 *)rt_nil_check(l_D_3007))).f_NAME), p_DECLS, &l_SEEN_3011, &l_FOUND_3012);
if (l_FOUND_3012)
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_3007))).f_LINE, rt_str("a circular type declaration (3.12.1, 3.12.3): ", 46), ((*(R17 *)rt_nil_check(l_D_3007))).f_NAME);
}
}
{
R17 * l_F_3013; memset(&l_F_3013, 0, sizeof l_F_3013);
l_F_3013 = ((*(R17 *)rt_nil_check(l_D_3007))).f_A;
for (;;) {
if ((l_F_3013 == NULL)) goto L_end3014;
{
if (((((*(R17 *)rt_nil_check(l_F_3013))).f_IV == ((rt_int)1LL)) && (((*(R17 *)rt_nil_check(l_D_3007))).f_KIND == g_N_TYPE)))
{
{
R17 * l_N_3015; memset(&l_N_3015, 0, sizeof l_N_3015);
l_N_3015 = ((*(R17 *)rt_nil_check(l_F_3013))).f_A;
for (;;) {
if ((l_N_3015 == NULL)) goto L_end3016;
{
if (r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_D_3007))).f_B, ((*(R17 *)rt_nil_check(l_N_3015))).f_NAME))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_3007))).f_LINE, rt_str("a TAG formal is only a tag-name or an argument for a TAG formal (3.12.1): ", 74), ((*(R17 *)rt_nil_check(l_N_3015))).f_NAME);
}
l_N_3015 = ((*(R17 *)rt_nil_check(l_N_3015))).f_NEXT;
}
RT_B_TICK();
} L_end3016: ;
}
}
if ((!(((*(R17 *)rt_nil_check(l_F_3013))).f_B == NULL)))
{
if (r_NAMES_VARIABLE(((*(R17 *)rt_nil_check(l_F_3013))).f_B, p_DECLS))
{
r_FAIL(((*(R17 *)rt_nil_check(l_F_3013))).f_LINE, rt_str("the type-arguments in the type of a formal must be manifest (3.12.1)", 68));
}
}
l_F_3013 = ((*(R17 *)rt_nil_check(l_F_3013))).f_NEXT;
}
RT_B_TICK();
} L_end3014: ;
}
}
l_D_3007 = ((*(R17 *)rt_nil_check(l_D_3007))).f_NEXT;
}
RT_B_TICK();
} L_end3010: ;
l_D_3007 = p_DECLS;
for (;;) {
if ((l_D_3007 == NULL)) goto L_end3017;
{
if ((((*(R17 *)rt_nil_check(l_D_3007))).f_KIND == g_N_TYPE))
{
{
R17 * l_F_3018; memset(&l_F_3018, 0, sizeof l_F_3018);
l_F_3018 = ((*(R17 *)rt_nil_check(l_D_3007))).f_A;
for (;;) {
if ((l_F_3018 == NULL)) goto L_end3019;
{
if (((((*(R17 *)rt_nil_check(l_F_3018))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(l_F_3018))).f_B == NULL))))
{
{
R22 * l_FT_3020; memset(&l_FT_3020, 0, sizeof l_FT_3020);
l_FT_3020 = r_REAL_TYPE(r_RESOLVE(((*(R17 *)rt_nil_check(l_F_3018))).f_B));
if (((!r_IS_SCALAR(l_FT_3020)) || (!(((*(R22 *)rt_nil_check(l_FT_3020))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_F_3018))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
}
l_F_3018 = ((*(R17 *)rt_nil_check(l_F_3018))).f_NEXT;
}
RT_B_TICK();
} L_end3019: ;
}
}
l_D_3007 = ((*(R17 *)rt_nil_check(l_D_3007))).f_NEXT;
}
RT_B_TICK();
} L_end3017: ;
}
static void r_REFERS(R17 * p_L, R9 p_TARGET, R17 * p_DECLS, R17 * *p_SEEN, rt_int *p_FOUND) { RT_B_TICK(); 
R17 * l_N_3021; memset(&l_N_3021, 0, sizeof l_N_3021);
l_N_3021 = p_L;
for (;;) {
if (((l_N_3021 == NULL) || (*p_FOUND))) goto L_end3022;
{
if (((((*(R17 *)rt_nil_check(l_N_3021))).f_KIND == g_TS_NAME) || (((*(R17 *)rt_nil_check(l_N_3021))).f_KIND == g_N_REP)))
{
if ((!r_TEQS(((*(R17 *)rt_nil_check(l_N_3021))).f_NAME, rt_str("PTR", 3))))
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_N_3021))).f_NAME, p_TARGET))
{
(*p_FOUND) = 1;
return;
}
if ((!r_IN_IDENTS((*p_SEEN), ((*(R17 *)rt_nil_check(l_N_3021))).f_NAME)))
{
{
R17 * l_M_3023; memset(&l_M_3023, 0, sizeof l_M_3023);
l_M_3023 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_N_3021))).f_LINE);
R17 * l_D_3024; memset(&l_D_3024, 0, sizeof l_D_3024);
l_D_3024 = p_DECLS;
S_R9(&((*(R17 *)rt_nil_check(l_M_3023))).f_NAME, ((*(R17 *)rt_nil_check(l_N_3021))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_M_3023))).f_NEXT = (*p_SEEN);
(*p_SEEN) = l_M_3023;
for (;;) {
if ((l_D_3024 == NULL)) goto L_end3025;
{
if (((((((*(R17 *)rt_nil_check(l_D_3024))).f_KIND == g_N_TYPE) || (((*(R17 *)rt_nil_check(l_D_3024))).f_KIND == g_N_REPTYPE))) && r_TEQ(((*(R17 *)rt_nil_check(l_D_3024))).f_NAME, ((*(R17 *)rt_nil_check(l_N_3021))).f_NAME)))
{
r_REFERS(((*(R17 *)rt_nil_check(l_D_3024))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
l_D_3024 = ((*(R17 *)rt_nil_check(l_D_3024))).f_NEXT;
}
RT_B_TICK();
} L_end3025: ;
}
}
r_REFERS(((*(R17 *)rt_nil_check(l_N_3021))).f_A, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_3021))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_3021))).f_C, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
}
else
{
r_REFERS(((*(R17 *)rt_nil_check(l_N_3021))).f_A, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_3021))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_3021))).f_C, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_3021))).f_D, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
l_N_3021 = ((*(R17 *)rt_nil_check(l_N_3021))).f_NEXT;
}
RT_B_TICK();
} L_end3022: ;
}
static rt_int r_TAG_MISUSED(R17 * p_L, R9 p_NAME) { RT_B_TICK(); 
R17 * l_N_3026; memset(&l_N_3026, 0, sizeof l_N_3026);
l_N_3026 = p_L;
for (;;) {
if ((l_N_3026 == NULL)) goto L_end3027;
{
if ((((*(R17 *)rt_nil_check(l_N_3026))).f_KIND == g_TS_NAME))
{
{
R17 * l_A_3028; memset(&l_A_3028, 0, sizeof l_A_3028);
l_A_3028 = ((*(R17 *)rt_nil_check(l_N_3026))).f_A;
for (;;) {
if ((l_A_3028 == NULL)) goto L_end3029;
{
if ((!((((((((*(R17 *)rt_nil_check(l_A_3028))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_A_3028))).f_KIND == g_TS_NAME))) && r_TEQ(((*(R17 *)rt_nil_check(l_A_3028))).f_NAME, p_NAME)) && (((*(R17 *)rt_nil_check(l_A_3028))).f_A == NULL)))))
{
if (r_TAG_MISUSED1(l_A_3028, p_NAME))
{
{ rt_int rv3030 = 1;
return rv3030; }
}
}
l_A_3028 = ((*(R17 *)rt_nil_check(l_A_3028))).f_NEXT;
}
RT_B_TICK();
} L_end3029: ;
}
if (((r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_N_3026))).f_B, p_NAME) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_N_3026))).f_C, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_N_3026))).f_E, p_NAME)))
{
{ rt_int rv3031 = 1;
return rv3031; }
}
}
else if (r_TAG_MISUSED1(l_N_3026, p_NAME))
{
{ rt_int rv3032 = 1;
return rv3032; }
}
l_N_3026 = ((*(R17 *)rt_nil_check(l_N_3026))).f_NEXT;
}
RT_B_TICK();
} L_end3027: ;
{ rt_int rv3033 = 0;
return rv3033; }
rt_raise(RT_X_INIT);
}
static rt_int r_TAG_MISUSED1(R17 * p_N, R9 p_NAME) { RT_B_TICK(); 
rt_int l_K_3034; memset(&l_K_3034, 0, sizeof l_K_3034);
l_K_3034 = ((*(R17 *)rt_nil_check(p_N))).f_KIND;
if ((l_K_3034 == g_TS_NAME))
{
{ rt_int rv3035 = (r_TAG_MISUSED(p_N, p_NAME) && 1);
return rv3035; }
}
if ((((((l_K_3034 == g_N_NAME) || (l_K_3034 == g_N_ENUMLIT)) || (l_K_3034 == g_N_APPLY))) && r_TEQ(((*(R17 *)rt_nil_check(p_N))).f_NAME, p_NAME)))
{
{ rt_int rv3036 = 1;
return rv3036; }
}
{ rt_int rv3037 = ((((r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_A, p_NAME) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_B, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_C, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_D, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_E, p_NAME));
return rv3037; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_VARIABLE(R17 * p_L, R17 * p_DECLS) { RT_B_TICK(); 
{ rt_int rv3038 = r_NAMES_VARIABLE_BUT(p_L, p_DECLS, NULL);
return rv3038; }
rt_raise(RT_X_INIT);
}
static void r_GEN_NAMES(R17 * p_L, R17 * *p_HEAD) { RT_B_TICK(); 
R17 * l_N_3039; memset(&l_N_3039, 0, sizeof l_N_3039);
l_N_3039 = p_L;
for (;;) {
if ((l_N_3039 == NULL)) goto L_end3040;
{
if (((((((*(R17 *)rt_nil_check(l_N_3039))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_N_3039))).f_KIND == g_N_PARAM))) && ((((*(R17 *)rt_nil_check(l_N_3039))).f_NAME).f_LEN > ((rt_int)0LL))))
{
{
R17 * l_M_3041; memset(&l_M_3041, 0, sizeof l_M_3041);
l_M_3041 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_N_3039))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_M_3041))).f_NAME, ((*(R17 *)rt_nil_check(l_N_3039))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_M_3041))).f_NEXT = (*p_HEAD);
(*p_HEAD) = l_M_3041;
}
}
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_3039))).f_A, &(*p_HEAD));
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_3039))).f_B, &(*p_HEAD));
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_3039))).f_C, &(*p_HEAD));
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_3039))).f_D, &(*p_HEAD));
l_N_3039 = ((*(R17 *)rt_nil_check(l_N_3039))).f_NEXT;
}
RT_B_TICK();
} L_end3040: ;
}
static rt_int r_NAMES_VARIABLE_BUT(R17 * p_L, R17 * p_DECLS, R17 * p_EXCL) { RT_B_TICK(); 
R17 * l_N_3042; memset(&l_N_3042, 0, sizeof l_N_3042);
l_N_3042 = p_L;
for (;;) {
if ((l_N_3042 == NULL)) goto L_end3043;
{
if (((((*(R17 *)rt_nil_check(l_N_3042))).f_KIND == g_N_NAME) && r_IN_IDENTS(p_EXCL, ((*(R17 *)rt_nil_check(l_N_3042))).f_NAME)))
{
}
else if ((((*(R17 *)rt_nil_check(l_N_3042))).f_KIND == g_N_NAME))
{
{
R17 * l_D_3044; memset(&l_D_3044, 0, sizeof l_D_3044);
l_D_3044 = p_DECLS;
R12 * l_Y_3045; memset(&l_Y_3045, 0, sizeof l_Y_3045);
l_Y_3045 = r_LOOKUP(((*(R17 *)rt_nil_check(l_N_3042))).f_NAME);
for (;;) {
if ((l_D_3044 == NULL)) goto L_end3046;
{
if (((((*(R17 *)rt_nil_check(l_D_3044))).f_KIND == g_N_VAR) && r_IN_IDENTS(((*(R17 *)rt_nil_check(l_D_3044))).f_A, ((*(R17 *)rt_nil_check(l_N_3042))).f_NAME)))
{
{ rt_int rv3047 = 1;
return rv3047; }
}
l_D_3044 = ((*(R17 *)rt_nil_check(l_D_3044))).f_NEXT;
}
RT_B_TICK();
} L_end3046: ;
if ((!(l_Y_3045 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_3045))).f_KIND == g_Y_VAR) && (!((*(R12 *)rt_nil_check(l_Y_3045))).f_INPUT)))
{
{ rt_int rv3048 = 1;
return rv3048; }
}
}
}
}
else if ((((r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_3042))).f_A, p_DECLS, p_EXCL) || r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_3042))).f_B, p_DECLS, p_EXCL)) || r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_3042))).f_C, p_DECLS, p_EXCL)) || r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_3042))).f_D, p_DECLS, p_EXCL)))
{
{ rt_int rv3049 = 1;
return rv3049; }
}
l_N_3042 = ((*(R17 *)rt_nil_check(l_N_3042))).f_NEXT;
}
RT_B_TICK();
} L_end3043: ;
{ rt_int rv3050 = 0;
return rv3050; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_PRINTING_CHAR(R17 * p_L) { RT_B_TICK(); 
R17 * l_P_3051; memset(&l_P_3051, 0, sizeof l_P_3051);
l_P_3051 = p_L;
for (;;) {
if ((l_P_3051 == NULL)) goto L_end3052;
{
if (((((*(R17 *)rt_nil_check(l_P_3051))).f_NAME).f_LEN >= ((rt_int)3LL)))
{
if (rt_b_eq(r_STR(((*(R17 *)rt_nil_check(l_P_3051))).f_NAME, ((rt_int)2LL)), rt_str("\\'", 2)))
{
{ rt_int rv3053 = 1;
return rv3053; }
}
}
l_P_3051 = ((*(R17 *)rt_nil_check(l_P_3051))).f_NEXT;
}
RT_B_TICK();
} L_end3052: ;
{ rt_int rv3054 = 0;
return rv3054; }
rt_raise(RT_X_INIT);
}
static R22 * r_DEFAULT_CHARSET(rt_int p_LINE) { RT_B_TICK(); 
R12 * l_A_3055; memset(&l_A_3055, 0, sizeof l_A_3055);
l_A_3055 = r_LOOKUP(r_MKN(rt_str("ASCII", 5)));
R22 * l_FOUND_3056; memset(&l_FOUND_3056, 0, sizeof l_FOUND_3056);
l_FOUND_3056 = NULL;
rt_int l_N_3057; memset(&l_N_3057, 0, sizeof l_N_3057);
l_N_3057 = ((rt_int)0LL);
R12 * l_Y_3058; memset(&l_Y_3058, 0, sizeof l_Y_3058);
l_Y_3058 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
if (((((*(R7 *)rt_nil_check(g_W))).f_CHARSETS == ((rt_int)0LL)) && (!(l_A_3055 == NULL))))
{
if (((((*(R12 *)rt_nil_check(l_A_3055))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_A_3055))).f_DECL == NULL)))
{
{ R22 * rv3059 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv3059; }
}
}
for (;;) {
if ((l_Y_3058 == NULL)) goto L_end3060;
{
if (((((*(R12 *)rt_nil_check(l_Y_3058))).f_KIND == g_Y_TYPE) && ((((*(R12 *)rt_nil_check(l_Y_3058))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((r_LOOKUP(((*(R12 *)rt_nil_check(l_Y_3058))).f_NAME) == l_Y_3058))
{
{
R22 * l_T_3061; memset(&l_T_3061, 0, sizeof l_T_3061);
l_T_3061 = NULL;
if ((((*(R12 *)rt_nil_check(l_Y_3058))).f_DECL == NULL))
{
l_T_3061 = ((*(R12 *)rt_nil_check(l_Y_3058))).f_T;
}
else if (((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3058))).f_DECL))).f_KIND == g_N_TYPE) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3058))).f_DECL))).f_A == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3058))).f_DECL))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3058))).f_DECL))).f_B))).f_A)))
{
l_T_3061 = r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_3058))).f_NAME, p_LINE);
}
}
if ((!(l_T_3061 == NULL)))
{
l_T_3061 = r_REAL_TYPE(l_T_3061);
if ((((*(R22 *)rt_nil_check(l_T_3061))).f_KIND == g_T_ENUM))
{
if ((r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_3061))).f_BASE))).f_LITS) && (!(((*(R22 *)rt_nil_check(l_T_3061))).f_BASE == l_FOUND_3056))))
{
if ((!(l_FOUND_3056 == NULL)))
{
r_FAIL(p_LINE, rt_b_cat(rt_str("two character sets are available here: the literal needs ", 57), rt_str("a charset-name (3.7.2)", 22)));
}
l_FOUND_3056 = ((*(R22 *)rt_nil_check(l_T_3061))).f_BASE;
}
}
}
}
}
}
l_Y_3058 = ((*(R12 *)rt_nil_check(l_Y_3058))).f_SNEXT;
}
RT_B_TICK();
} L_end3060: ;
if ((l_FOUND_3056 == NULL))
{
r_FAIL(p_LINE, rt_str("no character set is available for the literal (3.7.2)", 53));
}
{ R22 * rv3062 = l_FOUND_3056;
return rv3062; }
rt_raise(RT_X_INIT);
}
static R22 * r_CHARSET_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_R_3063; memset(&l_R_3063, 0, sizeof l_R_3063);
l_R_3063 = r_REAL_TYPE(p_T);
if ((((*(R22 *)rt_nil_check(l_R_3063))).f_BASE == NULL))
{
{ R22 * rv3064 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv3064; }
}
{ R22 * rv3065 = ((*(R22 *)rt_nil_check(l_R_3063))).f_BASE;
return rv3065; }
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
R17 * l_S_3066; memset(&l_S_3066, 0, sizeof l_S_3066);
l_S_3066 = p_S0;
for (;;) {
if ((l_S_3066 == NULL)) goto L_end3067;
{
{
R17 * l_L_3068; memset(&l_L_3068, 0, sizeof l_L_3068);
l_L_3068 = l_S_3066;
for (;;) {
if ((!(((*(R17 *)rt_nil_check(l_L_3068))).f_KIND == g_N_LABELED))) goto L_end3069;
{
{
R12 * l_Y_3070; memset(&l_Y_3070, 0, sizeof l_Y_3070);
l_Y_3070 = r_NEW_SYM(g_Y_LABEL, ((*(R17 *)rt_nil_check(l_L_3068))).f_NAME);
S_R9(&((*(R12 *)rt_nil_check(l_Y_3070))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME_T(r_CID(((*(R17 *)rt_nil_check(l_L_3068))).f_NAME))), 0);
((*(R12 *)rt_nil_check(l_Y_3070))).f_MV = r_GUARDS();
r_DEFINE(l_Y_3070, ((*(R17 *)rt_nil_check(l_L_3068))).f_LINE);
}
l_L_3068 = ((*(R17 *)rt_nil_check(l_L_3068))).f_A;
}
RT_B_TICK();
} L_end3069: ;
}
l_S_3066 = ((*(R17 *)rt_nil_check(l_S_3066))).f_NEXT;
}
RT_B_TICK();
} L_end3067: ;
}
static void r_BODY(R17 * p_B) { RT_B_TICK(); 
R17 * l_D_3071; memset(&l_D_3071, 0, sizeof l_D_3071);
l_D_3071 = ((*(R17 *)rt_nil_check(p_B))).f_A;
R17 * l_S_3072; memset(&l_S_3072, 0, sizeof l_S_3072);
l_S_3072 = ((*(R17 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R17 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_3071 == NULL)) goto L_end3073;
{
if (((((*(R17 *)rt_nil_check(l_D_3071))).f_KIND == g_N_VAR) || (((*(R17 *)rt_nil_check(l_D_3071))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3071);
}
l_D_3071 = ((*(R17 *)rt_nil_check(l_D_3071))).f_NEXT;
}
RT_B_TICK();
} L_end3073: ;
r_DECLARE_LABELS(((*(R17 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_3072 == NULL)) goto L_end3074;
{
r_STMT(l_S_3072);
l_S_3072 = ((*(R17 *)rt_nil_check(l_S_3072))).f_NEXT;
}
RT_B_TICK();
} L_end3074: ;
}
static void r_OPEN_BODY(R17 * p_B) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R17 * p_S, R17 * p_BODY_NODE, R17 * p_HANDLERS) { RT_B_TICK(); 
R9 l_F_3075; memset(&l_F_3075, 0, sizeof l_F_3075);
S_R9(&l_F_3075, r_NEW_NAME(rt_str("xf", 2)), 0);
R17 * l_H_3076; memset(&l_H_3076, 0, sizeof l_H_3076);
l_H_3076 = p_HANDLERS;
R9 l_WORD_3077; memset(&l_WORD_3077, 0, sizeof l_WORD_3077);
S_R9(&l_WORD_3077, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_3075, l_F_3075));
r_PUSH_CTX(((rt_int)3LL), l_F_3075);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_3075, l_F_3075, l_F_3075));
for (;;) {
if ((l_H_3076 == NULL)) goto L_end3078;
{
{
R17 * l_N_3079; memset(&l_N_3079, 0, sizeof l_N_3079);
l_N_3079 = ((*(R17 *)rt_nil_check(l_H_3076))).f_A;
R9 l_COND_3080; memset(&l_COND_3080, 0, sizeof l_COND_3080);
S_R9(&l_COND_3080, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_3079 == NULL)) goto L_end3081;
{
if ((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_N_3079))).f_NEXT, ((*(R17 *)rt_nil_check(l_N_3079))).f_NAME) || r_IN_HANDLERS(((*(R17 *)rt_nil_check(l_H_3076))).f_NEXT, ((*(R17 *)rt_nil_check(l_N_3079))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_N_3079))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R17 *)rt_nil_check(l_N_3079))).f_NAME);
}
S_R9(&l_COND_3080, r_FMT3(rt_str("@ || @x == @", 12), l_COND_3080, l_F_3075, r_EXC_NAME(((*(R17 *)rt_nil_check(l_N_3079))).f_NAME)), 0);
l_N_3079 = ((*(R17 *)rt_nil_check(l_N_3079))).f_NEXT;
}
RT_B_TICK();
} L_end3081: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3077, l_COND_3080));
S_R9(&l_WORD_3077, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_3075, rt_str("x", 1)));
r_OPEN_BODY(((*(R17 *)rt_nil_check(l_H_3076))).f_B);
r_POP_CTX();
}
l_H_3076 = ((*(R17 *)rt_nil_check(l_H_3076))).f_NEXT;
}
RT_B_TICK();
} L_end3078: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_3075));
}
static void r_INTERFERENCE(R17 * p_S) { RT_B_TICK(); 
rt_int l_K_3082; memset(&l_K_3082, 0, sizeof l_K_3082);
l_K_3082 = ((*(R17 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_3082 == g_N_ASSIGN))
{
{
R17 * l_NAMES_3083; memset(&l_NAMES_3083, 0, sizeof l_NAMES_3083);
l_NAMES_3083 = NULL;
R17 * l_CALLS_3084; memset(&l_CALLS_3084, 0, sizeof l_CALLS_3084);
l_CALLS_3084 = NULL;
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_S))).f_A, &l_NAMES_3083, &l_CALLS_3084);
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_S))).f_B, &l_NAMES_3083, &l_CALLS_3084);
r_CHECK_INTERFERENCE(l_NAMES_3083, l_CALLS_3084, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 0);
}
}
else if ((l_K_3082 == g_N_CALL))
{
{
R17 * l_NAMES_3085; memset(&l_NAMES_3085, 0, sizeof l_NAMES_3085);
l_NAMES_3085 = NULL;
R17 * l_CALLS_3086; memset(&l_CALLS_3086, 0, sizeof l_CALLS_3086);
l_CALLS_3086 = NULL;
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_S))).f_A, &l_NAMES_3085, &l_CALLS_3086);
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_S))).f_B, &l_NAMES_3085, &l_CALLS_3086);
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_S))).f_C, &l_NAMES_3085, &l_CALLS_3086);
r_CHECK_INTERFERENCE(l_NAMES_3085, l_CALLS_3086, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 0);
}
}
else if (((l_K_3082 == g_N_RETURN) || (l_K_3082 == g_N_ASSERT)))
{
if ((!(((*(R17 *)rt_nil_check(p_S))).f_A == NULL)))
{
{
R17 * l_NAMES_3087; memset(&l_NAMES_3087, 0, sizeof l_NAMES_3087);
l_NAMES_3087 = NULL;
R17 * l_CALLS_3088; memset(&l_CALLS_3088, 0, sizeof l_CALLS_3088);
l_CALLS_3088 = NULL;
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_S))).f_A, &l_NAMES_3087, &l_CALLS_3088);
r_CHECK_INTERFERENCE(l_NAMES_3087, l_CALLS_3088, ((*(R17 *)rt_nil_check(p_S))).f_LINE, (l_K_3082 == g_N_ASSERT));
}
}
}
else if ((l_K_3082 == g_N_IF))
{
{
R17 * l_ARM_3089; memset(&l_ARM_3089, 0, sizeof l_ARM_3089);
l_ARM_3089 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_ARM_3089 == NULL)) goto L_end3090;
{
{
R17 * l_NAMES_3091; memset(&l_NAMES_3091, 0, sizeof l_NAMES_3091);
l_NAMES_3091 = NULL;
R17 * l_CALLS_3092; memset(&l_CALLS_3092, 0, sizeof l_CALLS_3092);
l_CALLS_3092 = NULL;
r_COLLECT_REFS(((*(R17 *)rt_nil_check(l_ARM_3089))).f_A, &l_NAMES_3091, &l_CALLS_3092);
r_CHECK_INTERFERENCE(l_NAMES_3091, l_CALLS_3092, ((*(R17 *)rt_nil_check(l_ARM_3089))).f_LINE, 0);
}
l_ARM_3089 = ((*(R17 *)rt_nil_check(l_ARM_3089))).f_NEXT;
}
RT_B_TICK();
} L_end3090: ;
}
}
}
static void r_COLLECT_LIST(R17 * p_L, R17 * *p_NAMES, R17 * *p_CALLS) { RT_B_TICK(); 
R17 * l_N_3093; memset(&l_N_3093, 0, sizeof l_N_3093);
l_N_3093 = p_L;
for (;;) {
if ((l_N_3093 == NULL)) goto L_end3094;
{
r_COLLECT_REFS(l_N_3093, &(*p_NAMES), &(*p_CALLS));
l_N_3093 = ((*(R17 *)rt_nil_check(l_N_3093))).f_NEXT;
}
RT_B_TICK();
} L_end3094: ;
}
static void r_COLLECT_REFS(R17 * p_E, R17 * *p_NAMES, R17 * *p_CALLS) { RT_B_TICK(); 
rt_int l_K_3095; memset(&l_K_3095, 0, sizeof l_K_3095);
if ((p_E == NULL))
{
return;
}
l_K_3095 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_3095 == g_N_NAME))
{
{
R12 * l_Y_3096; memset(&l_Y_3096, 0, sizeof l_Y_3096);
l_Y_3096 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_3096 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_3096))).f_KIND == g_Y_VAR))
{
(*p_NAMES) = r_NAME_REF(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_3096))).f_OWNER, NULL, (*p_NAMES));
}
}
}
}
else if ((l_K_3095 == g_N_APPLY))
{
{
R12 * l_Y_3097; memset(&l_Y_3097, 0, sizeof l_Y_3097);
l_Y_3097 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_3097 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_3097))).f_KIND == g_Y_VAR))
{
(*p_NAMES) = r_NAME_REF(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_3097))).f_OWNER, NULL, (*p_NAMES));
}
else if ((((*(R12 *)rt_nil_check(l_Y_3097))).f_KIND == g_Y_ROUTINE))
{
(*p_CALLS) = r_NAME_REF(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((rt_int)0LL), p_E, (*p_CALLS));
}
}
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_B, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_C, &(*p_NAMES), &(*p_CALLS));
}
}
else if ((((((l_K_3095 == g_N_FIELD) || (l_K_3095 == g_N_DEREF)) || (l_K_3095 == g_N_UNOP)) || (l_K_3095 == g_N_PAREN)) || (l_K_3095 == g_N_QUAL)))
{
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
}
else if (((((l_K_3095 == g_N_INDEX) || (l_K_3095 == g_N_SUBSTR)) || (l_K_3095 == g_N_BINOP)) || (l_K_3095 == g_N_IN)))
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
else if ((l_K_3095 == g_N_RECCONS))
{
{
R17 * l_F_3098; memset(&l_F_3098, 0, sizeof l_F_3098);
l_F_3098 = ((*(R17 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_F_3098 == NULL)) goto L_end3099;
{
r_COLLECT_REFS(((*(R17 *)rt_nil_check(l_F_3098))).f_A, &(*p_NAMES), &(*p_CALLS));
l_F_3098 = ((*(R17 *)rt_nil_check(l_F_3098))).f_NEXT;
}
RT_B_TICK();
} L_end3099: ;
}
}
else if ((l_K_3095 == g_N_ARRCONS))
{
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
}
}
static R17 * r_NAME_REF(R9 p_NAME, rt_int p_OWNER, R17 * p_A, R17 * p_L) { RT_B_TICK(); 
R17 * l_N_3100; memset(&l_N_3100, 0, sizeof l_N_3100);
l_N_3100 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_3100))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_3100))).f_IV = p_OWNER;
((*(R17 *)rt_nil_check(l_N_3100))).f_A = p_A;
((*(R17 *)rt_nil_check(l_N_3100))).f_NEXT = p_L;
{ R17 * rv3101 = l_N_3100;
return rv3101; }
rt_raise(RT_X_INIT);
}
static R17 * r_ROUTINE_DATA(R9 p_NAME, rt_int p_INOUT) { RT_B_TICK(); 
R12 * l_Y_3102; memset(&l_Y_3102, 0, sizeof l_Y_3102);
l_Y_3102 = r_LOOKUP(p_NAME);
R17 * l_R_3103; memset(&l_R_3103, 0, sizeof l_R_3103);
l_R_3103 = NULL;
rt_int l_FIRST_3104; memset(&l_FIRST_3104, 0, sizeof l_FIRST_3104);
l_FIRST_3104 = 1;
for (;;) {
if ((l_Y_3102 == NULL)) goto L_end3105;
{
if ((((*(R12 *)rt_nil_check(l_Y_3102))).f_KIND == g_Y_ROUTINE))
{
{
R17 * l_D_3106; memset(&l_D_3106, 0, sizeof l_D_3106);
l_D_3106 = r_DATA_OF(r_ORIGINAL(l_Y_3102), p_INOUT, ((rt_int)0LL));
if (l_FIRST_3104)
{
l_R_3103 = l_D_3106;
l_FIRST_3104 = 0;
}
else
{
l_R_3103 = r_INTERSECT_REFS(l_R_3103, l_D_3106);
}
}
}
else if (((!(((*(R12 *)rt_nil_check(l_Y_3102))).f_KIND == g_Y_ROUTINE)) && (!l_FIRST_3104)))
{
}
l_Y_3102 = r_LOOKUP_NEXT(l_Y_3102);
}
RT_B_TICK();
} L_end3105: ;
{ R17 * rv3107 = l_R_3103;
return rv3107; }
rt_raise(RT_X_INIT);
}
static R17 * r_DATA_OF(R12 * p_Y, rt_int p_INOUT, rt_int p_DEPTH) { RT_B_TICK(); 
R17 * l_R_3108; memset(&l_R_3108, 0, sizeof l_R_3108);
l_R_3108 = NULL;
if (((((*(R12 *)rt_nil_check(p_Y))).f_DECL == NULL) || (p_DEPTH > ((rt_int)20LL))))
{
{ R17 * rv3109 = NULL;
return rv3109; }
}
if ((!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_KIND == g_N_ROUTINE)))
{
{ R17 * rv3110 = NULL;
return rv3110; }
}
r_COMPUTE_USES(p_Y);
if ((!p_INOUT))
{
{
R17 * l_U_3111; memset(&l_U_3111, 0, sizeof l_U_3111);
l_U_3111 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_3111 == NULL)) goto L_end3112;
{
l_R_3108 = r_NAME_REF(((*(R17 *)rt_nil_check(l_U_3111))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3111))).f_IV, NULL, l_R_3108);
l_U_3111 = ((*(R17 *)rt_nil_check(l_U_3111))).f_NEXT;
}
RT_B_TICK();
} L_end3112: ;
}
{ R17 * rv3113 = l_R_3108;
return rv3113; }
}
if ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E == NULL))
{
{ R17 * rv3114 = NULL;
return rv3114; }
}
{
R17 * l_U_3115; memset(&l_U_3115, 0, sizeof l_U_3115);
l_U_3115 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_3115 == NULL)) goto L_end3116;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E))).f_B, ((*(R17 *)rt_nil_check(l_U_3115))).f_NAME))
{
l_R_3108 = r_NAME_REF(((*(R17 *)rt_nil_check(l_U_3115))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3115))).f_IV, NULL, l_R_3108);
}
l_U_3115 = ((*(R17 *)rt_nil_check(l_U_3115))).f_NEXT;
}
RT_B_TICK();
} L_end3116: ;
}
{
R17 * l_C_3117; memset(&l_C_3117, 0, sizeof l_C_3117);
l_C_3117 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E))).f_C;
for (;;) {
if ((l_C_3117 == NULL)) goto L_end3118;
{
{
R12 * l_Z_3119; memset(&l_Z_3119, 0, sizeof l_Z_3119);
l_Z_3119 = r_LOOKUP(((*(R17 *)rt_nil_check(l_C_3117))).f_NAME);
for (;;) {
if ((l_Z_3119 == NULL)) goto L_end3120;
{
if ((((*(R12 *)rt_nil_check(l_Z_3119))).f_KIND == g_Y_ROUTINE))
{
{
R17 * l_D_3121; memset(&l_D_3121, 0, sizeof l_D_3121);
l_D_3121 = r_DATA_OF(r_ORIGINAL(l_Z_3119), 1, rt_add(p_DEPTH, ((rt_int)1LL)));
for (;;) {
if ((l_D_3121 == NULL)) goto L_end3122;
{
if ((!r_HAS_REF(l_R_3108, ((*(R17 *)rt_nil_check(l_D_3121))).f_NAME, ((*(R17 *)rt_nil_check(l_D_3121))).f_IV)))
{
l_R_3108 = r_NAME_REF(((*(R17 *)rt_nil_check(l_D_3121))).f_NAME, ((*(R17 *)rt_nil_check(l_D_3121))).f_IV, NULL, l_R_3108);
}
l_D_3121 = ((*(R17 *)rt_nil_check(l_D_3121))).f_NEXT;
}
RT_B_TICK();
} L_end3122: ;
}
}
l_Z_3119 = r_LOOKUP_NEXT(l_Z_3119);
}
RT_B_TICK();
} L_end3120: ;
}
l_C_3117 = ((*(R17 *)rt_nil_check(l_C_3117))).f_NEXT;
}
RT_B_TICK();
} L_end3118: ;
}
{ R17 * rv3123 = l_R_3108;
return rv3123; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_REF(R17 * p_L, R9 p_NAME, rt_int p_OWNER) { RT_B_TICK(); 
R17 * l_P_3124; memset(&l_P_3124, 0, sizeof l_P_3124);
l_P_3124 = p_L;
for (;;) {
if ((l_P_3124 == NULL)) goto L_end3125;
{
if ((r_TEQ(((*(R17 *)rt_nil_check(l_P_3124))).f_NAME, p_NAME) && (((*(R17 *)rt_nil_check(l_P_3124))).f_IV == p_OWNER)))
{
{ rt_int rv3126 = 1;
return rv3126; }
}
l_P_3124 = ((*(R17 *)rt_nil_check(l_P_3124))).f_NEXT;
}
RT_B_TICK();
} L_end3125: ;
{ rt_int rv3127 = 0;
return rv3127; }
rt_raise(RT_X_INIT);
}
static R17 * r_INTERSECT_REFS(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_R_3128; memset(&l_R_3128, 0, sizeof l_R_3128);
l_R_3128 = NULL;
R17 * l_P_3129; memset(&l_P_3129, 0, sizeof l_P_3129);
l_P_3129 = p_A;
for (;;) {
if ((l_P_3129 == NULL)) goto L_end3130;
{
if (r_HAS_REF(p_B, ((*(R17 *)rt_nil_check(l_P_3129))).f_NAME, ((*(R17 *)rt_nil_check(l_P_3129))).f_IV))
{
l_R_3128 = r_NAME_REF(((*(R17 *)rt_nil_check(l_P_3129))).f_NAME, ((*(R17 *)rt_nil_check(l_P_3129))).f_IV, NULL, l_R_3128);
}
l_P_3129 = ((*(R17 *)rt_nil_check(l_P_3129))).f_NEXT;
}
RT_B_TICK();
} L_end3130: ;
{ R17 * rv3131 = l_R_3128;
return rv3131; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_INTERFERENCE(R17 * p_NAMES, R17 * p_CALLS, rt_int p_LINE, rt_int p_ASSERTION) { RT_B_TICK(); 
R17 * l_C_3132; memset(&l_C_3132, 0, sizeof l_C_3132);
l_C_3132 = p_CALLS;
for (;;) {
if ((l_C_3132 == NULL)) goto L_end3133;
{
{
R17 * l_V_3134; memset(&l_V_3134, 0, sizeof l_V_3134);
l_V_3134 = r_ROUTINE_DATA(((*(R17 *)rt_nil_check(l_C_3132))).f_NAME, 1);
if (((!(l_V_3134 == NULL)) && p_ASSERTION))
{
r_FAILT(p_LINE, rt_str("the expression of ASSERT must be free of side-effects (4.5.8): ", 63), ((*(R17 *)rt_nil_check(l_C_3132))).f_NAME);
}
for (;;) {
if ((l_V_3134 == NULL)) goto L_end3135;
{
if (r_HAS_REF(p_NAMES, ((*(R17 *)rt_nil_check(l_V_3134))).f_NAME, ((*(R17 *)rt_nil_check(l_V_3134))).f_IV))
{
r_FAILT(p_LINE, rt_str("a function invocation modifies a variable the expression also names (4.3.4): ", 77), ((*(R17 *)rt_nil_check(l_V_3134))).f_NAME);
}
{
R17 * l_D_3136; memset(&l_D_3136, 0, sizeof l_D_3136);
l_D_3136 = p_CALLS;
for (;;) {
if ((l_D_3136 == NULL)) goto L_end3137;
{
if ((!(l_D_3136 == l_C_3132)))
{
if (r_HAS_REF(r_ROUTINE_DATA(((*(R17 *)rt_nil_check(l_D_3136))).f_NAME, 0), ((*(R17 *)rt_nil_check(l_V_3134))).f_NAME, ((*(R17 *)rt_nil_check(l_V_3134))).f_IV))
{
r_FAILT(p_LINE, rt_str("two function invocations of one expression interfere on (4.3.4): ", 65), ((*(R17 *)rt_nil_check(l_V_3134))).f_NAME);
}
}
l_D_3136 = ((*(R17 *)rt_nil_check(l_D_3136))).f_NEXT;
}
RT_B_TICK();
} L_end3137: ;
}
l_V_3134 = ((*(R17 *)rt_nil_check(l_V_3134))).f_NEXT;
}
RT_B_TICK();
} L_end3135: ;
}
l_C_3132 = ((*(R17 *)rt_nil_check(l_C_3132))).f_NEXT;
}
RT_B_TICK();
} L_end3133: ;
}
static rt_int r_IN_HANDLERS(R17 * p_HS, R9 p_NAME) { RT_B_TICK(); 
R17 * l_H_3138; memset(&l_H_3138, 0, sizeof l_H_3138);
l_H_3138 = p_HS;
for (;;) {
if ((l_H_3138 == NULL)) goto L_end3139;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_H_3138))).f_A, p_NAME))
{
{ rt_int rv3140 = 1;
return rv3140; }
}
l_H_3138 = ((*(R17 *)rt_nil_check(l_H_3138))).f_NEXT;
}
RT_B_TICK();
} L_end3139: ;
{ rt_int rv3141 = 0;
return rv3141; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED_STMT(R17 * p_S) { RT_B_TICK(); 
rt_int l_K_3142; memset(&l_K_3142, 0, sizeof l_K_3142);
l_K_3142 = ((*(R17 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_3142 == g_N_EXCEPT))
{
{ rt_int rv3143 = r_IS_STRUCTURED_STMT(((*(R17 *)rt_nil_check(p_S))).f_A);
return rv3143; }
}
{ rt_int rv3144 = (((((((l_K_3142 == g_N_BLOCK) || (l_K_3142 == g_N_IF)) || (l_K_3142 == g_N_CASE)) || (l_K_3142 == g_N_LOOP)) || (l_K_3142 == g_N_FOR)) || (l_K_3142 == g_N_PAR)) || (l_K_3142 == g_N_WITH));
return rv3144; }
rt_raise(RT_X_INIT);
}
static R17 * r_NAMED_ROOT(R17 * p_E) { RT_B_TICK(); 
rt_int l_K_3145; memset(&l_K_3145, 0, sizeof l_K_3145);
l_K_3145 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
if (((l_K_3145 == g_N_NAME) || (l_K_3145 == g_N_APPLY)))
{
{ R17 * rv3146 = p_E;
return rv3146; }
}
else if ((((l_K_3145 == g_N_INDEX) || (l_K_3145 == g_N_FIELD)) || (l_K_3145 == g_N_SUBSTR)))
{
{ R17 * rv3147 = r_NAMED_ROOT(((*(R17 *)rt_nil_check(p_E))).f_A);
return rv3147; }
}
{ R17 * rv3148 = NULL;
return rv3148; }
rt_raise(RT_X_INIT);
}
static void r_STMT(R17 * p_S) { RT_B_TICK(); 
rt_int l_K_3149; memset(&l_K_3149, 0, sizeof l_K_3149);
l_K_3149 = ((*(R17 *)rt_nil_check(p_S))).f_KIND;
r_INTERFERENCE(p_S);
if ((l_K_3149 == g_N_NULL))
{
return;
}
else if ((l_K_3149 == g_N_LABELED))
{
{
R12 * l_Y_3150; memset(&l_Y_3150, 0, sizeof l_Y_3150);
l_Y_3150 = r_LOOKUP(((*(R17 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_3150))).f_ACCESS));
r_STMT(((*(R17 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_3149 == g_N_GOTO))
{
{
R12 * l_Y_3151; memset(&l_Y_3151, 0, sizeof l_Y_3151);
l_Y_3151 = r_LOOKUP(((*(R17 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_3152; memset(&l_N_3152, 0, sizeof l_N_3152);
R18 * l_C_3153; memset(&l_C_3153, 0, sizeof l_C_3153);
l_C_3153 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_3151 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3151))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3151))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
l_N_3152 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_3151))).f_MV);
for (;;) {
if ((l_N_3152 <= ((rt_int)0LL))) goto L_end3154;
{
if ((((*(R18 *)rt_nil_check(l_C_3153))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R18 *)rt_nil_check(l_C_3153))).f_NAME));
l_N_3152 = rt_sub(l_N_3152, ((rt_int)1LL));
}
l_C_3153 = ((*(R18 *)rt_nil_check(l_C_3153))).f_NEXT;
}
RT_B_TICK();
} L_end3154: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_3151))).f_ACCESS));
}
}
else if ((l_K_3149 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_3149 == g_N_CALL))
{
{
R28 l_V_3155; memset(&l_V_3155, 0, sizeof l_V_3155);
S_R28(&l_V_3155, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_3155).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_3155).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_3155).f_C, rt_str(";", 1)));
}
}
else if ((l_K_3149 == g_N_IF))
{
r_IF_STMT(((*(R17 *)rt_nil_check(p_S))).f_A, ((*(R17 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_3149 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_3149 == g_N_LOOP))
{
{
R9 l_END_L_3156; memset(&l_END_L_3156, 0, sizeof l_END_L_3156);
S_R9(&l_END_L_3156, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R17 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A), l_END_L_3156));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_3156);
r_OPEN_BODY(((*(R17 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CODES(rt_str("RT_B_TICK();", 12));
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_C), l_END_L_3156));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_3156));
}
}
else if ((l_K_3149 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_3149 == g_N_EXIT))
{
{
R18 * l_C_3157; memset(&l_C_3157, 0, sizeof l_C_3157);
l_C_3157 = r_LEAVE(((rt_int)2LL));
if ((l_C_3157 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R18 *)rt_nil_check(l_C_3157))).f_NAME));
}
}
else if ((l_K_3149 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_3149 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R17 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_3149 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_3149 == g_N_ASSERT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS)
{
{
R14 l_SAVED_CODE_3158; memset(&l_SAVED_CODE_3158, 0, sizeof l_SAVED_CODE_3158);
S_R14(&l_SAVED_CODE_3158, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R9 l_C_3159; memset(&l_C_3159, 0, sizeof l_C_3159);
S_R9(&l_C_3159, r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3158, 0);
}
}
else
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A)));
}
}
else if ((l_K_3149 == g_N_EXCEPT))
{
r_GUARDED(((*(R17 *)rt_nil_check(p_S))).f_A, NULL, ((*(R17 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_3149 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_3149 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_3149 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R28 r_PROCEDURE_CALL(R17 * p_S) { RT_B_TICK(); 
R12 * l_Y_3160; memset(&l_Y_3160, 0, sizeof l_Y_3160);
l_Y_3160 = r_LOOKUP(((*(R17 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_3160 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_3160))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_3160))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R28 rv3161 = r_CALL_EXPR(p_S, NULL);
return rv3161; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R17 * p_ARMS, R17 * p_ELSE_BODY) { RT_B_TICK(); 
R17 * l_ARM_3162; memset(&l_ARM_3162, 0, sizeof l_ARM_3162);
l_ARM_3162 = p_ARMS;
R9 l_WORD_3163; memset(&l_WORD_3163, 0, sizeof l_WORD_3163);
S_R9(&l_WORD_3163, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_3164; memset(&l_OPEN_3164, 0, sizeof l_OPEN_3164);
l_OPEN_3164 = ((rt_int)0LL);
rt_int l_CHOSEN_3165; memset(&l_CHOSEN_3165, 0, sizeof l_CHOSEN_3165);
l_CHOSEN_3165 = 0;
for (;;) {
if ((l_ARM_3162 == NULL)) goto L_end3166;
{
{
R25 l_M_3167; memset(&l_M_3167, 0, sizeof l_M_3167);
S_R25(&l_M_3167, r_MANIFEST(((*(R17 *)rt_nil_check(l_ARM_3162))).f_A), 0);
if (l_CHOSEN_3165)
{
r_CHECK_COND(((*(R17 *)rt_nil_check(l_ARM_3162))).f_A);
r_CHECK_BODY(((*(R17 *)rt_nil_check(l_ARM_3162))).f_B);
}
else if ((l_M_3167).f_OK)
{
if ((!r_TEQS(l_WORD_3163, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_3164 = rt_add(l_OPEN_3164, ((rt_int)1LL));
S_R9(&l_WORD_3163, r_MK(rt_str("if", 2)), 0);
}
r_CODE(r_FMT1(rt_str("(void)(@);", 10), r_BOOL_EXPR(((*(R17 *)rt_nil_check(l_ARM_3162))).f_A)));
if (((l_M_3167).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R17 *)rt_nil_check(l_ARM_3162))).f_B);
l_CHOSEN_3165 = 1;
}
else
{
r_CHECK_BODY(((*(R17 *)rt_nil_check(l_ARM_3162))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3163, r_BOOL_EXPR(((*(R17 *)rt_nil_check(l_ARM_3162))).f_A)));
r_OPEN_BODY(((*(R17 *)rt_nil_check(l_ARM_3162))).f_B);
S_R9(&l_WORD_3163, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_3162 = ((*(R17 *)rt_nil_check(l_ARM_3162))).f_NEXT;
}
RT_B_TICK();
} L_end3166: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_3165)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_3163, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it3169_lo = ((rt_int)1LL), it3169_hi = l_OPEN_3164;
for (rt_int it3169 = it3169_lo; it3169 <= it3169_hi; it3169++) {
{
r_CODES(rt_str("}", 1));
}
RT_B_TICK();
if (it3169 == it3169_hi) break;
} } L_end3168: ;
}
static void r_CHECK_BODY(R17 * p_B) { RT_B_TICK(); 
R14 l_SAVED_CODE_3170; memset(&l_SAVED_CODE_3170, 0, sizeof l_SAVED_CODE_3170);
S_R14(&l_SAVED_CODE_3170, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3171; memset(&rc3171, 0, sizeof rc3171);  rc3171.f_HEAD = NULL; rc3171.f_TAIL = NULL; rc3171; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3170, 0);
}
static void r_CHECK_COND(R17 * p_E) { RT_B_TICK(); 
R9 l_C_3172; memset(&l_C_3172, 0, sizeof l_C_3172);
S_R9(&l_C_3172, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R17 * p_S) { RT_B_TICK(); 
R9 l_END_L_3173; memset(&l_END_L_3173, 0, sizeof l_END_L_3173);
S_R9(&l_END_L_3173, r_NEW_NAME(rt_str("L_end", 5)), 0);
R9 l_IT_3174; memset(&l_IT_3174, 0, sizeof l_IT_3174);
S_R9(&l_IT_3174, r_NEW_NAME(rt_str("it", 2)), 0);
R17 * l_R_3175; memset(&l_R_3175, 0, sizeof l_R_3175);
l_R_3175 = ((*(R17 *)rt_nil_check(p_S))).f_A;
R28 l_LO_3176; memset(&l_LO_3176, 0, sizeof l_LO_3176);
S_R28(&l_LO_3176, r_EXPR(((*(R17 *)rt_nil_check(l_R_3175))).f_A, NULL), 0);
R28 l_HI_3177; memset(&l_HI_3177, 0, sizeof l_HI_3177);
S_R28(&l_HI_3177, r_EXPR(((*(R17 *)rt_nil_check(l_R_3175))).f_B, (l_LO_3176).f_T), 0);
R22 * l_T_3178; memset(&l_T_3178, 0, sizeof l_T_3178);
l_T_3178 = r_REAL_TYPE((l_LO_3176).f_T);
R9 l_LOC_3179; memset(&l_LOC_3179, 0, sizeof l_LOC_3179);
R9 l_HIC_3180; memset(&l_HIC_3180, 0, sizeof l_HIC_3180);
if ((((*(R22 *)rt_nil_check(l_T_3178))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_3178))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_3178))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_3178))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R9(&l_LOC_3179, (l_LO_3176).f_C, 0);
S_R9(&l_HIC_3180, (l_HI_3177).f_C, 0);
if (((((*(R17 *)rt_nil_check(l_R_3175))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_R_3175))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LOC_3179, r_FMT1(rt_str("(@) + 1", 7), l_LOC_3179), 0);
}
if ((((*(R17 *)rt_nil_check(l_R_3175))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HIC_3180, r_FMT1(rt_str("(@) - 1", 7), l_HIC_3180), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_3174, l_LOC_3179, l_IT_3174, l_HIC_3180));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_3174, l_IT_3174, l_IT_3174, l_IT_3174));
r_OPEN_SCOPE();
if (((((*(R17 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_3181; memset(&l_Y_3181, 0, sizeof l_Y_3181);
l_Y_3181 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3181))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_3178))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_3181))).f_T = ((*(R22 *)rt_nil_check(l_T_3178))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_3181))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_3181, rt_str("", 0)), l_IT_3174));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_3181, rt_str("", 0)), l_IT_3174));
}
else
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3181))).f_ACCESS, l_IT_3174, 0);
}
r_DEFINE(l_Y_3181, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_3173);
r_OPEN_BODY(((*(R17 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODES(rt_str("RT_B_TICK();", 12));
r_CODE(r_FMT2(rt_str("if (@ == @_hi) break;", 21), l_IT_3174, l_IT_3174));
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_3173));
}
static void r_RETURN_STMT(R17 * p_S) { RT_B_TICK(); 
R19 * l_CS_3182; memset(&l_CS_3182, 0, sizeof l_CS_3182);
l_CS_3182 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_C_3183; memset(&l_C_3183, 0, sizeof l_C_3183);
if ((((*(R17 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_3183 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R19 *)rt_nil_check(l_CS_3182))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R19 *)rt_nil_check(l_CS_3182))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R19 *)rt_nil_check(l_CS_3182))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R19 *)rt_nil_check(l_CS_3182))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODE(r_CATS(((*(R19 *)rt_nil_check(l_CS_3182))).f_COPYOUT, rt_str("return;", 7)));
}
return;
}
if (((((*(R19 *)rt_nil_check(l_CS_3182))).f_RESULT == NULL) || ((*(R19 *)rt_nil_check(l_CS_3182))).f_IS_PATH))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R19 *)rt_nil_check(l_CS_3182))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R9 l_V_3184; memset(&l_V_3184, 0, sizeof l_V_3184);
S_R9(&l_V_3184, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R19 *)rt_nil_check(l_CS_3182))).f_RESULT), l_V_3184, r_CONVERT(r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A, ((*(R19 *)rt_nil_check(l_CS_3182))).f_RESULT), ((*(R19 *)rt_nil_check(l_CS_3182))).f_RESULT, ((*(R17 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_3183 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_3184));
}
}
static void r_SIGNAL_STMT(R17 * p_S) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R18 * l_C_3185; memset(&l_C_3185, 0, sizeof l_C_3185);
l_C_3185 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_3185 == NULL)) goto L_end3186;
{
if ((((*(R18 *)rt_nil_check(l_C_3185))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R18 *)rt_nil_check(l_C_3185))).f_NAME));
return;
}
if ((((*(R18 *)rt_nil_check(l_C_3185))).f_KIND == ((rt_int)1LL)))
{
goto L_end3186;
}
l_C_3185 = ((*(R18 *)rt_nil_check(l_C_3185))).f_NEXT;
}
RT_B_TICK();
} L_end3186: ;
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
R17 * l_TG_3187; memset(&l_TG_3187, 0, sizeof l_TG_3187);
l_TG_3187 = ((*(R17 *)rt_nil_check(p_S))).f_A;
if ((((*(R17 *)rt_nil_check(l_TG_3187))).f_KIND == g_N_SUBSTR))
{
{
R28 l_B_3188; memset(&l_B_3188, 0, sizeof l_B_3188);
S_R28(&l_B_3188, r_EXPR(((*(R17 *)rt_nil_check(l_TG_3187))).f_A, NULL), 0);
if ((!(l_B_3188).f_LVAL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_3188).f_T))).f_KIND == g_T_ABS))
{
{
R29 * l_ARGS_3189; memset(&l_ARGS_3189, 0, sizeof l_ARGS_3189);
l_ARGS_3189 = r_NODE_ARG(((*(R17 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R17 *)rt_nil_check(l_TG_3187))).f_B, g_M_IN, r_NODE_ARG(((*(R17 *)rt_nil_check(l_TG_3187))).f_C, g_M_IN, r_VAL_ARG(l_B_3188, NULL))));
R12 * l_Y_3190; memset(&l_Y_3190, 0, sizeof l_Y_3190);
((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(l_ARGS_3189))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_3190 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_3189, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_3190 == NULL))
{
((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(l_ARGS_3189))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_3190 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_3189, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_3190 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_3190, l_ARGS_3189, ((*(R17 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_3188).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_3188).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R28 l_V_3191; memset(&l_V_3191, 0, sizeof l_V_3191);
S_R28(&l_V_3191, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_B, (l_B_3188).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_3191).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_3188).f_T))).f_KIND)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_3188).f_C, r_INT_EXPR(((*(R17 *)rt_nil_check(l_TG_3187))).f_B), r_INT_EXPR(((*(R17 *)rt_nil_check(l_TG_3187))).f_C), (l_V_3191).f_C));
}
}
return;
}
{
R28 l_LV_3192; memset(&l_LV_3192, 0, sizeof l_LV_3192);
S_R28(&l_LV_3192, r_EXPR(l_TG_3187, NULL), 0);
R17 * l_SAVED_Q_3193; memset(&l_SAVED_Q_3193, 0, sizeof l_SAVED_Q_3193);
l_SAVED_Q_3193 = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
if ((!(l_LV_3192).f_LVAL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = NULL;
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_B))).f_KIND == g_N_QUAL))
{
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = ((*(R17 *)rt_nil_check(p_S))).f_B;
}
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R17 *)rt_nil_check(p_S))).f_B;
if (((((*(R22 *)rt_nil_check((l_LV_3192).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
r_REQUIRE_WHERE(r_MKN(rt_str("STORE_", 6)), ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
{
R28 l_V_3194; memset(&l_V_3194, 0, sizeof l_V_3194);
S_R28(&l_V_3194, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_B, (l_LV_3192).f_T), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
r_CODE(r_STORE_CODE((l_LV_3192).f_T, (l_LV_3192).f_C, l_V_3194, ((*(R17 *)rt_nil_check(p_S))).f_LINE, (l_LV_3192).f_SELF));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = l_SAVED_Q_3193;
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
R12 * l_Y_3195; memset(&l_Y_3195, 0, sizeof l_Y_3195);
l_Y_3195 = r_NEW_SYM(g_Y_VAR, ((*(R17 *)rt_nil_check(p_S))).f_NAME);
R28 l_V_3196; memset(&l_V_3196, 0, sizeof l_V_3196);
S_R28(&l_V_3196, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_3195))).f_T = (l_V_3196).f_T;
((*(R12 *)rt_nil_check(l_Y_3195))).f_WITHV = ((rt_int)1LL);
if ((((*(R17 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R9 l_CN_3197; memset(&l_CN_3197, 0, sizeof l_CN_3197);
S_R9(&l_CN_3197, r_NEW_OBJECT(l_Y_3195, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_3196).f_T))
{
r_CODE(r_INIT_CODE((l_V_3196).f_T, l_CN_3197));
}
r_CODE(r_ASSIGN_CODE((l_V_3196).f_T, l_CN_3197, (l_V_3196).f_C));
}
}
else
{
if ((!(l_V_3196).f_LVAL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R9 l_P_3198; memset(&l_P_3198, 0, sizeof l_P_3198);
S_R9(&l_P_3198, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_3196).f_T), l_P_3198, (l_V_3196).f_C));
S_R9(&((*(R12 *)rt_nil_check(l_Y_3195))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_3198), 0);
S_R9(&((*(R12 *)rt_nil_check(l_Y_3195))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_3195))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_3195))).f_OWNER = rt_neg(((rt_int)1LL));
}
{
R17 * l_R_3199; memset(&l_R_3199, 0, sizeof l_R_3199);
l_R_3199 = r_NAMED_ROOT(((*(R17 *)rt_nil_check(p_S))).f_A);
if ((!(l_R_3199 == NULL)))
{
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_R_3199))).f_NAME, ((*(R17 *)rt_nil_check(p_S))).f_NAME)))
{
{
R12 * l_OLD_3200; memset(&l_OLD_3200, 0, sizeof l_OLD_3200);
l_OLD_3200 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_3199))).f_NAME);
if ((!(l_OLD_3200 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_OLD_3200))).f_KIND == g_Y_VAR))
{
{
R12 * l_H_3201; memset(&l_H_3201, 0, sizeof l_H_3201);
l_H_3201 = r_NEW_SYM(g_Y_VAR, ((*(R17 *)rt_nil_check(l_R_3199))).f_NAME);
((*(R12 *)rt_nil_check(l_H_3201))).f_T = ((*(R12 *)rt_nil_check(l_OLD_3200))).f_T;
((*(R12 *)rt_nil_check(l_H_3201))).f_WITHV = ((rt_int)2LL);
((*(R12 *)rt_nil_check(l_H_3201))).f_OWNER = ((*(R12 *)rt_nil_check(l_OLD_3200))).f_OWNER;
r_DEFINE(l_H_3201, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
}
}
}
}
}
}
}
r_DEFINE(l_Y_3195, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R17 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R17 * p_S) { RT_B_TICK(); 
R17 * l_ARM_3202; memset(&l_ARM_3202, 0, sizeof l_ARM_3202);
l_ARM_3202 = ((*(R17 *)rt_nil_check(p_S))).f_B;
R27 * l_SEEN_3203; memset(&l_SEEN_3203, 0, sizeof l_SEEN_3203);
l_SEEN_3203 = NULL;
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R28 l_CH_3204; memset(&l_CH_3204, 0, sizeof l_CH_3204);
S_R28(&l_CH_3204, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_3205; memset(&l_T_3205, 0, sizeof l_T_3205);
l_T_3205 = r_REAL_TYPE((l_CH_3204).f_T);
R12 * l_BOUND_3206; memset(&l_BOUND_3206, 0, sizeof l_BOUND_3206);
l_BOUND_3206 = r_DISCRIMINATED(((*(R17 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_3205))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_3205))).f_KIND == g_T_BITS)))
{
{
R9 l_TMP_3207; memset(&l_TMP_3207, 0, sizeof l_TMP_3207);
S_R9(&l_TMP_3207, r_NEW_NAME(rt_str("cs", 2)), 0);
R9 l_WORD_3208; memset(&l_WORD_3208, 0, sizeof l_WORD_3208);
S_R9(&l_WORD_3208, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_3207, (l_CH_3204).f_C));
for (;;) {
if ((l_ARM_3202 == NULL)) goto L_end3209;
{
{
R17 * l_L_3210; memset(&l_L_3210, 0, sizeof l_L_3210);
l_L_3210 = ((*(R17 *)rt_nil_check(l_ARM_3202))).f_A;
R9 l_COND_3211; memset(&l_COND_3211, 0, sizeof l_COND_3211);
S_R9(&l_COND_3211, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3210 == NULL)) goto L_end3212;
{
S_R9(&l_COND_3211, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_3211, l_TMP_3207, (r_EXPR(l_L_3210, l_T_3205)).f_C), 0);
l_L_3210 = ((*(R17 *)rt_nil_check(l_L_3210))).f_NEXT;
}
RT_B_TICK();
} L_end3212: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3208, l_COND_3211));
S_R9(&l_WORD_3208, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3202))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3202))).f_C);
}
l_ARM_3202 = ((*(R17 *)rt_nil_check(l_ARM_3202))).f_NEXT;
}
RT_B_TICK();
} L_end3209: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_3208, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if (((((*(R22 *)rt_nil_check(l_T_3205))).f_KIND == g_T_FLOAT) || (((((*(R22 *)rt_nil_check(l_T_3205))).f_KIND == g_T_INT) && (!(((*(R22 *)rt_nil_check(l_T_3205))).f_SCALE == ((rt_int)0LL)))))))
{
r_VALUE_CASE(p_S, l_CH_3204);
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_3205))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_3205))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_3205))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_3205))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_3205));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_3204).f_C));
for (;;) {
if ((l_ARM_3202 == NULL)) goto L_end3213;
{
{
R17 * l_L_3214; memset(&l_L_3214, 0, sizeof l_L_3214);
l_L_3214 = ((*(R17 *)rt_nil_check(l_ARM_3202))).f_A;
R25 l_FIRST_3215; memset(&l_FIRST_3215, 0, sizeof l_FIRST_3215);
S_R25(&l_FIRST_3215, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_3214 == NULL)) goto L_end3216;
{
if ((((*(R17 *)rt_nil_check(l_L_3214))).f_KIND == g_N_RANGE))
{
{
R25 l_LO_3217; memset(&l_LO_3217, 0, sizeof l_LO_3217);
S_R25(&l_LO_3217, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_3214))).f_A, l_T_3205), 0);
R25 l_HI_3218; memset(&l_HI_3218, 0, sizeof l_HI_3218);
S_R25(&l_HI_3218, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_3214))).f_B, l_T_3205), 0);
rt_int l_A_3219; memset(&l_A_3219, 0, sizeof l_A_3219);
l_A_3219 = (l_LO_3217).f_V;
rt_int l_B_3220; memset(&l_B_3220, 0, sizeof l_B_3220);
l_B_3220 = (l_HI_3218).f_V;
if ((!(((l_LO_3217).f_OK && (l_HI_3218).f_OK))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_3214))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R17 *)rt_nil_check(l_L_3214))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_L_3214))).f_IV == ((rt_int)3LL))))
{
l_A_3219 = rt_add(l_A_3219, ((rt_int)1LL));
}
if ((((*(R17 *)rt_nil_check(l_L_3214))).f_IV >= ((rt_int)2LL)))
{
l_B_3220 = rt_sub(l_B_3220, ((rt_int)1LL));
}
if ((!(l_FIRST_3215).f_OK))
{
S_R25(&l_FIRST_3215, r_SOME(l_A_3219), 0);
}
l_SEEN_3203 = r_DISTINCT_LABEL(l_SEEN_3203, l_A_3219, l_B_3220, ((*(R17 *)rt_nil_check(l_L_3214))).f_LINE);
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_3219), r_NUM(l_B_3220)));
}
}
else
{
{
R25 l_M_3221; memset(&l_M_3221, 0, sizeof l_M_3221);
S_R25(&l_M_3221, r_ENUM_MANIFEST(l_L_3214, l_T_3205), 0);
if ((!(l_M_3221).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_3214))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_3215).f_OK))
{
S_R25(&l_FIRST_3215, l_M_3221, 0);
}
l_SEEN_3203 = r_DISTINCT_LABEL(l_SEEN_3203, (l_M_3221).f_V, (l_M_3221).f_V, ((*(R17 *)rt_nil_check(l_L_3214))).f_LINE);
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_3221).f_V)));
}
}
l_L_3214 = ((*(R17 *)rt_nil_check(l_L_3214))).f_NEXT;
}
RT_B_TICK();
} L_end3216: ;
if ((!(l_BOUND_3206 == NULL)))
{
{
R22 * l_SAVED_3222; memset(&l_SAVED_3222, 0, sizeof l_SAVED_3222);
l_SAVED_3222 = ((*(R12 *)rt_nil_check(l_BOUND_3206))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_3206))).f_T = r_NARROW(l_SAVED_3222, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_3215).f_V);
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3202))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3202))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_3206))).f_T = l_SAVED_3222;
}
}
else
{
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3202))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3202))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_3202 = ((*(R17 *)rt_nil_check(l_ARM_3202))).f_NEXT;
}
RT_B_TICK();
} L_end3213: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODES(rt_str("default:", 8));
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
r_CODES(rt_str("break;", 6));
}
r_CODES(rt_str("}", 1));
}
}
static R27 * r_DISTINCT_LABEL(R27 * p_SEEN, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); 
R27 * l_P_3223; memset(&l_P_3223, 0, sizeof l_P_3223);
l_P_3223 = p_SEEN;
if ((p_A > p_B))
{
{ R27 * rv3224 = p_SEEN;
return rv3224; }
}
for (;;) {
if ((l_P_3223 == NULL)) goto L_end3225;
{
if (((p_A <= (((*(R27 *)rt_nil_check(l_P_3223))).f_MHI).f_V) && ((((*(R27 *)rt_nil_check(l_P_3223))).f_MLO).f_V <= p_B)))
{
r_FAIL(p_LINE, rt_str("the choice-label values must be distinct (4.5.5.2)", 50));
}
l_P_3223 = ((*(R27 *)rt_nil_check(l_P_3223))).f_NEXT;
}
RT_B_TICK();
} L_end3225: ;
l_P_3223 = ({ R27 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R27(&(*(R27 *)rt_nil_check(l_P_3223)), ({ R27 rc3226; memset(&rc3226, 0, sizeof rc3226);  S_R9(&rc3226.f_LO, r_NO_TEXT(), 0); S_R9(&rc3226.f_HI, r_NO_TEXT(), 0); S_R25(&rc3226.f_MLO, r_SOME(p_A), 0); S_R25(&rc3226.f_MHI, r_SOME(p_B), 0); rc3226.f_ANYARG = 0; rc3226.f_NEXT = p_SEEN; rc3226; }), 0);
{ R27 * rv3227 = l_P_3223;
return rv3227; }
rt_raise(RT_X_INIT);
}
static void r_VALUE_CASE(R17 * p_S, R28 p_CH) { RT_B_TICK(); 
R9 l_TMP_3228; memset(&l_TMP_3228, 0, sizeof l_TMP_3228);
S_R9(&l_TMP_3228, r_NEW_NAME(rt_str("cs", 2)), 0);
R28 l_X_3229; memset(&l_X_3229, 0, sizeof l_X_3229);
S_R28(&l_X_3229, r_MKET(l_TMP_3228, (p_CH).f_T), 0);
R17 * l_ARM_3230; memset(&l_ARM_3230, 0, sizeof l_ARM_3230);
l_ARM_3230 = ((*(R17 *)rt_nil_check(p_S))).f_B;
R9 l_WORD_3231; memset(&l_WORD_3231, 0, sizeof l_WORD_3231);
S_R9(&l_WORD_3231, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(r_REAL_TYPE((p_CH).f_T)), l_TMP_3228, (p_CH).f_C));
for (;;) {
if ((l_ARM_3230 == NULL)) goto L_end3232;
{
{
R17 * l_L_3233; memset(&l_L_3233, 0, sizeof l_L_3233);
l_L_3233 = ((*(R17 *)rt_nil_check(l_ARM_3230))).f_A;
R9 l_COND_3234; memset(&l_COND_3234, 0, sizeof l_COND_3234);
S_R9(&l_COND_3234, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3233 == NULL)) goto L_end3235;
{
if ((((*(R17 *)rt_nil_check(l_L_3233))).f_KIND == g_N_RANGE))
{
{
R28 l_LO_3236; memset(&l_LO_3236, 0, sizeof l_LO_3236);
S_R28(&l_LO_3236, r_CASE_LABEL(((*(R17 *)rt_nil_check(l_L_3233))).f_A, (p_CH).f_T), 0);
R28 l_HI_3237; memset(&l_HI_3237, 0, sizeof l_HI_3237);
S_R28(&l_HI_3237, r_CASE_LABEL(((*(R17 *)rt_nil_check(l_L_3233))).f_B, (p_CH).f_T), 0);
rstr l_GE_3238; memset(&l_GE_3238, 0, sizeof l_GE_3238);
l_GE_3238 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_GE_3238, rt_str(">=", 2));
rstr l_LE_3239; memset(&l_LE_3239, 0, sizeof l_LE_3239);
l_LE_3239 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_LE_3239, rt_str("<=", 2));
if (((((*(R17 *)rt_nil_check(l_L_3233))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_L_3233))).f_IV == ((rt_int)3LL))))
{
rt_b_assign(&l_GE_3238, rt_str("> ", 2));
}
if ((((*(R17 *)rt_nil_check(l_L_3233))).f_IV >= ((rt_int)2LL)))
{
rt_b_assign(&l_LE_3239, rt_str("< ", 2));
}
S_R9(&l_COND_3234, r_FMT3(rt_str("@ || (@ && @)", 13), l_COND_3234, r_VALUE_COMPARE(l_X_3229, l_LO_3236, r_MK(l_GE_3238)), r_VALUE_COMPARE(l_X_3229, l_HI_3237, r_MK(l_LE_3239))), 0);
}
}
else
{
S_R9(&l_COND_3234, r_FMT2(rt_str("@ || @", 6), l_COND_3234, r_VALUE_COMPARE(l_X_3229, r_CASE_LABEL(l_L_3233, (p_CH).f_T), r_MK(rt_str("==", 2)))), 0);
}
l_L_3233 = ((*(R17 *)rt_nil_check(l_L_3233))).f_NEXT;
}
RT_B_TICK();
} L_end3235: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3231, l_COND_3234));
S_R9(&l_WORD_3231, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3230))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3230))).f_C);
}
l_ARM_3230 = ((*(R17 *)rt_nil_check(l_ARM_3230))).f_NEXT;
}
RT_B_TICK();
} L_end3232: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_3231, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
static R28 r_CASE_LABEL(R17 * p_L, R22 * p_T) { RT_B_TICK(); 
R28 l_V_3240; memset(&l_V_3240, 0, sizeof l_V_3240);
S_R28(&l_V_3240, r_EXPR(p_L, p_T), 0);
if ((!r_SAME_CLASS(r_REAL_TYPE((l_V_3240).f_T), r_REAL_TYPE(p_T))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_L))).f_LINE, rt_str("a case label is a value of the type of the choice (4.5.5.2)", 59));
}
{ R28 rv3241 = l_V_3240;
return rv3241; }
rt_raise(RT_X_INIT);
}
static R9 r_VALUE_COMPARE(R28 p_A, R28 p_B, R9 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT))
{
{ R9 rv3242 = r_FLOAT_COMPARE(p_A, p_B, p_OP);
return rv3242; }
}
{ R9 rv3243 = r_FIXED_COMPARE(p_A, p_B, p_OP);
return rv3243; }
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
{ R12 * rv3244 = NULL;
return rv3244; }
}
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv3245 = NULL;
return rv3245; }
}
{
R12 * l_Y_3246; memset(&l_Y_3246, 0, sizeof l_Y_3246);
l_Y_3246 = r_LOOKUP(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_3246 == NULL))
{
{ R12 * rv3247 = NULL;
return rv3247; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3246))).f_KIND == g_Y_VAR)))
{
{ R12 * rv3248 = NULL;
return rv3248; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3246))).f_WITHV == ((rt_int)1LL))))
{
{ R12 * rv3249 = NULL;
return rv3249; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_3246))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv3250 = NULL;
return rv3250; }
}
{
R26 * l_F_3251; memset(&l_F_3251, 0, sizeof l_F_3251);
l_F_3251 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_3246))).f_T), ((*(R17 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_3251 == NULL))
{
{ R12 * rv3252 = NULL;
return rv3252; }
}
if ((!(((*(R26 *)rt_nil_check(l_F_3251))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv3253 = NULL;
return rv3253; }
}
}
{ R12 * rv3254 = l_Y_3246;
return rv3254; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R9 p_TAGN, rt_int p_V) { RT_B_TICK(); 
R22 * l_N_3255; memset(&l_N_3255, 0, sizeof l_N_3255);
l_N_3255 = r_COPY_TYP(p_T);
R26 * l_F_3256; memset(&l_F_3256, 0, sizeof l_F_3256);
l_F_3256 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R27 * l_A_3257; memset(&l_A_3257, 0, sizeof l_A_3257);
l_A_3257 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R27 * l_HEAD_3258; memset(&l_HEAD_3258, 0, sizeof l_HEAD_3258);
l_HEAD_3258 = NULL;
R27 * l_TAIL_3259; memset(&l_TAIL_3259, 0, sizeof l_TAIL_3259);
l_TAIL_3259 = NULL;
for (;;) {
if ((l_F_3256 == NULL)) goto L_end3260;
{
if (((!(((*(R26 *)rt_nil_check(l_F_3256))).f_KIND == ((rt_int)0LL))) && (!(l_A_3257 == NULL))))
{
{
R27 * l_B_3261; memset(&l_B_3261, 0, sizeof l_B_3261);
l_B_3261 = ({ R27 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R27(&(*(R27 *)rt_nil_check(l_B_3261)), (*(R27 *)rt_nil_check(l_A_3257)), 0);
((*(R27 *)rt_nil_check(l_B_3261))).f_NEXT = NULL;
if (r_TEQ(((*(R26 *)rt_nil_check(l_F_3256))).f_NAME, p_TAGN))
{
((*(R27 *)rt_nil_check(l_B_3261))).f_ANYARG = 0;
S_R25(&((*(R27 *)rt_nil_check(l_B_3261))).f_MLO, r_SOME(p_V), 0);
S_R9(&((*(R27 *)rt_nil_check(l_B_3261))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_3259 == NULL))
{
l_HEAD_3258 = l_B_3261;
}
else
{
((*(R27 *)rt_nil_check(l_TAIL_3259))).f_NEXT = l_B_3261;
}
l_TAIL_3259 = l_B_3261;
}
l_A_3257 = ((*(R27 *)rt_nil_check(l_A_3257))).f_NEXT;
}
l_F_3256 = ((*(R26 *)rt_nil_check(l_F_3256))).f_NEXT;
}
RT_B_TICK();
} L_end3260: ;
((*(R22 *)rt_nil_check(l_N_3255))).f_ARGS = l_HEAD_3258;
{ R22 * rv3262 = l_N_3255;
return rv3262; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R17 * p_S) { RT_B_TICK(); 
R17 * l_ARM_3263; memset(&l_ARM_3263, 0, sizeof l_ARM_3263);
l_ARM_3263 = ((*(R17 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_3264; memset(&l_SAVED_3264, 0, sizeof l_SAVED_3264);
l_SAVED_3264 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_3263 == NULL)) goto L_end3265;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_ARM_3263))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3263))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3263))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_3264;
return;
}
l_ARM_3263 = ((*(R17 *)rt_nil_check(l_ARM_3263))).f_NEXT;
}
RT_B_TICK();
} L_end3265: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_3264;
}
}
static R22 * r_PATHS_TYPE(void) { RT_B_TICK(); 
R22 * l_T_3266; memset(&l_T_3266, 0, sizeof l_T_3266);
l_T_3266 = r_NEW_TYP(g_T_PATHS);
S_R9(&((*(R22 *)rt_nil_check(l_T_3266))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv3267 = l_T_3266;
return rv3267; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R17 * p_S) { RT_B_TICK(); 
R9 l_TD_3268; memset(&l_TD_3268, 0, sizeof l_TD_3268);
S_R9(&l_TD_3268, r_NEW_NAME(rt_str("td", 2)), 0);
R17 * l_P_3269; memset(&l_P_3269, 0, sizeof l_P_3269);
l_P_3269 = ((*(R17 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_3269 == NULL)) goto L_end3270;
{
{
R12 * l_Y_3271; memset(&l_Y_3271, 0, sizeof l_Y_3271);
l_Y_3271 = r_NEW_SYM(g_Y_PATH, ((*(R17 *)rt_nil_check(l_P_3269))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3271))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_3271))).f_DECL = l_P_3269;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_3271, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_3271))).f_INPUT = 1;
r_DEFINE(l_Y_3271, ((*(R17 *)rt_nil_check(l_P_3269))).f_LINE);
}
l_P_3269 = ((*(R17 *)rt_nil_check(l_P_3269))).f_NEXT;
}
RT_B_TICK();
} L_end3270: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_3268));
r_CODES(rt_str("rt_b_par_begin();", 17));
r_CODE(r_FMT2(rt_str("{ rt_frame @a; if (RT_TRY(@a)) {", 32), l_TD_3268, l_TD_3268));
l_P_3269 = ((*(R17 *)rt_nil_check(p_S))).f_A;
{
rt_int l_K_3272; memset(&l_K_3272, 0, sizeof l_K_3272);
l_K_3272 = ((rt_int)0LL);
for (;;) {
if ((l_P_3269 == NULL)) goto L_end3273;
{
l_K_3272 = rt_add(l_K_3272, ((rt_int)1LL));
r_ACTIVATE_PATH(l_P_3269, l_TD_3268, l_K_3272);
l_P_3269 = ((*(R17 *)rt_nil_check(l_P_3269))).f_NEXT;
}
RT_B_TICK();
} L_end3273: ;
}
r_CODE(r_FMT3(rt_str("RT_POP(@a); } else { RT_POP(@a); rt_b_par_abandon(&@);", 54), l_TD_3268, l_TD_3268, l_TD_3268));
r_CODES(rt_str("rt_raise(rt_xcur); } }", 22));
if (r_HAS_USER_ROUTINE(r_MKN(rt_str("PAR_BLOCK_", 10))))
{
{
R17 * l_C_3274; memset(&l_C_3274, 0, sizeof l_C_3274);
l_C_3274 = r_NEW_NODE(g_N_CALL, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
R17 * l_A_3275; memset(&l_A_3275, 0, sizeof l_A_3275);
l_A_3275 = r_NEW_NODE(g_N_APPLY, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_C_3274))).f_NAME, r_MKN(rt_str("PAR_BLOCK_", 10)), 0);
S_R9(&((*(R17 *)rt_nil_check(l_A_3275))).f_NAME, r_MKN(rt_str("$PATH_LIST", 10)), 0);
((*(R17 *)rt_nil_check(l_C_3274))).f_A = l_A_3275;
r_CODE(r_FMT1(rt_str("rt_b_par_dispatch_push(&@);", 27), l_TD_3268));
r_STMT(l_C_3274);
r_CODES(rt_str("rt_b_par_dispatch_pop();", 24));
}
}
else
{
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_3268));
}
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static R28 r_PATH_LIST(rt_int p_LINE) { RT_B_TICK(); 
R22 * l_PE_3276; memset(&l_PE_3276, 0, sizeof l_PE_3276);
l_PE_3276 = r_RESOLVE_USER_NAME(r_MK(rt_str("PATH_ENTRY", 10)), p_LINE);
R22 * l_R_3277; memset(&l_R_3277, 0, sizeof l_R_3277);
l_R_3277 = r_REAL_TYPE(l_PE_3276);
R22 * l_AT_3278; memset(&l_AT_3278, 0, sizeof l_AT_3278);
l_AT_3278 = r_ARRAY_OF(l_PE_3276, ((rt_int)1LL));
R9 l_C_3279; memset(&l_C_3279, 0, sizeof l_C_3279);
S_R9(&l_C_3279, r_CTYPE(l_AT_3278), 0);
R9 l_CODE__3280; memset(&l_CODE__3280, 0, sizeof l_CODE__3280);
if ((!(((*(R22 *)rt_nil_check(l_R_3277))).f_KIND == g_T_REC)))
{
r_FAIL(p_LINE, rt_str("PATH_ENTRY is the record type of PARALLEL_SUPPORT (D.7)", 55));
}
S_R9(&l_CODE__3280, r_FMT2(rt_str("({ @ a; rt_int n = rt_b_par_count(); a.lo[0] = 1; a.hi[0] = n; a.p = rt_b_array_alloc(n, sizeof *a.p); memset(a.p, 0, sizeof *a.p * (size_t)(n \? n : 1)); for (rt_int i = 0; i < n; i++) { a.p[i].@ = rt_b_bits_of_int(i + 1, 64);", 226), l_C_3279, ((*(R26 *)rt_nil_check(r_FIND_FIELD(l_R_3277, r_MKN(rt_str("PATH_ADDR", 9)))))).f_CNAME), 0);
S_R9(&l_CODE__3280, r_FMT3(rt_str("@ a.p[i].@ = rt_b_par_id(i); a.p[i].@ = rt_b_par_prio(i);", 57), l_CODE__3280, ((*(R26 *)rt_nil_check(r_FIND_FIELD(l_R_3277, r_MKN(rt_str("ACTIVATION_ID", 13)))))).f_CNAME, ((*(R26 *)rt_nil_check(r_FIND_FIELD(l_R_3277, r_MKN(rt_str("PRIORITY_LEVEL", 14)))))).f_CNAME), 0);
S_R9(&l_CODE__3280, r_FMT3(rt_str("@ a.p[i].@ = rt_b_par_connect(i, @); } a; })", 44), l_CODE__3280, ((*(R26 *)rt_nil_check(r_FIND_FIELD(l_R_3277, r_MKN(rt_str("CONNECT_NAME", 12)))))).f_CNAME, r_NUM(r_STATIC_SIZE_OR_LEN(((*(R26 *)rt_nil_check(r_FIND_FIELD(l_R_3277, r_MKN(rt_str("CONNECT_NAME", 12)))))).f_T))), 0);
{ R28 rv3281 = r_MKET(l_CODE__3280, l_AT_3278);
return rv3281; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_SIZE_OR_LEN(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_MLEN).f_OK)
{
{ rt_int rv3282 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_MLEN).f_V;
return rv3282; }
}
{ rt_int rv3283 = ((rt_int)32LL);
return rv3283; }
rt_raise(RT_X_INIT);
}
static R28 r_RUN_PATHS(R17 * p_E) { RT_B_TICK(); 
R28 l_V_3284; memset(&l_V_3284, 0, sizeof l_V_3284);
S_R28(&l_V_3284, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_3285; memset(&l_T_3285, 0, sizeof l_T_3285);
l_T_3285 = r_REAL_TYPE((l_V_3284).f_T);
R22 * l_R_3286; memset(&l_R_3286, 0, sizeof l_R_3286);
if (((!(((*(R22 *)rt_nil_check(l_T_3285))).f_KIND == g_T_ARR)) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("RUN_PATHS takes the ARRAY OF PATH_ENTRY its PAR_BLOCK_ was given (D.7)", 70));
}
l_R_3286 = r_REAL_TYPE(((*(R22 *)rt_nil_check(l_T_3285))).f_ELEM);
if ((!(((*(R22 *)rt_nil_check(l_R_3286))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("RUN_PATHS takes the ARRAY OF PATH_ENTRY its PAR_BLOCK_ was given (D.7)", 70));
}
{ R28 rv3287 = r_MKET(r_FMT4(rt_str("({ @ l = @; rt_int n = rt_b_extent(1, l.lo, l.hi); for (rt_int k = 0; k < n; k++) rt_b_par_select(rt_b_int_of_bits(l.p[k].@), l.p[k].@); rt_b_par_run(); })", 155), r_CTYPE(l_T_3285), (l_V_3284).f_C, ((*(R26 *)rt_nil_check(r_FIND_FIELD(l_R_3286, r_MKN(rt_str("PATH_ADDR", 9)))))).f_CNAME, ((*(R26 *)rt_nil_check(r_FIND_FIELD(l_R_3286, r_MKN(rt_str("PRIORITY_LEVEL", 14)))))).f_CNAME), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3287; }
rt_raise(RT_X_INIT);
}
static void r_ACTIVATE_PATH(R17 * p_P, R9 p_TD, rt_int p_K) { RT_B_TICK(); 
R9 l_FN_3288; memset(&l_FN_3288, 0, sizeof l_FN_3288);
S_R9(&l_FN_3288, r_NEW_NAME(rt_str("path_", 5)), 0);
R9 l_FT_3289; memset(&l_FT_3289, 0, sizeof l_FT_3289);
S_R9(&l_FT_3289, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_3290; memset(&l_Y_3290, 0, sizeof l_Y_3290);
l_Y_3290 = r_LOOKUP(((*(R17 *)rt_nil_check(p_P))).f_NAME);
R9 l_H_3291; memset(&l_H_3291, 0, sizeof l_H_3291);
S_R9(&l_H_3291, r_OBJ_ACCESS(l_Y_3290), 0);
R9 l_IT_3292; memset(&l_IT_3292, 0, sizeof l_IT_3292);
S_R9(&l_IT_3292, r_NEW_NAME(rt_str("pi", 2)), 0);
R9 l_PRIO_3293; memset(&l_PRIO_3293, 0, sizeof l_PRIO_3293);
S_R9(&l_PRIO_3293, r_MK(rt_str("0", 1)), 0);
R9 l_START_3294; memset(&l_START_3294, 0, sizeof l_START_3294);
R22 * l_LT_3295; memset(&l_LT_3295, 0, sizeof l_LT_3295);
l_LT_3295 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_3289, l_FT_3289));
if ((!(((*(R17 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R9(&l_PRIO_3293, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R17 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R17 * l_R_3296; memset(&l_R_3296, 0, sizeof l_R_3296);
l_R_3296 = ((*(R17 *)rt_nil_check(p_P))).f_A;
R28 l_LV_3297; memset(&l_LV_3297, 0, sizeof l_LV_3297);
S_R28(&l_LV_3297, r_EXPR(((*(R17 *)rt_nil_check(l_R_3296))).f_A, NULL), 0);
R9 l_LO_3298; memset(&l_LO_3298, 0, sizeof l_LO_3298);
S_R9(&l_LO_3298, (l_LV_3297).f_C, 0);
R9 l_HI_3299; memset(&l_HI_3299, 0, sizeof l_HI_3299);
S_R9(&l_HI_3299, (r_EXPR(((*(R17 *)rt_nil_check(l_R_3296))).f_B, (l_LV_3297).f_T)).f_C, 0);
R22 * l_RT_3300; memset(&l_RT_3300, 0, sizeof l_RT_3300);
l_RT_3300 = r_REAL_TYPE((l_LV_3297).f_T);
if ((((*(R22 *)rt_nil_check(l_RT_3300))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_RT_3300))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_str("a loop prefix over an UNORDERED type (4.6.1)", 44));
}
l_LT_3295 = ((*(R22 *)rt_nil_check(l_RT_3300))).f_BASE;
S_R9(&l_HI_3299, (r_EXPR(((*(R17 *)rt_nil_check(l_R_3296))).f_B, l_LT_3295)).f_C, 0);
}
else if (((!(((*(R22 *)rt_nil_check(l_RT_3300))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_RT_3300))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_str("the range of a loop prefix is integer or enumerated (4.6.1)", 59));
}
if (((((*(R17 *)rt_nil_check(l_R_3296))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_R_3296))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LO_3298, r_FMT1(rt_str("(@) + 1", 7), l_LO_3298), 0);
}
if ((((*(R17 *)rt_nil_check(l_R_3296))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HI_3299, r_FMT1(rt_str("(@) - 1", 7), l_HI_3299), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_3291, l_LO_3298, l_HI_3299));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_3292, l_H_3291, l_IT_3292, l_H_3291), l_IT_3292));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_3292));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_3289, r_UP_FRAME()));
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME), l_IT_3292));
}
if ((!(((*(R17 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R28 l_V_3301; memset(&l_V_3301, 0, sizeof l_V_3301);
r_OPEN_SCOPE();
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_3302; memset(&l_I_3302, 0, sizeof l_I_3302);
l_I_3302 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_3302))).f_T = l_LT_3295;
((*(R12 *)rt_nil_check(l_I_3302))).f_INPUT = 1;
S_R9(&((*(R12 *)rt_nil_check(l_I_3302))).f_ACCESS, l_IT_3292, 0);
((*(R12 *)rt_nil_check(l_I_3302))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_3302, ((*(R17 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R28(&l_V_3301, r_EXPR(((*(R17 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3301).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
if ((!r_IMPLEMENTATION_SEMAPHORE(((*(R17 *)rt_nil_check(p_P))).f_D)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_b_cat(rt_str("CONNECT names an implementation-defined semaphore, of the machine's ", 68), rt_str("library segment (4.6.1)", 23)));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_3301).f_C));
}
}
S_R9(&l_START_3294, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_3291, l_IT_3292, l_FN_3288, p_TD), 0);
S_R9(&l_PRIO_3293, r_CAT(l_PRIO_3293, r_FMT4(rt_str("); rt_b_path_info(&@, @, @, @", 29), p_TD, r_NUM(p_K), l_IT_3292, r_CONNECT_NAME(p_P))), 0);
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT4(rt_str("@@, @); if (@ == ", 17), l_START_3294, p_TD, l_PRIO_3293, l_IT_3292));
r_CODE(r_FMT1(rt_str("@.hi) break; }", 14), l_H_3291));
}
else
{
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_3294, p_TD, l_PRIO_3293));
}
r_PATH_BODY(p_P, l_FN_3288, l_FT_3289, l_LT_3295);
}
static rt_int r_IMPLEMENTATION_SEMAPHORE(R17 * p_E) { RT_B_TICK(); 
R17 * l_R_3303; memset(&l_R_3303, 0, sizeof l_R_3303);
l_R_3303 = p_E;
for (;;) {
if (((((*(R17 *)rt_nil_check(l_R_3303))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_3303))).f_KIND == g_N_APPLY))) goto L_end3304;
{
if (((!(((*(R17 *)rt_nil_check(l_R_3303))).f_KIND == g_N_INDEX)) && (!(((*(R17 *)rt_nil_check(l_R_3303))).f_KIND == g_N_FIELD))))
{
{ rt_int rv3305 = 0;
return rv3305; }
}
l_R_3303 = ((*(R17 *)rt_nil_check(l_R_3303))).f_A;
}
RT_B_TICK();
} L_end3304: ;
{
R12 * l_Y_3306; memset(&l_Y_3306, 0, sizeof l_Y_3306);
l_Y_3306 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(l_R_3303))).f_NAME);
if ((l_Y_3306 == NULL))
{
{ rt_int rv3307 = 0;
return rv3307; }
}
if ((((*(R12 *)rt_nil_check(l_Y_3306))).f_HOME == NULL))
{
{ rt_int rv3308 = 0;
return rv3308; }
}
{ rt_int rv3309 = r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LIBSEGS, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3306))).f_HOME))).f_NAME);
return rv3309; }
}
rt_raise(RT_X_INIT);
}
static R9 r_CONNECT_NAME(R17 * p_P) { RT_B_TICK(); 
R17 * l_R_3310; memset(&l_R_3310, 0, sizeof l_R_3310);
l_R_3310 = ((*(R17 *)rt_nil_check(p_P))).f_D;
if ((l_R_3310 == NULL))
{
{ R9 rv3311 = r_MK(rt_str("\"\"", 2));
return rv3311; }
}
for (;;) {
if (((((*(R17 *)rt_nil_check(l_R_3310))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_3310))).f_KIND == g_N_APPLY))) goto L_end3312;
{
if (((!(((*(R17 *)rt_nil_check(l_R_3310))).f_KIND == g_N_INDEX)) && (!(((*(R17 *)rt_nil_check(l_R_3310))).f_KIND == g_N_FIELD))))
{
{ R9 rv3313 = r_MK(rt_str("\"\"", 2));
return rv3313; }
}
l_R_3310 = ((*(R17 *)rt_nil_check(l_R_3310))).f_A;
}
RT_B_TICK();
} L_end3312: ;
{ R9 rv3314 = r_CSTRING(((*(R17 *)rt_nil_check(l_R_3310))).f_NAME);
return rv3314; }
rt_raise(RT_X_INIT);
}
static R9 r_UP_FRAME(void) { RT_B_TICK(); 
if ((((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R9 rv3315 = r_MK(rt_str("NULL", 4));
return rv3315; }
}
{ R9 rv3316 = r_MK(rt_str("F", 1));
return rv3316; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R17 * p_P, R9 p_FN, R9 p_FT, R22 * p_LT) { RT_B_TICK(); 
R14 l_SAVED_CODE_3317; memset(&l_SAVED_CODE_3317, 0, sizeof l_SAVED_CODE_3317);
S_R14(&l_SAVED_CODE_3317, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R18 * l_SAVED_CTXS_3318; memset(&l_SAVED_CTXS_3318, 0, sizeof l_SAVED_CTXS_3318);
l_SAVED_CTXS_3318 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R19 * l_OUTER_3319; memset(&l_OUTER_3319, 0, sizeof l_OUTER_3319);
l_OUTER_3319 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_H_3320; memset(&l_H_3320, 0, sizeof l_H_3320);
l_H_3320 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_A;
R19 * l_CS_3321; memset(&l_CS_3321, 0, sizeof l_CS_3321);
l_CS_3321 = ({ R19 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz; })); p; });
R9 l_UPT_3322; memset(&l_UPT_3322, 0, sizeof l_UPT_3322);
S_R9(&l_UPT_3322, r_MK(rt_str("void", 4)), 0);
if ((((*(R19 *)rt_nil_check(l_OUTER_3319))).f_LEVEL > ((rt_int)0LL)))
{
S_R9(&l_UPT_3322, ((*(R19 *)rt_nil_check(l_OUTER_3319))).f_FTYPE, 0);
}
S_R19(&(*(R19 *)rt_nil_check(l_CS_3321)), ({ R19 rc3323; memset(&rc3323, 0, sizeof rc3323);  rc3323.f_LEVEL = rt_add(((*(R19 *)rt_nil_check(l_OUTER_3319))).f_LEVEL, ((rt_int)1LL)); rc3323.f_R = NULL; rc3323.f_FRAMED = 1; S_R9(&rc3323.f_FTYPE, p_FT, 0); S_R14(&rc3323.f_FIELDS, ({ R14 rc3324; memset(&rc3324, 0, sizeof rc3324);  rc3324.f_HEAD = NULL; rc3324.f_TAIL = NULL; rc3324; }), 0); rc3323.f_UP = l_OUTER_3319; rc3323.f_IMPORTS = ((*(R17 *)rt_nil_check(l_H_3320))).f_B; rc3323.f_SIGNALS = ((*(R17 *)rt_nil_check(l_H_3320))).f_A; rc3323.f_RESULT = NULL; rc3323.f_IS_PATH = 1; S_R9(&rc3323.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3323; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_3322), &((*(R19 *)rt_nil_check(l_CS_3321))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_3321;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3325; memset(&rc3325, 0, sizeof rc3325);  rc3325.f_HEAD = NULL; rc3325.f_TAIL = NULL; rc3325; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R17 *)rt_nil_check(l_H_3320))).f_B, ((*(R17 *)rt_nil_check(l_H_3320))).f_A, ((*(R17 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_3326; memset(&l_I_3326, 0, sizeof l_I_3326);
l_I_3326 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_3326))).f_T = p_LT;
((*(R12 *)rt_nil_check(l_I_3326))).f_INPUT = 1;
S_R9(&((*(R12 *)rt_nil_check(l_I_3326))).f_FIELD, r_FMT1(rt_str("l_@", 3), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
S_R9(&((*(R12 *)rt_nil_check(l_I_3326))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3321))).f_FIELDS);
r_DEFINE(l_I_3326, ((*(R17 *)rt_nil_check(p_P))).f_LINE);
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
R17 * l_L_3327; memset(&l_L_3327, 0, sizeof l_L_3327);
l_L_3327 = ((*(R17 *)rt_nil_check(l_H_3320))).f_A;
R9 l_C_3328; memset(&l_C_3328, 0, sizeof l_C_3328);
S_R9(&l_C_3328, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3327 == NULL)) goto L_end3329;
{
S_R9(&l_C_3328, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_3328, r_EXC_NAME(((*(R17 *)rt_nil_check(l_L_3327))).f_NAME)), 0);
l_L_3327 = ((*(R17 *)rt_nil_check(l_L_3327))).f_NEXT;
}
RT_B_TICK();
} L_end3329: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_3328));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R19 *)rt_nil_check(l_CS_3321))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_3319;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3317, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_3318;
}
static R9 r_JOIN_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_3330; memset(&l_C_3330, 0, sizeof l_C_3330);
l_C_3330 = (p_B).f_HEAD;
R9 l_R_3331; memset(&l_R_3331, 0, sizeof l_R_3331);
S_R9(&l_R_3331, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_3330 == NULL)) goto L_end3332;
{
S_R9(&l_R_3331, r_CAT(l_R_3331, ((*(R15 *)rt_nil_check(l_C_3330))).f_T), 0);
l_C_3330 = ((*(R15 *)rt_nil_check(l_C_3330))).f_NEXT;
}
RT_B_TICK();
} L_end3332: ;
{ R9 rv3333 = l_R_3331;
return rv3333; }
rt_raise(RT_X_INIT);
}
static R9 r_PATH_REF(R17 * p_E) { RT_B_TICK(); 
R9 l_NAME_3334; memset(&l_NAME_3334, 0, sizeof l_NAME_3334);
S_R9(&l_NAME_3334, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
R9 l_SUB_3335; memset(&l_SUB_3335, 0, sizeof l_SUB_3335);
S_R9(&l_SUB_3335, r_MK(rt_str("0", 1)), 0);
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R17 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R9(&l_SUB_3335, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_3336; memset(&l_Y_3336, 0, sizeof l_Y_3336);
l_Y_3336 = r_LOOKUP(l_NAME_3334);
if ((l_Y_3336 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_3334);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3336))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_3334);
}
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3336))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R9 rv3337 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_3336), l_SUB_3335);
return rv3337; }
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
static R28 r_PARALLEL_BUILTIN(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R9 l_NAME_3338; memset(&l_NAME_3338, 0, sizeof l_NAME_3338);
S_R9(&l_NAME_3338, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_3339; memset(&l_LINE_3339, 0, sizeof l_LINE_3339);
l_LINE_3339 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_3338, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R28 l_V_3340; memset(&l_V_3340, 0, sizeof l_V_3340);
S_R28(&l_V_3340, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3340).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_3339, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R28 rv3341 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_3340).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_3340).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3341; }
}
}
else if (r_TEQS(l_NAME_3338, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R28 rv3342 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3342; }
}
{ R28 rv3343 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3343; }
}
else if (r_TEQS(l_NAME_3338, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R17 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R28 rv3344 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv3344; }
}
{ R28 rv3345 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R17 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv3345; }
}
else if ((r_TEQS(l_NAME_3338, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_3338, rt_str("RELEASE", 7))))
{
if ((((!(((*(R17 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_3339, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_3338);
}
{
R28 l_V_3346; memset(&l_V_3346, 0, sizeof l_V_3346);
S_R28(&l_V_3346, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3346).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_3339, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_3346).f_LVAL))
{
r_FAIL(l_LINE_3339, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_3338, rt_str("REQUEST", 7)))
{
{ R28 rv3347 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_3346).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3347; }
}
{ R28 rv3348 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_3346).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3348; }
}
}
else if (r_TEQS(l_NAME_3338, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_3339);
{ R28 rv3349 = r_START_IO_CALL(p_E);
return rv3349; }
}
else if (r_TEQS(l_NAME_3338, rt_str("INTERRUPT_AFTER", 15)))
{
r_REQUIRE_MACHINE(l_LINE_3339);
if (((((((*(R17 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))) || (((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAIL(l_LINE_3339, rt_str("INTERRUPT_AFTER (MICROSECONDS # S)", 34));
}
{
R28 l_V_3350; memset(&l_V_3350, 0, sizeof l_V_3350);
S_R28(&l_V_3350, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, NULL), 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3350).f_T)))).f_KIND == g_T_SEM)) || (!(l_V_3350).f_LVAL)))
{
r_FAIL(l_LINE_3339, rt_str("INTERRUPT_AFTER (MICROSECONDS # S): S is a semaphore variable", 61));
}
{ R28 rv3351 = r_MKET(r_FMT2(rt_str("rt_b_interrupt_after(@, @)", 26), (l_V_3350).f_C, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3351; }
}
}
r_FAILT(l_LINE_3339, rt_str("unknown routine ", 16), l_NAME_3338);
rt_raise(RT_X_INIT);
}
static R28 r_START_IO_CALL(R17 * p_E) { RT_B_TICK(); 
R29 * l_ARGS_3352; memset(&l_ARGS_3352, 0, sizeof l_ARGS_3352);
l_ARGS_3352 = r_CALL_ARGS(p_E);
R12 * l_Y_3353; memset(&l_Y_3353, 0, sizeof l_Y_3353);
l_Y_3353 = r_FIND_ROUTINE(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_ARGS_3352, ((*(R17 *)rt_nil_check(p_E))).f_LINE, 1);
R28 l_R_3354; memset(&l_R_3354, 0, sizeof l_R_3354);
if ((l_Y_3353 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R28(&l_R_3354, r_CALL_SYM(l_Y_3353, l_ARGS_3352, ((*(R17 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R28 rv3355 = l_R_3354;
return rv3355; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R17 * p_IMPORTS, R17 * p_SIGNALS, R9 p_NAME) { RT_B_TICK(); 
R20 * l_I_3356; memset(&l_I_3356, 0, sizeof l_I_3356);
l_I_3356 = ({ R20 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R20(&(*(R20 *)rt_nil_check(l_I_3356)), ({ R20 rc3357; memset(&rc3357, 0, sizeof rc3357);  rc3357.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc3357.f_IMPORTS = p_IMPORTS; rc3357.f_SIGNALS = p_SIGNALS; S_R9(&rc3357.f_NAME, p_NAME, 0); rc3357.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc3357; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_3356;
}
static void r_LEAVE_ISCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R20 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R9 r_ROUTINE_CNAME(R9 p_NAME) { RT_B_TICK(); 
R9 l_BASE0_3358; memset(&l_BASE0_3358, 0, sizeof l_BASE0_3358);
S_R9(&l_BASE0_3358, r_FMT1(rt_str("r_@", 3), r_CID(p_NAME)), 0);
rstr l_S_3359; memset(&l_S_3359, 0, sizeof l_S_3359);
l_S_3359 = rt_b_str_new((l_BASE0_3358).f_LEN, 0);
rt_b_assign(&l_S_3359, r_STR(l_BASE0_3358, (l_BASE0_3358).f_LEN));
R9 l_BASE_3360; memset(&l_BASE_3360, 0, sizeof l_BASE_3360);
S_R9(&l_BASE_3360, l_BASE0_3358, 0);
R17 * l_N_3361; memset(&l_N_3361, 0, sizeof l_N_3361);
l_N_3361 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it3363_lo = ((rt_int)0LL), it3363_hi = rt_sub((l_BASE_3360).f_LEN, ((rt_int)1LL));
for (rt_int it3363 = it3363_lo; it3363 <= it3363_hi; it3363++) {
{
if (rt_b_eq(rt_b_slice(l_S_3359, it3363, it3363), rt_str("$", 1)))
{
S_R9(&l_BASE_3360, r_MK(rt_b_cat(rt_b_cat(rt_b_slice(l_S_3359, ((rt_int)0LL), rt_sub(it3363, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_3359, rt_add(it3363, ((rt_int)1LL)), rt_sub((l_BASE_3360).f_LEN, ((rt_int)1LL))))), 0);
}
}
RT_B_TICK();
if (it3363 == it3363_hi) break;
} } L_end3362: ;
for (;;) {
if ((l_N_3361 == NULL)) goto L_end3364;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_N_3361))).f_NAME, l_BASE_3360))
{
{ R9 rv3365 = r_FMT2(rt_str("@_@", 3), l_BASE_3360, r_NEW_NAME(rt_str("", 0)));
return rv3365; }
}
l_N_3361 = ((*(R17 *)rt_nil_check(l_N_3361))).f_NEXT;
}
RT_B_TICK();
} L_end3364: ;
l_N_3361 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_3361))).f_NAME, l_BASE_3360, 0);
((*(R17 *)rt_nil_check(l_N_3361))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_3361;
{ R9 rv3366 = l_BASE_3360;
return rv3366; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R17 * p_B) { RT_B_TICK(); 
if ((p_B == NULL))
{
{ rt_int rv3367 = 0;
return rv3367; }
}
if ((!(((*(R17 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv3368 = 1;
return rv3368; }
}
{ rt_int rv3369 = r_HAS_HANDLERS(((*(R17 *)rt_nil_check(p_B))).f_B);
return rv3369; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R17 * p_S0) { RT_B_TICK(); 
R17 * l_S_3370; memset(&l_S_3370, 0, sizeof l_S_3370);
l_S_3370 = p_S0;
for (;;) {
if ((l_S_3370 == NULL)) goto L_end3371;
{
if (((((*(R17 *)rt_nil_check(l_S_3370))).f_KIND == g_N_EXCEPT) || (((*(R17 *)rt_nil_check(l_S_3370))).f_KIND == g_N_PAR)))
{
{ rt_int rv3372 = 1;
return rv3372; }
}
if (((((*(R17 *)rt_nil_check(l_S_3370))).f_KIND == g_N_LABELED) || (((*(R17 *)rt_nil_check(l_S_3370))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R17 *)rt_nil_check(l_S_3370))).f_A) || r_HAS_HANDLERS(((*(R17 *)rt_nil_check(l_S_3370))).f_B)))
{
{ rt_int rv3373 = 1;
return rv3373; }
}
}
else if ((((*(R17 *)rt_nil_check(l_S_3370))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3370))).f_A))).f_B))
{
{ rt_int rv3374 = 1;
return rv3374; }
}
}
else if (((((*(R17 *)rt_nil_check(l_S_3370))).f_KIND == g_N_LOOP) || (((*(R17 *)rt_nil_check(l_S_3370))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3370))).f_B))).f_B))
{
{ rt_int rv3375 = 1;
return rv3375; }
}
}
else if (((((*(R17 *)rt_nil_check(l_S_3370))).f_KIND == g_N_IF) || (((*(R17 *)rt_nil_check(l_S_3370))).f_KIND == g_N_CASE)))
{
{
R17 * l_A_3376; memset(&l_A_3376, 0, sizeof l_A_3376);
l_A_3376 = ((*(R17 *)rt_nil_check(l_S_3370))).f_A;
if ((((*(R17 *)rt_nil_check(l_S_3370))).f_KIND == g_N_CASE))
{
l_A_3376 = ((*(R17 *)rt_nil_check(l_S_3370))).f_B;
if ((!(((*(R17 *)rt_nil_check(l_S_3370))).f_D == NULL)))
{
{ rt_int rv3377 = 1;
return rv3377; }
}
if ((!(((*(R17 *)rt_nil_check(l_S_3370))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3370))).f_C))).f_B))
{
{ rt_int rv3378 = 1;
return rv3378; }
}
}
}
else if ((!(((*(R17 *)rt_nil_check(l_S_3370))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3370))).f_B))).f_B))
{
{ rt_int rv3379 = 1;
return rv3379; }
}
}
for (;;) {
if ((l_A_3376 == NULL)) goto L_end3380;
{
if ((!(((*(R17 *)rt_nil_check(l_A_3376))).f_C == NULL)))
{
{ rt_int rv3381 = 1;
return rv3381; }
}
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_3376))).f_B))).f_B))
{
{ rt_int rv3382 = 1;
return rv3382; }
}
l_A_3376 = ((*(R17 *)rt_nil_check(l_A_3376))).f_NEXT;
}
RT_B_TICK();
} L_end3380: ;
}
}
l_S_3370 = ((*(R17 *)rt_nil_check(l_S_3370))).f_NEXT;
}
RT_B_TICK();
} L_end3371: ;
{ rt_int rv3383 = 0;
return rv3383; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R17 * p_R) { RT_B_TICK(); 
R12 * l_Y_3384; memset(&l_Y_3384, 0, sizeof l_Y_3384);
l_Y_3384 = r_NEW_SYM(g_Y_ROUTINE, ((*(R17 *)rt_nil_check(p_R))).f_NAME);
R9 l_RN_3385; memset(&l_RN_3385, 0, sizeof l_RN_3385);
S_R9(&l_RN_3385, ((*(R17 *)rt_nil_check(p_R))).f_NAME, 0);
rstr l_S_3386; memset(&l_S_3386, 0, sizeof l_S_3386);
l_S_3386 = rt_b_str_new((l_RN_3385).f_LEN, 0);
rt_b_assign(&l_S_3386, r_STR(l_RN_3385, (l_RN_3385).f_LEN));
((*(R12 *)rt_nil_check(l_Y_3384))).f_DECL = p_R;
S_R9(&((*(R12 *)rt_nil_check(l_Y_3384))).f_ACCESS, r_ROUTINE_CNAME(((*(R17 *)rt_nil_check(p_R))).f_NAME), 0);
if ((((((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)) && ((((*(R7 *)rt_nil_check(g_W))).f_SEPSEG).f_LEN > ((rt_int)0LL))) && (!(((*(R17 *)rt_nil_check(p_R))).f_FL == ((rt_int)1LL)))))
{
((*(R7 *)rt_nil_check(g_W))).f_SEPR = rt_add(((*(R7 *)rt_nil_check(g_W))).f_SEPR, ((rt_int)1LL));
S_R9(&((*(R12 *)rt_nil_check(l_Y_3384))).f_ACCESS, r_FMT3(rt_str("bs_@_r@_@", 9), r_CID(((*(R7 *)rt_nil_check(g_W))).f_SEPSEG), r_NUM(((*(R7 *)rt_nil_check(g_W))).f_SEPR), r_CID(((*(R17 *)rt_nil_check(p_R))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_Y_3384))).f_LINKAGE = ((rt_int)1LL);
if (((*(R7 *)rt_nil_check(g_W))).f_EXTSEG)
{
((*(R12 *)rt_nil_check(l_Y_3384))).f_LINKAGE = ((rt_int)2LL);
}
}
((*(R12 *)rt_nil_check(l_Y_3384))).f_FRAMED = r_NEEDS_FRAME(((*(R17 *)rt_nil_check(p_R))).f_C);
if ((((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3384))).f_FIELD, ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_3384, ((*(R17 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it3388_lo = ((rt_int)1LL), it3388_hi = rt_sub((((*(R17 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it3388 = it3388_lo; it3388 <= it3388_hi; it3388++) {
{
if (rt_b_eq(rt_b_slice(l_S_3386, it3388, it3388), rt_str("$", 1)))
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3384))).f_PREFIX, r_MKN(rt_b_slice(l_S_3386, ((rt_int)0LL), rt_sub(it3388, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_3389; memset(&l_SHORT_3389, 0, sizeof l_SHORT_3389);
l_SHORT_3389 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_3386, rt_add(it3388, ((rt_int)1LL)), rt_sub((((*(R17 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_3389))).f_ORIG = l_Y_3384;
S_R9(&((*(R12 *)rt_nil_check(l_SHORT_3389))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_3384))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_3389))).f_DECL = p_R;
r_DEFINE(l_SHORT_3389, ((*(R17 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end3387;
}
}
RT_B_TICK();
if (it3388 == it3388_hi) break;
} } L_end3387: ;
}
static void r_DECLARE_MEMBERS(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3390; memset(&l_R_3390, 0, sizeof l_R_3390);
l_R_3390 = p_RS;
for (;;) {
if ((l_R_3390 == NULL)) goto L_end3391;
{
if ((((*(R17 *)rt_nil_check(l_R_3390))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_3390);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_3390);
}
l_R_3390 = ((*(R17 *)rt_nil_check(l_R_3390))).f_NEXT;
}
RT_B_TICK();
} L_end3391: ;
}
static void r_ROUTINE_HEADERS(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3392; memset(&l_R_3392, 0, sizeof l_R_3392);
l_R_3392 = p_RS;
for (;;) {
if ((l_R_3392 == NULL)) goto L_end3393;
{
if ((((*(R17 *)rt_nil_check(l_R_3392))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3394; memset(&l_M_3394, 0, sizeof l_M_3394);
l_M_3394 = r_FIND_DECL(l_R_3392);
r_ENTER_MODULE(l_M_3394);
r_ROUTINE_HEADERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3392))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3394);
}
}
else
{
{
R12 * l_Y_3395; memset(&l_Y_3395, 0, sizeof l_Y_3395);
l_Y_3395 = r_FIND_DECL(l_R_3392);
r_ROUTINE_HEADER(l_Y_3395);
}
}
l_R_3392 = ((*(R17 *)rt_nil_check(l_R_3392))).f_NEXT;
}
RT_B_TICK();
} L_end3393: ;
}
static void r_DISTINCT_SIGNATURES(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3396; memset(&l_R_3396, 0, sizeof l_R_3396);
l_R_3396 = p_RS;
for (;;) {
if ((l_R_3396 == NULL)) goto L_end3397;
{
if ((((*(R17 *)rt_nil_check(l_R_3396))).f_KIND == g_N_ROUTINE))
{
{
R17 * l_Q_3398; memset(&l_Q_3398, 0, sizeof l_Q_3398);
l_Q_3398 = ((*(R17 *)rt_nil_check(l_R_3396))).f_NEXT;
for (;;) {
if ((l_Q_3398 == NULL)) goto L_end3399;
{
if (((((*(R17 *)rt_nil_check(l_Q_3398))).f_KIND == g_N_ROUTINE) && r_TEQ(((*(R17 *)rt_nil_check(l_Q_3398))).f_NAME, ((*(R17 *)rt_nil_check(l_R_3396))).f_NAME)))
{
{
R12 * l_A_3400; memset(&l_A_3400, 0, sizeof l_A_3400);
l_A_3400 = r_FIND_DECL(l_R_3396);
R12 * l_B_3401; memset(&l_B_3401, 0, sizeof l_B_3401);
l_B_3401 = r_FIND_DECL(l_Q_3398);
r_ROUTINE_HEADER(l_A_3400);
r_ROUTINE_HEADER(l_B_3401);
if (r_SAME_SIGNATURE(l_A_3400, l_B_3401))
{
r_FAILT(((*(R17 *)rt_nil_check(l_Q_3398))).f_LINE, rt_str("two routines of one scope with the same signature (4.1): ", 57), ((*(R17 *)rt_nil_check(l_Q_3398))).f_NAME);
}
}
}
l_Q_3398 = ((*(R17 *)rt_nil_check(l_Q_3398))).f_NEXT;
}
RT_B_TICK();
} L_end3399: ;
}
}
l_R_3396 = ((*(R17 *)rt_nil_check(l_R_3396))).f_NEXT;
}
RT_B_TICK();
} L_end3397: ;
}
static R12 * r_FIND_DECL(R17 * p_D) { RT_B_TICK(); 
R12 * l_Y_3402; memset(&l_Y_3402, 0, sizeof l_Y_3402);
l_Y_3402 = r_LOOKUP(((*(R17 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_3402 == NULL)) goto L_end3403;
{
if (((((*(R12 *)rt_nil_check(l_Y_3402))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_3402))).f_ORIG == NULL)))
{
{ R12 * rv3404 = l_Y_3402;
return rv3404; }
}
l_Y_3402 = r_LOOKUP_NEXT(l_Y_3402);
}
RT_B_TICK();
} L_end3403: ;
r_FAILT(((*(R17 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R17 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R17 * p_DECLS) { RT_B_TICK(); 
R17 * l_D_3405; memset(&l_D_3405, 0, sizeof l_D_3405);
l_D_3405 = p_DECLS;
for (;;) {
if ((l_D_3405 == NULL)) goto L_end3406;
{
if (((((*(R17 *)rt_nil_check(l_D_3405))).f_KIND == g_N_TYPE) && (((*(R17 *)rt_nil_check(l_D_3405))).f_A == NULL)))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_3405))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_3407; memset(&l_Y_3407, 0, sizeof l_Y_3407);
l_Y_3407 = r_FIND_DECL(l_D_3405);
R22 * l_T_3408; memset(&l_T_3408, 0, sizeof l_T_3408);
l_T_3408 = r_RESOLVE_USER(r_TYPE_REF(l_D_3405));
}
}
}
l_D_3405 = ((*(R17 *)rt_nil_check(l_D_3405))).f_NEXT;
}
RT_B_TICK();
} L_end3406: ;
}
static R17 * r_TYPE_REF(R17 * p_D) { RT_B_TICK(); 
R17 * l_TS_3409; memset(&l_TS_3409, 0, sizeof l_TS_3409);
l_TS_3409 = r_NEW_NODE(g_TS_NAME, ((*(R17 *)rt_nil_check(p_D))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_TS_3409))).f_NAME, ((*(R17 *)rt_nil_check(p_D))).f_NAME, 0);
{ R17 * rv3410 = l_TS_3409;
return rv3410; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R17 * p_M) { RT_B_TICK(); 
R12 * l_Y_3411; memset(&l_Y_3411, 0, sizeof l_Y_3411);
l_Y_3411 = r_NEW_SYM(g_Y_MODULE, ((*(R17 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_3412; memset(&l_SAVED_3412, 0, sizeof l_SAVED_3412);
l_SAVED_3412 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_3411))).f_DECL = p_M;
r_DEFINE(l_Y_3411, ((*(R17 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_3413; memset(&l_MARK_3413, 0, sizeof l_MARK_3413);
l_MARK_3413 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_3411;
r_DECLARE_TYPES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_3411))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_3413);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_3412;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_3411);
}
static void r_ENTER_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_Y_3414; memset(&l_Y_3414, 0, sizeof l_Y_3414);
l_Y_3414 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_3414 == NULL)) goto L_end3415;
{
{
R12 * l_NEXT_3416; memset(&l_NEXT_3416, 0, sizeof l_NEXT_3416);
l_NEXT_3416 = ((*(R12 *)rt_nil_check(l_Y_3414))).f_SNEXT;
r_DEFINE(l_Y_3414, ((rt_int)0LL));
l_Y_3414 = l_NEXT_3416;
}
}
RT_B_TICK();
} L_end3415: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_MARK_3417; memset(&l_MARK_3417, 0, sizeof l_MARK_3417);
l_MARK_3417 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_3417 == NULL)) goto L_end3418;
{
if ((((*(R12 *)rt_nil_check(l_MARK_3417))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end3418;
}
l_MARK_3417 = ((*(R12 *)rt_nil_check(l_MARK_3417))).f_SNEXT;
}
RT_B_TICK();
} L_end3418: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_3417);
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
{ rt_int rv3419 = 1;
return rv3419; }
}
}
{ rt_int rv3420 = 0;
return rv3420; }
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
R17 * l_D_3421; memset(&l_D_3421, 0, sizeof l_D_3421);
l_D_3421 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_3422; memset(&l_Y_3422, 0, sizeof l_Y_3422);
l_Y_3422 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3422 == NULL)) goto L_end3423;
{
if (r_EXPORTED_BY(l_D_3421, l_Y_3422))
{
((*(R12 *)rt_nil_check(l_Y_3422))).f_EXPORTED = 1;
{
R12 * l_A_3424; memset(&l_A_3424, 0, sizeof l_A_3424);
l_A_3424 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_3422))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_3422))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_3424)), (*(R12 *)rt_nil_check(l_Y_3422)), 0);
((*(R12 *)rt_nil_check(l_A_3424))).f_ORIG = r_ORIGINAL(l_Y_3422);
((*(R12 *)rt_nil_check(l_A_3424))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_3424, ((*(R17 *)rt_nil_check(l_D_3421))).f_LINE);
}
}
l_Y_3422 = ((*(R12 *)rt_nil_check(l_Y_3422))).f_SNEXT;
}
RT_B_TICK();
} L_end3423: ;
{
R17 * l_X_3425; memset(&l_X_3425, 0, sizeof l_X_3425);
l_X_3425 = ((*(R17 *)rt_nil_check(l_D_3421))).f_B;
for (;;) {
if ((l_X_3425 == NULL)) goto L_end3426;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R17 *)rt_nil_check(l_X_3425))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_X_3425))).f_LINE, rt_str("the module does not declare ", 28), ((*(R17 *)rt_nil_check(l_X_3425))).f_NAME);
}
r_CHECK_EXPORT_ITEM(p_M, l_X_3425);
l_X_3425 = ((*(R17 *)rt_nil_check(l_X_3425))).f_NEXT;
}
RT_B_TICK();
} L_end3426: ;
}
}
static void r_CHECK_EXPORT_ITEM(R12 * p_M, R17 * p_X) { RT_B_TICK(); 
R12 * l_Y_3427; memset(&l_Y_3427, 0, sizeof l_Y_3427);
l_Y_3427 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
rt_int l_IS_TYPE_3428; memset(&l_IS_TYPE_3428, 0, sizeof l_IS_TYPE_3428);
l_IS_TYPE_3428 = 0;
rt_int l_IS_ROUTINE_3429; memset(&l_IS_ROUTINE_3429, 0, sizeof l_IS_ROUTINE_3429);
l_IS_ROUTINE_3429 = 0;
for (;;) {
if ((l_Y_3427 == NULL)) goto L_end3430;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_3427))).f_NAME, ((*(R17 *)rt_nil_check(p_X))).f_NAME))
{
if ((((*(R12 *)rt_nil_check(l_Y_3427))).f_KIND == g_Y_TYPE))
{
l_IS_TYPE_3428 = 1;
}
else if ((((((*(R12 *)rt_nil_check(l_Y_3427))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_3427))).f_KIND == g_Y_MODULE)) || (((*(R12 *)rt_nil_check(l_Y_3427))).f_KIND == g_Y_ENUMLIT)))
{
l_IS_ROUTINE_3429 = 1;
}
}
else if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_3427))).f_PREFIX, ((*(R17 *)rt_nil_check(p_X))).f_NAME))
{
l_IS_ROUTINE_3429 = 1;
}
l_Y_3427 = ((*(R12 *)rt_nil_check(l_Y_3427))).f_SNEXT;
}
RT_B_TICK();
} L_end3430: ;
if (((!l_IS_TYPE_3428) && (!l_IS_ROUTINE_3429)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_X))).f_LINE, rt_str("only type and routine names are exported (4.4): ", 48), ((*(R17 *)rt_nil_check(p_X))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(p_X))).f_A == NULL)))
{
if ((!l_IS_TYPE_3428))
{
r_FAILT(((*(R17 *)rt_nil_check(p_X))).f_LINE, rt_str("only a type-name is followed by a WITH clause (4.4): ", 53), ((*(R17 *)rt_nil_check(p_X))).f_NAME);
}
{
R17 * l_OP_3431; memset(&l_OP_3431, 0, sizeof l_OP_3431);
l_OP_3431 = ((*(R17 *)rt_nil_check(p_X))).f_A;
for (;;) {
if ((l_OP_3431 == NULL)) goto L_end3432;
{
{
rt_int l_FOUND_3433; memset(&l_FOUND_3433, 0, sizeof l_FOUND_3433);
l_FOUND_3433 = 0;
l_Y_3427 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3427 == NULL)) goto L_end3434;
{
if (((((*(R12 *)rt_nil_check(l_Y_3427))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_3427))).f_PREFIX, ((*(R17 *)rt_nil_check(p_X))).f_NAME)))
{
if (r_TEQ(r_BASE_NAME(r_ORIGINAL(l_Y_3427)), ((*(R17 *)rt_nil_check(l_OP_3431))).f_NAME))
{
l_FOUND_3433 = 1;
}
}
l_Y_3427 = ((*(R12 *)rt_nil_check(l_Y_3427))).f_SNEXT;
}
RT_B_TICK();
} L_end3434: ;
if ((!l_FOUND_3433))
{
r_FAILT(((*(R17 *)rt_nil_check(l_OP_3431))).f_LINE, rt_str("a WITH clause lists operations of the type (4.4): ", 50), ((*(R17 *)rt_nil_check(l_OP_3431))).f_NAME);
}
}
l_OP_3431 = ((*(R17 *)rt_nil_check(l_OP_3431))).f_NEXT;
}
RT_B_TICK();
} L_end3432: ;
}
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_3435; memset(&l_Y_3435, 0, sizeof l_Y_3435);
l_Y_3435 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3435 == NULL)) goto L_end3436;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_3435))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_3435))).f_PREFIX, p_NAME)))
{
{ rt_int rv3437 = 1;
return rv3437; }
}
l_Y_3435 = ((*(R12 *)rt_nil_check(l_Y_3435))).f_SNEXT;
}
RT_B_TICK();
} L_end3436: ;
{ rt_int rv3438 = 0;
return rv3438; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R17 * p_D, R12 * p_Y) { RT_B_TICK(); 
R17 * l_X_3439; memset(&l_X_3439, 0, sizeof l_X_3439);
l_X_3439 = ((*(R17 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv3440 = 0;
return rv3440; }
}
if ((((*(R17 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv3441 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv3441; }
}
for (;;) {
if ((l_X_3439 == NULL)) goto L_end3442;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_X_3439))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3443 = 1;
return rv3443; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R17 *)rt_nil_check(l_X_3439))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R17 *)rt_nil_check(l_X_3439))).f_A == NULL))
{
{ rt_int rv3444 = 1;
return rv3444; }
}
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_X_3439))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv3445 = 1;
return rv3445; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_3446; memset(&l_T_3446, 0, sizeof l_T_3446);
l_T_3446 = r_ORIG_LOOKUP_MEMBER(((*(R17 *)rt_nil_check(l_X_3439))).f_NAME, p_Y);
if ((!(l_T_3446 == NULL)))
{
{ rt_int rv3447 = 1;
return rv3447; }
}
}
}
l_X_3439 = ((*(R17 *)rt_nil_check(l_X_3439))).f_NEXT;
}
RT_B_TICK();
} L_end3442: ;
{ rt_int rv3448 = 0;
return rv3448; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R9 p_NAME, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3449; memset(&l_M_3449, 0, sizeof l_M_3449);
l_M_3449 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_3450; memset(&l_Z_3450, 0, sizeof l_Z_3450);
if ((l_M_3449 == NULL))
{
{ R12 * rv3451 = NULL;
return rv3451; }
}
l_Z_3450 = ((*(R12 *)rt_nil_check(l_M_3449))).f_MEMBERS;
for (;;) {
if ((l_Z_3450 == NULL)) goto L_end3452;
{
if (((((*(R12 *)rt_nil_check(l_Z_3450))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_3450))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_3450))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_3450))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_3450))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv3453 = l_Z_3450;
return rv3453; }
}
}
}
}
l_Z_3450 = ((*(R12 *)rt_nil_check(l_Z_3450))).f_SNEXT;
}
RT_B_TICK();
} L_end3452: ;
{ R12 * rv3454 = NULL;
return rv3454; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3455; memset(&l_R_3455, 0, sizeof l_R_3455);
l_R_3455 = p_RS;
for (;;) {
if ((l_R_3455 == NULL)) goto L_end3456;
{
if ((((*(R17 *)rt_nil_check(l_R_3455))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3457; memset(&l_M_3457, 0, sizeof l_M_3457);
l_M_3457 = r_FIND_DECL(l_R_3455);
R17 * l_D_3458; memset(&l_D_3458, 0, sizeof l_D_3458);
l_D_3458 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3455))).f_C))).f_A;
r_ENTER_MODULE(l_M_3457);
for (;;) {
if ((l_D_3458 == NULL)) goto L_end3459;
{
if (((((*(R17 *)rt_nil_check(l_D_3458))).f_KIND == g_N_VAR) || (((*(R17 *)rt_nil_check(l_D_3458))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3458);
}
l_D_3458 = ((*(R17 *)rt_nil_check(l_D_3458))).f_NEXT;
}
RT_B_TICK();
} L_end3459: ;
r_MODULE_DATA(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3455))).f_C))).f_C);
r_DISTINCT_SIGNATURES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3455))).f_C))).f_C);
r_ROUTINE_USES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3455))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3457);
}
}
l_R_3455 = ((*(R17 *)rt_nil_check(l_R_3455))).f_NEXT;
}
RT_B_TICK();
} L_end3456: ;
}
static void r_ROUTINE_BODIES(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3460; memset(&l_R_3460, 0, sizeof l_R_3460);
l_R_3460 = p_RS;
for (;;) {
if ((l_R_3460 == NULL)) goto L_end3461;
{
if ((((*(R17 *)rt_nil_check(l_R_3460))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3462; memset(&l_M_3462, 0, sizeof l_M_3462);
l_M_3462 = r_FIND_DECL(l_R_3460);
r_ENTER_MODULE(l_M_3462);
r_ROUTINE_BODIES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3460))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3462);
}
}
else
{
{
R12 * l_Y_3463; memset(&l_Y_3463, 0, sizeof l_Y_3463);
l_Y_3463 = r_FIND_DECL(l_R_3460);
if ((((*(R12 *)rt_nil_check(l_Y_3463))).f_LINKAGE == ((rt_int)2LL)))
{
}
else if (((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3463))).f_DECL))).f_FL == ((rt_int)1LL)) && (!((*(R12 *)rt_nil_check(l_Y_3463))).f_GENERIC)))
{
}
else if ((!((*(R12 *)rt_nil_check(l_Y_3463))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_3463);
}
}
}
l_R_3460 = ((*(R17 *)rt_nil_check(l_R_3460))).f_NEXT;
}
RT_B_TICK();
} L_end3461: ;
}
static void r_PENDING_BODIES(void) { RT_B_TICK(); 
rt_int l_LEVEL_3464; memset(&l_LEVEL_3464, 0, sizeof l_LEVEL_3464);
l_LEVEL_3464 = r_CUR_LEVEL();
rt_int l_MORE_3465; memset(&l_MORE_3465, 0, sizeof l_MORE_3465);
l_MORE_3465 = 1;
for (;;) {
if ((!l_MORE_3465)) goto L_end3466;
{
l_MORE_3465 = 0;
{
R12 * l_P_3467; memset(&l_P_3467, 0, sizeof l_P_3467);
l_P_3467 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_3468; memset(&l_PREV_3468, 0, sizeof l_PREV_3468);
l_PREV_3468 = NULL;
for (;;) {
if ((l_P_3467 == NULL)) goto L_end3469;
{
if ((((*(R12 *)rt_nil_check(l_P_3467))).f_LEVEL == l_LEVEL_3464))
{
if ((l_PREV_3468 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_3467))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_3468))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_3467))).f_MEMBERS;
}
{
R12 * l_SAVED_SEG_3470; memset(&l_SAVED_SEG_3470, 0, sizeof l_SAVED_SEG_3470);
l_SAVED_SEG_3470 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R12 * l_HOME_3471; memset(&l_HOME_3471, 0, sizeof l_HOME_3471);
l_HOME_3471 = r_ENTER_HOME(l_P_3467);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(l_P_3467))).f_HOME;
r_ENTER_MODULE_OF(l_P_3467);
r_ROUTINE_BODY(l_P_3467);
r_LEAVE_MODULE_OF(l_P_3467);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_3470;
r_LEAVE_HOME(l_P_3467, l_HOME_3471);
}
l_MORE_3465 = 1;
goto L_end3469;
}
l_PREV_3468 = l_P_3467;
l_P_3467 = ((*(R12 *)rt_nil_check(l_P_3467))).f_MEMBERS;
}
RT_B_TICK();
} L_end3469: ;
}
}
RT_B_TICK();
} L_end3466: ;
}
static void r_CLOSED_BODY(R17 * p_B) { RT_B_TICK(); 
R17 * l_D_3472; memset(&l_D_3472, 0, sizeof l_D_3472);
l_D_3472 = ((*(R17 *)rt_nil_check(p_B))).f_A;
R17 * l_S_3473; memset(&l_S_3473, 0, sizeof l_S_3473);
l_S_3473 = ((*(R17 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R17 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R17 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R17 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_3472 == NULL)) goto L_end3474;
{
if (((((*(R17 *)rt_nil_check(l_D_3472))).f_KIND == g_N_VAR) || (((*(R17 *)rt_nil_check(l_D_3472))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3472);
}
l_D_3472 = ((*(R17 *)rt_nil_check(l_D_3472))).f_NEXT;
}
RT_B_TICK();
} L_end3474: ;
r_MODULE_DATA(((*(R17 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R17 *)rt_nil_check(p_B))).f_C);
r_DISTINCT_SIGNATURES(((*(R17 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R17 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R17 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_3473 == NULL)) goto L_end3475;
{
r_STMT(l_S_3473);
l_S_3473 = ((*(R17 *)rt_nil_check(l_S_3473))).f_NEXT;
}
RT_B_TICK();
} L_end3475: ;
r_ROUTINE_BODIES(((*(R17 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { RT_B_TICK(); 
R17 * l_R_3476; memset(&l_R_3476, 0, sizeof l_R_3476);
l_R_3476 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_3477; memset(&l_SAVED_CODE_3477, 0, sizeof l_SAVED_CODE_3477);
S_R14(&l_SAVED_CODE_3477, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R18 * l_SAVED_CTXS_3478; memset(&l_SAVED_CTXS_3478, 0, sizeof l_SAVED_CTXS_3478);
l_SAVED_CTXS_3478 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R21 * l_SAVED_BINDS_3479; memset(&l_SAVED_BINDS_3479, 0, sizeof l_SAVED_BINDS_3479);
l_SAVED_BINDS_3479 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R19 * l_OUTER_3480; memset(&l_OUTER_3480, 0, sizeof l_OUTER_3480);
l_OUTER_3480 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R19 * l_CS_3481; memset(&l_CS_3481, 0, sizeof l_CS_3481);
l_CS_3481 = ({ R19 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz; })); p; });
R9 l_PROLOGUE_3482; memset(&l_PROLOGUE_3482, 0, sizeof l_PROLOGUE_3482);
S_R9(&l_PROLOGUE_3482, r_MK(rt_str("", 0)), 0);
S_R19(&(*(R19 *)rt_nil_check(l_CS_3481)), ({ R19 rc3483; memset(&rc3483, 0, sizeof rc3483);  rc3483.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc3483.f_R = p_Y; rc3483.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R9(&rc3483.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc3483.f_FIELDS, ({ R14 rc3484; memset(&rc3484, 0, sizeof rc3484);  rc3484.f_HEAD = NULL; rc3484.f_TAIL = NULL; rc3484; }), 0); rc3483.f_UP = l_OUTER_3480; rc3483.f_IMPORTS = ((*(R17 *)rt_nil_check(l_R_3476))).f_E; rc3483.f_SIGNALS = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3476))).f_D))).f_A; rc3483.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc3483.f_IS_PATH = 0; S_R9(&rc3483.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3483; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R19 *)rt_nil_check(l_CS_3481))).f_FTYPE, ((*(R19 *)rt_nil_check(l_CS_3481))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R19 *)rt_nil_check(l_CS_3481))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R19 *)rt_nil_check(l_CS_3481))).f_FIELDS);
}
S_R9(&l_PROLOGUE_3482, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R19 *)rt_nil_check(l_CS_3481))).f_FTYPE, ((*(R19 *)rt_nil_check(l_CS_3481))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_PROLOGUE_3482, r_CATS(l_PROLOGUE_3482, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_3481;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3485; memset(&rc3485, 0, sizeof rc3485);  rc3485.f_HEAD = NULL; rc3485.f_TAIL = NULL; rc3485; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R17 *)rt_nil_check(l_R_3476))).f_E, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3476))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R17 *)rt_nil_check(l_R_3476))).f_LINE);
{
R30 * l_P_3486; memset(&l_P_3486, 0, sizeof l_P_3486);
l_P_3486 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_3486 == NULL)) goto L_end3487;
{
if ((!(((*(R30 *)rt_nil_check(l_P_3486))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R30 *)rt_nil_check(l_P_3486))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_3488; memset(&l_V_3488, 0, sizeof l_V_3488);
l_V_3488 = r_NEW_SYM(g_Y_VAR, ((*(R30 *)rt_nil_check(l_P_3486))).f_NAME);
R21 * l_MB_3489; memset(&l_MB_3489, 0, sizeof l_MB_3489);
l_MB_3489 = r_FIND_BIND(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, r_QMKN(rt_str("=", 1), ((*(R30 *)rt_nil_check(l_P_3486))).f_NAME));
((*(R12 *)rt_nil_check(l_V_3488))).f_T = ((*(R30 *)rt_nil_check(l_P_3486))).f_T;
((*(R12 *)rt_nil_check(l_V_3488))).f_INPUT = (((*(R30 *)rt_nil_check(l_P_3486))).f_MODE == g_M_IN);
if ((!(l_MB_3489 == NULL)))
{
((*(R12 *)rt_nil_check(l_V_3488))).f_HASMV = ((*(R21 *)rt_nil_check(l_MB_3489))).f_HASMV;
((*(R12 *)rt_nil_check(l_V_3488))).f_MV = ((*(R21 *)rt_nil_check(l_MB_3489))).f_MV;
}
((*(R12 *)rt_nil_check(l_V_3488))).f_BYREF = (!(((*(R30 *)rt_nil_check(l_P_3486))).f_MODE == g_M_IN));
S_R9(&((*(R12 *)rt_nil_check(l_V_3488))).f_FIELD, r_FMT1(rt_str("p_@", 3), r_CID(((*(R30 *)rt_nil_check(l_P_3486))).f_NAME)), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_3488))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R30 *)rt_nil_check(l_P_3486))).f_T), r_CID(((*(R30 *)rt_nil_check(l_P_3486))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3481))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3488))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), r_CID(((*(R30 *)rt_nil_check(l_P_3486))).f_NAME)), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R30 *)rt_nil_check(l_P_3486))).f_T), r_CID(((*(R30 *)rt_nil_check(l_P_3486))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3481))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3488))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), r_CID(((*(R30 *)rt_nil_check(l_P_3486))).f_NAME)), 0);
}
S_R9(&l_PROLOGUE_3482, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_3482, r_CID(((*(R30 *)rt_nil_check(l_P_3486))).f_NAME), r_CID(((*(R30 *)rt_nil_check(l_P_3486))).f_NAME)), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_3488))).f_BYREF)
{
S_R9(&((*(R12 *)rt_nil_check(l_V_3488))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), r_CID(((*(R30 *)rt_nil_check(l_P_3486))).f_NAME)), 0);
}
else
{
S_R9(&((*(R12 *)rt_nil_check(l_V_3488))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R30 *)rt_nil_check(l_P_3486))).f_NAME)), 0);
}
if ((((*(R30 *)rt_nil_check(l_P_3486))).f_MODE == g_M_OUT))
{
{
R9 l_ARGA_3490; memset(&l_ARGA_3490, 0, sizeof l_ARGA_3490);
S_R9(&l_ARGA_3490, ((*(R12 *)rt_nil_check(l_V_3488))).f_ACCESS, 0);
r_DEFINE_PARAM_GENS(((*(R30 *)rt_nil_check(l_P_3486))).f_T, l_ARGA_3490, ((*(R17 *)rt_nil_check(l_R_3476))).f_LINE, 1);
((*(R12 *)rt_nil_check(l_V_3488))).f_BYREF = 0;
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ o_@;", 7), r_CTYPE(((*(R30 *)rt_nil_check(l_P_3486))).f_T), r_CID(((*(R30 *)rt_nil_check(l_P_3486))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3481))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3488))).f_ACCESS, r_FMT1(rt_str("F->o_@", 6), r_CID(((*(R30 *)rt_nil_check(l_P_3486))).f_NAME)), 0);
}
else
{
S_R9(&l_PROLOGUE_3482, r_FMT3(rt_str("@ @ o_@;", 8), l_PROLOGUE_3482, r_CTYPE(((*(R30 *)rt_nil_check(l_P_3486))).f_T), r_CID(((*(R30 *)rt_nil_check(l_P_3486))).f_NAME)), 0);
S_R9(&((*(R12 *)rt_nil_check(l_V_3488))).f_ACCESS, r_FMT1(rt_str("o_@", 3), r_CID(((*(R30 *)rt_nil_check(l_P_3486))).f_NAME)), 0);
}
S_R9(&l_PROLOGUE_3482, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_3482, ((*(R12 *)rt_nil_check(l_V_3488))).f_ACCESS, l_ARGA_3490), 0);
if (r_NEEDS_INIT(((*(R30 *)rt_nil_check(l_P_3486))).f_T))
{
S_R9(&l_PROLOGUE_3482, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_3482, ((*(R12 *)rt_nil_check(l_V_3488))).f_ACCESS, r_COPY_OF(((*(R30 *)rt_nil_check(l_P_3486))).f_T, l_ARGA_3490)), 0);
}
S_R9(&((*(R19 *)rt_nil_check(l_CS_3481))).f_COPYOUT, r_CAT(((*(R19 *)rt_nil_check(l_CS_3481))).f_COPYOUT, r_ASSIGN_CODE(((*(R30 *)rt_nil_check(l_P_3486))).f_T, l_ARGA_3490, ((*(R12 *)rt_nil_check(l_V_3488))).f_ACCESS)), 0);
r_DEFINE(l_V_3488, ((*(R17 *)rt_nil_check(l_R_3476))).f_LINE);
}
}
else
{
r_DEFINE(l_V_3488, ((*(R17 *)rt_nil_check(l_R_3476))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R30 *)rt_nil_check(l_P_3486))).f_T, ((*(R12 *)rt_nil_check(l_V_3488))).f_ACCESS, ((*(R17 *)rt_nil_check(l_R_3476))).f_LINE, 1);
}
}
}
}
l_P_3486 = ((*(R30 *)rt_nil_check(l_P_3486))).f_NEXT;
}
RT_B_TICK();
} L_end3487: ;
}
if ((((*(R17 *)rt_nil_check(l_R_3476))).f_FL >= ((rt_int)2LL)))
{
{
R17 * l_N_3491; memset(&l_N_3491, 0, sizeof l_N_3491);
l_N_3491 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3476))).f_D))).f_C;
R14 l_SAVED_CODE_3492; memset(&l_SAVED_CODE_3492, 0, sizeof l_SAVED_CODE_3492);
S_R14(&l_SAVED_CODE_3492, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R28 l_V_3493; memset(&l_V_3493, 0, sizeof l_V_3493);
S_R28(&l_V_3493, r_EXPR(l_N_3491, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
R25 l_M_3494; memset(&l_M_3494, 0, sizeof l_M_3494);
S_R25(&l_M_3494, r_MANIFEST(l_N_3491), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3492, 0);
if ((((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3493).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3493).f_T)))).f_SCALE == ((rt_int)0LL)))) || (!(l_M_3494).f_OK)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_N_3491))).f_LINE, rt_str("the stack-size is a manifest integer expression (4.8.2 [4-111])", 63));
}
if (((l_M_3494).f_V < ((rt_int)0LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_N_3491))).f_LINE, rt_str("the stack-size must be greater than or equal to zero (4.8.2)", 60));
}
}
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R17 *)rt_nil_check(l_R_3476))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R17 *)rt_nil_check(l_R_3476))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R19 *)rt_nil_check(l_CS_3481))).f_FTYPE, r_JOIN_BUF(((*(R19 *)rt_nil_check(l_CS_3481))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { RT_B_TICK(); @", 18), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_3482));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
else if (((((*(R19 *)rt_nil_check(l_CS_3481))).f_COPYOUT).f_LEN > ((rt_int)0LL)))
{
r_EMIT(g_O_FUNCS, ((*(R19 *)rt_nil_check(l_CS_3481))).f_COPYOUT);
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_3480;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3477, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_3478;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_3479;
}
static void r_BIND_INSTANCE(R21 * p_BS, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_B_3495; memset(&l_B_3495, 0, sizeof l_B_3495);
l_B_3495 = p_BS;
for (;;) {
if ((l_B_3495 == NULL)) goto L_end3496;
{
if ((!(((*(R21 *)rt_nil_check(l_B_3495))).f_T == NULL)))
{
{
R12 * l_Y_3497; memset(&l_Y_3497, 0, sizeof l_Y_3497);
l_Y_3497 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_B_3495))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3497))).f_T = ((*(R21 *)rt_nil_check(l_B_3495))).f_T;
r_DEFINE(l_Y_3497, p_LINE);
}
}
else if (((*(R21 *)rt_nil_check(l_B_3495))).f_HASMV)
{
{
R12 * l_Y_3498; memset(&l_Y_3498, 0, sizeof l_Y_3498);
l_Y_3498 = r_NEW_SYM(g_Y_GEN, ((*(R21 *)rt_nil_check(l_B_3495))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3498))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_3498))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_3498))).f_MV = ((*(R21 *)rt_nil_check(l_B_3495))).f_MV;
S_R9(&((*(R12 *)rt_nil_check(l_Y_3498))).f_ACCESS, ((*(R21 *)rt_nil_check(l_B_3495))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_3498))).f_INPUT = 1;
r_DEFINE(l_Y_3498, p_LINE);
}
}
l_B_3495 = ((*(R21 *)rt_nil_check(l_B_3495))).f_NEXT;
}
RT_B_TICK();
} L_end3496: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { RT_B_TICK(); 
R15 * l_C_3499; memset(&l_C_3499, 0, sizeof l_C_3499);
l_C_3499 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_3499 == NULL)) goto L_end3500;
{
r_APPEND(C_R9(((*(R15 *)rt_nil_check(l_C_3499))).f_T), &(*p_DST));
l_C_3499 = ((*(R15 *)rt_nil_check(l_C_3499))).f_NEXT;
}
RT_B_TICK();
} L_end3500: ;
}
static rt_int r_USES_SEGMENT(R17 * p_S, rstr p_NAME) { RT_B_TICK(); 
R17 * l_U_3501; memset(&l_U_3501, 0, sizeof l_U_3501);
l_U_3501 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3501 == NULL)) goto L_end3502;
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_U_3501))).f_NAME, p_NAME))
{
{ rt_int rv3503 = 1;
return rv3503; }
}
l_U_3501 = ((*(R17 *)rt_nil_check(l_U_3501))).f_NEXT;
}
RT_B_TICK();
} L_end3502: ;
{ rt_int rv3504 = 0;
return rv3504; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R17 * p_S, R17 * p_SEGS) { RT_B_TICK(); 
R17 * l_U_3505; memset(&l_U_3505, 0, sizeof l_U_3505);
l_U_3505 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3505 == NULL)) goto L_end3506;
{
{
R17 * l_T_3507; memset(&l_T_3507, 0, sizeof l_T_3507);
l_T_3507 = p_SEGS;
for (;;) {
if ((l_T_3507 == NULL)) goto L_end3508;
{
if ((((!(l_T_3507 == p_S)) && (((*(R17 *)rt_nil_check(l_T_3507))).f_D == NULL)) && r_TEQ(((*(R17 *)rt_nil_check(l_T_3507))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3505))).f_NAME)))
{
{ rt_int rv3509 = 0;
return rv3509; }
}
l_T_3507 = ((*(R17 *)rt_nil_check(l_T_3507))).f_NEXT;
}
RT_B_TICK();
} L_end3508: ;
}
l_U_3505 = ((*(R17 *)rt_nil_check(l_U_3505))).f_NEXT;
}
RT_B_TICK();
} L_end3506: ;
{ rt_int rv3510 = 1;
return rv3510; }
rt_raise(RT_X_INIT);
}
static R9 r_MISSING_SEGMENT(R17 * p_SEGS) { RT_B_TICK(); 
R17 * l_S_3511; memset(&l_S_3511, 0, sizeof l_S_3511);
l_S_3511 = p_SEGS;
for (;;) {
if ((l_S_3511 == NULL)) goto L_end3512;
{
{
R17 * l_U_3513; memset(&l_U_3513, 0, sizeof l_U_3513);
l_U_3513 = ((*(R17 *)rt_nil_check(l_S_3511))).f_A;
for (;;) {
if ((l_U_3513 == NULL)) goto L_end3514;
{
if ((!r_TEQS(((*(R17 *)rt_nil_check(l_U_3513))).f_NAME, rt_str("TERMINAL", 8))))
{
{
R17 * l_T_3515; memset(&l_T_3515, 0, sizeof l_T_3515);
l_T_3515 = p_SEGS;
rt_int l_FOUND_3516; memset(&l_FOUND_3516, 0, sizeof l_FOUND_3516);
l_FOUND_3516 = 0;
for (;;) {
if ((l_T_3515 == NULL)) goto L_end3517;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_T_3515))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3513))).f_NAME))
{
l_FOUND_3516 = 1;
}
l_T_3515 = ((*(R17 *)rt_nil_check(l_T_3515))).f_NEXT;
}
RT_B_TICK();
} L_end3517: ;
if ((!l_FOUND_3516))
{
{ R9 rv3518 = ((*(R17 *)rt_nil_check(l_U_3513))).f_NAME;
return rv3518; }
}
}
}
l_U_3513 = ((*(R17 *)rt_nil_check(l_U_3513))).f_NEXT;
}
RT_B_TICK();
} L_end3514: ;
}
l_S_3511 = ((*(R17 *)rt_nil_check(l_S_3511))).f_NEXT;
}
RT_B_TICK();
} L_end3512: ;
{ R9 rv3519 = r_NO_TEXT();
return rv3519; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R17 * p_SEGS) { RT_B_TICK(); 
R17 * l_S_3520; memset(&l_S_3520, 0, sizeof l_S_3520);
l_S_3520 = p_SEGS;
rt_int l_MAINS_3521; memset(&l_MAINS_3521, 0, sizeof l_MAINS_3521);
l_MAINS_3521 = ((rt_int)0LL);
R19 * l_ROOT_3522; memset(&l_ROOT_3522, 0, sizeof l_ROOT_3522);
l_ROOT_3522 = ({ R19 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz; })); p; });
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R19(&(*(R19 *)rt_nil_check(l_ROOT_3522)), ({ R19 rc3523; memset(&rc3523, 0, sizeof rc3523);  rc3523.f_LEVEL = ((rt_int)0LL); rc3523.f_R = NULL; rc3523.f_FRAMED = 0; S_R9(&rc3523.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc3523.f_FIELDS, ({ R14 rc3524; memset(&rc3524, 0, sizeof rc3524);  rc3524.f_HEAD = NULL; rc3524.f_TAIL = NULL; rc3524; }), 0); rc3523.f_UP = NULL; rc3523.f_IMPORTS = NULL; rc3523.f_SIGNALS = NULL; rc3523.f_RESULT = NULL; rc3523.f_IS_PATH = 0; S_R9(&rc3523.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3523; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_3522;
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
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3525; memset(&rc3525, 0, sizeof rc3525);  rc3525.f_HEAD = NULL; rc3525.f_TAIL = NULL; rc3525; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_3520 = p_SEGS;
for (;;) {
if ((l_S_3520 == NULL)) goto L_end3527;
{
if ((((*(R17 *)rt_nil_check(l_S_3520))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_3520, p_SEGS))
{
goto L_end3527;
}
}
l_S_3520 = ((*(R17 *)rt_nil_check(l_S_3520))).f_NEXT;
}
RT_B_TICK();
} L_end3527: ;
if ((l_S_3520 == NULL))
{
goto L_end3526;
}
((*(R17 *)rt_nil_check(l_S_3520))).f_D = l_S_3520;
l_MAINS_3521 = rt_add(l_MAINS_3521, ((*(R17 *)rt_nil_check(l_S_3520))).f_IV);
if (((((*(R17 *)rt_nil_check(l_S_3520))).f_IV == ((rt_int)0LL)) && (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3520))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_S_3520))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
r_BEGIN_SEGMENT(l_S_3520);
if (r_USES_SEGMENT(l_S_3520, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
((*(R7 *)rt_nil_check(g_W))).f_EXTSEG = r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_EXTS, ((*(R17 *)rt_nil_check(l_S_3520))).f_NAME);
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_SEPSEG, r_NO_TEXT(), 0);
((*(R7 *)rt_nil_check(g_W))).f_SEPV = ((rt_int)0LL);
((*(R7 *)rt_nil_check(g_W))).f_SEPR = ((rt_int)0LL);
if ((((*(R7 *)rt_nil_check(g_W))).f_EXTSEG || ((((*(R7 *)rt_nil_check(g_W))).f_SEPC && r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS, ((*(R17 *)rt_nil_check(l_S_3520))).f_NAME)))))
{
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_SEPSEG, ((*(R17 *)rt_nil_check(l_S_3520))).f_NAME, 0);
if ((((*(R17 *)rt_nil_check(l_S_3520))).f_IV == ((rt_int)1LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_S_3520))).f_LINE, rt_str("a MAIN segment is not translated separately (4.2)", 49));
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_EXTSEG)
{
{
R14 l_SAVED_CODE_3528; memset(&l_SAVED_CODE_3528, 0, sizeof l_SAVED_CODE_3528);
S_R14(&l_SAVED_CODE_3528, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
r_CLOSED_BODY(((*(R17 *)rt_nil_check(l_S_3520))).f_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3528, 0);
r_CODE(r_FMT1(rt_str("bs_@_init();", 12), r_CID(((*(R17 *)rt_nil_check(l_S_3520))).f_NAME)));
r_EMIT(g_O_PROTOS, r_FMT1(rt_str("void bs_@_init(void);", 21), r_CID(((*(R17 *)rt_nil_check(l_S_3520))).f_NAME)));
{
R17 * l_X_3529; memset(&l_X_3529, 0, sizeof l_X_3529);
l_X_3529 = ((*(R7 *)rt_nil_check(g_W))).f_EXTS;
for (;;) {
if (r_TEQ(((*(R17 *)rt_nil_check(l_X_3529))).f_NAME, ((*(R17 *)rt_nil_check(l_S_3520))).f_NAME)) goto L_end3530;
{
l_X_3529 = ((*(R17 *)rt_nil_check(l_X_3529))).f_NEXT;
}
RT_B_TICK();
} L_end3530: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("extern int bs_@_iface_@;", 24), r_CID(((*(R17 *)rt_nil_check(l_S_3520))).f_NAME), r_NUM(((*(R17 *)rt_nil_check(l_X_3529))).f_IV)));
r_EMIT(g_O_GLOBALS, r_CAT(r_FMT2(rt_str("int *bs_needs_@_@ = ", 20), r_UNIT_NAME(), r_CID(((*(R17 *)rt_nil_check(l_S_3520))).f_NAME)), r_FMT2(rt_str("&bs_@_iface_@;", 14), r_CID(((*(R17 *)rt_nil_check(l_S_3520))).f_NAME), r_NUM(((*(R17 *)rt_nil_check(l_X_3529))).f_IV))));
}
}
}
else
{
r_CLOSED_BODY(((*(R17 *)rt_nil_check(l_S_3520))).f_B);
}
r_SEGMENT_EXPORTS(l_S_3520);
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_SEPSEG, r_NO_TEXT(), 0);
((*(R7 *)rt_nil_check(g_W))).f_EXTSEG = 0;
}
RT_B_TICK();
} L_end3526: ;
l_S_3520 = p_SEGS;
for (;;) {
if ((l_S_3520 == NULL)) goto L_end3531;
{
if ((((*(R17 *)rt_nil_check(l_S_3520))).f_D == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_S_3520))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R17 *)rt_nil_check(l_S_3520))).f_NAME);
}
l_S_3520 = ((*(R17 *)rt_nil_check(l_S_3520))).f_NEXT;
}
RT_B_TICK();
} L_end3531: ;
if (((!(l_MAINS_3521 == ((rt_int)1LL))) && (!((*(R7 *)rt_nil_check(g_W))).f_SEPC)))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R17 * l_X_3532; memset(&l_X_3532, 0, sizeof l_X_3532);
l_X_3532 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_3532 == NULL)) goto L_end3533;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), r_CID(((*(R17 *)rt_nil_check(l_X_3532))).f_NAME)));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), r_CID(((*(R17 *)rt_nil_check(l_X_3532))).f_NAME), r_CSTRING(((*(R17 *)rt_nil_check(l_X_3532))).f_NAME)));
l_X_3532 = ((*(R17 *)rt_nil_check(l_X_3532))).f_NEXT;
}
RT_B_TICK();
} L_end3533: ;
}
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if (((*(R7 *)rt_nil_check(g_W))).f_SEPC)
{
{
R9 l_T_3534; memset(&l_T_3534, 0, sizeof l_T_3534);
S_R9(&l_T_3534, r_INPUT_TEXT(), 0);
R9 l_NAME_3535; memset(&l_NAME_3535, 0, sizeof l_NAME_3535);
S_R9(&l_NAME_3535, ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS))).f_NAME, 0);
rt_int l_FP_3536; memset(&l_FP_3536, 0, sizeof l_FP_3536);
l_FP_3536 = r_TEXT_PRINT(r_STR(l_T_3534, (l_T_3534).f_LEN));
r_EMITS(g_O_MAIN, rt_str("}", 1));
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("int bs_@_iface_@ = 1;", 21), r_CID(l_NAME_3535), r_NUM(l_FP_3536)));
r_WRITE_FILE_T(r_LIB_FILE(((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, l_NAME_3535, rt_str(".bif", 4)), l_T_3534);
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
{ R9 rv3537 = r_CID(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS))).f_NAME);
return rv3537; }
}
{ R9 rv3538 = r_MK(rt_str("MAIN", 4));
return rv3538; }
rt_raise(RT_X_INIT);
}
static rt_int r_FROM_DEFINED_MODULE(R17 * p_S, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3539; memset(&l_M_3539, 0, sizeof l_M_3539);
l_M_3539 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv3540 = 0;
return rv3540; }
}
for (;;) {
if ((l_M_3539 == NULL)) goto L_end3541;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_3539))).f_NAME))
{
{ rt_int rv3542 = 1;
return rv3542; }
}
l_M_3539 = ((*(R12 *)rt_nil_check(l_M_3539))).f_MODL;
}
RT_B_TICK();
} L_end3541: ;
{ rt_int rv3543 = 0;
return rv3543; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R17 * p_S) { RT_B_TICK(); 
R12 * l_MARK_3544; memset(&l_MARK_3544, 0, sizeof l_MARK_3544);
l_MARK_3544 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_3545; memset(&l_TAKEN_3545, 0, sizeof l_TAKEN_3545);
R12 * l_SEG_3546; memset(&l_SEG_3546, 0, sizeof l_SEG_3546);
l_SEG_3546 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R17 * l_NAMES_3547; memset(&l_NAMES_3547, 0, sizeof l_NAMES_3547);
l_NAMES_3547 = NULL;
for (;;) {
if ((l_MARK_3544 == NULL)) goto L_end3548;
{
if ((((*(R12 *)rt_nil_check(l_MARK_3544))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end3548;
}
l_MARK_3544 = ((*(R12 *)rt_nil_check(l_MARK_3544))).f_SNEXT;
}
RT_B_TICK();
} L_end3548: ;
l_TAKEN_3545 = r_TAKE_SCOPE(l_MARK_3544);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
{
R17 * l_X_3549; memset(&l_X_3549, 0, sizeof l_X_3549);
l_X_3549 = ((*(R17 *)rt_nil_check(p_S))).f_C;
for (;;) {
if ((l_X_3549 == NULL)) goto L_end3550;
{
{
R12 * l_Y_3551; memset(&l_Y_3551, 0, sizeof l_Y_3551);
l_Y_3551 = l_TAKEN_3545;
rt_int l_FOUND_3552; memset(&l_FOUND_3552, 0, sizeof l_FOUND_3552);
l_FOUND_3552 = (!(r_LOOKUP(((*(R17 *)rt_nil_check(l_X_3549))).f_NAME) == NULL));
for (;;) {
if ((l_Y_3551 == NULL)) goto L_end3553;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_3551))).f_NAME, ((*(R17 *)rt_nil_check(l_X_3549))).f_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_3551))).f_PREFIX, ((*(R17 *)rt_nil_check(l_X_3549))).f_NAME)))
{
l_FOUND_3552 = 1;
}
else if ((((*(R12 *)rt_nil_check(l_Y_3551))).f_KIND == g_Y_ROUTINE))
{
if (r_TEQ(r_BASE_NAME(l_Y_3551), ((*(R17 *)rt_nil_check(l_X_3549))).f_NAME))
{
l_FOUND_3552 = 1;
}
}
l_Y_3551 = ((*(R12 *)rt_nil_check(l_Y_3551))).f_SNEXT;
}
RT_B_TICK();
} L_end3553: ;
if ((!l_FOUND_3552))
{
r_FAILT(((*(R17 *)rt_nil_check(l_X_3549))).f_LINE, rt_str("DEFINES names a name local to the segment or imported into it (4.2): ", 69), ((*(R17 *)rt_nil_check(l_X_3549))).f_NAME);
}
l_NAMES_3547 = r_NAME_REF(((*(R17 *)rt_nil_check(l_X_3549))).f_NAME, ((rt_int)0LL), NULL, l_NAMES_3547);
}
l_X_3549 = ((*(R17 *)rt_nil_check(l_X_3549))).f_NEXT;
}
RT_B_TICK();
} L_end3550: ;
}
for (;;) {
if ((l_TAKEN_3545 == NULL)) goto L_end3554;
{
{
R12 * l_NEXT_3555; memset(&l_NEXT_3555, 0, sizeof l_NEXT_3555);
l_NEXT_3555 = ((*(R12 *)rt_nil_check(l_TAKEN_3545))).f_SNEXT;
if (((!(((*(R12 *)rt_nil_check(l_TAKEN_3545))).f_KIND == g_Y_BUILTIN)) && (((((((((*(R17 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_3545))).f_NAME)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_3545))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_3545))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_3545)) || (((((*(R12 *)rt_nil_check(l_TAKEN_3545))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_3545))))))))
{
((*(R12 *)rt_nil_check(l_TAKEN_3545))).f_SEGM = l_SEG_3546;
l_NAMES_3547 = r_NAME_REF(((*(R12 *)rt_nil_check(l_TAKEN_3545))).f_NAME, ((rt_int)0LL), NULL, l_NAMES_3547);
r_DEFINE(l_TAKEN_3545, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
else if ((!(((*(R12 *)rt_nil_check(l_TAKEN_3545))).f_KIND == g_Y_BUILTIN)))
{
((*(R12 *)rt_nil_check(l_TAKEN_3545))).f_SNEXT = ((*(R12 *)rt_nil_check(l_SEG_3546))).f_MEMBERS;
((*(R12 *)rt_nil_check(l_SEG_3546))).f_MEMBERS = l_TAKEN_3545;
}
l_TAKEN_3545 = l_NEXT_3555;
}
}
RT_B_TICK();
} L_end3554: ;
((*(R12 *)rt_nil_check(l_SEG_3546))).f_USES = l_NAMES_3547;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = NULL;
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = NULL;
}
static void r_BEGIN_SEGMENT(R17 * p_S) { RT_B_TICK(); 
R12 * l_SEG_3556; memset(&l_SEG_3556, 0, sizeof l_SEG_3556);
l_SEG_3556 = r_NEW_SYM(g_Y_SEGMENT, ((*(R17 *)rt_nil_check(p_S))).f_NAME);
R17 * l_U_3557; memset(&l_U_3557, 0, sizeof l_U_3557);
l_U_3557 = ((*(R17 *)rt_nil_check(p_S))).f_A;
((*(R12 *)rt_nil_check(l_SEG_3556))).f_DECL = p_S;
((*(R12 *)rt_nil_check(l_SEG_3556))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_SEGS;
((*(R7 *)rt_nil_check(g_W))).f_SEGS = l_SEG_3556;
for (;;) {
if ((l_U_3557 == NULL)) goto L_end3558;
{
if ((!r_TEQS(((*(R17 *)rt_nil_check(l_U_3557))).f_NAME, rt_str("TERMINAL", 8))))
{
{
R12 * l_T_3559; memset(&l_T_3559, 0, sizeof l_T_3559);
l_T_3559 = r_FIND_SEGMENT(((*(R17 *)rt_nil_check(l_U_3557))).f_NAME);
if ((l_T_3559 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_U_3557))).f_LINE, rt_str("USES names a segment of the program (4.2): ", 43), ((*(R17 *)rt_nil_check(l_U_3557))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(l_U_3557))).f_A == NULL)))
{
r_CHECK_ITEMS_DEFINED(l_T_3559, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3557))).f_A))).f_A);
r_CHECK_ITEMS_DEFINED(l_T_3559, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3557))).f_A))).f_B);
r_CHECK_ITEMS_DEFINED(l_T_3559, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3557))).f_A))).f_C);
r_CHECK_ITEMS_DEFINED(l_T_3559, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3557))).f_A))).f_D);
r_CHECK_ITEMS_DEFINED(l_T_3559, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3557))).f_A))).f_E);
}
}
}
l_U_3557 = ((*(R17 *)rt_nil_check(l_U_3557))).f_NEXT;
}
RT_B_TICK();
} L_end3558: ;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SEG_3556;
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = l_SEG_3556;
l_U_3557 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3557 == NULL)) goto L_end3560;
{
if ((!(((*(R17 *)rt_nil_check(l_U_3557))).f_A == NULL)))
{
r_INPUT_IMPORT_CONFLICT(((*(R17 *)rt_nil_check(l_U_3557))).f_A, ((*(R17 *)rt_nil_check(l_U_3557))).f_LINE);
}
l_U_3557 = ((*(R17 *)rt_nil_check(l_U_3557))).f_NEXT;
}
RT_B_TICK();
} L_end3560: ;
}
static R12 * r_ENTER_HOME(R12 * p_Y) { RT_B_TICK(); 
R12 * l_SAVED_3561; memset(&l_SAVED_3561, 0, sizeof l_SAVED_3561);
l_SAVED_3561 = ((*(R7 *)rt_nil_check(g_W))).f_TRSEG;
if (((((*(R12 *)rt_nil_check(p_Y))).f_HOME == NULL) || (((*(R12 *)rt_nil_check(p_Y))).f_HOME == ((*(R7 *)rt_nil_check(g_W))).f_TRSEG)))
{
{ R12 * rv3562 = l_SAVED_3561;
return rv3562; }
}
r_OPEN_SCOPE();
{
R12 * l_X_3563; memset(&l_X_3563, 0, sizeof l_X_3563);
l_X_3563 = ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_HOME))).f_MEMBERS;
for (;;) {
if ((l_X_3563 == NULL)) goto L_end3564;
{
{
R12 * l_A_3565; memset(&l_A_3565, 0, sizeof l_A_3565);
l_A_3565 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_X_3563))).f_KIND, ((*(R12 *)rt_nil_check(l_X_3563))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_3565)), (*(R12 *)rt_nil_check(l_X_3563)), 0);
((*(R12 *)rt_nil_check(l_A_3565))).f_ORIG = r_ORIGINAL(l_X_3563);
r_DEFINE_ALIAS(l_A_3565);
}
l_X_3563 = ((*(R12 *)rt_nil_check(l_X_3563))).f_SNEXT;
}
RT_B_TICK();
} L_end3564: ;
}
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = ((*(R12 *)rt_nil_check(p_Y))).f_HOME;
{ R12 * rv3566 = l_SAVED_3561;
return rv3566; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_ALIAS(R12 * p_A) { RT_B_TICK(); 
rt_int l_B_3567; memset(&l_B_3567, 0, sizeof l_B_3567);
l_B_3567 = r_BUCKET(((*(R12 *)rt_nil_check(p_A))).f_NAME);
((*(R12 *)rt_nil_check(p_A))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_A))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_3567, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_3567, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_A;
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
R12 * l_T_3568; memset(&l_T_3568, 0, sizeof l_T_3568);
l_T_3568 = ((*(R7 *)rt_nil_check(g_W))).f_SEGS;
for (;;) {
if ((l_T_3568 == NULL)) goto L_end3569;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_T_3568))).f_NAME, p_NAME))
{
{ R12 * rv3570 = l_T_3568;
return rv3570; }
}
l_T_3568 = ((*(R12 *)rt_nil_check(l_T_3568))).f_INSTANCES;
}
RT_B_TICK();
} L_end3569: ;
{ R12 * rv3571 = NULL;
return rv3571; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_ITEMS_DEFINED(R12 * p_T, R17 * p_L) { RT_B_TICK(); 
R17 * l_N_3572; memset(&l_N_3572, 0, sizeof l_N_3572);
l_N_3572 = p_L;
for (;;) {
if ((l_N_3572 == NULL)) goto L_end3573;
{
if ((!r_IN_IDENTS(((*(R12 *)rt_nil_check(p_T))).f_USES, ((*(R17 *)rt_nil_check(l_N_3572))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_N_3572))).f_LINE, rt_str("the segment does not define ", 28), ((*(R17 *)rt_nil_check(l_N_3572))).f_NAME);
}
l_N_3572 = ((*(R17 *)rt_nil_check(l_N_3572))).f_NEXT;
}
RT_B_TICK();
} L_end3573: ;
}
static rt_int r_SEG_VISIBLE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_U_3574; memset(&l_U_3574, 0, sizeof l_U_3574);
rt_int l_INPUT_ONLY_3575; memset(&l_INPUT_ONLY_3575, 0, sizeof l_INPUT_ONLY_3575);
l_INPUT_ONLY_3575 = 0;
if (((((((*(R7 *)rt_nil_check(g_W))).f_CURSEG == NULL) || (((*(R12 *)rt_nil_check(p_Y))).f_SEGM == NULL)) || (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL))) || (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
{ rt_int rv3576 = 1;
return rv3576; }
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_SEGM == ((*(R7 *)rt_nil_check(g_W))).f_CURSEG))
{
{ rt_int rv3577 = 1;
return rv3577; }
}
l_U_3574 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CURSEG))).f_DECL))).f_A;
for (;;) {
if ((l_U_3574 == NULL)) goto L_end3578;
{
{
R12 * l_T_3579; memset(&l_T_3579, 0, sizeof l_T_3579);
l_T_3579 = r_FIND_SEGMENT(((*(R17 *)rt_nil_check(l_U_3574))).f_NAME);
if ((!(l_T_3579 == NULL)))
{
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_T_3579))).f_USES, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
if ((((*(R17 *)rt_nil_check(l_U_3574))).f_A == NULL))
{
{ rt_int rv3580 = 1;
return rv3580; }
}
{
R17 * l_I_3581; memset(&l_I_3581, 0, sizeof l_I_3581);
l_I_3581 = ((*(R17 *)rt_nil_check(l_U_3574))).f_A;
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)))
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3581))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3582 = 1;
return rv3582; }
}
else if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3581))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
l_INPUT_ONLY_3575 = 1;
}
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE))
{
if ((((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3581))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME) || r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3581))).f_C, r_BASE_NAME(p_Y))) || r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3581))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)) || r_FROM_MODULES(((*(R17 *)rt_nil_check(l_I_3581))).f_E, p_Y)))
{
{ rt_int rv3583 = 1;
return rv3583; }
}
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE))
{
if ((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3581))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_NAME) || r_FROM_MODULES(((*(R17 *)rt_nil_check(l_I_3581))).f_E, p_Y)))
{
{ rt_int rv3584 = 1;
return rv3584; }
}
}
else
{
{ rt_int rv3585 = 1;
return rv3585; }
}
}
}
}
}
l_U_3574 = ((*(R17 *)rt_nil_check(l_U_3574))).f_NEXT;
}
RT_B_TICK();
} L_end3578: ;
if (l_INPUT_ONLY_3575)
{
{ rt_int rv3586 = 0;
return rv3586; }
}
r_FAILT(p_LINE, rt_str("not imported by the USES clause of the segment (4.2): ", 54), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static rt_int r_FROM_MODULES(R17 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3587; memset(&l_M_3587, 0, sizeof l_M_3587);
l_M_3587 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((p_MODS == NULL))
{
{ rt_int rv3588 = 0;
return rv3588; }
}
for (;;) {
if ((l_M_3587 == NULL)) goto L_end3589;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_3587))).f_NAME))
{
{ rt_int rv3590 = 1;
return rv3590; }
}
l_M_3587 = ((*(R12 *)rt_nil_check(l_M_3587))).f_MODL;
}
RT_B_TICK();
} L_end3589: ;
{ rt_int rv3591 = 0;
return rv3591; }
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
g_W = ({ R7 *p = rt_b_new_bits(sizeof *p, 0);  (*p).f_ARENA = rt_b_str_new(((rt_int)64000000LL), 0); { (*p).f_SRC.lo[0] = ((rt_int)0LL); (*p).f_SRC.hi[0] = g_MAX_SOURCE; rt_int n = rt_b_extent(1, (*p).f_SRC.lo, (*p).f_SRC.hi); (*p).f_SRC.p = rt_b_array_alloc_bits(n, sizeof *(*p).f_SRC.p, rt_b_pack_size(n, 64, 2)); } { (*p).f_TOKS.lo[0] = ((rt_int)0LL); (*p).f_TOKS.hi[0] = g_MAX_TOKENS; rt_int n = rt_b_extent(1, (*p).f_TOKS.lo, (*p).f_TOKS.hi); (*p).f_TOKS.p = rt_b_array_alloc(n, sizeof *(*p).f_TOKS.p); rt_b_array_check(rt_b_pack_size(n, n ? ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz; }) : 0, 2)); } { (*p).f_TABLE.lo[0] = ((rt_int)0LL); (*p).f_TABLE.hi[0] = g_HASH_SIZE; rt_int n = rt_b_extent(1, (*p).f_TABLE.lo, (*p).f_TABLE.hi); (*p).f_TABLE.p = rt_b_array_alloc_bits(n, sizeof *(*p).f_TABLE.p, rt_b_pack_size(n, 64, 2)); } { (*p).f_OUT.lo[0] = ((rt_int)0LL); (*p).f_OUT.hi[0] = g_O_LAST; rt_int n = rt_b_extent(1, (*p).f_OUT.lo, (*p).f_OUT.hi); (*p).f_OUT.p = rt_b_array_alloc(n, sizeof *(*p).f_OUT.p); rt_b_array_check(rt_b_pack_size(n, n ? ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }) : 0, 2)); } rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)512000000LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, rt_b_pack_size(rt_b_extent(1, (((*p)).f_SRC).lo, (((*p)).f_SRC).hi), 64, 2), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ A11 sa23 = ((*p)).f_TOKS; rt_int n_ = rt_b_extent(1, sa23.lo, sa23.hi); rt_b_pack_size(n_, n_ ? ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz; }) : 0, 2); }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, rt_b_pack_size(rt_b_extent(1, (((*p)).f_TABLE).lo, (((*p)).f_TABLE).hi), 64, 2), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ A16 sa24 = ((*p)).f_OUT; rt_int n_ = rt_b_extent(1, sa24.lo, sa24.hi); rt_b_pack_size(n_, n_ ? ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }) : 0, 2); }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
r_READ_SOURCE();
r_OPTIONS();
r_LEX();
{
g_SEGS_31 = r_PARSE_COMPILATION();
{
g_S_32 = g_SEGS_31;
for (;;) {
if ((g_S_32 == NULL)) goto L_end33;
{
{
g_N_34 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(g_N_34))).f_NAME, ((*(R17 *)rt_nil_check(g_S_32))).f_NAME, 0);
((*(R17 *)rt_nil_check(g_N_34))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS;
((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS = g_N_34;
}
g_S_32 = ((*(R17 *)rt_nil_check(g_S_32))).f_NEXT;
}
RT_B_TICK();
} L_end33: ;
}
for (;;) {
{
{
S_R9(&g_NAME_36, r_MISSING_SEGMENT(g_SEGS_31), 0);
if (((g_NAME_36).f_LEN == ((rt_int)0LL)))
{
goto L_end35;
}
r_LOAD_LIBRARY(g_NAME_36);
r_LEX();
{
g_MORE_37 = r_PARSE_COMPILATION();
g_LAST_38 = g_SEGS_31;
for (;;) {
if ((((*(R17 *)rt_nil_check(g_LAST_38))).f_NEXT == NULL)) goto L_end39;
{
g_LAST_38 = ((*(R17 *)rt_nil_check(g_LAST_38))).f_NEXT;
}
RT_B_TICK();
} L_end39: ;
((*(R17 *)rt_nil_check(g_LAST_38))).f_NEXT = g_MORE_37;
}
}
}
RT_B_TICK();
} L_end35: ;
r_PREDEFINE();
r_TRANSLATE(g_SEGS_31);
}
r_WRITE_OUTPUT();
rt_main_done();
return 0;
}
