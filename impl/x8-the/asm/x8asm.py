#!/usr/bin/env python3
"""x8asm: an assembler for ELAN, the assembly language of the Electrologica X8.

No ELAN manual is available to us. The notation here is the one of the X8
test program of the Mathematisch Centrum (X8Stest.elan, D. Grune, 1971-72),
which this assembler translates unchanged, and the instruction fields come
from the decoder of X8S, the X8 simulator of the same author. In short:

  label:                      a label; 'begin' ... 'end' opens a block of names
  'begin' x, y = 5, z = m[24] declarations: a label, a constant, a location
  m[512]:  name[k]:           set the location counter
  a = x   a + x   a - x       register A from or with the operand (also s, b, f, g)
  a '+' x   a '*' x           exclusive or, and
  x = a   x + a   x - a       to memory (x + a: M[x] := M[x] + A)
  y,...  n,...  u,...         execute if C = 0 (yes), C = 1 (no), U: test only
  ..., p   ..., z   ..., e    set the condition on the sign, on zero, on change
  operands: 5  '777'  :x      the number itself
            x  x[3]  m[100]   the memory word at that address
            m[b + 3]  x[b]    B-modified
            mc[q] ma mg ms mt md m5[q]   through a register or a pointer
            :mc[q]            the address of such a word
  jump goto gotor jumpr sub subN subc subcd do dos repNc(:l) ...

Output: an IP tape (the "prille begin" of EWD 149, 10.1) and a listing.
"""
import re
import sys

MASK = 0o777777777
SIGN = 0o400000000

# predefined locations
PREDEF = {'a': 59, 's': 60, 'b': 61, 't': 62, 'f': 57, 'g': 58, 'd': 63}
for i in range(8):
    PREDEF['count%d' % i] = i
PREDEF['count'] = 7
for i in range(16):
    PREDEF['link%d' % i] = 8 + i
PREDEF['link'] = 8

REGS = {'a': 0, 's': 1, 'b': 2, 'f': 3, 'g': 4}
DYNREG = {'g': 58, 'a': 59, 's': 60, 'c': 61, 't': 62, 'd': 63}

SHIFTS = ['lca', 'lua', 'lcas', 'luas', 'rca', 'rua', 'rcas', 'ruas',
          'lcs', 'lus', 'lcsa', 'lusa', 'rcs', 'rus', 'rcsa', 'rusa']


class AsmError(Exception):
    pass


def wfrom(v):
    """an integer to a 27-bit ones' complement word; '-0' handled by callers"""
    if v >= 0:
        if v > MASK:
            raise AsmError('number too large: %d' % v)
        return v              # above 2^26 - 1: an octal bit pattern with the sign bit
    if -v > 0o377777777:
        raise AsmError('number too large: %d' % v)
    return (~(-v)) & MASK


def float_words(x):
    """RECONSTRUCTED float layout, as in emu/x8.c"""
    neg = x < 0 or (x == 0 and str(x).startswith('-'))
    mag = abs(x)
    if mag == 0:
        h, t = 0, 0
    else:
        e = 0
        m = mag
        while m != int(m) and e > -2047 and m * 2 < 2 ** 40:
            m *= 2
            e -= 1
        while m >= 2 ** 40:
            m /= 2
            e += 1
        m = int(round(m))
        e12 = e & 0o3777 if e >= 0 else (~(-e)) & 0o7777
        h = (e12 << 15) | ((m >> 26) & 0o37777)
        t = m & 0o377777777
    if neg:
        h, t = (~h) & MASK, (~t) & MASK
    return [h, t]


# ---------------------------------------------------------------- lexing

TOKRE = re.compile(r"""
    (?P<oct>'[0-7 ]+')
  | (?P<kw>'[a-z]+')
  | (?P<op>'[+*]')
  | (?P<float>[0-9]*\.[0-9]+)
  | (?P<num>[0-9][0-9 ]*(?<!\ ))
  | (?P<id>[a-z][a-z0-9 ]*(?<!\ ))
  | (?P<text><[^>]*>)
  | (?P<sym>[-+*/=:,()\[\]])
  | (?P<ws>[ \t]+)
""", re.X)


