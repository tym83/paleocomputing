#!/usr/bin/env python3
"""Эталон вывода LM.Mod на хосте — до бита.

Повторяет каждую операцию модуля в том же порядке, в двух арифметиках:
  risc5 — плавающая точка Вирта через ext/refemu/risc-fp.c (сверена с RTL,
          находка 50): округление прибавлением единицы, подпороговые в ноль;
  ieee  — та же программа в IEEE float32 с округлением к ближайшему чётному.
Первая обязана дать ровно тот текст, что модуль на RTL. Вторая показывает, во
что обошлось бы «проверить по numpy»: где и насколько тексты расходятся.

  python3 lm/ref.py N ЗЕРНО "затравка" [--ieee] [--stats]
"""
import ctypes, os, pathlib, struct, subprocess, sys

HERE = pathlib.Path(__file__).resolve().parent
IMPL = HERE.parent
M32 = 0xFFFFFFFF
FLT_BIAS = 0x4B000000        # ORG.Floor / ORG.Float: Mov+U RH, 4B00H


def _lib():
    so = IMPL / "build" / "lm" / "librfp.so"
    src = IMPL / "ext" / "refemu" / "risc-fp.c"
    if not so.exists() or so.stat().st_mtime < src.stat().st_mtime:
        so.parent.mkdir(parents=True, exist_ok=True)
        subprocess.check_call([os.environ.get("CC", "cc"), "-O2", "-shared", "-fPIC",
                               "-std=c99", "-w", "-o", str(so), str(src)])
    L = ctypes.CDLL(str(so))
    L.fp_add.argtypes = [ctypes.c_uint32, ctypes.c_uint32, ctypes.c_bool, ctypes.c_bool]
    L.fp_mul.argtypes = L.fp_div.argtypes = [ctypes.c_uint32, ctypes.c_uint32]
    L.fp_add.restype = L.fp_mul.restype = L.fp_div.restype = ctypes.c_uint32
    return L


def s32(v):
    v &= M32
    return v - (1 << 32) if v & 0x80000000 else v


class Risc5:
    """Числа — 32-битные слова, операции — схема Вирта."""
    name = "risc5"

    def __init__(self):
        L = _lib()
        self.add = lambda a, b: L.fp_add(a, b, False, False)
        self.sub = lambda a, b: L.fp_add(a, b ^ 0x80000000, False, False)   # FSB, RISC5.v:64
        self.mul, self.div = L.fp_mul, L.fp_div
        self._fad = L.fp_add
        self.zero = 0

    def of_bits(self, b): return b
    def floor(self, a): return s32(self._fad(a, FLT_BIAS, False, True))
    def flt(self, n): return self._fad(n & M32, FLT_BIAS, True, False)
    def pack(self, a, n): return (a + ((n << 23) & M32)) & M32          # ORG.Pack: LSL 23, ADD
    # Флаги после записи в регистр: N = бит 31, Z = все нули. OV в сравнениях
    # плавающих участвует (S = N^OV), но его ставит только целочисленный
    # ADD/SUB; в модуле он перед сравнениями всегда 0 — это проверяется ниже.
    def pos(self, a): return not (a & 0x80000000) and a != 0          # a > 0.0 (без FSB)
    def gt(self, a, b): d = self.sub(a, b); return not (d & 0x80000000) and d != 0
    def lt(self, a, b): return bool(self.sub(a, b) & 0x80000000)
    def le(self, a, b): d = self.sub(a, b); return bool(d & 0x80000000) or d == 0


class Ieee:
    """Та же программа в IEEE float32 (numpy: каждая операция округляется)."""
    name = "ieee"

    def __init__(self):
        import numpy as np
        self.np = np
        f = np.float32
        self.add = lambda a, b: f(a + b)
        self.sub = lambda a, b: f(a - b)
        self.mul = lambda a, b: f(a * b)
        self.div = lambda a, b: f(a / b)
        self.zero = f(0.0)

    def of_bits(self, b): return self.np.uint32(b).view(self.np.float32)
    def floor(self, a): return int(self.np.floor(a))
    def flt(self, n): return self.np.float32(n)
    def pack(self, a, n): return self.np.float32(self.np.ldexp(a, n))
    def pos(self, a): return a > 0
    def gt(self, a, b): return a > b
    def lt(self, a, b): return a < b
    def le(self, a, b): return a <= b


