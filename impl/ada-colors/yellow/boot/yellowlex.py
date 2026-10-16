"""Lexical rules of YELLOW (SRI International, 1978), Language Report
Sections III and IV (DTIC ADB950587, pp.992-998).

Identifiers are case sensitive and the reserved words are upper case
(Appendix A, p.1081). A comment is "(*" ... "*)" on one line. Numbers may
carry a base word (BASE2 BASE8 BASE10 BASE16) and a sign; a fixed-point
literal ends its mantissa with P. A character literal is one character, or
the mnemonic of a character, between apostrophes; a string is a sequence of
such characters between quotation marks, where a one-character literal may
drop its apostrophes, and strings separated only by blanks are joined.

Two printed symbols have no ASCII spelling: the not-equal sign is written #
(as in Modula, which YELLOW follows) and the dereferencing up-arrow is ^.
"""

RESERVED = set("""
ALIGNMENT ALPHABET AND ARRAY AS ASSERT AT BASE2 BASE8 BASE10 BASE16 BEGIN CASE
CONST DIMENSIONS DIV DO ELSE ELSIF END ENDEXCEPTION ENDFOR ENDFUNCTION ENDIF
ENDLOOP ENDMODULE ENDMONITOR ENDPROCEDURE ENDPROCESS ENDRECORD ENDSELECT
ENDTEMPLATE ENDWHILE EXCEPTION EXIT EXPORT EXTENDS FILE FOR FUNCTION GOTO IF
IMPORT IN INLINE INSTANCE INSTANCES LABEL LOOP MOD MODULE MONITOR NIL NOT OF
OPAQUE OR ORDERED OUT PACKED POINTER PRECISION PRIORITY PROCEDURE PROCESS
PROPAGATE_EXCEPTION READONLY RECORD REPLACES REPRESENTATION RETURN RETURNS
SCALE SELECT SET SIMULATED_TIME SIZE SPACE TEMPLATE TERMINATE_PROCESS THEN
TRANSPARENT TYPE UNORDERED VAR WHILE XOR""".split())

# longest first
OPS = ["<<<=", ">>>=", "###", "===", "<<<", ">>>", "<<=", ">>=", "***", "///",
       "---", "+++", ":=", "->", "..", "<=", ">=", "##", "==", "<<", ">>", "**",
       "//", "--", "++", "#", "+", "-", "*", "/", "=", "<", ">", "(", ")", "[",
       "]", ",", ";", ":", ".", "^"]

BASES = {"BASE2": 2, "BASE8": 8, "BASE10": 10, "BASE16": 16}


class LexError(Exception):
    pass


class Tok:
    __slots__ = ("kind", "text", "line", "val")

    def __init__(self, kind, text, line, val=None):
        self.kind = kind      # id kw op int fixed float char str eof
        self.text = text
        self.line = line
        self.val = val

    def __repr__(self):
        return f"{self.kind}:{self.text}@{self.line}"


# a token after which a sign belongs to the operator, not to a literal
def _ends_operand(t):
    if t is None:
        return False
    if t.kind in ("id", "int", "fixed", "float", "char", "str"):
        return True
    if t.kind == "op" and t.text in (")", "]", "^"):
        return True
    if t.kind == "kw" and t.text in ("NIL",):
        return True
    return False


def _digit_val(c):
    if c.isdigit():
        return ord(c) - 48
    if "A" <= c <= "F":
        return ord(c) - 55
    return 99