def lex(line):
    toks = []
    pos = 0
    while pos < len(line):
        m = TOKRE.match(line, pos)
        if not m:
            raise AsmError('cannot read %r' % line[pos:])
        pos = m.end()
        k = m.lastgroup
        v = m.group(k)
        if k == 'ws':
            continue
        if k == 'oct':
            toks.append(('num', int(v[1:-1].replace(' ', ''), 8)))
        elif k == 'num':
            toks.append(('num', int(v.replace(' ', ''))))
        elif k == 'id':
            toks.append(('id', v.replace(' ', '')))
        elif k == 'kw':
            toks.append(('kw', v[1:-1]))
        elif k == 'float':
            toks.append(('float', float(v)))
        elif k == 'text':
            toks.append(('text', v[1:-1]))
        else:
            toks.append(('sym', v))
    return toks


def strip_comment(line):
    i = line.find('"')
    return line if i < 0 else line[:i]


# ---------------------------------------------------------------- names

class Scope:
    known = {}                # labels found in the first pass: (scope id, name) -> address
    counter = 0

    def __init__(self, parent):
        self.parent = parent
        self.names = {}       # name -> ('label', addr|None) | ('const', expr) | ('loc', expr)
        self.id = Scope.counter
        Scope.counter += 1
        for (sid, name), a in Scope.known.items():
            if sid == self.id:
                self.names[name] = ['label', a]

    def find(self, name):
        s = self
        while s:
            if name in s.names:
                return s.names[name]
            s = s.parent
        return None


