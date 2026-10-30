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
struct R26 { int dummy_; R9 f_C; R22 * f_T; rt_int f_LVAL; R9 f_SELF; };
struct R17 { int dummy_; rt_int f_KIND; rt_int f_LINE; rt_int f_IV; R9 f_NAME; R17 * f_A; R17 * f_B; R17 * f_C; R17 * f_D; R17 * f_E; R17 * f_NEXT; rt_int f_FL; };
struct R15 { int dummy_; R9 f_T; R15 * f_NEXT; };
struct R12 { int dummy_; rt_int f_KIND; rt_int f_DEPTH; rt_int f_LEVEL; R9 f_NAME; R22 * f_T; R9 f_ACCESS; R9 f_FIELD; rt_int f_INPUT; rt_int f_BYREF; rt_int f_HASMV; rt_int f_MV; R17 * f_TS; rt_int f_BUSY; R9 f_FWD; R30 * f_PARAMS; R22 * f_RESULT; R17 * f_DECL; R9 f_PREFIX; R12 * f_MODL; rt_int f_EXPORTED; rt_int f_GENERIC; rt_int f_FRAMED; R17 * f_USES; R12 * f_INSTANCES; R21 * f_BINDINGS; R12 * f_ORIG; R12 * f_MEMBERS; R12 * f_SAVED; rt_int f_OWNER; rt_int f_WITHV; rt_int f_LAZY; rt_int f_LINKAGE; R12 * f_SEGM; R12 * f_HOME; R12 * f_CHAIN; R12 * f_SNEXT; };
struct R19 { int dummy_; rt_int f_LEVEL; R12 * f_R; rt_int f_FRAMED; R9 f_FTYPE; R14 f_FIELDS; R19 * f_UP; R17 * f_IMPORTS; R17 * f_SIGNALS; R22 * f_RESULT; rt_int f_IS_PATH; R9 f_COPYOUT; };
struct R20 { int dummy_; rt_int f_ID; R17 * f_IMPORTS; R17 * f_SIGNALS; R9 f_NAME; R20 * f_UP; };
struct R22 { int dummy_; rt_int f_KIND; rt_int f_SCALE; R9 f_LO_C; R9 f_HI_C; R25 f_MLO; R25 f_MHI; rt_int f_RLEVEL; R9 f_LEN_C; R25 f_MLEN; R9 f_GEN; R22 * f_BASE; R22 * f_ELEM; R22 * f_TARGET; R17 * f_TARGET_TS; R27 * f_FIELDS; R17 * f_LITS; rt_int f_NLITS; rt_int f_UNORDERED; R28 * f_BOUNDS; rt_int f_DIMS; R28 * f_ARGS; R9 f_NAME; R9 f_CNAME; R12 * f_MODL; R17 * f_REPS; R12 * f_DECL; R9 f_GENP; rt_int f_RADIX; rt_int f_PREC; rt_int f_ROPEN; };
struct R29 { int dummy_; R17 * f_E; R26 f_V; rt_int f_HAVE; rt_int f_MODE; R29 * f_NEXT; };
struct R21 { int dummy_; R9 f_NAME; R22 * f_T; R9 f_C; rt_int f_HASMV; rt_int f_MV; R12 * f_R; R21 * f_NEXT; };
struct R28 { int dummy_; R9 f_LO; R9 f_HI; R25 f_MLO; R25 f_MHI; rt_int f_ANYARG; R28 * f_NEXT; };
struct R27 { int dummy_; R9 f_NAME; R9 f_CNAME; R22 * f_T; rt_int f_KIND; R9 f_TAGF; R17 * f_LABELS; R27 * f_NEXT; };
struct fr_r_MANIFEST_ARITH { void *up; R9 p_OP; rt_int p_A; rt_int p_B; rt_int p_LINE; rt_int l_R_1460; };
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
static rt_int g_T_XFIX;
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
static R22 * r_XFIX_RANGE(R22 * p_T, R17 * p_R);
static void S_R26(R26 *d, R26 s, int any);
static int E_R26(R26 a, R26 b);
static R26 C_R26(R26 s);
static R9 r_XFIX_VALUE(R22 * p_T, R26 p_V, rt_int p_LINE);
static R22 * r_XFIX_BASE(R22 * p_T);
static rt_int r_SAME_XFIX(R22 * p_A, R22 * p_B);
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
static R22 * r_PRECISIONS_TYPE(void);
static rt_int r_STD_ORD(void);
static rt_int r_PRECISION_ORD(R17 * p_P);
static R9 r_PRECISION_NAME(rt_int p_N);
static rt_int r_XFIX_SIZE(R22 * p_T);
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
static R27 * r_NEW_FIELD(R9 p_NAME, R22 * p_T, rt_int p_KIND);
static R27 * r_FIND_FIELD(R22 * p_T, R9 p_NAME);
static R27 * r_FIND_VFIELD(R22 * p_T, R9 p_NAME);
static void r_ADD_FIELD(R22 * p_T, R27 * p_F, R27 * *p_TAIL);
static void r_RECORD_FIELDS(R22 * p_T, R17 * p_DECLS, R9 p_TAGN, R17 * p_LABELS, R27 * *p_TAIL);
static void r_CHECK_VARIANT_NAMES(R17 * p_D, R22 * p_TT);
static R22 * r_RESOLVE_RECORD(R17 * p_TS, R9 p_CNAME, R12 * p_Y, R17 * p_FORMALS);
static rt_int r_IS_RECORD_REP(R22 * p_T);
static void r_CHECK_RECORD_REP(R22 * p_T, rt_int p_LINE);
static void r_CHECK_ELEMENTS(R22 * p_T, R17 * p_L, R9 p_TAGN, R17 * p_LABELS, R17 * *p_SEEN);
static R9 r_RECORD_SIZE(R22 * p_T, R9 p_C);
static R9 r_RECORD_BITS(R22 * p_T, R9 p_C);
static R9 r_RECORD_OF_BITS(R22 * p_T, R9 p_B);
static R9 r_RECORD_LAYOUT(R22 * p_T, R9 p_C, rt_int p_MODE, R9 p_IMG);
static R9 r_LAY_FIELD(R27 * p_F, R22 * p_T, R9 p_C, rt_int p_MODE);
static R9 r_LAY_FILL(R9 p_SIZE, R9 p_BITS, rt_int p_MODE);
static rt_int r_IS_ANY_FIELD(R22 * p_T, R27 * p_F);
static R9 r_FIELD_SIZE_C(R27 * p_F, R9 p_C);
static R9 r_LAYOUT_ALL(R22 * p_T, R9 p_C, R9 p_TAGN, rt_int p_MODE);
static R9 r_LAYOUT_PARTS(R22 * p_T, R9 p_C);
static R9 r_LAYOUT_SPEC(R22 * p_T, R9 p_C, R17 * p_P, R9 p_TAGN);
static R9 r_LAYOUT_VARIANTS(R22 * p_T, R9 p_C, R9 p_TAGN);
static rt_int r_ARG_MANIFEST(R22 * p_T, R27 * p_F);
static rt_int r_IS_ANY_TAG(R17 * p_A);
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R17 * p_TS);
static rt_int r_SAME_BINDS(R21 * p_A, R21 * p_B);
static rt_int r_HAS_ANY(R22 * p_T);
static R9 r_VARIANT_COND(R27 * p_F, R22 * p_T, R9 p_SELF);
static void r_COMPLETE_RECORD(R22 * p_T);
static R9 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS);
static R9 r_INIT_CODE(R22 * p_T, R9 p_LV);
static rt_int r_NEEDS_INIT(R22 * p_T);
static R9 r_COPY_OF(R22 * p_T, R9 p_V);
static R9 r_ASSIGN_CODE(R22 * p_T, R9 p_LV, R9 p_RV);
static R9 r_EQUAL_CODE(R22 * p_T, R9 p_A, R9 p_B);
static R9 r_RANGE_CHECK(R22 * p_T, R9 p_V, R9 p_SELF);
static R9 r_RANGE_CHECK_IN(R22 * p_T, R9 p_V, R9 p_SELF);
static R9 r_XFIX_RANGE_CHECK(R22 * p_T, R9 p_V, R9 p_LO, R9 p_HI, rt_int p_OPEN, rt_int p_TC);
static R9 r_XFIX_OUTSIDE(R22 * p_T, R9 p_X, R9 p_LO, R9 p_HI, rt_int p_OPEN);
static R9 r_XFIX_LESS(R26 p_A, R26 p_B);
static rt_int r_REP_BITS(R22 * p_T);
static rt_int r_REP_UNSIGNED(R22 * p_T);
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T);
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B);
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B);
static rt_int r_IS_GEN_ARG(R28 * p_B);
static rt_int r_SAME_ARGS(R28 * p_A, R28 * p_B);
static R9 r_FRAME_OF(rt_int p_LEVEL);
static R9 r_OBJ_ACCESS(R12 * p_Y);
static R9 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE);
static void r_DECLARE_OBJECTS(R17 * p_D);
static R26 r_MKET(R9 p_C, R22 * p_T);
static R26 r_MKLV(R9 p_C, R22 * p_T, rt_int p_LVAL, R9 p_SELF);
static R22 * r_INT_TYPE(rt_int p_SCALE);
static R22 * r_STR_TYPE(R9 p_LEN, R25 p_M);
static R9 r_CSTRING(R9 p_T);
static R25 r_MANIFEST(R17 * p_E);
static R25 r_ATTR_MANIFEST(R17 * p_E);
static R25 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R9 p_NAME);
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
static void r_CHECK_VARIANT(R27 * p_F, R22 * p_T, R17 * p_BASE, rt_int p_LINE);
static R25 r_TAG_VALUE(R22 * p_T, R9 p_TAGN);
static rt_int r_LABELS_HAVE(R17 * p_L, rt_int p_V, R22 * p_T);
static R26 r_VALUE_OR_TYPE(R17 * p_E);
static R26 r_INDEX_EXPR(R17 * p_E);
static R9 r_INDEX_VALUE(R17 * p_E);
static R9 r_INDEX_OF(R26 p_V, rt_int p_LINE);
static R26 r_INDEX_EXPR2(R17 * p_E);
static R9 r_OP_NAME(R9 p_OP, rt_int p_UNARY);
static R29 * r_VAL_ARG(R26 p_V, R29 * p_NEXT);
static R29 * r_NODE_ARG(R17 * p_E, rt_int p_MODE, R29 * p_NEXT);
static R12 * r_USER_OPERATOR(R9 p_NAME, R29 * p_ARGS, rt_int p_LINE);
static rt_int r_HAS_USER_ROUTINE(R9 p_NAME);
static R29 * r_QUAL_ARGS(rt_int p_LINE);
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
static R25 r_STATIC_SIZE(R22 * p_T);
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
static R9 r_OF_BITS(R22 * p_T, R9 p_B, rt_int p_LINE);
static R9 r_ARRAY_BITS(R22 * p_T, R9 p_C);
static R9 r_ARRAY_OF_BITS(R22 * p_T, R9 p_B);
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
static void r_TYPE_ARG(R29 * p_A);
static rt_int r_WANT_SENSITIVE(R29 * p_A);
static rt_int r_COUNT_ARGS(R29 * p_A);
static R29 * r_CALL_ARGS(R17 * p_E);
static R26 r_CALL_EXPR(R17 * p_E, R22 * p_WANT);
static R26 r_CALL_EXPR1(R17 * p_E, R22 * p_WANT);
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
static R26 r_CALL_SYM(R12 * p_Y0, R29 * p_ARGS, rt_int p_LINE);
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
static R28 * r_DISTINCT_LABEL(R28 * p_SEEN, rt_int p_A, rt_int p_B, rt_int p_LINE);
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
static void S_R29(R29 *d, R29 s, int any);
static int E_R29(R29 a, R29 b);
static R29 C_R29(R29 s);
static void S_R21(R21 *d, R21 s, int any);
static int E_R21(R21 a, R21 b);
static R21 C_R21(R21 s);
static void S_R28(R28 *d, R28 s, int any);
static int E_R28(R28 a, R28 b);
static R28 C_R28(R28 s);
static void S_R27(R27 *d, R27 s, int any);
static int E_R27(R27 a, R27 b);
static R27 C_R27(R27 s);
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
static void S_R22(R22 *d, R22 s, int any) {  d->f_KIND = s.f_KIND; d->f_SCALE = s.f_SCALE; S_R9(&d->f_LO_C, s.f_LO_C, 0); S_R9(&d->f_HI_C, s.f_HI_C, 0); S_R25(&d->f_MLO, s.f_MLO, 0); S_R25(&d->f_MHI, s.f_MHI, 0); d->f_RLEVEL = s.f_RLEVEL; S_R9(&d->f_LEN_C, s.f_LEN_C, 0); S_R25(&d->f_MLEN, s.f_MLEN, 0); S_R9(&d->f_GEN, s.f_GEN, 0); d->f_BASE = s.f_BASE; d->f_ELEM = s.f_ELEM; d->f_TARGET = s.f_TARGET; d->f_TARGET_TS = s.f_TARGET_TS; d->f_FIELDS = s.f_FIELDS; d->f_LITS = s.f_LITS; d->f_NLITS = s.f_NLITS; d->f_UNORDERED = s.f_UNORDERED; d->f_BOUNDS = s.f_BOUNDS; d->f_DIMS = s.f_DIMS; d->f_ARGS = s.f_ARGS; S_R9(&d->f_NAME, s.f_NAME, 0); S_R9(&d->f_CNAME, s.f_CNAME, 0); d->f_MODL = s.f_MODL; d->f_REPS = s.f_REPS; d->f_DECL = s.f_DECL; S_R9(&d->f_GENP, s.f_GENP, 0); d->f_RADIX = s.f_RADIX; d->f_PREC = s.f_PREC; d->f_ROPEN = s.f_ROPEN; }
static int E_R22(R22 a, R22 b) { return 1 && (a.f_KIND == b.f_KIND) && (a.f_SCALE == b.f_SCALE) && E_R9(a.f_LO_C, b.f_LO_C) && E_R9(a.f_HI_C, b.f_HI_C) && E_R25(a.f_MLO, b.f_MLO) && E_R25(a.f_MHI, b.f_MHI) && (a.f_RLEVEL == b.f_RLEVEL) && E_R9(a.f_LEN_C, b.f_LEN_C) && E_R25(a.f_MLEN, b.f_MLEN) && E_R9(a.f_GEN, b.f_GEN) && (a.f_BASE == b.f_BASE) && (a.f_ELEM == b.f_ELEM) && (a.f_TARGET == b.f_TARGET) && (a.f_TARGET_TS == b.f_TARGET_TS) && (a.f_FIELDS == b.f_FIELDS) && (a.f_LITS == b.f_LITS) && (a.f_NLITS == b.f_NLITS) && (a.f_UNORDERED == b.f_UNORDERED) && (a.f_BOUNDS == b.f_BOUNDS) && (a.f_DIMS == b.f_DIMS) && (a.f_ARGS == b.f_ARGS) && E_R9(a.f_NAME, b.f_NAME) && E_R9(a.f_CNAME, b.f_CNAME) && (a.f_MODL == b.f_MODL) && (a.f_REPS == b.f_REPS) && (a.f_DECL == b.f_DECL) && E_R9(a.f_GENP, b.f_GENP) && (a.f_RADIX == b.f_RADIX) && (a.f_PREC == b.f_PREC) && (a.f_ROPEN == b.f_ROPEN); }
static R22 C_R22(R22 s) { R22 d = s;
 d.f_KIND = s.f_KIND; d.f_SCALE = s.f_SCALE; d.f_LO_C = C_R9(s.f_LO_C); d.f_HI_C = C_R9(s.f_HI_C); d.f_MLO = C_R25(s.f_MLO); d.f_MHI = C_R25(s.f_MHI); d.f_RLEVEL = s.f_RLEVEL; d.f_LEN_C = C_R9(s.f_LEN_C); d.f_MLEN = C_R25(s.f_MLEN); d.f_GEN = C_R9(s.f_GEN); d.f_BASE = s.f_BASE; d.f_ELEM = s.f_ELEM; d.f_TARGET = s.f_TARGET; d.f_TARGET_TS = s.f_TARGET_TS; d.f_FIELDS = s.f_FIELDS; d.f_LITS = s.f_LITS; d.f_NLITS = s.f_NLITS; d.f_UNORDERED = s.f_UNORDERED; d.f_BOUNDS = s.f_BOUNDS; d.f_DIMS = s.f_DIMS; d.f_ARGS = s.f_ARGS; d.f_NAME = C_R9(s.f_NAME); d.f_CNAME = C_R9(s.f_CNAME); d.f_MODL = s.f_MODL; d.f_REPS = s.f_REPS; d.f_DECL = s.f_DECL; d.f_GENP = C_R9(s.f_GENP); d.f_RADIX = s.f_RADIX; d.f_PREC = s.f_PREC; d.f_ROPEN = s.f_ROPEN; return d; }
static void S_R29(R29 *d, R29 s, int any) {  d->f_E = s.f_E; S_R26(&d->f_V, s.f_V, 0); d->f_HAVE = s.f_HAVE; d->f_MODE = s.f_MODE; d->f_NEXT = s.f_NEXT; }
static int E_R29(R29 a, R29 b) { return 1 && (a.f_E == b.f_E) && E_R26(a.f_V, b.f_V) && (a.f_HAVE == b.f_HAVE) && (a.f_MODE == b.f_MODE) && (a.f_NEXT == b.f_NEXT); }
static R29 C_R29(R29 s) { R29 d = s;
 d.f_E = s.f_E; d.f_V = C_R26(s.f_V); d.f_HAVE = s.f_HAVE; d.f_MODE = s.f_MODE; d.f_NEXT = s.f_NEXT; return d; }
static void S_R21(R21 *d, R21 s, int any) {  S_R9(&d->f_NAME, s.f_NAME, 0); d->f_T = s.f_T; S_R9(&d->f_C, s.f_C, 0); d->f_HASMV = s.f_HASMV; d->f_MV = s.f_MV; d->f_R = s.f_R; d->f_NEXT = s.f_NEXT; }
static int E_R21(R21 a, R21 b) { return 1 && E_R9(a.f_NAME, b.f_NAME) && (a.f_T == b.f_T) && E_R9(a.f_C, b.f_C) && (a.f_HASMV == b.f_HASMV) && (a.f_MV == b.f_MV) && (a.f_R == b.f_R) && (a.f_NEXT == b.f_NEXT); }
static R21 C_R21(R21 s) { R21 d = s;
 d.f_NAME = C_R9(s.f_NAME); d.f_T = s.f_T; d.f_C = C_R9(s.f_C); d.f_HASMV = s.f_HASMV; d.f_MV = s.f_MV; d.f_R = s.f_R; d.f_NEXT = s.f_NEXT; return d; }
static void S_R28(R28 *d, R28 s, int any) {  S_R9(&d->f_LO, s.f_LO, 0); S_R9(&d->f_HI, s.f_HI, 0); S_R25(&d->f_MLO, s.f_MLO, 0); S_R25(&d->f_MHI, s.f_MHI, 0); d->f_ANYARG = s.f_ANYARG; d->f_NEXT = s.f_NEXT; }
static int E_R28(R28 a, R28 b) { return 1 && E_R9(a.f_LO, b.f_LO) && E_R9(a.f_HI, b.f_HI) && E_R25(a.f_MLO, b.f_MLO) && E_R25(a.f_MHI, b.f_MHI) && (a.f_ANYARG == b.f_ANYARG) && (a.f_NEXT == b.f_NEXT); }
static R28 C_R28(R28 s) { R28 d = s;
 d.f_LO = C_R9(s.f_LO); d.f_HI = C_R9(s.f_HI); d.f_MLO = C_R25(s.f_MLO); d.f_MHI = C_R25(s.f_MHI); d.f_ANYARG = s.f_ANYARG; d.f_NEXT = s.f_NEXT; return d; }
static void S_R27(R27 *d, R27 s, int any) {  S_R9(&d->f_NAME, s.f_NAME, 0); S_R9(&d->f_CNAME, s.f_CNAME, 0); d->f_T = s.f_T; d->f_KIND = s.f_KIND; S_R9(&d->f_TAGF, s.f_TAGF, 0); d->f_LABELS = s.f_LABELS; d->f_NEXT = s.f_NEXT; }
static int E_R27(R27 a, R27 b) { return 1 && E_R9(a.f_NAME, b.f_NAME) && E_R9(a.f_CNAME, b.f_CNAME) && (a.f_T == b.f_T) && (a.f_KIND == b.f_KIND) && E_R9(a.f_TAGF, b.f_TAGF) && (a.f_LABELS == b.f_LABELS) && (a.f_NEXT == b.f_NEXT); }
static R27 C_R27(R27 s) { R27 d = s;
 d.f_NAME = C_R9(s.f_NAME); d.f_CNAME = C_R9(s.f_CNAME); d.f_T = s.f_T; d.f_KIND = s.f_KIND; d.f_TAGF = C_R9(s.f_TAGF); d.f_LABELS = s.f_LABELS; d.f_NEXT = s.f_NEXT; return d; }
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
l_T_607 = ({ R22 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R22(&(*(R22 *)rt_nil_check(l_T_607)), ({ R22 rc608; memset(&rc608, 0, sizeof rc608);  rc608.f_KIND = p_KIND; rc608.f_SCALE = ((rt_int)0LL); S_R9(&rc608.f_LO_C, r_NO_TEXT(), 0); S_R9(&rc608.f_HI_C, r_NO_TEXT(), 0); S_R25(&rc608.f_MLO, r_NO_MVAL(), 0); S_R25(&rc608.f_MHI, r_NO_MVAL(), 0); rc608.f_RLEVEL = ((rt_int)0LL); S_R9(&rc608.f_LEN_C, r_NO_TEXT(), 0); S_R25(&rc608.f_MLEN, r_NO_MVAL(), 0); S_R9(&rc608.f_GEN, r_NO_TEXT(), 0); rc608.f_BASE = NULL; rc608.f_ELEM = NULL; rc608.f_TARGET = NULL; rc608.f_TARGET_TS = NULL; rc608.f_FIELDS = NULL; rc608.f_LITS = NULL; rc608.f_NLITS = ((rt_int)0LL); rc608.f_UNORDERED = 0; rc608.f_BOUNDS = NULL; rc608.f_DIMS = ((rt_int)0LL); rc608.f_ARGS = NULL; S_R9(&rc608.f_NAME, r_NO_TEXT(), 0); S_R9(&rc608.f_CNAME, r_NO_TEXT(), 0); rc608.f_MODL = NULL; rc608.f_REPS = NULL; rc608.f_DECL = NULL; S_R9(&rc608.f_GENP, r_NO_TEXT(), 0); rc608.f_RADIX = ((rt_int)2LL); rc608.f_PREC = ((rt_int)0LL); rc608.f_ROPEN = ((rt_int)0LL); rc608; }), 0);
{ R22 * rv609 = l_T_607;
return rv609; }
rt_raise(RT_X_INIT);
}
static R22 * r_COPY_TYP(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_610; memset(&l_C_610, 0, sizeof l_C_610);
l_C_610 = ({ R22 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
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
else if ((l_K_653 == g_T_XFIX))
{
{ R9 rv657 = r_CAT(r_FMT3(rt_str("FIXED (@, @, @", 14), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_RADIX), r_PRECISION_NAME(((*(R22 *)rt_nil_check(p_T))).f_PREC)), r_MK(rt_str(")", 1)));
return rv657; }
}
else if ((l_K_653 == g_T_BOOL))
{
{ R9 rv658 = r_MK(rt_str("BOOLEAN", 7));
return rv658; }
}
else if ((l_K_653 == g_T_ENUM))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R9 rv659 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv659; }
}
{ R9 rv660 = r_MK(rt_str("an enumerated type", 18));
return rv660; }
}
else if ((l_K_653 == g_T_STR))
{
{ R9 rv661 = r_MK(rt_str("CHAR_STR", 8));
return rv661; }
}
else if ((l_K_653 == g_T_BITS))
{
{ R9 rv662 = r_MK(rt_str("BIT", 3));
return rv662; }
}
else if ((l_K_653 == g_T_FLOAT))
{
{ R9 rv663 = r_FMT1(rt_str("FLOAT (@)", 9), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv663; }
}
else if ((l_K_653 == g_T_ARR))
{
{ R9 rv664 = r_FMT1(rt_str("ARRAY OF @", 10), r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_ELEM));
return rv664; }
}
else if ((l_K_653 == g_T_REC))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R9 rv665 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv665; }
}
{ R9 rv666 = r_MK(rt_str("RECORD", 6));
return rv666; }
}
else if ((l_K_653 == g_T_PTR))
{
{ R9 rv667 = r_MK(rt_str("PTR", 3));
return rv667; }
}
else if ((l_K_653 == g_T_SEM))
{
{ R9 rv668 = r_MK(rt_str("SEMAPHORE", 9));
return rv668; }
}
else if ((l_K_653 == g_T_NIL))
{
{ R9 rv669 = r_MK(rt_str("NIL", 3));
return rv669; }
}
else if ((l_K_653 == g_T_VOID))
{
{ R9 rv670 = r_MK(rt_str("no value", 8));
return rv670; }
}
{ R9 rv671 = r_MK(rt_str("a type", 6));
return rv671; }
rt_raise(RT_X_INIT);
}
static R9 r_SUBST_SELF(R9 p_T, R9 p_SELF) { RT_B_TICK(); 
rstr l_S_672; memset(&l_S_672, 0, sizeof l_S_672);
l_S_672 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_672, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_673; memset(&l_AT_673, 0, sizeof l_AT_673);
l_AT_673 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_START_674; memset(&l_START_674, 0, sizeof l_START_674);
l_START_674 = ((rt_int)0LL);
R9 l_R_675; memset(&l_R_675, 0, sizeof l_R_675);
rt_int l_I_676; memset(&l_I_676, 0, sizeof l_I_676);
l_I_676 = ((rt_int)0LL);
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ R9 rv677 = p_T;
return rv677; }
}
for (;;) {
if ((l_I_676 >= rt_sub((p_T).f_LEN, ((rt_int)1LL)))) goto L_end678;
{
if (rt_b_eq(rt_b_slice(l_S_672, l_I_676, rt_add(l_I_676, ((rt_int)1LL))), rt_str("$S", 2)))
{
S_R9(&l_R_675, r_MK(rt_b_slice(l_S_672, l_START_674, rt_sub(l_I_676, ((rt_int)1LL)))), 0);
S_R9(&l_R_675, r_MK(r_STR(p_SELF, (p_SELF).f_LEN)), 0);
l_I_676 = rt_add(l_I_676, ((rt_int)2LL));
l_START_674 = l_I_676;
}
else
{
l_I_676 = rt_add(l_I_676, ((rt_int)1LL));
}
}
RT_B_TICK();
} L_end678: ;
if ((l_START_674 == ((rt_int)0LL)))
{
((*(R7 *)rt_nil_check(g_W))).f_TOP = l_AT_673;
{ R9 rv679 = p_T;
return rv679; }
}
S_R9(&l_R_675, r_MK(rt_b_slice(l_S_672, l_START_674, rt_sub((p_T).f_LEN, ((rt_int)1LL)))), 0);
{ R9 rv680 = ({ R9 rc681; memset(&rc681, 0, sizeof rc681);  rc681.f_AT = l_AT_673; rc681.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_673); rc681.f_H = rt_neg(((rt_int)1LL)); rc681; });
return rv680; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LITERALS(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_P_682; memset(&l_P_682, 0, sizeof l_P_682);
l_P_682 = p_A;
R17 * l_Q_683; memset(&l_Q_683, 0, sizeof l_Q_683);
l_Q_683 = p_B;
for (;;) {
if (((l_P_682 == NULL) || (l_Q_683 == NULL))) goto L_end684;
{
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_P_682))).f_NAME, ((*(R17 *)rt_nil_check(l_Q_683))).f_NAME)))
{
{ rt_int rv685 = 0;
return rv685; }
}
l_P_682 = ((*(R17 *)rt_nil_check(l_P_682))).f_NEXT;
l_Q_683 = ((*(R17 *)rt_nil_check(l_Q_683))).f_NEXT;
}
RT_B_TICK();
} L_end684: ;
{ rt_int rv686 = ((l_P_682 == NULL) && (l_Q_683 == NULL));
return rv686; }
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_CLASS(R17 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_687; memset(&l_Y_687, 0, sizeof l_Y_687);
l_Y_687 = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
R22 * l_T_688; memset(&l_T_688, 0, sizeof l_T_688);
{
R17 * l_P_689; memset(&l_P_689, 0, sizeof l_P_689);
l_P_689 = p_LITS;
for (;;) {
if ((l_P_689 == NULL)) goto L_end690;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_P_689))).f_NEXT, ((*(R17 *)rt_nil_check(l_P_689))).f_NAME))
{
r_FAILT(p_LINE, rt_str("an enumerated literal must be unique in its list (3.4.1): ", 58), ((*(R17 *)rt_nil_check(l_P_689))).f_NAME);
}
l_P_689 = ((*(R17 *)rt_nil_check(l_P_689))).f_NEXT;
}
RT_B_TICK();
} L_end690: ;
}
for (;;) {
if ((l_Y_687 == NULL)) goto L_end691;
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_687))).f_T))).f_UNORDERED == p_UNORDERED) && r_SAME_LITERALS(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_687))).f_T))).f_LITS, p_LITS)))
{
r_DECLARE_LITERALS(((*(R12 *)rt_nil_check(l_Y_687))).f_T, p_LINE);
{ R22 * rv692 = ((*(R12 *)rt_nil_check(l_Y_687))).f_T;
return rv692; }
}
l_Y_687 = ((*(R12 *)rt_nil_check(l_Y_687))).f_INSTANCES;
}
RT_B_TICK();
} L_end691: ;
l_T_688 = r_NEW_TYP(g_T_ENUM);
((*(R22 *)rt_nil_check(l_T_688))).f_BASE = l_T_688;
((*(R22 *)rt_nil_check(l_T_688))).f_LITS = p_LITS;
((*(R22 *)rt_nil_check(l_T_688))).f_NLITS = r_LIST_LENGTH(p_LITS);
((*(R22 *)rt_nil_check(l_T_688))).f_UNORDERED = p_UNORDERED;
S_R9(&((*(R22 *)rt_nil_check(l_T_688))).f_CNAME, r_NEW_NAME(rt_str("E", 1)), 0);
l_Y_687 = r_NEW_SYM(g_Y_TYPE, r_NO_TEXT());
((*(R12 *)rt_nil_check(l_Y_687))).f_T = l_T_688;
((*(R12 *)rt_nil_check(l_Y_687))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
((*(R7 *)rt_nil_check(g_W))).f_ENUMS = l_Y_687;
{
R17 * l_P_693; memset(&l_P_693, 0, sizeof l_P_693);
l_P_693 = p_LITS;
R9 l_NAMES_694; memset(&l_NAMES_694, 0, sizeof l_NAMES_694);
S_R9(&l_NAMES_694, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_P_693 == NULL)) goto L_end695;
{
S_R9(&l_NAMES_694, r_FMT2(rt_str("@@, ", 4), l_NAMES_694, r_CSTRING(((*(R17 *)rt_nil_check(l_P_693))).f_NAME)), 0);
l_P_693 = ((*(R17 *)rt_nil_check(l_P_693))).f_NEXT;
}
RT_B_TICK();
} L_end695: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static const char *@[] = { @0 };", 32), ((*(R22 *)rt_nil_check(l_T_688))).f_CNAME, l_NAMES_694));
}
r_DECLARE_LITERALS(l_T_688, p_LINE);
{ R22 * rv696 = l_T_688;
return rv696; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_LITERALS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_P_697; memset(&l_P_697, 0, sizeof l_P_697);
l_P_697 = ((*(R22 *)rt_nil_check(p_T))).f_LITS;
rt_int l_I_698; memset(&l_I_698, 0, sizeof l_I_698);
l_I_698 = ((rt_int)0LL);
for (;;) {
if ((l_P_697 == NULL)) goto L_end699;
{
if ((r_VISIBLE_LITERAL(((*(R17 *)rt_nil_check(l_P_697))).f_NAME, p_T) == NULL))
{
{
R12 * l_Y_700; memset(&l_Y_700, 0, sizeof l_Y_700);
l_Y_700 = r_NEW_SYM(g_Y_ENUMLIT, ((*(R17 *)rt_nil_check(l_P_697))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_700))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_700))).f_MV = l_I_698;
((*(R12 *)rt_nil_check(l_Y_700))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_700))).f_INPUT = 1;
r_DEFINE(l_Y_700, p_LINE);
}
}
l_I_698 = rt_add(l_I_698, ((rt_int)1LL));
l_P_697 = ((*(R17 *)rt_nil_check(l_P_697))).f_NEXT;
}
RT_B_TICK();
} L_end699: ;
}
static R12 * r_FIND_LITERAL(R9 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_V_701; memset(&l_V_701, 0, sizeof l_V_701);
l_V_701 = r_VISIBLE_LITERAL(p_NAME, p_T);
if (((!(l_V_701 == NULL)) || (p_T == NULL)))
{
{ R12 * rv702 = l_V_701;
return rv702; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL))
{
{ R12 * rv703 = NULL;
return rv703; }
}
{
R17 * l_P_704; memset(&l_P_704, 0, sizeof l_P_704);
l_P_704 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
rt_int l_I_705; memset(&l_I_705, 0, sizeof l_I_705);
l_I_705 = ((rt_int)0LL);
for (;;) {
if ((l_P_704 == NULL)) goto L_end706;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_704))).f_NAME, p_NAME))
{
{
R12 * l_Y_707; memset(&l_Y_707, 0, sizeof l_Y_707);
l_Y_707 = r_NEW_SYM(g_Y_ENUMLIT, p_NAME);
((*(R12 *)rt_nil_check(l_Y_707))).f_T = ((*(R22 *)rt_nil_check(p_T))).f_BASE;
((*(R12 *)rt_nil_check(l_Y_707))).f_MV = l_I_705;
((*(R12 *)rt_nil_check(l_Y_707))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_707))).f_INPUT = 1;
{ R12 * rv708 = l_Y_707;
return rv708; }
}
}
l_I_705 = rt_add(l_I_705, ((rt_int)1LL));
l_P_704 = ((*(R17 *)rt_nil_check(l_P_704))).f_NEXT;
}
RT_B_TICK();
} L_end706: ;
}
{ R12 * rv709 = NULL;
return rv709; }
rt_raise(RT_X_INIT);
}
static R12 * r_VISIBLE_LITERAL(R9 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_710; memset(&l_Y_710, 0, sizeof l_Y_710);
l_Y_710 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_710 == NULL)) goto L_end711;
{
if ((((*(R12 *)rt_nil_check(l_Y_710))).f_KIND == g_Y_ENUMLIT))
{
if ((p_T == NULL))
{
{ R12 * rv712 = l_Y_710;
return rv712; }
}
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_710))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv713 = l_Y_710;
return rv713; }
}
}
l_Y_710 = r_LOOKUP_NEXT(l_Y_710);
}
RT_B_TICK();
} L_end711: ;
{ R12 * rv714 = NULL;
return rv714; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_CLASSES(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_715; memset(&l_Y_715, 0, sizeof l_Y_715);
l_Y_715 = r_LOOKUP(p_NAME);
rt_int l_N_716; memset(&l_N_716, 0, sizeof l_N_716);
l_N_716 = ((rt_int)0LL);
for (;;) {
if ((l_Y_715 == NULL)) goto L_end717;
{
if ((((*(R12 *)rt_nil_check(l_Y_715))).f_KIND == g_Y_ENUMLIT))
{
l_N_716 = rt_add(l_N_716, ((rt_int)1LL));
}
l_Y_715 = r_LOOKUP_NEXT(l_Y_715);
}
RT_B_TICK();
} L_end717: ;
{ rt_int rv718 = l_N_716;
return rv718; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE(R17 * p_TS) { RT_B_TICK(); 
{ R22 * rv719 = r_RESOLVE_NAMED(p_TS, r_NO_TEXT());
return rv719; }
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
static R22 * r_XFIX_RANGE(R22 * p_T, R17 * p_R) { RT_B_TICK(); 
R22 * l_N_720; memset(&l_N_720, 0, sizeof l_N_720);
l_N_720 = r_COPY_TYP(p_T);
R26 l_LO_721; memset(&l_LO_721, 0, sizeof l_LO_721);
S_R26(&l_LO_721, r_EXPR(((*(R17 *)rt_nil_check(p_R))).f_A, p_T), 0);
R26 l_HI_722; memset(&l_HI_722, 0, sizeof l_HI_722);
S_R26(&l_HI_722, r_EXPR(((*(R17 *)rt_nil_check(p_R))).f_B, p_T), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_720))).f_NAME, r_NO_TEXT(), 0);
((*(R22 *)rt_nil_check(l_N_720))).f_RLEVEL = r_CUR_LEVEL();
((*(R22 *)rt_nil_check(l_N_720))).f_ROPEN = ((*(R17 *)rt_nil_check(p_R))).f_IV;
S_R9(&((*(R22 *)rt_nil_check(l_N_720))).f_LO_C, r_XFIX_VALUE(p_T, l_LO_721, ((*(R17 *)rt_nil_check(p_R))).f_LINE), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_720))).f_HI_C, r_XFIX_VALUE(p_T, l_HI_722, ((*(R17 *)rt_nil_check(p_R))).f_LINE), 0);
S_R25(&((*(R22 *)rt_nil_check(l_N_720))).f_MLO, r_NO_MVAL(), 0);
S_R25(&((*(R22 *)rt_nil_check(l_N_720))).f_MHI, r_NO_MVAL(), 0);
if ((r_USER_OPERATOR(r_MKN(rt_str("LESS_THAN_", 10)), r_VAL_ARG(r_MKET(((*(R22 *)rt_nil_check(l_N_720))).f_LO_C, p_T), r_VAL_ARG(r_MKET(((*(R22 *)rt_nil_check(l_N_720))).f_HI_C, p_T), NULL)), ((*(R17 *)rt_nil_check(p_R))).f_LINE) == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_R))).f_LINE, rt_str("a range of this member of FIXED needs the program's LESS_THAN_ (D.4): ", 70), r_TYPE_NAME(p_T));
}
{ R22 * rv723 = l_N_720;
return rv723; }
rt_raise(RT_X_INIT);
}
static R9 r_XFIX_VALUE(R22 * p_T, R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
if (r_SAME_XFIX(p_T, (p_V).f_T))
{
{ R9 rv724 = (p_V).f_C;
return rv724; }
}
{
R9 l_TMP_725; memset(&l_TMP_725, 0, sizeof l_TMP_725);
S_R9(&l_TMP_725, r_NEW_NAME(rt_str("xc", 2)), 0);
{ R9 rv726 = r_FMT3(rt_str("({ rstr @; @ @; })", 18), l_TMP_725, r_STORE_CODE(p_T, l_TMP_725, p_V, p_LINE, r_NO_TEXT()), l_TMP_725);
return rv726; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_XFIX_BASE(R22 * p_T) { RT_B_TICK(); 
R22 * l_N_727; memset(&l_N_727, 0, sizeof l_N_727);
l_N_727 = r_COPY_TYP(r_REAL_TYPE(p_T));
S_R9(&((*(R22 *)rt_nil_check(l_N_727))).f_LO_C, r_NO_TEXT(), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_727))).f_HI_C, r_NO_TEXT(), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_727))).f_NAME, r_NO_TEXT(), 0);
{ R22 * rv728 = l_N_727;
return rv728; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_XFIX(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_729; memset(&l_RA_729, 0, sizeof l_RA_729);
l_RA_729 = r_REAL_TYPE(p_A);
R22 * l_RB_730; memset(&l_RB_730, 0, sizeof l_RB_730);
l_RB_730 = r_REAL_TYPE(p_B);
if (((!(((*(R22 *)rt_nil_check(l_RA_729))).f_KIND == g_T_XFIX)) || (!(((*(R22 *)rt_nil_check(l_RB_730))).f_KIND == g_T_XFIX))))
{
{ rt_int rv731 = 0;
return rv731; }
}
{ rt_int rv732 = (((((*(R22 *)rt_nil_check(l_RA_729))).f_SCALE == ((*(R22 *)rt_nil_check(l_RB_730))).f_SCALE) && (((*(R22 *)rt_nil_check(l_RA_729))).f_RADIX == ((*(R22 *)rt_nil_check(l_RB_730))).f_RADIX)) && (((*(R22 *)rt_nil_check(l_RA_729))).f_PREC == ((*(R22 *)rt_nil_check(l_RB_730))).f_PREC));
return rv732; }
rt_raise(RT_X_INIT);
}
static R22 * r_WITH_RANGE(R22 * p_T, R17 * p_R) { RT_B_TICK(); 
R22 * l_N_733; memset(&l_N_733, 0, sizeof l_N_733);
if ((p_R == NULL))
{
{ R22 * rv734 = p_T;
return rv734; }
}
if ((r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(p_R))).f_A) || r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(p_R))).f_B)))
{
l_N_733 = r_COPY_TYP(p_T);
S_R9(&((*(R22 *)rt_nil_check(l_N_733))).f_NAME, r_NO_TEXT(), 0);
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_733))).f_LO_C, r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NAME), 0);
}
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_B))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_733))).f_HI_C, r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_B))).f_NAME), 0);
}
{ R22 * rv735 = l_N_733;
return rv735; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_XFIX))
{
{ R22 * rv736 = r_XFIX_RANGE(p_T, p_R);
return rv736; }
}
if ((!((((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_R))).f_LINE, rt_str("a range is only for fixed, float and enumerated types (3.12.2)", 62));
}
l_N_733 = r_COPY_TYP(p_T);
S_R9(&((*(R22 *)rt_nil_check(l_N_733))).f_NAME, r_NO_TEXT(), 0);
((*(R22 *)rt_nil_check(l_N_733))).f_RLEVEL = r_CUR_LEVEL();
{
R26 l_LO_737; memset(&l_LO_737, 0, sizeof l_LO_737);
R26 l_HI_738; memset(&l_HI_738, 0, sizeof l_HI_738);
S_R26(&l_LO_737, r_EXPR(((*(R17 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R26(&l_HI_738, r_EXPR(((*(R17 *)rt_nil_check(p_R))).f_B, p_T), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_733))).f_LO_C, (l_LO_737).f_C, 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_733))).f_HI_C, (l_HI_738).f_C, 0);
S_R25(&((*(R22 *)rt_nil_check(l_N_733))).f_MLO, r_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_A), 0);
S_R25(&((*(R22 *)rt_nil_check(l_N_733))).f_MHI, r_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_B), 0);
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
S_R25(&((*(R22 *)rt_nil_check(l_N_733))).f_MLO, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R25(&((*(R22 *)rt_nil_check(l_N_733))).f_MHI, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_B, p_T), 0);
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_737).f_T), r_REAL_TYPE(p_T))) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_738).f_T), r_REAL_TYPE(p_T)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_R))).f_LINE, rt_str("the bounds of a range must be of the class of the type (3.2.1, 3.3.1, 3.4.1)", 76));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_733))).f_LO_C, r_RESCALE(l_LO_737, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R17 *)rt_nil_check(p_R))).f_LINE), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_733))).f_HI_C, r_RESCALE(l_HI_738, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R17 *)rt_nil_check(p_R))).f_LINE), 0);
if ((((!(((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL))) || (!(((*(R22 *)rt_nil_check((l_LO_737).f_T))).f_SCALE == ((rt_int)0LL)))) || (!(((*(R22 *)rt_nil_check((l_HI_738).f_T))).f_SCALE == ((rt_int)0LL)))))
{
S_R25(&((*(R22 *)rt_nil_check(l_N_733))).f_MLO, r_NO_MVAL(), 0);
S_R25(&((*(R22 *)rt_nil_check(l_N_733))).f_MHI, r_NO_MVAL(), 0);
}
}
if (r_IS_D(p_T))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_733))).f_LO_C, r_AS_D(l_LO_737), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_733))).f_HI_C, r_AS_D(l_HI_738), 0);
}
}
if (((((*(R17 *)rt_nil_check(p_R))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(p_R))).f_IV == ((rt_int)3LL))))
{
if (r_IS_D(p_T))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_733))).f_LO_C, r_FMT1(rt_str("rt_b_dnext(@, 1)", 16), ((*(R22 *)rt_nil_check(l_N_733))).f_LO_C), 0);
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_733))).f_LO_C, r_FMT1(rt_str("nextafter(@, INFINITY)", 22), ((*(R22 *)rt_nil_check(l_N_733))).f_LO_C), 0);
}
else
{
S_R9(&((*(R22 *)rt_nil_check(l_N_733))).f_LO_C, r_FMT1(rt_str("((@) + 1)", 9), ((*(R22 *)rt_nil_check(l_N_733))).f_LO_C), 0);
(((*(R22 *)rt_nil_check(l_N_733))).f_MLO).f_V = rt_add((((*(R22 *)rt_nil_check(l_N_733))).f_MLO).f_V, ((rt_int)1LL));
}
}
if ((((*(R17 *)rt_nil_check(p_R))).f_IV >= ((rt_int)2LL)))
{
if (r_IS_D(p_T))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_733))).f_HI_C, r_FMT1(rt_str("rt_b_dnext(@, 0)", 16), ((*(R22 *)rt_nil_check(l_N_733))).f_HI_C), 0);
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_733))).f_HI_C, r_FMT1(rt_str("nextafter(@, -INFINITY)", 23), ((*(R22 *)rt_nil_check(l_N_733))).f_HI_C), 0);
}
else
{
S_R9(&((*(R22 *)rt_nil_check(l_N_733))).f_HI_C, r_FMT1(rt_str("((@) - 1)", 9), ((*(R22 *)rt_nil_check(l_N_733))).f_HI_C), 0);
(((*(R22 *)rt_nil_check(l_N_733))).f_MHI).f_V = rt_sub((((*(R22 *)rt_nil_check(l_N_733))).f_MHI).f_V, ((rt_int)1LL));
}
}
{ R22 * rv739 = l_N_733;
return rv739; }
rt_raise(RT_X_INIT);
}
static R25 r_ENUM_MANIFEST(R17 * p_E, R22 * p_T) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{
R12 * l_Y_740; memset(&l_Y_740, 0, sizeof l_Y_740);
l_Y_740 = r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, p_T);
if ((!(l_Y_740 == NULL)))
{
{ R25 rv741 = r_SOME(((*(R12 *)rt_nil_check(l_Y_740))).f_MV);
return rv741; }
}
}
}
{ R25 rv742 = r_MANIFEST(p_E);
return rv742; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_LEVEL(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_CS == NULL))
{
{ rt_int rv743 = ((rt_int)0LL);
return rv743; }
}
{ rt_int rv744 = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
return rv744; }
rt_raise(RT_X_INIT);
}
static R22 * r_ARG_TYPE(R17 * p_N) { RT_B_TICK(); 
{ R22 * rv745 = r_RESOLVE(r_EXPR_TO_TS(p_N));
return rv745; }
rt_raise(RT_X_INIT);
}
static R17 * r_NTH_ARG(R17 * p_TS, rt_int p_K) { RT_B_TICK(); 
R17 * l_A_746; memset(&l_A_746, 0, sizeof l_A_746);
l_A_746 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
{ rt_int it748_lo = ((rt_int)1LL), it748_hi = p_K;
for (rt_int it748 = it748_lo; it748 <= it748_hi; it748++) {
{
if ((l_A_746 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
l_A_746 = ((*(R17 *)rt_nil_check(l_A_746))).f_NEXT;
}
RT_B_TICK();
if (it748 == it748_hi) break;
} } L_end747: ;
if ((l_A_746 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
{ R17 * rv749 = l_A_746;
return rv749; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_NAMED(R17 * p_TS, R9 p_CNAME) { RT_B_TICK(); 
R22 * l_T_750; memset(&l_T_750, 0, sizeof l_T_750);
rt_int l_K_751; memset(&l_K_751, 0, sizeof l_K_751);
l_K_751 = ((*(R17 *)rt_nil_check(p_TS))).f_KIND;
if ((l_K_751 == g_TS_ARRAY))
{
{ R22 * rv752 = r_RESOLVE_ARRAY(p_TS);
return rv752; }
}
else if ((l_K_751 == g_TS_RECORD))
{
{ R22 * rv753 = r_RESOLVE_RECORD(p_TS, p_CNAME, NULL, NULL);
return rv753; }
}
else if ((l_K_751 == g_TS_ENUM))
{
l_T_750 = r_ENUM_CLASS(((*(R17 *)rt_nil_check(p_TS))).f_A, (((*(R17 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)), ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
if (((((*(R17 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("an UNORDERED type has no range", 30));
}
l_T_750 = r_WITH_RANGE(l_T_750, ((*(R17 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_750 = r_APPLY_REP(l_T_750, ((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv754 = l_T_750;
return rv754; }
}
else if ((l_K_751 == g_TS_GEN))
{
{ R22 * rv755 = r_GEN_TYPE(p_TS);
return rv755; }
}
else if ((!(l_K_751 == g_TS_NAME)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a type specification expected", 29));
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_FL == ((rt_int)3LL)))
{
l_T_750 = r_WITH_RANGE(r_TYPE_ATTR_TYPE(((*(R17 *)rt_nil_check(p_TS))).f_E), ((*(R17 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_750 = r_APPLY_REP(l_T_750, ((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv756 = l_T_750;
return rv756; }
}
l_T_750 = r_RESOLVE_PREDEFINED(p_TS);
if ((l_T_750 == NULL))
{
l_T_750 = r_RESOLVE_USER(p_TS);
}
l_T_750 = r_WITH_RANGE(l_T_750, ((*(R17 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_750 = r_APPLY_REP(l_T_750, ((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv757 = l_T_750;
return rv757; }
rt_raise(RT_X_INIT);
}
static R22 * r_APPLY_REP(R22 * p_T0, R17 * p_R0, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_758; memset(&l_T_758, 0, sizeof l_T_758);
l_T_758 = r_COPY_TYP(p_T0);
if ((((*(R22 *)rt_nil_check(p_T0))).f_KIND == g_T_ABS))
{
r_FAIL(p_LINE, rt_str("a REP clause is only for a member of a predefined type class (3.12.2)", 69));
}
((*(R22 *)rt_nil_check(l_T_758))).f_REPS = r_EXPAND_REP(p_R0, p_T0, p_LINE);
r_CHECK_REP_CLASS(l_T_758, p_LINE);
if ((((*(R22 *)rt_nil_check(l_T_758))).f_KIND == g_T_ENUM))
{
r_CHECK_ENUM_REP(l_T_758, p_LINE);
}
else if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_758))).f_REPS))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("ENUM_VAL_REP is only for UNORDERED types (3.4.3)", 48));
}
{ R22 * rv759 = l_T_758;
return rv759; }
rt_raise(RT_X_INIT);
}
static R17 * r_EXPAND_REP(R17 * p_R, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_760; memset(&l_Y_760, 0, sizeof l_Y_760);
if ((p_R == NULL))
{
{ R17 * rv761 = p_R;
return rv761; }
}
if ((((*(R17 *)rt_nil_check(p_R))).f_KIND == g_TS_GEN))
{
{ R17 * rv762 = p_R;
return rv762; }
}
l_Y_760 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_R))).f_NAME);
if ((l_Y_760 == NULL))
{
{ R17 * rv763 = p_R;
return rv763; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_760))).f_KIND == g_Y_REPTYPE)))
{
{ R17 * rv764 = p_R;
return rv764; }
}
if (((*(R12 *)rt_nil_check(l_Y_760))).f_BUSY)
{
r_FAILT(p_LINE, rt_str("a circular reptype declaration (3.12.3): ", 41), ((*(R17 *)rt_nil_check(p_R))).f_NAME);
}
{
R17 * l_D_765; memset(&l_D_765, 0, sizeof l_D_765);
l_D_765 = ((*(R12 *)rt_nil_check(l_Y_760))).f_DECL;
R17 * l_X_766; memset(&l_X_766, 0, sizeof l_X_766);
l_X_766 = r_NEW_NODE(g_N_REP, ((*(R17 *)rt_nil_check(p_R))).f_LINE);
R17 * l_HEAD_767; memset(&l_HEAD_767, 0, sizeof l_HEAD_767);
l_HEAD_767 = NULL;
R17 * l_TAIL_768; memset(&l_TAIL_768, 0, sizeof l_TAIL_768);
l_TAIL_768 = NULL;
((*(R12 *)rt_nil_check(l_Y_760))).f_BUSY = 1;
r_OPEN_SCOPE();
if (((!(((*(R17 *)rt_nil_check(l_D_765))).f_A == NULL)) || (!(((*(R17 *)rt_nil_check(p_R))).f_A == NULL))))
{
r_BIND_FORMALS(((*(R17 *)rt_nil_check(l_D_765))).f_A, p_R);
}
if ((!(((*(R17 *)rt_nil_check(l_D_765))).f_C == NULL)))
{
{
R12 * l_B_769; memset(&l_B_769, 0, sizeof l_B_769);
l_B_769 = r_NEW_SYM(g_Y_TYPE, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_765))).f_C))).f_NAME);
((*(R12 *)rt_nil_check(l_B_769))).f_T = p_T;
r_DEFINE(l_B_769, p_LINE);
}
}
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
S_R9(&((*(R17 *)rt_nil_check(l_X_766))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_765))).f_B))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_X_766))).f_B = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_765))).f_B))).f_B;
((*(R17 *)rt_nil_check(l_X_766))).f_C = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_765))).f_B))).f_C;
if (r_TEQS(((*(R17 *)rt_nil_check(l_X_766))).f_NAME, rt_str("RECORD_REP", 10)))
{
l_HEAD_767 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_765))).f_B))).f_A;
}
else
{
{
R17 * l_A_770; memset(&l_A_770, 0, sizeof l_A_770);
l_A_770 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_765))).f_B))).f_A;
for (;;) {
if ((l_A_770 == NULL)) goto L_end771;
{
r_ADD_LIST(r_REP_ARG_VALUE(l_A_770), &l_HEAD_767, &l_TAIL_768);
l_A_770 = ((*(R17 *)rt_nil_check(l_A_770))).f_NEXT;
}
RT_B_TICK();
} L_end771: ;
}
}
((*(R17 *)rt_nil_check(l_X_766))).f_A = l_HEAD_767;
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
r_CLOSE_SCOPE();
l_X_766 = r_EXPAND_REP(l_X_766, p_T, p_LINE);
((*(R12 *)rt_nil_check(l_Y_760))).f_BUSY = 0;
{ R17 * rv772 = l_X_766;
return rv772; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_REP_ARG_VALUE(R17 * p_A) { RT_B_TICK(); 
R17 * l_N_773; memset(&l_N_773, 0, sizeof l_N_773);
R25 l_M_774; memset(&l_M_774, 0, sizeof l_M_774);
if (((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_775; memset(&l_Y_775, 0, sizeof l_Y_775);
l_Y_775 = r_LOOKUP(((*(R17 *)rt_nil_check(p_A))).f_NAME);
if (((l_Y_775 == NULL) || (((!(l_Y_775 == NULL)) && (((*(R12 *)rt_nil_check(l_Y_775))).f_KIND == g_Y_ENUMLIT)))))
{
l_N_773 = r_NEW_NODE(((*(R17 *)rt_nil_check(p_A))).f_KIND, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_773))).f_NAME, ((*(R17 *)rt_nil_check(p_A))).f_NAME, 0);
{ R17 * rv776 = l_N_773;
return rv776; }
}
if (((((*(R12 *)rt_nil_check(l_Y_775))).f_KIND == g_Y_CONST) && (!(((*(R12 *)rt_nil_check(l_Y_775))).f_T == NULL))))
{
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_775))).f_T)))).f_KIND == g_T_ENUM) && ((*(R12 *)rt_nil_check(l_Y_775))).f_HASMV))
{
{
R17 * l_L_777; memset(&l_L_777, 0, sizeof l_L_777);
l_L_777 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_775))).f_T)))).f_BASE))).f_LITS;
rt_int l_I_778; memset(&l_I_778, 0, sizeof l_I_778);
l_I_778 = ((rt_int)0LL);
for (;;) {
if (((l_L_777 == NULL) || (l_I_778 == ((*(R12 *)rt_nil_check(l_Y_775))).f_MV))) goto L_end779;
{
l_I_778 = rt_add(l_I_778, ((rt_int)1LL));
l_L_777 = ((*(R17 *)rt_nil_check(l_L_777))).f_NEXT;
}
RT_B_TICK();
} L_end779: ;
if ((!(l_L_777 == NULL)))
{
l_N_773 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_773))).f_NAME, ((*(R17 *)rt_nil_check(l_L_777))).f_NAME, 0);
{ R17 * rv780 = l_N_773;
return rv780; }
}
}
}
}
}
}
S_R25(&l_M_774, r_MANIFEST(p_A), 0);
if ((!(l_M_774).f_OK))
{
{
R14 l_SAVED_CODE_781; memset(&l_SAVED_CODE_781, 0, sizeof l_SAVED_CODE_781);
S_R14(&l_SAVED_CODE_781, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_782; memset(&l_V_782, 0, sizeof l_V_782);
S_R26(&l_V_782, r_EXPR(p_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_781, 0);
}
{ R17 * rv783 = p_A;
return rv783; }
}
l_N_773 = r_NEW_NODE(g_N_INT, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
if (((l_M_774).f_V < ((rt_int)0LL)))
{
((*(R17 *)rt_nil_check(l_N_773))).f_IV = rt_neg((l_M_774).f_V);
S_R9(&((*(R17 *)rt_nil_check(l_N_773))).f_NAME, r_NUM(rt_neg((l_M_774).f_V)), 0);
{
R17 * l_U_784; memset(&l_U_784, 0, sizeof l_U_784);
l_U_784 = r_NEW_NODE(g_N_UNOP, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_U_784))).f_NAME, r_MK(rt_str("-", 1)), 0);
((*(R17 *)rt_nil_check(l_U_784))).f_A = l_N_773;
{ R17 * rv785 = l_U_784;
return rv785; }
}
}
((*(R17 *)rt_nil_check(l_N_773))).f_IV = (l_M_774).f_V;
S_R9(&((*(R17 *)rt_nil_check(l_N_773))).f_NAME, r_NUM((l_M_774).f_V), 0);
{ R17 * rv786 = l_N_773;
return rv786; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_REP_CLASS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_787; memset(&l_R_787, 0, sizeof l_R_787);
l_R_787 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
rt_int l_K_788; memset(&l_K_788, 0, sizeof l_K_788);
l_K_788 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
rt_int l_OK_789; memset(&l_OK_789, 0, sizeof l_OK_789);
l_OK_789 = 0;
if ((((*(R17 *)rt_nil_check(l_R_787))).f_KIND == g_TS_GEN))
{
return;
}
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R17 *)rt_nil_check(l_R_787))).f_NAME) == NULL)))
{
return;
}
if ((!(r_LOOKUP(((*(R17 *)rt_nil_check(l_R_787))).f_NAME) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_LOOKUP(((*(R17 *)rt_nil_check(l_R_787))).f_NAME)))).f_KIND == g_Y_GEN))
{
return;
}
}
{
R9 l_N_790; memset(&l_N_790, 0, sizeof l_N_790);
S_R9(&l_N_790, ((*(R17 *)rt_nil_check(l_R_787))).f_NAME, 0);
if ((l_K_788 == g_T_INT))
{
l_OK_789 = (r_TEQS(l_N_790, rt_str("FIXED_STD", 9)) || r_TEQS(l_N_790, rt_str("FIXED_REP", 9)));
}
else if ((l_K_788 == g_T_FLOAT))
{
l_OK_789 = r_TEQS(l_N_790, rt_str("FLOAT_STD", 9));
}
else if ((l_K_788 == g_T_BOOL))
{
l_OK_789 = r_TEQS(l_N_790, rt_str("BOOLEAN_STD", 11));
}
else if ((l_K_788 == g_T_ENUM))
{
l_OK_789 = ((r_TEQS(l_N_790, rt_str("ENUM_STD", 8)) || r_TEQS(l_N_790, rt_str("ENUM_REP", 8))) || r_TEQS(l_N_790, rt_str("ENUM_VAL_REP", 12)));
}
else if ((l_K_788 == g_T_STR))
{
l_OK_789 = (r_TEQS(l_N_790, rt_str("CHAR_STR_STD", 12)) || r_TEQS(l_N_790, rt_str("CHAR_STR_REP", 12)));
}
else if ((l_K_788 == g_T_BITS))
{
l_OK_789 = r_TEQS(l_N_790, rt_str("BIT_STD", 7));
}
else if ((l_K_788 == g_T_ARR))
{
l_OK_789 = (r_TEQS(l_N_790, rt_str("ARRAY_STD", 9)) || r_TEQS(l_N_790, rt_str("ARRAY_REP", 9)));
}
else if ((l_K_788 == g_T_REC))
{
l_OK_789 = (r_TEQS(l_N_790, rt_str("RECORD_STD", 10)) || r_TEQS(l_N_790, rt_str("RECORD_REP", 10)));
}
else if ((l_K_788 == g_T_PTR))
{
l_OK_789 = r_TEQS(l_N_790, rt_str("PTR_STD", 7));
}
else if ((l_K_788 == g_T_SEM))
{
l_OK_789 = r_TEQS(l_N_790, rt_str("SEMAPHORE_STD", 13));
}
else if ((l_K_788 == g_T_TYPE))
{
l_OK_789 = 1;
}
if ((!l_OK_789))
{
r_FAILT(p_LINE, rt_str("the representation does not suit the type class (3.12.4): ", 58), l_N_790);
}
if (r_TEQS(l_N_790, rt_str("FIXED_REP", 9)))
{
r_CHECK_FIXED_REP(p_T, p_LINE);
}
}
}
static rt_int r_POW2(rt_int p_N) { RT_B_TICK(); 
rt_int l_P_791; memset(&l_P_791, 0, sizeof l_P_791);
l_P_791 = ((rt_int)1LL);
{ rt_int it793_lo = ((rt_int)1LL), it793_hi = p_N;
for (rt_int it793 = it793_lo; it793 <= it793_hi; it793++) {
{
l_P_791 = rt_mul(l_P_791, ((rt_int)2LL));
}
RT_B_TICK();
if (it793 == it793_hi) break;
} } L_end792: ;
{ rt_int rv794 = l_P_791;
return rv794; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_795; memset(&l_R_795, 0, sizeof l_R_795);
l_R_795 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
rt_int l_UNSIGNED_796; memset(&l_UNSIGNED_796, 0, sizeof l_UNSIGNED_796);
l_UNSIGNED_796 = 0;
if ((((*(R17 *)rt_nil_check(l_R_795))).f_A == NULL))
{
r_FAIL(p_LINE, rt_str("FIXED_REP takes a size and a signing (3.2.3 [3-55])", 51));
}
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_795))).f_A))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_795))).f_A))).f_KIND == g_N_DONTCARE)))
{
return;
}
{
R25 l_N_797; memset(&l_N_797, 0, sizeof l_N_797);
S_R25(&l_N_797, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_795))).f_A), 0);
if ((!(l_N_797).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of FIXED_REP is a manifest integer (3.2.3 [3-56])", 58));
}
if ((((l_N_797).f_V < ((rt_int)0LL)) || ((l_N_797).f_V > ((*(R7 *)rt_nil_check(g_W))).f_WORD)))
{
r_FAIL(p_LINE, rt_str("the size of FIXED_REP is in [0:P], P the default size (3.2.3)", 61));
}
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_795))).f_A))).f_NEXT == NULL)))
{
{
R17 * l_S_798; memset(&l_S_798, 0, sizeof l_S_798);
l_S_798 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_795))).f_A))).f_NEXT;
if (((((*(R17 *)rt_nil_check(l_S_798))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_S_798))).f_KIND == g_N_DONTCARE)))
{
return;
}
if ((!(((((((*(R17 *)rt_nil_check(l_S_798))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_S_798))).f_KIND == g_N_ENUMLIT))) && ((r_TEQS(((*(R17 *)rt_nil_check(l_S_798))).f_NAME, rt_str("SIGNED", 6)) || r_TEQS(((*(R17 *)rt_nil_check(l_S_798))).f_NAME, rt_str("UNSIGNED", 8))))))))
{
r_FAIL(p_LINE, rt_str("the signing of FIXED_REP is a manifest value of SIGNING (3.2.3 [3-57])", 70));
}
l_UNSIGNED_796 = r_TEQS(((*(R17 *)rt_nil_check(l_S_798))).f_NAME, rt_str("UNSIGNED", 8));
if ((!(((*(R17 *)rt_nil_check(l_S_798))).f_NEXT == NULL)))
{
r_FAIL(p_LINE, rt_str("FIXED_REP takes a size and a signing (3.2.3 [3-55])", 51));
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_REPCONV)
{
return;
}
if (l_UNSIGNED_796)
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
if ((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) && ((l_N_797).f_V < ((*(R7 *)rt_nil_check(g_W))).f_WORD)))
{
r_FAIL(p_LINE, rt_str("the range of the type exceeds what the size of FIXED_REP represents (3.2.3)", 75));
}
if (((((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK) && ((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN > ((rt_int)0LL))) && ((l_N_797).f_V < ((rt_int)63LL))))
{
{
rt_int l_LO_799; memset(&l_LO_799, 0, sizeof l_LO_799);
l_LO_799 = ((rt_int)0LL);
rt_int l_HI_800; memset(&l_HI_800, 0, sizeof l_HI_800);
l_HI_800 = ((rt_int)0LL);
if (l_UNSIGNED_796)
{
l_HI_800 = rt_sub(r_POW2((l_N_797).f_V), ((rt_int)1LL));
}
else if (((l_N_797).f_V > ((rt_int)0LL)))
{
l_LO_799 = rt_neg(r_POW2(rt_sub((l_N_797).f_V, ((rt_int)1LL))));
l_HI_800 = rt_sub(r_POW2(rt_sub((l_N_797).f_V, ((rt_int)1LL))), ((rt_int)1LL));
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_V < l_LO_799) || ((((*(R22 *)rt_nil_check(p_T))).f_MHI).f_V > l_HI_800)))
{
r_FAIL(p_LINE, rt_str("the range of the type exceeds what the size of FIXED_REP represents (3.2.3)", 75));
}
}
}
}
}
static R22 * r_TYPE_ATTR_TYPE(R17 * p_E) { RT_B_TICK(); 
R22 * l_T_801; memset(&l_T_801, 0, sizeof l_T_801);
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type-valued attribute expected", 32));
}
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_IS_TYPE_ATTR(((*(R17 *)rt_nil_check(p_E))).f_A)))
{
l_T_801 = r_TYPE_ATTR_TYPE(((*(R17 *)rt_nil_check(p_E))).f_A);
}
else
{
{
R14 l_SAVED_CODE_802; memset(&l_SAVED_CODE_802, 0, sizeof l_SAVED_CODE_802);
S_R14(&l_SAVED_CODE_802, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
l_T_801 = (r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(p_E))).f_A)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_802, 0);
}
}
{
R22 * l_R_803; memset(&l_R_803, 0, sizeof l_R_803);
l_R_803 = r_REAL_TYPE(l_T_801);
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)))
{
if ((((*(R22 *)rt_nil_check(l_R_803))).f_KIND == g_T_ARR))
{
{ R22 * rv804 = ((*(R22 *)rt_nil_check(l_R_803))).f_ELEM;
return rv804; }
}
else if ((((*(R22 *)rt_nil_check(l_R_803))).f_KIND == g_T_PTR))
{
{ R22 * rv805 = r_TARGET(l_R_803);
return rv805; }
}
}
else if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7)) && (((*(R22 *)rt_nil_check(l_R_803))).f_KIND == g_T_STR)))
{
{ R22 * rv806 = r_CHARSET_OF(l_R_803);
return rv806; }
}
if ((((*(R22 *)rt_nil_check(l_R_803))).f_KIND == g_T_REC))
{
{
R12 * l_C_807; memset(&l_C_807, 0, sizeof l_C_807);
l_C_807 = r_RECORD_CLASS_OF(l_R_803);
if ((!(l_C_807 == NULL)))
{
{
R21 * l_B_808; memset(&l_B_808, 0, sizeof l_B_808);
l_B_808 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_807))).f_BINDINGS, ((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_808 == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(l_B_808))).f_T == NULL)))
{
{ R22 * rv809 = ((*(R21 *)rt_nil_check(l_B_808))).f_T;
return rv809; }
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
{ rt_int rv810 = 0;
return rv810; }
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7))))
{
{ rt_int rv811 = 1;
return rv811; }
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_812; memset(&l_Y_812, 0, sizeof l_Y_812);
l_Y_812 = r_LOOKUP(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME);
if ((!(l_Y_812 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_812))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_812))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_812))).f_T == NULL))))
{
{
R22 * l_R_813; memset(&l_R_813, 0, sizeof l_R_813);
l_R_813 = r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_812))).f_T);
if ((((*(R22 *)rt_nil_check(l_R_813))).f_KIND == g_T_REC))
{
{
R12 * l_C_814; memset(&l_C_814, 0, sizeof l_C_814);
l_C_814 = r_RECORD_CLASS_OF(l_R_813);
if ((!(l_C_814 == NULL)))
{
if ((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_814))).f_BINDINGS, ((*(R17 *)rt_nil_check(p_E))).f_NAME) == NULL)))
{
{ rt_int rv815 = 1;
return rv815; }
}
}
}
}
}
}
}
}
}
{ rt_int rv816 = 0;
return rv816; }
rt_raise(RT_X_INIT);
}
static R22 * r_GEN_TYPE(R17 * p_TS) { RT_B_TICK(); 
R21 * l_B_817; memset(&l_B_817, 0, sizeof l_B_817);
l_B_817 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_817 == NULL)) goto L_end818;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_817))).f_NAME, ((*(R17 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R21 *)rt_nil_check(l_B_817))).f_T == NULL))))
{
{ R22 * rv819 = ((*(R21 *)rt_nil_check(l_B_817))).f_T;
return rv819; }
}
l_B_817 = ((*(R21 *)rt_nil_check(l_B_817))).f_NEXT;
}
RT_B_TICK();
} L_end818: ;
{
R12 * l_Y_820; memset(&l_Y_820, 0, sizeof l_Y_820);
l_Y_820 = r_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_820 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_820))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_820))).f_T == NULL))))
{
{ R22 * rv821 = ((*(R12 *)rt_nil_check(l_Y_820))).f_T;
return rv821; }
}
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a derived generic type outside a formal parameter list: \?", 57), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_PREDEFINED(R17 * p_TS) { RT_B_TICK(); 
R9 l_NAME_822; memset(&l_NAME_822, 0, sizeof l_NAME_822);
S_R9(&l_NAME_822, ((*(R17 *)rt_nil_check(p_TS))).f_NAME, 0);
R22 * l_T_823; memset(&l_T_823, 0, sizeof l_T_823);
if (r_TEQS(l_NAME_822, rt_str("FIXED", 5)))
{
{
R25 l_S_824; memset(&l_S_824, 0, sizeof l_S_824);
S_R25(&l_S_824, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R25 l_R_825; memset(&l_R_825, 0, sizeof l_R_825);
S_R25(&l_R_825, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
R17 * l_P_826; memset(&l_P_826, 0, sizeof l_P_826);
l_P_826 = r_NTH_ARG(p_TS, ((rt_int)2LL));
r_TYPE_ARG_COUNT(p_TS, ((rt_int)3LL));
r_CHECK_PRECISION_ARG(l_P_826, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
{
rt_int l_PO_827; memset(&l_PO_827, 0, sizeof l_PO_827);
l_PO_827 = r_PRECISION_ORD(l_P_826);
if (((!((l_R_825).f_V == ((rt_int)2LL))) || (!(l_PO_827 == r_STD_ORD()))))
{
l_T_823 = r_NEW_TYP(g_T_XFIX);
((*(R22 *)rt_nil_check(l_T_823))).f_SCALE = (l_S_824).f_V;
((*(R22 *)rt_nil_check(l_T_823))).f_RADIX = (l_R_825).f_V;
((*(R22 *)rt_nil_check(l_T_823))).f_PREC = l_PO_827;
{ R22 * rv828 = l_T_823;
return rv828; }
}
}
if (((l_S_824).f_V == ((rt_int)0LL)))
{
{ R22 * rv829 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv829; }
}
l_T_823 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_823))).f_SCALE = (l_S_824).f_V;
{ R22 * rv830 = l_T_823;
return rv830; }
}
}
else if (r_TEQS(l_NAME_822, rt_str("FLOAT", 5)))
{
{
R25 l_P_831; memset(&l_P_831, 0, sizeof l_P_831);
S_R25(&l_P_831, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
l_T_823 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_823))).f_SCALE = (l_P_831).f_V;
{ R22 * rv832 = l_T_823;
return rv832; }
}
}
else if (r_TEQS(l_NAME_822, rt_str("BIT", 3)))
{
l_T_823 = r_NEW_TYP(g_T_BITS);
r_STRING_LENGTH(l_T_823, r_NTH_ARG(p_TS, ((rt_int)0LL)));
{ R22 * rv833 = l_T_823;
return rv833; }
}
else if ((r_TEQS(l_NAME_822, rt_str("CHAR_STR", 8)) || r_TEQS(l_NAME_822, rt_str("ASCII_STR", 9))))
{
l_T_823 = r_NEW_TYP(g_T_STR);
r_STRING_LENGTH(l_T_823, r_NTH_ARG(p_TS, ((rt_int)0LL)));
((*(R22 *)rt_nil_check(l_T_823))).f_BASE = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
if (r_TEQS(l_NAME_822, rt_str("CHAR_STR", 8)))
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)2LL));
{
R17 * l_CS_834; memset(&l_CS_834, 0, sizeof l_CS_834);
l_CS_834 = r_NTH_ARG(p_TS, ((rt_int)1LL));
R22 * l_C_835; memset(&l_C_835, 0, sizeof l_C_835);
if (((((*(R17 *)rt_nil_check(l_CS_834))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_CS_834))).f_KIND == g_N_DONTCARE)))
{
((*(R22 *)rt_nil_check(l_T_823))).f_BASE = NULL;
{ R22 * rv836 = l_T_823;
return rv836; }
}
if (((((*(R17 *)rt_nil_check(l_CS_834))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(l_CS_834))).f_NAME, rt_str("CHARSET", 7))))
{
{
R14 l_SAVED_CODE_837; memset(&l_SAVED_CODE_837, 0, sizeof l_SAVED_CODE_837);
S_R14(&l_SAVED_CODE_837, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_838; memset(&l_V_838, 0, sizeof l_V_838);
S_R26(&l_V_838, r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(l_CS_834))).f_A), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_837, 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_838).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("CHARSET is an attribute of character strings (3.7.1)", 52));
}
((*(R22 *)rt_nil_check(l_T_823))).f_BASE = r_CHARSET_OF((l_V_838).f_T);
}
{ R22 * rv839 = l_T_823;
return rv839; }
}
l_C_835 = r_REAL_TYPE(r_ARG_TYPE(l_CS_834));
if ((!(((*(R22 *)rt_nil_check(l_C_835))).f_KIND == g_T_ENUM)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset must be an enumerated type (3.7.1)", 44));
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_835))).f_BASE))).f_UNORDERED || (!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_835))).f_BASE))).f_LITS))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset is an ordered enumerated type with a literal \\'C' (3.7.1, 3.7.2)", 74));
}
((*(R22 *)rt_nil_check(l_T_823))).f_BASE = ((*(R22 *)rt_nil_check(l_C_835))).f_BASE;
}
}
else
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
}
{ R22 * rv840 = l_T_823;
return rv840; }
}
else if (r_TEQS(l_NAME_822, rt_str("PTR", 3)))
{
l_T_823 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_T_823))).f_TARGET_TS = r_NTH_ARG(p_TS, ((rt_int)0LL));
{ R22 * rv841 = l_T_823;
return rv841; }
}
else if (r_TEQS(l_NAME_822, rt_str("SEMAPHORE", 9)))
{
l_T_823 = r_NEW_TYP(g_T_SEM);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
{
R17 * l_U_842; memset(&l_U_842, 0, sizeof l_U_842);
l_U_842 = r_NTH_ARG(p_TS, ((rt_int)0LL));
R22 * l_UT_843; memset(&l_UT_843, 0, sizeof l_UT_843);
l_UT_843 = r_RESOLVE_USER_NAME(r_MK(rt_str("USAGE", 5)), ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
R25 l_M_844; memset(&l_M_844, 0, sizeof l_M_844);
S_R25(&l_M_844, r_NO_MVAL(), 0);
if (((((*(R17 *)rt_nil_check(l_U_842))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_U_842))).f_KIND == g_N_DONTCARE)))
{
S_R25(&l_M_844, r_SOME(((rt_int)0LL)), 0);
}
else if (((((((*(R17 *)rt_nil_check(l_U_842))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_U_842))).f_KIND == g_N_ENUMLIT))) && (!(r_FIND_LITERAL(((*(R17 *)rt_nil_check(l_U_842))).f_NAME, l_UT_843) == NULL))))
{
S_R25(&l_M_844, r_ENUM_MANIFEST(l_U_842, l_UT_843), 0);
}
else
{
{
R14 l_SAVED_CODE_845; memset(&l_SAVED_CODE_845, 0, sizeof l_SAVED_CODE_845);
S_R14(&l_SAVED_CODE_845, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_846; memset(&l_V_846, 0, sizeof l_V_846);
S_R26(&l_V_846, r_EXPR(l_U_842, l_UT_843), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_845, 0);
if (r_SAME_CLASS(r_REAL_TYPE((l_V_846).f_T), r_REAL_TYPE(l_UT_843)))
{
S_R25(&l_M_844, r_MANIFEST(l_U_842), 0);
}
}
}
if ((!(l_M_844).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("the use mode is a manifest value of USAGE, SYNCH or REGION (3.11.1)", 67));
}
((*(R22 *)rt_nil_check(l_T_823))).f_SCALE = (l_M_844).f_V;
}
{ R22 * rv847 = l_T_823;
return rv847; }
}
{ R22 * rv848 = NULL;
return rv848; }
rt_raise(RT_X_INIT);
}
static void r_TYPE_ARG_COUNT(R17 * p_TS, rt_int p_N) { RT_B_TICK(); 
if ((!(r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_TS))).f_A) == p_N)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("the wrong number of arguments for the type ", 43), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
}
static R25 r_MANIFEST_INTEGER_ARG(R17 * p_A, rstr p_WHAT, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
R25 l_M_849; memset(&l_M_849, 0, sizeof l_M_849);
S_R25(&l_M_849, r_MANIFEST(p_A), 0);
if ((!(l_M_849).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" must be manifest (3.2.1, 3.3.1)", 32)));
}
if ((((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) && (!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))) && (!r_BOUND_NAME(p_A))))
{
{
R14 l_SAVED_CODE_850; memset(&l_SAVED_CODE_850, 0, sizeof l_SAVED_CODE_850);
S_R14(&l_SAVED_CODE_850, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R22 * l_T_851; memset(&l_T_851, 0, sizeof l_T_851);
l_T_851 = (r_EXPR(p_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_850, 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_T_851)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_851))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is an integer (3.2.1, 3.3.1)", 29)));
}
}
}
if ((((l_M_849).f_V < p_LO) || ((l_M_849).f_V > p_HI)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is out of the range of the attribute (3.2.1, 3.3.1)", 52)));
}
{ R25 rv852 = l_M_849;
return rv852; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOUND_NAME(R17 * p_A) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv853 = 0;
return rv853; }
}
{ rt_int rv854 = (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R17 *)rt_nil_check(p_A))).f_NAME) == NULL));
return rv854; }
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
R12 * l_Y_855; memset(&l_Y_855, 0, sizeof l_Y_855);
l_Y_855 = r_LOOKUP(((*(R17 *)rt_nil_check(p_P))).f_NAME);
if ((!(l_Y_855 == NULL)))
{
if ((((((*(R12 *)rt_nil_check(l_Y_855))).f_KIND == g_Y_GEN) || (((*(R12 *)rt_nil_check(l_Y_855))).f_KIND == g_Y_CONST)) || (((((*(R12 *)rt_nil_check(l_Y_855))).f_KIND == g_Y_TYPE) && (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R17 *)rt_nil_check(p_P))).f_NAME) == NULL))))))
{
return;
}
}
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R17 *)rt_nil_check(p_P))).f_NAME) == NULL)))
{
return;
}
}
if ((!(r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_P))).f_NAME, r_PRECISIONS_TYPE()) == NULL)))
{
return;
}
}
r_FAIL(p_LINE, rt_str("the precision of a fixed point type is a value of FIXED_PRECISIONS (3.2.1)", 74));
}
static R22 * r_PRECISIONS_TYPE(void) { RT_B_TICK(); 
R12 * l_Y_856; memset(&l_Y_856, 0, sizeof l_Y_856);
l_Y_856 = r_LOOKUP(r_MKN(rt_str("FIXED_PRECISIONS", 16)));
if ((!(l_Y_856 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_856))).f_KIND == g_Y_TYPE))
{
{
R22 * l_T_857; memset(&l_T_857, 0, sizeof l_T_857);
l_T_857 = r_REAL_TYPE(r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_856))).f_NAME, ((rt_int)0LL)));
if ((((*(R22 *)rt_nil_check(l_T_857))).f_KIND == g_T_ENUM))
{
{ R22 * rv858 = l_T_857;
return rv858; }
}
}
}
}
{ R22 * rv859 = NULL;
return rv859; }
rt_raise(RT_X_INIT);
}
static rt_int r_STD_ORD(void) { RT_B_TICK(); 
R22 * l_T_860; memset(&l_T_860, 0, sizeof l_T_860);
l_T_860 = r_PRECISIONS_TYPE();
if ((!(l_T_860 == NULL)))
{
{
R12 * l_Y_861; memset(&l_Y_861, 0, sizeof l_Y_861);
l_Y_861 = r_FIND_LITERAL(r_MKN(rt_str("STD", 3)), l_T_860);
if ((!(l_Y_861 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_861))).f_HASMV)
{
{ rt_int rv862 = ((*(R12 *)rt_nil_check(l_Y_861))).f_MV;
return rv862; }
}
}
}
}
{ rt_int rv863 = ((rt_int)0LL);
return rv863; }
rt_raise(RT_X_INIT);
}
static rt_int r_PRECISION_ORD(R17 * p_P) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_P))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(p_P))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv864 = r_STD_ORD();
return rv864; }
}
if (((((*(R17 *)rt_nil_check(p_P))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_P))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(p_P))).f_NAME, rt_str("STD", 3)))
{
{ rt_int rv865 = r_STD_ORD();
return rv865; }
}
{
R12 * l_Y_866; memset(&l_Y_866, 0, sizeof l_Y_866);
l_Y_866 = r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_P))).f_NAME, r_PRECISIONS_TYPE());
if ((!(l_Y_866 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_866))).f_HASMV && (((*(R12 *)rt_nil_check(l_Y_866))).f_KIND == g_Y_ENUMLIT)))
{
{ rt_int rv867 = ((*(R12 *)rt_nil_check(l_Y_866))).f_MV;
return rv867; }
}
}
}
}
{
R25 l_M_868; memset(&l_M_868, 0, sizeof l_M_868);
S_R25(&l_M_868, r_MANIFEST(p_P), 0);
if ((l_M_868).f_OK)
{
{ rt_int rv869 = (l_M_868).f_V;
return rv869; }
}
}
{ rt_int rv870 = r_STD_ORD();
return rv870; }
rt_raise(RT_X_INIT);
}
static R9 r_PRECISION_NAME(rt_int p_N) { RT_B_TICK(); 
R22 * l_T_871; memset(&l_T_871, 0, sizeof l_T_871);
l_T_871 = r_PRECISIONS_TYPE();
if ((!(l_T_871 == NULL)))
{
{
R17 * l_L_872; memset(&l_L_872, 0, sizeof l_L_872);
l_L_872 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_871))).f_BASE))).f_LITS;
rt_int l_I_873; memset(&l_I_873, 0, sizeof l_I_873);
l_I_873 = ((rt_int)0LL);
for (;;) {
if ((l_L_872 == NULL)) goto L_end874;
{
if ((l_I_873 == p_N))
{
{ R9 rv875 = ((*(R17 *)rt_nil_check(l_L_872))).f_NAME;
return rv875; }
}
l_I_873 = rt_add(l_I_873, ((rt_int)1LL));
l_L_872 = ((*(R17 *)rt_nil_check(l_L_872))).f_NEXT;
}
RT_B_TICK();
} L_end874: ;
}
}
{ R9 rv876 = r_NUM(p_N);
return rv876; }
rt_raise(RT_X_INIT);
}
static rt_int r_XFIX_SIZE(R22 * p_T) { RT_B_TICK(); 
rt_int l_N_877; memset(&l_N_877, 0, sizeof l_N_877);
l_N_877 = ((*(R7 *)rt_nil_check(g_W))).f_WORD;
rt_int l_K_878; memset(&l_K_878, 0, sizeof l_K_878);
l_K_878 = rt_sub(((*(R22 *)rt_nil_check(p_T))).f_PREC, r_STD_ORD());
for (;;) {
if ((l_K_878 == ((rt_int)0LL))) goto L_end879;
{
if ((l_K_878 > ((rt_int)0LL)))
{
l_N_877 = rt_mul(l_N_877, ((rt_int)2LL));
l_K_878 = rt_sub(l_K_878, ((rt_int)1LL));
}
else
{
if ((l_N_877 > ((rt_int)1LL)))
{
l_N_877 = rt_quot(l_N_877, ((rt_int)2LL));
}
l_K_878 = rt_add(l_K_878, ((rt_int)1LL));
}
}
RT_B_TICK();
} L_end879: ;
{ rt_int rv880 = l_N_877;
return rv880; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_ENUM_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_881; memset(&l_R_881, 0, sizeof l_R_881);
l_R_881 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
R9 l_NAME_882; memset(&l_NAME_882, 0, sizeof l_NAME_882);
S_R9(&l_NAME_882, ((*(R17 *)rt_nil_check(l_R_881))).f_NAME, 0);
if ((((*(R17 *)rt_nil_check(l_R_881))).f_KIND == g_TS_GEN))
{
return;
}
if ((r_TEQS(l_NAME_882, rt_str("ENUM_STD", 8)) || (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, l_NAME_882) == NULL))))
{
return;
}
if ((!((r_TEQS(l_NAME_882, rt_str("ENUM_REP", 8)) || r_TEQS(l_NAME_882, rt_str("ENUM_VAL_REP", 12))))))
{
if ((!(r_ORIG_LOOKUP(l_NAME_882) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(l_NAME_882)))).f_KIND == g_Y_REPTYPE))
{
return;
}
}
r_FAILT(p_LINE, rt_str("not a representation of an enumerated type (3.4.3): ", 52), l_NAME_882);
}
if ((((*(R17 *)rt_nil_check(l_R_881))).f_A == NULL))
{
r_FAILT(p_LINE, rt_str("the size of the representation is missing: ", 43), l_NAME_882);
}
{
R25 l_N_883; memset(&l_N_883, 0, sizeof l_N_883);
S_R25(&l_N_883, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_881))).f_A), 0);
rt_int l_NL_884; memset(&l_NL_884, 0, sizeof l_NL_884);
l_NL_884 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS;
if ((!(l_N_883).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is manifest (3.4.3)", 60));
}
if ((((l_N_883).f_V > ((rt_int)64LL)) || ((l_N_883).f_V < ((rt_int)0LL))))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is in [0:(FIXED.SIZE).MAX] (3.4.3)", 75));
}
if (r_TEQS(l_NAME_882, rt_str("ENUM_REP", 8)))
{
if ((!(((*(R17 *)rt_nil_check(l_R_881))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("VALUES belong to ENUM_VAL_REP (3.4.3)", 37));
}
if (((l_N_883).f_V < r_BITS_FOR(l_NL_884)))
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
R17 * l_L_885; memset(&l_L_885, 0, sizeof l_L_885);
l_L_885 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
for (;;) {
if ((l_L_885 == NULL)) goto L_end886;
{
{
R17 * l_V_887; memset(&l_V_887, 0, sizeof l_V_887);
l_V_887 = ((*(R17 *)rt_nil_check(l_R_881))).f_B;
rt_int l_FOUND_888; memset(&l_FOUND_888, 0, sizeof l_FOUND_888);
l_FOUND_888 = ((rt_int)0LL);
for (;;) {
if ((l_V_887 == NULL)) goto L_end889;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_V_887))).f_NAME, ((*(R17 *)rt_nil_check(l_L_885))).f_NAME))
{
l_FOUND_888 = rt_add(l_FOUND_888, ((rt_int)1LL));
}
l_V_887 = ((*(R17 *)rt_nil_check(l_V_887))).f_NEXT;
}
RT_B_TICK();
} L_end889: ;
if ((!(l_FOUND_888 == ((rt_int)1LL))))
{
r_FAILT(p_LINE, rt_str("VALUES must give every literal once (3.4.3): ", 45), ((*(R17 *)rt_nil_check(l_L_885))).f_NAME);
}
}
l_L_885 = ((*(R17 *)rt_nil_check(l_L_885))).f_NEXT;
}
RT_B_TICK();
} L_end886: ;
}
{
R17 * l_V_890; memset(&l_V_890, 0, sizeof l_V_890);
l_V_890 = ((*(R17 *)rt_nil_check(l_R_881))).f_B;
for (;;) {
if ((l_V_890 == NULL)) goto L_end891;
{
if ((r_FIND_LITERAL(((*(R17 *)rt_nil_check(l_V_890))).f_NAME, ((*(R22 *)rt_nil_check(p_T))).f_BASE) == NULL))
{
r_FAILT(p_LINE, rt_str("not a literal of the type: ", 27), ((*(R17 *)rt_nil_check(l_V_890))).f_NAME);
}
{
R14 l_SAVED_CODE_892; memset(&l_SAVED_CODE_892, 0, sizeof l_SAVED_CODE_892);
S_R14(&l_SAVED_CODE_892, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_B_893; memset(&l_B_893, 0, sizeof l_B_893);
S_R26(&l_B_893, r_EXPR(((*(R17 *)rt_nil_check(l_V_890))).f_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_892, 0);
if ((!(((*(R22 *)rt_nil_check((l_B_893).f_T))).f_KIND == g_T_BITS)))
{
r_FAIL(p_LINE, rt_str("a representation in VALUES is a bitstring (3.4.3)", 49));
}
if ((((*(R22 *)rt_nil_check((l_B_893).f_T))).f_MLEN).f_OK)
{
if ((!((((*(R22 *)rt_nil_check((l_B_893).f_T))).f_MLEN).f_V == (l_N_883).f_V)))
{
r_FAILT(p_LINE, rt_str("the representation must have SIZE bits (3.4.3): ", 48), ((*(R17 *)rt_nil_check(l_V_890))).f_NAME);
}
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_890))).f_A))).f_KIND == g_N_BITS))
{
{
R17 * l_U_894; memset(&l_U_894, 0, sizeof l_U_894);
l_U_894 = ((*(R17 *)rt_nil_check(l_V_890))).f_NEXT;
for (;;) {
if ((l_U_894 == NULL)) goto L_end895;
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_894))).f_A))).f_KIND == g_N_BITS))
{
if (r_TEQ(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_894))).f_A))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_890))).f_A))).f_NAME))
{
r_FAILT(p_LINE, rt_str("two literals have the same representation (3.4.3): ", 51), ((*(R17 *)rt_nil_check(l_U_894))).f_NAME);
}
}
l_U_894 = ((*(R17 *)rt_nil_check(l_U_894))).f_NEXT;
}
RT_B_TICK();
} L_end895: ;
}
}
}
l_V_890 = ((*(R17 *)rt_nil_check(l_V_890))).f_NEXT;
}
RT_B_TICK();
} L_end891: ;
}
}
}
static void r_STRING_LENGTH(R22 * p_T, R17 * p_A) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
{
R21 * l_B_896; memset(&l_B_896, 0, sizeof l_B_896);
l_B_896 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_896 == NULL)) goto L_end897;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_896))).f_NAME, ((*(R17 *)rt_nil_check(p_A))).f_NAME) && ((((*(R21 *)rt_nil_check(l_B_896))).f_C).f_LEN > ((rt_int)0LL))))
{
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, ((*(R21 *)rt_nil_check(l_B_896))).f_C, 0);
S_R25(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, ({ R25 rc898; memset(&rc898, 0, sizeof rc898);  rc898.f_OK = ((*(R21 *)rt_nil_check(l_B_896))).f_HASMV; rc898.f_V = ((*(R21 *)rt_nil_check(l_B_896))).f_MV; rc898; }), 0);
return;
}
l_B_896 = ((*(R21 *)rt_nil_check(l_B_896))).f_NEXT;
}
RT_B_TICK();
} L_end897: ;
}
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_GEN, ((*(R17 *)rt_nil_check(p_A))).f_NAME, 0);
return;
}
else if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return;
}
{
R9 l_C_899; memset(&l_C_899, 0, sizeof l_C_899);
R25 l_M_900; memset(&l_M_900, 0, sizeof l_M_900);
r_ATTR_VALUE(p_A, &l_C_899, &l_M_900);
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, l_C_899, 0);
S_R25(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, l_M_900, 0);
((*(R22 *)rt_nil_check(p_T))).f_RLEVEL = r_CUR_LEVEL();
}
}
static R22 * r_RESOLVE_ARRAY(R17 * p_TS) { RT_B_TICK(); 
R22 * l_T_901; memset(&l_T_901, 0, sizeof l_T_901);
l_T_901 = r_NEW_TYP(g_T_ARR);
R17 * l_R_902; memset(&l_R_902, 0, sizeof l_R_902);
l_R_902 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R28 * l_TAIL_903; memset(&l_TAIL_903, 0, sizeof l_TAIL_903);
l_TAIL_903 = NULL;
for (;;) {
if ((l_R_902 == NULL)) goto L_end904;
{
{
R28 * l_B_905; memset(&l_B_905, 0, sizeof l_B_905);
l_B_905 = ({ R28 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
R26 l_LO_906; memset(&l_LO_906, 0, sizeof l_LO_906);
R26 l_HI_907; memset(&l_HI_907, 0, sizeof l_HI_907);
if (r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_902))).f_A))
{
S_R26(&l_LO_906, r_MKET(r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_902))).f_A))).f_NAME), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_LO_906, r_EXPR(((*(R17 *)rt_nil_check(l_R_902))).f_A, NULL), 0);
}
if (r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_902))).f_B))
{
S_R26(&l_HI_907, r_MKET(r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_902))).f_B))).f_NAME), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_HI_907, r_EXPR(((*(R17 *)rt_nil_check(l_R_902))).f_B, (l_LO_906).f_T), 0);
}
S_R28(&(*(R28 *)rt_nil_check(l_B_905)), ({ R28 rc908; memset(&rc908, 0, sizeof rc908);  S_R9(&rc908.f_LO, (l_LO_906).f_C, 0); S_R9(&rc908.f_HI, (l_HI_907).f_C, 0); S_R25(&rc908.f_MLO, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_902))).f_A), 0); S_R25(&rc908.f_MHI, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_902))).f_B), 0); rc908.f_ANYARG = 0; rc908.f_NEXT = NULL; rc908; }), 0);
if (((!r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_902))).f_A)) && (!r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_902))).f_B))))
{
if ((!r_SAME_CLASS(r_REAL_TYPE((l_LO_906).f_T), r_REAL_TYPE((l_HI_907).f_T))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_902))).f_LINE, rt_str("the bounds of an array-bound are of one type class (3.8.1)", 58));
}
S_R9(&((*(R28 *)rt_nil_check(l_B_905))).f_LO, r_INDEX_OF(l_LO_906, ((*(R17 *)rt_nil_check(l_R_902))).f_LINE), 0);
S_R9(&((*(R28 *)rt_nil_check(l_B_905))).f_HI, r_INDEX_OF(l_HI_907, ((*(R17 *)rt_nil_check(l_R_902))).f_LINE), 0);
}
if (((((*(R22 *)rt_nil_check((l_LO_906).f_T))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check((l_LO_906).f_T))).f_KIND == g_T_ABS)))
{
S_R25(&((*(R28 *)rt_nil_check(l_B_905))).f_MLO, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_R_902))).f_A, (l_LO_906).f_T), 0);
S_R25(&((*(R28 *)rt_nil_check(l_B_905))).f_MHI, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_R_902))).f_B, (l_LO_906).f_T), 0);
if ((!r_TEQ(((*(R28 *)rt_nil_check(l_B_905))).f_LO, (l_LO_906).f_C)))
{
S_R25(&((*(R28 *)rt_nil_check(l_B_905))).f_MLO, r_NO_MVAL(), 0);
S_R25(&((*(R28 *)rt_nil_check(l_B_905))).f_MHI, r_NO_MVAL(), 0);
}
}
else if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_LO_906).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_902))).f_LINE, rt_str("array bounds are integer or enumerated (3.8.1)", 46));
}
if ((l_TAIL_903 == NULL))
{
((*(R22 *)rt_nil_check(l_T_901))).f_BOUNDS = l_B_905;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_903))).f_NEXT = l_B_905;
}
l_TAIL_903 = l_B_905;
((*(R22 *)rt_nil_check(l_T_901))).f_DIMS = rt_add(((*(R22 *)rt_nil_check(l_T_901))).f_DIMS, ((rt_int)1LL));
}
l_R_902 = ((*(R17 *)rt_nil_check(l_R_902))).f_NEXT;
}
RT_B_TICK();
} L_end904: ;
((*(R22 *)rt_nil_check(l_T_901))).f_RLEVEL = r_CUR_LEVEL();
((*(R22 *)rt_nil_check(l_T_901))).f_ELEM = r_RESOLVE(((*(R17 *)rt_nil_check(p_TS))).f_C);
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_901))).f_ELEM))).f_KIND == g_T_ARR))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("ARRAY ... OF ARRAY is forbidden (3.8.1)", 39));
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_D == NULL)))
{
((*(R22 *)rt_nil_check(l_T_901))).f_REPS = r_EXPAND_REP(((*(R17 *)rt_nil_check(p_TS))).f_D, l_T_901, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
r_CHECK_REP_CLASS(l_T_901, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
S_R9(&((*(R22 *)rt_nil_check(l_T_901))).f_CNAME, r_ARRAY_STRUCT(((*(R22 *)rt_nil_check(l_T_901))).f_ELEM, ((*(R22 *)rt_nil_check(l_T_901))).f_DIMS), 0);
{ R22 * rv909 = l_T_901;
return rv909; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER(R17 * p_TS) { RT_B_TICK(); 
R12 * l_Y_910; memset(&l_Y_910, 0, sizeof l_Y_910);
l_Y_910 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((((*(R17 *)rt_nil_check(p_TS))).f_A == NULL))
{
{
R21 * l_B_911; memset(&l_B_911, 0, sizeof l_B_911);
l_B_911 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_911 == NULL)) goto L_end912;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_911))).f_NAME, ((*(R17 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R21 *)rt_nil_check(l_B_911))).f_T == NULL))))
{
if ((!(r_CUR_GENERIC() == NULL)))
{
if ((r_FIND_BIND(((*(R12 *)rt_nil_check(r_CUR_GENERIC()))).f_BINDINGS, ((*(R17 *)rt_nil_check(p_TS))).f_NAME) == l_B_911))
{
{ R22 * rv913 = r_MARK_GENP(((*(R21 *)rt_nil_check(l_B_911))).f_T, ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
return rv913; }
}
}
{ R22 * rv914 = ((*(R21 *)rt_nil_check(l_B_911))).f_T;
return rv914; }
}
l_B_911 = ((*(R21 *)rt_nil_check(l_B_911))).f_NEXT;
}
RT_B_TICK();
} L_end912: ;
}
}
if ((l_Y_910 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_910))).f_KIND == g_Y_GEN))
{
{ R22 * rv915 = r_GEN_TYPE(p_TS);
return rv915; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_910))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((!r_SEG_VISIBLE(l_Y_910, ((*(R17 *)rt_nil_check(p_TS))).f_LINE)))
{
}
if ((((*(R12 *)rt_nil_check(l_Y_910))).f_DECL == NULL))
{
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
{ R22 * rv916 = ((*(R12 *)rt_nil_check(l_Y_910))).f_T;
return rv916; }
}
{
R17 * l_D_917; memset(&l_D_917, 0, sizeof l_D_917);
l_D_917 = ((*(R12 *)rt_nil_check(l_Y_910))).f_DECL;
R22 * l_T_918; memset(&l_T_918, 0, sizeof l_T_918);
if ((((*(R17 *)rt_nil_check(l_D_917))).f_A == NULL))
{
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_910))).f_T == NULL))
{
if (((*(R12 *)rt_nil_check(l_Y_910))).f_BUSY)
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R12 *)rt_nil_check(l_Y_910))).f_BUSY = 1;
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_917))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R12 *)rt_nil_check(l_Y_910))).f_T = r_RESOLVE_RECORD(((*(R17 *)rt_nil_check(l_D_917))).f_B, r_RECORD_NAME(l_Y_910), l_Y_910, NULL);
}
else
{
((*(R12 *)rt_nil_check(l_Y_910))).f_T = r_RESOLVE_IN_DECL(l_Y_910, NULL);
if ((((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_910))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_910))).f_T))).f_KIND == g_T_ENUM))))
{
((*(R12 *)rt_nil_check(l_Y_910))).f_T = r_COPY_TYP(((*(R12 *)rt_nil_check(l_Y_910))).f_T);
}
}
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_910))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_910))).f_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_910))).f_NAME, 0);
}
((*(R12 *)rt_nil_check(l_Y_910))).f_BUSY = 0;
}
l_T_918 = ((*(R12 *)rt_nil_check(l_Y_910))).f_T;
}
else
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_917))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_918 = r_RECORD_INSTANCE(l_Y_910, p_TS);
}
else
{
l_T_918 = r_RESOLVE_IN_DECL(l_Y_910, p_TS);
}
}
{ R22 * rv919 = r_ABSTRACT_VIEW(l_Y_910, l_T_918);
return rv919; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ABSTRACT_VIEW(R12 * p_Y, R22 * p_T) { RT_B_TICK(); 
R22 * l_A_920; memset(&l_A_920, 0, sizeof l_A_920);
if (((((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL) || (!((*(R12 *)rt_nil_check(p_Y))).f_EXPORTED)))
{
{ R22 * rv921 = p_T;
return rv921; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ R22 * rv922 = p_T;
return rv922; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
if (r_EXPORTS_ORDER(p_Y))
{
{ R22 * rv923 = p_T;
return rv923; }
}
l_A_920 = r_COPY_TYP(p_T);
((*(R22 *)rt_nil_check(l_A_920))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_920))).f_DECL = p_Y;
{ R22 * rv924 = l_A_920;
return rv924; }
}
l_A_920 = r_NEW_TYP(g_T_ABS);
((*(R22 *)rt_nil_check(l_A_920))).f_BASE = p_T;
S_R9(&((*(R22 *)rt_nil_check(l_A_920))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R22 *)rt_nil_check(l_A_920))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_920))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_A_920))).f_ARGS = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
{ R22 * rv925 = l_A_920;
return rv925; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTS_ORDER(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv926 = (((((r_EXPORTS_OP(p_Y, rt_str("LESS_THAN_", 10)) && r_EXPORTS_OP(p_Y, rt_str("LESS_EQUAL_", 11))) && r_EXPORTS_OP(p_Y, rt_str("GREATER_THAN_", 13))) && r_EXPORTS_OP(p_Y, rt_str("GREATER_EQUAL_", 14))) && r_EXPORTS_OP(p_Y, rt_str("SUCC", 4))) && r_EXPORTS_OP(p_Y, rt_str("PRED", 4)));
return rv926; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTS_OP(R12 * p_Y, rstr p_OP) { RT_B_TICK(); 
R12 * l_R_927; memset(&l_R_927, 0, sizeof l_R_927);
l_R_927 = ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_MODL))).f_MEMBERS;
for (;;) {
if ((l_R_927 == NULL)) goto L_end928;
{
if ((((((*(R12 *)rt_nil_check(l_R_927))).f_KIND == g_Y_ROUTINE) && ((*(R12 *)rt_nil_check(l_R_927))).f_EXPORTED) && r_TEQ(((*(R12 *)rt_nil_check(l_R_927))).f_PREFIX, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)))
{
if (r_TEQS(r_BASE_NAME(r_ORIGINAL(l_R_927)), p_OP))
{
{ rt_int rv929 = 1;
return rv929; }
}
}
l_R_927 = ((*(R12 *)rt_nil_check(l_R_927))).f_SNEXT;
}
RT_B_TICK();
} L_end928: ;
{ rt_int rv930 = 0;
return rv930; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_UNORDERED(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))
{
{ rt_int rv931 = 0;
return rv931; }
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_UNORDERED)
{
{ rt_int rv932 = 1;
return rv932; }
}
if (((!(((*(R22 *)rt_nil_check(p_T))).f_DECL == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_MODL == NULL))))
{
{ rt_int rv933 = (!r_IN_MODULE(((*(R22 *)rt_nil_check(p_T))).f_MODL));
return rv933; }
}
{ rt_int rv934 = 0;
return rv934; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_P_935; memset(&l_P_935, 0, sizeof l_P_935);
l_P_935 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_935 == NULL)) goto L_end936;
{
if ((l_P_935 == p_M))
{
{ rt_int rv937 = 1;
return rv937; }
}
l_P_935 = ((*(R12 *)rt_nil_check(l_P_935))).f_MODL;
}
RT_B_TICK();
} L_end936: ;
{ rt_int rv938 = 0;
return rv938; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R17 * p_TS) { RT_B_TICK(); 
R17 * l_D_939; memset(&l_D_939, 0, sizeof l_D_939);
l_D_939 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_940; memset(&l_T_940, 0, sizeof l_T_940);
if ((p_TS == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
l_T_940 = r_RESOLVE(((*(R17 *)rt_nil_check(l_D_939))).f_B);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
{ R22 * rv941 = l_T_940;
return rv941; }
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R17 *)rt_nil_check(l_D_939))).f_A, p_TS);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
l_T_940 = r_RESOLVE(((*(R17 *)rt_nil_check(l_D_939))).f_B);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
r_CLOSE_SCOPE();
{ R22 * rv942 = l_T_940;
return rv942; }
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R17 * p_FORMALS, R17 * p_TS) { RT_B_TICK(); 
R17 * l_F_943; memset(&l_F_943, 0, sizeof l_F_943);
l_F_943 = p_FORMALS;
R17 * l_A_944; memset(&l_A_944, 0, sizeof l_A_944);
l_A_944 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_943 == NULL)) goto L_end945;
{
{
R17 * l_N_946; memset(&l_N_946, 0, sizeof l_N_946);
l_N_946 = ((*(R17 *)rt_nil_check(l_F_943))).f_A;
for (;;) {
if ((l_N_946 == NULL)) goto L_end947;
{
if ((l_A_944 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R17 *)rt_nil_check(l_F_943))).f_B == NULL))
{
{
R12 * l_Y_948; memset(&l_Y_948, 0, sizeof l_Y_948);
l_Y_948 = r_NEW_SYM(g_Y_TYPE, ((*(R17 *)rt_nil_check(l_N_946))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_948))).f_T = r_ARG_TYPE(l_A_944);
r_DEFINE(l_Y_948, ((*(R17 *)rt_nil_check(l_A_944))).f_LINE);
}
}
else
{
{
R12 * l_Y_949; memset(&l_Y_949, 0, sizeof l_Y_949);
l_Y_949 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(l_N_946))).f_NAME);
R9 l_C_950; memset(&l_C_950, 0, sizeof l_C_950);
R25 l_M_951; memset(&l_M_951, 0, sizeof l_M_951);
((*(R12 *)rt_nil_check(l_Y_949))).f_T = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_943))).f_B);
if (((((*(R17 *)rt_nil_check(l_A_944))).f_KIND == g_N_ANY) && (!(((*(R17 *)rt_nil_check(l_F_943))).f_IV == ((rt_int)1LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_944))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
if ((((*(R17 *)rt_nil_check(l_A_944))).f_KIND == g_N_ANY))
{
S_R9(&l_C_950, r_MK(rt_str("ANY", 3)), 0);
S_R25(&l_M_951, r_NO_MVAL(), 0);
}
else if (((((*(R17 *)rt_nil_check(l_A_944))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_A_944))).f_KIND == g_N_DONTCARE)))
{
S_R9(&l_C_950, r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(l_A_944))).f_NAME), 0);
S_R25(&l_M_951, r_NO_MVAL(), 0);
}
else
{
r_ATTR_VALUE(l_A_944, &l_C_950, &l_M_951);
}
if (((((l_M_951).f_OK && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_949))).f_T))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_949))).f_T))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_949))).f_T))).f_SCALE == ((rt_int)0LL))))
{
if ((((l_M_951).f_V < (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_949))).f_T))).f_MLO).f_V) || ((l_M_951).f_V > (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_949))).f_T))).f_MHI).f_V)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_944))).f_LINE, rt_str("the argument is outside the range of the type formal (3.12.2)", 61));
}
}
if ((((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_949))).f_T))).f_KIND == g_T_INT)) && (!r_IS_GEN_TEXT(l_C_950))) && (!(((*(R17 *)rt_nil_check(l_A_944))).f_KIND == g_N_ANY))))
{
S_R9(&l_C_950, (r_EXPR(l_A_944, ((*(R12 *)rt_nil_check(l_Y_949))).f_T)).f_C, 0);
S_R25(&l_M_951, r_ENUM_MANIFEST(l_A_944, ((*(R12 *)rt_nil_check(l_Y_949))).f_T), 0);
}
S_R9(&((*(R12 *)rt_nil_check(l_Y_949))).f_ACCESS, l_C_950, 0);
((*(R12 *)rt_nil_check(l_Y_949))).f_HASMV = (l_M_951).f_OK;
((*(R12 *)rt_nil_check(l_Y_949))).f_MV = (l_M_951).f_V;
((*(R12 *)rt_nil_check(l_Y_949))).f_INPUT = 1;
r_DEFINE(l_Y_949, ((*(R17 *)rt_nil_check(l_A_944))).f_LINE);
}
}
l_A_944 = ((*(R17 *)rt_nil_check(l_A_944))).f_NEXT;
l_N_946 = ((*(R17 *)rt_nil_check(l_N_946))).f_NEXT;
}
RT_B_TICK();
} L_end947: ;
}
l_F_943 = ((*(R17 *)rt_nil_check(l_F_943))).f_NEXT;
}
RT_B_TICK();
} L_end945: ;
if ((!(l_A_944 == NULL)))
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
{ R9 rv952 = ((*(R12 *)rt_nil_check(p_Y))).f_FWD;
return rv952; }
rt_raise(RT_X_INIT);
}
static R22 * r_TARGET(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS);
}
{ R22 * rv953 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET;
return rv953; }
rt_raise(RT_X_INIT);
}
static R9 r_CTYPE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_954; memset(&l_K_954, 0, sizeof l_K_954);
l_K_954 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
{ R9 rv955 = r_MK(rt_str("rt_int", 6));
return rv955; }
}
else if ((l_K_954 == g_T_FLOAT))
{
if (r_IS_D(p_T))
{
{ R9 rv956 = r_MK(rt_str("rt_b_d", 6));
return rv956; }
}
{ R9 rv957 = r_MK(rt_str("double", 6));
return rv957; }
}
else if ((((l_K_954 == g_T_STR) || (l_K_954 == g_T_BITS)) || (l_K_954 == g_T_XFIX)))
{
{ R9 rv958 = r_MK(rt_str("rstr", 4));
return rv958; }
}
else if (((l_K_954 == g_T_REC) || (l_K_954 == g_T_ARR)))
{
{ R9 rv959 = ((*(R22 *)rt_nil_check(p_T))).f_CNAME;
return rv959; }
}
else if ((l_K_954 == g_T_ABS))
{
{ R9 rv960 = r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv960; }
}
else if ((l_K_954 == g_T_SEM))
{
{ R9 rv961 = r_MK(rt_str("rt_b_sem *", 10));
return rv961; }
}
else if ((l_K_954 == g_T_PATHS))
{
{ R9 rv962 = r_MK(rt_str("rt_b_paths", 10));
return rv962; }
}
else if ((l_K_954 == g_T_VOID))
{
{ R9 rv963 = r_MK(rt_str("void", 4));
return rv963; }
}
else if ((l_K_954 == g_T_PTR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R17 * l_TT_964; memset(&l_TT_964, 0, sizeof l_TT_964);
l_TT_964 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R17 *)rt_nil_check(l_TT_964))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(l_TT_964))).f_A == NULL)))
{
{
R12 * l_Y_965; memset(&l_Y_965, 0, sizeof l_Y_965);
l_Y_965 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(l_TT_964))).f_NAME);
if ((!(l_Y_965 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_965))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_965))).f_DECL == NULL))))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_965))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_965))).f_DECL))).f_A == NULL)))
{
{ R9 rv966 = r_CATS(r_RECORD_NAME(l_Y_965), rt_str(" *", 2));
return rv966; }
}
}
}
}
}
}
}
{ R9 rv967 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv967; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R17 * p_E) { RT_B_TICK(); 
{ rt_int rv968 = ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv968; }
rt_raise(RT_X_INIT);
}
static R27 * r_NEW_FIELD(R9 p_NAME, R22 * p_T, rt_int p_KIND) { RT_B_TICK(); 
R27 * l_F_969; memset(&l_F_969, 0, sizeof l_F_969);
l_F_969 = ({ R27 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R27(&(*(R27 *)rt_nil_check(l_F_969)), ({ R27 rc970; memset(&rc970, 0, sizeof rc970);  S_R9(&rc970.f_NAME, p_NAME, 0); S_R9(&rc970.f_CNAME, r_FMT1(rt_str("f_@", 3), r_CID(p_NAME)), 0); rc970.f_T = p_T; rc970.f_KIND = p_KIND; S_R9(&rc970.f_TAGF, r_NO_TEXT(), 0); rc970.f_LABELS = NULL; rc970.f_NEXT = NULL; rc970; }), 0);
{ R27 * rv971 = l_F_969;
return rv971; }
rt_raise(RT_X_INIT);
}
static R27 * r_FIND_FIELD(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R27 * l_F_972; memset(&l_F_972, 0, sizeof l_F_972);
l_F_972 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_972 == NULL)) goto L_end973;
{
if (r_TEQ(((*(R27 *)rt_nil_check(l_F_972))).f_NAME, p_NAME))
{
{ R27 * rv974 = l_F_972;
return rv974; }
}
l_F_972 = ((*(R27 *)rt_nil_check(l_F_972))).f_NEXT;
}
RT_B_TICK();
} L_end973: ;
{ R27 * rv975 = NULL;
return rv975; }
rt_raise(RT_X_INIT);
}
static R27 * r_FIND_VFIELD(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R27 * l_F_976; memset(&l_F_976, 0, sizeof l_F_976);
l_F_976 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R27 * l_FIRST_977; memset(&l_FIRST_977, 0, sizeof l_FIRST_977);
l_FIRST_977 = NULL;
for (;;) {
if ((l_F_976 == NULL)) goto L_end978;
{
if (r_TEQ(((*(R27 *)rt_nil_check(l_F_976))).f_NAME, p_NAME))
{
if ((l_FIRST_977 == NULL))
{
l_FIRST_977 = l_F_976;
}
if (((((*(R27 *)rt_nil_check(l_F_976))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
{ R27 * rv979 = l_F_976;
return rv979; }
}
{
R25 l_TAGV_980; memset(&l_TAGV_980, 0, sizeof l_TAGV_980);
S_R25(&l_TAGV_980, r_TAG_VALUE(p_T, ((*(R27 *)rt_nil_check(l_F_976))).f_TAGF), 0);
if ((l_TAGV_980).f_OK)
{
if (r_LABELS_HAVE(((*(R27 *)rt_nil_check(l_F_976))).f_LABELS, (l_TAGV_980).f_V, ((*(R27 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R27 *)rt_nil_check(l_F_976))).f_TAGF)))).f_T))
{
{ R27 * rv981 = l_F_976;
return rv981; }
}
}
}
}
l_F_976 = ((*(R27 *)rt_nil_check(l_F_976))).f_NEXT;
}
RT_B_TICK();
} L_end978: ;
{ R27 * rv982 = l_FIRST_977;
return rv982; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R22 * p_T, R27 * p_F, R27 * *p_TAIL) { RT_B_TICK(); 
R27 * l_P_983; memset(&l_P_983, 0, sizeof l_P_983);
l_P_983 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_984; memset(&l_N_984, 0, sizeof l_N_984);
l_N_984 = ((rt_int)0LL);
for (;;) {
if ((l_P_983 == NULL)) goto L_end985;
{
if (r_TEQ(((*(R27 *)rt_nil_check(l_P_983))).f_NAME, ((*(R27 *)rt_nil_check(p_F))).f_NAME))
{
if ((((((((*(R27 *)rt_nil_check(l_P_983))).f_TAGF).f_LEN == ((rt_int)0LL)) || ((((*(R27 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL))) || (!r_TEQ(((*(R27 *)rt_nil_check(l_P_983))).f_TAGF, ((*(R27 *)rt_nil_check(p_F))).f_TAGF))) || (((*(R27 *)rt_nil_check(l_P_983))).f_LABELS == ((*(R27 *)rt_nil_check(p_F))).f_LABELS)))
{
r_FAILT(((rt_int)0LL), rt_str("the field names of a record must be distinct (3.9.1): ", 54), ((*(R27 *)rt_nil_check(p_F))).f_NAME);
}
l_N_984 = rt_add(l_N_984, ((rt_int)1LL));
}
l_P_983 = ((*(R27 *)rt_nil_check(l_P_983))).f_NEXT;
}
RT_B_TICK();
} L_end985: ;
if ((l_N_984 > ((rt_int)0LL)))
{
S_R9(&((*(R27 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R27 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_984)), 0);
}
if (((*p_TAIL) == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_FIELDS = p_F;
}
else
{
((*(R27 *)rt_nil_check((*p_TAIL)))).f_NEXT = p_F;
}
(*p_TAIL) = p_F;
}
static void r_RECORD_FIELDS(R22 * p_T, R17 * p_DECLS, R9 p_TAGN, R17 * p_LABELS, R27 * *p_TAIL) { RT_B_TICK(); 
R17 * l_D_986; memset(&l_D_986, 0, sizeof l_D_986);
l_D_986 = p_DECLS;
for (;;) {
if ((l_D_986 == NULL)) goto L_end987;
{
if ((((*(R17 *)rt_nil_check(l_D_986))).f_KIND == g_N_VAR))
{
{
R22 * l_FT_988; memset(&l_FT_988, 0, sizeof l_FT_988);
l_FT_988 = r_RESOLVE(((*(R17 *)rt_nil_check(l_D_986))).f_B);
R17 * l_N_989; memset(&l_N_989, 0, sizeof l_N_989);
l_N_989 = ((*(R17 *)rt_nil_check(l_D_986))).f_A;
for (;;) {
if ((l_N_989 == NULL)) goto L_end990;
{
{
R27 * l_F_991; memset(&l_F_991, 0, sizeof l_F_991);
l_F_991 = r_NEW_FIELD(((*(R17 *)rt_nil_check(l_N_989))).f_NAME, l_FT_988, ((rt_int)0LL));
S_R9(&((*(R27 *)rt_nil_check(l_F_991))).f_TAGF, p_TAGN, 0);
((*(R27 *)rt_nil_check(l_F_991))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_991, &(*p_TAIL));
if (((r_LOOKUP(((*(R17 *)rt_nil_check(l_N_989))).f_NAME) == NULL) || (!(((*(R12 *)rt_nil_check(r_LOOKUP(((*(R17 *)rt_nil_check(l_N_989))).f_NAME)))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))))
{
{
R12 * l_Y_992; memset(&l_Y_992, 0, sizeof l_Y_992);
l_Y_992 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(l_N_989))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_992))).f_T = l_FT_988;
S_R9(&((*(R12 *)rt_nil_check(l_Y_992))).f_ACCESS, r_FMT1(rt_str("$S.@", 4), ((*(R27 *)rt_nil_check(l_F_991))).f_CNAME), 0);
((*(R12 *)rt_nil_check(l_Y_992))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_Y_992))).f_LEVEL = rt_neg(((rt_int)1LL));
((*(R12 *)rt_nil_check(l_Y_992))).f_OWNER = rt_neg(((rt_int)1LL));
r_DEFINE(l_Y_992, ((*(R17 *)rt_nil_check(l_D_986))).f_LINE);
}
}
}
l_N_989 = ((*(R17 *)rt_nil_check(l_N_989))).f_NEXT;
}
RT_B_TICK();
} L_end990: ;
}
}
else
{
{
R27 * l_TF_993; memset(&l_TF_993, 0, sizeof l_TF_993);
l_TF_993 = r_FIND_FIELD(p_T, ((*(R17 *)rt_nil_check(l_D_986))).f_NAME);
R17 * l_S_994; memset(&l_S_994, 0, sizeof l_S_994);
l_S_994 = ((*(R17 *)rt_nil_check(l_D_986))).f_A;
if ((l_TF_993 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_986))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R17 *)rt_nil_check(l_D_986))).f_NAME);
}
if ((!(((*(R27 *)rt_nil_check(l_TF_993))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_986))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R17 *)rt_nil_check(l_D_986))).f_NAME);
}
{
R17 * l_O_995; memset(&l_O_995, 0, sizeof l_O_995);
l_O_995 = p_DECLS;
for (;;) {
if ((l_O_995 == l_D_986)) goto L_end996;
{
if ((((*(R17 *)rt_nil_check(l_O_995))).f_KIND == g_N_VARIANT))
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_O_995))).f_NAME, ((*(R17 *)rt_nil_check(l_D_986))).f_NAME))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_986))).f_LINE, rt_str("two variant parts discriminate on the tag ", 42), ((*(R17 *)rt_nil_check(l_D_986))).f_NAME);
}
}
l_O_995 = ((*(R17 *)rt_nil_check(l_O_995))).f_NEXT;
}
RT_B_TICK();
} L_end996: ;
}
r_CHECK_VARIANT_NAMES(l_D_986, ((*(R27 *)rt_nil_check(l_TF_993))).f_T);
for (;;) {
if ((l_S_994 == NULL)) goto L_end997;
{
r_OPEN_SCOPE();
r_RECORD_FIELDS(p_T, ((*(R17 *)rt_nil_check(l_S_994))).f_B, C_R9(((*(R17 *)rt_nil_check(l_D_986))).f_NAME), ((*(R17 *)rt_nil_check(l_S_994))).f_A, &(*p_TAIL));
r_CLOSE_SCOPE();
l_S_994 = ((*(R17 *)rt_nil_check(l_S_994))).f_NEXT;
}
RT_B_TICK();
} L_end997: ;
}
}
l_D_986 = ((*(R17 *)rt_nil_check(l_D_986))).f_NEXT;
}
RT_B_TICK();
} L_end987: ;
}
static void r_CHECK_VARIANT_NAMES(R17 * p_D, R22 * p_TT) { RT_B_TICK(); 
R17 * l_S_998; memset(&l_S_998, 0, sizeof l_S_998);
l_S_998 = ((*(R17 *)rt_nil_check(p_D))).f_A;
R17 * l_LOS_999; memset(&l_LOS_999, 0, sizeof l_LOS_999);
l_LOS_999 = NULL;
R17 * l_HIS_1000; memset(&l_HIS_1000, 0, sizeof l_HIS_1000);
l_HIS_1000 = NULL;
rt_int l_LO_LIM_1001; memset(&l_LO_LIM_1001, 0, sizeof l_LO_LIM_1001);
rt_int l_HI_LIM_1002; memset(&l_HI_LIM_1002, 0, sizeof l_HI_LIM_1002);
R22 * l_R_1003; memset(&l_R_1003, 0, sizeof l_R_1003);
l_R_1003 = r_REAL_TYPE(p_TT);
l_LO_LIM_1001 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
l_HI_LIM_1002 = INT64_MAX;
if ((((*(R22 *)rt_nil_check(l_R_1003))).f_KIND == g_T_ENUM))
{
l_LO_LIM_1001 = ((rt_int)0LL);
l_HI_LIM_1002 = rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_R_1003))).f_BASE))).f_NLITS, ((rt_int)1LL));
}
else if ((((*(R22 *)rt_nil_check(l_R_1003))).f_KIND == g_T_BOOL))
{
l_LO_LIM_1001 = ((rt_int)0LL);
l_HI_LIM_1002 = ((rt_int)1LL);
}
if ((((*(R22 *)rt_nil_check(l_R_1003))).f_MLO).f_OK)
{
l_LO_LIM_1001 = (((*(R22 *)rt_nil_check(l_R_1003))).f_MLO).f_V;
}
if ((((*(R22 *)rt_nil_check(l_R_1003))).f_MHI).f_OK)
{
l_HI_LIM_1002 = (((*(R22 *)rt_nil_check(l_R_1003))).f_MHI).f_V;
}
for (;;) {
if ((l_S_998 == NULL)) goto L_end1004;
{
{
R17 * l_L_1005; memset(&l_L_1005, 0, sizeof l_L_1005);
l_L_1005 = ((*(R17 *)rt_nil_check(l_S_998))).f_A;
for (;;) {
if ((l_L_1005 == NULL)) goto L_end1006;
{
{
R25 l_A_1007; memset(&l_A_1007, 0, sizeof l_A_1007);
R25 l_B_1008; memset(&l_B_1008, 0, sizeof l_B_1008);
if ((((*(R17 *)rt_nil_check(l_L_1005))).f_KIND == g_N_RANGE))
{
S_R25(&l_A_1007, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_1005))).f_A, p_TT), 0);
S_R25(&l_B_1008, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_1005))).f_B, p_TT), 0);
if (((l_A_1007).f_OK && (((((*(R17 *)rt_nil_check(l_L_1005))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_L_1005))).f_IV == ((rt_int)3LL))))))
{
(l_A_1007).f_V = rt_add((l_A_1007).f_V, ((rt_int)1LL));
}
if (((l_B_1008).f_OK && (((*(R17 *)rt_nil_check(l_L_1005))).f_IV >= ((rt_int)2LL))))
{
(l_B_1008).f_V = rt_sub((l_B_1008).f_V, ((rt_int)1LL));
}
}
else
{
S_R25(&l_A_1007, r_ENUM_MANIFEST(l_L_1005, p_TT), 0);
S_R25(&l_B_1008, l_A_1007, 0);
}
if ((!(((l_A_1007).f_OK && (l_B_1008).f_OK))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_1005))).f_LINE, rt_str("a variant-name is manifest (3.9.1)", 34));
}
if (((((l_A_1007).f_V < l_LO_LIM_1001) || ((l_B_1008).f_V > l_HI_LIM_1002)) || ((l_A_1007).f_V > (l_B_1008).f_V)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_1005))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.1)", 49));
}
{
R17 * l_P_1009; memset(&l_P_1009, 0, sizeof l_P_1009);
l_P_1009 = l_LOS_999;
R17 * l_Q_1010; memset(&l_Q_1010, 0, sizeof l_Q_1010);
l_Q_1010 = l_HIS_1000;
for (;;) {
if ((l_P_1009 == NULL)) goto L_end1011;
{
if ((((l_A_1007).f_V <= ((*(R17 *)rt_nil_check(l_Q_1010))).f_IV) && ((l_B_1008).f_V >= ((*(R17 *)rt_nil_check(l_P_1009))).f_IV)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_1005))).f_LINE, rt_str("a value of the tag names two variants (3.9.1)", 45));
}
l_P_1009 = ((*(R17 *)rt_nil_check(l_P_1009))).f_NEXT;
l_Q_1010 = ((*(R17 *)rt_nil_check(l_Q_1010))).f_NEXT;
}
RT_B_TICK();
} L_end1011: ;
}
{
R17 * l_P_1012; memset(&l_P_1012, 0, sizeof l_P_1012);
l_P_1012 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
R17 * l_Q_1013; memset(&l_Q_1013, 0, sizeof l_Q_1013);
l_Q_1013 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R17 *)rt_nil_check(l_P_1012))).f_IV = (l_A_1007).f_V;
((*(R17 *)rt_nil_check(l_Q_1013))).f_IV = (l_B_1008).f_V;
((*(R17 *)rt_nil_check(l_P_1012))).f_NEXT = l_LOS_999;
((*(R17 *)rt_nil_check(l_Q_1013))).f_NEXT = l_HIS_1000;
l_LOS_999 = l_P_1012;
l_HIS_1000 = l_Q_1013;
}
}
l_L_1005 = ((*(R17 *)rt_nil_check(l_L_1005))).f_NEXT;
}
RT_B_TICK();
} L_end1006: ;
}
l_S_998 = ((*(R17 *)rt_nil_check(l_S_998))).f_NEXT;
}
RT_B_TICK();
} L_end1004: ;
}
static R22 * r_RESOLVE_RECORD(R17 * p_TS, R9 p_CNAME, R12 * p_Y, R17 * p_FORMALS) { RT_B_TICK(); 
R22 * l_T_1014; memset(&l_T_1014, 0, sizeof l_T_1014);
l_T_1014 = r_NEW_TYP(g_T_REC);
R27 * l_TAIL_1015; memset(&l_TAIL_1015, 0, sizeof l_TAIL_1015);
l_TAIL_1015 = NULL;
((*(R22 *)rt_nil_check(l_T_1014))).f_BASE = l_T_1014;
((*(R22 *)rt_nil_check(l_T_1014))).f_DECL = p_Y;
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_D == NULL)))
{
((*(R22 *)rt_nil_check(l_T_1014))).f_REPS = r_EXPAND_REP(((*(R17 *)rt_nil_check(p_TS))).f_D, l_T_1014, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
r_CHECK_REP_CLASS(l_T_1014, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(l_T_1014))).f_CNAME, p_CNAME, 0);
}
else
{
S_R9(&((*(R22 *)rt_nil_check(l_T_1014))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R22 *)rt_nil_check(l_T_1014))).f_CNAME, ((*(R22 *)rt_nil_check(l_T_1014))).f_CNAME));
}
{
R17 * l_F_1016; memset(&l_F_1016, 0, sizeof l_F_1016);
l_F_1016 = p_FORMALS;
for (;;) {
if ((l_F_1016 == NULL)) goto L_end1017;
{
if ((!(((*(R17 *)rt_nil_check(l_F_1016))).f_B == NULL)))
{
{
R22 * l_FT_1018; memset(&l_FT_1018, 0, sizeof l_FT_1018);
l_FT_1018 = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_1016))).f_B);
R17 * l_N_1019; memset(&l_N_1019, 0, sizeof l_N_1019);
l_N_1019 = ((*(R17 *)rt_nil_check(l_F_1016))).f_A;
rt_int l_KIND_1020; memset(&l_KIND_1020, 0, sizeof l_KIND_1020);
l_KIND_1020 = ((rt_int)1LL);
if ((((*(R17 *)rt_nil_check(l_F_1016))).f_IV == ((rt_int)1LL)))
{
l_KIND_1020 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_1018))) || (!(((*(R22 *)rt_nil_check(l_FT_1018))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_F_1016))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_1019 == NULL)) goto L_end1021;
{
r_ADD_FIELD(l_T_1014, r_NEW_FIELD(((*(R17 *)rt_nil_check(l_N_1019))).f_NAME, l_FT_1018, l_KIND_1020), &l_TAIL_1015);
l_N_1019 = ((*(R17 *)rt_nil_check(l_N_1019))).f_NEXT;
}
RT_B_TICK();
} L_end1021: ;
}
}
l_F_1016 = ((*(R17 *)rt_nil_check(l_F_1016))).f_NEXT;
}
RT_B_TICK();
} L_end1017: ;
}
r_OPEN_SCOPE();
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_RECORD_FIELDS(l_T_1014, ((*(R17 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_1015);
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_CLOSE_SCOPE();
r_CHECK_RECORD_REP(l_T_1014, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
r_COMPLETE_RECORD(l_T_1014);
{ R22 * rv1022 = l_T_1014;
return rv1022; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_RECORD_REP(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv1023 = 0;
return rv1023; }
}
{ rt_int rv1024 = ((((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_KIND == g_N_REP) && r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_NAME, rt_str("RECORD_REP", 10)));
return rv1024; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_RECORD_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_SEEN_1025; memset(&l_SEEN_1025, 0, sizeof l_SEEN_1025);
l_SEEN_1025 = NULL;
rt_int l_LISTED_1026; memset(&l_LISTED_1026, 0, sizeof l_LISTED_1026);
l_LISTED_1026 = 0;
if ((!r_IS_RECORD_REP(p_T)))
{
return;
}
{
R17 * l_P_1027; memset(&l_P_1027, 0, sizeof l_P_1027);
l_P_1027 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A;
for (;;) {
if ((l_P_1027 == NULL)) goto L_end1028;
{
if ((((*(R17 *)rt_nil_check(l_P_1027))).f_IV == ((rt_int)1LL)))
{
l_LISTED_1026 = 1;
}
r_CHECK_ELEMENTS(p_T, ((*(R17 *)rt_nil_check(l_P_1027))).f_A, r_NO_TEXT(), NULL, &l_SEEN_1025);
l_P_1027 = ((*(R17 *)rt_nil_check(l_P_1027))).f_NEXT;
}
RT_B_TICK();
} L_end1028: ;
}
if (l_LISTED_1026)
{
{
R27 * l_F_1029; memset(&l_F_1029, 0, sizeof l_F_1029);
l_F_1029 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1029 == NULL)) goto L_end1030;
{
if ((((((*(R27 *)rt_nil_check(l_F_1029))).f_TAGF).f_LEN == ((rt_int)0LL)) && (!r_IN_IDENTS(l_SEEN_1025, ((*(R27 *)rt_nil_check(l_F_1029))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("a record-reptype with element-specs positions every field (3.9.3): ", 67), ((*(R27 *)rt_nil_check(l_F_1029))).f_NAME);
}
if ((((((*(R27 *)rt_nil_check(l_F_1029))).f_TAGF).f_LEN > ((rt_int)0LL)) && (!r_IN_IDENTS(l_SEEN_1025, r_CAT(r_MK(rt_str("|", 1)), ((*(R27 *)rt_nil_check(l_F_1029))).f_TAGF)))))
{
r_FAILT(p_LINE, rt_str("a record-reptype with element-specs positions every variant part (3.9.3): ", 74), ((*(R27 *)rt_nil_check(l_F_1029))).f_TAGF);
}
l_F_1029 = ((*(R27 *)rt_nil_check(l_F_1029))).f_NEXT;
}
RT_B_TICK();
} L_end1030: ;
}
}
{
R17 * l_V_1031; memset(&l_V_1031, 0, sizeof l_V_1031);
l_V_1031 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_C;
for (;;) {
if ((l_V_1031 == NULL)) goto L_end1032;
{
{
R27 * l_TF_1033; memset(&l_TF_1033, 0, sizeof l_TF_1033);
l_TF_1033 = r_FIND_FIELD(p_T, ((*(R17 *)rt_nil_check(l_V_1031))).f_NAME);
R17 * l_S_1034; memset(&l_S_1034, 0, sizeof l_S_1034);
l_S_1034 = ((*(R17 *)rt_nil_check(l_V_1031))).f_A;
if ((l_TF_1033 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_V_1031))).f_LINE, rt_str("not a tag of the record (3.9.3): ", 33), ((*(R17 *)rt_nil_check(l_V_1031))).f_NAME);
}
if ((!(((*(R27 *)rt_nil_check(l_TF_1033))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_V_1031))).f_LINE, rt_str("not a tag of the record (3.9.3): ", 33), ((*(R17 *)rt_nil_check(l_V_1031))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(l_V_1031))).f_B == NULL)))
{
if ((r_PACKING_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_1031))).f_B))).f_NAME) < ((rt_int)0LL)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_V_1031))).f_LINE, rt_str("a packing-mode is DENSE, PACKED or UNPACKED (3.9.3): ", 53), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_1031))).f_B))).f_NAME);
}
}
for (;;) {
if ((l_S_1034 == NULL)) goto L_end1035;
{
{
R17 * l_L_1036; memset(&l_L_1036, 0, sizeof l_L_1036);
l_L_1036 = ((*(R17 *)rt_nil_check(l_S_1034))).f_A;
R17 * l_P_1037; memset(&l_P_1037, 0, sizeof l_P_1037);
l_P_1037 = ((*(R17 *)rt_nil_check(l_S_1034))).f_B;
R17 * l_VSEEN_1038; memset(&l_VSEEN_1038, 0, sizeof l_VSEEN_1038);
l_VSEEN_1038 = NULL;
for (;;) {
if ((l_L_1036 == NULL)) goto L_end1039;
{
{
R14 l_SAVED_CODE_1040; memset(&l_SAVED_CODE_1040, 0, sizeof l_SAVED_CODE_1040);
S_R14(&l_SAVED_CODE_1040, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_LV_1041; memset(&l_LV_1041, 0, sizeof l_LV_1041);
S_R26(&l_LV_1041, r_EXPR(l_L_1036, ((*(R27 *)rt_nil_check(l_TF_1033))).f_T), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1040, 0);
if ((!r_SAME_CLASS(r_REAL_TYPE((l_LV_1041).f_T), r_REAL_TYPE(((*(R27 *)rt_nil_check(l_TF_1033))).f_T))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_1036))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.3)", 49));
}
}
l_L_1036 = ((*(R17 *)rt_nil_check(l_L_1036))).f_NEXT;
}
RT_B_TICK();
} L_end1039: ;
for (;;) {
if ((l_P_1037 == NULL)) goto L_end1042;
{
r_CHECK_ELEMENTS(p_T, ((*(R17 *)rt_nil_check(l_P_1037))).f_A, C_R9(((*(R17 *)rt_nil_check(l_V_1031))).f_NAME), ((*(R17 *)rt_nil_check(l_S_1034))).f_A, &l_VSEEN_1038);
l_P_1037 = ((*(R17 *)rt_nil_check(l_P_1037))).f_NEXT;
}
RT_B_TICK();
} L_end1042: ;
}
l_S_1034 = ((*(R17 *)rt_nil_check(l_S_1034))).f_NEXT;
}
RT_B_TICK();
} L_end1035: ;
}
l_V_1031 = ((*(R17 *)rt_nil_check(l_V_1031))).f_NEXT;
}
RT_B_TICK();
} L_end1032: ;
}
}
static void r_CHECK_ELEMENTS(R22 * p_T, R17 * p_L, R9 p_TAGN, R17 * p_LABELS, R17 * *p_SEEN) { RT_B_TICK(); 
R17 * l_E_1043; memset(&l_E_1043, 0, sizeof l_E_1043);
l_E_1043 = p_L;
for (;;) {
if ((l_E_1043 == NULL)) goto L_end1044;
{
if (((((*(R17 *)rt_nil_check(l_E_1043))).f_FL == ((rt_int)0LL)) || (((*(R17 *)rt_nil_check(l_E_1043))).f_FL == ((rt_int)2LL))))
{
{
R27 * l_F_1045; memset(&l_F_1045, 0, sizeof l_F_1045);
l_F_1045 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R27 * l_FOUND_1046; memset(&l_FOUND_1046, 0, sizeof l_FOUND_1046);
l_FOUND_1046 = NULL;
for (;;) {
if ((l_F_1045 == NULL)) goto L_end1047;
{
if ((r_TEQ(((*(R27 *)rt_nil_check(l_F_1045))).f_NAME, ((*(R17 *)rt_nil_check(l_E_1043))).f_NAME) && r_TEQ(((*(R27 *)rt_nil_check(l_F_1045))).f_TAGF, p_TAGN)))
{
l_FOUND_1046 = l_F_1045;
}
l_F_1045 = ((*(R27 *)rt_nil_check(l_F_1045))).f_NEXT;
}
RT_B_TICK();
} L_end1047: ;
if ((l_FOUND_1046 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_1043))).f_LINE, rt_str("not a field of the record accessible here (3.9.3): ", 51), ((*(R17 *)rt_nil_check(l_E_1043))).f_NAME);
}
if (((((*(R17 *)rt_nil_check(l_E_1043))).f_FL == ((rt_int)2LL)) && (((*(R27 *)rt_nil_check(l_FOUND_1046))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_1043))).f_LINE, rt_str("OMIT names a constant or tag field (3.9.3): ", 44), ((*(R17 *)rt_nil_check(l_E_1043))).f_NAME);
}
if (r_IN_IDENTS((*p_SEEN), ((*(R17 *)rt_nil_check(l_E_1043))).f_NAME))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_1043))).f_LINE, rt_str("a field is positioned once in a record-reptype (3.9.3): ", 56), ((*(R17 *)rt_nil_check(l_E_1043))).f_NAME);
}
(*p_SEEN) = r_NAME_REF(((*(R17 *)rt_nil_check(l_E_1043))).f_NAME, ((rt_int)0LL), NULL, (*p_SEEN));
}
}
else if ((((*(R17 *)rt_nil_check(l_E_1043))).f_FL == ((rt_int)1LL)))
{
{
R27 * l_TF_1048; memset(&l_TF_1048, 0, sizeof l_TF_1048);
l_TF_1048 = r_FIND_FIELD(p_T, ((*(R17 *)rt_nil_check(l_E_1043))).f_NAME);
R9 l_KEY_1049; memset(&l_KEY_1049, 0, sizeof l_KEY_1049);
S_R9(&l_KEY_1049, r_CAT(r_MK(rt_str("|", 1)), ((*(R17 *)rt_nil_check(l_E_1043))).f_NAME), 0);
if ((l_TF_1048 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_1043))).f_LINE, rt_str("VARIANTS names a tag of the record (3.9.3): ", 44), ((*(R17 *)rt_nil_check(l_E_1043))).f_NAME);
}
if ((!(((*(R27 *)rt_nil_check(l_TF_1048))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_1043))).f_LINE, rt_str("VARIANTS names a tag of the record (3.9.3): ", 44), ((*(R17 *)rt_nil_check(l_E_1043))).f_NAME);
}
if (r_IN_IDENTS((*p_SEEN), l_KEY_1049))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_1043))).f_LINE, rt_str("a variant part is positioned once in a record-reptype (3.9.3): ", 63), ((*(R17 *)rt_nil_check(l_E_1043))).f_NAME);
}
(*p_SEEN) = r_NAME_REF(l_KEY_1049, ((rt_int)0LL), NULL, (*p_SEEN));
}
}
else
{
{
R25 l_M_1050; memset(&l_M_1050, 0, sizeof l_M_1050);
S_R25(&l_M_1050, r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1043))).f_B), 0);
if (((!(l_M_1050).f_OK) || ((l_M_1050).f_V < ((rt_int)0LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_E_1043))).f_LINE, rt_str("the length of a filler-spec is a manifest integer, not negative (3.9.3)", 71));
}
}
}
l_E_1043 = ((*(R17 *)rt_nil_check(l_E_1043))).f_NEXT;
}
RT_B_TICK();
} L_end1044: ;
}
static R9 r_RECORD_SIZE(R22 * p_T, R9 p_C) { RT_B_TICK(); 
{ R9 rv1051 = r_FMT1(rt_str("({ rt_int sz = 0;@ sz; })", 25), r_RECORD_LAYOUT(p_T, p_C, ((rt_int)0LL), r_NO_TEXT()));
return rv1051; }
rt_raise(RT_X_INIT);
}
static R9 r_RECORD_BITS(R22 * p_T, R9 p_C) { RT_B_TICK(); 
R9 l_V_1052; memset(&l_V_1052, 0, sizeof l_V_1052);
S_R9(&l_V_1052, r_NEW_NAME(rt_str("rb", 2)), 0);
R9 l_IMG_1053; memset(&l_IMG_1053, 0, sizeof l_IMG_1053);
S_R9(&l_IMG_1053, r_NEW_NAME(rt_str("im", 2)), 0);
R9 l_BODY_1054; memset(&l_BODY_1054, 0, sizeof l_BODY_1054);
S_R9(&l_BODY_1054, r_RECORD_LAYOUT(p_T, l_V_1052, ((rt_int)1LL), l_IMG_1053), 0);
{ R9 rv1055 = r_CAT(r_FMT4(rt_str("({ @ @ = @; rstr @ = rt_str_new(0); rt_int sz = 0;", 50), r_CTYPE(p_T), l_V_1052, p_C, l_IMG_1053), r_FMT2(rt_str("@ @; })", 7), l_BODY_1054, l_IMG_1053));
return rv1055; }
rt_raise(RT_X_INIT);
}
static R9 r_RECORD_OF_BITS(R22 * p_T, R9 p_B) { RT_B_TICK(); 
R9 l_V_1056; memset(&l_V_1056, 0, sizeof l_V_1056);
S_R9(&l_V_1056, r_NEW_NAME(rt_str("rv", 2)), 0);
R9 l_IMG_1057; memset(&l_IMG_1057, 0, sizeof l_IMG_1057);
S_R9(&l_IMG_1057, r_NEW_NAME(rt_str("im", 2)), 0);
R9 l_BODY_1058; memset(&l_BODY_1058, 0, sizeof l_BODY_1058);
S_R9(&l_BODY_1058, r_RECORD_LAYOUT(p_T, l_V_1056, ((rt_int)2LL), l_IMG_1057), 0);
{ R9 rv1059 = r_CAT(r_FMT4(rt_str("({ rstr @ = @; @ @;", 19), l_IMG_1057, p_B, r_CTYPE(p_T), l_V_1056), r_CAT(r_FMT3(rt_str(" @ rt_int sz = 0;@ rt_b_lay_end(@, sz);", 39), r_INIT_CODE(p_T, l_V_1056), l_BODY_1058, l_IMG_1057), r_FMT1(rt_str(" @; })", 6), l_V_1056)));
return rv1059; }
rt_raise(RT_X_INIT);
}
static R9 r_RECORD_LAYOUT(R22 * p_T, R9 p_C, rt_int p_MODE, R9 p_IMG) { RT_B_TICK(); 
R9 l_R_1060; memset(&l_R_1060, 0, sizeof l_R_1060);
S_R9(&l_R_1060, r_MK(rt_str("", 0)), 0);
R17 * l_SAVED_1061; memset(&l_SAVED_1061, 0, sizeof l_SAVED_1061);
l_SAVED_1061 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
rt_int l_SAVED_MODE_1062; memset(&l_SAVED_MODE_1062, 0, sizeof l_SAVED_MODE_1062);
l_SAVED_MODE_1062 = ((*(R7 *)rt_nil_check(g_W))).f_LMODE;
R9 l_SAVED_IMG_1063; memset(&l_SAVED_IMG_1063, 0, sizeof l_SAVED_IMG_1063);
S_R9(&l_SAVED_IMG_1063, ((*(R7 *)rt_nil_check(g_W))).f_LIMG, 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = NULL;
((*(R7 *)rt_nil_check(g_W))).f_LMODE = p_MODE;
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_LIMG, p_IMG, 0);
if (r_IS_RECORD_REP(p_T))
{
{
R17 * l_P_1064; memset(&l_P_1064, 0, sizeof l_P_1064);
l_P_1064 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A;
for (;;) {
if ((l_P_1064 == NULL)) goto L_end1065;
{
S_R9(&l_R_1060, r_CAT(l_R_1060, r_LAYOUT_SPEC(p_T, p_C, l_P_1064, r_NO_TEXT())), 0);
l_P_1064 = ((*(R17 *)rt_nil_check(l_P_1064))).f_NEXT;
}
RT_B_TICK();
} L_end1065: ;
}
}
S_R9(&l_R_1060, r_CAT(l_R_1060, r_LAYOUT_ALL(p_T, p_C, r_NO_TEXT(), ((rt_int)2LL))), 0);
S_R9(&l_R_1060, r_CAT(l_R_1060, r_LAYOUT_PARTS(p_T, p_C)), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_SAVED_1061;
((*(R7 *)rt_nil_check(g_W))).f_LMODE = l_SAVED_MODE_1062;
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_LIMG, l_SAVED_IMG_1063, 0);
{ R9 rv1066 = l_R_1060;
return rv1066; }
rt_raise(RT_X_INIT);
}
static R9 r_LAY_FIELD(R27 * p_F, R22 * p_T, R9 p_C, rt_int p_MODE) { RT_B_TICK(); 
R9 l_X_1067; memset(&l_X_1067, 0, sizeof l_X_1067);
S_R9(&l_X_1067, r_FMT2(rt_str("(@).@", 5), p_C, ((*(R27 *)rt_nil_check(p_F))).f_CNAME), 0);
if ((((*(R7 *)rt_nil_check(g_W))).f_LMODE == ((rt_int)0LL)))
{
{ R9 rv1068 = r_FMT2(rt_str(" sz = rt_b_layout(sz, @, @);", 28), r_FIELD_SIZE_C(p_F, p_C), r_NUM(p_MODE));
return rv1068; }
}
else if ((((*(R7 *)rt_nil_check(g_W))).f_LMODE == ((rt_int)1LL)))
{
{
R9 l_IMG_1069; memset(&l_IMG_1069, 0, sizeof l_IMG_1069);
S_R9(&l_IMG_1069, ((*(R7 *)rt_nil_check(g_W))).f_LIMG, 0);
R9 l_BITS_1070; memset(&l_BITS_1070, 0, sizeof l_BITS_1070);
S_R9(&l_BITS_1070, (r_BITS_OF(r_MKET(l_X_1067, ((*(R27 *)rt_nil_check(p_F))).f_T), ((rt_int)0LL))).f_C, 0);
{ R9 rv1071 = r_FMT3(rt_str(" sz = rt_b_lay_put(&@, sz, @, @);", 33), l_IMG_1069, l_BITS_1070, r_NUM(p_MODE));
return rv1071; }
}
}
{
R9 l_IMG_1072; memset(&l_IMG_1072, 0, sizeof l_IMG_1072);
S_R9(&l_IMG_1072, ((*(R7 *)rt_nil_check(g_W))).f_LIMG, 0);
R9 l_TAKE_1073; memset(&l_TAKE_1073, 0, sizeof l_TAKE_1073);
S_R9(&l_TAKE_1073, r_FMT3(rt_str("rt_b_lay_take(@, &sz, @, @)", 27), l_IMG_1072, r_FIELD_SIZE_C(p_F, p_C), r_NUM(p_MODE)), 0);
R9 l_V_1074; memset(&l_V_1074, 0, sizeof l_V_1074);
S_R9(&l_V_1074, r_OF_BITS(((*(R27 *)rt_nil_check(p_F))).f_T, l_TAKE_1073, ((rt_int)0LL)), 0);
if (((((*(R27 *)rt_nil_check(p_F))).f_KIND == ((rt_int)0LL)) || r_IS_ANY_FIELD(p_T, p_F)))
{
{ R9 rv1075 = r_FMT2(rt_str(" @ = @;", 7), l_X_1067, l_V_1074);
return rv1075; }
}
{ R9 rv1076 = r_FMT1(rt_str(" if (!@) rt_raise(RT_B_INVALID_TYPE);", 37), r_EQUAL_CODE(r_REAL_TYPE(((*(R27 *)rt_nil_check(p_F))).f_T), l_X_1067, l_V_1074));
return rv1076; }
}
rt_raise(RT_X_INIT);
}
static R9 r_LAY_FILL(R9 p_SIZE, R9 p_BITS, rt_int p_MODE) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_LMODE == ((rt_int)0LL)))
{
{ R9 rv1077 = r_FMT2(rt_str(" sz = rt_b_layout(sz, @, @);", 28), p_SIZE, r_NUM(p_MODE));
return rv1077; }
}
else if ((((*(R7 *)rt_nil_check(g_W))).f_LMODE == ((rt_int)1LL)))
{
{ R9 rv1078 = r_FMT3(rt_str(" sz = rt_b_lay_put(&@, sz, @, @);", 33), ((*(R7 *)rt_nil_check(g_W))).f_LIMG, p_BITS, r_NUM(p_MODE));
return rv1078; }
}
{ R9 rv1079 = r_FMT3(rt_str(" (void)rt_b_lay_take(@, &sz, @, @);", 35), ((*(R7 *)rt_nil_check(g_W))).f_LIMG, p_SIZE, r_NUM(p_MODE));
return rv1079; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ANY_FIELD(R22 * p_T, R27 * p_F) { RT_B_TICK(); 
R27 * l_G_1080; memset(&l_G_1080, 0, sizeof l_G_1080);
l_G_1080 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R28 * l_A_1081; memset(&l_A_1081, 0, sizeof l_A_1081);
l_A_1081 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_G_1080 == NULL) || (l_A_1081 == NULL))) goto L_end1082;
{
if ((!(((*(R27 *)rt_nil_check(l_G_1080))).f_KIND == ((rt_int)0LL))))
{
if ((l_G_1080 == p_F))
{
{ rt_int rv1083 = ((*(R28 *)rt_nil_check(l_A_1081))).f_ANYARG;
return rv1083; }
}
l_A_1081 = ((*(R28 *)rt_nil_check(l_A_1081))).f_NEXT;
}
l_G_1080 = ((*(R27 *)rt_nil_check(l_G_1080))).f_NEXT;
}
RT_B_TICK();
} L_end1082: ;
{ rt_int rv1084 = 1;
return rv1084; }
rt_raise(RT_X_INIT);
}
static R9 r_FIELD_SIZE_C(R27 * p_F, R9 p_C) { RT_B_TICK(); 
{ R9 rv1085 = (r_SIZE_OF(((*(R27 *)rt_nil_check(p_F))).f_T, r_FMT2(rt_str("(@).@", 5), p_C, ((*(R27 *)rt_nil_check(p_F))).f_CNAME))).f_C;
return rv1085; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_ALL(R22 * p_T, R9 p_C, R9 p_TAGN, rt_int p_MODE) { RT_B_TICK(); 
R9 l_R_1086; memset(&l_R_1086, 0, sizeof l_R_1086);
S_R9(&l_R_1086, r_MK(rt_str("", 0)), 0);
R27 * l_F_1087; memset(&l_F_1087, 0, sizeof l_F_1087);
l_F_1087 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1087 == NULL)) goto L_end1088;
{
if ((r_TEQ(((*(R27 *)rt_nil_check(l_F_1087))).f_TAGF, p_TAGN) && (!r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LDONE, ((*(R27 *)rt_nil_check(l_F_1087))).f_NAME))))
{
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(((*(R27 *)rt_nil_check(l_F_1087))).f_NAME, ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_1086, r_CAT(l_R_1086, r_LAY_FIELD(l_F_1087, p_T, p_C, p_MODE)), 0);
}
else
{
S_R9(&l_R_1086, r_CAT(l_R_1086, r_FMT2(rt_str(" if (@) {@ }", 12), r_VARIANT_COND(l_F_1087, p_T, p_C), r_LAY_FIELD(l_F_1087, p_T, p_C, p_MODE))), 0);
}
}
l_F_1087 = ((*(R27 *)rt_nil_check(l_F_1087))).f_NEXT;
}
RT_B_TICK();
} L_end1088: ;
{ R9 rv1089 = l_R_1086;
return rv1089; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_PARTS(R22 * p_T, R9 p_C) { RT_B_TICK(); 
R9 l_R_1090; memset(&l_R_1090, 0, sizeof l_R_1090);
S_R9(&l_R_1090, r_MK(rt_str("", 0)), 0);
R27 * l_F_1091; memset(&l_F_1091, 0, sizeof l_F_1091);
l_F_1091 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1091 == NULL)) goto L_end1092;
{
if ((((((*(R27 *)rt_nil_check(l_F_1091))).f_TAGF).f_LEN > ((rt_int)0LL)) && (!r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LDONE, r_CAT(r_MK(rt_str("|", 1)), ((*(R27 *)rt_nil_check(l_F_1091))).f_TAGF)))))
{
S_R9(&l_R_1090, r_CAT(l_R_1090, r_LAYOUT_VARIANTS(p_T, p_C, ((*(R27 *)rt_nil_check(l_F_1091))).f_TAGF)), 0);
}
l_F_1091 = ((*(R27 *)rt_nil_check(l_F_1091))).f_NEXT;
}
RT_B_TICK();
} L_end1092: ;
{ R9 rv1093 = l_R_1090;
return rv1093; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_SPEC(R22 * p_T, R9 p_C, R17 * p_P, R9 p_TAGN) { RT_B_TICK(); 
rt_int l_MODE_1094; memset(&l_MODE_1094, 0, sizeof l_MODE_1094);
l_MODE_1094 = ((rt_int)2LL);
R9 l_R_1095; memset(&l_R_1095, 0, sizeof l_R_1095);
S_R9(&l_R_1095, r_MK(rt_str("", 0)), 0);
if (((((*(R17 *)rt_nil_check(p_P))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_MODE_1094 = r_PACKING_VALUE(((*(R17 *)rt_nil_check(p_P))).f_NAME);
}
if ((((*(R17 *)rt_nil_check(p_P))).f_IV == ((rt_int)0LL)))
{
S_R9(&l_R_1095, r_LAYOUT_ALL(p_T, p_C, p_TAGN, l_MODE_1094), 0);
if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_1095, r_CAT(l_R_1095, r_LAYOUT_PARTS(p_T, p_C)), 0);
}
{ R9 rv1096 = l_R_1095;
return rv1096; }
}
{
R17 * l_E_1097; memset(&l_E_1097, 0, sizeof l_E_1097);
l_E_1097 = ((*(R17 *)rt_nil_check(p_P))).f_A;
for (;;) {
if ((l_E_1097 == NULL)) goto L_end1098;
{
if (((((*(R17 *)rt_nil_check(l_E_1097))).f_FL == ((rt_int)0LL)) || (((*(R17 *)rt_nil_check(l_E_1097))).f_FL == ((rt_int)2LL))))
{
{
R27 * l_F_1099; memset(&l_F_1099, 0, sizeof l_F_1099);
l_F_1099 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1099 == NULL)) goto L_end1100;
{
if ((r_TEQ(((*(R27 *)rt_nil_check(l_F_1099))).f_NAME, ((*(R17 *)rt_nil_check(l_E_1097))).f_NAME) && r_TEQ(((*(R27 *)rt_nil_check(l_F_1099))).f_TAGF, p_TAGN)))
{
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(((*(R27 *)rt_nil_check(l_F_1099))).f_NAME, ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (((((*(R17 *)rt_nil_check(l_E_1097))).f_FL == ((rt_int)2LL)) && r_ARG_MANIFEST(p_T, l_F_1099)))
{
}
else if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_1095, r_CAT(l_R_1095, r_LAY_FIELD(l_F_1099, p_T, p_C, l_MODE_1094)), 0);
}
else
{
S_R9(&l_R_1095, r_CAT(l_R_1095, r_FMT2(rt_str(" if (@) {@ }", 12), r_VARIANT_COND(l_F_1099, p_T, p_C), r_LAY_FIELD(l_F_1099, p_T, p_C, l_MODE_1094))), 0);
}
}
l_F_1099 = ((*(R27 *)rt_nil_check(l_F_1099))).f_NEXT;
}
RT_B_TICK();
} L_end1100: ;
}
}
else if ((((*(R17 *)rt_nil_check(l_E_1097))).f_FL == ((rt_int)1LL)))
{
S_R9(&l_R_1095, r_CAT(l_R_1095, r_LAYOUT_VARIANTS(p_T, p_C, ((*(R17 *)rt_nil_check(l_E_1097))).f_NAME)), 0);
}
else if ((((*(R17 *)rt_nil_check(l_E_1097))).f_FL == ((rt_int)5LL)))
{
S_R9(&l_R_1095, r_CAT(l_R_1095, r_LAY_FILL(r_FMT2(rt_str("rt_b_pack_size(@, 7, @)", 23), r_NUM((r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1097))).f_B)).f_V), r_NUM(l_MODE_1094)), r_FMT2(rt_str("rt_b_blank_bits(@, @)", 21), r_NUM((r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1097))).f_B)).f_V), r_NUM(l_MODE_1094)), l_MODE_1094)), 0);
}
else
{
S_R9(&l_R_1095, r_CAT(l_R_1095, r_LAY_FILL(r_NUM((r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1097))).f_B)).f_V), r_FMT1(rt_str("rt_b_zeros(@)", 13), r_NUM((r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1097))).f_B)).f_V)), l_MODE_1094)), 0);
}
l_E_1097 = ((*(R17 *)rt_nil_check(l_E_1097))).f_NEXT;
}
RT_B_TICK();
} L_end1098: ;
}
{ R9 rv1101 = l_R_1095;
return rv1101; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_VARIANTS(R22 * p_T, R9 p_C, R9 p_TAGN) { RT_B_TICK(); 
R9 l_R_1102; memset(&l_R_1102, 0, sizeof l_R_1102);
S_R9(&l_R_1102, r_MK(rt_str("", 0)), 0);
R9 l_WORD_1103; memset(&l_WORD_1103, 0, sizeof l_WORD_1103);
S_R9(&l_WORD_1103, r_MK(rt_str(" if", 3)), 0);
rt_int l_ELSE_MODE_1104; memset(&l_ELSE_MODE_1104, 0, sizeof l_ELSE_MODE_1104);
l_ELSE_MODE_1104 = ((rt_int)2LL);
R27 * l_TF_1105; memset(&l_TF_1105, 0, sizeof l_TF_1105);
l_TF_1105 = r_FIND_FIELD(p_T, p_TAGN);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(r_CAT(r_MK(rt_str("|", 1)), p_TAGN), ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (r_IS_RECORD_REP(p_T))
{
{
R17 * l_V_1106; memset(&l_V_1106, 0, sizeof l_V_1106);
l_V_1106 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_C;
for (;;) {
if ((l_V_1106 == NULL)) goto L_end1107;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_V_1106))).f_NAME, p_TAGN))
{
{
R17 * l_S_1108; memset(&l_S_1108, 0, sizeof l_S_1108);
l_S_1108 = ((*(R17 *)rt_nil_check(l_V_1106))).f_A;
if ((!(((*(R17 *)rt_nil_check(l_V_1106))).f_B == NULL)))
{
l_ELSE_MODE_1104 = r_PACKING_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_1106))).f_B))).f_NAME);
}
for (;;) {
if ((l_S_1108 == NULL)) goto L_end1109;
{
{
R9 l_COND_1110; memset(&l_COND_1110, 0, sizeof l_COND_1110);
S_R9(&l_COND_1110, r_MK(rt_str("0", 1)), 0);
R17 * l_L_1111; memset(&l_L_1111, 0, sizeof l_L_1111);
l_L_1111 = ((*(R17 *)rt_nil_check(l_S_1108))).f_A;
R17 * l_P_1112; memset(&l_P_1112, 0, sizeof l_P_1112);
l_P_1112 = ((*(R17 *)rt_nil_check(l_S_1108))).f_B;
R17 * l_OUTER_1113; memset(&l_OUTER_1113, 0, sizeof l_OUTER_1113);
l_OUTER_1113 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
R9 l_BODY_1114; memset(&l_BODY_1114, 0, sizeof l_BODY_1114);
S_R9(&l_BODY_1114, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1111 == NULL)) goto L_end1115;
{
S_R9(&l_COND_1110, r_FMT4(rt_str("@ || (@).@ == @", 15), l_COND_1110, p_C, ((*(R27 *)rt_nil_check(l_TF_1105))).f_CNAME, (r_EXPR(l_L_1111, ((*(R27 *)rt_nil_check(l_TF_1105))).f_T)).f_C), 0);
l_L_1111 = ((*(R17 *)rt_nil_check(l_L_1111))).f_NEXT;
}
RT_B_TICK();
} L_end1115: ;
for (;;) {
if ((l_P_1112 == NULL)) goto L_end1116;
{
S_R9(&l_BODY_1114, r_CAT(l_BODY_1114, r_LAYOUT_SPEC(p_T, p_C, l_P_1112, p_TAGN)), 0);
l_P_1112 = ((*(R17 *)rt_nil_check(l_P_1112))).f_NEXT;
}
RT_B_TICK();
} L_end1116: ;
S_R9(&l_BODY_1114, r_CAT(l_BODY_1114, r_LAYOUT_ALL(p_T, p_C, p_TAGN, ((rt_int)2LL))), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_OUTER_1113;
S_R9(&l_R_1102, r_CAT(l_R_1102, r_FMT3(rt_str("@ (@) {@ }", 10), l_WORD_1103, l_COND_1110, l_BODY_1114)), 0);
S_R9(&l_WORD_1103, r_MK(rt_str(" else if", 8)), 0);
}
l_S_1108 = ((*(R17 *)rt_nil_check(l_S_1108))).f_NEXT;
}
RT_B_TICK();
} L_end1109: ;
}
}
l_V_1106 = ((*(R17 *)rt_nil_check(l_V_1106))).f_NEXT;
}
RT_B_TICK();
} L_end1107: ;
}
}
{
R17 * l_OUTER_1117; memset(&l_OUTER_1117, 0, sizeof l_OUTER_1117);
l_OUTER_1117 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
R9 l_REST_1118; memset(&l_REST_1118, 0, sizeof l_REST_1118);
S_R9(&l_REST_1118, r_LAYOUT_ALL(p_T, p_C, p_TAGN, l_ELSE_MODE_1104), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_OUTER_1117;
if (r_TEQS(l_WORD_1103, rt_str(" if", 3)))
{
{ R9 rv1119 = l_REST_1118;
return rv1119; }
}
{ R9 rv1120 = r_FMT2(rt_str("@ else {@ }", 11), l_R_1102, l_REST_1118);
return rv1120; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_ARG_MANIFEST(R22 * p_T, R27 * p_F) { RT_B_TICK(); 
R27 * l_G_1121; memset(&l_G_1121, 0, sizeof l_G_1121);
l_G_1121 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R28 * l_A_1122; memset(&l_A_1122, 0, sizeof l_A_1122);
l_A_1122 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_G_1121 == NULL) || (l_A_1122 == NULL))) goto L_end1123;
{
if ((!(((*(R27 *)rt_nil_check(l_G_1121))).f_KIND == ((rt_int)0LL))))
{
if ((l_G_1121 == p_F))
{
{ rt_int rv1124 = ((((*(R28 *)rt_nil_check(l_A_1122))).f_MLO).f_OK && (!((*(R28 *)rt_nil_check(l_A_1122))).f_ANYARG));
return rv1124; }
}
l_A_1122 = ((*(R28 *)rt_nil_check(l_A_1122))).f_NEXT;
}
l_G_1121 = ((*(R27 *)rt_nil_check(l_G_1121))).f_NEXT;
}
RT_B_TICK();
} L_end1123: ;
{ rt_int rv1125 = 0;
return rv1125; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ANY_TAG(R17 * p_A) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv1126 = 0;
return rv1126; }
}
{
R12 * l_Y_1127; memset(&l_Y_1127, 0, sizeof l_Y_1127);
l_Y_1127 = r_LOOKUP(((*(R17 *)rt_nil_check(p_A))).f_NAME);
if ((l_Y_1127 == NULL))
{
{ rt_int rv1128 = 0;
return rv1128; }
}
{ rt_int rv1129 = ((((*(R12 *)rt_nil_check(l_Y_1127))).f_KIND == g_Y_CONST) && r_TEQS(((*(R12 *)rt_nil_check(l_Y_1127))).f_ACCESS, rt_str("ANY", 3)));
return rv1129; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R17 * p_TS) { RT_B_TICK(); 
R17 * l_D_1130; memset(&l_D_1130, 0, sizeof l_D_1130);
l_D_1130 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_CLASS_1131; memset(&l_CLASS_1131, 0, sizeof l_CLASS_1131);
l_CLASS_1131 = NULL;
R21 * l_TARGS_1132; memset(&l_TARGS_1132, 0, sizeof l_TARGS_1132);
l_TARGS_1132 = NULL;
R28 * l_VARGS_1133; memset(&l_VARGS_1133, 0, sizeof l_VARGS_1133);
l_VARGS_1133 = NULL;
R28 * l_VTAIL_1134; memset(&l_VTAIL_1134, 0, sizeof l_VTAIL_1134);
l_VTAIL_1134 = NULL;
R17 * l_A_1135; memset(&l_A_1135, 0, sizeof l_A_1135);
l_A_1135 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R17 * l_F_1136; memset(&l_F_1136, 0, sizeof l_F_1136);
l_F_1136 = ((*(R17 *)rt_nil_check(l_D_1130))).f_A;
for (;;) {
if ((l_F_1136 == NULL)) goto L_end1137;
{
{
R17 * l_N_1138; memset(&l_N_1138, 0, sizeof l_N_1138);
l_N_1138 = ((*(R17 *)rt_nil_check(l_F_1136))).f_A;
for (;;) {
if ((l_N_1138 == NULL)) goto L_end1139;
{
if ((l_A_1135 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R17 *)rt_nil_check(l_F_1136))).f_B == NULL))
{
{
R21 * l_B_1140; memset(&l_B_1140, 0, sizeof l_B_1140);
l_B_1140 = ({ R21 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R21(&(*(R21 *)rt_nil_check(l_B_1140)), ({ R21 rc1141; memset(&rc1141, 0, sizeof rc1141);  S_R9(&rc1141.f_NAME, ((*(R17 *)rt_nil_check(l_N_1138))).f_NAME, 0); rc1141.f_T = r_ARG_TYPE(l_A_1135); S_R9(&rc1141.f_C, r_NO_TEXT(), 0); rc1141.f_HASMV = 0; rc1141.f_MV = ((rt_int)0LL); rc1141.f_R = NULL; rc1141.f_NEXT = l_TARGS_1132; rc1141; }), 0);
l_TARGS_1132 = l_B_1140;
}
}
else
{
{
R28 * l_V_1142; memset(&l_V_1142, 0, sizeof l_V_1142);
l_V_1142 = ({ R28 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R28(&(*(R28 *)rt_nil_check(l_V_1142)), ({ R28 rc1143; memset(&rc1143, 0, sizeof rc1143);  S_R9(&rc1143.f_LO, r_NO_TEXT(), 0); S_R9(&rc1143.f_HI, r_NO_TEXT(), 0); S_R25(&rc1143.f_MLO, r_NO_MVAL(), 0); S_R25(&rc1143.f_MHI, r_NO_MVAL(), 0); rc1143.f_ANYARG = 0; rc1143.f_NEXT = NULL; rc1143; }), 0);
if (((((*(R17 *)rt_nil_check(l_A_1135))).f_KIND == g_N_ANY) || r_IS_ANY_TAG(l_A_1135)))
{
if ((!(((*(R17 *)rt_nil_check(l_F_1136))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_1135))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R28 *)rt_nil_check(l_V_1142))).f_ANYARG = 1;
}
else if ((((*(R17 *)rt_nil_check(l_A_1135))).f_KIND == g_N_DONTCARE))
{
((*(R28 *)rt_nil_check(l_V_1142))).f_ANYARG = 1;
S_R9(&((*(R28 *)rt_nil_check(l_V_1142))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R17 *)rt_nil_check(l_A_1135))).f_KIND == g_TS_GEN))
{
((*(R28 *)rt_nil_check(l_V_1142))).f_ANYARG = 1;
S_R9(&((*(R28 *)rt_nil_check(l_V_1142))).f_HI, r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(l_A_1135))).f_NAME), 0);
}
else
{
{
R22 * l_FT_1144; memset(&l_FT_1144, 0, sizeof l_FT_1144);
l_FT_1144 = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_1136))).f_B);
S_R9(&((*(R28 *)rt_nil_check(l_V_1142))).f_LO, r_CONVERT(r_EXPR(l_A_1135, l_FT_1144), l_FT_1144, ((*(R17 *)rt_nil_check(l_A_1135))).f_LINE, r_NO_TEXT()), 0);
S_R25(&((*(R28 *)rt_nil_check(l_V_1142))).f_MLO, r_ENUM_MANIFEST(l_A_1135, l_FT_1144), 0);
if ((((((*(R28 *)rt_nil_check(l_V_1142))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_FT_1144))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_FT_1144))).f_MHI).f_OK))
{
if ((((((*(R28 *)rt_nil_check(l_V_1142))).f_MLO).f_V < (((*(R22 *)rt_nil_check(l_FT_1144))).f_MLO).f_V) || ((((*(R28 *)rt_nil_check(l_V_1142))).f_MLO).f_V > (((*(R22 *)rt_nil_check(l_FT_1144))).f_MHI).f_V)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_1135))).f_LINE, rt_str("the argument is outside the range of the parameter (3.9.1)", 58));
}
}
if (((((*(R17 *)rt_nil_check(l_F_1136))).f_IV == ((rt_int)1LL)) && (!(((*(R28 *)rt_nil_check(l_V_1142))).f_MLO).f_OK)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_1135))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_1134 == NULL))
{
l_VARGS_1133 = l_V_1142;
}
else
{
((*(R28 *)rt_nil_check(l_VTAIL_1134))).f_NEXT = l_V_1142;
}
l_VTAIL_1134 = l_V_1142;
}
}
l_A_1135 = ((*(R17 *)rt_nil_check(l_A_1135))).f_NEXT;
l_N_1138 = ((*(R17 *)rt_nil_check(l_N_1138))).f_NEXT;
}
RT_B_TICK();
} L_end1139: ;
}
l_F_1136 = ((*(R17 *)rt_nil_check(l_F_1136))).f_NEXT;
}
RT_B_TICK();
} L_end1137: ;
if ((!(l_A_1135 == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
{
R12 * l_R_1145; memset(&l_R_1145, 0, sizeof l_R_1145);
l_R_1145 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_1145 == NULL)) goto L_end1146;
{
if (((((*(R12 *)rt_nil_check(l_R_1145))).f_DECL == l_D_1130) && r_SAME_BINDS(((*(R12 *)rt_nil_check(l_R_1145))).f_BINDINGS, l_TARGS_1132)))
{
l_CLASS_1131 = ((*(R12 *)rt_nil_check(l_R_1145))).f_T;
goto L_end1146;
}
l_R_1145 = ((*(R12 *)rt_nil_check(l_R_1145))).f_INSTANCES;
}
RT_B_TICK();
} L_end1146: ;
}
if ((l_CLASS_1131 == NULL))
{
{
R12 * l_R_1147; memset(&l_R_1147, 0, sizeof l_R_1147);
l_R_1147 = r_NEW_SYM(g_Y_TYPE, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R21 * l_B_1148; memset(&l_B_1148, 0, sizeof l_B_1148);
l_B_1148 = l_TARGS_1132;
R21 * l_SAVED_1149; memset(&l_SAVED_1149, 0, sizeof l_SAVED_1149);
l_SAVED_1149 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
rt_int l_ENTERED_1150; memset(&l_ENTERED_1150, 0, sizeof l_ENTERED_1150);
((*(R12 *)rt_nil_check(l_R_1147))).f_DECL = l_D_1130;
((*(R12 *)rt_nil_check(l_R_1147))).f_BINDINGS = l_TARGS_1132;
((*(R12 *)rt_nil_check(l_R_1147))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
((*(R7 *)rt_nil_check(g_W))).f_RECS = l_R_1147;
l_ENTERED_1150 = r_ENTER_MODULE_FOR(p_Y);
r_OPEN_SCOPE();
for (;;) {
if ((l_B_1148 == NULL)) goto L_end1151;
{
{
R12 * l_TY_1152; memset(&l_TY_1152, 0, sizeof l_TY_1152);
l_TY_1152 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_B_1148))).f_NAME);
((*(R12 *)rt_nil_check(l_TY_1152))).f_T = ((*(R21 *)rt_nil_check(l_B_1148))).f_T;
r_DEFINE(l_TY_1152, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_1148 = ((*(R21 *)rt_nil_check(l_B_1148))).f_NEXT;
}
RT_B_TICK();
} L_end1151: ;
l_F_1136 = ((*(R17 *)rt_nil_check(l_D_1130))).f_A;
for (;;) {
if ((l_F_1136 == NULL)) goto L_end1153;
{
if ((!(((*(R17 *)rt_nil_check(l_F_1136))).f_B == NULL)))
{
{
R17 * l_N_1154; memset(&l_N_1154, 0, sizeof l_N_1154);
l_N_1154 = ((*(R17 *)rt_nil_check(l_F_1136))).f_A;
for (;;) {
if ((l_N_1154 == NULL)) goto L_end1155;
{
{
R12 * l_P_1156; memset(&l_P_1156, 0, sizeof l_P_1156);
l_P_1156 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(l_N_1154))).f_NAME);
((*(R12 *)rt_nil_check(l_P_1156))).f_T = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_1136))).f_B);
S_R9(&((*(R12 *)rt_nil_check(l_P_1156))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), r_CID(((*(R17 *)rt_nil_check(l_N_1154))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_P_1156))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_P_1156))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_1156, ((*(R17 *)rt_nil_check(l_F_1136))).f_LINE);
}
l_N_1154 = ((*(R17 *)rt_nil_check(l_N_1154))).f_NEXT;
}
RT_B_TICK();
} L_end1155: ;
}
}
l_F_1136 = ((*(R17 *)rt_nil_check(l_F_1136))).f_NEXT;
}
RT_B_TICK();
} L_end1153: ;
if ((l_TARGS_1132 == NULL))
{
l_CLASS_1131 = r_RESOLVE_RECORD(((*(R17 *)rt_nil_check(l_D_1130))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R17 *)rt_nil_check(l_D_1130))).f_A);
}
else
{
l_CLASS_1131 = r_RESOLVE_RECORD(((*(R17 *)rt_nil_check(l_D_1130))).f_B, r_NO_TEXT(), p_Y, ((*(R17 *)rt_nil_check(l_D_1130))).f_A);
}
S_R9(&((*(R22 *)rt_nil_check(l_CLASS_1131))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R12 *)rt_nil_check(l_R_1147))).f_T = l_CLASS_1131;
r_CLOSE_SCOPE();
if (l_ENTERED_1150)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1149;
}
}
{
R22 * l_T_1157; memset(&l_T_1157, 0, sizeof l_T_1157);
l_T_1157 = r_COPY_TYP(l_CLASS_1131);
((*(R22 *)rt_nil_check(l_T_1157))).f_ARGS = l_VARGS_1133;
{ R22 * rv1158 = l_T_1157;
return rv1158; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_1159; memset(&l_P_1159, 0, sizeof l_P_1159);
l_P_1159 = p_A;
R21 * l_Q_1160; memset(&l_Q_1160, 0, sizeof l_Q_1160);
l_Q_1160 = p_B;
for (;;) {
if (((l_P_1159 == NULL) || (l_Q_1160 == NULL))) goto L_end1161;
{
if ((((!r_SAME_TYPE(((*(R21 *)rt_nil_check(l_P_1159))).f_T, ((*(R21 *)rt_nil_check(l_Q_1160))).f_T)) || (!r_SAME_LENGTH(((*(R21 *)rt_nil_check(l_P_1159))).f_T, ((*(R21 *)rt_nil_check(l_Q_1160))).f_T))) || (!r_SAME_REPS(((*(R21 *)rt_nil_check(l_P_1159))).f_T, ((*(R21 *)rt_nil_check(l_Q_1160))).f_T))))
{
{ rt_int rv1162 = 0;
return rv1162; }
}
l_P_1159 = ((*(R21 *)rt_nil_check(l_P_1159))).f_NEXT;
l_Q_1160 = ((*(R21 *)rt_nil_check(l_Q_1160))).f_NEXT;
}
RT_B_TICK();
} L_end1161: ;
{ rt_int rv1163 = ((l_P_1159 == NULL) && (l_Q_1160 == NULL));
return rv1163; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R22 * p_T) { RT_B_TICK(); 
R28 * l_A_1164; memset(&l_A_1164, 0, sizeof l_A_1164);
l_A_1164 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_1164 == NULL)) goto L_end1165;
{
if (((*(R28 *)rt_nil_check(l_A_1164))).f_ANYARG)
{
{ rt_int rv1166 = 1;
return rv1166; }
}
l_A_1164 = ((*(R28 *)rt_nil_check(l_A_1164))).f_NEXT;
}
RT_B_TICK();
} L_end1165: ;
{ rt_int rv1167 = 0;
return rv1167; }
rt_raise(RT_X_INIT);
}
static R9 r_VARIANT_COND(R27 * p_F, R22 * p_T, R9 p_SELF) { RT_B_TICK(); 
R17 * l_L_1168; memset(&l_L_1168, 0, sizeof l_L_1168);
l_L_1168 = ((*(R27 *)rt_nil_check(p_F))).f_LABELS;
R9 l_C_1169; memset(&l_C_1169, 0, sizeof l_C_1169);
S_R9(&l_C_1169, r_MK(rt_str("0", 1)), 0);
R27 * l_TF_1170; memset(&l_TF_1170, 0, sizeof l_TF_1170);
l_TF_1170 = r_FIND_FIELD(p_T, ((*(R27 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_1168 == NULL)) goto L_end1171;
{
if ((((*(R17 *)rt_nil_check(l_L_1168))).f_KIND == g_N_RANGE))
{
S_R9(&l_C_1169, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_1169, p_SELF, ((*(R27 *)rt_nil_check(l_TF_1170))).f_CNAME), 0);
S_R9(&l_C_1169, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_1169, (r_EXPR(((*(R17 *)rt_nil_check(l_L_1168))).f_A, ((*(R27 *)rt_nil_check(l_TF_1170))).f_T)).f_C, p_SELF, ((*(R27 *)rt_nil_check(l_TF_1170))).f_CNAME), 0);
S_R9(&l_C_1169, r_FMT2(rt_str("@@)", 3), l_C_1169, (r_EXPR(((*(R17 *)rt_nil_check(l_L_1168))).f_B, ((*(R27 *)rt_nil_check(l_TF_1170))).f_T)).f_C), 0);
}
else
{
S_R9(&l_C_1169, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_1169, p_SELF, ((*(R27 *)rt_nil_check(l_TF_1170))).f_CNAME, (r_EXPR(l_L_1168, ((*(R27 *)rt_nil_check(l_TF_1170))).f_T)).f_C), 0);
}
l_L_1168 = ((*(R17 *)rt_nil_check(l_L_1168))).f_NEXT;
}
RT_B_TICK();
} L_end1171: ;
{ R9 rv1172 = r_FMT1(rt_str("(@)", 3), l_C_1169);
return rv1172; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R22 * p_T) { RT_B_TICK(); 
R9 l_C_1173; memset(&l_C_1173, 0, sizeof l_C_1173);
S_R9(&l_C_1173, ((*(R22 *)rt_nil_check(p_T))).f_CNAME, 0);
R27 * l_F_1174; memset(&l_F_1174, 0, sizeof l_F_1174);
l_F_1174 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_BODY_1175; memset(&l_BODY_1175, 0, sizeof l_BODY_1175);
S_R9(&l_BODY_1175, r_MK(rt_str("", 0)), 0);
R9 l_ASSIGN_1176; memset(&l_ASSIGN_1176, 0, sizeof l_ASSIGN_1176);
S_R9(&l_ASSIGN_1176, r_MK(rt_str("", 0)), 0);
R9 l_COPY_1177; memset(&l_COPY_1177, 0, sizeof l_COPY_1177);
S_R9(&l_COPY_1177, r_MK(rt_str("", 0)), 0);
R9 l_EQ_1178; memset(&l_EQ_1178, 0, sizeof l_EQ_1178);
S_R9(&l_EQ_1178, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_1174 == NULL)) goto L_end1179;
{
S_R9(&l_BODY_1175, r_FMT3(rt_str("@ @ @;", 6), l_BODY_1175, r_CTYPE(((*(R27 *)rt_nil_check(l_F_1174))).f_T), ((*(R27 *)rt_nil_check(l_F_1174))).f_CNAME), 0);
S_R9(&l_COPY_1177, r_FMT3(rt_str("@ d.@ = @;", 10), l_COPY_1177, ((*(R27 *)rt_nil_check(l_F_1174))).f_CNAME, r_COPY_OF(((*(R27 *)rt_nil_check(l_F_1174))).f_T, r_FMT1(rt_str("s.@", 3), ((*(R27 *)rt_nil_check(l_F_1174))).f_CNAME))), 0);
if ((((*(R27 *)rt_nil_check(l_F_1174))).f_KIND == ((rt_int)1LL)))
{
S_R9(&l_ASSIGN_1176, r_FMT2(rt_str("@ if (!(@)) rt_raise(RT_B_TYPE_MISMATCH);", 41), l_ASSIGN_1176, r_EQUAL_CODE(((*(R27 *)rt_nil_check(l_F_1174))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R27 *)rt_nil_check(l_F_1174))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R27 *)rt_nil_check(l_F_1174))).f_CNAME))), 0);
}
else if ((((*(R27 *)rt_nil_check(l_F_1174))).f_KIND == ((rt_int)2LL)))
{
S_R9(&l_ASSIGN_1176, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_1176, ((*(R27 *)rt_nil_check(l_F_1174))).f_CNAME, ((*(R27 *)rt_nil_check(l_F_1174))).f_CNAME, ((*(R27 *)rt_nil_check(l_F_1174))).f_CNAME), 0);
}
else
{
S_R9(&l_ASSIGN_1176, r_FMT2(rt_str("@ @", 3), l_ASSIGN_1176, r_ASSIGN_CODE(((*(R27 *)rt_nil_check(l_F_1174))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R27 *)rt_nil_check(l_F_1174))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R27 *)rt_nil_check(l_F_1174))).f_CNAME))), 0);
}
if (((((*(R27 *)rt_nil_check(l_F_1174))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R9(&l_EQ_1178, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1178, r_VARIANT_COND(l_F_1174, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R27 *)rt_nil_check(l_F_1174))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R27 *)rt_nil_check(l_F_1174))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R27 *)rt_nil_check(l_F_1174))).f_CNAME))), 0);
}
else
{
S_R9(&l_EQ_1178, r_FMT2(rt_str("@ && @", 6), l_EQ_1178, r_EQUAL_CODE(((*(R27 *)rt_nil_check(l_F_1174))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R27 *)rt_nil_check(l_F_1174))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R27 *)rt_nil_check(l_F_1174))).f_CNAME))), 0);
}
l_F_1174 = ((*(R27 *)rt_nil_check(l_F_1174))).f_NEXT;
}
RT_B_TICK();
} L_end1179: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_1173, l_BODY_1175));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_1173, l_C_1173, l_C_1173));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_1173, l_C_1173, l_C_1173));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_1173, l_C_1173, l_C_1173, l_ASSIGN_1176));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_1173, l_C_1173, l_C_1173, l_EQ_1178));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_1173, l_C_1173, l_C_1173));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s;", 28), l_C_1173, l_C_1173, l_C_1173, l_C_1173));
r_EMIT(g_O_HELPERS, r_FMT1(rt_str("@ return d; }", 13), l_COPY_1177));
}
static R9 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R9 l_ET_C_1180; memset(&l_ET_C_1180, 0, sizeof l_ET_C_1180);
S_R9(&l_ET_C_1180, r_CTYPE(p_ELEM), 0);
R9 l_KEY_1181; memset(&l_KEY_1181, 0, sizeof l_KEY_1181);
S_R9(&l_KEY_1181, r_FMT3(rt_str("@/@/@", 5), l_ET_C_1180, r_NUM(p_DIMS), r_NUM(((*(R22 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R12 * l_Y_1182; memset(&l_Y_1182, 0, sizeof l_Y_1182);
l_Y_1182 = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_1182 == NULL)) goto L_end1183;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_1182))).f_NAME, l_KEY_1181) && r_SAME_TYPE(((*(R12 *)rt_nil_check(l_Y_1182))).f_T, p_ELEM)))
{
{ R9 rv1184 = ((*(R12 *)rt_nil_check(l_Y_1182))).f_ACCESS;
return rv1184; }
}
l_Y_1182 = ((*(R12 *)rt_nil_check(l_Y_1182))).f_INSTANCES;
}
RT_B_TICK();
} L_end1183: ;
l_Y_1182 = r_NEW_SYM(g_Y_TYPE, l_KEY_1181);
((*(R12 *)rt_nil_check(l_Y_1182))).f_T = p_ELEM;
S_R9(&((*(R12 *)rt_nil_check(l_Y_1182))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R12 *)rt_nil_check(l_Y_1182))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R7 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_1182;
{
R9 l_C_1185; memset(&l_C_1185, 0, sizeof l_C_1185);
S_R9(&l_C_1185, ((*(R12 *)rt_nil_check(l_Y_1182))).f_ACCESS, 0);
R9 l_D_1186; memset(&l_D_1186, 0, sizeof l_D_1186);
S_R9(&l_D_1186, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_1185, l_C_1185));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_1185, l_D_1186, l_D_1186, l_ET_C_1180));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_1185, l_C_1185, l_C_1185));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_1185, l_C_1185, l_C_1185));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_1185, l_C_1185, l_C_1185, l_D_1186));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_1186, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_1185, l_C_1185, l_C_1185, l_D_1186));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_1186, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_1185, l_C_1185, l_C_1185));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s; ", 29), l_C_1185, l_C_1185, l_C_1185, l_C_1185));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("rt_int n = rt_b_extent(@, s.lo, s.hi); d.p = rt_alloc((n > 0 \? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = @; return d; }", 140), l_D_1186, r_COPY_OF(p_ELEM, r_MK(rt_str("s.p[i]", 6)))));
}
{ R9 rv1187 = ((*(R12 *)rt_nil_check(l_Y_1182))).f_ACCESS;
return rv1187; }
rt_raise(RT_X_INIT);
}
static R9 r_INIT_CODE(R22 * p_T, R9 p_LV) { RT_B_TICK(); 
rt_int l_K_1188; memset(&l_K_1188, 0, sizeof l_K_1188);
l_K_1188 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1188 == g_T_XFIX))
{
{ R9 rv1189 = r_FMT2(rt_str("@ = rt_b_zeros(@);", 18), p_LV, r_NUM(r_XFIX_SIZE(p_T)));
return rv1189; }
}
else if ((l_K_1188 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1190 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv1190; }
}
{ R9 rv1191 = r_FMT2(rt_str("@ = rt_b_str_new(@, 0);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv1191; }
}
else if ((l_K_1188 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1192 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv1192; }
}
{ R9 rv1193 = r_FMT2(rt_str("@ = rt_b_str_new(@, 1);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv1193; }
}
else if ((l_K_1188 == g_T_SEM))
{
{ R9 rv1194 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv1194; }
}
else if ((l_K_1188 == g_T_ABS))
{
{ R9 rv1195 = r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv1195; }
}
else if ((l_K_1188 == g_T_ARR))
{
{
R28 * l_B_1196; memset(&l_B_1196, 0, sizeof l_B_1196);
l_B_1196 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_1197; memset(&l_I_1197, 0, sizeof l_I_1197);
l_I_1197 = ((rt_int)0LL);
R9 l_R_1198; memset(&l_R_1198, 0, sizeof l_R_1198);
S_R9(&l_R_1198, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_1196 == NULL)) goto L_end1199;
{
S_R9(&l_R_1198, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_1198, p_LV, r_NUM(l_I_1197), ((*(R28 *)rt_nil_check(l_B_1196))).f_LO), 0);
S_R9(&l_R_1198, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_1198, p_LV, r_NUM(l_I_1197), ((*(R28 *)rt_nil_check(l_B_1196))).f_HI), 0);
l_I_1197 = rt_add(l_I_1197, ((rt_int)1LL));
l_B_1196 = ((*(R28 *)rt_nil_check(l_B_1196))).f_NEXT;
}
RT_B_TICK();
} L_end1199: ;
S_R9(&l_R_1198, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_1198, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
if ((r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)).f_OK)
{
S_R9(&l_R_1198, r_FMT4(rt_str("@ @.p = rt_b_array_alloc_bits(n, sizeof *@.p, @", 47), l_R_1198, p_LV, p_LV, r_FMT2(rt_str("rt_b_pack_size(n, @, @));", 25), r_NUM((r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)).f_V), r_NUM(r_PACKING_OF(p_T)))), 0);
}
else
{
S_R9(&l_R_1198, r_FMT4(rt_str("@ @.p = rt_b_array_alloc(n, sizeof *@.p);", 41), l_R_1198, p_LV, p_LV, p_LV), 0);
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_ELEM))
{
{
R9 l_IV_1200; memset(&l_IV_1200, 0, sizeof l_IV_1200);
S_R9(&l_IV_1200, r_NEW_NAME(rt_str("i", 1)), 0);
S_R9(&l_R_1198, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_1198, l_IV_1200, l_IV_1200, l_IV_1200), 0);
S_R9(&l_R_1198, r_FMT2(rt_str("@ @ }", 5), l_R_1198, r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_1200))), 0);
}
}
if ((!(r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)).f_OK))
{
S_R9(&l_R_1198, r_FMT4(rt_str("@ rt_b_array_check(rt_b_pack_size(n, n \? @ : 0, @));", 52), l_R_1198, (r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT1(rt_str("@.p[0]", 6), p_LV))).f_C, r_NUM(r_PACKING_OF(p_T)), r_MK(rt_str("", 0))), 0);
}
{ R9 rv1201 = r_CATS(l_R_1198, rt_str(" }", 2));
return rv1201; }
}
}
else if ((l_K_1188 == g_T_REC))
{
{
R27 * l_F_1202; memset(&l_F_1202, 0, sizeof l_F_1202);
l_F_1202 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R28 * l_A_1203; memset(&l_A_1203, 0, sizeof l_A_1203);
l_A_1203 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R9 l_R_1204; memset(&l_R_1204, 0, sizeof l_R_1204);
S_R9(&l_R_1204, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_1202 == NULL)) goto L_end1205;
{
if ((!(((*(R27 *)rt_nil_check(l_F_1202))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_1203 == NULL)))
{
if ((!((*(R28 *)rt_nil_check(l_A_1203))).f_ANYARG))
{
S_R9(&l_R_1204, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_1204, p_LV, ((*(R27 *)rt_nil_check(l_F_1202))).f_CNAME, ((*(R28 *)rt_nil_check(l_A_1203))).f_LO), 0);
}
else if (((((*(R27 *)rt_nil_check(l_F_1202))).f_KIND == ((rt_int)2LL)) && ((((*(R28 *)rt_nil_check(l_A_1203))).f_HI).f_LEN == ((rt_int)0LL))))
{
S_R9(&l_R_1204, r_FMT3(rt_str("@ @.@ = INT64_MIN;", 18), l_R_1204, p_LV, ((*(R27 *)rt_nil_check(l_F_1202))).f_CNAME), 0);
}
l_A_1203 = ((*(R28 *)rt_nil_check(l_A_1203))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R27 *)rt_nil_check(l_F_1202))).f_T))
{
S_R9(&l_R_1204, r_FMT2(rt_str("@ @", 3), l_R_1204, r_SUBST_SELF(r_INIT_CODE(((*(R27 *)rt_nil_check(l_F_1202))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R27 *)rt_nil_check(l_F_1202))).f_CNAME)), p_LV)), 0);
}
l_F_1202 = ((*(R27 *)rt_nil_check(l_F_1202))).f_NEXT;
}
RT_B_TICK();
} L_end1205: ;
{ R9 rv1206 = l_R_1204;
return rv1206; }
}
}
{ R9 rv1207 = r_NO_TEXT();
return rv1207; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1208; memset(&l_K_1208, 0, sizeof l_K_1208);
l_K_1208 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((((((l_K_1208 == g_T_STR) || (l_K_1208 == g_T_BITS)) || (l_K_1208 == g_T_ARR)) || (l_K_1208 == g_T_SEM)) || (l_K_1208 == g_T_XFIX)))
{
{ rt_int rv1209 = 1;
return rv1209; }
}
else if ((l_K_1208 == g_T_ABS))
{
{ rt_int rv1210 = r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1210; }
}
else if ((l_K_1208 == g_T_REC))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv1211 = 1;
return rv1211; }
}
{
R27 * l_F_1212; memset(&l_F_1212, 0, sizeof l_F_1212);
l_F_1212 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1212 == NULL)) goto L_end1213;
{
if (r_NEEDS_INIT(((*(R27 *)rt_nil_check(l_F_1212))).f_T))
{
{ rt_int rv1214 = 1;
return rv1214; }
}
l_F_1212 = ((*(R27 *)rt_nil_check(l_F_1212))).f_NEXT;
}
RT_B_TICK();
} L_end1213: ;
}
}
{ rt_int rv1215 = 0;
return rv1215; }
rt_raise(RT_X_INIT);
}
static R9 r_COPY_OF(R22 * p_T, R9 p_V) { RT_B_TICK(); 
rt_int l_K_1216; memset(&l_K_1216, 0, sizeof l_K_1216);
l_K_1216 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((((l_K_1216 == g_T_STR) || (l_K_1216 == g_T_BITS)) || (l_K_1216 == g_T_XFIX)))
{
{ R9 rv1217 = r_FMT1(rt_str("rt_str_copy(@)", 14), p_V);
return rv1217; }
}
else if ((l_K_1216 == g_T_ABS))
{
{ R9 rv1218 = r_COPY_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_V);
return rv1218; }
}
else if (((l_K_1216 == g_T_ARR) || (l_K_1216 == g_T_REC)))
{
{ R9 rv1219 = r_FMT2(rt_str("C_@(@)", 6), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_V);
return rv1219; }
}
{ R9 rv1220 = p_V;
return rv1220; }
rt_raise(RT_X_INIT);
}
static R9 r_ASSIGN_CODE(R22 * p_T, R9 p_LV, R9 p_RV) { RT_B_TICK(); 
rt_int l_K_1221; memset(&l_K_1221, 0, sizeof l_K_1221);
l_K_1221 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((((l_K_1221 == g_T_STR) || (l_K_1221 == g_T_BITS)) || (l_K_1221 == g_T_XFIX)))
{
{ R9 rv1222 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv1222; }
}
else if ((l_K_1221 == g_T_ABS))
{
{ R9 rv1223 = r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv1223; }
}
else if ((l_K_1221 == g_T_SEM))
{
{ R9 rv1224 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv1224; }
}
else if ((l_K_1221 == g_T_ARR))
{
{ R9 rv1225 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1225; }
}
else if ((l_K_1221 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R9 rv1226 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1226; }
}
{ R9 rv1227 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1227; }
}
{ R9 rv1228 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv1228; }
rt_raise(RT_X_INIT);
}
static R9 r_EQUAL_CODE(R22 * p_T, R9 p_A, R9 p_B) { RT_B_TICK(); 
rt_int l_K_1229; memset(&l_K_1229, 0, sizeof l_K_1229);
l_K_1229 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((((l_K_1229 == g_T_STR) || (l_K_1229 == g_T_BITS)) || (l_K_1229 == g_T_XFIX)))
{
{ R9 rv1230 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv1230; }
}
else if ((l_K_1229 == g_T_ABS))
{
{ R9 rv1231 = r_EQUAL_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv1231; }
}
else if (((l_K_1229 == g_T_ARR) || (l_K_1229 == g_T_REC)))
{
{ R9 rv1232 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv1232; }
}
else if ((l_K_1229 == g_T_SEM))
{
{ R9 rv1233 = r_MK(rt_str("0", 1));
return rv1233; }
}
else if (r_IS_D(p_T))
{
{ R9 rv1234 = r_FMT2(rt_str("(rt_b_dcmp(@, @) == 0)", 22), p_A, p_B);
return rv1234; }
}
{ R9 rv1235 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv1235; }
rt_raise(RT_X_INIT);
}
static R9 r_RANGE_CHECK(R22 * p_T, R9 p_V, R9 p_SELF) { RT_B_TICK(); 
if ((((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_XFIX) && ((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN > ((rt_int)0LL))) && (!((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS)))
{
{ R9 rv1236 = r_XFIX_RANGE_CHECK(p_T, p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF), ((*(R22 *)rt_nil_check(p_T))).f_ROPEN, ((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK);
return rv1236; }
}
if ((((((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) && ((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN > ((rt_int)0LL))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))) && (r_REP_BITS(p_T) < ((rt_int)63LL))) && (!((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS)))
{
{
R9 l_U_1237; memset(&l_U_1237, 0, sizeof l_U_1237);
S_R9(&l_U_1237, r_MK(rt_str("0", 1)), 0);
if (r_REP_UNSIGNED(p_T))
{
S_R9(&l_U_1237, r_MK(rt_str("1", 1)), 0);
}
{ R9 rv1238 = r_RANGE_CHECK_IN(p_T, r_FMT3(rt_str("rt_b_rep_fits(@, @, @)", 22), p_V, r_NUM(r_REP_BITS(p_T)), l_U_1237), p_SELF);
return rv1238; }
}
}
{ R9 rv1239 = r_RANGE_CHECK_IN(p_T, p_V, p_SELF);
return rv1239; }
rt_raise(RT_X_INIT);
}
static R9 r_RANGE_CHECK_IN(R22 * p_T, R9 p_V, R9 p_SELF) { RT_B_TICK(); 
if (((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))) || ((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS))
{
{ R9 rv1240 = p_V;
return rv1240; }
}
if ((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R9 rv1241 = p_V;
return rv1241; }
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R9 rv1242 = p_V;
return rv1242; }
}
if (r_IS_D(p_T))
{
{
R9 l_TC_1243; memset(&l_TC_1243, 0, sizeof l_TC_1243);
S_R9(&l_TC_1243, r_MK(rt_str("0", 1)), 0);
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
S_R9(&l_TC_1243, r_MK(rt_str("1", 1)), 0);
}
{ R9 rv1244 = r_FMT4(rt_str("rt_b_drange(@, @, @, @)", 23), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF), l_TC_1243);
return rv1244; }
}
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R9 rv1245 = r_FMT3(rt_str("rt_b_tfrange(@, @, @)", 21), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1245; }
}
{ R9 rv1246 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1246; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R9 rv1247 = r_FMT3(rt_str("rt_b_trange(@, @, @)", 20), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1247; }
}
{ R9 rv1248 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1248; }
rt_raise(RT_X_INIT);
}
static R9 r_XFIX_RANGE_CHECK(R22 * p_T, R9 p_V, R9 p_LO, R9 p_HI, rt_int p_OPEN, rt_int p_TC) { RT_B_TICK(); 
R9 l_X_1249; memset(&l_X_1249, 0, sizeof l_X_1249);
S_R9(&l_X_1249, r_NEW_NAME(rt_str("xr", 2)), 0);
R9 l_E_1250; memset(&l_E_1250, 0, sizeof l_E_1250);
S_R9(&l_E_1250, r_MK(rt_str("RT_X_RANGE", 10)), 0);
if (p_TC)
{
S_R9(&l_E_1250, r_MK(rt_str("RT_B_INVALID_TYPE", 17)), 0);
}
{ R9 rv1251 = r_CAT(r_FMT3(rt_str("({ rstr @ = @; if (@) ", 22), l_X_1249, p_V, r_XFIX_OUTSIDE(p_T, l_X_1249, p_LO, p_HI, p_OPEN)), r_FMT2(rt_str("rt_raise(@); @; })", 18), l_E_1250, l_X_1249));
return rv1251; }
rt_raise(RT_X_INIT);
}
static R9 r_XFIX_OUTSIDE(R22 * p_T, R9 p_X, R9 p_LO, R9 p_HI, rt_int p_OPEN) { RT_B_TICK(); 
R26 l_XT_1252; memset(&l_XT_1252, 0, sizeof l_XT_1252);
S_R26(&l_XT_1252, r_MKET(p_X, p_T), 0);
R9 l_BAD_LO_1253; memset(&l_BAD_LO_1253, 0, sizeof l_BAD_LO_1253);
R9 l_BAD_HI_1254; memset(&l_BAD_HI_1254, 0, sizeof l_BAD_HI_1254);
if (((p_OPEN == ((rt_int)1LL)) || (p_OPEN == ((rt_int)3LL))))
{
S_R9(&l_BAD_LO_1253, r_FMT1(rt_str("!@", 2), r_XFIX_LESS(r_MKET(p_LO, p_T), l_XT_1252)), 0);
}
else
{
S_R9(&l_BAD_LO_1253, r_XFIX_LESS(l_XT_1252, r_MKET(p_LO, p_T)), 0);
}
if ((p_OPEN >= ((rt_int)2LL)))
{
S_R9(&l_BAD_HI_1254, r_FMT1(rt_str("!@", 2), r_XFIX_LESS(l_XT_1252, r_MKET(p_HI, p_T))), 0);
}
else
{
S_R9(&l_BAD_HI_1254, r_XFIX_LESS(r_MKET(p_HI, p_T), l_XT_1252), 0);
}
{ R9 rv1255 = r_FMT2(rt_str("(@ || @)", 8), l_BAD_LO_1253, l_BAD_HI_1254);
return rv1255; }
rt_raise(RT_X_INIT);
}
static R9 r_XFIX_LESS(R26 p_A, R26 p_B) { RT_B_TICK(); 
R29 * l_ARGS_1256; memset(&l_ARGS_1256, 0, sizeof l_ARGS_1256);
l_ARGS_1256 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R12 * l_Y_1257; memset(&l_Y_1257, 0, sizeof l_Y_1257);
l_Y_1257 = r_USER_OPERATOR(r_MKN(rt_str("LESS_THAN_", 10)), l_ARGS_1256, ((rt_int)0LL));
if ((l_Y_1257 == NULL))
{
r_FAILT(((rt_int)0LL), rt_str("the program defines no LESS_THAN_ for ", 38), r_TYPE_NAME((p_A).f_T));
}
{ R9 rv1258 = (r_CALL_SYM(l_Y_1257, l_ARGS_1256, ((rt_int)0LL))).f_C;
return rv1258; }
rt_raise(RT_X_INIT);
}
static rt_int r_REP_BITS(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv1259 = ((rt_int)63LL);
return rv1259; }
}
if (((!r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9))) || (((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ rt_int rv1260 = ((rt_int)63LL);
return rv1260; }
}
{
R25 l_N_1261; memset(&l_N_1261, 0, sizeof l_N_1261);
S_R25(&l_N_1261, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((((l_N_1261).f_OK && ((l_N_1261).f_V >= ((rt_int)0LL))) && ((l_N_1261).f_V < ((rt_int)63LL))))
{
{ rt_int rv1262 = (l_N_1261).f_V;
return rv1262; }
}
}
{ rt_int rv1263 = ((rt_int)63LL);
return rv1263; }
rt_raise(RT_X_INIT);
}
static rt_int r_REP_UNSIGNED(R22 * p_T) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_NEXT == NULL))
{
{ rt_int rv1264 = 0;
return rv1264; }
}
{ rt_int rv1265 = r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8));
return rv1265; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv1266 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv1266; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv1267 = 1;
return rv1267; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv1268 = r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv1268; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv1269 = r_SAME_CLASS(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1269; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_XFIX) || (((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_XFIX)))
{
{ rt_int rv1270 = ((((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_XFIX) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT))) && (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_XFIX) || (((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_INT))));
return rv1270; }
}
if ((!(((*(R22 *)rt_nil_check(p_A))).f_KIND == ((*(R22 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv1271 = 0;
return rv1271; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv1272 = (((*(R22 *)rt_nil_check(p_A))).f_BASE == ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1272; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1273 = ((((*(R22 *)rt_nil_check(p_A))).f_DIMS == ((*(R22 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM));
return rv1273; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv1274 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv1274; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1275 = ((r_ORIGINAL(((*(R22 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R22 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE));
return rv1275; }
}
{ rt_int rv1276 = 1;
return rv1276; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv1277 = 1;
return rv1277; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv1278 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv1278; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv1279 = r_SAME_TYPE(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1279; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv1280 = 0;
return rv1280; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_XFIX) || (((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_XFIX)))
{
{ rt_int rv1281 = r_SAME_XFIX(p_A, p_B);
return rv1281; }
}
else if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv1282 = (((*(R22 *)rt_nil_check(p_A))).f_SCALE == ((*(R22 *)rt_nil_check(p_B))).f_SCALE);
return rv1282; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1283 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM);
return rv1283; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv1284 = r_SAME_ARGS(((*(R22 *)rt_nil_check(p_A))).f_ARGS, ((*(R22 *)rt_nil_check(p_B))).f_ARGS);
return rv1284; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1285 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1285; }
}
{ rt_int rv1286 = 1;
return rv1286; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R28 * p_B) { RT_B_TICK(); 
if (((((*(R28 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1287 = 0;
return rv1287; }
}
{ rt_int rv1288 = r_IS_GEN_TEXT(((*(R28 *)rt_nil_check(p_B))).f_HI);
return rv1288; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R28 * p_A, R28 * p_B) { RT_B_TICK(); 
R28 * l_P_1289; memset(&l_P_1289, 0, sizeof l_P_1289);
l_P_1289 = p_A;
R28 * l_Q_1290; memset(&l_Q_1290, 0, sizeof l_Q_1290);
l_Q_1290 = p_B;
for (;;) {
if (((l_P_1289 == NULL) || (l_Q_1290 == NULL))) goto L_end1291;
{
if ((r_IS_GEN_ARG(l_P_1289) || r_IS_GEN_ARG(l_Q_1290)))
{
}
else if ((!(((*(R28 *)rt_nil_check(l_P_1289))).f_ANYARG == ((*(R28 *)rt_nil_check(l_Q_1290))).f_ANYARG)))
{
{ rt_int rv1292 = 0;
return rv1292; }
}
if (((((*(R28 *)rt_nil_check(l_P_1289))).f_MLO).f_OK && (((*(R28 *)rt_nil_check(l_Q_1290))).f_MLO).f_OK))
{
if ((!((((*(R28 *)rt_nil_check(l_P_1289))).f_MLO).f_V == (((*(R28 *)rt_nil_check(l_Q_1290))).f_MLO).f_V)))
{
{ rt_int rv1293 = 0;
return rv1293; }
}
}
l_P_1289 = ((*(R28 *)rt_nil_check(l_P_1289))).f_NEXT;
l_Q_1290 = ((*(R28 *)rt_nil_check(l_Q_1290))).f_NEXT;
}
RT_B_TICK();
} L_end1291: ;
{ rt_int rv1294 = ((l_P_1289 == NULL) && (l_Q_1290 == NULL));
return rv1294; }
rt_raise(RT_X_INIT);
}
static R9 r_FRAME_OF(rt_int p_LEVEL) { RT_B_TICK(); 
R19 * l_CS_1295; memset(&l_CS_1295, 0, sizeof l_CS_1295);
l_CS_1295 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R9 l_T_1296; memset(&l_T_1296, 0, sizeof l_T_1296);
rt_int l_LEV_1297; memset(&l_LEV_1297, 0, sizeof l_LEV_1297);
if ((((*(R19 *)rt_nil_check(l_CS_1295))).f_LEVEL == p_LEVEL))
{
{ R9 rv1298 = r_MK(rt_str("F", 1));
return rv1298; }
}
if (((*(R19 *)rt_nil_check(l_CS_1295))).f_FRAMED)
{
S_R9(&l_T_1296, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R9(&l_T_1296, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_1297 = rt_sub(((*(R19 *)rt_nil_check(l_CS_1295))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_1297 <= p_LEVEL)) goto L_end1299;
{
S_R9(&l_T_1296, r_CATS(l_T_1296, rt_str("->up", 4)), 0);
l_LEV_1297 = rt_sub(l_LEV_1297, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1299: ;
{ R9 rv1300 = l_T_1296;
return rv1300; }
rt_raise(RT_X_INIT);
}
static R9 r_OBJ_ACCESS(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R12 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R9 rv1301 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1301; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1302 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1302; }
}
if (((*(R12 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R9 rv1303 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1303; }
}
{ R9 rv1304 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1304; }
rt_raise(RT_X_INIT);
}
static R9 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE) { RT_B_TICK(); 
R19 * l_CS_1305; memset(&l_CS_1305, 0, sizeof l_CS_1305);
l_CS_1305 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R22 * l_T_1306; memset(&l_T_1306, 0, sizeof l_T_1306);
l_T_1306 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
R9 l_CN_1307; memset(&l_CN_1307, 0, sizeof l_CN_1307);
if ((((((*(R19 *)rt_nil_check(l_CS_1305))).f_LEVEL == ((rt_int)0LL)) && ((((*(R7 *)rt_nil_check(g_W))).f_SEPSEG).f_LEN > ((rt_int)0LL))) && rt_b_eq(p_BASE, rt_str("", 0))))
{
((*(R7 *)rt_nil_check(g_W))).f_SEPV = rt_add(((*(R7 *)rt_nil_check(g_W))).f_SEPV, ((rt_int)1LL));
S_R9(&l_CN_1307, r_FMT3(rt_str("bs_@_v@_@", 9), r_CID(((*(R7 *)rt_nil_check(g_W))).f_SEPSEG), r_NUM(((*(R7 *)rt_nil_check(g_W))).f_SEPV), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
if (((*(R7 *)rt_nil_check(g_W))).f_EXTSEG)
{
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("extern @ @;", 11), r_CTYPE(l_T_1306), l_CN_1307));
}
else
{
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("@ @;", 4), r_CTYPE(l_T_1306), l_CN_1307));
}
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1307, 0);
{ R9 rv1308 = l_CN_1307;
return rv1308; }
}
if ((((*(R19 *)rt_nil_check(l_CS_1305))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R7 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R7 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R9(&l_CN_1307, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
}
else
{
S_R9(&l_CN_1307, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_1306), l_CN_1307));
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1307, 0);
{ R9 rv1309 = l_CN_1307;
return rv1309; }
}
S_R9(&l_CN_1307, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_FIELD, l_CN_1307, 0);
if (((*(R19 *)rt_nil_check(l_CS_1305))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_1306), l_CN_1307), &((*(R19 *)rt_nil_check(l_CS_1305))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_1307), 0);
{ R9 rv1310 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1310; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_1306), l_CN_1307, l_CN_1307, l_CN_1307));
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1307, 0);
{ R9 rv1311 = l_CN_1307;
return rv1311; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R17 * p_D) { RT_B_TICK(); 
R22 * l_T_1312; memset(&l_T_1312, 0, sizeof l_T_1312);
l_T_1312 = r_RESOLVE(((*(R17 *)rt_nil_check(p_D))).f_B);
R17 * l_N_1313; memset(&l_N_1313, 0, sizeof l_N_1313);
l_N_1313 = ((*(R17 *)rt_nil_check(p_D))).f_A;
R26 l_V_1314; memset(&l_V_1314, 0, sizeof l_V_1314);
rt_int l_HAVE_V_1315; memset(&l_HAVE_V_1315, 0, sizeof l_HAVE_V_1315);
l_HAVE_V_1315 = 0;
if (((((*(R22 *)rt_nil_check(l_T_1312))).f_KIND == g_T_TYPE) || (((*(R22 *)rt_nil_check(l_T_1312))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_1313 == NULL)) goto L_end1316;
{
{
R12 * l_Y_1317; memset(&l_Y_1317, 0, sizeof l_Y_1317);
l_Y_1317 = r_NEW_SYM(g_Y_VAR, ((*(R17 *)rt_nil_check(l_N_1313))).f_NAME);
R9 l_CN_1318; memset(&l_CN_1318, 0, sizeof l_CN_1318);
if ((((*(R17 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R12 *)rt_nil_check(l_Y_1317))).f_KIND = g_Y_CONST;
((*(R12 *)rt_nil_check(l_Y_1317))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_1312) && (((*(R22 *)rt_nil_check(l_T_1312))).f_SCALE == ((rt_int)0LL))))
{
{
R25 l_M_1319; memset(&l_M_1319, 0, sizeof l_M_1319);
S_R25(&l_M_1319, r_MANIFEST(((*(R17 *)rt_nil_check(p_D))).f_C), 0);
((*(R12 *)rt_nil_check(l_Y_1317))).f_HASMV = (l_M_1319).f_OK;
((*(R12 *)rt_nil_check(l_Y_1317))).f_MV = (l_M_1319).f_V;
}
}
}
((*(R12 *)rt_nil_check(l_Y_1317))).f_T = l_T_1312;
S_R9(&l_CN_1318, r_NEW_OBJECT(l_Y_1317, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_1312))
{
r_CODE(r_INIT_CODE(l_T_1312, l_CN_1318));
}
if ((!(((*(R17 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_1315))
{
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R17 *)rt_nil_check(p_D))).f_C;
S_R26(&l_V_1314, r_EXPR(((*(R17 *)rt_nil_check(p_D))).f_C, l_T_1312), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
l_HAVE_V_1315 = 1;
}
r_CODE(r_STORE_CODE(l_T_1312, l_CN_1318, l_V_1314, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_1317, ((*(R17 *)rt_nil_check(l_N_1313))).f_LINE);
}
l_N_1313 = ((*(R17 *)rt_nil_check(l_N_1313))).f_NEXT;
}
RT_B_TICK();
} L_end1316: ;
}
static R26 r_MKET(R9 p_C, R22 * p_T) { RT_B_TICK(); 
{ R26 rv1320 = ({ R26 rc1321; memset(&rc1321, 0, sizeof rc1321);  S_R9(&rc1321.f_C, p_C, 0); rc1321.f_T = p_T; rc1321.f_LVAL = 0; S_R9(&rc1321.f_SELF, r_NO_TEXT(), 0); rc1321; });
return rv1320; }
rt_raise(RT_X_INIT);
}
static R26 r_MKLV(R9 p_C, R22 * p_T, rt_int p_LVAL, R9 p_SELF) { RT_B_TICK(); 
{ R26 rv1322 = ({ R26 rc1323; memset(&rc1323, 0, sizeof rc1323);  S_R9(&rc1323.f_C, p_C, 0); rc1323.f_T = p_T; rc1323.f_LVAL = p_LVAL; S_R9(&rc1323.f_SELF, p_SELF, 0); rc1323; });
return rv1322; }
rt_raise(RT_X_INIT);
}
static R22 * r_INT_TYPE(rt_int p_SCALE) { RT_B_TICK(); 
R22 * l_T_1324; memset(&l_T_1324, 0, sizeof l_T_1324);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R22 * rv1325 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv1325; }
}
l_T_1324 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_1324))).f_SCALE = p_SCALE;
{ R22 * rv1326 = l_T_1324;
return rv1326; }
rt_raise(RT_X_INIT);
}
static R22 * r_STR_TYPE(R9 p_LEN, R25 p_M) { RT_B_TICK(); 
R22 * l_T_1327; memset(&l_T_1327, 0, sizeof l_T_1327);
l_T_1327 = r_NEW_TYP(g_T_STR);
S_R9(&((*(R22 *)rt_nil_check(l_T_1327))).f_LEN_C, p_LEN, 0);
S_R25(&((*(R22 *)rt_nil_check(l_T_1327))).f_MLEN, p_M, 0);
{ R22 * rv1328 = l_T_1327;
return rv1328; }
rt_raise(RT_X_INIT);
}
static R9 r_CSTRING(R9 p_T) { RT_B_TICK(); 
rstr l_S_1329; memset(&l_S_1329, 0, sizeof l_S_1329);
l_S_1329 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_1329, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_1330; memset(&l_AT_1330, 0, sizeof l_AT_1330);
l_AT_1330 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R9 l_R_1331; memset(&l_R_1331, 0, sizeof l_R_1331);
S_R9(&l_R_1331, r_MK(rt_str("\"", 1)), 0);
{ rt_int it1333_lo = ((rt_int)0LL), it1333_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it1333 = it1333_lo; it1333 <= it1333_hi; it1333++) {
{
if ((rt_b_eq(rt_b_slice(l_S_1329, it1333, it1333), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_1329, it1333, it1333), rt_str("\\", 1))))
{
S_R9(&l_R_1331, r_MK(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_S_1329, it1333, it1333))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1329, it1333, it1333), rt_str("\?", 1)))
{
S_R9(&l_R_1331, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_1334; memset(&l_C_1334, 0, sizeof l_C_1334);
l_C_1334 = r_CODE_OF(rt_b_slice(l_S_1329, it1333, it1333));
if (({ rt_int iv1335 = l_C_1334; (((rt_int)32LL) <= iv1335) && (iv1335 <= ((rt_int)126LL)); }))
{
S_R9(&l_R_1331, r_MK(rt_b_slice(l_S_1329, it1333, it1333)), 0);
}
else
{
S_R9(&l_R_1331, r_MK(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_1334, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_1334, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_1334, ((rt_int)8LL))))), 0);
}
}
}
}
RT_B_TICK();
if (it1333 == it1333_hi) break;
} } L_end1332: ;
S_R9(&l_R_1331, r_MK(rt_str("\"", 1)), 0);
{ R9 rv1336 = ({ R9 rc1337; memset(&rc1337, 0, sizeof rc1337);  rc1337.f_AT = l_AT_1330; rc1337.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_1330); rc1337.f_H = rt_neg(((rt_int)1LL)); rc1337; });
return rv1336; }
rt_raise(RT_X_INIT);
}
static R25 r_MANIFEST(R17 * p_E) { RT_B_TICK(); 
rt_int l_K_1338; memset(&l_K_1338, 0, sizeof l_K_1338);
l_K_1338 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
R25 l_NO_1339; memset(&l_NO_1339, 0, sizeof l_NO_1339);
S_R25(&l_NO_1339, ({ R25 rc1340; memset(&rc1340, 0, sizeof rc1340);  rc1340.f_OK = 0; rc1340.f_V = ((rt_int)0LL); rc1340; }), 0);
if ((l_K_1338 == g_N_INT))
{
{ R25 rv1341 = ({ R25 rc1342; memset(&rc1342, 0, sizeof rc1342);  rc1342.f_OK = 1; rc1342.f_V = ((*(R17 *)rt_nil_check(p_E))).f_IV; rc1342; });
return rv1341; }
}
else if ((l_K_1338 == g_N_PAREN))
{
{ R25 rv1343 = r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A);
return rv1343; }
}
else if ((l_K_1338 == g_N_BOOL))
{
{ R25 rv1344 = ({ R25 rc1345; memset(&rc1345, 0, sizeof rc1345);  rc1345.f_OK = 1; rc1345.f_V = ((*(R17 *)rt_nil_check(p_E))).f_IV; rc1345; });
return rv1344; }
}
else if ((l_K_1338 == g_N_UNOP))
{
{
R25 l_A_1346; memset(&l_A_1346, 0, sizeof l_A_1346);
S_R25(&l_A_1346, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
if ((!(l_A_1346).f_OK))
{
{ R25 rv1347 = l_NO_1339;
return rv1347; }
}
{ R25 rv1348 = ({ R25 rc1349; memset(&rc1349, 0, sizeof rc1349);  rc1349.f_OK = 1; rc1349.f_V = r_MANIFEST_ARITH(r_MK(rt_str("-", 1)), ((rt_int)0LL), (l_A_1346).f_V, ((*(R17 *)rt_nil_check(p_E))).f_LINE); rc1349; });
return rv1348; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R25 rv1350 = l_A_1346;
return rv1350; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R25 rv1351 = ({ R25 rc1352; memset(&rc1352, 0, sizeof rc1352);  rc1352.f_OK = (l_A_1346).f_OK; rc1352.f_V = rt_sub(((rt_int)1LL), (l_A_1346).f_V); rc1352; });
return rv1351; }
}
}
}
else if ((l_K_1338 == g_N_BINOP))
{
if ((!(((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R25 rv1353 = l_NO_1339;
return rv1353; }
}
{
R25 l_A_1354; memset(&l_A_1354, 0, sizeof l_A_1354);
S_R25(&l_A_1354, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R25 l_B_1355; memset(&l_B_1355, 0, sizeof l_B_1355);
S_R25(&l_B_1355, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
R9 l_OP_1356; memset(&l_OP_1356, 0, sizeof l_OP_1356);
S_R9(&l_OP_1356, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
if (r_TEQS(l_OP_1356, rt_str("&", 1)))
{
if (((((l_A_1354).f_OK && ((l_A_1354).f_V == ((rt_int)0LL)))) || (((l_B_1355).f_OK && ((l_B_1355).f_V == ((rt_int)0LL))))))
{
{ R25 rv1357 = ({ R25 rc1358; memset(&rc1358, 0, sizeof rc1358);  rc1358.f_OK = 1; rc1358.f_V = ((rt_int)0LL); rc1358; });
return rv1357; }
}
if (((l_A_1354).f_OK && (l_B_1355).f_OK))
{
{ R25 rv1359 = ({ R25 rc1360; memset(&rc1360, 0, sizeof rc1360);  rc1360.f_OK = 1; rc1360.f_V = ((rt_int)1LL); rc1360; });
return rv1359; }
}
{ R25 rv1361 = l_NO_1339;
return rv1361; }
}
else if (r_TEQS(l_OP_1356, rt_str("!", 1)))
{
if (((((l_A_1354).f_OK && ((l_A_1354).f_V == ((rt_int)1LL)))) || (((l_B_1355).f_OK && ((l_B_1355).f_V == ((rt_int)1LL))))))
{
{ R25 rv1362 = ({ R25 rc1363; memset(&rc1363, 0, sizeof rc1363);  rc1363.f_OK = 1; rc1363.f_V = ((rt_int)1LL); rc1363; });
return rv1362; }
}
if (((l_A_1354).f_OK && (l_B_1355).f_OK))
{
{ R25 rv1364 = ({ R25 rc1365; memset(&rc1365, 0, sizeof rc1365);  rc1365.f_OK = 1; rc1365.f_V = ((rt_int)0LL); rc1365; });
return rv1364; }
}
{ R25 rv1366 = l_NO_1339;
return rv1366; }
}
if ((!(((l_A_1354).f_OK && (l_B_1355).f_OK))))
{
{ R25 rv1367 = l_NO_1339;
return rv1367; }
}
if ((!((r_MANIFEST_INT(((*(R17 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R17 *)rt_nil_check(p_E))).f_B)))))
{
{ R25 rv1368 = l_NO_1339;
return rv1368; }
}
if (((r_TEQS(l_OP_1356, rt_str("+", 1)) || r_TEQS(l_OP_1356, rt_str("-", 1))) || r_TEQS(l_OP_1356, rt_str("*", 1))))
{
{ R25 rv1369 = ({ R25 rc1370; memset(&rc1370, 0, sizeof rc1370);  rc1370.f_OK = 1; rc1370.f_V = r_MANIFEST_ARITH(l_OP_1356, (l_A_1354).f_V, (l_B_1355).f_V, ((*(R17 *)rt_nil_check(p_E))).f_LINE); rc1370; });
return rv1369; }
}
else if ((r_TEQS(l_OP_1356, rt_str("//", 2)) && (!((l_B_1355).f_V == ((rt_int)0LL)))))
{
{ R25 rv1371 = ({ R25 rc1372; memset(&rc1372, 0, sizeof rc1372);  rc1372.f_OK = 1; rc1372.f_V = rt_quot((l_A_1354).f_V, (l_B_1355).f_V); rc1372; });
return rv1371; }
}
else if ((r_TEQS(l_OP_1356, rt_str("MOD", 3)) && (!((l_B_1355).f_V == ((rt_int)0LL)))))
{
{ R25 rv1373 = ({ R25 rc1374; memset(&rc1374, 0, sizeof rc1374);  rc1374.f_OK = 1; rc1374.f_V = rt_rem((l_A_1354).f_V, (l_B_1355).f_V); rc1374; });
return rv1373; }
}
else if (r_TEQS(l_OP_1356, rt_str("=", 1)))
{
{ R25 rv1375 = ({ R25 rc1376; memset(&rc1376, 0, sizeof rc1376);  rc1376.f_OK = 1; rc1376.f_V = r_BOOL_INT(((l_A_1354).f_V == (l_B_1355).f_V)); rc1376; });
return rv1375; }
}
else if (r_TEQS(l_OP_1356, rt_str("<>", 2)))
{
{ R25 rv1377 = ({ R25 rc1378; memset(&rc1378, 0, sizeof rc1378);  rc1378.f_OK = 1; rc1378.f_V = r_BOOL_INT((!((l_A_1354).f_V == (l_B_1355).f_V))); rc1378; });
return rv1377; }
}
else if (r_TEQS(l_OP_1356, rt_str("<", 1)))
{
{ R25 rv1379 = ({ R25 rc1380; memset(&rc1380, 0, sizeof rc1380);  rc1380.f_OK = 1; rc1380.f_V = r_BOOL_INT(((l_A_1354).f_V < (l_B_1355).f_V)); rc1380; });
return rv1379; }
}
else if (r_TEQS(l_OP_1356, rt_str(">", 1)))
{
{ R25 rv1381 = ({ R25 rc1382; memset(&rc1382, 0, sizeof rc1382);  rc1382.f_OK = 1; rc1382.f_V = r_BOOL_INT(((l_A_1354).f_V > (l_B_1355).f_V)); rc1382; });
return rv1381; }
}
else if (r_TEQS(l_OP_1356, rt_str("<=", 2)))
{
{ R25 rv1383 = ({ R25 rc1384; memset(&rc1384, 0, sizeof rc1384);  rc1384.f_OK = 1; rc1384.f_V = r_BOOL_INT(((l_A_1354).f_V <= (l_B_1355).f_V)); rc1384; });
return rv1383; }
}
else if (r_TEQS(l_OP_1356, rt_str(">=", 2)))
{
{ R25 rv1385 = ({ R25 rc1386; memset(&rc1386, 0, sizeof rc1386);  rc1386.f_OK = 1; rc1386.f_V = r_BOOL_INT(((l_A_1354).f_V >= (l_B_1355).f_V)); rc1386; });
return rv1385; }
}
}
}
else if ((l_K_1338 == g_N_IN))
{
{
R25 l_A_1387; memset(&l_A_1387, 0, sizeof l_A_1387);
S_R25(&l_A_1387, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R25 l_L_1388; memset(&l_L_1388, 0, sizeof l_L_1388);
S_R25(&l_L_1388, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R25 l_U_1389; memset(&l_U_1389, 0, sizeof l_U_1389);
S_R25(&l_U_1389, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_1390; memset(&l_LO_1390, 0, sizeof l_LO_1390);
rt_int l_HI_1391; memset(&l_HI_1391, 0, sizeof l_HI_1391);
if ((!(((((l_A_1387).f_OK && (l_L_1388).f_OK) && (l_U_1389).f_OK) && r_MANIFEST_INT(((*(R17 *)rt_nil_check(p_E))).f_A)))))
{
{ R25 rv1392 = l_NO_1339;
return rv1392; }
}
l_LO_1390 = (l_L_1388).f_V;
l_HI_1391 = (l_U_1389).f_V;
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_1390 = rt_add(l_LO_1390, ((rt_int)1LL));
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_1391 = rt_sub(l_HI_1391, ((rt_int)1LL));
}
{ R25 rv1393 = ({ R25 rc1394; memset(&rc1394, 0, sizeof rc1394);  rc1394.f_OK = 1; rc1394.f_V = r_BOOL_INT((((l_A_1387).f_V >= l_LO_1390) && ((l_A_1387).f_V <= l_HI_1391))); rc1394; });
return rv1393; }
}
}
else if (((l_K_1338 == g_N_NAME) || (l_K_1338 == g_TS_GEN)))
{
{
R12 * l_Y_1395; memset(&l_Y_1395, 0, sizeof l_Y_1395);
l_Y_1395 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
R21 * l_B_1396; memset(&l_B_1396, 0, sizeof l_B_1396);
l_B_1396 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_1396 == NULL)) goto L_end1397;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_1396))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME) && ((*(R21 *)rt_nil_check(l_B_1396))).f_HASMV))
{
{ R25 rv1398 = ({ R25 rc1399; memset(&rc1399, 0, sizeof rc1399);  rc1399.f_OK = 1; rc1399.f_V = ((*(R21 *)rt_nil_check(l_B_1396))).f_MV; rc1399; });
return rv1398; }
}
l_B_1396 = ((*(R21 *)rt_nil_check(l_B_1396))).f_NEXT;
}
RT_B_TICK();
} L_end1397: ;
if ((!(l_Y_1395 == NULL)))
{
if ((((((((*(R12 *)rt_nil_check(l_Y_1395))).f_KIND == g_Y_CONST) || (((*(R12 *)rt_nil_check(l_Y_1395))).f_KIND == g_Y_GEN)) || (((((*(R12 *)rt_nil_check(l_Y_1395))).f_KIND == g_Y_VAR) && ((*(R12 *)rt_nil_check(l_Y_1395))).f_INPUT)))) && ((*(R12 *)rt_nil_check(l_Y_1395))).f_HASMV))
{
{ R25 rv1400 = ({ R25 rc1401; memset(&rc1401, 0, sizeof rc1401);  rc1401.f_OK = 1; rc1401.f_V = ((*(R12 *)rt_nil_check(l_Y_1395))).f_MV; rc1401; });
return rv1400; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1395))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R17 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R25 rv1402 = ({ R25 rc1403; memset(&rc1403, 0, sizeof rc1403);  rc1403.f_OK = 1; rc1403.f_V = ((*(R12 *)rt_nil_check(l_Y_1395))).f_MV; rc1403; });
return rv1402; }
}
}
}
}
}
else if ((l_K_1338 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R17 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R25 rv1404 = ({ R25 rc1405; memset(&rc1405, 0, sizeof rc1405);  rc1405.f_OK = 1; rc1405.f_V = ((*(R12 *)rt_nil_check(r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc1405; });
return rv1404; }
}
}
else if ((l_K_1338 == g_N_FIELD))
{
{ R25 rv1406 = r_ATTR_MANIFEST(p_E);
return rv1406; }
}
else if ((l_K_1338 == g_N_APPLY))
{
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R25 rv1407 = ({ R25 rc1408; memset(&rc1408, 0, sizeof rc1408);  rc1408.f_OK = 1; rc1408.f_V = r_BOOL_INT((r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A)).f_OK); rc1408; });
return rv1407; }
}
}
{ R25 rv1409 = l_NO_1339;
return rv1409; }
rt_raise(RT_X_INIT);
}
static R25 r_ATTR_MANIFEST(R17 * p_E) { RT_B_TICK(); 
R17 * l_A_1410; memset(&l_A_1410, 0, sizeof l_A_1410);
l_A_1410 = ((*(R17 *)rt_nil_check(p_E))).f_A;
R9 l_NAME_1411; memset(&l_NAME_1411, 0, sizeof l_NAME_1411);
S_R9(&l_NAME_1411, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
R22 * l_T_1412; memset(&l_T_1412, 0, sizeof l_T_1412);
l_T_1412 = NULL;
if ((((*(R17 *)rt_nil_check(l_A_1410))).f_KIND == g_N_PAREN))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1410))).f_A))).f_KIND == g_N_FIELD))
{
{
R17 * l_INNER_1413; memset(&l_INNER_1413, 0, sizeof l_INNER_1413);
l_INNER_1413 = ((*(R17 *)rt_nil_check(l_A_1410))).f_A;
if (r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1413))).f_NAME, rt_str("LENGTH", 6)))
{
if (r_TEQS(l_NAME_1411, rt_str("MAX", 3)))
{
{ R25 rv1414 = r_SOME(r_MAX_LENGTH());
return rv1414; }
}
else if (r_TEQS(l_NAME_1411, rt_str("MIN", 3)))
{
{ R25 rv1415 = r_SOME(((rt_int)0LL));
return rv1415; }
}
}
else if ((r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1413))).f_NAME, rt_str("NOM_PRECISION", 13)) || r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1413))).f_NAME, rt_str("IMP_PRECISION", 13))))
{
if (r_TEQS(l_NAME_1411, rt_str("MAX", 3)))
{
{ R25 rv1416 = r_SOME(r_MAX_FLOAT_PRECISION());
return rv1416; }
}
else if (r_TEQS(l_NAME_1411, rt_str("MIN", 3)))
{
{ R25 rv1417 = r_SOME(((rt_int)1LL));
return rv1417; }
}
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1413))).f_NAME, rt_str("SCALE", 5)))
{
if (r_TEQS(l_NAME_1411, rt_str("MAX", 3)))
{
{ R25 rv1418 = r_SOME(((rt_int)1000LL));
return rv1418; }
}
else if (r_TEQS(l_NAME_1411, rt_str("MIN", 3)))
{
{ R25 rv1419 = r_SOME(rt_neg(((rt_int)1000LL)));
return rv1419; }
}
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1413))).f_NAME, rt_str("RADIX", 5)))
{
if (r_TEQS(l_NAME_1411, rt_str("MAX", 3)))
{
{ R25 rv1420 = r_SOME(((rt_int)1000LL));
return rv1420; }
}
else if (r_TEQS(l_NAME_1411, rt_str("MIN", 3)))
{
{ R25 rv1421 = r_SOME(((rt_int)2LL));
return rv1421; }
}
}
}
}
}
if (((((*(R17 *)rt_nil_check(l_A_1410))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_A_1410))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_1422; memset(&l_Y_1422, 0, sizeof l_Y_1422);
l_Y_1422 = r_LOOKUP(((*(R17 *)rt_nil_check(l_A_1410))).f_NAME);
if ((l_Y_1422 == NULL))
{
{ R25 rv1423 = r_NO_MVAL();
return rv1423; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1422))).f_KIND == g_Y_TYPE))
{
l_T_1412 = r_RESOLVE_USER_NAME(((*(R17 *)rt_nil_check(l_A_1410))).f_NAME, ((*(R17 *)rt_nil_check(l_A_1410))).f_LINE);
}
else if ((((((*(R12 *)rt_nil_check(l_Y_1422))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1422))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1422))).f_KIND == g_Y_GEN)))
{
l_T_1412 = ((*(R12 *)rt_nil_check(l_Y_1422))).f_T;
}
else
{
{ R25 rv1424 = r_NO_MVAL();
return rv1424; }
}
}
}
else if ((((*(R17 *)rt_nil_check(l_A_1410))).f_KIND == g_N_INT))
{
if ((r_TEQS(l_NAME_1411, rt_str("MIN", 3)) || r_TEQS(l_NAME_1411, rt_str("MAX", 3))))
{
{ R25 rv1425 = r_SOME(((*(R17 *)rt_nil_check(l_A_1410))).f_IV);
return rv1425; }
}
l_T_1412 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
else if ((((((((((((((*(R17 *)rt_nil_check(l_A_1410))).f_KIND == g_N_PAREN) || (((*(R17 *)rt_nil_check(l_A_1410))).f_KIND == g_N_BINOP)) || (((*(R17 *)rt_nil_check(l_A_1410))).f_KIND == g_N_UNOP)) || (((*(R17 *)rt_nil_check(l_A_1410))).f_KIND == g_N_FIELD)) || (((*(R17 *)rt_nil_check(l_A_1410))).f_KIND == g_N_INDEX)) || (((*(R17 *)rt_nil_check(l_A_1410))).f_KIND == g_N_APPLY)) || (((*(R17 *)rt_nil_check(l_A_1410))).f_KIND == g_N_REAL)) || (((*(R17 *)rt_nil_check(l_A_1410))).f_KIND == g_N_STR)) || (((*(R17 *)rt_nil_check(l_A_1410))).f_KIND == g_N_SUBSTR)) || (((*(R17 *)rt_nil_check(l_A_1410))).f_KIND == g_N_DEREF)) || (((*(R17 *)rt_nil_check(l_A_1410))).f_KIND == g_N_TYPESPEC)))
{
if ((((*(R17 *)rt_nil_check(l_A_1410))).f_KIND == g_N_PAREN))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1410))).f_A))).f_KIND == g_N_INT) && ((r_TEQS(l_NAME_1411, rt_str("MIN", 3)) || r_TEQS(l_NAME_1411, rt_str("MAX", 3))))))
{
{ R25 rv1426 = r_SOME(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1410))).f_A))).f_IV);
return rv1426; }
}
}
{
R14 l_SAVED_CODE_1427; memset(&l_SAVED_CODE_1427, 0, sizeof l_SAVED_CODE_1427);
S_R14(&l_SAVED_CODE_1427, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1428; memset(&rc1428, 0, sizeof rc1428);  rc1428.f_HEAD = NULL; rc1428.f_TAIL = NULL; rc1428; }), 0);
l_T_1412 = (r_EXPR(l_A_1410, NULL)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1427, 0);
}
}
else
{
{ R25 rv1429 = r_NO_MVAL();
return rv1429; }
}
if ((l_T_1412 == NULL))
{
{ R25 rv1430 = r_NO_MVAL();
return rv1430; }
}
{ R25 rv1431 = r_TYPE_ATTR_MANIFEST(l_T_1412, l_NAME_1411);
return rv1431; }
rt_raise(RT_X_INIT);
}
static R25 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R9 p_NAME) { RT_B_TICK(); 
R22 * l_T_1432; memset(&l_T_1432, 0, sizeof l_T_1432);
l_T_1432 = r_REAL_TYPE(p_T0);
rt_int l_K_1433; memset(&l_K_1433, 0, sizeof l_K_1433);
l_K_1433 = ((*(R22 *)rt_nil_check(l_T_1432))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R25 rv1434 = r_STATIC_SIZE(p_T0);
return rv1434; }
}
if ((l_K_1433 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R25 rv1435 = r_SOME(((*(R22 *)rt_nil_check(l_T_1432))).f_SCALE);
return rv1435; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R25 rv1436 = r_SOME(((rt_int)2LL));
return rv1436; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && ((((*(R22 *)rt_nil_check(l_T_1432))).f_LO_C).f_LEN > ((rt_int)0LL))))
{
{ R25 rv1437 = ((*(R22 *)rt_nil_check(l_T_1432))).f_MLO;
return rv1437; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && ((((*(R22 *)rt_nil_check(l_T_1432))).f_HI_C).f_LEN > ((rt_int)0LL))))
{
{ R25 rv1438 = ((*(R22 *)rt_nil_check(l_T_1432))).f_MHI;
return rv1438; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && (((*(R22 *)rt_nil_check(l_T_1432))).f_SCALE == ((rt_int)0LL))))
{
{ R25 rv1439 = r_SOME(r_STD_MIN());
return rv1439; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && (((*(R22 *)rt_nil_check(l_T_1432))).f_SCALE == ((rt_int)0LL))))
{
{ R25 rv1440 = r_SOME(r_STD_MAX());
return rv1440; }
}
}
else if ((l_K_1433 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R25 rv1441 = r_SOME(((*(R22 *)rt_nil_check(l_T_1432))).f_SCALE);
return rv1441; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R25 rv1442 = r_SOME(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1432))).f_SCALE));
return rv1442; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R25 rv1443 = r_SOME(((rt_int)2LL));
return rv1443; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R25 rv1444 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1432))).f_SCALE, p_NAME));
return rv1444; }
}
}
else if ((l_K_1433 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1432))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R25 rv1445 = ((*(R22 *)rt_nil_check(l_T_1432))).f_MLO;
return rv1445; }
}
{ R25 rv1446 = r_SOME(((rt_int)0LL));
return rv1446; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1432))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R25 rv1447 = ((*(R22 *)rt_nil_check(l_T_1432))).f_MHI;
return rv1447; }
}
{ R25 rv1448 = r_SOME(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1432))).f_BASE))).f_NLITS, ((rt_int)1LL)));
return rv1448; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1432))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ R25 rv1449 = r_SOME(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1432))).f_BASE))).f_NLITS);
return rv1449; }
}
if (((((*(R22 *)rt_nil_check(l_T_1432))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_T_1432))).f_MHI).f_OK))
{
{ R25 rv1450 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R22 *)rt_nil_check(l_T_1432))).f_MHI).f_V, (((*(R22 *)rt_nil_check(l_T_1432))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1450; }
}
}
}
else if (((l_K_1433 == g_T_STR) || (l_K_1433 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R25 rv1451 = ((*(R22 *)rt_nil_check(l_T_1432))).f_MLEN;
return rv1451; }
}
}
else if ((l_K_1433 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R25 rv1452 = r_SOME(((*(R22 *)rt_nil_check(l_T_1432))).f_DIMS);
return rv1452; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1432))).f_DIMS == ((rt_int)1LL))))
{
if (((((*(R28 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1432))).f_BOUNDS))).f_MLO).f_OK && (((*(R28 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1432))).f_BOUNDS))).f_MHI).f_OK))
{
{ R25 rv1453 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R28 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1432))).f_BOUNDS))).f_MHI).f_V, (((*(R28 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1432))).f_BOUNDS))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1453; }
}
}
}
else if ((l_K_1433 == g_T_REC))
{
{
R27 * l_F_1454; memset(&l_F_1454, 0, sizeof l_F_1454);
l_F_1454 = ((*(R22 *)rt_nil_check(l_T_1432))).f_FIELDS;
R28 * l_B_1455; memset(&l_B_1455, 0, sizeof l_B_1455);
l_B_1455 = ((*(R22 *)rt_nil_check(l_T_1432))).f_ARGS;
for (;;) {
if (((l_F_1454 == NULL) || (l_B_1455 == NULL))) goto L_end1456;
{
if ((!(((*(R27 *)rt_nil_check(l_F_1454))).f_KIND == ((rt_int)0LL))))
{
if (r_TEQ(((*(R27 *)rt_nil_check(l_F_1454))).f_NAME, p_NAME))
{
if (((*(R28 *)rt_nil_check(l_B_1455))).f_ANYARG)
{
{ R25 rv1457 = r_NO_MVAL();
return rv1457; }
}
{ R25 rv1458 = ((*(R28 *)rt_nil_check(l_B_1455))).f_MLO;
return rv1458; }
}
l_B_1455 = ((*(R28 *)rt_nil_check(l_B_1455))).f_NEXT;
}
l_F_1454 = ((*(R27 *)rt_nil_check(l_F_1454))).f_NEXT;
}
RT_B_TICK();
} L_end1456: ;
}
}
{ R25 rv1459 = r_NO_MVAL();
return rv1459; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_ARITH(R9 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); fr_r_MANIFEST_ARITH *F = rt_alloc(sizeof *F); (void)F; F->p_OP = p_OP; F->p_A = p_A; F->p_B = p_B; F->p_LINE = p_LINE;
F->l_R_1460 = ((rt_int)0LL);
{ rt_frame xf1461; if (RT_TRY(xf1461)) {
{
if (r_TEQS(F->p_OP, rt_str("+", 1)))
{
F->l_R_1460 = rt_add(F->p_A, F->p_B);
}
else if (r_TEQS(F->p_OP, rt_str("-", 1)))
{
F->l_R_1460 = rt_sub(F->p_A, F->p_B);
}
else
{
F->l_R_1460 = rt_mul(F->p_A, F->p_B);
}
}
RT_POP(xf1461); } else { RT_POP(xf1461); int xf1461x = rt_xcur;
if (0 || xf1461x == x_OVERFLOW)
{
r_FAIL(F->p_LINE, rt_str("a manifest expression overflows (3.2.4.2)", 41));
}
else rt_raise(xf1461x); } }
{ rt_int rv1462 = F->l_R_1460;
return rv1462; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R17 * p_E) { RT_B_TICK(); 
{ rt_int rv1463 = (!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv1463; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { RT_B_TICK(); 
if (p_B)
{
{ rt_int rv1464 = ((rt_int)1LL);
return rv1464; }
}
{ rt_int rv1465 = ((rt_int)0LL);
return rv1465; }
rt_raise(RT_X_INIT);
}
static R26 r_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_K_1466; memset(&l_K_1466, 0, sizeof l_K_1466);
l_K_1466 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_1466 == g_N_INT))
{
{ R26 rv1467 = r_MKET(r_STD_CHECK(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R17 *)rt_nil_check(p_E))).f_IV))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1467; }
}
else if ((l_K_1466 == g_N_REAL))
{
{ R26 rv1468 = r_REAL_LITERAL(p_E);
return rv1468; }
}
else if ((l_K_1466 == g_N_BOOL))
{
{ R26 rv1469 = r_MKET(r_NUM(((*(R17 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1469; }
}
else if ((l_K_1466 == g_N_NIL))
{
{ R26 rv1470 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1470; }
}
else if ((l_K_1466 == g_N_PAREN))
{
{
R26 l_V_1471; memset(&l_V_1471, 0, sizeof l_V_1471);
S_R26(&l_V_1471, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R9(&(l_V_1471).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1471).f_C), 0);
{ R26 rv1472 = l_V_1471;
return rv1472; }
}
}
else if ((l_K_1466 == g_N_STR))
{
{ R26 rv1473 = r_STRING_LITERAL(p_E);
return rv1473; }
}
else if ((l_K_1466 == g_N_BITS))
{
{ R26 rv1474 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R17 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1474; }
}
else if ((l_K_1466 == g_N_ENUMLIT))
{
if (r_NAMES_OBJECT(((*(R17 *)rt_nil_check(p_E))).f_NAME))
{
{ R26 rv1475 = r_NAME_EXPR(p_E, p_WANT);
return rv1475; }
}
{ R26 rv1476 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1476; }
}
else if ((l_K_1466 == g_N_RECCONS))
{
{ R26 rv1477 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1477; }
}
else if ((l_K_1466 == g_N_ARRCONS))
{
{ R26 rv1478 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1478; }
}
else if ((l_K_1466 == g_N_TYPESPEC))
{
{ R26 rv1479 = r_TYPE_SPECIFIER(p_E);
return rv1479; }
}
else if ((l_K_1466 == g_N_QUAL))
{
{
rt_int l_SAVED_1480; memset(&l_SAVED_1480, 0, sizeof l_SAVED_1480);
l_SAVED_1480 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_1481; memset(&l_SAVED_Q_1481, 0, sizeof l_SAVED_Q_1481);
l_SAVED_Q_1481 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1482; memset(&l_V_1482, 0, sizeof l_V_1482);
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
R25 l_P_1483; memset(&l_P_1483, 0, sizeof l_P_1483);
S_R25(&l_P_1483, r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_B, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
}
}
S_R26(&l_V_1482, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1480;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1481;
{ R26 rv1484 = l_V_1482;
return rv1484; }
}
}
else if ((l_K_1466 == g_N_NEW))
{
if ((r_NAMES_OBJECT(((*(R17 *)rt_nil_check(p_E))).f_NAME) && (!r_CONSTRUCTOR_WANTED(p_WANT))))
{
{
R17 * l_N_1485; memset(&l_N_1485, 0, sizeof l_N_1485);
l_N_1485 = r_NEW_NODE(g_N_APPLY, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1485))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_1485))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_A;
{ R26 rv1486 = r_EXPR(l_N_1485, p_WANT);
return rv1486; }
}
}
{ R26 rv1487 = r_NEW_EXPR(p_E, p_WANT);
return rv1487; }
}
else if ((l_K_1466 == g_N_NAME))
{
{ R26 rv1488 = r_NAME_EXPR(p_E, p_WANT);
return rv1488; }
}
else if (((l_K_1466 == g_N_APPLY) && r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("$PATH_LIST", 10))))
{
{ R26 rv1489 = r_PATH_LIST(((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1489; }
}
else if (((l_K_1466 == g_N_APPLY) && r_IS_STD_REPTYPE(((*(R17 *)rt_nil_check(p_E))).f_NAME)))
{
if (((((((*(R17 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))) || (!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL))) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an explicit-rep-converter converts one expression [3-41]", 56));
}
{
R17 * l_R_1490; memset(&l_R_1490, 0, sizeof l_R_1490);
l_R_1490 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_R_1490))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1491 = r_REP_CONVERTER(l_R_1490, ((*(R17 *)rt_nil_check(p_E))).f_A, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1491; }
}
}
else if ((l_K_1466 == g_N_APPLY))
{
{
R12 * l_Y_1492; memset(&l_Y_1492, 0, sizeof l_Y_1492);
l_Y_1492 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1492 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1492))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1492))).f_KIND == g_Y_CONST)))
{
{
R17 * l_N_1493; memset(&l_N_1493, 0, sizeof l_N_1493);
l_N_1493 = r_NEW_NODE(g_N_INDEX, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
R17 * l_A_1494; memset(&l_A_1494, 0, sizeof l_A_1494);
l_A_1494 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_A_1494))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_1493))).f_A = l_A_1494;
((*(R17 *)rt_nil_check(l_N_1493))).f_B = ((*(R17 *)rt_nil_check(p_E))).f_A;
{ R26 rv1495 = r_EXPR(l_N_1493, p_WANT);
return rv1495; }
}
}
}
{ R26 rv1496 = r_CALL_EXPR(p_E, p_WANT);
return rv1496; }
}
}
else if ((l_K_1466 == g_N_FIELD))
{
{ R26 rv1497 = r_FIELD_EXPR(p_E);
return rv1497; }
}
else if ((l_K_1466 == g_N_DEREF))
{
{
R26 l_B_1498; memset(&l_B_1498, 0, sizeof l_B_1498);
S_R26(&l_B_1498, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1498).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1499; memset(&l_TT_1499, 0, sizeof l_TT_1499);
l_TT_1499 = r_TARGET((l_B_1498).f_T);
{ R26 rv1500 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1499), (l_B_1498).f_C), l_TT_1499, 1, r_NO_TEXT());
return rv1500; }
}
}
}
else if ((l_K_1466 == g_N_INDEX))
{
if (((((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_APPLY) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME))) && r_IS_REPTYPE_NAME(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME)))
{
if (((((*(R17 *)rt_nil_check(p_E))).f_B == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_NEXT == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an explicit-rep-converter converts one expression [3-41]", 56));
}
{ R26 rv1501 = r_REP_CONVERTER(((*(R17 *)rt_nil_check(p_E))).f_A, ((*(R17 *)rt_nil_check(p_E))).f_B, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1501; }
}
{ R26 rv1502 = r_INDEX_EXPR(p_E);
return rv1502; }
}
else if ((l_K_1466 == g_N_SUBSTR))
{
{
R26 l_B_1503; memset(&l_B_1503, 0, sizeof l_B_1503);
S_R26(&l_B_1503, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1504; memset(&l_BT_1504, 0, sizeof l_BT_1504);
l_BT_1504 = r_REAL_TYPE((l_B_1503).f_T);
R9 l_LO_1505; memset(&l_LO_1505, 0, sizeof l_LO_1505);
R9 l_HI_1506; memset(&l_HI_1506, 0, sizeof l_HI_1506);
if (((((*(R22 *)rt_nil_check((l_B_1503).f_T))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_MKN(rt_str("SUBSTRING_", 10)))))
{
{
R29 * l_ARGS_1507; memset(&l_ARGS_1507, 0, sizeof l_ARGS_1507);
l_ARGS_1507 = r_VAL_ARG(l_B_1503, r_NODE_ARG(((*(R17 *)rt_nil_check(p_E))).f_B, g_M_IN, r_NODE_ARG(((*(R17 *)rt_nil_check(p_E))).f_C, g_M_IN, NULL)));
R12 * l_Y_1508; memset(&l_Y_1508, 0, sizeof l_Y_1508);
l_Y_1508 = r_USER_OPERATOR(r_MKN(rt_str("SUBSTRING_", 10)), l_ARGS_1507, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!(l_Y_1508 == NULL)))
{
{ R26 rv1509 = r_CALL_SYM(l_Y_1508, l_ARGS_1507, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1509; }
}
if ((((*(R22 *)rt_nil_check((l_B_1503).f_T))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no operation for this abstract type: ", 37), r_MK(rt_str("SUBSTRING_", 10)));
}
}
}
if ((!(((((*(R22 *)rt_nil_check(l_BT_1504))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1504))).f_KIND == g_T_BITS)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R9(&l_LO_1505, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
S_R9(&l_HI_1506, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1504))).f_KIND == g_T_BITS))
{
{ R26 rv1510 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1503).f_C, l_LO_1505, l_HI_1506), r_BITS_TYPE(((rt_int)1LL)));
return rv1510; }
}
{
R22 * l_T_1511; memset(&l_T_1511, 0, sizeof l_T_1511);
l_T_1511 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1511))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1504))).f_BASE;
{ R26 rv1512 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1503).f_C, l_LO_1505, l_HI_1506), l_T_1511);
return rv1512; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1504))).f_KIND == g_T_BITS))
{
{ R26 rv1513 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1503).f_C, l_LO_1505, l_HI_1506), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1513; }
}
{
R22 * l_T_1514; memset(&l_T_1514, 0, sizeof l_T_1514);
l_T_1514 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1514))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1504))).f_BASE;
{ R26 rv1515 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1503).f_C, l_LO_1505, l_HI_1506), l_T_1514);
return rv1515; }
}
}
}
else if ((l_K_1466 == g_N_UNOP))
{
{ R26 rv1516 = r_UNARY(p_E);
return rv1516; }
}
else if ((l_K_1466 == g_N_BINOP))
{
{ R26 rv1517 = r_BINARY(p_E);
return rv1517; }
}
else if ((l_K_1466 == g_N_IN))
{
{ R26 rv1518 = r_IN_EXPR(p_E);
return rv1518; }
}
else if (((l_K_1466 == g_N_ANY) || (l_K_1466 == g_N_DONTCARE)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((l_K_1466 == g_TS_GEN))
{
{
R17 * l_N_1519; memset(&l_N_1519, 0, sizeof l_N_1519);
l_N_1519 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1519))).f_NAME, r_QMKN(rt_str("\?", 1), ((*(R17 *)rt_nil_check(p_E))).f_NAME), 0);
if (r_NAMES_OBJECT(((*(R17 *)rt_nil_check(l_N_1519))).f_NAME))
{
{ R26 rv1520 = r_NAME_EXPR(l_N_1519, p_WANT);
return rv1520; }
}
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
else if (((((l_K_1466 == g_TS_NAME) || (l_K_1466 == g_TS_ARRAY)) || (l_K_1466 == g_TS_RECORD)) || (l_K_1466 == g_TS_ENUM)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R9 r_INT_EXPR(R17 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1521; memset(&l_SAVED_1521, 0, sizeof l_SAVED_1521);
l_SAVED_1521 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_1522; memset(&l_SAVED_Q_1522, 0, sizeof l_SAVED_Q_1522);
l_SAVED_Q_1522 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1523; memset(&l_V_1523, 0, sizeof l_V_1523);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1523, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1521;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1522;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1523).f_T)))).f_KIND == g_T_ENUM))
{
{ R9 rv1524 = (l_V_1523).f_C;
return rv1524; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1523).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1523).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1523).f_T));
}
{ R9 rv1525 = (l_V_1523).f_C;
return rv1525; }
rt_raise(RT_X_INIT);
}
static R9 r_BOOL_EXPR(R17 * p_E) { RT_B_TICK(); 
R26 l_V_1526; memset(&l_V_1526, 0, sizeof l_V_1526);
S_R26(&l_V_1526, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1526).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1526).f_T));
}
{ R9 rv1527 = (l_V_1526).f_C;
return rv1527; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { RT_B_TICK(); 
R22 * l_T_1528; memset(&l_T_1528, 0, sizeof l_T_1528);
l_T_1528 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(l_T_1528))).f_LEN_C, r_NUM(p_LEN), 0);
S_R25(&((*(R22 *)rt_nil_check(l_T_1528))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1529 = l_T_1528;
return rv1529; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R17 * p_E) { RT_B_TICK(); 
R9 l_T_1530; memset(&l_T_1530, 0, sizeof l_T_1530);
S_R9(&l_T_1530, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1531; memset(&l_S_1531, 0, sizeof l_S_1531);
l_S_1531 = rt_b_str_new((l_T_1530).f_LEN, 0);
rt_b_assign(&l_S_1531, r_STR(l_T_1530, (l_T_1530).f_LEN));
rt_int l_POINT_1532; memset(&l_POINT_1532, 0, sizeof l_POINT_1532);
l_POINT_1532 = 0;
rt_int l_DIGITS_1533; memset(&l_DIGITS_1533, 0, sizeof l_DIGITS_1533);
l_DIGITS_1533 = ((rt_int)0LL);
{ rt_int it1535_lo = ((rt_int)0LL), it1535_hi = rt_sub((l_T_1530).f_LEN, ((rt_int)1LL));
for (rt_int it1535 = it1535_lo; it1535 <= it1535_hi; it1535++) {
{
if (rt_b_eq(rt_b_slice(l_S_1531, it1535, it1535), rt_str(".", 1)))
{
l_POINT_1532 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1531, it1535, it1535), rt_str("E", 1)))
{
goto L_end1534;
}
else
{
l_DIGITS_1533 = rt_add(l_DIGITS_1533, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it1535 == it1535_hi) break;
} } L_end1534: ;
if (((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) || (!l_POINT_1532)))
{
r_CHECK_FIXED_LITERAL(p_E);
}
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1536 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1530), r_NUM(((*(R17 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R17 *)rt_nil_check(p_E))).f_IV));
return rv1536; }
}
if ((!l_POINT_1532))
{
{ R26 rv1537 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1530)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1537; }
}
{
R22 * l_F_1538; memset(&l_F_1538, 0, sizeof l_F_1538);
l_F_1538 = r_NEW_TYP(g_T_FLOAT);
R9 l_C_1539; memset(&l_C_1539, 0, sizeof l_C_1539);
S_R9(&l_C_1539, l_T_1530, 0);
((*(R22 *)rt_nil_check(l_F_1538))).f_SCALE = r_MAX_INT(l_DIGITS_1533, r_QUAL_PREC());
if ((((*(R22 *)rt_nil_check(l_F_1538))).f_SCALE > r_MAX_FLOAT_PRECISION()))
{
((*(R22 *)rt_nil_check(l_F_1538))).f_SCALE = r_MAX_FLOAT_PRECISION();
}
if ((((*(R22 *)rt_nil_check(l_F_1538))).f_SCALE < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1538))).f_SCALE = ((rt_int)1LL);
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1538))).f_SCALE)))
{
((*(R22 *)rt_nil_check(l_F_1538))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_F_1538))).f_SCALE, ((rt_int)8LL));
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1538))).f_SCALE)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the float-literal is outside the range of FLOAT (3.3.2)", 68));
}
if (rt_b_eq(rt_b_slice(l_S_1531, rt_sub((l_T_1530).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1530).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
S_R9(&l_C_1539, r_FMT1(rt_str("@0", 2), l_T_1530), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1531, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
S_R9(&l_C_1539, r_FMT1(rt_str("0@", 2), l_T_1530), 0);
}
if (r_IS_D(l_F_1538))
{
{ R26 rv1540 = r_MKET(r_FMT1(rt_str("rt_b_dlit(\"@\")", 14), l_C_1539), l_F_1538);
return rv1540; }
}
else if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_F_1538))).f_SCALE) == ((rt_int)7LL)))
{
{ R26 rv1541 = r_MKET(r_FMT1(rt_str("((double)(float)@)", 18), l_C_1539), l_F_1538);
return rv1541; }
}
{ R26 rv1542 = r_MKET(r_FMT1(rt_str("(@)", 3), l_C_1539), l_F_1538);
return rv1542; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_LITERAL_FITS(R17 * p_E, rt_int p_P) { RT_B_TICK(); 
R9 l_T_1543; memset(&l_T_1543, 0, sizeof l_T_1543);
S_R9(&l_T_1543, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1544; memset(&l_S_1544, 0, sizeof l_S_1544);
l_S_1544 = rt_b_str_new((l_T_1543).f_LEN, 0);
rt_b_assign(&l_S_1544, r_STR(l_T_1543, (l_T_1543).f_LEN));
rt_int l_INT_1545; memset(&l_INT_1545, 0, sizeof l_INT_1545);
l_INT_1545 = ((rt_int)0LL);
rt_int l_SIG_1546; memset(&l_SIG_1546, 0, sizeof l_SIG_1546);
l_SIG_1546 = 0;
rt_int l_POINT_1547; memset(&l_POINT_1547, 0, sizeof l_POINT_1547);
l_POINT_1547 = 0;
rt_int l_LEAD_1548; memset(&l_LEAD_1548, 0, sizeof l_LEAD_1548);
l_LEAD_1548 = ((rt_int)0LL);
rt_int l_I_1549; memset(&l_I_1549, 0, sizeof l_I_1549);
l_I_1549 = ((rt_int)0LL);
rt_int l_EXP_1550; memset(&l_EXP_1550, 0, sizeof l_EXP_1550);
l_EXP_1550 = ((rt_int)0LL);
for (;;) {
if ((l_I_1549 >= (l_T_1543).f_LEN)) goto L_end1551;
{
if (rt_b_eq(rt_b_slice(l_S_1544, l_I_1549, l_I_1549), rt_str("E", 1)))
{
goto L_end1551;
}
else if (rt_b_eq(rt_b_slice(l_S_1544, l_I_1549, l_I_1549), rt_str(".", 1)))
{
l_POINT_1547 = 1;
}
else if ((!rt_b_eq(rt_b_slice(l_S_1544, l_I_1549, l_I_1549), rt_str("0", 1))))
{
if ((!l_POINT_1547))
{
l_INT_1545 = rt_add(l_INT_1545, ((rt_int)1LL));
}
l_SIG_1546 = 1;
}
else if ((l_SIG_1546 && (!l_POINT_1547)))
{
l_INT_1545 = rt_add(l_INT_1545, ((rt_int)1LL));
}
else if ((l_POINT_1547 && (!l_SIG_1546)))
{
l_LEAD_1548 = rt_add(l_LEAD_1548, ((rt_int)1LL));
}
l_I_1549 = rt_add(l_I_1549, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1551: ;
if ((!l_SIG_1546))
{
{ rt_int rv1552 = 1;
return rv1552; }
}
if ((l_I_1549 < (l_T_1543).f_LEN))
{
{
rt_int l_NEG_1553; memset(&l_NEG_1553, 0, sizeof l_NEG_1553);
l_NEG_1553 = 0;
l_I_1549 = rt_add(l_I_1549, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1544, l_I_1549, l_I_1549), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1544, l_I_1549, l_I_1549), rt_str("+", 1))))
{
l_NEG_1553 = rt_b_eq(rt_b_slice(l_S_1544, l_I_1549, l_I_1549), rt_str("-", 1));
l_I_1549 = rt_add(l_I_1549, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1549 >= (l_T_1543).f_LEN)) goto L_end1554;
{
if ((l_EXP_1550 <= ((rt_int)100000LL)))
{
l_EXP_1550 = rt_add(rt_mul(l_EXP_1550, ((rt_int)10LL)), (rt_sub(r_CODE_OF(rt_b_slice(l_S_1544, l_I_1549, l_I_1549)), ((rt_int)48LL))));
}
l_I_1549 = rt_add(l_I_1549, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1554: ;
if (l_NEG_1553)
{
l_EXP_1550 = rt_neg(l_EXP_1550);
}
}
}
{
rt_int l_D_1555; memset(&l_D_1555, 0, sizeof l_D_1555);
l_D_1555 = rt_add(rt_sub(l_INT_1545, ((rt_int)1LL)), l_EXP_1550);
rt_int l_LIM_1556; memset(&l_LIM_1556, 0, sizeof l_LIM_1556);
l_LIM_1556 = ((rt_int)308LL);
if ((l_INT_1545 == ((rt_int)0LL)))
{
l_D_1555 = rt_add(rt_sub(rt_neg(l_LEAD_1548), ((rt_int)1LL)), l_EXP_1550);
}
if (((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)) || (((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL))))
{
l_LIM_1556 = ((rt_int)38LL);
}
{ rt_int rv1557 = ((l_D_1555 <= l_LIM_1556) && (l_D_1555 >= rt_add(rt_neg(l_LIM_1556), ((rt_int)1LL))));
return rv1557; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_LITERAL(R17 * p_E) { RT_B_TICK(); 
R9 l_T_1558; memset(&l_T_1558, 0, sizeof l_T_1558);
S_R9(&l_T_1558, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1559; memset(&l_S_1559, 0, sizeof l_S_1559);
l_S_1559 = rt_b_str_new((l_T_1558).f_LEN, 0);
rt_b_assign(&l_S_1559, r_STR(l_T_1558, (l_T_1558).f_LEN));
rt_int l_SIG_1560; memset(&l_SIG_1560, 0, sizeof l_SIG_1560);
l_SIG_1560 = ((rt_int)0LL);
rt_int l_FRAC_1561; memset(&l_FRAC_1561, 0, sizeof l_FRAC_1561);
l_FRAC_1561 = ((rt_int)0LL);
rt_int l_POINT_1562; memset(&l_POINT_1562, 0, sizeof l_POINT_1562);
l_POINT_1562 = 0;
rt_int l_EXP_1563; memset(&l_EXP_1563, 0, sizeof l_EXP_1563);
l_EXP_1563 = ((rt_int)0LL);
rt_int l_I_1564; memset(&l_I_1564, 0, sizeof l_I_1564);
l_I_1564 = ((rt_int)0LL);
for (;;) {
if ((l_I_1564 >= (l_T_1558).f_LEN)) goto L_end1565;
{
if (rt_b_eq(rt_b_slice(l_S_1559, l_I_1564, l_I_1564), rt_str("E", 1)))
{
goto L_end1565;
}
if (rt_b_eq(rt_b_slice(l_S_1559, l_I_1564, l_I_1564), rt_str(".", 1)))
{
l_POINT_1562 = 1;
}
else
{
if (((l_SIG_1560 > ((rt_int)0LL)) || (!rt_b_eq(rt_b_slice(l_S_1559, l_I_1564, l_I_1564), rt_str("0", 1)))))
{
l_SIG_1560 = rt_add(l_SIG_1560, ((rt_int)1LL));
}
if (l_POINT_1562)
{
l_FRAC_1561 = rt_add(l_FRAC_1561, ((rt_int)1LL));
}
}
l_I_1564 = rt_add(l_I_1564, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1565: ;
if ((rt_sub(l_I_1564, r_BOOL_INT(l_POINT_1562)) > ((rt_int)1000LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a fixed-literal has at most 1000 digits (3.2.2)", 47));
}
if ((l_I_1564 < (l_T_1558).f_LEN))
{
{
rt_int l_NEG_1566; memset(&l_NEG_1566, 0, sizeof l_NEG_1566);
l_NEG_1566 = 0;
l_I_1564 = rt_add(l_I_1564, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1559, l_I_1564, l_I_1564), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1559, l_I_1564, l_I_1564), rt_str("+", 1))))
{
l_NEG_1566 = rt_b_eq(rt_b_slice(l_S_1559, l_I_1564, l_I_1564), rt_str("-", 1));
l_I_1564 = rt_add(l_I_1564, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1564 >= (l_T_1558).f_LEN)) goto L_end1567;
{
if ((l_EXP_1563 <= ((rt_int)1000LL)))
{
l_EXP_1563 = rt_sub(rt_add(rt_mul(l_EXP_1563, ((rt_int)10LL)), r_CODE_OF(rt_b_slice(l_S_1559, l_I_1564, l_I_1564))), ((rt_int)48LL));
}
l_I_1564 = rt_add(l_I_1564, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1567: ;
if ((l_EXP_1563 > ((rt_int)1000LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the exponent of a literal must not exceed 1000 (3.2.2)", 54));
}
if (l_NEG_1566)
{
l_EXP_1563 = rt_neg(l_EXP_1563);
}
}
}
if (((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) && (((((*(R17 *)rt_nil_check(p_E))).f_IV > ((rt_int)1000LL)) || (((*(R17 *)rt_nil_check(p_E))).f_IV < rt_neg(((rt_int)1000LL)))))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a literal must not exceed 1000 (3.2.2)", 51));
}
if ((l_SIG_1560 > ((rt_int)0LL)))
{
{
rt_int l_P10_1568; memset(&l_P10_1568, 0, sizeof l_P10_1568);
l_P10_1568 = rt_sub(rt_add(rt_sub(l_SIG_1560, ((rt_int)1LL)), l_EXP_1563), l_FRAC_1561);
rt_int l_BITS_1569; memset(&l_BITS_1569, 0, sizeof l_BITS_1569);
l_BITS_1569 = rt_add(rt_quot((rt_mul(l_P10_1568, ((rt_int)3321928LL))), ((rt_int)1000000LL)), rt_mul(((*(R17 *)rt_nil_check(p_E))).f_IV, ((*(R17 *)rt_nil_check(p_E))).f_FL));
if ((l_P10_1568 < ((rt_int)0LL)))
{
l_BITS_1569 = rt_add(rt_neg((rt_quot((rt_add(rt_mul(rt_neg(l_P10_1568), ((rt_int)3321929LL)), ((rt_int)999999LL))), ((rt_int)1000000LL)))), rt_mul(((*(R17 *)rt_nil_check(p_E))).f_IV, ((*(R17 *)rt_nil_check(p_E))).f_FL));
}
if ((l_BITS_1569 >= ((rt_int)63LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the literal is outside FIXED_MIN .. FIXED_MAX (3.2.2)", 66));
}
}
}
}
static R26 r_STRING_LITERAL(R17 * p_E) { RT_B_TICK(); 
R22 * l_CS_1570; memset(&l_CS_1570, 0, sizeof l_CS_1570);
l_CS_1570 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R17 * l_P_1571; memset(&l_P_1571, 0, sizeof l_P_1571);
l_P_1571 = ((*(R17 *)rt_nil_check(p_E))).f_A;
R9 l_S_1572; memset(&l_S_1572, 0, sizeof l_S_1572);
S_R9(&l_S_1572, r_MK(rt_str("", 0)), 0);
if (((((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN == ((rt_int)0LL)))
{
l_CS_1570 = r_DEFAULT_CHARSET(((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
else
{
{
R12 * l_Y_1573; memset(&l_Y_1573, 0, sizeof l_Y_1573);
l_Y_1573 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1573 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1573))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1570 = r_RESOLVE_USER_NAME(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1570)))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1570 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1570)))).f_BASE;
if ((!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(l_CS_1570))).f_LITS)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a character set has a literal of the form \\'C' (3.7.2): ", 56), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
}
}
for (;;) {
if ((l_P_1571 == NULL)) goto L_end1574;
{
if ((((*(R17 *)rt_nil_check(l_P_1571))).f_IV == g_K_STR))
{
if ((l_CS_1570 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R9(&l_S_1572, r_CAT(l_S_1572, ((*(R17 *)rt_nil_check(l_P_1571))).f_NAME), 0);
}
else
{
{
R9 l_Q_1575; memset(&l_Q_1575, 0, sizeof l_Q_1575);
S_R9(&l_Q_1575, ((*(R17 *)rt_nil_check(l_P_1571))).f_NAME, 0);
rstr l_QS_1576; memset(&l_QS_1576, 0, sizeof l_QS_1576);
l_QS_1576 = rt_b_str_new((l_Q_1575).f_LEN, 0);
rt_b_assign(&l_QS_1576, r_STR(l_Q_1575, (l_Q_1575).f_LEN));
{ rt_int it1578_lo = ((rt_int)0LL), it1578_hi = rt_sub((l_Q_1575).f_LEN, ((rt_int)1LL));
for (rt_int it1578 = it1578_lo; it1578 <= it1578_hi; it1578++) {
{
{
R9 l_LIT_1579; memset(&l_LIT_1579, 0, sizeof l_LIT_1579);
R12 * l_Y_1580; memset(&l_Y_1580, 0, sizeof l_Y_1580);
if (rt_b_eq(rt_b_slice(l_QS_1576, it1578, it1578), rt_str("'", 1)))
{
S_R9(&l_LIT_1579, r_MKN(rt_str("\\''''", 5)), 0);
}
else
{
S_R9(&l_LIT_1579, r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1576, it1578, it1578)), rt_str("'", 1))), 0);
}
l_Y_1580 = r_FIND_LITERAL(l_LIT_1579, l_CS_1570);
if ((l_Y_1580 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_1571))).f_LINE, rt_b_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1576, it1578, it1578)));
}
S_R9(&l_S_1572, r_CATS(l_S_1572, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1580))).f_MV)), 0);
}
}
RT_B_TICK();
if (it1578 == it1578_hi) break;
} } L_end1577: ;
}
}
}
else
{
{
R12 * l_Y_1581; memset(&l_Y_1581, 0, sizeof l_Y_1581);
l_Y_1581 = r_FIND_LITERAL(((*(R17 *)rt_nil_check(l_P_1571))).f_NAME, l_CS_1570);
if ((l_Y_1581 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_1571))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R17 *)rt_nil_check(l_P_1571))).f_NAME);
}
S_R9(&l_S_1572, r_CATS(l_S_1572, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1581))).f_MV)), 0);
}
}
l_P_1571 = ((*(R17 *)rt_nil_check(l_P_1571))).f_NEXT;
}
RT_B_TICK();
} L_end1574: ;
{
R22 * l_T_1582; memset(&l_T_1582, 0, sizeof l_T_1582);
l_T_1582 = r_STR_TYPE(r_NUM((l_S_1572).f_LEN), r_SOME((l_S_1572).f_LEN));
((*(R22 *)rt_nil_check(l_T_1582))).f_BASE = l_CS_1570;
{ R26 rv1583 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1572), r_NUM((l_S_1572).f_LEN)), l_T_1582);
return rv1583; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_TS_1584; memset(&l_TS_1584, 0, sizeof l_TS_1584);
l_TS_1584 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_TS_1584))).f_NAME, p_NAME, 0);
{ R22 * rv1585 = r_RESOLVE(l_TS_1584);
return rv1585; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1586; memset(&l_Y_1586, 0, sizeof l_Y_1586);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1587; memset(&l_WT_1587, 0, sizeof l_WT_1587);
l_WT_1587 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1587))).f_KIND == g_T_ENUM))
{
l_Y_1586 = r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_WT_1587);
if ((!(l_Y_1586 == NULL)))
{
{ R26 rv1588 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1586))).f_MV), r_ENUM_RESULT(l_Y_1586, p_WANT));
return rv1588; }
}
}
}
}
l_Y_1586 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1589; memset(&l_FOUND_1589, 0, sizeof l_FOUND_1589);
l_FOUND_1589 = NULL;
rt_int l_N_1590; memset(&l_N_1590, 0, sizeof l_N_1590);
l_N_1590 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1586 == NULL)) goto L_end1591;
{
if ((((*(R12 *)rt_nil_check(l_Y_1586))).f_KIND == g_Y_ENUMLIT))
{
if ((l_FOUND_1589 == NULL))
{
l_FOUND_1589 = l_Y_1586;
}
else if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1589))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1586))).f_T))).f_BASE)))
{
l_N_1590 = rt_add(l_N_1590, ((rt_int)1LL));
}
}
l_Y_1586 = r_LOOKUP_NEXT(l_Y_1586);
}
RT_B_TICK();
} L_end1591: ;
if ((l_FOUND_1589 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1590 > ((rt_int)0LL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1592 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1589))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1589))).f_T);
return rv1592; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1593 = p_WANT;
return rv1593; }
}
if ((!(((*(R22 *)rt_nil_check(p_WANT))).f_REPS == NULL)))
{
{
R22 * l_T_1594; memset(&l_T_1594, 0, sizeof l_T_1594);
l_T_1594 = r_COPY_TYP(((*(R12 *)rt_nil_check(p_Y))).f_T);
((*(R22 *)rt_nil_check(l_T_1594))).f_REPS = ((*(R22 *)rt_nil_check(p_WANT))).f_REPS;
{ R22 * rv1595 = l_T_1594;
return rv1595; }
}
}
{ R22 * rv1596 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1596; }
rt_raise(RT_X_INIT);
}
static rt_int r_CONSTRUCTOR_WANTED(R22 * p_WANT) { RT_B_TICK(); 
if ((p_WANT == NULL))
{
{ rt_int rv1597 = 0;
return rv1597; }
}
{ rt_int rv1598 = ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM));
return rv1598; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_OBJECT(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1599; memset(&l_Y_1599, 0, sizeof l_Y_1599);
l_Y_1599 = r_LOOKUP(p_NAME);
if ((l_Y_1599 == NULL))
{
{ rt_int rv1600 = 0;
return rv1600; }
}
{ rt_int rv1601 = (((((*(R12 *)rt_nil_check(l_Y_1599))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1599))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1599))).f_KIND == g_Y_ROUTINE));
return rv1601; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STD_REPTYPE(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv1602 = (((((((((r_TEQS(p_NAME, rt_str("FIXED_STD", 9)) || r_TEQS(p_NAME, rt_str("FLOAT_STD", 9))) || r_TEQS(p_NAME, rt_str("BOOLEAN_STD", 11))) || r_TEQS(p_NAME, rt_str("ENUM_STD", 8))) || r_TEQS(p_NAME, rt_str("CHAR_STR_STD", 12))) || r_TEQS(p_NAME, rt_str("BIT_STD", 7))) || r_TEQS(p_NAME, rt_str("ARRAY_STD", 9))) || r_TEQS(p_NAME, rt_str("RECORD_STD", 10))) || r_TEQS(p_NAME, rt_str("PTR_STD", 7))) || r_TEQS(p_NAME, rt_str("SEMAPHORE_STD", 13)));
return rv1602; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_REPTYPE_NAME(R9 p_NAME) { RT_B_TICK(); 
if (((((((r_IS_STD_REPTYPE(p_NAME) || r_TEQS(p_NAME, rt_str("FIXED_REP", 9))) || r_TEQS(p_NAME, rt_str("ENUM_REP", 8))) || r_TEQS(p_NAME, rt_str("ENUM_VAL_REP", 12))) || r_TEQS(p_NAME, rt_str("CHAR_STR_REP", 12))) || r_TEQS(p_NAME, rt_str("ARRAY_REP", 9))) || r_TEQS(p_NAME, rt_str("RECORD_REP", 10))))
{
{ rt_int rv1603 = (r_LOOKUP(p_NAME) == NULL);
return rv1603; }
}
if ((!(r_ORIG_LOOKUP(p_NAME) == NULL)))
{
{ rt_int rv1604 = (((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(p_NAME)))).f_KIND == g_Y_REPTYPE);
return rv1604; }
}
{ rt_int rv1605 = 0;
return rv1605; }
rt_raise(RT_X_INIT);
}
static R26 r_REP_CONVERTER(R17 * p_S, R17 * p_E, rt_int p_LINE) { RT_B_TICK(); 
R26 l_V_1606; memset(&l_V_1606, 0, sizeof l_V_1606);
S_R26(&l_V_1606, r_EXPR(p_E, NULL), 0);
R17 * l_R_1607; memset(&l_R_1607, 0, sizeof l_R_1607);
l_R_1607 = r_NEW_NODE(g_N_REP, p_LINE);
R22 * l_T_1608; memset(&l_T_1608, 0, sizeof l_T_1608);
S_R9(&((*(R17 *)rt_nil_check(l_R_1607))).f_NAME, ((*(R17 *)rt_nil_check(p_S))).f_NAME, 0);
if ((((*(R17 *)rt_nil_check(p_S))).f_KIND == g_N_APPLY))
{
((*(R17 *)rt_nil_check(l_R_1607))).f_A = ((*(R17 *)rt_nil_check(p_S))).f_A;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1606).f_T)))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check((l_V_1606).f_T))).f_KIND == g_T_ABS)))
{
r_FAIL(p_LINE, rt_str("a representation is only for a member of a predefined type class (3.12.2)", 73));
}
l_T_1608 = r_COPY_TYP(r_REAL_TYPE((l_V_1606).f_T));
((*(R22 *)rt_nil_check(l_T_1608))).f_REPS = r_EXPAND_REP(l_R_1607, l_T_1608, p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_REPCONV = 1;
r_CHECK_REP_CLASS(l_T_1608, p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_REPCONV = 0;
if ((r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1608))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1608))).f_REPS))).f_A == NULL))))
{
{
R25 l_N_1609; memset(&l_N_1609, 0, sizeof l_N_1609);
S_R25(&l_N_1609, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1608))).f_REPS))).f_A), 0);
rt_int l_UNS_1610; memset(&l_UNS_1610, 0, sizeof l_UNS_1610);
l_UNS_1610 = ((rt_int)0LL);
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1608))).f_REPS))).f_A))).f_NEXT == NULL)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1608))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8)))
{
l_UNS_1610 = ((rt_int)1LL);
}
}
if ((l_N_1609).f_OK)
{
{ R26 rv1611 = r_MKET(r_FMT3(rt_str("rt_b_fixed_rep(@, @, @)", 23), (l_V_1606).f_C, r_NUM((l_N_1609).f_V), r_NUM(l_UNS_1610)), l_T_1608);
return rv1611; }
}
}
}
{ R26 rv1612 = r_MKET((l_V_1606).f_C, l_T_1608);
return rv1612; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1613; memset(&l_Y_1613, 0, sizeof l_Y_1613);
l_Y_1613 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1613 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_1613))).f_WITHV == ((rt_int)2LL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the variable is named by a WITH NAMING and not known in its statement (4.5.4): ", 79), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((((((*(R12 *)rt_nil_check(l_Y_1613))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL))) && (!((*(R12 *)rt_nil_check(l_Y_1613))).f_INPUT)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type or reptype declaration is a closed scope: no variable from outside (3.12.1, 3.12.3): ", 92), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1613))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a record-spec is a closed scope: no variable from outside (3.9.1): ", 67), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1613))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1613))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1614; memset(&l_WRITABLE_1614, 0, sizeof l_WRITABLE_1614);
l_WRITABLE_1614 = (r_SEG_VISIBLE(l_Y_1613, ((*(R17 *)rt_nil_check(p_E))).f_LINE) && r_CHECK_IMPORTED(l_Y_1613, ((*(R17 *)rt_nil_check(p_E))).f_LINE));
{ R26 rv1615 = r_MKLV(r_OBJ_ACCESS(l_Y_1613), ((*(R12 *)rt_nil_check(l_Y_1613))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1613))).f_KIND == g_Y_VAR) && l_WRITABLE_1614), r_NO_TEXT());
return rv1615; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1613))).f_KIND == g_Y_GEN))
{
{ R26 rv1616 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1613))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1613))).f_T);
return rv1616; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1613))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1617 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1617; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1613))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1613))).f_KIND == g_Y_BUILTIN)))
{
{
R17 * l_N_1618; memset(&l_N_1618, 0, sizeof l_N_1618);
l_N_1618 = r_NEW_NODE(g_N_APPLY, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1618))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1619 = r_CALL_EXPR(l_N_1618, p_WANT);
return rv1619; }
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R17 * p_E) { RT_B_TICK(); 
R17 * l_A_1620; memset(&l_A_1620, 0, sizeof l_A_1620);
l_A_1620 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))) && r_IS_NUMBER_LITERAL(l_A_1620)))
{
{ R26 rv1621 = r_EXPR(l_A_1620, NULL);
return rv1621; }
}
if ((((*(R17 *)rt_nil_check(l_A_1620))).f_KIND == g_N_INDEX))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1620))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1620))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1622; memset(&l_B_1622, 0, sizeof l_B_1622);
S_R26(&l_B_1622, r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1620))).f_A))).f_A), 0);
R9 l_I_1623; memset(&l_I_1623, 0, sizeof l_I_1623);
S_R9(&l_I_1623, r_INT_EXPR(((*(R17 *)rt_nil_check(l_A_1620))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1622).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1624 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1622).f_C, l_I_1623, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1622).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1624; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1625 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1622).f_C, l_I_1623, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1622).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1625; }
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R17 *)rt_nil_check(l_A_1620))).f_KIND == g_N_PAREN))
{
if (r_IS_TYPE_ATTR(((*(R17 *)rt_nil_check(l_A_1620))).f_A))
{
{ R26 rv1626 = r_ATTRIBUTE(r_TYPE_VALUE_OF(r_TYPE_ATTR_TYPE(((*(R17 *)rt_nil_check(l_A_1620))).f_A)), ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1626; }
}
}
if ((((*(R17 *)rt_nil_check(l_A_1620))).f_KIND == g_N_PAREN))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1620))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1620))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1620))).f_A))).f_A))).f_NAME))
{
{ R26 rv1627 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1620))).f_A))).f_A))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1620))).f_A))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1627; }
}
}
}
}
if ((((*(R17 *)rt_nil_check(l_A_1620))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1628; memset(&l_Y_1628, 0, sizeof l_Y_1628);
l_Y_1628 = r_LOOKUP(((*(R17 *)rt_nil_check(l_A_1620))).f_NAME);
if ((!(l_Y_1628 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1628))).f_KIND == g_Y_TYPE))
{
{ R26 rv1629 = r_TYPE_ATTRIBUTE(((*(R17 *)rt_nil_check(l_A_1620))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1629; }
}
}
else if (r_IS_TYPE_WORD(((*(R17 *)rt_nil_check(l_A_1620))).f_NAME))
{
{ R26 rv1630 = r_TYPE_ATTRIBUTE(((*(R17 *)rt_nil_check(l_A_1620))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1630; }
}
}
}
{
R26 l_B_1631; memset(&l_B_1631, 0, sizeof l_B_1631);
S_R26(&l_B_1631, r_EXPR(l_A_1620, NULL), 0);
R22 * l_BT_1632; memset(&l_BT_1632, 0, sizeof l_BT_1632);
l_BT_1632 = (l_B_1631).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1632))).f_KIND == g_T_REC))
{
{
R27 * l_F_1633; memset(&l_F_1633, 0, sizeof l_F_1633);
l_F_1633 = r_FIND_VFIELD(l_BT_1632, ((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1633 == NULL)))
{
r_CHECK_VARIANT(l_F_1633, l_BT_1632, l_A_1620, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R27 *)rt_nil_check(l_F_1633))).f_KIND == ((rt_int)2LL)) && r_HAS_ANY(l_BT_1632)))
{
{ R26 rv1634 = r_MKET(r_FMT2(rt_str("rt_b_tag((@).@)", 15), (l_B_1631).f_C, ((*(R27 *)rt_nil_check(l_F_1633))).f_CNAME), ((*(R27 *)rt_nil_check(l_F_1633))).f_T);
return rv1634; }
}
{ R26 rv1635 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1631).f_C, ((*(R27 *)rt_nil_check(l_F_1633))).f_CNAME), ((*(R27 *)rt_nil_check(l_F_1633))).f_T, ((l_B_1631).f_LVAL && (((*(R27 *)rt_nil_check(l_F_1633))).f_KIND == ((rt_int)0LL))), (l_B_1631).f_C);
return rv1635; }
}
}
}
{ R26 rv1636 = r_ATTRIBUTE(l_B_1631, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1636; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_FIXED_LITERAL(R17 * p_A) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1637 = (r_IS_FIXED_LITERAL(((*(R17 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R17 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1637; }
}
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_INT))
{
{ rt_int rv1638 = 1;
return rv1638; }
}
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_REAL))
{
if ((((*(R17 *)rt_nil_check(p_A))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv1639 = 1;
return rv1639; }
}
{
R9 l_NM_1640; memset(&l_NM_1640, 0, sizeof l_NM_1640);
S_R9(&l_NM_1640, ((*(R17 *)rt_nil_check(p_A))).f_NAME, 0);
rstr l_S_1641; memset(&l_S_1641, 0, sizeof l_S_1641);
l_S_1641 = rt_b_str_new((l_NM_1640).f_LEN, 0);
rt_b_assign(&l_S_1641, r_STR(l_NM_1640, (l_NM_1640).f_LEN));
{ rt_int it1643_lo = ((rt_int)0LL), it1643_hi = rt_sub((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN, ((rt_int)1LL));
for (rt_int it1643 = it1643_lo; it1643 <= it1643_hi; it1643++) {
{
if (rt_b_eq(rt_b_slice(l_S_1641, it1643, it1643), rt_str(".", 1)))
{
{ rt_int rv1644 = 0;
return rv1644; }
}
}
RT_B_TICK();
if (it1643 == it1643_hi) break;
} } L_end1642: ;
}
{ rt_int rv1645 = 1;
return rv1645; }
}
{ rt_int rv1646 = 0;
return rv1646; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMBER_LITERAL(R17 * p_A) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1647 = (r_IS_NUMBER_LITERAL(((*(R17 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R17 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1647; }
}
{ rt_int rv1648 = ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_INT) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_REAL));
return rv1648; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv1649 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1649; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R27 * p_F, R22 * p_T, R17 * p_BASE, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R27 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R25 l_TAGV_1650; memset(&l_TAGV_1650, 0, sizeof l_TAGV_1650);
S_R25(&l_TAGV_1650, r_TAG_VALUE(p_T, ((*(R27 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1650).f_OK))
{
r_FAILT(p_LINE, rt_b_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R27 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R27 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1650).f_V, ((*(R27 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R27 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R27 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R25 r_TAG_VALUE(R22 * p_T, R9 p_TAGN) { RT_B_TICK(); 
R27 * l_F_1651; memset(&l_F_1651, 0, sizeof l_F_1651);
l_F_1651 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R28 * l_A_1652; memset(&l_A_1652, 0, sizeof l_A_1652);
l_A_1652 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1651 == NULL)) goto L_end1653;
{
if ((!(((*(R27 *)rt_nil_check(l_F_1651))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1652 == NULL))
{
{ R25 rv1654 = r_NO_MVAL();
return rv1654; }
}
if (r_TEQ(((*(R27 *)rt_nil_check(l_F_1651))).f_NAME, p_TAGN))
{
if (((*(R28 *)rt_nil_check(l_A_1652))).f_ANYARG)
{
{ R25 rv1655 = r_NO_MVAL();
return rv1655; }
}
{ R25 rv1656 = ((*(R28 *)rt_nil_check(l_A_1652))).f_MLO;
return rv1656; }
}
l_A_1652 = ((*(R28 *)rt_nil_check(l_A_1652))).f_NEXT;
}
l_F_1651 = ((*(R27 *)rt_nil_check(l_F_1651))).f_NEXT;
}
RT_B_TICK();
} L_end1653: ;
{ R25 rv1657 = r_NO_MVAL();
return rv1657; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R17 * p_L, rt_int p_V, R22 * p_T) { RT_B_TICK(); 
R17 * l_P_1658; memset(&l_P_1658, 0, sizeof l_P_1658);
l_P_1658 = p_L;
for (;;) {
if ((l_P_1658 == NULL)) goto L_end1659;
{
if ((((*(R17 *)rt_nil_check(l_P_1658))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_P_1658))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_P_1658))).f_B, p_T)).f_V)))
{
{ rt_int rv1660 = 1;
return rv1660; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1658, p_T)).f_V == p_V))
{
{ rt_int rv1661 = 1;
return rv1661; }
}
l_P_1658 = ((*(R17 *)rt_nil_check(l_P_1658))).f_NEXT;
}
RT_B_TICK();
} L_end1659: ;
{ rt_int rv1662 = 0;
return rv1662; }
rt_raise(RT_X_INIT);
}
static R26 r_VALUE_OR_TYPE(R17 * p_E) { RT_B_TICK(); 
if (r_IS_TYPE_NAME(p_E))
{
{ R26 rv1663 = r_TYPE_VALUE(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1663; }
}
{ R26 rv1664 = r_EXPR(p_E, NULL);
return rv1664; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R17 * p_E) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1665; memset(&l_A_1665, 0, sizeof l_A_1665);
S_R26(&l_A_1665, r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_A), 0);
R9 l_I_1666; memset(&l_I_1666, 0, sizeof l_I_1666);
S_R9(&l_I_1666, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1665).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1667 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1665).f_C, (l_A_1665).f_C, l_I_1666, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1665).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1667; }
}
}
}
{ R26 rv1668 = r_INDEX_EXPR2(p_E);
return rv1668; }
rt_raise(RT_X_INIT);
}
static R9 r_INDEX_VALUE(R17 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1669; memset(&l_SAVED_1669, 0, sizeof l_SAVED_1669);
l_SAVED_1669 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_1670; memset(&l_SAVED_Q_1670, 0, sizeof l_SAVED_Q_1670);
l_SAVED_Q_1670 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1671; memset(&l_V_1671, 0, sizeof l_V_1671);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1671, r_EXPR(p_E, NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1669;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1670;
{ R9 rv1672 = r_INDEX_OF(l_V_1671, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1672; }
rt_raise(RT_X_INIT);
}
static R9 r_INDEX_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1673; memset(&l_T_1673, 0, sizeof l_T_1673);
l_T_1673 = r_REAL_TYPE((p_V).f_T);
if (((((*(R22 *)rt_nil_check((p_V).f_T))).f_KIND == g_T_ABS) || (((((*(R22 *)rt_nil_check(l_T_1673))).f_KIND == g_T_ENUM) && ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1673))).f_BASE))).f_UNORDERED || (!(((*(R22 *)rt_nil_check(l_T_1673))).f_REPS == NULL))))))))
{
{
R29 * l_ARGS_1674; memset(&l_ARGS_1674, 0, sizeof l_ARGS_1674);
l_ARGS_1674 = r_VAL_ARG(p_V, NULL);
R12 * l_Y_1675; memset(&l_Y_1675, 0, sizeof l_Y_1675);
l_Y_1675 = r_FIND_ROUTINE(r_MKN(rt_str("TO_FIXED", 8)), l_ARGS_1674, p_LINE, 0);
if ((l_Y_1675 == NULL))
{
r_FAILT(p_LINE, rt_str("an index of this type needs a TO_FIXED of the program (3.8.1): ", 63), r_TYPE_NAME((p_V).f_T));
}
{ R9 rv1676 = (r_CALL_SYM(l_Y_1675, l_ARGS_1674, p_LINE)).f_C;
return rv1676; }
}
}
if ((((*(R22 *)rt_nil_check(l_T_1673))).f_KIND == g_T_ENUM))
{
{ R9 rv1677 = (p_V).f_C;
return rv1677; }
}
if (((!(((*(R22 *)rt_nil_check(l_T_1673))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_1673))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(p_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((p_V).f_T));
}
{ R9 rv1678 = (p_V).f_C;
return rv1678; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R17 * p_E) { RT_B_TICK(); 
R26 l_B_1679; memset(&l_B_1679, 0, sizeof l_B_1679);
S_R26(&l_B_1679, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1680; memset(&l_T_1680, 0, sizeof l_T_1680);
l_T_1680 = r_REAL_TYPE((l_B_1679).f_T);
R17 * l_S_1681; memset(&l_S_1681, 0, sizeof l_S_1681);
l_S_1681 = ((*(R17 *)rt_nil_check(p_E))).f_B;
R9 l_IX_1682; memset(&l_IX_1682, 0, sizeof l_IX_1682);
S_R9(&l_IX_1682, r_MK(rt_str("", 0)), 0);
rt_int l_N_1683; memset(&l_N_1683, 0, sizeof l_N_1683);
l_N_1683 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1680))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1681 == NULL)) goto L_end1684;
{
if ((l_N_1683 > ((rt_int)0LL)))
{
S_R9(&l_IX_1682, r_CATS(l_IX_1682, rt_str(", ", 2)), 0);
}
S_R9(&l_IX_1682, r_CAT(l_IX_1682, r_INDEX_VALUE(l_S_1681)), 0);
l_N_1683 = rt_add(l_N_1683, ((rt_int)1LL));
l_S_1681 = ((*(R17 *)rt_nil_check(l_S_1681))).f_NEXT;
}
RT_B_TICK();
} L_end1684: ;
if ((!(l_N_1683 == ((*(R22 *)rt_nil_check(l_T_1680))).f_DIMS)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1683 == ((rt_int)1LL)))
{
{ R26 rv1685 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1679).f_C, l_IX_1682, (l_B_1679).f_C, (l_B_1679).f_C), ((*(R22 *)rt_nil_check(l_T_1680))).f_ELEM, (l_B_1679).f_LVAL, r_NO_TEXT());
return rv1685; }
}
{
R9 l_X_1686; memset(&l_X_1686, 0, sizeof l_X_1686);
S_R9(&l_X_1686, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1679).f_C, r_NUM(l_N_1683), (l_B_1679).f_C, (l_B_1679).f_C), 0);
{ R26 rv1687 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1686, l_IX_1682), ((*(R22 *)rt_nil_check(l_T_1680))).f_ELEM, (l_B_1679).f_LVAL, r_NO_TEXT());
return rv1687; }
}
rt_raise(RT_X_INIT);
}
static R9 r_OP_NAME(R9 p_OP, rt_int p_UNARY) { RT_B_TICK(); 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R9 rv1688 = r_MKN(rt_str("NEGATE_", 7));
return rv1688; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R9 rv1689 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1689; }
}
{ R9 rv1690 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1690; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R9 rv1691 = r_MKN(rt_str("ADD_", 4));
return rv1691; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R9 rv1692 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1692; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R9 rv1693 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1693; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R9 rv1694 = r_MKN(rt_str("DIVIDE_", 7));
return rv1694; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R9 rv1695 = r_MKN(rt_str("MODULUS_", 8));
return rv1695; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R9 rv1696 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1696; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R9 rv1697 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1697; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R9 rv1698 = r_MKN(rt_str("EQUAL_", 6));
return rv1698; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R9 rv1699 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1699; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R9 rv1700 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1700; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R9 rv1701 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1701; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R9 rv1702 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1702; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R9 rv1703 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1703; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R9 rv1704 = r_MKN(rt_str("AND_", 4));
return rv1704; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R9 rv1705 = r_MKN(rt_str("OR_", 3));
return rv1705; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R9 rv1706 = r_MKN(rt_str("XOR_", 4));
return rv1706; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R9 rv1707 = r_MKN(rt_str("IMPLIES_", 8));
return rv1707; }
}
{ R9 rv1708 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1708; }
rt_raise(RT_X_INIT);
}
static R29 * r_VAL_ARG(R26 p_V, R29 * p_NEXT) { RT_B_TICK(); 
R29 * l_A_1709; memset(&l_A_1709, 0, sizeof l_A_1709);
l_A_1709 = ({ R29 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R29(&(*(R29 *)rt_nil_check(l_A_1709)), ({ R29 rc1710; memset(&rc1710, 0, sizeof rc1710);  rc1710.f_E = NULL; S_R26(&rc1710.f_V, p_V, 0); rc1710.f_HAVE = 1; rc1710.f_MODE = g_M_IN; rc1710.f_NEXT = p_NEXT; rc1710; }), 0);
{ R29 * rv1711 = l_A_1709;
return rv1711; }
rt_raise(RT_X_INIT);
}
static R29 * r_NODE_ARG(R17 * p_E, rt_int p_MODE, R29 * p_NEXT) { RT_B_TICK(); 
R29 * l_A_1712; memset(&l_A_1712, 0, sizeof l_A_1712);
l_A_1712 = ({ R29 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R29(&(*(R29 *)rt_nil_check(l_A_1712)), ({ R29 rc1713; memset(&rc1713, 0, sizeof rc1713);  rc1713.f_E = p_E; S_R26(&rc1713.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1713.f_HAVE = 0; rc1713.f_MODE = p_MODE; rc1713.f_NEXT = p_NEXT; rc1713; }), 0);
{ R29 * rv1714 = l_A_1712;
return rv1714; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R9 p_NAME, R29 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1715; memset(&l_Y_1715, 0, sizeof l_Y_1715);
l_Y_1715 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1715 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1715 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1716 = l_Y_1715;
return rv1716; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_USER_ROUTINE(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1717; memset(&l_Y_1717, 0, sizeof l_Y_1717);
l_Y_1717 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_1717 == NULL)) goto L_end1718;
{
if ((((*(R12 *)rt_nil_check(l_Y_1717))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1719 = 1;
return rv1719; }
}
l_Y_1717 = r_LOOKUP_NEXT(l_Y_1717);
}
RT_B_TICK();
} L_end1718: ;
l_Y_1717 = r_LOOKUP(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))));
for (;;) {
if ((l_Y_1717 == NULL)) goto L_end1720;
{
if ((((*(R12 *)rt_nil_check(l_Y_1717))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1721 = 1;
return rv1721; }
}
l_Y_1717 = r_LOOKUP_NEXT(l_Y_1717);
}
RT_B_TICK();
} L_end1720: ;
{ rt_int rv1722 = 0;
return rv1722; }
rt_raise(RT_X_INIT);
}
static R29 * r_QUAL_ARGS(rt_int p_LINE) { RT_B_TICK(); 
R17 * l_Q_1723; memset(&l_Q_1723, 0, sizeof l_Q_1723);
l_Q_1723 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R29 * l_R_1724; memset(&l_R_1724, 0, sizeof l_R_1724);
l_R_1724 = NULL;
if ((l_Q_1723 == NULL))
{
{ R29 * rv1725 = NULL;
return rv1725; }
}
if (((((*(R17 *)rt_nil_check(l_Q_1723))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_R_1724 = r_VAL_ARG(r_ENUM_LITERAL(r_LIT_NODE_T(((*(R17 *)rt_nil_check(l_Q_1723))).f_NAME, p_LINE), r_ROUNDINGS_TYPE()), NULL);
}
if ((!(((*(R17 *)rt_nil_check(l_Q_1723))).f_B == NULL)))
{
l_R_1724 = r_VAL_ARG(r_EXPR(((*(R17 *)rt_nil_check(l_Q_1723))).f_B, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_R_1724);
}
{ R29 * rv1726 = l_R_1724;
return rv1726; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R9 p_NAME, R26 p_A, R17 * p_B, R17 * p_C, rt_int p_LINE) { RT_B_TICK(); 
R29 * l_ARGS_1727; memset(&l_ARGS_1727, 0, sizeof l_ARGS_1727);
l_ARGS_1727 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1728; memset(&l_Y_1728, 0, sizeof l_Y_1728);
l_Y_1728 = r_USER_OPERATOR(p_NAME, l_ARGS_1727, p_LINE);
if ((l_Y_1728 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1729 = r_CALL_SYM(l_Y_1728, l_ARGS_1727, p_LINE);
return rv1729; }
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
{ R9 rv1730 = p_C;
return rv1730; }
}
if ((p_STO > p_SFROM))
{
{ R9 rv1731 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1731; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R9 rv1732 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1732; }
}
{ R9 rv1733 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1733; }
rt_raise(RT_X_INIT);
}
static R9 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R9 rv1734 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1734; }
rt_raise(RT_X_INIT);
}
static R9 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R9 p_SELF) { RT_B_TICK(); 
R22 * l_RT_1735; memset(&l_RT_1735, 0, sizeof l_RT_1735);
l_RT_1735 = r_REAL_TYPE(p_T);
R22 * l_VT_1736; memset(&l_VT_1736, 0, sizeof l_VT_1736);
l_VT_1736 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1736))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1735))).f_KIND == g_T_PTR)))
{
{ R9 rv1737 = (p_V).f_C;
return rv1737; }
}
if (((((*(R22 *)rt_nil_check(l_RT_1735))).f_KIND == g_T_XFIX) || (((*(R22 *)rt_nil_check(l_VT_1736))).f_KIND == g_T_XFIX)))
{
if ((!r_SAME_XFIX(l_RT_1735, l_VT_1736)))
{
r_FAILT(p_LINE, rt_str("a value of another member of FIXED, which the program's STORE_ converts (D.4): ", 79), r_TYPE_NAME(l_VT_1736));
}
{ R9 rv1738 = r_RANGE_CHECK(l_RT_1735, (p_V).f_C, p_SELF);
return rv1738; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1736))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1736)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R9 rv1739 = (p_V).f_C;
return rv1739; }
}
if ((!r_SAME_CLASS(l_RT_1735, l_VT_1736)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1736), (r_TYPE_NAME(l_VT_1736)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1735), (r_TYPE_NAME(l_RT_1735)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1735))).f_KIND == g_T_INT))
{
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_RT_1735))).f_SCALE))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE == ((*(R22 *)rt_nil_check(l_RT_1735))).f_SCALE))
{
{ R9 rv1740 = r_RANGE_CHECK(l_RT_1735, (p_V).f_C, p_SELF);
return rv1740; }
}
{ R9 rv1741 = r_RANGE_CHECK(l_RT_1735, r_FMT3(rt_str("rt_b_conv(@, @, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(l_RT_1735))).f_SCALE)), p_SELF);
return rv1741; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1735))).f_KIND == g_T_FLOAT))
{
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_RT_1735))).f_SCALE) < r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1736))).f_SCALE)))
{
if (r_IS_D(l_VT_1736))
{
{ R9 rv1742 = r_RANGE_CHECK(l_RT_1735, r_FMT2(rt_str("rt_b_single_of_d(@, @, 1)", 25), (p_V).f_C, r_FLOAT_TRUNC()), p_SELF);
return rv1742; }
}
{ R9 rv1743 = r_RANGE_CHECK(l_RT_1735, r_FMT3(rt_str("rt_b_fconv(@, @, @, 1)", 22), (p_V).f_C, r_SINGLE_C(((*(R22 *)rt_nil_check(l_RT_1735))).f_SCALE), r_FLOAT_TRUNC()), p_SELF);
return rv1743; }
}
if (r_IS_D(l_RT_1735))
{
{ R9 rv1744 = r_RANGE_CHECK(l_RT_1735, r_AS_D(p_V), p_SELF);
return rv1744; }
}
{ R9 rv1745 = r_RANGE_CHECK(l_RT_1735, (p_V).f_C, p_SELF);
return rv1745; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1735))).f_KIND == g_T_ENUM))
{
if (((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1735))).f_BASE))).f_UNORDERED && ((r_HAS_VALUES(l_RT_1735) || r_HAS_VALUES(l_VT_1736)))) && (!r_SAME_REPS(l_RT_1735, l_VT_1736))))
{
r_FAIL(p_LINE, rt_str("an UNORDERED value with ENUM_VAL_REP is assigned only with the same reptype (3.4.5)", 83));
}
{ R9 rv1746 = r_RANGE_CHECK(l_RT_1735, (p_V).f_C, p_SELF);
return rv1746; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1735))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1735))).f_KIND == g_T_BITS)))
{
r_SAME_CHARSET(l_RT_1735, l_VT_1736, p_LINE);
if (((((*(R22 *)rt_nil_check(l_RT_1735))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1736))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1735))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1736))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1735))).f_KIND == g_T_PTR))
{
if ((!r_IDENTICAL_TYPE(r_TARGET(l_RT_1735), r_TARGET(l_VT_1736))))
{
r_FAIL(p_LINE, rt_str("the ELEMENT_TYPE of the pointers are not identical (3.10.5)", 59));
}
{ R9 rv1747 = r_TARGET_ARGS_CHECK(r_TARGET(l_RT_1735), r_TARGET(l_VT_1736), (p_V).f_C);
return rv1747; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1735))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1735)) && (!r_HAS_ANY(l_VT_1736))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1735))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1736))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1735))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1735))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1736))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
if ((!r_SAME_EXTENTS(l_RT_1735, l_VT_1736)))
{
r_FAIL(p_LINE, rt_str("the arrays have different EXTENT attributes (3.8.5)", 51));
}
}
{ R9 rv1748 = (p_V).f_C;
return rv1748; }
rt_raise(RT_X_INIT);
}
static R9 r_STORE_CODE(R22 * p_T, R9 p_LV, R26 p_V, rt_int p_LINE, R9 p_SELF) { RT_B_TICK(); 
if (((((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND == g_T_XFIX) || (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_V).f_T)))).f_KIND == g_T_XFIX))) && (!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))))
{
{
R29 * l_ARGS_1749; memset(&l_ARGS_1749, 0, sizeof l_ARGS_1749);
l_ARGS_1749 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1750; memset(&l_Y_1750, 0, sizeof l_Y_1750);
((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(l_ARGS_1749))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_1750 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1749, p_LINE, 0);
if ((l_Y_1750 == NULL))
{
((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(l_ARGS_1749))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_1750 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1749, p_LINE, 0);
}
if ((!(l_Y_1750 == NULL)))
{
{ R9 rv1751 = r_CATS((r_CALL_SYM(l_Y_1750, l_ARGS_1749, p_LINE)).f_C, rt_str(";", 1));
return rv1751; }
}
if ((!r_SAME_XFIX(p_T, (p_V).f_T)))
{
r_FAIL(p_LINE, rt_b_cat(rt_str("between members of FIXED of other radices or precisions, assignment is ", 71), rt_str("the program's STORE_ (D.4)", 26)));
}
{ R9 rv1752 = r_ASSIGN_CODE(r_REAL_TYPE(p_T), p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1752; }
}
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R29 * l_ARGS_1753; memset(&l_ARGS_1753, 0, sizeof l_ARGS_1753);
l_ARGS_1753 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1754; memset(&l_Y_1754, 0, sizeof l_Y_1754);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_SQUAL == NULL)))
{
{
R17 * l_SAVED_Q_1755; memset(&l_SAVED_Q_1755, 0, sizeof l_SAVED_Q_1755);
l_SAVED_Q_1755 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R29 * l_X_1756; memset(&l_X_1756, 0, sizeof l_X_1756);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
l_X_1756 = r_QUAL_ARGS(p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1755;
if ((!(l_X_1756 == NULL)))
{
{
R29 * l_P_1757; memset(&l_P_1757, 0, sizeof l_P_1757);
l_P_1757 = l_X_1756;
for (;;) {
if ((((*(R29 *)rt_nil_check(l_P_1757))).f_NEXT == NULL)) goto L_end1758;
{
l_P_1757 = ((*(R29 *)rt_nil_check(l_P_1757))).f_NEXT;
}
RT_B_TICK();
} L_end1758: ;
((*(R29 *)rt_nil_check(l_P_1757))).f_NEXT = ((*(R29 *)rt_nil_check(l_ARGS_1753))).f_NEXT;
((*(R29 *)rt_nil_check(l_ARGS_1753))).f_NEXT = l_X_1756;
}
}
}
}
{
R29 * l_LAST_1759; memset(&l_LAST_1759, 0, sizeof l_LAST_1759);
l_LAST_1759 = l_ARGS_1753;
for (;;) {
if ((((*(R29 *)rt_nil_check(l_LAST_1759))).f_NEXT == NULL)) goto L_end1760;
{
l_LAST_1759 = ((*(R29 *)rt_nil_check(l_LAST_1759))).f_NEXT;
}
RT_B_TICK();
} L_end1760: ;
((*(R29 *)rt_nil_check(l_LAST_1759))).f_MODE = g_M_OUT;
l_Y_1754 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1753, p_LINE, 0);
if ((l_Y_1754 == NULL))
{
((*(R29 *)rt_nil_check(l_LAST_1759))).f_MODE = g_M_INOUT;
l_Y_1754 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1753, p_LINE, 0);
}
}
if ((l_Y_1754 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R9 rv1761 = r_CATS((r_CALL_SYM(l_Y_1754, l_ARGS_1753, p_LINE)).f_C, rt_str(";", 1));
return rv1761; }
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
if ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, (p_V).f_T)))
{
{ R9 rv1762 = r_COMPONENT_STORE(p_T, (p_V).f_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF), p_LINE);
return rv1762; }
}
}
{ R9 rv1763 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1763; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ABS_PART(R22 * p_T) { RT_B_TICK(); 
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_XFIX)))
{
{ rt_int rv1764 = 1;
return rv1764; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{ rt_int rv1765 = r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM);
return rv1765; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R27 * l_F_1766; memset(&l_F_1766, 0, sizeof l_F_1766);
l_F_1766 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1766 == NULL)) goto L_end1767;
{
if ((((*(R27 *)rt_nil_check(l_F_1766))).f_KIND == ((rt_int)0LL)))
{
if (r_HAS_ABS_PART(((*(R27 *)rt_nil_check(l_F_1766))).f_T))
{
{ rt_int rv1768 = 1;
return rv1768; }
}
}
l_F_1766 = ((*(R27 *)rt_nil_check(l_F_1766))).f_NEXT;
}
RT_B_TICK();
} L_end1767: ;
}
}
{ rt_int rv1769 = 0;
return rv1769; }
rt_raise(RT_X_INIT);
}
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT) { RT_B_TICK(); 
if (((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_KIND == g_T_ARR))))
{
{ rt_int rv1770 = 0;
return rv1770; }
}
if ((!r_IS_NUMERIC_OR_ENUM(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM))))
{
{ rt_int rv1771 = 0;
return rv1771; }
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1772 = 0;
return rv1772; }
}
{ rt_int rv1773 = (!r_SAME_RANGE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM));
return rv1773; }
rt_raise(RT_X_INIT);
}
static R9 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R9 p_LV, R9 p_RV, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_XFIX)))
{
{ R9 rv1774 = r_STORE_CODE(p_T, p_LV, r_MKET(p_RV, p_VT), p_LINE, r_NO_TEXT());
return rv1774; }
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, p_VT)))))
{
{
R9 l_D_1775; memset(&l_D_1775, 0, sizeof l_D_1775);
S_R9(&l_D_1775, r_NEW_NAME(rt_str("ad", 2)), 0);
R9 l_S_1776; memset(&l_S_1776, 0, sizeof l_S_1776);
S_R9(&l_S_1776, r_NEW_NAME(rt_str("as", 2)), 0);
R9 l_I_1777; memset(&l_I_1777, 0, sizeof l_I_1777);
S_R9(&l_I_1777, r_NEW_NAME(rt_str("ai", 2)), 0);
R9 l_N_1778; memset(&l_N_1778, 0, sizeof l_N_1778);
S_R9(&l_N_1778, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R22 * l_VE_1779; memset(&l_VE_1779, 0, sizeof l_VE_1779);
l_VE_1779 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM;
R9 l_R_1780; memset(&l_R_1780, 0, sizeof l_R_1780);
S_R9(&l_R_1780, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1775, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R9(&l_R_1780, r_FMT3(rt_str("@@ = @; if (!rt_b_same_extents(", 31), l_R_1780, l_S_1776, p_RV), 0);
S_R9(&l_R_1780, r_FMT4(rt_str("@@, @->lo, @->hi, ", 18), l_R_1780, l_N_1778, l_D_1775, l_D_1775), 0);
S_R9(&l_R_1780, r_FMT3(rt_str("@@.lo, @.hi)) rt_raise(RT_B_SIZE); ", 35), l_R_1780, l_S_1776, l_S_1776), 0);
S_R9(&l_R_1780, r_FMT4(rt_str("@rt_int @n = rt_b_extent(@, @->lo, ", 35), l_R_1780, l_I_1777, l_N_1778, l_D_1775), 0);
S_R9(&l_R_1780, r_FMT2(rt_str("@@->hi);", 8), l_R_1780, l_D_1775), 0);
if (r_ELEMENTS_NEED_CHECK(p_T, p_VT))
{
S_R9(&l_R_1780, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1780, l_I_1777, l_I_1777, l_I_1777), 0);
S_R9(&l_R_1780, r_FMT3(rt_str("@@++) (void)@;", 14), l_R_1780, l_I_1777, r_RANGE_CHECK(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_S_1776, l_I_1777), r_NO_TEXT())), 0);
}
S_R9(&l_R_1780, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1780, l_I_1777, l_I_1777, l_I_1777), 0);
if (((r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_REC)) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_ARR)))
{
S_R9(&l_R_1780, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1780, l_I_1777, r_COMPONENT_STORE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, l_VE_1779, r_FMT2(rt_str("@->p[@]", 7), l_D_1775, l_I_1777), r_FMT2(rt_str("@.p[@]", 6), l_S_1776, l_I_1777), p_LINE)), 0);
}
else
{
S_R9(&l_R_1780, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1780, l_I_1777, r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@->p[@]", 7), l_D_1775, l_I_1777), r_FMT2(rt_str("@.p[@]", 6), l_S_1776, l_I_1777))), 0);
}
{ R9 rv1781 = l_R_1780;
return rv1781; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_D_1782; memset(&l_D_1782, 0, sizeof l_D_1782);
S_R9(&l_D_1782, r_NEW_NAME(rt_str("rd", 2)), 0);
R9 l_S_1783; memset(&l_S_1783, 0, sizeof l_S_1783);
S_R9(&l_S_1783, r_NEW_NAME(rt_str("rs", 2)), 0);
R27 * l_F_1784; memset(&l_F_1784, 0, sizeof l_F_1784);
l_F_1784 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_R_1785; memset(&l_R_1785, 0, sizeof l_R_1785);
S_R9(&l_R_1785, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1782, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R9(&l_R_1785, r_FMT3(rt_str("@@ = @;", 7), l_R_1785, l_S_1783, p_RV), 0);
for (;;) {
if ((l_F_1784 == NULL)) goto L_end1786;
{
{
R9 l_DF_1787; memset(&l_DF_1787, 0, sizeof l_DF_1787);
S_R9(&l_DF_1787, r_FMT2(rt_str("@->@", 4), l_D_1782, ((*(R27 *)rt_nil_check(l_F_1784))).f_CNAME), 0);
R9 l_SF_1788; memset(&l_SF_1788, 0, sizeof l_SF_1788);
S_R9(&l_SF_1788, r_FMT2(rt_str("@.@", 3), l_S_1783, ((*(R27 *)rt_nil_check(l_F_1784))).f_CNAME), 0);
if (((((*(R27 *)rt_nil_check(l_F_1784))).f_KIND == ((rt_int)1LL)) || (((((*(R27 *)rt_nil_check(l_F_1784))).f_KIND == ((rt_int)2LL)) && (!r_HAS_ANY(p_T))))))
{
S_R9(&l_R_1785, r_FMT2(rt_str("@ if (!(@)) rt_raise(RT_B_TYPE_MISMATCH);", 41), l_R_1785, r_EQUAL_CODE(((*(R27 *)rt_nil_check(l_F_1784))).f_T, l_DF_1787, l_SF_1788)), 0);
}
else if ((((*(R27 *)rt_nil_check(l_F_1784))).f_KIND == ((rt_int)2LL)))
{
S_R9(&l_R_1785, r_FMT3(rt_str("@ @ = @;", 8), l_R_1785, l_DF_1787, l_SF_1788), 0);
}
else
{
S_R9(&l_R_1785, r_FMT2(rt_str("@ @", 3), l_R_1785, r_COMPONENT_STORE(((*(R27 *)rt_nil_check(l_F_1784))).f_T, ((*(R27 *)rt_nil_check(l_F_1784))).f_T, l_DF_1787, l_SF_1788, p_LINE)), 0);
}
}
l_F_1784 = ((*(R27 *)rt_nil_check(l_F_1784))).f_NEXT;
}
RT_B_TICK();
} L_end1786: ;
{ R9 rv1789 = r_CATS(l_R_1785, rt_str(" }", 2));
return rv1789; }
}
}
{ R9 rv1790 = r_ASSIGN_CODE(p_T, p_LV, p_RV);
return rv1790; }
rt_raise(RT_X_INIT);
}
static R9 r_COMPONENT_EQUAL(R22 * p_T, R9 p_A, R9 p_B, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_XFIX)))
{
{
R29 * l_ARGS_1791; memset(&l_ARGS_1791, 0, sizeof l_ARGS_1791);
l_ARGS_1791 = r_VAL_ARG(r_MKET(p_A, p_T), r_VAL_ARG(r_MKET(p_B, p_T), NULL));
R12 * l_Y_1792; memset(&l_Y_1792, 0, sizeof l_Y_1792);
l_Y_1792 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1791, p_LINE);
if ((l_Y_1792 == NULL))
{
r_FAILT(p_LINE, rt_str("no EQUAL_ for the type ", 23), r_TYPE_NAME(p_T));
}
{ R9 rv1793 = (r_CALL_SYM(l_Y_1792, l_ARGS_1791, p_LINE)).f_C;
return rv1793; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_X_1794; memset(&l_X_1794, 0, sizeof l_X_1794);
S_R9(&l_X_1794, r_NEW_NAME(rt_str("ea", 2)), 0);
R9 l_Z_1795; memset(&l_Z_1795, 0, sizeof l_Z_1795);
S_R9(&l_Z_1795, r_NEW_NAME(rt_str("eb", 2)), 0);
R9 l_I_1796; memset(&l_I_1796, 0, sizeof l_I_1796);
S_R9(&l_I_1796, r_NEW_NAME(rt_str("ei", 2)), 0);
R9 l_N_1797; memset(&l_N_1797, 0, sizeof l_N_1797);
S_R9(&l_N_1797, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R9 l_R_1798; memset(&l_R_1798, 0, sizeof l_R_1798);
S_R9(&l_R_1798, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1794, p_A, l_Z_1795), 0);
S_R9(&l_R_1798, r_FMT4(rt_str("@@; int @r = rt_b_same_extents(@, ", 34), l_R_1798, p_B, l_I_1796, l_N_1797), 0);
S_R9(&l_R_1798, r_FMT4(rt_str("@@.lo, @.hi, @.lo, ", 19), l_R_1798, l_X_1794, l_X_1794, l_Z_1795), 0);
S_R9(&l_R_1798, r_FMT4(rt_str("@@.hi); rt_int @n = rt_b_extent(@, ", 35), l_R_1798, l_Z_1795, l_I_1796, l_N_1797), 0);
S_R9(&l_R_1798, r_FMT3(rt_str("@@.lo, @.hi);", 13), l_R_1798, l_X_1794, l_X_1794), 0);
S_R9(&l_R_1798, r_FMT4(rt_str("@ for (rt_int @ = 0; @r && @ < ", 31), l_R_1798, l_I_1796, l_I_1796, l_I_1796), 0);
S_R9(&l_R_1798, r_FMT4(rt_str("@@n; @++) @r = ", 15), l_R_1798, l_I_1796, l_I_1796, l_I_1796), 0);
S_R9(&l_R_1798, r_FMT2(rt_str("@@;", 3), l_R_1798, r_COMPONENT_EQUAL(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_X_1794, l_I_1796), r_FMT2(rt_str("@.p[@]", 6), l_Z_1795, l_I_1796), p_LINE)), 0);
{ R9 rv1799 = r_FMT2(rt_str("@ @r; })", 8), l_R_1798, l_I_1796);
return rv1799; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_X_1800; memset(&l_X_1800, 0, sizeof l_X_1800);
S_R9(&l_X_1800, r_NEW_NAME(rt_str("ra", 2)), 0);
R9 l_Z_1801; memset(&l_Z_1801, 0, sizeof l_Z_1801);
S_R9(&l_Z_1801, r_NEW_NAME(rt_str("rb", 2)), 0);
R27 * l_F_1802; memset(&l_F_1802, 0, sizeof l_F_1802);
l_F_1802 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_R_1803; memset(&l_R_1803, 0, sizeof l_R_1803);
S_R9(&l_R_1803, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1800, p_A, l_Z_1801), 0);
R9 l_EQ_1804; memset(&l_EQ_1804, 0, sizeof l_EQ_1804);
S_R9(&l_EQ_1804, r_MK(rt_str("1", 1)), 0);
S_R9(&l_R_1803, r_FMT2(rt_str("@@;", 3), l_R_1803, p_B), 0);
for (;;) {
if ((l_F_1802 == NULL)) goto L_end1805;
{
{
R9 l_C_1806; memset(&l_C_1806, 0, sizeof l_C_1806);
S_R9(&l_C_1806, r_COMPONENT_EQUAL(((*(R27 *)rt_nil_check(l_F_1802))).f_T, r_FMT2(rt_str("@.@", 3), l_X_1800, ((*(R27 *)rt_nil_check(l_F_1802))).f_CNAME), r_FMT2(rt_str("@.@", 3), l_Z_1801, ((*(R27 *)rt_nil_check(l_F_1802))).f_CNAME), p_LINE), 0);
if (((((*(R27 *)rt_nil_check(l_F_1802))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R9(&l_EQ_1804, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1804, r_VARIANT_COND(l_F_1802, p_T, l_X_1800), l_C_1806), 0);
}
else
{
S_R9(&l_EQ_1804, r_FMT2(rt_str("@ && @", 6), l_EQ_1804, l_C_1806), 0);
}
}
l_F_1802 = ((*(R27 *)rt_nil_check(l_F_1802))).f_NEXT;
}
RT_B_TICK();
} L_end1805: ;
{ R9 rv1807 = r_FMT2(rt_str("@ @; })", 7), l_R_1803, l_EQ_1804);
return rv1807; }
}
}
{ R9 rv1808 = r_EQUAL_CODE(p_T, p_A, p_B);
return rv1808; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R17 * p_E) { RT_B_TICK(); 
{ R26 rv1809 = r_STD_RESULT(r_UNARY1(p_E));
return rv1809; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY1(R17 * p_E) { RT_B_TICK(); 
R26 l_A_1810; memset(&l_A_1810, 0, sizeof l_A_1810);
S_R26(&l_A_1810, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1811; memset(&l_T_1811, 0, sizeof l_T_1811);
l_T_1811 = (l_A_1810).f_T;
R9 l_OP_1812; memset(&l_OP_1812, 0, sizeof l_OP_1812);
S_R9(&l_OP_1812, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
if (((((*(R22 *)rt_nil_check(l_T_1811))).f_GENP).f_LEN > ((rt_int)0LL)))
{
r_REQUIRE_WHERE(r_OP_NAME(l_OP_1812, 1), ((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
if ((((((*(R22 *)rt_nil_check(l_T_1811))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_T_1811)))).f_KIND == g_T_XFIX)) || r_HAS_USER_ROUTINE(r_OP_NAME(l_OP_1812, 1))))
{
{
R29 * l_ARGS_1813; memset(&l_ARGS_1813, 0, sizeof l_ARGS_1813);
l_ARGS_1813 = r_VAL_ARG(l_A_1810, r_QUAL_ARGS(((*(R17 *)rt_nil_check(p_E))).f_LINE));
R12 * l_Y_1814; memset(&l_Y_1814, 0, sizeof l_Y_1814);
l_Y_1814 = r_USER_OPERATOR(r_OP_NAME(l_OP_1812, 1), l_ARGS_1813, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if (((l_Y_1814 == NULL) && (!(((*(R29 *)rt_nil_check(l_ARGS_1813))).f_NEXT == NULL))))
{
((*(R29 *)rt_nil_check(l_ARGS_1813))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(r_OP_NAME(l_OP_1812, 1), l_ARGS_1813, ((*(R17 *)rt_nil_check(p_E))).f_LINE) == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("no operation takes the precision or rounding of the expression ", 63), rt_str("as arguments (D.5): ", 20)), r_OP_NAME(l_OP_1812, 1));
}
}
if ((!(l_Y_1814 == NULL)))
{
{ R26 rv1815 = r_CALL_SYM(l_Y_1814, l_ARGS_1813, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1815; }
}
if (((((*(R22 *)rt_nil_check(l_T_1811))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_T_1811)))).f_KIND == g_T_XFIX)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator of the program for ", 38), r_TYPE_NAME(l_T_1811));
}
}
}
if (r_TEQS(l_OP_1812, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1811))).f_KIND == g_T_BOOL))
{
{ R26 rv1816 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1810).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1816; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1811))).f_KIND == g_T_BITS))
{
{ R26 rv1817 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1810).f_C), l_T_1811);
return rv1817; }
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1811))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1812, rt_str("-", 1)))
{
{ R26 rv1818 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1810).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1811))).f_SCALE));
return rv1818; }
}
{ R26 rv1819 = r_MKET((l_A_1810).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1811))).f_SCALE));
return rv1819; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1811))).f_KIND == g_T_FLOAT))
{
{
R22 * l_FT_1820; memset(&l_FT_1820, 0, sizeof l_FT_1820);
l_FT_1820 = r_FLOAT_TYPE(r_MAX_INT(((*(R22 *)rt_nil_check(l_T_1811))).f_SCALE, r_QUAL_PREC()));
if (r_TEQS(l_OP_1812, rt_str("-", 1)))
{
{ R26 rv1821 = r_MKET(r_FLOAT_OP(l_OP_1812, r_MKET(r_MK(rt_str("0.0", 3)), r_FLOAT_TYPE(((rt_int)1LL))), l_A_1810, l_FT_1820), l_FT_1820);
return rv1821; }
}
{ R26 rv1822 = r_MKET((l_A_1810).f_C, l_FT_1820);
return rv1822; }
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1811));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R17 * p_E) { RT_B_TICK(); 
{ rt_int rv1823 = (((((((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) && (!r_NAMES_OBJECT(((*(R17 *)rt_nil_check(p_E))).f_NAME)))) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R17 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1823; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R17 * p_E) { RT_B_TICK(); 
R9 l_OP_1824; memset(&l_OP_1824, 0, sizeof l_OP_1824);
S_R9(&l_OP_1824, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1825; memset(&l_A_1825, 0, sizeof l_A_1825);
R26 l_B_1826; memset(&l_B_1826, 0, sizeof l_B_1826);
if ((r_TEQS(l_OP_1824, rt_str("&", 1)) || r_TEQS(l_OP_1824, rt_str("!", 1))))
{
{
R25 l_MA_1827; memset(&l_MA_1827, 0, sizeof l_MA_1827);
S_R25(&l_MA_1827, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R9 l_CA_1828; memset(&l_CA_1828, 0, sizeof l_CA_1828);
S_R9(&l_CA_1828, r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R9 l_CB_1829; memset(&l_CB_1829, 0, sizeof l_CB_1829);
S_R9(&l_CB_1829, r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1824, rt_str("&", 1)))
{
{ R26 rv1830 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1828, l_CB_1829), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1830; }
}
{ R26 rv1831 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1828, l_CB_1829), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1831; }
}
}
if ((r_IS_LITERALISH(((*(R17 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R17 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1826, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1825, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, (l_B_1826).f_T), 0);
}
else
{
S_R26(&l_A_1825, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1826, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, (l_A_1825).f_T), 0);
}
{ R26 rv1832 = r_STD_RESULT(r_APPLY_OPERATOR(p_E, l_OP_1824, l_A_1825, l_B_1826));
return rv1832; }
rt_raise(RT_X_INIT);
}
static R26 r_STD_RESULT(R26 p_V) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R26 rv1833 = p_V;
return rv1833; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((p_V).f_T)))).f_KIND == g_T_INT)))
{
{ R26 rv1834 = p_V;
return rv1834; }
}
{ R26 rv1835 = ({ R26 rc1836; memset(&rc1836, 0, sizeof rc1836);  S_R9(&rc1836.f_C, r_STD_CHECK((p_V).f_C), 0); rc1836.f_T = (p_V).f_T; rc1836.f_LVAL = 0; S_R9(&rc1836.f_SELF, (p_V).f_SELF, 0); rc1836; });
return rv1835; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1837; memset(&l_AT_1837, 0, sizeof l_AT_1837);
l_AT_1837 = (p_A).f_T;
R22 * l_BT_1838; memset(&l_BT_1838, 0, sizeof l_BT_1838);
l_BT_1838 = (p_B).f_T;
rt_int l_LINE_1839; memset(&l_LINE_1839, 0, sizeof l_LINE_1839);
l_LINE_1839 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
{
R9 l_NAME_1840; memset(&l_NAME_1840, 0, sizeof l_NAME_1840);
S_R9(&l_NAME_1840, r_OP_NAME(p_OP, 0), 0);
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
S_R9(&l_NAME_1840, r_QMKN(rt_str("MD_", 3), l_NAME_1840), 0);
}
if ((((((*(R22 *)rt_nil_check(l_AT_1837))).f_GENP).f_LEN > ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_BT_1838))).f_GENP).f_LEN > ((rt_int)0LL))))
{
r_REQUIRE_WHERE(l_NAME_1840, l_LINE_1839);
}
if (((((r_HAS_USER_ROUTINE(l_NAME_1840) || (((*(R22 *)rt_nil_check(l_AT_1837))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1838))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_1837)))).f_KIND == g_T_XFIX)) || (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_BT_1838)))).f_KIND == g_T_XFIX)))
{
{
R29 * l_ARGS_1841; memset(&l_ARGS_1841, 0, sizeof l_ARGS_1841);
l_ARGS_1841 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R29 * l_EXTRA_1842; memset(&l_EXTRA_1842, 0, sizeof l_EXTRA_1842);
l_EXTRA_1842 = r_QUAL_ARGS(l_LINE_1839);
R12 * l_Y_1843; memset(&l_Y_1843, 0, sizeof l_Y_1843);
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
l_EXTRA_1842 = r_VAL_ARG(r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_D, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_EXTRA_1842);
}
if ((!(l_EXTRA_1842 == NULL)))
{
((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(l_ARGS_1841))).f_NEXT))).f_NEXT = l_EXTRA_1842;
l_Y_1843 = r_USER_OPERATOR(l_NAME_1840, l_ARGS_1841, l_LINE_1839);
if ((!(l_Y_1843 == NULL)))
{
{ R26 rv1844 = r_CALL_SYM(l_Y_1843, l_ARGS_1841, l_LINE_1839);
return rv1844; }
}
((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(l_ARGS_1841))).f_NEXT))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(l_NAME_1840, l_ARGS_1841, l_LINE_1839) == NULL)))
{
r_FAILT(l_LINE_1839, rt_b_cat(rt_str("no operation takes the scale, precision or rounding of the ", 59), rt_str("expression as arguments (D.5): ", 31)), l_NAME_1840);
}
}
else
{
l_Y_1843 = r_USER_OPERATOR(l_NAME_1840, l_ARGS_1841, l_LINE_1839);
if ((!(l_Y_1843 == NULL)))
{
{ R26 rv1845 = r_CALL_SYM(l_Y_1843, l_ARGS_1841, l_LINE_1839);
return rv1845; }
}
}
if ((r_TEQS(p_OP, rt_str("<>", 2)) && (((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{
R12 * l_Q_1846; memset(&l_Q_1846, 0, sizeof l_Q_1846);
l_Q_1846 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1841, l_LINE_1839);
if ((!(l_Q_1846 == NULL)))
{
{ R26 rv1847 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1846, l_ARGS_1841, l_LINE_1839)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1847; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1837))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1838))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1839, rt_str("no such operation for the abstract type: ", 41), l_NAME_1840);
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_1837)))).f_KIND == g_T_XFIX) || (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_BT_1838)))).f_KIND == g_T_XFIX)))
{
r_FAILT(l_LINE_1839, rt_b_cat(rt_str("the operations of a member of FIXED of another radix or precision ", 66), rt_str("are the program's (D.4, D.6); none fits: ", 41)), l_NAME_1840);
}
}
}
}
if ((!r_PREDEFINED_ROUNDING()))
{
r_FAILT(l_LINE_1839, rt_str("no operation is defined for the rounding mode ", 46), ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1848 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1848; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1849 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1849; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1837))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1838))).f_KIND == g_T_INT)))
{
{ R26 rv1850 = r_MKET(r_FIXED_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1850; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1837))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1838))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1851 = r_MKET(r_FLOAT_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1851; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1837))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1837, l_BT_1838)))
{
if ((r_IS_UNORDERED(l_AT_1837) || r_IS_UNORDERED(l_BT_1838)))
{
r_FAIL(l_LINE_1839, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1852 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1852; }
}
r_FAILT(l_LINE_1839, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1837))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1838))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1837))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1838))).f_KIND == g_T_BITS)))))
{
r_SAME_CHARSET(l_AT_1837, l_BT_1838, l_LINE_1839);
{
R22 * l_T_1853; memset(&l_T_1853, 0, sizeof l_T_1853);
l_T_1853 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1837))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1853))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1837))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1837))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1838))).f_MLEN).f_OK))
{
S_R25(&((*(R22 *)rt_nil_check(l_T_1853))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1837))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1838))).f_MLEN).f_V)), 0);
S_R9(&((*(R22 *)rt_nil_check(l_T_1853))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1853))).f_MLEN).f_V), 0);
}
{ R26 rv1854 = r_MKET(r_FMT2(rt_str("rt_b_cat(@, @)", 14), (p_A).f_C, (p_B).f_C), l_T_1853);
return rv1854; }
}
}
r_FAIL(l_LINE_1839, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1837))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1838))).f_KIND == g_T_BITS)))
{
{ R26 rv1855 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1837);
return rv1855; }
}
r_FAILT(l_LINE_1839, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1837))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1838))).f_KIND == g_T_INT)))
{
{ R26 rv1856 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1856; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1837))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1838))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1857; memset(&l_T_1857, 0, sizeof l_T_1857);
l_T_1857 = r_FLOAT_TYPE(r_MAX_INT(r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1837))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1838))).f_SCALE), r_QUAL_PREC()));
if ((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))
{
{ R26 rv1858 = r_MKET(r_FLOAT_OP(p_OP, p_A, p_B, l_T_1857), l_T_1857);
return rv1858; }
}
if (r_TEQS(p_OP, rt_str("**", 2)))
{
r_FAIL(l_LINE_1839, rt_str("** has no predefined meaning for floating point values (3.3.4.2)", 64));
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1837))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1838))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1837))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1838))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1839, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1839, rt_b_cat(rt_b_cat(rt_b_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1837), (r_TYPE_NAME(l_AT_1837)).f_LEN)));
rt_raise(RT_X_INIT);
}
static rt_int r_IDENTICAL_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1859; memset(&l_RA_1859, 0, sizeof l_RA_1859);
l_RA_1859 = r_REAL_TYPE(p_A);
R22 * l_RB_1860; memset(&l_RB_1860, 0, sizeof l_RB_1860);
l_RB_1860 = r_REAL_TYPE(p_B);
if ((p_A == p_B))
{
{ rt_int rv1861 = 1;
return rv1861; }
}
if (((!r_SAME_TYPE(p_A, p_B)) || (!r_SAME_RANGE(p_A, p_B))))
{
{ rt_int rv1862 = 0;
return rv1862; }
}
if (((((*(R22 *)rt_nil_check(l_RA_1859))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RA_1859))).f_KIND == g_T_BITS)))
{
if (((((*(R22 *)rt_nil_check(l_RA_1859))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_1860))).f_MLEN).f_OK))
{
{ rt_int rv1863 = ((((*(R22 *)rt_nil_check(l_RA_1859))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_1860))).f_MLEN).f_V);
return rv1863; }
}
}
else if ((((*(R22 *)rt_nil_check(l_RA_1859))).f_KIND == g_T_ARR))
{
{ rt_int rv1864 = (r_SAME_EXTENTS(l_RA_1859, l_RB_1860) && r_IDENTICAL_TYPE(((*(R22 *)rt_nil_check(l_RA_1859))).f_ELEM, ((*(R22 *)rt_nil_check(l_RB_1860))).f_ELEM));
return rv1864; }
}
{ rt_int rv1865 = 1;
return rv1865; }
rt_raise(RT_X_INIT);
}
static R9 r_TARGET_ARGS_CHECK(R22 * p_RT, R22 * p_VT, R9 p_C) { RT_B_TICK(); 
R22 * l_A_1866; memset(&l_A_1866, 0, sizeof l_A_1866);
l_A_1866 = r_REAL_TYPE(p_RT);
R22 * l_B_1867; memset(&l_B_1867, 0, sizeof l_B_1867);
l_B_1867 = r_REAL_TYPE(p_VT);
R9 l_R_1868; memset(&l_R_1868, 0, sizeof l_R_1868);
S_R9(&l_R_1868, r_MK(rt_str("", 0)), 0);
if (((!(((*(R22 *)rt_nil_check(l_A_1866))).f_KIND == g_T_REC)) || (!(((*(R22 *)rt_nil_check(l_B_1867))).f_KIND == g_T_REC))))
{
{ R9 rv1869 = p_C;
return rv1869; }
}
{
R27 * l_F_1870; memset(&l_F_1870, 0, sizeof l_F_1870);
l_F_1870 = ((*(R22 *)rt_nil_check(l_A_1866))).f_FIELDS;
R28 * l_P_1871; memset(&l_P_1871, 0, sizeof l_P_1871);
l_P_1871 = ((*(R22 *)rt_nil_check(l_A_1866))).f_ARGS;
R28 * l_Q_1872; memset(&l_Q_1872, 0, sizeof l_Q_1872);
l_Q_1872 = ((*(R22 *)rt_nil_check(l_B_1867))).f_ARGS;
for (;;) {
if ((((l_F_1870 == NULL) || (l_P_1871 == NULL)) || (l_Q_1872 == NULL))) goto L_end1873;
{
if ((!(((*(R27 *)rt_nil_check(l_F_1870))).f_KIND == ((rt_int)0LL))))
{
if (((((!((*(R28 *)rt_nil_check(l_P_1871))).f_ANYARG) && (!r_IS_GEN_ARG(l_P_1871))) && (!r_IS_GEN_ARG(l_Q_1872))) && (!(((((*(R28 *)rt_nil_check(l_P_1871))).f_MLO).f_OK && (((*(R28 *)rt_nil_check(l_Q_1872))).f_MLO).f_OK)))))
{
S_R9(&l_R_1868, r_FMT3(rt_str("@ if (p && p->@ != (@)) rt_raise(RT_B_TYPE_MISMATCH);", 53), l_R_1868, ((*(R27 *)rt_nil_check(l_F_1870))).f_CNAME, ((*(R28 *)rt_nil_check(l_P_1871))).f_LO), 0);
}
l_P_1871 = ((*(R28 *)rt_nil_check(l_P_1871))).f_NEXT;
l_Q_1872 = ((*(R28 *)rt_nil_check(l_Q_1872))).f_NEXT;
}
l_F_1870 = ((*(R27 *)rt_nil_check(l_F_1870))).f_NEXT;
}
RT_B_TICK();
} L_end1873: ;
}
if (((l_R_1868).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1874 = p_C;
return rv1874; }
}
{ R9 rv1875 = r_FMT3(rt_str("({ __typeof__(@) p = (@);@ p; })", 32), p_C, p_C, l_R_1868);
return rv1875; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_EXTENTS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R28 * l_P_1876; memset(&l_P_1876, 0, sizeof l_P_1876);
l_P_1876 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_A)))).f_BOUNDS;
R28 * l_Q_1877; memset(&l_Q_1877, 0, sizeof l_Q_1877);
l_Q_1877 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_B)))).f_BOUNDS;
for (;;) {
if (((l_P_1876 == NULL) || (l_Q_1877 == NULL))) goto L_end1878;
{
if (((((((((((*(R28 *)rt_nil_check(l_P_1876))).f_MLO).f_OK && (((*(R28 *)rt_nil_check(l_P_1876))).f_MHI).f_OK) && (((*(R28 *)rt_nil_check(l_Q_1877))).f_MLO).f_OK) && (((*(R28 *)rt_nil_check(l_Q_1877))).f_MHI).f_OK) && (!r_IS_GEN_TEXT(((*(R28 *)rt_nil_check(l_P_1876))).f_LO))) && (!r_IS_GEN_TEXT(((*(R28 *)rt_nil_check(l_P_1876))).f_HI))) && (!r_IS_GEN_TEXT(((*(R28 *)rt_nil_check(l_Q_1877))).f_LO))) && (!r_IS_GEN_TEXT(((*(R28 *)rt_nil_check(l_Q_1877))).f_HI))))
{
if ((!(r_MAX_INT(rt_add(rt_sub((((*(R28 *)rt_nil_check(l_P_1876))).f_MHI).f_V, (((*(R28 *)rt_nil_check(l_P_1876))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)) == r_MAX_INT(rt_add(rt_sub((((*(R28 *)rt_nil_check(l_Q_1877))).f_MHI).f_V, (((*(R28 *)rt_nil_check(l_Q_1877))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)))))
{
{ rt_int rv1879 = 0;
return rv1879; }
}
}
l_P_1876 = ((*(R28 *)rt_nil_check(l_P_1876))).f_NEXT;
l_Q_1877 = ((*(R28 *)rt_nil_check(l_Q_1877))).f_NEXT;
}
RT_B_TICK();
} L_end1878: ;
{ rt_int rv1880 = 1;
return rv1880; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_VALUES(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv1881 = 0;
return rv1881; }
}
{ rt_int rv1882 = (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL));
return rv1882; }
rt_raise(RT_X_INIT);
}
static R22 * r_FLOAT_TYPE(rt_int p_P) { RT_B_TICK(); 
R22 * l_T_1883; memset(&l_T_1883, 0, sizeof l_T_1883);
l_T_1883 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1883))).f_SCALE = p_P;
{ R22 * rv1884 = l_T_1883;
return rv1884; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_D(R22 * p_T) { RT_B_TICK(); 
if (((!(((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL))) || (p_T == NULL)))
{
{ rt_int rv1885 = 0;
return rv1885; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv1886 = 0;
return rv1886; }
}
{ rt_int rv1887 = (r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_SCALE) > ((rt_int)7LL));
return rv1887; }
rt_raise(RT_X_INIT);
}
static R9 r_AS_D(R26 p_V) { RT_B_TICK(); 
if (r_IS_D((p_V).f_T))
{
{ R9 rv1888 = (p_V).f_C;
return rv1888; }
}
{ R9 rv1889 = r_FMT1(rt_str("rt_b_d_of_double(@)", 19), (p_V).f_C);
return rv1889; }
rt_raise(RT_X_INIT);
}
static R9 r_AS_DOUBLE(R26 p_V) { RT_B_TICK(); 
if (r_IS_D((p_V).f_T))
{
{ R9 rv1890 = r_FMT1(rt_str("rt_b_double_of_d(@)", 19), (p_V).f_C);
return rv1890; }
}
{ R9 rv1891 = (p_V).f_C;
return rv1891; }
rt_raise(RT_X_INIT);
}
static R9 r_SINGLE_C(rt_int p_P) { RT_B_TICK(); 
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
{ R9 rv1892 = r_MK(rt_str("1", 1));
return rv1892; }
}
{ R9 rv1893 = r_MK(rt_str("0", 1));
return rv1893; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_TRUNC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9)) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8))))
{
{ R9 rv1894 = r_MK(rt_str("1", 1));
return rv1894; }
}
}
{ R9 rv1895 = r_MK(rt_str("0", 1));
return rv1895; }
rt_raise(RT_X_INIT);
}
static rt_int r_QUAL_PREC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B == NULL)))
{
{ rt_int rv1896 = (r_MANIFEST(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B)).f_V;
return rv1896; }
}
}
{ rt_int rv1897 = ((rt_int)0LL);
return rv1897; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_OP(R9 p_OP, R26 p_A, R26 p_B, R22 * p_T) { RT_B_TICK(); 
if (r_IS_D(p_T))
{
{ R9 rv1898 = r_FMT4(rt_str("rt_b_dop('@', @, @, @)", 22), p_OP, r_AS_D(p_A), r_AS_D(p_B), r_FLOAT_TRUNC());
return rv1898; }
}
{ R9 rv1899 = r_CAT(r_FMT3(rt_str("rt_b_fop('@', @, @, ", 20), p_OP, r_AS_DOUBLE(p_A), r_AS_DOUBLE(p_B)), r_FMT2(rt_str("@, @)", 5), r_SINGLE_C(((*(R22 *)rt_nil_check(p_T))).f_SCALE), r_FLOAT_TRUNC()));
return rv1899; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_COMPARE(R26 p_A, R26 p_B, R9 p_OP) { RT_B_TICK(); 
if ((r_IS_D((p_A).f_T) || r_IS_D((p_B).f_T)))
{
{ R9 rv1900 = r_FMT3(rt_str("(rt_b_dcmp(@, @) @ 0)", 21), r_AS_D(p_A), r_AS_D(p_B), r_C_RELOP(p_OP));
return rv1900; }
}
{ R9 rv1901 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, r_C_RELOP(p_OP), (p_B).f_C);
return rv1901; }
rt_raise(RT_X_INIT);
}
static R9 r_C_RELOP(R9 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R9 rv1902 = r_MK(rt_str("==", 2));
return rv1902; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R9 rv1903 = r_MK(rt_str("!=", 2));
return rv1903; }
}
{ R9 rv1904 = p_OP;
return rv1904; }
rt_raise(RT_X_INIT);
}
static R9 r_LOWER_OP(R9 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R9 rv1905 = r_MK(rt_str("and", 3));
return rv1905; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R9 rv1906 = r_MK(rt_str("or", 2));
return rv1906; }
}
{ R9 rv1907 = r_MK(rt_str("xor", 3));
return rv1907; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { RT_B_TICK(); 
if ((p_A > p_B))
{
{ rt_int rv1908 = p_A;
return rv1908; }
}
{ rt_int rv1909 = p_B;
return rv1909; }
rt_raise(RT_X_INIT);
}
static R9 r_FIXED_COMPARE(R26 p_A, R26 p_B, R9 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE == ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE))
{
{ R9 rv1910 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv1910; }
}
{ R9 rv1911 = r_CAT(r_FMT3(rt_str("(rt_b_cmp(@, @, @", 17), (p_A).f_C, r_NUM(((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE), (p_B).f_C), r_FMT2(rt_str(", @) @ 0)", 9), r_NUM(((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE), p_OP));
return rv1911; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1912; memset(&l_AT_1912, 0, sizeof l_AT_1912);
l_AT_1912 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1913; memset(&l_BT_1913, 0, sizeof l_BT_1913);
l_BT_1913 = r_REAL_TYPE((p_B).f_T);
R9 l_R_1914; memset(&l_R_1914, 0, sizeof l_R_1914);
if (((((*(R22 *)rt_nil_check(l_AT_1912))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1913))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1912))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1913))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1912))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1913))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R9(&l_R_1914, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1912))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1913))).f_KIND == g_T_INT)))
{
S_R9(&l_R_1914, r_FIXED_COMPARE(p_A, p_B, r_MK(rt_str("==", 2))), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1912))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1913))).f_KIND == g_T_FLOAT)))
{
S_R9(&l_R_1914, r_FLOAT_COMPARE(p_A, p_B, r_MK(rt_str("=", 1))), 0);
}
else
{
if ((!r_SAME_CLASS(l_AT_1912, l_BT_1913)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1912))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
r_SAME_CHARSET(l_AT_1912, l_BT_1913, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R22 *)rt_nil_check(l_AT_1912))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1912) || r_HAS_ANY(l_BT_1913)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
if ((((*(R22 *)rt_nil_check(l_AT_1912))).f_KIND == g_T_ARR))
{
if ((!r_SAME_EXTENTS(l_AT_1912, l_BT_1913)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("arrays of different EXTENT attributes are compared (3.8.4.1)", 60));
}
}
if ((((*(R22 *)rt_nil_check(l_AT_1912))).f_KIND == g_T_REC))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_AT_1912))).f_ARGS, ((*(R22 *)rt_nil_check(l_BT_1913))).f_ARGS)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("records of different types are compared (3.9.4.1)", 49));
}
}
if (r_HAS_ABS_PART(l_AT_1912))
{
S_R9(&l_R_1914, r_COMPONENT_EQUAL(l_AT_1912, (p_A).f_C, (p_B).f_C, ((*(R17 *)rt_nil_check(p_E))).f_LINE), 0);
}
else
{
S_R9(&l_R_1914, r_EQUAL_CODE(l_AT_1912, (p_A).f_C, (p_B).f_C), 0);
}
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R9(&l_R_1914, r_FMT1(rt_str("(!@)", 4), l_R_1914), 0);
}
{ R26 rv1915 = r_MKET(l_R_1914, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1915; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1916; memset(&l_S1_1916, 0, sizeof l_S1_1916);
l_S1_1916 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1917; memset(&l_S2_1917, 0, sizeof l_S2_1917);
l_S2_1917 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1918; memset(&l_S_1918, 0, sizeof l_S_1918);
l_S_1918 = r_MAX_INT(l_S1_1916, l_S2_1917);
R9 l_FN_1919; memset(&l_FN_1919, 0, sizeof l_FN_1919);
S_R9(&l_FN_1919, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R9(&l_FN_1919, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1920 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1919, r_RESCALE_C((p_A).f_C, l_S1_1916, l_S_1918), r_RESCALE_C((p_B).f_C, l_S2_1917, l_S_1918)), r_INT_TYPE(l_S_1918));
return rv1920; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1921 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1916, l_S2_1917)));
return rv1921; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1922 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1916, l_S2_1917)));
return rv1922; }
}
{ R26 rv1923 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1916, l_S2_1917)));
return rv1923; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1924 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1916));
return rv1924; }
}
{ R26 rv1925 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1916));
return rv1925; }
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
rt_int l_S1_1926; memset(&l_S1_1926, 0, sizeof l_S1_1926);
l_S1_1926 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1927; memset(&l_S2_1927, 0, sizeof l_S2_1927);
l_S2_1927 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R9 l_RND_1928; memset(&l_RND_1928, 0, sizeof l_RND_1928);
S_R9(&l_RND_1928, r_MK(rt_str("0", 1)), 0);
if ((((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_B).f_T)))).f_KIND == g_T_FLOAT)))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no machine-dependent float operator ", 36), p_OP);
}
if ((r_IS_D((p_A).f_T) || r_IS_D((p_B).f_T)))
{
{ R26 rv1929 = r_MKET(r_FMT3(rt_str("rt_b_dmd('@', @, @)", 19), p_OP, r_AS_D(p_A), r_AS_D(p_B)), r_BITS_TYPE(((rt_int)128LL)));
return rv1929; }
}
else if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
{ R26 rv1930 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1930; }
}
{ R26 rv1931 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1931; }
}
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R9(&l_RND_1928, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("//", 2))))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the machine-dependent fixed point operators are !+! !-! !*! !//! (3.2.4.5), not ", 80), p_OP);
}
{ R26 rv1932 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(rt_mul(((rt_int)2LL), ((*(R7 *)rt_nil_check(g_W))).f_WORD)));
return rv1932; }
}
{
R25 l_SM_1933; memset(&l_SM_1933, 0, sizeof l_SM_1933);
S_R25(&l_SM_1933, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1934; memset(&l_S_1934, 0, sizeof l_S_1934);
l_S_1934 = (l_SM_1933).f_V;
rt_int l_SR_1935; memset(&l_SR_1935, 0, sizeof l_SR_1935);
l_SR_1935 = r_MAX_INT(l_S1_1926, l_S2_1927);
if ((!(l_SM_1933).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1936 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1934, l_S1_1926), l_S2_1927)), l_RND_1928), r_INT_TYPE(l_S_1934));
return rv1936; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1937 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1934, l_S1_1926), l_S2_1927)), l_RND_1928), r_INT_TYPE(l_S_1934));
return rv1937; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1938 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1926), r_NUM(l_S_1934), l_RND_1928), r_INT_TYPE(l_S_1934));
return rv1938; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R9 l_SUB_1939; memset(&l_SUB_1939, 0, sizeof l_SUB_1939);
S_R9(&l_SUB_1939, r_MK(rt_str("0", 1)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R9(&l_SUB_1939, r_MK(rt_str("1", 1)), 0);
}
{ R26 rv1940 = r_MKET(r_CAT(r_FMT4(rt_str("rt_b_addsc(@, @, @, @, ", 23), (p_A).f_C, r_NUM(l_S1_1926), (p_B).f_C, r_NUM(l_S2_1927)), r_FMT3(rt_str("@, @, @)", 8), r_NUM(l_S_1934), l_SUB_1939, l_RND_1928)), r_INT_TYPE(l_S_1934));
return rv1940; }
}
}
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R17 * p_E) { RT_B_TICK(); 
R26 l_V_1941; memset(&l_V_1941, 0, sizeof l_V_1941);
S_R26(&l_V_1941, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1942; memset(&l_T_1942, 0, sizeof l_T_1942);
l_T_1942 = r_REAL_TYPE((l_V_1941).f_T);
R17 * l_R_1943; memset(&l_R_1943, 0, sizeof l_R_1943);
l_R_1943 = ((*(R17 *)rt_nil_check(p_E))).f_B;
R9 l_TMP_1944; memset(&l_TMP_1944, 0, sizeof l_TMP_1944);
S_R9(&l_TMP_1944, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1945; memset(&l_LO_1945, 0, sizeof l_LO_1945);
R26 l_HI_1946; memset(&l_HI_1946, 0, sizeof l_HI_1946);
R9 l_LOC_1947; memset(&l_LOC_1947, 0, sizeof l_LOC_1947);
R9 l_HIC_1948; memset(&l_HIC_1948, 0, sizeof l_HIC_1948);
R9 l_LO_OP_1949; memset(&l_LO_OP_1949, 0, sizeof l_LO_OP_1949);
S_R9(&l_LO_OP_1949, r_MK(rt_str("<=", 2)), 0);
R9 l_HI_OP_1950; memset(&l_HI_OP_1950, 0, sizeof l_HI_OP_1950);
S_R9(&l_HI_OP_1950, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1945, r_EXPR(((*(R17 *)rt_nil_check(l_R_1943))).f_A, l_T_1942), 0);
S_R26(&l_HI_1946, r_EXPR(((*(R17 *)rt_nil_check(l_R_1943))).f_B, l_T_1942), 0);
if ((((*(R22 *)rt_nil_check(l_T_1942))).f_KIND == g_T_XFIX))
{
{ R26 rv1951 = r_MKET(r_FMT3(rt_str("({ rstr @ = @; !@; })", 21), l_TMP_1944, (l_V_1941).f_C, r_XFIX_OUTSIDE(l_T_1942, l_TMP_1944, r_XFIX_VALUE(l_T_1942, l_LO_1945, ((*(R17 *)rt_nil_check(p_E))).f_LINE), r_XFIX_VALUE(l_T_1942, l_HI_1946, ((*(R17 *)rt_nil_check(p_E))).f_LINE), ((*(R17 *)rt_nil_check(l_R_1943))).f_IV)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1951; }
}
if (r_IS_UNORDERED(l_T_1942))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1942))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1942))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1942))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_1945).f_T), l_T_1942)) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_1946).f_T), l_T_1942))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if (((((*(R17 *)rt_nil_check(l_R_1943))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_R_1943))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LO_OP_1949, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R17 *)rt_nil_check(l_R_1943))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HI_OP_1950, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R22 *)rt_nil_check(l_T_1942))).f_KIND == g_T_INT))
{
{
R26 l_X_1952; memset(&l_X_1952, 0, sizeof l_X_1952);
S_R26(&l_X_1952, r_MKET(l_TMP_1944, (l_V_1941).f_T), 0);
S_R9(&l_LOC_1947, r_FIXED_COMPARE(l_LO_1945, l_X_1952, l_LO_OP_1949), 0);
S_R9(&l_HIC_1948, r_FIXED_COMPARE(l_X_1952, l_HI_1946, l_HI_OP_1950), 0);
}
}
else if ((((*(R22 *)rt_nil_check(l_T_1942))).f_KIND == g_T_FLOAT))
{
S_R9(&l_LOC_1947, r_FLOAT_COMPARE(l_LO_1945, r_MKET(l_TMP_1944, (l_V_1941).f_T), l_LO_OP_1949), 0);
S_R9(&l_HIC_1948, r_FLOAT_COMPARE(r_MKET(l_TMP_1944, (l_V_1941).f_T), l_HI_1946, l_HI_OP_1950), 0);
}
else
{
S_R9(&l_LOC_1947, r_FMT3(rt_str("(@ @ @)", 7), (l_LO_1945).f_C, l_LO_OP_1949, l_TMP_1944), 0);
S_R9(&l_HIC_1948, r_FMT3(rt_str("(@ @ @)", 7), l_TMP_1944, l_HI_OP_1950, (l_HI_1946).f_C), 0);
}
{ R26 rv1953 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; @ && ", 17), r_CTYPE(l_T_1942), l_TMP_1944, (l_V_1941).f_C, l_LOC_1947), r_FMT1(rt_str("@; })", 5), l_HIC_1948)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1953; }
rt_raise(RT_X_INIT);
}
static R9 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R9 rv1954 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1954; }
}
{ R9 rv1955 = (p_V).f_C;
return rv1955; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { RT_B_TICK(); 
{ R26 rv1956 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1956; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { RT_B_TICK(); 
rt_int l_B_1957; memset(&l_B_1957, 0, sizeof l_B_1957);
l_B_1957 = ((rt_int)0LL);
rt_int l_P_1958; memset(&l_P_1958, 0, sizeof l_P_1958);
l_P_1958 = ((rt_int)1LL);
for (;;) {
if ((l_P_1958 >= p_N)) goto L_end1959;
{
l_B_1957 = rt_add(l_B_1957, ((rt_int)1LL));
l_P_1958 = rt_mul(l_P_1958, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1959: ;
{ rt_int rv1960 = l_B_1957;
return rv1960; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R25 l_M_1961; memset(&l_M_1961, 0, sizeof l_M_1961);
S_R25(&l_M_1961, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1961).f_OK)
{
{ rt_int rv1962 = (l_M_1961).f_V;
return rv1962; }
}
}
}
}
{ rt_int rv1963 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1963; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKING_OF(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1964; memset(&l_K_1964, 0, sizeof l_K_1964);
l_K_1964 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
rt_int l_MODE_1965; memset(&l_MODE_1965, 0, sizeof l_MODE_1965);
l_MODE_1965 = ((rt_int)2LL);
if ((l_K_1964 == g_T_STR))
{
l_MODE_1965 = ((rt_int)1LL);
}
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_KIND == g_N_REP) && (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL))))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_KIND == g_N_ENUMLIT)))
{
{
rt_int l_P_1966; memset(&l_P_1966, 0, sizeof l_P_1966);
l_P_1966 = r_PACKING_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_NAME);
if ((l_P_1966 >= ((rt_int)0LL)))
{
l_MODE_1965 = l_P_1966;
}
}
}
}
}
{ rt_int rv1967 = l_MODE_1965;
return rv1967; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKING_VALUE(R9 p_NAME) { RT_B_TICK(); 
if (r_TEQS(p_NAME, rt_str("DENSE", 5)))
{
{ rt_int rv1968 = ((rt_int)0LL);
return rv1968; }
}
else if (r_TEQS(p_NAME, rt_str("PACKED", 6)))
{
{ rt_int rv1969 = ((rt_int)1LL);
return rv1969; }
}
else if (r_TEQS(p_NAME, rt_str("UNPACKED", 8)))
{
{ rt_int rv1970 = ((rt_int)2LL);
return rv1970; }
}
{ rt_int rv1971 = rt_neg(((rt_int)1LL));
return rv1971; }
rt_raise(RT_X_INIT);
}
static R26 r_PACKING_LITERAL(rt_int p_MODE, rt_int p_LINE) { RT_B_TICK(); 
if ((p_MODE == ((rt_int)0LL)))
{
{ R26 rv1972 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("DENSE", 5), p_LINE), NULL);
return rv1972; }
}
else if ((p_MODE == ((rt_int)1LL)))
{
{ R26 rv1973 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1973; }
}
{ R26 rv1974 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1974; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACK_SLOT(rt_int p_ES, rt_int p_MODE) { RT_B_TICK(); 
rt_int l_U_1975; memset(&l_U_1975, 0, sizeof l_U_1975);
l_U_1975 = ((rt_int)8LL);
if ((p_ES <= ((rt_int)0LL)))
{
if ((p_MODE == ((rt_int)0LL)))
{
{ rt_int rv1976 = ((rt_int)0LL);
return rv1976; }
}
{ rt_int rv1977 = ((rt_int)8LL);
return rv1977; }
}
if ((p_MODE == ((rt_int)0LL)))
{
{ rt_int rv1978 = p_ES;
return rv1978; }
}
if (((p_MODE == ((rt_int)1LL)) && (p_ES <= ((*(R7 *)rt_nil_check(g_W))).f_WORD)))
{
for (;;) {
if ((l_U_1975 >= p_ES)) goto L_end1979;
{
l_U_1975 = rt_mul(l_U_1975, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1979: ;
{ rt_int rv1980 = l_U_1975;
return rv1980; }
}
{ rt_int rv1981 = rt_mul((rt_quot((rt_sub(rt_add(p_ES, ((*(R7 *)rt_nil_check(g_W))).f_WORD), ((rt_int)1LL))), ((*(R7 *)rt_nil_check(g_W))).f_WORD)), ((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1981; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_MIN_C(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1982 = r_MK(rt_str("INT64_MIN", 9));
return rv1982; }
}
{ R9 rv1983 = r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(rt_neg(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))))));
return rv1983; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_MAX_C(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1984 = r_MK(rt_str("INT64_MAX", 9));
return rv1984; }
}
{ R9 rv1985 = r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(rt_sub(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))), ((rt_int)1LL))));
return rv1985; }
rt_raise(RT_X_INIT);
}
static rt_int r_STD_MIN(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ rt_int rv1986 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
return rv1986; }
}
{ rt_int rv1987 = rt_neg(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))));
return rv1987; }
rt_raise(RT_X_INIT);
}
static rt_int r_STD_MAX(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ rt_int rv1988 = INT64_MAX;
return rv1988; }
}
{ rt_int rv1989 = rt_sub(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))), ((rt_int)1LL));
return rv1989; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_CHECK(R9 p_C) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1990 = p_C;
return rv1990; }
}
{ R9 rv1991 = r_FMT1(rt_str("rt_b_std(@)", 11), p_C);
return rv1991; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACK_SIZE(rt_int p_N, rt_int p_ES, rt_int p_MODE) { RT_B_TICK(); 
if ((p_N <= ((rt_int)0LL)))
{
{ rt_int rv1992 = ((rt_int)0LL);
return rv1992; }
}
{ rt_int rv1993 = rt_mul(p_N, r_PACK_SLOT(p_ES, p_MODE));
return rv1993; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHAR_SIZE(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv1994 = r_ENUM_SIZE(r_CHARSET_OF(p_T));
return rv1994; }
rt_raise(RT_X_INIT);
}
static R9 r_CHAR_REPS(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_1995; memset(&l_C_1995, 0, sizeof l_C_1995);
l_C_1995 = r_CHARSET_OF(p_T);
if ((!(((*(R22 *)rt_nil_check(l_C_1995))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_1995))).f_REPS))).f_B == NULL)))
{
{ R9 rv1996 = r_REP_TABLE(l_C_1995);
return rv1996; }
}
}
{ R9 rv1997 = r_FMT1(rt_str("NULL, @", 7), r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_1995))).f_BASE))).f_NLITS));
return rv1997; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_LENGTH(void) { RT_B_TICK(); 
{ rt_int rv1998 = ((rt_int)100000000LL);
return rv1998; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_FLOAT_PRECISION(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
{ rt_int rv1999 = ((rt_int)16LL);
return rv1999; }
}
{ rt_int rv2000 = ((rt_int)15LL);
return rv2000; }
rt_raise(RT_X_INIT);
}
static rt_int r_IMP_PRECISION_OF(rt_int p_P) { RT_B_TICK(); 
if ((p_P <= ((rt_int)7LL)))
{
{ rt_int rv2001 = ((rt_int)7LL);
return rv2001; }
}
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
{ rt_int rv2002 = ((rt_int)16LL);
return rv2002; }
}
{ rt_int rv2003 = ((rt_int)15LL);
return rv2003; }
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_FORMAT(rt_int p_P, R9 p_NAME) { RT_B_TICK(); 
rt_int l_SINGLE_2004; memset(&l_SINGLE_2004, 0, sizeof l_SINGLE_2004);
l_SINGLE_2004 = (r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL));
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
{ rt_int rv2005 = rt_neg(((rt_int)127LL));
return rv2005; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
{ rt_int rv2006 = ((rt_int)127LL);
return rv2006; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
{ rt_int rv2007 = ((rt_int)8LL);
return rv2007; }
}
else if ((r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)) && (!l_SINGLE_2004)))
{
{ rt_int rv2008 = ((rt_int)57LL);
return rv2008; }
}
}
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
if (l_SINGLE_2004)
{
{ rt_int rv2009 = rt_neg(((rt_int)125LL));
return rv2009; }
}
{ rt_int rv2010 = rt_neg(((rt_int)1021LL));
return rv2010; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
if (l_SINGLE_2004)
{
{ rt_int rv2011 = ((rt_int)128LL);
return rv2011; }
}
{ rt_int rv2012 = ((rt_int)1024LL);
return rv2012; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
if (l_SINGLE_2004)
{
{ rt_int rv2013 = ((rt_int)25LL);
return rv2013; }
}
{ rt_int rv2014 = ((rt_int)54LL);
return rv2014; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
if (l_SINGLE_2004)
{
{ rt_int rv2015 = ((rt_int)8LL);
return rv2015; }
}
{ rt_int rv2016 = ((rt_int)11LL);
return rv2016; }
}
else if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
if (l_SINGLE_2004)
{
{ rt_int rv2017 = ((rt_int)32LL);
return rv2017; }
}
{ rt_int rv2018 = ((rt_int)64LL);
return rv2018; }
}
{ rt_int rv2019 = ((rt_int)0LL);
return rv2019; }
rt_raise(RT_X_INIT);
}
static R25 r_STATIC_SIZE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_2020; memset(&l_K_2020, 0, sizeof l_K_2020);
l_K_2020 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_2020 == g_T_ABS))
{
{ R25 rv2021 = r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv2021; }
}
else if ((l_K_2020 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R25 rv2022 = r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A);
return rv2022; }
}
}
{ R25 rv2023 = r_SOME(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv2023; }
}
else if ((l_K_2020 == g_T_FLOAT))
{
{ R25 rv2024 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv2024; }
}
else if ((l_K_2020 == g_T_XFIX))
{
{ R25 rv2025 = r_SOME(r_XFIX_SIZE(p_T));
return rv2025; }
}
else if ((l_K_2020 == g_T_BOOL))
{
{ R25 rv2026 = r_SOME(((rt_int)1LL));
return rv2026; }
}
else if ((l_K_2020 == g_T_ENUM))
{
{ R25 rv2027 = r_SOME(r_ENUM_SIZE(p_T));
return rv2027; }
}
else if ((l_K_2020 == g_T_BITS))
{
{ R25 rv2028 = ((*(R22 *)rt_nil_check(p_T))).f_MLEN;
return rv2028; }
}
else if ((l_K_2020 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R25 rv2029 = r_SOME(r_PACK_SIZE((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_V, r_CHAR_SIZE(p_T), r_PACKING_OF(p_T)));
return rv2029; }
}
}
else if (((l_K_2020 == g_T_PTR) || (l_K_2020 == g_T_SEM)))
{
{ R25 rv2030 = r_SOME(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv2030; }
}
else if ((l_K_2020 == g_T_ARR))
{
{
R25 l_ES_2031; memset(&l_ES_2031, 0, sizeof l_ES_2031);
S_R25(&l_ES_2031, r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM), 0);
rt_int l_N_2032; memset(&l_N_2032, 0, sizeof l_N_2032);
l_N_2032 = ((rt_int)1LL);
R28 * l_B_2033; memset(&l_B_2033, 0, sizeof l_B_2033);
l_B_2033 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
if ((!(l_ES_2031).f_OK))
{
{ R25 rv2034 = r_NO_MVAL();
return rv2034; }
}
for (;;) {
if ((l_B_2033 == NULL)) goto L_end2035;
{
if ((((!(((((*(R28 *)rt_nil_check(l_B_2033))).f_MLO).f_OK && (((*(R28 *)rt_nil_check(l_B_2033))).f_MHI).f_OK))) || r_IS_GEN_TEXT(((*(R28 *)rt_nil_check(l_B_2033))).f_LO)) || r_IS_GEN_TEXT(((*(R28 *)rt_nil_check(l_B_2033))).f_HI)))
{
{ R25 rv2036 = r_NO_MVAL();
return rv2036; }
}
l_N_2032 = rt_mul(l_N_2032, r_MAX_INT(rt_add(rt_sub((((*(R28 *)rt_nil_check(l_B_2033))).f_MHI).f_V, (((*(R28 *)rt_nil_check(l_B_2033))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
l_B_2033 = ((*(R28 *)rt_nil_check(l_B_2033))).f_NEXT;
}
RT_B_TICK();
} L_end2035: ;
{ R25 rv2037 = r_SOME(r_PACK_SIZE(l_N_2032, (l_ES_2031).f_V, r_PACKING_OF(p_T)));
return rv2037; }
}
}
{ R25 rv2038 = r_NO_MVAL();
return rv2038; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_2039; memset(&l_T_2039, 0, sizeof l_T_2039);
l_T_2039 = (p_B).f_T;
rt_int l_K_2040; memset(&l_K_2040, 0, sizeof l_K_2040);
l_K_2040 = ((*(R22 *)rt_nil_check(l_T_2039))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv2041 = r_SIZE_OF(l_T_2039, (p_B).f_C);
return rv2041; }
}
if ((l_K_2040 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv2042 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_2039))).f_SCALE);
return rv2042; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv2043 = r_INT_ET(((rt_int)2LL));
return rv2043; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv2044 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv2044; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
if ((!(((*(R22 *)rt_nil_check(l_T_2039))).f_REPS == NULL)))
{
if ((r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2039))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2039))).f_REPS))).f_A == NULL))))
{
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2039))).f_REPS))).f_A))).f_NEXT == NULL)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2039))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8)))
{
{ R26 rv2045 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNSIGNED", 8), p_LINE), NULL);
return rv2045; }
}
}
}
}
{ R26 rv2046 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv2046; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_2039))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2047 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_2039))).f_LO_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_2039))).f_SCALE));
return rv2047; }
}
{ R26 rv2048 = r_MKET(r_STD_MIN_C(), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_2039))).f_SCALE));
return rv2048; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_2039))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2049 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_2039))).f_HI_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_2039))).f_SCALE));
return rv2049; }
}
{ R26 rv2050 = r_MKET(r_STD_MAX_C(), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_2039))).f_SCALE));
return rv2050; }
}
}
else if ((l_K_2040 == g_T_XFIX))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv2051 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_2039))).f_SCALE);
return rv2051; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv2052 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_2039))).f_RADIX);
return rv2052; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv2053 = r_ENUM_LITERAL(r_LIT_NODE_T(r_PRECISION_NAME(((*(R22 *)rt_nil_check(l_T_2039))).f_PREC), p_LINE), r_PRECISIONS_TYPE());
return rv2053; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && ((((*(R22 *)rt_nil_check(l_T_2039))).f_LO_C).f_LEN > ((rt_int)0LL))))
{
{ R26 rv2054 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_2039))).f_LO_C, (p_B).f_SELF), r_XFIX_BASE(l_T_2039));
return rv2054; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && ((((*(R22 *)rt_nil_check(l_T_2039))).f_HI_C).f_LEN > ((rt_int)0LL))))
{
{ R26 rv2055 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_2039))).f_HI_C, (p_B).f_SELF), r_XFIX_BASE(l_T_2039));
return rv2055; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) || r_TEQS(p_NAME, rt_str("MAX", 3))))
{
{
R29 * l_ARGS_2056; memset(&l_ARGS_2056, 0, sizeof l_ARGS_2056);
l_ARGS_2056 = r_VAL_ARG(r_INT_ET(((*(R22 *)rt_nil_check(l_T_2039))).f_SCALE), r_VAL_ARG(r_INT_ET(((*(R22 *)rt_nil_check(l_T_2039))).f_RADIX), r_VAL_ARG(r_ENUM_LITERAL(r_LIT_NODE_T(r_PRECISION_NAME(((*(R22 *)rt_nil_check(l_T_2039))).f_PREC), p_LINE), r_PRECISIONS_TYPE()), NULL)));
R12 * l_Y_2057; memset(&l_Y_2057, 0, sizeof l_Y_2057);
l_Y_2057 = r_FIND_ROUTINE(r_QMKN(rt_str("FIXED_", 6), p_NAME), l_ARGS_2056, p_LINE, 0);
if ((l_Y_2057 == NULL))
{
r_FAILT(p_LINE, rt_str("the program defines no FIXED_MIN and FIXED_MAX for ", 51), r_TYPE_NAME(l_T_2039));
}
{ R26 rv2058 = r_CALL_SYM(l_Y_2057, l_ARGS_2056, p_LINE);
return rv2058; }
}
}
}
else if ((l_K_2040 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv2059 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_2039))).f_SCALE);
return rv2059; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv2060 = r_INT_ET(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_2039))).f_SCALE));
return rv2060; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv2061 = r_INT_ET(((rt_int)2LL));
return rv2061; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R26 rv2062 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_2039))).f_SCALE, p_NAME));
return rv2062; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) || r_TEQS(p_NAME, rt_str("MAX", 3))))
{
{
R22 * l_MT_2063; memset(&l_MT_2063, 0, sizeof l_MT_2063);
l_MT_2063 = r_FLOAT_TYPE(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_2039))).f_SCALE));
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_2039))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2064 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_2039))).f_LO_C, (p_B).f_SELF), l_MT_2063);
return rv2064; }
}
{ R26 rv2065 = r_MKET(r_FLOAT_LIMIT(l_MT_2063, p_NAME), l_MT_2063);
return rv2065; }
}
if (((((*(R22 *)rt_nil_check(l_T_2039))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2066 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_2039))).f_HI_C, (p_B).f_SELF), l_MT_2063);
return rv2066; }
}
{ R26 rv2067 = r_MKET(r_FLOAT_LIMIT(l_MT_2063, p_NAME), l_MT_2063);
return rv2067; }
}
}
}
else if ((l_K_2040 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_2039))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2068 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_2039))).f_LO_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_2039))).f_BASE);
return rv2068; }
}
{ R26 rv2069 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_2039))).f_BASE);
return rv2069; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_2039))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2070 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_2039))).f_HI_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_2039))).f_BASE);
return rv2070; }
}
{ R26 rv2071 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2039))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_2039))).f_BASE);
return rv2071; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_2039))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2072 = r_MKET(r_SUBST_SELF(r_FMT4(rt_str("((@) >= (@) \? (@) - (@) + 1 : 0)", 32), ((*(R22 *)rt_nil_check(l_T_2039))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_2039))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_2039))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_2039))).f_LO_C), (p_B).f_SELF), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2072; }
}
{ R26 rv2073 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2039))).f_BASE))).f_NLITS);
return rv2073; }
}
}
else if (((l_K_2040 == g_T_STR) || (l_K_2040 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv2074 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2074; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv2075 = r_PACKING_LITERAL(r_PACKING_OF(l_T_2039), p_LINE);
return rv2075; }
}
}
else if ((l_K_2040 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv2076 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_2039))).f_DIMS);
return rv2076; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) || r_TEQS(p_NAME, rt_str("BOUNDS", 6))))
{
{ R26 rv2077 = r_ARRAY_SHAPE(p_B, p_NAME);
return rv2077; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv2078 = r_PACKING_LITERAL(r_PACKING_OF(l_T_2039), p_LINE);
return rv2078; }
}
}
else if ((l_K_2040 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_2039))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv2079 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv2079; }
}
{ R26 rv2080 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv2080; }
}
}
else if (((l_K_2040 == g_T_ABS) || (l_K_2040 == g_T_REC)))
{
{
R22 * l_U_2081; memset(&l_U_2081, 0, sizeof l_U_2081);
l_U_2081 = l_T_2039;
if ((l_K_2040 == g_T_ABS))
{
l_U_2081 = ((*(R22 *)rt_nil_check(l_T_2039))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_2081))).f_KIND == g_T_REC))
{
{
R27 * l_F_2082; memset(&l_F_2082, 0, sizeof l_F_2082);
l_F_2082 = r_FIND_FIELD(l_U_2081, p_NAME);
if ((!(l_F_2082 == NULL)))
{
if ((!(((*(R27 *)rt_nil_check(l_F_2082))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv2083 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R27 *)rt_nil_check(l_F_2082))).f_CNAME), ((*(R27 *)rt_nil_check(l_F_2082))).f_T);
return rv2083; }
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
R22 * l_T_2084; memset(&l_T_2084, 0, sizeof l_T_2084);
l_T_2084 = r_REAL_TYPE((p_B).f_T);
R9 l_D_2085; memset(&l_D_2085, 0, sizeof l_D_2085);
S_R9(&l_D_2085, r_NUM(((*(R22 *)rt_nil_check(l_T_2084))).f_DIMS), 0);
R9 l_X_2086; memset(&l_X_2086, 0, sizeof l_X_2086);
S_R9(&l_X_2086, r_NEW_NAME(rt_str("sx", 2)), 0);
R9 l_R_2087; memset(&l_R_2087, 0, sizeof l_R_2087);
S_R9(&l_R_2087, r_NEW_NAME(rt_str("sr", 2)), 0);
R22 * l_ELEM_2088; memset(&l_ELEM_2088, 0, sizeof l_ELEM_2088);
l_ELEM_2088 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
R9 l_C_2089; memset(&l_C_2089, 0, sizeof l_C_2089);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
{
R17 * l_TS_2090; memset(&l_TS_2090, 0, sizeof l_TS_2090);
l_TS_2090 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_TS_2090))).f_NAME, r_MKN(rt_str("BOUNDS_DEF", 10)), 0);
((*(R17 *)rt_nil_check(l_TS_2090))).f_A = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_TS_2090))).f_A))).f_NAME, r_MKN(rt_str("STD", 3)), 0);
l_ELEM_2088 = r_RESOLVE(l_TS_2090);
}
}
{
R22 * l_A_2091; memset(&l_A_2091, 0, sizeof l_A_2091);
l_A_2091 = r_ARRAY_OF(l_ELEM_2088, ((rt_int)1LL));
S_R9(&l_C_2089, r_FMT4(rt_str("({ @ @ = @; @ ", 14), r_CTYPE(l_T_2084), l_X_2086, (p_B).f_C, ((*(R22 *)rt_nil_check(l_A_2091))).f_CNAME), 0);
S_R9(&l_C_2089, r_FMT4(rt_str("@@; memset(&@, 0, sizeof @);", 28), l_C_2089, l_R_2087, l_R_2087, l_R_2087), 0);
S_R9(&l_C_2089, r_FMT4(rt_str("@ @.lo[0] = 0; @.hi[0] = @ - 1;", 31), l_C_2089, l_R_2087, l_R_2087, l_D_2085), 0);
S_R9(&l_C_2089, r_FMT4(rt_str("@ @.p = rt_alloc(@ * sizeof *@.p);", 34), l_C_2089, l_R_2087, l_D_2085, l_R_2087), 0);
S_R9(&l_C_2089, r_FMT2(rt_str("@ for (int i = 0; i < @; i++) {", 31), l_C_2089, l_D_2085), 0);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
S_R9(&l_C_2089, r_FMT2(rt_str("@ @", 3), l_C_2089, r_INIT_CODE(l_ELEM_2088, r_FMT1(rt_str("@.p[i]", 6), l_R_2087))), 0);
S_R9(&l_C_2089, r_FMT4(rt_str("@ @.p[i].f_MIN = @.lo[i]; @.p[i].f_MAX = ", 41), l_C_2089, l_R_2087, l_X_2086, l_R_2087), 0);
S_R9(&l_C_2089, r_FMT2(rt_str("@@.hi[i]; }", 11), l_C_2089, l_X_2086), 0);
}
else
{
S_R9(&l_C_2089, r_FMT4(rt_str("@ @.p[i] = @.hi[i] >= @.lo[i] \? ", 32), l_C_2089, l_R_2087, l_X_2086, l_X_2086), 0);
S_R9(&l_C_2089, r_FMT4(rt_str("@@.hi[i] - @.lo[i] + 1 : 0; }", 29), l_C_2089, l_X_2086, l_X_2086, l_X_2086), 0);
}
{ R26 rv2092 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_C_2089, l_R_2087), l_A_2091);
return rv2092; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_LIT_NODE_T(R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
{ R17 * rv2093 = r_LIT_NODE(r_STR(p_NAME, (p_NAME).f_LEN), p_LINE);
return rv2093; }
rt_raise(RT_X_INIT);
}
static R17 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_N_2094; memset(&l_N_2094, 0, sizeof l_N_2094);
l_N_2094 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_2094))).f_NAME, r_MKN(p_NAME), 0);
{ R17 * rv2095 = l_N_2094;
return rv2095; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R9 p_C) { RT_B_TICK(); 
rt_int l_K_2096; memset(&l_K_2096, 0, sizeof l_K_2096);
l_K_2096 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_2096 == g_T_XFIX))
{
{ R26 rv2097 = r_INT_ET(r_XFIX_SIZE(p_T));
return rv2097; }
}
else if ((l_K_2096 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv2098 = r_MKET((r_EXPR(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2098; }
}
}
{ R26 rv2099 = r_INT_ET(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv2099; }
}
else if ((l_K_2096 == g_T_FLOAT))
{
{ R26 rv2100 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv2100; }
}
else if ((l_K_2096 == g_T_BOOL))
{
{ R26 rv2101 = r_INT_ET(((rt_int)1LL));
return rv2101; }
}
else if ((l_K_2096 == g_T_ENUM))
{
{ R26 rv2102 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv2102; }
}
else if ((l_K_2096 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2103 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2103; }
}
{ R26 rv2104 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2104; }
}
else if ((l_K_2096 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R26 rv2105 = r_INT_ET((r_STATIC_SIZE(p_T)).f_V);
return rv2105; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2106 = r_MKET(r_FMT3(rt_str("rt_b_pack_size(@, @, @)", 23), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C, r_NUM(r_CHAR_SIZE(p_T)), r_NUM(r_PACKING_OF(p_T))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2106; }
}
{ R26 rv2107 = r_MKET(r_FMT3(rt_str("rt_b_pack_size((@).len, @, @)", 29), p_C, r_NUM(r_CHAR_SIZE(p_T)), r_NUM(r_PACKING_OF(p_T))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2107; }
}
else if (((l_K_2096 == g_T_PTR) || (l_K_2096 == g_T_SEM)))
{
{ R26 rv2108 = r_INT_ET(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv2108; }
}
else if ((l_K_2096 == g_T_ABS))
{
{ R26 rv2109 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv2109; }
}
else if ((l_K_2096 == g_T_REC))
{
{ R26 rv2110 = r_MKET(r_RECORD_SIZE(p_T, p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2110; }
}
else if ((l_K_2096 == g_T_ARR))
{
{
R25 l_ES_2111; memset(&l_ES_2111, 0, sizeof l_ES_2111);
S_R25(&l_ES_2111, r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM), 0);
if ((l_ES_2111).f_OK)
{
{ R26 rv2112 = r_MKET(r_CAT(r_FMT3(rt_str("rt_b_pack_size(rt_b_extent(@, (@).lo, (@).hi), ", 47), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C), r_FMT2(rt_str("@, @)", 5), r_NUM((l_ES_2111).f_V), r_NUM(r_PACKING_OF(p_T)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2112; }
}
}
{
R9 l_A_2113; memset(&l_A_2113, 0, sizeof l_A_2113);
S_R9(&l_A_2113, r_NEW_NAME(rt_str("sa", 2)), 0);
R26 l_ES_2114; memset(&l_ES_2114, 0, sizeof l_ES_2114);
S_R26(&l_ES_2114, r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT1(rt_str("@.p[0]", 6), l_A_2113)), 0);
{ R26 rv2115 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; rt_int n_ = rt_b_extent(@, ", 39), r_CTYPE(p_T), l_A_2113, p_C, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS)), r_CAT(r_FMT3(rt_str("@.lo, @.hi); rt_b_pack_size(n_, n_ \? @ : 0, ", 44), l_A_2113, l_A_2113, (l_ES_2114).f_C), r_FMT1(rt_str("@); })", 6), r_NUM(r_PACKING_OF(p_T))))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2115; }
}
}
{ R26 rv2116 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2116; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R9 p_TNAME, R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{ R26 rv2117 = r_ATTRIBUTE(r_TYPE_VALUE(p_TNAME, p_LINE), p_NAME, p_LINE);
return rv2117; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE(R9 p_TNAME, rt_int p_LINE) { RT_B_TICK(); 
{ R26 rv2118 = r_TYPE_VALUE_OF(r_RESOLVE_USER_NAME(p_TNAME, p_LINE));
return rv2118; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_2119; memset(&l_RT_2119, 0, sizeof l_RT_2119);
l_RT_2119 = r_REAL_TYPE(p_T);
if (((((*(R22 *)rt_nil_check(l_RT_2119))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(l_RT_2119))).f_KIND == g_T_REC)))
{
{
R9 l_TMP_2120; memset(&l_TMP_2120, 0, sizeof l_TMP_2120);
S_R9(&l_TMP_2120, r_NEW_NAME(rt_str("tq", 2)), 0);
R9 l_C_2121; memset(&l_C_2121, 0, sizeof l_C_2121);
S_R9(&l_C_2121, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), r_CTYPE(p_T), l_TMP_2120, l_TMP_2120, l_TMP_2120), 0);
S_R9(&l_C_2121, r_FMT3(rt_str("@@ @; })", 8), l_C_2121, r_INIT_CODE(l_RT_2119, l_TMP_2120), l_TMP_2120), 0);
{ R26 rv2122 = r_MKET(l_C_2121, p_T);
return rv2122; }
}
}
{ R26 rv2123 = r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(p_T)), p_T);
return rv2123; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_NAME(R17 * p_E) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{ rt_int rv2124 = 0;
return rv2124; }
}
{
R12 * l_Y_2125; memset(&l_Y_2125, 0, sizeof l_Y_2125);
l_Y_2125 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_2125 == NULL))
{
{ rt_int rv2126 = 0;
return rv2126; }
}
{ rt_int rv2127 = (((*(R12 *)rt_nil_check(l_Y_2125))).f_KIND == g_Y_TYPE);
return rv2127; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R9 p_TNAME, R9 p_A, R9 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv2128 = r_INT_ET(((rt_int)100000000LL));
return rv2128; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv2129 = r_INT_ET(((rt_int)15LL));
return rv2129; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv2130 = r_INT_ET(((rt_int)0LL));
return rv2130; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R22 * l_T_2131; memset(&l_T_2131, 0, sizeof l_T_2131);
l_T_2131 = p_WANT;
if ((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_2131 = r_RESOLVE(((*(R17 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_2131 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_2131 = r_REAL_TYPE(l_T_2131);
if ((!(((*(R22 *)rt_nil_check(l_T_2131))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_2131))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R9 l_TMP_2132; memset(&l_TMP_2132, 0, sizeof l_TMP_2132);
S_R9(&l_TMP_2132, r_NEW_NAME(rt_str("rc", 2)), 0);
R9 l_R_2133; memset(&l_R_2133, 0, sizeof l_R_2133);
S_R9(&l_R_2133, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_2131))).f_CNAME, l_TMP_2132, l_TMP_2132, l_TMP_2132), 0);
R27 * l_F_2134; memset(&l_F_2134, 0, sizeof l_F_2134);
l_F_2134 = ((*(R22 *)rt_nil_check(l_T_2131))).f_FIELDS;
S_R9(&l_R_2133, r_FMT2(rt_str("@@", 2), l_R_2133, r_INIT_CODE(l_T_2131, l_TMP_2132)), 0);
for (;;) {
if ((l_F_2134 == NULL)) goto L_end2135;
{
if ((((*(R27 *)rt_nil_check(l_F_2134))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R27 *)rt_nil_check(l_F_2134))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R27 *)rt_nil_check(l_F_2134))).f_LABELS, (r_TAG_VALUE(l_T_2131, ((*(R27 *)rt_nil_check(l_F_2134))).f_TAGF)).f_V, ((*(R27 *)rt_nil_check(r_FIND_FIELD(l_T_2131, ((*(R27 *)rt_nil_check(l_F_2134))).f_TAGF)))).f_T)))
{
{
R17 * l_INIT_2136; memset(&l_INIT_2136, 0, sizeof l_INIT_2136);
l_INIT_2136 = r_FIND_INIT(((*(R17 *)rt_nil_check(p_E))).f_A, ((*(R27 *)rt_nil_check(l_F_2134))).f_NAME);
if ((l_INIT_2136 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R27 *)rt_nil_check(l_F_2134))).f_NAME);
}
S_R9(&l_R_2133, r_FMT2(rt_str("@ @", 3), l_R_2133, r_STORE_CODE(((*(R27 *)rt_nil_check(l_F_2134))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_2132, ((*(R27 *)rt_nil_check(l_F_2134))).f_CNAME), r_EXPR(((*(R17 *)rt_nil_check(l_INIT_2136))).f_A, ((*(R27 *)rt_nil_check(l_F_2134))).f_T), ((*(R17 *)rt_nil_check(l_INIT_2136))).f_LINE, l_TMP_2132)), 0);
}
}
}
l_F_2134 = ((*(R27 *)rt_nil_check(l_F_2134))).f_NEXT;
}
RT_B_TICK();
} L_end2135: ;
{
R17 * l_P_2137; memset(&l_P_2137, 0, sizeof l_P_2137);
l_P_2137 = ((*(R17 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_2137 == NULL)) goto L_end2138;
{
{
R27 * l_G_2139; memset(&l_G_2139, 0, sizeof l_G_2139);
l_G_2139 = r_FIND_VFIELD(l_T_2131, ((*(R17 *)rt_nil_check(l_P_2137))).f_NAME);
if ((l_G_2139 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_2137))).f_LINE, rt_str("no such field: ", 15), ((*(R17 *)rt_nil_check(l_P_2137))).f_NAME);
}
if ((!(((*(R27 *)rt_nil_check(l_G_2139))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_2137))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R17 *)rt_nil_check(l_P_2137))).f_NAME);
}
r_CHECK_VARIANT(l_G_2139, l_T_2131, NULL, ((*(R17 *)rt_nil_check(l_P_2137))).f_LINE);
}
l_P_2137 = ((*(R17 *)rt_nil_check(l_P_2137))).f_NEXT;
}
RT_B_TICK();
} L_end2138: ;
}
{ R26 rv2140 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_2133, l_TMP_2132), l_T_2131);
return rv2140; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_FIND_INIT(R17 * p_L, R9 p_NAME) { RT_B_TICK(); 
R17 * l_P_2141; memset(&l_P_2141, 0, sizeof l_P_2141);
l_P_2141 = p_L;
for (;;) {
if ((l_P_2141 == NULL)) goto L_end2142;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_2141))).f_NAME, p_NAME))
{
{ R17 * rv2143 = l_P_2141;
return rv2143; }
}
l_P_2141 = ((*(R17 *)rt_nil_check(l_P_2141))).f_NEXT;
}
RT_B_TICK();
} L_end2142: ;
{ R17 * rv2144 = NULL;
return rv2144; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_DIMS_2145; memset(&l_DIMS_2145, 0, sizeof l_DIMS_2145);
l_DIMS_2145 = ((rt_int)0LL);
R17 * l_P_2146; memset(&l_P_2146, 0, sizeof l_P_2146);
l_P_2146 = p_E;
R22 * l_ELEM_2147; memset(&l_ELEM_2147, 0, sizeof l_ELEM_2147);
l_ELEM_2147 = NULL;
for (;;) {
if ((!(((*(R17 *)rt_nil_check(l_P_2146))).f_KIND == g_N_ARRCONS))) goto L_end2148;
{
l_DIMS_2145 = rt_add(l_DIMS_2145, ((rt_int)1LL));
l_P_2146 = ((*(R17 *)rt_nil_check(l_P_2146))).f_A;
}
RT_B_TICK();
} L_end2148: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_2147 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_2147 == NULL))
{
l_ELEM_2147 = (r_EXPR(l_P_2146, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_2147))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_2147))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_2147 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
r_CHECK_SHAPE(p_E, l_DIMS_2145);
{
R22 * l_A_2149; memset(&l_A_2149, 0, sizeof l_A_2149);
l_A_2149 = r_ARRAY_OF(l_ELEM_2147, l_DIMS_2145);
R9 l_TMP_2150; memset(&l_TMP_2150, 0, sizeof l_TMP_2150);
S_R9(&l_TMP_2150, r_NEW_NAME(rt_str("ac", 2)), 0);
R9 l_R_2151; memset(&l_R_2151, 0, sizeof l_R_2151);
S_R9(&l_R_2151, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_2149))).f_CNAME, l_TMP_2150, l_TMP_2150), 0);
rt_int l_K_2152; memset(&l_K_2152, 0, sizeof l_K_2152);
l_K_2152 = ((rt_int)0LL);
{
R17 * l_Q_2153; memset(&l_Q_2153, 0, sizeof l_Q_2153);
l_Q_2153 = p_E;
R28 * l_TAIL_2154; memset(&l_TAIL_2154, 0, sizeof l_TAIL_2154);
l_TAIL_2154 = NULL;
{ rt_int it2156_lo = ((rt_int)1LL), it2156_hi = l_DIMS_2145;
for (rt_int it2156 = it2156_lo; it2156 <= it2156_hi; it2156++) {
{
{
R28 * l_B_2157; memset(&l_B_2157, 0, sizeof l_B_2157);
l_B_2157 = ({ R28 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
rt_int l_N_2158; memset(&l_N_2158, 0, sizeof l_N_2158);
l_N_2158 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(l_Q_2153))).f_A);
S_R28(&(*(R28 *)rt_nil_check(l_B_2157)), ({ R28 rc2159; memset(&rc2159, 0, sizeof rc2159);  S_R9(&rc2159.f_LO, r_MK(rt_str("0", 1)), 0); S_R9(&rc2159.f_HI, r_NUM(rt_sub(l_N_2158, ((rt_int)1LL))), 0); S_R25(&rc2159.f_MLO, r_SOME(((rt_int)0LL)), 0); S_R25(&rc2159.f_MHI, r_SOME(rt_sub(l_N_2158, ((rt_int)1LL))), 0); rc2159.f_ANYARG = 0; rc2159.f_NEXT = NULL; rc2159; }), 0);
if ((l_TAIL_2154 == NULL))
{
((*(R22 *)rt_nil_check(l_A_2149))).f_BOUNDS = l_B_2157;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2154))).f_NEXT = l_B_2157;
}
l_TAIL_2154 = l_B_2157;
}
l_Q_2153 = ((*(R17 *)rt_nil_check(l_Q_2153))).f_A;
}
RT_B_TICK();
if (it2156 == it2156_hi) break;
} } L_end2155: ;
}
S_R9(&l_R_2151, r_FMT2(rt_str("@@); ", 5), l_R_2151, l_TMP_2150), 0);
l_P_2146 = p_E;
{ rt_int it2161_lo = ((rt_int)0LL), it2161_hi = rt_sub(l_DIMS_2145, ((rt_int)1LL));
for (rt_int it2161 = it2161_lo; it2161 <= it2161_hi; it2161++) {
{
S_R9(&l_R_2151, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_2151, l_TMP_2150, r_NUM(it2161), l_TMP_2150), 0);
S_R9(&l_R_2151, r_FMT3(rt_str("@@] = @;", 8), l_R_2151, r_NUM(it2161), r_NUM(rt_sub(r_LIST_LENGTH(((*(R17 *)rt_nil_check(l_P_2146))).f_A), ((rt_int)1LL)))), 0);
l_P_2146 = ((*(R17 *)rt_nil_check(l_P_2146))).f_A;
}
RT_B_TICK();
if (it2161 == it2161_hi) break;
} } L_end2160: ;
S_R9(&l_R_2151, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_2151, l_TMP_2150, l_TMP_2150, r_NUM(l_DIMS_2145)), 0);
S_R9(&l_R_2151, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_2151, l_TMP_2150, l_TMP_2150), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_2145, l_A_2149, l_TMP_2150, &l_R_2151, &l_K_2152);
{ R26 rv2162 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_2151, l_TMP_2150), l_A_2149);
return rv2162; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_SHAPE(R17 * p_E, rt_int p_DIMS) { RT_B_TICK(); 
R17 * l_P_2163; memset(&l_P_2163, 0, sizeof l_P_2163);
l_P_2163 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((p_DIMS <= ((rt_int)1LL)))
{
return;
}
for (;;) {
if ((l_P_2163 == NULL)) goto L_end2164;
{
if (((!(((*(R17 *)rt_nil_check(l_P_2163))).f_KIND == g_N_ARRCONS)) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_ARRCONS))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
if ((!r_SAME_SHAPE(l_P_2163, ((*(R17 *)rt_nil_check(p_E))).f_A)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
r_CHECK_SHAPE(l_P_2163, rt_sub(p_DIMS, ((rt_int)1LL)));
l_P_2163 = ((*(R17 *)rt_nil_check(l_P_2163))).f_NEXT;
}
RT_B_TICK();
} L_end2164: ;
}
static rt_int r_SAME_SHAPE(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
if (((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) || (!(((*(R17 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS))))
{
{ rt_int rv2165 = ((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) && (!(((*(R17 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS)));
return rv2165; }
}
if ((!(r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_A))).f_A) == r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_B))).f_A))))
{
{ rt_int rv2166 = 0;
return rv2166; }
}
{ rt_int rv2167 = r_SAME_SHAPE(((*(R17 *)rt_nil_check(p_A))).f_A, ((*(R17 *)rt_nil_check(p_B))).f_A);
return rv2167; }
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R17 * p_E, rt_int p_DIMS, R22 * p_A, R9 p_TMP, R9 *p_R, rt_int *p_K) { RT_B_TICK(); 
R17 * l_P_2168; memset(&l_P_2168, 0, sizeof l_P_2168);
l_P_2168 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_2168 == NULL)) goto L_end2169;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_2168, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R17 *)rt_nil_check(l_P_2168))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2168))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R9(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R9(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_2168, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R17 *)rt_nil_check(l_P_2168))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_2168 = ((*(R17 *)rt_nil_check(l_P_2168))).f_NEXT;
}
RT_B_TICK();
} L_end2169: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R22 * l_T_2170; memset(&l_T_2170, 0, sizeof l_T_2170);
l_T_2170 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_2170))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_2170))).f_DIMS = p_DIMS;
S_R9(&((*(R22 *)rt_nil_check(l_T_2170))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv2171 = l_T_2170;
return rv2171; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R17 * p_E) { RT_B_TICK(); 
R22 * l_T_2172; memset(&l_T_2172, 0, sizeof l_T_2172);
l_T_2172 = r_RESOLVE(((*(R17 *)rt_nil_check(p_E))).f_A);
R26 l_V_2173; memset(&l_V_2173, 0, sizeof l_V_2173);
S_R26(&l_V_2173, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, l_T_2172), 0);
R22 * l_RT_2174; memset(&l_RT_2174, 0, sizeof l_RT_2174);
l_RT_2174 = r_REAL_TYPE(l_T_2172);
if (((((*(R22 *)rt_nil_check((l_V_2173).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_2174))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv2175 = r_MKET(r_OF_BITS(l_RT_2174, (l_V_2173).f_C, ((*(R17 *)rt_nil_check(p_E))).f_LINE), l_T_2172);
return rv2175; }
}
{
R9 l_C_2176; memset(&l_C_2176, 0, sizeof l_C_2176);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 1;
S_R9(&l_C_2176, r_CONVERT(l_V_2173, l_T_2172, ((*(R17 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), 0);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 0;
if ((((((((*(R22 *)rt_nil_check(l_RT_2174))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_2174))).f_KIND == g_T_BITS))) && ((((*(R22 *)rt_nil_check(l_RT_2174))).f_LEN_C).f_LEN > ((rt_int)0LL))) && (!(((((*(R22 *)rt_nil_check(l_RT_2174))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check((l_V_2173).f_T))).f_MLEN).f_OK)))))
{
S_R9(&l_C_2176, r_FMT2(rt_str("rt_b_tlen(@, @)", 15), l_C_2176, ((*(R22 *)rt_nil_check(l_RT_2174))).f_LEN_C), 0);
}
{ R26 rv2177 = r_MKET(l_C_2176, l_T_2172);
return rv2177; }
}
rt_raise(RT_X_INIT);
}
static R9 r_OF_BITS(R22 * p_T, R9 p_B, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_RT_2178; memset(&l_RT_2178, 0, sizeof l_RT_2178);
l_RT_2178 = r_REAL_TYPE(p_T);
rt_int l_K_2179; memset(&l_K_2179, 0, sizeof l_K_2179);
l_K_2179 = ((*(R22 *)rt_nil_check(l_RT_2178))).f_KIND;
if ((l_K_2179 == g_T_INT))
{
{
rt_int l_N_2180; memset(&l_N_2180, 0, sizeof l_N_2180);
l_N_2180 = r_REP_BITS(l_RT_2178);
R9 l_U_2181; memset(&l_U_2181, 0, sizeof l_U_2181);
S_R9(&l_U_2181, r_MK(rt_str("0", 1)), 0);
if ((l_N_2180 >= ((rt_int)63LL)))
{
l_N_2180 = ((*(R7 *)rt_nil_check(g_W))).f_WORD;
}
else if (r_REP_UNSIGNED(l_RT_2178))
{
S_R9(&l_U_2181, r_MK(rt_str("1", 1)), 0);
}
{ R9 rv2182 = r_RANGE_CHECK(l_RT_2178, r_FMT3(rt_str("rt_b_rep_int_of_bits(@, @, @)", 29), p_B, r_NUM(l_N_2180), l_U_2181), r_NO_TEXT());
return rv2182; }
}
}
else if ((l_K_2179 == g_T_BOOL))
{
{ R9 rv2183 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_B);
return rv2183; }
}
else if ((l_K_2179 == g_T_ENUM))
{
{ R9 rv2184 = r_ENUM_OF_BITS(l_RT_2178, p_B);
return rv2184; }
}
else if (r_IS_D(l_RT_2178))
{
{ R9 rv2185 = r_FMT1(rt_str("rt_b_d_of_bits(@)", 17), p_B);
return rv2185; }
}
else if (((l_K_2179 == g_T_FLOAT) && (((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL))))
{
{ R9 rv2186 = r_FMT1(rt_str("rt_b_f_of_bits(@)", 17), p_B);
return rv2186; }
}
else if (((l_K_2179 == g_T_FLOAT) && (r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_RT_2178))).f_SCALE) == ((rt_int)7LL))))
{
{ R9 rv2187 = r_FMT1(rt_str("rt_b_single_of_bits(@)", 22), p_B);
return rv2187; }
}
else if ((l_K_2179 == g_T_FLOAT))
{
{ R9 rv2188 = r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), p_B);
return rv2188; }
}
else if ((l_K_2179 == g_T_STR))
{
{ R9 rv2189 = r_FMT4(rt_str("rt_b_chars_of_bits(@, @, @, @)", 30), p_B, r_NUM(r_CHAR_SIZE(l_RT_2178)), r_NUM(r_PACKING_OF(l_RT_2178)), r_CHAR_REPS(l_RT_2178));
return rv2189; }
}
else if ((l_K_2179 == g_T_BITS))
{
{ R9 rv2190 = p_B;
return rv2190; }
}
else if ((l_K_2179 == g_T_XFIX))
{
{ R9 rv2191 = r_FMT2(rt_str("rt_b_bits_len(@, @)", 19), p_B, r_NUM(r_XFIX_SIZE(l_RT_2178)));
return rv2191; }
}
else if ((l_K_2179 == g_T_PTR))
{
{ R9 rv2192 = r_FMT2(rt_str("((@)rt_b_ptr_at(rt_b_int_of_bits(@)))", 37), r_CTYPE(l_RT_2178), p_B);
return rv2192; }
}
else if ((l_K_2179 == g_T_SEM))
{
{ R9 rv2193 = r_FMT2(rt_str("rt_b_sem_value(rt_b_int_of_bits(@), @)", 38), p_B, r_NUM(((*(R22 *)rt_nil_check(l_RT_2178))).f_SCALE));
return rv2193; }
}
else if ((l_K_2179 == g_T_REC))
{
{ R9 rv2194 = r_RECORD_OF_BITS(l_RT_2178, p_B);
return rv2194; }
}
else if ((l_K_2179 == g_T_ARR))
{
{ R9 rv2195 = r_ARRAY_OF_BITS(l_RT_2178, p_B);
return rv2195; }
}
r_FAILT(p_LINE, rt_str("no representation as a bitstring for ", 37), r_TYPE_NAME(p_T));
rt_raise(RT_X_INIT);
}
static R9 r_ARRAY_BITS(R22 * p_T, R9 p_C) { RT_B_TICK(); 
R9 l_A_2196; memset(&l_A_2196, 0, sizeof l_A_2196);
S_R9(&l_A_2196, r_NEW_NAME(rt_str("ab", 2)), 0);
R9 l_N_2197; memset(&l_N_2197, 0, sizeof l_N_2197);
S_R9(&l_N_2197, r_NEW_NAME(rt_str("an", 2)), 0);
R9 l_I_2198; memset(&l_I_2198, 0, sizeof l_I_2198);
S_R9(&l_I_2198, r_NEW_NAME(rt_str("ai", 2)), 0);
R9 l_IMG_2199; memset(&l_IMG_2199, 0, sizeof l_IMG_2199);
S_R9(&l_IMG_2199, r_NEW_NAME(rt_str("im", 2)), 0);
R9 l_EB_2200; memset(&l_EB_2200, 0, sizeof l_EB_2200);
S_R9(&l_EB_2200, (r_BITS_OF(r_MKET(r_FMT2(rt_str("@.p[@]", 6), l_A_2196, l_I_2198), ((*(R22 *)rt_nil_check(p_T))).f_ELEM), ((rt_int)0LL))).f_C, 0);
{ R9 rv2201 = r_CAT(r_CAT(r_FMT4(rt_str("({ @ @ = @; rt_int @ = ", 23), r_CTYPE(p_T), l_A_2196, p_C, l_N_2197), r_FMT4(rt_str("rt_b_extent(@, @.lo, @.hi); rstr @ = rt_str_new(0);", 51), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), l_A_2196, l_A_2196, l_IMG_2199)), r_CAT(r_FMT4(rt_str(" for (rt_int @ = 0; @ < @; @++)", 31), l_I_2198, l_I_2198, l_N_2197, l_I_2198), r_CAT(r_FMT4(rt_str(" @ = rt_b_arr_put(@, @, @, ", 27), l_IMG_2199, l_IMG_2199, l_I_2198, l_N_2197), r_FMT3(rt_str("@, @); @; })", 12), l_EB_2200, r_NUM(r_PACKING_OF(p_T)), l_IMG_2199))));
return rv2201; }
rt_raise(RT_X_INIT);
}
static R9 r_ARRAY_OF_BITS(R22 * p_T, R9 p_B) { RT_B_TICK(); 
R9 l_A_2202; memset(&l_A_2202, 0, sizeof l_A_2202);
S_R9(&l_A_2202, r_NEW_NAME(rt_str("av", 2)), 0);
R9 l_N_2203; memset(&l_N_2203, 0, sizeof l_N_2203);
S_R9(&l_N_2203, r_NEW_NAME(rt_str("an", 2)), 0);
R9 l_I_2204; memset(&l_I_2204, 0, sizeof l_I_2204);
S_R9(&l_I_2204, r_NEW_NAME(rt_str("ai", 2)), 0);
R9 l_ES_2205; memset(&l_ES_2205, 0, sizeof l_ES_2205);
S_R9(&l_ES_2205, r_NEW_NAME(rt_str("es", 2)), 0);
R9 l_IMG_2206; memset(&l_IMG_2206, 0, sizeof l_IMG_2206);
S_R9(&l_IMG_2206, r_NEW_NAME(rt_str("im", 2)), 0);
R9 l_MODE_2207; memset(&l_MODE_2207, 0, sizeof l_MODE_2207);
S_R9(&l_MODE_2207, r_NUM(r_PACKING_OF(p_T)), 0);
R9 l_TAKE_2208; memset(&l_TAKE_2208, 0, sizeof l_TAKE_2208);
S_R9(&l_TAKE_2208, r_FMT4(rt_str("rt_b_arr_take(@, @, @, @, ", 26), l_IMG_2206, l_I_2204, l_N_2203, l_ES_2205), 0);
R9 l_EV_2209; memset(&l_EV_2209, 0, sizeof l_EV_2209);
S_R9(&l_EV_2209, r_OF_BITS(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@@)", 3), l_TAKE_2208, l_MODE_2207), ((rt_int)0LL)), 0);
R9 l_EST_2210; memset(&l_EST_2210, 0, sizeof l_EST_2210);
S_R9(&l_EST_2210, (r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT1(rt_str("@.p[0]", 6), l_A_2202))).f_C, 0);
{ R9 rv2211 = r_CAT(r_CAT(r_FMT4(rt_str("({ rstr @ = @; @ @;", 19), l_IMG_2206, p_B, r_CTYPE(p_T), l_A_2202), r_CAT(r_FMT4(rt_str(" @ rt_int @ = rt_b_extent(@, @.lo, ", 35), r_INIT_CODE(p_T, l_A_2202), l_N_2203, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), l_A_2202), r_FMT4(rt_str("@.hi); rt_int @ = @ \? @ : 0;", 28), l_A_2202, l_ES_2205, l_N_2203, l_EST_2210))), r_CAT(r_CAT(r_FMT3(rt_str(" if (!@) rt_b_lay_end(@, 0); for (rt_int @ = 0; ", 48), l_N_2203, l_IMG_2206, l_I_2204), r_FMT4(rt_str("@ < @; @++) @.p", 15), l_I_2204, l_N_2203, l_I_2204, l_A_2202)), r_FMT3(rt_str("[@] = @; @; })", 14), l_I_2204, l_EV_2209, l_A_2202)));
return rv2211; }
rt_raise(RT_X_INIT);
}
static R9 r_ENUM_OF_BITS(R22 * p_T, R9 p_C) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R9 rv2212 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv2212; }
}
}
{ R9 rv2213 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv2213; }
rt_raise(RT_X_INIT);
}
static R9 r_REP_TABLE(R22 * p_T) { RT_B_TICK(); 
R9 l_NAME_2214; memset(&l_NAME_2214, 0, sizeof l_NAME_2214);
S_R9(&l_NAME_2214, r_NEW_NAME(rt_str("reps", 4)), 0);
R17 * l_L_2215; memset(&l_L_2215, 0, sizeof l_L_2215);
l_L_2215 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R9 l_R_2216; memset(&l_R_2216, 0, sizeof l_R_2216);
S_R9(&l_R_2216, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_2215 == NULL)) goto L_end2217;
{
{
R17 * l_V_2218; memset(&l_V_2218, 0, sizeof l_V_2218);
l_V_2218 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_2219; memset(&l_FOUND_2219, 0, sizeof l_FOUND_2219);
l_FOUND_2219 = 0;
for (;;) {
if ((l_V_2218 == NULL)) goto L_end2220;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_V_2218))).f_NAME, ((*(R17 *)rt_nil_check(l_L_2215))).f_NAME))
{
S_R9(&l_R_2216, r_FMT2(rt_str("@@, ", 4), l_R_2216, (r_EXPR(((*(R17 *)rt_nil_check(l_V_2218))).f_A, NULL)).f_C), 0);
l_FOUND_2219 = 1;
}
l_V_2218 = ((*(R17 *)rt_nil_check(l_V_2218))).f_NEXT;
}
RT_B_TICK();
} L_end2220: ;
if ((!l_FOUND_2219))
{
r_FAILT(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R17 *)rt_nil_check(l_L_2215))).f_NAME);
}
}
l_L_2215 = ((*(R17 *)rt_nil_check(l_L_2215))).f_NEXT;
}
RT_B_TICK();
} L_end2217: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_2214, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_2216, l_NAME_2214, l_NAME_2214));
{ R9 rv2221 = r_FMT2(rt_str("@, @", 4), l_NAME_2214, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv2221; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SEM_2222; memset(&l_SEM_2222, 0, sizeof l_SEM_2222);
l_SEM_2222 = r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(((*(R7 *)rt_nil_check(g_W))).f_NEW_OK == p_E))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("NEW without PTR$ or SEMAPHORE$ only initializes a declaration or is the source ", 79), rt_str("of an assignment (3.10.2, 3.11.2)", 33)));
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_2222 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_2222)
{
{
R22 * l_T_2223; memset(&l_T_2223, 0, sizeof l_T_2223);
l_T_2223 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_2223 = p_WANT;
}
}
{ R26 rv2224 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_2223))).f_SCALE)), l_T_2223);
return rv2224; }
}
}
{
R22 * l_T_2225; memset(&l_T_2225, 0, sizeof l_T_2225);
l_T_2225 = r_RESOLVE(r_EXPR_TO_TS(((*(R17 *)rt_nil_check(p_E))).f_A));
R22 * l_P_2226; memset(&l_P_2226, 0, sizeof l_P_2226);
l_P_2226 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_2226))).f_TARGET = l_T_2225;
((*(R22 *)rt_nil_check(l_P_2226))).f_TARGET_TS = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((r_STATIC_SIZE(l_T_2225)).f_OK)
{
{ R26 rv2227 = r_MKET(r_FMT3(rt_str("({ @ *p = rt_b_new_bits(sizeof *p, @); @ p; })", 46), r_CTYPE(l_T_2225), r_NUM((r_STATIC_SIZE(l_T_2225)).f_V), r_INIT_CODE(l_T_2225, r_MK(rt_str("(*p)", 4)))), l_P_2226);
return rv2227; }
}
{ R26 rv2228 = r_MKET(r_FMT3(rt_str("({ @ *p = rt_b_new_bits(sizeof *p, 0); @ rt_b_new_more(@); p; })", 64), r_CTYPE(l_T_2225), r_INIT_CODE(l_T_2225, r_MK(rt_str("(*p)", 4))), (r_SIZE_OF(l_T_2225, r_MK(rt_str("(*p)", 4)))).f_C), l_P_2226);
return rv2228; }
}
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_CONV(R26 p_V, R22 * p_T, R9 p_TR) { RT_B_TICK(); 
if (r_IS_D(p_T))
{
{ R9 rv2229 = r_AS_D(p_V);
return rv2229; }
}
else if (r_IS_D((p_V).f_T))
{
{ R9 rv2230 = r_FMT2(rt_str("rt_b_single_of_d(@, @, 0)", 25), (p_V).f_C, p_TR);
return rv2230; }
}
{ R9 rv2231 = r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (p_V).f_C, r_SINGLE_C(((*(R22 *)rt_nil_check(p_T))).f_SCALE), p_TR);
return rv2231; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_LIMIT(R22 * p_T, R9 p_WHICH) { RT_B_TICK(); 
R9 l_C_2232; memset(&l_C_2232, 0, sizeof l_C_2232);
S_R9(&l_C_2232, r_MK(rt_str("DBL", 3)), 0);
if (r_IS_D(p_T))
{
if (r_TEQS(p_WHICH, rt_str("MIN", 3)))
{
{ R9 rv2233 = r_MK(rt_str("rt_b_dneg(rt_b_dmax())", 22));
return rv2233; }
}
else if (r_TEQS(p_WHICH, rt_str("MAX", 3)))
{
{ R9 rv2234 = r_MK(rt_str("rt_b_dmax()", 11));
return rv2234; }
}
{ R9 rv2235 = r_MK(rt_str("rt_b_deps()", 11));
return rv2235; }
}
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(p_T))).f_SCALE) == ((rt_int)7LL)))
{
S_R9(&l_C_2232, r_MK(rt_str("FLT", 3)), 0);
}
if (((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)) && (!r_TEQS(p_WHICH, rt_str("EPSILON", 7)))))
{
if (r_TEQS(p_WHICH, rt_str("MIN", 3)))
{
{ R9 rv2236 = r_MK(rt_str("(-0x1.fffffep+126)", 18));
return rv2236; }
}
{ R9 rv2237 = r_MK(rt_str("0x1.fffffep+126", 15));
return rv2237; }
}
if (r_TEQS(p_WHICH, rt_str("MIN", 3)))
{
{ R9 rv2238 = r_FMT1(rt_str("(-@_MAX)", 8), l_C_2232);
return rv2238; }
}
else if (r_TEQS(p_WHICH, rt_str("MAX", 3)))
{
{ R9 rv2239 = r_FMT1(rt_str("@_MAX", 5), l_C_2232);
return rv2239; }
}
{ R9 rv2240 = r_FMT1(rt_str("@_EPSILON", 9), l_C_2232);
return rv2240; }
rt_raise(RT_X_INIT);
}
static R17 * r_NTH(R17 * p_L, rt_int p_K) { RT_B_TICK(); 
R17 * l_P_2241; memset(&l_P_2241, 0, sizeof l_P_2241);
l_P_2241 = p_L;
{ rt_int it2243_lo = ((rt_int)1LL), it2243_hi = p_K;
for (rt_int it2243 = it2243_lo; it2243 <= it2243_hi; it2243++) {
{
if ((!(l_P_2241 == NULL)))
{
l_P_2241 = ((*(R17 *)rt_nil_check(l_P_2241))).f_NEXT;
}
}
RT_B_TICK();
if (it2243 == it2243_hi) break;
} } L_end2242: ;
{ R17 * rv2244 = l_P_2241;
return rv2244; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R17 * p_E, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
rt_int l_N_2245; memset(&l_N_2245, 0, sizeof l_N_2245);
l_N_2245 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A);
if (((l_N_2245 < p_LO) || (l_N_2245 > p_HI)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
}
static R9 r_ROUNDING_ARG(R17 * p_E, rt_int p_N) { RT_B_TICK(); 
R17 * l_L_2246; memset(&l_L_2246, 0, sizeof l_L_2246);
l_L_2246 = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_2246 == NULL)))
{
if (((((*(R17 *)rt_nil_check(l_L_2246))).f_KIND == g_N_QUAL) && ((((*(R17 *)rt_nil_check(l_L_2246))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_L_2246))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R9 rv2247 = r_MK(rt_str("1", 1));
return rv2247; }
}
{ R9 rv2248 = r_MK(rt_str("0", 1));
return rv2248; }
}
if (((((*(R17 *)rt_nil_check(l_L_2246))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_L_2246))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_L_2246))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R9 rv2249 = r_MK(rt_str("1", 1));
return rv2249; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_L_2246))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R9 rv2250 = r_MK(rt_str("0", 1));
return rv2250; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R9 rv2251 = r_MK(rt_str("1", 1));
return rv2251; }
}
{ R9 rv2252 = r_MK(rt_str("0", 1));
return rv2252; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R17 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv2253 = 0;
return rv2253; }
}
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv2254 = (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv2254; }
}
{ rt_int rv2255 = 0;
return rv2255; }
rt_raise(RT_X_INIT);
}
static R17 * r_ARG_EXPR(R17 * p_E) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R17 * rv2256 = ((*(R17 *)rt_nil_check(p_E))).f_A;
return rv2256; }
}
{ R17 * rv2257 = p_E;
return rv2257; }
rt_raise(RT_X_INIT);
}
static R9 r_OPERATOR_SYMBOL(R9 p_NAME) { RT_B_TICK(); 
rstr l_NAMES_2258; memset(&l_NAMES_2258, 0, sizeof l_NAMES_2258);
l_NAMES_2258 = rt_b_str_new(((rt_int)299LL), 0);
rt_b_assign(&l_NAMES_2258, rt_str(" ADD_:+ SUBTRACT_:- MULTIPLY_:* DIVIDE_:/ MODULUS_:MOD EXPONENTIATE_:** CONCATENATE_:!! EQUAL_:= UNEQUAL_:<> GREATER_THAN_:> LESS_THAN_:< GREATER_EQUAL_:>= LESS_EQUAL_:<= AND_:AND OR_:OR XOR_:XOR IMPLIES_:-> MD_ADD_:+ MD_SUBTRACT_:- MD_MULTIPLY_:* MD_DIVIDE_:/ NEGATE_:- MON_PLUS_:+ COMPLEMENT_:NOT ", 299));
rt_int l_L_2259; memset(&l_L_2259, 0, sizeof l_L_2259);
l_L_2259 = (p_NAME).f_LEN;
{ rt_int it2261_lo = ((rt_int)0LL), it2261_hi = rt_sub(rt_sub(((rt_int)299LL), l_L_2259), ((rt_int)2LL));
for (rt_int it2261 = it2261_lo; it2261 <= it2261_hi; it2261++) {
{
if ((rt_b_eq(rt_b_slice(l_NAMES_2258, it2261, it2261), rt_str(" ", 1)) && rt_b_eq(rt_b_slice(l_NAMES_2258, rt_add(rt_add(it2261, l_L_2259), ((rt_int)1LL)), rt_add(rt_add(it2261, l_L_2259), ((rt_int)1LL))), rt_str(":", 1))))
{
if (rt_b_eq(rt_b_slice(l_NAMES_2258, rt_add(it2261, ((rt_int)1LL)), rt_add(it2261, l_L_2259)), r_STR(p_NAME, l_L_2259)))
{
{
rt_int l_J_2262; memset(&l_J_2262, 0, sizeof l_J_2262);
l_J_2262 = rt_add(rt_add(it2261, l_L_2259), ((rt_int)2LL));
for (;;) {
if (rt_b_eq(rt_b_slice(l_NAMES_2258, l_J_2262, l_J_2262), rt_str(" ", 1))) goto L_end2263;
{
l_J_2262 = rt_add(l_J_2262, ((rt_int)1LL));
}
RT_B_TICK();
} L_end2263: ;
{ R9 rv2264 = r_MKN(rt_b_slice(l_NAMES_2258, rt_add(rt_add(it2261, l_L_2259), ((rt_int)2LL)), rt_sub(l_J_2262, ((rt_int)1LL))));
return rv2264; }
}
}
}
}
RT_B_TICK();
if (it2261 == it2261_hi) break;
} } L_end2260: ;
{ R9 rv2265 = r_NO_TEXT();
return rv2265; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_BUILTIN(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R9 l_NAME_2266; memset(&l_NAME_2266, 0, sizeof l_NAME_2266);
S_R9(&l_NAME_2266, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2267; memset(&l_LINE_2267, 0, sizeof l_LINE_2267);
l_LINE_2267 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
rt_int l_N_2268; memset(&l_N_2268, 0, sizeof l_N_2268);
l_N_2268 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A);
if ((r_TEQS(l_NAME_2266, rt_str("STORE_", 6)) || r_TEQS(l_NAME_2266, rt_str("SUBSTRING_STORE_", 16))))
{
{
R17 * l_TGT_2269; memset(&l_TGT_2269, 0, sizeof l_TGT_2269);
l_TGT_2269 = r_FIRST_OUT_ARG(p_E);
R17 * l_S_2270; memset(&l_S_2270, 0, sizeof l_S_2270);
l_S_2270 = r_NEW_NODE(g_N_ASSIGN, l_LINE_2267);
R17 * l_SRC_2271; memset(&l_SRC_2271, 0, sizeof l_SRC_2271);
l_SRC_2271 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if (((l_TGT_2269 == NULL) || (l_SRC_2271 == NULL)))
{
r_FAILT(l_LINE_2267, rt_str("the wrong arguments for ", 24), l_NAME_2266);
}
if (r_TEQS(l_NAME_2266, rt_str("STORE_", 6)))
{
((*(R17 *)rt_nil_check(l_S_2270))).f_A = l_TGT_2269;
}
else
{
if ((l_N_2268 < ((rt_int)3LL)))
{
r_FAIL(l_LINE_2267, rt_str("SUBSTRING_STORE_ (V, L, U # X) (D.5)", 36));
}
((*(R17 *)rt_nil_check(l_S_2270))).f_A = r_NEW_NODE(g_N_SUBSTR, l_LINE_2267);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_2270))).f_A))).f_A = l_TGT_2269;
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_2270))).f_A))).f_B = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_2270))).f_A))).f_C = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
}
((*(R17 *)rt_nil_check(l_S_2270))).f_B = r_QUALIFIED(r_COPY_NODE(l_SRC_2271), r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, rt_add(((rt_int)1LL), rt_mul(((rt_int)2LL), r_BOOL_INT(r_TEQS(l_NAME_2266, rt_str("SUBSTRING_STORE_", 16)))))), l_LINE_2267);
{
R14 l_SAVED_CODE_2272; memset(&l_SAVED_CODE_2272, 0, sizeof l_SAVED_CODE_2272);
S_R14(&l_SAVED_CODE_2272, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R9 l_C_2273; memset(&l_C_2273, 0, sizeof l_C_2273);
S_R9(&l_C_2273, r_MK(rt_str("({", 2)), 0);
R15 * l_P_2274; memset(&l_P_2274, 0, sizeof l_P_2274);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2275; memset(&rc2275, 0, sizeof rc2275);  rc2275.f_HEAD = NULL; rc2275.f_TAIL = NULL; rc2275; }), 0);
r_ASSIGN_STMT(l_S_2270);
l_P_2274 = (((*(R7 *)rt_nil_check(g_W))).f_CODE).f_HEAD;
for (;;) {
if ((l_P_2274 == NULL)) goto L_end2276;
{
S_R9(&l_C_2273, r_FMT2(rt_str("@ @", 3), l_C_2273, ((*(R15 *)rt_nil_check(l_P_2274))).f_T), 0);
l_P_2274 = ((*(R15 *)rt_nil_check(l_P_2274))).f_NEXT;
}
RT_B_TICK();
} L_end2276: ;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2272, 0);
{ R26 rv2277 = r_MKET(r_CATS(l_C_2273, rt_str(" })", 3)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2277; }
}
}
}
if (r_TEQS(l_NAME_2266, rt_str("SUBSTRING_", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R17 * l_S_2278; memset(&l_S_2278, 0, sizeof l_S_2278);
l_S_2278 = r_NEW_NODE(g_N_SUBSTR, l_LINE_2267);
((*(R17 *)rt_nil_check(l_S_2278))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_A;
((*(R17 *)rt_nil_check(l_S_2278))).f_B = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R17 *)rt_nil_check(l_S_2278))).f_C = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
((*(R17 *)rt_nil_check(l_S_2278))).f_A = r_COPY_NODE(((*(R17 *)rt_nil_check(p_E))).f_A);
{ R26 rv2279 = r_EXPR(l_S_2278, p_WANT);
return rv2279; }
}
}
{
R9 l_SYM__2280; memset(&l_SYM__2280, 0, sizeof l_SYM__2280);
S_R9(&l_SYM__2280, r_OPERATOR_SYMBOL(l_NAME_2266), 0);
rt_int l_UNARY_OP_2281; memset(&l_UNARY_OP_2281, 0, sizeof l_UNARY_OP_2281);
l_UNARY_OP_2281 = ((r_TEQS(l_NAME_2266, rt_str("NEGATE_", 7)) || r_TEQS(l_NAME_2266, rt_str("MON_PLUS_", 9))) || r_TEQS(l_NAME_2266, rt_str("COMPLEMENT_", 11)));
R17 * l_X_2282; memset(&l_X_2282, 0, sizeof l_X_2282);
if (l_UNARY_OP_2281)
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)3LL));
l_X_2282 = r_NEW_NODE(g_N_UNOP, l_LINE_2267);
S_R9(&((*(R17 *)rt_nil_check(l_X_2282))).f_NAME, l_SYM__2280, 0);
((*(R17 *)rt_nil_check(l_X_2282))).f_A = r_COPY_NODE(((*(R17 *)rt_nil_check(p_E))).f_A);
{ R26 rv2283 = r_EXPR(r_QUALIFIED(l_X_2282, r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), l_LINE_2267), p_WANT);
return rv2283; }
}
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)4LL));
l_X_2282 = r_BIN_NODE(l_SYM__2280, l_LINE_2267, r_COPY_NODE(((*(R17 *)rt_nil_check(p_E))).f_A), r_COPY_NODE(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))));
if (r_TEQS(l_SYM__2280, rt_str("/", 1)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL)).f_T)))).f_KIND == g_T_FLOAT)))
{
S_R9(&((*(R17 *)rt_nil_check(l_X_2282))).f_NAME, r_MK(rt_str("//", 2)), 0);
}
}
if (rt_b_eq(rt_b_slice(r_STR(l_NAME_2266, (l_NAME_2266).f_LEN), ((rt_int)0LL), ((rt_int)2LL)), rt_str("MD_", 3)))
{
((*(R17 *)rt_nil_check(l_X_2282))).f_FL = ((rt_int)2LL);
}
{ R26 rv2284 = r_EXPR(r_QUALIFIED(l_X_2282, r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_2267), p_WANT);
return rv2284; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_QUALIFIED(R17 * p_X, R17 * p_Q, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_2285; memset(&l_R_2285, 0, sizeof l_R_2285);
l_R_2285 = p_X;
R17 * l_P_2286; memset(&l_P_2286, 0, sizeof l_P_2286);
l_P_2286 = p_Q;
for (;;) {
if ((l_P_2286 == NULL)) goto L_end2287;
{
if ((l_R_2285 == p_X))
{
l_R_2285 = r_NEW_NODE(g_N_QUAL, p_LINE);
((*(R17 *)rt_nil_check(l_R_2285))).f_A = p_X;
}
if (((((((*(R17 *)rt_nil_check(l_P_2286))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_P_2286))).f_KIND == g_N_ENUMLIT))) && r_IS_ROUNDING_NAME(((*(R17 *)rt_nil_check(l_P_2286))).f_NAME)))
{
S_R9(&((*(R17 *)rt_nil_check(l_R_2285))).f_NAME, ((*(R17 *)rt_nil_check(l_P_2286))).f_NAME, 0);
}
else
{
((*(R17 *)rt_nil_check(l_R_2285))).f_B = l_P_2286;
}
l_P_2286 = ((*(R17 *)rt_nil_check(l_P_2286))).f_NEXT;
}
RT_B_TICK();
} L_end2287: ;
{ R17 * rv2288 = l_R_2285;
return rv2288; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING_NAME(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv2289 = (!(r_FIND_LITERAL(p_NAME, r_ROUNDINGS_TYPE()) == NULL));
return rv2289; }
rt_raise(RT_X_INIT);
}
static R22 * r_ROUNDINGS_TYPE(void) { RT_B_TICK(); 
R12 * l_Y_2290; memset(&l_Y_2290, 0, sizeof l_Y_2290);
l_Y_2290 = r_LOOKUP(r_MKN(rt_str("ROUNDINGS", 9)));
if ((!(l_Y_2290 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2290))).f_KIND == g_Y_TYPE))
{
{
R22 * l_T_2291; memset(&l_T_2291, 0, sizeof l_T_2291);
l_T_2291 = r_REAL_TYPE(r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_2290))).f_NAME, ((rt_int)0LL)));
if ((((*(R22 *)rt_nil_check(l_T_2291))).f_KIND == g_T_ENUM))
{
{ R22 * rv2292 = l_T_2291;
return rv2292; }
}
}
}
}
{ R22 * rv2293 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS;
return rv2293; }
rt_raise(RT_X_INIT);
}
static rt_int r_PREDEFINED_ROUNDING(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL))
{
{ rt_int rv2294 = 1;
return rv2294; }
}
if (((((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2295 = 1;
return rv2295; }
}
{ rt_int rv2296 = (((r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9))) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_R", 8))) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8)));
return rv2296; }
rt_raise(RT_X_INIT);
}
static R17 * r_FIRST_OUT_ARG(R17 * p_E) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL)))
{
{ R17 * rv2297 = ((*(R17 *)rt_nil_check(p_E))).f_C;
return rv2297; }
}
{ R17 * rv2298 = ((*(R17 *)rt_nil_check(p_E))).f_B;
return rv2298; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_OBJECT_ARG(R17 * p_L) { RT_B_TICK(); 
R17 * l_A_2299; memset(&l_A_2299, 0, sizeof l_A_2299);
l_A_2299 = p_L;
for (;;) {
if ((l_A_2299 == NULL)) goto L_end2300;
{
if ((((*(R17 *)rt_nil_check(l_A_2299))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_2301; memset(&l_Y_2301, 0, sizeof l_Y_2301);
l_Y_2301 = r_LOOKUP(((*(R17 *)rt_nil_check(l_A_2299))).f_NAME);
if ((!(l_Y_2301 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_2301))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_2301))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_2301))).f_T == NULL))))
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2301))).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
{ rt_int rv2302 = 1;
return rv2302; }
}
}
}
}
}
l_A_2299 = ((*(R17 *)rt_nil_check(l_A_2299))).f_NEXT;
}
RT_B_TICK();
} L_end2300: ;
{ rt_int rv2303 = 0;
return rv2303; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R9 l_NAME_2304; memset(&l_NAME_2304, 0, sizeof l_NAME_2304);
S_R9(&l_NAME_2304, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2305; memset(&l_LINE_2305, 0, sizeof l_LINE_2305);
l_LINE_2305 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
if ((!(r_CUR_GENERIC() == NULL)))
{
if (r_GENERIC_OBJECT_ARG(((*(R17 *)rt_nil_check(p_E))).f_A))
{
r_REQUIRE_WHERE(l_NAME_2304, l_LINE_2305);
}
}
if ((((((r_OPERATOR_SYMBOL(l_NAME_2304)).f_LEN > ((rt_int)0LL)) || r_TEQS(l_NAME_2304, rt_str("STORE_", 6))) || r_TEQS(l_NAME_2304, rt_str("SUBSTRING_", 10))) || r_TEQS(l_NAME_2304, rt_str("SUBSTRING_STORE_", 16))))
{
{ R26 rv2306 = r_OPERATOR_BUILTIN(p_E, p_WANT);
return rv2306; }
}
if ((r_TEQS(l_NAME_2304, rt_str("PUT", 3)) || r_TEQS(l_NAME_2304, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2307; memset(&l_V_2307, 0, sizeof l_V_2307);
S_R26(&l_V_2307, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2307).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_2305, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
r_ASCII_ONLY((l_V_2307).f_T, rt_str("the terminal", 12), l_LINE_2305);
if (r_TEQS(l_NAME_2304, rt_str("PUT", 3)))
{
{ R26 rv2308 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_2307).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2308; }
}
{ R26 rv2309 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_2307).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2309; }
}
}
else if (r_TEQS(l_NAME_2304, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2310 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2310; }
}
else if (r_TEQS(l_NAME_2304, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2311 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2311; }
}
else if (r_TEQS(l_NAME_2304, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2312 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2312; }
}
else if (r_TEQS(l_NAME_2304, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2313 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2313; }
}
else if (r_TEQS(l_NAME_2304, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2314 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2314; }
}
else if (r_TEQS(l_NAME_2304, rt_str("REAL_TIME", 9)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2315 = r_MKET(r_MK(rt_str("rt_b_real_time()", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2315; }
}
else if (r_TEQS(l_NAME_2304, rt_str("ARGUMENT_COUNT", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2316 = r_MKET(r_MK(rt_str("rt_argc()", 9)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2316; }
}
else if (r_TEQS(l_NAME_2304, rt_str("ARGUMENT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2317 = r_MKET(r_FMT1(rt_str("rt_arg(@)", 9), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2317; }
}
else if ((r_TEQS(l_NAME_2304, rt_str("FILE_EXISTS", 11)) || r_TEQS(l_NAME_2304, rt_str("READ_FILE", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2318; memset(&l_V_2318, 0, sizeof l_V_2318);
S_R26(&l_V_2318, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2318).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_2305, rt_str("a file is named by a character string: ", 39), l_NAME_2304);
}
if (r_TEQS(l_NAME_2304, rt_str("FILE_EXISTS", 11)))
{
{ R26 rv2319 = r_MKET(r_FMT1(rt_str("rt_b_file_exists(@)", 19), (l_V_2318).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2319; }
}
{ R26 rv2320 = r_MKET(r_FMT1(rt_str("rt_read_file(@)", 15), (l_V_2318).f_C), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2320; }
}
}
else if (r_TEQS(l_NAME_2304, rt_str("WRITE_FILE", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_N_2321; memset(&l_N_2321, 0, sizeof l_N_2321);
S_R26(&l_N_2321, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R26 l_V_2322; memset(&l_V_2322, 0, sizeof l_V_2322);
S_R26(&l_V_2322, r_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT, NULL), 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_N_2321).f_T)))).f_KIND == g_T_STR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2322).f_T)))).f_KIND == g_T_STR))))
{
r_FAIL(l_LINE_2305, rt_str("WRITE_FILE (name, text) takes two character strings", 51));
}
{ R26 rv2323 = r_MKET(r_FMT2(rt_str("rt_write_file(@, @)", 19), (l_N_2321).f_C, (l_V_2322).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2323; }
}
}
if (r_TEQS(l_NAME_2304, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2324 = r_IMAGE_OF(r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_2305);
return rv2324; }
}
else if (r_TEQS(l_NAME_2304, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv2325 = r_TO_FIXED_CALL(p_E);
return rv2325; }
}
else if (r_TEQS(l_NAME_2304, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_2326; memset(&l_V_2326, 0, sizeof l_V_2326);
S_R26(&l_V_2326, r_EXPR(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), NULL), 0);
R25 l_P_2327; memset(&l_P_2327, 0, sizeof l_P_2327);
S_R25(&l_P_2327, r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_VT_2328; memset(&l_VT_2328, 0, sizeof l_VT_2328);
l_VT_2328 = r_REAL_TYPE((l_V_2326).f_T);
R22 * l_T_2329; memset(&l_T_2329, 0, sizeof l_T_2329);
l_T_2329 = r_FLOAT_TYPE((l_P_2327).f_V);
R9 l_SINGLE_2330; memset(&l_SINGLE_2330, 0, sizeof l_SINGLE_2330);
S_R9(&l_SINGLE_2330, r_SINGLE_C((l_P_2327).f_V), 0);
R9 l_TR_2331; memset(&l_TR_2331, 0, sizeof l_TR_2331);
S_R9(&l_TR_2331, r_MK(rt_str("0", 1)), 0);
if (((r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A) == ((rt_int)3LL)) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT))).f_KIND == g_N_QUAL)))
{
{
R17 * l_R_2332; memset(&l_R_2332, 0, sizeof l_R_2332);
l_R_2332 = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
if ((l_R_2332 == NULL))
{
l_R_2332 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT;
}
if ((((*(R17 *)rt_nil_check(l_R_2332))).f_KIND == g_N_QUAL))
{
l_R_2332 = r_LIT_NODE_T(((*(R17 *)rt_nil_check(l_R_2332))).f_NAME, l_LINE_2305);
}
if (r_TEQS(((*(R17 *)rt_nil_check(l_R_2332))).f_NAME, rt_str("TRUNCATED", 9)))
{
S_R9(&l_TR_2331, r_MK(rt_str("1", 1)), 0);
}
else if ((!r_TEQS(((*(R17 *)rt_nil_check(l_R_2332))).f_NAME, rt_str("ROUNDED", 7))))
{
r_FAIL(l_LINE_2305, rt_str("TO_FLOAT is predefined for ROUNDED and TRUNCATED (3.3.6.1)", 58));
}
}
}
if (((((*(R22 *)rt_nil_check(l_VT_2328))).f_KIND == g_T_INT) && r_IS_D(l_T_2329)))
{
{ R26 rv2333 = r_MKET(r_FMT3(rt_str("rt_b_d_of_fix(@, @, @)", 22), (l_V_2326).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_2328))).f_SCALE), l_TR_2331), l_T_2329);
return rv2333; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_2328))).f_KIND == g_T_INT))
{
{ R26 rv2334 = r_MKET(r_FMT4(rt_str("rt_b_float_of_fix_r(@, @, @, @)", 31), (l_V_2326).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_2328))).f_SCALE), l_SINGLE_2330, l_TR_2331), l_T_2329);
return rv2334; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_2328))).f_KIND == g_T_FLOAT))
{
if (((((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) && (r_IMP_PRECISION_OF((l_P_2327).f_V) > r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_2328))).f_SCALE))))
{
{
R17 * l_Q_2335; memset(&l_Q_2335, 0, sizeof l_Q_2335);
l_Q_2335 = r_NEW_NODE(g_N_QUAL, l_LINE_2305);
R17 * l_SAVED_Q_2336; memset(&l_SAVED_Q_2336, 0, sizeof l_SAVED_Q_2336);
l_SAVED_Q_2336 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_L_2337; memset(&l_L_2337, 0, sizeof l_L_2337);
((*(R17 *)rt_nil_check(l_Q_2335))).f_B = r_ARG_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_Q_2335;
S_R26(&l_L_2337, r_EXPR(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_2336;
{ R26 rv2338 = r_MKET(r_FLOAT_CONV(l_L_2337, l_T_2329, l_TR_2331), l_T_2329);
return rv2338; }
}
}
{ R26 rv2339 = r_MKET(r_FLOAT_CONV(l_V_2326, l_T_2329, l_TR_2331), l_T_2329);
return rv2339; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_2328))).f_KIND == g_T_STR))
{
if (((!(((*(R22 *)rt_nil_check(l_VT_2328))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(l_VT_2328))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))))
{
r_FAIL(l_LINE_2305, rt_str("TO_FLOAT is predefined for ASCII strings only (3.3.6.1)", 55));
}
if (r_IS_D(l_T_2329))
{
{ R26 rv2340 = r_MKET(r_FMT2(rt_str("rt_b_d_of_str(@, @)", 19), (l_V_2326).f_C, l_TR_2331), l_T_2329);
return rv2340; }
}
{ R26 rv2341 = r_MKET(r_FMT3(rt_str("rt_b_fconv(rt_b_float_of_str(@), @, @, 0)", 41), (l_V_2326).f_C, l_SINGLE_2330, l_TR_2331), l_T_2329);
return rv2341; }
}
r_FAIL(l_LINE_2305, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_2304, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2342 = r_BITS_OF(r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_2305);
return rv2342; }
}
else if (r_TEQS(l_NAME_2304, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2343; memset(&l_V_2343, 0, sizeof l_V_2343);
S_R26(&l_V_2343, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2343).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv2344 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_2343).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_2343).f_T))).f_SCALE));
return rv2344; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2343).f_T)))).f_KIND == g_T_FLOAT))
{
if (r_IS_D((l_V_2343).f_T))
{
{ R26 rv2345 = r_MKET(r_FMT1(rt_str("rt_b_dabs(@)", 12), (l_V_2343).f_C), (l_V_2343).f_T);
return rv2345; }
}
{ R26 rv2346 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_2343).f_C), (l_V_2343).f_T);
return rv2346; }
}
r_FAIL(l_LINE_2305, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_2304, rt_str("SUCC", 4)) || r_TEQS(l_NAME_2304, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2347; memset(&l_V_2347, 0, sizeof l_V_2347);
S_R26(&l_V_2347, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_2348; memset(&l_T_2348, 0, sizeof l_T_2348);
l_T_2348 = r_REAL_TYPE((l_V_2347).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_2348))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_2305, rt_str("an enumerated value expected by ", 32), l_NAME_2304);
}
if (r_IS_UNORDERED(l_T_2348))
{
r_FAILT(l_LINE_2305, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_2304);
}
if (r_TEQS(l_NAME_2304, rt_str("SUCC", 4)))
{
{ R26 rv2349 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_2347).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2348))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_2348))).f_BASE);
return rv2349; }
}
{ R26 rv2350 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_2347).f_C), ((*(R22 *)rt_nil_check(l_T_2348))).f_BASE);
return rv2350; }
}
}
else if (r_TEQS(l_NAME_2304, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_2351; memset(&l_V_2351, 0, sizeof l_V_2351);
S_R26(&l_V_2351, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_2352; memset(&l_K_2352, 0, sizeof l_K_2352);
l_K_2352 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2351).f_T)))).f_KIND;
R22 * l_T_2353; memset(&l_T_2353, 0, sizeof l_T_2353);
l_T_2353 = r_NEW_TYP(l_K_2352);
if (((!(l_K_2352 == g_T_STR)) && (!(l_K_2352 == g_T_BITS))))
{
r_FAIL(l_LINE_2305, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_2353))).f_BASE = ((*(R22 *)rt_nil_check((l_V_2351).f_T))).f_BASE;
{ R26 rv2354 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_2351).f_C, r_INT_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_2353);
return rv2354; }
}
}
else if (r_TEQS(l_NAME_2304, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2355 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2355; }
}
else if (r_TEQS(l_NAME_2304, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2356 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv2356; }
}
else if (((r_TEQS(l_NAME_2304, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_2304, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_2304, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R9 l_BITS_2357; memset(&l_BITS_2357, 0, sizeof l_BITS_2357);
S_R9(&l_BITS_2357, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_2304, rt_str("OCT_OF", 6)))
{
S_R9(&l_BITS_2357, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_2304, rt_str("HEX_OF", 6)))
{
S_R9(&l_BITS_2357, r_MK(rt_str("4", 1)), 0);
}
{
R26 l_V_2358; memset(&l_V_2358, 0, sizeof l_V_2358);
S_R26(&l_V_2358, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2358).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_2305, rt_str("a character string expected by ", 31), l_NAME_2304);
}
r_ASCII_ONLY((l_V_2358).f_T, r_STR(l_NAME_2304, (l_NAME_2304).f_LEN), l_LINE_2305);
{ R26 rv2359 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (l_V_2358).f_C, l_BITS_2357), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv2359; }
}
}
}
else if ((r_TEQS(l_NAME_2304, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_2304, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R25 l_S_2360; memset(&l_S_2360, 0, sizeof l_S_2360);
S_R25(&l_S_2360, r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_A, rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R25 l_R_2361; memset(&l_R_2361, 0, sizeof l_R_2361);
S_R25(&l_R_2361, r_MANIFEST_INTEGER_ARG(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
if ((!((l_R_2361).f_V == ((rt_int)2LL))))
{
r_FAIL(l_LINE_2305, rt_str("only radix 2 is predefined (3.2.6.3)", 36));
}
r_CHECK_PRECISION_ARG(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_2305);
if (r_TEQS(l_NAME_2304, rt_str("FIXED_MIN", 9)))
{
{ R26 rv2362 = r_MKET(r_STD_MIN_C(), r_INT_TYPE((l_S_2360).f_V));
return rv2362; }
}
{ R26 rv2363 = r_MKET(r_STD_MAX_C(), r_INT_TYPE((l_S_2360).f_V));
return rv2363; }
}
}
else if (((r_TEQS(l_NAME_2304, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_2304, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_2304, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R25 l_P_2364; memset(&l_P_2364, 0, sizeof l_P_2364);
S_R25(&l_P_2364, r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_T_2365; memset(&l_T_2365, 0, sizeof l_T_2365);
l_T_2365 = r_FLOAT_TYPE((l_P_2364).f_V);
if (r_TEQS(l_NAME_2304, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv2366 = r_MKET(r_FLOAT_LIMIT(l_T_2365, r_MK(rt_str("MIN", 3))), l_T_2365);
return rv2366; }
}
else if (r_TEQS(l_NAME_2304, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv2367 = r_MKET(r_FLOAT_LIMIT(l_T_2365, r_MK(rt_str("MAX", 3))), l_T_2365);
return rv2367; }
}
{ R26 rv2368 = r_MKET(r_FLOAT_LIMIT(l_T_2365, r_MK(rt_str("EPSILON", 7))), l_T_2365);
return rv2368; }
}
}
else if (r_TEQS(l_NAME_2304, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2369 = r_INT_ET(r_IMP_PRECISION_OF((r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION())).f_V));
return rv2369; }
}
else if (r_TEQS(l_NAME_2304, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2370 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2370; }
}
else if (r_TEQS(l_NAME_2304, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2371 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2371; }
}
if (r_TEQS(l_NAME_2304, rt_str("RUN_PATHS", 9)))
{
{ R26 rv2372 = r_RUN_PATHS(p_E);
return rv2372; }
}
{ R26 rv2373 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv2373; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_2374; memset(&l_T_2374, 0, sizeof l_T_2374);
l_T_2374 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_2375; memset(&l_K_2375, 0, sizeof l_K_2375);
l_K_2375 = ((*(R22 *)rt_nil_check(l_T_2374))).f_KIND;
R22 * l_S_2376; memset(&l_S_2376, 0, sizeof l_S_2376);
l_S_2376 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_2375 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_2374))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv2377 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_2376);
return rv2377; }
}
{ R26 rv2378 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_2374))).f_SCALE)), l_S_2376);
return rv2378; }
}
else if (r_IS_D(l_T_2374))
{
{ R26 rv2379 = r_MKET(r_FMT2(rt_str("rt_b_d_image(@, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_2374))).f_SCALE)), l_S_2376);
return rv2379; }
}
else if ((l_K_2375 == g_T_FLOAT))
{
{ R26 rv2380 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_2374))).f_SCALE)), l_S_2376);
return rv2380; }
}
else if ((l_K_2375 == g_T_BOOL))
{
{ R26 rv2381 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_2376);
return rv2381; }
}
else if ((l_K_2375 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_2374))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv2382 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_2376);
return rv2382; }
}
{ R26 rv2383 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2374))).f_BASE))).f_CNAME, (p_V).f_C), l_S_2376);
return rv2383; }
}
else if (((l_K_2375 == g_T_STR) || (l_K_2375 == g_T_BITS)))
{
{ R26 rv2384 = r_MKET((p_V).f_C, l_S_2376);
return rv2384; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_2374));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R17 * p_E) { RT_B_TICK(); 
R26 l_V_2385; memset(&l_V_2385, 0, sizeof l_V_2385);
S_R26(&l_V_2385, r_EXPR(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_2386; memset(&l_T_2386, 0, sizeof l_T_2386);
l_T_2386 = r_REAL_TYPE((l_V_2385).f_T);
rt_int l_N_2387; memset(&l_N_2387, 0, sizeof l_N_2387);
l_N_2387 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A);
R9 l_RND_2388; memset(&l_RND_2388, 0, sizeof l_RND_2388);
S_R9(&l_RND_2388, r_ROUNDING_ARG(p_E, l_N_2387), 0);
rt_int l_S_2389; memset(&l_S_2389, 0, sizeof l_S_2389);
l_S_2389 = ((rt_int)0LL);
if (((l_N_2387 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
l_S_2389 = (r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL))).f_V;
}
{
rt_int l_K_2390; memset(&l_K_2390, 0, sizeof l_K_2390);
l_K_2390 = ((rt_int)2LL);
for (;;) {
if ((l_K_2390 >= l_N_2387)) goto L_end2391;
{
{
R17 * l_R_2392; memset(&l_R_2392, 0, sizeof l_R_2392);
l_R_2392 = r_ARG_EXPR(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, l_K_2390));
if ((r_IS_ROUNDING(l_R_2392) || (((((*(R17 *)rt_nil_check(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, l_K_2390)))).f_KIND == g_N_QUAL) && (l_K_2390 == rt_sub(l_N_2387, ((rt_int)1LL)))))))
{
if ((!(l_K_2390 == rt_sub(l_N_2387, ((rt_int)1LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the rounding mode is the last argument of TO_FIXED (3.2.6.1)", 60));
}
}
else if (((((((*(R17 *)rt_nil_check(l_R_2392))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_2392))).f_KIND == g_N_ENUMLIT))) && (!r_NAMES_OBJECT(((*(R17 *)rt_nil_check(l_R_2392))).f_NAME))))
{
r_CHECK_PRECISION_ARG(l_R_2392, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
else if (((((*(R17 *)rt_nil_check(l_R_2392))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(l_R_2392))).f_NAME, rt_str("PRECISION", 9))))
{
}
else
{
if ((!((r_MANIFEST_INTEGER_ARG(l_R_2392, rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL))).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 is predefined (3.2.6.1)", 36));
}
}
}
l_K_2390 = rt_add(l_K_2390, ((rt_int)1LL));
}
RT_B_TICK();
} L_end2391: ;
}
if (((((*(R22 *)rt_nil_check(l_T_2386))).f_KIND == g_T_INT) && (((((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) || (((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_INT)))))
{
{ R26 rv2393 = r_MKET(r_FMT3(rt_str("rt_b_fix_val(@, @, @)", 21), r_CSTRING(((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_NAME), r_NUM(l_S_2389), l_RND_2388), r_INT_TYPE(l_S_2389));
return rv2393; }
}
if ((((*(R22 *)rt_nil_check(l_T_2386))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_2394; memset(&l_SAVED_2394, 0, sizeof l_SAVED_2394);
l_SAVED_2394 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R9 l_C_2395; memset(&l_C_2395, 0, sizeof l_C_2395);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_2388, rt_str("1", 1));
S_R9(&l_C_2395, r_RESCALE_C((l_V_2385).f_C, ((*(R22 *)rt_nil_check(l_T_2386))).f_SCALE, l_S_2389), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_2394;
{ R26 rv2396 = r_MKET(l_C_2395, r_INT_TYPE(l_S_2389));
return rv2396; }
}
}
else if (r_IS_D(l_T_2386))
{
{ R26 rv2397 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_d(@, @, @)", 22), (l_V_2385).f_C, r_NUM(l_S_2389), l_RND_2388), r_INT_TYPE(l_S_2389));
return rv2397; }
}
else if ((((*(R22 *)rt_nil_check(l_T_2386))).f_KIND == g_T_FLOAT))
{
{ R26 rv2398 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_2385).f_C, r_NUM(l_S_2389), l_RND_2388), r_INT_TYPE(l_S_2389));
return rv2398; }
}
else if (((((*(R22 *)rt_nil_check(l_T_2386))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_2386))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_2386))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_2386))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_2386))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2386))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv2399 = r_MKET(r_RESCALE_C((l_V_2385).f_C, ((rt_int)0LL), l_S_2389), r_INT_TYPE(l_S_2389));
return rv2399; }
}
else if ((((*(R22 *)rt_nil_check(l_T_2386))).f_KIND == g_T_BITS))
{
{ R26 rv2400 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_2385).f_C), ((rt_int)0LL), l_S_2389), r_INT_TYPE(l_S_2389));
return rv2400; }
}
else if ((((*(R22 *)rt_nil_check(l_T_2386))).f_KIND == g_T_STR))
{
r_ASCII_ONLY(l_T_2386, rt_str("TO_FIXED", 8), ((*(R17 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv2401 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_2385).f_C, r_NUM(l_S_2389), l_RND_2388), r_INT_TYPE(l_S_2389));
return rv2401; }
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_2385).f_T));
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_SIZE_OR(R22 * p_T) { RT_B_TICK(); 
R25 l_M_2402; memset(&l_M_2402, 0, sizeof l_M_2402);
S_R25(&l_M_2402, r_STATIC_SIZE(p_T), 0);
if ((l_M_2402).f_OK)
{
{ rt_int rv2403 = (l_M_2402).f_V;
return rv2403; }
}
{ rt_int rv2404 = rt_neg(((rt_int)1LL));
return rv2404; }
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_2405; memset(&l_T_2405, 0, sizeof l_T_2405);
l_T_2405 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_2406; memset(&l_K_2406, 0, sizeof l_K_2406);
l_K_2406 = ((*(R22 *)rt_nil_check(l_T_2405))).f_KIND;
if ((l_K_2406 == g_T_BITS))
{
{ R26 rv2407 = p_V;
return rv2407; }
}
else if ((l_K_2406 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_2405))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2405))).f_REPS))).f_B == NULL)))
{
{ R26 rv2408 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_2405)), r_BITS_TYPE(r_ENUM_SIZE(l_T_2405)));
return rv2408; }
}
}
{ R26 rv2409 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_2405))), r_BITS_TYPE(r_ENUM_SIZE(l_T_2405)));
return rv2409; }
}
else if ((l_K_2406 == g_T_STR))
{
{ R26 rv2410 = r_MKET(r_FMT4(rt_str("rt_b_bits_of_chars(@, @, @, @)", 30), (p_V).f_C, r_NUM(r_CHAR_SIZE(l_T_2405)), r_NUM(r_PACKING_OF(l_T_2405)), r_CHAR_REPS(l_T_2405)), r_BITS_TYPE(r_STATIC_SIZE_OR(l_T_2405)));
return rv2410; }
}
r_REQUIRE_MACHINE(p_LINE);
if (((l_K_2406 == g_T_INT) && (r_REP_BITS(l_T_2405) < ((rt_int)63LL))))
{
{ R26 rv2411 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_REP_BITS(l_T_2405))), r_BITS_TYPE(r_REP_BITS(l_T_2405)));
return rv2411; }
}
else if ((l_K_2406 == g_T_INT))
{
{ R26 rv2412 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(((*(R7 *)rt_nil_check(g_W))).f_WORD)), r_BITS_TYPE(((*(R7 *)rt_nil_check(g_W))).f_WORD));
return rv2412; }
}
else if ((l_K_2406 == g_T_BOOL))
{
{ R26 rv2413 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv2413; }
}
else if (r_IS_D(l_T_2405))
{
{ R26 rv2414 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_d(@)", 17), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv2414; }
}
else if (((l_K_2406 == g_T_FLOAT) && (((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL))))
{
{ R26 rv2415 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_f(@)", 17), (p_V).f_C), r_BITS_TYPE(((rt_int)32LL)));
return rv2415; }
}
else if (((l_K_2406 == g_T_FLOAT) && (r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_2405))).f_SCALE) == ((rt_int)7LL))))
{
{ R26 rv2416 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_single(@)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)32LL)));
return rv2416; }
}
else if ((l_K_2406 == g_T_FLOAT))
{
{ R26 rv2417 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv2417; }
}
else if ((l_K_2406 == g_T_XFIX))
{
{ R26 rv2418 = r_MKET((p_V).f_C, r_BITS_TYPE(r_XFIX_SIZE(l_T_2405)));
return rv2418; }
}
else if ((l_K_2406 == g_T_PTR))
{
{ R26 rv2419 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(rt_b_ptr_addr(@), @)", 37), (p_V).f_C, r_NUM(((*(R7 *)rt_nil_check(g_W))).f_WORD)), r_BITS_TYPE(((*(R7 *)rt_nil_check(g_W))).f_WORD));
return rv2419; }
}
else if ((l_K_2406 == g_T_SEM))
{
{ R26 rv2420 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(rt_b_sem_count(@), @)", 38), (p_V).f_C, r_NUM(((*(R7 *)rt_nil_check(g_W))).f_WORD)), r_BITS_TYPE(((*(R7 *)rt_nil_check(g_W))).f_WORD));
return rv2420; }
}
else if ((l_K_2406 == g_T_REC))
{
{ R26 rv2421 = r_MKET(r_RECORD_BITS(l_T_2405, (p_V).f_C), r_BITS_TYPE(r_STATIC_SIZE_OR(l_T_2405)));
return rv2421; }
}
else if ((l_K_2406 == g_T_ARR))
{
{ R26 rv2422 = r_MKET(r_ARRAY_BITS(l_T_2405, (p_V).f_C), r_BITS_TYPE(r_STATIC_SIZE_OR(l_T_2405)));
return rv2422; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_2405));
rt_raise(RT_X_INIT);
}
static void r_TYPE_ARG(R29 * p_A) { RT_B_TICK(); 
if ((!((*(R29 *)rt_nil_check(p_A))).f_HAVE))
{
S_R26(&((*(R29 *)rt_nil_check(p_A))).f_V, r_EXPR(((*(R29 *)rt_nil_check(p_A))).f_E, NULL), 0);
((*(R29 *)rt_nil_check(p_A))).f_HAVE = 1;
}
}
static rt_int r_WANT_SENSITIVE(R29 * p_A) { RT_B_TICK(); 
if (((*(R29 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv2423 = 0;
return rv2423; }
}
{ rt_int rv2424 = ((r_IS_LITERALISH(((*(R29 *)rt_nil_check(p_A))).f_E) || (((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv2424; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R29 * p_A) { RT_B_TICK(); 
rt_int l_N_2425; memset(&l_N_2425, 0, sizeof l_N_2425);
l_N_2425 = ((rt_int)0LL);
R29 * l_P_2426; memset(&l_P_2426, 0, sizeof l_P_2426);
l_P_2426 = p_A;
for (;;) {
if ((l_P_2426 == NULL)) goto L_end2427;
{
l_N_2425 = rt_add(l_N_2425, ((rt_int)1LL));
l_P_2426 = ((*(R29 *)rt_nil_check(l_P_2426))).f_NEXT;
}
RT_B_TICK();
} L_end2427: ;
{ rt_int rv2428 = l_N_2425;
return rv2428; }
rt_raise(RT_X_INIT);
}
static R29 * r_CALL_ARGS(R17 * p_E) { RT_B_TICK(); 
R29 * l_HEAD_2429; memset(&l_HEAD_2429, 0, sizeof l_HEAD_2429);
l_HEAD_2429 = NULL;
R29 * l_TAIL_2430; memset(&l_TAIL_2430, 0, sizeof l_TAIL_2430);
l_TAIL_2430 = NULL;
rt_int l_G_2431; memset(&l_G_2431, 0, sizeof l_G_2431);
l_G_2431 = ((rt_int)0LL);
{ rt_int it2433_lo = ((rt_int)0LL), it2433_hi = ((rt_int)2LL);
for (rt_int it2433 = it2433_lo; it2433 <= it2433_hi; it2433++) {
{
{
R17 * l_P_2434; memset(&l_P_2434, 0, sizeof l_P_2434);
l_P_2434 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((it2433 == ((rt_int)1LL)))
{
l_P_2434 = ((*(R17 *)rt_nil_check(p_E))).f_B;
}
else if ((it2433 == ((rt_int)2LL)))
{
l_P_2434 = ((*(R17 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_2434 == NULL)) goto L_end2435;
{
{
R29 * l_A_2436; memset(&l_A_2436, 0, sizeof l_A_2436);
l_A_2436 = r_NODE_ARG(l_P_2434, it2433, NULL);
if ((l_TAIL_2430 == NULL))
{
l_HEAD_2429 = l_A_2436;
}
else
{
((*(R29 *)rt_nil_check(l_TAIL_2430))).f_NEXT = l_A_2436;
}
l_TAIL_2430 = l_A_2436;
}
l_P_2434 = ((*(R17 *)rt_nil_check(l_P_2434))).f_NEXT;
}
RT_B_TICK();
} L_end2435: ;
}
}
RT_B_TICK();
if (it2433 == it2433_hi) break;
} } L_end2432: ;
{ R29 * rv2437 = l_HEAD_2429;
return rv2437; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SAVED_2438; memset(&l_SAVED_2438, 0, sizeof l_SAVED_2438);
l_SAVED_2438 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_2439; memset(&l_SAVED_Q_2439, 0, sizeof l_SAVED_Q_2439);
l_SAVED_Q_2439 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_2440; memset(&l_V_2440, 0, sizeof l_V_2440);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_2440, r_CALL_EXPR1(p_E, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_2438;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_2439;
{ R26 rv2441 = l_V_2440;
return rv2441; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR1(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R29 * l_ARGS_2442; memset(&l_ARGS_2442, 0, sizeof l_ARGS_2442);
l_ARGS_2442 = r_CALL_ARGS(p_E);
R12 * l_Y_2443; memset(&l_Y_2443, 0, sizeof l_Y_2443);
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv2444 = r_START_IO_CALL(p_E);
return rv2444; }
}
l_Y_2443 = r_BOUND_ROUTINE(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2443 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2443))).f_KIND == g_Y_BUILTIN))
{
{
R17 * l_N_2445; memset(&l_N_2445, 0, sizeof l_N_2445);
l_N_2445 = r_COPY_NODE(p_E);
S_R9(&((*(R17 *)rt_nil_check(l_N_2445))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2443))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2445))).f_NEXT = ((*(R17 *)rt_nil_check(p_E))).f_NEXT;
{ R26 rv2446 = r_BUILTIN(l_N_2445, p_WANT);
return rv2446; }
}
}
{ R26 rv2447 = r_CALL_SYM(l_Y_2443, l_ARGS_2442, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv2447; }
}
{
R9 l_SHORT_2448; memset(&l_SHORT_2448, 0, sizeof l_SHORT_2448);
S_R9(&l_SHORT_2448, r_WHERE_SHORT_NAME(((*(R17 *)rt_nil_check(p_E))).f_NAME), 0);
if ((!r_TEQ(l_SHORT_2448, ((*(R17 *)rt_nil_check(p_E))).f_NAME)))
{
{
R17 * l_N_2449; memset(&l_N_2449, 0, sizeof l_N_2449);
l_N_2449 = r_COPY_NODE(p_E);
S_R9(&((*(R17 *)rt_nil_check(l_N_2449))).f_NAME, l_SHORT_2448, 0);
((*(R17 *)rt_nil_check(l_N_2449))).f_NEXT = ((*(R17 *)rt_nil_check(p_E))).f_NEXT;
{ R26 rv2450 = r_CALL_EXPR1(l_N_2449, p_WANT);
return rv2450; }
}
}
}
l_Y_2443 = r_FIND_ROUTINE(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2442, ((*(R17 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_2443 == NULL))
{
{
R12 * l_P_2451; memset(&l_P_2451, 0, sizeof l_P_2451);
l_P_2451 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_2451 == NULL)) goto L_end2452;
{
if ((((*(R12 *)rt_nil_check(l_P_2451))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv2453 = r_BUILTIN(p_E, p_WANT);
return rv2453; }
}
l_P_2451 = r_LOOKUP_NEXT(l_P_2451);
}
RT_B_TICK();
} L_end2452: ;
}
{
R12 * l_B_2454; memset(&l_B_2454, 0, sizeof l_B_2454);
l_B_2454 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_2454 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_2454))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv2455 = r_BUILTIN(p_E, p_WANT);
return rv2455; }
}
if (((((*(R12 *)rt_nil_check(l_B_2454))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_2454))).f_ORIG == NULL))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
}
{
R9 l_BASE_2456; memset(&l_BASE_2456, 0, sizeof l_BASE_2456);
S_R9(&l_BASE_2456, r_CLASS_OPERATION(((*(R17 *)rt_nil_check(p_E))).f_NAME), 0);
if (((l_BASE_2456).f_LEN > ((rt_int)0LL)))
{
{
R17 * l_N_2457; memset(&l_N_2457, 0, sizeof l_N_2457);
l_N_2457 = r_COPY_NODE(p_E);
S_R9(&((*(R17 *)rt_nil_check(l_N_2457))).f_NAME, l_BASE_2456, 0);
{ R26 rv2458 = r_BUILTIN(l_N_2457, p_WANT);
return rv2458; }
}
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv2459 = r_CALL_SYM(l_Y_2443, l_ARGS_2442, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv2459; }
rt_raise(RT_X_INIT);
}
static R9 r_CLASS_OPERATION(R9 p_NAME) { RT_B_TICK(); 
rstr l_S_2460; memset(&l_S_2460, 0, sizeof l_S_2460);
l_S_2460 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2460, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2462_lo = ((rt_int)1LL), it2462_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2462 = it2462_lo; it2462 <= it2462_hi; it2462++) {
{
if (rt_b_eq(rt_b_slice(l_S_2460, it2462, it2462), rt_str("$", 1)))
{
{
R9 l_P_2463; memset(&l_P_2463, 0, sizeof l_P_2463);
S_R9(&l_P_2463, r_MKN(rt_b_slice(l_S_2460, ((rt_int)0LL), rt_sub(it2462, ((rt_int)1LL)))), 0);
R9 l_B_2464; memset(&l_B_2464, 0, sizeof l_B_2464);
S_R9(&l_B_2464, r_MKN(rt_b_slice(l_S_2460, rt_add(it2462, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))), 0);
if ((((((((r_IS_TYPE_WORD(l_P_2463) || r_TEQS(l_P_2463, rt_str("INTEGER", 7))) || r_TEQS(l_P_2463, rt_str("BOOLEAN", 7))) || r_TEQS(l_P_2463, rt_str("ENUM", 4))) || r_TEQS(l_P_2463, rt_str("ARRAY", 5))) || r_TEQS(l_P_2463, rt_str("RECORD", 6))) || r_TEQS(l_P_2463, rt_str("PTR", 3))) || r_TEQS(l_P_2463, rt_str("SEMAPHORE", 9))))
{
{
R12 * l_Y_2465; memset(&l_Y_2465, 0, sizeof l_Y_2465);
l_Y_2465 = r_LOOKUP(l_B_2464);
for (;;) {
if ((l_Y_2465 == NULL)) goto L_end2466;
{
if ((((*(R12 *)rt_nil_check(l_Y_2465))).f_KIND == g_Y_BUILTIN))
{
{ R9 rv2467 = l_B_2464;
return rv2467; }
}
l_Y_2465 = r_LOOKUP_NEXT(l_Y_2465);
}
RT_B_TICK();
} L_end2466: ;
}
}
}
{ R9 rv2468 = r_NO_TEXT();
return rv2468; }
}
}
RT_B_TICK();
if (it2462 == it2462_hi) break;
} } L_end2461: ;
{ R9 rv2469 = r_NO_TEXT();
return rv2469; }
rt_raise(RT_X_INIT);
}
static R9 r_WHERE_SHORT_NAME(R9 p_NAME) { RT_B_TICK(); 
R12 * l_G_2470; memset(&l_G_2470, 0, sizeof l_G_2470);
l_G_2470 = r_CUR_GENERIC();
rstr l_S_2471; memset(&l_S_2471, 0, sizeof l_S_2471);
l_S_2471 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2471, r_STR(p_NAME, (p_NAME).f_LEN));
if ((l_G_2470 == NULL))
{
{ R9 rv2472 = p_NAME;
return rv2472; }
}
{ rt_int it2474_lo = ((rt_int)1LL), it2474_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2474 = it2474_lo; it2474 <= it2474_hi; it2474++) {
{
if (rt_b_eq(rt_b_slice(l_S_2471, it2474, it2474), rt_str("$", 1)))
{
if (((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_G_2470))).f_BINDINGS, r_MKN(rt_b_slice(l_S_2471, ((rt_int)0LL), rt_sub(it2474, ((rt_int)1LL))))) == NULL)) && r_IN_WHERE(l_G_2470, r_MKN(rt_b_slice(l_S_2471, rt_add(it2474, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))))))
{
{ R9 rv2475 = r_MKN(rt_b_slice(l_S_2471, rt_add(it2474, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))));
return rv2475; }
}
{ R9 rv2476 = p_NAME;
return rv2476; }
}
}
RT_B_TICK();
if (it2474 == it2474_hi) break;
} } L_end2473: ;
{ R9 rv2477 = p_NAME;
return rv2477; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R9 p_NAME) { RT_B_TICK(); 
R21 * l_B_2478; memset(&l_B_2478, 0, sizeof l_B_2478);
l_B_2478 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_2479; memset(&l_S_2479, 0, sizeof l_S_2479);
l_S_2479 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2479, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2481_lo = ((rt_int)1LL), it2481_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2481 = it2481_lo; it2481 <= it2481_hi; it2481++) {
{
if (rt_b_eq(rt_b_slice(l_S_2479, it2481, it2481), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_2479, ((rt_int)0LL), rt_sub(it2481, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv2482 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_2479, rt_add(it2481, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv2482; }
}
goto L_end2480;
}
}
RT_B_TICK();
if (it2481 == it2481_hi) break;
} } L_end2480: ;
}
for (;;) {
if ((l_B_2478 == NULL)) goto L_end2483;
{
if (((!(((*(R21 *)rt_nil_check(l_B_2478))).f_R == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_B_2478))).f_NAME, p_NAME)))
{
{ R12 * rv2484 = ((*(R21 *)rt_nil_check(l_B_2478))).f_R;
return rv2484; }
}
l_B_2478 = ((*(R21 *)rt_nil_check(l_B_2478))).f_NEXT;
}
RT_B_TICK();
} L_end2483: ;
{ R12 * rv2485 = NULL;
return rv2485; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R9 p_NAME) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv2486 = 0;
return rv2486; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv2487 = 0;
return rv2487; }
}
}
}
{ rt_int rv2488 = 1;
return rv2488; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R9 p_NAME, R29 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { RT_B_TICK(); 
R12 * l_Y_2489; memset(&l_Y_2489, 0, sizeof l_Y_2489);
l_Y_2489 = r_LOOKUP(p_NAME);
R12 * l_BEST_2490; memset(&l_BEST_2490, 0, sizeof l_BEST_2490);
l_BEST_2490 = NULL;
rt_int l_BEST_SCORE_2491; memset(&l_BEST_SCORE_2491, 0, sizeof l_BEST_SCORE_2491);
l_BEST_SCORE_2491 = ((rt_int)0LL);
rt_int l_TIES_2492; memset(&l_TIES_2492, 0, sizeof l_TIES_2492);
l_TIES_2492 = ((rt_int)0LL);
rt_int l_COUNT_2493; memset(&l_COUNT_2493, 0, sizeof l_COUNT_2493);
l_COUNT_2493 = ((rt_int)0LL);
rt_int l_N_2494; memset(&l_N_2494, 0, sizeof l_N_2494);
l_N_2494 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_2489 == NULL)) goto L_end2495;
{
if ((!r_IS_ROUTINE(l_Y_2489)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2489))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end2495;
}
}
else if (r_CANDIDATE(l_Y_2489, p_NAME))
{
{
R12 * l_R_2496; memset(&l_R_2496, 0, sizeof l_R_2496);
l_R_2496 = r_ORIGINAL(l_Y_2489);
rt_int l_SCORE_2497; memset(&l_SCORE_2497, 0, sizeof l_SCORE_2497);
r_ROUTINE_HEADER(l_R_2496);
if ((((r_PARAM_COUNT(l_R_2496) == l_N_2494) && (!r_SEEN_ROUTINE(l_R_2496, p_NAME, l_Y_2489))) && (!r_HIDDEN_ROUTINE(l_R_2496, p_NAME, l_Y_2489))))
{
l_COUNT_2493 = rt_add(l_COUNT_2493, ((rt_int)1LL));
l_SCORE_2497 = r_MATCH_SCORE(l_R_2496, p_ARGS);
if ((l_SCORE_2497 > l_BEST_SCORE_2491))
{
l_BEST_2490 = l_R_2496;
l_BEST_SCORE_2491 = l_SCORE_2497;
l_TIES_2492 = ((rt_int)0LL);
}
else if (((l_SCORE_2497 == l_BEST_SCORE_2491) && (l_SCORE_2497 > ((rt_int)0LL))))
{
l_TIES_2492 = rt_add(l_TIES_2492, ((rt_int)1LL));
}
}
}
}
l_Y_2489 = r_LOOKUP_NEXT(l_Y_2489);
}
RT_B_TICK();
} L_end2495: ;
if (((l_TIES_2492 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv2498 = l_BEST_2490;
return rv2498; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R9 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2499; memset(&l_Y_2499, 0, sizeof l_Y_2499);
l_Y_2499 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2499 == p_STOP) || (l_Y_2499 == NULL))) goto L_end2500;
{
if ((((*(R12 *)rt_nil_check(l_Y_2499))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_2499) == p_R))
{
{ rt_int rv2501 = 1;
return rv2501; }
}
}
l_Y_2499 = r_LOOKUP_NEXT(l_Y_2499);
}
RT_B_TICK();
} L_end2500: ;
{ rt_int rv2502 = 0;
return rv2502; }
rt_raise(RT_X_INIT);
}
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R9 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2503; memset(&l_Y_2503, 0, sizeof l_Y_2503);
l_Y_2503 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2503 == p_STOP) || (l_Y_2503 == NULL))) goto L_end2504;
{
if (((((*(R12 *)rt_nil_check(l_Y_2503))).f_KIND == g_Y_ROUTINE) && (((*(R12 *)rt_nil_check(l_Y_2503))).f_DEPTH > ((*(R12 *)rt_nil_check(p_STOP))).f_DEPTH)))
{
{
R12 * l_O_2505; memset(&l_O_2505, 0, sizeof l_O_2505);
l_O_2505 = r_ORIGINAL(l_Y_2503);
if ((!(l_O_2505 == p_R)))
{
r_ROUTINE_HEADER(l_O_2505);
if (r_SAME_SIGNATURE(l_O_2505, p_R))
{
{ rt_int rv2506 = 1;
return rv2506; }
}
}
}
}
l_Y_2503 = r_LOOKUP_NEXT(l_Y_2503);
}
RT_B_TICK();
} L_end2504: ;
{ rt_int rv2507 = 0;
return rv2507; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B) { RT_B_TICK(); 
R30 * l_P_2508; memset(&l_P_2508, 0, sizeof l_P_2508);
l_P_2508 = ((*(R12 *)rt_nil_check(p_A))).f_PARAMS;
R30 * l_Q_2509; memset(&l_Q_2509, 0, sizeof l_Q_2509);
l_Q_2509 = ((*(R12 *)rt_nil_check(p_B))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_A))).f_GENERIC || ((*(R12 *)rt_nil_check(p_B))).f_GENERIC))
{
{ rt_int rv2510 = 0;
return rv2510; }
}
for (;;) {
if (((l_P_2508 == NULL) || (l_Q_2509 == NULL))) goto L_end2511;
{
if ((!(((*(R30 *)rt_nil_check(l_P_2508))).f_MODE == ((*(R30 *)rt_nil_check(l_Q_2509))).f_MODE)))
{
{ rt_int rv2512 = 0;
return rv2512; }
}
if (((((*(R30 *)rt_nil_check(l_P_2508))).f_T == NULL) || (((*(R30 *)rt_nil_check(l_Q_2509))).f_T == NULL)))
{
if ((!(((*(R30 *)rt_nil_check(l_P_2508))).f_T == ((*(R30 *)rt_nil_check(l_Q_2509))).f_T)))
{
{ rt_int rv2513 = 0;
return rv2513; }
}
}
else if ((!r_SAME_TYPE(((*(R30 *)rt_nil_check(l_P_2508))).f_T, ((*(R30 *)rt_nil_check(l_Q_2509))).f_T)))
{
{ rt_int rv2514 = 0;
return rv2514; }
}
l_P_2508 = ((*(R30 *)rt_nil_check(l_P_2508))).f_NEXT;
l_Q_2509 = ((*(R30 *)rt_nil_check(l_Q_2509))).f_NEXT;
}
RT_B_TICK();
} L_end2511: ;
{ rt_int rv2515 = ((l_P_2508 == NULL) && (l_Q_2509 == NULL));
return rv2515; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { RT_B_TICK(); 
rt_int l_N_2516; memset(&l_N_2516, 0, sizeof l_N_2516);
l_N_2516 = ((rt_int)0LL);
R30 * l_P_2517; memset(&l_P_2517, 0, sizeof l_P_2517);
l_P_2517 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_2517 == NULL)) goto L_end2518;
{
l_N_2516 = rt_add(l_N_2516, ((rt_int)1LL));
l_P_2517 = ((*(R30 *)rt_nil_check(l_P_2517))).f_NEXT;
}
RT_B_TICK();
} L_end2518: ;
{ rt_int rv2519 = l_N_2516;
return rv2519; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R29 * p_ARGS) { RT_B_TICK(); 
R30 * l_P_2520; memset(&l_P_2520, 0, sizeof l_P_2520);
l_P_2520 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R29 * l_A_2521; memset(&l_A_2521, 0, sizeof l_A_2521);
l_A_2521 = p_ARGS;
rt_int l_EXACT_2522; memset(&l_EXACT_2522, 0, sizeof l_EXACT_2522);
l_EXACT_2522 = 1;
R21 * l_BS_2523; memset(&l_BS_2523, 0, sizeof l_BS_2523);
l_BS_2523 = r_NEW_BINDS();
R22 * l_PT_2524; memset(&l_PT_2524, 0, sizeof l_PT_2524);
for (;;) {
if ((l_P_2520 == NULL)) goto L_end2525;
{
l_PT_2524 = r_FORMAL_VIEW(p_R, l_P_2520);
if ((!(((*(R30 *)rt_nil_check(l_P_2520))).f_MODE == ((*(R29 *)rt_nil_check(l_A_2521))).f_MODE)))
{
{ rt_int rv2526 = ((rt_int)0LL);
return rv2526; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R30 *)rt_nil_check(l_P_2520))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_2520, l_A_2521, l_BS_2523)))
{
{ rt_int rv2527 = ((rt_int)0LL);
return rv2527; }
}
}
else if ((l_PT_2524 == NULL))
{
if (((*(R29 *)rt_nil_check(l_A_2521))).f_HAVE)
{
if ((!((((*(R29 *)rt_nil_check(l_A_2521))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv2528 = ((rt_int)0LL);
return rv2528; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_2521))
{
if ((!r_LITERAL_FITS(((*(R29 *)rt_nil_check(l_A_2521))).f_E, l_PT_2524)))
{
{ rt_int rv2529 = ((rt_int)0LL);
return rv2529; }
}
}
else
{
r_TYPE_ARG(l_A_2521);
{
R22 * l_AT_2530; memset(&l_AT_2530, 0, sizeof l_AT_2530);
l_AT_2530 = (((*(R29 *)rt_nil_check(l_A_2521))).f_V).f_T;
if ((!((r_SAME_CLASS(l_PT_2524, l_AT_2530) || (((((*(R22 *)rt_nil_check(l_AT_2530))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2524)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv2531 = ((rt_int)0LL);
return rv2531; }
}
if (((((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2524)))).f_KIND == g_T_XFIX) || (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2530)))).f_KIND == g_T_XFIX))) && (!r_SAME_XFIX(l_PT_2524, l_AT_2530))))
{
{ rt_int rv2532 = ((rt_int)0LL);
return rv2532; }
}
if ((((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2524)))).f_GEN).f_LEN > ((rt_int)0LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2530)))).f_MLEN).f_OK))
{
{
R9 l_KEY_2533; memset(&l_KEY_2533, 0, sizeof l_KEY_2533);
S_R9(&l_KEY_2533, r_QMKN(rt_str("%", 1), ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2524)))).f_GEN), 0);
R21 * l_B_2534; memset(&l_B_2534, 0, sizeof l_B_2534);
l_B_2534 = r_FIND_BIND(((*(R21 *)rt_nil_check(l_BS_2523))).f_NEXT, l_KEY_2533);
if ((!(l_B_2534 == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(l_B_2534))).f_MV == (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2530)))).f_MLEN).f_V)))
{
{ rt_int rv2535 = ((rt_int)0LL);
return rv2535; }
}
}
else
{
r_ADD_BIND(l_KEY_2533, NULL, ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2530)))).f_MLEN, NULL, l_BS_2523);
}
}
}
if ((!r_SAME_TYPE(l_PT_2524, l_AT_2530)))
{
if ((((*(R30 *)rt_nil_check(l_P_2520))).f_MODE == g_M_INOUT))
{
{ rt_int rv2536 = ((rt_int)0LL);
return rv2536; }
}
l_EXACT_2522 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2530)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2524)))).f_KIND == g_T_INT)))
{
if (((((*(R30 *)rt_nil_check(l_P_2520))).f_MODE == g_M_IN) && (((*(R22 *)rt_nil_check(l_AT_2530))).f_SCALE > ((*(R22 *)rt_nil_check(l_PT_2524))).f_SCALE)))
{
{ rt_int rv2537 = ((rt_int)0LL);
return rv2537; }
}
else if (((((*(R30 *)rt_nil_check(l_P_2520))).f_MODE == g_M_OUT) && (((*(R22 *)rt_nil_check(l_PT_2524))).f_SCALE > ((*(R22 *)rt_nil_check(l_AT_2530))).f_SCALE)))
{
{ rt_int rv2538 = ((rt_int)0LL);
return rv2538; }
}
}
}
}
l_P_2520 = ((*(R30 *)rt_nil_check(l_P_2520))).f_NEXT;
l_A_2521 = ((*(R29 *)rt_nil_check(l_A_2521))).f_NEXT;
}
RT_B_TICK();
} L_end2525: ;
if (l_EXACT_2522)
{
{ rt_int rv2539 = ((rt_int)2LL);
return rv2539; }
}
{ rt_int rv2540 = ((rt_int)1LL);
return rv2540; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R17 * p_E, R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_2541; memset(&l_RT_2541, 0, sizeof l_RT_2541);
l_RT_2541 = r_REAL_TYPE(p_T);
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_2541))).f_KIND == g_T_ENUM))
{
{ rt_int rv2542 = (!(r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_RT_2541) == NULL));
return rv2542; }
}
{ rt_int rv2543 = 0;
return rv2543; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv2544 = (((*(R22 *)rt_nil_check(l_RT_2541))).f_KIND == g_T_PTR);
return rv2544; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv2545 = (((*(R22 *)rt_nil_check(l_RT_2541))).f_KIND == g_T_REC);
return rv2545; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv2546 = (((*(R22 *)rt_nil_check(l_RT_2541))).f_KIND == g_T_ARR);
return rv2546; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv2547 = (((*(R22 *)rt_nil_check(l_RT_2541))).f_KIND == g_T_INT);
return rv2547; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv2548 = ((((*(R22 *)rt_nil_check(l_RT_2541))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_2541))).f_KIND == g_T_SEM));
return rv2548; }
}
{ rt_int rv2549 = 0;
return rv2549; }
rt_raise(RT_X_INIT);
}
static R12 * r_ARG_ROOT(R17 * p_E) { RT_B_TICK(); 
R17 * l_N_2550; memset(&l_N_2550, 0, sizeof l_N_2550);
l_N_2550 = p_E;
for (;;) {
if ((l_N_2550 == NULL)) goto L_end2551;
{
if (((((*(R17 *)rt_nil_check(l_N_2550))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_N_2550))).f_KIND == g_N_APPLY)))
{
{
R12 * l_Y_2552; memset(&l_Y_2552, 0, sizeof l_Y_2552);
l_Y_2552 = r_LOOKUP(((*(R17 *)rt_nil_check(l_N_2550))).f_NAME);
if ((l_Y_2552 == NULL))
{
{ R12 * rv2553 = NULL;
return rv2553; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2552))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2554 = NULL;
return rv2554; }
}
{ R12 * rv2555 = l_Y_2552;
return rv2555; }
}
}
else if (((((((*(R17 *)rt_nil_check(l_N_2550))).f_KIND == g_N_INDEX) || (((*(R17 *)rt_nil_check(l_N_2550))).f_KIND == g_N_FIELD)) || (((*(R17 *)rt_nil_check(l_N_2550))).f_KIND == g_N_SUBSTR)) || (((*(R17 *)rt_nil_check(l_N_2550))).f_KIND == g_N_PAREN)))
{
l_N_2550 = ((*(R17 *)rt_nil_check(l_N_2550))).f_A;
}
else
{
{ R12 * rv2556 = NULL;
return rv2556; }
}
}
RT_B_TICK();
} L_end2551: ;
{ R12 * rv2557 = NULL;
return rv2557; }
rt_raise(RT_X_INIT);
}
static R17 * r_PATH_OF(R17 * p_E) { RT_B_TICK(); 
R17 * l_N_2558; memset(&l_N_2558, 0, sizeof l_N_2558);
l_N_2558 = p_E;
R17 * l_P_2559; memset(&l_P_2559, 0, sizeof l_P_2559);
l_P_2559 = NULL;
for (;;) {
if ((l_N_2558 == NULL)) goto L_end2560;
{
if ((((*(R17 *)rt_nil_check(l_N_2558))).f_KIND == g_N_FIELD))
{
l_P_2559 = r_NAME_REF(((*(R17 *)rt_nil_check(l_N_2558))).f_NAME, ((rt_int)0LL), NULL, l_P_2559);
l_N_2558 = ((*(R17 *)rt_nil_check(l_N_2558))).f_A;
}
else if (((((*(R17 *)rt_nil_check(l_N_2558))).f_KIND == g_N_INDEX) || (((*(R17 *)rt_nil_check(l_N_2558))).f_KIND == g_N_SUBSTR)))
{
l_P_2559 = r_NAME_REF(r_MKN(rt_str("*", 1)), ((rt_int)0LL), NULL, l_P_2559);
l_N_2558 = ((*(R17 *)rt_nil_check(l_N_2558))).f_A;
}
else if ((((*(R17 *)rt_nil_check(l_N_2558))).f_KIND == g_N_APPLY))
{
l_P_2559 = r_NAME_REF(r_MKN(rt_str("*", 1)), ((rt_int)0LL), NULL, l_P_2559);
{ R17 * rv2561 = l_P_2559;
return rv2561; }
}
else if ((((*(R17 *)rt_nil_check(l_N_2558))).f_KIND == g_N_PAREN))
{
l_N_2558 = ((*(R17 *)rt_nil_check(l_N_2558))).f_A;
}
else
{
{ R17 * rv2562 = l_P_2559;
return rv2562; }
}
}
RT_B_TICK();
} L_end2560: ;
{ R17 * rv2563 = l_P_2559;
return rv2563; }
rt_raise(RT_X_INIT);
}
static rt_int r_DISJOINT_PATHS(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_P_2564; memset(&l_P_2564, 0, sizeof l_P_2564);
l_P_2564 = p_A;
R17 * l_Q_2565; memset(&l_Q_2565, 0, sizeof l_Q_2565);
l_Q_2565 = p_B;
for (;;) {
if (((l_P_2564 == NULL) || (l_Q_2565 == NULL))) goto L_end2566;
{
if ((((!r_TEQS(((*(R17 *)rt_nil_check(l_P_2564))).f_NAME, rt_str("*", 1))) && (!r_TEQS(((*(R17 *)rt_nil_check(l_Q_2565))).f_NAME, rt_str("*", 1)))) && (!r_TEQ(((*(R17 *)rt_nil_check(l_P_2564))).f_NAME, ((*(R17 *)rt_nil_check(l_Q_2565))).f_NAME))))
{
{ rt_int rv2567 = 1;
return rv2567; }
}
l_P_2564 = ((*(R17 *)rt_nil_check(l_P_2564))).f_NEXT;
l_Q_2565 = ((*(R17 *)rt_nil_check(l_Q_2565))).f_NEXT;
}
RT_B_TICK();
} L_end2566: ;
{ rt_int rv2568 = 0;
return rv2568; }
rt_raise(RT_X_INIT);
}
static void r_EXPLICIT_GENERIC_ARGS(R12 * p_Y, R29 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_USED_2569; memset(&l_USED_2569, 0, sizeof l_USED_2569);
l_USED_2569 = NULL;
R30 * l_P_2570; memset(&l_P_2570, 0, sizeof l_P_2570);
l_P_2570 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
R29 * l_A_2571; memset(&l_A_2571, 0, sizeof l_A_2571);
l_A_2571 = p_ARGS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_DECL == NULL))
{
return;
}
if (((!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_B == NULL)))
{
return;
}
r_NAMES_IN(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_B, &l_USED_2569);
for (;;) {
if (((l_P_2570 == NULL) || (l_A_2571 == NULL))) goto L_end2572;
{
if ((((((*(R30 *)rt_nil_check(l_P_2570))).f_MODE == g_M_IN) && r_IN_IDENTS(l_USED_2569, ((*(R30 *)rt_nil_check(l_P_2570))).f_NAME)) && (!(((*(R29 *)rt_nil_check(l_A_2571))).f_E == NULL))))
{
if ((!r_CONSTANT_EXPR(((*(R29 *)rt_nil_check(l_A_2571))).f_E)))
{
r_FAILT(p_LINE, rt_str("the argument of an explicit generic parameter is a constant or a constant expression (5): ", 90), ((*(R30 *)rt_nil_check(l_P_2570))).f_NAME);
}
}
l_P_2570 = ((*(R30 *)rt_nil_check(l_P_2570))).f_NEXT;
l_A_2571 = ((*(R29 *)rt_nil_check(l_A_2571))).f_NEXT;
}
RT_B_TICK();
} L_end2572: ;
}
static void r_NAMES_IN(R17 * p_L, R17 * *p_HEAD) { RT_B_TICK(); 
R17 * l_N_2573; memset(&l_N_2573, 0, sizeof l_N_2573);
l_N_2573 = p_L;
for (;;) {
if ((l_N_2573 == NULL)) goto L_end2574;
{
if (((((*(R17 *)rt_nil_check(l_N_2573))).f_KIND == g_N_NAME) || (((((*(R17 *)rt_nil_check(l_N_2573))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(l_N_2573))).f_A == NULL)))))
{
(*p_HEAD) = r_NAME_REF(((*(R17 *)rt_nil_check(l_N_2573))).f_NAME, ((rt_int)0LL), NULL, (*p_HEAD));
}
r_NAMES_IN(((*(R17 *)rt_nil_check(l_N_2573))).f_A, &(*p_HEAD));
r_NAMES_IN(((*(R17 *)rt_nil_check(l_N_2573))).f_B, &(*p_HEAD));
r_NAMES_IN(((*(R17 *)rt_nil_check(l_N_2573))).f_C, &(*p_HEAD));
l_N_2573 = ((*(R17 *)rt_nil_check(l_N_2573))).f_NEXT;
}
RT_B_TICK();
} L_end2574: ;
}
static rt_int r_CONSTANT_EXPR(R17 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv2575 = 1;
return rv2575; }
}
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY)))
{
{
R12 * l_Y_2576; memset(&l_Y_2576, 0, sizeof l_Y_2576);
l_Y_2576 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2576 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2576))).f_KIND == g_Y_ROUTINE))
{
if ((!(((*(R12 *)rt_nil_check(r_ORIGINAL(l_Y_2576)))).f_USES == NULL)))
{
{ rt_int rv2577 = 0;
return rv2577; }
}
}
if (((((*(R12 *)rt_nil_check(l_Y_2576))).f_KIND == g_Y_VAR) && (!((*(R12 *)rt_nil_check(l_Y_2576))).f_INPUT)))
{
{ rt_int rv2578 = 0;
return rv2578; }
}
}
}
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_DEREF))
{
{ rt_int rv2579 = 0;
return rv2579; }
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD))
{
{ rt_int rv2580 = r_CONSTANT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A);
return rv2580; }
}
{ rt_int rv2581 = ((r_CONSTANT_LIST(((*(R17 *)rt_nil_check(p_E))).f_A) && r_CONSTANT_LIST(((*(R17 *)rt_nil_check(p_E))).f_B)) && r_CONSTANT_LIST(((*(R17 *)rt_nil_check(p_E))).f_C));
return rv2581; }
rt_raise(RT_X_INIT);
}
static rt_int r_CONSTANT_LIST(R17 * p_L) { RT_B_TICK(); 
R17 * l_N_2582; memset(&l_N_2582, 0, sizeof l_N_2582);
l_N_2582 = p_L;
for (;;) {
if ((l_N_2582 == NULL)) goto L_end2583;
{
if ((!r_CONSTANT_EXPR(l_N_2582)))
{
{ rt_int rv2584 = 0;
return rv2584; }
}
l_N_2582 = ((*(R17 *)rt_nil_check(l_N_2582))).f_NEXT;
}
RT_B_TICK();
} L_end2583: ;
{ rt_int rv2585 = 1;
return rv2585; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKED_ELEMENT(R17 * p_E) { RT_B_TICK(); 
R22 * l_AT_2586; memset(&l_AT_2586, 0, sizeof l_AT_2586);
l_AT_2586 = NULL;
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
{
R12 * l_Y_2587; memset(&l_Y_2587, 0, sizeof l_Y_2587);
l_Y_2587 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_2587 == NULL))
{
{ rt_int rv2588 = 0;
return rv2588; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2587))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(l_Y_2587))).f_T == NULL)))
{
{ rt_int rv2589 = 0;
return rv2589; }
}
l_AT_2586 = r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2587))).f_T);
}
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_INDEX))
{
{
R14 l_SAVED_CODE_2590; memset(&l_SAVED_CODE_2590, 0, sizeof l_SAVED_CODE_2590);
S_R14(&l_SAVED_CODE_2590, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
l_AT_2586 = r_REAL_TYPE((r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL)).f_T);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2590, 0);
}
}
else
{
{ rt_int rv2591 = 0;
return rv2591; }
}
if ((!(((*(R22 *)rt_nil_check(l_AT_2586))).f_KIND == g_T_ARR)))
{
{ rt_int rv2592 = 0;
return rv2592; }
}
{ rt_int rv2593 = (!(r_PACKING_OF(l_AT_2586) == ((rt_int)2LL)));
return rv2593; }
rt_raise(RT_X_INIT);
}
static void r_NO_ALIASING(R12 * p_Y, R29 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R29 * l_A_2594; memset(&l_A_2594, 0, sizeof l_A_2594);
l_A_2594 = p_ARGS;
for (;;) {
if ((l_A_2594 == NULL)) goto L_end2595;
{
if (((((*(R29 *)rt_nil_check(l_A_2594))).f_MODE == g_M_INOUT) && (!(((*(R29 *)rt_nil_check(l_A_2594))).f_E == NULL))))
{
if (r_PACKED_ELEMENT(((*(R29 *)rt_nil_check(l_A_2594))).f_E))
{
r_FAIL(p_LINE, rt_str("only elements of ARRAY_STD arrays are inout arguments (3.8.3)", 61));
}
}
l_A_2594 = ((*(R29 *)rt_nil_check(l_A_2594))).f_NEXT;
}
RT_B_TICK();
} L_end2595: ;
l_A_2594 = p_ARGS;
for (;;) {
if ((l_A_2594 == NULL)) goto L_end2596;
{
if (((((((*(R29 *)rt_nil_check(l_A_2594))).f_MODE == g_M_INOUT) || (((*(R29 *)rt_nil_check(l_A_2594))).f_MODE == g_M_OUT))) && (!(((*(R29 *)rt_nil_check(l_A_2594))).f_E == NULL))))
{
{
R12 * l_V_2597; memset(&l_V_2597, 0, sizeof l_V_2597);
l_V_2597 = r_ARG_ROOT(((*(R29 *)rt_nil_check(l_A_2594))).f_E);
R29 * l_B_2598; memset(&l_B_2598, 0, sizeof l_B_2598);
l_B_2598 = ((*(R29 *)rt_nil_check(l_A_2594))).f_NEXT;
if ((!(l_V_2597 == NULL)))
{
for (;;) {
if ((l_B_2598 == NULL)) goto L_end2599;
{
if (((((*(R29 *)rt_nil_check(l_B_2598))).f_MODE == ((*(R29 *)rt_nil_check(l_A_2594))).f_MODE) && (!(((*(R29 *)rt_nil_check(l_B_2598))).f_E == NULL))))
{
if (((r_ARG_ROOT(((*(R29 *)rt_nil_check(l_B_2598))).f_E) == l_V_2597) && (!r_DISJOINT_PATHS(r_PATH_OF(((*(R29 *)rt_nil_check(l_A_2594))).f_E), r_PATH_OF(((*(R29 *)rt_nil_check(l_B_2598))).f_E)))))
{
r_FAILT(p_LINE, rt_str("a variable is more than one inout or output argument (4.3.3): ", 62), ((*(R12 *)rt_nil_check(l_V_2597))).f_NAME);
}
}
l_B_2598 = ((*(R29 *)rt_nil_check(l_B_2598))).f_NEXT;
}
RT_B_TICK();
} L_end2599: ;
if (((((*(R29 *)rt_nil_check(l_A_2594))).f_MODE == g_M_INOUT) && (!(((*(R12 *)rt_nil_check(p_Y))).f_USES == NULL))))
{
{
R17 * l_U_2600; memset(&l_U_2600, 0, sizeof l_U_2600);
l_U_2600 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_2600 == NULL)) goto L_end2601;
{
if ((r_TEQ(((*(R17 *)rt_nil_check(l_U_2600))).f_NAME, ((*(R12 *)rt_nil_check(l_V_2597))).f_NAME) && (((*(R17 *)rt_nil_check(l_U_2600))).f_IV == ((*(R12 *)rt_nil_check(l_V_2597))).f_OWNER)))
{
r_FAILT(p_LINE, rt_str("an inout argument the procedure also imports (4.3.3): ", 54), ((*(R12 *)rt_nil_check(l_V_2597))).f_NAME);
}
l_U_2600 = ((*(R17 *)rt_nil_check(l_U_2600))).f_NEXT;
}
RT_B_TICK();
} L_end2601: ;
}
}
}
}
}
l_A_2594 = ((*(R29 *)rt_nil_check(l_A_2594))).f_NEXT;
}
RT_B_TICK();
} L_end2596: ;
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
R21 * l_BS_2602; memset(&l_BS_2602, 0, sizeof l_BS_2602);
l_BS_2602 = r_NEW_BINDS();
R30 * l_P_2603; memset(&l_P_2603, 0, sizeof l_P_2603);
l_P_2603 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R29 * l_A_2604; memset(&l_A_2604, 0, sizeof l_A_2604);
l_A_2604 = p_ARGS;
rt_int l_SOME_M_2605; memset(&l_SOME_M_2605, 0, sizeof l_SOME_M_2605);
l_SOME_M_2605 = 0;
rt_int l_N_2606; memset(&l_N_2606, 0, sizeof l_N_2606);
l_N_2606 = ((rt_int)0LL);
for (;;) {
if (((l_P_2603 == NULL) || (l_A_2604 == NULL))) goto L_end2607;
{
if ((((((*(R30 *)rt_nil_check(l_P_2603))).f_MODE == g_M_IN) && (!(((*(R29 *)rt_nil_check(l_A_2604))).f_E == NULL))) && (!(((*(R30 *)rt_nil_check(l_P_2603))).f_T == NULL))))
{
{
R22 * l_RT_2608; memset(&l_RT_2608, 0, sizeof l_RT_2608);
l_RT_2608 = r_REAL_TYPE(((*(R30 *)rt_nil_check(l_P_2603))).f_T);
R25 l_M_2609; memset(&l_M_2609, 0, sizeof l_M_2609);
S_R25(&l_M_2609, r_NO_MVAL(), 0);
if (((((*(R22 *)rt_nil_check(l_RT_2608))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2608))).f_SCALE == ((rt_int)0LL))))
{
if (r_MANIFEST_INT(((*(R29 *)rt_nil_check(l_A_2604))).f_E))
{
S_R25(&l_M_2609, r_MANIFEST(((*(R29 *)rt_nil_check(l_A_2604))).f_E), 0);
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_2608))).f_KIND == g_T_BOOL))
{
S_R25(&l_M_2609, r_MANIFEST(((*(R29 *)rt_nil_check(l_A_2604))).f_E), 0);
}
else if ((((*(R22 *)rt_nil_check(l_RT_2608))).f_KIND == g_T_ENUM))
{
S_R25(&l_M_2609, r_ENUM_MANIFEST(((*(R29 *)rt_nil_check(l_A_2604))).f_E, l_RT_2608), 0);
}
if ((l_M_2609).f_OK)
{
r_ADD_BIND(r_QMKN(rt_str("=", 1), ((*(R30 *)rt_nil_check(l_P_2603))).f_NAME), NULL, l_M_2609, NULL, l_BS_2602);
l_SOME_M_2605 = 1;
}
}
}
l_P_2603 = ((*(R30 *)rt_nil_check(l_P_2603))).f_NEXT;
l_A_2604 = ((*(R29 *)rt_nil_check(l_A_2604))).f_NEXT;
}
RT_B_TICK();
} L_end2607: ;
if ((!l_SOME_M_2605))
{
r_NEED_BODY(p_G);
{ R12 * rv2610 = p_G;
return rv2610; }
}
{
R12 * l_I_2611; memset(&l_I_2611, 0, sizeof l_I_2611);
l_I_2611 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2611 == NULL)) goto L_end2612;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2611))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_BS_2602))).f_NEXT))
{
{ R12 * rv2613 = l_I_2611;
return rv2613; }
}
l_N_2606 = rt_add(l_N_2606, ((rt_int)1LL));
l_I_2611 = ((*(R12 *)rt_nil_check(l_I_2611))).f_INSTANCES;
}
RT_B_TICK();
} L_end2612: ;
}
if ((l_N_2606 > ((rt_int)256LL)))
{
r_FAILT(p_LINE, rt_str("the INLINE expansions of the routine do not end (4.3.1): ", 57), ((*(R12 *)rt_nil_check(p_G))).f_NAME);
}
{ R12 * rv2614 = r_NEW_INSTANCE(p_G, ((*(R21 *)rt_nil_check(l_BS_2602))).f_NEXT, p_ARGS);
return rv2614; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R29 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_VISIBLE_2615; memset(&l_VISIBLE_2615, 0, sizeof l_VISIBLE_2615);
l_VISIBLE_2615 = r_SEG_VISIBLE(p_Y0, p_LINE);
R12 * l_Y_2616; memset(&l_Y_2616, 0, sizeof l_Y_2616);
l_Y_2616 = r_ORIGINAL(p_Y0);
R30 * l_P_2617; memset(&l_P_2617, 0, sizeof l_P_2617);
R29 * l_A_2618; memset(&l_A_2618, 0, sizeof l_A_2618);
l_A_2618 = p_ARGS;
R9 l_C_2619; memset(&l_C_2619, 0, sizeof l_C_2619);
S_R9(&l_C_2619, r_MK(rt_str("", 0)), 0);
R9 l_SEP_2620; memset(&l_SEP_2620, 0, sizeof l_SEP_2620);
S_R9(&l_SEP_2620, r_MK(rt_str("", 0)), 0);
R9 l_PRE_2621; memset(&l_PRE_2621, 0, sizeof l_PRE_2621);
S_R9(&l_PRE_2621, r_MK(rt_str("", 0)), 0);
R9 l_POST_2622; memset(&l_POST_2622, 0, sizeof l_POST_2622);
S_R9(&l_POST_2622, r_MK(rt_str("", 0)), 0);
rt_int l_SHARED_2623; memset(&l_SHARED_2623, 0, sizeof l_SHARED_2623);
l_SHARED_2623 = 0;
R22 * l_PT_2624; memset(&l_PT_2624, 0, sizeof l_PT_2624);
if ((!(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
if (((((*(R12 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R))).f_DECL == ((*(R12 *)rt_nil_check(l_Y_2616))).f_DECL) && (!(((*(R12 *)rt_nil_check(l_Y_2616))).f_DECL == NULL))))
{
if ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2616))).f_DECL))).f_FL == ((rt_int)1LL)))
{
r_FAILT(p_LINE, rt_str("an INLINE routine cannot be recursive (4.3.1): ", 47), ((*(R12 *)rt_nil_check(l_Y_2616))).f_NAME);
}
}
}
if (((*(R12 *)rt_nil_check(l_Y_2616))).f_GENERIC)
{
l_Y_2616 = r_INSTANCE(l_Y_2616, p_ARGS, p_LINE);
}
else if (((!(((*(R12 *)rt_nil_check(l_Y_2616))).f_DECL == NULL)) && (((*(R12 *)rt_nil_check(l_Y_2616))).f_BINDINGS == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2616))).f_DECL))).f_KIND == g_N_ROUTINE) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2616))).f_DECL))).f_FL == ((rt_int)1LL))))
{
l_Y_2616 = r_INLINE_INSTANCE(l_Y_2616, p_ARGS, p_LINE);
}
}
r_CHECK_CALL_IMPORTS(l_Y_2616, p_LINE);
r_NO_ALIASING(l_Y_2616, p_ARGS, p_LINE);
r_EXPLICIT_GENERIC_ARGS(l_Y_2616, p_ARGS, p_LINE);
if ((!(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
if (((((*(R12 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R))).f_DECL == ((*(R12 *)rt_nil_check(l_Y_2616))).f_DECL) && (!(((*(R12 *)rt_nil_check(l_Y_2616))).f_DECL == NULL))))
{
if ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2616))).f_DECL))).f_FL == ((rt_int)1LL)))
{
r_FAILT(p_LINE, rt_str("an INLINE routine cannot be recursive (4.3.1): ", 47), ((*(R12 *)rt_nil_check(l_Y_2616))).f_NAME);
}
{
R17 * l_U_2625; memset(&l_U_2625, 0, sizeof l_U_2625);
l_U_2625 = ((*(R12 *)rt_nil_check(l_Y_2616))).f_USES;
for (;;) {
if ((l_U_2625 == NULL)) goto L_end2626;
{
if ((!(r_LOOKUP(((*(R17 *)rt_nil_check(l_U_2625))).f_NAME) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_LOOKUP(((*(R17 *)rt_nil_check(l_U_2625))).f_NAME)))).f_LEVEL > ((rt_int)0LL)))
{
r_FAILT(p_LINE, rt_str("a recursive routine imports only static data (4.3.1): ", 54), ((*(R17 *)rt_nil_check(l_U_2625))).f_NAME);
}
}
l_U_2625 = ((*(R17 *)rt_nil_check(l_U_2625))).f_NEXT;
}
RT_B_TICK();
} L_end2626: ;
}
}
}
if ((!(r_CUR_GENERIC() == NULL)))
{
{
R29 * l_Q_2627; memset(&l_Q_2627, 0, sizeof l_Q_2627);
l_Q_2627 = p_ARGS;
rt_int l_GEN_ARG_2628; memset(&l_GEN_ARG_2628, 0, sizeof l_GEN_ARG_2628);
l_GEN_ARG_2628 = 0;
for (;;) {
if ((l_Q_2627 == NULL)) goto L_end2629;
{
if (((*(R29 *)rt_nil_check(l_Q_2627))).f_HAVE)
{
if ((!((((*(R29 *)rt_nil_check(l_Q_2627))).f_V).f_T == NULL)))
{
if (((((*(R22 *)rt_nil_check((((*(R29 *)rt_nil_check(l_Q_2627))).f_V).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
l_GEN_ARG_2628 = 1;
}
}
}
l_Q_2627 = ((*(R29 *)rt_nil_check(l_Q_2627))).f_NEXT;
}
RT_B_TICK();
} L_end2629: ;
if (l_GEN_ARG_2628)
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2616))).f_BINDINGS == NULL)))
{
r_REQUIRE_WHERE_SUBSET(l_Y_2616, p_LINE);
}
else
{
r_REQUIRE_WHERE(r_BASE_NAME(l_Y_2616), p_LINE);
}
}
}
}
{
R17 * l_U_2630; memset(&l_U_2630, 0, sizeof l_U_2630);
l_U_2630 = ((*(R12 *)rt_nil_check(l_Y_2616))).f_USES;
for (;;) {
if ((l_U_2630 == NULL)) goto L_end2631;
{
{
R12 * l_H_2632; memset(&l_H_2632, 0, sizeof l_H_2632);
l_H_2632 = r_LOOKUP(((*(R17 *)rt_nil_check(l_U_2630))).f_NAME);
if ((!(l_H_2632 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_H_2632))).f_WITHV == ((rt_int)2LL)) && (((*(R12 *)rt_nil_check(l_H_2632))).f_OWNER == ((*(R17 *)rt_nil_check(l_U_2630))).f_IV)))
{
r_FAIL2(p_LINE, rt_str("the routine ", 12), ((*(R12 *)rt_nil_check(l_Y_2616))).f_NAME, rt_str(" imports ", 9), ((*(R17 *)rt_nil_check(l_U_2630))).f_NAME, rt_str(", which a WITH NAMING hides (4.5.4)", 35));
}
}
}
l_U_2630 = ((*(R17 *)rt_nil_check(l_U_2630))).f_NEXT;
}
RT_B_TICK();
} L_end2631: ;
}
if (((((((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL)) || (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL)))) && (!(((*(R12 *)rt_nil_check(l_Y_2616))).f_USES == NULL))))
{
r_FAILT(p_LINE, rt_str("a record-spec is a closed scope: no function importing a variable (3.9.1): ", 75), ((*(R12 *)rt_nil_check(l_Y_2616))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_2616))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_C_2619, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_2616))).f_LEVEL), 0);
S_R9(&l_SEP_2620, r_MK(rt_str(", ", 2)), 0);
}
{
R29 * l_Q_2633; memset(&l_Q_2633, 0, sizeof l_Q_2633);
l_Q_2633 = p_ARGS;
for (;;) {
if ((l_Q_2633 == NULL)) goto L_end2634;
{
if ((!(((*(R29 *)rt_nil_check(l_Q_2633))).f_MODE == g_M_IN)))
{
l_SHARED_2623 = 1;
}
l_Q_2633 = ((*(R29 *)rt_nil_check(l_Q_2633))).f_NEXT;
}
RT_B_TICK();
} L_end2634: ;
if ((!(((*(R12 *)rt_nil_check(l_Y_2616))).f_USES == NULL)))
{
l_SHARED_2623 = 1;
}
}
l_P_2617 = ((*(R12 *)rt_nil_check(l_Y_2616))).f_PARAMS;
for (;;) {
if ((l_P_2617 == NULL)) goto L_end2635;
{
if ((l_A_2618 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
l_PT_2624 = r_FORMAL_VIEW(l_Y_2616, l_P_2617);
if ((l_PT_2624 == NULL))
{
}
else if ((((*(R30 *)rt_nil_check(l_P_2617))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2624)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_2636; memset(&l_V_2636, 0, sizeof l_V_2636);
R9 l_CV_2637; memset(&l_CV_2637, 0, sizeof l_CV_2637);
if ((((*(R29 *)rt_nil_check(l_A_2618))).f_HAVE && (!r_WANT_SENSITIVE(l_A_2618))))
{
S_R26(&l_V_2636, ((*(R29 *)rt_nil_check(l_A_2618))).f_V, 0);
}
else
{
S_R26(&l_V_2636, r_EXPR(((*(R29 *)rt_nil_check(l_A_2618))).f_E, l_PT_2624), 0);
}
S_R9(&l_CV_2637, r_CONVERT(l_V_2636, l_PT_2624, p_LINE, r_NO_TEXT()), 0);
if (((l_SHARED_2623 && (l_V_2636).f_LVAL) && r_IS_STRUCTURED(l_PT_2624)))
{
S_R9(&l_CV_2637, r_COPY_OF(l_PT_2624, l_CV_2637), 0);
}
S_R9(&l_C_2619, r_FMT3(rt_str("@@@", 3), l_C_2619, l_SEP_2620, l_CV_2637), 0);
S_R9(&l_SEP_2620, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_2638; memset(&l_V_2638, 0, sizeof l_V_2638);
if (((*(R29 *)rt_nil_check(l_A_2618))).f_HAVE)
{
S_R26(&l_V_2638, ((*(R29 *)rt_nil_check(l_A_2618))).f_V, 0);
}
else
{
S_R26(&l_V_2638, r_EXPR(((*(R29 *)rt_nil_check(l_A_2618))).f_E, l_PT_2624), 0);
}
if (((!(((*(R29 *)rt_nil_check(l_A_2618))).f_E == NULL)) && (!(l_V_2638).f_LVAL)))
{
if ((((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(l_A_2618))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(l_A_2618))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_2638, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_2638).f_C), (l_V_2638).f_T), 0);
(l_V_2638).f_LVAL = 1;
}
}
if ((!(l_V_2638).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(l_PT_2624, (l_V_2638).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(l_PT_2624));
}
if (((((*(R30 *)rt_nil_check(l_P_2617))).f_MODE == g_M_INOUT) && (!((r_SAME_TYPE(l_PT_2624, (l_V_2638).f_T) && r_SAME_RANGE(l_PT_2624, (l_V_2638).f_T))))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
if (((((*(R30 *)rt_nil_check(l_P_2617))).f_MODE == g_M_OUT) && (!((r_SAME_TYPE(l_PT_2624, (l_V_2638).f_T) && r_SAME_RANGE(l_PT_2624, (l_V_2638).f_T))))))
{
{
R9 l_TMP_2639; memset(&l_TMP_2639, 0, sizeof l_TMP_2639);
S_R9(&l_TMP_2639, r_NEW_NAME(rt_str("oa", 2)), 0);
R9 l_AP_2640; memset(&l_AP_2640, 0, sizeof l_AP_2640);
S_R9(&l_AP_2640, r_NEW_NAME(rt_str("op", 2)), 0);
S_R9(&l_PRE_2621, r_FMT4(rt_str("@ @ *@ = &@;", 12), l_PRE_2621, r_CTYPE((l_V_2638).f_T), l_AP_2640, (l_V_2638).f_C), 0);
S_R9(&l_PRE_2621, r_FMT4(rt_str("@ @ @ = @;", 10), l_PRE_2621, r_CTYPE(l_PT_2624), l_TMP_2639, r_COPY_OF((l_V_2638).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2640))), 0);
S_R9(&l_POST_2622, r_FMT2(rt_str("@ @", 3), l_POST_2622, r_STORE_CODE((l_V_2638).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2640), r_MKET(l_TMP_2639, l_PT_2624), p_LINE, r_NO_TEXT())), 0);
S_R9(&l_C_2619, r_FMT3(rt_str("@@&@", 4), l_C_2619, l_SEP_2620, l_TMP_2639), 0);
}
}
else
{
S_R9(&l_C_2619, r_FMT3(rt_str("@@&@", 4), l_C_2619, l_SEP_2620, (l_V_2638).f_C), 0);
}
S_R9(&l_SEP_2620, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_2618 = ((*(R29 *)rt_nil_check(l_A_2618))).f_NEXT;
l_P_2617 = ((*(R30 *)rt_nil_check(l_P_2617))).f_NEXT;
}
RT_B_TICK();
} L_end2635: ;
if ((!(l_A_2618 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
if (((l_PRE_2621).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2641 = r_MKET(r_FMT4(rt_str("({ @ @(@); @ })", 15), l_PRE_2621, ((*(R12 *)rt_nil_check(l_Y_2616))).f_ACCESS, l_C_2619, l_POST_2622), r_RESULT_VIEW(l_Y_2616));
return rv2641; }
}
{ R26 rv2642 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_2616))).f_ACCESS, l_C_2619), r_RESULT_VIEW(l_Y_2616));
return rv2642; }
rt_raise(RT_X_INIT);
}
static R22 * r_FORMAL_VIEW(R12 * p_R, R30 * p_P) { RT_B_TICK(); 
if (((((*(R30 *)rt_nil_check(p_P))).f_T == NULL) || (((*(R30 *)rt_nil_check(p_P))).f_TS == NULL)))
{
{ R22 * rv2643 = ((*(R30 *)rt_nil_check(p_P))).f_T;
return rv2643; }
}
{ R22 * rv2644 = r_OUTSIDE_VIEW(p_R, ((*(R30 *)rt_nil_check(p_P))).f_TS, ((*(R30 *)rt_nil_check(p_P))).f_T);
return rv2644; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESULT_VIEW(R12 * p_R) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_R))).f_DECL == NULL) || (((*(R12 *)rt_nil_check(p_R))).f_RESULT == NULL)))
{
{ R22 * rv2645 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2645; }
}
if (((!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B == NULL)))
{
{ R22 * rv2646 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2646; }
}
{ R22 * rv2647 = r_OUTSIDE_VIEW(p_R, ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2647; }
rt_raise(RT_X_INIT);
}
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R17 * p_TS, R22 * p_T) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_R))).f_MODL == NULL) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)) || (!(((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))))
{
{ R22 * rv2648 = p_T;
return rv2648; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_R))).f_MODL))
{
{ R22 * rv2649 = p_T;
return rv2649; }
}
{
R12 * l_M_2650; memset(&l_M_2650, 0, sizeof l_M_2650);
l_M_2650 = ((*(R12 *)rt_nil_check(p_R))).f_MODL;
for (;;) {
if ((l_M_2650 == NULL)) goto L_end2651;
{
{
R12 * l_Y_2652; memset(&l_Y_2652, 0, sizeof l_Y_2652);
l_Y_2652 = r_MEMBER_TYPE(l_M_2650, ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_2652 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_2652))).f_EXPORTED)
{
{ R22 * rv2653 = r_ABSTRACT_VIEW(l_Y_2652, p_T);
return rv2653; }
}
{ R22 * rv2654 = p_T;
return rv2654; }
}
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(l_M_2650))).f_MODL))
{
goto L_end2651;
}
l_M_2650 = ((*(R12 *)rt_nil_check(l_M_2650))).f_MODL;
}
RT_B_TICK();
} L_end2651: ;
}
{ R22 * rv2655 = p_T;
return rv2655; }
rt_raise(RT_X_INIT);
}
static R12 * r_MEMBER_TYPE(R12 * p_M, R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2656; memset(&l_Y_2656, 0, sizeof l_Y_2656);
l_Y_2656 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
if (((*(R12 *)rt_nil_check(p_M))).f_BUSY)
{
{
R12 * l_Z_2657; memset(&l_Z_2657, 0, sizeof l_Z_2657);
l_Z_2657 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Z_2657 == NULL)) goto L_end2658;
{
if ((((((*(R12 *)rt_nil_check(l_Z_2657))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Z_2657))).f_MODL == p_M)) && (((*(R12 *)rt_nil_check(l_Z_2657))).f_ORIG == NULL)))
{
{ R12 * rv2659 = l_Z_2657;
return rv2659; }
}
l_Z_2657 = r_LOOKUP_NEXT(l_Z_2657);
}
RT_B_TICK();
} L_end2658: ;
}
{ R12 * rv2660 = NULL;
return rv2660; }
}
for (;;) {
if ((l_Y_2656 == NULL)) goto L_end2661;
{
if (((((*(R12 *)rt_nil_check(l_Y_2656))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_2656))).f_NAME, p_NAME)))
{
{ R12 * rv2662 = l_Y_2656;
return rv2662; }
}
l_Y_2656 = ((*(R12 *)rt_nil_check(l_Y_2656))).f_SNEXT;
}
RT_B_TICK();
} L_end2661: ;
{ R12 * rv2663 = NULL;
return rv2663; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_2664; memset(&l_K_2664, 0, sizeof l_K_2664);
l_K_2664 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND;
{ rt_int rv2665 = ((((l_K_2664 == g_T_STR) || (l_K_2664 == g_T_BITS)) || (l_K_2664 == g_T_ARR)) || (l_K_2664 == g_T_REC));
return rv2665; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2666; memset(&l_RA_2666, 0, sizeof l_RA_2666);
l_RA_2666 = r_REAL_TYPE(p_A);
R22 * l_RB_2667; memset(&l_RB_2667, 0, sizeof l_RB_2667);
l_RB_2667 = r_REAL_TYPE(p_B);
if ((!r_IS_NUMERIC_OR_ENUM(l_RA_2666)))
{
{ rt_int rv2668 = 1;
return rv2668; }
}
if ((((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2666))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2666))).f_HI_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2667))).f_LO_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2667))).f_HI_C)))
{
{ rt_int rv2669 = 1;
return rv2669; }
}
if ((((((*(R22 *)rt_nil_check(l_RA_2666))).f_LO_C).f_LEN == ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_RB_2667))).f_LO_C).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2670 = ((((*(R22 *)rt_nil_check(l_RA_2666))).f_LO_C).f_LEN == (((*(R22 *)rt_nil_check(l_RB_2667))).f_LO_C).f_LEN);
return rv2670; }
}
if (((((((*(R22 *)rt_nil_check(l_RA_2666))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_RB_2667))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_RA_2666))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(l_RB_2667))).f_MHI).f_OK))
{
{ rt_int rv2671 = (((((*(R22 *)rt_nil_check(l_RA_2666))).f_MLO).f_V == (((*(R22 *)rt_nil_check(l_RB_2667))).f_MLO).f_V) && ((((*(R22 *)rt_nil_check(l_RA_2666))).f_MHI).f_V == (((*(R22 *)rt_nil_check(l_RB_2667))).f_MHI).f_V));
return rv2671; }
}
{ rt_int rv2672 = (r_TEQ(((*(R22 *)rt_nil_check(l_RA_2666))).f_LO_C, ((*(R22 *)rt_nil_check(l_RB_2667))).f_LO_C) && r_TEQ(((*(R22 *)rt_nil_check(l_RA_2666))).f_HI_C, ((*(R22 *)rt_nil_check(l_RB_2667))).f_HI_C));
return rv2672; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R17 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2673 = 0;
return rv2673; }
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv2674 = 1;
return rv2674; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2675 = 1;
return rv2675; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2676 = r_STATIC_GENERIC(((*(R17 *)rt_nil_check(p_TS))).f_C);
return rv2676; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_N_REP) && r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_A)))
{
{ rt_int rv2677 = 1;
return rv2677; }
}
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv2678 = r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(p_TS))).f_A);
return rv2678; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv2679 = r_STATIC_GENERIC(((*(R17 *)rt_nil_check(p_TS))).f_A);
return rv2679; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv2680 = ((((*(R17 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv2680; }
}
else if (((r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv2681 = 0;
return rv2681; }
}
{
R12 * l_Y_2682; memset(&l_Y_2682, 0, sizeof l_Y_2682);
l_Y_2682 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
R17 * l_A_2683; memset(&l_A_2683, 0, sizeof l_A_2683);
l_A_2683 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R17 * l_F_2684; memset(&l_F_2684, 0, sizeof l_F_2684);
if ((l_Y_2682 == NULL))
{
{ rt_int rv2685 = 0;
return rv2685; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2682))).f_KIND == g_Y_GEN))
{
{ rt_int rv2686 = 1;
return rv2686; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2682))).f_DECL == NULL))
{
{ rt_int rv2687 = 0;
return rv2687; }
}
l_F_2684 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2682))).f_DECL))).f_A;
for (;;) {
if ((l_F_2684 == NULL)) goto L_end2688;
{
{
R17 * l_N_2689; memset(&l_N_2689, 0, sizeof l_N_2689);
l_N_2689 = ((*(R17 *)rt_nil_check(l_F_2684))).f_A;
for (;;) {
if ((l_N_2689 == NULL)) goto L_end2690;
{
if ((l_A_2683 == NULL))
{
{ rt_int rv2691 = 0;
return rv2691; }
}
if (((((*(R17 *)rt_nil_check(l_F_2684))).f_B == NULL) && ((((((*(R17 *)rt_nil_check(l_A_2683))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_A_2683))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_2683)))))
{
{ rt_int rv2692 = 1;
return rv2692; }
}
l_A_2683 = ((*(R17 *)rt_nil_check(l_A_2683))).f_NEXT;
l_N_2689 = ((*(R17 *)rt_nil_check(l_N_2689))).f_NEXT;
}
RT_B_TICK();
} L_end2690: ;
}
l_F_2684 = ((*(R17 *)rt_nil_check(l_F_2684))).f_NEXT;
}
RT_B_TICK();
} L_end2688: ;
}
}
{ rt_int rv2693 = 0;
return rv2693; }
rt_raise(RT_X_INIT);
}
static R17 * r_OWN_NAMES(R17 * p_R) { RT_B_TICK(); 
R17 * l_HEAD_2694; memset(&l_HEAD_2694, 0, sizeof l_HEAD_2694);
l_HEAD_2694 = NULL;
r_GEN_NAMES(((*(R17 *)rt_nil_check(p_R))).f_A, &l_HEAD_2694);
{ R17 * rv2695 = l_HEAD_2694;
return rv2695; }
rt_raise(RT_X_INIT);
}
static rt_int r_DECLARES_DERIVED(R17 * p_L) { RT_B_TICK(); 
R17 * l_N_2696; memset(&l_N_2696, 0, sizeof l_N_2696);
l_N_2696 = p_L;
for (;;) {
if ((l_N_2696 == NULL)) goto L_end2697;
{
if (((((*(R17 *)rt_nil_check(l_N_2696))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(l_N_2696))).f_NAME).f_LEN > ((rt_int)0LL))))
{
{ rt_int rv2698 = 1;
return rv2698; }
}
if ((((*(R17 *)rt_nil_check(l_N_2696))).f_KIND == g_N_PARAM))
{
if (r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2696))).f_B))
{
{ rt_int rv2699 = 1;
return rv2699; }
}
}
else if ((!(((*(R17 *)rt_nil_check(l_N_2696))).f_KIND == g_TS_GEN)))
{
if ((r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2696))).f_A) || r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2696))).f_C)))
{
{ rt_int rv2700 = 1;
return rv2700; }
}
if ((!(((*(R17 *)rt_nil_check(l_N_2696))).f_B == NULL)))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_2696))).f_B))).f_KIND == g_N_RANGE))
{
if ((r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_2696))).f_B))).f_A) || r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_2696))).f_B))).f_B)))
{
{ rt_int rv2701 = 1;
return rv2701; }
}
}
else if (r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2696))).f_B))
{
{ rt_int rv2702 = 1;
return rv2702; }
}
}
}
l_N_2696 = ((*(R17 *)rt_nil_check(l_N_2696))).f_NEXT;
}
RT_B_TICK();
} L_end2697: ;
{ rt_int rv2703 = 0;
return rv2703; }
rt_raise(RT_X_INIT);
}
static R22 * r_MARK_GENP(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R22 * l_C_2704; memset(&l_C_2704, 0, sizeof l_C_2704);
l_C_2704 = r_COPY_TYP(p_T);
S_R9(&((*(R22 *)rt_nil_check(l_C_2704))).f_GENP, p_NAME, 0);
{ R22 * rv2705 = l_C_2704;
return rv2705; }
rt_raise(RT_X_INIT);
}
static R12 * r_CUR_GENERIC(void) { RT_B_TICK(); 
R19 * l_CS_2706; memset(&l_CS_2706, 0, sizeof l_CS_2706);
l_CS_2706 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
for (;;) {
if ((l_CS_2706 == NULL)) goto L_end2707;
{
if ((!(((*(R19 *)rt_nil_check(l_CS_2706))).f_R == NULL)))
{
if ((!(((*(R12 *)rt_nil_check(((*(R19 *)rt_nil_check(l_CS_2706))).f_R))).f_BINDINGS == NULL)))
{
{ R12 * rv2708 = ((*(R19 *)rt_nil_check(l_CS_2706))).f_R;
return rv2708; }
}
}
l_CS_2706 = ((*(R19 *)rt_nil_check(l_CS_2706))).f_UP;
}
RT_B_TICK();
} L_end2707: ;
{ R12 * rv2709 = NULL;
return rv2709; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_WHERE(R12 * p_G, R9 p_NAME) { RT_B_TICK(); 
R17 * l_N_2710; memset(&l_N_2710, 0, sizeof l_N_2710);
l_N_2710 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
for (;;) {
if ((l_N_2710 == NULL)) goto L_end2711;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_N_2710))).f_A, p_NAME))
{
{ rt_int rv2712 = 1;
return rv2712; }
}
l_N_2710 = ((*(R17 *)rt_nil_check(l_N_2710))).f_NEXT;
}
RT_B_TICK();
} L_end2711: ;
{ rt_int rv2713 = 0;
return rv2713; }
rt_raise(RT_X_INIT);
}
static void r_REQUIRE_WHERE(R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_G_2714; memset(&l_G_2714, 0, sizeof l_G_2714);
l_G_2714 = r_CUR_GENERIC();
if ((l_G_2714 == NULL))
{
return;
}
if ((!r_IN_WHERE(l_G_2714, p_NAME)))
{
r_FAILT(p_LINE, rt_str("invoked with objects of a TYPE parameter, so named in the WHERE clause (5.2): ", 78), p_NAME);
}
}
static void r_REQUIRE_WHERE_SUBSET(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_N_2715; memset(&l_N_2715, 0, sizeof l_N_2715);
l_N_2715 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_D))).f_B;
R12 * l_G_2716; memset(&l_G_2716, 0, sizeof l_G_2716);
l_G_2716 = r_CUR_GENERIC();
if ((l_G_2716 == NULL))
{
return;
}
for (;;) {
if ((l_N_2715 == NULL)) goto L_end2717;
{
{
R17 * l_T_2718; memset(&l_T_2718, 0, sizeof l_T_2718);
l_T_2718 = ((*(R17 *)rt_nil_check(l_N_2715))).f_A;
for (;;) {
if ((l_T_2718 == NULL)) goto L_end2719;
{
if ((!r_IN_WHERE(l_G_2716, ((*(R17 *)rt_nil_check(l_T_2718))).f_NAME)))
{
r_FAILT(p_LINE, rt_str("the WHERE routines of the invoked generic routine are among the caller's (5.2): ", 80), ((*(R17 *)rt_nil_check(l_T_2718))).f_NAME);
}
l_T_2718 = ((*(R17 *)rt_nil_check(l_T_2718))).f_NEXT;
}
RT_B_TICK();
} L_end2719: ;
}
l_N_2715 = ((*(R17 *)rt_nil_check(l_N_2715))).f_NEXT;
}
RT_B_TICK();
} L_end2717: ;
}
static rt_int r_HAS_GEN_ARG(R17 * p_A) { RT_B_TICK(); 
R17 * l_P_2720; memset(&l_P_2720, 0, sizeof l_P_2720);
l_P_2720 = p_A;
for (;;) {
if ((l_P_2720 == NULL)) goto L_end2721;
{
if (((((*(R17 *)rt_nil_check(l_P_2720))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_P_2720))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2722 = 1;
return rv2722; }
}
l_P_2720 = ((*(R17 *)rt_nil_check(l_P_2720))).f_NEXT;
}
RT_B_TICK();
} L_end2721: ;
{ rt_int rv2723 = 0;
return rv2723; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { RT_B_TICK(); 
rt_int l_ENTERED_2724; memset(&l_ENTERED_2724, 0, sizeof l_ENTERED_2724);
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
l_ENTERED_2724 = r_ENTER_MODULE_FOR(p_Y);
{
R12 * l_SAVED_SEG_2725; memset(&l_SAVED_SEG_2725, 0, sizeof l_SAVED_SEG_2725);
l_SAVED_SEG_2725 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(p_Y))).f_HOME;
r_ROUTINE_HEADER1(p_Y);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_2725;
}
if (l_ENTERED_2724)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
}
static void r_ROUTINE_HEADER1(R12 * p_Y) { RT_B_TICK(); 
R17 * l_R_2726; memset(&l_R_2726, 0, sizeof l_R_2726);
l_R_2726 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R17 * l_P_2727; memset(&l_P_2727, 0, sizeof l_P_2727);
R30 * l_TAIL_2728; memset(&l_TAIL_2728, 0, sizeof l_TAIL_2728);
l_TAIL_2728 = NULL;
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_2727 = ((*(R17 *)rt_nil_check(l_R_2726))).f_A;
for (;;) {
if ((l_P_2727 == NULL)) goto L_end2729;
{
if (((((*(R17 *)rt_nil_check(l_P_2727))).f_B == NULL) || r_STATIC_GENERIC(((*(R17 *)rt_nil_check(l_P_2727))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2727 = ((*(R17 *)rt_nil_check(l_P_2727))).f_NEXT;
}
RT_B_TICK();
} L_end2729: ;
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2726))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
{
R17 * l_N_2730; memset(&l_N_2730, 0, sizeof l_N_2730);
l_N_2730 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2726))).f_D))).f_B;
for (;;) {
if ((l_N_2730 == NULL)) goto L_end2731;
{
{
R17 * l_T_2732; memset(&l_T_2732, 0, sizeof l_T_2732);
l_T_2732 = ((*(R17 *)rt_nil_check(l_N_2730))).f_A;
for (;;) {
if ((l_T_2732 == NULL)) goto L_end2733;
{
if ((r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_T_2732))).f_B))).f_A) || r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_T_2732))).f_B))).f_B)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_T_2732))).f_LINE, rt_str("a WHERE template declares no derived generic parameter (5.2): ", 62), ((*(R17 *)rt_nil_check(l_T_2732))).f_NAME);
}
l_T_2732 = ((*(R17 *)rt_nil_check(l_T_2732))).f_NEXT;
}
RT_B_TICK();
} L_end2733: ;
}
l_N_2730 = ((*(R17 *)rt_nil_check(l_N_2730))).f_NEXT;
}
RT_B_TICK();
} L_end2731: ;
}
}
l_P_2727 = ((*(R17 *)rt_nil_check(l_R_2726))).f_A;
for (;;) {
if ((l_P_2727 == NULL)) goto L_end2734;
{
{
R30 * l_PM_2735; memset(&l_PM_2735, 0, sizeof l_PM_2735);
l_PM_2735 = ({ R30 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R30(&(*(R30 *)rt_nil_check(l_PM_2735)), ({ R30 rc2736; memset(&rc2736, 0, sizeof rc2736);  S_R9(&rc2736.f_NAME, ((*(R17 *)rt_nil_check(l_P_2727))).f_NAME, 0); rc2736.f_MODE = ((*(R17 *)rt_nil_check(l_P_2727))).f_IV; rc2736.f_T = NULL; rc2736.f_TS = ((*(R17 *)rt_nil_check(l_P_2727))).f_B; rc2736.f_NEXT = NULL; rc2736; }), 0);
if (((((*(R17 *)rt_nil_check(l_R_2726))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(l_P_2727))).f_IV == g_M_IN))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2727))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!(((*(R17 *)rt_nil_check(l_P_2727))).f_B == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_2727))).f_B))).f_KIND == g_TS_ROUTINE) && (!(((*(R17 *)rt_nil_check(l_P_2727))).f_IV == g_M_IN))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2727))).f_LINE, rt_str("a routine-spec declares only input parameters (5.1)", 51));
}
if (r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_P_2727))).f_B, NULL, r_OWN_NAMES(l_R_2726)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2727))).f_LINE, rt_str("the attributes in the type of a formal are manifest (4.3.1)", 59));
}
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R30 *)rt_nil_check(l_PM_2735))).f_T = r_RESOLVE(((*(R17 *)rt_nil_check(l_P_2727))).f_B);
}
if ((l_TAIL_2728 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_2735;
}
else
{
((*(R30 *)rt_nil_check(l_TAIL_2728))).f_NEXT = l_PM_2735;
}
l_TAIL_2728 = l_PM_2735;
}
l_P_2727 = ((*(R17 *)rt_nil_check(l_P_2727))).f_NEXT;
}
RT_B_TICK();
} L_end2734: ;
if ((!(((*(R17 *)rt_nil_check(l_R_2726))).f_B == NULL)))
{
if (r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_R_2726))).f_B, NULL, r_OWN_NAMES(l_R_2726)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_2726))).f_LINE, rt_str("the returns-clause may not refer to a variable (4.3.1)", 54));
}
}
if ((((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC) && r_TEQS(r_BASE_NAME(p_Y), rt_str("STORE_", 6))) && (!(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS == NULL))))
{
{
R30 * l_LAST_2737; memset(&l_LAST_2737, 0, sizeof l_LAST_2737);
l_LAST_2737 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((((*(R30 *)rt_nil_check(l_LAST_2737))).f_NEXT == NULL)) goto L_end2738;
{
l_LAST_2737 = ((*(R30 *)rt_nil_check(l_LAST_2737))).f_NEXT;
}
RT_B_TICK();
} L_end2738: ;
if ((((!(l_LAST_2737 == ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS)) && (!(((*(R30 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS))).f_T == NULL))) && (!(((*(R30 *)rt_nil_check(l_LAST_2737))).f_T == NULL))))
{
if ((!r_SAME_CLASS(((*(R30 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS))).f_T, ((*(R30 *)rt_nil_check(l_LAST_2737))).f_T)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_2726))).f_LINE, rt_str("both arguments of STORE_ belong to the same type class (D.4)", 60));
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
R17 * l_R_2739; memset(&l_R_2739, 0, sizeof l_R_2739);
l_R_2739 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_2740; memset(&l_T_2740, 0, sizeof l_T_2740);
if ((((*(R17 *)rt_nil_check(l_R_2739))).f_B == NULL))
{
{ R22 * rv2741 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv2741; }
}
r_OPEN_SCOPE();
{
R30 * l_P_2742; memset(&l_P_2742, 0, sizeof l_P_2742);
l_P_2742 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2742 == NULL)) goto L_end2743;
{
if ((!(((*(R30 *)rt_nil_check(l_P_2742))).f_T == NULL)))
{
{
R12 * l_V_2744; memset(&l_V_2744, 0, sizeof l_V_2744);
l_V_2744 = r_NEW_SYM(g_Y_CONST, ((*(R30 *)rt_nil_check(l_P_2742))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2744))).f_T = ((*(R30 *)rt_nil_check(l_P_2742))).f_T;
S_R9(&((*(R12 *)rt_nil_check(l_V_2744))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R30 *)rt_nil_check(l_P_2742))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_V_2744))).f_INPUT = 1;
r_DEFINE(l_V_2744, ((*(R17 *)rt_nil_check(l_R_2739))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R30 *)rt_nil_check(l_P_2742))).f_T, ((*(R12 *)rt_nil_check(l_V_2744))).f_ACCESS, ((*(R17 *)rt_nil_check(l_R_2739))).f_LINE, 0);
}
}
l_P_2742 = ((*(R30 *)rt_nil_check(l_P_2742))).f_NEXT;
}
RT_B_TICK();
} L_end2743: ;
}
l_T_2740 = r_RESOLVE(((*(R17 *)rt_nil_check(l_R_2739))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv2745 = l_T_2740;
return rv2745; }
rt_raise(RT_X_INIT);
}
static R9 r_C_HEADER(R12 * p_Y) { RT_B_TICK(); 
R9 l_PS_2746; memset(&l_PS_2746, 0, sizeof l_PS_2746);
S_R9(&l_PS_2746, r_MK(rt_str("", 0)), 0);
R9 l_SEP_2747; memset(&l_SEP_2747, 0, sizeof l_SEP_2747);
S_R9(&l_SEP_2747, r_MK(rt_str("", 0)), 0);
R30 * l_P_2748; memset(&l_P_2748, 0, sizeof l_P_2748);
l_P_2748 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_PS_2746, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R9(&l_SEP_2747, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_2748 == NULL)) goto L_end2749;
{
if ((((*(R30 *)rt_nil_check(l_P_2748))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R30 *)rt_nil_check(l_P_2748))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R30 *)rt_nil_check(l_P_2748))).f_MODE == g_M_IN))
{
S_R9(&l_PS_2746, r_FMT4(rt_str("@@@ p_@", 7), l_PS_2746, l_SEP_2747, r_CTYPE(((*(R30 *)rt_nil_check(l_P_2748))).f_T), r_CID(((*(R30 *)rt_nil_check(l_P_2748))).f_NAME)), 0);
S_R9(&l_SEP_2747, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R9(&l_PS_2746, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_2746, l_SEP_2747, r_CTYPE(((*(R30 *)rt_nil_check(l_P_2748))).f_T), r_CID(((*(R30 *)rt_nil_check(l_P_2748))).f_NAME)), 0);
S_R9(&l_SEP_2747, r_MK(rt_str(", ", 2)), 0);
}
l_P_2748 = ((*(R30 *)rt_nil_check(l_P_2748))).f_NEXT;
}
RT_B_TICK();
} L_end2749: ;
if (((l_PS_2746).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_PS_2746, r_MK(rt_str("void", 4)), 0);
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_LINKAGE == ((rt_int)1LL)))
{
{ R9 rv2750 = r_FMT3(rt_str("@ @(@)", 6), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2746);
return rv2750; }
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_LINKAGE == ((rt_int)2LL)))
{
{ R9 rv2751 = r_FMT3(rt_str("extern @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2746);
return rv2751; }
}
{ R9 rv2752 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2746);
return rv2752; }
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
R28 * l_B_2753; memset(&l_B_2753, 0, sizeof l_B_2753);
l_B_2753 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_2754; memset(&l_I_2754, 0, sizeof l_I_2754);
l_I_2754 = ((rt_int)0LL);
for (;;) {
if ((l_B_2753 == NULL)) goto L_end2755;
{
if (r_IS_GEN_TEXT(((*(R28 *)rt_nil_check(l_B_2753))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R28 *)rt_nil_check(l_B_2753))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_2754)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R28 *)rt_nil_check(l_B_2753))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R28 *)rt_nil_check(l_B_2753))).f_LO) || ((((*(R28 *)rt_nil_check(l_B_2753))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R28 *)rt_nil_check(l_B_2753))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_2754)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R28 *)rt_nil_check(l_B_2753))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_2754), p_PC, r_NUM(l_I_2754)), ((*(R28 *)rt_nil_check(l_B_2753))).f_LO), p_LINE, p_CHECK);
}
}
l_I_2754 = rt_add(l_I_2754, ((rt_int)1LL));
l_B_2753 = ((*(R28 *)rt_nil_check(l_B_2753))).f_NEXT;
}
RT_B_TICK();
} L_end2755: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_2756; memset(&l_U_2756, 0, sizeof l_U_2756);
l_U_2756 = r_REAL_TYPE(p_T);
R27 * l_F_2757; memset(&l_F_2757, 0, sizeof l_F_2757);
l_F_2757 = ((*(R22 *)rt_nil_check(l_U_2756))).f_FIELDS;
R28 * l_A_2758; memset(&l_A_2758, 0, sizeof l_A_2758);
l_A_2758 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_2757 == NULL) || (l_A_2758 == NULL))) goto L_end2759;
{
if ((!(((*(R27 *)rt_nil_check(l_F_2757))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R28 *)rt_nil_check(l_A_2758))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R28 *)rt_nil_check(l_A_2758))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R27 *)rt_nil_check(l_F_2757))).f_CNAME), p_LINE, p_CHECK);
}
l_A_2758 = ((*(R28 *)rt_nil_check(l_A_2758))).f_NEXT;
}
l_F_2757 = ((*(R27 *)rt_nil_check(l_F_2757))).f_NEXT;
}
RT_B_TICK();
} L_end2759: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R9 p_T) { RT_B_TICK(); 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2760 = 0;
return rv2760; }
}
{ rt_int rv2761 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv2761; }
rt_raise(RT_X_INIT);
}
static R9 r_GEN_TEXT_NAME(R9 p_T) { RT_B_TICK(); 
{ R9 rv2762 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv2762; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R9 p_NAME, R9 p_C, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
R12 * l_OLD_2763; memset(&l_OLD_2763, 0, sizeof l_OLD_2763);
l_OLD_2763 = r_LOOKUP(p_NAME);
if ((!(l_OLD_2763 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_2763))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_2763))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_2763))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_2764; memset(&l_G_2764, 0, sizeof l_G_2764);
l_G_2764 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_2764))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R9(&((*(R12 *)rt_nil_check(l_G_2764))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_2764))).f_INPUT = 1;
r_DEFINE(l_G_2764, p_LINE);
}
}
static R21 * r_NEW_BINDS(void) { RT_B_TICK(); 
R21 * l_B_2765; memset(&l_B_2765, 0, sizeof l_B_2765);
l_B_2765 = ({ R21 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R21(&(*(R21 *)rt_nil_check(l_B_2765)), ({ R21 rc2766; memset(&rc2766, 0, sizeof rc2766);  S_R9(&rc2766.f_NAME, r_NO_TEXT(), 0); rc2766.f_T = NULL; S_R9(&rc2766.f_C, r_NO_TEXT(), 0); rc2766.f_HASMV = 0; rc2766.f_MV = ((rt_int)0LL); rc2766.f_R = NULL; rc2766.f_NEXT = NULL; rc2766; }), 0);
{ R21 * rv2767 = l_B_2765;
return rv2767; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R9 p_NAME, R22 * p_T, R25 p_M, R12 * p_R, R21 * p_HEAD) { RT_B_TICK(); 
R21 * l_B_2768; memset(&l_B_2768, 0, sizeof l_B_2768);
l_B_2768 = ({ R21 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R21(&(*(R21 *)rt_nil_check(l_B_2768)), ({ R21 rc2769; memset(&rc2769, 0, sizeof rc2769);  S_R9(&rc2769.f_NAME, p_NAME, 0); rc2769.f_T = p_T; S_R9(&rc2769.f_C, r_NO_TEXT(), 0); rc2769.f_HASMV = (p_M).f_OK; rc2769.f_MV = (p_M).f_V; rc2769.f_R = p_R; rc2769.f_NEXT = ((*(R21 *)rt_nil_check(p_HEAD))).f_NEXT; rc2769; }), 0);
if ((p_M).f_OK)
{
S_R9(&((*(R21 *)rt_nil_check(l_B_2768))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R21 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_2768;
}
static R21 * r_FIND_BIND(R21 * p_BS, R9 p_NAME) { RT_B_TICK(); 
R21 * l_B_2770; memset(&l_B_2770, 0, sizeof l_B_2770);
l_B_2770 = p_BS;
for (;;) {
if ((l_B_2770 == NULL)) goto L_end2771;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_B_2770))).f_NAME, p_NAME))
{
{ R21 * rv2772 = l_B_2770;
return rv2772; }
}
l_B_2770 = ((*(R21 *)rt_nil_check(l_B_2770))).f_NEXT;
}
RT_B_TICK();
} L_end2771: ;
{ R21 * rv2773 = NULL;
return rv2773; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R17 * p_TS, R22 * p_T, R21 * p_BS) { RT_B_TICK(); 
R22 * l_RT_2774; memset(&l_RT_2774, 0, sizeof l_RT_2774);
l_RT_2774 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv2775 = 1;
return rv2775; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv2776 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv2776; }
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2777 = 1;
return rv2777; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R17 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2778 = 1;
return rv2778; }
}
{
R21 * l_B_2779; memset(&l_B_2779, 0, sizeof l_B_2779);
l_B_2779 = r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_2779 == NULL)))
{
if ((((*(R21 *)rt_nil_check(l_B_2779))).f_T == NULL))
{
{ rt_int rv2780 = 0;
return rv2780; }
}
{ rt_int rv2781 = r_SAME_TYPE(((*(R21 *)rt_nil_check(l_B_2779))).f_T, p_T);
return rv2781; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_C == NULL) && r_NONSTANDARD_REP(p_T)))
{
{ rt_int rv2782 = 0;
return rv2782; }
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
{ rt_int rv2783 = 1;
return rv2783; }
}
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2774))).f_KIND == g_T_ARR)))
{
{ rt_int rv2784 = 0;
return rv2784; }
}
if ((!(r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_2774))).f_DIMS)))
{
{ rt_int rv2785 = 0;
return rv2785; }
}
{ rt_int rv2786 = r_UNIFY(((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_2774))).f_ELEM, p_BS);
return rv2786; }
}
else if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv2787 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2787; }
}
else if ((!(((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2788 = 0;
return rv2788; }
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_2774))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_2774))).f_MHI, p_BS))))
{
{ rt_int rv2789 = 0;
return rv2789; }
}
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_N_REP) && (!r_UNIFY_REP(((*(R17 *)rt_nil_check(p_TS))).f_C, l_RT_2774, p_BS))))
{
{ rt_int rv2790 = 0;
return rv2790; }
}
}
if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((((*(R22 *)rt_nil_check(l_RT_2774))).f_KIND == g_T_XFIX))
{
{ rt_int rv2791 = ((r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2774))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2774))).f_RADIX), p_BS)) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)2LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2774))).f_PREC), p_BS));
return rv2791; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_2774))).f_KIND == g_T_INT)))
{
{ rt_int rv2792 = 0;
return rv2792; }
}
{ rt_int rv2793 = ((r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2774))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS)) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)2LL)), r_SOME(r_STD_ORD()), p_BS));
return rv2793; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv2794 = ((((*(R22 *)rt_nil_check(l_RT_2774))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2774))).f_SCALE == ((rt_int)0LL)));
return rv2794; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2774))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv2795 = 0;
return rv2795; }
}
{ rt_int rv2796 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2774))).f_SCALE), p_BS);
return rv2796; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv2797 = (((*(R22 *)rt_nil_check(l_RT_2774))).f_KIND == g_T_BOOL);
return rv2797; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv2798 = ((((*(R22 *)rt_nil_check(l_RT_2774))).f_KIND == g_T_STR) && r_SAME_DERIVED_LENGTH(r_NTH_ARG(p_TS, ((rt_int)0LL)), l_RT_2774, p_BS));
return rv2798; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2774))).f_KIND == g_T_STR)))
{
{ rt_int rv2799 = 0;
return rv2799; }
}
if ((!(((*(R17 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv2800 = 1;
return rv2800; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_2774))).f_BASE == NULL)))
{
{ rt_int rv2801 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_2774))).f_BASE, p_BS);
return rv2801; }
}
{ rt_int rv2802 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv2802; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv2803 = ((((*(R22 *)rt_nil_check(l_RT_2774))).f_KIND == g_T_BITS) && r_SAME_DERIVED_LENGTH(r_NTH_ARG(p_TS, ((rt_int)0LL)), l_RT_2774, p_BS));
return rv2803; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv2804 = (((*(R22 *)rt_nil_check(l_RT_2774))).f_KIND == g_T_SEM);
return rv2804; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2774))).f_KIND == g_T_PTR)))
{
{ rt_int rv2805 = 0;
return rv2805; }
}
{ rt_int rv2806 = r_UNIFY(((*(R17 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_2774), p_BS);
return rv2806; }
}
{
R12 * l_Y_2807; memset(&l_Y_2807, 0, sizeof l_Y_2807);
l_Y_2807 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_2807 == NULL))
{
{ rt_int rv2808 = 0;
return rv2808; }
}
if (((((*(R12 *)rt_nil_check(l_Y_2807))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_2807))).f_DECL == NULL)))
{
{ rt_int rv2809 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_2807))).f_T, p_T);
return rv2809; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2807))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv2810 = 0;
return rv2810; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_2807))))
{
{ rt_int rv2811 = 0;
return rv2811; }
}
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2807))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2774))).f_KIND == g_T_REC)))
{
{ rt_int rv2812 = 0;
return rv2812; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2774))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv2813 = 0;
return rv2813; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2774))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_2807))))
{
{ rt_int rv2814 = 0;
return rv2814; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv2815 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2815; }
}
{ rt_int rv2816 = r_UNIFY(r_SUBST_FORMALS(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2807))).f_DECL))).f_B, ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2807))).f_DECL))).f_A, ((*(R17 *)rt_nil_check(p_TS))).f_A), l_RT_2774, p_BS);
return rv2816; }
}
{
R17 * l_F_2817; memset(&l_F_2817, 0, sizeof l_F_2817);
l_F_2817 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2807))).f_DECL))).f_A;
R17 * l_A_2818; memset(&l_A_2818, 0, sizeof l_A_2818);
l_A_2818 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R28 * l_V_2819; memset(&l_V_2819, 0, sizeof l_V_2819);
l_V_2819 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_2820; memset(&l_CLASS_2820, 0, sizeof l_CLASS_2820);
l_CLASS_2820 = r_RECORD_CLASS_OF(l_RT_2774);
for (;;) {
if ((l_F_2817 == NULL)) goto L_end2821;
{
{
R17 * l_N_2822; memset(&l_N_2822, 0, sizeof l_N_2822);
l_N_2822 = ((*(R17 *)rt_nil_check(l_F_2817))).f_A;
for (;;) {
if ((l_N_2822 == NULL)) goto L_end2823;
{
if ((l_A_2818 == NULL))
{
{ rt_int rv2824 = 0;
return rv2824; }
}
if ((((*(R17 *)rt_nil_check(l_F_2817))).f_B == NULL))
{
if ((!(l_CLASS_2820 == NULL)))
{
{
R21 * l_B_2825; memset(&l_B_2825, 0, sizeof l_B_2825);
l_B_2825 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_2820))).f_BINDINGS, ((*(R17 *)rt_nil_check(l_N_2822))).f_NAME);
if ((!(l_B_2825 == NULL)))
{
if ((!r_UNIFY(l_A_2818, ((*(R21 *)rt_nil_check(l_B_2825))).f_T, p_BS)))
{
{ rt_int rv2826 = 0;
return rv2826; }
}
}
}
}
}
else
{
if ((!(l_V_2819 == NULL)))
{
if ((((!(((*(R17 *)rt_nil_check(l_A_2818))).f_KIND == g_TS_GEN)) && (!(((*(R17 *)rt_nil_check(l_A_2818))).f_KIND == g_N_DONTCARE))) && (!(((*(R17 *)rt_nil_check(l_A_2818))).f_KIND == g_N_ANY))))
{
{
R25 l_M_2827; memset(&l_M_2827, 0, sizeof l_M_2827);
S_R25(&l_M_2827, r_MANIFEST(l_A_2818), 0);
if (((l_M_2827).f_OK && (((*(R28 *)rt_nil_check(l_V_2819))).f_MLO).f_OK))
{
if ((!((l_M_2827).f_V == (((*(R28 *)rt_nil_check(l_V_2819))).f_MLO).f_V)))
{
{ rt_int rv2828 = 0;
return rv2828; }
}
}
}
}
l_V_2819 = ((*(R28 *)rt_nil_check(l_V_2819))).f_NEXT;
}
}
l_A_2818 = ((*(R17 *)rt_nil_check(l_A_2818))).f_NEXT;
l_N_2822 = ((*(R17 *)rt_nil_check(l_N_2822))).f_NEXT;
}
RT_B_TICK();
} L_end2823: ;
}
l_F_2817 = ((*(R17 *)rt_nil_check(l_F_2817))).f_NEXT;
}
RT_B_TICK();
} L_end2821: ;
}
{ rt_int rv2829 = 1;
return rv2829; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_DERIVED_LENGTH(R17 * p_A, R22 * p_RT, R21 * p_BS) { RT_B_TICK(); 
if (((p_A == NULL) || (!(((*(R22 *)rt_nil_check(p_RT))).f_MLEN).f_OK)))
{
{ rt_int rv2830 = 1;
return rv2830; }
}
if (((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) || ((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2831 = 1;
return rv2831; }
}
{
R9 l_KEY_2832; memset(&l_KEY_2832, 0, sizeof l_KEY_2832);
S_R9(&l_KEY_2832, r_QMKN(rt_str("%", 1), ((*(R17 *)rt_nil_check(p_A))).f_NAME), 0);
R21 * l_B_2833; memset(&l_B_2833, 0, sizeof l_B_2833);
l_B_2833 = r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, l_KEY_2832);
if ((!(l_B_2833 == NULL)))
{
{ rt_int rv2834 = (((*(R21 *)rt_nil_check(l_B_2833))).f_MV == (((*(R22 *)rt_nil_check(p_RT))).f_MLEN).f_V);
return rv2834; }
}
r_ADD_BIND(l_KEY_2832, NULL, ((*(R22 *)rt_nil_check(p_RT))).f_MLEN, NULL, p_BS);
{ rt_int rv2835 = 1;
return rv2835; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_REP(R17 * p_R, R22 * p_RT, R21 * p_BS) { RT_B_TICK(); 
R17 * l_A_2836; memset(&l_A_2836, 0, sizeof l_A_2836);
l_A_2836 = ((*(R22 *)rt_nil_check(p_RT))).f_REPS;
if (r_TEQS(((*(R17 *)rt_nil_check(p_R))).f_NAME, rt_str("FIXED_REP", 9)))
{
if ((!(((*(R22 *)rt_nil_check(p_RT))).f_KIND == g_T_INT)))
{
{ rt_int rv2837 = 0;
return rv2837; }
}
{
R9 l_SIGNING_2838; memset(&l_SIGNING_2838, 0, sizeof l_SIGNING_2838);
S_R9(&l_SIGNING_2838, r_MK(rt_str("SIGNED", 6)), 0);
if ((!(l_A_2836 == NULL)))
{
if ((!((r_TEQS(((*(R17 *)rt_nil_check(l_A_2836))).f_NAME, rt_str("FIXED_REP", 9)) || r_TEQS(((*(R17 *)rt_nil_check(l_A_2836))).f_NAME, rt_str("FIXED_STD", 9))))))
{
{ rt_int rv2839 = 1;
return rv2839; }
}
if ((r_TEQS(((*(R17 *)rt_nil_check(l_A_2836))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R17 *)rt_nil_check(l_A_2836))).f_A == NULL))))
{
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_2836))).f_A))).f_NEXT == NULL)))
{
S_R9(&l_SIGNING_2838, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_2836))).f_A))).f_NEXT))).f_NAME, 0);
}
}
}
if ((!r_UNIFY_VALUE(((*(R17 *)rt_nil_check(p_R))).f_A, r_STATIC_SIZE(p_RT), p_BS)))
{
{ rt_int rv2840 = 0;
return rv2840; }
}
if ((!(((*(R17 *)rt_nil_check(p_R))).f_A == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT == NULL)))
{
if (((((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_KIND == g_N_ENUMLIT))) && (!r_TEQ(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_NAME, l_SIGNING_2838))))
{
{ rt_int rv2841 = 0;
return rv2841; }
}
}
}
{ rt_int rv2842 = 1;
return rv2842; }
}
}
if ((l_A_2836 == NULL))
{
{ rt_int rv2843 = 1;
return rv2843; }
}
{ rt_int rv2844 = r_TEQ(((*(R17 *)rt_nil_check(p_R))).f_NAME, ((*(R17 *)rt_nil_check(l_A_2836))).f_NAME);
return rv2844; }
rt_raise(RT_X_INIT);
}
static rt_int r_NONSTANDARD_REP(R22 * p_T) { RT_B_TICK(); 
R17 * l_R_2845; memset(&l_R_2845, 0, sizeof l_R_2845);
l_R_2845 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
if ((l_R_2845 == NULL))
{
{ rt_int rv2846 = 0;
return rv2846; }
}
if ((((*(R17 *)rt_nil_check(l_R_2845))).f_KIND == g_TS_GEN))
{
{ rt_int rv2847 = 0;
return rv2847; }
}
{ rt_int rv2848 = (((((r_TEQS(((*(R17 *)rt_nil_check(l_R_2845))).f_NAME, rt_str("FIXED_REP", 9)) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2845))).f_NAME, rt_str("ENUM_REP", 8))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2845))).f_NAME, rt_str("ENUM_VAL_REP", 12))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2845))).f_NAME, rt_str("CHAR_STR_REP", 12))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2845))).f_NAME, rt_str("ARRAY_REP", 9))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2845))).f_NAME, rt_str("RECORD_REP", 10)));
return rv2848; }
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { RT_B_TICK(); 
R12 * l_R_2849; memset(&l_R_2849, 0, sizeof l_R_2849);
l_R_2849 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv2850 = NULL;
return rv2850; }
}
for (;;) {
if ((l_R_2849 == NULL)) goto L_end2851;
{
if ((((*(R12 *)rt_nil_check(l_R_2849))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv2852 = l_R_2849;
return rv2852; }
}
l_R_2849 = ((*(R12 *)rt_nil_check(l_R_2849))).f_INSTANCES;
}
RT_B_TICK();
} L_end2851: ;
{ R12 * rv2853 = NULL;
return rv2853; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R17 * p_A, R25 p_M, R21 * p_BS) { RT_B_TICK(); 
if ((p_A == NULL))
{
{ rt_int rv2854 = 1;
return rv2854; }
}
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2855 = 1;
return rv2855; }
}
else if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2856 = 1;
return rv2856; }
}
{
R21 * l_B_2857; memset(&l_B_2857, 0, sizeof l_B_2857);
l_B_2857 = r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, ((*(R17 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_2857 == NULL)))
{
{ rt_int rv2858 = ((((*(R21 *)rt_nil_check(l_B_2857))).f_HASMV && (p_M).f_OK) && (((*(R21 *)rt_nil_check(l_B_2857))).f_MV == (p_M).f_V));
return rv2858; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv2859 = 0;
return rv2859; }
}
r_ADD_BIND(((*(R17 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv2860 = 1;
return rv2860; }
}
{
R25 l_V_2861; memset(&l_V_2861, 0, sizeof l_V_2861);
S_R25(&l_V_2861, r_MANIFEST(p_A), 0);
if (((l_V_2861).f_OK && (p_M).f_OK))
{
{ rt_int rv2862 = ((l_V_2861).f_V == (p_M).f_V);
return rv2862; }
}
}
{ rt_int rv2863 = 1;
return rv2863; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R30 * p_P, R29 * p_A, R21 * p_BS) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R29 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv2864 = 0;
return rv2864; }
}
if (((!(((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME)) && (!(((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_APPLY))))
{
{ rt_int rv2865 = 0;
return rv2865; }
}
{ rt_int rv2866 = (!(r_FIND_ROUTINE_ARG(((*(R30 *)rt_nil_check(p_P))).f_TS, ((*(R29 *)rt_nil_check(p_A))).f_E, p_BS, ((rt_int)0LL), 0) == NULL));
return rv2866; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv2867 = 1;
return rv2867; }
}
r_TYPE_ARG(p_A);
{ rt_int rv2868 = r_UNIFY(((*(R30 *)rt_nil_check(p_P))).f_TS, (((*(R29 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv2868; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R29 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_BS_2869; memset(&l_BS_2869, 0, sizeof l_BS_2869);
l_BS_2869 = r_NEW_BINDS();
R30 * l_P_2870; memset(&l_P_2870, 0, sizeof l_P_2870);
l_P_2870 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R29 * l_A_2871; memset(&l_A_2871, 0, sizeof l_A_2871);
l_A_2871 = p_ARGS;
for (;;) {
if ((l_P_2870 == NULL)) goto L_end2872;
{
if ((((*(R30 *)rt_nil_check(l_P_2870))).f_TS == NULL))
{
if (((*(R29 *)rt_nil_check(l_A_2871))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R30 *)rt_nil_check(l_P_2870))).f_NAME, r_ARG_TYPE(((*(R29 *)rt_nil_check(l_A_2871))).f_E), r_NO_MVAL(), NULL, l_BS_2869);
}
else if ((((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2870))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R30 *)rt_nil_check(l_P_2870))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R30 *)rt_nil_check(l_P_2870))).f_TS, ((*(R29 *)rt_nil_check(l_A_2871))).f_E, p_LINE), l_BS_2869);
}
else if (((((!(((*(R29 *)rt_nil_check(l_A_2871))).f_E == NULL)) && (!((*(R29 *)rt_nil_check(l_A_2871))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R30 *)rt_nil_check(l_P_2870))).f_TS))) && (((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(l_A_2871))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R29 *)rt_nil_check(l_A_2871))).f_HAVE))
{
S_R26(&((*(R29 *)rt_nil_check(l_A_2871))).f_V, r_EXPR(((*(R29 *)rt_nil_check(l_A_2871))).f_E, NULL), 0);
((*(R29 *)rt_nil_check(l_A_2871))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R30 *)rt_nil_check(l_P_2870))).f_TS, (((*(R29 *)rt_nil_check(l_A_2871))).f_V).f_T, l_BS_2869)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R30 *)rt_nil_check(l_P_2870))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R30 *)rt_nil_check(l_P_2870))).f_TS))
{
r_ADD_BIND(r_QMKN(rt_str("\?", 1), ((*(R30 *)rt_nil_check(l_P_2870))).f_NAME), (((*(R29 *)rt_nil_check(l_A_2871))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_2869);
}
}
l_P_2870 = ((*(R30 *)rt_nil_check(l_P_2870))).f_NEXT;
l_A_2871 = ((*(R29 *)rt_nil_check(l_A_2871))).f_NEXT;
}
RT_B_TICK();
} L_end2872: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_2869);
{
R12 * l_I_2873; memset(&l_I_2873, 0, sizeof l_I_2873);
l_I_2873 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2873 == NULL)) goto L_end2874;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2873))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_BS_2869))).f_NEXT))
{
{ R12 * rv2875 = l_I_2873;
return rv2875; }
}
l_I_2873 = ((*(R12 *)rt_nil_check(l_I_2873))).f_INSTANCES;
}
RT_B_TICK();
} L_end2874: ;
}
{ R12 * rv2876 = r_NEW_INSTANCE(p_G, ((*(R21 *)rt_nil_check(l_BS_2869))).f_NEXT, p_ARGS);
return rv2876; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_2877; memset(&l_P_2877, 0, sizeof l_P_2877);
l_P_2877 = p_A;
for (;;) {
if ((l_P_2877 == NULL)) goto L_end2878;
{
{
R21 * l_Q_2879; memset(&l_Q_2879, 0, sizeof l_Q_2879);
l_Q_2879 = r_FIND_BIND(p_B, ((*(R21 *)rt_nil_check(l_P_2877))).f_NAME);
if ((l_Q_2879 == NULL))
{
{ rt_int rv2880 = 0;
return rv2880; }
}
if (((!(((*(R21 *)rt_nil_check(l_P_2877))).f_T == NULL)) || (!(((*(R21 *)rt_nil_check(l_Q_2879))).f_T == NULL))))
{
if (((((*(R21 *)rt_nil_check(l_P_2877))).f_T == NULL) || (((*(R21 *)rt_nil_check(l_Q_2879))).f_T == NULL)))
{
{ rt_int rv2881 = 0;
return rv2881; }
}
if ((!r_SAME_TYPE(((*(R21 *)rt_nil_check(l_P_2877))).f_T, ((*(R21 *)rt_nil_check(l_Q_2879))).f_T)))
{
{ rt_int rv2882 = 0;
return rv2882; }
}
if ((!r_SAME_LENGTH(((*(R21 *)rt_nil_check(l_P_2877))).f_T, ((*(R21 *)rt_nil_check(l_Q_2879))).f_T)))
{
{ rt_int rv2883 = 0;
return rv2883; }
}
if ((!r_SAME_REPS(((*(R21 *)rt_nil_check(l_P_2877))).f_T, ((*(R21 *)rt_nil_check(l_Q_2879))).f_T)))
{
{ rt_int rv2884 = 0;
return rv2884; }
}
}
if ((((!(((*(R21 *)rt_nil_check(l_P_2877))).f_HASMV == ((*(R21 *)rt_nil_check(l_Q_2879))).f_HASMV)) || (!(((*(R21 *)rt_nil_check(l_P_2877))).f_MV == ((*(R21 *)rt_nil_check(l_Q_2879))).f_MV))) || (!(((*(R21 *)rt_nil_check(l_P_2877))).f_R == ((*(R21 *)rt_nil_check(l_Q_2879))).f_R))))
{
{ rt_int rv2885 = 0;
return rv2885; }
}
}
l_P_2877 = ((*(R21 *)rt_nil_check(l_P_2877))).f_NEXT;
}
RT_B_TICK();
} L_end2878: ;
{ rt_int rv2886 = 1;
return rv2886; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2887; memset(&l_RA_2887, 0, sizeof l_RA_2887);
l_RA_2887 = r_REAL_TYPE(p_A);
R22 * l_RB_2888; memset(&l_RB_2888, 0, sizeof l_RB_2888);
l_RB_2888 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_2887))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_2887))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_2887))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_2888))).f_KIND))))
{
{ rt_int rv2889 = 1;
return rv2889; }
}
if (((((*(R22 *)rt_nil_check(l_RA_2887))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_2888))).f_MLEN).f_OK))
{
{ rt_int rv2890 = ((((*(R22 *)rt_nil_check(l_RA_2887))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_2888))).f_MLEN).f_V);
return rv2890; }
}
{ rt_int rv2891 = ((((*(R22 *)rt_nil_check(l_RA_2887))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_2888))).f_MLEN).f_OK);
return rv2891; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R17 * l_RA_2892; memset(&l_RA_2892, 0, sizeof l_RA_2892);
l_RA_2892 = ((*(R22 *)rt_nil_check(p_A))).f_REPS;
R17 * l_RB_2893; memset(&l_RB_2893, 0, sizeof l_RB_2893);
l_RB_2893 = ((*(R22 *)rt_nil_check(p_B))).f_REPS;
if (((l_RA_2892 == NULL) || (l_RB_2893 == NULL)))
{
{ rt_int rv2894 = (l_RA_2892 == l_RB_2893);
return rv2894; }
}
if ((l_RA_2892 == l_RB_2893))
{
{ rt_int rv2895 = 1;
return rv2895; }
}
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_RA_2892))).f_NAME, ((*(R17 *)rt_nil_check(l_RB_2893))).f_NAME)))
{
{ rt_int rv2896 = 0;
return rv2896; }
}
{
R17 * l_X_2897; memset(&l_X_2897, 0, sizeof l_X_2897);
l_X_2897 = ((*(R17 *)rt_nil_check(l_RA_2892))).f_A;
R17 * l_Y_2898; memset(&l_Y_2898, 0, sizeof l_Y_2898);
l_Y_2898 = ((*(R17 *)rt_nil_check(l_RB_2893))).f_A;
for (;;) {
if (((l_X_2897 == NULL) || (l_Y_2898 == NULL))) goto L_end2899;
{
if (((((((*(R17 *)rt_nil_check(l_X_2897))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_X_2897))).f_KIND == g_N_ENUMLIT))) && (((((*(R17 *)rt_nil_check(l_Y_2898))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_Y_2898))).f_KIND == g_N_ENUMLIT)))))
{
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_X_2897))).f_NAME, ((*(R17 *)rt_nil_check(l_Y_2898))).f_NAME)))
{
{ rt_int rv2900 = 0;
return rv2900; }
}
}
else
{
{
R25 l_MX_2901; memset(&l_MX_2901, 0, sizeof l_MX_2901);
S_R25(&l_MX_2901, r_MANIFEST(l_X_2897), 0);
R25 l_MY_2902; memset(&l_MY_2902, 0, sizeof l_MY_2902);
S_R25(&l_MY_2902, r_MANIFEST(l_Y_2898), 0);
if (((!((l_MX_2901).f_OK == (l_MY_2902).f_OK)) || (!((l_MX_2901).f_V == (l_MY_2902).f_V))))
{
{ rt_int rv2903 = 0;
return rv2903; }
}
}
}
l_X_2897 = ((*(R17 *)rt_nil_check(l_X_2897))).f_NEXT;
l_Y_2898 = ((*(R17 *)rt_nil_check(l_Y_2898))).f_NEXT;
}
RT_B_TICK();
} L_end2899: ;
{ rt_int rv2904 = ((((l_X_2897 == NULL) && (l_Y_2898 == NULL)) && (((*(R17 *)rt_nil_check(l_RA_2892))).f_B == NULL)) && (((*(R17 *)rt_nil_check(l_RB_2893))).f_B == NULL));
return rv2904; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R17 * p_TS, R17 * p_E, rt_int p_LINE) { RT_B_TICK(); 
{ R12 * rv2905 = r_FIND_ROUTINE_ARG(p_TS, p_E, NULL, p_LINE, 1);
return rv2905; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE_ARG(R17 * p_TS, R17 * p_E, R21 * p_BS0, rt_int p_LINE, rt_int p_STRICT) { RT_B_TICK(); 
R12 * l_Y_2906; memset(&l_Y_2906, 0, sizeof l_Y_2906);
l_Y_2906 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_2907; memset(&l_FOUND_2907, 0, sizeof l_FOUND_2907);
l_FOUND_2907 = NULL;
R21 * l_BS_2908; memset(&l_BS_2908, 0, sizeof l_BS_2908);
l_BS_2908 = p_BS0;
if ((l_BS_2908 == NULL))
{
l_BS_2908 = r_NEW_BINDS();
}
for (;;) {
if ((l_Y_2906 == NULL)) goto L_end2909;
{
if ((((*(R12 *)rt_nil_check(l_Y_2906))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_2910; memset(&l_R_2910, 0, sizeof l_R_2910);
l_R_2910 = r_ORIGINAL(l_Y_2906);
R21 * l_TRY_2911; memset(&l_TRY_2911, 0, sizeof l_TRY_2911);
l_TRY_2911 = r_NEW_BINDS();
((*(R21 *)rt_nil_check(l_TRY_2911))).f_NEXT = ((*(R21 *)rt_nil_check(l_BS_2908))).f_NEXT;
r_ROUTINE_HEADER(l_R_2910);
if ((((!((*(R12 *)rt_nil_check(l_R_2910))).f_GENERIC) && r_EXPLICIT_TEMPLATE_FITS(p_E, l_R_2910)) && r_TEMPLATE_FITS(p_TS, l_R_2910, l_TRY_2911)))
{
if (((!(l_FOUND_2907 == NULL)) && (!(l_FOUND_2907 == l_R_2910))))
{
if ((!p_STRICT))
{
{ R12 * rv2912 = NULL;
return rv2912; }
}
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_2907 = l_R_2910;
}
}
}
l_Y_2906 = r_LOOKUP_NEXT(l_Y_2906);
}
RT_B_TICK();
} L_end2909: ;
if ((l_FOUND_2907 == NULL))
{
if ((!p_STRICT))
{
{ R12 * rv2913 = NULL;
return rv2913; }
}
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter (5.1): ", 45), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_2907))).f_USES == NULL)))
{
if ((!p_STRICT))
{
{ R12 * rv2914 = NULL;
return rv2914; }
}
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (p_STRICT)
{
if ((!r_TEMPLATE_FITS(p_TS, l_FOUND_2907, l_BS_2908)))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter (5.1): ", 45), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
r_NEED_BODY(l_FOUND_2907);
}
{ R12 * rv2915 = l_FOUND_2907;
return rv2915; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPLICIT_TEMPLATE_FITS(R17 * p_E, R12 * p_R) { RT_B_TICK(); 
R17 * l_A_2916; memset(&l_A_2916, 0, sizeof l_A_2916);
l_A_2916 = ((*(R17 *)rt_nil_check(p_E))).f_A;
R30 * l_Q_2917; memset(&l_Q_2917, 0, sizeof l_Q_2917);
l_Q_2917 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY)))
{
{ rt_int rv2918 = 1;
return rv2918; }
}
if (((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
{ rt_int rv2919 = 0;
return rv2919; }
}
for (;;) {
if (((l_A_2916 == NULL) || (l_Q_2917 == NULL))) goto L_end2920;
{
if ((((*(R30 *)rt_nil_check(l_Q_2917))).f_T == NULL))
{
{ rt_int rv2921 = 0;
return rv2921; }
}
if ((!r_IDENTICAL_TYPE(r_RESOLVE(r_EXPR_TO_TS(l_A_2916)), ((*(R30 *)rt_nil_check(l_Q_2917))).f_T)))
{
{ rt_int rv2922 = 0;
return rv2922; }
}
l_A_2916 = ((*(R17 *)rt_nil_check(l_A_2916))).f_NEXT;
l_Q_2917 = ((*(R30 *)rt_nil_check(l_Q_2917))).f_NEXT;
}
RT_B_TICK();
} L_end2920: ;
if (((!(l_A_2916 == NULL)) || (!(l_Q_2917 == NULL))))
{
{ rt_int rv2923 = 0;
return rv2923; }
}
if ((!(((*(R17 *)rt_nil_check(p_E))).f_E == NULL)))
{
{ rt_int rv2924 = r_IDENTICAL_TYPE(r_RESOLVE(((*(R17 *)rt_nil_check(p_E))).f_E), ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2924; }
}
{ rt_int rv2925 = 1;
return rv2925; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEMPLATE_FITS(R17 * p_TS, R12 * p_R, R21 * p_BS) { RT_B_TICK(); 
R17 * l_P_2926; memset(&l_P_2926, 0, sizeof l_P_2926);
l_P_2926 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R30 * l_Q_2927; memset(&l_Q_2927, 0, sizeof l_Q_2927);
l_Q_2927 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
if ((!(((((*(R17 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL))) == ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_IV == ((rt_int)1LL))))))
{
{ rt_int rv2928 = 0;
return rv2928; }
}
for (;;) {
if (((l_P_2926 == NULL) || (l_Q_2927 == NULL))) goto L_end2929;
{
if ((!(((*(R17 *)rt_nil_check(l_P_2926))).f_IV == ((*(R30 *)rt_nil_check(l_Q_2927))).f_MODE)))
{
{ rt_int rv2930 = 0;
return rv2930; }
}
if (((((*(R17 *)rt_nil_check(l_P_2926))).f_B == NULL) || (((*(R30 *)rt_nil_check(l_Q_2927))).f_T == NULL)))
{
if (((!(((*(R17 *)rt_nil_check(l_P_2926))).f_B == NULL)) || (!(((*(R30 *)rt_nil_check(l_Q_2927))).f_T == NULL))))
{
{ rt_int rv2931 = 0;
return rv2931; }
}
}
else if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_2926))).f_B))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2932 = 0;
return rv2932; }
}
else if ((!r_TYPE_FITS_SPEC(((*(R17 *)rt_nil_check(l_P_2926))).f_B, ((*(R30 *)rt_nil_check(l_Q_2927))).f_T, p_BS)))
{
{ rt_int rv2933 = 0;
return rv2933; }
}
l_P_2926 = ((*(R17 *)rt_nil_check(l_P_2926))).f_NEXT;
l_Q_2927 = ((*(R30 *)rt_nil_check(l_Q_2927))).f_NEXT;
}
RT_B_TICK();
} L_end2929: ;
if (((!(l_P_2926 == NULL)) || (!(l_Q_2927 == NULL))))
{
{ rt_int rv2934 = 0;
return rv2934; }
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if ((!r_TYPE_FITS_SPEC(((*(R17 *)rt_nil_check(p_TS))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT, p_BS)))
{
{ rt_int rv2935 = 0;
return rv2935; }
}
}
{
R17 * l_X_2936; memset(&l_X_2936, 0, sizeof l_X_2936);
l_X_2936 = ((*(R17 *)rt_nil_check(p_TS))).f_D;
for (;;) {
if ((l_X_2936 == NULL)) goto L_end2937;
{
if ((!r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_D))).f_A, ((*(R17 *)rt_nil_check(l_X_2936))).f_NAME)))
{
{ rt_int rv2938 = 0;
return rv2938; }
}
l_X_2936 = ((*(R17 *)rt_nil_check(l_X_2936))).f_NEXT;
}
RT_B_TICK();
} L_end2937: ;
}
{ rt_int rv2939 = 1;
return rv2939; }
rt_raise(RT_X_INIT);
}
static rt_int r_TYPE_FITS_SPEC(R17 * p_TS, R22 * p_T, R21 * p_BS) { RT_B_TICK(); 
if ((r_STATIC_GENERIC(p_TS) || r_HAS_DERIVED(p_TS)))
{
{ rt_int rv2940 = r_UNIFY(p_TS, p_T, p_BS);
return rv2940; }
}
{ rt_int rv2941 = r_IDENTICAL_TYPE(r_RESOLVE(p_TS), p_T);
return rv2941; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_DERIVED(R17 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2942 = 0;
return rv2942; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2943 = 1;
return rv2943; }
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if (r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(p_TS))).f_A))
{
{ rt_int rv2944 = 1;
return rv2944; }
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if ((r_HAS_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_A) || r_HAS_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_B)))
{
{ rt_int rv2945 = 1;
return rv2945; }
}
}
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2946 = 1;
return rv2946; }
}
{ rt_int rv2947 = 0;
return rv2947; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R21 * p_BS) { RT_B_TICK(); 
R17 * l_NEEDL_2948; memset(&l_NEEDL_2948, 0, sizeof l_NEEDL_2948);
l_NEEDL_2948 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R21 * l_SAVED_2949; memset(&l_SAVED_2949, 0, sizeof l_SAVED_2949);
l_SAVED_2949 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R21 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_2948 == NULL)) goto L_end2950;
{
{
R17 * l_T_2951; memset(&l_T_2951, 0, sizeof l_T_2951);
l_T_2951 = ((*(R17 *)rt_nil_check(l_NEEDL_2948))).f_A;
for (;;) {
if ((l_T_2951 == NULL)) goto L_end2952;
{
if ((r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, ((*(R17 *)rt_nil_check(l_T_2951))).f_NAME) == NULL))
{
{
R29 * l_ARGS_2953; memset(&l_ARGS_2953, 0, sizeof l_ARGS_2953);
l_ARGS_2953 = NULL;
R29 * l_TAIL_2954; memset(&l_TAIL_2954, 0, sizeof l_TAIL_2954);
l_TAIL_2954 = NULL;
R17 * l_P_2955; memset(&l_P_2955, 0, sizeof l_P_2955);
l_P_2955 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_T_2951))).f_B))).f_A;
R12 * l_R_2956; memset(&l_R_2956, 0, sizeof l_R_2956);
rt_int l_ENTERED_2957; memset(&l_ENTERED_2957, 0, sizeof l_ENTERED_2957);
l_ENTERED_2957 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_2955 == NULL)) goto L_end2958;
{
{
R29 * l_A_2959; memset(&l_A_2959, 0, sizeof l_A_2959);
if ((((*(R17 *)rt_nil_check(l_P_2955))).f_B == NULL))
{
l_A_2959 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_2959 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R17 *)rt_nil_check(l_P_2955))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R29 *)rt_nil_check(l_A_2959))).f_MODE = ((*(R17 *)rt_nil_check(l_P_2955))).f_IV;
if ((l_TAIL_2954 == NULL))
{
l_ARGS_2953 = l_A_2959;
}
else
{
((*(R29 *)rt_nil_check(l_TAIL_2954))).f_NEXT = l_A_2959;
}
l_TAIL_2954 = l_A_2959;
}
l_P_2955 = ((*(R17 *)rt_nil_check(l_P_2955))).f_NEXT;
}
RT_B_TICK();
} L_end2958: ;
if (l_ENTERED_2957)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_2956 = r_FIND_ROUTINE(((*(R17 *)rt_nil_check(l_T_2951))).f_NAME, l_ARGS_2953, p_LINE, 0);
if ((l_R_2956 == NULL))
{
l_R_2956 = r_LOOKUP(((*(R17 *)rt_nil_check(l_T_2951))).f_NAME);
for (;;) {
if ((l_R_2956 == NULL)) goto L_end2960;
{
if ((((*(R12 *)rt_nil_check(l_R_2956))).f_KIND == g_Y_BUILTIN))
{
goto L_end2960;
}
l_R_2956 = r_LOOKUP_NEXT(l_R_2956);
}
RT_B_TICK();
} L_end2960: ;
}
if (((l_R_2956 == NULL) && (!r_IS_OPERATOR_NAME(((*(R17 *)rt_nil_check(l_T_2951))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R17 *)rt_nil_check(l_T_2951))).f_NAME);
}
if ((!(l_R_2956 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_R_2956))).f_KIND == g_Y_ROUTINE))
{
r_COMPUTE_USES(r_ORIGINAL(l_R_2956));
if ((!(((*(R12 *)rt_nil_check(r_ORIGINAL(l_R_2956)))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine named in a WHERE clause may not import data (5.2): ", 61), ((*(R17 *)rt_nil_check(l_T_2951))).f_NAME);
}
}
r_ADD_BIND(((*(R17 *)rt_nil_check(l_T_2951))).f_NAME, NULL, r_NO_MVAL(), l_R_2956, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R21 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_2951 = ((*(R17 *)rt_nil_check(l_T_2951))).f_NEXT;
}
RT_B_TICK();
} L_end2952: ;
}
l_NEEDL_2948 = ((*(R17 *)rt_nil_check(l_NEEDL_2948))).f_NEXT;
}
RT_B_TICK();
} L_end2950: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2949;
}
static rt_int r_DONTCARE_TYPE_ARG(R17 * p_TS) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2961 = 0;
return rv2961; }
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{
R17 * l_A_2962; memset(&l_A_2962, 0, sizeof l_A_2962);
l_A_2962 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_A_2962 == NULL)) goto L_end2963;
{
if ((((*(R17 *)rt_nil_check(l_A_2962))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2964 = 1;
return rv2964; }
}
l_A_2962 = ((*(R17 *)rt_nil_check(l_A_2962))).f_NEXT;
}
RT_B_TICK();
} L_end2963: ;
}
{ rt_int rv2965 = 0;
return rv2965; }
}
{
R12 * l_Y_2966; memset(&l_Y_2966, 0, sizeof l_Y_2966);
l_Y_2966 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
R17 * l_A_2967; memset(&l_A_2967, 0, sizeof l_A_2967);
l_A_2967 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R17 * l_F_2968; memset(&l_F_2968, 0, sizeof l_F_2968);
if ((l_Y_2966 == NULL))
{
{ rt_int rv2969 = 0;
return rv2969; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2966))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_2966))).f_DECL == NULL)))
{
{ rt_int rv2970 = 0;
return rv2970; }
}
l_F_2968 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2966))).f_DECL))).f_A;
for (;;) {
if ((l_F_2968 == NULL)) goto L_end2971;
{
{
R17 * l_N_2972; memset(&l_N_2972, 0, sizeof l_N_2972);
l_N_2972 = ((*(R17 *)rt_nil_check(l_F_2968))).f_A;
for (;;) {
if ((l_N_2972 == NULL)) goto L_end2973;
{
if ((l_A_2967 == NULL))
{
{ rt_int rv2974 = 0;
return rv2974; }
}
if (((((*(R17 *)rt_nil_check(l_F_2968))).f_B == NULL) && (((*(R17 *)rt_nil_check(l_A_2967))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2975 = 1;
return rv2975; }
}
l_A_2967 = ((*(R17 *)rt_nil_check(l_A_2967))).f_NEXT;
l_N_2972 = ((*(R17 *)rt_nil_check(l_N_2972))).f_NEXT;
}
RT_B_TICK();
} L_end2973: ;
}
l_F_2968 = ((*(R17 *)rt_nil_check(l_F_2968))).f_NEXT;
}
RT_B_TICK();
} L_end2971: ;
}
{ rt_int rv2976 = 0;
return rv2976; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R21 * p_BS, R29 * p_ARGS) { RT_B_TICK(); 
R29 * l_A_2977; memset(&l_A_2977, 0, sizeof l_A_2977);
l_A_2977 = p_ARGS;
R12 * l_I_2978; memset(&l_I_2978, 0, sizeof l_I_2978);
l_I_2978 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R21 * l_SAVED_2979; memset(&l_SAVED_2979, 0, sizeof l_SAVED_2979);
l_SAVED_2979 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R12 * l_SAVED_SEG_2980; memset(&l_SAVED_SEG_2980, 0, sizeof l_SAVED_SEG_2980);
l_SAVED_SEG_2980 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R12 * l_HOME_2981; memset(&l_HOME_2981, 0, sizeof l_HOME_2981);
l_HOME_2981 = r_ENTER_HOME(p_G);
R30 * l_P_2982; memset(&l_P_2982, 0, sizeof l_P_2982);
l_P_2982 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R30 * l_TAIL_2983; memset(&l_TAIL_2983, 0, sizeof l_TAIL_2983);
l_TAIL_2983 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_2978)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_2978))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_2978))).f_LINKAGE = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_I_2978))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_2978))).f_PARAMS = NULL;
S_R9(&((*(R12 *)rt_nil_check(l_I_2978))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_2978))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_2978;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(p_G))).f_HOME;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_2982 == NULL)) goto L_end2984;
{
{
R30 * l_PM_2985; memset(&l_PM_2985, 0, sizeof l_PM_2985);
l_PM_2985 = ({ R30 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R30(&(*(R30 *)rt_nil_check(l_PM_2985)), (*(R30 *)rt_nil_check(l_P_2982)), 0);
((*(R30 *)rt_nil_check(l_PM_2985))).f_NEXT = NULL;
if ((((*(R30 *)rt_nil_check(l_P_2982))).f_TS == NULL))
{
((*(R30 *)rt_nil_check(l_PM_2985))).f_T = NULL;
}
else if ((((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2982))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R30 *)rt_nil_check(l_PM_2985))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R30 *)rt_nil_check(l_P_2982))).f_TS) && ((*(R29 *)rt_nil_check(l_A_2977))).f_HAVE))
{
((*(R30 *)rt_nil_check(l_PM_2985))).f_T = (((*(R29 *)rt_nil_check(l_A_2977))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R30 *)rt_nil_check(l_PM_2985))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R30 *)rt_nil_check(l_PM_2985))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R30 *)rt_nil_check(l_PM_2985))).f_T = ((*(R22 *)rt_nil_check(((*(R30 *)rt_nil_check(l_PM_2985))).f_T))).f_BASE;
}
}
}
else
{
((*(R30 *)rt_nil_check(l_PM_2985))).f_T = r_RESOLVE(((*(R30 *)rt_nil_check(l_P_2982))).f_TS);
}
if ((!(((*(R30 *)rt_nil_check(l_P_2982))).f_TS == NULL)))
{
if (((((((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2982))).f_TS))).f_KIND == g_TS_GEN) || (((((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2982))).f_TS))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2982))).f_TS))).f_A == NULL))))) && ((((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2982))).f_TS))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((!(r_FIND_BIND(p_BS, ((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2982))).f_TS))).f_NAME) == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(r_FIND_BIND(p_BS, ((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2982))).f_TS))).f_NAME)))).f_T == NULL)))
{
((*(R30 *)rt_nil_check(l_PM_2985))).f_T = r_MARK_GENP(((*(R30 *)rt_nil_check(l_PM_2985))).f_T, ((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2982))).f_TS))).f_NAME);
}
}
}
}
((*(R30 *)rt_nil_check(l_PM_2985))).f_TS = NULL;
if ((l_TAIL_2983 == NULL))
{
((*(R12 *)rt_nil_check(l_I_2978))).f_PARAMS = l_PM_2985;
}
else
{
((*(R30 *)rt_nil_check(l_TAIL_2983))).f_NEXT = l_PM_2985;
}
l_TAIL_2983 = l_PM_2985;
}
l_P_2982 = ((*(R30 *)rt_nil_check(l_P_2982))).f_NEXT;
l_A_2977 = ((*(R29 *)rt_nil_check(l_A_2977))).f_NEXT;
}
RT_B_TICK();
} L_end2984: ;
((*(R12 *)rt_nil_check(l_I_2978))).f_RESULT = r_RESULT_TYPE(l_I_2978);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2979;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_2980;
r_LEAVE_HOME(p_G, l_HOME_2981);
S_R9(&((*(R12 *)rt_nil_check(l_I_2978))).f_FWD, r_C_HEADER(l_I_2978), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_2978))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_2978))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_2978;
{ R12 * rv2986 = l_I_2978;
return rv2986; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R9 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2987 = 0;
return rv2987; }
}
{ rt_int rv2988 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv2988; }
rt_raise(RT_X_INIT);
}
static R17 * r_SUBST_FORMALS(R17 * p_TS, R17 * p_FORMALS, R17 * p_ARGS) { RT_B_TICK(); 
R17 * l_C_2989; memset(&l_C_2989, 0, sizeof l_C_2989);
if ((p_TS == NULL))
{
{ R17 * rv2990 = NULL;
return rv2990; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R17 * l_F_2991; memset(&l_F_2991, 0, sizeof l_F_2991);
l_F_2991 = p_FORMALS;
R17 * l_A_2992; memset(&l_A_2992, 0, sizeof l_A_2992);
l_A_2992 = p_ARGS;
for (;;) {
if ((l_F_2991 == NULL)) goto L_end2993;
{
{
R17 * l_N_2994; memset(&l_N_2994, 0, sizeof l_N_2994);
l_N_2994 = ((*(R17 *)rt_nil_check(l_F_2991))).f_A;
for (;;) {
if ((l_N_2994 == NULL)) goto L_end2995;
{
if ((l_A_2992 == NULL))
{
{ R17 * rv2996 = p_TS;
return rv2996; }
}
if (((((*(R17 *)rt_nil_check(l_F_2991))).f_B == NULL) && r_TEQ(((*(R17 *)rt_nil_check(l_N_2994))).f_NAME, ((*(R17 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R17 * rv2997 = l_A_2992;
return rv2997; }
}
l_A_2992 = ((*(R17 *)rt_nil_check(l_A_2992))).f_NEXT;
l_N_2994 = ((*(R17 *)rt_nil_check(l_N_2994))).f_NEXT;
}
RT_B_TICK();
} L_end2995: ;
}
l_F_2991 = ((*(R17 *)rt_nil_check(l_F_2991))).f_NEXT;
}
RT_B_TICK();
} L_end2993: ;
}
{ R17 * rv2998 = p_TS;
return rv2998; }
}
l_C_2989 = r_COPY_NODE(p_TS);
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R17 *)rt_nil_check(l_C_2989))).f_C = r_SUBST_FORMALS(((*(R17 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R17 *)rt_nil_check(l_C_2989))).f_A = r_SUBST_FORMALS(((*(R17 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R17 * rv2999 = l_C_2989;
return rv2999; }
rt_raise(RT_X_INIT);
}
static R17 * r_COPY_NODE(R17 * p_N) { RT_B_TICK(); 
R17 * l_C_3000; memset(&l_C_3000, 0, sizeof l_C_3000);
l_C_3000 = ({ R17 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R17(&(*(R17 *)rt_nil_check(l_C_3000)), (*(R17 *)rt_nil_check(p_N)), 0);
((*(R17 *)rt_nil_check(l_C_3000))).f_NEXT = NULL;
{ R17 * rv3001 = l_C_3000;
return rv3001; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R17 * p_L, R9 p_NAME) { RT_B_TICK(); 
R17 * l_P_3002; memset(&l_P_3002, 0, sizeof l_P_3002);
l_P_3002 = p_L;
for (;;) {
if ((l_P_3002 == NULL)) goto L_end3003;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_3002))).f_NAME, p_NAME))
{
{ rt_int rv3004 = 1;
return rv3004; }
}
l_P_3002 = ((*(R17 *)rt_nil_check(l_P_3002))).f_NEXT;
}
RT_B_TICK();
} L_end3003: ;
{ rt_int rv3005 = 0;
return rv3005; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_IS_3006; memset(&l_IS_3006, 0, sizeof l_IS_3006);
l_IS_3006 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv3007 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv3007; }
}
if ((l_IS_3006 == NULL))
{
{ rt_int rv3008 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv3008; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R20 *)rt_nil_check(l_IS_3006))).f_ID) || (((*(R20 *)rt_nil_check(l_IS_3006))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv3009 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv3009; }
}
if ((!(((*(R20 *)rt_nil_check(l_IS_3006))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_3006))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3010 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv3010; }
}
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_3006))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3011 = 0;
return rv3011; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { RT_B_TICK(); 
R17 * l_ITEMS_3012; memset(&l_ITEMS_3012, 0, sizeof l_ITEMS_3012);
l_ITEMS_3012 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R17 * l_HEAD_3013; memset(&l_HEAD_3013, 0, sizeof l_HEAD_3013);
l_HEAD_3013 = NULL;
R17 * l_TAIL_3014; memset(&l_TAIL_3014, 0, sizeof l_TAIL_3014);
l_TAIL_3014 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_3012 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R17 *)rt_nil_check(l_ITEMS_3012))).f_A, &l_HEAD_3013, &l_TAIL_3014);
r_ADD_USES(((*(R17 *)rt_nil_check(l_ITEMS_3012))).f_B, &l_HEAD_3013, &l_TAIL_3014);
{
R17 * l_R_3015; memset(&l_R_3015, 0, sizeof l_R_3015);
l_R_3015 = ((*(R17 *)rt_nil_check(l_ITEMS_3012))).f_C;
for (;;) {
if ((l_R_3015 == NULL)) goto L_end3016;
{
{
R12 * l_Z_3017; memset(&l_Z_3017, 0, sizeof l_Z_3017);
l_Z_3017 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_3015))).f_NAME);
if (((l_Z_3017 == NULL) && (!r_LOCAL_MODULE_EXPORTS(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_C, ((*(R17 *)rt_nil_check(l_R_3015))).f_NAME))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_R_3015))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R17 *)rt_nil_check(l_R_3015))).f_NAME);
}
for (;;) {
if ((l_Z_3017 == NULL)) goto L_end3018;
{
if ((((*(R12 *)rt_nil_check(l_Z_3017))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_3019; memset(&l_O_3019, 0, sizeof l_O_3019);
l_O_3019 = r_ORIGINAL(l_Z_3017);
R17 * l_U_3020; memset(&l_U_3020, 0, sizeof l_U_3020);
r_COMPUTE_USES(l_O_3019);
l_U_3020 = ((*(R12 *)rt_nil_check(l_O_3019))).f_USES;
for (;;) {
if ((l_U_3020 == NULL)) goto L_end3021;
{
if ((!r_IN_IDENTS(l_HEAD_3013, ((*(R17 *)rt_nil_check(l_U_3020))).f_NAME)))
{
{
R17 * l_N_3022; memset(&l_N_3022, 0, sizeof l_N_3022);
l_N_3022 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_U_3020))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_3022))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3020))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_3022))).f_IV = ((*(R17 *)rt_nil_check(l_U_3020))).f_IV;
r_ADD_LIST(l_N_3022, &l_HEAD_3013, &l_TAIL_3014);
}
}
l_U_3020 = ((*(R17 *)rt_nil_check(l_U_3020))).f_NEXT;
}
RT_B_TICK();
} L_end3021: ;
}
}
l_Z_3017 = r_LOOKUP_NEXT(l_Z_3017);
}
RT_B_TICK();
} L_end3018: ;
}
l_R_3015 = ((*(R17 *)rt_nil_check(l_R_3015))).f_NEXT;
}
RT_B_TICK();
} L_end3016: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_3013;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static rt_int r_LOCAL_MODULE_EXPORTS(R17 * p_B, R9 p_NAME) { RT_B_TICK(); 
R17 * l_M_3023; memset(&l_M_3023, 0, sizeof l_M_3023);
if ((p_B == NULL))
{
{ rt_int rv3024 = 0;
return rv3024; }
}
l_M_3023 = ((*(R17 *)rt_nil_check(p_B))).f_C;
for (;;) {
if ((l_M_3023 == NULL)) goto L_end3025;
{
if ((((*(R17 *)rt_nil_check(l_M_3023))).f_KIND == g_N_MODULE))
{
if ((((((*(R17 *)rt_nil_check(l_M_3023))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(l_M_3023))).f_B, p_NAME)) || r_LOCAL_MODULE_EXPORTS(((*(R17 *)rt_nil_check(l_M_3023))).f_C, p_NAME)))
{
{ rt_int rv3026 = 1;
return rv3026; }
}
}
l_M_3023 = ((*(R17 *)rt_nil_check(l_M_3023))).f_NEXT;
}
RT_B_TICK();
} L_end3025: ;
{ rt_int rv3027 = 0;
return rv3027; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_USES(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3028; memset(&l_R_3028, 0, sizeof l_R_3028);
l_R_3028 = p_RS;
for (;;) {
if ((l_R_3028 == NULL)) goto L_end3029;
{
if ((((*(R17 *)rt_nil_check(l_R_3028))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_3028));
if ((!(((*(R17 *)rt_nil_check(l_R_3028))).f_E == NULL)))
{
r_IMPORTS_KNOWN(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3028))).f_E))).f_A, 0);
r_IMPORTS_KNOWN(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3028))).f_E))).f_B, 1);
r_INPUT_IMPORT_CONFLICT(((*(R17 *)rt_nil_check(l_R_3028))).f_E, ((*(R17 *)rt_nil_check(l_R_3028))).f_LINE);
}
}
l_R_3028 = ((*(R17 *)rt_nil_check(l_R_3028))).f_NEXT;
}
RT_B_TICK();
} L_end3029: ;
}
static void r_IMPORTS_KNOWN(R17 * p_L, rt_int p_INOUT) { RT_B_TICK(); 
R17 * l_P_3030; memset(&l_P_3030, 0, sizeof l_P_3030);
l_P_3030 = p_L;
for (;;) {
if ((l_P_3030 == NULL)) goto L_end3031;
{
{
R12 * l_V_3032; memset(&l_V_3032, 0, sizeof l_V_3032);
l_V_3032 = r_LOOKUP(((*(R17 *)rt_nil_check(l_P_3030))).f_NAME);
if ((!(l_V_3032 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_V_3032))).f_KIND == g_Y_VAR))
{
if ((((!r_CHECK_IMPORTED(l_V_3032, ((*(R17 *)rt_nil_check(l_P_3030))).f_LINE)) && p_INOUT) && (!((*(R12 *)rt_nil_check(l_V_3032))).f_INPUT)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_3030))).f_LINE, rt_str("imported for change, but only for input in the enclosing scope (4.1.1): ", 72), ((*(R17 *)rt_nil_check(l_P_3030))).f_NAME);
}
}
}
}
l_P_3030 = ((*(R17 *)rt_nil_check(l_P_3030))).f_NEXT;
}
RT_B_TICK();
} L_end3031: ;
}
static void r_INPUT_IMPORT_CONFLICT(R17 * p_ITEMS, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_3033; memset(&l_R_3033, 0, sizeof l_R_3033);
l_R_3033 = ((*(R17 *)rt_nil_check(p_ITEMS))).f_C;
for (;;) {
if ((l_R_3033 == NULL)) goto L_end3034;
{
{
R12 * l_Z_3035; memset(&l_Z_3035, 0, sizeof l_Z_3035);
l_Z_3035 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_3033))).f_NAME);
for (;;) {
if ((l_Z_3035 == NULL)) goto L_end3036;
{
if ((((*(R12 *)rt_nil_check(l_Z_3035))).f_KIND == g_Y_ROUTINE))
{
{
R17 * l_D_3037; memset(&l_D_3037, 0, sizeof l_D_3037);
l_D_3037 = ((*(R12 *)rt_nil_check(r_ORIGINAL(l_Z_3035)))).f_DECL;
if ((!(l_D_3037 == NULL)))
{
if (((((*(R17 *)rt_nil_check(l_D_3037))).f_KIND == g_N_ROUTINE) && (!(((*(R17 *)rt_nil_check(l_D_3037))).f_E == NULL))))
{
{
R17 * l_V_3038; memset(&l_V_3038, 0, sizeof l_V_3038);
l_V_3038 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_3037))).f_E))).f_B;
for (;;) {
if ((l_V_3038 == NULL)) goto L_end3039;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(p_ITEMS))).f_A, ((*(R17 *)rt_nil_check(l_V_3038))).f_NAME))
{
r_FAILT(p_LINE, rt_str("imported for input, and inout by an imported routine (4.3.1): ", 62), ((*(R17 *)rt_nil_check(l_V_3038))).f_NAME);
}
l_V_3038 = ((*(R17 *)rt_nil_check(l_V_3038))).f_NEXT;
}
RT_B_TICK();
} L_end3039: ;
}
}
}
}
}
l_Z_3035 = r_LOOKUP_NEXT(l_Z_3035);
}
RT_B_TICK();
} L_end3036: ;
}
l_R_3033 = ((*(R17 *)rt_nil_check(l_R_3033))).f_NEXT;
}
RT_B_TICK();
} L_end3034: ;
}
static void r_ADD_USES(R17 * p_L, R17 * *p_HEAD, R17 * *p_TAIL) { RT_B_TICK(); 
R17 * l_P_3040; memset(&l_P_3040, 0, sizeof l_P_3040);
l_P_3040 = p_L;
for (;;) {
if ((l_P_3040 == NULL)) goto L_end3041;
{
{
R12 * l_V_3042; memset(&l_V_3042, 0, sizeof l_V_3042);
l_V_3042 = r_LOOKUP(((*(R17 *)rt_nil_check(l_P_3040))).f_NAME);
R17 * l_N_3043; memset(&l_N_3043, 0, sizeof l_N_3043);
l_N_3043 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_P_3040))).f_LINE);
if ((l_V_3042 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_3040))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R17 *)rt_nil_check(l_P_3040))).f_NAME);
}
S_R9(&((*(R17 *)rt_nil_check(l_N_3043))).f_NAME, ((*(R17 *)rt_nil_check(l_P_3040))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_3043))).f_IV = ((*(R12 *)rt_nil_check(l_V_3042))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_3042))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_3043, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_3040 = ((*(R17 *)rt_nil_check(l_P_3040))).f_NEXT;
}
RT_B_TICK();
} L_end3041: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_IS_3044; memset(&l_IS_3044, 0, sizeof l_IS_3044);
l_IS_3044 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R17 * l_U_3045; memset(&l_U_3045, 0, sizeof l_U_3045);
l_U_3045 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_3044 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R20 *)rt_nil_check(l_IS_3044))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_3045 == NULL)) goto L_end3046;
{
if ((!(((*(R17 *)rt_nil_check(l_U_3045))).f_IV == ((*(R20 *)rt_nil_check(l_IS_3044))).f_ID)))
{
if ((((*(R20 *)rt_nil_check(l_IS_3044))).f_IMPORTS == NULL))
{
r_FAIL2(p_LINE, rt_str("the routine ", 12), ((*(R12 *)rt_nil_check(p_Y))).f_NAME, rt_str(" uses the variable ", 19), ((*(R17 *)rt_nil_check(l_U_3045))).f_NAME, rt_str(": import one of them (4.1.1)", 28));
}
if ((!(((((((r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_3044))).f_IMPORTS))).f_A, ((*(R17 *)rt_nil_check(l_U_3045))).f_NAME) || r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_3044))).f_IMPORTS))).f_B, ((*(R17 *)rt_nil_check(l_U_3045))).f_NAME)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_3044))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_3044))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_3044))).f_IMPORTS))).f_E, p_Y)) || ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL)) && r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_3044))).f_IMPORTS))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))) || r_IMPORTED_ROUTINE_USES(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_3044))).f_IMPORTS))).f_C, ((*(R17 *)rt_nil_check(l_U_3045))).f_NAME)))))
{
r_FAIL2(p_LINE, rt_str("the routine ", 12), ((*(R12 *)rt_nil_check(p_Y))).f_NAME, rt_str(" uses the variable ", 19), ((*(R17 *)rt_nil_check(l_U_3045))).f_NAME, rt_str(": import one of them (4.1.1)", 28));
}
}
l_U_3045 = ((*(R17 *)rt_nil_check(l_U_3045))).f_NEXT;
}
RT_B_TICK();
} L_end3046: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R17 * p_RS, R9 p_NAME) { RT_B_TICK(); 
R17 * l_R_3047; memset(&l_R_3047, 0, sizeof l_R_3047);
l_R_3047 = p_RS;
for (;;) {
if ((l_R_3047 == NULL)) goto L_end3048;
{
{
R12 * l_Z_3049; memset(&l_Z_3049, 0, sizeof l_Z_3049);
l_Z_3049 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_3047))).f_NAME);
for (;;) {
if ((l_Z_3049 == NULL)) goto L_end3050;
{
if ((((*(R12 *)rt_nil_check(l_Z_3049))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_3051; memset(&l_O_3051, 0, sizeof l_O_3051);
l_O_3051 = r_ORIGINAL(l_Z_3049);
r_COMPUTE_USES(l_O_3051);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_3051))).f_USES, p_NAME))
{
{ rt_int rv3052 = 1;
return rv3052; }
}
}
}
l_Z_3049 = r_LOOKUP_NEXT(l_Z_3049);
}
RT_B_TICK();
} L_end3050: ;
}
l_R_3047 = ((*(R17 *)rt_nil_check(l_R_3047))).f_NEXT;
}
RT_B_TICK();
} L_end3048: ;
{ rt_int rv3053 = 0;
return rv3053; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R17 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3054; memset(&l_M_3054, 0, sizeof l_M_3054);
l_M_3054 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_3054 == NULL)) goto L_end3055;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_3054))).f_NAME))
{
{ rt_int rv3056 = 1;
return rv3056; }
}
l_M_3054 = ((*(R12 *)rt_nil_check(l_M_3054))).f_MODL;
}
RT_B_TICK();
} L_end3055: ;
{ rt_int rv3057 = 0;
return rv3057; }
rt_raise(RT_X_INIT);
}
static R9 r_BASE_PART(R9 p_N, rt_int p_P) { RT_B_TICK(); 
{ R9 rv3058 = r_MKN(rt_b_slice(r_STR(p_N, (p_N).f_LEN), rt_add(p_P, ((rt_int)1LL)), rt_sub((p_N).f_LEN, ((rt_int)1LL))));
return rv3058; }
rt_raise(RT_X_INIT);
}
static R9 r_BASE_NAME(R12 * p_Y) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R9 rv3059 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv3059; }
}
{ R9 rv3060 = r_BASE_PART(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN);
return rv3060; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R9 p_NAME) { RT_B_TICK(); 
R18 * l_C_3061; memset(&l_C_3061, 0, sizeof l_C_3061);
l_C_3061 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_3061 == NULL)) goto L_end3062;
{
if ((((*(R18 *)rt_nil_check(l_C_3061))).f_KIND == ((rt_int)1LL)))
{
goto L_end3062;
}
if ((((*(R18 *)rt_nil_check(l_C_3061))).f_KIND == ((rt_int)3LL)))
{
{
R17 * l_H_3063; memset(&l_H_3063, 0, sizeof l_H_3063);
l_H_3063 = ((*(R18 *)rt_nil_check(l_C_3061))).f_HANDLERS;
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
}
}
l_C_3061 = ((*(R18 *)rt_nil_check(l_C_3061))).f_NEXT;
}
RT_B_TICK();
} L_end3062: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R20 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv3066 = 1;
return rv3066; }
}
}
{ rt_int rv3067 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv3067; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R9 p_NAME) { RT_B_TICK(); 
R18 * l_C_3068; memset(&l_C_3068, 0, sizeof l_C_3068);
l_C_3068 = ({ R18 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R18(&(*(R18 *)rt_nil_check(l_C_3068)), ({ R18 rc3069; memset(&rc3069, 0, sizeof rc3069);  rc3069.f_KIND = p_KIND; S_R9(&rc3069.f_NAME, p_NAME, 0); rc3069.f_HANDLERS = NULL; rc3069.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc3069; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_3068;
}
static void r_POP_CTX(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R18 * r_LEAVE(rt_int p_KIND) { RT_B_TICK(); 
R18 * l_C_3070; memset(&l_C_3070, 0, sizeof l_C_3070);
l_C_3070 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_3070 == NULL)) goto L_end3071;
{
if ((((*(R18 *)rt_nil_check(l_C_3070))).f_KIND == p_KIND))
{
{ R18 * rv3072 = l_C_3070;
return rv3072; }
}
if ((((*(R18 *)rt_nil_check(l_C_3070))).f_KIND == ((rt_int)1LL)))
{
{ R18 * rv3073 = NULL;
return rv3073; }
}
if ((((*(R18 *)rt_nil_check(l_C_3070))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R18 *)rt_nil_check(l_C_3070))).f_NAME));
}
l_C_3070 = ((*(R18 *)rt_nil_check(l_C_3070))).f_NEXT;
}
RT_B_TICK();
} L_end3071: ;
{ R18 * rv3074 = NULL;
return rv3074; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { RT_B_TICK(); 
R18 * l_C_3075; memset(&l_C_3075, 0, sizeof l_C_3075);
l_C_3075 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_3076; memset(&l_N_3076, 0, sizeof l_N_3076);
l_N_3076 = ((rt_int)0LL);
for (;;) {
if ((l_C_3075 == NULL)) goto L_end3077;
{
if ((((*(R18 *)rt_nil_check(l_C_3075))).f_KIND == ((rt_int)1LL)))
{
goto L_end3077;
}
if ((((*(R18 *)rt_nil_check(l_C_3075))).f_KIND == ((rt_int)3LL)))
{
l_N_3076 = rt_add(l_N_3076, ((rt_int)1LL));
}
l_C_3075 = ((*(R18 *)rt_nil_check(l_C_3075))).f_NEXT;
}
RT_B_TICK();
} L_end3077: ;
{ rt_int rv3078 = l_N_3076;
return rv3078; }
rt_raise(RT_X_INIT);
}
static R9 r_EXC_NAME(R9 p_NAME) { RT_B_TICK(); 
R17 * l_N_3079; memset(&l_N_3079, 0, sizeof l_N_3079);
l_N_3079 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_3079 == NULL)) goto L_end3080;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_N_3079))).f_NAME, p_NAME))
{
{ R9 rv3081 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv3081; }
}
l_N_3079 = ((*(R17 *)rt_nil_check(l_N_3079))).f_NEXT;
}
RT_B_TICK();
} L_end3080: ;
l_N_3079 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_3079))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_3079))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_3079;
{ R9 rv3082 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv3082; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R17 * p_DECLS) { RT_B_TICK(); 
R17 * l_D_3083; memset(&l_D_3083, 0, sizeof l_D_3083);
l_D_3083 = p_DECLS;
for (;;) {
if ((l_D_3083 == NULL)) goto L_end3084;
{
if (((((*(R17 *)rt_nil_check(l_D_3083))).f_KIND == g_N_TYPE) || (((*(R17 *)rt_nil_check(l_D_3083))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_3085; memset(&l_Y_3085, 0, sizeof l_Y_3085);
l_Y_3085 = r_NEW_SYM(g_Y_TYPE, ((*(R17 *)rt_nil_check(l_D_3083))).f_NAME);
if ((((*(R17 *)rt_nil_check(l_D_3083))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_3085))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_3085))).f_DECL = l_D_3083;
r_DEFINE(l_Y_3085, ((*(R17 *)rt_nil_check(l_D_3083))).f_LINE);
if ((((*(R17 *)rt_nil_check(l_D_3083))).f_KIND == g_N_TYPE))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_3083))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_3083))).f_B))).f_A)))
{
((*(R7 *)rt_nil_check(g_W))).f_CHARSETS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_CHARSETS, ((rt_int)1LL));
}
}
}
}
l_D_3083 = ((*(R17 *)rt_nil_check(l_D_3083))).f_NEXT;
}
RT_B_TICK();
} L_end3084: ;
l_D_3083 = p_DECLS;
for (;;) {
if ((l_D_3083 == NULL)) goto L_end3086;
{
if (((((*(R17 *)rt_nil_check(l_D_3083))).f_KIND == g_N_TYPE) || (((*(R17 *)rt_nil_check(l_D_3083))).f_KIND == g_N_REPTYPE)))
{
{
R17 * l_SEEN_3087; memset(&l_SEEN_3087, 0, sizeof l_SEEN_3087);
l_SEEN_3087 = NULL;
rt_int l_FOUND_3088; memset(&l_FOUND_3088, 0, sizeof l_FOUND_3088);
l_FOUND_3088 = 0;
r_REFERS(((*(R17 *)rt_nil_check(l_D_3083))).f_B, C_R9(((*(R17 *)rt_nil_check(l_D_3083))).f_NAME), p_DECLS, &l_SEEN_3087, &l_FOUND_3088);
if (l_FOUND_3088)
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_3083))).f_LINE, rt_str("a circular type declaration (3.12.1, 3.12.3): ", 46), ((*(R17 *)rt_nil_check(l_D_3083))).f_NAME);
}
}
{
R17 * l_F_3089; memset(&l_F_3089, 0, sizeof l_F_3089);
l_F_3089 = ((*(R17 *)rt_nil_check(l_D_3083))).f_A;
for (;;) {
if ((l_F_3089 == NULL)) goto L_end3090;
{
if (((((*(R17 *)rt_nil_check(l_F_3089))).f_IV == ((rt_int)1LL)) && (((*(R17 *)rt_nil_check(l_D_3083))).f_KIND == g_N_TYPE)))
{
{
R17 * l_N_3091; memset(&l_N_3091, 0, sizeof l_N_3091);
l_N_3091 = ((*(R17 *)rt_nil_check(l_F_3089))).f_A;
for (;;) {
if ((l_N_3091 == NULL)) goto L_end3092;
{
if (r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_D_3083))).f_B, ((*(R17 *)rt_nil_check(l_N_3091))).f_NAME))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_3083))).f_LINE, rt_str("a TAG formal is only a tag-name or an argument for a TAG formal (3.12.1): ", 74), ((*(R17 *)rt_nil_check(l_N_3091))).f_NAME);
}
l_N_3091 = ((*(R17 *)rt_nil_check(l_N_3091))).f_NEXT;
}
RT_B_TICK();
} L_end3092: ;
}
}
if ((!(((*(R17 *)rt_nil_check(l_F_3089))).f_B == NULL)))
{
if (r_NAMES_VARIABLE(((*(R17 *)rt_nil_check(l_F_3089))).f_B, p_DECLS))
{
r_FAIL(((*(R17 *)rt_nil_check(l_F_3089))).f_LINE, rt_str("the type-arguments in the type of a formal must be manifest (3.12.1)", 68));
}
}
l_F_3089 = ((*(R17 *)rt_nil_check(l_F_3089))).f_NEXT;
}
RT_B_TICK();
} L_end3090: ;
}
}
l_D_3083 = ((*(R17 *)rt_nil_check(l_D_3083))).f_NEXT;
}
RT_B_TICK();
} L_end3086: ;
l_D_3083 = p_DECLS;
for (;;) {
if ((l_D_3083 == NULL)) goto L_end3093;
{
if ((((*(R17 *)rt_nil_check(l_D_3083))).f_KIND == g_N_TYPE))
{
{
R17 * l_F_3094; memset(&l_F_3094, 0, sizeof l_F_3094);
l_F_3094 = ((*(R17 *)rt_nil_check(l_D_3083))).f_A;
for (;;) {
if ((l_F_3094 == NULL)) goto L_end3095;
{
if (((((*(R17 *)rt_nil_check(l_F_3094))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(l_F_3094))).f_B == NULL))))
{
{
R22 * l_FT_3096; memset(&l_FT_3096, 0, sizeof l_FT_3096);
l_FT_3096 = r_REAL_TYPE(r_RESOLVE(((*(R17 *)rt_nil_check(l_F_3094))).f_B));
if (((!r_IS_SCALAR(l_FT_3096)) || (!(((*(R22 *)rt_nil_check(l_FT_3096))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_F_3094))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
}
l_F_3094 = ((*(R17 *)rt_nil_check(l_F_3094))).f_NEXT;
}
RT_B_TICK();
} L_end3095: ;
}
}
l_D_3083 = ((*(R17 *)rt_nil_check(l_D_3083))).f_NEXT;
}
RT_B_TICK();
} L_end3093: ;
}
static void r_REFERS(R17 * p_L, R9 p_TARGET, R17 * p_DECLS, R17 * *p_SEEN, rt_int *p_FOUND) { RT_B_TICK(); 
R17 * l_N_3097; memset(&l_N_3097, 0, sizeof l_N_3097);
l_N_3097 = p_L;
for (;;) {
if (((l_N_3097 == NULL) || (*p_FOUND))) goto L_end3098;
{
if (((((*(R17 *)rt_nil_check(l_N_3097))).f_KIND == g_TS_NAME) || (((*(R17 *)rt_nil_check(l_N_3097))).f_KIND == g_N_REP)))
{
if ((!r_TEQS(((*(R17 *)rt_nil_check(l_N_3097))).f_NAME, rt_str("PTR", 3))))
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_N_3097))).f_NAME, p_TARGET))
{
(*p_FOUND) = 1;
return;
}
if ((!r_IN_IDENTS((*p_SEEN), ((*(R17 *)rt_nil_check(l_N_3097))).f_NAME)))
{
{
R17 * l_M_3099; memset(&l_M_3099, 0, sizeof l_M_3099);
l_M_3099 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_N_3097))).f_LINE);
R17 * l_D_3100; memset(&l_D_3100, 0, sizeof l_D_3100);
l_D_3100 = p_DECLS;
S_R9(&((*(R17 *)rt_nil_check(l_M_3099))).f_NAME, ((*(R17 *)rt_nil_check(l_N_3097))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_M_3099))).f_NEXT = (*p_SEEN);
(*p_SEEN) = l_M_3099;
for (;;) {
if ((l_D_3100 == NULL)) goto L_end3101;
{
if (((((((*(R17 *)rt_nil_check(l_D_3100))).f_KIND == g_N_TYPE) || (((*(R17 *)rt_nil_check(l_D_3100))).f_KIND == g_N_REPTYPE))) && r_TEQ(((*(R17 *)rt_nil_check(l_D_3100))).f_NAME, ((*(R17 *)rt_nil_check(l_N_3097))).f_NAME)))
{
r_REFERS(((*(R17 *)rt_nil_check(l_D_3100))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
l_D_3100 = ((*(R17 *)rt_nil_check(l_D_3100))).f_NEXT;
}
RT_B_TICK();
} L_end3101: ;
}
}
r_REFERS(((*(R17 *)rt_nil_check(l_N_3097))).f_A, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_3097))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_3097))).f_C, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
}
else
{
r_REFERS(((*(R17 *)rt_nil_check(l_N_3097))).f_A, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_3097))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_3097))).f_C, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_3097))).f_D, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
l_N_3097 = ((*(R17 *)rt_nil_check(l_N_3097))).f_NEXT;
}
RT_B_TICK();
} L_end3098: ;
}
static rt_int r_TAG_MISUSED(R17 * p_L, R9 p_NAME) { RT_B_TICK(); 
R17 * l_N_3102; memset(&l_N_3102, 0, sizeof l_N_3102);
l_N_3102 = p_L;
for (;;) {
if ((l_N_3102 == NULL)) goto L_end3103;
{
if ((((*(R17 *)rt_nil_check(l_N_3102))).f_KIND == g_TS_NAME))
{
{
R17 * l_A_3104; memset(&l_A_3104, 0, sizeof l_A_3104);
l_A_3104 = ((*(R17 *)rt_nil_check(l_N_3102))).f_A;
for (;;) {
if ((l_A_3104 == NULL)) goto L_end3105;
{
if ((!((((((((*(R17 *)rt_nil_check(l_A_3104))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_A_3104))).f_KIND == g_TS_NAME))) && r_TEQ(((*(R17 *)rt_nil_check(l_A_3104))).f_NAME, p_NAME)) && (((*(R17 *)rt_nil_check(l_A_3104))).f_A == NULL)))))
{
if (r_TAG_MISUSED1(l_A_3104, p_NAME))
{
{ rt_int rv3106 = 1;
return rv3106; }
}
}
l_A_3104 = ((*(R17 *)rt_nil_check(l_A_3104))).f_NEXT;
}
RT_B_TICK();
} L_end3105: ;
}
if (((r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_N_3102))).f_B, p_NAME) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_N_3102))).f_C, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_N_3102))).f_E, p_NAME)))
{
{ rt_int rv3107 = 1;
return rv3107; }
}
}
else if (r_TAG_MISUSED1(l_N_3102, p_NAME))
{
{ rt_int rv3108 = 1;
return rv3108; }
}
l_N_3102 = ((*(R17 *)rt_nil_check(l_N_3102))).f_NEXT;
}
RT_B_TICK();
} L_end3103: ;
{ rt_int rv3109 = 0;
return rv3109; }
rt_raise(RT_X_INIT);
}
static rt_int r_TAG_MISUSED1(R17 * p_N, R9 p_NAME) { RT_B_TICK(); 
rt_int l_K_3110; memset(&l_K_3110, 0, sizeof l_K_3110);
l_K_3110 = ((*(R17 *)rt_nil_check(p_N))).f_KIND;
if ((l_K_3110 == g_TS_NAME))
{
{ rt_int rv3111 = (r_TAG_MISUSED(p_N, p_NAME) && 1);
return rv3111; }
}
if ((((((l_K_3110 == g_N_NAME) || (l_K_3110 == g_N_ENUMLIT)) || (l_K_3110 == g_N_APPLY))) && r_TEQ(((*(R17 *)rt_nil_check(p_N))).f_NAME, p_NAME)))
{
{ rt_int rv3112 = 1;
return rv3112; }
}
{ rt_int rv3113 = ((((r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_A, p_NAME) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_B, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_C, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_D, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_E, p_NAME));
return rv3113; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_VARIABLE(R17 * p_L, R17 * p_DECLS) { RT_B_TICK(); 
{ rt_int rv3114 = r_NAMES_VARIABLE_BUT(p_L, p_DECLS, NULL);
return rv3114; }
rt_raise(RT_X_INIT);
}
static void r_GEN_NAMES(R17 * p_L, R17 * *p_HEAD) { RT_B_TICK(); 
R17 * l_N_3115; memset(&l_N_3115, 0, sizeof l_N_3115);
l_N_3115 = p_L;
for (;;) {
if ((l_N_3115 == NULL)) goto L_end3116;
{
if (((((((*(R17 *)rt_nil_check(l_N_3115))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_N_3115))).f_KIND == g_N_PARAM))) && ((((*(R17 *)rt_nil_check(l_N_3115))).f_NAME).f_LEN > ((rt_int)0LL))))
{
{
R17 * l_M_3117; memset(&l_M_3117, 0, sizeof l_M_3117);
l_M_3117 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_N_3115))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_M_3117))).f_NAME, ((*(R17 *)rt_nil_check(l_N_3115))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_M_3117))).f_NEXT = (*p_HEAD);
(*p_HEAD) = l_M_3117;
}
}
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_3115))).f_A, &(*p_HEAD));
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_3115))).f_B, &(*p_HEAD));
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_3115))).f_C, &(*p_HEAD));
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_3115))).f_D, &(*p_HEAD));
l_N_3115 = ((*(R17 *)rt_nil_check(l_N_3115))).f_NEXT;
}
RT_B_TICK();
} L_end3116: ;
}
static rt_int r_NAMES_VARIABLE_BUT(R17 * p_L, R17 * p_DECLS, R17 * p_EXCL) { RT_B_TICK(); 
R17 * l_N_3118; memset(&l_N_3118, 0, sizeof l_N_3118);
l_N_3118 = p_L;
for (;;) {
if ((l_N_3118 == NULL)) goto L_end3119;
{
if (((((*(R17 *)rt_nil_check(l_N_3118))).f_KIND == g_N_NAME) && r_IN_IDENTS(p_EXCL, ((*(R17 *)rt_nil_check(l_N_3118))).f_NAME)))
{
}
else if ((((*(R17 *)rt_nil_check(l_N_3118))).f_KIND == g_N_NAME))
{
{
R17 * l_D_3120; memset(&l_D_3120, 0, sizeof l_D_3120);
l_D_3120 = p_DECLS;
R12 * l_Y_3121; memset(&l_Y_3121, 0, sizeof l_Y_3121);
l_Y_3121 = r_LOOKUP(((*(R17 *)rt_nil_check(l_N_3118))).f_NAME);
for (;;) {
if ((l_D_3120 == NULL)) goto L_end3122;
{
if (((((*(R17 *)rt_nil_check(l_D_3120))).f_KIND == g_N_VAR) && r_IN_IDENTS(((*(R17 *)rt_nil_check(l_D_3120))).f_A, ((*(R17 *)rt_nil_check(l_N_3118))).f_NAME)))
{
{ rt_int rv3123 = 1;
return rv3123; }
}
l_D_3120 = ((*(R17 *)rt_nil_check(l_D_3120))).f_NEXT;
}
RT_B_TICK();
} L_end3122: ;
if ((!(l_Y_3121 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_3121))).f_KIND == g_Y_VAR) && (!((*(R12 *)rt_nil_check(l_Y_3121))).f_INPUT)))
{
{ rt_int rv3124 = 1;
return rv3124; }
}
}
}
}
else if ((((r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_3118))).f_A, p_DECLS, p_EXCL) || r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_3118))).f_B, p_DECLS, p_EXCL)) || r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_3118))).f_C, p_DECLS, p_EXCL)) || r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_3118))).f_D, p_DECLS, p_EXCL)))
{
{ rt_int rv3125 = 1;
return rv3125; }
}
l_N_3118 = ((*(R17 *)rt_nil_check(l_N_3118))).f_NEXT;
}
RT_B_TICK();
} L_end3119: ;
{ rt_int rv3126 = 0;
return rv3126; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_PRINTING_CHAR(R17 * p_L) { RT_B_TICK(); 
R17 * l_P_3127; memset(&l_P_3127, 0, sizeof l_P_3127);
l_P_3127 = p_L;
for (;;) {
if ((l_P_3127 == NULL)) goto L_end3128;
{
if (((((*(R17 *)rt_nil_check(l_P_3127))).f_NAME).f_LEN >= ((rt_int)3LL)))
{
if (rt_b_eq(r_STR(((*(R17 *)rt_nil_check(l_P_3127))).f_NAME, ((rt_int)2LL)), rt_str("\\'", 2)))
{
{ rt_int rv3129 = 1;
return rv3129; }
}
}
l_P_3127 = ((*(R17 *)rt_nil_check(l_P_3127))).f_NEXT;
}
RT_B_TICK();
} L_end3128: ;
{ rt_int rv3130 = 0;
return rv3130; }
rt_raise(RT_X_INIT);
}
static R22 * r_DEFAULT_CHARSET(rt_int p_LINE) { RT_B_TICK(); 
R12 * l_A_3131; memset(&l_A_3131, 0, sizeof l_A_3131);
l_A_3131 = r_LOOKUP(r_MKN(rt_str("ASCII", 5)));
R22 * l_FOUND_3132; memset(&l_FOUND_3132, 0, sizeof l_FOUND_3132);
l_FOUND_3132 = NULL;
rt_int l_N_3133; memset(&l_N_3133, 0, sizeof l_N_3133);
l_N_3133 = ((rt_int)0LL);
R12 * l_Y_3134; memset(&l_Y_3134, 0, sizeof l_Y_3134);
l_Y_3134 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
if (((((*(R7 *)rt_nil_check(g_W))).f_CHARSETS == ((rt_int)0LL)) && (!(l_A_3131 == NULL))))
{
if (((((*(R12 *)rt_nil_check(l_A_3131))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_A_3131))).f_DECL == NULL)))
{
{ R22 * rv3135 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv3135; }
}
}
for (;;) {
if ((l_Y_3134 == NULL)) goto L_end3136;
{
if (((((*(R12 *)rt_nil_check(l_Y_3134))).f_KIND == g_Y_TYPE) && ((((*(R12 *)rt_nil_check(l_Y_3134))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((r_LOOKUP(((*(R12 *)rt_nil_check(l_Y_3134))).f_NAME) == l_Y_3134))
{
{
R22 * l_T_3137; memset(&l_T_3137, 0, sizeof l_T_3137);
l_T_3137 = NULL;
if ((((*(R12 *)rt_nil_check(l_Y_3134))).f_DECL == NULL))
{
l_T_3137 = ((*(R12 *)rt_nil_check(l_Y_3134))).f_T;
}
else if (((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3134))).f_DECL))).f_KIND == g_N_TYPE) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3134))).f_DECL))).f_A == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3134))).f_DECL))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3134))).f_DECL))).f_B))).f_A)))
{
l_T_3137 = r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_3134))).f_NAME, p_LINE);
}
}
if ((!(l_T_3137 == NULL)))
{
l_T_3137 = r_REAL_TYPE(l_T_3137);
if ((((*(R22 *)rt_nil_check(l_T_3137))).f_KIND == g_T_ENUM))
{
if ((r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_3137))).f_BASE))).f_LITS) && (!(((*(R22 *)rt_nil_check(l_T_3137))).f_BASE == l_FOUND_3132))))
{
if ((!(l_FOUND_3132 == NULL)))
{
r_FAIL(p_LINE, rt_b_cat(rt_str("two character sets are available here: the literal needs ", 57), rt_str("a charset-name (3.7.2)", 22)));
}
l_FOUND_3132 = ((*(R22 *)rt_nil_check(l_T_3137))).f_BASE;
}
}
}
}
}
}
l_Y_3134 = ((*(R12 *)rt_nil_check(l_Y_3134))).f_SNEXT;
}
RT_B_TICK();
} L_end3136: ;
if ((l_FOUND_3132 == NULL))
{
r_FAIL(p_LINE, rt_str("no character set is available for the literal (3.7.2)", 53));
}
{ R22 * rv3138 = l_FOUND_3132;
return rv3138; }
rt_raise(RT_X_INIT);
}
static R22 * r_CHARSET_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_R_3139; memset(&l_R_3139, 0, sizeof l_R_3139);
l_R_3139 = r_REAL_TYPE(p_T);
if ((((*(R22 *)rt_nil_check(l_R_3139))).f_BASE == NULL))
{
{ R22 * rv3140 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv3140; }
}
{ R22 * rv3141 = ((*(R22 *)rt_nil_check(l_R_3139))).f_BASE;
return rv3141; }
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
R17 * l_S_3142; memset(&l_S_3142, 0, sizeof l_S_3142);
l_S_3142 = p_S0;
for (;;) {
if ((l_S_3142 == NULL)) goto L_end3143;
{
{
R17 * l_L_3144; memset(&l_L_3144, 0, sizeof l_L_3144);
l_L_3144 = l_S_3142;
for (;;) {
if ((!(((*(R17 *)rt_nil_check(l_L_3144))).f_KIND == g_N_LABELED))) goto L_end3145;
{
{
R12 * l_Y_3146; memset(&l_Y_3146, 0, sizeof l_Y_3146);
l_Y_3146 = r_NEW_SYM(g_Y_LABEL, ((*(R17 *)rt_nil_check(l_L_3144))).f_NAME);
S_R9(&((*(R12 *)rt_nil_check(l_Y_3146))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME_T(r_CID(((*(R17 *)rt_nil_check(l_L_3144))).f_NAME))), 0);
((*(R12 *)rt_nil_check(l_Y_3146))).f_MV = r_GUARDS();
r_DEFINE(l_Y_3146, ((*(R17 *)rt_nil_check(l_L_3144))).f_LINE);
}
l_L_3144 = ((*(R17 *)rt_nil_check(l_L_3144))).f_A;
}
RT_B_TICK();
} L_end3145: ;
}
l_S_3142 = ((*(R17 *)rt_nil_check(l_S_3142))).f_NEXT;
}
RT_B_TICK();
} L_end3143: ;
}
static void r_BODY(R17 * p_B) { RT_B_TICK(); 
R17 * l_D_3147; memset(&l_D_3147, 0, sizeof l_D_3147);
l_D_3147 = ((*(R17 *)rt_nil_check(p_B))).f_A;
R17 * l_S_3148; memset(&l_S_3148, 0, sizeof l_S_3148);
l_S_3148 = ((*(R17 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R17 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_3147 == NULL)) goto L_end3149;
{
if (((((*(R17 *)rt_nil_check(l_D_3147))).f_KIND == g_N_VAR) || (((*(R17 *)rt_nil_check(l_D_3147))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3147);
}
l_D_3147 = ((*(R17 *)rt_nil_check(l_D_3147))).f_NEXT;
}
RT_B_TICK();
} L_end3149: ;
r_DECLARE_LABELS(((*(R17 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_3148 == NULL)) goto L_end3150;
{
r_STMT(l_S_3148);
l_S_3148 = ((*(R17 *)rt_nil_check(l_S_3148))).f_NEXT;
}
RT_B_TICK();
} L_end3150: ;
}
static void r_OPEN_BODY(R17 * p_B) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R17 * p_S, R17 * p_BODY_NODE, R17 * p_HANDLERS) { RT_B_TICK(); 
R9 l_F_3151; memset(&l_F_3151, 0, sizeof l_F_3151);
S_R9(&l_F_3151, r_NEW_NAME(rt_str("xf", 2)), 0);
R17 * l_H_3152; memset(&l_H_3152, 0, sizeof l_H_3152);
l_H_3152 = p_HANDLERS;
R9 l_WORD_3153; memset(&l_WORD_3153, 0, sizeof l_WORD_3153);
S_R9(&l_WORD_3153, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_3151, l_F_3151));
r_PUSH_CTX(((rt_int)3LL), l_F_3151);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_3151, l_F_3151, l_F_3151));
for (;;) {
if ((l_H_3152 == NULL)) goto L_end3154;
{
{
R17 * l_N_3155; memset(&l_N_3155, 0, sizeof l_N_3155);
l_N_3155 = ((*(R17 *)rt_nil_check(l_H_3152))).f_A;
R9 l_COND_3156; memset(&l_COND_3156, 0, sizeof l_COND_3156);
S_R9(&l_COND_3156, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_3155 == NULL)) goto L_end3157;
{
if ((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_N_3155))).f_NEXT, ((*(R17 *)rt_nil_check(l_N_3155))).f_NAME) || r_IN_HANDLERS(((*(R17 *)rt_nil_check(l_H_3152))).f_NEXT, ((*(R17 *)rt_nil_check(l_N_3155))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_N_3155))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R17 *)rt_nil_check(l_N_3155))).f_NAME);
}
S_R9(&l_COND_3156, r_FMT3(rt_str("@ || @x == @", 12), l_COND_3156, l_F_3151, r_EXC_NAME(((*(R17 *)rt_nil_check(l_N_3155))).f_NAME)), 0);
l_N_3155 = ((*(R17 *)rt_nil_check(l_N_3155))).f_NEXT;
}
RT_B_TICK();
} L_end3157: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3153, l_COND_3156));
S_R9(&l_WORD_3153, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_3151, rt_str("x", 1)));
r_OPEN_BODY(((*(R17 *)rt_nil_check(l_H_3152))).f_B);
r_POP_CTX();
}
l_H_3152 = ((*(R17 *)rt_nil_check(l_H_3152))).f_NEXT;
}
RT_B_TICK();
} L_end3154: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_3151));
}
static void r_INTERFERENCE(R17 * p_S) { RT_B_TICK(); 
rt_int l_K_3158; memset(&l_K_3158, 0, sizeof l_K_3158);
l_K_3158 = ((*(R17 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_3158 == g_N_ASSIGN))
{
{
R17 * l_NAMES_3159; memset(&l_NAMES_3159, 0, sizeof l_NAMES_3159);
l_NAMES_3159 = NULL;
R17 * l_CALLS_3160; memset(&l_CALLS_3160, 0, sizeof l_CALLS_3160);
l_CALLS_3160 = NULL;
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_S))).f_A, &l_NAMES_3159, &l_CALLS_3160);
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_S))).f_B, &l_NAMES_3159, &l_CALLS_3160);
r_CHECK_INTERFERENCE(l_NAMES_3159, l_CALLS_3160, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 0);
}
}
else if ((l_K_3158 == g_N_CALL))
{
{
R17 * l_NAMES_3161; memset(&l_NAMES_3161, 0, sizeof l_NAMES_3161);
l_NAMES_3161 = NULL;
R17 * l_CALLS_3162; memset(&l_CALLS_3162, 0, sizeof l_CALLS_3162);
l_CALLS_3162 = NULL;
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_S))).f_A, &l_NAMES_3161, &l_CALLS_3162);
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_S))).f_B, &l_NAMES_3161, &l_CALLS_3162);
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_S))).f_C, &l_NAMES_3161, &l_CALLS_3162);
r_CHECK_INTERFERENCE(l_NAMES_3161, l_CALLS_3162, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 0);
}
}
else if (((l_K_3158 == g_N_RETURN) || (l_K_3158 == g_N_ASSERT)))
{
if ((!(((*(R17 *)rt_nil_check(p_S))).f_A == NULL)))
{
{
R17 * l_NAMES_3163; memset(&l_NAMES_3163, 0, sizeof l_NAMES_3163);
l_NAMES_3163 = NULL;
R17 * l_CALLS_3164; memset(&l_CALLS_3164, 0, sizeof l_CALLS_3164);
l_CALLS_3164 = NULL;
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_S))).f_A, &l_NAMES_3163, &l_CALLS_3164);
r_CHECK_INTERFERENCE(l_NAMES_3163, l_CALLS_3164, ((*(R17 *)rt_nil_check(p_S))).f_LINE, (l_K_3158 == g_N_ASSERT));
}
}
}
else if ((l_K_3158 == g_N_IF))
{
{
R17 * l_ARM_3165; memset(&l_ARM_3165, 0, sizeof l_ARM_3165);
l_ARM_3165 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_ARM_3165 == NULL)) goto L_end3166;
{
{
R17 * l_NAMES_3167; memset(&l_NAMES_3167, 0, sizeof l_NAMES_3167);
l_NAMES_3167 = NULL;
R17 * l_CALLS_3168; memset(&l_CALLS_3168, 0, sizeof l_CALLS_3168);
l_CALLS_3168 = NULL;
r_COLLECT_REFS(((*(R17 *)rt_nil_check(l_ARM_3165))).f_A, &l_NAMES_3167, &l_CALLS_3168);
r_CHECK_INTERFERENCE(l_NAMES_3167, l_CALLS_3168, ((*(R17 *)rt_nil_check(l_ARM_3165))).f_LINE, 0);
}
l_ARM_3165 = ((*(R17 *)rt_nil_check(l_ARM_3165))).f_NEXT;
}
RT_B_TICK();
} L_end3166: ;
}
}
}
static void r_COLLECT_LIST(R17 * p_L, R17 * *p_NAMES, R17 * *p_CALLS) { RT_B_TICK(); 
R17 * l_N_3169; memset(&l_N_3169, 0, sizeof l_N_3169);
l_N_3169 = p_L;
for (;;) {
if ((l_N_3169 == NULL)) goto L_end3170;
{
r_COLLECT_REFS(l_N_3169, &(*p_NAMES), &(*p_CALLS));
l_N_3169 = ((*(R17 *)rt_nil_check(l_N_3169))).f_NEXT;
}
RT_B_TICK();
} L_end3170: ;
}
static void r_COLLECT_REFS(R17 * p_E, R17 * *p_NAMES, R17 * *p_CALLS) { RT_B_TICK(); 
rt_int l_K_3171; memset(&l_K_3171, 0, sizeof l_K_3171);
if ((p_E == NULL))
{
return;
}
l_K_3171 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_3171 == g_N_NAME))
{
{
R12 * l_Y_3172; memset(&l_Y_3172, 0, sizeof l_Y_3172);
l_Y_3172 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_3172 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_3172))).f_KIND == g_Y_VAR))
{
(*p_NAMES) = r_NAME_REF(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_3172))).f_OWNER, NULL, (*p_NAMES));
}
}
}
}
else if ((l_K_3171 == g_N_APPLY))
{
{
R12 * l_Y_3173; memset(&l_Y_3173, 0, sizeof l_Y_3173);
l_Y_3173 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_3173 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_3173))).f_KIND == g_Y_VAR))
{
(*p_NAMES) = r_NAME_REF(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_3173))).f_OWNER, NULL, (*p_NAMES));
}
else if ((((*(R12 *)rt_nil_check(l_Y_3173))).f_KIND == g_Y_ROUTINE))
{
(*p_CALLS) = r_NAME_REF(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((rt_int)0LL), p_E, (*p_CALLS));
}
}
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_B, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_C, &(*p_NAMES), &(*p_CALLS));
}
}
else if ((((((l_K_3171 == g_N_FIELD) || (l_K_3171 == g_N_DEREF)) || (l_K_3171 == g_N_UNOP)) || (l_K_3171 == g_N_PAREN)) || (l_K_3171 == g_N_QUAL)))
{
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
}
else if (((((l_K_3171 == g_N_INDEX) || (l_K_3171 == g_N_SUBSTR)) || (l_K_3171 == g_N_BINOP)) || (l_K_3171 == g_N_IN)))
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
else if ((l_K_3171 == g_N_RECCONS))
{
{
R17 * l_F_3174; memset(&l_F_3174, 0, sizeof l_F_3174);
l_F_3174 = ((*(R17 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_F_3174 == NULL)) goto L_end3175;
{
r_COLLECT_REFS(((*(R17 *)rt_nil_check(l_F_3174))).f_A, &(*p_NAMES), &(*p_CALLS));
l_F_3174 = ((*(R17 *)rt_nil_check(l_F_3174))).f_NEXT;
}
RT_B_TICK();
} L_end3175: ;
}
}
else if ((l_K_3171 == g_N_ARRCONS))
{
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
}
}
static R17 * r_NAME_REF(R9 p_NAME, rt_int p_OWNER, R17 * p_A, R17 * p_L) { RT_B_TICK(); 
R17 * l_N_3176; memset(&l_N_3176, 0, sizeof l_N_3176);
l_N_3176 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_3176))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_3176))).f_IV = p_OWNER;
((*(R17 *)rt_nil_check(l_N_3176))).f_A = p_A;
((*(R17 *)rt_nil_check(l_N_3176))).f_NEXT = p_L;
{ R17 * rv3177 = l_N_3176;
return rv3177; }
rt_raise(RT_X_INIT);
}
static R17 * r_ROUTINE_DATA(R9 p_NAME, rt_int p_INOUT) { RT_B_TICK(); 
R12 * l_Y_3178; memset(&l_Y_3178, 0, sizeof l_Y_3178);
l_Y_3178 = r_LOOKUP(p_NAME);
R17 * l_R_3179; memset(&l_R_3179, 0, sizeof l_R_3179);
l_R_3179 = NULL;
rt_int l_FIRST_3180; memset(&l_FIRST_3180, 0, sizeof l_FIRST_3180);
l_FIRST_3180 = 1;
for (;;) {
if ((l_Y_3178 == NULL)) goto L_end3181;
{
if ((((*(R12 *)rt_nil_check(l_Y_3178))).f_KIND == g_Y_ROUTINE))
{
{
R17 * l_D_3182; memset(&l_D_3182, 0, sizeof l_D_3182);
l_D_3182 = r_DATA_OF(r_ORIGINAL(l_Y_3178), p_INOUT, ((rt_int)0LL));
if (l_FIRST_3180)
{
l_R_3179 = l_D_3182;
l_FIRST_3180 = 0;
}
else
{
l_R_3179 = r_INTERSECT_REFS(l_R_3179, l_D_3182);
}
}
}
else if (((!(((*(R12 *)rt_nil_check(l_Y_3178))).f_KIND == g_Y_ROUTINE)) && (!l_FIRST_3180)))
{
}
l_Y_3178 = r_LOOKUP_NEXT(l_Y_3178);
}
RT_B_TICK();
} L_end3181: ;
{ R17 * rv3183 = l_R_3179;
return rv3183; }
rt_raise(RT_X_INIT);
}
static R17 * r_DATA_OF(R12 * p_Y, rt_int p_INOUT, rt_int p_DEPTH) { RT_B_TICK(); 
R17 * l_R_3184; memset(&l_R_3184, 0, sizeof l_R_3184);
l_R_3184 = NULL;
if (((((*(R12 *)rt_nil_check(p_Y))).f_DECL == NULL) || (p_DEPTH > ((rt_int)20LL))))
{
{ R17 * rv3185 = NULL;
return rv3185; }
}
if ((!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_KIND == g_N_ROUTINE)))
{
{ R17 * rv3186 = NULL;
return rv3186; }
}
r_COMPUTE_USES(p_Y);
if ((!p_INOUT))
{
{
R17 * l_U_3187; memset(&l_U_3187, 0, sizeof l_U_3187);
l_U_3187 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_3187 == NULL)) goto L_end3188;
{
l_R_3184 = r_NAME_REF(((*(R17 *)rt_nil_check(l_U_3187))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3187))).f_IV, NULL, l_R_3184);
l_U_3187 = ((*(R17 *)rt_nil_check(l_U_3187))).f_NEXT;
}
RT_B_TICK();
} L_end3188: ;
}
{ R17 * rv3189 = l_R_3184;
return rv3189; }
}
if ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E == NULL))
{
{ R17 * rv3190 = NULL;
return rv3190; }
}
{
R17 * l_U_3191; memset(&l_U_3191, 0, sizeof l_U_3191);
l_U_3191 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_3191 == NULL)) goto L_end3192;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E))).f_B, ((*(R17 *)rt_nil_check(l_U_3191))).f_NAME))
{
l_R_3184 = r_NAME_REF(((*(R17 *)rt_nil_check(l_U_3191))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3191))).f_IV, NULL, l_R_3184);
}
l_U_3191 = ((*(R17 *)rt_nil_check(l_U_3191))).f_NEXT;
}
RT_B_TICK();
} L_end3192: ;
}
{
R17 * l_C_3193; memset(&l_C_3193, 0, sizeof l_C_3193);
l_C_3193 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E))).f_C;
for (;;) {
if ((l_C_3193 == NULL)) goto L_end3194;
{
{
R12 * l_Z_3195; memset(&l_Z_3195, 0, sizeof l_Z_3195);
l_Z_3195 = r_LOOKUP(((*(R17 *)rt_nil_check(l_C_3193))).f_NAME);
for (;;) {
if ((l_Z_3195 == NULL)) goto L_end3196;
{
if ((((*(R12 *)rt_nil_check(l_Z_3195))).f_KIND == g_Y_ROUTINE))
{
{
R17 * l_D_3197; memset(&l_D_3197, 0, sizeof l_D_3197);
l_D_3197 = r_DATA_OF(r_ORIGINAL(l_Z_3195), 1, rt_add(p_DEPTH, ((rt_int)1LL)));
for (;;) {
if ((l_D_3197 == NULL)) goto L_end3198;
{
if ((!r_HAS_REF(l_R_3184, ((*(R17 *)rt_nil_check(l_D_3197))).f_NAME, ((*(R17 *)rt_nil_check(l_D_3197))).f_IV)))
{
l_R_3184 = r_NAME_REF(((*(R17 *)rt_nil_check(l_D_3197))).f_NAME, ((*(R17 *)rt_nil_check(l_D_3197))).f_IV, NULL, l_R_3184);
}
l_D_3197 = ((*(R17 *)rt_nil_check(l_D_3197))).f_NEXT;
}
RT_B_TICK();
} L_end3198: ;
}
}
l_Z_3195 = r_LOOKUP_NEXT(l_Z_3195);
}
RT_B_TICK();
} L_end3196: ;
}
l_C_3193 = ((*(R17 *)rt_nil_check(l_C_3193))).f_NEXT;
}
RT_B_TICK();
} L_end3194: ;
}
{ R17 * rv3199 = l_R_3184;
return rv3199; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_REF(R17 * p_L, R9 p_NAME, rt_int p_OWNER) { RT_B_TICK(); 
R17 * l_P_3200; memset(&l_P_3200, 0, sizeof l_P_3200);
l_P_3200 = p_L;
for (;;) {
if ((l_P_3200 == NULL)) goto L_end3201;
{
if ((r_TEQ(((*(R17 *)rt_nil_check(l_P_3200))).f_NAME, p_NAME) && (((*(R17 *)rt_nil_check(l_P_3200))).f_IV == p_OWNER)))
{
{ rt_int rv3202 = 1;
return rv3202; }
}
l_P_3200 = ((*(R17 *)rt_nil_check(l_P_3200))).f_NEXT;
}
RT_B_TICK();
} L_end3201: ;
{ rt_int rv3203 = 0;
return rv3203; }
rt_raise(RT_X_INIT);
}
static R17 * r_INTERSECT_REFS(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_R_3204; memset(&l_R_3204, 0, sizeof l_R_3204);
l_R_3204 = NULL;
R17 * l_P_3205; memset(&l_P_3205, 0, sizeof l_P_3205);
l_P_3205 = p_A;
for (;;) {
if ((l_P_3205 == NULL)) goto L_end3206;
{
if (r_HAS_REF(p_B, ((*(R17 *)rt_nil_check(l_P_3205))).f_NAME, ((*(R17 *)rt_nil_check(l_P_3205))).f_IV))
{
l_R_3204 = r_NAME_REF(((*(R17 *)rt_nil_check(l_P_3205))).f_NAME, ((*(R17 *)rt_nil_check(l_P_3205))).f_IV, NULL, l_R_3204);
}
l_P_3205 = ((*(R17 *)rt_nil_check(l_P_3205))).f_NEXT;
}
RT_B_TICK();
} L_end3206: ;
{ R17 * rv3207 = l_R_3204;
return rv3207; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_INTERFERENCE(R17 * p_NAMES, R17 * p_CALLS, rt_int p_LINE, rt_int p_ASSERTION) { RT_B_TICK(); 
R17 * l_C_3208; memset(&l_C_3208, 0, sizeof l_C_3208);
l_C_3208 = p_CALLS;
for (;;) {
if ((l_C_3208 == NULL)) goto L_end3209;
{
{
R17 * l_V_3210; memset(&l_V_3210, 0, sizeof l_V_3210);
l_V_3210 = r_ROUTINE_DATA(((*(R17 *)rt_nil_check(l_C_3208))).f_NAME, 1);
if (((!(l_V_3210 == NULL)) && p_ASSERTION))
{
r_FAILT(p_LINE, rt_str("the expression of ASSERT must be free of side-effects (4.5.8): ", 63), ((*(R17 *)rt_nil_check(l_C_3208))).f_NAME);
}
for (;;) {
if ((l_V_3210 == NULL)) goto L_end3211;
{
if (r_HAS_REF(p_NAMES, ((*(R17 *)rt_nil_check(l_V_3210))).f_NAME, ((*(R17 *)rt_nil_check(l_V_3210))).f_IV))
{
r_FAILT(p_LINE, rt_str("a function invocation modifies a variable the expression also names (4.3.4): ", 77), ((*(R17 *)rt_nil_check(l_V_3210))).f_NAME);
}
{
R17 * l_D_3212; memset(&l_D_3212, 0, sizeof l_D_3212);
l_D_3212 = p_CALLS;
for (;;) {
if ((l_D_3212 == NULL)) goto L_end3213;
{
if ((!(l_D_3212 == l_C_3208)))
{
if (r_HAS_REF(r_ROUTINE_DATA(((*(R17 *)rt_nil_check(l_D_3212))).f_NAME, 0), ((*(R17 *)rt_nil_check(l_V_3210))).f_NAME, ((*(R17 *)rt_nil_check(l_V_3210))).f_IV))
{
r_FAILT(p_LINE, rt_str("two function invocations of one expression interfere on (4.3.4): ", 65), ((*(R17 *)rt_nil_check(l_V_3210))).f_NAME);
}
}
l_D_3212 = ((*(R17 *)rt_nil_check(l_D_3212))).f_NEXT;
}
RT_B_TICK();
} L_end3213: ;
}
l_V_3210 = ((*(R17 *)rt_nil_check(l_V_3210))).f_NEXT;
}
RT_B_TICK();
} L_end3211: ;
}
l_C_3208 = ((*(R17 *)rt_nil_check(l_C_3208))).f_NEXT;
}
RT_B_TICK();
} L_end3209: ;
}
static rt_int r_IN_HANDLERS(R17 * p_HS, R9 p_NAME) { RT_B_TICK(); 
R17 * l_H_3214; memset(&l_H_3214, 0, sizeof l_H_3214);
l_H_3214 = p_HS;
for (;;) {
if ((l_H_3214 == NULL)) goto L_end3215;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_H_3214))).f_A, p_NAME))
{
{ rt_int rv3216 = 1;
return rv3216; }
}
l_H_3214 = ((*(R17 *)rt_nil_check(l_H_3214))).f_NEXT;
}
RT_B_TICK();
} L_end3215: ;
{ rt_int rv3217 = 0;
return rv3217; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED_STMT(R17 * p_S) { RT_B_TICK(); 
rt_int l_K_3218; memset(&l_K_3218, 0, sizeof l_K_3218);
l_K_3218 = ((*(R17 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_3218 == g_N_EXCEPT))
{
{ rt_int rv3219 = r_IS_STRUCTURED_STMT(((*(R17 *)rt_nil_check(p_S))).f_A);
return rv3219; }
}
{ rt_int rv3220 = (((((((l_K_3218 == g_N_BLOCK) || (l_K_3218 == g_N_IF)) || (l_K_3218 == g_N_CASE)) || (l_K_3218 == g_N_LOOP)) || (l_K_3218 == g_N_FOR)) || (l_K_3218 == g_N_PAR)) || (l_K_3218 == g_N_WITH));
return rv3220; }
rt_raise(RT_X_INIT);
}
static R17 * r_NAMED_ROOT(R17 * p_E) { RT_B_TICK(); 
rt_int l_K_3221; memset(&l_K_3221, 0, sizeof l_K_3221);
l_K_3221 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
if (((l_K_3221 == g_N_NAME) || (l_K_3221 == g_N_APPLY)))
{
{ R17 * rv3222 = p_E;
return rv3222; }
}
else if ((((l_K_3221 == g_N_INDEX) || (l_K_3221 == g_N_FIELD)) || (l_K_3221 == g_N_SUBSTR)))
{
{ R17 * rv3223 = r_NAMED_ROOT(((*(R17 *)rt_nil_check(p_E))).f_A);
return rv3223; }
}
{ R17 * rv3224 = NULL;
return rv3224; }
rt_raise(RT_X_INIT);
}
static void r_STMT(R17 * p_S) { RT_B_TICK(); 
rt_int l_K_3225; memset(&l_K_3225, 0, sizeof l_K_3225);
l_K_3225 = ((*(R17 *)rt_nil_check(p_S))).f_KIND;
r_INTERFERENCE(p_S);
if ((l_K_3225 == g_N_NULL))
{
return;
}
else if ((l_K_3225 == g_N_LABELED))
{
{
R12 * l_Y_3226; memset(&l_Y_3226, 0, sizeof l_Y_3226);
l_Y_3226 = r_LOOKUP(((*(R17 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_3226))).f_ACCESS));
r_STMT(((*(R17 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_3225 == g_N_GOTO))
{
{
R12 * l_Y_3227; memset(&l_Y_3227, 0, sizeof l_Y_3227);
l_Y_3227 = r_LOOKUP(((*(R17 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_3228; memset(&l_N_3228, 0, sizeof l_N_3228);
R18 * l_C_3229; memset(&l_C_3229, 0, sizeof l_C_3229);
l_C_3229 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_3227 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3227))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3227))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
l_N_3228 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_3227))).f_MV);
for (;;) {
if ((l_N_3228 <= ((rt_int)0LL))) goto L_end3230;
{
if ((((*(R18 *)rt_nil_check(l_C_3229))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R18 *)rt_nil_check(l_C_3229))).f_NAME));
l_N_3228 = rt_sub(l_N_3228, ((rt_int)1LL));
}
l_C_3229 = ((*(R18 *)rt_nil_check(l_C_3229))).f_NEXT;
}
RT_B_TICK();
} L_end3230: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_3227))).f_ACCESS));
}
}
else if ((l_K_3225 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_3225 == g_N_CALL))
{
{
R26 l_V_3231; memset(&l_V_3231, 0, sizeof l_V_3231);
S_R26(&l_V_3231, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_3231).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_3231).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_3231).f_C, rt_str(";", 1)));
}
}
else if ((l_K_3225 == g_N_IF))
{
r_IF_STMT(((*(R17 *)rt_nil_check(p_S))).f_A, ((*(R17 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_3225 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_3225 == g_N_LOOP))
{
{
R9 l_END_L_3232; memset(&l_END_L_3232, 0, sizeof l_END_L_3232);
S_R9(&l_END_L_3232, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R17 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A), l_END_L_3232));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_3232);
r_OPEN_BODY(((*(R17 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CODES(rt_str("RT_B_TICK();", 12));
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_C), l_END_L_3232));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_3232));
}
}
else if ((l_K_3225 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_3225 == g_N_EXIT))
{
{
R18 * l_C_3233; memset(&l_C_3233, 0, sizeof l_C_3233);
l_C_3233 = r_LEAVE(((rt_int)2LL));
if ((l_C_3233 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R18 *)rt_nil_check(l_C_3233))).f_NAME));
}
}
else if ((l_K_3225 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_3225 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R17 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_3225 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_3225 == g_N_ASSERT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS)
{
{
R14 l_SAVED_CODE_3234; memset(&l_SAVED_CODE_3234, 0, sizeof l_SAVED_CODE_3234);
S_R14(&l_SAVED_CODE_3234, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R9 l_C_3235; memset(&l_C_3235, 0, sizeof l_C_3235);
S_R9(&l_C_3235, r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3234, 0);
}
}
else
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A)));
}
}
else if ((l_K_3225 == g_N_EXCEPT))
{
r_GUARDED(((*(R17 *)rt_nil_check(p_S))).f_A, NULL, ((*(R17 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_3225 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_3225 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_3225 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R17 * p_S) { RT_B_TICK(); 
R12 * l_Y_3236; memset(&l_Y_3236, 0, sizeof l_Y_3236);
l_Y_3236 = r_LOOKUP(((*(R17 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_3236 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_3236))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_3236))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv3237 = r_CALL_EXPR(p_S, NULL);
return rv3237; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R17 * p_ARMS, R17 * p_ELSE_BODY) { RT_B_TICK(); 
R17 * l_ARM_3238; memset(&l_ARM_3238, 0, sizeof l_ARM_3238);
l_ARM_3238 = p_ARMS;
R9 l_WORD_3239; memset(&l_WORD_3239, 0, sizeof l_WORD_3239);
S_R9(&l_WORD_3239, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_3240; memset(&l_OPEN_3240, 0, sizeof l_OPEN_3240);
l_OPEN_3240 = ((rt_int)0LL);
rt_int l_CHOSEN_3241; memset(&l_CHOSEN_3241, 0, sizeof l_CHOSEN_3241);
l_CHOSEN_3241 = 0;
for (;;) {
if ((l_ARM_3238 == NULL)) goto L_end3242;
{
{
R25 l_M_3243; memset(&l_M_3243, 0, sizeof l_M_3243);
S_R25(&l_M_3243, r_MANIFEST(((*(R17 *)rt_nil_check(l_ARM_3238))).f_A), 0);
if (l_CHOSEN_3241)
{
r_CHECK_COND(((*(R17 *)rt_nil_check(l_ARM_3238))).f_A);
r_CHECK_BODY(((*(R17 *)rt_nil_check(l_ARM_3238))).f_B);
}
else if ((l_M_3243).f_OK)
{
if ((!r_TEQS(l_WORD_3239, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_3240 = rt_add(l_OPEN_3240, ((rt_int)1LL));
S_R9(&l_WORD_3239, r_MK(rt_str("if", 2)), 0);
}
r_CODE(r_FMT1(rt_str("(void)(@);", 10), r_BOOL_EXPR(((*(R17 *)rt_nil_check(l_ARM_3238))).f_A)));
if (((l_M_3243).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R17 *)rt_nil_check(l_ARM_3238))).f_B);
l_CHOSEN_3241 = 1;
}
else
{
r_CHECK_BODY(((*(R17 *)rt_nil_check(l_ARM_3238))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3239, r_BOOL_EXPR(((*(R17 *)rt_nil_check(l_ARM_3238))).f_A)));
r_OPEN_BODY(((*(R17 *)rt_nil_check(l_ARM_3238))).f_B);
S_R9(&l_WORD_3239, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_3238 = ((*(R17 *)rt_nil_check(l_ARM_3238))).f_NEXT;
}
RT_B_TICK();
} L_end3242: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_3241)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_3239, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it3245_lo = ((rt_int)1LL), it3245_hi = l_OPEN_3240;
for (rt_int it3245 = it3245_lo; it3245 <= it3245_hi; it3245++) {
{
r_CODES(rt_str("}", 1));
}
RT_B_TICK();
if (it3245 == it3245_hi) break;
} } L_end3244: ;
}
static void r_CHECK_BODY(R17 * p_B) { RT_B_TICK(); 
R14 l_SAVED_CODE_3246; memset(&l_SAVED_CODE_3246, 0, sizeof l_SAVED_CODE_3246);
S_R14(&l_SAVED_CODE_3246, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3247; memset(&rc3247, 0, sizeof rc3247);  rc3247.f_HEAD = NULL; rc3247.f_TAIL = NULL; rc3247; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3246, 0);
}
static void r_CHECK_COND(R17 * p_E) { RT_B_TICK(); 
R9 l_C_3248; memset(&l_C_3248, 0, sizeof l_C_3248);
S_R9(&l_C_3248, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R17 * p_S) { RT_B_TICK(); 
R9 l_END_L_3249; memset(&l_END_L_3249, 0, sizeof l_END_L_3249);
S_R9(&l_END_L_3249, r_NEW_NAME(rt_str("L_end", 5)), 0);
R9 l_IT_3250; memset(&l_IT_3250, 0, sizeof l_IT_3250);
S_R9(&l_IT_3250, r_NEW_NAME(rt_str("it", 2)), 0);
R17 * l_R_3251; memset(&l_R_3251, 0, sizeof l_R_3251);
l_R_3251 = ((*(R17 *)rt_nil_check(p_S))).f_A;
R26 l_LO_3252; memset(&l_LO_3252, 0, sizeof l_LO_3252);
S_R26(&l_LO_3252, r_EXPR(((*(R17 *)rt_nil_check(l_R_3251))).f_A, NULL), 0);
R26 l_HI_3253; memset(&l_HI_3253, 0, sizeof l_HI_3253);
S_R26(&l_HI_3253, r_EXPR(((*(R17 *)rt_nil_check(l_R_3251))).f_B, (l_LO_3252).f_T), 0);
R22 * l_T_3254; memset(&l_T_3254, 0, sizeof l_T_3254);
l_T_3254 = r_REAL_TYPE((l_LO_3252).f_T);
R9 l_LOC_3255; memset(&l_LOC_3255, 0, sizeof l_LOC_3255);
R9 l_HIC_3256; memset(&l_HIC_3256, 0, sizeof l_HIC_3256);
if ((((*(R22 *)rt_nil_check(l_T_3254))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_3254))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_3254))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_3254))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R9(&l_LOC_3255, (l_LO_3252).f_C, 0);
S_R9(&l_HIC_3256, (l_HI_3253).f_C, 0);
if (((((*(R17 *)rt_nil_check(l_R_3251))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_R_3251))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LOC_3255, r_FMT1(rt_str("(@) + 1", 7), l_LOC_3255), 0);
}
if ((((*(R17 *)rt_nil_check(l_R_3251))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HIC_3256, r_FMT1(rt_str("(@) - 1", 7), l_HIC_3256), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_3250, l_LOC_3255, l_IT_3250, l_HIC_3256));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_3250, l_IT_3250, l_IT_3250, l_IT_3250));
r_OPEN_SCOPE();
if (((((*(R17 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_3257; memset(&l_Y_3257, 0, sizeof l_Y_3257);
l_Y_3257 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3257))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_3254))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_3257))).f_T = ((*(R22 *)rt_nil_check(l_T_3254))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_3257))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_3257, rt_str("", 0)), l_IT_3250));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_3257, rt_str("", 0)), l_IT_3250));
}
else
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3257))).f_ACCESS, l_IT_3250, 0);
}
r_DEFINE(l_Y_3257, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_3249);
r_OPEN_BODY(((*(R17 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODES(rt_str("RT_B_TICK();", 12));
r_CODE(r_FMT2(rt_str("if (@ == @_hi) break;", 21), l_IT_3250, l_IT_3250));
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_3249));
}
static void r_RETURN_STMT(R17 * p_S) { RT_B_TICK(); 
R19 * l_CS_3258; memset(&l_CS_3258, 0, sizeof l_CS_3258);
l_CS_3258 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_C_3259; memset(&l_C_3259, 0, sizeof l_C_3259);
if ((((*(R17 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_3259 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R19 *)rt_nil_check(l_CS_3258))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R19 *)rt_nil_check(l_CS_3258))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R19 *)rt_nil_check(l_CS_3258))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R19 *)rt_nil_check(l_CS_3258))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODE(r_CATS(((*(R19 *)rt_nil_check(l_CS_3258))).f_COPYOUT, rt_str("return;", 7)));
}
return;
}
if (((((*(R19 *)rt_nil_check(l_CS_3258))).f_RESULT == NULL) || ((*(R19 *)rt_nil_check(l_CS_3258))).f_IS_PATH))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R19 *)rt_nil_check(l_CS_3258))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R9 l_V_3260; memset(&l_V_3260, 0, sizeof l_V_3260);
S_R9(&l_V_3260, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R19 *)rt_nil_check(l_CS_3258))).f_RESULT), l_V_3260, r_CONVERT(r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A, ((*(R19 *)rt_nil_check(l_CS_3258))).f_RESULT), ((*(R19 *)rt_nil_check(l_CS_3258))).f_RESULT, ((*(R17 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_3259 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_3260));
}
}
static void r_SIGNAL_STMT(R17 * p_S) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R18 * l_C_3261; memset(&l_C_3261, 0, sizeof l_C_3261);
l_C_3261 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_3261 == NULL)) goto L_end3262;
{
if ((((*(R18 *)rt_nil_check(l_C_3261))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R18 *)rt_nil_check(l_C_3261))).f_NAME));
return;
}
if ((((*(R18 *)rt_nil_check(l_C_3261))).f_KIND == ((rt_int)1LL)))
{
goto L_end3262;
}
l_C_3261 = ((*(R18 *)rt_nil_check(l_C_3261))).f_NEXT;
}
RT_B_TICK();
} L_end3262: ;
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
R17 * l_TG_3263; memset(&l_TG_3263, 0, sizeof l_TG_3263);
l_TG_3263 = ((*(R17 *)rt_nil_check(p_S))).f_A;
if ((((*(R17 *)rt_nil_check(l_TG_3263))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_3264; memset(&l_B_3264, 0, sizeof l_B_3264);
S_R26(&l_B_3264, r_EXPR(((*(R17 *)rt_nil_check(l_TG_3263))).f_A, NULL), 0);
if ((!(l_B_3264).f_LVAL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_3264).f_T))).f_KIND == g_T_ABS))
{
{
R29 * l_ARGS_3265; memset(&l_ARGS_3265, 0, sizeof l_ARGS_3265);
l_ARGS_3265 = r_NODE_ARG(((*(R17 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R17 *)rt_nil_check(l_TG_3263))).f_B, g_M_IN, r_NODE_ARG(((*(R17 *)rt_nil_check(l_TG_3263))).f_C, g_M_IN, r_VAL_ARG(l_B_3264, NULL))));
R12 * l_Y_3266; memset(&l_Y_3266, 0, sizeof l_Y_3266);
((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(l_ARGS_3265))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_3266 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_3265, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_3266 == NULL))
{
((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(l_ARGS_3265))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_3266 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_3265, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_3266 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_3266, l_ARGS_3265, ((*(R17 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_3264).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_3264).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_3267; memset(&l_V_3267, 0, sizeof l_V_3267);
S_R26(&l_V_3267, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_B, (l_B_3264).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_3267).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_3264).f_T))).f_KIND)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_3264).f_C, r_INT_EXPR(((*(R17 *)rt_nil_check(l_TG_3263))).f_B), r_INT_EXPR(((*(R17 *)rt_nil_check(l_TG_3263))).f_C), (l_V_3267).f_C));
}
}
return;
}
{
R26 l_LV_3268; memset(&l_LV_3268, 0, sizeof l_LV_3268);
S_R26(&l_LV_3268, r_EXPR(l_TG_3263, NULL), 0);
R17 * l_SAVED_Q_3269; memset(&l_SAVED_Q_3269, 0, sizeof l_SAVED_Q_3269);
l_SAVED_Q_3269 = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
if ((!(l_LV_3268).f_LVAL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = NULL;
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_B))).f_KIND == g_N_QUAL))
{
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = ((*(R17 *)rt_nil_check(p_S))).f_B;
}
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R17 *)rt_nil_check(p_S))).f_B;
if (((((*(R22 *)rt_nil_check((l_LV_3268).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
r_REQUIRE_WHERE(r_MKN(rt_str("STORE_", 6)), ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
{
R26 l_V_3270; memset(&l_V_3270, 0, sizeof l_V_3270);
S_R26(&l_V_3270, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_B, (l_LV_3268).f_T), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
r_CODE(r_STORE_CODE((l_LV_3268).f_T, (l_LV_3268).f_C, l_V_3270, ((*(R17 *)rt_nil_check(p_S))).f_LINE, (l_LV_3268).f_SELF));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = l_SAVED_Q_3269;
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
R12 * l_Y_3271; memset(&l_Y_3271, 0, sizeof l_Y_3271);
l_Y_3271 = r_NEW_SYM(g_Y_VAR, ((*(R17 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_3272; memset(&l_V_3272, 0, sizeof l_V_3272);
S_R26(&l_V_3272, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_3271))).f_T = (l_V_3272).f_T;
((*(R12 *)rt_nil_check(l_Y_3271))).f_WITHV = ((rt_int)1LL);
if ((((*(R17 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R9 l_CN_3273; memset(&l_CN_3273, 0, sizeof l_CN_3273);
S_R9(&l_CN_3273, r_NEW_OBJECT(l_Y_3271, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_3272).f_T))
{
r_CODE(r_INIT_CODE((l_V_3272).f_T, l_CN_3273));
}
r_CODE(r_ASSIGN_CODE((l_V_3272).f_T, l_CN_3273, (l_V_3272).f_C));
}
}
else
{
if ((!(l_V_3272).f_LVAL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R9 l_P_3274; memset(&l_P_3274, 0, sizeof l_P_3274);
S_R9(&l_P_3274, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_3272).f_T), l_P_3274, (l_V_3272).f_C));
S_R9(&((*(R12 *)rt_nil_check(l_Y_3271))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_3274), 0);
S_R9(&((*(R12 *)rt_nil_check(l_Y_3271))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_3271))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_3271))).f_OWNER = rt_neg(((rt_int)1LL));
}
{
R17 * l_R_3275; memset(&l_R_3275, 0, sizeof l_R_3275);
l_R_3275 = r_NAMED_ROOT(((*(R17 *)rt_nil_check(p_S))).f_A);
if ((!(l_R_3275 == NULL)))
{
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_R_3275))).f_NAME, ((*(R17 *)rt_nil_check(p_S))).f_NAME)))
{
{
R12 * l_OLD_3276; memset(&l_OLD_3276, 0, sizeof l_OLD_3276);
l_OLD_3276 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_3275))).f_NAME);
if ((!(l_OLD_3276 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_OLD_3276))).f_KIND == g_Y_VAR))
{
{
R12 * l_H_3277; memset(&l_H_3277, 0, sizeof l_H_3277);
l_H_3277 = r_NEW_SYM(g_Y_VAR, ((*(R17 *)rt_nil_check(l_R_3275))).f_NAME);
((*(R12 *)rt_nil_check(l_H_3277))).f_T = ((*(R12 *)rt_nil_check(l_OLD_3276))).f_T;
((*(R12 *)rt_nil_check(l_H_3277))).f_WITHV = ((rt_int)2LL);
((*(R12 *)rt_nil_check(l_H_3277))).f_OWNER = ((*(R12 *)rt_nil_check(l_OLD_3276))).f_OWNER;
r_DEFINE(l_H_3277, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
}
}
}
}
}
}
}
r_DEFINE(l_Y_3271, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R17 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R17 * p_S) { RT_B_TICK(); 
R17 * l_ARM_3278; memset(&l_ARM_3278, 0, sizeof l_ARM_3278);
l_ARM_3278 = ((*(R17 *)rt_nil_check(p_S))).f_B;
R28 * l_SEEN_3279; memset(&l_SEEN_3279, 0, sizeof l_SEEN_3279);
l_SEEN_3279 = NULL;
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_3280; memset(&l_CH_3280, 0, sizeof l_CH_3280);
S_R26(&l_CH_3280, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_3281; memset(&l_T_3281, 0, sizeof l_T_3281);
l_T_3281 = r_REAL_TYPE((l_CH_3280).f_T);
R12 * l_BOUND_3282; memset(&l_BOUND_3282, 0, sizeof l_BOUND_3282);
l_BOUND_3282 = r_DISCRIMINATED(((*(R17 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_3281))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_3281))).f_KIND == g_T_BITS)))
{
{
R9 l_TMP_3283; memset(&l_TMP_3283, 0, sizeof l_TMP_3283);
S_R9(&l_TMP_3283, r_NEW_NAME(rt_str("cs", 2)), 0);
R9 l_WORD_3284; memset(&l_WORD_3284, 0, sizeof l_WORD_3284);
S_R9(&l_WORD_3284, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_3283, (l_CH_3280).f_C));
for (;;) {
if ((l_ARM_3278 == NULL)) goto L_end3285;
{
{
R17 * l_L_3286; memset(&l_L_3286, 0, sizeof l_L_3286);
l_L_3286 = ((*(R17 *)rt_nil_check(l_ARM_3278))).f_A;
R9 l_COND_3287; memset(&l_COND_3287, 0, sizeof l_COND_3287);
S_R9(&l_COND_3287, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3286 == NULL)) goto L_end3288;
{
S_R9(&l_COND_3287, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_3287, l_TMP_3283, (r_EXPR(l_L_3286, l_T_3281)).f_C), 0);
l_L_3286 = ((*(R17 *)rt_nil_check(l_L_3286))).f_NEXT;
}
RT_B_TICK();
} L_end3288: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3284, l_COND_3287));
S_R9(&l_WORD_3284, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3278))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3278))).f_C);
}
l_ARM_3278 = ((*(R17 *)rt_nil_check(l_ARM_3278))).f_NEXT;
}
RT_B_TICK();
} L_end3285: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_3284, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if (((((*(R22 *)rt_nil_check(l_T_3281))).f_KIND == g_T_FLOAT) || (((((*(R22 *)rt_nil_check(l_T_3281))).f_KIND == g_T_INT) && (!(((*(R22 *)rt_nil_check(l_T_3281))).f_SCALE == ((rt_int)0LL)))))))
{
r_VALUE_CASE(p_S, l_CH_3280);
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_3281))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_3281))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_3281))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_3281))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_3281));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_3280).f_C));
for (;;) {
if ((l_ARM_3278 == NULL)) goto L_end3289;
{
{
R17 * l_L_3290; memset(&l_L_3290, 0, sizeof l_L_3290);
l_L_3290 = ((*(R17 *)rt_nil_check(l_ARM_3278))).f_A;
R25 l_FIRST_3291; memset(&l_FIRST_3291, 0, sizeof l_FIRST_3291);
S_R25(&l_FIRST_3291, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_3290 == NULL)) goto L_end3292;
{
if ((((*(R17 *)rt_nil_check(l_L_3290))).f_KIND == g_N_RANGE))
{
{
R25 l_LO_3293; memset(&l_LO_3293, 0, sizeof l_LO_3293);
S_R25(&l_LO_3293, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_3290))).f_A, l_T_3281), 0);
R25 l_HI_3294; memset(&l_HI_3294, 0, sizeof l_HI_3294);
S_R25(&l_HI_3294, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_3290))).f_B, l_T_3281), 0);
rt_int l_A_3295; memset(&l_A_3295, 0, sizeof l_A_3295);
l_A_3295 = (l_LO_3293).f_V;
rt_int l_B_3296; memset(&l_B_3296, 0, sizeof l_B_3296);
l_B_3296 = (l_HI_3294).f_V;
if ((!(((l_LO_3293).f_OK && (l_HI_3294).f_OK))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_3290))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R17 *)rt_nil_check(l_L_3290))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_L_3290))).f_IV == ((rt_int)3LL))))
{
l_A_3295 = rt_add(l_A_3295, ((rt_int)1LL));
}
if ((((*(R17 *)rt_nil_check(l_L_3290))).f_IV >= ((rt_int)2LL)))
{
l_B_3296 = rt_sub(l_B_3296, ((rt_int)1LL));
}
if ((!(l_FIRST_3291).f_OK))
{
S_R25(&l_FIRST_3291, r_SOME(l_A_3295), 0);
}
l_SEEN_3279 = r_DISTINCT_LABEL(l_SEEN_3279, l_A_3295, l_B_3296, ((*(R17 *)rt_nil_check(l_L_3290))).f_LINE);
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_3295), r_NUM(l_B_3296)));
}
}
else
{
{
R25 l_M_3297; memset(&l_M_3297, 0, sizeof l_M_3297);
S_R25(&l_M_3297, r_ENUM_MANIFEST(l_L_3290, l_T_3281), 0);
if ((!(l_M_3297).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_3290))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_3291).f_OK))
{
S_R25(&l_FIRST_3291, l_M_3297, 0);
}
l_SEEN_3279 = r_DISTINCT_LABEL(l_SEEN_3279, (l_M_3297).f_V, (l_M_3297).f_V, ((*(R17 *)rt_nil_check(l_L_3290))).f_LINE);
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_3297).f_V)));
}
}
l_L_3290 = ((*(R17 *)rt_nil_check(l_L_3290))).f_NEXT;
}
RT_B_TICK();
} L_end3292: ;
if ((!(l_BOUND_3282 == NULL)))
{
{
R22 * l_SAVED_3298; memset(&l_SAVED_3298, 0, sizeof l_SAVED_3298);
l_SAVED_3298 = ((*(R12 *)rt_nil_check(l_BOUND_3282))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_3282))).f_T = r_NARROW(l_SAVED_3298, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_3291).f_V);
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3278))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3278))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_3282))).f_T = l_SAVED_3298;
}
}
else
{
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3278))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3278))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_3278 = ((*(R17 *)rt_nil_check(l_ARM_3278))).f_NEXT;
}
RT_B_TICK();
} L_end3289: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODES(rt_str("default:", 8));
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
r_CODES(rt_str("break;", 6));
}
r_CODES(rt_str("}", 1));
}
}
static R28 * r_DISTINCT_LABEL(R28 * p_SEEN, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); 
R28 * l_P_3299; memset(&l_P_3299, 0, sizeof l_P_3299);
l_P_3299 = p_SEEN;
if ((p_A > p_B))
{
{ R28 * rv3300 = p_SEEN;
return rv3300; }
}
for (;;) {
if ((l_P_3299 == NULL)) goto L_end3301;
{
if (((p_A <= (((*(R28 *)rt_nil_check(l_P_3299))).f_MHI).f_V) && ((((*(R28 *)rt_nil_check(l_P_3299))).f_MLO).f_V <= p_B)))
{
r_FAIL(p_LINE, rt_str("the choice-label values must be distinct (4.5.5.2)", 50));
}
l_P_3299 = ((*(R28 *)rt_nil_check(l_P_3299))).f_NEXT;
}
RT_B_TICK();
} L_end3301: ;
l_P_3299 = ({ R28 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R28(&(*(R28 *)rt_nil_check(l_P_3299)), ({ R28 rc3302; memset(&rc3302, 0, sizeof rc3302);  S_R9(&rc3302.f_LO, r_NO_TEXT(), 0); S_R9(&rc3302.f_HI, r_NO_TEXT(), 0); S_R25(&rc3302.f_MLO, r_SOME(p_A), 0); S_R25(&rc3302.f_MHI, r_SOME(p_B), 0); rc3302.f_ANYARG = 0; rc3302.f_NEXT = p_SEEN; rc3302; }), 0);
{ R28 * rv3303 = l_P_3299;
return rv3303; }
rt_raise(RT_X_INIT);
}
static void r_VALUE_CASE(R17 * p_S, R26 p_CH) { RT_B_TICK(); 
R9 l_TMP_3304; memset(&l_TMP_3304, 0, sizeof l_TMP_3304);
S_R9(&l_TMP_3304, r_NEW_NAME(rt_str("cs", 2)), 0);
R26 l_X_3305; memset(&l_X_3305, 0, sizeof l_X_3305);
S_R26(&l_X_3305, r_MKET(l_TMP_3304, (p_CH).f_T), 0);
R17 * l_ARM_3306; memset(&l_ARM_3306, 0, sizeof l_ARM_3306);
l_ARM_3306 = ((*(R17 *)rt_nil_check(p_S))).f_B;
R9 l_WORD_3307; memset(&l_WORD_3307, 0, sizeof l_WORD_3307);
S_R9(&l_WORD_3307, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(r_REAL_TYPE((p_CH).f_T)), l_TMP_3304, (p_CH).f_C));
for (;;) {
if ((l_ARM_3306 == NULL)) goto L_end3308;
{
{
R17 * l_L_3309; memset(&l_L_3309, 0, sizeof l_L_3309);
l_L_3309 = ((*(R17 *)rt_nil_check(l_ARM_3306))).f_A;
R9 l_COND_3310; memset(&l_COND_3310, 0, sizeof l_COND_3310);
S_R9(&l_COND_3310, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3309 == NULL)) goto L_end3311;
{
if ((((*(R17 *)rt_nil_check(l_L_3309))).f_KIND == g_N_RANGE))
{
{
R26 l_LO_3312; memset(&l_LO_3312, 0, sizeof l_LO_3312);
S_R26(&l_LO_3312, r_CASE_LABEL(((*(R17 *)rt_nil_check(l_L_3309))).f_A, (p_CH).f_T), 0);
R26 l_HI_3313; memset(&l_HI_3313, 0, sizeof l_HI_3313);
S_R26(&l_HI_3313, r_CASE_LABEL(((*(R17 *)rt_nil_check(l_L_3309))).f_B, (p_CH).f_T), 0);
rstr l_GE_3314; memset(&l_GE_3314, 0, sizeof l_GE_3314);
l_GE_3314 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_GE_3314, rt_str(">=", 2));
rstr l_LE_3315; memset(&l_LE_3315, 0, sizeof l_LE_3315);
l_LE_3315 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_LE_3315, rt_str("<=", 2));
if (((((*(R17 *)rt_nil_check(l_L_3309))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_L_3309))).f_IV == ((rt_int)3LL))))
{
rt_b_assign(&l_GE_3314, rt_str("> ", 2));
}
if ((((*(R17 *)rt_nil_check(l_L_3309))).f_IV >= ((rt_int)2LL)))
{
rt_b_assign(&l_LE_3315, rt_str("< ", 2));
}
S_R9(&l_COND_3310, r_FMT3(rt_str("@ || (@ && @)", 13), l_COND_3310, r_VALUE_COMPARE(l_X_3305, l_LO_3312, r_MK(l_GE_3314)), r_VALUE_COMPARE(l_X_3305, l_HI_3313, r_MK(l_LE_3315))), 0);
}
}
else
{
S_R9(&l_COND_3310, r_FMT2(rt_str("@ || @", 6), l_COND_3310, r_VALUE_COMPARE(l_X_3305, r_CASE_LABEL(l_L_3309, (p_CH).f_T), r_MK(rt_str("==", 2)))), 0);
}
l_L_3309 = ((*(R17 *)rt_nil_check(l_L_3309))).f_NEXT;
}
RT_B_TICK();
} L_end3311: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3307, l_COND_3310));
S_R9(&l_WORD_3307, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3306))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3306))).f_C);
}
l_ARM_3306 = ((*(R17 *)rt_nil_check(l_ARM_3306))).f_NEXT;
}
RT_B_TICK();
} L_end3308: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_3307, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
static R26 r_CASE_LABEL(R17 * p_L, R22 * p_T) { RT_B_TICK(); 
R26 l_V_3316; memset(&l_V_3316, 0, sizeof l_V_3316);
S_R26(&l_V_3316, r_EXPR(p_L, p_T), 0);
if ((!r_SAME_CLASS(r_REAL_TYPE((l_V_3316).f_T), r_REAL_TYPE(p_T))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_L))).f_LINE, rt_str("a case label is a value of the type of the choice (4.5.5.2)", 59));
}
{ R26 rv3317 = l_V_3316;
return rv3317; }
rt_raise(RT_X_INIT);
}
static R9 r_VALUE_COMPARE(R26 p_A, R26 p_B, R9 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT))
{
{ R9 rv3318 = r_FLOAT_COMPARE(p_A, p_B, p_OP);
return rv3318; }
}
{ R9 rv3319 = r_FIXED_COMPARE(p_A, p_B, p_OP);
return rv3319; }
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
{ R12 * rv3320 = NULL;
return rv3320; }
}
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv3321 = NULL;
return rv3321; }
}
{
R12 * l_Y_3322; memset(&l_Y_3322, 0, sizeof l_Y_3322);
l_Y_3322 = r_LOOKUP(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_3322 == NULL))
{
{ R12 * rv3323 = NULL;
return rv3323; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3322))).f_KIND == g_Y_VAR)))
{
{ R12 * rv3324 = NULL;
return rv3324; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3322))).f_WITHV == ((rt_int)1LL))))
{
{ R12 * rv3325 = NULL;
return rv3325; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_3322))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv3326 = NULL;
return rv3326; }
}
{
R27 * l_F_3327; memset(&l_F_3327, 0, sizeof l_F_3327);
l_F_3327 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_3322))).f_T), ((*(R17 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_3327 == NULL))
{
{ R12 * rv3328 = NULL;
return rv3328; }
}
if ((!(((*(R27 *)rt_nil_check(l_F_3327))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv3329 = NULL;
return rv3329; }
}
}
{ R12 * rv3330 = l_Y_3322;
return rv3330; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R9 p_TAGN, rt_int p_V) { RT_B_TICK(); 
R22 * l_N_3331; memset(&l_N_3331, 0, sizeof l_N_3331);
l_N_3331 = r_COPY_TYP(p_T);
R27 * l_F_3332; memset(&l_F_3332, 0, sizeof l_F_3332);
l_F_3332 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R28 * l_A_3333; memset(&l_A_3333, 0, sizeof l_A_3333);
l_A_3333 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R28 * l_HEAD_3334; memset(&l_HEAD_3334, 0, sizeof l_HEAD_3334);
l_HEAD_3334 = NULL;
R28 * l_TAIL_3335; memset(&l_TAIL_3335, 0, sizeof l_TAIL_3335);
l_TAIL_3335 = NULL;
for (;;) {
if ((l_F_3332 == NULL)) goto L_end3336;
{
if (((!(((*(R27 *)rt_nil_check(l_F_3332))).f_KIND == ((rt_int)0LL))) && (!(l_A_3333 == NULL))))
{
{
R28 * l_B_3337; memset(&l_B_3337, 0, sizeof l_B_3337);
l_B_3337 = ({ R28 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R28(&(*(R28 *)rt_nil_check(l_B_3337)), (*(R28 *)rt_nil_check(l_A_3333)), 0);
((*(R28 *)rt_nil_check(l_B_3337))).f_NEXT = NULL;
if (r_TEQ(((*(R27 *)rt_nil_check(l_F_3332))).f_NAME, p_TAGN))
{
((*(R28 *)rt_nil_check(l_B_3337))).f_ANYARG = 0;
S_R25(&((*(R28 *)rt_nil_check(l_B_3337))).f_MLO, r_SOME(p_V), 0);
S_R9(&((*(R28 *)rt_nil_check(l_B_3337))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_3335 == NULL))
{
l_HEAD_3334 = l_B_3337;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_3335))).f_NEXT = l_B_3337;
}
l_TAIL_3335 = l_B_3337;
}
l_A_3333 = ((*(R28 *)rt_nil_check(l_A_3333))).f_NEXT;
}
l_F_3332 = ((*(R27 *)rt_nil_check(l_F_3332))).f_NEXT;
}
RT_B_TICK();
} L_end3336: ;
((*(R22 *)rt_nil_check(l_N_3331))).f_ARGS = l_HEAD_3334;
{ R22 * rv3338 = l_N_3331;
return rv3338; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R17 * p_S) { RT_B_TICK(); 
R17 * l_ARM_3339; memset(&l_ARM_3339, 0, sizeof l_ARM_3339);
l_ARM_3339 = ((*(R17 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_3340; memset(&l_SAVED_3340, 0, sizeof l_SAVED_3340);
l_SAVED_3340 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_3339 == NULL)) goto L_end3341;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_ARM_3339))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3339))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3339))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_3340;
return;
}
l_ARM_3339 = ((*(R17 *)rt_nil_check(l_ARM_3339))).f_NEXT;
}
RT_B_TICK();
} L_end3341: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_3340;
}
}
static R22 * r_PATHS_TYPE(void) { RT_B_TICK(); 
R22 * l_T_3342; memset(&l_T_3342, 0, sizeof l_T_3342);
l_T_3342 = r_NEW_TYP(g_T_PATHS);
S_R9(&((*(R22 *)rt_nil_check(l_T_3342))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv3343 = l_T_3342;
return rv3343; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R17 * p_S) { RT_B_TICK(); 
R9 l_TD_3344; memset(&l_TD_3344, 0, sizeof l_TD_3344);
S_R9(&l_TD_3344, r_NEW_NAME(rt_str("td", 2)), 0);
R17 * l_P_3345; memset(&l_P_3345, 0, sizeof l_P_3345);
l_P_3345 = ((*(R17 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_3345 == NULL)) goto L_end3346;
{
{
R12 * l_Y_3347; memset(&l_Y_3347, 0, sizeof l_Y_3347);
l_Y_3347 = r_NEW_SYM(g_Y_PATH, ((*(R17 *)rt_nil_check(l_P_3345))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3347))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_3347))).f_DECL = l_P_3345;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_3347, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_3347))).f_INPUT = 1;
r_DEFINE(l_Y_3347, ((*(R17 *)rt_nil_check(l_P_3345))).f_LINE);
}
l_P_3345 = ((*(R17 *)rt_nil_check(l_P_3345))).f_NEXT;
}
RT_B_TICK();
} L_end3346: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_3344));
r_CODES(rt_str("rt_b_par_begin();", 17));
r_CODE(r_FMT2(rt_str("{ rt_frame @a; if (RT_TRY(@a)) {", 32), l_TD_3344, l_TD_3344));
l_P_3345 = ((*(R17 *)rt_nil_check(p_S))).f_A;
{
rt_int l_K_3348; memset(&l_K_3348, 0, sizeof l_K_3348);
l_K_3348 = ((rt_int)0LL);
for (;;) {
if ((l_P_3345 == NULL)) goto L_end3349;
{
l_K_3348 = rt_add(l_K_3348, ((rt_int)1LL));
r_ACTIVATE_PATH(l_P_3345, l_TD_3344, l_K_3348);
l_P_3345 = ((*(R17 *)rt_nil_check(l_P_3345))).f_NEXT;
}
RT_B_TICK();
} L_end3349: ;
}
r_CODE(r_FMT3(rt_str("RT_POP(@a); } else { RT_POP(@a); rt_b_par_abandon(&@);", 54), l_TD_3344, l_TD_3344, l_TD_3344));
r_CODES(rt_str("rt_raise(rt_xcur); } }", 22));
if (r_HAS_USER_ROUTINE(r_MKN(rt_str("PAR_BLOCK_", 10))))
{
{
R17 * l_C_3350; memset(&l_C_3350, 0, sizeof l_C_3350);
l_C_3350 = r_NEW_NODE(g_N_CALL, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
R17 * l_A_3351; memset(&l_A_3351, 0, sizeof l_A_3351);
l_A_3351 = r_NEW_NODE(g_N_APPLY, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_C_3350))).f_NAME, r_MKN(rt_str("PAR_BLOCK_", 10)), 0);
S_R9(&((*(R17 *)rt_nil_check(l_A_3351))).f_NAME, r_MKN(rt_str("$PATH_LIST", 10)), 0);
((*(R17 *)rt_nil_check(l_C_3350))).f_A = l_A_3351;
r_CODE(r_FMT1(rt_str("rt_b_par_dispatch_push(&@);", 27), l_TD_3344));
r_STMT(l_C_3350);
r_CODES(rt_str("rt_b_par_dispatch_pop();", 24));
}
}
else
{
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_3344));
}
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static R26 r_PATH_LIST(rt_int p_LINE) { RT_B_TICK(); 
R22 * l_PE_3352; memset(&l_PE_3352, 0, sizeof l_PE_3352);
l_PE_3352 = r_RESOLVE_USER_NAME(r_MK(rt_str("PATH_ENTRY", 10)), p_LINE);
R22 * l_R_3353; memset(&l_R_3353, 0, sizeof l_R_3353);
l_R_3353 = r_REAL_TYPE(l_PE_3352);
R22 * l_AT_3354; memset(&l_AT_3354, 0, sizeof l_AT_3354);
l_AT_3354 = r_ARRAY_OF(l_PE_3352, ((rt_int)1LL));
R9 l_C_3355; memset(&l_C_3355, 0, sizeof l_C_3355);
S_R9(&l_C_3355, r_CTYPE(l_AT_3354), 0);
R9 l_CODE__3356; memset(&l_CODE__3356, 0, sizeof l_CODE__3356);
if ((!(((*(R22 *)rt_nil_check(l_R_3353))).f_KIND == g_T_REC)))
{
r_FAIL(p_LINE, rt_str("PATH_ENTRY is the record type of PARALLEL_SUPPORT (D.7)", 55));
}
S_R9(&l_CODE__3356, r_FMT2(rt_str("({ @ a; rt_int n = rt_b_par_count(); a.lo[0] = 1; a.hi[0] = n; a.p = rt_b_array_alloc(n, sizeof *a.p); memset(a.p, 0, sizeof *a.p * (size_t)(n \? n : 1)); for (rt_int i = 0; i < n; i++) { a.p[i].@ = rt_b_bits_of_int(i + 1, 64);", 226), l_C_3355, ((*(R27 *)rt_nil_check(r_FIND_FIELD(l_R_3353, r_MKN(rt_str("PATH_ADDR", 9)))))).f_CNAME), 0);
S_R9(&l_CODE__3356, r_FMT3(rt_str("@ a.p[i].@ = rt_b_par_id(i); a.p[i].@ = rt_b_par_prio(i);", 57), l_CODE__3356, ((*(R27 *)rt_nil_check(r_FIND_FIELD(l_R_3353, r_MKN(rt_str("ACTIVATION_ID", 13)))))).f_CNAME, ((*(R27 *)rt_nil_check(r_FIND_FIELD(l_R_3353, r_MKN(rt_str("PRIORITY_LEVEL", 14)))))).f_CNAME), 0);
S_R9(&l_CODE__3356, r_FMT3(rt_str("@ a.p[i].@ = rt_b_par_connect(i, @); } a; })", 44), l_CODE__3356, ((*(R27 *)rt_nil_check(r_FIND_FIELD(l_R_3353, r_MKN(rt_str("CONNECT_NAME", 12)))))).f_CNAME, r_NUM(r_STATIC_SIZE_OR_LEN(((*(R27 *)rt_nil_check(r_FIND_FIELD(l_R_3353, r_MKN(rt_str("CONNECT_NAME", 12)))))).f_T))), 0);
{ R26 rv3357 = r_MKET(l_CODE__3356, l_AT_3354);
return rv3357; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_SIZE_OR_LEN(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_MLEN).f_OK)
{
{ rt_int rv3358 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_MLEN).f_V;
return rv3358; }
}
{ rt_int rv3359 = ((rt_int)32LL);
return rv3359; }
rt_raise(RT_X_INIT);
}
static R26 r_RUN_PATHS(R17 * p_E) { RT_B_TICK(); 
R26 l_V_3360; memset(&l_V_3360, 0, sizeof l_V_3360);
S_R26(&l_V_3360, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_3361; memset(&l_T_3361, 0, sizeof l_T_3361);
l_T_3361 = r_REAL_TYPE((l_V_3360).f_T);
R22 * l_R_3362; memset(&l_R_3362, 0, sizeof l_R_3362);
if (((!(((*(R22 *)rt_nil_check(l_T_3361))).f_KIND == g_T_ARR)) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("RUN_PATHS takes the ARRAY OF PATH_ENTRY its PAR_BLOCK_ was given (D.7)", 70));
}
l_R_3362 = r_REAL_TYPE(((*(R22 *)rt_nil_check(l_T_3361))).f_ELEM);
if ((!(((*(R22 *)rt_nil_check(l_R_3362))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("RUN_PATHS takes the ARRAY OF PATH_ENTRY its PAR_BLOCK_ was given (D.7)", 70));
}
{ R26 rv3363 = r_MKET(r_FMT4(rt_str("({ @ l = @; rt_int n = rt_b_extent(1, l.lo, l.hi); for (rt_int k = 0; k < n; k++) rt_b_par_select(rt_b_int_of_bits(l.p[k].@), l.p[k].@); rt_b_par_run(); })", 155), r_CTYPE(l_T_3361), (l_V_3360).f_C, ((*(R27 *)rt_nil_check(r_FIND_FIELD(l_R_3362, r_MKN(rt_str("PATH_ADDR", 9)))))).f_CNAME, ((*(R27 *)rt_nil_check(r_FIND_FIELD(l_R_3362, r_MKN(rt_str("PRIORITY_LEVEL", 14)))))).f_CNAME), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3363; }
rt_raise(RT_X_INIT);
}
static void r_ACTIVATE_PATH(R17 * p_P, R9 p_TD, rt_int p_K) { RT_B_TICK(); 
R9 l_FN_3364; memset(&l_FN_3364, 0, sizeof l_FN_3364);
S_R9(&l_FN_3364, r_NEW_NAME(rt_str("path_", 5)), 0);
R9 l_FT_3365; memset(&l_FT_3365, 0, sizeof l_FT_3365);
S_R9(&l_FT_3365, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_3366; memset(&l_Y_3366, 0, sizeof l_Y_3366);
l_Y_3366 = r_LOOKUP(((*(R17 *)rt_nil_check(p_P))).f_NAME);
R9 l_H_3367; memset(&l_H_3367, 0, sizeof l_H_3367);
S_R9(&l_H_3367, r_OBJ_ACCESS(l_Y_3366), 0);
R9 l_IT_3368; memset(&l_IT_3368, 0, sizeof l_IT_3368);
S_R9(&l_IT_3368, r_NEW_NAME(rt_str("pi", 2)), 0);
R9 l_PRIO_3369; memset(&l_PRIO_3369, 0, sizeof l_PRIO_3369);
S_R9(&l_PRIO_3369, r_MK(rt_str("0", 1)), 0);
R9 l_START_3370; memset(&l_START_3370, 0, sizeof l_START_3370);
R22 * l_LT_3371; memset(&l_LT_3371, 0, sizeof l_LT_3371);
l_LT_3371 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_3365, l_FT_3365));
if ((!(((*(R17 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R9(&l_PRIO_3369, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R17 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R17 * l_R_3372; memset(&l_R_3372, 0, sizeof l_R_3372);
l_R_3372 = ((*(R17 *)rt_nil_check(p_P))).f_A;
R26 l_LV_3373; memset(&l_LV_3373, 0, sizeof l_LV_3373);
S_R26(&l_LV_3373, r_EXPR(((*(R17 *)rt_nil_check(l_R_3372))).f_A, NULL), 0);
R9 l_LO_3374; memset(&l_LO_3374, 0, sizeof l_LO_3374);
S_R9(&l_LO_3374, (l_LV_3373).f_C, 0);
R9 l_HI_3375; memset(&l_HI_3375, 0, sizeof l_HI_3375);
S_R9(&l_HI_3375, (r_EXPR(((*(R17 *)rt_nil_check(l_R_3372))).f_B, (l_LV_3373).f_T)).f_C, 0);
R22 * l_RT_3376; memset(&l_RT_3376, 0, sizeof l_RT_3376);
l_RT_3376 = r_REAL_TYPE((l_LV_3373).f_T);
if ((((*(R22 *)rt_nil_check(l_RT_3376))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_RT_3376))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_str("a loop prefix over an UNORDERED type (4.6.1)", 44));
}
l_LT_3371 = ((*(R22 *)rt_nil_check(l_RT_3376))).f_BASE;
S_R9(&l_HI_3375, (r_EXPR(((*(R17 *)rt_nil_check(l_R_3372))).f_B, l_LT_3371)).f_C, 0);
}
else if (((!(((*(R22 *)rt_nil_check(l_RT_3376))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_RT_3376))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_str("the range of a loop prefix is integer or enumerated (4.6.1)", 59));
}
if (((((*(R17 *)rt_nil_check(l_R_3372))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_R_3372))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LO_3374, r_FMT1(rt_str("(@) + 1", 7), l_LO_3374), 0);
}
if ((((*(R17 *)rt_nil_check(l_R_3372))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HI_3375, r_FMT1(rt_str("(@) - 1", 7), l_HI_3375), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_3367, l_LO_3374, l_HI_3375));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_3368, l_H_3367, l_IT_3368, l_H_3367), l_IT_3368));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_3368));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_3365, r_UP_FRAME()));
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME), l_IT_3368));
}
if ((!(((*(R17 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_3377; memset(&l_V_3377, 0, sizeof l_V_3377);
r_OPEN_SCOPE();
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_3378; memset(&l_I_3378, 0, sizeof l_I_3378);
l_I_3378 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_3378))).f_T = l_LT_3371;
((*(R12 *)rt_nil_check(l_I_3378))).f_INPUT = 1;
S_R9(&((*(R12 *)rt_nil_check(l_I_3378))).f_ACCESS, l_IT_3368, 0);
((*(R12 *)rt_nil_check(l_I_3378))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_3378, ((*(R17 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_3377, r_EXPR(((*(R17 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3377).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
if ((!r_IMPLEMENTATION_SEMAPHORE(((*(R17 *)rt_nil_check(p_P))).f_D)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_b_cat(rt_str("CONNECT names an implementation-defined semaphore, of the machine's ", 68), rt_str("library segment (4.6.1)", 23)));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_3377).f_C));
}
}
S_R9(&l_START_3370, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_3367, l_IT_3368, l_FN_3364, p_TD), 0);
S_R9(&l_PRIO_3369, r_CAT(l_PRIO_3369, r_FMT4(rt_str("); rt_b_path_info(&@, @, @, @", 29), p_TD, r_NUM(p_K), l_IT_3368, r_CONNECT_NAME(p_P))), 0);
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT4(rt_str("@@, @); if (@ == ", 17), l_START_3370, p_TD, l_PRIO_3369, l_IT_3368));
r_CODE(r_FMT1(rt_str("@.hi) break; }", 14), l_H_3367));
}
else
{
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_3370, p_TD, l_PRIO_3369));
}
r_PATH_BODY(p_P, l_FN_3364, l_FT_3365, l_LT_3371);
}
static rt_int r_IMPLEMENTATION_SEMAPHORE(R17 * p_E) { RT_B_TICK(); 
R17 * l_R_3379; memset(&l_R_3379, 0, sizeof l_R_3379);
l_R_3379 = p_E;
for (;;) {
if (((((*(R17 *)rt_nil_check(l_R_3379))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_3379))).f_KIND == g_N_APPLY))) goto L_end3380;
{
if (((!(((*(R17 *)rt_nil_check(l_R_3379))).f_KIND == g_N_INDEX)) && (!(((*(R17 *)rt_nil_check(l_R_3379))).f_KIND == g_N_FIELD))))
{
{ rt_int rv3381 = 0;
return rv3381; }
}
l_R_3379 = ((*(R17 *)rt_nil_check(l_R_3379))).f_A;
}
RT_B_TICK();
} L_end3380: ;
{
R12 * l_Y_3382; memset(&l_Y_3382, 0, sizeof l_Y_3382);
l_Y_3382 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(l_R_3379))).f_NAME);
if ((l_Y_3382 == NULL))
{
{ rt_int rv3383 = 0;
return rv3383; }
}
if ((((*(R12 *)rt_nil_check(l_Y_3382))).f_HOME == NULL))
{
{ rt_int rv3384 = 0;
return rv3384; }
}
{ rt_int rv3385 = r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LIBSEGS, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3382))).f_HOME))).f_NAME);
return rv3385; }
}
rt_raise(RT_X_INIT);
}
static R9 r_CONNECT_NAME(R17 * p_P) { RT_B_TICK(); 
R17 * l_R_3386; memset(&l_R_3386, 0, sizeof l_R_3386);
l_R_3386 = ((*(R17 *)rt_nil_check(p_P))).f_D;
if ((l_R_3386 == NULL))
{
{ R9 rv3387 = r_MK(rt_str("\"\"", 2));
return rv3387; }
}
for (;;) {
if (((((*(R17 *)rt_nil_check(l_R_3386))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_3386))).f_KIND == g_N_APPLY))) goto L_end3388;
{
if (((!(((*(R17 *)rt_nil_check(l_R_3386))).f_KIND == g_N_INDEX)) && (!(((*(R17 *)rt_nil_check(l_R_3386))).f_KIND == g_N_FIELD))))
{
{ R9 rv3389 = r_MK(rt_str("\"\"", 2));
return rv3389; }
}
l_R_3386 = ((*(R17 *)rt_nil_check(l_R_3386))).f_A;
}
RT_B_TICK();
} L_end3388: ;
{ R9 rv3390 = r_CSTRING(((*(R17 *)rt_nil_check(l_R_3386))).f_NAME);
return rv3390; }
rt_raise(RT_X_INIT);
}
static R9 r_UP_FRAME(void) { RT_B_TICK(); 
if ((((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R9 rv3391 = r_MK(rt_str("NULL", 4));
return rv3391; }
}
{ R9 rv3392 = r_MK(rt_str("F", 1));
return rv3392; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R17 * p_P, R9 p_FN, R9 p_FT, R22 * p_LT) { RT_B_TICK(); 
R14 l_SAVED_CODE_3393; memset(&l_SAVED_CODE_3393, 0, sizeof l_SAVED_CODE_3393);
S_R14(&l_SAVED_CODE_3393, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R18 * l_SAVED_CTXS_3394; memset(&l_SAVED_CTXS_3394, 0, sizeof l_SAVED_CTXS_3394);
l_SAVED_CTXS_3394 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R19 * l_OUTER_3395; memset(&l_OUTER_3395, 0, sizeof l_OUTER_3395);
l_OUTER_3395 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_H_3396; memset(&l_H_3396, 0, sizeof l_H_3396);
l_H_3396 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_A;
R19 * l_CS_3397; memset(&l_CS_3397, 0, sizeof l_CS_3397);
l_CS_3397 = ({ R19 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz; })); p; });
R9 l_UPT_3398; memset(&l_UPT_3398, 0, sizeof l_UPT_3398);
S_R9(&l_UPT_3398, r_MK(rt_str("void", 4)), 0);
if ((((*(R19 *)rt_nil_check(l_OUTER_3395))).f_LEVEL > ((rt_int)0LL)))
{
S_R9(&l_UPT_3398, ((*(R19 *)rt_nil_check(l_OUTER_3395))).f_FTYPE, 0);
}
S_R19(&(*(R19 *)rt_nil_check(l_CS_3397)), ({ R19 rc3399; memset(&rc3399, 0, sizeof rc3399);  rc3399.f_LEVEL = rt_add(((*(R19 *)rt_nil_check(l_OUTER_3395))).f_LEVEL, ((rt_int)1LL)); rc3399.f_R = NULL; rc3399.f_FRAMED = 1; S_R9(&rc3399.f_FTYPE, p_FT, 0); S_R14(&rc3399.f_FIELDS, ({ R14 rc3400; memset(&rc3400, 0, sizeof rc3400);  rc3400.f_HEAD = NULL; rc3400.f_TAIL = NULL; rc3400; }), 0); rc3399.f_UP = l_OUTER_3395; rc3399.f_IMPORTS = ((*(R17 *)rt_nil_check(l_H_3396))).f_B; rc3399.f_SIGNALS = ((*(R17 *)rt_nil_check(l_H_3396))).f_A; rc3399.f_RESULT = NULL; rc3399.f_IS_PATH = 1; S_R9(&rc3399.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3399; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_3398), &((*(R19 *)rt_nil_check(l_CS_3397))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_3397;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3401; memset(&rc3401, 0, sizeof rc3401);  rc3401.f_HEAD = NULL; rc3401.f_TAIL = NULL; rc3401; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R17 *)rt_nil_check(l_H_3396))).f_B, ((*(R17 *)rt_nil_check(l_H_3396))).f_A, ((*(R17 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_3402; memset(&l_I_3402, 0, sizeof l_I_3402);
l_I_3402 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_3402))).f_T = p_LT;
((*(R12 *)rt_nil_check(l_I_3402))).f_INPUT = 1;
S_R9(&((*(R12 *)rt_nil_check(l_I_3402))).f_FIELD, r_FMT1(rt_str("l_@", 3), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
S_R9(&((*(R12 *)rt_nil_check(l_I_3402))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3397))).f_FIELDS);
r_DEFINE(l_I_3402, ((*(R17 *)rt_nil_check(p_P))).f_LINE);
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
R17 * l_L_3403; memset(&l_L_3403, 0, sizeof l_L_3403);
l_L_3403 = ((*(R17 *)rt_nil_check(l_H_3396))).f_A;
R9 l_C_3404; memset(&l_C_3404, 0, sizeof l_C_3404);
S_R9(&l_C_3404, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3403 == NULL)) goto L_end3405;
{
S_R9(&l_C_3404, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_3404, r_EXC_NAME(((*(R17 *)rt_nil_check(l_L_3403))).f_NAME)), 0);
l_L_3403 = ((*(R17 *)rt_nil_check(l_L_3403))).f_NEXT;
}
RT_B_TICK();
} L_end3405: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_3404));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R19 *)rt_nil_check(l_CS_3397))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_3395;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3393, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_3394;
}
static R9 r_JOIN_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_3406; memset(&l_C_3406, 0, sizeof l_C_3406);
l_C_3406 = (p_B).f_HEAD;
R9 l_R_3407; memset(&l_R_3407, 0, sizeof l_R_3407);
S_R9(&l_R_3407, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_3406 == NULL)) goto L_end3408;
{
S_R9(&l_R_3407, r_CAT(l_R_3407, ((*(R15 *)rt_nil_check(l_C_3406))).f_T), 0);
l_C_3406 = ((*(R15 *)rt_nil_check(l_C_3406))).f_NEXT;
}
RT_B_TICK();
} L_end3408: ;
{ R9 rv3409 = l_R_3407;
return rv3409; }
rt_raise(RT_X_INIT);
}
static R9 r_PATH_REF(R17 * p_E) { RT_B_TICK(); 
R9 l_NAME_3410; memset(&l_NAME_3410, 0, sizeof l_NAME_3410);
S_R9(&l_NAME_3410, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
R9 l_SUB_3411; memset(&l_SUB_3411, 0, sizeof l_SUB_3411);
S_R9(&l_SUB_3411, r_MK(rt_str("0", 1)), 0);
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R17 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R9(&l_SUB_3411, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_3412; memset(&l_Y_3412, 0, sizeof l_Y_3412);
l_Y_3412 = r_LOOKUP(l_NAME_3410);
if ((l_Y_3412 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_3410);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3412))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_3410);
}
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3412))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R9 rv3413 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_3412), l_SUB_3411);
return rv3413; }
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
R9 l_NAME_3414; memset(&l_NAME_3414, 0, sizeof l_NAME_3414);
S_R9(&l_NAME_3414, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_3415; memset(&l_LINE_3415, 0, sizeof l_LINE_3415);
l_LINE_3415 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_3414, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_3416; memset(&l_V_3416, 0, sizeof l_V_3416);
S_R26(&l_V_3416, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3416).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_3415, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv3417 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_3416).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_3416).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3417; }
}
}
else if (r_TEQS(l_NAME_3414, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv3418 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3418; }
}
{ R26 rv3419 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3419; }
}
else if (r_TEQS(l_NAME_3414, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R17 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv3420 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv3420; }
}
{ R26 rv3421 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R17 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv3421; }
}
else if ((r_TEQS(l_NAME_3414, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_3414, rt_str("RELEASE", 7))))
{
if ((((!(((*(R17 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_3415, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_3414);
}
{
R26 l_V_3422; memset(&l_V_3422, 0, sizeof l_V_3422);
S_R26(&l_V_3422, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3422).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_3415, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_3422).f_LVAL))
{
r_FAIL(l_LINE_3415, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_3414, rt_str("REQUEST", 7)))
{
{ R26 rv3423 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_3422).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3423; }
}
{ R26 rv3424 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_3422).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3424; }
}
}
else if (r_TEQS(l_NAME_3414, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_3415);
{ R26 rv3425 = r_START_IO_CALL(p_E);
return rv3425; }
}
else if (r_TEQS(l_NAME_3414, rt_str("INTERRUPT_AFTER", 15)))
{
r_REQUIRE_MACHINE(l_LINE_3415);
if (((((((*(R17 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))) || (((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAIL(l_LINE_3415, rt_str("INTERRUPT_AFTER (MICROSECONDS # S)", 34));
}
{
R26 l_V_3426; memset(&l_V_3426, 0, sizeof l_V_3426);
S_R26(&l_V_3426, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, NULL), 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3426).f_T)))).f_KIND == g_T_SEM)) || (!(l_V_3426).f_LVAL)))
{
r_FAIL(l_LINE_3415, rt_str("INTERRUPT_AFTER (MICROSECONDS # S): S is a semaphore variable", 61));
}
{ R26 rv3427 = r_MKET(r_FMT2(rt_str("rt_b_interrupt_after(@, @)", 26), (l_V_3426).f_C, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3427; }
}
}
r_FAILT(l_LINE_3415, rt_str("unknown routine ", 16), l_NAME_3414);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R17 * p_E) { RT_B_TICK(); 
R29 * l_ARGS_3428; memset(&l_ARGS_3428, 0, sizeof l_ARGS_3428);
l_ARGS_3428 = r_CALL_ARGS(p_E);
R12 * l_Y_3429; memset(&l_Y_3429, 0, sizeof l_Y_3429);
l_Y_3429 = r_FIND_ROUTINE(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_ARGS_3428, ((*(R17 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_3430; memset(&l_R_3430, 0, sizeof l_R_3430);
if ((l_Y_3429 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_3430, r_CALL_SYM(l_Y_3429, l_ARGS_3428, ((*(R17 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv3431 = l_R_3430;
return rv3431; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R17 * p_IMPORTS, R17 * p_SIGNALS, R9 p_NAME) { RT_B_TICK(); 
R20 * l_I_3432; memset(&l_I_3432, 0, sizeof l_I_3432);
l_I_3432 = ({ R20 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R20(&(*(R20 *)rt_nil_check(l_I_3432)), ({ R20 rc3433; memset(&rc3433, 0, sizeof rc3433);  rc3433.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc3433.f_IMPORTS = p_IMPORTS; rc3433.f_SIGNALS = p_SIGNALS; S_R9(&rc3433.f_NAME, p_NAME, 0); rc3433.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc3433; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_3432;
}
static void r_LEAVE_ISCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R20 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R9 r_ROUTINE_CNAME(R9 p_NAME) { RT_B_TICK(); 
R9 l_BASE0_3434; memset(&l_BASE0_3434, 0, sizeof l_BASE0_3434);
S_R9(&l_BASE0_3434, r_FMT1(rt_str("r_@", 3), r_CID(p_NAME)), 0);
rstr l_S_3435; memset(&l_S_3435, 0, sizeof l_S_3435);
l_S_3435 = rt_b_str_new((l_BASE0_3434).f_LEN, 0);
rt_b_assign(&l_S_3435, r_STR(l_BASE0_3434, (l_BASE0_3434).f_LEN));
R9 l_BASE_3436; memset(&l_BASE_3436, 0, sizeof l_BASE_3436);
S_R9(&l_BASE_3436, l_BASE0_3434, 0);
R17 * l_N_3437; memset(&l_N_3437, 0, sizeof l_N_3437);
l_N_3437 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it3439_lo = ((rt_int)0LL), it3439_hi = rt_sub((l_BASE_3436).f_LEN, ((rt_int)1LL));
for (rt_int it3439 = it3439_lo; it3439 <= it3439_hi; it3439++) {
{
if (rt_b_eq(rt_b_slice(l_S_3435, it3439, it3439), rt_str("$", 1)))
{
S_R9(&l_BASE_3436, r_MK(rt_b_cat(rt_b_cat(rt_b_slice(l_S_3435, ((rt_int)0LL), rt_sub(it3439, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_3435, rt_add(it3439, ((rt_int)1LL)), rt_sub((l_BASE_3436).f_LEN, ((rt_int)1LL))))), 0);
}
}
RT_B_TICK();
if (it3439 == it3439_hi) break;
} } L_end3438: ;
for (;;) {
if ((l_N_3437 == NULL)) goto L_end3440;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_N_3437))).f_NAME, l_BASE_3436))
{
{ R9 rv3441 = r_FMT2(rt_str("@_@", 3), l_BASE_3436, r_NEW_NAME(rt_str("", 0)));
return rv3441; }
}
l_N_3437 = ((*(R17 *)rt_nil_check(l_N_3437))).f_NEXT;
}
RT_B_TICK();
} L_end3440: ;
l_N_3437 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_3437))).f_NAME, l_BASE_3436, 0);
((*(R17 *)rt_nil_check(l_N_3437))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_3437;
{ R9 rv3442 = l_BASE_3436;
return rv3442; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R17 * p_B) { RT_B_TICK(); 
if ((p_B == NULL))
{
{ rt_int rv3443 = 0;
return rv3443; }
}
if ((!(((*(R17 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv3444 = 1;
return rv3444; }
}
{ rt_int rv3445 = r_HAS_HANDLERS(((*(R17 *)rt_nil_check(p_B))).f_B);
return rv3445; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R17 * p_S0) { RT_B_TICK(); 
R17 * l_S_3446; memset(&l_S_3446, 0, sizeof l_S_3446);
l_S_3446 = p_S0;
for (;;) {
if ((l_S_3446 == NULL)) goto L_end3447;
{
if (((((*(R17 *)rt_nil_check(l_S_3446))).f_KIND == g_N_EXCEPT) || (((*(R17 *)rt_nil_check(l_S_3446))).f_KIND == g_N_PAR)))
{
{ rt_int rv3448 = 1;
return rv3448; }
}
if (((((*(R17 *)rt_nil_check(l_S_3446))).f_KIND == g_N_LABELED) || (((*(R17 *)rt_nil_check(l_S_3446))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R17 *)rt_nil_check(l_S_3446))).f_A) || r_HAS_HANDLERS(((*(R17 *)rt_nil_check(l_S_3446))).f_B)))
{
{ rt_int rv3449 = 1;
return rv3449; }
}
}
else if ((((*(R17 *)rt_nil_check(l_S_3446))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3446))).f_A))).f_B))
{
{ rt_int rv3450 = 1;
return rv3450; }
}
}
else if (((((*(R17 *)rt_nil_check(l_S_3446))).f_KIND == g_N_LOOP) || (((*(R17 *)rt_nil_check(l_S_3446))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3446))).f_B))).f_B))
{
{ rt_int rv3451 = 1;
return rv3451; }
}
}
else if (((((*(R17 *)rt_nil_check(l_S_3446))).f_KIND == g_N_IF) || (((*(R17 *)rt_nil_check(l_S_3446))).f_KIND == g_N_CASE)))
{
{
R17 * l_A_3452; memset(&l_A_3452, 0, sizeof l_A_3452);
l_A_3452 = ((*(R17 *)rt_nil_check(l_S_3446))).f_A;
if ((((*(R17 *)rt_nil_check(l_S_3446))).f_KIND == g_N_CASE))
{
l_A_3452 = ((*(R17 *)rt_nil_check(l_S_3446))).f_B;
if ((!(((*(R17 *)rt_nil_check(l_S_3446))).f_D == NULL)))
{
{ rt_int rv3453 = 1;
return rv3453; }
}
if ((!(((*(R17 *)rt_nil_check(l_S_3446))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3446))).f_C))).f_B))
{
{ rt_int rv3454 = 1;
return rv3454; }
}
}
}
else if ((!(((*(R17 *)rt_nil_check(l_S_3446))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3446))).f_B))).f_B))
{
{ rt_int rv3455 = 1;
return rv3455; }
}
}
for (;;) {
if ((l_A_3452 == NULL)) goto L_end3456;
{
if ((!(((*(R17 *)rt_nil_check(l_A_3452))).f_C == NULL)))
{
{ rt_int rv3457 = 1;
return rv3457; }
}
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_3452))).f_B))).f_B))
{
{ rt_int rv3458 = 1;
return rv3458; }
}
l_A_3452 = ((*(R17 *)rt_nil_check(l_A_3452))).f_NEXT;
}
RT_B_TICK();
} L_end3456: ;
}
}
l_S_3446 = ((*(R17 *)rt_nil_check(l_S_3446))).f_NEXT;
}
RT_B_TICK();
} L_end3447: ;
{ rt_int rv3459 = 0;
return rv3459; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R17 * p_R) { RT_B_TICK(); 
R12 * l_Y_3460; memset(&l_Y_3460, 0, sizeof l_Y_3460);
l_Y_3460 = r_NEW_SYM(g_Y_ROUTINE, ((*(R17 *)rt_nil_check(p_R))).f_NAME);
R9 l_RN_3461; memset(&l_RN_3461, 0, sizeof l_RN_3461);
S_R9(&l_RN_3461, ((*(R17 *)rt_nil_check(p_R))).f_NAME, 0);
rstr l_S_3462; memset(&l_S_3462, 0, sizeof l_S_3462);
l_S_3462 = rt_b_str_new((l_RN_3461).f_LEN, 0);
rt_b_assign(&l_S_3462, r_STR(l_RN_3461, (l_RN_3461).f_LEN));
((*(R12 *)rt_nil_check(l_Y_3460))).f_DECL = p_R;
S_R9(&((*(R12 *)rt_nil_check(l_Y_3460))).f_ACCESS, r_ROUTINE_CNAME(((*(R17 *)rt_nil_check(p_R))).f_NAME), 0);
if ((((((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)) && ((((*(R7 *)rt_nil_check(g_W))).f_SEPSEG).f_LEN > ((rt_int)0LL))) && (!(((*(R17 *)rt_nil_check(p_R))).f_FL == ((rt_int)1LL)))))
{
((*(R7 *)rt_nil_check(g_W))).f_SEPR = rt_add(((*(R7 *)rt_nil_check(g_W))).f_SEPR, ((rt_int)1LL));
S_R9(&((*(R12 *)rt_nil_check(l_Y_3460))).f_ACCESS, r_FMT3(rt_str("bs_@_r@_@", 9), r_CID(((*(R7 *)rt_nil_check(g_W))).f_SEPSEG), r_NUM(((*(R7 *)rt_nil_check(g_W))).f_SEPR), r_CID(((*(R17 *)rt_nil_check(p_R))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_Y_3460))).f_LINKAGE = ((rt_int)1LL);
if (((*(R7 *)rt_nil_check(g_W))).f_EXTSEG)
{
((*(R12 *)rt_nil_check(l_Y_3460))).f_LINKAGE = ((rt_int)2LL);
}
}
((*(R12 *)rt_nil_check(l_Y_3460))).f_FRAMED = r_NEEDS_FRAME(((*(R17 *)rt_nil_check(p_R))).f_C);
if ((((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3460))).f_FIELD, ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_3460, ((*(R17 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it3464_lo = ((rt_int)1LL), it3464_hi = rt_sub((((*(R17 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it3464 = it3464_lo; it3464 <= it3464_hi; it3464++) {
{
if (rt_b_eq(rt_b_slice(l_S_3462, it3464, it3464), rt_str("$", 1)))
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3460))).f_PREFIX, r_MKN(rt_b_slice(l_S_3462, ((rt_int)0LL), rt_sub(it3464, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_3465; memset(&l_SHORT_3465, 0, sizeof l_SHORT_3465);
l_SHORT_3465 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_3462, rt_add(it3464, ((rt_int)1LL)), rt_sub((((*(R17 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_3465))).f_ORIG = l_Y_3460;
S_R9(&((*(R12 *)rt_nil_check(l_SHORT_3465))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_3460))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_3465))).f_DECL = p_R;
r_DEFINE(l_SHORT_3465, ((*(R17 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end3463;
}
}
RT_B_TICK();
if (it3464 == it3464_hi) break;
} } L_end3463: ;
}
static void r_DECLARE_MEMBERS(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3466; memset(&l_R_3466, 0, sizeof l_R_3466);
l_R_3466 = p_RS;
for (;;) {
if ((l_R_3466 == NULL)) goto L_end3467;
{
if ((((*(R17 *)rt_nil_check(l_R_3466))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_3466);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_3466);
}
l_R_3466 = ((*(R17 *)rt_nil_check(l_R_3466))).f_NEXT;
}
RT_B_TICK();
} L_end3467: ;
}
static void r_ROUTINE_HEADERS(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3468; memset(&l_R_3468, 0, sizeof l_R_3468);
l_R_3468 = p_RS;
for (;;) {
if ((l_R_3468 == NULL)) goto L_end3469;
{
if ((((*(R17 *)rt_nil_check(l_R_3468))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3470; memset(&l_M_3470, 0, sizeof l_M_3470);
l_M_3470 = r_FIND_DECL(l_R_3468);
r_ENTER_MODULE(l_M_3470);
r_ROUTINE_HEADERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3468))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3470);
}
}
else
{
{
R12 * l_Y_3471; memset(&l_Y_3471, 0, sizeof l_Y_3471);
l_Y_3471 = r_FIND_DECL(l_R_3468);
r_ROUTINE_HEADER(l_Y_3471);
}
}
l_R_3468 = ((*(R17 *)rt_nil_check(l_R_3468))).f_NEXT;
}
RT_B_TICK();
} L_end3469: ;
}
static void r_DISTINCT_SIGNATURES(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3472; memset(&l_R_3472, 0, sizeof l_R_3472);
l_R_3472 = p_RS;
for (;;) {
if ((l_R_3472 == NULL)) goto L_end3473;
{
if ((((*(R17 *)rt_nil_check(l_R_3472))).f_KIND == g_N_ROUTINE))
{
{
R17 * l_Q_3474; memset(&l_Q_3474, 0, sizeof l_Q_3474);
l_Q_3474 = ((*(R17 *)rt_nil_check(l_R_3472))).f_NEXT;
for (;;) {
if ((l_Q_3474 == NULL)) goto L_end3475;
{
if (((((*(R17 *)rt_nil_check(l_Q_3474))).f_KIND == g_N_ROUTINE) && r_TEQ(((*(R17 *)rt_nil_check(l_Q_3474))).f_NAME, ((*(R17 *)rt_nil_check(l_R_3472))).f_NAME)))
{
{
R12 * l_A_3476; memset(&l_A_3476, 0, sizeof l_A_3476);
l_A_3476 = r_FIND_DECL(l_R_3472);
R12 * l_B_3477; memset(&l_B_3477, 0, sizeof l_B_3477);
l_B_3477 = r_FIND_DECL(l_Q_3474);
r_ROUTINE_HEADER(l_A_3476);
r_ROUTINE_HEADER(l_B_3477);
if (r_SAME_SIGNATURE(l_A_3476, l_B_3477))
{
r_FAILT(((*(R17 *)rt_nil_check(l_Q_3474))).f_LINE, rt_str("two routines of one scope with the same signature (4.1): ", 57), ((*(R17 *)rt_nil_check(l_Q_3474))).f_NAME);
}
}
}
l_Q_3474 = ((*(R17 *)rt_nil_check(l_Q_3474))).f_NEXT;
}
RT_B_TICK();
} L_end3475: ;
}
}
l_R_3472 = ((*(R17 *)rt_nil_check(l_R_3472))).f_NEXT;
}
RT_B_TICK();
} L_end3473: ;
}
static R12 * r_FIND_DECL(R17 * p_D) { RT_B_TICK(); 
R12 * l_Y_3478; memset(&l_Y_3478, 0, sizeof l_Y_3478);
l_Y_3478 = r_LOOKUP(((*(R17 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_3478 == NULL)) goto L_end3479;
{
if (((((*(R12 *)rt_nil_check(l_Y_3478))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_3478))).f_ORIG == NULL)))
{
{ R12 * rv3480 = l_Y_3478;
return rv3480; }
}
l_Y_3478 = r_LOOKUP_NEXT(l_Y_3478);
}
RT_B_TICK();
} L_end3479: ;
r_FAILT(((*(R17 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R17 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R17 * p_DECLS) { RT_B_TICK(); 
R17 * l_D_3481; memset(&l_D_3481, 0, sizeof l_D_3481);
l_D_3481 = p_DECLS;
for (;;) {
if ((l_D_3481 == NULL)) goto L_end3482;
{
if (((((*(R17 *)rt_nil_check(l_D_3481))).f_KIND == g_N_TYPE) && (((*(R17 *)rt_nil_check(l_D_3481))).f_A == NULL)))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_3481))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_3483; memset(&l_Y_3483, 0, sizeof l_Y_3483);
l_Y_3483 = r_FIND_DECL(l_D_3481);
R22 * l_T_3484; memset(&l_T_3484, 0, sizeof l_T_3484);
l_T_3484 = r_RESOLVE_USER(r_TYPE_REF(l_D_3481));
}
}
}
l_D_3481 = ((*(R17 *)rt_nil_check(l_D_3481))).f_NEXT;
}
RT_B_TICK();
} L_end3482: ;
}
static R17 * r_TYPE_REF(R17 * p_D) { RT_B_TICK(); 
R17 * l_TS_3485; memset(&l_TS_3485, 0, sizeof l_TS_3485);
l_TS_3485 = r_NEW_NODE(g_TS_NAME, ((*(R17 *)rt_nil_check(p_D))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_TS_3485))).f_NAME, ((*(R17 *)rt_nil_check(p_D))).f_NAME, 0);
{ R17 * rv3486 = l_TS_3485;
return rv3486; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R17 * p_M) { RT_B_TICK(); 
R12 * l_Y_3487; memset(&l_Y_3487, 0, sizeof l_Y_3487);
l_Y_3487 = r_NEW_SYM(g_Y_MODULE, ((*(R17 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_3488; memset(&l_SAVED_3488, 0, sizeof l_SAVED_3488);
l_SAVED_3488 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_3487))).f_DECL = p_M;
r_DEFINE(l_Y_3487, ((*(R17 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_3489; memset(&l_MARK_3489, 0, sizeof l_MARK_3489);
l_MARK_3489 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_3487;
r_DECLARE_TYPES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_3487))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_3489);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_3488;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_3487);
}
static void r_ENTER_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_Y_3490; memset(&l_Y_3490, 0, sizeof l_Y_3490);
l_Y_3490 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_3490 == NULL)) goto L_end3491;
{
{
R12 * l_NEXT_3492; memset(&l_NEXT_3492, 0, sizeof l_NEXT_3492);
l_NEXT_3492 = ((*(R12 *)rt_nil_check(l_Y_3490))).f_SNEXT;
r_DEFINE(l_Y_3490, ((rt_int)0LL));
l_Y_3490 = l_NEXT_3492;
}
}
RT_B_TICK();
} L_end3491: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_MARK_3493; memset(&l_MARK_3493, 0, sizeof l_MARK_3493);
l_MARK_3493 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_3493 == NULL)) goto L_end3494;
{
if ((((*(R12 *)rt_nil_check(l_MARK_3493))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end3494;
}
l_MARK_3493 = ((*(R12 *)rt_nil_check(l_MARK_3493))).f_SNEXT;
}
RT_B_TICK();
} L_end3494: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_3493);
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
{ rt_int rv3495 = 1;
return rv3495; }
}
}
{ rt_int rv3496 = 0;
return rv3496; }
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
R17 * l_D_3497; memset(&l_D_3497, 0, sizeof l_D_3497);
l_D_3497 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_3498; memset(&l_Y_3498, 0, sizeof l_Y_3498);
l_Y_3498 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3498 == NULL)) goto L_end3499;
{
if (r_EXPORTED_BY(l_D_3497, l_Y_3498))
{
((*(R12 *)rt_nil_check(l_Y_3498))).f_EXPORTED = 1;
{
R12 * l_A_3500; memset(&l_A_3500, 0, sizeof l_A_3500);
l_A_3500 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_3498))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_3498))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_3500)), (*(R12 *)rt_nil_check(l_Y_3498)), 0);
((*(R12 *)rt_nil_check(l_A_3500))).f_ORIG = r_ORIGINAL(l_Y_3498);
((*(R12 *)rt_nil_check(l_A_3500))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_3500, ((*(R17 *)rt_nil_check(l_D_3497))).f_LINE);
}
}
l_Y_3498 = ((*(R12 *)rt_nil_check(l_Y_3498))).f_SNEXT;
}
RT_B_TICK();
} L_end3499: ;
{
R17 * l_X_3501; memset(&l_X_3501, 0, sizeof l_X_3501);
l_X_3501 = ((*(R17 *)rt_nil_check(l_D_3497))).f_B;
for (;;) {
if ((l_X_3501 == NULL)) goto L_end3502;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R17 *)rt_nil_check(l_X_3501))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_X_3501))).f_LINE, rt_str("the module does not declare ", 28), ((*(R17 *)rt_nil_check(l_X_3501))).f_NAME);
}
r_CHECK_EXPORT_ITEM(p_M, l_X_3501);
l_X_3501 = ((*(R17 *)rt_nil_check(l_X_3501))).f_NEXT;
}
RT_B_TICK();
} L_end3502: ;
}
}
static void r_CHECK_EXPORT_ITEM(R12 * p_M, R17 * p_X) { RT_B_TICK(); 
R12 * l_Y_3503; memset(&l_Y_3503, 0, sizeof l_Y_3503);
l_Y_3503 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
rt_int l_IS_TYPE_3504; memset(&l_IS_TYPE_3504, 0, sizeof l_IS_TYPE_3504);
l_IS_TYPE_3504 = 0;
rt_int l_IS_ROUTINE_3505; memset(&l_IS_ROUTINE_3505, 0, sizeof l_IS_ROUTINE_3505);
l_IS_ROUTINE_3505 = 0;
for (;;) {
if ((l_Y_3503 == NULL)) goto L_end3506;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_3503))).f_NAME, ((*(R17 *)rt_nil_check(p_X))).f_NAME))
{
if ((((*(R12 *)rt_nil_check(l_Y_3503))).f_KIND == g_Y_TYPE))
{
l_IS_TYPE_3504 = 1;
}
else if ((((((*(R12 *)rt_nil_check(l_Y_3503))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_3503))).f_KIND == g_Y_MODULE)) || (((*(R12 *)rt_nil_check(l_Y_3503))).f_KIND == g_Y_ENUMLIT)))
{
l_IS_ROUTINE_3505 = 1;
}
}
else if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_3503))).f_PREFIX, ((*(R17 *)rt_nil_check(p_X))).f_NAME))
{
l_IS_ROUTINE_3505 = 1;
}
l_Y_3503 = ((*(R12 *)rt_nil_check(l_Y_3503))).f_SNEXT;
}
RT_B_TICK();
} L_end3506: ;
if (((!l_IS_TYPE_3504) && (!l_IS_ROUTINE_3505)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_X))).f_LINE, rt_str("only type and routine names are exported (4.4): ", 48), ((*(R17 *)rt_nil_check(p_X))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(p_X))).f_A == NULL)))
{
if ((!l_IS_TYPE_3504))
{
r_FAILT(((*(R17 *)rt_nil_check(p_X))).f_LINE, rt_str("only a type-name is followed by a WITH clause (4.4): ", 53), ((*(R17 *)rt_nil_check(p_X))).f_NAME);
}
{
R17 * l_OP_3507; memset(&l_OP_3507, 0, sizeof l_OP_3507);
l_OP_3507 = ((*(R17 *)rt_nil_check(p_X))).f_A;
for (;;) {
if ((l_OP_3507 == NULL)) goto L_end3508;
{
{
rt_int l_FOUND_3509; memset(&l_FOUND_3509, 0, sizeof l_FOUND_3509);
l_FOUND_3509 = 0;
l_Y_3503 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3503 == NULL)) goto L_end3510;
{
if (((((*(R12 *)rt_nil_check(l_Y_3503))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_3503))).f_PREFIX, ((*(R17 *)rt_nil_check(p_X))).f_NAME)))
{
if (r_TEQ(r_BASE_NAME(r_ORIGINAL(l_Y_3503)), ((*(R17 *)rt_nil_check(l_OP_3507))).f_NAME))
{
l_FOUND_3509 = 1;
}
}
l_Y_3503 = ((*(R12 *)rt_nil_check(l_Y_3503))).f_SNEXT;
}
RT_B_TICK();
} L_end3510: ;
if ((!l_FOUND_3509))
{
r_FAILT(((*(R17 *)rt_nil_check(l_OP_3507))).f_LINE, rt_str("a WITH clause lists operations of the type (4.4): ", 50), ((*(R17 *)rt_nil_check(l_OP_3507))).f_NAME);
}
}
l_OP_3507 = ((*(R17 *)rt_nil_check(l_OP_3507))).f_NEXT;
}
RT_B_TICK();
} L_end3508: ;
}
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_3511; memset(&l_Y_3511, 0, sizeof l_Y_3511);
l_Y_3511 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3511 == NULL)) goto L_end3512;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_3511))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_3511))).f_PREFIX, p_NAME)))
{
{ rt_int rv3513 = 1;
return rv3513; }
}
l_Y_3511 = ((*(R12 *)rt_nil_check(l_Y_3511))).f_SNEXT;
}
RT_B_TICK();
} L_end3512: ;
{ rt_int rv3514 = 0;
return rv3514; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R17 * p_D, R12 * p_Y) { RT_B_TICK(); 
R17 * l_X_3515; memset(&l_X_3515, 0, sizeof l_X_3515);
l_X_3515 = ((*(R17 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv3516 = 0;
return rv3516; }
}
if ((((*(R17 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv3517 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv3517; }
}
for (;;) {
if ((l_X_3515 == NULL)) goto L_end3518;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_X_3515))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3519 = 1;
return rv3519; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R17 *)rt_nil_check(l_X_3515))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R17 *)rt_nil_check(l_X_3515))).f_A == NULL))
{
{ rt_int rv3520 = 1;
return rv3520; }
}
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_X_3515))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv3521 = 1;
return rv3521; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_3522; memset(&l_T_3522, 0, sizeof l_T_3522);
l_T_3522 = r_ORIG_LOOKUP_MEMBER(((*(R17 *)rt_nil_check(l_X_3515))).f_NAME, p_Y);
if ((!(l_T_3522 == NULL)))
{
{ rt_int rv3523 = 1;
return rv3523; }
}
}
}
l_X_3515 = ((*(R17 *)rt_nil_check(l_X_3515))).f_NEXT;
}
RT_B_TICK();
} L_end3518: ;
{ rt_int rv3524 = 0;
return rv3524; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R9 p_NAME, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3525; memset(&l_M_3525, 0, sizeof l_M_3525);
l_M_3525 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_3526; memset(&l_Z_3526, 0, sizeof l_Z_3526);
if ((l_M_3525 == NULL))
{
{ R12 * rv3527 = NULL;
return rv3527; }
}
l_Z_3526 = ((*(R12 *)rt_nil_check(l_M_3525))).f_MEMBERS;
for (;;) {
if ((l_Z_3526 == NULL)) goto L_end3528;
{
if (((((*(R12 *)rt_nil_check(l_Z_3526))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_3526))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_3526))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_3526))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_3526))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv3529 = l_Z_3526;
return rv3529; }
}
}
}
}
l_Z_3526 = ((*(R12 *)rt_nil_check(l_Z_3526))).f_SNEXT;
}
RT_B_TICK();
} L_end3528: ;
{ R12 * rv3530 = NULL;
return rv3530; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3531; memset(&l_R_3531, 0, sizeof l_R_3531);
l_R_3531 = p_RS;
for (;;) {
if ((l_R_3531 == NULL)) goto L_end3532;
{
if ((((*(R17 *)rt_nil_check(l_R_3531))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3533; memset(&l_M_3533, 0, sizeof l_M_3533);
l_M_3533 = r_FIND_DECL(l_R_3531);
R17 * l_D_3534; memset(&l_D_3534, 0, sizeof l_D_3534);
l_D_3534 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3531))).f_C))).f_A;
r_ENTER_MODULE(l_M_3533);
for (;;) {
if ((l_D_3534 == NULL)) goto L_end3535;
{
if (((((*(R17 *)rt_nil_check(l_D_3534))).f_KIND == g_N_VAR) || (((*(R17 *)rt_nil_check(l_D_3534))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3534);
}
l_D_3534 = ((*(R17 *)rt_nil_check(l_D_3534))).f_NEXT;
}
RT_B_TICK();
} L_end3535: ;
r_MODULE_DATA(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3531))).f_C))).f_C);
r_DISTINCT_SIGNATURES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3531))).f_C))).f_C);
r_ROUTINE_USES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3531))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3533);
}
}
l_R_3531 = ((*(R17 *)rt_nil_check(l_R_3531))).f_NEXT;
}
RT_B_TICK();
} L_end3532: ;
}
static void r_ROUTINE_BODIES(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3536; memset(&l_R_3536, 0, sizeof l_R_3536);
l_R_3536 = p_RS;
for (;;) {
if ((l_R_3536 == NULL)) goto L_end3537;
{
if ((((*(R17 *)rt_nil_check(l_R_3536))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3538; memset(&l_M_3538, 0, sizeof l_M_3538);
l_M_3538 = r_FIND_DECL(l_R_3536);
r_ENTER_MODULE(l_M_3538);
r_ROUTINE_BODIES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3536))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3538);
}
}
else
{
{
R12 * l_Y_3539; memset(&l_Y_3539, 0, sizeof l_Y_3539);
l_Y_3539 = r_FIND_DECL(l_R_3536);
if ((((*(R12 *)rt_nil_check(l_Y_3539))).f_LINKAGE == ((rt_int)2LL)))
{
}
else if (((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3539))).f_DECL))).f_FL == ((rt_int)1LL)) && (!((*(R12 *)rt_nil_check(l_Y_3539))).f_GENERIC)))
{
}
else if ((!((*(R12 *)rt_nil_check(l_Y_3539))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_3539);
}
}
}
l_R_3536 = ((*(R17 *)rt_nil_check(l_R_3536))).f_NEXT;
}
RT_B_TICK();
} L_end3537: ;
}
static void r_PENDING_BODIES(void) { RT_B_TICK(); 
rt_int l_LEVEL_3540; memset(&l_LEVEL_3540, 0, sizeof l_LEVEL_3540);
l_LEVEL_3540 = r_CUR_LEVEL();
rt_int l_MORE_3541; memset(&l_MORE_3541, 0, sizeof l_MORE_3541);
l_MORE_3541 = 1;
for (;;) {
if ((!l_MORE_3541)) goto L_end3542;
{
l_MORE_3541 = 0;
{
R12 * l_P_3543; memset(&l_P_3543, 0, sizeof l_P_3543);
l_P_3543 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_3544; memset(&l_PREV_3544, 0, sizeof l_PREV_3544);
l_PREV_3544 = NULL;
for (;;) {
if ((l_P_3543 == NULL)) goto L_end3545;
{
if ((((*(R12 *)rt_nil_check(l_P_3543))).f_LEVEL == l_LEVEL_3540))
{
if ((l_PREV_3544 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_3543))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_3544))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_3543))).f_MEMBERS;
}
{
R12 * l_SAVED_SEG_3546; memset(&l_SAVED_SEG_3546, 0, sizeof l_SAVED_SEG_3546);
l_SAVED_SEG_3546 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R12 * l_HOME_3547; memset(&l_HOME_3547, 0, sizeof l_HOME_3547);
l_HOME_3547 = r_ENTER_HOME(l_P_3543);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(l_P_3543))).f_HOME;
r_ENTER_MODULE_OF(l_P_3543);
r_ROUTINE_BODY(l_P_3543);
r_LEAVE_MODULE_OF(l_P_3543);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_3546;
r_LEAVE_HOME(l_P_3543, l_HOME_3547);
}
l_MORE_3541 = 1;
goto L_end3545;
}
l_PREV_3544 = l_P_3543;
l_P_3543 = ((*(R12 *)rt_nil_check(l_P_3543))).f_MEMBERS;
}
RT_B_TICK();
} L_end3545: ;
}
}
RT_B_TICK();
} L_end3542: ;
}
static void r_CLOSED_BODY(R17 * p_B) { RT_B_TICK(); 
R17 * l_D_3548; memset(&l_D_3548, 0, sizeof l_D_3548);
l_D_3548 = ((*(R17 *)rt_nil_check(p_B))).f_A;
R17 * l_S_3549; memset(&l_S_3549, 0, sizeof l_S_3549);
l_S_3549 = ((*(R17 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R17 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R17 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R17 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_3548 == NULL)) goto L_end3550;
{
if (((((*(R17 *)rt_nil_check(l_D_3548))).f_KIND == g_N_VAR) || (((*(R17 *)rt_nil_check(l_D_3548))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3548);
}
l_D_3548 = ((*(R17 *)rt_nil_check(l_D_3548))).f_NEXT;
}
RT_B_TICK();
} L_end3550: ;
r_MODULE_DATA(((*(R17 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R17 *)rt_nil_check(p_B))).f_C);
r_DISTINCT_SIGNATURES(((*(R17 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R17 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R17 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_3549 == NULL)) goto L_end3551;
{
r_STMT(l_S_3549);
l_S_3549 = ((*(R17 *)rt_nil_check(l_S_3549))).f_NEXT;
}
RT_B_TICK();
} L_end3551: ;
r_ROUTINE_BODIES(((*(R17 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { RT_B_TICK(); 
R17 * l_R_3552; memset(&l_R_3552, 0, sizeof l_R_3552);
l_R_3552 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_3553; memset(&l_SAVED_CODE_3553, 0, sizeof l_SAVED_CODE_3553);
S_R14(&l_SAVED_CODE_3553, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R18 * l_SAVED_CTXS_3554; memset(&l_SAVED_CTXS_3554, 0, sizeof l_SAVED_CTXS_3554);
l_SAVED_CTXS_3554 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R21 * l_SAVED_BINDS_3555; memset(&l_SAVED_BINDS_3555, 0, sizeof l_SAVED_BINDS_3555);
l_SAVED_BINDS_3555 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R19 * l_OUTER_3556; memset(&l_OUTER_3556, 0, sizeof l_OUTER_3556);
l_OUTER_3556 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R19 * l_CS_3557; memset(&l_CS_3557, 0, sizeof l_CS_3557);
l_CS_3557 = ({ R19 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz; })); p; });
R9 l_PROLOGUE_3558; memset(&l_PROLOGUE_3558, 0, sizeof l_PROLOGUE_3558);
S_R9(&l_PROLOGUE_3558, r_MK(rt_str("", 0)), 0);
S_R19(&(*(R19 *)rt_nil_check(l_CS_3557)), ({ R19 rc3559; memset(&rc3559, 0, sizeof rc3559);  rc3559.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc3559.f_R = p_Y; rc3559.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R9(&rc3559.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc3559.f_FIELDS, ({ R14 rc3560; memset(&rc3560, 0, sizeof rc3560);  rc3560.f_HEAD = NULL; rc3560.f_TAIL = NULL; rc3560; }), 0); rc3559.f_UP = l_OUTER_3556; rc3559.f_IMPORTS = ((*(R17 *)rt_nil_check(l_R_3552))).f_E; rc3559.f_SIGNALS = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3552))).f_D))).f_A; rc3559.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc3559.f_IS_PATH = 0; S_R9(&rc3559.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3559; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R19 *)rt_nil_check(l_CS_3557))).f_FTYPE, ((*(R19 *)rt_nil_check(l_CS_3557))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R19 *)rt_nil_check(l_CS_3557))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R19 *)rt_nil_check(l_CS_3557))).f_FIELDS);
}
S_R9(&l_PROLOGUE_3558, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R19 *)rt_nil_check(l_CS_3557))).f_FTYPE, ((*(R19 *)rt_nil_check(l_CS_3557))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_PROLOGUE_3558, r_CATS(l_PROLOGUE_3558, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_3557;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3561; memset(&rc3561, 0, sizeof rc3561);  rc3561.f_HEAD = NULL; rc3561.f_TAIL = NULL; rc3561; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R17 *)rt_nil_check(l_R_3552))).f_E, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3552))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R17 *)rt_nil_check(l_R_3552))).f_LINE);
{
R30 * l_P_3562; memset(&l_P_3562, 0, sizeof l_P_3562);
l_P_3562 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_3562 == NULL)) goto L_end3563;
{
if ((!(((*(R30 *)rt_nil_check(l_P_3562))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R30 *)rt_nil_check(l_P_3562))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_3564; memset(&l_V_3564, 0, sizeof l_V_3564);
l_V_3564 = r_NEW_SYM(g_Y_VAR, ((*(R30 *)rt_nil_check(l_P_3562))).f_NAME);
R21 * l_MB_3565; memset(&l_MB_3565, 0, sizeof l_MB_3565);
l_MB_3565 = r_FIND_BIND(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, r_QMKN(rt_str("=", 1), ((*(R30 *)rt_nil_check(l_P_3562))).f_NAME));
((*(R12 *)rt_nil_check(l_V_3564))).f_T = ((*(R30 *)rt_nil_check(l_P_3562))).f_T;
((*(R12 *)rt_nil_check(l_V_3564))).f_INPUT = (((*(R30 *)rt_nil_check(l_P_3562))).f_MODE == g_M_IN);
if ((!(l_MB_3565 == NULL)))
{
((*(R12 *)rt_nil_check(l_V_3564))).f_HASMV = ((*(R21 *)rt_nil_check(l_MB_3565))).f_HASMV;
((*(R12 *)rt_nil_check(l_V_3564))).f_MV = ((*(R21 *)rt_nil_check(l_MB_3565))).f_MV;
}
((*(R12 *)rt_nil_check(l_V_3564))).f_BYREF = (!(((*(R30 *)rt_nil_check(l_P_3562))).f_MODE == g_M_IN));
S_R9(&((*(R12 *)rt_nil_check(l_V_3564))).f_FIELD, r_FMT1(rt_str("p_@", 3), r_CID(((*(R30 *)rt_nil_check(l_P_3562))).f_NAME)), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_3564))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R30 *)rt_nil_check(l_P_3562))).f_T), r_CID(((*(R30 *)rt_nil_check(l_P_3562))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3557))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3564))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), r_CID(((*(R30 *)rt_nil_check(l_P_3562))).f_NAME)), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R30 *)rt_nil_check(l_P_3562))).f_T), r_CID(((*(R30 *)rt_nil_check(l_P_3562))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3557))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3564))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), r_CID(((*(R30 *)rt_nil_check(l_P_3562))).f_NAME)), 0);
}
S_R9(&l_PROLOGUE_3558, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_3558, r_CID(((*(R30 *)rt_nil_check(l_P_3562))).f_NAME), r_CID(((*(R30 *)rt_nil_check(l_P_3562))).f_NAME)), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_3564))).f_BYREF)
{
S_R9(&((*(R12 *)rt_nil_check(l_V_3564))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), r_CID(((*(R30 *)rt_nil_check(l_P_3562))).f_NAME)), 0);
}
else
{
S_R9(&((*(R12 *)rt_nil_check(l_V_3564))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R30 *)rt_nil_check(l_P_3562))).f_NAME)), 0);
}
if ((((*(R30 *)rt_nil_check(l_P_3562))).f_MODE == g_M_OUT))
{
{
R9 l_ARGA_3566; memset(&l_ARGA_3566, 0, sizeof l_ARGA_3566);
S_R9(&l_ARGA_3566, ((*(R12 *)rt_nil_check(l_V_3564))).f_ACCESS, 0);
r_DEFINE_PARAM_GENS(((*(R30 *)rt_nil_check(l_P_3562))).f_T, l_ARGA_3566, ((*(R17 *)rt_nil_check(l_R_3552))).f_LINE, 1);
((*(R12 *)rt_nil_check(l_V_3564))).f_BYREF = 0;
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ o_@;", 7), r_CTYPE(((*(R30 *)rt_nil_check(l_P_3562))).f_T), r_CID(((*(R30 *)rt_nil_check(l_P_3562))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3557))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3564))).f_ACCESS, r_FMT1(rt_str("F->o_@", 6), r_CID(((*(R30 *)rt_nil_check(l_P_3562))).f_NAME)), 0);
}
else
{
S_R9(&l_PROLOGUE_3558, r_FMT3(rt_str("@ @ o_@;", 8), l_PROLOGUE_3558, r_CTYPE(((*(R30 *)rt_nil_check(l_P_3562))).f_T), r_CID(((*(R30 *)rt_nil_check(l_P_3562))).f_NAME)), 0);
S_R9(&((*(R12 *)rt_nil_check(l_V_3564))).f_ACCESS, r_FMT1(rt_str("o_@", 3), r_CID(((*(R30 *)rt_nil_check(l_P_3562))).f_NAME)), 0);
}
S_R9(&l_PROLOGUE_3558, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_3558, ((*(R12 *)rt_nil_check(l_V_3564))).f_ACCESS, l_ARGA_3566), 0);
if (r_NEEDS_INIT(((*(R30 *)rt_nil_check(l_P_3562))).f_T))
{
S_R9(&l_PROLOGUE_3558, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_3558, ((*(R12 *)rt_nil_check(l_V_3564))).f_ACCESS, r_COPY_OF(((*(R30 *)rt_nil_check(l_P_3562))).f_T, l_ARGA_3566)), 0);
}
S_R9(&((*(R19 *)rt_nil_check(l_CS_3557))).f_COPYOUT, r_CAT(((*(R19 *)rt_nil_check(l_CS_3557))).f_COPYOUT, r_ASSIGN_CODE(((*(R30 *)rt_nil_check(l_P_3562))).f_T, l_ARGA_3566, ((*(R12 *)rt_nil_check(l_V_3564))).f_ACCESS)), 0);
r_DEFINE(l_V_3564, ((*(R17 *)rt_nil_check(l_R_3552))).f_LINE);
}
}
else
{
r_DEFINE(l_V_3564, ((*(R17 *)rt_nil_check(l_R_3552))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R30 *)rt_nil_check(l_P_3562))).f_T, ((*(R12 *)rt_nil_check(l_V_3564))).f_ACCESS, ((*(R17 *)rt_nil_check(l_R_3552))).f_LINE, 1);
}
}
}
}
l_P_3562 = ((*(R30 *)rt_nil_check(l_P_3562))).f_NEXT;
}
RT_B_TICK();
} L_end3563: ;
}
if ((((*(R17 *)rt_nil_check(l_R_3552))).f_FL >= ((rt_int)2LL)))
{
{
R17 * l_N_3567; memset(&l_N_3567, 0, sizeof l_N_3567);
l_N_3567 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3552))).f_D))).f_C;
R14 l_SAVED_CODE_3568; memset(&l_SAVED_CODE_3568, 0, sizeof l_SAVED_CODE_3568);
S_R14(&l_SAVED_CODE_3568, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_3569; memset(&l_V_3569, 0, sizeof l_V_3569);
S_R26(&l_V_3569, r_EXPR(l_N_3567, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
R25 l_M_3570; memset(&l_M_3570, 0, sizeof l_M_3570);
S_R25(&l_M_3570, r_MANIFEST(l_N_3567), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3568, 0);
if ((((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3569).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3569).f_T)))).f_SCALE == ((rt_int)0LL)))) || (!(l_M_3570).f_OK)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_N_3567))).f_LINE, rt_str("the stack-size is a manifest integer expression (4.8.2 [4-111])", 63));
}
if (((l_M_3570).f_V < ((rt_int)0LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_N_3567))).f_LINE, rt_str("the stack-size must be greater than or equal to zero (4.8.2)", 60));
}
}
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R17 *)rt_nil_check(l_R_3552))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R17 *)rt_nil_check(l_R_3552))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R19 *)rt_nil_check(l_CS_3557))).f_FTYPE, r_JOIN_BUF(((*(R19 *)rt_nil_check(l_CS_3557))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { RT_B_TICK(); @", 18), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_3558));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
else if (((((*(R19 *)rt_nil_check(l_CS_3557))).f_COPYOUT).f_LEN > ((rt_int)0LL)))
{
r_EMIT(g_O_FUNCS, ((*(R19 *)rt_nil_check(l_CS_3557))).f_COPYOUT);
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_3556;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3553, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_3554;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_3555;
}
static void r_BIND_INSTANCE(R21 * p_BS, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_B_3571; memset(&l_B_3571, 0, sizeof l_B_3571);
l_B_3571 = p_BS;
for (;;) {
if ((l_B_3571 == NULL)) goto L_end3572;
{
if ((!(((*(R21 *)rt_nil_check(l_B_3571))).f_T == NULL)))
{
{
R12 * l_Y_3573; memset(&l_Y_3573, 0, sizeof l_Y_3573);
l_Y_3573 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_B_3571))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3573))).f_T = ((*(R21 *)rt_nil_check(l_B_3571))).f_T;
r_DEFINE(l_Y_3573, p_LINE);
}
}
else if (((*(R21 *)rt_nil_check(l_B_3571))).f_HASMV)
{
{
R12 * l_Y_3574; memset(&l_Y_3574, 0, sizeof l_Y_3574);
l_Y_3574 = r_NEW_SYM(g_Y_GEN, ((*(R21 *)rt_nil_check(l_B_3571))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3574))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_3574))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_3574))).f_MV = ((*(R21 *)rt_nil_check(l_B_3571))).f_MV;
S_R9(&((*(R12 *)rt_nil_check(l_Y_3574))).f_ACCESS, ((*(R21 *)rt_nil_check(l_B_3571))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_3574))).f_INPUT = 1;
r_DEFINE(l_Y_3574, p_LINE);
}
}
l_B_3571 = ((*(R21 *)rt_nil_check(l_B_3571))).f_NEXT;
}
RT_B_TICK();
} L_end3572: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { RT_B_TICK(); 
R15 * l_C_3575; memset(&l_C_3575, 0, sizeof l_C_3575);
l_C_3575 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_3575 == NULL)) goto L_end3576;
{
r_APPEND(C_R9(((*(R15 *)rt_nil_check(l_C_3575))).f_T), &(*p_DST));
l_C_3575 = ((*(R15 *)rt_nil_check(l_C_3575))).f_NEXT;
}
RT_B_TICK();
} L_end3576: ;
}
static rt_int r_USES_SEGMENT(R17 * p_S, rstr p_NAME) { RT_B_TICK(); 
R17 * l_U_3577; memset(&l_U_3577, 0, sizeof l_U_3577);
l_U_3577 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3577 == NULL)) goto L_end3578;
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_U_3577))).f_NAME, p_NAME))
{
{ rt_int rv3579 = 1;
return rv3579; }
}
l_U_3577 = ((*(R17 *)rt_nil_check(l_U_3577))).f_NEXT;
}
RT_B_TICK();
} L_end3578: ;
{ rt_int rv3580 = 0;
return rv3580; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R17 * p_S, R17 * p_SEGS) { RT_B_TICK(); 
R17 * l_U_3581; memset(&l_U_3581, 0, sizeof l_U_3581);
l_U_3581 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3581 == NULL)) goto L_end3582;
{
{
R17 * l_T_3583; memset(&l_T_3583, 0, sizeof l_T_3583);
l_T_3583 = p_SEGS;
for (;;) {
if ((l_T_3583 == NULL)) goto L_end3584;
{
if ((((!(l_T_3583 == p_S)) && (((*(R17 *)rt_nil_check(l_T_3583))).f_D == NULL)) && r_TEQ(((*(R17 *)rt_nil_check(l_T_3583))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3581))).f_NAME)))
{
{ rt_int rv3585 = 0;
return rv3585; }
}
l_T_3583 = ((*(R17 *)rt_nil_check(l_T_3583))).f_NEXT;
}
RT_B_TICK();
} L_end3584: ;
}
l_U_3581 = ((*(R17 *)rt_nil_check(l_U_3581))).f_NEXT;
}
RT_B_TICK();
} L_end3582: ;
{ rt_int rv3586 = 1;
return rv3586; }
rt_raise(RT_X_INIT);
}
static R9 r_MISSING_SEGMENT(R17 * p_SEGS) { RT_B_TICK(); 
R17 * l_S_3587; memset(&l_S_3587, 0, sizeof l_S_3587);
l_S_3587 = p_SEGS;
for (;;) {
if ((l_S_3587 == NULL)) goto L_end3588;
{
{
R17 * l_U_3589; memset(&l_U_3589, 0, sizeof l_U_3589);
l_U_3589 = ((*(R17 *)rt_nil_check(l_S_3587))).f_A;
for (;;) {
if ((l_U_3589 == NULL)) goto L_end3590;
{
if ((!r_TEQS(((*(R17 *)rt_nil_check(l_U_3589))).f_NAME, rt_str("TERMINAL", 8))))
{
{
R17 * l_T_3591; memset(&l_T_3591, 0, sizeof l_T_3591);
l_T_3591 = p_SEGS;
rt_int l_FOUND_3592; memset(&l_FOUND_3592, 0, sizeof l_FOUND_3592);
l_FOUND_3592 = 0;
for (;;) {
if ((l_T_3591 == NULL)) goto L_end3593;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_T_3591))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3589))).f_NAME))
{
l_FOUND_3592 = 1;
}
l_T_3591 = ((*(R17 *)rt_nil_check(l_T_3591))).f_NEXT;
}
RT_B_TICK();
} L_end3593: ;
if ((!l_FOUND_3592))
{
{ R9 rv3594 = ((*(R17 *)rt_nil_check(l_U_3589))).f_NAME;
return rv3594; }
}
}
}
l_U_3589 = ((*(R17 *)rt_nil_check(l_U_3589))).f_NEXT;
}
RT_B_TICK();
} L_end3590: ;
}
l_S_3587 = ((*(R17 *)rt_nil_check(l_S_3587))).f_NEXT;
}
RT_B_TICK();
} L_end3588: ;
{ R9 rv3595 = r_NO_TEXT();
return rv3595; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R17 * p_SEGS) { RT_B_TICK(); 
R17 * l_S_3596; memset(&l_S_3596, 0, sizeof l_S_3596);
l_S_3596 = p_SEGS;
rt_int l_MAINS_3597; memset(&l_MAINS_3597, 0, sizeof l_MAINS_3597);
l_MAINS_3597 = ((rt_int)0LL);
R19 * l_ROOT_3598; memset(&l_ROOT_3598, 0, sizeof l_ROOT_3598);
l_ROOT_3598 = ({ R19 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz; })); p; });
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R19(&(*(R19 *)rt_nil_check(l_ROOT_3598)), ({ R19 rc3599; memset(&rc3599, 0, sizeof rc3599);  rc3599.f_LEVEL = ((rt_int)0LL); rc3599.f_R = NULL; rc3599.f_FRAMED = 0; S_R9(&rc3599.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc3599.f_FIELDS, ({ R14 rc3600; memset(&rc3600, 0, sizeof rc3600);  rc3600.f_HEAD = NULL; rc3600.f_TAIL = NULL; rc3600; }), 0); rc3599.f_UP = NULL; rc3599.f_IMPORTS = NULL; rc3599.f_SIGNALS = NULL; rc3599.f_RESULT = NULL; rc3599.f_IS_PATH = 0; S_R9(&rc3599.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3599; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_3598;
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
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3601; memset(&rc3601, 0, sizeof rc3601);  rc3601.f_HEAD = NULL; rc3601.f_TAIL = NULL; rc3601; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_3596 = p_SEGS;
for (;;) {
if ((l_S_3596 == NULL)) goto L_end3603;
{
if ((((*(R17 *)rt_nil_check(l_S_3596))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_3596, p_SEGS))
{
goto L_end3603;
}
}
l_S_3596 = ((*(R17 *)rt_nil_check(l_S_3596))).f_NEXT;
}
RT_B_TICK();
} L_end3603: ;
if ((l_S_3596 == NULL))
{
goto L_end3602;
}
((*(R17 *)rt_nil_check(l_S_3596))).f_D = l_S_3596;
l_MAINS_3597 = rt_add(l_MAINS_3597, ((*(R17 *)rt_nil_check(l_S_3596))).f_IV);
if (((((*(R17 *)rt_nil_check(l_S_3596))).f_IV == ((rt_int)0LL)) && (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3596))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_S_3596))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
r_BEGIN_SEGMENT(l_S_3596);
if (r_USES_SEGMENT(l_S_3596, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
((*(R7 *)rt_nil_check(g_W))).f_EXTSEG = r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_EXTS, ((*(R17 *)rt_nil_check(l_S_3596))).f_NAME);
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_SEPSEG, r_NO_TEXT(), 0);
((*(R7 *)rt_nil_check(g_W))).f_SEPV = ((rt_int)0LL);
((*(R7 *)rt_nil_check(g_W))).f_SEPR = ((rt_int)0LL);
if ((((*(R7 *)rt_nil_check(g_W))).f_EXTSEG || ((((*(R7 *)rt_nil_check(g_W))).f_SEPC && r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS, ((*(R17 *)rt_nil_check(l_S_3596))).f_NAME)))))
{
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_SEPSEG, ((*(R17 *)rt_nil_check(l_S_3596))).f_NAME, 0);
if ((((*(R17 *)rt_nil_check(l_S_3596))).f_IV == ((rt_int)1LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_S_3596))).f_LINE, rt_str("a MAIN segment is not translated separately (4.2)", 49));
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_EXTSEG)
{
{
R14 l_SAVED_CODE_3604; memset(&l_SAVED_CODE_3604, 0, sizeof l_SAVED_CODE_3604);
S_R14(&l_SAVED_CODE_3604, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
r_CLOSED_BODY(((*(R17 *)rt_nil_check(l_S_3596))).f_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3604, 0);
r_CODE(r_FMT1(rt_str("bs_@_init();", 12), r_CID(((*(R17 *)rt_nil_check(l_S_3596))).f_NAME)));
r_EMIT(g_O_PROTOS, r_FMT1(rt_str("void bs_@_init(void);", 21), r_CID(((*(R17 *)rt_nil_check(l_S_3596))).f_NAME)));
{
R17 * l_X_3605; memset(&l_X_3605, 0, sizeof l_X_3605);
l_X_3605 = ((*(R7 *)rt_nil_check(g_W))).f_EXTS;
for (;;) {
if (r_TEQ(((*(R17 *)rt_nil_check(l_X_3605))).f_NAME, ((*(R17 *)rt_nil_check(l_S_3596))).f_NAME)) goto L_end3606;
{
l_X_3605 = ((*(R17 *)rt_nil_check(l_X_3605))).f_NEXT;
}
RT_B_TICK();
} L_end3606: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("extern int bs_@_iface_@;", 24), r_CID(((*(R17 *)rt_nil_check(l_S_3596))).f_NAME), r_NUM(((*(R17 *)rt_nil_check(l_X_3605))).f_IV)));
r_EMIT(g_O_GLOBALS, r_CAT(r_FMT2(rt_str("int *bs_needs_@_@ = ", 20), r_UNIT_NAME(), r_CID(((*(R17 *)rt_nil_check(l_S_3596))).f_NAME)), r_FMT2(rt_str("&bs_@_iface_@;", 14), r_CID(((*(R17 *)rt_nil_check(l_S_3596))).f_NAME), r_NUM(((*(R17 *)rt_nil_check(l_X_3605))).f_IV))));
}
}
}
else
{
r_CLOSED_BODY(((*(R17 *)rt_nil_check(l_S_3596))).f_B);
}
r_SEGMENT_EXPORTS(l_S_3596);
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_SEPSEG, r_NO_TEXT(), 0);
((*(R7 *)rt_nil_check(g_W))).f_EXTSEG = 0;
}
RT_B_TICK();
} L_end3602: ;
l_S_3596 = p_SEGS;
for (;;) {
if ((l_S_3596 == NULL)) goto L_end3607;
{
if ((((*(R17 *)rt_nil_check(l_S_3596))).f_D == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_S_3596))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R17 *)rt_nil_check(l_S_3596))).f_NAME);
}
l_S_3596 = ((*(R17 *)rt_nil_check(l_S_3596))).f_NEXT;
}
RT_B_TICK();
} L_end3607: ;
if (((!(l_MAINS_3597 == ((rt_int)1LL))) && (!((*(R7 *)rt_nil_check(g_W))).f_SEPC)))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R17 * l_X_3608; memset(&l_X_3608, 0, sizeof l_X_3608);
l_X_3608 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_3608 == NULL)) goto L_end3609;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), r_CID(((*(R17 *)rt_nil_check(l_X_3608))).f_NAME)));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), r_CID(((*(R17 *)rt_nil_check(l_X_3608))).f_NAME), r_CSTRING(((*(R17 *)rt_nil_check(l_X_3608))).f_NAME)));
l_X_3608 = ((*(R17 *)rt_nil_check(l_X_3608))).f_NEXT;
}
RT_B_TICK();
} L_end3609: ;
}
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if (((*(R7 *)rt_nil_check(g_W))).f_SEPC)
{
{
R9 l_T_3610; memset(&l_T_3610, 0, sizeof l_T_3610);
S_R9(&l_T_3610, r_INPUT_TEXT(), 0);
R9 l_NAME_3611; memset(&l_NAME_3611, 0, sizeof l_NAME_3611);
S_R9(&l_NAME_3611, ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS))).f_NAME, 0);
rt_int l_FP_3612; memset(&l_FP_3612, 0, sizeof l_FP_3612);
l_FP_3612 = r_TEXT_PRINT(r_STR(l_T_3610, (l_T_3610).f_LEN));
r_EMITS(g_O_MAIN, rt_str("}", 1));
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("int bs_@_iface_@ = 1;", 21), r_CID(l_NAME_3611), r_NUM(l_FP_3612)));
r_WRITE_FILE_T(r_LIB_FILE(((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, l_NAME_3611, rt_str(".bif", 4)), l_T_3610);
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
{ R9 rv3613 = r_CID(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS))).f_NAME);
return rv3613; }
}
{ R9 rv3614 = r_MK(rt_str("MAIN", 4));
return rv3614; }
rt_raise(RT_X_INIT);
}
static rt_int r_FROM_DEFINED_MODULE(R17 * p_S, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3615; memset(&l_M_3615, 0, sizeof l_M_3615);
l_M_3615 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv3616 = 0;
return rv3616; }
}
for (;;) {
if ((l_M_3615 == NULL)) goto L_end3617;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_3615))).f_NAME))
{
{ rt_int rv3618 = 1;
return rv3618; }
}
l_M_3615 = ((*(R12 *)rt_nil_check(l_M_3615))).f_MODL;
}
RT_B_TICK();
} L_end3617: ;
{ rt_int rv3619 = 0;
return rv3619; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R17 * p_S) { RT_B_TICK(); 
R12 * l_MARK_3620; memset(&l_MARK_3620, 0, sizeof l_MARK_3620);
l_MARK_3620 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_3621; memset(&l_TAKEN_3621, 0, sizeof l_TAKEN_3621);
R12 * l_SEG_3622; memset(&l_SEG_3622, 0, sizeof l_SEG_3622);
l_SEG_3622 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R17 * l_NAMES_3623; memset(&l_NAMES_3623, 0, sizeof l_NAMES_3623);
l_NAMES_3623 = NULL;
for (;;) {
if ((l_MARK_3620 == NULL)) goto L_end3624;
{
if ((((*(R12 *)rt_nil_check(l_MARK_3620))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end3624;
}
l_MARK_3620 = ((*(R12 *)rt_nil_check(l_MARK_3620))).f_SNEXT;
}
RT_B_TICK();
} L_end3624: ;
l_TAKEN_3621 = r_TAKE_SCOPE(l_MARK_3620);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
{
R17 * l_X_3625; memset(&l_X_3625, 0, sizeof l_X_3625);
l_X_3625 = ((*(R17 *)rt_nil_check(p_S))).f_C;
for (;;) {
if ((l_X_3625 == NULL)) goto L_end3626;
{
{
R12 * l_Y_3627; memset(&l_Y_3627, 0, sizeof l_Y_3627);
l_Y_3627 = l_TAKEN_3621;
rt_int l_FOUND_3628; memset(&l_FOUND_3628, 0, sizeof l_FOUND_3628);
l_FOUND_3628 = (!(r_LOOKUP(((*(R17 *)rt_nil_check(l_X_3625))).f_NAME) == NULL));
for (;;) {
if ((l_Y_3627 == NULL)) goto L_end3629;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_3627))).f_NAME, ((*(R17 *)rt_nil_check(l_X_3625))).f_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_3627))).f_PREFIX, ((*(R17 *)rt_nil_check(l_X_3625))).f_NAME)))
{
l_FOUND_3628 = 1;
}
else if ((((*(R12 *)rt_nil_check(l_Y_3627))).f_KIND == g_Y_ROUTINE))
{
if (r_TEQ(r_BASE_NAME(l_Y_3627), ((*(R17 *)rt_nil_check(l_X_3625))).f_NAME))
{
l_FOUND_3628 = 1;
}
}
l_Y_3627 = ((*(R12 *)rt_nil_check(l_Y_3627))).f_SNEXT;
}
RT_B_TICK();
} L_end3629: ;
if ((!l_FOUND_3628))
{
r_FAILT(((*(R17 *)rt_nil_check(l_X_3625))).f_LINE, rt_str("DEFINES names a name local to the segment or imported into it (4.2): ", 69), ((*(R17 *)rt_nil_check(l_X_3625))).f_NAME);
}
l_NAMES_3623 = r_NAME_REF(((*(R17 *)rt_nil_check(l_X_3625))).f_NAME, ((rt_int)0LL), NULL, l_NAMES_3623);
}
l_X_3625 = ((*(R17 *)rt_nil_check(l_X_3625))).f_NEXT;
}
RT_B_TICK();
} L_end3626: ;
}
for (;;) {
if ((l_TAKEN_3621 == NULL)) goto L_end3630;
{
{
R12 * l_NEXT_3631; memset(&l_NEXT_3631, 0, sizeof l_NEXT_3631);
l_NEXT_3631 = ((*(R12 *)rt_nil_check(l_TAKEN_3621))).f_SNEXT;
if (((!(((*(R12 *)rt_nil_check(l_TAKEN_3621))).f_KIND == g_Y_BUILTIN)) && (((((((((*(R17 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_3621))).f_NAME)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_3621))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_3621))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_3621)) || (((((*(R12 *)rt_nil_check(l_TAKEN_3621))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_3621))))))))
{
((*(R12 *)rt_nil_check(l_TAKEN_3621))).f_SEGM = l_SEG_3622;
l_NAMES_3623 = r_NAME_REF(((*(R12 *)rt_nil_check(l_TAKEN_3621))).f_NAME, ((rt_int)0LL), NULL, l_NAMES_3623);
r_DEFINE(l_TAKEN_3621, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
else if ((!(((*(R12 *)rt_nil_check(l_TAKEN_3621))).f_KIND == g_Y_BUILTIN)))
{
((*(R12 *)rt_nil_check(l_TAKEN_3621))).f_SNEXT = ((*(R12 *)rt_nil_check(l_SEG_3622))).f_MEMBERS;
((*(R12 *)rt_nil_check(l_SEG_3622))).f_MEMBERS = l_TAKEN_3621;
}
l_TAKEN_3621 = l_NEXT_3631;
}
}
RT_B_TICK();
} L_end3630: ;
((*(R12 *)rt_nil_check(l_SEG_3622))).f_USES = l_NAMES_3623;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = NULL;
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = NULL;
}
static void r_BEGIN_SEGMENT(R17 * p_S) { RT_B_TICK(); 
R12 * l_SEG_3632; memset(&l_SEG_3632, 0, sizeof l_SEG_3632);
l_SEG_3632 = r_NEW_SYM(g_Y_SEGMENT, ((*(R17 *)rt_nil_check(p_S))).f_NAME);
R17 * l_U_3633; memset(&l_U_3633, 0, sizeof l_U_3633);
l_U_3633 = ((*(R17 *)rt_nil_check(p_S))).f_A;
((*(R12 *)rt_nil_check(l_SEG_3632))).f_DECL = p_S;
((*(R12 *)rt_nil_check(l_SEG_3632))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_SEGS;
((*(R7 *)rt_nil_check(g_W))).f_SEGS = l_SEG_3632;
for (;;) {
if ((l_U_3633 == NULL)) goto L_end3634;
{
if ((!r_TEQS(((*(R17 *)rt_nil_check(l_U_3633))).f_NAME, rt_str("TERMINAL", 8))))
{
{
R12 * l_T_3635; memset(&l_T_3635, 0, sizeof l_T_3635);
l_T_3635 = r_FIND_SEGMENT(((*(R17 *)rt_nil_check(l_U_3633))).f_NAME);
if ((l_T_3635 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_U_3633))).f_LINE, rt_str("USES names a segment of the program (4.2): ", 43), ((*(R17 *)rt_nil_check(l_U_3633))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(l_U_3633))).f_A == NULL)))
{
r_CHECK_ITEMS_DEFINED(l_T_3635, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3633))).f_A))).f_A);
r_CHECK_ITEMS_DEFINED(l_T_3635, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3633))).f_A))).f_B);
r_CHECK_ITEMS_DEFINED(l_T_3635, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3633))).f_A))).f_C);
r_CHECK_ITEMS_DEFINED(l_T_3635, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3633))).f_A))).f_D);
r_CHECK_ITEMS_DEFINED(l_T_3635, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3633))).f_A))).f_E);
}
}
}
l_U_3633 = ((*(R17 *)rt_nil_check(l_U_3633))).f_NEXT;
}
RT_B_TICK();
} L_end3634: ;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SEG_3632;
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = l_SEG_3632;
l_U_3633 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3633 == NULL)) goto L_end3636;
{
if ((!(((*(R17 *)rt_nil_check(l_U_3633))).f_A == NULL)))
{
r_INPUT_IMPORT_CONFLICT(((*(R17 *)rt_nil_check(l_U_3633))).f_A, ((*(R17 *)rt_nil_check(l_U_3633))).f_LINE);
}
l_U_3633 = ((*(R17 *)rt_nil_check(l_U_3633))).f_NEXT;
}
RT_B_TICK();
} L_end3636: ;
}
static R12 * r_ENTER_HOME(R12 * p_Y) { RT_B_TICK(); 
R12 * l_SAVED_3637; memset(&l_SAVED_3637, 0, sizeof l_SAVED_3637);
l_SAVED_3637 = ((*(R7 *)rt_nil_check(g_W))).f_TRSEG;
if (((((*(R12 *)rt_nil_check(p_Y))).f_HOME == NULL) || (((*(R12 *)rt_nil_check(p_Y))).f_HOME == ((*(R7 *)rt_nil_check(g_W))).f_TRSEG)))
{
{ R12 * rv3638 = l_SAVED_3637;
return rv3638; }
}
r_OPEN_SCOPE();
{
R12 * l_X_3639; memset(&l_X_3639, 0, sizeof l_X_3639);
l_X_3639 = ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_HOME))).f_MEMBERS;
for (;;) {
if ((l_X_3639 == NULL)) goto L_end3640;
{
{
R12 * l_A_3641; memset(&l_A_3641, 0, sizeof l_A_3641);
l_A_3641 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_X_3639))).f_KIND, ((*(R12 *)rt_nil_check(l_X_3639))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_3641)), (*(R12 *)rt_nil_check(l_X_3639)), 0);
((*(R12 *)rt_nil_check(l_A_3641))).f_ORIG = r_ORIGINAL(l_X_3639);
r_DEFINE_ALIAS(l_A_3641);
}
l_X_3639 = ((*(R12 *)rt_nil_check(l_X_3639))).f_SNEXT;
}
RT_B_TICK();
} L_end3640: ;
}
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = ((*(R12 *)rt_nil_check(p_Y))).f_HOME;
{ R12 * rv3642 = l_SAVED_3637;
return rv3642; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_ALIAS(R12 * p_A) { RT_B_TICK(); 
rt_int l_B_3643; memset(&l_B_3643, 0, sizeof l_B_3643);
l_B_3643 = r_BUCKET(((*(R12 *)rt_nil_check(p_A))).f_NAME);
((*(R12 *)rt_nil_check(p_A))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_A))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_3643, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_3643, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_A;
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
R12 * l_T_3644; memset(&l_T_3644, 0, sizeof l_T_3644);
l_T_3644 = ((*(R7 *)rt_nil_check(g_W))).f_SEGS;
for (;;) {
if ((l_T_3644 == NULL)) goto L_end3645;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_T_3644))).f_NAME, p_NAME))
{
{ R12 * rv3646 = l_T_3644;
return rv3646; }
}
l_T_3644 = ((*(R12 *)rt_nil_check(l_T_3644))).f_INSTANCES;
}
RT_B_TICK();
} L_end3645: ;
{ R12 * rv3647 = NULL;
return rv3647; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_ITEMS_DEFINED(R12 * p_T, R17 * p_L) { RT_B_TICK(); 
R17 * l_N_3648; memset(&l_N_3648, 0, sizeof l_N_3648);
l_N_3648 = p_L;
for (;;) {
if ((l_N_3648 == NULL)) goto L_end3649;
{
if ((!r_IN_IDENTS(((*(R12 *)rt_nil_check(p_T))).f_USES, ((*(R17 *)rt_nil_check(l_N_3648))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_N_3648))).f_LINE, rt_str("the segment does not define ", 28), ((*(R17 *)rt_nil_check(l_N_3648))).f_NAME);
}
l_N_3648 = ((*(R17 *)rt_nil_check(l_N_3648))).f_NEXT;
}
RT_B_TICK();
} L_end3649: ;
}
static rt_int r_SEG_VISIBLE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_U_3650; memset(&l_U_3650, 0, sizeof l_U_3650);
rt_int l_INPUT_ONLY_3651; memset(&l_INPUT_ONLY_3651, 0, sizeof l_INPUT_ONLY_3651);
l_INPUT_ONLY_3651 = 0;
if (((((((*(R7 *)rt_nil_check(g_W))).f_CURSEG == NULL) || (((*(R12 *)rt_nil_check(p_Y))).f_SEGM == NULL)) || (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL))) || (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
{ rt_int rv3652 = 1;
return rv3652; }
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_SEGM == ((*(R7 *)rt_nil_check(g_W))).f_CURSEG))
{
{ rt_int rv3653 = 1;
return rv3653; }
}
l_U_3650 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CURSEG))).f_DECL))).f_A;
for (;;) {
if ((l_U_3650 == NULL)) goto L_end3654;
{
{
R12 * l_T_3655; memset(&l_T_3655, 0, sizeof l_T_3655);
l_T_3655 = r_FIND_SEGMENT(((*(R17 *)rt_nil_check(l_U_3650))).f_NAME);
if ((!(l_T_3655 == NULL)))
{
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_T_3655))).f_USES, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
if ((((*(R17 *)rt_nil_check(l_U_3650))).f_A == NULL))
{
{ rt_int rv3656 = 1;
return rv3656; }
}
{
R17 * l_I_3657; memset(&l_I_3657, 0, sizeof l_I_3657);
l_I_3657 = ((*(R17 *)rt_nil_check(l_U_3650))).f_A;
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)))
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3657))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3658 = 1;
return rv3658; }
}
else if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3657))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
l_INPUT_ONLY_3651 = 1;
}
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE))
{
if ((((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3657))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME) || r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3657))).f_C, r_BASE_NAME(p_Y))) || r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3657))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)) || r_FROM_MODULES(((*(R17 *)rt_nil_check(l_I_3657))).f_E, p_Y)))
{
{ rt_int rv3659 = 1;
return rv3659; }
}
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE))
{
if ((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3657))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_NAME) || r_FROM_MODULES(((*(R17 *)rt_nil_check(l_I_3657))).f_E, p_Y)))
{
{ rt_int rv3660 = 1;
return rv3660; }
}
}
else
{
{ rt_int rv3661 = 1;
return rv3661; }
}
}
}
}
}
l_U_3650 = ((*(R17 *)rt_nil_check(l_U_3650))).f_NEXT;
}
RT_B_TICK();
} L_end3654: ;
if (l_INPUT_ONLY_3651)
{
{ rt_int rv3662 = 0;
return rv3662; }
}
r_FAILT(p_LINE, rt_str("not imported by the USES clause of the segment (4.2): ", 54), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static rt_int r_FROM_MODULES(R17 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3663; memset(&l_M_3663, 0, sizeof l_M_3663);
l_M_3663 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((p_MODS == NULL))
{
{ rt_int rv3664 = 0;
return rv3664; }
}
for (;;) {
if ((l_M_3663 == NULL)) goto L_end3665;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_3663))).f_NAME))
{
{ rt_int rv3666 = 1;
return rv3666; }
}
l_M_3663 = ((*(R12 *)rt_nil_check(l_M_3663))).f_MODL;
}
RT_B_TICK();
} L_end3665: ;
{ rt_int rv3667 = 0;
return rv3667; }
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
g_T_XFIX = ((rt_int)16LL);
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
