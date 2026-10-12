"""Lexer and parser for GREEN (Preliminary Ada, May 1979), RM79.

The tree uses the node shapes of red/boot/redparse.py, so that the bootstrap
code generator can be shared; GREEN-only forms get their own node kinds:
attr (X'A), new (allocator), st_uarray (array type with a type-mark index),
st_range (a discrete range used as a FOR subtype), enumlit declarations.
"""

import os
import sys

sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "..", "red", "boot"))
from redparse import N  # noqa: E402


class ParseError(Exception):
    pass


# RM79 2.8: the 62 reserved words (the table read from ADA073714, p. 21)
RESERVED = set("""
abort accept access all and array assert at begin body case constant declare
delay delta digits do else elsif end entry exception exit for function generic
goto if in initiate is loop mod new not null of or others out package packing
pragma private procedure raise range record renames restricted return reverse
select separate subtype task then type use when while xor
""".upper().split())
assert len(RESERVED) == 62, len(RESERVED)

SYMBOLS = [":=:", "=:", ":=", "=>", "..", "**", "/=", ">=", "<=", "<<", ">>",
           "&", "'", "(", ")", "*", "+", ",", "-", ".", "/", ":", ";", "<", "=", ">", "|"]


class Tok:
    __slots__ = ("kind", "value", "line")

    def __init__(self, kind, value, line):
        self.kind, self.value, self.line = kind, value, line

    def __repr__(self):
        return f"{self.kind}:{self.value}@{self.line}"


def tokenize(text):
    toks = []
    line, i, n = 1, 0, len(text)
    while i < n:
        c = text[i]
        if c == "\n":
            line += 1
            i += 1
        elif c in " \t\r\f":
            i += 1
        elif text.startswith("--", i):                       # RM79 2.6
            while i < n and text[i] != "\n":
                i += 1
        elif c.isalpha():                                     # RM79 2.3
            j = i
            while j < n and (text[j].isalnum() or text[j] == "_"):
                j += 1
            w = text[i:j].upper()
            toks.append(Tok("KW" if w in RESERVED else "ID", w, line))
            i = j
        elif c.isdigit():                                     # RM79 2.4
            j = i
            while j < n and (text[j].isdigit() or text[j] == "_"):
                j += 1
            if j < n and text[j] == "#":                      # based integer, no closing #
                base = int(text[i:j].replace("_", ""))
                k = j + 1
                while k < n and (text[k].isalnum() or text[k] == "_"):
                    k += 1
                toks.append(Tok("INT", int(text[j + 1:k].replace("_", ""), base), line))
                i = k
                continue
            real = False
            if j + 1 < n and text[j] == "." and text[j + 1].isdigit():
                real = True
                j += 1
                while j < n and (text[j].isdigit() or text[j] == "_"):
                    j += 1
            if j < n and text[j] in "eE" and (text[j + 1:j + 2].isdigit() or
                                               (text[j + 1:j + 2] in "+-" and text[j + 2:j + 3].isdigit())):
                real = True                                   # 1E6 is an approximate number
                j += 1
                if text[j] in "+-":
                    j += 1
                while j < n and text[j].isdigit():
                    j += 1
            lit = text[i:j].replace("_", "")
            toks.append(Tok("FLOAT" if real else "INT", lit if real else int(lit), line))
            i = j
        elif c == '"':                                        # RM79 2.5, "" is one quote
            j = i + 1
            buf = []
            while True:
                if j >= n or text[j] == "\n":
                    raise ParseError(f"line {line}: unterminated string")
                if text[j] == '"':
                    if text[j + 1:j + 2] == '"':
                        buf.append('"')
                        j += 2
                        continue
                    break
                buf.append(text[j])
                j += 1
            toks.append(Tok("STR", "".join(buf), line))
            i = j + 1
        else:
            for s in SYMBOLS:
                if text.startswith(s, i):
                    toks.append(Tok("OP", s, line))
                    i += len(s)
                    break
            else:
                raise ParseError(f"line {line}: unexpected character {c!r}")
    toks.append(Tok("EOF", None, line))
    return toks