class Asm:
    def __init__(self):
        self.words = {}       # address -> word
        self.listing = []
        self.errors = []

    # ---- expressions

    def expr(self, toks, i, scope, final):
        v, i = self.term(toks, i, scope, final)
        while i < len(toks) and toks[i] in (('sym', '+'), ('sym', '-')):
            op = toks[i][1]
            w, i = self.term(toks, i + 1, scope, final)
            v = v + w if op == '+' else v - w
        return v, i

    def term(self, toks, i, scope, final):
        v, i = self.factor(toks, i, scope, final)
        while i < len(toks) and toks[i] in (('sym', '*'), ('sym', '/')):
            op = toks[i][1]
            w, i = self.factor(toks, i + 1, scope, final)
            if op == '*':
                v = v * w
            else:
                q = abs(v) // abs(w) if w else 0
                v = q if (v >= 0) == (w > 0) else -q
        return v, i

    def factor(self, toks, i, scope, final):
        if i >= len(toks):
            raise AsmError('expression expected')
        k, v = toks[i]
        if (k, v) == ('sym', '-'):
            w, i = self.factor(toks, i + 1, scope, final)
            return -w, i
        if (k, v) == ('sym', '+'):
            return self.factor(toks, i + 1, scope, final)
        if (k, v) == ('sym', '('):
            w, i = self.expr(toks, i + 1, scope, final)
            if i >= len(toks) or toks[i] != ('sym', ')'):
                raise AsmError(') expected')
            return w, i + 1
        if k == 'num':
            return v, i + 1
        if (k, v) == ('sym', ':'):
            a, i = self.address(toks, i + 1, scope, final)
            return a, i
        if k == 'id':
            d = scope.find(v)
            if d and d[0] == 'const':
                return self.value_of(d, scope, final), i + 1
            if d is None and v in PREDEF:
                raise AsmError('%s is a location, write :%s for its address' % (v, v))
            raise AsmError('%s is not a constant' % v)
        raise AsmError('unexpected %r' % (v,))

    def value_of(self, d, scope, final):
        kind, e = d[0], d[1]
        if kind == 'label':
            if e is None:
                if final:
                    raise AsmError('label without a place')
                return 0
            return e
        toks, sc = e
        v, j = self.expr(toks, 0, sc, final)
        return v

    def address(self, toks, i, scope, final):
        """name, name[k] or m[k] as an address (without B)"""
        k, v = toks[i]
        if k != 'id':
            raise AsmError('name expected after :')
        base = self.location(v, scope, final)
        i += 1
        if i < len(toks) and toks[i] == ('sym', '['):
            off, i = self.expr(toks, i + 1, scope, final)
            if toks[i] != ('sym', ']'):
                raise AsmError('] expected')
            i += 1
            base += off
        return base, i

    def location(self, name, scope, final):
        if name == 'm':
            return 0
        d = scope.find(name)
        if d is None:
            if name in PREDEF:
                return PREDEF[name]
            if final:
                raise AsmError('unknown name %s' % name)
            return 0
        if d[0] == 'label':
            return self.value_of(d, scope, final)
        if d[0] == 'loc':
            toks, sc = d[1]
            a, j = self.address(toks, 0, sc, final)
            return a
        raise AsmError('%s is a constant, not a location' % name)

    # ---- operands

    def operand(self, toks, scope, final):
        """returns dict: neg, mode ('stat', 'imm', 'statb', 'dyn', 'imdyn'), val"""
        neg = False
        i = 0
        if toks and toks[0] == ('sym', '-'):
            neg = True
            i = 1
        rest = toks[i:]
        if not rest:
            raise AsmError('operand expected')
        k, v = rest[0]
        if k == 'num' or (k, v) == ('sym', '(') or (k == 'id' and self.is_const(v, scope)):
            val, j = self.expr(rest, 0, scope, final)
            self.done(rest, j)
            if val < 0:
                neg, val = not neg, -val
            return dict(neg=neg, mode='imm', val=val)
        if (k, v) == ('sym', ':'):
            if len(rest) > 1 and rest[1][0] == 'id' and self.dyn_name(rest[1][1]) is not None \
                    and scope.find(rest[1][1]) is None:
                r, q, j = self.dyn(rest, 1, scope, final)
                self.done(rest, j)
                return dict(neg=neg, mode='imdyn', val=(r << 9) | (q + 256))
            val, j = self.expr(rest, 0, scope, final)
            self.done(rest, j)
            if val < 0:
                neg, val = not neg, -val
            return dict(neg=neg, mode='imm', val=val)
        if k == 'id':
            if self.dyn_name(v) is not None and scope.find(v) is None:
                r, q, j = self.dyn(rest, 0, scope, final)
                self.done(rest, j)
                return dict(neg=neg, mode='dyn', val=(r << 9) | (q + 256))
            base = self.location(v, scope, final)
            j = 1
            if j < len(rest) and rest[j] == ('sym', '['):
                j += 1
                usesb = j < len(rest) and rest[j] == ('id', 'b')
                if usesb:
                    j += 1
                    off = 0
                    if rest[j] != ('sym', ']'):
                        off, j = self.expr(rest, j, scope, final)
                else:
                    off, j = self.expr(rest, j, scope, final)
                if rest[j] != ('sym', ']'):
                    raise AsmError('] expected')
                j += 1
                self.done(rest, j)
                if usesb:
                    return dict(neg=neg, mode='statb', val=base + off)
                return dict(neg=neg, mode='stat', val=base + off)
            self.done(rest, j)
            return dict(neg=neg, mode='stat', val=base)
        raise AsmError('bad operand')

    def is_const(self, name, scope):
        d = scope.find(name)
        return d is not None and d[0] == 'const'

    def dyn_name(self, name):
        if len(name) >= 2 and name[0] == 'm':
            r = name[1:]
            if r in DYNREG:
                return DYNREG[r]
            if r.isdigit() and int(r) <= 57:
                return int(r)
        return None

    def dyn(self, toks, i, scope, final):
        r = self.dyn_name(toks[i][1])
        i += 1
        q = 0
        if i < len(toks) and toks[i] == ('sym', '['):
            q, i = self.expr(toks, i + 1, scope, final)
            if toks[i] != ('sym', ']'):
                raise AsmError('] expected')
            i += 1
        if not -256 <= q <= 255:
            raise AsmError('offset %d out of -256..255' % q)
        return r, q, i

    def done(self, toks, j):
        if j != len(toks):
            raise AsmError('unexpected %r' % (toks[j][1],))

    # ---- instruction words

    @staticmethod
    def word(cls, b21=0, b20c19=0, b18c17=0, b16c15=0, b14t0=0):
        return (cls << 22) | (b21 << 21) | (b20c19 << 19) | (b18c17 << 17) | (b16c15 << 15) | b14t0

    def addr_fields(self, op, cls, allow_imdyn=None):
        """the address part of an addressed instruction"""
        mode, val = op['mode'], op['val']
        b21 = 1 if op['neg'] else 0
        if mode == 'stat':
            if not 0 <= val <= 0o77777:
                raise AsmError('address %d does not fit 15 bits' % val)
            return cls, b21, 0, val
        if mode == 'imm':
            if not 0 <= val <= 0o77777:
                raise AsmError('number %d does not fit 15 bits' % val)
            return cls, b21, 1, val
        if mode == 'statb':
            if not -16384 <= val <= 16383:
                raise AsmError('B offset %d out of range' % val)
            return cls, b21, 2, val + 16384
        if mode == 'dyn':
            return cls, b21, 3, val
        if mode == 'imdyn':
            if allow_imdyn is None:
                raise AsmError('this instruction has no :dyn form')
            return allow_imdyn(b21, val)
        raise AsmError('bad operand')

    def instruction(self, toks, scope, final):
        cond = 0
        prefix = 0
        if len(toks) >= 2 and toks[1] == ('sym', ',') and toks[0][0] == 'id' and toks[0][1] in ('u', 'y', 'n'):
            prefix = {'u': 1, 'y': 2, 'n': 3}[toks[0][1]]
            toks = toks[2:]
        if len(toks) >= 2 and toks[-2] == ('sym', ',') and toks[-1][0] == 'id' and toks[-1][1] in ('p', 'z', 'e'):
            cond = {'p': 1, 'z': 2, 'e': 3}[toks[-1][1]]
            toks = toks[:-2]
        if not toks:
            raise AsmError('empty instruction')

        def W(cls, b21=0, b20c19=0, b14t0=0, b16c15=None, b18c17=None):
            return self.word(cls, b21, b20c19, cond if b18c17 is None else b18c17,
                             prefix if b16c15 is None else b16c15, b14t0)

        k0, v0 = toks[0]
        # register operations: a = x, a + x, s '*' x, f / x ...
        if k0 == 'id' and v0 in REGS and len(toks) >= 2 and toks[1][0] in ('sym', 'op') \
                and toks[1][1] in ('=', '+', '-', "'+'", "'*'", '*', '/'):
            r, opn = REGS[v0], toks[1][1]
            op = self.operand(toks[2:], scope, final)
            if r <= 2:
                base = {0: 0, 1: 4, 2: 16}[r]
                if opn in ('+', '-'):
                    if opn == '-':
                        op['neg'] = not op['neg']
                    c, b21, mo, b14 = self.addr_fields(op, base, lambda b21, v: (base + 2, b21, 1, v))
                elif opn == '=':
                    c, b21, mo, b14 = self.addr_fields(op, base + 1, lambda b21, v: (base + 3, b21, 1, v))
                elif opn in ("'+'", "'*'") and r < 2:
                    c, b21, mo, b14 = self.addr_fields(op, (10 if r == 0 else 14) + (opn == "'*'"))
                else:
                    raise AsmError('no %s on %s' % (opn, v0))
                return W(c, b21, mo, b14)
            isg = r == 4
            if isg and op['mode'] in ('imm', 'imdyn'):
                # X8S: G with a number does not exist (undef 228..231); with F the
                # number becomes (+0, n), which is the same integer in G
                isg = False
            if opn in ('+', '-'):
                if opn == '-':
                    op['neg'] = not op['neg']
                c, b21, mo, b14 = self.addr_fields(op, 24)
            elif opn == '=':
                c, b21, mo, b14 = self.addr_fields(op, 25, None if isg else (lambda b21, v: (29, b21, 1, v)))
            elif opn in ('*', '/'):
                c, b21, mo, b14 = self.addr_fields(op, 28)
                if opn == '/':
                    b21 = 1 - b21 if op['neg'] else 1
                    if op['neg']:
                        raise AsmError('f / -x is not available')
            else:
                raise AsmError('no %s on %s' % (opn, v0))
            if isg and prefix:
                raise AsmError('g operations cannot have a condition prefix')
            return W(c, b21, mo, b14, b16c15=1 if isg else prefix)
        # stores: x = a, x = -a, x + a, x - a
        depth = 0
        for j, t in enumerate(toks):
            if t in (('sym', '['), ('sym', '(')):
                depth += 1
            elif t in (('sym', ']'), ('sym', ')')):
                depth -= 1
            elif depth == 0 and t in (('sym', '='), ('sym', '+'), ('sym', '-')) and j > 0:
                rhs = toks[j + 1:]
                neg = False
                if rhs and rhs[0] == ('sym', '-'):
                    neg, rhs = True, rhs[1:]
                if len(rhs) == 1 and rhs[0][0] == 'id' and rhs[0][1] in REGS:
                    r = REGS[rhs[0][1]]
                    op = self.operand(toks[:j], scope, final)
                    if op['neg'] or op['mode'] in ('imm', 'imdyn'):
                        raise AsmError('cannot store into a number')
                    if t[1] == '=':
                        cls = {0: 3, 1: 7, 2: 19, 3: 29, 4: 29}[r]
                        c, _, mo, b14 = self.addr_fields(op, cls)
                        return W(c, 1 if neg else 0, mo, b14, b16c15=1 if r == 4 else prefix)
                    if r > 2 or neg:
                        raise AsmError('bad store')
                    cls = {0: 2, 1: 6, 2: 18}[r]
                    c, _, mo, b14 = self.addr_fields(op, cls)
                    if mo == 1:
                        raise AsmError('bad store')
                    return W(c, 1 if t[1] == '-' else 0, mo, b14)
                break
        if k0 == 'id':
            name = v0
            args = None
            if len(toks) > 1:
                if toks[1] != ('sym', '(') or toks[-1] != ('sym', ')'):
                    raise AsmError('cannot read this instruction')
                args = toks[2:-1]
            return self.named(name, args, W, scope, final)
        if (k0, v0) == ('sym', '('):
            v, j = self.expr(toks, 0, scope, final)
            self.done(toks, j)
            return wfrom(v)
        raise AsmError('cannot read this instruction')

    def small(self, args, scope, final, limit):
        """n, b, b + n for shifts and flip-flops"""
        if args and args[0] == ('id', 'b'):
            if len(args) == 1:
                return 1, 0
            if args[1] == ('sym', '+'):
                v, j = self.expr(args, 2, scope, final)
                self.done(args, j)
                return 1, v
            if args[1] == ('sym', '-'):
                v, j = self.expr(args, 2, scope, final)
                self.done(args, j)
                return 1, -v
            raise AsmError('b + n expected')
        v, j = self.expr(args, 0, scope, final)
        self.done(args, j)
        if not 0 <= v <= limit:
            raise AsmError('%d out of range' % v)
        return 0, v

    def named(self, name, args, W, scope, final):
        def need():
            if args is None:
                raise AsmError('%s needs an operand' % name)
            return self.operand(args, scope, final)

        def noaddr(b24, b20=0, b14t0=0, b21=0):
            return W(31 if b24 else 27, b21, b20 << 1, b14t0)

        if name in ('jump', 'jumpr'):
            op = need()
            c, b21, mo, b14 = self.addr_fields(op, 20)
            return W(c, b21, mo, b14, b18c17=1 if name == 'jumpr' else 0)
        if name in ('goto', 'gotor'):
            op = need()
            c, b21, mo, b14 = self.addr_fields(op, 21, lambda b21, v: (21, 1, 3, v))
            if op['mode'] == 'imdyn' and op['neg']:
                raise AsmError('goto(-:dyn) does not exist')
            return W(c, b21, mo, b14, b18c17=1 if name == 'gotor' else 0)
        m = re.fullmatch(r'sub(\d*)', name)
        if m:
            n = int(m.group(1) or 0)
            if n > 15:
                raise AsmError('links 0..15')
            op = need()
            if op['mode'] != 'imm' or op['neg']:
                raise AsmError('sub(:label)')
            hi, rest = divmod(n, 8)
            return W(23, rest >> 2, rest & 3, op['val'], b18c17=2 * hi)
        if name in ('subc', 'subcd', 'do', 'dos'):
            op = need()
            b18 = 3 if name in ('subcd', 'dos') else 1
            if name.startswith('subc'):
                c, b21, mo, b14 = self.addr_fields(op, 23, lambda b21, v: (23, 1, 1, v))
                if op['neg']:
                    raise AsmError('no negative jump address')
                if op['mode'] == 'imdyn':
                    b21 = 1
                return W(c, b21, mo, b14, b18c17=b18)
            c, b21, mo, b14 = self.addr_fields(op, 23)
            if op['neg'] or mo == 1:
                raise AsmError('do needs a memory operand')
            return W(23, 1, mo, b14, b18c17=b18)
        m = re.fullmatch(r'rep(\d?)([pze]?)', name)
        if m:
            n = int(m.group(1) or 7)
            c = {'': 0, 'p': 1, 'z': 2, 'e': 3}[m.group(2)]
            op = need()
            if op['mode'] != 'imm' or op['neg']:
                raise AsmError('rep(:label)')
            return W(22, n >> 2, n & 3, op['val'], b18c17=c)
        if name in ('mulas', 'muls', 'divas', 'diva'):
            op = need()
            cls = {'mulas': 8, 'muls': 9, 'divas': 12, 'diva': 13}[name]
            c, b21, mo, b14 = self.addr_fields(op, cls)
            return W(c, b21, mo, b14)
        m = re.fullmatch(r'(plus|min)([asb])', name)
        if m:
            op = need()
            cls = {'a': 3, 's': 7, 'b': 19}[m.group(2)]
            c, b21, mo, b14 = self.addr_fields(op, cls)
            if mo == 1:
                raise AsmError('needs a memory operand')
            return W(c, 1 if m.group(1) == 'min' else 0, mo, b14, b16c15=1)
        if name in SHIFTS:
            idx = SHIFTS.index(name)
            b24, rest = divmod(idx, 8)
            b21, b11t5 = divmod(rest, 4)
            b20, n = self.small(args or [], scope, final, 31)
            return noaddr(b24, b20, (b11t5 << 5) | (n & 31), b21)
        if name in ('nora', 'nors', 'noras', 'tens', 'tenas'):
            if args is not None:
                raise AsmError('%s has no operand' % name)
            return {'nora': noaddr(0, 0, 5 << 5), 'nors': noaddr(1, 0, 5 << 5),
                    'noras': noaddr(0, 0, 7 << 5), 'tens': noaddr(1, 0, (32 << 5) | 1),
                    'tenas': noaddr(1, 0, 32 << 5)}[name]
        small = {'ivoff': (0, 0), 'ivon': (1, 0), 'ovoff': (0, 1), 'ovon': (1, 1),
                 'itvon': (1, 2), 'clp': (0, 3), 'int': (0, 4)}
        if name in small:
            b24, k = small[name]
            return noaddr(b24, 0, (6 << 12) | (k << 9))
        m = re.fullmatch(r'(af|if|lvif)(on|off)', name)
        if m:
            kind = {'af': 0, 'if': 1, 'lvif': 2}[m.group(1)]
            b20, n = self.small(args or [], scope, final, 39)
            if prefix_bad(W):
                pass
            return noaddr(1 if m.group(2) == 'on' else 0, b20, (7 << 12) | (kind << 9) | (n & 63))
        m = re.fullmatch(r'(if|lvif)([as])(c?)', name)
        if m:
            kind = 5 if m.group(1) == 'if' else 6
            b20, n = self.small(args or [], scope, final, 1)
            return noaddr(1 if m.group(2) == 's' else 0, b20,
                          (7 << 12) | (kind << 9) | ((1 if m.group(3) else 0) << 6) | (n & 63))
        if name == 'memprot':
            return (1004 << 17) | 31488 | (self.word(0, b16c15=0) & 0)
        if name == 'operate':
            v, j = self.expr(args, 0, scope, final)
            return W(26, 0, 0, v)
        raise AsmError('unknown instruction %s' % name)


