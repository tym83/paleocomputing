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
struct fr_r_MANIFEST_ARITH { void *up; R9 p_OP; rt_int p_A; rt_int p_B; rt_int p_LINE; rt_int l_R_1468; };
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
static void r_MARK_LIBRARY(void);
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
r_MARK_LIBRARY();
}
static void r_MARK_LIBRARY(void) { RT_B_TICK(); 
rstr l_MARK_96; memset(&l_MARK_96, 0, sizeof l_MARK_96);
l_MARK_96 = rt_b_str_new(((rt_int)10LL), 0);
rt_b_assign(&l_MARK_96, rt_str("% LIBRARY ", 10));
rt_int l_I_97; memset(&l_I_97, 0, sizeof l_I_97);
l_I_97 = ((rt_int)0LL);
for (;;) {
if ((l_I_97 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC)) goto L_end98;
{
if (((l_I_97 == ((rt_int)0LL)) || (r_AT_SRC(rt_sub(l_I_97, ((rt_int)1LL))) == ((rt_int)10LL))))
{
{
rt_int l_K_99; memset(&l_K_99, 0, sizeof l_K_99);
l_K_99 = ((rt_int)0LL);
for (;;) {
if ((l_K_99 >= ((rt_int)10LL))) goto L_end100;
{
if ((!(r_AT_SRC(rt_add(l_I_97, l_K_99)) == r_CODE_OF(rt_b_slice(l_MARK_96, l_K_99, l_K_99)))))
{
goto L_end100;
}
l_K_99 = rt_add(l_K_99, ((rt_int)1LL));
}
RT_B_TICK();
} L_end100: ;
if ((l_K_99 == ((rt_int)10LL)))
{
{
rt_int l_E_101; memset(&l_E_101, 0, sizeof l_E_101);
l_E_101 = rt_add(l_I_97, ((rt_int)10LL));
R17 * l_N_102; memset(&l_N_102, 0, sizeof l_N_102);
l_N_102 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_E_101)))) goto L_end103;
{
l_E_101 = rt_add(l_E_101, ((rt_int)1LL));
}
RT_B_TICK();
} L_end103: ;
S_R9(&((*(R17 *)rt_nil_check(l_N_102))).f_NAME, r_SOURCE_TEXT(rt_add(l_I_97, ((rt_int)10LL)), l_E_101), 0);
((*(R17 *)rt_nil_check(l_N_102))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_LIBSEGS;
((*(R7 *)rt_nil_check(g_W))).f_LIBSEGS = l_N_102;
}
}
}
}
l_I_97 = rt_add(l_I_97, ((rt_int)1LL));
}
RT_B_TICK();
} L_end98: ;
}
static rt_int r_AT_SRC(rt_int p_I) { RT_B_TICK(); 
if ((p_I >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC))
{
{ rt_int rv104 = ((rt_int)0LL);
return rv104; }
}
{ rt_int rv105 = (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(p_I, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])];
return rv105; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LETTER(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv106 = ({ rt_int iv107 = p_C; (((rt_int)65LL) <= iv107) && (iv107 <= ((rt_int)90LL)); });
return rv106; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_DIGIT(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv108 = ({ rt_int iv109 = p_C; (((rt_int)48LL) <= iv109) && (iv109 <= ((rt_int)57LL)); });
return rv108; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_IDCHAR(rt_int p_C) { RT_B_TICK(); 
{ rt_int rv110 = ((r_IS_LETTER(p_C) || r_IS_DIGIT(p_C)) || (p_C == ((rt_int)95LL)));
return rv110; }
rt_raise(RT_X_INIT);
}
static R9 r_SOURCE_TEXT(rt_int p_FIRST, rt_int p_BEYOND) { RT_B_TICK(); 
rt_int l_AT_111; memset(&l_AT_111, 0, sizeof l_AT_111);
l_AT_111 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_L_112; memset(&l_L_112, 0, sizeof l_L_112);
l_L_112 = rt_sub(p_BEYOND, p_FIRST);
R9 l_T_113; memset(&l_T_113, 0, sizeof l_T_113);
if ((rt_add(l_AT_111, l_L_112) > g_ARENA_SIZE))
{
r_FAIL(((rt_int)0LL), rt_str("the arena is full", 17));
}
{ rt_int it115_lo = p_FIRST, it115_hi = rt_sub(p_BEYOND, ((rt_int)1LL));
for (rt_int it115 = it115_lo; it115 <= it115_hi; it115++) {
{
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, ((*(R7 *)rt_nil_check(g_W))).f_TOP, ((*(R7 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(it115, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]));
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R7 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
}
RT_B_TICK();
if (it115 == it115_hi) break;
} } L_end114: ;
S_R9(&l_T_113, ({ R9 rc116; memset(&rc116, 0, sizeof rc116);  rc116.f_AT = l_AT_111; rc116.f_LEN = l_L_112; rc116.f_H = ((rt_int)0LL); rc116; }), 0);
if ((l_L_112 > ((rt_int)0LL)))
{
(l_T_113).f_H = r_HASH_CODES(l_L_112, (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(p_FIRST, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])], (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(rt_add(p_FIRST, rt_quot(l_L_112, ((rt_int)2LL))), (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])], (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(rt_sub(p_BEYOND, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]);
}
{ R9 rv117 = l_T_113;
return rv117; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_RESERVED(R9 p_T) { RT_B_TICK(); 
rstr l_WORDS_118; memset(&l_WORDS_118, 0, sizeof l_WORDS_118);
l_WORDS_118 = rt_b_str_new(((rt_int)290LL), 0);
rt_b_assign(&l_WORDS_118, rt_str(" AND ANY ARRAY ASSERT BIN BLOCK CONST DO ELSE END EXCEPT EXIT FALSE FOR FROM FUNCTION GO HEX IF IN INLINE LOOP MAIN MOD MODULE NAMING NEEDS NIL NOT OCT OF OR ORIF PAR_BLOCK PATH PROCEDURE RECORD REP RETURN SEGMENT SELECT SIGNAL TAG TERMINATE THEN TO TRUE TYPE UNTIL VAR WHEN WHERE WITH XOR ", 290));
rt_int l_L_119; memset(&l_L_119, 0, sizeof l_L_119);
l_L_119 = (p_T).f_LEN;
{ rt_int it121_lo = ((rt_int)0LL), it121_hi = rt_sub(rt_sub(((rt_int)290LL), l_L_119), ((rt_int)2LL));
for (rt_int it121 = it121_lo; it121 <= it121_hi; it121++) {
{
if (rt_b_eq(rt_b_slice(l_WORDS_118, it121, it121), rt_str(" ", 1)))
{
if (rt_b_eq(rt_b_slice(l_WORDS_118, rt_add(rt_add(it121, l_L_119), ((rt_int)1LL)), rt_add(rt_add(it121, l_L_119), ((rt_int)1LL))), rt_str(" ", 1)))
{
if (rt_b_eq(rt_b_slice(l_WORDS_118, rt_add(it121, ((rt_int)1LL)), rt_add(it121, l_L_119)), r_STR(p_T, l_L_119)))
{
{ rt_int rv122 = 1;
return rv122; }
}
}
}
}
RT_B_TICK();
if (it121 == it121_hi) break;
} } L_end120: ;
{ rt_int rv123 = 0;
return rv123; }
rt_raise(RT_X_INIT);
}
static void r_ADD_TOKEN(rt_int p_KIND, rt_int p_LINE, rt_int p_IV, R9 p_TX) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_NTOKS >= g_MAX_TOKENS))
{
r_FAIL(p_LINE, rt_str("too many tokens", 15));
}
S_R10(&(((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], ({ R10 rc124; memset(&rc124, 0, sizeof rc124);  rc124.f_KIND = p_KIND; rc124.f_LINE = p_LINE; rc124.f_IV = p_IV; S_R9(&rc124.f_TX, p_TX, 0); rc124; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_NTOKS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL));
}
static rt_int r_SYMBOL_LENGTH(rt_int p_I) { RT_B_TICK(); 
rt_int l_C_125; memset(&l_C_125, 0, sizeof l_C_125);
l_C_125 = r_AT_SRC(p_I);
rt_int l_D_126; memset(&l_D_126, 0, sizeof l_D_126);
l_D_126 = r_AT_SRC(rt_add(p_I, ((rt_int)1LL)));
if ((((l_C_125 == ((rt_int)45LL)) && (l_D_126 == ((rt_int)45LL))) && (r_AT_SRC(rt_add(p_I, ((rt_int)2LL))) == ((rt_int)62LL))))
{
{ rt_int rv127 = ((rt_int)3LL);
return rv127; }
}
if ((((((((((((l_C_125 == ((rt_int)58LL)) && (l_D_126 == ((rt_int)61LL)))) || (((l_C_125 == ((rt_int)45LL)) && (l_D_126 == ((rt_int)62LL))))) || (((l_C_125 == ((rt_int)60LL)) && (l_D_126 == ((rt_int)61LL))))) || (((l_C_125 == ((rt_int)62LL)) && (l_D_126 == ((rt_int)61LL))))) || (((l_C_125 == ((rt_int)60LL)) && (l_D_126 == ((rt_int)62LL))))) || (((l_C_125 == ((rt_int)42LL)) && (l_D_126 == ((rt_int)42LL))))) || (((l_C_125 == ((rt_int)47LL)) && (l_D_126 == ((rt_int)47LL))))) || (((l_C_125 == ((rt_int)36LL)) && (l_D_126 == ((rt_int)36LL))))) || (((l_C_125 == ((rt_int)33LL)) && (l_D_126 == ((rt_int)33LL))))))
{
{ rt_int rv128 = ((rt_int)2LL);
return rv128; }
}
{ rt_int rv129 = ((rt_int)1LL);
return rv129; }
rt_raise(RT_X_INIT);
}
static void r_LEX(void) { RT_B_TICK(); 
rt_int l_I_130; memset(&l_I_130, 0, sizeof l_I_130);
l_I_130 = ((*(R7 *)rt_nil_check(g_W))).f_LEXED;
rt_int l_LINE_131; memset(&l_LINE_131, 0, sizeof l_LINE_131);
l_LINE_131 = rt_add(((*(R7 *)rt_nil_check(g_W))).f_LEXLINE, ((rt_int)1LL));
rt_int l_C_132; memset(&l_C_132, 0, sizeof l_C_132);
rt_int l_J_133; memset(&l_J_133, 0, sizeof l_J_133);
rt_int l_V_134; memset(&l_V_134, 0, sizeof l_V_134);
if ((((*(R7 *)rt_nil_check(g_W))).f_NTOKS > ((rt_int)0LL)))
{
((*(R7 *)rt_nil_check(g_W))).f_NTOKS = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL));
}
for (;;) {
if ((l_I_130 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC)) goto L_end135;
{
l_C_132 = (((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_130, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])];
if ((l_C_132 == ((rt_int)10LL)))
{
l_LINE_131 = rt_add(l_LINE_131, ((rt_int)1LL));
l_I_130 = rt_add(l_I_130, ((rt_int)1LL));
}
else if (((((l_C_132 == ((rt_int)32LL)) || (l_C_132 == ((rt_int)9LL))) || (l_C_132 == ((rt_int)13LL))) || (l_C_132 == ((rt_int)12LL))))
{
l_I_130 = rt_add(l_I_130, ((rt_int)1LL));
}
else if ((l_C_132 == ((rt_int)37LL)))
{
l_I_130 = rt_add(l_I_130, ((rt_int)1LL));
for (;;) {
if ((((l_I_130 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_130, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)37LL))) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_130, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)10LL)))) goto L_end136;
{
l_I_130 = rt_add(l_I_130, ((rt_int)1LL));
}
RT_B_TICK();
} L_end136: ;
if ((r_AT_SRC(l_I_130) == ((rt_int)37LL)))
{
l_I_130 = rt_add(l_I_130, ((rt_int)1LL));
}
}
else if ((l_C_132 == ((rt_int)39LL)))
{
{
rt_int l_AT_137; memset(&l_AT_137, 0, sizeof l_AT_137);
l_AT_137 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
l_I_130 = rt_add(l_I_130, ((rt_int)1LL));
for (;;) {
{
if (((l_I_130 >= ((*(R7 *)rt_nil_check(g_W))).f_NSRC) || ((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_130, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)10LL))))
{
r_FAIL(l_LINE_131, rt_str("a string must end on its line", 29));
}
if (((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_130, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] == ((rt_int)39LL)))
{
if ((!(r_AT_SRC(rt_add(l_I_130, ((rt_int)1LL))) == ((rt_int)39LL))))
{
l_I_130 = rt_add(l_I_130, ((rt_int)1LL));
goto L_end138;
}
l_I_130 = rt_add(l_I_130, ((rt_int)1LL));
}
rt_b_slice_assign(&((*(R7 *)rt_nil_check(g_W))).f_ARENA, ((*(R7 *)rt_nil_check(g_W))).f_TOP, ((*(R7 *)rt_nil_check(g_W))).f_TOP, r_CHAR_OF((((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(l_I_130, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])]));
((*(R7 *)rt_nil_check(g_W))).f_TOP = rt_add(((*(R7 *)rt_nil_check(g_W))).f_TOP, ((rt_int)1LL));
l_I_130 = rt_add(l_I_130, ((rt_int)1LL));
}
RT_B_TICK();
} L_end138: ;
r_ADD_TOKEN(g_K_STR, l_LINE_131, ((rt_int)0LL), ({ R9 rc139; memset(&rc139, 0, sizeof rc139);  rc139.f_AT = l_AT_137; rc139.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_137); rc139.f_H = rt_neg(((rt_int)1LL)); rc139; }));
}
}
else if ((l_C_132 == ((rt_int)92LL)))
{
l_J_133 = rt_add(l_I_130, ((rt_int)1LL));
if (((((r_AT_SRC(l_J_133) == ((rt_int)39LL)) && (r_AT_SRC(rt_add(l_J_133, ((rt_int)1LL))) == ((rt_int)39LL))) && (r_AT_SRC(rt_add(l_J_133, ((rt_int)2LL))) == ((rt_int)39LL))) && (r_AT_SRC(rt_add(l_J_133, ((rt_int)3LL))) == ((rt_int)39LL))))
{
l_J_133 = rt_add(l_I_130, ((rt_int)5LL));
}
else if (((r_AT_SRC(l_J_133) == ((rt_int)39LL)) && (r_AT_SRC(rt_add(l_J_133, ((rt_int)2LL))) == ((rt_int)39LL))))
{
l_J_133 = rt_add(l_I_130, ((rt_int)4LL));
}
else if (((r_AT_SRC(l_J_133) == ((rt_int)91LL)) || (r_AT_SRC(l_J_133) == ((rt_int)93LL))))
{
l_J_133 = rt_add(l_I_130, ((rt_int)2LL));
}
else
{
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_133)))) goto L_end140;
{
l_J_133 = rt_add(l_J_133, ((rt_int)1LL));
}
RT_B_TICK();
} L_end140: ;
if ((l_J_133 == rt_add(l_I_130, ((rt_int)1LL))))
{
r_FAIL(l_LINE_131, rt_str("a stray backslash", 17));
}
}
r_ADD_TOKEN(g_K_ENUM, l_LINE_131, ((rt_int)0LL), r_SOURCE_TEXT(l_I_130, l_J_133));
l_I_130 = l_J_133;
}
else if ((l_C_132 == ((rt_int)63LL)))
{
l_J_133 = rt_add(l_I_130, ((rt_int)1LL));
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_133)))) goto L_end141;
{
l_J_133 = rt_add(l_J_133, ((rt_int)1LL));
}
RT_B_TICK();
} L_end141: ;
r_ADD_TOKEN(g_K_GEN, l_LINE_131, ((rt_int)0LL), r_SOURCE_TEXT(l_I_130, l_J_133));
l_I_130 = l_J_133;
}
else if (r_IS_LETTER(l_C_132))
{
l_J_133 = l_I_130;
for (;;) {
if ((!r_IS_IDCHAR(r_AT_SRC(l_J_133)))) goto L_end142;
{
l_J_133 = rt_add(l_J_133, ((rt_int)1LL));
}
RT_B_TICK();
} L_end142: ;
{
R9 l_T_143; memset(&l_T_143, 0, sizeof l_T_143);
S_R9(&l_T_143, r_SOURCE_TEXT(l_I_130, l_J_133), 0);
if (r_IS_RESERVED(l_T_143))
{
r_ADD_TOKEN(g_K_RES, l_LINE_131, ((rt_int)0LL), l_T_143);
}
else
{
r_ADD_TOKEN(g_K_ID, l_LINE_131, ((rt_int)0LL), l_T_143);
}
}
l_I_130 = l_J_133;
}
else if ((r_IS_DIGIT(l_C_132) || (((l_C_132 == ((rt_int)46LL)) && r_IS_DIGIT(r_AT_SRC(rt_add(l_I_130, ((rt_int)1LL))))))))
{
{
rt_int l_KIND_144; memset(&l_KIND_144, 0, sizeof l_KIND_144);
l_KIND_144 = g_K_NUM;
rt_int l_SCALE_145; memset(&l_SCALE_145, 0, sizeof l_SCALE_145);
l_SCALE_145 = ((rt_int)0LL);
rt_int l_NEG_146; memset(&l_NEG_146, 0, sizeof l_NEG_146);
l_NEG_146 = 0;
rt_int l_BIG_147; memset(&l_BIG_147, 0, sizeof l_BIG_147);
l_BIG_147 = 0;
l_J_133 = l_I_130;
l_V_134 = ((rt_int)0LL);
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_133)))) goto L_end148;
{
if ((l_V_134 > rt_quot((rt_sub(INT64_MAX, (rt_sub(r_AT_SRC(l_J_133), ((rt_int)48LL))))), ((rt_int)10LL))))
{
l_BIG_147 = 1;
}
else
{
l_V_134 = rt_add(rt_mul(l_V_134, ((rt_int)10LL)), (rt_sub(r_AT_SRC(l_J_133), ((rt_int)48LL))));
}
l_J_133 = rt_add(l_J_133, ((rt_int)1LL));
}
RT_B_TICK();
} L_end148: ;
if ((r_AT_SRC(l_J_133) == ((rt_int)46LL)))
{
l_KIND_144 = g_K_REAL;
l_J_133 = rt_add(l_J_133, ((rt_int)1LL));
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_133)))) goto L_end149;
{
l_J_133 = rt_add(l_J_133, ((rt_int)1LL));
}
RT_B_TICK();
} L_end149: ;
}
if (((r_AT_SRC(l_J_133) == ((rt_int)69LL)) && ((r_IS_DIGIT(r_AT_SRC(rt_add(l_J_133, ((rt_int)1LL)))) || (((((r_AT_SRC(rt_add(l_J_133, ((rt_int)1LL))) == ((rt_int)43LL)) || (r_AT_SRC(rt_add(l_J_133, ((rt_int)1LL))) == ((rt_int)45LL)))) && r_IS_DIGIT(r_AT_SRC(rt_add(l_J_133, ((rt_int)2LL))))))))))
{
l_KIND_144 = g_K_REAL;
l_J_133 = rt_add(l_J_133, ((rt_int)2LL));
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_133)))) goto L_end150;
{
l_J_133 = rt_add(l_J_133, ((rt_int)1LL));
}
RT_B_TICK();
} L_end150: ;
}
{
R9 l_T_151; memset(&l_T_151, 0, sizeof l_T_151);
S_R9(&l_T_151, r_SOURCE_TEXT(l_I_130, l_J_133), 0);
if (((r_AT_SRC(l_J_133) == ((rt_int)92LL)) && (r_AT_SRC(rt_add(l_J_133, ((rt_int)1LL))) == ((rt_int)83LL))))
{
l_KIND_144 = g_K_FIX;
l_J_133 = rt_add(l_J_133, ((rt_int)2LL));
if ((r_AT_SRC(l_J_133) == ((rt_int)45LL)))
{
l_NEG_146 = 1;
l_J_133 = rt_add(l_J_133, ((rt_int)1LL));
}
else if ((r_AT_SRC(l_J_133) == ((rt_int)43LL)))
{
l_J_133 = rt_add(l_J_133, ((rt_int)1LL));
}
for (;;) {
if ((!r_IS_DIGIT(r_AT_SRC(l_J_133)))) goto L_end152;
{
if ((l_SCALE_145 <= ((rt_int)100000LL)))
{
l_SCALE_145 = rt_add(rt_mul(l_SCALE_145, ((rt_int)10LL)), (rt_sub(r_AT_SRC(l_J_133), ((rt_int)48LL))));
}
l_J_133 = rt_add(l_J_133, ((rt_int)1LL));
}
RT_B_TICK();
} L_end152: ;
if (l_NEG_146)
{
l_SCALE_145 = rt_neg(l_SCALE_145);
}
l_V_134 = l_SCALE_145;
}
if (((l_KIND_144 == g_K_NUM) && l_BIG_147))
{
r_FAIL(l_LINE_131, rt_str("an integer literal exceeds the largest INTEGER (3.2.2)", 54));
}
r_ADD_TOKEN(l_KIND_144, l_LINE_131, l_V_134, l_T_151);
}
}
l_I_130 = l_J_133;
}
else
{
l_J_133 = rt_add(l_I_130, r_SYMBOL_LENGTH(l_I_130));
r_ADD_TOKEN(g_K_SYM, l_LINE_131, ((rt_int)0LL), r_SOURCE_TEXT(l_I_130, l_J_133));
l_I_130 = l_J_133;
}
}
RT_B_TICK();
} L_end135: ;
r_ADD_TOKEN(g_K_EOF, l_LINE_131, ((rt_int)0LL), r_MK(rt_str("", 0)));
((*(R7 *)rt_nil_check(g_W))).f_LEXED = l_I_130;
((*(R7 *)rt_nil_check(g_W))).f_LEXLINE = l_LINE_131;
}
static void r_OPTIONS(void) { RT_B_TICK(); 
rt_int l_I_153; memset(&l_I_153, 0, sizeof l_I_153);
l_I_153 = ((rt_int)1LL);
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, r_MK(rt_str("lib", 3)), 0);
((*(R7 *)rt_nil_check(g_W))).f_WORD = ((rt_int)64LL);
for (;;) {
if ((l_I_153 >= rt_argc())) goto L_end154;
{
{
R9 l_A_155; memset(&l_A_155, 0, sizeof l_A_155);
S_R9(&l_A_155, r_MK(rt_arg(l_I_153)), 0);
if ((r_TEQS(l_A_155, rt_str("-L", 2)) && (rt_add(l_I_153, ((rt_int)1LL)) < rt_argc())))
{
l_I_153 = rt_add(l_I_153, ((rt_int)1LL));
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, r_MK(rt_arg(l_I_153)), 0);
}
else if (r_TEQS(l_A_155, rt_str("-suppress", 9)))
{
((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS = 1;
}
else if (r_TEQS(l_A_155, rt_str("-pdp11", 6)))
{
((*(R7 *)rt_nil_check(g_W))).f_WORD = ((rt_int)16LL);
}
else if (r_TEQS(l_A_155, rt_str("-c", 2)))
{
((*(R7 *)rt_nil_check(g_W))).f_SEPC = 1;
}
else
{
r_FAIL(((rt_int)0LL), rt_str("bluec [-L library-directory] [-c] [-suppress] [-pdp11] < program.blu > program.c", 80));
}
}
l_I_153 = rt_add(l_I_153, ((rt_int)1LL));
}
RT_B_TICK();
} L_end154: ;
}
static void r_LOAD_LIBRARY(R9 p_NAME) { RT_B_TICK(); 
R9 l_FILE_156; memset(&l_FILE_156, 0, sizeof l_FILE_156);
S_R9(&l_FILE_156, r_LIB_FILE(((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, p_NAME, rt_str(".bif", 4)), 0);
if ((!r_FILE_EXISTS_T(l_FILE_156)))
{
S_R9(&l_FILE_156, r_LIB_FILE(((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, p_NAME, rt_str(".blu", 4)), 0);
}
else
{
{
R17 * l_N_157; memset(&l_N_157, 0, sizeof l_N_157);
l_N_157 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_157))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_157))).f_IV = r_FILE_PRINT_T(l_FILE_156);
((*(R17 *)rt_nil_check(l_N_157))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXTS;
((*(R7 *)rt_nil_check(g_W))).f_EXTS = l_N_157;
}
}
if (((!r_FILE_EXISTS_T(l_FILE_156)) && (!r_TEQS(((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, rt_str("lib", 3)))))
{
S_R9(&l_FILE_156, r_LIB_FILE(r_MK(rt_str("lib", 3)), p_NAME, rt_str(".blu", 4)), 0);
}
if ((!r_FILE_EXISTS_T(l_FILE_156)))
{
r_FAILT(((rt_int)0LL), rt_str("USES names a segment that is neither in the program nor in the library: ", 72), p_NAME);
}
r_LOAD_TEXT_T(p_NAME, l_FILE_156);
}
static rt_int r_FILE_EXISTS_T(R9 p_F) { RT_B_TICK(); 
{ rt_int rv158 = rt_b_file_exists(r_STR(p_F, (p_F).f_LEN));
return rv158; }
rt_raise(RT_X_INIT);
}
static rt_int r_FILE_PRINT_T(R9 p_F) { RT_B_TICK(); 
{ rt_int rv159 = r_FILE_PRINT(r_STR(p_F, (p_F).f_LEN));
return rv159; }
rt_raise(RT_X_INIT);
}
static void r_LOAD_TEXT_T(R9 p_NAME, R9 p_F) { RT_B_TICK(); 
r_LOAD_TEXT(p_NAME, r_STR(p_F, (p_F).f_LEN));
}
static void r_WRITE_FILE_T(R9 p_F, R9 p_T) { RT_B_TICK(); 
rt_write_file(r_STR(p_F, (p_F).f_LEN), r_STR(p_T, (p_T).f_LEN));
}
static R9 r_LIB_FILE(R9 p_DIR, R9 p_NAME, rstr p_EXT) { RT_B_TICK(); 
{ R9 rv160 = r_CAT(r_CATS(p_DIR, rt_str("/", 1)), r_CATS(p_NAME, p_EXT));
return rv160; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEXT_PRINT(rstr p_T) { RT_B_TICK(); 
rt_int l_H_161; memset(&l_H_161, 0, sizeof l_H_161);
l_H_161 = ((rt_int)7LL);
{ rt_int it163_lo = ((rt_int)0LL), it163_hi = rt_sub((rt_int)(p_T).len, ((rt_int)1LL));
for (rt_int it163 = it163_lo; it163 <= it163_hi; it163++) {
{
l_H_161 = rt_rem((rt_add(rt_mul(l_H_161, ((rt_int)131LL)), r_CODE_OF(rt_b_slice(p_T, it163, it163)))), ((rt_int)1099511627776LL));
}
RT_B_TICK();
if (it163 == it163_hi) break;
} } L_end162: ;
{ rt_int rv164 = l_H_161;
return rv164; }
rt_raise(RT_X_INIT);
}
static rt_int r_FILE_PRINT(rstr p_FNAME) { RT_B_TICK(); 
{ rt_int rv165 = r_TEXT_PRINT(rt_read_file(p_FNAME));
return rv165; }
rt_raise(RT_X_INIT);
}
static R9 r_INPUT_TEXT(void) { RT_B_TICK(); 
{ R9 rv166 = r_SOURCE_TEXT(((rt_int)0LL), ((*(R7 *)rt_nil_check(g_W))).f_STDINLEN);
return rv166; }
rt_raise(RT_X_INIT);
}
static void r_LOAD_TEXT(R9 p_NAME, rstr p_FNAME) { RT_B_TICK(); 
if ((!r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_EXTS, p_NAME)))
{
{
R17 * l_N_167; memset(&l_N_167, 0, sizeof l_N_167);
l_N_167 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_167))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_167))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_LIBSEGS;
((*(R7 *)rt_nil_check(g_W))).f_LIBSEGS = l_N_167;
}
}
{
rstr l_T_168; memset(&l_T_168, 0, sizeof l_T_168);
l_T_168 = rt_b_str_new((rt_int)(rt_read_file(p_FNAME)).len, 0);
rt_b_assign(&l_T_168, rt_read_file(p_FNAME));
if ((rt_add(rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (rt_int)(l_T_168).len), ((rt_int)1LL)) >= g_MAX_SOURCE))
{
r_FAIL(((rt_int)0LL), rt_str("the source is too long", 22));
}
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = ((rt_int)10LL);
((*(R7 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
{ rt_int it170_lo = ((rt_int)0LL), it170_hi = rt_sub((rt_int)(l_T_168).len, ((rt_int)1LL));
for (rt_int it170 = it170_lo; it170 <= it170_hi; it170++) {
{
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = r_CODE_OF(rt_b_slice(l_T_168, it170, it170));
((*(R7 *)rt_nil_check(g_W))).f_NSRC = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSRC, ((rt_int)1LL));
}
RT_B_TICK();
if (it170 == it170_hi) break;
} } L_end169: ;
(((*(R7 *)rt_nil_check(g_W))).f_SRC).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_NSRC, (((*(R7 *)rt_nil_check(g_W))).f_SRC).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_SRC).hi[0])] = ((rt_int)0LL);
}
}
static R10 r_CUR(void) { RT_B_TICK(); 
{ R10 rv171 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv171; }
rt_raise(RT_X_INIT);
}
static R10 r_AHEAD(rt_int p_K) { RT_B_TICK(); 
if ((rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, p_K) >= ((*(R7 *)rt_nil_check(g_W))).f_NTOKS))
{
{ R10 rv172 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv172; }
}
{ R10 rv173 = (((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, p_K), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])];
return rv173; }
rt_raise(RT_X_INIT);
}
static rt_int r_LINE_NOW(void) { RT_B_TICK(); 
{ rt_int rv174 = ((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_LINE;
return rv174; }
rt_raise(RT_X_INIT);
}
static rt_int r_TOK_IS(R10 p_T, rstr p_S) { RT_B_TICK(); 
if (((((p_T).f_KIND == g_K_SYM) || ((p_T).f_KIND == g_K_RES)) || ((p_T).f_KIND == g_K_ID)))
{
{ rt_int rv175 = r_TEQS((p_T).f_TX, p_S);
return rv175; }
}
{ rt_int rv176 = 0;
return rv176; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS(rstr p_S) { RT_B_TICK(); 
{ rt_int rv177 = r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], p_S);
return rv177; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TARGET_DECL(void) { RT_B_TICK(); 
if (((!r_IS(rt_str("TARGET", 6))) || (((*(R7 *)rt_nil_check(g_W))).f_POS >= rt_sub(((*(R7 *)rt_nil_check(g_W))).f_NTOKS, ((rt_int)1LL)))))
{
{ rt_int rv178 = 0;
return rv178; }
}
{ rt_int rv179 = ((r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("PROCEDURE", 9)) || r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("FUNCTION", 8))) || r_TOK_IS((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(rt_add(((*(R7 *)rt_nil_check(g_W))).f_POS, ((rt_int)1LL)), (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])], rt_str("INLINE", 6)));
return rv179; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_KIND(rt_int p_K) { RT_B_TICK(); 
{ rt_int rv180 = (((((*(R7 *)rt_nil_check(g_W))).f_TOKS).p[rt_b_ix1(((*(R7 *)rt_nil_check(g_W))).f_POS, (((*(R7 *)rt_nil_check(g_W))).f_TOKS).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TOKS).hi[0])]).f_KIND == p_K);
return rv180; }
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
{ rt_int rv181 = 1;
return rv181; }
}
{ rt_int rv182 = 0;
return rv182; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT(rstr p_S) { RT_B_TICK(); 
if ((!r_ACCEPT(p_S)))
{
{
R9 l_T_183; memset(&l_T_183, 0, sizeof l_T_183);
S_R9(&l_T_183, (r_CUR()).f_TX, 0);
r_FAIL(r_LINE_NOW(), rt_b_cat(rt_b_cat(p_S, rt_str(" expected, not ", 15)), r_STR(l_T_183, (l_T_183).f_LEN)));
}
}
}
static R9 r_IDENT(void) { RT_B_TICK(); 
R10 l_T_184; memset(&l_T_184, 0, sizeof l_T_184);
S_R10(&l_T_184, r_CUR(), 0);
if (((!((l_T_184).f_KIND == g_K_ID)) && (!r_IDENT_TOKEN(l_T_184))))
{
r_FAILT((l_T_184).f_LINE, rt_str("an identifier expected, not ", 28), (l_T_184).f_TX);
}
r_SKIP();
{ R9 rv185 = (l_T_184).f_TX;
return rv185; }
rt_raise(RT_X_INIT);
}
static rt_int r_IDENT_TOKEN(R10 p_T) { RT_B_TICK(); 
if ((((((p_T).f_KIND == g_K_ENUM) || ((p_T).f_KIND == g_K_GEN))) && (((p_T).f_TX).f_LEN >= ((rt_int)2LL))))
{
{
rstr l_S_186; memset(&l_S_186, 0, sizeof l_S_186);
l_S_186 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_S_186, r_STR((p_T).f_TX, ((rt_int)2LL)));
{ rt_int rv187 = (((!rt_b_eq(rt_b_slice(l_S_186, ((rt_int)1LL), ((rt_int)1LL)), rt_str("'", 1))) && (!rt_b_eq(rt_b_slice(l_S_186, ((rt_int)1LL), ((rt_int)1LL)), rt_str("[", 1)))) && (!rt_b_eq(rt_b_slice(l_S_186, ((rt_int)1LL), ((rt_int)1LL)), rt_str("]", 1))));
return rv187; }
}
}
{ rt_int rv188 = 0;
return rv188; }
rt_raise(RT_X_INIT);
}
static void r_EXPECT_NAME(R9 p_NAME) { RT_B_TICK(); 
if ((!r_TEQ(r_IDENT(), p_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), p_NAME);
}
}
static R17 * r_NEW_NODE(rt_int p_KIND, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_N_189; memset(&l_N_189, 0, sizeof l_N_189);
l_N_189 = ({ R17 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R17(&(*(R17 *)rt_nil_check(l_N_189)), ({ R17 rc190; memset(&rc190, 0, sizeof rc190);  rc190.f_KIND = p_KIND; rc190.f_LINE = p_LINE; rc190.f_IV = ((rt_int)0LL); S_R9(&rc190.f_NAME, ({ R9 rc191; memset(&rc191, 0, sizeof rc191);  rc191.f_AT = ((rt_int)0LL); rc191.f_LEN = ((rt_int)0LL); rc191.f_H = ((rt_int)0LL); rc191; }), 0); rc190.f_A = NULL; rc190.f_B = NULL; rc190.f_C = NULL; rc190.f_D = NULL; rc190.f_E = NULL; rc190.f_NEXT = NULL; rc190.f_FL = ((rt_int)0LL); rc190; }), 0);
{ R17 * rv192 = l_N_189;
return rv192; }
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
rt_int l_K_193; memset(&l_K_193, 0, sizeof l_K_193);
l_K_193 = ((rt_int)0LL);
R17 * l_P_194; memset(&l_P_194, 0, sizeof l_P_194);
l_P_194 = p_N;
for (;;) {
if ((l_P_194 == NULL)) goto L_end195;
{
l_K_193 = rt_add(l_K_193, ((rt_int)1LL));
l_P_194 = ((*(R17 *)rt_nil_check(l_P_194))).f_NEXT;
}
RT_B_TICK();
} L_end195: ;
{ rt_int rv196 = l_K_193;
return rv196; }
rt_raise(RT_X_INIT);
}
static R17 * r_IDENT_NODE(void) { RT_B_TICK(); 
R17 * l_N_197; memset(&l_N_197, 0, sizeof l_N_197);
l_N_197 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_N_197))).f_NAME, r_IDENT(), 0);
{ R17 * rv198 = l_N_197;
return rv198; }
rt_raise(RT_X_INIT);
}
static R17 * r_IDENT_LIST(void) { RT_B_TICK(); 
R17 * l_HEAD_199; memset(&l_HEAD_199, 0, sizeof l_HEAD_199);
l_HEAD_199 = NULL;
R17 * l_TAIL_200; memset(&l_TAIL_200, 0, sizeof l_TAIL_200);
l_TAIL_200 = NULL;
for (;;) {
{
r_ADD_LIST(r_ROUTINE_NAME_NODE(), &l_HEAD_199, &l_TAIL_200);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end201;
} L_end201: ;
{ R17 * rv202 = l_HEAD_199;
return rv202; }
rt_raise(RT_X_INIT);
}
static R17 * r_ROUTINE_NAME_NODE(void) { RT_B_TICK(); 
R17 * l_N_203; memset(&l_N_203, 0, sizeof l_N_203);
l_N_203 = r_IDENT_NODE();
if ((r_IS(rt_str("$", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_SKIP();
S_R9(&((*(R17 *)rt_nil_check(l_N_203))).f_NAME, r_JOINN(((*(R17 *)rt_nil_check(l_N_203))).f_NAME, rt_str("$", 1), (r_CUR()).f_TX), 0);
r_SKIP();
}
{ R17 * rv204 = l_N_203;
return rv204; }
rt_raise(RT_X_INIT);
}
static R17 * r_PAREN_IDENTS(void) { RT_B_TICK(); 
R17 * l_L_205; memset(&l_L_205, 0, sizeof l_L_205);
l_L_205 = NULL;
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str(")", 1))))
{
l_L_205 = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
{ R17 * rv206 = l_L_205;
return rv206; }
rt_raise(RT_X_INIT);
}
static void r_SKIP_PARENS(void) { RT_B_TICK(); 
rt_int l_DEPTH_207; memset(&l_DEPTH_207, 0, sizeof l_DEPTH_207);
l_DEPTH_207 = ((rt_int)0LL);
for (;;) {
{
if (r_IS(rt_str("(", 1)))
{
l_DEPTH_207 = rt_add(l_DEPTH_207, ((rt_int)1LL));
}
else if (r_IS(rt_str(")", 1)))
{
l_DEPTH_207 = rt_sub(l_DEPTH_207, ((rt_int)1LL));
}
r_SKIP();
}
RT_B_TICK();
if ((l_DEPTH_207 == ((rt_int)0LL))) goto L_end208;
} L_end208: ;
}
static R17 * r_PARSE_COMPILATION(void) { RT_B_TICK(); 
R17 * l_HEAD_209; memset(&l_HEAD_209, 0, sizeof l_HEAD_209);
l_HEAD_209 = NULL;
R17 * l_TAIL_210; memset(&l_TAIL_210, 0, sizeof l_TAIL_210);
l_TAIL_210 = NULL;
for (;;) {
if (r_IS_KIND(g_K_EOF)) goto L_end211;
{
r_ADD_LIST(r_PARSE_SEGMENT(), &l_HEAD_209, &l_TAIL_210);
}
RT_B_TICK();
} L_end211: ;
{ R17 * rv212 = l_HEAD_209;
return rv212; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ITEMS(void) { RT_B_TICK(); 
R17 * l_N_213; memset(&l_N_213, 0, sizeof l_N_213);
l_N_213 = r_NEW_NODE(g_N_ITEMS, r_LINE_NOW());
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end214;
{
if (r_ACCEPT(rt_str("DATA", 4)))
{
r_EXPECT(rt_str(":", 1));
r_EXPECT(rt_str("(", 1));
if ((!r_IS(rt_str("#", 1))))
{
((*(R17 *)rt_nil_check(l_N_213))).f_A = r_IDENT_LIST();
}
if (r_ACCEPT(rt_str("#", 1)))
{
((*(R17 *)rt_nil_check(l_N_213))).f_B = r_IDENT_LIST();
}
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("ROUTINES", 8)))
{
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_213))).f_C = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("TYPES", 5)))
{
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_213))).f_D = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("MODULES", 7)))
{
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_213))).f_E = r_PAREN_IDENTS();
}
else
{
{
R9 l_T_215; memset(&l_T_215, 0, sizeof l_T_215);
S_R9(&l_T_215, (r_CUR()).f_TX, 0);
r_FAILT(r_LINE_NOW(), rt_str("DATA, ROUTINES, TYPES or MODULES expected, not ", 47), l_T_215);
}
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end214: ;
r_EXPECT(rt_str(")", 1));
{
R17 * l_L_216; memset(&l_L_216, 0, sizeof l_L_216);
l_L_216 = ((*(R17 *)rt_nil_check(l_N_213))).f_A;
rt_int l_PASS_217; memset(&l_PASS_217, 0, sizeof l_PASS_217);
l_PASS_217 = ((rt_int)0LL);
for (;;) {
if ((l_PASS_217 == ((rt_int)5LL))) goto L_end218;
{
if ((l_PASS_217 == ((rt_int)1LL)))
{
l_L_216 = ((*(R17 *)rt_nil_check(l_N_213))).f_B;
}
else if ((l_PASS_217 == ((rt_int)2LL)))
{
l_L_216 = ((*(R17 *)rt_nil_check(l_N_213))).f_C;
}
else if ((l_PASS_217 == ((rt_int)3LL)))
{
l_L_216 = ((*(R17 *)rt_nil_check(l_N_213))).f_D;
}
else if ((l_PASS_217 == ((rt_int)4LL)))
{
l_L_216 = ((*(R17 *)rt_nil_check(l_N_213))).f_E;
}
for (;;) {
if ((l_L_216 == NULL)) goto L_end219;
{
if ((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_L_216))).f_NEXT, ((*(R17 *)rt_nil_check(l_L_216))).f_NAME) || (((l_PASS_217 == ((rt_int)0LL)) && r_IN_IDENTS(((*(R17 *)rt_nil_check(l_N_213))).f_B, ((*(R17 *)rt_nil_check(l_L_216))).f_NAME)))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_L_216))).f_LINE, rt_str("a name appears only once in an imports-clause (4.3.1): ", 55), ((*(R17 *)rt_nil_check(l_L_216))).f_NAME);
}
l_L_216 = ((*(R17 *)rt_nil_check(l_L_216))).f_NEXT;
}
RT_B_TICK();
} L_end219: ;
l_PASS_217 = rt_add(l_PASS_217, ((rt_int)1LL));
}
RT_B_TICK();
} L_end218: ;
}
{ R17 * rv220 = l_N_213;
return rv220; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_SEGMENT(void) { RT_B_TICK(); 
R17 * l_S_221; memset(&l_S_221, 0, sizeof l_S_221);
l_S_221 = r_NEW_NODE(g_N_SEGMENT, r_LINE_NOW());
R17 * l_HEAD_222; memset(&l_HEAD_222, 0, sizeof l_HEAD_222);
l_HEAD_222 = NULL;
R17 * l_TAIL_223; memset(&l_TAIL_223, 0, sizeof l_TAIL_223);
l_TAIL_223 = NULL;
if (r_ACCEPT(rt_str("MAIN", 4)))
{
((*(R17 *)rt_nil_check(l_S_221))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("SEGMENT", 7));
S_R9(&((*(R17 *)rt_nil_check(l_S_221))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("USES", 4)))
{
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_U_225; memset(&l_U_225, 0, sizeof l_U_225);
l_U_225 = r_NEW_NODE(g_N_USE, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_U_225))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_U_225))).f_A = r_PARSE_ITEMS();
}
r_ADD_LIST(l_U_225, &l_HEAD_222, &l_TAIL_223);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end224;
} L_end224: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_S_221))).f_A = l_HEAD_222;
}
if (r_ACCEPT(rt_str("DEFINES", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R17 *)rt_nil_check(l_S_221))).f_FL = ((rt_int)1LL);
}
else
{
((*(R17 *)rt_nil_check(l_S_221))).f_C = r_PAREN_IDENTS();
}
}
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_S_221))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SEGMENT", 7));
r_EXPECT_NAME(((*(R17 *)rt_nil_check(l_S_221))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R17 * rv226 = l_S_221;
return rv226; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CLOSED_BODY(void) { RT_B_TICK(); 
R17 * l_B_227; memset(&l_B_227, 0, sizeof l_B_227);
l_B_227 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
R17 * l_HEAD_228; memset(&l_HEAD_228, 0, sizeof l_HEAD_228);
l_HEAD_228 = NULL;
R17 * l_TAIL_229; memset(&l_TAIL_229, 0, sizeof l_TAIL_229);
l_TAIL_229 = NULL;
((*(R17 *)rt_nil_check(l_B_227))).f_A = r_PARSE_DECLARATIONS();
((*(R17 *)rt_nil_check(l_B_227))).f_B = r_PARSE_STATEMENTS();
for (;;) {
{
if ((((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()))
{
r_ADD_LIST(r_PARSE_ROUTINE(), &l_HEAD_228, &l_TAIL_229);
}
else if (r_IS(rt_str("MODULE", 6)))
{
r_ADD_LIST(r_PARSE_MODULE(), &l_HEAD_228, &l_TAIL_229);
}
else
{
goto L_end230;
}
}
RT_B_TICK();
} L_end230: ;
((*(R17 *)rt_nil_check(l_B_227))).f_C = l_HEAD_228;
{ R17 * rv231 = l_B_227;
return rv231; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_BODY(void) { RT_B_TICK(); 
R17 * l_B_232; memset(&l_B_232, 0, sizeof l_B_232);
l_B_232 = r_NEW_NODE(g_N_BODY, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_B_232))).f_A = r_PARSE_DECLARATIONS();
((*(R17 *)rt_nil_check(l_B_232))).f_B = r_PARSE_STATEMENTS();
{ R17 * rv233 = l_B_232;
return rv233; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_MODULE(void) { RT_B_TICK(); 
R17 * l_M_234; memset(&l_M_234, 0, sizeof l_M_234);
l_M_234 = r_NEW_NODE(g_N_MODULE, r_LINE_NOW());
R17 * l_HEAD_235; memset(&l_HEAD_235, 0, sizeof l_HEAD_235);
l_HEAD_235 = NULL;
R17 * l_TAIL_236; memset(&l_TAIL_236, 0, sizeof l_TAIL_236);
l_TAIL_236 = NULL;
r_EXPECT(rt_str("MODULE", 6));
S_R9(&((*(R17 *)rt_nil_check(l_M_234))).f_NAME, r_IDENT(), 0);
for (;;) {
{
if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R17 *)rt_nil_check(l_M_234))).f_A = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("EXPORTS", 7)))
{
if (r_ACCEPT(rt_str("ALL", 3)))
{
((*(R17 *)rt_nil_check(l_M_234))).f_FL = ((rt_int)1LL);
}
else
{
{
rt_int l_PAREN_238; memset(&l_PAREN_238, 0, sizeof l_PAREN_238);
l_PAREN_238 = r_ACCEPT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_X_240; memset(&l_X_240, 0, sizeof l_X_240);
l_X_240 = r_NEW_NODE(g_N_EXPORT, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_X_240))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("WITH", 4)))
{
((*(R17 *)rt_nil_check(l_X_240))).f_A = r_PAREN_IDENTS();
}
r_ADD_LIST(l_X_240, &l_HEAD_235, &l_TAIL_236);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end239;
} L_end239: ;
if (l_PAREN_238)
{
r_EXPECT(rt_str(")", 1));
}
}
((*(R17 *)rt_nil_check(l_M_234))).f_B = l_HEAD_235;
}
}
else
{
goto L_end237;
}
}
RT_B_TICK();
} L_end237: ;
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_M_234))).f_C = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("MODULE", 6));
r_EXPECT_NAME(((*(R17 *)rt_nil_check(l_M_234))).f_NAME);
r_EXPECT(rt_str(";", 1));
{ R17 * rv241 = l_M_234;
return rv241; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_DECLARATIONS(void) { RT_B_TICK(); 
R17 * l_HEAD_242; memset(&l_HEAD_242, 0, sizeof l_HEAD_242);
l_HEAD_242 = NULL;
R17 * l_TAIL_243; memset(&l_TAIL_243, 0, sizeof l_TAIL_243);
l_TAIL_243 = NULL;
for (;;) {
{
if ((r_IS(rt_str("CONST", 5)) || r_IS(rt_str("VAR", 3))))
{
r_ADD_LIST(r_PARSE_OBJECT_DECL(), &l_HEAD_242, &l_TAIL_243);
}
else if (r_IS(rt_str("TYPE", 4)))
{
r_ADD_LIST(r_PARSE_TYPE_DECL(), &l_HEAD_242, &l_TAIL_243);
}
else if ((r_IS(rt_str("REPTYPE", 7)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
r_ADD_LIST(r_PARSE_REPTYPE_DECL(), &l_HEAD_242, &l_TAIL_243);
}
else
{
goto L_end244;
}
}
RT_B_TICK();
} L_end244: ;
{ R17 * rv245 = l_HEAD_242;
return rv245; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_OBJECT_DECL(void) { RT_B_TICK(); 
R17 * l_D_246; memset(&l_D_246, 0, sizeof l_D_246);
l_D_246 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
if (r_ACCEPT(rt_str("CONST", 5)))
{
((*(R17 *)rt_nil_check(l_D_246))).f_KIND = g_N_CONST;
}
else
{
r_EXPECT(rt_str("VAR", 3));
}
((*(R17 *)rt_nil_check(l_D_246))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_D_246))).f_B = r_PARSE_TYPE_SPEC();
if (r_ACCEPT(rt_str(":=", 2)))
{
((*(R17 *)rt_nil_check(l_D_246))).f_C = r_PARSE_EXPR();
}
else if ((((*(R17 *)rt_nil_check(l_D_246))).f_KIND == g_N_CONST))
{
r_FAIL(((*(R17 *)rt_nil_check(l_D_246))).f_LINE, rt_str("a constant needs a value", 24));
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv247 = l_D_246;
return rv247; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_FORMALS(void) { RT_B_TICK(); 
R17 * l_HEAD_248; memset(&l_HEAD_248, 0, sizeof l_HEAD_248);
l_HEAD_248 = NULL;
R17 * l_TAIL_249; memset(&l_TAIL_249, 0, sizeof l_TAIL_249);
l_TAIL_249 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_F_251; memset(&l_F_251, 0, sizeof l_F_251);
l_F_251 = r_NEW_NODE(g_N_FORMAL, r_LINE_NOW());
if (r_ACCEPT(rt_str("TAG", 3)))
{
((*(R17 *)rt_nil_check(l_F_251))).f_IV = ((rt_int)1LL);
}
((*(R17 *)rt_nil_check(l_F_251))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
if ((!r_ACCEPT(rt_str("TYPE", 4))))
{
((*(R17 *)rt_nil_check(l_F_251))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_F_251, &l_HEAD_248, &l_TAIL_249);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end250;
} L_end250: ;
r_EXPECT(rt_str(")", 1));
{ R17 * rv252 = l_HEAD_248;
return rv252; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TYPE_DECL(void) { RT_B_TICK(); 
R17 * l_D_253; memset(&l_D_253, 0, sizeof l_D_253);
l_D_253 = r_NEW_NODE(g_N_TYPE, r_LINE_NOW());
r_EXPECT(rt_str("TYPE", 4));
S_R9(&((*(R17 *)rt_nil_check(l_D_253))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_D_253))).f_A = r_PARSE_FORMALS();
}
r_EXPECT(rt_str("=", 1));
((*(R17 *)rt_nil_check(l_D_253))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(";", 1));
{ R17 * rv254 = l_D_253;
return rv254; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_REPTYPE_DECL(void) { RT_B_TICK(); 
R17 * l_D_255; memset(&l_D_255, 0, sizeof l_D_255);
l_D_255 = r_NEW_NODE(g_N_REPTYPE, r_LINE_NOW());
r_EXPECT(rt_str("REPTYPE", 7));
S_R9(&((*(R17 *)rt_nil_check(l_D_255))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_D_255))).f_A = r_PARSE_FORMALS();
}
if (r_ACCEPT(rt_str("OF", 2)))
{
((*(R17 *)rt_nil_check(l_D_255))).f_C = r_IDENT_NODE();
}
r_EXPECT(rt_str("=", 1));
((*(R17 *)rt_nil_check(l_D_255))).f_B = r_PARSE_REP();
r_EXPECT(rt_str(";", 1));
{ R17 * rv256 = l_D_255;
return rv256; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_REP(void) { RT_B_TICK(); 
R17 * l_R_257; memset(&l_R_257, 0, sizeof l_R_257);
l_R_257 = r_NEW_NODE(g_N_REP, r_LINE_NOW());
R17 * l_HEAD_258; memset(&l_HEAD_258, 0, sizeof l_HEAD_258);
l_HEAD_258 = NULL;
R17 * l_TAIL_259; memset(&l_TAIL_259, 0, sizeof l_TAIL_259);
l_TAIL_259 = NULL;
if (r_IS_KIND(g_K_GEN))
{
((*(R17 *)rt_nil_check(l_R_257))).f_KIND = g_TS_GEN;
S_R9(&((*(R17 *)rt_nil_check(l_R_257))).f_NAME, r_GEN_NAME(), 0);
{ R17 * rv260 = l_R_257;
return rv260; }
}
S_R9(&((*(R17 *)rt_nil_check(l_R_257))).f_NAME, r_IDENT(), 0);
if ((!r_IS(rt_str("(", 1))))
{
{ R17 * rv261 = l_R_257;
return rv261; }
}
if (r_TEQS(((*(R17 *)rt_nil_check(l_R_257))).f_NAME, rt_str("RECORD_REP", 10)))
{
r_PARSE_RECORD_REP(l_R_257);
{ R17 * rv262 = l_R_257;
return rv262; }
}
r_SKIP();
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end263;
{
if (r_ACCEPT(rt_str("VALUES", 6)))
{
{
R17 * l_VH_264; memset(&l_VH_264, 0, sizeof l_VH_264);
l_VH_264 = NULL;
R17 * l_VT_265; memset(&l_VT_265, 0, sizeof l_VT_265);
l_VT_265 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_V_267; memset(&l_V_267, 0, sizeof l_V_267);
l_V_267 = r_NEW_NODE(g_N_VALREP, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_V_267))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_EXPECT(rt_str("AS", 2));
((*(R17 *)rt_nil_check(l_V_267))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_V_267, &l_VH_264, &l_VT_265);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end266;
} L_end266: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_R_257))).f_B = l_VH_264;
}
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_258, &l_TAIL_259);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end263: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_R_257))).f_A = l_HEAD_258;
{ R17 * rv268 = l_R_257;
return rv268; }
rt_raise(RT_X_INIT);
}
static void r_PARSE_RECORD_REP(R17 * p_R) { RT_B_TICK(); 
R17 * l_HEAD_269; memset(&l_HEAD_269, 0, sizeof l_HEAD_269);
l_HEAD_269 = NULL;
R17 * l_TAIL_270; memset(&l_TAIL_270, 0, sizeof l_TAIL_270);
l_TAIL_270 = NULL;
R17 * l_VH_271; memset(&l_VH_271, 0, sizeof l_VH_271);
l_VH_271 = NULL;
R17 * l_VT_272; memset(&l_VT_272, 0, sizeof l_VT_272);
l_VT_272 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end273;
{
if (r_IS(rt_str("SELECT", 6)))
{
r_ADD_LIST(r_PARSE_VARIANT_PACKING(), &l_VH_271, &l_VT_272);
}
else
{
r_ADD_LIST(r_PARSE_PACKING_SPEC(), &l_HEAD_269, &l_TAIL_270);
}
if ((r_ACCEPT(rt_str(",", 1)) || r_ACCEPT(rt_str(";", 1))))
{
}
}
RT_B_TICK();
} L_end273: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(p_R))).f_A = l_HEAD_269;
((*(R17 *)rt_nil_check(p_R))).f_C = l_VH_271;
}
static R17 * r_PARSE_PACKING_SPEC(void) { RT_B_TICK(); 
R17 * l_P_274; memset(&l_P_274, 0, sizeof l_P_274);
l_P_274 = r_NEW_NODE(g_N_PSPEC, r_LINE_NOW());
R17 * l_HEAD_275; memset(&l_HEAD_275, 0, sizeof l_HEAD_275);
l_HEAD_275 = NULL;
R17 * l_TAIL_276; memset(&l_TAIL_276, 0, sizeof l_TAIL_276);
l_TAIL_276 = NULL;
if ((r_IS_KIND(g_K_ID) && (((r_IS(rt_str("DENSE", 5)) || r_IS(rt_str("PACKED", 6))) || r_IS(rt_str("UNPACKED", 8))))))
{
S_R9(&((*(R17 *)rt_nil_check(l_P_274))).f_NAME, r_IDENT(), 0);
}
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_P_274))).f_IV = ((rt_int)1LL);
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end277;
{
r_ADD_LIST(r_PARSE_ELEMENT_SPEC(), &l_HEAD_275, &l_TAIL_276);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end277: ;
r_EXPECT(rt_str(")", 1));
}
else if (((((*(R17 *)rt_nil_check(l_P_274))).f_NAME).f_LEN == ((rt_int)0LL)))
{
((*(R17 *)rt_nil_check(l_P_274))).f_IV = ((rt_int)1LL);
r_ADD_LIST(r_PARSE_ELEMENT_SPEC(), &l_HEAD_275, &l_TAIL_276);
}
((*(R17 *)rt_nil_check(l_P_274))).f_A = l_HEAD_275;
{ R17 * rv278 = l_P_274;
return rv278; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ELEMENT_SPEC(void) { RT_B_TICK(); 
R17 * l_E_279; memset(&l_E_279, 0, sizeof l_E_279);
l_E_279 = r_NEW_NODE(g_N_ELEM, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_E_279))).f_NAME, r_IDENT(), 0);
if (r_IS(rt_str("(", 1)))
{
if ((r_TEQS(((*(R17 *)rt_nil_check(l_E_279))).f_NAME, rt_str("VARIANTS", 8)) || r_TEQS(((*(R17 *)rt_nil_check(l_E_279))).f_NAME, rt_str("OMIT", 4))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_E_279))).f_NAME, rt_str("VARIANTS", 8)))
{
((*(R17 *)rt_nil_check(l_E_279))).f_FL = ((rt_int)1LL);
}
else
{
((*(R17 *)rt_nil_check(l_E_279))).f_FL = ((rt_int)2LL);
}
r_SKIP();
S_R9(&((*(R17 *)rt_nil_check(l_E_279))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(")", 1));
}
else if (((r_TEQS(((*(R17 *)rt_nil_check(l_E_279))).f_NAME, rt_str("FILLER", 6)) || r_TEQS(((*(R17 *)rt_nil_check(l_E_279))).f_NAME, rt_str("ZEROS", 5))) || r_TEQS(((*(R17 *)rt_nil_check(l_E_279))).f_NAME, rt_str("BLANKS", 6))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_E_279))).f_NAME, rt_str("FILLER", 6)))
{
((*(R17 *)rt_nil_check(l_E_279))).f_FL = ((rt_int)3LL);
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_E_279))).f_NAME, rt_str("ZEROS", 5)))
{
((*(R17 *)rt_nil_check(l_E_279))).f_FL = ((rt_int)4LL);
}
else
{
((*(R17 *)rt_nil_check(l_E_279))).f_FL = ((rt_int)5LL);
}
r_SKIP();
((*(R17 *)rt_nil_check(l_E_279))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
}
{ R17 * rv280 = l_E_279;
return rv280; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_VARIANT_PACKING(void) { RT_B_TICK(); 
R17 * l_V_281; memset(&l_V_281, 0, sizeof l_V_281);
l_V_281 = r_NEW_NODE(g_N_VPACK, r_LINE_NOW());
R17 * l_HEAD_282; memset(&l_HEAD_282, 0, sizeof l_HEAD_282);
l_HEAD_282 = NULL;
R17 * l_TAIL_283; memset(&l_TAIL_283, 0, sizeof l_TAIL_283);
l_TAIL_283 = NULL;
r_EXPECT(rt_str("SELECT", 6));
S_R9(&((*(R17 *)rt_nil_check(l_V_281))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end284;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_V_281))).f_IV = ((rt_int)1LL);
if ((!r_IS(rt_str("END", 3))))
{
((*(R17 *)rt_nil_check(l_V_281))).f_B = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_281))).f_B))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
}
else
{
{
R17 * l_S_285; memset(&l_S_285, 0, sizeof l_S_285);
l_S_285 = r_NEW_NODE(g_N_VPSPEC, r_LINE_NOW());
R17 * l_LH_286; memset(&l_LH_286, 0, sizeof l_LH_286);
l_LH_286 = NULL;
R17 * l_LT_287; memset(&l_LT_287, 0, sizeof l_LT_287);
l_LT_287 = NULL;
R17 * l_PH_288; memset(&l_PH_288, 0, sizeof l_PH_288);
l_PH_288 = NULL;
R17 * l_PT_289; memset(&l_PT_289, 0, sizeof l_PT_289);
l_PT_289 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_286, &l_LT_287);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end290;
} L_end290: ;
r_EXPECT(rt_str("-->", 3));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end291;
{
r_ADD_LIST(r_PARSE_PACKING_SPEC(), &l_PH_288, &l_PT_289);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
RT_B_TICK();
} L_end291: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_S_285))).f_A = l_LH_286;
((*(R17 *)rt_nil_check(l_S_285))).f_B = l_PH_288;
r_ADD_LIST(l_S_285, &l_HEAD_282, &l_TAIL_283);
}
}
}
RT_B_TICK();
} L_end284: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
((*(R17 *)rt_nil_check(l_V_281))).f_A = l_HEAD_282;
{ R17 * rv292 = l_V_281;
return rv292; }
rt_raise(RT_X_INIT);
}
static R9 r_GEN_NAME(void) { RT_B_TICK(); 
R9 l_T_293; memset(&l_T_293, 0, sizeof l_T_293);
S_R9(&l_T_293, (r_CUR()).f_TX, 0);
r_SKIP();
if (((l_T_293).f_LEN == ((rt_int)1LL)))
{
{ R9 rv294 = r_NO_TEXT();
return rv294; }
}
{ R9 rv295 = r_MKN(rt_b_slice(r_STR(l_T_293, (l_T_293).f_LEN), ((rt_int)1LL), rt_sub((l_T_293).f_LEN, ((rt_int)1LL))));
return rv295; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TYPE_ARG(void) { RT_B_TICK(); 
R17 * l_N_296; memset(&l_N_296, 0, sizeof l_N_296);
if (r_IS_KIND(g_K_GEN))
{
{
R9 l_T_297; memset(&l_T_297, 0, sizeof l_T_297);
S_R9(&l_T_297, (r_CUR()).f_TX, 0);
if (((l_T_297).f_LEN == ((rt_int)1LL)))
{
r_SKIP();
{ R17 * rv298 = r_NEW_NODE(g_N_DONTCARE, r_LINE_NOW());
return rv298; }
}
}
l_N_296 = r_NEW_NODE(g_TS_GEN, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_N_296))).f_NAME, r_GEN_NAME(), 0);
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R17 *)rt_nil_check(l_N_296))).f_C = r_PARSE_REP();
}
{ R17 * rv299 = l_N_296;
return rv299; }
}
if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R17 * rv300 = r_NEW_NODE(g_N_ANY, r_LINE_NOW());
return rv300; }
}
if ((r_IS(rt_str("ARRAY", 5)) || r_IS(rt_str("RECORD", 6))))
{
{ R17 * rv301 = r_PARSE_TYPE_SPEC();
return rv301; }
}
if ((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM)))
{
{ R17 * rv302 = r_PARSE_TYPE_SPEC();
return rv302; }
}
l_N_296 = r_PARSE_EXPR();
if ((r_IS(rt_str("REP", 3)) || r_IS(rt_str("[", 1))))
{
{ R17 * rv303 = r_TYPE_SPEC_TAIL(r_EXPR_TO_TS(l_N_296));
return rv303; }
}
{ R17 * rv304 = l_N_296;
return rv304; }
rt_raise(RT_X_INIT);
}
static R17 * r_EXPR_TO_TS(R17 * p_E) { RT_B_TICK(); 
R17 * l_N_305; memset(&l_N_305, 0, sizeof l_N_305);
if ((((((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_NAME) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_ARRAY)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_RECORD)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_ENUM)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN)))
{
{ R17 * rv306 = p_E;
return rv306; }
}
l_N_305 = r_NEW_NODE(g_TS_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME))
{
S_R9(&((*(R17 *)rt_nil_check(l_N_305))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
{ R17 * rv307 = l_N_305;
return rv307; }
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
S_R9(&((*(R17 *)rt_nil_check(l_N_305))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_305))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_A;
{ R17 * rv308 = l_N_305;
return rv308; }
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD))
{
((*(R17 *)rt_nil_check(l_N_305))).f_FL = ((rt_int)3LL);
((*(R17 *)rt_nil_check(l_N_305))).f_E = p_E;
{ R17 * rv309 = l_N_305;
return rv309; }
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_SUBSTR))
{
l_N_305 = r_EXPR_TO_TS(((*(R17 *)rt_nil_check(p_E))).f_A);
if (((!(((*(R17 *)rt_nil_check(l_N_305))).f_KIND == g_TS_NAME)) || (!(((*(R17 *)rt_nil_check(l_N_305))).f_B == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type specification expected", 29));
}
((*(R17 *)rt_nil_check(l_N_305))).f_B = r_NEW_NODE(g_N_RANGE, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_305))).f_B))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_B;
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_305))).f_B))).f_B = ((*(R17 *)rt_nil_check(p_E))).f_C;
{ R17 * rv310 = l_N_305;
return rv310; }
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
{ R17 * rv311 = p_N;
return rv311; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TYPE_SPEC(void) { RT_B_TICK(); 
R17 * l_N_312; memset(&l_N_312, 0, sizeof l_N_312);
R17 * l_HEAD_313; memset(&l_HEAD_313, 0, sizeof l_HEAD_313);
l_HEAD_313 = NULL;
R17 * l_TAIL_314; memset(&l_TAIL_314, 0, sizeof l_TAIL_314);
l_TAIL_314 = NULL;
rt_int l_LINE_315; memset(&l_LINE_315, 0, sizeof l_LINE_315);
l_LINE_315 = r_LINE_NOW();
if (r_ACCEPT(rt_str("ARRAY", 5)))
{
l_N_312 = r_NEW_NODE(g_TS_ARRAY, l_LINE_315);
r_EXPECT(rt_str("[", 1));
for (;;) {
{
{
R17 * l_R_317; memset(&l_R_317, 0, sizeof l_R_317);
l_R_317 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_R_317))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_R_317))).f_B = r_PARSE_EXPR();
r_ADD_LIST(l_R_317, &l_HEAD_313, &l_TAIL_314);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end316;
} L_end316: ;
r_EXPECT(rt_str("]", 1));
((*(R17 *)rt_nil_check(l_N_312))).f_A = l_HEAD_313;
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R17 *)rt_nil_check(l_N_312))).f_D = r_PARSE_REP();
}
r_EXPECT(rt_str("OF", 2));
((*(R17 *)rt_nil_check(l_N_312))).f_C = r_PARSE_TYPE_SPEC();
{ R17 * rv318 = l_N_312;
return rv318; }
}
if (r_ACCEPT(rt_str("RECORD", 6)))
{
l_N_312 = r_NEW_NODE(g_TS_RECORD, l_LINE_315);
((*(R17 *)rt_nil_check(l_N_312))).f_A = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("RECORD", 6));
if (r_ACCEPT(rt_str("REP", 3)))
{
((*(R17 *)rt_nil_check(l_N_312))).f_D = r_PARSE_REP();
}
{ R17 * rv319 = l_N_312;
return rv319; }
}
if (r_IS_KIND(g_K_GEN))
{
{ R17 * rv320 = r_PARSE_TYPE_ARG();
return rv320; }
}
if (r_IS(rt_str("(", 1)))
{
l_N_312 = r_NEW_NODE(g_TS_ENUM, l_LINE_315);
((*(R17 *)rt_nil_check(l_N_312))).f_A = r_PARSE_LITERALS();
{ R17 * rv321 = r_TYPE_SPEC_TAIL(l_N_312);
return rv321; }
}
l_N_312 = r_NEW_NODE(g_TS_NAME, l_LINE_315);
S_R9(&((*(R17 *)rt_nil_check(l_N_312))).f_NAME, r_IDENT(), 0);
if ((r_IS(rt_str(".", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)))
{
{
R17 * l_X_322; memset(&l_X_322, 0, sizeof l_X_322);
l_X_322 = r_NEW_NODE(g_N_NAME, l_LINE_315);
S_R9(&((*(R17 *)rt_nil_check(l_X_322))).f_NAME, ((*(R17 *)rt_nil_check(l_N_312))).f_NAME, 0);
for (;;) {
if ((!((r_IS(rt_str(".", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID))))) goto L_end323;
{
r_SKIP();
{
R17 * l_F_324; memset(&l_F_324, 0, sizeof l_F_324);
l_F_324 = r_NEW_NODE(g_N_FIELD, l_LINE_315);
((*(R17 *)rt_nil_check(l_F_324))).f_A = l_X_322;
S_R9(&((*(R17 *)rt_nil_check(l_F_324))).f_NAME, r_IDENT(), 0);
l_X_322 = l_F_324;
}
}
RT_B_TICK();
} L_end323: ;
((*(R17 *)rt_nil_check(l_N_312))).f_FL = ((rt_int)3LL);
((*(R17 *)rt_nil_check(l_N_312))).f_E = l_X_322;
{ R17 * rv325 = r_TYPE_SPEC_TAIL(l_N_312);
return rv325; }
}
}
if ((r_TEQS(((*(R17 *)rt_nil_check(l_N_312))).f_NAME, rt_str("ENUM", 4)) || r_TEQS(((*(R17 *)rt_nil_check(l_N_312))).f_NAME, rt_str("UNORDERED", 9))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_N_312))).f_NAME, rt_str("UNORDERED", 9)))
{
((*(R17 *)rt_nil_check(l_N_312))).f_IV = ((rt_int)1LL);
}
((*(R17 *)rt_nil_check(l_N_312))).f_KIND = g_TS_ENUM;
((*(R17 *)rt_nil_check(l_N_312))).f_A = r_PARSE_LITERALS();
{ R17 * rv326 = r_TYPE_SPEC_TAIL(l_N_312);
return rv326; }
}
if ((r_IS(rt_str("(", 1)) && (!r_RANGE_AHEAD())))
{
r_SKIP();
for (;;) {
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_N_312))).f_NAME, rt_str("PTR", 3)))
{
r_ADD_LIST(r_PARSE_TYPE_SPEC(), &l_HEAD_313, &l_TAIL_314);
}
else
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_313, &l_TAIL_314);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end327;
} L_end327: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_N_312))).f_A = l_HEAD_313;
}
{ R17 * rv328 = r_TYPE_SPEC_TAIL(l_N_312);
return rv328; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_LITERALS(void) { RT_B_TICK(); 
R17 * l_HEAD_329; memset(&l_HEAD_329, 0, sizeof l_HEAD_329);
l_HEAD_329 = NULL;
R17 * l_TAIL_330; memset(&l_TAIL_330, 0, sizeof l_TAIL_330);
l_TAIL_330 = NULL;
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_L_332; memset(&l_L_332, 0, sizeof l_L_332);
l_L_332 = r_NEW_NODE(g_N_IDENT, r_LINE_NOW());
if ((!((r_IS_KIND(g_K_ENUM) || r_IS_KIND(g_K_ID)))))
{
r_FAIL(r_LINE_NOW(), rt_str("an enumerated literal expected", 30));
}
S_R9(&((*(R17 *)rt_nil_check(l_L_332))).f_NAME, (r_CUR()).f_TX, 0);
r_SKIP();
r_ADD_LIST(l_L_332, &l_HEAD_329, &l_TAIL_330);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end331;
} L_end331: ;
r_EXPECT(rt_str(")", 1));
{ R17 * rv333 = l_HEAD_329;
return rv333; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_FIELDS(void) { RT_B_TICK(); 
R17 * l_HEAD_334; memset(&l_HEAD_334, 0, sizeof l_HEAD_334);
l_HEAD_334 = NULL;
R17 * l_TAIL_335; memset(&l_TAIL_335, 0, sizeof l_TAIL_335);
l_TAIL_335 = NULL;
for (;;) {
{
if (r_IS(rt_str("VAR", 3)))
{
{
R17 * l_F_337; memset(&l_F_337, 0, sizeof l_F_337);
l_F_337 = r_NEW_NODE(g_N_VAR, r_LINE_NOW());
r_SKIP();
((*(R17 *)rt_nil_check(l_F_337))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_F_337))).f_B = r_PARSE_TYPE_SPEC();
if ((!r_ACCEPT(rt_str(";", 1))))
{
r_EXPECT(rt_str(",", 1));
}
r_ADD_LIST(l_F_337, &l_HEAD_334, &l_TAIL_335);
}
}
else if (r_IS(rt_str("SELECT", 6)))
{
{
R17 * l_V_338; memset(&l_V_338, 0, sizeof l_V_338);
l_V_338 = r_NEW_NODE(g_N_VARIANT, r_LINE_NOW());
R17 * l_VH_339; memset(&l_VH_339, 0, sizeof l_VH_339);
l_VH_339 = NULL;
R17 * l_VT_340; memset(&l_VT_340, 0, sizeof l_VT_340);
l_VT_340 = NULL;
r_SKIP();
S_R9(&((*(R17 *)rt_nil_check(l_V_338))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end341;
{
{
R17 * l_S_342; memset(&l_S_342, 0, sizeof l_S_342);
l_S_342 = r_NEW_NODE(g_N_VARSPEC, r_LINE_NOW());
R17 * l_LH_343; memset(&l_LH_343, 0, sizeof l_LH_343);
l_LH_343 = NULL;
R17 * l_LT_344; memset(&l_LT_344, 0, sizeof l_LT_344);
l_LT_344 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_343, &l_LT_344);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end345;
} L_end345: ;
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_S_342))).f_A = l_LH_343;
((*(R17 *)rt_nil_check(l_S_342))).f_B = r_PARSE_FIELDS();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_S_342, &l_VH_339, &l_VT_340);
}
}
RT_B_TICK();
} L_end341: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("SELECT", 6));
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_V_338))).f_A = l_VH_339;
r_ADD_LIST(l_V_338, &l_HEAD_334, &l_TAIL_335);
}
}
else
{
goto L_end336;
}
}
RT_B_TICK();
} L_end336: ;
{ R17 * rv346 = l_HEAD_334;
return rv346; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_RANGE(void) { RT_B_TICK(); 
R17 * l_R_347; memset(&l_R_347, 0, sizeof l_R_347);
l_R_347 = r_NEW_NODE(g_N_RANGE, r_LINE_NOW());
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_R_347))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("[", 1));
}
((*(R17 *)rt_nil_check(l_R_347))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_R_347))).f_B = r_PARSE_EXPR();
if (r_ACCEPT(rt_str(")", 1)))
{
((*(R17 *)rt_nil_check(l_R_347))).f_IV = rt_add(((*(R17 *)rt_nil_check(l_R_347))).f_IV, ((rt_int)2LL));
}
else
{
r_EXPECT(rt_str("]", 1));
}
{ R17 * rv348 = l_R_347;
return rv348; }
rt_raise(RT_X_INIT);
}
static rt_int r_RANGE_AHEAD(void) { RT_B_TICK(); 
rt_int l_DEPTH_349; memset(&l_DEPTH_349, 0, sizeof l_DEPTH_349);
l_DEPTH_349 = ((rt_int)0LL);
rt_int l_K_350; memset(&l_K_350, 0, sizeof l_K_350);
l_K_350 = ((rt_int)0LL);
for (;;) {
{
{
R10 l_T_352; memset(&l_T_352, 0, sizeof l_T_352);
S_R10(&l_T_352, r_AHEAD(l_K_350), 0);
if (((l_T_352).f_KIND == g_K_EOF))
{
{ rt_int rv353 = 0;
return rv353; }
}
if (((l_T_352).f_KIND == g_K_SYM))
{
if ((r_TEQS((l_T_352).f_TX, rt_str("(", 1)) || r_TEQS((l_T_352).f_TX, rt_str("[", 1))))
{
l_DEPTH_349 = rt_add(l_DEPTH_349, ((rt_int)1LL));
}
else if ((r_TEQS((l_T_352).f_TX, rt_str(")", 1)) || r_TEQS((l_T_352).f_TX, rt_str("]", 1))))
{
l_DEPTH_349 = rt_sub(l_DEPTH_349, ((rt_int)1LL));
if ((l_DEPTH_349 == ((rt_int)0LL)))
{
{ rt_int rv354 = 0;
return rv354; }
}
}
else if (((l_DEPTH_349 == ((rt_int)1LL)) && ((r_TEQS((l_T_352).f_TX, rt_str(":", 1)) || r_TEQS((l_T_352).f_TX, rt_str(",", 1))))))
{
{ rt_int rv355 = r_TEQS((l_T_352).f_TX, rt_str(":", 1));
return rv355; }
}
}
}
l_K_350 = rt_add(l_K_350, ((rt_int)1LL));
}
RT_B_TICK();
} L_end351: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_PARAMS(void) { RT_B_TICK(); 
R17 * l_HEAD_356; memset(&l_HEAD_356, 0, sizeof l_HEAD_356);
l_HEAD_356 = NULL;
R17 * l_TAIL_357; memset(&l_TAIL_357, 0, sizeof l_TAIL_357);
l_TAIL_357 = NULL;
rt_int l_MODE_358; memset(&l_MODE_358, 0, sizeof l_MODE_358);
l_MODE_358 = g_M_IN;
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end359;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_358 = rt_add(l_MODE_358, ((rt_int)1LL));
}
else
{
{
R17 * l_NAMES_360; memset(&l_NAMES_360, 0, sizeof l_NAMES_360);
l_NAMES_360 = r_IDENT_LIST();
R17 * l_TS_361; memset(&l_TS_361, 0, sizeof l_TS_361);
l_TS_361 = NULL;
R17 * l_P_362; memset(&l_P_362, 0, sizeof l_P_362);
l_P_362 = l_NAMES_360;
r_EXPECT(rt_str(":", 1));
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else if ((r_IS(rt_str("PROCEDURE", 9)) || r_IS(rt_str("FUNCTION", 8))))
{
l_TS_361 = r_PARSE_ROUTINE_SPEC();
}
else
{
l_TS_361 = r_PARSE_TYPE_SPEC();
}
for (;;) {
if ((l_P_362 == NULL)) goto L_end363;
{
{
R17 * l_PN_364; memset(&l_PN_364, 0, sizeof l_PN_364);
l_PN_364 = r_NEW_NODE(g_N_PARAM, ((*(R17 *)rt_nil_check(l_P_362))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_PN_364))).f_NAME, ((*(R17 *)rt_nil_check(l_P_362))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_PN_364))).f_IV = l_MODE_358;
((*(R17 *)rt_nil_check(l_PN_364))).f_B = l_TS_361;
r_ADD_LIST(l_PN_364, &l_HEAD_356, &l_TAIL_357);
}
l_P_362 = ((*(R17 *)rt_nil_check(l_P_362))).f_NEXT;
}
RT_B_TICK();
} L_end363: ;
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end359: ;
r_EXPECT(rt_str(")", 1));
{ R17 * rv365 = l_HEAD_356;
return rv365; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TEMPLATE(rt_int p_FUNC) { RT_B_TICK(); 
R17 * l_R_366; memset(&l_R_366, 0, sizeof l_R_366);
l_R_366 = r_NEW_NODE(g_TS_ROUTINE, r_LINE_NOW());
R17 * l_HEAD_367; memset(&l_HEAD_367, 0, sizeof l_HEAD_367);
l_HEAD_367 = NULL;
R17 * l_TAIL_368; memset(&l_TAIL_368, 0, sizeof l_TAIL_368);
l_TAIL_368 = NULL;
rt_int l_MODE_369; memset(&l_MODE_369, 0, sizeof l_MODE_369);
l_MODE_369 = g_M_IN;
if (p_FUNC)
{
((*(R17 *)rt_nil_check(l_R_366))).f_IV = ((rt_int)1LL);
}
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end370;
{
if (r_ACCEPT(rt_str("#", 1)))
{
l_MODE_369 = rt_add(l_MODE_369, ((rt_int)1LL));
if (r_IS(rt_str(")", 1)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_366))).f_LINE, rt_str("a # must not be the last symbol of a proc-template (5.1)", 56));
}
}
else
{
{
R17 * l_P_371; memset(&l_P_371, 0, sizeof l_P_371);
l_P_371 = r_NEW_NODE(g_N_PARAM, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_P_371))).f_IV = l_MODE_369;
if (r_ACCEPT(rt_str("TYPE", 4)))
{
}
else
{
((*(R17 *)rt_nil_check(l_P_371))).f_B = r_PARSE_TYPE_SPEC();
}
r_ADD_LIST(l_P_371, &l_HEAD_367, &l_TAIL_368);
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
}
RT_B_TICK();
} L_end370: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_R_366))).f_A = l_HEAD_367;
if (r_ACCEPT(rt_str("RETURNS", 7)))
{
((*(R17 *)rt_nil_check(l_R_366))).f_IV = ((rt_int)1LL);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_R_366))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R17 *)rt_nil_check(l_R_366))).f_B = r_PARSE_TYPE_SPEC();
}
}
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R17 *)rt_nil_check(l_R_366))).f_D = r_PAREN_IDENTS();
}
{ R17 * rv372 = l_R_366;
return rv372; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ROUTINE_SPEC(void) { RT_B_TICK(); 
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
{ R17 * rv373 = r_PARSE_TEMPLATE(1);
return rv373; }
}
r_EXPECT(rt_str("PROCEDURE", 9));
{ R17 * rv374 = r_PARSE_TEMPLATE(0);
return rv374; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_WHERE(void) { RT_B_TICK(); 
R17 * l_HEAD_375; memset(&l_HEAD_375, 0, sizeof l_HEAD_375);
l_HEAD_375 = NULL;
R17 * l_TAIL_376; memset(&l_TAIL_376, 0, sizeof l_TAIL_376);
l_TAIL_376 = NULL;
for (;;) {
{
{
R17 * l_N_378; memset(&l_N_378, 0, sizeof l_N_378);
l_N_378 = r_NEW_NODE(g_N_NEEDS, r_LINE_NOW());
R17 * l_TH_379; memset(&l_TH_379, 0, sizeof l_TH_379);
l_TH_379 = NULL;
R17 * l_TT_380; memset(&l_TT_380, 0, sizeof l_TT_380);
l_TT_380 = NULL;
S_R9(&((*(R17 *)rt_nil_check(l_N_378))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("NEEDS", 5));
r_EXPECT(rt_str("(", 1));
for (;;) {
{
{
R17 * l_T_382; memset(&l_T_382, 0, sizeof l_T_382);
l_T_382 = r_NEW_NODE(g_N_TEMPLATE, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_T_382))).f_NAME, ((*(R17 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_T_382))).f_B = r_PARSE_TEMPLATE(0);
r_ADD_LIST(l_T_382, &l_TH_379, &l_TT_380);
}
if (r_ACCEPT(rt_str(";", 1)))
{
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end381;
} L_end381: ;
r_EXPECT(rt_str(")", 1));
((*(R17 *)rt_nil_check(l_N_378))).f_A = l_TH_379;
r_ADD_LIST(l_N_378, &l_HEAD_375, &l_TAIL_376);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end377;
} L_end377: ;
{ R17 * rv383 = l_HEAD_375;
return rv383; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ROUTINE(void) { RT_B_TICK(); 
R17 * l_R_384; memset(&l_R_384, 0, sizeof l_R_384);
l_R_384 = r_NEW_NODE(g_N_ROUTINE, r_LINE_NOW());
R17 * l_H_385; memset(&l_H_385, 0, sizeof l_H_385);
l_H_385 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
if (r_IS_TARGET_DECL())
{
r_SKIP();
((*(R17 *)rt_nil_check(l_R_384))).f_FL = ((rt_int)2LL);
}
if (r_ACCEPT(rt_str("INLINE", 6)))
{
if ((((*(R17 *)rt_nil_check(l_R_384))).f_FL == ((rt_int)2LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_384))).f_LINE, rt_str("target routines cannot be INLINE (4.8.2)", 40));
}
((*(R17 *)rt_nil_check(l_R_384))).f_FL = rt_add(((*(R17 *)rt_nil_check(l_R_384))).f_FL, ((rt_int)1LL));
}
if (r_ACCEPT(rt_str("FUNCTION", 8)))
{
((*(R17 *)rt_nil_check(l_R_384))).f_IV = ((rt_int)1LL);
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
S_R9(&((*(R17 *)rt_nil_check(l_R_384))).f_NAME, ((*(R17 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (r_IS(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_R_384))).f_A = r_PARSE_PARAMS();
}
if ((((*(R17 *)rt_nil_check(l_R_384))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("RETURNS", 7));
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_R_384))).f_B = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
else
{
((*(R17 *)rt_nil_check(l_R_384))).f_B = r_PARSE_TYPE_SPEC();
}
}
for (;;) {
{
if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R17 *)rt_nil_check(l_H_385))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R17 *)rt_nil_check(l_R_384))).f_E = r_PARSE_ITEMS();
}
else if (r_ACCEPT(rt_str("WHERE", 5)))
{
((*(R17 *)rt_nil_check(l_H_385))).f_B = r_PARSE_WHERE();
}
else
{
goto L_end386;
}
}
RT_B_TICK();
} L_end386: ;
((*(R17 *)rt_nil_check(l_R_384))).f_D = l_H_385;
r_EXPECT(rt_str(";", 1));
if ((((*(R17 *)rt_nil_check(l_R_384))).f_FL >= ((rt_int)2LL)))
{
r_EXPECT(rt_str("DYNSIZE", 7));
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_H_385))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
r_EXPECT(rt_str(";", 1));
for (;;) {
if ((r_IS(rt_str("END", 3)) && ((r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PROCEDURE", 9)) || r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("FUNCTION", 8)))))) goto L_end387;
{
r_SKIP();
}
RT_B_TICK();
} L_end387: ;
}
else
{
((*(R17 *)rt_nil_check(l_R_384))).f_C = r_PARSE_CLOSED_BODY();
}
r_EXPECT(rt_str("END", 3));
if ((((*(R17 *)rt_nil_check(l_R_384))).f_IV == ((rt_int)1LL)))
{
r_EXPECT(rt_str("FUNCTION", 8));
}
else
{
r_EXPECT(rt_str("PROCEDURE", 9));
}
if ((!r_TEQ(((*(R17 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, ((*(R17 *)rt_nil_check(l_R_384))).f_NAME)))
{
r_FAILT(r_LINE_NOW(), rt_str("the trailer must name ", 22), ((*(R17 *)rt_nil_check(l_R_384))).f_NAME);
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv388 = l_R_384;
return rv388; }
rt_raise(RT_X_INIT);
}
static R17 * r_BIN_NODE(R9 p_OP, rt_int p_LINE, R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_N_389; memset(&l_N_389, 0, sizeof l_N_389);
l_N_389 = r_NEW_NODE(g_N_BINOP, p_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_389))).f_NAME, p_OP, 0);
((*(R17 *)rt_nil_check(l_N_389))).f_A = p_A;
((*(R17 *)rt_nil_check(l_N_389))).f_B = p_B;
{ R17 * rv390 = l_N_389;
return rv390; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_EXPR(void) { RT_B_TICK(); 
R17 * l_E_391; memset(&l_E_391, 0, sizeof l_E_391);
l_E_391 = r_PARSE_SIMPLE();
if (((((r_IS(rt_str("ROUNDED", 7)) || r_IS(rt_str("TRUNCATED", 9))) || r_IS(rt_str("NATIVE_R", 8))) || r_IS(rt_str("NATIVE_T", 8))) || r_ROUNDING_AHEAD()))
{
{
R17 * l_Q_392; memset(&l_Q_392, 0, sizeof l_Q_392);
l_Q_392 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_Q_392))).f_NAME, r_IDENT(), 0);
((*(R17 *)rt_nil_check(l_Q_392))).f_A = l_E_391;
l_E_391 = l_Q_392;
}
}
if ((r_IS(rt_str("WITH", 4)) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("PREC", 4))))
{
{
R17 * l_Q_393; memset(&l_Q_393, 0, sizeof l_Q_393);
l_Q_393 = r_NEW_NODE(g_N_QUAL, r_LINE_NOW());
r_SKIP();
r_SKIP();
if ((((*(R17 *)rt_nil_check(l_E_391))).f_KIND == g_N_QUAL))
{
l_Q_393 = l_E_391;
}
else
{
((*(R17 *)rt_nil_check(l_Q_393))).f_A = l_E_391;
}
((*(R17 *)rt_nil_check(l_Q_393))).f_B = r_PARSE_SIMPLE();
l_E_391 = l_Q_393;
}
}
{ R17 * rv394 = l_E_391;
return rv394; }
rt_raise(RT_X_INIT);
}
static rt_int r_ROUNDING_AHEAD(void) { RT_B_TICK(); 
R10 l_N_395; memset(&l_N_395, 0, sizeof l_N_395);
S_R10(&l_N_395, r_AHEAD(((rt_int)1LL)), 0);
if ((!r_IS_KIND(g_K_ID)))
{
{ rt_int rv396 = 0;
return rv396; }
}
if ((((((((r_IS(rt_str("CONNECT", 7)) || r_IS(rt_str("SIGNALS", 7))) || r_IS(rt_str("IMPORTS", 7))) || r_IS(rt_str("PRIORITY", 8))) || r_IS(rt_str("WHERE", 5))) || r_IS(rt_str("NEEDS", 5))) || r_IS(rt_str("AS", 2))) || r_IS(rt_str("PREC", 4))))
{
{ rt_int rv397 = 0;
return rv397; }
}
{ rt_int rv398 = (!(((((((r_TOK_IS(l_N_395, rt_str("(", 1)) || r_TOK_IS(l_N_395, rt_str(".", 1))) || r_TOK_IS(l_N_395, rt_str(":=", 2))) || r_TOK_IS(l_N_395, rt_str(":", 1))) || r_TOK_IS(l_N_395, rt_str("$", 1))) || r_TOK_IS(l_N_395, rt_str("@", 1))) || r_TOK_IS(l_N_395, rt_str("[", 1)))));
return rv398; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_SIMPLE(void) { RT_B_TICK(); 
R17 * l_LEFT_399; memset(&l_LEFT_399, 0, sizeof l_LEFT_399);
l_LEFT_399 = r_PARSE_CONJ();
for (;;) {
if ((!((((r_IS(rt_str("OR", 2)) || r_IS(rt_str("!", 1))) || r_IS(rt_str("XOR", 3))) || r_IS(rt_str("->", 2)))))) goto L_end400;
{
{
R10 l_T_401; memset(&l_T_401, 0, sizeof l_T_401);
S_R10(&l_T_401, r_CUR(), 0);
r_SKIP();
l_LEFT_399 = r_BIN_NODE((l_T_401).f_TX, (l_T_401).f_LINE, l_LEFT_399, r_PARSE_CONJ());
}
}
RT_B_TICK();
} L_end400: ;
{ R17 * rv402 = l_LEFT_399;
return rv402; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CONJ(void) { RT_B_TICK(); 
R17 * l_LEFT_403; memset(&l_LEFT_403, 0, sizeof l_LEFT_403);
l_LEFT_403 = r_PARSE_RELATION();
for (;;) {
if ((!((r_IS(rt_str("AND", 3)) || r_IS(rt_str("&", 1)))))) goto L_end404;
{
{
R10 l_T_405; memset(&l_T_405, 0, sizeof l_T_405);
S_R10(&l_T_405, r_CUR(), 0);
r_SKIP();
l_LEFT_403 = r_BIN_NODE((l_T_405).f_TX, (l_T_405).f_LINE, l_LEFT_403, r_PARSE_RELATION());
}
}
RT_B_TICK();
} L_end404: ;
{ R17 * rv406 = l_LEFT_403;
return rv406; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_RELATION(void) { RT_B_TICK(); 
R17 * l_LEFT_407; memset(&l_LEFT_407, 0, sizeof l_LEFT_407);
l_LEFT_407 = r_PARSE_SUM();
for (;;) {
{
{
R10 l_T_409; memset(&l_T_409, 0, sizeof l_T_409);
S_R10(&l_T_409, r_CUR(), 0);
if ((((((r_IS(rt_str("=", 1)) || r_IS(rt_str("<", 1))) || r_IS(rt_str(">", 1))) || r_IS(rt_str("<=", 2))) || r_IS(rt_str(">=", 2))) || r_IS(rt_str("<>", 2))))
{
r_SKIP();
l_LEFT_407 = r_BIN_NODE((l_T_409).f_TX, (l_T_409).f_LINE, l_LEFT_407, r_PARSE_SUM());
}
else if (r_IS(rt_str("IN", 2)))
{
{
R17 * l_N_410; memset(&l_N_410, 0, sizeof l_N_410);
l_N_410 = r_NEW_NODE(g_N_IN, (l_T_409).f_LINE);
r_SKIP();
((*(R17 *)rt_nil_check(l_N_410))).f_A = l_LEFT_407;
((*(R17 *)rt_nil_check(l_N_410))).f_B = r_PARSE_RANGE();
l_LEFT_407 = l_N_410;
}
}
else
{
{ R17 * rv411 = l_LEFT_407;
return rv411; }
}
}
}
RT_B_TICK();
} L_end408: ;
rt_raise(RT_X_INIT);
}
static R17 * r_TRY_SCALED(R17 * p_LEFT, rstr p_OPS) { RT_B_TICK(); 
rt_int l_SAVED_412; memset(&l_SAVED_412, 0, sizeof l_SAVED_412);
l_SAVED_412 = ((*(R7 *)rt_nil_check(g_W))).f_POS;
rt_int l_LINE_413; memset(&l_LINE_413, 0, sizeof l_LINE_413);
l_LINE_413 = r_LINE_NOW();
R17 * l_N_414; memset(&l_N_414, 0, sizeof l_N_414);
if ((!r_IS(rt_str("!", 1))))
{
{ R17 * rv415 = NULL;
return rv415; }
}
{
R10 l_OP_416; memset(&l_OP_416, 0, sizeof l_OP_416);
S_R10(&l_OP_416, r_AHEAD(((rt_int)1LL)), 0);
R9 l_T_417; memset(&l_T_417, 0, sizeof l_T_417);
S_R9(&l_T_417, (l_OP_416).f_TX, 0);
rt_int l_FOUND_418; memset(&l_FOUND_418, 0, sizeof l_FOUND_418);
l_FOUND_418 = 0;
if (((!((l_OP_416).f_KIND == g_K_SYM)) && (!((l_OP_416).f_KIND == g_K_RES))))
{
{ R17 * rv419 = NULL;
return rv419; }
}
{ rt_int it421_lo = ((rt_int)0LL), it421_hi = rt_sub((rt_int)(p_OPS).len, (l_T_417).f_LEN);
for (rt_int it421 = it421_lo; it421 <= it421_hi; it421++) {
{
if (rt_b_eq(rt_b_slice(p_OPS, it421, rt_sub(rt_add(it421, (l_T_417).f_LEN), ((rt_int)1LL))), r_STR(l_T_417, (l_T_417).f_LEN)))
{
if (((((it421 == ((rt_int)0LL)) || rt_b_eq(rt_b_slice(p_OPS, rt_sub(it421, ((rt_int)1LL)), rt_sub(it421, ((rt_int)1LL))), rt_str(" ", 1)))) && (((rt_add(it421, (l_T_417).f_LEN) == (rt_int)(p_OPS).len) || rt_b_eq(rt_b_slice(p_OPS, rt_add(it421, (l_T_417).f_LEN), rt_add(it421, (l_T_417).f_LEN)), rt_str(" ", 1))))))
{
l_FOUND_418 = 1;
}
}
}
RT_B_TICK();
if (it421 == it421_hi) break;
} } L_end420: ;
if ((!l_FOUND_418))
{
{ R17 * rv422 = NULL;
return rv422; }
}
r_SKIP();
r_SKIP();
l_N_414 = r_BIN_NODE(l_T_417, l_LINE_413, p_LEFT, NULL);
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R17 *)rt_nil_check(l_N_414))).f_FL = ((rt_int)2LL);
{ R17 * rv423 = l_N_414;
return rv423; }
}
if (((((r_IS_KIND(g_K_NUM) || r_IS_KIND(g_K_ID)) || r_IS(rt_str("(", 1))) || r_IS(rt_str("-", 1))) || r_IS(rt_str("+", 1))))
{
((*(R17 *)rt_nil_check(l_N_414))).f_D = r_PARSE_SECONDARY();
if (r_ACCEPT(rt_str("!", 1)))
{
((*(R17 *)rt_nil_check(l_N_414))).f_FL = ((rt_int)1LL);
{ R17 * rv424 = l_N_414;
return rv424; }
}
}
((*(R7 *)rt_nil_check(g_W))).f_POS = l_SAVED_412;
{ R17 * rv425 = NULL;
return rv425; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_SUM(void) { RT_B_TICK(); 
R17 * l_LEFT_426; memset(&l_LEFT_426, 0, sizeof l_LEFT_426);
l_LEFT_426 = r_PARSE_TERM();
for (;;) {
{
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("!!", 2))))
{
{
R10 l_T_428; memset(&l_T_428, 0, sizeof l_T_428);
S_R10(&l_T_428, r_CUR(), 0);
r_SKIP();
l_LEFT_426 = r_BIN_NODE((l_T_428).f_TX, (l_T_428).f_LINE, l_LEFT_426, r_PARSE_TERM());
}
}
else
{
{
R17 * l_N_429; memset(&l_N_429, 0, sizeof l_N_429);
l_N_429 = r_TRY_SCALED(l_LEFT_426, rt_str("+ -", 3));
if ((l_N_429 == NULL))
{
{ R17 * rv430 = l_LEFT_426;
return rv430; }
}
((*(R17 *)rt_nil_check(l_N_429))).f_B = r_PARSE_TERM();
l_LEFT_426 = l_N_429;
}
}
}
RT_B_TICK();
} L_end427: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_TERM(void) { RT_B_TICK(); 
R17 * l_LEFT_431; memset(&l_LEFT_431, 0, sizeof l_LEFT_431);
l_LEFT_431 = r_PARSE_FACTOR();
for (;;) {
{
if ((((r_IS(rt_str("*", 1)) || r_IS(rt_str("/", 1))) || r_IS(rt_str("//", 2))) || r_IS(rt_str("MOD", 3))))
{
{
R10 l_T_433; memset(&l_T_433, 0, sizeof l_T_433);
S_R10(&l_T_433, r_CUR(), 0);
r_SKIP();
l_LEFT_431 = r_BIN_NODE((l_T_433).f_TX, (l_T_433).f_LINE, l_LEFT_431, r_PARSE_FACTOR());
}
}
else
{
{
R17 * l_N_434; memset(&l_N_434, 0, sizeof l_N_434);
l_N_434 = r_TRY_SCALED(l_LEFT_431, rt_str("* / // MOD", 10));
if ((l_N_434 == NULL))
{
{ R17 * rv435 = l_LEFT_431;
return rv435; }
}
((*(R17 *)rt_nil_check(l_N_434))).f_B = r_PARSE_FACTOR();
l_LEFT_431 = l_N_434;
}
}
}
RT_B_TICK();
} L_end432: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_FACTOR(void) { RT_B_TICK(); 
R17 * l_LEFT_436; memset(&l_LEFT_436, 0, sizeof l_LEFT_436);
l_LEFT_436 = r_PARSE_SECONDARY();
for (;;) {
{
if (r_IS(rt_str("**", 2)))
{
{
R10 l_T_438; memset(&l_T_438, 0, sizeof l_T_438);
S_R10(&l_T_438, r_CUR(), 0);
r_SKIP();
l_LEFT_436 = r_BIN_NODE((l_T_438).f_TX, (l_T_438).f_LINE, l_LEFT_436, r_PARSE_SECONDARY());
}
}
else
{
{
R17 * l_N_439; memset(&l_N_439, 0, sizeof l_N_439);
l_N_439 = r_TRY_SCALED(l_LEFT_436, rt_str("**", 2));
if ((l_N_439 == NULL))
{
{ R17 * rv440 = l_LEFT_436;
return rv440; }
}
((*(R17 *)rt_nil_check(l_N_439))).f_B = r_PARSE_SECONDARY();
l_LEFT_436 = l_N_439;
}
}
}
RT_B_TICK();
} L_end437: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_SECONDARY(void) { RT_B_TICK(); 
R10 l_T_441; memset(&l_T_441, 0, sizeof l_T_441);
S_R10(&l_T_441, r_CUR(), 0);
if (((r_IS(rt_str("+", 1)) || r_IS(rt_str("-", 1))) || r_IS(rt_str("NOT", 3))))
{
{
R17 * l_N_442; memset(&l_N_442, 0, sizeof l_N_442);
l_N_442 = r_NEW_NODE(g_N_UNOP, (l_T_441).f_LINE);
r_SKIP();
S_R9(&((*(R17 *)rt_nil_check(l_N_442))).f_NAME, (l_T_441).f_TX, 0);
((*(R17 *)rt_nil_check(l_N_442))).f_A = r_PARSE_POSTFIX();
{ R17 * rv443 = l_N_442;
return rv443; }
}
}
{ R17 * rv444 = r_PARSE_POSTFIX();
return rv444; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ARGS(R17 * p_N) { RT_B_TICK(); 
R17 * l_HEAD_445; memset(&l_HEAD_445, 0, sizeof l_HEAD_445);
l_HEAD_445 = NULL;
R17 * l_TAIL_446; memset(&l_TAIL_446, 0, sizeof l_TAIL_446);
l_TAIL_446 = NULL;
rt_int l_GROUP_447; memset(&l_GROUP_447, 0, sizeof l_GROUP_447);
l_GROUP_447 = ((rt_int)0LL);
r_EXPECT(rt_str("(", 1));
for (;;) {
if (r_IS(rt_str(")", 1))) goto L_end448;
{
if (r_ACCEPT(rt_str("#", 1)))
{
switch (l_GROUP_447) {
case 0:
{
((*(R17 *)rt_nil_check(p_N))).f_A = l_HEAD_445;
}
break;
case 1:
{
((*(R17 *)rt_nil_check(p_N))).f_B = l_HEAD_445;
}
break;
default:
{
r_FAIL(((*(R17 *)rt_nil_check(p_N))).f_LINE, rt_str("too many # in an argument list", 30));
}
break;
}
l_GROUP_447 = rt_add(l_GROUP_447, ((rt_int)1LL));
l_HEAD_445 = NULL;
l_TAIL_446 = NULL;
}
else
{
if ((l_GROUP_447 == ((rt_int)0LL)))
{
r_ADD_LIST(r_PARSE_TYPE_ARG(), &l_HEAD_445, &l_TAIL_446);
if ((r_IS(rt_str("RETURNS", 7)) && (((*(R17 *)rt_nil_check(l_TAIL_446))).f_KIND == g_N_APPLY)))
{
r_SKIP();
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_TAIL_446))).f_E = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str(")", 1));
}
}
else
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_445, &l_TAIL_446);
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
}
}
RT_B_TICK();
} L_end448: ;
r_EXPECT(rt_str(")", 1));
switch (l_GROUP_447) {
case 0:
{
((*(R17 *)rt_nil_check(p_N))).f_A = l_HEAD_445;
}
break;
case 1:
{
((*(R17 *)rt_nil_check(p_N))).f_B = l_HEAD_445;
}
break;
default:
{
((*(R17 *)rt_nil_check(p_N))).f_C = l_HEAD_445;
}
break;
}
{ R17 * rv449 = p_N;
return rv449; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_POSTFIX(void) { RT_B_TICK(); 
R17 * l_E_450; memset(&l_E_450, 0, sizeof l_E_450);
l_E_450 = r_PARSE_ATOM();
R17 * l_N_451; memset(&l_N_451, 0, sizeof l_N_451);
for (;;) {
{
{
rt_int l_LINE_453; memset(&l_LINE_453, 0, sizeof l_LINE_453);
l_LINE_453 = r_LINE_NOW();
if ((r_IS(rt_str("(", 1)) && (((*(R17 *)rt_nil_check(l_E_450))).f_KIND == g_N_ENUMLIT)))
{
((*(R17 *)rt_nil_check(l_E_450))).f_KIND = g_N_NAME;
}
if ((r_IS(rt_str("(", 1)) && (((*(R17 *)rt_nil_check(l_E_450))).f_KIND == g_N_NAME)))
{
((*(R17 *)rt_nil_check(l_E_450))).f_KIND = g_N_APPLY;
l_E_450 = r_PARSE_ARGS(l_E_450);
}
else if (r_IS(rt_str("(", 1)))
{
l_N_451 = r_NEW_NODE(g_N_INDEX, l_LINE_453);
l_N_451 = r_PARSE_ARGS(l_N_451);
((*(R17 *)rt_nil_check(l_N_451))).f_B = ((*(R17 *)rt_nil_check(l_N_451))).f_A;
((*(R17 *)rt_nil_check(l_N_451))).f_A = l_E_450;
l_E_450 = l_N_451;
}
else if (r_ACCEPT(rt_str(".", 1)))
{
l_N_451 = r_NEW_NODE(g_N_FIELD, l_LINE_453);
((*(R17 *)rt_nil_check(l_N_451))).f_A = l_E_450;
S_R9(&((*(R17 *)rt_nil_check(l_N_451))).f_NAME, r_IDENT(), 0);
l_E_450 = l_N_451;
}
else if (r_ACCEPT(rt_str("@", 1)))
{
l_N_451 = r_NEW_NODE(g_N_DEREF, l_LINE_453);
((*(R17 *)rt_nil_check(l_N_451))).f_A = l_E_450;
l_E_450 = l_N_451;
}
else if ((r_IS(rt_str("[", 1)) && (!r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str("]", 1)))))
{
r_SKIP();
l_N_451 = r_NEW_NODE(g_N_SUBSTR, l_LINE_453);
((*(R17 *)rt_nil_check(l_N_451))).f_A = l_E_450;
((*(R17 *)rt_nil_check(l_N_451))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_451))).f_C = r_PARSE_EXPR();
r_EXPECT(rt_str("]", 1));
l_E_450 = l_N_451;
}
else
{
{ R17 * rv454 = l_E_450;
return rv454; }
}
}
}
RT_B_TICK();
} L_end452: ;
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_BITS(rt_int p_BITS_PER, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_AT_455; memset(&l_AT_455, 0, sizeof l_AT_455);
l_AT_455 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R17 * l_N_456; memset(&l_N_456, 0, sizeof l_N_456);
l_N_456 = r_NEW_NODE(g_N_BITS, p_LINE);
R9 l_R_457; memset(&l_R_457, 0, sizeof l_R_457);
if ((!r_IS_KIND(g_K_STR)))
{
r_FAIL(p_LINE, rt_str("a quoted bitstring expected", 27));
}
for (;;) {
if ((!r_IS_KIND(g_K_STR))) goto L_end458;
{
{
R9 l_T_459; memset(&l_T_459, 0, sizeof l_T_459);
S_R9(&l_T_459, (r_CUR()).f_TX, 0);
rstr l_S_460; memset(&l_S_460, 0, sizeof l_S_460);
l_S_460 = rt_b_str_new((l_T_459).f_LEN, 0);
rt_b_assign(&l_S_460, r_STR(l_T_459, (l_T_459).f_LEN));
{ rt_int it462_lo = ((rt_int)0LL), it462_hi = rt_sub((l_T_459).f_LEN, ((rt_int)1LL));
for (rt_int it462 = it462_lo; it462 <= it462_hi; it462++) {
{
if ((!rt_b_eq(rt_b_slice(l_S_460, it462, it462), rt_str(" ", 1))))
{
{
rt_int l_C_463; memset(&l_C_463, 0, sizeof l_C_463);
l_C_463 = r_CODE_OF(rt_b_slice(l_S_460, it462, it462));
rt_int l_V_464; memset(&l_V_464, 0, sizeof l_V_464);
l_V_464 = rt_sub(l_C_463, ((rt_int)48LL));
rt_int l_P_465; memset(&l_P_465, 0, sizeof l_P_465);
l_P_465 = ((rt_int)1LL);
if ((l_C_463 >= ((rt_int)65LL)))
{
l_V_464 = rt_sub(l_C_463, ((rt_int)55LL));
}
{ rt_int it467_lo = ((rt_int)1LL), it467_hi = p_BITS_PER;
for (rt_int it467 = it467_lo; it467 <= it467_hi; it467++) {
{
l_P_465 = rt_mul(l_P_465, ((rt_int)2LL));
}
RT_B_TICK();
if (it467 == it467_hi) break;
} } L_end466: ;
if (((l_V_464 < ((rt_int)0LL)) || (l_V_464 >= l_P_465)))
{
r_FAIL(p_LINE, rt_str("a bad digit in a bitstring literal", 34));
}
{ rt_int it469_lo = ((rt_int)1LL), it469_hi = p_BITS_PER;
for (rt_int it469 = it469_lo; it469 <= it469_hi; it469++) {
{
l_P_465 = rt_quot(l_P_465, ((rt_int)2LL));
if ((rt_rem((rt_quot(l_V_464, l_P_465)), ((rt_int)2LL)) == ((rt_int)1LL)))
{
S_R9(&l_R_457, r_MK(rt_str("1", 1)), 0);
}
else
{
S_R9(&l_R_457, r_MK(rt_str("0", 1)), 0);
}
}
RT_B_TICK();
if (it469 == it469_hi) break;
} } L_end468: ;
}
}
}
RT_B_TICK();
if (it462 == it462_hi) break;
} } L_end461: ;
}
r_SKIP();
}
RT_B_TICK();
} L_end458: ;
S_R9(&((*(R17 *)rt_nil_check(l_N_456))).f_NAME, ({ R9 rc470; memset(&rc470, 0, sizeof rc470);  rc470.f_AT = l_AT_455; rc470.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_455); rc470.f_H = rt_neg(((rt_int)1LL)); rc470; }), 0);
{ R17 * rv471 = l_N_456;
return rv471; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_ATOM(void) { RT_B_TICK(); 
R10 l_T_472; memset(&l_T_472, 0, sizeof l_T_472);
S_R10(&l_T_472, r_CUR(), 0);
R17 * l_N_473; memset(&l_N_473, 0, sizeof l_N_473);
if (((l_T_472).f_KIND == g_K_NUM))
{
l_N_473 = r_NEW_NODE(g_N_INT, (l_T_472).f_LINE);
((*(R17 *)rt_nil_check(l_N_473))).f_IV = (l_T_472).f_IV;
S_R9(&((*(R17 *)rt_nil_check(l_N_473))).f_NAME, (l_T_472).f_TX, 0);
r_SKIP();
{ R17 * rv474 = l_N_473;
return rv474; }
}
if ((((l_T_472).f_KIND == g_K_REAL) || ((l_T_472).f_KIND == g_K_FIX)))
{
l_N_473 = r_NEW_NODE(g_N_REAL, (l_T_472).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_473))).f_NAME, (l_T_472).f_TX, 0);
if (((l_T_472).f_KIND == g_K_FIX))
{
((*(R17 *)rt_nil_check(l_N_473))).f_FL = ((rt_int)1LL);
((*(R17 *)rt_nil_check(l_N_473))).f_IV = (l_T_472).f_IV;
}
r_SKIP();
{ R17 * rv475 = l_N_473;
return rv475; }
}
if (((l_T_472).f_KIND == g_K_GEN))
{
{ R17 * rv476 = r_PARSE_TYPE_ARG();
return rv476; }
}
if (((r_IS(rt_str("BIN", 3)) || r_IS(rt_str("OCT", 3))) || r_IS(rt_str("HEX", 3))))
{
r_SKIP();
if (r_TOK_IS(l_T_472, rt_str("BIN", 3)))
{
{ R17 * rv477 = r_PARSE_BITS(((rt_int)1LL), (l_T_472).f_LINE);
return rv477; }
}
else if (r_TOK_IS(l_T_472, rt_str("OCT", 3)))
{
{ R17 * rv478 = r_PARSE_BITS(((rt_int)3LL), (l_T_472).f_LINE);
return rv478; }
}
{ R17 * rv479 = r_PARSE_BITS(((rt_int)4LL), (l_T_472).f_LINE);
return rv479; }
}
if ((((l_T_472).f_KIND == g_K_STR) || ((l_T_472).f_KIND == g_K_ENUM)))
{
{ R17 * rv480 = r_PARSE_CHARSTRING(r_NO_TEXT());
return rv480; }
}
if ((((l_T_472).f_KIND == g_K_ID) && ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_STR) || (((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ENUM) && (!r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str("(", 1)))) && (!r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":=", 2)))))))))
{
r_SKIP();
{ R17 * rv481 = r_PARSE_CHARSTRING((l_T_472).f_TX);
return rv481; }
}
if (r_ACCEPT(rt_str("TRUE", 4)))
{
l_N_473 = r_NEW_NODE(g_N_BOOL, (l_T_472).f_LINE);
((*(R17 *)rt_nil_check(l_N_473))).f_IV = ((rt_int)1LL);
{ R17 * rv482 = l_N_473;
return rv482; }
}
else if (r_ACCEPT(rt_str("FALSE", 5)))
{
{ R17 * rv483 = r_NEW_NODE(g_N_BOOL, (l_T_472).f_LINE);
return rv483; }
}
else if (r_ACCEPT(rt_str("NIL", 3)))
{
{ R17 * rv484 = r_NEW_NODE(g_N_NIL, (l_T_472).f_LINE);
return rv484; }
}
else if (r_ACCEPT(rt_str("ANY", 3)))
{
{ R17 * rv485 = r_NEW_NODE(g_N_ANY, (l_T_472).f_LINE);
return rv485; }
}
if (r_ACCEPT(rt_str("[", 1)))
{
{
R17 * l_TS_486; memset(&l_TS_486, 0, sizeof l_TS_486);
l_TS_486 = r_PARSE_TYPE_SPEC();
r_EXPECT(rt_str("]", 1));
r_EXPECT(rt_str("$$", 2));
if (((r_IS(rt_str("(", 1)) && ((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID)) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
l_N_473 = r_PARSE_ATOM();
((*(R17 *)rt_nil_check(l_N_473))).f_B = l_TS_486;
{ R17 * rv487 = l_N_473;
return rv487; }
}
l_N_473 = r_NEW_NODE(g_N_TYPESPEC, (l_T_472).f_LINE);
((*(R17 *)rt_nil_check(l_N_473))).f_A = l_TS_486;
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_N_473))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
{ R17 * rv488 = l_N_473;
return rv488; }
}
}
if (r_IS(rt_str("(", 1)))
{
if ((((r_AHEAD(((rt_int)1LL))).f_KIND == g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)2LL)), rt_str(":", 1))))
{
{
R17 * l_HEAD_489; memset(&l_HEAD_489, 0, sizeof l_HEAD_489);
l_HEAD_489 = NULL;
R17 * l_TAIL_490; memset(&l_TAIL_490, 0, sizeof l_TAIL_490);
l_TAIL_490 = NULL;
r_SKIP();
for (;;) {
{
l_N_473 = r_NEW_NODE(g_N_FINIT, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_N_473))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(":", 1));
((*(R17 *)rt_nil_check(l_N_473))).f_A = r_PARSE_EXPR();
r_ADD_LIST(l_N_473, &l_HEAD_489, &l_TAIL_490);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end491;
} L_end491: ;
r_EXPECT(rt_str(")", 1));
l_N_473 = r_NEW_NODE(g_N_RECCONS, (l_T_472).f_LINE);
((*(R17 *)rt_nil_check(l_N_473))).f_A = l_HEAD_489;
{ R17 * rv492 = l_N_473;
return rv492; }
}
}
r_SKIP();
{
R17 * l_E_493; memset(&l_E_493, 0, sizeof l_E_493);
l_E_493 = r_PARSE_EXPR();
if (r_IS(rt_str(",", 1)))
{
{
R17 * l_HEAD_494; memset(&l_HEAD_494, 0, sizeof l_HEAD_494);
l_HEAD_494 = NULL;
R17 * l_TAIL_495; memset(&l_TAIL_495, 0, sizeof l_TAIL_495);
l_TAIL_495 = NULL;
r_ADD_LIST(l_E_493, &l_HEAD_494, &l_TAIL_495);
for (;;) {
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end496;
{
r_ADD_LIST(r_PARSE_EXPR(), &l_HEAD_494, &l_TAIL_495);
}
RT_B_TICK();
} L_end496: ;
r_EXPECT(rt_str(")", 1));
l_N_473 = r_NEW_NODE(g_N_ARRCONS, (l_T_472).f_LINE);
((*(R17 *)rt_nil_check(l_N_473))).f_A = l_HEAD_494;
{ R17 * rv497 = l_N_473;
return rv497; }
}
}
r_EXPECT(rt_str(")", 1));
l_N_473 = r_NEW_NODE(g_N_PAREN, (l_T_472).f_LINE);
((*(R17 *)rt_nil_check(l_N_473))).f_A = l_E_493;
{ R17 * rv498 = l_N_473;
return rv498; }
}
}
if (((l_T_472).f_KIND == g_K_ID))
{
l_N_473 = r_NEW_NODE(g_N_NAME, (l_T_472).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_473))).f_NAME, ((*(R17 *)rt_nil_check(r_ROUTINE_NAME_NODE()))).f_NAME, 0);
if (((((r_TEQS(((*(R17 *)rt_nil_check(l_N_473))).f_NAME, rt_str("NEW", 3)) || r_TEQS(((*(R17 *)rt_nil_check(l_N_473))).f_NAME, rt_str("PTR$NEW", 7))) || r_TEQS(((*(R17 *)rt_nil_check(l_N_473))).f_NAME, rt_str("SEMAPHORE$NEW", 13)))) && r_IS(rt_str("(", 1))))
{
((*(R17 *)rt_nil_check(l_N_473))).f_KIND = g_N_NEW;
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_N_473))).f_A = r_PARSE_TYPE_ARG();
r_EXPECT(rt_str(")", 1));
}
{ R17 * rv499 = l_N_473;
return rv499; }
}
r_FAILT((l_T_472).f_LINE, rt_str("an expression expected, not ", 28), (l_T_472).f_TX);
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CHARSTRING(R9 p_CHARSET) { RT_B_TICK(); 
rt_int l_LINE_500; memset(&l_LINE_500, 0, sizeof l_LINE_500);
l_LINE_500 = r_LINE_NOW();
R17 * l_HEAD_501; memset(&l_HEAD_501, 0, sizeof l_HEAD_501);
l_HEAD_501 = NULL;
R17 * l_TAIL_502; memset(&l_TAIL_502, 0, sizeof l_TAIL_502);
l_TAIL_502 = NULL;
rt_int l_STRINGS_503; memset(&l_STRINGS_503, 0, sizeof l_STRINGS_503);
l_STRINGS_503 = ((rt_int)0LL);
R17 * l_N_504; memset(&l_N_504, 0, sizeof l_N_504);
for (;;) {
if ((!((r_IS_KIND(g_K_STR) || r_IS_KIND(g_K_ENUM))))) goto L_end505;
{
l_N_504 = r_NEW_NODE(g_N_PART, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_N_504))).f_IV = (r_CUR()).f_KIND;
S_R9(&((*(R17 *)rt_nil_check(l_N_504))).f_NAME, (r_CUR()).f_TX, 0);
if ((((*(R17 *)rt_nil_check(l_N_504))).f_IV == g_K_STR))
{
l_STRINGS_503 = rt_add(l_STRINGS_503, ((rt_int)1LL));
}
r_SKIP();
r_ADD_LIST(l_N_504, &l_HEAD_501, &l_TAIL_502);
}
RT_B_TICK();
} L_end505: ;
if ((((l_STRINGS_503 == ((rt_int)0LL)) && ((p_CHARSET).f_LEN == ((rt_int)0LL))) && (((*(R17 *)rt_nil_check(l_HEAD_501))).f_NEXT == NULL)))
{
((*(R17 *)rt_nil_check(l_HEAD_501))).f_KIND = g_N_ENUMLIT;
{ R17 * rv506 = l_HEAD_501;
return rv506; }
}
l_N_504 = r_NEW_NODE(g_N_STR, l_LINE_500);
((*(R17 *)rt_nil_check(l_N_504))).f_A = l_HEAD_501;
S_R9(&((*(R17 *)rt_nil_check(l_N_504))).f_NAME, p_CHARSET, 0);
{ R17 * rv507 = l_N_504;
return rv507; }
rt_raise(RT_X_INIT);
}
static rt_int r_AT_BODY_END(void) { RT_B_TICK(); 
{ rt_int rv508 = ((((((((((r_IS_KIND(g_K_EOF) || r_IS(rt_str("END", 3))) || r_IS(rt_str("ELSE", 4))) || r_IS(rt_str("ORIF", 4))) || r_IS(rt_str("EXCEPT", 6))) || r_IS(rt_str("PROCEDURE", 9))) || r_IS(rt_str("FUNCTION", 8))) || r_IS(rt_str("INLINE", 6))) || r_IS_TARGET_DECL()) || r_IS(rt_str("MODULE", 6))) || r_IS(rt_str("PATH", 4)));
return rv508; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_STATEMENTS(void) { RT_B_TICK(); 
R17 * l_HEAD_509; memset(&l_HEAD_509, 0, sizeof l_HEAD_509);
l_HEAD_509 = NULL;
R17 * l_TAIL_510; memset(&l_TAIL_510, 0, sizeof l_TAIL_510);
l_TAIL_510 = NULL;
for (;;) {
if (r_AT_BODY_END()) goto L_end511;
{
r_ADD_LIST(r_PARSE_STATEMENT(), &l_HEAD_509, &l_TAIL_510);
}
RT_B_TICK();
} L_end511: ;
{ R17 * rv512 = l_HEAD_509;
return rv512; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_HANDLERS(void) { RT_B_TICK(); 
R17 * l_HEAD_513; memset(&l_HEAD_513, 0, sizeof l_HEAD_513);
l_HEAD_513 = NULL;
R17 * l_TAIL_514; memset(&l_TAIL_514, 0, sizeof l_TAIL_514);
l_TAIL_514 = NULL;
r_EXPECT(rt_str("EXCEPT", 6));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end515;
{
{
R17 * l_H_516; memset(&l_H_516, 0, sizeof l_H_516);
l_H_516 = r_NEW_NODE(g_N_HANDLER, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_H_516))).f_A = r_IDENT_LIST();
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_H_516))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_H_516, &l_HEAD_513, &l_TAIL_514);
}
}
RT_B_TICK();
} L_end515: ;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("EXCEPT", 6));
r_EXPECT(rt_str(";", 1));
{ R17 * rv517 = l_HEAD_513;
return rv517; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_STATEMENT(void) { RT_B_TICK(); 
R17 * l_S_518; memset(&l_S_518, 0, sizeof l_S_518);
if ((r_IS_KIND(g_K_ID) && r_TOK_IS(r_AHEAD(((rt_int)1LL)), rt_str(":", 1))))
{
l_S_518 = r_NEW_NODE(g_N_LABELED, r_LINE_NOW());
S_R9(&((*(R17 *)rt_nil_check(l_S_518))).f_NAME, r_IDENT(), 0);
r_SKIP();
((*(R17 *)rt_nil_check(l_S_518))).f_A = r_PARSE_STATEMENT();
{ R17 * rv519 = l_S_518;
return rv519; }
}
l_S_518 = r_PARSE_UNLABELED();
if (r_IS(rt_str("EXCEPT", 6)))
{
{
R17 * l_X_520; memset(&l_X_520, 0, sizeof l_X_520);
l_X_520 = r_NEW_NODE(g_N_EXCEPT, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_X_520))).f_A = l_S_518;
((*(R17 *)rt_nil_check(l_X_520))).f_B = r_PARSE_HANDLERS();
{ R17 * rv521 = l_X_520;
return rv521; }
}
}
{ R17 * rv522 = l_S_518;
return rv522; }
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
rt_int l_LINE_523; memset(&l_LINE_523, 0, sizeof l_LINE_523);
l_LINE_523 = r_LINE_NOW();
R17 * l_S_524; memset(&l_S_524, 0, sizeof l_S_524);
R17 * l_T_525; memset(&l_T_525, 0, sizeof l_T_525);
if (r_ACCEPT(rt_str(";", 1)))
{
{ R17 * rv526 = r_NEW_NODE(g_N_NULL, l_LINE_523);
return rv526; }
}
else if (r_IS(rt_str("IF", 2)))
{
{ R17 * rv527 = r_PARSE_IF();
return rv527; }
}
else if (r_IS(rt_str("SELECT", 6)))
{
{ R17 * rv528 = r_PARSE_CASE();
return rv528; }
}
else if (r_IS(rt_str("LOOP", 4)))
{
{ R17 * rv529 = r_PARSE_LOOP();
return rv529; }
}
else if (r_IS(rt_str("PAR_BLOCK", 9)))
{
{ R17 * rv530 = r_PARSE_PAR();
return rv530; }
}
else if (r_ACCEPT(rt_str("BLOCK", 5)))
{
l_S_524 = r_NEW_NODE(g_N_BLOCK, l_LINE_523);
((*(R17 *)rt_nil_check(l_S_524))).f_A = r_PARSE_BODY();
r_EXPECT_END(rt_str("BLOCK", 5));
{ R17 * rv531 = l_S_524;
return rv531; }
}
else if (r_ACCEPT(rt_str("WITH", 4)))
{
l_S_524 = r_NEW_NODE(g_N_WITH, l_LINE_523);
S_R9(&((*(R17 *)rt_nil_check(l_S_524))).f_NAME, r_IDENT(), 0);
if (r_ACCEPT(rt_str("NAMING", 6)))
{
((*(R17 *)rt_nil_check(l_S_524))).f_IV = ((rt_int)1LL);
((*(R17 *)rt_nil_check(l_S_524))).f_A = r_PARSE_POSTFIX();
}
else
{
r_EXPECT(rt_str(":=", 2));
((*(R17 *)rt_nil_check(l_S_524))).f_A = r_PARSE_EXPR();
}
if (r_ACCEPT(rt_str(",", 1)))
{
}
((*(R17 *)rt_nil_check(l_S_524))).f_B = r_PARSE_UNLABELED();
{ R17 * rv532 = l_S_524;
return rv532; }
}
else if (r_ACCEPT(rt_str("EXIT", 4)))
{
r_EXPECT(rt_str(";", 1));
{ R17 * rv533 = r_NEW_NODE(g_N_EXIT, l_LINE_523);
return rv533; }
}
else if (r_ACCEPT(rt_str("GO", 2)))
{
r_EXPECT(rt_str("TO", 2));
l_S_524 = r_NEW_NODE(g_N_GOTO, l_LINE_523);
S_R9(&((*(R17 *)rt_nil_check(l_S_524))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str(";", 1));
{ R17 * rv534 = l_S_524;
return rv534; }
}
else if (r_ACCEPT(rt_str("RETURN", 6)))
{
l_S_524 = r_NEW_NODE(g_N_RETURN, l_LINE_523);
if ((!r_IS(rt_str(";", 1))))
{
((*(R17 *)rt_nil_check(l_S_524))).f_A = r_PARSE_EXPR();
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv535 = l_S_524;
return rv535; }
}
else if (r_ACCEPT(rt_str("SIGNAL", 6)))
{
l_S_524 = r_NEW_NODE(g_N_SIGNAL, l_LINE_523);
if (r_IS_KIND(g_K_ID))
{
S_R9(&((*(R17 *)rt_nil_check(l_S_524))).f_NAME, r_IDENT(), 0);
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv536 = l_S_524;
return rv536; }
}
else if (r_ACCEPT(rt_str("ASSERT", 6)))
{
l_S_524 = r_NEW_NODE(g_N_ASSERT, l_LINE_523);
((*(R17 *)rt_nil_check(l_S_524))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R17 * rv537 = l_S_524;
return rv537; }
}
else if (r_ACCEPT(rt_str("TERMINATE", 9)))
{
l_S_524 = r_NEW_NODE(g_N_TERMINATE, l_LINE_523);
if (r_ACCEPT(rt_str("(", 1)))
{
((*(R17 *)rt_nil_check(l_S_524))).f_A = r_PARSE_POSTFIX();
r_EXPECT(rt_str(")", 1));
}
r_EXPECT(rt_str(";", 1));
{ R17 * rv538 = l_S_524;
return rv538; }
}
l_T_525 = r_PARSE_POSTFIX();
if (r_IS(rt_str("[", 1)))
{
r_FAIL(l_LINE_523, rt_str("a substring of a substring", 26));
}
if (r_ACCEPT(rt_str(":=", 2)))
{
l_S_524 = r_NEW_NODE(g_N_ASSIGN, l_LINE_523);
((*(R17 *)rt_nil_check(l_S_524))).f_A = l_T_525;
((*(R17 *)rt_nil_check(l_S_524))).f_B = r_PARSE_EXPR();
r_EXPECT(rt_str(";", 1));
{ R17 * rv539 = l_S_524;
return rv539; }
}
r_EXPECT(rt_str(";", 1));
if ((((((*(R17 *)rt_nil_check(l_T_525))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_T_525))).f_KIND == g_N_APPLY)) || (((*(R17 *)rt_nil_check(l_T_525))).f_KIND == g_N_ENUMLIT)))
{
((*(R17 *)rt_nil_check(l_T_525))).f_KIND = g_N_CALL;
}
else
{
r_FAIL(l_LINE_523, rt_str("a statement expected", 20));
}
{ R17 * rv540 = l_T_525;
return rv540; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_IF(void) { RT_B_TICK(); 
R17 * l_S_541; memset(&l_S_541, 0, sizeof l_S_541);
l_S_541 = r_NEW_NODE(g_N_IF, r_LINE_NOW());
R17 * l_HEAD_542; memset(&l_HEAD_542, 0, sizeof l_HEAD_542);
l_HEAD_542 = NULL;
R17 * l_TAIL_543; memset(&l_TAIL_543, 0, sizeof l_TAIL_543);
l_TAIL_543 = NULL;
r_EXPECT(rt_str("IF", 2));
for (;;) {
{
{
R17 * l_ARM_545; memset(&l_ARM_545, 0, sizeof l_ARM_545);
l_ARM_545 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
((*(R17 *)rt_nil_check(l_ARM_545))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("THEN", 4));
((*(R17 *)rt_nil_check(l_ARM_545))).f_B = r_PARSE_BODY();
r_ADD_LIST(l_ARM_545, &l_HEAD_542, &l_TAIL_543);
}
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str("ORIF", 4)))) goto L_end544;
} L_end544: ;
((*(R17 *)rt_nil_check(l_S_541))).f_A = l_HEAD_542;
if (r_ACCEPT(rt_str("ELSE", 4)))
{
((*(R17 *)rt_nil_check(l_S_541))).f_B = r_PARSE_BODY();
}
r_EXPECT_END(rt_str("IF", 2));
{ R17 * rv546 = l_S_541;
return rv546; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CASE_LABEL(void) { RT_B_TICK(); 
if ((r_IS(rt_str("[", 1)) || ((r_IS(rt_str("(", 1)) && r_RANGE_AHEAD()))))
{
{ R17 * rv547 = r_PARSE_RANGE();
return rv547; }
}
{ R17 * rv548 = r_PARSE_EXPR();
return rv548; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_CASE(void) { RT_B_TICK(); 
R17 * l_S_549; memset(&l_S_549, 0, sizeof l_S_549);
l_S_549 = r_NEW_NODE(g_N_CASE, r_LINE_NOW());
R17 * l_HEAD_550; memset(&l_HEAD_550, 0, sizeof l_HEAD_550);
l_HEAD_550 = NULL;
R17 * l_TAIL_551; memset(&l_TAIL_551, 0, sizeof l_TAIL_551);
l_TAIL_551 = NULL;
r_EXPECT(rt_str("SELECT", 6));
((*(R17 *)rt_nil_check(l_S_549))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("FROM", 4));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end552;
{
if (r_ACCEPT(rt_str("ELSE", 4)))
{
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_S_549))).f_C = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R17 *)rt_nil_check(l_S_549))).f_D = r_PARSE_HANDLERS();
}
}
else
{
{
R17 * l_ARM_553; memset(&l_ARM_553, 0, sizeof l_ARM_553);
l_ARM_553 = r_NEW_NODE(g_N_ARM, r_LINE_NOW());
R17 * l_LH_554; memset(&l_LH_554, 0, sizeof l_LH_554);
l_LH_554 = NULL;
R17 * l_LT_555; memset(&l_LT_555, 0, sizeof l_LT_555);
l_LT_555 = NULL;
for (;;) {
{
r_ADD_LIST(r_PARSE_CASE_LABEL(), &l_LH_554, &l_LT_555);
}
RT_B_TICK();
if ((!r_ACCEPT(rt_str(",", 1)))) goto L_end556;
} L_end556: ;
r_EXPECT(rt_str("-->", 3));
((*(R17 *)rt_nil_check(l_ARM_553))).f_A = l_LH_554;
((*(R17 *)rt_nil_check(l_ARM_553))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str(";", 1));
if (r_IS(rt_str("EXCEPT", 6)))
{
((*(R17 *)rt_nil_check(l_ARM_553))).f_C = r_PARSE_HANDLERS();
}
r_ADD_LIST(l_ARM_553, &l_HEAD_550, &l_TAIL_551);
}
}
}
RT_B_TICK();
} L_end552: ;
((*(R17 *)rt_nil_check(l_S_549))).f_B = l_HEAD_550;
r_EXPECT_END(rt_str("SELECT", 6));
{ R17 * rv557 = l_S_549;
return rv557; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_LOOP(void) { RT_B_TICK(); 
R17 * l_S_558; memset(&l_S_558, 0, sizeof l_S_558);
l_S_558 = r_NEW_NODE(g_N_LOOP, r_LINE_NOW());
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("FOR", 3)))
{
((*(R17 *)rt_nil_check(l_S_558))).f_KIND = g_N_FOR;
if (r_IS_KIND(g_K_ID))
{
S_R9(&((*(R17 *)rt_nil_check(l_S_558))).f_NAME, r_IDENT(), 0);
r_EXPECT(rt_str("IN", 2));
}
((*(R17 *)rt_nil_check(l_S_558))).f_A = r_PARSE_RANGE();
r_EXPECT(rt_str("DO", 2));
((*(R17 *)rt_nil_check(l_S_558))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_IS_KIND(g_K_ID))
{
if ((!r_TEQ(r_IDENT(), ((*(R17 *)rt_nil_check(l_S_558))).f_NAME)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier", 38));
}
}
else if (((((*(R17 *)rt_nil_check(l_S_558))).f_NAME).f_LEN > ((rt_int)0LL)))
{
r_FAIL(r_LINE_NOW(), rt_str("END LOOP must name the loop identifier (4.5.6.3)", 48));
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R17 * rv559 = l_S_558;
return rv559; }
}
if (r_ACCEPT(rt_str("UNTIL", 5)))
{
((*(R17 *)rt_nil_check(l_S_558))).f_A = r_PARSE_EXPR();
r_EXPECT(rt_str("DO", 2));
}
((*(R17 *)rt_nil_check(l_S_558))).f_B = r_PARSE_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("LOOP", 4));
if (r_ACCEPT(rt_str("WHEN", 4)))
{
if ((!(((*(R17 *)rt_nil_check(l_S_558))).f_A == NULL)))
{
r_FAIL(r_LINE_NOW(), rt_str("only one of UNTIL and WHEN (4.5.6.1)", 36));
}
((*(R17 *)rt_nil_check(l_S_558))).f_C = r_PARSE_EXPR();
}
if ((!r_IS(rt_str("EXCEPT", 6))))
{
r_EXPECT(rt_str(";", 1));
}
{ R17 * rv560 = l_S_558;
return rv560; }
rt_raise(RT_X_INIT);
}
static R17 * r_PARSE_PAR(void) { RT_B_TICK(); 
R17 * l_S_561; memset(&l_S_561, 0, sizeof l_S_561);
l_S_561 = r_NEW_NODE(g_N_PAR, r_LINE_NOW());
R17 * l_HEAD_562; memset(&l_HEAD_562, 0, sizeof l_HEAD_562);
l_HEAD_562 = NULL;
R17 * l_TAIL_563; memset(&l_TAIL_563, 0, sizeof l_TAIL_563);
l_TAIL_563 = NULL;
r_EXPECT(rt_str("PAR_BLOCK", 9));
for (;;) {
if (r_IS(rt_str("END", 3))) goto L_end564;
{
{
R17 * l_P_565; memset(&l_P_565, 0, sizeof l_P_565);
l_P_565 = r_NEW_NODE(g_N_PATH, r_LINE_NOW());
R17 * l_H_566; memset(&l_H_566, 0, sizeof l_H_566);
l_H_566 = r_NEW_NODE(g_N_HDR, r_LINE_NOW());
r_EXPECT(rt_str("PATH", 4));
S_R9(&((*(R17 *)rt_nil_check(l_P_565))).f_NAME, r_IDENT(), 0);
((*(R17 *)rt_nil_check(l_P_565))).f_E = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_P_565))).f_LINE);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_565))).f_E))).f_A = l_H_566;
if (r_ACCEPT(rt_str("FOR", 3)))
{
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_565))).f_E))).f_NAME, r_IDENT(), 0);
((*(R17 *)rt_nil_check(l_P_565))).f_FL = ((rt_int)1LL);
r_EXPECT(rt_str("IN", 2));
((*(R17 *)rt_nil_check(l_P_565))).f_A = r_PARSE_RANGE();
}
for (;;) {
{
if (r_ACCEPT(rt_str("PRIORITY", 8)))
{
((*(R17 *)rt_nil_check(l_P_565))).f_C = r_PARSE_EXPR();
}
else if (r_ACCEPT(rt_str("CONNECT", 7)))
{
r_EXPECT(rt_str("(", 1));
((*(R17 *)rt_nil_check(l_P_565))).f_D = r_PARSE_EXPR();
r_EXPECT(rt_str(")", 1));
}
else if (r_ACCEPT(rt_str("SIGNALS", 7)))
{
((*(R17 *)rt_nil_check(l_H_566))).f_A = r_PAREN_IDENTS();
}
else if (r_ACCEPT(rt_str("IMPORTS", 7)))
{
((*(R17 *)rt_nil_check(l_H_566))).f_B = r_PARSE_ITEMS();
}
else
{
goto L_end567;
}
}
RT_B_TICK();
} L_end567: ;
if ((!(((*(R17 *)rt_nil_check(l_P_565))).f_D == NULL)))
{
r_CONNECT_KNOWN(((*(R17 *)rt_nil_check(l_P_565))).f_D, l_H_566);
}
r_EXPECT(rt_str(";", 1));
((*(R17 *)rt_nil_check(l_P_565))).f_B = r_PARSE_CLOSED_BODY();
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PATH", 4));
r_EXPECT_NAME(((*(R17 *)rt_nil_check(l_P_565))).f_NAME);
r_EXPECT(rt_str(";", 1));
r_ADD_LIST(l_P_565, &l_HEAD_562, &l_TAIL_563);
}
}
RT_B_TICK();
} L_end564: ;
((*(R17 *)rt_nil_check(l_S_561))).f_A = l_HEAD_562;
r_EXPECT(rt_str("END", 3));
r_EXPECT(rt_str("PAR_BLOCK", 9));
r_EXPECT(rt_str(";", 1));
{ R17 * rv568 = l_S_561;
return rv568; }
rt_raise(RT_X_INIT);
}
static void r_CONNECT_KNOWN(R17 * p_E, R17 * p_H) { RT_B_TICK(); 
R17 * l_R_569; memset(&l_R_569, 0, sizeof l_R_569);
l_R_569 = p_E;
for (;;) {
if (((((*(R17 *)rt_nil_check(l_R_569))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_569))).f_KIND == g_N_APPLY))) goto L_end570;
{
if (((!(((*(R17 *)rt_nil_check(l_R_569))).f_KIND == g_N_INDEX)) && (!(((*(R17 *)rt_nil_check(l_R_569))).f_KIND == g_N_FIELD))))
{
return;
}
l_R_569 = ((*(R17 *)rt_nil_check(l_R_569))).f_A;
}
RT_B_TICK();
} L_end570: ;
if ((((*(R17 *)rt_nil_check(p_H))).f_B == NULL))
{
((*(R17 *)rt_nil_check(p_H))).f_B = r_NEW_NODE(g_N_ITEMS, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
{
R17 * l_P_571; memset(&l_P_571, 0, sizeof l_P_571);
l_P_571 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_H))).f_B))).f_A;
for (;;) {
if ((l_P_571 == NULL)) goto L_end572;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_571))).f_NAME, ((*(R17 *)rt_nil_check(l_R_569))).f_NAME))
{
return;
}
l_P_571 = ((*(R17 *)rt_nil_check(l_P_571))).f_NEXT;
}
RT_B_TICK();
} L_end572: ;
l_P_571 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_H))).f_B))).f_B;
for (;;) {
if ((l_P_571 == NULL)) goto L_end573;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_571))).f_NAME, ((*(R17 *)rt_nil_check(l_R_569))).f_NAME))
{
return;
}
l_P_571 = ((*(R17 *)rt_nil_check(l_P_571))).f_NEXT;
}
RT_B_TICK();
} L_end573: ;
}
{
R17 * l_N_574; memset(&l_N_574, 0, sizeof l_N_574);
l_N_574 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_574))).f_NAME, ((*(R17 *)rt_nil_check(l_R_569))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_574))).f_NEXT = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_H))).f_B))).f_B;
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_H))).f_B))).f_B = l_N_574;
}
}
static R9 r_NO_TEXT(void) { RT_B_TICK(); 
{ R9 rv575 = ({ R9 rc576; memset(&rc576, 0, sizeof rc576);  rc576.f_AT = ((rt_int)0LL); rc576.f_LEN = ((rt_int)0LL); rc576.f_H = ((rt_int)0LL); rc576; });
return rv575; }
rt_raise(RT_X_INIT);
}
static R25 r_NO_MVAL(void) { RT_B_TICK(); 
{ R25 rv577 = ({ R25 rc578; memset(&rc578, 0, sizeof rc578);  rc578.f_OK = 0; rc578.f_V = ((rt_int)0LL); rc578; });
return rv577; }
rt_raise(RT_X_INIT);
}
static R25 r_SOME(rt_int p_V) { RT_B_TICK(); 
{ R25 rv579 = ({ R25 rc580; memset(&rc580, 0, sizeof rc580);  rc580.f_OK = 1; rc580.f_V = p_V; rc580; });
return rv579; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_SYM(rt_int p_KIND, R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_581; memset(&l_Y_581, 0, sizeof l_Y_581);
l_Y_581 = ({ R12 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
rt_int l_LEVEL_582; memset(&l_LEVEL_582, 0, sizeof l_LEVEL_582);
l_LEVEL_582 = ((rt_int)0LL);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_CS == NULL)))
{
l_LEVEL_582 = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
}
S_R12(&(*(R12 *)rt_nil_check(l_Y_581)), ({ R12 rc583; memset(&rc583, 0, sizeof rc583);  rc583.f_KIND = p_KIND; rc583.f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH; rc583.f_LEVEL = l_LEVEL_582; S_R9(&rc583.f_NAME, p_NAME, 0); rc583.f_T = NULL; S_R9(&rc583.f_ACCESS, r_NO_TEXT(), 0); S_R9(&rc583.f_FIELD, r_NO_TEXT(), 0); rc583.f_INPUT = 0; rc583.f_BYREF = 0; rc583.f_HASMV = 0; rc583.f_MV = ((rt_int)0LL); rc583.f_TS = NULL; rc583.f_BUSY = 0; S_R9(&rc583.f_FWD, r_NO_TEXT(), 0); rc583.f_PARAMS = NULL; rc583.f_RESULT = NULL; rc583.f_DECL = NULL; S_R9(&rc583.f_PREFIX, r_NO_TEXT(), 0); rc583.f_MODL = ((*(R7 *)rt_nil_check(g_W))).f_MODL; rc583.f_EXPORTED = 0; rc583.f_GENERIC = 0; rc583.f_FRAMED = 0; rc583.f_USES = NULL; rc583.f_INSTANCES = NULL; rc583.f_BINDINGS = NULL; rc583.f_ORIG = NULL; rc583.f_MEMBERS = NULL; rc583.f_SAVED = NULL; rc583.f_OWNER = r_CUR_OWNER(); rc583.f_WITHV = ((rt_int)0LL); rc583.f_LAZY = ((rt_int)0LL); rc583.f_LINKAGE = ((rt_int)0LL); rc583.f_SEGM = NULL; rc583.f_HOME = ((*(R7 *)rt_nil_check(g_W))).f_TRSEG; rc583.f_CHAIN = NULL; rc583.f_SNEXT = NULL; rc583; }), 0);
{ R12 * rv584 = l_Y_581;
return rv584; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_OWNER(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_IS == NULL))
{
{ rt_int rv585 = ((rt_int)0LL);
return rv585; }
}
{ rt_int rv586 = ((*(R20 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_ID;
return rv586; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIGINAL(R12 * p_Y) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)))
{
{ R12 * rv587 = ((*(R12 *)rt_nil_check(p_Y))).f_ORIG;
return rv587; }
}
{ R12 * rv588 = p_Y;
return rv588; }
rt_raise(RT_X_INIT);
}
static rt_int r_BUCKET(R9 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_H < ((rt_int)0LL)))
{
{ rt_int rv589 = r_HASH_OF(r_STR(p_NAME, (p_NAME).f_LEN));
return rv589; }
}
{ rt_int rv590 = (p_NAME).f_H;
return rv590; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_591; memset(&l_Y_591, 0, sizeof l_Y_591);
l_Y_591 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(r_BUCKET(p_NAME), (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
for (;;) {
if ((l_Y_591 == NULL)) goto L_end592;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_591))).f_NAME, p_NAME))
{
{ R12 * rv593 = l_Y_591;
return rv593; }
}
l_Y_591 = ((*(R12 *)rt_nil_check(l_Y_591))).f_CHAIN;
}
RT_B_TICK();
} L_end592: ;
{ R12 * rv594 = NULL;
return rv594; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_595; memset(&l_Y_595, 0, sizeof l_Y_595);
l_Y_595 = r_LOOKUP(p_NAME);
if ((l_Y_595 == NULL))
{
{ R12 * rv596 = NULL;
return rv596; }
}
{ R12 * rv597 = r_ORIGINAL(l_Y_595);
return rv597; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUPS(rstr p_NAME) { RT_B_TICK(); 
{ R12 * rv598 = r_LOOKUP(r_MKN(p_NAME));
return rv598; }
rt_raise(RT_X_INIT);
}
static R12 * r_LOOKUP_NEXT(R12 * p_Y) { RT_B_TICK(); 
R12 * l_Z_599; memset(&l_Z_599, 0, sizeof l_Z_599);
l_Z_599 = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
for (;;) {
if ((l_Z_599 == NULL)) goto L_end600;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Z_599))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ R12 * rv601 = l_Z_599;
return rv601; }
}
l_Z_599 = ((*(R12 *)rt_nil_check(l_Z_599))).f_CHAIN;
}
RT_B_TICK();
} L_end600: ;
{ R12 * rv602 = NULL;
return rv602; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUTINE(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv603 = ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_BUILTIN));
return rv603; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_B_604; memset(&l_B_604, 0, sizeof l_B_604);
l_B_604 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_OLD_605; memset(&l_OLD_605, 0, sizeof l_OLD_605);
l_OLD_605 = r_LOOKUP(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
for (;;) {
if ((l_OLD_605 == NULL)) goto L_end606;
{
if ((!(((*(R12 *)rt_nil_check(l_OLD_605))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
goto L_end606;
}
if ((!((((r_IS_ROUTINE(l_OLD_605) && r_IS_ROUTINE(p_Y))) || (((((*(R12 *)rt_nil_check(l_OLD_605))).f_KIND == g_Y_ENUMLIT) && (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)))))))
{
r_FAILT(p_LINE, rt_str("redeclared in the same scope: ", 30), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
}
l_OLD_605 = r_LOOKUP_NEXT(l_OLD_605);
}
RT_B_TICK();
} L_end606: ;
((*(R12 *)rt_nil_check(p_Y))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_Y))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_604, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_604, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_Y;
((*(R12 *)rt_nil_check(p_Y))).f_SNEXT = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = p_Y;
}
static void r_OPEN_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_add(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
}
static void r_CLOSE_SCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == NULL)) goto L_end607;
{
if ((((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH <= ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end607;
}
r_UNLINK(((*(R7 *)rt_nil_check(g_W))).f_SCOPE);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_SNEXT;
}
RT_B_TICK();
} L_end607: ;
}
static void r_UNLINK(R12 * p_Y) { RT_B_TICK(); 
rt_int l_B_608; memset(&l_B_608, 0, sizeof l_B_608);
l_B_608 = r_BUCKET(((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R12 * l_P_609; memset(&l_P_609, 0, sizeof l_P_609);
l_P_609 = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_608, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
if ((l_P_609 == p_Y))
{
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_608, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
for (;;) {
if ((l_P_609 == NULL)) goto L_end610;
{
if ((((*(R12 *)rt_nil_check(l_P_609))).f_CHAIN == p_Y))
{
((*(R12 *)rt_nil_check(l_P_609))).f_CHAIN = ((*(R12 *)rt_nil_check(p_Y))).f_CHAIN;
return;
}
l_P_609 = ((*(R12 *)rt_nil_check(l_P_609))).f_CHAIN;
}
RT_B_TICK();
} L_end610: ;
}
static R12 * r_TAKE_SCOPE(R12 * p_MARK) { RT_B_TICK(); 
R12 * l_HEAD_611; memset(&l_HEAD_611, 0, sizeof l_HEAD_611);
l_HEAD_611 = NULL;
for (;;) {
if ((((*(R7 *)rt_nil_check(g_W))).f_SCOPE == p_MARK)) goto L_end612;
{
{
R12 * l_Y_613; memset(&l_Y_613, 0, sizeof l_Y_613);
l_Y_613 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_UNLINK(l_Y_613);
((*(R7 *)rt_nil_check(g_W))).f_SCOPE = ((*(R12 *)rt_nil_check(l_Y_613))).f_SNEXT;
((*(R12 *)rt_nil_check(l_Y_613))).f_SNEXT = l_HEAD_611;
l_HEAD_611 = l_Y_613;
}
}
RT_B_TICK();
} L_end612: ;
{ R12 * rv614 = l_HEAD_611;
return rv614; }
rt_raise(RT_X_INIT);
}
static R22 * r_NEW_TYP(rt_int p_KIND) { RT_B_TICK(); 
R22 * l_T_615; memset(&l_T_615, 0, sizeof l_T_615);
l_T_615 = ({ R22 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R22(&(*(R22 *)rt_nil_check(l_T_615)), ({ R22 rc616; memset(&rc616, 0, sizeof rc616);  rc616.f_KIND = p_KIND; rc616.f_SCALE = ((rt_int)0LL); S_R9(&rc616.f_LO_C, r_NO_TEXT(), 0); S_R9(&rc616.f_HI_C, r_NO_TEXT(), 0); S_R25(&rc616.f_MLO, r_NO_MVAL(), 0); S_R25(&rc616.f_MHI, r_NO_MVAL(), 0); rc616.f_RLEVEL = ((rt_int)0LL); S_R9(&rc616.f_LEN_C, r_NO_TEXT(), 0); S_R25(&rc616.f_MLEN, r_NO_MVAL(), 0); S_R9(&rc616.f_GEN, r_NO_TEXT(), 0); rc616.f_BASE = NULL; rc616.f_ELEM = NULL; rc616.f_TARGET = NULL; rc616.f_TARGET_TS = NULL; rc616.f_FIELDS = NULL; rc616.f_LITS = NULL; rc616.f_NLITS = ((rt_int)0LL); rc616.f_UNORDERED = 0; rc616.f_BOUNDS = NULL; rc616.f_DIMS = ((rt_int)0LL); rc616.f_ARGS = NULL; S_R9(&rc616.f_NAME, r_NO_TEXT(), 0); S_R9(&rc616.f_CNAME, r_NO_TEXT(), 0); rc616.f_MODL = NULL; rc616.f_REPS = NULL; rc616.f_DECL = NULL; S_R9(&rc616.f_GENP, r_NO_TEXT(), 0); rc616.f_RADIX = ((rt_int)2LL); rc616.f_PREC = ((rt_int)0LL); rc616.f_ROPEN = ((rt_int)0LL); rc616; }), 0);
{ R22 * rv617 = l_T_615;
return rv617; }
rt_raise(RT_X_INIT);
}
static R22 * r_COPY_TYP(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_618; memset(&l_C_618, 0, sizeof l_C_618);
l_C_618 = ({ R22 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R22(&(*(R22 *)rt_nil_check(l_C_618)), (*(R22 *)rt_nil_check(p_T)), 0);
{ R22 * rv619 = l_C_618;
return rv619; }
rt_raise(RT_X_INIT);
}
static void r_PREDEF_TYPE(rstr p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_620; memset(&l_Y_620, 0, sizeof l_Y_620);
l_Y_620 = r_NEW_SYM(g_Y_TYPE, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_620))).f_T = p_T;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_620))).f_NAME, 0);
}
r_DEFINE(l_Y_620, ((rt_int)0LL));
}
static void r_PREDEF_BUILTIN(rstr p_NAME) { RT_B_TICK(); 
r_DEFINE(r_NEW_SYM(g_Y_BUILTIN, r_MKN(p_NAME)), ((rt_int)0LL));
}
static void r_PREDEF_CONST(rstr p_NAME, R22 * p_T, rt_int p_V) { RT_B_TICK(); 
R12 * l_Y_621; memset(&l_Y_621, 0, sizeof l_Y_621);
l_Y_621 = r_NEW_SYM(g_Y_CONST, r_MKN(p_NAME));
((*(R12 *)rt_nil_check(l_Y_621))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_621))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_621))).f_MV = p_V;
((*(R12 *)rt_nil_check(l_Y_621))).f_INPUT = 1;
S_R9(&((*(R12 *)rt_nil_check(l_Y_621))).f_ACCESS, r_FMT1(rt_str("((rt_int)@)", 11), r_NUM(p_V)), 0);
r_DEFINE(l_Y_621, ((rt_int)0LL));
}
static R22 * r_PREDEF_ENUM(rstr p_NAME, rstr p_NAMES, rt_int p_UNORDERED) { RT_B_TICK(); 
R17 * l_HEAD_622; memset(&l_HEAD_622, 0, sizeof l_HEAD_622);
l_HEAD_622 = NULL;
R17 * l_TAIL_623; memset(&l_TAIL_623, 0, sizeof l_TAIL_623);
l_TAIL_623 = NULL;
rt_int l_START_624; memset(&l_START_624, 0, sizeof l_START_624);
l_START_624 = ((rt_int)0LL);
{ rt_int it626_lo = ((rt_int)0LL), it626_hi = (rt_int)(p_NAMES).len;
for (rt_int it626 = it626_lo; it626 <= it626_hi; it626++) {
{
if (((it626 == (rt_int)(p_NAMES).len) || rt_b_eq(rt_b_slice(p_NAMES, it626, it626), rt_str(" ", 1))))
{
if ((it626 > l_START_624))
{
{
R17 * l_N_627; memset(&l_N_627, 0, sizeof l_N_627);
l_N_627 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_627))).f_NAME, r_MKN(rt_b_slice(p_NAMES, l_START_624, rt_sub(it626, ((rt_int)1LL)))), 0);
r_ADD_LIST(l_N_627, &l_HEAD_622, &l_TAIL_623);
}
}
l_START_624 = rt_add(it626, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it626 == it626_hi) break;
} } L_end625: ;
{
R22 * l_T_628; memset(&l_T_628, 0, sizeof l_T_628);
l_T_628 = r_ENUM_CLASS(l_HEAD_622, p_UNORDERED, ((rt_int)0LL));
r_PREDEF_TYPE(p_NAME, l_T_628);
{ R22 * rv629 = l_T_628;
return rv629; }
}
rt_raise(RT_X_INIT);
}
static void r_PREDEFINE(void) { RT_B_TICK(); 
R22 * l_T_630; memset(&l_T_630, 0, sizeof l_T_630);
R17 * l_ASCII_LITS_631; memset(&l_ASCII_LITS_631, 0, sizeof l_ASCII_LITS_631);
l_ASCII_LITS_631 = NULL;
R17 * l_TAIL_632; memset(&l_TAIL_632, 0, sizeof l_TAIL_632);
l_TAIL_632 = NULL;
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
{ rt_int it634_lo = ((rt_int)0LL), it634_hi = ((rt_int)127LL);
for (rt_int it634 = it634_lo; it634 <= it634_hi; it634++) {
{
{
R17 * l_N_635; memset(&l_N_635, 0, sizeof l_N_635);
l_N_635 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_635))).f_NAME, r_ASCII_NAME(it634), 0);
r_ADD_LIST(l_N_635, &l_ASCII_LITS_631, &l_TAIL_632);
}
}
RT_B_TICK();
if (it634 == it634_hi) break;
} } L_end633: ;
((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII = r_ENUM_CLASS(l_ASCII_LITS_631, 0, ((rt_int)0LL));
r_PREDEF_TYPE(rt_str("ASCII", 5), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII);
((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS = r_PREDEF_ENUM(rt_str("ROUNDINGS", 9), rt_str("ROUNDED TRUNCATED NATIVE_R NATIVE_T", 35), 0);
l_T_630 = r_PREDEF_ENUM(rt_str("FIXED_PRECISIONS", 16), rt_str("STD", 3), 0);
r_PREDEF_BOUNDS_DEF();
l_T_630 = r_PREDEF_ENUM(rt_str("SIGNING", 7), rt_str("SIGNED UNSIGNED", 15), 1);
l_T_630 = r_PREDEF_ENUM(rt_str("PACKING", 7), rt_str("DENSE PACKED UNPACKED", 21), 1);
l_T_630 = r_PREDEF_ENUM(rt_str("USAGE", 5), rt_str("SYNCH REGION", 12), 1);
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
rstr l_OPS_636; memset(&l_OPS_636, 0, sizeof l_OPS_636);
l_OPS_636 = rt_b_str_new(((rt_int)271LL), 0);
rt_b_assign(&l_OPS_636, rt_str(" ADD_ SUBTRACT_ MULTIPLY_ DIVIDE_ MODULUS_ EXPONENTIATE_ CONCATENATE_ EQUAL_ UNEQUAL_ GREATER_THAN_ LESS_THAN_ GREATER_EQUAL_ LESS_EQUAL_ AND_ OR_ XOR_ IMPLIES_ MD_ADD_ MD_SUBTRACT_ MD_MULTIPLY_ MD_DIVIDE_ NEGATE_ MON_PLUS_ COMPLEMENT_ STORE_ SUBSTRING_ SUBSTRING_STORE_ ", 271));
rt_int l_START_637; memset(&l_START_637, 0, sizeof l_START_637);
l_START_637 = ((rt_int)1LL);
{ rt_int it639_lo = ((rt_int)1LL), it639_hi = ((rt_int)270LL);
for (rt_int it639 = it639_lo; it639 <= it639_hi; it639++) {
{
if (rt_b_eq(rt_b_slice(l_OPS_636, it639, it639), rt_str(" ", 1)))
{
if ((it639 > l_START_637))
{
r_PREDEF_BUILTIN(rt_b_slice(l_OPS_636, l_START_637, rt_sub(it639, ((rt_int)1LL))));
}
l_START_637 = rt_add(it639, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it639 == it639_hi) break;
} } L_end638: ;
}
r_PREDEF_CONST(rt_str("MAX_NOM_PREC", 12), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)15LL));
r_PREDEF_CONST(rt_str("CLOCK_SCALE", 11), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT, ((rt_int)20LL));
r_OPEN_SCOPE();
}
static void r_PREDEF_BOUNDS_DEF(void) { RT_B_TICK(); 
R17 * l_F_640; memset(&l_F_640, 0, sizeof l_F_640);
l_F_640 = r_NEW_NODE(g_N_FORMAL, ((rt_int)0LL));
R17 * l_V_641; memset(&l_V_641, 0, sizeof l_V_641);
l_V_641 = r_NEW_NODE(g_N_VAR, ((rt_int)0LL));
R17 * l_R_642; memset(&l_R_642, 0, sizeof l_R_642);
l_R_642 = r_NEW_NODE(g_TS_RECORD, ((rt_int)0LL));
R17 * l_D_643; memset(&l_D_643, 0, sizeof l_D_643);
l_D_643 = r_NEW_NODE(g_N_TYPE, ((rt_int)0LL));
R17 * l_FX_644; memset(&l_FX_644, 0, sizeof l_FX_644);
l_FX_644 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
R12 * l_Y_645; memset(&l_Y_645, 0, sizeof l_Y_645);
l_Y_645 = r_NEW_SYM(g_Y_TYPE, r_MKN(rt_str("BOUNDS_DEF", 10)));
((*(R17 *)rt_nil_check(l_F_640))).f_A = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_F_640))).f_A))).f_NAME, r_MKN(rt_str("MAX_P", 5)), 0);
((*(R17 *)rt_nil_check(l_F_640))).f_B = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_F_640))).f_B))).f_NAME, r_MKN(rt_str("FIXED_PRECISIONS", 16)), 0);
S_R9(&((*(R17 *)rt_nil_check(l_FX_644))).f_NAME, r_MKN(rt_str("FIXED", 5)), 0);
((*(R17 *)rt_nil_check(l_FX_644))).f_A = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_FX_644))).f_A))).f_NEXT = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_FX_644))).f_A))).f_NEXT))).f_IV = ((rt_int)2LL);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_FX_644))).f_A))).f_NEXT))).f_NEXT = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_FX_644))).f_A))).f_NEXT))).f_NEXT))).f_NAME, r_MKN(rt_str("MAX_P", 5)), 0);
((*(R17 *)rt_nil_check(l_V_641))).f_A = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_641))).f_A))).f_NAME, r_MKN(rt_str("MIN", 3)), 0);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_641))).f_A))).f_NEXT = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_641))).f_A))).f_NEXT))).f_NAME, r_MKN(rt_str("MAX", 3)), 0);
((*(R17 *)rt_nil_check(l_V_641))).f_B = l_FX_644;
((*(R17 *)rt_nil_check(l_R_642))).f_A = l_V_641;
S_R9(&((*(R17 *)rt_nil_check(l_D_643))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_645))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_D_643))).f_A = l_F_640;
((*(R17 *)rt_nil_check(l_D_643))).f_B = l_R_642;
((*(R12 *)rt_nil_check(l_Y_645))).f_DECL = l_D_643;
r_DEFINE(l_Y_645, ((rt_int)0LL));
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
rstr l_CONTROLS_646; memset(&l_CONTROLS_646, 0, sizeof l_CONTROLS_646);
l_CONTROLS_646 = rt_b_str_new(((rt_int)128LL), 0);
rt_b_assign(&l_CONTROLS_646, rt_str(" NUL SOH STX EXT EOT ENQ ACK BEL BS  HT  LF  VT  FF  CR  SO  SI  DLE DC1 DC2 DC3 DC4 NAK SYN ETB CAN EM  SUB ESC FS  GS  RS  US ", 128));
if ((p_C < ((rt_int)32LL)))
{
if (rt_b_eq(rt_b_slice(l_CONTROLS_646, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL))), rt_str(" ", 1)))
{
{ R9 rv647 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_646, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)2LL)))));
return rv647; }
}
{ R9 rv648 = r_MKN(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_CONTROLS_646, rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)1LL)), rt_add(rt_mul(p_C, ((rt_int)4LL)), ((rt_int)3LL)))));
return rv648; }
}
else if ((p_C == ((rt_int)39LL)))
{
{ R9 rv649 = r_MKN(rt_str("\\''''", 5));
return rv649; }
}
else if ((p_C < ((rt_int)96LL)))
{
{ R9 rv650 = r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), r_CHAR_OF(p_C)), rt_str("'", 1)));
return rv650; }
}
else if ((p_C == ((rt_int)96LL)))
{
{ R9 rv651 = r_MKN(rt_str("\\ACCENT", 7));
return rv651; }
}
else if ((p_C <= ((rt_int)122LL)))
{
{ R9 rv652 = r_MKN(rt_b_cat(rt_str("\\", 1), r_CHAR_OF(rt_sub(p_C, ((rt_int)32LL)))));
return rv652; }
}
else if ((p_C == ((rt_int)123LL)))
{
{ R9 rv653 = r_MKN(rt_str("\\[", 2));
return rv653; }
}
else if ((p_C == ((rt_int)124LL)))
{
{ R9 rv654 = r_MKN(rt_str("\\BAR", 4));
return rv654; }
}
else if ((p_C == ((rt_int)125LL)))
{
{ R9 rv655 = r_MKN(rt_str("\\]", 2));
return rv655; }
}
else if ((p_C == ((rt_int)126LL)))
{
{ R9 rv656 = r_MKN(rt_str("\\TILDE", 6));
return rv656; }
}
{ R9 rv657 = r_MKN(rt_str("\\DEL", 4));
return rv657; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_SCALAR(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv658 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_BOOL)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv658; }
rt_raise(RT_X_INIT);
}
static R22 * r_REAL_TYPE(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{ R22 * rv659 = r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv659; }
}
{ R22 * rv660 = p_T;
return rv660; }
rt_raise(RT_X_INIT);
}
static R9 r_TYPE_NAME(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_661; memset(&l_K_661, 0, sizeof l_K_661);
l_K_661 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (((((*(R22 *)rt_nil_check(p_T))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{ R9 rv662 = ((*(R22 *)rt_nil_check(p_T))).f_NAME;
return rv662; }
}
else if ((l_K_661 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL)))
{
{ R9 rv663 = r_MK(rt_str("INTEGER", 7));
return rv663; }
}
{ R9 rv664 = r_FMT1(rt_str("FIXED (@, 2, STD)", 17), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv664; }
}
else if ((l_K_661 == g_T_XFIX))
{
{ R9 rv665 = r_CAT(r_FMT3(rt_str("FIXED (@, @, @", 14), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_RADIX), r_PRECISION_NAME(((*(R22 *)rt_nil_check(p_T))).f_PREC)), r_MK(rt_str(")", 1)));
return rv665; }
}
else if ((l_K_661 == g_T_BOOL))
{
{ R9 rv666 = r_MK(rt_str("BOOLEAN", 7));
return rv666; }
}
else if ((l_K_661 == g_T_ENUM))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R9 rv667 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv667; }
}
{ R9 rv668 = r_MK(rt_str("an enumerated type", 18));
return rv668; }
}
else if ((l_K_661 == g_T_STR))
{
{ R9 rv669 = r_MK(rt_str("CHAR_STR", 8));
return rv669; }
}
else if ((l_K_661 == g_T_BITS))
{
{ R9 rv670 = r_MK(rt_str("BIT", 3));
return rv670; }
}
else if ((l_K_661 == g_T_FLOAT))
{
{ R9 rv671 = r_FMT1(rt_str("FLOAT (@)", 9), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv671; }
}
else if ((l_K_661 == g_T_ARR))
{
{ R9 rv672 = r_FMT1(rt_str("ARRAY OF @", 10), r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_ELEM));
return rv672; }
}
else if ((l_K_661 == g_T_REC))
{
if (((!(((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_BASE == p_T))))
{
{ R9 rv673 = r_TYPE_NAME(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv673; }
}
{ R9 rv674 = r_MK(rt_str("RECORD", 6));
return rv674; }
}
else if ((l_K_661 == g_T_PTR))
{
{ R9 rv675 = r_MK(rt_str("PTR", 3));
return rv675; }
}
else if ((l_K_661 == g_T_SEM))
{
{ R9 rv676 = r_MK(rt_str("SEMAPHORE", 9));
return rv676; }
}
else if ((l_K_661 == g_T_NIL))
{
{ R9 rv677 = r_MK(rt_str("NIL", 3));
return rv677; }
}
else if ((l_K_661 == g_T_VOID))
{
{ R9 rv678 = r_MK(rt_str("no value", 8));
return rv678; }
}
{ R9 rv679 = r_MK(rt_str("a type", 6));
return rv679; }
rt_raise(RT_X_INIT);
}
static R9 r_SUBST_SELF(R9 p_T, R9 p_SELF) { RT_B_TICK(); 
rstr l_S_680; memset(&l_S_680, 0, sizeof l_S_680);
l_S_680 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_680, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_681; memset(&l_AT_681, 0, sizeof l_AT_681);
l_AT_681 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
rt_int l_START_682; memset(&l_START_682, 0, sizeof l_START_682);
l_START_682 = ((rt_int)0LL);
R9 l_R_683; memset(&l_R_683, 0, sizeof l_R_683);
rt_int l_I_684; memset(&l_I_684, 0, sizeof l_I_684);
l_I_684 = ((rt_int)0LL);
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ R9 rv685 = p_T;
return rv685; }
}
for (;;) {
if ((l_I_684 >= rt_sub((p_T).f_LEN, ((rt_int)1LL)))) goto L_end686;
{
if (rt_b_eq(rt_b_slice(l_S_680, l_I_684, rt_add(l_I_684, ((rt_int)1LL))), rt_str("$S", 2)))
{
S_R9(&l_R_683, r_MK(rt_b_slice(l_S_680, l_START_682, rt_sub(l_I_684, ((rt_int)1LL)))), 0);
S_R9(&l_R_683, r_MK(r_STR(p_SELF, (p_SELF).f_LEN)), 0);
l_I_684 = rt_add(l_I_684, ((rt_int)2LL));
l_START_682 = l_I_684;
}
else
{
l_I_684 = rt_add(l_I_684, ((rt_int)1LL));
}
}
RT_B_TICK();
} L_end686: ;
if ((l_START_682 == ((rt_int)0LL)))
{
((*(R7 *)rt_nil_check(g_W))).f_TOP = l_AT_681;
{ R9 rv687 = p_T;
return rv687; }
}
S_R9(&l_R_683, r_MK(rt_b_slice(l_S_680, l_START_682, rt_sub((p_T).f_LEN, ((rt_int)1LL)))), 0);
{ R9 rv688 = ({ R9 rc689; memset(&rc689, 0, sizeof rc689);  rc689.f_AT = l_AT_681; rc689.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_681); rc689.f_H = rt_neg(((rt_int)1LL)); rc689; });
return rv688; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LITERALS(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_P_690; memset(&l_P_690, 0, sizeof l_P_690);
l_P_690 = p_A;
R17 * l_Q_691; memset(&l_Q_691, 0, sizeof l_Q_691);
l_Q_691 = p_B;
for (;;) {
if (((l_P_690 == NULL) || (l_Q_691 == NULL))) goto L_end692;
{
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_P_690))).f_NAME, ((*(R17 *)rt_nil_check(l_Q_691))).f_NAME)))
{
{ rt_int rv693 = 0;
return rv693; }
}
l_P_690 = ((*(R17 *)rt_nil_check(l_P_690))).f_NEXT;
l_Q_691 = ((*(R17 *)rt_nil_check(l_Q_691))).f_NEXT;
}
RT_B_TICK();
} L_end692: ;
{ rt_int rv694 = ((l_P_690 == NULL) && (l_Q_691 == NULL));
return rv694; }
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_CLASS(R17 * p_LITS, rt_int p_UNORDERED, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_695; memset(&l_Y_695, 0, sizeof l_Y_695);
l_Y_695 = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
R22 * l_T_696; memset(&l_T_696, 0, sizeof l_T_696);
{
R17 * l_P_697; memset(&l_P_697, 0, sizeof l_P_697);
l_P_697 = p_LITS;
for (;;) {
if ((l_P_697 == NULL)) goto L_end698;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_P_697))).f_NEXT, ((*(R17 *)rt_nil_check(l_P_697))).f_NAME))
{
r_FAILT(p_LINE, rt_str("an enumerated literal must be unique in its list (3.4.1): ", 58), ((*(R17 *)rt_nil_check(l_P_697))).f_NAME);
}
l_P_697 = ((*(R17 *)rt_nil_check(l_P_697))).f_NEXT;
}
RT_B_TICK();
} L_end698: ;
}
for (;;) {
if ((l_Y_695 == NULL)) goto L_end699;
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_695))).f_T))).f_UNORDERED == p_UNORDERED) && r_SAME_LITERALS(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_695))).f_T))).f_LITS, p_LITS)))
{
r_DECLARE_LITERALS(((*(R12 *)rt_nil_check(l_Y_695))).f_T, p_LINE);
{ R22 * rv700 = ((*(R12 *)rt_nil_check(l_Y_695))).f_T;
return rv700; }
}
l_Y_695 = ((*(R12 *)rt_nil_check(l_Y_695))).f_INSTANCES;
}
RT_B_TICK();
} L_end699: ;
l_T_696 = r_NEW_TYP(g_T_ENUM);
((*(R22 *)rt_nil_check(l_T_696))).f_BASE = l_T_696;
((*(R22 *)rt_nil_check(l_T_696))).f_LITS = p_LITS;
((*(R22 *)rt_nil_check(l_T_696))).f_NLITS = r_LIST_LENGTH(p_LITS);
((*(R22 *)rt_nil_check(l_T_696))).f_UNORDERED = p_UNORDERED;
S_R9(&((*(R22 *)rt_nil_check(l_T_696))).f_CNAME, r_NEW_NAME(rt_str("E", 1)), 0);
l_Y_695 = r_NEW_SYM(g_Y_TYPE, r_NO_TEXT());
((*(R12 *)rt_nil_check(l_Y_695))).f_T = l_T_696;
((*(R12 *)rt_nil_check(l_Y_695))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ENUMS;
((*(R7 *)rt_nil_check(g_W))).f_ENUMS = l_Y_695;
{
R17 * l_P_701; memset(&l_P_701, 0, sizeof l_P_701);
l_P_701 = p_LITS;
R9 l_NAMES_702; memset(&l_NAMES_702, 0, sizeof l_NAMES_702);
S_R9(&l_NAMES_702, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_P_701 == NULL)) goto L_end703;
{
S_R9(&l_NAMES_702, r_FMT2(rt_str("@@, ", 4), l_NAMES_702, r_CSTRING(((*(R17 *)rt_nil_check(l_P_701))).f_NAME)), 0);
l_P_701 = ((*(R17 *)rt_nil_check(l_P_701))).f_NEXT;
}
RT_B_TICK();
} L_end703: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static const char *@[] = { @0 };", 32), ((*(R22 *)rt_nil_check(l_T_696))).f_CNAME, l_NAMES_702));
}
r_DECLARE_LITERALS(l_T_696, p_LINE);
{ R22 * rv704 = l_T_696;
return rv704; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_LITERALS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_P_705; memset(&l_P_705, 0, sizeof l_P_705);
l_P_705 = ((*(R22 *)rt_nil_check(p_T))).f_LITS;
rt_int l_I_706; memset(&l_I_706, 0, sizeof l_I_706);
l_I_706 = ((rt_int)0LL);
for (;;) {
if ((l_P_705 == NULL)) goto L_end707;
{
if ((r_VISIBLE_LITERAL(((*(R17 *)rt_nil_check(l_P_705))).f_NAME, p_T) == NULL))
{
{
R12 * l_Y_708; memset(&l_Y_708, 0, sizeof l_Y_708);
l_Y_708 = r_NEW_SYM(g_Y_ENUMLIT, ((*(R17 *)rt_nil_check(l_P_705))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_708))).f_T = p_T;
((*(R12 *)rt_nil_check(l_Y_708))).f_MV = l_I_706;
((*(R12 *)rt_nil_check(l_Y_708))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_708))).f_INPUT = 1;
r_DEFINE(l_Y_708, p_LINE);
}
}
l_I_706 = rt_add(l_I_706, ((rt_int)1LL));
l_P_705 = ((*(R17 *)rt_nil_check(l_P_705))).f_NEXT;
}
RT_B_TICK();
} L_end707: ;
}
static R12 * r_FIND_LITERAL(R9 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_V_709; memset(&l_V_709, 0, sizeof l_V_709);
l_V_709 = r_VISIBLE_LITERAL(p_NAME, p_T);
if (((!(l_V_709 == NULL)) || (p_T == NULL)))
{
{ R12 * rv710 = l_V_709;
return rv710; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_BASE == NULL))
{
{ R12 * rv711 = NULL;
return rv711; }
}
{
R17 * l_P_712; memset(&l_P_712, 0, sizeof l_P_712);
l_P_712 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
rt_int l_I_713; memset(&l_I_713, 0, sizeof l_I_713);
l_I_713 = ((rt_int)0LL);
for (;;) {
if ((l_P_712 == NULL)) goto L_end714;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_712))).f_NAME, p_NAME))
{
{
R12 * l_Y_715; memset(&l_Y_715, 0, sizeof l_Y_715);
l_Y_715 = r_NEW_SYM(g_Y_ENUMLIT, p_NAME);
((*(R12 *)rt_nil_check(l_Y_715))).f_T = ((*(R22 *)rt_nil_check(p_T))).f_BASE;
((*(R12 *)rt_nil_check(l_Y_715))).f_MV = l_I_713;
((*(R12 *)rt_nil_check(l_Y_715))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_715))).f_INPUT = 1;
{ R12 * rv716 = l_Y_715;
return rv716; }
}
}
l_I_713 = rt_add(l_I_713, ((rt_int)1LL));
l_P_712 = ((*(R17 *)rt_nil_check(l_P_712))).f_NEXT;
}
RT_B_TICK();
} L_end714: ;
}
{ R12 * rv717 = NULL;
return rv717; }
rt_raise(RT_X_INIT);
}
static R12 * r_VISIBLE_LITERAL(R9 p_NAME, R22 * p_T) { RT_B_TICK(); 
R12 * l_Y_718; memset(&l_Y_718, 0, sizeof l_Y_718);
l_Y_718 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_718 == NULL)) goto L_end719;
{
if ((((*(R12 *)rt_nil_check(l_Y_718))).f_KIND == g_Y_ENUMLIT))
{
if ((p_T == NULL))
{
{ R12 * rv720 = l_Y_718;
return rv720; }
}
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_718))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv721 = l_Y_718;
return rv721; }
}
}
l_Y_718 = r_LOOKUP_NEXT(l_Y_718);
}
RT_B_TICK();
} L_end719: ;
{ R12 * rv722 = NULL;
return rv722; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_CLASSES(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_723; memset(&l_Y_723, 0, sizeof l_Y_723);
l_Y_723 = r_LOOKUP(p_NAME);
rt_int l_N_724; memset(&l_N_724, 0, sizeof l_N_724);
l_N_724 = ((rt_int)0LL);
for (;;) {
if ((l_Y_723 == NULL)) goto L_end725;
{
if ((((*(R12 *)rt_nil_check(l_Y_723))).f_KIND == g_Y_ENUMLIT))
{
l_N_724 = rt_add(l_N_724, ((rt_int)1LL));
}
l_Y_723 = r_LOOKUP_NEXT(l_Y_723);
}
RT_B_TICK();
} L_end725: ;
{ rt_int rv726 = l_N_724;
return rv726; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE(R17 * p_TS) { RT_B_TICK(); 
{ R22 * rv727 = r_RESOLVE_NAMED(p_TS, r_NO_TEXT());
return rv727; }
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
R22 * l_N_728; memset(&l_N_728, 0, sizeof l_N_728);
l_N_728 = r_COPY_TYP(p_T);
R26 l_LO_729; memset(&l_LO_729, 0, sizeof l_LO_729);
S_R26(&l_LO_729, r_EXPR(((*(R17 *)rt_nil_check(p_R))).f_A, p_T), 0);
R26 l_HI_730; memset(&l_HI_730, 0, sizeof l_HI_730);
S_R26(&l_HI_730, r_EXPR(((*(R17 *)rt_nil_check(p_R))).f_B, p_T), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_728))).f_NAME, r_NO_TEXT(), 0);
((*(R22 *)rt_nil_check(l_N_728))).f_RLEVEL = r_CUR_LEVEL();
((*(R22 *)rt_nil_check(l_N_728))).f_ROPEN = ((*(R17 *)rt_nil_check(p_R))).f_IV;
S_R9(&((*(R22 *)rt_nil_check(l_N_728))).f_LO_C, r_XFIX_VALUE(p_T, l_LO_729, ((*(R17 *)rt_nil_check(p_R))).f_LINE), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_728))).f_HI_C, r_XFIX_VALUE(p_T, l_HI_730, ((*(R17 *)rt_nil_check(p_R))).f_LINE), 0);
S_R25(&((*(R22 *)rt_nil_check(l_N_728))).f_MLO, r_NO_MVAL(), 0);
S_R25(&((*(R22 *)rt_nil_check(l_N_728))).f_MHI, r_NO_MVAL(), 0);
if ((r_USER_OPERATOR(r_MKN(rt_str("LESS_THAN_", 10)), r_VAL_ARG(r_MKET(((*(R22 *)rt_nil_check(l_N_728))).f_LO_C, p_T), r_VAL_ARG(r_MKET(((*(R22 *)rt_nil_check(l_N_728))).f_HI_C, p_T), NULL)), ((*(R17 *)rt_nil_check(p_R))).f_LINE) == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_R))).f_LINE, rt_str("a range of this member of FIXED needs the program's LESS_THAN_ (D.4): ", 70), r_TYPE_NAME(p_T));
}
{ R22 * rv731 = l_N_728;
return rv731; }
rt_raise(RT_X_INIT);
}
static R9 r_XFIX_VALUE(R22 * p_T, R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
if (r_SAME_XFIX(p_T, (p_V).f_T))
{
{ R9 rv732 = (p_V).f_C;
return rv732; }
}
{
R9 l_TMP_733; memset(&l_TMP_733, 0, sizeof l_TMP_733);
S_R9(&l_TMP_733, r_NEW_NAME(rt_str("xc", 2)), 0);
{ R9 rv734 = r_FMT3(rt_str("({ rstr @; @ @; })", 18), l_TMP_733, r_STORE_CODE(p_T, l_TMP_733, p_V, p_LINE, r_NO_TEXT()), l_TMP_733);
return rv734; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_XFIX_BASE(R22 * p_T) { RT_B_TICK(); 
R22 * l_N_735; memset(&l_N_735, 0, sizeof l_N_735);
l_N_735 = r_COPY_TYP(r_REAL_TYPE(p_T));
S_R9(&((*(R22 *)rt_nil_check(l_N_735))).f_LO_C, r_NO_TEXT(), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_735))).f_HI_C, r_NO_TEXT(), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_735))).f_NAME, r_NO_TEXT(), 0);
{ R22 * rv736 = l_N_735;
return rv736; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_XFIX(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_737; memset(&l_RA_737, 0, sizeof l_RA_737);
l_RA_737 = r_REAL_TYPE(p_A);
R22 * l_RB_738; memset(&l_RB_738, 0, sizeof l_RB_738);
l_RB_738 = r_REAL_TYPE(p_B);
if (((!(((*(R22 *)rt_nil_check(l_RA_737))).f_KIND == g_T_XFIX)) || (!(((*(R22 *)rt_nil_check(l_RB_738))).f_KIND == g_T_XFIX))))
{
{ rt_int rv739 = 0;
return rv739; }
}
{ rt_int rv740 = (((((*(R22 *)rt_nil_check(l_RA_737))).f_SCALE == ((*(R22 *)rt_nil_check(l_RB_738))).f_SCALE) && (((*(R22 *)rt_nil_check(l_RA_737))).f_RADIX == ((*(R22 *)rt_nil_check(l_RB_738))).f_RADIX)) && (((*(R22 *)rt_nil_check(l_RA_737))).f_PREC == ((*(R22 *)rt_nil_check(l_RB_738))).f_PREC));
return rv740; }
rt_raise(RT_X_INIT);
}
static R22 * r_WITH_RANGE(R22 * p_T, R17 * p_R) { RT_B_TICK(); 
R22 * l_N_741; memset(&l_N_741, 0, sizeof l_N_741);
if ((p_R == NULL))
{
{ R22 * rv742 = p_T;
return rv742; }
}
if ((r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(p_R))).f_A) || r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(p_R))).f_B)))
{
l_N_741 = r_COPY_TYP(p_T);
S_R9(&((*(R22 *)rt_nil_check(l_N_741))).f_NAME, r_NO_TEXT(), 0);
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_741))).f_LO_C, r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NAME), 0);
}
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_B))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_B))).f_NAME).f_LEN > ((rt_int)0LL))))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_741))).f_HI_C, r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_B))).f_NAME), 0);
}
{ R22 * rv743 = l_N_741;
return rv743; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_XFIX))
{
{ R22 * rv744 = r_XFIX_RANGE(p_T, p_R);
return rv744; }
}
if ((!((((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_R))).f_LINE, rt_str("a range is only for fixed, float and enumerated types (3.12.2)", 62));
}
l_N_741 = r_COPY_TYP(p_T);
S_R9(&((*(R22 *)rt_nil_check(l_N_741))).f_NAME, r_NO_TEXT(), 0);
((*(R22 *)rt_nil_check(l_N_741))).f_RLEVEL = r_CUR_LEVEL();
{
R26 l_LO_745; memset(&l_LO_745, 0, sizeof l_LO_745);
R26 l_HI_746; memset(&l_HI_746, 0, sizeof l_HI_746);
S_R26(&l_LO_745, r_EXPR(((*(R17 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R26(&l_HI_746, r_EXPR(((*(R17 *)rt_nil_check(p_R))).f_B, p_T), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_741))).f_LO_C, (l_LO_745).f_C, 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_741))).f_HI_C, (l_HI_746).f_C, 0);
S_R25(&((*(R22 *)rt_nil_check(l_N_741))).f_MLO, r_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_A), 0);
S_R25(&((*(R22 *)rt_nil_check(l_N_741))).f_MHI, r_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_B), 0);
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
S_R25(&((*(R22 *)rt_nil_check(l_N_741))).f_MLO, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_A, p_T), 0);
S_R25(&((*(R22 *)rt_nil_check(l_N_741))).f_MHI, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(p_R))).f_B, p_T), 0);
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_745).f_T), r_REAL_TYPE(p_T))) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_746).f_T), r_REAL_TYPE(p_T)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_R))).f_LINE, rt_str("the bounds of a range must be of the class of the type (3.2.1, 3.3.1, 3.4.1)", 76));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_741))).f_LO_C, r_RESCALE(l_LO_745, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R17 *)rt_nil_check(p_R))).f_LINE), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_741))).f_HI_C, r_RESCALE(l_HI_746, ((*(R22 *)rt_nil_check(p_T))).f_SCALE, ((*(R17 *)rt_nil_check(p_R))).f_LINE), 0);
if ((((!(((*(R22 *)rt_nil_check(p_T))).f_SCALE == ((rt_int)0LL))) || (!(((*(R22 *)rt_nil_check((l_LO_745).f_T))).f_SCALE == ((rt_int)0LL)))) || (!(((*(R22 *)rt_nil_check((l_HI_746).f_T))).f_SCALE == ((rt_int)0LL)))))
{
S_R25(&((*(R22 *)rt_nil_check(l_N_741))).f_MLO, r_NO_MVAL(), 0);
S_R25(&((*(R22 *)rt_nil_check(l_N_741))).f_MHI, r_NO_MVAL(), 0);
}
}
if (r_IS_D(p_T))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_741))).f_LO_C, r_AS_D(l_LO_745), 0);
S_R9(&((*(R22 *)rt_nil_check(l_N_741))).f_HI_C, r_AS_D(l_HI_746), 0);
}
}
if (((((*(R17 *)rt_nil_check(p_R))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(p_R))).f_IV == ((rt_int)3LL))))
{
if (r_IS_D(p_T))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_741))).f_LO_C, r_FMT1(rt_str("rt_b_dnext(@, 1)", 16), ((*(R22 *)rt_nil_check(l_N_741))).f_LO_C), 0);
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_741))).f_LO_C, r_FMT1(rt_str("nextafter(@, INFINITY)", 22), ((*(R22 *)rt_nil_check(l_N_741))).f_LO_C), 0);
}
else
{
S_R9(&((*(R22 *)rt_nil_check(l_N_741))).f_LO_C, r_FMT1(rt_str("((@) + 1)", 9), ((*(R22 *)rt_nil_check(l_N_741))).f_LO_C), 0);
(((*(R22 *)rt_nil_check(l_N_741))).f_MLO).f_V = rt_add((((*(R22 *)rt_nil_check(l_N_741))).f_MLO).f_V, ((rt_int)1LL));
}
}
if ((((*(R17 *)rt_nil_check(p_R))).f_IV >= ((rt_int)2LL)))
{
if (r_IS_D(p_T))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_741))).f_HI_C, r_FMT1(rt_str("rt_b_dnext(@, 0)", 16), ((*(R22 *)rt_nil_check(l_N_741))).f_HI_C), 0);
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
S_R9(&((*(R22 *)rt_nil_check(l_N_741))).f_HI_C, r_FMT1(rt_str("nextafter(@, -INFINITY)", 23), ((*(R22 *)rt_nil_check(l_N_741))).f_HI_C), 0);
}
else
{
S_R9(&((*(R22 *)rt_nil_check(l_N_741))).f_HI_C, r_FMT1(rt_str("((@) - 1)", 9), ((*(R22 *)rt_nil_check(l_N_741))).f_HI_C), 0);
(((*(R22 *)rt_nil_check(l_N_741))).f_MHI).f_V = rt_sub((((*(R22 *)rt_nil_check(l_N_741))).f_MHI).f_V, ((rt_int)1LL));
}
}
{ R22 * rv747 = l_N_741;
return rv747; }
rt_raise(RT_X_INIT);
}
static R25 r_ENUM_MANIFEST(R17 * p_E, R22 * p_T) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{
R12 * l_Y_748; memset(&l_Y_748, 0, sizeof l_Y_748);
l_Y_748 = r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, p_T);
if ((!(l_Y_748 == NULL)))
{
{ R25 rv749 = r_SOME(((*(R12 *)rt_nil_check(l_Y_748))).f_MV);
return rv749; }
}
}
}
{ R25 rv750 = r_MANIFEST(p_E);
return rv750; }
rt_raise(RT_X_INIT);
}
static rt_int r_CUR_LEVEL(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_CS == NULL))
{
{ rt_int rv751 = ((rt_int)0LL);
return rv751; }
}
{ rt_int rv752 = ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL;
return rv752; }
rt_raise(RT_X_INIT);
}
static R22 * r_ARG_TYPE(R17 * p_N) { RT_B_TICK(); 
{ R22 * rv753 = r_RESOLVE(r_EXPR_TO_TS(p_N));
return rv753; }
rt_raise(RT_X_INIT);
}
static R17 * r_NTH_ARG(R17 * p_TS, rt_int p_K) { RT_B_TICK(); 
R17 * l_A_754; memset(&l_A_754, 0, sizeof l_A_754);
l_A_754 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
{ rt_int it756_lo = ((rt_int)1LL), it756_hi = p_K;
for (rt_int it756 = it756_lo; it756 <= it756_hi; it756++) {
{
if ((l_A_754 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
l_A_754 = ((*(R17 *)rt_nil_check(l_A_754))).f_NEXT;
}
RT_B_TICK();
if (it756 == it756_hi) break;
} } L_end755: ;
if ((l_A_754 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
{ R17 * rv757 = l_A_754;
return rv757; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_NAMED(R17 * p_TS, R9 p_CNAME) { RT_B_TICK(); 
R22 * l_T_758; memset(&l_T_758, 0, sizeof l_T_758);
rt_int l_K_759; memset(&l_K_759, 0, sizeof l_K_759);
l_K_759 = ((*(R17 *)rt_nil_check(p_TS))).f_KIND;
if ((l_K_759 == g_TS_ARRAY))
{
{ R22 * rv760 = r_RESOLVE_ARRAY(p_TS);
return rv760; }
}
else if ((l_K_759 == g_TS_RECORD))
{
{ R22 * rv761 = r_RESOLVE_RECORD(p_TS, p_CNAME, NULL, NULL);
return rv761; }
}
else if ((l_K_759 == g_TS_ENUM))
{
l_T_758 = r_ENUM_CLASS(((*(R17 *)rt_nil_check(p_TS))).f_A, (((*(R17 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)), ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
if (((((*(R17 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("an UNORDERED type has no range", 30));
}
l_T_758 = r_WITH_RANGE(l_T_758, ((*(R17 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_758 = r_APPLY_REP(l_T_758, ((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv762 = l_T_758;
return rv762; }
}
else if ((l_K_759 == g_TS_GEN))
{
{ R22 * rv763 = r_GEN_TYPE(p_TS);
return rv763; }
}
else if ((!(l_K_759 == g_TS_NAME)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a type specification expected", 29));
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_FL == ((rt_int)3LL)))
{
l_T_758 = r_WITH_RANGE(r_TYPE_ATTR_TYPE(((*(R17 *)rt_nil_check(p_TS))).f_E), ((*(R17 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_758 = r_APPLY_REP(l_T_758, ((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv764 = l_T_758;
return rv764; }
}
l_T_758 = r_RESOLVE_PREDEFINED(p_TS);
if ((l_T_758 == NULL))
{
l_T_758 = r_RESOLVE_USER(p_TS);
}
l_T_758 = r_WITH_RANGE(l_T_758, ((*(R17 *)rt_nil_check(p_TS))).f_B);
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
l_T_758 = r_APPLY_REP(l_T_758, ((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
{ R22 * rv765 = l_T_758;
return rv765; }
rt_raise(RT_X_INIT);
}
static R22 * r_APPLY_REP(R22 * p_T0, R17 * p_R0, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_766; memset(&l_T_766, 0, sizeof l_T_766);
l_T_766 = r_COPY_TYP(p_T0);
if ((((*(R22 *)rt_nil_check(p_T0))).f_KIND == g_T_ABS))
{
r_FAIL(p_LINE, rt_str("a REP clause is only for a member of a predefined type class (3.12.2)", 69));
}
((*(R22 *)rt_nil_check(l_T_766))).f_REPS = r_EXPAND_REP(p_R0, p_T0, p_LINE);
r_CHECK_REP_CLASS(l_T_766, p_LINE);
if ((((*(R22 *)rt_nil_check(l_T_766))).f_KIND == g_T_ENUM))
{
r_CHECK_ENUM_REP(l_T_766, p_LINE);
}
else if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_766))).f_REPS))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("ENUM_VAL_REP is only for UNORDERED types (3.4.3)", 48));
}
{ R22 * rv767 = l_T_766;
return rv767; }
rt_raise(RT_X_INIT);
}
static R17 * r_EXPAND_REP(R17 * p_R, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_768; memset(&l_Y_768, 0, sizeof l_Y_768);
if ((p_R == NULL))
{
{ R17 * rv769 = p_R;
return rv769; }
}
if ((((*(R17 *)rt_nil_check(p_R))).f_KIND == g_TS_GEN))
{
{ R17 * rv770 = p_R;
return rv770; }
}
l_Y_768 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_R))).f_NAME);
if ((l_Y_768 == NULL))
{
{ R17 * rv771 = p_R;
return rv771; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_768))).f_KIND == g_Y_REPTYPE)))
{
{ R17 * rv772 = p_R;
return rv772; }
}
if (((*(R12 *)rt_nil_check(l_Y_768))).f_BUSY)
{
r_FAILT(p_LINE, rt_str("a circular reptype declaration (3.12.3): ", 41), ((*(R17 *)rt_nil_check(p_R))).f_NAME);
}
{
R17 * l_D_773; memset(&l_D_773, 0, sizeof l_D_773);
l_D_773 = ((*(R12 *)rt_nil_check(l_Y_768))).f_DECL;
R17 * l_X_774; memset(&l_X_774, 0, sizeof l_X_774);
l_X_774 = r_NEW_NODE(g_N_REP, ((*(R17 *)rt_nil_check(p_R))).f_LINE);
R17 * l_HEAD_775; memset(&l_HEAD_775, 0, sizeof l_HEAD_775);
l_HEAD_775 = NULL;
R17 * l_TAIL_776; memset(&l_TAIL_776, 0, sizeof l_TAIL_776);
l_TAIL_776 = NULL;
((*(R12 *)rt_nil_check(l_Y_768))).f_BUSY = 1;
r_OPEN_SCOPE();
if (((!(((*(R17 *)rt_nil_check(l_D_773))).f_A == NULL)) || (!(((*(R17 *)rt_nil_check(p_R))).f_A == NULL))))
{
r_BIND_FORMALS(((*(R17 *)rt_nil_check(l_D_773))).f_A, p_R);
}
if ((!(((*(R17 *)rt_nil_check(l_D_773))).f_C == NULL)))
{
{
R12 * l_B_777; memset(&l_B_777, 0, sizeof l_B_777);
l_B_777 = r_NEW_SYM(g_Y_TYPE, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_773))).f_C))).f_NAME);
((*(R12 *)rt_nil_check(l_B_777))).f_T = p_T;
r_DEFINE(l_B_777, p_LINE);
}
}
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
S_R9(&((*(R17 *)rt_nil_check(l_X_774))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_773))).f_B))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_X_774))).f_B = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_773))).f_B))).f_B;
((*(R17 *)rt_nil_check(l_X_774))).f_C = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_773))).f_B))).f_C;
if (r_TEQS(((*(R17 *)rt_nil_check(l_X_774))).f_NAME, rt_str("RECORD_REP", 10)))
{
l_HEAD_775 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_773))).f_B))).f_A;
}
else
{
{
R17 * l_A_778; memset(&l_A_778, 0, sizeof l_A_778);
l_A_778 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_773))).f_B))).f_A;
for (;;) {
if ((l_A_778 == NULL)) goto L_end779;
{
r_ADD_LIST(r_REP_ARG_VALUE(l_A_778), &l_HEAD_775, &l_TAIL_776);
l_A_778 = ((*(R17 *)rt_nil_check(l_A_778))).f_NEXT;
}
RT_B_TICK();
} L_end779: ;
}
}
((*(R17 *)rt_nil_check(l_X_774))).f_A = l_HEAD_775;
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
r_CLOSE_SCOPE();
l_X_774 = r_EXPAND_REP(l_X_774, p_T, p_LINE);
((*(R12 *)rt_nil_check(l_Y_768))).f_BUSY = 0;
{ R17 * rv780 = l_X_774;
return rv780; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_REP_ARG_VALUE(R17 * p_A) { RT_B_TICK(); 
R17 * l_N_781; memset(&l_N_781, 0, sizeof l_N_781);
R25 l_M_782; memset(&l_M_782, 0, sizeof l_M_782);
if (((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_783; memset(&l_Y_783, 0, sizeof l_Y_783);
l_Y_783 = r_LOOKUP(((*(R17 *)rt_nil_check(p_A))).f_NAME);
if (((l_Y_783 == NULL) || (((!(l_Y_783 == NULL)) && (((*(R12 *)rt_nil_check(l_Y_783))).f_KIND == g_Y_ENUMLIT)))))
{
l_N_781 = r_NEW_NODE(((*(R17 *)rt_nil_check(p_A))).f_KIND, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_781))).f_NAME, ((*(R17 *)rt_nil_check(p_A))).f_NAME, 0);
{ R17 * rv784 = l_N_781;
return rv784; }
}
if (((((*(R12 *)rt_nil_check(l_Y_783))).f_KIND == g_Y_CONST) && (!(((*(R12 *)rt_nil_check(l_Y_783))).f_T == NULL))))
{
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_783))).f_T)))).f_KIND == g_T_ENUM) && ((*(R12 *)rt_nil_check(l_Y_783))).f_HASMV))
{
{
R17 * l_L_785; memset(&l_L_785, 0, sizeof l_L_785);
l_L_785 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_783))).f_T)))).f_BASE))).f_LITS;
rt_int l_I_786; memset(&l_I_786, 0, sizeof l_I_786);
l_I_786 = ((rt_int)0LL);
for (;;) {
if (((l_L_785 == NULL) || (l_I_786 == ((*(R12 *)rt_nil_check(l_Y_783))).f_MV))) goto L_end787;
{
l_I_786 = rt_add(l_I_786, ((rt_int)1LL));
l_L_785 = ((*(R17 *)rt_nil_check(l_L_785))).f_NEXT;
}
RT_B_TICK();
} L_end787: ;
if ((!(l_L_785 == NULL)))
{
l_N_781 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_781))).f_NAME, ((*(R17 *)rt_nil_check(l_L_785))).f_NAME, 0);
{ R17 * rv788 = l_N_781;
return rv788; }
}
}
}
}
}
}
S_R25(&l_M_782, r_MANIFEST(p_A), 0);
if ((!(l_M_782).f_OK))
{
{
R14 l_SAVED_CODE_789; memset(&l_SAVED_CODE_789, 0, sizeof l_SAVED_CODE_789);
S_R14(&l_SAVED_CODE_789, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_790; memset(&l_V_790, 0, sizeof l_V_790);
S_R26(&l_V_790, r_EXPR(p_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_789, 0);
}
{ R17 * rv791 = p_A;
return rv791; }
}
l_N_781 = r_NEW_NODE(g_N_INT, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
if (((l_M_782).f_V < ((rt_int)0LL)))
{
((*(R17 *)rt_nil_check(l_N_781))).f_IV = rt_neg((l_M_782).f_V);
S_R9(&((*(R17 *)rt_nil_check(l_N_781))).f_NAME, r_NUM(rt_neg((l_M_782).f_V)), 0);
{
R17 * l_U_792; memset(&l_U_792, 0, sizeof l_U_792);
l_U_792 = r_NEW_NODE(g_N_UNOP, ((*(R17 *)rt_nil_check(p_A))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_U_792))).f_NAME, r_MK(rt_str("-", 1)), 0);
((*(R17 *)rt_nil_check(l_U_792))).f_A = l_N_781;
{ R17 * rv793 = l_U_792;
return rv793; }
}
}
((*(R17 *)rt_nil_check(l_N_781))).f_IV = (l_M_782).f_V;
S_R9(&((*(R17 *)rt_nil_check(l_N_781))).f_NAME, r_NUM((l_M_782).f_V), 0);
{ R17 * rv794 = l_N_781;
return rv794; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_REP_CLASS(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_795; memset(&l_R_795, 0, sizeof l_R_795);
l_R_795 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
rt_int l_K_796; memset(&l_K_796, 0, sizeof l_K_796);
l_K_796 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
rt_int l_OK_797; memset(&l_OK_797, 0, sizeof l_OK_797);
l_OK_797 = 0;
if ((((*(R17 *)rt_nil_check(l_R_795))).f_KIND == g_TS_GEN))
{
return;
}
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R17 *)rt_nil_check(l_R_795))).f_NAME) == NULL)))
{
return;
}
if ((!(r_LOOKUP(((*(R17 *)rt_nil_check(l_R_795))).f_NAME) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_LOOKUP(((*(R17 *)rt_nil_check(l_R_795))).f_NAME)))).f_KIND == g_Y_GEN))
{
return;
}
}
{
R9 l_N_798; memset(&l_N_798, 0, sizeof l_N_798);
S_R9(&l_N_798, ((*(R17 *)rt_nil_check(l_R_795))).f_NAME, 0);
if ((l_K_796 == g_T_INT))
{
l_OK_797 = (r_TEQS(l_N_798, rt_str("FIXED_STD", 9)) || r_TEQS(l_N_798, rt_str("FIXED_REP", 9)));
}
else if ((l_K_796 == g_T_FLOAT))
{
l_OK_797 = r_TEQS(l_N_798, rt_str("FLOAT_STD", 9));
}
else if ((l_K_796 == g_T_BOOL))
{
l_OK_797 = r_TEQS(l_N_798, rt_str("BOOLEAN_STD", 11));
}
else if ((l_K_796 == g_T_ENUM))
{
l_OK_797 = ((r_TEQS(l_N_798, rt_str("ENUM_STD", 8)) || r_TEQS(l_N_798, rt_str("ENUM_REP", 8))) || r_TEQS(l_N_798, rt_str("ENUM_VAL_REP", 12)));
}
else if ((l_K_796 == g_T_STR))
{
l_OK_797 = (r_TEQS(l_N_798, rt_str("CHAR_STR_STD", 12)) || r_TEQS(l_N_798, rt_str("CHAR_STR_REP", 12)));
}
else if ((l_K_796 == g_T_BITS))
{
l_OK_797 = r_TEQS(l_N_798, rt_str("BIT_STD", 7));
}
else if ((l_K_796 == g_T_ARR))
{
l_OK_797 = (r_TEQS(l_N_798, rt_str("ARRAY_STD", 9)) || r_TEQS(l_N_798, rt_str("ARRAY_REP", 9)));
}
else if ((l_K_796 == g_T_REC))
{
l_OK_797 = (r_TEQS(l_N_798, rt_str("RECORD_STD", 10)) || r_TEQS(l_N_798, rt_str("RECORD_REP", 10)));
}
else if ((l_K_796 == g_T_PTR))
{
l_OK_797 = r_TEQS(l_N_798, rt_str("PTR_STD", 7));
}
else if ((l_K_796 == g_T_SEM))
{
l_OK_797 = r_TEQS(l_N_798, rt_str("SEMAPHORE_STD", 13));
}
else if ((l_K_796 == g_T_TYPE))
{
l_OK_797 = 1;
}
if ((!l_OK_797))
{
r_FAILT(p_LINE, rt_str("the representation does not suit the type class (3.12.4): ", 58), l_N_798);
}
if (r_TEQS(l_N_798, rt_str("FIXED_REP", 9)))
{
r_CHECK_FIXED_REP(p_T, p_LINE);
}
}
}
static rt_int r_POW2(rt_int p_N) { RT_B_TICK(); 
rt_int l_P_799; memset(&l_P_799, 0, sizeof l_P_799);
l_P_799 = ((rt_int)1LL);
{ rt_int it801_lo = ((rt_int)1LL), it801_hi = p_N;
for (rt_int it801 = it801_lo; it801 <= it801_hi; it801++) {
{
l_P_799 = rt_mul(l_P_799, ((rt_int)2LL));
}
RT_B_TICK();
if (it801 == it801_hi) break;
} } L_end800: ;
{ rt_int rv802 = l_P_799;
return rv802; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_803; memset(&l_R_803, 0, sizeof l_R_803);
l_R_803 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
rt_int l_UNSIGNED_804; memset(&l_UNSIGNED_804, 0, sizeof l_UNSIGNED_804);
l_UNSIGNED_804 = 0;
if ((((*(R17 *)rt_nil_check(l_R_803))).f_A == NULL))
{
r_FAIL(p_LINE, rt_str("FIXED_REP takes a size and a signing (3.2.3 [3-55])", 51));
}
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_803))).f_A))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_803))).f_A))).f_KIND == g_N_DONTCARE)))
{
return;
}
{
R25 l_N_805; memset(&l_N_805, 0, sizeof l_N_805);
S_R25(&l_N_805, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_803))).f_A), 0);
if ((!(l_N_805).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of FIXED_REP is a manifest integer (3.2.3 [3-56])", 58));
}
if ((((l_N_805).f_V < ((rt_int)0LL)) || ((l_N_805).f_V > ((*(R7 *)rt_nil_check(g_W))).f_WORD)))
{
r_FAIL(p_LINE, rt_str("the size of FIXED_REP is in [0:P], P the default size (3.2.3)", 61));
}
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_803))).f_A))).f_NEXT == NULL)))
{
{
R17 * l_S_806; memset(&l_S_806, 0, sizeof l_S_806);
l_S_806 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_803))).f_A))).f_NEXT;
if (((((*(R17 *)rt_nil_check(l_S_806))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_S_806))).f_KIND == g_N_DONTCARE)))
{
return;
}
if ((!(((((((*(R17 *)rt_nil_check(l_S_806))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_S_806))).f_KIND == g_N_ENUMLIT))) && ((r_TEQS(((*(R17 *)rt_nil_check(l_S_806))).f_NAME, rt_str("SIGNED", 6)) || r_TEQS(((*(R17 *)rt_nil_check(l_S_806))).f_NAME, rt_str("UNSIGNED", 8))))))))
{
r_FAIL(p_LINE, rt_str("the signing of FIXED_REP is a manifest value of SIGNING (3.2.3 [3-57])", 70));
}
l_UNSIGNED_804 = r_TEQS(((*(R17 *)rt_nil_check(l_S_806))).f_NAME, rt_str("UNSIGNED", 8));
if ((!(((*(R17 *)rt_nil_check(l_S_806))).f_NEXT == NULL)))
{
r_FAIL(p_LINE, rt_str("FIXED_REP takes a size and a signing (3.2.3 [3-55])", 51));
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_REPCONV)
{
return;
}
if (l_UNSIGNED_804)
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
if ((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) && ((l_N_805).f_V < ((*(R7 *)rt_nil_check(g_W))).f_WORD)))
{
r_FAIL(p_LINE, rt_str("the range of the type exceeds what the size of FIXED_REP represents (3.2.3)", 75));
}
if (((((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK) && ((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN > ((rt_int)0LL))) && ((l_N_805).f_V < ((rt_int)63LL))))
{
{
rt_int l_LO_807; memset(&l_LO_807, 0, sizeof l_LO_807);
l_LO_807 = ((rt_int)0LL);
rt_int l_HI_808; memset(&l_HI_808, 0, sizeof l_HI_808);
l_HI_808 = ((rt_int)0LL);
if (l_UNSIGNED_804)
{
l_HI_808 = rt_sub(r_POW2((l_N_805).f_V), ((rt_int)1LL));
}
else if (((l_N_805).f_V > ((rt_int)0LL)))
{
l_LO_807 = rt_neg(r_POW2(rt_sub((l_N_805).f_V, ((rt_int)1LL))));
l_HI_808 = rt_sub(r_POW2(rt_sub((l_N_805).f_V, ((rt_int)1LL))), ((rt_int)1LL));
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_V < l_LO_807) || ((((*(R22 *)rt_nil_check(p_T))).f_MHI).f_V > l_HI_808)))
{
r_FAIL(p_LINE, rt_str("the range of the type exceeds what the size of FIXED_REP represents (3.2.3)", 75));
}
}
}
}
}
static R22 * r_TYPE_ATTR_TYPE(R17 * p_E) { RT_B_TICK(); 
R22 * l_T_809; memset(&l_T_809, 0, sizeof l_T_809);
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type-valued attribute expected", 32));
}
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_IS_TYPE_ATTR(((*(R17 *)rt_nil_check(p_E))).f_A)))
{
l_T_809 = r_TYPE_ATTR_TYPE(((*(R17 *)rt_nil_check(p_E))).f_A);
}
else
{
{
R14 l_SAVED_CODE_810; memset(&l_SAVED_CODE_810, 0, sizeof l_SAVED_CODE_810);
S_R14(&l_SAVED_CODE_810, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
l_T_809 = (r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(p_E))).f_A)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_810, 0);
}
}
{
R22 * l_R_811; memset(&l_R_811, 0, sizeof l_R_811);
l_R_811 = r_REAL_TYPE(l_T_809);
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)))
{
if ((((*(R22 *)rt_nil_check(l_R_811))).f_KIND == g_T_ARR))
{
{ R22 * rv812 = ((*(R22 *)rt_nil_check(l_R_811))).f_ELEM;
return rv812; }
}
else if ((((*(R22 *)rt_nil_check(l_R_811))).f_KIND == g_T_PTR))
{
{ R22 * rv813 = r_TARGET(l_R_811);
return rv813; }
}
}
else if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7)) && (((*(R22 *)rt_nil_check(l_R_811))).f_KIND == g_T_STR)))
{
{ R22 * rv814 = r_CHARSET_OF(l_R_811);
return rv814; }
}
if ((((*(R22 *)rt_nil_check(l_R_811))).f_KIND == g_T_REC))
{
{
R12 * l_C_815; memset(&l_C_815, 0, sizeof l_C_815);
l_C_815 = r_RECORD_CLASS_OF(l_R_811);
if ((!(l_C_815 == NULL)))
{
{
R21 * l_B_816; memset(&l_B_816, 0, sizeof l_B_816);
l_B_816 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_815))).f_BINDINGS, ((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_816 == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(l_B_816))).f_T == NULL)))
{
{ R22 * rv817 = ((*(R21 *)rt_nil_check(l_B_816))).f_T;
return rv817; }
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
{ rt_int rv818 = 0;
return rv818; }
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("ELEMENT_TYPE", 12)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("CHARSET", 7))))
{
{ rt_int rv819 = 1;
return rv819; }
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_820; memset(&l_Y_820, 0, sizeof l_Y_820);
l_Y_820 = r_LOOKUP(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME);
if ((!(l_Y_820 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_820))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_820))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_820))).f_T == NULL))))
{
{
R22 * l_R_821; memset(&l_R_821, 0, sizeof l_R_821);
l_R_821 = r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_820))).f_T);
if ((((*(R22 *)rt_nil_check(l_R_821))).f_KIND == g_T_REC))
{
{
R12 * l_C_822; memset(&l_C_822, 0, sizeof l_C_822);
l_C_822 = r_RECORD_CLASS_OF(l_R_821);
if ((!(l_C_822 == NULL)))
{
if ((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_C_822))).f_BINDINGS, ((*(R17 *)rt_nil_check(p_E))).f_NAME) == NULL)))
{
{ rt_int rv823 = 1;
return rv823; }
}
}
}
}
}
}
}
}
}
{ rt_int rv824 = 0;
return rv824; }
rt_raise(RT_X_INIT);
}
static R22 * r_GEN_TYPE(R17 * p_TS) { RT_B_TICK(); 
R21 * l_B_825; memset(&l_B_825, 0, sizeof l_B_825);
l_B_825 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_825 == NULL)) goto L_end826;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_825))).f_NAME, ((*(R17 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R21 *)rt_nil_check(l_B_825))).f_T == NULL))))
{
{ R22 * rv827 = ((*(R21 *)rt_nil_check(l_B_825))).f_T;
return rv827; }
}
l_B_825 = ((*(R21 *)rt_nil_check(l_B_825))).f_NEXT;
}
RT_B_TICK();
} L_end826: ;
{
R12 * l_Y_828; memset(&l_Y_828, 0, sizeof l_Y_828);
l_Y_828 = r_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_828 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_828))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_828))).f_T == NULL))))
{
{ R22 * rv829 = ((*(R12 *)rt_nil_check(l_Y_828))).f_T;
return rv829; }
}
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a derived generic type outside a formal parameter list: \?", 57), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_PREDEFINED(R17 * p_TS) { RT_B_TICK(); 
R9 l_NAME_830; memset(&l_NAME_830, 0, sizeof l_NAME_830);
S_R9(&l_NAME_830, ((*(R17 *)rt_nil_check(p_TS))).f_NAME, 0);
R22 * l_T_831; memset(&l_T_831, 0, sizeof l_T_831);
if (r_TEQS(l_NAME_830, rt_str("FIXED", 5)))
{
{
R25 l_S_832; memset(&l_S_832, 0, sizeof l_S_832);
S_R25(&l_S_832, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R25 l_R_833; memset(&l_R_833, 0, sizeof l_R_833);
S_R25(&l_R_833, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
R17 * l_P_834; memset(&l_P_834, 0, sizeof l_P_834);
l_P_834 = r_NTH_ARG(p_TS, ((rt_int)2LL));
r_TYPE_ARG_COUNT(p_TS, ((rt_int)3LL));
r_CHECK_PRECISION_ARG(l_P_834, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
{
rt_int l_PO_835; memset(&l_PO_835, 0, sizeof l_PO_835);
l_PO_835 = r_PRECISION_ORD(l_P_834);
if (((!((l_R_833).f_V == ((rt_int)2LL))) || (!(l_PO_835 == r_STD_ORD()))))
{
l_T_831 = r_NEW_TYP(g_T_XFIX);
((*(R22 *)rt_nil_check(l_T_831))).f_SCALE = (l_S_832).f_V;
((*(R22 *)rt_nil_check(l_T_831))).f_RADIX = (l_R_833).f_V;
((*(R22 *)rt_nil_check(l_T_831))).f_PREC = l_PO_835;
{ R22 * rv836 = l_T_831;
return rv836; }
}
}
if (((l_S_832).f_V == ((rt_int)0LL)))
{
{ R22 * rv837 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv837; }
}
l_T_831 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_831))).f_SCALE = (l_S_832).f_V;
{ R22 * rv838 = l_T_831;
return rv838; }
}
}
else if (r_TEQS(l_NAME_830, rt_str("FLOAT", 5)))
{
{
R25 l_P_839; memset(&l_P_839, 0, sizeof l_P_839);
S_R25(&l_P_839, r_MANIFEST_INTEGER_ARG(r_NTH_ARG(p_TS, ((rt_int)0LL)), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
l_T_831 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_831))).f_SCALE = (l_P_839).f_V;
{ R22 * rv840 = l_T_831;
return rv840; }
}
}
else if (r_TEQS(l_NAME_830, rt_str("BIT", 3)))
{
l_T_831 = r_NEW_TYP(g_T_BITS);
r_STRING_LENGTH(l_T_831, r_NTH_ARG(p_TS, ((rt_int)0LL)));
{ R22 * rv841 = l_T_831;
return rv841; }
}
else if ((r_TEQS(l_NAME_830, rt_str("CHAR_STR", 8)) || r_TEQS(l_NAME_830, rt_str("ASCII_STR", 9))))
{
l_T_831 = r_NEW_TYP(g_T_STR);
r_STRING_LENGTH(l_T_831, r_NTH_ARG(p_TS, ((rt_int)0LL)));
((*(R22 *)rt_nil_check(l_T_831))).f_BASE = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
if (r_TEQS(l_NAME_830, rt_str("CHAR_STR", 8)))
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)2LL));
{
R17 * l_CS_842; memset(&l_CS_842, 0, sizeof l_CS_842);
l_CS_842 = r_NTH_ARG(p_TS, ((rt_int)1LL));
R22 * l_C_843; memset(&l_C_843, 0, sizeof l_C_843);
if (((((*(R17 *)rt_nil_check(l_CS_842))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_CS_842))).f_KIND == g_N_DONTCARE)))
{
((*(R22 *)rt_nil_check(l_T_831))).f_BASE = NULL;
{ R22 * rv844 = l_T_831;
return rv844; }
}
if (((((*(R17 *)rt_nil_check(l_CS_842))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(l_CS_842))).f_NAME, rt_str("CHARSET", 7))))
{
{
R14 l_SAVED_CODE_845; memset(&l_SAVED_CODE_845, 0, sizeof l_SAVED_CODE_845);
S_R14(&l_SAVED_CODE_845, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_846; memset(&l_V_846, 0, sizeof l_V_846);
S_R26(&l_V_846, r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(l_CS_842))).f_A), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_845, 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_846).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("CHARSET is an attribute of character strings (3.7.1)", 52));
}
((*(R22 *)rt_nil_check(l_T_831))).f_BASE = r_CHARSET_OF((l_V_846).f_T);
}
{ R22 * rv847 = l_T_831;
return rv847; }
}
l_C_843 = r_REAL_TYPE(r_ARG_TYPE(l_CS_842));
if ((!(((*(R22 *)rt_nil_check(l_C_843))).f_KIND == g_T_ENUM)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset must be an enumerated type (3.7.1)", 44));
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_843))).f_BASE))).f_UNORDERED || (!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_843))).f_BASE))).f_LITS))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a charset is an ordered enumerated type with a literal \\'C' (3.7.1, 3.7.2)", 74));
}
((*(R22 *)rt_nil_check(l_T_831))).f_BASE = ((*(R22 *)rt_nil_check(l_C_843))).f_BASE;
}
}
else
{
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
}
{ R22 * rv848 = l_T_831;
return rv848; }
}
else if (r_TEQS(l_NAME_830, rt_str("PTR", 3)))
{
l_T_831 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_T_831))).f_TARGET_TS = r_NTH_ARG(p_TS, ((rt_int)0LL));
{ R22 * rv849 = l_T_831;
return rv849; }
}
else if (r_TEQS(l_NAME_830, rt_str("SEMAPHORE", 9)))
{
l_T_831 = r_NEW_TYP(g_T_SEM);
r_TYPE_ARG_COUNT(p_TS, ((rt_int)1LL));
{
R17 * l_U_850; memset(&l_U_850, 0, sizeof l_U_850);
l_U_850 = r_NTH_ARG(p_TS, ((rt_int)0LL));
R22 * l_UT_851; memset(&l_UT_851, 0, sizeof l_UT_851);
l_UT_851 = r_RESOLVE_USER_NAME(r_MK(rt_str("USAGE", 5)), ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
R25 l_M_852; memset(&l_M_852, 0, sizeof l_M_852);
S_R25(&l_M_852, r_NO_MVAL(), 0);
if (((((*(R17 *)rt_nil_check(l_U_850))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_U_850))).f_KIND == g_N_DONTCARE)))
{
S_R25(&l_M_852, r_SOME(((rt_int)0LL)), 0);
}
else if (((((((*(R17 *)rt_nil_check(l_U_850))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_U_850))).f_KIND == g_N_ENUMLIT))) && (!(r_FIND_LITERAL(((*(R17 *)rt_nil_check(l_U_850))).f_NAME, l_UT_851) == NULL))))
{
S_R25(&l_M_852, r_ENUM_MANIFEST(l_U_850, l_UT_851), 0);
}
else
{
{
R14 l_SAVED_CODE_853; memset(&l_SAVED_CODE_853, 0, sizeof l_SAVED_CODE_853);
S_R14(&l_SAVED_CODE_853, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_854; memset(&l_V_854, 0, sizeof l_V_854);
S_R26(&l_V_854, r_EXPR(l_U_850, l_UT_851), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_853, 0);
if (r_SAME_CLASS(r_REAL_TYPE((l_V_854).f_T), r_REAL_TYPE(l_UT_851)))
{
S_R25(&l_M_852, r_MANIFEST(l_U_850), 0);
}
}
}
if ((!(l_M_852).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("the use mode is a manifest value of USAGE, SYNCH or REGION (3.11.1)", 67));
}
((*(R22 *)rt_nil_check(l_T_831))).f_SCALE = (l_M_852).f_V;
}
{ R22 * rv855 = l_T_831;
return rv855; }
}
{ R22 * rv856 = NULL;
return rv856; }
rt_raise(RT_X_INIT);
}
static void r_TYPE_ARG_COUNT(R17 * p_TS, rt_int p_N) { RT_B_TICK(); 
if ((!(r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_TS))).f_A) == p_N)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("the wrong number of arguments for the type ", 43), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
}
static R25 r_MANIFEST_INTEGER_ARG(R17 * p_A, rstr p_WHAT, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
R25 l_M_857; memset(&l_M_857, 0, sizeof l_M_857);
S_R25(&l_M_857, r_MANIFEST(p_A), 0);
if ((!(l_M_857).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" must be manifest (3.2.1, 3.3.1)", 32)));
}
if ((((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) && (!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))) && (!r_BOUND_NAME(p_A))))
{
{
R14 l_SAVED_CODE_858; memset(&l_SAVED_CODE_858, 0, sizeof l_SAVED_CODE_858);
S_R14(&l_SAVED_CODE_858, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R22 * l_T_859; memset(&l_T_859, 0, sizeof l_T_859);
l_T_859 = (r_EXPR(p_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_858, 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_T_859)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_859))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is an integer (3.2.1, 3.3.1)", 29)));
}
}
}
if ((((l_M_857).f_V < p_LO) || ((l_M_857).f_V > p_HI)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_A))).f_LINE, rt_b_cat(rt_b_cat(rt_str("the ", 4), p_WHAT), rt_str(" is out of the range of the attribute (3.2.1, 3.3.1)", 52)));
}
{ R25 rv860 = l_M_857;
return rv860; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOUND_NAME(R17 * p_A) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv861 = 0;
return rv861; }
}
{ rt_int rv862 = (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R17 *)rt_nil_check(p_A))).f_NAME) == NULL));
return rv862; }
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
R12 * l_Y_863; memset(&l_Y_863, 0, sizeof l_Y_863);
l_Y_863 = r_LOOKUP(((*(R17 *)rt_nil_check(p_P))).f_NAME);
if ((!(l_Y_863 == NULL)))
{
if ((((((*(R12 *)rt_nil_check(l_Y_863))).f_KIND == g_Y_GEN) || (((*(R12 *)rt_nil_check(l_Y_863))).f_KIND == g_Y_CONST)) || (((((*(R12 *)rt_nil_check(l_Y_863))).f_KIND == g_Y_TYPE) && (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, ((*(R17 *)rt_nil_check(p_P))).f_NAME) == NULL))))))
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
R12 * l_Y_864; memset(&l_Y_864, 0, sizeof l_Y_864);
l_Y_864 = r_LOOKUP(r_MKN(rt_str("FIXED_PRECISIONS", 16)));
if ((!(l_Y_864 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_864))).f_KIND == g_Y_TYPE))
{
{
R22 * l_T_865; memset(&l_T_865, 0, sizeof l_T_865);
l_T_865 = r_REAL_TYPE(r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_864))).f_NAME, ((rt_int)0LL)));
if ((((*(R22 *)rt_nil_check(l_T_865))).f_KIND == g_T_ENUM))
{
{ R22 * rv866 = l_T_865;
return rv866; }
}
}
}
}
{ R22 * rv867 = NULL;
return rv867; }
rt_raise(RT_X_INIT);
}
static rt_int r_STD_ORD(void) { RT_B_TICK(); 
R22 * l_T_868; memset(&l_T_868, 0, sizeof l_T_868);
l_T_868 = r_PRECISIONS_TYPE();
if ((!(l_T_868 == NULL)))
{
{
R12 * l_Y_869; memset(&l_Y_869, 0, sizeof l_Y_869);
l_Y_869 = r_FIND_LITERAL(r_MKN(rt_str("STD", 3)), l_T_868);
if ((!(l_Y_869 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_869))).f_HASMV)
{
{ rt_int rv870 = ((*(R12 *)rt_nil_check(l_Y_869))).f_MV;
return rv870; }
}
}
}
}
{ rt_int rv871 = ((rt_int)0LL);
return rv871; }
rt_raise(RT_X_INIT);
}
static rt_int r_PRECISION_ORD(R17 * p_P) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_P))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(p_P))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv872 = r_STD_ORD();
return rv872; }
}
if (((((*(R17 *)rt_nil_check(p_P))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_P))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(p_P))).f_NAME, rt_str("STD", 3)))
{
{ rt_int rv873 = r_STD_ORD();
return rv873; }
}
{
R12 * l_Y_874; memset(&l_Y_874, 0, sizeof l_Y_874);
l_Y_874 = r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_P))).f_NAME, r_PRECISIONS_TYPE());
if ((!(l_Y_874 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_874))).f_HASMV && (((*(R12 *)rt_nil_check(l_Y_874))).f_KIND == g_Y_ENUMLIT)))
{
{ rt_int rv875 = ((*(R12 *)rt_nil_check(l_Y_874))).f_MV;
return rv875; }
}
}
}
}
{
R25 l_M_876; memset(&l_M_876, 0, sizeof l_M_876);
S_R25(&l_M_876, r_MANIFEST(p_P), 0);
if ((l_M_876).f_OK)
{
{ rt_int rv877 = (l_M_876).f_V;
return rv877; }
}
}
{ rt_int rv878 = r_STD_ORD();
return rv878; }
rt_raise(RT_X_INIT);
}
static R9 r_PRECISION_NAME(rt_int p_N) { RT_B_TICK(); 
R22 * l_T_879; memset(&l_T_879, 0, sizeof l_T_879);
l_T_879 = r_PRECISIONS_TYPE();
if ((!(l_T_879 == NULL)))
{
{
R17 * l_L_880; memset(&l_L_880, 0, sizeof l_L_880);
l_L_880 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_879))).f_BASE))).f_LITS;
rt_int l_I_881; memset(&l_I_881, 0, sizeof l_I_881);
l_I_881 = ((rt_int)0LL);
for (;;) {
if ((l_L_880 == NULL)) goto L_end882;
{
if ((l_I_881 == p_N))
{
{ R9 rv883 = ((*(R17 *)rt_nil_check(l_L_880))).f_NAME;
return rv883; }
}
l_I_881 = rt_add(l_I_881, ((rt_int)1LL));
l_L_880 = ((*(R17 *)rt_nil_check(l_L_880))).f_NEXT;
}
RT_B_TICK();
} L_end882: ;
}
}
{ R9 rv884 = r_NUM(p_N);
return rv884; }
rt_raise(RT_X_INIT);
}
static rt_int r_XFIX_SIZE(R22 * p_T) { RT_B_TICK(); 
rt_int l_N_885; memset(&l_N_885, 0, sizeof l_N_885);
l_N_885 = ((*(R7 *)rt_nil_check(g_W))).f_WORD;
rt_int l_K_886; memset(&l_K_886, 0, sizeof l_K_886);
l_K_886 = rt_sub(((*(R22 *)rt_nil_check(p_T))).f_PREC, r_STD_ORD());
for (;;) {
if ((l_K_886 == ((rt_int)0LL))) goto L_end887;
{
if ((l_K_886 > ((rt_int)0LL)))
{
l_N_885 = rt_mul(l_N_885, ((rt_int)2LL));
l_K_886 = rt_sub(l_K_886, ((rt_int)1LL));
}
else
{
if ((l_N_885 > ((rt_int)1LL)))
{
l_N_885 = rt_quot(l_N_885, ((rt_int)2LL));
}
l_K_886 = rt_add(l_K_886, ((rt_int)1LL));
}
}
RT_B_TICK();
} L_end887: ;
{ rt_int rv888 = l_N_885;
return rv888; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_ENUM_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_889; memset(&l_R_889, 0, sizeof l_R_889);
l_R_889 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
R9 l_NAME_890; memset(&l_NAME_890, 0, sizeof l_NAME_890);
S_R9(&l_NAME_890, ((*(R17 *)rt_nil_check(l_R_889))).f_NAME, 0);
if ((((*(R17 *)rt_nil_check(l_R_889))).f_KIND == g_TS_GEN))
{
return;
}
if ((r_TEQS(l_NAME_890, rt_str("ENUM_STD", 8)) || (!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, l_NAME_890) == NULL))))
{
return;
}
if ((!((r_TEQS(l_NAME_890, rt_str("ENUM_REP", 8)) || r_TEQS(l_NAME_890, rt_str("ENUM_VAL_REP", 12))))))
{
if ((!(r_ORIG_LOOKUP(l_NAME_890) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(l_NAME_890)))).f_KIND == g_Y_REPTYPE))
{
return;
}
}
r_FAILT(p_LINE, rt_str("not a representation of an enumerated type (3.4.3): ", 52), l_NAME_890);
}
if ((((*(R17 *)rt_nil_check(l_R_889))).f_A == NULL))
{
r_FAILT(p_LINE, rt_str("the size of the representation is missing: ", 43), l_NAME_890);
}
{
R25 l_N_891; memset(&l_N_891, 0, sizeof l_N_891);
S_R25(&l_N_891, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_889))).f_A), 0);
rt_int l_NL_892; memset(&l_NL_892, 0, sizeof l_NL_892);
l_NL_892 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS;
if ((!(l_N_891).f_OK))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is manifest (3.4.3)", 60));
}
if ((((l_N_891).f_V > ((rt_int)64LL)) || ((l_N_891).f_V < ((rt_int)0LL))))
{
r_FAIL(p_LINE, rt_str("the size of an enumerated representation is in [0:(FIXED.SIZE).MAX] (3.4.3)", 75));
}
if (r_TEQS(l_NAME_890, rt_str("ENUM_REP", 8)))
{
if ((!(((*(R17 *)rt_nil_check(l_R_889))).f_B == NULL)))
{
r_FAIL(p_LINE, rt_str("VALUES belong to ENUM_VAL_REP (3.4.3)", 37));
}
if (((l_N_891).f_V < r_BITS_FOR(l_NL_892)))
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
R17 * l_L_893; memset(&l_L_893, 0, sizeof l_L_893);
l_L_893 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
for (;;) {
if ((l_L_893 == NULL)) goto L_end894;
{
{
R17 * l_V_895; memset(&l_V_895, 0, sizeof l_V_895);
l_V_895 = ((*(R17 *)rt_nil_check(l_R_889))).f_B;
rt_int l_FOUND_896; memset(&l_FOUND_896, 0, sizeof l_FOUND_896);
l_FOUND_896 = ((rt_int)0LL);
for (;;) {
if ((l_V_895 == NULL)) goto L_end897;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_V_895))).f_NAME, ((*(R17 *)rt_nil_check(l_L_893))).f_NAME))
{
l_FOUND_896 = rt_add(l_FOUND_896, ((rt_int)1LL));
}
l_V_895 = ((*(R17 *)rt_nil_check(l_V_895))).f_NEXT;
}
RT_B_TICK();
} L_end897: ;
if ((!(l_FOUND_896 == ((rt_int)1LL))))
{
r_FAILT(p_LINE, rt_str("VALUES must give every literal once (3.4.3): ", 45), ((*(R17 *)rt_nil_check(l_L_893))).f_NAME);
}
}
l_L_893 = ((*(R17 *)rt_nil_check(l_L_893))).f_NEXT;
}
RT_B_TICK();
} L_end894: ;
}
{
R17 * l_V_898; memset(&l_V_898, 0, sizeof l_V_898);
l_V_898 = ((*(R17 *)rt_nil_check(l_R_889))).f_B;
for (;;) {
if ((l_V_898 == NULL)) goto L_end899;
{
if ((r_FIND_LITERAL(((*(R17 *)rt_nil_check(l_V_898))).f_NAME, ((*(R22 *)rt_nil_check(p_T))).f_BASE) == NULL))
{
r_FAILT(p_LINE, rt_str("not a literal of the type: ", 27), ((*(R17 *)rt_nil_check(l_V_898))).f_NAME);
}
{
R14 l_SAVED_CODE_900; memset(&l_SAVED_CODE_900, 0, sizeof l_SAVED_CODE_900);
S_R14(&l_SAVED_CODE_900, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_B_901; memset(&l_B_901, 0, sizeof l_B_901);
S_R26(&l_B_901, r_EXPR(((*(R17 *)rt_nil_check(l_V_898))).f_A, NULL), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_900, 0);
if ((!(((*(R22 *)rt_nil_check((l_B_901).f_T))).f_KIND == g_T_BITS)))
{
r_FAIL(p_LINE, rt_str("a representation in VALUES is a bitstring (3.4.3)", 49));
}
if ((((*(R22 *)rt_nil_check((l_B_901).f_T))).f_MLEN).f_OK)
{
if ((!((((*(R22 *)rt_nil_check((l_B_901).f_T))).f_MLEN).f_V == (l_N_891).f_V)))
{
r_FAILT(p_LINE, rt_str("the representation must have SIZE bits (3.4.3): ", 48), ((*(R17 *)rt_nil_check(l_V_898))).f_NAME);
}
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_898))).f_A))).f_KIND == g_N_BITS))
{
{
R17 * l_U_902; memset(&l_U_902, 0, sizeof l_U_902);
l_U_902 = ((*(R17 *)rt_nil_check(l_V_898))).f_NEXT;
for (;;) {
if ((l_U_902 == NULL)) goto L_end903;
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_902))).f_A))).f_KIND == g_N_BITS))
{
if (r_TEQ(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_902))).f_A))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_898))).f_A))).f_NAME))
{
r_FAILT(p_LINE, rt_str("two literals have the same representation (3.4.3): ", 51), ((*(R17 *)rt_nil_check(l_U_902))).f_NAME);
}
}
l_U_902 = ((*(R17 *)rt_nil_check(l_U_902))).f_NEXT;
}
RT_B_TICK();
} L_end903: ;
}
}
}
l_V_898 = ((*(R17 *)rt_nil_check(l_V_898))).f_NEXT;
}
RT_B_TICK();
} L_end899: ;
}
}
}
static void r_STRING_LENGTH(R22 * p_T, R17 * p_A) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
{
R21 * l_B_904; memset(&l_B_904, 0, sizeof l_B_904);
l_B_904 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_904 == NULL)) goto L_end905;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_904))).f_NAME, ((*(R17 *)rt_nil_check(p_A))).f_NAME) && ((((*(R21 *)rt_nil_check(l_B_904))).f_C).f_LEN > ((rt_int)0LL))))
{
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, ((*(R21 *)rt_nil_check(l_B_904))).f_C, 0);
S_R25(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, ({ R25 rc906; memset(&rc906, 0, sizeof rc906);  rc906.f_OK = ((*(R21 *)rt_nil_check(l_B_904))).f_HASMV; rc906.f_V = ((*(R21 *)rt_nil_check(l_B_904))).f_MV; rc906; }), 0);
return;
}
l_B_904 = ((*(R21 *)rt_nil_check(l_B_904))).f_NEXT;
}
RT_B_TICK();
} L_end905: ;
}
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_GEN, ((*(R17 *)rt_nil_check(p_A))).f_NAME, 0);
return;
}
else if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
return;
}
{
R9 l_C_907; memset(&l_C_907, 0, sizeof l_C_907);
R25 l_M_908; memset(&l_M_908, 0, sizeof l_M_908);
r_ATTR_VALUE(p_A, &l_C_907, &l_M_908);
S_R9(&((*(R22 *)rt_nil_check(p_T))).f_LEN_C, l_C_907, 0);
S_R25(&((*(R22 *)rt_nil_check(p_T))).f_MLEN, l_M_908, 0);
((*(R22 *)rt_nil_check(p_T))).f_RLEVEL = r_CUR_LEVEL();
}
}
static R22 * r_RESOLVE_ARRAY(R17 * p_TS) { RT_B_TICK(); 
R22 * l_T_909; memset(&l_T_909, 0, sizeof l_T_909);
l_T_909 = r_NEW_TYP(g_T_ARR);
R17 * l_R_910; memset(&l_R_910, 0, sizeof l_R_910);
l_R_910 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R28 * l_TAIL_911; memset(&l_TAIL_911, 0, sizeof l_TAIL_911);
l_TAIL_911 = NULL;
for (;;) {
if ((l_R_910 == NULL)) goto L_end912;
{
{
R28 * l_B_913; memset(&l_B_913, 0, sizeof l_B_913);
l_B_913 = ({ R28 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
R26 l_LO_914; memset(&l_LO_914, 0, sizeof l_LO_914);
R26 l_HI_915; memset(&l_HI_915, 0, sizeof l_HI_915);
if (r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_910))).f_A))
{
S_R26(&l_LO_914, r_MKET(r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_910))).f_A))).f_NAME), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_LO_914, r_EXPR(((*(R17 *)rt_nil_check(l_R_910))).f_A, NULL), 0);
}
if (r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_910))).f_B))
{
S_R26(&l_HI_915, r_MKET(r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_910))).f_B))).f_NAME), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
}
else
{
S_R26(&l_HI_915, r_EXPR(((*(R17 *)rt_nil_check(l_R_910))).f_B, (l_LO_914).f_T), 0);
}
S_R28(&(*(R28 *)rt_nil_check(l_B_913)), ({ R28 rc916; memset(&rc916, 0, sizeof rc916);  S_R9(&rc916.f_LO, (l_LO_914).f_C, 0); S_R9(&rc916.f_HI, (l_HI_915).f_C, 0); S_R25(&rc916.f_MLO, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_910))).f_A), 0); S_R25(&rc916.f_MHI, r_MANIFEST(((*(R17 *)rt_nil_check(l_R_910))).f_B), 0); rc916.f_ANYARG = 0; rc916.f_NEXT = NULL; rc916; }), 0);
if (((!r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_910))).f_A)) && (!r_IS_GENERIC_NODE(((*(R17 *)rt_nil_check(l_R_910))).f_B))))
{
if ((!r_SAME_CLASS(r_REAL_TYPE((l_LO_914).f_T), r_REAL_TYPE((l_HI_915).f_T))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_910))).f_LINE, rt_str("the bounds of an array-bound are of one type class (3.8.1)", 58));
}
S_R9(&((*(R28 *)rt_nil_check(l_B_913))).f_LO, r_INDEX_OF(l_LO_914, ((*(R17 *)rt_nil_check(l_R_910))).f_LINE), 0);
S_R9(&((*(R28 *)rt_nil_check(l_B_913))).f_HI, r_INDEX_OF(l_HI_915, ((*(R17 *)rt_nil_check(l_R_910))).f_LINE), 0);
}
if (((((*(R22 *)rt_nil_check((l_LO_914).f_T))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check((l_LO_914).f_T))).f_KIND == g_T_ABS)))
{
S_R25(&((*(R28 *)rt_nil_check(l_B_913))).f_MLO, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_R_910))).f_A, (l_LO_914).f_T), 0);
S_R25(&((*(R28 *)rt_nil_check(l_B_913))).f_MHI, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_R_910))).f_B, (l_LO_914).f_T), 0);
if ((!r_TEQ(((*(R28 *)rt_nil_check(l_B_913))).f_LO, (l_LO_914).f_C)))
{
S_R25(&((*(R28 *)rt_nil_check(l_B_913))).f_MLO, r_NO_MVAL(), 0);
S_R25(&((*(R28 *)rt_nil_check(l_B_913))).f_MHI, r_NO_MVAL(), 0);
}
}
else if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_LO_914).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_910))).f_LINE, rt_str("array bounds are integer or enumerated (3.8.1)", 46));
}
if ((l_TAIL_911 == NULL))
{
((*(R22 *)rt_nil_check(l_T_909))).f_BOUNDS = l_B_913;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_911))).f_NEXT = l_B_913;
}
l_TAIL_911 = l_B_913;
((*(R22 *)rt_nil_check(l_T_909))).f_DIMS = rt_add(((*(R22 *)rt_nil_check(l_T_909))).f_DIMS, ((rt_int)1LL));
}
l_R_910 = ((*(R17 *)rt_nil_check(l_R_910))).f_NEXT;
}
RT_B_TICK();
} L_end912: ;
((*(R22 *)rt_nil_check(l_T_909))).f_RLEVEL = r_CUR_LEVEL();
((*(R22 *)rt_nil_check(l_T_909))).f_ELEM = r_RESOLVE(((*(R17 *)rt_nil_check(p_TS))).f_C);
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_909))).f_ELEM))).f_KIND == g_T_ARR))
{
r_FAIL(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("ARRAY ... OF ARRAY is forbidden (3.8.1)", 39));
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_D == NULL)))
{
((*(R22 *)rt_nil_check(l_T_909))).f_REPS = r_EXPAND_REP(((*(R17 *)rt_nil_check(p_TS))).f_D, l_T_909, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
r_CHECK_REP_CLASS(l_T_909, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
S_R9(&((*(R22 *)rt_nil_check(l_T_909))).f_CNAME, r_ARRAY_STRUCT(((*(R22 *)rt_nil_check(l_T_909))).f_ELEM, ((*(R22 *)rt_nil_check(l_T_909))).f_DIMS), 0);
{ R22 * rv917 = l_T_909;
return rv917; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER(R17 * p_TS) { RT_B_TICK(); 
R12 * l_Y_918; memset(&l_Y_918, 0, sizeof l_Y_918);
l_Y_918 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((((*(R17 *)rt_nil_check(p_TS))).f_A == NULL))
{
{
R21 * l_B_919; memset(&l_B_919, 0, sizeof l_B_919);
l_B_919 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_919 == NULL)) goto L_end920;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_919))).f_NAME, ((*(R17 *)rt_nil_check(p_TS))).f_NAME) && (!(((*(R21 *)rt_nil_check(l_B_919))).f_T == NULL))))
{
if ((!(r_CUR_GENERIC() == NULL)))
{
if ((r_FIND_BIND(((*(R12 *)rt_nil_check(r_CUR_GENERIC()))).f_BINDINGS, ((*(R17 *)rt_nil_check(p_TS))).f_NAME) == l_B_919))
{
{ R22 * rv921 = r_MARK_GENP(((*(R21 *)rt_nil_check(l_B_919))).f_T, ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
return rv921; }
}
}
{ R22 * rv922 = ((*(R21 *)rt_nil_check(l_B_919))).f_T;
return rv922; }
}
l_B_919 = ((*(R21 *)rt_nil_check(l_B_919))).f_NEXT;
}
RT_B_TICK();
} L_end920: ;
}
}
if ((l_Y_918 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("unknown type ", 13), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_918))).f_KIND == g_Y_GEN))
{
{ R22 * rv923 = r_GEN_TYPE(p_TS);
return rv923; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_918))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("not a type: ", 12), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((!r_SEG_VISIBLE(l_Y_918, ((*(R17 *)rt_nil_check(p_TS))).f_LINE)))
{
}
if ((((*(R12 *)rt_nil_check(l_Y_918))).f_DECL == NULL))
{
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
{ R22 * rv924 = ((*(R12 *)rt_nil_check(l_Y_918))).f_T;
return rv924; }
}
{
R17 * l_D_925; memset(&l_D_925, 0, sizeof l_D_925);
l_D_925 = ((*(R12 *)rt_nil_check(l_Y_918))).f_DECL;
R22 * l_T_926; memset(&l_T_926, 0, sizeof l_T_926);
if ((((*(R17 *)rt_nil_check(l_D_925))).f_A == NULL))
{
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_A == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("this type has no parameters: ", 29), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_918))).f_T == NULL))
{
if (((*(R12 *)rt_nil_check(l_Y_918))).f_BUSY)
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("a circular type declaration: ", 29), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
((*(R12 *)rt_nil_check(l_Y_918))).f_BUSY = 1;
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_925))).f_B))).f_KIND == g_TS_RECORD))
{
((*(R12 *)rt_nil_check(l_Y_918))).f_T = r_RESOLVE_RECORD(((*(R17 *)rt_nil_check(l_D_925))).f_B, r_RECORD_NAME(l_Y_918), l_Y_918, NULL);
}
else
{
((*(R12 *)rt_nil_check(l_Y_918))).f_T = r_RESOLVE_IN_DECL(l_Y_918, NULL);
if ((((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_918))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_918))).f_T))).f_KIND == g_T_ENUM))))
{
((*(R12 *)rt_nil_check(l_Y_918))).f_T = r_COPY_TYP(((*(R12 *)rt_nil_check(l_Y_918))).f_T);
}
}
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_918))).f_T))).f_NAME).f_LEN == ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_918))).f_T))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_918))).f_NAME, 0);
}
((*(R12 *)rt_nil_check(l_Y_918))).f_BUSY = 0;
}
l_T_926 = ((*(R12 *)rt_nil_check(l_Y_918))).f_T;
}
else
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_925))).f_B))).f_KIND == g_TS_RECORD))
{
l_T_926 = r_RECORD_INSTANCE(l_Y_918, p_TS);
}
else
{
l_T_926 = r_RESOLVE_IN_DECL(l_Y_918, p_TS);
}
}
{ R22 * rv927 = r_ABSTRACT_VIEW(l_Y_918, l_T_926);
return rv927; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ABSTRACT_VIEW(R12 * p_Y, R22 * p_T) { RT_B_TICK(); 
R22 * l_A_928; memset(&l_A_928, 0, sizeof l_A_928);
if (((((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL) || (!((*(R12 *)rt_nil_check(p_Y))).f_EXPORTED)))
{
{ R22 * rv929 = p_T;
return rv929; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ R22 * rv930 = p_T;
return rv930; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM))
{
if (r_EXPORTS_ORDER(p_Y))
{
{ R22 * rv931 = p_T;
return rv931; }
}
l_A_928 = r_COPY_TYP(p_T);
((*(R22 *)rt_nil_check(l_A_928))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_928))).f_DECL = p_Y;
{ R22 * rv932 = l_A_928;
return rv932; }
}
l_A_928 = r_NEW_TYP(g_T_ABS);
((*(R22 *)rt_nil_check(l_A_928))).f_BASE = p_T;
S_R9(&((*(R22 *)rt_nil_check(l_A_928))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R22 *)rt_nil_check(l_A_928))).f_MODL = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
((*(R22 *)rt_nil_check(l_A_928))).f_DECL = p_Y;
((*(R22 *)rt_nil_check(l_A_928))).f_ARGS = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
{ R22 * rv933 = l_A_928;
return rv933; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTS_ORDER(R12 * p_Y) { RT_B_TICK(); 
{ rt_int rv934 = (((((r_EXPORTS_OP(p_Y, rt_str("LESS_THAN_", 10)) && r_EXPORTS_OP(p_Y, rt_str("LESS_EQUAL_", 11))) && r_EXPORTS_OP(p_Y, rt_str("GREATER_THAN_", 13))) && r_EXPORTS_OP(p_Y, rt_str("GREATER_EQUAL_", 14))) && r_EXPORTS_OP(p_Y, rt_str("SUCC", 4))) && r_EXPORTS_OP(p_Y, rt_str("PRED", 4)));
return rv934; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTS_OP(R12 * p_Y, rstr p_OP) { RT_B_TICK(); 
R12 * l_R_935; memset(&l_R_935, 0, sizeof l_R_935);
l_R_935 = ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_MODL))).f_MEMBERS;
for (;;) {
if ((l_R_935 == NULL)) goto L_end936;
{
if ((((((*(R12 *)rt_nil_check(l_R_935))).f_KIND == g_Y_ROUTINE) && ((*(R12 *)rt_nil_check(l_R_935))).f_EXPORTED) && r_TEQ(((*(R12 *)rt_nil_check(l_R_935))).f_PREFIX, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)))
{
if (r_TEQS(r_BASE_NAME(r_ORIGINAL(l_R_935)), p_OP))
{
{ rt_int rv937 = 1;
return rv937; }
}
}
l_R_935 = ((*(R12 *)rt_nil_check(l_R_935))).f_SNEXT;
}
RT_B_TICK();
} L_end936: ;
{ rt_int rv938 = 0;
return rv938; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_UNORDERED(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM)))
{
{ rt_int rv939 = 0;
return rv939; }
}
if (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_UNORDERED)
{
{ rt_int rv940 = 1;
return rv940; }
}
if (((!(((*(R22 *)rt_nil_check(p_T))).f_DECL == NULL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_MODL == NULL))))
{
{ rt_int rv941 = (!r_IN_MODULE(((*(R22 *)rt_nil_check(p_T))).f_MODL));
return rv941; }
}
{ rt_int rv942 = 0;
return rv942; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_P_943; memset(&l_P_943, 0, sizeof l_P_943);
l_P_943 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
for (;;) {
if ((l_P_943 == NULL)) goto L_end944;
{
if ((l_P_943 == p_M))
{
{ rt_int rv945 = 1;
return rv945; }
}
l_P_943 = ((*(R12 *)rt_nil_check(l_P_943))).f_MODL;
}
RT_B_TICK();
} L_end944: ;
{ rt_int rv946 = 0;
return rv946; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_IN_DECL(R12 * p_Y, R17 * p_TS) { RT_B_TICK(); 
R17 * l_D_947; memset(&l_D_947, 0, sizeof l_D_947);
l_D_947 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_948; memset(&l_T_948, 0, sizeof l_T_948);
if ((p_TS == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
l_T_948 = r_RESOLVE(((*(R17 *)rt_nil_check(l_D_947))).f_B);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
{ R22 * rv949 = l_T_948;
return rv949; }
}
r_OPEN_SCOPE();
r_BIND_FORMALS(((*(R17 *)rt_nil_check(l_D_947))).f_A, p_TS);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
l_T_948 = r_RESOLVE(((*(R17 *)rt_nil_check(l_D_947))).f_B);
((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL, ((rt_int)1LL));
r_CLOSE_SCOPE();
{ R22 * rv950 = l_T_948;
return rv950; }
rt_raise(RT_X_INIT);
}
static void r_BIND_FORMALS(R17 * p_FORMALS, R17 * p_TS) { RT_B_TICK(); 
R17 * l_F_951; memset(&l_F_951, 0, sizeof l_F_951);
l_F_951 = p_FORMALS;
R17 * l_A_952; memset(&l_A_952, 0, sizeof l_A_952);
l_A_952 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_F_951 == NULL)) goto L_end953;
{
{
R17 * l_N_954; memset(&l_N_954, 0, sizeof l_N_954);
l_N_954 = ((*(R17 *)rt_nil_check(l_F_951))).f_A;
for (;;) {
if ((l_N_954 == NULL)) goto L_end955;
{
if ((l_A_952 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R17 *)rt_nil_check(l_F_951))).f_B == NULL))
{
{
R12 * l_Y_956; memset(&l_Y_956, 0, sizeof l_Y_956);
l_Y_956 = r_NEW_SYM(g_Y_TYPE, ((*(R17 *)rt_nil_check(l_N_954))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_956))).f_T = r_ARG_TYPE(l_A_952);
r_DEFINE(l_Y_956, ((*(R17 *)rt_nil_check(l_A_952))).f_LINE);
}
}
else
{
{
R12 * l_Y_957; memset(&l_Y_957, 0, sizeof l_Y_957);
l_Y_957 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(l_N_954))).f_NAME);
R9 l_C_958; memset(&l_C_958, 0, sizeof l_C_958);
R25 l_M_959; memset(&l_M_959, 0, sizeof l_M_959);
((*(R12 *)rt_nil_check(l_Y_957))).f_T = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_951))).f_B);
if (((((*(R17 *)rt_nil_check(l_A_952))).f_KIND == g_N_ANY) && (!(((*(R17 *)rt_nil_check(l_F_951))).f_IV == ((rt_int)1LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_952))).f_LINE, rt_str("ANY is only for TAG formals (3.12.2)", 36));
}
if ((((*(R17 *)rt_nil_check(l_A_952))).f_KIND == g_N_ANY))
{
S_R9(&l_C_958, r_MK(rt_str("ANY", 3)), 0);
S_R25(&l_M_959, r_NO_MVAL(), 0);
}
else if (((((*(R17 *)rt_nil_check(l_A_952))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_A_952))).f_KIND == g_N_DONTCARE)))
{
S_R9(&l_C_958, r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(l_A_952))).f_NAME), 0);
S_R25(&l_M_959, r_NO_MVAL(), 0);
}
else
{
r_ATTR_VALUE(l_A_952, &l_C_958, &l_M_959);
}
if (((((l_M_959).f_OK && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_957))).f_T))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_957))).f_T))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_957))).f_T))).f_SCALE == ((rt_int)0LL))))
{
if ((((l_M_959).f_V < (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_957))).f_T))).f_MLO).f_V) || ((l_M_959).f_V > (((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_957))).f_T))).f_MHI).f_V)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_952))).f_LINE, rt_str("the argument is outside the range of the type formal (3.12.2)", 61));
}
}
if ((((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_957))).f_T))).f_KIND == g_T_INT)) && (!r_IS_GEN_TEXT(l_C_958))) && (!(((*(R17 *)rt_nil_check(l_A_952))).f_KIND == g_N_ANY))))
{
S_R9(&l_C_958, (r_EXPR(l_A_952, ((*(R12 *)rt_nil_check(l_Y_957))).f_T)).f_C, 0);
S_R25(&l_M_959, r_ENUM_MANIFEST(l_A_952, ((*(R12 *)rt_nil_check(l_Y_957))).f_T), 0);
}
S_R9(&((*(R12 *)rt_nil_check(l_Y_957))).f_ACCESS, l_C_958, 0);
((*(R12 *)rt_nil_check(l_Y_957))).f_HASMV = (l_M_959).f_OK;
((*(R12 *)rt_nil_check(l_Y_957))).f_MV = (l_M_959).f_V;
((*(R12 *)rt_nil_check(l_Y_957))).f_INPUT = 1;
r_DEFINE(l_Y_957, ((*(R17 *)rt_nil_check(l_A_952))).f_LINE);
}
}
l_A_952 = ((*(R17 *)rt_nil_check(l_A_952))).f_NEXT;
l_N_954 = ((*(R17 *)rt_nil_check(l_N_954))).f_NEXT;
}
RT_B_TICK();
} L_end955: ;
}
l_F_951 = ((*(R17 *)rt_nil_check(l_F_951))).f_NEXT;
}
RT_B_TICK();
} L_end953: ;
if ((!(l_A_952 == NULL)))
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
{ R9 rv960 = ((*(R12 *)rt_nil_check(p_Y))).f_FWD;
return rv960; }
rt_raise(RT_X_INIT);
}
static R22 * r_TARGET(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
((*(R22 *)rt_nil_check(p_T))).f_TARGET = r_RESOLVE(((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS);
}
{ R22 * rv961 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET;
return rv961; }
rt_raise(RT_X_INIT);
}
static R9 r_CTYPE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_962; memset(&l_K_962, 0, sizeof l_K_962);
l_K_962 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if (r_IS_SCALAR(p_T))
{
{ R9 rv963 = r_MK(rt_str("rt_int", 6));
return rv963; }
}
else if ((l_K_962 == g_T_FLOAT))
{
if (r_IS_D(p_T))
{
{ R9 rv964 = r_MK(rt_str("rt_b_d", 6));
return rv964; }
}
{ R9 rv965 = r_MK(rt_str("double", 6));
return rv965; }
}
else if ((((l_K_962 == g_T_STR) || (l_K_962 == g_T_BITS)) || (l_K_962 == g_T_XFIX)))
{
{ R9 rv966 = r_MK(rt_str("rstr", 4));
return rv966; }
}
else if (((l_K_962 == g_T_REC) || (l_K_962 == g_T_ARR)))
{
{ R9 rv967 = ((*(R22 *)rt_nil_check(p_T))).f_CNAME;
return rv967; }
}
else if ((l_K_962 == g_T_ABS))
{
{ R9 rv968 = r_CTYPE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv968; }
}
else if ((l_K_962 == g_T_SEM))
{
{ R9 rv969 = r_MK(rt_str("rt_b_sem *", 10));
return rv969; }
}
else if ((l_K_962 == g_T_PATHS))
{
{ R9 rv970 = r_MK(rt_str("rt_b_paths", 10));
return rv970; }
}
else if ((l_K_962 == g_T_VOID))
{
{ R9 rv971 = r_MK(rt_str("void", 4));
return rv971; }
}
else if ((l_K_962 == g_T_PTR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_TARGET == NULL))
{
{
R17 * l_TT_972; memset(&l_TT_972, 0, sizeof l_TT_972);
l_TT_972 = ((*(R22 *)rt_nil_check(p_T))).f_TARGET_TS;
if (((((*(R17 *)rt_nil_check(l_TT_972))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(l_TT_972))).f_A == NULL)))
{
{
R12 * l_Y_973; memset(&l_Y_973, 0, sizeof l_Y_973);
l_Y_973 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(l_TT_972))).f_NAME);
if ((!(l_Y_973 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_973))).f_KIND == g_Y_TYPE) && (!(((*(R12 *)rt_nil_check(l_Y_973))).f_DECL == NULL))))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_973))).f_DECL))).f_B))).f_KIND == g_TS_RECORD) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_973))).f_DECL))).f_A == NULL)))
{
{ R9 rv974 = r_CATS(r_RECORD_NAME(l_Y_973), rt_str(" *", 2));
return rv974; }
}
}
}
}
}
}
}
{ R9 rv975 = r_CATS(r_CTYPE(r_TARGET(p_T)), rt_str(" *", 2));
return rv975; }
}
r_FAIL(((rt_int)0LL), rt_str("no C type", 9));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GENERIC_NODE(R17 * p_E) { RT_B_TICK(); 
{ rt_int rv976 = ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_DONTCARE));
return rv976; }
rt_raise(RT_X_INIT);
}
static R27 * r_NEW_FIELD(R9 p_NAME, R22 * p_T, rt_int p_KIND) { RT_B_TICK(); 
R27 * l_F_977; memset(&l_F_977, 0, sizeof l_F_977);
l_F_977 = ({ R27 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R27(&(*(R27 *)rt_nil_check(l_F_977)), ({ R27 rc978; memset(&rc978, 0, sizeof rc978);  S_R9(&rc978.f_NAME, p_NAME, 0); S_R9(&rc978.f_CNAME, r_FMT1(rt_str("f_@", 3), r_CID(p_NAME)), 0); rc978.f_T = p_T; rc978.f_KIND = p_KIND; S_R9(&rc978.f_TAGF, r_NO_TEXT(), 0); rc978.f_LABELS = NULL; rc978.f_NEXT = NULL; rc978; }), 0);
{ R27 * rv979 = l_F_977;
return rv979; }
rt_raise(RT_X_INIT);
}
static R27 * r_FIND_FIELD(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R27 * l_F_980; memset(&l_F_980, 0, sizeof l_F_980);
l_F_980 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_980 == NULL)) goto L_end981;
{
if (r_TEQ(((*(R27 *)rt_nil_check(l_F_980))).f_NAME, p_NAME))
{
{ R27 * rv982 = l_F_980;
return rv982; }
}
l_F_980 = ((*(R27 *)rt_nil_check(l_F_980))).f_NEXT;
}
RT_B_TICK();
} L_end981: ;
{ R27 * rv983 = NULL;
return rv983; }
rt_raise(RT_X_INIT);
}
static R27 * r_FIND_VFIELD(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R27 * l_F_984; memset(&l_F_984, 0, sizeof l_F_984);
l_F_984 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R27 * l_FIRST_985; memset(&l_FIRST_985, 0, sizeof l_FIRST_985);
l_FIRST_985 = NULL;
for (;;) {
if ((l_F_984 == NULL)) goto L_end986;
{
if (r_TEQ(((*(R27 *)rt_nil_check(l_F_984))).f_NAME, p_NAME))
{
if ((l_FIRST_985 == NULL))
{
l_FIRST_985 = l_F_984;
}
if (((((*(R27 *)rt_nil_check(l_F_984))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
{ R27 * rv987 = l_F_984;
return rv987; }
}
{
R25 l_TAGV_988; memset(&l_TAGV_988, 0, sizeof l_TAGV_988);
S_R25(&l_TAGV_988, r_TAG_VALUE(p_T, ((*(R27 *)rt_nil_check(l_F_984))).f_TAGF), 0);
if ((l_TAGV_988).f_OK)
{
if (r_LABELS_HAVE(((*(R27 *)rt_nil_check(l_F_984))).f_LABELS, (l_TAGV_988).f_V, ((*(R27 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R27 *)rt_nil_check(l_F_984))).f_TAGF)))).f_T))
{
{ R27 * rv989 = l_F_984;
return rv989; }
}
}
}
}
l_F_984 = ((*(R27 *)rt_nil_check(l_F_984))).f_NEXT;
}
RT_B_TICK();
} L_end986: ;
{ R27 * rv990 = l_FIRST_985;
return rv990; }
rt_raise(RT_X_INIT);
}
static void r_ADD_FIELD(R22 * p_T, R27 * p_F, R27 * *p_TAIL) { RT_B_TICK(); 
R27 * l_P_991; memset(&l_P_991, 0, sizeof l_P_991);
l_P_991 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
rt_int l_N_992; memset(&l_N_992, 0, sizeof l_N_992);
l_N_992 = ((rt_int)0LL);
for (;;) {
if ((l_P_991 == NULL)) goto L_end993;
{
if (r_TEQ(((*(R27 *)rt_nil_check(l_P_991))).f_NAME, ((*(R27 *)rt_nil_check(p_F))).f_NAME))
{
if ((((((((*(R27 *)rt_nil_check(l_P_991))).f_TAGF).f_LEN == ((rt_int)0LL)) || ((((*(R27 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL))) || (!r_TEQ(((*(R27 *)rt_nil_check(l_P_991))).f_TAGF, ((*(R27 *)rt_nil_check(p_F))).f_TAGF))) || (((*(R27 *)rt_nil_check(l_P_991))).f_LABELS == ((*(R27 *)rt_nil_check(p_F))).f_LABELS)))
{
r_FAILT(((rt_int)0LL), rt_str("the field names of a record must be distinct (3.9.1): ", 54), ((*(R27 *)rt_nil_check(p_F))).f_NAME);
}
l_N_992 = rt_add(l_N_992, ((rt_int)1LL));
}
l_P_991 = ((*(R27 *)rt_nil_check(l_P_991))).f_NEXT;
}
RT_B_TICK();
} L_end993: ;
if ((l_N_992 > ((rt_int)0LL)))
{
S_R9(&((*(R27 *)rt_nil_check(p_F))).f_CNAME, r_FMT2(rt_str("@_@", 3), ((*(R27 *)rt_nil_check(p_F))).f_CNAME, r_NUM(l_N_992)), 0);
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
R17 * l_D_994; memset(&l_D_994, 0, sizeof l_D_994);
l_D_994 = p_DECLS;
for (;;) {
if ((l_D_994 == NULL)) goto L_end995;
{
if ((((*(R17 *)rt_nil_check(l_D_994))).f_KIND == g_N_VAR))
{
{
R22 * l_FT_996; memset(&l_FT_996, 0, sizeof l_FT_996);
l_FT_996 = r_RESOLVE(((*(R17 *)rt_nil_check(l_D_994))).f_B);
R17 * l_N_997; memset(&l_N_997, 0, sizeof l_N_997);
l_N_997 = ((*(R17 *)rt_nil_check(l_D_994))).f_A;
for (;;) {
if ((l_N_997 == NULL)) goto L_end998;
{
{
R27 * l_F_999; memset(&l_F_999, 0, sizeof l_F_999);
l_F_999 = r_NEW_FIELD(((*(R17 *)rt_nil_check(l_N_997))).f_NAME, l_FT_996, ((rt_int)0LL));
S_R9(&((*(R27 *)rt_nil_check(l_F_999))).f_TAGF, p_TAGN, 0);
((*(R27 *)rt_nil_check(l_F_999))).f_LABELS = p_LABELS;
r_ADD_FIELD(p_T, l_F_999, &(*p_TAIL));
if (((r_LOOKUP(((*(R17 *)rt_nil_check(l_N_997))).f_NAME) == NULL) || (!(((*(R12 *)rt_nil_check(r_LOOKUP(((*(R17 *)rt_nil_check(l_N_997))).f_NAME)))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))))
{
{
R12 * l_Y_1000; memset(&l_Y_1000, 0, sizeof l_Y_1000);
l_Y_1000 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(l_N_997))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_1000))).f_T = l_FT_996;
S_R9(&((*(R12 *)rt_nil_check(l_Y_1000))).f_ACCESS, r_FMT1(rt_str("$S.@", 4), ((*(R27 *)rt_nil_check(l_F_999))).f_CNAME), 0);
((*(R12 *)rt_nil_check(l_Y_1000))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_Y_1000))).f_LEVEL = rt_neg(((rt_int)1LL));
((*(R12 *)rt_nil_check(l_Y_1000))).f_OWNER = rt_neg(((rt_int)1LL));
r_DEFINE(l_Y_1000, ((*(R17 *)rt_nil_check(l_D_994))).f_LINE);
}
}
}
l_N_997 = ((*(R17 *)rt_nil_check(l_N_997))).f_NEXT;
}
RT_B_TICK();
} L_end998: ;
}
}
else
{
{
R27 * l_TF_1001; memset(&l_TF_1001, 0, sizeof l_TF_1001);
l_TF_1001 = r_FIND_FIELD(p_T, ((*(R17 *)rt_nil_check(l_D_994))).f_NAME);
R17 * l_S_1002; memset(&l_S_1002, 0, sizeof l_S_1002);
l_S_1002 = ((*(R17 *)rt_nil_check(l_D_994))).f_A;
if ((l_TF_1001 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_994))).f_LINE, rt_str("a variant part needs a TAG parameter (3.9.1): ", 46), ((*(R17 *)rt_nil_check(l_D_994))).f_NAME);
}
if ((!(((*(R27 *)rt_nil_check(l_TF_1001))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_994))).f_LINE, rt_str("not a TAG parameter: ", 21), ((*(R17 *)rt_nil_check(l_D_994))).f_NAME);
}
{
R17 * l_O_1003; memset(&l_O_1003, 0, sizeof l_O_1003);
l_O_1003 = p_DECLS;
for (;;) {
if ((l_O_1003 == l_D_994)) goto L_end1004;
{
if ((((*(R17 *)rt_nil_check(l_O_1003))).f_KIND == g_N_VARIANT))
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_O_1003))).f_NAME, ((*(R17 *)rt_nil_check(l_D_994))).f_NAME))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_994))).f_LINE, rt_str("two variant parts discriminate on the tag ", 42), ((*(R17 *)rt_nil_check(l_D_994))).f_NAME);
}
}
l_O_1003 = ((*(R17 *)rt_nil_check(l_O_1003))).f_NEXT;
}
RT_B_TICK();
} L_end1004: ;
}
r_CHECK_VARIANT_NAMES(l_D_994, ((*(R27 *)rt_nil_check(l_TF_1001))).f_T);
for (;;) {
if ((l_S_1002 == NULL)) goto L_end1005;
{
r_OPEN_SCOPE();
r_RECORD_FIELDS(p_T, ((*(R17 *)rt_nil_check(l_S_1002))).f_B, C_R9(((*(R17 *)rt_nil_check(l_D_994))).f_NAME), ((*(R17 *)rt_nil_check(l_S_1002))).f_A, &(*p_TAIL));
r_CLOSE_SCOPE();
l_S_1002 = ((*(R17 *)rt_nil_check(l_S_1002))).f_NEXT;
}
RT_B_TICK();
} L_end1005: ;
}
}
l_D_994 = ((*(R17 *)rt_nil_check(l_D_994))).f_NEXT;
}
RT_B_TICK();
} L_end995: ;
}
static void r_CHECK_VARIANT_NAMES(R17 * p_D, R22 * p_TT) { RT_B_TICK(); 
R17 * l_S_1006; memset(&l_S_1006, 0, sizeof l_S_1006);
l_S_1006 = ((*(R17 *)rt_nil_check(p_D))).f_A;
R17 * l_LOS_1007; memset(&l_LOS_1007, 0, sizeof l_LOS_1007);
l_LOS_1007 = NULL;
R17 * l_HIS_1008; memset(&l_HIS_1008, 0, sizeof l_HIS_1008);
l_HIS_1008 = NULL;
rt_int l_LO_LIM_1009; memset(&l_LO_LIM_1009, 0, sizeof l_LO_LIM_1009);
rt_int l_HI_LIM_1010; memset(&l_HI_LIM_1010, 0, sizeof l_HI_LIM_1010);
R22 * l_R_1011; memset(&l_R_1011, 0, sizeof l_R_1011);
l_R_1011 = r_REAL_TYPE(p_TT);
l_LO_LIM_1009 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
l_HI_LIM_1010 = INT64_MAX;
if ((((*(R22 *)rt_nil_check(l_R_1011))).f_KIND == g_T_ENUM))
{
l_LO_LIM_1009 = ((rt_int)0LL);
l_HI_LIM_1010 = rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_R_1011))).f_BASE))).f_NLITS, ((rt_int)1LL));
}
else if ((((*(R22 *)rt_nil_check(l_R_1011))).f_KIND == g_T_BOOL))
{
l_LO_LIM_1009 = ((rt_int)0LL);
l_HI_LIM_1010 = ((rt_int)1LL);
}
if ((((*(R22 *)rt_nil_check(l_R_1011))).f_MLO).f_OK)
{
l_LO_LIM_1009 = (((*(R22 *)rt_nil_check(l_R_1011))).f_MLO).f_V;
}
if ((((*(R22 *)rt_nil_check(l_R_1011))).f_MHI).f_OK)
{
l_HI_LIM_1010 = (((*(R22 *)rt_nil_check(l_R_1011))).f_MHI).f_V;
}
for (;;) {
if ((l_S_1006 == NULL)) goto L_end1012;
{
{
R17 * l_L_1013; memset(&l_L_1013, 0, sizeof l_L_1013);
l_L_1013 = ((*(R17 *)rt_nil_check(l_S_1006))).f_A;
for (;;) {
if ((l_L_1013 == NULL)) goto L_end1014;
{
{
R25 l_A_1015; memset(&l_A_1015, 0, sizeof l_A_1015);
R25 l_B_1016; memset(&l_B_1016, 0, sizeof l_B_1016);
if ((((*(R17 *)rt_nil_check(l_L_1013))).f_KIND == g_N_RANGE))
{
S_R25(&l_A_1015, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_1013))).f_A, p_TT), 0);
S_R25(&l_B_1016, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_1013))).f_B, p_TT), 0);
if (((l_A_1015).f_OK && (((((*(R17 *)rt_nil_check(l_L_1013))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_L_1013))).f_IV == ((rt_int)3LL))))))
{
(l_A_1015).f_V = rt_add((l_A_1015).f_V, ((rt_int)1LL));
}
if (((l_B_1016).f_OK && (((*(R17 *)rt_nil_check(l_L_1013))).f_IV >= ((rt_int)2LL))))
{
(l_B_1016).f_V = rt_sub((l_B_1016).f_V, ((rt_int)1LL));
}
}
else
{
S_R25(&l_A_1015, r_ENUM_MANIFEST(l_L_1013, p_TT), 0);
S_R25(&l_B_1016, l_A_1015, 0);
}
if ((!(((l_A_1015).f_OK && (l_B_1016).f_OK))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_1013))).f_LINE, rt_str("a variant-name is manifest (3.9.1)", 34));
}
if (((((l_A_1015).f_V < l_LO_LIM_1009) || ((l_B_1016).f_V > l_HI_LIM_1010)) || ((l_A_1015).f_V > (l_B_1016).f_V)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_1013))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.1)", 49));
}
{
R17 * l_P_1017; memset(&l_P_1017, 0, sizeof l_P_1017);
l_P_1017 = l_LOS_1007;
R17 * l_Q_1018; memset(&l_Q_1018, 0, sizeof l_Q_1018);
l_Q_1018 = l_HIS_1008;
for (;;) {
if ((l_P_1017 == NULL)) goto L_end1019;
{
if ((((l_A_1015).f_V <= ((*(R17 *)rt_nil_check(l_Q_1018))).f_IV) && ((l_B_1016).f_V >= ((*(R17 *)rt_nil_check(l_P_1017))).f_IV)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_1013))).f_LINE, rt_str("a value of the tag names two variants (3.9.1)", 45));
}
l_P_1017 = ((*(R17 *)rt_nil_check(l_P_1017))).f_NEXT;
l_Q_1018 = ((*(R17 *)rt_nil_check(l_Q_1018))).f_NEXT;
}
RT_B_TICK();
} L_end1019: ;
}
{
R17 * l_P_1020; memset(&l_P_1020, 0, sizeof l_P_1020);
l_P_1020 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
R17 * l_Q_1021; memset(&l_Q_1021, 0, sizeof l_Q_1021);
l_Q_1021 = r_NEW_NODE(g_N_INT, ((rt_int)0LL));
((*(R17 *)rt_nil_check(l_P_1020))).f_IV = (l_A_1015).f_V;
((*(R17 *)rt_nil_check(l_Q_1021))).f_IV = (l_B_1016).f_V;
((*(R17 *)rt_nil_check(l_P_1020))).f_NEXT = l_LOS_1007;
((*(R17 *)rt_nil_check(l_Q_1021))).f_NEXT = l_HIS_1008;
l_LOS_1007 = l_P_1020;
l_HIS_1008 = l_Q_1021;
}
}
l_L_1013 = ((*(R17 *)rt_nil_check(l_L_1013))).f_NEXT;
}
RT_B_TICK();
} L_end1014: ;
}
l_S_1006 = ((*(R17 *)rt_nil_check(l_S_1006))).f_NEXT;
}
RT_B_TICK();
} L_end1012: ;
}
static R22 * r_RESOLVE_RECORD(R17 * p_TS, R9 p_CNAME, R12 * p_Y, R17 * p_FORMALS) { RT_B_TICK(); 
R22 * l_T_1022; memset(&l_T_1022, 0, sizeof l_T_1022);
l_T_1022 = r_NEW_TYP(g_T_REC);
R27 * l_TAIL_1023; memset(&l_TAIL_1023, 0, sizeof l_TAIL_1023);
l_TAIL_1023 = NULL;
((*(R22 *)rt_nil_check(l_T_1022))).f_BASE = l_T_1022;
((*(R22 *)rt_nil_check(l_T_1022))).f_DECL = p_Y;
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_D == NULL)))
{
((*(R22 *)rt_nil_check(l_T_1022))).f_REPS = r_EXPAND_REP(((*(R17 *)rt_nil_check(p_TS))).f_D, l_T_1022, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
r_CHECK_REP_CLASS(l_T_1022, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
if (((p_CNAME).f_LEN > ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(l_T_1022))).f_CNAME, p_CNAME, 0);
}
else
{
S_R9(&((*(R22 *)rt_nil_check(l_T_1022))).f_CNAME, r_NEW_NAME(rt_str("R", 1)), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R22 *)rt_nil_check(l_T_1022))).f_CNAME, ((*(R22 *)rt_nil_check(l_T_1022))).f_CNAME));
}
{
R17 * l_F_1024; memset(&l_F_1024, 0, sizeof l_F_1024);
l_F_1024 = p_FORMALS;
for (;;) {
if ((l_F_1024 == NULL)) goto L_end1025;
{
if ((!(((*(R17 *)rt_nil_check(l_F_1024))).f_B == NULL)))
{
{
R22 * l_FT_1026; memset(&l_FT_1026, 0, sizeof l_FT_1026);
l_FT_1026 = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_1024))).f_B);
R17 * l_N_1027; memset(&l_N_1027, 0, sizeof l_N_1027);
l_N_1027 = ((*(R17 *)rt_nil_check(l_F_1024))).f_A;
rt_int l_KIND_1028; memset(&l_KIND_1028, 0, sizeof l_KIND_1028);
l_KIND_1028 = ((rt_int)1LL);
if ((((*(R17 *)rt_nil_check(l_F_1024))).f_IV == ((rt_int)1LL)))
{
l_KIND_1028 = ((rt_int)2LL);
if (((!(r_IS_SCALAR(l_FT_1026))) || (!(((*(R22 *)rt_nil_check(l_FT_1026))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_F_1024))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
for (;;) {
if ((l_N_1027 == NULL)) goto L_end1029;
{
r_ADD_FIELD(l_T_1022, r_NEW_FIELD(((*(R17 *)rt_nil_check(l_N_1027))).f_NAME, l_FT_1026, l_KIND_1028), &l_TAIL_1023);
l_N_1027 = ((*(R17 *)rt_nil_check(l_N_1027))).f_NEXT;
}
RT_B_TICK();
} L_end1029: ;
}
}
l_F_1024 = ((*(R17 *)rt_nil_check(l_F_1024))).f_NEXT;
}
RT_B_TICK();
} L_end1025: ;
}
r_OPEN_SCOPE();
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_add(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_RECORD_FIELDS(l_T_1022, ((*(R17 *)rt_nil_check(p_TS))).f_A, r_NO_TEXT(), NULL, &l_TAIL_1023);
((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD, ((rt_int)1LL));
r_CLOSE_SCOPE();
r_CHECK_RECORD_REP(l_T_1022, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
r_COMPLETE_RECORD(l_T_1022);
{ R22 * rv1030 = l_T_1022;
return rv1030; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_RECORD_REP(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv1031 = 0;
return rv1031; }
}
{ rt_int rv1032 = ((((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_KIND == g_N_REP) && r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_NAME, rt_str("RECORD_REP", 10)));
return rv1032; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_RECORD_REP(R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_SEEN_1033; memset(&l_SEEN_1033, 0, sizeof l_SEEN_1033);
l_SEEN_1033 = NULL;
rt_int l_LISTED_1034; memset(&l_LISTED_1034, 0, sizeof l_LISTED_1034);
l_LISTED_1034 = 0;
if ((!r_IS_RECORD_REP(p_T)))
{
return;
}
{
R17 * l_P_1035; memset(&l_P_1035, 0, sizeof l_P_1035);
l_P_1035 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A;
for (;;) {
if ((l_P_1035 == NULL)) goto L_end1036;
{
if ((((*(R17 *)rt_nil_check(l_P_1035))).f_IV == ((rt_int)1LL)))
{
l_LISTED_1034 = 1;
}
r_CHECK_ELEMENTS(p_T, ((*(R17 *)rt_nil_check(l_P_1035))).f_A, r_NO_TEXT(), NULL, &l_SEEN_1033);
l_P_1035 = ((*(R17 *)rt_nil_check(l_P_1035))).f_NEXT;
}
RT_B_TICK();
} L_end1036: ;
}
if (l_LISTED_1034)
{
{
R27 * l_F_1037; memset(&l_F_1037, 0, sizeof l_F_1037);
l_F_1037 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1037 == NULL)) goto L_end1038;
{
if ((((((*(R27 *)rt_nil_check(l_F_1037))).f_TAGF).f_LEN == ((rt_int)0LL)) && (!r_IN_IDENTS(l_SEEN_1033, ((*(R27 *)rt_nil_check(l_F_1037))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("a record-reptype with element-specs positions every field (3.9.3): ", 67), ((*(R27 *)rt_nil_check(l_F_1037))).f_NAME);
}
if ((((((*(R27 *)rt_nil_check(l_F_1037))).f_TAGF).f_LEN > ((rt_int)0LL)) && (!r_IN_IDENTS(l_SEEN_1033, r_CAT(r_MK(rt_str("|", 1)), ((*(R27 *)rt_nil_check(l_F_1037))).f_TAGF)))))
{
r_FAILT(p_LINE, rt_str("a record-reptype with element-specs positions every variant part (3.9.3): ", 74), ((*(R27 *)rt_nil_check(l_F_1037))).f_TAGF);
}
l_F_1037 = ((*(R27 *)rt_nil_check(l_F_1037))).f_NEXT;
}
RT_B_TICK();
} L_end1038: ;
}
}
{
R17 * l_V_1039; memset(&l_V_1039, 0, sizeof l_V_1039);
l_V_1039 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_C;
for (;;) {
if ((l_V_1039 == NULL)) goto L_end1040;
{
{
R27 * l_TF_1041; memset(&l_TF_1041, 0, sizeof l_TF_1041);
l_TF_1041 = r_FIND_FIELD(p_T, ((*(R17 *)rt_nil_check(l_V_1039))).f_NAME);
R17 * l_S_1042; memset(&l_S_1042, 0, sizeof l_S_1042);
l_S_1042 = ((*(R17 *)rt_nil_check(l_V_1039))).f_A;
if ((l_TF_1041 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_V_1039))).f_LINE, rt_str("not a tag of the record (3.9.3): ", 33), ((*(R17 *)rt_nil_check(l_V_1039))).f_NAME);
}
if ((!(((*(R27 *)rt_nil_check(l_TF_1041))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_V_1039))).f_LINE, rt_str("not a tag of the record (3.9.3): ", 33), ((*(R17 *)rt_nil_check(l_V_1039))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(l_V_1039))).f_B == NULL)))
{
if ((r_PACKING_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_1039))).f_B))).f_NAME) < ((rt_int)0LL)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_V_1039))).f_LINE, rt_str("a packing-mode is DENSE, PACKED or UNPACKED (3.9.3): ", 53), ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_1039))).f_B))).f_NAME);
}
}
for (;;) {
if ((l_S_1042 == NULL)) goto L_end1043;
{
{
R17 * l_L_1044; memset(&l_L_1044, 0, sizeof l_L_1044);
l_L_1044 = ((*(R17 *)rt_nil_check(l_S_1042))).f_A;
R17 * l_P_1045; memset(&l_P_1045, 0, sizeof l_P_1045);
l_P_1045 = ((*(R17 *)rt_nil_check(l_S_1042))).f_B;
R17 * l_VSEEN_1046; memset(&l_VSEEN_1046, 0, sizeof l_VSEEN_1046);
l_VSEEN_1046 = NULL;
for (;;) {
if ((l_L_1044 == NULL)) goto L_end1047;
{
{
R14 l_SAVED_CODE_1048; memset(&l_SAVED_CODE_1048, 0, sizeof l_SAVED_CODE_1048);
S_R14(&l_SAVED_CODE_1048, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_LV_1049; memset(&l_LV_1049, 0, sizeof l_LV_1049);
S_R26(&l_LV_1049, r_EXPR(l_L_1044, ((*(R27 *)rt_nil_check(l_TF_1041))).f_T), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1048, 0);
if ((!r_SAME_CLASS(r_REAL_TYPE((l_LV_1049).f_T), r_REAL_TYPE(((*(R27 *)rt_nil_check(l_TF_1041))).f_T))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_1044))).f_LINE, rt_str("a variant-name is a value of the tag type (3.9.3)", 49));
}
}
l_L_1044 = ((*(R17 *)rt_nil_check(l_L_1044))).f_NEXT;
}
RT_B_TICK();
} L_end1047: ;
for (;;) {
if ((l_P_1045 == NULL)) goto L_end1050;
{
r_CHECK_ELEMENTS(p_T, ((*(R17 *)rt_nil_check(l_P_1045))).f_A, C_R9(((*(R17 *)rt_nil_check(l_V_1039))).f_NAME), ((*(R17 *)rt_nil_check(l_S_1042))).f_A, &l_VSEEN_1046);
l_P_1045 = ((*(R17 *)rt_nil_check(l_P_1045))).f_NEXT;
}
RT_B_TICK();
} L_end1050: ;
}
l_S_1042 = ((*(R17 *)rt_nil_check(l_S_1042))).f_NEXT;
}
RT_B_TICK();
} L_end1043: ;
}
l_V_1039 = ((*(R17 *)rt_nil_check(l_V_1039))).f_NEXT;
}
RT_B_TICK();
} L_end1040: ;
}
}
static void r_CHECK_ELEMENTS(R22 * p_T, R17 * p_L, R9 p_TAGN, R17 * p_LABELS, R17 * *p_SEEN) { RT_B_TICK(); 
R17 * l_E_1051; memset(&l_E_1051, 0, sizeof l_E_1051);
l_E_1051 = p_L;
for (;;) {
if ((l_E_1051 == NULL)) goto L_end1052;
{
if (((((*(R17 *)rt_nil_check(l_E_1051))).f_FL == ((rt_int)0LL)) || (((*(R17 *)rt_nil_check(l_E_1051))).f_FL == ((rt_int)2LL))))
{
{
R27 * l_F_1053; memset(&l_F_1053, 0, sizeof l_F_1053);
l_F_1053 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R27 * l_FOUND_1054; memset(&l_FOUND_1054, 0, sizeof l_FOUND_1054);
l_FOUND_1054 = NULL;
for (;;) {
if ((l_F_1053 == NULL)) goto L_end1055;
{
if ((r_TEQ(((*(R27 *)rt_nil_check(l_F_1053))).f_NAME, ((*(R17 *)rt_nil_check(l_E_1051))).f_NAME) && r_TEQ(((*(R27 *)rt_nil_check(l_F_1053))).f_TAGF, p_TAGN)))
{
l_FOUND_1054 = l_F_1053;
}
l_F_1053 = ((*(R27 *)rt_nil_check(l_F_1053))).f_NEXT;
}
RT_B_TICK();
} L_end1055: ;
if ((l_FOUND_1054 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_1051))).f_LINE, rt_str("not a field of the record accessible here (3.9.3): ", 51), ((*(R17 *)rt_nil_check(l_E_1051))).f_NAME);
}
if (((((*(R17 *)rt_nil_check(l_E_1051))).f_FL == ((rt_int)2LL)) && (((*(R27 *)rt_nil_check(l_FOUND_1054))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_1051))).f_LINE, rt_str("OMIT names a constant or tag field (3.9.3): ", 44), ((*(R17 *)rt_nil_check(l_E_1051))).f_NAME);
}
if (r_IN_IDENTS((*p_SEEN), ((*(R17 *)rt_nil_check(l_E_1051))).f_NAME))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_1051))).f_LINE, rt_str("a field is positioned once in a record-reptype (3.9.3): ", 56), ((*(R17 *)rt_nil_check(l_E_1051))).f_NAME);
}
(*p_SEEN) = r_NAME_REF(((*(R17 *)rt_nil_check(l_E_1051))).f_NAME, ((rt_int)0LL), NULL, (*p_SEEN));
}
}
else if ((((*(R17 *)rt_nil_check(l_E_1051))).f_FL == ((rt_int)1LL)))
{
{
R27 * l_TF_1056; memset(&l_TF_1056, 0, sizeof l_TF_1056);
l_TF_1056 = r_FIND_FIELD(p_T, ((*(R17 *)rt_nil_check(l_E_1051))).f_NAME);
R9 l_KEY_1057; memset(&l_KEY_1057, 0, sizeof l_KEY_1057);
S_R9(&l_KEY_1057, r_CAT(r_MK(rt_str("|", 1)), ((*(R17 *)rt_nil_check(l_E_1051))).f_NAME), 0);
if ((l_TF_1056 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_1051))).f_LINE, rt_str("VARIANTS names a tag of the record (3.9.3): ", 44), ((*(R17 *)rt_nil_check(l_E_1051))).f_NAME);
}
if ((!(((*(R27 *)rt_nil_check(l_TF_1056))).f_KIND == ((rt_int)2LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_1051))).f_LINE, rt_str("VARIANTS names a tag of the record (3.9.3): ", 44), ((*(R17 *)rt_nil_check(l_E_1051))).f_NAME);
}
if (r_IN_IDENTS((*p_SEEN), l_KEY_1057))
{
r_FAILT(((*(R17 *)rt_nil_check(l_E_1051))).f_LINE, rt_str("a variant part is positioned once in a record-reptype (3.9.3): ", 63), ((*(R17 *)rt_nil_check(l_E_1051))).f_NAME);
}
(*p_SEEN) = r_NAME_REF(l_KEY_1057, ((rt_int)0LL), NULL, (*p_SEEN));
}
}
else
{
{
R25 l_M_1058; memset(&l_M_1058, 0, sizeof l_M_1058);
S_R25(&l_M_1058, r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1051))).f_B), 0);
if (((!(l_M_1058).f_OK) || ((l_M_1058).f_V < ((rt_int)0LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_E_1051))).f_LINE, rt_str("the length of a filler-spec is a manifest integer, not negative (3.9.3)", 71));
}
}
}
l_E_1051 = ((*(R17 *)rt_nil_check(l_E_1051))).f_NEXT;
}
RT_B_TICK();
} L_end1052: ;
}
static R9 r_RECORD_SIZE(R22 * p_T, R9 p_C) { RT_B_TICK(); 
{ R9 rv1059 = r_FMT1(rt_str("({ rt_int sz = 0;@ sz; })", 25), r_RECORD_LAYOUT(p_T, p_C, ((rt_int)0LL), r_NO_TEXT()));
return rv1059; }
rt_raise(RT_X_INIT);
}
static R9 r_RECORD_BITS(R22 * p_T, R9 p_C) { RT_B_TICK(); 
R9 l_V_1060; memset(&l_V_1060, 0, sizeof l_V_1060);
S_R9(&l_V_1060, r_NEW_NAME(rt_str("rb", 2)), 0);
R9 l_IMG_1061; memset(&l_IMG_1061, 0, sizeof l_IMG_1061);
S_R9(&l_IMG_1061, r_NEW_NAME(rt_str("im", 2)), 0);
R9 l_BODY_1062; memset(&l_BODY_1062, 0, sizeof l_BODY_1062);
S_R9(&l_BODY_1062, r_RECORD_LAYOUT(p_T, l_V_1060, ((rt_int)1LL), l_IMG_1061), 0);
{ R9 rv1063 = r_CAT(r_FMT4(rt_str("({ @ @ = @; rstr @ = rt_str_new(0); rt_int sz = 0;", 50), r_CTYPE(p_T), l_V_1060, p_C, l_IMG_1061), r_FMT2(rt_str("@ @; })", 7), l_BODY_1062, l_IMG_1061));
return rv1063; }
rt_raise(RT_X_INIT);
}
static R9 r_RECORD_OF_BITS(R22 * p_T, R9 p_B) { RT_B_TICK(); 
R9 l_V_1064; memset(&l_V_1064, 0, sizeof l_V_1064);
S_R9(&l_V_1064, r_NEW_NAME(rt_str("rv", 2)), 0);
R9 l_IMG_1065; memset(&l_IMG_1065, 0, sizeof l_IMG_1065);
S_R9(&l_IMG_1065, r_NEW_NAME(rt_str("im", 2)), 0);
R9 l_BODY_1066; memset(&l_BODY_1066, 0, sizeof l_BODY_1066);
S_R9(&l_BODY_1066, r_RECORD_LAYOUT(p_T, l_V_1064, ((rt_int)2LL), l_IMG_1065), 0);
{ R9 rv1067 = r_CAT(r_FMT4(rt_str("({ rstr @ = @; @ @;", 19), l_IMG_1065, p_B, r_CTYPE(p_T), l_V_1064), r_CAT(r_FMT3(rt_str(" @ rt_int sz = 0;@ rt_b_lay_end(@, sz);", 39), r_INIT_CODE(p_T, l_V_1064), l_BODY_1066, l_IMG_1065), r_FMT1(rt_str(" @; })", 6), l_V_1064)));
return rv1067; }
rt_raise(RT_X_INIT);
}
static R9 r_RECORD_LAYOUT(R22 * p_T, R9 p_C, rt_int p_MODE, R9 p_IMG) { RT_B_TICK(); 
R9 l_R_1068; memset(&l_R_1068, 0, sizeof l_R_1068);
S_R9(&l_R_1068, r_MK(rt_str("", 0)), 0);
R17 * l_SAVED_1069; memset(&l_SAVED_1069, 0, sizeof l_SAVED_1069);
l_SAVED_1069 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
rt_int l_SAVED_MODE_1070; memset(&l_SAVED_MODE_1070, 0, sizeof l_SAVED_MODE_1070);
l_SAVED_MODE_1070 = ((*(R7 *)rt_nil_check(g_W))).f_LMODE;
R9 l_SAVED_IMG_1071; memset(&l_SAVED_IMG_1071, 0, sizeof l_SAVED_IMG_1071);
S_R9(&l_SAVED_IMG_1071, ((*(R7 *)rt_nil_check(g_W))).f_LIMG, 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = NULL;
((*(R7 *)rt_nil_check(g_W))).f_LMODE = p_MODE;
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_LIMG, p_IMG, 0);
if (r_IS_RECORD_REP(p_T))
{
{
R17 * l_P_1072; memset(&l_P_1072, 0, sizeof l_P_1072);
l_P_1072 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A;
for (;;) {
if ((l_P_1072 == NULL)) goto L_end1073;
{
S_R9(&l_R_1068, r_CAT(l_R_1068, r_LAYOUT_SPEC(p_T, p_C, l_P_1072, r_NO_TEXT())), 0);
l_P_1072 = ((*(R17 *)rt_nil_check(l_P_1072))).f_NEXT;
}
RT_B_TICK();
} L_end1073: ;
}
}
S_R9(&l_R_1068, r_CAT(l_R_1068, r_LAYOUT_ALL(p_T, p_C, r_NO_TEXT(), ((rt_int)2LL))), 0);
S_R9(&l_R_1068, r_CAT(l_R_1068, r_LAYOUT_PARTS(p_T, p_C)), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_SAVED_1069;
((*(R7 *)rt_nil_check(g_W))).f_LMODE = l_SAVED_MODE_1070;
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_LIMG, l_SAVED_IMG_1071, 0);
{ R9 rv1074 = l_R_1068;
return rv1074; }
rt_raise(RT_X_INIT);
}
static R9 r_LAY_FIELD(R27 * p_F, R22 * p_T, R9 p_C, rt_int p_MODE) { RT_B_TICK(); 
R9 l_X_1075; memset(&l_X_1075, 0, sizeof l_X_1075);
S_R9(&l_X_1075, r_FMT2(rt_str("(@).@", 5), p_C, ((*(R27 *)rt_nil_check(p_F))).f_CNAME), 0);
if ((((*(R7 *)rt_nil_check(g_W))).f_LMODE == ((rt_int)0LL)))
{
{ R9 rv1076 = r_FMT2(rt_str(" sz = rt_b_layout(sz, @, @);", 28), r_FIELD_SIZE_C(p_F, p_C), r_NUM(p_MODE));
return rv1076; }
}
else if ((((*(R7 *)rt_nil_check(g_W))).f_LMODE == ((rt_int)1LL)))
{
{
R9 l_IMG_1077; memset(&l_IMG_1077, 0, sizeof l_IMG_1077);
S_R9(&l_IMG_1077, ((*(R7 *)rt_nil_check(g_W))).f_LIMG, 0);
R9 l_BITS_1078; memset(&l_BITS_1078, 0, sizeof l_BITS_1078);
S_R9(&l_BITS_1078, (r_BITS_OF(r_MKET(l_X_1075, ((*(R27 *)rt_nil_check(p_F))).f_T), ((rt_int)0LL))).f_C, 0);
{ R9 rv1079 = r_FMT3(rt_str(" sz = rt_b_lay_put(&@, sz, @, @);", 33), l_IMG_1077, l_BITS_1078, r_NUM(p_MODE));
return rv1079; }
}
}
{
R9 l_IMG_1080; memset(&l_IMG_1080, 0, sizeof l_IMG_1080);
S_R9(&l_IMG_1080, ((*(R7 *)rt_nil_check(g_W))).f_LIMG, 0);
R9 l_TAKE_1081; memset(&l_TAKE_1081, 0, sizeof l_TAKE_1081);
S_R9(&l_TAKE_1081, r_FMT3(rt_str("rt_b_lay_take(@, &sz, @, @)", 27), l_IMG_1080, r_FIELD_SIZE_C(p_F, p_C), r_NUM(p_MODE)), 0);
R9 l_V_1082; memset(&l_V_1082, 0, sizeof l_V_1082);
S_R9(&l_V_1082, r_OF_BITS(((*(R27 *)rt_nil_check(p_F))).f_T, l_TAKE_1081, ((rt_int)0LL)), 0);
if (((((*(R27 *)rt_nil_check(p_F))).f_KIND == ((rt_int)0LL)) || r_IS_ANY_FIELD(p_T, p_F)))
{
{ R9 rv1083 = r_FMT2(rt_str(" @ = @;", 7), l_X_1075, l_V_1082);
return rv1083; }
}
{ R9 rv1084 = r_FMT1(rt_str(" if (!@) rt_raise(RT_B_INVALID_TYPE);", 37), r_EQUAL_CODE(r_REAL_TYPE(((*(R27 *)rt_nil_check(p_F))).f_T), l_X_1075, l_V_1082));
return rv1084; }
}
rt_raise(RT_X_INIT);
}
static R9 r_LAY_FILL(R9 p_SIZE, R9 p_BITS, rt_int p_MODE) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_LMODE == ((rt_int)0LL)))
{
{ R9 rv1085 = r_FMT2(rt_str(" sz = rt_b_layout(sz, @, @);", 28), p_SIZE, r_NUM(p_MODE));
return rv1085; }
}
else if ((((*(R7 *)rt_nil_check(g_W))).f_LMODE == ((rt_int)1LL)))
{
{ R9 rv1086 = r_FMT3(rt_str(" sz = rt_b_lay_put(&@, sz, @, @);", 33), ((*(R7 *)rt_nil_check(g_W))).f_LIMG, p_BITS, r_NUM(p_MODE));
return rv1086; }
}
{ R9 rv1087 = r_FMT3(rt_str(" (void)rt_b_lay_take(@, &sz, @, @);", 35), ((*(R7 *)rt_nil_check(g_W))).f_LIMG, p_SIZE, r_NUM(p_MODE));
return rv1087; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ANY_FIELD(R22 * p_T, R27 * p_F) { RT_B_TICK(); 
R27 * l_G_1088; memset(&l_G_1088, 0, sizeof l_G_1088);
l_G_1088 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R28 * l_A_1089; memset(&l_A_1089, 0, sizeof l_A_1089);
l_A_1089 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_G_1088 == NULL) || (l_A_1089 == NULL))) goto L_end1090;
{
if ((!(((*(R27 *)rt_nil_check(l_G_1088))).f_KIND == ((rt_int)0LL))))
{
if ((l_G_1088 == p_F))
{
{ rt_int rv1091 = ((*(R28 *)rt_nil_check(l_A_1089))).f_ANYARG;
return rv1091; }
}
l_A_1089 = ((*(R28 *)rt_nil_check(l_A_1089))).f_NEXT;
}
l_G_1088 = ((*(R27 *)rt_nil_check(l_G_1088))).f_NEXT;
}
RT_B_TICK();
} L_end1090: ;
{ rt_int rv1092 = 1;
return rv1092; }
rt_raise(RT_X_INIT);
}
static R9 r_FIELD_SIZE_C(R27 * p_F, R9 p_C) { RT_B_TICK(); 
{ R9 rv1093 = (r_SIZE_OF(((*(R27 *)rt_nil_check(p_F))).f_T, r_FMT2(rt_str("(@).@", 5), p_C, ((*(R27 *)rt_nil_check(p_F))).f_CNAME))).f_C;
return rv1093; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_ALL(R22 * p_T, R9 p_C, R9 p_TAGN, rt_int p_MODE) { RT_B_TICK(); 
R9 l_R_1094; memset(&l_R_1094, 0, sizeof l_R_1094);
S_R9(&l_R_1094, r_MK(rt_str("", 0)), 0);
R27 * l_F_1095; memset(&l_F_1095, 0, sizeof l_F_1095);
l_F_1095 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1095 == NULL)) goto L_end1096;
{
if ((r_TEQ(((*(R27 *)rt_nil_check(l_F_1095))).f_TAGF, p_TAGN) && (!r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LDONE, ((*(R27 *)rt_nil_check(l_F_1095))).f_NAME))))
{
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(((*(R27 *)rt_nil_check(l_F_1095))).f_NAME, ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_1094, r_CAT(l_R_1094, r_LAY_FIELD(l_F_1095, p_T, p_C, p_MODE)), 0);
}
else
{
S_R9(&l_R_1094, r_CAT(l_R_1094, r_FMT2(rt_str(" if (@) {@ }", 12), r_VARIANT_COND(l_F_1095, p_T, p_C), r_LAY_FIELD(l_F_1095, p_T, p_C, p_MODE))), 0);
}
}
l_F_1095 = ((*(R27 *)rt_nil_check(l_F_1095))).f_NEXT;
}
RT_B_TICK();
} L_end1096: ;
{ R9 rv1097 = l_R_1094;
return rv1097; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_PARTS(R22 * p_T, R9 p_C) { RT_B_TICK(); 
R9 l_R_1098; memset(&l_R_1098, 0, sizeof l_R_1098);
S_R9(&l_R_1098, r_MK(rt_str("", 0)), 0);
R27 * l_F_1099; memset(&l_F_1099, 0, sizeof l_F_1099);
l_F_1099 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1099 == NULL)) goto L_end1100;
{
if ((((((*(R27 *)rt_nil_check(l_F_1099))).f_TAGF).f_LEN > ((rt_int)0LL)) && (!r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LDONE, r_CAT(r_MK(rt_str("|", 1)), ((*(R27 *)rt_nil_check(l_F_1099))).f_TAGF)))))
{
S_R9(&l_R_1098, r_CAT(l_R_1098, r_LAYOUT_VARIANTS(p_T, p_C, ((*(R27 *)rt_nil_check(l_F_1099))).f_TAGF)), 0);
}
l_F_1099 = ((*(R27 *)rt_nil_check(l_F_1099))).f_NEXT;
}
RT_B_TICK();
} L_end1100: ;
{ R9 rv1101 = l_R_1098;
return rv1101; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_SPEC(R22 * p_T, R9 p_C, R17 * p_P, R9 p_TAGN) { RT_B_TICK(); 
rt_int l_MODE_1102; memset(&l_MODE_1102, 0, sizeof l_MODE_1102);
l_MODE_1102 = ((rt_int)2LL);
R9 l_R_1103; memset(&l_R_1103, 0, sizeof l_R_1103);
S_R9(&l_R_1103, r_MK(rt_str("", 0)), 0);
if (((((*(R17 *)rt_nil_check(p_P))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_MODE_1102 = r_PACKING_VALUE(((*(R17 *)rt_nil_check(p_P))).f_NAME);
}
if ((((*(R17 *)rt_nil_check(p_P))).f_IV == ((rt_int)0LL)))
{
S_R9(&l_R_1103, r_LAYOUT_ALL(p_T, p_C, p_TAGN, l_MODE_1102), 0);
if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_1103, r_CAT(l_R_1103, r_LAYOUT_PARTS(p_T, p_C)), 0);
}
{ R9 rv1104 = l_R_1103;
return rv1104; }
}
{
R17 * l_E_1105; memset(&l_E_1105, 0, sizeof l_E_1105);
l_E_1105 = ((*(R17 *)rt_nil_check(p_P))).f_A;
for (;;) {
if ((l_E_1105 == NULL)) goto L_end1106;
{
if (((((*(R17 *)rt_nil_check(l_E_1105))).f_FL == ((rt_int)0LL)) || (((*(R17 *)rt_nil_check(l_E_1105))).f_FL == ((rt_int)2LL))))
{
{
R27 * l_F_1107; memset(&l_F_1107, 0, sizeof l_F_1107);
l_F_1107 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1107 == NULL)) goto L_end1108;
{
if ((r_TEQ(((*(R27 *)rt_nil_check(l_F_1107))).f_NAME, ((*(R17 *)rt_nil_check(l_E_1105))).f_NAME) && r_TEQ(((*(R27 *)rt_nil_check(l_F_1107))).f_TAGF, p_TAGN)))
{
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(((*(R27 *)rt_nil_check(l_F_1107))).f_NAME, ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (((((*(R17 *)rt_nil_check(l_E_1105))).f_FL == ((rt_int)2LL)) && r_ARG_MANIFEST(p_T, l_F_1107)))
{
}
else if (((p_TAGN).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_R_1103, r_CAT(l_R_1103, r_LAY_FIELD(l_F_1107, p_T, p_C, l_MODE_1102)), 0);
}
else
{
S_R9(&l_R_1103, r_CAT(l_R_1103, r_FMT2(rt_str(" if (@) {@ }", 12), r_VARIANT_COND(l_F_1107, p_T, p_C), r_LAY_FIELD(l_F_1107, p_T, p_C, l_MODE_1102))), 0);
}
}
l_F_1107 = ((*(R27 *)rt_nil_check(l_F_1107))).f_NEXT;
}
RT_B_TICK();
} L_end1108: ;
}
}
else if ((((*(R17 *)rt_nil_check(l_E_1105))).f_FL == ((rt_int)1LL)))
{
S_R9(&l_R_1103, r_CAT(l_R_1103, r_LAYOUT_VARIANTS(p_T, p_C, ((*(R17 *)rt_nil_check(l_E_1105))).f_NAME)), 0);
}
else if ((((*(R17 *)rt_nil_check(l_E_1105))).f_FL == ((rt_int)5LL)))
{
S_R9(&l_R_1103, r_CAT(l_R_1103, r_LAY_FILL(r_FMT2(rt_str("rt_b_pack_size(@, 7, @)", 23), r_NUM((r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1105))).f_B)).f_V), r_NUM(l_MODE_1102)), r_FMT2(rt_str("rt_b_blank_bits(@, @)", 21), r_NUM((r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1105))).f_B)).f_V), r_NUM(l_MODE_1102)), l_MODE_1102)), 0);
}
else
{
S_R9(&l_R_1103, r_CAT(l_R_1103, r_LAY_FILL(r_NUM((r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1105))).f_B)).f_V), r_FMT1(rt_str("rt_b_zeros(@)", 13), r_NUM((r_MANIFEST(((*(R17 *)rt_nil_check(l_E_1105))).f_B)).f_V)), l_MODE_1102)), 0);
}
l_E_1105 = ((*(R17 *)rt_nil_check(l_E_1105))).f_NEXT;
}
RT_B_TICK();
} L_end1106: ;
}
{ R9 rv1109 = l_R_1103;
return rv1109; }
rt_raise(RT_X_INIT);
}
static R9 r_LAYOUT_VARIANTS(R22 * p_T, R9 p_C, R9 p_TAGN) { RT_B_TICK(); 
R9 l_R_1110; memset(&l_R_1110, 0, sizeof l_R_1110);
S_R9(&l_R_1110, r_MK(rt_str("", 0)), 0);
R9 l_WORD_1111; memset(&l_WORD_1111, 0, sizeof l_WORD_1111);
S_R9(&l_WORD_1111, r_MK(rt_str(" if", 3)), 0);
rt_int l_ELSE_MODE_1112; memset(&l_ELSE_MODE_1112, 0, sizeof l_ELSE_MODE_1112);
l_ELSE_MODE_1112 = ((rt_int)2LL);
R27 * l_TF_1113; memset(&l_TF_1113, 0, sizeof l_TF_1113);
l_TF_1113 = r_FIND_FIELD(p_T, p_TAGN);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = r_NAME_REF(r_CAT(r_MK(rt_str("|", 1)), p_TAGN), ((rt_int)0LL), NULL, ((*(R7 *)rt_nil_check(g_W))).f_LDONE);
if (r_IS_RECORD_REP(p_T))
{
{
R17 * l_V_1114; memset(&l_V_1114, 0, sizeof l_V_1114);
l_V_1114 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_C;
for (;;) {
if ((l_V_1114 == NULL)) goto L_end1115;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_V_1114))).f_NAME, p_TAGN))
{
{
R17 * l_S_1116; memset(&l_S_1116, 0, sizeof l_S_1116);
l_S_1116 = ((*(R17 *)rt_nil_check(l_V_1114))).f_A;
if ((!(((*(R17 *)rt_nil_check(l_V_1114))).f_B == NULL)))
{
l_ELSE_MODE_1112 = r_PACKING_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_V_1114))).f_B))).f_NAME);
}
for (;;) {
if ((l_S_1116 == NULL)) goto L_end1117;
{
{
R9 l_COND_1118; memset(&l_COND_1118, 0, sizeof l_COND_1118);
S_R9(&l_COND_1118, r_MK(rt_str("0", 1)), 0);
R17 * l_L_1119; memset(&l_L_1119, 0, sizeof l_L_1119);
l_L_1119 = ((*(R17 *)rt_nil_check(l_S_1116))).f_A;
R17 * l_P_1120; memset(&l_P_1120, 0, sizeof l_P_1120);
l_P_1120 = ((*(R17 *)rt_nil_check(l_S_1116))).f_B;
R17 * l_OUTER_1121; memset(&l_OUTER_1121, 0, sizeof l_OUTER_1121);
l_OUTER_1121 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
R9 l_BODY_1122; memset(&l_BODY_1122, 0, sizeof l_BODY_1122);
S_R9(&l_BODY_1122, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_1119 == NULL)) goto L_end1123;
{
S_R9(&l_COND_1118, r_FMT4(rt_str("@ || (@).@ == @", 15), l_COND_1118, p_C, ((*(R27 *)rt_nil_check(l_TF_1113))).f_CNAME, (r_EXPR(l_L_1119, ((*(R27 *)rt_nil_check(l_TF_1113))).f_T)).f_C), 0);
l_L_1119 = ((*(R17 *)rt_nil_check(l_L_1119))).f_NEXT;
}
RT_B_TICK();
} L_end1123: ;
for (;;) {
if ((l_P_1120 == NULL)) goto L_end1124;
{
S_R9(&l_BODY_1122, r_CAT(l_BODY_1122, r_LAYOUT_SPEC(p_T, p_C, l_P_1120, p_TAGN)), 0);
l_P_1120 = ((*(R17 *)rt_nil_check(l_P_1120))).f_NEXT;
}
RT_B_TICK();
} L_end1124: ;
S_R9(&l_BODY_1122, r_CAT(l_BODY_1122, r_LAYOUT_ALL(p_T, p_C, p_TAGN, ((rt_int)2LL))), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_OUTER_1121;
S_R9(&l_R_1110, r_CAT(l_R_1110, r_FMT3(rt_str("@ (@) {@ }", 10), l_WORD_1111, l_COND_1118, l_BODY_1122)), 0);
S_R9(&l_WORD_1111, r_MK(rt_str(" else if", 8)), 0);
}
l_S_1116 = ((*(R17 *)rt_nil_check(l_S_1116))).f_NEXT;
}
RT_B_TICK();
} L_end1117: ;
}
}
l_V_1114 = ((*(R17 *)rt_nil_check(l_V_1114))).f_NEXT;
}
RT_B_TICK();
} L_end1115: ;
}
}
{
R17 * l_OUTER_1125; memset(&l_OUTER_1125, 0, sizeof l_OUTER_1125);
l_OUTER_1125 = ((*(R7 *)rt_nil_check(g_W))).f_LDONE;
R9 l_REST_1126; memset(&l_REST_1126, 0, sizeof l_REST_1126);
S_R9(&l_REST_1126, r_LAYOUT_ALL(p_T, p_C, p_TAGN, l_ELSE_MODE_1112), 0);
((*(R7 *)rt_nil_check(g_W))).f_LDONE = l_OUTER_1125;
if (r_TEQS(l_WORD_1111, rt_str(" if", 3)))
{
{ R9 rv1127 = l_REST_1126;
return rv1127; }
}
{ R9 rv1128 = r_FMT2(rt_str("@ else {@ }", 11), l_R_1110, l_REST_1126);
return rv1128; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_ARG_MANIFEST(R22 * p_T, R27 * p_F) { RT_B_TICK(); 
R27 * l_G_1129; memset(&l_G_1129, 0, sizeof l_G_1129);
l_G_1129 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R28 * l_A_1130; memset(&l_A_1130, 0, sizeof l_A_1130);
l_A_1130 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_G_1129 == NULL) || (l_A_1130 == NULL))) goto L_end1131;
{
if ((!(((*(R27 *)rt_nil_check(l_G_1129))).f_KIND == ((rt_int)0LL))))
{
if ((l_G_1129 == p_F))
{
{ rt_int rv1132 = ((((*(R28 *)rt_nil_check(l_A_1130))).f_MLO).f_OK && (!((*(R28 *)rt_nil_check(l_A_1130))).f_ANYARG));
return rv1132; }
}
l_A_1130 = ((*(R28 *)rt_nil_check(l_A_1130))).f_NEXT;
}
l_G_1129 = ((*(R27 *)rt_nil_check(l_G_1129))).f_NEXT;
}
RT_B_TICK();
} L_end1131: ;
{ rt_int rv1133 = 0;
return rv1133; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ANY_TAG(R17 * p_A) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_NAME)))
{
{ rt_int rv1134 = 0;
return rv1134; }
}
{
R12 * l_Y_1135; memset(&l_Y_1135, 0, sizeof l_Y_1135);
l_Y_1135 = r_LOOKUP(((*(R17 *)rt_nil_check(p_A))).f_NAME);
if ((l_Y_1135 == NULL))
{
{ rt_int rv1136 = 0;
return rv1136; }
}
{ rt_int rv1137 = ((((*(R12 *)rt_nil_check(l_Y_1135))).f_KIND == g_Y_CONST) && r_TEQS(((*(R12 *)rt_nil_check(l_Y_1135))).f_ACCESS, rt_str("ANY", 3)));
return rv1137; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RECORD_INSTANCE(R12 * p_Y, R17 * p_TS) { RT_B_TICK(); 
R17 * l_D_1138; memset(&l_D_1138, 0, sizeof l_D_1138);
l_D_1138 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_CLASS_1139; memset(&l_CLASS_1139, 0, sizeof l_CLASS_1139);
l_CLASS_1139 = NULL;
R21 * l_TARGS_1140; memset(&l_TARGS_1140, 0, sizeof l_TARGS_1140);
l_TARGS_1140 = NULL;
R28 * l_VARGS_1141; memset(&l_VARGS_1141, 0, sizeof l_VARGS_1141);
l_VARGS_1141 = NULL;
R28 * l_VTAIL_1142; memset(&l_VTAIL_1142, 0, sizeof l_VTAIL_1142);
l_VTAIL_1142 = NULL;
R17 * l_A_1143; memset(&l_A_1143, 0, sizeof l_A_1143);
l_A_1143 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R17 * l_F_1144; memset(&l_F_1144, 0, sizeof l_F_1144);
l_F_1144 = ((*(R17 *)rt_nil_check(l_D_1138))).f_A;
for (;;) {
if ((l_F_1144 == NULL)) goto L_end1145;
{
{
R17 * l_N_1146; memset(&l_N_1146, 0, sizeof l_N_1146);
l_N_1146 = ((*(R17 *)rt_nil_check(l_F_1144))).f_A;
for (;;) {
if ((l_N_1146 == NULL)) goto L_end1147;
{
if ((l_A_1143 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too few arguments for ", 22), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
if ((((*(R17 *)rt_nil_check(l_F_1144))).f_B == NULL))
{
{
R21 * l_B_1148; memset(&l_B_1148, 0, sizeof l_B_1148);
l_B_1148 = ({ R21 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R21(&(*(R21 *)rt_nil_check(l_B_1148)), ({ R21 rc1149; memset(&rc1149, 0, sizeof rc1149);  S_R9(&rc1149.f_NAME, ((*(R17 *)rt_nil_check(l_N_1146))).f_NAME, 0); rc1149.f_T = r_ARG_TYPE(l_A_1143); S_R9(&rc1149.f_C, r_NO_TEXT(), 0); rc1149.f_HASMV = 0; rc1149.f_MV = ((rt_int)0LL); rc1149.f_R = NULL; rc1149.f_NEXT = l_TARGS_1140; rc1149; }), 0);
l_TARGS_1140 = l_B_1148;
}
}
else
{
{
R28 * l_V_1150; memset(&l_V_1150, 0, sizeof l_V_1150);
l_V_1150 = ({ R28 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R28(&(*(R28 *)rt_nil_check(l_V_1150)), ({ R28 rc1151; memset(&rc1151, 0, sizeof rc1151);  S_R9(&rc1151.f_LO, r_NO_TEXT(), 0); S_R9(&rc1151.f_HI, r_NO_TEXT(), 0); S_R25(&rc1151.f_MLO, r_NO_MVAL(), 0); S_R25(&rc1151.f_MHI, r_NO_MVAL(), 0); rc1151.f_ANYARG = 0; rc1151.f_NEXT = NULL; rc1151; }), 0);
if (((((*(R17 *)rt_nil_check(l_A_1143))).f_KIND == g_N_ANY) || r_IS_ANY_TAG(l_A_1143)))
{
if ((!(((*(R17 *)rt_nil_check(l_F_1144))).f_IV == ((rt_int)1LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_1143))).f_LINE, rt_str("ANY is only for TAG parameters (3.9.1)", 38));
}
((*(R28 *)rt_nil_check(l_V_1150))).f_ANYARG = 1;
}
else if ((((*(R17 *)rt_nil_check(l_A_1143))).f_KIND == g_N_DONTCARE))
{
((*(R28 *)rt_nil_check(l_V_1150))).f_ANYARG = 1;
S_R9(&((*(R28 *)rt_nil_check(l_V_1150))).f_HI, r_MK(rt_str("\?", 1)), 0);
}
else if ((((*(R17 *)rt_nil_check(l_A_1143))).f_KIND == g_TS_GEN))
{
((*(R28 *)rt_nil_check(l_V_1150))).f_ANYARG = 1;
S_R9(&((*(R28 *)rt_nil_check(l_V_1150))).f_HI, r_QMK(rt_str("\?", 1), ((*(R17 *)rt_nil_check(l_A_1143))).f_NAME), 0);
}
else
{
{
R22 * l_FT_1152; memset(&l_FT_1152, 0, sizeof l_FT_1152);
l_FT_1152 = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_1144))).f_B);
S_R9(&((*(R28 *)rt_nil_check(l_V_1150))).f_LO, r_CONVERT(r_EXPR(l_A_1143, l_FT_1152), l_FT_1152, ((*(R17 *)rt_nil_check(l_A_1143))).f_LINE, r_NO_TEXT()), 0);
S_R25(&((*(R28 *)rt_nil_check(l_V_1150))).f_MLO, r_ENUM_MANIFEST(l_A_1143, l_FT_1152), 0);
if ((((((*(R28 *)rt_nil_check(l_V_1150))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_FT_1152))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_FT_1152))).f_MHI).f_OK))
{
if ((((((*(R28 *)rt_nil_check(l_V_1150))).f_MLO).f_V < (((*(R22 *)rt_nil_check(l_FT_1152))).f_MLO).f_V) || ((((*(R28 *)rt_nil_check(l_V_1150))).f_MLO).f_V > (((*(R22 *)rt_nil_check(l_FT_1152))).f_MHI).f_V)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_1143))).f_LINE, rt_str("the argument is outside the range of the parameter (3.9.1)", 58));
}
}
if (((((*(R17 *)rt_nil_check(l_F_1144))).f_IV == ((rt_int)1LL)) && (!(((*(R28 *)rt_nil_check(l_V_1150))).f_MLO).f_OK)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_A_1143))).f_LINE, rt_str("a tag argument must be manifest or ANY (3.9.1)", 46));
}
}
}
if ((l_VTAIL_1142 == NULL))
{
l_VARGS_1141 = l_V_1150;
}
else
{
((*(R28 *)rt_nil_check(l_VTAIL_1142))).f_NEXT = l_V_1150;
}
l_VTAIL_1142 = l_V_1150;
}
}
l_A_1143 = ((*(R17 *)rt_nil_check(l_A_1143))).f_NEXT;
l_N_1146 = ((*(R17 *)rt_nil_check(l_N_1146))).f_NEXT;
}
RT_B_TICK();
} L_end1147: ;
}
l_F_1144 = ((*(R17 *)rt_nil_check(l_F_1144))).f_NEXT;
}
RT_B_TICK();
} L_end1145: ;
if ((!(l_A_1143 == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_TS))).f_LINE, rt_str("too many arguments for ", 23), ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
}
{
R12 * l_R_1153; memset(&l_R_1153, 0, sizeof l_R_1153);
l_R_1153 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
for (;;) {
if ((l_R_1153 == NULL)) goto L_end1154;
{
if (((((*(R12 *)rt_nil_check(l_R_1153))).f_DECL == l_D_1138) && r_SAME_BINDS(((*(R12 *)rt_nil_check(l_R_1153))).f_BINDINGS, l_TARGS_1140)))
{
l_CLASS_1139 = ((*(R12 *)rt_nil_check(l_R_1153))).f_T;
goto L_end1154;
}
l_R_1153 = ((*(R12 *)rt_nil_check(l_R_1153))).f_INSTANCES;
}
RT_B_TICK();
} L_end1154: ;
}
if ((l_CLASS_1139 == NULL))
{
{
R12 * l_R_1155; memset(&l_R_1155, 0, sizeof l_R_1155);
l_R_1155 = r_NEW_SYM(g_Y_TYPE, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
R21 * l_B_1156; memset(&l_B_1156, 0, sizeof l_B_1156);
l_B_1156 = l_TARGS_1140;
R21 * l_SAVED_1157; memset(&l_SAVED_1157, 0, sizeof l_SAVED_1157);
l_SAVED_1157 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
rt_int l_ENTERED_1158; memset(&l_ENTERED_1158, 0, sizeof l_ENTERED_1158);
((*(R12 *)rt_nil_check(l_R_1155))).f_DECL = l_D_1138;
((*(R12 *)rt_nil_check(l_R_1155))).f_BINDINGS = l_TARGS_1140;
((*(R12 *)rt_nil_check(l_R_1155))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
((*(R7 *)rt_nil_check(g_W))).f_RECS = l_R_1155;
l_ENTERED_1158 = r_ENTER_MODULE_FOR(p_Y);
r_OPEN_SCOPE();
for (;;) {
if ((l_B_1156 == NULL)) goto L_end1159;
{
{
R12 * l_TY_1160; memset(&l_TY_1160, 0, sizeof l_TY_1160);
l_TY_1160 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_B_1156))).f_NAME);
((*(R12 *)rt_nil_check(l_TY_1160))).f_T = ((*(R21 *)rt_nil_check(l_B_1156))).f_T;
r_DEFINE(l_TY_1160, ((*(R17 *)rt_nil_check(p_TS))).f_LINE);
}
l_B_1156 = ((*(R21 *)rt_nil_check(l_B_1156))).f_NEXT;
}
RT_B_TICK();
} L_end1159: ;
l_F_1144 = ((*(R17 *)rt_nil_check(l_D_1138))).f_A;
for (;;) {
if ((l_F_1144 == NULL)) goto L_end1161;
{
if ((!(((*(R17 *)rt_nil_check(l_F_1144))).f_B == NULL)))
{
{
R17 * l_N_1162; memset(&l_N_1162, 0, sizeof l_N_1162);
l_N_1162 = ((*(R17 *)rt_nil_check(l_F_1144))).f_A;
for (;;) {
if ((l_N_1162 == NULL)) goto L_end1163;
{
{
R12 * l_P_1164; memset(&l_P_1164, 0, sizeof l_P_1164);
l_P_1164 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(l_N_1162))).f_NAME);
((*(R12 *)rt_nil_check(l_P_1164))).f_T = r_RESOLVE(((*(R17 *)rt_nil_check(l_F_1144))).f_B);
S_R9(&((*(R12 *)rt_nil_check(l_P_1164))).f_ACCESS, r_FMT1(rt_str("$S.f_@", 6), r_CID(((*(R17 *)rt_nil_check(l_N_1162))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_P_1164))).f_INPUT = 1;
((*(R12 *)rt_nil_check(l_P_1164))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_P_1164, ((*(R17 *)rt_nil_check(l_F_1144))).f_LINE);
}
l_N_1162 = ((*(R17 *)rt_nil_check(l_N_1162))).f_NEXT;
}
RT_B_TICK();
} L_end1163: ;
}
}
l_F_1144 = ((*(R17 *)rt_nil_check(l_F_1144))).f_NEXT;
}
RT_B_TICK();
} L_end1161: ;
if ((l_TARGS_1140 == NULL))
{
l_CLASS_1139 = r_RESOLVE_RECORD(((*(R17 *)rt_nil_check(l_D_1138))).f_B, r_RECORD_NAME(p_Y), p_Y, ((*(R17 *)rt_nil_check(l_D_1138))).f_A);
}
else
{
l_CLASS_1139 = r_RESOLVE_RECORD(((*(R17 *)rt_nil_check(l_D_1138))).f_B, r_NO_TEXT(), p_Y, ((*(R17 *)rt_nil_check(l_D_1138))).f_A);
}
S_R9(&((*(R22 *)rt_nil_check(l_CLASS_1139))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME, 0);
((*(R12 *)rt_nil_check(l_R_1155))).f_T = l_CLASS_1139;
r_CLOSE_SCOPE();
if (l_ENTERED_1158)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_1157;
}
}
{
R22 * l_T_1165; memset(&l_T_1165, 0, sizeof l_T_1165);
l_T_1165 = r_COPY_TYP(l_CLASS_1139);
((*(R22 *)rt_nil_check(l_T_1165))).f_ARGS = l_VARGS_1141;
{ R22 * rv1166 = l_T_1165;
return rv1166; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_BINDS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_1167; memset(&l_P_1167, 0, sizeof l_P_1167);
l_P_1167 = p_A;
R21 * l_Q_1168; memset(&l_Q_1168, 0, sizeof l_Q_1168);
l_Q_1168 = p_B;
for (;;) {
if (((l_P_1167 == NULL) || (l_Q_1168 == NULL))) goto L_end1169;
{
if ((((!r_SAME_TYPE(((*(R21 *)rt_nil_check(l_P_1167))).f_T, ((*(R21 *)rt_nil_check(l_Q_1168))).f_T)) || (!r_SAME_LENGTH(((*(R21 *)rt_nil_check(l_P_1167))).f_T, ((*(R21 *)rt_nil_check(l_Q_1168))).f_T))) || (!r_SAME_REPS(((*(R21 *)rt_nil_check(l_P_1167))).f_T, ((*(R21 *)rt_nil_check(l_Q_1168))).f_T))))
{
{ rt_int rv1170 = 0;
return rv1170; }
}
l_P_1167 = ((*(R21 *)rt_nil_check(l_P_1167))).f_NEXT;
l_Q_1168 = ((*(R21 *)rt_nil_check(l_Q_1168))).f_NEXT;
}
RT_B_TICK();
} L_end1169: ;
{ rt_int rv1171 = ((l_P_1167 == NULL) && (l_Q_1168 == NULL));
return rv1171; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ANY(R22 * p_T) { RT_B_TICK(); 
R28 * l_A_1172; memset(&l_A_1172, 0, sizeof l_A_1172);
l_A_1172 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_A_1172 == NULL)) goto L_end1173;
{
if (((*(R28 *)rt_nil_check(l_A_1172))).f_ANYARG)
{
{ rt_int rv1174 = 1;
return rv1174; }
}
l_A_1172 = ((*(R28 *)rt_nil_check(l_A_1172))).f_NEXT;
}
RT_B_TICK();
} L_end1173: ;
{ rt_int rv1175 = 0;
return rv1175; }
rt_raise(RT_X_INIT);
}
static R9 r_VARIANT_COND(R27 * p_F, R22 * p_T, R9 p_SELF) { RT_B_TICK(); 
R17 * l_L_1176; memset(&l_L_1176, 0, sizeof l_L_1176);
l_L_1176 = ((*(R27 *)rt_nil_check(p_F))).f_LABELS;
R9 l_C_1177; memset(&l_C_1177, 0, sizeof l_C_1177);
S_R9(&l_C_1177, r_MK(rt_str("0", 1)), 0);
R27 * l_TF_1178; memset(&l_TF_1178, 0, sizeof l_TF_1178);
l_TF_1178 = r_FIND_FIELD(p_T, ((*(R27 *)rt_nil_check(p_F))).f_TAGF);
for (;;) {
if ((l_L_1176 == NULL)) goto L_end1179;
{
if ((((*(R17 *)rt_nil_check(l_L_1176))).f_KIND == g_N_RANGE))
{
S_R9(&l_C_1177, r_FMT3(rt_str("@ || (@.@ >= ", 13), l_C_1177, p_SELF, ((*(R27 *)rt_nil_check(l_TF_1178))).f_CNAME), 0);
S_R9(&l_C_1177, r_FMT4(rt_str("@@ && @.@ <= ", 13), l_C_1177, (r_EXPR(((*(R17 *)rt_nil_check(l_L_1176))).f_A, ((*(R27 *)rt_nil_check(l_TF_1178))).f_T)).f_C, p_SELF, ((*(R27 *)rt_nil_check(l_TF_1178))).f_CNAME), 0);
S_R9(&l_C_1177, r_FMT2(rt_str("@@)", 3), l_C_1177, (r_EXPR(((*(R17 *)rt_nil_check(l_L_1176))).f_B, ((*(R27 *)rt_nil_check(l_TF_1178))).f_T)).f_C), 0);
}
else
{
S_R9(&l_C_1177, r_FMT4(rt_str("@ || @.@ == @", 13), l_C_1177, p_SELF, ((*(R27 *)rt_nil_check(l_TF_1178))).f_CNAME, (r_EXPR(l_L_1176, ((*(R27 *)rt_nil_check(l_TF_1178))).f_T)).f_C), 0);
}
l_L_1176 = ((*(R17 *)rt_nil_check(l_L_1176))).f_NEXT;
}
RT_B_TICK();
} L_end1179: ;
{ R9 rv1180 = r_FMT1(rt_str("(@)", 3), l_C_1177);
return rv1180; }
rt_raise(RT_X_INIT);
}
static void r_COMPLETE_RECORD(R22 * p_T) { RT_B_TICK(); 
R9 l_C_1181; memset(&l_C_1181, 0, sizeof l_C_1181);
S_R9(&l_C_1181, ((*(R22 *)rt_nil_check(p_T))).f_CNAME, 0);
R27 * l_F_1182; memset(&l_F_1182, 0, sizeof l_F_1182);
l_F_1182 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_BODY_1183; memset(&l_BODY_1183, 0, sizeof l_BODY_1183);
S_R9(&l_BODY_1183, r_MK(rt_str("", 0)), 0);
R9 l_ASSIGN_1184; memset(&l_ASSIGN_1184, 0, sizeof l_ASSIGN_1184);
S_R9(&l_ASSIGN_1184, r_MK(rt_str("", 0)), 0);
R9 l_COPY_1185; memset(&l_COPY_1185, 0, sizeof l_COPY_1185);
S_R9(&l_COPY_1185, r_MK(rt_str("", 0)), 0);
R9 l_EQ_1186; memset(&l_EQ_1186, 0, sizeof l_EQ_1186);
S_R9(&l_EQ_1186, r_MK(rt_str("1", 1)), 0);
for (;;) {
if ((l_F_1182 == NULL)) goto L_end1187;
{
S_R9(&l_BODY_1183, r_FMT3(rt_str("@ @ @;", 6), l_BODY_1183, r_CTYPE(((*(R27 *)rt_nil_check(l_F_1182))).f_T), ((*(R27 *)rt_nil_check(l_F_1182))).f_CNAME), 0);
S_R9(&l_COPY_1185, r_FMT3(rt_str("@ d.@ = @;", 10), l_COPY_1185, ((*(R27 *)rt_nil_check(l_F_1182))).f_CNAME, r_COPY_OF(((*(R27 *)rt_nil_check(l_F_1182))).f_T, r_FMT1(rt_str("s.@", 3), ((*(R27 *)rt_nil_check(l_F_1182))).f_CNAME))), 0);
if ((((*(R27 *)rt_nil_check(l_F_1182))).f_KIND == ((rt_int)1LL)))
{
S_R9(&l_ASSIGN_1184, r_FMT2(rt_str("@ if (!(@)) rt_raise(RT_B_TYPE_MISMATCH);", 41), l_ASSIGN_1184, r_EQUAL_CODE(((*(R27 *)rt_nil_check(l_F_1182))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R27 *)rt_nil_check(l_F_1182))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R27 *)rt_nil_check(l_F_1182))).f_CNAME))), 0);
}
else if ((((*(R27 *)rt_nil_check(l_F_1182))).f_KIND == ((rt_int)2LL)))
{
S_R9(&l_ASSIGN_1184, r_FMT4(rt_str("@ if (any) d->@ = s.@; else if (d->@ != s.@) rt_raise(RT_B_TYPE_MISMATCH);", 74), l_ASSIGN_1184, ((*(R27 *)rt_nil_check(l_F_1182))).f_CNAME, ((*(R27 *)rt_nil_check(l_F_1182))).f_CNAME, ((*(R27 *)rt_nil_check(l_F_1182))).f_CNAME), 0);
}
else
{
S_R9(&l_ASSIGN_1184, r_FMT2(rt_str("@ @", 3), l_ASSIGN_1184, r_ASSIGN_CODE(((*(R27 *)rt_nil_check(l_F_1182))).f_T, r_FMT1(rt_str("d->@", 4), ((*(R27 *)rt_nil_check(l_F_1182))).f_CNAME), r_FMT1(rt_str("s.@", 3), ((*(R27 *)rt_nil_check(l_F_1182))).f_CNAME))), 0);
}
if (((((*(R27 *)rt_nil_check(l_F_1182))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R9(&l_EQ_1186, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1186, r_VARIANT_COND(l_F_1182, p_T, r_MK(rt_str("a", 1))), r_EQUAL_CODE(((*(R27 *)rt_nil_check(l_F_1182))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R27 *)rt_nil_check(l_F_1182))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R27 *)rt_nil_check(l_F_1182))).f_CNAME))), 0);
}
else
{
S_R9(&l_EQ_1186, r_FMT2(rt_str("@ && @", 6), l_EQ_1186, r_EQUAL_CODE(((*(R27 *)rt_nil_check(l_F_1182))).f_T, r_FMT1(rt_str("a.@", 3), ((*(R27 *)rt_nil_check(l_F_1182))).f_CNAME), r_FMT1(rt_str("b.@", 3), ((*(R27 *)rt_nil_check(l_F_1182))).f_CNAME))), 0);
}
l_F_1182 = ((*(R27 *)rt_nil_check(l_F_1182))).f_NEXT;
}
RT_B_TICK();
} L_end1187: ;
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ { int dummy_;@ };", 26), l_C_1181, l_BODY_1183));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_1181, l_C_1181, l_C_1181));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_1181, l_C_1181, l_C_1181));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { @ }", 41), l_C_1181, l_C_1181, l_C_1181, l_ASSIGN_1184));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { return @; }", 38), l_C_1181, l_C_1181, l_C_1181, l_EQ_1186));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_1181, l_C_1181, l_C_1181));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s;", 28), l_C_1181, l_C_1181, l_C_1181, l_C_1181));
r_EMIT(g_O_HELPERS, r_FMT1(rt_str("@ return d; }", 13), l_COPY_1185));
}
static R9 r_ARRAY_STRUCT(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R9 l_ET_C_1188; memset(&l_ET_C_1188, 0, sizeof l_ET_C_1188);
S_R9(&l_ET_C_1188, r_CTYPE(p_ELEM), 0);
R9 l_KEY_1189; memset(&l_KEY_1189, 0, sizeof l_KEY_1189);
S_R9(&l_KEY_1189, r_FMT3(rt_str("@/@/@", 5), l_ET_C_1188, r_NUM(p_DIMS), r_NUM(((*(R22 *)rt_nil_check(p_ELEM))).f_KIND)), 0);
R12 * l_Y_1190; memset(&l_Y_1190, 0, sizeof l_Y_1190);
l_Y_1190 = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
for (;;) {
if ((l_Y_1190 == NULL)) goto L_end1191;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_1190))).f_NAME, l_KEY_1189) && r_SAME_TYPE(((*(R12 *)rt_nil_check(l_Y_1190))).f_T, p_ELEM)))
{
{ R9 rv1192 = ((*(R12 *)rt_nil_check(l_Y_1190))).f_ACCESS;
return rv1192; }
}
l_Y_1190 = ((*(R12 *)rt_nil_check(l_Y_1190))).f_INSTANCES;
}
RT_B_TICK();
} L_end1191: ;
l_Y_1190 = r_NEW_SYM(g_Y_TYPE, l_KEY_1189);
((*(R12 *)rt_nil_check(l_Y_1190))).f_T = p_ELEM;
S_R9(&((*(R12 *)rt_nil_check(l_Y_1190))).f_ACCESS, r_NEW_NAME(rt_str("A", 1)), 0);
((*(R12 *)rt_nil_check(l_Y_1190))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_ARRAYS;
((*(R7 *)rt_nil_check(g_W))).f_ARRAYS = l_Y_1190;
{
R9 l_C_1193; memset(&l_C_1193, 0, sizeof l_C_1193);
S_R9(&l_C_1193, ((*(R12 *)rt_nil_check(l_Y_1190))).f_ACCESS, 0);
R9 l_D_1194; memset(&l_D_1194, 0, sizeof l_D_1194);
S_R9(&l_D_1194, r_NUM(p_DIMS), 0);
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_C_1193, l_C_1193));
r_EMIT(g_O_STRUCTS, r_FMT4(rt_str("struct @ { rt_int lo[@], hi[@]; @ *p; };", 40), l_C_1193, l_D_1194, l_D_1194, l_ET_C_1188));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static void S_@(@ *d, @ s, int any);", 36), l_C_1193, l_C_1193, l_C_1193));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static int E_@(@ a, @ b);", 25), l_C_1193, l_C_1193, l_C_1193));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static void S_@(@ *d, @ s, int any) { rt_int n = rt_b_extent(@, d->lo, d->hi);", 78), l_C_1193, l_C_1193, l_C_1193, l_D_1194));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, d->lo, d->hi, s.lo, s.hi)) rt_raise(RT_B_SIZE); for (rt_int i = 0; i < n; i++) @ }", 108), l_D_1194, r_ASSIGN_CODE(p_ELEM, r_MK(rt_str("d->p[i]", 7)), r_MK(rt_str("s.p[i]", 6)))));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static int E_@(@ a, @ b) { rt_int n = rt_b_extent(@, a.lo, a.hi);", 65), l_C_1193, l_C_1193, l_C_1193, l_D_1194));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("if (!rt_b_same_extents(@, a.lo, a.hi, b.lo, b.hi)) return 0; for (rt_int i = 0; i < n; i++) if (!@) return 0; return 1; }", 121), l_D_1194, r_EQUAL_CODE(p_ELEM, r_MK(rt_str("a.p[i]", 6)), r_MK(rt_str("b.p[i]", 6)))));
r_EMIT(g_O_PROTOS, r_FMT3(rt_str("static @ C_@(@ s);", 18), l_C_1193, l_C_1193, l_C_1193));
r_EMIT(g_O_HELPERS, r_FMT4(rt_str("static @ C_@(@ s) { @ d = s; ", 29), l_C_1193, l_C_1193, l_C_1193, l_C_1193));
r_EMIT(g_O_HELPERS, r_FMT2(rt_str("rt_int n = rt_b_extent(@, s.lo, s.hi); d.p = rt_alloc((n > 0 \? n : 1) * sizeof *d.p); for (rt_int i = 0; i < n; i++) d.p[i] = @; return d; }", 140), l_D_1194, r_COPY_OF(p_ELEM, r_MK(rt_str("s.p[i]", 6)))));
}
{ R9 rv1195 = ((*(R12 *)rt_nil_check(l_Y_1190))).f_ACCESS;
return rv1195; }
rt_raise(RT_X_INIT);
}
static R9 r_INIT_CODE(R22 * p_T, R9 p_LV) { RT_B_TICK(); 
rt_int l_K_1196; memset(&l_K_1196, 0, sizeof l_K_1196);
l_K_1196 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_1196 == g_T_XFIX))
{
{ R9 rv1197 = r_FMT2(rt_str("@ = rt_b_zeros(@);", 18), p_LV, r_NUM(r_XFIX_SIZE(p_T)));
return rv1197; }
}
else if ((l_K_1196 == g_T_STR))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1198 = r_FMT1(rt_str("@ = rt_str_new(0);", 18), p_LV);
return rv1198; }
}
{ R9 rv1199 = r_FMT2(rt_str("@ = rt_b_str_new(@, 0);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv1199; }
}
else if ((l_K_1196 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1200 = r_FMT1(rt_str("@ = rt_b_zeros(0);", 18), p_LV);
return rv1200; }
}
{ R9 rv1201 = r_FMT2(rt_str("@ = rt_b_str_new(@, 1);", 23), p_LV, ((*(R22 *)rt_nil_check(p_T))).f_LEN_C);
return rv1201; }
}
else if ((l_K_1196 == g_T_SEM))
{
{ R9 rv1202 = r_FMT2(rt_str("@ = rt_b_sem_new(@);", 20), p_LV, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_SCALE));
return rv1202; }
}
else if ((l_K_1196 == g_T_ABS))
{
{ R9 rv1203 = r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV);
return rv1203; }
}
else if ((l_K_1196 == g_T_ARR))
{
{
R28 * l_B_1204; memset(&l_B_1204, 0, sizeof l_B_1204);
l_B_1204 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_1205; memset(&l_I_1205, 0, sizeof l_I_1205);
l_I_1205 = ((rt_int)0LL);
R9 l_R_1206; memset(&l_R_1206, 0, sizeof l_R_1206);
S_R9(&l_R_1206, r_MK(rt_str("{", 1)), 0);
for (;;) {
if ((l_B_1204 == NULL)) goto L_end1207;
{
S_R9(&l_R_1206, r_FMT4(rt_str("@ @.lo[@] = @;", 14), l_R_1206, p_LV, r_NUM(l_I_1205), ((*(R28 *)rt_nil_check(l_B_1204))).f_LO), 0);
S_R9(&l_R_1206, r_FMT4(rt_str("@ @.hi[@] = @;", 14), l_R_1206, p_LV, r_NUM(l_I_1205), ((*(R28 *)rt_nil_check(l_B_1204))).f_HI), 0);
l_I_1205 = rt_add(l_I_1205, ((rt_int)1LL));
l_B_1204 = ((*(R28 *)rt_nil_check(l_B_1204))).f_NEXT;
}
RT_B_TICK();
} L_end1207: ;
S_R9(&l_R_1206, r_FMT4(rt_str("@ rt_int n = rt_b_extent(@, @.lo, @.hi);", 40), l_R_1206, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_LV, p_LV), 0);
if ((r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)).f_OK)
{
S_R9(&l_R_1206, r_FMT4(rt_str("@ @.p = rt_b_array_alloc_bits(n, sizeof *@.p, @", 47), l_R_1206, p_LV, p_LV, r_FMT2(rt_str("rt_b_pack_size(n, @, @));", 25), r_NUM((r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)).f_V), r_NUM(r_PACKING_OF(p_T)))), 0);
}
else
{
S_R9(&l_R_1206, r_FMT4(rt_str("@ @.p = rt_b_array_alloc(n, sizeof *@.p);", 41), l_R_1206, p_LV, p_LV, p_LV), 0);
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_ELEM))
{
{
R9 l_IV_1208; memset(&l_IV_1208, 0, sizeof l_IV_1208);
S_R9(&l_IV_1208, r_NEW_NAME(rt_str("i", 1)), 0);
S_R9(&l_R_1206, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < n; @++) {", 34), l_R_1206, l_IV_1208, l_IV_1208, l_IV_1208), 0);
S_R9(&l_R_1206, r_FMT2(rt_str("@ @ }", 5), l_R_1206, r_INIT_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_LV, l_IV_1208))), 0);
}
}
if ((!(r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)).f_OK))
{
S_R9(&l_R_1206, r_FMT4(rt_str("@ rt_b_array_check(rt_b_pack_size(n, n \? @ : 0, @));", 52), l_R_1206, (r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT1(rt_str("@.p[0]", 6), p_LV))).f_C, r_NUM(r_PACKING_OF(p_T)), r_MK(rt_str("", 0))), 0);
}
{ R9 rv1209 = r_CATS(l_R_1206, rt_str(" }", 2));
return rv1209; }
}
}
else if ((l_K_1196 == g_T_REC))
{
{
R27 * l_F_1210; memset(&l_F_1210, 0, sizeof l_F_1210);
l_F_1210 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R28 * l_A_1211; memset(&l_A_1211, 0, sizeof l_A_1211);
l_A_1211 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R9 l_R_1212; memset(&l_R_1212, 0, sizeof l_R_1212);
S_R9(&l_R_1212, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_F_1210 == NULL)) goto L_end1213;
{
if ((!(((*(R27 *)rt_nil_check(l_F_1210))).f_KIND == ((rt_int)0LL))))
{
if ((!(l_A_1211 == NULL)))
{
if ((!((*(R28 *)rt_nil_check(l_A_1211))).f_ANYARG))
{
S_R9(&l_R_1212, r_FMT4(rt_str("@ @.@ = @;", 10), l_R_1212, p_LV, ((*(R27 *)rt_nil_check(l_F_1210))).f_CNAME, ((*(R28 *)rt_nil_check(l_A_1211))).f_LO), 0);
}
else if (((((*(R27 *)rt_nil_check(l_F_1210))).f_KIND == ((rt_int)2LL)) && ((((*(R28 *)rt_nil_check(l_A_1211))).f_HI).f_LEN == ((rt_int)0LL))))
{
S_R9(&l_R_1212, r_FMT3(rt_str("@ @.@ = INT64_MIN;", 18), l_R_1212, p_LV, ((*(R27 *)rt_nil_check(l_F_1210))).f_CNAME), 0);
}
l_A_1211 = ((*(R28 *)rt_nil_check(l_A_1211))).f_NEXT;
}
}
else if (r_NEEDS_INIT(((*(R27 *)rt_nil_check(l_F_1210))).f_T))
{
S_R9(&l_R_1212, r_FMT2(rt_str("@ @", 3), l_R_1212, r_SUBST_SELF(r_INIT_CODE(((*(R27 *)rt_nil_check(l_F_1210))).f_T, r_FMT2(rt_str("@.@", 3), p_LV, ((*(R27 *)rt_nil_check(l_F_1210))).f_CNAME)), p_LV)), 0);
}
l_F_1210 = ((*(R27 *)rt_nil_check(l_F_1210))).f_NEXT;
}
RT_B_TICK();
} L_end1213: ;
{ R9 rv1214 = l_R_1212;
return rv1214; }
}
}
{ R9 rv1215 = r_NO_TEXT();
return rv1215; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_INIT(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1216; memset(&l_K_1216, 0, sizeof l_K_1216);
l_K_1216 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((((((l_K_1216 == g_T_STR) || (l_K_1216 == g_T_BITS)) || (l_K_1216 == g_T_ARR)) || (l_K_1216 == g_T_SEM)) || (l_K_1216 == g_T_XFIX)))
{
{ rt_int rv1217 = 1;
return rv1217; }
}
else if ((l_K_1216 == g_T_ABS))
{
{ rt_int rv1218 = r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv1218; }
}
else if ((l_K_1216 == g_T_REC))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_ARGS == NULL)))
{
{ rt_int rv1219 = 1;
return rv1219; }
}
{
R27 * l_F_1220; memset(&l_F_1220, 0, sizeof l_F_1220);
l_F_1220 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1220 == NULL)) goto L_end1221;
{
if (r_NEEDS_INIT(((*(R27 *)rt_nil_check(l_F_1220))).f_T))
{
{ rt_int rv1222 = 1;
return rv1222; }
}
l_F_1220 = ((*(R27 *)rt_nil_check(l_F_1220))).f_NEXT;
}
RT_B_TICK();
} L_end1221: ;
}
}
{ rt_int rv1223 = 0;
return rv1223; }
rt_raise(RT_X_INIT);
}
static R9 r_COPY_OF(R22 * p_T, R9 p_V) { RT_B_TICK(); 
rt_int l_K_1224; memset(&l_K_1224, 0, sizeof l_K_1224);
l_K_1224 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((((l_K_1224 == g_T_STR) || (l_K_1224 == g_T_BITS)) || (l_K_1224 == g_T_XFIX)))
{
{ R9 rv1225 = r_FMT1(rt_str("rt_str_copy(@)", 14), p_V);
return rv1225; }
}
else if ((l_K_1224 == g_T_ABS))
{
{ R9 rv1226 = r_COPY_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_V);
return rv1226; }
}
else if (((l_K_1224 == g_T_ARR) || (l_K_1224 == g_T_REC)))
{
{ R9 rv1227 = r_FMT2(rt_str("C_@(@)", 6), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_V);
return rv1227; }
}
{ R9 rv1228 = p_V;
return rv1228; }
rt_raise(RT_X_INIT);
}
static R9 r_ASSIGN_CODE(R22 * p_T, R9 p_LV, R9 p_RV) { RT_B_TICK(); 
rt_int l_K_1229; memset(&l_K_1229, 0, sizeof l_K_1229);
l_K_1229 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((((l_K_1229 == g_T_STR) || (l_K_1229 == g_T_BITS)) || (l_K_1229 == g_T_XFIX)))
{
{ R9 rv1230 = r_FMT2(rt_str("rt_b_assign(&@, @);", 19), p_LV, p_RV);
return rv1230; }
}
else if ((l_K_1229 == g_T_ABS))
{
{ R9 rv1231 = r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_LV, p_RV);
return rv1231; }
}
else if ((l_K_1229 == g_T_SEM))
{
{ R9 rv1232 = r_FMT2(rt_str("rt_b_sem_assign(@, @);", 22), p_LV, p_RV);
return rv1232; }
}
else if ((l_K_1229 == g_T_ARR))
{
{ R9 rv1233 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1233; }
}
else if ((l_K_1229 == g_T_REC))
{
if (r_HAS_ANY(p_T))
{
{ R9 rv1234 = r_FMT3(rt_str("S_@(&@, @, 1);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1234; }
}
{ R9 rv1235 = r_FMT3(rt_str("S_@(&@, @, 0);", 14), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_LV, p_RV);
return rv1235; }
}
{ R9 rv1236 = r_FMT2(rt_str("@ = @;", 6), p_LV, p_RV);
return rv1236; }
rt_raise(RT_X_INIT);
}
static R9 r_EQUAL_CODE(R22 * p_T, R9 p_A, R9 p_B) { RT_B_TICK(); 
rt_int l_K_1237; memset(&l_K_1237, 0, sizeof l_K_1237);
l_K_1237 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((((l_K_1237 == g_T_STR) || (l_K_1237 == g_T_BITS)) || (l_K_1237 == g_T_XFIX)))
{
{ R9 rv1238 = r_FMT2(rt_str("rt_b_eq(@, @)", 13), p_A, p_B);
return rv1238; }
}
else if ((l_K_1237 == g_T_ABS))
{
{ R9 rv1239 = r_EQUAL_CODE(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_A, p_B);
return rv1239; }
}
else if (((l_K_1237 == g_T_ARR) || (l_K_1237 == g_T_REC)))
{
{ R9 rv1240 = r_FMT3(rt_str("E_@(@, @)", 9), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, p_A, p_B);
return rv1240; }
}
else if ((l_K_1237 == g_T_SEM))
{
{ R9 rv1241 = r_MK(rt_str("0", 1));
return rv1241; }
}
else if (r_IS_D(p_T))
{
{ R9 rv1242 = r_FMT2(rt_str("(rt_b_dcmp(@, @) == 0)", 22), p_A, p_B);
return rv1242; }
}
{ R9 rv1243 = r_FMT2(rt_str("(@ == @)", 8), p_A, p_B);
return rv1243; }
rt_raise(RT_X_INIT);
}
static R9 r_RANGE_CHECK(R22 * p_T, R9 p_V, R9 p_SELF) { RT_B_TICK(); 
if ((((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_XFIX) && ((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN > ((rt_int)0LL))) && (!((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS)))
{
{ R9 rv1244 = r_XFIX_RANGE_CHECK(p_T, p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF), ((*(R22 *)rt_nil_check(p_T))).f_ROPEN, ((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK);
return rv1244; }
}
if ((((((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) && ((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN > ((rt_int)0LL))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))) && (r_REP_BITS(p_T) < ((rt_int)63LL))) && (!((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS)))
{
{
R9 l_U_1245; memset(&l_U_1245, 0, sizeof l_U_1245);
S_R9(&l_U_1245, r_MK(rt_str("0", 1)), 0);
if (r_REP_UNSIGNED(p_T))
{
S_R9(&l_U_1245, r_MK(rt_str("1", 1)), 0);
}
{ R9 rv1246 = r_RANGE_CHECK_IN(p_T, r_FMT3(rt_str("rt_b_rep_fits(@, @, @)", 22), p_V, r_NUM(r_REP_BITS(p_T)), l_U_1245), p_SELF);
return rv1246; }
}
}
{ R9 rv1247 = r_RANGE_CHECK_IN(p_T, p_V, p_SELF);
return rv1247; }
rt_raise(RT_X_INIT);
}
static R9 r_RANGE_CHECK_IN(R22 * p_T, R9 p_V, R9 p_SELF) { RT_B_TICK(); 
if (((((((*(R22 *)rt_nil_check(p_T))).f_LO_C).f_LEN == ((rt_int)0LL)) || (!r_IS_NUMERIC_OR_ENUM(p_T))) || ((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS))
{
{ R9 rv1248 = p_V;
return rv1248; }
}
if ((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(p_T))).f_HI_C)))
{
{ R9 rv1249 = p_V;
return rv1249; }
}
if ((((((*(R22 *)rt_nil_check(p_T))).f_RLEVEL > ((rt_int)0LL)) && (!(((*(R22 *)rt_nil_check(p_T))).f_RLEVEL == r_CUR_LEVEL()))) && (!(((((*(R22 *)rt_nil_check(p_T))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(p_T))).f_MHI).f_OK)))))
{
{ R9 rv1250 = p_V;
return rv1250; }
}
if (r_IS_D(p_T))
{
{
R9 l_TC_1251; memset(&l_TC_1251, 0, sizeof l_TC_1251);
S_R9(&l_TC_1251, r_MK(rt_str("0", 1)), 0);
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
S_R9(&l_TC_1251, r_MK(rt_str("1", 1)), 0);
}
{ R9 rv1252 = r_FMT4(rt_str("rt_b_drange(@, @, @, @)", 23), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF), l_TC_1251);
return rv1252; }
}
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R9 rv1253 = r_FMT3(rt_str("rt_b_tfrange(@, @, @)", 21), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1253; }
}
{ R9 rv1254 = r_FMT3(rt_str("rt_frange(@, @, @)", 18), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1254; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK)
{
{ R9 rv1255 = r_FMT3(rt_str("rt_b_trange(@, @, @)", 20), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1255; }
}
{ R9 rv1256 = r_FMT3(rt_str("rt_range(@, @, @)", 17), p_V, r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_LO_C, p_SELF), r_SUBST_SELF(((*(R22 *)rt_nil_check(p_T))).f_HI_C, p_SELF));
return rv1256; }
rt_raise(RT_X_INIT);
}
static R9 r_XFIX_RANGE_CHECK(R22 * p_T, R9 p_V, R9 p_LO, R9 p_HI, rt_int p_OPEN, rt_int p_TC) { RT_B_TICK(); 
R9 l_X_1257; memset(&l_X_1257, 0, sizeof l_X_1257);
S_R9(&l_X_1257, r_NEW_NAME(rt_str("xr", 2)), 0);
R9 l_E_1258; memset(&l_E_1258, 0, sizeof l_E_1258);
S_R9(&l_E_1258, r_MK(rt_str("RT_X_RANGE", 10)), 0);
if (p_TC)
{
S_R9(&l_E_1258, r_MK(rt_str("RT_B_INVALID_TYPE", 17)), 0);
}
{ R9 rv1259 = r_CAT(r_FMT3(rt_str("({ rstr @ = @; if (@) ", 22), l_X_1257, p_V, r_XFIX_OUTSIDE(p_T, l_X_1257, p_LO, p_HI, p_OPEN)), r_FMT2(rt_str("rt_raise(@); @; })", 18), l_E_1258, l_X_1257));
return rv1259; }
rt_raise(RT_X_INIT);
}
static R9 r_XFIX_OUTSIDE(R22 * p_T, R9 p_X, R9 p_LO, R9 p_HI, rt_int p_OPEN) { RT_B_TICK(); 
R26 l_XT_1260; memset(&l_XT_1260, 0, sizeof l_XT_1260);
S_R26(&l_XT_1260, r_MKET(p_X, p_T), 0);
R9 l_BAD_LO_1261; memset(&l_BAD_LO_1261, 0, sizeof l_BAD_LO_1261);
R9 l_BAD_HI_1262; memset(&l_BAD_HI_1262, 0, sizeof l_BAD_HI_1262);
if (((p_OPEN == ((rt_int)1LL)) || (p_OPEN == ((rt_int)3LL))))
{
S_R9(&l_BAD_LO_1261, r_FMT1(rt_str("!@", 2), r_XFIX_LESS(r_MKET(p_LO, p_T), l_XT_1260)), 0);
}
else
{
S_R9(&l_BAD_LO_1261, r_XFIX_LESS(l_XT_1260, r_MKET(p_LO, p_T)), 0);
}
if ((p_OPEN >= ((rt_int)2LL)))
{
S_R9(&l_BAD_HI_1262, r_FMT1(rt_str("!@", 2), r_XFIX_LESS(l_XT_1260, r_MKET(p_HI, p_T))), 0);
}
else
{
S_R9(&l_BAD_HI_1262, r_XFIX_LESS(r_MKET(p_HI, p_T), l_XT_1260), 0);
}
{ R9 rv1263 = r_FMT2(rt_str("(@ || @)", 8), l_BAD_LO_1261, l_BAD_HI_1262);
return rv1263; }
rt_raise(RT_X_INIT);
}
static R9 r_XFIX_LESS(R26 p_A, R26 p_B) { RT_B_TICK(); 
R29 * l_ARGS_1264; memset(&l_ARGS_1264, 0, sizeof l_ARGS_1264);
l_ARGS_1264 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R12 * l_Y_1265; memset(&l_Y_1265, 0, sizeof l_Y_1265);
l_Y_1265 = r_USER_OPERATOR(r_MKN(rt_str("LESS_THAN_", 10)), l_ARGS_1264, ((rt_int)0LL));
if ((l_Y_1265 == NULL))
{
r_FAILT(((rt_int)0LL), rt_str("the program defines no LESS_THAN_ for ", 38), r_TYPE_NAME((p_A).f_T));
}
{ R9 rv1266 = (r_CALL_SYM(l_Y_1265, l_ARGS_1264, ((rt_int)0LL))).f_C;
return rv1266; }
rt_raise(RT_X_INIT);
}
static rt_int r_REP_BITS(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv1267 = ((rt_int)63LL);
return rv1267; }
}
if (((!r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9))) || (((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ rt_int rv1268 = ((rt_int)63LL);
return rv1268; }
}
{
R25 l_N_1269; memset(&l_N_1269, 0, sizeof l_N_1269);
S_R25(&l_N_1269, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((((l_N_1269).f_OK && ((l_N_1269).f_V >= ((rt_int)0LL))) && ((l_N_1269).f_V < ((rt_int)63LL))))
{
{ rt_int rv1270 = (l_N_1269).f_V;
return rv1270; }
}
}
{ rt_int rv1271 = ((rt_int)63LL);
return rv1271; }
rt_raise(RT_X_INIT);
}
static rt_int r_REP_UNSIGNED(R22 * p_T) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_NEXT == NULL))
{
{ rt_int rv1272 = 0;
return rv1272; }
}
{ rt_int rv1273 = r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8));
return rv1273; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMERIC_OR_ENUM(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv1274 = (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ENUM));
return rv1274; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_CLASS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv1275 = 1;
return rv1275; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv1276 = r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv1276; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv1277 = r_SAME_CLASS(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1277; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_XFIX) || (((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_XFIX)))
{
{ rt_int rv1278 = ((((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_XFIX) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT))) && (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_XFIX) || (((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_INT))));
return rv1278; }
}
if ((!(((*(R22 *)rt_nil_check(p_A))).f_KIND == ((*(R22 *)rt_nil_check(p_B))).f_KIND)))
{
{ rt_int rv1279 = 0;
return rv1279; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC)))
{
{ rt_int rv1280 = (((*(R22 *)rt_nil_check(p_A))).f_BASE == ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1280; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1281 = ((((*(R22 *)rt_nil_check(p_A))).f_DIMS == ((*(R22 *)rt_nil_check(p_B))).f_DIMS) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM));
return rv1281; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_PTR))
{
{ rt_int rv1282 = r_SAME_TYPE(r_TARGET(p_A), r_TARGET(p_B));
return rv1282; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1283 = ((r_ORIGINAL(((*(R22 *)rt_nil_check(p_A))).f_DECL) == r_ORIGINAL(((*(R22 *)rt_nil_check(p_B))).f_DECL)) && r_SAME_CLASS(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE));
return rv1283; }
}
{ rt_int rv1284 = 1;
return rv1284; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
if ((p_A == p_B))
{
{ rt_int rv1285 = 1;
return rv1285; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS))))
{
{ rt_int rv1286 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, p_B);
return rv1286; }
}
else if (((((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_ABS) && (!(((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))))
{
{ rt_int rv1287 = r_SAME_TYPE(p_A, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1287; }
}
if ((!r_SAME_CLASS(p_A, p_B)))
{
{ rt_int rv1288 = 0;
return rv1288; }
}
if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_XFIX) || (((*(R22 *)rt_nil_check(p_B))).f_KIND == g_T_XFIX)))
{
{ rt_int rv1289 = r_SAME_XFIX(p_A, p_B);
return rv1289; }
}
else if (((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv1290 = (((*(R22 *)rt_nil_check(p_A))).f_SCALE == ((*(R22 *)rt_nil_check(p_B))).f_SCALE);
return rv1290; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ARR))
{
{ rt_int rv1291 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, ((*(R22 *)rt_nil_check(p_B))).f_ELEM);
return rv1291; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_REC))
{
{ rt_int rv1292 = r_SAME_ARGS(((*(R22 *)rt_nil_check(p_A))).f_ARGS, ((*(R22 *)rt_nil_check(p_B))).f_ARGS);
return rv1292; }
}
else if ((((*(R22 *)rt_nil_check(p_A))).f_KIND == g_T_ABS))
{
{ rt_int rv1293 = r_SAME_TYPE(((*(R22 *)rt_nil_check(p_A))).f_BASE, ((*(R22 *)rt_nil_check(p_B))).f_BASE);
return rv1293; }
}
{ rt_int rv1294 = 1;
return rv1294; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_GEN_ARG(R28 * p_B) { RT_B_TICK(); 
if (((((*(R28 *)rt_nil_check(p_B))).f_HI).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1295 = 0;
return rv1295; }
}
{ rt_int rv1296 = r_IS_GEN_TEXT(((*(R28 *)rt_nil_check(p_B))).f_HI);
return rv1296; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_ARGS(R28 * p_A, R28 * p_B) { RT_B_TICK(); 
R28 * l_P_1297; memset(&l_P_1297, 0, sizeof l_P_1297);
l_P_1297 = p_A;
R28 * l_Q_1298; memset(&l_Q_1298, 0, sizeof l_Q_1298);
l_Q_1298 = p_B;
for (;;) {
if (((l_P_1297 == NULL) || (l_Q_1298 == NULL))) goto L_end1299;
{
if ((r_IS_GEN_ARG(l_P_1297) || r_IS_GEN_ARG(l_Q_1298)))
{
}
else if ((!(((*(R28 *)rt_nil_check(l_P_1297))).f_ANYARG == ((*(R28 *)rt_nil_check(l_Q_1298))).f_ANYARG)))
{
{ rt_int rv1300 = 0;
return rv1300; }
}
if (((((*(R28 *)rt_nil_check(l_P_1297))).f_MLO).f_OK && (((*(R28 *)rt_nil_check(l_Q_1298))).f_MLO).f_OK))
{
if ((!((((*(R28 *)rt_nil_check(l_P_1297))).f_MLO).f_V == (((*(R28 *)rt_nil_check(l_Q_1298))).f_MLO).f_V)))
{
{ rt_int rv1301 = 0;
return rv1301; }
}
}
l_P_1297 = ((*(R28 *)rt_nil_check(l_P_1297))).f_NEXT;
l_Q_1298 = ((*(R28 *)rt_nil_check(l_Q_1298))).f_NEXT;
}
RT_B_TICK();
} L_end1299: ;
{ rt_int rv1302 = ((l_P_1297 == NULL) && (l_Q_1298 == NULL));
return rv1302; }
rt_raise(RT_X_INIT);
}
static R9 r_FRAME_OF(rt_int p_LEVEL) { RT_B_TICK(); 
R19 * l_CS_1303; memset(&l_CS_1303, 0, sizeof l_CS_1303);
l_CS_1303 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R9 l_T_1304; memset(&l_T_1304, 0, sizeof l_T_1304);
rt_int l_LEV_1305; memset(&l_LEV_1305, 0, sizeof l_LEV_1305);
if ((((*(R19 *)rt_nil_check(l_CS_1303))).f_LEVEL == p_LEVEL))
{
{ R9 rv1306 = r_MK(rt_str("F", 1));
return rv1306; }
}
if (((*(R19 *)rt_nil_check(l_CS_1303))).f_FRAMED)
{
S_R9(&l_T_1304, r_MK(rt_str("F->up", 5)), 0);
}
else
{
S_R9(&l_T_1304, r_MK(rt_str("up_", 3)), 0);
}
l_LEV_1305 = rt_sub(((*(R19 *)rt_nil_check(l_CS_1303))).f_LEVEL, ((rt_int)1LL));
for (;;) {
if ((l_LEV_1305 <= p_LEVEL)) goto L_end1307;
{
S_R9(&l_T_1304, r_CATS(l_T_1304, rt_str("->up", 4)), 0);
l_LEV_1305 = rt_sub(l_LEV_1305, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1307: ;
{ R9 rv1308 = l_T_1304;
return rv1308; }
rt_raise(RT_X_INIT);
}
static R9 r_OBJ_ACCESS(R12 * p_Y) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL <= ((rt_int)0LL)) || (((*(R12 *)rt_nil_check(p_Y))).f_LEVEL == r_CUR_LEVEL())))
{
{ R9 rv1309 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1309; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_FIELD).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1310 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1310; }
}
if (((*(R12 *)rt_nil_check(p_Y))).f_BYREF)
{
{ R9 rv1311 = r_FMT2(rt_str("(*@->@)", 7), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1311; }
}
{ R9 rv1312 = r_FMT2(rt_str("@->@", 4), r_FRAME_OF(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD);
return rv1312; }
rt_raise(RT_X_INIT);
}
static R9 r_NEW_OBJECT(R12 * p_Y, rstr p_BASE) { RT_B_TICK(); 
R19 * l_CS_1313; memset(&l_CS_1313, 0, sizeof l_CS_1313);
l_CS_1313 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R22 * l_T_1314; memset(&l_T_1314, 0, sizeof l_T_1314);
l_T_1314 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
R9 l_CN_1315; memset(&l_CN_1315, 0, sizeof l_CN_1315);
if ((((((*(R19 *)rt_nil_check(l_CS_1313))).f_LEVEL == ((rt_int)0LL)) && ((((*(R7 *)rt_nil_check(g_W))).f_SEPSEG).f_LEN > ((rt_int)0LL))) && rt_b_eq(p_BASE, rt_str("", 0))))
{
((*(R7 *)rt_nil_check(g_W))).f_SEPV = rt_add(((*(R7 *)rt_nil_check(g_W))).f_SEPV, ((rt_int)1LL));
S_R9(&l_CN_1315, r_FMT3(rt_str("bs_@_v@_@", 9), r_CID(((*(R7 *)rt_nil_check(g_W))).f_SEPSEG), r_NUM(((*(R7 *)rt_nil_check(g_W))).f_SEPV), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
if (((*(R7 *)rt_nil_check(g_W))).f_EXTSEG)
{
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("extern @ @;", 11), r_CTYPE(l_T_1314), l_CN_1315));
}
else
{
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("@ @;", 4), r_CTYPE(l_T_1314), l_CN_1315));
}
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1315, 0);
{ R9 rv1316 = l_CN_1315;
return rv1316; }
}
if ((((*(R19 *)rt_nil_check(l_CS_1313))).f_LEVEL == ((rt_int)0LL)))
{
if (((((*(R7 *)rt_nil_check(g_W))).f_DEPTH <= ((rt_int)2LL)) && (((*(R7 *)rt_nil_check(g_W))).f_MODL == NULL)))
{
S_R9(&l_CN_1315, r_FMT2(rt_str("g@_@", 4), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME)), 0);
}
else
{
S_R9(&l_CN_1315, r_FMT3(rt_str("g@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
}
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static @ @;", 11), r_CTYPE(l_T_1314), l_CN_1315));
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1315, 0);
{ R9 rv1317 = l_CN_1315;
return rv1317; }
}
S_R9(&l_CN_1315, r_FMT3(rt_str("l@_@_@", 6), r_MK(p_BASE), r_CID(((*(R12 *)rt_nil_check(p_Y))).f_NAME), r_NEW_NAME(rt_str("", 0))), 0);
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_FIELD, l_CN_1315, 0);
if (((*(R19 *)rt_nil_check(l_CS_1313))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ @;", 5), r_CTYPE(l_T_1314), l_CN_1315), &((*(R19 *)rt_nil_check(l_CS_1313))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, r_FMT1(rt_str("F->@", 4), l_CN_1315), 0);
{ R9 rv1318 = ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS;
return rv1318; }
}
r_CODE(r_FMT4(rt_str("@ @; memset(&@, 0, sizeof @);", 29), r_CTYPE(l_T_1314), l_CN_1315, l_CN_1315, l_CN_1315));
S_R9(&((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_CN_1315, 0);
{ R9 rv1319 = l_CN_1315;
return rv1319; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_OBJECTS(R17 * p_D) { RT_B_TICK(); 
R22 * l_T_1320; memset(&l_T_1320, 0, sizeof l_T_1320);
l_T_1320 = r_RESOLVE(((*(R17 *)rt_nil_check(p_D))).f_B);
R17 * l_N_1321; memset(&l_N_1321, 0, sizeof l_N_1321);
l_N_1321 = ((*(R17 *)rt_nil_check(p_D))).f_A;
R26 l_V_1322; memset(&l_V_1322, 0, sizeof l_V_1322);
rt_int l_HAVE_V_1323; memset(&l_HAVE_V_1323, 0, sizeof l_HAVE_V_1323);
l_HAVE_V_1323 = 0;
if (((((*(R22 *)rt_nil_check(l_T_1320))).f_KIND == g_T_TYPE) || (((*(R22 *)rt_nil_check(l_T_1320))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_D))).f_LINE, rt_str("not a type for an object", 24));
}
for (;;) {
if ((l_N_1321 == NULL)) goto L_end1324;
{
{
R12 * l_Y_1325; memset(&l_Y_1325, 0, sizeof l_Y_1325);
l_Y_1325 = r_NEW_SYM(g_Y_VAR, ((*(R17 *)rt_nil_check(l_N_1321))).f_NAME);
R9 l_CN_1326; memset(&l_CN_1326, 0, sizeof l_CN_1326);
if ((((*(R17 *)rt_nil_check(p_D))).f_KIND == g_N_CONST))
{
((*(R12 *)rt_nil_check(l_Y_1325))).f_KIND = g_Y_CONST;
((*(R12 *)rt_nil_check(l_Y_1325))).f_INPUT = 1;
if ((r_IS_SCALAR(l_T_1320) && (((*(R22 *)rt_nil_check(l_T_1320))).f_SCALE == ((rt_int)0LL))))
{
{
R25 l_M_1327; memset(&l_M_1327, 0, sizeof l_M_1327);
S_R25(&l_M_1327, r_MANIFEST(((*(R17 *)rt_nil_check(p_D))).f_C), 0);
((*(R12 *)rt_nil_check(l_Y_1325))).f_HASMV = (l_M_1327).f_OK;
((*(R12 *)rt_nil_check(l_Y_1325))).f_MV = (l_M_1327).f_V;
}
}
}
((*(R12 *)rt_nil_check(l_Y_1325))).f_T = l_T_1320;
S_R9(&l_CN_1326, r_NEW_OBJECT(l_Y_1325, rt_str("", 0)), 0);
if (r_NEEDS_INIT(l_T_1320))
{
r_CODE(r_INIT_CODE(l_T_1320, l_CN_1326));
}
if ((!(((*(R17 *)rt_nil_check(p_D))).f_C == NULL)))
{
if ((!l_HAVE_V_1323))
{
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R17 *)rt_nil_check(p_D))).f_C;
S_R26(&l_V_1322, r_EXPR(((*(R17 *)rt_nil_check(p_D))).f_C, l_T_1320), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
l_HAVE_V_1323 = 1;
}
r_CODE(r_STORE_CODE(l_T_1320, l_CN_1326, l_V_1322, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_D))).f_C))).f_LINE, r_NO_TEXT()));
}
r_DEFINE(l_Y_1325, ((*(R17 *)rt_nil_check(l_N_1321))).f_LINE);
}
l_N_1321 = ((*(R17 *)rt_nil_check(l_N_1321))).f_NEXT;
}
RT_B_TICK();
} L_end1324: ;
}
static R26 r_MKET(R9 p_C, R22 * p_T) { RT_B_TICK(); 
{ R26 rv1328 = ({ R26 rc1329; memset(&rc1329, 0, sizeof rc1329);  S_R9(&rc1329.f_C, p_C, 0); rc1329.f_T = p_T; rc1329.f_LVAL = 0; S_R9(&rc1329.f_SELF, r_NO_TEXT(), 0); rc1329; });
return rv1328; }
rt_raise(RT_X_INIT);
}
static R26 r_MKLV(R9 p_C, R22 * p_T, rt_int p_LVAL, R9 p_SELF) { RT_B_TICK(); 
{ R26 rv1330 = ({ R26 rc1331; memset(&rc1331, 0, sizeof rc1331);  S_R9(&rc1331.f_C, p_C, 0); rc1331.f_T = p_T; rc1331.f_LVAL = p_LVAL; S_R9(&rc1331.f_SELF, p_SELF, 0); rc1331; });
return rv1330; }
rt_raise(RT_X_INIT);
}
static R22 * r_INT_TYPE(rt_int p_SCALE) { RT_B_TICK(); 
R22 * l_T_1332; memset(&l_T_1332, 0, sizeof l_T_1332);
if ((p_SCALE == ((rt_int)0LL)))
{
{ R22 * rv1333 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
return rv1333; }
}
l_T_1332 = r_NEW_TYP(g_T_INT);
((*(R22 *)rt_nil_check(l_T_1332))).f_SCALE = p_SCALE;
{ R22 * rv1334 = l_T_1332;
return rv1334; }
rt_raise(RT_X_INIT);
}
static R22 * r_STR_TYPE(R9 p_LEN, R25 p_M) { RT_B_TICK(); 
R22 * l_T_1335; memset(&l_T_1335, 0, sizeof l_T_1335);
l_T_1335 = r_NEW_TYP(g_T_STR);
S_R9(&((*(R22 *)rt_nil_check(l_T_1335))).f_LEN_C, p_LEN, 0);
S_R25(&((*(R22 *)rt_nil_check(l_T_1335))).f_MLEN, p_M, 0);
{ R22 * rv1336 = l_T_1335;
return rv1336; }
rt_raise(RT_X_INIT);
}
static R9 r_CSTRING(R9 p_T) { RT_B_TICK(); 
rstr l_S_1337; memset(&l_S_1337, 0, sizeof l_S_1337);
l_S_1337 = rt_b_str_new((p_T).f_LEN, 0);
rt_b_assign(&l_S_1337, r_STR(p_T, (p_T).f_LEN));
rt_int l_AT_1338; memset(&l_AT_1338, 0, sizeof l_AT_1338);
l_AT_1338 = ((*(R7 *)rt_nil_check(g_W))).f_TOP;
R9 l_R_1339; memset(&l_R_1339, 0, sizeof l_R_1339);
S_R9(&l_R_1339, r_MK(rt_str("\"", 1)), 0);
{ rt_int it1341_lo = ((rt_int)0LL), it1341_hi = rt_sub((p_T).f_LEN, ((rt_int)1LL));
for (rt_int it1341 = it1341_lo; it1341 <= it1341_hi; it1341++) {
{
if ((rt_b_eq(rt_b_slice(l_S_1337, it1341, it1341), rt_str("\"", 1)) || rt_b_eq(rt_b_slice(l_S_1337, it1341, it1341), rt_str("\\", 1))))
{
S_R9(&l_R_1339, r_MK(rt_b_cat(rt_str("\\", 1), rt_b_slice(l_S_1337, it1341, it1341))), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1337, it1341, it1341), rt_str("\?", 1)))
{
S_R9(&l_R_1339, r_MK(rt_str("\\\?", 2)), 0);
}
else
{
{
rt_int l_C_1342; memset(&l_C_1342, 0, sizeof l_C_1342);
l_C_1342 = r_CODE_OF(rt_b_slice(l_S_1337, it1341, it1341));
if (({ rt_int iv1343 = l_C_1342; (((rt_int)32LL) <= iv1343) && (iv1343 <= ((rt_int)126LL)); }))
{
S_R9(&l_R_1339, r_MK(rt_b_slice(l_S_1337, it1341, it1341)), 0);
}
else
{
S_R9(&l_R_1339, r_MK(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("\\", 1), rt_b_image(rt_quot(l_C_1342, ((rt_int)64LL)))), rt_b_image(rt_rem((rt_quot(l_C_1342, ((rt_int)8LL))), ((rt_int)8LL)))), rt_b_image(rt_rem(l_C_1342, ((rt_int)8LL))))), 0);
}
}
}
}
RT_B_TICK();
if (it1341 == it1341_hi) break;
} } L_end1340: ;
S_R9(&l_R_1339, r_MK(rt_str("\"", 1)), 0);
{ R9 rv1344 = ({ R9 rc1345; memset(&rc1345, 0, sizeof rc1345);  rc1345.f_AT = l_AT_1338; rc1345.f_LEN = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_TOP, l_AT_1338); rc1345.f_H = rt_neg(((rt_int)1LL)); rc1345; });
return rv1344; }
rt_raise(RT_X_INIT);
}
static R25 r_MANIFEST(R17 * p_E) { RT_B_TICK(); 
rt_int l_K_1346; memset(&l_K_1346, 0, sizeof l_K_1346);
l_K_1346 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
R25 l_NO_1347; memset(&l_NO_1347, 0, sizeof l_NO_1347);
S_R25(&l_NO_1347, ({ R25 rc1348; memset(&rc1348, 0, sizeof rc1348);  rc1348.f_OK = 0; rc1348.f_V = ((rt_int)0LL); rc1348; }), 0);
if ((l_K_1346 == g_N_INT))
{
{ R25 rv1349 = ({ R25 rc1350; memset(&rc1350, 0, sizeof rc1350);  rc1350.f_OK = 1; rc1350.f_V = ((*(R17 *)rt_nil_check(p_E))).f_IV; rc1350; });
return rv1349; }
}
else if ((l_K_1346 == g_N_PAREN))
{
{ R25 rv1351 = r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A);
return rv1351; }
}
else if ((l_K_1346 == g_N_BOOL))
{
{ R25 rv1352 = ({ R25 rc1353; memset(&rc1353, 0, sizeof rc1353);  rc1353.f_OK = 1; rc1353.f_V = ((*(R17 *)rt_nil_check(p_E))).f_IV; rc1353; });
return rv1352; }
}
else if ((l_K_1346 == g_N_UNOP))
{
{
R25 l_A_1354; memset(&l_A_1354, 0, sizeof l_A_1354);
S_R25(&l_A_1354, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("-", 1)))
{
if ((!(l_A_1354).f_OK))
{
{ R25 rv1355 = l_NO_1347;
return rv1355; }
}
{ R25 rv1356 = ({ R25 rc1357; memset(&rc1357, 0, sizeof rc1357);  rc1357.f_OK = 1; rc1357.f_V = r_MANIFEST_ARITH(r_MK(rt_str("-", 1)), ((rt_int)0LL), (l_A_1354).f_V, ((*(R17 *)rt_nil_check(p_E))).f_LINE); rc1357; });
return rv1356; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("+", 1)))
{
{ R25 rv1358 = l_A_1354;
return rv1358; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NOT", 3)))
{
{ R25 rv1359 = ({ R25 rc1360; memset(&rc1360, 0, sizeof rc1360);  rc1360.f_OK = (l_A_1354).f_OK; rc1360.f_V = rt_sub(((rt_int)1LL), (l_A_1354).f_V); rc1360; });
return rv1359; }
}
}
}
else if ((l_K_1346 == g_N_BINOP))
{
if ((!(((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R25 rv1361 = l_NO_1347;
return rv1361; }
}
{
R25 l_A_1362; memset(&l_A_1362, 0, sizeof l_A_1362);
S_R25(&l_A_1362, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R25 l_B_1363; memset(&l_B_1363, 0, sizeof l_B_1363);
S_R25(&l_B_1363, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
R9 l_OP_1364; memset(&l_OP_1364, 0, sizeof l_OP_1364);
S_R9(&l_OP_1364, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
if (r_TEQS(l_OP_1364, rt_str("&", 1)))
{
if (((((l_A_1362).f_OK && ((l_A_1362).f_V == ((rt_int)0LL)))) || (((l_B_1363).f_OK && ((l_B_1363).f_V == ((rt_int)0LL))))))
{
{ R25 rv1365 = ({ R25 rc1366; memset(&rc1366, 0, sizeof rc1366);  rc1366.f_OK = 1; rc1366.f_V = ((rt_int)0LL); rc1366; });
return rv1365; }
}
if (((l_A_1362).f_OK && (l_B_1363).f_OK))
{
{ R25 rv1367 = ({ R25 rc1368; memset(&rc1368, 0, sizeof rc1368);  rc1368.f_OK = 1; rc1368.f_V = ((rt_int)1LL); rc1368; });
return rv1367; }
}
{ R25 rv1369 = l_NO_1347;
return rv1369; }
}
else if (r_TEQS(l_OP_1364, rt_str("!", 1)))
{
if (((((l_A_1362).f_OK && ((l_A_1362).f_V == ((rt_int)1LL)))) || (((l_B_1363).f_OK && ((l_B_1363).f_V == ((rt_int)1LL))))))
{
{ R25 rv1370 = ({ R25 rc1371; memset(&rc1371, 0, sizeof rc1371);  rc1371.f_OK = 1; rc1371.f_V = ((rt_int)1LL); rc1371; });
return rv1370; }
}
if (((l_A_1362).f_OK && (l_B_1363).f_OK))
{
{ R25 rv1372 = ({ R25 rc1373; memset(&rc1373, 0, sizeof rc1373);  rc1373.f_OK = 1; rc1373.f_V = ((rt_int)0LL); rc1373; });
return rv1372; }
}
{ R25 rv1374 = l_NO_1347;
return rv1374; }
}
if ((!(((l_A_1362).f_OK && (l_B_1363).f_OK))))
{
{ R25 rv1375 = l_NO_1347;
return rv1375; }
}
if ((!((r_MANIFEST_INT(((*(R17 *)rt_nil_check(p_E))).f_A) && r_MANIFEST_INT(((*(R17 *)rt_nil_check(p_E))).f_B)))))
{
{ R25 rv1376 = l_NO_1347;
return rv1376; }
}
if (((r_TEQS(l_OP_1364, rt_str("+", 1)) || r_TEQS(l_OP_1364, rt_str("-", 1))) || r_TEQS(l_OP_1364, rt_str("*", 1))))
{
{ R25 rv1377 = ({ R25 rc1378; memset(&rc1378, 0, sizeof rc1378);  rc1378.f_OK = 1; rc1378.f_V = r_MANIFEST_ARITH(l_OP_1364, (l_A_1362).f_V, (l_B_1363).f_V, ((*(R17 *)rt_nil_check(p_E))).f_LINE); rc1378; });
return rv1377; }
}
else if ((r_TEQS(l_OP_1364, rt_str("//", 2)) && (!((l_B_1363).f_V == ((rt_int)0LL)))))
{
{ R25 rv1379 = ({ R25 rc1380; memset(&rc1380, 0, sizeof rc1380);  rc1380.f_OK = 1; rc1380.f_V = rt_quot((l_A_1362).f_V, (l_B_1363).f_V); rc1380; });
return rv1379; }
}
else if ((r_TEQS(l_OP_1364, rt_str("MOD", 3)) && (!((l_B_1363).f_V == ((rt_int)0LL)))))
{
{ R25 rv1381 = ({ R25 rc1382; memset(&rc1382, 0, sizeof rc1382);  rc1382.f_OK = 1; rc1382.f_V = rt_rem((l_A_1362).f_V, (l_B_1363).f_V); rc1382; });
return rv1381; }
}
else if (r_TEQS(l_OP_1364, rt_str("=", 1)))
{
{ R25 rv1383 = ({ R25 rc1384; memset(&rc1384, 0, sizeof rc1384);  rc1384.f_OK = 1; rc1384.f_V = r_BOOL_INT(((l_A_1362).f_V == (l_B_1363).f_V)); rc1384; });
return rv1383; }
}
else if (r_TEQS(l_OP_1364, rt_str("<>", 2)))
{
{ R25 rv1385 = ({ R25 rc1386; memset(&rc1386, 0, sizeof rc1386);  rc1386.f_OK = 1; rc1386.f_V = r_BOOL_INT((!((l_A_1362).f_V == (l_B_1363).f_V))); rc1386; });
return rv1385; }
}
else if (r_TEQS(l_OP_1364, rt_str("<", 1)))
{
{ R25 rv1387 = ({ R25 rc1388; memset(&rc1388, 0, sizeof rc1388);  rc1388.f_OK = 1; rc1388.f_V = r_BOOL_INT(((l_A_1362).f_V < (l_B_1363).f_V)); rc1388; });
return rv1387; }
}
else if (r_TEQS(l_OP_1364, rt_str(">", 1)))
{
{ R25 rv1389 = ({ R25 rc1390; memset(&rc1390, 0, sizeof rc1390);  rc1390.f_OK = 1; rc1390.f_V = r_BOOL_INT(((l_A_1362).f_V > (l_B_1363).f_V)); rc1390; });
return rv1389; }
}
else if (r_TEQS(l_OP_1364, rt_str("<=", 2)))
{
{ R25 rv1391 = ({ R25 rc1392; memset(&rc1392, 0, sizeof rc1392);  rc1392.f_OK = 1; rc1392.f_V = r_BOOL_INT(((l_A_1362).f_V <= (l_B_1363).f_V)); rc1392; });
return rv1391; }
}
else if (r_TEQS(l_OP_1364, rt_str(">=", 2)))
{
{ R25 rv1393 = ({ R25 rc1394; memset(&rc1394, 0, sizeof rc1394);  rc1394.f_OK = 1; rc1394.f_V = r_BOOL_INT(((l_A_1362).f_V >= (l_B_1363).f_V)); rc1394; });
return rv1393; }
}
}
}
else if ((l_K_1346 == g_N_IN))
{
{
R25 l_A_1395; memset(&l_A_1395, 0, sizeof l_A_1395);
S_R25(&l_A_1395, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R25 l_L_1396; memset(&l_L_1396, 0, sizeof l_L_1396);
S_R25(&l_L_1396, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_A), 0);
R25 l_U_1397; memset(&l_U_1397, 0, sizeof l_U_1397);
S_R25(&l_U_1397, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_B), 0);
rt_int l_LO_1398; memset(&l_LO_1398, 0, sizeof l_LO_1398);
rt_int l_HI_1399; memset(&l_HI_1399, 0, sizeof l_HI_1399);
if ((!(((((l_A_1395).f_OK && (l_L_1396).f_OK) && (l_U_1397).f_OK) && r_MANIFEST_INT(((*(R17 *)rt_nil_check(p_E))).f_A)))))
{
{ R25 rv1400 = l_NO_1347;
return rv1400; }
}
l_LO_1398 = (l_L_1396).f_V;
l_HI_1399 = (l_U_1397).f_V;
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_IV == ((rt_int)3LL))))
{
l_LO_1398 = rt_add(l_LO_1398, ((rt_int)1LL));
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_IV >= ((rt_int)2LL)))
{
l_HI_1399 = rt_sub(l_HI_1399, ((rt_int)1LL));
}
{ R25 rv1401 = ({ R25 rc1402; memset(&rc1402, 0, sizeof rc1402);  rc1402.f_OK = 1; rc1402.f_V = r_BOOL_INT((((l_A_1395).f_V >= l_LO_1398) && ((l_A_1395).f_V <= l_HI_1399))); rc1402; });
return rv1401; }
}
}
else if (((l_K_1346 == g_N_NAME) || (l_K_1346 == g_TS_GEN)))
{
{
R12 * l_Y_1403; memset(&l_Y_1403, 0, sizeof l_Y_1403);
l_Y_1403 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
R21 * l_B_1404; memset(&l_B_1404, 0, sizeof l_B_1404);
l_B_1404 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
for (;;) {
if ((l_B_1404 == NULL)) goto L_end1405;
{
if ((r_TEQ(((*(R21 *)rt_nil_check(l_B_1404))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME) && ((*(R21 *)rt_nil_check(l_B_1404))).f_HASMV))
{
{ R25 rv1406 = ({ R25 rc1407; memset(&rc1407, 0, sizeof rc1407);  rc1407.f_OK = 1; rc1407.f_V = ((*(R21 *)rt_nil_check(l_B_1404))).f_MV; rc1407; });
return rv1406; }
}
l_B_1404 = ((*(R21 *)rt_nil_check(l_B_1404))).f_NEXT;
}
RT_B_TICK();
} L_end1405: ;
if ((!(l_Y_1403 == NULL)))
{
if ((((((((*(R12 *)rt_nil_check(l_Y_1403))).f_KIND == g_Y_CONST) || (((*(R12 *)rt_nil_check(l_Y_1403))).f_KIND == g_Y_GEN)) || (((((*(R12 *)rt_nil_check(l_Y_1403))).f_KIND == g_Y_VAR) && ((*(R12 *)rt_nil_check(l_Y_1403))).f_INPUT)))) && ((*(R12 *)rt_nil_check(l_Y_1403))).f_HASMV))
{
{ R25 rv1408 = ({ R25 rc1409; memset(&rc1409, 0, sizeof rc1409);  rc1409.f_OK = 1; rc1409.f_V = ((*(R12 *)rt_nil_check(l_Y_1403))).f_MV; rc1409; });
return rv1408; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1403))).f_KIND == g_Y_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R17 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R25 rv1410 = ({ R25 rc1411; memset(&rc1411, 0, sizeof rc1411);  rc1411.f_OK = 1; rc1411.f_V = ((*(R12 *)rt_nil_check(l_Y_1403))).f_MV; rc1411; });
return rv1410; }
}
}
}
}
}
else if ((l_K_1346 == g_N_ENUMLIT))
{
if ((r_LITERAL_CLASSES(((*(R17 *)rt_nil_check(p_E))).f_NAME) == ((rt_int)1LL)))
{
{ R25 rv1412 = ({ R25 rc1413; memset(&rc1413, 0, sizeof rc1413);  rc1413.f_OK = 1; rc1413.f_V = ((*(R12 *)rt_nil_check(r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, NULL)))).f_MV; rc1413; });
return rv1412; }
}
}
else if ((l_K_1346 == g_N_FIELD))
{
{ R25 rv1414 = r_ATTR_MANIFEST(p_E);
return rv1414; }
}
else if ((l_K_1346 == g_N_APPLY))
{
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("IS_MANIFEST", 11)))
{
{ R25 rv1415 = ({ R25 rc1416; memset(&rc1416, 0, sizeof rc1416);  rc1416.f_OK = 1; rc1416.f_V = r_BOOL_INT((r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A)).f_OK); rc1416; });
return rv1415; }
}
}
{ R25 rv1417 = l_NO_1347;
return rv1417; }
rt_raise(RT_X_INIT);
}
static R25 r_ATTR_MANIFEST(R17 * p_E) { RT_B_TICK(); 
R17 * l_A_1418; memset(&l_A_1418, 0, sizeof l_A_1418);
l_A_1418 = ((*(R17 *)rt_nil_check(p_E))).f_A;
R9 l_NAME_1419; memset(&l_NAME_1419, 0, sizeof l_NAME_1419);
S_R9(&l_NAME_1419, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
R22 * l_T_1420; memset(&l_T_1420, 0, sizeof l_T_1420);
l_T_1420 = NULL;
if ((((*(R17 *)rt_nil_check(l_A_1418))).f_KIND == g_N_PAREN))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1418))).f_A))).f_KIND == g_N_FIELD))
{
{
R17 * l_INNER_1421; memset(&l_INNER_1421, 0, sizeof l_INNER_1421);
l_INNER_1421 = ((*(R17 *)rt_nil_check(l_A_1418))).f_A;
if (r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1421))).f_NAME, rt_str("LENGTH", 6)))
{
if (r_TEQS(l_NAME_1419, rt_str("MAX", 3)))
{
{ R25 rv1422 = r_SOME(r_MAX_LENGTH());
return rv1422; }
}
else if (r_TEQS(l_NAME_1419, rt_str("MIN", 3)))
{
{ R25 rv1423 = r_SOME(((rt_int)0LL));
return rv1423; }
}
}
else if ((r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1421))).f_NAME, rt_str("NOM_PRECISION", 13)) || r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1421))).f_NAME, rt_str("IMP_PRECISION", 13))))
{
if (r_TEQS(l_NAME_1419, rt_str("MAX", 3)))
{
{ R25 rv1424 = r_SOME(r_MAX_FLOAT_PRECISION());
return rv1424; }
}
else if (r_TEQS(l_NAME_1419, rt_str("MIN", 3)))
{
{ R25 rv1425 = r_SOME(((rt_int)1LL));
return rv1425; }
}
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1421))).f_NAME, rt_str("SCALE", 5)))
{
if (r_TEQS(l_NAME_1419, rt_str("MAX", 3)))
{
{ R25 rv1426 = r_SOME(((rt_int)1000LL));
return rv1426; }
}
else if (r_TEQS(l_NAME_1419, rt_str("MIN", 3)))
{
{ R25 rv1427 = r_SOME(rt_neg(((rt_int)1000LL)));
return rv1427; }
}
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_INNER_1421))).f_NAME, rt_str("RADIX", 5)))
{
if (r_TEQS(l_NAME_1419, rt_str("MAX", 3)))
{
{ R25 rv1428 = r_SOME(((rt_int)1000LL));
return rv1428; }
}
else if (r_TEQS(l_NAME_1419, rt_str("MIN", 3)))
{
{ R25 rv1429 = r_SOME(((rt_int)2LL));
return rv1429; }
}
}
}
}
}
if (((((*(R17 *)rt_nil_check(l_A_1418))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_A_1418))).f_KIND == g_N_ENUMLIT)))
{
{
R12 * l_Y_1430; memset(&l_Y_1430, 0, sizeof l_Y_1430);
l_Y_1430 = r_LOOKUP(((*(R17 *)rt_nil_check(l_A_1418))).f_NAME);
if ((l_Y_1430 == NULL))
{
{ R25 rv1431 = r_NO_MVAL();
return rv1431; }
}
if ((((*(R12 *)rt_nil_check(l_Y_1430))).f_KIND == g_Y_TYPE))
{
l_T_1420 = r_RESOLVE_USER_NAME(((*(R17 *)rt_nil_check(l_A_1418))).f_NAME, ((*(R17 *)rt_nil_check(l_A_1418))).f_LINE);
}
else if ((((((*(R12 *)rt_nil_check(l_Y_1430))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1430))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1430))).f_KIND == g_Y_GEN)))
{
l_T_1420 = ((*(R12 *)rt_nil_check(l_Y_1430))).f_T;
}
else
{
{ R25 rv1432 = r_NO_MVAL();
return rv1432; }
}
}
}
else if ((((*(R17 *)rt_nil_check(l_A_1418))).f_KIND == g_N_INT))
{
if ((r_TEQS(l_NAME_1419, rt_str("MIN", 3)) || r_TEQS(l_NAME_1419, rt_str("MAX", 3))))
{
{ R25 rv1433 = r_SOME(((*(R17 *)rt_nil_check(l_A_1418))).f_IV);
return rv1433; }
}
l_T_1420 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
else if ((((((((((((((*(R17 *)rt_nil_check(l_A_1418))).f_KIND == g_N_PAREN) || (((*(R17 *)rt_nil_check(l_A_1418))).f_KIND == g_N_BINOP)) || (((*(R17 *)rt_nil_check(l_A_1418))).f_KIND == g_N_UNOP)) || (((*(R17 *)rt_nil_check(l_A_1418))).f_KIND == g_N_FIELD)) || (((*(R17 *)rt_nil_check(l_A_1418))).f_KIND == g_N_INDEX)) || (((*(R17 *)rt_nil_check(l_A_1418))).f_KIND == g_N_APPLY)) || (((*(R17 *)rt_nil_check(l_A_1418))).f_KIND == g_N_REAL)) || (((*(R17 *)rt_nil_check(l_A_1418))).f_KIND == g_N_STR)) || (((*(R17 *)rt_nil_check(l_A_1418))).f_KIND == g_N_SUBSTR)) || (((*(R17 *)rt_nil_check(l_A_1418))).f_KIND == g_N_DEREF)) || (((*(R17 *)rt_nil_check(l_A_1418))).f_KIND == g_N_TYPESPEC)))
{
if ((((*(R17 *)rt_nil_check(l_A_1418))).f_KIND == g_N_PAREN))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1418))).f_A))).f_KIND == g_N_INT) && ((r_TEQS(l_NAME_1419, rt_str("MIN", 3)) || r_TEQS(l_NAME_1419, rt_str("MAX", 3))))))
{
{ R25 rv1434 = r_SOME(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1418))).f_A))).f_IV);
return rv1434; }
}
}
{
R14 l_SAVED_CODE_1435; memset(&l_SAVED_CODE_1435, 0, sizeof l_SAVED_CODE_1435);
S_R14(&l_SAVED_CODE_1435, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc1436; memset(&rc1436, 0, sizeof rc1436);  rc1436.f_HEAD = NULL; rc1436.f_TAIL = NULL; rc1436; }), 0);
l_T_1420 = (r_EXPR(l_A_1418, NULL)).f_T;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_1435, 0);
}
}
else
{
{ R25 rv1437 = r_NO_MVAL();
return rv1437; }
}
if ((l_T_1420 == NULL))
{
{ R25 rv1438 = r_NO_MVAL();
return rv1438; }
}
{ R25 rv1439 = r_TYPE_ATTR_MANIFEST(l_T_1420, l_NAME_1419);
return rv1439; }
rt_raise(RT_X_INIT);
}
static R25 r_TYPE_ATTR_MANIFEST(R22 * p_T0, R9 p_NAME) { RT_B_TICK(); 
R22 * l_T_1440; memset(&l_T_1440, 0, sizeof l_T_1440);
l_T_1440 = r_REAL_TYPE(p_T0);
rt_int l_K_1441; memset(&l_K_1441, 0, sizeof l_K_1441);
l_K_1441 = ((*(R22 *)rt_nil_check(l_T_1440))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R25 rv1442 = r_STATIC_SIZE(p_T0);
return rv1442; }
}
if ((l_K_1441 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R25 rv1443 = r_SOME(((*(R22 *)rt_nil_check(l_T_1440))).f_SCALE);
return rv1443; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R25 rv1444 = r_SOME(((rt_int)2LL));
return rv1444; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && ((((*(R22 *)rt_nil_check(l_T_1440))).f_LO_C).f_LEN > ((rt_int)0LL))))
{
{ R25 rv1445 = ((*(R22 *)rt_nil_check(l_T_1440))).f_MLO;
return rv1445; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && ((((*(R22 *)rt_nil_check(l_T_1440))).f_HI_C).f_LEN > ((rt_int)0LL))))
{
{ R25 rv1446 = ((*(R22 *)rt_nil_check(l_T_1440))).f_MHI;
return rv1446; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && (((*(R22 *)rt_nil_check(l_T_1440))).f_SCALE == ((rt_int)0LL))))
{
{ R25 rv1447 = r_SOME(r_STD_MIN());
return rv1447; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && (((*(R22 *)rt_nil_check(l_T_1440))).f_SCALE == ((rt_int)0LL))))
{
{ R25 rv1448 = r_SOME(r_STD_MAX());
return rv1448; }
}
}
else if ((l_K_1441 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R25 rv1449 = r_SOME(((*(R22 *)rt_nil_check(l_T_1440))).f_SCALE);
return rv1449; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R25 rv1450 = r_SOME(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_1440))).f_SCALE));
return rv1450; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R25 rv1451 = r_SOME(((rt_int)2LL));
return rv1451; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R25 rv1452 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_1440))).f_SCALE, p_NAME));
return rv1452; }
}
}
else if ((l_K_1441 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1440))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R25 rv1453 = ((*(R22 *)rt_nil_check(l_T_1440))).f_MLO;
return rv1453; }
}
{ R25 rv1454 = r_SOME(((rt_int)0LL));
return rv1454; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_1440))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R25 rv1455 = ((*(R22 *)rt_nil_check(l_T_1440))).f_MHI;
return rv1455; }
}
{ R25 rv1456 = r_SOME(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1440))).f_BASE))).f_NLITS, ((rt_int)1LL)));
return rv1456; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_1440))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ R25 rv1457 = r_SOME(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1440))).f_BASE))).f_NLITS);
return rv1457; }
}
if (((((*(R22 *)rt_nil_check(l_T_1440))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_T_1440))).f_MHI).f_OK))
{
{ R25 rv1458 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R22 *)rt_nil_check(l_T_1440))).f_MHI).f_V, (((*(R22 *)rt_nil_check(l_T_1440))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1458; }
}
}
}
else if (((l_K_1441 == g_T_STR) || (l_K_1441 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R25 rv1459 = ((*(R22 *)rt_nil_check(l_T_1440))).f_MLEN;
return rv1459; }
}
}
else if ((l_K_1441 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R25 rv1460 = r_SOME(((*(R22 *)rt_nil_check(l_T_1440))).f_DIMS);
return rv1460; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) && (((*(R22 *)rt_nil_check(l_T_1440))).f_DIMS == ((rt_int)1LL))))
{
if (((((*(R28 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1440))).f_BOUNDS))).f_MLO).f_OK && (((*(R28 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1440))).f_BOUNDS))).f_MHI).f_OK))
{
{ R25 rv1461 = r_SOME(r_MAX_INT(rt_add(rt_sub((((*(R28 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1440))).f_BOUNDS))).f_MHI).f_V, (((*(R28 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1440))).f_BOUNDS))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
return rv1461; }
}
}
}
else if ((l_K_1441 == g_T_REC))
{
{
R27 * l_F_1462; memset(&l_F_1462, 0, sizeof l_F_1462);
l_F_1462 = ((*(R22 *)rt_nil_check(l_T_1440))).f_FIELDS;
R28 * l_B_1463; memset(&l_B_1463, 0, sizeof l_B_1463);
l_B_1463 = ((*(R22 *)rt_nil_check(l_T_1440))).f_ARGS;
for (;;) {
if (((l_F_1462 == NULL) || (l_B_1463 == NULL))) goto L_end1464;
{
if ((!(((*(R27 *)rt_nil_check(l_F_1462))).f_KIND == ((rt_int)0LL))))
{
if (r_TEQ(((*(R27 *)rt_nil_check(l_F_1462))).f_NAME, p_NAME))
{
if (((*(R28 *)rt_nil_check(l_B_1463))).f_ANYARG)
{
{ R25 rv1465 = r_NO_MVAL();
return rv1465; }
}
{ R25 rv1466 = ((*(R28 *)rt_nil_check(l_B_1463))).f_MLO;
return rv1466; }
}
l_B_1463 = ((*(R28 *)rt_nil_check(l_B_1463))).f_NEXT;
}
l_F_1462 = ((*(R27 *)rt_nil_check(l_F_1462))).f_NEXT;
}
RT_B_TICK();
} L_end1464: ;
}
}
{ R25 rv1467 = r_NO_MVAL();
return rv1467; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_ARITH(R9 p_OP, rt_int p_A, rt_int p_B, rt_int p_LINE) { RT_B_TICK(); fr_r_MANIFEST_ARITH *F = rt_alloc(sizeof *F); (void)F; F->p_OP = p_OP; F->p_A = p_A; F->p_B = p_B; F->p_LINE = p_LINE;
F->l_R_1468 = ((rt_int)0LL);
{ rt_frame xf1469; if (RT_TRY(xf1469)) {
{
if (r_TEQS(F->p_OP, rt_str("+", 1)))
{
F->l_R_1468 = rt_add(F->p_A, F->p_B);
}
else if (r_TEQS(F->p_OP, rt_str("-", 1)))
{
F->l_R_1468 = rt_sub(F->p_A, F->p_B);
}
else
{
F->l_R_1468 = rt_mul(F->p_A, F->p_B);
}
}
RT_POP(xf1469); } else { RT_POP(xf1469); int xf1469x = rt_xcur;
if (0 || xf1469x == x_OVERFLOW)
{
r_FAIL(F->p_LINE, rt_str("a manifest expression overflows (3.2.4.2)", 41));
}
else rt_raise(xf1469x); } }
{ rt_int rv1470 = F->l_R_1468;
return rv1470; }
rt_raise(RT_X_INIT);
}
static rt_int r_MANIFEST_INT(R17 * p_E) { RT_B_TICK(); 
{ rt_int rv1471 = (!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT));
return rv1471; }
rt_raise(RT_X_INIT);
}
static rt_int r_BOOL_INT(rt_int p_B) { RT_B_TICK(); 
if (p_B)
{
{ rt_int rv1472 = ((rt_int)1LL);
return rv1472; }
}
{ rt_int rv1473 = ((rt_int)0LL);
return rv1473; }
rt_raise(RT_X_INIT);
}
static R26 r_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_K_1474; memset(&l_K_1474, 0, sizeof l_K_1474);
l_K_1474 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_1474 == g_N_INT))
{
{ R26 rv1475 = r_MKET(r_STD_CHECK(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(((*(R17 *)rt_nil_check(p_E))).f_IV))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1475; }
}
else if ((l_K_1474 == g_N_REAL))
{
{ R26 rv1476 = r_REAL_LITERAL(p_E);
return rv1476; }
}
else if ((l_K_1474 == g_N_BOOL))
{
{ R26 rv1477 = r_MKET(r_NUM(((*(R17 *)rt_nil_check(p_E))).f_IV), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1477; }
}
else if ((l_K_1474 == g_N_NIL))
{
{ R26 rv1478 = r_MKET(r_MK(rt_str("NULL", 4)), ((*(R7 *)rt_nil_check(g_W))).f_TY_NIL);
return rv1478; }
}
else if ((l_K_1474 == g_N_PAREN))
{
{
R26 l_V_1479; memset(&l_V_1479, 0, sizeof l_V_1479);
S_R26(&l_V_1479, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
S_R9(&(l_V_1479).f_C, r_FMT1(rt_str("(@)", 3), (l_V_1479).f_C), 0);
{ R26 rv1480 = l_V_1479;
return rv1480; }
}
}
else if ((l_K_1474 == g_N_STR))
{
{ R26 rv1481 = r_STRING_LITERAL(p_E);
return rv1481; }
}
else if ((l_K_1474 == g_N_BITS))
{
{ R26 rv1482 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(((*(R17 *)rt_nil_check(p_E))).f_NAME), r_NUM((((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN)), r_BITS_TYPE((((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN));
return rv1482; }
}
else if ((l_K_1474 == g_N_ENUMLIT))
{
if (r_NAMES_OBJECT(((*(R17 *)rt_nil_check(p_E))).f_NAME))
{
{ R26 rv1483 = r_NAME_EXPR(p_E, p_WANT);
return rv1483; }
}
{ R26 rv1484 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1484; }
}
else if ((l_K_1474 == g_N_RECCONS))
{
{ R26 rv1485 = r_RECORD_CONSTRUCTOR(p_E, p_WANT);
return rv1485; }
}
else if ((l_K_1474 == g_N_ARRCONS))
{
{ R26 rv1486 = r_ARRAY_CONSTRUCTOR(p_E, p_WANT);
return rv1486; }
}
else if ((l_K_1474 == g_N_TYPESPEC))
{
{ R26 rv1487 = r_TYPE_SPECIFIER(p_E);
return rv1487; }
}
else if ((l_K_1474 == g_N_QUAL))
{
{
rt_int l_SAVED_1488; memset(&l_SAVED_1488, 0, sizeof l_SAVED_1488);
l_SAVED_1488 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_1489; memset(&l_SAVED_Q_1489, 0, sizeof l_SAVED_Q_1489);
l_SAVED_Q_1489 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1490; memset(&l_V_1490, 0, sizeof l_V_1490);
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
R25 l_P_1491; memset(&l_P_1491, 0, sizeof l_P_1491);
S_R25(&l_P_1491, r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_B, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
}
}
S_R26(&l_V_1490, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1488;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1489;
{ R26 rv1492 = l_V_1490;
return rv1492; }
}
}
else if ((l_K_1474 == g_N_NEW))
{
if ((r_NAMES_OBJECT(((*(R17 *)rt_nil_check(p_E))).f_NAME) && (!r_CONSTRUCTOR_WANTED(p_WANT))))
{
{
R17 * l_N_1493; memset(&l_N_1493, 0, sizeof l_N_1493);
l_N_1493 = r_NEW_NODE(g_N_APPLY, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1493))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_1493))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_A;
{ R26 rv1494 = r_EXPR(l_N_1493, p_WANT);
return rv1494; }
}
}
{ R26 rv1495 = r_NEW_EXPR(p_E, p_WANT);
return rv1495; }
}
else if ((l_K_1474 == g_N_NAME))
{
{ R26 rv1496 = r_NAME_EXPR(p_E, p_WANT);
return rv1496; }
}
else if (((l_K_1474 == g_N_APPLY) && r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("$PATH_LIST", 10))))
{
{ R26 rv1497 = r_PATH_LIST(((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1497; }
}
else if (((l_K_1474 == g_N_APPLY) && r_IS_STD_REPTYPE(((*(R17 *)rt_nil_check(p_E))).f_NAME)))
{
if (((((((*(R17 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))) || (!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL))) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an explicit-rep-converter converts one expression [3-41]", 56));
}
{
R17 * l_R_1498; memset(&l_R_1498, 0, sizeof l_R_1498);
l_R_1498 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_R_1498))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1499 = r_REP_CONVERTER(l_R_1498, ((*(R17 *)rt_nil_check(p_E))).f_A, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1499; }
}
}
else if ((l_K_1474 == g_N_APPLY))
{
{
R12 * l_Y_1500; memset(&l_Y_1500, 0, sizeof l_Y_1500);
l_Y_1500 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_1500 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_1500))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1500))).f_KIND == g_Y_CONST)))
{
{
R17 * l_N_1501; memset(&l_N_1501, 0, sizeof l_N_1501);
l_N_1501 = r_NEW_NODE(g_N_INDEX, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
R17 * l_A_1502; memset(&l_A_1502, 0, sizeof l_A_1502);
l_A_1502 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_A_1502))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_1501))).f_A = l_A_1502;
((*(R17 *)rt_nil_check(l_N_1501))).f_B = ((*(R17 *)rt_nil_check(p_E))).f_A;
{ R26 rv1503 = r_EXPR(l_N_1501, p_WANT);
return rv1503; }
}
}
}
{ R26 rv1504 = r_CALL_EXPR(p_E, p_WANT);
return rv1504; }
}
}
else if ((l_K_1474 == g_N_FIELD))
{
{ R26 rv1505 = r_FIELD_EXPR(p_E);
return rv1505; }
}
else if ((l_K_1474 == g_N_DEREF))
{
{
R26 l_B_1506; memset(&l_B_1506, 0, sizeof l_B_1506);
S_R26(&l_B_1506, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check((l_B_1506).f_T))).f_KIND == g_T_PTR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("@ applied to something not a pointer", 36));
}
{
R22 * l_TT_1507; memset(&l_TT_1507, 0, sizeof l_TT_1507);
l_TT_1507 = r_TARGET((l_B_1506).f_T);
{ R26 rv1508 = r_MKLV(r_FMT2(rt_str("(*(@ *)rt_nil_check(@))", 23), r_CTYPE(l_TT_1507), (l_B_1506).f_C), l_TT_1507, 1, r_NO_TEXT());
return rv1508; }
}
}
}
else if ((l_K_1474 == g_N_INDEX))
{
if (((((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_APPLY) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_NAME))) && r_IS_REPTYPE_NAME(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME)))
{
if (((((*(R17 *)rt_nil_check(p_E))).f_B == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_NEXT == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an explicit-rep-converter converts one expression [3-41]", 56));
}
{ R26 rv1509 = r_REP_CONVERTER(((*(R17 *)rt_nil_check(p_E))).f_A, ((*(R17 *)rt_nil_check(p_E))).f_B, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1509; }
}
{ R26 rv1510 = r_INDEX_EXPR(p_E);
return rv1510; }
}
else if ((l_K_1474 == g_N_SUBSTR))
{
{
R26 l_B_1511; memset(&l_B_1511, 0, sizeof l_B_1511);
S_R26(&l_B_1511, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_BT_1512; memset(&l_BT_1512, 0, sizeof l_BT_1512);
l_BT_1512 = r_REAL_TYPE((l_B_1511).f_T);
R9 l_LO_1513; memset(&l_LO_1513, 0, sizeof l_LO_1513);
R9 l_HI_1514; memset(&l_HI_1514, 0, sizeof l_HI_1514);
if (((((*(R22 *)rt_nil_check((l_B_1511).f_T))).f_KIND == g_T_ABS) || r_HAS_USER_ROUTINE(r_MKN(rt_str("SUBSTRING_", 10)))))
{
{
R29 * l_ARGS_1515; memset(&l_ARGS_1515, 0, sizeof l_ARGS_1515);
l_ARGS_1515 = r_VAL_ARG(l_B_1511, r_NODE_ARG(((*(R17 *)rt_nil_check(p_E))).f_B, g_M_IN, r_NODE_ARG(((*(R17 *)rt_nil_check(p_E))).f_C, g_M_IN, NULL)));
R12 * l_Y_1516; memset(&l_Y_1516, 0, sizeof l_Y_1516);
l_Y_1516 = r_USER_OPERATOR(r_MKN(rt_str("SUBSTRING_", 10)), l_ARGS_1515, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!(l_Y_1516 == NULL)))
{
{ R26 rv1517 = r_CALL_SYM(l_Y_1516, l_ARGS_1515, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1517; }
}
if ((((*(R22 *)rt_nil_check((l_B_1511).f_T))).f_KIND == g_T_ABS))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no operation for this abstract type: ", 37), r_MK(rt_str("SUBSTRING_", 10)));
}
}
}
if ((!(((((*(R22 *)rt_nil_check(l_BT_1512))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_BT_1512))).f_KIND == g_T_BITS)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a substring of something not a string", 37));
}
S_R9(&l_LO_1513, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
S_R9(&l_HI_1514, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_C), 0);
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_KIND == g_N_NAME) && (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_C))).f_KIND == g_N_NAME)))
{
if (r_TEQ(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_B))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_C))).f_NAME))
{
if ((((*(R22 *)rt_nil_check(l_BT_1512))).f_KIND == g_T_BITS))
{
{ R26 rv1518 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1511).f_C, l_LO_1513, l_HI_1514), r_BITS_TYPE(((rt_int)1LL)));
return rv1518; }
}
{
R22 * l_T_1519; memset(&l_T_1519, 0, sizeof l_T_1519);
l_T_1519 = r_STR_TYPE(r_MK(rt_str("1", 1)), r_SOME(((rt_int)1LL)));
((*(R22 *)rt_nil_check(l_T_1519))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1512))).f_BASE;
{ R26 rv1520 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1511).f_C, l_LO_1513, l_HI_1514), l_T_1519);
return rv1520; }
}
}
}
if ((((*(R22 *)rt_nil_check(l_BT_1512))).f_KIND == g_T_BITS))
{
{ R26 rv1521 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1511).f_C, l_LO_1513, l_HI_1514), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv1521; }
}
{
R22 * l_T_1522; memset(&l_T_1522, 0, sizeof l_T_1522);
l_T_1522 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
((*(R22 *)rt_nil_check(l_T_1522))).f_BASE = ((*(R22 *)rt_nil_check(l_BT_1512))).f_BASE;
{ R26 rv1523 = r_MKET(r_FMT3(rt_str("rt_b_slice(@, @, @)", 19), (l_B_1511).f_C, l_LO_1513, l_HI_1514), l_T_1522);
return rv1523; }
}
}
}
else if ((l_K_1474 == g_N_UNOP))
{
{ R26 rv1524 = r_UNARY(p_E);
return rv1524; }
}
else if ((l_K_1474 == g_N_BINOP))
{
{ R26 rv1525 = r_BINARY(p_E);
return rv1525; }
}
else if ((l_K_1474 == g_N_IN))
{
{ R26 rv1526 = r_IN_EXPR(p_E);
return rv1526; }
}
else if (((l_K_1474 == g_N_ANY) || (l_K_1474 == g_N_DONTCARE)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("ANY and \? are not values", 24));
}
else if ((l_K_1474 == g_TS_GEN))
{
{
R17 * l_N_1527; memset(&l_N_1527, 0, sizeof l_N_1527);
l_N_1527 = r_NEW_NODE(g_N_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1527))).f_NAME, r_QMKN(rt_str("\?", 1), ((*(R17 *)rt_nil_check(p_E))).f_NAME), 0);
if (r_NAMES_OBJECT(((*(R17 *)rt_nil_check(l_N_1527))).f_NAME))
{
{ R26 rv1528 = r_NAME_EXPR(l_N_1527, p_WANT);
return rv1528; }
}
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
else if (((((l_K_1474 == g_TS_NAME) || (l_K_1474 == g_TS_ARRAY)) || (l_K_1474 == g_TS_RECORD)) || (l_K_1474 == g_TS_ENUM)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type is not a value", 21));
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("this expression cannot be translated", 36));
rt_raise(RT_X_INIT);
}
static R9 r_INT_EXPR(R17 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1529; memset(&l_SAVED_1529, 0, sizeof l_SAVED_1529);
l_SAVED_1529 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_1530; memset(&l_SAVED_Q_1530, 0, sizeof l_SAVED_Q_1530);
l_SAVED_Q_1530 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1531; memset(&l_V_1531, 0, sizeof l_V_1531);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1531, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1529;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1530;
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1531).f_T)))).f_KIND == g_T_ENUM))
{
{ R9 rv1532 = (l_V_1531).f_C;
return rv1532; }
}
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1531).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((l_V_1531).f_T))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((l_V_1531).f_T));
}
{ R9 rv1533 = (l_V_1531).f_C;
return rv1533; }
rt_raise(RT_X_INIT);
}
static R9 r_BOOL_EXPR(R17 * p_E) { RT_B_TICK(); 
R26 l_V_1534; memset(&l_V_1534, 0, sizeof l_V_1534);
S_R26(&l_V_1534, r_EXPR(p_E, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1534).f_T)))).f_KIND == g_T_BOOL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a boolean expression expected, not ", 35), r_TYPE_NAME((l_V_1534).f_T));
}
{ R9 rv1535 = (l_V_1534).f_C;
return rv1535; }
rt_raise(RT_X_INIT);
}
static R22 * r_BITS_TYPE(rt_int p_LEN) { RT_B_TICK(); 
R22 * l_T_1536; memset(&l_T_1536, 0, sizeof l_T_1536);
l_T_1536 = r_NEW_TYP(g_T_BITS);
if ((p_LEN >= ((rt_int)0LL)))
{
S_R9(&((*(R22 *)rt_nil_check(l_T_1536))).f_LEN_C, r_NUM(p_LEN), 0);
S_R25(&((*(R22 *)rt_nil_check(l_T_1536))).f_MLEN, r_SOME(p_LEN), 0);
}
{ R22 * rv1537 = l_T_1536;
return rv1537; }
rt_raise(RT_X_INIT);
}
static R26 r_REAL_LITERAL(R17 * p_E) { RT_B_TICK(); 
R9 l_T_1538; memset(&l_T_1538, 0, sizeof l_T_1538);
S_R9(&l_T_1538, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1539; memset(&l_S_1539, 0, sizeof l_S_1539);
l_S_1539 = rt_b_str_new((l_T_1538).f_LEN, 0);
rt_b_assign(&l_S_1539, r_STR(l_T_1538, (l_T_1538).f_LEN));
rt_int l_POINT_1540; memset(&l_POINT_1540, 0, sizeof l_POINT_1540);
l_POINT_1540 = 0;
rt_int l_DIGITS_1541; memset(&l_DIGITS_1541, 0, sizeof l_DIGITS_1541);
l_DIGITS_1541 = ((rt_int)0LL);
{ rt_int it1543_lo = ((rt_int)0LL), it1543_hi = rt_sub((l_T_1538).f_LEN, ((rt_int)1LL));
for (rt_int it1543 = it1543_lo; it1543 <= it1543_hi; it1543++) {
{
if (rt_b_eq(rt_b_slice(l_S_1539, it1543, it1543), rt_str(".", 1)))
{
l_POINT_1540 = 1;
}
else if (rt_b_eq(rt_b_slice(l_S_1539, it1543, it1543), rt_str("E", 1)))
{
goto L_end1542;
}
else
{
l_DIGITS_1541 = rt_add(l_DIGITS_1541, ((rt_int)1LL));
}
}
RT_B_TICK();
if (it1543 == it1543_hi) break;
} } L_end1542: ;
if (((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) || (!l_POINT_1540)))
{
r_CHECK_FIXED_LITERAL(p_E);
}
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
{ R26 rv1544 = r_MKET(r_FMT2(rt_str("rt_b_fix_lit(@, @)", 18), r_CSTRING(l_T_1538), r_NUM(((*(R17 *)rt_nil_check(p_E))).f_IV)), r_INT_TYPE(((*(R17 *)rt_nil_check(p_E))).f_IV));
return rv1544; }
}
if ((!l_POINT_1540))
{
{ R26 rv1545 = r_MKET(r_FMT1(rt_str("rt_b_fix_lit(@, 0)", 18), r_CSTRING(l_T_1538)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1545; }
}
{
R22 * l_F_1546; memset(&l_F_1546, 0, sizeof l_F_1546);
l_F_1546 = r_NEW_TYP(g_T_FLOAT);
R9 l_C_1547; memset(&l_C_1547, 0, sizeof l_C_1547);
S_R9(&l_C_1547, l_T_1538, 0);
((*(R22 *)rt_nil_check(l_F_1546))).f_SCALE = r_MAX_INT(l_DIGITS_1541, r_QUAL_PREC());
if ((((*(R22 *)rt_nil_check(l_F_1546))).f_SCALE > r_MAX_FLOAT_PRECISION()))
{
((*(R22 *)rt_nil_check(l_F_1546))).f_SCALE = r_MAX_FLOAT_PRECISION();
}
if ((((*(R22 *)rt_nil_check(l_F_1546))).f_SCALE < ((rt_int)1LL)))
{
((*(R22 *)rt_nil_check(l_F_1546))).f_SCALE = ((rt_int)1LL);
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1546))).f_SCALE)))
{
((*(R22 *)rt_nil_check(l_F_1546))).f_SCALE = r_MAX_INT(((*(R22 *)rt_nil_check(l_F_1546))).f_SCALE, ((rt_int)8LL));
}
if ((!r_FLOAT_LITERAL_FITS(p_E, ((*(R22 *)rt_nil_check(l_F_1546))).f_SCALE)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the float-literal is outside the range of FLOAT (3.3.2)", 68));
}
if (rt_b_eq(rt_b_slice(l_S_1539, rt_sub((l_T_1538).f_LEN, ((rt_int)1LL)), rt_sub((l_T_1538).f_LEN, ((rt_int)1LL))), rt_str(".", 1)))
{
S_R9(&l_C_1547, r_FMT1(rt_str("@0", 2), l_T_1538), 0);
}
else if (rt_b_eq(rt_b_slice(l_S_1539, ((rt_int)0LL), ((rt_int)0LL)), rt_str(".", 1)))
{
S_R9(&l_C_1547, r_FMT1(rt_str("0@", 2), l_T_1538), 0);
}
if (r_IS_D(l_F_1546))
{
{ R26 rv1548 = r_MKET(r_FMT1(rt_str("rt_b_dlit(\"@\")", 14), l_C_1547), l_F_1546);
return rv1548; }
}
else if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_F_1546))).f_SCALE) == ((rt_int)7LL)))
{
{ R26 rv1549 = r_MKET(r_FMT1(rt_str("((double)(float)@)", 18), l_C_1547), l_F_1546);
return rv1549; }
}
{ R26 rv1550 = r_MKET(r_FMT1(rt_str("(@)", 3), l_C_1547), l_F_1546);
return rv1550; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_LITERAL_FITS(R17 * p_E, rt_int p_P) { RT_B_TICK(); 
R9 l_T_1551; memset(&l_T_1551, 0, sizeof l_T_1551);
S_R9(&l_T_1551, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1552; memset(&l_S_1552, 0, sizeof l_S_1552);
l_S_1552 = rt_b_str_new((l_T_1551).f_LEN, 0);
rt_b_assign(&l_S_1552, r_STR(l_T_1551, (l_T_1551).f_LEN));
rt_int l_INT_1553; memset(&l_INT_1553, 0, sizeof l_INT_1553);
l_INT_1553 = ((rt_int)0LL);
rt_int l_SIG_1554; memset(&l_SIG_1554, 0, sizeof l_SIG_1554);
l_SIG_1554 = 0;
rt_int l_POINT_1555; memset(&l_POINT_1555, 0, sizeof l_POINT_1555);
l_POINT_1555 = 0;
rt_int l_LEAD_1556; memset(&l_LEAD_1556, 0, sizeof l_LEAD_1556);
l_LEAD_1556 = ((rt_int)0LL);
rt_int l_I_1557; memset(&l_I_1557, 0, sizeof l_I_1557);
l_I_1557 = ((rt_int)0LL);
rt_int l_EXP_1558; memset(&l_EXP_1558, 0, sizeof l_EXP_1558);
l_EXP_1558 = ((rt_int)0LL);
for (;;) {
if ((l_I_1557 >= (l_T_1551).f_LEN)) goto L_end1559;
{
if (rt_b_eq(rt_b_slice(l_S_1552, l_I_1557, l_I_1557), rt_str("E", 1)))
{
goto L_end1559;
}
else if (rt_b_eq(rt_b_slice(l_S_1552, l_I_1557, l_I_1557), rt_str(".", 1)))
{
l_POINT_1555 = 1;
}
else if ((!rt_b_eq(rt_b_slice(l_S_1552, l_I_1557, l_I_1557), rt_str("0", 1))))
{
if ((!l_POINT_1555))
{
l_INT_1553 = rt_add(l_INT_1553, ((rt_int)1LL));
}
l_SIG_1554 = 1;
}
else if ((l_SIG_1554 && (!l_POINT_1555)))
{
l_INT_1553 = rt_add(l_INT_1553, ((rt_int)1LL));
}
else if ((l_POINT_1555 && (!l_SIG_1554)))
{
l_LEAD_1556 = rt_add(l_LEAD_1556, ((rt_int)1LL));
}
l_I_1557 = rt_add(l_I_1557, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1559: ;
if ((!l_SIG_1554))
{
{ rt_int rv1560 = 1;
return rv1560; }
}
if ((l_I_1557 < (l_T_1551).f_LEN))
{
{
rt_int l_NEG_1561; memset(&l_NEG_1561, 0, sizeof l_NEG_1561);
l_NEG_1561 = 0;
l_I_1557 = rt_add(l_I_1557, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1552, l_I_1557, l_I_1557), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1552, l_I_1557, l_I_1557), rt_str("+", 1))))
{
l_NEG_1561 = rt_b_eq(rt_b_slice(l_S_1552, l_I_1557, l_I_1557), rt_str("-", 1));
l_I_1557 = rt_add(l_I_1557, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1557 >= (l_T_1551).f_LEN)) goto L_end1562;
{
if ((l_EXP_1558 <= ((rt_int)100000LL)))
{
l_EXP_1558 = rt_add(rt_mul(l_EXP_1558, ((rt_int)10LL)), (rt_sub(r_CODE_OF(rt_b_slice(l_S_1552, l_I_1557, l_I_1557)), ((rt_int)48LL))));
}
l_I_1557 = rt_add(l_I_1557, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1562: ;
if (l_NEG_1561)
{
l_EXP_1558 = rt_neg(l_EXP_1558);
}
}
}
{
rt_int l_D_1563; memset(&l_D_1563, 0, sizeof l_D_1563);
l_D_1563 = rt_add(rt_sub(l_INT_1553, ((rt_int)1LL)), l_EXP_1558);
rt_int l_LIM_1564; memset(&l_LIM_1564, 0, sizeof l_LIM_1564);
l_LIM_1564 = ((rt_int)308LL);
if ((l_INT_1553 == ((rt_int)0LL)))
{
l_D_1563 = rt_add(rt_sub(rt_neg(l_LEAD_1556), ((rt_int)1LL)), l_EXP_1558);
}
if (((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)) || (((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL))))
{
l_LIM_1564 = ((rt_int)38LL);
}
{ rt_int rv1565 = ((l_D_1563 <= l_LIM_1564) && (l_D_1563 >= rt_add(rt_neg(l_LIM_1564), ((rt_int)1LL))));
return rv1565; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_FIXED_LITERAL(R17 * p_E) { RT_B_TICK(); 
R9 l_T_1566; memset(&l_T_1566, 0, sizeof l_T_1566);
S_R9(&l_T_1566, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rstr l_S_1567; memset(&l_S_1567, 0, sizeof l_S_1567);
l_S_1567 = rt_b_str_new((l_T_1566).f_LEN, 0);
rt_b_assign(&l_S_1567, r_STR(l_T_1566, (l_T_1566).f_LEN));
rt_int l_SIG_1568; memset(&l_SIG_1568, 0, sizeof l_SIG_1568);
l_SIG_1568 = ((rt_int)0LL);
rt_int l_FRAC_1569; memset(&l_FRAC_1569, 0, sizeof l_FRAC_1569);
l_FRAC_1569 = ((rt_int)0LL);
rt_int l_POINT_1570; memset(&l_POINT_1570, 0, sizeof l_POINT_1570);
l_POINT_1570 = 0;
rt_int l_EXP_1571; memset(&l_EXP_1571, 0, sizeof l_EXP_1571);
l_EXP_1571 = ((rt_int)0LL);
rt_int l_I_1572; memset(&l_I_1572, 0, sizeof l_I_1572);
l_I_1572 = ((rt_int)0LL);
for (;;) {
if ((l_I_1572 >= (l_T_1566).f_LEN)) goto L_end1573;
{
if (rt_b_eq(rt_b_slice(l_S_1567, l_I_1572, l_I_1572), rt_str("E", 1)))
{
goto L_end1573;
}
if (rt_b_eq(rt_b_slice(l_S_1567, l_I_1572, l_I_1572), rt_str(".", 1)))
{
l_POINT_1570 = 1;
}
else
{
if (((l_SIG_1568 > ((rt_int)0LL)) || (!rt_b_eq(rt_b_slice(l_S_1567, l_I_1572, l_I_1572), rt_str("0", 1)))))
{
l_SIG_1568 = rt_add(l_SIG_1568, ((rt_int)1LL));
}
if (l_POINT_1570)
{
l_FRAC_1569 = rt_add(l_FRAC_1569, ((rt_int)1LL));
}
}
l_I_1572 = rt_add(l_I_1572, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1573: ;
if ((rt_sub(l_I_1572, r_BOOL_INT(l_POINT_1570)) > ((rt_int)1000LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a fixed-literal has at most 1000 digits (3.2.2)", 47));
}
if ((l_I_1572 < (l_T_1566).f_LEN))
{
{
rt_int l_NEG_1574; memset(&l_NEG_1574, 0, sizeof l_NEG_1574);
l_NEG_1574 = 0;
l_I_1572 = rt_add(l_I_1572, ((rt_int)1LL));
if ((rt_b_eq(rt_b_slice(l_S_1567, l_I_1572, l_I_1572), rt_str("-", 1)) || rt_b_eq(rt_b_slice(l_S_1567, l_I_1572, l_I_1572), rt_str("+", 1))))
{
l_NEG_1574 = rt_b_eq(rt_b_slice(l_S_1567, l_I_1572, l_I_1572), rt_str("-", 1));
l_I_1572 = rt_add(l_I_1572, ((rt_int)1LL));
}
for (;;) {
if ((l_I_1572 >= (l_T_1566).f_LEN)) goto L_end1575;
{
if ((l_EXP_1571 <= ((rt_int)1000LL)))
{
l_EXP_1571 = rt_sub(rt_add(rt_mul(l_EXP_1571, ((rt_int)10LL)), r_CODE_OF(rt_b_slice(l_S_1567, l_I_1572, l_I_1572))), ((rt_int)48LL));
}
l_I_1572 = rt_add(l_I_1572, ((rt_int)1LL));
}
RT_B_TICK();
} L_end1575: ;
if ((l_EXP_1571 > ((rt_int)1000LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the exponent of a literal must not exceed 1000 (3.2.2)", 54));
}
if (l_NEG_1574)
{
l_EXP_1571 = rt_neg(l_EXP_1571);
}
}
}
if (((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)) && (((((*(R17 *)rt_nil_check(p_E))).f_IV > ((rt_int)1000LL)) || (((*(R17 *)rt_nil_check(p_E))).f_IV < rt_neg(((rt_int)1000LL)))))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a literal must not exceed 1000 (3.2.2)", 51));
}
if ((l_SIG_1568 > ((rt_int)0LL)))
{
{
rt_int l_P10_1576; memset(&l_P10_1576, 0, sizeof l_P10_1576);
l_P10_1576 = rt_sub(rt_add(rt_sub(l_SIG_1568, ((rt_int)1LL)), l_EXP_1571), l_FRAC_1569);
rt_int l_BITS_1577; memset(&l_BITS_1577, 0, sizeof l_BITS_1577);
l_BITS_1577 = rt_add(rt_quot((rt_mul(l_P10_1576, ((rt_int)3321928LL))), ((rt_int)1000000LL)), rt_mul(((*(R17 *)rt_nil_check(p_E))).f_IV, ((*(R17 *)rt_nil_check(p_E))).f_FL));
if ((l_P10_1576 < ((rt_int)0LL)))
{
l_BITS_1577 = rt_add(rt_neg((rt_quot((rt_add(rt_mul(rt_neg(l_P10_1576), ((rt_int)3321929LL)), ((rt_int)999999LL))), ((rt_int)1000000LL)))), rt_mul(((*(R17 *)rt_nil_check(p_E))).f_IV, ((*(R17 *)rt_nil_check(p_E))).f_FL));
}
if ((l_BITS_1577 >= ((rt_int)63LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the value of the literal is outside FIXED_MIN .. FIXED_MAX (3.2.2)", 66));
}
}
}
}
static R26 r_STRING_LITERAL(R17 * p_E) { RT_B_TICK(); 
R22 * l_CS_1578; memset(&l_CS_1578, 0, sizeof l_CS_1578);
l_CS_1578 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
R17 * l_P_1579; memset(&l_P_1579, 0, sizeof l_P_1579);
l_P_1579 = ((*(R17 *)rt_nil_check(p_E))).f_A;
R9 l_S_1580; memset(&l_S_1580, 0, sizeof l_S_1580);
S_R9(&l_S_1580, r_MK(rt_str("", 0)), 0);
if (((((*(R17 *)rt_nil_check(p_E))).f_NAME).f_LEN == ((rt_int)0LL)))
{
l_CS_1578 = r_DEFAULT_CHARSET(((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
else
{
{
R12 * l_Y_1581; memset(&l_Y_1581, 0, sizeof l_Y_1581);
l_Y_1581 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1581 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown character set ", 22), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_1581))).f_KIND == g_Y_TYPE)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1578 = r_RESOLVE_USER_NAME(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1578)))).f_KIND == g_T_ENUM)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a character set: ", 21), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
l_CS_1578 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_CS_1578)))).f_BASE;
if ((!r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(l_CS_1578))).f_LITS)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a character set has a literal of the form \\'C' (3.7.2): ", 56), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
}
}
for (;;) {
if ((l_P_1579 == NULL)) goto L_end1582;
{
if ((((*(R17 *)rt_nil_check(l_P_1579))).f_IV == g_K_STR))
{
if ((l_CS_1578 == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
S_R9(&l_S_1580, r_CAT(l_S_1580, ((*(R17 *)rt_nil_check(l_P_1579))).f_NAME), 0);
}
else
{
{
R9 l_Q_1583; memset(&l_Q_1583, 0, sizeof l_Q_1583);
S_R9(&l_Q_1583, ((*(R17 *)rt_nil_check(l_P_1579))).f_NAME, 0);
rstr l_QS_1584; memset(&l_QS_1584, 0, sizeof l_QS_1584);
l_QS_1584 = rt_b_str_new((l_Q_1583).f_LEN, 0);
rt_b_assign(&l_QS_1584, r_STR(l_Q_1583, (l_Q_1583).f_LEN));
{ rt_int it1586_lo = ((rt_int)0LL), it1586_hi = rt_sub((l_Q_1583).f_LEN, ((rt_int)1LL));
for (rt_int it1586 = it1586_lo; it1586 <= it1586_hi; it1586++) {
{
{
R9 l_LIT_1587; memset(&l_LIT_1587, 0, sizeof l_LIT_1587);
R12 * l_Y_1588; memset(&l_Y_1588, 0, sizeof l_Y_1588);
if (rt_b_eq(rt_b_slice(l_QS_1584, it1586, it1586), rt_str("'", 1)))
{
S_R9(&l_LIT_1587, r_MKN(rt_str("\\''''", 5)), 0);
}
else
{
S_R9(&l_LIT_1587, r_MKN(rt_b_cat(rt_b_cat(rt_str("\\'", 2), rt_b_slice(l_QS_1584, it1586, it1586)), rt_str("'", 1))), 0);
}
l_Y_1588 = r_FIND_LITERAL(l_LIT_1587, l_CS_1578);
if ((l_Y_1588 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_1579))).f_LINE, rt_b_cat(rt_str("a character not in the character set: ", 38), rt_b_slice(l_QS_1584, it1586, it1586)));
}
S_R9(&l_S_1580, r_CATS(l_S_1580, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1588))).f_MV)), 0);
}
}
RT_B_TICK();
if (it1586 == it1586_hi) break;
} } L_end1585: ;
}
}
}
else
{
{
R12 * l_Y_1589; memset(&l_Y_1589, 0, sizeof l_Y_1589);
l_Y_1589 = r_FIND_LITERAL(((*(R17 *)rt_nil_check(l_P_1579))).f_NAME, l_CS_1578);
if ((l_Y_1589 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_1579))).f_LINE, rt_str("not a literal of the character set: ", 36), ((*(R17 *)rt_nil_check(l_P_1579))).f_NAME);
}
S_R9(&l_S_1580, r_CATS(l_S_1580, r_CHAR_OF(((*(R12 *)rt_nil_check(l_Y_1589))).f_MV)), 0);
}
}
l_P_1579 = ((*(R17 *)rt_nil_check(l_P_1579))).f_NEXT;
}
RT_B_TICK();
} L_end1582: ;
{
R22 * l_T_1590; memset(&l_T_1590, 0, sizeof l_T_1590);
l_T_1590 = r_STR_TYPE(r_NUM((l_S_1580).f_LEN), r_SOME((l_S_1580).f_LEN));
((*(R22 *)rt_nil_check(l_T_1590))).f_BASE = l_CS_1578;
{ R26 rv1591 = r_MKET(r_FMT2(rt_str("rt_str(@, @)", 12), r_CSTRING(l_S_1580), r_NUM((l_S_1580).f_LEN)), l_T_1590);
return rv1591; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_RESOLVE_USER_NAME(R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_TS_1592; memset(&l_TS_1592, 0, sizeof l_TS_1592);
l_TS_1592 = r_NEW_NODE(g_TS_NAME, p_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_TS_1592))).f_NAME, p_NAME, 0);
{ R22 * rv1593 = r_RESOLVE(l_TS_1592);
return rv1593; }
rt_raise(RT_X_INIT);
}
static R26 r_ENUM_LITERAL(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1594; memset(&l_Y_1594, 0, sizeof l_Y_1594);
if ((!(p_WANT == NULL)))
{
{
R22 * l_WT_1595; memset(&l_WT_1595, 0, sizeof l_WT_1595);
l_WT_1595 = r_REAL_TYPE(p_WANT);
if ((((*(R22 *)rt_nil_check(l_WT_1595))).f_KIND == g_T_ENUM))
{
l_Y_1594 = r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_WT_1595);
if ((!(l_Y_1594 == NULL)))
{
{ R26 rv1596 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_Y_1594))).f_MV), r_ENUM_RESULT(l_Y_1594, p_WANT));
return rv1596; }
}
}
}
}
l_Y_1594 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
{
R12 * l_FOUND_1597; memset(&l_FOUND_1597, 0, sizeof l_FOUND_1597);
l_FOUND_1597 = NULL;
rt_int l_N_1598; memset(&l_N_1598, 0, sizeof l_N_1598);
l_N_1598 = ((rt_int)0LL);
for (;;) {
if ((l_Y_1594 == NULL)) goto L_end1599;
{
if ((((*(R12 *)rt_nil_check(l_Y_1594))).f_KIND == g_Y_ENUMLIT))
{
if ((l_FOUND_1597 == NULL))
{
l_FOUND_1597 = l_Y_1594;
}
else if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_FOUND_1597))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_1594))).f_T))).f_BASE)))
{
l_N_1598 = rt_add(l_N_1598, ((rt_int)1LL));
}
}
l_Y_1594 = r_LOOKUP_NEXT(l_Y_1594);
}
RT_B_TICK();
} L_end1599: ;
if ((l_FOUND_1597 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown enumerated literal ", 27), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((l_N_1598 > ((rt_int)0LL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("an ambiguous literal, use a type-specifier (3.4.5): ", 52), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv1600 = r_MKET(r_NUM(((*(R12 *)rt_nil_check(l_FOUND_1597))).f_MV), ((*(R12 *)rt_nil_check(l_FOUND_1597))).f_T);
return rv1600; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_ENUM_RESULT(R12 * p_Y, R22 * p_WANT) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_ABS))
{
{ R22 * rv1601 = p_WANT;
return rv1601; }
}
if ((!(((*(R22 *)rt_nil_check(p_WANT))).f_REPS == NULL)))
{
{
R22 * l_T_1602; memset(&l_T_1602, 0, sizeof l_T_1602);
l_T_1602 = r_COPY_TYP(((*(R12 *)rt_nil_check(p_Y))).f_T);
((*(R22 *)rt_nil_check(l_T_1602))).f_REPS = ((*(R22 *)rt_nil_check(p_WANT))).f_REPS;
{ R22 * rv1603 = l_T_1602;
return rv1603; }
}
}
{ R22 * rv1604 = ((*(R12 *)rt_nil_check(p_Y))).f_T;
return rv1604; }
rt_raise(RT_X_INIT);
}
static rt_int r_CONSTRUCTOR_WANTED(R22 * p_WANT) { RT_B_TICK(); 
if ((p_WANT == NULL))
{
{ rt_int rv1605 = 0;
return rv1605; }
}
{ rt_int rv1606 = ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM));
return rv1606; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_OBJECT(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1607; memset(&l_Y_1607, 0, sizeof l_Y_1607);
l_Y_1607 = r_LOOKUP(p_NAME);
if ((l_Y_1607 == NULL))
{
{ rt_int rv1608 = 0;
return rv1608; }
}
{ rt_int rv1609 = (((((*(R12 *)rt_nil_check(l_Y_1607))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1607))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(l_Y_1607))).f_KIND == g_Y_ROUTINE));
return rv1609; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STD_REPTYPE(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv1610 = (((((((((r_TEQS(p_NAME, rt_str("FIXED_STD", 9)) || r_TEQS(p_NAME, rt_str("FLOAT_STD", 9))) || r_TEQS(p_NAME, rt_str("BOOLEAN_STD", 11))) || r_TEQS(p_NAME, rt_str("ENUM_STD", 8))) || r_TEQS(p_NAME, rt_str("CHAR_STR_STD", 12))) || r_TEQS(p_NAME, rt_str("BIT_STD", 7))) || r_TEQS(p_NAME, rt_str("ARRAY_STD", 9))) || r_TEQS(p_NAME, rt_str("RECORD_STD", 10))) || r_TEQS(p_NAME, rt_str("PTR_STD", 7))) || r_TEQS(p_NAME, rt_str("SEMAPHORE_STD", 13)));
return rv1610; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_REPTYPE_NAME(R9 p_NAME) { RT_B_TICK(); 
if (((((((r_IS_STD_REPTYPE(p_NAME) || r_TEQS(p_NAME, rt_str("FIXED_REP", 9))) || r_TEQS(p_NAME, rt_str("ENUM_REP", 8))) || r_TEQS(p_NAME, rt_str("ENUM_VAL_REP", 12))) || r_TEQS(p_NAME, rt_str("CHAR_STR_REP", 12))) || r_TEQS(p_NAME, rt_str("ARRAY_REP", 9))) || r_TEQS(p_NAME, rt_str("RECORD_REP", 10))))
{
{ rt_int rv1611 = (r_LOOKUP(p_NAME) == NULL);
return rv1611; }
}
if ((!(r_ORIG_LOOKUP(p_NAME) == NULL)))
{
{ rt_int rv1612 = (((*(R12 *)rt_nil_check(r_ORIG_LOOKUP(p_NAME)))).f_KIND == g_Y_REPTYPE);
return rv1612; }
}
{ rt_int rv1613 = 0;
return rv1613; }
rt_raise(RT_X_INIT);
}
static R26 r_REP_CONVERTER(R17 * p_S, R17 * p_E, rt_int p_LINE) { RT_B_TICK(); 
R26 l_V_1614; memset(&l_V_1614, 0, sizeof l_V_1614);
S_R26(&l_V_1614, r_EXPR(p_E, NULL), 0);
R17 * l_R_1615; memset(&l_R_1615, 0, sizeof l_R_1615);
l_R_1615 = r_NEW_NODE(g_N_REP, p_LINE);
R22 * l_T_1616; memset(&l_T_1616, 0, sizeof l_T_1616);
S_R9(&((*(R17 *)rt_nil_check(l_R_1615))).f_NAME, ((*(R17 *)rt_nil_check(p_S))).f_NAME, 0);
if ((((*(R17 *)rt_nil_check(p_S))).f_KIND == g_N_APPLY))
{
((*(R17 *)rt_nil_check(l_R_1615))).f_A = ((*(R17 *)rt_nil_check(p_S))).f_A;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_1614).f_T)))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check((l_V_1614).f_T))).f_KIND == g_T_ABS)))
{
r_FAIL(p_LINE, rt_str("a representation is only for a member of a predefined type class (3.12.2)", 73));
}
l_T_1616 = r_COPY_TYP(r_REAL_TYPE((l_V_1614).f_T));
((*(R22 *)rt_nil_check(l_T_1616))).f_REPS = r_EXPAND_REP(l_R_1615, l_T_1616, p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_REPCONV = 1;
r_CHECK_REP_CLASS(l_T_1616, p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_REPCONV = 0;
if ((r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1616))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1616))).f_REPS))).f_A == NULL))))
{
{
R25 l_N_1617; memset(&l_N_1617, 0, sizeof l_N_1617);
S_R25(&l_N_1617, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1616))).f_REPS))).f_A), 0);
rt_int l_UNS_1618; memset(&l_UNS_1618, 0, sizeof l_UNS_1618);
l_UNS_1618 = ((rt_int)0LL);
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1616))).f_REPS))).f_A))).f_NEXT == NULL)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1616))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8)))
{
l_UNS_1618 = ((rt_int)1LL);
}
}
if ((l_N_1617).f_OK)
{
{ R26 rv1619 = r_MKET(r_FMT3(rt_str("rt_b_fixed_rep(@, @, @)", 23), (l_V_1614).f_C, r_NUM((l_N_1617).f_V), r_NUM(l_UNS_1618)), l_T_1616);
return rv1619; }
}
}
}
{ R26 rv1620 = r_MKET((l_V_1614).f_C, l_T_1616);
return rv1620; }
rt_raise(RT_X_INIT);
}
static R26 r_NAME_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R12 * l_Y_1621; memset(&l_Y_1621, 0, sizeof l_Y_1621);
l_Y_1621 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_1621 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown name ", 13), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_1621))).f_WITHV == ((rt_int)2LL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the variable is named by a WITH NAMING and not known in its statement (4.5.4): ", 79), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((((((*(R12 *)rt_nil_check(l_Y_1621))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL))) && (!((*(R12 *)rt_nil_check(l_Y_1621))).f_INPUT)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a type or reptype declaration is a closed scope: no variable from outside (3.12.1, 3.12.3): ", 92), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1621))).f_KIND == g_Y_VAR) && (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a record-spec is a closed scope: no variable from outside (3.9.1): ", 67), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (((((*(R12 *)rt_nil_check(l_Y_1621))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_1621))).f_KIND == g_Y_CONST)))
{
{
rt_int l_WRITABLE_1622; memset(&l_WRITABLE_1622, 0, sizeof l_WRITABLE_1622);
l_WRITABLE_1622 = (r_SEG_VISIBLE(l_Y_1621, ((*(R17 *)rt_nil_check(p_E))).f_LINE) && r_CHECK_IMPORTED(l_Y_1621, ((*(R17 *)rt_nil_check(p_E))).f_LINE));
{ R26 rv1623 = r_MKLV(r_OBJ_ACCESS(l_Y_1621), ((*(R12 *)rt_nil_check(l_Y_1621))).f_T, ((((*(R12 *)rt_nil_check(l_Y_1621))).f_KIND == g_Y_VAR) && l_WRITABLE_1622), r_NO_TEXT());
return rv1623; }
}
}
else if ((((*(R12 *)rt_nil_check(l_Y_1621))).f_KIND == g_Y_GEN))
{
{ R26 rv1624 = r_MKET(((*(R12 *)rt_nil_check(l_Y_1621))).f_ACCESS, ((*(R12 *)rt_nil_check(l_Y_1621))).f_T);
return rv1624; }
}
else if ((((*(R12 *)rt_nil_check(l_Y_1621))).f_KIND == g_Y_ENUMLIT))
{
{ R26 rv1625 = r_ENUM_LITERAL(p_E, p_WANT);
return rv1625; }
}
else if (((((*(R12 *)rt_nil_check(l_Y_1621))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_1621))).f_KIND == g_Y_BUILTIN)))
{
{
R17 * l_N_1626; memset(&l_N_1626, 0, sizeof l_N_1626);
l_N_1626 = r_NEW_NODE(g_N_APPLY, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_1626))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
{ R26 rv1627 = r_CALL_EXPR(l_N_1626, p_WANT);
return rv1627; }
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a value: ", 13), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
rt_raise(RT_X_INIT);
}
static R26 r_FIELD_EXPR(R17 * p_E) { RT_B_TICK(); 
R17 * l_A_1628; memset(&l_A_1628, 0, sizeof l_A_1628);
l_A_1628 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))) && r_IS_NUMBER_LITERAL(l_A_1628)))
{
{ R26 rv1629 = r_EXPR(l_A_1628, NULL);
return rv1629; }
}
if ((((*(R17 *)rt_nil_check(l_A_1628))).f_KIND == g_N_INDEX))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1628))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1628))).f_A))).f_NAME, rt_str("BOUNDS", 6))))
{
{
R26 l_B_1630; memset(&l_B_1630, 0, sizeof l_B_1630);
S_R26(&l_B_1630, r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1628))).f_A))).f_A), 0);
R9 l_I_1631; memset(&l_I_1631, 0, sizeof l_I_1631);
S_R9(&l_I_1631, r_INT_EXPR(((*(R17 *)rt_nil_check(l_A_1628))).f_B), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1630).f_T)))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS of something not an array", 32));
}
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MIN", 3)))
{
{ R26 rv1632 = r_MKET(r_FMT3(rt_str("(@).lo[rt_index(@, 0, @)]", 25), (l_B_1630).f_C, l_I_1631, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1630).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1632; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("MAX", 3)))
{
{ R26 rv1633 = r_MKET(r_FMT3(rt_str("(@).hi[rt_index(@, 0, @)]", 25), (l_B_1630).f_C, l_I_1631, r_NUM(rt_sub(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_B_1630).f_T)))).f_DIMS, ((rt_int)1LL)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1633; }
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("BOUNDS(I) has the fields MIN and MAX", 36));
}
}
}
if ((((*(R17 *)rt_nil_check(l_A_1628))).f_KIND == g_N_PAREN))
{
if (r_IS_TYPE_ATTR(((*(R17 *)rt_nil_check(l_A_1628))).f_A))
{
{ R26 rv1634 = r_ATTRIBUTE(r_TYPE_VALUE_OF(r_TYPE_ATTR_TYPE(((*(R17 *)rt_nil_check(l_A_1628))).f_A)), ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1634; }
}
}
if ((((*(R17 *)rt_nil_check(l_A_1628))).f_KIND == g_N_PAREN))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1628))).f_A))).f_KIND == g_N_FIELD))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1628))).f_A))).f_A))).f_KIND == g_N_NAME))
{
if (r_IS_TYPE_WORD(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1628))).f_A))).f_A))).f_NAME))
{
{ R26 rv1635 = r_ATTRIBUTE_OF_ATTRIBUTE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1628))).f_A))).f_A))).f_NAME, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_1628))).f_A))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1635; }
}
}
}
}
if ((((*(R17 *)rt_nil_check(l_A_1628))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_1636; memset(&l_Y_1636, 0, sizeof l_Y_1636);
l_Y_1636 = r_LOOKUP(((*(R17 *)rt_nil_check(l_A_1628))).f_NAME);
if ((!(l_Y_1636 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_1636))).f_KIND == g_Y_TYPE))
{
{ R26 rv1637 = r_TYPE_ATTRIBUTE(((*(R17 *)rt_nil_check(l_A_1628))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1637; }
}
}
else if (r_IS_TYPE_WORD(((*(R17 *)rt_nil_check(l_A_1628))).f_NAME))
{
{ R26 rv1638 = r_TYPE_ATTRIBUTE(((*(R17 *)rt_nil_check(l_A_1628))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1638; }
}
}
}
{
R26 l_B_1639; memset(&l_B_1639, 0, sizeof l_B_1639);
S_R26(&l_B_1639, r_EXPR(l_A_1628, NULL), 0);
R22 * l_BT_1640; memset(&l_BT_1640, 0, sizeof l_BT_1640);
l_BT_1640 = (l_B_1639).f_T;
if ((((*(R22 *)rt_nil_check(l_BT_1640))).f_KIND == g_T_REC))
{
{
R27 * l_F_1641; memset(&l_F_1641, 0, sizeof l_F_1641);
l_F_1641 = r_FIND_VFIELD(l_BT_1640, ((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_F_1641 == NULL)))
{
r_CHECK_VARIANT(l_F_1641, l_BT_1640, l_A_1628, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R27 *)rt_nil_check(l_F_1641))).f_KIND == ((rt_int)2LL)) && r_HAS_ANY(l_BT_1640)))
{
{ R26 rv1642 = r_MKET(r_FMT2(rt_str("rt_b_tag((@).@)", 15), (l_B_1639).f_C, ((*(R27 *)rt_nil_check(l_F_1641))).f_CNAME), ((*(R27 *)rt_nil_check(l_F_1641))).f_T);
return rv1642; }
}
{ R26 rv1643 = r_MKLV(r_FMT2(rt_str("(@).@", 5), (l_B_1639).f_C, ((*(R27 *)rt_nil_check(l_F_1641))).f_CNAME), ((*(R27 *)rt_nil_check(l_F_1641))).f_T, ((l_B_1639).f_LVAL && (((*(R27 *)rt_nil_check(l_F_1641))).f_KIND == ((rt_int)0LL))), (l_B_1639).f_C);
return rv1643; }
}
}
}
{ R26 rv1644 = r_ATTRIBUTE(l_B_1639, ((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1644; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_IS_FIXED_LITERAL(R17 * p_A) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1645 = (r_IS_FIXED_LITERAL(((*(R17 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R17 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1645; }
}
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_INT))
{
{ rt_int rv1646 = 1;
return rv1646; }
}
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_REAL))
{
if ((((*(R17 *)rt_nil_check(p_A))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv1647 = 1;
return rv1647; }
}
{
R9 l_NM_1648; memset(&l_NM_1648, 0, sizeof l_NM_1648);
S_R9(&l_NM_1648, ((*(R17 *)rt_nil_check(p_A))).f_NAME, 0);
rstr l_S_1649; memset(&l_S_1649, 0, sizeof l_S_1649);
l_S_1649 = rt_b_str_new((l_NM_1648).f_LEN, 0);
rt_b_assign(&l_S_1649, r_STR(l_NM_1648, (l_NM_1648).f_LEN));
{ rt_int it1651_lo = ((rt_int)0LL), it1651_hi = rt_sub((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN, ((rt_int)1LL));
for (rt_int it1651 = it1651_lo; it1651 <= it1651_hi; it1651++) {
{
if (rt_b_eq(rt_b_slice(l_S_1649, it1651, it1651), rt_str(".", 1)))
{
{ rt_int rv1652 = 0;
return rv1652; }
}
}
RT_B_TICK();
if (it1651 == it1651_hi) break;
} } L_end1650: ;
}
{ rt_int rv1653 = 1;
return rv1653; }
}
{ rt_int rv1654 = 0;
return rv1654; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_NUMBER_LITERAL(R17 * p_A) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_PAREN) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_UNOP)))
{
{ rt_int rv1655 = (r_IS_NUMBER_LITERAL(((*(R17 *)rt_nil_check(p_A))).f_A) && (!r_TEQS(((*(R17 *)rt_nil_check(p_A))).f_NAME, rt_str("NOT", 3))));
return rv1655; }
}
{ rt_int rv1656 = ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_INT) || (((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_REAL));
return rv1656; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_WORD(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv1657 = ((((r_TEQS(p_NAME, rt_str("FIXED", 5)) || r_TEQS(p_NAME, rt_str("FLOAT", 5))) || r_TEQS(p_NAME, rt_str("BIT", 3))) || r_TEQS(p_NAME, rt_str("CHAR_STR", 8))) || r_TEQS(p_NAME, rt_str("ASCII_STR", 9)));
return rv1657; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_VARIANT(R27 * p_F, R22 * p_T, R17 * p_BASE, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R27 *)rt_nil_check(p_F))).f_TAGF).f_LEN == ((rt_int)0LL)))
{
return;
}
{
R25 l_TAGV_1658; memset(&l_TAGV_1658, 0, sizeof l_TAGV_1658);
S_R25(&l_TAGV_1658, r_TAG_VALUE(p_T, ((*(R27 *)rt_nil_check(p_F))).f_TAGF), 0);
if ((!(l_TAGV_1658).f_OK))
{
r_FAILT(p_LINE, rt_b_cat(rt_str("a field of a variant of a T(ANY) record, outside a discriminating ", 66), rt_str("case statement (3.9.4): ", 24)), ((*(R27 *)rt_nil_check(p_F))).f_NAME);
}
if ((!r_LABELS_HAVE(((*(R27 *)rt_nil_check(p_F))).f_LABELS, (l_TAGV_1658).f_V, ((*(R27 *)rt_nil_check(r_FIND_FIELD(p_T, ((*(R27 *)rt_nil_check(p_F))).f_TAGF)))).f_T)))
{
r_FAILT(p_LINE, rt_str("this variant has no field ", 26), ((*(R27 *)rt_nil_check(p_F))).f_NAME);
}
}
}
static R25 r_TAG_VALUE(R22 * p_T, R9 p_TAGN) { RT_B_TICK(); 
R27 * l_F_1659; memset(&l_F_1659, 0, sizeof l_F_1659);
l_F_1659 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R28 * l_A_1660; memset(&l_A_1660, 0, sizeof l_A_1660);
l_A_1660 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if ((l_F_1659 == NULL)) goto L_end1661;
{
if ((!(((*(R27 *)rt_nil_check(l_F_1659))).f_KIND == ((rt_int)0LL))))
{
if ((l_A_1660 == NULL))
{
{ R25 rv1662 = r_NO_MVAL();
return rv1662; }
}
if (r_TEQ(((*(R27 *)rt_nil_check(l_F_1659))).f_NAME, p_TAGN))
{
if (((*(R28 *)rt_nil_check(l_A_1660))).f_ANYARG)
{
{ R25 rv1663 = r_NO_MVAL();
return rv1663; }
}
{ R25 rv1664 = ((*(R28 *)rt_nil_check(l_A_1660))).f_MLO;
return rv1664; }
}
l_A_1660 = ((*(R28 *)rt_nil_check(l_A_1660))).f_NEXT;
}
l_F_1659 = ((*(R27 *)rt_nil_check(l_F_1659))).f_NEXT;
}
RT_B_TICK();
} L_end1661: ;
{ R25 rv1665 = r_NO_MVAL();
return rv1665; }
rt_raise(RT_X_INIT);
}
static rt_int r_LABELS_HAVE(R17 * p_L, rt_int p_V, R22 * p_T) { RT_B_TICK(); 
R17 * l_P_1666; memset(&l_P_1666, 0, sizeof l_P_1666);
l_P_1666 = p_L;
for (;;) {
if ((l_P_1666 == NULL)) goto L_end1667;
{
if ((((*(R17 *)rt_nil_check(l_P_1666))).f_KIND == g_N_RANGE))
{
if (((p_V >= (r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_P_1666))).f_A, p_T)).f_V) && (p_V <= (r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_P_1666))).f_B, p_T)).f_V)))
{
{ rt_int rv1668 = 1;
return rv1668; }
}
}
else if (((r_ENUM_MANIFEST(l_P_1666, p_T)).f_V == p_V))
{
{ rt_int rv1669 = 1;
return rv1669; }
}
l_P_1666 = ((*(R17 *)rt_nil_check(l_P_1666))).f_NEXT;
}
RT_B_TICK();
} L_end1667: ;
{ rt_int rv1670 = 0;
return rv1670; }
rt_raise(RT_X_INIT);
}
static R26 r_VALUE_OR_TYPE(R17 * p_E) { RT_B_TICK(); 
if (r_IS_TYPE_NAME(p_E))
{
{ R26 rv1671 = r_TYPE_VALUE(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1671; }
}
{ R26 rv1672 = r_EXPR(p_E, NULL);
return rv1672; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR(R17 * p_E) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME, rt_str("EXTENT", 6))))
{
{
R26 l_A_1673; memset(&l_A_1673, 0, sizeof l_A_1673);
S_R26(&l_A_1673, r_VALUE_OR_TYPE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_A), 0);
R9 l_I_1674; memset(&l_I_1674, 0, sizeof l_I_1674);
S_R9(&l_I_1674, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1673).f_T)))).f_KIND == g_T_ARR))
{
{ R26 rv1675 = r_MKET(r_FMT4(rt_str("rt_b_dim_extent((@).lo, (@).hi, @, @)", 37), (l_A_1673).f_C, (l_A_1673).f_C, l_I_1674, r_NUM(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_A_1673).f_T)))).f_DIMS)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1675; }
}
}
}
{ R26 rv1676 = r_INDEX_EXPR2(p_E);
return rv1676; }
rt_raise(RT_X_INIT);
}
static R9 r_INDEX_VALUE(R17 * p_E) { RT_B_TICK(); 
rt_int l_SAVED_1677; memset(&l_SAVED_1677, 0, sizeof l_SAVED_1677);
l_SAVED_1677 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_1678; memset(&l_SAVED_Q_1678, 0, sizeof l_SAVED_Q_1678);
l_SAVED_Q_1678 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_1679; memset(&l_V_1679, 0, sizeof l_V_1679);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_1679, r_EXPR(p_E, NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_1677;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1678;
{ R9 rv1680 = r_INDEX_OF(l_V_1679, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1680; }
rt_raise(RT_X_INIT);
}
static R9 r_INDEX_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_1681; memset(&l_T_1681, 0, sizeof l_T_1681);
l_T_1681 = r_REAL_TYPE((p_V).f_T);
if (((((*(R22 *)rt_nil_check((p_V).f_T))).f_KIND == g_T_ABS) || (((((*(R22 *)rt_nil_check(l_T_1681))).f_KIND == g_T_ENUM) && ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_1681))).f_BASE))).f_UNORDERED || (!(((*(R22 *)rt_nil_check(l_T_1681))).f_REPS == NULL))))))))
{
{
R29 * l_ARGS_1682; memset(&l_ARGS_1682, 0, sizeof l_ARGS_1682);
l_ARGS_1682 = r_VAL_ARG(p_V, NULL);
R12 * l_Y_1683; memset(&l_Y_1683, 0, sizeof l_Y_1683);
l_Y_1683 = r_FIND_ROUTINE(r_MKN(rt_str("TO_FIXED", 8)), l_ARGS_1682, p_LINE, 0);
if ((l_Y_1683 == NULL))
{
r_FAILT(p_LINE, rt_str("an index of this type needs a TO_FIXED of the program (3.8.1): ", 63), r_TYPE_NAME((p_V).f_T));
}
{ R9 rv1684 = (r_CALL_SYM(l_Y_1683, l_ARGS_1682, p_LINE)).f_C;
return rv1684; }
}
}
if ((((*(R22 *)rt_nil_check(l_T_1681))).f_KIND == g_T_ENUM))
{
{ R9 rv1685 = (p_V).f_C;
return rv1685; }
}
if (((!(((*(R22 *)rt_nil_check(l_T_1681))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_1681))).f_SCALE == ((rt_int)0LL)))))
{
r_FAILT(p_LINE, rt_str("an integer expected, not ", 25), r_TYPE_NAME((p_V).f_T));
}
{ R9 rv1686 = (p_V).f_C;
return rv1686; }
rt_raise(RT_X_INIT);
}
static R26 r_INDEX_EXPR2(R17 * p_E) { RT_B_TICK(); 
R26 l_B_1687; memset(&l_B_1687, 0, sizeof l_B_1687);
S_R26(&l_B_1687, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1688; memset(&l_T_1688, 0, sizeof l_T_1688);
l_T_1688 = r_REAL_TYPE((l_B_1687).f_T);
R17 * l_S_1689; memset(&l_S_1689, 0, sizeof l_S_1689);
l_S_1689 = ((*(R17 *)rt_nil_check(p_E))).f_B;
R9 l_IX_1690; memset(&l_IX_1690, 0, sizeof l_IX_1690);
S_R9(&l_IX_1690, r_MK(rt_str("", 0)), 0);
rt_int l_N_1691; memset(&l_N_1691, 0, sizeof l_N_1691);
l_N_1691 = ((rt_int)0LL);
if ((!(((*(R22 *)rt_nil_check(l_T_1688))).f_KIND == g_T_ARR)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript of something not an array", 37));
}
for (;;) {
if ((l_S_1689 == NULL)) goto L_end1692;
{
if ((l_N_1691 > ((rt_int)0LL)))
{
S_R9(&l_IX_1690, r_CATS(l_IX_1690, rt_str(", ", 2)), 0);
}
S_R9(&l_IX_1690, r_CAT(l_IX_1690, r_INDEX_VALUE(l_S_1689)), 0);
l_N_1691 = rt_add(l_N_1691, ((rt_int)1LL));
l_S_1689 = ((*(R17 *)rt_nil_check(l_S_1689))).f_NEXT;
}
RT_B_TICK();
} L_end1692: ;
if ((!(l_N_1691 == ((*(R22 *)rt_nil_check(l_T_1688))).f_DIMS)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the number of subscripts must be the number of dimensions (3.8.4)", 65));
}
if ((l_N_1691 == ((rt_int)1LL)))
{
{ R26 rv1693 = r_MKLV(r_FMT4(rt_str("(@).p[rt_b_ix1(@, (@).lo[0], (@).hi[0])]", 40), (l_B_1687).f_C, l_IX_1690, (l_B_1687).f_C, (l_B_1687).f_C), ((*(R22 *)rt_nil_check(l_T_1688))).f_ELEM, (l_B_1687).f_LVAL, r_NO_TEXT());
return rv1693; }
}
{
R9 l_X_1694; memset(&l_X_1694, 0, sizeof l_X_1694);
S_R9(&l_X_1694, r_FMT4(rt_str("(@).p[rt_b_ixn(@, (@).lo, (@).hi, ", 34), (l_B_1687).f_C, r_NUM(l_N_1691), (l_B_1687).f_C, (l_B_1687).f_C), 0);
{ R26 rv1695 = r_MKLV(r_FMT2(rt_str("@@)]", 4), l_X_1694, l_IX_1690), ((*(R22 *)rt_nil_check(l_T_1688))).f_ELEM, (l_B_1687).f_LVAL, r_NO_TEXT());
return rv1695; }
}
rt_raise(RT_X_INIT);
}
static R9 r_OP_NAME(R9 p_OP, rt_int p_UNARY) { RT_B_TICK(); 
if (p_UNARY)
{
if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R9 rv1696 = r_MKN(rt_str("NEGATE_", 7));
return rv1696; }
}
else if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R9 rv1697 = r_MKN(rt_str("MON_PLUS_", 9));
return rv1697; }
}
{ R9 rv1698 = r_MKN(rt_str("COMPLEMENT_", 11));
return rv1698; }
}
if (r_TEQS(p_OP, rt_str("+", 1)))
{
{ R9 rv1699 = r_MKN(rt_str("ADD_", 4));
return rv1699; }
}
else if (r_TEQS(p_OP, rt_str("-", 1)))
{
{ R9 rv1700 = r_MKN(rt_str("SUBTRACT_", 9));
return rv1700; }
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R9 rv1701 = r_MKN(rt_str("MULTIPLY_", 9));
return rv1701; }
}
else if ((r_TEQS(p_OP, rt_str("/", 1)) || r_TEQS(p_OP, rt_str("//", 2))))
{
{ R9 rv1702 = r_MKN(rt_str("DIVIDE_", 7));
return rv1702; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R9 rv1703 = r_MKN(rt_str("MODULUS_", 8));
return rv1703; }
}
else if (r_TEQS(p_OP, rt_str("**", 2)))
{
{ R9 rv1704 = r_MKN(rt_str("EXPONENTIATE_", 13));
return rv1704; }
}
else if (r_TEQS(p_OP, rt_str("!!", 2)))
{
{ R9 rv1705 = r_MKN(rt_str("CONCATENATE_", 12));
return rv1705; }
}
else if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R9 rv1706 = r_MKN(rt_str("EQUAL_", 6));
return rv1706; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R9 rv1707 = r_MKN(rt_str("UNEQUAL_", 8));
return rv1707; }
}
else if (r_TEQS(p_OP, rt_str(">", 1)))
{
{ R9 rv1708 = r_MKN(rt_str("GREATER_THAN_", 13));
return rv1708; }
}
else if (r_TEQS(p_OP, rt_str("<", 1)))
{
{ R9 rv1709 = r_MKN(rt_str("LESS_THAN_", 10));
return rv1709; }
}
else if (r_TEQS(p_OP, rt_str(">=", 2)))
{
{ R9 rv1710 = r_MKN(rt_str("GREATER_EQUAL_", 14));
return rv1710; }
}
else if (r_TEQS(p_OP, rt_str("<=", 2)))
{
{ R9 rv1711 = r_MKN(rt_str("LESS_EQUAL_", 11));
return rv1711; }
}
else if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R9 rv1712 = r_MKN(rt_str("AND_", 4));
return rv1712; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R9 rv1713 = r_MKN(rt_str("OR_", 3));
return rv1713; }
}
else if (r_TEQS(p_OP, rt_str("XOR", 3)))
{
{ R9 rv1714 = r_MKN(rt_str("XOR_", 4));
return rv1714; }
}
else if (r_TEQS(p_OP, rt_str("->", 2)))
{
{ R9 rv1715 = r_MKN(rt_str("IMPLIES_", 8));
return rv1715; }
}
{ R9 rv1716 = r_MKN(rt_str("NO_SUCH_OPERATOR_", 17));
return rv1716; }
rt_raise(RT_X_INIT);
}
static R29 * r_VAL_ARG(R26 p_V, R29 * p_NEXT) { RT_B_TICK(); 
R29 * l_A_1717; memset(&l_A_1717, 0, sizeof l_A_1717);
l_A_1717 = ({ R29 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R29(&(*(R29 *)rt_nil_check(l_A_1717)), ({ R29 rc1718; memset(&rc1718, 0, sizeof rc1718);  rc1718.f_E = NULL; S_R26(&rc1718.f_V, p_V, 0); rc1718.f_HAVE = 1; rc1718.f_MODE = g_M_IN; rc1718.f_NEXT = p_NEXT; rc1718; }), 0);
{ R29 * rv1719 = l_A_1717;
return rv1719; }
rt_raise(RT_X_INIT);
}
static R29 * r_NODE_ARG(R17 * p_E, rt_int p_MODE, R29 * p_NEXT) { RT_B_TICK(); 
R29 * l_A_1720; memset(&l_A_1720, 0, sizeof l_A_1720);
l_A_1720 = ({ R29 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R29(&(*(R29 *)rt_nil_check(l_A_1720)), ({ R29 rc1721; memset(&rc1721, 0, sizeof rc1721);  rc1721.f_E = p_E; S_R26(&rc1721.f_V, r_MKET(r_NO_TEXT(), NULL), 0); rc1721.f_HAVE = 0; rc1721.f_MODE = p_MODE; rc1721.f_NEXT = p_NEXT; rc1721; }), 0);
{ R29 * rv1722 = l_A_1720;
return rv1722; }
rt_raise(RT_X_INIT);
}
static R12 * r_USER_OPERATOR(R9 p_NAME, R29 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_Y_1723; memset(&l_Y_1723, 0, sizeof l_Y_1723);
l_Y_1723 = r_FIND_ROUTINE(p_NAME, p_ARGS, p_LINE, 0);
if (((l_Y_1723 == NULL) && ((p_NAME).f_LEN > ((rt_int)1LL))))
{
l_Y_1723 = r_FIND_ROUTINE(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))), p_ARGS, p_LINE, 0);
}
{ R12 * rv1724 = l_Y_1723;
return rv1724; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_USER_ROUTINE(R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_1725; memset(&l_Y_1725, 0, sizeof l_Y_1725);
l_Y_1725 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Y_1725 == NULL)) goto L_end1726;
{
if ((((*(R12 *)rt_nil_check(l_Y_1725))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1727 = 1;
return rv1727; }
}
l_Y_1725 = r_LOOKUP_NEXT(l_Y_1725);
}
RT_B_TICK();
} L_end1726: ;
l_Y_1725 = r_LOOKUP(r_MKN(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), ((rt_int)0LL), rt_sub((p_NAME).f_LEN, ((rt_int)2LL)))));
for (;;) {
if ((l_Y_1725 == NULL)) goto L_end1728;
{
if ((((*(R12 *)rt_nil_check(l_Y_1725))).f_KIND == g_Y_ROUTINE))
{
{ rt_int rv1729 = 1;
return rv1729; }
}
l_Y_1725 = r_LOOKUP_NEXT(l_Y_1725);
}
RT_B_TICK();
} L_end1728: ;
{ rt_int rv1730 = 0;
return rv1730; }
rt_raise(RT_X_INIT);
}
static R29 * r_QUAL_ARGS(rt_int p_LINE) { RT_B_TICK(); 
R17 * l_Q_1731; memset(&l_Q_1731, 0, sizeof l_Q_1731);
l_Q_1731 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R29 * l_R_1732; memset(&l_R_1732, 0, sizeof l_R_1732);
l_R_1732 = NULL;
if ((l_Q_1731 == NULL))
{
{ R29 * rv1733 = NULL;
return rv1733; }
}
if (((((*(R17 *)rt_nil_check(l_Q_1731))).f_NAME).f_LEN > ((rt_int)0LL)))
{
l_R_1732 = r_VAL_ARG(r_ENUM_LITERAL(r_LIT_NODE_T(((*(R17 *)rt_nil_check(l_Q_1731))).f_NAME, p_LINE), r_ROUNDINGS_TYPE()), NULL);
}
if ((!(((*(R17 *)rt_nil_check(l_Q_1731))).f_B == NULL)))
{
l_R_1732 = r_VAL_ARG(r_EXPR(((*(R17 *)rt_nil_check(l_Q_1731))).f_B, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_R_1732);
}
{ R29 * rv1734 = l_R_1732;
return rv1734; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_CALL3(R9 p_NAME, R26 p_A, R17 * p_B, R17 * p_C, rt_int p_LINE) { RT_B_TICK(); 
R29 * l_ARGS_1735; memset(&l_ARGS_1735, 0, sizeof l_ARGS_1735);
l_ARGS_1735 = r_VAL_ARG(p_A, r_NODE_ARG(p_B, g_M_IN, r_NODE_ARG(p_C, g_M_IN, NULL)));
R12 * l_Y_1736; memset(&l_Y_1736, 0, sizeof l_Y_1736);
l_Y_1736 = r_USER_OPERATOR(p_NAME, l_ARGS_1735, p_LINE);
if ((l_Y_1736 == NULL))
{
r_FAILT(p_LINE, rt_str("no operation for this abstract type: ", 37), p_NAME);
}
{ R26 rv1737 = r_CALL_SYM(l_Y_1736, l_ARGS_1735, p_LINE);
return rv1737; }
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
{ R9 rv1738 = p_C;
return rv1738; }
}
if ((p_STO > p_SFROM))
{
{ R9 rv1739 = r_FMT2(rt_str("rt_b_shl(@, @)", 14), p_C, r_NUM(rt_sub(p_STO, p_SFROM)));
return rv1739; }
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R9 rv1740 = r_FMT2(rt_str("rt_b_shr_round(@, @)", 20), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1740; }
}
{ R9 rv1741 = r_FMT2(rt_str("rt_b_shr(@, @)", 14), p_C, r_NUM(rt_sub(p_SFROM, p_STO)));
return rv1741; }
rt_raise(RT_X_INIT);
}
static R9 r_RESCALE(R26 p_V, rt_int p_S, rt_int p_LINE) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > p_S))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
{ R9 rv1742 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, p_S);
return rv1742; }
rt_raise(RT_X_INIT);
}
static R9 r_CONVERT(R26 p_V, R22 * p_T, rt_int p_LINE, R9 p_SELF) { RT_B_TICK(); 
R22 * l_RT_1743; memset(&l_RT_1743, 0, sizeof l_RT_1743);
l_RT_1743 = r_REAL_TYPE(p_T);
R22 * l_VT_1744; memset(&l_VT_1744, 0, sizeof l_VT_1744);
l_VT_1744 = (p_V).f_T;
if (((((*(R22 *)rt_nil_check(l_VT_1744))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_RT_1743))).f_KIND == g_T_PTR)))
{
{ R9 rv1745 = (p_V).f_C;
return rv1745; }
}
if (((((*(R22 *)rt_nil_check(l_RT_1743))).f_KIND == g_T_XFIX) || (((*(R22 *)rt_nil_check(l_VT_1744))).f_KIND == g_T_XFIX)))
{
if ((!r_SAME_XFIX(l_RT_1743, l_VT_1744)))
{
r_FAILT(p_LINE, rt_str("a value of another member of FIXED, which the program's STORE_ converts (D.4): ", 79), r_TYPE_NAME(l_VT_1744));
}
{ R9 rv1746 = r_RANGE_CHECK(l_RT_1743, (p_V).f_C, p_SELF);
return rv1746; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_VT_1744))).f_KIND == g_T_ABS)))
{
if ((!r_SAME_CLASS(p_T, l_VT_1744)))
{
r_FAILT(p_LINE, rt_str("the types do not match: ", 24), r_TYPE_NAME(p_T));
}
{ R9 rv1747 = (p_V).f_C;
return rv1747; }
}
if ((!r_SAME_CLASS(l_RT_1743, l_VT_1744)))
{
r_FAIL(p_LINE, rt_b_cat(rt_b_cat(rt_b_cat(rt_b_cat(rt_str("a value of ", 11), r_STR(r_TYPE_NAME(l_VT_1744), (r_TYPE_NAME(l_VT_1744)).f_LEN)), rt_str(" where ", 7)), r_STR(r_TYPE_NAME(l_RT_1743), (r_TYPE_NAME(l_RT_1743)).f_LEN)), rt_str(" is required", 12)));
}
if ((((*(R22 *)rt_nil_check(l_RT_1743))).f_KIND == g_T_INT))
{
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE > ((*(R22 *)rt_nil_check(l_RT_1743))).f_SCALE))
{
r_FAIL(p_LINE, rt_str("the scale of the value exceeds the scale of the variable (3.2.5)", 64));
}
if ((((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE == ((*(R22 *)rt_nil_check(l_RT_1743))).f_SCALE))
{
{ R9 rv1748 = r_RANGE_CHECK(l_RT_1743, (p_V).f_C, p_SELF);
return rv1748; }
}
{ R9 rv1749 = r_RANGE_CHECK(l_RT_1743, r_FMT3(rt_str("rt_b_conv(@, @, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE), r_NUM(((*(R22 *)rt_nil_check(l_RT_1743))).f_SCALE)), p_SELF);
return rv1749; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1743))).f_KIND == g_T_FLOAT))
{
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_RT_1743))).f_SCALE) < r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_1744))).f_SCALE)))
{
if (r_IS_D(l_VT_1744))
{
{ R9 rv1750 = r_RANGE_CHECK(l_RT_1743, r_FMT2(rt_str("rt_b_single_of_d(@, @, 1)", 25), (p_V).f_C, r_FLOAT_TRUNC()), p_SELF);
return rv1750; }
}
{ R9 rv1751 = r_RANGE_CHECK(l_RT_1743, r_FMT3(rt_str("rt_b_fconv(@, @, @, 1)", 22), (p_V).f_C, r_SINGLE_C(((*(R22 *)rt_nil_check(l_RT_1743))).f_SCALE), r_FLOAT_TRUNC()), p_SELF);
return rv1751; }
}
if (r_IS_D(l_RT_1743))
{
{ R9 rv1752 = r_RANGE_CHECK(l_RT_1743, r_AS_D(p_V), p_SELF);
return rv1752; }
}
{ R9 rv1753 = r_RANGE_CHECK(l_RT_1743, (p_V).f_C, p_SELF);
return rv1753; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1743))).f_KIND == g_T_ENUM))
{
if (((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_1743))).f_BASE))).f_UNORDERED && ((r_HAS_VALUES(l_RT_1743) || r_HAS_VALUES(l_VT_1744)))) && (!r_SAME_REPS(l_RT_1743, l_VT_1744))))
{
r_FAIL(p_LINE, rt_str("an UNORDERED value with ENUM_VAL_REP is assigned only with the same reptype (3.4.5)", 83));
}
{ R9 rv1754 = r_RANGE_CHECK(l_RT_1743, (p_V).f_C, p_SELF);
return rv1754; }
}
else if (((((*(R22 *)rt_nil_check(l_RT_1743))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_1743))).f_KIND == g_T_BITS)))
{
r_SAME_CHARSET(l_RT_1743, l_VT_1744, p_LINE);
if (((((*(R22 *)rt_nil_check(l_RT_1743))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_VT_1744))).f_MLEN).f_OK))
{
if ((!((((*(R22 *)rt_nil_check(l_RT_1743))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_VT_1744))).f_MLEN).f_V)))
{
r_FAIL(p_LINE, rt_str("the lengths of the strings differ (3.7.5: SIZE)", 47));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1743))).f_KIND == g_T_PTR))
{
if ((!r_IDENTICAL_TYPE(r_TARGET(l_RT_1743), r_TARGET(l_VT_1744))))
{
r_FAIL(p_LINE, rt_str("the ELEMENT_TYPE of the pointers are not identical (3.10.5)", 59));
}
{ R9 rv1755 = r_TARGET_ARGS_CHECK(r_TARGET(l_RT_1743), r_TARGET(l_VT_1744), (p_V).f_C);
return rv1755; }
}
else if ((((*(R22 *)rt_nil_check(l_RT_1743))).f_KIND == g_T_REC))
{
if (((!r_HAS_ANY(l_RT_1743)) && (!r_HAS_ANY(l_VT_1744))))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_RT_1743))).f_ARGS, ((*(R22 *)rt_nil_check(l_VT_1744))).f_ARGS)))
{
r_FAIL(p_LINE, rt_str("the records are of different types (3.9.5)", 42));
}
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_1743))).f_KIND == g_T_ARR))
{
if ((!r_SAME_CLASS(((*(R22 *)rt_nil_check(l_RT_1743))).f_ELEM, ((*(R22 *)rt_nil_check(l_VT_1744))).f_ELEM)))
{
r_FAIL(p_LINE, rt_str("the elements of the arrays are of different types (3.8.5)", 57));
}
if ((!r_SAME_EXTENTS(l_RT_1743, l_VT_1744)))
{
r_FAIL(p_LINE, rt_str("the arrays have different EXTENT attributes (3.8.5)", 51));
}
}
{ R9 rv1756 = (p_V).f_C;
return rv1756; }
rt_raise(RT_X_INIT);
}
static R9 r_STORE_CODE(R22 * p_T, R9 p_LV, R26 p_V, rt_int p_LINE, R9 p_SELF) { RT_B_TICK(); 
if (((((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND == g_T_XFIX) || (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_V).f_T)))).f_KIND == g_T_XFIX))) && (!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))))
{
{
R29 * l_ARGS_1757; memset(&l_ARGS_1757, 0, sizeof l_ARGS_1757);
l_ARGS_1757 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1758; memset(&l_Y_1758, 0, sizeof l_Y_1758);
((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(l_ARGS_1757))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_1758 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1757, p_LINE, 0);
if ((l_Y_1758 == NULL))
{
((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(l_ARGS_1757))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_1758 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1757, p_LINE, 0);
}
if ((!(l_Y_1758 == NULL)))
{
{ R9 rv1759 = r_CATS((r_CALL_SYM(l_Y_1758, l_ARGS_1757, p_LINE)).f_C, rt_str(";", 1));
return rv1759; }
}
if ((!r_SAME_XFIX(p_T, (p_V).f_T)))
{
r_FAIL(p_LINE, rt_b_cat(rt_str("between members of FIXED of other radices or precisions, assignment is ", 71), rt_str("the program's STORE_ (D.4)", 26)));
}
{ R9 rv1760 = r_ASSIGN_CODE(r_REAL_TYPE(p_T), p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1760; }
}
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
{
R29 * l_ARGS_1761; memset(&l_ARGS_1761, 0, sizeof l_ARGS_1761);
l_ARGS_1761 = r_VAL_ARG(p_V, r_VAL_ARG(r_MKLV(p_LV, p_T, 1, r_NO_TEXT()), NULL));
R12 * l_Y_1762; memset(&l_Y_1762, 0, sizeof l_Y_1762);
if ((!(((*(R7 *)rt_nil_check(g_W))).f_SQUAL == NULL)))
{
{
R17 * l_SAVED_Q_1763; memset(&l_SAVED_Q_1763, 0, sizeof l_SAVED_Q_1763);
l_SAVED_Q_1763 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R29 * l_X_1764; memset(&l_X_1764, 0, sizeof l_X_1764);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
l_X_1764 = r_QUAL_ARGS(p_LINE);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_1763;
if ((!(l_X_1764 == NULL)))
{
{
R29 * l_P_1765; memset(&l_P_1765, 0, sizeof l_P_1765);
l_P_1765 = l_X_1764;
for (;;) {
if ((((*(R29 *)rt_nil_check(l_P_1765))).f_NEXT == NULL)) goto L_end1766;
{
l_P_1765 = ((*(R29 *)rt_nil_check(l_P_1765))).f_NEXT;
}
RT_B_TICK();
} L_end1766: ;
((*(R29 *)rt_nil_check(l_P_1765))).f_NEXT = ((*(R29 *)rt_nil_check(l_ARGS_1761))).f_NEXT;
((*(R29 *)rt_nil_check(l_ARGS_1761))).f_NEXT = l_X_1764;
}
}
}
}
{
R29 * l_LAST_1767; memset(&l_LAST_1767, 0, sizeof l_LAST_1767);
l_LAST_1767 = l_ARGS_1761;
for (;;) {
if ((((*(R29 *)rt_nil_check(l_LAST_1767))).f_NEXT == NULL)) goto L_end1768;
{
l_LAST_1767 = ((*(R29 *)rt_nil_check(l_LAST_1767))).f_NEXT;
}
RT_B_TICK();
} L_end1768: ;
((*(R29 *)rt_nil_check(l_LAST_1767))).f_MODE = g_M_OUT;
l_Y_1762 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1761, p_LINE, 0);
if ((l_Y_1762 == NULL))
{
((*(R29 *)rt_nil_check(l_LAST_1767))).f_MODE = g_M_INOUT;
l_Y_1762 = r_FIND_ROUTINE(r_MKN(rt_str("STORE_", 6)), l_ARGS_1761, p_LINE, 0);
}
}
if ((l_Y_1762 == NULL))
{
r_FAILT(p_LINE, rt_str("no STORE_ for the abstract type ", 32), r_TYPE_NAME(p_T));
}
{ R9 rv1769 = r_CATS((r_CALL_SYM(l_Y_1762, l_ARGS_1761, p_LINE)).f_C, rt_str(";", 1));
return rv1769; }
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
if ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, (p_V).f_T)))
{
{ R9 rv1770 = r_COMPONENT_STORE(p_T, (p_V).f_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF), p_LINE);
return rv1770; }
}
}
{ R9 rv1771 = r_ASSIGN_CODE(p_T, p_LV, r_CONVERT(p_V, p_T, p_LINE, p_SELF));
return rv1771; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_ABS_PART(R22 * p_T) { RT_B_TICK(); 
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_XFIX)))
{
{ rt_int rv1772 = 1;
return rv1772; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR))
{
{ rt_int rv1773 = r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM);
return rv1773; }
}
else if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC))
{
{
R27 * l_F_1774; memset(&l_F_1774, 0, sizeof l_F_1774);
l_F_1774 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
for (;;) {
if ((l_F_1774 == NULL)) goto L_end1775;
{
if ((((*(R27 *)rt_nil_check(l_F_1774))).f_KIND == ((rt_int)0LL)))
{
if (r_HAS_ABS_PART(((*(R27 *)rt_nil_check(l_F_1774))).f_T))
{
{ rt_int rv1776 = 1;
return rv1776; }
}
}
l_F_1774 = ((*(R27 *)rt_nil_check(l_F_1774))).f_NEXT;
}
RT_B_TICK();
} L_end1775: ;
}
}
{ rt_int rv1777 = 0;
return rv1777; }
rt_raise(RT_X_INIT);
}
static rt_int r_ELEMENTS_NEED_CHECK(R22 * p_T, R22 * p_VT) { RT_B_TICK(); 
if (((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_KIND == g_T_ARR))))
{
{ rt_int rv1778 = 0;
return rv1778; }
}
if ((!r_IS_NUMERIC_OR_ENUM(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM))))
{
{ rt_int rv1779 = 0;
return rv1779; }
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R22 *)rt_nil_check(p_T))).f_ELEM)))).f_LO_C).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv1780 = 0;
return rv1780; }
}
{ rt_int rv1781 = (!r_SAME_RANGE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM));
return rv1781; }
rt_raise(RT_X_INIT);
}
static R9 r_COMPONENT_STORE(R22 * p_T, R22 * p_VT, R9 p_LV, R9 p_RV, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_XFIX)))
{
{ R9 rv1782 = r_STORE_CODE(p_T, p_LV, r_MKET(p_RV, p_VT), p_LINE, r_NO_TEXT());
return rv1782; }
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && ((r_HAS_ABS_PART(p_T) || r_ELEMENTS_NEED_CHECK(p_T, p_VT)))))
{
{
R9 l_D_1783; memset(&l_D_1783, 0, sizeof l_D_1783);
S_R9(&l_D_1783, r_NEW_NAME(rt_str("ad", 2)), 0);
R9 l_S_1784; memset(&l_S_1784, 0, sizeof l_S_1784);
S_R9(&l_S_1784, r_NEW_NAME(rt_str("as", 2)), 0);
R9 l_I_1785; memset(&l_I_1785, 0, sizeof l_I_1785);
S_R9(&l_I_1785, r_NEW_NAME(rt_str("ai", 2)), 0);
R9 l_N_1786; memset(&l_N_1786, 0, sizeof l_N_1786);
S_R9(&l_N_1786, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R22 * l_VE_1787; memset(&l_VE_1787, 0, sizeof l_VE_1787);
l_VE_1787 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_VT)))).f_ELEM;
R9 l_R_1788; memset(&l_R_1788, 0, sizeof l_R_1788);
S_R9(&l_R_1788, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1783, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R9(&l_R_1788, r_FMT3(rt_str("@@ = @; if (!rt_b_same_extents(", 31), l_R_1788, l_S_1784, p_RV), 0);
S_R9(&l_R_1788, r_FMT4(rt_str("@@, @->lo, @->hi, ", 18), l_R_1788, l_N_1786, l_D_1783, l_D_1783), 0);
S_R9(&l_R_1788, r_FMT3(rt_str("@@.lo, @.hi)) rt_raise(RT_B_SIZE); ", 35), l_R_1788, l_S_1784, l_S_1784), 0);
S_R9(&l_R_1788, r_FMT4(rt_str("@rt_int @n = rt_b_extent(@, @->lo, ", 35), l_R_1788, l_I_1785, l_N_1786, l_D_1783), 0);
S_R9(&l_R_1788, r_FMT2(rt_str("@@->hi);", 8), l_R_1788, l_D_1783), 0);
if (r_ELEMENTS_NEED_CHECK(p_T, p_VT))
{
S_R9(&l_R_1788, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1788, l_I_1785, l_I_1785, l_I_1785), 0);
S_R9(&l_R_1788, r_FMT3(rt_str("@@++) (void)@;", 14), l_R_1788, l_I_1785, r_RANGE_CHECK(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_S_1784, l_I_1785), r_NO_TEXT())), 0);
}
S_R9(&l_R_1788, r_FMT4(rt_str("@ for (rt_int @ = 0; @ < @n; ", 29), l_R_1788, l_I_1785, l_I_1785, l_I_1785), 0);
if (((r_HAS_ABS_PART(((*(R22 *)rt_nil_check(p_T))).f_ELEM) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_REC)) || (((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_ELEM))).f_KIND == g_T_ARR)))
{
S_R9(&l_R_1788, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1788, l_I_1785, r_COMPONENT_STORE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, l_VE_1787, r_FMT2(rt_str("@->p[@]", 7), l_D_1783, l_I_1785), r_FMT2(rt_str("@.p[@]", 6), l_S_1784, l_I_1785), p_LINE)), 0);
}
else
{
S_R9(&l_R_1788, r_FMT3(rt_str("@@++) { @ } }", 13), l_R_1788, l_I_1785, r_ASSIGN_CODE(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@->p[@]", 7), l_D_1783, l_I_1785), r_FMT2(rt_str("@.p[@]", 6), l_S_1784, l_I_1785))), 0);
}
{ R9 rv1789 = l_R_1788;
return rv1789; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_D_1790; memset(&l_D_1790, 0, sizeof l_D_1790);
S_R9(&l_D_1790, r_NEW_NAME(rt_str("rd", 2)), 0);
R9 l_S_1791; memset(&l_S_1791, 0, sizeof l_S_1791);
S_R9(&l_S_1791, r_NEW_NAME(rt_str("rs", 2)), 0);
R27 * l_F_1792; memset(&l_F_1792, 0, sizeof l_F_1792);
l_F_1792 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_R_1793; memset(&l_R_1793, 0, sizeof l_R_1793);
S_R9(&l_R_1793, r_FMT4(rt_str("{ @ *@ = &@; @ ", 15), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_D_1790, p_LV, ((*(R22 *)rt_nil_check(p_T))).f_CNAME), 0);
S_R9(&l_R_1793, r_FMT3(rt_str("@@ = @;", 7), l_R_1793, l_S_1791, p_RV), 0);
for (;;) {
if ((l_F_1792 == NULL)) goto L_end1794;
{
{
R9 l_DF_1795; memset(&l_DF_1795, 0, sizeof l_DF_1795);
S_R9(&l_DF_1795, r_FMT2(rt_str("@->@", 4), l_D_1790, ((*(R27 *)rt_nil_check(l_F_1792))).f_CNAME), 0);
R9 l_SF_1796; memset(&l_SF_1796, 0, sizeof l_SF_1796);
S_R9(&l_SF_1796, r_FMT2(rt_str("@.@", 3), l_S_1791, ((*(R27 *)rt_nil_check(l_F_1792))).f_CNAME), 0);
if (((((*(R27 *)rt_nil_check(l_F_1792))).f_KIND == ((rt_int)1LL)) || (((((*(R27 *)rt_nil_check(l_F_1792))).f_KIND == ((rt_int)2LL)) && (!r_HAS_ANY(p_T))))))
{
S_R9(&l_R_1793, r_FMT2(rt_str("@ if (!(@)) rt_raise(RT_B_TYPE_MISMATCH);", 41), l_R_1793, r_EQUAL_CODE(((*(R27 *)rt_nil_check(l_F_1792))).f_T, l_DF_1795, l_SF_1796)), 0);
}
else if ((((*(R27 *)rt_nil_check(l_F_1792))).f_KIND == ((rt_int)2LL)))
{
S_R9(&l_R_1793, r_FMT3(rt_str("@ @ = @;", 8), l_R_1793, l_DF_1795, l_SF_1796), 0);
}
else
{
S_R9(&l_R_1793, r_FMT2(rt_str("@ @", 3), l_R_1793, r_COMPONENT_STORE(((*(R27 *)rt_nil_check(l_F_1792))).f_T, ((*(R27 *)rt_nil_check(l_F_1792))).f_T, l_DF_1795, l_SF_1796, p_LINE)), 0);
}
}
l_F_1792 = ((*(R27 *)rt_nil_check(l_F_1792))).f_NEXT;
}
RT_B_TICK();
} L_end1794: ;
{ R9 rv1797 = r_CATS(l_R_1793, rt_str(" }", 2));
return rv1797; }
}
}
{ R9 rv1798 = r_ASSIGN_CODE(p_T, p_LV, p_RV);
return rv1798; }
rt_raise(RT_X_INIT);
}
static R9 r_COMPONENT_EQUAL(R22 * p_T, R9 p_A, R9 p_B, rt_int p_LINE) { RT_B_TICK(); 
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_XFIX)))
{
{
R29 * l_ARGS_1799; memset(&l_ARGS_1799, 0, sizeof l_ARGS_1799);
l_ARGS_1799 = r_VAL_ARG(r_MKET(p_A, p_T), r_VAL_ARG(r_MKET(p_B, p_T), NULL));
R12 * l_Y_1800; memset(&l_Y_1800, 0, sizeof l_Y_1800);
l_Y_1800 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1799, p_LINE);
if ((l_Y_1800 == NULL))
{
r_FAILT(p_LINE, rt_str("no EQUAL_ for the type ", 23), r_TYPE_NAME(p_T));
}
{ R9 rv1801 = (r_CALL_SYM(l_Y_1800, l_ARGS_1799, p_LINE)).f_C;
return rv1801; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ARR) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_X_1802; memset(&l_X_1802, 0, sizeof l_X_1802);
S_R9(&l_X_1802, r_NEW_NAME(rt_str("ea", 2)), 0);
R9 l_Z_1803; memset(&l_Z_1803, 0, sizeof l_Z_1803);
S_R9(&l_Z_1803, r_NEW_NAME(rt_str("eb", 2)), 0);
R9 l_I_1804; memset(&l_I_1804, 0, sizeof l_I_1804);
S_R9(&l_I_1804, r_NEW_NAME(rt_str("ei", 2)), 0);
R9 l_N_1805; memset(&l_N_1805, 0, sizeof l_N_1805);
S_R9(&l_N_1805, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), 0);
R9 l_R_1806; memset(&l_R_1806, 0, sizeof l_R_1806);
S_R9(&l_R_1806, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1802, p_A, l_Z_1803), 0);
S_R9(&l_R_1806, r_FMT4(rt_str("@@; int @r = rt_b_same_extents(@, ", 34), l_R_1806, p_B, l_I_1804, l_N_1805), 0);
S_R9(&l_R_1806, r_FMT4(rt_str("@@.lo, @.hi, @.lo, ", 19), l_R_1806, l_X_1802, l_X_1802, l_Z_1803), 0);
S_R9(&l_R_1806, r_FMT4(rt_str("@@.hi); rt_int @n = rt_b_extent(@, ", 35), l_R_1806, l_Z_1803, l_I_1804, l_N_1805), 0);
S_R9(&l_R_1806, r_FMT3(rt_str("@@.lo, @.hi);", 13), l_R_1806, l_X_1802, l_X_1802), 0);
S_R9(&l_R_1806, r_FMT4(rt_str("@ for (rt_int @ = 0; @r && @ < ", 31), l_R_1806, l_I_1804, l_I_1804, l_I_1804), 0);
S_R9(&l_R_1806, r_FMT4(rt_str("@@n; @++) @r = ", 15), l_R_1806, l_I_1804, l_I_1804, l_I_1804), 0);
S_R9(&l_R_1806, r_FMT2(rt_str("@@;", 3), l_R_1806, r_COMPONENT_EQUAL(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), l_X_1802, l_I_1804), r_FMT2(rt_str("@.p[@]", 6), l_Z_1803, l_I_1804), p_LINE)), 0);
{ R9 rv1807 = r_FMT2(rt_str("@ @r; })", 8), l_R_1806, l_I_1804);
return rv1807; }
}
}
else if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) && r_HAS_ABS_PART(p_T)))
{
{
R9 l_X_1808; memset(&l_X_1808, 0, sizeof l_X_1808);
S_R9(&l_X_1808, r_NEW_NAME(rt_str("ra", 2)), 0);
R9 l_Z_1809; memset(&l_Z_1809, 0, sizeof l_Z_1809);
S_R9(&l_Z_1809, r_NEW_NAME(rt_str("rb", 2)), 0);
R27 * l_F_1810; memset(&l_F_1810, 0, sizeof l_F_1810);
l_F_1810 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R9 l_R_1811; memset(&l_R_1811, 0, sizeof l_R_1811);
S_R9(&l_R_1811, r_FMT4(rt_str("({ @ @ = @, @ = ", 16), ((*(R22 *)rt_nil_check(p_T))).f_CNAME, l_X_1808, p_A, l_Z_1809), 0);
R9 l_EQ_1812; memset(&l_EQ_1812, 0, sizeof l_EQ_1812);
S_R9(&l_EQ_1812, r_MK(rt_str("1", 1)), 0);
S_R9(&l_R_1811, r_FMT2(rt_str("@@;", 3), l_R_1811, p_B), 0);
for (;;) {
if ((l_F_1810 == NULL)) goto L_end1813;
{
{
R9 l_C_1814; memset(&l_C_1814, 0, sizeof l_C_1814);
S_R9(&l_C_1814, r_COMPONENT_EQUAL(((*(R27 *)rt_nil_check(l_F_1810))).f_T, r_FMT2(rt_str("@.@", 3), l_X_1808, ((*(R27 *)rt_nil_check(l_F_1810))).f_CNAME), r_FMT2(rt_str("@.@", 3), l_Z_1809, ((*(R27 *)rt_nil_check(l_F_1810))).f_CNAME), p_LINE), 0);
if (((((*(R27 *)rt_nil_check(l_F_1810))).f_TAGF).f_LEN > ((rt_int)0LL)))
{
S_R9(&l_EQ_1812, r_FMT3(rt_str("@ && (!@ || @)", 14), l_EQ_1812, r_VARIANT_COND(l_F_1810, p_T, l_X_1808), l_C_1814), 0);
}
else
{
S_R9(&l_EQ_1812, r_FMT2(rt_str("@ && @", 6), l_EQ_1812, l_C_1814), 0);
}
}
l_F_1810 = ((*(R27 *)rt_nil_check(l_F_1810))).f_NEXT;
}
RT_B_TICK();
} L_end1813: ;
{ R9 rv1815 = r_FMT2(rt_str("@ @; })", 7), l_R_1811, l_EQ_1812);
return rv1815; }
}
}
{ R9 rv1816 = r_EQUAL_CODE(p_T, p_A, p_B);
return rv1816; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY(R17 * p_E) { RT_B_TICK(); 
{ R26 rv1817 = r_STD_RESULT(r_UNARY1(p_E));
return rv1817; }
rt_raise(RT_X_INIT);
}
static R26 r_UNARY1(R17 * p_E) { RT_B_TICK(); 
R26 l_A_1818; memset(&l_A_1818, 0, sizeof l_A_1818);
S_R26(&l_A_1818, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1819; memset(&l_T_1819, 0, sizeof l_T_1819);
l_T_1819 = (l_A_1818).f_T;
R9 l_OP_1820; memset(&l_OP_1820, 0, sizeof l_OP_1820);
S_R9(&l_OP_1820, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
if (((((*(R22 *)rt_nil_check(l_T_1819))).f_GENP).f_LEN > ((rt_int)0LL)))
{
r_REQUIRE_WHERE(r_OP_NAME(l_OP_1820, 1), ((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
if ((((((*(R22 *)rt_nil_check(l_T_1819))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_T_1819)))).f_KIND == g_T_XFIX)) || r_HAS_USER_ROUTINE(r_OP_NAME(l_OP_1820, 1))))
{
{
R29 * l_ARGS_1821; memset(&l_ARGS_1821, 0, sizeof l_ARGS_1821);
l_ARGS_1821 = r_VAL_ARG(l_A_1818, r_QUAL_ARGS(((*(R17 *)rt_nil_check(p_E))).f_LINE));
R12 * l_Y_1822; memset(&l_Y_1822, 0, sizeof l_Y_1822);
l_Y_1822 = r_USER_OPERATOR(r_OP_NAME(l_OP_1820, 1), l_ARGS_1821, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if (((l_Y_1822 == NULL) && (!(((*(R29 *)rt_nil_check(l_ARGS_1821))).f_NEXT == NULL))))
{
((*(R29 *)rt_nil_check(l_ARGS_1821))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(r_OP_NAME(l_OP_1820, 1), l_ARGS_1821, ((*(R17 *)rt_nil_check(p_E))).f_LINE) == NULL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("no operation takes the precision or rounding of the expression ", 63), rt_str("as arguments (D.5): ", 20)), r_OP_NAME(l_OP_1820, 1));
}
}
if ((!(l_Y_1822 == NULL)))
{
{ R26 rv1823 = r_CALL_SYM(l_Y_1822, l_ARGS_1821, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv1823; }
}
if (((((*(R22 *)rt_nil_check(l_T_1819))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_T_1819)))).f_KIND == g_T_XFIX)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no prefix operator of the program for ", 38), r_TYPE_NAME(l_T_1819));
}
}
}
if (r_TEQS(l_OP_1820, rt_str("NOT", 3)))
{
if ((((*(R22 *)rt_nil_check(l_T_1819))).f_KIND == g_T_BOOL))
{
{ R26 rv1824 = r_MKET(r_FMT1(rt_str("(!@)", 4), (l_A_1818).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1824; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1819))).f_KIND == g_T_BITS))
{
{ R26 rv1825 = r_MKET(r_FMT1(rt_str("rt_b_not(@)", 11), (l_A_1818).f_C), l_T_1819);
return rv1825; }
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("NOT applies to booleans and bitstrings", 38));
}
if ((((*(R22 *)rt_nil_check(l_T_1819))).f_KIND == g_T_INT))
{
if (r_TEQS(l_OP_1820, rt_str("-", 1)))
{
{ R26 rv1826 = r_MKET(r_FMT1(rt_str("rt_neg(@)", 9), (l_A_1818).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1819))).f_SCALE));
return rv1826; }
}
{ R26 rv1827 = r_MKET((l_A_1818).f_C, r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_1819))).f_SCALE));
return rv1827; }
}
else if ((((*(R22 *)rt_nil_check(l_T_1819))).f_KIND == g_T_FLOAT))
{
{
R22 * l_FT_1828; memset(&l_FT_1828, 0, sizeof l_FT_1828);
l_FT_1828 = r_FLOAT_TYPE(r_MAX_INT(((*(R22 *)rt_nil_check(l_T_1819))).f_SCALE, r_QUAL_PREC()));
if (r_TEQS(l_OP_1820, rt_str("-", 1)))
{
{ R26 rv1829 = r_MKET(r_FLOAT_OP(l_OP_1820, r_MKET(r_MK(rt_str("0.0", 3)), r_FLOAT_TYPE(((rt_int)1LL))), l_A_1818, l_FT_1828), l_FT_1828);
return rv1829; }
}
{ R26 rv1830 = r_MKET((l_A_1818).f_C, l_FT_1828);
return rv1830; }
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a prefix + or - of ", 19), r_TYPE_NAME(l_T_1819));
rt_raise(RT_X_INIT);
}
static rt_int r_IS_LITERALISH(R17 * p_E) { RT_B_TICK(); 
{ rt_int rv1831 = (((((((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) && (!r_NAMES_OBJECT(((*(R17 *)rt_nil_check(p_E))).f_NAME)))) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NIL)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS)) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)) || (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) && (r_LITERAL_CLASSES(((*(R17 *)rt_nil_check(p_E))).f_NAME) > ((rt_int)0LL)))));
return rv1831; }
rt_raise(RT_X_INIT);
}
static R26 r_BINARY(R17 * p_E) { RT_B_TICK(); 
R9 l_OP_1832; memset(&l_OP_1832, 0, sizeof l_OP_1832);
S_R9(&l_OP_1832, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
R26 l_A_1833; memset(&l_A_1833, 0, sizeof l_A_1833);
R26 l_B_1834; memset(&l_B_1834, 0, sizeof l_B_1834);
if ((r_TEQS(l_OP_1832, rt_str("&", 1)) || r_TEQS(l_OP_1832, rt_str("!", 1))))
{
{
R25 l_MA_1835; memset(&l_MA_1835, 0, sizeof l_MA_1835);
S_R25(&l_MA_1835, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R9 l_CA_1836; memset(&l_CA_1836, 0, sizeof l_CA_1836);
S_R9(&l_CA_1836, r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
R9 l_CB_1837; memset(&l_CB_1837, 0, sizeof l_CB_1837);
S_R9(&l_CB_1837, r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B), 0);
if (r_TEQS(l_OP_1832, rt_str("&", 1)))
{
{ R26 rv1838 = r_MKET(r_FMT2(rt_str("(@ && @)", 8), l_CA_1836, l_CB_1837), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1838; }
}
{ R26 rv1839 = r_MKET(r_FMT2(rt_str("(@ || @)", 8), l_CA_1836, l_CB_1837), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1839; }
}
}
if ((r_IS_LITERALISH(((*(R17 *)rt_nil_check(p_E))).f_A) && (!r_IS_LITERALISH(((*(R17 *)rt_nil_check(p_E))).f_B))))
{
S_R26(&l_B_1834, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, NULL), 0);
S_R26(&l_A_1833, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, (l_B_1834).f_T), 0);
}
else
{
S_R26(&l_A_1833, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
S_R26(&l_B_1834, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, (l_A_1833).f_T), 0);
}
{ R26 rv1840 = r_STD_RESULT(r_APPLY_OPERATOR(p_E, l_OP_1832, l_A_1833, l_B_1834));
return rv1840; }
rt_raise(RT_X_INIT);
}
static R26 r_STD_RESULT(R26 p_V) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R26 rv1841 = p_V;
return rv1841; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((p_V).f_T)))).f_KIND == g_T_INT)))
{
{ R26 rv1842 = p_V;
return rv1842; }
}
{ R26 rv1843 = ({ R26 rc1844; memset(&rc1844, 0, sizeof rc1844);  S_R9(&rc1844.f_C, r_STD_CHECK((p_V).f_C), 0); rc1844.f_T = (p_V).f_T; rc1844.f_LVAL = 0; S_R9(&rc1844.f_SELF, (p_V).f_SELF, 0); rc1844; });
return rv1843; }
rt_raise(RT_X_INIT);
}
static R26 r_APPLY_OPERATOR(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1845; memset(&l_AT_1845, 0, sizeof l_AT_1845);
l_AT_1845 = (p_A).f_T;
R22 * l_BT_1846; memset(&l_BT_1846, 0, sizeof l_BT_1846);
l_BT_1846 = (p_B).f_T;
rt_int l_LINE_1847; memset(&l_LINE_1847, 0, sizeof l_LINE_1847);
l_LINE_1847 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
{
R9 l_NAME_1848; memset(&l_NAME_1848, 0, sizeof l_NAME_1848);
S_R9(&l_NAME_1848, r_OP_NAME(p_OP, 0), 0);
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
S_R9(&l_NAME_1848, r_QMKN(rt_str("MD_", 3), l_NAME_1848), 0);
}
if ((((((*(R22 *)rt_nil_check(l_AT_1845))).f_GENP).f_LEN > ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_BT_1846))).f_GENP).f_LEN > ((rt_int)0LL))))
{
r_REQUIRE_WHERE(l_NAME_1848, l_LINE_1847);
}
if (((((r_HAS_USER_ROUTINE(l_NAME_1848) || (((*(R22 *)rt_nil_check(l_AT_1845))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(l_BT_1846))).f_KIND == g_T_ABS)) || (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_1845)))).f_KIND == g_T_XFIX)) || (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_BT_1846)))).f_KIND == g_T_XFIX)))
{
{
R29 * l_ARGS_1849; memset(&l_ARGS_1849, 0, sizeof l_ARGS_1849);
l_ARGS_1849 = r_VAL_ARG(p_A, r_VAL_ARG(p_B, NULL));
R29 * l_EXTRA_1850; memset(&l_EXTRA_1850, 0, sizeof l_EXTRA_1850);
l_EXTRA_1850 = r_QUAL_ARGS(l_LINE_1847);
R12 * l_Y_1851; memset(&l_Y_1851, 0, sizeof l_Y_1851);
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)1LL)))
{
l_EXTRA_1850 = r_VAL_ARG(r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_D, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), l_EXTRA_1850);
}
if ((!(l_EXTRA_1850 == NULL)))
{
((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(l_ARGS_1849))).f_NEXT))).f_NEXT = l_EXTRA_1850;
l_Y_1851 = r_USER_OPERATOR(l_NAME_1848, l_ARGS_1849, l_LINE_1847);
if ((!(l_Y_1851 == NULL)))
{
{ R26 rv1852 = r_CALL_SYM(l_Y_1851, l_ARGS_1849, l_LINE_1847);
return rv1852; }
}
((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(l_ARGS_1849))).f_NEXT))).f_NEXT = NULL;
if ((!(r_USER_OPERATOR(l_NAME_1848, l_ARGS_1849, l_LINE_1847) == NULL)))
{
r_FAILT(l_LINE_1847, rt_b_cat(rt_str("no operation takes the scale, precision or rounding of the ", 59), rt_str("expression as arguments (D.5): ", 31)), l_NAME_1848);
}
}
else
{
l_Y_1851 = r_USER_OPERATOR(l_NAME_1848, l_ARGS_1849, l_LINE_1847);
if ((!(l_Y_1851 == NULL)))
{
{ R26 rv1853 = r_CALL_SYM(l_Y_1851, l_ARGS_1849, l_LINE_1847);
return rv1853; }
}
}
if ((r_TEQS(p_OP, rt_str("<>", 2)) && (((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{
R12 * l_Q_1854; memset(&l_Q_1854, 0, sizeof l_Q_1854);
l_Q_1854 = r_USER_OPERATOR(r_MKN(rt_str("EQUAL_", 6)), l_ARGS_1849, l_LINE_1847);
if ((!(l_Q_1854 == NULL)))
{
{ R26 rv1855 = r_MKET(r_FMT1(rt_str("(!@)", 4), (r_CALL_SYM(l_Q_1854, l_ARGS_1849, l_LINE_1847)).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1855; }
}
}
}
if (((((*(R22 *)rt_nil_check(l_AT_1845))).f_KIND == g_T_ABS) || (((*(R22 *)rt_nil_check(l_BT_1846))).f_KIND == g_T_ABS)))
{
r_FAILT(l_LINE_1847, rt_str("no such operation for the abstract type: ", 41), l_NAME_1848);
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_1845)))).f_KIND == g_T_XFIX) || (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_BT_1846)))).f_KIND == g_T_XFIX)))
{
r_FAILT(l_LINE_1847, rt_b_cat(rt_str("the operations of a member of FIXED of another radix or precision ", 66), rt_str("are the program's (D.4, D.6); none fits: ", 41)), l_NAME_1848);
}
}
}
}
if ((!r_PREDEFINED_ROUNDING()))
{
r_FAILT(l_LINE_1847, rt_str("no operation is defined for the rounding mode ", 46), ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)0LL))))
{
{ R26 rv1856 = r_SCALED_OPERATOR(p_E, p_OP, p_A, p_B);
return rv1856; }
}
if ((r_TEQS(p_OP, rt_str("=", 1)) || r_TEQS(p_OP, rt_str("<>", 2))))
{
{ R26 rv1857 = r_EQUALITY(p_E, p_OP, p_A, p_B);
return rv1857; }
}
if ((((r_TEQS(p_OP, rt_str("<", 1)) || r_TEQS(p_OP, rt_str(">", 1))) || r_TEQS(p_OP, rt_str("<=", 2))) || r_TEQS(p_OP, rt_str(">=", 2))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1845))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1846))).f_KIND == g_T_INT)))
{
{ R26 rv1858 = r_MKET(r_FIXED_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1858; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1845))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1846))).f_KIND == g_T_FLOAT)))
{
{ R26 rv1859 = r_MKET(r_FLOAT_COMPARE(p_A, p_B, p_OP), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1859; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1845))).f_KIND == g_T_ENUM) && r_SAME_CLASS(l_AT_1845, l_BT_1846)))
{
if ((r_IS_UNORDERED(l_AT_1845) || r_IS_UNORDERED(l_BT_1846)))
{
r_FAIL(l_LINE_1847, rt_str("an UNORDERED type has no ordering (3.4.4.1)", 43));
}
{ R26 rv1860 = r_MKET(r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1860; }
}
r_FAILT(l_LINE_1847, rt_str("no ordering for these operands: ", 32), p_OP);
}
if (r_TEQS(p_OP, rt_str("!!", 2)))
{
if (((((((*(R22 *)rt_nil_check(l_AT_1845))).f_KIND == g_T_STR) && (((*(R22 *)rt_nil_check(l_BT_1846))).f_KIND == g_T_STR))) || (((((*(R22 *)rt_nil_check(l_AT_1845))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1846))).f_KIND == g_T_BITS)))))
{
r_SAME_CHARSET(l_AT_1845, l_BT_1846, l_LINE_1847);
{
R22 * l_T_1861; memset(&l_T_1861, 0, sizeof l_T_1861);
l_T_1861 = r_NEW_TYP(((*(R22 *)rt_nil_check(l_AT_1845))).f_KIND);
((*(R22 *)rt_nil_check(l_T_1861))).f_BASE = ((*(R22 *)rt_nil_check(l_AT_1845))).f_BASE;
if (((((*(R22 *)rt_nil_check(l_AT_1845))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_BT_1846))).f_MLEN).f_OK))
{
S_R25(&((*(R22 *)rt_nil_check(l_T_1861))).f_MLEN, r_SOME(rt_add((((*(R22 *)rt_nil_check(l_AT_1845))).f_MLEN).f_V, (((*(R22 *)rt_nil_check(l_BT_1846))).f_MLEN).f_V)), 0);
S_R9(&((*(R22 *)rt_nil_check(l_T_1861))).f_LEN_C, r_NUM((((*(R22 *)rt_nil_check(l_T_1861))).f_MLEN).f_V), 0);
}
{ R26 rv1862 = r_MKET(r_FMT2(rt_str("rt_b_cat(@, @)", 14), (p_A).f_C, (p_B).f_C), l_T_1861);
return rv1862; }
}
}
r_FAIL(l_LINE_1847, rt_str("!! concatenates strings and bitstrings", 38));
}
if (((r_TEQS(p_OP, rt_str("AND", 3)) || r_TEQS(p_OP, rt_str("OR", 2))) || r_TEQS(p_OP, rt_str("XOR", 3))))
{
if (((((*(R22 *)rt_nil_check(l_AT_1845))).f_KIND == g_T_BITS) && (((*(R22 *)rt_nil_check(l_BT_1846))).f_KIND == g_T_BITS)))
{
{ R26 rv1863 = r_MKET(r_FMT3(rt_str("rt_b_@(@, @)", 12), r_LOWER_OP(p_OP), (p_A).f_C, (p_B).f_C), l_AT_1845);
return rv1863; }
}
r_FAILT(l_LINE_1847, rt_str("predefined only for bitstrings (3.5.4.1): ", 42), p_OP);
}
if (((((*(R22 *)rt_nil_check(l_AT_1845))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1846))).f_KIND == g_T_INT)))
{
{ R26 rv1864 = r_FIXED_ARITH(p_E, p_OP, p_A, p_B);
return rv1864; }
}
else if (((((*(R22 *)rt_nil_check(l_AT_1845))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1846))).f_KIND == g_T_FLOAT)))
{
{
R22 * l_T_1865; memset(&l_T_1865, 0, sizeof l_T_1865);
l_T_1865 = r_FLOAT_TYPE(r_MAX_INT(r_MAX_INT(((*(R22 *)rt_nil_check(l_AT_1845))).f_SCALE, ((*(R22 *)rt_nil_check(l_BT_1846))).f_SCALE), r_QUAL_PREC()));
if ((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))
{
{ R26 rv1866 = r_MKET(r_FLOAT_OP(p_OP, p_A, p_B, l_T_1865), l_T_1865);
return rv1866; }
}
if (r_TEQS(p_OP, rt_str("**", 2)))
{
r_FAIL(l_LINE_1847, rt_str("** has no predefined meaning for floating point values (3.3.4.2)", 64));
}
}
}
if (((((((*(R22 *)rt_nil_check(l_AT_1845))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1846))).f_KIND == g_T_FLOAT))) || (((((*(R22 *)rt_nil_check(l_AT_1845))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1846))).f_KIND == g_T_INT)))))
{
r_FAIL(l_LINE_1847, rt_str("fixed and float operands do not mix: use TO_FIXED or TO_FLOAT (3.1)", 67));
}
r_FAIL(l_LINE_1847, rt_b_cat(rt_b_cat(rt_b_cat(rt_str("no operator ", 12), r_STR(p_OP, (p_OP).f_LEN)), rt_str(" for ", 5)), r_STR(r_TYPE_NAME(l_AT_1845), (r_TYPE_NAME(l_AT_1845)).f_LEN)));
rt_raise(RT_X_INIT);
}
static rt_int r_IDENTICAL_TYPE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_1867; memset(&l_RA_1867, 0, sizeof l_RA_1867);
l_RA_1867 = r_REAL_TYPE(p_A);
R22 * l_RB_1868; memset(&l_RB_1868, 0, sizeof l_RB_1868);
l_RB_1868 = r_REAL_TYPE(p_B);
if ((p_A == p_B))
{
{ rt_int rv1869 = 1;
return rv1869; }
}
if (((!r_SAME_TYPE(p_A, p_B)) || (!r_SAME_RANGE(p_A, p_B))))
{
{ rt_int rv1870 = 0;
return rv1870; }
}
if (((((*(R22 *)rt_nil_check(l_RA_1867))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RA_1867))).f_KIND == g_T_BITS)))
{
if (((((*(R22 *)rt_nil_check(l_RA_1867))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_1868))).f_MLEN).f_OK))
{
{ rt_int rv1871 = ((((*(R22 *)rt_nil_check(l_RA_1867))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_1868))).f_MLEN).f_V);
return rv1871; }
}
}
else if ((((*(R22 *)rt_nil_check(l_RA_1867))).f_KIND == g_T_ARR))
{
{ rt_int rv1872 = (r_SAME_EXTENTS(l_RA_1867, l_RB_1868) && r_IDENTICAL_TYPE(((*(R22 *)rt_nil_check(l_RA_1867))).f_ELEM, ((*(R22 *)rt_nil_check(l_RB_1868))).f_ELEM));
return rv1872; }
}
{ rt_int rv1873 = 1;
return rv1873; }
rt_raise(RT_X_INIT);
}
static R9 r_TARGET_ARGS_CHECK(R22 * p_RT, R22 * p_VT, R9 p_C) { RT_B_TICK(); 
R22 * l_A_1874; memset(&l_A_1874, 0, sizeof l_A_1874);
l_A_1874 = r_REAL_TYPE(p_RT);
R22 * l_B_1875; memset(&l_B_1875, 0, sizeof l_B_1875);
l_B_1875 = r_REAL_TYPE(p_VT);
R9 l_R_1876; memset(&l_R_1876, 0, sizeof l_R_1876);
S_R9(&l_R_1876, r_MK(rt_str("", 0)), 0);
if (((!(((*(R22 *)rt_nil_check(l_A_1874))).f_KIND == g_T_REC)) || (!(((*(R22 *)rt_nil_check(l_B_1875))).f_KIND == g_T_REC))))
{
{ R9 rv1877 = p_C;
return rv1877; }
}
{
R27 * l_F_1878; memset(&l_F_1878, 0, sizeof l_F_1878);
l_F_1878 = ((*(R22 *)rt_nil_check(l_A_1874))).f_FIELDS;
R28 * l_P_1879; memset(&l_P_1879, 0, sizeof l_P_1879);
l_P_1879 = ((*(R22 *)rt_nil_check(l_A_1874))).f_ARGS;
R28 * l_Q_1880; memset(&l_Q_1880, 0, sizeof l_Q_1880);
l_Q_1880 = ((*(R22 *)rt_nil_check(l_B_1875))).f_ARGS;
for (;;) {
if ((((l_F_1878 == NULL) || (l_P_1879 == NULL)) || (l_Q_1880 == NULL))) goto L_end1881;
{
if ((!(((*(R27 *)rt_nil_check(l_F_1878))).f_KIND == ((rt_int)0LL))))
{
if (((((!((*(R28 *)rt_nil_check(l_P_1879))).f_ANYARG) && (!r_IS_GEN_ARG(l_P_1879))) && (!r_IS_GEN_ARG(l_Q_1880))) && (!(((((*(R28 *)rt_nil_check(l_P_1879))).f_MLO).f_OK && (((*(R28 *)rt_nil_check(l_Q_1880))).f_MLO).f_OK)))))
{
S_R9(&l_R_1876, r_FMT3(rt_str("@ if (p && p->@ != (@)) rt_raise(RT_B_TYPE_MISMATCH);", 53), l_R_1876, ((*(R27 *)rt_nil_check(l_F_1878))).f_CNAME, ((*(R28 *)rt_nil_check(l_P_1879))).f_LO), 0);
}
l_P_1879 = ((*(R28 *)rt_nil_check(l_P_1879))).f_NEXT;
l_Q_1880 = ((*(R28 *)rt_nil_check(l_Q_1880))).f_NEXT;
}
l_F_1878 = ((*(R27 *)rt_nil_check(l_F_1878))).f_NEXT;
}
RT_B_TICK();
} L_end1881: ;
}
if (((l_R_1876).f_LEN == ((rt_int)0LL)))
{
{ R9 rv1882 = p_C;
return rv1882; }
}
{ R9 rv1883 = r_FMT3(rt_str("({ __typeof__(@) p = (@);@ p; })", 32), p_C, p_C, l_R_1876);
return rv1883; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_EXTENTS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R28 * l_P_1884; memset(&l_P_1884, 0, sizeof l_P_1884);
l_P_1884 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_A)))).f_BOUNDS;
R28 * l_Q_1885; memset(&l_Q_1885, 0, sizeof l_Q_1885);
l_Q_1885 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_B)))).f_BOUNDS;
for (;;) {
if (((l_P_1884 == NULL) || (l_Q_1885 == NULL))) goto L_end1886;
{
if (((((((((((*(R28 *)rt_nil_check(l_P_1884))).f_MLO).f_OK && (((*(R28 *)rt_nil_check(l_P_1884))).f_MHI).f_OK) && (((*(R28 *)rt_nil_check(l_Q_1885))).f_MLO).f_OK) && (((*(R28 *)rt_nil_check(l_Q_1885))).f_MHI).f_OK) && (!r_IS_GEN_TEXT(((*(R28 *)rt_nil_check(l_P_1884))).f_LO))) && (!r_IS_GEN_TEXT(((*(R28 *)rt_nil_check(l_P_1884))).f_HI))) && (!r_IS_GEN_TEXT(((*(R28 *)rt_nil_check(l_Q_1885))).f_LO))) && (!r_IS_GEN_TEXT(((*(R28 *)rt_nil_check(l_Q_1885))).f_HI))))
{
if ((!(r_MAX_INT(rt_add(rt_sub((((*(R28 *)rt_nil_check(l_P_1884))).f_MHI).f_V, (((*(R28 *)rt_nil_check(l_P_1884))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)) == r_MAX_INT(rt_add(rt_sub((((*(R28 *)rt_nil_check(l_Q_1885))).f_MHI).f_V, (((*(R28 *)rt_nil_check(l_Q_1885))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)))))
{
{ rt_int rv1887 = 0;
return rv1887; }
}
}
l_P_1884 = ((*(R28 *)rt_nil_check(l_P_1884))).f_NEXT;
l_Q_1885 = ((*(R28 *)rt_nil_check(l_Q_1885))).f_NEXT;
}
RT_B_TICK();
} L_end1886: ;
{ rt_int rv1888 = 1;
return rv1888; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_VALUES(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL))
{
{ rt_int rv1889 = 0;
return rv1889; }
}
{ rt_int rv1890 = (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL));
return rv1890; }
rt_raise(RT_X_INIT);
}
static R22 * r_FLOAT_TYPE(rt_int p_P) { RT_B_TICK(); 
R22 * l_T_1891; memset(&l_T_1891, 0, sizeof l_T_1891);
l_T_1891 = r_NEW_TYP(g_T_FLOAT);
((*(R22 *)rt_nil_check(l_T_1891))).f_SCALE = p_P;
{ R22 * rv1892 = l_T_1891;
return rv1892; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_D(R22 * p_T) { RT_B_TICK(); 
if (((!(((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL))) || (p_T == NULL)))
{
{ rt_int rv1893 = 0;
return rv1893; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv1894 = 0;
return rv1894; }
}
{ rt_int rv1895 = (r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_SCALE) > ((rt_int)7LL));
return rv1895; }
rt_raise(RT_X_INIT);
}
static R9 r_AS_D(R26 p_V) { RT_B_TICK(); 
if (r_IS_D((p_V).f_T))
{
{ R9 rv1896 = (p_V).f_C;
return rv1896; }
}
{ R9 rv1897 = r_FMT1(rt_str("rt_b_d_of_double(@)", 19), (p_V).f_C);
return rv1897; }
rt_raise(RT_X_INIT);
}
static R9 r_AS_DOUBLE(R26 p_V) { RT_B_TICK(); 
if (r_IS_D((p_V).f_T))
{
{ R9 rv1898 = r_FMT1(rt_str("rt_b_double_of_d(@)", 19), (p_V).f_C);
return rv1898; }
}
{ R9 rv1899 = (p_V).f_C;
return rv1899; }
rt_raise(RT_X_INIT);
}
static R9 r_SINGLE_C(rt_int p_P) { RT_B_TICK(); 
if ((r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL)))
{
{ R9 rv1900 = r_MK(rt_str("1", 1));
return rv1900; }
}
{ R9 rv1901 = r_MK(rt_str("0", 1));
return rv1901; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_TRUNC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9)) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8))))
{
{ R9 rv1902 = r_MK(rt_str("1", 1));
return rv1902; }
}
}
{ R9 rv1903 = r_MK(rt_str("0", 1));
return rv1903; }
rt_raise(RT_X_INIT);
}
static rt_int r_QUAL_PREC(void) { RT_B_TICK(); 
if ((!(((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B == NULL)))
{
{ rt_int rv1904 = (r_MANIFEST(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_B)).f_V;
return rv1904; }
}
}
{ rt_int rv1905 = ((rt_int)0LL);
return rv1905; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_OP(R9 p_OP, R26 p_A, R26 p_B, R22 * p_T) { RT_B_TICK(); 
if (r_IS_D(p_T))
{
{ R9 rv1906 = r_FMT4(rt_str("rt_b_dop('@', @, @, @)", 22), p_OP, r_AS_D(p_A), r_AS_D(p_B), r_FLOAT_TRUNC());
return rv1906; }
}
{ R9 rv1907 = r_CAT(r_FMT3(rt_str("rt_b_fop('@', @, @, ", 20), p_OP, r_AS_DOUBLE(p_A), r_AS_DOUBLE(p_B)), r_FMT2(rt_str("@, @)", 5), r_SINGLE_C(((*(R22 *)rt_nil_check(p_T))).f_SCALE), r_FLOAT_TRUNC()));
return rv1907; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_COMPARE(R26 p_A, R26 p_B, R9 p_OP) { RT_B_TICK(); 
if ((r_IS_D((p_A).f_T) || r_IS_D((p_B).f_T)))
{
{ R9 rv1908 = r_FMT3(rt_str("(rt_b_dcmp(@, @) @ 0)", 21), r_AS_D(p_A), r_AS_D(p_B), r_C_RELOP(p_OP));
return rv1908; }
}
{ R9 rv1909 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, r_C_RELOP(p_OP), (p_B).f_C);
return rv1909; }
rt_raise(RT_X_INIT);
}
static R9 r_C_RELOP(R9 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("=", 1)))
{
{ R9 rv1910 = r_MK(rt_str("==", 2));
return rv1910; }
}
else if (r_TEQS(p_OP, rt_str("<>", 2)))
{
{ R9 rv1911 = r_MK(rt_str("!=", 2));
return rv1911; }
}
{ R9 rv1912 = p_OP;
return rv1912; }
rt_raise(RT_X_INIT);
}
static R9 r_LOWER_OP(R9 p_OP) { RT_B_TICK(); 
if (r_TEQS(p_OP, rt_str("AND", 3)))
{
{ R9 rv1913 = r_MK(rt_str("and", 3));
return rv1913; }
}
else if (r_TEQS(p_OP, rt_str("OR", 2)))
{
{ R9 rv1914 = r_MK(rt_str("or", 2));
return rv1914; }
}
{ R9 rv1915 = r_MK(rt_str("xor", 3));
return rv1915; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_INT(rt_int p_A, rt_int p_B) { RT_B_TICK(); 
if ((p_A > p_B))
{
{ rt_int rv1916 = p_A;
return rv1916; }
}
{ rt_int rv1917 = p_B;
return rv1917; }
rt_raise(RT_X_INIT);
}
static R9 r_FIXED_COMPARE(R26 p_A, R26 p_B, R9 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE == ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE))
{
{ R9 rv1918 = r_FMT3(rt_str("(@ @ @)", 7), (p_A).f_C, p_OP, (p_B).f_C);
return rv1918; }
}
{ R9 rv1919 = r_CAT(r_FMT3(rt_str("(rt_b_cmp(@, @, @", 17), (p_A).f_C, r_NUM(((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE), (p_B).f_C), r_FMT2(rt_str(", @) @ 0)", 9), r_NUM(((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE), p_OP));
return rv1919; }
rt_raise(RT_X_INIT);
}
static R26 r_EQUALITY(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
R22 * l_AT_1920; memset(&l_AT_1920, 0, sizeof l_AT_1920);
l_AT_1920 = r_REAL_TYPE((p_A).f_T);
R22 * l_BT_1921; memset(&l_BT_1921, 0, sizeof l_BT_1921);
l_BT_1921 = r_REAL_TYPE((p_B).f_T);
R9 l_R_1922; memset(&l_R_1922, 0, sizeof l_R_1922);
if (((((*(R22 *)rt_nil_check(l_AT_1920))).f_KIND == g_T_NIL) || (((*(R22 *)rt_nil_check(l_BT_1921))).f_KIND == g_T_NIL)))
{
if ((!((((((*(R22 *)rt_nil_check(l_AT_1920))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_BT_1921))).f_KIND == g_T_PTR)) || (((((*(R22 *)rt_nil_check(l_AT_1920))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(l_BT_1921))).f_KIND == g_T_NIL)))))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("NIL compares only with pointers", 31));
}
S_R9(&l_R_1922, r_FMT2(rt_str("(@ == @)", 8), (p_A).f_C, (p_B).f_C), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1920))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_BT_1921))).f_KIND == g_T_INT)))
{
S_R9(&l_R_1922, r_FIXED_COMPARE(p_A, p_B, r_MK(rt_str("==", 2))), 0);
}
else if (((((*(R22 *)rt_nil_check(l_AT_1920))).f_KIND == g_T_FLOAT) && (((*(R22 *)rt_nil_check(l_BT_1921))).f_KIND == g_T_FLOAT)))
{
S_R9(&l_R_1922, r_FLOAT_COMPARE(p_A, p_B, r_MK(rt_str("=", 1))), 0);
}
else
{
if ((!r_SAME_CLASS(l_AT_1920, l_BT_1921)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("comparing values of different types", 35));
}
if ((((*(R22 *)rt_nil_check(l_AT_1920))).f_KIND == g_T_SEM))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("semaphores have no equality (3.11.4)", 36));
}
r_SAME_CHARSET(l_AT_1920, l_BT_1921, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
if (((((*(R22 *)rt_nil_check(l_AT_1920))).f_KIND == g_T_REC) && ((r_HAS_ANY(l_AT_1920) || r_HAS_ANY(l_BT_1921)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a T(ANY) record cannot be compared (3.9.4.1)", 44));
}
if ((((*(R22 *)rt_nil_check(l_AT_1920))).f_KIND == g_T_ARR))
{
if ((!r_SAME_EXTENTS(l_AT_1920, l_BT_1921)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("arrays of different EXTENT attributes are compared (3.8.4.1)", 60));
}
}
if ((((*(R22 *)rt_nil_check(l_AT_1920))).f_KIND == g_T_REC))
{
if ((!r_SAME_ARGS(((*(R22 *)rt_nil_check(l_AT_1920))).f_ARGS, ((*(R22 *)rt_nil_check(l_BT_1921))).f_ARGS)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("records of different types are compared (3.9.4.1)", 49));
}
}
if (r_HAS_ABS_PART(l_AT_1920))
{
S_R9(&l_R_1922, r_COMPONENT_EQUAL(l_AT_1920, (p_A).f_C, (p_B).f_C, ((*(R17 *)rt_nil_check(p_E))).f_LINE), 0);
}
else
{
S_R9(&l_R_1922, r_EQUAL_CODE(l_AT_1920, (p_A).f_C, (p_B).f_C), 0);
}
}
if (r_TEQS(p_OP, rt_str("<>", 2)))
{
S_R9(&l_R_1922, r_FMT1(rt_str("(!@)", 4), l_R_1922), 0);
}
{ R26 rv1923 = r_MKET(l_R_1922, ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1923; }
rt_raise(RT_X_INIT);
}
static R26 r_FIXED_ARITH(R17 * p_E, R9 p_OP, R26 p_A, R26 p_B) { RT_B_TICK(); 
rt_int l_S1_1924; memset(&l_S1_1924, 0, sizeof l_S1_1924);
l_S1_1924 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1925; memset(&l_S2_1925, 0, sizeof l_S2_1925);
l_S2_1925 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
rt_int l_S_1926; memset(&l_S_1926, 0, sizeof l_S_1926);
l_S_1926 = r_MAX_INT(l_S1_1924, l_S2_1925);
R9 l_FN_1927; memset(&l_FN_1927, 0, sizeof l_FN_1927);
S_R9(&l_FN_1927, r_MK(rt_str("rt_add", 6)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R9(&l_FN_1927, r_MK(rt_str("rt_sub", 6)), 0);
}
{ R26 rv1928 = r_MKET(r_FMT3(rt_str("@(@, @)", 7), l_FN_1927, r_RESCALE_C((p_A).f_C, l_S1_1924, l_S_1926), r_RESCALE_C((p_B).f_C, l_S2_1925, l_S_1926)), r_INT_TYPE(l_S_1926));
return rv1928; }
}
}
else if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1929 = r_MKET(r_FMT2(rt_str("rt_mul(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_add(l_S1_1924, l_S2_1925)));
return rv1929; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1930 = r_MKET(r_FMT2(rt_str("rt_b_div_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1924, l_S2_1925)));
return rv1930; }
}
{ R26 rv1931 = r_MKET(r_FMT2(rt_str("rt_quot(@, @)", 13), (p_A).f_C, (p_B).f_C), r_INT_TYPE(rt_sub(l_S1_1924, l_S2_1925)));
return rv1931; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R26 rv1932 = r_MKET(r_FMT2(rt_str("rt_b_mod_round(@, @)", 20), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1924));
return rv1932; }
}
{ R26 rv1933 = r_MKET(r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_INT_TYPE(l_S1_1924));
return rv1933; }
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
rt_int l_S1_1934; memset(&l_S1_1934, 0, sizeof l_S1_1934);
l_S1_1934 = ((*(R22 *)rt_nil_check((p_A).f_T))).f_SCALE;
rt_int l_S2_1935; memset(&l_S2_1935, 0, sizeof l_S2_1935);
l_S2_1935 = ((*(R22 *)rt_nil_check((p_B).f_T))).f_SCALE;
R9 l_RND_1936; memset(&l_RND_1936, 0, sizeof l_RND_1936);
S_R9(&l_RND_1936, r_MK(rt_str("0", 1)), 0);
if ((((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE((p_B).f_T)))).f_KIND == g_T_FLOAT)))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("/", 1))))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no machine-dependent float operator ", 36), p_OP);
}
if ((r_IS_D((p_A).f_T) || r_IS_D((p_B).f_T)))
{
{ R26 rv1937 = r_MKET(r_FMT3(rt_str("rt_b_dmd('@', @, @)", 19), p_OP, r_AS_D(p_A), r_AS_D(p_B)), r_BITS_TYPE(((rt_int)128LL)));
return rv1937; }
}
else if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
{ R26 rv1938 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv1938; }
}
{ R26 rv1939 = r_MKET(r_FMT3(rt_str("rt_b_fmd('@', @, @)", 19), p_OP, (p_A).f_C, (p_B).f_C), r_BITS_TYPE(((rt_int)128LL)));
return rv1939; }
}
if (((!(((*(R22 *)rt_nil_check((p_A).f_T))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check((p_B).f_T))).f_KIND == g_T_INT))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("scaled operators are for fixed point operands", 45));
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
S_R9(&l_RND_1936, r_MK(rt_str("1", 1)), 0);
}
if ((((*(R17 *)rt_nil_check(p_E))).f_FL == ((rt_int)2LL)))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
if ((!((((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))) || r_TEQS(p_OP, rt_str("*", 1))) || r_TEQS(p_OP, rt_str("//", 2))))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the machine-dependent fixed point operators are !+! !-! !*! !//! (3.2.4.5), not ", 80), p_OP);
}
{ R26 rv1940 = r_MKET(r_FMT3(rt_str("rt_b_md('@', @, @)", 18), r_MK(rt_b_slice(r_STR(p_OP, (p_OP).f_LEN), ((rt_int)0LL), ((rt_int)0LL))), (p_A).f_C, (p_B).f_C), r_BITS_TYPE(rt_mul(((rt_int)2LL), ((*(R7 *)rt_nil_check(g_W))).f_WORD)));
return rv1940; }
}
{
R25 l_SM_1941; memset(&l_SM_1941, 0, sizeof l_SM_1941);
S_R25(&l_SM_1941, r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_D), 0);
rt_int l_S_1942; memset(&l_S_1942, 0, sizeof l_S_1942);
l_S_1942 = (l_SM_1941).f_V;
rt_int l_SR_1943; memset(&l_SR_1943, 0, sizeof l_SR_1943);
l_SR_1943 = r_MAX_INT(l_S1_1934, l_S2_1935);
if ((!(l_SM_1941).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the scale of a scaled operator must be manifest (3.2.4.4)", 57));
}
if (r_TEQS(p_OP, rt_str("*", 1)))
{
{ R26 rv1944 = r_MKET(r_FMT4(rt_str("rt_b_mul_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_sub(rt_sub(l_S_1942, l_S1_1934), l_S2_1935)), l_RND_1936), r_INT_TYPE(l_S_1942));
return rv1944; }
}
else if (r_TEQS(p_OP, rt_str("//", 2)))
{
{ R26 rv1945 = r_MKET(r_FMT4(rt_str("rt_b_div_sc(@, @, @, @)", 23), (p_A).f_C, (p_B).f_C, r_NUM(rt_add(rt_sub(l_S_1942, l_S1_1934), l_S2_1935)), l_RND_1936), r_INT_TYPE(l_S_1942));
return rv1945; }
}
else if (r_TEQS(p_OP, rt_str("MOD", 3)))
{
{ R26 rv1946 = r_MKET(r_FMT4(rt_str("rt_b_rescale(@, @, @, @)", 24), r_FMT2(rt_str("rt_rem(@, @)", 12), (p_A).f_C, (p_B).f_C), r_NUM(l_S1_1934), r_NUM(l_S_1942), l_RND_1936), r_INT_TYPE(l_S_1942));
return rv1946; }
}
else if ((r_TEQS(p_OP, rt_str("+", 1)) || r_TEQS(p_OP, rt_str("-", 1))))
{
{
R9 l_SUB_1947; memset(&l_SUB_1947, 0, sizeof l_SUB_1947);
S_R9(&l_SUB_1947, r_MK(rt_str("0", 1)), 0);
if (r_TEQS(p_OP, rt_str("-", 1)))
{
S_R9(&l_SUB_1947, r_MK(rt_str("1", 1)), 0);
}
{ R26 rv1948 = r_MKET(r_CAT(r_FMT4(rt_str("rt_b_addsc(@, @, @, @, ", 23), (p_A).f_C, r_NUM(l_S1_1934), (p_B).f_C, r_NUM(l_S2_1935)), r_FMT3(rt_str("@, @, @)", 8), r_NUM(l_S_1942), l_SUB_1947, l_RND_1936)), r_INT_TYPE(l_S_1942));
return rv1948; }
}
}
}
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("there are no !MOD!, !**! or !/s! operators (3.1.4.1)", 52));
rt_raise(RT_X_INIT);
}
static R26 r_IN_EXPR(R17 * p_E) { RT_B_TICK(); 
R26 l_V_1949; memset(&l_V_1949, 0, sizeof l_V_1949);
S_R26(&l_V_1949, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_1950; memset(&l_T_1950, 0, sizeof l_T_1950);
l_T_1950 = r_REAL_TYPE((l_V_1949).f_T);
R17 * l_R_1951; memset(&l_R_1951, 0, sizeof l_R_1951);
l_R_1951 = ((*(R17 *)rt_nil_check(p_E))).f_B;
R9 l_TMP_1952; memset(&l_TMP_1952, 0, sizeof l_TMP_1952);
S_R9(&l_TMP_1952, r_NEW_NAME(rt_str("iv", 2)), 0);
R26 l_LO_1953; memset(&l_LO_1953, 0, sizeof l_LO_1953);
R26 l_HI_1954; memset(&l_HI_1954, 0, sizeof l_HI_1954);
R9 l_LOC_1955; memset(&l_LOC_1955, 0, sizeof l_LOC_1955);
R9 l_HIC_1956; memset(&l_HIC_1956, 0, sizeof l_HIC_1956);
R9 l_LO_OP_1957; memset(&l_LO_OP_1957, 0, sizeof l_LO_OP_1957);
S_R9(&l_LO_OP_1957, r_MK(rt_str("<=", 2)), 0);
R9 l_HI_OP_1958; memset(&l_HI_OP_1958, 0, sizeof l_HI_OP_1958);
S_R9(&l_HI_OP_1958, r_MK(rt_str("<=", 2)), 0);
S_R26(&l_LO_1953, r_EXPR(((*(R17 *)rt_nil_check(l_R_1951))).f_A, l_T_1950), 0);
S_R26(&l_HI_1954, r_EXPR(((*(R17 *)rt_nil_check(l_R_1951))).f_B, l_T_1950), 0);
if ((((*(R22 *)rt_nil_check(l_T_1950))).f_KIND == g_T_XFIX))
{
{ R26 rv1959 = r_MKET(r_FMT3(rt_str("({ rstr @ = @; !@; })", 21), l_TMP_1952, (l_V_1949).f_C, r_XFIX_OUTSIDE(l_T_1950, l_TMP_1952, r_XFIX_VALUE(l_T_1950, l_LO_1953, ((*(R17 *)rt_nil_check(p_E))).f_LINE), r_XFIX_VALUE(l_T_1950, l_HI_1954, ((*(R17 *)rt_nil_check(p_E))).f_LINE), ((*(R17 *)rt_nil_check(l_R_1951))).f_IV)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1959; }
}
if (r_IS_UNORDERED(l_T_1950))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("IN needs an ordered type (3.4.4.1)", 34));
}
if ((!((((((*(R22 *)rt_nil_check(l_T_1950))).f_KIND == g_T_INT) || (((*(R22 *)rt_nil_check(l_T_1950))).f_KIND == g_T_FLOAT)) || (((*(R22 *)rt_nil_check(l_T_1950))).f_KIND == g_T_ENUM)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("IN is for fixed, float and enumerated values", 44));
}
if (((!r_SAME_CLASS(r_REAL_TYPE((l_LO_1953).f_T), l_T_1950)) || (!r_SAME_CLASS(r_REAL_TYPE((l_HI_1954).f_T), l_T_1950))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if (((((*(R17 *)rt_nil_check(l_R_1951))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_R_1951))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LO_OP_1957, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R17 *)rt_nil_check(l_R_1951))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HI_OP_1958, r_MK(rt_str("<", 1)), 0);
}
if ((((*(R22 *)rt_nil_check(l_T_1950))).f_KIND == g_T_INT))
{
{
R26 l_X_1960; memset(&l_X_1960, 0, sizeof l_X_1960);
S_R26(&l_X_1960, r_MKET(l_TMP_1952, (l_V_1949).f_T), 0);
S_R9(&l_LOC_1955, r_FIXED_COMPARE(l_LO_1953, l_X_1960, l_LO_OP_1957), 0);
S_R9(&l_HIC_1956, r_FIXED_COMPARE(l_X_1960, l_HI_1954, l_HI_OP_1958), 0);
}
}
else if ((((*(R22 *)rt_nil_check(l_T_1950))).f_KIND == g_T_FLOAT))
{
S_R9(&l_LOC_1955, r_FLOAT_COMPARE(l_LO_1953, r_MKET(l_TMP_1952, (l_V_1949).f_T), l_LO_OP_1957), 0);
S_R9(&l_HIC_1956, r_FLOAT_COMPARE(r_MKET(l_TMP_1952, (l_V_1949).f_T), l_HI_1954, l_HI_OP_1958), 0);
}
else
{
S_R9(&l_LOC_1955, r_FMT3(rt_str("(@ @ @)", 7), (l_LO_1953).f_C, l_LO_OP_1957, l_TMP_1952), 0);
S_R9(&l_HIC_1956, r_FMT3(rt_str("(@ @ @)", 7), l_TMP_1952, l_HI_OP_1958, (l_HI_1954).f_C), 0);
}
{ R26 rv1961 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; @ && ", 17), r_CTYPE(l_T_1950), l_TMP_1952, (l_V_1949).f_C, l_LOC_1955), r_FMT1(rt_str("@; })", 5), l_HIC_1956)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv1961; }
rt_raise(RT_X_INIT);
}
static R9 r_CONVERT_TO_SCALE(R26 p_V, R22 * p_T, rt_int p_LINE) { RT_B_TICK(); 
if ((!r_SAME_CLASS(r_REAL_TYPE((p_V).f_T), p_T)))
{
r_FAIL(p_LINE, rt_str("the bounds of the range are not of the type of the value", 56));
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_INT))
{
{ R9 rv1962 = r_RESCALE_C((p_V).f_C, ((*(R22 *)rt_nil_check((p_V).f_T))).f_SCALE, ((*(R22 *)rt_nil_check(p_T))).f_SCALE);
return rv1962; }
}
{ R9 rv1963 = (p_V).f_C;
return rv1963; }
rt_raise(RT_X_INIT);
}
static R26 r_INT_ET(rt_int p_V) { RT_B_TICK(); 
{ R26 rv1964 = r_MKET(r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(p_V)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv1964; }
rt_raise(RT_X_INIT);
}
static rt_int r_BITS_FOR(rt_int p_N) { RT_B_TICK(); 
rt_int l_B_1965; memset(&l_B_1965, 0, sizeof l_B_1965);
l_B_1965 = ((rt_int)0LL);
rt_int l_P_1966; memset(&l_P_1966, 0, sizeof l_P_1966);
l_P_1966 = ((rt_int)1LL);
for (;;) {
if ((l_P_1966 >= p_N)) goto L_end1967;
{
l_B_1965 = rt_add(l_B_1965, ((rt_int)1LL));
l_P_1966 = rt_mul(l_P_1966, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1967: ;
{ rt_int rv1968 = l_B_1965;
return rv1968; }
rt_raise(RT_X_INIT);
}
static rt_int r_ENUM_SIZE(R22 * p_T) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{
R25 l_M_1969; memset(&l_M_1969, 0, sizeof l_M_1969);
S_R25(&l_M_1969, r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A), 0);
if ((l_M_1969).f_OK)
{
{ rt_int rv1970 = (l_M_1969).f_V;
return rv1970; }
}
}
}
}
{ rt_int rv1971 = r_BITS_FOR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS);
return rv1971; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKING_OF(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_1972; memset(&l_K_1972, 0, sizeof l_K_1972);
l_K_1972 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
rt_int l_MODE_1973; memset(&l_MODE_1973, 0, sizeof l_MODE_1973);
l_MODE_1973 = ((rt_int)2LL);
if ((l_K_1972 == g_T_STR))
{
l_MODE_1973 = ((rt_int)1LL);
}
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_KIND == g_N_REP) && (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL))))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_KIND == g_N_ENUMLIT)))
{
{
rt_int l_P_1974; memset(&l_P_1974, 0, sizeof l_P_1974);
l_P_1974 = r_PACKING_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A))).f_NAME);
if ((l_P_1974 >= ((rt_int)0LL)))
{
l_MODE_1973 = l_P_1974;
}
}
}
}
}
{ rt_int rv1975 = l_MODE_1973;
return rv1975; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKING_VALUE(R9 p_NAME) { RT_B_TICK(); 
if (r_TEQS(p_NAME, rt_str("DENSE", 5)))
{
{ rt_int rv1976 = ((rt_int)0LL);
return rv1976; }
}
else if (r_TEQS(p_NAME, rt_str("PACKED", 6)))
{
{ rt_int rv1977 = ((rt_int)1LL);
return rv1977; }
}
else if (r_TEQS(p_NAME, rt_str("UNPACKED", 8)))
{
{ rt_int rv1978 = ((rt_int)2LL);
return rv1978; }
}
{ rt_int rv1979 = rt_neg(((rt_int)1LL));
return rv1979; }
rt_raise(RT_X_INIT);
}
static R26 r_PACKING_LITERAL(rt_int p_MODE, rt_int p_LINE) { RT_B_TICK(); 
if ((p_MODE == ((rt_int)0LL)))
{
{ R26 rv1980 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("DENSE", 5), p_LINE), NULL);
return rv1980; }
}
else if ((p_MODE == ((rt_int)1LL)))
{
{ R26 rv1981 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("PACKED", 6), p_LINE), NULL);
return rv1981; }
}
{ R26 rv1982 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNPACKED", 8), p_LINE), NULL);
return rv1982; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACK_SLOT(rt_int p_ES, rt_int p_MODE) { RT_B_TICK(); 
rt_int l_U_1983; memset(&l_U_1983, 0, sizeof l_U_1983);
l_U_1983 = ((rt_int)8LL);
if ((p_ES <= ((rt_int)0LL)))
{
if ((p_MODE == ((rt_int)0LL)))
{
{ rt_int rv1984 = ((rt_int)0LL);
return rv1984; }
}
{ rt_int rv1985 = ((rt_int)8LL);
return rv1985; }
}
if ((p_MODE == ((rt_int)0LL)))
{
{ rt_int rv1986 = p_ES;
return rv1986; }
}
if (((p_MODE == ((rt_int)1LL)) && (p_ES <= ((*(R7 *)rt_nil_check(g_W))).f_WORD)))
{
for (;;) {
if ((l_U_1983 >= p_ES)) goto L_end1987;
{
l_U_1983 = rt_mul(l_U_1983, ((rt_int)2LL));
}
RT_B_TICK();
} L_end1987: ;
{ rt_int rv1988 = l_U_1983;
return rv1988; }
}
{ rt_int rv1989 = rt_mul((rt_quot((rt_sub(rt_add(p_ES, ((*(R7 *)rt_nil_check(g_W))).f_WORD), ((rt_int)1LL))), ((*(R7 *)rt_nil_check(g_W))).f_WORD)), ((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv1989; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_MIN_C(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1990 = r_MK(rt_str("INT64_MIN", 9));
return rv1990; }
}
{ R9 rv1991 = r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(rt_neg(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))))));
return rv1991; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_MAX_C(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1992 = r_MK(rt_str("INT64_MAX", 9));
return rv1992; }
}
{ R9 rv1993 = r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM(rt_sub(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))), ((rt_int)1LL))));
return rv1993; }
rt_raise(RT_X_INIT);
}
static rt_int r_STD_MIN(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ rt_int rv1994 = rt_sub(rt_neg(INT64_MAX), ((rt_int)1LL));
return rv1994; }
}
{ rt_int rv1995 = rt_neg(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))));
return rv1995; }
rt_raise(RT_X_INIT);
}
static rt_int r_STD_MAX(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ rt_int rv1996 = INT64_MAX;
return rv1996; }
}
{ rt_int rv1997 = rt_sub(r_POW2(rt_sub(((*(R7 *)rt_nil_check(g_W))).f_WORD, ((rt_int)1LL))), ((rt_int)1LL));
return rv1997; }
rt_raise(RT_X_INIT);
}
static R9 r_STD_CHECK(R9 p_C) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)64LL)))
{
{ R9 rv1998 = p_C;
return rv1998; }
}
{ R9 rv1999 = r_FMT1(rt_str("rt_b_std(@)", 11), p_C);
return rv1999; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACK_SIZE(rt_int p_N, rt_int p_ES, rt_int p_MODE) { RT_B_TICK(); 
if ((p_N <= ((rt_int)0LL)))
{
{ rt_int rv2000 = ((rt_int)0LL);
return rv2000; }
}
{ rt_int rv2001 = rt_mul(p_N, r_PACK_SLOT(p_ES, p_MODE));
return rv2001; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHAR_SIZE(R22 * p_T) { RT_B_TICK(); 
{ rt_int rv2002 = r_ENUM_SIZE(r_CHARSET_OF(p_T));
return rv2002; }
rt_raise(RT_X_INIT);
}
static R9 r_CHAR_REPS(R22 * p_T) { RT_B_TICK(); 
R22 * l_C_2003; memset(&l_C_2003, 0, sizeof l_C_2003);
l_C_2003 = r_CHARSET_OF(p_T);
if ((!(((*(R22 *)rt_nil_check(l_C_2003))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_2003))).f_REPS))).f_B == NULL)))
{
{ R9 rv2004 = r_REP_TABLE(l_C_2003);
return rv2004; }
}
}
{ R9 rv2005 = r_FMT1(rt_str("NULL, @", 7), r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_C_2003))).f_BASE))).f_NLITS));
return rv2005; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_LENGTH(void) { RT_B_TICK(); 
{ rt_int rv2006 = ((rt_int)100000000LL);
return rv2006; }
rt_raise(RT_X_INIT);
}
static rt_int r_MAX_FLOAT_PRECISION(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
{ rt_int rv2007 = ((rt_int)16LL);
return rv2007; }
}
{ rt_int rv2008 = ((rt_int)15LL);
return rv2008; }
rt_raise(RT_X_INIT);
}
static rt_int r_IMP_PRECISION_OF(rt_int p_P) { RT_B_TICK(); 
if ((p_P <= ((rt_int)7LL)))
{
{ rt_int rv2009 = ((rt_int)7LL);
return rv2009; }
}
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
{ rt_int rv2010 = ((rt_int)16LL);
return rv2010; }
}
{ rt_int rv2011 = ((rt_int)15LL);
return rv2011; }
rt_raise(RT_X_INIT);
}
static rt_int r_FLOAT_FORMAT(rt_int p_P, R9 p_NAME) { RT_B_TICK(); 
rt_int l_SINGLE_2012; memset(&l_SINGLE_2012, 0, sizeof l_SINGLE_2012);
l_SINGLE_2012 = (r_IMP_PRECISION_OF(p_P) == ((rt_int)7LL));
if ((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)))
{
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
{ rt_int rv2013 = rt_neg(((rt_int)127LL));
return rv2013; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
{ rt_int rv2014 = ((rt_int)127LL);
return rv2014; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
{ rt_int rv2015 = ((rt_int)8LL);
return rv2015; }
}
else if ((r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)) && (!l_SINGLE_2012)))
{
{ rt_int rv2016 = ((rt_int)57LL);
return rv2016; }
}
}
if (r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)))
{
if (l_SINGLE_2012)
{
{ rt_int rv2017 = rt_neg(((rt_int)125LL));
return rv2017; }
}
{ rt_int rv2018 = rt_neg(((rt_int)1021LL));
return rv2018; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12)))
{
if (l_SINGLE_2012)
{
{ rt_int rv2019 = ((rt_int)128LL);
return rv2019; }
}
{ rt_int rv2020 = ((rt_int)1024LL);
return rv2020; }
}
else if (r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13)))
{
if (l_SINGLE_2012)
{
{ rt_int rv2021 = ((rt_int)25LL);
return rv2021; }
}
{ rt_int rv2022 = ((rt_int)54LL);
return rv2022; }
}
else if (r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13)))
{
if (l_SINGLE_2012)
{
{ rt_int rv2023 = ((rt_int)8LL);
return rv2023; }
}
{ rt_int rv2024 = ((rt_int)11LL);
return rv2024; }
}
else if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
if (l_SINGLE_2012)
{
{ rt_int rv2025 = ((rt_int)32LL);
return rv2025; }
}
{ rt_int rv2026 = ((rt_int)64LL);
return rv2026; }
}
{ rt_int rv2027 = ((rt_int)0LL);
return rv2027; }
rt_raise(RT_X_INIT);
}
static R25 r_STATIC_SIZE(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_2028; memset(&l_K_2028, 0, sizeof l_K_2028);
l_K_2028 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_2028 == g_T_ABS))
{
{ R25 rv2029 = r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_BASE);
return rv2029; }
}
else if ((l_K_2028 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R25 rv2030 = r_MANIFEST(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A);
return rv2030; }
}
}
{ R25 rv2031 = r_SOME(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv2031; }
}
else if ((l_K_2028 == g_T_FLOAT))
{
{ R25 rv2032 = r_SOME(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv2032; }
}
else if ((l_K_2028 == g_T_XFIX))
{
{ R25 rv2033 = r_SOME(r_XFIX_SIZE(p_T));
return rv2033; }
}
else if ((l_K_2028 == g_T_BOOL))
{
{ R25 rv2034 = r_SOME(((rt_int)1LL));
return rv2034; }
}
else if ((l_K_2028 == g_T_ENUM))
{
{ R25 rv2035 = r_SOME(r_ENUM_SIZE(p_T));
return rv2035; }
}
else if ((l_K_2028 == g_T_BITS))
{
{ R25 rv2036 = ((*(R22 *)rt_nil_check(p_T))).f_MLEN;
return rv2036; }
}
else if ((l_K_2028 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R25 rv2037 = r_SOME(r_PACK_SIZE((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_V, r_CHAR_SIZE(p_T), r_PACKING_OF(p_T)));
return rv2037; }
}
}
else if (((l_K_2028 == g_T_PTR) || (l_K_2028 == g_T_SEM)))
{
{ R25 rv2038 = r_SOME(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv2038; }
}
else if ((l_K_2028 == g_T_ARR))
{
{
R25 l_ES_2039; memset(&l_ES_2039, 0, sizeof l_ES_2039);
S_R25(&l_ES_2039, r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM), 0);
rt_int l_N_2040; memset(&l_N_2040, 0, sizeof l_N_2040);
l_N_2040 = ((rt_int)1LL);
R28 * l_B_2041; memset(&l_B_2041, 0, sizeof l_B_2041);
l_B_2041 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
if ((!(l_ES_2039).f_OK))
{
{ R25 rv2042 = r_NO_MVAL();
return rv2042; }
}
for (;;) {
if ((l_B_2041 == NULL)) goto L_end2043;
{
if ((((!(((((*(R28 *)rt_nil_check(l_B_2041))).f_MLO).f_OK && (((*(R28 *)rt_nil_check(l_B_2041))).f_MHI).f_OK))) || r_IS_GEN_TEXT(((*(R28 *)rt_nil_check(l_B_2041))).f_LO)) || r_IS_GEN_TEXT(((*(R28 *)rt_nil_check(l_B_2041))).f_HI)))
{
{ R25 rv2044 = r_NO_MVAL();
return rv2044; }
}
l_N_2040 = rt_mul(l_N_2040, r_MAX_INT(rt_add(rt_sub((((*(R28 *)rt_nil_check(l_B_2041))).f_MHI).f_V, (((*(R28 *)rt_nil_check(l_B_2041))).f_MLO).f_V), ((rt_int)1LL)), ((rt_int)0LL)));
l_B_2041 = ((*(R28 *)rt_nil_check(l_B_2041))).f_NEXT;
}
RT_B_TICK();
} L_end2043: ;
{ R25 rv2045 = r_SOME(r_PACK_SIZE(l_N_2040, (l_ES_2039).f_V, r_PACKING_OF(p_T)));
return rv2045; }
}
}
{ R25 rv2046 = r_NO_MVAL();
return rv2046; }
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE(R26 p_B, R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_2047; memset(&l_T_2047, 0, sizeof l_T_2047);
l_T_2047 = (p_B).f_T;
rt_int l_K_2048; memset(&l_K_2048, 0, sizeof l_K_2048);
l_K_2048 = ((*(R22 *)rt_nil_check(l_T_2047))).f_KIND;
if (r_TEQS(p_NAME, rt_str("SIZE", 4)))
{
{ R26 rv2049 = r_SIZE_OF(l_T_2047, (p_B).f_C);
return rv2049; }
}
if ((l_K_2048 == g_T_INT))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv2050 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_2047))).f_SCALE);
return rv2050; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv2051 = r_INT_ET(((rt_int)2LL));
return rv2051; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv2052 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("STD", 3), p_LINE), NULL);
return rv2052; }
}
else if (r_TEQS(p_NAME, rt_str("SIGNING", 7)))
{
if ((!(((*(R22 *)rt_nil_check(l_T_2047))).f_REPS == NULL)))
{
if ((r_TEQS(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2047))).f_REPS))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2047))).f_REPS))).f_A == NULL))))
{
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2047))).f_REPS))).f_A))).f_NEXT == NULL)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2047))).f_REPS))).f_A))).f_NEXT))).f_NAME, rt_str("UNSIGNED", 8)))
{
{ R26 rv2053 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("UNSIGNED", 8), p_LINE), NULL);
return rv2053; }
}
}
}
}
{ R26 rv2054 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SIGNED", 6), p_LINE), NULL);
return rv2054; }
}
else if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_2047))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2055 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_2047))).f_LO_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_2047))).f_SCALE));
return rv2055; }
}
{ R26 rv2056 = r_MKET(r_STD_MIN_C(), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_2047))).f_SCALE));
return rv2056; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_2047))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2057 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_2047))).f_HI_C, (p_B).f_SELF), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_2047))).f_SCALE));
return rv2057; }
}
{ R26 rv2058 = r_MKET(r_STD_MAX_C(), r_INT_TYPE(((*(R22 *)rt_nil_check(l_T_2047))).f_SCALE));
return rv2058; }
}
}
else if ((l_K_2048 == g_T_XFIX))
{
if (r_TEQS(p_NAME, rt_str("SCALE", 5)))
{
{ R26 rv2059 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_2047))).f_SCALE);
return rv2059; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv2060 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_2047))).f_RADIX);
return rv2060; }
}
else if (r_TEQS(p_NAME, rt_str("PRECISION", 9)))
{
{ R26 rv2061 = r_ENUM_LITERAL(r_LIT_NODE_T(r_PRECISION_NAME(((*(R22 *)rt_nil_check(l_T_2047))).f_PREC), p_LINE), r_PRECISIONS_TYPE());
return rv2061; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) && ((((*(R22 *)rt_nil_check(l_T_2047))).f_LO_C).f_LEN > ((rt_int)0LL))))
{
{ R26 rv2062 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_2047))).f_LO_C, (p_B).f_SELF), r_XFIX_BASE(l_T_2047));
return rv2062; }
}
else if ((r_TEQS(p_NAME, rt_str("MAX", 3)) && ((((*(R22 *)rt_nil_check(l_T_2047))).f_HI_C).f_LEN > ((rt_int)0LL))))
{
{ R26 rv2063 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_2047))).f_HI_C, (p_B).f_SELF), r_XFIX_BASE(l_T_2047));
return rv2063; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) || r_TEQS(p_NAME, rt_str("MAX", 3))))
{
{
R29 * l_ARGS_2064; memset(&l_ARGS_2064, 0, sizeof l_ARGS_2064);
l_ARGS_2064 = r_VAL_ARG(r_INT_ET(((*(R22 *)rt_nil_check(l_T_2047))).f_SCALE), r_VAL_ARG(r_INT_ET(((*(R22 *)rt_nil_check(l_T_2047))).f_RADIX), r_VAL_ARG(r_ENUM_LITERAL(r_LIT_NODE_T(r_PRECISION_NAME(((*(R22 *)rt_nil_check(l_T_2047))).f_PREC), p_LINE), r_PRECISIONS_TYPE()), NULL)));
R12 * l_Y_2065; memset(&l_Y_2065, 0, sizeof l_Y_2065);
l_Y_2065 = r_FIND_ROUTINE(r_QMKN(rt_str("FIXED_", 6), p_NAME), l_ARGS_2064, p_LINE, 0);
if ((l_Y_2065 == NULL))
{
r_FAILT(p_LINE, rt_str("the program defines no FIXED_MIN and FIXED_MAX for ", 51), r_TYPE_NAME(l_T_2047));
}
{ R26 rv2066 = r_CALL_SYM(l_Y_2065, l_ARGS_2064, p_LINE);
return rv2066; }
}
}
}
else if ((l_K_2048 == g_T_FLOAT))
{
if (r_TEQS(p_NAME, rt_str("NOM_PRECISION", 13)))
{
{ R26 rv2067 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_2047))).f_SCALE);
return rv2067; }
}
else if (r_TEQS(p_NAME, rt_str("IMP_PRECISION", 13)))
{
{ R26 rv2068 = r_INT_ET(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_2047))).f_SCALE));
return rv2068; }
}
else if (r_TEQS(p_NAME, rt_str("RADIX", 5)))
{
{ R26 rv2069 = r_INT_ET(((rt_int)2LL));
return rv2069; }
}
else if ((((r_TEQS(p_NAME, rt_str("EXPONENT_MIN", 12)) || r_TEQS(p_NAME, rt_str("EXPONENT_MAX", 12))) || r_TEQS(p_NAME, rt_str("MANTISSA_SIZE", 13))) || r_TEQS(p_NAME, rt_str("EXPONENT_SIZE", 13))))
{
{ R26 rv2070 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(l_T_2047))).f_SCALE, p_NAME));
return rv2070; }
}
else if ((r_TEQS(p_NAME, rt_str("MIN", 3)) || r_TEQS(p_NAME, rt_str("MAX", 3))))
{
{
R22 * l_MT_2071; memset(&l_MT_2071, 0, sizeof l_MT_2071);
l_MT_2071 = r_FLOAT_TYPE(r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_2047))).f_SCALE));
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_2047))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2072 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_2047))).f_LO_C, (p_B).f_SELF), l_MT_2071);
return rv2072; }
}
{ R26 rv2073 = r_MKET(r_FLOAT_LIMIT(l_MT_2071, p_NAME), l_MT_2071);
return rv2073; }
}
if (((((*(R22 *)rt_nil_check(l_T_2047))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2074 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_2047))).f_HI_C, (p_B).f_SELF), l_MT_2071);
return rv2074; }
}
{ R26 rv2075 = r_MKET(r_FLOAT_LIMIT(l_MT_2071, p_NAME), l_MT_2071);
return rv2075; }
}
}
}
else if ((l_K_2048 == g_T_ENUM))
{
if (r_TEQS(p_NAME, rt_str("MIN", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_2047))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2076 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_2047))).f_LO_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_2047))).f_BASE);
return rv2076; }
}
{ R26 rv2077 = r_MKET(r_MK(rt_str("0", 1)), ((*(R22 *)rt_nil_check(l_T_2047))).f_BASE);
return rv2077; }
}
else if (r_TEQS(p_NAME, rt_str("MAX", 3)))
{
if (((((*(R22 *)rt_nil_check(l_T_2047))).f_HI_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2078 = r_MKET(r_SUBST_SELF(((*(R22 *)rt_nil_check(l_T_2047))).f_HI_C, (p_B).f_SELF), ((*(R22 *)rt_nil_check(l_T_2047))).f_BASE);
return rv2078; }
}
{ R26 rv2079 = r_MKET(r_NUM(rt_sub(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2047))).f_BASE))).f_NLITS, ((rt_int)1LL))), ((*(R22 *)rt_nil_check(l_T_2047))).f_BASE);
return rv2079; }
}
else if (r_TEQS(p_NAME, rt_str("EXTENT", 6)))
{
if (((((*(R22 *)rt_nil_check(l_T_2047))).f_LO_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2080 = r_MKET(r_SUBST_SELF(r_FMT4(rt_str("((@) >= (@) \? (@) - (@) + 1 : 0)", 32), ((*(R22 *)rt_nil_check(l_T_2047))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_2047))).f_LO_C, ((*(R22 *)rt_nil_check(l_T_2047))).f_HI_C, ((*(R22 *)rt_nil_check(l_T_2047))).f_LO_C), (p_B).f_SELF), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2080; }
}
{ R26 rv2081 = r_INT_ET(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2047))).f_BASE))).f_NLITS);
return rv2081; }
}
}
else if (((l_K_2048 == g_T_STR) || (l_K_2048 == g_T_BITS)))
{
if (r_TEQS(p_NAME, rt_str("LENGTH", 6)))
{
{ R26 rv2082 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), (p_B).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2082; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv2083 = r_PACKING_LITERAL(r_PACKING_OF(l_T_2047), p_LINE);
return rv2083; }
}
}
else if ((l_K_2048 == g_T_ARR))
{
if (r_TEQS(p_NAME, rt_str("DIMENSIONS", 10)))
{
{ R26 rv2084 = r_INT_ET(((*(R22 *)rt_nil_check(l_T_2047))).f_DIMS);
return rv2084; }
}
else if ((r_TEQS(p_NAME, rt_str("EXTENT", 6)) || r_TEQS(p_NAME, rt_str("BOUNDS", 6))))
{
{ R26 rv2085 = r_ARRAY_SHAPE(p_B, p_NAME);
return rv2085; }
}
else if (r_TEQS(p_NAME, rt_str("PACKING", 7)))
{
{ R26 rv2086 = r_PACKING_LITERAL(r_PACKING_OF(l_T_2047), p_LINE);
return rv2086; }
}
}
else if ((l_K_2048 == g_T_SEM))
{
if (r_TEQS(p_NAME, rt_str("USAGE", 5)))
{
if ((((*(R22 *)rt_nil_check(l_T_2047))).f_SCALE == ((rt_int)1LL)))
{
{ R26 rv2087 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("REGION", 6), p_LINE), NULL);
return rv2087; }
}
{ R26 rv2088 = r_ENUM_LITERAL(r_LIT_NODE(rt_str("SYNCH", 5), p_LINE), NULL);
return rv2088; }
}
}
else if (((l_K_2048 == g_T_ABS) || (l_K_2048 == g_T_REC)))
{
{
R22 * l_U_2089; memset(&l_U_2089, 0, sizeof l_U_2089);
l_U_2089 = l_T_2047;
if ((l_K_2048 == g_T_ABS))
{
l_U_2089 = ((*(R22 *)rt_nil_check(l_T_2047))).f_BASE;
}
if ((((*(R22 *)rt_nil_check(l_U_2089))).f_KIND == g_T_REC))
{
{
R27 * l_F_2090; memset(&l_F_2090, 0, sizeof l_F_2090);
l_F_2090 = r_FIND_FIELD(l_U_2089, p_NAME);
if ((!(l_F_2090 == NULL)))
{
if ((!(((*(R27 *)rt_nil_check(l_F_2090))).f_KIND == ((rt_int)0LL))))
{
{ R26 rv2091 = r_MKET(r_FMT2(rt_str("(@).@", 5), (p_B).f_C, ((*(R27 *)rt_nil_check(l_F_2090))).f_CNAME), ((*(R27 *)rt_nil_check(l_F_2090))).f_T);
return rv2091; }
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
R22 * l_T_2092; memset(&l_T_2092, 0, sizeof l_T_2092);
l_T_2092 = r_REAL_TYPE((p_B).f_T);
R9 l_D_2093; memset(&l_D_2093, 0, sizeof l_D_2093);
S_R9(&l_D_2093, r_NUM(((*(R22 *)rt_nil_check(l_T_2092))).f_DIMS), 0);
R9 l_X_2094; memset(&l_X_2094, 0, sizeof l_X_2094);
S_R9(&l_X_2094, r_NEW_NAME(rt_str("sx", 2)), 0);
R9 l_R_2095; memset(&l_R_2095, 0, sizeof l_R_2095);
S_R9(&l_R_2095, r_NEW_NAME(rt_str("sr", 2)), 0);
R22 * l_ELEM_2096; memset(&l_ELEM_2096, 0, sizeof l_ELEM_2096);
l_ELEM_2096 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
R9 l_C_2097; memset(&l_C_2097, 0, sizeof l_C_2097);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
{
R17 * l_TS_2098; memset(&l_TS_2098, 0, sizeof l_TS_2098);
l_TS_2098 = r_NEW_NODE(g_TS_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_TS_2098))).f_NAME, r_MKN(rt_str("BOUNDS_DEF", 10)), 0);
((*(R17 *)rt_nil_check(l_TS_2098))).f_A = r_NEW_NODE(g_N_NAME, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_TS_2098))).f_A))).f_NAME, r_MKN(rt_str("STD", 3)), 0);
l_ELEM_2096 = r_RESOLVE(l_TS_2098);
}
}
{
R22 * l_A_2099; memset(&l_A_2099, 0, sizeof l_A_2099);
l_A_2099 = r_ARRAY_OF(l_ELEM_2096, ((rt_int)1LL));
S_R9(&l_C_2097, r_FMT4(rt_str("({ @ @ = @; @ ", 14), r_CTYPE(l_T_2092), l_X_2094, (p_B).f_C, ((*(R22 *)rt_nil_check(l_A_2099))).f_CNAME), 0);
S_R9(&l_C_2097, r_FMT4(rt_str("@@; memset(&@, 0, sizeof @);", 28), l_C_2097, l_R_2095, l_R_2095, l_R_2095), 0);
S_R9(&l_C_2097, r_FMT4(rt_str("@ @.lo[0] = 0; @.hi[0] = @ - 1;", 31), l_C_2097, l_R_2095, l_R_2095, l_D_2093), 0);
S_R9(&l_C_2097, r_FMT4(rt_str("@ @.p = rt_alloc(@ * sizeof *@.p);", 34), l_C_2097, l_R_2095, l_D_2093, l_R_2095), 0);
S_R9(&l_C_2097, r_FMT2(rt_str("@ for (int i = 0; i < @; i++) {", 31), l_C_2097, l_D_2093), 0);
if (r_TEQS(p_NAME, rt_str("BOUNDS", 6)))
{
S_R9(&l_C_2097, r_FMT2(rt_str("@ @", 3), l_C_2097, r_INIT_CODE(l_ELEM_2096, r_FMT1(rt_str("@.p[i]", 6), l_R_2095))), 0);
S_R9(&l_C_2097, r_FMT4(rt_str("@ @.p[i].f_MIN = @.lo[i]; @.p[i].f_MAX = ", 41), l_C_2097, l_R_2095, l_X_2094, l_R_2095), 0);
S_R9(&l_C_2097, r_FMT2(rt_str("@@.hi[i]; }", 11), l_C_2097, l_X_2094), 0);
}
else
{
S_R9(&l_C_2097, r_FMT4(rt_str("@ @.p[i] = @.hi[i] >= @.lo[i] \? ", 32), l_C_2097, l_R_2095, l_X_2094, l_X_2094), 0);
S_R9(&l_C_2097, r_FMT4(rt_str("@@.hi[i] - @.lo[i] + 1 : 0; }", 29), l_C_2097, l_X_2094, l_X_2094, l_X_2094), 0);
}
{ R26 rv2100 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_C_2097, l_R_2095), l_A_2099);
return rv2100; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_LIT_NODE_T(R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
{ R17 * rv2101 = r_LIT_NODE(r_STR(p_NAME, (p_NAME).f_LEN), p_LINE);
return rv2101; }
rt_raise(RT_X_INIT);
}
static R17 * r_LIT_NODE(rstr p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_N_2102; memset(&l_N_2102, 0, sizeof l_N_2102);
l_N_2102 = r_NEW_NODE(g_N_ENUMLIT, p_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_2102))).f_NAME, r_MKN(p_NAME), 0);
{ R17 * rv2103 = l_N_2102;
return rv2103; }
rt_raise(RT_X_INIT);
}
static R26 r_SIZE_OF(R22 * p_T, R9 p_C) { RT_B_TICK(); 
rt_int l_K_2104; memset(&l_K_2104, 0, sizeof l_K_2104);
l_K_2104 = ((*(R22 *)rt_nil_check(p_T))).f_KIND;
if ((l_K_2104 == g_T_XFIX))
{
{ R26 rv2105 = r_INT_ET(r_XFIX_SIZE(p_T));
return rv2105; }
}
else if ((l_K_2104 == g_T_INT))
{
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A == NULL)))
{
{ R26 rv2106 = r_MKET((r_EXPR(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_A, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT)).f_C, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2106; }
}
}
{ R26 rv2107 = r_INT_ET(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv2107; }
}
else if ((l_K_2104 == g_T_FLOAT))
{
{ R26 rv2108 = r_INT_ET(r_FLOAT_FORMAT(((*(R22 *)rt_nil_check(p_T))).f_SCALE, r_MK(rt_str("SIZE", 4))));
return rv2108; }
}
else if ((l_K_2104 == g_T_BOOL))
{
{ R26 rv2109 = r_INT_ET(((rt_int)1LL));
return rv2109; }
}
else if ((l_K_2104 == g_T_ENUM))
{
{ R26 rv2110 = r_INT_ET(r_ENUM_SIZE(p_T));
return rv2110; }
}
else if ((l_K_2104 == g_T_BITS))
{
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2111 = r_MKET(r_FMT1(rt_str("(rt_int)(@)", 11), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2111; }
}
{ R26 rv2112 = r_MKET(r_FMT1(rt_str("(rt_int)(@).len", 15), p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2112; }
}
else if ((l_K_2104 == g_T_STR))
{
if ((((*(R22 *)rt_nil_check(p_T))).f_MLEN).f_OK)
{
{ R26 rv2113 = r_INT_ET((r_STATIC_SIZE(p_T)).f_V);
return rv2113; }
}
if (((((*(R22 *)rt_nil_check(p_T))).f_LEN_C).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2114 = r_MKET(r_FMT3(rt_str("rt_b_pack_size(@, @, @)", 23), ((*(R22 *)rt_nil_check(p_T))).f_LEN_C, r_NUM(r_CHAR_SIZE(p_T)), r_NUM(r_PACKING_OF(p_T))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2114; }
}
{ R26 rv2115 = r_MKET(r_FMT3(rt_str("rt_b_pack_size((@).len, @, @)", 29), p_C, r_NUM(r_CHAR_SIZE(p_T)), r_NUM(r_PACKING_OF(p_T))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2115; }
}
else if (((l_K_2104 == g_T_PTR) || (l_K_2104 == g_T_SEM)))
{
{ R26 rv2116 = r_INT_ET(((*(R7 *)rt_nil_check(g_W))).f_WORD);
return rv2116; }
}
else if ((l_K_2104 == g_T_ABS))
{
{ R26 rv2117 = r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_BASE, p_C);
return rv2117; }
}
else if ((l_K_2104 == g_T_REC))
{
{ R26 rv2118 = r_MKET(r_RECORD_SIZE(p_T, p_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2118; }
}
else if ((l_K_2104 == g_T_ARR))
{
{
R25 l_ES_2119; memset(&l_ES_2119, 0, sizeof l_ES_2119);
S_R25(&l_ES_2119, r_STATIC_SIZE(((*(R22 *)rt_nil_check(p_T))).f_ELEM), 0);
if ((l_ES_2119).f_OK)
{
{ R26 rv2120 = r_MKET(r_CAT(r_FMT3(rt_str("rt_b_pack_size(rt_b_extent(@, (@).lo, (@).hi), ", 47), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), p_C, p_C), r_FMT2(rt_str("@, @)", 5), r_NUM((l_ES_2119).f_V), r_NUM(r_PACKING_OF(p_T)))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2120; }
}
}
{
R9 l_A_2121; memset(&l_A_2121, 0, sizeof l_A_2121);
S_R9(&l_A_2121, r_NEW_NAME(rt_str("sa", 2)), 0);
R26 l_ES_2122; memset(&l_ES_2122, 0, sizeof l_ES_2122);
S_R26(&l_ES_2122, r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT1(rt_str("@.p[0]", 6), l_A_2121)), 0);
{ R26 rv2123 = r_MKET(r_CAT(r_FMT4(rt_str("({ @ @ = @; rt_int n_ = rt_b_extent(@, ", 39), r_CTYPE(p_T), l_A_2121, p_C, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS)), r_CAT(r_FMT3(rt_str("@.lo, @.hi); rt_b_pack_size(n_, n_ \? @ : 0, ", 44), l_A_2121, l_A_2121, (l_ES_2122).f_C), r_FMT1(rt_str("@); })", 6), r_NUM(r_PACKING_OF(p_T))))), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2123; }
}
}
{ R26 rv2124 = r_MKET(r_FMT1(rt_str("(rt_int)(sizeof (@) * 8)", 24), r_CTYPE(p_T)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2124; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_ATTRIBUTE(R9 p_TNAME, R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
if (r_IS_TYPE_WORD(p_TNAME))
{
r_FAILT(p_LINE, rt_str("an attribute of a type class needs a member: ", 45), p_TNAME);
}
{ R26 rv2125 = r_ATTRIBUTE(r_TYPE_VALUE(p_TNAME, p_LINE), p_NAME, p_LINE);
return rv2125; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE(R9 p_TNAME, rt_int p_LINE) { RT_B_TICK(); 
{ R26 rv2126 = r_TYPE_VALUE_OF(r_RESOLVE_USER_NAME(p_TNAME, p_LINE));
return rv2126; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_VALUE_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_2127; memset(&l_RT_2127, 0, sizeof l_RT_2127);
l_RT_2127 = r_REAL_TYPE(p_T);
if (((((*(R22 *)rt_nil_check(l_RT_2127))).f_KIND == g_T_ARR) || (((*(R22 *)rt_nil_check(l_RT_2127))).f_KIND == g_T_REC)))
{
{
R9 l_TMP_2128; memset(&l_TMP_2128, 0, sizeof l_TMP_2128);
S_R9(&l_TMP_2128, r_NEW_NAME(rt_str("tq", 2)), 0);
R9 l_C_2129; memset(&l_C_2129, 0, sizeof l_C_2129);
S_R9(&l_C_2129, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), r_CTYPE(p_T), l_TMP_2128, l_TMP_2128, l_TMP_2128), 0);
S_R9(&l_C_2129, r_FMT3(rt_str("@@ @; })", 8), l_C_2129, r_INIT_CODE(l_RT_2127, l_TMP_2128), l_TMP_2128), 0);
{ R26 rv2130 = r_MKET(l_C_2129, p_T);
return rv2130; }
}
}
{ R26 rv2131 = r_MKET(r_FMT1(rt_str("(*(@ *)0)", 9), r_CTYPE(p_T)), p_T);
return rv2131; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_TYPE_NAME(R17 * p_E) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
{ rt_int rv2132 = 0;
return rv2132; }
}
{
R12 * l_Y_2133; memset(&l_Y_2133, 0, sizeof l_Y_2133);
l_Y_2133 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_2133 == NULL))
{
{ rt_int rv2134 = 0;
return rv2134; }
}
{ rt_int rv2135 = (((*(R12 *)rt_nil_check(l_Y_2133))).f_KIND == g_Y_TYPE);
return rv2135; }
}
rt_raise(RT_X_INIT);
}
static R26 r_ATTRIBUTE_OF_ATTRIBUTE(R9 p_TNAME, R9 p_A, R9 p_B, rt_int p_LINE) { RT_B_TICK(); 
if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv2136 = r_INT_ET(((rt_int)100000000LL));
return rv2136; }
}
else if ((r_TEQS(p_A, rt_str("NOM_PRECISION", 13)) && r_TEQS(p_B, rt_str("MAX", 3))))
{
{ R26 rv2137 = r_INT_ET(((rt_int)15LL));
return rv2137; }
}
else if ((r_TEQS(p_A, rt_str("LENGTH", 6)) && r_TEQS(p_B, rt_str("MIN", 3))))
{
{ R26 rv2138 = r_INT_ET(((rt_int)0LL));
return rv2138; }
}
r_FAILT(p_LINE, rt_str("this attribute of an attribute is not implemented: ", 51), p_B);
rt_raise(RT_X_INIT);
}
static R26 r_RECORD_CONSTRUCTOR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R22 * l_T_2139; memset(&l_T_2139, 0, sizeof l_T_2139);
l_T_2139 = p_WANT;
if ((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)))
{
l_T_2139 = r_RESOLVE(((*(R17 *)rt_nil_check(p_E))).f_B);
}
if ((l_T_2139 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the type of a record constructor is unknown (3.9.2)", 51));
}
l_T_2139 = r_REAL_TYPE(l_T_2139);
if ((!(((*(R22 *)rt_nil_check(l_T_2139))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a record constructor for something not a record", 47));
}
if (r_HAS_ANY(l_T_2139))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor of a T(ANY) record needs [T(tag)]$$ (3.9.2)", 59));
}
{
R9 l_TMP_2140; memset(&l_TMP_2140, 0, sizeof l_TMP_2140);
S_R9(&l_TMP_2140, r_NEW_NAME(rt_str("rc", 2)), 0);
R9 l_R_2141; memset(&l_R_2141, 0, sizeof l_R_2141);
S_R9(&l_R_2141, r_FMT4(rt_str("({ @ @; memset(&@, 0, sizeof @); ", 33), ((*(R22 *)rt_nil_check(l_T_2139))).f_CNAME, l_TMP_2140, l_TMP_2140, l_TMP_2140), 0);
R27 * l_F_2142; memset(&l_F_2142, 0, sizeof l_F_2142);
l_F_2142 = ((*(R22 *)rt_nil_check(l_T_2139))).f_FIELDS;
S_R9(&l_R_2141, r_FMT2(rt_str("@@", 2), l_R_2141, r_INIT_CODE(l_T_2139, l_TMP_2140)), 0);
for (;;) {
if ((l_F_2142 == NULL)) goto L_end2143;
{
if ((((*(R27 *)rt_nil_check(l_F_2142))).f_KIND == ((rt_int)0LL)))
{
if ((((((*(R27 *)rt_nil_check(l_F_2142))).f_TAGF).f_LEN == ((rt_int)0LL)) || r_LABELS_HAVE(((*(R27 *)rt_nil_check(l_F_2142))).f_LABELS, (r_TAG_VALUE(l_T_2139, ((*(R27 *)rt_nil_check(l_F_2142))).f_TAGF)).f_V, ((*(R27 *)rt_nil_check(r_FIND_FIELD(l_T_2139, ((*(R27 *)rt_nil_check(l_F_2142))).f_TAGF)))).f_T)))
{
{
R17 * l_INIT_2144; memset(&l_INIT_2144, 0, sizeof l_INIT_2144);
l_INIT_2144 = r_FIND_INIT(((*(R17 *)rt_nil_check(p_E))).f_A, ((*(R27 *)rt_nil_check(l_F_2142))).f_NAME);
if ((l_INIT_2144 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the constructor must give the field ", 36), ((*(R27 *)rt_nil_check(l_F_2142))).f_NAME);
}
S_R9(&l_R_2141, r_FMT2(rt_str("@ @", 3), l_R_2141, r_STORE_CODE(((*(R27 *)rt_nil_check(l_F_2142))).f_T, r_FMT2(rt_str("@.@", 3), l_TMP_2140, ((*(R27 *)rt_nil_check(l_F_2142))).f_CNAME), r_EXPR(((*(R17 *)rt_nil_check(l_INIT_2144))).f_A, ((*(R27 *)rt_nil_check(l_F_2142))).f_T), ((*(R17 *)rt_nil_check(l_INIT_2144))).f_LINE, l_TMP_2140)), 0);
}
}
}
l_F_2142 = ((*(R27 *)rt_nil_check(l_F_2142))).f_NEXT;
}
RT_B_TICK();
} L_end2143: ;
{
R17 * l_P_2145; memset(&l_P_2145, 0, sizeof l_P_2145);
l_P_2145 = ((*(R17 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_P_2145 == NULL)) goto L_end2146;
{
{
R27 * l_G_2147; memset(&l_G_2147, 0, sizeof l_G_2147);
l_G_2147 = r_FIND_VFIELD(l_T_2139, ((*(R17 *)rt_nil_check(l_P_2145))).f_NAME);
if ((l_G_2147 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_2145))).f_LINE, rt_str("no such field: ", 15), ((*(R17 *)rt_nil_check(l_P_2145))).f_NAME);
}
if ((!(((*(R27 *)rt_nil_check(l_G_2147))).f_KIND == ((rt_int)0LL))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_2145))).f_LINE, rt_str("a parameter field comes from the type: ", 39), ((*(R17 *)rt_nil_check(l_P_2145))).f_NAME);
}
r_CHECK_VARIANT(l_G_2147, l_T_2139, NULL, ((*(R17 *)rt_nil_check(l_P_2145))).f_LINE);
}
l_P_2145 = ((*(R17 *)rt_nil_check(l_P_2145))).f_NEXT;
}
RT_B_TICK();
} L_end2146: ;
}
{ R26 rv2148 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_2141, l_TMP_2140), l_T_2139);
return rv2148; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_FIND_INIT(R17 * p_L, R9 p_NAME) { RT_B_TICK(); 
R17 * l_P_2149; memset(&l_P_2149, 0, sizeof l_P_2149);
l_P_2149 = p_L;
for (;;) {
if ((l_P_2149 == NULL)) goto L_end2150;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_2149))).f_NAME, p_NAME))
{
{ R17 * rv2151 = l_P_2149;
return rv2151; }
}
l_P_2149 = ((*(R17 *)rt_nil_check(l_P_2149))).f_NEXT;
}
RT_B_TICK();
} L_end2150: ;
{ R17 * rv2152 = NULL;
return rv2152; }
rt_raise(RT_X_INIT);
}
static R26 r_ARRAY_CONSTRUCTOR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_DIMS_2153; memset(&l_DIMS_2153, 0, sizeof l_DIMS_2153);
l_DIMS_2153 = ((rt_int)0LL);
R17 * l_P_2154; memset(&l_P_2154, 0, sizeof l_P_2154);
l_P_2154 = p_E;
R22 * l_ELEM_2155; memset(&l_ELEM_2155, 0, sizeof l_ELEM_2155);
l_ELEM_2155 = NULL;
for (;;) {
if ((!(((*(R17 *)rt_nil_check(l_P_2154))).f_KIND == g_N_ARRCONS))) goto L_end2156;
{
l_DIMS_2153 = rt_add(l_DIMS_2153, ((rt_int)1LL));
l_P_2154 = ((*(R17 *)rt_nil_check(l_P_2154))).f_A;
}
RT_B_TICK();
} L_end2156: ;
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_ARR))
{
l_ELEM_2155 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_ELEM;
}
}
if ((l_ELEM_2155 == NULL))
{
l_ELEM_2155 = (r_EXPR(l_P_2154, NULL)).f_T;
if (((((*(R22 *)rt_nil_check(l_ELEM_2155))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_ELEM_2155))).f_SCALE == ((rt_int)0LL))))
{
l_ELEM_2155 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
}
r_CHECK_SHAPE(p_E, l_DIMS_2153);
{
R22 * l_A_2157; memset(&l_A_2157, 0, sizeof l_A_2157);
l_A_2157 = r_ARRAY_OF(l_ELEM_2155, l_DIMS_2153);
R9 l_TMP_2158; memset(&l_TMP_2158, 0, sizeof l_TMP_2158);
S_R9(&l_TMP_2158, r_NEW_NAME(rt_str("ac", 2)), 0);
R9 l_R_2159; memset(&l_R_2159, 0, sizeof l_R_2159);
S_R9(&l_R_2159, r_FMT3(rt_str("({ @ @; memset(&@, 0, sizeof ", 29), ((*(R22 *)rt_nil_check(l_A_2157))).f_CNAME, l_TMP_2158, l_TMP_2158), 0);
rt_int l_K_2160; memset(&l_K_2160, 0, sizeof l_K_2160);
l_K_2160 = ((rt_int)0LL);
{
R17 * l_Q_2161; memset(&l_Q_2161, 0, sizeof l_Q_2161);
l_Q_2161 = p_E;
R28 * l_TAIL_2162; memset(&l_TAIL_2162, 0, sizeof l_TAIL_2162);
l_TAIL_2162 = NULL;
{ rt_int it2164_lo = ((rt_int)1LL), it2164_hi = l_DIMS_2153;
for (rt_int it2164 = it2164_lo; it2164 <= it2164_hi; it2164++) {
{
{
R28 * l_B_2165; memset(&l_B_2165, 0, sizeof l_B_2165);
l_B_2165 = ({ R28 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
rt_int l_N_2166; memset(&l_N_2166, 0, sizeof l_N_2166);
l_N_2166 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(l_Q_2161))).f_A);
S_R28(&(*(R28 *)rt_nil_check(l_B_2165)), ({ R28 rc2167; memset(&rc2167, 0, sizeof rc2167);  S_R9(&rc2167.f_LO, r_MK(rt_str("0", 1)), 0); S_R9(&rc2167.f_HI, r_NUM(rt_sub(l_N_2166, ((rt_int)1LL))), 0); S_R25(&rc2167.f_MLO, r_SOME(((rt_int)0LL)), 0); S_R25(&rc2167.f_MHI, r_SOME(rt_sub(l_N_2166, ((rt_int)1LL))), 0); rc2167.f_ANYARG = 0; rc2167.f_NEXT = NULL; rc2167; }), 0);
if ((l_TAIL_2162 == NULL))
{
((*(R22 *)rt_nil_check(l_A_2157))).f_BOUNDS = l_B_2165;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_2162))).f_NEXT = l_B_2165;
}
l_TAIL_2162 = l_B_2165;
}
l_Q_2161 = ((*(R17 *)rt_nil_check(l_Q_2161))).f_A;
}
RT_B_TICK();
if (it2164 == it2164_hi) break;
} } L_end2163: ;
}
S_R9(&l_R_2159, r_FMT2(rt_str("@@); ", 5), l_R_2159, l_TMP_2158), 0);
l_P_2154 = p_E;
{ rt_int it2169_lo = ((rt_int)0LL), it2169_hi = rt_sub(l_DIMS_2153, ((rt_int)1LL));
for (rt_int it2169 = it2169_lo; it2169 <= it2169_hi; it2169++) {
{
S_R9(&l_R_2159, r_FMT4(rt_str("@ @.lo[@] = 0; @.hi[", 20), l_R_2159, l_TMP_2158, r_NUM(it2169), l_TMP_2158), 0);
S_R9(&l_R_2159, r_FMT3(rt_str("@@] = @;", 8), l_R_2159, r_NUM(it2169), r_NUM(rt_sub(r_LIST_LENGTH(((*(R17 *)rt_nil_check(l_P_2154))).f_A), ((rt_int)1LL)))), 0);
l_P_2154 = ((*(R17 *)rt_nil_check(l_P_2154))).f_A;
}
RT_B_TICK();
if (it2169 == it2169_hi) break;
} } L_end2168: ;
S_R9(&l_R_2159, r_FMT4(rt_str("@ @.p = rt_alloc(sizeof *@.p * (size_t)rt_b_extent(@, ", 54), l_R_2159, l_TMP_2158, l_TMP_2158, r_NUM(l_DIMS_2153)), 0);
S_R9(&l_R_2159, r_FMT3(rt_str("@@.lo, @.hi) + 1);", 18), l_R_2159, l_TMP_2158, l_TMP_2158), 0);
r_ARRAY_ELEMENTS(p_E, l_DIMS_2153, l_A_2157, l_TMP_2158, &l_R_2159, &l_K_2160);
{ R26 rv2170 = r_MKET(r_FMT2(rt_str("@ @; })", 7), l_R_2159, l_TMP_2158), l_A_2157);
return rv2170; }
}
rt_raise(RT_X_INIT);
}
static void r_CHECK_SHAPE(R17 * p_E, rt_int p_DIMS) { RT_B_TICK(); 
R17 * l_P_2171; memset(&l_P_2171, 0, sizeof l_P_2171);
l_P_2171 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((p_DIMS <= ((rt_int)1LL)))
{
return;
}
for (;;) {
if ((l_P_2171 == NULL)) goto L_end2172;
{
if (((!(((*(R17 *)rt_nil_check(l_P_2171))).f_KIND == g_N_ARRCONS)) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_KIND == g_N_ARRCONS))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
if ((!r_SAME_SHAPE(l_P_2171, ((*(R17 *)rt_nil_check(p_E))).f_A)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape (3.8.2)", 71));
}
r_CHECK_SHAPE(l_P_2171, rt_sub(p_DIMS, ((rt_int)1LL)));
l_P_2171 = ((*(R17 *)rt_nil_check(l_P_2171))).f_NEXT;
}
RT_B_TICK();
} L_end2172: ;
}
static rt_int r_SAME_SHAPE(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
if (((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) || (!(((*(R17 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS))))
{
{ rt_int rv2173 = ((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_ARRCONS)) && (!(((*(R17 *)rt_nil_check(p_B))).f_KIND == g_N_ARRCONS)));
return rv2173; }
}
if ((!(r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_A))).f_A) == r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_B))).f_A))))
{
{ rt_int rv2174 = 0;
return rv2174; }
}
{ rt_int rv2175 = r_SAME_SHAPE(((*(R17 *)rt_nil_check(p_A))).f_A, ((*(R17 *)rt_nil_check(p_B))).f_A);
return rv2175; }
rt_raise(RT_X_INIT);
}
static void r_ARRAY_ELEMENTS(R17 * p_E, rt_int p_DIMS, R22 * p_A, R9 p_TMP, R9 *p_R, rt_int *p_K) { RT_B_TICK(); 
R17 * l_P_2176; memset(&l_P_2176, 0, sizeof l_P_2176);
l_P_2176 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
for (;;) {
if ((l_P_2176 == NULL)) goto L_end2177;
{
if ((p_DIMS > ((rt_int)1LL)))
{
r_ARRAY_ELEMENTS(l_P_2176, rt_sub(p_DIMS, ((rt_int)1LL)), p_A, p_TMP, &(*p_R), &(*p_K));
}
else
{
if ((((*(R17 *)rt_nil_check(l_P_2176))).f_KIND == g_N_ARRCONS))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2176))).f_LINE, rt_str("the components of an array constructor must have the same shape", 63));
}
if (r_NEEDS_INIT(((*(R22 *)rt_nil_check(p_A))).f_ELEM))
{
S_R9(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_INIT_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))))), 0);
}
S_R9(&(*p_R), r_FMT2(rt_str("@ @", 3), (*p_R), r_STORE_CODE(((*(R22 *)rt_nil_check(p_A))).f_ELEM, r_FMT2(rt_str("@.p[@]", 6), p_TMP, r_NUM((*p_K))), r_EXPR(l_P_2176, ((*(R22 *)rt_nil_check(p_A))).f_ELEM), ((*(R17 *)rt_nil_check(l_P_2176))).f_LINE, r_NO_TEXT())), 0);
(*p_K) = rt_add((*p_K), ((rt_int)1LL));
}
l_P_2176 = ((*(R17 *)rt_nil_check(l_P_2176))).f_NEXT;
}
RT_B_TICK();
} L_end2177: ;
}
static R22 * r_ARRAY_OF(R22 * p_ELEM, rt_int p_DIMS) { RT_B_TICK(); 
R22 * l_T_2178; memset(&l_T_2178, 0, sizeof l_T_2178);
l_T_2178 = r_NEW_TYP(g_T_ARR);
((*(R22 *)rt_nil_check(l_T_2178))).f_ELEM = p_ELEM;
((*(R22 *)rt_nil_check(l_T_2178))).f_DIMS = p_DIMS;
S_R9(&((*(R22 *)rt_nil_check(l_T_2178))).f_CNAME, r_ARRAY_STRUCT(p_ELEM, p_DIMS), 0);
{ R22 * rv2179 = l_T_2178;
return rv2179; }
rt_raise(RT_X_INIT);
}
static R26 r_TYPE_SPECIFIER(R17 * p_E) { RT_B_TICK(); 
R22 * l_T_2180; memset(&l_T_2180, 0, sizeof l_T_2180);
l_T_2180 = r_RESOLVE(((*(R17 *)rt_nil_check(p_E))).f_A);
R26 l_V_2181; memset(&l_V_2181, 0, sizeof l_V_2181);
S_R26(&l_V_2181, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, l_T_2180), 0);
R22 * l_RT_2182; memset(&l_RT_2182, 0, sizeof l_RT_2182);
l_RT_2182 = r_REAL_TYPE(l_T_2180);
if (((((*(R22 *)rt_nil_check((l_V_2181).f_T))).f_KIND == g_T_BITS) && (!(((*(R22 *)rt_nil_check(l_RT_2182))).f_KIND == g_T_BITS))))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv2183 = r_MKET(r_OF_BITS(l_RT_2182, (l_V_2181).f_C, ((*(R17 *)rt_nil_check(p_E))).f_LINE), l_T_2180);
return rv2183; }
}
{
R9 l_C_2184; memset(&l_C_2184, 0, sizeof l_C_2184);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 1;
S_R9(&l_C_2184, r_CONVERT(l_V_2181, l_T_2180, ((*(R17 *)rt_nil_check(p_E))).f_LINE, r_NO_TEXT()), 0);
((*(R7 *)rt_nil_check(g_W))).f_TYPECHECK = 0;
if ((((((((*(R22 *)rt_nil_check(l_RT_2182))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_RT_2182))).f_KIND == g_T_BITS))) && ((((*(R22 *)rt_nil_check(l_RT_2182))).f_LEN_C).f_LEN > ((rt_int)0LL))) && (!(((((*(R22 *)rt_nil_check(l_RT_2182))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check((l_V_2181).f_T))).f_MLEN).f_OK)))))
{
S_R9(&l_C_2184, r_FMT2(rt_str("rt_b_tlen(@, @)", 15), l_C_2184, ((*(R22 *)rt_nil_check(l_RT_2182))).f_LEN_C), 0);
}
{ R26 rv2185 = r_MKET(l_C_2184, l_T_2180);
return rv2185; }
}
rt_raise(RT_X_INIT);
}
static R9 r_OF_BITS(R22 * p_T, R9 p_B, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_RT_2186; memset(&l_RT_2186, 0, sizeof l_RT_2186);
l_RT_2186 = r_REAL_TYPE(p_T);
rt_int l_K_2187; memset(&l_K_2187, 0, sizeof l_K_2187);
l_K_2187 = ((*(R22 *)rt_nil_check(l_RT_2186))).f_KIND;
if ((l_K_2187 == g_T_INT))
{
{
rt_int l_N_2188; memset(&l_N_2188, 0, sizeof l_N_2188);
l_N_2188 = r_REP_BITS(l_RT_2186);
R9 l_U_2189; memset(&l_U_2189, 0, sizeof l_U_2189);
S_R9(&l_U_2189, r_MK(rt_str("0", 1)), 0);
if ((l_N_2188 >= ((rt_int)63LL)))
{
l_N_2188 = ((*(R7 *)rt_nil_check(g_W))).f_WORD;
}
else if (r_REP_UNSIGNED(l_RT_2186))
{
S_R9(&l_U_2189, r_MK(rt_str("1", 1)), 0);
}
{ R9 rv2190 = r_RANGE_CHECK(l_RT_2186, r_FMT3(rt_str("rt_b_rep_int_of_bits(@, @, @)", 29), p_B, r_NUM(l_N_2188), l_U_2189), r_NO_TEXT());
return rv2190; }
}
}
else if ((l_K_2187 == g_T_BOOL))
{
{ R9 rv2191 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_B);
return rv2191; }
}
else if ((l_K_2187 == g_T_ENUM))
{
{ R9 rv2192 = r_ENUM_OF_BITS(l_RT_2186, p_B);
return rv2192; }
}
else if (r_IS_D(l_RT_2186))
{
{ R9 rv2193 = r_FMT1(rt_str("rt_b_d_of_bits(@)", 17), p_B);
return rv2193; }
}
else if (((l_K_2187 == g_T_FLOAT) && (((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL))))
{
{ R9 rv2194 = r_FMT1(rt_str("rt_b_f_of_bits(@)", 17), p_B);
return rv2194; }
}
else if (((l_K_2187 == g_T_FLOAT) && (r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_RT_2186))).f_SCALE) == ((rt_int)7LL))))
{
{ R9 rv2195 = r_FMT1(rt_str("rt_b_single_of_bits(@)", 22), p_B);
return rv2195; }
}
else if ((l_K_2187 == g_T_FLOAT))
{
{ R9 rv2196 = r_FMT1(rt_str("rt_b_float_of_bits(@)", 21), p_B);
return rv2196; }
}
else if ((l_K_2187 == g_T_STR))
{
{ R9 rv2197 = r_FMT4(rt_str("rt_b_chars_of_bits(@, @, @, @)", 30), p_B, r_NUM(r_CHAR_SIZE(l_RT_2186)), r_NUM(r_PACKING_OF(l_RT_2186)), r_CHAR_REPS(l_RT_2186));
return rv2197; }
}
else if ((l_K_2187 == g_T_BITS))
{
{ R9 rv2198 = p_B;
return rv2198; }
}
else if ((l_K_2187 == g_T_XFIX))
{
{ R9 rv2199 = r_FMT2(rt_str("rt_b_bits_len(@, @)", 19), p_B, r_NUM(r_XFIX_SIZE(l_RT_2186)));
return rv2199; }
}
else if ((l_K_2187 == g_T_PTR))
{
{ R9 rv2200 = r_FMT2(rt_str("((@)rt_b_ptr_at(rt_b_int_of_bits(@)))", 37), r_CTYPE(l_RT_2186), p_B);
return rv2200; }
}
else if ((l_K_2187 == g_T_SEM))
{
{ R9 rv2201 = r_FMT2(rt_str("rt_b_sem_value(rt_b_int_of_bits(@), @)", 38), p_B, r_NUM(((*(R22 *)rt_nil_check(l_RT_2186))).f_SCALE));
return rv2201; }
}
else if ((l_K_2187 == g_T_REC))
{
{ R9 rv2202 = r_RECORD_OF_BITS(l_RT_2186, p_B);
return rv2202; }
}
else if ((l_K_2187 == g_T_ARR))
{
{ R9 rv2203 = r_ARRAY_OF_BITS(l_RT_2186, p_B);
return rv2203; }
}
r_FAILT(p_LINE, rt_str("no representation as a bitstring for ", 37), r_TYPE_NAME(p_T));
rt_raise(RT_X_INIT);
}
static R9 r_ARRAY_BITS(R22 * p_T, R9 p_C) { RT_B_TICK(); 
R9 l_A_2204; memset(&l_A_2204, 0, sizeof l_A_2204);
S_R9(&l_A_2204, r_NEW_NAME(rt_str("ab", 2)), 0);
R9 l_N_2205; memset(&l_N_2205, 0, sizeof l_N_2205);
S_R9(&l_N_2205, r_NEW_NAME(rt_str("an", 2)), 0);
R9 l_I_2206; memset(&l_I_2206, 0, sizeof l_I_2206);
S_R9(&l_I_2206, r_NEW_NAME(rt_str("ai", 2)), 0);
R9 l_IMG_2207; memset(&l_IMG_2207, 0, sizeof l_IMG_2207);
S_R9(&l_IMG_2207, r_NEW_NAME(rt_str("im", 2)), 0);
R9 l_EB_2208; memset(&l_EB_2208, 0, sizeof l_EB_2208);
S_R9(&l_EB_2208, (r_BITS_OF(r_MKET(r_FMT2(rt_str("@.p[@]", 6), l_A_2204, l_I_2206), ((*(R22 *)rt_nil_check(p_T))).f_ELEM), ((rt_int)0LL))).f_C, 0);
{ R9 rv2209 = r_CAT(r_CAT(r_FMT4(rt_str("({ @ @ = @; rt_int @ = ", 23), r_CTYPE(p_T), l_A_2204, p_C, l_N_2205), r_FMT4(rt_str("rt_b_extent(@, @.lo, @.hi); rstr @ = rt_str_new(0);", 51), r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), l_A_2204, l_A_2204, l_IMG_2207)), r_CAT(r_FMT4(rt_str(" for (rt_int @ = 0; @ < @; @++)", 31), l_I_2206, l_I_2206, l_N_2205, l_I_2206), r_CAT(r_FMT4(rt_str(" @ = rt_b_arr_put(@, @, @, ", 27), l_IMG_2207, l_IMG_2207, l_I_2206, l_N_2205), r_FMT3(rt_str("@, @); @; })", 12), l_EB_2208, r_NUM(r_PACKING_OF(p_T)), l_IMG_2207))));
return rv2209; }
rt_raise(RT_X_INIT);
}
static R9 r_ARRAY_OF_BITS(R22 * p_T, R9 p_B) { RT_B_TICK(); 
R9 l_A_2210; memset(&l_A_2210, 0, sizeof l_A_2210);
S_R9(&l_A_2210, r_NEW_NAME(rt_str("av", 2)), 0);
R9 l_N_2211; memset(&l_N_2211, 0, sizeof l_N_2211);
S_R9(&l_N_2211, r_NEW_NAME(rt_str("an", 2)), 0);
R9 l_I_2212; memset(&l_I_2212, 0, sizeof l_I_2212);
S_R9(&l_I_2212, r_NEW_NAME(rt_str("ai", 2)), 0);
R9 l_ES_2213; memset(&l_ES_2213, 0, sizeof l_ES_2213);
S_R9(&l_ES_2213, r_NEW_NAME(rt_str("es", 2)), 0);
R9 l_IMG_2214; memset(&l_IMG_2214, 0, sizeof l_IMG_2214);
S_R9(&l_IMG_2214, r_NEW_NAME(rt_str("im", 2)), 0);
R9 l_MODE_2215; memset(&l_MODE_2215, 0, sizeof l_MODE_2215);
S_R9(&l_MODE_2215, r_NUM(r_PACKING_OF(p_T)), 0);
R9 l_TAKE_2216; memset(&l_TAKE_2216, 0, sizeof l_TAKE_2216);
S_R9(&l_TAKE_2216, r_FMT4(rt_str("rt_b_arr_take(@, @, @, @, ", 26), l_IMG_2214, l_I_2212, l_N_2211, l_ES_2213), 0);
R9 l_EV_2217; memset(&l_EV_2217, 0, sizeof l_EV_2217);
S_R9(&l_EV_2217, r_OF_BITS(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT2(rt_str("@@)", 3), l_TAKE_2216, l_MODE_2215), ((rt_int)0LL)), 0);
R9 l_EST_2218; memset(&l_EST_2218, 0, sizeof l_EST_2218);
S_R9(&l_EST_2218, (r_SIZE_OF(((*(R22 *)rt_nil_check(p_T))).f_ELEM, r_FMT1(rt_str("@.p[0]", 6), l_A_2210))).f_C, 0);
{ R9 rv2219 = r_CAT(r_CAT(r_FMT4(rt_str("({ rstr @ = @; @ @;", 19), l_IMG_2214, p_B, r_CTYPE(p_T), l_A_2210), r_CAT(r_FMT4(rt_str(" @ rt_int @ = rt_b_extent(@, @.lo, ", 35), r_INIT_CODE(p_T, l_A_2210), l_N_2211, r_NUM(((*(R22 *)rt_nil_check(p_T))).f_DIMS), l_A_2210), r_FMT4(rt_str("@.hi); rt_int @ = @ \? @ : 0;", 28), l_A_2210, l_ES_2213, l_N_2211, l_EST_2218))), r_CAT(r_CAT(r_FMT3(rt_str(" if (!@) rt_b_lay_end(@, 0); for (rt_int @ = 0; ", 48), l_N_2211, l_IMG_2214, l_I_2212), r_FMT4(rt_str("@ < @; @++) @.p", 15), l_I_2212, l_N_2211, l_I_2212, l_A_2210)), r_FMT3(rt_str("[@] = @; @; })", 14), l_I_2212, l_EV_2217, l_A_2210)));
return rv2219; }
rt_raise(RT_X_INIT);
}
static R9 r_ENUM_OF_BITS(R22 * p_T, R9 p_C) { RT_B_TICK(); 
if ((!(((*(R22 *)rt_nil_check(p_T))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B == NULL)))
{
{ R9 rv2220 = r_FMT2(rt_str("rt_b_enum_of_rep(@, @)", 22), p_C, r_REP_TABLE(p_T));
return rv2220; }
}
}
{ R9 rv2221 = r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), p_C);
return rv2221; }
rt_raise(RT_X_INIT);
}
static R9 r_REP_TABLE(R22 * p_T) { RT_B_TICK(); 
R9 l_NAME_2222; memset(&l_NAME_2222, 0, sizeof l_NAME_2222);
S_R9(&l_NAME_2222, r_NEW_NAME(rt_str("reps", 4)), 0);
R17 * l_L_2223; memset(&l_L_2223, 0, sizeof l_L_2223);
l_L_2223 = ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_LITS;
R9 l_R_2224; memset(&l_R_2224, 0, sizeof l_R_2224);
S_R9(&l_R_2224, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_L_2223 == NULL)) goto L_end2225;
{
{
R17 * l_V_2226; memset(&l_V_2226, 0, sizeof l_V_2226);
l_V_2226 = ((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_B;
rt_int l_FOUND_2227; memset(&l_FOUND_2227, 0, sizeof l_FOUND_2227);
l_FOUND_2227 = 0;
for (;;) {
if ((l_V_2226 == NULL)) goto L_end2228;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_V_2226))).f_NAME, ((*(R17 *)rt_nil_check(l_L_2223))).f_NAME))
{
S_R9(&l_R_2224, r_FMT2(rt_str("@@, ", 4), l_R_2224, (r_EXPR(((*(R17 *)rt_nil_check(l_V_2226))).f_A, NULL)).f_C), 0);
l_FOUND_2227 = 1;
}
l_V_2226 = ((*(R17 *)rt_nil_check(l_V_2226))).f_NEXT;
}
RT_B_TICK();
} L_end2228: ;
if ((!l_FOUND_2227))
{
r_FAILT(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_REPS))).f_LINE, rt_str("VALUES must give every literal (3.4.3): ", 40), ((*(R17 *)rt_nil_check(l_L_2223))).f_NAME);
}
}
l_L_2223 = ((*(R17 *)rt_nil_check(l_L_2223))).f_NEXT;
}
RT_B_TICK();
} L_end2225: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("static rstr @[@];", 17), l_NAME_2222, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS)));
r_EMIT(g_O_STARTUP, r_FMT3(rt_str("{ rstr t[] = { @ }; memcpy(@, t, sizeof @); }", 45), l_R_2224, l_NAME_2222, l_NAME_2222));
{ R9 rv2229 = r_FMT2(rt_str("@, @", 4), l_NAME_2222, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(p_T))).f_BASE))).f_NLITS));
return rv2229; }
rt_raise(RT_X_INIT);
}
static R26 r_NEW_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SEM_2230; memset(&l_SEM_2230, 0, sizeof l_SEM_2230);
l_SEM_2230 = r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("SEMAPHORE$NEW", 13));
if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(((*(R7 *)rt_nil_check(g_W))).f_NEW_OK == p_E))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_b_cat(rt_str("NEW without PTR$ or SEMAPHORE$ only initializes a declaration or is the source ", 79), rt_str("of an assignment (3.10.2, 3.11.2)", 33)));
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("NEW", 3)) && (!(p_WANT == NULL))))
{
l_SEM_2230 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_WANT)))).f_KIND == g_T_SEM);
}
if (l_SEM_2230)
{
{
R22 * l_T_2231; memset(&l_T_2231, 0, sizeof l_T_2231);
l_T_2231 = r_NEW_TYP(g_T_SEM);
if ((!(p_WANT == NULL)))
{
if ((((*(R22 *)rt_nil_check(p_WANT))).f_KIND == g_T_SEM))
{
l_T_2231 = p_WANT;
}
}
{ R26 rv2232 = r_MKET(r_FMT2(rt_str("rt_b_sem_value(@, @)", 20), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), r_NUM(((*(R22 *)rt_nil_check(l_T_2231))).f_SCALE)), l_T_2231);
return rv2232; }
}
}
{
R22 * l_T_2233; memset(&l_T_2233, 0, sizeof l_T_2233);
l_T_2233 = r_RESOLVE(r_EXPR_TO_TS(((*(R17 *)rt_nil_check(p_E))).f_A));
R22 * l_P_2234; memset(&l_P_2234, 0, sizeof l_P_2234);
l_P_2234 = r_NEW_TYP(g_T_PTR);
((*(R22 *)rt_nil_check(l_P_2234))).f_TARGET = l_T_2233;
((*(R22 *)rt_nil_check(l_P_2234))).f_TARGET_TS = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((r_STATIC_SIZE(l_T_2233)).f_OK)
{
{ R26 rv2235 = r_MKET(r_FMT3(rt_str("({ @ *p = rt_b_new_bits(sizeof *p, @); @ p; })", 46), r_CTYPE(l_T_2233), r_NUM((r_STATIC_SIZE(l_T_2233)).f_V), r_INIT_CODE(l_T_2233, r_MK(rt_str("(*p)", 4)))), l_P_2234);
return rv2235; }
}
{ R26 rv2236 = r_MKET(r_FMT3(rt_str("({ @ *p = rt_b_new_bits(sizeof *p, 0); @ rt_b_new_more(@); p; })", 64), r_CTYPE(l_T_2233), r_INIT_CODE(l_T_2233, r_MK(rt_str("(*p)", 4))), (r_SIZE_OF(l_T_2233, r_MK(rt_str("(*p)", 4)))).f_C), l_P_2234);
return rv2236; }
}
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_CONV(R26 p_V, R22 * p_T, R9 p_TR) { RT_B_TICK(); 
if (r_IS_D(p_T))
{
{ R9 rv2237 = r_AS_D(p_V);
return rv2237; }
}
else if (r_IS_D((p_V).f_T))
{
{ R9 rv2238 = r_FMT2(rt_str("rt_b_single_of_d(@, @, 0)", 25), (p_V).f_C, p_TR);
return rv2238; }
}
{ R9 rv2239 = r_FMT3(rt_str("rt_b_fconv(@, @, @, 0)", 22), (p_V).f_C, r_SINGLE_C(((*(R22 *)rt_nil_check(p_T))).f_SCALE), p_TR);
return rv2239; }
rt_raise(RT_X_INIT);
}
static R9 r_FLOAT_LIMIT(R22 * p_T, R9 p_WHICH) { RT_B_TICK(); 
R9 l_C_2240; memset(&l_C_2240, 0, sizeof l_C_2240);
S_R9(&l_C_2240, r_MK(rt_str("DBL", 3)), 0);
if (r_IS_D(p_T))
{
if (r_TEQS(p_WHICH, rt_str("MIN", 3)))
{
{ R9 rv2241 = r_MK(rt_str("rt_b_dneg(rt_b_dmax())", 22));
return rv2241; }
}
else if (r_TEQS(p_WHICH, rt_str("MAX", 3)))
{
{ R9 rv2242 = r_MK(rt_str("rt_b_dmax()", 11));
return rv2242; }
}
{ R9 rv2243 = r_MK(rt_str("rt_b_deps()", 11));
return rv2243; }
}
if ((r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(p_T))).f_SCALE) == ((rt_int)7LL)))
{
S_R9(&l_C_2240, r_MK(rt_str("FLT", 3)), 0);
}
if (((((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL)) && (!r_TEQS(p_WHICH, rt_str("EPSILON", 7)))))
{
if (r_TEQS(p_WHICH, rt_str("MIN", 3)))
{
{ R9 rv2244 = r_MK(rt_str("(-0x1.fffffep+126)", 18));
return rv2244; }
}
{ R9 rv2245 = r_MK(rt_str("0x1.fffffep+126", 15));
return rv2245; }
}
if (r_TEQS(p_WHICH, rt_str("MIN", 3)))
{
{ R9 rv2246 = r_FMT1(rt_str("(-@_MAX)", 8), l_C_2240);
return rv2246; }
}
else if (r_TEQS(p_WHICH, rt_str("MAX", 3)))
{
{ R9 rv2247 = r_FMT1(rt_str("@_MAX", 5), l_C_2240);
return rv2247; }
}
{ R9 rv2248 = r_FMT1(rt_str("@_EPSILON", 9), l_C_2240);
return rv2248; }
rt_raise(RT_X_INIT);
}
static R17 * r_NTH(R17 * p_L, rt_int p_K) { RT_B_TICK(); 
R17 * l_P_2249; memset(&l_P_2249, 0, sizeof l_P_2249);
l_P_2249 = p_L;
{ rt_int it2251_lo = ((rt_int)1LL), it2251_hi = p_K;
for (rt_int it2251 = it2251_lo; it2251 <= it2251_hi; it2251++) {
{
if ((!(l_P_2249 == NULL)))
{
l_P_2249 = ((*(R17 *)rt_nil_check(l_P_2249))).f_NEXT;
}
}
RT_B_TICK();
if (it2251 == it2251_hi) break;
} } L_end2250: ;
{ R17 * rv2252 = l_P_2249;
return rv2252; }
rt_raise(RT_X_INIT);
}
static void r_NEED_ARGS(R17 * p_E, rt_int p_LO, rt_int p_HI) { RT_B_TICK(); 
rt_int l_N_2253; memset(&l_N_2253, 0, sizeof l_N_2253);
l_N_2253 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A);
if (((l_N_2253 < p_LO) || (l_N_2253 > p_HI)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the wrong number of arguments for ", 34), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (((((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL)))) && (!((((r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("REQUEST", 7)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("RELEASE", 7))) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8))) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("GET_LINE", 8)))))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("only input arguments for ", 25), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
}
static R9 r_ROUNDING_ARG(R17 * p_E, rt_int p_N) { RT_B_TICK(); 
R17 * l_L_2254; memset(&l_L_2254, 0, sizeof l_L_2254);
l_L_2254 = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, rt_sub(p_N, ((rt_int)1LL)));
if ((!(l_L_2254 == NULL)))
{
if (((((*(R17 *)rt_nil_check(l_L_2254))).f_KIND == g_N_QUAL) && ((((*(R17 *)rt_nil_check(l_L_2254))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_L_2254))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R9 rv2255 = r_MK(rt_str("1", 1));
return rv2255; }
}
{ R9 rv2256 = r_MK(rt_str("0", 1));
return rv2256; }
}
if (((((*(R17 *)rt_nil_check(l_L_2254))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_L_2254))).f_KIND == g_N_ENUMLIT)))
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_L_2254))).f_NAME, rt_str("ROUNDED", 7)))
{
{ R9 rv2257 = r_MK(rt_str("1", 1));
return rv2257; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(l_L_2254))).f_NAME, rt_str("TRUNCATED", 9)))
{
{ R9 rv2258 = r_MK(rt_str("0", 1));
return rv2258; }
}
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_ROUNDED)
{
{ R9 rv2259 = r_MK(rt_str("1", 1));
return rv2259; }
}
{ R9 rv2260 = r_MK(rt_str("0", 1));
return rv2260; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING(R17 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv2261 = 0;
return rv2261; }
}
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT)))
{
{ rt_int rv2262 = (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("TRUNCATED", 9)));
return rv2262; }
}
{ rt_int rv2263 = 0;
return rv2263; }
rt_raise(RT_X_INIT);
}
static R17 * r_ARG_EXPR(R17 * p_E) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_QUAL))
{
{ R17 * rv2264 = ((*(R17 *)rt_nil_check(p_E))).f_A;
return rv2264; }
}
{ R17 * rv2265 = p_E;
return rv2265; }
rt_raise(RT_X_INIT);
}
static R9 r_OPERATOR_SYMBOL(R9 p_NAME) { RT_B_TICK(); 
rstr l_NAMES_2266; memset(&l_NAMES_2266, 0, sizeof l_NAMES_2266);
l_NAMES_2266 = rt_b_str_new(((rt_int)299LL), 0);
rt_b_assign(&l_NAMES_2266, rt_str(" ADD_:+ SUBTRACT_:- MULTIPLY_:* DIVIDE_:/ MODULUS_:MOD EXPONENTIATE_:** CONCATENATE_:!! EQUAL_:= UNEQUAL_:<> GREATER_THAN_:> LESS_THAN_:< GREATER_EQUAL_:>= LESS_EQUAL_:<= AND_:AND OR_:OR XOR_:XOR IMPLIES_:-> MD_ADD_:+ MD_SUBTRACT_:- MD_MULTIPLY_:* MD_DIVIDE_:/ NEGATE_:- MON_PLUS_:+ COMPLEMENT_:NOT ", 299));
rt_int l_L_2267; memset(&l_L_2267, 0, sizeof l_L_2267);
l_L_2267 = (p_NAME).f_LEN;
{ rt_int it2269_lo = ((rt_int)0LL), it2269_hi = rt_sub(rt_sub(((rt_int)299LL), l_L_2267), ((rt_int)2LL));
for (rt_int it2269 = it2269_lo; it2269 <= it2269_hi; it2269++) {
{
if ((rt_b_eq(rt_b_slice(l_NAMES_2266, it2269, it2269), rt_str(" ", 1)) && rt_b_eq(rt_b_slice(l_NAMES_2266, rt_add(rt_add(it2269, l_L_2267), ((rt_int)1LL)), rt_add(rt_add(it2269, l_L_2267), ((rt_int)1LL))), rt_str(":", 1))))
{
if (rt_b_eq(rt_b_slice(l_NAMES_2266, rt_add(it2269, ((rt_int)1LL)), rt_add(it2269, l_L_2267)), r_STR(p_NAME, l_L_2267)))
{
{
rt_int l_J_2270; memset(&l_J_2270, 0, sizeof l_J_2270);
l_J_2270 = rt_add(rt_add(it2269, l_L_2267), ((rt_int)2LL));
for (;;) {
if (rt_b_eq(rt_b_slice(l_NAMES_2266, l_J_2270, l_J_2270), rt_str(" ", 1))) goto L_end2271;
{
l_J_2270 = rt_add(l_J_2270, ((rt_int)1LL));
}
RT_B_TICK();
} L_end2271: ;
{ R9 rv2272 = r_MKN(rt_b_slice(l_NAMES_2266, rt_add(rt_add(it2269, l_L_2267), ((rt_int)2LL)), rt_sub(l_J_2270, ((rt_int)1LL))));
return rv2272; }
}
}
}
}
RT_B_TICK();
if (it2269 == it2269_hi) break;
} } L_end2268: ;
{ R9 rv2273 = r_NO_TEXT();
return rv2273; }
rt_raise(RT_X_INIT);
}
static R26 r_OPERATOR_BUILTIN(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R9 l_NAME_2274; memset(&l_NAME_2274, 0, sizeof l_NAME_2274);
S_R9(&l_NAME_2274, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2275; memset(&l_LINE_2275, 0, sizeof l_LINE_2275);
l_LINE_2275 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
rt_int l_N_2276; memset(&l_N_2276, 0, sizeof l_N_2276);
l_N_2276 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A);
if ((r_TEQS(l_NAME_2274, rt_str("STORE_", 6)) || r_TEQS(l_NAME_2274, rt_str("SUBSTRING_STORE_", 16))))
{
{
R17 * l_TGT_2277; memset(&l_TGT_2277, 0, sizeof l_TGT_2277);
l_TGT_2277 = r_FIRST_OUT_ARG(p_E);
R17 * l_S_2278; memset(&l_S_2278, 0, sizeof l_S_2278);
l_S_2278 = r_NEW_NODE(g_N_ASSIGN, l_LINE_2275);
R17 * l_SRC_2279; memset(&l_SRC_2279, 0, sizeof l_SRC_2279);
l_SRC_2279 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if (((l_TGT_2277 == NULL) || (l_SRC_2279 == NULL)))
{
r_FAILT(l_LINE_2275, rt_str("the wrong arguments for ", 24), l_NAME_2274);
}
if (r_TEQS(l_NAME_2274, rt_str("STORE_", 6)))
{
((*(R17 *)rt_nil_check(l_S_2278))).f_A = l_TGT_2277;
}
else
{
if ((l_N_2276 < ((rt_int)3LL)))
{
r_FAIL(l_LINE_2275, rt_str("SUBSTRING_STORE_ (V, L, U # X) (D.5)", 36));
}
((*(R17 *)rt_nil_check(l_S_2278))).f_A = r_NEW_NODE(g_N_SUBSTR, l_LINE_2275);
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_2278))).f_A))).f_A = l_TGT_2277;
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_2278))).f_A))).f_B = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_2278))).f_A))).f_C = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
}
((*(R17 *)rt_nil_check(l_S_2278))).f_B = r_QUALIFIED(r_COPY_NODE(l_SRC_2279), r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, rt_add(((rt_int)1LL), rt_mul(((rt_int)2LL), r_BOOL_INT(r_TEQS(l_NAME_2274, rt_str("SUBSTRING_STORE_", 16)))))), l_LINE_2275);
{
R14 l_SAVED_CODE_2280; memset(&l_SAVED_CODE_2280, 0, sizeof l_SAVED_CODE_2280);
S_R14(&l_SAVED_CODE_2280, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R9 l_C_2281; memset(&l_C_2281, 0, sizeof l_C_2281);
S_R9(&l_C_2281, r_MK(rt_str("({", 2)), 0);
R15 * l_P_2282; memset(&l_P_2282, 0, sizeof l_P_2282);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc2283; memset(&rc2283, 0, sizeof rc2283);  rc2283.f_HEAD = NULL; rc2283.f_TAIL = NULL; rc2283; }), 0);
r_ASSIGN_STMT(l_S_2278);
l_P_2282 = (((*(R7 *)rt_nil_check(g_W))).f_CODE).f_HEAD;
for (;;) {
if ((l_P_2282 == NULL)) goto L_end2284;
{
S_R9(&l_C_2281, r_FMT2(rt_str("@ @", 3), l_C_2281, ((*(R15 *)rt_nil_check(l_P_2282))).f_T), 0);
l_P_2282 = ((*(R15 *)rt_nil_check(l_P_2282))).f_NEXT;
}
RT_B_TICK();
} L_end2284: ;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2280, 0);
{ R26 rv2285 = r_MKET(r_CATS(l_C_2281, rt_str(" })", 3)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2285; }
}
}
}
if (r_TEQS(l_NAME_2274, rt_str("SUBSTRING_", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R17 * l_S_2286; memset(&l_S_2286, 0, sizeof l_S_2286);
l_S_2286 = r_NEW_NODE(g_N_SUBSTR, l_LINE_2275);
((*(R17 *)rt_nil_check(l_S_2286))).f_A = ((*(R17 *)rt_nil_check(p_E))).f_A;
((*(R17 *)rt_nil_check(l_S_2286))).f_B = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL));
((*(R17 *)rt_nil_check(l_S_2286))).f_C = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
((*(R17 *)rt_nil_check(l_S_2286))).f_A = r_COPY_NODE(((*(R17 *)rt_nil_check(p_E))).f_A);
{ R26 rv2287 = r_EXPR(l_S_2286, p_WANT);
return rv2287; }
}
}
{
R9 l_SYM__2288; memset(&l_SYM__2288, 0, sizeof l_SYM__2288);
S_R9(&l_SYM__2288, r_OPERATOR_SYMBOL(l_NAME_2274), 0);
rt_int l_UNARY_OP_2289; memset(&l_UNARY_OP_2289, 0, sizeof l_UNARY_OP_2289);
l_UNARY_OP_2289 = ((r_TEQS(l_NAME_2274, rt_str("NEGATE_", 7)) || r_TEQS(l_NAME_2274, rt_str("MON_PLUS_", 9))) || r_TEQS(l_NAME_2274, rt_str("COMPLEMENT_", 11)));
R17 * l_X_2290; memset(&l_X_2290, 0, sizeof l_X_2290);
if (l_UNARY_OP_2289)
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)3LL));
l_X_2290 = r_NEW_NODE(g_N_UNOP, l_LINE_2275);
S_R9(&((*(R17 *)rt_nil_check(l_X_2290))).f_NAME, l_SYM__2288, 0);
((*(R17 *)rt_nil_check(l_X_2290))).f_A = r_COPY_NODE(((*(R17 *)rt_nil_check(p_E))).f_A);
{ R26 rv2291 = r_EXPR(r_QUALIFIED(l_X_2290, r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), l_LINE_2275), p_WANT);
return rv2291; }
}
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)4LL));
l_X_2290 = r_BIN_NODE(l_SYM__2288, l_LINE_2275, r_COPY_NODE(((*(R17 *)rt_nil_check(p_E))).f_A), r_COPY_NODE(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))));
if (r_TEQS(l_SYM__2288, rt_str("/", 1)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL)).f_T)))).f_KIND == g_T_FLOAT)))
{
S_R9(&((*(R17 *)rt_nil_check(l_X_2290))).f_NAME, r_MK(rt_str("//", 2)), 0);
}
}
if (rt_b_eq(rt_b_slice(r_STR(l_NAME_2274, (l_NAME_2274).f_LEN), ((rt_int)0LL), ((rt_int)2LL)), rt_str("MD_", 3)))
{
((*(R17 *)rt_nil_check(l_X_2290))).f_FL = ((rt_int)2LL);
}
{ R26 rv2292 = r_EXPR(r_QUALIFIED(l_X_2290, r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_2275), p_WANT);
return rv2292; }
}
rt_raise(RT_X_INIT);
}
static R17 * r_QUALIFIED(R17 * p_X, R17 * p_Q, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_2293; memset(&l_R_2293, 0, sizeof l_R_2293);
l_R_2293 = p_X;
R17 * l_P_2294; memset(&l_P_2294, 0, sizeof l_P_2294);
l_P_2294 = p_Q;
for (;;) {
if ((l_P_2294 == NULL)) goto L_end2295;
{
if ((l_R_2293 == p_X))
{
l_R_2293 = r_NEW_NODE(g_N_QUAL, p_LINE);
((*(R17 *)rt_nil_check(l_R_2293))).f_A = p_X;
}
if (((((((*(R17 *)rt_nil_check(l_P_2294))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_P_2294))).f_KIND == g_N_ENUMLIT))) && r_IS_ROUNDING_NAME(((*(R17 *)rt_nil_check(l_P_2294))).f_NAME)))
{
S_R9(&((*(R17 *)rt_nil_check(l_R_2293))).f_NAME, ((*(R17 *)rt_nil_check(l_P_2294))).f_NAME, 0);
}
else
{
((*(R17 *)rt_nil_check(l_R_2293))).f_B = l_P_2294;
}
l_P_2294 = ((*(R17 *)rt_nil_check(l_P_2294))).f_NEXT;
}
RT_B_TICK();
} L_end2295: ;
{ R17 * rv2296 = l_R_2293;
return rv2296; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_ROUNDING_NAME(R9 p_NAME) { RT_B_TICK(); 
{ rt_int rv2297 = (!(r_FIND_LITERAL(p_NAME, r_ROUNDINGS_TYPE()) == NULL));
return rv2297; }
rt_raise(RT_X_INIT);
}
static R22 * r_ROUNDINGS_TYPE(void) { RT_B_TICK(); 
R12 * l_Y_2298; memset(&l_Y_2298, 0, sizeof l_Y_2298);
l_Y_2298 = r_LOOKUP(r_MKN(rt_str("ROUNDINGS", 9)));
if ((!(l_Y_2298 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2298))).f_KIND == g_Y_TYPE))
{
{
R22 * l_T_2299; memset(&l_T_2299, 0, sizeof l_T_2299);
l_T_2299 = r_REAL_TYPE(r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_2298))).f_NAME, ((rt_int)0LL)));
if ((((*(R22 *)rt_nil_check(l_T_2299))).f_KIND == g_T_ENUM))
{
{ R22 * rv2300 = l_T_2299;
return rv2300; }
}
}
}
}
{ R22 * rv2301 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ROUNDINGS;
return rv2301; }
rt_raise(RT_X_INIT);
}
static rt_int r_PREDEFINED_ROUNDING(void) { RT_B_TICK(); 
if ((((*(R7 *)rt_nil_check(g_W))).f_QUAL == NULL))
{
{ rt_int rv2302 = 1;
return rv2302; }
}
if (((((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2303 = 1;
return rv2303; }
}
{ rt_int rv2304 = (((r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("ROUNDED", 7)) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("TRUNCATED", 9))) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_R", 8))) || r_TEQS(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_QUAL))).f_NAME, rt_str("NATIVE_T", 8)));
return rv2304; }
rt_raise(RT_X_INIT);
}
static R17 * r_FIRST_OUT_ARG(R17 * p_E) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL)))
{
{ R17 * rv2305 = ((*(R17 *)rt_nil_check(p_E))).f_C;
return rv2305; }
}
{ R17 * rv2306 = ((*(R17 *)rt_nil_check(p_E))).f_B;
return rv2306; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_OBJECT_ARG(R17 * p_L) { RT_B_TICK(); 
R17 * l_A_2307; memset(&l_A_2307, 0, sizeof l_A_2307);
l_A_2307 = p_L;
for (;;) {
if ((l_A_2307 == NULL)) goto L_end2308;
{
if ((((*(R17 *)rt_nil_check(l_A_2307))).f_KIND == g_N_NAME))
{
{
R12 * l_Y_2309; memset(&l_Y_2309, 0, sizeof l_Y_2309);
l_Y_2309 = r_LOOKUP(((*(R17 *)rt_nil_check(l_A_2307))).f_NAME);
if ((!(l_Y_2309 == NULL)))
{
if (((((((*(R12 *)rt_nil_check(l_Y_2309))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_2309))).f_KIND == g_Y_CONST))) && (!(((*(R12 *)rt_nil_check(l_Y_2309))).f_T == NULL))))
{
if (((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2309))).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
{ rt_int rv2310 = 1;
return rv2310; }
}
}
}
}
}
l_A_2307 = ((*(R17 *)rt_nil_check(l_A_2307))).f_NEXT;
}
RT_B_TICK();
} L_end2308: ;
{ rt_int rv2311 = 0;
return rv2311; }
rt_raise(RT_X_INIT);
}
static R26 r_BUILTIN(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R9 l_NAME_2312; memset(&l_NAME_2312, 0, sizeof l_NAME_2312);
S_R9(&l_NAME_2312, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_2313; memset(&l_LINE_2313, 0, sizeof l_LINE_2313);
l_LINE_2313 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
if ((!(r_CUR_GENERIC() == NULL)))
{
if (r_GENERIC_OBJECT_ARG(((*(R17 *)rt_nil_check(p_E))).f_A))
{
r_REQUIRE_WHERE(l_NAME_2312, l_LINE_2313);
}
}
if ((((((r_OPERATOR_SYMBOL(l_NAME_2312)).f_LEN > ((rt_int)0LL)) || r_TEQS(l_NAME_2312, rt_str("STORE_", 6))) || r_TEQS(l_NAME_2312, rt_str("SUBSTRING_", 10))) || r_TEQS(l_NAME_2312, rt_str("SUBSTRING_STORE_", 16))))
{
{ R26 rv2314 = r_OPERATOR_BUILTIN(p_E, p_WANT);
return rv2314; }
}
if ((r_TEQS(l_NAME_2312, rt_str("PUT", 3)) || r_TEQS(l_NAME_2312, rt_str("PUT_LINE", 8))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2315; memset(&l_V_2315, 0, sizeof l_V_2315);
S_R26(&l_V_2315, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2315).f_T)))).f_KIND == g_T_STR)))
{
r_FAIL(l_LINE_2313, rt_str("PUT writes character strings; use TO_CHAR", 41));
}
r_ASCII_ONLY((l_V_2315).f_T, rt_str("the terminal", 12), l_LINE_2313);
if (r_TEQS(l_NAME_2312, rt_str("PUT", 3)))
{
{ R26 rv2316 = r_MKET(r_FMT1(rt_str("rt_put(@)", 9), (l_V_2315).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2316; }
}
{ R26 rv2317 = r_MKET(r_FMT1(rt_str("rt_putln(@)", 11), (l_V_2315).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2317; }
}
}
else if (r_TEQS(l_NAME_2312, rt_str("NEW_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2318 = r_MKET(r_MK(rt_str("rt_newline()", 12)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2318; }
}
else if (r_TEQS(l_NAME_2312, rt_str("GET_CODE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2319 = r_MKET(r_MK(rt_str("rt_b_get_code()", 15)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2319; }
}
else if (r_TEQS(l_NAME_2312, rt_str("GET_LINE", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2320 = r_MKET(r_MK(rt_str("rt_getln()", 10)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2320; }
}
else if (r_TEQS(l_NAME_2312, rt_str("END_OF_INPUT", 12)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2321 = r_MKET(r_MK(rt_str("rt_eof()", 8)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2321; }
}
else if (r_TEQS(l_NAME_2312, rt_str("STOP", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2322 = r_MKET(r_FMT1(rt_str("rt_exit(@)", 10), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2322; }
}
else if (r_TEQS(l_NAME_2312, rt_str("REAL_TIME", 9)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2323 = r_MKET(r_MK(rt_str("rt_b_real_time()", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv2323; }
}
else if (r_TEQS(l_NAME_2312, rt_str("ARGUMENT_COUNT", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)0LL));
{ R26 rv2324 = r_MKET(r_MK(rt_str("rt_argc()", 9)), ((*(R7 *)rt_nil_check(g_W))).f_TY_INT);
return rv2324; }
}
else if (r_TEQS(l_NAME_2312, rt_str("ARGUMENT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2325 = r_MKET(r_FMT1(rt_str("rt_arg(@)", 9), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2325; }
}
else if ((r_TEQS(l_NAME_2312, rt_str("FILE_EXISTS", 11)) || r_TEQS(l_NAME_2312, rt_str("READ_FILE", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2326; memset(&l_V_2326, 0, sizeof l_V_2326);
S_R26(&l_V_2326, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2326).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_2313, rt_str("a file is named by a character string: ", 39), l_NAME_2312);
}
if (r_TEQS(l_NAME_2312, rt_str("FILE_EXISTS", 11)))
{
{ R26 rv2327 = r_MKET(r_FMT1(rt_str("rt_b_file_exists(@)", 19), (l_V_2326).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2327; }
}
{ R26 rv2328 = r_MKET(r_FMT1(rt_str("rt_read_file(@)", 15), (l_V_2326).f_C), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2328; }
}
}
else if (r_TEQS(l_NAME_2312, rt_str("WRITE_FILE", 10)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_N_2329; memset(&l_N_2329, 0, sizeof l_N_2329);
S_R26(&l_N_2329, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R26 l_V_2330; memset(&l_V_2330, 0, sizeof l_V_2330);
S_R26(&l_V_2330, r_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT, NULL), 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_N_2329).f_T)))).f_KIND == g_T_STR)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2330).f_T)))).f_KIND == g_T_STR))))
{
r_FAIL(l_LINE_2313, rt_str("WRITE_FILE (name, text) takes two character strings", 51));
}
{ R26 rv2331 = r_MKET(r_FMT2(rt_str("rt_write_file(@, @)", 19), (l_N_2329).f_C, (l_V_2330).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv2331; }
}
}
if (r_TEQS(l_NAME_2312, rt_str("TO_CHAR", 7)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2332 = r_IMAGE_OF(r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_2313);
return rv2332; }
}
else if (r_TEQS(l_NAME_2312, rt_str("TO_FIXED", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)5LL));
{ R26 rv2333 = r_TO_FIXED_CALL(p_E);
return rv2333; }
}
else if (r_TEQS(l_NAME_2312, rt_str("TO_FLOAT", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)3LL));
{
R26 l_V_2334; memset(&l_V_2334, 0, sizeof l_V_2334);
S_R26(&l_V_2334, r_EXPR(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), NULL), 0);
R25 l_P_2335; memset(&l_P_2335, 0, sizeof l_P_2335);
S_R25(&l_P_2335, r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT), rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_VT_2336; memset(&l_VT_2336, 0, sizeof l_VT_2336);
l_VT_2336 = r_REAL_TYPE((l_V_2334).f_T);
R22 * l_T_2337; memset(&l_T_2337, 0, sizeof l_T_2337);
l_T_2337 = r_FLOAT_TYPE((l_P_2335).f_V);
R9 l_SINGLE_2338; memset(&l_SINGLE_2338, 0, sizeof l_SINGLE_2338);
S_R9(&l_SINGLE_2338, r_SINGLE_C((l_P_2335).f_V), 0);
R9 l_TR_2339; memset(&l_TR_2339, 0, sizeof l_TR_2339);
S_R9(&l_TR_2339, r_MK(rt_str("0", 1)), 0);
if (((r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A) == ((rt_int)3LL)) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT))).f_KIND == g_N_QUAL)))
{
{
R17 * l_R_2340; memset(&l_R_2340, 0, sizeof l_R_2340);
l_R_2340 = r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL));
if ((l_R_2340 == NULL))
{
l_R_2340 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT;
}
if ((((*(R17 *)rt_nil_check(l_R_2340))).f_KIND == g_N_QUAL))
{
l_R_2340 = r_LIT_NODE_T(((*(R17 *)rt_nil_check(l_R_2340))).f_NAME, l_LINE_2313);
}
if (r_TEQS(((*(R17 *)rt_nil_check(l_R_2340))).f_NAME, rt_str("TRUNCATED", 9)))
{
S_R9(&l_TR_2339, r_MK(rt_str("1", 1)), 0);
}
else if ((!r_TEQS(((*(R17 *)rt_nil_check(l_R_2340))).f_NAME, rt_str("ROUNDED", 7))))
{
r_FAIL(l_LINE_2313, rt_str("TO_FLOAT is predefined for ROUNDED and TRUNCATED (3.3.6.1)", 58));
}
}
}
if (((((*(R22 *)rt_nil_check(l_VT_2336))).f_KIND == g_T_INT) && r_IS_D(l_T_2337)))
{
{ R26 rv2341 = r_MKET(r_FMT3(rt_str("rt_b_d_of_fix(@, @, @)", 22), (l_V_2334).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_2336))).f_SCALE), l_TR_2339), l_T_2337);
return rv2341; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_2336))).f_KIND == g_T_INT))
{
{ R26 rv2342 = r_MKET(r_FMT4(rt_str("rt_b_float_of_fix_r(@, @, @, @)", 31), (l_V_2334).f_C, r_NUM(((*(R22 *)rt_nil_check(l_VT_2336))).f_SCALE), l_SINGLE_2338, l_TR_2339), l_T_2337);
return rv2342; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_2336))).f_KIND == g_T_FLOAT))
{
if (((((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) && (r_IMP_PRECISION_OF((l_P_2335).f_V) > r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_VT_2336))).f_SCALE))))
{
{
R17 * l_Q_2343; memset(&l_Q_2343, 0, sizeof l_Q_2343);
l_Q_2343 = r_NEW_NODE(g_N_QUAL, l_LINE_2313);
R17 * l_SAVED_Q_2344; memset(&l_SAVED_Q_2344, 0, sizeof l_SAVED_Q_2344);
l_SAVED_Q_2344 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_L_2345; memset(&l_L_2345, 0, sizeof l_L_2345);
((*(R17 *)rt_nil_check(l_Q_2343))).f_B = r_ARG_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_Q_2343;
S_R26(&l_L_2345, r_EXPR(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), NULL), 0);
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_2344;
{ R26 rv2346 = r_MKET(r_FLOAT_CONV(l_L_2345, l_T_2337, l_TR_2339), l_T_2337);
return rv2346; }
}
}
{ R26 rv2347 = r_MKET(r_FLOAT_CONV(l_V_2334, l_T_2337, l_TR_2339), l_T_2337);
return rv2347; }
}
else if ((((*(R22 *)rt_nil_check(l_VT_2336))).f_KIND == g_T_STR))
{
if (((!(((*(R22 *)rt_nil_check(l_VT_2336))).f_BASE == NULL)) && (!(((*(R22 *)rt_nil_check(l_VT_2336))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))))
{
r_FAIL(l_LINE_2313, rt_str("TO_FLOAT is predefined for ASCII strings only (3.3.6.1)", 55));
}
if (r_IS_D(l_T_2337))
{
{ R26 rv2348 = r_MKET(r_FMT2(rt_str("rt_b_d_of_str(@, @)", 19), (l_V_2334).f_C, l_TR_2339), l_T_2337);
return rv2348; }
}
{ R26 rv2349 = r_MKET(r_FMT3(rt_str("rt_b_fconv(rt_b_float_of_str(@), @, @, 0)", 41), (l_V_2334).f_C, l_SINGLE_2338, l_TR_2339), l_T_2337);
return rv2349; }
}
r_FAIL(l_LINE_2313, rt_str("TO_FLOAT converts fixed, float and charstring values (3.3.6.1)", 62));
}
}
else if (r_TEQS(l_NAME_2312, rt_str("TO_BIT", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2350 = r_BITS_OF(r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), l_LINE_2313);
return rv2350; }
}
else if (r_TEQS(l_NAME_2312, rt_str("ABS", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2351; memset(&l_V_2351, 0, sizeof l_V_2351);
S_R26(&l_V_2351, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2351).f_T)))).f_KIND == g_T_INT))
{
{ R26 rv2352 = r_MKET(r_FMT1(rt_str("rt_abs(@)", 9), (l_V_2351).f_C), r_INT_TYPE(((*(R22 *)rt_nil_check((l_V_2351).f_T))).f_SCALE));
return rv2352; }
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2351).f_T)))).f_KIND == g_T_FLOAT))
{
if (r_IS_D((l_V_2351).f_T))
{
{ R26 rv2353 = r_MKET(r_FMT1(rt_str("rt_b_dabs(@)", 12), (l_V_2351).f_C), (l_V_2351).f_T);
return rv2353; }
}
{ R26 rv2354 = r_MKET(r_FMT1(rt_str("fabs(@)", 7), (l_V_2351).f_C), (l_V_2351).f_T);
return rv2354; }
}
r_FAIL(l_LINE_2313, rt_str("ABS of something not a number", 29));
}
}
else if ((r_TEQS(l_NAME_2312, rt_str("SUCC", 4)) || r_TEQS(l_NAME_2312, rt_str("PRED", 4))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_2355; memset(&l_V_2355, 0, sizeof l_V_2355);
S_R26(&l_V_2355, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_2356; memset(&l_T_2356, 0, sizeof l_T_2356);
l_T_2356 = r_REAL_TYPE((l_V_2355).f_T);
if ((!(((*(R22 *)rt_nil_check(l_T_2356))).f_KIND == g_T_ENUM)))
{
r_FAILT(l_LINE_2313, rt_str("an enumerated value expected by ", 32), l_NAME_2312);
}
if (r_IS_UNORDERED(l_T_2356))
{
r_FAILT(l_LINE_2313, rt_str("not defined for an UNORDERED type (3.4.6.1): ", 45), l_NAME_2312);
}
if (r_TEQS(l_NAME_2312, rt_str("SUCC", 4)))
{
{ R26 rv2357 = r_MKET(r_FMT2(rt_str("rt_b_succ(@, @)", 15), (l_V_2355).f_C, r_NUM(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2356))).f_BASE))).f_NLITS)), ((*(R22 *)rt_nil_check(l_T_2356))).f_BASE);
return rv2357; }
}
{ R26 rv2358 = r_MKET(r_FMT1(rt_str("rt_b_pred(@)", 12), (l_V_2355).f_C), ((*(R22 *)rt_nil_check(l_T_2356))).f_BASE);
return rv2358; }
}
}
else if (r_TEQS(l_NAME_2312, rt_str("DUP", 3)))
{
r_NEED_ARGS(p_E, ((rt_int)2LL), ((rt_int)2LL));
{
R26 l_V_2359; memset(&l_V_2359, 0, sizeof l_V_2359);
S_R26(&l_V_2359, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
rt_int l_K_2360; memset(&l_K_2360, 0, sizeof l_K_2360);
l_K_2360 = ((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2359).f_T)))).f_KIND;
R22 * l_T_2361; memset(&l_T_2361, 0, sizeof l_T_2361);
l_T_2361 = r_NEW_TYP(l_K_2360);
if (((!(l_K_2360 == g_T_STR)) && (!(l_K_2360 == g_T_BITS))))
{
r_FAIL(l_LINE_2313, rt_str("DUP of something not a string", 29));
}
((*(R22 *)rt_nil_check(l_T_2361))).f_BASE = ((*(R22 *)rt_nil_check((l_V_2359).f_T))).f_BASE;
{ R26 rv2362 = r_MKET(r_FMT2(rt_str("rt_b_dup(rt_b_one(@), @)", 24), (l_V_2359).f_C, r_INT_EXPR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT)), l_T_2361);
return rv2362; }
}
}
else if (r_TEQS(l_NAME_2312, rt_str("BLANKS", 6)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2363 = r_MKET(r_FMT1(rt_str("rt_b_dup(rt_str(\" \", 1), @)", 27), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL()));
return rv2363; }
}
else if (r_TEQS(l_NAME_2312, rt_str("ZEROS", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2364 = r_MKET(r_FMT1(rt_str("rt_b_zeros(@)", 13), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv2364; }
}
else if (((r_TEQS(l_NAME_2312, rt_str("BIN_OF", 6)) || r_TEQS(l_NAME_2312, rt_str("OCT_OF", 6))) || r_TEQS(l_NAME_2312, rt_str("HEX_OF", 6))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R9 l_BITS_2365; memset(&l_BITS_2365, 0, sizeof l_BITS_2365);
S_R9(&l_BITS_2365, r_MK(rt_str("1", 1)), 0);
if (r_TEQS(l_NAME_2312, rt_str("OCT_OF", 6)))
{
S_R9(&l_BITS_2365, r_MK(rt_str("3", 1)), 0);
}
else if (r_TEQS(l_NAME_2312, rt_str("HEX_OF", 6)))
{
S_R9(&l_BITS_2365, r_MK(rt_str("4", 1)), 0);
}
{
R26 l_V_2366; memset(&l_V_2366, 0, sizeof l_V_2366);
S_R26(&l_V_2366, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_2366).f_T)))).f_KIND == g_T_STR)))
{
r_FAILT(l_LINE_2313, rt_str("a character string expected by ", 31), l_NAME_2312);
}
r_ASCII_ONLY((l_V_2366).f_T, r_STR(l_NAME_2312, (l_NAME_2312).f_LEN), l_LINE_2313);
{ R26 rv2367 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_digits(@, @)", 25), (l_V_2366).f_C, l_BITS_2365), r_BITS_TYPE(rt_neg(((rt_int)1LL))));
return rv2367; }
}
}
}
else if ((r_TEQS(l_NAME_2312, rt_str("FIXED_MIN", 9)) || r_TEQS(l_NAME_2312, rt_str("FIXED_MAX", 9))))
{
r_NEED_ARGS(p_E, ((rt_int)3LL), ((rt_int)3LL));
{
R25 l_S_2368; memset(&l_S_2368, 0, sizeof l_S_2368);
S_R25(&l_S_2368, r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_A, rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL)), 0);
R25 l_R_2369; memset(&l_R_2369, 0, sizeof l_R_2369);
S_R25(&l_R_2369, r_MANIFEST_INTEGER_ARG(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL)), rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL)), 0);
if ((!((l_R_2369).f_V == ((rt_int)2LL))))
{
r_FAIL(l_LINE_2313, rt_str("only radix 2 is predefined (3.2.6.3)", 36));
}
r_CHECK_PRECISION_ARG(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)2LL)), l_LINE_2313);
if (r_TEQS(l_NAME_2312, rt_str("FIXED_MIN", 9)))
{
{ R26 rv2370 = r_MKET(r_STD_MIN_C(), r_INT_TYPE((l_S_2368).f_V));
return rv2370; }
}
{ R26 rv2371 = r_MKET(r_STD_MAX_C(), r_INT_TYPE((l_S_2368).f_V));
return rv2371; }
}
}
else if (((r_TEQS(l_NAME_2312, rt_str("FLOAT_MIN", 9)) || r_TEQS(l_NAME_2312, rt_str("FLOAT_MAX", 9))) || r_TEQS(l_NAME_2312, rt_str("EPSILON", 7))))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R25 l_P_2372; memset(&l_P_2372, 0, sizeof l_P_2372);
S_R25(&l_P_2372, r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION()), 0);
R22 * l_T_2373; memset(&l_T_2373, 0, sizeof l_T_2373);
l_T_2373 = r_FLOAT_TYPE((l_P_2372).f_V);
if (r_TEQS(l_NAME_2312, rt_str("FLOAT_MIN", 9)))
{
{ R26 rv2374 = r_MKET(r_FLOAT_LIMIT(l_T_2373, r_MK(rt_str("MIN", 3))), l_T_2373);
return rv2374; }
}
else if (r_TEQS(l_NAME_2312, rt_str("FLOAT_MAX", 9)))
{
{ R26 rv2375 = r_MKET(r_FLOAT_LIMIT(l_T_2373, r_MK(rt_str("MAX", 3))), l_T_2373);
return rv2375; }
}
{ R26 rv2376 = r_MKET(r_FLOAT_LIMIT(l_T_2373, r_MK(rt_str("EPSILON", 7))), l_T_2373);
return rv2376; }
}
}
else if (r_TEQS(l_NAME_2312, rt_str("IMP_PRECISION", 13)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2377 = r_INT_ET(r_IMP_PRECISION_OF((r_MANIFEST_INTEGER_ARG(((*(R17 *)rt_nil_check(p_E))).f_A, rt_str("precision", 9), ((rt_int)1LL), r_MAX_FLOAT_PRECISION())).f_V));
return rv2377; }
}
else if (r_TEQS(l_NAME_2312, rt_str("IS_MANIFEST", 11)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2378 = r_MKET(r_NUM(r_BOOL_INT((r_MANIFEST(((*(R17 *)rt_nil_check(p_E))).f_A)).f_OK)), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2378; }
}
else if (r_TEQS(l_NAME_2312, rt_str("HANDLER_EXISTS", 14)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{ R26 rv2379 = r_MKET(r_NUM(r_BOOL_INT(r_HANDLER_EXISTS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NAME))), ((*(R7 *)rt_nil_check(g_W))).f_TY_BOOL);
return rv2379; }
}
if (r_TEQS(l_NAME_2312, rt_str("RUN_PATHS", 9)))
{
{ R26 rv2380 = r_RUN_PATHS(p_E);
return rv2380; }
}
{ R26 rv2381 = r_PARALLEL_BUILTIN(p_E, p_WANT);
return rv2381; }
rt_raise(RT_X_INIT);
}
static R26 r_IMAGE_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_2382; memset(&l_T_2382, 0, sizeof l_T_2382);
l_T_2382 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_2383; memset(&l_K_2383, 0, sizeof l_K_2383);
l_K_2383 = ((*(R22 *)rt_nil_check(l_T_2382))).f_KIND;
R22 * l_S_2384; memset(&l_S_2384, 0, sizeof l_S_2384);
l_S_2384 = r_STR_TYPE(r_NO_TEXT(), r_NO_MVAL());
if ((l_K_2383 == g_T_INT))
{
if ((((*(R22 *)rt_nil_check(l_T_2382))).f_SCALE == ((rt_int)0LL)))
{
{ R26 rv2385 = r_MKET(r_FMT1(rt_str("rt_b_image(@)", 13), (p_V).f_C), l_S_2384);
return rv2385; }
}
{ R26 rv2386 = r_MKET(r_FMT2(rt_str("rt_b_fix_image(@, @)", 20), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_2382))).f_SCALE)), l_S_2384);
return rv2386; }
}
else if (r_IS_D(l_T_2382))
{
{ R26 rv2387 = r_MKET(r_FMT2(rt_str("rt_b_d_image(@, @)", 18), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_2382))).f_SCALE)), l_S_2384);
return rv2387; }
}
else if ((l_K_2383 == g_T_FLOAT))
{
{ R26 rv2388 = r_MKET(r_FMT2(rt_str("rt_b_float_image(@, @)", 22), (p_V).f_C, r_NUM(((*(R22 *)rt_nil_check(l_T_2382))).f_SCALE)), l_S_2384);
return rv2388; }
}
else if ((l_K_2383 == g_T_BOOL))
{
{ R26 rv2389 = r_MKET(r_FMT1(rt_str("rt_b_bool_image(@)", 18), (p_V).f_C), l_S_2384);
return rv2389; }
}
else if ((l_K_2383 == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(l_T_2382))).f_BASE == ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII))
{
{ R26 rv2390 = r_MKET(r_FMT1(rt_str("rt_str_chr((int)@)", 18), (p_V).f_C), l_S_2384);
return rv2390; }
}
{ R26 rv2391 = r_MKET(r_FMT2(rt_str("rt_b_enum_image(@, @)", 21), ((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2382))).f_BASE))).f_CNAME, (p_V).f_C), l_S_2384);
return rv2391; }
}
else if (((l_K_2383 == g_T_STR) || (l_K_2383 == g_T_BITS)))
{
{ R26 rv2392 = r_MKET((p_V).f_C, l_S_2384);
return rv2392; }
}
r_FAILT(p_LINE, rt_str("no TO_CHAR for ", 15), r_TYPE_NAME(l_T_2382));
rt_raise(RT_X_INIT);
}
static R26 r_TO_FIXED_CALL(R17 * p_E) { RT_B_TICK(); 
R26 l_V_2393; memset(&l_V_2393, 0, sizeof l_V_2393);
S_R26(&l_V_2393, r_EXPR(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), NULL), 0);
R22 * l_T_2394; memset(&l_T_2394, 0, sizeof l_T_2394);
l_T_2394 = r_REAL_TYPE((l_V_2393).f_T);
rt_int l_N_2395; memset(&l_N_2395, 0, sizeof l_N_2395);
l_N_2395 = r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_E))).f_A);
R9 l_RND_2396; memset(&l_RND_2396, 0, sizeof l_RND_2396);
S_R9(&l_RND_2396, r_ROUNDING_ARG(p_E, l_N_2395), 0);
rt_int l_S_2397; memset(&l_S_2397, 0, sizeof l_S_2397);
l_S_2397 = ((rt_int)0LL);
if (((l_N_2395 >= ((rt_int)2LL)) && (!r_IS_ROUNDING(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))))))
{
l_S_2397 = (r_MANIFEST_INTEGER_ARG(r_ARG_EXPR(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, ((rt_int)1LL))), rt_str("scale", 5), rt_neg(((rt_int)1000LL)), ((rt_int)1000LL))).f_V;
}
{
rt_int l_K_2398; memset(&l_K_2398, 0, sizeof l_K_2398);
l_K_2398 = ((rt_int)2LL);
for (;;) {
if ((l_K_2398 >= l_N_2395)) goto L_end2399;
{
{
R17 * l_R_2400; memset(&l_R_2400, 0, sizeof l_R_2400);
l_R_2400 = r_ARG_EXPR(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, l_K_2398));
if ((r_IS_ROUNDING(l_R_2400) || (((((*(R17 *)rt_nil_check(r_NTH(((*(R17 *)rt_nil_check(p_E))).f_A, l_K_2398)))).f_KIND == g_N_QUAL) && (l_K_2398 == rt_sub(l_N_2395, ((rt_int)1LL)))))))
{
if ((!(l_K_2398 == rt_sub(l_N_2395, ((rt_int)1LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("the rounding mode is the last argument of TO_FIXED (3.2.6.1)", 60));
}
}
else if (((((((*(R17 *)rt_nil_check(l_R_2400))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_2400))).f_KIND == g_N_ENUMLIT))) && (!r_NAMES_OBJECT(((*(R17 *)rt_nil_check(l_R_2400))).f_NAME))))
{
r_CHECK_PRECISION_ARG(l_R_2400, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
}
else if (((((*(R17 *)rt_nil_check(l_R_2400))).f_KIND == g_N_FIELD) && r_TEQS(((*(R17 *)rt_nil_check(l_R_2400))).f_NAME, rt_str("PRECISION", 9))))
{
}
else
{
if ((!((r_MANIFEST_INTEGER_ARG(l_R_2400, rt_str("radix", 5), ((rt_int)2LL), ((rt_int)1000LL))).f_V == ((rt_int)2LL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("only radix 2 is predefined (3.2.6.1)", 36));
}
}
}
l_K_2398 = rt_add(l_K_2398, ((rt_int)1LL));
}
RT_B_TICK();
} L_end2399: ;
}
if (((((*(R22 *)rt_nil_check(l_T_2394))).f_KIND == g_T_INT) && (((((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_REAL) || (((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_KIND == g_N_INT)))))
{
{ R26 rv2401 = r_MKET(r_FMT3(rt_str("rt_b_fix_val(@, @, @)", 21), r_CSTRING(((*(R17 *)rt_nil_check(r_ARG_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)))).f_NAME), r_NUM(l_S_2397), l_RND_2396), r_INT_TYPE(l_S_2397));
return rv2401; }
}
if ((((*(R22 *)rt_nil_check(l_T_2394))).f_KIND == g_T_INT))
{
{
rt_int l_SAVED_2402; memset(&l_SAVED_2402, 0, sizeof l_SAVED_2402);
l_SAVED_2402 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R9 l_C_2403; memset(&l_C_2403, 0, sizeof l_C_2403);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = r_TEQS(l_RND_2396, rt_str("1", 1));
S_R9(&l_C_2403, r_RESCALE_C((l_V_2393).f_C, ((*(R22 *)rt_nil_check(l_T_2394))).f_SCALE, l_S_2397), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_2402;
{ R26 rv2404 = r_MKET(l_C_2403, r_INT_TYPE(l_S_2397));
return rv2404; }
}
}
else if (r_IS_D(l_T_2394))
{
{ R26 rv2405 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_d(@, @, @)", 22), (l_V_2393).f_C, r_NUM(l_S_2397), l_RND_2396), r_INT_TYPE(l_S_2397));
return rv2405; }
}
else if ((((*(R22 *)rt_nil_check(l_T_2394))).f_KIND == g_T_FLOAT))
{
{ R26 rv2406 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_float(@, @, @)", 26), (l_V_2393).f_C, r_NUM(l_S_2397), l_RND_2396), r_INT_TYPE(l_S_2397));
return rv2406; }
}
else if (((((*(R22 *)rt_nil_check(l_T_2394))).f_KIND == g_T_ENUM) || (((*(R22 *)rt_nil_check(l_T_2394))).f_KIND == g_T_BOOL)))
{
if ((((*(R22 *)rt_nil_check(l_T_2394))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_2394))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for an UNORDERED type (3.2.6.1)", 55));
}
if ((!(((*(R22 *)rt_nil_check(l_T_2394))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2394))).f_REPS))).f_B == NULL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("TO_FIXED is not defined for ENUM_VAL_REP (3.2.6.1)", 50));
}
}
}
{ R26 rv2407 = r_MKET(r_RESCALE_C((l_V_2393).f_C, ((rt_int)0LL), l_S_2397), r_INT_TYPE(l_S_2397));
return rv2407; }
}
else if ((((*(R22 *)rt_nil_check(l_T_2394))).f_KIND == g_T_BITS))
{
{ R26 rv2408 = r_MKET(r_RESCALE_C(r_FMT1(rt_str("rt_b_int_of_bits(@)", 19), (l_V_2393).f_C), ((rt_int)0LL), l_S_2397), r_INT_TYPE(l_S_2397));
return rv2408; }
}
else if ((((*(R22 *)rt_nil_check(l_T_2394))).f_KIND == g_T_STR))
{
r_ASCII_ONLY(l_T_2394, rt_str("TO_FIXED", 8), ((*(R17 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv2409 = r_MKET(r_FMT3(rt_str("rt_b_fix_of_str(@, @, @)", 24), (l_V_2393).f_C, r_NUM(l_S_2397), l_RND_2396), r_INT_TYPE(l_S_2397));
return rv2409; }
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no TO_FIXED for ", 16), r_TYPE_NAME((l_V_2393).f_T));
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_SIZE_OR(R22 * p_T) { RT_B_TICK(); 
R25 l_M_2410; memset(&l_M_2410, 0, sizeof l_M_2410);
S_R25(&l_M_2410, r_STATIC_SIZE(p_T), 0);
if ((l_M_2410).f_OK)
{
{ rt_int rv2411 = (l_M_2410).f_V;
return rv2411; }
}
{ rt_int rv2412 = rt_neg(((rt_int)1LL));
return rv2412; }
rt_raise(RT_X_INIT);
}
static R26 r_BITS_OF(R26 p_V, rt_int p_LINE) { RT_B_TICK(); 
R22 * l_T_2413; memset(&l_T_2413, 0, sizeof l_T_2413);
l_T_2413 = r_REAL_TYPE((p_V).f_T);
rt_int l_K_2414; memset(&l_K_2414, 0, sizeof l_K_2414);
l_K_2414 = ((*(R22 *)rt_nil_check(l_T_2413))).f_KIND;
if ((l_K_2414 == g_T_BITS))
{
{ R26 rv2415 = p_V;
return rv2415; }
}
else if ((l_K_2414 == g_T_ENUM))
{
if ((!(((*(R22 *)rt_nil_check(l_T_2413))).f_REPS == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_2413))).f_REPS))).f_B == NULL)))
{
{ R26 rv2416 = r_MKET(r_FMT2(rt_str("rt_b_rep_of_enum(@, @)", 22), (p_V).f_C, r_REP_TABLE(l_T_2413)), r_BITS_TYPE(r_ENUM_SIZE(l_T_2413)));
return rv2416; }
}
}
{ R26 rv2417 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_ENUM_SIZE(l_T_2413))), r_BITS_TYPE(r_ENUM_SIZE(l_T_2413)));
return rv2417; }
}
else if ((l_K_2414 == g_T_STR))
{
{ R26 rv2418 = r_MKET(r_FMT4(rt_str("rt_b_bits_of_chars(@, @, @, @)", 30), (p_V).f_C, r_NUM(r_CHAR_SIZE(l_T_2413)), r_NUM(r_PACKING_OF(l_T_2413)), r_CHAR_REPS(l_T_2413)), r_BITS_TYPE(r_STATIC_SIZE_OR(l_T_2413)));
return rv2418; }
}
r_REQUIRE_MACHINE(p_LINE);
if (((l_K_2414 == g_T_INT) && (r_REP_BITS(l_T_2413) < ((rt_int)63LL))))
{
{ R26 rv2419 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(r_REP_BITS(l_T_2413))), r_BITS_TYPE(r_REP_BITS(l_T_2413)));
return rv2419; }
}
else if ((l_K_2414 == g_T_INT))
{
{ R26 rv2420 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(@, @)", 22), (p_V).f_C, r_NUM(((*(R7 *)rt_nil_check(g_W))).f_WORD)), r_BITS_TYPE(((*(R7 *)rt_nil_check(g_W))).f_WORD));
return rv2420; }
}
else if ((l_K_2414 == g_T_BOOL))
{
{ R26 rv2421 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_int(@, 1)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)1LL)));
return rv2421; }
}
else if (r_IS_D(l_T_2413))
{
{ R26 rv2422 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_d(@)", 17), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv2422; }
}
else if (((l_K_2414 == g_T_FLOAT) && (((*(R7 *)rt_nil_check(g_W))).f_WORD == ((rt_int)16LL))))
{
{ R26 rv2423 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_f(@)", 17), (p_V).f_C), r_BITS_TYPE(((rt_int)32LL)));
return rv2423; }
}
else if (((l_K_2414 == g_T_FLOAT) && (r_IMP_PRECISION_OF(((*(R22 *)rt_nil_check(l_T_2413))).f_SCALE) == ((rt_int)7LL))))
{
{ R26 rv2424 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_single(@)", 22), (p_V).f_C), r_BITS_TYPE(((rt_int)32LL)));
return rv2424; }
}
else if ((l_K_2414 == g_T_FLOAT))
{
{ R26 rv2425 = r_MKET(r_FMT1(rt_str("rt_b_bits_of_float(@)", 21), (p_V).f_C), r_BITS_TYPE(((rt_int)64LL)));
return rv2425; }
}
else if ((l_K_2414 == g_T_XFIX))
{
{ R26 rv2426 = r_MKET((p_V).f_C, r_BITS_TYPE(r_XFIX_SIZE(l_T_2413)));
return rv2426; }
}
else if ((l_K_2414 == g_T_PTR))
{
{ R26 rv2427 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(rt_b_ptr_addr(@), @)", 37), (p_V).f_C, r_NUM(((*(R7 *)rt_nil_check(g_W))).f_WORD)), r_BITS_TYPE(((*(R7 *)rt_nil_check(g_W))).f_WORD));
return rv2427; }
}
else if ((l_K_2414 == g_T_SEM))
{
{ R26 rv2428 = r_MKET(r_FMT2(rt_str("rt_b_bits_of_int(rt_b_sem_count(@), @)", 38), (p_V).f_C, r_NUM(((*(R7 *)rt_nil_check(g_W))).f_WORD)), r_BITS_TYPE(((*(R7 *)rt_nil_check(g_W))).f_WORD));
return rv2428; }
}
else if ((l_K_2414 == g_T_REC))
{
{ R26 rv2429 = r_MKET(r_RECORD_BITS(l_T_2413, (p_V).f_C), r_BITS_TYPE(r_STATIC_SIZE_OR(l_T_2413)));
return rv2429; }
}
else if ((l_K_2414 == g_T_ARR))
{
{ R26 rv2430 = r_MKET(r_ARRAY_BITS(l_T_2413, (p_V).f_C), r_BITS_TYPE(r_STATIC_SIZE_OR(l_T_2413)));
return rv2430; }
}
r_FAILT(p_LINE, rt_str("no TO_BIT for ", 14), r_TYPE_NAME(l_T_2413));
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
{ rt_int rv2431 = 0;
return rv2431; }
}
{ rt_int rv2432 = ((r_IS_LITERALISH(((*(R29 *)rt_nil_check(p_A))).f_E) || (((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT)) || (((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NEW));
return rv2432; }
rt_raise(RT_X_INIT);
}
static rt_int r_COUNT_ARGS(R29 * p_A) { RT_B_TICK(); 
rt_int l_N_2433; memset(&l_N_2433, 0, sizeof l_N_2433);
l_N_2433 = ((rt_int)0LL);
R29 * l_P_2434; memset(&l_P_2434, 0, sizeof l_P_2434);
l_P_2434 = p_A;
for (;;) {
if ((l_P_2434 == NULL)) goto L_end2435;
{
l_N_2433 = rt_add(l_N_2433, ((rt_int)1LL));
l_P_2434 = ((*(R29 *)rt_nil_check(l_P_2434))).f_NEXT;
}
RT_B_TICK();
} L_end2435: ;
{ rt_int rv2436 = l_N_2433;
return rv2436; }
rt_raise(RT_X_INIT);
}
static R29 * r_CALL_ARGS(R17 * p_E) { RT_B_TICK(); 
R29 * l_HEAD_2437; memset(&l_HEAD_2437, 0, sizeof l_HEAD_2437);
l_HEAD_2437 = NULL;
R29 * l_TAIL_2438; memset(&l_TAIL_2438, 0, sizeof l_TAIL_2438);
l_TAIL_2438 = NULL;
rt_int l_G_2439; memset(&l_G_2439, 0, sizeof l_G_2439);
l_G_2439 = ((rt_int)0LL);
{ rt_int it2441_lo = ((rt_int)0LL), it2441_hi = ((rt_int)2LL);
for (rt_int it2441 = it2441_lo; it2441 <= it2441_hi; it2441++) {
{
{
R17 * l_P_2442; memset(&l_P_2442, 0, sizeof l_P_2442);
l_P_2442 = ((*(R17 *)rt_nil_check(p_E))).f_A;
if ((it2441 == ((rt_int)1LL)))
{
l_P_2442 = ((*(R17 *)rt_nil_check(p_E))).f_B;
}
else if ((it2441 == ((rt_int)2LL)))
{
l_P_2442 = ((*(R17 *)rt_nil_check(p_E))).f_C;
}
for (;;) {
if ((l_P_2442 == NULL)) goto L_end2443;
{
{
R29 * l_A_2444; memset(&l_A_2444, 0, sizeof l_A_2444);
l_A_2444 = r_NODE_ARG(l_P_2442, it2441, NULL);
if ((l_TAIL_2438 == NULL))
{
l_HEAD_2437 = l_A_2444;
}
else
{
((*(R29 *)rt_nil_check(l_TAIL_2438))).f_NEXT = l_A_2444;
}
l_TAIL_2438 = l_A_2444;
}
l_P_2442 = ((*(R17 *)rt_nil_check(l_P_2442))).f_NEXT;
}
RT_B_TICK();
} L_end2443: ;
}
}
RT_B_TICK();
if (it2441 == it2441_hi) break;
} } L_end2440: ;
{ R29 * rv2445 = l_HEAD_2437;
return rv2445; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
rt_int l_SAVED_2446; memset(&l_SAVED_2446, 0, sizeof l_SAVED_2446);
l_SAVED_2446 = ((*(R7 *)rt_nil_check(g_W))).f_ROUNDED;
R17 * l_SAVED_Q_2447; memset(&l_SAVED_Q_2447, 0, sizeof l_SAVED_Q_2447);
l_SAVED_Q_2447 = ((*(R7 *)rt_nil_check(g_W))).f_QUAL;
R26 l_V_2448; memset(&l_V_2448, 0, sizeof l_V_2448);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = 0;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = NULL;
S_R26(&l_V_2448, r_CALL_EXPR1(p_E, p_WANT), 0);
((*(R7 *)rt_nil_check(g_W))).f_ROUNDED = l_SAVED_2446;
((*(R7 *)rt_nil_check(g_W))).f_QUAL = l_SAVED_Q_2447;
{ R26 rv2449 = l_V_2448;
return rv2449; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_EXPR1(R17 * p_E, R22 * p_WANT) { RT_B_TICK(); 
R29 * l_ARGS_2450; memset(&l_ARGS_2450, 0, sizeof l_ARGS_2450);
l_ARGS_2450 = r_CALL_ARGS(p_E);
R12 * l_Y_2451; memset(&l_Y_2451, 0, sizeof l_Y_2451);
if (r_TEQS(((*(R17 *)rt_nil_check(p_E))).f_NAME, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(((*(R17 *)rt_nil_check(p_E))).f_LINE);
{ R26 rv2452 = r_START_IO_CALL(p_E);
return rv2452; }
}
l_Y_2451 = r_BOUND_ROUTINE(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2451 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2451))).f_KIND == g_Y_BUILTIN))
{
{
R17 * l_N_2453; memset(&l_N_2453, 0, sizeof l_N_2453);
l_N_2453 = r_COPY_NODE(p_E);
S_R9(&((*(R17 *)rt_nil_check(l_N_2453))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_2451))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_2453))).f_NEXT = ((*(R17 *)rt_nil_check(p_E))).f_NEXT;
{ R26 rv2454 = r_BUILTIN(l_N_2453, p_WANT);
return rv2454; }
}
}
{ R26 rv2455 = r_CALL_SYM(l_Y_2451, l_ARGS_2450, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv2455; }
}
{
R9 l_SHORT_2456; memset(&l_SHORT_2456, 0, sizeof l_SHORT_2456);
S_R9(&l_SHORT_2456, r_WHERE_SHORT_NAME(((*(R17 *)rt_nil_check(p_E))).f_NAME), 0);
if ((!r_TEQ(l_SHORT_2456, ((*(R17 *)rt_nil_check(p_E))).f_NAME)))
{
{
R17 * l_N_2457; memset(&l_N_2457, 0, sizeof l_N_2457);
l_N_2457 = r_COPY_NODE(p_E);
S_R9(&((*(R17 *)rt_nil_check(l_N_2457))).f_NAME, l_SHORT_2456, 0);
((*(R17 *)rt_nil_check(l_N_2457))).f_NEXT = ((*(R17 *)rt_nil_check(p_E))).f_NEXT;
{ R26 rv2458 = r_CALL_EXPR1(l_N_2457, p_WANT);
return rv2458; }
}
}
}
l_Y_2451 = r_FIND_ROUTINE(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_ARGS_2450, ((*(R17 *)rt_nil_check(p_E))).f_LINE, 1);
if ((l_Y_2451 == NULL))
{
{
R12 * l_P_2459; memset(&l_P_2459, 0, sizeof l_P_2459);
l_P_2459 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
for (;;) {
if ((l_P_2459 == NULL)) goto L_end2460;
{
if ((((*(R12 *)rt_nil_check(l_P_2459))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv2461 = r_BUILTIN(p_E, p_WANT);
return rv2461; }
}
l_P_2459 = r_LOOKUP_NEXT(l_P_2459);
}
RT_B_TICK();
} L_end2460: ;
}
{
R12 * l_B_2462; memset(&l_B_2462, 0, sizeof l_B_2462);
l_B_2462 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_B_2462 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_B_2462))).f_KIND == g_Y_BUILTIN))
{
{ R26 rv2463 = r_BUILTIN(p_E, p_WANT);
return rv2463; }
}
if (((((*(R12 *)rt_nil_check(l_B_2462))).f_KIND == g_Y_ROUTINE) || (!(((*(R12 *)rt_nil_check(l_B_2462))).f_ORIG == NULL))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no declaration of the routine fits these arguments: ", 52), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a routine: ", 15), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
}
{
R9 l_BASE_2464; memset(&l_BASE_2464, 0, sizeof l_BASE_2464);
S_R9(&l_BASE_2464, r_CLASS_OPERATION(((*(R17 *)rt_nil_check(p_E))).f_NAME), 0);
if (((l_BASE_2464).f_LEN > ((rt_int)0LL)))
{
{
R17 * l_N_2465; memset(&l_N_2465, 0, sizeof l_N_2465);
l_N_2465 = r_COPY_NODE(p_E);
S_R9(&((*(R17 *)rt_nil_check(l_N_2465))).f_NAME, l_BASE_2464, 0);
{ R26 rv2466 = r_BUILTIN(l_N_2465, p_WANT);
return rv2466; }
}
}
}
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown routine ", 16), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
{ R26 rv2467 = r_CALL_SYM(l_Y_2451, l_ARGS_2450, ((*(R17 *)rt_nil_check(p_E))).f_LINE);
return rv2467; }
rt_raise(RT_X_INIT);
}
static R9 r_CLASS_OPERATION(R9 p_NAME) { RT_B_TICK(); 
rstr l_S_2468; memset(&l_S_2468, 0, sizeof l_S_2468);
l_S_2468 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2468, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2470_lo = ((rt_int)1LL), it2470_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2470 = it2470_lo; it2470 <= it2470_hi; it2470++) {
{
if (rt_b_eq(rt_b_slice(l_S_2468, it2470, it2470), rt_str("$", 1)))
{
{
R9 l_P_2471; memset(&l_P_2471, 0, sizeof l_P_2471);
S_R9(&l_P_2471, r_MKN(rt_b_slice(l_S_2468, ((rt_int)0LL), rt_sub(it2470, ((rt_int)1LL)))), 0);
R9 l_B_2472; memset(&l_B_2472, 0, sizeof l_B_2472);
S_R9(&l_B_2472, r_MKN(rt_b_slice(l_S_2468, rt_add(it2470, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))), 0);
if ((((((((r_IS_TYPE_WORD(l_P_2471) || r_TEQS(l_P_2471, rt_str("INTEGER", 7))) || r_TEQS(l_P_2471, rt_str("BOOLEAN", 7))) || r_TEQS(l_P_2471, rt_str("ENUM", 4))) || r_TEQS(l_P_2471, rt_str("ARRAY", 5))) || r_TEQS(l_P_2471, rt_str("RECORD", 6))) || r_TEQS(l_P_2471, rt_str("PTR", 3))) || r_TEQS(l_P_2471, rt_str("SEMAPHORE", 9))))
{
{
R12 * l_Y_2473; memset(&l_Y_2473, 0, sizeof l_Y_2473);
l_Y_2473 = r_LOOKUP(l_B_2472);
for (;;) {
if ((l_Y_2473 == NULL)) goto L_end2474;
{
if ((((*(R12 *)rt_nil_check(l_Y_2473))).f_KIND == g_Y_BUILTIN))
{
{ R9 rv2475 = l_B_2472;
return rv2475; }
}
l_Y_2473 = r_LOOKUP_NEXT(l_Y_2473);
}
RT_B_TICK();
} L_end2474: ;
}
}
}
{ R9 rv2476 = r_NO_TEXT();
return rv2476; }
}
}
RT_B_TICK();
if (it2470 == it2470_hi) break;
} } L_end2469: ;
{ R9 rv2477 = r_NO_TEXT();
return rv2477; }
rt_raise(RT_X_INIT);
}
static R9 r_WHERE_SHORT_NAME(R9 p_NAME) { RT_B_TICK(); 
R12 * l_G_2478; memset(&l_G_2478, 0, sizeof l_G_2478);
l_G_2478 = r_CUR_GENERIC();
rstr l_S_2479; memset(&l_S_2479, 0, sizeof l_S_2479);
l_S_2479 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2479, r_STR(p_NAME, (p_NAME).f_LEN));
if ((l_G_2478 == NULL))
{
{ R9 rv2480 = p_NAME;
return rv2480; }
}
{ rt_int it2482_lo = ((rt_int)1LL), it2482_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2482 = it2482_lo; it2482 <= it2482_hi; it2482++) {
{
if (rt_b_eq(rt_b_slice(l_S_2479, it2482, it2482), rt_str("$", 1)))
{
if (((!(r_FIND_BIND(((*(R12 *)rt_nil_check(l_G_2478))).f_BINDINGS, r_MKN(rt_b_slice(l_S_2479, ((rt_int)0LL), rt_sub(it2482, ((rt_int)1LL))))) == NULL)) && r_IN_WHERE(l_G_2478, r_MKN(rt_b_slice(l_S_2479, rt_add(it2482, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))))))
{
{ R9 rv2483 = r_MKN(rt_b_slice(l_S_2479, rt_add(it2482, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))));
return rv2483; }
}
{ R9 rv2484 = p_NAME;
return rv2484; }
}
}
RT_B_TICK();
if (it2482 == it2482_hi) break;
} } L_end2481: ;
{ R9 rv2485 = p_NAME;
return rv2485; }
rt_raise(RT_X_INIT);
}
static R12 * r_BOUND_ROUTINE(R9 p_NAME) { RT_B_TICK(); 
R21 * l_B_2486; memset(&l_B_2486, 0, sizeof l_B_2486);
l_B_2486 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
{
rstr l_S_2487; memset(&l_S_2487, 0, sizeof l_S_2487);
l_S_2487 = rt_b_str_new((p_NAME).f_LEN, 0);
rt_b_assign(&l_S_2487, r_STR(p_NAME, (p_NAME).f_LEN));
{ rt_int it2489_lo = ((rt_int)1LL), it2489_hi = rt_sub((p_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it2489 = it2489_lo; it2489 <= it2489_hi; it2489++) {
{
if (rt_b_eq(rt_b_slice(l_S_2487, it2489, it2489), rt_str("$", 1)))
{
if ((!(r_FIND_BIND(((*(R7 *)rt_nil_check(g_W))).f_BINDS, r_MKN(rt_b_slice(l_S_2487, ((rt_int)0LL), rt_sub(it2489, ((rt_int)1LL))))) == NULL)))
{
{ R12 * rv2490 = r_BOUND_ROUTINE(r_MKN(rt_b_slice(l_S_2487, rt_add(it2489, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)))));
return rv2490; }
}
goto L_end2488;
}
}
RT_B_TICK();
if (it2489 == it2489_hi) break;
} } L_end2488: ;
}
for (;;) {
if ((l_B_2486 == NULL)) goto L_end2491;
{
if (((!(((*(R21 *)rt_nil_check(l_B_2486))).f_R == NULL)) && r_TEQ(((*(R21 *)rt_nil_check(l_B_2486))).f_NAME, p_NAME)))
{
{ R12 * rv2492 = ((*(R21 *)rt_nil_check(l_B_2486))).f_R;
return rv2492; }
}
l_B_2486 = ((*(R21 *)rt_nil_check(l_B_2486))).f_NEXT;
}
RT_B_TICK();
} L_end2491: ;
{ R12 * rv2493 = NULL;
return rv2493; }
rt_raise(RT_X_INIT);
}
static rt_int r_CANDIDATE(R12 * p_Y, R9 p_NAME) { RT_B_TICK(); 
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)))
{
{ rt_int rv2494 = 0;
return rv2494; }
}
if ((((!(((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL)) && ((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL))) && (!r_TEQ(((*(R12 *)rt_nil_check(p_Y))).f_NAME, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_ORIG))).f_NAME))))
{
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MODL == NULL)))
{
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL))
{
{ rt_int rv2495 = 0;
return rv2495; }
}
}
}
{ rt_int rv2496 = 1;
return rv2496; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE(R9 p_NAME, R29 * p_ARGS, rt_int p_LINE, rt_int p_MUST) { RT_B_TICK(); 
R12 * l_Y_2497; memset(&l_Y_2497, 0, sizeof l_Y_2497);
l_Y_2497 = r_LOOKUP(p_NAME);
R12 * l_BEST_2498; memset(&l_BEST_2498, 0, sizeof l_BEST_2498);
l_BEST_2498 = NULL;
rt_int l_BEST_SCORE_2499; memset(&l_BEST_SCORE_2499, 0, sizeof l_BEST_SCORE_2499);
l_BEST_SCORE_2499 = ((rt_int)0LL);
rt_int l_TIES_2500; memset(&l_TIES_2500, 0, sizeof l_TIES_2500);
l_TIES_2500 = ((rt_int)0LL);
rt_int l_COUNT_2501; memset(&l_COUNT_2501, 0, sizeof l_COUNT_2501);
l_COUNT_2501 = ((rt_int)0LL);
rt_int l_N_2502; memset(&l_N_2502, 0, sizeof l_N_2502);
l_N_2502 = r_COUNT_ARGS(p_ARGS);
for (;;) {
if ((l_Y_2497 == NULL)) goto L_end2503;
{
if ((!r_IS_ROUTINE(l_Y_2497)))
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2497))).f_KIND == g_Y_ENUMLIT)))
{
goto L_end2503;
}
}
else if (r_CANDIDATE(l_Y_2497, p_NAME))
{
{
R12 * l_R_2504; memset(&l_R_2504, 0, sizeof l_R_2504);
l_R_2504 = r_ORIGINAL(l_Y_2497);
rt_int l_SCORE_2505; memset(&l_SCORE_2505, 0, sizeof l_SCORE_2505);
r_ROUTINE_HEADER(l_R_2504);
if ((((r_PARAM_COUNT(l_R_2504) == l_N_2502) && (!r_SEEN_ROUTINE(l_R_2504, p_NAME, l_Y_2497))) && (!r_HIDDEN_ROUTINE(l_R_2504, p_NAME, l_Y_2497))))
{
l_COUNT_2501 = rt_add(l_COUNT_2501, ((rt_int)1LL));
l_SCORE_2505 = r_MATCH_SCORE(l_R_2504, p_ARGS);
if ((l_SCORE_2505 > l_BEST_SCORE_2499))
{
l_BEST_2498 = l_R_2504;
l_BEST_SCORE_2499 = l_SCORE_2505;
l_TIES_2500 = ((rt_int)0LL);
}
else if (((l_SCORE_2505 == l_BEST_SCORE_2499) && (l_SCORE_2505 > ((rt_int)0LL))))
{
l_TIES_2500 = rt_add(l_TIES_2500, ((rt_int)1LL));
}
}
}
}
l_Y_2497 = r_LOOKUP_NEXT(l_Y_2497);
}
RT_B_TICK();
} L_end2503: ;
if (((l_TIES_2500 > ((rt_int)0LL)) && p_MUST))
{
r_FAILT(p_LINE, rt_str("an ambiguous invocation (4.3.2): ", 33), p_NAME);
}
{ R12 * rv2506 = l_BEST_2498;
return rv2506; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEEN_ROUTINE(R12 * p_R, R9 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2507; memset(&l_Y_2507, 0, sizeof l_Y_2507);
l_Y_2507 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2507 == p_STOP) || (l_Y_2507 == NULL))) goto L_end2508;
{
if ((((*(R12 *)rt_nil_check(l_Y_2507))).f_KIND == g_Y_ROUTINE))
{
if ((r_ORIGINAL(l_Y_2507) == p_R))
{
{ rt_int rv2509 = 1;
return rv2509; }
}
}
l_Y_2507 = r_LOOKUP_NEXT(l_Y_2507);
}
RT_B_TICK();
} L_end2508: ;
{ rt_int rv2510 = 0;
return rv2510; }
rt_raise(RT_X_INIT);
}
static rt_int r_HIDDEN_ROUTINE(R12 * p_R, R9 p_NAME, R12 * p_STOP) { RT_B_TICK(); 
R12 * l_Y_2511; memset(&l_Y_2511, 0, sizeof l_Y_2511);
l_Y_2511 = r_LOOKUP(p_NAME);
for (;;) {
if (((l_Y_2511 == p_STOP) || (l_Y_2511 == NULL))) goto L_end2512;
{
if (((((*(R12 *)rt_nil_check(l_Y_2511))).f_KIND == g_Y_ROUTINE) && (((*(R12 *)rt_nil_check(l_Y_2511))).f_DEPTH > ((*(R12 *)rt_nil_check(p_STOP))).f_DEPTH)))
{
{
R12 * l_O_2513; memset(&l_O_2513, 0, sizeof l_O_2513);
l_O_2513 = r_ORIGINAL(l_Y_2511);
if ((!(l_O_2513 == p_R)))
{
r_ROUTINE_HEADER(l_O_2513);
if (r_SAME_SIGNATURE(l_O_2513, p_R))
{
{ rt_int rv2514 = 1;
return rv2514; }
}
}
}
}
l_Y_2511 = r_LOOKUP_NEXT(l_Y_2511);
}
RT_B_TICK();
} L_end2512: ;
{ rt_int rv2515 = 0;
return rv2515; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_SIGNATURE(R12 * p_A, R12 * p_B) { RT_B_TICK(); 
R30 * l_P_2516; memset(&l_P_2516, 0, sizeof l_P_2516);
l_P_2516 = ((*(R12 *)rt_nil_check(p_A))).f_PARAMS;
R30 * l_Q_2517; memset(&l_Q_2517, 0, sizeof l_Q_2517);
l_Q_2517 = ((*(R12 *)rt_nil_check(p_B))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_A))).f_GENERIC || ((*(R12 *)rt_nil_check(p_B))).f_GENERIC))
{
{ rt_int rv2518 = 0;
return rv2518; }
}
for (;;) {
if (((l_P_2516 == NULL) || (l_Q_2517 == NULL))) goto L_end2519;
{
if ((!(((*(R30 *)rt_nil_check(l_P_2516))).f_MODE == ((*(R30 *)rt_nil_check(l_Q_2517))).f_MODE)))
{
{ rt_int rv2520 = 0;
return rv2520; }
}
if (((((*(R30 *)rt_nil_check(l_P_2516))).f_T == NULL) || (((*(R30 *)rt_nil_check(l_Q_2517))).f_T == NULL)))
{
if ((!(((*(R30 *)rt_nil_check(l_P_2516))).f_T == ((*(R30 *)rt_nil_check(l_Q_2517))).f_T)))
{
{ rt_int rv2521 = 0;
return rv2521; }
}
}
else if ((!r_SAME_TYPE(((*(R30 *)rt_nil_check(l_P_2516))).f_T, ((*(R30 *)rt_nil_check(l_Q_2517))).f_T)))
{
{ rt_int rv2522 = 0;
return rv2522; }
}
l_P_2516 = ((*(R30 *)rt_nil_check(l_P_2516))).f_NEXT;
l_Q_2517 = ((*(R30 *)rt_nil_check(l_Q_2517))).f_NEXT;
}
RT_B_TICK();
} L_end2519: ;
{ rt_int rv2523 = ((l_P_2516 == NULL) && (l_Q_2517 == NULL));
return rv2523; }
rt_raise(RT_X_INIT);
}
static rt_int r_PARAM_COUNT(R12 * p_R) { RT_B_TICK(); 
rt_int l_N_2524; memset(&l_N_2524, 0, sizeof l_N_2524);
l_N_2524 = ((rt_int)0LL);
R30 * l_P_2525; memset(&l_P_2525, 0, sizeof l_P_2525);
l_P_2525 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
for (;;) {
if ((l_P_2525 == NULL)) goto L_end2526;
{
l_N_2524 = rt_add(l_N_2524, ((rt_int)1LL));
l_P_2525 = ((*(R30 *)rt_nil_check(l_P_2525))).f_NEXT;
}
RT_B_TICK();
} L_end2526: ;
{ rt_int rv2527 = l_N_2524;
return rv2527; }
rt_raise(RT_X_INIT);
}
static rt_int r_MATCH_SCORE(R12 * p_R, R29 * p_ARGS) { RT_B_TICK(); 
R30 * l_P_2528; memset(&l_P_2528, 0, sizeof l_P_2528);
l_P_2528 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
R29 * l_A_2529; memset(&l_A_2529, 0, sizeof l_A_2529);
l_A_2529 = p_ARGS;
rt_int l_EXACT_2530; memset(&l_EXACT_2530, 0, sizeof l_EXACT_2530);
l_EXACT_2530 = 1;
R21 * l_BS_2531; memset(&l_BS_2531, 0, sizeof l_BS_2531);
l_BS_2531 = r_NEW_BINDS();
R22 * l_PT_2532; memset(&l_PT_2532, 0, sizeof l_PT_2532);
for (;;) {
if ((l_P_2528 == NULL)) goto L_end2533;
{
l_PT_2532 = r_FORMAL_VIEW(p_R, l_P_2528);
if ((!(((*(R30 *)rt_nil_check(l_P_2528))).f_MODE == ((*(R29 *)rt_nil_check(l_A_2529))).f_MODE)))
{
{ rt_int rv2534 = ((rt_int)0LL);
return rv2534; }
}
if ((((*(R12 *)rt_nil_check(p_R))).f_GENERIC && (!(((*(R30 *)rt_nil_check(l_P_2528))).f_TS == NULL))))
{
if ((!r_GENERIC_FITS(l_P_2528, l_A_2529, l_BS_2531)))
{
{ rt_int rv2535 = ((rt_int)0LL);
return rv2535; }
}
}
else if ((l_PT_2532 == NULL))
{
if (((*(R29 *)rt_nil_check(l_A_2529))).f_HAVE)
{
if ((!((((*(R29 *)rt_nil_check(l_A_2529))).f_V).f_T == ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE)))
{
{ rt_int rv2536 = ((rt_int)0LL);
return rv2536; }
}
}
}
else if (r_WANT_SENSITIVE(l_A_2529))
{
if ((!r_LITERAL_FITS(((*(R29 *)rt_nil_check(l_A_2529))).f_E, l_PT_2532)))
{
{ rt_int rv2537 = ((rt_int)0LL);
return rv2537; }
}
}
else
{
r_TYPE_ARG(l_A_2529);
{
R22 * l_AT_2538; memset(&l_AT_2538, 0, sizeof l_AT_2538);
l_AT_2538 = (((*(R29 *)rt_nil_check(l_A_2529))).f_V).f_T;
if ((!((r_SAME_CLASS(l_PT_2532, l_AT_2538) || (((((*(R22 *)rt_nil_check(l_AT_2538))).f_KIND == g_T_NIL) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2532)))).f_KIND == g_T_PTR)))))))
{
{ rt_int rv2539 = ((rt_int)0LL);
return rv2539; }
}
if (((((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2532)))).f_KIND == g_T_XFIX) || (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2538)))).f_KIND == g_T_XFIX))) && (!r_SAME_XFIX(l_PT_2532, l_AT_2538))))
{
{ rt_int rv2540 = ((rt_int)0LL);
return rv2540; }
}
if ((((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2532)))).f_GEN).f_LEN > ((rt_int)0LL)) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2538)))).f_MLEN).f_OK))
{
{
R9 l_KEY_2541; memset(&l_KEY_2541, 0, sizeof l_KEY_2541);
S_R9(&l_KEY_2541, r_QMKN(rt_str("%", 1), ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2532)))).f_GEN), 0);
R21 * l_B_2542; memset(&l_B_2542, 0, sizeof l_B_2542);
l_B_2542 = r_FIND_BIND(((*(R21 *)rt_nil_check(l_BS_2531))).f_NEXT, l_KEY_2541);
if ((!(l_B_2542 == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(l_B_2542))).f_MV == (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2538)))).f_MLEN).f_V)))
{
{ rt_int rv2543 = ((rt_int)0LL);
return rv2543; }
}
}
else
{
r_ADD_BIND(l_KEY_2541, NULL, ((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2538)))).f_MLEN, NULL, l_BS_2531);
}
}
}
if ((!r_SAME_TYPE(l_PT_2532, l_AT_2538)))
{
if ((((*(R30 *)rt_nil_check(l_P_2528))).f_MODE == g_M_INOUT))
{
{ rt_int rv2544 = ((rt_int)0LL);
return rv2544; }
}
l_EXACT_2530 = 0;
}
if (((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_AT_2538)))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2532)))).f_KIND == g_T_INT)))
{
if (((((*(R30 *)rt_nil_check(l_P_2528))).f_MODE == g_M_IN) && (((*(R22 *)rt_nil_check(l_AT_2538))).f_SCALE > ((*(R22 *)rt_nil_check(l_PT_2532))).f_SCALE)))
{
{ rt_int rv2545 = ((rt_int)0LL);
return rv2545; }
}
else if (((((*(R30 *)rt_nil_check(l_P_2528))).f_MODE == g_M_OUT) && (((*(R22 *)rt_nil_check(l_PT_2532))).f_SCALE > ((*(R22 *)rt_nil_check(l_AT_2538))).f_SCALE)))
{
{ rt_int rv2546 = ((rt_int)0LL);
return rv2546; }
}
}
}
}
l_P_2528 = ((*(R30 *)rt_nil_check(l_P_2528))).f_NEXT;
l_A_2529 = ((*(R29 *)rt_nil_check(l_A_2529))).f_NEXT;
}
RT_B_TICK();
} L_end2533: ;
if (l_EXACT_2530)
{
{ rt_int rv2547 = ((rt_int)2LL);
return rv2547; }
}
{ rt_int rv2548 = ((rt_int)1LL);
return rv2548; }
rt_raise(RT_X_INIT);
}
static rt_int r_LITERAL_FITS(R17 * p_E, R22 * p_T) { RT_B_TICK(); 
R22 * l_RT_2549; memset(&l_RT_2549, 0, sizeof l_RT_2549);
l_RT_2549 = r_REAL_TYPE(p_T);
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ENUMLIT) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
if ((((*(R22 *)rt_nil_check(l_RT_2549))).f_KIND == g_T_ENUM))
{
{ rt_int rv2550 = (!(r_FIND_LITERAL(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_RT_2549) == NULL));
return rv2550; }
}
{ rt_int rv2551 = 0;
return rv2551; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NIL))
{
{ rt_int rv2552 = (((*(R22 *)rt_nil_check(l_RT_2549))).f_KIND == g_T_PTR);
return rv2552; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_RECCONS))
{
{ rt_int rv2553 = (((*(R22 *)rt_nil_check(l_RT_2549))).f_KIND == g_T_REC);
return rv2553; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_ARRCONS))
{
{ rt_int rv2554 = (((*(R22 *)rt_nil_check(l_RT_2549))).f_KIND == g_T_ARR);
return rv2554; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_INT))
{
{ rt_int rv2555 = (((*(R22 *)rt_nil_check(l_RT_2549))).f_KIND == g_T_INT);
return rv2555; }
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NEW))
{
{ rt_int rv2556 = ((((*(R22 *)rt_nil_check(l_RT_2549))).f_KIND == g_T_PTR) || (((*(R22 *)rt_nil_check(l_RT_2549))).f_KIND == g_T_SEM));
return rv2556; }
}
{ rt_int rv2557 = 0;
return rv2557; }
rt_raise(RT_X_INIT);
}
static R12 * r_ARG_ROOT(R17 * p_E) { RT_B_TICK(); 
R17 * l_N_2558; memset(&l_N_2558, 0, sizeof l_N_2558);
l_N_2558 = p_E;
for (;;) {
if ((l_N_2558 == NULL)) goto L_end2559;
{
if (((((*(R17 *)rt_nil_check(l_N_2558))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_N_2558))).f_KIND == g_N_APPLY)))
{
{
R12 * l_Y_2560; memset(&l_Y_2560, 0, sizeof l_Y_2560);
l_Y_2560 = r_LOOKUP(((*(R17 *)rt_nil_check(l_N_2558))).f_NAME);
if ((l_Y_2560 == NULL))
{
{ R12 * rv2561 = NULL;
return rv2561; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2560))).f_KIND == g_Y_VAR)))
{
{ R12 * rv2562 = NULL;
return rv2562; }
}
{ R12 * rv2563 = l_Y_2560;
return rv2563; }
}
}
else if (((((((*(R17 *)rt_nil_check(l_N_2558))).f_KIND == g_N_INDEX) || (((*(R17 *)rt_nil_check(l_N_2558))).f_KIND == g_N_FIELD)) || (((*(R17 *)rt_nil_check(l_N_2558))).f_KIND == g_N_SUBSTR)) || (((*(R17 *)rt_nil_check(l_N_2558))).f_KIND == g_N_PAREN)))
{
l_N_2558 = ((*(R17 *)rt_nil_check(l_N_2558))).f_A;
}
else
{
{ R12 * rv2564 = NULL;
return rv2564; }
}
}
RT_B_TICK();
} L_end2559: ;
{ R12 * rv2565 = NULL;
return rv2565; }
rt_raise(RT_X_INIT);
}
static R17 * r_PATH_OF(R17 * p_E) { RT_B_TICK(); 
R17 * l_N_2566; memset(&l_N_2566, 0, sizeof l_N_2566);
l_N_2566 = p_E;
R17 * l_P_2567; memset(&l_P_2567, 0, sizeof l_P_2567);
l_P_2567 = NULL;
for (;;) {
if ((l_N_2566 == NULL)) goto L_end2568;
{
if ((((*(R17 *)rt_nil_check(l_N_2566))).f_KIND == g_N_FIELD))
{
l_P_2567 = r_NAME_REF(((*(R17 *)rt_nil_check(l_N_2566))).f_NAME, ((rt_int)0LL), NULL, l_P_2567);
l_N_2566 = ((*(R17 *)rt_nil_check(l_N_2566))).f_A;
}
else if (((((*(R17 *)rt_nil_check(l_N_2566))).f_KIND == g_N_INDEX) || (((*(R17 *)rt_nil_check(l_N_2566))).f_KIND == g_N_SUBSTR)))
{
l_P_2567 = r_NAME_REF(r_MKN(rt_str("*", 1)), ((rt_int)0LL), NULL, l_P_2567);
l_N_2566 = ((*(R17 *)rt_nil_check(l_N_2566))).f_A;
}
else if ((((*(R17 *)rt_nil_check(l_N_2566))).f_KIND == g_N_APPLY))
{
l_P_2567 = r_NAME_REF(r_MKN(rt_str("*", 1)), ((rt_int)0LL), NULL, l_P_2567);
{ R17 * rv2569 = l_P_2567;
return rv2569; }
}
else if ((((*(R17 *)rt_nil_check(l_N_2566))).f_KIND == g_N_PAREN))
{
l_N_2566 = ((*(R17 *)rt_nil_check(l_N_2566))).f_A;
}
else
{
{ R17 * rv2570 = l_P_2567;
return rv2570; }
}
}
RT_B_TICK();
} L_end2568: ;
{ R17 * rv2571 = l_P_2567;
return rv2571; }
rt_raise(RT_X_INIT);
}
static rt_int r_DISJOINT_PATHS(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_P_2572; memset(&l_P_2572, 0, sizeof l_P_2572);
l_P_2572 = p_A;
R17 * l_Q_2573; memset(&l_Q_2573, 0, sizeof l_Q_2573);
l_Q_2573 = p_B;
for (;;) {
if (((l_P_2572 == NULL) || (l_Q_2573 == NULL))) goto L_end2574;
{
if ((((!r_TEQS(((*(R17 *)rt_nil_check(l_P_2572))).f_NAME, rt_str("*", 1))) && (!r_TEQS(((*(R17 *)rt_nil_check(l_Q_2573))).f_NAME, rt_str("*", 1)))) && (!r_TEQ(((*(R17 *)rt_nil_check(l_P_2572))).f_NAME, ((*(R17 *)rt_nil_check(l_Q_2573))).f_NAME))))
{
{ rt_int rv2575 = 1;
return rv2575; }
}
l_P_2572 = ((*(R17 *)rt_nil_check(l_P_2572))).f_NEXT;
l_Q_2573 = ((*(R17 *)rt_nil_check(l_Q_2573))).f_NEXT;
}
RT_B_TICK();
} L_end2574: ;
{ rt_int rv2576 = 0;
return rv2576; }
rt_raise(RT_X_INIT);
}
static void r_EXPLICIT_GENERIC_ARGS(R12 * p_Y, R29 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_USED_2577; memset(&l_USED_2577, 0, sizeof l_USED_2577);
l_USED_2577 = NULL;
R30 * l_P_2578; memset(&l_P_2578, 0, sizeof l_P_2578);
l_P_2578 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
R29 * l_A_2579; memset(&l_A_2579, 0, sizeof l_A_2579);
l_A_2579 = p_ARGS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_DECL == NULL))
{
return;
}
if (((!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_B == NULL)))
{
return;
}
r_NAMES_IN(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_B, &l_USED_2577);
for (;;) {
if (((l_P_2578 == NULL) || (l_A_2579 == NULL))) goto L_end2580;
{
if ((((((*(R30 *)rt_nil_check(l_P_2578))).f_MODE == g_M_IN) && r_IN_IDENTS(l_USED_2577, ((*(R30 *)rt_nil_check(l_P_2578))).f_NAME)) && (!(((*(R29 *)rt_nil_check(l_A_2579))).f_E == NULL))))
{
if ((!r_CONSTANT_EXPR(((*(R29 *)rt_nil_check(l_A_2579))).f_E)))
{
r_FAILT(p_LINE, rt_str("the argument of an explicit generic parameter is a constant or a constant expression (5): ", 90), ((*(R30 *)rt_nil_check(l_P_2578))).f_NAME);
}
}
l_P_2578 = ((*(R30 *)rt_nil_check(l_P_2578))).f_NEXT;
l_A_2579 = ((*(R29 *)rt_nil_check(l_A_2579))).f_NEXT;
}
RT_B_TICK();
} L_end2580: ;
}
static void r_NAMES_IN(R17 * p_L, R17 * *p_HEAD) { RT_B_TICK(); 
R17 * l_N_2581; memset(&l_N_2581, 0, sizeof l_N_2581);
l_N_2581 = p_L;
for (;;) {
if ((l_N_2581 == NULL)) goto L_end2582;
{
if (((((*(R17 *)rt_nil_check(l_N_2581))).f_KIND == g_N_NAME) || (((((*(R17 *)rt_nil_check(l_N_2581))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(l_N_2581))).f_A == NULL)))))
{
(*p_HEAD) = r_NAME_REF(((*(R17 *)rt_nil_check(l_N_2581))).f_NAME, ((rt_int)0LL), NULL, (*p_HEAD));
}
r_NAMES_IN(((*(R17 *)rt_nil_check(l_N_2581))).f_A, &(*p_HEAD));
r_NAMES_IN(((*(R17 *)rt_nil_check(l_N_2581))).f_B, &(*p_HEAD));
r_NAMES_IN(((*(R17 *)rt_nil_check(l_N_2581))).f_C, &(*p_HEAD));
l_N_2581 = ((*(R17 *)rt_nil_check(l_N_2581))).f_NEXT;
}
RT_B_TICK();
} L_end2582: ;
}
static rt_int r_CONSTANT_EXPR(R17 * p_E) { RT_B_TICK(); 
if ((p_E == NULL))
{
{ rt_int rv2583 = 1;
return rv2583; }
}
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY)))
{
{
R12 * l_Y_2584; memset(&l_Y_2584, 0, sizeof l_Y_2584);
l_Y_2584 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_2584 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_2584))).f_KIND == g_Y_ROUTINE))
{
if ((!(((*(R12 *)rt_nil_check(r_ORIGINAL(l_Y_2584)))).f_USES == NULL)))
{
{ rt_int rv2585 = 0;
return rv2585; }
}
}
if (((((*(R12 *)rt_nil_check(l_Y_2584))).f_KIND == g_Y_VAR) && (!((*(R12 *)rt_nil_check(l_Y_2584))).f_INPUT)))
{
{ rt_int rv2586 = 0;
return rv2586; }
}
}
}
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_DEREF))
{
{ rt_int rv2587 = 0;
return rv2587; }
}
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_FIELD))
{
{ rt_int rv2588 = r_CONSTANT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A);
return rv2588; }
}
{ rt_int rv2589 = ((r_CONSTANT_LIST(((*(R17 *)rt_nil_check(p_E))).f_A) && r_CONSTANT_LIST(((*(R17 *)rt_nil_check(p_E))).f_B)) && r_CONSTANT_LIST(((*(R17 *)rt_nil_check(p_E))).f_C));
return rv2589; }
rt_raise(RT_X_INIT);
}
static rt_int r_CONSTANT_LIST(R17 * p_L) { RT_B_TICK(); 
R17 * l_N_2590; memset(&l_N_2590, 0, sizeof l_N_2590);
l_N_2590 = p_L;
for (;;) {
if ((l_N_2590 == NULL)) goto L_end2591;
{
if ((!r_CONSTANT_EXPR(l_N_2590)))
{
{ rt_int rv2592 = 0;
return rv2592; }
}
l_N_2590 = ((*(R17 *)rt_nil_check(l_N_2590))).f_NEXT;
}
RT_B_TICK();
} L_end2591: ;
{ rt_int rv2593 = 1;
return rv2593; }
rt_raise(RT_X_INIT);
}
static rt_int r_PACKED_ELEMENT(R17 * p_E) { RT_B_TICK(); 
R22 * l_AT_2594; memset(&l_AT_2594, 0, sizeof l_AT_2594);
l_AT_2594 = NULL;
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
{
R12 * l_Y_2595; memset(&l_Y_2595, 0, sizeof l_Y_2595);
l_Y_2595 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((l_Y_2595 == NULL))
{
{ rt_int rv2596 = 0;
return rv2596; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2595))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(l_Y_2595))).f_T == NULL)))
{
{ rt_int rv2597 = 0;
return rv2597; }
}
l_AT_2594 = r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_2595))).f_T);
}
}
else if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_INDEX))
{
{
R14 l_SAVED_CODE_2598; memset(&l_SAVED_CODE_2598, 0, sizeof l_SAVED_CODE_2598);
S_R14(&l_SAVED_CODE_2598, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
l_AT_2594 = r_REAL_TYPE((r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL)).f_T);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_2598, 0);
}
}
else
{
{ rt_int rv2599 = 0;
return rv2599; }
}
if ((!(((*(R22 *)rt_nil_check(l_AT_2594))).f_KIND == g_T_ARR)))
{
{ rt_int rv2600 = 0;
return rv2600; }
}
{ rt_int rv2601 = (!(r_PACKING_OF(l_AT_2594) == ((rt_int)2LL)));
return rv2601; }
rt_raise(RT_X_INIT);
}
static void r_NO_ALIASING(R12 * p_Y, R29 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R29 * l_A_2602; memset(&l_A_2602, 0, sizeof l_A_2602);
l_A_2602 = p_ARGS;
for (;;) {
if ((l_A_2602 == NULL)) goto L_end2603;
{
if (((((*(R29 *)rt_nil_check(l_A_2602))).f_MODE == g_M_INOUT) && (!(((*(R29 *)rt_nil_check(l_A_2602))).f_E == NULL))))
{
if (r_PACKED_ELEMENT(((*(R29 *)rt_nil_check(l_A_2602))).f_E))
{
r_FAIL(p_LINE, rt_str("only elements of ARRAY_STD arrays are inout arguments (3.8.3)", 61));
}
}
l_A_2602 = ((*(R29 *)rt_nil_check(l_A_2602))).f_NEXT;
}
RT_B_TICK();
} L_end2603: ;
l_A_2602 = p_ARGS;
for (;;) {
if ((l_A_2602 == NULL)) goto L_end2604;
{
if (((((((*(R29 *)rt_nil_check(l_A_2602))).f_MODE == g_M_INOUT) || (((*(R29 *)rt_nil_check(l_A_2602))).f_MODE == g_M_OUT))) && (!(((*(R29 *)rt_nil_check(l_A_2602))).f_E == NULL))))
{
{
R12 * l_V_2605; memset(&l_V_2605, 0, sizeof l_V_2605);
l_V_2605 = r_ARG_ROOT(((*(R29 *)rt_nil_check(l_A_2602))).f_E);
R29 * l_B_2606; memset(&l_B_2606, 0, sizeof l_B_2606);
l_B_2606 = ((*(R29 *)rt_nil_check(l_A_2602))).f_NEXT;
if ((!(l_V_2605 == NULL)))
{
for (;;) {
if ((l_B_2606 == NULL)) goto L_end2607;
{
if (((((*(R29 *)rt_nil_check(l_B_2606))).f_MODE == ((*(R29 *)rt_nil_check(l_A_2602))).f_MODE) && (!(((*(R29 *)rt_nil_check(l_B_2606))).f_E == NULL))))
{
if (((r_ARG_ROOT(((*(R29 *)rt_nil_check(l_B_2606))).f_E) == l_V_2605) && (!r_DISJOINT_PATHS(r_PATH_OF(((*(R29 *)rt_nil_check(l_A_2602))).f_E), r_PATH_OF(((*(R29 *)rt_nil_check(l_B_2606))).f_E)))))
{
r_FAILT(p_LINE, rt_str("a variable is more than one inout or output argument (4.3.3): ", 62), ((*(R12 *)rt_nil_check(l_V_2605))).f_NAME);
}
}
l_B_2606 = ((*(R29 *)rt_nil_check(l_B_2606))).f_NEXT;
}
RT_B_TICK();
} L_end2607: ;
if (((((*(R29 *)rt_nil_check(l_A_2602))).f_MODE == g_M_INOUT) && (!(((*(R12 *)rt_nil_check(p_Y))).f_USES == NULL))))
{
{
R17 * l_U_2608; memset(&l_U_2608, 0, sizeof l_U_2608);
l_U_2608 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_2608 == NULL)) goto L_end2609;
{
if ((r_TEQ(((*(R17 *)rt_nil_check(l_U_2608))).f_NAME, ((*(R12 *)rt_nil_check(l_V_2605))).f_NAME) && (((*(R17 *)rt_nil_check(l_U_2608))).f_IV == ((*(R12 *)rt_nil_check(l_V_2605))).f_OWNER)))
{
r_FAILT(p_LINE, rt_str("an inout argument the procedure also imports (4.3.3): ", 54), ((*(R12 *)rt_nil_check(l_V_2605))).f_NAME);
}
l_U_2608 = ((*(R17 *)rt_nil_check(l_U_2608))).f_NEXT;
}
RT_B_TICK();
} L_end2609: ;
}
}
}
}
}
l_A_2602 = ((*(R29 *)rt_nil_check(l_A_2602))).f_NEXT;
}
RT_B_TICK();
} L_end2604: ;
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
R21 * l_BS_2610; memset(&l_BS_2610, 0, sizeof l_BS_2610);
l_BS_2610 = r_NEW_BINDS();
R30 * l_P_2611; memset(&l_P_2611, 0, sizeof l_P_2611);
l_P_2611 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R29 * l_A_2612; memset(&l_A_2612, 0, sizeof l_A_2612);
l_A_2612 = p_ARGS;
rt_int l_SOME_M_2613; memset(&l_SOME_M_2613, 0, sizeof l_SOME_M_2613);
l_SOME_M_2613 = 0;
rt_int l_N_2614; memset(&l_N_2614, 0, sizeof l_N_2614);
l_N_2614 = ((rt_int)0LL);
for (;;) {
if (((l_P_2611 == NULL) || (l_A_2612 == NULL))) goto L_end2615;
{
if ((((((*(R30 *)rt_nil_check(l_P_2611))).f_MODE == g_M_IN) && (!(((*(R29 *)rt_nil_check(l_A_2612))).f_E == NULL))) && (!(((*(R30 *)rt_nil_check(l_P_2611))).f_T == NULL))))
{
{
R22 * l_RT_2616; memset(&l_RT_2616, 0, sizeof l_RT_2616);
l_RT_2616 = r_REAL_TYPE(((*(R30 *)rt_nil_check(l_P_2611))).f_T);
R25 l_M_2617; memset(&l_M_2617, 0, sizeof l_M_2617);
S_R25(&l_M_2617, r_NO_MVAL(), 0);
if (((((*(R22 *)rt_nil_check(l_RT_2616))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2616))).f_SCALE == ((rt_int)0LL))))
{
if (r_MANIFEST_INT(((*(R29 *)rt_nil_check(l_A_2612))).f_E))
{
S_R25(&l_M_2617, r_MANIFEST(((*(R29 *)rt_nil_check(l_A_2612))).f_E), 0);
}
}
else if ((((*(R22 *)rt_nil_check(l_RT_2616))).f_KIND == g_T_BOOL))
{
S_R25(&l_M_2617, r_MANIFEST(((*(R29 *)rt_nil_check(l_A_2612))).f_E), 0);
}
else if ((((*(R22 *)rt_nil_check(l_RT_2616))).f_KIND == g_T_ENUM))
{
S_R25(&l_M_2617, r_ENUM_MANIFEST(((*(R29 *)rt_nil_check(l_A_2612))).f_E, l_RT_2616), 0);
}
if ((l_M_2617).f_OK)
{
r_ADD_BIND(r_QMKN(rt_str("=", 1), ((*(R30 *)rt_nil_check(l_P_2611))).f_NAME), NULL, l_M_2617, NULL, l_BS_2610);
l_SOME_M_2613 = 1;
}
}
}
l_P_2611 = ((*(R30 *)rt_nil_check(l_P_2611))).f_NEXT;
l_A_2612 = ((*(R29 *)rt_nil_check(l_A_2612))).f_NEXT;
}
RT_B_TICK();
} L_end2615: ;
if ((!l_SOME_M_2613))
{
r_NEED_BODY(p_G);
{ R12 * rv2618 = p_G;
return rv2618; }
}
{
R12 * l_I_2619; memset(&l_I_2619, 0, sizeof l_I_2619);
l_I_2619 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2619 == NULL)) goto L_end2620;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2619))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_BS_2610))).f_NEXT))
{
{ R12 * rv2621 = l_I_2619;
return rv2621; }
}
l_N_2614 = rt_add(l_N_2614, ((rt_int)1LL));
l_I_2619 = ((*(R12 *)rt_nil_check(l_I_2619))).f_INSTANCES;
}
RT_B_TICK();
} L_end2620: ;
}
if ((l_N_2614 > ((rt_int)256LL)))
{
r_FAILT(p_LINE, rt_str("the INLINE expansions of the routine do not end (4.3.1): ", 57), ((*(R12 *)rt_nil_check(p_G))).f_NAME);
}
{ R12 * rv2622 = r_NEW_INSTANCE(p_G, ((*(R21 *)rt_nil_check(l_BS_2610))).f_NEXT, p_ARGS);
return rv2622; }
rt_raise(RT_X_INIT);
}
static R26 r_CALL_SYM(R12 * p_Y0, R29 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
rt_int l_VISIBLE_2623; memset(&l_VISIBLE_2623, 0, sizeof l_VISIBLE_2623);
l_VISIBLE_2623 = r_SEG_VISIBLE(p_Y0, p_LINE);
R12 * l_Y_2624; memset(&l_Y_2624, 0, sizeof l_Y_2624);
l_Y_2624 = r_ORIGINAL(p_Y0);
R30 * l_P_2625; memset(&l_P_2625, 0, sizeof l_P_2625);
R29 * l_A_2626; memset(&l_A_2626, 0, sizeof l_A_2626);
l_A_2626 = p_ARGS;
R9 l_C_2627; memset(&l_C_2627, 0, sizeof l_C_2627);
S_R9(&l_C_2627, r_MK(rt_str("", 0)), 0);
R9 l_SEP_2628; memset(&l_SEP_2628, 0, sizeof l_SEP_2628);
S_R9(&l_SEP_2628, r_MK(rt_str("", 0)), 0);
R9 l_PRE_2629; memset(&l_PRE_2629, 0, sizeof l_PRE_2629);
S_R9(&l_PRE_2629, r_MK(rt_str("", 0)), 0);
R9 l_POST_2630; memset(&l_POST_2630, 0, sizeof l_POST_2630);
S_R9(&l_POST_2630, r_MK(rt_str("", 0)), 0);
rt_int l_SHARED_2631; memset(&l_SHARED_2631, 0, sizeof l_SHARED_2631);
l_SHARED_2631 = 0;
R22 * l_PT_2632; memset(&l_PT_2632, 0, sizeof l_PT_2632);
if ((!(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
if (((((*(R12 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R))).f_DECL == ((*(R12 *)rt_nil_check(l_Y_2624))).f_DECL) && (!(((*(R12 *)rt_nil_check(l_Y_2624))).f_DECL == NULL))))
{
if ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2624))).f_DECL))).f_FL == ((rt_int)1LL)))
{
r_FAILT(p_LINE, rt_str("an INLINE routine cannot be recursive (4.3.1): ", 47), ((*(R12 *)rt_nil_check(l_Y_2624))).f_NAME);
}
}
}
if (((*(R12 *)rt_nil_check(l_Y_2624))).f_GENERIC)
{
l_Y_2624 = r_INSTANCE(l_Y_2624, p_ARGS, p_LINE);
}
else if (((!(((*(R12 *)rt_nil_check(l_Y_2624))).f_DECL == NULL)) && (((*(R12 *)rt_nil_check(l_Y_2624))).f_BINDINGS == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2624))).f_DECL))).f_KIND == g_N_ROUTINE) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2624))).f_DECL))).f_FL == ((rt_int)1LL))))
{
l_Y_2624 = r_INLINE_INSTANCE(l_Y_2624, p_ARGS, p_LINE);
}
}
r_CHECK_CALL_IMPORTS(l_Y_2624, p_LINE);
r_NO_ALIASING(l_Y_2624, p_ARGS, p_LINE);
r_EXPLICIT_GENERIC_ARGS(l_Y_2624, p_ARGS, p_LINE);
if ((!(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
if (((((*(R12 *)rt_nil_check(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R))).f_DECL == ((*(R12 *)rt_nil_check(l_Y_2624))).f_DECL) && (!(((*(R12 *)rt_nil_check(l_Y_2624))).f_DECL == NULL))))
{
if ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2624))).f_DECL))).f_FL == ((rt_int)1LL)))
{
r_FAILT(p_LINE, rt_str("an INLINE routine cannot be recursive (4.3.1): ", 47), ((*(R12 *)rt_nil_check(l_Y_2624))).f_NAME);
}
{
R17 * l_U_2633; memset(&l_U_2633, 0, sizeof l_U_2633);
l_U_2633 = ((*(R12 *)rt_nil_check(l_Y_2624))).f_USES;
for (;;) {
if ((l_U_2633 == NULL)) goto L_end2634;
{
if ((!(r_LOOKUP(((*(R17 *)rt_nil_check(l_U_2633))).f_NAME) == NULL)))
{
if ((((*(R12 *)rt_nil_check(r_LOOKUP(((*(R17 *)rt_nil_check(l_U_2633))).f_NAME)))).f_LEVEL > ((rt_int)0LL)))
{
r_FAILT(p_LINE, rt_str("a recursive routine imports only static data (4.3.1): ", 54), ((*(R17 *)rt_nil_check(l_U_2633))).f_NAME);
}
}
l_U_2633 = ((*(R17 *)rt_nil_check(l_U_2633))).f_NEXT;
}
RT_B_TICK();
} L_end2634: ;
}
}
}
if ((!(r_CUR_GENERIC() == NULL)))
{
{
R29 * l_Q_2635; memset(&l_Q_2635, 0, sizeof l_Q_2635);
l_Q_2635 = p_ARGS;
rt_int l_GEN_ARG_2636; memset(&l_GEN_ARG_2636, 0, sizeof l_GEN_ARG_2636);
l_GEN_ARG_2636 = 0;
for (;;) {
if ((l_Q_2635 == NULL)) goto L_end2637;
{
if (((*(R29 *)rt_nil_check(l_Q_2635))).f_HAVE)
{
if ((!((((*(R29 *)rt_nil_check(l_Q_2635))).f_V).f_T == NULL)))
{
if (((((*(R22 *)rt_nil_check((((*(R29 *)rt_nil_check(l_Q_2635))).f_V).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
l_GEN_ARG_2636 = 1;
}
}
}
l_Q_2635 = ((*(R29 *)rt_nil_check(l_Q_2635))).f_NEXT;
}
RT_B_TICK();
} L_end2637: ;
if (l_GEN_ARG_2636)
{
if ((!(((*(R12 *)rt_nil_check(l_Y_2624))).f_BINDINGS == NULL)))
{
r_REQUIRE_WHERE_SUBSET(l_Y_2624, p_LINE);
}
else
{
r_REQUIRE_WHERE(r_BASE_NAME(l_Y_2624), p_LINE);
}
}
}
}
{
R17 * l_U_2638; memset(&l_U_2638, 0, sizeof l_U_2638);
l_U_2638 = ((*(R12 *)rt_nil_check(l_Y_2624))).f_USES;
for (;;) {
if ((l_U_2638 == NULL)) goto L_end2639;
{
{
R12 * l_H_2640; memset(&l_H_2640, 0, sizeof l_H_2640);
l_H_2640 = r_LOOKUP(((*(R17 *)rt_nil_check(l_U_2638))).f_NAME);
if ((!(l_H_2640 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_H_2640))).f_WITHV == ((rt_int)2LL)) && (((*(R12 *)rt_nil_check(l_H_2640))).f_OWNER == ((*(R17 *)rt_nil_check(l_U_2638))).f_IV)))
{
r_FAIL2(p_LINE, rt_str("the routine ", 12), ((*(R12 *)rt_nil_check(l_Y_2624))).f_NAME, rt_str(" imports ", 9), ((*(R17 *)rt_nil_check(l_U_2638))).f_NAME, rt_str(", which a WITH NAMING hides (4.5.4)", 35));
}
}
}
l_U_2638 = ((*(R17 *)rt_nil_check(l_U_2638))).f_NEXT;
}
RT_B_TICK();
} L_end2639: ;
}
if (((((((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL)) || (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL)))) && (!(((*(R12 *)rt_nil_check(l_Y_2624))).f_USES == NULL))))
{
r_FAILT(p_LINE, rt_str("a record-spec is a closed scope: no function importing a variable (3.9.1): ", 75), ((*(R12 *)rt_nil_check(l_Y_2624))).f_NAME);
}
if ((((*(R12 *)rt_nil_check(l_Y_2624))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_C_2627, r_FRAME_OF(((*(R12 *)rt_nil_check(l_Y_2624))).f_LEVEL), 0);
S_R9(&l_SEP_2628, r_MK(rt_str(", ", 2)), 0);
}
{
R29 * l_Q_2641; memset(&l_Q_2641, 0, sizeof l_Q_2641);
l_Q_2641 = p_ARGS;
for (;;) {
if ((l_Q_2641 == NULL)) goto L_end2642;
{
if ((!(((*(R29 *)rt_nil_check(l_Q_2641))).f_MODE == g_M_IN)))
{
l_SHARED_2631 = 1;
}
l_Q_2641 = ((*(R29 *)rt_nil_check(l_Q_2641))).f_NEXT;
}
RT_B_TICK();
} L_end2642: ;
if ((!(((*(R12 *)rt_nil_check(l_Y_2624))).f_USES == NULL)))
{
l_SHARED_2631 = 1;
}
}
l_P_2625 = ((*(R12 *)rt_nil_check(l_Y_2624))).f_PARAMS;
for (;;) {
if ((l_P_2625 == NULL)) goto L_end2643;
{
if ((l_A_2626 == NULL))
{
r_FAIL(p_LINE, rt_str("too few arguments", 17));
}
l_PT_2632 = r_FORMAL_VIEW(l_Y_2624, l_P_2625);
if ((l_PT_2632 == NULL))
{
}
else if ((((*(R30 *)rt_nil_check(l_P_2625))).f_MODE == g_M_IN))
{
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(l_PT_2632)))).f_KIND == g_T_VOID))
{
}
else
{
{
R26 l_V_2644; memset(&l_V_2644, 0, sizeof l_V_2644);
R9 l_CV_2645; memset(&l_CV_2645, 0, sizeof l_CV_2645);
if ((((*(R29 *)rt_nil_check(l_A_2626))).f_HAVE && (!r_WANT_SENSITIVE(l_A_2626))))
{
S_R26(&l_V_2644, ((*(R29 *)rt_nil_check(l_A_2626))).f_V, 0);
}
else
{
S_R26(&l_V_2644, r_EXPR(((*(R29 *)rt_nil_check(l_A_2626))).f_E, l_PT_2632), 0);
}
S_R9(&l_CV_2645, r_CONVERT(l_V_2644, l_PT_2632, p_LINE, r_NO_TEXT()), 0);
if (((l_SHARED_2631 && (l_V_2644).f_LVAL) && r_IS_STRUCTURED(l_PT_2632)))
{
S_R9(&l_CV_2645, r_COPY_OF(l_PT_2632, l_CV_2645), 0);
}
S_R9(&l_C_2627, r_FMT3(rt_str("@@@", 3), l_C_2627, l_SEP_2628, l_CV_2645), 0);
S_R9(&l_SEP_2628, r_MK(rt_str(", ", 2)), 0);
}
}
}
else
{
{
R26 l_V_2646; memset(&l_V_2646, 0, sizeof l_V_2646);
if (((*(R29 *)rt_nil_check(l_A_2626))).f_HAVE)
{
S_R26(&l_V_2646, ((*(R29 *)rt_nil_check(l_A_2626))).f_V, 0);
}
else
{
S_R26(&l_V_2646, r_EXPR(((*(R29 *)rt_nil_check(l_A_2626))).f_E, l_PT_2632), 0);
}
if (((!(((*(R29 *)rt_nil_check(l_A_2626))).f_E == NULL)) && (!(l_V_2646).f_LVAL)))
{
if ((((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(l_A_2626))).f_E))).f_KIND == g_N_SUBSTR))
{
if ((!(r_EXPR(((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(l_A_2626))).f_E))).f_A, NULL)).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
S_R26(&l_V_2646, r_MKET(r_FMT1(rt_str("(rstr[]){@}[0]", 14), (l_V_2646).f_C), (l_V_2646).f_T), 0);
(l_V_2646).f_LVAL = 1;
}
}
if ((!(l_V_2646).f_LVAL))
{
r_FAIL(p_LINE, rt_str("an inout or output argument must be a variable (4.3.2)", 54));
}
if ((!r_SAME_CLASS(l_PT_2632, (l_V_2646).f_T)))
{
r_FAILT(p_LINE, rt_str("the inout or output argument is not of the type of the parameter: ", 66), r_TYPE_NAME(l_PT_2632));
}
if (((((*(R30 *)rt_nil_check(l_P_2625))).f_MODE == g_M_INOUT) && (!((r_SAME_TYPE(l_PT_2632, (l_V_2646).f_T) && r_SAME_RANGE(l_PT_2632, (l_V_2646).f_T))))))
{
r_FAIL(p_LINE, rt_str("an inout argument must match the parameter exactly (4.3.2)", 58));
}
if (((((*(R30 *)rt_nil_check(l_P_2625))).f_MODE == g_M_OUT) && (!((r_SAME_TYPE(l_PT_2632, (l_V_2646).f_T) && r_SAME_RANGE(l_PT_2632, (l_V_2646).f_T))))))
{
{
R9 l_TMP_2647; memset(&l_TMP_2647, 0, sizeof l_TMP_2647);
S_R9(&l_TMP_2647, r_NEW_NAME(rt_str("oa", 2)), 0);
R9 l_AP_2648; memset(&l_AP_2648, 0, sizeof l_AP_2648);
S_R9(&l_AP_2648, r_NEW_NAME(rt_str("op", 2)), 0);
S_R9(&l_PRE_2629, r_FMT4(rt_str("@ @ *@ = &@;", 12), l_PRE_2629, r_CTYPE((l_V_2646).f_T), l_AP_2648, (l_V_2646).f_C), 0);
S_R9(&l_PRE_2629, r_FMT4(rt_str("@ @ @ = @;", 10), l_PRE_2629, r_CTYPE(l_PT_2632), l_TMP_2647, r_COPY_OF((l_V_2646).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2648))), 0);
S_R9(&l_POST_2630, r_FMT2(rt_str("@ @", 3), l_POST_2630, r_STORE_CODE((l_V_2646).f_T, r_FMT1(rt_str("(*@)", 4), l_AP_2648), r_MKET(l_TMP_2647, l_PT_2632), p_LINE, r_NO_TEXT())), 0);
S_R9(&l_C_2627, r_FMT3(rt_str("@@&@", 4), l_C_2627, l_SEP_2628, l_TMP_2647), 0);
}
}
else
{
S_R9(&l_C_2627, r_FMT3(rt_str("@@&@", 4), l_C_2627, l_SEP_2628, (l_V_2646).f_C), 0);
}
S_R9(&l_SEP_2628, r_MK(rt_str(", ", 2)), 0);
}
}
l_A_2626 = ((*(R29 *)rt_nil_check(l_A_2626))).f_NEXT;
l_P_2625 = ((*(R30 *)rt_nil_check(l_P_2625))).f_NEXT;
}
RT_B_TICK();
} L_end2643: ;
if ((!(l_A_2626 == NULL)))
{
r_FAIL(p_LINE, rt_str("too many arguments", 18));
}
if (((l_PRE_2629).f_LEN > ((rt_int)0LL)))
{
{ R26 rv2649 = r_MKET(r_FMT4(rt_str("({ @ @(@); @ })", 15), l_PRE_2629, ((*(R12 *)rt_nil_check(l_Y_2624))).f_ACCESS, l_C_2627, l_POST_2630), r_RESULT_VIEW(l_Y_2624));
return rv2649; }
}
{ R26 rv2650 = r_MKET(r_FMT2(rt_str("@(@)", 4), ((*(R12 *)rt_nil_check(l_Y_2624))).f_ACCESS, l_C_2627), r_RESULT_VIEW(l_Y_2624));
return rv2650; }
rt_raise(RT_X_INIT);
}
static R22 * r_FORMAL_VIEW(R12 * p_R, R30 * p_P) { RT_B_TICK(); 
if (((((*(R30 *)rt_nil_check(p_P))).f_T == NULL) || (((*(R30 *)rt_nil_check(p_P))).f_TS == NULL)))
{
{ R22 * rv2651 = ((*(R30 *)rt_nil_check(p_P))).f_T;
return rv2651; }
}
{ R22 * rv2652 = r_OUTSIDE_VIEW(p_R, ((*(R30 *)rt_nil_check(p_P))).f_TS, ((*(R30 *)rt_nil_check(p_P))).f_T);
return rv2652; }
rt_raise(RT_X_INIT);
}
static R22 * r_RESULT_VIEW(R12 * p_R) { RT_B_TICK(); 
if (((((*(R12 *)rt_nil_check(p_R))).f_DECL == NULL) || (((*(R12 *)rt_nil_check(p_R))).f_RESULT == NULL)))
{
{ R22 * rv2653 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2653; }
}
if (((!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_KIND == g_N_ROUTINE)) || (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B == NULL)))
{
{ R22 * rv2654 = ((*(R12 *)rt_nil_check(p_R))).f_RESULT;
return rv2654; }
}
{ R22 * rv2655 = r_OUTSIDE_VIEW(p_R, ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2655; }
rt_raise(RT_X_INIT);
}
static R22 * r_OUTSIDE_VIEW(R12 * p_R, R17 * p_TS, R22 * p_T) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_R))).f_MODL == NULL) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)) || (!(((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))))
{
{ R22 * rv2656 = p_T;
return rv2656; }
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(p_R))).f_MODL))
{
{ R22 * rv2657 = p_T;
return rv2657; }
}
{
R12 * l_M_2658; memset(&l_M_2658, 0, sizeof l_M_2658);
l_M_2658 = ((*(R12 *)rt_nil_check(p_R))).f_MODL;
for (;;) {
if ((l_M_2658 == NULL)) goto L_end2659;
{
{
R12 * l_Y_2660; memset(&l_Y_2660, 0, sizeof l_Y_2660);
l_Y_2660 = r_MEMBER_TYPE(l_M_2658, ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_Y_2660 == NULL)))
{
if (((*(R12 *)rt_nil_check(l_Y_2660))).f_EXPORTED)
{
{ R22 * rv2661 = r_ABSTRACT_VIEW(l_Y_2660, p_T);
return rv2661; }
}
{ R22 * rv2662 = p_T;
return rv2662; }
}
}
if (r_IN_MODULE(((*(R12 *)rt_nil_check(l_M_2658))).f_MODL))
{
goto L_end2659;
}
l_M_2658 = ((*(R12 *)rt_nil_check(l_M_2658))).f_MODL;
}
RT_B_TICK();
} L_end2659: ;
}
{ R22 * rv2663 = p_T;
return rv2663; }
rt_raise(RT_X_INIT);
}
static R12 * r_MEMBER_TYPE(R12 * p_M, R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_2664; memset(&l_Y_2664, 0, sizeof l_Y_2664);
l_Y_2664 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
if (((*(R12 *)rt_nil_check(p_M))).f_BUSY)
{
{
R12 * l_Z_2665; memset(&l_Z_2665, 0, sizeof l_Z_2665);
l_Z_2665 = r_LOOKUP(p_NAME);
for (;;) {
if ((l_Z_2665 == NULL)) goto L_end2666;
{
if ((((((*(R12 *)rt_nil_check(l_Z_2665))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Z_2665))).f_MODL == p_M)) && (((*(R12 *)rt_nil_check(l_Z_2665))).f_ORIG == NULL)))
{
{ R12 * rv2667 = l_Z_2665;
return rv2667; }
}
l_Z_2665 = r_LOOKUP_NEXT(l_Z_2665);
}
RT_B_TICK();
} L_end2666: ;
}
{ R12 * rv2668 = NULL;
return rv2668; }
}
for (;;) {
if ((l_Y_2664 == NULL)) goto L_end2669;
{
if (((((*(R12 *)rt_nil_check(l_Y_2664))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_2664))).f_NAME, p_NAME)))
{
{ R12 * rv2670 = l_Y_2664;
return rv2670; }
}
l_Y_2664 = ((*(R12 *)rt_nil_check(l_Y_2664))).f_SNEXT;
}
RT_B_TICK();
} L_end2669: ;
{ R12 * rv2671 = NULL;
return rv2671; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED(R22 * p_T) { RT_B_TICK(); 
rt_int l_K_2672; memset(&l_K_2672, 0, sizeof l_K_2672);
l_K_2672 = ((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_KIND;
{ rt_int rv2673 = ((((l_K_2672 == g_T_STR) || (l_K_2672 == g_T_BITS)) || (l_K_2672 == g_T_ARR)) || (l_K_2672 == g_T_REC));
return rv2673; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_RANGE(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2674; memset(&l_RA_2674, 0, sizeof l_RA_2674);
l_RA_2674 = r_REAL_TYPE(p_A);
R22 * l_RB_2675; memset(&l_RB_2675, 0, sizeof l_RB_2675);
l_RB_2675 = r_REAL_TYPE(p_B);
if ((!r_IS_NUMERIC_OR_ENUM(l_RA_2674)))
{
{ rt_int rv2676 = 1;
return rv2676; }
}
if ((((r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2674))).f_LO_C) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RA_2674))).f_HI_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2675))).f_LO_C)) || r_IS_GEN_TEXT(((*(R22 *)rt_nil_check(l_RB_2675))).f_HI_C)))
{
{ rt_int rv2677 = 1;
return rv2677; }
}
if ((((((*(R22 *)rt_nil_check(l_RA_2674))).f_LO_C).f_LEN == ((rt_int)0LL)) || ((((*(R22 *)rt_nil_check(l_RB_2675))).f_LO_C).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2678 = ((((*(R22 *)rt_nil_check(l_RA_2674))).f_LO_C).f_LEN == (((*(R22 *)rt_nil_check(l_RB_2675))).f_LO_C).f_LEN);
return rv2678; }
}
if (((((((*(R22 *)rt_nil_check(l_RA_2674))).f_MLO).f_OK && (((*(R22 *)rt_nil_check(l_RB_2675))).f_MLO).f_OK) && (((*(R22 *)rt_nil_check(l_RA_2674))).f_MHI).f_OK) && (((*(R22 *)rt_nil_check(l_RB_2675))).f_MHI).f_OK))
{
{ rt_int rv2679 = (((((*(R22 *)rt_nil_check(l_RA_2674))).f_MLO).f_V == (((*(R22 *)rt_nil_check(l_RB_2675))).f_MLO).f_V) && ((((*(R22 *)rt_nil_check(l_RA_2674))).f_MHI).f_V == (((*(R22 *)rt_nil_check(l_RB_2675))).f_MHI).f_V));
return rv2679; }
}
{ rt_int rv2680 = (r_TEQ(((*(R22 *)rt_nil_check(l_RA_2674))).f_LO_C, ((*(R22 *)rt_nil_check(l_RB_2675))).f_LO_C) && r_TEQ(((*(R22 *)rt_nil_check(l_RA_2674))).f_HI_C, ((*(R22 *)rt_nil_check(l_RB_2675))).f_HI_C));
return rv2680; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_GENERIC(R17 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2681 = 0;
return rv2681; }
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
{ rt_int rv2682 = 1;
return rv2682; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2683 = 1;
return rv2683; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2684 = r_STATIC_GENERIC(((*(R17 *)rt_nil_check(p_TS))).f_C);
return rv2684; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_N_REP) && r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_A)))
{
{ rt_int rv2685 = 1;
return rv2685; }
}
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{ rt_int rv2686 = r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(p_TS))).f_A);
return rv2686; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
{ rt_int rv2687 = r_STATIC_GENERIC(((*(R17 *)rt_nil_check(p_TS))).f_A);
return rv2687; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
{ rt_int rv2688 = ((((*(R17 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_NAME).f_LEN > ((rt_int)0LL)));
return rv2688; }
}
else if (((r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3))) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9))))
{
{ rt_int rv2689 = 0;
return rv2689; }
}
{
R12 * l_Y_2690; memset(&l_Y_2690, 0, sizeof l_Y_2690);
l_Y_2690 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
R17 * l_A_2691; memset(&l_A_2691, 0, sizeof l_A_2691);
l_A_2691 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R17 * l_F_2692; memset(&l_F_2692, 0, sizeof l_F_2692);
if ((l_Y_2690 == NULL))
{
{ rt_int rv2693 = 0;
return rv2693; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2690))).f_KIND == g_Y_GEN))
{
{ rt_int rv2694 = 1;
return rv2694; }
}
if ((((*(R12 *)rt_nil_check(l_Y_2690))).f_DECL == NULL))
{
{ rt_int rv2695 = 0;
return rv2695; }
}
l_F_2692 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2690))).f_DECL))).f_A;
for (;;) {
if ((l_F_2692 == NULL)) goto L_end2696;
{
{
R17 * l_N_2697; memset(&l_N_2697, 0, sizeof l_N_2697);
l_N_2697 = ((*(R17 *)rt_nil_check(l_F_2692))).f_A;
for (;;) {
if ((l_N_2697 == NULL)) goto L_end2698;
{
if ((l_A_2691 == NULL))
{
{ rt_int rv2699 = 0;
return rv2699; }
}
if (((((*(R17 *)rt_nil_check(l_F_2692))).f_B == NULL) && ((((((*(R17 *)rt_nil_check(l_A_2691))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_A_2691))).f_KIND == g_N_DONTCARE)) || r_STATIC_GENERIC(l_A_2691)))))
{
{ rt_int rv2700 = 1;
return rv2700; }
}
l_A_2691 = ((*(R17 *)rt_nil_check(l_A_2691))).f_NEXT;
l_N_2697 = ((*(R17 *)rt_nil_check(l_N_2697))).f_NEXT;
}
RT_B_TICK();
} L_end2698: ;
}
l_F_2692 = ((*(R17 *)rt_nil_check(l_F_2692))).f_NEXT;
}
RT_B_TICK();
} L_end2696: ;
}
}
{ rt_int rv2701 = 0;
return rv2701; }
rt_raise(RT_X_INIT);
}
static R17 * r_OWN_NAMES(R17 * p_R) { RT_B_TICK(); 
R17 * l_HEAD_2702; memset(&l_HEAD_2702, 0, sizeof l_HEAD_2702);
l_HEAD_2702 = NULL;
r_GEN_NAMES(((*(R17 *)rt_nil_check(p_R))).f_A, &l_HEAD_2702);
{ R17 * rv2703 = l_HEAD_2702;
return rv2703; }
rt_raise(RT_X_INIT);
}
static rt_int r_DECLARES_DERIVED(R17 * p_L) { RT_B_TICK(); 
R17 * l_N_2704; memset(&l_N_2704, 0, sizeof l_N_2704);
l_N_2704 = p_L;
for (;;) {
if ((l_N_2704 == NULL)) goto L_end2705;
{
if (((((*(R17 *)rt_nil_check(l_N_2704))).f_KIND == g_TS_GEN) && ((((*(R17 *)rt_nil_check(l_N_2704))).f_NAME).f_LEN > ((rt_int)0LL))))
{
{ rt_int rv2706 = 1;
return rv2706; }
}
if ((((*(R17 *)rt_nil_check(l_N_2704))).f_KIND == g_N_PARAM))
{
if (r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2704))).f_B))
{
{ rt_int rv2707 = 1;
return rv2707; }
}
}
else if ((!(((*(R17 *)rt_nil_check(l_N_2704))).f_KIND == g_TS_GEN)))
{
if ((r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2704))).f_A) || r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2704))).f_C)))
{
{ rt_int rv2708 = 1;
return rv2708; }
}
if ((!(((*(R17 *)rt_nil_check(l_N_2704))).f_B == NULL)))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_2704))).f_B))).f_KIND == g_N_RANGE))
{
if ((r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_2704))).f_B))).f_A) || r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_N_2704))).f_B))).f_B)))
{
{ rt_int rv2709 = 1;
return rv2709; }
}
}
else if (r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(l_N_2704))).f_B))
{
{ rt_int rv2710 = 1;
return rv2710; }
}
}
}
l_N_2704 = ((*(R17 *)rt_nil_check(l_N_2704))).f_NEXT;
}
RT_B_TICK();
} L_end2705: ;
{ rt_int rv2711 = 0;
return rv2711; }
rt_raise(RT_X_INIT);
}
static R22 * r_MARK_GENP(R22 * p_T, R9 p_NAME) { RT_B_TICK(); 
R22 * l_C_2712; memset(&l_C_2712, 0, sizeof l_C_2712);
l_C_2712 = r_COPY_TYP(p_T);
S_R9(&((*(R22 *)rt_nil_check(l_C_2712))).f_GENP, p_NAME, 0);
{ R22 * rv2713 = l_C_2712;
return rv2713; }
rt_raise(RT_X_INIT);
}
static R12 * r_CUR_GENERIC(void) { RT_B_TICK(); 
R19 * l_CS_2714; memset(&l_CS_2714, 0, sizeof l_CS_2714);
l_CS_2714 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
for (;;) {
if ((l_CS_2714 == NULL)) goto L_end2715;
{
if ((!(((*(R19 *)rt_nil_check(l_CS_2714))).f_R == NULL)))
{
if ((!(((*(R12 *)rt_nil_check(((*(R19 *)rt_nil_check(l_CS_2714))).f_R))).f_BINDINGS == NULL)))
{
{ R12 * rv2716 = ((*(R19 *)rt_nil_check(l_CS_2714))).f_R;
return rv2716; }
}
}
l_CS_2714 = ((*(R19 *)rt_nil_check(l_CS_2714))).f_UP;
}
RT_B_TICK();
} L_end2715: ;
{ R12 * rv2717 = NULL;
return rv2717; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_WHERE(R12 * p_G, R9 p_NAME) { RT_B_TICK(); 
R17 * l_N_2718; memset(&l_N_2718, 0, sizeof l_N_2718);
l_N_2718 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
for (;;) {
if ((l_N_2718 == NULL)) goto L_end2719;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_N_2718))).f_A, p_NAME))
{
{ rt_int rv2720 = 1;
return rv2720; }
}
l_N_2718 = ((*(R17 *)rt_nil_check(l_N_2718))).f_NEXT;
}
RT_B_TICK();
} L_end2719: ;
{ rt_int rv2721 = 0;
return rv2721; }
rt_raise(RT_X_INIT);
}
static void r_REQUIRE_WHERE(R9 p_NAME, rt_int p_LINE) { RT_B_TICK(); 
R12 * l_G_2722; memset(&l_G_2722, 0, sizeof l_G_2722);
l_G_2722 = r_CUR_GENERIC();
if ((l_G_2722 == NULL))
{
return;
}
if ((!r_IN_WHERE(l_G_2722, p_NAME)))
{
r_FAILT(p_LINE, rt_str("invoked with objects of a TYPE parameter, so named in the WHERE clause (5.2): ", 78), p_NAME);
}
}
static void r_REQUIRE_WHERE_SUBSET(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_N_2723; memset(&l_N_2723, 0, sizeof l_N_2723);
l_N_2723 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_D))).f_B;
R12 * l_G_2724; memset(&l_G_2724, 0, sizeof l_G_2724);
l_G_2724 = r_CUR_GENERIC();
if ((l_G_2724 == NULL))
{
return;
}
for (;;) {
if ((l_N_2723 == NULL)) goto L_end2725;
{
{
R17 * l_T_2726; memset(&l_T_2726, 0, sizeof l_T_2726);
l_T_2726 = ((*(R17 *)rt_nil_check(l_N_2723))).f_A;
for (;;) {
if ((l_T_2726 == NULL)) goto L_end2727;
{
if ((!r_IN_WHERE(l_G_2724, ((*(R17 *)rt_nil_check(l_T_2726))).f_NAME)))
{
r_FAILT(p_LINE, rt_str("the WHERE routines of the invoked generic routine are among the caller's (5.2): ", 80), ((*(R17 *)rt_nil_check(l_T_2726))).f_NAME);
}
l_T_2726 = ((*(R17 *)rt_nil_check(l_T_2726))).f_NEXT;
}
RT_B_TICK();
} L_end2727: ;
}
l_N_2723 = ((*(R17 *)rt_nil_check(l_N_2723))).f_NEXT;
}
RT_B_TICK();
} L_end2725: ;
}
static rt_int r_HAS_GEN_ARG(R17 * p_A) { RT_B_TICK(); 
R17 * l_P_2728; memset(&l_P_2728, 0, sizeof l_P_2728);
l_P_2728 = p_A;
for (;;) {
if ((l_P_2728 == NULL)) goto L_end2729;
{
if (((((*(R17 *)rt_nil_check(l_P_2728))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_P_2728))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2730 = 1;
return rv2730; }
}
l_P_2728 = ((*(R17 *)rt_nil_check(l_P_2728))).f_NEXT;
}
RT_B_TICK();
} L_end2729: ;
{ rt_int rv2731 = 0;
return rv2731; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_HEADER(R12 * p_Y) { RT_B_TICK(); 
rt_int l_ENTERED_2732; memset(&l_ENTERED_2732, 0, sizeof l_ENTERED_2732);
if (((*(R12 *)rt_nil_check(p_Y))).f_BUSY)
{
return;
}
l_ENTERED_2732 = r_ENTER_MODULE_FOR(p_Y);
{
R12 * l_SAVED_SEG_2733; memset(&l_SAVED_SEG_2733, 0, sizeof l_SAVED_SEG_2733);
l_SAVED_SEG_2733 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(p_Y))).f_HOME;
r_ROUTINE_HEADER1(p_Y);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_2733;
}
if (l_ENTERED_2732)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_Y))).f_MODL);
}
}
static void r_ROUTINE_HEADER1(R12 * p_Y) { RT_B_TICK(); 
R17 * l_R_2734; memset(&l_R_2734, 0, sizeof l_R_2734);
l_R_2734 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R17 * l_P_2735; memset(&l_P_2735, 0, sizeof l_P_2735);
R30 * l_TAIL_2736; memset(&l_TAIL_2736, 0, sizeof l_TAIL_2736);
l_TAIL_2736 = NULL;
((*(R12 *)rt_nil_check(p_Y))).f_BUSY = 1;
l_P_2735 = ((*(R17 *)rt_nil_check(l_R_2734))).f_A;
for (;;) {
if ((l_P_2735 == NULL)) goto L_end2737;
{
if (((((*(R17 *)rt_nil_check(l_P_2735))).f_B == NULL) || r_STATIC_GENERIC(((*(R17 *)rt_nil_check(l_P_2735))).f_B)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
}
l_P_2735 = ((*(R17 *)rt_nil_check(l_P_2735))).f_NEXT;
}
RT_B_TICK();
} L_end2737: ;
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2734))).f_D))).f_B == NULL)))
{
((*(R12 *)rt_nil_check(p_Y))).f_GENERIC = 1;
{
R17 * l_N_2738; memset(&l_N_2738, 0, sizeof l_N_2738);
l_N_2738 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_2734))).f_D))).f_B;
for (;;) {
if ((l_N_2738 == NULL)) goto L_end2739;
{
{
R17 * l_T_2740; memset(&l_T_2740, 0, sizeof l_T_2740);
l_T_2740 = ((*(R17 *)rt_nil_check(l_N_2738))).f_A;
for (;;) {
if ((l_T_2740 == NULL)) goto L_end2741;
{
if ((r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_T_2740))).f_B))).f_A) || r_DECLARES_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_T_2740))).f_B))).f_B)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_T_2740))).f_LINE, rt_str("a WHERE template declares no derived generic parameter (5.2): ", 62), ((*(R17 *)rt_nil_check(l_T_2740))).f_NAME);
}
l_T_2740 = ((*(R17 *)rt_nil_check(l_T_2740))).f_NEXT;
}
RT_B_TICK();
} L_end2741: ;
}
l_N_2738 = ((*(R17 *)rt_nil_check(l_N_2738))).f_NEXT;
}
RT_B_TICK();
} L_end2739: ;
}
}
l_P_2735 = ((*(R17 *)rt_nil_check(l_R_2734))).f_A;
for (;;) {
if ((l_P_2735 == NULL)) goto L_end2742;
{
{
R30 * l_PM_2743; memset(&l_PM_2743, 0, sizeof l_PM_2743);
l_PM_2743 = ({ R30 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R30(&(*(R30 *)rt_nil_check(l_PM_2743)), ({ R30 rc2744; memset(&rc2744, 0, sizeof rc2744);  S_R9(&rc2744.f_NAME, ((*(R17 *)rt_nil_check(l_P_2735))).f_NAME, 0); rc2744.f_MODE = ((*(R17 *)rt_nil_check(l_P_2735))).f_IV; rc2744.f_T = NULL; rc2744.f_TS = ((*(R17 *)rt_nil_check(l_P_2735))).f_B; rc2744.f_NEXT = NULL; rc2744; }), 0);
if (((((*(R17 *)rt_nil_check(l_R_2734))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(l_P_2735))).f_IV == g_M_IN))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2735))).f_LINE, rt_str("a function has input parameters only (4.3.1)", 44));
}
if ((!(((*(R17 *)rt_nil_check(l_P_2735))).f_B == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_2735))).f_B))).f_KIND == g_TS_ROUTINE) && (!(((*(R17 *)rt_nil_check(l_P_2735))).f_IV == g_M_IN))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2735))).f_LINE, rt_str("a routine-spec declares only input parameters (5.1)", 51));
}
if (r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_P_2735))).f_B, NULL, r_OWN_NAMES(l_R_2734)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_P_2735))).f_LINE, rt_str("the attributes in the type of a formal are manifest (4.3.1)", 59));
}
}
if ((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC))
{
((*(R30 *)rt_nil_check(l_PM_2743))).f_T = r_RESOLVE(((*(R17 *)rt_nil_check(l_P_2735))).f_B);
}
if ((l_TAIL_2736 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_PARAMS = l_PM_2743;
}
else
{
((*(R30 *)rt_nil_check(l_TAIL_2736))).f_NEXT = l_PM_2743;
}
l_TAIL_2736 = l_PM_2743;
}
l_P_2735 = ((*(R17 *)rt_nil_check(l_P_2735))).f_NEXT;
}
RT_B_TICK();
} L_end2742: ;
if ((!(((*(R17 *)rt_nil_check(l_R_2734))).f_B == NULL)))
{
if (r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_R_2734))).f_B, NULL, r_OWN_NAMES(l_R_2734)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_2734))).f_LINE, rt_str("the returns-clause may not refer to a variable (4.3.1)", 54));
}
}
if ((((!((*(R12 *)rt_nil_check(p_Y))).f_GENERIC) && r_TEQS(r_BASE_NAME(p_Y), rt_str("STORE_", 6))) && (!(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS == NULL))))
{
{
R30 * l_LAST_2745; memset(&l_LAST_2745, 0, sizeof l_LAST_2745);
l_LAST_2745 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((((*(R30 *)rt_nil_check(l_LAST_2745))).f_NEXT == NULL)) goto L_end2746;
{
l_LAST_2745 = ((*(R30 *)rt_nil_check(l_LAST_2745))).f_NEXT;
}
RT_B_TICK();
} L_end2746: ;
if ((((!(l_LAST_2745 == ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS)) && (!(((*(R30 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS))).f_T == NULL))) && (!(((*(R30 *)rt_nil_check(l_LAST_2745))).f_T == NULL))))
{
if ((!r_SAME_CLASS(((*(R30 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_PARAMS))).f_T, ((*(R30 *)rt_nil_check(l_LAST_2745))).f_T)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_R_2734))).f_LINE, rt_str("both arguments of STORE_ belong to the same type class (D.4)", 60));
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
R17 * l_R_2747; memset(&l_R_2747, 0, sizeof l_R_2747);
l_R_2747 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R22 * l_T_2748; memset(&l_T_2748, 0, sizeof l_T_2748);
if ((((*(R17 *)rt_nil_check(l_R_2747))).f_B == NULL))
{
{ R22 * rv2749 = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
return rv2749; }
}
r_OPEN_SCOPE();
{
R30 * l_P_2750; memset(&l_P_2750, 0, sizeof l_P_2750);
l_P_2750 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_2750 == NULL)) goto L_end2751;
{
if ((!(((*(R30 *)rt_nil_check(l_P_2750))).f_T == NULL)))
{
{
R12 * l_V_2752; memset(&l_V_2752, 0, sizeof l_V_2752);
l_V_2752 = r_NEW_SYM(g_Y_CONST, ((*(R30 *)rt_nil_check(l_P_2750))).f_NAME);
((*(R12 *)rt_nil_check(l_V_2752))).f_T = ((*(R30 *)rt_nil_check(l_P_2750))).f_T;
S_R9(&((*(R12 *)rt_nil_check(l_V_2752))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R30 *)rt_nil_check(l_P_2750))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_V_2752))).f_INPUT = 1;
r_DEFINE(l_V_2752, ((*(R17 *)rt_nil_check(l_R_2747))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R30 *)rt_nil_check(l_P_2750))).f_T, ((*(R12 *)rt_nil_check(l_V_2752))).f_ACCESS, ((*(R17 *)rt_nil_check(l_R_2747))).f_LINE, 0);
}
}
l_P_2750 = ((*(R30 *)rt_nil_check(l_P_2750))).f_NEXT;
}
RT_B_TICK();
} L_end2751: ;
}
l_T_2748 = r_RESOLVE(((*(R17 *)rt_nil_check(l_R_2747))).f_B);
r_CLOSE_SCOPE();
{ R22 * rv2753 = l_T_2748;
return rv2753; }
rt_raise(RT_X_INIT);
}
static R9 r_C_HEADER(R12 * p_Y) { RT_B_TICK(); 
R9 l_PS_2754; memset(&l_PS_2754, 0, sizeof l_PS_2754);
S_R9(&l_PS_2754, r_MK(rt_str("", 0)), 0);
R9 l_SEP_2755; memset(&l_SEP_2755, 0, sizeof l_SEP_2755);
S_R9(&l_SEP_2755, r_MK(rt_str("", 0)), 0);
R30 * l_P_2756; memset(&l_P_2756, 0, sizeof l_P_2756);
l_P_2756 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_PS_2754, r_FMT1(rt_str("@ *up_", 6), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), 0);
S_R9(&l_SEP_2755, r_MK(rt_str(", ", 2)), 0);
}
for (;;) {
if ((l_P_2756 == NULL)) goto L_end2757;
{
if ((((*(R30 *)rt_nil_check(l_P_2756))).f_T == NULL))
{
}
else if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R30 *)rt_nil_check(l_P_2756))).f_T)))).f_KIND == g_T_VOID))
{
}
else if ((((*(R30 *)rt_nil_check(l_P_2756))).f_MODE == g_M_IN))
{
S_R9(&l_PS_2754, r_FMT4(rt_str("@@@ p_@", 7), l_PS_2754, l_SEP_2755, r_CTYPE(((*(R30 *)rt_nil_check(l_P_2756))).f_T), r_CID(((*(R30 *)rt_nil_check(l_P_2756))).f_NAME)), 0);
S_R9(&l_SEP_2755, r_MK(rt_str(", ", 2)), 0);
}
else
{
S_R9(&l_PS_2754, r_FMT4(rt_str("@@@ *p_@", 8), l_PS_2754, l_SEP_2755, r_CTYPE(((*(R30 *)rt_nil_check(l_P_2756))).f_T), r_CID(((*(R30 *)rt_nil_check(l_P_2756))).f_NAME)), 0);
S_R9(&l_SEP_2755, r_MK(rt_str(", ", 2)), 0);
}
l_P_2756 = ((*(R30 *)rt_nil_check(l_P_2756))).f_NEXT;
}
RT_B_TICK();
} L_end2757: ;
if (((l_PS_2754).f_LEN == ((rt_int)0LL)))
{
S_R9(&l_PS_2754, r_MK(rt_str("void", 4)), 0);
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_LINKAGE == ((rt_int)1LL)))
{
{ R9 rv2758 = r_FMT3(rt_str("@ @(@)", 6), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2754);
return rv2758; }
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_LINKAGE == ((rt_int)2LL)))
{
{ R9 rv2759 = r_FMT3(rt_str("extern @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2754);
return rv2759; }
}
{ R9 rv2760 = r_FMT3(rt_str("static @ @(@)", 13), r_CTYPE(((*(R12 *)rt_nil_check(p_Y))).f_RESULT), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS, l_PS_2754);
return rv2760; }
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
R28 * l_B_2761; memset(&l_B_2761, 0, sizeof l_B_2761);
l_B_2761 = ((*(R22 *)rt_nil_check(p_T))).f_BOUNDS;
rt_int l_I_2762; memset(&l_I_2762, 0, sizeof l_I_2762);
l_I_2762 = ((rt_int)0LL);
for (;;) {
if ((l_B_2761 == NULL)) goto L_end2763;
{
if (r_IS_GEN_TEXT(((*(R28 *)rt_nil_check(l_B_2761))).f_LO))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R28 *)rt_nil_check(l_B_2761))).f_LO), r_FMT2(rt_str("(@).lo[@]", 9), p_PC, r_NUM(l_I_2762)), p_LINE, p_CHECK);
}
if (r_IS_GEN_TEXT(((*(R28 *)rt_nil_check(l_B_2761))).f_HI))
{
if ((r_IS_GEN_TEXT(((*(R28 *)rt_nil_check(l_B_2761))).f_LO) || ((((*(R28 *)rt_nil_check(l_B_2761))).f_LO).f_LEN == ((rt_int)0LL))))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R28 *)rt_nil_check(l_B_2761))).f_HI), r_FMT2(rt_str("(@).hi[@]", 9), p_PC, r_NUM(l_I_2762)), p_LINE, p_CHECK);
}
else
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R28 *)rt_nil_check(l_B_2761))).f_HI), r_FMT2(rt_str("@@)", 3), r_FMT4(rt_str("((@).hi[@] - (@).lo[@] + ", 25), p_PC, r_NUM(l_I_2762), p_PC, r_NUM(l_I_2762)), ((*(R28 *)rt_nil_check(l_B_2761))).f_LO), p_LINE, p_CHECK);
}
}
l_I_2762 = rt_add(l_I_2762, ((rt_int)1LL));
l_B_2761 = ((*(R28 *)rt_nil_check(l_B_2761))).f_NEXT;
}
RT_B_TICK();
} L_end2763: ;
}
}
if (((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC) || (((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS)))
{
{
R22 * l_U_2764; memset(&l_U_2764, 0, sizeof l_U_2764);
l_U_2764 = r_REAL_TYPE(p_T);
R27 * l_F_2765; memset(&l_F_2765, 0, sizeof l_F_2765);
l_F_2765 = ((*(R22 *)rt_nil_check(l_U_2764))).f_FIELDS;
R28 * l_A_2766; memset(&l_A_2766, 0, sizeof l_A_2766);
l_A_2766 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
for (;;) {
if (((l_F_2765 == NULL) || (l_A_2766 == NULL))) goto L_end2767;
{
if ((!(((*(R27 *)rt_nil_check(l_F_2765))).f_KIND == ((rt_int)0LL))))
{
if (r_IS_GEN_TEXT(((*(R28 *)rt_nil_check(l_A_2766))).f_HI))
{
r_DEFINE_GEN(r_GEN_TEXT_NAME(((*(R28 *)rt_nil_check(l_A_2766))).f_HI), r_FMT2(rt_str("(@).@", 5), p_PC, ((*(R27 *)rt_nil_check(l_F_2765))).f_CNAME), p_LINE, p_CHECK);
}
l_A_2766 = ((*(R28 *)rt_nil_check(l_A_2766))).f_NEXT;
}
l_F_2765 = ((*(R27 *)rt_nil_check(l_F_2765))).f_NEXT;
}
RT_B_TICK();
} L_end2767: ;
}
}
}
static rt_int r_IS_GEN_TEXT(R9 p_T) { RT_B_TICK(); 
if (((p_T).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2768 = 0;
return rv2768; }
}
{ rt_int rv2769 = rt_b_eq(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)0LL), ((rt_int)0LL)), rt_str("\?", 1));
return rv2769; }
rt_raise(RT_X_INIT);
}
static R9 r_GEN_TEXT_NAME(R9 p_T) { RT_B_TICK(); 
{ R9 rv2770 = r_MKN(rt_b_slice(r_STR(p_T, (p_T).f_LEN), ((rt_int)1LL), rt_sub((p_T).f_LEN, ((rt_int)1LL))));
return rv2770; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_GEN(R9 p_NAME, R9 p_C, rt_int p_LINE, rt_int p_CHECK) { RT_B_TICK(); 
R12 * l_OLD_2771; memset(&l_OLD_2771, 0, sizeof l_OLD_2771);
l_OLD_2771 = r_LOOKUP(p_NAME);
if ((!(l_OLD_2771 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_OLD_2771))).f_KIND == g_Y_GEN) && (((*(R12 *)rt_nil_check(l_OLD_2771))).f_DEPTH == ((*(R7 *)rt_nil_check(g_W))).f_DEPTH)))
{
if (p_CHECK)
{
r_CODE(r_FMT2(rt_str("if (@ != @) rt_raise(RT_B_TYPE_MISMATCH);", 41), ((*(R12 *)rt_nil_check(l_OLD_2771))).f_ACCESS, p_C));
}
return;
}
}
{
R12 * l_G_2772; memset(&l_G_2772, 0, sizeof l_G_2772);
l_G_2772 = r_NEW_SYM(g_Y_GEN, p_NAME);
((*(R12 *)rt_nil_check(l_G_2772))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
S_R9(&((*(R12 *)rt_nil_check(l_G_2772))).f_ACCESS, p_C, 0);
((*(R12 *)rt_nil_check(l_G_2772))).f_INPUT = 1;
r_DEFINE(l_G_2772, p_LINE);
}
}
static R21 * r_NEW_BINDS(void) { RT_B_TICK(); 
R21 * l_B_2773; memset(&l_B_2773, 0, sizeof l_B_2773);
l_B_2773 = ({ R21 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R21(&(*(R21 *)rt_nil_check(l_B_2773)), ({ R21 rc2774; memset(&rc2774, 0, sizeof rc2774);  S_R9(&rc2774.f_NAME, r_NO_TEXT(), 0); rc2774.f_T = NULL; S_R9(&rc2774.f_C, r_NO_TEXT(), 0); rc2774.f_HASMV = 0; rc2774.f_MV = ((rt_int)0LL); rc2774.f_R = NULL; rc2774.f_NEXT = NULL; rc2774; }), 0);
{ R21 * rv2775 = l_B_2773;
return rv2775; }
rt_raise(RT_X_INIT);
}
static void r_ADD_BIND(R9 p_NAME, R22 * p_T, R25 p_M, R12 * p_R, R21 * p_HEAD) { RT_B_TICK(); 
R21 * l_B_2776; memset(&l_B_2776, 0, sizeof l_B_2776);
l_B_2776 = ({ R21 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R21(&(*(R21 *)rt_nil_check(l_B_2776)), ({ R21 rc2777; memset(&rc2777, 0, sizeof rc2777);  S_R9(&rc2777.f_NAME, p_NAME, 0); rc2777.f_T = p_T; S_R9(&rc2777.f_C, r_NO_TEXT(), 0); rc2777.f_HASMV = (p_M).f_OK; rc2777.f_MV = (p_M).f_V; rc2777.f_R = p_R; rc2777.f_NEXT = ((*(R21 *)rt_nil_check(p_HEAD))).f_NEXT; rc2777; }), 0);
if ((p_M).f_OK)
{
S_R9(&((*(R21 *)rt_nil_check(l_B_2776))).f_C, r_FMT1(rt_str("((rt_int)@LL)", 13), r_NUM((p_M).f_V)), 0);
}
((*(R21 *)rt_nil_check(p_HEAD))).f_NEXT = l_B_2776;
}
static R21 * r_FIND_BIND(R21 * p_BS, R9 p_NAME) { RT_B_TICK(); 
R21 * l_B_2778; memset(&l_B_2778, 0, sizeof l_B_2778);
l_B_2778 = p_BS;
for (;;) {
if ((l_B_2778 == NULL)) goto L_end2779;
{
if (r_TEQ(((*(R21 *)rt_nil_check(l_B_2778))).f_NAME, p_NAME))
{
{ R21 * rv2780 = l_B_2778;
return rv2780; }
}
l_B_2778 = ((*(R21 *)rt_nil_check(l_B_2778))).f_NEXT;
}
RT_B_TICK();
} L_end2779: ;
{ R21 * rv2781 = NULL;
return rv2781; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY(R17 * p_TS, R22 * p_T, R21 * p_BS) { RT_B_TICK(); 
R22 * l_RT_2782; memset(&l_RT_2782, 0, sizeof l_RT_2782);
l_RT_2782 = r_REAL_TYPE(p_T);
if ((p_TS == NULL))
{
{ rt_int rv2783 = 1;
return rv2783; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_APPLY) || (((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_NAME)))
{
{ rt_int rv2784 = r_UNIFY(r_EXPR_TO_TS(p_TS), p_T, p_BS);
return rv2784; }
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2785 = 1;
return rv2785; }
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN))
{
if (((((*(R17 *)rt_nil_check(p_TS))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2786 = 1;
return rv2786; }
}
{
R21 * l_B_2787; memset(&l_B_2787, 0, sizeof l_B_2787);
l_B_2787 = r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, ((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((!(l_B_2787 == NULL)))
{
if ((((*(R21 *)rt_nil_check(l_B_2787))).f_T == NULL))
{
{ rt_int rv2788 = 0;
return rv2788; }
}
{ rt_int rv2789 = r_SAME_TYPE(((*(R21 *)rt_nil_check(l_B_2787))).f_T, p_T);
return rv2789; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_C == NULL) && r_NONSTANDARD_REP(p_T)))
{
{ rt_int rv2790 = 0;
return rv2790; }
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
{ rt_int rv2791 = 1;
return rv2791; }
}
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2782))).f_KIND == g_T_ARR)))
{
{ rt_int rv2792 = 0;
return rv2792; }
}
if ((!(r_LIST_LENGTH(((*(R17 *)rt_nil_check(p_TS))).f_A) == ((*(R22 *)rt_nil_check(l_RT_2782))).f_DIMS)))
{
{ rt_int rv2793 = 0;
return rv2793; }
}
{ rt_int rv2794 = r_UNIFY(((*(R17 *)rt_nil_check(p_TS))).f_C, ((*(R22 *)rt_nil_check(l_RT_2782))).f_ELEM, p_BS);
return rv2794; }
}
else if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ENUM) || (((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_RECORD)))
{
{ rt_int rv2795 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2795; }
}
else if ((!(((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2796 = 0;
return rv2796; }
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if (((!r_UNIFY_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_A, ((*(R22 *)rt_nil_check(l_RT_2782))).f_MLO, p_BS)) || (!r_UNIFY_VALUE(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_B, ((*(R22 *)rt_nil_check(l_RT_2782))).f_MHI, p_BS))))
{
{ rt_int rv2797 = 0;
return rv2797; }
}
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_C == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_C))).f_KIND == g_N_REP) && (!r_UNIFY_REP(((*(R17 *)rt_nil_check(p_TS))).f_C, l_RT_2782, p_BS))))
{
{ rt_int rv2798 = 0;
return rv2798; }
}
}
if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)))
{
if ((((*(R22 *)rt_nil_check(l_RT_2782))).f_KIND == g_T_XFIX))
{
{ rt_int rv2799 = ((r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2782))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2782))).f_RADIX), p_BS)) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)2LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2782))).f_PREC), p_BS));
return rv2799; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_2782))).f_KIND == g_T_INT)))
{
{ rt_int rv2800 = 0;
return rv2800; }
}
{ rt_int rv2801 = ((r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2782))).f_SCALE), p_BS) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)1LL)), r_SOME(((rt_int)2LL)), p_BS)) && r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)2LL)), r_SOME(r_STD_ORD()), p_BS));
return rv2801; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("INTEGER", 7)))
{
{ rt_int rv2802 = ((((*(R22 *)rt_nil_check(l_RT_2782))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_RT_2782))).f_SCALE == ((rt_int)0LL)));
return rv2802; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2782))).f_KIND == g_T_FLOAT)))
{
{ rt_int rv2803 = 0;
return rv2803; }
}
{ rt_int rv2804 = r_UNIFY_VALUE(r_NTH_ARG(p_TS, ((rt_int)0LL)), r_SOME(((*(R22 *)rt_nil_check(l_RT_2782))).f_SCALE), p_BS);
return rv2804; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("BOOLEAN", 7)))
{
{ rt_int rv2805 = (((*(R22 *)rt_nil_check(l_RT_2782))).f_KIND == g_T_BOOL);
return rv2805; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("ASCII_STR", 9)))
{
{ rt_int rv2806 = ((((*(R22 *)rt_nil_check(l_RT_2782))).f_KIND == g_T_STR) && r_SAME_DERIVED_LENGTH(r_NTH_ARG(p_TS, ((rt_int)0LL)), l_RT_2782, p_BS));
return rv2806; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("CHAR_STR", 8)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2782))).f_KIND == g_T_STR)))
{
{ rt_int rv2807 = 0;
return rv2807; }
}
if ((!(((*(R17 *)rt_nil_check(r_NTH_ARG(p_TS, ((rt_int)1LL))))).f_KIND == g_TS_GEN)))
{
{ rt_int rv2808 = 1;
return rv2808; }
}
if ((!(((*(R22 *)rt_nil_check(l_RT_2782))).f_BASE == NULL)))
{
{ rt_int rv2809 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R22 *)rt_nil_check(l_RT_2782))).f_BASE, p_BS);
return rv2809; }
}
{ rt_int rv2810 = r_UNIFY(r_NTH_ARG(p_TS, ((rt_int)1LL)), ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII, p_BS);
return rv2810; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("BIT", 3)))
{
{ rt_int rv2811 = ((((*(R22 *)rt_nil_check(l_RT_2782))).f_KIND == g_T_BITS) && r_SAME_DERIVED_LENGTH(r_NTH_ARG(p_TS, ((rt_int)0LL)), l_RT_2782, p_BS));
return rv2811; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("SEMAPHORE", 9)))
{
{ rt_int rv2812 = (((*(R22 *)rt_nil_check(l_RT_2782))).f_KIND == g_T_SEM);
return rv2812; }
}
else if (r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3)))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2782))).f_KIND == g_T_PTR)))
{
{ rt_int rv2813 = 0;
return rv2813; }
}
{ rt_int rv2814 = r_UNIFY(((*(R17 *)rt_nil_check(p_TS))).f_A, r_TARGET(l_RT_2782), p_BS);
return rv2814; }
}
{
R12 * l_Y_2815; memset(&l_Y_2815, 0, sizeof l_Y_2815);
l_Y_2815 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
if ((l_Y_2815 == NULL))
{
{ rt_int rv2816 = 0;
return rv2816; }
}
if (((((*(R12 *)rt_nil_check(l_Y_2815))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_Y_2815))).f_DECL == NULL)))
{
{ rt_int rv2817 = r_SAME_CLASS(((*(R12 *)rt_nil_check(l_Y_2815))).f_T, p_T);
return rv2817; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_2815))).f_KIND == g_Y_TYPE)))
{
{ rt_int rv2818 = 0;
return rv2818; }
}
if ((((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_ABS))
{
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(p_T))).f_DECL) == r_ORIGINAL(l_Y_2815))))
{
{ rt_int rv2819 = 0;
return rv2819; }
}
}
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2815))).f_DECL))).f_B))).f_KIND == g_TS_RECORD))
{
if ((!(((*(R22 *)rt_nil_check(l_RT_2782))).f_KIND == g_T_REC)))
{
{ rt_int rv2820 = 0;
return rv2820; }
}
if ((((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2782))).f_BASE))).f_DECL == NULL))
{
{ rt_int rv2821 = 0;
return rv2821; }
}
if ((!(r_ORIGINAL(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_RT_2782))).f_BASE))).f_DECL) == r_ORIGINAL(l_Y_2815))))
{
{ rt_int rv2822 = 0;
return rv2822; }
}
}
else
{
if ((!r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(p_TS))).f_A)))
{
{ rt_int rv2823 = r_SAME_CLASS(r_RESOLVE(p_TS), p_T);
return rv2823; }
}
{ rt_int rv2824 = r_UNIFY(r_SUBST_FORMALS(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2815))).f_DECL))).f_B, ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2815))).f_DECL))).f_A, ((*(R17 *)rt_nil_check(p_TS))).f_A), l_RT_2782, p_BS);
return rv2824; }
}
{
R17 * l_F_2825; memset(&l_F_2825, 0, sizeof l_F_2825);
l_F_2825 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2815))).f_DECL))).f_A;
R17 * l_A_2826; memset(&l_A_2826, 0, sizeof l_A_2826);
l_A_2826 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R28 * l_V_2827; memset(&l_V_2827, 0, sizeof l_V_2827);
l_V_2827 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R12 * l_CLASS_2828; memset(&l_CLASS_2828, 0, sizeof l_CLASS_2828);
l_CLASS_2828 = r_RECORD_CLASS_OF(l_RT_2782);
for (;;) {
if ((l_F_2825 == NULL)) goto L_end2829;
{
{
R17 * l_N_2830; memset(&l_N_2830, 0, sizeof l_N_2830);
l_N_2830 = ((*(R17 *)rt_nil_check(l_F_2825))).f_A;
for (;;) {
if ((l_N_2830 == NULL)) goto L_end2831;
{
if ((l_A_2826 == NULL))
{
{ rt_int rv2832 = 0;
return rv2832; }
}
if ((((*(R17 *)rt_nil_check(l_F_2825))).f_B == NULL))
{
if ((!(l_CLASS_2828 == NULL)))
{
{
R21 * l_B_2833; memset(&l_B_2833, 0, sizeof l_B_2833);
l_B_2833 = r_FIND_BIND(((*(R12 *)rt_nil_check(l_CLASS_2828))).f_BINDINGS, ((*(R17 *)rt_nil_check(l_N_2830))).f_NAME);
if ((!(l_B_2833 == NULL)))
{
if ((!r_UNIFY(l_A_2826, ((*(R21 *)rt_nil_check(l_B_2833))).f_T, p_BS)))
{
{ rt_int rv2834 = 0;
return rv2834; }
}
}
}
}
}
else
{
if ((!(l_V_2827 == NULL)))
{
if ((((!(((*(R17 *)rt_nil_check(l_A_2826))).f_KIND == g_TS_GEN)) && (!(((*(R17 *)rt_nil_check(l_A_2826))).f_KIND == g_N_DONTCARE))) && (!(((*(R17 *)rt_nil_check(l_A_2826))).f_KIND == g_N_ANY))))
{
{
R25 l_M_2835; memset(&l_M_2835, 0, sizeof l_M_2835);
S_R25(&l_M_2835, r_MANIFEST(l_A_2826), 0);
if (((l_M_2835).f_OK && (((*(R28 *)rt_nil_check(l_V_2827))).f_MLO).f_OK))
{
if ((!((l_M_2835).f_V == (((*(R28 *)rt_nil_check(l_V_2827))).f_MLO).f_V)))
{
{ rt_int rv2836 = 0;
return rv2836; }
}
}
}
}
l_V_2827 = ((*(R28 *)rt_nil_check(l_V_2827))).f_NEXT;
}
}
l_A_2826 = ((*(R17 *)rt_nil_check(l_A_2826))).f_NEXT;
l_N_2830 = ((*(R17 *)rt_nil_check(l_N_2830))).f_NEXT;
}
RT_B_TICK();
} L_end2831: ;
}
l_F_2825 = ((*(R17 *)rt_nil_check(l_F_2825))).f_NEXT;
}
RT_B_TICK();
} L_end2829: ;
}
{ rt_int rv2837 = 1;
return rv2837; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_DERIVED_LENGTH(R17 * p_A, R22 * p_RT, R21 * p_BS) { RT_B_TICK(); 
if (((p_A == NULL) || (!(((*(R22 *)rt_nil_check(p_RT))).f_MLEN).f_OK)))
{
{ rt_int rv2838 = 1;
return rv2838; }
}
if (((!(((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN)) || ((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL))))
{
{ rt_int rv2839 = 1;
return rv2839; }
}
{
R9 l_KEY_2840; memset(&l_KEY_2840, 0, sizeof l_KEY_2840);
S_R9(&l_KEY_2840, r_QMKN(rt_str("%", 1), ((*(R17 *)rt_nil_check(p_A))).f_NAME), 0);
R21 * l_B_2841; memset(&l_B_2841, 0, sizeof l_B_2841);
l_B_2841 = r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, l_KEY_2840);
if ((!(l_B_2841 == NULL)))
{
{ rt_int rv2842 = (((*(R21 *)rt_nil_check(l_B_2841))).f_MV == (((*(R22 *)rt_nil_check(p_RT))).f_MLEN).f_V);
return rv2842; }
}
r_ADD_BIND(l_KEY_2840, NULL, ((*(R22 *)rt_nil_check(p_RT))).f_MLEN, NULL, p_BS);
{ rt_int rv2843 = 1;
return rv2843; }
}
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_REP(R17 * p_R, R22 * p_RT, R21 * p_BS) { RT_B_TICK(); 
R17 * l_A_2844; memset(&l_A_2844, 0, sizeof l_A_2844);
l_A_2844 = ((*(R22 *)rt_nil_check(p_RT))).f_REPS;
if (r_TEQS(((*(R17 *)rt_nil_check(p_R))).f_NAME, rt_str("FIXED_REP", 9)))
{
if ((!(((*(R22 *)rt_nil_check(p_RT))).f_KIND == g_T_INT)))
{
{ rt_int rv2845 = 0;
return rv2845; }
}
{
R9 l_SIGNING_2846; memset(&l_SIGNING_2846, 0, sizeof l_SIGNING_2846);
S_R9(&l_SIGNING_2846, r_MK(rt_str("SIGNED", 6)), 0);
if ((!(l_A_2844 == NULL)))
{
if ((!((r_TEQS(((*(R17 *)rt_nil_check(l_A_2844))).f_NAME, rt_str("FIXED_REP", 9)) || r_TEQS(((*(R17 *)rt_nil_check(l_A_2844))).f_NAME, rt_str("FIXED_STD", 9))))))
{
{ rt_int rv2847 = 1;
return rv2847; }
}
if ((r_TEQS(((*(R17 *)rt_nil_check(l_A_2844))).f_NAME, rt_str("FIXED_REP", 9)) && (!(((*(R17 *)rt_nil_check(l_A_2844))).f_A == NULL))))
{
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_2844))).f_A))).f_NEXT == NULL)))
{
S_R9(&l_SIGNING_2846, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_2844))).f_A))).f_NEXT))).f_NAME, 0);
}
}
}
if ((!r_UNIFY_VALUE(((*(R17 *)rt_nil_check(p_R))).f_A, r_STATIC_SIZE(p_RT), p_BS)))
{
{ rt_int rv2848 = 0;
return rv2848; }
}
if ((!(((*(R17 *)rt_nil_check(p_R))).f_A == NULL)))
{
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT == NULL)))
{
if (((((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_KIND == g_N_ENUMLIT))) && (!r_TEQ(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_R))).f_A))).f_NEXT))).f_NAME, l_SIGNING_2846))))
{
{ rt_int rv2849 = 0;
return rv2849; }
}
}
}
{ rt_int rv2850 = 1;
return rv2850; }
}
}
if ((l_A_2844 == NULL))
{
{ rt_int rv2851 = 1;
return rv2851; }
}
{ rt_int rv2852 = r_TEQ(((*(R17 *)rt_nil_check(p_R))).f_NAME, ((*(R17 *)rt_nil_check(l_A_2844))).f_NAME);
return rv2852; }
rt_raise(RT_X_INIT);
}
static rt_int r_NONSTANDARD_REP(R22 * p_T) { RT_B_TICK(); 
R17 * l_R_2853; memset(&l_R_2853, 0, sizeof l_R_2853);
l_R_2853 = ((*(R22 *)rt_nil_check(p_T))).f_REPS;
if ((l_R_2853 == NULL))
{
{ rt_int rv2854 = 0;
return rv2854; }
}
if ((((*(R17 *)rt_nil_check(l_R_2853))).f_KIND == g_TS_GEN))
{
{ rt_int rv2855 = 0;
return rv2855; }
}
{ rt_int rv2856 = (((((r_TEQS(((*(R17 *)rt_nil_check(l_R_2853))).f_NAME, rt_str("FIXED_REP", 9)) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2853))).f_NAME, rt_str("ENUM_REP", 8))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2853))).f_NAME, rt_str("ENUM_VAL_REP", 12))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2853))).f_NAME, rt_str("CHAR_STR_REP", 12))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2853))).f_NAME, rt_str("ARRAY_REP", 9))) || r_TEQS(((*(R17 *)rt_nil_check(l_R_2853))).f_NAME, rt_str("RECORD_REP", 10)));
return rv2856; }
rt_raise(RT_X_INIT);
}
static R12 * r_RECORD_CLASS_OF(R22 * p_T) { RT_B_TICK(); 
R12 * l_R_2857; memset(&l_R_2857, 0, sizeof l_R_2857);
l_R_2857 = ((*(R7 *)rt_nil_check(g_W))).f_RECS;
if ((!(((*(R22 *)rt_nil_check(p_T))).f_KIND == g_T_REC)))
{
{ R12 * rv2858 = NULL;
return rv2858; }
}
for (;;) {
if ((l_R_2857 == NULL)) goto L_end2859;
{
if ((((*(R12 *)rt_nil_check(l_R_2857))).f_T == ((*(R22 *)rt_nil_check(p_T))).f_BASE))
{
{ R12 * rv2860 = l_R_2857;
return rv2860; }
}
l_R_2857 = ((*(R12 *)rt_nil_check(l_R_2857))).f_INSTANCES;
}
RT_B_TICK();
} L_end2859: ;
{ R12 * rv2861 = NULL;
return rv2861; }
rt_raise(RT_X_INIT);
}
static rt_int r_UNIFY_VALUE(R17 * p_A, R25 p_M, R21 * p_BS) { RT_B_TICK(); 
if ((p_A == NULL))
{
{ rt_int rv2862 = 1;
return rv2862; }
}
if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2863 = 1;
return rv2863; }
}
else if ((((*(R17 *)rt_nil_check(p_A))).f_KIND == g_TS_GEN))
{
if (((((*(R17 *)rt_nil_check(p_A))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{ rt_int rv2864 = 1;
return rv2864; }
}
{
R21 * l_B_2865; memset(&l_B_2865, 0, sizeof l_B_2865);
l_B_2865 = r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, ((*(R17 *)rt_nil_check(p_A))).f_NAME);
if ((!(l_B_2865 == NULL)))
{
{ rt_int rv2866 = ((((*(R21 *)rt_nil_check(l_B_2865))).f_HASMV && (p_M).f_OK) && (((*(R21 *)rt_nil_check(l_B_2865))).f_MV == (p_M).f_V));
return rv2866; }
}
}
if ((!(p_M).f_OK))
{
{ rt_int rv2867 = 0;
return rv2867; }
}
r_ADD_BIND(((*(R17 *)rt_nil_check(p_A))).f_NAME, NULL, p_M, NULL, p_BS);
{ rt_int rv2868 = 1;
return rv2868; }
}
{
R25 l_V_2869; memset(&l_V_2869, 0, sizeof l_V_2869);
S_R25(&l_V_2869, r_MANIFEST(p_A), 0);
if (((l_V_2869).f_OK && (p_M).f_OK))
{
{ rt_int rv2870 = ((l_V_2869).f_V == (p_M).f_V);
return rv2870; }
}
}
{ rt_int rv2871 = 1;
return rv2871; }
rt_raise(RT_X_INIT);
}
static rt_int r_GENERIC_FITS(R30 * p_P, R29 * p_A, R21 * p_BS) { RT_B_TICK(); 
if ((((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(p_P))).f_TS))).f_KIND == g_TS_ROUTINE))
{
if (((*(R29 *)rt_nil_check(p_A))).f_HAVE)
{
{ rt_int rv2872 = 0;
return rv2872; }
}
if (((!(((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_NAME)) && (!(((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_APPLY))))
{
{ rt_int rv2873 = 0;
return rv2873; }
}
{ rt_int rv2874 = (!(r_FIND_ROUTINE_ARG(((*(R30 *)rt_nil_check(p_P))).f_TS, ((*(R29 *)rt_nil_check(p_A))).f_E, p_BS, ((rt_int)0LL), 0) == NULL));
return rv2874; }
}
if ((r_WANT_SENSITIVE(p_A) && (!(((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(p_A))).f_E))).f_KIND == g_N_INT))))
{
{ rt_int rv2875 = 1;
return rv2875; }
}
r_TYPE_ARG(p_A);
{ rt_int rv2876 = r_UNIFY(((*(R30 *)rt_nil_check(p_P))).f_TS, (((*(R29 *)rt_nil_check(p_A))).f_V).f_T, p_BS);
return rv2876; }
rt_raise(RT_X_INIT);
}
static R12 * r_INSTANCE(R12 * p_G, R29 * p_ARGS, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_BS_2877; memset(&l_BS_2877, 0, sizeof l_BS_2877);
l_BS_2877 = r_NEW_BINDS();
R30 * l_P_2878; memset(&l_P_2878, 0, sizeof l_P_2878);
l_P_2878 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R29 * l_A_2879; memset(&l_A_2879, 0, sizeof l_A_2879);
l_A_2879 = p_ARGS;
for (;;) {
if ((l_P_2878 == NULL)) goto L_end2880;
{
if ((((*(R30 *)rt_nil_check(l_P_2878))).f_TS == NULL))
{
if (((*(R29 *)rt_nil_check(l_A_2879))).f_HAVE)
{
r_FAIL(p_LINE, rt_str("a type is expected as the argument", 34));
}
r_ADD_BIND(((*(R30 *)rt_nil_check(l_P_2878))).f_NAME, r_ARG_TYPE(((*(R29 *)rt_nil_check(l_A_2879))).f_E), r_NO_MVAL(), NULL, l_BS_2877);
}
else if ((((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2878))).f_TS))).f_KIND == g_TS_ROUTINE))
{
r_ADD_BIND(((*(R30 *)rt_nil_check(l_P_2878))).f_NAME, NULL, r_NO_MVAL(), r_ROUTINE_ARGUMENT(((*(R30 *)rt_nil_check(l_P_2878))).f_TS, ((*(R29 *)rt_nil_check(l_A_2879))).f_E, p_LINE), l_BS_2877);
}
else if (((((!(((*(R29 *)rt_nil_check(l_A_2879))).f_E == NULL)) && (!((*(R29 *)rt_nil_check(l_A_2879))).f_HAVE)) && (!r_STATIC_GENERIC(((*(R30 *)rt_nil_check(l_P_2878))).f_TS))) && (((*(R17 *)rt_nil_check(((*(R29 *)rt_nil_check(l_A_2879))).f_E))).f_KIND == g_N_ENUMLIT)))
{
}
else
{
if ((!((*(R29 *)rt_nil_check(l_A_2879))).f_HAVE))
{
S_R26(&((*(R29 *)rt_nil_check(l_A_2879))).f_V, r_EXPR(((*(R29 *)rt_nil_check(l_A_2879))).f_E, NULL), 0);
((*(R29 *)rt_nil_check(l_A_2879))).f_HAVE = 1;
}
if ((!r_UNIFY(((*(R30 *)rt_nil_check(l_P_2878))).f_TS, (((*(R29 *)rt_nil_check(l_A_2879))).f_V).f_T, l_BS_2877)))
{
r_FAILT(p_LINE, rt_str("the argument does not fit the generic parameter ", 48), ((*(R30 *)rt_nil_check(l_P_2878))).f_NAME);
}
if (r_DONTCARE_TYPE_ARG(((*(R30 *)rt_nil_check(l_P_2878))).f_TS))
{
r_ADD_BIND(r_QMKN(rt_str("\?", 1), ((*(R30 *)rt_nil_check(l_P_2878))).f_NAME), (((*(R29 *)rt_nil_check(l_A_2879))).f_V).f_T, r_NO_MVAL(), NULL, l_BS_2877);
}
}
l_P_2878 = ((*(R30 *)rt_nil_check(l_P_2878))).f_NEXT;
l_A_2879 = ((*(R29 *)rt_nil_check(l_A_2879))).f_NEXT;
}
RT_B_TICK();
} L_end2880: ;
r_WHERE_BINDINGS(p_G, p_LINE, l_BS_2877);
{
R12 * l_I_2881; memset(&l_I_2881, 0, sizeof l_I_2881);
l_I_2881 = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
for (;;) {
if ((l_I_2881 == NULL)) goto L_end2882;
{
if (r_SAME_STATIC_BINDS(((*(R12 *)rt_nil_check(l_I_2881))).f_BINDINGS, ((*(R21 *)rt_nil_check(l_BS_2877))).f_NEXT))
{
{ R12 * rv2883 = l_I_2881;
return rv2883; }
}
l_I_2881 = ((*(R12 *)rt_nil_check(l_I_2881))).f_INSTANCES;
}
RT_B_TICK();
} L_end2882: ;
}
{ R12 * rv2884 = r_NEW_INSTANCE(p_G, ((*(R21 *)rt_nil_check(l_BS_2877))).f_NEXT, p_ARGS);
return rv2884; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_STATIC_BINDS(R21 * p_A, R21 * p_B) { RT_B_TICK(); 
R21 * l_P_2885; memset(&l_P_2885, 0, sizeof l_P_2885);
l_P_2885 = p_A;
for (;;) {
if ((l_P_2885 == NULL)) goto L_end2886;
{
{
R21 * l_Q_2887; memset(&l_Q_2887, 0, sizeof l_Q_2887);
l_Q_2887 = r_FIND_BIND(p_B, ((*(R21 *)rt_nil_check(l_P_2885))).f_NAME);
if ((l_Q_2887 == NULL))
{
{ rt_int rv2888 = 0;
return rv2888; }
}
if (((!(((*(R21 *)rt_nil_check(l_P_2885))).f_T == NULL)) || (!(((*(R21 *)rt_nil_check(l_Q_2887))).f_T == NULL))))
{
if (((((*(R21 *)rt_nil_check(l_P_2885))).f_T == NULL) || (((*(R21 *)rt_nil_check(l_Q_2887))).f_T == NULL)))
{
{ rt_int rv2889 = 0;
return rv2889; }
}
if ((!r_SAME_TYPE(((*(R21 *)rt_nil_check(l_P_2885))).f_T, ((*(R21 *)rt_nil_check(l_Q_2887))).f_T)))
{
{ rt_int rv2890 = 0;
return rv2890; }
}
if ((!r_SAME_LENGTH(((*(R21 *)rt_nil_check(l_P_2885))).f_T, ((*(R21 *)rt_nil_check(l_Q_2887))).f_T)))
{
{ rt_int rv2891 = 0;
return rv2891; }
}
if ((!r_SAME_REPS(((*(R21 *)rt_nil_check(l_P_2885))).f_T, ((*(R21 *)rt_nil_check(l_Q_2887))).f_T)))
{
{ rt_int rv2892 = 0;
return rv2892; }
}
}
if ((((!(((*(R21 *)rt_nil_check(l_P_2885))).f_HASMV == ((*(R21 *)rt_nil_check(l_Q_2887))).f_HASMV)) || (!(((*(R21 *)rt_nil_check(l_P_2885))).f_MV == ((*(R21 *)rt_nil_check(l_Q_2887))).f_MV))) || (!(((*(R21 *)rt_nil_check(l_P_2885))).f_R == ((*(R21 *)rt_nil_check(l_Q_2887))).f_R))))
{
{ rt_int rv2893 = 0;
return rv2893; }
}
}
l_P_2885 = ((*(R21 *)rt_nil_check(l_P_2885))).f_NEXT;
}
RT_B_TICK();
} L_end2886: ;
{ rt_int rv2894 = 1;
return rv2894; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_LENGTH(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R22 * l_RA_2895; memset(&l_RA_2895, 0, sizeof l_RA_2895);
l_RA_2895 = r_REAL_TYPE(p_A);
R22 * l_RB_2896; memset(&l_RB_2896, 0, sizeof l_RB_2896);
l_RB_2896 = r_REAL_TYPE(p_B);
if (((((!(((*(R22 *)rt_nil_check(l_RA_2895))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check(l_RA_2895))).f_KIND == g_T_BITS)))) || (!(((*(R22 *)rt_nil_check(l_RA_2895))).f_KIND == ((*(R22 *)rt_nil_check(l_RB_2896))).f_KIND))))
{
{ rt_int rv2897 = 1;
return rv2897; }
}
if (((((*(R22 *)rt_nil_check(l_RA_2895))).f_MLEN).f_OK && (((*(R22 *)rt_nil_check(l_RB_2896))).f_MLEN).f_OK))
{
{ rt_int rv2898 = ((((*(R22 *)rt_nil_check(l_RA_2895))).f_MLEN).f_V == (((*(R22 *)rt_nil_check(l_RB_2896))).f_MLEN).f_V);
return rv2898; }
}
{ rt_int rv2899 = ((((*(R22 *)rt_nil_check(l_RA_2895))).f_MLEN).f_OK == (((*(R22 *)rt_nil_check(l_RB_2896))).f_MLEN).f_OK);
return rv2899; }
rt_raise(RT_X_INIT);
}
static rt_int r_SAME_REPS(R22 * p_A, R22 * p_B) { RT_B_TICK(); 
R17 * l_RA_2900; memset(&l_RA_2900, 0, sizeof l_RA_2900);
l_RA_2900 = ((*(R22 *)rt_nil_check(p_A))).f_REPS;
R17 * l_RB_2901; memset(&l_RB_2901, 0, sizeof l_RB_2901);
l_RB_2901 = ((*(R22 *)rt_nil_check(p_B))).f_REPS;
if (((l_RA_2900 == NULL) || (l_RB_2901 == NULL)))
{
{ rt_int rv2902 = (l_RA_2900 == l_RB_2901);
return rv2902; }
}
if ((l_RA_2900 == l_RB_2901))
{
{ rt_int rv2903 = 1;
return rv2903; }
}
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_RA_2900))).f_NAME, ((*(R17 *)rt_nil_check(l_RB_2901))).f_NAME)))
{
{ rt_int rv2904 = 0;
return rv2904; }
}
{
R17 * l_X_2905; memset(&l_X_2905, 0, sizeof l_X_2905);
l_X_2905 = ((*(R17 *)rt_nil_check(l_RA_2900))).f_A;
R17 * l_Y_2906; memset(&l_Y_2906, 0, sizeof l_Y_2906);
l_Y_2906 = ((*(R17 *)rt_nil_check(l_RB_2901))).f_A;
for (;;) {
if (((l_X_2905 == NULL) || (l_Y_2906 == NULL))) goto L_end2907;
{
if (((((((*(R17 *)rt_nil_check(l_X_2905))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_X_2905))).f_KIND == g_N_ENUMLIT))) && (((((*(R17 *)rt_nil_check(l_Y_2906))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_Y_2906))).f_KIND == g_N_ENUMLIT)))))
{
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_X_2905))).f_NAME, ((*(R17 *)rt_nil_check(l_Y_2906))).f_NAME)))
{
{ rt_int rv2908 = 0;
return rv2908; }
}
}
else
{
{
R25 l_MX_2909; memset(&l_MX_2909, 0, sizeof l_MX_2909);
S_R25(&l_MX_2909, r_MANIFEST(l_X_2905), 0);
R25 l_MY_2910; memset(&l_MY_2910, 0, sizeof l_MY_2910);
S_R25(&l_MY_2910, r_MANIFEST(l_Y_2906), 0);
if (((!((l_MX_2909).f_OK == (l_MY_2910).f_OK)) || (!((l_MX_2909).f_V == (l_MY_2910).f_V))))
{
{ rt_int rv2911 = 0;
return rv2911; }
}
}
}
l_X_2905 = ((*(R17 *)rt_nil_check(l_X_2905))).f_NEXT;
l_Y_2906 = ((*(R17 *)rt_nil_check(l_Y_2906))).f_NEXT;
}
RT_B_TICK();
} L_end2907: ;
{ rt_int rv2912 = ((((l_X_2905 == NULL) && (l_Y_2906 == NULL)) && (((*(R17 *)rt_nil_check(l_RA_2900))).f_B == NULL)) && (((*(R17 *)rt_nil_check(l_RB_2901))).f_B == NULL));
return rv2912; }
}
rt_raise(RT_X_INIT);
}
static R12 * r_ROUTINE_ARGUMENT(R17 * p_TS, R17 * p_E, rt_int p_LINE) { RT_B_TICK(); 
{ R12 * rv2913 = r_FIND_ROUTINE_ARG(p_TS, p_E, NULL, p_LINE, 1);
return rv2913; }
rt_raise(RT_X_INIT);
}
static R12 * r_FIND_ROUTINE_ARG(R17 * p_TS, R17 * p_E, R21 * p_BS0, rt_int p_LINE, rt_int p_STRICT) { RT_B_TICK(); 
R12 * l_Y_2914; memset(&l_Y_2914, 0, sizeof l_Y_2914);
l_Y_2914 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
R12 * l_FOUND_2915; memset(&l_FOUND_2915, 0, sizeof l_FOUND_2915);
l_FOUND_2915 = NULL;
R21 * l_BS_2916; memset(&l_BS_2916, 0, sizeof l_BS_2916);
l_BS_2916 = p_BS0;
if ((l_BS_2916 == NULL))
{
l_BS_2916 = r_NEW_BINDS();
}
for (;;) {
if ((l_Y_2914 == NULL)) goto L_end2917;
{
if ((((*(R12 *)rt_nil_check(l_Y_2914))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_R_2918; memset(&l_R_2918, 0, sizeof l_R_2918);
l_R_2918 = r_ORIGINAL(l_Y_2914);
R21 * l_TRY_2919; memset(&l_TRY_2919, 0, sizeof l_TRY_2919);
l_TRY_2919 = r_NEW_BINDS();
((*(R21 *)rt_nil_check(l_TRY_2919))).f_NEXT = ((*(R21 *)rt_nil_check(l_BS_2916))).f_NEXT;
r_ROUTINE_HEADER(l_R_2918);
if ((((!((*(R12 *)rt_nil_check(l_R_2918))).f_GENERIC) && r_EXPLICIT_TEMPLATE_FITS(p_E, l_R_2918)) && r_TEMPLATE_FITS(p_TS, l_R_2918, l_TRY_2919)))
{
if (((!(l_FOUND_2915 == NULL)) && (!(l_FOUND_2915 == l_R_2918))))
{
if ((!p_STRICT))
{
{ R12 * rv2920 = NULL;
return rv2920; }
}
r_FAILT(p_LINE, rt_str("an overloaded routine argument needs its template: ", 51), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
l_FOUND_2915 = l_R_2918;
}
}
}
l_Y_2914 = r_LOOKUP_NEXT(l_Y_2914);
}
RT_B_TICK();
} L_end2917: ;
if ((l_FOUND_2915 == NULL))
{
if ((!p_STRICT))
{
{ R12 * rv2921 = NULL;
return rv2921; }
}
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter (5.1): ", 45), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_FOUND_2915))).f_USES == NULL)))
{
if ((!p_STRICT))
{
{ R12 * rv2922 = NULL;
return rv2922; }
}
r_FAILT(p_LINE, rt_str("a routine passed as an argument may not import data (5.1): ", 59), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
if (p_STRICT)
{
if ((!r_TEMPLATE_FITS(p_TS, l_FOUND_2915, l_BS_2916)))
{
r_FAILT(p_LINE, rt_str("no routine fits the routine parameter (5.1): ", 45), ((*(R17 *)rt_nil_check(p_E))).f_NAME);
}
r_NEED_BODY(l_FOUND_2915);
}
{ R12 * rv2923 = l_FOUND_2915;
return rv2923; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPLICIT_TEMPLATE_FITS(R17 * p_E, R12 * p_R) { RT_B_TICK(); 
R17 * l_A_2924; memset(&l_A_2924, 0, sizeof l_A_2924);
l_A_2924 = ((*(R17 *)rt_nil_check(p_E))).f_A;
R30 * l_Q_2925; memset(&l_Q_2925, 0, sizeof l_Q_2925);
l_Q_2925 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY)))
{
{ rt_int rv2926 = 1;
return rv2926; }
}
if (((!(((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
{ rt_int rv2927 = 0;
return rv2927; }
}
for (;;) {
if (((l_A_2924 == NULL) || (l_Q_2925 == NULL))) goto L_end2928;
{
if ((((*(R30 *)rt_nil_check(l_Q_2925))).f_T == NULL))
{
{ rt_int rv2929 = 0;
return rv2929; }
}
if ((!r_IDENTICAL_TYPE(r_RESOLVE(r_EXPR_TO_TS(l_A_2924)), ((*(R30 *)rt_nil_check(l_Q_2925))).f_T)))
{
{ rt_int rv2930 = 0;
return rv2930; }
}
l_A_2924 = ((*(R17 *)rt_nil_check(l_A_2924))).f_NEXT;
l_Q_2925 = ((*(R30 *)rt_nil_check(l_Q_2925))).f_NEXT;
}
RT_B_TICK();
} L_end2928: ;
if (((!(l_A_2924 == NULL)) || (!(l_Q_2925 == NULL))))
{
{ rt_int rv2931 = 0;
return rv2931; }
}
if ((!(((*(R17 *)rt_nil_check(p_E))).f_E == NULL)))
{
{ rt_int rv2932 = r_IDENTICAL_TYPE(r_RESOLVE(((*(R17 *)rt_nil_check(p_E))).f_E), ((*(R12 *)rt_nil_check(p_R))).f_RESULT);
return rv2932; }
}
{ rt_int rv2933 = 1;
return rv2933; }
rt_raise(RT_X_INIT);
}
static rt_int r_TEMPLATE_FITS(R17 * p_TS, R12 * p_R, R21 * p_BS) { RT_B_TICK(); 
R17 * l_P_2934; memset(&l_P_2934, 0, sizeof l_P_2934);
l_P_2934 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R30 * l_Q_2935; memset(&l_Q_2935, 0, sizeof l_Q_2935);
l_Q_2935 = ((*(R12 *)rt_nil_check(p_R))).f_PARAMS;
if ((!(((((*(R17 *)rt_nil_check(p_TS))).f_IV == ((rt_int)1LL))) == ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_IV == ((rt_int)1LL))))))
{
{ rt_int rv2936 = 0;
return rv2936; }
}
for (;;) {
if (((l_P_2934 == NULL) || (l_Q_2935 == NULL))) goto L_end2937;
{
if ((!(((*(R17 *)rt_nil_check(l_P_2934))).f_IV == ((*(R30 *)rt_nil_check(l_Q_2935))).f_MODE)))
{
{ rt_int rv2938 = 0;
return rv2938; }
}
if (((((*(R17 *)rt_nil_check(l_P_2934))).f_B == NULL) || (((*(R30 *)rt_nil_check(l_Q_2935))).f_T == NULL)))
{
if (((!(((*(R17 *)rt_nil_check(l_P_2934))).f_B == NULL)) || (!(((*(R30 *)rt_nil_check(l_Q_2935))).f_T == NULL))))
{
{ rt_int rv2939 = 0;
return rv2939; }
}
}
else if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_P_2934))).f_B))).f_KIND == g_TS_ROUTINE))
{
{ rt_int rv2940 = 0;
return rv2940; }
}
else if ((!r_TYPE_FITS_SPEC(((*(R17 *)rt_nil_check(l_P_2934))).f_B, ((*(R30 *)rt_nil_check(l_Q_2935))).f_T, p_BS)))
{
{ rt_int rv2941 = 0;
return rv2941; }
}
l_P_2934 = ((*(R17 *)rt_nil_check(l_P_2934))).f_NEXT;
l_Q_2935 = ((*(R30 *)rt_nil_check(l_Q_2935))).f_NEXT;
}
RT_B_TICK();
} L_end2937: ;
if (((!(l_P_2934 == NULL)) || (!(l_Q_2935 == NULL))))
{
{ rt_int rv2942 = 0;
return rv2942; }
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if ((!r_TYPE_FITS_SPEC(((*(R17 *)rt_nil_check(p_TS))).f_B, ((*(R12 *)rt_nil_check(p_R))).f_RESULT, p_BS)))
{
{ rt_int rv2943 = 0;
return rv2943; }
}
}
{
R17 * l_X_2944; memset(&l_X_2944, 0, sizeof l_X_2944);
l_X_2944 = ((*(R17 *)rt_nil_check(p_TS))).f_D;
for (;;) {
if ((l_X_2944 == NULL)) goto L_end2945;
{
if ((!r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_R))).f_DECL))).f_D))).f_A, ((*(R17 *)rt_nil_check(l_X_2944))).f_NAME)))
{
{ rt_int rv2946 = 0;
return rv2946; }
}
l_X_2944 = ((*(R17 *)rt_nil_check(l_X_2944))).f_NEXT;
}
RT_B_TICK();
} L_end2945: ;
}
{ rt_int rv2947 = 1;
return rv2947; }
rt_raise(RT_X_INIT);
}
static rt_int r_TYPE_FITS_SPEC(R17 * p_TS, R22 * p_T, R21 * p_BS) { RT_B_TICK(); 
if ((r_STATIC_GENERIC(p_TS) || r_HAS_DERIVED(p_TS)))
{
{ rt_int rv2948 = r_UNIFY(p_TS, p_T, p_BS);
return rv2948; }
}
{ rt_int rv2949 = r_IDENTICAL_TYPE(r_RESOLVE(p_TS), p_T);
return rv2949; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_DERIVED(R17 * p_TS) { RT_B_TICK(); 
if ((p_TS == NULL))
{
{ rt_int rv2950 = 0;
return rv2950; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2951 = 1;
return rv2951; }
}
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME))
{
if (r_HAS_GEN_ARG(((*(R17 *)rt_nil_check(p_TS))).f_A))
{
{ rt_int rv2952 = 1;
return rv2952; }
}
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_B == NULL)))
{
if ((r_HAS_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_A) || r_HAS_DERIVED(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_TS))).f_B))).f_B)))
{
{ rt_int rv2953 = 1;
return rv2953; }
}
}
}
else if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
{ rt_int rv2954 = 1;
return rv2954; }
}
{ rt_int rv2955 = 0;
return rv2955; }
rt_raise(RT_X_INIT);
}
static void r_WHERE_BINDINGS(R12 * p_G, rt_int p_LINE, R21 * p_BS) { RT_B_TICK(); 
R17 * l_NEEDL_2956; memset(&l_NEEDL_2956, 0, sizeof l_NEEDL_2956);
l_NEEDL_2956 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_G))).f_DECL))).f_D))).f_B;
R21 * l_SAVED_2957; memset(&l_SAVED_2957, 0, sizeof l_SAVED_2957);
l_SAVED_2957 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R21 *)rt_nil_check(p_BS))).f_NEXT;
for (;;) {
if ((l_NEEDL_2956 == NULL)) goto L_end2958;
{
{
R17 * l_T_2959; memset(&l_T_2959, 0, sizeof l_T_2959);
l_T_2959 = ((*(R17 *)rt_nil_check(l_NEEDL_2956))).f_A;
for (;;) {
if ((l_T_2959 == NULL)) goto L_end2960;
{
if ((r_FIND_BIND(((*(R21 *)rt_nil_check(p_BS))).f_NEXT, ((*(R17 *)rt_nil_check(l_T_2959))).f_NAME) == NULL))
{
{
R29 * l_ARGS_2961; memset(&l_ARGS_2961, 0, sizeof l_ARGS_2961);
l_ARGS_2961 = NULL;
R29 * l_TAIL_2962; memset(&l_TAIL_2962, 0, sizeof l_TAIL_2962);
l_TAIL_2962 = NULL;
R17 * l_P_2963; memset(&l_P_2963, 0, sizeof l_P_2963);
l_P_2963 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_T_2959))).f_B))).f_A;
R12 * l_R_2964; memset(&l_R_2964, 0, sizeof l_R_2964);
rt_int l_ENTERED_2965; memset(&l_ENTERED_2965, 0, sizeof l_ENTERED_2965);
l_ENTERED_2965 = r_ENTER_MODULE_FOR(p_G);
for (;;) {
if ((l_P_2963 == NULL)) goto L_end2966;
{
{
R29 * l_A_2967; memset(&l_A_2967, 0, sizeof l_A_2967);
if ((((*(R17 *)rt_nil_check(l_P_2963))).f_B == NULL))
{
l_A_2967 = r_VAL_ARG(r_MKET(r_NO_TEXT(), ((*(R7 *)rt_nil_check(g_W))).f_TY_TYPE), NULL);
}
else
{
l_A_2967 = r_VAL_ARG(r_MKLV(r_MK(rt_str("0", 1)), r_RESOLVE(((*(R17 *)rt_nil_check(l_P_2963))).f_B), 1, r_NO_TEXT()), NULL);
}
((*(R29 *)rt_nil_check(l_A_2967))).f_MODE = ((*(R17 *)rt_nil_check(l_P_2963))).f_IV;
if ((l_TAIL_2962 == NULL))
{
l_ARGS_2961 = l_A_2967;
}
else
{
((*(R29 *)rt_nil_check(l_TAIL_2962))).f_NEXT = l_A_2967;
}
l_TAIL_2962 = l_A_2967;
}
l_P_2963 = ((*(R17 *)rt_nil_check(l_P_2963))).f_NEXT;
}
RT_B_TICK();
} L_end2966: ;
if (l_ENTERED_2965)
{
r_LEAVE_MODULE(((*(R12 *)rt_nil_check(p_G))).f_MODL);
}
l_R_2964 = r_FIND_ROUTINE(((*(R17 *)rt_nil_check(l_T_2959))).f_NAME, l_ARGS_2961, p_LINE, 0);
if ((l_R_2964 == NULL))
{
l_R_2964 = r_LOOKUP(((*(R17 *)rt_nil_check(l_T_2959))).f_NAME);
for (;;) {
if ((l_R_2964 == NULL)) goto L_end2968;
{
if ((((*(R12 *)rt_nil_check(l_R_2964))).f_KIND == g_Y_BUILTIN))
{
goto L_end2968;
}
l_R_2964 = r_LOOKUP_NEXT(l_R_2964);
}
RT_B_TICK();
} L_end2968: ;
}
if (((l_R_2964 == NULL) && (!r_IS_OPERATOR_NAME(((*(R17 *)rt_nil_check(l_T_2959))).f_NAME))))
{
r_FAILT(p_LINE, rt_str("no routine for the WHERE clause (5.2): ", 39), ((*(R17 *)rt_nil_check(l_T_2959))).f_NAME);
}
if ((!(l_R_2964 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_R_2964))).f_KIND == g_Y_ROUTINE))
{
r_COMPUTE_USES(r_ORIGINAL(l_R_2964));
if ((!(((*(R12 *)rt_nil_check(r_ORIGINAL(l_R_2964)))).f_USES == NULL)))
{
r_FAILT(p_LINE, rt_str("a routine named in a WHERE clause may not import data (5.2): ", 61), ((*(R17 *)rt_nil_check(l_T_2959))).f_NAME);
}
}
r_ADD_BIND(((*(R17 *)rt_nil_check(l_T_2959))).f_NAME, NULL, r_NO_MVAL(), l_R_2964, p_BS);
}
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R21 *)rt_nil_check(p_BS))).f_NEXT;
}
}
l_T_2959 = ((*(R17 *)rt_nil_check(l_T_2959))).f_NEXT;
}
RT_B_TICK();
} L_end2960: ;
}
l_NEEDL_2956 = ((*(R17 *)rt_nil_check(l_NEEDL_2956))).f_NEXT;
}
RT_B_TICK();
} L_end2958: ;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2957;
}
static rt_int r_DONTCARE_TYPE_ARG(R17 * p_TS) { RT_B_TICK(); 
if ((!(((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME)))
{
{ rt_int rv2969 = 0;
return rv2969; }
}
if ((r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FIXED", 5)) || r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("FLOAT", 5))))
{
{
R17 * l_A_2970; memset(&l_A_2970, 0, sizeof l_A_2970);
l_A_2970 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
for (;;) {
if ((l_A_2970 == NULL)) goto L_end2971;
{
if ((((*(R17 *)rt_nil_check(l_A_2970))).f_KIND == g_N_DONTCARE))
{
{ rt_int rv2972 = 1;
return rv2972; }
}
l_A_2970 = ((*(R17 *)rt_nil_check(l_A_2970))).f_NEXT;
}
RT_B_TICK();
} L_end2971: ;
}
{ rt_int rv2973 = 0;
return rv2973; }
}
{
R12 * l_Y_2974; memset(&l_Y_2974, 0, sizeof l_Y_2974);
l_Y_2974 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(p_TS))).f_NAME);
R17 * l_A_2975; memset(&l_A_2975, 0, sizeof l_A_2975);
l_A_2975 = ((*(R17 *)rt_nil_check(p_TS))).f_A;
R17 * l_F_2976; memset(&l_F_2976, 0, sizeof l_F_2976);
if ((l_Y_2974 == NULL))
{
{ rt_int rv2977 = 0;
return rv2977; }
}
if (((!(((*(R12 *)rt_nil_check(l_Y_2974))).f_KIND == g_Y_TYPE)) || (((*(R12 *)rt_nil_check(l_Y_2974))).f_DECL == NULL)))
{
{ rt_int rv2978 = 0;
return rv2978; }
}
l_F_2976 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_2974))).f_DECL))).f_A;
for (;;) {
if ((l_F_2976 == NULL)) goto L_end2979;
{
{
R17 * l_N_2980; memset(&l_N_2980, 0, sizeof l_N_2980);
l_N_2980 = ((*(R17 *)rt_nil_check(l_F_2976))).f_A;
for (;;) {
if ((l_N_2980 == NULL)) goto L_end2981;
{
if ((l_A_2975 == NULL))
{
{ rt_int rv2982 = 0;
return rv2982; }
}
if (((((*(R17 *)rt_nil_check(l_F_2976))).f_B == NULL) && (((*(R17 *)rt_nil_check(l_A_2975))).f_KIND == g_N_DONTCARE)))
{
{ rt_int rv2983 = 1;
return rv2983; }
}
l_A_2975 = ((*(R17 *)rt_nil_check(l_A_2975))).f_NEXT;
l_N_2980 = ((*(R17 *)rt_nil_check(l_N_2980))).f_NEXT;
}
RT_B_TICK();
} L_end2981: ;
}
l_F_2976 = ((*(R17 *)rt_nil_check(l_F_2976))).f_NEXT;
}
RT_B_TICK();
} L_end2979: ;
}
{ rt_int rv2984 = 0;
return rv2984; }
rt_raise(RT_X_INIT);
}
static R12 * r_NEW_INSTANCE(R12 * p_G, R21 * p_BS, R29 * p_ARGS) { RT_B_TICK(); 
R29 * l_A_2985; memset(&l_A_2985, 0, sizeof l_A_2985);
l_A_2985 = p_ARGS;
R12 * l_I_2986; memset(&l_I_2986, 0, sizeof l_I_2986);
l_I_2986 = r_NEW_SYM(g_Y_ROUTINE, ((*(R12 *)rt_nil_check(p_G))).f_NAME);
R21 * l_SAVED_2987; memset(&l_SAVED_2987, 0, sizeof l_SAVED_2987);
l_SAVED_2987 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R12 * l_SAVED_SEG_2988; memset(&l_SAVED_SEG_2988, 0, sizeof l_SAVED_SEG_2988);
l_SAVED_SEG_2988 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R12 * l_HOME_2989; memset(&l_HOME_2989, 0, sizeof l_HOME_2989);
l_HOME_2989 = r_ENTER_HOME(p_G);
R30 * l_P_2990; memset(&l_P_2990, 0, sizeof l_P_2990);
l_P_2990 = ((*(R12 *)rt_nil_check(p_G))).f_PARAMS;
R30 * l_TAIL_2991; memset(&l_TAIL_2991, 0, sizeof l_TAIL_2991);
l_TAIL_2991 = NULL;
S_R12(&(*(R12 *)rt_nil_check(l_I_2986)), (*(R12 *)rt_nil_check(p_G)), 0);
((*(R12 *)rt_nil_check(l_I_2986))).f_GENERIC = 0;
((*(R12 *)rt_nil_check(l_I_2986))).f_LINKAGE = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_I_2986))).f_BINDINGS = p_BS;
((*(R12 *)rt_nil_check(l_I_2986))).f_PARAMS = NULL;
S_R9(&((*(R12 *)rt_nil_check(l_I_2986))).f_ACCESS, r_FMT2(rt_str("@_@", 3), ((*(R12 *)rt_nil_check(p_G))).f_ACCESS, r_NEW_NAME(rt_str("i", 1))), 0);
((*(R12 *)rt_nil_check(l_I_2986))).f_INSTANCES = ((*(R12 *)rt_nil_check(p_G))).f_INSTANCES;
((*(R12 *)rt_nil_check(p_G))).f_INSTANCES = l_I_2986;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = p_BS;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(p_G))).f_HOME;
r_ENTER_MODULE_OF(p_G);
for (;;) {
if ((l_P_2990 == NULL)) goto L_end2992;
{
{
R30 * l_PM_2993; memset(&l_PM_2993, 0, sizeof l_PM_2993);
l_PM_2993 = ({ R30 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R30(&(*(R30 *)rt_nil_check(l_PM_2993)), (*(R30 *)rt_nil_check(l_P_2990)), 0);
((*(R30 *)rt_nil_check(l_PM_2993))).f_NEXT = NULL;
if ((((*(R30 *)rt_nil_check(l_P_2990))).f_TS == NULL))
{
((*(R30 *)rt_nil_check(l_PM_2993))).f_T = NULL;
}
else if ((((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2990))).f_TS))).f_KIND == g_TS_ROUTINE))
{
((*(R30 *)rt_nil_check(l_PM_2993))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID;
}
else if ((r_DONTCARE_TYPE_ARG(((*(R30 *)rt_nil_check(l_P_2990))).f_TS) && ((*(R29 *)rt_nil_check(l_A_2985))).f_HAVE))
{
((*(R30 *)rt_nil_check(l_PM_2993))).f_T = (((*(R29 *)rt_nil_check(l_A_2985))).f_V).f_T;
if ((((*(R22 *)rt_nil_check(((*(R30 *)rt_nil_check(l_PM_2993))).f_T))).f_KIND == g_T_ABS))
{
if ((((*(R22 *)rt_nil_check(((*(R30 *)rt_nil_check(l_PM_2993))).f_T))).f_MODL == ((*(R12 *)rt_nil_check(p_G))).f_MODL))
{
((*(R30 *)rt_nil_check(l_PM_2993))).f_T = ((*(R22 *)rt_nil_check(((*(R30 *)rt_nil_check(l_PM_2993))).f_T))).f_BASE;
}
}
}
else
{
((*(R30 *)rt_nil_check(l_PM_2993))).f_T = r_RESOLVE(((*(R30 *)rt_nil_check(l_P_2990))).f_TS);
}
if ((!(((*(R30 *)rt_nil_check(l_P_2990))).f_TS == NULL)))
{
if (((((((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2990))).f_TS))).f_KIND == g_TS_GEN) || (((((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2990))).f_TS))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2990))).f_TS))).f_A == NULL))))) && ((((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2990))).f_TS))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((!(r_FIND_BIND(p_BS, ((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2990))).f_TS))).f_NAME) == NULL)))
{
if ((!(((*(R21 *)rt_nil_check(r_FIND_BIND(p_BS, ((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2990))).f_TS))).f_NAME)))).f_T == NULL)))
{
((*(R30 *)rt_nil_check(l_PM_2993))).f_T = r_MARK_GENP(((*(R30 *)rt_nil_check(l_PM_2993))).f_T, ((*(R17 *)rt_nil_check(((*(R30 *)rt_nil_check(l_P_2990))).f_TS))).f_NAME);
}
}
}
}
((*(R30 *)rt_nil_check(l_PM_2993))).f_TS = NULL;
if ((l_TAIL_2991 == NULL))
{
((*(R12 *)rt_nil_check(l_I_2986))).f_PARAMS = l_PM_2993;
}
else
{
((*(R30 *)rt_nil_check(l_TAIL_2991))).f_NEXT = l_PM_2993;
}
l_TAIL_2991 = l_PM_2993;
}
l_P_2990 = ((*(R30 *)rt_nil_check(l_P_2990))).f_NEXT;
l_A_2985 = ((*(R29 *)rt_nil_check(l_A_2985))).f_NEXT;
}
RT_B_TICK();
} L_end2992: ;
((*(R12 *)rt_nil_check(l_I_2986))).f_RESULT = r_RESULT_TYPE(l_I_2986);
r_LEAVE_MODULE_OF(p_G);
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_2987;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_2988;
r_LEAVE_HOME(p_G, l_HOME_2989);
S_R9(&((*(R12 *)rt_nil_check(l_I_2986))).f_FWD, r_C_HEADER(l_I_2986), 0);
r_EMIT(g_O_PROTOS, r_CATS(((*(R12 *)rt_nil_check(l_I_2986))).f_FWD, rt_str(";", 1)));
((*(R12 *)rt_nil_check(l_I_2986))).f_MEMBERS = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
((*(R7 *)rt_nil_check(g_W))).f_PENDING = l_I_2986;
{ R12 * rv2994 = l_I_2986;
return rv2994; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_OPERATOR_NAME(R9 p_NAME) { RT_B_TICK(); 
if (((p_NAME).f_LEN < ((rt_int)2LL)))
{
{ rt_int rv2995 = 0;
return rv2995; }
}
{ rt_int rv2996 = rt_b_eq(rt_b_slice(r_STR(p_NAME, (p_NAME).f_LEN), rt_sub((p_NAME).f_LEN, ((rt_int)1LL)), rt_sub((p_NAME).f_LEN, ((rt_int)1LL))), rt_str("_", 1));
return rv2996; }
rt_raise(RT_X_INIT);
}
static R17 * r_SUBST_FORMALS(R17 * p_TS, R17 * p_FORMALS, R17 * p_ARGS) { RT_B_TICK(); 
R17 * l_C_2997; memset(&l_C_2997, 0, sizeof l_C_2997);
if ((p_TS == NULL))
{
{ R17 * rv2998 = NULL;
return rv2998; }
}
if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && (((*(R17 *)rt_nil_check(p_TS))).f_A == NULL)))
{
{
R17 * l_F_2999; memset(&l_F_2999, 0, sizeof l_F_2999);
l_F_2999 = p_FORMALS;
R17 * l_A_3000; memset(&l_A_3000, 0, sizeof l_A_3000);
l_A_3000 = p_ARGS;
for (;;) {
if ((l_F_2999 == NULL)) goto L_end3001;
{
{
R17 * l_N_3002; memset(&l_N_3002, 0, sizeof l_N_3002);
l_N_3002 = ((*(R17 *)rt_nil_check(l_F_2999))).f_A;
for (;;) {
if ((l_N_3002 == NULL)) goto L_end3003;
{
if ((l_A_3000 == NULL))
{
{ R17 * rv3004 = p_TS;
return rv3004; }
}
if (((((*(R17 *)rt_nil_check(l_F_2999))).f_B == NULL) && r_TEQ(((*(R17 *)rt_nil_check(l_N_3002))).f_NAME, ((*(R17 *)rt_nil_check(p_TS))).f_NAME)))
{
{ R17 * rv3005 = l_A_3000;
return rv3005; }
}
l_A_3000 = ((*(R17 *)rt_nil_check(l_A_3000))).f_NEXT;
l_N_3002 = ((*(R17 *)rt_nil_check(l_N_3002))).f_NEXT;
}
RT_B_TICK();
} L_end3003: ;
}
l_F_2999 = ((*(R17 *)rt_nil_check(l_F_2999))).f_NEXT;
}
RT_B_TICK();
} L_end3001: ;
}
{ R17 * rv3006 = p_TS;
return rv3006; }
}
l_C_2997 = r_COPY_NODE(p_TS);
if ((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_ARRAY))
{
((*(R17 *)rt_nil_check(l_C_2997))).f_C = r_SUBST_FORMALS(((*(R17 *)rt_nil_check(p_TS))).f_C, p_FORMALS, p_ARGS);
}
else if (((((*(R17 *)rt_nil_check(p_TS))).f_KIND == g_TS_NAME) && r_TEQS(((*(R17 *)rt_nil_check(p_TS))).f_NAME, rt_str("PTR", 3))))
{
((*(R17 *)rt_nil_check(l_C_2997))).f_A = r_SUBST_FORMALS(((*(R17 *)rt_nil_check(p_TS))).f_A, p_FORMALS, p_ARGS);
}
{ R17 * rv3007 = l_C_2997;
return rv3007; }
rt_raise(RT_X_INIT);
}
static R17 * r_COPY_NODE(R17 * p_N) { RT_B_TICK(); 
R17 * l_C_3008; memset(&l_C_3008, 0, sizeof l_C_3008);
l_C_3008 = ({ R17 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R17(&(*(R17 *)rt_nil_check(l_C_3008)), (*(R17 *)rt_nil_check(p_N)), 0);
((*(R17 *)rt_nil_check(l_C_3008))).f_NEXT = NULL;
{ R17 * rv3009 = l_C_3008;
return rv3009; }
rt_raise(RT_X_INIT);
}
static rt_int r_IN_IDENTS(R17 * p_L, R9 p_NAME) { RT_B_TICK(); 
R17 * l_P_3010; memset(&l_P_3010, 0, sizeof l_P_3010);
l_P_3010 = p_L;
for (;;) {
if ((l_P_3010 == NULL)) goto L_end3011;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_P_3010))).f_NAME, p_NAME))
{
{ rt_int rv3012 = 1;
return rv3012; }
}
l_P_3010 = ((*(R17 *)rt_nil_check(l_P_3010))).f_NEXT;
}
RT_B_TICK();
} L_end3011: ;
{ rt_int rv3013 = 0;
return rv3013; }
rt_raise(RT_X_INIT);
}
static rt_int r_CHECK_IMPORTED(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_IS_3014; memset(&l_IS_3014, 0, sizeof l_IS_3014);
l_IS_3014 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
if (((!(((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR)) || (((*(R12 *)rt_nil_check(p_Y))).f_OWNER < ((rt_int)0LL))))
{
{ rt_int rv3015 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv3015; }
}
if ((l_IS_3014 == NULL))
{
{ rt_int rv3016 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv3016; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_OWNER == ((*(R20 *)rt_nil_check(l_IS_3014))).f_ID) || (((*(R20 *)rt_nil_check(l_IS_3014))).f_ID == ((rt_int)0LL))))
{
{ rt_int rv3017 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv3017; }
}
if ((!(((*(R20 *)rt_nil_check(l_IS_3014))).f_IMPORTS == NULL)))
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_3014))).f_IMPORTS))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3018 = (!((*(R12 *)rt_nil_check(p_Y))).f_INPUT);
return rv3018; }
}
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_3014))).f_IMPORTS))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3019 = 0;
return rv3019; }
}
}
r_FAILT(p_LINE, rt_str("a variable of an enclosing scope must be imported (4.1.1): ", 59), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_COMPUTE_USES(R12 * p_Y) { RT_B_TICK(); 
R17 * l_ITEMS_3020; memset(&l_ITEMS_3020, 0, sizeof l_ITEMS_3020);
l_ITEMS_3020 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E;
R17 * l_HEAD_3021; memset(&l_HEAD_3021, 0, sizeof l_HEAD_3021);
l_HEAD_3021 = NULL;
R17 * l_TAIL_3022; memset(&l_TAIL_3022, 0, sizeof l_TAIL_3022);
l_TAIL_3022 = NULL;
if ((!(((*(R12 *)rt_nil_check(p_Y))).f_MV == ((rt_int)0LL))))
{
return;
}
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)2LL);
if ((l_ITEMS_3020 == NULL))
{
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
return;
}
r_ADD_USES(((*(R17 *)rt_nil_check(l_ITEMS_3020))).f_A, &l_HEAD_3021, &l_TAIL_3022);
r_ADD_USES(((*(R17 *)rt_nil_check(l_ITEMS_3020))).f_B, &l_HEAD_3021, &l_TAIL_3022);
{
R17 * l_R_3023; memset(&l_R_3023, 0, sizeof l_R_3023);
l_R_3023 = ((*(R17 *)rt_nil_check(l_ITEMS_3020))).f_C;
for (;;) {
if ((l_R_3023 == NULL)) goto L_end3024;
{
{
R12 * l_Z_3025; memset(&l_Z_3025, 0, sizeof l_Z_3025);
l_Z_3025 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_3023))).f_NAME);
if (((l_Z_3025 == NULL) && (!r_LOCAL_MODULE_EXPORTS(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_C, ((*(R17 *)rt_nil_check(l_R_3023))).f_NAME))))
{
r_FAILT(((*(R17 *)rt_nil_check(l_R_3023))).f_LINE, rt_str("an imported routine is not visible: ", 36), ((*(R17 *)rt_nil_check(l_R_3023))).f_NAME);
}
for (;;) {
if ((l_Z_3025 == NULL)) goto L_end3026;
{
if ((((*(R12 *)rt_nil_check(l_Z_3025))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_3027; memset(&l_O_3027, 0, sizeof l_O_3027);
l_O_3027 = r_ORIGINAL(l_Z_3025);
R17 * l_U_3028; memset(&l_U_3028, 0, sizeof l_U_3028);
r_COMPUTE_USES(l_O_3027);
l_U_3028 = ((*(R12 *)rt_nil_check(l_O_3027))).f_USES;
for (;;) {
if ((l_U_3028 == NULL)) goto L_end3029;
{
if ((!r_IN_IDENTS(l_HEAD_3021, ((*(R17 *)rt_nil_check(l_U_3028))).f_NAME)))
{
{
R17 * l_N_3030; memset(&l_N_3030, 0, sizeof l_N_3030);
l_N_3030 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_U_3028))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_N_3030))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3028))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_3030))).f_IV = ((*(R17 *)rt_nil_check(l_U_3028))).f_IV;
r_ADD_LIST(l_N_3030, &l_HEAD_3021, &l_TAIL_3022);
}
}
l_U_3028 = ((*(R17 *)rt_nil_check(l_U_3028))).f_NEXT;
}
RT_B_TICK();
} L_end3029: ;
}
}
l_Z_3025 = r_LOOKUP_NEXT(l_Z_3025);
}
RT_B_TICK();
} L_end3026: ;
}
l_R_3023 = ((*(R17 *)rt_nil_check(l_R_3023))).f_NEXT;
}
RT_B_TICK();
} L_end3024: ;
}
((*(R12 *)rt_nil_check(p_Y))).f_USES = l_HEAD_3021;
((*(R12 *)rt_nil_check(p_Y))).f_MV = ((rt_int)1LL);
}
static rt_int r_LOCAL_MODULE_EXPORTS(R17 * p_B, R9 p_NAME) { RT_B_TICK(); 
R17 * l_M_3031; memset(&l_M_3031, 0, sizeof l_M_3031);
if ((p_B == NULL))
{
{ rt_int rv3032 = 0;
return rv3032; }
}
l_M_3031 = ((*(R17 *)rt_nil_check(p_B))).f_C;
for (;;) {
if ((l_M_3031 == NULL)) goto L_end3033;
{
if ((((*(R17 *)rt_nil_check(l_M_3031))).f_KIND == g_N_MODULE))
{
if ((((((*(R17 *)rt_nil_check(l_M_3031))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(l_M_3031))).f_B, p_NAME)) || r_LOCAL_MODULE_EXPORTS(((*(R17 *)rt_nil_check(l_M_3031))).f_C, p_NAME)))
{
{ rt_int rv3034 = 1;
return rv3034; }
}
}
l_M_3031 = ((*(R17 *)rt_nil_check(l_M_3031))).f_NEXT;
}
RT_B_TICK();
} L_end3033: ;
{ rt_int rv3035 = 0;
return rv3035; }
rt_raise(RT_X_INIT);
}
static void r_ROUTINE_USES(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3036; memset(&l_R_3036, 0, sizeof l_R_3036);
l_R_3036 = p_RS;
for (;;) {
if ((l_R_3036 == NULL)) goto L_end3037;
{
if ((((*(R17 *)rt_nil_check(l_R_3036))).f_KIND == g_N_ROUTINE))
{
r_COMPUTE_USES(r_FIND_DECL(l_R_3036));
if ((!(((*(R17 *)rt_nil_check(l_R_3036))).f_E == NULL)))
{
r_IMPORTS_KNOWN(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3036))).f_E))).f_A, 0);
r_IMPORTS_KNOWN(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3036))).f_E))).f_B, 1);
r_INPUT_IMPORT_CONFLICT(((*(R17 *)rt_nil_check(l_R_3036))).f_E, ((*(R17 *)rt_nil_check(l_R_3036))).f_LINE);
}
}
l_R_3036 = ((*(R17 *)rt_nil_check(l_R_3036))).f_NEXT;
}
RT_B_TICK();
} L_end3037: ;
}
static void r_IMPORTS_KNOWN(R17 * p_L, rt_int p_INOUT) { RT_B_TICK(); 
R17 * l_P_3038; memset(&l_P_3038, 0, sizeof l_P_3038);
l_P_3038 = p_L;
for (;;) {
if ((l_P_3038 == NULL)) goto L_end3039;
{
{
R12 * l_V_3040; memset(&l_V_3040, 0, sizeof l_V_3040);
l_V_3040 = r_LOOKUP(((*(R17 *)rt_nil_check(l_P_3038))).f_NAME);
if ((!(l_V_3040 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_V_3040))).f_KIND == g_Y_VAR))
{
if ((((!r_CHECK_IMPORTED(l_V_3040, ((*(R17 *)rt_nil_check(l_P_3038))).f_LINE)) && p_INOUT) && (!((*(R12 *)rt_nil_check(l_V_3040))).f_INPUT)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_3038))).f_LINE, rt_str("imported for change, but only for input in the enclosing scope (4.1.1): ", 72), ((*(R17 *)rt_nil_check(l_P_3038))).f_NAME);
}
}
}
}
l_P_3038 = ((*(R17 *)rt_nil_check(l_P_3038))).f_NEXT;
}
RT_B_TICK();
} L_end3039: ;
}
static void r_INPUT_IMPORT_CONFLICT(R17 * p_ITEMS, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_R_3041; memset(&l_R_3041, 0, sizeof l_R_3041);
l_R_3041 = ((*(R17 *)rt_nil_check(p_ITEMS))).f_C;
for (;;) {
if ((l_R_3041 == NULL)) goto L_end3042;
{
{
R12 * l_Z_3043; memset(&l_Z_3043, 0, sizeof l_Z_3043);
l_Z_3043 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_3041))).f_NAME);
for (;;) {
if ((l_Z_3043 == NULL)) goto L_end3044;
{
if ((((*(R12 *)rt_nil_check(l_Z_3043))).f_KIND == g_Y_ROUTINE))
{
{
R17 * l_D_3045; memset(&l_D_3045, 0, sizeof l_D_3045);
l_D_3045 = ((*(R12 *)rt_nil_check(r_ORIGINAL(l_Z_3043)))).f_DECL;
if ((!(l_D_3045 == NULL)))
{
if (((((*(R17 *)rt_nil_check(l_D_3045))).f_KIND == g_N_ROUTINE) && (!(((*(R17 *)rt_nil_check(l_D_3045))).f_E == NULL))))
{
{
R17 * l_V_3046; memset(&l_V_3046, 0, sizeof l_V_3046);
l_V_3046 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_3045))).f_E))).f_B;
for (;;) {
if ((l_V_3046 == NULL)) goto L_end3047;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(p_ITEMS))).f_A, ((*(R17 *)rt_nil_check(l_V_3046))).f_NAME))
{
r_FAILT(p_LINE, rt_str("imported for input, and inout by an imported routine (4.3.1): ", 62), ((*(R17 *)rt_nil_check(l_V_3046))).f_NAME);
}
l_V_3046 = ((*(R17 *)rt_nil_check(l_V_3046))).f_NEXT;
}
RT_B_TICK();
} L_end3047: ;
}
}
}
}
}
l_Z_3043 = r_LOOKUP_NEXT(l_Z_3043);
}
RT_B_TICK();
} L_end3044: ;
}
l_R_3041 = ((*(R17 *)rt_nil_check(l_R_3041))).f_NEXT;
}
RT_B_TICK();
} L_end3042: ;
}
static void r_ADD_USES(R17 * p_L, R17 * *p_HEAD, R17 * *p_TAIL) { RT_B_TICK(); 
R17 * l_P_3048; memset(&l_P_3048, 0, sizeof l_P_3048);
l_P_3048 = p_L;
for (;;) {
if ((l_P_3048 == NULL)) goto L_end3049;
{
{
R12 * l_V_3050; memset(&l_V_3050, 0, sizeof l_V_3050);
l_V_3050 = r_LOOKUP(((*(R17 *)rt_nil_check(l_P_3048))).f_NAME);
R17 * l_N_3051; memset(&l_N_3051, 0, sizeof l_N_3051);
l_N_3051 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_P_3048))).f_LINE);
if ((l_V_3050 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_P_3048))).f_LINE, rt_str("an imported name is not visible: ", 33), ((*(R17 *)rt_nil_check(l_P_3048))).f_NAME);
}
S_R9(&((*(R17 *)rt_nil_check(l_N_3051))).f_NAME, ((*(R17 *)rt_nil_check(l_P_3048))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_N_3051))).f_IV = ((*(R12 *)rt_nil_check(l_V_3050))).f_OWNER;
if ((((*(R12 *)rt_nil_check(l_V_3050))).f_KIND == g_Y_VAR))
{
r_ADD_LIST(l_N_3051, &(*p_HEAD), &(*p_TAIL));
}
}
l_P_3048 = ((*(R17 *)rt_nil_check(l_P_3048))).f_NEXT;
}
RT_B_TICK();
} L_end3049: ;
}
static void r_CHECK_CALL_IMPORTS(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R20 * l_IS_3052; memset(&l_IS_3052, 0, sizeof l_IS_3052);
l_IS_3052 = ((*(R7 *)rt_nil_check(g_W))).f_IS;
R17 * l_U_3053; memset(&l_U_3053, 0, sizeof l_U_3053);
l_U_3053 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
if (((l_IS_3052 == NULL) || ((*(R7 *)rt_nil_check(g_W))).f_START_IO))
{
return;
}
if ((((*(R20 *)rt_nil_check(l_IS_3052))).f_ID == ((rt_int)0LL)))
{
return;
}
for (;;) {
if ((l_U_3053 == NULL)) goto L_end3054;
{
if ((!(((*(R17 *)rt_nil_check(l_U_3053))).f_IV == ((*(R20 *)rt_nil_check(l_IS_3052))).f_ID)))
{
if ((((*(R20 *)rt_nil_check(l_IS_3052))).f_IMPORTS == NULL))
{
r_FAIL2(p_LINE, rt_str("the routine ", 12), ((*(R12 *)rt_nil_check(p_Y))).f_NAME, rt_str(" uses the variable ", 19), ((*(R17 *)rt_nil_check(l_U_3053))).f_NAME, rt_str(": import one of them (4.1.1)", 28));
}
if ((!(((((((r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_3052))).f_IMPORTS))).f_A, ((*(R17 *)rt_nil_check(l_U_3053))).f_NAME) || r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_3052))).f_IMPORTS))).f_B, ((*(R17 *)rt_nil_check(l_U_3053))).f_NAME)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_3052))).f_IMPORTS))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_3052))).f_IMPORTS))).f_C, r_BASE_NAME(p_Y))) || r_MODULE_IMPORTED(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_3052))).f_IMPORTS))).f_E, p_Y)) || ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN > ((rt_int)0LL)) && r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_3052))).f_IMPORTS))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))) || r_IMPORTED_ROUTINE_USES(((*(R17 *)rt_nil_check(((*(R20 *)rt_nil_check(l_IS_3052))).f_IMPORTS))).f_C, ((*(R17 *)rt_nil_check(l_U_3053))).f_NAME)))))
{
r_FAIL2(p_LINE, rt_str("the routine ", 12), ((*(R12 *)rt_nil_check(p_Y))).f_NAME, rt_str(" uses the variable ", 19), ((*(R17 *)rt_nil_check(l_U_3053))).f_NAME, rt_str(": import one of them (4.1.1)", 28));
}
}
l_U_3053 = ((*(R17 *)rt_nil_check(l_U_3053))).f_NEXT;
}
RT_B_TICK();
} L_end3054: ;
}
static rt_int r_IMPORTED_ROUTINE_USES(R17 * p_RS, R9 p_NAME) { RT_B_TICK(); 
R17 * l_R_3055; memset(&l_R_3055, 0, sizeof l_R_3055);
l_R_3055 = p_RS;
for (;;) {
if ((l_R_3055 == NULL)) goto L_end3056;
{
{
R12 * l_Z_3057; memset(&l_Z_3057, 0, sizeof l_Z_3057);
l_Z_3057 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_3055))).f_NAME);
for (;;) {
if ((l_Z_3057 == NULL)) goto L_end3058;
{
if ((((*(R12 *)rt_nil_check(l_Z_3057))).f_KIND == g_Y_ROUTINE))
{
{
R12 * l_O_3059; memset(&l_O_3059, 0, sizeof l_O_3059);
l_O_3059 = r_ORIGINAL(l_Z_3057);
r_COMPUTE_USES(l_O_3059);
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_O_3059))).f_USES, p_NAME))
{
{ rt_int rv3060 = 1;
return rv3060; }
}
}
}
l_Z_3057 = r_LOOKUP_NEXT(l_Z_3057);
}
RT_B_TICK();
} L_end3058: ;
}
l_R_3055 = ((*(R17 *)rt_nil_check(l_R_3055))).f_NEXT;
}
RT_B_TICK();
} L_end3056: ;
{ rt_int rv3061 = 0;
return rv3061; }
rt_raise(RT_X_INIT);
}
static rt_int r_MODULE_IMPORTED(R17 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3062; memset(&l_M_3062, 0, sizeof l_M_3062);
l_M_3062 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
for (;;) {
if ((l_M_3062 == NULL)) goto L_end3063;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_3062))).f_NAME))
{
{ rt_int rv3064 = 1;
return rv3064; }
}
l_M_3062 = ((*(R12 *)rt_nil_check(l_M_3062))).f_MODL;
}
RT_B_TICK();
} L_end3063: ;
{ rt_int rv3065 = 0;
return rv3065; }
rt_raise(RT_X_INIT);
}
static R9 r_BASE_PART(R9 p_N, rt_int p_P) { RT_B_TICK(); 
{ R9 rv3066 = r_MKN(rt_b_slice(r_STR(p_N, (p_N).f_LEN), rt_add(p_P, ((rt_int)1LL)), rt_sub((p_N).f_LEN, ((rt_int)1LL))));
return rv3066; }
rt_raise(RT_X_INIT);
}
static R9 r_BASE_NAME(R12 * p_Y) { RT_B_TICK(); 
if ((((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN == ((rt_int)0LL)) || ((((*(R12 *)rt_nil_check(p_Y))).f_NAME).f_LEN <= rt_add((((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN, ((rt_int)1LL)))))
{
{ R9 rv3067 = ((*(R12 *)rt_nil_check(p_Y))).f_NAME;
return rv3067; }
}
{ R9 rv3068 = r_BASE_PART(((*(R12 *)rt_nil_check(p_Y))).f_NAME, (((*(R12 *)rt_nil_check(p_Y))).f_PREFIX).f_LEN);
return rv3068; }
rt_raise(RT_X_INIT);
}
static rt_int r_HANDLER_EXISTS(R9 p_NAME) { RT_B_TICK(); 
R18 * l_C_3069; memset(&l_C_3069, 0, sizeof l_C_3069);
l_C_3069 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_3069 == NULL)) goto L_end3070;
{
if ((((*(R18 *)rt_nil_check(l_C_3069))).f_KIND == ((rt_int)1LL)))
{
goto L_end3070;
}
if ((((*(R18 *)rt_nil_check(l_C_3069))).f_KIND == ((rt_int)3LL)))
{
{
R17 * l_H_3071; memset(&l_H_3071, 0, sizeof l_H_3071);
l_H_3071 = ((*(R18 *)rt_nil_check(l_C_3069))).f_HANDLERS;
for (;;) {
if ((l_H_3071 == NULL)) goto L_end3072;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_H_3071))).f_A, p_NAME))
{
{ rt_int rv3073 = 1;
return rv3073; }
}
l_H_3071 = ((*(R17 *)rt_nil_check(l_H_3071))).f_NEXT;
}
RT_B_TICK();
} L_end3072: ;
}
}
l_C_3069 = ((*(R18 *)rt_nil_check(l_C_3069))).f_NEXT;
}
RT_B_TICK();
} L_end3070: ;
if ((!(((*(R7 *)rt_nil_check(g_W))).f_IS == NULL)))
{
if (r_IN_IDENTS(((*(R20 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_SIGNALS, p_NAME))
{
{ rt_int rv3074 = 1;
return rv3074; }
}
}
{ rt_int rv3075 = r_TEQS(p_NAME, rt_str("TERMINATED", 10));
return rv3075; }
rt_raise(RT_X_INIT);
}
static void r_PUSH_CTX(rt_int p_KIND, R9 p_NAME) { RT_B_TICK(); 
R18 * l_C_3076; memset(&l_C_3076, 0, sizeof l_C_3076);
l_C_3076 = ({ R18 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R18(&(*(R18 *)rt_nil_check(l_C_3076)), ({ R18 rc3077; memset(&rc3077, 0, sizeof rc3077);  rc3077.f_KIND = p_KIND; S_R9(&rc3077.f_NAME, p_NAME, 0); rc3077.f_HANDLERS = NULL; rc3077.f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CTXS; rc3077; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_C_3076;
}
static void r_POP_CTX(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_CTXS = ((*(R18 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CTXS))).f_NEXT;
}
static R18 * r_LEAVE(rt_int p_KIND) { RT_B_TICK(); 
R18 * l_C_3078; memset(&l_C_3078, 0, sizeof l_C_3078);
l_C_3078 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_3078 == NULL)) goto L_end3079;
{
if ((((*(R18 *)rt_nil_check(l_C_3078))).f_KIND == p_KIND))
{
{ R18 * rv3080 = l_C_3078;
return rv3080; }
}
if ((((*(R18 *)rt_nil_check(l_C_3078))).f_KIND == ((rt_int)1LL)))
{
{ R18 * rv3081 = NULL;
return rv3081; }
}
if ((((*(R18 *)rt_nil_check(l_C_3078))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R18 *)rt_nil_check(l_C_3078))).f_NAME));
}
l_C_3078 = ((*(R18 *)rt_nil_check(l_C_3078))).f_NEXT;
}
RT_B_TICK();
} L_end3079: ;
{ R18 * rv3082 = NULL;
return rv3082; }
rt_raise(RT_X_INIT);
}
static rt_int r_GUARDS(void) { RT_B_TICK(); 
R18 * l_C_3083; memset(&l_C_3083, 0, sizeof l_C_3083);
l_C_3083 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
rt_int l_N_3084; memset(&l_N_3084, 0, sizeof l_N_3084);
l_N_3084 = ((rt_int)0LL);
for (;;) {
if ((l_C_3083 == NULL)) goto L_end3085;
{
if ((((*(R18 *)rt_nil_check(l_C_3083))).f_KIND == ((rt_int)1LL)))
{
goto L_end3085;
}
if ((((*(R18 *)rt_nil_check(l_C_3083))).f_KIND == ((rt_int)3LL)))
{
l_N_3084 = rt_add(l_N_3084, ((rt_int)1LL));
}
l_C_3083 = ((*(R18 *)rt_nil_check(l_C_3083))).f_NEXT;
}
RT_B_TICK();
} L_end3085: ;
{ rt_int rv3086 = l_N_3084;
return rv3086; }
rt_raise(RT_X_INIT);
}
static R9 r_EXC_NAME(R9 p_NAME) { RT_B_TICK(); 
R17 * l_N_3087; memset(&l_N_3087, 0, sizeof l_N_3087);
l_N_3087 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_N_3087 == NULL)) goto L_end3088;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_N_3087))).f_NAME, p_NAME))
{
{ R9 rv3089 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv3089; }
}
l_N_3087 = ((*(R17 *)rt_nil_check(l_N_3087))).f_NEXT;
}
RT_B_TICK();
} L_end3088: ;
l_N_3087 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_3087))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_3087))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
((*(R7 *)rt_nil_check(g_W))).f_EXCS = l_N_3087;
{ R9 rv3090 = r_FMT1(rt_str("x_@", 3), r_CID(p_NAME));
return rv3090; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_TYPES(R17 * p_DECLS) { RT_B_TICK(); 
R17 * l_D_3091; memset(&l_D_3091, 0, sizeof l_D_3091);
l_D_3091 = p_DECLS;
for (;;) {
if ((l_D_3091 == NULL)) goto L_end3092;
{
if (((((*(R17 *)rt_nil_check(l_D_3091))).f_KIND == g_N_TYPE) || (((*(R17 *)rt_nil_check(l_D_3091))).f_KIND == g_N_REPTYPE)))
{
{
R12 * l_Y_3093; memset(&l_Y_3093, 0, sizeof l_Y_3093);
l_Y_3093 = r_NEW_SYM(g_Y_TYPE, ((*(R17 *)rt_nil_check(l_D_3091))).f_NAME);
if ((((*(R17 *)rt_nil_check(l_D_3091))).f_KIND == g_N_REPTYPE))
{
((*(R12 *)rt_nil_check(l_Y_3093))).f_KIND = g_Y_REPTYPE;
}
((*(R12 *)rt_nil_check(l_Y_3093))).f_DECL = l_D_3091;
r_DEFINE(l_Y_3093, ((*(R17 *)rt_nil_check(l_D_3091))).f_LINE);
if ((((*(R17 *)rt_nil_check(l_D_3091))).f_KIND == g_N_TYPE))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_3091))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_3091))).f_B))).f_A)))
{
((*(R7 *)rt_nil_check(g_W))).f_CHARSETS = rt_add(((*(R7 *)rt_nil_check(g_W))).f_CHARSETS, ((rt_int)1LL));
}
}
}
}
l_D_3091 = ((*(R17 *)rt_nil_check(l_D_3091))).f_NEXT;
}
RT_B_TICK();
} L_end3092: ;
l_D_3091 = p_DECLS;
for (;;) {
if ((l_D_3091 == NULL)) goto L_end3094;
{
if (((((*(R17 *)rt_nil_check(l_D_3091))).f_KIND == g_N_TYPE) || (((*(R17 *)rt_nil_check(l_D_3091))).f_KIND == g_N_REPTYPE)))
{
{
R17 * l_SEEN_3095; memset(&l_SEEN_3095, 0, sizeof l_SEEN_3095);
l_SEEN_3095 = NULL;
rt_int l_FOUND_3096; memset(&l_FOUND_3096, 0, sizeof l_FOUND_3096);
l_FOUND_3096 = 0;
r_REFERS(((*(R17 *)rt_nil_check(l_D_3091))).f_B, C_R9(((*(R17 *)rt_nil_check(l_D_3091))).f_NAME), p_DECLS, &l_SEEN_3095, &l_FOUND_3096);
if (l_FOUND_3096)
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_3091))).f_LINE, rt_str("a circular type declaration (3.12.1, 3.12.3): ", 46), ((*(R17 *)rt_nil_check(l_D_3091))).f_NAME);
}
}
{
R17 * l_F_3097; memset(&l_F_3097, 0, sizeof l_F_3097);
l_F_3097 = ((*(R17 *)rt_nil_check(l_D_3091))).f_A;
for (;;) {
if ((l_F_3097 == NULL)) goto L_end3098;
{
if (((((*(R17 *)rt_nil_check(l_F_3097))).f_IV == ((rt_int)1LL)) && (((*(R17 *)rt_nil_check(l_D_3091))).f_KIND == g_N_TYPE)))
{
{
R17 * l_N_3099; memset(&l_N_3099, 0, sizeof l_N_3099);
l_N_3099 = ((*(R17 *)rt_nil_check(l_F_3097))).f_A;
for (;;) {
if ((l_N_3099 == NULL)) goto L_end3100;
{
if (r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_D_3091))).f_B, ((*(R17 *)rt_nil_check(l_N_3099))).f_NAME))
{
r_FAILT(((*(R17 *)rt_nil_check(l_D_3091))).f_LINE, rt_str("a TAG formal is only a tag-name or an argument for a TAG formal (3.12.1): ", 74), ((*(R17 *)rt_nil_check(l_N_3099))).f_NAME);
}
l_N_3099 = ((*(R17 *)rt_nil_check(l_N_3099))).f_NEXT;
}
RT_B_TICK();
} L_end3100: ;
}
}
if ((!(((*(R17 *)rt_nil_check(l_F_3097))).f_B == NULL)))
{
if (r_NAMES_VARIABLE(((*(R17 *)rt_nil_check(l_F_3097))).f_B, p_DECLS))
{
r_FAIL(((*(R17 *)rt_nil_check(l_F_3097))).f_LINE, rt_str("the type-arguments in the type of a formal must be manifest (3.12.1)", 68));
}
}
l_F_3097 = ((*(R17 *)rt_nil_check(l_F_3097))).f_NEXT;
}
RT_B_TICK();
} L_end3098: ;
}
}
l_D_3091 = ((*(R17 *)rt_nil_check(l_D_3091))).f_NEXT;
}
RT_B_TICK();
} L_end3094: ;
l_D_3091 = p_DECLS;
for (;;) {
if ((l_D_3091 == NULL)) goto L_end3101;
{
if ((((*(R17 *)rt_nil_check(l_D_3091))).f_KIND == g_N_TYPE))
{
{
R17 * l_F_3102; memset(&l_F_3102, 0, sizeof l_F_3102);
l_F_3102 = ((*(R17 *)rt_nil_check(l_D_3091))).f_A;
for (;;) {
if ((l_F_3102 == NULL)) goto L_end3103;
{
if (((((*(R17 *)rt_nil_check(l_F_3102))).f_IV == ((rt_int)1LL)) && (!(((*(R17 *)rt_nil_check(l_F_3102))).f_B == NULL))))
{
{
R22 * l_FT_3104; memset(&l_FT_3104, 0, sizeof l_FT_3104);
l_FT_3104 = r_REAL_TYPE(r_RESOLVE(((*(R17 *)rt_nil_check(l_F_3102))).f_B));
if (((!r_IS_SCALAR(l_FT_3104)) || (!(((*(R22 *)rt_nil_check(l_FT_3104))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_F_3102))).f_LINE, rt_str("a tag is integer, boolean or enumerated (3.9.1)", 47));
}
}
}
l_F_3102 = ((*(R17 *)rt_nil_check(l_F_3102))).f_NEXT;
}
RT_B_TICK();
} L_end3103: ;
}
}
l_D_3091 = ((*(R17 *)rt_nil_check(l_D_3091))).f_NEXT;
}
RT_B_TICK();
} L_end3101: ;
}
static void r_REFERS(R17 * p_L, R9 p_TARGET, R17 * p_DECLS, R17 * *p_SEEN, rt_int *p_FOUND) { RT_B_TICK(); 
R17 * l_N_3105; memset(&l_N_3105, 0, sizeof l_N_3105);
l_N_3105 = p_L;
for (;;) {
if (((l_N_3105 == NULL) || (*p_FOUND))) goto L_end3106;
{
if (((((*(R17 *)rt_nil_check(l_N_3105))).f_KIND == g_TS_NAME) || (((*(R17 *)rt_nil_check(l_N_3105))).f_KIND == g_N_REP)))
{
if ((!r_TEQS(((*(R17 *)rt_nil_check(l_N_3105))).f_NAME, rt_str("PTR", 3))))
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_N_3105))).f_NAME, p_TARGET))
{
(*p_FOUND) = 1;
return;
}
if ((!r_IN_IDENTS((*p_SEEN), ((*(R17 *)rt_nil_check(l_N_3105))).f_NAME)))
{
{
R17 * l_M_3107; memset(&l_M_3107, 0, sizeof l_M_3107);
l_M_3107 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_N_3105))).f_LINE);
R17 * l_D_3108; memset(&l_D_3108, 0, sizeof l_D_3108);
l_D_3108 = p_DECLS;
S_R9(&((*(R17 *)rt_nil_check(l_M_3107))).f_NAME, ((*(R17 *)rt_nil_check(l_N_3105))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_M_3107))).f_NEXT = (*p_SEEN);
(*p_SEEN) = l_M_3107;
for (;;) {
if ((l_D_3108 == NULL)) goto L_end3109;
{
if (((((((*(R17 *)rt_nil_check(l_D_3108))).f_KIND == g_N_TYPE) || (((*(R17 *)rt_nil_check(l_D_3108))).f_KIND == g_N_REPTYPE))) && r_TEQ(((*(R17 *)rt_nil_check(l_D_3108))).f_NAME, ((*(R17 *)rt_nil_check(l_N_3105))).f_NAME)))
{
r_REFERS(((*(R17 *)rt_nil_check(l_D_3108))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
l_D_3108 = ((*(R17 *)rt_nil_check(l_D_3108))).f_NEXT;
}
RT_B_TICK();
} L_end3109: ;
}
}
r_REFERS(((*(R17 *)rt_nil_check(l_N_3105))).f_A, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_3105))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_3105))).f_C, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
}
else
{
r_REFERS(((*(R17 *)rt_nil_check(l_N_3105))).f_A, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_3105))).f_B, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_3105))).f_C, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
r_REFERS(((*(R17 *)rt_nil_check(l_N_3105))).f_D, p_TARGET, p_DECLS, &(*p_SEEN), &(*p_FOUND));
}
l_N_3105 = ((*(R17 *)rt_nil_check(l_N_3105))).f_NEXT;
}
RT_B_TICK();
} L_end3106: ;
}
static rt_int r_TAG_MISUSED(R17 * p_L, R9 p_NAME) { RT_B_TICK(); 
R17 * l_N_3110; memset(&l_N_3110, 0, sizeof l_N_3110);
l_N_3110 = p_L;
for (;;) {
if ((l_N_3110 == NULL)) goto L_end3111;
{
if ((((*(R17 *)rt_nil_check(l_N_3110))).f_KIND == g_TS_NAME))
{
{
R17 * l_A_3112; memset(&l_A_3112, 0, sizeof l_A_3112);
l_A_3112 = ((*(R17 *)rt_nil_check(l_N_3110))).f_A;
for (;;) {
if ((l_A_3112 == NULL)) goto L_end3113;
{
if ((!((((((((*(R17 *)rt_nil_check(l_A_3112))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_A_3112))).f_KIND == g_TS_NAME))) && r_TEQ(((*(R17 *)rt_nil_check(l_A_3112))).f_NAME, p_NAME)) && (((*(R17 *)rt_nil_check(l_A_3112))).f_A == NULL)))))
{
if (r_TAG_MISUSED1(l_A_3112, p_NAME))
{
{ rt_int rv3114 = 1;
return rv3114; }
}
}
l_A_3112 = ((*(R17 *)rt_nil_check(l_A_3112))).f_NEXT;
}
RT_B_TICK();
} L_end3113: ;
}
if (((r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_N_3110))).f_B, p_NAME) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_N_3110))).f_C, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(l_N_3110))).f_E, p_NAME)))
{
{ rt_int rv3115 = 1;
return rv3115; }
}
}
else if (r_TAG_MISUSED1(l_N_3110, p_NAME))
{
{ rt_int rv3116 = 1;
return rv3116; }
}
l_N_3110 = ((*(R17 *)rt_nil_check(l_N_3110))).f_NEXT;
}
RT_B_TICK();
} L_end3111: ;
{ rt_int rv3117 = 0;
return rv3117; }
rt_raise(RT_X_INIT);
}
static rt_int r_TAG_MISUSED1(R17 * p_N, R9 p_NAME) { RT_B_TICK(); 
rt_int l_K_3118; memset(&l_K_3118, 0, sizeof l_K_3118);
l_K_3118 = ((*(R17 *)rt_nil_check(p_N))).f_KIND;
if ((l_K_3118 == g_TS_NAME))
{
{ rt_int rv3119 = (r_TAG_MISUSED(p_N, p_NAME) && 1);
return rv3119; }
}
if ((((((l_K_3118 == g_N_NAME) || (l_K_3118 == g_N_ENUMLIT)) || (l_K_3118 == g_N_APPLY))) && r_TEQ(((*(R17 *)rt_nil_check(p_N))).f_NAME, p_NAME)))
{
{ rt_int rv3120 = 1;
return rv3120; }
}
{ rt_int rv3121 = ((((r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_A, p_NAME) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_B, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_C, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_D, p_NAME)) || r_TAG_MISUSED(((*(R17 *)rt_nil_check(p_N))).f_E, p_NAME));
return rv3121; }
rt_raise(RT_X_INIT);
}
static rt_int r_NAMES_VARIABLE(R17 * p_L, R17 * p_DECLS) { RT_B_TICK(); 
{ rt_int rv3122 = r_NAMES_VARIABLE_BUT(p_L, p_DECLS, NULL);
return rv3122; }
rt_raise(RT_X_INIT);
}
static void r_GEN_NAMES(R17 * p_L, R17 * *p_HEAD) { RT_B_TICK(); 
R17 * l_N_3123; memset(&l_N_3123, 0, sizeof l_N_3123);
l_N_3123 = p_L;
for (;;) {
if ((l_N_3123 == NULL)) goto L_end3124;
{
if (((((((*(R17 *)rt_nil_check(l_N_3123))).f_KIND == g_TS_GEN) || (((*(R17 *)rt_nil_check(l_N_3123))).f_KIND == g_N_PARAM))) && ((((*(R17 *)rt_nil_check(l_N_3123))).f_NAME).f_LEN > ((rt_int)0LL))))
{
{
R17 * l_M_3125; memset(&l_M_3125, 0, sizeof l_M_3125);
l_M_3125 = r_NEW_NODE(g_N_IDENT, ((*(R17 *)rt_nil_check(l_N_3123))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_M_3125))).f_NAME, ((*(R17 *)rt_nil_check(l_N_3123))).f_NAME, 0);
((*(R17 *)rt_nil_check(l_M_3125))).f_NEXT = (*p_HEAD);
(*p_HEAD) = l_M_3125;
}
}
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_3123))).f_A, &(*p_HEAD));
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_3123))).f_B, &(*p_HEAD));
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_3123))).f_C, &(*p_HEAD));
r_GEN_NAMES(((*(R17 *)rt_nil_check(l_N_3123))).f_D, &(*p_HEAD));
l_N_3123 = ((*(R17 *)rt_nil_check(l_N_3123))).f_NEXT;
}
RT_B_TICK();
} L_end3124: ;
}
static rt_int r_NAMES_VARIABLE_BUT(R17 * p_L, R17 * p_DECLS, R17 * p_EXCL) { RT_B_TICK(); 
R17 * l_N_3126; memset(&l_N_3126, 0, sizeof l_N_3126);
l_N_3126 = p_L;
for (;;) {
if ((l_N_3126 == NULL)) goto L_end3127;
{
if (((((*(R17 *)rt_nil_check(l_N_3126))).f_KIND == g_N_NAME) && r_IN_IDENTS(p_EXCL, ((*(R17 *)rt_nil_check(l_N_3126))).f_NAME)))
{
}
else if ((((*(R17 *)rt_nil_check(l_N_3126))).f_KIND == g_N_NAME))
{
{
R17 * l_D_3128; memset(&l_D_3128, 0, sizeof l_D_3128);
l_D_3128 = p_DECLS;
R12 * l_Y_3129; memset(&l_Y_3129, 0, sizeof l_Y_3129);
l_Y_3129 = r_LOOKUP(((*(R17 *)rt_nil_check(l_N_3126))).f_NAME);
for (;;) {
if ((l_D_3128 == NULL)) goto L_end3130;
{
if (((((*(R17 *)rt_nil_check(l_D_3128))).f_KIND == g_N_VAR) && r_IN_IDENTS(((*(R17 *)rt_nil_check(l_D_3128))).f_A, ((*(R17 *)rt_nil_check(l_N_3126))).f_NAME)))
{
{ rt_int rv3131 = 1;
return rv3131; }
}
l_D_3128 = ((*(R17 *)rt_nil_check(l_D_3128))).f_NEXT;
}
RT_B_TICK();
} L_end3130: ;
if ((!(l_Y_3129 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_3129))).f_KIND == g_Y_VAR) && (!((*(R12 *)rt_nil_check(l_Y_3129))).f_INPUT)))
{
{ rt_int rv3132 = 1;
return rv3132; }
}
}
}
}
else if ((((r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_3126))).f_A, p_DECLS, p_EXCL) || r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_3126))).f_B, p_DECLS, p_EXCL)) || r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_3126))).f_C, p_DECLS, p_EXCL)) || r_NAMES_VARIABLE_BUT(((*(R17 *)rt_nil_check(l_N_3126))).f_D, p_DECLS, p_EXCL)))
{
{ rt_int rv3133 = 1;
return rv3133; }
}
l_N_3126 = ((*(R17 *)rt_nil_check(l_N_3126))).f_NEXT;
}
RT_B_TICK();
} L_end3127: ;
{ rt_int rv3134 = 0;
return rv3134; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_PRINTING_CHAR(R17 * p_L) { RT_B_TICK(); 
R17 * l_P_3135; memset(&l_P_3135, 0, sizeof l_P_3135);
l_P_3135 = p_L;
for (;;) {
if ((l_P_3135 == NULL)) goto L_end3136;
{
if (((((*(R17 *)rt_nil_check(l_P_3135))).f_NAME).f_LEN >= ((rt_int)3LL)))
{
if (rt_b_eq(r_STR(((*(R17 *)rt_nil_check(l_P_3135))).f_NAME, ((rt_int)2LL)), rt_str("\\'", 2)))
{
{ rt_int rv3137 = 1;
return rv3137; }
}
}
l_P_3135 = ((*(R17 *)rt_nil_check(l_P_3135))).f_NEXT;
}
RT_B_TICK();
} L_end3136: ;
{ rt_int rv3138 = 0;
return rv3138; }
rt_raise(RT_X_INIT);
}
static R22 * r_DEFAULT_CHARSET(rt_int p_LINE) { RT_B_TICK(); 
R12 * l_A_3139; memset(&l_A_3139, 0, sizeof l_A_3139);
l_A_3139 = r_LOOKUP(r_MKN(rt_str("ASCII", 5)));
R22 * l_FOUND_3140; memset(&l_FOUND_3140, 0, sizeof l_FOUND_3140);
l_FOUND_3140 = NULL;
rt_int l_N_3141; memset(&l_N_3141, 0, sizeof l_N_3141);
l_N_3141 = ((rt_int)0LL);
R12 * l_Y_3142; memset(&l_Y_3142, 0, sizeof l_Y_3142);
l_Y_3142 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
if (((((*(R7 *)rt_nil_check(g_W))).f_CHARSETS == ((rt_int)0LL)) && (!(l_A_3139 == NULL))))
{
if (((((*(R12 *)rt_nil_check(l_A_3139))).f_KIND == g_Y_TYPE) && (((*(R12 *)rt_nil_check(l_A_3139))).f_DECL == NULL)))
{
{ R22 * rv3143 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv3143; }
}
}
for (;;) {
if ((l_Y_3142 == NULL)) goto L_end3144;
{
if (((((*(R12 *)rt_nil_check(l_Y_3142))).f_KIND == g_Y_TYPE) && ((((*(R12 *)rt_nil_check(l_Y_3142))).f_NAME).f_LEN > ((rt_int)0LL))))
{
if ((r_LOOKUP(((*(R12 *)rt_nil_check(l_Y_3142))).f_NAME) == l_Y_3142))
{
{
R22 * l_T_3145; memset(&l_T_3145, 0, sizeof l_T_3145);
l_T_3145 = NULL;
if ((((*(R12 *)rt_nil_check(l_Y_3142))).f_DECL == NULL))
{
l_T_3145 = ((*(R12 *)rt_nil_check(l_Y_3142))).f_T;
}
else if (((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3142))).f_DECL))).f_KIND == g_N_TYPE) && (((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3142))).f_DECL))).f_A == NULL)))
{
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3142))).f_DECL))).f_B))).f_KIND == g_TS_ENUM) && r_HAS_PRINTING_CHAR(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3142))).f_DECL))).f_B))).f_A)))
{
l_T_3145 = r_RESOLVE_USER_NAME(((*(R12 *)rt_nil_check(l_Y_3142))).f_NAME, p_LINE);
}
}
if ((!(l_T_3145 == NULL)))
{
l_T_3145 = r_REAL_TYPE(l_T_3145);
if ((((*(R22 *)rt_nil_check(l_T_3145))).f_KIND == g_T_ENUM))
{
if ((r_HAS_PRINTING_CHAR(((*(R22 *)rt_nil_check(((*(R22 *)rt_nil_check(l_T_3145))).f_BASE))).f_LITS) && (!(((*(R22 *)rt_nil_check(l_T_3145))).f_BASE == l_FOUND_3140))))
{
if ((!(l_FOUND_3140 == NULL)))
{
r_FAIL(p_LINE, rt_b_cat(rt_str("two character sets are available here: the literal needs ", 57), rt_str("a charset-name (3.7.2)", 22)));
}
l_FOUND_3140 = ((*(R22 *)rt_nil_check(l_T_3145))).f_BASE;
}
}
}
}
}
}
l_Y_3142 = ((*(R12 *)rt_nil_check(l_Y_3142))).f_SNEXT;
}
RT_B_TICK();
} L_end3144: ;
if ((l_FOUND_3140 == NULL))
{
r_FAIL(p_LINE, rt_str("no character set is available for the literal (3.7.2)", 53));
}
{ R22 * rv3146 = l_FOUND_3140;
return rv3146; }
rt_raise(RT_X_INIT);
}
static R22 * r_CHARSET_OF(R22 * p_T) { RT_B_TICK(); 
R22 * l_R_3147; memset(&l_R_3147, 0, sizeof l_R_3147);
l_R_3147 = r_REAL_TYPE(p_T);
if ((((*(R22 *)rt_nil_check(l_R_3147))).f_BASE == NULL))
{
{ R22 * rv3148 = ((*(R7 *)rt_nil_check(g_W))).f_TY_ASCII;
return rv3148; }
}
{ R22 * rv3149 = ((*(R22 *)rt_nil_check(l_R_3147))).f_BASE;
return rv3149; }
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
R17 * l_S_3150; memset(&l_S_3150, 0, sizeof l_S_3150);
l_S_3150 = p_S0;
for (;;) {
if ((l_S_3150 == NULL)) goto L_end3151;
{
{
R17 * l_L_3152; memset(&l_L_3152, 0, sizeof l_L_3152);
l_L_3152 = l_S_3150;
for (;;) {
if ((!(((*(R17 *)rt_nil_check(l_L_3152))).f_KIND == g_N_LABELED))) goto L_end3153;
{
{
R12 * l_Y_3154; memset(&l_Y_3154, 0, sizeof l_Y_3154);
l_Y_3154 = r_NEW_SYM(g_Y_LABEL, ((*(R17 *)rt_nil_check(l_L_3152))).f_NAME);
S_R9(&((*(R12 *)rt_nil_check(l_Y_3154))).f_ACCESS, r_FMT1(rt_str("L_@_", 4), r_NEW_NAME_T(r_CID(((*(R17 *)rt_nil_check(l_L_3152))).f_NAME))), 0);
((*(R12 *)rt_nil_check(l_Y_3154))).f_MV = r_GUARDS();
r_DEFINE(l_Y_3154, ((*(R17 *)rt_nil_check(l_L_3152))).f_LINE);
}
l_L_3152 = ((*(R17 *)rt_nil_check(l_L_3152))).f_A;
}
RT_B_TICK();
} L_end3153: ;
}
l_S_3150 = ((*(R17 *)rt_nil_check(l_S_3150))).f_NEXT;
}
RT_B_TICK();
} L_end3151: ;
}
static void r_BODY(R17 * p_B) { RT_B_TICK(); 
R17 * l_D_3155; memset(&l_D_3155, 0, sizeof l_D_3155);
l_D_3155 = ((*(R17 *)rt_nil_check(p_B))).f_A;
R17 * l_S_3156; memset(&l_S_3156, 0, sizeof l_S_3156);
l_S_3156 = ((*(R17 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R17 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_3155 == NULL)) goto L_end3157;
{
if (((((*(R17 *)rt_nil_check(l_D_3155))).f_KIND == g_N_VAR) || (((*(R17 *)rt_nil_check(l_D_3155))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3155);
}
l_D_3155 = ((*(R17 *)rt_nil_check(l_D_3155))).f_NEXT;
}
RT_B_TICK();
} L_end3157: ;
r_DECLARE_LABELS(((*(R17 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_3156 == NULL)) goto L_end3158;
{
r_STMT(l_S_3156);
l_S_3156 = ((*(R17 *)rt_nil_check(l_S_3156))).f_NEXT;
}
RT_B_TICK();
} L_end3158: ;
}
static void r_OPEN_BODY(R17 * p_B) { RT_B_TICK(); 
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
r_BODY(p_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_GUARDED(R17 * p_S, R17 * p_BODY_NODE, R17 * p_HANDLERS) { RT_B_TICK(); 
R9 l_F_3159; memset(&l_F_3159, 0, sizeof l_F_3159);
S_R9(&l_F_3159, r_NEW_NAME(rt_str("xf", 2)), 0);
R17 * l_H_3160; memset(&l_H_3160, 0, sizeof l_H_3160);
l_H_3160 = p_HANDLERS;
R9 l_WORD_3161; memset(&l_WORD_3161, 0, sizeof l_WORD_3161);
S_R9(&l_WORD_3161, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rt_frame @; if (RT_TRY(@)) {", 30), l_F_3159, l_F_3159));
r_PUSH_CTX(((rt_int)3LL), l_F_3159);
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
r_CODE(r_FMT3(rt_str("RT_POP(@); } else { RT_POP(@); int @x = rt_xcur;", 48), l_F_3159, l_F_3159, l_F_3159));
for (;;) {
if ((l_H_3160 == NULL)) goto L_end3162;
{
{
R17 * l_N_3163; memset(&l_N_3163, 0, sizeof l_N_3163);
l_N_3163 = ((*(R17 *)rt_nil_check(l_H_3160))).f_A;
R9 l_COND_3164; memset(&l_COND_3164, 0, sizeof l_COND_3164);
S_R9(&l_COND_3164, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_N_3163 == NULL)) goto L_end3165;
{
if ((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_N_3163))).f_NEXT, ((*(R17 *)rt_nil_check(l_N_3163))).f_NAME) || r_IN_HANDLERS(((*(R17 *)rt_nil_check(l_H_3160))).f_NEXT, ((*(R17 *)rt_nil_check(l_N_3163))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_N_3163))).f_LINE, rt_str("the handler names must be distinct (4.5.7): ", 44), ((*(R17 *)rt_nil_check(l_N_3163))).f_NAME);
}
S_R9(&l_COND_3164, r_FMT3(rt_str("@ || @x == @", 12), l_COND_3164, l_F_3159, r_EXC_NAME(((*(R17 *)rt_nil_check(l_N_3163))).f_NAME)), 0);
l_N_3163 = ((*(R17 *)rt_nil_check(l_N_3163))).f_NEXT;
}
RT_B_TICK();
} L_end3165: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3161, l_COND_3164));
S_R9(&l_WORD_3161, r_MK(rt_str("else if", 7)), 0);
r_PUSH_CTX(((rt_int)4LL), r_CATS(l_F_3159, rt_str("x", 1)));
r_OPEN_BODY(((*(R17 *)rt_nil_check(l_H_3160))).f_B);
r_POP_CTX();
}
l_H_3160 = ((*(R17 *)rt_nil_check(l_H_3160))).f_NEXT;
}
RT_B_TICK();
} L_end3162: ;
r_CODE(r_FMT1(rt_str("else rt_raise(@x); } }", 22), l_F_3159));
}
static void r_INTERFERENCE(R17 * p_S) { RT_B_TICK(); 
rt_int l_K_3166; memset(&l_K_3166, 0, sizeof l_K_3166);
l_K_3166 = ((*(R17 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_3166 == g_N_ASSIGN))
{
{
R17 * l_NAMES_3167; memset(&l_NAMES_3167, 0, sizeof l_NAMES_3167);
l_NAMES_3167 = NULL;
R17 * l_CALLS_3168; memset(&l_CALLS_3168, 0, sizeof l_CALLS_3168);
l_CALLS_3168 = NULL;
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_S))).f_A, &l_NAMES_3167, &l_CALLS_3168);
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_S))).f_B, &l_NAMES_3167, &l_CALLS_3168);
r_CHECK_INTERFERENCE(l_NAMES_3167, l_CALLS_3168, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 0);
}
}
else if ((l_K_3166 == g_N_CALL))
{
{
R17 * l_NAMES_3169; memset(&l_NAMES_3169, 0, sizeof l_NAMES_3169);
l_NAMES_3169 = NULL;
R17 * l_CALLS_3170; memset(&l_CALLS_3170, 0, sizeof l_CALLS_3170);
l_CALLS_3170 = NULL;
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_S))).f_A, &l_NAMES_3169, &l_CALLS_3170);
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_S))).f_B, &l_NAMES_3169, &l_CALLS_3170);
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_S))).f_C, &l_NAMES_3169, &l_CALLS_3170);
r_CHECK_INTERFERENCE(l_NAMES_3169, l_CALLS_3170, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 0);
}
}
else if (((l_K_3166 == g_N_RETURN) || (l_K_3166 == g_N_ASSERT)))
{
if ((!(((*(R17 *)rt_nil_check(p_S))).f_A == NULL)))
{
{
R17 * l_NAMES_3171; memset(&l_NAMES_3171, 0, sizeof l_NAMES_3171);
l_NAMES_3171 = NULL;
R17 * l_CALLS_3172; memset(&l_CALLS_3172, 0, sizeof l_CALLS_3172);
l_CALLS_3172 = NULL;
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_S))).f_A, &l_NAMES_3171, &l_CALLS_3172);
r_CHECK_INTERFERENCE(l_NAMES_3171, l_CALLS_3172, ((*(R17 *)rt_nil_check(p_S))).f_LINE, (l_K_3166 == g_N_ASSERT));
}
}
}
else if ((l_K_3166 == g_N_IF))
{
{
R17 * l_ARM_3173; memset(&l_ARM_3173, 0, sizeof l_ARM_3173);
l_ARM_3173 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_ARM_3173 == NULL)) goto L_end3174;
{
{
R17 * l_NAMES_3175; memset(&l_NAMES_3175, 0, sizeof l_NAMES_3175);
l_NAMES_3175 = NULL;
R17 * l_CALLS_3176; memset(&l_CALLS_3176, 0, sizeof l_CALLS_3176);
l_CALLS_3176 = NULL;
r_COLLECT_REFS(((*(R17 *)rt_nil_check(l_ARM_3173))).f_A, &l_NAMES_3175, &l_CALLS_3176);
r_CHECK_INTERFERENCE(l_NAMES_3175, l_CALLS_3176, ((*(R17 *)rt_nil_check(l_ARM_3173))).f_LINE, 0);
}
l_ARM_3173 = ((*(R17 *)rt_nil_check(l_ARM_3173))).f_NEXT;
}
RT_B_TICK();
} L_end3174: ;
}
}
}
static void r_COLLECT_LIST(R17 * p_L, R17 * *p_NAMES, R17 * *p_CALLS) { RT_B_TICK(); 
R17 * l_N_3177; memset(&l_N_3177, 0, sizeof l_N_3177);
l_N_3177 = p_L;
for (;;) {
if ((l_N_3177 == NULL)) goto L_end3178;
{
r_COLLECT_REFS(l_N_3177, &(*p_NAMES), &(*p_CALLS));
l_N_3177 = ((*(R17 *)rt_nil_check(l_N_3177))).f_NEXT;
}
RT_B_TICK();
} L_end3178: ;
}
static void r_COLLECT_REFS(R17 * p_E, R17 * *p_NAMES, R17 * *p_CALLS) { RT_B_TICK(); 
rt_int l_K_3179; memset(&l_K_3179, 0, sizeof l_K_3179);
if ((p_E == NULL))
{
return;
}
l_K_3179 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
if ((l_K_3179 == g_N_NAME))
{
{
R12 * l_Y_3180; memset(&l_Y_3180, 0, sizeof l_Y_3180);
l_Y_3180 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_3180 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_3180))).f_KIND == g_Y_VAR))
{
(*p_NAMES) = r_NAME_REF(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_3180))).f_OWNER, NULL, (*p_NAMES));
}
}
}
}
else if ((l_K_3179 == g_N_APPLY))
{
{
R12 * l_Y_3181; memset(&l_Y_3181, 0, sizeof l_Y_3181);
l_Y_3181 = r_LOOKUP(((*(R17 *)rt_nil_check(p_E))).f_NAME);
if ((!(l_Y_3181 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_Y_3181))).f_KIND == g_Y_VAR))
{
(*p_NAMES) = r_NAME_REF(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((*(R12 *)rt_nil_check(l_Y_3181))).f_OWNER, NULL, (*p_NAMES));
}
else if ((((*(R12 *)rt_nil_check(l_Y_3181))).f_KIND == g_Y_ROUTINE))
{
(*p_CALLS) = r_NAME_REF(((*(R17 *)rt_nil_check(p_E))).f_NAME, ((rt_int)0LL), p_E, (*p_CALLS));
}
}
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_B, &(*p_NAMES), &(*p_CALLS));
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_C, &(*p_NAMES), &(*p_CALLS));
}
}
else if ((((((l_K_3179 == g_N_FIELD) || (l_K_3179 == g_N_DEREF)) || (l_K_3179 == g_N_UNOP)) || (l_K_3179 == g_N_PAREN)) || (l_K_3179 == g_N_QUAL)))
{
r_COLLECT_REFS(((*(R17 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
}
else if (((((l_K_3179 == g_N_INDEX) || (l_K_3179 == g_N_SUBSTR)) || (l_K_3179 == g_N_BINOP)) || (l_K_3179 == g_N_IN)))
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
else if ((l_K_3179 == g_N_RECCONS))
{
{
R17 * l_F_3182; memset(&l_F_3182, 0, sizeof l_F_3182);
l_F_3182 = ((*(R17 *)rt_nil_check(p_E))).f_A;
for (;;) {
if ((l_F_3182 == NULL)) goto L_end3183;
{
r_COLLECT_REFS(((*(R17 *)rt_nil_check(l_F_3182))).f_A, &(*p_NAMES), &(*p_CALLS));
l_F_3182 = ((*(R17 *)rt_nil_check(l_F_3182))).f_NEXT;
}
RT_B_TICK();
} L_end3183: ;
}
}
else if ((l_K_3179 == g_N_ARRCONS))
{
r_COLLECT_LIST(((*(R17 *)rt_nil_check(p_E))).f_A, &(*p_NAMES), &(*p_CALLS));
}
}
static R17 * r_NAME_REF(R9 p_NAME, rt_int p_OWNER, R17 * p_A, R17 * p_L) { RT_B_TICK(); 
R17 * l_N_3184; memset(&l_N_3184, 0, sizeof l_N_3184);
l_N_3184 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_3184))).f_NAME, p_NAME, 0);
((*(R17 *)rt_nil_check(l_N_3184))).f_IV = p_OWNER;
((*(R17 *)rt_nil_check(l_N_3184))).f_A = p_A;
((*(R17 *)rt_nil_check(l_N_3184))).f_NEXT = p_L;
{ R17 * rv3185 = l_N_3184;
return rv3185; }
rt_raise(RT_X_INIT);
}
static R17 * r_ROUTINE_DATA(R9 p_NAME, rt_int p_INOUT) { RT_B_TICK(); 
R12 * l_Y_3186; memset(&l_Y_3186, 0, sizeof l_Y_3186);
l_Y_3186 = r_LOOKUP(p_NAME);
R17 * l_R_3187; memset(&l_R_3187, 0, sizeof l_R_3187);
l_R_3187 = NULL;
rt_int l_FIRST_3188; memset(&l_FIRST_3188, 0, sizeof l_FIRST_3188);
l_FIRST_3188 = 1;
for (;;) {
if ((l_Y_3186 == NULL)) goto L_end3189;
{
if ((((*(R12 *)rt_nil_check(l_Y_3186))).f_KIND == g_Y_ROUTINE))
{
{
R17 * l_D_3190; memset(&l_D_3190, 0, sizeof l_D_3190);
l_D_3190 = r_DATA_OF(r_ORIGINAL(l_Y_3186), p_INOUT, ((rt_int)0LL));
if (l_FIRST_3188)
{
l_R_3187 = l_D_3190;
l_FIRST_3188 = 0;
}
else
{
l_R_3187 = r_INTERSECT_REFS(l_R_3187, l_D_3190);
}
}
}
else if (((!(((*(R12 *)rt_nil_check(l_Y_3186))).f_KIND == g_Y_ROUTINE)) && (!l_FIRST_3188)))
{
}
l_Y_3186 = r_LOOKUP_NEXT(l_Y_3186);
}
RT_B_TICK();
} L_end3189: ;
{ R17 * rv3191 = l_R_3187;
return rv3191; }
rt_raise(RT_X_INIT);
}
static R17 * r_DATA_OF(R12 * p_Y, rt_int p_INOUT, rt_int p_DEPTH) { RT_B_TICK(); 
R17 * l_R_3192; memset(&l_R_3192, 0, sizeof l_R_3192);
l_R_3192 = NULL;
if (((((*(R12 *)rt_nil_check(p_Y))).f_DECL == NULL) || (p_DEPTH > ((rt_int)20LL))))
{
{ R17 * rv3193 = NULL;
return rv3193; }
}
if ((!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_KIND == g_N_ROUTINE)))
{
{ R17 * rv3194 = NULL;
return rv3194; }
}
r_COMPUTE_USES(p_Y);
if ((!p_INOUT))
{
{
R17 * l_U_3195; memset(&l_U_3195, 0, sizeof l_U_3195);
l_U_3195 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_3195 == NULL)) goto L_end3196;
{
l_R_3192 = r_NAME_REF(((*(R17 *)rt_nil_check(l_U_3195))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3195))).f_IV, NULL, l_R_3192);
l_U_3195 = ((*(R17 *)rt_nil_check(l_U_3195))).f_NEXT;
}
RT_B_TICK();
} L_end3196: ;
}
{ R17 * rv3197 = l_R_3192;
return rv3197; }
}
if ((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E == NULL))
{
{ R17 * rv3198 = NULL;
return rv3198; }
}
{
R17 * l_U_3199; memset(&l_U_3199, 0, sizeof l_U_3199);
l_U_3199 = ((*(R12 *)rt_nil_check(p_Y))).f_USES;
for (;;) {
if ((l_U_3199 == NULL)) goto L_end3200;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E))).f_B, ((*(R17 *)rt_nil_check(l_U_3199))).f_NAME))
{
l_R_3192 = r_NAME_REF(((*(R17 *)rt_nil_check(l_U_3199))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3199))).f_IV, NULL, l_R_3192);
}
l_U_3199 = ((*(R17 *)rt_nil_check(l_U_3199))).f_NEXT;
}
RT_B_TICK();
} L_end3200: ;
}
{
R17 * l_C_3201; memset(&l_C_3201, 0, sizeof l_C_3201);
l_C_3201 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_DECL))).f_E))).f_C;
for (;;) {
if ((l_C_3201 == NULL)) goto L_end3202;
{
{
R12 * l_Z_3203; memset(&l_Z_3203, 0, sizeof l_Z_3203);
l_Z_3203 = r_LOOKUP(((*(R17 *)rt_nil_check(l_C_3201))).f_NAME);
for (;;) {
if ((l_Z_3203 == NULL)) goto L_end3204;
{
if ((((*(R12 *)rt_nil_check(l_Z_3203))).f_KIND == g_Y_ROUTINE))
{
{
R17 * l_D_3205; memset(&l_D_3205, 0, sizeof l_D_3205);
l_D_3205 = r_DATA_OF(r_ORIGINAL(l_Z_3203), 1, rt_add(p_DEPTH, ((rt_int)1LL)));
for (;;) {
if ((l_D_3205 == NULL)) goto L_end3206;
{
if ((!r_HAS_REF(l_R_3192, ((*(R17 *)rt_nil_check(l_D_3205))).f_NAME, ((*(R17 *)rt_nil_check(l_D_3205))).f_IV)))
{
l_R_3192 = r_NAME_REF(((*(R17 *)rt_nil_check(l_D_3205))).f_NAME, ((*(R17 *)rt_nil_check(l_D_3205))).f_IV, NULL, l_R_3192);
}
l_D_3205 = ((*(R17 *)rt_nil_check(l_D_3205))).f_NEXT;
}
RT_B_TICK();
} L_end3206: ;
}
}
l_Z_3203 = r_LOOKUP_NEXT(l_Z_3203);
}
RT_B_TICK();
} L_end3204: ;
}
l_C_3201 = ((*(R17 *)rt_nil_check(l_C_3201))).f_NEXT;
}
RT_B_TICK();
} L_end3202: ;
}
{ R17 * rv3207 = l_R_3192;
return rv3207; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_REF(R17 * p_L, R9 p_NAME, rt_int p_OWNER) { RT_B_TICK(); 
R17 * l_P_3208; memset(&l_P_3208, 0, sizeof l_P_3208);
l_P_3208 = p_L;
for (;;) {
if ((l_P_3208 == NULL)) goto L_end3209;
{
if ((r_TEQ(((*(R17 *)rt_nil_check(l_P_3208))).f_NAME, p_NAME) && (((*(R17 *)rt_nil_check(l_P_3208))).f_IV == p_OWNER)))
{
{ rt_int rv3210 = 1;
return rv3210; }
}
l_P_3208 = ((*(R17 *)rt_nil_check(l_P_3208))).f_NEXT;
}
RT_B_TICK();
} L_end3209: ;
{ rt_int rv3211 = 0;
return rv3211; }
rt_raise(RT_X_INIT);
}
static R17 * r_INTERSECT_REFS(R17 * p_A, R17 * p_B) { RT_B_TICK(); 
R17 * l_R_3212; memset(&l_R_3212, 0, sizeof l_R_3212);
l_R_3212 = NULL;
R17 * l_P_3213; memset(&l_P_3213, 0, sizeof l_P_3213);
l_P_3213 = p_A;
for (;;) {
if ((l_P_3213 == NULL)) goto L_end3214;
{
if (r_HAS_REF(p_B, ((*(R17 *)rt_nil_check(l_P_3213))).f_NAME, ((*(R17 *)rt_nil_check(l_P_3213))).f_IV))
{
l_R_3212 = r_NAME_REF(((*(R17 *)rt_nil_check(l_P_3213))).f_NAME, ((*(R17 *)rt_nil_check(l_P_3213))).f_IV, NULL, l_R_3212);
}
l_P_3213 = ((*(R17 *)rt_nil_check(l_P_3213))).f_NEXT;
}
RT_B_TICK();
} L_end3214: ;
{ R17 * rv3215 = l_R_3212;
return rv3215; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_INTERFERENCE(R17 * p_NAMES, R17 * p_CALLS, rt_int p_LINE, rt_int p_ASSERTION) { RT_B_TICK(); 
R17 * l_C_3216; memset(&l_C_3216, 0, sizeof l_C_3216);
l_C_3216 = p_CALLS;
for (;;) {
if ((l_C_3216 == NULL)) goto L_end3217;
{
{
R17 * l_V_3218; memset(&l_V_3218, 0, sizeof l_V_3218);
l_V_3218 = r_ROUTINE_DATA(((*(R17 *)rt_nil_check(l_C_3216))).f_NAME, 1);
if (((!(l_V_3218 == NULL)) && p_ASSERTION))
{
r_FAILT(p_LINE, rt_str("the expression of ASSERT must be free of side-effects (4.5.8): ", 63), ((*(R17 *)rt_nil_check(l_C_3216))).f_NAME);
}
for (;;) {
if ((l_V_3218 == NULL)) goto L_end3219;
{
if (r_HAS_REF(p_NAMES, ((*(R17 *)rt_nil_check(l_V_3218))).f_NAME, ((*(R17 *)rt_nil_check(l_V_3218))).f_IV))
{
r_FAILT(p_LINE, rt_str("a function invocation modifies a variable the expression also names (4.3.4): ", 77), ((*(R17 *)rt_nil_check(l_V_3218))).f_NAME);
}
{
R17 * l_D_3220; memset(&l_D_3220, 0, sizeof l_D_3220);
l_D_3220 = p_CALLS;
for (;;) {
if ((l_D_3220 == NULL)) goto L_end3221;
{
if ((!(l_D_3220 == l_C_3216)))
{
if (r_HAS_REF(r_ROUTINE_DATA(((*(R17 *)rt_nil_check(l_D_3220))).f_NAME, 0), ((*(R17 *)rt_nil_check(l_V_3218))).f_NAME, ((*(R17 *)rt_nil_check(l_V_3218))).f_IV))
{
r_FAILT(p_LINE, rt_str("two function invocations of one expression interfere on (4.3.4): ", 65), ((*(R17 *)rt_nil_check(l_V_3218))).f_NAME);
}
}
l_D_3220 = ((*(R17 *)rt_nil_check(l_D_3220))).f_NEXT;
}
RT_B_TICK();
} L_end3221: ;
}
l_V_3218 = ((*(R17 *)rt_nil_check(l_V_3218))).f_NEXT;
}
RT_B_TICK();
} L_end3219: ;
}
l_C_3216 = ((*(R17 *)rt_nil_check(l_C_3216))).f_NEXT;
}
RT_B_TICK();
} L_end3217: ;
}
static rt_int r_IN_HANDLERS(R17 * p_HS, R9 p_NAME) { RT_B_TICK(); 
R17 * l_H_3222; memset(&l_H_3222, 0, sizeof l_H_3222);
l_H_3222 = p_HS;
for (;;) {
if ((l_H_3222 == NULL)) goto L_end3223;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_H_3222))).f_A, p_NAME))
{
{ rt_int rv3224 = 1;
return rv3224; }
}
l_H_3222 = ((*(R17 *)rt_nil_check(l_H_3222))).f_NEXT;
}
RT_B_TICK();
} L_end3223: ;
{ rt_int rv3225 = 0;
return rv3225; }
rt_raise(RT_X_INIT);
}
static rt_int r_IS_STRUCTURED_STMT(R17 * p_S) { RT_B_TICK(); 
rt_int l_K_3226; memset(&l_K_3226, 0, sizeof l_K_3226);
l_K_3226 = ((*(R17 *)rt_nil_check(p_S))).f_KIND;
if ((l_K_3226 == g_N_EXCEPT))
{
{ rt_int rv3227 = r_IS_STRUCTURED_STMT(((*(R17 *)rt_nil_check(p_S))).f_A);
return rv3227; }
}
{ rt_int rv3228 = (((((((l_K_3226 == g_N_BLOCK) || (l_K_3226 == g_N_IF)) || (l_K_3226 == g_N_CASE)) || (l_K_3226 == g_N_LOOP)) || (l_K_3226 == g_N_FOR)) || (l_K_3226 == g_N_PAR)) || (l_K_3226 == g_N_WITH));
return rv3228; }
rt_raise(RT_X_INIT);
}
static R17 * r_NAMED_ROOT(R17 * p_E) { RT_B_TICK(); 
rt_int l_K_3229; memset(&l_K_3229, 0, sizeof l_K_3229);
l_K_3229 = ((*(R17 *)rt_nil_check(p_E))).f_KIND;
if (((l_K_3229 == g_N_NAME) || (l_K_3229 == g_N_APPLY)))
{
{ R17 * rv3230 = p_E;
return rv3230; }
}
else if ((((l_K_3229 == g_N_INDEX) || (l_K_3229 == g_N_FIELD)) || (l_K_3229 == g_N_SUBSTR)))
{
{ R17 * rv3231 = r_NAMED_ROOT(((*(R17 *)rt_nil_check(p_E))).f_A);
return rv3231; }
}
{ R17 * rv3232 = NULL;
return rv3232; }
rt_raise(RT_X_INIT);
}
static void r_STMT(R17 * p_S) { RT_B_TICK(); 
rt_int l_K_3233; memset(&l_K_3233, 0, sizeof l_K_3233);
l_K_3233 = ((*(R17 *)rt_nil_check(p_S))).f_KIND;
r_INTERFERENCE(p_S);
if ((l_K_3233 == g_N_NULL))
{
return;
}
else if ((l_K_3233 == g_N_LABELED))
{
{
R12 * l_Y_3234; memset(&l_Y_3234, 0, sizeof l_Y_3234);
l_Y_3234 = r_LOOKUP(((*(R17 *)rt_nil_check(p_S))).f_NAME);
r_CODE(r_FMT1(rt_str("@: ;", 4), ((*(R12 *)rt_nil_check(l_Y_3234))).f_ACCESS));
r_STMT(((*(R17 *)rt_nil_check(p_S))).f_A);
}
}
else if ((l_K_3233 == g_N_GOTO))
{
{
R12 * l_Y_3235; memset(&l_Y_3235, 0, sizeof l_Y_3235);
l_Y_3235 = r_LOOKUP(((*(R17 *)rt_nil_check(p_S))).f_NAME);
rt_int l_N_3236; memset(&l_N_3236, 0, sizeof l_N_3236);
R18 * l_C_3237; memset(&l_C_3237, 0, sizeof l_C_3237);
l_C_3237 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
if ((l_Y_3235 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("unknown label ", 14), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3235))).f_KIND == g_Y_LABEL)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("not a label: ", 13), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3235))).f_OWNER == r_CUR_OWNER())))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a GO TO cannot leave a closed scope (4.5.2): ", 45), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
l_N_3236 = rt_sub(r_GUARDS(), ((*(R12 *)rt_nil_check(l_Y_3235))).f_MV);
for (;;) {
if ((l_N_3236 <= ((rt_int)0LL))) goto L_end3238;
{
if ((((*(R18 *)rt_nil_check(l_C_3237))).f_KIND == ((rt_int)3LL)))
{
r_CODE(r_FMT1(rt_str("RT_POP(@);", 10), ((*(R18 *)rt_nil_check(l_C_3237))).f_NAME));
l_N_3236 = rt_sub(l_N_3236, ((rt_int)1LL));
}
l_C_3237 = ((*(R18 *)rt_nil_check(l_C_3237))).f_NEXT;
}
RT_B_TICK();
} L_end3238: ;
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R12 *)rt_nil_check(l_Y_3235))).f_ACCESS));
}
}
else if ((l_K_3233 == g_N_ASSIGN))
{
r_ASSIGN_STMT(p_S);
}
else if ((l_K_3233 == g_N_CALL))
{
{
R26 l_V_3239; memset(&l_V_3239, 0, sizeof l_V_3239);
S_R26(&l_V_3239, r_PROCEDURE_CALL(p_S), 0);
if ((!((l_V_3239).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check((l_V_3239).f_T))).f_KIND == g_T_VOID)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a function invocation is not a statement: ", 42), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
}
r_CODE(r_CATS((l_V_3239).f_C, rt_str(";", 1)));
}
}
else if ((l_K_3233 == g_N_IF))
{
r_IF_STMT(((*(R17 *)rt_nil_check(p_S))).f_A, ((*(R17 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_3233 == g_N_CASE))
{
r_CASE_STMT(p_S);
}
else if ((l_K_3233 == g_N_LOOP))
{
{
R9 l_END_L_3240; memset(&l_END_L_3240, 0, sizeof l_END_L_3240);
S_R9(&l_END_L_3240, r_NEW_NAME(rt_str("L_end", 5)), 0);
r_CODES(rt_str("for (;;) {", 10));
if ((!(((*(R17 *)rt_nil_check(p_S))).f_A == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A), l_END_L_3240));
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_3240);
r_OPEN_BODY(((*(R17 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CODES(rt_str("RT_B_TICK();", 12));
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
r_CODE(r_FMT2(rt_str("if (@) goto @;", 14), r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_C), l_END_L_3240));
}
r_CODE(r_FMT1(rt_str("} @: ;", 6), l_END_L_3240));
}
}
else if ((l_K_3233 == g_N_FOR))
{
r_FOR_STMT(p_S);
}
else if ((l_K_3233 == g_N_EXIT))
{
{
R18 * l_C_3241; memset(&l_C_3241, 0, sizeof l_C_3241);
l_C_3241 = r_LEAVE(((rt_int)2LL));
if ((l_C_3241 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("EXIT outside a loop (4.5.6.2)", 29));
}
r_CODE(r_FMT1(rt_str("goto @;", 7), ((*(R18 *)rt_nil_check(l_C_3241))).f_NAME));
}
}
else if ((l_K_3233 == g_N_RETURN))
{
r_RETURN_STMT(p_S);
}
else if ((l_K_3233 == g_N_BLOCK))
{
r_OPEN_BODY(((*(R17 *)rt_nil_check(p_S))).f_A);
}
else if ((l_K_3233 == g_N_SIGNAL))
{
r_SIGNAL_STMT(p_S);
}
else if ((l_K_3233 == g_N_ASSERT))
{
if (((*(R7 *)rt_nil_check(g_W))).f_SUPPRESS)
{
{
R14 l_SAVED_CODE_3242; memset(&l_SAVED_CODE_3242, 0, sizeof l_SAVED_CODE_3242);
S_R14(&l_SAVED_CODE_3242, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R9 l_C_3243; memset(&l_C_3243, 0, sizeof l_C_3243);
S_R9(&l_C_3243, r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3242, 0);
}
}
else
{
r_CODE(r_FMT1(rt_str("if (!(@)) rt_raise(RT_X_ASSERT);", 32), r_BOOL_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A)));
}
}
else if ((l_K_3233 == g_N_EXCEPT))
{
r_GUARDED(((*(R17 *)rt_nil_check(p_S))).f_A, NULL, ((*(R17 *)rt_nil_check(p_S))).f_B);
}
else if ((l_K_3233 == g_N_WITH))
{
r_WITH_STMT(p_S);
}
else if ((l_K_3233 == g_N_PAR))
{
r_PARALLEL_BLOCK(p_S);
}
else if ((l_K_3233 == g_N_TERMINATE))
{
r_TERMINATE_STMT(p_S);
}
else
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("this statement cannot be translated", 35));
}
}
static R26 r_PROCEDURE_CALL(R17 * p_S) { RT_B_TICK(); 
R12 * l_Y_3244; memset(&l_Y_3244, 0, sizeof l_Y_3244);
l_Y_3244 = r_LOOKUP(((*(R17 *)rt_nil_check(p_S))).f_NAME);
if ((!(l_Y_3244 == NULL)))
{
if (((((*(R12 *)rt_nil_check(l_Y_3244))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(l_Y_3244))).f_KIND == g_Y_CONST)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("not a procedure: ", 17), ((*(R17 *)rt_nil_check(p_S))).f_NAME);
}
}
{ R26 rv3245 = r_CALL_EXPR(p_S, NULL);
return rv3245; }
rt_raise(RT_X_INIT);
}
static void r_IF_STMT(R17 * p_ARMS, R17 * p_ELSE_BODY) { RT_B_TICK(); 
R17 * l_ARM_3246; memset(&l_ARM_3246, 0, sizeof l_ARM_3246);
l_ARM_3246 = p_ARMS;
R9 l_WORD_3247; memset(&l_WORD_3247, 0, sizeof l_WORD_3247);
S_R9(&l_WORD_3247, r_MK(rt_str("if", 2)), 0);
rt_int l_OPEN_3248; memset(&l_OPEN_3248, 0, sizeof l_OPEN_3248);
l_OPEN_3248 = ((rt_int)0LL);
rt_int l_CHOSEN_3249; memset(&l_CHOSEN_3249, 0, sizeof l_CHOSEN_3249);
l_CHOSEN_3249 = 0;
for (;;) {
if ((l_ARM_3246 == NULL)) goto L_end3250;
{
{
R25 l_M_3251; memset(&l_M_3251, 0, sizeof l_M_3251);
S_R25(&l_M_3251, r_MANIFEST(((*(R17 *)rt_nil_check(l_ARM_3246))).f_A), 0);
if (l_CHOSEN_3249)
{
r_CHECK_COND(((*(R17 *)rt_nil_check(l_ARM_3246))).f_A);
r_CHECK_BODY(((*(R17 *)rt_nil_check(l_ARM_3246))).f_B);
}
else if ((l_M_3251).f_OK)
{
if ((!r_TEQS(l_WORD_3247, rt_str("if", 2))))
{
r_CODES(rt_str("else {", 6));
l_OPEN_3248 = rt_add(l_OPEN_3248, ((rt_int)1LL));
S_R9(&l_WORD_3247, r_MK(rt_str("if", 2)), 0);
}
r_CODE(r_FMT1(rt_str("(void)(@);", 10), r_BOOL_EXPR(((*(R17 *)rt_nil_check(l_ARM_3246))).f_A)));
if (((l_M_3251).f_V == ((rt_int)1LL)))
{
r_OPEN_BODY(((*(R17 *)rt_nil_check(l_ARM_3246))).f_B);
l_CHOSEN_3249 = 1;
}
else
{
r_CHECK_BODY(((*(R17 *)rt_nil_check(l_ARM_3246))).f_B);
}
}
else
{
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3247, r_BOOL_EXPR(((*(R17 *)rt_nil_check(l_ARM_3246))).f_A)));
r_OPEN_BODY(((*(R17 *)rt_nil_check(l_ARM_3246))).f_B);
S_R9(&l_WORD_3247, r_MK(rt_str("else if", 7)), 0);
}
}
l_ARM_3246 = ((*(R17 *)rt_nil_check(l_ARM_3246))).f_NEXT;
}
RT_B_TICK();
} L_end3250: ;
if ((!(p_ELSE_BODY == NULL)))
{
if (l_CHOSEN_3249)
{
r_CHECK_BODY(p_ELSE_BODY);
}
else
{
if ((!r_TEQS(l_WORD_3247, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_OPEN_BODY(p_ELSE_BODY);
}
}
{ rt_int it3253_lo = ((rt_int)1LL), it3253_hi = l_OPEN_3248;
for (rt_int it3253 = it3253_lo; it3253 <= it3253_hi; it3253++) {
{
r_CODES(rt_str("}", 1));
}
RT_B_TICK();
if (it3253 == it3253_hi) break;
} } L_end3252: ;
}
static void r_CHECK_BODY(R17 * p_B) { RT_B_TICK(); 
R14 l_SAVED_CODE_3254; memset(&l_SAVED_CODE_3254, 0, sizeof l_SAVED_CODE_3254);
S_R14(&l_SAVED_CODE_3254, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3255; memset(&rc3255, 0, sizeof rc3255);  rc3255.f_HEAD = NULL; rc3255.f_TAIL = NULL; rc3255; }), 0);
r_OPEN_BODY(p_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3254, 0);
}
static void r_CHECK_COND(R17 * p_E) { RT_B_TICK(); 
R9 l_C_3256; memset(&l_C_3256, 0, sizeof l_C_3256);
S_R9(&l_C_3256, r_BOOL_EXPR(p_E), 0);
}
static void r_FOR_STMT(R17 * p_S) { RT_B_TICK(); 
R9 l_END_L_3257; memset(&l_END_L_3257, 0, sizeof l_END_L_3257);
S_R9(&l_END_L_3257, r_NEW_NAME(rt_str("L_end", 5)), 0);
R9 l_IT_3258; memset(&l_IT_3258, 0, sizeof l_IT_3258);
S_R9(&l_IT_3258, r_NEW_NAME(rt_str("it", 2)), 0);
R17 * l_R_3259; memset(&l_R_3259, 0, sizeof l_R_3259);
l_R_3259 = ((*(R17 *)rt_nil_check(p_S))).f_A;
R26 l_LO_3260; memset(&l_LO_3260, 0, sizeof l_LO_3260);
S_R26(&l_LO_3260, r_EXPR(((*(R17 *)rt_nil_check(l_R_3259))).f_A, NULL), 0);
R26 l_HI_3261; memset(&l_HI_3261, 0, sizeof l_HI_3261);
S_R26(&l_HI_3261, r_EXPR(((*(R17 *)rt_nil_check(l_R_3259))).f_B, (l_LO_3260).f_T), 0);
R22 * l_T_3262; memset(&l_T_3262, 0, sizeof l_T_3262);
l_T_3262 = r_REAL_TYPE((l_LO_3260).f_T);
R9 l_LOC_3263; memset(&l_LOC_3263, 0, sizeof l_LOC_3263);
R9 l_HIC_3264; memset(&l_HIC_3264, 0, sizeof l_HIC_3264);
if ((((*(R22 *)rt_nil_check(l_T_3262))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_T_3262))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a loop over an UNORDERED type (4.5.6.3)", 39));
}
}
else if (((!(((*(R22 *)rt_nil_check(l_T_3262))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_T_3262))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the range of a definite loop is integer or enumerated (4.5.6.3)", 63));
}
S_R9(&l_LOC_3263, (l_LO_3260).f_C, 0);
S_R9(&l_HIC_3264, (l_HI_3261).f_C, 0);
if (((((*(R17 *)rt_nil_check(l_R_3259))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_R_3259))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LOC_3263, r_FMT1(rt_str("(@) + 1", 7), l_LOC_3263), 0);
}
if ((((*(R17 *)rt_nil_check(l_R_3259))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HIC_3264, r_FMT1(rt_str("(@) - 1", 7), l_HIC_3264), 0);
}
r_CODE(r_FMT4(rt_str("{ rt_int @_lo = @, @_hi = @;", 28), l_IT_3258, l_LOC_3263, l_IT_3258, l_HIC_3264));
r_CODE(r_FMT4(rt_str("for (rt_int @ = @_lo; @ <= @_hi; @++) {", 39), l_IT_3258, l_IT_3258, l_IT_3258, l_IT_3258));
r_OPEN_SCOPE();
if (((((*(R17 *)rt_nil_check(p_S))).f_NAME).f_LEN > ((rt_int)0LL)))
{
{
R12 * l_Y_3265; memset(&l_Y_3265, 0, sizeof l_Y_3265);
l_Y_3265 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(p_S))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3265))).f_INPUT = 1;
if ((((*(R22 *)rt_nil_check(l_T_3262))).f_KIND == g_T_ENUM))
{
((*(R12 *)rt_nil_check(l_Y_3265))).f_T = ((*(R22 *)rt_nil_check(l_T_3262))).f_BASE;
}
else
{
((*(R12 *)rt_nil_check(l_Y_3265))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
}
if (((r_CUR_LEVEL() > ((rt_int)0LL)) && ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FRAMED))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_3265, rt_str("", 0)), l_IT_3258));
}
else if ((r_CUR_LEVEL() == ((rt_int)0LL)))
{
r_CODE(r_FMT2(rt_str("@ = @;", 6), r_NEW_OBJECT(l_Y_3265, rt_str("", 0)), l_IT_3258));
}
else
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3265))).f_ACCESS, l_IT_3258, 0);
}
r_DEFINE(l_Y_3265, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
}
r_PUSH_CTX(((rt_int)2LL), l_END_L_3257);
r_OPEN_BODY(((*(R17 *)rt_nil_check(p_S))).f_B);
r_POP_CTX();
r_CLOSE_SCOPE();
r_CODES(rt_str("RT_B_TICK();", 12));
r_CODE(r_FMT2(rt_str("if (@ == @_hi) break;", 21), l_IT_3258, l_IT_3258));
r_CODE(r_FMT1(rt_str("} } @: ;", 8), l_END_L_3257));
}
static void r_RETURN_STMT(R17 * p_S) { RT_B_TICK(); 
R19 * l_CS_3266; memset(&l_CS_3266, 0, sizeof l_CS_3266);
l_CS_3266 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R18 * l_C_3267; memset(&l_C_3267, 0, sizeof l_C_3267);
if ((((*(R17 *)rt_nil_check(p_S))).f_A == NULL))
{
l_C_3267 = r_LEAVE(((rt_int)1LL));
if ((!(((*(R19 *)rt_nil_check(l_CS_3266))).f_RESULT == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(((*(R19 *)rt_nil_check(l_CS_3266))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a function must return a value (4.3.2)", 38));
}
}
if ((((*(R19 *)rt_nil_check(l_CS_3266))).f_LEVEL == ((rt_int)0LL)))
{
r_CODES(rt_str("rt_main_done();", 15));
}
else if (((*(R19 *)rt_nil_check(l_CS_3266))).f_IS_PATH)
{
r_CODES(rt_str("return;", 7));
}
else
{
r_CODE(r_CATS(((*(R19 *)rt_nil_check(l_CS_3266))).f_COPYOUT, rt_str("return;", 7)));
}
return;
}
if (((((*(R19 *)rt_nil_check(l_CS_3266))).f_RESULT == NULL) || ((*(R19 *)rt_nil_check(l_CS_3266))).f_IS_PATH))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
if ((((*(R22 *)rt_nil_check(((*(R19 *)rt_nil_check(l_CS_3266))).f_RESULT))).f_KIND == g_T_VOID))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("only a function returns a value (4.3.2)", 39));
}
{
R9 l_V_3268; memset(&l_V_3268, 0, sizeof l_V_3268);
S_R9(&l_V_3268, r_NEW_NAME(rt_str("rv", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(((*(R19 *)rt_nil_check(l_CS_3266))).f_RESULT), l_V_3268, r_CONVERT(r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A, ((*(R19 *)rt_nil_check(l_CS_3266))).f_RESULT), ((*(R19 *)rt_nil_check(l_CS_3266))).f_RESULT, ((*(R17 *)rt_nil_check(p_S))).f_LINE, r_NO_TEXT())));
l_C_3267 = r_LEAVE(((rt_int)1LL));
r_CODE(r_FMT1(rt_str("return @; }", 11), l_V_3268));
}
}
static void r_SIGNAL_STMT(R17 * p_S) { RT_B_TICK(); 
if (((((*(R17 *)rt_nil_check(p_S))).f_NAME).f_LEN == ((rt_int)0LL)))
{
{
R18 * l_C_3269; memset(&l_C_3269, 0, sizeof l_C_3269);
l_C_3269 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
for (;;) {
if ((l_C_3269 == NULL)) goto L_end3270;
{
if ((((*(R18 *)rt_nil_check(l_C_3269))).f_KIND == ((rt_int)4LL)))
{
r_CODE(r_FMT1(rt_str("rt_raise(@);", 12), ((*(R18 *)rt_nil_check(l_C_3269))).f_NAME));
return;
}
if ((((*(R18 *)rt_nil_check(l_C_3269))).f_KIND == ((rt_int)1LL)))
{
goto L_end3270;
}
l_C_3269 = ((*(R18 *)rt_nil_check(l_C_3269))).f_NEXT;
}
RT_B_TICK();
} L_end3270: ;
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
R17 * l_TG_3271; memset(&l_TG_3271, 0, sizeof l_TG_3271);
l_TG_3271 = ((*(R17 *)rt_nil_check(p_S))).f_A;
if ((((*(R17 *)rt_nil_check(l_TG_3271))).f_KIND == g_N_SUBSTR))
{
{
R26 l_B_3272; memset(&l_B_3272, 0, sizeof l_B_3272);
S_R26(&l_B_3272, r_EXPR(((*(R17 *)rt_nil_check(l_TG_3271))).f_A, NULL), 0);
if ((!(l_B_3272).f_LVAL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable", 46));
}
if ((((*(R22 *)rt_nil_check((l_B_3272).f_T))).f_KIND == g_T_ABS))
{
{
R29 * l_ARGS_3273; memset(&l_ARGS_3273, 0, sizeof l_ARGS_3273);
l_ARGS_3273 = r_NODE_ARG(((*(R17 *)rt_nil_check(p_S))).f_B, g_M_IN, r_NODE_ARG(((*(R17 *)rt_nil_check(l_TG_3271))).f_B, g_M_IN, r_NODE_ARG(((*(R17 *)rt_nil_check(l_TG_3271))).f_C, g_M_IN, r_VAL_ARG(l_B_3272, NULL))));
R12 * l_Y_3274; memset(&l_Y_3274, 0, sizeof l_Y_3274);
((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(l_ARGS_3273))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_INOUT;
l_Y_3274 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_3273, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 0);
if ((l_Y_3274 == NULL))
{
((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(((*(R29 *)rt_nil_check(l_ARGS_3273))).f_NEXT))).f_NEXT))).f_NEXT))).f_MODE = g_M_OUT;
l_Y_3274 = r_FIND_ROUTINE(r_MKN(rt_str("SUBSTRING_STORE_", 16)), l_ARGS_3273, ((*(R17 *)rt_nil_check(p_S))).f_LINE, 1);
}
if ((l_Y_3274 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("no SUBSTRING_STORE_ for this abstract type", 42));
}
r_CODE(r_CATS((r_CALL_SYM(l_Y_3274, l_ARGS_3273, ((*(R17 *)rt_nil_check(p_S))).f_LINE)).f_C, rt_str(";", 1)));
return;
}
}
if (((!(((*(R22 *)rt_nil_check((l_B_3272).f_T))).f_KIND == g_T_STR)) && (!(((*(R22 *)rt_nil_check((l_B_3272).f_T))).f_KIND == g_T_BITS))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a substring of something not a string", 37));
}
{
R26 l_V_3275; memset(&l_V_3275, 0, sizeof l_V_3275);
S_R26(&l_V_3275, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_B, (l_B_3272).f_T), 0);
if ((!(((*(R22 *)rt_nil_check((l_V_3275).f_T))).f_KIND == ((*(R22 *)rt_nil_check((l_B_3272).f_T))).f_KIND)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the types do not match", 22));
}
r_CODE(r_FMT4(rt_str("rt_b_slice_assign(&@, @, @, @);", 31), (l_B_3272).f_C, r_INT_EXPR(((*(R17 *)rt_nil_check(l_TG_3271))).f_B), r_INT_EXPR(((*(R17 *)rt_nil_check(l_TG_3271))).f_C), (l_V_3275).f_C));
}
}
return;
}
{
R26 l_LV_3276; memset(&l_LV_3276, 0, sizeof l_LV_3276);
S_R26(&l_LV_3276, r_EXPR(l_TG_3271, NULL), 0);
R17 * l_SAVED_Q_3277; memset(&l_SAVED_Q_3277, 0, sizeof l_SAVED_Q_3277);
l_SAVED_Q_3277 = ((*(R7 *)rt_nil_check(g_W))).f_SQUAL;
if ((!(l_LV_3276).f_LVAL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("the target of an assignment must be a variable (3.1.5)", 54));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = NULL;
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_B))).f_KIND == g_N_QUAL))
{
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = ((*(R17 *)rt_nil_check(p_S))).f_B;
}
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = ((*(R17 *)rt_nil_check(p_S))).f_B;
if (((((*(R22 *)rt_nil_check((l_LV_3276).f_T))).f_GENP).f_LEN > ((rt_int)0LL)))
{
r_REQUIRE_WHERE(r_MKN(rt_str("STORE_", 6)), ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
{
R26 l_V_3278; memset(&l_V_3278, 0, sizeof l_V_3278);
S_R26(&l_V_3278, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_B, (l_LV_3276).f_T), 0);
((*(R7 *)rt_nil_check(g_W))).f_NEW_OK = NULL;
r_CODE(r_STORE_CODE((l_LV_3276).f_T, (l_LV_3276).f_C, l_V_3278, ((*(R17 *)rt_nil_check(p_S))).f_LINE, (l_LV_3276).f_SELF));
}
((*(R7 *)rt_nil_check(g_W))).f_SQUAL = l_SAVED_Q_3277;
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
R12 * l_Y_3279; memset(&l_Y_3279, 0, sizeof l_Y_3279);
l_Y_3279 = r_NEW_SYM(g_Y_VAR, ((*(R17 *)rt_nil_check(p_S))).f_NAME);
R26 l_V_3280; memset(&l_V_3280, 0, sizeof l_V_3280);
S_R26(&l_V_3280, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A, NULL), 0);
((*(R12 *)rt_nil_check(l_Y_3279))).f_T = (l_V_3280).f_T;
((*(R12 *)rt_nil_check(l_Y_3279))).f_WITHV = ((rt_int)1LL);
if ((((*(R17 *)rt_nil_check(p_S))).f_IV == ((rt_int)0LL)))
{
{
R9 l_CN_3281; memset(&l_CN_3281, 0, sizeof l_CN_3281);
S_R9(&l_CN_3281, r_NEW_OBJECT(l_Y_3279, rt_str("", 0)), 0);
if (r_NEEDS_INIT((l_V_3280).f_T))
{
r_CODE(r_INIT_CODE((l_V_3280).f_T, l_CN_3281));
}
r_CODE(r_ASSIGN_CODE((l_V_3280).f_T, l_CN_3281, (l_V_3280).f_C));
}
}
else
{
if ((!(l_V_3280).f_LVAL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("NAMING needs a variable (4.5.4)", 31));
}
{
R9 l_P_3282; memset(&l_P_3282, 0, sizeof l_P_3282);
S_R9(&l_P_3282, r_NEW_NAME(rt_str("wp", 2)), 0);
r_CODE(r_FMT3(rt_str("@ *@ = &@;", 10), r_CTYPE((l_V_3280).f_T), l_P_3282, (l_V_3280).f_C));
S_R9(&((*(R12 *)rt_nil_check(l_Y_3279))).f_ACCESS, r_FMT1(rt_str("(*@)", 4), l_P_3282), 0);
S_R9(&((*(R12 *)rt_nil_check(l_Y_3279))).f_FIELD, r_NO_TEXT(), 0);
((*(R12 *)rt_nil_check(l_Y_3279))).f_LEVEL = ((rt_int)0LL);
((*(R12 *)rt_nil_check(l_Y_3279))).f_OWNER = rt_neg(((rt_int)1LL));
}
{
R17 * l_R_3283; memset(&l_R_3283, 0, sizeof l_R_3283);
l_R_3283 = r_NAMED_ROOT(((*(R17 *)rt_nil_check(p_S))).f_A);
if ((!(l_R_3283 == NULL)))
{
if ((!r_TEQ(((*(R17 *)rt_nil_check(l_R_3283))).f_NAME, ((*(R17 *)rt_nil_check(p_S))).f_NAME)))
{
{
R12 * l_OLD_3284; memset(&l_OLD_3284, 0, sizeof l_OLD_3284);
l_OLD_3284 = r_LOOKUP(((*(R17 *)rt_nil_check(l_R_3283))).f_NAME);
if ((!(l_OLD_3284 == NULL)))
{
if ((((*(R12 *)rt_nil_check(l_OLD_3284))).f_KIND == g_Y_VAR))
{
{
R12 * l_H_3285; memset(&l_H_3285, 0, sizeof l_H_3285);
l_H_3285 = r_NEW_SYM(g_Y_VAR, ((*(R17 *)rt_nil_check(l_R_3283))).f_NAME);
((*(R12 *)rt_nil_check(l_H_3285))).f_T = ((*(R12 *)rt_nil_check(l_OLD_3284))).f_T;
((*(R12 *)rt_nil_check(l_H_3285))).f_WITHV = ((rt_int)2LL);
((*(R12 *)rt_nil_check(l_H_3285))).f_OWNER = ((*(R12 *)rt_nil_check(l_OLD_3284))).f_OWNER;
r_DEFINE(l_H_3285, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
}
}
}
}
}
}
}
r_DEFINE(l_Y_3279, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
r_STMT(((*(R17 *)rt_nil_check(p_S))).f_B);
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static void r_CASE_STMT(R17 * p_S) { RT_B_TICK(); 
R17 * l_ARM_3286; memset(&l_ARM_3286, 0, sizeof l_ARM_3286);
l_ARM_3286 = ((*(R17 *)rt_nil_check(p_S))).f_B;
R28 * l_SEEN_3287; memset(&l_SEEN_3287, 0, sizeof l_SEEN_3287);
l_SEEN_3287 = NULL;
if (((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_A))).f_KIND == g_N_NAME) && r_TEQS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_A))).f_NAME, rt_str("OBJECT_MACHINE", 14))))
{
r_MACHINE_CASE(p_S);
return;
}
{
R26 l_CH_3288; memset(&l_CH_3288, 0, sizeof l_CH_3288);
S_R26(&l_CH_3288, r_EXPR(((*(R17 *)rt_nil_check(p_S))).f_A, NULL), 0);
R22 * l_T_3289; memset(&l_T_3289, 0, sizeof l_T_3289);
l_T_3289 = r_REAL_TYPE((l_CH_3288).f_T);
R12 * l_BOUND_3290; memset(&l_BOUND_3290, 0, sizeof l_BOUND_3290);
l_BOUND_3290 = r_DISCRIMINATED(((*(R17 *)rt_nil_check(p_S))).f_A);
if (((((*(R22 *)rt_nil_check(l_T_3289))).f_KIND == g_T_STR) || (((*(R22 *)rt_nil_check(l_T_3289))).f_KIND == g_T_BITS)))
{
{
R9 l_TMP_3291; memset(&l_TMP_3291, 0, sizeof l_TMP_3291);
S_R9(&l_TMP_3291, r_NEW_NAME(rt_str("cs", 2)), 0);
R9 l_WORD_3292; memset(&l_WORD_3292, 0, sizeof l_WORD_3292);
S_R9(&l_WORD_3292, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT2(rt_str("{ rstr @ = @;", 13), l_TMP_3291, (l_CH_3288).f_C));
for (;;) {
if ((l_ARM_3286 == NULL)) goto L_end3293;
{
{
R17 * l_L_3294; memset(&l_L_3294, 0, sizeof l_L_3294);
l_L_3294 = ((*(R17 *)rt_nil_check(l_ARM_3286))).f_A;
R9 l_COND_3295; memset(&l_COND_3295, 0, sizeof l_COND_3295);
S_R9(&l_COND_3295, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3294 == NULL)) goto L_end3296;
{
S_R9(&l_COND_3295, r_FMT3(rt_str("@ || rt_str_eq(@, @)", 20), l_COND_3295, l_TMP_3291, (r_EXPR(l_L_3294, l_T_3289)).f_C), 0);
l_L_3294 = ((*(R17 *)rt_nil_check(l_L_3294))).f_NEXT;
}
RT_B_TICK();
} L_end3296: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3292, l_COND_3295));
S_R9(&l_WORD_3292, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3286))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3286))).f_C);
}
l_ARM_3286 = ((*(R17 *)rt_nil_check(l_ARM_3286))).f_NEXT;
}
RT_B_TICK();
} L_end3293: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_3292, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
return;
}
if (((((*(R22 *)rt_nil_check(l_T_3289))).f_KIND == g_T_FLOAT) || (((((*(R22 *)rt_nil_check(l_T_3289))).f_KIND == g_T_INT) && (!(((*(R22 *)rt_nil_check(l_T_3289))).f_SCALE == ((rt_int)0LL)))))))
{
r_VALUE_CASE(p_S, l_CH_3288);
return;
}
if ((((!(((((*(R22 *)rt_nil_check(l_T_3289))).f_KIND == g_T_INT) && (((*(R22 *)rt_nil_check(l_T_3289))).f_SCALE == ((rt_int)0LL))))) && (!(((*(R22 *)rt_nil_check(l_T_3289))).f_KIND == g_T_ENUM))) && (!(((*(R22 *)rt_nil_check(l_T_3289))).f_KIND == g_T_BOOL))))
{
r_FAILT(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a case statement cannot select on ", 34), r_TYPE_NAME(l_T_3289));
}
r_CODE(r_FMT1(rt_str("switch (@) {", 12), (l_CH_3288).f_C));
for (;;) {
if ((l_ARM_3286 == NULL)) goto L_end3297;
{
{
R17 * l_L_3298; memset(&l_L_3298, 0, sizeof l_L_3298);
l_L_3298 = ((*(R17 *)rt_nil_check(l_ARM_3286))).f_A;
R25 l_FIRST_3299; memset(&l_FIRST_3299, 0, sizeof l_FIRST_3299);
S_R25(&l_FIRST_3299, r_NO_MVAL(), 0);
for (;;) {
if ((l_L_3298 == NULL)) goto L_end3300;
{
if ((((*(R17 *)rt_nil_check(l_L_3298))).f_KIND == g_N_RANGE))
{
{
R25 l_LO_3301; memset(&l_LO_3301, 0, sizeof l_LO_3301);
S_R25(&l_LO_3301, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_3298))).f_A, l_T_3289), 0);
R25 l_HI_3302; memset(&l_HI_3302, 0, sizeof l_HI_3302);
S_R25(&l_HI_3302, r_ENUM_MANIFEST(((*(R17 *)rt_nil_check(l_L_3298))).f_B, l_T_3289), 0);
rt_int l_A_3303; memset(&l_A_3303, 0, sizeof l_A_3303);
l_A_3303 = (l_LO_3301).f_V;
rt_int l_B_3304; memset(&l_B_3304, 0, sizeof l_B_3304);
l_B_3304 = (l_HI_3302).f_V;
if ((!(((l_LO_3301).f_OK && (l_HI_3302).f_OK))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_3298))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if (((((*(R17 *)rt_nil_check(l_L_3298))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_L_3298))).f_IV == ((rt_int)3LL))))
{
l_A_3303 = rt_add(l_A_3303, ((rt_int)1LL));
}
if ((((*(R17 *)rt_nil_check(l_L_3298))).f_IV >= ((rt_int)2LL)))
{
l_B_3304 = rt_sub(l_B_3304, ((rt_int)1LL));
}
if ((!(l_FIRST_3299).f_OK))
{
S_R25(&l_FIRST_3299, r_SOME(l_A_3303), 0);
}
l_SEEN_3287 = r_DISTINCT_LABEL(l_SEEN_3287, l_A_3303, l_B_3304, ((*(R17 *)rt_nil_check(l_L_3298))).f_LINE);
r_CODE(r_FMT2(rt_str("case @ ... @:", 13), r_NUM(l_A_3303), r_NUM(l_B_3304)));
}
}
else
{
{
R25 l_M_3305; memset(&l_M_3305, 0, sizeof l_M_3305);
S_R25(&l_M_3305, r_ENUM_MANIFEST(l_L_3298, l_T_3289), 0);
if ((!(l_M_3305).f_OK))
{
r_FAIL(((*(R17 *)rt_nil_check(l_L_3298))).f_LINE, rt_str("a case label must be manifest (4.5.5.2)", 39));
}
if ((!(l_FIRST_3299).f_OK))
{
S_R25(&l_FIRST_3299, l_M_3305, 0);
}
l_SEEN_3287 = r_DISTINCT_LABEL(l_SEEN_3287, (l_M_3305).f_V, (l_M_3305).f_V, ((*(R17 *)rt_nil_check(l_L_3298))).f_LINE);
r_CODE(r_FMT1(rt_str("case @:", 7), r_NUM((l_M_3305).f_V)));
}
}
l_L_3298 = ((*(R17 *)rt_nil_check(l_L_3298))).f_NEXT;
}
RT_B_TICK();
} L_end3300: ;
if ((!(l_BOUND_3290 == NULL)))
{
{
R22 * l_SAVED_3306; memset(&l_SAVED_3306, 0, sizeof l_SAVED_3306);
l_SAVED_3306 = ((*(R12 *)rt_nil_check(l_BOUND_3290))).f_T;
((*(R12 *)rt_nil_check(l_BOUND_3290))).f_T = r_NARROW(l_SAVED_3306, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_S))).f_A))).f_NAME, (l_FIRST_3299).f_V);
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3286))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3286))).f_C);
((*(R12 *)rt_nil_check(l_BOUND_3290))).f_T = l_SAVED_3306;
}
}
else
{
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3286))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3286))).f_C);
}
r_CODES(rt_str("break;", 6));
}
l_ARM_3286 = ((*(R17 *)rt_nil_check(l_ARM_3286))).f_NEXT;
}
RT_B_TICK();
} L_end3297: ;
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
R28 * l_P_3307; memset(&l_P_3307, 0, sizeof l_P_3307);
l_P_3307 = p_SEEN;
if ((p_A > p_B))
{
{ R28 * rv3308 = p_SEEN;
return rv3308; }
}
for (;;) {
if ((l_P_3307 == NULL)) goto L_end3309;
{
if (((p_A <= (((*(R28 *)rt_nil_check(l_P_3307))).f_MHI).f_V) && ((((*(R28 *)rt_nil_check(l_P_3307))).f_MLO).f_V <= p_B)))
{
r_FAIL(p_LINE, rt_str("the choice-label values must be distinct (4.5.5.2)", 50));
}
l_P_3307 = ((*(R28 *)rt_nil_check(l_P_3307))).f_NEXT;
}
RT_B_TICK();
} L_end3309: ;
l_P_3307 = ({ R28 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R28(&(*(R28 *)rt_nil_check(l_P_3307)), ({ R28 rc3310; memset(&rc3310, 0, sizeof rc3310);  S_R9(&rc3310.f_LO, r_NO_TEXT(), 0); S_R9(&rc3310.f_HI, r_NO_TEXT(), 0); S_R25(&rc3310.f_MLO, r_SOME(p_A), 0); S_R25(&rc3310.f_MHI, r_SOME(p_B), 0); rc3310.f_ANYARG = 0; rc3310.f_NEXT = p_SEEN; rc3310; }), 0);
{ R28 * rv3311 = l_P_3307;
return rv3311; }
rt_raise(RT_X_INIT);
}
static void r_VALUE_CASE(R17 * p_S, R26 p_CH) { RT_B_TICK(); 
R9 l_TMP_3312; memset(&l_TMP_3312, 0, sizeof l_TMP_3312);
S_R9(&l_TMP_3312, r_NEW_NAME(rt_str("cs", 2)), 0);
R26 l_X_3313; memset(&l_X_3313, 0, sizeof l_X_3313);
S_R26(&l_X_3313, r_MKET(l_TMP_3312, (p_CH).f_T), 0);
R17 * l_ARM_3314; memset(&l_ARM_3314, 0, sizeof l_ARM_3314);
l_ARM_3314 = ((*(R17 *)rt_nil_check(p_S))).f_B;
R9 l_WORD_3315; memset(&l_WORD_3315, 0, sizeof l_WORD_3315);
S_R9(&l_WORD_3315, r_MK(rt_str("if", 2)), 0);
r_CODE(r_FMT3(rt_str("{ @ @ = @;", 10), r_CTYPE(r_REAL_TYPE((p_CH).f_T)), l_TMP_3312, (p_CH).f_C));
for (;;) {
if ((l_ARM_3314 == NULL)) goto L_end3316;
{
{
R17 * l_L_3317; memset(&l_L_3317, 0, sizeof l_L_3317);
l_L_3317 = ((*(R17 *)rt_nil_check(l_ARM_3314))).f_A;
R9 l_COND_3318; memset(&l_COND_3318, 0, sizeof l_COND_3318);
S_R9(&l_COND_3318, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3317 == NULL)) goto L_end3319;
{
if ((((*(R17 *)rt_nil_check(l_L_3317))).f_KIND == g_N_RANGE))
{
{
R26 l_LO_3320; memset(&l_LO_3320, 0, sizeof l_LO_3320);
S_R26(&l_LO_3320, r_CASE_LABEL(((*(R17 *)rt_nil_check(l_L_3317))).f_A, (p_CH).f_T), 0);
R26 l_HI_3321; memset(&l_HI_3321, 0, sizeof l_HI_3321);
S_R26(&l_HI_3321, r_CASE_LABEL(((*(R17 *)rt_nil_check(l_L_3317))).f_B, (p_CH).f_T), 0);
rstr l_GE_3322; memset(&l_GE_3322, 0, sizeof l_GE_3322);
l_GE_3322 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_GE_3322, rt_str(">=", 2));
rstr l_LE_3323; memset(&l_LE_3323, 0, sizeof l_LE_3323);
l_LE_3323 = rt_b_str_new(((rt_int)2LL), 0);
rt_b_assign(&l_LE_3323, rt_str("<=", 2));
if (((((*(R17 *)rt_nil_check(l_L_3317))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_L_3317))).f_IV == ((rt_int)3LL))))
{
rt_b_assign(&l_GE_3322, rt_str("> ", 2));
}
if ((((*(R17 *)rt_nil_check(l_L_3317))).f_IV >= ((rt_int)2LL)))
{
rt_b_assign(&l_LE_3323, rt_str("< ", 2));
}
S_R9(&l_COND_3318, r_FMT3(rt_str("@ || (@ && @)", 13), l_COND_3318, r_VALUE_COMPARE(l_X_3313, l_LO_3320, r_MK(l_GE_3322)), r_VALUE_COMPARE(l_X_3313, l_HI_3321, r_MK(l_LE_3323))), 0);
}
}
else
{
S_R9(&l_COND_3318, r_FMT2(rt_str("@ || @", 6), l_COND_3318, r_VALUE_COMPARE(l_X_3313, r_CASE_LABEL(l_L_3317, (p_CH).f_T), r_MK(rt_str("==", 2)))), 0);
}
l_L_3317 = ((*(R17 *)rt_nil_check(l_L_3317))).f_NEXT;
}
RT_B_TICK();
} L_end3319: ;
r_CODE(r_FMT2(rt_str("@ (@)", 5), l_WORD_3315, l_COND_3318));
S_R9(&l_WORD_3315, r_MK(rt_str("else if", 7)), 0);
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3314))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3314))).f_C);
}
l_ARM_3314 = ((*(R17 *)rt_nil_check(l_ARM_3314))).f_NEXT;
}
RT_B_TICK();
} L_end3316: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
if ((!r_TEQS(l_WORD_3315, rt_str("if", 2))))
{
r_CODES(rt_str("else", 4));
}
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
}
r_CODES(rt_str("}", 1));
}
static R26 r_CASE_LABEL(R17 * p_L, R22 * p_T) { RT_B_TICK(); 
R26 l_V_3324; memset(&l_V_3324, 0, sizeof l_V_3324);
S_R26(&l_V_3324, r_EXPR(p_L, p_T), 0);
if ((!r_SAME_CLASS(r_REAL_TYPE((l_V_3324).f_T), r_REAL_TYPE(p_T))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_L))).f_LINE, rt_str("a case label is a value of the type of the choice (4.5.5.2)", 59));
}
{ R26 rv3325 = l_V_3324;
return rv3325; }
rt_raise(RT_X_INIT);
}
static R9 r_VALUE_COMPARE(R26 p_A, R26 p_B, R9 p_OP) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE((p_A).f_T)))).f_KIND == g_T_FLOAT))
{
{ R9 rv3326 = r_FLOAT_COMPARE(p_A, p_B, p_OP);
return rv3326; }
}
{ R9 rv3327 = r_FIXED_COMPARE(p_A, p_B, p_OP);
return rv3327; }
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
{ R12 * rv3328 = NULL;
return rv3328; }
}
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_CH))).f_A))).f_KIND == g_N_NAME)))
{
{ R12 * rv3329 = NULL;
return rv3329; }
}
{
R12 * l_Y_3330; memset(&l_Y_3330, 0, sizeof l_Y_3330);
l_Y_3330 = r_LOOKUP(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_CH))).f_A))).f_NAME);
if ((l_Y_3330 == NULL))
{
{ R12 * rv3331 = NULL;
return rv3331; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3330))).f_KIND == g_Y_VAR)))
{
{ R12 * rv3332 = NULL;
return rv3332; }
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3330))).f_WITHV == ((rt_int)1LL))))
{
{ R12 * rv3333 = NULL;
return rv3333; }
}
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_3330))).f_T)))).f_KIND == g_T_REC)))
{
{ R12 * rv3334 = NULL;
return rv3334; }
}
{
R27 * l_F_3335; memset(&l_F_3335, 0, sizeof l_F_3335);
l_F_3335 = r_FIND_FIELD(r_REAL_TYPE(((*(R12 *)rt_nil_check(l_Y_3330))).f_T), ((*(R17 *)rt_nil_check(p_CH))).f_NAME);
if ((l_F_3335 == NULL))
{
{ R12 * rv3336 = NULL;
return rv3336; }
}
if ((!(((*(R27 *)rt_nil_check(l_F_3335))).f_KIND == ((rt_int)2LL))))
{
{ R12 * rv3337 = NULL;
return rv3337; }
}
}
{ R12 * rv3338 = l_Y_3330;
return rv3338; }
}
rt_raise(RT_X_INIT);
}
static R22 * r_NARROW(R22 * p_T, R9 p_TAGN, rt_int p_V) { RT_B_TICK(); 
R22 * l_N_3339; memset(&l_N_3339, 0, sizeof l_N_3339);
l_N_3339 = r_COPY_TYP(p_T);
R27 * l_F_3340; memset(&l_F_3340, 0, sizeof l_F_3340);
l_F_3340 = ((*(R22 *)rt_nil_check(p_T))).f_FIELDS;
R28 * l_A_3341; memset(&l_A_3341, 0, sizeof l_A_3341);
l_A_3341 = ((*(R22 *)rt_nil_check(p_T))).f_ARGS;
R28 * l_HEAD_3342; memset(&l_HEAD_3342, 0, sizeof l_HEAD_3342);
l_HEAD_3342 = NULL;
R28 * l_TAIL_3343; memset(&l_TAIL_3343, 0, sizeof l_TAIL_3343);
l_TAIL_3343 = NULL;
for (;;) {
if ((l_F_3340 == NULL)) goto L_end3344;
{
if (((!(((*(R27 *)rt_nil_check(l_F_3340))).f_KIND == ((rt_int)0LL))) && (!(l_A_3341 == NULL))))
{
{
R28 * l_B_3345; memset(&l_B_3345, 0, sizeof l_B_3345);
l_B_3345 = ({ R28 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
S_R28(&(*(R28 *)rt_nil_check(l_B_3345)), (*(R28 *)rt_nil_check(l_A_3341)), 0);
((*(R28 *)rt_nil_check(l_B_3345))).f_NEXT = NULL;
if (r_TEQ(((*(R27 *)rt_nil_check(l_F_3340))).f_NAME, p_TAGN))
{
((*(R28 *)rt_nil_check(l_B_3345))).f_ANYARG = 0;
S_R25(&((*(R28 *)rt_nil_check(l_B_3345))).f_MLO, r_SOME(p_V), 0);
S_R9(&((*(R28 *)rt_nil_check(l_B_3345))).f_LO, r_NUM(p_V), 0);
}
if ((l_TAIL_3343 == NULL))
{
l_HEAD_3342 = l_B_3345;
}
else
{
((*(R28 *)rt_nil_check(l_TAIL_3343))).f_NEXT = l_B_3345;
}
l_TAIL_3343 = l_B_3345;
}
l_A_3341 = ((*(R28 *)rt_nil_check(l_A_3341))).f_NEXT;
}
l_F_3340 = ((*(R27 *)rt_nil_check(l_F_3340))).f_NEXT;
}
RT_B_TICK();
} L_end3344: ;
((*(R22 *)rt_nil_check(l_N_3339))).f_ARGS = l_HEAD_3342;
{ R22 * rv3346 = l_N_3339;
return rv3346; }
rt_raise(RT_X_INIT);
}
static void r_MACHINE_CASE(R17 * p_S) { RT_B_TICK(); 
R17 * l_ARM_3347; memset(&l_ARM_3347, 0, sizeof l_ARM_3347);
l_ARM_3347 = ((*(R17 *)rt_nil_check(p_S))).f_B;
rt_int l_SAVED_3348; memset(&l_SAVED_3348, 0, sizeof l_SAVED_3348);
l_SAVED_3348 = ((*(R7 *)rt_nil_check(g_W))).f_MACHINE;
for (;;) {
if ((l_ARM_3347 == NULL)) goto L_end3349;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_ARM_3347))).f_A, r_MKN(rt_str("PDP_11", 6))))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(l_ARM_3347))).f_B, ((*(R17 *)rt_nil_check(l_ARM_3347))).f_C);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_3348;
return;
}
l_ARM_3347 = ((*(R17 *)rt_nil_check(l_ARM_3347))).f_NEXT;
}
RT_B_TICK();
} L_end3349: ;
if ((!(((*(R17 *)rt_nil_check(p_S))).f_C == NULL)))
{
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = 1;
r_CASE_ELEMENT(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R17 *)rt_nil_check(p_S))).f_D);
((*(R7 *)rt_nil_check(g_W))).f_MACHINE = l_SAVED_3348;
}
}
static R22 * r_PATHS_TYPE(void) { RT_B_TICK(); 
R22 * l_T_3350; memset(&l_T_3350, 0, sizeof l_T_3350);
l_T_3350 = r_NEW_TYP(g_T_PATHS);
S_R9(&((*(R22 *)rt_nil_check(l_T_3350))).f_NAME, r_MK(rt_str("PATH", 4)), 0);
{ R22 * rv3351 = l_T_3350;
return rv3351; }
rt_raise(RT_X_INIT);
}
static void r_PARALLEL_BLOCK(R17 * p_S) { RT_B_TICK(); 
R9 l_TD_3352; memset(&l_TD_3352, 0, sizeof l_TD_3352);
S_R9(&l_TD_3352, r_NEW_NAME(rt_str("td", 2)), 0);
R17 * l_P_3353; memset(&l_P_3353, 0, sizeof l_P_3353);
l_P_3353 = ((*(R17 *)rt_nil_check(p_S))).f_A;
if ((!(((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_R == NULL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_S))).f_LINE, rt_str("a parallel block may not be in a routine (4.6.1)", 48));
}
r_CODES(rt_str("{", 1));
r_OPEN_SCOPE();
for (;;) {
if ((l_P_3353 == NULL)) goto L_end3354;
{
{
R12 * l_Y_3355; memset(&l_Y_3355, 0, sizeof l_Y_3355);
l_Y_3355 = r_NEW_SYM(g_Y_PATH, ((*(R17 *)rt_nil_check(l_P_3353))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3355))).f_T = r_PATHS_TYPE();
((*(R12 *)rt_nil_check(l_Y_3355))).f_DECL = l_P_3353;
r_CODE(r_FMT1(rt_str("@ = rt_b_paths_new();", 21), r_NEW_OBJECT(l_Y_3355, rt_str("_path", 5))));
((*(R12 *)rt_nil_check(l_Y_3355))).f_INPUT = 1;
r_DEFINE(l_Y_3355, ((*(R17 *)rt_nil_check(l_P_3353))).f_LINE);
}
l_P_3353 = ((*(R17 *)rt_nil_check(l_P_3353))).f_NEXT;
}
RT_B_TICK();
} L_end3354: ;
r_CODE(r_FMT1(rt_str("rt_b_par @ = {0};", 17), l_TD_3352));
r_CODES(rt_str("rt_b_par_begin();", 17));
r_CODE(r_FMT2(rt_str("{ rt_frame @a; if (RT_TRY(@a)) {", 32), l_TD_3352, l_TD_3352));
l_P_3353 = ((*(R17 *)rt_nil_check(p_S))).f_A;
{
rt_int l_K_3356; memset(&l_K_3356, 0, sizeof l_K_3356);
l_K_3356 = ((rt_int)0LL);
for (;;) {
if ((l_P_3353 == NULL)) goto L_end3357;
{
l_K_3356 = rt_add(l_K_3356, ((rt_int)1LL));
r_ACTIVATE_PATH(l_P_3353, l_TD_3352, l_K_3356);
l_P_3353 = ((*(R17 *)rt_nil_check(l_P_3353))).f_NEXT;
}
RT_B_TICK();
} L_end3357: ;
}
r_CODE(r_FMT3(rt_str("RT_POP(@a); } else { RT_POP(@a); rt_b_par_abandon(&@);", 54), l_TD_3352, l_TD_3352, l_TD_3352));
r_CODES(rt_str("rt_raise(rt_xcur); } }", 22));
if (r_HAS_USER_ROUTINE(r_MKN(rt_str("PAR_BLOCK_", 10))))
{
{
R17 * l_C_3358; memset(&l_C_3358, 0, sizeof l_C_3358);
l_C_3358 = r_NEW_NODE(g_N_CALL, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
R17 * l_A_3359; memset(&l_A_3359, 0, sizeof l_A_3359);
l_A_3359 = r_NEW_NODE(g_N_APPLY, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_C_3358))).f_NAME, r_MKN(rt_str("PAR_BLOCK_", 10)), 0);
S_R9(&((*(R17 *)rt_nil_check(l_A_3359))).f_NAME, r_MKN(rt_str("$PATH_LIST", 10)), 0);
((*(R17 *)rt_nil_check(l_C_3358))).f_A = l_A_3359;
r_CODE(r_FMT1(rt_str("rt_b_par_dispatch_push(&@);", 27), l_TD_3352));
r_STMT(l_C_3358);
r_CODES(rt_str("rt_b_par_dispatch_pop();", 24));
}
}
else
{
r_CODE(r_FMT1(rt_str("rt_b_par_end(&@);", 17), l_TD_3352));
}
r_CLOSE_SCOPE();
r_CODES(rt_str("}", 1));
}
static R26 r_PATH_LIST(rt_int p_LINE) { RT_B_TICK(); 
R22 * l_PE_3360; memset(&l_PE_3360, 0, sizeof l_PE_3360);
l_PE_3360 = r_RESOLVE_USER_NAME(r_MK(rt_str("PATH_ENTRY", 10)), p_LINE);
R22 * l_R_3361; memset(&l_R_3361, 0, sizeof l_R_3361);
l_R_3361 = r_REAL_TYPE(l_PE_3360);
R22 * l_AT_3362; memset(&l_AT_3362, 0, sizeof l_AT_3362);
l_AT_3362 = r_ARRAY_OF(l_PE_3360, ((rt_int)1LL));
R9 l_C_3363; memset(&l_C_3363, 0, sizeof l_C_3363);
S_R9(&l_C_3363, r_CTYPE(l_AT_3362), 0);
R9 l_CODE__3364; memset(&l_CODE__3364, 0, sizeof l_CODE__3364);
if ((!(((*(R22 *)rt_nil_check(l_R_3361))).f_KIND == g_T_REC)))
{
r_FAIL(p_LINE, rt_str("PATH_ENTRY is the record type of PARALLEL_SUPPORT (D.7)", 55));
}
S_R9(&l_CODE__3364, r_FMT2(rt_str("({ @ a; rt_int n = rt_b_par_count(); a.lo[0] = 1; a.hi[0] = n; a.p = rt_b_array_alloc(n, sizeof *a.p); memset(a.p, 0, sizeof *a.p * (size_t)(n \? n : 1)); for (rt_int i = 0; i < n; i++) { a.p[i].@ = rt_b_bits_of_int(i + 1, 64);", 226), l_C_3363, ((*(R27 *)rt_nil_check(r_FIND_FIELD(l_R_3361, r_MKN(rt_str("PATH_ADDR", 9)))))).f_CNAME), 0);
S_R9(&l_CODE__3364, r_FMT3(rt_str("@ a.p[i].@ = rt_b_par_id(i); a.p[i].@ = rt_b_par_prio(i);", 57), l_CODE__3364, ((*(R27 *)rt_nil_check(r_FIND_FIELD(l_R_3361, r_MKN(rt_str("ACTIVATION_ID", 13)))))).f_CNAME, ((*(R27 *)rt_nil_check(r_FIND_FIELD(l_R_3361, r_MKN(rt_str("PRIORITY_LEVEL", 14)))))).f_CNAME), 0);
S_R9(&l_CODE__3364, r_FMT3(rt_str("@ a.p[i].@ = rt_b_par_connect(i, @); } a; })", 44), l_CODE__3364, ((*(R27 *)rt_nil_check(r_FIND_FIELD(l_R_3361, r_MKN(rt_str("CONNECT_NAME", 12)))))).f_CNAME, r_NUM(r_STATIC_SIZE_OR_LEN(((*(R27 *)rt_nil_check(r_FIND_FIELD(l_R_3361, r_MKN(rt_str("CONNECT_NAME", 12)))))).f_T))), 0);
{ R26 rv3365 = r_MKET(l_CODE__3364, l_AT_3362);
return rv3365; }
rt_raise(RT_X_INIT);
}
static rt_int r_STATIC_SIZE_OR_LEN(R22 * p_T) { RT_B_TICK(); 
if ((((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_MLEN).f_OK)
{
{ rt_int rv3366 = (((*(R22 *)rt_nil_check(r_REAL_TYPE(p_T)))).f_MLEN).f_V;
return rv3366; }
}
{ rt_int rv3367 = ((rt_int)32LL);
return rv3367; }
rt_raise(RT_X_INIT);
}
static R26 r_RUN_PATHS(R17 * p_E) { RT_B_TICK(); 
R26 l_V_3368; memset(&l_V_3368, 0, sizeof l_V_3368);
S_R26(&l_V_3368, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
R22 * l_T_3369; memset(&l_T_3369, 0, sizeof l_T_3369);
l_T_3369 = r_REAL_TYPE((l_V_3368).f_T);
R22 * l_R_3370; memset(&l_R_3370, 0, sizeof l_R_3370);
if (((!(((*(R22 *)rt_nil_check(l_T_3369))).f_KIND == g_T_ARR)) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("RUN_PATHS takes the ARRAY OF PATH_ENTRY its PAR_BLOCK_ was given (D.7)", 70));
}
l_R_3370 = r_REAL_TYPE(((*(R22 *)rt_nil_check(l_T_3369))).f_ELEM);
if ((!(((*(R22 *)rt_nil_check(l_R_3370))).f_KIND == g_T_REC)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("RUN_PATHS takes the ARRAY OF PATH_ENTRY its PAR_BLOCK_ was given (D.7)", 70));
}
{ R26 rv3371 = r_MKET(r_FMT4(rt_str("({ @ l = @; rt_int n = rt_b_extent(1, l.lo, l.hi); for (rt_int k = 0; k < n; k++) rt_b_par_select(rt_b_int_of_bits(l.p[k].@), l.p[k].@); rt_b_par_run(); })", 155), r_CTYPE(l_T_3369), (l_V_3368).f_C, ((*(R27 *)rt_nil_check(r_FIND_FIELD(l_R_3370, r_MKN(rt_str("PATH_ADDR", 9)))))).f_CNAME, ((*(R27 *)rt_nil_check(r_FIND_FIELD(l_R_3370, r_MKN(rt_str("PRIORITY_LEVEL", 14)))))).f_CNAME), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3371; }
rt_raise(RT_X_INIT);
}
static void r_ACTIVATE_PATH(R17 * p_P, R9 p_TD, rt_int p_K) { RT_B_TICK(); 
R9 l_FN_3372; memset(&l_FN_3372, 0, sizeof l_FN_3372);
S_R9(&l_FN_3372, r_NEW_NAME(rt_str("path_", 5)), 0);
R9 l_FT_3373; memset(&l_FT_3373, 0, sizeof l_FT_3373);
S_R9(&l_FT_3373, r_NEW_NAME(rt_str("fr_path", 7)), 0);
R12 * l_Y_3374; memset(&l_Y_3374, 0, sizeof l_Y_3374);
l_Y_3374 = r_LOOKUP(((*(R17 *)rt_nil_check(p_P))).f_NAME);
R9 l_H_3375; memset(&l_H_3375, 0, sizeof l_H_3375);
S_R9(&l_H_3375, r_OBJ_ACCESS(l_Y_3374), 0);
R9 l_IT_3376; memset(&l_IT_3376, 0, sizeof l_IT_3376);
S_R9(&l_IT_3376, r_NEW_NAME(rt_str("pi", 2)), 0);
R9 l_PRIO_3377; memset(&l_PRIO_3377, 0, sizeof l_PRIO_3377);
S_R9(&l_PRIO_3377, r_MK(rt_str("0", 1)), 0);
R9 l_START_3378; memset(&l_START_3378, 0, sizeof l_START_3378);
R22 * l_LT_3379; memset(&l_LT_3379, 0, sizeof l_LT_3379);
l_LT_3379 = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), l_FT_3373, l_FT_3373));
if ((!(((*(R17 *)rt_nil_check(p_P))).f_C == NULL)))
{
S_R9(&l_PRIO_3377, r_FMT1(rt_str("rt_b_check_priority(@)", 22), r_INT_EXPR(((*(R17 *)rt_nil_check(p_P))).f_C)), 0);
}
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R17 * l_R_3380; memset(&l_R_3380, 0, sizeof l_R_3380);
l_R_3380 = ((*(R17 *)rt_nil_check(p_P))).f_A;
R26 l_LV_3381; memset(&l_LV_3381, 0, sizeof l_LV_3381);
S_R26(&l_LV_3381, r_EXPR(((*(R17 *)rt_nil_check(l_R_3380))).f_A, NULL), 0);
R9 l_LO_3382; memset(&l_LO_3382, 0, sizeof l_LO_3382);
S_R9(&l_LO_3382, (l_LV_3381).f_C, 0);
R9 l_HI_3383; memset(&l_HI_3383, 0, sizeof l_HI_3383);
S_R9(&l_HI_3383, (r_EXPR(((*(R17 *)rt_nil_check(l_R_3380))).f_B, (l_LV_3381).f_T)).f_C, 0);
R22 * l_RT_3384; memset(&l_RT_3384, 0, sizeof l_RT_3384);
l_RT_3384 = r_REAL_TYPE((l_LV_3381).f_T);
if ((((*(R22 *)rt_nil_check(l_RT_3384))).f_KIND == g_T_ENUM))
{
if (r_IS_UNORDERED(l_RT_3384))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_str("a loop prefix over an UNORDERED type (4.6.1)", 44));
}
l_LT_3379 = ((*(R22 *)rt_nil_check(l_RT_3384))).f_BASE;
S_R9(&l_HI_3383, (r_EXPR(((*(R17 *)rt_nil_check(l_R_3380))).f_B, l_LT_3379)).f_C, 0);
}
else if (((!(((*(R22 *)rt_nil_check(l_RT_3384))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(l_RT_3384))).f_SCALE == ((rt_int)0LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_str("the range of a loop prefix is integer or enumerated (4.6.1)", 59));
}
if (((((*(R17 *)rt_nil_check(l_R_3380))).f_IV == ((rt_int)1LL)) || (((*(R17 *)rt_nil_check(l_R_3380))).f_IV == ((rt_int)3LL))))
{
S_R9(&l_LO_3382, r_FMT1(rt_str("(@) + 1", 7), l_LO_3382), 0);
}
if ((((*(R17 *)rt_nil_check(l_R_3380))).f_IV >= ((rt_int)2LL)))
{
S_R9(&l_HI_3383, r_FMT1(rt_str("(@) - 1", 7), l_HI_3383), 0);
}
r_CODE(r_FMT3(rt_str("rt_b_paths_range(&@, @, @);", 27), l_H_3375, l_LO_3382, l_HI_3383));
r_CODE(r_FMT2(rt_str("@@++) {", 7), r_FMT4(rt_str("for (rt_int @ = @.lo; @ <= @.hi; ", 33), l_IT_3376, l_H_3375, l_IT_3376, l_H_3375), l_IT_3376));
}
}
else
{
r_CODE(r_FMT1(rt_str("{ rt_int @ = 0;", 15), l_IT_3376));
}
r_CODE(r_FMT2(rt_str("@ *f = rt_alloc(sizeof *f); f->up = @;", 38), l_FT_3373, r_UP_FRAME()));
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT2(rt_str("f->l_@ = @;", 11), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME), l_IT_3376));
}
if ((!(((*(R17 *)rt_nil_check(p_P))).f_D == NULL)))
{
{
R26 l_V_3385; memset(&l_V_3385, 0, sizeof l_V_3385);
r_OPEN_SCOPE();
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_3386; memset(&l_I_3386, 0, sizeof l_I_3386);
l_I_3386 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_3386))).f_T = l_LT_3379;
((*(R12 *)rt_nil_check(l_I_3386))).f_INPUT = 1;
S_R9(&((*(R12 *)rt_nil_check(l_I_3386))).f_ACCESS, l_IT_3376, 0);
((*(R12 *)rt_nil_check(l_I_3386))).f_LEVEL = rt_neg(((rt_int)1LL));
r_DEFINE(l_I_3386, ((*(R17 *)rt_nil_check(p_P))).f_LINE);
}
}
S_R26(&l_V_3385, r_EXPR(((*(R17 *)rt_nil_check(p_P))).f_D, NULL), 0);
r_CLOSE_SCOPE();
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3385).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_str("CONNECT names a semaphore (4.6.1)", 33));
}
if ((!r_IMPLEMENTATION_SEMAPHORE(((*(R17 *)rt_nil_check(p_P))).f_D)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_P))).f_LINE, rt_b_cat(rt_str("CONNECT names an implementation-defined semaphore, of the machine's ", 68), rt_str("library segment (4.6.1)", 23)));
}
r_CODE(r_FMT1(rt_str("rt_b_connect(@);", 16), (l_V_3385).f_C));
}
}
S_R9(&l_START_3378, r_FMT4(rt_str("rt_b_path_start(&@, @, @, f, &", 30), l_H_3375, l_IT_3376, l_FN_3372, p_TD), 0);
S_R9(&l_PRIO_3377, r_CAT(l_PRIO_3377, r_FMT4(rt_str("); rt_b_path_info(&@, @, @, @", 29), p_TD, r_NUM(p_K), l_IT_3376, r_CONNECT_NAME(p_P))), 0);
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
r_CODE(r_FMT4(rt_str("@@, @); if (@ == ", 17), l_START_3378, p_TD, l_PRIO_3377, l_IT_3376));
r_CODE(r_FMT1(rt_str("@.hi) break; }", 14), l_H_3375));
}
else
{
r_CODE(r_FMT3(rt_str("@@, @); }", 9), l_START_3378, p_TD, l_PRIO_3377));
}
r_PATH_BODY(p_P, l_FN_3372, l_FT_3373, l_LT_3379);
}
static rt_int r_IMPLEMENTATION_SEMAPHORE(R17 * p_E) { RT_B_TICK(); 
R17 * l_R_3387; memset(&l_R_3387, 0, sizeof l_R_3387);
l_R_3387 = p_E;
for (;;) {
if (((((*(R17 *)rt_nil_check(l_R_3387))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_3387))).f_KIND == g_N_APPLY))) goto L_end3388;
{
if (((!(((*(R17 *)rt_nil_check(l_R_3387))).f_KIND == g_N_INDEX)) && (!(((*(R17 *)rt_nil_check(l_R_3387))).f_KIND == g_N_FIELD))))
{
{ rt_int rv3389 = 0;
return rv3389; }
}
l_R_3387 = ((*(R17 *)rt_nil_check(l_R_3387))).f_A;
}
RT_B_TICK();
} L_end3388: ;
{
R12 * l_Y_3390; memset(&l_Y_3390, 0, sizeof l_Y_3390);
l_Y_3390 = r_ORIG_LOOKUP(((*(R17 *)rt_nil_check(l_R_3387))).f_NAME);
if ((l_Y_3390 == NULL))
{
{ rt_int rv3391 = 0;
return rv3391; }
}
if ((((*(R12 *)rt_nil_check(l_Y_3390))).f_HOME == NULL))
{
{ rt_int rv3392 = 0;
return rv3392; }
}
{ rt_int rv3393 = r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_LIBSEGS, ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3390))).f_HOME))).f_NAME);
return rv3393; }
}
rt_raise(RT_X_INIT);
}
static R9 r_CONNECT_NAME(R17 * p_P) { RT_B_TICK(); 
R17 * l_R_3394; memset(&l_R_3394, 0, sizeof l_R_3394);
l_R_3394 = ((*(R17 *)rt_nil_check(p_P))).f_D;
if ((l_R_3394 == NULL))
{
{ R9 rv3395 = r_MK(rt_str("\"\"", 2));
return rv3395; }
}
for (;;) {
if (((((*(R17 *)rt_nil_check(l_R_3394))).f_KIND == g_N_NAME) || (((*(R17 *)rt_nil_check(l_R_3394))).f_KIND == g_N_APPLY))) goto L_end3396;
{
if (((!(((*(R17 *)rt_nil_check(l_R_3394))).f_KIND == g_N_INDEX)) && (!(((*(R17 *)rt_nil_check(l_R_3394))).f_KIND == g_N_FIELD))))
{
{ R9 rv3397 = r_MK(rt_str("\"\"", 2));
return rv3397; }
}
l_R_3394 = ((*(R17 *)rt_nil_check(l_R_3394))).f_A;
}
RT_B_TICK();
} L_end3396: ;
{ R9 rv3398 = r_CSTRING(((*(R17 *)rt_nil_check(l_R_3394))).f_NAME);
return rv3398; }
rt_raise(RT_X_INIT);
}
static R9 r_UP_FRAME(void) { RT_B_TICK(); 
if ((((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)))
{
{ R9 rv3399 = r_MK(rt_str("NULL", 4));
return rv3399; }
}
{ R9 rv3400 = r_MK(rt_str("F", 1));
return rv3400; }
rt_raise(RT_X_INIT);
}
static void r_PATH_BODY(R17 * p_P, R9 p_FN, R9 p_FT, R22 * p_LT) { RT_B_TICK(); 
R14 l_SAVED_CODE_3401; memset(&l_SAVED_CODE_3401, 0, sizeof l_SAVED_CODE_3401);
S_R14(&l_SAVED_CODE_3401, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R18 * l_SAVED_CTXS_3402; memset(&l_SAVED_CTXS_3402, 0, sizeof l_SAVED_CTXS_3402);
l_SAVED_CTXS_3402 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R19 * l_OUTER_3403; memset(&l_OUTER_3403, 0, sizeof l_OUTER_3403);
l_OUTER_3403 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R17 * l_H_3404; memset(&l_H_3404, 0, sizeof l_H_3404);
l_H_3404 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_A;
R19 * l_CS_3405; memset(&l_CS_3405, 0, sizeof l_CS_3405);
l_CS_3405 = ({ R19 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz; })); p; });
R9 l_UPT_3406; memset(&l_UPT_3406, 0, sizeof l_UPT_3406);
S_R9(&l_UPT_3406, r_MK(rt_str("void", 4)), 0);
if ((((*(R19 *)rt_nil_check(l_OUTER_3403))).f_LEVEL > ((rt_int)0LL)))
{
S_R9(&l_UPT_3406, ((*(R19 *)rt_nil_check(l_OUTER_3403))).f_FTYPE, 0);
}
S_R19(&(*(R19 *)rt_nil_check(l_CS_3405)), ({ R19 rc3407; memset(&rc3407, 0, sizeof rc3407);  rc3407.f_LEVEL = rt_add(((*(R19 *)rt_nil_check(l_OUTER_3403))).f_LEVEL, ((rt_int)1LL)); rc3407.f_R = NULL; rc3407.f_FRAMED = 1; S_R9(&rc3407.f_FTYPE, p_FT, 0); S_R14(&rc3407.f_FIELDS, ({ R14 rc3408; memset(&rc3408, 0, sizeof rc3408);  rc3408.f_HEAD = NULL; rc3408.f_TAIL = NULL; rc3408; }), 0); rc3407.f_UP = l_OUTER_3403; rc3407.f_IMPORTS = ((*(R17 *)rt_nil_check(l_H_3404))).f_B; rc3407.f_SIGNALS = ((*(R17 *)rt_nil_check(l_H_3404))).f_A; rc3407.f_RESULT = NULL; rc3407.f_IS_PATH = 1; S_R9(&rc3407.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3407; }), 0);
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), l_UPT_3406), &((*(R19 *)rt_nil_check(l_CS_3405))).f_FIELDS);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_3405;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3409; memset(&rc3409, 0, sizeof rc3409);  rc3409.f_HEAD = NULL; rc3409.f_TAIL = NULL; rc3409; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R17 *)rt_nil_check(l_H_3404))).f_B, ((*(R17 *)rt_nil_check(l_H_3404))).f_A, ((*(R17 *)rt_nil_check(p_P))).f_NAME);
r_OPEN_SCOPE();
if ((((*(R17 *)rt_nil_check(p_P))).f_FL == ((rt_int)1LL)))
{
{
R12 * l_I_3410; memset(&l_I_3410, 0, sizeof l_I_3410);
l_I_3410 = r_NEW_SYM(g_Y_CONST, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME);
((*(R12 *)rt_nil_check(l_I_3410))).f_T = p_LT;
((*(R12 *)rt_nil_check(l_I_3410))).f_INPUT = 1;
S_R9(&((*(R12 *)rt_nil_check(l_I_3410))).f_FIELD, r_FMT1(rt_str("l_@", 3), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
S_R9(&((*(R12 *)rt_nil_check(l_I_3410))).f_ACCESS, r_FMT1(rt_str("F->l_@", 6), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME)), 0);
r_APPEND(r_FMT1(rt_str(" rt_int l_@;", 12), r_CID(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_P))).f_E))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3405))).f_FIELDS);
r_DEFINE(l_I_3410, ((*(R17 *)rt_nil_check(p_P))).f_LINE);
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
R17 * l_L_3411; memset(&l_L_3411, 0, sizeof l_L_3411);
l_L_3411 = ((*(R17 *)rt_nil_check(l_H_3404))).f_A;
R9 l_C_3412; memset(&l_C_3412, 0, sizeof l_C_3412);
S_R9(&l_C_3412, r_MK(rt_str("0", 1)), 0);
for (;;) {
if ((l_L_3411 == NULL)) goto L_end3413;
{
S_R9(&l_C_3412, r_FMT2(rt_str("@ || rt_xcur == @", 17), l_C_3412, r_EXC_NAME(((*(R17 *)rt_nil_check(l_L_3411))).f_NAME)), 0);
l_L_3411 = ((*(R17 *)rt_nil_check(l_L_3411))).f_NEXT;
}
RT_B_TICK();
} L_end3413: ;
r_EMIT(g_O_FUNCS, r_FMT1(rt_str("@); } }", 7), l_C_3412));
}
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), p_FT, r_JOIN_BUF(((*(R19 *)rt_nil_check(l_CS_3405))).f_FIELDS)));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_3403;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3401, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_3402;
}
static R9 r_JOIN_BUF(R14 p_B) { RT_B_TICK(); 
R15 * l_C_3414; memset(&l_C_3414, 0, sizeof l_C_3414);
l_C_3414 = (p_B).f_HEAD;
R9 l_R_3415; memset(&l_R_3415, 0, sizeof l_R_3415);
S_R9(&l_R_3415, r_MK(rt_str("", 0)), 0);
for (;;) {
if ((l_C_3414 == NULL)) goto L_end3416;
{
S_R9(&l_R_3415, r_CAT(l_R_3415, ((*(R15 *)rt_nil_check(l_C_3414))).f_T), 0);
l_C_3414 = ((*(R15 *)rt_nil_check(l_C_3414))).f_NEXT;
}
RT_B_TICK();
} L_end3416: ;
{ R9 rv3417 = l_R_3415;
return rv3417; }
rt_raise(RT_X_INIT);
}
static R9 r_PATH_REF(R17 * p_E) { RT_B_TICK(); 
R9 l_NAME_3418; memset(&l_NAME_3418, 0, sizeof l_NAME_3418);
S_R9(&l_NAME_3418, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
R9 l_SUB_3419; memset(&l_SUB_3419, 0, sizeof l_SUB_3419);
S_R9(&l_SUB_3419, r_MK(rt_str("0", 1)), 0);
if ((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY))
{
if (((((*(R17 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a path reference has one subscript (4.6.3)", 42));
}
S_R9(&l_SUB_3419, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A), 0);
}
else if ((!(((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_NAME)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a path name expected", 20));
}
{
R12 * l_Y_3420; memset(&l_Y_3420, 0, sizeof l_Y_3420);
l_Y_3420 = r_LOOKUP(l_NAME_3418);
if ((l_Y_3420 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("unknown path ", 13), l_NAME_3418);
}
if ((!(((*(R12 *)rt_nil_check(l_Y_3420))).f_KIND == g_Y_PATH)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("not a path: ", 12), l_NAME_3418);
}
if (((((*(R17 *)rt_nil_check(p_E))).f_KIND == g_N_APPLY) && (!(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3420))).f_DECL))).f_FL == ((rt_int)1LL)))))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("a subscript only for a path with a loop prefix (4.6.3)", 54));
}
{ R9 rv3421 = r_FMT2(rt_str("rt_b_paths_at(&@, @)", 20), r_OBJ_ACCESS(l_Y_3420), l_SUB_3419);
return rv3421; }
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
R9 l_NAME_3422; memset(&l_NAME_3422, 0, sizeof l_NAME_3422);
S_R9(&l_NAME_3422, ((*(R17 *)rt_nil_check(p_E))).f_NAME, 0);
rt_int l_LINE_3423; memset(&l_LINE_3423, 0, sizeof l_LINE_3423);
l_LINE_3423 = ((*(R17 *)rt_nil_check(p_E))).f_LINE;
if (r_TEQS(l_NAME_3422, rt_str("WAIT", 4)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)1LL));
{
R26 l_V_3424; memset(&l_V_3424, 0, sizeof l_V_3424);
S_R26(&l_V_3424, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3424).f_T)))).f_KIND == g_T_INT)))
{
r_FAIL(l_LINE_3423, rt_str("WAIT takes a fixed point time in seconds (4.6.2)", 48));
}
{ R26 rv3425 = r_MKET(r_FMT2(rt_str("rt_b_wait(@, @)", 15), (l_V_3424).f_C, r_NUM(((*(R22 *)rt_nil_check((l_V_3424).f_T))).f_SCALE)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3425; }
}
}
else if (r_TEQS(l_NAME_3422, rt_str("PRIORITY", 8)))
{
r_NEED_ARGS(p_E, ((rt_int)1LL), ((rt_int)2LL));
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))
{
{ R26 rv3426 = r_MKET(r_FMT1(rt_str("rt_b_priority(NULL, @)", 22), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3426; }
}
{ R26 rv3427 = r_MKET(r_FMT2(rt_str("rt_b_priority(@, @)", 19), r_PATH_REF(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT), r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3427; }
}
else if (r_TEQS(l_NAME_3422, rt_str("CLOCK", 5)))
{
r_NEED_ARGS(p_E, ((rt_int)0LL), ((rt_int)1LL));
if ((((*(R17 *)rt_nil_check(p_E))).f_A == NULL))
{
{ R26 rv3428 = r_MKET(r_MK(rt_str("rt_b_clock(NULL)", 16)), r_INT_TYPE(((rt_int)20LL)));
return rv3428; }
}
{ R26 rv3429 = r_MKET(r_FMT1(rt_str("rt_b_clock(@)", 13), r_PATH_REF(((*(R17 *)rt_nil_check(p_E))).f_A)), r_INT_TYPE(((rt_int)20LL)));
return rv3429; }
}
else if ((r_TEQS(l_NAME_3422, rt_str("REQUEST", 7)) || r_TEQS(l_NAME_3422, rt_str("RELEASE", 7))))
{
if ((((!(((*(R17 *)rt_nil_check(p_E))).f_A == NULL)) || (((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAILT(l_LINE_3423, rt_str("the semaphore is passed inout: (# S) (4.6.6): ", 46), l_NAME_3422);
}
{
R26 l_V_3430; memset(&l_V_3430, 0, sizeof l_V_3430);
S_R26(&l_V_3430, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, NULL), 0);
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3430).f_T)))).f_KIND == g_T_SEM)))
{
r_FAIL(l_LINE_3423, rt_str("REQUEST and RELEASE take a semaphore variable", 45));
}
if ((!(l_V_3430).f_LVAL))
{
r_FAIL(l_LINE_3423, rt_str("the semaphore is passed inout: it must be a variable", 52));
}
if (r_TEQS(l_NAME_3422, rt_str("REQUEST", 7)))
{
{ R26 rv3431 = r_MKET(r_FMT1(rt_str("rt_b_request(@)", 15), (l_V_3430).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3431; }
}
{ R26 rv3432 = r_MKET(r_FMT1(rt_str("rt_b_release(@)", 15), (l_V_3430).f_C), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3432; }
}
}
else if (r_TEQS(l_NAME_3422, rt_str("START_IO", 8)))
{
r_REQUIRE_MACHINE(l_LINE_3423);
{ R26 rv3433 = r_START_IO_CALL(p_E);
return rv3433; }
}
else if (r_TEQS(l_NAME_3422, rt_str("INTERRUPT_AFTER", 15)))
{
r_REQUIRE_MACHINE(l_LINE_3423);
if (((((((*(R17 *)rt_nil_check(p_E))).f_A == NULL) || (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_E))).f_A))).f_NEXT == NULL))) || (((*(R17 *)rt_nil_check(p_E))).f_B == NULL)) || (!(((*(R17 *)rt_nil_check(p_E))).f_C == NULL))))
{
r_FAIL(l_LINE_3423, rt_str("INTERRUPT_AFTER (MICROSECONDS # S)", 34));
}
{
R26 l_V_3434; memset(&l_V_3434, 0, sizeof l_V_3434);
S_R26(&l_V_3434, r_EXPR(((*(R17 *)rt_nil_check(p_E))).f_B, NULL), 0);
if (((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3434).f_T)))).f_KIND == g_T_SEM)) || (!(l_V_3434).f_LVAL)))
{
r_FAIL(l_LINE_3423, rt_str("INTERRUPT_AFTER (MICROSECONDS # S): S is a semaphore variable", 61));
}
{ R26 rv3435 = r_MKET(r_FMT2(rt_str("rt_b_interrupt_after(@, @)", 26), (l_V_3434).f_C, r_INT_EXPR(((*(R17 *)rt_nil_check(p_E))).f_A)), ((*(R7 *)rt_nil_check(g_W))).f_TY_VOID);
return rv3435; }
}
}
r_FAILT(l_LINE_3423, rt_str("unknown routine ", 16), l_NAME_3422);
rt_raise(RT_X_INIT);
}
static R26 r_START_IO_CALL(R17 * p_E) { RT_B_TICK(); 
R29 * l_ARGS_3436; memset(&l_ARGS_3436, 0, sizeof l_ARGS_3436);
l_ARGS_3436 = r_CALL_ARGS(p_E);
R12 * l_Y_3437; memset(&l_Y_3437, 0, sizeof l_Y_3437);
l_Y_3437 = r_FIND_ROUTINE(((*(R17 *)rt_nil_check(p_E))).f_NAME, l_ARGS_3436, ((*(R17 *)rt_nil_check(p_E))).f_LINE, 1);
R26 l_R_3438; memset(&l_R_3438, 0, sizeof l_R_3438);
if ((l_Y_3437 == NULL))
{
r_FAIL(((*(R17 *)rt_nil_check(p_E))).f_LINE, rt_str("no START_IO case of this implementation fits these arguments (4.8.1)", 68));
}
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 1;
S_R26(&l_R_3438, r_CALL_SYM(l_Y_3437, l_ARGS_3436, ((*(R17 *)rt_nil_check(p_E))).f_LINE), 0);
((*(R7 *)rt_nil_check(g_W))).f_START_IO = 0;
{ R26 rv3439 = l_R_3438;
return rv3439; }
rt_raise(RT_X_INIT);
}
static void r_ENTER_ISCOPE(R17 * p_IMPORTS, R17 * p_SIGNALS, R9 p_NAME) { RT_B_TICK(); 
R20 * l_I_3440; memset(&l_I_3440, 0, sizeof l_I_3440);
l_I_3440 = ({ R20 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; })); p; });
((*(R7 *)rt_nil_check(g_W))).f_NSCOPES = rt_add(((*(R7 *)rt_nil_check(g_W))).f_NSCOPES, ((rt_int)1LL));
S_R20(&(*(R20 *)rt_nil_check(l_I_3440)), ({ R20 rc3441; memset(&rc3441, 0, sizeof rc3441);  rc3441.f_ID = ((*(R7 *)rt_nil_check(g_W))).f_NSCOPES; rc3441.f_IMPORTS = p_IMPORTS; rc3441.f_SIGNALS = p_SIGNALS; S_R9(&rc3441.f_NAME, p_NAME, 0); rc3441.f_UP = ((*(R7 *)rt_nil_check(g_W))).f_IS; rc3441; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_IS = l_I_3440;
}
static void r_LEAVE_ISCOPE(void) { RT_B_TICK(); 
((*(R7 *)rt_nil_check(g_W))).f_IS = ((*(R20 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_IS))).f_UP;
}
static R9 r_ROUTINE_CNAME(R9 p_NAME) { RT_B_TICK(); 
R9 l_BASE0_3442; memset(&l_BASE0_3442, 0, sizeof l_BASE0_3442);
S_R9(&l_BASE0_3442, r_FMT1(rt_str("r_@", 3), r_CID(p_NAME)), 0);
rstr l_S_3443; memset(&l_S_3443, 0, sizeof l_S_3443);
l_S_3443 = rt_b_str_new((l_BASE0_3442).f_LEN, 0);
rt_b_assign(&l_S_3443, r_STR(l_BASE0_3442, (l_BASE0_3442).f_LEN));
R9 l_BASE_3444; memset(&l_BASE_3444, 0, sizeof l_BASE_3444);
S_R9(&l_BASE_3444, l_BASE0_3442, 0);
R17 * l_N_3445; memset(&l_N_3445, 0, sizeof l_N_3445);
l_N_3445 = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
{ rt_int it3447_lo = ((rt_int)0LL), it3447_hi = rt_sub((l_BASE_3444).f_LEN, ((rt_int)1LL));
for (rt_int it3447 = it3447_lo; it3447 <= it3447_hi; it3447++) {
{
if (rt_b_eq(rt_b_slice(l_S_3443, it3447, it3447), rt_str("$", 1)))
{
S_R9(&l_BASE_3444, r_MK(rt_b_cat(rt_b_cat(rt_b_slice(l_S_3443, ((rt_int)0LL), rt_sub(it3447, ((rt_int)1LL))), rt_str("__", 2)), rt_b_slice(l_S_3443, rt_add(it3447, ((rt_int)1LL)), rt_sub((l_BASE_3444).f_LEN, ((rt_int)1LL))))), 0);
}
}
RT_B_TICK();
if (it3447 == it3447_hi) break;
} } L_end3446: ;
for (;;) {
if ((l_N_3445 == NULL)) goto L_end3448;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_N_3445))).f_NAME, l_BASE_3444))
{
{ R9 rv3449 = r_FMT2(rt_str("@_@", 3), l_BASE_3444, r_NEW_NAME(rt_str("", 0)));
return rv3449; }
}
l_N_3445 = ((*(R17 *)rt_nil_check(l_N_3445))).f_NEXT;
}
RT_B_TICK();
} L_end3448: ;
l_N_3445 = r_NEW_NODE(g_N_IDENT, ((rt_int)0LL));
S_R9(&((*(R17 *)rt_nil_check(l_N_3445))).f_NAME, l_BASE_3444, 0);
((*(R17 *)rt_nil_check(l_N_3445))).f_NEXT = ((*(R7 *)rt_nil_check(g_W))).f_CNAMES;
((*(R7 *)rt_nil_check(g_W))).f_CNAMES = l_N_3445;
{ R9 rv3450 = l_BASE_3444;
return rv3450; }
rt_raise(RT_X_INIT);
}
static rt_int r_NEEDS_FRAME(R17 * p_B) { RT_B_TICK(); 
if ((p_B == NULL))
{
{ rt_int rv3451 = 0;
return rv3451; }
}
if ((!(((*(R17 *)rt_nil_check(p_B))).f_C == NULL)))
{
{ rt_int rv3452 = 1;
return rv3452; }
}
{ rt_int rv3453 = r_HAS_HANDLERS(((*(R17 *)rt_nil_check(p_B))).f_B);
return rv3453; }
rt_raise(RT_X_INIT);
}
static rt_int r_HAS_HANDLERS(R17 * p_S0) { RT_B_TICK(); 
R17 * l_S_3454; memset(&l_S_3454, 0, sizeof l_S_3454);
l_S_3454 = p_S0;
for (;;) {
if ((l_S_3454 == NULL)) goto L_end3455;
{
if (((((*(R17 *)rt_nil_check(l_S_3454))).f_KIND == g_N_EXCEPT) || (((*(R17 *)rt_nil_check(l_S_3454))).f_KIND == g_N_PAR)))
{
{ rt_int rv3456 = 1;
return rv3456; }
}
if (((((*(R17 *)rt_nil_check(l_S_3454))).f_KIND == g_N_LABELED) || (((*(R17 *)rt_nil_check(l_S_3454))).f_KIND == g_N_WITH)))
{
if ((r_HAS_HANDLERS(((*(R17 *)rt_nil_check(l_S_3454))).f_A) || r_HAS_HANDLERS(((*(R17 *)rt_nil_check(l_S_3454))).f_B)))
{
{ rt_int rv3457 = 1;
return rv3457; }
}
}
else if ((((*(R17 *)rt_nil_check(l_S_3454))).f_KIND == g_N_BLOCK))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3454))).f_A))).f_B))
{
{ rt_int rv3458 = 1;
return rv3458; }
}
}
else if (((((*(R17 *)rt_nil_check(l_S_3454))).f_KIND == g_N_LOOP) || (((*(R17 *)rt_nil_check(l_S_3454))).f_KIND == g_N_FOR)))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3454))).f_B))).f_B))
{
{ rt_int rv3459 = 1;
return rv3459; }
}
}
else if (((((*(R17 *)rt_nil_check(l_S_3454))).f_KIND == g_N_IF) || (((*(R17 *)rt_nil_check(l_S_3454))).f_KIND == g_N_CASE)))
{
{
R17 * l_A_3460; memset(&l_A_3460, 0, sizeof l_A_3460);
l_A_3460 = ((*(R17 *)rt_nil_check(l_S_3454))).f_A;
if ((((*(R17 *)rt_nil_check(l_S_3454))).f_KIND == g_N_CASE))
{
l_A_3460 = ((*(R17 *)rt_nil_check(l_S_3454))).f_B;
if ((!(((*(R17 *)rt_nil_check(l_S_3454))).f_D == NULL)))
{
{ rt_int rv3461 = 1;
return rv3461; }
}
if ((!(((*(R17 *)rt_nil_check(l_S_3454))).f_C == NULL)))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3454))).f_C))).f_B))
{
{ rt_int rv3462 = 1;
return rv3462; }
}
}
}
else if ((!(((*(R17 *)rt_nil_check(l_S_3454))).f_B == NULL)))
{
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3454))).f_B))).f_B))
{
{ rt_int rv3463 = 1;
return rv3463; }
}
}
for (;;) {
if ((l_A_3460 == NULL)) goto L_end3464;
{
if ((!(((*(R17 *)rt_nil_check(l_A_3460))).f_C == NULL)))
{
{ rt_int rv3465 = 1;
return rv3465; }
}
if (r_HAS_HANDLERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_A_3460))).f_B))).f_B))
{
{ rt_int rv3466 = 1;
return rv3466; }
}
l_A_3460 = ((*(R17 *)rt_nil_check(l_A_3460))).f_NEXT;
}
RT_B_TICK();
} L_end3464: ;
}
}
l_S_3454 = ((*(R17 *)rt_nil_check(l_S_3454))).f_NEXT;
}
RT_B_TICK();
} L_end3455: ;
{ rt_int rv3467 = 0;
return rv3467; }
rt_raise(RT_X_INIT);
}
static void r_DECLARE_ROUTINE_SYM(R17 * p_R) { RT_B_TICK(); 
R12 * l_Y_3468; memset(&l_Y_3468, 0, sizeof l_Y_3468);
l_Y_3468 = r_NEW_SYM(g_Y_ROUTINE, ((*(R17 *)rt_nil_check(p_R))).f_NAME);
R9 l_RN_3469; memset(&l_RN_3469, 0, sizeof l_RN_3469);
S_R9(&l_RN_3469, ((*(R17 *)rt_nil_check(p_R))).f_NAME, 0);
rstr l_S_3470; memset(&l_S_3470, 0, sizeof l_S_3470);
l_S_3470 = rt_b_str_new((l_RN_3469).f_LEN, 0);
rt_b_assign(&l_S_3470, r_STR(l_RN_3469, (l_RN_3469).f_LEN));
((*(R12 *)rt_nil_check(l_Y_3468))).f_DECL = p_R;
S_R9(&((*(R12 *)rt_nil_check(l_Y_3468))).f_ACCESS, r_ROUTINE_CNAME(((*(R17 *)rt_nil_check(p_R))).f_NAME), 0);
if ((((((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL == ((rt_int)0LL)) && ((((*(R7 *)rt_nil_check(g_W))).f_SEPSEG).f_LEN > ((rt_int)0LL))) && (!(((*(R17 *)rt_nil_check(p_R))).f_FL == ((rt_int)1LL)))))
{
((*(R7 *)rt_nil_check(g_W))).f_SEPR = rt_add(((*(R7 *)rt_nil_check(g_W))).f_SEPR, ((rt_int)1LL));
S_R9(&((*(R12 *)rt_nil_check(l_Y_3468))).f_ACCESS, r_FMT3(rt_str("bs_@_r@_@", 9), r_CID(((*(R7 *)rt_nil_check(g_W))).f_SEPSEG), r_NUM(((*(R7 *)rt_nil_check(g_W))).f_SEPR), r_CID(((*(R17 *)rt_nil_check(p_R))).f_NAME)), 0);
((*(R12 *)rt_nil_check(l_Y_3468))).f_LINKAGE = ((rt_int)1LL);
if (((*(R7 *)rt_nil_check(g_W))).f_EXTSEG)
{
((*(R12 *)rt_nil_check(l_Y_3468))).f_LINKAGE = ((rt_int)2LL);
}
}
((*(R12 *)rt_nil_check(l_Y_3468))).f_FRAMED = r_NEEDS_FRAME(((*(R17 *)rt_nil_check(p_R))).f_C);
if ((((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3468))).f_FIELD, ((*(R19 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CS))).f_FTYPE, 0);
}
r_DEFINE(l_Y_3468, ((*(R17 *)rt_nil_check(p_R))).f_LINE);
{ rt_int it3472_lo = ((rt_int)1LL), it3472_hi = rt_sub((((*(R17 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)2LL));
for (rt_int it3472 = it3472_lo; it3472 <= it3472_hi; it3472++) {
{
if (rt_b_eq(rt_b_slice(l_S_3470, it3472, it3472), rt_str("$", 1)))
{
S_R9(&((*(R12 *)rt_nil_check(l_Y_3468))).f_PREFIX, r_MKN(rt_b_slice(l_S_3470, ((rt_int)0LL), rt_sub(it3472, ((rt_int)1LL)))), 0);
{
R12 * l_SHORT_3473; memset(&l_SHORT_3473, 0, sizeof l_SHORT_3473);
l_SHORT_3473 = r_NEW_SYM(g_Y_ROUTINE, r_MKN(rt_b_slice(l_S_3470, rt_add(it3472, ((rt_int)1LL)), rt_sub((((*(R17 *)rt_nil_check(p_R))).f_NAME).f_LEN, ((rt_int)1LL)))));
((*(R12 *)rt_nil_check(l_SHORT_3473))).f_ORIG = l_Y_3468;
S_R9(&((*(R12 *)rt_nil_check(l_SHORT_3473))).f_PREFIX, ((*(R12 *)rt_nil_check(l_Y_3468))).f_PREFIX, 0);
((*(R12 *)rt_nil_check(l_SHORT_3473))).f_DECL = p_R;
r_DEFINE(l_SHORT_3473, ((*(R17 *)rt_nil_check(p_R))).f_LINE);
}
goto L_end3471;
}
}
RT_B_TICK();
if (it3472 == it3472_hi) break;
} } L_end3471: ;
}
static void r_DECLARE_MEMBERS(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3474; memset(&l_R_3474, 0, sizeof l_R_3474);
l_R_3474 = p_RS;
for (;;) {
if ((l_R_3474 == NULL)) goto L_end3475;
{
if ((((*(R17 *)rt_nil_check(l_R_3474))).f_KIND == g_N_MODULE))
{
r_PREDECLARE_MODULE(l_R_3474);
}
else
{
r_DECLARE_ROUTINE_SYM(l_R_3474);
}
l_R_3474 = ((*(R17 *)rt_nil_check(l_R_3474))).f_NEXT;
}
RT_B_TICK();
} L_end3475: ;
}
static void r_ROUTINE_HEADERS(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3476; memset(&l_R_3476, 0, sizeof l_R_3476);
l_R_3476 = p_RS;
for (;;) {
if ((l_R_3476 == NULL)) goto L_end3477;
{
if ((((*(R17 *)rt_nil_check(l_R_3476))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3478; memset(&l_M_3478, 0, sizeof l_M_3478);
l_M_3478 = r_FIND_DECL(l_R_3476);
r_ENTER_MODULE(l_M_3478);
r_ROUTINE_HEADERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3476))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3478);
}
}
else
{
{
R12 * l_Y_3479; memset(&l_Y_3479, 0, sizeof l_Y_3479);
l_Y_3479 = r_FIND_DECL(l_R_3476);
r_ROUTINE_HEADER(l_Y_3479);
}
}
l_R_3476 = ((*(R17 *)rt_nil_check(l_R_3476))).f_NEXT;
}
RT_B_TICK();
} L_end3477: ;
}
static void r_DISTINCT_SIGNATURES(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3480; memset(&l_R_3480, 0, sizeof l_R_3480);
l_R_3480 = p_RS;
for (;;) {
if ((l_R_3480 == NULL)) goto L_end3481;
{
if ((((*(R17 *)rt_nil_check(l_R_3480))).f_KIND == g_N_ROUTINE))
{
{
R17 * l_Q_3482; memset(&l_Q_3482, 0, sizeof l_Q_3482);
l_Q_3482 = ((*(R17 *)rt_nil_check(l_R_3480))).f_NEXT;
for (;;) {
if ((l_Q_3482 == NULL)) goto L_end3483;
{
if (((((*(R17 *)rt_nil_check(l_Q_3482))).f_KIND == g_N_ROUTINE) && r_TEQ(((*(R17 *)rt_nil_check(l_Q_3482))).f_NAME, ((*(R17 *)rt_nil_check(l_R_3480))).f_NAME)))
{
{
R12 * l_A_3484; memset(&l_A_3484, 0, sizeof l_A_3484);
l_A_3484 = r_FIND_DECL(l_R_3480);
R12 * l_B_3485; memset(&l_B_3485, 0, sizeof l_B_3485);
l_B_3485 = r_FIND_DECL(l_Q_3482);
r_ROUTINE_HEADER(l_A_3484);
r_ROUTINE_HEADER(l_B_3485);
if (r_SAME_SIGNATURE(l_A_3484, l_B_3485))
{
r_FAILT(((*(R17 *)rt_nil_check(l_Q_3482))).f_LINE, rt_str("two routines of one scope with the same signature (4.1): ", 57), ((*(R17 *)rt_nil_check(l_Q_3482))).f_NAME);
}
}
}
l_Q_3482 = ((*(R17 *)rt_nil_check(l_Q_3482))).f_NEXT;
}
RT_B_TICK();
} L_end3483: ;
}
}
l_R_3480 = ((*(R17 *)rt_nil_check(l_R_3480))).f_NEXT;
}
RT_B_TICK();
} L_end3481: ;
}
static R12 * r_FIND_DECL(R17 * p_D) { RT_B_TICK(); 
R12 * l_Y_3486; memset(&l_Y_3486, 0, sizeof l_Y_3486);
l_Y_3486 = r_LOOKUP(((*(R17 *)rt_nil_check(p_D))).f_NAME);
for (;;) {
if ((l_Y_3486 == NULL)) goto L_end3487;
{
if (((((*(R12 *)rt_nil_check(l_Y_3486))).f_DECL == p_D) && (((*(R12 *)rt_nil_check(l_Y_3486))).f_ORIG == NULL)))
{
{ R12 * rv3488 = l_Y_3486;
return rv3488; }
}
l_Y_3486 = r_LOOKUP_NEXT(l_Y_3486);
}
RT_B_TICK();
} L_end3487: ;
r_FAILT(((*(R17 *)rt_nil_check(p_D))).f_LINE, rt_str("lost the declaration of ", 24), ((*(R17 *)rt_nil_check(p_D))).f_NAME);
rt_raise(RT_X_INIT);
}
static void r_RESOLVE_ENUM_TYPES(R17 * p_DECLS) { RT_B_TICK(); 
R17 * l_D_3489; memset(&l_D_3489, 0, sizeof l_D_3489);
l_D_3489 = p_DECLS;
for (;;) {
if ((l_D_3489 == NULL)) goto L_end3490;
{
if (((((*(R17 *)rt_nil_check(l_D_3489))).f_KIND == g_N_TYPE) && (((*(R17 *)rt_nil_check(l_D_3489))).f_A == NULL)))
{
if ((((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_D_3489))).f_B))).f_KIND == g_TS_ENUM))
{
{
R12 * l_Y_3491; memset(&l_Y_3491, 0, sizeof l_Y_3491);
l_Y_3491 = r_FIND_DECL(l_D_3489);
R22 * l_T_3492; memset(&l_T_3492, 0, sizeof l_T_3492);
l_T_3492 = r_RESOLVE_USER(r_TYPE_REF(l_D_3489));
}
}
}
l_D_3489 = ((*(R17 *)rt_nil_check(l_D_3489))).f_NEXT;
}
RT_B_TICK();
} L_end3490: ;
}
static R17 * r_TYPE_REF(R17 * p_D) { RT_B_TICK(); 
R17 * l_TS_3493; memset(&l_TS_3493, 0, sizeof l_TS_3493);
l_TS_3493 = r_NEW_NODE(g_TS_NAME, ((*(R17 *)rt_nil_check(p_D))).f_LINE);
S_R9(&((*(R17 *)rt_nil_check(l_TS_3493))).f_NAME, ((*(R17 *)rt_nil_check(p_D))).f_NAME, 0);
{ R17 * rv3494 = l_TS_3493;
return rv3494; }
rt_raise(RT_X_INIT);
}
static void r_PREDECLARE_MODULE(R17 * p_M) { RT_B_TICK(); 
R12 * l_Y_3495; memset(&l_Y_3495, 0, sizeof l_Y_3495);
l_Y_3495 = r_NEW_SYM(g_Y_MODULE, ((*(R17 *)rt_nil_check(p_M))).f_NAME);
R12 * l_SAVED_3496; memset(&l_SAVED_3496, 0, sizeof l_SAVED_3496);
l_SAVED_3496 = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R12 *)rt_nil_check(l_Y_3495))).f_DECL = p_M;
r_DEFINE(l_Y_3495, ((*(R17 *)rt_nil_check(p_M))).f_LINE);
if ((!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_B == NULL)))
{
r_FAIL(((*(R17 *)rt_nil_check(p_M))).f_LINE, rt_str("a module body has no statements (4.4)", 37));
}
r_OPEN_SCOPE();
{
R12 * l_MARK_3497; memset(&l_MARK_3497, 0, sizeof l_MARK_3497);
l_MARK_3497 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_Y_3495;
r_DECLARE_TYPES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_A);
r_DECLARE_MEMBERS(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(p_M))).f_C))).f_A);
((*(R12 *)rt_nil_check(l_Y_3495))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_3497);
}
((*(R7 *)rt_nil_check(g_W))).f_MODL = l_SAVED_3496;
r_CLOSE_SCOPE();
r_EXPORT_MODULE(l_Y_3495);
}
static void r_ENTER_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_Y_3498; memset(&l_Y_3498, 0, sizeof l_Y_3498);
l_Y_3498 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
r_OPEN_SCOPE();
for (;;) {
if ((l_Y_3498 == NULL)) goto L_end3499;
{
{
R12 * l_NEXT_3500; memset(&l_NEXT_3500, 0, sizeof l_NEXT_3500);
l_NEXT_3500 = ((*(R12 *)rt_nil_check(l_Y_3498))).f_SNEXT;
r_DEFINE(l_Y_3498, ((rt_int)0LL));
l_Y_3498 = l_NEXT_3500;
}
}
RT_B_TICK();
} L_end3499: ;
((*(R12 *)rt_nil_check(p_M))).f_BUSY = 1;
(((*(R12 *)rt_nil_check(p_M))).f_FWD).f_H = ((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_SCOPE))).f_DEPTH;
((*(R12 *)rt_nil_check(p_M))).f_SAVED = ((*(R7 *)rt_nil_check(g_W))).f_MODL;
((*(R7 *)rt_nil_check(g_W))).f_MODL = p_M;
r_ENTER_ISCOPE(((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(p_M))).f_DECL))).f_A, NULL, ((*(R12 *)rt_nil_check(p_M))).f_NAME);
}
static void r_LEAVE_MODULE(R12 * p_M) { RT_B_TICK(); 
R12 * l_MARK_3501; memset(&l_MARK_3501, 0, sizeof l_MARK_3501);
l_MARK_3501 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
r_LEAVE_ISCOPE();
((*(R7 *)rt_nil_check(g_W))).f_MODL = ((*(R12 *)rt_nil_check(p_M))).f_SAVED;
for (;;) {
if ((l_MARK_3501 == NULL)) goto L_end3502;
{
if ((((*(R12 *)rt_nil_check(l_MARK_3501))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end3502;
}
l_MARK_3501 = ((*(R12 *)rt_nil_check(l_MARK_3501))).f_SNEXT;
}
RT_B_TICK();
} L_end3502: ;
((*(R12 *)rt_nil_check(p_M))).f_MEMBERS = r_TAKE_SCOPE(l_MARK_3501);
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
{ rt_int rv3503 = 1;
return rv3503; }
}
}
{ rt_int rv3504 = 0;
return rv3504; }
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
R17 * l_D_3505; memset(&l_D_3505, 0, sizeof l_D_3505);
l_D_3505 = ((*(R12 *)rt_nil_check(p_M))).f_DECL;
R12 * l_Y_3506; memset(&l_Y_3506, 0, sizeof l_Y_3506);
l_Y_3506 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3506 == NULL)) goto L_end3507;
{
if (r_EXPORTED_BY(l_D_3505, l_Y_3506))
{
((*(R12 *)rt_nil_check(l_Y_3506))).f_EXPORTED = 1;
{
R12 * l_A_3508; memset(&l_A_3508, 0, sizeof l_A_3508);
l_A_3508 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_Y_3506))).f_KIND, ((*(R12 *)rt_nil_check(l_Y_3506))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_3508)), (*(R12 *)rt_nil_check(l_Y_3506)), 0);
((*(R12 *)rt_nil_check(l_A_3508))).f_ORIG = r_ORIGINAL(l_Y_3506);
((*(R12 *)rt_nil_check(l_A_3508))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
r_DEFINE(l_A_3508, ((*(R17 *)rt_nil_check(l_D_3505))).f_LINE);
}
}
l_Y_3506 = ((*(R12 *)rt_nil_check(l_Y_3506))).f_SNEXT;
}
RT_B_TICK();
} L_end3507: ;
{
R17 * l_X_3509; memset(&l_X_3509, 0, sizeof l_X_3509);
l_X_3509 = ((*(R17 *)rt_nil_check(l_D_3505))).f_B;
for (;;) {
if ((l_X_3509 == NULL)) goto L_end3510;
{
if ((!r_MEMBER_NAMED(p_M, ((*(R17 *)rt_nil_check(l_X_3509))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_X_3509))).f_LINE, rt_str("the module does not declare ", 28), ((*(R17 *)rt_nil_check(l_X_3509))).f_NAME);
}
r_CHECK_EXPORT_ITEM(p_M, l_X_3509);
l_X_3509 = ((*(R17 *)rt_nil_check(l_X_3509))).f_NEXT;
}
RT_B_TICK();
} L_end3510: ;
}
}
static void r_CHECK_EXPORT_ITEM(R12 * p_M, R17 * p_X) { RT_B_TICK(); 
R12 * l_Y_3511; memset(&l_Y_3511, 0, sizeof l_Y_3511);
l_Y_3511 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
rt_int l_IS_TYPE_3512; memset(&l_IS_TYPE_3512, 0, sizeof l_IS_TYPE_3512);
l_IS_TYPE_3512 = 0;
rt_int l_IS_ROUTINE_3513; memset(&l_IS_ROUTINE_3513, 0, sizeof l_IS_ROUTINE_3513);
l_IS_ROUTINE_3513 = 0;
for (;;) {
if ((l_Y_3511 == NULL)) goto L_end3514;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_3511))).f_NAME, ((*(R17 *)rt_nil_check(p_X))).f_NAME))
{
if ((((*(R12 *)rt_nil_check(l_Y_3511))).f_KIND == g_Y_TYPE))
{
l_IS_TYPE_3512 = 1;
}
else if ((((((*(R12 *)rt_nil_check(l_Y_3511))).f_KIND == g_Y_ROUTINE) || (((*(R12 *)rt_nil_check(l_Y_3511))).f_KIND == g_Y_MODULE)) || (((*(R12 *)rt_nil_check(l_Y_3511))).f_KIND == g_Y_ENUMLIT)))
{
l_IS_ROUTINE_3513 = 1;
}
}
else if (r_TEQ(((*(R12 *)rt_nil_check(l_Y_3511))).f_PREFIX, ((*(R17 *)rt_nil_check(p_X))).f_NAME))
{
l_IS_ROUTINE_3513 = 1;
}
l_Y_3511 = ((*(R12 *)rt_nil_check(l_Y_3511))).f_SNEXT;
}
RT_B_TICK();
} L_end3514: ;
if (((!l_IS_TYPE_3512) && (!l_IS_ROUTINE_3513)))
{
r_FAILT(((*(R17 *)rt_nil_check(p_X))).f_LINE, rt_str("only type and routine names are exported (4.4): ", 48), ((*(R17 *)rt_nil_check(p_X))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(p_X))).f_A == NULL)))
{
if ((!l_IS_TYPE_3512))
{
r_FAILT(((*(R17 *)rt_nil_check(p_X))).f_LINE, rt_str("only a type-name is followed by a WITH clause (4.4): ", 53), ((*(R17 *)rt_nil_check(p_X))).f_NAME);
}
{
R17 * l_OP_3515; memset(&l_OP_3515, 0, sizeof l_OP_3515);
l_OP_3515 = ((*(R17 *)rt_nil_check(p_X))).f_A;
for (;;) {
if ((l_OP_3515 == NULL)) goto L_end3516;
{
{
rt_int l_FOUND_3517; memset(&l_FOUND_3517, 0, sizeof l_FOUND_3517);
l_FOUND_3517 = 0;
l_Y_3511 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3511 == NULL)) goto L_end3518;
{
if (((((*(R12 *)rt_nil_check(l_Y_3511))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R12 *)rt_nil_check(l_Y_3511))).f_PREFIX, ((*(R17 *)rt_nil_check(p_X))).f_NAME)))
{
if (r_TEQ(r_BASE_NAME(r_ORIGINAL(l_Y_3511)), ((*(R17 *)rt_nil_check(l_OP_3515))).f_NAME))
{
l_FOUND_3517 = 1;
}
}
l_Y_3511 = ((*(R12 *)rt_nil_check(l_Y_3511))).f_SNEXT;
}
RT_B_TICK();
} L_end3518: ;
if ((!l_FOUND_3517))
{
r_FAILT(((*(R17 *)rt_nil_check(l_OP_3515))).f_LINE, rt_str("a WITH clause lists operations of the type (4.4): ", 50), ((*(R17 *)rt_nil_check(l_OP_3515))).f_NAME);
}
}
l_OP_3515 = ((*(R17 *)rt_nil_check(l_OP_3515))).f_NEXT;
}
RT_B_TICK();
} L_end3516: ;
}
}
}
static rt_int r_MEMBER_NAMED(R12 * p_M, R9 p_NAME) { RT_B_TICK(); 
R12 * l_Y_3519; memset(&l_Y_3519, 0, sizeof l_Y_3519);
l_Y_3519 = ((*(R12 *)rt_nil_check(p_M))).f_MEMBERS;
for (;;) {
if ((l_Y_3519 == NULL)) goto L_end3520;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_3519))).f_NAME, p_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_3519))).f_PREFIX, p_NAME)))
{
{ rt_int rv3521 = 1;
return rv3521; }
}
l_Y_3519 = ((*(R12 *)rt_nil_check(l_Y_3519))).f_SNEXT;
}
RT_B_TICK();
} L_end3520: ;
{ rt_int rv3522 = 0;
return rv3522; }
rt_raise(RT_X_INIT);
}
static rt_int r_EXPORTED_BY(R17 * p_D, R12 * p_Y) { RT_B_TICK(); 
R17 * l_X_3523; memset(&l_X_3523, 0, sizeof l_X_3523);
l_X_3523 = ((*(R17 *)rt_nil_check(p_D))).f_B;
if ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_LABEL)))
{
{ rt_int rv3524 = 0;
return rv3524; }
}
if ((((*(R17 *)rt_nil_check(p_D))).f_FL == ((rt_int)1LL)))
{
{ rt_int rv3525 = ((((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT)) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_MODULE));
return rv3525; }
}
for (;;) {
if ((l_X_3523 == NULL)) goto L_end3526;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_X_3523))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3527 = 1;
return rv3527; }
}
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE) && r_TEQ(((*(R17 *)rt_nil_check(l_X_3523))).f_NAME, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)))
{
if ((((*(R17 *)rt_nil_check(l_X_3523))).f_A == NULL))
{
{ rt_int rv3528 = 1;
return rv3528; }
}
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_X_3523))).f_A, r_BASE_NAME(r_ORIGINAL(p_Y))))
{
{ rt_int rv3529 = 1;
return rv3529; }
}
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ENUMLIT))
{
{
R12 * l_T_3530; memset(&l_T_3530, 0, sizeof l_T_3530);
l_T_3530 = r_ORIG_LOOKUP_MEMBER(((*(R17 *)rt_nil_check(l_X_3523))).f_NAME, p_Y);
if ((!(l_T_3530 == NULL)))
{
{ rt_int rv3531 = 1;
return rv3531; }
}
}
}
l_X_3523 = ((*(R17 *)rt_nil_check(l_X_3523))).f_NEXT;
}
RT_B_TICK();
} L_end3526: ;
{ rt_int rv3532 = 0;
return rv3532; }
rt_raise(RT_X_INIT);
}
static R12 * r_ORIG_LOOKUP_MEMBER(R9 p_NAME, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3533; memset(&l_M_3533, 0, sizeof l_M_3533);
l_M_3533 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
R12 * l_Z_3534; memset(&l_Z_3534, 0, sizeof l_Z_3534);
if ((l_M_3533 == NULL))
{
{ R12 * rv3535 = NULL;
return rv3535; }
}
l_Z_3534 = ((*(R12 *)rt_nil_check(l_M_3533))).f_MEMBERS;
for (;;) {
if ((l_Z_3534 == NULL)) goto L_end3536;
{
if (((((*(R12 *)rt_nil_check(l_Z_3534))).f_KIND == g_Y_TYPE) && r_TEQ(((*(R12 *)rt_nil_check(l_Z_3534))).f_NAME, p_NAME)))
{
if ((!(((*(R12 *)rt_nil_check(l_Z_3534))).f_T == NULL)))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_3534))).f_T))).f_KIND == g_T_ENUM))
{
if ((((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Z_3534))).f_T))).f_BASE == ((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_T))).f_BASE))
{
{ R12 * rv3537 = l_Z_3534;
return rv3537; }
}
}
}
}
l_Z_3534 = ((*(R12 *)rt_nil_check(l_Z_3534))).f_SNEXT;
}
RT_B_TICK();
} L_end3536: ;
{ R12 * rv3538 = NULL;
return rv3538; }
rt_raise(RT_X_INIT);
}
static void r_MODULE_DATA(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3539; memset(&l_R_3539, 0, sizeof l_R_3539);
l_R_3539 = p_RS;
for (;;) {
if ((l_R_3539 == NULL)) goto L_end3540;
{
if ((((*(R17 *)rt_nil_check(l_R_3539))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3541; memset(&l_M_3541, 0, sizeof l_M_3541);
l_M_3541 = r_FIND_DECL(l_R_3539);
R17 * l_D_3542; memset(&l_D_3542, 0, sizeof l_D_3542);
l_D_3542 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3539))).f_C))).f_A;
r_ENTER_MODULE(l_M_3541);
for (;;) {
if ((l_D_3542 == NULL)) goto L_end3543;
{
if (((((*(R17 *)rt_nil_check(l_D_3542))).f_KIND == g_N_VAR) || (((*(R17 *)rt_nil_check(l_D_3542))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3542);
}
l_D_3542 = ((*(R17 *)rt_nil_check(l_D_3542))).f_NEXT;
}
RT_B_TICK();
} L_end3543: ;
r_MODULE_DATA(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3539))).f_C))).f_C);
r_DISTINCT_SIGNATURES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3539))).f_C))).f_C);
r_ROUTINE_USES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3539))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3541);
}
}
l_R_3539 = ((*(R17 *)rt_nil_check(l_R_3539))).f_NEXT;
}
RT_B_TICK();
} L_end3540: ;
}
static void r_ROUTINE_BODIES(R17 * p_RS) { RT_B_TICK(); 
R17 * l_R_3544; memset(&l_R_3544, 0, sizeof l_R_3544);
l_R_3544 = p_RS;
for (;;) {
if ((l_R_3544 == NULL)) goto L_end3545;
{
if ((((*(R17 *)rt_nil_check(l_R_3544))).f_KIND == g_N_MODULE))
{
{
R12 * l_M_3546; memset(&l_M_3546, 0, sizeof l_M_3546);
l_M_3546 = r_FIND_DECL(l_R_3544);
r_ENTER_MODULE(l_M_3546);
r_ROUTINE_BODIES(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3544))).f_C))).f_C);
r_LEAVE_MODULE(l_M_3546);
}
}
else
{
{
R12 * l_Y_3547; memset(&l_Y_3547, 0, sizeof l_Y_3547);
l_Y_3547 = r_FIND_DECL(l_R_3544);
if ((((*(R12 *)rt_nil_check(l_Y_3547))).f_LINKAGE == ((rt_int)2LL)))
{
}
else if (((((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(l_Y_3547))).f_DECL))).f_FL == ((rt_int)1LL)) && (!((*(R12 *)rt_nil_check(l_Y_3547))).f_GENERIC)))
{
}
else if ((!((*(R12 *)rt_nil_check(l_Y_3547))).f_GENERIC))
{
r_ROUTINE_BODY(l_Y_3547);
}
}
}
l_R_3544 = ((*(R17 *)rt_nil_check(l_R_3544))).f_NEXT;
}
RT_B_TICK();
} L_end3545: ;
}
static void r_PENDING_BODIES(void) { RT_B_TICK(); 
rt_int l_LEVEL_3548; memset(&l_LEVEL_3548, 0, sizeof l_LEVEL_3548);
l_LEVEL_3548 = r_CUR_LEVEL();
rt_int l_MORE_3549; memset(&l_MORE_3549, 0, sizeof l_MORE_3549);
l_MORE_3549 = 1;
for (;;) {
if ((!l_MORE_3549)) goto L_end3550;
{
l_MORE_3549 = 0;
{
R12 * l_P_3551; memset(&l_P_3551, 0, sizeof l_P_3551);
l_P_3551 = ((*(R7 *)rt_nil_check(g_W))).f_PENDING;
R12 * l_PREV_3552; memset(&l_PREV_3552, 0, sizeof l_PREV_3552);
l_PREV_3552 = NULL;
for (;;) {
if ((l_P_3551 == NULL)) goto L_end3553;
{
if ((((*(R12 *)rt_nil_check(l_P_3551))).f_LEVEL == l_LEVEL_3548))
{
if ((l_PREV_3552 == NULL))
{
((*(R7 *)rt_nil_check(g_W))).f_PENDING = ((*(R12 *)rt_nil_check(l_P_3551))).f_MEMBERS;
}
else
{
((*(R12 *)rt_nil_check(l_PREV_3552))).f_MEMBERS = ((*(R12 *)rt_nil_check(l_P_3551))).f_MEMBERS;
}
{
R12 * l_SAVED_SEG_3554; memset(&l_SAVED_SEG_3554, 0, sizeof l_SAVED_SEG_3554);
l_SAVED_SEG_3554 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R12 * l_HOME_3555; memset(&l_HOME_3555, 0, sizeof l_HOME_3555);
l_HOME_3555 = r_ENTER_HOME(l_P_3551);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = ((*(R12 *)rt_nil_check(l_P_3551))).f_HOME;
r_ENTER_MODULE_OF(l_P_3551);
r_ROUTINE_BODY(l_P_3551);
r_LEAVE_MODULE_OF(l_P_3551);
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SAVED_SEG_3554;
r_LEAVE_HOME(l_P_3551, l_HOME_3555);
}
l_MORE_3549 = 1;
goto L_end3553;
}
l_PREV_3552 = l_P_3551;
l_P_3551 = ((*(R12 *)rt_nil_check(l_P_3551))).f_MEMBERS;
}
RT_B_TICK();
} L_end3553: ;
}
}
RT_B_TICK();
} L_end3550: ;
}
static void r_CLOSED_BODY(R17 * p_B) { RT_B_TICK(); 
R17 * l_D_3556; memset(&l_D_3556, 0, sizeof l_D_3556);
l_D_3556 = ((*(R17 *)rt_nil_check(p_B))).f_A;
R17 * l_S_3557; memset(&l_S_3557, 0, sizeof l_S_3557);
l_S_3557 = ((*(R17 *)rt_nil_check(p_B))).f_B;
r_DECLARE_TYPES(((*(R17 *)rt_nil_check(p_B))).f_A);
r_DECLARE_MEMBERS(((*(R17 *)rt_nil_check(p_B))).f_C);
r_RESOLVE_ENUM_TYPES(((*(R17 *)rt_nil_check(p_B))).f_A);
for (;;) {
if ((l_D_3556 == NULL)) goto L_end3558;
{
if (((((*(R17 *)rt_nil_check(l_D_3556))).f_KIND == g_N_VAR) || (((*(R17 *)rt_nil_check(l_D_3556))).f_KIND == g_N_CONST)))
{
r_DECLARE_OBJECTS(l_D_3556);
}
l_D_3556 = ((*(R17 *)rt_nil_check(l_D_3556))).f_NEXT;
}
RT_B_TICK();
} L_end3558: ;
r_MODULE_DATA(((*(R17 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_HEADERS(((*(R17 *)rt_nil_check(p_B))).f_C);
r_DISTINCT_SIGNATURES(((*(R17 *)rt_nil_check(p_B))).f_C);
r_ROUTINE_USES(((*(R17 *)rt_nil_check(p_B))).f_C);
r_DECLARE_LABELS(((*(R17 *)rt_nil_check(p_B))).f_B);
for (;;) {
if ((l_S_3557 == NULL)) goto L_end3559;
{
r_STMT(l_S_3557);
l_S_3557 = ((*(R17 *)rt_nil_check(l_S_3557))).f_NEXT;
}
RT_B_TICK();
} L_end3559: ;
r_ROUTINE_BODIES(((*(R17 *)rt_nil_check(p_B))).f_C);
r_PENDING_BODIES();
}
static void r_ROUTINE_BODY(R12 * p_Y) { RT_B_TICK(); 
R17 * l_R_3560; memset(&l_R_3560, 0, sizeof l_R_3560);
l_R_3560 = ((*(R12 *)rt_nil_check(p_Y))).f_DECL;
R14 l_SAVED_CODE_3561; memset(&l_SAVED_CODE_3561, 0, sizeof l_SAVED_CODE_3561);
S_R14(&l_SAVED_CODE_3561, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R18 * l_SAVED_CTXS_3562; memset(&l_SAVED_CTXS_3562, 0, sizeof l_SAVED_CTXS_3562);
l_SAVED_CTXS_3562 = ((*(R7 *)rt_nil_check(g_W))).f_CTXS;
R21 * l_SAVED_BINDS_3563; memset(&l_SAVED_BINDS_3563, 0, sizeof l_SAVED_BINDS_3563);
l_SAVED_BINDS_3563 = ((*(R7 *)rt_nil_check(g_W))).f_BINDS;
R19 * l_OUTER_3564; memset(&l_OUTER_3564, 0, sizeof l_OUTER_3564);
l_OUTER_3564 = ((*(R7 *)rt_nil_check(g_W))).f_CS;
R19 * l_CS_3565; memset(&l_CS_3565, 0, sizeof l_CS_3565);
l_CS_3565 = ({ R19 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz; })); p; });
R9 l_PROLOGUE_3566; memset(&l_PROLOGUE_3566, 0, sizeof l_PROLOGUE_3566);
S_R9(&l_PROLOGUE_3566, r_MK(rt_str("", 0)), 0);
S_R19(&(*(R19 *)rt_nil_check(l_CS_3565)), ({ R19 rc3567; memset(&rc3567, 0, sizeof rc3567);  rc3567.f_LEVEL = rt_add(((*(R12 *)rt_nil_check(p_Y))).f_LEVEL, ((rt_int)1LL)); rc3567.f_R = p_Y; rc3567.f_FRAMED = ((*(R12 *)rt_nil_check(p_Y))).f_FRAMED; S_R9(&rc3567.f_FTYPE, r_FMT1(rt_str("fr_@", 4), ((*(R12 *)rt_nil_check(p_Y))).f_ACCESS), 0); S_R14(&rc3567.f_FIELDS, ({ R14 rc3568; memset(&rc3568, 0, sizeof rc3568);  rc3568.f_HEAD = NULL; rc3568.f_TAIL = NULL; rc3568; }), 0); rc3567.f_UP = l_OUTER_3564; rc3567.f_IMPORTS = ((*(R17 *)rt_nil_check(l_R_3560))).f_E; rc3567.f_SIGNALS = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3560))).f_D))).f_A; rc3567.f_RESULT = ((*(R12 *)rt_nil_check(p_Y))).f_RESULT; rc3567.f_IS_PATH = 0; S_R9(&rc3567.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3567; }), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_TYPEDEFS, r_FMT2(rt_str("typedef struct @ @;", 19), ((*(R19 *)rt_nil_check(l_CS_3565))).f_FTYPE, ((*(R19 *)rt_nil_check(l_CS_3565))).f_FTYPE));
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
r_APPEND(r_FMT1(rt_str(" @ *up;", 7), ((*(R12 *)rt_nil_check(p_Y))).f_FIELD), &((*(R19 *)rt_nil_check(l_CS_3565))).f_FIELDS);
}
else
{
r_APPEND(r_MK(rt_str(" void *up;", 10)), &((*(R19 *)rt_nil_check(l_CS_3565))).f_FIELDS);
}
S_R9(&l_PROLOGUE_3566, r_FMT2(rt_str("@ *F = rt_alloc(sizeof *F); (void)F;", 36), ((*(R19 *)rt_nil_check(l_CS_3565))).f_FTYPE, ((*(R19 *)rt_nil_check(l_CS_3565))).f_FTYPE), 0);
if ((((*(R12 *)rt_nil_check(p_Y))).f_LEVEL >= ((rt_int)1LL)))
{
S_R9(&l_PROLOGUE_3566, r_CATS(l_PROLOGUE_3566, rt_str(" F->up = up_;", 13)), 0);
}
}
((*(R7 *)rt_nil_check(g_W))).f_CS = l_CS_3565;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3569; memset(&rc3569, 0, sizeof rc3569);  rc3569.f_HEAD = NULL; rc3569.f_TAIL = NULL; rc3569; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = ((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
r_ENTER_ISCOPE(((*(R17 *)rt_nil_check(l_R_3560))).f_E, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3560))).f_D))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
r_OPEN_SCOPE();
r_BIND_INSTANCE(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, ((*(R17 *)rt_nil_check(l_R_3560))).f_LINE);
{
R30 * l_P_3570; memset(&l_P_3570, 0, sizeof l_P_3570);
l_P_3570 = ((*(R12 *)rt_nil_check(p_Y))).f_PARAMS;
for (;;) {
if ((l_P_3570 == NULL)) goto L_end3571;
{
if ((!(((*(R30 *)rt_nil_check(l_P_3570))).f_T == NULL)))
{
if ((!(((*(R22 *)rt_nil_check(r_REAL_TYPE(((*(R30 *)rt_nil_check(l_P_3570))).f_T)))).f_KIND == g_T_VOID)))
{
{
R12 * l_V_3572; memset(&l_V_3572, 0, sizeof l_V_3572);
l_V_3572 = r_NEW_SYM(g_Y_VAR, ((*(R30 *)rt_nil_check(l_P_3570))).f_NAME);
R21 * l_MB_3573; memset(&l_MB_3573, 0, sizeof l_MB_3573);
l_MB_3573 = r_FIND_BIND(((*(R12 *)rt_nil_check(p_Y))).f_BINDINGS, r_QMKN(rt_str("=", 1), ((*(R30 *)rt_nil_check(l_P_3570))).f_NAME));
((*(R12 *)rt_nil_check(l_V_3572))).f_T = ((*(R30 *)rt_nil_check(l_P_3570))).f_T;
((*(R12 *)rt_nil_check(l_V_3572))).f_INPUT = (((*(R30 *)rt_nil_check(l_P_3570))).f_MODE == g_M_IN);
if ((!(l_MB_3573 == NULL)))
{
((*(R12 *)rt_nil_check(l_V_3572))).f_HASMV = ((*(R21 *)rt_nil_check(l_MB_3573))).f_HASMV;
((*(R12 *)rt_nil_check(l_V_3572))).f_MV = ((*(R21 *)rt_nil_check(l_MB_3573))).f_MV;
}
((*(R12 *)rt_nil_check(l_V_3572))).f_BYREF = (!(((*(R30 *)rt_nil_check(l_P_3570))).f_MODE == g_M_IN));
S_R9(&((*(R12 *)rt_nil_check(l_V_3572))).f_FIELD, r_FMT1(rt_str("p_@", 3), r_CID(((*(R30 *)rt_nil_check(l_P_3570))).f_NAME)), 0);
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
if (((*(R12 *)rt_nil_check(l_V_3572))).f_BYREF)
{
r_APPEND(r_FMT2(rt_str(" @ *p_@;", 8), r_CTYPE(((*(R30 *)rt_nil_check(l_P_3570))).f_T), r_CID(((*(R30 *)rt_nil_check(l_P_3570))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3565))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3572))).f_ACCESS, r_FMT1(rt_str("(*F->p_@)", 9), r_CID(((*(R30 *)rt_nil_check(l_P_3570))).f_NAME)), 0);
}
else
{
r_APPEND(r_FMT2(rt_str(" @ p_@;", 7), r_CTYPE(((*(R30 *)rt_nil_check(l_P_3570))).f_T), r_CID(((*(R30 *)rt_nil_check(l_P_3570))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3565))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3572))).f_ACCESS, r_FMT1(rt_str("F->p_@", 6), r_CID(((*(R30 *)rt_nil_check(l_P_3570))).f_NAME)), 0);
}
S_R9(&l_PROLOGUE_3566, r_FMT3(rt_str("@ F->p_@ = p_@;", 15), l_PROLOGUE_3566, r_CID(((*(R30 *)rt_nil_check(l_P_3570))).f_NAME), r_CID(((*(R30 *)rt_nil_check(l_P_3570))).f_NAME)), 0);
}
else if (((*(R12 *)rt_nil_check(l_V_3572))).f_BYREF)
{
S_R9(&((*(R12 *)rt_nil_check(l_V_3572))).f_ACCESS, r_FMT1(rt_str("(*p_@)", 6), r_CID(((*(R30 *)rt_nil_check(l_P_3570))).f_NAME)), 0);
}
else
{
S_R9(&((*(R12 *)rt_nil_check(l_V_3572))).f_ACCESS, r_FMT1(rt_str("p_@", 3), r_CID(((*(R30 *)rt_nil_check(l_P_3570))).f_NAME)), 0);
}
if ((((*(R30 *)rt_nil_check(l_P_3570))).f_MODE == g_M_OUT))
{
{
R9 l_ARGA_3574; memset(&l_ARGA_3574, 0, sizeof l_ARGA_3574);
S_R9(&l_ARGA_3574, ((*(R12 *)rt_nil_check(l_V_3572))).f_ACCESS, 0);
r_DEFINE_PARAM_GENS(((*(R30 *)rt_nil_check(l_P_3570))).f_T, l_ARGA_3574, ((*(R17 *)rt_nil_check(l_R_3560))).f_LINE, 1);
((*(R12 *)rt_nil_check(l_V_3572))).f_BYREF = 0;
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_APPEND(r_FMT2(rt_str(" @ o_@;", 7), r_CTYPE(((*(R30 *)rt_nil_check(l_P_3570))).f_T), r_CID(((*(R30 *)rt_nil_check(l_P_3570))).f_NAME)), &((*(R19 *)rt_nil_check(l_CS_3565))).f_FIELDS);
S_R9(&((*(R12 *)rt_nil_check(l_V_3572))).f_ACCESS, r_FMT1(rt_str("F->o_@", 6), r_CID(((*(R30 *)rt_nil_check(l_P_3570))).f_NAME)), 0);
}
else
{
S_R9(&l_PROLOGUE_3566, r_FMT3(rt_str("@ @ o_@;", 8), l_PROLOGUE_3566, r_CTYPE(((*(R30 *)rt_nil_check(l_P_3570))).f_T), r_CID(((*(R30 *)rt_nil_check(l_P_3570))).f_NAME)), 0);
S_R9(&((*(R12 *)rt_nil_check(l_V_3572))).f_ACCESS, r_FMT1(rt_str("o_@", 3), r_CID(((*(R30 *)rt_nil_check(l_P_3570))).f_NAME)), 0);
}
S_R9(&l_PROLOGUE_3566, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_3566, ((*(R12 *)rt_nil_check(l_V_3572))).f_ACCESS, l_ARGA_3574), 0);
if (r_NEEDS_INIT(((*(R30 *)rt_nil_check(l_P_3570))).f_T))
{
S_R9(&l_PROLOGUE_3566, r_FMT3(rt_str("@ @ = @;", 8), l_PROLOGUE_3566, ((*(R12 *)rt_nil_check(l_V_3572))).f_ACCESS, r_COPY_OF(((*(R30 *)rt_nil_check(l_P_3570))).f_T, l_ARGA_3574)), 0);
}
S_R9(&((*(R19 *)rt_nil_check(l_CS_3565))).f_COPYOUT, r_CAT(((*(R19 *)rt_nil_check(l_CS_3565))).f_COPYOUT, r_ASSIGN_CODE(((*(R30 *)rt_nil_check(l_P_3570))).f_T, l_ARGA_3574, ((*(R12 *)rt_nil_check(l_V_3572))).f_ACCESS)), 0);
r_DEFINE(l_V_3572, ((*(R17 *)rt_nil_check(l_R_3560))).f_LINE);
}
}
else
{
r_DEFINE(l_V_3572, ((*(R17 *)rt_nil_check(l_R_3560))).f_LINE);
r_DEFINE_PARAM_GENS(((*(R30 *)rt_nil_check(l_P_3570))).f_T, ((*(R12 *)rt_nil_check(l_V_3572))).f_ACCESS, ((*(R17 *)rt_nil_check(l_R_3560))).f_LINE, 1);
}
}
}
}
l_P_3570 = ((*(R30 *)rt_nil_check(l_P_3570))).f_NEXT;
}
RT_B_TICK();
} L_end3571: ;
}
if ((((*(R17 *)rt_nil_check(l_R_3560))).f_FL >= ((rt_int)2LL)))
{
{
R17 * l_N_3575; memset(&l_N_3575, 0, sizeof l_N_3575);
l_N_3575 = ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_R_3560))).f_D))).f_C;
R14 l_SAVED_CODE_3576; memset(&l_SAVED_CODE_3576, 0, sizeof l_SAVED_CODE_3576);
S_R14(&l_SAVED_CODE_3576, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
R26 l_V_3577; memset(&l_V_3577, 0, sizeof l_V_3577);
S_R26(&l_V_3577, r_EXPR(l_N_3575, ((*(R7 *)rt_nil_check(g_W))).f_TY_INT), 0);
R25 l_M_3578; memset(&l_M_3578, 0, sizeof l_M_3578);
S_R25(&l_M_3578, r_MANIFEST(l_N_3575), 0);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3576, 0);
if ((((!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3577).f_T)))).f_KIND == g_T_INT)) || (!(((*(R22 *)rt_nil_check(r_REAL_TYPE((l_V_3577).f_T)))).f_SCALE == ((rt_int)0LL)))) || (!(l_M_3578).f_OK)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_N_3575))).f_LINE, rt_str("the stack-size is a manifest integer expression (4.8.2 [4-111])", 63));
}
if (((l_M_3578).f_V < ((rt_int)0LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_N_3575))).f_LINE, rt_str("the stack-size must be greater than or equal to zero (4.8.2)", 60));
}
}
r_CODE(r_FMT1(rt_str("rt_b_no_target_code(@);", 23), r_CSTRING(((*(R17 *)rt_nil_check(l_R_3560))).f_NAME)));
}
else
{
r_CLOSED_BODY(((*(R17 *)rt_nil_check(l_R_3560))).f_C);
}
r_CLOSE_SCOPE();
r_LEAVE_ISCOPE();
if (((*(R12 *)rt_nil_check(p_Y))).f_FRAMED)
{
r_EMIT(g_O_STRUCTS, r_FMT2(rt_str("struct @ {@ };", 14), ((*(R19 *)rt_nil_check(l_CS_3565))).f_FTYPE, r_JOIN_BUF(((*(R19 *)rt_nil_check(l_CS_3565))).f_FIELDS)));
}
r_EMIT(g_O_FUNCS, r_FMT2(rt_str("@ { RT_B_TICK(); @", 18), ((*(R12 *)rt_nil_check(p_Y))).f_FWD, l_PROLOGUE_3566));
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_FUNCS, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if ((!(((*(R22 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_RESULT))).f_KIND == g_T_VOID)))
{
r_EMITS(g_O_FUNCS, rt_str("rt_raise(RT_X_INIT);", 20));
}
else if (((((*(R19 *)rt_nil_check(l_CS_3565))).f_COPYOUT).f_LEN > ((rt_int)0LL)))
{
r_EMIT(g_O_FUNCS, ((*(R19 *)rt_nil_check(l_CS_3565))).f_COPYOUT);
}
r_EMITS(g_O_FUNCS, rt_str("}", 1));
((*(R7 *)rt_nil_check(g_W))).f_CS = l_OUTER_3564;
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3561, 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = l_SAVED_CTXS_3562;
((*(R7 *)rt_nil_check(g_W))).f_BINDS = l_SAVED_BINDS_3563;
}
static void r_BIND_INSTANCE(R21 * p_BS, rt_int p_LINE) { RT_B_TICK(); 
R21 * l_B_3579; memset(&l_B_3579, 0, sizeof l_B_3579);
l_B_3579 = p_BS;
for (;;) {
if ((l_B_3579 == NULL)) goto L_end3580;
{
if ((!(((*(R21 *)rt_nil_check(l_B_3579))).f_T == NULL)))
{
{
R12 * l_Y_3581; memset(&l_Y_3581, 0, sizeof l_Y_3581);
l_Y_3581 = r_NEW_SYM(g_Y_TYPE, ((*(R21 *)rt_nil_check(l_B_3579))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3581))).f_T = ((*(R21 *)rt_nil_check(l_B_3579))).f_T;
r_DEFINE(l_Y_3581, p_LINE);
}
}
else if (((*(R21 *)rt_nil_check(l_B_3579))).f_HASMV)
{
{
R12 * l_Y_3582; memset(&l_Y_3582, 0, sizeof l_Y_3582);
l_Y_3582 = r_NEW_SYM(g_Y_GEN, ((*(R21 *)rt_nil_check(l_B_3579))).f_NAME);
((*(R12 *)rt_nil_check(l_Y_3582))).f_T = ((*(R7 *)rt_nil_check(g_W))).f_TY_INT;
((*(R12 *)rt_nil_check(l_Y_3582))).f_HASMV = 1;
((*(R12 *)rt_nil_check(l_Y_3582))).f_MV = ((*(R21 *)rt_nil_check(l_B_3579))).f_MV;
S_R9(&((*(R12 *)rt_nil_check(l_Y_3582))).f_ACCESS, ((*(R21 *)rt_nil_check(l_B_3579))).f_C, 0);
((*(R12 *)rt_nil_check(l_Y_3582))).f_INPUT = 1;
r_DEFINE(l_Y_3582, p_LINE);
}
}
l_B_3579 = ((*(R21 *)rt_nil_check(l_B_3579))).f_NEXT;
}
RT_B_TICK();
} L_end3580: ;
}
static void r_APPEND_BUF(R14 p_SRC, R14 *p_DST) { RT_B_TICK(); 
R15 * l_C_3583; memset(&l_C_3583, 0, sizeof l_C_3583);
l_C_3583 = (p_SRC).f_HEAD;
for (;;) {
if ((l_C_3583 == NULL)) goto L_end3584;
{
r_APPEND(C_R9(((*(R15 *)rt_nil_check(l_C_3583))).f_T), &(*p_DST));
l_C_3583 = ((*(R15 *)rt_nil_check(l_C_3583))).f_NEXT;
}
RT_B_TICK();
} L_end3584: ;
}
static rt_int r_USES_SEGMENT(R17 * p_S, rstr p_NAME) { RT_B_TICK(); 
R17 * l_U_3585; memset(&l_U_3585, 0, sizeof l_U_3585);
l_U_3585 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3585 == NULL)) goto L_end3586;
{
if (r_TEQS(((*(R17 *)rt_nil_check(l_U_3585))).f_NAME, p_NAME))
{
{ rt_int rv3587 = 1;
return rv3587; }
}
l_U_3585 = ((*(R17 *)rt_nil_check(l_U_3585))).f_NEXT;
}
RT_B_TICK();
} L_end3586: ;
{ rt_int rv3588 = 0;
return rv3588; }
rt_raise(RT_X_INIT);
}
static rt_int r_SEGMENT_READY(R17 * p_S, R17 * p_SEGS) { RT_B_TICK(); 
R17 * l_U_3589; memset(&l_U_3589, 0, sizeof l_U_3589);
l_U_3589 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3589 == NULL)) goto L_end3590;
{
{
R17 * l_T_3591; memset(&l_T_3591, 0, sizeof l_T_3591);
l_T_3591 = p_SEGS;
for (;;) {
if ((l_T_3591 == NULL)) goto L_end3592;
{
if ((((!(l_T_3591 == p_S)) && (((*(R17 *)rt_nil_check(l_T_3591))).f_D == NULL)) && r_TEQ(((*(R17 *)rt_nil_check(l_T_3591))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3589))).f_NAME)))
{
{ rt_int rv3593 = 0;
return rv3593; }
}
l_T_3591 = ((*(R17 *)rt_nil_check(l_T_3591))).f_NEXT;
}
RT_B_TICK();
} L_end3592: ;
}
l_U_3589 = ((*(R17 *)rt_nil_check(l_U_3589))).f_NEXT;
}
RT_B_TICK();
} L_end3590: ;
{ rt_int rv3594 = 1;
return rv3594; }
rt_raise(RT_X_INIT);
}
static R9 r_MISSING_SEGMENT(R17 * p_SEGS) { RT_B_TICK(); 
R17 * l_S_3595; memset(&l_S_3595, 0, sizeof l_S_3595);
l_S_3595 = p_SEGS;
for (;;) {
if ((l_S_3595 == NULL)) goto L_end3596;
{
{
R17 * l_U_3597; memset(&l_U_3597, 0, sizeof l_U_3597);
l_U_3597 = ((*(R17 *)rt_nil_check(l_S_3595))).f_A;
for (;;) {
if ((l_U_3597 == NULL)) goto L_end3598;
{
if ((!r_TEQS(((*(R17 *)rt_nil_check(l_U_3597))).f_NAME, rt_str("TERMINAL", 8))))
{
{
R17 * l_T_3599; memset(&l_T_3599, 0, sizeof l_T_3599);
l_T_3599 = p_SEGS;
rt_int l_FOUND_3600; memset(&l_FOUND_3600, 0, sizeof l_FOUND_3600);
l_FOUND_3600 = 0;
for (;;) {
if ((l_T_3599 == NULL)) goto L_end3601;
{
if (r_TEQ(((*(R17 *)rt_nil_check(l_T_3599))).f_NAME, ((*(R17 *)rt_nil_check(l_U_3597))).f_NAME))
{
l_FOUND_3600 = 1;
}
l_T_3599 = ((*(R17 *)rt_nil_check(l_T_3599))).f_NEXT;
}
RT_B_TICK();
} L_end3601: ;
if ((!l_FOUND_3600))
{
{ R9 rv3602 = ((*(R17 *)rt_nil_check(l_U_3597))).f_NAME;
return rv3602; }
}
}
}
l_U_3597 = ((*(R17 *)rt_nil_check(l_U_3597))).f_NEXT;
}
RT_B_TICK();
} L_end3598: ;
}
l_S_3595 = ((*(R17 *)rt_nil_check(l_S_3595))).f_NEXT;
}
RT_B_TICK();
} L_end3596: ;
{ R9 rv3603 = r_NO_TEXT();
return rv3603; }
rt_raise(RT_X_INIT);
}
static void r_TRANSLATE(R17 * p_SEGS) { RT_B_TICK(); 
R17 * l_S_3604; memset(&l_S_3604, 0, sizeof l_S_3604);
l_S_3604 = p_SEGS;
rt_int l_MAINS_3605; memset(&l_MAINS_3605, 0, sizeof l_MAINS_3605);
l_MAINS_3605 = ((rt_int)0LL);
R19 * l_ROOT_3606; memset(&l_ROOT_3606, 0, sizeof l_ROOT_3606);
l_ROOT_3606 = ({ R19 *p = rt_b_new_bits(sizeof *p, 0);  rt_b_new_more(({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)1LL), 2); sz = rt_b_layout(sz, ({ rt_int sz = 0; sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz = rt_b_layout(sz, ((rt_int)64LL), 2); sz; }), 2); sz; })); p; });
if ((p_SEGS == NULL))
{
r_FAIL(((rt_int)0LL), rt_str("no segment", 10));
}
S_R19(&(*(R19 *)rt_nil_check(l_ROOT_3606)), ({ R19 rc3607; memset(&rc3607, 0, sizeof rc3607);  rc3607.f_LEVEL = ((rt_int)0LL); rc3607.f_R = NULL; rc3607.f_FRAMED = 0; S_R9(&rc3607.f_FTYPE, r_NO_TEXT(), 0); S_R14(&rc3607.f_FIELDS, ({ R14 rc3608; memset(&rc3608, 0, sizeof rc3608);  rc3608.f_HEAD = NULL; rc3608.f_TAIL = NULL; rc3608; }), 0); rc3607.f_UP = NULL; rc3607.f_IMPORTS = NULL; rc3607.f_SIGNALS = NULL; rc3607.f_RESULT = NULL; rc3607.f_IS_PATH = 0; S_R9(&rc3607.f_COPYOUT, r_MK(rt_str("", 0)), 0); rc3607; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CS = l_ROOT_3606;
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
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, ({ R14 rc3609; memset(&rc3609, 0, sizeof rc3609);  rc3609.f_HEAD = NULL; rc3609.f_TAIL = NULL; rc3609; }), 0);
((*(R7 *)rt_nil_check(g_W))).f_CTXS = NULL;
r_PUSH_CTX(((rt_int)1LL), r_NO_TEXT());
for (;;) {
{
l_S_3604 = p_SEGS;
for (;;) {
if ((l_S_3604 == NULL)) goto L_end3611;
{
if ((((*(R17 *)rt_nil_check(l_S_3604))).f_D == NULL))
{
if (r_SEGMENT_READY(l_S_3604, p_SEGS))
{
goto L_end3611;
}
}
l_S_3604 = ((*(R17 *)rt_nil_check(l_S_3604))).f_NEXT;
}
RT_B_TICK();
} L_end3611: ;
if ((l_S_3604 == NULL))
{
goto L_end3610;
}
((*(R17 *)rt_nil_check(l_S_3604))).f_D = l_S_3604;
l_MAINS_3605 = rt_add(l_MAINS_3605, ((*(R17 *)rt_nil_check(l_S_3604))).f_IV);
if (((((*(R17 *)rt_nil_check(l_S_3604))).f_IV == ((rt_int)0LL)) && (!(((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_S_3604))).f_B))).f_B == NULL))))
{
r_FAIL(((*(R17 *)rt_nil_check(l_S_3604))).f_LINE, rt_str("only the MAIN segment has statements (4.2)", 42));
}
r_OPEN_SCOPE();
r_BEGIN_SEGMENT(l_S_3604);
if (r_USES_SEGMENT(l_S_3604, rt_str("TERMINAL", 8)))
{
r_PREDEFINE_TERMINAL();
}
((*(R7 *)rt_nil_check(g_W))).f_EXTSEG = r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_EXTS, ((*(R17 *)rt_nil_check(l_S_3604))).f_NAME);
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_SEPSEG, r_NO_TEXT(), 0);
((*(R7 *)rt_nil_check(g_W))).f_SEPV = ((rt_int)0LL);
((*(R7 *)rt_nil_check(g_W))).f_SEPR = ((rt_int)0LL);
if ((((*(R7 *)rt_nil_check(g_W))).f_EXTSEG || ((((*(R7 *)rt_nil_check(g_W))).f_SEPC && r_IN_IDENTS(((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS, ((*(R17 *)rt_nil_check(l_S_3604))).f_NAME)))))
{
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_SEPSEG, ((*(R17 *)rt_nil_check(l_S_3604))).f_NAME, 0);
if ((((*(R17 *)rt_nil_check(l_S_3604))).f_IV == ((rt_int)1LL)))
{
r_FAIL(((*(R17 *)rt_nil_check(l_S_3604))).f_LINE, rt_str("a MAIN segment is not translated separately (4.2)", 49));
}
}
if (((*(R7 *)rt_nil_check(g_W))).f_EXTSEG)
{
{
R14 l_SAVED_CODE_3612; memset(&l_SAVED_CODE_3612, 0, sizeof l_SAVED_CODE_3612);
S_R14(&l_SAVED_CODE_3612, ((*(R7 *)rt_nil_check(g_W))).f_CODE, 0);
r_CLOSED_BODY(((*(R17 *)rt_nil_check(l_S_3604))).f_B);
S_R14(&((*(R7 *)rt_nil_check(g_W))).f_CODE, l_SAVED_CODE_3612, 0);
r_CODE(r_FMT1(rt_str("bs_@_init();", 12), r_CID(((*(R17 *)rt_nil_check(l_S_3604))).f_NAME)));
r_EMIT(g_O_PROTOS, r_FMT1(rt_str("void bs_@_init(void);", 21), r_CID(((*(R17 *)rt_nil_check(l_S_3604))).f_NAME)));
{
R17 * l_X_3613; memset(&l_X_3613, 0, sizeof l_X_3613);
l_X_3613 = ((*(R7 *)rt_nil_check(g_W))).f_EXTS;
for (;;) {
if (r_TEQ(((*(R17 *)rt_nil_check(l_X_3613))).f_NAME, ((*(R17 *)rt_nil_check(l_S_3604))).f_NAME)) goto L_end3614;
{
l_X_3613 = ((*(R17 *)rt_nil_check(l_X_3613))).f_NEXT;
}
RT_B_TICK();
} L_end3614: ;
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("extern int bs_@_iface_@;", 24), r_CID(((*(R17 *)rt_nil_check(l_S_3604))).f_NAME), r_NUM(((*(R17 *)rt_nil_check(l_X_3613))).f_IV)));
r_EMIT(g_O_GLOBALS, r_CAT(r_FMT2(rt_str("int *bs_needs_@_@ = ", 20), r_UNIT_NAME(), r_CID(((*(R17 *)rt_nil_check(l_S_3604))).f_NAME)), r_FMT2(rt_str("&bs_@_iface_@;", 14), r_CID(((*(R17 *)rt_nil_check(l_S_3604))).f_NAME), r_NUM(((*(R17 *)rt_nil_check(l_X_3613))).f_IV))));
}
}
}
else
{
r_CLOSED_BODY(((*(R17 *)rt_nil_check(l_S_3604))).f_B);
}
r_SEGMENT_EXPORTS(l_S_3604);
S_R9(&((*(R7 *)rt_nil_check(g_W))).f_SEPSEG, r_NO_TEXT(), 0);
((*(R7 *)rt_nil_check(g_W))).f_EXTSEG = 0;
}
RT_B_TICK();
} L_end3610: ;
l_S_3604 = p_SEGS;
for (;;) {
if ((l_S_3604 == NULL)) goto L_end3615;
{
if ((((*(R17 *)rt_nil_check(l_S_3604))).f_D == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_S_3604))).f_LINE, rt_str("the segments use each other: ", 29), ((*(R17 *)rt_nil_check(l_S_3604))).f_NAME);
}
l_S_3604 = ((*(R17 *)rt_nil_check(l_S_3604))).f_NEXT;
}
RT_B_TICK();
} L_end3615: ;
if (((!(l_MAINS_3605 == ((rt_int)1LL))) && (!((*(R7 *)rt_nil_check(g_W))).f_SEPC)))
{
r_FAIL(((rt_int)0LL), rt_str("a program has exactly one MAIN segment (4.2)", 44));
}
{
R17 * l_X_3616; memset(&l_X_3616, 0, sizeof l_X_3616);
l_X_3616 = ((*(R7 *)rt_nil_check(g_W))).f_EXCS;
for (;;) {
if ((l_X_3616 == NULL)) goto L_end3617;
{
r_EMIT(g_O_GLOBALS, r_FMT1(rt_str("static int x_@;", 15), r_CID(((*(R17 *)rt_nil_check(l_X_3616))).f_NAME)));
r_EMIT(g_O_STARTUP, r_FMT2(rt_str("x_@ = rt_exc(@);", 16), r_CID(((*(R17 *)rt_nil_check(l_X_3616))).f_NAME), r_CSTRING(((*(R17 *)rt_nil_check(l_X_3616))).f_NAME)));
l_X_3616 = ((*(R17 *)rt_nil_check(l_X_3616))).f_NEXT;
}
RT_B_TICK();
} L_end3617: ;
}
r_APPEND_BUF(C_R14(((*(R7 *)rt_nil_check(g_W))).f_CODE), &(((*(R7 *)rt_nil_check(g_W))).f_OUT).p[rt_b_ix1(g_O_MAIN, (((*(R7 *)rt_nil_check(g_W))).f_OUT).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_OUT).hi[0])]);
if (((*(R7 *)rt_nil_check(g_W))).f_SEPC)
{
{
R9 l_T_3618; memset(&l_T_3618, 0, sizeof l_T_3618);
S_R9(&l_T_3618, r_INPUT_TEXT(), 0);
R9 l_NAME_3619; memset(&l_NAME_3619, 0, sizeof l_NAME_3619);
S_R9(&l_NAME_3619, ((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS))).f_NAME, 0);
rt_int l_FP_3620; memset(&l_FP_3620, 0, sizeof l_FP_3620);
l_FP_3620 = r_TEXT_PRINT(r_STR(l_T_3618, (l_T_3618).f_LEN));
r_EMITS(g_O_MAIN, rt_str("}", 1));
r_EMIT(g_O_GLOBALS, r_FMT2(rt_str("int bs_@_iface_@ = 1;", 21), r_CID(l_NAME_3619), r_NUM(l_FP_3620)));
r_WRITE_FILE_T(r_LIB_FILE(((*(R7 *)rt_nil_check(g_W))).f_LIBDIR, l_NAME_3619, rt_str(".bif", 4)), l_T_3618);
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
{ R9 rv3621 = r_CID(((*(R17 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_OWNSEGS))).f_NAME);
return rv3621; }
}
{ R9 rv3622 = r_MK(rt_str("MAIN", 4));
return rv3622; }
rt_raise(RT_X_INIT);
}
static rt_int r_FROM_DEFINED_MODULE(R17 * p_S, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3623; memset(&l_M_3623, 0, sizeof l_M_3623);
l_M_3623 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((((*(R12 *)rt_nil_check(p_Y))).f_ORIG == NULL))
{
{ rt_int rv3624 = 0;
return rv3624; }
}
for (;;) {
if ((l_M_3623 == NULL)) goto L_end3625;
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_M_3623))).f_NAME))
{
{ rt_int rv3626 = 1;
return rv3626; }
}
l_M_3623 = ((*(R12 *)rt_nil_check(l_M_3623))).f_MODL;
}
RT_B_TICK();
} L_end3625: ;
{ rt_int rv3627 = 0;
return rv3627; }
rt_raise(RT_X_INIT);
}
static void r_SEGMENT_EXPORTS(R17 * p_S) { RT_B_TICK(); 
R12 * l_MARK_3628; memset(&l_MARK_3628, 0, sizeof l_MARK_3628);
l_MARK_3628 = ((*(R7 *)rt_nil_check(g_W))).f_SCOPE;
R12 * l_TAKEN_3629; memset(&l_TAKEN_3629, 0, sizeof l_TAKEN_3629);
R12 * l_SEG_3630; memset(&l_SEG_3630, 0, sizeof l_SEG_3630);
l_SEG_3630 = ((*(R7 *)rt_nil_check(g_W))).f_CURSEG;
R17 * l_NAMES_3631; memset(&l_NAMES_3631, 0, sizeof l_NAMES_3631);
l_NAMES_3631 = NULL;
for (;;) {
if ((l_MARK_3628 == NULL)) goto L_end3632;
{
if ((((*(R12 *)rt_nil_check(l_MARK_3628))).f_DEPTH < ((*(R7 *)rt_nil_check(g_W))).f_DEPTH))
{
goto L_end3632;
}
l_MARK_3628 = ((*(R12 *)rt_nil_check(l_MARK_3628))).f_SNEXT;
}
RT_B_TICK();
} L_end3632: ;
l_TAKEN_3629 = r_TAKE_SCOPE(l_MARK_3628);
((*(R7 *)rt_nil_check(g_W))).f_DEPTH = rt_sub(((*(R7 *)rt_nil_check(g_W))).f_DEPTH, ((rt_int)1LL));
{
R17 * l_X_3633; memset(&l_X_3633, 0, sizeof l_X_3633);
l_X_3633 = ((*(R17 *)rt_nil_check(p_S))).f_C;
for (;;) {
if ((l_X_3633 == NULL)) goto L_end3634;
{
{
R12 * l_Y_3635; memset(&l_Y_3635, 0, sizeof l_Y_3635);
l_Y_3635 = l_TAKEN_3629;
rt_int l_FOUND_3636; memset(&l_FOUND_3636, 0, sizeof l_FOUND_3636);
l_FOUND_3636 = (!(r_LOOKUP(((*(R17 *)rt_nil_check(l_X_3633))).f_NAME) == NULL));
for (;;) {
if ((l_Y_3635 == NULL)) goto L_end3637;
{
if ((r_TEQ(((*(R12 *)rt_nil_check(l_Y_3635))).f_NAME, ((*(R17 *)rt_nil_check(l_X_3633))).f_NAME) || r_TEQ(((*(R12 *)rt_nil_check(l_Y_3635))).f_PREFIX, ((*(R17 *)rt_nil_check(l_X_3633))).f_NAME)))
{
l_FOUND_3636 = 1;
}
else if ((((*(R12 *)rt_nil_check(l_Y_3635))).f_KIND == g_Y_ROUTINE))
{
if (r_TEQ(r_BASE_NAME(l_Y_3635), ((*(R17 *)rt_nil_check(l_X_3633))).f_NAME))
{
l_FOUND_3636 = 1;
}
}
l_Y_3635 = ((*(R12 *)rt_nil_check(l_Y_3635))).f_SNEXT;
}
RT_B_TICK();
} L_end3637: ;
if ((!l_FOUND_3636))
{
r_FAILT(((*(R17 *)rt_nil_check(l_X_3633))).f_LINE, rt_str("DEFINES names a name local to the segment or imported into it (4.2): ", 69), ((*(R17 *)rt_nil_check(l_X_3633))).f_NAME);
}
l_NAMES_3631 = r_NAME_REF(((*(R17 *)rt_nil_check(l_X_3633))).f_NAME, ((rt_int)0LL), NULL, l_NAMES_3631);
}
l_X_3633 = ((*(R17 *)rt_nil_check(l_X_3633))).f_NEXT;
}
RT_B_TICK();
} L_end3634: ;
}
for (;;) {
if ((l_TAKEN_3629 == NULL)) goto L_end3638;
{
{
R12 * l_NEXT_3639; memset(&l_NEXT_3639, 0, sizeof l_NEXT_3639);
l_NEXT_3639 = ((*(R12 *)rt_nil_check(l_TAKEN_3629))).f_SNEXT;
if (((!(((*(R12 *)rt_nil_check(l_TAKEN_3629))).f_KIND == g_Y_BUILTIN)) && (((((((((*(R17 *)rt_nil_check(p_S))).f_FL == ((rt_int)1LL)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_3629))).f_NAME)) || r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, ((*(R12 *)rt_nil_check(l_TAKEN_3629))).f_PREFIX)) || (((*(R12 *)rt_nil_check(l_TAKEN_3629))).f_KIND == g_Y_ENUMLIT)) || r_FROM_DEFINED_MODULE(p_S, l_TAKEN_3629)) || (((((*(R12 *)rt_nil_check(l_TAKEN_3629))).f_KIND == g_Y_ROUTINE) && r_IN_IDENTS(((*(R17 *)rt_nil_check(p_S))).f_C, r_BASE_NAME(l_TAKEN_3629))))))))
{
((*(R12 *)rt_nil_check(l_TAKEN_3629))).f_SEGM = l_SEG_3630;
l_NAMES_3631 = r_NAME_REF(((*(R12 *)rt_nil_check(l_TAKEN_3629))).f_NAME, ((rt_int)0LL), NULL, l_NAMES_3631);
r_DEFINE(l_TAKEN_3629, ((*(R17 *)rt_nil_check(p_S))).f_LINE);
}
else if ((!(((*(R12 *)rt_nil_check(l_TAKEN_3629))).f_KIND == g_Y_BUILTIN)))
{
((*(R12 *)rt_nil_check(l_TAKEN_3629))).f_SNEXT = ((*(R12 *)rt_nil_check(l_SEG_3630))).f_MEMBERS;
((*(R12 *)rt_nil_check(l_SEG_3630))).f_MEMBERS = l_TAKEN_3629;
}
l_TAKEN_3629 = l_NEXT_3639;
}
}
RT_B_TICK();
} L_end3638: ;
((*(R12 *)rt_nil_check(l_SEG_3630))).f_USES = l_NAMES_3631;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = NULL;
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = NULL;
}
static void r_BEGIN_SEGMENT(R17 * p_S) { RT_B_TICK(); 
R12 * l_SEG_3640; memset(&l_SEG_3640, 0, sizeof l_SEG_3640);
l_SEG_3640 = r_NEW_SYM(g_Y_SEGMENT, ((*(R17 *)rt_nil_check(p_S))).f_NAME);
R17 * l_U_3641; memset(&l_U_3641, 0, sizeof l_U_3641);
l_U_3641 = ((*(R17 *)rt_nil_check(p_S))).f_A;
((*(R12 *)rt_nil_check(l_SEG_3640))).f_DECL = p_S;
((*(R12 *)rt_nil_check(l_SEG_3640))).f_INSTANCES = ((*(R7 *)rt_nil_check(g_W))).f_SEGS;
((*(R7 *)rt_nil_check(g_W))).f_SEGS = l_SEG_3640;
for (;;) {
if ((l_U_3641 == NULL)) goto L_end3642;
{
if ((!r_TEQS(((*(R17 *)rt_nil_check(l_U_3641))).f_NAME, rt_str("TERMINAL", 8))))
{
{
R12 * l_T_3643; memset(&l_T_3643, 0, sizeof l_T_3643);
l_T_3643 = r_FIND_SEGMENT(((*(R17 *)rt_nil_check(l_U_3641))).f_NAME);
if ((l_T_3643 == NULL))
{
r_FAILT(((*(R17 *)rt_nil_check(l_U_3641))).f_LINE, rt_str("USES names a segment of the program (4.2): ", 43), ((*(R17 *)rt_nil_check(l_U_3641))).f_NAME);
}
if ((!(((*(R17 *)rt_nil_check(l_U_3641))).f_A == NULL)))
{
r_CHECK_ITEMS_DEFINED(l_T_3643, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3641))).f_A))).f_A);
r_CHECK_ITEMS_DEFINED(l_T_3643, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3641))).f_A))).f_B);
r_CHECK_ITEMS_DEFINED(l_T_3643, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3641))).f_A))).f_C);
r_CHECK_ITEMS_DEFINED(l_T_3643, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3641))).f_A))).f_D);
r_CHECK_ITEMS_DEFINED(l_T_3643, ((*(R17 *)rt_nil_check(((*(R17 *)rt_nil_check(l_U_3641))).f_A))).f_E);
}
}
}
l_U_3641 = ((*(R17 *)rt_nil_check(l_U_3641))).f_NEXT;
}
RT_B_TICK();
} L_end3642: ;
((*(R7 *)rt_nil_check(g_W))).f_CURSEG = l_SEG_3640;
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = l_SEG_3640;
l_U_3641 = ((*(R17 *)rt_nil_check(p_S))).f_A;
for (;;) {
if ((l_U_3641 == NULL)) goto L_end3644;
{
if ((!(((*(R17 *)rt_nil_check(l_U_3641))).f_A == NULL)))
{
r_INPUT_IMPORT_CONFLICT(((*(R17 *)rt_nil_check(l_U_3641))).f_A, ((*(R17 *)rt_nil_check(l_U_3641))).f_LINE);
}
l_U_3641 = ((*(R17 *)rt_nil_check(l_U_3641))).f_NEXT;
}
RT_B_TICK();
} L_end3644: ;
}
static R12 * r_ENTER_HOME(R12 * p_Y) { RT_B_TICK(); 
R12 * l_SAVED_3645; memset(&l_SAVED_3645, 0, sizeof l_SAVED_3645);
l_SAVED_3645 = ((*(R7 *)rt_nil_check(g_W))).f_TRSEG;
if (((((*(R12 *)rt_nil_check(p_Y))).f_HOME == NULL) || (((*(R12 *)rt_nil_check(p_Y))).f_HOME == ((*(R7 *)rt_nil_check(g_W))).f_TRSEG)))
{
{ R12 * rv3646 = l_SAVED_3645;
return rv3646; }
}
r_OPEN_SCOPE();
{
R12 * l_X_3647; memset(&l_X_3647, 0, sizeof l_X_3647);
l_X_3647 = ((*(R12 *)rt_nil_check(((*(R12 *)rt_nil_check(p_Y))).f_HOME))).f_MEMBERS;
for (;;) {
if ((l_X_3647 == NULL)) goto L_end3648;
{
{
R12 * l_A_3649; memset(&l_A_3649, 0, sizeof l_A_3649);
l_A_3649 = r_NEW_SYM(((*(R12 *)rt_nil_check(l_X_3647))).f_KIND, ((*(R12 *)rt_nil_check(l_X_3647))).f_NAME);
S_R12(&(*(R12 *)rt_nil_check(l_A_3649)), (*(R12 *)rt_nil_check(l_X_3647)), 0);
((*(R12 *)rt_nil_check(l_A_3649))).f_ORIG = r_ORIGINAL(l_X_3647);
r_DEFINE_ALIAS(l_A_3649);
}
l_X_3647 = ((*(R12 *)rt_nil_check(l_X_3647))).f_SNEXT;
}
RT_B_TICK();
} L_end3648: ;
}
((*(R7 *)rt_nil_check(g_W))).f_TRSEG = ((*(R12 *)rt_nil_check(p_Y))).f_HOME;
{ R12 * rv3650 = l_SAVED_3645;
return rv3650; }
rt_raise(RT_X_INIT);
}
static void r_DEFINE_ALIAS(R12 * p_A) { RT_B_TICK(); 
rt_int l_B_3651; memset(&l_B_3651, 0, sizeof l_B_3651);
l_B_3651 = r_BUCKET(((*(R12 *)rt_nil_check(p_A))).f_NAME);
((*(R12 *)rt_nil_check(p_A))).f_DEPTH = ((*(R7 *)rt_nil_check(g_W))).f_DEPTH;
((*(R12 *)rt_nil_check(p_A))).f_CHAIN = (((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_3651, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])];
(((*(R7 *)rt_nil_check(g_W))).f_TABLE).p[rt_b_ix1(l_B_3651, (((*(R7 *)rt_nil_check(g_W))).f_TABLE).lo[0], (((*(R7 *)rt_nil_check(g_W))).f_TABLE).hi[0])] = p_A;
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
R12 * l_T_3652; memset(&l_T_3652, 0, sizeof l_T_3652);
l_T_3652 = ((*(R7 *)rt_nil_check(g_W))).f_SEGS;
for (;;) {
if ((l_T_3652 == NULL)) goto L_end3653;
{
if (r_TEQ(((*(R12 *)rt_nil_check(l_T_3652))).f_NAME, p_NAME))
{
{ R12 * rv3654 = l_T_3652;
return rv3654; }
}
l_T_3652 = ((*(R12 *)rt_nil_check(l_T_3652))).f_INSTANCES;
}
RT_B_TICK();
} L_end3653: ;
{ R12 * rv3655 = NULL;
return rv3655; }
rt_raise(RT_X_INIT);
}
static void r_CHECK_ITEMS_DEFINED(R12 * p_T, R17 * p_L) { RT_B_TICK(); 
R17 * l_N_3656; memset(&l_N_3656, 0, sizeof l_N_3656);
l_N_3656 = p_L;
for (;;) {
if ((l_N_3656 == NULL)) goto L_end3657;
{
if ((!r_IN_IDENTS(((*(R12 *)rt_nil_check(p_T))).f_USES, ((*(R17 *)rt_nil_check(l_N_3656))).f_NAME)))
{
r_FAILT(((*(R17 *)rt_nil_check(l_N_3656))).f_LINE, rt_str("the segment does not define ", 28), ((*(R17 *)rt_nil_check(l_N_3656))).f_NAME);
}
l_N_3656 = ((*(R17 *)rt_nil_check(l_N_3656))).f_NEXT;
}
RT_B_TICK();
} L_end3657: ;
}
static rt_int r_SEG_VISIBLE(R12 * p_Y, rt_int p_LINE) { RT_B_TICK(); 
R17 * l_U_3658; memset(&l_U_3658, 0, sizeof l_U_3658);
rt_int l_INPUT_ONLY_3659; memset(&l_INPUT_ONLY_3659, 0, sizeof l_INPUT_ONLY_3659);
l_INPUT_ONLY_3659 = 0;
if (((((((*(R7 *)rt_nil_check(g_W))).f_CURSEG == NULL) || (((*(R12 *)rt_nil_check(p_Y))).f_SEGM == NULL)) || (((*(R7 *)rt_nil_check(g_W))).f_IN_TYPEDECL > ((rt_int)0LL))) || (((*(R7 *)rt_nil_check(g_W))).f_IN_RECORD > ((rt_int)0LL))))
{
{ rt_int rv3660 = 1;
return rv3660; }
}
if ((((*(R12 *)rt_nil_check(p_Y))).f_SEGM == ((*(R7 *)rt_nil_check(g_W))).f_CURSEG))
{
{ rt_int rv3661 = 1;
return rv3661; }
}
l_U_3658 = ((*(R17 *)rt_nil_check(((*(R12 *)rt_nil_check(((*(R7 *)rt_nil_check(g_W))).f_CURSEG))).f_DECL))).f_A;
for (;;) {
if ((l_U_3658 == NULL)) goto L_end3662;
{
{
R12 * l_T_3663; memset(&l_T_3663, 0, sizeof l_T_3663);
l_T_3663 = r_FIND_SEGMENT(((*(R17 *)rt_nil_check(l_U_3658))).f_NAME);
if ((!(l_T_3663 == NULL)))
{
if (r_IN_IDENTS(((*(R12 *)rt_nil_check(l_T_3663))).f_USES, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
if ((((*(R17 *)rt_nil_check(l_U_3658))).f_A == NULL))
{
{ rt_int rv3664 = 1;
return rv3664; }
}
{
R17 * l_I_3665; memset(&l_I_3665, 0, sizeof l_I_3665);
l_I_3665 = ((*(R17 *)rt_nil_check(l_U_3658))).f_A;
if (((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_VAR) || (((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_CONST)))
{
if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3665))).f_B, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
{ rt_int rv3666 = 1;
return rv3666; }
}
else if (r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3665))).f_A, ((*(R12 *)rt_nil_check(p_Y))).f_NAME))
{
l_INPUT_ONLY_3659 = 1;
}
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_ROUTINE))
{
if ((((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3665))).f_C, ((*(R12 *)rt_nil_check(p_Y))).f_NAME) || r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3665))).f_C, r_BASE_NAME(p_Y))) || r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3665))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_PREFIX)) || r_FROM_MODULES(((*(R17 *)rt_nil_check(l_I_3665))).f_E, p_Y)))
{
{ rt_int rv3667 = 1;
return rv3667; }
}
}
else if ((((*(R12 *)rt_nil_check(p_Y))).f_KIND == g_Y_TYPE))
{
if ((r_IN_IDENTS(((*(R17 *)rt_nil_check(l_I_3665))).f_D, ((*(R12 *)rt_nil_check(p_Y))).f_NAME) || r_FROM_MODULES(((*(R17 *)rt_nil_check(l_I_3665))).f_E, p_Y)))
{
{ rt_int rv3668 = 1;
return rv3668; }
}
}
else
{
{ rt_int rv3669 = 1;
return rv3669; }
}
}
}
}
}
l_U_3658 = ((*(R17 *)rt_nil_check(l_U_3658))).f_NEXT;
}
RT_B_TICK();
} L_end3662: ;
if (l_INPUT_ONLY_3659)
{
{ rt_int rv3670 = 0;
return rv3670; }
}
r_FAILT(p_LINE, rt_str("not imported by the USES clause of the segment (4.2): ", 54), ((*(R12 *)rt_nil_check(p_Y))).f_NAME);
rt_raise(RT_X_INIT);
}
static rt_int r_FROM_MODULES(R17 * p_MODS, R12 * p_Y) { RT_B_TICK(); 
R12 * l_M_3671; memset(&l_M_3671, 0, sizeof l_M_3671);
l_M_3671 = ((*(R12 *)rt_nil_check(p_Y))).f_MODL;
if ((p_MODS == NULL))
{
{ rt_int rv3672 = 0;
return rv3672; }
}
for (;;) {
if ((l_M_3671 == NULL)) goto L_end3673;
{
if (r_IN_IDENTS(p_MODS, ((*(R12 *)rt_nil_check(l_M_3671))).f_NAME))
{
{ rt_int rv3674 = 1;
return rv3674; }
}
l_M_3671 = ((*(R12 *)rt_nil_check(l_M_3671))).f_MODL;
}
RT_B_TICK();
} L_end3673: ;
{ rt_int rv3675 = 0;
return rv3675; }
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
