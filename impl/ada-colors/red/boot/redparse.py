"""Parser for RED, following the flow diagrams of the Reference Manual.

Diagram numbers are given in the comments. The result is a tree of N nodes.
"""

from redlex import tokenize


class N:
    def __init__(self, kind, line, **kw):
        self.kind = kind
        self.line = line
        self.__dict__.update(kw)

    def __repr__(self):
        fields = {k: v for k, v in self.__dict__.items() if k not in ("kind", "line")}
        return f"{self.kind}{fields}"


class ParseError(Exception):
    pass


COMPOUND_START = {"IF", "CASE", "FOR", "WHILE", "BEGIN", "GUARD", "WAIT", "REGION"}
BODY_END = {"END", "ELSE", "ELSEIF", "WHEN", "BY"}

# 5.2: ALGOL 60 precedence, highest first
PREC = [
    ["OR", "XOR"],
    ["AND"],
    None,                         # prefix NOT
    ["=", "/=", "<", "<=", ">", ">=", "IN"],
    ["+", "-"],
    ["*", "/", "MOD", "DIV", "&"],
    ["**"],
]


class Parser:
    def __init__(self, text, filename="<input>"):
        self.toks = tokenize(text)
        self.i = 0
        self.filename = filename

    # -- token helpers --------------------------------------------------
    @property
    def tok(self):
        return self.toks[self.i]

    def peek(self, k=1):
        return self.toks[min(self.i + k, len(self.toks) - 1)]

    def error(self, msg):
        t = self.tok
        raise ParseError(f"{self.filename}:{t.line}: {msg} (at {t.value!r})")

    def at(self, kind, value=None):
        t = self.tok
        return t.kind == kind and (value is None or t.value == value)

    def at_kw(self, *words):
        return self.tok.kind == "KW" and self.tok.value in words

    def at_op(self, *ops):
        return self.tok.kind == "OP" and self.tok.value in ops

    def next(self):
        t = self.tok
        self.i += 1
        return t

    def expect_kw(self, word):
        if not self.at_kw(word):
            self.error(f"expected {word}")
        return self.next()

    def expect_op(self, op):
        if not self.at_op(op):
            self.error(f"expected {op!r}")
        return self.next()

    def expect_id(self):
        if self.tok.kind != "ID":
            self.error("expected an identifier")
        return self.next().value

    def accept_op(self, op):
        if self.at_op(op):
            self.next()
            return True
        return False

    def accept_kw(self, word):
        if self.at_kw(word):
            self.next()
            return True
        return False

    # -- program (3.1) ----------------------------------------------------
    def program(self):
        units = []
        while not self.at("EOF"):
            if self.at_kw("GENERIC"):
                units.append(self.generic_decl())
            else:
                units.append(self.capsule_decl())
            self.expect_op(";")
        return units

    # -- body (3.2, diagram 2) -------------------------------------------
    def body(self):
        elems = []
        while not (self.at_kw(*BODY_END) or self.at("EOF")):
            elems.append(self.body_element())
        return elems

    def body_element(self):
        t = self.tok
        if t.kind == "KW":
            w = t.value
            if w in ("VAR", "CONST", "ABBREV", "TYPE", "PROC", "FUNC", "ABNORMAL",
                     "CAPSULE", "EXPOSE", "EXCEPTION", "TASK", "GENERIC"):
                d = self.declaration()
                self.expect_op(";")
                return d
            if w == "ASSERT":
                self.next()
                e = self.expr()
                self.expect_op(";")
                return N("assert", t.line, cond=e)
        s = self.statement()
        self.expect_op(";")
        return s

    # -- declarations (3.3, diagram 4) -----------------------------------
    def declaration(self):
        w = self.tok.value
        if w == "VAR":
            return self.var_decl()
        if w == "CONST":
            return self.const_decl()
        if w == "ABBREV":
            return self.abbrev_decl()
        if w == "TYPE":
            return self.type_decl()
        if w in ("PROC", "FUNC", "ABNORMAL"):
            return self.subprogram_decl()
        if w == "CAPSULE":
            return self.capsule_decl()
        if w == "EXPOSE":
            return self.expose_decl()
        if w == "EXCEPTION":
            line = self.next().line
            names = [self.expect_id()]
            while self.accept_op(","):
                names.append(self.expect_id())
            return N("exception", line, names=names)
        if w == "TASK":
            return self.task_decl()
        if w == "GENERIC":
            return self.generic_decl()
        self.error("expected a declaration")

    def id_list(self):
        names = [self.expect_id()]
        while self.accept_op(","):
            names.append(self.expect_id())
        return names

    def var_decl(self):                      # diagram 15
        line = self.expect_kw("VAR").line
        names = self.id_list()
        self.expect_op(":")
        st = self.subtype()
        init = self.expr() if self.accept_op(":=") else None
        return N("var", line, names=names, subtype=st, init=init)

    def const_decl(self):                    # diagram 16
        line = self.expect_kw("CONST").line
        names = self.id_list()
        st = self.subtype() if self.accept_op(":") else None
        self.expect_op(":=")
        return N("const", line, names=names, subtype=st, init=self.expr())

    def abbrev_decl(self):                   # diagram 17
        line = self.expect_kw("ABBREV").line
        name = self.expect_id()
        tt = self.formal_tt() if self.at_op("[") else None
        params = self.formal_params() if self.at_op("(") else []
        self.expect_op(":")
        return N("abbrev", line, name=name, tt=tt, params=params, subtype=self.subtype())

    def type_decl(self):                     # diagrams 22, 23
        line = self.expect_kw("TYPE").line
        name = self.expect_id()
        tt = self.formal_tt() if self.at_op("[") else None
        params = self.formal_params() if self.at_op("(") else []
        self.expect_op(":")
        if self.at("ID", "PTR"):
            self.next()
            params2 = self.formal_params() if self.at_op("(") else []
            st = self.subtype()
            return N("ptrtype", line, name=name, tt=tt, params=params, params2=params2, subtype=st)
        return N("newtype", line, name=name, tt=tt, params=params, subtype=self.subtype())

    def formal_params(self):                 # diagram 52
        self.expect_op("(")
        groups = []
        while True:
            mode = "CONST"
            if self.at_kw("CONST", "READONLY", "VAR", "OUT"):
                mode = self.next().value
            names = [self.expect_id()]
            while self.at_op(",") and self.peek().kind == "ID" and self.peek(2).kind == "OP" \
                    and self.peek(2).value in (",", ":"):
                self.next()
                names.append(self.expect_id())
            self.expect_op(":")
            st = self.subtype()
            for nm in names:
                groups.append(N("param", self.tok.line, name=nm, mode=mode, subtype=st))
            if not self.accept_op(","):
                break
        self.expect_op(")")
        return groups

    def formal_tt(self):                     # diagram 66
        self.expect_op("[")
        items = []
        while True:
            items.append(self.subtype())
            if not self.accept_op(","):
                break
        self.expect_op("]")
        return items

    def imports(self):                       # diagram 9
        if not self.accept_kw("IMPORTS"):
            return None
        if self.accept_kw("ALL"):
            return "ALL"
        items = []
        while True:
            ro = self.accept_kw("READONLY")
            items.append((self.expect_id(), ro))
            if not self.accept_op(","):
                break
        return items

    def definable_name(self):
        if self.tok.kind == "ID":
            return self.next().value
        if self.tok.kind == "OP" and self.tok.value in (
                "+", "-", "*", "/", "**", "&", "=", "<", "<=", ">", ">=", "/=",
                "DIV", "MOD", "AND", "OR", "XOR", "NOT", "IN", ":=", "#"):
            return self.next().value
        self.error("expected a name")

    def subprogram_decl(self):               # diagrams 48, 50
        line = self.tok.line
        abnormal = self.accept_kw("ABNORMAL")
        kind = self.next().value
        if kind not in ("PROC", "FUNC"):
            self.error("expected PROC or FUNC")
        name = self.definable_name()
        tt = self.formal_tt() if self.at_op("[") else None
        params = self.formal_params() if self.at_op("(") else []
        result = None
        if kind == "FUNC":
            self.expect_op("=>")
            result = self.subtype()
        imports = self.imports()
        self.expect_op(";")
        body = self.body()
        self.expect_kw("END")
        self.expect_kw(kind)
        end = self.definable_name()
        if end != name:
            self.error(f"END {kind} {end} does not match {name}")
        return N("proc" if kind == "PROC" else "func", line, name=name, tt=tt,
                 params=params, result=result, imports=imports, body=body,
                 abnormal=abnormal)

    def task_decl(self):                     # diagram 61
        line = self.expect_kw("TASK").line
        name = self.expect_id()
        tt = self.formal_tt() if self.at_op("[") else None
        params = self.formal_params() if self.at_op("(") else []
        imports = self.imports()
        self.expect_op(";")
        body = self.body()
        self.expect_kw("END")
        self.expect_kw("TASK")
        if self.expect_id() != name:
            self.error("END TASK name does not match")
        return N("task", line, name=name, tt=tt, params=params, imports=imports, body=body)

    def visible_list(self):                  # diagram 56
        if self.accept_kw("ALL"):
            return "ALL"
        if self.accept_kw("NONE"):
            return []
        items = []
        while True:
            ro = self.accept_kw("READONLY")
            items.append((self.definable_name(), ro))
            if not self.accept_op(","):
                break
        return items

    def capsule_decl(self):                  # diagram 54
        line = self.expect_kw("CAPSULE").line
        name = self.expect_id()
        tt = self.formal_tt() if self.at_op("[") else None
        params = self.formal_params() if self.at_op("(") else []
        imports = self.imports()
        self.expect_kw("EXPORTS")
        exports = self.visible_list()
        self.expect_op(";")
        body = self.body()
        self.expect_kw("END")
        self.expect_kw("CAPSULE")
        if self.expect_id() != name:
            self.error("END CAPSULE name does not match")
        return N("capsule", line, name=name, tt=tt, params=params, imports=imports,
                 exports=exports, body=body)

    def expose_decl(self):                   # diagram 55
        line = self.expect_kw("EXPOSE").line
        vis = self.visible_list()
        self.expect_kw("FROM")
        new = self.accept_kw("NEW")
        external = self.accept_kw("EXTERNAL")
        name = self.expect_id()
        tt = self.actual_tt() if self.at_op("[") else None
        args = self.actual_params() if self.at_op("(") else []
        renaming = []
        if self.accept_kw("RENAMING"):
            while True:
                a = self.definable_name()
                self.expect_kw("TO")
                renaming.append((a, self.definable_name()))
                if not self.accept_op(","):
                    break
        return N("expose", line, visible=vis, new=new, external=external, name=name,
                 tt=tt, args=args, renaming=renaming)

    def generic_decl(self):                  # diagram 69
        line = self.expect_kw("GENERIC").line
        gparams = []
        while True:
            names = self.id_list()
            self.expect_op(":")
            gparams.append((names, self.generic_constraint()))
            if not self.accept_op(","):
                break
        needs = []
        if self.accept_kw("NEEDS"):
            while True:
                needs.append(self.needs_item())
                if not self.accept_op(","):
                    break
        pattern = self.declaration()
        return N("generic", line, gparams=gparams, needs=needs, pattern=pattern)

    def generic_constraint(self):            # 11.3.1 - 11.3.4
        line = self.tok.line
        if self.accept_kw("TYPE"):
            allowed = None
            if self.accept_op("("):
                allowed = self.id_list()
                self.expect_op(")")
            return N("gc_type", line, allowed=allowed)
        if self.accept_kw("SUBTYPE"):
            allowed = None
            if self.accept_op("("):
                allowed = self.id_list()
                self.expect_op(")")
            return N("gc_subtype", line, allowed=allowed)
        if self.at_kw("PROC", "FUNC", "TASK"):
            kind = self.next().value
            ptypes = []
            if self.accept_op("("):
                while True:
                    ptypes.append(self.subtype())
                    if not self.accept_op(","):
                        break
                self.expect_op(")")
            result = None
            if kind == "FUNC":
                self.expect_op("=>")
                result = self.subtype()
            return N("gc_op", line, op=kind, ptypes=ptypes, result=result)
        return N("gc_value", line, subtype=self.subtype())

    def needs_item(self):                    # diagram 70
        line = self.tok.line
        name = self.definable_name()
        ptypes = []
        if self.accept_op("("):
            while True:
                ptypes.append(self.subtype())
                if not self.accept_op(","):
                    break
            self.expect_op(")")
        result = self.subtype() if self.accept_op("=>") else None
        return N("need", line, name=name, ptypes=ptypes, result=result)

    def actual_params(self):                 # diagram 53
        self.expect_op("(")
        args = []
        if not self.at_op(")"):
            while True:
                args.append(self.expr())
                if not self.accept_op(","):
                    break
        self.expect_op(")")
        return args

    def actual_tt(self):                     # diagram 67: types, subtypes, values
        self.expect_op("[")
        items = []
        while True:
            items.append(self.tt_item())
            if not self.accept_op(","):
                break
        self.expect_op("]")
        return items

    def tt_item(self):
        # a property is a type, a subtype or a manifest expression
        if self.tok.kind == "ID" and self.tok.value in BUILTIN_TYPE_WORDS:
            return self.subtype()
        return N("tt_expr_or_type", self.tok.line, expr=self.expr())

    # -- types and subtypes (diagrams 10, 12) -------------------------------
    def subtype(self):
        t = self.tok
        line = t.line
        if t.kind == "KW" and t.value == "SUBTYPE":
            self.next()
            self.expect_op("(")
            e = self.expr()
            self.expect_op(")")
            return N("st_of", line, expr=e)
        if t.kind != "ID":
            self.error("expected a type or subtype")
        w = t.value
        if w == "ARRAY":
            self.next()
            idx = [self.subtype()]
            while self.accept_op(","):
                idx.append(self.subtype())
            self.expect_kw("OF")
            return N("st_array", line, index=idx, elem=self.subtype())
        if w in ("RECORD", "UNION"):
            self.next()
            self.expect_op("[")
            comps = []
            while True:
                names = self.id_list()
                self.expect_op(":")
                st = self.subtype()
                for nm in names:
                    comps.append((nm, st))
                if not self.accept_op(","):
                    break
            self.expect_op("]")
            tag = None
            if w == "UNION" and self.at_op("("):
                self.next()
                tag = self.expr()
                self.expect_op(")")
            return N("st_record" if w == "RECORD" else "st_union", line, comps=comps, tag=tag)
        if w == "ENUM":
            self.next()
            self.expect_op("[")
            lits = []
            while True:
                if self.tok.kind != "ENUM":
                    self.error("expected an enumeration literal")
                lits.append(self.next().value)
                if not self.accept_op(","):
                    break
            self.expect_op("]")
            rng = self.range_constraint() if self.at_op("(") else None
            return N("st_enum", line, lits=lits, range=rng)
        if w in ("STRING", "SET", "MAILBOX", "FILE"):
            self.next()
            self.expect_op("[")
            comp = self.subtype()
            self.expect_op("]")
            cons = self.actual_params() if self.at_op("(") else None
            return N("st_" + w.lower(), line, comp=comp, cons=cons)
        if w == "INT":
            self.next()
            rng = self.range_constraint() if self.at_op("(") else None
            return N("st_int", line, range=rng)
        if w == "FLOAT":
            self.next()
            prec = rng = None
            if self.accept_op("("):
                prec = self.expr()
                if self.accept_op(","):
                    lo = self.expr()
                    self.expect_op("..")
                    rng = (lo, self.expr())
                self.expect_op(")")
            return N("st_float", line, prec=prec, range=rng)
        self.next()
        tt = self.actual_tt() if self.at_op("[") else None
        args = self.actual_params() if self.at_op("(") else None
        return N("st_name", line, name=w, tt=tt, args=args)

    def range_constraint(self):
        self.expect_op("(")
        lo = self.expr()
        self.expect_op("..")
        hi = self.expr()
        self.expect_op(")")
        return (lo, hi)

    # -- statements (chapter 6) ---------------------------------------------
    def statement(self):
        t = self.tok
        # goto labels (diagram 36): identifier ':' before the statement
        labels = []
        while t.kind == "ID" and self.peek().kind == "OP" and self.peek().value == ":" \
                and not (self.peek(2).kind == "OP" and self.peek(2).value == "="):
            labels.append(self.next().value)
            self.next()
            t = self.tok
        match = None
        if t.kind == "ID" and self.peek().kind == "KW" and self.peek().value in COMPOUND_START:
            match = self.next().value
        s = self.unlabeled_statement()
        if match:
            if s.kind not in ("if", "case", "repeat", "begin", "guard", "wait", "region"):
                self.error("a matching identifier must bracket a compound statement")
            end = self.expect_id()
            if end != match:
                self.error(f"matching identifier {end} does not match {match}")
            s.match = match
        if labels:
            s.labels = labels
        return s

    def unlabeled_statement(self):
        t = self.tok
        line = t.line
        if t.kind == "KW":
            w = t.value
            if w == "IF":
                return self.if_stmt()
            if w == "CASE":
                return self.case_stmt()
            if w in ("FOR", "WHILE"):
                return self.repeat_stmt()
            if w == "BEGIN":
                self.next()
                b = self.body()
                self.expect_kw("END")
                return N("begin", line, body=b)
            if w == "GUARD":
                return self.guard_stmt()
            if w == "WAIT":
                return self.wait_stmt()
            if w == "REGION":
                self.next()
                v = self.expr()
                self.expect_kw("DO")
                b = self.body()
                self.expect_kw("END")
                self.expect_kw("REGION")
                return N("region", line, lock=v, body=b)
            if w == "EXIT":
                self.next()
                return N("exit", line, target=self.expect_id())
            if w == "RETURN":
                self.next()
                e = None if self.at_op(";") else self.expr()
                return N("return", line, value=e)
            if w == "GOTO":
                self.next()
                return N("goto", line, target=self.expect_id())
            if w == "RAISE":
                self.next()
                return N("raise", line, name=self.expect_id())
            if w == "RERAISE":
                self.next()
                return N("reraise", line)
            if w == "ALLOC":
                self.next()
                v = self.postfix()
                if not self.at("ID", "PTR"):
                    self.error("expected PTR")
                self.next()
                args = self.actual_params() if self.at_op("(") else []
                init = self.expr() if self.accept_op(":=") else None
                return N("alloc", line, var=v, args=args, init=init)
            if w == "CREATE":
                self.next()
                name = self.expect_id()
                tt = self.actual_tt() if self.at_op("[") else None
                args = self.actual_params() if self.at_op("(") else []
                self.expect_kw("NAMED")
                return N("create", line, task=name, tt=tt, args=args, actvar=self.postfix())
        target = self.postfix()
        if self.accept_op(":="):
            return N("assign", line, target=target, value=self.expr())
        return N("call", line, call=target)

    def if_stmt(self):                       # diagram 42
        line = self.expect_kw("IF").line
        arms = []
        cond = self.expr()
        self.expect_kw("THEN")
        arms.append((cond, self.body()))
        els = None
        while True:
            if self.accept_kw("ELSEIF"):
                cond = self.expr()
                self.expect_kw("THEN")
                arms.append((cond, self.body()))
            elif self.accept_kw("ELSE"):
                els = self.body()
            else:
                break
        self.expect_kw("END")
        self.expect_kw("IF")
        return N("if", line, arms=arms, els=els)

    def case_stmt(self):                     # diagram 43
        line = self.expect_kw("CASE").line
        sel = self.expr()
        arms = []
        els = None
        while self.accept_kw("WHEN"):
            labels = []
            while True:
                lo = self.expr()
                if self.accept_op(".."):
                    labels.append(("range", lo, self.expr()))
                else:
                    labels.append(("value", lo))
                if not self.accept_op(","):
                    break
            self.expect_op("=>")
            arms.append((labels, self.body()))
        if self.accept_kw("ELSE"):
            self.expect_op("=>")
            els = self.body()
        self.expect_kw("END")
        self.expect_kw("CASE")
        return N("case", line, sel=sel, arms=arms, els=els)

    def repeat_stmt(self):                   # diagram 44
        line = self.tok.line
        if self.accept_kw("FOR"):
            var = self.expect_id()
            self.expect_op(":")
            rev = self.accept_kw("REVERSE")
            st = self.subtype()
            head = ("for", var, rev, st)
        else:
            self.expect_kw("WHILE")
            head = ("while", self.expr())
        self.expect_kw("REPEAT")
        b = self.body()
        self.expect_kw("END")
        self.expect_kw("REPEAT")
        return N("repeat", line, head=head, body=b)

    def guard_stmt(self):                    # diagram 58
        line = self.expect_kw("GUARD").line
        b = self.body()
        self.expect_kw("BY")
        handlers = []
        els = None
        while self.accept_kw("WHEN"):
            names = self.id_list()
            self.expect_op("=>")
            handlers.append((names, self.body()))
        if self.accept_kw("ELSE"):
            self.expect_op("=>")
            els = self.body()
        self.expect_kw("END")
        self.expect_kw("GUARD")
        return N("guard", line, body=b, handlers=handlers, els=els)

    def wait_stmt(self):                     # diagrams 63, 64
        line = self.expect_kw("WAIT").line
        arms = []
        while self.accept_kw("WHEN"):
            invs = []
            while True:
                invs.append(self.postfix())
                if not self.accept_op(","):
                    break
            self.expect_op("=>")
            arms.append((invs, self.body()))
        self.expect_kw("END")
        self.expect_kw("WAIT")
        return N("wait", line, arms=arms)

    # -- expressions (chapter 5) ----------------------------------------------
    def expr(self):
        return self.binary(0)

    def binary(self, level):
        if level == len(PREC):
            return self.prefix()
        ops = PREC[level]
        if ops is None:                       # prefix NOT sits between AND and relations
            if self.at_op("NOT"):
                line = self.next().line
                return N("unop", line, op="NOT", arg=self.binary(level))
            return self.binary(level + 1)
        left = self.binary(level + 1)
        while self.tok.kind == "OP" and self.tok.value in ops:
            op = self.next()
            right = self.binary(level + 1)
            left = N("binop", op.line, op=op.value, left=left, right=right)
            if level == 3:                    # relations do not chain
                break
        return left

    def prefix(self):
        if self.at_op("+", "-"):
            op = self.next()
            return N("unop", op.line, op=op.value, arg=self.prefix())
        return self.postfix()

    def postfix(self):
        p = self.primary()
        while True:
            line = self.tok.line
            if self.at_op("("):
                self.next()
                args = []
                if not self.at_op(")"):
                    while True:
                        lo = self.expr()
                        if self.accept_op(".."):
                            args.append(N("range", line, lo=lo, hi=self.expr()))
                        else:
                            args.append(lo)
                        if not self.accept_op(","):
                            break
                self.expect_op(")")
                p = N("apply", line, fn=p, args=args)
            elif self.at_op(".") and self.peek().kind in ("ID", "KW"):
                self.next()
                name = self.next().value
                p = N("select", line, obj=p, name=name)
            elif self.at_op("[") and p.kind == "name":
                p = N("ttapply", line, fn=p, tt=self.actual_tt())
            elif self.at_op("#"):
                self.next()
                p = N("resolve", line, expr=p, subtype=self.subtype())
            else:
                return p

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
        if t.kind == "ENUM":
            self.next()
            return N("enum", line, value=t.value)
        if t.kind == "ID":
            self.next()
            if t.value in ("TRUE", "FALSE"):
                return N("bool", line, value=t.value == "TRUE")
            if t.value == "NIL":
                return N("nil", line)
            return N("name", line, name=t.value)
        if t.kind == "KW" and t.value in ("TYPE", "SUBTYPE"):
            # TYPE(e) / SUBTYPE(e) inquiry used as a primary for attributes
            self.next()
            self.expect_op("(")
            e = self.expr()
            self.expect_op(")")
            return N("st_of_expr", line, expr=e)
        if self.at_op("("):
            self.next()
            e = self.expr()
            self.expect_op(")")
            return N("paren", line, expr=e)
        if self.at_op("["):                   # constructors, diagrams 31-34
            self.next()
            items = []
            if not self.at_op("]"):
                while True:
                    items.append(self.constructor_item())
                    if not self.accept_op(","):
                        break
            self.expect_op("]")
            return N("cons", line, items=items)
        self.error("expected an expression")

    def constructor_item(self):
        line = self.tok.line
        first = self.expr()
        keys = None
        if self.at_op(".."):
            self.next()
            keys = [("range", first, self.expr())]
        elif self.at_op(":") or self.at_op(","):
            keys = [("value", first)]
        if keys and self.at_op(","):
            # look ahead: a list of keys followed by ':'
            save = self.i
            more = []
            ok = False
            while self.accept_op(","):
                e = self.expr()
                if self.accept_op(".."):
                    more.append(("range", e, self.expr()))
                else:
                    more.append(("value", e))
                if self.at_op(":"):
                    ok = True
                    break
                if not self.at_op(","):
                    break
            if ok:
                keys += more
            else:
                self.i = save
        if keys and self.accept_op(":"):
            return N("citem", line, keys=keys, value=self.expr())
        if keys and keys[0][0] == "range":
            self.error("a range needs a value")
        return N("citem", line, keys=None, value=first)


BUILTIN_TYPE_WORDS = {"INT", "BOOL", "FLOAT", "ENUM", "RECORD", "UNION", "ARRAY",
                      "STRING", "SET", "MAILBOX", "FILE", "ASCII", "ACT", "DATA_LOCK",
                      "LATCH"}


def parse(text, filename="<input>"):
    return Parser(text, filename).program()
