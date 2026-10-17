# CI for YELLOW

A job for `.github/workflows/ada-colors.yml`, next to `green:` (working directory
`impl/ada-colors`, as the workflow's defaults set). It needs only cc, make, python3 and perl,
all present on ubuntu-latest.

```yaml
  yellow:
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v4
      - name: Fixed point
        run: make -C yellow fixpoint
      - name: Genesis (the first step, from the Python bootstrap)
        run: make -C yellow genesis
      - name: Tests
        run: make -C yellow test
      - name: The 1978 tutorial corpus
        run: yellow/corpus/run.sh
```

The runtime gained functions under `/* YELLOW additions */` at the end of `rt/paleo.c` and
`rt/paleo.h`; the RED and GREEN jobs are unchanged and still pass with it. The additions use only libc, pthreads and the scheduler already there;
a wasm build of them has not been tried yet.
