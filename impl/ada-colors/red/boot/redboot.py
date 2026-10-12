#!/usr/bin/env python3
"""redboot — the bootstrap translator for RED.

It understands only the part of RED that the real compiler (redc.red) is
written in, and translates one main capsule to C:

  * declarations: VAR, CONST, ABBREV, TYPE (direct, and indirect PTR with an
    optional parameter list), PROC, FUNC, EXCEPTION
  * types: INT with ranges, BOOL, enumerations, ASCII, STRING[ASCII],
    one-dimensional arrays, records, indirect (pointer) types
  * statements: assignment, invocation, IF, CASE, FOR/WHILE REPEAT, EXIT,
    RETURN, RAISE, RERAISE, GUARD, BEGIN, ALLOC, ASSERT
  * built-ins: POS SUCC PRED ABS CNVT WRITELN WRITE READLN SIZELN EOF
    OPEN CLOSE and the attributes .LEN .ALL .MIN .MAX

Everything else is the job of redc.red itself. Usage: redboot.py in.red > out.c
"""

import sys
import os

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from redparse import parse, N  # noqa: E402


class SemError(Exception):
    pass


# ---------------------------------------------------------------- types

class T:
    """A RED type: the translation-time properties only (4.1)."""

    def __init__(self, kind, **kw):
        self.kind = kind
        self.__dict__.update(kw)

    def __repr__(self):
        return f"T({self.kind})"


INT = T("int")
BOOL = T("bool")
FLOAT = T("float")
ASCII_LITS = (["NUL", "SOH", "STX", "ETX", "EOT", "ENQ", "ACK", "BEL", "BS", "HT",
               "LF", "VT", "FF", "CR", "SO", "SI", "DLE", "DC1", "DC2", "DC3", "DC4",
               "NAK", "SYN", "ETB", "CAN", "EM", "SUB", "ESC", "FS", "GS", "RS", "US",
               "SP", "EXCLAIM", "QUOTE", "NUMBER", "DOLLAR", "PERCENT", "AMPERSAND",
               "APOS", "LPAREN", "RPAREN", "STAR", "PLUS", "COMMA", "MINUS", "PERIOD",
               "SLASH"] + [f"N_{d}" for d in range(10)] +
              ["COLON", "SEMI", "LESS", "EQUAL", "GREATER", "QUESTION", "AT"] +
              [chr(c) for c in range(ord("A"), ord("Z") + 1)] +
              ["LBRACKET", "BSLASH", "RBRACKET", "CIRCUMFLEX", "UNDERSCORE", "GRAVE"] +
              [f"L_{chr(c)}" for c in range(ord("A"), ord("Z") + 1)] +
              ["LBRACE", "BAR", "RBRACE", "TILDE", "DEL"])
assert len(ASCII_LITS) == 128
ASCII = T("enum", lits=ASCII_LITS, name="ASCII")
STRING = T("string", comp=ASCII)
VOID = T("void")
FILET = T("file")
NILT = T("nil")


def same(a, b):
    if a is b:
        return True
    if a.kind != b.kind:
        return False
    if a.kind in ("int", "bool", "float", "string", "void", "file"):
        return True
    if a.kind == "enum":
        return a.lits == b.lits
    if a.kind == "array":
        return same(a.elem, b.elem) and len(a.index) == len(b.index) and \
            all(same(x, y) for x, y in zip(a.index, b.index))
    if a.kind == "record":
        return len(a.comps) == len(b.comps) and all(
            n1 == n2 and same(t1, t2) for (n1, t1, _), (n2, t2, _) in zip(a.comps, b.comps))
    return False                     # PTR and new types are equal only to themselves


# ---------------------------------------------------------------- symbols

class Sym:
    def __init__(self, kind, name, **kw):
        self.kind = kind             # var const func proc type abbrev exc
        self.name = name
        self.__dict__.update(kw)


class Scope:
    def __init__(self, parent=None):
        self.parent = parent
        self.names = {}

    def define(self, sym, line):
        if sym.name in self.names:
            raise SemError(f"line {line}: {sym.name} is already defined in this scope")
        self.names[sym.name] = sym

    def lookup(self, name):
        s = self
        while s:
            if name in s.names:
                return s.names[name]
            s = s.parent
        return None


def cstring(s):
    out = []
    for ch in s:
        o = ord(ch)
        if ch in '"\\':
            out.append("\\" + ch)
        elif 32 <= o < 127:
            out.append(ch)
        else:
            out.append(f"\\{o:03o}")
    return '"' + "".join(out) + '"'


