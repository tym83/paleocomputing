#!/usr/bin/env python3
"""blueboot -- the bootstrap translator for BLUE (SofTech, Language Specification of
15 February 1978).

It understands the part of BLUE that the first bluec (genesis/bluec.blu) is written
in: one MAIN SEGMENT that USES the implementation's TERMINAL segment; constants,
variables and types (INTEGER with ranges, BOOLEAN, ASCII_STR, ENUM, records,
one-dimensional arrays and pointers); procedures and functions at the segment level
with input, inout (#) and output (##) parameters and ASCII_STR(?L) generic lengths;
IF/ORIF, SELECT, the LOOP forms, EXIT, RETURN, BLOCK, SIGNAL, ASSERT, exceptions
clauses; expressions with the precedence of 3.1.4.1. It writes C that is linked with
rt/paleo.c. It checks little: bluec is the real translator.

Usage: blueboot.py in.blu > out.c
"""

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from blueparse import N, parse, ParseError  # noqa: E402
from bluelex import LexError  # noqa: E402

# 3.7.2, example 1: the ASCII character set written with the 64-character subset
ASCII_NAMES = ["\\NUL", "\\SOH", "\\STX", "\\EXT", "\\EOT", "\\ENQ", "\\ACK", "\\BEL",
               "\\BS", "\\HT", "\\LF", "\\VT", "\\FF", "\\CR", "\\SO", "\\SI",
               "\\DLE", "\\DC1", "\\DC2", "\\DC3", "\\DC4", "\\NAK", "\\SYN", "\\ETB",
               "\\CAN", "\\EM", "\\SUB", "\\ESC", "\\FS", "\\GS", "\\RS", "\\US"]
ASCII_NAMES += ["\\'" + chr(c) + "'" for c in range(32, 96)]
ASCII_NAMES[39] = "\\''''"
ASCII_NAMES += ["\\ACCENT"] + ["\\" + chr(c) for c in range(65, 91)] + \
    ["\\[", "\\BAR", "\\]", "\\TILDE", "\\DEL"]
ASCII_CODE = {n: i for i, n in enumerate(ASCII_NAMES)}


class SemError(Exception):
    pass


class T:
    """A type: kind is INT, BOOL, ENUM, STR, REC, PTR, ARR, VOID or NIL."""
    count = 0

    def __init__(self, kind, **kw):
        self.kind = kind
        self.__dict__.update(kw)
        T.count += 1
        self.id = T.count


INT = T("INT", lo=None, hi=None)
BOOL = T("BOOL")
STR = T("STR", length=None)
VOID = T("VOID")
NILT = T("NIL")
ASCII = T("ENUM", lits=ASCII_NAMES, name="ASCII")


class Sym:
    def __init__(self, kind, name, **kw):
        self.kind = kind          # var const type routine enumlit builtin
        self.name = name
        self.__dict__.update(kw)


def cstring(s):
    out = []
    for ch in s:
        o = ord(ch)
        if ch in '"\\':
            out.append("\\" + ch)
        elif 32 <= o < 127:
            out.append(ch)
        else:
            out.append("\\%03o" % o)
    return '"' + "".join(out) + '"'


BUILTINS = {"PUT", "PUT_LINE", "NEW_LINE", "GET_CODE", "STOP", "TO_CHAR", "BLANKS", "DUP",
            "ABS", "TO_FIXED"}


