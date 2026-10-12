#!/usr/bin/env python3
"""greenboot -- the bootstrap translator for GREEN (Preliminary Ada, 1979).

It understands the part of GREEN that the real compiler (greenc) is written
in: one library procedure with the declarations of its declarative part
(types, constants, variables, exceptions, subprograms one level deep),
INTEGER, BOOLEAN, CHARACTER, STRING, enumerations, one-dimensional arrays,
records and access types; IF, CASE, loops with EXIT, blocks, exception
handlers, RAISE, ASSERT, and TEXT_IO GET/PUT.

It reuses the code generator of the RED bootstrap (red/boot/redboot.py) and
changes what GREEN does differently. Usage: greenboot.py in.grn > out.c
"""

import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.join(HERE, "..", "..", "red", "boot"))
sys.path.insert(0, HERE)

import redboot  # noqa: E402
from redboot import (Gen, Sym, Scope, SemError, T, INT, BOOL, FLOAT, ASCII,  # noqa: E402
                     STRING, VOID, NILT, same, cstring)
from redparse import N  # noqa: E402
from greenparse import parse  # noqa: E402

# RM79 11.1: the predefined exceptions; END_OF_FILE comes from TEXT_IO (14.2)
PREDEFINED_EXC = {"ACCESS_ERROR", "ASSERT_ERROR", "DISCRIMINANT_ERROR", "DIVIDE_ERROR",
                  "FAILURE", "INDEX_ERROR", "INITIATE_ERROR", "NO_VALUE_ERROR", "OVERFLOW",
                  "OVERLAP_ERROR", "RANGE_ERROR", "SELECT_ERROR", "STORAGE_OVERFLOW",
                  "TASKING_ERROR", "UNDERFLOW", "END_OF_FILE"}

# RM79 App. C: names of the control characters of CHARACTER, and the
# constants for graphic characters outside the basic set
CONTROL = ["NUL", "SOH", "STX", "ETX", "EOT", "ENQ", "ACK", "BEL", "BS", "HT", "LF", "VT",
           "FF", "CR", "SO", "SI", "DLE", "DC1", "DC2", "DC3", "DC4", "NAK", "SYN", "ETB",
           "CAN", "EM", "SUB", "ESC", "FS", "GS", "RS", "US"]
CHAR_CONST = {name: i for i, name in enumerate(CONTROL)}
CHAR_CONST.update({"DEL": 127, "EXCLAM": 33, "DOLLAR": 36, "QUESTION": 63, "AT_SIGN": 64,
                   "L_BRACKET": 91, "BACK_SLASH": 92, "R_BRACKET": 93, "CIRCUMFLEX": 94,
                   "GRAVE": 96, "L_BRACE": 123, "R_BRACE": 125, "TILDE": 126,
                   # reconstructed: the OCR of this part of STANDARD is lost
                   "SHARP": 35, "PERCENT": 37, "AMPERSAND": 38, "BAR": 124})
for c in range(26):
    CHAR_CONST["LC_" + chr(65 + c)] = 97 + c


