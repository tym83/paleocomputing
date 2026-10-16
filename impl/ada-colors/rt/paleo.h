/* Runtime shared by the RED and GREEN compilers.
 *
 * Both front ends translate to C and link against this file. It provides
 * value strings, exceptions (setjmp/longjmp), checked integer arithmetic,
 * text I/O, and a deterministic task scheduler: every task is a thread, but a
 * baton makes sure exactly one of them runs at a time, so the RED priority
 * scheduler (highest priority first, FIFO within a priority) is followed
 * exactly and every run of a program prints the same thing. Time is virtual:
 * when every task is blocked, the clock jumps to the next wake-up.
 */
#ifndef PALEO_H
#define PALEO_H

#include <setjmp.h>
#include <stddef.h>
#include <stdint.h>

typedef int64_t rt_int;

/* number of components of a RED array descriptor {lo, hi, lo2, hi2, p} */
#define RT_CNT(a) (((a).hi >= (a).lo && (a).hi2 >= (a).lo2) ? \
                   ((a).hi - (a).lo + 1) * ((a).hi2 - (a).lo2 + 1) : 0)

/* ---- memory ---------------------------------------------------------- */
void *rt_alloc(size_t n);

/* ---- strings: a value is a length and a buffer the value owns ---------- */
typedef struct {
  rt_int len;
  unsigned char *p;
} rstr;

rstr rt_str(const char *s, rt_int len);          /* from a C literal */
rstr rt_str_new(rt_int len);                     /* blank buffer of len chars */
rstr rt_str_copy(rstr s);                      /* deep copy */
rstr rt_str_cat(rstr a, rstr b);
rstr rt_str_catc(rstr a, int c);
rstr rt_str_ccat(int c, rstr b);
rstr rt_str_cc(int a, int b);
rstr rt_str_chr(int c);
int rt_str_eq(rstr a, rstr b);
int rt_str_lt(rstr a, rstr b);
int rt_str_le(rstr a, rstr b);
int rt_str_get(rstr s, rt_int i);                /* 1-based, checked */
unsigned char *rt_str_at(rstr *s, rt_int i);     /* address of s(i), checked */
rstr rt_str_slice(rstr s, rt_int i, rt_int j);     /* shares the buffer */
void rt_str_assign(rstr *dst, rstr src);       /* same length required */
void rt_str_slice_assign(rstr *dst, rt_int i, rt_int j, rstr src);
rstr rt_str_of_int(rt_int v);
rstr rt_str_of_float(double v, int prec);
rstr rt_format(double v, rt_int n, rt_int m);   /* RED A.3 FORMAT */
rt_int rt_int_of_str(rstr s);
const char *rt_cstr(rstr s);                   /* NUL-terminated copy */

/* ---- exceptions ------------------------------------------------------ */
typedef struct rt_frame {
  jmp_buf jb;
  struct rt_frame *prev;
} rt_frame;

extern __thread rt_frame *rt_xtop;
extern __thread int rt_xcur;

int rt_exc(const char *name);                  /* register, return id */
const char *rt_exc_name(int id);
_Noreturn void rt_raise(int id);
_Noreturn void rt_raise_msg(int id, const char *msg);
void *rt_nil_check(void *p);                   /* raises RT_X_NIL */

#define RT_TRY(f) ((f).prev = rt_xtop, rt_xtop = &(f), setjmp((f).jb) == 0)
#define RT_POP(f) (rt_xtop = (f).prev)

/* Exceptions the runtime itself raises. Front ends map their own names
 * (X_RANGE, CONSTRAINT_ERROR, ...) onto these ids at start-up. */
extern int RT_X_RANGE, RT_X_SUBSCRIPT, RT_X_OVERFLOW, RT_X_ZERO_DIVIDE,
    RT_X_NIL, RT_X_ASSERT, RT_X_SUBTYPE, RT_X_TAG, RT_X_CASE, RT_X_CREATE,
    RT_X_TERMINATE, RT_X_EMPTY_MAILBOX, RT_X_FREE, RT_X_INIT, RT_X_NEG_EXP,
    RT_X_FILE, RT_X_TASKING, RT_X_DEADLOCK;
void rt_init(int argc, char **argv);
void rt_set_lang(int green);                   /* names for diagnostics */

