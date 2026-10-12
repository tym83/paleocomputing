"""Lexer for RED (Intermetrics, March 1979), Reference Manual chapter 2.

Identifiers and reserved words are case-insensitive (2.1) and are kept in
upper case. Enumeration literals are written 'NAME (2.3.7); a string literal
cannot contain a quote or an apostrophe (2.3.8), there is no escape inside it.
Comments run from % to the end of the line (2.4.1).
"""

RESERVED = set("""
ABBREV ABNORMAL ALL ALLOC ASSERT BEGIN BY CAPSULE CASE CONST CREATE DO ELSE
ELSEIF END EXCEPTION EXIT EXPORTS EXPOSE EXTERNAL FOR FROM FUNC GENERIC GOTO
GUARD IF IMPORTS LOCATION NAMED NEEDS NEW NONE OUT OF PRAG PROC RAISE READONLY
REVERSE REGION RENAMING REP REPEAT RERAISE RETURN SUBTYPE TASK THEN TO TYPE
VAR WAIT WHEN WHILE
""".split())

# operator symbols that look like identifiers (2.3.2)
WORD_OPERATORS = {"DIV", "MOD", "IN", "OR", "XOR", "AND", "NOT"}

SYMBOLS = [":=", "=>", "..", "**", "/=", "<=", ">=",
           "(", ")", "[", "]", ",", ":", ";", ".", "#",
           "+", "-", "*", "/", "&", "=", "<", ">"]


class Token:
    __slots__ = ("kind", "value", "line")

    def __init__(self, kind, value, line):
        self.kind = kind      # ID KW OP INT FLOAT ENUM STR EOF
        self.value = value
        self.line = line

    def __repr__(self):
        return f"{self.kind}:{self.value}@{self.line}"


class LexError(Exception):
    pass


def tokenize(text):
    toks = []
    line = 1
    i, n = 0, len(text)
    while i < n:
        c = text[i]
        if c == "\n":
            line += 1
            i += 1
            continue
        if c in " \t\r\f\xa0":
            i += 1
            continue
        if c == "%":
            while i < n and text[i] != "\n":
                i += 1
            continue
        if c.isalpha():
            j = i
            while j < n and (text[j].isalnum() or text[j] == "_"):
                j += 1
            word = text[i:j].upper()
            if word in ("PRAGMAT",):
                # pragmats do not change the meaning of a program (2.4.2)
                while j < n and text[j] != ";":
                    j += 1
                i = j + 1
                continue
            if word in RESERVED:
                toks.append(Token("KW", word, line))
            elif word in WORD_OPERATORS:
                toks.append(Token("OP", word, line))
            else:
                toks.append(Token("ID", word, line))
            i = j
            continue
        if c.isdigit():
            j = i
            while j < n and (text[j].isdigit() or text[j] == "_"):
                j += 1
            is_float = False
            if j + 1 < n and text[j] == "." and text[j + 1].isdigit():
                is_float = True
                j += 1
                while j < n and (text[j].isdigit() or text[j] == "_"):
                    j += 1
            if j < n and text[j] in "eE" and (
                    text[j + 1:j + 2].isdigit() or
                    (text[j + 1:j + 2] in ("+", "-") and text[j + 2:j + 3].isdigit())):
                is_float = True
                j += 1
                if text[j] in "+-":
                    j += 1
                while j < n and text[j].isdigit():
                    j += 1
            lit = text[i:j].replace("_", "")
            if is_float:
                toks.append(Token("FLOAT", lit, line))
            else:
                toks.append(Token("INT", int(lit), line))
            i = j
            continue
        if c == "'":
            j = i + 1
            if j < n and (text[j].isalpha()):
                while j < n and (text[j].isalnum() or text[j] == "_"):
                    j += 1
                toks.append(Token("ENUM", text[i + 1:j].upper(), line))
                i = j
                continue
            raise LexError(f"line {line}: bad enumeration literal")
        if c == '"':
            j = i + 1
            while j < n and text[j] != '"':
                if text[j] == "\n":
                    raise LexError(f"line {line}: string literal crosses a line")
                j += 1
            if j >= n:
                raise LexError(f"line {line}: unterminated string literal")
            toks.append(Token("STR", text[i + 1:j], line))
            i = j + 1
            continue
        for s in SYMBOLS:
            if text.startswith(s, i):
                toks.append(Token("OP", s, line))
                i += len(s)
                break
        else:
            raise LexError(f"line {line}: unexpected character {c!r}")
    toks.append(Token("EOF", None, line))
    return toks
