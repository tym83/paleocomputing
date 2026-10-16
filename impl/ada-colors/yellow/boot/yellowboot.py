#!/usr/bin/env python3
"""yellowboot -- the bootstrap translator for YELLOW (SRI International, 1978).

It understands the part of YELLOW that the first yellowc is written in: one
module, the simple declarations (CONST, VAR, REPRESENTATION) and routines
declared at the level of the module; INTEGER, BOOLEAN, the ASCII alphabet,
enumerations, arrays (indexed by integers or scalars, any number of
dimensions), records, pointers and files; all the statements except GOTO;
exception handlers; and the standard procedures of Sections XI and XII that
the compiler needs. It translates to C linked with rt/paleo.c.

Usage: yellowboot.py in.yel > out.c
"""

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from yellowlex import LexError  # noqa: E402
from yellowparse import N, ParseError, parse  # noqa: E402


class SemError(Exception):
    pass


# ---- representations -------------------------------------------------------

class R:
    """A representation: its type (kind and identity) and what the C needs."""

    def __init__(self, kind, **kw):
        self.kind = kind          # int bool char enum float array uarray record ptr file str nil void
        self.lo = self.hi = None  # C text of the bounds of a discrete representation
        self.mlo = self.mhi = None
        self.desc = None          # C name of the run-time descriptor (array, record)
        self.cname = None         # C struct name (record)
        self.__dict__.update(kw)

    def discrete(self):
        return self.kind in ("int", "bool", "char", "enum")


INT = R("int", lo="(-INT64_MAX)", hi="INT64_MAX", tid="INTEGER")
BOOL = R("bool", lo="0", hi="1", mlo=0, mhi=1, tid="BOOLEAN", lits=["FALSE", "TRUE"])
CHAR = R("char", lo="0", hi="127", mlo=0, mhi=127, tid="ASCII")
FLOAT = R("float", tid="FLOATING")
VOID = R("void", tid="")
NIL = R("nil", tid="")
OPEN_MODE = R("enum", lo="0", hi="2", mlo=0, mhi=2, tid="OPEN_MODE", lits=["READ", "WRITE", "APPEND"],
              ordered=False)

# the mnemonics of the ASCII alphabet: the control characters by their names,
# and the two quotation marks, which a literal cannot contain (p.997, p.1131)
CONTROL = ["NUL", "SOH", "STX", "ETX", "EOT", "ENQ", "ACK", "BEL", "BS", "HT", "LF", "VT",
           "FF", "CR", "SO", "SI", "DLE", "DC1", "DC2", "DC3", "DC4", "NAK", "SYN", "ETB",
           "CAN", "EM", "SUB", "ESC", "FS", "GS", "RS", "US"]
MNEMONIC = {name: i for i, name in enumerate(CONTROL)}
MNEMONIC.update({"SP": 32, "DEL": 127, "SQ": 39, "DQ": 34})


def char_code(text, line):
    if len(text) == 1:
        return ord(text)
    if text in MNEMONIC:
        return MNEMONIC[text]
    raise SemError(f"line {line}: '{text}' is not a character of ASCII")


def same_type(a, b):
    if a is b:
        return True
    if a.kind in ("int",) and b.kind == "int":
        return True
    return a.tid == b.tid and a.tid != ""


def ctype(r):
    k = r.kind
    if k in ("int", "bool", "enum"):
        return "rt_int"
    if k == "char":
        return "unsigned char"
    if k == "float":
        return "double"
    if k in ("array", "uarray", "str"):
        return "yarr"
    if k == "record":
        return r.cname
    if k == "ptr":
        return ctype(r.base()) + " *"
    if k == "file":
        return "yfile *"
    if k == "void":
        return "void"
    if k == "nil":
        return "void *"
    raise SemError(f"no C type for {k}")


def desc(r):
    k = r.kind
    if k in ("int", "bool", "enum"):
        return "&y_d_int"
    if k == "char":
        return "&y_d_byte"
    if k == "float":
        return "&y_d_float"
    if k == "ptr":
        return "&y_d_ptr"
    if k == "file":
        return "&y_d_opaque"
    if k in ("array", "record"):
        return "&" + r.desc
    raise SemError(f"no descriptor for {k}")


def deep(r):
    return r.kind in ("array", "uarray") or (r.kind == "record" and r.deep)


