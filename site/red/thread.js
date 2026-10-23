// One thread of a RED, GREEN, BLUE or YELLOW program: the main thread or a task.
//
// The program is wasm32-wasip1-threads. Every thread is a worker that
// instantiates the same module on the same shared memory, so the runtime's
// pthreads, mutexes and condition variables work exactly as on Linux: only one
// task runs at a time, handed the baton by the runtime itself.
//
// Messages to the page:
//   {t:'out', fd, seq, bytes}  a write to stdout or stderr
//   {t:'exit', code, seq}      the program ended
//   {t:'spawn', tid, arg}      start a new thread (wasi thread-spawn)
//   {t:'done'}                 this thread finished
// seq is taken from a shared counter at the moment of the write, so the page
// can put writes from different workers back into the order they happened.

const ERRNO_BADF = 8, ERRNO_NOENT = 44, ERRNO_SPIPE = 70;

class Exit extends Error {
  constructor(code) { super('exit ' + code); this.code = code; }
}

self.onmessage = (ev) => {
  const { module, memory, ctl, input, kind, tid, arg } = ev.data;
  const c = new Int32Array(ctl);
  const inBytes = new Uint8Array(input);
  const dv = () => new DataView(memory.buffer);
  const u8 = () => new Uint8Array(memory.buffer);
  const seq = () => Atomics.add(c, 1, 1);

  const iovecs = (iovs, n) => {
    const v = dv(), out = [];
    for (let i = 0; i < n; i++)
      out.push([v.getUint32(iovs + 8 * i, true), v.getUint32(iovs + 8 * i + 4, true)]);
    return out;
  };

  const wasi = {
    args_sizes_get(argc, size) {
      dv().setUint32(argc, 1, true);
      dv().setUint32(size, 8, true);
      return 0;
    },
    args_get(argv, buf) {
      dv().setUint32(argv, buf, true);
      u8().set(new TextEncoder().encode('program\0'), buf);
      return 0;
    },
    environ_sizes_get(n, size) {
      dv().setUint32(n, 0, true);
      dv().setUint32(size, 0, true);
      return 0;
    },
    environ_get() { return 0; },
    clock_time_get(id, precision, out) {
      dv().setBigUint64(out, BigInt(Math.round(performance.timeOrigin * 1e3 + performance.now() * 1e3)) * 1000n, true);
      return 0;
    },
    fd_close() { return 0; },
    fd_fdstat_get(fd, out) {
      if (fd > 2) return ERRNO_BADF;
      const v = dv();
      v.setUint8(out, 2);                      // character device
      v.setUint16(out + 2, 0, true);
      v.setBigUint64(out + 8, 0xffffffffn, true);
      v.setBigUint64(out + 16, 0xffffffffn, true);
      return 0;
    },
    fd_fdstat_set_flags() { return 0; },
    // there is no file system on the page: YELLOW files cannot be opened
    path_open() { return ERRNO_NOENT; },
    fd_prestat_get() { return ERRNO_BADF; },
    fd_prestat_dir_name() { return ERRNO_BADF; },
    fd_seek() { return ERRNO_SPIPE; },
    fd_read(fd, iovs, n, nread) {
      if (fd !== 0) return ERRNO_BADF;
      let total = 0;
      for (const [p, len] of iovecs(iovs, n)) {
        const at = Atomics.add(c, 3, len), end = Math.min(at + len, c[2]);
        if (end <= at) break;
        u8().set(inBytes.subarray(at, end), p);
        total += end - at;
        if (end - at < len) break;
      }
      dv().setUint32(nread, total, true);
      return 0;
    },
    fd_write(fd, iovs, n, nwritten) {
      if (fd !== 1 && fd !== 2) return ERRNO_BADF;
      let total = 0;
      const parts = [];
      for (const [p, len] of iovecs(iovs, n)) {
        parts.push(u8().slice(p, p + len));
        total += len;
      }
      const bytes = new Uint8Array(total);
      let o = 0;
      for (const b of parts) { bytes.set(b, o); o += b.length; }
      if (total) postMessage({ t: 'out', fd, seq: seq(), bytes });
      dv().setUint32(nwritten, total, true);
      return 0;
    },
    proc_exit(code) { throw new Exit(code); },
    sched_yield() { return 0; },
  };

  const imports = {
    env: { memory },
    wasi_snapshot_preview1: wasi,
    wasi: {
      'thread-spawn'(startArg) {
        const id = Atomics.add(c, 0, 1) + 1;
        postMessage({ t: 'spawn', tid: id, arg: startArg });
        return id;
      },
    },
  };

  WebAssembly.instantiate(module, imports).then((inst) => {
    try {
      if (kind === 'main') {
        inst.exports._start();
        postMessage({ t: 'exit', code: 0, seq: seq() });
      } else {
        inst.exports.wasi_thread_start(tid, arg);
        postMessage({ t: 'done' });
      }
    } catch (e) {
      if (e instanceof Exit) {
        postMessage({ t: 'exit', code: e.code, seq: seq() });
      } else {
        const msg = new TextEncoder().encode('*** trap: ' + (e && e.message || e) + '\n');
        postMessage({ t: 'out', fd: 2, seq: seq(), bytes: msg });
        postMessage({ t: 'exit', code: 134, seq: seq() });
      }
    }
  }, (e) => {
    // an import the host lacks: say so instead of leaving the page waiting
    const msg = new TextEncoder().encode('*** cannot start: ' + (e && e.message || e) + '\n');
    postMessage({ t: 'out', fd: 2, seq: seq(), bytes: msg });
    postMessage({ t: 'exit', code: 134, seq: seq() });
  });
};