class Parser:
    def __init__(self, text, filename="<input>"):
        self.toks = tokenize(text)
        self.i = 0
        self.filename = filename

    @property
    def tok(self):
        return self.toks[self.i]

    def peek(self, k=1):
        return self.toks[min(self.i + k, len(self.toks) - 1)]

    def error(self, msg):
        raise ParseError(f"{self.filename}:{self.tok.line}: {msg} (at {self.tok.value!r})")

    def at_kw(self, *w):
        return self.tok.kind == "KW" and self.tok.value in w

    def at_op(self, *o):
        return self.tok.kind == "OP" and self.tok.value in o

    def next(self):
        t = self.tok
        self.i += 1
        return t

    def accept_kw(self, w):
        if self.at_kw(w):
            self.i += 1
            return True
        return False

    def accept_op(self, o):
        if self.at_op(o):
            self.i += 1
            return True
        return False

    def expect_kw(self, w):
        if not self.at_kw(w):
            self.error(f"expected {w}")
        return self.next()

    def expect_op(self, o):
        if not self.at_op(o):
            self.error(f"expected {o!r}")
        return self.next()

    def expect_id(self):
        if self.tok.kind != "ID":
            self.error("expected an identifier")
        return self.next().value

    def id_list(self):
        names = [self.expect_id()]
        while self.accept_op(","):
            names.append(self.expect_id())
        return names

    def skip_pragma(self):
        while not self.at_op(";"):
            self.next()
        self.next()

    # -- compilation (RM79 10.1) ----------------------------------------------
    def compilation(self):
        units = []
        while self.tok.kind != "EOF":
            if self.at_kw("PRAGMA"):
                self.skip_pragma()
                continue
            if self.accept_kw("RESTRICTED"):          # RM79 8.3, the 1979 "with"
                if self.accept_op("("):
                    self.id_list()
                    self.expect_op(")")
            units.append(self.unit())
        return units

    def unit(self):
        if self.at_kw("PROCEDURE", "FUNCTION"):
            return self.subprogram()
        if self.at_kw("PACKAGE"):
            return self.package()
        self.error("a compilation unit is a subprogram or a package")

    # -- declarative part (RM79 6.1) ----------------------------------------------
    def declarative_part(self):
        decls = []
        while True:
            if self.at_kw("PRAGMA"):
                self.skip_pragma()
            elif self.at_kw("USE"):
                self.next()
                self.id_list()
                self.expect_op(";")
            elif self.at_kw("RESTRICTED"):
                self.next()
                if self.accept_op("("):
                    self.id_list()
                    self.expect_op(")")
            elif self.at_kw("TYPE", "SUBTYPE"):
                d = self.type_decl()
                if d:
                    decls.append(d)
            elif self.at_kw("PROCEDURE", "FUNCTION"):
                d = self.subprogram()
                if d:
                    decls.append(d)
            elif self.at_kw("PACKAGE"):
                decls.append(self.package())
            elif self.tok.kind == "ID" and self.peek().kind == "OP" and self.peek().value in (":", ","):
                decls.extend(self.object_decl())
            else:
                return decls

    def object_decl(self):                       # RM79 3.2, 11.1
        line = self.tok.line
        names = self.id_list()
        self.expect_op(":")
        if self.accept_kw("EXCEPTION"):
            self.expect_op(";")
            return [N("exception", line, names=names)]
        const = self.accept_kw("CONSTANT")
        st = self.type_spec()
        init = self.expr() if self.accept_op(":=") else None
        self.expect_op(";")
        out = []
        for name in names:
            if const:
                if init is None:
                    continue                     # deferred constant
                out.append(N("const", line, names=[name], subtype=st, init=init))
            else:
                out.append(N("var", line, names=[name], subtype=st, init=init))
        return out

    # a type in an object declaration: a type mark with a constraint, or an
    # anonymous type definition (RM79 3.3)
    def type_spec(self):
        if self.at_op("(") or self.at_kw("ARRAY", "RECORD", "ACCESS", "RANGE"):
            return self.type_definition(None)
        return self.subtype_indication()

    def subtype_indication(self):
        line = self.tok.line
        name = self.expect_id()
        while self.accept_op("."):               # P.T
            name = self.expect_id()
        return self.constrain(N("st_name", line, name=name, tt=None, args=None), line)

    def constrain(self, st, line):
        if self.accept_kw("RANGE"):
            lo = self.simple_expr()
            self.expect_op("..")
            st.range = (lo, self.simple_expr())
        elif self.at_op("("):                    # index or discriminant constraint
            self.next()
            args = []
            while True:
                lo = self.expr()
                if self.accept_op(".."):
                    args.append(N("range", line, lo=lo, hi=self.simple_expr()))
                else:
                    args.append(lo)
                if not self.accept_op(","):
                    break
            self.expect_op(")")
            st.args = args
        elif self.at_kw("DIGITS", "DELTA"):
            self.next()
            self.simple_expr()
            if self.accept_kw("RANGE"):
                self.simple_expr()
                self.expect_op("..")
                self.simple_expr()
        return st

    def type_decl(self):                         # RM79 3.3
        line = self.tok.line
        if self.accept_kw("SUBTYPE"):
            name = self.expect_id()
            self.expect_kw("IS")
            st = self.subtype_indication()
            self.expect_op(";")
            return N("abbrev", line, name=name, tt=None, params=[], subtype=st)
        self.expect_kw("TYPE")
        name = self.expect_id()
        if self.accept_op(";"):
            return None                          # incomplete declaration (RM79 3.8)
        self.expect_kw("IS")
        if self.accept_kw("PRIVATE"):
            self.expect_op(";")
            return None
        if self.at_kw("ACCESS"):
            self.next()
            st = self.type_spec()
            self.expect_op(";")
            return N("ptrtype", line, name=name, tt=None, params=[], params2=[], subtype=st)
        if self.accept_kw("NEW"):                # derived type: the same in this subset
            st = self.subtype_indication()
            self.expect_op(";")
            return N("abbrev", line, name=name, tt=None, params=[], subtype=st)
        st = self.type_definition(name)
        self.expect_op(";")
        return N("abbrev" if st.kind in ("st_enum", "st_int", "st_float") else "newtype",
                 line, name=name, tt=None, params=[], subtype=st)

    def type_definition(self, name):
        line = self.tok.line
        if self.accept_op("("):                  # enumeration, RM79 3.5.1
            lits = []
            while True:
                t = self.next()
                if t.kind == "ID":
                    lits.append(t.value)
                elif t.kind == "STR" and len(t.value) == 1:
                    lits.append('"' + t.value)
                else:
                    self.error("expected an enumeration literal")
                if not self.accept_op(","):
                    break
            self.expect_op(")")
            return N("st_enum", line, lits=lits, range=None)
        if self.accept_kw("RANGE"):              # integer type, RM79 3.5.4
            lo = self.simple_expr()
            self.expect_op("..")
            return N("st_int", line, range=(lo, self.simple_expr()))
        if self.at_kw("DIGITS", "DELTA"):        # real types, RM79 3.5.5
            self.next()
            self.simple_expr()
            if self.accept_kw("RANGE"):
                self.simple_expr()
                self.expect_op("..")
                self.simple_expr()
            return N("st_float", line, prec=None, range=None)
        if self.accept_kw("ARRAY"):              # RM79 3.6
            self.expect_op("(")
            idx = []
            unconstrained = False
            while True:
                if self.tok.kind == "ID" and self.peek().kind == "OP" and self.peek().value in (",", ")"):
                    idx.append(N("st_name", line, name=self.expect_id(), tt=None, args=None))
                    unconstrained = True
                else:
                    lo = self.simple_expr()
                    self.expect_op("..")
                    idx.append(N("st_range", line, lo=lo, hi=self.simple_expr()))
                if not self.accept_op(","):
                    break
            self.expect_op(")")
            self.expect_kw("OF")
            elem = self.type_spec()
            if unconstrained:
                return N("st_uarray", line, index=idx, elem=elem)
            return N("st_array", line, index=idx, elem=elem)
        if self.accept_kw("RECORD"):             # RM79 3.7
            comps = []
            while not self.at_kw("END"):
                if self.accept_kw("NULL"):
                    self.expect_op(";")
                    continue
                cl = self.tok.line
                names = self.id_list()
                self.expect_op(":")
                self.accept_kw("CONSTANT")
                st = self.type_spec()
                if self.accept_op(":="):
                    self.expr()                  # defaults are not part of this subset
                self.expect_op(";")
                for nm in names:
                    comps.append((nm, st))
                del cl
            self.expect_kw("END")
            self.expect_kw("RECORD")
            return N("st_record", line, comps=comps, tag=None)
        if self.accept_kw("ACCESS"):
            return N("st_access", line, target=self.type_spec())
        self.error("expected a type definition")

    # -- subprograms (RM79 6) ---------------------------------------------------------
    def formal_part(self):                       # RM79 6.2
        params = []
        if not self.accept_op("("):
            return params
        while True:
            line = self.tok.line
            names = self.id_list()
            self.expect_op(":")
            mode = "CONST"
            if self.accept_kw("IN"):
                if self.accept_kw("OUT"):
                    mode = "VAR"
            elif self.accept_kw("OUT"):
                mode = "OUT"
            st = self.subtype_indication()
            if self.accept_op(":="):
                self.expr()
            for nm in names:
                params.append(N("param", line, name=nm, mode=mode, subtype=st))
            if not self.accept_op(";"):
                break
        self.expect_op(")")
        return params

    def designator(self):
        t = self.next()
        if t.kind == "ID":
            return t.value
        if t.kind == "STR":                      # operator designator "*"
            return t.value.upper()
        self.error("expected a designator")

    def subprogram(self):                        # RM79 6.2, 6.4
        line = self.tok.line
        kind = self.next().value
        name = self.designator()
        params = self.formal_part()
        result = None
        if self.accept_kw("RETURN"):             # also value-returning procedures (RM79 6.5)
            result = self.subtype_indication()
        if self.accept_op(";"):
            return None                          # a declaration only
        self.expect_kw("IS")
        if self.accept_kw("SEPARATE"):
            self.expect_op(";")
            return None
        body = self.body_part()
        if self.tok.kind in ("ID", "STR"):
            self.next()
        self.expect_op(";")
        return N("func" if result is not None else "proc", line, name=name, tt=None,
                 params=params, result=result, imports="ALL", body=body,
                 abnormal=True, green_kind=kind)

    # declarative part, begin, statements, exception handlers, end
    def body_part(self):
        line = self.tok.line
        decls = self.declarative_part()
        stmts = []
        if self.accept_kw("BEGIN"):
            stmts = self.statements()
        if self.at_kw("EXCEPTION"):
            stmts = [self.handlers(stmts, line)]
        self.expect_kw("END")
        return decls + stmts

    def handlers(self, stmts, line):             # RM79 11.2
        self.expect_kw("EXCEPTION")
        hs = []
        els = None
        while self.accept_kw("WHEN"):
            names = []
            others = False
            while True:
                if self.accept_kw("OTHERS"):
                    others = True
                else:
                    names.append(self.expect_id())
                    while self.accept_op("."):
                        names[-1] = self.expect_id()
                if not self.accept_op("|"):
                    break
            self.expect_op("=>")
            b = self.statements()
            if others:
                els = b
            else:
                hs.append((names, b))
        return N("guard", line, body=stmts, handlers=hs, els=els)

    def package(self):                           # RM79 7.1
        line = self.expect_kw("PACKAGE").line
        is_body = self.accept_kw("BODY")
        name = self.expect_id()
        self.expect_kw("IS")
        if is_body:
            body = self.body_part()
            if self.tok.kind == "ID":
                self.next()
            self.expect_op(";")
            return N("pkgbody", line, name=name, body=body)
        vis = self.declarative_part()
        priv = []
        if self.accept_kw("PRIVATE"):
            priv = self.declarative_part()
        self.expect_kw("END")
        if self.tok.kind == "ID":
            self.next()
        self.expect_op(";")
        return N("pkgspec", line, name=name, body=vis + priv)

    # -- statements (RM79 5) --------------------------------------------------------------
    def statements(self):
        out = []
        while not (self.at_kw("END", "ELSE", "ELSIF", "WHEN", "EXCEPTION", "OR") or self.tok.kind == "EOF"):
            if self.at_kw("PRAGMA"):
                self.skip_pragma()
                continue
            out.append(self.statement())
        return out

    def statement(self):
        line = self.tok.line
        label = None
        if self.accept_op("<<"):                 # RM79 5: <<L>> serves goto and exit
            label = self.expect_id()
            self.expect_op(">>")
        t = self.tok
        if t.kind == "KW":
            w = t.value
            if w == "NULL":
                self.next()
                self.expect_op(";")
                return N("begin", line, body=[])
            if w == "IF":
                return self.if_stmt()
            if w == "CASE":
                return self.case_stmt()
            if w in ("FOR", "WHILE", "LOOP"):
                return self.loop_stmt(label)
            if w in ("DECLARE", "BEGIN"):
                return self.block(label)
            if w == "EXIT":
                self.next()
                target = self.expect_id() if self.tok.kind == "ID" else None
                cond = self.expr() if self.accept_kw("WHEN") else None
                self.expect_op(";")
                return N("exit", line, target=target, cond=cond)
            if w == "RETURN":
                self.next()
                v = None if self.at_op(";") else self.expr()
                self.expect_op(";")
                return N("return", line, value=v)
            if w == "RAISE":
                self.next()
                if self.accept_op(";"):
                    return N("reraise", line)
                name = self.expect_id()
                while self.accept_op("."):
                    name = self.expect_id()
                self.expect_op(";")
                return N("raise", line, name=name)
            if w == "ASSERT":
                self.next()
                c = self.expr()
                self.expect_op(";")
                return N("assert", line, cond=c)
            if w == "GOTO":
                self.error("goto is not in this subset")
        target = self.name()
        if self.accept_op(":="):
            v = self.expr()
            self.expect_op(";")
            return N("assign", line, target=target, value=v)
        self.expect_op(";")
        return N("call", line, call=target)

    def if_stmt(self):                           # RM79 5.4
        line = self.expect_kw("IF").line
        arms = []
        c = self.expr()
        self.expect_kw("THEN")
        arms.append((c, self.statements()))
        els = None
        while True:
            if self.accept_kw("ELSIF"):
                c = self.expr()
                self.expect_kw("THEN")
                arms.append((c, self.statements()))
            elif self.accept_kw("ELSE"):
                els = self.statements()
            else:
                break
        self.expect_kw("END")
        self.expect_kw("IF")
        self.expect_op(";")
        return N("if", line, arms=arms, els=els)

    def case_stmt(self):                         # RM79 5.5
        line = self.expect_kw("CASE").line
        sel = self.expr()
        self.expect_kw("OF")
        arms = []
        els = None
        while self.accept_kw("WHEN"):
            labels = []
            others = False
            while True:
                if self.accept_kw("OTHERS"):
                    others = True
                else:
                    lo = self.simple_expr()
                    if self.accept_op(".."):
                        labels.append(("range", lo, self.simple_expr()))
                    else:
                        labels.append(("value", lo))
                if not self.accept_op("|"):
                    break
            self.expect_op("=>")
            b = self.statements()
            if others:
                els = b
            else:
                arms.append((labels, b))
        self.expect_kw("END")
        self.expect_kw("CASE")
        self.expect_op(";")
        return N("case", line, sel=sel, arms=arms, els=els if els is not None else None,
                 green=True)

    def loop_stmt(self, label):                  # RM79 5.6
        line = self.tok.line
        if self.accept_kw("FOR"):
            var = self.expect_id()
            self.expect_kw("IN")
            rev = self.accept_kw("REVERSE")
            if self.tok.kind == "ID" and self.peek().kind == "KW" and self.peek().value == "LOOP":
                st = N("st_name", line, name=self.expect_id(), tt=None, args=None)
            else:
                lo = self.simple_expr()
                if self.accept_op(".."):
                    st = N("st_range", line, lo=lo, hi=self.simple_expr())
                else:
                    st = N("st_name", line, name=lo.name, tt=None, args=None)
            head = ("for", var, rev, st)
        elif self.accept_kw("WHILE"):
            head = ("while", self.expr())
        else:
            head = ("while", N("bool", line, value=True))
        self.expect_kw("LOOP")
        b = self.statements()
        self.expect_kw("END")
        self.expect_kw("LOOP")
        if self.tok.kind == "ID":
            end = self.next().value
            if end != label:
                self.error("the name after END LOOP does not match the label")
        self.expect_op(";")
        s = N("repeat", line, head=head, body=b, green_loop=True)
        s.match = label or f"%loop{line}_{self.i}"
        return s

    def block(self, label):                      # RM79 6.7
        line = self.tok.line
        decls = []
        if self.accept_kw("DECLARE"):
            decls = self.declarative_part()
        self.expect_kw("BEGIN")
        stmts = self.statements()
        if self.at_kw("EXCEPTION"):
            stmts = [self.handlers(stmts, line)]
        self.expect_kw("END")
        if self.tok.kind == "ID":
            self.next()
        self.expect_op(";")
        s = N("begin", line, body=decls + stmts)
        if label:
            s.match = label
        return s

    # -- expressions (RM79 4.4) --------------------------------------------------------------
    def expr(self):
        left = self.relation()
        while self.at_kw("AND", "OR", "XOR"):
            op = self.next().value
            if op == "AND":
                self.accept_kw("THEN")           # short-circuit forms, RM79 5.4.1
            elif op == "OR":
                self.accept_kw("ELSE")
            left = N("binop", left.line, op=op, left=left, right=self.relation())
        return left

    def relation(self):
        left = self.simple_expr()
        line = left.line
        if self.at_op("=", "/=", "<", "<=", ">", ">="):
            op = self.next().value
            return N("binop", line, op=op, left=left, right=self.simple_expr())
        neg = False
        if self.at_kw("NOT") and self.peek().kind == "KW" and self.peek().value == "IN":
            self.next()
            neg = True
        if self.accept_kw("IN"):                 # membership, RM79 4.5.2
            lo = self.simple_expr()
            self.expect_op("..")
            hi = self.simple_expr()
            test = N("binop", line, op="AND",
                     left=N("binop", line, op=">=", left=left, right=lo),
                     right=N("binop", line, op="<=", left=left, right=hi))
            return N("unop", line, op="NOT", arg=test) if neg else test
        return left

    def simple_expr(self):
        line = self.tok.line
        if self.at_op("+", "-") or self.at_kw("NOT"):
            op = self.next().value
            left = N("unop", line, op=op, arg=self.term())
        else:
            left = self.term()
        while self.at_op("+", "-", "&"):
            op = self.next().value
            left = N("binop", line, op=op, left=left, right=self.term())
        return left

    def term(self):
        left = self.factor()
        while self.at_op("*", "/") or self.at_kw("MOD"):
            op = self.next().value
            left = N("binop", left.line, op=op, left=left, right=self.factor())
        return left

    def factor(self):
        left = self.primary()
        if self.accept_op("**"):
            left = N("binop", left.line, op="**", left=left, right=self.primary())
        return left

    def primary(self):
        t = self.tok
        line = t.line
        if t.kind == "INT":
            self.next()
            return N("int", line, value=t.value)
        if t.kind == "FLOAT":
            self.next()
            return N("float", line, value=t.value)
        if t.kind == "STR":
            self.next()
            return N("str", line, value=t.value)
        if self.accept_kw("NULL"):
            return N("nil", line)
        if self.accept_kw("NEW"):                # allocator, RM79 4.7
            name = self.expect_id()
            init = None
            if self.at_op("("):
                init = self.aggregate_or_paren()
            return N("new", line, name=name, init=init)
        if self.at_op("("):
            return self.aggregate_or_paren()
        if t.kind == "ID":
            return self.name()
        self.error("expected an expression")

    def aggregate_or_paren(self):                # RM79 3.6.2, 4.4
        line = self.expect_op("(").line
        items = []
        while True:
            if self.accept_kw("OTHERS"):
                self.expect_op("=>")
                items.append(N("citem", line, keys=[("others",)], value=self.expr()))
            else:
                first = self.expr()
                keys = None
                if self.at_op("..", "|", "=>"):
                    keys = []
                    k = first
                    while True:
                        if self.accept_op(".."):
                            keys.append(("range", k, self.simple_expr()))
                        else:
                            keys.append(("value", k))
                        if self.accept_op("|"):
                            k = self.simple_expr()
                            continue
                        break
                    self.expect_op("=>")
                    items.append(N("citem", line, keys=keys, value=self.expr()))
                else:
                    items.append(N("citem", line, keys=None, value=first))
            if not self.accept_op(","):
                break
        self.expect_op(")")
        if len(items) == 1 and items[0].keys is None:
            return N("paren", line, expr=items[0].value)
        return N("cons", line, items=items)

    def name(self):                              # RM79 4.1
        line = self.tok.line
        p = N("name", line, name=self.expect_id())
        while True:
            if self.at_op("("):
                self.next()
                args = []
                if not self.at_op(")"):
                    while True:
                        # named association F := x / F =: v / F :=: v (RM79 5.2.1)
                        if self.tok.kind == "ID" and self.peek().kind == "OP" and \
                                self.peek().value in (":=", "=:", ":=:"):
                            self.next()
                            self.next()
                        if self.tok.kind == "ID" and self.peek().kind == "OP" and self.peek().value == "=>":
                            self.next()
                            self.next()
                        lo = self.expr()
                        if self.accept_op(".."):
                            args.append(N("range", line, lo=lo, hi=self.simple_expr()))
                        else:
                            args.append(lo)
                        if not self.accept_op(","):
                            break
                self.expect_op(")")
                p = N("apply", line, fn=p, args=args)
            elif self.at_op("."):
                self.next()
                if self.accept_kw("ALL"):
                    p = N("select", line, obj=p, name="ALL")
                else:
                    p = N("select", line, obj=p, name=self.expect_id())
            elif self.at_op("'"):
                self.next()
                attr = self.next().value         # attribute names are not reserved
                args = None
                if self.at_op("("):
                    self.next()
                    args = [self.expr()]
                    self.expect_op(")")
                p = N("attr", line, obj=p, name=attr, args=args)
            else:
                return p


def parse(text, filename="<input>"):
    return Parser(text, filename).compilation()
