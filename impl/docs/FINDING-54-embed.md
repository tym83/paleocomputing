[Русская версия](FINDING-54-embed.ru.md)

# Finding 54. The machine as a component: a worker instead of the main thread

Wirth's machine can now be embedded into someone else's page with two lines:

```html
<script type="module" src="…/oberon/embed.js"></script>
<oberon-machine base="…/oberon/"></oberon-machine>
```

Nothing is required of the host page: no build step, no framework, no response
headers. The last point is not a detail but a v0.2 design decision, made
against temptation.

## Why not SharedArrayBuffer

The obvious way to put the emulator into a separate thread is shared memory and
`Atomics.wait`. It requires `COOP`/`COEP` headers, and that implies:

- **GitHub Pages does not set these headers at all**; verified on a live
  `.github.io`;
- `COEP: require-corp` breaks any third-party resource on the page, and
  `credentialless` is not supported by Safari;
- for a machine embedded in an iframe, the host page would have to grant
  `allow="cross-origin-isolated"`, which means not every page could embed it.

So there is no shared memory. A frame travels via an ordinary `postMessage` with
ownership transfer: 96 KB in O(1), with no copy. The page returns the rendered
buffer, and two buffers circulate; otherwise the garbage collector would wake
up sixty times a second.

**The frame is sent raw, one bit per pixel.** Expanding it to RGBA in the worker
is not an option: that is 3 MB per frame instead of 96 KB. The expansion costs
0.33 ms on the main thread (measured), thirty times cheaper than transferring
it.

## The page asks for a frame, not the worker

The RTL model computes continuously: it has no idle heuristic, and left to
itself it just burns a core. So the loop is inverted: the worker does not push
frames, it answers requests. The request is made by the page's
`requestAnimationFrame`, and it is not made when the tab is hidden or the
element has scrolled out of the viewport (`IntersectionObserver`). A machine
that nobody is watching does not compute.

## The second copy disappeared along the way

The launch page kept **its own** rendering, its own PS/2 scan code table and its
own frame loop, duplicates of those in `machine.js`. This is exactly the
situation that has already twice caused two places in this repository to
diverge: one was edited, the other was the one running (Findings 51 and 52).
Rendering and input are now factored out into `makeRenderer` and `bindInput`,
and the page shrank from 289 lines to 138.

## Verification

The protocol between the page and the worker is checked in node on the real
machine (`worker-test.mjs`, 10 checks): the frame arrives with the right size
and with ownership transfer, the instruction counter grows, the returned buffer
is reused, the system loads up to the picture, a chord gives the machine a step
between two key presses, a reset returns the machine to the start, and an
unknown message is not silently swallowed.

Three mutations (removing the buffer's return to the pool, removing the step
between chord key presses, removing the reset itself) fail the corresponding
checks and only those.

This matters more than it seems: the page and the worker can diverge
**silently**. The picture simply stops updating, and no other check will see
it, since nobody counts pixels in a browser.

Separately verified in a browser: the system loads up to the desktop inside an
ordinary page (18,607 dark pixels on the canvas), the Oberon cursor follows the
mouse (input reaches the worker), and the launch button's label is English by
default.