def lex(src):
    toks = []
    i, n, line = 0, len(src), 1
    base = None
    while i < n:
        c = src[i]
        if c == "\n":
            line += 1
            i += 1
            continue
        if c in " \t\r\f":
            i += 1
            continue
        if src.startswith("(*", i):
            j = src.find("*)", i + 2)
            nl = src.find("\n", i)
            if j < 0 or (0 <= nl < j):
                raise LexError(f"line {line}: a comment must close on its line")
            i = j + 2
            continue
        prev = toks[-1] if toks else None
        # numbers, optionally signed when no operand precedes
        sign = ""
        k = i
        if c in "+-" and not _ends_operand(prev) and i + 1 < n and \
                (src[i + 1].isdigit() or (base == 16 and _digit_val(src[i + 1]) < 16)):
            sign = c
            k = i + 1
        if k < n and (src[k].isdigit() or (base is not None and k > i - 1 and
                                           _digit_val(src[k]) < (base or 10))):
            b = base or 10
            base = None
            j = k
            while j < n and (src[j].isdigit() or (b == 16 and "A" <= src[j] <= "F")):
                j += 1
            mant = src[k:j]
            frac = None
            if j < n and src[j] == "." and not src.startswith("..", j):
                j2 = j + 1
                while j2 < n and (src[j2].isdigit() or (b == 16 and "A" <= src[j2] <= "F")):
                    j2 += 1
                frac = src[j + 1:j2]
                j = j2
            if j < n and src[j] == "P":                     # fixed-point literal
                j += 1
                esign, e0 = 1, j
                if j < n and src[j] in "+-" and j + 1 < n and src[j + 1].isdigit():
                    esign = -1 if src[j] == "-" else 1
                    j += 1
                while j < n and src[j].isdigit():
                    j += 1
                exp = int(src[e0:j].lstrip("+-") or "0") * esign
                v = 0.0
                for ch in mant:
                    v = v * b + _digit_val(ch)
                if frac:
                    s = 1.0
                    for ch in frac:
                        s /= b
                        v += _digit_val(ch) * s
                v *= float(b) ** exp
                if sign == "-":
                    v = -v
                toks.append(Tok("fixed", src[i:j], line, v))
                i = j
                continue
            if frac is not None:
                if b != 10:
                    raise LexError(f"line {line}: a floating literal is decimal")
                if j < n and src[j] == "E":
                    j += 1
                    if j < n and src[j] in "+-":
                        j += 1
                    while j < n and src[j].isdigit():
                        j += 1
                txt = src[k:j]
                toks.append(Tok("float", src[i:j], line, float(sign + txt.replace("E", "e")
                                                                if not txt.endswith(".") else
                                                                sign + txt + "0")))
                i = j
                continue
            v = 0
            for ch in mant:
                d = _digit_val(ch)
                if d >= b:
                    raise LexError(f"line {line}: digit {ch} in base {b}")
                v = v * b + d
            if sign == "-":
                v = -v
            toks.append(Tok("int", src[i:j], line, v))
            i = j
            continue
        if c.isalpha() or c == "_":
            j = i
            while j < n and (src[j].isalnum() or src[j] == "_"):
                j += 1
            w = src[i:j]
            if w in BASES:
                base = BASES[w]
                i = j
                continue
            toks.append(Tok("kw" if w in RESERVED else "id", w, line))
            i = j
            continue
        if c == "'":
            j = src.find("'", i + 1)
            if j < 0 or "\n" in src[i:j]:
                raise LexError(f"line {line}: unclosed character literal")
            body = src[i + 1:j]
            if '"' in body or body == "":
                raise LexError(f"line {line}: bad character literal")
            toks.append(Tok("char", body, line))
            i = j + 1
            continue
        if c == '"':
            parts = []
            j = i
            while True:
                k = j + 1
                while k < n and src[k] != '"':
                    if src[k] == "\n":
                        raise LexError(f"line {line}: a string must close on its line")
                    if src[k] == "'":
                        e = src.find("'", k + 1)
                        if e < 0 or "\n" in src[k:e]:
                            raise LexError(f"line {line}: unclosed mnemonic in a string")
                        parts.append(src[k + 1:e])
                        k = e + 1
                        continue
                    parts.append(src[k])
                    k += 1
                if k >= n:
                    raise LexError(f"line {line}: unclosed string")
                j = k + 1
                # strings separated only by blanks and line ends are one literal
                m, extra = j, 0
                while m < n and src[m] in " \t\r\n":
                    if src[m] == "\n":
                        extra += 1
                    m += 1
                if m < n and src[m] == '"':
                    line += extra
                    j = m
                    continue
                break
            toks.append(Tok("str", src[i:j], line, parts))
            i = j
            continue
        for op in OPS:
            if src.startswith(op, i):
                toks.append(Tok("op", op, line))
                i += len(op)
                break
        else:
            raise LexError(f"line {line}: unexpected character {c!r}")
    toks.append(Tok("eof", "", line))
    return toks