class Gen:
    def __init__(self):
        self.out_types = []          # typedefs
        self.out_protos = []
        self.out_globals = []
        self.out_funcs = []
        self.out_init = []           # code of main()
        self.serial = 0
        self.types = []              # composite types that got a C name
        self.scope = Scope()
        self.func = None             # current subprogram info
        self.code = None             # list receiving statements
        self.indent = 1
        self.exits = []              # enclosing compound statements: (match, label, depth)
        self.frames = 0              # GUARD frames open in this function
        self.handler = []            # exception variable of enclosing handlers
        self.excs = []

    def new(self, base):
        self.serial += 1
        return f"{base}{self.serial}"

    def emit(self, line):
        self.code.append("  " * self.indent + line)

    # ------------------------------------------------------------ C types
    def ctype(self, t):
        k = t.kind
        if k == "int":
            return "rt_int"
        if k in ("bool", "enum"):
            return "int"
        if k == "float":
            return "double"
        if k == "string":
            return "rstr"
        if k == "file":
            return "int"
        if k in ("array", "record", "ptr"):
            if not hasattr(t, "cname"):
                self.declare_ctype(t)
            elif k == "record" and getattr(t, "forward", False) and not getattr(t, "defined", False):
                t.defined = True
                fields = " ".join(f"{self.ctype(ft)} {fname.lower()};" for fname, ft, _ in t.comps)
                self.out_types.append(f"struct {t.cname} {{ {fields} }};")
            return t.cname
        if k == "void":
            return "void"
        raise SemError(f"no C type for {k}")

    def declare_ctype(self, t):
        for u in self.types:
            if u.kind == t.kind and t.kind != "ptr" and same(u, t):
                t.cname = u.cname
                return
        if t.kind == "ptr" and not hasattr(t, "target_type"):
            self.finish_ptr(self.scope.lookup(t.name))
            if hasattr(t, "cname"):
                return
        t.cname = self.new({"array": "A", "record": "R", "ptr": "P"}[t.kind])
        self.types.append(t)
        if t.kind == "ptr":
            target = t.target_type
            if target.kind == "record":
                if not hasattr(target, "cname"):
                    target.cname = self.new("R")
                    self.types.append(target)
                    self.out_types.append(f"typedef struct {target.cname} {target.cname};")
                    target.forward = True
                self.out_types.append(f"typedef struct {target.cname} *{t.cname};")
            else:
                self.out_types.append(f"typedef {self.ctype(target)} *{t.cname};")
        elif t.kind == "array":
            self.out_types.append(f"typedef struct {t.cname} {t.cname};")
            elem = self.ctype(t.elem)
            self.out_types.append(f"struct {t.cname} {{ rt_int lo, hi; {elem} *p; }};")
        else:
            fields = " ".join(f"{self.ctype(ft)} {fname.lower()};" for fname, ft, _ in t.comps)
            self.out_types.append(f"typedef struct {t.cname} {t.cname};")
            self.out_types.append(f"struct {t.cname} {{ {fields} }};")
            t.defined = True

    # ------------------------------------------------------------ subtypes
    def resolve_subtype(self, st, scope=None):
        """Return (type, constraint) where constraint is a dict of C code."""
        scope = scope or self.scope
        k = st.kind
        if k == "st_int":
            if st.range:
                return INT, {"lo": self.expr(st.range[0], INT)[0], "hi": self.expr(st.range[1], INT)[0],
                             "mlo": self.manifest(st.range[0]), "mhi": self.manifest(st.range[1])}
            return INT, {}
        if k == "st_float":
            return FLOAT, {}
        if k == "st_enum":
            t = T("enum", lits=st.lits, name=None)
            return t, {}
        if k == "st_string":
            ct, _ = self.resolve_subtype(st.comp)
            if not (ct.kind == "enum" and ct.lits == ASCII_LITS):
                raise SemError(f"line {st.line}: only STRING[ASCII] is supported here")
            cons = {}
            if st.cons:
                cons["len"] = self.expr(st.cons[0], INT)[0]
            return STRING, cons
        if k == "st_array":
            if len(st.index) != 1:
                raise SemError(f"line {st.line}: the bootstrap handles one-dimensional arrays only")
            it, ic = self.resolve_subtype(st.index[0])
            et, ec = self.resolve_subtype(st.elem)
            t = T("array", index=[it], elem=et, elemcons=ec, elemst=st.elem)
            cons = {}
            if "lo" in ic:
                cons = {"lo": ic["lo"], "hi": ic["hi"]}
            elif it.kind == "enum":
                cons = {"lo": "0", "hi": str(len(it.lits) - 1)}
            return t, cons
        if k == "st_record":
            comps = []
            for name, cst in st.comps:
                ct, cc = self.resolve_subtype(cst)
                comps.append((name, ct, cst))
            return T("record", comps=comps), {}
        if k == "st_name":
            if st.name == "BOOL":
                return BOOL, {}
            if st.name == "ASCII":
                return ASCII, {}
            sym = scope.lookup(st.name)
            if sym is None:
                raise SemError(f"line {st.line}: unknown type {st.name}")
            if sym.kind == "abbrev":
                return self.resolve_subtype(sym.subtype)
            if sym.kind == "type":
                if sym.typ.kind == "ptr":
                    return sym.typ, {"args": st.args}
                return self.resolve_subtype(sym.subtype)
            raise SemError(f"line {st.line}: {st.name} is not a type")
        if k == "st_file":
            return FILET, {}
        raise SemError(f"line {st.line}: unsupported subtype form {k}")

    def init_storage(self, lval, t, cons, st=None):
        """Emit code that gives a fresh variable its storage."""
        if t.kind == "ptr":
            self.emit(f"{lval} = NULL;")
        elif t.kind == "string":
            n = cons.get("len")
            if n is None:
                raise SemError("a string variable needs a length")
            self.emit(f"{lval} = rt_str_new({n});")
        elif t.kind == "array":
            lo, hi = cons.get("lo"), cons.get("hi")
            if lo is None:
                raise SemError("an array variable needs index bounds")
            e = self.ctype(t.elem)
            self.emit(f"{lval}.lo = {lo}; {lval}.hi = {hi};")
            self.emit(f"{lval}.p = rt_alloc(sizeof({e}) * (size_t)({lval}.hi >= {lval}.lo ? {lval}.hi - {lval}.lo + 1 : 0));")
            if t.elem.kind in ("string", "array", "record"):
                i = self.new("i")
                self.emit(f"for (rt_int {i} = 0; {i} <= {lval}.hi - {lval}.lo; {i}++) {{")
                self.indent += 1
                self.init_storage(f"{lval}.p[{i}]", t.elem, t.elemcons)
                self.indent -= 1
                self.emit("}")
        elif t.kind == "record":
            for name, ct, cst in t.comps:
                _, cc = self.resolve_subtype(cst)
                self.init_storage(f"{lval}.{name.lower()}", ct, cc)

    # ------------------------------------------------------------ manifest values
    def manifest(self, e):
        k = e.kind
        if k == "int":
            return e.value
        if k == "paren":
            return self.manifest(e.expr)
        if k == "unop" and e.op == "-":
            v = self.manifest(e.arg)
            return None if v is None else -v
        if k == "binop" and e.op in ("+", "-", "*"):
            a, b = self.manifest(e.left), self.manifest(e.right)
            if a is None or b is None:
                return None
            return a + b if e.op == "+" else a - b if e.op == "-" else a * b
        if k == "name":
            s = self.scope.lookup(e.name)
            if s and s.kind == "const":
                return s.mvalue
        return None

    # ------------------------------------------------------------ copying and assignment
    def assign_code(self, lval, t, value, cons=None):
        if t.kind == "string":
            return f"rt_str_assign(&{lval}, {value});"
        if t.kind in ("array", "record"):
            return f"as_{self.ctype(t)}(&{lval}, {value});"
        if t.kind == "int" and cons and cons.get("mlo") is not None and cons.get("mhi") is not None:
            return f"{lval} = rt_range({value}, {cons['mlo']}, {cons['mhi']});"
        return f"{lval} = {value};"

    def copy_code(self, t, value):
        if t.kind == "string":
            return f"rt_str_copy({value})"
        if t.kind in ("array", "record"):
            return f"cp_{self.ctype(t)}({value})"
        return value

    def emit_helpers(self):
        """Assignment, copy and equality for every composite C type."""
        out = []
        done = set()
        for t in self.types:
            if t.cname in done or t.kind == "ptr":
                continue
            done.add(t.cname)
            c = t.cname
            out.append(f"static void as_{c}({c} *d, {c} s);")
            out.append(f"static {c} cp_{c}({c} s);")
            out.append(f"static int eq_{c}({c} a, {c} b);")
        for t in self.types:
            if t.kind == "ptr" or getattr(t, "helpers_done", False):
                continue
            if any(u is not t and getattr(u, "helpers_done", False) and u.cname == t.cname for u in self.types):
                continue
            t.helpers_done = True
            c = t.cname
            if t.kind == "array":
                e = t.elem
                ec = self.ctype(e)
                out.append(f"static void as_{c}({c} *d, {c} s) {{")
                out.append("  if (d->hi - d->lo != s.hi - s.lo) rt_raise_msg(RT_X_SUBTYPE, \"array length\");")
                out.append(f"  for (rt_int i = 0; i <= s.hi - s.lo; i++) {{ {self.elem_assign('d->p[i]', e, 's.p[i]')} }}")
                out.append("}")
                out.append(f"static {c} cp_{c}({c} s) {{")
                out.append(f"  {c} d = s; d.p = rt_alloc(sizeof({ec}) * (size_t)(s.hi >= s.lo ? s.hi - s.lo + 1 : 0));")
                out.append(f"  for (rt_int i = 0; i <= s.hi - s.lo; i++) d.p[i] = {self.copy_code(e, 's.p[i]')};")
                out.append("  return d;")
                out.append("}")
                out.append(f"static int eq_{c}({c} a, {c} b) {{")
                out.append("  if (a.hi - a.lo != b.hi - b.lo) return 0;")
                out.append(f"  for (rt_int i = 0; i <= a.hi - a.lo; i++) if (!({self.eq_code(e, 'a.p[i]', 'b.p[i]')})) return 0;")
                out.append("  return 1;")
                out.append("}")
            else:
                out.append(f"static void as_{c}({c} *d, {c} s) {{")
                for name, ft, _ in t.comps:
                    f = name.lower()
                    out.append("  " + self.elem_assign(f"d->{f}", ft, f"s.{f}"))
                out.append("}")
                out.append(f"static {c} cp_{c}({c} s) {{")
                out.append(f"  {c} d = s;")
                for name, ft, _ in t.comps:
                    f = name.lower()
                    out.append(f"  d.{f} = {self.copy_code(ft, 's.' + f)};")
                out.append("  return d;")
                out.append("}")
                out.append(f"static int eq_{c}({c} a, {c} b) {{")
                conds = " && ".join(self.eq_code(ft, f"a.{n.lower()}", f"b.{n.lower()}") for n, ft, _ in t.comps) or "1"
                out.append(f"  return {conds};")
                out.append("}")
        return out

    def elem_assign(self, lval, t, value):
        if t.kind == "string":
            return f"rt_str_assign(&{lval}, {value});"
        if t.kind in ("array", "record"):
            return f"as_{self.ctype(t)}(&{lval}, {value});"
        return f"{lval} = {value};"

    def eq_code(self, t, a, b):
        if t.kind == "string":
            return f"rt_str_eq({a}, {b})"
        if t.kind in ("array", "record"):
            return f"eq_{self.ctype(t)}({a}, {b})"
        return f"({a} == {b})"

    # ------------------------------------------------------------ program
    def program(self, units):
        if len(units) != 1 or units[0].kind != "capsule":
            raise SemError("the bootstrap translates exactly one main capsule")
        cap = units[0]
        self.code = self.out_init
        self.indent = 1
        self.func = None
        self.declare_body(cap.body, top=True)
        for elem in cap.body:
            self.element(elem, top=True)
        lines = ['#include "paleo.h"', ""]
        lines += self.out_types + [""]
        lines += self.emit_helpers() + [""]
        lines += self.out_protos + [""]
        lines += self.out_globals + [""]
        lines += self.out_funcs
        lines.append("int main(int argc, char **argv) {")
        lines.append("  rt_init(argc, argv);")
        lines.append("  rt_set_lang(0);")
        for cname, name in self.excs:
            lines.append(f"  {cname} = rt_exc({cstring(name)});")
        lines += self.out_init
        lines.append("  rt_main_done();")
        lines.append("  return 0;")
        lines.append("}")
        return "\n".join(lines) + "\n"

    # first pass over a body: deferred declarations may be used before they appear
    def declare_body(self, body, top=False):
        for d in body:
            if d.kind in ("proc", "func"):
                self.declare_subprogram(d)
            elif d.kind == "exception":
                for name in d.names:
                    cname = self.new("ex_" + name.lower() + "_")
                    self.scope.define(Sym("exc", name, cname=cname), d.line)
                    self.out_globals.append(f"static int {cname};")
                    self.excs.append((cname, name))
            elif d.kind in ("ptrtype", "newtype", "abbrev"):
                self.declare_type(d)

    def declare_type(self, d):
        if d.kind == "abbrev":
            self.scope.define(Sym("abbrev", d.name, subtype=d.subtype), d.line)
        elif d.kind == "ptrtype":
            t = T("ptr", name=d.name, decl=d)
            self.scope.define(Sym("type", d.name, typ=t, subtype=None), d.line)
        else:
            self.scope.define(Sym("type", d.name, typ=None, subtype=d.subtype), d.line)

    def finish_ptr(self, sym):
        t = sym.typ
        if hasattr(t, "target_type"):
            return
        d = t.decl
        inner = Scope(self.scope)
        for p in d.params2:
            inner.define(Sym("const", p.name, typ=INT, access="0", mvalue=None), d.line)
        saved = self.scope
        self.scope = inner
        try:
            t.target_type, _ = self.resolve_subtype(d.subtype)
            self.ctype(t)
            self.ctype(t.target_type)
        finally:
            self.scope = saved

    def declare_subprogram(self, d):
        params = []
        for p in d.params:
            pt, pc = self.resolve_subtype(p.subtype) if p.subtype.kind != "st_name" or self.scope.lookup(p.subtype.name) is None or self.scope.lookup(p.subtype.name).kind != "type" or self.scope.lookup(p.subtype.name).typ is None else self.resolve_subtype(p.subtype)
            params.append((p.name, p.mode, pt, pc))
        rt = VOID
        if d.result:
            rt, _ = self.resolve_subtype(d.result)
        cname = self.new("f_" + d.name.lower() + "_")
        sym = Sym(d.kind, d.name, params=params, result=rt, cname=cname, decl=d)
        self.scope.define(sym, d.line)

    # ------------------------------------------------------------ elements
    def element(self, e, top=False):
        k = e.kind
        if k in ("proc", "func"):
            self.subprogram(e)
        elif k in ("exception", "abbrev"):
            pass
        elif k in ("ptrtype", "newtype"):
            sym = self.scope.lookup(e.name)
            if sym.typ is not None and sym.typ.kind == "ptr":
                self.finish_ptr(sym)
        elif k == "var":
            self.var_decl(e, top)
        elif k == "const":
            self.const_decl(e, top)
        elif k == "assert":
            c, t = self.expr(e.cond, BOOL)
            self.emit(f"if (!({c})) rt_raise(RT_X_ASSERT);")
        else:
            self.statement(e)

    def storage_name(self, name, top):
        if top:
            cname = self.new("g_" + name.lower() + "_")
            return cname, cname
        field = self.new(name.lower() + "_")
        self.func["fields"].append(field)
        return field, "F->" + field

    def var_decl(self, d, top):
        t, cons = self.resolve_subtype(d.subtype)
        for name in d.names:
            field, access = self.storage_name(name, top)
            if top:
                self.out_globals.append(f"static {self.ctype(t)} {field};")
            else:
                self.func["ftypes"][field] = self.ctype(t)
            self.init_storage(access, t, cons)
            if d.init is not None:
                v, vt = self.expr(d.init, t)
                self.check_type(vt, t, d.line)
                self.emit(self.assign_code(access, t, v, cons))
            self.scope.define(Sym("var", name, typ=t, cons=cons, access=access, readonly=False), d.line)

    def const_decl(self, d, top):
        if d.subtype is not None:
            t, cons = self.resolve_subtype(d.subtype)
        else:
            t, cons = None, {}
        for name in d.names:
            v, vt = self.expr(d.init, t)
            if t is not None:
                self.check_type(vt, t, d.line)
            ct = t or vt
            mv = self.manifest(d.init) if ct.kind == "int" else None
            field, access = self.storage_name(name, top)
            if top:
                self.out_globals.append(f"static {self.ctype(ct)} {field};")
            else:
                self.func["ftypes"][field] = self.ctype(ct)
            self.emit(f"{access} = {self.copy_code(ct, v)};")
            self.scope.define(Sym("const", name, typ=ct, cons=cons, access=access, mvalue=mv), d.line)

    def check_type(self, got, want, line):
        if want is None:
            return
        if got.kind == "nil" and want.kind == "ptr":
            return
        if not same(got, want):
            raise SemError(f"line {line}: type mismatch ({got.kind} where {want.kind} is required)")

    # ------------------------------------------------------------ subprograms
    def subprogram(self, d):
        sym = self.scope.lookup(d.name)
        saved = (self.code, self.indent, self.func, self.scope, self.exits, self.frames)
        self.code = []
        self.indent = 1
        self.exits = []
        self.frames = 0
        self.scope = Scope(self.scope)
        frame = self.new("FR")
        self.func = {"sym": sym, "fields": [], "ftypes": {}, "frame": frame}
        args = []
        for name, mode, t, cons in sym.params:
            ct = self.ctype(t)
            field = self.new(name.lower() + "_")
            if mode in ("VAR", "READONLY", "OUT"):
                self.func["ftypes"][field] = ct + " *"
                args.append(f"{ct} *{field}")
                access = f"(*F->{field})"
            else:
                self.func["ftypes"][field] = ct
                args.append(f"{ct} {field}")
                access = f"F->{field}"
            self.func["fields"].append(field)
            self.scope.define(Sym("var" if mode != "CONST" else "const", name, typ=t, cons=cons,
                                  access=access, readonly=mode in ("READONLY", "CONST"),
                                  mvalue=None), d.line)
            if mode == "CONST":
                self.emit(f"F->{field} = {self.copy_code(t, field)};")
            else:
                self.emit(f"F->{field} = {field};")
        rt = sym.result
        if rt.kind != "void":
            self.func["ftypes"]["result_"] = self.ctype(rt)
        self.declare_body(d.body)
        for elem in d.body:
            self.element(elem)
        body = self.code
        fields = "".join(f" {ty} {f};" if not ty.endswith("*") else f" {ty}{f};"
                         for f, ty in self.func["ftypes"].items())
        head = f"static {self.ctype(rt)} {sym.cname}({', '.join(args) or 'void'})"
        self.out_protos.append(head + ";")
        fn = [head + " {", f"  struct {frame} {{ int dummy;{fields} }} *F = rt_alloc(sizeof *F);"]
        fn += body
        if rt.kind != "void":
            fn.append("  rt_raise_msg(RT_X_ASSERT, \"function ended without RETURN\");")
            fn.append("ret_:")
            fn.append("  return F->result_;")
        else:
            fn.append("ret_:")
            fn.append("  return;")
        fn.append("}")
        self.out_funcs += fn + [""]
        self.code, self.indent, self.func, self.scope, self.exits, self.frames = saved

    # ------------------------------------------------------------ statements
    def body(self, elems):
        saved = self.scope
        self.scope = Scope(self.scope)
        self.declare_body(elems)
        for e in elems:
            self.element(e)
        self.scope = saved

    def pop_frames(self, depth):
        for i in range(self.frames, depth, -1):
            self.emit(f"RT_POP(xf{i});")

    def statement(self, s):
        k = s.kind
        match = getattr(s, "match", None)
        end_label = None
        if match:
            end_label = self.new("L_end_")
            self.exits.append((match, end_label, self.frames))
        getattr(self, "st_" + k)(s)
        if match:
            self.exits.pop()
            self.emit(f"{end_label}: ;")

    def st_assign(self, s):
        lval, t, cons, ro = self.lvalue(s.target)
        if ro:
            raise SemError(f"line {s.line}: assignment to a readonly data item")
        v, vt = self.expr(s.value, t)
        self.check_type(vt, t, s.line)
        self.emit(self.assign_code(lval, t, v, cons))

    def st_call(self, s):
        c = s.call
        if c.kind == "name":
            c = N("apply", c.line, fn=c, args=[])
        if c.kind == "ttapply":
            c = N("apply", c.line, fn=c, args=[])
        if c.kind != "apply":
            raise SemError(f"line {s.line}: not a procedure invocation")
        code, _ = self.call(c, statement=True)
        self.emit(code + ";")

    def st_if(self, s):
        first = True
        for cond, body in s.arms:
            c, t = self.expr(cond, BOOL)
            self.check_type(t, BOOL, s.line)
            self.emit(("if" if first else "} else if") + f" ({c}) {{")
            first = False
            self.indent += 1
            self.body(body)
            self.indent -= 1
        if s.els is not None:
            self.emit("} else {")
            self.indent += 1
            self.body(s.els)
            self.indent -= 1
        self.emit("}")

    def st_case(self, s):
        sel, st = self.expr(s.sel)
        tmp = self.new("sel")
        self.emit(f"{{ {self.ctype(st)} {tmp} = {sel};")
        self.indent += 1
        first = True
        for labels, body in s.arms:
            conds = []
            for lab in labels:
                if lab[0] == "value":
                    v, vt = self.expr(lab[1], st)
                    self.check_type(vt, st, s.line)
                    conds.append(self.eq_code(st, tmp, v))
                else:
                    lo, _ = self.expr(lab[1], st)
                    hi, _ = self.expr(lab[2], st)
                    conds.append(f"({tmp} >= {lo} && {tmp} <= {hi})")
            self.emit(("if" if first else "} else if") + f" ({' || '.join(conds)}) {{")
            first = False
            self.indent += 1
            self.body(body)
            self.indent -= 1
        self.emit("} else {" if not first else "{")
        self.indent += 1
        if s.els is not None:
            self.body(s.els)
        else:
            self.emit("rt_raise(RT_X_CASE);")
        self.indent -= 1
        self.emit("}")
        self.indent -= 1
        self.emit("}")

    def st_repeat(self, s):
        cont = self.new("L_next_")
        if s.head[0] == "while":
            c, t = self.expr(s.head[1], BOOL)
            self.emit(f"while ({c}) {{")
            self.indent += 1
            self.body(s.body)
            self.indent -= 1
            self.emit("}")
            return
        _, var, rev, st = s.head
        t, cons = self.resolve_subtype(st)
        if t.kind == "enum" and "lo" not in cons:
            lo, hi = "0", str(len(t.lits) - 1)
        elif "lo" in cons:
            lo, hi = cons["lo"], cons["hi"]
        else:
            raise SemError(f"line {s.line}: a FOR index needs a range")
        top = self.func is None
        field, access = self.storage_name(var, top)
        if top:
            self.out_globals.append(f"static {self.ctype(t)} {field};")
        else:
            self.func["ftypes"][field] = self.ctype(t)
        lov, hiv = self.new("lo"), self.new("hi")
        self.emit(f"{{ rt_int {lov} = {lo}, {hiv} = {hi};")
        self.indent += 1
        if rev:
            self.emit(f"for (rt_int it_ = {hiv}; it_ >= {lov}; it_--) {{")
        else:
            self.emit(f"for (rt_int it_ = {lov}; it_ <= {hiv}; it_++) {{")
        self.indent += 1
        self.emit(f"{access} = it_;")
        saved = self.scope
        self.scope = Scope(self.scope)
        self.scope.define(Sym("const", var, typ=t, cons=cons, access=access, readonly=True, mvalue=None), s.line)
        self.body(s.body)
        self.scope = saved
        self.emit(f"{cont}: ;")
        self.indent -= 1
        self.emit("}")
        self.indent -= 1
        self.emit("}")

    def st_begin(self, s):
        self.emit("{")
        self.indent += 1
        self.body(s.body)
        self.indent -= 1
        self.emit("}")

    def st_exit(self, s):
        for match, label, depth in reversed(self.exits):
            if match == s.target:
                self.pop_frames(depth)
                self.emit(f"goto {label};")
                return
        raise SemError(f"line {s.line}: EXIT {s.target} names no enclosing statement")

    def st_return(self, s):
        if self.func is None:
            self.pop_frames(0)
            self.emit("rt_main_done();")
            return
        rt = self.func["sym"].result
        if rt.kind == "void":
            if s.value is not None:
                raise SemError(f"line {s.line}: a procedure returns no value")
            self.pop_frames(0)
            self.emit("goto ret_;")
            return
        if s.value is None:
            raise SemError(f"line {s.line}: RETURN needs a value in a function")
        v, vt = self.expr(s.value, rt)
        self.check_type(vt, rt, s.line)
        self.emit(f"F->result_ = {v};")
        self.pop_frames(0)
        self.emit("goto ret_;")

    def st_raise(self, s):
        sym = self.scope.lookup(s.name)
        if s.name.startswith("X_") and (sym is None or sym.kind != "exc"):
            self.emit(f"rt_raise(rt_exc({cstring(s.name)}));")
            return
        if sym is None or sym.kind != "exc":
            raise SemError(f"line {s.line}: {s.name} is not an exception")
        self.emit(f"rt_raise({sym.cname});")

    def st_reraise(self, s):
        if not self.handler:
            raise SemError(f"line {s.line}: RERAISE outside a handler")
        self.emit(f"rt_raise({self.handler[-1]});")

    def exc_id(self, name, line):
        sym = self.scope.lookup(name)
        if sym is not None and sym.kind == "exc":
            return sym.cname
        if name.startswith("X_"):
            return f"rt_exc({cstring(name)})"
        raise SemError(f"line {line}: {name} is not an exception")

    def st_guard(self, s):
        self.frames += 1
        f = f"xf{self.frames}"
        x = self.new("x")
        self.emit(f"{{ rt_frame {f};")
        self.indent += 1
        self.emit(f"if (RT_TRY({f})) {{")
        self.indent += 1
        self.body(s.body)
        self.emit(f"RT_POP({f});")
        self.indent -= 1
        self.emit("} else {")
        self.indent += 1
        self.frames -= 1
        self.emit(f"RT_POP({f});")
        self.emit(f"int {x} = rt_xcur;")
        self.handler.append(x)
        first = True
        for names, body in s.handlers:
            conds = " || ".join(f"{x} == {self.exc_id(n, s.line)}" for n in names)
            self.emit(("if" if first else "} else if") + f" ({conds}) {{")
            first = False
            self.indent += 1
            self.body(body)
            self.indent -= 1
        if s.els is not None:
            self.emit("} else {" if not first else "{")
            self.indent += 1
            self.body(s.els)
            self.indent -= 1
            self.emit("}")
        else:
            if not first:
                self.emit("} else {")
                self.emit(f"  rt_raise({x});")
                self.emit("}")
            else:
                self.emit(f"rt_raise({x});")
        self.handler.pop()
        self.indent -= 1
        self.emit("}")
        self.indent -= 1
        self.emit("}")

    def st_alloc(self, s):
        lval, t, cons, ro = self.lvalue(s.var)
        if t.kind != "ptr":
            raise SemError(f"line {s.line}: ALLOC needs an indirect variable")
        sym = self.scope.lookup(t.name)
        self.finish_ptr(sym)
        d = t.decl
        target = t.target_type
        tc = self.ctype(target)
        tmp = self.new("cell")
        self.emit(f"{{ {tc} *{tmp} = rt_alloc(sizeof({tc}));")
        self.indent += 1
        inner = Scope(self.scope)
        if len(s.args) != len(d.params2):
            raise SemError(f"line {s.line}: ALLOC needs {len(d.params2)} actual parameters")
        for p, a in zip(d.params2, s.args):
            v, _ = self.expr(a, INT)
            pv = self.new("pv")
            self.emit(f"rt_int {pv} = {v};")
            inner.define(Sym("const", p.name, typ=INT, access=pv, mvalue=None), s.line)
        saved = self.scope
        self.scope = inner
        _, tcons = self.resolve_subtype(d.subtype)
        self.init_storage(f"(*{tmp})", target, tcons)
        self.scope = saved
        if s.init is not None:
            v, vt = self.expr(s.init, target)
            self.check_type(vt, target, s.line)
            self.emit(self.assign_code(f"(*{tmp})", target, v, tcons))
        self.emit(f"{lval} = {tmp};")
        self.indent -= 1
        self.emit("}")

    # ------------------------------------------------------------ lvalues
    def lvalue(self, e):
        """Return (C lvalue, type, constraint, readonly)."""
        k = e.kind
        if k == "name":
            sym = self.scope.lookup(e.name)
            if sym is None:
                raise SemError(f"line {e.line}: {e.name} is not defined")
            if sym.kind not in ("var", "const"):
                raise SemError(f"line {e.line}: {e.name} is not a variable")
            return sym.access, sym.typ, getattr(sym, "cons", {}), sym.kind == "const" or getattr(sym, "readonly", False)
        if k == "paren":
            return self.lvalue(e.expr)
        if k == "select":
            base, bt, _, ro = self.lvalue(e.obj)
            return self.select_on(base, bt, e, ro)
        if k == "apply":
            base, bt, _, ro = self.lvalue(e.fn)
            return self.index_on(base, bt, e, ro, lv=True)
        raise SemError(f"line {e.line}: not a variable")

    def deref(self, base, bt):
        return f"(*({self.ctype(bt)})rt_nil_check({base}))"

    def select_on(self, base, bt, e, ro):
        name = e.name
        if bt.kind == "ptr":
            sym = self.scope.lookup(bt.name)
            self.finish_ptr(sym)
            target = bt.target_type
            d = self.deref(base, bt)
            if name == "ALL":
                return d, target, {}, False
            return self.select_on(d, target, e, False)
        if bt.kind == "record":
            for cname, ct, cst in bt.comps:
                if cname == name:
                    _, cc = self.resolve_subtype(cst)
                    return f"{base}.{name.lower()}", ct, cc, ro
            raise SemError(f"line {e.line}: no component {name}")
        raise SemError(f"line {e.line}: cannot select {name} here")

    def index_on(self, base, bt, e, ro, lv=False):
        if bt.kind == "ptr":
            sym = self.scope.lookup(bt.name)
            self.finish_ptr(sym)
            return self.index_on(self.deref(base, bt), bt.target_type, e, False, lv)
        if len(e.args) != 1:
            raise SemError(f"line {e.line}: one subscript expected")
        a = e.args[0]
        if bt.kind == "string":
            if a.kind == "range":
                lo, _ = self.expr(a.lo, INT)
                hi, _ = self.expr(a.hi, INT)
                if lv:
                    raise SemError(f"line {e.line}: slice assignment is not in the bootstrap")
                return f"rt_str_slice({base}, {lo}, {hi})", STRING, {}, True
            i, it = self.expr(a, INT)
            if lv:
                return f"(*rt_str_at(&{base}, {i}))", ASCII, {}, ro
            return f"rt_str_get({base}, {i})", ASCII, {}, True
        if bt.kind == "array":
            i, it = self.expr(a, bt.index[0])
            return f"{base}.p[rt_index({i}, {base}.lo, {base}.hi) - {base}.lo]", bt.elem, bt.elemcons, ro
        raise SemError(f"line {e.line}: cannot subscript this")

    # ------------------------------------------------------------ expressions
    def expr(self, e, want=None):
        """Return (C code, type)."""
        k = e.kind
        if k == "int":
            if want is not None and want.kind == "float":
                return f"{e.value}.0", FLOAT
            return f"((rt_int){e.value}LL)", INT
        if k == "float":
            return e.value, FLOAT
        if k == "bool":
            return ("1" if e.value else "0"), BOOL
        if k == "str":
            return f"rt_str({cstring(e.value)}, {len(e.value)})", STRING
        if k == "nil":
            return "NULL", NILT
        if k == "enum":
            t = want if want is not None and want.kind == "enum" else None
            if t is None:
                t = self.enum_type_of(e.value, e.line)
            if e.value not in t.lits:
                raise SemError(f"line {e.line}: '{e.value} is not a value of this type")
            return str(t.lits.index(e.value)), t
        if k == "paren":
            return self.expr(e.expr, want)
        if k == "name":
            sym = self.scope.lookup(e.name)
            if sym is None:
                if e.name in ("SIZELN", "EOF", "SYS_IN", "SYS_OUT"):
                    return self.call(N("apply", e.line, fn=e, args=[]))
                raise SemError(f"line {e.line}: {e.name} is not defined")
            if sym.kind in ("var", "const"):
                return sym.access, sym.typ
            if sym.kind == "func":
                return self.call(N("apply", e.line, fn=e, args=[]))
            raise SemError(f"line {e.line}: {e.name} cannot be used as a value")
        if k == "unop":
            if e.op == "NOT":
                a, t = self.expr(e.arg, BOOL)
                return f"(!{a})", BOOL
            a, t = self.expr(e.arg, want)
            if e.op == "+":
                return a, t
            if t.kind == "float":
                return f"(-{a})", FLOAT
            return f"rt_neg({a})", INT
        if k == "binop":
            return self.binop(e, want)
        if k == "apply":
            fn = e.fn
            if fn.kind in ("name", "ttapply"):
                name = fn.name if fn.kind == "name" else fn.fn.name
                sym = self.scope.lookup(name)
                if sym is None or sym.kind in ("func", "proc"):
                    return self.call(e)
            base, bt = self.expr(fn)
            code, t, _, _ = self.index_on(base, bt, e, True)
            return code, t
        if k == "select":
            if e.name in ("LEN", "MIN", "MAX"):
                return self.attribute(e)
            base, bt = self.expr(e.obj)
            code, t, _, _ = self.select_on(base, bt, e, True)
            return code, t
        if k == "ttapply":
            return self.call(N("apply", e.line, fn=e, args=[]))
        if k == "cons":
            return self.constructor(e, want)
        raise SemError(f"line {e.line}: unsupported expression {k}")

    def constructor(self, e, want):
        if want is None or want.kind != "record":
            raise SemError(f"line {e.line}: the bootstrap builds record constructors only")
        c = self.ctype(want)
        tmp = self.new("rc")
        parts = [f"{c} {tmp};"]
        names = [n for n, _, _ in want.comps]
        if len(e.items) != len(names):
            raise SemError(f"line {e.line}: a record constructor needs every component")
        for item, (name, ft, _) in zip(e.items, want.comps):
            if not item.keys or item.keys[0][1].kind != "name" or item.keys[0][1].name != name:
                raise SemError(f"line {e.line}: component {name} expected in the constructor")
            v, vt = self.expr(item.value, ft)
            self.check_type(vt, ft, e.line)
            parts.append(f"{tmp}.{name.lower()} = {self.copy_code(ft, v)};")
        return "({ " + " ".join(parts) + f" {tmp}; }})", want

    def enum_type_of(self, lit, line):
        if lit in ASCII_LITS:
            return ASCII
        found = []
        s = self.scope
        while s:
            for sym in s.names.values():
                if sym.kind in ("abbrev", "type") and getattr(sym, "subtype", None) is not None \
                        and sym.subtype.kind == "st_enum" and lit in sym.subtype.lits:
                    t, _ = self.resolve_subtype(sym.subtype)
                    found.append(t)
            s = s.parent
        if not found:
            raise SemError(f"line {line}: cannot tell the type of '{lit}")
        return found[0]

    def attribute(self, e):
        if e.name == "LEN":
            base, bt = self.expr(e.obj)
            if bt.kind == "ptr":
                sym = self.scope.lookup(bt.name)
                self.finish_ptr(sym)
                base, bt = self.deref(base, bt), bt.target_type
            if bt.kind != "string":
                raise SemError(f"line {e.line}: LEN applies to strings")
            return f"({base}).len", INT
        # .MIN / .MAX of a subtype named by an abbreviation
        if e.obj.kind == "name":
            sym = self.scope.lookup(e.obj.name)
            if sym is not None and sym.kind in ("abbrev", "type"):
                t, cons = self.resolve_subtype(N("st_name", e.line, name=e.obj.name, tt=None, args=None))
                if t.kind == "enum":
                    return ("0" if e.name == "MIN" else str(len(t.lits) - 1)), t
                if "lo" in cons:
                    return (cons["lo"] if e.name == "MIN" else cons["hi"]), t
        raise SemError(f"line {e.line}: unsupported attribute {e.name}")

    def binop(self, e, want):
        op = e.op
        if op in ("AND", "OR", "XOR"):
            a, ta = self.expr(e.left, BOOL)
            b, tb = self.expr(e.right, BOOL)
            self.check_type(ta, BOOL, e.line)
            self.check_type(tb, BOOL, e.line)
            c = {"AND": "&&", "OR": "||", "XOR": "!="}[op]
            return f"({a} {c} {b})", BOOL
        if op == "&":
            a, ta = self.expr(e.left, ASCII if (e.left.kind == "enum") else None)
            b, tb = self.expr(e.right, ASCII if (e.right.kind == "enum") else None)
            sa, sb = ta.kind == "string", tb.kind == "string"
            if sa and sb:
                return f"rt_str_cat({a}, {b})", STRING
            if sa and tb.kind == "enum":
                return f"rt_str_catc({a}, {b})", STRING
            if ta.kind == "enum" and sb:
                return f"rt_str_ccat({a}, {b})", STRING
            if ta.kind == "enum" and tb.kind == "enum":
                return f"rt_str_cc({a}, {b})", STRING
            raise SemError(f"line {e.line}: & needs strings or characters")
        if op in ("=", "/=", "<", "<=", ">", ">="):
            hint = None
            if e.left.kind in ("enum", "nil", "int"):
                _, hint = self.expr(e.right)
            a, ta = self.expr(e.left, hint)
            b, tb = self.expr(e.right, ta)
            if not (ta.kind == "nil" or tb.kind == "nil"):
                self.check_type(tb, ta, e.line)
            t = ta if ta.kind != "nil" else tb
            if t.kind == "string":
                if op == "=":
                    return f"rt_str_eq({a}, {b})", BOOL
                if op == "/=":
                    return f"(!rt_str_eq({a}, {b}))", BOOL
                if op == "<":
                    return f"rt_str_lt({a}, {b})", BOOL
                if op == "<=":
                    return f"rt_str_le({a}, {b})", BOOL
                if op == ">":
                    return f"rt_str_lt({b}, {a})", BOOL
                return f"rt_str_le({b}, {a})", BOOL
            if t.kind in ("array", "record"):
                if op not in ("=", "/="):
                    raise SemError(f"line {e.line}: no ordering for composites")
                c = self.eq_code(t, a, b)
                return (c if op == "=" else f"(!{c})"), BOOL
            c = "!=" if op == "/=" else "==" if op == "=" else op
            return f"({a} {c} {b})", BOOL
        a, ta = self.expr(e.left, want)
        b, tb = self.expr(e.right, ta)
        if ta.kind == "float" or tb.kind == "float":
            c = {"+": "+", "-": "-", "*": "*"}.get(op)
            if c:
                return f"({a} {c} {b})", FLOAT
            if op == "/":
                return f"rt_fdiv({a}, {b})", FLOAT
            if op == "**":
                return f"rt_fpow({a}, {b})", FLOAT
        self.check_type(ta, INT, e.line)
        self.check_type(tb, INT, e.line)
        fn = {"+": "rt_add", "-": "rt_sub", "*": "rt_mul", "DIV": "rt_div",
              "MOD": "rt_mod", "**": "rt_pow"}.get(op)
        if fn is None:
            raise SemError(f"line {e.line}: operator {op} is not defined for INT")
        return f"{fn}({a}, {b})", INT

    # ------------------------------------------------------------ invocations
    def call(self, e, statement=False):
        fn = e.fn
        tt = None
        if fn.kind == "ttapply":
            tt = fn.tt
            fn = fn.fn
        name = fn.name
        sym = self.scope.lookup(name)
        if sym is None:
            return self.builtin(name, tt, e.args, e.line, statement)
        if sym.kind not in ("func", "proc"):
            raise SemError(f"line {e.line}: {name} cannot be invoked")
        if statement and sym.kind != "proc":
            raise SemError(f"line {e.line}: {name} is a function, not a procedure")
        if not statement and sym.kind != "func":
            raise SemError(f"line {e.line}: {name} is a procedure, not a function")
        if len(e.args) != len(sym.params):
            raise SemError(f"line {e.line}: {name} needs {len(sym.params)} actual parameters")
        args = []
        for a, (pname, mode, pt, pc) in zip(e.args, sym.params):
            if mode in ("VAR", "OUT"):
                lv, lt, _, ro = self.lvalue(a)
                if ro:
                    raise SemError(f"line {e.line}: {pname} needs a variable")
                self.check_type(lt, pt, e.line)
                args.append(f"&{lv}")
            elif mode == "READONLY":
                try:
                    lv, lt, _, _ = self.lvalue(a)
                    self.check_type(lt, pt, e.line)
                    args.append(f"&{lv}")
                except SemError:
                    v, vt = self.expr(a, pt)
                    self.check_type(vt, pt, e.line)
                    ct = self.ctype(pt)
                    args.append(f"({{ {ct} *b_ = rt_alloc(sizeof({ct})); *b_ = {v}; b_; }})")
            else:
                v, vt = self.expr(a, pt)
                self.check_type(vt, pt, e.line)
                if pt.kind == "int" and pc.get("mlo") is not None and pc.get("mhi") is not None:
                    v = f"rt_range({v}, {pc['mlo']}, {pc['mhi']})"
                args.append(v)
        return f"{sym.cname}({', '.join(args)})", sym.result if not statement else VOID

    def builtin(self, name, tt, args, line, statement):
        def arg(i, want=None):
            return self.expr(args[i], want)

        def need(n):
            if len(args) != n:
                raise SemError(f"line {line}: {name} needs {n} actual parameters")

        if name in ("POS", "SUCC", "PRED"):
            need(1)
            a, t = arg(0)
            if name == "POS":
                if t.kind != "enum":
                    raise SemError(f"line {line}: POS needs an enumeration value")
                return f"((rt_int)({a}) + 1)", INT
            if t.kind == "int":
                return (f"rt_add({a}, 1)" if name == "SUCC" else f"rt_sub({a}, 1)"), INT
            n = len(t.lits) - 1
            return (f"rt_range({a} + 1, 0, {n})" if name == "SUCC" else f"rt_range({a} - 1, 0, {n})"), t
        if name == "ABS":
            need(1)
            a, t = arg(0)
            return (f"rt_abs({a})" if t.kind == "int" else f"fabs({a})"), t
        if name == "CNVT":
            need(1)
            if not tt:
                raise SemError(f"line {line}: CNVT needs a target type in [ ]")
            target = tt[0]
            tgt = target.kind if target.kind.startswith("st_") else None
            a, t = arg(0)
            if tgt == "st_string" and t.kind == "int":
                return f"rt_str_of_int({a})", STRING
            if tgt == "st_int" and t.kind == "string":
                return f"rt_int_of_str({a})", INT
            raise SemError(f"line {line}: unsupported conversion")
        if name == "WRITELN":
            if len(args) == 0:
                return "rt_newline()", VOID
            a, t = arg(len(args) - 1, STRING)
            if t.kind != "string":
                raise SemError(f"line {line}: WRITELN writes a string")
            return f"rt_putln({a})", VOID
        if name == "WRITE":
            need(2)
            a, t = arg(1)
            if t.kind == "string":
                return f"rt_put({a})", VOID
            if t.kind == "enum":
                return f"rt_putc({a})", VOID
            raise SemError(f"line {line}: WRITE writes a character or a string")
        if name == "READLN":
            lv, lt, _, _ = self.lvalue(args[-1])
            return f"rt_readln(&{lv})", VOID
        if name == "SIZELN":
            return "rt_sizeln()", INT
        if name == "EOF":
            return "rt_eof()", BOOL
        if name in ("SYS_IN", "SYS_OUT"):
            return "0", FILET
        if name in ("OPEN", "CLOSE"):
            return "(void)0", VOID
        if name == "HALT":
            need(1)
            a, _ = arg(0, INT)
            return f"rt_exit({a})", VOID
        raise SemError(f"line {line}: {name} is not defined")


def main():
    if len(sys.argv) != 2:
        print("usage: redboot.py file.red > file.c", file=sys.stderr)
        sys.exit(2)
    path = sys.argv[1]
    text = open(path).read()
    try:
        units = parse(text, path)
        c = Gen().program(units)
    except Exception as ex:  # report and stop
        if os.environ.get("REDBOOT_TRACE"):
            raise
        print(f"redboot: {ex}", file=sys.stderr)
        sys.exit(1)
    sys.stdout.write(c)


if __name__ == "__main__":
    main()
