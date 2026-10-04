#!/usr/bin/env python3
"""Cross-check of hardware bounds checking: QEMU against the real RTL.

The same program (`tests/bench_bounds_e.bin`, the one that computes the
numbers on the page) is run two ways:

  * in QEMU with `-machine oberon,chk=on`;
  * on the model built by Verilator from RISC5.v with `-DWITH_CHK -DCHK_SPLIT`
    and compiled to WASM, i.e. on the same hardware as in the browser.

The state of ALL registers is compared after the same number of instructions.
The check exists precisely so that the instruction set extension does not
drift apart between the browser and the cluster: in the cluster the machine is
run by QEMU, in the browser by the RTL, and "works on my machine" means nothing
here.
"""
import json, pathlib, re, subprocess, sys

ROOT = pathlib.Path(__file__).resolve().parents[2]
IMPL = ROOT / "impl"
QEMU = pathlib.Path(sys.argv[1]) if len(sys.argv) > 1 else ROOT / ".qemu-work"
RESET_PC = 0x00FFE000    # reset address: every program starts here
BUDGET = 8000            # instructions: inside the loop, and the log stays small
                         # (one instruction per block is ~230 bytes of log per instruction)


def in_rtl(binpath, budget):
    """Registers after `budget` instructions on the model built from the RTL."""
    js = f"""
import fs from 'node:fs';
const b = fs.readFileSync('{binpath}');
const prom = new Uint32Array(b.buffer, b.byteOffset, b.length / 4);
const M = await (await import('./risc5-chk.js')).default();
const pP = M._malloc(prom.length * 4);
M.HEAPU8.set(new Uint8Array(prom.buffer, prom.byteOffset, prom.length * 4), pP);
const pI = M._malloc(1024);
M._soc_init(pP, prom.length, pI, 1024);
M._soc_run({budget});
console.log(JSON.stringify({{
  regs: Array.from({{length: 16}}, (_, i) => M._soc_reg(i) >>> 0),
  insns: M._soc_insns(), pc: M._soc_pc() >>> 0,
}}));
"""
    out = subprocess.run(["node", "--input-type=module", "-e", js],
                         cwd=IMPL / "web", capture_output=True, text=True, check=True)
    return json.loads(out.stdout.strip().splitlines()[-1])


def in_qemu(binpath, budget, chk, extra=""):
    """The same in QEMU: run with the instruction log and take the state at the same instruction."""
    data = pathlib.Path(binpath).read_bytes()
    (QEMU / "prog.bin").write_bytes(data)
    flag = (",chk=on" if chk else "") + extra   # extra: ",desc=on" for IDX
    # ⚠ The log does NOT go to disk. `-d cpu` with one-insn-per-tb writes ~230
    # bytes per instruction, and after the useful part the program spins in an
    # idle loop: within a minute that is tens of gigabytes. It happened once:
    # the log filled the Docker VM's disk completely, containerd could no
    # longer write even its own database, and the only fix was recreating the
    # VM.
    #
    # So the log goes into a pipe: `head` takes its share and closes the pipe,
    # QEMU gets SIGPIPE and dies on its own. Nothing reaches the disk.
    #
    # ⚠ Without one-insn-per-tb the state is printed per translation BLOCK,
    # not per instruction: the counters stop matching and the comparison
    # silently drifts.
    # ⚠ `timeout` is still needed: QEMU does not always die quietly on SIGPIPE
    # and can keep spinning with a closed pipe. Verified: the container hung.
    cmd = (f"cd /src && timeout 60 ./build/qemu-system-risc5 -M oberon{flag} "
           f"-accel tcg,one-insn-per-tb=on "
           f"-bios prog.bin -nographic -monitor none -serial none "
           f"-d cpu -D /dev/stdout 2>/dev/null | head -c {(budget + 8) * 400}")
    out = subprocess.run(["docker", "run", "--rm", "-v", f"{QEMU}:/src",
                          "qemu-build:risc5", cmd], capture_output=True, text=True)
    text = out.stdout
    # 400 bytes per instruction leaves headroom: a real record is ~310,
    # and if that is not enough the check fails honestly instead of comparing the wrong thing.
    blocks = text.split("PC   ")[1:]
    if not blocks:
        raise SystemExit("  ❌ QEMU log is empty")
    return blocks


def state_at(blocks, idx):
    """Registers and program counter from a log record."""
    blk = blocks[idx]
    regs = {int(m[0]): int(m[1], 16) for m in re.findall(r"R(\d+)\s+([0-9a-f]{8})", blk)}
    pc = int(re.match(r"([0-9a-f]{8})", blk).group(1), 16)
    return [regs.get(i, -1) for i in range(16)], pc


def aligned(blocks, budget, want_pc):
    """The record matching the model's state after `budget` instructions.

    ⚠ The record number is NOT computed by a formula. QEMU prints the state
    before executing a block, the model counts after an executed instruction,
    and the first record differs between builds: a hard-coded offset matched
    locally and drifted in the CI run. The error then looks like a mismatch in
    exactly one register, the one written by the neighbouring instruction.
    
    So the record is found by program counter within ±2 records. The loop body
    is longer than that, so the match in this window is unique.
    """
    hits = [k for k in range(max(0, budget - 2), min(len(blocks), budget + 3))
            if state_at(blocks, k)[1] == want_pc]
    if len(hits) != 1:
        return None, hits
    return hits[0], hits


def main():
    # Take the same copy that ships to the page: in tests/ the file is
    # generated and absent from a fresh tree.
    binp = IMPL / "web/bench_bounds_e.bin"
    if not binp.exists():
        raise SystemExit("  ❌ no web/bench_bounds_e.bin; build it: make -C impl web")

    rtl = in_rtl(binp, BUDGET)
    blocks = in_qemu(binp, BUDGET, chk=True)
    idx, hits = aligned(blocks, BUDGET, rtl["pc"])
    if idx is None:
        print(f"  ❌ the QEMU log has no record with address {rtl['pc']:08X} "
              f"near instruction {BUDGET} (matching records: {len(hits)})")
        return 1
    qemu, qpc = state_at(blocks, idx)

    bad = 0
    for i in range(16):
        if rtl["regs"][i] != qemu[i]:
            print(f"  ❌ R{i}: RTL {rtl['regs'][i]:08X}, QEMU {qemu[i]:08X}")
            bad += 1
    if bad:
        print(f"\nmismatches: {bad}")
        return 1
    done = rtl["regs"][5]
    print(f"  ✅ CHK: 16 registers match at {rtl['pc']:08X} after {BUDGET} instructions "
          f"(iterations done: {1000000 - done}, log record {idx})")

    # Negative control. A check that cannot turn red checks nothing: run the
    # same program on a machine WITHOUT the extension; there this encoding
    # means something else, and the states must diverge.
    plain_blocks = in_qemu(binp, BUDGET, chk=False)
    plain, _ = state_at(plain_blocks, idx)
    if plain == [rtl["regs"][i] for i in range(16)]:
        print("  ❌ same state without the extension, so the check verifies nothing")
        return 1
    diff = [i for i in range(16) if plain[i] != rtl["regs"][i]]
    print(f"  ✅ without the extension {', '.join('R%d' % i for i in diff)} diverge; "
          f"the check can turn red")
    return 0


if __name__ == "__main__":
    sys.exit(main())