class Gen:
    def __init__(self):
        self.globals_ = {}
        self.scopes = []
        self.types_out = []        # typedefs
        self.structs = []          # struct bodies, in order of completion
        self.decls_out = []        # globals
        self.protos = []
        self.funcs = []
        self.helpers = []
        self.excs = {}
        self.serial = 0
        self.code = None
        self.ctx = []              # ('loop', label) ('try', frame) ('handler', var)
        self.routine = None
        self.done_structs = set()

    def new(self, base):
        self.serial += 1
        return f"{base}{self.serial}"

    # ---- scopes ---------------------------------------------------------------------
    def lookup(self, name):
        for sc in reversed(self.scopes):
            if name in sc:
                return sc[name]
        return self.globals_.get(name)

    def define(self, sym):
        sc = self.scopes[-1] if self.scopes else self.globals_
        sc[sym.name] = sym

    def emit(self, s):
        self.code.append(s)

    # ---- types -----------------------------------------------------------------------
    def record_name(self, sym):
        """the C name of a named record, fixed before the record is resolved so that
        pointers to it can be declared first"""
        if not hasattr(sym, "fwd"):
            sym.fwd = self.new("R")
            self.types_out.append(f"typedef struct {sym.fwd} {sym.fwd};")
        return sym.fwd

    def resolve(self, ts, cname=None):
        k = ts.kind
        if k == "ts_array":
            elem = self.resolve(ts.elem)
            t = T("ARR", lo=ts.lo, hi=ts.hi, elem=elem)
            t.cname = self.new("A")
            self.types_out.append(f"typedef struct {t.cname} {t.cname};")
            t.pending = True
            self.complete(t)
            return t
        if k == "ts_record":
            t = T("REC", fields=[])
            if cname:
                t.cname = cname
            else:
                t.cname = self.new("R")
                self.types_out.append(f"typedef struct {t.cname} {t.cname};")
            for names, fts, _ in ts.fields:
                ft = self.resolve(fts)
                for nm in names:
                    t.fields.append((nm, ft))
            self.complete(t)
            return t
        if k == "ts_enum":
            return T("ENUM", lits=ts.lits, name=None)
        # named
        name = ts.name
        if name == "INTEGER":
            if ts.rng:
                return T("INT", lo=ts.rng.lo, hi=ts.rng.hi)
            return INT
        if name == "BOOLEAN":
            return BOOL
        if name in ("ASCII_STR", "CHAR_STR"):
            a = ts.args[0]
            if a.kind == "gen":
                return T("STR", length=None, gen=a.name)
            return T("STR", length=a)
        if name == "PTR":
            target = ts.args[0]
            t = T("PTR", target_ts=target, target=None)
            return t
        sym = self.lookup(name)
        if sym is None or sym.kind != "type":
            raise SemError(f"line {ts.line}: unknown type {name}")
        if sym.t is None:
            if getattr(sym, "busy", False):
                raise SemError(f"line {ts.line}: circular type {name}")
            sym.busy = True
            cn = self.record_name(sym) if sym.ts.kind == "ts_record" else None
            sym.t = self.resolve(sym.ts, cn)
            sym.busy = False
        if ts.rng and sym.t.kind == "INT":
            return T("INT", lo=ts.rng.lo, hi=ts.rng.hi)
        return sym.t

    def target(self, t):
        if t.target is None:
            t.target = self.resolve(t.target_ts)
        return t.target

    def ctype(self, t):
        k = t.kind
        if k in ("INT", "BOOL", "ENUM"):
            return "rt_int"
        if k == "STR":
            return "rstr"
        if k in ("REC", "ARR"):
            return t.cname
        if k == "PTR":
            tt = t.target_ts
            # a pointer to a named record may be declared before the record
            if tt.kind == "ts_name" and tt.name not in ("INTEGER", "BOOLEAN", "ASCII_STR", "PTR"):
                sym = self.lookup(tt.name)
                if sym and sym.kind == "type" and sym.ts.kind == "ts_record":
                    return self.record_name(sym) + " *"
            return self.ctype(self.target(t)) + " *"
        if k == "VOID":
            return "void"
        raise SemError(f"no C type for {k}")

    def needs_init(self, t):
        if t.kind == "STR":
            return t.length is not None
        if t.kind == "ARR":
            return True
        if t.kind == "REC":
            return any(self.needs_init(ft) for _, ft in t.fields)
        return False

    def complete(self, t):
        """Emit the struct body and the init/assign helpers of a record or array."""
        if t.kind == "ARR":
            et = self.ctype(t.elem)
            self.structs.append(f"struct {t.cname} {{ rt_int lo, hi; {et} *p; }};")
        else:
            body = " ".join(f"{self.ctype(ft)} f_{nm.lower()};" for nm, ft in t.fields)
            self.structs.append(f"struct {t.cname} {{ int dummy_; {body} }};")
        c = t.cname
        self.protos.append(f"static void I_{c}({c} *x);")
        self.protos.append(f"static void S_{c}({c} *d, {c} s);")
        init, assign = [], []
        if t.kind == "ARR":
            lo, _ = self.expr(t.lo)
            hi, _ = self.expr(t.hi)
            init.append(f"x->lo = {lo}; x->hi = {hi};")
            init.append("rt_int n = x->hi >= x->lo ? x->hi - x->lo + 1 : 0;")
            init.append(f"x->p = rt_alloc(sizeof *x->p * (size_t)(n ? n : 1));")
            if self.needs_init(t.elem):
                init.append("for (rt_int i = 0; i < n; i++) " + self.init_code(t.elem, "x->p[i]"))
            assign.append("rt_int n = d->hi - d->lo;")
            assign.append("if (n != s.hi - s.lo) rt_raise(RT_B_SIZE);")
            assign.append("for (rt_int i = 0; i <= n; i++) " + self.assign_code(t.elem, "d->p[i]", "s.p[i]"))
        else:
            for nm, ft in t.fields:
                if self.needs_init(ft):
                    init.append(self.init_code(ft, f"x->f_{nm.lower()}"))
                assign.append(self.assign_code(ft, f"d->f_{nm.lower()}", f"s.f_{nm.lower()}"))
        self.helpers.append(f"static void I_{c}({c} *x) {{ " + " ".join(init) + " }")
        self.helpers.append(f"static void S_{c}({c} *d, {c} s) {{ " + " ".join(assign) + " }")

    def init_code(self, t, lv):
        if t.kind == "STR":
            n, _ = self.expr(t.length)
            return f"{lv} = rt_str_new({n});"
        if t.kind in ("ARR", "REC"):
            return f"I_{t.cname}(&{lv});"
        return ""

    def assign_code(self, t, lv, rv):
        if t.kind == "STR":
            return f"rt_b_assign(&{lv}, {rv});"
        if t.kind in ("ARR", "REC"):
            return f"S_{t.cname}(&{lv}, {rv});"
        return f"{lv} = {rv};"

    def range_check(self, t, v):
        if t.kind == "INT" and t.lo is not None:
            lo, _ = self.expr(t.lo)
            hi, _ = self.expr(t.hi)
            return f"rt_range({v}, {lo}, {hi})"
        return v

    # ---- manifest values ----------------------------------------------------------------
    def manifest(self, e):
        k = e.kind
        if k == "int":
            return e.v
        if k == "paren":
            return self.manifest(e.e)
        if k == "un" and e.op == "-":
            v = self.manifest(e.e)
            return None if v is None else -v
        if k == "bin" and e.op in ("+", "-", "*", "//"):
            a, b = self.manifest(e.a), self.manifest(e.b)
            if a is None or b is None:
                return None
            if e.op == "+":
                return a + b
            if e.op == "-":
                return a - b
            if e.op == "*":
                return a * b
            q = abs(a) // abs(b)
            return q if (a < 0) == (b < 0) else -q
        if k == "name":
            s = self.lookup(e.name)
            if s and s.kind == "const":
                return s.mvalue
        if k == "enumlit":
            return ASCII_CODE.get(e.name)
        return None

    # ---- expressions -------------------------------------------------------------------
    def expr(self, e, want=None):
        k = e.kind
        if k == "int":
            return f"((rt_int){e.v}LL)", INT
        if k == "bool":
            return str(e.v), BOOL
        if k == "nil":
            return "NULL", NILT
        if k == "paren":
            return self.expr(e.e, want)
        if k == "str":
            s = []
            for kind, text in e.parts:
                if kind == "STR":
                    s.append(text)
                else:
                    if text not in ASCII_CODE:
                        raise SemError(f"line {e.line}: {text} is not an ASCII character")
                    s.append(chr(ASCII_CODE[text]))
            s = "".join(s)
            return f"rt_str({cstring(s)}, {len(s)})", T("STR", length=N("int", e.line, v=len(s)))
        if k == "enumlit":
            if want is not None and want.kind == "ENUM" and e.name in want.lits:
                return str(want.lits.index(e.name)), want
            if e.name in ASCII_CODE:
                return str(ASCII_CODE[e.name]), ASCII
            raise SemError(f"line {e.line}: unknown enumerated literal {e.name}")
        if k == "reccons":
            if want is None or want.kind != "REC":
                raise SemError(f"line {e.line}: the record type of a constructor is unknown")
            v = self.new("rc")
            parts = []
            for fname, fe in e.inits:
                ft = dict(want.fields)[fname]
                c, _ = self.expr(fe, ft)
                parts.append(f".f_{fname.lower()} = {c}")
            return f"(({want.cname}){{0, {', '.join(parts)}}})", want
        if k == "new":
            t = self.resolve(e.ts)
            c = self.ctype(t)
            init = self.init_code(t, "(*p)")
            return f"({{ {c} *p = rt_alloc(sizeof *p); {init} p; }})", T("PTR", target=t, target_ts=e.ts)
        if k == "name":
            return self.name_expr(e)
        if k == "apply":
            s = self.lookup(e.name)
            if s is not None and s.kind in ("var", "const"):
                return self.expr(N("index", e.line, e=N("name", e.line, name=e.name),
                                   args=e.groups[0]))
            return self.call(e.name, e.groups, e.line, want)
        if k == "field":
            base, bt = self.expr(e.e)
            if e.name == "LENGTH" and bt.kind == "STR":
                return f"({base}).len", INT
            if bt.kind != "REC":
                raise SemError(f"line {e.line}: .{e.name} of a non-record")
            ft = dict(bt.fields).get(e.name)
            if ft is None:
                raise SemError(f"line {e.line}: no field {e.name}")
            return f"({base}).f_{e.name.lower()}", ft
        if k == "deref":
            base, bt = self.expr(e.e)
            if bt.kind != "PTR":
                raise SemError(f"line {e.line}: @ of a non-pointer")
            tt = self.target(bt)
            return f"(*({self.ctype(tt)} *)rt_nil_check({base}))", tt
        if k == "index":
            base, bt = self.expr(e.e)
            if bt.kind != "ARR":
                raise SemError(f"line {e.line}: a subscript of a non-array")
            i, _ = self.expr(e.args[0])
            return f"({base}).p[rt_index({i}, ({base}).lo, ({base}).hi) - ({base}).lo]", bt.elem
        if k == "substr":
            base, bt = self.expr(e.e)
            lo, _ = self.expr(e.lo)
            hi, _ = self.expr(e.hi)
            return f"rt_b_slice({base}, {lo}, {hi})", T("STR", length=None)
        if k == "un":
            a, at = self.expr(e.e)
            if e.op == "NOT":
                return f"(!{a})", BOOL
            if e.op == "-":
                return f"rt_neg({a})", INT
            return a, at
        if k == "in":
            v, _ = self.expr(e.e)
            tmp = self.new("iv")
            lo, _ = self.expr(e.rng.lo)
            hi, _ = self.expr(e.rng.hi)
            lop = "<" if e.rng.open_lo else "<="
            hip = "<" if e.rng.open_hi else "<="
            return f"({{ rt_int {tmp} = {v}; ({lo}) {lop} {tmp} && {tmp} {hip} ({hi}); }})", BOOL
        if k == "bin":
            return self.binary(e)
        raise SemError(f"line {e.line}: cannot translate {k}")

    def name_expr(self, e):
        s = self.lookup(e.name)
        if s is None:
            if e.name in BUILTINS or e.name in self.routines_by_name:
                return self.call(e.name, [[], [], []], e.line, None)
            raise SemError(f"line {e.line}: unknown name {e.name}")
        if s.kind in ("var", "const"):
            return s.access, s.t
        if s.kind == "gen":
            return s.access, INT
        if s.kind == "routine":
            return self.call(e.name, [[], [], []], e.line, None)
        raise SemError(f"line {e.line}: {e.name} is not a value")

    def binary(self, e):
        op = e.op
        if op in ("&", "!"):
            a, _ = self.expr(e.a)
            b, _ = self.expr(e.b)
            return f"({a} {'&&' if op == '&' else '||'} {b})", BOOL
        if op in ("=", "<>"):
            a, at = self.expr(e.a)
            b, bt = self.expr(e.b, at)
            if at.kind == "NIL" and bt.kind != "NIL":
                a, at = self.expr(e.a, bt)
            if at.kind == "STR":
                r = f"rt_b_eq({a}, {b})"
            else:
                r = f"({a} == {b})"
            return (r if op == "=" else f"(!{r})"), BOOL
        if op in ("<", ">", "<=", ">="):
            a, at = self.expr(e.a)
            b, _ = self.expr(e.b, at)
            return f"({a} {op} {b})", BOOL
        if op == "!!":
            a, _ = self.expr(e.a)
            b, _ = self.expr(e.b)
            return f"rt_str_cat({a}, {b})", T("STR", length=None)
        a, _ = self.expr(e.a)
        b, _ = self.expr(e.b)
        fn = {"+": "rt_add", "-": "rt_sub", "*": "rt_mul", "//": "rt_quot", "MOD": "rt_rem"}.get(op)
        if fn is None:
            raise SemError(f"line {e.line}: operator {op} is not in the bootstrap")
        return f"{fn}({a}, {b})", INT

    # ---- calls ------------------------------------------------------------------------
    def call(self, name, groups, line, want):
        args = groups[0]
        if name in BUILTINS and not self.lookup(name):
            return self.builtin(name, args, line)
        r = self.routines_by_name.get(name)
        if r is None:
            raise SemError(f"line {line}: unknown routine {name}")
        actual = groups[0] + groups[1] + groups[2]
        if len(actual) != len(r.params):
            raise SemError(f"line {line}: {name} takes {len(r.params)} arguments")
        cargs = []
        for p, a in zip(r.params, actual):
            if p.mode == 0:
                c, _ = self.expr(a, p.t)
                if p.t.kind == "INT":
                    c = self.range_check(p.t, c)
                cargs.append(c)
            else:
                c, _ = self.expr(a)
                cargs.append(f"&{c}")
        return f"{r.cname}({', '.join(cargs)})", r.result

    def builtin(self, name, args, line):
        cs = [self.expr(a) for a in args]
        if name == "PUT":
            return f"rt_put({cs[0][0]})", VOID
        if name == "PUT_LINE":
            return f"rt_putln({cs[0][0]})", VOID
        if name == "NEW_LINE":
            return "rt_newline()", VOID
        if name == "GET_CODE":
            return "rt_b_get_code()", INT
        if name == "STOP":
            return f"rt_exit({cs[0][0]})", VOID
        if name == "TO_CHAR":
            return f"rt_b_image({cs[0][0]})", T("STR", length=None)
        if name == "BLANKS":
            return f"rt_b_dup(rt_str(\" \", 1), {cs[0][0]})", T("STR", length=None)
        if name == "DUP":
            return f"rt_b_dup({cs[0][0]}, {cs[1][0]})", T("STR", length=None)
        if name == "ABS":
            return f"rt_abs({cs[0][0]})", INT
        if name == "TO_FIXED":
            if cs[0][1].kind == "ENUM" or cs[0][1].kind == "BOOL":
                return cs[0][0], INT
            return f"rt_int_of_str({cs[0][0]})", INT
        raise SemError(f"line {line}: {name}")

    # ---- declarations --------------------------------------------------------------------
    def declare_types(self, decls):
        for d in decls:
            if d.kind == "type":
                self.define(Sym("type", d.name, t=None, ts=d.ts))

    def declare_objects(self, d, glob):
        t = self.resolve(d.ts)
        for nm in d.names:
            cname = (f"g_{nm.lower()}" if glob else f"l_{nm.lower()}_{self.new('')}")
            sym = Sym("var" if d.kind == "var" else "const", nm, t=t, access=cname, mvalue=None)
            if d.kind == "const" and t.kind in ("INT", "BOOL", "ENUM"):
                sym.mvalue = self.manifest(d.init) if d.init else None
            if glob:
                self.decls_out.append(f"static {self.ctype(t)} {cname};")
                target = self.init_code_lines
            else:
                self.emit(f"{self.ctype(t)} {cname};")
                target = self.code
            if self.needs_init(t):
                target.append(self.init_code(t, cname))
            elif t.kind != "INT" or not d.init:
                target.append(f"memset(&{cname}, 0, sizeof {cname});")
            if d.init is not None:
                c, _ = self.expr(d.init, t)
                if t.kind == "INT":
                    c = self.range_check(t, c)
                target.append(self.assign_code(t, cname, c))
            self.define(sym)

    # ---- statements -----------------------------------------------------------------------
    def body(self, decls, stmts):
        self.declare_types(decls)
        for d in decls:
            if d.kind in ("var", "const"):
                self.declare_objects(d, False)
        for s in stmts:
            self.stmt(s)

    def open_scope(self, body):
        self.emit("{")
        self.scopes.append({})
        self.body(*body)
        self.scopes.pop()
        self.emit("}")

    def pops_until(self, kind):
        for c in reversed(self.ctx):
            if c[0] == "try":
                self.emit(f"RT_POP({c[1]});")
            if c[0] == kind:
                return c
        return None

    def stmt(self, s):
        k = s.kind
        if k == "null":
            return
        if k == "assign":
            self.assign(s)
        elif k == "call":
            c, _ = self.call(s.name, s.groups, s.line, None)
            self.emit(c + ";")
        elif k == "if":
            first = True
            for cond, body in s.arms:
                c, _ = self.expr(cond)
                self.emit(("if" if first else "else if") + f" ({c})")
                first = False
                self.open_scope(body)
            if s.els:
                self.emit("else")
                self.open_scope(s.els)
        elif k == "case":
            self.case(s)
        elif k == "loop":
            end = self.new("L_end")
            self.emit("for (;;) {")
            if s.until is not None:
                c, _ = self.expr(s.until)
                self.emit(f"if ({c}) goto {end};")
            self.ctx.append(("loop", end))
            self.open_scope(s.body)
            self.ctx.pop()
            if s.when is not None:
                c, _ = self.expr(s.when)
                self.emit(f"if ({c}) goto {end};")
            self.emit(f"}} {end}: ;")
        elif k == "for":
            end = self.new("L_end")
            lo, t = self.expr(s.rng.lo)
            hi, _ = self.expr(s.rng.hi)
            it = self.new("it")
            if s.rng.open_lo:
                lo = f"({lo}) + 1"
            if s.rng.open_hi:
                hi = f"({hi}) - 1"
            self.emit(f"{{ rt_int {it}_lo = {lo}, {it}_hi = {hi};")
            self.emit(f"for (rt_int {it} = {it}_lo; {it} <= {it}_hi; {it}++) {{")
            self.scopes.append({})
            if s.var:
                self.define(Sym("const", s.var, t=t if t.kind == "ENUM" else INT,
                                access=it, mvalue=None))
            self.ctx.append(("loop", end))
            self.open_scope(s.body)
            self.ctx.pop()
            self.scopes.pop()
            self.emit(f"}} }} {end}: ;")
        elif k == "exit":
            c = self.pops_until("loop")
            if c is None:
                raise SemError(f"line {s.line}: EXIT outside a loop")
            self.emit(f"goto {c[1]};")
        elif k == "return":
            self.pops_until("routine")
            if s.e is None:
                self.emit("return;" if self.routine else "rt_main_done();")
            else:
                c, _ = self.expr(s.e, self.routine.result)
                self.emit(f"return {c};")
        elif k == "block":
            self.open_scope(s.body)
        elif k == "signal":
            if s.name is None:
                h = [c for c in self.ctx if c[0] == "handler"]
                if not h:
                    raise SemError(f"line {s.line}: SIGNAL without a name outside a handler")
                self.emit(f"rt_raise({h[-1][1]});")
            else:
                self.emit(f"rt_raise({self.exc(s.name)});")
        elif k == "assert":
            c, _ = self.expr(s.e)
            self.emit(f"if (!({c})) rt_raise(RT_X_ASSERT);")
        elif k == "except":
            f = self.new("xf")
            self.emit(f"{{ rt_frame {f};")
            self.emit(f"if (RT_TRY({f})) {{")
            self.ctx.append(("try", f))
            self.stmt(s.stmt)
            self.ctx.pop()
            self.emit(f"RT_POP({f}); }} else {{ RT_POP({f}); int {f}x = rt_xcur;")
            first = True
            for names, body in s.handlers:
                cond = " || ".join(f"{f}x == {self.exc(n)}" for n in names)
                self.emit(("if" if first else "else if") + f" ({cond})")
                first = False
                self.ctx.append(("handler", f + "x"))
                self.open_scope(body)
                self.ctx.pop()
            self.emit(f"else rt_raise({f}x); }} }}")
        else:
            raise SemError(f"line {s.line}: cannot translate {k}")

    def exc(self, name):
        if name not in self.excs:
            self.excs[name] = f"x_{name.lower()}"
        return self.excs[name]

    def assign(self, s):
        tg = s.target
        if tg.kind == "substr":
            base, _ = self.expr(tg.e)
            lo, _ = self.expr(tg.lo)
            hi, _ = self.expr(tg.hi)
            c, _ = self.expr(s.e)
            self.emit(f"rt_b_slice_assign(&{base}, {lo}, {hi}, {c});")
            return
        lv, t = self.expr(tg)
        c, _ = self.expr(s.e, t)
        if t.kind == "INT":
            c = self.range_check(t, c)
        self.emit(self.assign_code(t, lv, c))

    def case(self, s):
        c, t = self.expr(s.choice)
        if t.kind == "STR":
            tmp = self.new("cs")
            self.emit(f"{{ rstr {tmp} = {c};")
            first = True
            for labels, body in s.arms:
                conds = []
                for lab in labels:
                    lc, _ = self.expr(lab)
                    conds.append(f"rt_str_eq({tmp}, {lc})")
                self.emit(("if" if first else "else if") + f" ({' || '.join(conds)})")
                first = False
                self.open_scope(body)
            if s.els:
                self.emit("else" if not first else "")
                self.open_scope(s.els)
            self.emit("}")
            return
        self.emit(f"switch ({c}) {{")
        for labels, body in s.arms:
            for lab in labels:
                if lab.kind == "range":
                    lo = self.manifest(lab.lo)
                    hi = self.manifest(lab.hi)
                    if lo is None or hi is None:
                        raise SemError(f"line {lab.line}: a case label must be manifest")
                    lo += 1 if lab.open_lo else 0
                    hi -= 1 if lab.open_hi else 0
                    self.emit(f"case {lo} ... {hi}:")
                else:
                    if lab.kind == "enumlit" and t.kind == "ENUM":
                        v = t.lits.index(lab.name)
                    else:
                        v = self.manifest(lab)
                    if v is None:
                        raise SemError(f"line {lab.line}: a case label must be manifest")
                    self.emit(f"case {v}:")
            self.open_scope(body)
            self.emit("break;")
        if s.els:
            self.emit("default:")
            self.open_scope(s.els)
            self.emit("break;")
        self.emit("}")

    # ---- routines --------------------------------------------------------------------------
    def declare_routine(self, r):
        params = []
        for p in r.params:
            t = self.resolve(p.ts)
            params.append(Sym("param", p.name, t=t, mode=p.mode, gen=getattr(t, "gen", None)))
        r.params_syms = params
        res = self.resolve(r.result) if r.result else VOID
        r.sym = Sym("routine", r.name, params=params, result=res, cname=f"r_{r.name.lower()}")
        ps = []
        for p in params:
            ct = self.ctype(p.t)
            ps.append(f"{ct} {'*' if p.mode else ''}p_{p.name.lower()}")
        r.proto = f"static {self.ctype(res)} {r.sym.cname}({', '.join(ps) or 'void'})"
        self.protos.append(r.proto + ";")
        self.routines_by_name[r.name] = r.sym

    def routine_body(self, r):
        self.code = []
        self.routine = r.sym
        self.scopes.append({})
        for p in r.params_syms:
            access = f"p_{p.name.lower()}"
            if p.mode:
                access = f"(*{access})"
            self.define(Sym("var", p.name, t=p.t, access=access))
            if p.gen:
                self.define(Sym("gen", p.gen, access=f"({access}).len"))
        self.ctx = [("routine", None)]
        self.body(r.decls, r.stmts)
        self.scopes.pop()
        self.funcs.append(r.proto + " {")
        self.funcs.extend(self.code)
        if r.sym.result.kind != "VOID":
            self.funcs.append(f"rt_raise(RT_X_INIT);")
        self.funcs.append("}")
        self.routine = None

    # ---- the program -------------------------------------------------------------------
    def program(self, segs):
        mains = [s for s in segs if s.main]
        if len(segs) != 1 or len(mains) != 1:
            raise SemError("the bootstrap translates one MAIN SEGMENT")
        seg = mains[0]
        self.routines_by_name = {}
        self.init_code_lines = []
        self.code = self.init_code_lines
        self.declare_types(seg.decls)
        for d in seg.decls:
            if d.kind in ("var", "const"):
                self.declare_objects(d, True)
        for r in seg.routines:
            self.declare_routine(r)
        main_code = []
        self.code = main_code
        self.ctx = [("routine", None)]
        for s in seg.stmts:
            self.stmt(s)
        for r in seg.routines:
            self.routine_body(r)
        out = ["#include \"paleo.h\"", "#include <string.h>"]
        out += self.types_out + self.structs
        out += [f"static int {c};" for c in self.excs.values()]
        out += self.decls_out + self.protos + self.helpers + self.funcs
        out.append("int main(int argc, char **argv) {")
        out.append("rt_b_lang();")
        out.append("rt_init(argc, argv);")
        out += [f"{c} = rt_exc({cstring(n)});" for n, c in self.excs.items()]
        out += self.init_code_lines
        out += main_code
        out.append("rt_main_done();")
        out.append("return 0;")
        out.append("}")
        return "\n".join(out) + "\n"


def main():
    if len(sys.argv) != 2:
        sys.stderr.write("usage: blueboot.py in.blu > out.c\n")
        sys.exit(2)
    with open(sys.argv[1]) as f:
        src = f.read()
    try:
        text = Gen().program(parse(src))
    except (ParseError, LexError, SemError) as ex:
        sys.stderr.write(f"blueboot: {ex}\n")
        sys.exit(1)
    sys.stdout.write(text)


if __name__ == "__main__":
    main()
