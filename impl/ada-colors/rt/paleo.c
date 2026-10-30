/* Runtime shared by the RED and GREEN compilers. See paleo.h. */
#include "paleo.h"

#ifndef __wasi__
#include <execinfo.h>
#include <signal.h>
#endif
#include <unistd.h>
#include <math.h>
#include <fenv.h>
#include <float.h>
#include <pthread.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

/* ---- memory ---------------------------------------------------------- */

void *rt_alloc(size_t n) {
  void *p = calloc(1, n ? n : 1);
  if (!p) {
    fprintf(stderr, "*** out of memory\n");
    exit(4);
  }
  return p;
}

/* ---- exceptions ------------------------------------------------------ */

__thread rt_frame *rt_xtop;

/* ---- scannable storage, for FREE (RED 4.4.3) ------------------------------ */

/* the blocks rt_salloc made: an open-addressing table from address to size */
typedef struct { uintptr_t p; size_t n; unsigned mark; } blockrec;
static blockrec *blocks;
static size_t nblocks, cblocks;
static unsigned mark_epoch;
#define DEAD_BLOCK ((uintptr_t)1)

static size_t bslot(uintptr_t p) { return (size_t)((p >> 4) * 2654435761u) & (cblocks - 1); }

static blockrec *bfind(uintptr_t p) {
  if (!cblocks) return NULL;
  for (size_t i = bslot(p);; i = (i + 1) & (cblocks - 1)) {
    if (blocks[i].p == p) return &blocks[i];
    if (blocks[i].p == 0) return NULL;
  }
}

static void binsert(uintptr_t p, size_t n) {
  if ((nblocks + 1) * 2 > cblocks) {
    blockrec *old = blocks;
    size_t oc = cblocks;
    cblocks = cblocks ? cblocks * 2 : 1024;
    blocks = calloc(cblocks, sizeof *blocks);
    if (!blocks) {
      fprintf(stderr, "*** out of memory\n");
      exit(4);
    }
    nblocks = 0;
    for (size_t i = 0; i < oc; i++)
      if (old[i].p > DEAD_BLOCK) binsert(old[i].p, old[i].n);
    free(old);
  }
  size_t i = bslot(p);
  while (blocks[i].p > DEAD_BLOCK) i = (i + 1) & (cblocks - 1);
  blocks[i].p = p;
  blocks[i].n = n;
  blocks[i].mark = 0;
  nblocks++;
}

void *rt_salloc(size_t n) {
  void *p = rt_alloc(n ? n : 1);
  binsert((uintptr_t)p, n ? n : 1);
  return p;
}

typedef struct { void *p; size_t n; } range;
static range *roots;
static size_t nroots, croots;

static void push_range(range **a, size_t *len, size_t *cap, void *p, size_t n) {
  if (*len == *cap) {
    *cap = *cap ? *cap * 2 : 64;
    *a = realloc(*a, *cap * sizeof **a);
    if (!*a) {
      fprintf(stderr, "*** out of memory\n");
      exit(4);
    }
  }
  (*a)[(*len)++] = (range){p, n};
}

void rt_add_root(void *p, size_t n) { push_range(&roots, &nroots, &croots, p, n); }

/* the frames of the active subprograms of one task */
struct rt_fstack {
  range *f;
  size_t depth, cap;
  rt_fstack *next;
};
__thread rt_fstack *rt_fs;
static rt_fstack *all_fstacks;

int rt_fdepth(void) { return rt_fs ? (int)rt_fs->depth : 0; }
void rt_set_fdepth(int d) {
  if (rt_fs) rt_fs->depth = (size_t)d;
}

void rt_fpush(void *f, size_t n) {
  if (!rt_fs) {
    rt_fs = calloc(1, sizeof *rt_fs);
    rt_fs->next = all_fstacks;
    all_fstacks = rt_fs;
  }
  push_range(&rt_fs->f, &rt_fs->depth, &rt_fs->cap, f, n);
}

void rt_fpop(void) {
  if (rt_fs && rt_fs->depth > 0) rt_fs->depth--;
}

__thread int rt_xcur;

static const char *exc_names[4096];
static int exc_count = 1;
static int lang_green;

int rt_exc(const char *name) {
  for (int i = 1; i < exc_count; i++)
    if (strcmp(exc_names[i], name) == 0) return i;
  if (exc_count >= 4096) {
    fprintf(stderr, "*** too many exceptions\n");
    exit(4);
  }
  exc_names[exc_count] = name;
  return exc_count++;
}

const char *rt_exc_name(int id) {
  return id > 0 && id < exc_count ? exc_names[id] : "?";
}

int RT_X_RANGE, RT_X_SUBSCRIPT, RT_X_OVERFLOW, RT_X_ZERO_DIVIDE, RT_X_NIL,
    RT_X_ASSERT, RT_X_SUBTYPE, RT_X_TAG, RT_X_CASE, RT_X_CREATE, RT_X_TERMINATE,
    RT_X_EMPTY_MAILBOX, RT_X_FREE, RT_X_INIT, RT_X_NEG_EXP, RT_X_FILE,
    RT_X_TASKING, RT_X_DEADLOCK;

static void on_unhandled(int id);

void rt_raise(int id) {
  rt_xcur = id;
#ifndef __wasi__
  if (getenv("PALEO_ABORT") && atoi(getenv("PALEO_ABORT")) == id) {
    void *bt[32];
    int n = backtrace(bt, 32);
    backtrace_symbols_fd(bt, n, 2);
    abort();
  }
#endif
  if (!rt_xtop) on_unhandled(id);
  longjmp(rt_xtop->jb, 1);
}

void rt_raise_msg(int id, const char *msg) {
  if (getenv("PALEO_TRACE")) fprintf(stderr, "raise %s: %s\n", rt_exc_name(id), msg);
  rt_raise(id);
}

void *rt_nil_check(void *p) {
  if (!p) rt_raise(RT_X_NIL);
  return p;
}

void rt_set_lang(int green) {
  lang_green = green;
  if (green) {
    /* GREEN 1979 (Preliminary Ada): the 15 predefined exceptions, RM79 11.1 */
    RT_X_RANGE = RT_X_CASE = RT_X_NEG_EXP = rt_exc("RANGE_ERROR");
    RT_X_SUBSCRIPT = RT_X_SUBTYPE = rt_exc("INDEX_ERROR");
    RT_X_OVERFLOW = rt_exc("OVERFLOW");
    RT_X_ZERO_DIVIDE = rt_exc("DIVIDE_ERROR");
    RT_X_NIL = rt_exc("ACCESS_ERROR");
    RT_X_ASSERT = rt_exc("ASSERT_ERROR");
    RT_X_TAG = rt_exc("DISCRIMINANT_ERROR");
    RT_X_INIT = rt_exc("NO_VALUE_ERROR");
    RT_X_TASKING = RT_X_EMPTY_MAILBOX = rt_exc("TASKING_ERROR");
    RT_X_CREATE = rt_exc("INITIATE_ERROR");
    RT_X_TERMINATE = rt_exc("FAILURE");
    RT_X_FREE = rt_exc("STORAGE_OVERFLOW");
    (void)rt_exc("SELECT_ERROR");
    (void)rt_exc("UNDERFLOW");
    (void)rt_exc("OVERLAP_ERROR");
    RT_X_FILE = rt_exc("END_OF_FILE"); /* TEXT_IO, RM79 14.2 */
    RT_X_DEADLOCK = rt_exc("DEADLOCK");
  } else {
    /* RED Reference Manual, Appendix D */
    RT_X_RANGE = rt_exc("X_RANGE");
    RT_X_SUBSCRIPT = rt_exc("X_SUBSCRIPT");
    RT_X_OVERFLOW = rt_exc("X_OVERFLOW");
    RT_X_ZERO_DIVIDE = rt_exc("X_ZERO_DIVIDE");
    RT_X_NIL = rt_exc("X_NIL");
    RT_X_ASSERT = rt_exc("X_ASSERT");
    RT_X_SUBTYPE = rt_exc("X_SUBTYPE");
    RT_X_TAG = rt_exc("X_TAG");
    RT_X_CASE = rt_exc("X_CASE");
    RT_X_CREATE = rt_exc("X_CREATE");
    RT_X_TERMINATE = rt_exc("X_TERMINATE");
    RT_X_EMPTY_MAILBOX = rt_exc("X_EMPTY_MAILBOX");
    RT_X_FREE = rt_exc("X_FREE");
    RT_X_INIT = rt_exc("X_INIT");
    RT_X_NEG_EXP = rt_exc("X_NEG_EXP");
    RT_X_FILE = rt_exc("X_FILE");
    RT_X_TASKING = RT_X_CREATE;
    RT_X_DEADLOCK = rt_exc("X_DEADLOCK");
  }
}

/* ---- checked arithmetic ---------------------------------------------- */

rt_int rt_range(rt_int v, rt_int lo, rt_int hi) {
  if (v < lo || v > hi) rt_raise(RT_X_RANGE);
  return v;
}

rt_int rt_index(rt_int v, rt_int lo, rt_int hi) {
  if (v < lo || v > hi) rt_raise(RT_X_SUBSCRIPT);
  return v;
}

double rt_frange(double v, double lo, double hi) {
  if (v < lo || v > hi) rt_raise(RT_X_RANGE);
  return v;
}

rt_int rt_add(rt_int a, rt_int b) {
  rt_int r;
  if (__builtin_add_overflow(a, b, &r)) rt_raise(RT_X_OVERFLOW);
  return r;
}

rt_int rt_sub(rt_int a, rt_int b) {
  rt_int r;
  if (__builtin_sub_overflow(a, b, &r)) rt_raise(RT_X_OVERFLOW);
  return r;
}

rt_int rt_mul(rt_int a, rt_int b) {
  rt_int r;
  if (__builtin_mul_overflow(a, b, &r)) rt_raise(RT_X_OVERFLOW);
  return r;
}

rt_int rt_neg(rt_int a) {
  if (a == INT64_MIN) rt_raise(RT_X_OVERFLOW);
  return -a;
}

rt_int rt_abs(rt_int a) { return a < 0 ? rt_neg(a) : a; }

rt_int rt_quot(rt_int a, rt_int b) {
  if (b == 0) rt_raise(RT_X_ZERO_DIVIDE);
  if (a == INT64_MIN && b == -1) rt_raise(RT_X_OVERFLOW);
  return a / b;
}

rt_int rt_rem(rt_int a, rt_int b) {
  if (b == 0) rt_raise(RT_X_ZERO_DIVIDE);
  if (b == -1) return 0;
  return a % b;
}

/* RED: X = Y*(X DIV Y) + X MOD Y, and X MOD Y has the sign of Y */
rt_int rt_mod(rt_int a, rt_int b) {
  rt_int r = rt_rem(a, b);
  if (r != 0 && ((r < 0) != (b < 0))) r += b;
  return r;
}

rt_int rt_div(rt_int a, rt_int b) {
  rt_int q = rt_quot(a, b);
  if ((a % b != 0) && ((a < 0) != (b < 0))) q -= 1;
  return q;
}

rt_int rt_pow(rt_int a, rt_int b) {
  if (b < 0) rt_raise(RT_X_NEG_EXP);
  rt_int r = 1;
  while (b-- > 0) r = rt_mul(r, a);
  return r;
}

double rt_fpow(double a, rt_int b) {
  double r = 1.0;
  int neg = b < 0;
  if (neg) b = -b;
  while (b-- > 0) r *= a;
  return neg ? 1.0 / r : r;
}

double rt_fdiv(double a, double b) {
  if (b == 0.0) rt_raise(RT_X_ZERO_DIVIDE);
  return a / b;
}

/* ---- strings ----------------------------------------------------------- */

rstr rt_str(const char *s, rt_int len) {
  rstr r = {len, (unsigned char *)s};
  return r;
}

rstr rt_str_new(rt_int len) {
  if (len < 0) len = 0;
  rstr r = {len, rt_alloc((size_t)len + 1)};
  memset(r.p, ' ', (size_t)len);
  return r;
}

rstr rt_str_copy(rstr s) {
  rstr r = rt_str_new(s.len);
  if (s.len) memcpy(r.p, s.p, (size_t)s.len);
  return r;
}

rstr rt_str_cat(rstr a, rstr b) {
  rstr r = rt_str_new(a.len + b.len);
  if (a.len) memcpy(r.p, a.p, (size_t)a.len);
  if (b.len) memcpy(r.p + a.len, b.p, (size_t)b.len);
  return r;
}

rstr rt_str_chr(int c) {
  rstr r = rt_str_new(1);
  r.p[0] = (unsigned char)c;
  return r;
}

rstr rt_str_catc(rstr a, int c) { return rt_str_cat(a, rt_str_chr(c)); }
rstr rt_str_ccat(int c, rstr b) { return rt_str_cat(rt_str_chr(c), b); }
rstr rt_str_cc(int a, int b) { return rt_str_cat(rt_str_chr(a), rt_str_chr(b)); }

int rt_str_eq(rstr a, rstr b) {
  return a.len == b.len && (a.len == 0 || memcmp(a.p, b.p, (size_t)a.len) == 0);
}

int rt_str_lt(rstr a, rstr b) {
  rt_int n = a.len < b.len ? a.len : b.len;
  for (rt_int i = 0; i < n; i++)
    if (a.p[i] != b.p[i]) return a.p[i] < b.p[i];
  return a.len < b.len;
}

int rt_str_le(rstr a, rstr b) { return !rt_str_lt(b, a); }

int rt_str_get(rstr s, rt_int i) {
  if (i < 1 || i > s.len) rt_raise(RT_X_SUBSCRIPT);
  return s.p[i - 1];
}

unsigned char *rt_str_at(rstr *s, rt_int i) {
  if (i < 1 || i > s->len) rt_raise(RT_X_SUBSCRIPT);
  return &s->p[i - 1];
}

rstr rt_str_slice(rstr s, rt_int i, rt_int j) {
  if (j < i) return rt_str_new(0);
  if (i < 1 || j > s.len) rt_raise(RT_X_SUBSCRIPT);
  rstr r = {j - i + 1, s.p + i - 1};
  return r;
}

void rt_str_assign(rstr *dst, rstr src) {
  if (dst->len != src.len) rt_raise_msg(RT_X_SUBTYPE, "string length");
  if (src.len) memmove(dst->p, src.p, (size_t)src.len);
}

void rt_str_slice_assign(rstr *dst, rt_int i, rt_int j, rstr src) {
  rstr part = rt_str_slice(*dst, i, j);
  rt_str_assign(&part, src);
}

rstr rt_str_of_int(rt_int v) {
  char b[32];
  int n = snprintf(b, sizeof b, "%lld", (long long)v);
  return rt_str_copy(rt_str(b, n));
}

/* RED Appendix A: -n.nnnnE+mmm with prec digits */
rstr rt_str_of_float(double v, int prec) {
  char b[64];
  if (prec < 1) prec = 1;
  if (prec > 17) prec = 17;
  int n = snprintf(b, sizeof b, "%.*E", prec - 1, v);
  return rt_str_copy(rt_str(b, n));
}

/* FORMAT(v, n, m): n characters left of the point, m right, zeros kept */
rstr rt_format(double v, rt_int n, rt_int m) {
  char b[128];
  int len = snprintf(b, sizeof b, "%0*.*f", (int)(n + m + 1 + (v < 0)), (int)m, v);
  return rt_str_copy(rt_str(b, len));
}

rt_int rt_int_of_str(rstr s) {
  rt_int i = 0, v = 0;
  int neg = 0, any = 0;
  while (i < s.len && s.p[i] == ' ') i++;
  if (i < s.len && (s.p[i] == '-' || s.p[i] == '+')) neg = s.p[i++] == '-';
  for (; i < s.len && s.p[i] >= '0' && s.p[i] <= '9'; i++, any = 1)
    v = rt_add(rt_mul(v, 10), s.p[i] - '0');
  while (i < s.len && s.p[i] == ' ') i++;
  if (!any || i != s.len) rt_raise_msg(RT_X_RANGE, "not an integer");
  return neg ? -v : v;
}

const char *rt_cstr(rstr s) {
  char *c = rt_alloc((size_t)s.len + 1);
  if (s.len) memcpy(c, s.p, (size_t)s.len);
  return c;
}

/* ---- text I/O ---------------------------------------------------------- */

static unsigned char *in_buf;
static rt_int in_len, in_pos;
static int in_loaded;
static int g_argc;
static char **g_argv;

static void load_input(void) {
  if (in_loaded) return;
  in_loaded = 1;
  size_t cap = 1 << 16, n = 0;
  in_buf = malloc(cap);
  size_t k;
  while ((k = fread(in_buf + n, 1, cap - n, stdin)) > 0) {
    n += k;
    if (n == cap) in_buf = realloc(in_buf, cap *= 2);
  }
  in_len = (rt_int)n;
}

void rt_put(rstr s) { fwrite(s.p, 1, (size_t)s.len, stdout); }
void rt_putc(int c) { putchar(c); }
void rt_newline(void) { putchar('\n'); }
void rt_putln(rstr s) {
  rt_put(s);
  rt_newline();
}
void rt_flush(void) { fflush(stdout); }

int rt_eof(void) {
  load_input();
  return in_pos >= in_len;
}

rt_int rt_sizeln(void) {
  load_input();
  rt_int i = in_pos;
  while (i < in_len && in_buf[i] != '\n') i++;
  rt_int n = i - in_pos;
  if (n > 0 && in_buf[in_pos + n - 1] == '\r') n--;
  return n;
}

rstr rt_getln(void) {
  rt_int n = rt_sizeln();
  if (rt_eof()) rt_raise_msg(RT_X_FILE, "read past end of input");
  rstr r = rt_str_copy(rt_str((const char *)in_buf + in_pos, n));
  while (in_pos < in_len && in_buf[in_pos] != '\n') in_pos++;
  if (in_pos < in_len) in_pos++;
  return r;
}

void rt_readln(rstr *dst) {
  rstr line = rt_getln();
  rt_str_assign(dst, line);
}

int rt_getc(void) {
  load_input();
  return in_pos < in_len ? in_buf[in_pos++] : -1;
}

rstr rt_arg(rt_int i) {
  if (i < 0 || i >= g_argc) rt_raise(RT_X_SUBSCRIPT);
  return rt_str(g_argv[i], (rt_int)strlen(g_argv[i]));
}

rt_int rt_argc(void) { return g_argc; }

rstr rt_read_file(rstr name) {
  FILE *f = fopen(rt_cstr(name), "rb");
  if (!f) rt_raise_msg(RT_X_FILE, rt_cstr(name));
  fseek(f, 0, SEEK_END);
  long n = ftell(f);
  fseek(f, 0, SEEK_SET);
  rstr r = rt_str_new(n);
  if (n && fread(r.p, 1, (size_t)n, f) != (size_t)n) rt_raise(RT_X_FILE);
  fclose(f);
  return r;
}

void rt_write_file(rstr name, rstr text) {
  FILE *f = fopen(rt_cstr(name), "wb");
  if (!f) rt_raise_msg(RT_X_FILE, rt_cstr(name));
  fwrite(text.p, 1, (size_t)text.len, f);
  fclose(f);
}

void rt_exit(rt_int code) {
  fflush(stdout);
  exit((int)code);
}

/* ---- sets -------------------------------------------------------------- */

rset rt_set_empty(void) {
  rset s;
  memset(&s, 0, sizeof s);
  return s;
}

rset rt_set_add(rset s, rt_int e) {
  if (e < 0 || e > 255) rt_raise(RT_X_RANGE);
  s.w[e >> 6] |= 1ULL << (e & 63);
  return s;
}

int rt_set_in(rt_int e, rset s) {
  return e >= 0 && e <= 255 && (s.w[e >> 6] >> (e & 63)) & 1;
}

rset rt_set_or(rset a, rset b) {
  for (int i = 0; i < 4; i++) a.w[i] |= b.w[i];
  return a;
}

rset rt_set_and(rset a, rset b) {
  for (int i = 0; i < 4; i++) a.w[i] &= b.w[i];
  return a;
}

rset rt_set_xor(rset a, rset b) {
  for (int i = 0; i < 4; i++) a.w[i] ^= b.w[i];
  return a;
}

rset rt_set_not(rset a, rt_int lo, rt_int hi) {
  rset r = rt_set_empty();
  for (rt_int e = lo; e <= hi; e++)
    if (!rt_set_in(e, a)) r = rt_set_add(r, e);
  return r;
}

int rt_set_eq(rset a, rset b) { return memcmp(&a, &b, sizeof a) == 0; }

int rt_set_le(rset a, rset b) {
  for (int i = 0; i < 4; i++)
    if (a.w[i] & ~b.w[i]) return 0;
  return 1;
}

/* ---- tasks ------------------------------------------------------------- */

enum { T_READY, T_RUNNING, T_BLOCKED, T_DONE, T_HELD };

struct rt_waiter {
  rt_task *t;
  int alt;                 /* index of the WAIT alternative */
  void *data;              /* message to send or place to receive into */
  rt_waiter **queue;       /* list it sits in */
  rt_waiter *next;         /* next in that list */
  rt_waiter *tnext;        /* next record of the same task */
  int armed;               /* waited for through SYNC_WAIT (RED 14.3) */
};

struct rt_task {
  pthread_t th;
  pthread_cond_t cv;
  int state;
  int id;
  rt_int prio;
  uint64_t seq;            /* when it became eligible */
  void (*fn)(void *);
  void *frame;
  rt_act *act;
  rt_taskdecl *decl;
  int timed;
  rt_int wake;
  int timer_alt;
  int term_alt;            /* GREEN select ... or terminate */
  int term_pending;        /* EXTERMINATE / abort */
  int result;              /* alternative that completed */
  int accept_exc;          /* exception raised in the accept body */
  rt_waiter *wl;           /* waiter records registered */
  rt_waiter *serving;      /* callers whose accept body is running */
  rt_waiter *callw;        /* its own record in an entry queue, while calling */
  rt_task *all_next;
  rt_act self_act;
  /* RED chapter 14 */
  int suspended;           /* not eligible to run (14.2.1) */
  int critical;            /* never preempted, EXTERMINATE deferred (14.2.2) */
  int signalled;           /* SYNC_SIGNAL since the last SYNC_RESET (14.3.2) */
  int sync_waiting;        /* inside LOW_SYNC_WAIT */
  int in_hook;             /* running its user-defined scheduler */
  int armed, satisfied;    /* waiting through SYNC_WAIT, and done */
  rt_waiter *awl;          /* the records armed for that wait */
  int atimed, atimer_alt;
  rt_int awake;
  rt_int runs;             /* GREEN T'CLOCK: the times it was given the processor */
  /* YELLOW: an exception other than termination made pending by a trap of
   * the scheduler (the deadlock trap); 0 for every other language */
  int term_exc;
  rt_int aclock;           /* RED activation clock (10.4) */
};

static pthread_mutex_t G = PTHREAD_MUTEX_INITIALIZER;
static rt_task *cur;
static rt_task *all_tasks;
static rt_task main_task;
static uint64_t seq_counter;
static rt_int now;
static int task_ids;

rt_int RT_MILLISECONDS = 1, RT_SECONDS = 1000, RT_MINUTES = 60000,
     RT_HOURS = 3600000;

static void trace(const char *what, rt_task *t) {
  if (getenv("PALEO_SCHED")) fprintf(stderr, "[t=%lld] %s task %d\n", (long long)now, what, t->id);
}

static void make_ready(rt_task *t) {
  t->state = T_READY;
  t->seq = ++seq_counter;
}

static void drop_waiters(rt_task *t) {
  for (rt_waiter *w = t->wl; w; w = w->tnext) {
    for (rt_waiter **p = w->queue; *p; p = &(*p)->next)
      if (*p == w) {
        *p = w->next;
        break;
      }
  }
  t->wl = NULL;
  t->timed = 0;
  t->term_alt = -1;
}

static void drop_armed(rt_task *t) {
  for (rt_waiter *w = t->awl; w; w = w->tnext) {
    for (rt_waiter **p = w->queue; *p; p = &(*p)->next)
      if (*p == w) {
        *p = w->next;
        break;
      }
  }
  t->awl = NULL;
  t->atimed = 0;
}

/* an armed wait completed: the task learns it as a SYNC_SIGNAL, and runs
 * again only if it is inside LOW_SYNC_WAIT (it may be blocked on something
 * else while its scheduler works) */
static void satisfy_armed(rt_task *t, int alt) {
  t->result = alt;
  drop_armed(t);
  t->satisfied = 1;
  t->signalled = 1;
  if (t->sync_waiting && t->state == T_BLOCKED) make_ready(t);
}

/* complete the wait of w's task with w's alternative */
static void satisfy(rt_waiter *w) {
  rt_task *t = w->t;
  if (w->armed) {
    satisfy_armed(t, w->alt);
    return;
  }
  t->result = w->alt;
  drop_waiters(t);
  make_ready(t);
}

static rt_waiter *add_waiter(rt_waiter **q, int alt, void *data) {
  rt_waiter *w = rt_alloc(sizeof *w);
  w->t = cur;
  w->alt = alt;
  w->data = data;
  w->queue = q;
  while (*q) q = &(*q)->next;
  *q = w;
  w->tnext = cur->wl;
  cur->wl = w;
  return w;
}

static rt_task *pick_ready(void) {
  rt_task *best = NULL;
  for (rt_task *t = all_tasks; t; t = t->all_next)
    if (t->state == T_READY && !t->suspended &&
        (!best || t->prio > best->prio || (t->prio == best->prio && t->seq < best->seq)))
      best = t;
  return best;
}

/* RED 14.1.4: interrupts arrive as messages in the mailbox located at them.
 * The simulated machine's teletype keyboard raises interrupt 16 for each
 * character of the standard input, one every 100 ms (10 characters a
 * second), when a mailbox of characters is located there; a program may
 * raise any interrupt through LOW_IO on device 2 */
#define RT_INTERRUPTS 4096
#define RT_KEYBOARD 16
static rt_mbox *interrupts[RT_INTERRUPTS];
static rt_int kb_next = -1;
static int try_send(rt_mbox *m, const void *msg);

static void post_interrupt(rt_int n, rt_int data) {
  rt_mbox *m = n >= 0 && n < RT_INTERRUPTS ? interrupts[n] : NULL;
  if (!m) return;
  /* the data is collected and sent; with no room left it is lost (overrun) */
  if (m->esz == sizeof(rt_int)) {
    rt_int v = data;
    try_send(m, &v);
  } else {
    int v = (int)data;
    try_send(m, &v);
  }
}

static int advance_clock(void) {
  int any = 0;
  rt_int next = 0;
  if (kb_next >= 0) {
    next = kb_next;
    any = 1;
  }
  for (rt_task *t = all_tasks; t; t = t->all_next) {
    if (t->state == T_BLOCKED && t->timed && (!any || t->wake < next)) {
      next = t->wake;
      any = 1;
    }
    if (t->atimed && t->state != T_DONE && (!any || t->awake < next)) {
      next = t->awake;
      any = 1;
    }
  }
  if (!any) return 0;
  /* the activation clocks run for activations that are running or delayed
   * by the clock alone, not for those waiting on other activations */
  if (next > now)
    for (rt_task *t = all_tasks; t; t = t->all_next)
      if (t->state == T_READY || t->state == T_RUNNING || (t->state == T_BLOCKED && t->timed && !t->wl))
        t->aclock += next - now;
  if (next > now) now = next;
  for (rt_task *t = all_tasks; t; t = t->all_next) {
    if (t->state == T_BLOCKED && t->timed && t->wake <= now) {
      t->result = t->timer_alt;
      drop_waiters(t);
      make_ready(t);
    }
    if (t->atimed && t->state != T_DONE && t->awake <= now) satisfy_armed(t, t->atimer_alt);
  }
  if (kb_next >= 0 && kb_next <= now) {
    int c = rt_getc();
    if (c < 0) {
      kb_next = -1;
    } else {
      kb_next = now + 100 * RT_MILLISECONDS;
      post_interrupt(RT_KEYBOARD, c);
    }
  }
  return 1;
}

static int take_terminate_alternatives(void) {
  int any = 0;
  for (rt_task *t = all_tasks; t; t = t->all_next)
    if (t->state == T_BLOCKED && t->term_alt >= 0) {
      t->result = t->term_alt;
      drop_waiters(t);
      make_ready(t);
      any = 1;
    }
  return any;
}

static void switch_to(rt_task *n) {
  rt_task *me = cur;
  if (n == me) {
    me->state = T_RUNNING;
    return;
  }
  cur = n;
  n->state = T_RUNNING;
  n->runs++;
  trace("run", n);
  pthread_cond_signal(&n->cv);
  if (me->state == T_DONE) return;
  while (cur != me) pthread_cond_wait(&me->cv, &G);
}

static void check_terminate(void) {
  if (cur->term_pending && !cur->critical) {
    int e = cur->term_exc ? cur->term_exc : RT_X_TERMINATE;   /* YELLOW: term_exc */
    cur->term_pending = 0;
    cur->term_exc = 0;
    rt_raise(e);
  }
}

/* YELLOW: when every task waits, a language may raise a trap instead of
 * ending the program (Appendix C, "Deadlock"); NULL for the others */
static int (*rt_deadlock_hook)(void);

/* the running task gave up the processor (its state is already set) */
static void reschedule(void) {
  for (;;) {
    rt_task *n = pick_ready();
    if (n) {
      switch_to(n);
      return;
    }
    if (advance_clock()) continue;
    if (take_terminate_alternatives()) continue;
    if (rt_deadlock_hook && rt_deadlock_hook()) continue;           /* YELLOW */
    fflush(stdout);
    fprintf(stderr, "*** deadlock: every task is waiting (t=%lld)\n", (long long)now);
    if (getenv("PALEO_SCHED"))
      for (rt_task *t = all_tasks; t; t = t->all_next)
        fprintf(stderr, "  task %d state %d\n", t->id, t->state);
    exit(3);
  }
}

static void run_hook(int op) {
  rt_task *me = cur;
  int was = me->in_hook;
  me->in_hook = 1;
  me->act->hook(op, me->act);
  me->in_hook = was;
}

/* the registered waiter records and timer become an armed wait */
static void arm(rt_task *t) {
  for (rt_waiter *w = t->wl; w; w = w->tnext) w->armed = 1;
  t->awl = t->wl;
  t->wl = NULL;
  t->atimed = t->timed;
  t->awake = t->wake;
  t->atimer_alt = t->timer_alt;
  t->timed = 0;
  t->armed = 1;
  t->satisfied = 0;
}

/* RED 14.3.3: an activation of a user-defined scheduler waits through that
 * scheduler's SYNC_RESET and SYNC_WAIT, which end in LOW_SYNC_WAIT */
static void hooked_block(void) {
  rt_task *me = cur;
  arm(me);
  while (!me->satisfied) {
    run_hook(RT_HOOK_RESET);
    if (me->satisfied) break;
    run_hook(RT_HOOK_WAIT);
  }
  me->armed = 0;
  me->satisfied = 0;
  check_terminate();
}

static void block(void) {
  if (cur->act && cur->act->hook && !cur->in_hook) {
    hooked_block();
    return;
  }
  cur->state = T_BLOCKED;
  trace("block", cur);
  reschedule();
  check_terminate();
}

/* a higher-priority task became eligible: let it run first */
static void maybe_preempt(void) {
  if (cur->critical) return;
  rt_task *n = pick_ready();
  if (n && n->prio > cur->prio) {
    uint64_t keep = cur->seq;
    cur->state = T_READY;
    cur->seq = keep;
    reschedule();
  }
}

void rt_yield(void) {
  make_ready(cur);
  reschedule();
  check_terminate();
}

#ifdef __wasi__
/* wasi-libc has no pthread_exit: a task thread leaves through this */
static __thread jmp_buf task_exit;
#endif

static void *task_main(void *arg) {
  rt_task *t = arg;
#ifdef __wasi__
  if (setjmp(task_exit)) return NULL;
#endif
  pthread_mutex_lock(&G);
  while (cur != t) pthread_cond_wait(&t->cv, &G);
  rt_frame f;
  if (RT_TRY(f)) {
    t->fn(t->frame);
    RT_POP(f);
  } else {
    RT_POP(f);
    if (getenv("PALEO_TRACE") || rt_xcur != RT_X_TERMINATE)
      if (getenv("PALEO_TRACE"))
        fprintf(stderr, "task %d ended by %s\n", t->id, rt_exc_name(rt_xcur));
  }
  /* its subprograms are over, however the task ended */
  if (rt_fs) rt_fs->depth = 0;
  /* RED 14.5.3: TASK_END(ME) lets the scheduler drop the activation */
  if (t->act && t->act->hook) {
    rt_frame f2;
    if (RT_TRY(f2)) {
      run_hook(RT_HOOK_END);
      RT_POP(f2);
    } else {
      RT_POP(f2);
    }
  } else if (t->act) {
    rt_low_task_end(t->act);
  }
  t->state = T_DONE;
  trace("done", t);
  if (t->decl && --t->decl->live == 0)
    while (t->decl->waiters) satisfy(t->decl->waiters);
  reschedule();
  pthread_mutex_unlock(&G);
  return NULL;
}

static void create_task(rt_act *a, rt_taskdecl *d, void (*fn)(void *), void *frame, int held) {
  if (a->active) rt_raise(RT_X_CREATE);
  rt_task *t = rt_alloc(sizeof *t);
  pthread_cond_init(&t->cv, NULL);
  t->id = ++task_ids;
  t->prio = a->has_prio ? a->prio : cur->prio;
  t->fn = fn;
  t->frame = frame;
  t->act = a;
  t->decl = d;
  t->term_alt = -1;
  a->t = t;
  a->active = 1;
  d->live++;
  t->all_next = all_tasks;
  all_tasks = t;
  if (held)
    t->state = T_HELD;
  else
    make_ready(t);
  pthread_attr_t attr;
  pthread_attr_init(&attr);
#ifdef __wasi__
  /* in the browser every task stack comes out of one shared memory */
  pthread_attr_setstacksize(&attr, 1u << 20);
#else
  pthread_attr_setstacksize(&attr, 64u << 20);
#endif
  if (pthread_create(&t->th, &attr, task_main, t) != 0) {
    fprintf(stderr, "*** cannot start a task\n");
    exit(4);
  }
  pthread_detach(t->th);
  trace("create", t);
  if (!held) maybe_preempt();
}

void rt_create(rt_act *a, rt_taskdecl *d, void (*fn)(void *), void *frame) {
  create_task(a, d, fn, frame, 0);
}

/* RED 14.5.3: an activation of a user-defined scheduler exists before its
 * scheduler's TASK_START lets it run */
void rt_create_held(rt_act *a, rt_taskdecl *d, void (*fn)(void *), void *frame) {
  create_task(a, d, fn, frame, 1);
}

void rt_task_start(rt_act *av, rt_act *aa) {
  (void)av;
  rt_task *t = aa->t;
  if (!t || t->state != T_HELD) return;
  make_ready(t);
  maybe_preempt();
}

rt_act *rt_me(void) {
  if (cur->act) return cur->act;
  cur->self_act.t = cur;
  cur->self_act.active = 1;
  return &cur->self_act;
}

rt_int rt_priority(rt_act *a) { return a->t ? a->t->prio : 0; }

void rt_set_priority(rt_act *a, rt_int p) {
  if (p < 0 || p > 255) rt_raise(RT_X_RANGE);
  a->prio = p;
  a->has_prio = 1;
  if (!a->t) return;
  a->t->prio = p;
  maybe_preempt();
}

void rt_exterminate(rt_act *a) {
  rt_task *t = a->t;
  if (!a->active || !t || t->state == T_DONE) return;
  if (t == cur && !t->critical) rt_raise(RT_X_TERMINATE);
  t->term_pending = 1;
  /* a critical activation learns of it when it becomes noncritical (14.2.2) */
  if (t->critical) return;
  if (t->state == T_BLOCKED) {
    drop_waiters(t);
    drop_armed(t);
    t->satisfied = 1;
    if (t->callw) {
      /* a queued entry call is cancelled (RM79 9.10) */
      for (rt_waiter **p = t->callw->queue; *p; p = &(*p)->next)
        if (*p == t->callw) {
          *p = t->callw->next;
          break;
        }
      t->callw->t = NULL;
      t->callw = NULL;
    }
    t->result = -2;
    make_ready(t);
  }
  maybe_preempt();
}

int rt_is_active(rt_act *a) { return a->active; }

void rt_delay_until_inactive(rt_act *a) {
  if (!a->active) return;
  add_waiter(&a->waiters, 0, NULL);
  block();
}

void rt_await_decl(rt_taskdecl *d) {
  while (d->live > 0) {
    add_waiter(&d->waiters, 0, NULL);
    block();
  }
}

rt_int rt_time(void) { return now; }

void rt_delay_until(rt_int t) {
  if (t <= now) {
    rt_yield();
    return;
  }
  cur->timed = 1;
  cur->wake = t;
  cur->timer_alt = 0;
  block();
}

void rt_delay(rt_int ticks) { rt_delay_until(now + (ticks > 0 ? ticks : 0)); }

/* ---- mailboxes --------------------------------------------------------- */

void rt_mbox_init(rt_mbox *m, rt_int cap, size_t esz, rt_copyfn copy) {
  if (cap < 0) rt_raise(RT_X_RANGE);
  m->cap = cap;
  m->esz = esz;
  m->copy = copy;
  /* messages may hold pointers that FREE must see */
  m->buf = cap ? rt_salloc((size_t)cap * esz) : NULL;
  m->head = m->count = 0;
  m->senders = m->receivers = NULL;
}

static void *slot(rt_mbox *m, rt_int i) { return m->buf + ((m->head + i) % m->cap) * m->esz; }

static int try_send(rt_mbox *m, const void *msg) {
  if (m->receivers) {
    rt_waiter *w = m->receivers;
    m->copy(w->data, msg);
    satisfy(w);
    return 1;
  }
  if (m->count < m->cap) {
    m->copy(slot(m, m->count), msg);
    m->count++;
    return 1;
  }
  return 0;
}

static int try_receive(rt_mbox *m, void *dst) {
  if (m->count > 0) {
    m->copy(dst, slot(m, 0));
    /* a received message leaves no copy behind for FREE to find */
    memset(slot(m, 0), 0, m->esz);
    m->head = (m->head + 1) % m->cap;
    m->count--;
    if (m->senders) {
      rt_waiter *w = m->senders;
      m->copy(slot(m, m->count), w->data);
      m->count++;
      satisfy(w);
    }
    return 1;
  }
  if (m->senders) {
    rt_waiter *w = m->senders;
    m->copy(dst, w->data);
    satisfy(w);
    return 1;
  }
  return 0;
}

void rt_send(rt_mbox *m, const void *msg) {
  if (try_send(m, msg)) {
    maybe_preempt();
    return;
  }
  add_waiter(&m->senders, 0, (void *)msg);
  block();
}

void rt_receive(rt_mbox *m, void *dst) {
  if (try_receive(m, dst)) {
    maybe_preempt();
    return;
  }
  add_waiter(&m->receivers, 0, dst);
  block();
}

rt_int rt_mbox_count(rt_mbox *m) { return m->count; }

/* RED 14.1.1: buffers plus the requests already waiting on the other side */
rt_int rt_empty_slots(rt_mbox *m) {
  rt_int n = m->cap - m->count;
  for (rt_waiter *w = m->receivers; w; w = w->next) n++;
  return n;
}

rt_int rt_full_slots(rt_mbox *m) {
  rt_int n = m->count;
  for (rt_waiter *w = m->senders; w; w = w->next) n++;
  return n;
}

int rt_cond_send(rt_mbox *m, const void *msg) {
  int ok = try_send(m, msg);
  if (ok) maybe_preempt();
  return ok;
}

int rt_cond_receive(rt_mbox *m, void *dst) {
  int ok = try_receive(m, dst);
  if (ok) maybe_preempt();
  return ok;
}

/* ---- data locks ---------------------------------------------------------- */

void rt_lock_init(rt_lock *l) {
  l->owner = NULL;
  l->q = NULL;
}

void rt_region_enter(rt_lock *l) {
  if (!l->owner) {
    l->owner = cur;
    return;
  }
  add_waiter(&l->q, 0, NULL);
  block();
  /* the leaving owner handed the lock to us */
}

void rt_region_leave(rt_lock *l) {
  if (l->q) {
    rt_waiter *w = l->q;
    l->owner = w->t;
    satisfy(w);
    maybe_preempt();
  } else {
    l->owner = NULL;
  }
}

int rt_cond_lock(rt_lock *l) {
  if (l->owner) return 0;
  l->owner = cur;
  return 1;
}

/* LOCKs invoked minus UNLOCKs: the holder and everyone waiting (14.4.2) */
rt_int rt_excess_locks(rt_lock *l) {
  rt_int n = l->owner ? 1 : 0;
  for (rt_waiter *w = l->q; w; w = w->next) n++;
  return n;
}

static rt_act *act_of(rt_task *t) {
  if (t->act) return t->act;
  t->self_act.t = t;
  t->self_act.active = 1;
  return &t->self_act;
}

rt_act *rt_lock_owner(rt_lock *l) { return l->owner ? act_of(l->owner) : NULL; }

/* ---- RED chapter 14: the ACT scheduler's low-level operations ------------ */

int rt_is_waiting(rt_act *a) { return a && a->t && a->t->state == T_BLOCKED; }

int rt_is_suspended(rt_act *a) { return a && a->t && a->t->suspended; }

void rt_suspend(rt_act *a) {
  rt_task *t = a ? a->t : NULL;
  if (!t || t->state == T_DONE) return;
  t->suspended = 1;
  if (t == cur) {
    cur->state = T_READY;
    reschedule();
    check_terminate();
  }
}

void rt_unsuspend(rt_act *a) {
  rt_task *t = a ? a->t : NULL;
  if (!t || !t->suspended) return;
  t->suspended = 0;
  if (t->state == T_READY) t->seq = ++seq_counter;
  maybe_preempt();
}

void rt_critical(void) { cur->critical = 1; }

void rt_noncritical(void) {
  cur->critical = 0;
  check_terminate();
  maybe_preempt();
}

int rt_critical_save(void) {
  int was = cur->critical;
  cur->critical = 1;
  return was;
}

void rt_critical_restore(int was) {
  if (was) return;
  rt_noncritical();
}

void rt_low_sync_reset(void) { cur->signalled = 0; }

void rt_low_sync_wait(void) {
  if (cur->signalled) return;
  cur->sync_waiting = 1;
  cur->state = T_BLOCKED;
  trace("sync wait", cur);
  reschedule();
  cur->sync_waiting = 0;
  check_terminate();
}

void rt_low_sync_signal(rt_act *a) {
  rt_task *t = a ? a->t : NULL;
  if (!t || t->state == T_DONE) return;
  t->signalled = 1;
  if (t->sync_waiting && t->state == T_BLOCKED) {
    make_ready(t);
    maybe_preempt();
  }
}

void rt_low_task_end(rt_act *a) {
  if (!a || !a->active) return;
  a->active = 0;
  while (a->waiters) satisfy(a->waiters);
}

/* SYNC_RESET, SYNC_WAIT, SYNC_SIGNAL and TASK_END go to the scheduler of the
 * activation: its own operations for a user-defined one (14.5.2) */
void rt_sync_reset(void) {
  if (cur->act && cur->act->hook)
    run_hook(RT_HOOK_RESET);
  else
    rt_low_sync_reset();
}

void rt_sync_wait(void) {
  if (cur->act && cur->act->hook)
    run_hook(RT_HOOK_WAIT);
  else
    rt_low_sync_wait();
}

void rt_sync_signal(rt_act *a) {
  if (a && a->hook) {
    int was = cur->in_hook;
    cur->in_hook = 1;
    a->hook(RT_HOOK_SIGNAL, a);
    cur->in_hook = was;
  } else {
    rt_low_sync_signal(a);
  }
}

void rt_task_end(rt_act *a) {
  if (a && a->hook) {
    int was = cur->in_hook;
    cur->in_hook = 1;
    a->hook(RT_HOOK_END, a);
    cur->in_hook = was;
  } else {
    rt_low_task_end(a);
  }
}

void rt_interrupt_bind(rt_mbox *m, rt_int n, int chars) {
  if (n < 0 || n >= RT_INTERRUPTS) rt_raise_msg(RT_X_RANGE, "no such interrupt");
  interrupts[n] = m;
  if (n == RT_KEYBOARD && chars && kb_next < 0) kb_next = now + 100 * RT_MILLISECONDS;
}

void *rt_me_high(const char *utype) {
  rt_act *a = cur->act;
  if (!a || !a->utype || strcmp(a->utype, utype) != 0) rt_raise(rt_exc("X_SCHED"));
  return a->ua;
}

/* LOW_IO (14.6) is implementation-dependent. Here device 1 is the operator's
 * teletype: command 1 types the character whose code is data, command 2
 * reads one into data (-1 at the end of input). Device 2 is the interrupt
 * controller: command n raises interrupt n with data */
void rt_low_io(rt_int device, rt_int command, rt_int *data) {
  if (device == 1 && command == 1) {
    rt_putc((int)*data);
    return;
  }
  if (device == 1 && command == 2) {
    *data = rt_getc();
    return;
  }
  if (device == 2) {
    post_interrupt(command, *data);
    maybe_preempt();
    return;
  }
  rt_raise_msg(RT_X_RANGE, "LOW_IO: no such device or command");
}

/* ---- GREEN rendezvous ---------------------------------------------------- */

void rt_entry_init(rt_entry *e) { e->callers = e->acceptors = NULL; }

rt_int rt_entry_count(rt_entry *e) {
  rt_int n = 0;
  for (rt_waiter *w = e->callers; w; w = w->next) n++;
  return n;
}

void rt_entry_call(rt_entry *e, void *params) {
  /* the caller's record stays in e->callers until an accept takes it */
  rt_waiter *w = rt_alloc(sizeof *w);
  w->t = cur;
  w->data = params;
  w->queue = &e->callers;
  rt_waiter **q = &e->callers;
  while (*q) q = &(*q)->next;
  *q = w;
  cur->accept_exc = 0;
  cur->callw = w;
  if (e->acceptors) satisfy(e->acceptors);
  cur->state = T_BLOCKED;
  reschedule();
  cur->callw = NULL;
  if (cur->accept_exc) rt_raise(cur->accept_exc);
  check_terminate();
}

void *rt_accept_begin(rt_entry *e) {
  if (!e->callers) {
    add_waiter(&e->acceptors, 0, NULL);
    block();
  }
  rt_waiter *w = e->callers;
  e->callers = w->next;
  w->queue = &cur->serving;
  w->next = cur->serving;
  cur->serving = w;
  return w->data;
}

void rt_accept_end(rt_entry *e, int failed, int exc) {
  (void)e;
  rt_waiter *w = cur->serving;
  cur->serving = w->next;
  /* the caller may have been aborted during the rendezvous */
  if (w->t && w->t->state == T_BLOCKED) {
    w->t->accept_exc = failed ? exc : 0;
    w->t->callw = NULL;
    make_ready(w->t);
  }
  maybe_preempt();
}

/* ---- WAIT / select ------------------------------------------------------- */

/* RED 10.5 leaves the choice among ready alternatives undefined; taking them
 * in turn keeps an always-ready one from starving the others */
static unsigned wait_turn;

int rt_wait(int n, rt_alt *alts) {
  int else_alt = -1;
  unsigned start = n > 0 ? wait_turn++ % (unsigned)n : 0;
  for (int k = 0; k < n; k++) {
    int i = (int)((start + (unsigned)k) % (unsigned)n);
    rt_alt *a = &alts[i];
    if (!a->open) continue;
    switch (a->kind) {
    case RT_ALT_SEND:
      if (((rt_mbox *)a->obj)->cap == 0) rt_raise(RT_X_EMPTY_MAILBOX);
      if (try_send(a->obj, a->data)) {
        maybe_preempt();
        return i;
      }
      break;
    case RT_ALT_RECEIVE:
      if (try_receive(a->obj, a->data)) {
        maybe_preempt();
        return i;
      }
      break;
    case RT_ALT_DELAY:
      if (a->t <= 0) return i;
      break;
    case RT_ALT_DELAY_UNTIL:
      if (a->t <= now) return i;
      break;
    case RT_ALT_INACTIVE:
      if (!((rt_act *)a->obj)->active) return i;
      break;
    case RT_ALT_ACCEPT:
      if (((rt_entry *)a->obj)->callers) return i;
      break;
    case RT_ALT_ELSE:
      else_alt = i;
      break;
    }
  }
  if (else_alt >= 0) return else_alt;
  int any = 0;
  for (int i = 0; i < n; i++) {
    rt_alt *a = &alts[i];
    if (!a->open) continue;
    any = 1;
    switch (a->kind) {
    case RT_ALT_SEND:
      add_waiter(&((rt_mbox *)a->obj)->senders, i, a->data);
      break;
    case RT_ALT_RECEIVE:
      add_waiter(&((rt_mbox *)a->obj)->receivers, i, a->data);
      break;
    case RT_ALT_DELAY:
    case RT_ALT_DELAY_UNTIL: {
      rt_int t = a->kind == RT_ALT_DELAY ? now + a->t : a->t;
      if (!cur->timed || t < cur->wake) {
        cur->timed = 1;
        cur->wake = t;
        cur->timer_alt = i;
      }
      break;
    }
    case RT_ALT_INACTIVE:
      add_waiter(&((rt_act *)a->obj)->waiters, i, NULL);
      break;
    case RT_ALT_ACCEPT:
      add_waiter(&((rt_entry *)a->obj)->acceptors, i, NULL);
      break;
    case RT_ALT_TERMINATE:
      cur->term_alt = i;
      break;
    }
  }
  if (!any) rt_raise_msg(RT_X_TASKING, "no open alternative");
  block();
  return cur->result;
}

int rt_wait_poll(int n, rt_alt *alts) {
  int else_alt = -1;
  for (int i = 0; i < n; i++) {
    rt_alt *a = &alts[i];
    if (!a->open) continue;
    switch (a->kind) {
    case RT_ALT_SEND:
      if (((rt_mbox *)a->obj)->cap == 0) rt_raise(RT_X_EMPTY_MAILBOX);
      if (try_send(a->obj, a->data)) {
        maybe_preempt();
        return i;
      }
      break;
    case RT_ALT_RECEIVE:
      if (try_receive(a->obj, a->data)) {
        maybe_preempt();
        return i;
      }
      break;
    case RT_ALT_DELAY_UNTIL:
      if (a->t <= now) return i;
      break;
    case RT_ALT_INACTIVE:
      if (!((rt_act *)a->obj)->active) return i;
      break;
    case RT_ALT_ELSE:
      else_alt = i;
      break;
    }
  }
  return else_alt;
}

void rt_wait_arm(int n, rt_alt *alts) {
  for (int i = 0; i < n; i++) {
    rt_alt *a = &alts[i];
    if (!a->open) continue;
    switch (a->kind) {
    case RT_ALT_SEND:
      add_waiter(&((rt_mbox *)a->obj)->senders, i, a->data);
      break;
    case RT_ALT_RECEIVE:
      add_waiter(&((rt_mbox *)a->obj)->receivers, i, a->data);
      break;
    case RT_ALT_DELAY_UNTIL:
      if (!cur->timed || a->t < cur->wake) {
        cur->timed = 1;
        cur->wake = a->t;
        cur->timer_alt = i;
      }
      break;
    case RT_ALT_INACTIVE:
      add_waiter(&((rt_act *)a->obj)->waiters, i, NULL);
      break;
    }
  }
  arm(cur);
}

int rt_wait_disarm(void) {
  int r = cur->satisfied ? cur->result : -1;
  if (!cur->satisfied) drop_armed(cur);
  cur->armed = 0;
  cur->satisfied = 0;
  return r;
}

/* ---- FREE (RED 4.4.3) ---------------------------------------------------- */

/* Everything reachable from the globals, the active frames of every task and
 * the frames of activations not yet started is scanned word by word; a word
 * equal to the start of a block makes that block reachable, and a word inside
 * the freed variable is another pointer to it. Values held only in C
 * temporaries of the translated code are not seen. */
static range *work;
static size_t nwork, cwork;

static void scan_word(uintptr_t w) {
  blockrec *b = bfind(w);
  if (b && b->mark != mark_epoch) {
    b->mark = mark_epoch;
    push_range(&work, &nwork, &cwork, (void *)b->p, b->n);
  }
}

/* the dynamic variables of types with FINALIZE, and how to finalize them */
typedef struct { uintptr_t p; rt_finfn fin; void *env; } finrec;
static finrec *fins;
static size_t nfins, cfins;

/* mark everything reachable; count the words that point into [target,
 * target + tn), skipping the word at skip and the target's own contents */
static size_t mark_reachable(uintptr_t target, size_t tn, uintptr_t skip) {
  size_t refs = 0;
  blockrec *tb = target ? bfind(target) : NULL;
  mark_epoch++;
  nwork = 0;
  for (size_t i = 0; i < nroots; i++) push_range(&work, &nwork, &cwork, roots[i].p, roots[i].n);
  for (rt_fstack *s = all_fstacks; s; s = s->next)
    for (size_t i = 0; i < s->depth; i++) push_range(&work, &nwork, &cwork, s->f[i].p, s->f[i].n);
  for (rt_task *t = all_tasks; t; t = t->all_next)
    if (t->state != T_DONE && t->frame) scan_word((uintptr_t)t->frame);
  if (tb) tb->mark = mark_epoch;
  while (nwork > 0) {
    range r = work[--nwork];
    uintptr_t a = ((uintptr_t)r.p + sizeof(void *) - 1) & ~(uintptr_t)(sizeof(void *) - 1);
    uintptr_t end = (uintptr_t)r.p + r.n;
    for (; a + sizeof(void *) <= end; a += sizeof(void *)) {
      if (a == skip) continue;
      uintptr_t w = *(uintptr_t *)a;
      if (target && w >= target && w < target + tn) refs++;
      scan_word(w);
    }
  }
  return refs;
}

static void forget_fin(uintptr_t p) {
  for (size_t i = 0; i < nfins; i++)
    if (fins[i].p == p) {
      fins[i] = fins[--nfins];
      return;
    }
}

void rt_free_check(void **v) {
  uintptr_t target = (uintptr_t)*v;
  if (!target) return;
  blockrec *tb = bfind(target);
  if (!tb) rt_raise_msg(RT_X_FREE, "not a dynamic variable");
  if (mark_reachable(target, tb->n, (uintptr_t)v) > 0) rt_raise(RT_X_FREE);
}

void rt_free(void **v) {
  uintptr_t target = (uintptr_t)*v;
  if (!target) return;
  rt_free_check(v);
  blockrec *tb = bfind(target);
  forget_fin(target);
  tb->p = DEAD_BLOCK; /* stays counted in the load until the table grows */
  free((void *)target);
  *v = NULL;
}

void *rt_salloc_fin(size_t n, rt_finfn fin, void *env) {
  void *p = rt_salloc(n);
  if (nfins == cfins) {
    cfins = cfins ? cfins * 2 : 64;
    fins = realloc(fins, cfins * sizeof *fins);
    if (!fins) {
      fprintf(stderr, "*** out of memory\n");
      exit(4);
    }
  }
  fins[nfins++] = (finrec){(uintptr_t)p, fin, env};
  return p;
}

/* a dynamic variable no pointer refers to has ceased to exist (13.3): it is
 * finalized, and reclaimed unless its FINALIZE made it reachable again */
void rt_collect(void) {
  if (!nfins) return;
  mark_reachable(0, 0, 0);
  size_t n = 0;
  finrec *dead = malloc(nfins * sizeof *dead);
  for (size_t i = 0; i < nfins;) {
    blockrec *b = bfind(fins[i].p);
    if (b && b->mark != mark_epoch) {
      dead[n++] = fins[i];
      fins[i] = fins[--nfins];
    } else {
      i++;
    }
  }
  for (size_t i = 0; i < n; i++) dead[i].fin((void *)dead[i].p, dead[i].env);
  mark_reachable(0, 0, 0);
  for (size_t i = 0; i < n; i++) {
    blockrec *b = bfind(dead[i].p);
    if (b && b->mark != mark_epoch) {
      b->p = DEAD_BLOCK;
      free((void *)dead[i].p);
    }
  }
  free(dead);
}

/* the program ends: so does every dynamic variable still there */
void rt_finalize_all(void) {
  while (nfins > 0) {
    finrec f = fins[--nfins];
    f.fin((void *)f.p, f.env);
  }
}

/* ---- start-up and shutdown ----------------------------------------------- */

static void on_unhandled(int id) {
  fflush(stdout);
  if (cur && cur != &main_task) {
    /* RED 9.3: an unhandled exception ends the task activation only */
#ifdef __wasi__
    longjmp(task_exit, 1);
#else
    pthread_exit(NULL);
#endif
  }
  fprintf(stderr, "*** unhandled exception %s\n", rt_exc_name(id));
  exit(1);
}

#ifndef __wasi__
static void on_segv(int sig) {
  void *bt[48];
  int n = backtrace(bt, 48);
  fflush(stdout);
  fprintf(stderr, "*** signal %d\n", sig);
  backtrace_symbols_fd(bt, n, 2);
  _exit(5);
}

#endif

void rt_init(int argc, char **argv) {
#ifndef __wasi__
  if (getenv("PALEO_ABORT")) {
    signal(SIGSEGV, on_segv);
    signal(SIGBUS, on_segv);
  }
#endif
  g_argc = argc;
  g_argv = argv;
  pthread_cond_init(&main_task.cv, NULL);
  main_task.state = T_RUNNING;
  main_task.prio = 0;
  main_task.term_alt = -1;
  all_tasks = &main_task;
  cur = &main_task;
  pthread_mutex_lock(&G);
  if (!RT_X_RANGE) rt_set_lang(0);
}

void rt_main_done(void) {
  fflush(stdout);
  exit(0);
}

/* ---- GREEN TEXT_IO and INPUT_OUTPUT (RM79 14) ---------------------------------
 * A file is a handle into a table; 1 and 2 are the standard input and output,
 * the default files until SET_INPUT and SET_OUTPUT change them. A text file
 * (TEXT_IO) keeps its line and column (14.3.2); a file of INPUT_OUTPUT holds
 * elements of ESZ bytes, numbered from 1 (14.1.2). The exceptions are those
 * of 14.2 and 14.4, one each, whichever instance raises them. */

typedef struct {
  int open;
  FILE *f;                 /* NULL for the standard files */
  char *name;
  int mode;                /* 1 IN_FILE, 2 OUT_FILE, 3 INOUT_FILE */
  rt_int esz;              /* bytes per element; 0 for a text file */
  rt_int line, col, len;   /* layout; len 0: no line length */
  rt_int next;             /* the next element, from 1 */
  int peek;                /* a character read ahead, or -2 */
  const g_lay *L;          /* INPUT_OUTPUT: the layout of the elements */
  int var;                 /* elements of different lengths: each after its length */
  long boff;               /* var: where the next element starts */
} g_file;

#define G_FILES 256
static g_file g_files[G_FILES] = {
  [1] = {1, NULL, "STANDARD_INPUT", 1, 0, 1, 1, 0, 1, -2},
  [2] = {1, NULL, "STANDARD_OUTPUT", 2, 0, 1, 1, 0, 1, -2},
};
static rt_int g_in = 1, g_out = 2;

_Noreturn static void g_io(const char *exc) { rt_raise(rt_exc(exc)); }

static g_file *g_file_of(rt_int h) {
  if (h <= 0 || h >= G_FILES || !g_files[h].open) g_io("FILE_OPEN_ERROR");
  return &g_files[h];
}

static void g_track1(g_file *x, int c) {
  if (c == '\n') {                       /* NEWLINE is LF: it ends the line */
    x->line++;
    x->col = 1;
  } else if (c == '\r') {
    x->col = 1;
  } else if (c == '\b') {
    if (x->col > 1) x->col--;
  } else if (c == '\t') {
    rt_int t = ((x->col - 1) / 8 + 1) * 8 + 1;
    if (x->len > 0 && t > x->len + 1) t = x->len + 1;
    x->col = t;
  } else if (c >= 32) {
    x->col++;
  }
}

static void g_raw_put(g_file *x, int c) {
  if (x->f) putc(c, x->f);
  else putchar(c);
  x->next++;
  g_track1(x, c);
}

/* one character: with a line length, a new line starts before a character
 * that would pass it (14.3.3) */
static void g_out_char(g_file *x, int c) {
  if (x->mode == 1) g_io("FILE_USE_ERROR");
  if (x->len > 0 && c >= 32 && x->col > x->len) g_raw_put(x, '\n');
  g_raw_put(x, c);
}

static void g_out_bytes(g_file *x, const unsigned char *p, rt_int n) {
  if (x->len == 0 && x->mode != 1) {
    fwrite(p, 1, (size_t)n, x->f ? x->f : stdout);
    x->next += n;
    for (rt_int i = 0; i < n; i++) g_track1(x, p[i]);
    return;
  }
  for (rt_int i = 0; i < n; i++) g_out_char(x, p[i]);
}

static int g_get(g_file *x) {
  int c;
  if (x->mode == 2) g_io("FILE_USE_ERROR");
  if (x->peek != -2) {
    c = x->peek;
    x->peek = -2;
  } else if (x->f) {
    c = getc(x->f);
  } else {
    c = rt_getc();
  }
  if (c >= 0) {
    x->next++;
    g_track1(x, c);
  }
  return c;
}

/* a character read ahead goes back; the column it took is given back */
static void g_unget(g_file *x, int c) {
  if (c < 0) return;
  x->peek = c;
  x->next--;
  if (c == '\n') x->line--;
  else if (c >= 32 && x->col > 1) x->col--;
}

/* an item is preceded by one space except at column 1, and starts a new
 * line when it does not fit on this one (14.3.4) */
static void g_item_on(g_file *x, rstr s, rt_int width, int right) {
  rt_int pad = width > s.len ? width - s.len : 0;
  if (x->len > 0 && x->col > 1 && x->col + 1 + pad + s.len - 1 > x->len) g_raw_put(x, '\n');
  if (x->col > 1) g_out_char(x, ' ');
  if (right) while (pad-- > 0) g_out_char(x, ' ');
  g_out_bytes(x, s.p, s.len);
  if (!right) while (pad-- > 0) g_out_char(x, ' ');
}

rt_int rt_g_col(void) { return g_files[g_out].col; }
rt_int rt_g_cur_in(void) { return g_in; }
rt_int rt_g_cur_out(void) { return g_out; }

void rt_g_fput(rt_int h, rstr s) { g_out_bytes(g_file_of(h), s.p, s.len); }
void rt_g_fputc(rt_int h, int c) { g_out_char(g_file_of(h), c); }
void rt_g_fput_int(rt_int h, rt_int v, rt_int width) { g_item_on(g_file_of(h), rt_str_of_int(v), width, 1); }
void rt_g_fput_bool(rt_int h, int v, rt_int width) {
  g_item_on(g_file_of(h), v ? rt_str("TRUE", 4) : rt_str("FALSE", 5), width, 0);
}
void rt_g_put_item(rt_int h, rstr s, rt_int width, int right) { g_item_on(g_file_of(h), s, width, right); }

void rt_g_put(rstr s) { rt_g_fput(g_out, s); }
void rt_g_putc(int c) { rt_g_fputc(g_out, c); }
void rt_g_put_int(rt_int v, rt_int width) { rt_g_fput_int(g_out, v, width); }
void rt_g_put_bool(int v, rt_int width) { rt_g_fput_bool(g_out, v, width); }

/* floating output is d.ddd E+ddd with a three-digit exponent (RM79 14.4) */
rstr rt_g_image_float(double v) {
  char b[64], m[48];
  int e = 0;
  if (isinf(v) || isnan(v)) {
    const char *t = isnan(v) ? "NAN" : v < 0 ? "-INF" : "INF";
    return rt_str_copy(rt_str(t, (rt_int)strlen(t)));
  }
  if (v != 0.0) {
    snprintf(m, sizeof m, "%.5e", v);
    char *x = strchr(m, 'e');
    e = atoi(x + 1);
    *x = 0;
  } else {
    strcpy(m, "0.00000");
  }
  int n = snprintf(b, sizeof b, "%sE%c%03d", m, e < 0 ? '-' : '+', e < 0 ? -e : e);
  return rt_str_copy(rt_str(b, n));
}

/* d.ddd E+ddd with FRACT digits after the point; without them when FRACT
 * is not positive (14.3.5) */
static rstr g_image_fract(double v, rt_int fract) {
  char b[96], m[80];
  int e = 0;
  if (isinf(v) || isnan(v)) return rt_g_image_float(v);
  if (fract > 40) fract = 40;
  if (v != 0.0) {
    snprintf(m, sizeof m, "%.*e", fract > 0 ? (int)fract : 0, v);
    char *x = strchr(m, 'e');
    e = atoi(x + 1);
    *x = 0;
  } else {
    snprintf(m, sizeof m, "%.*f", fract > 0 ? (int)fract : 0, 0.0);
  }
  int n = snprintf(b, sizeof b, "%sE%c%03d", m, e < 0 ? '-' : '+', e < 0 ? -e : e);
  return rt_str_copy(rt_str(b, n));
}

void rt_g_fput_float(rt_int h, double v, rt_int width, rt_int fract) {
  g_item_on(g_file_of(h), g_image_fract(v, fract), width, 1);
}

/* the old entry: the default number of digits */
void rt_g_put_float(double v, rt_int width, rt_int fract) {
  (void)fract;
  g_item_on(g_file_of(g_out), rt_g_image_float(v), width, 1);
}

/* fixed point (FIXED_IO): the image of the value with FRACT decimals */
void rt_g_put_fixed(rt_int h, rstr image, rt_int width, rt_int fract) {
  char b[96], t[64];
  rt_int n = image.len < 63 ? image.len : 63;
  memcpy(t, image.p, (size_t)n);
  t[n] = 0;
  double v = strtod(t, NULL);
  if (fract > 40) fract = 40;
  if (fract < 0) fract = 0;
  if (fabs(v) < 0.5 * pow(10, -(double)fract)) v = 0;
  int k = snprintf(b, sizeof b, "%.*f", (int)fract, v);
  g_item_on(g_file_of(h), rt_str_copy(rt_str(b, k)), width, 1);
}

rstr rt_g_fixed_image(double v, double small) {
  char b[96];
  int d = 0;
  while (d < 17) {
    double x = small * pow(10, d);
    if (fabs(x - nearbyint(x)) < 1e-9 * (x > 1 ? x : 1)) break;
    d++;
  }
  if (fabs(v) < 0.5 * pow(10, -(double)d)) v = 0;
  int n = snprintf(b, sizeof b, "%.*f", d, v);
  return rt_str_copy(rt_str(b, n));
}

/* DEFAULT_DECIMALS of FIXED_IO (RM79 14.4, page 14-11):
 * DELTA_REP'LENGTH - 2 with DELTA_REP = REP(DECIMALS - INTEGER(DECIMALS));
 * IMAGE is REP(DECIMALS), whose digits after the point are those of the
 * type's images */
rt_int rt_g_decimals(rstr image) {
  char t[64], b[96];
  rt_int n = image.len < 63 ? image.len : 63, d = 0;
  memcpy(t, image.p, (size_t)n);
  t[n] = 0;
  char *pt = strchr(t, '.');
  if (pt) d = (rt_int)strlen(pt + 1);
  double v = strtod(t, NULL), f = v - nearbyint(v);
  if (fabs(f) < 0.5 * pow(10, -(double)d)) f = 0;
  int k = snprintf(b, sizeof b, "%.*f", (int)d, f);
  return k - 2;
}

int rt_g_fgetc(rt_int h) {
  int c = g_get(g_file_of(h));
  if (c < 0) rt_raise(RT_X_FILE);
  return c;
}

int rt_g_getc(void) { return rt_g_fgetc(g_in); }

void rt_g_fget_str(rt_int h, rt_gstr *s) {
  rt_int n = G_CNT(*s);
  for (rt_int i = 0; i < n; i++) s->p[i] = (unsigned char)rt_g_fgetc(h);
}

/* ---- the items of text input: lexical units (14.3.4), after blanks ---- */

static int g_first(g_file *x) {
  int c;
  do c = g_get(x);
  while (c == ' ' || c == '\t' || c == '\n' || c == '\r');
  if (c < 0) rt_raise(RT_X_FILE);
  return c;
}

static int g_digit(int c) {
  if (c >= '0' && c <= '9') return c - '0';
  if (c >= 'A' && c <= 'F') return c - 'A' + 10;
  if (c >= 'a' && c <= 'f') return c - 'a' + 10;
  return 99;
}

/* digits of BASE with single underscores between them; the value, -1 when
 * there is none */
static int g_digits(g_file *x, int *c, int base, rt_int *v, int *ovf) {
  int any = 0;
  *v = 0;
  for (;;) {
    if (*c == '_' && any) {
      *c = g_get(x);
      if (g_digit(*c) >= base) g_io("INVALID_DATA");
    }
    int d = g_digit(*c);
    if (d >= base) break;
    if (__builtin_mul_overflow(*v, (rt_int)base, v) || __builtin_add_overflow(*v, (rt_int)d, v)) *ovf = 1;
    any = 1;
    *c = g_get(x);
  }
  return any;
}

/* integer ::= [sign] digits [# based_digits [#]] [E [+] digits] (2.4, 14.3.5) */
rt_int rt_g_fget_int(rt_int h) {
  g_file *x = g_file_of(h);
  int c = g_first(x), neg = 0, ovf = 0;
  rt_int v, b, e;
  if (c == '+' || c == '-') {
    neg = c == '-';
    c = g_get(x);
  }
  if (!g_digits(x, &c, 10, &v, &ovf)) g_io("INVALID_DATA");
  rt_int base = 10;
  if (c == '#' || c == ':') {
    int close = c;
    if (ovf || v < 2 || v > 16) g_io("INVALID_DATA");
    base = v;
    c = g_get(x);
    if (!g_digits(x, &c, (int)base, &v, &ovf)) g_io("INVALID_DATA");
    if (c == close) c = g_get(x);
  }
  if (c == 'E' || c == 'e') {
    c = g_get(x);
    if (c == '+') c = g_get(x);
    if (!g_digits(x, &c, 10, &e, &ovf)) g_io("INVALID_DATA");
    for (b = 0; b < e && !ovf; b++)
      if (__builtin_mul_overflow(v, base, &v)) ovf = 1;
  }
  g_unget(x, c);
  if (ovf) rt_raise(RT_X_OVERFLOW);
  return neg ? -v : v;
}

rt_int rt_g_get_int(void) { return rt_g_fget_int(g_in); }

/* the characters of a real literal: [sign] digits [. digits] [E [sign] digits] */
static rt_gstr g_real_text(g_file *x) {
  char b[128];
  int n = 0, c = g_first(x), any = 0;
  if (c == '+' || c == '-') {
    b[n++] = (char)c;
    c = g_get(x);
  }
  while ((c >= '0' && c <= '9') || (c == '_' && any)) {
    if (c != '_' && n < 120) b[n++] = (char)c;
    any = 1;
    c = g_get(x);
  }
  if (!any) g_io("INVALID_DATA");
  if (c == '.') {
    b[n++] = '.';
    c = g_get(x);
    if (!(c >= '0' && c <= '9')) g_io("INVALID_DATA");
    while ((c >= '0' && c <= '9') || c == '_') {
      if (c != '_' && n < 120) b[n++] = (char)c;
      c = g_get(x);
    }
  }
  if (c == 'E' || c == 'e') {
    b[n++] = 'E';
    c = g_get(x);
    if (c == '+' || c == '-') {
      b[n++] = (char)c;
      c = g_get(x);
    }
    if (!(c >= '0' && c <= '9')) g_io("INVALID_DATA");
    while (c >= '0' && c <= '9') {
      if (n < 120) b[n++] = (char)c;
      c = g_get(x);
    }
  }
  g_unget(x, c);
  b[n] = 0;
  rt_gstr r = {1, n, 1, 1, rt_alloc((size_t)n + 1)};
  memcpy(r.p, b, (size_t)n + 1);
  return r;
}

double rt_g_fget_float(rt_int h) {
  rt_gstr t = g_real_text(g_file_of(h));
  double v = strtod((char *)t.p, NULL);
  if (isinf(v)) rt_raise(RT_X_OVERFLOW);
  return v;
}

double rt_g_get_float(void) { return rt_g_fget_float(g_in); }

rt_gstr rt_g_get_real(rt_int h) { return g_real_text(g_file_of(h)); }

/* an identifier, or a character literal in quotes (2.3, 2.5) */
rt_gstr rt_g_get_word(rt_int h) {
  g_file *x = g_file_of(h);
  char b[256];
  int n = 0, c = g_first(x);
  if (c == '"') {
    b[n++] = '"';
    c = g_get(x);
    if (c < 32) g_io("INVALID_DATA");
    b[n++] = (char)c;
    c = g_get(x);
    if (c != '"') g_io("INVALID_DATA");
    b[n++] = '"';
  } else {
    if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))) g_io("INVALID_DATA");
    while ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || c == '_') {
      if (n < 250) b[n++] = (char)(c >= 'a' && c <= 'z' ? c - 32 : c);
      c = g_get(x);
    }
    g_unget(x, c);
  }
  rt_gstr r = {1, n, 1, 1, rt_alloc((size_t)n + 1)};
  memcpy(r.p, b, (size_t)n);
  return r;
}

/* TRUE or FALSE, in either case (14.3.6) */
int rt_g_fget_bool(rt_int h) {
  rt_gstr w = rt_g_get_word(h);
  if (G_CNT(w) == 4 && memcmp(w.p, "TRUE", 4) == 0) return 1;
  if (G_CNT(w) == 5 && memcmp(w.p, "FALSE", 5) == 0) return 0;
  g_io("INVALID_DATA");
}

/* ---- files (14.1, 14.2) ---- */

/* LAY: 0 for a text file, else the layout of the elements (14.2) */
void rt_g_open(rt_int *h, rstr name, rt_int mode, int create, rt_int lay) {
  if (*h > 0 && *h < G_FILES && g_files[*h].open) g_io("FILE_OPEN_ERROR");
  rt_int k = 3;
  while (k < G_FILES && g_files[k].open) k++;
  if (k == G_FILES) g_io("MALFUNCTION");
  const char *n = rt_cstr(name);
  FILE *f;
  if (create) {
    if (mode == 1) g_io("FILE_USE_ERROR");
    f = fopen(n, mode == 3 ? "w+b" : "wb");
  } else if (mode == 1) {
    f = fopen(n, "rb");
  } else {
    f = fopen(n, "r+b");
  }
  if (!f) g_io("FILE_NAME_ERROR");
  g_file *x = &g_files[k];
  x->open = 1;
  x->f = f;
  x->name = strdup(n);
  x->mode = (int)mode;
  x->esz = 0;
  x->L = (const g_lay *)(intptr_t)lay;
  x->var = 0;
  x->boff = 0;
  if (x->L) {
    rt_int bits = rt_g_lay_bits(x->L, NULL);
    if (bits >= 0) x->esz = bits > 0 ? (bits + 7) / 8 : 1;
    else x->var = 1, x->esz = 1;
  }
  x->line = x->col = 1;
  x->len = 0;
  x->next = 1;
  x->peek = -2;
  *h = k;
}

void rt_g_close(rt_int *h, int remove_it) {
  g_file *x = g_file_of(*h);
  if (!x->f) g_io("FILE_USE_ERROR");           /* a standard file stays */
  fclose(x->f);
  if (remove_it && remove(x->name) != 0) g_io("FILE_USE_ERROR");
  free(x->name);
  memset(x, 0, sizeof *x);
  if (g_in == *h) g_in = 1;
  if (g_out == *h) g_out = 2;
  *h = 0;
}

int rt_g_is_open(rt_int h) { return h > 0 && h < G_FILES && g_files[h].open; }

rt_gstr rt_g_name(rt_int h) {
  g_file *x = g_file_of(h);
  return rt_g_s2g(rt_str_copy(rt_str(x->name, (rt_int)strlen(x->name))));
}

static rt_int g_unit(g_file *x) { return x->esz > 0 ? x->esz : 1; }

rt_int rt_g_size(rt_int h) {
  g_file *x = g_file_of(h);
  if (!x->f) g_io("FILE_USE_ERROR");
  fflush(x->f);
  long here = ftell(x->f);
  fseek(x->f, 0, SEEK_END);
  long n = ftell(x->f);
  rt_int count = 0;
  if (x->var) {
    /* elements of different lengths: count them */
    long o = 0;
    while (o + 8 <= n) {
      rt_int bits;
      fseek(x->f, o, SEEK_SET);
      if (fread(&bits, 8, 1, x->f) != 1) break;
      o += 8 + (bits + 7) / 8;
      count++;
    }
  } else {
    count = (rt_int)(n / g_unit(x));
  }
  fseek(x->f, here, SEEK_SET);
  return count;
}

/* var: the byte where element pos starts */
static long g_var_offset(g_file *x, rt_int pos) {
  long o = 0;
  fflush(x->f);
  for (rt_int i = 1; i < pos; i++) {
    rt_int bits;
    fseek(x->f, o, SEEK_SET);
    if (fread(&bits, 8, 1, x->f) != 1) return -1;
    o += 8 + (bits + 7) / 8;
  }
  return o;
}

rt_int rt_g_next(rt_int h) { return g_file_of(h)->next; }

void rt_g_set_next(rt_int h, rt_int pos) {
  g_file *x = g_file_of(h);
  if (!x->f) g_io("FILE_USE_ERROR");
  if (pos < 1) g_io("FILE_USE_ERROR");
  fflush(x->f);
  x->peek = -2;
  if (x->esz == 0) {
    /* a text file: the line and the column of the position */
    rewind(x->f);
    x->line = x->col = 1;
    for (rt_int i = 1; i < pos; i++) {
      int c = getc(x->f);
      if (c < 0) break;
      g_track1(x, c);
    }
  }
  if (x->var) {
    long o = g_var_offset(x, pos);
    x->boff = o;                       /* -1: past the end, a READ fails */
    if (o >= 0) fseek(x->f, o, SEEK_SET);
  } else {
    fseek(x->f, (long)((pos - 1) * g_unit(x)), SEEK_SET);
  }
  x->next = pos;
}

void rt_g_read_bytes(rt_int h, void *item, size_t n) {
  g_file *x = g_file_of(h);
  if (x->mode == 2 || !x->f) g_io("FILE_USE_ERROR");
  fflush(x->f);
  fseek(x->f, (long)((x->next - 1) * g_unit(x)), SEEK_SET);
  if (fread(item, 1, n, x->f) != n) {
    if (feof(x->f)) rt_raise(RT_X_FILE);
    g_io("MALFUNCTION");
  }
  x->next++;
}

void rt_g_write_bytes(rt_int h, const void *item, size_t n) {
  g_file *x = g_file_of(h);
  if (x->mode == 1 || !x->f) g_io("FILE_USE_ERROR");
  fseek(x->f, (long)((x->next - 1) * g_unit(x)), SEEK_SET);
  if (fwrite(item, 1, n, x->f) != n) g_io("MALFUNCTION");
  x->next++;
}

void rt_g_read_char(rt_int h, int *c) { *c = rt_g_fgetc(h); }
void rt_g_write_char(rt_int h, int c) { rt_g_fputc(h, c); }

/* ---- layout (14.3.2) ---- */

rt_int rt_g_line_of(rt_int h) { return g_file_of(h)->line; }
rt_int rt_g_col_of(rt_int h) { return g_file_of(h)->col; }

void rt_g_set_line(rt_int h, rt_int to) {
  g_file *x = g_file_of(h);
  if (to < x->line) g_io("FILE_USE_ERROR");     /* the file is sequential */
  if (x->mode == 1) {
    while (x->line < to) {
      int c = g_get(x);
      if (c < 0) rt_raise(RT_X_FILE);
    }
    return;
  }
  while (x->line < to) g_raw_put(x, '\n');
  if (x->col > 1) g_raw_put(x, '\r');
}

void rt_g_set_col(rt_int h, rt_int to) {
  g_file *x = g_file_of(h);
  if (x->len > 0 && to > x->len) g_io("INVALID_LAYOUT");
  if (x->mode == 1) {
    if (to < x->col) g_io("FILE_USE_ERROR");
    while (x->col < to) {
      int c = g_get(x);
      if (c < 0) rt_raise(RT_X_FILE);
      if (c == '\n') g_io("INVALID_LAYOUT");
    }
    return;
  }
  while (x->col < to) g_raw_put(x, ' ');
  while (x->col > to) g_raw_put(x, '\b');
}

void rt_g_set_line_length(rt_int h, rt_int n) { g_file_of(h)->len = n; }

void rt_g_set_input(rt_int h) {
  if (g_file_of(h)->mode == 2) g_io("FILE_USE_ERROR");
  g_in = h;
}

void rt_g_set_output(rt_int h) {
  if (g_file_of(h)->mode == 1) g_io("FILE_USE_ERROR");
  g_out = h;
}

/* ---- GREEN abort (RM79 9.10) -------------------------------------------------- */

#define G_MAX_ABORTED 1024
static rt_task *g_aborted[G_MAX_ABORTED];
static int g_naborted;

void rt_g_abort(rt_act *a) {
  if (!a->active || !a->t) return;
  if (g_naborted < G_MAX_ABORTED) g_aborted[g_naborted++] = a->t;
  rt_exterminate(a);
}

/* T'CLOCK (RM79 9.9): the processor time of a task; time is virtual here,
 * so it is counted in the turns the task was given the processor */
double rt_g_task_clock(rt_act *a) { return a->t ? (double)a->t->runs : 0.0; }

int rt_g_aborted(void) {
  for (int i = 0; i < g_naborted; i++)
    if (g_aborted[i] == cur) return 1;
  return 0;
}

/* addresses are those of the simulated machine (RM79 13.5): the storage
 * units go through the memory and the windows */
void rt_g_load(rt_int a, rt_int n, unsigned char *buf);
void rt_g_save(rt_int a, rt_int n, const unsigned char *buf);
void rt_g_move_bytes(rt_int from, rt_int to, rt_int n) {
  if (n <= 0) return;
  unsigned char *b = rt_alloc((size_t)n * 8);
  rt_g_load(from, n, b);
  rt_g_save(to, n, b);
  free(b);
}

/* ---- GREEN: the rest of RM79 (attributes, real arithmetic, exceptions) ---- */

/* a declared exception is one exception, even when another one somewhere
 * else has the same name (RM79 11.1) */
int rt_g_exc_new(const char *name) {
  if (exc_count >= 4096) {
    fprintf(stderr, "*** too many exceptions\n");
    exit(4);
  }
  exc_names[exc_count] = name;
  return exc_count++;
}

static int g_exc_id(const char *name) { return rt_exc(name); }

rt_gstr rt_g_lit(const char *s, rt_int n) {
  rt_gstr r = {1, n, 1, 1, (unsigned char *)s};
  return r;
}

rt_gstr rt_g_s2g(rstr s) {
  rt_gstr r = {1, s.len, 1, 1, s.p};
  return r;
}

rstr rt_g_g2s(rt_gstr a) {
  rstr r = {G_CNT(a), a.p};
  return r;
}

void rt_g_overlap(void) { rt_raise(g_exc_id("OVERLAP_ERROR")); }
void rt_g_novalue(void) { rt_raise(RT_X_INIT); }

/* a visible subprogram of a task runs on the frame of the task's body: just
 * after initiate the task may not have reached it yet; an inactive task
 * raises TASKING_ERROR (RM79 9.1, 11.4) */
void *rt_g_task_frame(void **slot, rt_act *a) {
  while (!*slot && rt_is_active(a)) rt_yield();
  if (!*slot || !rt_is_active(a)) rt_raise(RT_X_TASKING);
  return *slot;
}

/* the exception a caller gets when the accept body it waits for ends with
 * X: FAILURE raised in the acceptor, or its abortion, is TASKING_ERROR for
 * the caller (RM79 11.4, 11.5) */
int rt_g_partner_exc(int x) {
  if (x == RT_X_TERMINATE || rt_g_aborted()) return RT_X_TASKING;
  return x;
}

/* the text of a file, null if it cannot be read: the form of pragma INCLUDE
 * that the first GREEN seed with INCLUDE calls */
void rt_g_read_file_text(rstr name, rstr **res) {
  FILE *f = fopen(rt_cstr(name), "rb");
  *res = NULL;
  if (!f) return;
  fseek(f, 0, SEEK_END);
  long n = ftell(f);
  fseek(f, 0, SEEK_SET);
  rstr *r = rt_alloc(sizeof *r);
  *r = rt_str_new(n);
  if (n == 0 || fread(r->p, 1, (size_t)n, f) == (size_t)n) *res = r;
  fclose(f);
}

/* the text of a file for pragma INCLUDE (RM79 App. B), read by greenc a
 * character at a time; the length is -1 if the file cannot be read */
static rstr g_include;

void rt_g_include_open(rstr name, rt_int *len) {
  FILE *f = fopen(rt_cstr(name), "rb");
  *len = -1;
  if (!f) return;
  fseek(f, 0, SEEK_END);
  long n = ftell(f);
  fseek(f, 0, SEEK_SET);
  g_include = rt_str_new(n);
  if (n == 0 || fread(g_include.p, 1, (size_t)n, f) == (size_t)n) *len = n;
  fclose(f);
}

/* the program library of greenc (RM79 10.4): a directory named by
 * GREEN_LIBRARY, a file per compilation unit; without it, no library */
#include <sys/stat.h>
void rt_g_lib_open(rstr key, rt_int *len) {
  const char *dir = getenv("GREEN_LIBRARY");
  *len = -1;
  if (!dir || !*dir) return;
  char path[4096];
  snprintf(path, sizeof path, "%s/%s.grn", dir, rt_cstr(key));
  rt_g_include_open(rt_str(path, (rt_int)strlen(path)), len);
}

void rt_g_lib_enabled(int *yes) {
  const char *dir = getenv("GREEN_LIBRARY");
  *yes = dir && *dir;
}

void rt_g_lib_store(rstr key, rstr text) {
  const char *dir = getenv("GREEN_LIBRARY");
  if (!dir || !*dir) return;
  mkdir(dir, 0777);
  char path[4096];
  snprintf(path, sizeof path, "%s/%s.grn", dir, rt_cstr(key));
  FILE *f = fopen(path, "wb");
  if (!f) return;
  fwrite(text.p, 1, (size_t)text.len, f);
  fclose(f);
}

void rt_g_include_char(rt_int i, int *c) {
  if (i < 1 || i > g_include.len) rt_raise(RT_X_SUBSCRIPT);
  *c = g_include.p[i - 1];
}

/* T'REP and T'VAL(S) of enumeration types: the literals' images, upper case;
 * a character literal is shown in quotes (RM79 App. A) */
rstr rt_g_enum_rep(rt_int v, const char *const *names, rt_int n) {
  if (v < 0 || v >= n) rt_raise(RT_X_RANGE);
  return rt_str_copy(rt_str(names[v], (rt_int)strlen(names[v])));
}

static void g_trim(rstr s, rt_int *a, rt_int *b) {
  *a = 0;
  *b = s.len;
  while (*a < *b && (s.p[*a] == ' ' || s.p[*a] == '\t')) (*a)++;
  while (*b > *a && (s.p[*b - 1] == ' ' || s.p[*b - 1] == '\t')) (*b)--;
}

rt_int rt_g_enum_val(rstr s, const char *const *names, rt_int n) {
  rt_int a, b;
  g_trim(s, &a, &b);
  for (rt_int i = 0; i < n; i++) {
    const char *x = names[i];
    rt_int len = (rt_int)strlen(x);
    if (len != b - a) continue;
    int quoted = x[0] == '"', same = 1;
    for (rt_int k = 0; k < len && same; k++) {
      int c = s.p[a + k];
      if (!quoted && c >= 'a' && c <= 'z') c -= 32;
      same = c == (unsigned char)x[k];
    }
    if (same) return i;
  }
  rt_raise(RT_X_RANGE);
}

static const char *const g_ctl[] = {
  "NUL", "SOH", "STX", "ETX", "EOT", "ENQ", "ACK", "BEL", "BS", "HT", "LF", "VT", "FF", "CR", "SO", "SI",
  "DLE", "DC1", "DC2", "DC3", "DC4", "NAK", "SYN", "ETB", "CAN", "EM", "SUB", "ESC", "FS", "GS", "RS", "US"};

/* CHARACTER'REP: a graphic character in quotes, a control character by name */
rstr rt_g_char_rep(rt_int v) {
  char b[8];
  if (v < 0 || v > 127) rt_raise(RT_X_RANGE);
  if (v < 32) return rt_str_copy(rt_str(g_ctl[v], (rt_int)strlen(g_ctl[v])));
  if (v == 127) return rt_str_copy(rt_str("DEL", 3));
  b[0] = '"';
  b[1] = (char)v;
  b[2] = '"';
  return rt_str_copy(rt_str(b, 3));
}

rt_int rt_g_char_val(rstr s) {
  rt_int a, b;
  g_trim(s, &a, &b);
  if (b - a == 3 && s.p[a] == '"' && s.p[a + 2] == '"') return s.p[a + 1];
  if (b - a == 1 && s.p[a] > ' ' && s.p[a] < 127) return s.p[a];
  for (int i = 0; i < 32; i++)
    if ((rt_int)strlen(g_ctl[i]) == b - a && strncasecmp((const char *)s.p + a, g_ctl[i], (size_t)(b - a)) == 0)
      return i;
  if (b - a == 3 && strncasecmp((const char *)s.p + a, "DEL", 3) == 0) return 127;
  rt_raise(RT_X_RANGE);
}

rstr rt_g_bool_rep(rt_int v) { return v ? rt_str_copy(rt_str("TRUE", 4)) : rt_str_copy(rt_str("FALSE", 5)); }

rt_int rt_g_bool_val(rstr s) {
  static const char *const names[] = {"FALSE", "TRUE"};
  return rt_g_enum_val(s, names, 2);
}

/* FLOAT'VAL(S): a real literal, underscores allowed (RM79 2.4) */
double rt_g_float_val(rstr s) {
  char b[128], *end;
  rt_int a, e, n = 0;
  g_trim(s, &a, &e);
  for (rt_int i = a; i < e && n < 120; i++)
    if (s.p[i] != '_') b[n++] = (char)s.p[i];
  b[n] = 0;
  if (n == 0) rt_raise(RT_X_RANGE);
  double v = strtod(b, &end);
  if (*end) rt_raise(RT_X_RANGE);
  return v;
}

/* real arithmetic: a result beyond the machine's range raises OVERFLOW, a
 * nonzero result too small to be represented raises UNDERFLOW (RM79 4.5);
 * k = 1 for the single precision of SHORT_FLOAT */
static double g_fres(double r, double a, double b, int k, int mul) {
  double big = k ? 3.40282347e+38 : 1.7976931348623157e+308;
  double tiny = k ? 1.17549435e-38 : 2.2250738585072014e-308;
  if (isnan(r) || isinf(r) || fabs(r) > big) rt_raise(RT_X_OVERFLOW);
  if (r != 0.0 && fabs(r) < tiny) rt_raise(g_exc_id("UNDERFLOW"));
  if (mul && r == 0.0 && a != 0.0 && b != 0.0) rt_raise(g_exc_id("UNDERFLOW"));
  return k ? (double)(float)r : r;
}

double rt_g_fadd(double a, double b, int k) { return g_fres(a + b, a, b, k, 0); }
double rt_g_fsub(double a, double b, int k) { return g_fres(a - b, a, b, k, 0); }
double rt_g_fmul(double a, double b, int k) { return g_fres(a * b, a, b, k, 1); }
double rt_g_fdiv(double a, double b, int k) {
  if (b == 0.0) rt_raise(RT_X_ZERO_DIVIDE);
  return g_fres(a / b, a, 1.0, k, 1);
}
double rt_g_fpow(double a, rt_int b, int k) {
  if (a == 0.0 && b < 0) rt_raise(RT_X_ZERO_DIVIDE);
  double r = 1.0;
  rt_int n = b < 0 ? -b : b;
  while (n-- > 0) r = g_fres(r * a, r, a, k, 1);
  return b < 0 ? g_fres(1.0 / r, 1.0, r, k, 1) : r;
}
double rt_g_fneg(double a, int k) { return g_fres(-a, a, 1.0, k, 0); }

/* conversion of a real value to an integer type rounds (RM79 4.6) */
rt_int rt_g_round(double v) {
  if (isnan(v) || v >= 9223372036854775807.0 || v <= -9223372036854775808.0) rt_raise(RT_X_OVERFLOW);
  return (rt_int)llround(v);
}

/* SHORT_INTEGER: a half word of the simulated machine (RM79 3.5.4) */
rt_int rt_g_short(rt_int v) {
  if (v < -2147483648LL || v > 2147483647LL) rt_raise(RT_X_OVERFLOW);
  return v;
}

/* fixed point (RM79 3.5.5): SMALL is the largest power of two not above the
 * delta; a value is a multiple of SMALL */
double rt_g_small(double delta) {
  if (!(delta > 0.0)) rt_raise(RT_X_RANGE);
  double s = 1.0;
  while (s > delta) s /= 2.0;
  while (s * 2.0 <= delta) s *= 2.0;
  return s;
}

/* T'LARGE and T'BITS of a fixed point type (RM79 App. A) */
double rt_g_fix_large(double small, double lo, double hi) {
  double m = fabs(lo) > fabs(hi) ? fabs(lo) : fabs(hi);
  return floor(m / small) * small;
}

rt_int rt_g_fix_bits(double small, double lo, double hi) {
  double n = rt_g_fix_large(small, lo, hi) / small;
  rt_int b = 0;
  while (n >= 1.0) {
    n /= 2.0;
    b++;
  }
  return b;
}

double rt_g_fix(double v, double small) {
  if (isnan(v) || isinf(v)) rt_raise(RT_X_OVERFLOW);
  return nearbyint(v / small) * small;
}

/* BLUE additions */
/* ---- BLUE (SofTech, 15 Feb 1978) --------------------------------------- */

int RT_B_SIZE, RT_B_INVALID_SUBSTRING, RT_B_INVALID_LENGTH, RT_B_INVALID_SIZE,
    RT_B_CONVERSION, RT_B_TYPE_MISMATCH;

/* the exception names of the BLUE specification (sections 3 and 4) */
void rt_b_lang(void) {
  RT_X_RANGE = RT_X_CASE = RT_X_NEG_EXP = rt_exc("RANGE");
  RT_X_SUBSCRIPT = rt_exc("SUBSCRIPT_RANGE");
  RT_X_OVERFLOW = rt_exc("OVERFLOW");
  RT_X_ZERO_DIVIDE = rt_exc("ZERO_DIVIDE");
  RT_X_NIL = rt_exc("NULL_REF");
  RT_X_ASSERT = rt_exc("ASSERTION_VIOLATED");
  RT_X_TERMINATE = rt_exc("TERMINATED");
  RT_X_INIT = rt_exc("UNINITIALIZED_VARIABLE");
  RT_X_FREE = rt_exc("SPACE_EXHAUSTED");
  RT_B_SIZE = RT_X_SUBTYPE = rt_exc("SIZE");
  RT_B_TYPE_MISMATCH = RT_X_TAG = rt_exc("TYPE_MISMATCH");
  RT_B_INVALID_SUBSTRING = rt_exc("INVALID_SUBSTRING");
  RT_B_INVALID_LENGTH = rt_exc("INVALID_LENGTH");
  RT_B_INVALID_SIZE = rt_exc("INVALID_SIZE");
  RT_B_CONVERSION = rt_exc("CONVERSION");
  RT_X_CREATE = RT_X_TASKING = RT_X_EMPTY_MAILBOX = rt_exc("TASKING");
  RT_X_FILE = rt_exc("END_OF_INPUT");
  RT_X_DEADLOCK = rt_exc("DEADLOCK");
  RT_B_INVALID_TYPE = rt_exc("INVALID_TYPE");
  RT_B_INVALID_REP = rt_exc("INVALID_REP");
  RT_B_UNDERFLOW = rt_exc("UNDERFLOW");
  RT_B_ARRAY_TOO_BIG = rt_exc("ARRAY_TOO_BIG");
}

rstr rt_b_slice(rstr s, rt_int l, rt_int u) {
  if (u < l) {
    if (l < 0 || l > s.len) rt_raise(RT_B_INVALID_SUBSTRING);
    rstr r = {0, s.p};
    return r;
  }
  if (l < 0 || u >= s.len) rt_raise(RT_B_INVALID_SUBSTRING);
  rstr r = {u - l + 1, s.p + l};
  return r;
}

void rt_b_assign(rstr *dst, rstr src) {
  if (dst->len != src.len) rt_raise(RT_B_SIZE);
  if (src.len) memmove(dst->p, src.p, (size_t)src.len);
}

void rt_b_slice_assign(rstr *dst, rt_int l, rt_int u, rstr src) {
  rstr part = rt_b_slice(*dst, l, u);
  rt_b_assign(&part, src);
}

int rt_b_eq(rstr a, rstr b) {
  if (a.len != b.len) rt_raise(RT_B_INVALID_LENGTH);
  return a.len == 0 || memcmp(a.p, b.p, (size_t)a.len) == 0;
}

#define B_MAXLEN 100000000             /* (BIT.LENGTH).MAX, (CHAR_STR.LENGTH).MAX */

rstr rt_b_dup(rstr c, rt_int n) {
  if (n < 0) rt_raise(RT_B_INVALID_LENGTH);
  if (n > B_MAXLEN || n * c.len > B_MAXLEN) rt_raise(RT_B_INVALID_SIZE);
  rstr r = rt_str_new(n * c.len);
  for (rt_int i = 0; i < n; i++) memcpy(r.p + i * c.len, c.p, (size_t)c.len);
  return r;
}

rstr rt_b_image(rt_int v) { return rt_str_of_int(v); }

rt_int rt_b_get_code(void) { return rt_getc(); }

/* ---- BLUE: arrays ------------------------------------------------------- */

rt_int rt_b_ix1(rt_int i, rt_int lo, rt_int hi) {
  if (i < lo || i > hi) rt_raise(RT_X_SUBSCRIPT);
  return i - lo;
}

rt_int rt_b_ixn(int d, const rt_int *lo, const rt_int *hi, ...) {
  va_list ap;
  rt_int off = 0;
  va_start(ap, hi);
  for (int k = 0; k < d; k++) {
    rt_int i = va_arg(ap, rt_int);
    if (i < lo[k] || i > hi[k]) {
      va_end(ap);
      rt_raise(RT_X_SUBSCRIPT);
    }
    off = off * (hi[k] - lo[k] + 1) + (i - lo[k]);
  }
  va_end(ap);
  return off;
}

rt_int rt_b_extent(int d, const rt_int *lo, const rt_int *hi) {
  rt_int n = 1;
  for (int k = 0; k < d; k++) n *= hi[k] >= lo[k] ? hi[k] - lo[k] + 1 : 0;
  return n;
}

int rt_b_same_extents(int d, const rt_int *lo1, const rt_int *hi1, const rt_int *lo2,
                      const rt_int *hi2) {
  for (int k = 0; k < d; k++) {
    rt_int a = hi1[k] >= lo1[k] ? hi1[k] - lo1[k] + 1 : 0;
    rt_int b = hi2[k] >= lo2[k] ? hi2[k] - lo2[k] + 1 : 0;
    if (a != b) return 0;
  }
  return 1;
}

rt_int rt_b_dim_extent(const rt_int *lo, const rt_int *hi, rt_int i, int d) {
  if (i < 0 || i >= d) rt_raise(RT_X_SUBSCRIPT);
  return hi[i] >= lo[i] ? hi[i] - lo[i] + 1 : 0;
}

/* ---- BLUE: fixed point (3.2): a value is a mantissa m standing for m * 2**-scale - */

typedef __int128 b_wide;

static rt_int b_narrow(b_wide v) {
  if (v > INT64_MAX || v < INT64_MIN) rt_raise(RT_X_OVERFLOW);
  return (rt_int)v;
}

/* q = a / b, truncated toward zero or rounded to nearest with ties to even */
static b_wide b_divide(b_wide a, b_wide b, int rounded) {
  if (b == 0) rt_raise(RT_X_ZERO_DIVIDE);
  b_wide q = a / b, r = a % b;
  if (rounded && r != 0) {
    b_wide r2 = (r < 0 ? -r : r) * 2, bb = b < 0 ? -b : b;
    int neg = (a < 0) != (b < 0);
    if (r2 > bb || (r2 == bb && (q & 1))) q += neg ? -1 : 1;
  }
  return q;
}

static b_wide b_pow2(rt_int k) {
  if (k > 120) rt_raise(RT_X_OVERFLOW);
  return (b_wide)1 << k;
}

rt_int rt_b_shl(rt_int v, rt_int k) { return b_narrow((b_wide)v * b_pow2(k)); }
rt_int rt_b_shr(rt_int v, rt_int k) { return k > 120 ? 0 : b_narrow(b_divide(v, b_pow2(k), 0)); }
rt_int rt_b_shr_round(rt_int v, rt_int k) { return k > 120 ? 0 : b_narrow(b_divide(v, b_pow2(k), 1)); }

rt_int rt_b_rescale(rt_int v, rt_int from, rt_int to, int rounded) {
  if (to >= from) return rt_b_shl(v, to - from);
  return rounded ? rt_b_shr_round(v, from - to) : rt_b_shr(v, from - to);
}

rt_int rt_b_div_round(rt_int a, rt_int b) { return b_narrow(b_divide(a, b, 1)); }

rt_int rt_b_mod_round(rt_int a, rt_int b) {
  b_wide q = b_divide(a, b, 1);
  return b_narrow((b_wide)a - q * b);
}

rt_int rt_b_mul_sc(rt_int a, rt_int b, rt_int k, int rounded) {
  b_wide p = (b_wide)a * b;
  if (k >= 0) {
    if (k > 62 && p != 0) rt_raise(RT_X_OVERFLOW);
    return b_narrow(p * ((b_wide)1 << k));
  }
  return b_narrow(b_divide(p, b_pow2(-k), rounded));
}

rt_int rt_b_div_sc(rt_int a, rt_int b, rt_int k, int rounded) {
  if (k >= 0) {
    if (k > 62 && a != 0) rt_raise(RT_X_OVERFLOW);
    return b_narrow(b_divide((b_wide)a * ((b_wide)1 << k), b, rounded));
  }
  return b_narrow(b_divide(a, (b_wide)b * b_pow2(-k), rounded));
}

/* exact decimal values (3.2.2, 3.2.6.1): natural numbers of 32-bit limbs */
typedef struct {
  int n, cap;
  uint32_t *d;
} b_big;

static void big_init(b_big *a, uint32_t v) {
  a->cap = 16;
  a->d = rt_alloc(sizeof *a->d * (size_t)a->cap);
  a->d[0] = v;
  a->n = v != 0;
}

static void big_room(b_big *a, int n) {
  if (n <= a->cap) return;
  uint32_t *d = rt_alloc(sizeof *d * (size_t)(n * 2));
  if (a->n) memcpy(d, a->d, sizeof *d * (size_t)a->n);
  a->d = d;
  a->cap = n * 2;
}

static void big_mul_add(b_big *a, uint32_t m, uint32_t c) {
  uint64_t carry = c;
  for (int i = 0; i < a->n; i++) {
    uint64_t t = (uint64_t)a->d[i] * m + carry;
    a->d[i] = (uint32_t)t;
    carry = t >> 32;
  }
  if (carry) {
    big_room(a, a->n + 1);
    a->d[a->n++] = (uint32_t)carry;
  }
}

static void big_shl(b_big *a, rt_int k) {
  if (!a->n || !k) return;
  int w = (int)(k / 32), b = (int)(k % 32);
  big_room(a, a->n + w + 1);
  a->d[a->n + w] = 0;
  for (int i = a->n - 1; i >= 0; i--) {
    uint64_t t = (uint64_t)a->d[i] << b;
    a->d[i + w + 1] |= (uint32_t)(t >> 32);
    a->d[i + w] = (uint32_t)t;
  }
  for (int i = 0; i < w; i++) a->d[i] = 0;
  a->n += w + 1;
  while (a->n && !a->d[a->n - 1]) a->n--;
}

static int big_cmp(const b_big *a, const b_big *b) {
  if (a->n != b->n) return a->n > b->n ? 1 : -1;
  for (int i = a->n - 1; i >= 0; i--)
    if (a->d[i] != b->d[i]) return a->d[i] > b->d[i] ? 1 : -1;
  return 0;
}

static void big_sub(b_big *a, const b_big *b) {      /* a >= b */
  int64_t borrow = 0;
  for (int i = 0; i < a->n; i++) {
    int64_t t = (int64_t)a->d[i] - (i < b->n ? b->d[i] : 0) - borrow;
    borrow = t < 0;
    a->d[i] = (uint32_t)(t + (borrow ? ((int64_t)1 << 32) : 0));
  }
  while (a->n && !a->d[a->n - 1]) a->n--;
}

static void big_copy(b_big *dst, const b_big *src) {
  big_init(dst, 0);
  big_room(dst, src->n + 1);
  memcpy(dst->d, src->d, sizeof *dst->d * (size_t)src->n);
  dst->n = src->n;
}

/* the digits DIG (n of them) times 10**e times 2**scale, as a mantissa: rounded to
 * the nearest (ties to even) or truncated; *ovf when it exceeds 2**63 */
static unsigned __int128 b_exact(const char *dig, int n, long e, rt_int scale, int rounded,
                                 int *ovf) {
  b_big num, den, t;
  big_init(&num, 0);
  big_init(&den, 1);
  *ovf = 0;
  for (int i = 0; i < n; i++) big_mul_add(&num, 10, (uint32_t)(dig[i] - '0'));
  if (!num.n) return 0;
  if (e > 5000) {
    *ovf = 1;
    return 0;
  }
  if (e < -5000) return 0;
  for (; e > 0; e--) big_mul_add(&num, 10, 0);
  for (; e < 0; e++) big_mul_add(&den, 10, 0);
  if (scale > 5000) {
    *ovf = 1;
    return 0;
  }
  if (scale < -5000) return 0;
  if (scale >= 0) big_shl(&num, scale);
  else big_shl(&den, -scale);
  big_copy(&t, &den);
  big_shl(&t, 64);
  if (big_cmp(&num, &t) >= 0) {
    *ovf = 1;
    return 0;
  }
  unsigned __int128 q = 0;
  for (int j = 63; j >= 0; j--) {
    big_copy(&t, &den);
    big_shl(&t, j);
    if (big_cmp(&num, &t) >= 0) {
      big_sub(&num, &t);
      q |= (unsigned __int128)1 << j;
    }
  }
  if (rounded && num.n) {
    big_shl(&num, 1);
    int c = big_cmp(&num, &den);
    if (c > 0 || (c == 0 && (q & 1))) q++;
  }
  return q;
}

/* a literal [+-]digits[.digits][E[+-]digits] as a mantissa at the scale; FALSE when
 * it does not have that form */
static int b_parse_lit(const char *s, rt_int scale, int rounded, rt_int *v) {
  int neg = 0, nd = 0, frac = 0, point = 0;
  long e = 0;
  char *dig = rt_alloc(strlen(s) + 1);
  if (*s == '+' || *s == '-') neg = *s++ == '-';
  for (; *s && *s != 'E'; s++) {
    if (*s == '.') {
      if (point) return 0;
      point = 1;
      continue;
    }
    if (*s < '0' || *s > '9') return 0;
    if (nd || *s != '0') dig[nd++] = *s;
    if (point) frac++;
  }
  if (*s == 'E') {
    const char *x = ++s;
    if (*x == '+' || *x == '-') x++;
    if (!*x) return 0;
    for (const char *y = x; *y; y++)
      if (*y < '0' || *y > '9') return 0;
    e = strtol(s, NULL, 10);
    if (e > 100000) e = 100000;
    if (e < -100000) e = -100000;
  }
  int ovf;
  unsigned __int128 q = b_exact(dig, nd, e - frac, scale, rounded, &ovf);
  if (ovf || q > ((unsigned __int128)1 << 63) || (!neg && q == ((unsigned __int128)1 << 63)))
    rt_raise(RT_X_OVERFLOW);
  *v = neg ? (rt_int)(-(b_wide)q) : (rt_int)q;
  return 1;
}

/* a decimal literal [+-]ddd[.ddd][E[+-]ee] as a mantissa at the scale, rounded */
rt_int rt_b_fix_lit(const char *s, rt_int scale) {
  rt_int v = 0;
  b_parse_lit(s, scale, 1, &v);
  return v;
}

/* TO_FIXED of a literal: its mathematical value at the scale (3.2.6.1) */
rt_int rt_b_fix_val(const char *s, rt_int scale, int rounded) {
  rt_int v = 0;
  b_parse_lit(s, scale, rounded, &v);
  return v;
}

static int b_pdp11;
static rstr b_md_pdp11(int op, rt_int a, rt_int b);
rstr rt_b_md(int op, rt_int a, rt_int b) {
  if (b_pdp11) return b_md_pdp11(op, a, b);
  b_wide r = 0;
  switch (op) {
  case '+': r = (b_wide)a + b; break;
  case '-': r = (b_wide)a - b; break;
  case '*': r = (b_wide)a * b; break;
  case '/': r = b == 0 ? 0 : a / b; break;
  default: r = b == 0 ? 0 : a % b; break;
  }
  rstr s = rt_str_new(128);
  unsigned __int128 u = (unsigned __int128)r;
  for (int i = 127; i >= 0; i--, u >>= 1) s.p[i] = (unsigned char)('0' + (int)(u & 1));
  return s;
}

double rt_b_fchk(double v) {
  if (isinf(v) || isnan(v)) rt_raise(RT_X_OVERFLOW);
  return v;
}

/* ---- BLUE: bitstrings (3.6): a value is a string of '0' and '1' ------------- */

rstr rt_b_zeros(rt_int n) {
  if (n < 0) rt_raise(RT_B_INVALID_LENGTH);
  if (n > B_MAXLEN) rt_raise(RT_B_INVALID_SIZE);
  rstr r = rt_str_new(n);
  memset(r.p, '0', (size_t)n);
  return r;
}

rstr rt_b_one(rstr s) {
  if (s.len != 1) rt_raise(RT_B_INVALID_LENGTH);
  return s;
}

static rstr b_logic(rstr a, rstr b, int op) {
  if (a.len != b.len) rt_raise(RT_B_INVALID_LENGTH);
  rstr r = rt_str_new(a.len);
  for (rt_int i = 0; i < a.len; i++) {
    int x = a.p[i] == '1', y = b.p[i] == '1';
    int z = op == 0 ? (x & y) : op == 1 ? (x | y) : (x ^ y);
    r.p[i] = (unsigned char)('0' + z);
  }
  return r;
}

rstr rt_b_and(rstr a, rstr b) { return b_logic(a, b, 0); }
rstr rt_b_or(rstr a, rstr b) { return b_logic(a, b, 1); }
rstr rt_b_xor(rstr a, rstr b) { return b_logic(a, b, 2); }

rstr rt_b_not(rstr a) {
  rstr r = rt_str_new(a.len);
  for (rt_int i = 0; i < a.len; i++) r.p[i] = a.p[i] == '1' ? '0' : '1';
  return r;
}

rstr rt_b_bits_of_int(rt_int v, rt_int n) {
  rstr r = rt_str_new(n);
  uint64_t u = (uint64_t)v;
  for (rt_int i = n - 1, k = 0; i >= 0; i--, k++)
    r.p[i] = (unsigned char)(k < 64 ? '0' + (int)((u >> k) & 1) : (v < 0 ? '1' : '0'));
  return r;
}

rt_int rt_b_int_of_bits(rstr b) {
  uint64_t u = 0;
  for (rt_int i = 0; i < b.len; i++) {
    if (u >> 62) rt_raise(RT_X_OVERFLOW);
    u = u * 2 + (b.p[i] == '1');
  }
  return (rt_int)u;
}

rstr rt_b_bits_of_float(double v) {
  uint64_t u;
  memcpy(&u, &v, sizeof u);
  rstr r = rt_str_new(64);
  for (int i = 63; i >= 0; i--, u >>= 1) r.p[i] = (unsigned char)('0' + (int)(u & 1));
  return r;
}

double rt_b_float_of_bits(rstr b) {
  if (b.len != 64) rt_raise(RT_B_INVALID_SIZE);
  uint64_t u = 0;
  for (int i = 0; i < 64; i++) u = u * 2 + (b.p[i] == '1');
  double v;
  memcpy(&v, &u, sizeof v);
  return v;
}

/* The layout of n elements of es bits on the simulated PDP-11 with 64-bit words
 * (3.7.3, 3.8.3, 3.9.3): each element in a slot, right-aligned, the filler bits
 * (zeros) before it. DENSE (0): the slot is the element; PACKED (1): the smallest
 * addressable unit of 8, 16, 32 or 64 bits that holds it (a character is a byte);
 * UNPACKED (2): whole words, as a simple variable. */
static rt_int B_WORD = 64;            /* bits of a word: 16 with bluec -pdp11 */
static int b_pdp11;                   /* bluec -pdp11: the PDP-11's F and D ranges */
static rt_int b_slot(rt_int es, int mode) {
  if (es <= 0) return mode == 0 ? 0 : 8;
  if (mode == 0) return es;
  if (mode == 1 && es <= B_WORD) {
    rt_int u = 8;
    while (u < es) u *= 2;
    return u;
  }
  return ((es + B_WORD - 1) / B_WORD) * B_WORD;
}
rt_int rt_b_pack_size(rt_int n, rt_int es, int mode) {
  return n <= 0 ? 0 : n * b_slot(es, mode);
}

/* the bit position of the value of element i (from 0) in that layout */
static rt_int b_pack_pos(rt_int i, rt_int es, int mode) {
  rt_int slot = b_slot(es, mode);
  return i * slot + (slot - es);
}

/* a field of fs bits after sz bits of a record (3.9.3): the new end; a PACKED field
 * does not cross a word if it fits in one */
rt_int rt_b_layout(rt_int sz, rt_int fs, int mode) {
  rt_int slot = b_slot(fs, mode);
  if (mode == 1 && slot <= B_WORD) {
    rt_int start = ((sz + slot - 1) / slot) * slot;
    if (start % B_WORD + slot > B_WORD) start = ((start + B_WORD - 1) / B_WORD) * B_WORD;
    return start + slot;
  }
  if (mode == 2) return ((sz + B_WORD - 1) / B_WORD) * B_WORD + slot;
  return sz + slot;
}

/* TO_BIT of a character string: each character the representation of its value in
 * the character set (es bits, or reps[code]), laid out by the packing; fillers 0 */
rstr rt_b_bits_of_chars(rstr s, rt_int es, int mode, const rstr *reps, rt_int n) {
  rt_int size = rt_b_pack_size(s.len, es, mode);
  if (size > B_MAXLEN) rt_raise(RT_B_INVALID_SIZE);
  rstr r = rt_str_new(size);
  memset(r.p, '0', (size_t)size);
  for (rt_int i = 0; i < s.len; i++) {
    rt_int code = (unsigned char)s.p[i], at = b_pack_pos(i, es, mode);
    if (reps) {
      if (code >= n || reps[code].len != es) rt_raise(RT_B_INVALID_REP);
      memcpy(r.p + at, reps[code].p, (size_t)es);
    } else {
      if (es < 63 && code >= ((rt_int)1 << es)) rt_raise(RT_B_INVALID_REP);
      for (rt_int k = 0; k < es; k++) r.p[at + k] = (unsigned char)('0' + ((code >> (es - 1 - k)) & 1));
    }
  }
  return r;
}

/* [CHAR_STR (n, C)]$$(bits): the characters of that representation; INVALID_SIZE if
 * no number of characters has it, INVALID_REP for a code not of the character set */
rstr rt_b_chars_of_bits(rstr b, rt_int es, int mode, const rstr *reps, rt_int n) {
  rt_int len = 0;
  while (rt_b_pack_size(len, es, mode) < b.len) len++;
  if (rt_b_pack_size(len, es, mode) != b.len) rt_raise(RT_B_INVALID_SIZE);
  rstr r = rt_str_new(len);
  for (rt_int i = 0; i < len; i++) {
    rt_int at = b_pack_pos(i, es, mode), code = -1;
    if (reps) {
      for (rt_int c = 0; c < n; c++)
        if (reps[c].len == es && memcmp(reps[c].p, b.p + at, (size_t)es) == 0) { code = c; break; }
    } else {
      code = 0;
      for (rt_int k = 0; k < es; k++) code = code * 2 + (b.p[at + k] == '1');
      if (code >= n) code = -1;
    }
    if (code < 0) rt_raise(RT_B_INVALID_REP);
    r.p[i] = (unsigned char)code;
  }
  return r;
}

/* FIXED_REP (size, signing) (v): the value if it has that representation (3.1.4.1) */
rt_int rt_b_fixed_rep(rt_int v, rt_int size, int is_unsigned) {
  if (size < 64) {
    rt_int lo = is_unsigned ? 0 : -((rt_int)1 << (size > 0 ? size - 1 : 0));
    rt_int hi = is_unsigned ? ((rt_int)1 << size) - 1 : size > 0 ? ((rt_int)1 << (size - 1)) - 1 : 0;
    if (v < lo || v > hi) rt_raise(RT_B_INVALID_REP);
  } else if (is_unsigned && v < 0) rt_raise(RT_B_INVALID_REP);
  return v;
}

rstr rt_b_bits_of_str(rstr s) {
  rstr r = rt_str_new(s.len * 8);
  for (rt_int i = 0; i < s.len; i++)
    for (int k = 0; k < 8; k++) r.p[i * 8 + k] = (unsigned char)('0' + ((s.p[i] >> (7 - k)) & 1));
  return r;
}

rstr rt_b_str_of_bits(rstr b) {
  if (b.len % 8) rt_raise(RT_B_INVALID_SIZE);
  rstr r = rt_str_new(b.len / 8);
  for (rt_int i = 0; i < r.len; i++) {
    int c = 0;
    for (int k = 0; k < 8; k++) c = c * 2 + (b.p[i * 8 + k] == '1');
    r.p[i] = (unsigned char)c;
  }
  return r;
}

rstr rt_b_bits_of_digits(rstr s, int bits) {
  if (s.len * bits > B_MAXLEN) rt_raise(RT_B_INVALID_SIZE);
  rstr r = rt_str_new(s.len * bits);
  for (rt_int i = 0; i < s.len; i++) {
    int c = s.p[i], v = c >= '0' && c <= '9' ? c - '0' : c >= 'A' && c <= 'F' ? c - 'A' + 10 : 99;
    if (v >= (1 << bits)) rt_raise(RT_B_CONVERSION);
    for (int k = 0; k < bits; k++) r.p[i * bits + k] = (unsigned char)('0' + ((v >> (bits - 1 - k)) & 1));
  }
  return r;
}

rstr rt_b_rep_of_enum(rt_int v, const rstr *reps, rt_int n) {
  if (v < 0 || v >= n) rt_raise(RT_X_RANGE);
  return reps[v];
}

rt_int rt_b_enum_of_rep(rstr b, const rstr *reps, rt_int n) {
  for (rt_int i = 0; i < n; i++)
    if (rt_str_eq(reps[i], b)) return i;
  rt_raise(RT_X_RANGE);
}

/* ---- BLUE: conversions and images ------------------------------------- */

static rstr b_big_image(rt_int v, rt_int k);

rstr rt_b_fix_image(rt_int v, rt_int scale) {
  if (scale <= 0) return b_big_image(v, -scale);
  /* m * 2**-s has exactly s decimal digits after the point */
  char b[200];
  int n = 0, neg = v < 0;
  unsigned __int128 m = neg ? -(b_wide)v : (b_wide)v;
  unsigned __int128 ip = scale >= 120 ? 0 : m >> scale;
  unsigned __int128 fp = scale >= 120 ? m : m & (((unsigned __int128)1 << scale) - 1);
  char ib[64];
  int k = 0;
  do {
    ib[k++] = (char)('0' + (int)(ip % 10));
    ip /= 10;
  } while (ip);
  if (neg) b[n++] = '-';
  while (k) b[n++] = ib[--k];
  b[n++] = '.';
  /* fp / 2**scale, digit by digit; at most scale digits */
  int digits = 0;
  do {
    fp *= 10;
    b[n++] = (char)('0' + (int)(fp >> scale));
    fp &= ((unsigned __int128)1 << scale) - 1;
    digits++;
  } while (fp && digits < scale && n < 190);
  return rt_str_copy(rt_str(b, n));
}

rstr rt_b_float_image(double v, rt_int prec) {
  char b[64];
  if (prec < 1) prec = 1;
  if (prec > 17) prec = 17;
  int n = snprintf(b, sizeof b, "%.*G", (int)prec, v);
  if (!strpbrk(b, ".EN")) b[n++] = '.';
  return rt_str_copy(rt_str(b, n));
}

rstr rt_b_bool_image(rt_int v) { return v ? rt_str("TRUE", 4) : rt_str("FALSE", 5); }

rstr rt_b_enum_image(const char **names, rt_int v) {
  return rt_str_copy(rt_str(names[v], (rt_int)strlen(names[v])));
}

rt_int rt_b_fix_of_float(double v, rt_int scale, int rounded) {
  double x = ldexp(v, (int)scale);
  if (!(x > -9.2233720368547758e18 && x < 9.2233720368547758e18)) rt_raise(RT_X_OVERFLOW);
  double t = trunc(x);
  if (rounded) {
    double r = x - t;
    if (fabs(r) > 0.5 || (fabs(r) == 0.5 && fmod(t, 2) != 0)) t += x < 0 ? -1 : 1;
  }
  return (rt_int)t;
}

/* a fixed-literal with blanks around it (3.2.6.1): ddd[.ddd]\Sss, [+-]ddd[E[+-]ee]
 * or [+-]ddd.ddd...\Sss; its value is converted exactly, then rounded or truncated */
rt_int rt_b_fix_of_str(rstr s, rt_int scale, int rounded) {
  rt_int i = 0, n = 0;
  char *b = rt_alloc((size_t)s.len + 1);
  while (i < s.len && s.p[i] == ' ') i++;
  while (i < s.len && s.p[i] != ' ') b[n++] = (char)s.p[i++];
  while (i < s.len && s.p[i] == ' ') i++;
  b[n] = 0;
  if (n == 0 || i != s.len) rt_raise(RT_B_CONVERSION);
  /* a scale-spec \S[+-]ddd ends a decimal-literal; without one there is no point */
  char *sc = strstr(b, "\\S");
  int point = strchr(b, '.') != NULL;
  if (sc) {
    const char *x = sc + 2;
    if (*x == '+' || *x == '-') x++;
    if (!*x) rt_raise(RT_B_CONVERSION);
    for (; *x; x++)
      if (*x < '0' || *x > '9') rt_raise(RT_B_CONVERSION);
    *sc = 0;
  } else if (point) {
    rt_raise(RT_B_CONVERSION);
  }
  int digits = 0;
  for (char *x = b; *x && *x != 'E'; x++) digits += *x >= '0' && *x <= '9';
  rt_int v = 0;
  if (!digits || !b_parse_lit(b, scale, rounded, &v)) rt_raise(RT_B_CONVERSION);
  return v;
}

double rt_b_float_of_fix(rt_int v, rt_int scale) { return ldexp((double)v, (int)-scale); }

double rt_b_float_of_str(rstr s) {
  const char *c = rt_cstr(s);
  char *end;
  double v = strtod(c, &end);
  while (*end == ' ') end++;
  if (end == c || *end) rt_raise(RT_B_CONVERSION);
  return v;
}

rt_int rt_b_succ(rt_int v, rt_int n) {
  if (v + 1 >= n) rt_raise(RT_X_RANGE);
  return v + 1;
}

rt_int rt_b_pred(rt_int v) {
  if (v <= 0) rt_raise(RT_X_RANGE);
  return v - 1;
}

/* a device of the simulated machine interrupts: its semaphore is RELEASEd after
 * us microseconds of the virtual clock, by a task of the device */
struct b_irq {
  rt_act act;
  rt_b_sem *s;
  rt_int us;
};
static rt_taskdecl b_devices;
static void b_irq_fn(void *p) {
  struct b_irq *q = p;
  rt_delay(q->us);
  rt_b_release(q->s);
}
void rt_b_interrupt_after(rt_b_sem *s, rt_int us) {
  struct b_irq *q = rt_alloc(sizeof *q);
  q->s = s;
  q->us = us < 0 ? 0 : us;
  q->act.has_prio = 1;
  q->act.prio = 255;
  rt_create(&q->act, &b_devices, b_irq_fn, q);
}

/* bluec -pdp11: STD fixed point values, words and floating point ranges of the
 * PDP-11 (16-bit words; F and D formats with an 8-bit exponent) */
static rt_int b_std_bits = 64;
void rt_b_machine(int word) {
  B_WORD = word;
  b_std_bits = word;
  b_pdp11 = word == 16;
}

/* a fixed point value of STD precision: OVERFLOW outside the machine's word */
rt_int rt_b_std(rt_int v) {
  if (b_std_bits < 64) {
    rt_int lim = (rt_int)1 << (b_std_bits - 1);
    if (v < -lim || v >= lim) rt_raise(RT_X_OVERFLOW);
  }
  return v;
}

/* a TARGET routine (4.8.2): its assembly code is for the object machine, which
 * this implementation simulates without executing machine code; invoking one
 * raises TARGET_TRAP, which a handler may take */
int RT_B_TARGET_TRAP;
void rt_b_no_target_code(const char *name) {
  (void)name;
  if (!RT_B_TARGET_TRAP) RT_B_TARGET_TRAP = rt_exc("TARGET_TRAP");
  rt_raise(RT_B_TARGET_TRAP);
}

/* the program's arguments and files, for bluec (TERMINAL, implementation-defined) */
rt_int rt_b_file_exists(rstr name) {
  FILE *f = fopen(rt_cstr(name), "rb");
  if (!f) return 0;
  fclose(f);
  return 1;
}

/* ---- BLUE: parallel processing (4.6) ------------------------------------- */

struct rt_b_sem {
  rt_int value;
  rt_waiter *q;
  int region, connected;
};

struct rt_b_act {
  rt_act act;
  void (*fn)(void *);
  void *frame;
  rt_b_par *par;              /* the block it belongs to */
  rt_b_par *waiting;          /* the block it waits on */
  rt_b_act *sibling;
  rt_int start, end;
  int done, exc;
  rt_b_sem **holds;           /* REGION semaphores requested and not released */
  int nholds, maxholds;
  rt_b_sem *connected;        /* the interrupt semaphore of its CONNECT clause */
  rt_int cpu;                 /* processing time, in virtual microseconds (4.6.5) */
  rt_b_act *order;            /* the activations of a block, in the order made */
  rt_int pid;                 /* its ACTIVATION_ID (D.7) */
  const char *cname;          /* the interrupt of its CONNECT clause, by name */
  int selected;               /* named by the list a PAR_BLOCK_ runs */
};

static rt_b_act b_main;
static __thread rt_b_act *b_self;

static rt_b_act *b_me(void) { return b_self ? b_self : &b_main; }

rt_b_sem *rt_b_sem_new(int region) {
  rt_b_sem *s = rt_alloc(sizeof *s);
  s->region = region;
  return s;
}

/* the value of a semaphore: its representation (TO_BIT, [SEMAPHORE]$$, 3.11.3) */
rt_int rt_b_sem_count(rt_b_sem *s) { return s ? s->value : 0; }

rt_b_sem *rt_b_sem_value(rt_int n, int region) {
  if (n < 0) rt_raise(RT_X_RANGE);
  rt_b_sem *s = rt_b_sem_new(region);
  s->value = n;
  return s;
}

/* 3.11.5: the value only; the list of blocked activations becomes empty */
void rt_b_sem_assign(rt_b_sem *dst, rt_b_sem *src) {
  dst->value = src->value;
  dst->q = NULL;
}

static void b_hold(rt_b_sem *s) {
  rt_b_act *a = b_me();
  if (s->region) {
    if (a->nholds == a->maxholds) {
      a->maxholds = a->maxholds ? 2 * a->maxholds : 8;
      a->holds = realloc(a->holds, sizeof *a->holds * (size_t)a->maxholds);
      if (!a->holds) rt_raise(RT_X_FREE);
    }
    a->holds[a->nholds++] = s;
  }
}

/* a path TERMINATEd before it first ran has had no blocking point yet: REQUEST and
 * WAIT are where it learns of it, so it neither takes a semaphore nor waits */
void rt_b_request(rt_b_sem *s) {
  check_terminate();
  if (s->value > 0) {
    s->value--;
    b_hold(s);
    return;
  }
  add_waiter(&s->q, 0, NULL);
  block();
  b_hold(s);
}

/* the highest priority waiter, the one that waited longest among equals (4.6.7) */
void rt_b_release(rt_b_sem *s) {
  rt_b_act *a = b_me();
  for (int i = a->nholds - 1; i >= 0; i--)
    if (a->holds[i] == s) {
      a->holds[i] = a->holds[--a->nholds];
      break;
    }
  rt_waiter *best = NULL;
  for (rt_waiter *w = s->q; w; w = w->next)
    if (!best || w->t->prio > best->t->prio) best = w;
  if (!best) {
    s->value++;
    return;
  }
  satisfy(best);
  maybe_preempt();
  check_terminate();          /* TERMINATEd while it was preempted (4.6.3) */
}

/* the connection is made when the activation is (4.6.1); the path started next
 * takes it */
static __thread rt_b_sem *b_connecting;

void rt_b_connect(rt_b_sem *s) {
  if (s->connected) rt_raise(rt_exc("INTERRUPT"));
  s->connected = 1;
  b_connecting = s;
}

rt_b_paths rt_b_paths_new(void) {
  rt_b_paths p = {0, 0, rt_alloc(sizeof(rt_b_act *))};
  return p;
}

void rt_b_paths_range(rt_b_paths *p, rt_int lo, rt_int hi) {
  p->lo = lo;
  p->hi = hi;
  p->a = rt_alloc(sizeof(rt_b_act *) * (size_t)(hi >= lo ? hi - lo + 1 : 1));
}

rt_b_act *rt_b_paths_at(rt_b_paths *p, rt_int i) {
  if (i < p->lo || i > p->hi || !p->a[i - p->lo]) rt_raise(RT_X_SUBSCRIPT);
  return p->a[i - p->lo];
}

static void b_trampoline(void *arg) {
  rt_b_act *a = arg;
  b_self = a;
  a->fn(a->frame);
  a->done = 1;
  a->end = rt_time();
}

void rt_b_par_begin(void) {}

/* the activation is ready but does not run before its siblings are all ready (4.6.1) */
void rt_b_path_start(rt_b_paths *p, rt_int i, void (*fn)(void *), void *frame, rt_b_par *par,
                     rt_int prio) {
  rt_b_act *a = rt_alloc(sizeof *a);
  a->fn = fn;
  a->frame = frame;
  a->par = par;
  a->start = rt_time();
  a->connected = b_connecting;
  b_connecting = NULL;
  a->sibling = par->children;
  par->children = a;
  p->a[i - p->lo] = a;
  rt_task *t = rt_alloc(sizeof *t);
  pthread_cond_init(&t->cv, NULL);
  t->id = ++task_ids;
  t->prio = prio;
  t->fn = b_trampoline;
  t->frame = a;
  t->act = &a->act;
  t->decl = &par->td;
  t->term_alt = -1;
  a->act.t = t;
  a->act.active = 1;
  par->td.live++;
  t->all_next = all_tasks;
  all_tasks = t;
  t->state = T_HELD;          /* ready when all the block's paths are activated */
  pthread_attr_t attr;
  pthread_attr_init(&attr);
#ifdef __wasi__
  pthread_attr_setstacksize(&attr, 1u << 20);
#else
  pthread_attr_setstacksize(&attr, 64u << 20);
#endif
  if (pthread_create(&t->th, &attr, task_main, t) != 0) {
    fprintf(stderr, "*** cannot start a path\n");
    exit(4);
  }
  pthread_detach(t->th);
  trace("create", t);
}

/* the activations of a block, in the order they were made */
static int b_activations(rt_b_par *par, rt_b_act ***v) {
  int n = 0;
  for (rt_b_act *c = par->children; c; c = c->sibling) n++;
  *v = rt_alloc(sizeof **v * (size_t)(n ? n : 1));
  int k = n;
  for (rt_b_act *c = par->children; c; c = c->sibling) (*v)[--k] = c;
  return n;
}

/* the paths are deactivated: their interrupt connections end */
static void b_disconnect(rt_b_par *par) {
  for (rt_b_act *c = par->children; c; c = c->sibling)
    if (c->connected) {
      c->connected->connected = 0;
      c->connected = NULL;
    }
}

/* all the activations are put in the ready state together (4.6.1) */
void rt_b_par_end(rt_b_par *par) {
  rt_b_act *me = b_me(), **v;
  int n = b_activations(par, &v);
  for (int i = 0; i < n; i++)
    if (v[i]->act.t->state == T_HELD) make_ready(v[i]->act.t);
  me->waiting = par;
  rt_await_decl(&par->td);
  me->waiting = NULL;
  b_disconnect(par);
  if (par->exc) rt_raise(par->exc);
}

/* ---- PAR_BLOCK_ of a program (D.7): the activations made by a block are handed
 * to it as a list; RUN_PATHS, the implementation's PAR_BLOCK_, runs those named
 * in the list it is given, with its priorities, and waits for them ---- */
static rt_b_par *b_dispatch[64];
static int b_ndispatch;

void rt_b_path_info(rt_b_par *par, rt_int path, rt_int i, const char *connect) {
  rt_b_act *a = par->children;              /* the activation just made */
  a->pid = path * ((rt_int)1 << 32) + (i & 0xffffffff);
  a->cname = connect;
}

void rt_b_par_dispatch_push(rt_b_par *par) {
  if (b_ndispatch == 64) rt_raise(RT_X_FREE);
  b_dispatch[b_ndispatch++] = par;
}

static rt_b_par *b_dispatching(void) {
  if (b_ndispatch == 0) rt_raise(RT_X_TASKING);
  return b_dispatch[b_ndispatch - 1];
}

/* the block's PAR_BLOCK_ returned: if it ran no RUN_PATHS, no activation runs */
void rt_b_par_dispatch_pop(void) {
  rt_b_par *par = b_dispatching();
  b_ndispatch--;
  if (!par->ran) rt_b_par_abandon(par);
}

static rt_b_act *b_dispatched(rt_int i) {
  rt_b_act **v;
  int n = b_activations(b_dispatching(), &v);
  if (i < 0 || i >= n) rt_raise(RT_X_SUBSCRIPT);
  return v[i];
}

rt_int rt_b_par_count(void) {
  rt_b_act **v;
  return b_activations(b_dispatching(), &v);
}

rt_int rt_b_par_id(rt_int i) { return b_dispatched(i)->pid; }

rt_int rt_b_par_prio(rt_int i) { return b_dispatched(i)->act.t->prio; }

/* the name padded with blanks to len characters (the CONNECT_NAME of D.7) */
rstr rt_b_par_connect(rt_int i, rt_int len) {
  const char *c = b_dispatched(i)->cname;
  rstr r = rt_str_new(len);
  memset(r.p, ' ', (size_t)len);
  if (c) {
    size_t n = strlen(c);
    memcpy(r.p, c, n < (size_t)len ? n : (size_t)len);
  }
  return r;
}

void rt_b_par_select(rt_int addr, rt_int prio) {
  rt_b_act *a = b_dispatched(addr - 1);
  if (prio < 0 || prio > 255) rt_raise(RT_X_RANGE);
  if (a->act.t->state == T_HELD) a->act.t->prio = (int)prio;
  a->selected = 1;
}

/* the activations not named never run; the others run, and the block ends */
void rt_b_par_run(void) {
  rt_b_par *par = b_dispatching();
  if (par->ran) rt_raise(RT_X_TASKING);
  par->ran = 1;
  for (rt_b_act *c = par->children; c; c = c->sibling) {
    rt_task *t = c->act.t;
    if (!c->selected && t->state == T_HELD) {
      t->state = T_DONE;
      c->done = 1;
      par->td.live--;
      if (c->connected) {
        c->connected->connected = 0;
        c->connected = NULL;
      }
    }
  }
  rt_b_par_end(par);
}

/* an exception while the paths were activated (a PRIORITY out of range, a second
 * CONNECT to an interrupt): the activations made so far never run */
void rt_b_par_abandon(rt_b_par *par) {
  for (rt_b_act *c = par->children; c; c = c->sibling) {
    rt_task *t = c->act.t;
    if (t->state == T_HELD) {
      t->state = T_DONE;
      c->done = 1;
      par->td.live--;
    }
  }
  b_disconnect(par);
  if (b_connecting) {
    b_connecting->connected = 0;
    b_connecting = NULL;
  }
}

/* the first thing a path activation does: it may have been TERMINATEd before it
 * ever ran (4.6.3) */
void rt_b_path_begin(void) { check_terminate(); }

/* an exception ended the path: one it may signal, or TERMINATED, is raised by the
 * block (4.6.1); its REGION semaphores are released */
void rt_b_path_failed(int exc, int allowed) {
  rt_b_act *a = b_me();
  while (a->nholds > 0) rt_b_release(a->holds[a->nholds - 1]);
  if (!allowed && exc != RT_X_TERMINATE) {
    fflush(stdout);
    fprintf(stderr, "*** unhandled exception %s in a path\n", rt_exc_name(exc));
    exit(1);
  }
  a->exc = exc;
  if (a->par) a->par->exc = exc;
}

rt_int rt_b_check_priority(rt_int p) {
  if (p < 0 || p > 255) rt_raise(RT_X_RANGE);
  return p;
}

/* TERMINATED in the activation, or in the leaves of its tree of activations (4.6.3) */
void rt_b_terminate(rt_b_act *a) {
  if (!a) rt_raise(RT_X_TERMINATE);
  if (a->done) return;
  if (a->waiting) {
    for (rt_b_act *c = a->waiting->children; c; c = c->sibling) rt_b_terminate(c);
    return;
  }
  if (a == b_me()) rt_raise(RT_X_TERMINATE);
  rt_exterminate(&a->act);
  check_terminate();
}

void rt_b_priority(rt_b_act *a, rt_int p) {
  rt_b_check_priority(p);
  if (!a) a = b_me();
  if (a->done) return;
  if (a == &b_main) {
    rt_set_priority(rt_me(), p);
    return;
  }
  rt_set_priority(&a->act, p);
  check_terminate();
}

/* the cumulative processing time of the activation, in seconds at scale 20 (4.6.5) */
rt_int rt_b_clock(rt_b_act *a) {
  if (!a) a = b_me();
  return (rt_int)(((b_wide)a->cpu << 20) / 1000000);
}

/* the time of the simulated machine's real-time clock since the program began, in
 * seconds at scale 20: REAL_TIME of the TERMINAL segment */
rt_int rt_b_real_time(void) { return (rt_int)(((b_wide)rt_time() << 20) / 1000000); }

/* Processing takes time (4.6.2, 4.6.5): every loop iteration and every routine
 * invocation of a BLUE program is a step, and RT_B_STEPS_PER_US steps take one
 * virtual microsecond of the executing activation. The clock moves with them, so a
 * WAIT expires while another activation computes, and the scheduler preempts it then. */
rt_int rt_b_ticks, rt_b_quantum = RT_B_STEPS_PER_US;
void rt_b_charge(void) {
  rt_b_ticks = 0;
  now++;
  b_me()->cpu++;
  for (rt_task *t = all_tasks; t; t = t->all_next)
    if (t->state == T_BLOCKED && t->timed && t->wake <= now) {
      t->result = t->timer_alt;
      drop_waiters(t);
      make_ready(t);
    }
  maybe_preempt();
  check_terminate();
}

void rt_b_wait(rt_int v, rt_int scale) {
  check_terminate();
  if (v <= 0) {
    rt_yield();
    return;
  }
  b_wide us = (b_wide)v * 1000000;
  b_wide ticks = scale >= 0 ? (us + b_pow2(scale) - 1) / b_pow2(scale) : us * b_pow2(-scale);
  rt_delay(b_narrow(ticks));
}


/* ---- BLUE: the rest of the language (coverage of the 1978 specification) ---- */

int RT_B_INVALID_TYPE, RT_B_INVALID_REP, RT_B_UNDERFLOW;

/* a string or bitstring object of a length its type gives (3.6.1, 3.7.1): SIZE
 * (bitstrings) or INVALID_SIZE (charstrings) beyond the largest length */
rstr rt_b_str_new(rt_int n, int bits) {
  if (n > B_MAXLEN) rt_raise(bits ? RT_B_SIZE : RT_B_INVALID_SIZE);
  if (n < 0) rt_raise(RT_B_INVALID_LENGTH);
  return bits ? rt_b_zeros(n) : rt_str_new(n);
}

/* E !! F: INVALID_SIZE beyond the largest length (3.6.4.1, 3.7.4.1) */
rstr rt_b_cat(rstr a, rstr b) {
  if (a.len + b.len > B_MAXLEN) rt_raise(RT_B_INVALID_SIZE);
  return rt_str_cat(a, b);
}

/* floating point (3.3): two implemented precisions, single (7 digits) and double
 * (15); a result is rounded to nearest even (ROUNDED, NATIVE_R) or toward zero
 * (TRUNCATED, NATIVE_T) in its implemented precision; OVERFLOW beyond the range,
 * UNDERFLOW for a non-zero value below the smallest normal one */
/* Truncation does not use the rounding modes (WASI has none): the result rounded
 * to nearest, then one step toward zero when its magnitude exceeds the exact one */
static double b_fround(double v, int single, int trunc) {
  if (!single) return v;
  volatile float f = (float)v;
  if (trunc && fabs((double)f) > fabs(v)) f = nextafterf(f, 0.0f);
  return f;
}

static double b_fcheck(double r, int single, int exc_over) {
  if (isinf(r) || isnan(r)) rt_raise(exc_over);
  if (b_pdp11) {
    if (fabs(r) > 0x1.fffffffffffffp+126) rt_raise(exc_over);
    if (r != 0 && fabs(r) < 0x1p-128) rt_raise(RT_B_UNDERFLOW);
    return r;
  }
  if (r != 0 && fabs(r) < (single ? FLT_MIN : DBL_MIN)) rt_raise(RT_B_UNDERFLOW);
  return r;
}

double rt_b_fop(int op, double a, double b, int single, int trunc) {
  volatile double r;
  double e = 0;                     /* the sign of exact - r */
  if (op == '/' && b == 0) rt_raise(RT_X_ZERO_DIVIDE);
  if (op == '-') b = -b;
  switch (op) {
  case '+': case '-': {
    r = a + b;
    double bb = r - a;
    e = (a - (r - bb)) + (b - bb);  /* exact error of the sum (TwoSum) */
    break;
  }
  case '*': r = a * b; e = fma(a, b, -r); break;
  default: r = a / b; e = fma(-r, b, a) * (b < 0 ? -1 : 1); break;
  }
  if (trunc) {
    if (isinf(r) && isfinite(a) && isfinite(b)) r = copysign(DBL_MAX, r);
    else if (r != 0 && e != 0 && (e < 0) != (r < 0)) r = nextafter(r, 0.0);
  }
  r = b_fround(r, single, trunc);
  if (r == 0 && (op == '*' || op == '/') && a != 0 && (op == '/' || b != 0)) rt_raise(RT_B_UNDERFLOW);
  return b_fcheck(r, single, RT_X_OVERFLOW);
}

/* a value converted to an implemented precision: by TO_FLOAT (OVERFLOW) or by an
 * assignment (RANGE, 3.3.5) */
double rt_b_fconv(double v, int single, int trunc, int range) {
  double r = b_fround(v, single, trunc);
  return b_fcheck(r, single, range ? RT_X_RANGE : RT_X_OVERFLOW);
}

/* TO_FLOAT of a fixed point value m * 2**-s, rounded or truncated (3.3.6.1) */
double rt_b_float_of_fix_r(rt_int v, rt_int scale, int single, int trunc) {
  volatile double d = (double)v;
  if (trunc) {
    int over = d >= 0x1p63 ? 1
               : (v < 0 ? (rt_int)d < v : (rt_int)d > v);
    if (over) d = nextafter(d, 0.0);
  }
  return rt_b_fconv(ldexp(d, (int)-scale), single, trunc, 0);
}

/* the decimal digits of v * 2**k, k >= 0: TO_CHAR of a negative scale (3.2.6) */
static rstr b_big_image(rt_int v, rt_int k) {
  b_big a;
  int neg = v < 0;
  unsigned __int128 m = neg ? -(b_wide)v : (b_wide)v;
  big_init(&a, (uint32_t)(m >> 32));
  big_shl(&a, 32);
  b_big lo;
  big_init(&lo, (uint32_t)m);
  /* a += lo */
  if (lo.n) {
    big_room(&a, (a.n > 1 ? a.n : 1) + 1);
    uint64_t c = lo.d[0];
    for (int i = 0; c; i++) {
      if (i >= a.n) a.d[a.n++] = 0;
      c += a.d[i];
      a.d[i] = (uint32_t)c;
      c >>= 32;
    }
  }
  big_shl(&a, k);
  char *d = rt_alloc((size_t)(a.n * 10 + 12));
  int n = 0;
  if (!a.n) d[n++] = '0';
  while (a.n) {                              /* divide by 10 */
    uint64_t r = 0;
    for (int i = a.n - 1; i >= 0; i--) {
      uint64_t t = (r << 32) | a.d[i];
      a.d[i] = (uint32_t)(t / 10);
      r = t % 10;
    }
    while (a.n && !a.d[a.n - 1]) a.n--;
    d[n++] = (char)('0' + r);
  }
  char *o = rt_alloc((size_t)n + 2);
  int j = 0;
  if (neg) o[j++] = '-';
  while (n) o[j++] = d[--n];
  return rt_str_copy(rt_str(o, j));
}

/* E !+s! F and E !-s! F: the exact sum at the larger scale, then the result scale
 * (3.2.4.4); scales further apart than 60 add each operand at the result scale */
rt_int rt_b_addsc(rt_int a, rt_int sa, rt_int b, rt_int sb, rt_int s, int sub, int rounded) {
  rt_int m = sa > sb ? sa : sb;
  if (m - sa > 60 || m - sb > 60) {
    rt_int x = rt_b_rescale(a, sa, s, rounded), y = rt_b_rescale(b, sb, s, rounded);
    return sub ? rt_sub(x, y) : rt_add(x, y);
  }
  b_wide x = (b_wide)a * ((b_wide)1 << (m - sa)), y = (b_wide)b * ((b_wide)1 << (m - sb));
  b_wide r = sub ? x - y : x + y;
  if (s >= m) {
    if (s - m > 60 && r != 0) rt_raise(RT_X_OVERFLOW);
    b_wide q = r * ((b_wide)1 << (s - m));
    if (s - m > 0 && q / ((b_wide)1 << (s - m)) != r) rt_raise(RT_X_OVERFLOW);
    return b_narrow(q);
  }
  return s - m < -120 ? 0 : b_narrow(b_divide(r, b_pow2(m - s), rounded));
}

/* the machine-dependent !op! of floating point values (3.3.4.5): the result and the
 * error of its rounding, two doubles, 128 bits */
static rstr b_fmd_pdp11(int op, double a, double b);
rstr rt_b_fmd(int op, double a, double b) {
  if (b_pdp11) return b_fmd_pdp11(op, a, b);
  double hi, lo;
  switch (op) {
  case '+': hi = a + b; { double bb = hi - a; lo = (a - (hi - bb)) + (b - bb); } break;
  case '-': hi = a - b; { double bb = hi - a; lo = (a - (hi - bb)) + (-b - bb); } break;
  case '*': hi = a * b; lo = fma(a, b, -hi); break;
  default: hi = b == 0 ? 0 : a / b; lo = b == 0 ? 0 : -fma(hi, b, -a) / b; break;
  }
  rstr h = rt_b_bits_of_float(hi), l = rt_b_bits_of_float(lo);
  return rt_str_cat(h, l);
}

/* ---- BLUE: the store of the simulated machine --------------------------------
 * Values have the layouts their representations declare (3.x.3): an array is as
 * big as its elements laid out by its packing, ARRAY_TOO_BIG beyond 2**34 bits
 * (3.8.1); NEW takes the bits of its value from the store, 8 GiB (64 KiB on the
 * PDP-11 of -pdp11, its address space), SPACE_EXHAUSTED when they are used
 * (3.10.2); nothing is reclaimed. Each object NEW makes has the address where its
 * bits begin, in bytes, whole words apart; a pointer is that address (TO_BIT,
 * [PTR (T)]$$), NIL is 0. The host keeps the program's form of each value. */
int RT_B_ARRAY_TOO_BIG;
static uint64_t b_heap_used;          /* 64 bits on wasm32 as natively */
static uint64_t b_store(void) { return b_pdp11 ? (uint64_t)1 << 16 : (uint64_t)1 << 33; }
static uint64_t b_word_bytes(void) { return (uint64_t)B_WORD / 8; }

/* the C storage of n elements (the host's form); bits, the layout's size, or < 0
 * when the elements' size is known only once they are made (rt_b_array_check) */
void *rt_b_array_alloc_bits(rt_int n, size_t esize, rt_int bits) {
  if (n < 0) n = 0;
  if (bits > ((rt_int)1 << 34)) rt_raise(RT_B_ARRAY_TOO_BIG);
  if ((uint64_t)esize * (uint64_t)(n ? n : 1) > SIZE_MAX) rt_raise(RT_X_FREE);   /* the host's */
  return rt_alloc(esize * (size_t)(n ? n : 1));
}

void rt_b_array_check(rt_int bits) {
  if (bits > ((rt_int)1 << 34)) rt_raise(RT_B_ARRAY_TOO_BIG);
}

void *rt_b_array_alloc(rt_int n, size_t esize) { return rt_b_array_alloc_bits(n, esize, -1); }

/* the objects NEW made, by address (ascending) and by host pointer */
typedef struct { uint64_t addr; void *p; } b_obj;
static b_obj *b_objs;
static size_t b_nobjs, b_capobjs;
static b_obj *b_ptrtab;                      /* open addressing on the host pointer */
static size_t b_ptrcap;

static size_t b_ptrhash(void *p, size_t cap) {
  return (size_t)(((uintptr_t)p >> 3) * 0x9E3779B97F4A7C15ull) & (cap - 1);
}

static void b_ptr_put(void *p, uint64_t addr) {
  if (2 * (b_nobjs + 1) > b_ptrcap) {
    size_t cap = b_ptrcap ? 2 * b_ptrcap : 1024;
    b_obj *t = calloc(cap, sizeof *t);
    if (!t) rt_raise(RT_X_FREE);
    for (size_t i = 0; i < b_ptrcap; i++)
      if (b_ptrtab[i].p) {
        size_t h = b_ptrhash(b_ptrtab[i].p, cap);
        while (t[h].p) h = (h + 1) & (cap - 1);
        t[h] = b_ptrtab[i];
      }
    free(b_ptrtab);
    b_ptrtab = t;
    b_ptrcap = cap;
  }
  size_t h = b_ptrhash(p, b_ptrcap);
  while (b_ptrtab[h].p) h = (h + 1) & (b_ptrcap - 1);
  b_ptrtab[h].p = p;
  b_ptrtab[h].addr = addr;
}

/* NEW: bits of the store for a value whose host form takes n bytes; its address */
void *rt_b_new_bits(size_t n, rt_int bits) {
  uint64_t wb = b_word_bytes();
  uint64_t used = ((uint64_t)(bits > 0 ? bits : 0) + 8 * wb - 1) / (8 * wb) * wb;
  if (used == 0) used = wb;
  if (used > b_store() - wb - b_heap_used) rt_raise(RT_X_FREE);     /* SPACE_EXHAUSTED */
  void *p = rt_alloc(n);
  uint64_t addr = wb + b_heap_used;
  b_heap_used += used;
  if (b_nobjs == b_capobjs) {
    b_capobjs = b_capobjs ? 2 * b_capobjs : 1024;
    b_objs = realloc(b_objs, b_capobjs * sizeof *b_objs);
    if (!b_objs) rt_raise(RT_X_FREE);
  }
  b_objs[b_nobjs].addr = addr;
  b_objs[b_nobjs].p = p;
  b_ptr_put(p, addr);
  b_nobjs++;
  return p;
}

/* the rest of the bits of the object NEW just made, once its size is known */
void rt_b_new_more(rt_int bits) {
  uint64_t wb = b_word_bytes();
  uint64_t used = ((uint64_t)(bits > 0 ? bits : 0) + 8 * wb - 1) / (8 * wb) * wb;
  if (used > wb) used -= wb;                    /* rt_b_new_bits took a word */
  else used = 0;
  if (used > b_store() - wb - b_heap_used) rt_raise(RT_X_FREE);
  b_heap_used += used;
}

void *rt_b_new(size_t n) { return rt_b_new_bits(n, (rt_int)n * 8); }

/* the address of an object, and the object at an address (INVALID_REP if none) */
rt_int rt_b_ptr_addr(const void *p) {
  if (!p) return 0;
  size_t h = b_ptrhash((void *)p, b_ptrcap);
  while (b_ptrtab[h].p && b_ptrtab[h].p != p) h = (h + 1) & (b_ptrcap - 1);
  return (rt_int)b_ptrtab[h].addr;
}

void *rt_b_ptr_at(rt_int addr) {
  if (addr == 0) return NULL;
  size_t lo = 0, hi = b_nobjs;
  while (lo < hi) {
    size_t mid = (lo + hi) / 2;
    if (b_objs[mid].addr < (uint64_t)addr) lo = mid + 1;
    else hi = mid;
  }
  if (lo == b_nobjs || b_objs[lo].addr != (uint64_t)addr) rt_raise(RT_B_INVALID_REP);
  return b_objs[lo].p;
}

/* TO_BIT and [T]$$ of records (3.9.3) and arrays (3.8.3): each field or element
 * in its slot of the layout, right-aligned, the filler bits zero (rt_b_layout,
 * b_pack_pos) */
rt_int rt_b_lay_put(rstr *img, rt_int sz, rstr bits, int mode) {
  rt_int end = rt_b_layout(sz, bits.len, mode), slot = b_slot(bits.len, mode);
  if (end > B_MAXLEN) rt_raise(RT_B_INVALID_SIZE);
  if (img->len < end) {
    rstr r = rt_str_new(end);
    memset(r.p, '0', (size_t)end);
    memcpy(r.p, img->p, (size_t)img->len);
    *img = r;
  }
  memcpy(img->p + end - bits.len, bits.p, (size_t)bits.len);
  (void)slot;
  return end;
}

rstr rt_b_lay_take(rstr img, rt_int *sz, rt_int fs, int mode) {
  rt_int end = rt_b_layout(*sz, fs, mode);
  if (end > img.len) rt_raise(RT_B_INVALID_SIZE);
  *sz = end;
  return rt_str_copy(rt_str((const char *)img.p + end - fs, fs));
}

void rt_b_lay_end(rstr img, rt_int sz) {
  if (sz != img.len) rt_raise(RT_B_INVALID_SIZE);
}

rstr rt_b_arr_put(rstr img, rt_int i, rt_int n, rstr bits, int mode) {
  if (i == 0) {
    rt_int size = rt_b_pack_size(n, bits.len, mode);
    if (size > B_MAXLEN) rt_raise(RT_B_INVALID_SIZE);
    img = rt_str_new(size);
    memset(img.p, '0', (size_t)size);
  }
  memcpy(img.p + b_pack_pos(i, bits.len, mode), bits.p, (size_t)bits.len);
  return img;
}

rstr rt_b_arr_take(rstr img, rt_int i, rt_int n, rt_int es, int mode) {
  if (rt_b_pack_size(n, es, mode) != img.len) rt_raise(RT_B_INVALID_SIZE);
  return rt_str_copy(rt_str((const char *)img.p + b_pack_pos(i, es, mode), es));
}

/* N blanks of 7-bit ASCII by a packing: BLANKS (N) of a record-reptype (3.9.3) */
rstr rt_b_blank_bits(rt_int n, int mode) {
  rstr s = rt_str_new(n);
  memset(s.p, ' ', (size_t)n);
  return rt_b_bits_of_chars(s, 7, mode, NULL, 128);
}

/* a fixed point value of n bits, two's complement or unsigned (FIXED_REP, 3.2.3) */
rt_int rt_b_sint_of_bits(rstr b) {
  if (b.len == 0) return 0;
  if (b.len > 64) rt_raise(RT_B_INVALID_SIZE);
  uint64_t u = 0;
  for (rt_int i = 0; i < b.len; i++) u = u * 2 + (b.p[i] == '1');
  if (b.p[0] == '1' && b.len < 64) u |= ~(uint64_t)0 << b.len;
  return (rt_int)u;
}

/* [T]$$ of a fixed point type stored in n bits: two's complement when they are all
 * there and signed, otherwise the bits as an unsigned number */
rt_int rt_b_rep_int_of_bits(rstr b, rt_int n, int unsig) {
  if (!unsig && b.len == n) return rt_b_sint_of_bits(b);
  return rt_b_int_of_bits(b);
}

/* [T]$$ of a member of FIXED the program defines: its n bits (Appendix D.4) */
rstr rt_b_bits_len(rstr b, rt_int n) {
  if (b.len != n) rt_raise(RT_B_INVALID_SIZE);
  return rt_str_copy(b);
}

/* single precision as binary32 (FLOAT (p), p <= 7; 32 bits, 3.3.3) */
rstr rt_b_bits_of_single(double v) {
  float f = (float)v;
  uint32_t u;
  memcpy(&u, &f, sizeof u);
  rstr r = rt_str_new(32);
  for (int i = 31; i >= 0; i--, u >>= 1) r.p[i] = (unsigned char)('0' + (int)(u & 1));
  return r;
}

double rt_b_single_of_bits(rstr b) {
  if (b.len != 32) rt_raise(RT_B_INVALID_SIZE);
  uint32_t u = 0;
  for (int i = 0; i < 32; i++) u = u * 2 + (b.p[i] == '1');
  float f;
  memcpy(&f, &u, sizeof f);
  return f;
}

/* the tag of a T(ANY) record not yet assigned (3.9.1, p.3-134) */
rt_int rt_b_tag(rt_int v) {
  if (v == INT64_MIN) rt_raise(RT_X_INIT);
  return v;
}

/* a type-specifier [T]$$(E): INVALID_TYPE unless the value is one of T (3.1.4.1) */
rt_int rt_b_trange(rt_int v, rt_int lo, rt_int hi) {
  if (v < lo || v > hi) rt_raise(RT_B_INVALID_TYPE);
  return v;
}

/* a fixed point value stored in the n bits of its FIXED_REP (3.2.3): RANGE outside */
rt_int rt_b_rep_fits(rt_int v, rt_int n, int unsig) {
  rt_int lo = unsig ? 0 : -((rt_int)1 << (n > 0 ? n - 1 : 0));
  rt_int hi = unsig ? ((rt_int)1 << n) - 1 : (n > 0 ? ((rt_int)1 << (n - 1)) - 1 : 0);
  if (v < lo || v > hi) rt_raise(RT_X_RANGE);
  return v;
}

double rt_b_tfrange(double v, double lo, double hi) {
  if (v < lo || v > hi) rt_raise(RT_B_INVALID_TYPE);
  return v;
}

rstr rt_b_tlen(rstr s, rt_int len) {
  if (s.len != len) rt_raise(RT_B_INVALID_TYPE);
  return s;
}

/* the number of significant bits of a magnitude */
static int b_bits(unsigned __int128 m) {
  int n = 0;
  while (m) {
    n++;
    m >>= 1;
  }
  return n;
}

/* the order of a * 2**-sa and b * 2**-sb, exactly, whatever the scales (3.2.4.6) */
int rt_b_cmp(rt_int a, rt_int sa, rt_int b, rt_int sb) {
  if ((a < 0) != (b < 0)) return a < 0 ? -1 : 1;
  if (a == 0 || b == 0) return a == b ? 0 : (a == 0 ? (b > 0 ? -1 : 1) : (a > 0 ? 1 : -1));
  int neg = a < 0;
  unsigned __int128 ma = neg ? -(b_wide)a : (b_wide)a, mb = neg ? -(b_wide)b : (b_wide)b;
  rt_int d = sb - sa;              /* compare ma * 2**d with mb */
  int r;
  if (d >= 0) {
    if (b_bits(ma) + d > 126) r = 1;
    else {
      unsigned __int128 x = ma << d;
      r = x > mb ? 1 : x < mb ? -1 : 0;
    }
  } else {
    if (b_bits(mb) - d > 126) r = -1;
    else {
      unsigned __int128 y = mb << -d;
      r = ma > y ? 1 : ma < y ? -1 : 0;
    }
  }
  return neg ? -r : r;
}

/* a value of scale FROM stored in an object of scale TO >= FROM: RANGE if it does not
 * fit (3.2.5) */
rt_int rt_b_conv(rt_int v, rt_int from, rt_int to) {
  if (to <= from) return v;
  if (v == 0) return 0;
  rt_int k = to - from;
  unsigned __int128 m = v < 0 ? -(b_wide)v : (b_wide)v;
  if (b_bits(m) + k > 64) rt_raise(RT_X_RANGE);
  b_wide r = (b_wide)v * ((b_wide)1 << k);
  if (r > INT64_MAX || r < INT64_MIN) rt_raise(RT_X_RANGE);
  return (rt_int)r;
}


/* YELLOW additions */
/* Support for the YELLOW translator (SRI International, 1978): arrays with
 * run-time descriptors, sets over any range, files, monitors and signals,
 * processes with priorities and identities. Only additions: nothing above
 * changes. Page references are to DTIC ADB950587 (the 1978 YELLOW report). */

/* ---- exception names (Appendix C, p.1092, and the text of the Report) ---- */

int Y_X_EOF, Y_X_FILE, Y_X_INSTANCES, Y_X_FIXED, Y_X_ZERO_DENOM, Y_X_NO_RETURN, Y_X_STORAGE;
static int y_deadlock(void);

void y_lang(void) {
  RT_X_RANGE = RT_X_SUBSCRIPT = RT_X_SUBTYPE = RT_X_CASE = RT_X_NEG_EXP =
      rt_exc("OUT_OF_RANGE");                  /* XI: SUCC of the last value */
  RT_X_OVERFLOW = rt_exc("OVERFLOW");
  RT_X_ZERO_DIVIDE = rt_exc("ZERO_DIVIDE");
  RT_X_NIL = RT_X_FREE = rt_exc("INVALID_POINTER");
  RT_X_ASSERT = rt_exc("INVALID_ASSERTION");   /* IX.A.3, p.1038 */
  RT_X_TAG = rt_exc("INVALID_VARIANT");
  RT_X_INIT = rt_exc("UNINITIALIZED");
  RT_X_TERMINATE = rt_exc("PROCESS_TERMINATION"); /* XIV.XI.3, p.1077 */
  RT_X_CREATE = RT_X_TASKING = RT_X_EMPTY_MAILBOX = rt_exc("TASKING_ERROR");
  RT_X_FILE = Y_X_EOF = rt_exc("END_OF_FILE"); /* XII.B, p.1064 */
  RT_X_DEADLOCK = rt_exc("DEADLOCK");
  Y_X_FILE = rt_exc("FILE_ERROR");
  Y_X_INSTANCES = rt_exc("TOO_MANY_PROCESS_INSTANCES"); /* XIV.X.2 */
  Y_X_FIXED = rt_exc("FIXED_NOT_REPRESENTABLE");
  Y_X_ZERO_DENOM = rt_exc("ZERO_DENOMINATOR"); /* FIXED_DIV, p.1062 */
  Y_X_NO_RETURN = rt_exc("NO_RETURN");         /* fell out of a routine, IX.A.6 */
  Y_X_STORAGE = rt_exc("TOO_LITTLE_LOCAL_STORAGE"); /* XIV.X.2 */
  Y_X_ADDRESS = rt_exc("ADDRESS_VIOLATION");   /* "addressing protection violation" */
  rt_deadlock_hook = y_deadlock;
}

/* ---- descriptors ------------------------------------------------------- */

const ydesc y_d_int = {YK_INT, sizeof(rt_int), 0, 0, {0}, {0}, NULL, 0, NULL, NULL};
const ydesc y_d_byte = {YK_BYTE, 1, 0, 0, {0}, {0}, NULL, 0, NULL, NULL};
const ydesc y_d_float = {YK_FLOAT, sizeof(double), 0, 0, {0}, {0}, NULL, 0, NULL, NULL};
const ydesc y_d_ptr = {YK_PTR, sizeof(void *), 0, 0, {0}, {0}, NULL, 0, NULL, NULL};
const ydesc y_d_set = {YK_SET, sizeof(yset), 0, 0, {0}, {0}, NULL, 0, NULL, NULL};
const ydesc y_d_opaque = {YK_OPAQUE, sizeof(void *), 0, 0, {0}, {0}, NULL, 0, NULL, NULL};

void y_desc_array(ydesc *d, int nd, const rt_int *lo, const rt_int *hi, const ydesc *elem) {
  memset(d, 0, sizeof *d);
  d->kind = YK_ARRAY;
  d->size = sizeof(yarr);
  d->deep = 1;
  d->nd = nd;
  for (int k = 0; k < Y_MAXD; k++) {
    d->lo[k] = k < nd ? lo[k] : 1;
    d->hi[k] = k < nd ? hi[k] : 1;
  }
  d->elem = elem;
}

void y_desc_record(ydesc *d, size_t size, int nf, const size_t *off, const ydesc *const *fd) {
  memset(d, 0, sizeof *d);
  d->kind = YK_RECORD;
  d->size = size;
  d->nf = nf;
  d->off = off;
  d->fd = fd;
  for (int i = 0; i < nf; i++)
    if (fd[i]->deep) d->deep = 1;
}

static rt_int y_n(rt_int lo, rt_int hi) { return hi >= lo ? hi - lo + 1 : 0; }

rt_int y_count(yarr a, int nd) {
  rt_int n = 1;
  for (int k = 0; k < nd; k++) n *= y_n(a.lo[k], a.hi[k]);
  return n;
}

/* a fresh value is undefined (VIII.B, Appendix C): its scalars hold a value
 * no representation has, which the checks of compiled code recognize */
const double Y_UNDEF_F_VALUE = __builtin_nan("0x59454c");
static ycell_undef y_undef_cell;
void *const Y_UNDEF_P = &y_undef_cell;

static int is_undef_kind(const ydesc *d) {
  return d->kind == YK_INT || d->kind == YK_BYTE || d->kind == YK_FLOAT || d->kind == YK_FIX ||
         d->kind == YK_PTR;
}

static void undef_one(const ydesc *d, void *v) {
  switch (d->kind) {
  case YK_INT: *(rt_int *)v = Y_UNDEF_I; break;
  case YK_BYTE: *(unsigned char *)v = Y_UNDEF_B; break;
  case YK_FLOAT: memcpy(v, &Y_UNDEF_F_VALUE, sizeof(double)); break;
  case YK_FIX: *(yfix *)v = Y_UNDEF_X; break;
  case YK_PTR: *(void **)v = Y_UNDEF_P; break;
  }
}

void y_init(const ydesc *d, void *v) {
  memset(v, 0, d->size);
  if (d->kind == YK_ARRAY) {
    yarr *a = v;
    for (int k = 0; k < Y_MAXD; k++) {
      a->lo[k] = d->lo[k];
      a->hi[k] = d->hi[k];
    }
    rt_int n = y_count(*a, d->nd);
    a->p = rt_alloc((size_t)n * d->elem->size);
    if (d->elem->deep)
      for (rt_int i = 0; i < n; i++) y_init(d->elem, (char *)a->p + i * d->elem->size);
  } else if (d->kind == YK_RECORD && d->deep) {
    for (int i = 0; i < d->nf; i++)
      if (d->fd[i]->deep) y_init(d->fd[i], (char *)v + d->off[i]);
  }
}

/* y_init for a declared variable or a new dynamic one: undefined scalars */
void y_initu(const ydesc *d, void *v) {
  memset(v, 0, d->size);
  if (d->kind == YK_ARRAY) {
    yarr *a = v;
    for (int k = 0; k < Y_MAXD; k++) {
      a->lo[k] = d->lo[k];
      a->hi[k] = d->hi[k];
    }
    rt_int n = y_count(*a, d->nd);
    size_t esz = d->elem->size;
    a->p = rt_alloc((size_t)n * esz);
    if (d->elem->kind == YK_BYTE)
      memset(a->p, Y_UNDEF_B, (size_t)n);
    else if (is_undef_kind(d->elem))
      for (rt_int i = 0; i < n; i++) undef_one(d->elem, (char *)a->p + i * esz);
    else if (d->elem->deep || d->elem->kind == YK_RECORD)
      for (rt_int i = 0; i < n; i++) y_initu(d->elem, (char *)a->p + i * esz);
  } else if (d->kind == YK_RECORD) {
    for (int i = 0; i < d->nf; i++) y_initu(d->fd[i], (char *)v + d->off[i]);
  } else {
    undef_one(d, v);
  }
}

/* the checks of a read: the value defined, or the trap UNINITIALIZED; a
 * handler that returns resumes with the zero of the representation, now the
 * variable's value */
rt_int *y_chk_i(rt_int *p) {
  if (*p == Y_UNDEF_I) {
    y_trap(RT_X_INIT);
    *p = 0;
  }
  return p;
}
unsigned char *y_chk_b(unsigned char *p) {
  if (*p == Y_UNDEF_B) {
    y_trap(RT_X_INIT);
    *p = 0;
  }
  return p;
}
double *y_chk_f(double *p) {
  if (memcmp(p, &Y_UNDEF_F_VALUE, sizeof(double)) == 0) {
    y_trap(RT_X_INIT);
    *p = 0;
  }
  return p;
}
yfix *y_chk_x(yfix *p) {
  if (*p == Y_UNDEF_X) {
    y_trap(RT_X_INIT);
    *p = 0;
  }
  return p;
}
void **y_chk_p(void **p) {
  if (*p == Y_UNDEF_P) {
    y_trap(RT_X_INIT);
    *p = NULL;
  }
  return p;
}
yset *y_chk_s(yset *p) {
  if (!p->w && !p->e && !p->lo && !p->hi) {
    y_trap(RT_X_INIT);
  }
  return p;
}

void y_copy(const ydesc *d, void *dst, const void *src) {
  if (!d->deep) {
    memmove(dst, src, d->size);
    return;
  }
  if (d->kind == YK_ARRAY) {
    const yarr *s = src;
    yarr t = *s;
    rt_int n = y_count(*s, d->nd);
    size_t esz = d->elem->size;
    t.p = rt_alloc((size_t)n * esz);
    if (s->p) {
      if (d->elem->deep)
        for (rt_int i = 0; i < n; i++)
          y_copy(d->elem, (char *)t.p + i * esz, (const char *)s->p + i * esz);
      else
        memcpy(t.p, s->p, (size_t)n * esz);
    }
    *(yarr *)dst = t;
  } else {
    unsigned char *tmp = rt_alloc(d->size);
    memcpy(tmp, src, d->size);
    for (int i = 0; i < d->nf; i++)
      if (d->fd[i]->deep) y_copy(d->fd[i], tmp + d->off[i], (const char *)src + d->off[i]);
    memcpy(dst, tmp, d->size);
    free(tmp);
  }
}

void y_store(const ydesc *d, void *dst, const void *src) {
  if (d->kind == YK_ARRAY) {
    yarr *t = dst;
    const yarr *s = src;
    if (t->p)
      for (int k = 0; k < d->nd; k++)
        if (y_n(t->lo[k], t->hi[k]) != y_n(s->lo[k], s->hi[k]))
          rt_raise_msg(RT_X_RANGE, "array lengths differ");
    yarr keep = *t;
    y_copy(d, dst, src);
    if (keep.p)
      for (int k = 0; k < Y_MAXD; k++) {
        t->lo[k] = keep.lo[k];
        t->hi[k] = keep.hi[k];
      }
  } else if (d->kind == YK_RECORD && d->deep) {
    unsigned char *tmp = rt_alloc(d->size);
    memcpy(tmp, dst, d->size);
    for (int i = 0; i < d->nf; i++)
      y_store(d->fd[i], tmp + d->off[i], (const char *)src + d->off[i]);
    memcpy(dst, tmp, d->size);
    free(tmp);
  } else {
    memmove(dst, src, d->size);
  }
}

int y_eq(const ydesc *d, const void *a, const void *b) {
  switch (d->kind) {
  case YK_BYTE:
    return *(const unsigned char *)a == *(const unsigned char *)b;
  case YK_FLOAT:
    return *(const double *)a == *(const double *)b;
  case YK_SET:
    return y_set_eq(*(const yset *)a, *(const yset *)b);
  case YK_ARRAY: {
    const yarr *x = a, *y = b;
    for (int k = 0; k < d->nd; k++)
      if (y_n(x->lo[k], x->hi[k]) != y_n(y->lo[k], y->hi[k])) return 0;
    rt_int n = y_count(*x, d->nd);
    size_t esz = d->elem->size;
    for (rt_int i = 0; i < n; i++)
      if (!y_eq(d->elem, (const char *)x->p + i * esz, (const char *)y->p + i * esz)) return 0;
    return 1;
  }
  case YK_RECORD:
    for (int i = 0; i < d->nf; i++)
      if (!y_eq(d->fd[i], (const char *)a + d->off[i], (const char *)b + d->off[i])) return 0;
    return 1;
  default:
    return memcmp(a, b, d->size) == 0;
  }
}

yarr y_str(const char *s, rt_int n) {
  yarr a;
  for (int k = 0; k < Y_MAXD; k++) a.lo[k] = a.hi[k] = 1;
  a.hi[0] = n;
  a.p = (void *)s;
  return a;
}

yarr y_fill(const ydesc *d, const void *v) {
  yarr a;
  y_init(d, &a);
  rt_int n = y_count(a, d->nd);
  size_t esz = d->elem->size;
  for (rt_int i = 0; i < n; i++) {
    if (d->elem->deep) y_copy(d->elem, (char *)a.p + i * esz, v);
    else memcpy((char *)a.p + i * esz, v, esz);
  }
  return a;
}

void *y_elem_at(yarr a, const ydesc *d, rt_int k) { return (char *)a.p + k * d->elem->size; }

static rt_int y_ix(yarr a, int k, rt_int i) {
  if (i < a.lo[k] || i > a.hi[k]) {
    if (a.hi[k] < a.lo[k]) rt_raise(RT_X_SUBSCRIPT);
    y_trap(RT_X_SUBSCRIPT);                /* resumed: the nearest bound */
    i = i < a.lo[k] ? a.lo[k] : a.hi[k];
  }
  return i - a.lo[k];
}

rt_int y_ix1(yarr a, rt_int i) { return y_ix(a, 0, i); }
rt_int y_ix2(yarr a, rt_int i, rt_int j) {
  return y_ix(a, 0, i) * y_n(a.lo[1], a.hi[1]) + y_ix(a, 1, j);
}
rt_int y_ix3(yarr a, rt_int i, rt_int j, rt_int k) {
  return y_ix2(a, i, j) * y_n(a.lo[2], a.hi[2]) + y_ix(a, 2, k);
}
rt_int y_ix4(yarr a, rt_int i, rt_int j, rt_int k, rt_int l) {
  return y_ix3(a, i, j, k) * y_n(a.lo[3], a.hi[3]) + y_ix(a, 3, l);
}
rt_int y_ix5(yarr a, rt_int i, rt_int j, rt_int k, rt_int l, rt_int m) {
  return y_ix4(a, i, j, k, l) * y_n(a.lo[4], a.hi[4]) + y_ix(a, 4, m);
}
rt_int y_ix6(yarr a, rt_int i, rt_int j, rt_int k, rt_int l, rt_int m, rt_int n) {
  return y_ix5(a, i, j, k, l, m) * y_n(a.lo[5], a.hi[5]) + y_ix(a, 5, n);
}
rt_int y_ix7(yarr a, rt_int i, rt_int j, rt_int k, rt_int l, rt_int m, rt_int n, rt_int o) {
  return y_ix6(a, i, j, k, l, m, n) * y_n(a.lo[6], a.hi[6]) + y_ix(a, 6, o);
}
rt_int y_ix8(yarr a, rt_int i, rt_int j, rt_int k, rt_int l, rt_int m, rt_int n, rt_int o, rt_int q) {
  return y_ix7(a, i, j, k, l, m, n, o) * y_n(a.lo[7], a.hi[7]) + y_ix(a, 7, q);
}

rt_int y_low(yarr a, rt_int dim) {
  if (dim < 1 || dim > Y_MAXD) rt_raise(RT_X_RANGE);
  return a.lo[dim - 1];
}

rt_int y_high(yarr a, rt_int dim) {
  if (dim < 1 || dim > Y_MAXD) rt_raise(RT_X_RANGE);
  return a.hi[dim - 1];
}

/* MOVE (XI, p.1061): one source range i .. j into the object from index at */
void y_move(yarr *dst, rt_int at, yarr src, rt_int i, rt_int j, const ydesc *elem) {
  if (j < i) return;
  rt_int n = j - i + 1;
  y_ix(src, 0, i);
  y_ix(src, 0, j);
  y_ix(*dst, 0, at);
  y_ix(*dst, 0, at + n - 1);
  size_t esz = elem->size;
  char *t = (char *)dst->p + (at - dst->lo[0]) * esz;
  const char *s = (const char *)src.p + (i - src.lo[0]) * esz;
  if (elem->deep) {
    unsigned char *tmp = rt_alloc((size_t)n * esz);
    for (rt_int k = 0; k < n; k++) y_copy(elem, tmp + k * esz, s + k * esz);
    memcpy(t, tmp, (size_t)n * esz);
    free(tmp);
  } else {
    memmove(t, s, (size_t)n * esz);
  }
}

/* a fresh array with the bounds of a and components of elem: a temporary
 * for a length-unresolved formal whose components another representation */
yarr y_like(yarr a, int nd, const ydesc *elem) {
  yarr t = a;
  rt_int n = y_count(a, nd);
  t.p = rt_alloc((size_t)n * elem->size);
  for (rt_int i = 0; i < n; i++) y_initu(elem, (char *)t.p + i * elem->size);
  return t;
}

/* ---- sets ------------------------------------------------------------ */
/* A set over a base range of at most Y_SET_DENSE values is a bit map; over a
 * larger range (SET (INTEGER64), L-33 puts no limit on the base) it is a
 * sorted list of members, or with neg the list of the values left out, so
 * that the complement of a small set stays small. */

#define Y_SET_DENSE 65536

static int set_sparse(rt_int lo, rt_int hi) {
  return hi >= lo && (uint64_t)hi - (uint64_t)lo >= (uint64_t)Y_SET_DENSE;
}

static size_t set_words(rt_int lo, rt_int hi) { return (size_t)((y_n(lo, hi) + 63) / 64); }

yset y_set_new(rt_int lo, rt_int hi) {
  yset s;
  memset(&s, 0, sizeof s);
  s.lo = lo;
  s.hi = hi;
  if (!set_sparse(lo, hi)) s.w = rt_alloc(set_words(lo, hi) * sizeof(uint64_t));
  return s;
}

static yset set_clone(yset s) {
  yset r = y_set_new(s.lo, s.hi);
  if (set_sparse(s.lo, s.hi)) {
    r.n = s.n;
    r.neg = s.neg;
    r.e = rt_alloc((size_t)(s.n ? s.n : 1) * sizeof(rt_int));
    if (s.n) memcpy(r.e, s.e, (size_t)s.n * sizeof(rt_int));
  } else if (s.w) {
    memcpy(r.w, s.w, set_words(s.lo, s.hi) * sizeof(uint64_t));
  }
  return r;
}

/* the position of e in the sorted list, or where it would go */
static rt_int set_find(const yset *s, rt_int e, int *found) {
  rt_int a = 0, b = s->n;
  while (a < b) {
    rt_int m = a + (b - a) / 2;
    if (s->e[m] < e) a = m + 1;
    else b = m;
  }
  *found = a < s->n && s->e[a] == e;
  return a;
}

int y_set_in(rt_int e, yset s) {
  if (e < s.lo || e > s.hi) return 0;
  if (set_sparse(s.lo, s.hi)) {
    int f;
    set_find(&s, e, &f);
    return f != s.neg;
  }
  if (!s.w) return 0;
  rt_int b = e - s.lo;
  return (int)((s.w[b >> 6] >> (b & 63)) & 1);
}

yset y_set_add(yset s, rt_int e) {
  if (e < s.lo || e > s.hi) rt_raise(RT_X_RANGE);
  yset r = set_clone(s);
  if (set_sparse(s.lo, s.hi)) {
    int f;
    rt_int at = set_find(&r, e, &f);
    if (!r.neg && !f) {
      rt_int *ne = rt_alloc((size_t)(r.n + 1) * sizeof(rt_int));
      memcpy(ne, r.e, (size_t)at * sizeof(rt_int));
      ne[at] = e;
      memcpy(ne + at + 1, r.e + at, (size_t)(r.n - at) * sizeof(rt_int));
      r.e = ne;
      r.n++;
    } else if (r.neg && f) {
      memmove(r.e + at, r.e + at + 1, (size_t)(r.n - at - 1) * sizeof(rt_int));
      r.n--;
    }
    return r;
  }
  rt_int b = e - s.lo;
  r.w[b >> 6] |= 1ULL << (b & 63);
  return r;
}

/* two sorted lists merged by op: 0 a or b, 1 a and not b, 2 a and b, 3 a xor b */
static yset list_op(yset a, const rt_int *x, rt_int nx, const rt_int *y, rt_int ny, int op) {
  yset r = y_set_new(a.lo, a.hi);
  r.e = rt_alloc((size_t)(nx + ny + 1) * sizeof(rt_int));
  rt_int i = 0, j = 0;
  while (i < nx || j < ny) {
    int inx, iny;
    rt_int v;
    if (j >= ny || (i < nx && x[i] < y[j])) { v = x[i++]; inx = 1; iny = 0; }
    else if (i >= nx || y[j] < x[i]) { v = y[j++]; inx = 0; iny = 1; }
    else { v = x[i++]; j++; inx = iny = 1; }
    int z = op == 0 ? (inx || iny) : op == 1 ? (inx && !iny) : op == 2 ? (inx && iny) : (inx != iny);
    if (z) r.e[r.n++] = v;
  }
  return r;
}

/* both operands have the same type, so normally the same base range; an
 * operand that was never set has no storage and counts as empty */
static yset set_op(yset a, yset b, int op) {
  if (!a.w && !a.e && !a.neg && (b.w || b.e || b.neg)) a = y_set_new(b.lo, b.hi);
  if (set_sparse(a.lo, a.hi)) {
    /* a set is its list, or the complement of it with neg (De Morgan) */
    const rt_int *x = a.e, *y = b.e;
    rt_int nx = a.n, ny = b.n;
    int na = a.neg, nb = b.neg;
    yset r;
    switch (op) {
    case 0:   /* union */
      if (!na && !nb) r = list_op(a, x, nx, y, ny, 0);
      else if (na && nb) { r = list_op(a, x, nx, y, ny, 2); r.neg = 1; }
      else if (na) { r = list_op(a, x, nx, y, ny, 1); r.neg = 1; }
      else { r = list_op(a, y, ny, x, nx, 1); r.neg = 1; }
      break;
    case 2:   /* intersection */
      if (!na && !nb) r = list_op(a, x, nx, y, ny, 2);
      else if (na && nb) { r = list_op(a, x, nx, y, ny, 0); r.neg = 1; }
      else if (na) r = list_op(a, y, ny, x, nx, 1);
      else r = list_op(a, x, nx, y, ny, 1);
      break;
    case 1: { /* difference: a and the complement of b */
      yset nbs = b;
      nbs.neg = !b.neg;
      return set_op(a, nbs, 2);
    }
    default:  /* symmetric difference */
      r = list_op(a, x, nx, y, ny, 3);
      r.neg = na != nb;
      break;
    }
    return r;
  }
  yset r = y_set_new(a.lo, a.hi);
  for (rt_int e = a.lo; e <= a.hi; e++) {
    int x = y_set_in(e, a), y = y_set_in(e, b), z;
    switch (op) {
    case 0: z = x || y; break;
    case 1: z = x && !y; break;
    case 2: z = x && y; break;
    default: z = x != y; break;
    }
    if (z) {
      rt_int k = e - r.lo;
      r.w[k >> 6] |= 1ULL << (k & 63);
    }
  }
  return r;
}

yset y_set_union(yset a, yset b) { return set_op(a, b, 0); }
yset y_set_diff(yset a, yset b) { return set_op(a, b, 1); }
yset y_set_inter(yset a, yset b) { return set_op(a, b, 2); }
yset y_set_xor(yset a, yset b) { return set_op(a, b, 3); }

yset y_set_compl(yset a) {
  if (set_sparse(a.lo, a.hi)) {
    yset r = set_clone(a);
    r.neg = !a.neg;
    return r;
  }
  yset r = y_set_new(a.lo, a.hi);
  for (rt_int e = a.lo; e <= a.hi; e++)
    if (!y_set_in(e, a)) {
      rt_int k = e - r.lo;
      r.w[k >> 6] |= 1ULL << (k & 63);
    }
  return r;
}

int y_set_eq(yset a, yset b) {
  if (set_sparse(a.lo, a.hi) || set_sparse(b.lo, b.hi)) {
    if (a.neg == b.neg) {
      if (a.n != b.n) return 0;
      for (rt_int i = 0; i < a.n; i++)
        if (a.e[i] != b.e[i]) return 0;
      return 1;
    }
    /* a list and the complement of another: equal only when the two lists
     * are disjoint and cover the whole base range */
    yset x = list_op(a, a.e, a.n, b.e, b.n, 2);
    return x.n == 0 && (uint64_t)(a.n + b.n) == (uint64_t)a.hi - (uint64_t)a.lo + 1;
  }
  rt_int lo = a.lo < b.lo ? a.lo : b.lo, hi = a.hi > b.hi ? a.hi : b.hi;
  if (!a.w) { lo = b.lo; hi = b.hi; }
  if (!b.w) { lo = a.lo; hi = a.hi; }
  for (rt_int e = lo; e <= hi; e++)
    if (y_set_in(e, a) != y_set_in(e, b)) return 0;
  return 1;
}

/* ---- files ------------------------------------------------------------- */

struct yfile {
  FILE *f;
  int mode;
};

void y_open(yfile **fp, yarr name, rt_int mode) {
  rt_int n = y_n(name.lo[0], name.hi[0]);
  char *c = rt_alloc((size_t)n + 1);
  memcpy(c, name.p, (size_t)n);
  yfile *y = rt_alloc(sizeof *y);
  y->mode = (int)mode;
  /* the implementation's names for the two streams a program is given */
  if (strcmp(c, "INPUT") == 0 && mode == 0) y->f = stdin;
  else if (strcmp(c, "OUTPUT") == 0 && mode != 0) y->f = stdout;
  else if (strcmp(c, "ERROR") == 0 && mode != 0) y->f = stderr;
  else y->f = fopen(c, mode == 0 ? "rb" : mode == 1 ? "wb" : "ab");
  if (!y->f) rt_raise_msg(Y_X_FILE, c);
  *fp = y;
}

void y_close(yfile **fp) {
  yfile *y = *fp;
  if (!y) rt_raise_msg(Y_X_FILE, "CLOSE of a file that is not open");
  if (y->f == stdout) fflush(stdout);
  else if (y->f != stdin) fclose(y->f);
  *fp = NULL;
}

static yfile *y_must(yfile **fp, int reading) {
  yfile *y = *fp;
  if (!y) rt_raise_msg(Y_X_FILE, "file not open");
  if ((y->mode == 0) != reading) rt_raise_msg(Y_X_FILE, reading ? "GET on a file opened for WRITE" : "PUT on a file opened for READ");
  return y;
}

void y_get(yfile **fp, void *dst, size_t n) {
  yfile *y = y_must(fp, 1);
  if (fread(dst, 1, n, y->f) != n) rt_raise(Y_X_EOF);
}

void y_put(yfile **fp, const void *src, size_t n) {
  yfile *y = y_must(fp, 0);
  fwrite(src, 1, n, y->f);
}

/* a value as its descriptor describes it: arrays and records component by
 * component, a set as its base range and members, the rest as stored */
static void put_raw(yfile *y, const void *v, size_t n) { fwrite(v, 1, n, y->f); }

static void get_raw(yfile *y, void *v, size_t n) {
  if (fread(v, 1, n, y->f) != n) rt_raise(Y_X_EOF);
}

static void put_value(yfile *y, const ydesc *d, const void *v) {
  if (d->kind == YK_ARRAY) {
    const yarr *a = v;
    rt_int n = y_count(*a, d->nd);
    for (rt_int i = 0; i < n; i++) put_value(y, d->elem, (const char *)a->p + i * d->elem->size);
  } else if (d->kind == YK_RECORD) {
    for (int i = 0; i < d->nf; i++) put_value(y, d->fd[i], (const char *)v + d->off[i]);
  } else if (d->kind == YK_SET) {
    const yset *s = v;
    rt_int head[3] = {s->lo, s->hi, 0}, m = 0;
    if (set_sparse(s->lo, s->hi)) {
      head[2] = s->neg;
      put_raw(y, head, sizeof head);
      put_raw(y, &s->n, sizeof s->n);
      put_raw(y, s->e, (size_t)s->n * sizeof(rt_int));
    } else {
      put_raw(y, head, sizeof head);
      for (rt_int e = s->lo; e <= s->hi; e++) m += y_set_in(e, *s);
      put_raw(y, &m, sizeof m);
      for (rt_int e = s->lo; e <= s->hi; e++)
        if (y_set_in(e, *s)) put_raw(y, &e, sizeof e);
    }
  } else {
    put_raw(y, v, d->size);
  }
}

static void get_value(yfile *y, const ydesc *d, void *v) {
  if (d->kind == YK_ARRAY) {
    yarr *a = v;
    rt_int n = y_count(*a, d->nd);
    for (rt_int i = 0; i < n; i++) get_value(y, d->elem, (char *)a->p + i * d->elem->size);
  } else if (d->kind == YK_RECORD) {
    for (int i = 0; i < d->nf; i++) get_value(y, d->fd[i], (char *)v + d->off[i]);
  } else if (d->kind == YK_SET) {
    rt_int head[3], m, e;
    get_raw(y, head, sizeof head);
    get_raw(y, &m, sizeof m);
    yset s = y_set_new(head[0], head[1]);
    for (rt_int i = 0; i < m; i++) {
      get_raw(y, &e, sizeof e);
      s = y_set_add(s, e);
    }
    if (head[2]) s = y_set_compl(s);
    *(yset *)v = s;
  } else {
    get_raw(y, v, d->size);
  }
}

void y_put_value(yfile **fp, const ydesc *d, const void *v) { put_value(y_must(fp, 0), d, v); }
void y_get_value(yfile **fp, const ydesc *d, void *v) { get_value(y_must(fp, 1), d, v); }

int y_check_eof(yfile **fp) {
  yfile *y = y_must(fp, 1);
  int c = getc(y->f);
  if (c == EOF) return 1;
  ungetc(c, y->f);
  return 0;
}

/* ---- monitors and signals (X.E.3-4, p.1057) ------------------------------- */

void y_mon_init(ymon *m) { memset(m, 0, sizeof *m); }

/* hand the monitor on: senders waiting to come back go first (the sender of
 * a signal is only delayed, p.1057), then processes waiting to enter */
static void mon_release(ymon *m) {
  rt_waiter *w = m->urgent ? m->urgent : m->q;
  if (w) {
    m->owner = w->t;
    m->depth = (int)(intptr_t)w->data;
    satisfy(w);
  } else {
    m->owner = NULL;
    m->depth = 0;
  }
}

void y_mon_enter(ymon *m) {
  if (m->owner == cur) {
    m->depth++;                       /* a monitor procedure calls another one */
    return;
  }
  if (!m->owner) {
    m->owner = cur;
    m->depth = 1;
    return;
  }
  add_waiter(&m->q, 0, (void *)(intptr_t)1);
  block();
}

void y_mon_leave(ymon *m) {
  if (m->owner != cur) return;
  if (--m->depth > 0) return;
  mon_release(m);
  maybe_preempt();
}

void y_mon_drop(ymon *m) {
  if (m->owner != cur) return;
  m->depth = 1;
  y_mon_leave(m);
}

void y_sig_init(ysig *s, ymon *m) {
  s->mon = m;
  s->q = NULL;
}

void y_wait(ysig *s, rt_int rank) {
  if (rank < 1) rt_raise_msg(RT_X_RANGE, "WAIT with a delay rank below 1");
  ymon *m = s->mon;
  int depth = m && m->owner == cur ? m->depth : 0;
  rt_waiter *w = add_waiter(&s->q, (int)rank, (void *)(intptr_t)depth);
  /* keep the queue ordered by rank, first come first served within a rank */
  for (rt_waiter **p = &s->q; *p; p = &(*p)->next)
    if (*p == w) {
      *p = w->next;
      break;
    }
  rt_waiter **p = &s->q;
  while (*p && (*p)->alt <= w->alt) p = &(*p)->next;
  w->next = *p;
  *p = w;
  if (depth) mon_release(m);
  block();
}

void y_send(ysig *s) {
  rt_waiter *w = s->q;
  if (!w) return;                     /* nobody waits: no effect */
  ymon *m = s->mon;
  int tdepth = (int)(intptr_t)w->data;
  if (m && m->owner == cur && tdepth) {
    /* the receiver goes on inside the monitor, the sender waits to return */
    add_waiter(&m->urgent, 0, (void *)(intptr_t)m->depth);
    m->owner = w->t;
    m->depth = tdepth;
    satisfy(w);
    block();
  } else {
    if (m && tdepth) {
      m->owner = w->t;
      m->depth = tdepth;
    }
    satisfy(w);
    maybe_preempt();
  }
}

int y_awaited(ysig *s) { return s->q != NULL; }

/* ---- processes (X.E, XIV.X.2, XIV.XI.3) ------------------------------------ */

/* a process starts with the simulation and the storage limit it gets */
typedef struct {
  void (*fn)(void *);
  void *frame;
  int sim;
  rt_int size;
} ystart;

__thread int y_ticks, y_sim_depth;
__thread rt_int y_use, y_limit;

static void y_task_start(void *arg) {
  ystart *s = arg;
  y_sim_depth = s->sim;
  y_limit = s->size;
  y_use = 0;
  y_ticks = 0;
  s->fn(s->frame);
}

void y_create(rt_taskdecl *d, rt_int limit, int has_prio, rt_int prio, rt_int size,
              void (*fn)(void *), void *frame) {
  if (limit > 0 && d->live >= limit) {
    y_trap(Y_X_INSTANCES);
    return;                                /* resumed: no new instance */
  }
  rt_act *a = rt_alloc(sizeof *a);
  ystart *s = rt_alloc(sizeof *s);
  s->fn = fn;
  s->frame = frame;
  s->sim = y_sim_depth;          /* processes of a simulation are quasi-parallel */
  s->size = size;
  if (has_prio) {
    if (prio < 0 || prio > 255) rt_raise(RT_X_RANGE);
    a->prio = prio;
    a->has_prio = 1;
  }
  rt_create(a, d, y_task_start, s);
}

/* a time slice is over (X.E.1): outside SIMULATED_TIME the processes of
 * the running one's priority take their turn; inside, a process runs until
 * it waits. The clock stays virtual: it moves when every process waits */
void y_slice(void) {
  y_ticks = 0;
  if (y_sim_depth) return;
  make_ready(cur);
  reschedule();
  check_terminate();
}

void y_storage_trap(void) { y_trap(Y_X_STORAGE); }

/* every process waits: the trap Deadlock (Appendix C) is raised in the main
 * process, which may handle it, instead of ending the program */
static int y_deadlock(void) {
  if (main_task.state != T_BLOCKED) return 0;
  drop_waiters(&main_task);
  drop_armed(&main_task);
  main_task.term_pending = 1;
  main_task.term_exc = RT_X_DEADLOCK;
  make_ready(&main_task);
  return 1;
}

rt_int y_self(void) { return cur->id; }

static rt_task *task_by_id(rt_int id) {
  for (rt_task *t = all_tasks; t; t = t->all_next)
    if (t->id == id) return t;
  return NULL;
}

void y_change_priority(rt_int id, rt_int p) {
  rt_task *t = task_by_id(id);
  if (!t || t->state == T_DONE) return;
  if (p < 0 || p > 255) rt_raise(RT_X_RANGE);
  t->prio = p;
  maybe_preempt();
}

void y_raise_termination(rt_int id) {
  rt_task *t = task_by_id(id);
  if (!t || t->state == T_DONE) return;
  rt_act a;
  a.t = t;
  a.active = 1;
  a.waiters = NULL;
  rt_exterminate(&a);
}

/* ---- dynamic variables --------------------------------------------------- */

typedef struct {
  void *body;
  const struct ylay *L;                        /* its layout in the store, when known */
  const ydesc *d;
  struct yview *view;                          /* seen through a view of the store */
} ycell;
static void *cell_view(ycell *c);

void *y_new(size_t n) {
  ycell *c = rt_alloc(sizeof *c);
  c->body = rt_alloc(n);
  return c;
}

void *y_deref(void *p) {
  ycell *c = p;
  if (!c || !c->body) {
    y_trap(RT_X_NIL);
    rt_raise(RT_X_NIL);                    /* no resuming: nothing to follow */
  }
  if (c->view) return cell_view(c);
  return c->body;
}

void y_free_pointer(void **p) {
  ycell *c = *p;
  if (!c) return;
  if (!c->body) rt_raise(RT_X_NIL);
  free(c->body);
  c->body = NULL;
  *p = NULL;
}

/* a pointer to storage that is not a dynamic variable: one cell for each
 * address, so that two such pointers to one place are equal */
void *y_cell(void *body) {
  static struct {
    void *body;
    ycell *c;
  } *cells;
  static size_t ncells, ccells;
  for (size_t i = 0; i < ncells; i++)
    if (cells[i].body == body) return cells[i].c;
  if (ncells == ccells) {
    ccells = ccells ? ccells * 2 : 64;
    cells = realloc(cells, ccells * sizeof *cells);
    if (!cells) {
      fprintf(stderr, "*** out of memory\n");
      exit(4);
    }
  }
  ycell *c = rt_alloc(sizeof *c);
  c->body = body;
  cells[ncells].body = body;
  cells[ncells].c = c;
  ncells++;
  return c;
}

/* ---- trap handlers (XIV.X.3) ----------------------------------------------- */

static struct {
  int id;
  void (*h)(void);
} traps[64];
static int ntraps;

void y_trap_install(int id, void (*handler)(void)) {
  for (int i = 0; i < ntraps; i++)
    if (traps[i].id == id) {
      traps[i].h = handler;
      return;
    }
  if (ntraps < 64) {
    traps[ntraps].id = id;
    traps[ntraps].h = handler;
    ntraps++;
  }
}

/* a trap: the program's handler for it, or the standard one, which
 * propagates the exception */
int y_trap(int id) {
  for (int i = 0; i < ntraps; i++)
    if (traps[i].id == id) {
      traps[i].h();
      return 1;
    }
  rt_raise(id);
}

rt_int y_range(rt_int v, rt_int lo, rt_int hi) {
  if ((v < lo || v > hi) && v != Y_UNDEF_I) {
    y_trap(RT_X_RANGE);
    return v < lo ? lo : hi;
  }
  return v;
}

double y_frange(double v, double lo, double hi) {
  if (v < lo || v > hi) {
    y_trap(RT_X_RANGE);
    return v < lo ? lo : hi;
  }
  return v;
}

rt_int y_add(rt_int a, rt_int b) {
  rt_int r;
  if (__builtin_add_overflow(a, b, &r)) y_trap(RT_X_OVERFLOW);
  return r;
}

rt_int y_sub(rt_int a, rt_int b) {
  rt_int r;
  if (__builtin_sub_overflow(a, b, &r)) y_trap(RT_X_OVERFLOW);
  return r;
}

rt_int y_mul(rt_int a, rt_int b) {
  rt_int r;
  if (__builtin_mul_overflow(a, b, &r)) y_trap(RT_X_OVERFLOW);
  return r;
}

rt_int y_neg(rt_int a) { return y_sub(0, a); }

/* DIV is the floor of the quotient, MOD what is left (VIII.C) */
rt_int y_div(rt_int a, rt_int b) {
  if (b == 0) {
    y_trap(RT_X_ZERO_DIVIDE);
    return 0;
  }
  if (a == INT64_MIN && b == -1) {
    y_trap(RT_X_OVERFLOW);
    return a;
  }
  rt_int q = a / b;
  if ((a % b != 0) && ((a < 0) != (b < 0))) q -= 1;
  return q;
}

rt_int y_mod(rt_int a, rt_int b) {
  if (b == 0) {
    y_trap(RT_X_ZERO_DIVIDE);
    return 0;
  }
  if (b == -1) return 0;
  rt_int r = a % b;
  if (r != 0 && ((r < 0) != (b < 0))) r += b;
  return r;
}

double y_fdiv(double a, double b) {
  if (b == 0) {
    y_trap(RT_X_ZERO_DIVIDE);
    return 0;
  }
  return a / b;
}

/* ---- suppressed traps (XIV.XIII.2) ----------------------------------------- */

static rt_int ixw(yarr a, int k, rt_int i) {
  rt_int n = y_n(a.lo[k], a.hi[k]);
  if (n == 0) rt_raise(RT_X_SUBSCRIPT);    /* no component to wrap round */
  rt_int d = (i - a.lo[k]) % n;
  return d < 0 ? d + n : d;
}
rt_int y_ixw1(yarr a, rt_int i) { return ixw(a, 0, i); }
rt_int y_ixw2(yarr a, rt_int i, rt_int j) { return ixw(a, 0, i) * y_n(a.lo[1], a.hi[1]) + ixw(a, 1, j); }
rt_int y_ixw3(yarr a, rt_int i, rt_int j, rt_int k) {
  return y_ixw2(a, i, j) * y_n(a.lo[2], a.hi[2]) + ixw(a, 2, k);
}
rt_int y_ixw4(yarr a, rt_int i, rt_int j, rt_int k, rt_int l) {
  return y_ixw3(a, i, j, k) * y_n(a.lo[3], a.hi[3]) + ixw(a, 3, l);
}
rt_int y_ixw5(yarr a, rt_int i, rt_int j, rt_int k, rt_int l, rt_int m) {
  return y_ixw4(a, i, j, k, l) * y_n(a.lo[4], a.hi[4]) + ixw(a, 4, m);
}
rt_int y_ixw6(yarr a, rt_int i, rt_int j, rt_int k, rt_int l, rt_int m, rt_int n) {
  return y_ixw5(a, i, j, k, l, m) * y_n(a.lo[5], a.hi[5]) + ixw(a, 5, n);
}
rt_int y_ixw7(yarr a, rt_int i, rt_int j, rt_int k, rt_int l, rt_int m, rt_int n, rt_int o) {
  return y_ixw6(a, i, j, k, l, m, n) * y_n(a.lo[6], a.hi[6]) + ixw(a, 6, o);
}
rt_int y_ixw8(yarr a, rt_int i, rt_int j, rt_int k, rt_int l, rt_int m, rt_int n, rt_int o, rt_int q) {
  return y_ixw7(a, i, j, k, l, m, n, o) * y_n(a.lo[7], a.hi[7]) + ixw(a, 7, q);
}

rt_int y_divw(rt_int a, rt_int b) {
  if (b == 0) return 0;
  if (a == INT64_MIN && b == -1) return a;
  rt_int q = a / b;
  if ((a % b != 0) && ((a < 0) != (b < 0))) q -= 1;
  return q;
}

rt_int y_modw(rt_int a, rt_int b) {
  if (b == 0 || b == -1) return 0;
  rt_int r = a % b;
  if (r != 0 && ((r < 0) != (b < 0))) r += b;
  return r;
}

double y_fdivw(double a, double b) { return a / b; }

/* ---- the simulated machine ------------------------------------------------ */
/* Words of 64 bits addressed by word. The store holds Y_STORE words, the top
 * of it the PDP-11 I/O page. Any variable not declared AT an address gets an
 * address above the store, a window onto it, when ADDR first asks for it.
 * The store shows values in the layout their representations declare
 * (XIV.VI.1): the translator gives each layout as a string (below), which
 * says how many bits a scalar takes and where the components of arrays and
 * records start. A window shows its variable in that layout, word by word,
 * and a word written into a window is read back into the variable. A
 * variable AT an address whose layout is not one plain word, and what a
 * pointer made by MAKE_POINTER designates when no variable of its type
 * starts there, is held in a view: a value in the program's form that is
 * synchronized with the store when it is used and after each statement. */

int Y_X_ADDRESS;
static rt_int y_mem_store[Y_STORE];

/* A layout: a scalar is <k><packed>,<align>,<bits> with k one of i (signed,
 * held as rt_int), u (unsigned, rt_int), c (unsigned char), f (double), x
 * (FIXED), p (pointer: the address of what it designates, 0 for NIL), o (no
 * bits the program can see: files, signals, semaphores), and s<packed>,
 * <align>,<bits>,<lo>,<hi> a set over lo..hi; an array is a<packed>,<align>,
 * <dimensions>(<component>), with A for an array whose descriptor is its
 * component's (a length-unresolved formal); a record is r<packed>,<align>,
 * <components>,<case selector>( <at>,<variant>,<labels>[,<label>...]:
 * <component>; ... ). packed is that of the context, align the value's own. */
typedef struct ylay ylay;
struct ylay {
  char k;
  int packed;
  rt_int align, bits, lo, hi;
  int nd;
  ylay *elem;
  int nf, sel;
  ylay **fl;
  rt_int *at, *nlab, **lab;
  int *variant;
  const char *src;
  size_t len;
};

static rt_int lay_num(const char **s) {
  char *e;
  long long v = strtoll(*s, &e, 10);
  *s = e;
  if (**s == ',') (*s)++;
  return (rt_int)v;
}

static ylay *lay_parse(const char **s) {
  ylay *L = rt_alloc(sizeof *L);
  L->src = *s;
  L->k = *(*s)++;
  L->packed = (int)lay_num(s);
  L->align = lay_num(s);
  if (L->k == 'a' || L->k == 'A') {
    L->nd = (int)lay_num(s);
    (*s)++;
    L->elem = lay_parse(s);
    (*s)++;
  } else if (L->k == 'r') {
    L->nf = (int)lay_num(s);
    L->sel = (int)lay_num(s);
    int n = L->nf ? L->nf : 1;
    L->fl = rt_alloc((size_t)n * sizeof *L->fl);
    L->at = rt_alloc((size_t)n * sizeof *L->at);
    L->nlab = rt_alloc((size_t)n * sizeof *L->nlab);
    L->lab = rt_alloc((size_t)n * sizeof *L->lab);
    L->variant = rt_alloc((size_t)n * sizeof *L->variant);
    (*s)++;
    for (int i = 0; i < L->nf; i++) {
      L->at[i] = lay_num(s);
      L->variant[i] = (int)lay_num(s);
      L->nlab[i] = lay_num(s);
      L->lab[i] = rt_alloc((size_t)(L->nlab[i] ? L->nlab[i] : 1) * sizeof(rt_int));
      for (rt_int j = 0; j < L->nlab[i]; j++) L->lab[i][j] = lay_num(s);
      (*s)++;
      L->fl[i] = lay_parse(s);
      (*s)++;
    }
    (*s)++;
  } else {
    L->bits = lay_num(s);
    if (L->k == 's') {
      L->lo = lay_num(s);
      L->hi = lay_num(s);
    }
  }
  L->len = (size_t)(*s - L->src);
  return L;
}

static const ylay *lay_get(const char *text) {
  static struct {
    const char *t;
    const ylay *L;
  } *cache;
  static size_t n, cap;
  for (size_t i = 0; i < n; i++)
    if (cache[i].t == text || strcmp(cache[i].t, text) == 0) return cache[i].L;
  const char *s = text;
  const ylay *L = lay_parse(&s);
  if (n == cap) {
    cap = cap ? cap * 2 : 32;
    cache = realloc(cache, cap * sizeof *cache);
    if (!cache) {
      fprintf(stderr, "*** out of memory\n");
      exit(4);
    }
  }
  cache[n].t = text;
  cache[n].L = L;
  n++;
  return L;
}

static int lay_same(const ylay *a, const ylay *b) {
  return a == b || (a->len == b->len && memcmp(a->src, b->src, a->len) == 0);
}

static rt_int round_up(rt_int v, rt_int m) { return m <= 1 ? v : (v + m - 1) / m * m; }

static const ydesc *elem_desc(const ylay *L, const ydesc *d) { return L->k == 'A' ? d : d->elem; }

static rt_int lay_count(const ylay *L, const ydesc *d, const void *v) {
  if (v) return y_count(*(const yarr *)v, L->nd);
  rt_int n = 1;
  for (int k = 0; k < L->nd; k++) n *= y_n(d->lo[k], d->hi[k]);
  return n;
}

static rt_int lay_bits(const ylay *L, const ydesc *d, const void *v);

static rt_int lay_stride(const ylay *L, const ydesc *d, const void *v) {
  const ydesc *ed = elem_desc(L, d);
  const void *e0 = v && lay_count(L, d, v) > 0 ? ((const yarr *)v)->p : NULL;
  return round_up(lay_bits(L->elem, ed, e0), L->elem->align);
}

/* the start of each component of a record, as RecordBits places them */
static rt_int rec_layout(const ylay *L, const ydesc *d, const void *v, rt_int *starts) {
  rt_int off = 0, total = 0, vstart = 0;
  for (int i = 0; i < L->nf; i++) {
    const ylay *F = L->fl[i];
    rt_int b = lay_bits(F, d->fd[i], v ? (const char *)v + d->off[i] : NULL);
    if (L->variant[i]) {
      if (!vstart) vstart = off;
      int first = 1;
      for (int j = 0; j < i; j++)
        if (L->variant[j] == L->variant[i]) first = 0;
      if (first) off = vstart;
    }
    rt_int start = L->at[i] >= 0 ? L->at[i] : F->packed ? round_up(off, F->align) : round_up(off, 64);
    if (starts) starts[i] = start;
    off = start + b;
    if (off > total) total = off;
  }
  return L->packed ? total : round_up(total, 64);
}

static rt_int lay_bits(const ylay *L, const ydesc *d, const void *v) {
  if (L->k == 'a' || L->k == 'A') {
    rt_int b = lay_stride(L, d, v) * lay_count(L, d, v);
    return L->packed ? b : round_up(b, 64);
  }
  if (L->k == 'r') return rec_layout(L, d, v, NULL);
  return L->bits;
}

static rt_int *rec_starts(const ylay *L, const ydesc *d, const void *v) {
  rt_int *s = rt_alloc((size_t)(L->nf ? L->nf : 1) * sizeof *s);
  rec_layout(L, d, v, s);
  return s;
}

/* is component i of the record v in the variant its case selector names */
static int variant_on(const ylay *L, const ydesc *d, const void *v, int i) {
  if (!L->variant[i] || L->sel < 0) return 1;
  const char *p = (const char *)v + d->off[L->sel];
  rt_int s = L->fl[L->sel]->k == 'c' ? *(const unsigned char *)p : *(const rt_int *)p;
  for (rt_int j = 0; j < L->nlab[i]; j++)
    if (L->lab[i][j] == s) return 1;
  return 0;
}

/* ---- images: a value in its layout, bits in an array of words ---- */

static uint64_t img_get(const uint64_t *b, rt_int ba, rt_int w) {
  uint64_t v = 0;
  for (rt_int got = 0; got < w;) {
    rt_int word = (ba + got) / 64, bit = (ba + got) % 64, n = 64 - bit;
    if (n > w - got) n = w - got;
    uint64_t x = b[word] >> bit;
    if (n < 64) x &= ((uint64_t)1 << n) - 1;
    v |= x << got;
    got += n;
  }
  return v;
}

static void img_put(uint64_t *b, rt_int ba, rt_int w, uint64_t v) {
  for (rt_int done = 0; done < w;) {
    rt_int word = (ba + done) / 64, bit = (ba + done) % 64, n = 64 - bit;
    if (n > w - done) n = w - done;
    uint64_t mask = n < 64 ? (((uint64_t)1 << n) - 1) << bit : ~(uint64_t)0;
    b[word] = (b[word] & ~mask) | (((v >> done) << bit) & mask);
    done += n;
  }
}

static rt_int ptr_addr(void *p);
static void *addr_ptr(rt_int a);

static void to_img(const ylay *L, const ydesc *d, const void *v, uint64_t *b, rt_int ba) {
  rt_int w = L->bits < 64 ? L->bits : 64;
  switch (L->k) {
  case 'i':
  case 'u': img_put(b, ba, w, (uint64_t) * (const rt_int *)v); break;
  case 'c': img_put(b, ba, w, *(const unsigned char *)v); break;
  case 'f': {
    uint64_t x;
    memcpy(&x, v, sizeof x);
    img_put(b, ba, 64, x);
    break;
  }
  case 'x': {
    unsigned __int128 x = (unsigned __int128) * (const yfix *)v;
    img_put(b, ba, 64, (uint64_t)x);
    img_put(b, ba + 64, 64, (uint64_t)(x >> 64));
    break;
  }
  case 'p': img_put(b, ba, w, (uint64_t)ptr_addr(*(void *const *)v)); break;
  case 's': {
    const yset *s = v;
    for (rt_int e = L->lo; e <= L->hi; e++)
      if (y_set_in(e, *s)) img_put(b, ba + (e - L->lo), 1, 1);
    break;
  }
  case 'a':
  case 'A': {
    const yarr *a = v;
    const ydesc *ed = elem_desc(L, d);
    rt_int n = lay_count(L, d, v), st = lay_stride(L, d, v);
    for (rt_int i = 0; i < n; i++) to_img(L->elem, ed, (const char *)a->p + i * ed->size, b, ba + i * st);
    break;
  }
  case 'r': {
    rt_int *s = rec_starts(L, d, v);
    for (int i = 0; i < L->nf; i++)
      if (variant_on(L, d, v, i)) to_img(L->fl[i], d->fd[i], (const char *)v + d->off[i], b, ba + s[i]);
    free(s);
    break;
  }
  default: break;
  }
}

/* the parts of v whose bits meet lo..hi-1 are read back from the image */
static void from_img(const ylay *L, const ydesc *d, void *v, const uint64_t *b, rt_int ba, rt_int lo,
                     rt_int hi) {
  if (L->k != 'a' && L->k != 'A' && L->k != 'r') {
    if (ba >= hi || ba + L->bits <= lo) return;
  }
  rt_int w = L->bits < 64 ? L->bits : 64;
  switch (L->k) {
  case 'i': {
    uint64_t x = img_get(b, ba, w);
    if (w < 64 && (x >> (w - 1)) & 1) x |= ~(uint64_t)0 << w;
    *(rt_int *)v = (rt_int)x;
    break;
  }
  case 'u': *(rt_int *)v = (rt_int)img_get(b, ba, w); break;
  case 'c': *(unsigned char *)v = (unsigned char)img_get(b, ba, w); break;
  case 'f': {
    uint64_t x = img_get(b, ba, 64);
    memcpy(v, &x, sizeof x);
    break;
  }
  case 'x': {
    unsigned __int128 x = img_get(b, ba, 64) | ((unsigned __int128)img_get(b, ba + 64, 64) << 64);
    *(yfix *)v = (yfix)x;
    break;
  }
  case 'p': *(void **)v = addr_ptr((rt_int)img_get(b, ba, w)); break;
  case 's': {
    yset s = y_set_new(L->lo, L->hi);
    for (rt_int e = L->lo; e <= L->hi; e++)
      if (img_get(b, ba + (e - L->lo), 1)) s = y_set_add(s, e);
    *(yset *)v = s;
    break;
  }
  case 'a':
  case 'A': {
    yarr *a = v;
    const ydesc *ed = elem_desc(L, d);
    rt_int n = lay_count(L, d, v), st = lay_stride(L, d, v);
    for (rt_int i = 0; i < n; i++) {
      rt_int eb = ba + i * st;
      if (eb >= hi) break;
      if (eb + st <= lo) continue;
      from_img(L->elem, ed, (char *)a->p + i * ed->size, b, eb, lo, hi);
    }
    break;
  }
  case 'r': {
    rt_int *s = rec_starts(L, d, v);
    /* a new case selected: the components of its variant are all read */
    int seln = L->sel >= 0 && ba + s[L->sel] < hi && ba + s[L->sel] + L->fl[L->sel]->bits > lo;
    for (int i = 0; i < L->nf; i++)
      if (variant_on(L, d, v, i)) {
        rt_int l = lo, h = hi;
        if (seln && L->variant[i]) {
          l = ba + s[i];
          h = INT64_MAX;
        }
        from_img(L->fl[i], d->fd[i], (char *)v + d->off[i], b, ba + s[i], l, h);
      }
    free(s);
    break;
  }
  default: break;
  }
}

/* the component of v that starts at bit off and has the layout want (the
 * outermost one when want is NULL); its bit offset, or -1 */
static void *comp_at(const ylay *L, const ydesc *d, void *v, rt_int off, const ylay *want) {
  if (off == 0 && (!want || lay_same(L, want))) return v;
  if (L->k == 'a' || L->k == 'A') {
    yarr *a = v;
    const ydesc *ed = elem_desc(L, d);
    rt_int n = lay_count(L, d, v), st = lay_stride(L, d, v);
    if (st <= 0) return NULL;
    rt_int i = off / st;
    if (i < 0 || i >= n) return NULL;
    return comp_at(L->elem, ed, (char *)a->p + i * ed->size, off - i * st, want);
  }
  if (L->k == 'r') {
    rt_int *s = rec_starts(L, d, v);
    void *r = NULL;
    for (int i = 0; i < L->nf && !r; i++) {
      if (!variant_on(L, d, v, i)) continue;
      rt_int b = lay_bits(L->fl[i], d->fd[i], (char *)v + d->off[i]);
      if (off >= s[i] && (off < s[i] + b || (b == 0 && off == s[i])))
        r = comp_at(L->fl[i], d->fd[i], (char *)v + d->off[i], off - s[i], want);
    }
    free(s);
    return r;
  }
  return NULL;
}

/* the bit offset in v of the component at C address p with layout want,
 * found by descending depth levels; -1 when it is not there */
static rt_int off_of(const ylay *L, const ydesc *d, void *v, void *p, const ylay *want, int depth) {
  if (depth == 0) return v == p && (!want || lay_same(L, want)) ? 0 : -1;
  if (L->k == 'a' || L->k == 'A') {
    yarr *a = v;
    const ydesc *ed = elem_desc(L, d);
    rt_int n = lay_count(L, d, v), st = lay_stride(L, d, v);
    char *c = p, *e0 = a->p;
    if (n > 0 && c >= e0 && c < e0 + n * (rt_int)ed->size) {
      rt_int i = (c - e0) / (rt_int)ed->size;
      rt_int r = off_of(L->elem, ed, e0 + i * ed->size, p, want, depth - 1);
      if (r >= 0) return i * st + r;
    }
    /* a component of a component array: its buffer is elsewhere */
    for (rt_int i = 0; depth > 1 && i < n; i++) {
      rt_int r = off_of(L->elem, ed, (char *)a->p + i * ed->size, p, want, depth - 1);
      if (r >= 0) return i * st + r;
    }
    return -1;
  }
  if (L->k == 'r') {
    rt_int *s = rec_starts(L, d, v), r = -1;
    for (int i = 0; i < L->nf && r < 0; i++) {
      rt_int x = off_of(L->fl[i], d->fd[i], (char *)v + d->off[i], p, want, depth - 1);
      if (x >= 0) r = s[i] + x;
    }
    free(s);
    return r;
  }
  return -1;
}

/* ---- windows: addresses above the store ---- */

typedef struct {
  char *c;
  rt_int base, words;
  const ylay *L;                               /* NULL: the bytes as they are */
  const ydesc *d;
  void *cell;                                  /* the pointer that gave it */
} ywin;
static ywin *wins;
static rt_int nwins, cwins, next_window = Y_STORE;

static ywin *win_new(char *c, rt_int words, const ylay *L, const ydesc *d) {
  if (nwins == cwins) {
    cwins = cwins ? cwins * 2 : 32;
    wins = realloc(wins, (size_t)cwins * sizeof *wins);
    if (!wins) {
      fprintf(stderr, "*** out of memory\n");
      exit(4);
    }
  }
  if (words < 1) words = 1;
  ywin *w = &wins[nwins++];
  w->c = c;
  w->base = next_window;
  w->words = words;
  w->L = L;
  w->d = d;
  w->cell = NULL;
  next_window += words;
  return w;
}

static ywin *win_at(rt_int a) {
  for (rt_int i = 0; i < nwins; i++)
    if (a >= wins[i].base && a < wins[i].base + wins[i].words) return &wins[i];
  return NULL;
}

static ywin *win_of(void *p) {
  for (rt_int i = 0; i < nwins; i++)
    if (wins[i].c == p) return &wins[i];
  return NULL;
}

/* the image of a window, Y_ALLOCATED: words zeroed first */
static uint64_t *win_image(ywin *w) {
  uint64_t *b = rt_alloc((size_t)w->words * sizeof *b + 16);
  to_img(w->L, w->d, w->c, b, 0);
  return b;
}

/* ---- views ---- */

struct yview {
  void *shadow;                                /* the value in the program's form */
  const ylay *L;
  const ydesc *d;
  rt_int addr, words, bits;
  uint64_t *base;                              /* the image last agreed with the store */
};
static yview **views;
static rt_int nviews, cviews;
#define Y_TOUCH_MAX 64
__thread yview *y_touched_v[Y_TOUCH_MAX];
__thread int y_ntouched;

rt_int y_mem_get(rt_int a);
void y_mem_set(rt_int a, rt_int x);

/* the view and the store agree again: what the program changed in the view
 * since they last agreed goes to the store, the rest comes from it */
static void view_sync(yview *V) {
  uint64_t *h = rt_alloc((size_t)V->words * sizeof *h + 16);
  to_img(V->L, V->d, V->shadow, h, 0);
  int changed = 0;
  for (rt_int k = 0; k < V->words; k++) {
    uint64_t s = (uint64_t)y_mem_get(V->addr + k), mask = h[k] ^ V->base[k];
    uint64_t n = (s & ~mask) | (h[k] & mask);
    if (n != s) y_mem_set(V->addr + k, (rt_int)n);
    if (n != V->base[k] || n != h[k]) changed = 1;
    V->base[k] = n;
  }
  if (changed) from_img(V->L, V->d, V->shadow, V->base, 0, 0, V->bits);
  free(h);
}

static void touch(yview *V) {
  for (int i = 0; i < y_ntouched; i++)
    if (y_touched_v[i] == V) return;
  if (y_ntouched == Y_TOUCH_MAX) y_flush();
  y_touched_v[y_ntouched++] = V;
}

void y_flush(void) {
  while (y_ntouched > 0) view_sync(y_touched_v[--y_ntouched]);
}

static yview *view_new(void *shadow, const ylay *L, const ydesc *d, rt_int addr) {
  yview *V = rt_alloc(sizeof *V);
  V->shadow = shadow;
  V->L = L;
  V->d = d;
  V->addr = addr;
  y_init(d, shadow);
  V->bits = lay_bits(L, d, shadow);
  V->words = (V->bits + 63) / 64;
  if (V->words < 1) V->words = 1;
  V->base = rt_alloc((size_t)V->words * sizeof *V->base + 16);
  for (rt_int k = 0; k < V->words; k++) V->base[k] = (uint64_t)y_mem_get(addr + k);
  from_img(L, d, shadow, V->base, 0, 0, V->bits);
  if (nviews == cviews) {
    cviews = cviews ? cviews * 2 : 16;
    views = realloc(views, (size_t)cviews * sizeof *views);
    if (!views) {
      fprintf(stderr, "*** out of memory\n");
      exit(4);
    }
  }
  views[nviews++] = V;
  return V;
}

static yview *view_of(void *shadow) {
  for (rt_int i = 0; i < nviews; i++)
    if (views[i]->shadow == shadow) return views[i];
  return NULL;
}

/* a variable AT address a whose layout is not one plain word */
void *y_view(yview **slot, void *shadow, const char *lay, const ydesc *d, rt_int a) {
  if (!*slot) *slot = view_new(shadow, lay_get(lay), d, a);
  view_sync(*slot);
  touch(*slot);
  return shadow;
}

/* a CONST parameter AT address a: its value is put there */
void y_view_put(const void *v, const char *lay, const ydesc *d, rt_int a) {
  const ylay *L = lay_get(lay);
  rt_int bits = lay_bits(L, d, v), words = (bits + 63) / 64;
  uint64_t *b = rt_alloc((size_t)(words ? words : 1) * sizeof *b + 16);
  for (rt_int k = 0; k < words; k++) b[k] = (uint64_t)y_mem_get(a + k);
  to_img(L, d, v, b, 0);
  for (rt_int k = 0; k < words; k++) y_mem_set(a + k, (rt_int)b[k]);
  free(b);
}

/* ---- dynamic variables seen in the store ---- */

void *y_new_l(size_t n, const char *lay, const ydesc *d) {
  ycell *c = y_new(n);
  c->L = lay_get(lay);
  c->d = d;
  return c;
}

static void *cell_view(ycell *c) {
  view_sync(c->view);
  touch(c->view);
  return c->body;
}

/* the address of what a pointer designates; 0 for NIL */
static rt_int ptr_addr(void *p) {
  ycell *c = p;
  if (!c || !c->body) return 0;
  if (c->view) return c->view->addr;
  char *b = c->body;
  if (b >= (char *)y_mem_store && b < (char *)(y_mem_store + Y_STORE)) return (b - (char *)y_mem_store) / 8;
  ywin *w = win_of(b);
  if (w) {
    if (!w->cell) w->cell = c;
    return w->base;
  }
  /* a component of a variable in a window */
  for (rt_int i = 0; i < nwins; i++) {
    if (!wins[i].L) continue;
    for (int k = 1; k <= 8; k++) {
      rt_int o = off_of(wins[i].L, wins[i].d, wins[i].c, b, c->L, k);
      if (o >= 0) return wins[i].base + o / 64;
    }
  }
  if (c->L) {
    w = win_new(b, (lay_bits(c->L, c->d, b) + 63) / 64, c->L, c->d);
  } else {
    w = win_new(b, 1, NULL, NULL);
  }
  w->cell = c;
  return w->base;
}

static void *addr_ptr(rt_int a) {
  if (a == 0) return NULL;
  ywin *w = win_at(a);
  if (w && w->base == a && w->cell) return w->cell;
  return y_cell(y_mem_ptr(a));
}

/* ---- the store, word by word ---- */

void *y_mem_at(rt_int a, size_t bytes) {
  if (a < 0 || (uint64_t)a * 8 + bytes > (uint64_t)Y_STORE * 8) rt_raise(Y_X_ADDRESS);
  return &y_mem_store[a];
}

rt_int y_mem_get(rt_int a) {
  if (a >= 0 && a < Y_STORE) return y_mem_store[a];
  ywin *w = win_at(a);
  if (!w) rt_raise(Y_X_ADDRESS);
  if (!w->L) {
    rt_int x;
    memcpy(&x, w->c + (a - w->base) * 8, sizeof x);
    return x;
  }
  uint64_t *b = win_image(w);
  rt_int x = (rt_int)b[a - w->base];
  free(b);
  return x;
}

void y_mem_set(rt_int a, rt_int x) {
  if (a >= 0 && a < Y_STORE) {
    y_mem_store[a] = x;
    return;
  }
  ywin *w = win_at(a);
  if (!w) rt_raise(Y_X_ADDRESS);
  if (!w->L) {
    memcpy(w->c + (a - w->base) * 8, &x, sizeof x);
    return;
  }
  uint64_t *b = win_image(w);
  rt_int k = a - w->base;
  b[k] = (uint64_t)x;
  from_img(w->L, w->d, w->c, b, 0, k * 64, k * 64 + 64);
  free(b);
}

/* MAIN_STORE_ARRAY [a] as a variable: a word of the store, of a window that
 * shows its variable as it is, or a view of a word of a window */
rt_int *y_mem_word(rt_int a) {
  if (a >= 0 && a < Y_STORE) return &y_mem_store[a];
  ywin *w = win_at(a);
  if (!w) rt_raise(Y_X_ADDRESS);
  if (!w->L) return (rt_int *)(w->c + (a - w->base) * 8);
  for (rt_int i = 0; i < nviews; i++)
    if (views[i]->addr == a && views[i]->L->k == 'i' && views[i]->L->bits == 64) {
      view_sync(views[i]);
      touch(views[i]);
      return views[i]->shadow;
    }
  rt_int *s = rt_alloc(sizeof *s);
  yview *V = view_new(s, lay_get("i0,0,64"), &y_d_int, a);
  touch(V);
  return s;
}

/* ADDR of a value held in no window yet, of the extent given: its bytes */
rt_int y_addr(void *p, rt_int words) {
  char *c = p;
  if (c >= (char *)y_mem_store && c < (char *)(y_mem_store + Y_STORE)) return (c - (char *)y_mem_store) / 8;
  yview *V = view_of(p);
  if (V) return V->addr;
  for (rt_int i = 0; i < nwins; i++)
    if (!wins[i].L && c >= wins[i].c && c < wins[i].c + wins[i].words * 8)
      return wins[i].base + (c - wins[i].c) / 8;
  ywin *w = win_of(p);
  if (w) return w->base;
  return win_new(c, words, NULL, NULL)->base;
}

/* ADDR of the component comp, depth components down from the variable
 * root of layout lay: in the window of root, which ADDR makes in that
 * layout when it first asks */
rt_int y_addr_v(void *root, const char *lay, const ydesc *d, void *comp, const char *clay, int depth) {
  const ylay *L = lay_get(lay), *C = clay ? lay_get(clay) : NULL;
  rt_int base, off;
  yview *V = view_of(root);
  if (V) {
    base = V->addr;
    off = off_of(V->L, V->d, root, comp, C, depth);
  } else {
    ywin *w = win_of(root);
    if (w && !w->L && w->words >= (lay_bits(L, d, root) + 63) / 64) {
      w->L = L;
      w->d = d;
    }
    if (!w || !w->L) {
      /* root may be a component of a variable already in a window */
      for (rt_int i = 0; i < nwins && !w; i++) {
        if (!wins[i].L) continue;
        for (int k = 1; k <= 8 && !w; k++) {
          rt_int o = off_of(wins[i].L, wins[i].d, wins[i].c, root, L, k);
          if (o >= 0 && o % 64 == 0) {
            rt_int x = off_of(L, d, root, comp, C, depth);
            if (x >= 0) return wins[i].base + (o + x) / 64;
          }
        }
      }
      w = win_new(root, (lay_bits(L, d, root) + 63) / 64, L, d);
    }
    base = w->base;
    off = off_of(w->L, w->d, root, comp, C, depth);
  }
  if (off < 0) off = 0;
  return base + off / 64;
}

/* ADDR of a SPACE: of the actual, in the layout it was passed with */
rt_int y_addr_s(yspace s) {
  if (!s.lay) return y_addr(s.p, s.words);
  return y_addr_v(s.p, s.lay, s.d, s.p, NULL, 0);
}

/* what address a names: a word of the store, or the component of the
 * variable in a window that starts there */
void *y_mem_ptr(rt_int a) {
  if (a >= 0 && a < Y_STORE) return &y_mem_store[a];
  ywin *w = win_at(a);
  if (!w) rt_raise(Y_X_ADDRESS);
  if (!w->L) return w->c + (a - w->base) * 8;
  void *p = comp_at(w->L, w->d, w->c, (a - w->base) * 64, NULL);
  if (!p) rt_raise(Y_X_ADDRESS);
  return p;
}

/* MAKE_POINTER: a pointer to the variable of layout lay at address a. A
 * variable of that layout that starts there is designated itself; anything
 * else is seen through a view. exact: the layout is one plain word, the
 * program's form of the value, so the store itself is designated */
void *y_make_ptr(rt_int a, const char *lay, const ydesc *d, int exact) {
  const ylay *L = lay_get(lay);
  if (a >= 0 && a < Y_STORE && exact) return y_cell(&y_mem_store[a]);
  ywin *w = a >= Y_STORE ? win_at(a) : NULL;
  if (a >= Y_STORE && !w) rt_raise(Y_X_ADDRESS);
  if (w && !w->L) return y_cell(w->c + (a - w->base) * 8);
  if (w) {
    void *p = comp_at(w->L, w->d, w->c, (a - w->base) * 64, L);
    if (p) {
      ycell *c = y_cell(p);
      if (!c->L) {
        c->L = L;
        c->d = d;
      }
      return c;
    }
  }
  for (rt_int i = 0; i < nviews; i++)
    if (views[i]->addr == a && lay_same(views[i]->L, L) && views[i]->d == d) {
      ycell *c = y_cell(views[i]->shadow);
      c->view = views[i];
      return c;
    }
  void *body = rt_alloc(d->size);
  ycell *c = y_cell(body);
  c->view = view_new(body, L, d, a);
  return c;
}

void *y_derefw(void *p, const char *lay, const ydesc *d, int exact) {
  ycell *c = p;
  if (c && c->body) return c->view ? cell_view(c) : c->body;
  if (d->size > sizeof y_mem_store) rt_raise(Y_X_ADDRESS);
  return y_deref(y_make_ptr(0, lay, d, exact));
}

int y_cond_claim(rt_lock *l) {
  if (l->owner) return 0;
  l->owner = cur;
  return 1;
}

/* ---- numeric conversions (XI, p.1062) -------------------------------------- */

static rt_int y_toint(double v) {
  if (!(v >= -9.2e18 && v <= 9.2e18)) rt_raise(RT_X_OVERFLOW);
  return (rt_int)v;
}

rt_int y_floor(double v) { return y_toint(floor(v)); }
rt_int y_ceiling(double v) { return y_toint(ceil(v)); }
rt_int y_near_integer(double v) { return y_toint(round(v)); }
double y_near_fixed(double v, double scale) { return round(v / scale) * scale; }

/* a FIXED value is a multiple of its scale within its range (VI.A.1.b);
 * values are kept in doubles, as p.1001 allows */
double y_fixed(double v, double lo, double hi, double scale) {
  double q = v / scale, r = round(q);
  if (fabs(q - r) > 1e-6 * (fabs(q) > 1 ? fabs(q) : 1)) rt_raise(Y_X_FIXED);
  v = r * scale;
  if (v < lo - scale / 2 || v > hi + scale / 2) rt_raise(RT_X_RANGE);
  return v;
}

double y_fixed_div(double a, double b, double scale) {
  if (b == 0) rt_raise(Y_X_ZERO_DENOM);
  return floor(a / b / scale + 1e-9) * scale;
}

static rt_int y_fmt(const char *b, int n, unsigned char *buf, rt_int cap) {
  if (n > cap) n = (int)cap;
  memcpy(buf, b, (size_t)n);
  return n;
}

rt_int y_fmt_int(rt_int v, unsigned char *buf, rt_int cap) {
  char b[32];
  return y_fmt(b, snprintf(b, sizeof b, "%lld", (long long)v), buf, cap);
}

rt_int y_fmt_float(double v, rt_int digits, unsigned char *buf, rt_int cap) {
  char b[64];
  if (digits < 1) digits = 1;
  if (digits > 17) digits = 17;
  return y_fmt(b, snprintf(b, sizeof b, "%.*E", (int)digits - 1, v), buf, cap);
}

rt_int y_fmt_fixed(double v, rt_int decimals, unsigned char *buf, rt_int cap) {
  char b[64];
  if (decimals < 0) decimals = 0;
  if (decimals > 17) decimals = 17;
  if (fabs(v) < 0.5 * pow(10, -(double)decimals)) v = 0;   /* no "-0.00" */
  return y_fmt(b, snprintf(b, sizeof b, "%.*f", (int)decimals, v), buf, cap);
}

/* ---- fixed point (VI.A.1.b, VIII.C): exact, as scaled integers ------------ */
/* A FIXED value of a representation of scale s is held as the integer k
 * with value k * s; the translator knows every scale, a manifest rational,
 * and passes the factors between two scales. Arithmetic is exact (VIII.C):
 * an operation that the integers cannot hold raises OVERFLOW, a value that
 * is not a multiple of the scale it is assigned to FIXED_NOT_REPRESENTABLE. */

const ydesc y_d_fix = {YK_FIX, sizeof(yfix), 0, 0, {0}, {0}, NULL, 0, NULL, NULL};

yfix y_fix_add(yfix a, yfix b) {
  yfix r;
  if (__builtin_add_overflow(a, b, &r)) y_trap(RT_X_OVERFLOW);
  return r;
}

yfix y_fix_sub(yfix a, yfix b) {
  yfix r;
  if (__builtin_sub_overflow(a, b, &r)) y_trap(RT_X_OVERFLOW);
  return r;
}

yfix y_fix_mul(yfix a, yfix b) {
  yfix r;
  if (__builtin_mul_overflow(a, b, &r)) y_trap(RT_X_OVERFLOW);
  return r;
}

yfix y_fix_neg(yfix a) { return y_fix_sub(0, a); }

/* k * p / q, which must be a whole number */
static yfix fix_round(yfix a, yfix b);

yfix y_fix_conv(yfix k, yfix p, yfix q) {
  if (k == Y_UNDEF_X) return k;
  yfix t = y_fix_mul(k, p);
  if (q == 1) return t;
  if (t % q != 0) {
    y_trap(Y_X_FIXED);                     /* resumed: the nearest multiple */
    return fix_round(t, q);
  }
  return t / q;
}

yfix y_fix_range(yfix k, yfix lo, yfix hi) {
  if ((k < lo || k > hi) && k != Y_UNDEF_X) {
    y_trap(RT_X_RANGE);
    return k < lo ? lo : hi;
  }
  return k;
}

static yfix fix_floordiv(yfix a, yfix b) {
  yfix q = a / b;
  if ((a % b != 0) && ((a < 0) != (b < 0))) q--;
  return q;
}

/* a bound of a range in units of a scale: the multiples of the scale that
 * lie in the range (up: the smallest at or above, else the largest below) */
yfix y_fix_bound(yfix k, yfix p, yfix q, int up) {
  yfix t = y_fix_mul(k, p);
  yfix f = fix_floordiv(t, q);
  if (up && f * q != t) f++;
  return f;
}

/* FIXED_DIV (XI): the largest multiple of the result scale not above the
 * quotient n / d, the factors p / q bringing the quotient of the integers
 * to that scale */
yfix y_fix_div(yfix n, yfix d, yfix p, yfix q) {
  if (d == 0) rt_raise(Y_X_ZERO_DENOM);
  return fix_floordiv(y_fix_mul(n, p), y_fix_mul(d, q));
}

/* rounded to the nearest whole number, halves away from zero (XI) */
static yfix fix_round(yfix a, yfix b) {
  if (b < 0) { a = -a; b = -b; }
  yfix q = a / b, r = a % b;
  if (r < 0) r = -r;
  if (2 * r >= b) q += a < 0 ? -1 : 1;
  return q;
}

/* NEAR_FIXED of a FIXED value: k * p / q rounded */
yfix y_fix_near(yfix k, yfix p, yfix q) { return fix_round(y_fix_mul(k, p), q); }

/* NEAR_FIXED of a floating-point value: x / (sn / sd) rounded */
yfix y_fix_of_float(double x, rt_int sn, rt_int sd) {
  double v = x * (double)sd / (double)sn;
  if (!(v > -1.7e38 && v < 1.7e38)) rt_raise(RT_X_OVERFLOW);
  return (yfix)round(v);
}

double y_fix_float(yfix k, rt_int sn, rt_int sd) { return (double)k * (double)sn / (double)sd; }

static rt_int fix_int(yfix v) {
  if (v > INT64_MAX || v < -INT64_MAX) rt_raise(RT_X_OVERFLOW);
  return (rt_int)v;
}

rt_int y_fix_floor(yfix k, rt_int sn, rt_int sd) { return fix_int(fix_floordiv(y_fix_mul(k, sn), sd)); }
rt_int y_fix_ceiling(yfix k, rt_int sn, rt_int sd) { return -fix_int(fix_floordiv(-y_fix_mul(k, sn), sd)); }
rt_int y_fix_near_integer(yfix k, rt_int sn, rt_int sd) { return fix_int(fix_round(y_fix_mul(k, sn), sd)); }

/* the value k * sn / sd in decimal, rounded to the given number of decimals,
 * halves away from zero */
rt_int y_fmt_fix(yfix k, rt_int sn, rt_int sd, rt_int decimals, unsigned char *buf, rt_int cap) {
  char b[96], *e = b + sizeof b;
  int n = 0;
  if (decimals < 0) decimals = 0;
  if (decimals > 30) decimals = 30;
  yfix p = 1;
  for (rt_int i = 0; i < decimals; i++) p *= 10;
  yfix v = fix_round(y_fix_mul(y_fix_mul(k, sn), p), sd);
  int neg = v < 0;
  unsigned __int128 u = neg ? -(unsigned __int128)v : (unsigned __int128)v;
  char *s = e;
  rt_int d = 0;
  do {
    if (decimals > 0 && d == decimals) *--s = '.';
    *--s = (char)('0' + (int)(u % 10));
    u /= 10;
    d++;
  } while (u || d <= decimals);
  if (neg) *--s = '-';
  n = (int)(e - s);
  return y_fmt(s, n, buf, cap);
}

double y_fchk(double v) {
  if (isinf(v)) y_trap(RT_X_OVERFLOW);
  return v;
}

/* a descriptor for a one-dimensional array of elem, to compare the values
 * of a length-unresolved array parameter (X.A.3) */
const ydesc *y_desc_vector(const ydesc *elem) {
  ydesc *d = rt_alloc(sizeof *d);
  rt_int lo[1] = {1}, hi[1] = {0};
  y_desc_array(d, 1, lo, hi, elem);
  return d;
}

/* the descriptor of a string literal: a vector of characters */
const ydesc y_d_str = {YK_ARRAY, sizeof(yarr), 1, 1, {1, 1, 1, 1}, {0, 1, 1, 1}, &y_d_byte, 0, NULL, NULL};

/* ---- device signals (XIV.VII) ------------------------------------------------ */
/* A SIGNAL declared AT a machine location is sent by the device there. This
 * implementation simulates one device of the PDP-11 the Report's examples
 * use: the line clock KW11-L, interrupt vector 100 (octal), status register
 * 177546 (octal) of the I/O page. Every 20 ms of the clock, as on a 50 Hz
 * machine, it sets bit 7 of the status register (the monitor bit), and when
 * bit 6 is set (interrupt enable) it interrupts: it sends the signal. It
 * runs as a process of the highest priority and enters the monitor of the
 * signal to send it, as a monitor procedure would. */

#define Y_LKS 0177546                          /* the line clock status register */

typedef struct {
  ysig *s;
  rt_int period;
} ydevice;

static void y_device_loop(void *arg) {
  ydevice *d = arg;
  for (;;) {
    rt_delay(d->period);
    y_mem_store[Y_LKS] |= 0200;
    if (!(y_mem_store[Y_LKS] & 0100)) continue;
    if (d->s->mon) y_mon_enter(d->s->mon);
    y_send(d->s);
    if (d->s->mon) y_mon_leave(d->s->mon);
  }
}

void y_device(ysig *s, rt_int address) {
  static rt_taskdecl devices;
  if (address != 64) return;            /* only the line clock is simulated */
  ydevice *d = rt_alloc(sizeof *d);
  d->s = s;
  d->period = 20;
  y_create(&devices, 0, 1, 255, 0, y_device_loop, d);
}

/* a SIGNAL as a component of an array or a record: tied to its monitor by
 * y_sig_init_all when the structure is declared */
const ydesc y_d_sig = {YK_SIG, sizeof(ysig), 0, 0, {0}, {0}, NULL, 0, NULL, NULL};
const ydesc y_d_sem = {YK_OPAQUE, sizeof(rt_lock), 0, 0, {0}, {0}, NULL, 0, NULL, NULL};
/* a character of an alphabet of 256: every byte is a character */
const ydesc y_d_byte256 = {YK_OPAQUE, 1, 0, 0, {0}, {0}, NULL, 0, NULL, NULL};

void y_sig_init_all(const ydesc *d, void *v, ymon *m) {
  if (d->kind == YK_SIG) {
    y_sig_init(v, m);
  } else if (d->kind == YK_ARRAY) {
    yarr *a = v;
    rt_int n = y_count(*a, d->nd);
    for (rt_int i = 0; i < n; i++) y_sig_init_all(d->elem, (char *)a->p + i * d->elem->size, m);
  } else if (d->kind == YK_RECORD) {
    for (int i = 0; i < d->nf; i++) y_sig_init_all(d->fd[i], (char *)v + d->off[i], m);
  }
}

/* ---- RED additions ------------------------------------------------------- */

int rt_r_active(rt_act *a) { return a == NULL || a->active; }

rstr rt_r_strsub(rstr s, rt_int len) {
  if (s.len != len) rt_raise_msg(RT_X_SUBTYPE, "string length");
  return s;
}

void rt_r_free_unchecked(void **v) {
  uintptr_t target = (uintptr_t)*v;
  if (!target) return;
  blockrec *tb = bfind(target);
  forget_fin(target);
  if (tb) {
    tb->p = DEAD_BLOCK;
    free((void *)target);
  }
  *v = NULL;
}

struct rt_r_inside {
  rt_act *who;
  int depth;
  rt_r_inside *next;
};

void rt_r_nonrec_enter(rt_r_nonrec *n, int nonrec, int nonreent, const char *name) {
  rt_act *me = rt_me();
  rt_r_inside *i;
  for (i = n->in; i; i = i->next)
    if (i->depth > 0) {
      if ((nonrec && i->who == me) || (nonreent && i->who != me)) {
        fflush(stdout);
        fprintf(stderr, "*** %s invoked %s against its pragmat\n", name,
                i->who == me ? "recursively" : "reentrantly");
        exit(1);
      }
    }
  for (i = n->in; i && i->who != me; i = i->next) {
  }
  if (!i) {
    i = calloc(1, sizeof *i);
    i->who = me;
    i->next = n->in;
    n->in = i;
  }
  i->depth++;
}

void rt_r_nonrec_leave(rt_r_nonrec *n) {
  rt_act *me = rt_me();
  for (rt_r_inside *i = n->in; i; i = i->next)
    if (i->who == me && i->depth > 0) {
      i->depth--;
      return;
    }
}

void rt_r_xtag(void) { rt_raise(RT_X_TAG); }

rt_int rt_r_tag(rt_int tag) {
  if (tag < 0) rt_raise(RT_X_INIT);
  return tag;
}

int rt_r_set_le(yset a, yset b) {
  for (rt_int e = a.lo; e <= a.hi; e++)
    if (y_set_in(e, a) && !y_set_in(e, b)) return 0;
  return 1;
}

int rt_r_set_lt(yset a, yset b) { return rt_r_set_le(a, b) && !y_set_eq(a, b); }

/* a NaN with a payload of its own marks an uninitialized FLOAT */
double rt_r_fundef(void) {
  uint64_t b = 0x7ff8000000000bedULL;
  double d;
  memcpy(&d, &b, sizeof d);
  return d;
}

double rt_r_fchk(double v) {
  uint64_t b;
  memcpy(&b, &v, sizeof b);
  if (b == 0x7ff8000000000bedULL) rt_raise(RT_X_INIT);
  return v;
}

int rt_r_undef_FLOAT(double v) {
  uint64_t b;
  memcpy(&b, &v, sizeof b);
  return b == 0x7ff8000000000bedULL;
}

/* TIME(a) and DELAY_UNTIL(t, a): the activation clock (RED 10.4, C.10) */
rt_int rt_r_act_time(rt_act *a) {
  if (!a) a = rt_me();
  return a->t ? a->t->aclock : 0;
}

void rt_r_delay_act(rt_int t, rt_act *a) {
  for (;;) {
    rt_int c = rt_r_act_time(a);
    if (c >= t) return;
    if (!a || !a->active) {
      /* the clock of an inactive activation never reaches t */
      rt_mbox never;
      int dummy;
      rt_mbox_init(&never, 0, sizeof dummy, NULL);
      rt_receive(&never, &dummy);
    }
    rt_delay(t - c);
  }
}

rt_int rt_r_act_deadline(rt_int t, rt_act *a) { return rt_time() + (t - rt_r_act_time(a)); }

static int x_lock(void) { return rt_exc("X_LOCK"); }

double rt_r_fovf(double v) {
  if (isinf(v)) rt_raise(RT_X_OVERFLOW);
  return v;
}

double rt_r_fpow(double a, rt_int b) {
  if (b < 0) rt_raise(RT_X_NEG_EXP);
  return rt_r_fovf(rt_fpow(a, b));
}

rt_int rt_r_floor(double v) {
  double f = floor(v);
  if (!(f >= -9.2233720368547758e18 && f < 9.2233720368547758e18)) rt_raise(RT_X_OVERFLOW);
  return (rt_int)f;
}

void rt_r_unlock(rt_lock *l) {
  if (!l->owner) rt_raise(x_lock());
  rt_region_leave(l);
}

rt_act *rt_r_owner(rt_lock *l) {
  if (!l->owner) rt_raise(x_lock());
  return rt_lock_owner(l);
}

static int count_waiters(rt_waiter *w) {
  int n = 0;
  for (; w; w = w->next) n++;
  return n;
}

int rt_r_can_send(rt_mbox *m) { return m->count < m->cap || count_waiters(m->receivers) > 0; }

int rt_r_can_receive(rt_mbox *m) { return m->count > 0 || count_waiters(m->senders) > 0; }

/* ---- RED files (App. A, C.14) ----------------------------------------------- */

struct rt_r_file {
  FILE *fp;
  int open, access, use, text, sys;  /* access 0 SEQ 1 RANDOM; use 0 INPUT 1 OUTPUT 2 UPDATE */
  size_t esz;
  char *path;
  /* a standard file holds its components each after its length in bytes:
   * off[i] is where component i starts, off[n] the end; cur the position - 1 */
  long *off;
  rt_int n, cap, cur;
};

static void r_scan(rt_r_file *f) {
  f->n = 0;
  f->cur = 0;
  if (!f->off) {
    f->cap = 64;
    f->off = malloc(sizeof(long) * (size_t)f->cap);
  }
  long pos = 0;
  int64_t len;
  fseek(f->fp, 0, SEEK_SET);
  for (;;) {
    if (f->n + 2 > f->cap) f->off = realloc(f->off, sizeof(long) * (size_t)(f->cap *= 2));
    f->off[f->n] = pos;
    if (fread(&len, sizeof len, 1, f->fp) != 1) break;
    pos += (long)sizeof len + (long)len;
    fseek(f->fp, pos, SEEK_SET);
    f->n++;
  }
}

static int r_exc(const char *name) { return rt_exc(name); }

rt_r_file *rt_r_file_new(int access, int use, size_t esz, int text) {
  rt_r_file *f = calloc(1, sizeof *f);
  f->access = access;
  f->use = use;
  f->esz = text ? 1 : esz;
  f->text = text;
  return f;
}

rt_r_file *rt_r_sys_in(void) {
  static rt_r_file f = {NULL, 1, 0, 0, 1, 1, 1, NULL};
  return &f;
}

rt_r_file *rt_r_sys_out(void) {
  static rt_r_file f = {NULL, 1, 0, 1, 1, 2, 1, NULL};
  return &f;
}

int rt_r_file_access(rt_r_file *f) { return f->access; }
int rt_r_file_use(rt_r_file *f) { return f->use; }

/* the host path of a physical file name: no directories, no blanks */
static char *r_path(rstr name) {
  rt_int b = 0, e = name.len;
  while (b < e && name.p[b] == ' ') b++;
  while (e > b && name.p[e - 1] == ' ') e--;
  if (b == e) rt_raise_msg(r_exc("X_FILENAME"), "empty file name");
  for (rt_int i = b; i < e; i++)
    if (name.p[i] == '/' || name.p[i] == '\\' || name.p[i] < ' ' || name.p[i] > '~')
      rt_raise_msg(r_exc("X_FILENAME"), "not a physical file name");
  const char *dir = getenv("RED_FILES");
  if (!dir) dir = ".";
  size_t n = strlen(dir) + (size_t)(e - b) + 2;
  char *p = malloc(n);
  snprintf(p, n, "%s/%.*s", dir, (int)(e - b), (const char *)name.p + b);
  return p;
}

static void r_need_open(rt_r_file *f) {
  if (!f->open) rt_raise_msg(RT_X_FILE, "file not open");
}

void rt_r_open(rt_r_file *f, rstr name, int is_new) {
  if (f->sys) return; /* the teletype is always there */
  if (f->open) rt_raise_msg(RT_X_FILE, "file already open");
  char *p = r_path(name);
  FILE *fp;
  if (is_new) {
    fp = fopen(p, "w+b");
    if (!fp) rt_raise_msg(r_exc("X_FILENAME"), "cannot create the file");
  } else {
    fp = fopen(p, "r+b");
    if (!fp) fp = fopen(p, "rb");
    if (!fp) rt_raise_msg(r_exc("X_NOFILE"), "no such file");
  }
  f->fp = fp;
  f->path = p;
  f->open = 1;
  if (!f->text) r_scan(f);
}

rt_int rt_r_fsize(rt_r_file *f) {
  r_need_open(f);
  if (f->sys) rt_raise_msg(RT_X_FILE, "the teletype has no size");
  if (!f->text) return f->n;
  long here = ftell(f->fp);
  fseek(f->fp, 0, SEEK_END);
  long end = ftell(f->fp);
  fseek(f->fp, here, SEEK_SET);
  return (rt_int)(end / (long)f->esz);
}

rt_int rt_r_fpos(rt_r_file *f) {
  r_need_open(f);
  if (f->sys) rt_raise_msg(RT_X_FILE, "the teletype has no position");
  if (!f->text) return f->cur + 1;
  return (rt_int)(ftell(f->fp) / (long)f->esz) + 1;
}

void rt_r_close(rt_r_file *f, int del) {
  if (f->sys) return;
  r_need_open(f);
  /* the current position is the new end of the file */
  long here = f->text ? ftell(f->fp) : f->off[f->cur];
  fflush(f->fp);
  if (ftruncate(fileno(f->fp), here) != 0) {
  }
  fclose(f->fp);
  if (del) remove(f->path);
  f->fp = NULL;
  f->open = 0;
}

void rt_r_fsetpos(rt_r_file *f, rt_int p) {
  r_need_open(f);
  if (f->sys) rt_raise_msg(RT_X_FILE, "the teletype cannot be positioned");
  if (p < 1 || p > rt_r_fsize(f) + 1) rt_raise(r_exc("X_FILEPOS"));
  if (!f->text) {
    f->cur = p - 1;
    return;
  }
  fseek(f->fp, (long)(p - 1) * (long)f->esz, SEEK_SET);
}

int rt_r_feof(rt_r_file *f) {
  r_need_open(f);
  if (f->sys == 1) return rt_eof();
  if (f->sys) return 1;
  return rt_r_fpos(f) == rt_r_fsize(f) + 1;
}

static void r_can_read(rt_r_file *f) {
  r_need_open(f);
  if (f->use == 1) rt_raise_msg(RT_X_FILE, "an output file is not read");
}

static void r_can_write(rt_r_file *f) {
  r_need_open(f);
  if (f->use == 0) rt_raise_msg(RT_X_FILE, "an input file is not written");
}

void rt_r_fread(rt_r_file *f, void *dst) {
  r_can_read(f);
  if (f->sys) rt_raise_msg(RT_X_FILE, "the teletype holds characters");
  if (rt_r_feof(f)) rt_raise(r_exc("X_EOF"));
  if (fread(dst, f->esz, 1, f->fp) != 1) rt_raise(r_exc("X_EOF"));
  fseek(f->fp, 0, SEEK_CUR);
}

void rt_r_fwrite(rt_r_file *f, const void *src) {
  r_can_write(f);
  if (f->sys) rt_raise_msg(RT_X_FILE, "the teletype holds characters");
  fwrite(src, f->esz, 1, f->fp);
  fseek(f->fp, 0, SEEK_CUR);
}

int rt_r_fgetc(rt_r_file *f) {
  r_can_read(f);
  if (f->sys == 1) {
    int c = rt_getc();
    if (c < 0) rt_raise(r_exc("X_EOF"));
    return c;
  }
  int c = fgetc(f->fp);
  if (c == EOF) rt_raise(r_exc("X_EOF"));
  fseek(f->fp, 0, SEEK_CUR);
  return c;
}

void rt_r_fputc(rt_r_file *f, int c) {
  r_can_write(f);
  if (f->sys == 2) {
    rt_putc(c);
    return;
  }
  fputc(c, f->fp);
  fseek(f->fp, 0, SEEK_CUR);
}

void rt_r_fputs(rt_r_file *f, rstr s) {
  for (rt_int i = 0; i < s.len; i++) rt_r_fputc(f, s.p[i]);
}

/* a line of a text file ends with 'CR 'LF (A.3); a host line may end with
 * 'LF alone */
rt_int rt_r_fsizeln(rt_r_file *f) {
  r_can_read(f);
  if (f->sys == 1) return rt_sizeln();
  long here = ftell(f->fp);
  rt_int n = 0;
  int c;
  while ((c = fgetc(f->fp)) != EOF && c != '\n') n++;
  if (n > 0 && c == '\n') {
    fseek(f->fp, here + n - 1, SEEK_SET);
    if (fgetc(f->fp) == '\r') n--;
  }
  fseek(f->fp, here, SEEK_SET);
  return n;
}

void rt_r_freadln(rt_r_file *f, rstr *dst) {
  if (f->sys == 1) {
    rt_r_readln(dst);
    return;
  }
  r_can_read(f);
  if (rt_r_feof(f)) rt_raise(r_exc("X_EOF"));
  rt_int n = rt_r_fsizeln(f);
  long here = ftell(f->fp);
  int c;
  rt_int k = 0;
  while ((c = fgetc(f->fp)) != EOF && c != '\n') k++;
  if (c != '\n') {
    fseek(f->fp, here, SEEK_SET);
    rt_raise_msg(r_exc("X_LN"), "no end of line");
  }
  if (n != dst->len) {
    fseek(f->fp, here, SEEK_SET);
    rt_raise_msg(r_exc("X_LN"), "line of another length");
  }
  fseek(f->fp, here, SEEK_SET);
  if (n && fread(dst->p, 1, (size_t)n, f->fp) != (size_t)n) rt_raise(r_exc("X_LN"));
  while ((c = fgetc(f->fp)) != EOF && c != '\n') {
  }
  fseek(f->fp, 0, SEEK_CUR);
}

void rt_r_fwriteln(rt_r_file *f, rstr s) {
  if (f->sys == 2) {
    rt_putln(s);
    return;
  }
  r_can_write(f);
  fwrite(s.p, 1, (size_t)s.len, f->fp);
  fputs("\r\n", f->fp);
  fseek(f->fp, 0, SEEK_CUR);
}

void rt_r_readln(rstr *dst) {
  if (rt_eof()) rt_raise(r_exc("X_EOF"));
  if (rt_sizeln() != dst->len) rt_raise_msg(r_exc("X_LN"), "line of another length");
  rstr line = rt_getln();
  if (line.len) memcpy(dst->p, line.p, (size_t)line.len);
}

void rt_r_rename(rstr from, rstr to) {
  char *a = r_path(from), *b = r_path(to);
  if (rename(a, b) != 0) rt_raise_msg(r_exc("X_NOFILE"), "no such file");
}

/* ---- conversions (A.3) ----------------------------------------------------- */

/* an optional minus sign, n.nnn with prec digits, E, the exponent's sign and
 * its digits */
rstr rt_r_str_of_float(double v, rt_int prec) {
  char b[64], m[64];
  if (prec < 1) prec = 1;
  if (prec > 17) prec = 17;
  snprintf(b, sizeof b, "%.*E", (int)prec - 1, v);
  char *e = strchr(b, 'E');
  int ex = atoi(e + 1);
  *e = 0;
  int n = snprintf(m, sizeof m, "%sE%c%d", b, ex < 0 ? '-' : '+', ex < 0 ? -ex : ex);
  return rt_str_copy(rt_str(m, n));
}

/* n characters left of the point, zeros kept, m right; X_FORMAT if the first
 * significant digit would be lost */
rstr rt_r_format(double v, rt_int n, rt_int m) {
  char b[400];
  double a = fabs(v);
  double r = floor(a * pow(10.0, (double)m) + 0.5) / pow(10.0, (double)m);
  if (r >= pow(10.0, (double)n)) rt_raise(r_exc("X_FORMAT"));
  int len = snprintf(b, sizeof b, "%s%0*.*f", v < 0 ? "-" : "", (int)(n + m + (m > 0)), (int)m, r);
  return rt_str_copy(rt_str(b, len));
}

/* with an exponent of o digits: the first significant digit leftmost */
rstr rt_r_format_e(double v, rt_int n, rt_int m, rt_int o) {
  char b[400];
  double a = fabs(v);
  int ex = 0;
  if (a != 0.0) {
    ex = (int)floor(log10(a)) - (int)(n - 1);
    a = a / pow(10.0, (double)ex);
    double r = floor(a * pow(10.0, (double)m) + 0.5) / pow(10.0, (double)m);
    if (r >= pow(10.0, (double)n)) {
      ex++;
      a = a / 10.0;
    }
  }
  int ae = ex < 0 ? -ex : ex;
  if (o < 1 || ae >= pow(10.0, (double)o)) rt_raise(r_exc("X_FORMAT"));
  int len = snprintf(b, sizeof b, "%s%0*.*fE%c%0*d", v < 0 ? "-" : "", (int)(n + m + (m > 0)), (int)m, a,
                     ex < 0 ? '-' : '+', (int)o, ae);
  return rt_str_copy(rt_str(b, len));
}

rstr rt_r_str_pad(rstr s, rt_int len) {
  if (s.len > len) rt_raise_msg(RT_X_SUBTYPE, "the string is longer than its target");
  rstr r = rt_str_new(len);
  if (s.len) memcpy(r.p + (len - s.len), s.p, (size_t)s.len);
  return r;
}

rstr rt_r_enum_image(const char *const *names, rt_int v) {
  char b[256];
  int n = snprintf(b, sizeof b, "'%s", names[v]);
  return rt_str_copy(rt_str(b, n));
}

static rstr r_trim(rstr s) {
  rt_int b = 0, e = s.len;
  while (b < e && s.p[b] == ' ') b++;
  while (e > b && s.p[e - 1] == ' ') e--;
  rstr r = {e - b, s.p + b};
  return r;
}

static int r_same_word(rstr s, const char *w) {
  size_t n = strlen(w);
  if ((size_t)s.len != n) return 0;
  for (size_t i = 0; i < n; i++) {
    int c = s.p[i];
    if (c >= 'a' && c <= 'z') c -= 32;
    if (c != w[i]) return 0;
  }
  return 1;
}

rt_int rt_r_enum_of_str(const char *const *names, rt_int n, rstr s) {
  rstr t = r_trim(s);
  if (t.len > 0 && t.p[0] == '\'') {
    t.p++;
    t.len--;
  }
  for (rt_int i = 0; i < n; i++)
    if (r_same_word(t, names[i])) return i;
  rt_raise_msg(RT_X_RANGE, "not a literal of the type");
}

int rt_r_bool_of_str(rstr s) {
  rstr t = r_trim(s);
  if (r_same_word(t, "TRUE")) return 1;
  if (r_same_word(t, "FALSE")) return 0;
  rt_raise_msg(RT_X_RANGE, "not a BOOL literal");
}

double rt_r_float_of_str(rstr s) {
  rstr t = r_trim(s);
  char b[128];
  if (t.len <= 0 || t.len >= (rt_int)sizeof b) rt_raise_msg(RT_X_RANGE, "not a FLOAT literal");
  memcpy(b, t.p, (size_t)t.len);
  b[t.len] = 0;
  /* sign, digits, a point with digits on both sides, an optional exponent */
  const char *p = b;
  if (*p == '+' || *p == '-') p++;
  const char *d = p;
  while (*p >= '0' && *p <= '9') p++;
  int ok = p > d && *p == '.';
  if (ok) {
    p++;
    d = p;
    while (*p >= '0' && *p <= '9') p++;
    ok = p > d;
  }
  if (ok && (*p == 'E' || *p == 'e')) {
    p++;
    if (*p == '+' || *p == '-') p++;
    d = p;
    while (*p >= '0' && *p <= '9') p++;
    ok = p > d;
  }
  if (!ok || *p) rt_raise_msg(RT_X_RANGE, "not a FLOAT literal");
  return rt_r_fovf(strtod(b, NULL));
}

/* ---- the simulated memory (RED 12.3) ---------------------------------------- */

#define R_MEM_BYTES (1 << 20)
static unsigned char r_mem[R_MEM_BYTES];

static void r_mem_check(rt_int bitaddr, rt_int nbits) {
  if (bitaddr < 0 || nbits < 0 || bitaddr + nbits > (rt_int)R_MEM_BYTES * 8)
    rt_raise_msg(RT_X_RANGE, "outside the memory of the simulated machine");
}

void *rt_r_mem_at(rt_int bitaddr, size_t size) {
  r_mem_check(bitaddr, (rt_int)size * 8);
  if (bitaddr % 8) rt_raise_msg(RT_X_RANGE, "a variable without a representation starts at a byte");
  return r_mem + bitaddr / 8;
}

static void r_bit_put(rt_int b, int v) {
  unsigned char m = (unsigned char)(0x80 >> (b % 8));
  if (v) r_mem[b / 8] |= m;
  else r_mem[b / 8] &= (unsigned char)~m;
}

static int r_bit_get(rt_int b) { return (r_mem[b / 8] >> (7 - b % 8)) & 1; }

/* nbits of v, high-order first */
void rt_r_mem_put(rt_int bitaddr, rt_int nbits, rt_int v) {
  r_mem_check(bitaddr, nbits);
  uint64_t u = (uint64_t)v;
  for (rt_int i = 0; i < nbits; i++) r_bit_put(bitaddr + i, nbits - 1 - i < 64 ? (int)((u >> (nbits - 1 - i)) & 1) : 0);
}

rt_int rt_r_mem_get(rt_int bitaddr, rt_int nbits, int is_signed) {
  r_mem_check(bitaddr, nbits);
  uint64_t u = 0;
  for (rt_int i = 0; i < nbits; i++) u = (u << 1) | (uint64_t)r_bit_get(bitaddr + i);
  if (is_signed && nbits > 0 && nbits < 64 && (u >> (nbits - 1)) & 1) u |= ~(uint64_t)0 << nbits;
  return (rt_int)u;
}

void rt_r_mem_putf(rt_int bitaddr, rt_int nbits, double v) {
  if (nbits >= 64) {
    uint64_t u;
    memcpy(&u, &v, sizeof u);
    rt_r_mem_put(bitaddr, 64, (rt_int)u);
  } else if (nbits >= 32) {
    float f = (float)v;
    uint32_t u;
    memcpy(&u, &f, sizeof u);
    rt_r_mem_put(bitaddr, 32, (rt_int)u);
  } else {
    rt_raise_msg(RT_X_RANGE, "a FLOAT needs 32 or 64 bits");
  }
}

double rt_r_mem_getf(rt_int bitaddr, rt_int nbits) {
  if (nbits >= 64) {
    uint64_t u = (uint64_t)rt_r_mem_get(bitaddr, 64, 0);
    double d;
    memcpy(&d, &u, sizeof d);
    return d;
  }
  if (nbits >= 32) {
    uint32_t u = (uint32_t)rt_r_mem_get(bitaddr, 32, 0);
    float f;
    memcpy(&f, &u, sizeof f);
    return f;
  }
  rt_raise_msg(RT_X_RANGE, "a FLOAT needs 32 or 64 bits");
}

rt_int rt_r_fits(rt_int v, rt_int nbits, int is_signed) {
  if (nbits >= 64) return v;
  if (is_signed ? (v < -((rt_int)1 << (nbits - 1)) || v >= ((rt_int)1 << (nbits - 1)))
                : (v < 0 || v >= ((rt_int)1 << nbits)))
    rt_raise_msg(RT_X_RANGE, "the value does not fit its representation");
  return v;
}

/* LOW_IO device 3 reads, device 4 writes the byte of the simulated memory at
 * the command's address */
void rt_r_low_io(rt_int device, rt_int command, rt_int *data) {
  if (device == 3) {
    *data = *(unsigned char *)rt_r_mem_at(command * 8, 1);
    return;
  }
  if (device == 4) {
    *(unsigned char *)rt_r_mem_at(command * 8, 1) = (unsigned char)*data;
    return;
  }
  rt_low_io(device, command, data);
}

static int x_maxrange(void) { return rt_exc("X_MAXRANGE"); }

void rt_r_maxprec(rt_int prec) {
  if (prec < 1 || prec > 15) rt_raise_msg(x_maxrange(), "FLOAT precision");
}

void rt_r_maxrange_f(double lo, double hi) {
  if (isinf(lo) || isinf(hi) || isnan(lo) || isnan(hi)) rt_raise(x_maxrange());
}

void rt_r_maxrange_i(rt_int lo, rt_int hi) {
  if (lo < RT_IMIN || hi < RT_IMIN) rt_raise(x_maxrange());
}

rstr rt_r_str_undef(rt_int len) {
  rstr r = rt_str_new(len);
  if (r.len) memset(r.p, 0xFF, (size_t)r.len);
  return r;
}

rstr rt_r_schk(rstr s) {
  if (s.len && memchr(s.p, 0xFF, (size_t)s.len)) rt_raise(RT_X_INIT);
  return s;
}

/* ---- sparse INT sets (RED C.9) -------------------------------------------- */

rt_r_iset rt_r_iset_empty(void) {
  rt_r_iset s = {0, 0, NULL};
  return s;
}

static rt_int r_find(const rt_r_iset *s, rt_int v) { /* index of the first element >= v */
  rt_int lo = 0, hi = s->n;
  while (lo < hi) {
    rt_int m = lo + (hi - lo) / 2;
    if (s->e[m] < v) lo = m + 1;
    else hi = m;
  }
  return lo;
}

static int r_has(const rt_r_iset *s, rt_int v) {
  rt_int i = r_find(s, v);
  return i < s->n && s->e[i] == v;
}

/* the elements in a (ina), b (inb) by the rule keep(ina, inb) */
static rt_r_iset r_merge(rt_r_iset a, rt_r_iset b, int op) {
  rt_r_iset r = {0, 0, rt_alloc(sizeof(rt_int) * (size_t)(a.n + b.n + 1))};
  rt_int i = 0, j = 0;
  while (i < a.n || j < b.n) {
    rt_int v;
    int x = 0, y = 0;
    if (j >= b.n || (i < a.n && a.e[i] < b.e[j])) {
      v = a.e[i++];
      x = 1;
    } else if (i >= a.n || b.e[j] < a.e[i]) {
      v = b.e[j++];
      y = 1;
    } else {
      v = a.e[i++];
      j++;
      x = y = 1;
    }
    int keep = op == 0 ? (x || y) : op == 1 ? (x && y) : op == 2 ? (x && !y) : (x != y);
    if (keep) r.e[r.n++] = v;
  }
  return r;
}

rt_r_iset rt_r_iset_add(rt_r_iset s, rt_int v) {
  rt_r_iset one = {0, 1, NULL};
  one.e = rt_alloc(sizeof(rt_int));
  one.e[0] = v;
  if (s.neg) {
    rt_r_iset r = r_merge(s, one, 2); /* it lacks one element less */
    r.neg = 1;
    return r;
  }
  return r_merge(s, one, 0);
}

int rt_r_iset_in(rt_int v, rt_r_iset s) { return s.neg ^ r_has(&s, v); }

rt_r_iset rt_r_iset_union(rt_r_iset a, rt_r_iset b) {
  rt_r_iset r;
  if (!a.neg && !b.neg) return r_merge(a, b, 0);
  if (a.neg && b.neg) r = r_merge(a, b, 1);
  else if (a.neg) r = r_merge(a, b, 2);
  else r = r_merge(b, a, 2);
  r.neg = 1;
  return r;
}

rt_r_iset rt_r_iset_inter(rt_r_iset a, rt_r_iset b) {
  rt_r_iset r;
  if (a.neg && b.neg) {
    r = r_merge(a, b, 0);
    r.neg = 1;
    return r;
  }
  if (!a.neg && !b.neg) return r_merge(a, b, 1);
  if (b.neg) return r_merge(a, b, 2);
  return r_merge(b, a, 2);
}

rt_r_iset rt_r_iset_xor(rt_r_iset a, rt_r_iset b) {
  rt_r_iset r = r_merge(a, b, 3);
  r.neg = a.neg ^ b.neg;
  return r;
}

rt_r_iset rt_r_iset_compl(rt_r_iset a) {
  a.neg = !a.neg;
  return a;
}

int rt_r_iset_eq(rt_r_iset a, rt_r_iset b) {
  if (a.neg != b.neg || a.n != b.n) return 0;
  for (rt_int i = 0; i < a.n; i++)
    if (a.e[i] != b.e[i]) return 0;
  return 1;
}

int rt_r_iset_le(rt_r_iset a, rt_r_iset b) {
  if (!a.neg && !b.neg) return r_merge(a, b, 2).n == 0;
  if (a.neg && b.neg) return r_merge(b, a, 2).n == 0;
  if (!a.neg) return r_merge(a, b, 1).n == 0;
  return 0; /* a set lacking finitely many INTs is in no finite set */
}

int rt_r_iset_lt(rt_r_iset a, rt_r_iset b) { return rt_r_iset_le(a, b) && !rt_r_iset_eq(a, b); }

/* ---- components of standard files, kept deeply (RED A.2, C.14) --------------- */

void rt_r_buf_put(rt_r_buf *b, const void *p, size_t n) {
  if (b->n + n > b->cap) {
    b->cap = (b->n + n) * 2 + 64;
    b->p = realloc(b->p, b->cap);
  }
  if (n) memcpy(b->p + b->n, p, n);
  b->n += n;
}

void rt_r_buf_get(const unsigned char **q, void *p, size_t n) {
  if (n) memcpy(p, *q, n);
  *q += n;
}

void rt_r_buf_yset(rt_r_buf *b, yset s) {
  rt_r_buf_put(b, &s.lo, sizeof s.lo);
  rt_r_buf_put(b, &s.hi, sizeof s.hi);
  for (rt_int e = s.lo; e <= s.hi; e++) {
    unsigned char in = (unsigned char)y_set_in(e, s);
    rt_r_buf_put(b, &in, 1);
  }
}

yset rt_r_buf_get_yset(const unsigned char **q) {
  rt_int lo, hi;
  rt_r_buf_get(q, &lo, sizeof lo);
  rt_r_buf_get(q, &hi, sizeof hi);
  yset s = y_set_new(lo, hi);
  for (rt_int e = lo; e <= hi; e++) {
    unsigned char in;
    rt_r_buf_get(q, &in, 1);
    if (in) s = y_set_add(s, e);
  }
  return s;
}

/* WRITE: at the end the file grows; inside it the component at the position
 * is replaced, the ones after it moved if the sizes differ */
void rt_r_fwrite_rec(rt_r_file *f, const unsigned char *p, size_t n) {
  r_can_write(f);
  if (f->sys || f->text) rt_raise_msg(RT_X_FILE, "a text file holds characters");
  int64_t len = (int64_t)n;
  long at = f->off[f->cur];
  long old_end = f->off[f->n];
  long next = f->cur < f->n ? f->off[f->cur + 1] : at;
  size_t tail_n = (size_t)(old_end - next);
  unsigned char *tail = malloc(tail_n + 1);
  fseek(f->fp, next, SEEK_SET);
  if (tail_n && fread(tail, 1, tail_n, f->fp) != tail_n) rt_raise_msg(RT_X_FILE, "the file is damaged");
  fseek(f->fp, at, SEEK_SET);
  fwrite(&len, sizeof len, 1, f->fp);
  fwrite(p, 1, n, f->fp);
  fwrite(tail, 1, tail_n, f->fp);
  fflush(f->fp);
  free(tail);
  long delta = (long)(sizeof len + n) - (next - at);
  if (f->cur == f->n) {
    if (f->n + 2 > f->cap) f->off = realloc(f->off, sizeof(long) * (size_t)(f->cap *= 2));
    f->n++;
    f->off[f->n] = f->off[f->n - 1];
  }
  for (rt_int i = f->cur + 1; i <= f->n; i++) f->off[i] += delta;
  if (delta < 0 && ftruncate(fileno(f->fp), f->off[f->n]) != 0) {
  }
  f->cur++;
}

const unsigned char *rt_r_fread_rec(rt_r_file *f) {
  r_can_read(f);
  if (f->sys || f->text) rt_raise_msg(RT_X_FILE, "a text file holds characters");
  if (f->cur >= f->n) rt_raise(r_exc("X_EOF"));
  int64_t len;
  fseek(f->fp, f->off[f->cur], SEEK_SET);
  if (fread(&len, sizeof len, 1, f->fp) != 1) rt_raise_msg(RT_X_FILE, "the file is damaged");
  unsigned char *p = rt_alloc((size_t)len + 1);
  if (len && fread(p, 1, (size_t)len, f->fp) != (size_t)len) rt_raise_msg(RT_X_FILE, "the file is damaged");
  f->cur++;
  return p;
}

/* ---- BLUE -pdp11: the PDP-11's D floating point format, computed exactly ----
 * A value is m * 2**e with m = 0 or 2**55 <= |m| < 2**56: the 56-bit mantissa
 * of D (hidden bit included). Results are rounded to the nearest (ties to even)
 * or truncated to 56 bits; the exponent range is that of D: 2**-128 <= |x| <
 * 2**127 (OVERFLOW, UNDERFLOW). */
static rt_b_d b_dnorm(__int128 x, int64_t e, int trunc, int exc_over) {
  rt_b_d r = {0, 0};
  if (x == 0) return r;
  int neg = x < 0;
  unsigned __int128 mag = neg ? (unsigned __int128)(-x) : (unsigned __int128)x;
  int len = 0;
  for (unsigned __int128 t = mag; t; t >>= 1) len++;
  if (len > 56) {
    int k = len - 56;
    unsigned __int128 rem = mag & ((((unsigned __int128)1) << k) - 1);
    unsigned __int128 q = mag >> k;
    if (!trunc) {
      unsigned __int128 half = ((unsigned __int128)1) << (k - 1);
      if (rem > half || (rem == half && (q & 1))) q++;
    }
    if (q == ((unsigned __int128)1 << 56)) {
      q >>= 1;
      k++;
    }
    mag = q;
    e += k;
  } else if (len < 56) {
    mag <<= 56 - len;
    e -= 56 - len;
  }
  if (e + 56 > 127) rt_raise(exc_over);
  if (e + 56 < -127) rt_raise(RT_B_UNDERFLOW);
  r.m = neg ? -(int64_t)mag : (int64_t)mag;
  r.e = (int32_t)e;
  return r;
}

rt_b_d rt_b_dop(int op, rt_b_d a, rt_b_d b, int trunc) {
  if (op == '-') {
    b.m = -b.m;
    op = '+';
  }
  if (op == '+') {
    if (a.m == 0) return b;
    if (b.m == 0) return a;
    if (b.e > a.e) {
      rt_b_d t = a;
      a = b;
      b = t;
    }
    __int128 x = (__int128)a.m << 62;
    int64_t ea = (int64_t)a.e - 62;
    int64_t sh = (int64_t)b.e - ea;           /* <= 62 */
    __int128 y;
    if (sh >= 0) y = (__int128)b.m << sh;
    else if (sh > -120) {
      __int128 bm = b.m;
      int neg = bm < 0;
      unsigned __int128 mag = neg ? (unsigned __int128)(-bm) : (unsigned __int128)bm;
      unsigned __int128 q = mag >> -sh;
      if ((q << -sh) != mag) q |= 1;          /* sticky */
      y = neg ? -(__int128)q : (__int128)q;
    } else
      y = b.m < 0 ? -1 : 1;
    return b_dnorm(x + y, ea, trunc, RT_X_OVERFLOW);
  }
  if (op == '*') {
    if (a.m == 0 || b.m == 0) return (rt_b_d){0, 0};
    return b_dnorm((__int128)a.m * b.m, (int64_t)a.e + b.e, trunc, RT_X_OVERFLOW);
  }
  if (b.m == 0) rt_raise(RT_X_ZERO_DIVIDE);
  if (a.m == 0) return (rt_b_d){0, 0};
  int neg = (a.m < 0) != (b.m < 0);
  unsigned __int128 n = (unsigned __int128)(a.m < 0 ? -a.m : a.m) << 64;
  unsigned __int128 d = (unsigned __int128)(b.m < 0 ? -b.m : b.m);
  unsigned __int128 q = n / d;
  if (n % d) q |= 1;                          /* sticky */
  __int128 s = (__int128)q;
  return b_dnorm(neg ? -s : s, (int64_t)a.e - 64 - b.e, trunc, RT_X_OVERFLOW);
}

rt_b_d rt_b_dneg(rt_b_d a) {
  a.m = -a.m;
  return a;
}

rt_b_d rt_b_dabs(rt_b_d a) {
  if (a.m < 0) a.m = -a.m;
  return a;
}

rt_int rt_b_dcmp(rt_b_d a, rt_b_d b) {
  int sa = (a.m > 0) - (a.m < 0), sb = (b.m > 0) - (b.m < 0);
  if (sa != sb) return sa < sb ? -1 : 1;
  if (sa == 0) return 0;
  int c;
  if (a.e != b.e) c = a.e < b.e ? -1 : 1;
  else {
    int64_t ma = a.m < 0 ? -a.m : a.m, mb = b.m < 0 ? -b.m : b.m;
    c = ma < mb ? -1 : ma > mb;
  }
  return sa > 0 ? c : -c;
}

rt_b_d rt_b_d_of_double(double x) {
  if (x == 0) return (rt_b_d){0, 0};
  int ex;
  double f = frexp(x, &ex);                   /* exact: 53 bits */
  return b_dnorm((__int128)(int64_t)ldexp(f, 56), (int64_t)ex - 56, 0, RT_X_OVERFLOW);
}

/* a double as D without a range check: every double of F range is exact in D */
static rt_b_d b_d_raw(double x) {
  if (x == 0) return (rt_b_d){0, 0};
  int ex;
  double f = frexp(x, &ex);
  return (rt_b_d){(int64_t)ldexp(f, 56), (int32_t)(ex - 56)};
}

double rt_b_double_of_d(rt_b_d d) { return ldexp((double)d.m, d.e); }

/* a fixed point value v * 2**-scale, rounded or truncated: TO_FLOAT (3.3.6.1) */
rt_b_d rt_b_d_of_fix(rt_int v, rt_int scale, int trunc) {
  return b_dnorm(v, -(int64_t)scale, trunc, RT_X_OVERFLOW);
}

/* the value at a scale, rounded or truncated: TO_FIXED (3.2.6.1) */
rt_int rt_b_fix_of_d(rt_b_d d, rt_int scale, int rounded) {
  if (d.m == 0) return 0;
  int64_t sh = (int64_t)d.e + scale;
  int neg = d.m < 0;
  unsigned __int128 mag = (unsigned __int128)(neg ? -d.m : d.m);
  if (sh >= 0) {
    if (sh > 8) rt_raise(RT_X_OVERFLOW);
    mag <<= sh;
  } else {
    int64_t k = -sh;
    if (k > 120) mag = 0;
    else {
      unsigned __int128 rem = mag & ((((unsigned __int128)1) << k) - 1), q = mag >> k;
      if (rounded) {
        unsigned __int128 half = ((unsigned __int128)1) << (k - 1);
        if (rem > half || (rem == half && (q & 1))) q++;
      }
      mag = q;
    }
  }
  if (mag > ((unsigned __int128)1 << 63) - (neg ? 0 : 1)) rt_raise(RT_X_OVERFLOW);
  return neg ? -(rt_int)mag : (rt_int)mag;
}

/* the digits of a decimal number, its power of ten: [+-]digits[.digits][E[+-]digits] */
static int b_dec(const char *s, char *dig, int *nd, long *x, int *neg) {
  int frac = 0, point = 0;
  long e = 0;
  *nd = 0;
  *neg = 0;
  if (*s == '+' || *s == '-') *neg = *s++ == '-';
  for (; *s && *s != 'E' && *s != 'e'; s++) {
    if (*s == '.') {
      if (point) return 0;
      point = 1;
      continue;
    }
    if (*s < '0' || *s > '9') return 0;
    if (*nd || *s != '0') dig[(*nd)++] = *s;
    if (point) frac++;
  }
  if (*s) e = strtol(s + 1, NULL, 10);
  if (e > 100000) e = 100000;
  if (e < -100000) e = -100000;
  *x = e - frac;
  return 1;
}

/* dig * 10**x as a D value, rounded to the nearest or truncated */
static rt_b_d b_d_of_dec(const char *dig, int nd, long x, int neg, int trunc) {
  if (nd == 0) return (rt_b_d){0, 0};
  long s = 55 - (long)floor((double)(nd - 1 + x) * 3.321928094887362);
  int ovf;
  unsigned __int128 lo = (unsigned __int128)1 << 55, hi = (unsigned __int128)1 << 56, q;
  for (int guard = 0; guard < 400; guard++) {
    if (s > 4000) rt_raise(RT_B_UNDERFLOW);
    if (s < -4000) rt_raise(RT_X_OVERFLOW);
    q = b_exact(dig, nd, x, s, 0, &ovf);
    if (ovf || q >= hi) s--;
    else if (q < lo) s++;
    else break;
  }
  q = b_exact(dig, nd, x, s, !trunc, &ovf);
  if (q >= hi) {
    q >>= 1;
    s--;
  }
  __int128 v = (__int128)q;
  return b_dnorm(neg ? -v : v, -(int64_t)s, 1, RT_X_OVERFLOW);
}

rt_b_d rt_b_dlit(const char *s) {
  char *dig = rt_alloc(strlen(s) + 1);
  int nd, neg;
  long x;
  if (!b_dec(s, dig, &nd, &x, &neg)) rt_raise(RT_B_CONVERSION);
  return b_d_of_dec(dig, nd, x, neg, 0);
}

/* TO_FLOAT of a character string, rounded or truncated (3.3.6.1) */
rt_b_d rt_b_d_of_str(rstr t, int trunc) {
  char *c = rt_alloc((size_t)t.len + 1), *dig = rt_alloc((size_t)t.len + 1);
  rt_int i = 0, n = 0;
  while (i < t.len && t.p[i] == ' ') i++;
  while (i < t.len && t.p[i] != ' ') c[n++] = (char)t.p[i++];
  c[n] = 0;
  int nd, neg;
  long x;
  if (n == 0 || !b_dec(c, dig, &nd, &x, &neg)) rt_raise(RT_B_CONVERSION);
  return b_d_of_dec(dig, nd, x, neg, trunc);
}

/* TO_CHAR: prec significant digits, exactly rounded, written as %G writes them */
rstr rt_b_d_image(rt_b_d d, rt_int prec) {
  char b[96];
  int n = 0;
  if (prec < 1) prec = 1;
  if (prec > 20) prec = 20;
  if (d.m == 0) return rt_str_copy(rt_str("0.", 2));
  uint64_t mag = (uint64_t)(d.m < 0 ? -d.m : d.m);
  char md[32];
  int mn = snprintf(md, sizeof md, "%llu", (unsigned long long)mag);
  long e10 = (long)floor(log10((double)mag) + d.e * 0.30102999566398120);
  unsigned __int128 q = 0, p10 = 1, p11;
  for (int i = 0; i < prec - 1; i++) p10 *= 10;
  p11 = p10 * 10;
  for (int guard = 0; guard < 8; guard++) {
    int ovf;
    q = b_exact(md, mn, prec - 1 - e10, d.e, 1, &ovf);
    if (ovf || q >= p11) e10++;
    else if (q < p10) e10--;
    else break;
  }
  char dg[48];
  int dn = 0;
  {
    char tmp[48];
    int tn = 0;
    unsigned __int128 t = q;
    do {
      tmp[tn++] = (char)('0' + (int)(t % 10));
      t /= 10;
    } while (t);
    while (tn) dg[dn++] = tmp[--tn];
  }
  while (dn > 1 && dg[dn - 1] == '0') dn--;    /* %G drops trailing zeros */
  if (d.m < 0) b[n++] = '-';
  if (e10 < -4 || e10 >= prec) {
    b[n++] = dg[0];
    if (dn > 1) {
      b[n++] = '.';
      for (int i = 1; i < dn; i++) b[n++] = dg[i];
    }
    n += snprintf(b + n, sizeof b - (size_t)n, "E%c%02ld", e10 < 0 ? '-' : '+', e10 < 0 ? -e10 : e10);
  } else if (e10 >= 0) {
    for (int i = 0; i <= e10; i++) b[n++] = i < dn ? dg[i] : '0';
    if (dn > e10 + 1) {
      b[n++] = '.';
      for (int i = (int)e10 + 1; i < dn; i++) b[n++] = dg[i];
    }
  } else {
    b[n++] = '0';
    b[n++] = '.';
    for (long i = 0; i < -e10 - 1; i++) b[n++] = '0';
    for (int i = 0; i < dn; i++) b[n++] = dg[i];
  }
  if (!memchr(b, '.', (size_t)n) && !memchr(b, 'E', (size_t)n)) b[n++] = '.';
  return rt_str_copy(rt_str(b, n));
}

/* the D format of the PDP-11: sign, an 8-bit exponent in excess 128 and 55 bits of
 * fraction, the leading 1 hidden (TO_BIT, [FLOAT (p)]$$, 3.3.3) */
rstr rt_b_bits_of_d(rt_b_d d) {
  rstr r = rt_str_new(64);
  uint64_t u = 0;
  if (d.m != 0) {
    uint64_t mag = (uint64_t)(d.m < 0 ? -d.m : d.m);
    uint64_t ex = (uint64_t)(d.e + 56 + 128);
    u = ((uint64_t)(d.m < 0) << 63) | (ex << 55) | (mag & (((uint64_t)1 << 55) - 1));
  }
  for (int i = 63; i >= 0; i--, u >>= 1) r.p[i] = (unsigned char)('0' + (int)(u & 1));
  return r;
}

rt_b_d rt_b_d_of_bits(rstr b) {
  if (b.len != 64) rt_raise(RT_B_INVALID_SIZE);
  uint64_t u = 0;
  for (int i = 0; i < 64; i++) u = u * 2 + (b.p[i] == '1');
  uint64_t ex = (u >> 55) & 255;
  if (ex == 0) return (rt_b_d){0, 0};
  int64_t mag = (int64_t)((u & (((uint64_t)1 << 55) - 1)) | ((uint64_t)1 << 55));
  return (rt_b_d){(u >> 63) ? -mag : mag, (int32_t)((int64_t)ex - 128 - 56)};
}

/* FLOAT_MAX, EPSILON and the neighbours of a value (an open range bound) */
rt_b_d rt_b_dmax(void) { return (rt_b_d){((int64_t)1 << 56) - 1, 127 - 56}; }
rt_b_d rt_b_deps(void) { return (rt_b_d){(int64_t)1 << 55, -110}; }   /* 2**-55 */
rt_b_d rt_b_dnext(rt_b_d d, int up) {
  if (d.m == 0) return (rt_b_d){up ? ((int64_t)1 << 55) : -((int64_t)1 << 55), -128 - 55};
  return b_dnorm((__int128)d.m * 2 + (up ? 1 : -1) * 2, (int64_t)d.e - 1, 1, RT_X_OVERFLOW);
}

/* a magnitude m * 2**e (m > 0) rounded to nb bits, to the nearest, ties to even */
static unsigned __int128 b_round_to(unsigned __int128 m, int64_t *e, int nb) {
  int len = 0;
  for (unsigned __int128 t = m; t; t >>= 1) len++;
  if (len > nb) {
    int k = len - nb;
    unsigned __int128 rem = m & ((((unsigned __int128)1) << k) - 1), q = m >> k;
    unsigned __int128 half = ((unsigned __int128)1) << (k - 1);
    if (rem > half || (rem == half && (q & 1))) q++;
    if (q >> nb) {
      q >>= 1;
      k++;
    }
    *e += k;
    return q;
  }
  *e -= nb - len;
  return m << (nb - len);
}

/* the exact result of a D operation as sign, magnitude and exponent, raising nothing:
 * the machine-dependent operators (3.3.4.5); a quotient to 114 bits and a sticky bit */
static void b_dexact(int op, rt_b_d a, rt_b_d b, int *neg, unsigned __int128 *mag, int64_t *e) {
  *mag = 0;
  *e = 0;
  *neg = 0;
  if (op == '-') {
    b.m = -b.m;
    op = '+';
  }
  if (op == '*') {
    __int128 p = (__int128)a.m * b.m;
    *neg = p < 0;
    *mag = (unsigned __int128)(p < 0 ? -p : p);
    *e = (int64_t)a.e + b.e;
    return;
  }
  if (op == '/') {
    if (a.m == 0 || b.m == 0) return;          /* no quotient: zeros */
    *neg = (a.m < 0) != (b.m < 0);
    unsigned __int128 r = (unsigned __int128)(a.m < 0 ? -a.m : a.m);
    unsigned __int128 d = (unsigned __int128)(b.m < 0 ? -b.m : b.m), q = 0;
    for (int i = 0; i < 115; i++) {           /* 114 bits by long division */
      q <<= 1;
      if (r >= d) {
        r -= d;
        q |= 1;
      }
      r <<= 1;
    }
    *mag = q << 1 | (r != 0);                   /* and a sticky bit */
    *e = (int64_t)a.e - b.e - 115;
    return;
  }
  if (a.m == 0 || b.m == 0) {
    rt_b_d c = a.m == 0 ? b : a;
    *neg = c.m < 0;
    *mag = (unsigned __int128)(c.m < 0 ? -c.m : c.m);
    *e = c.e;
    return;
  }
  if (b.e > a.e) {
    rt_b_d t = a;
    a = b;
    b = t;
  }
  int64_t d = (int64_t)a.e - b.e;
  if (d > 70) {                               /* b is below the last bit kept */
    *neg = a.m < 0;
    *mag = (unsigned __int128)(a.m < 0 ? -a.m : a.m);
    *e = a.e;
    return;
  }
  __int128 x = ((__int128)a.m << d) + b.m;
  *neg = x < 0;
  *mag = (unsigned __int128)(x < 0 ? -x : x);
  *e = b.e;
}

/* !op! of D values: sign, a 15-bit exponent (excess 16384) and 112 bits of the
 * exact result, the leading 1 included: two D words (3.3.4.5) */
rstr rt_b_dmd(int op, rt_b_d a, rt_b_d b) {
  rstr r = rt_str_new(128);
  memset(r.p, '0', 128);
  int neg;
  unsigned __int128 mag;
  int64_t e;
  b_dexact(op, a, b, &neg, &mag, &e);
  if (mag == 0) return r;
  mag = b_round_to(mag, &e, 112);
  uint64_t ex = (uint64_t)(e + 112 + 16384) & 0x7fff;
  r.p[0] = (unsigned char)('0' + neg);
  for (int i = 0; i < 15; i++) r.p[1 + i] = (unsigned char)('0' + (int)((ex >> (14 - i)) & 1));
  for (int i = 0; i < 112; i++) r.p[16 + i] = (unsigned char)('0' + (int)((mag >> (111 - i)) & 1));
  return r;
}

/* !op! of F values (-pdp11): the result in D, as the FP11 leaves it after OVERFLOW
 * or UNDERFLOW: the exponent kept modulo 256 (3.3.4.5) */
static rstr b_fmd_pdp11(int op, double a, double b) {
  rstr r = rt_str_new(64);
  memset(r.p, '0', 64);
  int neg;
  unsigned __int128 mag;
  int64_t e;
  b_dexact(op, b_d_raw(a), b_d_raw(b), &neg, &mag, &e);
  if (mag == 0) return r;
  mag = b_round_to(mag, &e, 56);
  uint64_t u = ((uint64_t)neg << 63) | ((uint64_t)((e + 56 + 128) & 255) << 55)
               | ((uint64_t)mag & (((uint64_t)1 << 55) - 1));
  for (int i = 63; i >= 0; i--, u >>= 1) r.p[i] = (unsigned char)('0' + (int)(u & 1));
  return r;
}

/* a D value to F (-pdp11), rounded or truncated from its 56 bits once: an assignment
 * (RANGE) or TO_FLOAT (OVERFLOW) (3.3.5, 3.3.6.1) */
double rt_b_single_of_d(rt_b_d d, int trunc, int range) {
  if (d.m == 0) return 0;
  int neg = d.m < 0;
  uint64_t mag = (uint64_t)(neg ? -d.m : d.m);
  uint64_t q = mag >> 32, rem = mag & 0xffffffffu;
  int64_t e = (int64_t)d.e + 32;
  if (!trunc && (rem > 0x80000000u || (rem == 0x80000000u && (q & 1)))) q++;
  double r = ldexp((double)q, (int)e);
  return b_fcheck(neg ? -r : r, 1, range ? RT_X_RANGE : RT_X_OVERFLOW);
}

/* the range of a D type (RANGE, or INVALID_TYPE where a value is checked, 3.3.5) */
rt_b_d rt_b_drange(rt_b_d v, rt_b_d lo, rt_b_d hi, int typecheck) {
  if (rt_b_dcmp(v, lo) < 0 || rt_b_dcmp(v, hi) > 0)
    rt_raise(typecheck ? RT_B_INVALID_TYPE : RT_X_RANGE);
  return v;
}

/* the F format of the PDP-11 (-pdp11): sign, an 8-bit exponent in excess 128 and 23
 * bits of fraction, the leading 1 hidden (TO_BIT, [FLOAT (p)]$$, 3.3.3) */
rstr rt_b_bits_of_f(double v) {
  rstr r = rt_str_new(32);
  uint32_t u = 0;
  if (v != 0) {
    int ex;
    double f = frexp(fabs(v), &ex);              /* 0.5 <= f < 1 */
    uint32_t m = (uint32_t)ldexp(f, 24);
    u = ((uint32_t)(v < 0) << 31) | ((uint32_t)((ex + 128) & 255) << 23) | (m & 0x7fffff);
  }
  for (int i = 31; i >= 0; i--, u >>= 1) r.p[i] = (unsigned char)('0' + (int)(u & 1));
  return r;
}

double rt_b_f_of_bits(rstr b) {
  if (b.len != 32) rt_raise(RT_B_INVALID_SIZE);
  uint32_t u = 0;
  for (int i = 0; i < 32; i++) u = u * 2 + (b.p[i] == '1');
  uint32_t ex = (u >> 23) & 255;
  if (ex == 0) return 0;
  double r = ldexp((double)((u & 0x7fffff) | 0x800000), (int)ex - 128 - 24);
  return (u >> 31) ? -r : r;
}

/* !op! of STD fixed point values on 16-bit words (-pdp11): a double word, as the
 * PDP-11 leaves it: MUL the 32-bit product, high word first; DIV the quotient
 * word and then the remainder word; ADD and SUB the exact sum, the carry in the
 * high word (3.2.4.5) */
static rstr b_md_pdp11(int op, rt_int a, rt_int b) {
  uint32_t u = 0;
  switch (op) {
  case '+': u = (uint32_t)(int32_t)(a + b); break;
  case '-': u = (uint32_t)(int32_t)(a - b); break;
  case '*': u = (uint32_t)(int32_t)(a * b); break;
  default:
    if (b != 0) u = ((uint32_t)(uint16_t)(a / b) << 16) | (uint16_t)(a % b);
    break;
  }
  rstr r = rt_str_new(32);
  for (int i = 31; i >= 0; i--, u >>= 1) r.p[i] = (unsigned char)('0' + (int)(u & 1));
  return r;
}

/* ---- GREEN: the simulated machine (RM79 13, 14.6) ------------------------------
 * The memory has SYSTEM'MEMORY_SIZE storage units of 8 bits. Every value has
 * a layout (g_lay, given by greenc for each type) that says how it lies in
 * storage: the bits of a scalar, packed or not, the codes of an enumeration
 * type, where the components of arrays and records start, as the
 * representation specifications declare them (13.1 - 13.4). A program sees
 * storage through 'ADDRESS, code statements, LOW_LEVEL_IO, UNSAFE_CONVERSION
 * and INPUT_OUTPUT, and always in that layout:
 * - an object with an address specification is a view: its value in the
 *   program's form, kept in agreement with the memory after every statement
 *   that may change it (rt_g_sync), so objects at one address overlay;
 * - any other object gets an address above the memory, a window, when
 *   'ADDRESS first asks for it; a window shows the object in its layout, and
 *   what is written there goes back into the object.
 * Code statements run on eight registers of one word (8 storage units).
 * Device 0 is the interrupt controller: an interrupt is an entry call by a
 * hardware task of the highest priority, so interrupts queue on their entry,
 * and its in parameters are the words of the data registers (devices 6 ..
 * 15 for LOW_LEVEL_IO, R1 .. R7 for the INTR instruction), in the layouts
 * of the parameters. Device 1 is the console, 2 the clock; 3 holds an
 * address in memory, 4 reads and writes the storage unit there (and moves
 * on), 5 prints storage units from there in hexadecimal. */

static unsigned char *g_mem;
static rt_int g_mem_size = 1048576;
static rt_int g_reg[8];
static rt_int g_dev[16];
static rt_int g_nirq;
int rt_g_nviews;

void rt_g_set_memory(rt_int n) {
  if (n > 0 && !g_mem) g_mem_size = n;
}

/* pragma STORAGE_UNIT (RM79 13.7): 8, 16, 32 or 64 bits */
static rt_int g_su = 8, g_ub = 1;
void rt_g_set_unit(rt_int su) {
  if ((su == 8 || su == 16 || su == 32 || su == 64) && !g_mem) {
    g_su = su;
    g_ub = su / 8;
  }
}

/* N storage units of the memory from ADDR */
unsigned char *rt_g_mem(rt_int addr, rt_int n) {
  if (addr < 0 || n < 0 || addr > g_mem_size - n) rt_raise(RT_X_RANGE);
  if (!g_mem) g_mem = calloc((size_t)(g_mem_size * g_ub), 1);
  return g_mem + addr * g_ub;
}

/* ---- layouts ---- */

static rt_int g_round(rt_int v, rt_int m) { return m <= 1 ? v : ((v + m - 1) / m) * m; }

static void g_put_bits(unsigned char *img, rt_int off, rt_int n, uint64_t x) {
  for (rt_int i = 0; i < n; i++) {
    rt_int b = off + i;
    int bit = i < 64 ? (int)((x >> i) & 1) : 0;
    if (bit) img[b >> 3] |= (unsigned char)(1u << (b & 7));
    else img[b >> 3] &= (unsigned char)~(1u << (b & 7));
  }
}

static uint64_t g_get_bits(const unsigned char *img, rt_int off, rt_int n) {
  uint64_t x = 0;
  for (rt_int i = 0; i < n && i < 64; i++) {
    rt_int b = off + i;
    if ((img[b >> 3] >> (b & 7)) & 1) x |= (uint64_t)1 << i;
  }
  return x;
}

typedef struct { rt_int lo, hi, lo2, hi2; char *p; } g_arr;

static int g_scalar(const g_lay *L) { return L->k != 'a' && L->k != 'r'; }

/* the bits of the place of component i of an array: its layout's, rounded to
 * a storage unit unless packed */
static rt_int g_comp_bits(const g_lay *L, const void *e) {
  if (L->stride >= 0) return L->stride;
  rt_int b = rt_g_lay_bits(L->elem, e);
  if (b < 0) return -1;
  return L->packed ? b : g_round(b, g_su);
}

typedef struct { rt_int off, vstart, total; } g_walk;

/* where component i of a record starts, in bits; its width in *w */
static rt_int g_place(const g_lay *L, const void *v, rt_int i, g_walk *k, rt_int *w) {
  const g_fld *f = &L->f[i];
  const void *c = v ? (const char *)v + f->coff : NULL;
  rt_int b = f->width >= 0 ? f->width : rt_g_lay_bits(f->lay, c);
  if (b < 0) return -1;
  if (!L->packed && f->width < 0) b = g_round(b, g_su);
  if (f->variant) {
    if (k->vstart < 0) k->vstart = k->off;
    int first = 1;
    for (rt_int j = 0; j < i; j++)
      if (L->f[j].variant == f->variant) first = 0;
    if (first) k->off = k->vstart;
  }
  rt_int st = f->at >= 0 ? f->at : (L->packed ? k->off : g_round(k->off, g_su));
  k->off = st + b;
  if (k->off > k->total) k->total = k->off;
  *w = b;
  return st;
}

static int g_present(const g_fld *f, const void *v) { return !v || !f->present || f->present(v); }

rt_int rt_g_lay_bits(const g_lay *L, const void *v) {
  if (g_scalar(L)) return L->bits;
  if (L->k == 'a') {
    const g_arr *a = v;
    rt_int n = a ? (a->hi >= a->lo ? a->hi - a->lo + 1 : 0) : L->count;
    if (n < 0) return -1;
    if (L->stride >= 0 || !a || !a->p) {
      rt_int s = g_comp_bits(L, NULL);
      return s < 0 ? -1 : n * s;
    }
    rt_int t = 0;
    for (rt_int i = 0; i < n; i++) {
      rt_int s = g_comp_bits(L, a->p + (size_t)i * L->elem->csize);
      if (s < 0) return -1;
      t += s;
    }
    return t;
  }
  if (L->bits > 0) return L->bits;
  g_walk k = {0, -1, 0};
  for (rt_int i = 0; i < L->nf; i++) {
    rt_int w;
    if (!g_present(&L->f[i], v)) continue;
    if (g_place(L, v, i, &k, &w) < 0) return -1;
  }
  return L->packed ? k.total : g_round(k.total, g_su);
}

rt_int rt_g_window(void *c, const g_lay *L);
static void *g_window_object(rt_int a);

static void g_enc_w(const g_lay *L, const void *v, unsigned char *img, rt_int off, rt_int w);
static void g_enc(const g_lay *L, const void *v, unsigned char *img, rt_int off) { g_enc_w(L, v, img, off, -1); }

/* W: the bits a record representation gives a scalar component, -1: its own */
static void g_enc_w(const g_lay *L, const void *v, unsigned char *img, rt_int off, rt_int w) {
  int64_t x = 0;
  rt_int nb = w >= 0 && w <= 64 ? w : L->bits;
  switch (L->k) {
  case 'i': case 'u': x = *(const rt_int *)v; break;
  case 'e': x = *(const int *)v; break;
  case 'b': x = *(const unsigned char *)v; break;
  case 'f': memcpy(&x, v, 8); g_put_bits(img, off, 64, (uint64_t)x); return;
  case 'h': {
    float f = (float)*(const double *)v;
    uint32_t y;
    memcpy(&y, &f, 4);
    g_put_bits(img, off, 32, y);
    return;
  }
  case 'x': x = (int64_t)llround(*(const double *)v / L->small()); break;
  case 'p': {
    void *q = *(void *const *)v;
    x = q ? rt_g_window(q, L->elem) : 0;
    break;
  }
  case 'o': g_put_bits(img, off, L->bits, 0); return;
  case 'a': {
    const g_arr *a = v;
    rt_int n = a->hi >= a->lo ? a->hi - a->lo + 1 : 0;
    for (rt_int i = 0; i < n; i++) {
      const char *e = a->p + (size_t)i * L->elem->csize;
      g_enc(L->elem, e, img, off);
      off += g_comp_bits(L, e);
    }
    return;
  }
  case 'r': {
    g_walk k = {0, -1, 0};
    for (rt_int i = 0; i < L->nf; i++) {
      rt_int w;
      if (!g_present(&L->f[i], v)) continue;
      rt_int st = g_place(L, v, i, &k, &w);
      g_enc_w(L->f[i].lay, (const char *)v + L->f[i].coff, img, off + st, L->f[i].width);
    }
    return;
  }
  }
  if (L->codes && x >= 0 && x < L->ncodes) x = L->codes[x];
  x -= L->bias;
  g_put_bits(img, off, nb, (uint64_t)x);
}

static void g_dec_w(const g_lay *L, void *v, const unsigned char *img, rt_int off, rt_int w);
static void g_dec(const g_lay *L, void *v, const unsigned char *img, rt_int off) { g_dec_w(L, v, img, off, -1); }

static void g_dec_w(const g_lay *L, void *v, const unsigned char *img, rt_int off, rt_int w) {
  uint64_t u;
  int64_t x;
  rt_int nb = w >= 0 && w <= 64 ? w : L->bits;
  switch (L->k) {
  case 'f': u = g_get_bits(img, off, 64); memcpy(v, &u, 8); return;
  case 'h': {
    uint32_t y = (uint32_t)g_get_bits(img, off, 32);
    float f;
    memcpy(&f, &y, 4);
    *(double *)v = f;
    return;
  }
  case 'o': return;
  case 'a': {
    g_arr *a = v;
    if (!a->p) {
      rt_int n = L->count >= 0 ? L->count : 0;
      a->lo = 1;
      a->hi = n;
      a->lo2 = a->hi2 = 1;
      a->p = rt_alloc((size_t)(n ? n : 1) * L->elem->csize);
      memset(a->p, 0, (size_t)(n ? n : 1) * L->elem->csize);
    }
    rt_int n = a->hi >= a->lo ? a->hi - a->lo + 1 : 0;
    for (rt_int i = 0; i < n; i++) {
      char *e = a->p + (size_t)i * L->elem->csize;
      g_dec(L->elem, e, img, off);
      off += g_comp_bits(L, e);
    }
    return;
  }
  case 'r': {
    g_walk k = {0, -1, 0};
    for (rt_int i = 0; i < L->nf; i++) {
      rt_int w;
      if (!g_present(&L->f[i], v)) continue;
      rt_int st = g_place(L, v, i, &k, &w);
      g_dec_w(L->f[i].lay, (char *)v + L->f[i].coff, img, off + st, L->f[i].width);
    }
    return;
  }
  }
  u = g_get_bits(img, off, nb);
  x = (int64_t)u;
  if ((L->k == 'i' || L->k == 'x') && nb < 64 && nb > 0 && (u >> (nb - 1)) & 1) x = (int64_t)(u | (~(uint64_t)0 << nb));
  x += L->bias;
  if (L->codes) {
    rt_int i = 0;
    while (i < L->ncodes && L->codes[i] != x) i++;
    if (i < L->ncodes) x = i;
  }
  switch (L->k) {
  case 'i': case 'u': *(rt_int *)v = x; break;
  case 'e': *(int *)v = (int)x; break;
  case 'b': *(unsigned char *)v = (unsigned char)x; break;
  case 'x': *(double *)v = (double)x * L->small(); break;
  case 'p': *(void **)v = x ? g_window_object(x) : NULL; break;
  }
}

/* the image of a value: (bits + 7) / 8 storage units, and a spare word */
static unsigned char *g_image(const g_lay *L, const void *v, rt_int *bits) {
  rt_int b = rt_g_lay_bits(L, v);
  if (b < 0) b = 0;
  unsigned char *img = rt_alloc((size_t)(b + 7) / 8 + 16 + (size_t)g_ub);
  memset(img, 0, (size_t)(b + 7) / 8 + 16 + (size_t)g_ub);
  g_enc(L, v, img, 0);
  *bits = b;
  return img;
}

/* the offset in bits of the component at comp in the value at root, -1 */
static rt_int g_off(const g_lay *L, const char *root, const char *comp) {
  if (comp == root) return 0;
  if (L->k == 'a') {
    const g_arr *a = (const g_arr *)root;
    rt_int n = a->hi >= a->lo ? a->hi - a->lo + 1 : 0, off = 0;
    size_t cs = L->elem->csize;
    if (comp < a->p || comp >= a->p + (size_t)n * cs) {
      /* a component of a component that holds its own components: a row */
      if (L->elem->k != 'a' && L->elem->k != 'r') return -1;
      for (rt_int j = 0; j < n; j++) {
        rt_int o = g_off(L->elem, a->p + (size_t)j * cs, comp);
        if (o >= 0) return off + o;
        off += g_comp_bits(L, a->p + (size_t)j * cs);
      }
      return -1;
    }
    rt_int i = (rt_int)((comp - a->p) / cs);
    for (rt_int j = 0; j < i; j++) off += g_comp_bits(L, a->p + (size_t)j * cs);
    rt_int o = g_off(L->elem, a->p + (size_t)i * cs, comp);
    return o < 0 ? -1 : off + o;
  }
  if (L->k == 'r') {
    g_walk k = {0, -1, 0};
    for (rt_int i = 0; i < L->nf; i++) {
      rt_int w;
      if (!g_present(&L->f[i], root)) continue;
      rt_int st = g_place(L, root, i, &k, &w);
      const char *c = root + L->f[i].coff;
      if (comp >= c && comp < c + L->f[i].lay->csize) {
        rt_int o = g_off(L->f[i].lay, c, comp);
        if (o >= 0) return st + o;
      }
      if (L->f[i].lay->k == 'a') {
        rt_int o = g_off(L->f[i].lay, c, comp);
        if (o >= 0) return st + o;
      }
    }
  }
  return -1;
}

/* ---- views and windows ---- */

typedef struct {
  char *c;
  const g_lay *L;
  rt_int addr, bytes;
  unsigned char *base;      /* the image last agreed with the memory */
} g_view;
static g_view *g_views;
static rt_int g_cviews;

typedef struct {
  char *c;
  const g_lay *L;
  rt_int base, bytes;
} g_win;
static g_win *g_wins;
static rt_int g_nwins, g_cwins, g_next_win = -1;

/* an object at an address (RM79 13.5): KEEP when it has its value already,
 * else it takes what the memory holds */
void rt_g_view(void *c, const g_lay *L, rt_int addr, int keep) {
  rt_int bits;
  unsigned char *img = g_image(L, c, &bits);
  rt_int units = (bits + g_su - 1) / g_su;
  if (units < 1) units = 1;
  rt_int n = units * g_ub;
  unsigned char *m = rt_g_mem(addr, units);
  if (L->align > 1 && addr % L->align) rt_raise(RT_X_RANGE);
  if (rt_g_nviews == g_cviews) {
    g_cviews = g_cviews ? g_cviews * 2 : 16;
    g_views = realloc(g_views, (size_t)g_cviews * sizeof *g_views);
  }
  g_view *V = &g_views[rt_g_nviews++];
  V->c = c;
  V->L = L;
  V->addr = addr;
  V->bytes = n;
  V->base = rt_alloc((size_t)n + 16);
  if (keep) {
    memcpy(m, img, (size_t)n);
  } else {
    memcpy(img, m, (size_t)n);
    g_dec(L, c, img, 0);
  }
  memcpy(V->base, m, (size_t)n);
  free(img);
}

/* the views and the memory agree again: what the program changed in a view
 * since they last agreed goes to the memory, the rest comes from it */
void rt_g_sync(void) {
  for (int pass = 0; pass < 2; pass++)
    for (rt_int i = 0; i < rt_g_nviews; i++) {
      g_view *V = &g_views[i];
      rt_int bits;
      unsigned char *h = g_image(V->L, V->c, &bits);
      unsigned char *m = rt_g_mem(V->addr, V->bytes / g_ub);
      int differ = 0;
      for (rt_int k = 0; k < V->bytes; k++) {
        unsigned char mask = h[k] ^ V->base[k];
        unsigned char n = (unsigned char)((m[k] & ~mask) | (h[k] & mask));
        m[k] = n;
        V->base[k] = n;
        if (n != h[k]) differ = 1;
      }
      if (differ) g_dec(V->L, V->c, V->base, 0);
      free(h);
    }
}

static g_view *g_view_of(const void *c) {
  for (rt_int i = 0; i < rt_g_nviews; i++)
    if (g_views[i].c == c) return &g_views[i];
  return NULL;
}

/* the address of an object that has none: a window above the memory */
rt_int rt_g_window(void *c, const g_lay *L) {
  g_view *V = g_view_of(c);
  if (V) return V->addr;
  for (rt_int i = 0; i < g_nwins; i++)
    if (g_wins[i].c == c) return g_wins[i].base;
  if (g_next_win < 0) g_next_win = g_round(g_mem_size, 8);   /* in storage units */
  if (g_nwins == g_cwins) {
    g_cwins = g_cwins ? g_cwins * 2 : 32;
    g_wins = realloc(g_wins, (size_t)g_cwins * sizeof *g_wins);
  }
  g_win *w = &g_wins[g_nwins++];
  rt_int b = rt_g_lay_bits(L, c);
  w->c = c;
  w->L = L;
  rt_int units = b > 0 ? (b + g_su - 1) / g_su : 1;
  w->bytes = units * g_ub;
  w->base = g_round(g_next_win, L->align > 1 ? L->align : 1);
  g_next_win = w->base + units;
  return w->base;
}

static void *g_window_object(rt_int a) {
  for (rt_int i = 0; i < g_nwins; i++)
    if (g_wins[i].base == a) return g_wins[i].c;
  rt_raise(rt_exc("ACCESS_ERROR"));
}

/* X'ADDRESS of the component at comp of the object at root (RM79 13.7) */
rt_int rt_g_address(void *root, const g_lay *L, void *comp) {
  rt_int base = rt_g_window(root, L), o = g_off(L, root, comp);
  return base + (o > 0 ? o / g_su : 0);
}

/* storage units of the memory or of the windows, by byte: the byte at
 * B (B = unit address * bytes per unit + byte in the unit) */
static g_win *g_win_at(rt_int b) {
  for (rt_int i = 0; i < g_nwins; i++)
    if (b >= g_wins[i].base * g_ub && b < g_wins[i].base * g_ub + g_wins[i].bytes) return &g_wins[i];
  return NULL;
}

/* N storage units from A: N * (STORAGE_UNIT / 8) bytes */
void rt_g_load(rt_int a, rt_int n, unsigned char *buf) {
  g_win *last = NULL;
  unsigned char *img = NULL;
  rt_int bits;
  rt_g_sync();
  for (rt_int k = 0; k < n * g_ub; k++) {
    rt_int x = a * g_ub + k;
    if (x >= 0 && x < g_mem_size * g_ub) {
      rt_g_mem(0, 0);
      buf[k] = g_mem[x];
      continue;
    }
    g_win *w = g_win_at(x);
    if (!w) rt_raise(RT_X_RANGE);
    if (w != last) {
      free(img);
      img = g_image(w->L, w->c, &bits);
      last = w;
    }
    buf[k] = img[x - w->base * g_ub];
  }
  free(img);
}

void rt_g_save(rt_int a, rt_int n, const unsigned char *buf) {
  for (rt_int k = 0; k < n * g_ub; k++) {
    rt_int x = a * g_ub + k;
    if (x >= 0 && x < g_mem_size * g_ub) {
      rt_g_mem(0, 0);
      g_mem[x] = buf[k];
      continue;
    }
    g_win *w = g_win_at(x);
    if (!w) rt_raise(RT_X_RANGE);
    rt_int bits;
    unsigned char *img = g_image(w->L, w->c, &bits);
    img[x - w->base * g_ub] = buf[k];
    g_dec(w->L, w->c, img, 0);
    free(img);
  }
  rt_g_sync();
}

/* UNSAFE_CONVERSION (RM79 13.10): the storage of a value of type S read as a
 * value of type T; the bits T has beyond those of S are zero */
void rt_g_unsafe(const g_lay *LS, const void *s, const g_lay *LT, void *t) {
  rt_int bs;
  unsigned char *si = g_image(LS, s, &bs);
  g_arr *a = (g_arr *)t;
  if (LT->k == 'a' && !a->p && LT->count < 0) {
    rt_int cb = g_comp_bits(LT, NULL);
    rt_int n = cb > 0 ? (bs + cb - 1) / cb : 0;
    a->lo = 1;
    a->hi = n;
    a->lo2 = a->hi2 = 1;
    a->p = rt_alloc((size_t)(n ? n : 1) * LT->elem->csize);
    memset(a->p, 0, (size_t)(n ? n : 1) * LT->elem->csize);
  }
  rt_int bt = rt_g_lay_bits(LT, LT->k == 'a' && !a->p ? NULL : t);
  rt_int nb = (bs > bt ? bs : bt) + 7;
  unsigned char *img = rt_alloc((size_t)nb / 8 + 16);
  memset(img, 0, (size_t)nb / 8 + 16);
  memcpy(img, si, (size_t)(bs + 7) / 8);
  if (bs % 8) img[bs / 8] &= (unsigned char)((1u << (bs % 8)) - 1);
  g_dec(LT, t, img, 0);
  free(img);
  free(si);
}

/* the place of component i of a record: POSITION, FIRST_BIT or LAST_BIT */
rt_int rt_g_component(const g_lay *L, const void *v, rt_int i, int what) {
  g_walk k = {0, -1, 0};
  rt_int st = 0, w = 0;
  for (rt_int j = 0; j <= i; j++) {
    if (!g_present(&L->f[j], v) && j != i) continue;
    st = g_place(L, v, j, &k, &w);
  }
  if (what == 0) return st / g_su;
  if (what == 1) return st % g_su;
  return st % g_su + w - 1;
}

/* ---- interrupts ---- */

typedef struct g_irq {
  rt_int addr;
  rt_entry *e;
  rt_act *owner;
  size_t psize;
  rt_int np;
  const g_lay *const *lays;
  const size_t *offs;
  struct g_irq *next;
} g_irq;
static g_irq *g_irqs;

void rt_g_bind_interrupt(rt_int addr, rt_entry *e, rt_act *owner) {
  rt_g_bind_interrupt_p(addr, e, owner, 16, 0, NULL, NULL);
}

void rt_g_bind_interrupt_p(rt_int addr, rt_entry *e, rt_act *owner, size_t psize, rt_int np,
                           const g_lay *const *lays, const size_t *offs) {
  g_irq *q;
  for (q = g_irqs; q; q = q->next)
    if (q->addr == addr) break;
  if (!q) {
    q = rt_alloc(sizeof *q);
    q->addr = addr;
    q->next = g_irqs;
    g_irqs = q;
  }
  q->e = e;
  q->owner = owner;
  q->psize = psize;
  q->np = np;
  q->lays = lays;
  q->offs = offs;
}

typedef struct {
  g_irq *q;
  void *params;
} g_call;

static void g_irq_call(void *arg) {
  g_call *k = arg;
  if (rt_is_active(k->q->owner)) rt_entry_call(k->q->e, k->params);
}

/* an interrupt at an address, with the control information WORDS gives */
static void g_interrupt(rt_int addr, const rt_int *words, rt_int nwords) {
  static rt_taskdecl hardware;
  g_nirq++;
  for (g_irq *q = g_irqs; q; q = q->next)
    if (q->addr == addr) {
      if (!rt_is_active(q->owner)) return;   /* nobody listens: it is lost */
      g_call *k = rt_alloc(sizeof *k);
      k->q = q;
      k->params = rt_alloc(q->psize + 16);
      memset(k->params, 0, q->psize + 16);
      /* each in parameter takes the next words, in its layout */
      rt_int w = 0;
      for (rt_int i = 0; i < q->np; i++) {
        rt_int bits = rt_g_lay_bits(q->lays[i], NULL), n = bits > 0 ? (bits + 63) / 64 : 1;
        unsigned char img[8 * 16 + 16];
        memset(img, 0, sizeof img);
        for (rt_int j = 0; j < n && j < 16; j++) {
          rt_int x = w + j < nwords ? words[w + j] : 0;
          memcpy(img + 8 * j, &x, 8);
        }
        g_dec(q->lays[i], (char *)k->params + q->offs[i], img, 0);
        w += n;
      }
      rt_act *a = rt_alloc(sizeof *a);
      memset(a, 0, sizeof *a);
      a->prio = 255;
      a->has_prio = 1;
      rt_create(a, &hardware, g_irq_call, k);
      return;
    }
}

void rt_g_interrupt(rt_int addr) { g_interrupt(addr, g_dev + 6, 10); }

/* ---- code statements (RM79 13.8) ---- */

static rt_int g_word(rt_int a) {
  unsigned char b[8];
  rt_int v;
  rt_g_load(a, 8 / g_ub, b);
  memcpy(&v, b, 8);
  return v;
}

static void g_set_word(rt_int a, rt_int v) {
  unsigned char b[8];
  memcpy(b, &v, 8);
  rt_g_save(a, 8 / g_ub, b);
}

void rt_g_machine(int op, rt_int r, rt_int a) {
  rt_int *x = &g_reg[r & 7], v;
  if (r < 0 || r > 7) rt_raise(RT_X_RANGE);
  switch (op) {
  case 0: break;                                           /* NOP */
  case 1: *x = a; break;                                   /* LDI */
  case 2: *x = g_word(a); break;                           /* LD */
  case 3: g_set_word(a, *x); break;                        /* ST */
  case 4: if (__builtin_add_overflow(*x, g_word(a), &v)) rt_raise(RT_X_OVERFLOW); *x = v; break;
  case 5: if (__builtin_sub_overflow(*x, g_word(a), &v)) rt_raise(RT_X_OVERFLOW); *x = v; break;
  case 6: if (__builtin_mul_overflow(*x, g_word(a), &v)) rt_raise(RT_X_OVERFLOW); *x = v; break;
  case 7:                                                  /* DIV */
    v = g_word(a);
    if (v == 0) rt_raise(RT_X_ZERO_DIVIDE);
    *x = *x / v;
    break;
  case 8: *x = -*x; break;                                 /* NEG */
  case 9: rt_g_putc((int)(*x & 127)); break;               /* OUTC */
  case 10: rt_g_put_int(*x, 0); break;                     /* OUTN */
  case 11: g_interrupt(a, g_reg + 1, 7); break;            /* INTR */
  default: rt_raise(RT_X_RANGE);
  }
}

/* ---- LOW_LEVEL_IO (RM79 14.6) ---- */

void rt_g_send_control(rt_int device, rt_int *data) {
  if (device < 0 || device > 15) rt_raise(RT_X_RANGE);
  if (device == 0) {
    rt_g_interrupt(*data);
  } else if (device == 1) {
    rt_g_putc((int)(*data & 255));
  } else if (device == 3) {
    g_dev[3] = *data;
  } else if (device == 4) {
    unsigned char b[8];
    rt_int v = *data;
    memcpy(b, &v, 8);
    rt_g_save(g_dev[3], 1, b);
    g_dev[3]++;
  } else if (device == 5) {
    char t[24];
    for (rt_int k = 0; k < *data; k++) {
      unsigned char b[8] = {0};
      uint64_t v = 0;
      rt_g_load(g_dev[3] + k, 1, b);
      memcpy(&v, b, (size_t)g_ub);
      snprintf(t, sizeof t, "%0*llX", (int)(2 * g_ub), (unsigned long long)v);
      if (k > 0) rt_g_putc(' ');
      rt_g_put(rt_str(t, (rt_int)strlen(t)));
    }
  } else if (device > 5) {
    g_dev[device] = *data;
  }
}

void rt_g_receive_control(rt_int device, rt_int *data) {
  if (device < 0 || device > 15) rt_raise(RT_X_RANGE);
  if (device == 0) {
    *data = g_nirq;
  } else if (device == 1) {
    *data = rt_getc();
  } else if (device == 2) {
    *data = rt_time();
  } else if (device == 4) {
    unsigned char b[8] = {0};
    rt_int v = 0;
    rt_g_load(g_dev[3], 1, b);
    memcpy(&v, b, (size_t)g_ub);
    *data = v;
    g_dev[3]++;
  } else {
    *data = g_dev[device];
  }
}

void rt_g_collect(rt_int *used, rt_int bits, rt_int limit) {
  if (*used + bits > limit) rt_raise(rt_exc("STORAGE_OVERFLOW"));
  *used += bits;
}

/* the listing file of greenc (RM79 App. B, pragma LIST), "" without one */
rt_gstr rt_g_listing_file(void) {
  const char *n = getenv("GREEN_LISTING");
  if (!n) n = "";
  return rt_g_s2g(rt_str_copy(rt_str(n, (rt_int)strlen(n))));
}

/* ---- GREEN INPUT_OUTPUT elements in their layout (RM79 14.1.2) ---- */

void rt_g_write_lay(rt_int h, const void *item, rt_int lay) {
  g_file *x = g_file_of(h);
  const g_lay *L = (const g_lay *)(intptr_t)lay;
  if (x->mode == 1 || !x->f) g_io("FILE_USE_ERROR");
  rt_int bits;
  unsigned char *img = g_image(L, item, &bits);
  rt_int n = (bits + 7) / 8;
  if (x->var) {
    if (x->boff < 0) g_io("FILE_USE_ERROR");
    fflush(x->f);
    fseek(x->f, 0, SEEK_END);
    long end = ftell(x->f);
    if (x->boff < end) {
      /* over an element: only one of the same length fits there */
      rt_int old;
      fseek(x->f, x->boff, SEEK_SET);
      if (fread(&old, 8, 1, x->f) != 1 || old != bits) g_io("FILE_USE_ERROR");
    }
    fseek(x->f, x->boff, SEEK_SET);
    if (fwrite(&bits, 8, 1, x->f) != 1) g_io("MALFUNCTION");
    x->boff += 8 + n;
  } else {
    fseek(x->f, (long)((x->next - 1) * x->esz), SEEK_SET);
    n = x->esz;
  }
  if (n && fwrite(img, 1, (size_t)n, x->f) != (size_t)n) g_io("MALFUNCTION");
  free(img);
  x->next++;
}

void rt_g_read_element(rt_int h, void *item, rt_int lay) {
  g_file *x = g_file_of(h);
  const g_lay *L = (const g_lay *)(intptr_t)lay;
  if (x->mode == 2 || !x->f) g_io("FILE_USE_ERROR");
  rt_int want = rt_g_lay_bits(L, item), bits = want, n;
  fflush(x->f);
  if (x->var) {
    if (x->boff < 0) rt_raise(RT_X_FILE);
    fseek(x->f, x->boff, SEEK_SET);
    if (fread(&bits, 8, 1, x->f) != 1) {
      if (feof(x->f)) rt_raise(RT_X_FILE);
      g_io("MALFUNCTION");
    }
    n = (bits + 7) / 8;
    x->boff += 8 + n;
  } else {
    fseek(x->f, (long)((x->next - 1) * x->esz), SEEK_SET);
    n = x->esz;
  }
  unsigned char *img = rt_alloc((size_t)n + 16);
  if (n && fread(img, 1, (size_t)n, x->f) != (size_t)n) {
    free(img);
    if (feof(x->f)) rt_raise(RT_X_FILE);
    g_io("MALFUNCTION");
  }
  x->next++;
  /* an element of another length is not of the proper type (14.1.2) */
  if (bits != want) {
    free(img);
    g_io("INVALID_DATA");
  }
  g_dec(L, item, img, 0);
  free(img);
}