class Sym:
    def __init__(self, kind, name, **kw):
        self.kind = kind          # var const rep lit routine
        self.name = name
        self.__dict__.update(kw)


def cstring(codes):
    out = []
    for c in codes:
        if c == 34:
            out.append('\\"')
        elif c == 92:
            out.append("\\\\")
        elif 32 <= c < 127:
            out.append(chr(c))
        else:
            out.append("\\%03o" % c)
    return '"' + "".join(out) + '"'


class Gen:
    def __init__(self):
        self.types = []           # struct typedefs and definitions
        self.globals = []
        self.protos = []
        self.funcs = []
        self.init = []            # module elaboration
        self.serial = 0
        self.scopes = []
        self.frames = []          # active exception frames in the routine
        self.loops = []           # (name, label, frame depth)
        self.blockframe = []      # per block: its frame name or None
        self.routine = None
        self.out = None           # lines of the code being written
        self.locals_decl = None
        self.pending_ptrs = []

    def new(self, base):
        self.serial += 1
        return f"{base}{self.serial}"

    def emit(self, s):
        self.out.append(s)

    # ---- scopes ---------------------------------------------------------
    def lookup(self, name, line=0):
        for sc in reversed(self.scopes):
            if name in sc:
                return sc[name]
        raise SemError(f"line {line}: {name} is not declared")

    def define(self, name, sym, line=0):
        sc = self.scopes[-1]
        if name in sc and sc[name].kind != "lit":
            raise SemError(f"line {line}: {name} is declared twice")
        sc[name] = sym

    def std_scope(self):
        sc = {}
        for name, r in (("INTEGER", INT), ("BOOLEAN", BOOL), ("ASCII", CHAR),
                        ("STANDARD_ALPHABET", CHAR), ("FLOATING", FLOAT),
                        ("OPEN_MODE", OPEN_MODE)):
            sc[name] = Sym("rep", name, rep=r, typeid=True)
        for i, lit in enumerate(BOOL.lits):
            sc[lit] = Sym("lit", lit, rep=BOOL, val=i)
        for i, lit in enumerate(OPEN_MODE.lits):
            sc[lit] = Sym("lit", lit, rep=OPEN_MODE, val=i)
        return sc

    # ---- program ----------------------------------------------------------
    def program(self, units):
        if len(units) != 1 or units[0].kind != "module":
            raise SemError("the bootstrap translates one module")
        m = units[0]
        self.scopes = [self.std_scope(), {}]
        self.out = self.init
        self.emit("static void y_elaborate(void) {")
        self.global_level = True
        self.declarations(m.body.decls)
        self.global_level = False
        # the body of the module, with its handler
        self.routine = None
        self.frames = []
        self.locals_decl = []
        self.block_stmts(m.body)
        self.emit("}")
        self.init[1:1] = self.locals_decl
        self.locals_decl = None
        lines = ['#include "paleo.h"', "#include <math.h>"]
        lines += self.types + self.globals + self.protos + self.funcs + self.init
        lines += ["int main(int argc, char **argv) {", "y_lang();", "rt_init(argc, argv);",
                  "y_elaborate();", "rt_main_done();", "return 0;", "}"]
        return "\n".join(lines) + "\n"

    # ---- declarations ---------------------------------------------------
    def declarations(self, decls):
        routines = []
        for d in decls:
            if d.kind == "routine":
                if not self.global_level:
                    raise SemError(f"line {d.line}: the bootstrap takes routines at module level only")
                self.routine_header(d)
                routines.append(d)
            else:
                self.simple_decl(d)
        self.resolve_pointers()
        for d in routines:
            self.routine_body(d)

    def simple_decl(self, d):
        k = d.kind
        if k == "repdecl":
            r = self.rep(d.rep, d.name)
            self.define(d.name, Sym("rep", d.name, rep=r), d.line)
            # a pointer representation may come before its base (VII.I)
            for bname, holder, line in self.pending_ptrs:
                if bname == d.name:
                    holder["r"] = r
            self.pending_ptrs = [p for p in self.pending_ptrs if p[0] != d.name]
        elif k == "type":
            r = self.rep(d.typ, d.name)
            self.define(d.name, Sym("rep", d.name, rep=r, typeid=True), d.line)
        elif k == "const":
            r = self.rep(d.rep)
            for name, _ in d.names:
                code, rt = self.expr(d.init, r)
                mv = self.manifest(d.init)
                cn = self.var_cname(name)
                self.decl_var(cn, r)
                self.store(cn, r, code, rt, d.line)
                self.define(name, Sym("const", name, cname=cn, rep=r, mval=mv), d.line)
        elif k == "var":
            r = self.rep(d.rep)
            for name, _ in d.names:
                cn = self.var_cname(name)
                self.decl_var(cn, r)
                if d.init is not None:
                    code, rt = self.expr(d.init, r)
                    self.store(cn, r, code, rt, d.line)
                self.define(name, Sym("var", name, cname=cn, rep=r), d.line)
        elif k == "label":
            raise SemError(f"line {d.line}: the bootstrap has no labels")
        else:
            raise SemError(f"line {d.line}: the bootstrap does not translate {k} declarations")

    def var_cname(self, name):
        return ("g_" if self.global_level else "l_") + name + "_" + str(self.new(""))

    def decl_var(self, cn, r):
        if self.global_level:
            self.globals.append(f"static {ctype(r)} {cn};")
        else:
            self.locals_decl.append(f"{ctype(r)} {cn};")
        if r.kind == "array" or (r.kind == "record" and r.deep):
            self.emit(f"y_init({desc(r)}, &{cn});")

    def rep_decl_desc(self, name):
        if self.global_level:
            self.globals.append(f"static ydesc {name};")
        else:
            self.locals_decl.append(f"ydesc {name};")

    def rep(self, n, name=None):
        k = n.kind
        if k == "rname":
            sym = self.lookup(n.name, n.line)
            if sym.kind != "rep":
                raise SemError(f"line {n.line}: {n.name} is not a representation")
            r = sym.rep
            if n.q is not None:
                if not r.discrete():
                    raise SemError(f"line {n.line}: only a discrete representation takes a range")
                lo, _ = self.expr(n.q.lo, r)
                hi, _ = self.expr(n.q.hi, r)
                q = R(r.kind, **{k2: v for k2, v in r.__dict__.items() if k2 not in ("kind",)})
                q.lo, q.hi = lo, hi
                q.mlo, q.mhi = self.manifest(n.q.lo), self.manifest(n.q.hi)
                return q
            if r.kind == "int" and r is INT:
                raise SemError(f"line {n.line}: INTEGER needs a range (VI.A.1.a)")
            return r
        if k == "enum":
            r = R("enum", lits=n.ids, ordered=n.ordered, tid=name or self.new("enum"),
                  lo="0", hi=str(len(n.ids) - 1), mlo=0, mhi=len(n.ids) - 1)
            for i, lit in enumerate(n.ids):
                self.define(lit, Sym("lit", lit, rep=r, val=i), n.line)
            return r
        if k == "array":
            idx = [self.rep(i) for i in n.idx]
            for i in idx:
                if not i.discrete():
                    raise SemError(f"line {n.line}: an index is an integer or scalar representation")
            elem = self.rep(n.elem)
            r = R("array", idx=idx, elem=elem, tid=name or self.new("array"))
            r.desc = self.new("yd_")
            self.rep_decl_desc(r.desc)
            nd = len(idx)
            self.emit(f"{{ rt_int lo[{nd}] = {{{', '.join(i.lo for i in idx)}}}, "
                      f"hi[{nd}] = {{{', '.join(i.hi for i in idx)}}}; "
                      f"y_desc_array(&{r.desc}, {nd}, lo, hi, {desc(elem)}); }}")
            return r
        if k == "record":
            if n.sel is not None:
                raise SemError(f"line {n.line}: the bootstrap has no variant records")
            fields = []
            for f in n.fields:
                fr = self.rep(f.rep)
                for fname, _ in f.names:
                    fields.append((fname, fr, f.cls))
            r = R("record", fields=fields, tid=name or self.new("record"))
            r.cname = self.new("yR")
            r.desc = self.new("yd_")
            r.deep = any(deep(fr) for _, fr, _ in fields)
            self.types.append(f"typedef struct {r.cname} {r.cname};")
            self.struct_after.append(r)
            self.rep_decl_desc(r.desc)
            offs = ", ".join(f"offsetof({r.cname}, f_{fn})" for fn, _, _ in fields)
            fds = ", ".join(desc(fr) for _, fr, _ in fields)
            nf = len(fields)
            self.globals.append(f"static const size_t {r.desc}_o[] = {{{offs}}};")
            self.globals.append(f"static const ydesc *const {r.desc}_f[] = {{{fds}}};")
            self.emit(f"y_desc_record(&{r.desc}, sizeof({r.cname}), {nf}, {r.desc}_o, {r.desc}_f);")
            return r
        if k == "ptr" or k == "pointer":
            r = R("ptr", tid=name or self.new("ptr"))
            b = n.base
            if b.kind == "rname" and b.q is None:
                bname = b.name
                try:
                    sym = self.lookup(bname, b.line)
                    target = sym.rep
                    r.base = lambda t=target: t
                except SemError:
                    holder = {}
                    r.base = lambda h=holder: h["r"]
                    self.pending_ptrs.append((bname, holder, b.line))
            else:
                target = self.rep(b)
                r.base = lambda t=target: t
            return r
        if k == "file":
            return R("file", elem=self.rep(n.base), tid=name or self.new("file"))
        raise SemError(f"line {n.line}: the bootstrap does not take {k} representations")

    def resolve_pointers(self):
        for bname, holder, line in self.pending_ptrs:
            raise SemError(f"line {line}: {bname} is not declared")
        # struct bodies, once every pointer base is known
        for r in self.struct_after:
            fl = " ".join(f"{ctype(fr)} f_{fn};" for fn, fr, _ in r.fields)
            self.types.append(f"struct {r.cname} {{ {fl} }};")
        self.struct_after = []

    struct_after = []

    # ---- routines ---------------------------------------------------------
    def routine_header(self, d):
        ret = self.rep(d.ret) if d.ret is not None else VOID
        params = []
        for p in d.params:
            if p.rep.kind == "uarray":
                pr = R("uarray", dims=self.manifest(p.rep.dims), elem=self.rep(p.rep.elem),
                       tid="")
            else:
                pr = self.rep(p.rep)
            for name, _ in p.names:
                params.append((name, p.cls, pr))
        cn = "yp_" + (d.name if d.name.isidentifier() else self.new("op"))
        d.sym = Sym("routine", d.name, cname=cn, ret=ret, params=params, func=d.func)
        self.define(d.name, d.sym, d.line)
        plist = ", ".join(f"{ctype(pr)}{' *' if cls != 'CONST' else ''} a_{name}"
                          for name, cls, pr in params) or "void"
        self.protos.append(f"static {ctype(ret)} {cn}({plist});")
        d.plist = plist

    def routine_body(self, d):
        sym = d.sym
        save_out = self.out
        self.out = []
        self.locals_decl = []
        self.routine = sym
        self.frames = []
        self.scopes.append({})
        for name, cls, pr in sym.params:
            byref = cls != "CONST"
            self.define(name, Sym("var" if byref else "const", name,
                                  cname=f"(*a_{name})" if byref else f"a_{name}", rep=pr,
                                  param=cls), d.line)
        save_gl = self.global_level
        self.global_level = False
        self.in_routine = True
        for dd in d.body.decls:
            if dd.kind == "routine":
                raise SemError(f"line {dd.line}: the bootstrap takes routines at module level only")
            self.simple_decl(dd)
        self.block_stmts(d.body)
        self.global_level = save_gl
        self.emit("rt_raise(Y_X_NO_RETURN);")
        self.scopes.pop()
        body = self.out
        self.out = save_out
        self.funcs.append(f"static {ctype(sym.ret)} {sym.cname}({d.plist}) {{")
        self.funcs.extend(self.locals_decl)
        self.funcs.extend(body)
        self.funcs.append("}")
        self.locals_decl = None
        self.routine = None

    # the statements of a block and its exception handler (X.F)
    def block_stmts(self, b):
        if b.handler is None:
            self.blockframe.append(None)
            self.stmts(b.stmts)
            self.blockframe.pop()
            return
        f = self.new("xf")
        self.emit(f"{{ rt_frame {f};")
        self.emit(f"if (RT_TRY({f})) {{")
        self.frames.append(f)
        self.blockframe.append(f)
        self.stmts(b.stmts)
        self.blockframe.pop()
        self.frames.pop()
        self.emit(f"RT_POP({f});")
        self.emit("} else {")
        self.emit(f"RT_POP({f});")
        xc = self.new("xc")
        self.emit(f"int {xc} = rt_xcur;")
        self.blockframe.append(None)
        self.handler_xc = getattr(self, "handler_xc", [])
        self.handler_xc.append(xc)
        first = True
        for names, stmts in b.handler.cases:
            cond = " || ".join(f'{xc} == rt_exc("{nm}")' for nm in names)
            self.emit(("if" if first else "} else if") + f" ({cond}) {{")
            first = False
            self.stmts(stmts)
        if not first:
            self.emit("} else {")
        if b.handler.other is not None:
            self.stmts(b.handler.other)
        else:
            self.emit(f"rt_raise({xc});")
        if not first:
            self.emit("}")
        self.handler_xc.pop()
        self.blockframe.pop()
        self.emit("}}")

    # ---- statements --------------------------------------------------------
    def stmts(self, ss):
        for s in ss:
            self.stmt(s)

    def pop_to(self, depth):
        """leave the exception frames entered after depth"""
        if len(self.frames) > depth:
            self.emit(f"rt_xtop = {self.frames[depth]}.prev;")

    def stmt(self, s):
        k = s.kind
        if k == "assign":
            code, r = self.lvalue(s.target)
            ecode, er = self.expr(s.e, r)
            self.store(code, r, ecode, er, s.line)
        elif k == "callst":
            code, r = self.call(s.call, statement=True)
            self.emit(code + ";")
        elif k == "if":
            first = True
            for cond, body in s.arms:
                c, _ = self.expr(cond, BOOL)
                self.emit(("if" if first else "} else if") + f" ({c}) {{")
                first = False
                self.stmts(body)
            if s.other is not None:
                self.emit("} else {")
                self.stmts(s.other)
            self.emit("}")
        elif k == "while":
            c, _ = self.expr(s.cond, BOOL)
            self.emit(f"while ({c}) {{")
            self.stmts(s.body)
            self.emit("}")
        elif k == "loop":
            lab = self.new("yl_")
            self.loops.append((s.name, lab, len(self.frames)))
            self.emit("for (;;) {")
            self.stmts(s.body)
            self.emit("}")
            self.emit(f"{lab}: ;")
            self.loops.pop()
        elif k == "exit":
            for name, lab, depth in reversed(self.loops):
                if name == s.name:
                    self.pop_to(depth)
                    self.emit(f"goto {lab};")
                    break
            else:
                raise SemError(f"line {s.line}: EXIT {s.name} is not inside LOOP {s.name}")
        elif k == "for":
            r = self.rep(s.rep)
            if not r.discrete():
                raise SemError(f"line {s.line}: FOR takes a discrete representation")
            v = self.new("v_" + s.name + "_")
            hi = self.new("hi")
            self.emit(f"{{ rt_int {hi} = {r.hi};")
            self.emit(f"for (rt_int {v} = {r.lo}; {v} <= {hi}; {v}++) {{")
            self.scopes.append({s.name: Sym("const", s.name, cname=v, rep=r)})
            self.stmts(s.body)
            self.scopes.pop()
            self.emit(f"if ({v} == {hi}) break;")
            self.emit("}}")
        elif k == "select":
            c, r = self.expr(s.e)
            self.emit(f"switch ({c}) {{")
            for labels, body in s.cases:
                for lab in labels:
                    v = self.manifest(lab, r)
                    if v is None:
                        raise SemError(f"line {s.line}: a CASE label is a manifest constant")
                    self.emit(f"case {v}:")
                self.emit("{")
                self.stmts(body)
                self.emit("} break;")
            self.emit("default: {")
            if s.other is not None:
                self.stmts(s.other)
            self.emit("} break;")
            self.emit("}")
        elif k == "return":
            ret = self.routine.ret if self.routine else VOID
            if s.e is None:
                if ret is not VOID:
                    raise SemError(f"line {s.line}: RETURN needs a value")
                self.pop_to(0)
                self.emit("return;")
            else:
                c, er = self.expr(s.e, ret)
                t = self.new("rv")
                self.emit(f"{{ {ctype(ret)} {t} = {self.convert(c, ret, er, s.line)};")
                self.pop_to(0)
                self.emit(f"return {t}; }}")
        elif k == "propagate":
            if s.name is None:
                if not getattr(self, "handler_xc", None):
                    raise SemError(f"line {s.line}: PROPAGATE_EXCEPTION without a name outside a handler")
                self.emit(f"rt_raise({self.handler_xc[-1]});")
            else:
                self.leave_block()
                self.emit(f'rt_raise(rt_exc("{s.name}"));')
        elif k == "assert":
            c, _ = self.expr(s.e, BOOL)
            self.emit(f"if (!({c})) {{")
            self.leave_block()
            self.emit("rt_raise(RT_X_ASSERT); }")
        elif k == "begin":
            self.emit("{")
            save = self.global_level
            self.scopes.append({})
            if self.locals_decl is None:
                raise SemError(f"line {s.line}: the bootstrap takes BEGIN blocks in routines")
            for d in s.block.decls:
                if d.kind == "routine":
                    raise SemError(f"line {d.line}: the bootstrap takes routines at module level only")
                self.simple_decl(d)
            self.block_stmts(s.block)
            self.scopes.pop()
            self.global_level = save
            self.emit("}")
        else:
            raise SemError(f"line {s.line}: the bootstrap does not translate {k} statements")

    # PROPAGATE_EXCEPTION and ASSERT end the current block: its own handler
    # does not see them (IX.A.8, p.1039; X.F, p.1058)
    def leave_block(self):
        f = self.blockframe[-1] if self.blockframe else None
        if f is not None:
            self.emit(f"rt_xtop = {f}.prev;")

    # ---- stores: assignment with representation checks (IX.A.1) -------------
    def store(self, dst, r, code, er, line):
        if r.kind in ("array", "record") and (r.kind == "array" or r.deep):
            t = self.new("t")
            self.emit(f"{{ {ctype(r)} {t} = {code}; y_store({desc(r)}, &{dst}, &{t}); }}")
            return
        self.emit(f"{dst} = {self.convert(code, r, er, line)};")

    def convert(self, code, r, er, line):
        if r.kind in ("int", "char", "enum") and r.lo is not None and r is not INT:
            if None not in (r.mlo, r.mhi, er.mlo, er.mhi) and r.mlo <= er.mlo and er.mhi <= r.mhi:
                return code
            return f"rt_range({code}, {r.lo}, {r.hi})"
        return code

    # ---- designators that denote variables ----------------------------------
    def lvalue(self, d):
        if d.kind == "name":
            sym = self.lookup(d.name, d.line)
            if sym.kind != "var":
                raise SemError(f"line {d.line}: {d.name} is not a variable")
            return sym.cname, sym.rep
        if d.kind in ("field", "index", "deref"):
            return self.expr(d)
        raise SemError(f"line {d.line}: not a variable")

    # ---- expressions -----------------------------------------------------------
    def manifest(self, e, r=None):
        k = e.kind
        if k == "lit":
            t = e.tok
            if t.kind == "int":
                return t.val
            if t.kind == "char":
                return char_code(t.text, e.line)
            return None
        if k == "name":
            try:
                sym = self.lookup(e.name, e.line)
            except SemError:
                return None
            if sym.kind == "lit":
                return sym.val
            if sym.kind == "const":
                return getattr(sym, "mval", None)
            return None
        if k == "neg":
            v = self.manifest(e.a)
            return -v if v is not None else None
        if k == "paren":
            return self.manifest(e.a)
        if k == "bin" and e.op in ("+", "-", "*", "DIV", "MOD"):
            a, b = self.manifest(e.a), self.manifest(e.b)
            if a is None or b is None:
                return None
            return {"+": lambda: a + b, "-": lambda: a - b, "*": lambda: a * b,
                    "DIV": lambda: a // b, "MOD": lambda: a % b}[e.op]()
        return None

    def expr(self, e, want=None):
        k = e.kind
        if k == "paren":
            c, r = self.expr(e.a, want)
            return f"({c})", r
        if k == "lit":
            t = e.tok
            if t.kind == "int":
                return f"INT64_C({t.val})", R("int", lo=str(t.val), hi=str(t.val), mlo=t.val,
                                                mhi=t.val, tid="INTEGER")
            if t.kind == "char":
                v = char_code(t.text, e.line)
                return str(v), R("char", mlo=v, mhi=v, lo=str(v), hi=str(v), tid="ASCII")
            if t.kind == "str":
                codes = [char_code(p, e.line) for p in t.val]
                return f"y_str({cstring(codes)}, {len(codes)})", R("str", n=len(codes), tid="")
            raise SemError(f"line {e.line}: the bootstrap has no {t.kind} literals")
        if k == "nil":
            if e.qual is None:
                raise SemError(f"line {e.line}: NIL must be qualified by a pointer type (VI.B.4)")
            r = self.lookup(e.qual, e.line).rep
            return "NULL", r
        if k == "name":
            sym = self.lookup(e.name, e.line)
            if sym.kind == "lit":
                return str(sym.val), sym.rep
            if sym.kind in ("var", "const"):
                return sym.cname, sym.rep
            raise SemError(f"line {e.line}: {e.name} is not a value")
        if k == "field":
            c, r = self.expr(e.a)
            if r.kind != "record":
                raise SemError(f"line {e.line}: .{e.name} of something that is not a record")
            for fn, fr, _ in r.fields:
                if fn == e.name:
                    return f"({c}).f_{fn}", fr
            raise SemError(f"line {e.line}: no component {e.name}")
        if k == "deref":
            c, r = self.expr(e.a)
            if r.kind != "ptr":
                raise SemError(f"line {e.line}: ^ of something that is not a pointer")
            b = r.base()
            return f"(*({ctype(b)} *)rt_nil_check({c}))", b
        if k == "index":
            c, r = self.expr(e.a)
            if r.kind not in ("array", "uarray", "str"):
                raise SemError(f"line {e.line}: [] of something that is not an array")
            ix = [self.expr(i)[0] for i in e.ix]
            nd = len(r.idx) if r.kind == "array" else (r.dims if r.kind == "uarray" else 1)
            if len(ix) != nd:
                raise SemError(f"line {e.line}: {nd} subscripts expected")
            elem = r.elem if r.kind != "str" else CHAR
            return f"(({ctype(elem)} *)({c}).p)[y_ix{nd}({c}, {', '.join(ix)})]", elem
        if k == "call":
            return self.call(e)
        if k == "not":
            c, _ = self.expr(e.a, BOOL)
            return f"(!{c})", BOOL
        if k == "neg":
            c, r = self.expr(e.a, want)
            if r.kind == "float":
                return f"(-{c})", r
            return f"rt_neg({c})", INT
        if k == "bin":
            return self.binary(e, want)
        raise SemError(f"line {e.line}: the bootstrap does not translate {k}")

    def binary(self, e, want):
        op = e.op
        if op in ("AND", "OR"):
            a, _ = self.expr(e.a, BOOL)
            b, _ = self.expr(e.b, BOOL)
            return f"({a} {'&&' if op == 'AND' else '||'} {b})", BOOL
        a, ra = self.expr(e.a)
        b, rb = self.expr(e.b, ra)
        if op in ("=", "#", "<", "<=", ">", ">="):
            cop = {"=": "==", "#": "!="}.get(op, op)
            if ra.kind in ("array", "record", "str") or rb.kind in ("array", "record", "str"):
                rr = ra if ra.kind != "str" else rb
                t1, t2 = self.new("e"), self.new("e")
                d = desc(rr) if rr.kind != "str" else "&yd_str"
                eq = f"({{ {ctype(rr)} {t1} = {a}, {t2} = {b}; y_eq({d}, &{t1}, &{t2}); }})"
                return (eq if op == "=" else f"(!{eq})"), BOOL
            return f"({a} {cop} {b})", BOOL
        if ra.kind == "float" or rb.kind == "float":
            return f"({a} {op} {b})", FLOAT
        if op == "/":
            return f"((double){a} / (double){b})", FLOAT
        fn = {"+": "rt_add", "-": "rt_sub", "*": "rt_mul", "DIV": "rt_div", "MOD": "rt_mod"}.get(op)
        if fn is None:
            raise SemError(f"line {e.line}: the bootstrap has no operator {op}")
        return f"{fn}({a}, {b})", INT

    # ---- calls ----------------------------------------------------------------
    STD = {"LOW", "HIGH", "SUCC", "PRED", "NEW", "OPEN", "CLOSE", "GET", "PUT", "CHECK_EOF"}

    def call(self, e, statement=False):
        name = e.name
        try:
            sym = self.lookup(name, e.line)
        except SemError:
            sym = None
        if sym is None and name in self.STD:
            return self.std_call(e)
        if sym is None:
            raise SemError(f"line {e.line}: {name} is not declared")
        if sym.kind == "rep":
            return self.denotation(sym.rep, e)
        if sym.kind != "routine":
            raise SemError(f"line {e.line}: {name} is not a routine")
        if len(e.args) != len(sym.params):
            raise SemError(f"line {e.line}: {name} takes {len(sym.params)} parameters")
        args = []
        for a, (pname, cls, pr) in zip(e.args, sym.params):
            if cls == "CONST":
                c, r = self.expr(a, pr)
                args.append(self.convert(c, pr, r, e.line))
            else:
                c, r = self.lvalue(a)
                args.append(f"&{c}")
        if sym.ret is VOID and not statement:
            raise SemError(f"line {e.line}: {name} returns no value")
        return f"{sym.cname}({', '.join(args)})", sym.ret

    def std_call(self, e):
        name, args = e.name, e.args
        if name in ("LOW", "HIGH"):
            a, _ = self.expr(args[0])
            d, _ = self.expr(args[1])
            return f"y_{name.lower()}({a}, {d})", INT
        if name in ("SUCC", "PRED"):
            a, r = self.expr(args[0])
            sign = "+" if name == "SUCC" else "-"
            if r.kind == "int":
                return f"rt_{'add' if name == 'SUCC' else 'sub'}({a}, 1)", INT
            return f"rt_range({a} {sign} 1, {r.lo if r.kind != 'char' else 0}, " \
                   f"{r.hi if r.kind != 'char' else 127})", r
        if name == "NEW":
            c, r = self.lvalue(args[0])
            b = r.base()
            init = f" y_init({desc(b)}, {c});" if deep(b) else ""
            return f"({{ {c} = rt_alloc(sizeof({ctype(b)}));{init} }})", VOID
        if name == "OPEN":
            f, _ = self.lvalue(args[0])
            n, _ = self.expr(args[1])
            m, _ = self.expr(args[2])
            return f"y_open(&{f}, {n}, {m})", VOID
        if name == "CLOSE":
            f, _ = self.lvalue(args[0])
            return f"y_close(&{f})", VOID
        if name == "CHECK_EOF":
            f, _ = self.lvalue(args[0])
            return f"y_check_eof(&{f})", BOOL
        if name == "GET":
            f, _ = self.lvalue(args[0])
            x, r = self.lvalue(args[1])
            return f"y_get(&{f}, &{x}, sizeof({x}))", VOID
        if name == "PUT":
            f, fr = self.lvalue(args[0])
            x, r = self.expr(args[1], fr.elem)
            t = self.new("pt")
            return f"({{ {ctype(fr.elem)} {t} = {x}; y_put(&{f}, &{t}, sizeof {t}); }})", VOID
        raise SemError(f"line {e.line}: {name}")

    # a value of a record or array: R(e1, ..., en) (VI.B)
    def denotation(self, r, e):
        if r.kind == "record":
            if len(e.args) != len(r.fields):
                raise SemError(f"line {e.line}: {len(r.fields)} components expected")
            parts = []
            for a, (fn, fr, _) in zip(e.args, r.fields):
                c, ar = self.expr(a, fr)
                parts.append(f".f_{fn} = {self.convert(c, fr, ar, e.line)}")
            return f"(({r.cname}){{ {', '.join(parts)} }})", r
        if r.kind == "array" and len(e.args) == 1:
            c, ar = self.expr(e.args[0], r.elem)
            t = self.new("fv")
            return f"({{ {ctype(r.elem)} {t} = {c}; y_fill({desc(r)}, &{t}); }})", r
        raise SemError(f"line {e.line}: the bootstrap cannot denote this value")


def main():
    if len(sys.argv) != 2:
        print("usage: yellowboot.py in.yel > out.c", file=sys.stderr)
        sys.exit(2)
    src = open(sys.argv[1]).read()
    try:
        units = parse(src)
        g = Gen()
        g.struct_after = []
        sys.stdout.write(g.program(units))
    except (LexError, ParseError, SemError) as ex:
        print(f"yellowboot: {ex}", file=sys.stderr)
        sys.exit(1)


if __name__ == "__main__":
    main()
