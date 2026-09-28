#!/usr/bin/env python3
"""Обучение символьной модели для выпуска №2: MLP Бенжио на тексте «Алисы».

Только numpy, без GPU, зерно фиксировано. Результат — файл весов в том виде,
в каком его читает модуль Оберона (lm/LM.Mod): 32-битные слова, младший байт
первым, числа в представлении RISC5.

  python3 lm/train.py              # обучить и записать lm/LM.Weights
  python3 lm/train.py --check      # только проверить, что файл весов = манифест

Побитовой воспроизводимости обучения на другой машине не обещаем: порядок
суммирования в BLAS зависит от библиотеки. Воспроизводимость выпуска держится
на закоммиченном файле весов — вывод модели определяется им однозначно.
"""
import hashlib, json, pathlib, struct, sys
import numpy as np

HERE = pathlib.Path(__file__).resolve().parent
TEXT = HERE / "alice.txt"
WEIGHTS = HERE / "LM.Weights"
MANIFEST = HERE / "weights.json"

# Размеры модели. Менять только вместе с CONST в LM.Mod.
C, E, H = 8, 16, 256          # контекст, вложение, скрытый слой
VOCAB = " abcdefghijklmnopqrstuvwxyz.,;:!?'\"-"
V = len(VOCAB)
MAGIC = 0x314D4C  # "LM1"
SEED = 1
EPOCHS, BATCH, LR = 12, 256, 2e-3


def normalize(raw: str) -> str:
    """Текст → строка из символов VOCAB: строчные, типографика к ASCII,
    всё прочее и любые пробельные — в один пробел."""
    t = raw.lower()
    for a, b in (("‘", "'"), ("’", "'"), ("“", '"'), ("”", '"'), ("—", "-"), ("ù", "u")):
        t = t.replace(a, b)
    out, sp = [], True
    for ch in t:
        if ch in VOCAB and ch != " ":
            out.append(ch); sp = False
        elif not sp:
            out.append(" "); sp = True
    return "".join(out).strip()


def dataset():
    s = normalize(TEXT.read_text(encoding="utf-8"))
    ids = np.array([VOCAB.index(ch) for ch in s], dtype=np.int64)
    # контекст в начале текста — пробелы, как и при генерации с короткой затравки
    pad = np.concatenate([np.zeros(C, dtype=np.int64), ids])
    X = np.stack([pad[i:i + len(ids)] for i in range(C)], axis=1)
    return s, X, ids


def init(rng):
    k = C * E
    return {
        "emb": rng.normal(0, 1.0, (V, E)),
        "w1": rng.normal(0, (2.0 / k) ** 0.5, (H, k)),
        "b1": np.zeros(H),
        "w2": rng.normal(0, (1.0 / H) ** 0.5, (V, H)),
        "b2": np.zeros(V),
    }


def forward(p, X):
    x = p["emb"][X].reshape(len(X), C * E)
    a = x @ p["w1"].T + p["b1"]
    h = np.maximum(a, 0.0)
    z = h @ p["w2"].T + p["b2"]
    return x, a, h, z


def loss_grad(p, X, Y):
    x, a, h, z = forward(p, X)
    z = z - z.max(axis=1, keepdims=True)
    e = np.exp(z); pr = e / e.sum(axis=1, keepdims=True)
    n = len(X)
    loss = -np.log(pr[np.arange(n), Y]).mean()
    dz = pr; dz[np.arange(n), Y] -= 1; dz /= n
    g = {"w2": dz.T @ h, "b2": dz.sum(0)}
    dh = dz @ p["w2"]; da = dh * (a > 0)
    g["w1"] = da.T @ x; g["b1"] = da.sum(0)
    dx = (da @ p["w1"]).reshape(n, C, E)
    ge = np.zeros_like(p["emb"]); np.add.at(ge, X, dx); g["emb"] = ge
    return loss, g


def eval_loss(p, X, Y):
    _, _, _, z = forward(p, X)
    z = z - z.max(axis=1, keepdims=True)
    return float((np.log(np.exp(z).sum(1)) - z[np.arange(len(X)), Y]).mean())