def prefix_bad(_):
    return False


# ---------------------------------------------------------------- driver

def assemble(src_lines, fname='?'):
    asm = Asm()
    Scope.known = {}
    for final in (False, True):
        Scope.counter = 0
        top = Scope(None)
        scope = top
        lc = 0
        pending_decl = None   # continuation of a 'begin' declaration list
        asm.words = {}
        asm.listing = []
        scopes_seen = []
        for lineno, raw in enumerate(src_lines, 1):
            line = strip_comment(raw.rstrip('\n')).rstrip()
            try:
                toks = lex(line)
                if not toks:
                    continue
                if pending_decl is not None:
                    toks = pending_decl + toks
                    pending_decl = None
                if toks[0] == ('kw', 'begin'):
                    if toks[-1] == ('sym', ','):
                        pending_decl = toks
                        continue
                    scope = Scope(scope)
                    scopes_seen.append(scope)
                    declare(scope, toks[1:], lc)
                    continue
                if toks[0] == ('kw', 'end'):
                    if scope.parent is None:
                        raise AsmError("'end' without 'begin'")
                    scope = scope.parent
                    continue
                # labels and origins
                while True:
                    if len(toks) >= 2 and toks[0][0] == 'id' and toks[1] == ('sym', ':'):
                        name = toks[0][1]
                        bind(scope, name, lc, final)
                        toks = toks[2:]
                        continue
                    if len(toks) >= 4 and toks[0][0] == 'id' and toks[1] == ('sym', '[') \
                            and ('sym', ':') in toks:
                        j = toks.index(('sym', ']'))
                        if j + 1 < len(toks) and toks[j + 1] == ('sym', ':'):
                            a, _ = asm.address(toks[:j + 1], 0, scope, final)
                            lc = a
                            toks = toks[j + 2:]
                            continue
                    break
                if not toks:
                    continue
                if toks[0] == ('kw', 'skip'):
                    n, j = asm.expr(toks, 1, scope, final)
                    asm.listing.append((lc, None, raw.rstrip('\n')))
                    lc += n
                    continue
                if toks[0] == ('kw', 'text'):
                    for ch in ''.join(t[1] if t[0] == 'text' else '' for t in toks[1:]):
                        code = charcode(ch)
                        put(asm, lc, code, raw, final)
                        lc += 1
                    continue
                try:
                    words = data_or_instruction(asm, toks, scope, final)
                except AsmError:
                    if final:
                        raise
                    words = [0, 0] if any(t[0] == 'float' for t in toks) else [0]
                for w in words:
                    put(asm, lc, w, raw, final)
                    lc += 1
            except AsmError as e:
                if final:
                    asm.errors.append('%s:%d: %s' % (fname, lineno, e))
        if final and scope.parent is not None:
            asm.errors.append("%s: 'begin' without 'end'" % fname)
    return asm


