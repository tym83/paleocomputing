"""Parser for YELLOW, following Appendix B of the Language Report
(DTIC ADB950587, pp.1084-1089); rule numbers in comments are those of the
Appendix. The bootstrap reads the part of the language the first yellowc is
written in, but the parser takes the whole grammar.
"""

from yellowlex import lex


class ParseError(Exception):
    pass


class N:
    def __init__(self, kind, line, **kw):
        self.kind = kind
        self.line = line
        self.__dict__.update(kw)

    def __repr__(self):
        return f"N({self.kind}@{self.line} {dict((k, v) for k, v in self.__dict__.items() if k not in ('kind', 'line'))})"


# statement sequences end at these words
STOP = {"ELSIF", "ELSE", "ENDIF", "CASE", "ENDSELECT", "ENDWHILE", "ENDFOR", "ENDLOOP",
        "END", "ENDEXCEPTION", "ENDPROCEDURE", "ENDFUNCTION", "ENDPROCESS", "ENDMODULE",
        "ENDMONITOR"}
REL = {"IN", "#", "=", "<", "<=", ">", ">=", "##", "###", "==", "===", "<<", "<<=",
       "<<<", "<<<=", ">>", ">>=", ">>>", ">>>="}
ASSOC_MUL = {"*", "AND"}
NONASSOC_MUL = {"/", "DIV", "MOD", "**", "***", "//", "///"}
ASSOC_ADD = {"+", "OR"}
NONASSOC_ADD = {"-", "XOR", "--", "---", "++", "+++"}
DECL_WORDS = {"CONST", "VAR", "LABEL", "TYPE", "REPRESENTATION", "FUNCTION", "PROCEDURE",
              "MODULE", "MONITOR", "TEMPLATE", "INSTANCE", "PROCESS"}


