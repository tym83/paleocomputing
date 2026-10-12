[Русская версия](README.ru.md)

# Labs: THE on the X8

Six exercises on the reconstructed THE system and the X8 it runs on. Each
takes 10 to 20 minutes. Build the emulator first:

```sh
make -C emu                  # the X8 with CHARON
labs/check.sh 01             # boot THE and watch the console
git checkout the/            # start over
```

The clock of the machine is virtual: a run prints the same thing every time,
to the millisecond, so your output can be compared with someone else's.

| # | Task | What you should see |
|---|---|---|
| 01 | **look**: boot THE (LS, IP from tape), watch the console. The operator answers pm2 at 12 s and types `end` at 90 s (`the/operator.keys`) | three user programs share six core pages; the report gives the drum transfers and the most places the segment control buffer ever held |
| 02 | **change**: give segment control fewer core pages: `ncp = 4` in `the/the.elan`; then try 3 | with 4: the same primes, the same squares, no errors, and about three times the drum transfers: above level 1 nobody knows how much core there is (EWD 196). With 3: `crash 1`, every page holy at once, the disaster EWD 113 rules out by counting holiness |
| 03 | **break**: set `layerbreak = 1`: the segment controller (level 1) reports every dump through the message interpreter (level 2) | the machine waits for ever. The message interpreter needs its vocabulary segment, which only the segment controller brings, and the segment controller waits for the message interpreter. This is why EWD 196 puts the message interpreter one level higher |
| 04 | **measure**: change `slice` (the time slice in clock ticks of 10 ms) to 1 and to 50 | the programs finish in a different order and at different times; their output does not change |
| 05 | **change**: make the operator answer `pm2 20` | `pm2: squares printed: 20`, and twenty lines on the line printer |
| 06 | **look**: the X8 test program of the Mathematisch Centrum (1971) on our emulator | 375 tests, and the expectations written in its comments hold |
