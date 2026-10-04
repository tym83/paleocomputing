/*
 * Sources the user types in labs 10–13. One copy serves both the task text and
 * the labs-test.mjs run: what the run types must match what the page shows,
 * otherwise the wrong task is being tested.
 *
 * A separate file because both the Russian text (labs.js) and the English one
 * (labs.en.js) need them, and labs.js itself imports labs.en.js.
 */
export const SOURCES = {
  Junk: `MODULE Junk;
  TYPE Block = POINTER TO BlockDesc;
    BlockDesc = RECORD a: ARRAY 60 OF INTEGER END;
  VAR lost*: INTEGER;
  PROCEDURE Make*;
    VAR p: Block; i: INTEGER;
  BEGIN FOR i := 1 TO 1000 DO
      NEW(p); IF p = NIL THEN INC(lost) END
    END
  END Make;
END Junk.
`,
  Tick: `MODULE Tick;
  IMPORT Kernel, Display, Oberon;
  VAR n*, gap*, last: INTEGER; T: Oberon.Task;
  PROCEDURE Step;
    VAR t: INTEGER;
  BEGIN t := Kernel.Time();
    IF (n > 0) & (t - last > gap) THEN gap := t - last END;
    last := t; INC(n);
    Display.ReplConst(Display.white, 600, 10, 24, 24, Display.invert)
  END Step;
  PROCEDURE Start*;
  BEGIN Oberon.Install(T)
  END Start;
  PROCEDURE Spin*;
    VAR t: INTEGER;
  BEGIN t := Kernel.Time() + 1000;
    REPEAT UNTIL Kernel.Time() > t
  END Spin;
  PROCEDURE Stuck;
  BEGIN REPEAT UNTIL FALSE
  END Stuck;
  PROCEDURE Break*;
  BEGIN Oberon.Install(Oberon.NewTask(Stuck, 0))
  END Break;
BEGIN T := Oberon.NewTask(Step, 100)
END Tick.
`,
  Cost: `MODULE Cost;
  IMPORT Kernel, Texts, Oberon;
  VAR t*: INTEGER; a: ARRAY 1000 OF INTEGER; W: Texts.Writer;
  PROCEDURE Run*;
    VAR i, k, s: INTEGER;
  BEGIN t := Kernel.Time(); s := 0;
    FOR k := 1 TO 300 DO
      FOR i := 0 TO 999 DO s := s + a[i] END
    END;
    t := Kernel.Time() - t;
    Texts.WriteString(W, "Cost.Run ms"); Texts.WriteInt(W, t, 6);
    Texts.WriteLn(W); Texts.Append(Oberon.Log, W.buf)
  END Run;
BEGIN Texts.OpenWriter(W)
END Cost.
`,
  Sq: `MODULE Sq;
  IMPORT Texts, Oberon;
  VAR r*: INTEGER; W: Texts.Writer;
  PROCEDURE Run*;
    VAR i: INTEGER;
  BEGIN r := 0;
    FOR i := 1 TO 10 DO r := r + SQR(i) END;
    Texts.WriteString(W, "Sq.Run"); Texts.WriteInt(W, r, 6);
    Texts.WriteLn(W); Texts.Append(Oberon.Log, W.buf)
  END Run;
BEGIN Texts.OpenWriter(W)
END Sq.
`,
};

// Lab 13: three insertions into the compiler. \`after\` is the pattern for
// Edit.Search (the caret lands right after it), \`insert\` is what to type there.
// The patterns are chosen to occur once in the file (for ORB, the first one:
// the second "(*functions*)" is in the SYSTEM section).
export const BUILTIN = [
  { file: 'ORB.Mod', after: '(*functions*)',
    insert: '\n  enter("SQR", SFunc, intType, 211);' },
  { file: 'ORG.Mod', after: 'END Odd;',
    insert: '\n\n  PROCEDURE Sqr*(VAR x: Item);\n  BEGIN load(x); Put0(Mul, x.r, x.r, x.r)\n  END Sqr;' },
  { file: 'ORP.Mod', after: 'ORG.H(x)',
    insert: '\n      ELSIF fct = 21 THEN (*SQR*) CheckInt(x); ORG.Sqr(x)' },
];
export const pre = s => `<pre>${s.replace(/&/g, '&amp;').replace(/</g, '&lt;').replace(/>/g, '&gt;')}</pre>`;
