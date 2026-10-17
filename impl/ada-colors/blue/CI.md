# CI job for BLUE

The workflow `.github/workflows/ada-colors.yml` runs with `working-directory:
impl/ada-colors`. This job goes next to `green:` in its `jobs:` (not added here:
the workflow is outside this directory's area).

```yaml
  blue:
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v4
      - name: Fixed point (bluec rebuilt from its seed twice, the C must be identical)
        run: make -C blue fixpoint
      - name: Genesis (the first step, from the Python bootstrap)
        run: make -C blue genesis
      - name: Tests
        run: blue/tests/run.sh
      - name: The 1978 programs (corpus, Appendix C on simulated LT33 teletypes)
        run: blue/corpus/run.sh
```

It needs a C compiler, make, Python 3 (genesis only) and perl (the corpus
timeout), all present on `ubuntu-latest`. And one line for the header comment:

```yaml
# blue: the same for BLUE (SofTech, 1978), plus the programs of its specification.
```
