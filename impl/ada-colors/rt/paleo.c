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
  trace("run", n);
  pthread_cond_signal(&n->cv);
  if (me->state == T_DONE) return;
  while (cur != me) pthread_cond_wait(&me->cv, &G);
}

static void check_terminate(void) {
  if (cur->term_pending && !cur->critical) {
    cur->term_pending = 0;
    rt_raise(RT_X_TERMINATE);
  }
}

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

void rt_free(void **v) {
  uintptr_t target = (uintptr_t)*v;
  blockrec *tb;
  size_t refs = 0;
  if (!target) return;
  tb = bfind(target);
  if (!tb) rt_raise_msg(RT_X_FREE, "not a dynamic variable");
  size_t tn = tb->n;
  mark_epoch++;
  nwork = 0;
  for (size_t i = 0; i < nroots; i++) push_range(&work, &nwork, &cwork, roots[i].p, roots[i].n);
  for (rt_fstack *s = all_fstacks; s; s = s->next)
    for (size_t i = 0; i < s->depth; i++) push_range(&work, &nwork, &cwork, s->f[i].p, s->f[i].n);
  for (rt_task *t = all_tasks; t; t = t->all_next)
    if (t->state != T_DONE && t->frame) scan_word((uintptr_t)t->frame);
  tb->mark = mark_epoch; /* the variable's own contents do not count */
  while (nwork > 0) {
    range r = work[--nwork];
    uintptr_t a = ((uintptr_t)r.p + sizeof(void *) - 1) & ~(uintptr_t)(sizeof(void *) - 1);
    uintptr_t end = (uintptr_t)r.p + r.n;
    for (; a + sizeof(void *) <= end; a += sizeof(void *)) {
      if (a == (uintptr_t)v) continue;
      uintptr_t w = *(uintptr_t *)a;
      if (w >= target && w < target + tn) refs++;
      scan_word(w);
    }
  }
  if (refs > 0) rt_raise(RT_X_FREE);
  tb->p = DEAD_BLOCK; /* stays counted in the load until the table grows */
  free((void *)target);
  *v = NULL;
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

/* ---- GREEN TEXT_IO (RM79 14.3-14.4) ------------------------------------- */

static rt_int g_col = 1;

static void g_track(const unsigned char *p, rt_int n) {
  for (rt_int i = 0; i < n; i++) {
    if (p[i] == '\n') g_col = 1;
    else if (p[i] == '\t') g_col = ((g_col - 1) / 8 + 1) * 8 + 1;
    else g_col++;
  }
}

rt_int rt_g_col(void) { return g_col; }

void rt_g_put(rstr s) {
  fwrite(s.p, 1, (size_t)s.len, stdout);
  g_track(s.p, s.len);
}

void rt_g_putc(int c) {
  unsigned char b = (unsigned char)c;
  putchar(c);
  g_track(&b, 1);
}

static void g_item(rstr s, rt_int width, int right) {
  if (g_col > 1) rt_g_putc(' ');
  rt_int pad = width > s.len ? width - s.len : 0;
  if (right) while (pad-- > 0) rt_g_putc(' ');
  rt_g_put(s);
  if (!right) while (pad-- > 0) rt_g_putc(' ');
}

void rt_g_put_int(rt_int v, rt_int width) { g_item(rt_str_of_int(v), width, 1); }

void rt_g_put_bool(int v, rt_int width) {
  g_item(v ? rt_str("TRUE", 4) : rt_str("FALSE", 5), width, 0);
}

/* floating output is d.ddd E+ddd with a three-digit exponent (RM79 14.4) */
rstr rt_g_image_float(double v) {
  char b[64], m[48];
  int e = 0;
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

void rt_g_put_float(double v, rt_int width, rt_int fract) {
  (void)fract;
  g_item(rt_g_image_float(v), width, 1);
}

int rt_g_getc(void) {
  int c = rt_getc();
  if (c < 0) rt_raise(RT_X_FILE);
  return c;
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

int rt_g_aborted(void) {
  for (int i = 0; i < g_naborted; i++)
    if (g_aborted[i] == cur) return 1;
  return 0;
}

/* ---- GREEN TEXT_IO GET of numbers (RM79 14.4): an item is a lexical unit,
 * leading blanks and line ends are skipped ----------------------------------- */

static void g_item_text(char *b, size_t cap) {
  int c;
  do {
    c = rt_getc();
    if (c < 0) rt_raise(RT_X_FILE);
  } while (c == ' ' || c == '\t' || c == '\n' || c == '\r');
  size_t n = 0;
  while (c >= 0 && c != ' ' && c != '\t' && c != '\n' && c != '\r') {
    if (n + 1 < cap) b[n++] = (char)c;
    c = rt_getc();
  }
  b[n] = 0;
}

rt_int rt_g_get_int(void) {
  char b[64], *end;
  g_item_text(b, sizeof b);
  long long v = strtoll(b, &end, 10);
  if (*end) rt_raise(RT_X_RANGE);
  return (rt_int)v;
}

double rt_g_get_float(void) {
  char b[64], *end;
  g_item_text(b, sizeof b);
  double v = strtod(b, &end);
  if (*end) rt_raise(RT_X_RANGE);
  return v;
}

void rt_g_move_bytes(rt_int from, rt_int to, rt_int n) {
  if (n > 0) memmove((void *)(intptr_t)to, (const void *)(intptr_t)from, (size_t)n);
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

rstr rt_b_md(int op, rt_int a, rt_int b) {
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

void rt_b_no_target_code(const char *name) {
  fflush(stdout);
  fprintf(stderr, "*** the TARGET routine %s has no machine code here\n", name);
  exit(1);
}

/* ---- BLUE: parallel processing (4.6) ------------------------------------- */

struct rt_b_sem {
  rt_int value;
  rt_waiter *q;
  int region, connected;
};

#define B_HOLDS 32
struct rt_b_act {
  rt_act act;
  void (*fn)(void *);
  void *frame;
  rt_b_par *par;              /* the block it belongs to */
  rt_b_par *waiting;          /* the block it waits on */
  rt_b_act *sibling;
  rt_int start, end;
  int done, exc;
  rt_b_sem *holds[B_HOLDS];   /* REGION semaphores requested and not released */
  int nholds;
  rt_b_sem *connected;        /* the interrupt semaphore of its CONNECT clause */
  rt_int cpu;                 /* processing time, in virtual microseconds (4.6.5) */
  rt_b_act *order;            /* the activations of a block, in the order made */
};

static rt_b_act b_main;
static __thread rt_b_act *b_self;

static rt_b_act *b_me(void) { return b_self ? b_self : &b_main; }

rt_b_sem *rt_b_sem_new(int region) {
  rt_b_sem *s = rt_alloc(sizeof *s);
  s->region = region;
  return s;
}

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
  if (s->region && a->nholds < B_HOLDS) a->holds[a->nholds++] = s;
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
static double b_fround(double v, int single, int trunc) {
  if (!single) return v;
  int old = fegetround();
  if (trunc) fesetround(FE_TOWARDZERO);
  volatile float f = (float)v;
  fesetround(old);
  return f;
}

static double b_fcheck(double r, int single, int exc_over) {
  if (isinf(r) || isnan(r)) rt_raise(exc_over);
  if (r != 0 && fabs(r) < (single ? FLT_MIN : DBL_MIN)) rt_raise(RT_B_UNDERFLOW);
  return r;
}

double rt_b_fop(int op, double a, double b, int single, int trunc) {
  int old = fegetround();
  volatile double r;
  if (op == '/' && b == 0) rt_raise(RT_X_ZERO_DIVIDE);
  if (trunc) fesetround(FE_TOWARDZERO);
  switch (op) {
  case '+': r = a + b; break;
  case '-': r = a - b; break;
  case '*': r = a * b; break;
  default: r = a / b; break;
  }
  fesetround(old);
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
  int old = fegetround();
  if (trunc) fesetround(FE_TOWARDZERO);
  volatile double d = (double)v;
  fesetround(old);
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
rstr rt_b_fmd(int op, double a, double b) {
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

/* the storage of an array: ARRAY_TOO_BIG beyond the largest array of the simulated
 * machine, 2**34 bits (3.8.1) */
int RT_B_ARRAY_TOO_BIG;
void *rt_b_array_alloc(rt_int n, size_t esize) {
  if (n < 0) n = 0;
  if ((unsigned __int128)n * esize * 8 > ((unsigned __int128)1 << 34)) rt_raise(RT_B_ARRAY_TOO_BIG);
  return rt_alloc(esize * (size_t)(n ? n : 1));
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

int Y_X_EOF, Y_X_FILE, Y_X_INSTANCES, Y_X_FIXED, Y_X_ZERO_DENOM, Y_X_NO_RETURN;

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
  if (i < a.lo[k] || i > a.hi[k]) rt_raise(RT_X_SUBSCRIPT);
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

/* ---- sets ------------------------------------------------------------ */

static size_t set_words(rt_int lo, rt_int hi) { return (size_t)((y_n(lo, hi) + 63) / 64); }

yset y_set_new(rt_int lo, rt_int hi) {
  yset s;
  s.lo = lo;
  s.hi = hi;
  s.w = rt_alloc(set_words(lo, hi) * sizeof(uint64_t));
  return s;
}

static yset set_clone(yset s) {
  yset r = y_set_new(s.lo, s.hi);
  if (s.w) memcpy(r.w, s.w, set_words(s.lo, s.hi) * sizeof(uint64_t));
  return r;
}

int y_set_in(rt_int e, yset s) {
  if (!s.w || e < s.lo || e > s.hi) return 0;
  rt_int b = e - s.lo;
  return (int)((s.w[b >> 6] >> (b & 63)) & 1);
}

yset y_set_add(yset s, rt_int e) {
  if (e < s.lo || e > s.hi) rt_raise(RT_X_RANGE);
  yset r = set_clone(s);
  rt_int b = e - s.lo;
  r.w[b >> 6] |= 1ULL << (b & 63);
  return r;
}

/* both operands have the same type, so normally the same base range; an
 * operand that was never set has no words and counts as empty */
static yset set_op(yset a, yset b, int op) {
  if (!a.w && b.w) a = y_set_new(b.lo, b.hi);
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
  yset r = y_set_new(a.lo, a.hi);
  for (rt_int e = a.lo; e <= a.hi; e++)
    if (!y_set_in(e, a)) {
      rt_int k = e - r.lo;
      r.w[k >> 6] |= 1ULL << (k & 63);
    }
  return r;
}

int y_set_eq(yset a, yset b) {
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

void y_create(rt_taskdecl *d, rt_int limit, int has_prio, rt_int prio,
              void (*fn)(void *), void *frame) {
  if (limit > 0 && d->live >= limit) rt_raise(Y_X_INSTANCES);
  rt_act *a = rt_alloc(sizeof *a);
  rt_create(a, d, fn, frame);
  if (has_prio) rt_set_priority(a, prio);
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
 * use: the line clock, interrupt vector 100 (octal), which sends its signal
 * every 20 ms of the virtual clock, as the KW11-L of a 50 Hz machine. It
 * runs as a process of the highest priority and enters the monitor of the
 * signal to send it, as a monitor procedure would. */

typedef struct {
  ysig *s;
  rt_int period;
} ydevice;

static void y_device_loop(void *arg) {
  ydevice *d = arg;
  for (;;) {
    rt_delay(d->period);
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
  y_create(&devices, 0, 1, 255, y_device_loop, d);
}

/* a SIGNAL as a component of an array: tied to its monitor by y_sig_init */
const ydesc y_d_sig = {YK_OPAQUE, sizeof(ysig), 0, 0, {0}, {0}, NULL, 0, NULL, NULL};
