/*
 * English texts of the labs.
 *
 * An overlay on top of labs.js: the Russian stays where it is written, and this file
 * replaces it when English is selected. This allows translating gradually without
 * risking breaking what works: whatever is missing here simply stays Russian.
 *
 * Keys: <number>.<field> — intro, hint, payoff, title, level,
 *       <number>.step.<index> for the step text,
 *       <number>.answer.<index> for the placeholder of a step's answer field,
 *       <number>.check.<index>.<name> for a check result, and check.<name> for
 *       results shared by all labs. A check result is a function of the values
 *       the check passes (`v`), since the message carries numbers read from the
 *       machine; see `tr` in labs.js.
 */
import { SOURCES, BUILTIN, pre } from './lab-sources.js';

// English plural: 1 word, 2 words.
const pl = (n, one, many) => `${n} ${n === 1 ? one : many}`;

export const EN = {
  // Handbook chapter titles: the same across different labs, so the key is the
  // file name rather than the lab number.
  'book.01-zachem.html':       'What is real here',
  'book.02-mashina.html':      'The machine: RISC5',
  'book.03-yazyk.html':        'The language: Oberon in one chapter',
  'book.04-sistema.html':      'The system: text instead of buttons',
  'book.05-moduli.html':       'Modules, symbol files and keys',
  'book.06-kompilyator.html':  'The compiler from inside',
  'book.07-samoraskrutka.html': 'Self-hosting and the fixed point',
  'book.08-izmereno.html':     'What we measured',

  'level.смотреть': 'observe',
  'level.менять':   'modify',
  'level.ломать':   'break',
  'level.измерять': 'measure',
  'level.строить':  'build',

  '1.title': 'The system on real hardware',
  '1.intro': `What runs under the canvas is not an emulator but <b>RISC5.v</b>
    by Niklaus Wirth — that very Verilog, stepped cycle by cycle. Everything
    you see was drawn by the Oberon system of 1986 on that processor.
    <br><br>
    <b>The interface is unlike anything else, and that is the main thing to
    grasp.</b> There are no buttons at all. <i>Any word on the screen</i> can
    be a command, provided it looks like <code>Module.Command</code>. You run
    it with a <b>middle</b> click straight on the text — not on a button, not
    through a menu, on the word itself. The list in the lower window is simply
    text somebody once typed because it was convenient.`,

  '1.hint': `A middle click is <kbd class="k-alt">Alt</kbd> plus the left
    button, or pick the middle button from the "mouse" list above. Aim exactly
    at the words of the command: the system looks at which word you hit. Left
    places the caret, right selects — only middle runs. And
    <kbd>Shift</kbd>+left sends two buttons at once: that is the "interclick",
    without which part of the system is out of reach.`,
  '1.payoff': `Count the lines in the window that opened. <b>Thirteen.</b>
   That is the whole operating system: memory and disk, files and directory,
   the module loader, keyboard, mouse, screen, windows, fonts, texts, the
   editor, the main loop, commands. Not a kernel without drivers, not a part —
   all of it. The addresses show it occupies <b>101 kilobytes</b>. On a modern
   machine a single <code>lsmod</code> prints a hundred lines, and that is not
   even the system, just a list of its pieces.`,


  '2.intro': `Here you will type a module into the system's own editor, save
    it and compile it. Nothing beyond the mouse and keyboard is needed — the
    editor, the compiler and the file system are already inside.`,

  '3.intro': `Oberon has no header files: the compiler extracts a module's
    interface itself and computes a <b>key</b> over it. Every module remembers
    the keys of everything it imports, and the system checks them when
    loading. Here you will watch that mechanism catch you in the act.`,

  '4.intro': `This machine has no memory management unit, no protection rings
    and no privilege separation. Any word of RAM is reachable by any code. The
    panel on the right writes straight into the machine's memory — exactly what
    any stray pointer would do.`,

  '5.intro': `This machine has no cache, no branch prediction and no
    out-of-order execution. Execution time is therefore a matter of a table and
    does not depend on what the machine happens to be doing. Here you will check
    that for yourself — the instruction and cycle counters come from the
    circuit, not from our arithmetic.`,

  '6.intro': `Oberon's garbage collector runs <b>between</b> commands, not
    inside them. While a command is running, memory is only consumed. Here you
    will walk into that yourself — and find the way around it.`,

  '7.intro': `The Oberon compiler is written in Oberon and sits on this same
    disk. Here you will rebuild the <code>Math</code> module and discover that
    the binary shipped on the image is <b>out of date</b>: it was built by a
    different version of the compiler than the one on the disk beside it.`,

  '8.intro': `"The compiler builds itself" proves nothing on its own: a
    compiler with a bug will build itself too. The proof is two generations
    agreeing. Here you will obtain it by hand.`,

  '9.intro': `Before every index operation with a variable subscript the code
    generator emits two instructions: a comparison and a conditional branch. One
    variable named <code>check</code> in <code>ORG.Mod</code> governs this, and
    it is switched on in an unexpected way.`,


  '2.hint': 'A star after a name means it is exported. The full stop after the final END is required. When the compiler objects, it prints the position as a character offset from the start of the file.',
  '3.hint': 'The key is computed over the interface, not the code: editing the body of a procedure leaves it alone, adding an exported name changes it.',
  '4.hint': 'Addresses are hexadecimal, without 0x. The instruction counter moves all the time — enter the value you saw at the moment you wrote, and try again if you missed.',
  '5.hint': 'The counters in the header refresh four times a second. Dividing one by the other can be done in your head: both are shown in millions.',
  '6.hint': 'All three commands can be typed as three lines at once, then run one after another with a middle click.',
  '7.hint': 'PIO.rsc is absent from the image to begin with — which is why its appearance is the proof that compilation ran to the end.',
  '8.hint': 'A tilde at the end is required: it closes the command\'s parameter list.',
  '9.hint': 'Click to the left of the first character of the second line, but inside the window frame. If the star lands inside a word, the compiler will say "must start with MODULE".',


  '1.step.0': `Let the system boot — a couple of seconds. Work out what is on
    the screen:
    <ul style="margin:6px 0 0 -18px">
      <li><b>Upper right</b> — the log. It holds one line:
        <code>Oberon V5 NW 14.4.2013</code>. This is where the system writes
        what is going on.</li>
      <li><b>Lower right</b> — <code>System.Tool</code>. A list of commands.
        Plain text.</li>
      <li><b>The black strips</b> above each window are its title and its own
        commands.</li>
      <li><b>The left side is empty, and that is not a fault.</b> The screen is
        divided into vertical tracks. The left one is free space for windows to
        open into. Until something opens, it stays white.</li>
    </ul>`,

  '1.step.1': `Now run a command. In the lower window find the words
    <code>System.ShowModules</code> and click them with the <b>middle</b>
    button, precisely on the words. No middle button — hold
    <kbd class="k-alt">Alt</kbd> and click with the left one.
    <br><br>
    <b>What should happen.</b> A third window opens at the lower right with the
    black title <code>System.ShowModules</code>, holding exactly this — a module
    name, two addresses in memory and a number. Your addresses may differ in the
    last digits; that is normal. What matters is that a window with a list
    appeared. The command was not "pressed" — it opened a window with an answer.
    <br><br>
    If nothing happened, you most likely missed the word, or used the ordinary
    left button. The left button only places the caret; it runs nothing.`,

  '1.step.2': `Now populate the empty track on the left. A middle click on
    <code>Hilbert.Draw</code> and it stops being white: a window titled
    <code>Hilbert</code> opens there, drawing a Hilbert curve. Beside it are
    <code>Sierpinski.Draw</code>, <code>Stars.Open</code> and
    <code>Blink.Run</code> — they open on the left too.
    <br><br>
    <b>And about the marks in the command list.</b> Not every command opens a
    window, and its notation says so:
    <ul style="margin:6px 0 0 -18px">
      <li><code>Name.Command</code> with no mark — simply runs;</li>
      <li><code>~</code> at the end — the command expects <b>parameters before
        it</b>. That is why clicking <code>System.Free ~</code> does nothing:
        there is nothing to free, no module names are written before the
        <code>~</code>. The answer would go to the log at the upper right, not
        into a new window;</li>
      <li><code>↑</code> — the parameter comes from whatever you selected
        beforehand;</li>
      <li><code>@</code> — the command works on the text in the marked
        window.</li>
    </ul>`,

  '2.step.0': `Place the caret at the end of <code>System.Tool</code>, type
    <code>Edit.Open Hello.Mod ~</code> and run it. An empty window opens on the
    left. Click inside it with the left button and type:
    <pre>MODULE Hello;
  VAR n*: INTEGER;
  PROCEDURE Add*(x: INTEGER);
  BEGIN n := n + x
  END Add;
BEGIN n := 0
END Hello.</pre>
    Then <code>Edit.Store</code> in that window's title.`,
  '2.step.1': 'Now compile it: <code>ORP.Compile Hello.Mod ~</code>.',

  '3.step.0': 'Look at a finished module first. Press "Check" — it will show the key of <code>Blink.rsc</code> as it sits on the image.',
  '3.step.1': 'Rebuild it: <code>ORP.Compile Blink.Mod/s ~</code>. The source has not changed, so the interface is the same — and the key must stay the same, even though the file will be rewritten.',
  '3.step.2': 'And now, what this was for. Every module stores the keys of those it imports. Press "Check": we will compare the key <code>Oberon.rsc</code> remembers for <code>Texts</code> against the key <code>Texts.rsc</code> carries itself.',

  '4.step.0': 'Wait for the boot and write rubbish into the framebuffer: address <code>E7F00</code>, value <code>FFFFFFFF</code>. The screen will be spoiled and the system will survive — it does not know the difference between its own memory and anyone else\'s.',
  '4.step.1': 'Now spoil the <b>code</b>. The panel shows the current instruction counter — write the value <code>E7FFFFFF</code> at that address. That is a "jump to itself": the machine will spin on one instruction forever.',

  '5.step.0': 'Wait for the boot and press "Check" — this records the current counter readings.',
  '5.step.1': 'Divide cycles by instructions over the whole run and enter the result to two decimal places.',
  '5.step.2': 'Now place the caret at the end of <code>System.Tool</code>, type <code>ORP.Compile Math.Mod/s ~</code> and run it. Then enter how many cycles per instruction that came to.',

  '6.step.0': 'Place the caret at the end of <code>System.Tool</code> and run it as one command: <code>ORP.Compile ORS.Mod/s ORB.Mod/s ORG.Mod/s ORP.Mod/s PIO.Mod/s ~</code>',
  '6.step.1': 'Now the same thing, one module per command. The last one is enough: <code>ORP.Compile PIO.Mod/s ~</code>.',

  '7.step.0': 'Wait for the boot. Note the size of <code>Math.rsc</code> — the check will show it below.',
  '7.step.1': 'Place the caret at the end of <code>System.Tool</code> (left click), type <code>ORP.Compile Math.Mod/s ~</code> and run it with a middle click.',

  '8.step.0': 'Build the compiler\'s scanner: <code>ORP.Compile ORS.Mod/s ~</code>. This is generation 1 — built by the compiler that was sitting on the disk.',
  '8.step.1': 'Unload the compiler from memory: <code>System.Free ORP ORG ORB ORS ~</code>. Without this the next build runs on the old code still in memory, and the experiment proves nothing.',
  '8.step.2': 'Build <code>ORS.Mod</code> again. This time the freshly built compiler does it — generation 2.',

  '9.step.0': `Create <code>Edit.Open Idx.Mod ~</code> and type (the word
    <code>MODULE</code> on a line of its own — that matters later):
    <pre>MODULE Idx;
  VAR a: ARRAY 100 OF INTEGER;
  PROCEDURE Sum*(n: INTEGER): INTEGER;
    VAR i, s: INTEGER;
  BEGIN s := 0; i := 0;
    WHILE i &lt; n DO s := s + a[i]; INC(i) END;
    RETURN s
  END Sum;
END Idx.</pre>
    Save it and build: <code>ORP.Compile Idx.Mod/s ~</code>.`,
  '9.step.1': 'Now place the caret at the very start of the second line, before <code>Idx;</code>, and type a star. You get <code>MODULE *Idx;</code>. Save and build again.',

  '2.title': 'Your first module',
  '3.title': 'The interface key',
  '4.title': 'There is no memory protection here',
  '5.title': 'Cycles per instruction',
  '6.title': 'The heap runs out mid-command',
  '7.title': 'The system rebuilds itself',
  '8.title': 'Fixed point: two generations',
  '9.title': 'Inside the code generator',

  // ── 10: the garbage collector from inside ────────────────────────────────
  '10.title': 'The garbage collector from inside',
  '10.intro': `In lab 6 the heap ran out inside a command. Here you open the
    collector itself: find where it is called from, type a module that makes
    garbage, and look at the heap before and after the sweep. The check reads
    the number of allocated bytes not from the screen but from the machine's
    memory — from the variable <code>Kernel.allocated</code>, the same one
    <code>System.Watch</code> prints.`,
  '10.step.0': `Open the source of the main loop: type
    <code>Edit.Open Oberon.Mod ~</code> at the end of <code>System.Tool</code>
    and run it. Find <code>PROCEDURE GC</code> in it and the last lines of the
    module:
    <pre>ActCnt := 0; CurTask := NewTask(GC, 1000); Install(CurTask);</pre>
    The collector is an <b>ordinary task</b> of the main loop, once a second.
    But it does not sweep every time: only when the action counter
    <code>ActCnt</code> has reached zero or the heap is nearly full. Every
    keystroke and every click decrements <code>ActCnt</code>, and after a sweep
    it is reset to the constant <code>BasicCycle</code>. Find it near the top of
    the file and enter its value.`,
  '10.step.1': `Now a module that makes garbage. <code>Edit.Open Junk.Mod ~</code>,
    type it, save it (<code>Edit.Store</code>) and build it with
    <code>ORP.Compile Junk.Mod ~</code>:
    ${pre(SOURCES.Junk)}
    The record type has to be named (<code>BlockDesc</code>), not a
    <code>POINTER TO RECORD … END</code> right in the pointer declaration — the
    check will tell you why.`,
  '10.step.2': `Add the line <code>Junk.Make</code> to <code>System.Tool</code>
    and run it, then <code>System.Watch</code> (top line of
    <code>System.Tool</code>). The log shows <code>Heap speace</code> (Wirth's
    typo): the heap grew by a quarter of a megabyte. All those blocks are
    garbage: the pointer to them lived in the local variable <code>p</code>, and
    the command is over.`,
  '10.step.3': `Click <code>System.Collect</code> — it is on the same top line.
    It does not sweep; it only sets <code>ActCnt := 0</code>. The sweep happens
    when the main loop next reaches the <code>GC</code> task, within a second.
    Wait, then <code>System.Watch</code> again.`,
  '10.step.4': `One last thing: run <code>Junk.Make</code> <b>twice in a
    row</b>, with no <code>System.Collect</code> in between. Two commands of
    256,000 bytes do not fit into a 426 KB heap, even though the first half is
    already garbage by the time the second command starts.`,
  '10.payoff': `Oberon's collector is not a thread and not an interrupt but an
   <b>ordinary task of the main loop</b>, one in the list, installed at boot by
   <code>NewTask(GC, 1000)</code>. And it sweeps for one of two reasons: you
   made twenty actions, or the heap is nearly full.
   <br><br>
   Why only between commands? Look at what it marks:
   <code>Kernel.Mark(mod.ptr)</code> for every module — <b>global</b> pointers
   only. It never scans the stack. While a command runs, live objects are held
   by its local variables, and a sweep in the middle of the command would throw
   them away. Between commands the stack is empty, and the global roots are
   enough. The collector's whole precision is bought with one rule: sweep when
   nobody is holding anything.`,
  '10.hint': `The collector only runs when the main loop is free. If the heap is
    already clean at step 3, you managed twenty actions and it came by itself;
    run <code>Junk.Make</code> again.`,

  // ── 11: one task at a time ───────────────────────────────────────────────
  '11.title': 'One task at a time',
  '11.intro': `Oberon has no threads and no preemption. There is one loop,
    <code>Oberon.Loop</code>: it reads the mouse and keyboard and, when there is
    no input, calls the <b>tasks</b> (<code>Oberon.Task</code>) in a circle. A
    task is just a procedure the loop calls, and it must hand control back
    quickly. Here you will write a task, starve it, and kill the system with
    it.`,
  '11.step.0': `<code>Edit.Open Tick.Mod ~</code>, type it, save it and build
    it with <code>ORP.Compile Tick.Mod ~</code>:
    ${pre(SOURCES.Tick)}
    <code>Step</code> is the task: it counts its calls in <code>n</code>,
    remembers the longest pause between them in <code>gap</code> (in
    milliseconds) and blinks a small square at the bottom of the left track.`,
  '11.step.1': `Add three lines to <code>System.Tool</code> —
    <code>Tick.Start</code>, <code>Tick.Spin</code>, <code>Tick.Break</code> —
    and run the first. A square starts blinking at the bottom left, and
    <code>System.Watch</code> shows <code>Tasks 2</code>: the garbage collector
    and yours.`,
  '11.step.2': `Run <code>Tick.Spin</code>: the command spins in an empty loop
    for a second. All that time the square does not blink, the mouse pointer
    does not move, the collector does not come — only your command runs.`,
  '11.step.3': `Now <code>Tick.Break</code>. The command itself is instant: it
    only puts a second task, <code>Stuck</code>, into the circle, and that one
    never returns. Its first call — and the system is dead. Only "Reset" helps.`,
  '11.payoff': `All of Oberon's "multitasking" is a loop that calls procedures
   in turn. No threads, no timer interrupts, no scheduler — and so no locks and
   no races: while your code runs, <b>nothing else happens at all</b>, and there
   is nobody to protect your data from.
   <br><br>
   The price is visible in steps 3 and 4: the system's responsiveness rests on
   the politeness of every procedure. A second in one command is a second of
   frozen mouse; an endless loop in one task is a dead machine. Windows 3.x and
   classic Mac OS lived the same way; the difference is that Oberon does not
   pretend it could do otherwise.`,
  '11.hint': `Type each line to run on a new line of its own and run it with a
    middle click. If you cannot see the square, it is at the very bottom of the
    left track, near its right edge.`,

  // ── 12: the cost of a check, by hand ─────────────────────────────────────
  '12.title': 'The cost of a check, by hand',
  '12.intro': `The project's central number is what an array bounds check
    costs. Here you get it <b>on your own code</b>. For this lab the machine is
    switched to the <b>core with the CHK instruction</b> (as on the
    <a href="checks.html">cost of a check</a> page), and the disk carries
    <code>ORG.Chk.Mod</code> — a code generator that emits a single CHK instead
    of a compare and a branch, and <code>ORG.NoChk.Mod</code> — one that emits
    nothing at all. The stock system runs on this core exactly as on
    the ordinary one, cycle for cycle.`,
  '12.step.0': `<code>Edit.Open Cost.Mod ~</code>, type it, save it, build it
    with <code>ORP.Compile Cost.Mod ~</code> and run <code>Cost.Run</code>:
    ${pre(SOURCES.Cost)}
    The loop does 300,000 indexings <code>a[i]</code>, and before each the
    stock compiler puts two instructions: a compare and a conditional branch.
    The time comes from <code>Kernel.Time</code>, in milliseconds; it appears
    in the log.`,
  '12.step.1': `Build the code generator that knows CHK:
    <code>ORP.Compile ORG.Chk.Mod ~</code>. The file name differs, but the
    module inside is called <code>ORG</code>, so <code>ORG.rsc</code> is
    replaced on disk. The interface is the same — and so is the key, so
    <code>ORP</code> will load the new code generator without noticing the
    swap. It is the compiler's largest module, yet it builds in about twenty
    million instructions — seconds.`,
  '12.step.2': `Unload the old code from memory:
    <code>System.Free Cost ORP ORG ~</code>. Then <code>ORP.Compile Cost.Mod ~</code>
    and <code>Cost.Run</code> again. Now a single CHK stands before
    <code>a[i]</code>, and the hardware itself checks the bound.`,
  '12.step.3': `Your number: by how many percent did the loop get faster? Enter
    it with one decimal.`,
  '12.step.4': `The third number is configuration <b>A</b>: no check at all. The
    disk also carries <code>ORG.NoChk.Mod</code> — the stock code generator
    with one change: <code>check := FALSE</code> in <code>ORG.Open</code>. Build
    it: <code>ORP.Compile ORG.NoChk.Mod ~</code>. The module in the file is
    again called <code>ORG</code>, and <code>ORG.rsc</code> is replaced a third
    time, with the same key.
    <br><br>
    To be honest about the version stamp. The version byte in a
    <code>.rsc</code> tells the loader <i>which instructions</i> the code
    needs: 1 is stock RISC5, 2 is CHK. Code without checks gets by with stock
    instructions, so it is stamped 1 like any ordinary module and runs on any
    core. But no byte records that the checks are switched off: neither the
    loader, nor the key, nor the importers can tell A from B. It is safe here
    — the lab's disk is thrown away on reset.`,
  '12.step.5': `Again <code>System.Free Cost ORP ORG ~</code>,
    <code>ORP.Compile Cost.Mod ~</code> and <code>Cost.Run</code>. Nothing
    stands before <code>a[i]</code> now.`,
  '12.payoff': `Three numbers on one loop: B (compare and branch) — 276 ms, E
   (CHK) — about 264, A (nothing) — 252. The software check costs <b>two</b>
   cycles per indexing, the hardware one costs <b>one</b>. The hardware gives
   back half the price, not all of it: CHK is an instruction too, and its cycle
   stays. Removing the check altogether saves one more cycle — at the price of
   an out-of-range index quietly reading someone else's memory, with no trace
   of it left in the object file.
   <br><br>
   The share CHK saves depends on how much other work the loop does:
   on the bare loop of the <a href="checks.html">cost of a check</a> page it is
   9%, in yours about four, and on the compiler compiling the system the checks
   cost 2.2% of cycles altogether (finding 21) — switching them off cannot
   win more than that.
   <br><br>
   That is why the "checks are expensive" argument is not settled by one
   number: it has to be measured on your own code. On this machine that can be
   done honestly — the timer counts cycles, there is no cache and no predictor,
   and a repeat gives the same number to the millisecond.`,
  '12.hint': `If no CHK appears at step 3, the old ORG is still in memory: order
    matters in <code>System.Free</code> — importers first (<code>ORP</code>),
    then the imported (<code>ORG</code>).`,

  // ── 13: a built-in of your own ───────────────────────────────────────────
  '13.title': 'A built-in function of your own',
  '13.intro': `Pascal had <code>SQR</code>, the square of a number. Wirth
    dropped it from Oberon. Here you bring it back yourself: teach the compiler
    a new built-in function, rebuild the compiler <b>inside the system</b> and
    build a module that uses it with the new compiler. The same work as the
    <code>compiler</code> task in the lab container, without a host.
    <br><br>
    A built-in function lives in three compiler modules at once:
    <code>ORB</code> knows its name, <code>ORP</code> parses the call,
    <code>ORG</code> emits the instructions.`,
  '13.step.0': `Three insertions. Open each file with
    <code>Edit.Open ORB.Mod ~</code> (and so on). <code>Edit.Search</code>
    finds the place: type the pattern on a free line of
    <code>System.Tool</code>, select it by dragging with the <b>right</b>
    button, and middle-click <code>Edit.Search</code> in the title bar of the
    file's viewer — the caret lands right after the pattern. Type the insertion
    there, then <code>Edit.Store</code> in the same title bar.
    <ul style="margin:6px 0 0 -18px">
      <li><code>ORB.Mod</code>, pattern <code>(*functions*)</code> — the first
        occurrence, in the list of built-in functions. Insert:
        ${pre(BUILTIN[0].insert.trim())}
        The number is the function's code: the tens are its number in
        <code>ORP</code> (21, the next free one), the units the number of
        parameters.</li>
      <li><code>ORG.Mod</code>, pattern <code>END Odd;</code>. Insert:
        ${pre(BUILTIN[1].insert.trim())}
        The argument goes into a register, and one instruction multiplies it by
        itself.</li>
      <li><code>ORP.Mod</code>, pattern <code>ORG.H(x)</code> — the last branch
        of built-in function parsing. Insert:
        ${pre(BUILTIN[2].insert.trim())}</li>
    </ul>`,
  '13.step.1': `Rebuild the compiler with itself, the old one:
    <code>ORP.Compile ORB.Mod/s ORG.Mod/s ORP.Mod/s ~</code>. The
    <code>/s</code> switch allows overwriting the symbol file:
    <code>ORG</code> gained a new exported name, <code>Sqr</code>, and with it
    a new key (lab 3). <code>ORB</code>'s interface is unchanged — and so is
    its key.`,
  '13.step.2': `Unload the old compiler: <code>System.Free ORP ORG ORB ~</code>
    (importers first). Then <code>Edit.Open Sq.Mod ~</code>, type it, save it,
    build it with <code>ORP.Compile Sq.Mod ~</code> and run
    <code>Sq.Run</code>:
    ${pre(SOURCES.Sq)}`,
  '13.step.3': `The last check is the one the host's <code>compiler</code>
    task makes: the new compiler must build itself into <b>the same
    bytes</b>. Once more <code>ORP.Compile ORB.Mod/s ORG.Mod/s ORP.Mod/s ~</code>
    — this time it is the new compiler doing the work.`,
  '13.payoff': `You extended the language. Not with a library — with the
   compiler: <code>SQR</code> is now a built-in name just like
   <code>ABS</code> and <code>ODD</code>, and it expands into a single
   instruction right at the call site, with no procedure call.
   <br><br>
   Three modules, three insertions, a dozen and a half lines. The name goes
   into the symbol table (<code>ORB</code>), the parsing into
   <code>ORP</code>, the instructions into <code>ORG</code>. The system was
   never restarted: the compiler was rebuilt and replaced in running memory,
   and the keys made sure the old <code>ORP</code> never met the new
   <code>ORG</code>.
   <br><br>
   The last step is lab 8's fixed point: the new compiler built itself into
   the same bytes as the old one. That is exactly what the host's
   <code>compiler</code> task checks (<code>make selfhost</code>: the build on
   the RTL is compared byte for byte with the emulator).`,
  '13.hint': `If <code>ORP.Compile Sq.Mod</code> reports an unknown
    <code>SQR</code>, the old compiler is still in memory:
    <code>System.Free ORP ORG ORB ~</code>, in exactly that order. If the
    compiler rebuild complains about a key, the <code>/s</code> is missing.`,


  // ── payoffs of labs 2–9 ──────────────────────────────────────────────────
  '2.payoff': `You wrote a program, compiled it and ran it without ever leaving
   the system. No IDE, no separate toolchain, no package manager. The editor,
   the compiler, the file system and the loader were all <b>already part of
   those 101 KB</b> you counted in the first lab.`,
  '3.payoff': `There are no header files at all. The compiler extracts a
   module's interface itself and computes a key over it; every module remembers
   the keys of everything it imports. Change an interface, and the dependants
   simply <b>refuse to load</b>.
   <br><br>
   They do not crash later in some obscure place, they do not work "almost
   right" — the system catches the mismatch at load time. Fifty years of
   <code>#include</code> in C have not given us that.`,
  '4.payoff': `You wrote rubbish straight into the memory of a running system —
   and nobody stopped you. No memory manager, no rings, no permissions. And it
   gets better: the system survived a spoiled <i>screen</i>, but spoiled
   <i>code</i> killed it instantly — no trap, no message, not a single line in
   the log.
   <br><br>
   This is what an "unsafe language" really means at the hardware level: not
   "dangerous" but <b>the machine is physically unable to notice</b>. Every
   buffer overflow of the last thirty years works exactly like this.`,
  '5.payoff': `The number agreed with the table. That sounds dull right up to
   the moment you remember that a modern processor does not work this way: one
   and the same instruction takes different time depending on the cache, the
   predictor and what ran before it.
   <br><br>
   Here time is <b>a property of the instruction, not of history</b>. That is
   why measurements on this machine can be trusted: there is nothing to make
   noise. And that is why people who need a guaranteed response in time still
   miss machines like this.`,
  '6.payoff': `The garbage collector runs <b>between</b> commands, not inside
   them. So one long command can eat all the memory, even if nine tenths of
   what is taken is already garbage. Several modules in one line do not build;
   the same ones one at a time do.
   <br><br>
   This is not an oversight but a deliberate trade: <b>no pauses in the middle
   of work</b> — at the price of a memory ceiling per command. Hard real-time
   systems do the same today.`,
  '7.payoff': `The binary on the official image <b>does not match</b> what
   compiling its own source from the same image gives. 449 words against 447.
   The image drifted apart from itself — and for years nobody noticed, because
   nobody rebuilt it.
   <br><br>
   This is what a system that builds itself is for: it lets you <b>verify the
   distribution instead of trusting it</b>.`,
  '8.payoff': `The two generations agreed byte for byte. Think about what
   exactly that has verified: the processor, memory, disk, loader, file
   system, parsing, code generation — <b>everything at once, with one
   fact</b>.
   <br><br>
   No test suite gives coverage like that. And it cannot be faked: a compiler
   with a bug will almost certainly build itself into something that then
   builds itself differently.`,
  '9.payoff': `Whether bounds checks are present is switched by <b>one
   variable</b> in the code generator. You just switched the language's safety
   on and off by editing one line — and that is exactly the lever the project's
   main experiment used to measure its price.
   <br><br>
   And a surprise: the star after <code>MODULE</code> makes the code
   <b>larger</b>, not smaller — 38 words against 34. The mode without checks
   reserves eight words of its own, and on a short module that eats up all the
   savings.`,

  // ── answer fields ────────────────────────────────────────────────────────
  '5.answer.1': 'e.g. 1.55',
  '5.answer.2': 'e.g. 1.54',
  '10.answer.0': 'a number',
  '12.answer.3': 'e.g. 4.0',

  // ── check results ────────────────────────────────────────────────────────
  'check.boot':       'the system has not booted yet',
  'check.number':     'enter a number',
  'check.first':      v => `do step ${v.s} first`,
  'check.firstSteps': v => `do steps ${v.s} first`,
  'check.none':       v => `there is no ${v.f} yet`,
  'check.notLoaded':  v => `module ${v.name} is not loaded`,

  '1.check.0.ok': v => `the desktop is in place: ${v.log} dots in the log, ${v.tool} in System.Tool`,
  '1.check.0.no': v => `not booted yet (${v.log} dots in the log, ${v.tool} in System.Tool, ${v.mi} M instructions)`,
  '1.check.1.ok': v => `the module viewer is open (${v.n} dots of text in the lower strip)`,
  '1.check.1.no': v => `${v.n} dots in the lower strip — no viewer yet`,
  '1.check.2.ok': v => `the left track is taken: ${v.n} dots of drawing`,
  '1.check.2.no': v => `the left side is still empty (${v.n} dots)`,

  '2.check.0.none': 'there is no Hello.Mod file on the disk',
  '2.check.0.ok':   v => `Hello.Mod saved, ${v.n} characters`,
  '2.check.0.no':   v => `the text is missing: ${v.lost}`,
  '2.check.1.ok':   v => `Hello.rsc created: ${v.words} code words, key ${v.key}`,
  '2.check.1.no':   'no Hello.rsc yet — the compilation did not go through',

  '3.check.0.ok':     v => `Blink.rsc: key ${v.key}, ${v.words} code words`,
  '3.check.1.same':   'Blink.rsc has not been rebuilt yet',
  '3.check.1.ok':     v => `the file was rewritten, the key is the same: ${v.key}`,
  '3.check.1.no':     v => `the key changed: it was ${v.was}, now ${v.now}`,
  '3.check.2.unread': 'the files cannot be read',
  '3.check.2.noimp':  'Oberon does not import Texts?',
  '3.check.2.ok':     v => `they agree: Oberon remembers ${v.key}, and that is the key of Texts. Were they to differ, the module would simply not load.`,
  '3.check.2.no':     v => `mismatch: ${v.rec} against ${v.key}`,

  '4.check.0.unseen':  v => `no write visible at E7F00: ${v.poked} of 32 dots in the bottom row on the left`,
  '4.check.0.ok':      'the screen is spoiled (32 dots at the bottom left), the machine keeps running',
  '4.check.0.stopped': 'the machine has stopped — that is already the next step',
  '4.check.1.ok':      v => `the machine has stopped: the program counter froze at ${v.pc}`,
  '4.check.1.no':      v => `the machine is alive, the program counter wanders (${v.n} different values)`,

  '5.check.0.ok':    v => `starting point: ${v.mi} M instructions, ${v.mc} M cycles`,
  '5.check.1.ok':    v => `correct: ${v.real} cycles per instruction`,
  '5.check.1.no':    v => `it comes to ${v.real} now, and you entered ${v.got}`,
  '5.check.2.short': v => `only ${v.mi} M instructions in the interval — the compilation has not run yet`,
  '5.check.2.ok':    v => `correct: ${v.real}. The same as when idle and during boot — the machine does not care what it is doing.`,
  '5.check.2.no':    v => `the interval comes to ${v.real}, and you entered ${v.got}`,

  '6.check.0.wait': 'the command has not finished yet',
  '6.check.0.ok':   'there is no PIO.rsc on the disk — the batch did not reach the last module',
  '6.check.0.no':   'PIO.rsc already exists: it looks like you built it with a separate command',
  '6.check.1.ok':   v => `PIO.rsc created, ${v.words} code words. The same work, but the garbage collector ran between the commands.`,

  '7.check.0.disk': 'the disk cannot be read yet',
  '7.check.0.ok':   v => `Math.rsc on the image: ${v.n} bytes — this is the shipped file`,
  '7.check.0.no':   v => `Math.rsc: ${v.n} bytes (1877 expected before the rebuild)`,
  '7.check.1.disk': 'the disk cannot be read',
  '7.check.1.ok':   v => `Math.rsc rebuilt: ${v.n} bytes instead of 1877. The shipped file had 449 code words, the fresh one has 447, with the same key 32C32F12.`,
  '7.check.1.no':   v => `Math.rsc is now ${v.n} bytes; after the rebuild it should be 1869`,

  '8.check.0.unread': 'ORS.rsc cannot be read',
  '8.check.0.same':   'ORS.rsc has not been rebuilt yet (the directory entry is the same)',
  '8.check.0.ok':     v => `generation 1: ${v.words} code words, key ${v.key}`,
  '8.check.1.ok':     'from here on the compiler will be loaded from the disk again',
  '8.check.2.same':   'ORS.rsc has not been rebuilt: the directory entry is the same',
  '8.check.2.ok':     v => `the generations agree: ${v.words} words, key ${v.key}. Different binary code going in — the same result coming out.`,
  '8.check.2.no':     v => `they diverged: ${v.was} words before, ${v.now} now`,

  '9.check.0.ver':    'the version is not 1 — is the star already there?',
  '9.check.0.ok':     v => `Idx.rsc: ${v.words} code words, version ${v.ver}`,
  '9.check.1.nostar': 'there is no star before the module name',
  '9.check.1.ver':    v => `the object file version is still ${v.ver} — rebuild it`,
  '9.check.1.ok':     v => `the version became 0: bounds checks are no longer generated. `
    + `But the code is now ${v.now} words instead of ${v.was} — ${pl(v.d, 'word', 'words')} MORE. `
    + `The star switches on the RISC-0 mode as a whole, and it reserves eight words at the start of the module. `
    + `Two effects at once — which is why the price of the checks cannot be measured this way.`,

  '10.check.0.unread': 'Oberon.Mod cannot be read',
  '10.check.0.ok':     v => `correct: BasicCycle = ${v.n}. The collector sweeps not by the clock but by your actions: once every ${v.n} keystrokes and clicks — or when less than 64 KB is left to the end of the heap.`,
  '10.check.0.no':     'Oberon.Mod on the disk has a different number',
  '10.check.1.notd':   'the record has no type descriptor: this compiler version builds one only for a named record, and NEW for an anonymous one takes the size from who knows where — the heap does not grow at all. Declare BlockDesc separately.',
  '10.check.1.ok':     v => `Junk.rsc built: ${pl(v.words, 'word', 'words')} of code, a type descriptor of ${v.td} bytes. A block is 240 bytes of data and 8 of overhead; the kernel hands it out from the list of 256-byte pieces.`,
  '10.check.kernel':   'the Kernel variables were not found at the expected addresses — the check cannot be trusted',
  '10.check.2.no':     v => `${v.a} of ${v.size} bytes in the heap — Junk.Make has not run yet (or the collector has already passed: run it again)`,
  '10.check.2.ok':     v => `Kernel.allocated = ${v.a} bytes (${v.pct}% of the heap). The collector wakes up once a second and leaves: there is no reason — few actions, and the heap is not full.`,
  '10.check.3.ok':     v => `the collector returned ${v.freed} bytes: ${v.peak} before, ${v.a} now. Kernel.allocated decreases in only one place — in Kernel.Scan, so the sweep has happened.`,
  '10.check.3.no':     v => `still ${v.a} bytes in the heap — no sweep yet`,
  '10.check.4.ok':     v => `NEW returned NIL ${pl(v.lost, 'time', 'times')}: the heap ran out inside the command. It now holds ${v.a} bytes. `
    + (v.full
      ? 'Less than 64 KB to the end — that is the second reason, and within a second the collector will come on its own, without System.Collect: check System.Watch.'
      : 'The collector has already passed on its own, without System.Collect: less than 64 KB was left to the end of the heap — the second reason.'),
  '10.check.4.no':     'Junk.lost = 0: all blocks have been allocated so far',

  '11.check.0.ok': v => `Tick.rsc built: ${pl(v.words, 'word', 'words')} of code`,
  '11.check.1.ok': v => `the task has been called ${pl(v.n, 'time', 'times')} so far; the longest pause is ${v.gap} ms`,
  '11.check.1.no': 'Tick is loaded, but the task has not been called once — did you run Tick.Start?',
  '11.check.2.ok': v => `the task was not called for ${v.gap} ms in a row — exactly while the command ran. Nobody preempted it: there is nothing to preempt with.`,
  '11.check.2.no': v => `the longest pause so far is ${v.gap} ms — Tick.Spin has not run yet`,
  '11.check.3.ok': v => `the machine spins in your code at ${v.pcs} (module Tick: ${v.from}–${v.to}), the counter n froze at ${v.n}. No more mouse, no collector, no first task of yours.`,
  '11.check.3.no': v => `the system is alive: the task is being called (n = ${v.n})`,

  '12.check.0.variant':   'the machine is not on the core with CHK — pick the lab again',
  '12.check.0.notLoaded': 'module Cost is not loaded — did you run Cost.Run?',
  '12.check.0.zero':      'Cost.t = 0: the loop has not finished yet',
  '12.check.0.chk':       v => `the loaded Cost already has ${pl(v.k, 'CHK instruction', 'CHK instructions')} — that is step 3; start with a reset`,
  '12.check.0.ok':        v => `software check: ${v.t} ms, not a single CHK in the code. That is ${v.cyc} cycles per loop iteration.`,
  '12.check.1.same':      'ORG.rsc has not been rebuilt yet',
  '12.check.1.key':       v => `the ORG key changed (${v.key}): ORP will not load with it — was the wrong file built?`,
  '12.check.1.ok':        v => `ORG.rsc rebuilt: ${pl(v.words, 'word', 'words')} instead of ${v.stock}, the key is the same ${v.key}`,
  '12.check.1.stock':     v => `ORG.rsc was rebuilt, but it is the stock ORG (${v.words} words)`,
  '12.check.2.nochk':     'the loaded Cost has no CHK at all — the old code is still in memory (System.Free) or it was built by the stock ORG',
  '12.check.newRun':      'Cost.Run has not been run with the new code yet',
  '12.check.2.ok':        v => `hardware check: ${v.t} ms against ${v.tB}. ${v.k} CHK in the code. The difference of ${v.d} ms = ${v.cyc} cycles per indexing.`,
  '12.check.3.ok':        v => `correct: ${v.real}%. One cycle per indexing out of about ${v.per} per loop iteration.`,
  '12.check.3.no':        v => `it comes to ${v.real}%, and you entered ${v.got}`,
  '12.check.4.same':      'ORG.rsc has not been rebuilt since step 3',
  '12.check.4.key':       v => `the ORG key changed (${v.key}): was the wrong file built?`,
  '12.check.4.ver':       v => `ORG.rsc version ${v.ver}, not 1`,
  '12.check.4.ok':        v => `ORG.rsc rebuilt a third time: version 1, the key is the same ${v.key}`,
  '12.check.5.chk':       v => `the loaded Cost has ${v.n} CHK — that is still the code of step 3 (System.Free) or ORG.NoChk has not been built`,
  '12.check.5.traps':     v => `the loaded Cost has ${pl(v.n, 'software index trap', 'software index traps')} — the stock ORG is at work`,
  '12.check.5.sizes':     v => `the code sizes do not line up: A ${v.a}, E ${v.e}, B ${v.b} words`,
  '12.check.5.ok':        v => `no check: ${v.t} ms, neither CHK nor traps in the code, ${pl(v.words, 'word', 'words')} `
    + `(E ${v.e}, B ${v.b}). Three numbers: B ${v.tB} ms, E ${v.tE} ms, A ${v.t} ms. `
    + `The software check costs ${v.sw} cycles per indexing, the hardware one ${v.hw}; `
    + `the hardware gave back ${v.pct}% of the price of the check.`,

  '13.check.0.orb':       'ORB.Mod on the disk has no enter("SQR", SFunc, intType, …) — was it inserted and saved (Edit.Store)?',
  '13.check.0.code':      v => `code ${v.code}: the units are the number of parameters, and SQR has one`,
  '13.check.0.taken':     v => `number ${v.fct} is already taken by the function ${v.by}`,
  '13.check.0.org':       'ORG.Mod on the disk has no PROCEDURE Sqr*(VAR x: Item)',
  '13.check.0.orp':       v => `ORP.Mod on the disk has no branch "fct = ${v.fct} THEN … ORG.Sqr(x)"`,
  '13.check.0.ok':        v => `all three insertions are on the disk: SQR with number ${v.fct}, ORG.Sqr, the branch in ORP`,
  '13.check.1.same':      v => `${v.n}.rsc has not been rebuilt yet`,
  '13.check.1.orb':       v => `the ORB key changed (${v.key}): the interface of ORB need not be touched`,
  '13.check.1.org':       'the ORG key is the same — is there no exported Sqr in the built ORG?',
  '13.check.1.orp':       'ORP.rsc was built against a different ORG — build ORG before ORP, in one command',
  '13.check.1.ok':        v => `the compiler is rebuilt. The ORB key is the same ${v.orb}, the ORG key `
    + `${v.was} → ${v.now}, and ORP.rsc already imports the new one. `
    + `The old compiler is still running in memory.`,
  '13.check.2.oldOrg':    v => `the old ORG is in memory (key ${v.key}) — System.Free ORP ORG ORB`,
  '13.check.2.nosq':      'no Sq.rsc: Sq.Mod has not been built (the old compiler will say SQR is undefined)',
  '13.check.2.notLoaded': 'module Sq is not loaded — did you run Sq.Run?',
  '13.check.2.nomul':     'the code of Sq has no MUL Ri, Ri, Ri — was SQR built through ORG.Sqr?',
  '13.check.2.sum':       v => `Sq.r = ${v.r}, but the sum of the squares from 1 to 10 is 385`,
  '13.check.2.ok':        v => `Sq.r = 385, and the loaded code of Sq has ${v.sq === 1 ? 'one instruction' : v.sq + ' instructions'} `
    + `MUL Ri, Ri, Ri — the one your ORG.Sqr emits. The compiler in memory is the new one (ORG key ${v.key}).`,
  '13.check.3.same':      v => `${v.n}.rsc has not been rebuilt by the new compiler yet`,
  '13.check.3.diff':      v => `${v.list}.rsc differs from what the old compiler built: the new function touched someone else's code`,
  '13.check.3.ok':        v => `fixed point: ORB.rsc, ORG.rsc, ORP.rsc are the same byte for byte (${v.bytes} bytes). SQR changed nothing but itself.`,
};