def to_risc5_bits(a: np.ndarray):
    """float32 → слова RISC5. Для нормальных чисел биты совпадают с IEEE;
    подпороговых у Вирта нет (они обращаются в ноль) — обнуляем явно и считаем."""
    b = np.asarray(a, dtype=np.float32).ravel().view(np.uint32).copy()
    sub = ((b & 0x7F800000) == 0) & ((b & 0x7FFFFF) != 0)
    b[sub] = 0
    b[(b & 0x7FFFFFFF) == 0] = 0          # и -0.0 в +0.0: загрузка -0.0 ставит флаг N
    return b, int(sub.sum())


def export(p):
    words = [MAGIC, V, C, E, H] + [ord(ch) for ch in VOCAB]
    body, nsub = [], 0
    for name in ("emb", "w1", "b1", "w2", "b2"):
        b, s = to_risc5_bits(p[name]); body.append(b); nsub += s
    data = struct.pack(f"<{len(words)}I", *words) + np.concatenate(body).astype("<u4").tobytes()
    return data, nsub


def train():
    rng = np.random.default_rng(SEED)
    s, X, Y = dataset()
    n = len(Y); cut = int(n * 0.9)
    Xtr, Ytr, Xva, Yva = X[:cut], Y[:cut], X[cut:], Y[cut:]
    p = init(rng)
    m = {k: np.zeros_like(v) for k, v in p.items()}
    v2 = {k: np.zeros_like(v) for k, v in p.items()}
    t = 0
    for ep in range(EPOCHS):
        perm = rng.permutation(cut)
        lr = LR * (0.5 * (1 + np.cos(np.pi * ep / EPOCHS)))
        tot = 0.0
        for i in range(0, cut, BATCH):
            idx = perm[i:i + BATCH]
            loss, g = loss_grad(p, Xtr[idx], Ytr[idx])
            tot += loss * len(idx); t += 1
            for k in p:
                m[k] = 0.9 * m[k] + 0.1 * g[k]
                v2[k] = 0.999 * v2[k] + 0.001 * g[k] ** 2
                mh = m[k] / (1 - 0.9 ** t); vh = v2[k] / (1 - 0.999 ** t)
                p[k] -= lr * mh / (np.sqrt(vh) + 1e-8)
        print(f"эпоха {ep + 1:2d}: обучение {tot / cut:.3f}, проверка {eval_loss(p, Xva, Yva):.3f} нат/символ",
              flush=True)
    data, nsub = export(p)
    WEIGHTS.write_bytes(data)
    params = V * E + H * C * E + H + V * H + V
    man = {
        "text": "lm/alice.txt — Lewis Carroll, Alice's Adventures in Wonderland (1865), "
                "Project Gutenberg eBook #11, public domain; служебные шапка и подвал Project Gutenberg удалены",
        "source_url": "https://www.gutenberg.org/cache/epub/11/pg11.txt",
        "chars_after_normalize": len(s),
        "vocab": VOCAB, "C": C, "E": E, "H": H, "V": V, "params": params,
        "seed": SEED, "epochs": EPOCHS, "batch": BATCH, "lr": LR,
        "train_loss_nats": round(eval_loss(p, Xtr, Ytr), 4),
        "val_loss_nats": round(eval_loss(p, Xva, Yva), 4),
        "subnormals_flushed": nsub,
        "bytes": len(data), "sha256": hashlib.sha256(data).hexdigest(),
    }
    MANIFEST.write_text(json.dumps(man, ensure_ascii=False, indent=1) + "\n")
    print(json.dumps(man, ensure_ascii=False, indent=1))


def check():
    man = json.loads(MANIFEST.read_text())
    h = hashlib.sha256(WEIGHTS.read_bytes()).hexdigest()
    ok = h == man["sha256"]
    print(f"  веса {WEIGHTS.name}: {man['params']} параметров, {man['bytes']} Б, "
          f"sha256 {'совпадает ✅' if ok else 'НЕ совпадает ❌'}")
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(check() if "--check" in sys.argv else train())
