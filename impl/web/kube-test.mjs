// A Kube cluster of three machines on the real RTL, in node, no browser and no
// key pressed: each machine boots with its commands on RS232 (Boot.Mod), and
// kube-air.js carries their radios. The cluster must form and run its
// deployment, measured from the air, as the page will show it.
//
//   node web/kube-test.mjs
import { readFileSync } from 'node:fs';
import { gunzipSync } from 'node:zlib';
import { Machine } from './machine.js';
import { Air, clusterTag } from './kube-air.js';

const here = new URL('.', import.meta.url);
const prom = new Uint32Array(readFileSync(new URL('prom_sd.mem', here), 'utf8').trim().split(/\s+/).map(h => parseInt(h, 16)));
const disk = gunzipSync(readFileSync(new URL('oberon-kube.dsk.gz', here)));
const KEY = '00c0ffee00c0ffee', TAG = clusterTag('kube');
const roles = {
  plane: `Kube.Start;KubeNet.Serve kube ${KEY};Kube.Ensure web 4 Ticker`,
  node1: `KubeNet.Join node1 kube ${KEY}`,
  node2: `KubeNet.Join node2 kube ${KEY}`,
};
const air = new Air({ key: KEY });
const machines = [];
for (const [name, cmds] of Object.entries(roles)) {
  const m = await Machine.create(prom, new Uint8Array(disk));
  m.serial(cmds);
  const peer = { name, m, give: f => m.radioGive(f) };
  air.add(peer); machines.push(peer);
}
const t0 = Date.now();
let lastLog = 0, ok = false, bad = 0;
air.listeners.push(e => { if (e.cluster === TAG && e.auth === false) bad++; });
while (Date.now() - t0 < 600000) {
  for (const p of machines) {
    p.m.run(20000);
    for (const f of p.m.radioTake()) air.pass(p, f);
  }
  const { beats, assigns } = air.view(Date.now() - 4000);
  const running = Object.values(beats).flat();
  if (Date.now() - lastLog > 10000) {
    lastLog = Date.now();
    console.log(`${((Date.now() - t0) / 1000).toFixed(0)} s: ${machines[0].m.insns / 1e6 | 0}M insns on the plane; heartbeats ${JSON.stringify(beats)}; assigns ${JSON.stringify(assigns)}`);
  }
  if (beats.node1 && beats.node2 && new Set(running).size === 4 && running.length === 4 &&
      ['node1', 'node2'].every(n => JSON.stringify(beats[n]) === JSON.stringify(assigns[n] || []))) { ok = true; break; }
}
console.log(ok ? `✅ the cluster formed by itself and web 4 runs, in ${((Date.now() - t0) / 1000).toFixed(0)} s; ${air.log.length} frames, ${bad} with a bad mac`
               : '❌ the cluster did not form in 10 minutes');
process.exit(ok && bad === 0 ? 0 : 1);
