/* Runtime shared by the RED and GREEN compilers. See paleo.h. */
#include "paleo.h"

#ifndef __wasi__
#include <execinfo.h>
#include <signal.h>
#endif
#include <unistd.h>
#include <math.h>
#include <pthread.h>
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