/* ---- checked arithmetic ---------------------------------------------- */
rt_int rt_range(rt_int v, rt_int lo, rt_int hi);       /* raises RT_X_RANGE */
rt_int rt_index(rt_int v, rt_int lo, rt_int hi);       /* raises RT_X_SUBSCRIPT */
double rt_frange(double v, double lo, double hi);
rt_int rt_add(rt_int a, rt_int b);
rt_int rt_sub(rt_int a, rt_int b);
rt_int rt_mul(rt_int a, rt_int b);
rt_int rt_div(rt_int a, rt_int b);                   /* floor, RED DIV */
rt_int rt_mod(rt_int a, rt_int b);                   /* sign of b, RED MOD */
rt_int rt_quot(rt_int a, rt_int b);                  /* truncating, Ada "/" */
rt_int rt_rem(rt_int a, rt_int b);                   /* sign of a, Ada rem */
rt_int rt_pow(rt_int a, rt_int b);
rt_int rt_neg(rt_int a);
rt_int rt_abs(rt_int a);
double rt_fpow(double a, rt_int b);
double rt_fdiv(double a, double b);

/* ---- text I/O -------------------------------------------------------- */
void rt_put(rstr s);
void rt_putc(int c);
void rt_putln(rstr s);
void rt_newline(void);
int rt_eof(void);
rt_int rt_sizeln(void);
void rt_readln(rstr *dst);                     /* dst->len == sizeln */
rstr rt_getln(void);                           /* whole line, any length */
int rt_getc(void);                             /* next char or -1 */
void rt_flush(void);
rstr rt_arg(rt_int i);                           /* command line argument */
rt_int rt_argc(void);
rstr rt_read_file(rstr name);                  /* whole file */
void rt_write_file(rstr name, rstr text);
_Noreturn void rt_exit(rt_int code);

/* ---- sets of small integers / enums ---------------------------------- */
typedef struct {
  uint64_t w[4];
} rset;                                        /* elements 0..255 */
rset rt_set_empty(void);
rset rt_set_add(rset s, rt_int e);
int rt_set_in(rt_int e, rset s);
rset rt_set_or(rset a, rset b);
rset rt_set_and(rset a, rset b);
rset rt_set_xor(rset a, rset b);
rset rt_set_not(rset a, rt_int lo, rt_int hi);
int rt_set_eq(rset a, rset b);
int rt_set_le(rset a, rset b);

/* ---- tasks ----------------------------------------------------------- */
typedef struct rt_task rt_task;

typedef struct rt_waiter rt_waiter;

typedef struct {
  rt_task *t;
  int active;
  rt_waiter *waiters;                          /* DELAY_UNTIL_INACTIVE */
} rt_act;                                      /* RED ACT variable */

typedef struct {
  int live;                                    /* activations still running */
  rt_waiter *waiters;
} rt_taskdecl;

void rt_create(rt_act *a, rt_taskdecl *d, void (*fn)(void *), void *frame);
rt_act *rt_me(void);
rt_int rt_priority(rt_act *a);
void rt_set_priority(rt_act *a, rt_int p);
void rt_exterminate(rt_act *a);
void rt_await_decl(rt_taskdecl *d);            /* leaving a task's scope */
void rt_delay_until_inactive(rt_act *a);
int rt_is_active(rt_act *a);
void rt_yield(void);

/* virtual clock */
extern rt_int RT_MILLISECONDS, RT_SECONDS, RT_MINUTES, RT_HOURS;
rt_int rt_time(void);
void rt_delay(rt_int ticks);
void rt_delay_until(rt_int t);

/* mailboxes: copy() deep-copies one message */
typedef void (*rt_copyfn)(void *dst, const void *src);
typedef struct {
  rt_int cap;
  size_t esz;
  rt_copyfn copy;
  unsigned char *buf;
  rt_int head, count;
  rt_waiter *senders, *receivers;              /* FIFO lists */
} rt_mbox;

void rt_mbox_init(rt_mbox *m, rt_int cap, size_t esz, rt_copyfn copy);
void rt_send(rt_mbox *m, const void *msg);
void rt_receive(rt_mbox *m, void *dst);
rt_int rt_mbox_count(rt_mbox *m);
int rt_cond_send(rt_mbox *m, const void *msg);   /* RED C.11: never waits */
int rt_cond_receive(rt_mbox *m, void *dst);