class GreenGen(Gen):
    def __init__(self):
        super().__init__()
        self.loops = []                      # labels of the enclosing loops

    # ---- program: the main library procedure is the outermost unit ----------
    def program(self, units):
        mains = [u for u in units if u.kind == "proc"]
        if len(mains) != 1 or any(u.kind not in ("proc",) for u in units):
            raise SemError("the bootstrap translates one library procedure")
        main = mains[0]
        if main.params:
            raise SemError("the main procedure takes no parameters")
        cap = N("capsule", main.line, name=main.name, body=main.body)
        text = super().program([cap])
        return text.replace("rt_set_lang(0);", "rt_set_lang(1);")

    # ---- types (RM79 3) ----------------------------------------------------------
    def declare_type(self, d):
        super().declare_type(d)
        if d.kind == "abbrev" and d.subtype.kind == "st_enum":
            t, _ = self.resolve_subtype(d.subtype)
            self.scope.names[d.name].enumtype = t
            for i, lit in enumerate(d.subtype.lits):
                if not lit.startswith('"'):
                    self.scope.names[lit] = Sym("enumlit", lit, typ=t, index=i)

    def resolve_subtype(self, st, scope=None):
        k = st.kind
        if k == "st_name":
            name = st.name
            rng = getattr(st, "range", None)
            if name in ("INTEGER", "NATURAL", "SHORT_INTEGER", "LONG_INTEGER", "PRIORITY"):
                cons = {}
                if rng:
                    cons = self.range_cons(rng)
                elif name == "NATURAL":           # NATURAL starts at 1 (RM79 3.6.3)
                    cons = {"lo": "1", "hi": "INT64_MAX", "mlo": 1, "mhi": 2 ** 63 - 1}
                return INT, cons
            if name == "BOOLEAN":
                return BOOL, {}
            if name == "CHARACTER":
                return ASCII, {}
            if name in ("FLOAT", "SHORT_FLOAT", "LONG_FLOAT", "TIME"):
                return FLOAT, {}
            if name == "STRING":
                cons = {}
                if st.args:
                    a = st.args[0]
                    if a.kind != "range":
                        raise SemError(f"line {st.line}: STRING needs a range constraint")
                    lo, _ = self.expr(a.lo, INT)
                    hi, _ = self.expr(a.hi, INT)
                    cons["len"] = hi if self.manifest(a.lo) == 1 else f"({hi} - {lo} + 1)"
                return STRING, cons
            sym = self.scope.lookup(name)
            if sym is not None and getattr(sym, "subtype", None) is not None \
                    and sym.subtype.kind == "st_uarray":
                return self.uarray(sym.subtype, st.args, st.line)
            if sym is not None and sym.kind == "type" and sym.typ is None:
                if not hasattr(sym, "resolved"):
                    sym.resolved = self.resolve_subtype(sym.subtype)
                return sym.resolved
            if sym is not None and sym.kind == "abbrev" and rng:
                t, _ = super().resolve_subtype(st, scope)
                return t, self.range_cons(rng)
            return super().resolve_subtype(N("st_name", st.line, name=name, tt=None,
                                             args=st.args if sym and sym.kind == "type"
                                             and sym.typ and sym.typ.kind == "ptr" else None), scope)
        if k == "st_range":                       # FOR I IN lo .. hi
            _, t = self.expr(st.lo)
            lo, _ = self.expr(st.lo, t)
            hi, _ = self.expr(st.hi, t)
            return t, {"lo": lo, "hi": hi}
        if k == "st_array":
            idx = st.index[0]
            if idx.kind == "st_range":
                return super().resolve_subtype(N("st_array", st.line, index=[
                    N("st_int", st.line, range=(idx.lo, idx.hi))], elem=st.elem), scope)
        if k == "st_uarray":
            return self.uarray(st, None, st.line)
        return super().resolve_subtype(st, scope)

    def range_cons(self, rng):
        return {"lo": self.expr(rng[0], INT)[0], "hi": self.expr(rng[1], INT)[0],
                "mlo": self.manifest(rng[0]), "mhi": self.manifest(rng[1])}

    def uarray(self, ua, args, line):
        """An array type whose index is a type mark: each object gives the bounds."""
        if len(ua.index) != 1:
            raise SemError(f"line {line}: the bootstrap handles one-dimensional arrays only")
        rng = None
        if args:
            a = args[0]
            if a.kind != "range":
                raise SemError(f"line {line}: an index constraint is a range")
            rng = (a.lo, a.hi)
        idx = N("st_int", line, range=rng)
        return super().resolve_subtype(N("st_array", line, index=[idx], elem=ua.elem))

    def storage_name(self, name, top):
        # declarations of a block in the main body live as globals
        return super().storage_name(name, top or self.func is None)

    def var_decl(self, d, top):
        top = top or self.func is None
        t, cons = self.resolve_subtype(d.subtype)
        if t.kind == "string" and "len" not in cons and d.init is not None:
            # the bounds come from the initial value (RM79 3.6)
            for name in d.names:
                v, vt = self.expr(d.init, t)
                field, access = self.storage_name(name, top)
                if top:
                    self.out_globals.append(f"static rstr {field};")
                else:
                    self.func["ftypes"][field] = "rstr"
                self.emit(f"{access} = rt_str_copy({v});")
                self.scope.define(Sym("var", name, typ=t, cons=cons, access=access, readonly=False), d.line)
            return
        super().var_decl(d, top)

    def const_decl(self, d, top):
        super().const_decl(d, top or self.func is None)

    # ---- statements -------------------------------------------------------------------
    def statement(self, s):
        if s.kind == "repeat" and getattr(s, "green_loop", False):
            self.loops.append(s.match)
            try:
                super().statement(s)
            finally:
                self.loops.pop()
            return
        super().statement(s)

    def st_exit(self, s):                         # RM79 5.7
        target = s.target
        if target is None:
            if not self.loops:
                raise SemError(f"line {s.line}: EXIT outside a loop")
            target = self.loops[-1]
        for match, label, depth in reversed(self.exits):
            if match == target:
                if s.cond is not None:
                    c, _ = self.expr(s.cond, BOOL)
                    self.emit(f"if ({c}) {{")
                    self.pop_frames(depth)
                    self.emit(f"goto {label}; }}")
                else:
                    self.pop_frames(depth)
                    self.emit(f"goto {label};")
                return
        raise SemError(f"line {s.line}: EXIT {target} names no enclosing loop")

    def st_raise(self, s):
        self.emit(f"rt_raise({self.exc_id(s.name, s.line)});")

    def exc_id(self, name, line):
        sym = self.scope.lookup(name)
        if sym is not None and sym.kind == "exc":
            return sym.cname
        if name in PREDEFINED_EXC:
            return f"rt_exc({cstring(name)})"
        raise SemError(f"line {line}: {name} is not an exception")

    def st_call(self, s):
        c = s.call
        if c.kind == "name" and c.name in ("PUT", "GET"):
            raise SemError(f"line {s.line}: {c.name} needs an item")
        super().st_call(s)

    # ---- expressions -------------------------------------------------------------------
    def expr(self, e, want=None):
        k = e.kind
        if k == "str" and len(e.value) == 1 and want is not None and want.kind == "enum" \
                and want.lits == ASCII.lits:
            return str(ord(e.value)), ASCII       # a character literal (RM79 2.5)
        if k == "name":
            n = e.name
            sym = self.scope.lookup(n)
            if sym is None:
                if n in ("TRUE", "FALSE"):
                    return ("1" if n == "TRUE" else "0"), BOOL
                if n in CHAR_CONST:
                    return str(CHAR_CONST[n]), ASCII
                if n == "NEWLINE":                # RM79 14.3: a STRING constant
                    return 'rt_str("\\n", 1)', STRING
                if n == "SECONDS":
                    return "((double)RT_SECONDS)", FLOAT
            elif sym.kind == "enumlit":
                if want is not None and want.kind == "enum" and want.lits != sym.typ.lits:
                    raise SemError(f"line {e.line}: {n} is not a value of this type")
                return str(sym.index), sym.typ
        if k == "attr":
            return self.attr(e, want)
        if k == "new":
            return self.allocator(e, want)
        if k == "apply" and e.fn.kind == "name":
            conv = self.conversion(e, want)
            if conv:
                return conv
        if k == "unop" and e.op == "NOT":
            a, t = self.expr(e.arg, BOOL)
            return f"(!{a})", BOOL
        return super().expr(e, want)

    def conversion(self, e, want):
        """T(x): qualification and conversion share one form (RM79 4.6)."""
        n = e.fn.name
        if n in ("INTEGER", "NATURAL") and len(e.args) == 1:
            a, t = self.expr(e.args[0], INT)
            if t.kind == "float":
                return f"((rt_int)llround({a}))", INT
            return a, INT
        if n in ("FLOAT", "TIME") and len(e.args) == 1:
            a, t = self.expr(e.args[0], FLOAT)
            return f"((double)({a}))", FLOAT
        if n == "CHARACTER" and len(e.args) == 1:
            return self.expr(e.args[0], ASCII)
        if n == "STRING" and len(e.args) == 1:
            return self.expr(e.args[0], STRING)
        sym = self.scope.lookup(n)
        if sym is not None and sym.kind == "abbrev" and len(e.args) == 1:
            t, cons = self.resolve_subtype(N("st_name", e.line, name=n, tt=None, args=None))
            a, at = self.expr(e.args[0], t)
            if t.kind == "int" and cons.get("mlo") is not None and cons.get("mhi") is not None:
                return f"rt_range({a}, {cons['mlo']}, {cons['mhi']})", t
            return a, t
        return None

    def binop(self, e, want):
        op = e.op
        if op in ("=", "/=", "<", "<=", ">", ">="):
            # a one-character string literal compares as a CHARACTER
            if e.left.kind == "str" and len(e.left.value) == 1:
                b, tb = self.expr(e.right)
                a, ta = self.expr(e.left, tb)
                e2 = N("binop", e.line, op=op, left=N("raw", e.line, code=a, typ=ta),
                       right=N("raw", e.line, code=b, typ=tb))
                return super().binop(e2, want)
            if e.right.kind == "str" and len(e.right.value) == 1:
                a, ta = self.expr(e.left)
                b, tb = self.expr(e.right, ta)
                e2 = N("binop", e.line, op=op, left=N("raw", e.line, code=a, typ=ta),
                       right=N("raw", e.line, code=b, typ=tb))
                return super().binop(e2, want)
            if e.left.kind == "name" and self.is_enumlit(e.left.name):
                _, tb = self.expr(e.right)
                a, ta = self.expr(e.left, tb)
                b, _ = self.expr(e.right, ta)
                return super().binop(N("binop", e.line, op=op,
                                       left=N("raw", e.line, code=a, typ=ta),
                                       right=N("raw", e.line, code=b, typ=ta)), want)
        if op in ("MOD", "/"):
            a, ta = self.expr(e.left, want)
            b, tb = self.expr(e.right, ta)
            if ta.kind == "int" and tb.kind == "int":
                # RM79 4.5.5: "/" truncates, "mod" has the sign of the left operand
                return (f"rt_rem({a}, {b})" if op == "MOD" else f"rt_quot({a}, {b})"), INT
        return super().binop(e, want)

    def is_enumlit(self, n):
        s = self.scope.lookup(n)
        return s is not None and s.kind == "enumlit"

    def attr(self, e, want):                      # RM79 App. A
        a = e.name
        obj = e.obj
        tname = obj.name if obj.kind == "name" else None
        tsym = self.scope.lookup(tname) if tname else None
        is_type = tname in ("INTEGER", "CHARACTER", "BOOLEAN", "NATURAL", "STRING") or \
            (tsym is not None and tsym.kind in ("abbrev", "type"))
        if is_type:
            t, cons = self.resolve_subtype(N("st_name", e.line, name=tname, tt=None, args=None))
            arg = e.args[0] if e.args else None
            if a == "ORD":                         # positions count from 1
                v, _ = self.expr(arg, t)
                return f"((rt_int)({v}) + 1)", INT
            if a == "VAL" and t.kind == "int":
                v, _ = self.expr(arg, STRING)
                return f"rt_int_of_str({v})", INT
            if a == "VAL":
                v, _ = self.expr(arg, INT)
                return f"rt_range({v} - 1, 0, {len(t.lits) - 1})", t
            if a == "REP" and t.kind == "int":
                v, _ = self.expr(arg, INT)
                return f"rt_str_of_int({v})", STRING
            if a in ("SUCC", "PRED"):
                v, _ = self.expr(arg, t)
                if t.kind == "int":
                    return (f"rt_add({v}, 1)" if a == "SUCC" else f"rt_sub({v}, 1)"), t
                n = len(t.lits) - 1
                return (f"rt_range({v} + 1, 0, {n})" if a == "SUCC" else f"rt_range({v} - 1, 0, {n})"), t
            if a in ("FIRST", "LAST"):
                if t.kind == "enum":
                    return ("0" if a == "FIRST" else str(len(t.lits) - 1)), t
                if t.kind == "int":
                    if "lo" in cons:
                        return (cons["lo"] if a == "FIRST" else cons["hi"]), t
                    return ("INT64_MIN" if a == "FIRST" else "INT64_MAX"), t
        v, t = self.expr(obj)
        if t.kind == "ptr":
            self.finish_ptr(self.scope.lookup(t.name))
            v, t = self.deref(v, t), t.target_type
        if t.kind == "string":
            if a == "LENGTH" or a == "LAST":
                return f"({v}).len", INT
            if a == "FIRST":
                return "((rt_int)1)", INT
        if t.kind == "array":
            if a == "FIRST":
                return f"({v}).lo", INT
            if a == "LAST":
                return f"({v}).hi", INT
            if a == "LENGTH":
                return f"(({v}).hi - ({v}).lo + 1)", INT
        raise SemError(f"line {e.line}: attribute {a} is not handled here")

    def allocator(self, e, want):                 # RM79 4.7: new T(expr) | new T aggregate
        if want is None or want.kind != "ptr":
            raise SemError(f"line {e.line}: the type of this allocator is not known")
        self.finish_ptr(self.scope.lookup(want.name))
        target = want.target_type
        tc = self.ctype(target)
        cell = self.new("cell")
        if e.init is None:
            init = ""
        elif e.init.kind == "cons":
            v, _ = self.constructor(e.init, target)
            init = f"*{cell} = {v};"
        else:
            v, vt = self.expr(e.init.expr if e.init.kind == "paren" else e.init, target)
            self.check_type(vt, target, e.line)
            init = f"*{cell} = {self.copy_code(target, v)};"
        return f"({{ {tc} *{cell} = rt_alloc(sizeof({tc})); {init} ({self.ctype(want)}){cell}; }})", want

    def constructor(self, e, want):               # aggregates, RM79 3.6.2
        if want is not None and want.kind == "record":
            c = self.ctype(want)
            tmp = self.new("rc")
            parts = [f"{c} {tmp};"]
            items = e.items
            if len(items) != len(want.comps):
                raise SemError(f"line {e.line}: an aggregate needs every component")
            for item, (name, ft, _) in zip(items, want.comps):
                if item.keys and not (item.keys[0][0] == "value" and item.keys[0][1].kind == "name"
                                      and item.keys[0][1].name == name):
                    raise SemError(f"line {e.line}: component {name} expected")
                v, vt = self.expr(item.value, ft)
                self.check_type(vt, ft, e.line)
                parts.append(f"{tmp}.{name.lower()} = {self.copy_code(ft, v)};")
            return "({ " + " ".join(parts) + f" {tmp}; }})", want
        raise SemError(f"line {e.line}: only record aggregates are in the bootstrap")

    # ---- TEXT_IO (RM79 14.3) and STANDARD -------------------------------------------
    def builtin(self, name, tt, args, line, statement):
        if name == "PUT":
            if len(args) != 1:
                raise SemError(f"line {line}: PUT takes one item here")
            a, t = self.expr(args[0])
            if t.kind == "string":
                return f"rt_g_put({a})", VOID
            if t.kind == "enum" and t.lits == ASCII.lits:
                return f"rt_g_putc({a})", VOID
            if t.kind == "int":
                return f"rt_g_put_int({a}, 0)", VOID
            if t.kind == "bool":
                return f"rt_g_put_bool({a}, 0)", VOID
            raise SemError(f"line {line}: PUT of this type is not handled")
        if name == "GET":
            lv, lt, _, _ = self.lvalue(args[0])
            if not (lt.kind == "enum" and lt.lits == ASCII.lits):
                raise SemError(f"line {line}: GET reads a CHARACTER here")
            return f"({lv} = rt_g_getc())", VOID
        if name == "ABS":
            a, t = self.expr(args[0])
            return (f"rt_abs({a})" if t.kind == "int" else f"fabs({a})"), t
        return super().builtin(name, tt, args, line, statement)


# a node whose C code is already known (used to pre-type operands)
_orig_expr = Gen.expr


def _expr(self, e, want=None):
    if e.kind == "raw":
        return e.code, e.typ
    return _orig_expr(self, e, want)


Gen.expr = _expr


def main():
    if len(sys.argv) != 2:
        print("usage: greenboot.py file.grn > file.c", file=sys.stderr)
        sys.exit(2)
    path = sys.argv[1]
    try:
        units = parse(open(path).read(), path)
        c = GreenGen().program(units)
    except Exception as ex:
        if os.environ.get("GREENBOOT_TRACE"):
            raise
        print(f"greenboot: {ex}", file=sys.stderr)
        sys.exit(1)
    sys.stdout.write(c.replace('#include "paleo.h"', '#include "paleo.h"\n#include <math.h>', 1))


if __name__ == "__main__":
    main()
