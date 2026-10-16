/* Runtime shared by the RED and GREEN compilers. See paleo.h. */
#include "paleo.h"

#ifndef __wasi__
#include <execinfo.h>
#include <signal.h>
#endif
#include <unistd.h>
#include <math.h>
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

enum { T_READY, T_RUNNING, T_BLOCKED, T_DONE };

struct rt_waiter {
  rt_task *t;
  int alt;                 /* index of the WAIT alternative */
  void *data;              /* message to send or place to receive into */
  rt_waiter **queue;       /* list it sits in */
  rt_waiter *next;         /* next in that list */
  rt_waiter *tnext;        /* next record of the same task */
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

/* complete the wait of w's task with w's alternative */
static void satisfy(rt_waiter *w) {
  rt_task *t = w->t;
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
    if (t->state == T_READY &&
        (!best || t->prio > best->prio || (t->prio == best->prio && t->seq < best->seq)))
      best = t;
  return best;
}

static int advance_clock(void) {
  int any = 0;
  rt_int next = 0;
  for (rt_task *t = all_tasks; t; t = t->all_next)
    if (t->state == T_BLOCKED && t->timed && (!any || t->wake < next)) {
      next = t->wake;
      any = 1;
    }
  if (!any) return 0;
  if (next > now) now = next;
  for (rt_task *t = all_tasks; t; t = t->all_next)
    if (t->state == T_BLOCKED && t->timed && t->wake <= now) {
      t->result = t->timer_alt;
      drop_waiters(t);
      make_ready(t);
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
  if (cur->term_pending) {
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

static void block(void) {
  cur->state = T_BLOCKED;
  trace("block", cur);
  reschedule();
  check_terminate();
}

/* a higher-priority task became eligible: let it run first */
static void maybe_preempt(void) {
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
  t->state = T_DONE;
  trace("done", t);
  if (t->act) {
    t->act->active = 0;
    while (t->act->waiters) satisfy(t->act->waiters);
  }
  if (t->decl && --t->decl->live == 0)
    while (t->decl->waiters) satisfy(t->decl->waiters);
  reschedule();
  pthread_mutex_unlock(&G);
  return NULL;
}

void rt_create(rt_act *a, rt_taskdecl *d, void (*fn)(void *), void *frame) {
  if (a->active) rt_raise(RT_X_CREATE);
  rt_task *t = rt_alloc(sizeof *t);
  pthread_cond_init(&t->cv, NULL);
  t->id = ++task_ids;
  t->prio = cur->prio;
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
  if (!a->t) return;
  a->t->prio = p;
  maybe_preempt();
}

void rt_exterminate(rt_act *a) {
  rt_task *t = a->t;
  if (!a->active || !t || t->state == T_DONE) return;
  if (t == cur) rt_raise(RT_X_TERMINATE);
  t->term_pending = 1;
  if (t->state == T_BLOCKED) {
    drop_waiters(t);
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
  m->buf = cap ? rt_alloc((size_t)cap * esz) : NULL;
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

rstr rt_b_dup(rstr c, rt_int n) {
  if (n < 0) rt_raise(RT_B_INVALID_LENGTH);
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

/* a decimal literal [+-]ddd[.ddd][E[+-]ee] as a mantissa at the scale, rounded */
rt_int rt_b_fix_lit(const char *s, rt_int scale) {
  b_wide num = 0, den = 1;
  int neg = 0, frac = 0;
  long e = 0;
  if (*s == '+' || *s == '-') neg = *s++ == '-';
  for (; *s && *s != 'E'; s++) {
    if (*s == '.') {
      frac = 1;
      continue;
    }
    if (num > ((b_wide)1 << 100)) rt_raise(RT_X_OVERFLOW);
    num = num * 10 + (*s - '0');
    if (frac) den *= 10;
  }
  if (*s == 'E') e = strtol(s + 1, NULL, 10);
  for (; e > 0; e--) num *= 10;
  for (; e < 0; e++) den *= 10;
  if (scale >= 0) num *= b_pow2(scale);
  else den *= b_pow2(-scale);
  b_wide q = b_divide(num, den, 1);
  return b_narrow(neg ? -q : q);
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

rstr rt_b_fix_image(rt_int v, rt_int scale) {
  if (scale <= 0) return rt_str_of_int(rt_b_shl(v, -scale));
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

/* a fixed-literal with blanks around it (3.2.6.1) */
rt_int rt_b_fix_of_str(rstr s, rt_int scale, int rounded) {
  char b[256];
  rt_int i = 0, n = 0;
  (void)rounded;
  while (i < s.len && s.p[i] == ' ') i++;
  while (i < s.len && s.p[i] != ' ' && n < 255) b[n++] = (char)s.p[i++];
  while (i < s.len && s.p[i] == ' ') i++;
  b[n] = 0;
  int ok = n > 0 && i == s.len, digits = 0;
  for (int k = 0; ok && k < n; k++) {
    char c = b[k];
    if (c >= '0' && c <= '9') digits++;
    else if (!((c == '+' || c == '-') && (k == 0 || b[k - 1] == 'E')) && c != '.' && c != 'E')
      ok = 0;
  }
  if (!ok || !digits) rt_raise(RT_B_CONVERSION);
  return rt_b_fix_lit(b, scale);
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

void rt_b_request(rt_b_sem *s) {
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
}

void rt_b_connect(rt_b_sem *s) {
  if (s->connected) rt_raise(rt_exc("INTERRUPT"));
  s->connected = 1;
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
  make_ready(t);
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

void rt_b_par_end(rt_b_par *par) {
  rt_b_act *me = b_me();
  me->waiting = par;
  rt_await_decl(&par->td);
  me->waiting = NULL;
  if (par->exc) rt_raise(par->exc);
}

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
}

/* the virtual time since the activation began: a deviation, see blue/notes */
rt_int rt_b_clock(rt_b_act *a) {
  if (!a) a = b_me();
  rt_int us = (a->done ? a->end : rt_time()) - a->start;
  return (rt_int)(((b_wide)us << 20) / 1000000);
}

void rt_b_wait(rt_int v, rt_int scale) {
  if (v <= 0) {
    rt_yield();
    return;
  }
  b_wide us = (b_wide)v * 1000000;
  b_wide ticks = scale >= 0 ? (us + b_pow2(scale) - 1) / b_pow2(scale) : us * b_pow2(-scale);
  rt_delay(b_narrow(ticks));
}