def load(A):
    raw = (HERE / "LM.Weights").read_bytes()
    w = struct.unpack(f"<{len(raw) // 4}I", raw)
    magic, V, C, E, H = w[:5]
    assert magic == 0x314D4C
    vocab = "".join(chr(c) for c in w[5:5 + V])
    p, out = 5 + V, {}
    for name, n in (("emb", V * E), ("w1", H * C * E), ("b1", H), ("w2", V * H), ("b2", V)):
        out[name] = [A.of_bits(b) for b in w[p:p + n]]; p += n
    assert p == len(w)
    return vocab, V, C, E, H, out


# константы LM.Mod, теми же битами
CONST = dict(c1=0x3FB8AA3C, p0=0x44BD3BA7, p1=0x41A19D15, p2=0x3CBD304D, q0=0x458880B6,
             q1=0x43692DA1, lo=0xC1A00000, half=0x3F000000, invT=0x3FA00000, scale=0x38000000)


def generate(A, n, seed, prompt, stats=None):
    vocab, V, C, E, H, m = load(A)
    K = C * E
    k = {nm: A.of_bits(b) for nm, b in CONST.items()}
    add, sub, mul, div = A.add, A.sub, A.mul, A.div

    def Exp(x):
        if A.lt(x, k["lo"]):
            return A.zero
        y = mul(k["c1"], x)
        nn = A.floor(add(y, k["half"]))
        y = sub(y, A.flt(nn))
        yy = mul(y, y)
        p = mul(add(mul(add(mul(k["p2"], yy), k["p1"]), yy), k["p0"]), y)
        p = add(div(p, sub(add(mul(add(yy, k["q1"]), yy), k["q0"]), p)), k["half"])
        return A.pack(p, nn + 1)

    ctx = [0] * C
    idx = lambda ch: max([i for i in range(V) if vocab[i] == ch] + [0])
    out = []
    for ch in prompt:
        ctx = ctx[1:] + [idx(ch)]
    st = seed
    for _ in range(n):
        x = []
        for c in ctx:
            x += m["emb"][c * E:(c + 1) * E]
        h = []
        for j in range(H):
            s = m["b1"][j]; row = m["w1"][j * K:(j + 1) * K]
            for q in range(K):
                s = add(s, mul(x[q], row[q]))
            h.append(s if A.pos(s) else A.zero)
        z = []
        for i in range(V):
            s = m["b2"][i]; row = m["w2"][i * H:(i + 1) * H]
            for j in range(H):
                s = add(s, mul(h[j], row[j]))
            z.append(s)
        mx = z[0]
        for i in range(1, V):
            if A.gt(z[i], mx):
                mx = z[i]
        t = A.zero
        for i in range(V):
            z[i] = Exp(mul(sub(z[i], mx), k["invT"])); t = add(t, z[i])
        # seed := seed*1103515245; seed := seed + 12345 — MUL флагов C/OV не трогает,
        # ADD ставит OV при переполнении, и тогда сравнения плавающих ниже
        # поменяли бы смысл. Проверяем, что на этом прогоне такого не бывает.
        st = s32(st * 1103515245)
        ov = not (-(1 << 31) <= st + 12345 < (1 << 31))
        assert not ov, "переполнение в ГПСЧ: сравнения плавающих увидели бы OV=1"
        st = s32(st + 12345)
        u = (st >> 16) & 0x7FFF          # DIV 10000H = ASR 16, MOD 8000H = AND
        r = mul(mul(A.flt(u), k["scale"]), t)
        i, s = 0, z[0]
        while i < V - 1 and A.le(s, r):
            i += 1; s = add(s, z[i])
        ctx = ctx[1:] + [i]
        out.append(vocab[i])
        if stats is not None:
            stats.append((z, r))
    return "".join(out)


def main():
    a = [x for x in sys.argv[1:] if not x.startswith("--")]
    n = int(a[0]) if a else 64
    seed = int(a[1]) if len(a) > 1 else 1
    prompt = a[2] if len(a) > 2 else "alice was "
    A = Ieee() if "--ieee" in sys.argv else Risc5()
    print(prompt + generate(A, n, seed, prompt))


if __name__ == "__main__":
    main()
