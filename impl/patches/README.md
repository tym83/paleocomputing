[Русская версия](README.ru.md)

# Oberon code generator patches

⚠ **Found by audit:** the only copies of these files lived in `build/cfg*/`, which
is wiped by `make clean`. One command, and all five configurations disappeared
together with the whole series of measurements. Now they live here, and `build/` is truly
derived.

| File | Configuration | What it changes in `ORG.Mod` |
|---|---|---|
| `ORG-cfgA.Mod` | **A**: no checks | `check := FALSE` in `ORG.Open` |
| `ORG-cfgC.Mod` | **C**: REJECTED | CHK with a 12-bit limit in `IR[15:4]`; breaks diagnostics |
| `ORG-cfgD.Mod` | **D**: REJECTED | CHK with an 8-bit limit in `IR[15:8]`; too little coverage |
| `ORG-cfgE.Mod` | **E**: ADOPTED | CHK with a limit from two parts + `.rsc` version byte = 2 |

Configuration **B** is stock, with no patch: `ext/norebo/Oberon/ORG.Mod` as is.

`web/ORG.Chk.Mod` is a copy of `ORG-cfgE.Mod` for lab 12 that differs only in
the version stamp: it writes 1, not 2, because the stock loader in the boot
image rejects version 2, and it cannot be rebuilt in the browser. This is safe
only there: switching the core brings the machine up with a clean disk, and a module with CHK never reaches
the stock core. `web/labs-test.mjs` checks that it matches `ORG-cfgE.Mod` in everything else.

`web/ORG.NoChk.Mod` is a copy of `ORG-cfgA.Mod` for the same lab (the third
number, configuration A) that differs only in the comment after `check := FALSE`.
Its version stamp is untouched and stays stock (1): the version tells the loader
which instructions the code needs, and code without checks gets by with the stock ones. That checks
are off is recorded neither by the version nor by the key, which is what the comment says.
`web/labs-test.mjs` also checks that it matches `ORG-cfgA.Mod`.

Next to them are `.diff` files against the original, for reading. The scripts use the whole `.Mod`,
because Norebo compiles files rather than applying patches.

## ⚠ Configuration C is currently broken

`ext/norebo/Runtime/risc-cpu.c` decodes CHK **hard-wired to the encoding of variant E**
(limit from two parts), with no conditional compilation. Configuration C emits the limit
in `IR[15:4]`, and the decoder reads it as `lim DIV 16`: the check fires on legitimate
indices, and the compiler crashes after ~1.7 million cycles.

This means that **finding 6 does not reproduce in the current tree**. It is kept for history.
