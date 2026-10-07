// The air between Oberon machines on one page, and what it carries.
//
// Every machine has an nRF24L01+ radio (tb/memradio.h); a frame it sends is
// its channel and a 32-byte payload. This relay hands each frame to all the
// other machines, as the UDP relay does for machines in QEMU and in Cozystack
// (qemu/radio/relay.py), and can lose a share of deliveries or cut a machine
// off, as a noisy or broken air would.
//
// It also reads Kube's messages, as qemu/radio/listen.py does: 60H heartbeat,
// 61H assignment, both [cluster][name, 6][n][n pod ids][counter, 2][mac, 4],
// and 62H spec, [cluster][pod id][n][image, n][counter, 2][mac, 4]. The mac is
// HalfSipHash-2-4 over the type and the data, keyed by the cluster key.

const M32 = 0xFFFFFFFF;
const rotl = (x, b) => ((x << b) | (x >>> (32 - b))) >>> 0;

function round(v) {
  let [v0, v1, v2, v3] = v;
  v0 = (v0 + v1) >>> 0; v1 = rotl(v1, 5); v1 = (v1 ^ v0) >>> 0; v0 = rotl(v0, 16);
  v2 = (v2 + v3) >>> 0; v3 = rotl(v3, 8); v3 = (v3 ^ v2) >>> 0;
  v0 = (v0 + v3) >>> 0; v3 = rotl(v3, 7); v3 = (v3 ^ v0) >>> 0;
  v2 = (v2 + v1) >>> 0; v1 = rotl(v1, 13); v1 = (v1 ^ v2) >>> 0; v2 = rotl(v2, 16);
  return [v0, v1, v2, v3];
}

/** HalfSipHash-2-4 with a 32-bit output, as KubeNet signs its messages. */
export function halfsiphash(key, msg) {
  const k0 = (key[0] | key[1] << 8 | key[2] << 16 | key[3] << 24) >>> 0;
  const k1 = (key[4] | key[5] << 8 | key[6] << 16 | key[7] << 24) >>> 0;
  let v = [k0, k1, (0x6C796765 ^ k0) >>> 0, (0x74656462 ^ k1) >>> 0];
  const n = msg.length & ~3;
  for (let i = 0; i < n; i += 4) {
    const m = (msg[i] | msg[i + 1] << 8 | msg[i + 2] << 16 | msg[i + 3] << 24) >>> 0;
    v[3] = (v[3] ^ m) >>> 0; v = round(round(v)); v[0] = (v[0] ^ m) >>> 0;
  }
  let b = ((msg.length & 0xFF) << 24) >>> 0;
  for (let i = n, j = 0; i < msg.length; i++, j++) b = (b | msg[i] << (8 * j)) >>> 0;
  v[3] = (v[3] ^ b) >>> 0; v = round(round(v)); v[0] = (v[0] ^ b) >>> 0;
  v[2] = (v[2] ^ 0xFF) >>> 0;
  v = round(round(round(round(v))));
  return (v[1] ^ v[3]) >>> 0;
}

/** KubeNet's key from up to 16 hex digits, the first two the lowest byte. */
export function keyOf(hex) {
  const h = (hex || '').padEnd(16, '0').slice(0, 16), k = new Uint8Array(8);
  for (let i = 0; i < 8; i++) k[i] = parseInt(h.slice(2 * i, 2 * i + 2), 16) || 0;
  return k;
}

/** KubeNet's tag of a cluster name: (sum of (i+1)*code) mod 255 + 1. */
export function clusterTag(name) {
  let h = 0; for (let i = 0; i < name.length; i++) h += (i + 1) * name.charCodeAt(i);
  return h % 255 + 1;
}

const KINDS = { 0x60: 'heartbeat', 0x61: 'assign', 0x62: 'spec' };