CODE = "0123456789abcdefghijklmnopqrstuvwxyz \n.,:-+=()?/*;'\"<>!_%#[]|&@"


def charcode(ch):
    if ch == '~':
        return 37          # a newline inside <...>
    i = CODE.find(ch.lower())
    if i < 0:
        raise AsmError('no code for %r' % ch)
    return i


def put(asm, lc, w, raw, final):
    if lc < 0 or lc > 0o777777:
        raise AsmError('location %d' % lc)
    if final and lc in asm.words:
        raise AsmError('location %o written twice' % lc)
    asm.words[lc] = w & MASK
    asm.listing.append((lc, w & MASK, raw.rstrip('\n')))


def data_or_instruction(asm, toks, scope, final):
    k, v = toks[0]
    if (k, v) in (('sym', '+'), ('sym', '-')) and len(toks) >= 2 and toks[1][0] in ('num', 'float') \
            and len(toks) == 2:
        if toks[1][0] == 'float':
            x = toks[1][1]
            return float_words(-x if v == '-' else x)
        n = toks[1][1]
        if v == '-':
            return [MASK if n == 0 else wfrom(-n)]
        return [wfrom(n)]
    if k == 'num' and len(toks) == 1:
        return [wfrom(v)]
    if (k, v) == ('sym', ':'):
        a, j = asm.expr(toks, 0, scope, final)
        asm.done(toks, j)
        return [wfrom(a)]
    return [asm.instruction(toks, scope, final)]


