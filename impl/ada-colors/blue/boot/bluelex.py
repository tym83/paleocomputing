"""bluelex -- the lexical rules of BLUE (Language Specification, 15 Feb 1978, section 2).

Identifiers are upper-case letters, digits and breaks (_); an identifier may begin with
a backslash (an enumerated literal by convention, 2.1.3) or a question mark (a derived
generic parameter, section 5). \\'C' is a printing-char-id (3.4.2). Comments run from %
to the next % or to the end of the line (2.1.8). Character string literals are quoted
with apostrophes; '' inside stands for one apostrophe (3.7.2).
"""

RESERVED = set("""AND ANY ARRAY ASSERT BIN BLOCK CONST DO ELSE END EXCEPT EXIT FALSE FOR FROM
FUNCTION GO HEX IF IN INLINE LOOP MAIN MOD MODULE NAMING NEEDS NIL NOT OCT OF OR ORIF
PAR_BLOCK PATH PROCEDURE RECORD REP RETURN SEGMENT SELECT SIGNAL TAG TERMINATE THEN TO
TRUE TYPE UNTIL VAR WHEN WHERE WITH XOR""".split())

# longest first
SYMBOLS = ["-->", ":=", "->", "<=", ">=", "<>", "**", "//", "$$", "!!",
           "(", ")", "[", "]", ",", ";", ":", ".", "+", "-", "*", "/", "=", "<", ">",
           "&", "!", "#", "$", "@"]


class LexError(Exception):
    pass


class Tok:
    __slots__ = ("kind", "text", "line", "value")

    def __init__(self, kind, text, line, value=None):
        self.kind = kind      # ID ENUM GEN NUM STR SYM RES EOF
        self.text = text
        self.line = line
        self.value = value

    def __repr__(self):
        return f"{self.kind}:{self.text}@{self.line}"


def is_letter(c):
    return "A" <= c <= "Z"


def is_digit(c):
    return "0" <= c <= "9"


def lex(src):
    toks = []
    i, n, line = 0, len(src), 1
    while i < n:
        c = src[i]
        if c == "\n":
            line += 1
            i += 1
            continue
        if c in " \t\r\f":
            i += 1
            continue
        if c == "%":                       # embedded or terminating comment
            i += 1
            while i < n and src[i] != "%" and src[i] != "\n":
                i += 1
            if i < n and src[i] == "%":
                i += 1
            continue
        if c == "'":                       # quoted part of a charstring literal
            i += 1
            s = []
            while True:
                if i >= n or src[i] == "\n":
                    raise LexError(f"line {line}: unterminated string")
                if src[i] == "'":
                    if i + 1 < n and src[i + 1] == "'":
                        s.append("'")
                        i += 2
                        continue
                    i += 1
                    break
                s.append(src[i])
                i += 1
            toks.append(Tok("STR", "".join(s), line))
            continue
        if c == "\\":
            if i + 1 < n and src[i + 1] == "'":          # printing-char-id \'C'
                if src.startswith("\\''''", i):           # \'''' is the apostrophe
                    toks.append(Tok("ENUM", "\\''''", line))
                    i += 5
                    continue
                if i + 3 < n and src[i + 3] == "'":
                    toks.append(Tok("ENUM", src[i:i + 4], line))
                    i += 4
                    continue
                raise LexError(f"line {line}: bad printing-char-id")
            if i + 1 < n and src[i + 1] in "[]":          # \[ and \] of the ASCII table
                toks.append(Tok("ENUM", src[i:i + 2], line))
                i += 2
                continue
            j = i + 1
            while j < n and (is_letter(src[j]) or is_digit(src[j]) or src[j] == "_"):
                j += 1
            if j == i + 1:
                raise LexError(f"line {line}: stray backslash")
            toks.append(Tok("ENUM", src[i:j], line))
            i = j
            continue
        if c == "?":
            j = i + 1
            while j < n and (is_letter(src[j]) or is_digit(src[j]) or src[j] == "_"):
                j += 1
            toks.append(Tok("GEN", src[i:j], line))
            i = j
            continue
        if is_letter(c):
            j = i
            while j < n and (is_letter(src[j]) or is_digit(src[j]) or src[j] == "_"):
                j += 1
            w = src[i:j]
            toks.append(Tok("RES" if w in RESERVED else "ID", w, line))
            i = j
            continue
        if is_digit(c) or (c == "." and i + 1 < n and is_digit(src[i + 1])):
            j = i
            while j < n and is_digit(src[j]):
                j += 1
            isfloat = False
            if j < n and src[j] == "." and not (j + 1 < n and src[j + 1] == "."):
                isfloat = True
                j += 1
                while j < n and is_digit(src[j]):
                    j += 1
            if j < n and src[j] == "E" and (j + 1 < n and (is_digit(src[j + 1]) or src[j + 1] in "+-")):
                j += 1
                if src[j] in "+-":
                    j += 1
                while j < n and is_digit(src[j]):
                    j += 1
            scale = None
            if j + 1 < n and src[j] == "\\" and src[j + 1] == "S":
                k = j + 2
                if k < n and src[k] in "+-":
                    k += 1
                while k < n and is_digit(src[k]):
                    k += 1
                scale = src[j + 2:k]
                text = src[i:j]
                j = k
            else:
                text = src[i:j]
            toks.append(Tok("NUM", text, line, (isfloat, scale)))
            i = j
            continue
        for s in SYMBOLS:
            if src.startswith(s, i):
                toks.append(Tok("SYM", s, line))
                i += len(s)
                break
        else:
            raise LexError(f"line {line}: unexpected character {c!r}")
    toks.append(Tok("EOF", "", line))
    return toks
