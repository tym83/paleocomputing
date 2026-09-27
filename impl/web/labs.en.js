/*
 * Английские тексты лабораторий.
 *
 * Наложение поверх labs.js: русский остаётся там, где написан, а этот файл
 * подменяет его при выборе английского. Так переводится постепенно и без
 * риска сломать работающее — чего нет здесь, то просто останется русским.
 *
 * Ключи: <номер>.<поле> — intro, hint, payoff, title, level,
 *        <номер>.step.<индекс> для текста шага.
 */
import { SOURCES, pre } from './lab-sources.js';

export const EN = {
  // Названия глав методички: одни и те же у разных лабораторий, поэтому
  // ключом служит имя файла, а не номер задания.
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

};