class Parser:
    def __init__(self, toks):
        self.t = toks
        self.p = 0
        self.labels = [set()]

    # ---- token helpers --------------------------------------------------
    @property
    def tok(self):
        return self.t[self.p]

    def peek(self, k=1):
        return self.t[min(self.p + k, len(self.t) - 1)]

    def at(self, text):
        t = self.tok
        return t.kind in ("kw", "op") and t.text == text

    def take(self, text=None):
        t = self.tok
        if text is not None and not self.at(text):
            raise ParseError(f"line {t.line}: expected {text}, found {t.text or 'end of text'}")
        self.p += 1
        return t

    def accept(self, text):
        if self.at(text):
            self.p += 1
            return True
        return False

    def ident(self):
        t = self.tok
        if t.kind != "id":
            raise ParseError(f"line {t.line}: expected an identifier, found {t.text or 'end of text'}")
        self.p += 1
        return t.text

    # ---- program: rule 1, and a sequence of segments (XIII.A) ------------
    def program(self):
        units = []
        while self.tok.kind != "eof":
            units.append(self.declaration())
            self.accept(";")
        return units

    # rules 2-5
    def module(self):
        line = self.tok.line
        word = self.take().text
        name = self.ident()
        imports, exports = [], []
        while self.at("IMPORT"):
            self.take()
            while True:
                imports.append(self.import_item())
                if not self.accept(","):
                    break
            self.take(";")
        while self.at("EXPORT"):
            self.take()
            attr = None
            if self.tok.kind == "kw" and self.tok.text in ("OPAQUE", "TRANSPARENT", "READONLY", "VAR"):
                attr = self.take().text
            while True:
                it = self.import_item()
                it.attr = attr
                exports.append(it)
                if not self.accept(","):
                    break
            self.take(";")
        body = self.block()
        self.take("ENDMODULE" if word == "MODULE" else "ENDMONITOR")
        end = self.ident()
        if end != name:
            raise ParseError(f"line {self.t[self.p - 1].line}: {word} {name} ends as {end}")
        return N("module", line, name=name, monitor=word == "MONITOR", imports=imports,
                 exports=exports, body=body)

    def import_item(self):
        line = self.tok.line
        name = self.extended_id()
        frm = alias = None
        if self.accept("FROM"):
            frm = self.ident()
        if self.accept("AS"):
            alias = self.extended_id()
        return N("item", line, name=name, frm=frm, alias=alias, attr=None)

    # rule 56
    def extended_id(self):
        t = self.tok
        if t.kind == "id":
            self.p += 1
            return t.text
        if t.kind == "kw" and t.text in ("NOT", "AND", "OR", "DIV", "MOD", "XOR", "IN"):
            self.p += 1
            return t.text
        if t.kind == "op" and t.text not in ("(", ")", "[", "]", ",", ";", ":", ".", "..", "->"):
            self.p += 1
            return t.text
        raise ParseError(f"line {t.line}: expected a name, found {t.text}")

    # rule 6
    def block(self):
        line = self.tok.line
        decls = []
        self.labels.append(set())
        while self.tok.kind == "kw" and self.tok.text in DECL_WORDS:
            decls.extend(self.declaration_group())
            while self.accept(";"):
                pass
        handler = None
        if self.at("EXCEPTION"):
            handler = self.handler()
            self.accept(";")
        stmts = self.statements(labelled=True)
        self.labels.pop()
        return N("block", line, decls=decls, handler=handler, stmts=stmts)

    # rule 18
    def handler(self):
        line = self.take("EXCEPTION").line
        cases, other = [], None
        while self.accept("CASE"):
            names = [self.ident()]
            while self.accept(","):
                names.append(self.ident())
            self.take("->")
            cases.append((names, self.statements()))
        if self.accept("ELSE"):
            other = self.statements()
        self.take("ENDEXCEPTION")
        return N("handler", line, cases=cases, other=other)

    # rules 7-17: a declaration word may head several entries
    def declaration_group(self):
        w = self.tok.text
        if w in ("CONST", "VAR", "TYPE", "REPRESENTATION"):
            line = self.take().line
            out = [self.simple_entry(w, line)]
            # VAR a: R; b: S  -- an entry continues while an identifier is
            # followed by ',' ':' or '=' (and is not a declared label)
            while self.at(";") and self.peek().kind == "id" and \
                    self.peek().text not in self.labels[-1] and \
                    ((w in ("CONST", "VAR") and self.peek(2).kind == "op" and self.peek(2).text in (",", ":"))
                     or (w in ("TYPE", "REPRESENTATION") and self.peek(2).kind == "op" and self.peek(2).text == "=")):
                self.take(";")
                out.append(self.simple_entry(w, self.tok.line))
            return out
        return [self.declaration()]

    def names(self):
        out = []
        while True:
            name = self.ident()
            at = None
            if self.accept("AT"):
                at = self.expression()
            out.append((name, at))
            if not self.accept(","):
                return out

    def simple_entry(self, w, line):
        if w == "CONST":
            names = self.names()
            self.take(":")
            rep = self.representation()
            self.take("=")
            return N("const", line, names=names, rep=rep, init=self.expression())
        if w == "VAR":
            names = self.names()
            self.take(":")
            rep = self.representation()
            init = None
            if self.accept(":="):
                init = self.expression()
            return N("var", line, names=names, rep=rep, init=init)
        if w == "TYPE":
            name = self.ident()
            self.take("=")
            return N("type", line, name=name, typ=self.type_def())
        name = self.ident()
        self.take("=")
        return N("repdecl", line, name=name, rep=self.representation())

    def declaration(self):
        t = self.tok
        line = t.line
        w = t.text if t.kind == "kw" else None
        if w in ("CONST", "VAR", "TYPE", "REPRESENTATION"):
            return self.declaration_group()[0]
        if w == "LABEL":
            self.take()
            names = [self.ident()]
            while self.accept(","):
                names.append(self.ident())
            self.labels[-1].update(names)
            return N("label", line, names=names)
        if w in ("FUNCTION", "PROCEDURE"):
            self.take()
            mode = None
            if self.tok.kind == "kw" and self.tok.text in ("EXTENDS", "REPLACES"):
                mode = self.take().text
            name = self.extended_id()
            ret, params = self.formals()
            inline = self.accept("INLINE")
            body = self.block()
            self.take("ENDFUNCTION" if w == "FUNCTION" else "ENDPROCEDURE")
            end = self.extended_id()
            if end != name:
                raise ParseError(f"line {self.t[self.p - 1].line}: {w} {name} ends as {end}")
            return N("routine", line, func=w == "FUNCTION", mode=mode, name=name, ret=ret,
                     params=params, inline=inline, body=body)
        if w in ("MODULE", "MONITOR"):
            return self.module()
        if w == "TEMPLATE":
            self.take()
            name = self.ident()
            self.take("(")
            formals = [self.ident()]
            while self.accept(","):
                formals.append(self.ident())
            self.take(")")
            start = self.p
            self.module()
            stop = self.p
            self.take("ENDTEMPLATE")
            if self.ident() != name:
                raise ParseError(f"line {line}: TEMPLATE {name} ends with another name")
            return N("template", line, name=name, formals=formals, toks=self.t[start:stop])
        if w == "INSTANCE":
            self.take()
            name = self.ident()
            self.take("(")
            actuals = [self.extended_id()]
            while self.accept(","):
                actuals.append(self.extended_id())
            self.take(")")
            return N("instance", line, name=name, actuals=actuals)
        if w == "PROCESS":
            self.take()
            name = self.ident()
            ret, params = self.formals()
            prio = inst = size = None
            if self.accept("PRIORITY"):
                prio = self.expression()
            if self.accept("INSTANCES"):
                inst = self.expression()
            if self.accept("SIZE"):
                size = self.expression()
            body = self.block()
            self.take("ENDPROCESS")
            if self.ident() != name:
                raise ParseError(f"line {line}: PROCESS {name} ends with another name")
            return N("process", line, name=name, params=params, prio=prio, inst=inst,
                     size=size, body=body)
        raise ParseError(f"line {line}: expected a declaration, found {t.text}")

    # rule 87
    def formals(self):
        ret = None
        if self.accept("RETURNS"):
            ret = self.representation()
        self.take("(")
        params = []
        while not self.at(")"):
            line = self.tok.line
            if self.tok.kind == "kw" and self.tok.text in ("CONST", "OUT", "VAR"):
                cls = self.take().text
            else:
                raise ParseError(f"line {line}: a formal parameter needs CONST, OUT or VAR")
            while True:
                names = self.names()
                self.take(":")
                frep = self.formal_rep()
                params.append(N("param", line, cls=cls, names=names, rep=frep))
                # "CONST a: R; b: S" -- the class carries over (the 1978
                # examples also separate with commas)
                if (self.at(";") or self.at(",")) and self.peek().kind == "id":
                    self.take()
                    continue
                break
            if not self.accept(";") and not self.accept(","):
                break
        self.take(")")
        return ret, params

    # rules 85-86
    def formal_rep(self):
        if self.at("ARRAY") and self.peek().kind == "op" and self.peek().text == "(" and \
                (self.peek(3).kind == "kw" and self.peek(3).text == "DIMENSIONS" or
                 self.peek(3).kind == "id" and self.peek(3).text == "DIMENSION"):
            line = self.take().line
            self.take("(")
            n = self.expression()
            self.take()                       # DIMENSIONS (or DIMENSION, p.1063)
            self.take("OF")
            rep = self.representation()
            self.take(")")
            return N("uarray", line, dims=n, elem=rep)
        if self.at("SPACE"):
            return N("space", self.take().line)
        return self.representation()

    # rules 61-62, 72-84; [Type] is accepted as a type identifier
    def representation(self):
        t = self.tok
        line = t.line
        if t.kind == "id":
            nxt = self.peek()
            if nxt.kind == "kw" and nxt.text in ("UNORDERED", "ORDERED", "ALPHABET", "ARRAY",
                                                  "RECORD", "FILE", "POINTER", "SET"):
                tname = self.ident()
                c = self.concrete()
                c.typename = tname
                return c
            if nxt.kind == "id" and self.peek(2).kind == "op" and self.peek(2).text == "[":
                tname = self.ident()             # Polar_Type Foot_Type [1..12]
                c = self.concrete()
                c.typename = tname
                return c
        return self.concrete()

    def concrete(self):
        c = self.concrete1()
        if self.accept("PACKED"):
            c.packed = True
            if self.tok.kind in ("int", "id") or self.at("("):
                c.packsize = self.expression()
        if self.accept("ALIGNMENT"):
            c.align = self.expression()
        return c

    def concrete1(self):
        t = self.tok
        line = t.line
        w = t.text if t.kind == "kw" else None
        if t.kind == "id":
            name = self.ident()
            q = self.qualifier()
            return N("rname", line, name=name, q=q, typename=None)
        if w in ("UNORDERED", "ORDERED"):
            self.take()
            self.take("(")
            ids = [self.ident()]
            while self.accept(","):
                ids.append(self.ident())
            self.take(")")
            return N("enum", line, ordered=w == "ORDERED", ids=ids, q=self.qualifier(),
                     typename=None)
        if w == "ALPHABET":
            self.take()
            self.take("(")
            chars = []
            while not self.at(")"):
                ct = self.take()
                if ct.kind != "char":
                    raise ParseError(f"line {line}: an ALPHABET lists character literals")
                chars.append(ct.text)
                if not self.accept(","):
                    break
            self.take(")")
            return N("alphabet", line, chars=chars, q=self.qualifier(), typename=None)
        if w == "ARRAY":
            self.take()
            self.take("(")
            idx = [self.representation()]
            while self.accept(","):
                idx.append(self.representation())
            self.take("OF")
            elem = self.representation()
            self.take(")")
            return N("array", line, idx=idx, elem=elem, typename=None)
        if w == "RECORD":
            self.take()
            fields, sel = [], None
            while self.tok.kind == "kw" and self.tok.text in ("CONST", "VAR"):
                fields.extend(self.field_group())
                if not self.accept(";"):
                    break
            if self.accept("SELECT"):
                sname = self.ident()
                self.take(":")
                srep = self.representation()
                cases = []
                while self.accept("CASE"):
                    labels = [self.expression()]
                    while self.accept(","):
                        labels.append(self.expression())
                    self.take("->")
                    vf = []
                    while self.tok.kind == "kw" and self.tok.text in ("CONST", "VAR"):
                        vf.extend(self.field_group())
                        if not self.accept(";"):
                            break
                    while self.accept(";"):
                        pass
                    cases.append((labels, vf))
                self.take("ENDSELECT")
                self.accept(";")
                sel = N("variant", line, name=sname, rep=srep, cases=cases)
            self.take("ENDRECORD")
            return N("record", line, fields=fields, sel=sel, typename=None)
        if w in ("FILE", "POINTER", "SET"):
            self.take()
            self.take("(")
            r = self.representation()
            self.take(")")
            return N(w.lower(), line, base=r, typename=None)
        raise ParseError(f"line {line}: expected a representation, found {t.text}")

    def field_group(self):
        line = self.tok.line
        cls = self.take().text
        out = []
        while True:
            names = self.names()
            self.take(":")
            rep = self.representation()
            out.append(N("field", line, cls=cls, names=names, rep=rep))
            if self.at(";") and self.peek().kind == "id":
                self.take(";")
                continue
            return out

    # rules 82-84
    def qualifier(self):
        if not self.at("["):
            return None
        line = self.take("[").line
        lo = self.expression()
        self.take("..")
        hi = self.expression()
        self.take("]")
        q = N("qual", line, lo=lo, hi=hi, scale=None, prec=None)
        if self.accept("SCALE"):
            q.scale = self.expression()
        elif self.accept("PRECISION"):
            q.prec = self.expression()
        return q

    def type_def(self):
        return self.concrete1()

    # ---- statements: rules 19-33 ------------------------------------------
    def statements(self, labelled=False):
        out = []
        while True:
            while self.accept(";"):
                pass
            t = self.tok
            if t.kind == "eof" or (t.kind == "kw" and t.text in STOP):
                return out
            label = None
            if labelled and t.kind == "id" and self.peek().kind == "op" and self.peek().text == ":":
                label = self.ident()
                self.take(":")
            s = self.statement()
            s.label = label
            out.append(s)
            if not self.at(";"):
                return out

    def statement(self):
        t = self.tok
        line = t.line
        w = t.text if t.kind == "kw" else None
        if w == "ASSERT":
            self.take()
            return N("assert", line, e=self.expression())
        if w == "GOTO":
            self.take()
            return N("goto", line, name=self.ident())
        if w == "EXIT":
            self.take()
            return N("exit", line, name=self.ident())
        if w == "RETURN":
            self.take()
            e = None
            if not (self.at(";") or (self.tok.kind == "kw" and self.tok.text in STOP) or
                    self.tok.kind == "eof"):
                e = self.expression()
            return N("return", line, e=e)
        if w == "TERMINATE_PROCESS":
            self.take()
            return N("terminate", line)
        if w == "PROPAGATE_EXCEPTION":
            self.take()
            name = None
            if self.tok.kind == "id":
                name = self.ident()
            return N("propagate", line, name=name)
        if w == "IF":
            self.take()
            arms = [(self.expression(), None)]
            self.take("THEN")
            arms[0] = (arms[0][0], self.statements())
            while self.accept("ELSIF"):
                c = self.expression()
                self.take("THEN")
                arms.append((c, self.statements()))
            other = None
            if self.accept("ELSE"):
                other = self.statements()
            self.take("ENDIF")
            return N("if", line, arms=arms, other=other)
        if w == "SELECT":
            self.take()
            e = self.expression()
            cases, other = [], None
            while self.accept("CASE"):
                labels = [self.expression()]
                while self.accept(","):
                    labels.append(self.expression())
                self.take("->")
                cases.append((labels, self.statements()))
            if self.accept("ELSE"):
                other = self.statements()
            self.take("ENDSELECT")
            return N("select", line, e=e, cases=cases, other=other)
        if w == "WHILE":
            self.take()
            c = self.expression()
            self.take("DO")
            body = self.statements()
            self.take("ENDWHILE")
            return N("while", line, cond=c, body=body)
        if w == "FOR":
            self.take()
            name = self.ident()
            self.take(":")
            rep = self.representation()
            self.take("DO")
            body = self.statements()
            self.take("ENDFOR")
            return N("for", line, name=name, rep=rep, body=body)
        if w == "LOOP":
            self.take()
            name = self.ident()
            body = self.statements()
            self.take("ENDLOOP")
            end = self.ident()
            if end != name:
                raise ParseError(f"line {line}: LOOP {name} ends as {end}")
            return N("loop", line, name=name, body=body)
        if w in ("BEGIN", "SIMULATED_TIME"):
            sim = self.accept("SIMULATED_TIME")
            self.take("BEGIN")
            b = self.block()
            self.take("END")
            return N("begin", line, block=b, sim=sim)
        d = self.designator()
        if self.accept(":="):
            return N("assign", line, target=d, e=self.expression())
        if d.kind != "call":
            raise ParseError(f"line {line}: expected a statement")
        return N("callst", line, call=d)

    # ---- expressions: rules 34-54 -----------------------------------------
    def opword(self):
        t = self.tok
        return t.text if t.kind in ("op", "kw") else None

    def expression(self):
        line = self.tok.line
        a = self.simple()
        op = self.opword()
        if op in REL:
            self.take()
            b = self.simple()
            a = N("bin", line, op=op, a=a, b=b)
        return a

    def simple(self):
        line = self.tok.line
        if self.at("-"):
            self.take()
            return N("neg", line, a=self.term())
        a = self.term()
        op = self.opword()
        if op in NONASSOC_ADD:
            self.take()
            a = N("bin", line, op=op, a=a, b=self.term(), paren=False)
            nxt = self.opword()
            if nxt in NONASSOC_ADD or nxt in ASSOC_ADD:
                raise ParseError(f"line {line}: {op} is not associative: parentheses are needed")
            return a
        while op in ASSOC_ADD:
            self.take()
            a = N("bin", line, op=op, a=a, b=self.term())
            op = self.opword()
            if op in NONASSOC_ADD:
                raise ParseError(f"line {line}: {op} after {a.op}: parentheses are needed")
        return a

    def term(self):
        line = self.tok.line
        a = self.factor()
        op = self.opword()
        if op in NONASSOC_MUL:
            self.take()
            a = N("bin", line, op=op, a=a, b=self.factor())
            nxt = self.opword()
            if nxt in NONASSOC_MUL or nxt in ASSOC_MUL:
                raise ParseError(f"line {line}: {op} is not associative: parentheses are needed")
            return a
        while op in ASSOC_MUL:
            self.take()
            a = N("bin", line, op=op, a=a, b=self.factor())
            op = self.opword()
            if op in NONASSOC_MUL:
                raise ParseError(f"line {line}: {op} after {a.op}: parentheses are needed")
        return a

    def factor(self):
        t = self.tok
        line = t.line
        if self.at("NOT"):
            self.take()
            return N("not", line, a=self.factor())
        if self.at("("):
            self.take()
            e = self.expression()
            self.take(")")
            return N("paren", line, a=e)
        if t.kind in ("int", "fixed", "float", "char", "str"):
            self.take()
            return N("lit", line, tok=t, qual=None)
        if self.at("NIL"):
            self.take()
            return N("nil", line, qual=None)
        if t.kind == "id":
            nxt = self.peek()
            # [Id*] Literal: a literal qualified by the name of its type
            if nxt.kind in ("int", "fixed", "float", "char", "str") or \
                    (nxt.kind == "kw" and nxt.text == "NIL") or \
                    (nxt.kind == "id" and not (self.peek(2).kind == "op" and self.peek(2).text in ("(", "[", ".", "^", ":=")) and
                     not (self.peek(2).kind == "op" and self.peek(2).text == ":")):
                self.take()
                lt = self.take()
                if lt.kind == "kw":
                    return N("nil", line, qual=t.text)
                if lt.kind == "id":
                    return N("name", line, name=lt.text, qual=t.text)
                return N("lit", line, tok=lt, qual=t.text)
            return self.designator()
        raise ParseError(f"line {line}: expected an operand, found {t.text or 'end of text'}")

    # rules 41-43
    def designator(self):
        line = self.tok.line
        name = self.ident()
        if self.at("("):
            self.take()
            args = []
            while not self.at(")"):
                args.append(self.expression())
                if not self.accept(","):
                    break
            self.take(")")
            d = N("call", line, name=name, args=args)
        else:
            d = N("name", line, name=name, qual=None)
        while True:
            if self.at("."):
                self.take()
                d = N("field", line, a=d, name=self.ident())
            elif self.at("["):
                self.take()
                ix = [self.expression()]
                while self.accept(","):
                    ix.append(self.expression())
                self.take("]")
                d = N("index", line, a=d, ix=ix)
            elif self.at("^"):
                self.take()
                d = N("deref", line, a=d)
            else:
                return d


def parse(src):
    return Parser(lex(src)).program()