/* the WAIT statement: try alternatives, else block on all of them */
enum { RT_ALT_SEND = 1, RT_ALT_RECEIVE, RT_ALT_DELAY, RT_ALT_DELAY_UNTIL,
       RT_ALT_INACTIVE, RT_ALT_ACCEPT, RT_ALT_TERMINATE, RT_ALT_ELSE };
typedef struct {
  int kind;
  int open;                                    /* guard */
  void *obj;                                   /* mailbox, act or entry */
  void *data;
  rt_int t;
} rt_alt;
int rt_wait(int n, rt_alt *alts);              /* index of the one taken */

/* data locks and the region statement */
typedef struct {
  rt_task *owner;
  rt_waiter *q;
} rt_lock;
void rt_lock_init(rt_lock *l);
void rt_region_enter(rt_lock *l);
void rt_region_leave(rt_lock *l);

/* GREEN rendezvous */
typedef struct {
  rt_waiter *callers, *acceptors;
} rt_entry;
void rt_entry_init(rt_entry *e);
void rt_entry_call(rt_entry *e, void *params);
void *rt_accept_begin(rt_entry *e);            /* blocks for a caller */
void rt_accept_end(rt_entry *e, int failed, int exc);
rt_int rt_entry_count(rt_entry *e);
void rt_main_done(void);                       /* main body finished */

/* ---- GREEN TEXT_IO (RM79 14.3-14.4) ----------------------------------- */
/* Column-tracking output: a PUT of a non-character item is preceded by one
 * space except at column 1; numbers are right-justified within WIDTH. */
void rt_g_put(rstr s);
void rt_g_putc(int c);
void rt_g_put_int(rt_int v, rt_int width);
void rt_g_put_bool(int v, rt_int width);
void rt_g_put_float(double v, rt_int width, rt_int fract);
int rt_g_getc(void);                           /* END_OF_FILE at the end */
rt_int rt_g_get_int(void);                     /* next integer item */
double rt_g_get_float(void);                   /* next real item */
rstr rt_g_image_float(double v);               /* T'REP for floats */
rt_int rt_g_col(void);

/* GREEN abort (RM79 9.10): the task ends unconditionally; its handlers
 * re-raise at once instead of handling the exception */
void rt_g_abort(rt_act *a);
int rt_g_aborted(void);

/* GREEN foreign body (RM79 13.9) for the 1979 file-handling problem: copy
 * N bytes between two addresses in linear memory */
void rt_g_move_bytes(rt_int from, rt_int to, rt_int n);

#endif

/* YELLOW additions */
/* Runtime support for the YELLOW translator (SRI International, 1978). Nothing
 * above is changed; these declarations only add to the runtime. */
#ifndef PALEO_YELLOW_H
#define PALEO_YELLOW_H

/* ---- arrays: a value is a descriptor of its bounds and a buffer it owns ---- */
#define Y_MAXD 4
typedef struct {
  rt_int lo[Y_MAXD], hi[Y_MAXD];
  void *p;
} yarr;

/* A run-time description of a representation, enough to make, copy and
 * compare values of it. Structured representations get one when they are
 * elaborated, since their bounds are scope-entry constants (L-34). */
typedef struct ydesc ydesc;
enum { YK_INT, YK_BYTE, YK_FLOAT, YK_PTR, YK_SET, YK_ARRAY, YK_RECORD, YK_OPAQUE };
struct ydesc {
  int kind;
  size_t size;                                 /* bytes of one value */
  int deep;                                    /* holds array buffers */
  int nd;                                      /* arrays: dimensions */
  rt_int lo[Y_MAXD], hi[Y_MAXD];
  const ydesc *elem;
  int nf;                                      /* records: fields */
  const size_t *off;
  const ydesc *const *fd;
};
extern const ydesc y_d_int, y_d_byte, y_d_float, y_d_ptr, y_d_set, y_d_opaque;
void y_desc_array(ydesc *d, int nd, const rt_int *lo, const rt_int *hi, const ydesc *elem);
void y_desc_record(ydesc *d, size_t size, int nf, const size_t *off, const ydesc *const *fd);
void y_init(const ydesc *d, void *v);          /* a fresh value: zeros, own buffers */
void y_copy(const ydesc *d, void *dst, const void *src); /* deep copy, dst is fresh */
void y_store(const ydesc *d, void *dst, const void *src); /* assignment: bounds must agree */
int y_eq(const ydesc *d, const void *a, const void *b);
yarr y_str(const char *s, rt_int n);           /* a string literal, 1 .. n */
rt_int y_count(yarr a, int nd);                /* number of components */
yarr y_fill(const ydesc *d, const void *v);    /* T(v): every component v */
void *y_elem_at(yarr a, const ydesc *d, rt_int k); /* k-th component, row-major */
rt_int y_ix1(yarr a, rt_int i);
rt_int y_ix2(yarr a, rt_int i, rt_int j);
rt_int y_ix3(yarr a, rt_int i, rt_int j, rt_int k);
rt_int y_ix4(yarr a, rt_int i, rt_int j, rt_int k, rt_int l);
rt_int y_low(yarr a, rt_int dim);
rt_int y_high(yarr a, rt_int dim);
void y_move(yarr *dst, rt_int at, yarr src, rt_int i, rt_int j, const ydesc *elem);