def declare(scope, toks, lc):
    """'begin' a, b = 5, c = m[24], 'mt' d"""
    items = []
    cur = []
    depth = 0
    for t in toks:
        if t == ('sym', '(') or t == ('sym', '['):
            depth += 1
        if t == ('sym', ')') or t == ('sym', ']'):
            depth -= 1
        if t == ('sym', ',') and depth == 0:
            items.append(cur)
            cur = []
        else:
            cur.append(t)
    if cur:
        items.append(cur)
    for it in items:
        if it and it[0][0] == 'kw':
            it = it[1:]
        if not it:
            continue
        if it[0][0] != 'id':
            raise AsmError('name expected in declaration')
        name = it[0][1]
        if len(it) == 1:
            if name not in scope.names:
                scope.names[name] = ['label', None]
        elif it[1] == ('sym', '='):
            rhs = it[2:]
            if rhs and rhs[0][0] == 'id' and len(rhs) >= 2 and rhs[1] == ('sym', '['):
                scope.names[name] = ('loc', (rhs, scope))
            else:
                scope.names[name] = ('const', (rhs, scope))
        else:
            raise AsmError('cannot read declaration')


def bind(scope, name, lc, final):
    s = scope
    while s:
        d = s.names.get(name)
        if d is not None:
            if d[0] != 'label':
                raise AsmError('%s is not a label' % name)
            if final and d[1] is not None and d[1] != lc and d[1] != ('def', lc):
                pass
            s.names[name] = ['label', lc]
            Scope.known[(s.id, name)] = lc
            return
        s = s.parent
    scope.names[name] = ['label', lc]
    Scope.known[(scope.id, name)] = lc


