[Русская версия](FINDING-51-site-copy.ru.md)

# Finding 51. A live 404: the site carried a copy of the lab

The English workbook had been built, checked and merged. It was not on the
site: `/oberon/book/en/` returned **404**, and the lab opened in Russian, even
though English had by then become the default language.

Nothing broke during deployment. The deployment was green every time.

## The cause

`site/oberon/` was a **copy** of `impl/web/`, made once by hand. Only the
original was being updated.

```
impl/web/lab.html      ← edited, translated, checked
site/oberon/lab.html   ← shipped to Pages
```

The copy did not appear out of nowhere. The built `risc5.wasm`, `risc5.js`,
`oberon.dsk` and `prom_sd.mem` were listed in `impl/.gitignore`, while Pages
serves static files as they are, so they have to be in the repository. So they
were put into `site/`, and everything else followed them there, "to keep it
together".

Meanwhile the root `.gitignore` said that the copy is rebuilt by the
`make site` target. **No such target existed.** The synchronization was
declared but never written, and it relied on someone remembering the second
directory.

## Why it was not noticed

This is the same trap as all the others in this repository: a component
declared in two places; a file list taken with `$(wildcard)`; an image built
without the machine inside. The difference is that here **nothing fails**. The
pages open, the machine boots, the lab works. It is just a different one, last
year's.

The check of the live site from the previous session looked like this:

```
/                    200
/ru/                 200
/oberon/             200
/oberon/lab.html     200
/oberon/book/en/     404   ← the only thing that gave the copy away
```

Had nobody asked for the English chapters on the site, the copy would have
lived on.

## What was done

**One source per file.** Only its own `index.html`, the project page, remains in
`site/oberon/`. The lab, the workbook and the machine live in `impl/web/`, where
they are built and checked. Build artifacts are no longer ignored and are kept
in the repository in one place, not two.

**A build instead of a copy.** `tools/build-site.sh` assembles `_site/` from
`site/` and `impl/web/`. The same command runs in the Pages deployment and
locally (`make site`), so locally you see exactly what will ship.

**Two checks inside the build**, because a green deployment has already meant
nothing once:

1. the required set of files, where an empty file counts as missing; this
   project has already produced a zero-length `wasm` (Finding 45);
2. every local `href` and `src` in every page must exist. It was precisely the
   absence of this check that produced the live 404.

Both were verified with mutations: a broken link in a chapter, a zeroed-out
`risc5.wasm`, a removed `book/en` directory. Each mutation fails the build, and
the site does not ship.

## The rule

A file needed in two places must not be copied; it must be **placed at build
time**. A copy without an equality check lives until the first edit of the
original, and people learn about it not from a red run but from someone asking
"why is this in Russian?".