/** What a frame says, for the page and for checks. */
export function decode(frame, key) {
  const p = frame.subarray(1), typ = p[3];
  const len = p[4] | p[5] << 8 | p[6] << 16 | p[7] << 24;
  const d = p.subarray(8, 8 + Math.min(len, 24));
  const m = { typ, len, kind: KINDS[typ] };
  if (!m.kind) return m;
  m.cluster = d[0];
  let body;
  if (typ === 0x62) {
    const n = Math.min(d[2], 15);
    m.id = d[1]; m.image = String.fromCharCode(...d.subarray(3, 3 + n));
    m.counter = d[3 + n] | d[4 + n] << 8; body = 3 + n + 2;
  } else {
    const n = Math.min(d[7], 10);
    m.node = String.fromCharCode(...d.subarray(1, 7)).replace(/\0+$/, '');
    m.ids = Array.from(d.subarray(8, 8 + n)); m.counter = d[8 + n] | d[9 + n] << 8; body = 10 + n;
  }
  if (key) {
    const mac = (d[body] | d[body + 1] << 8 | d[body + 2] << 16 | d[body + 3] << 24) >>> 0;
    const msg = new Uint8Array(1 + body); msg[0] = typ; msg.set(d.subarray(0, body), 1);
    m.auth = mac === halfsiphash(key, msg);
  }
  return m;
}

/**
 * The relay. `machines` are senders and receivers: each is an object with
 * `name` and `give(frame)`. `pass(from, frame)` hands a frame of one machine to
 * the others unless the air is off, the sender or receiver is cut off, or the
 * loss takes it. Every frame is also kept in `log` with the time it passed.
 */
export class Air {
  constructor({ key = '', loss = 0, keep = 2000 } = {}) {
    this.machines = []; this.key = keyOf(key); this.loss = loss; this.keep = keep;
    this.on = true; this.cut = new Set(); this.log = []; this.listeners = [];
  }
  add(m) { this.machines.push(m); }
  pass(from, frame, now = Date.now()) {
    const msg = decode(frame, this.key);
    const entry = { t: now, from: from.name, ...msg, frame };
    if (this.on && !this.cut.has(from.name)) {
      for (const m of this.machines) {
        if (m === from || this.cut.has(m.name)) continue;
        if (this.loss > 0 && Math.random() < this.loss) continue;
        m.give(frame);
      }
      entry.passed = true;
    }
    this.log.push(entry);
    if (this.log.length > this.keep) this.log.splice(0, this.log.length - this.keep);
    for (const f of this.listeners) f(entry);
  }
  /** A frame from nobody on the page: an intruder, or a test. */
  inject(frame) { this.pass({ name: '(intruder)' }, frame); }

  /** The last heartbeat and assignment of each node, from the frames that passed. */
  view(since = 0) {
    const beats = {}, assigns = {};
    for (const e of this.log) {
      if (!e.passed || e.t < since || e.auth === false) continue;
      if (e.kind === 'heartbeat') beats[e.node] = e.ids;
      else if (e.kind === 'assign') assigns[e.node] = e.ids;
    }
    return { beats, assigns };
  }
}

/** The 24 data bytes of a KubeNet assignment, signed with the key. */
export function signAssign(key, cluster, node, ids, counter) {
  const body = new Uint8Array(10 + ids.length);
  body[0] = cluster;
  for (let i = 0; i < 6; i++) body[1 + i] = i < node.length ? node.charCodeAt(i) : 0;
  body[7] = ids.length; body.set(ids, 8);
  body[8 + ids.length] = counter & 0xFF; body[9 + ids.length] = (counter >> 8) & 0xFF;
  const msg = new Uint8Array(1 + body.length); msg[0] = 0x61; msg.set(body, 1);
  const mac = halfsiphash(key, msg);
  const out = new Uint8Array(24); out.set(body);
  for (let i = 0; i < 4; i++) out[body.length + i] = (mac >>> (8 * i)) & 0xFF;
  return { data: out, len: body.length + 4 };
}

/** A whole frame (channel, SCC header, data) like the one given, with new data. */
export function frameLike(model, data, len) {
  const f = new Uint8Array(33); f.set(model.subarray(0, 9));
  f[1 + 4] = len & 0xFF; f[1 + 5] = 0; f[1 + 6] = 0; f[1 + 7] = 0;
  f.set(data, 9);
  return f;
}