def heptades(w):
    return [64 | ((w >> 21) & 63), (w >> 14) & 127, (w >> 7) & 127, w & 127]


def ip_tape(words):
    out = bytearray(20)
    addrs = sorted(words)
    i = 0
    while i < len(addrs):
        start = addrs[i]
        j = i
        while j + 1 < len(addrs) and addrs[j + 1] == addrs[j] + 1 and j + 1 - i < 511:
            j += 1
        n = j - i + 1
        cw = ((n % 512) << 18) | ((start - 1) & 0o777777)
        out += bytes(heptades(cw))
        for a in addrs[i:j + 1]:
            out += bytes(heptades(words[a]))
        i = j + 1
    out += bytes(heptades(0)) + bytes(20)
    return bytes(out)


def main():
    import argparse
    ap = argparse.ArgumentParser(description='ELAN assembler for the Electrologica X8')
    ap.add_argument('source', nargs='+')
    ap.add_argument('-o', '--output', help='IP tape')
    ap.add_argument('-l', '--listing', help='listing file')
    ap.add_argument('-D', action='append', default=[], help='name=value: replace a "+n" data word '
                    'labelled name (used for the in-sim flag of the X8 test program)')
    a = ap.parse_args()
    lines = []
    for f in a.source:
        with open(f, encoding='latin-1') as fh:
            lines += fh.readlines()
    asm = assemble(lines, a.source[0])
    if asm.errors:
        for e in asm.errors:
            print(e, file=sys.stderr)
        sys.exit(1)
    for d in a.D:
        name, val = d.split('=')
        # patch: find the listing line "name:" and the next word
        found = False
        for k, (lc, w, src) in enumerate(asm.listing):
            if strip_comment(src).replace(' ', '').startswith(name + ':'):
                for lc2, w2, _ in asm.listing[k:]:
                    if w2 is not None:
                        asm.words[lc2] = wfrom(int(val))
                        found = True
                        break
                break
        if not found:
            print('no label %s' % name, file=sys.stderr)
            sys.exit(1)
    if a.output:
        with open(a.output, 'wb') as fh:
            fh.write(ip_tape(asm.words))
    if a.listing:
        with open(a.listing, 'w') as fh:
            for lc, w, src in asm.listing:
                fh.write('%06o %s  %s\n' % (lc, '%09o' % w if w is not None else '         ', src))


if __name__ == '__main__':
    main()
