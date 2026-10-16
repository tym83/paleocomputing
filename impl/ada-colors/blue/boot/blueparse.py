"""blueparse -- a recursive-descent parser for the part of BLUE that bluec v1 is written in.

The productions follow Appendix A of the Language Specification (15 Feb 1978); the
numbers in brackets, e.g. [4-63], are the production numbers used there.
"""

from bluelex import Tok, lex  # noqa: F401


class ParseError(Exception):
    pass


class N:
    """A tree node: a kind, a line and whatever attributes the kind needs."""

    def __init__(self, kind, line, **kw):
        self.kind = kind
        self.line = line
        self.__dict__.update(kw)

    def __repr__(self):
        return f"N({self.kind}@{self.line})"


class Parser:
    def __init__(self, toks):
        self.toks = toks
        self.i = 0

    # ---- token helpers ------------------------------------------------------------
    @property
    def t(self):
        return self.toks[self.i]

    def peek(self, k=1):
        return self.toks[min(self.i + k, len(self.toks) - 1)]

    def is_(self, text, kind=None):
        t = self.t
        if kind and t.kind != kind:
            return False
        return t.text == text and t.kind in ("SYM", "RES", "ID")

    def take(self):
        t = self.t
        self.i += 1
        return t

    def accept(self, text):
        if self.is_(text):
            return self.take()
        return None

    def expect(self, text):
        if not self.is_(text):
            raise ParseError(f"line {self.t.line}: expected {text}, found {self.t.text or self.t.kind}")
        return self.take()

    def ident(self):
        if self.t.kind != "ID":
            raise ParseError(f"line {self.t.line}: expected an identifier, found {self.t.text}")
        return self.take().text

    # ---- segments [4-4] -------------------------------------------------------------
    def compilation(self):
        segs = []
        while self.t.kind != "EOF":
            segs.append(self.segment())
        return segs

    def segment(self):
        line = self.t.line
        main = bool(self.accept("MAIN"))
        self.expect("SEGMENT")
        name = self.ident()
        uses = []
        if self.accept("USES"):
            uses = self.uses_list()
        if self.accept("DEFINES"):
            self.skip_parens_or_word()
        self.expect(";")
        decls, stmts, routines = self.closed_body()
        self.expect("END")
        self.expect("SEGMENT")
        if self.ident() != name:
            raise ParseError(f"line {self.t.line}: END SEGMENT {name} expected")
        self.expect(";")
        return N("segment", line, name=name, main=main, uses=uses, decls=decls,
                 stmts=stmts, routines=routines)

    def uses_list(self):
        names = []
        self.expect("(")
        while True:
            names.append(self.ident())
            if self.is_("("):
                self.skip_parens()
            if not self.accept(","):
                break
        self.expect(")")
        return names

    def skip_parens(self):
        depth = 0
        while True:
            t = self.take()
            if t.text == "(" and t.kind == "SYM":
                depth += 1
            elif t.text == ")" and t.kind == "SYM":
                depth -= 1
                if depth == 0:
                    return

    def skip_parens_or_word(self):
        if self.is_("("):
            self.skip_parens()
        else:
            self.take()

    # ---- scope bodies [4-1] [4-2] ---------------------------------------------------
    def closed_body(self):
        decls = self.declarations()
        stmts = self.statements()
        routines = []
        while self.is_("PROCEDURE") or self.is_("FUNCTION") or self.is_("INLINE"):
            routines.append(self.routine())
        return decls, stmts, routines

    def open_body(self):
        return self.declarations(), self.statements()

    def declarations(self):
        ds = []
        while True:
            if self.is_("CONST") or self.is_("VAR"):
                ds.append(self.object_decl())
            elif self.is_("TYPE"):
                ds.append(self.type_decl())
            else:
                return ds

    def object_decl(self):
        line = self.t.line
        kind = self.take().text
        names = [self.ident()]
        while self.accept(","):
            names.append(self.ident())
        self.expect(":")
        ts = self.type_spec()
        init = None
        if self.accept(":="):
            init = self.expr()
        elif kind == "CONST":
            raise ParseError(f"line {line}: a constant needs a value")
        self.expect(";")
        return N("const" if kind == "CONST" else "var", line, names=names, ts=ts, init=init)

    def type_decl(self):
        line = self.t.line
        self.expect("TYPE")
        name = self.ident()
        self.expect("=")
        ts = self.type_spec()
        self.expect(";")
        return N("type", line, name=name, ts=ts)

    # ---- type specifications [3-8] ---------------------------------------------------
    def type_spec(self):
        line = self.t.line
        t = self.t
        if self.accept("ARRAY"):
            self.expect("[")
            lo = self.expr()
            self.expect(":")
            hi = self.expr()
            self.expect("]")
            self.expect("OF")
            elem = self.type_spec()
            return N("ts_array", line, lo=lo, hi=hi, elem=elem)
        if self.accept("RECORD"):
            fields = []
            while self.accept("VAR"):
                fl = t.line
                names = [self.ident()]
                while self.accept(","):
                    names.append(self.ident())
                self.expect(":")
                ft = self.type_spec()
                self.expect(";")
                fields.append((names, ft, fl))
            self.expect("END")
            self.expect("RECORD")
            return N("ts_record", line, fields=fields)
        if t.kind != "ID":
            raise ParseError(f"line {line}: a type specification expected")
        name = self.take().text
        if name == "ENUM":
            self.expect("(")
            lits = [self.take().text]
            while self.accept(","):
                lits.append(self.take().text)
            self.expect(")")
            return N("ts_enum", line, lits=lits)
        args = []
        if name in ("ASCII_STR", "CHAR_STR", "PTR") and self.is_("("):
            self.expect("(")
            if name == "PTR":
                args = [self.type_spec()]
            else:
                if self.t.kind == "GEN":
                    args = [N("gen", line, name=self.take().text[1:])]
                else:
                    args = [self.expr()]
                if self.accept(","):
                    args.append(self.take().text)
            self.expect(")")
        rng = None
        if self.is_("["):
            rng = self.range_spec()
        return N("ts_name", line, name=name, args=args, rng=rng)

    def range_spec(self):
        """[3-35]: [L:U], (L:U], [L:U) or (L:U)"""
        line = self.t.line
        open_lo = self.take().text == "("
        lo = self.expr()
        self.expect(":")
        hi = self.expr()
        t = self.take()
        if t.text not in (")", "]"):
            raise ParseError(f"line {line}: a range must end with ] or )")
        return N("range", line, lo=lo, hi=hi, open_lo=open_lo, open_hi=t.text == ")")

    # ---- routines [4-17] [4-30] -------------------------------------------------------
    def routine(self):
        line = self.t.line
        self.accept("INLINE")
        kind = self.take().text            # PROCEDURE or FUNCTION
        name = self.ident()
        groups = [[], [], []]
        if self.accept("("):
            g = 0
            while not self.is_(")"):
                if self.accept("#"):
                    g += 1
                    continue
                pl = self.t.line
                names = [self.ident()]
                while self.accept(","):
                    names.append(self.ident())
                self.expect(":")
                ts = self.type_spec()
                for nm in names:
                    groups[g].append(N("param", pl, name=nm, ts=ts, mode=g))
                self.accept(",")
            self.expect(")")
        result = None
        if kind == "FUNCTION":
            self.expect("RETURNS")
            self.expect("(")
            result = self.type_spec()
            self.expect(")")
        signals = []
        while True:
            if self.accept("SIGNALS"):
                self.expect("(")
                signals.append(self.ident())
                while self.accept(","):
                    signals.append(self.ident())
                self.expect(")")
            elif self.accept("IMPORTS"):
                self.skip_parens()
            else:
                break
        self.expect(";")
        decls, stmts, routines = self.closed_body()
        if routines:
            raise ParseError(f"line {line}: the bootstrap has no nested routines")
        self.expect("END")
        self.expect(kind)
        if self.ident() != name:
            raise ParseError(f"line {self.t.line}: END {kind} {name} expected")
        self.expect(";")
        return N("routine", line, rkind=kind, name=name,
                 params=groups[0] + groups[1] + groups[2], result=result,
                 signals=signals, decls=decls, stmts=stmts)

    # ---- statements [4-51] --------------------------------------------------------------
    def statements(self):
        ss = []
        while True:
            t = self.t
            if t.kind == "EOF":
                return ss
            if t.kind == "RES" and t.text in ("END", "ELSE", "ORIF", "EXCEPT", "PROCEDURE",
                                              "FUNCTION", "INLINE"):
                return ss
            ss.append(self.statement())

    def statement(self):
        s = self.unlabeled()
        if self.is_("EXCEPT"):
            line = self.take().line
            handlers = []
            while not self.is_("END"):
                names = [self.ident()]
                while self.accept(","):
                    names.append(self.ident())
                self.expect("-->")
                body = self.open_body()
                self.expect("END")
                self.expect(";")
                handlers.append((names, body))
            self.expect("END")
            self.expect("EXCEPT")
            self.expect(";")
            s = N("except", line, stmt=s, handlers=handlers)
        return s

    def unlabeled(self):
        t = self.t
        line = t.line
        if self.accept(";"):
            return N("null", line)
        if t.kind == "RES":
            w = t.text
            if w == "IF":
                return self.if_stmt()
            if w == "SELECT":
                return self.case_stmt()
            if w == "LOOP":
                return self.loop_stmt()
            if w == "BLOCK":
                self.take()
                body = self.open_body()
                self.expect("END")
                self.expect("BLOCK")
                self.expect(";")
                return N("block", line, body=body)
            if w == "EXIT":
                self.take()
                self.expect(";")
                return N("exit", line)
            if w == "RETURN":
                self.take()
                e = None
                if not self.is_(";"):
                    e = self.expr()
                self.expect(";")
                return N("return", line, e=e)
            if w == "SIGNAL":
                self.take()
                name = None
                if self.t.kind == "ID":
                    name = self.ident()
                self.expect(";")
                return N("signal", line, name=name)
            if w == "ASSERT":
                self.take()
                e = self.expr()
                self.expect(";")
                return N("assert", line, e=e)
        target = self.postfix()
        if self.accept(":="):
            e = self.expr()
            self.expect(";")
            return N("assign", line, target=target, e=e)
        self.expect(";")
        if target.kind == "name":
            return N("call", line, name=target.name, groups=[[], [], []])
        if target.kind != "apply":
            raise ParseError(f"line {line}: a statement expected")
        return N("call", line, name=target.name, groups=target.groups)

    def if_stmt(self):
        line = self.t.line
        arms = []
        self.expect("IF")
        cond = self.expr()
        self.expect("THEN")
        arms.append((cond, self.open_body()))
        while self.accept("ORIF"):
            cond = self.expr()
            self.expect("THEN")
            arms.append((cond, self.open_body()))
        els = None
        if self.accept("ELSE"):
            els = self.open_body()
        self.expect("END")
        self.expect("IF")
        self.expect(";")
        return N("if", line, arms=arms, els=els)

    def case_stmt(self):
        line = self.t.line
        self.expect("SELECT")
        choice = self.expr()
        self.expect("FROM")
        arms = []
        els = None
        while not self.is_("END"):
            if self.accept("ELSE"):
                self.expect("-->")
                els = self.open_body()
                self.expect("END")
                self.expect(";")
                continue
            labels = [self.case_label()]
            while self.accept(","):
                labels.append(self.case_label())
            self.expect("-->")
            body = self.open_body()
            self.expect("END")
            self.expect(";")
            arms.append((labels, body))
        self.expect("END")
        self.expect("SELECT")
        self.expect(";")
        return N("case", line, choice=choice, arms=arms, els=els)

    def case_label(self):
        if self.is_("[") or (self.is_("(") and self.range_ahead()):
            return self.range_spec()
        return self.expr()

    def range_ahead(self):
        depth, j = 0, self.i
        while True:
            t = self.toks[j]
            if t.kind == "EOF":
                return False
            if t.kind == "SYM" and t.text in "([":
                depth += 1
            elif t.kind == "SYM" and t.text in ")]":
                depth -= 1
                if depth == 0:
                    return False
            elif depth == 1 and t.kind == "SYM" and t.text == ":":
                return True
            j += 1

    def loop_stmt(self):
        line = self.t.line
        self.expect("LOOP")
        if self.accept("FOR"):
            var = None
            if self.t.kind == "ID":
                var = self.ident()
                self.expect("IN")
            rng = self.range_spec()
            self.expect("DO")
            body = self.open_body()
            self.expect("END")
            self.expect("LOOP")
            if self.t.kind == "ID":
                self.ident()
            self.expect(";")
            return N("for", line, var=var, rng=rng, body=body)
        until = None
        if self.accept("UNTIL"):
            until = self.expr()
            self.expect("DO")
        body = self.open_body()
        self.expect("END")
        self.expect("LOOP")
        when = None
        if self.accept("WHEN"):
            when = self.expr()
        self.expect(";")
        return N("loop", line, until=until, when=when, body=body)

    # ---- expressions [3-15] ---------------------------------------------------------------
    def expr(self):
        return self.simple()

    def simple(self):
        left = self.conj()
        while self.is_("OR") or self.is_("!") or self.is_("XOR") or self.is_("->"):
            t = self.take()
            left = N("bin", t.line, op=t.text, a=left, b=self.conj())
        return left

    def conj(self):
        left = self.relation()
        while self.is_("AND") or self.is_("&"):
            t = self.take()
            left = N("bin", t.line, op=t.text, a=left, b=self.relation())
        return left

    def relation(self):
        left = self.sum()
        while True:
            t = self.t
            if t.kind == "SYM" and t.text in ("=", "<", ">", "<=", ">=", "<>"):
                self.take()
                left = N("bin", t.line, op=t.text, a=left, b=self.sum())
            elif self.is_("IN"):
                self.take()
                left = N("in", t.line, e=left, rng=self.range_spec())
            else:
                return left

    def sum(self):
        left = self.term()
        while self.t.kind == "SYM" and self.t.text in ("+", "-", "!!"):
            t = self.take()
            left = N("bin", t.line, op=t.text, a=left, b=self.term())
        return left

    def term(self):
        left = self.factor()
        while (self.t.kind == "SYM" and self.t.text in ("*", "/", "//")) or self.is_("MOD"):
            t = self.take()
            left = N("bin", t.line, op=t.text, a=left, b=self.factor())
        return left

    def factor(self):
        left = self.secondary()
        while self.is_("**"):
            t = self.take()
            left = N("bin", t.line, op="**", a=left, b=self.secondary())
        return left

    def secondary(self):
        t = self.t
        if (t.kind == "SYM" and t.text in ("+", "-")) or self.is_("NOT"):
            self.take()
            return N("un", t.line, op=t.text, e=self.primary())
        return self.primary()

    def primary(self):
        return self.postfix()

    def postfix(self):
        e = self.atom()
        while True:
            t = self.t
            if t.kind == "SYM" and t.text == "(" and e.kind == "name":
                e = N("apply", t.line, name=e.name, groups=self.arg_groups())
            elif t.kind == "SYM" and t.text == "(":
                args = self.arg_groups()[0]
                e = N("index", t.line, e=e, args=args)
            elif t.kind == "SYM" and t.text == ".":
                self.take()
                e = N("field", t.line, e=e, name=self.ident())
            elif t.kind == "SYM" and t.text == "@":
                self.take()
                e = N("deref", t.line, e=e)
            elif t.kind == "SYM" and t.text == "[":
                self.take()
                lo = self.expr()
                self.expect(":")
                hi = self.expr()
                self.expect("]")
                e = N("substr", t.line, e=e, lo=lo, hi=hi)
            else:
                return e

    def arg_groups(self):
        groups = [[], [], []]
        g = 0
        self.expect("(")
        while not self.is_(")"):
            if self.accept("#"):
                g += 1
                continue
            groups[g].append(self.expr())
            self.accept(",")
        self.expect(")")
        return groups

    def atom(self):
        t = self.t
        line = t.line
        if t.kind == "NUM":
            self.take()
            isfloat, scale = t.value
            if isfloat or scale is not None:
                raise ParseError(f"line {line}: the bootstrap has integers only")
            return N("int", line, v=int(t.text))
        if t.kind in ("STR", "ENUM"):
            parts = []
            while self.t.kind in ("STR", "ENUM"):
                parts.append(self.take())
            if all(p.kind == "ENUM" for p in parts):
                if len(parts) > 1:
                    raise ParseError(f"line {line}: two enumerated literals in a row")
                return N("enumlit", line, name=parts[0].text)
            return N("str", line, parts=[(p.kind, p.text) for p in parts])
        if self.accept("TRUE"):
            return N("bool", line, v=1)
        if self.accept("FALSE"):
            return N("bool", line, v=0)
        if self.accept("NIL"):
            return N("nil", line)
        if t.kind == "SYM" and t.text == "(":
            # a record constructor (F: E, ...) or a parenthesized expression
            if self.peek().kind == "ID" and self.peek(2).text == ":" and self.peek(2).kind == "SYM":
                self.take()
                inits = []
                while True:
                    fname = self.ident()
                    self.expect(":")
                    inits.append((fname, self.expr()))
                    if not self.accept(","):
                        break
                self.expect(")")
                return N("reccons", line, inits=inits)
            self.take()
            e = self.expr()
            self.expect(")")
            return N("paren", line, e=e)
        if t.kind == "ID":
            name = self.take().text
            if self.is_("$") and self.peek().kind == "ID":
                self.take()
                name = name + "$" + self.ident()
            if name in ("NEW", "PTR$NEW"):
                self.expect("(")
                ts = self.type_spec()
                self.expect(")")
                return N("new", line, ts=ts)
            return N("name", line, name=name)
        raise ParseError(f"line {line}: an expression expected, found {t.text or t.kind}")


def parse(src):
    return Parser(lex(src)).compilation()