/* ---- sets over any integer or scalar range (L-33) ---------------------- */
typedef struct {
  rt_int lo, hi;
  uint64_t *w;
} yset;
yset y_set_new(rt_int lo, rt_int hi);          /* the empty set */
yset y_set_add(yset s, rt_int e);              /* a new set with e */
int y_set_in(rt_int e, yset s);
yset y_set_union(yset a, yset b);
yset y_set_diff(yset a, yset b);
yset y_set_inter(yset a, yset b);
yset y_set_xor(yset a, yset b);
yset y_set_compl(yset a);
int y_set_eq(yset a, yset b);

/* ---- files (Section XII): OPEN CLOSE GET PUT CHECK_EOF ------------------- */
typedef struct yfile yfile;
void y_open(yfile **f, yarr name, rt_int mode); /* 0 READ, 1 WRITE, 2 APPEND */
void y_close(yfile **f);
void y_get(yfile **f, void *dst, size_t n);
void y_put(yfile **f, const void *src, size_t n);
int y_check_eof(yfile **f);
extern int Y_X_EOF, Y_X_FILE;

/* ---- processes, monitors and signals (Section X.E) ----------------------- */
typedef struct {
  rt_task *owner;
  int depth;                                   /* nested monitor calls */
  rt_waiter *q;                                /* processes waiting to enter */
  rt_waiter *urgent;                           /* senders waiting to re-enter */
} ymon;
typedef struct {
  ymon *mon;
  rt_waiter *q;                                /* by delay rank, then FIFO */
} ysig;
void y_mon_init(ymon *m);
void y_mon_enter(ymon *m);
void y_mon_leave(ymon *m);
void y_mon_drop(ymon *m);                      /* an exception leaves the monitor */
void y_sig_init(ysig *s, ymon *m);
void y_wait(ysig *s, rt_int rank);
void y_send(ysig *s);
int y_awaited(ysig *s);
void y_create(rt_taskdecl *d, rt_int limit, int has_prio, rt_int prio,
              void (*fn)(void *), void *frame);
rt_int y_self(void);                           /* PROCESS_IDENTITY */
void y_change_priority(rt_int id, rt_int p);
void y_raise_termination(rt_int id);
extern int Y_X_INSTANCES;

/* ---- semaphores (XIV): binary, CLAIM RELEASE CONDITIONAL_CLAIM ----------- */
int y_cond_claim(rt_lock *l);

/* ---- conversions and text helpers ---------------------------------------- */
rt_int y_floor(double v);
rt_int y_ceiling(double v);
rt_int y_near_integer(double v);               /* ties away from zero */
double y_near_fixed(double v, double scale);
double y_fixed(double v, double lo, double hi, double scale); /* checks a FIXED */
double y_fixed_div(double a, double b, double scale);
rt_int y_fmt_int(rt_int v, unsigned char *buf, rt_int cap);
rt_int y_fmt_float(double v, rt_int digits, unsigned char *buf, rt_int cap);
rt_int y_fmt_fixed(double v, rt_int decimals, unsigned char *buf, rt_int cap);
void y_lang(void);           /* the YELLOW exception names; call before rt_init */
extern int Y_X_FIXED, Y_X_ZERO_DENOM, Y_X_NO_RETURN;

#endif
