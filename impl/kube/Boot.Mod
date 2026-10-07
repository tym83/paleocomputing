MODULE Boot;  (*Runs the machine's commands at start: a cloud-init for Oberon.
  The commands come on RS232 receive, which QEMU fills from -machine
  oberon,commands=... (the catalog puts a machine's role there). System calls
  Boot.Run at the end of its body, after the viewers are open and the trap
  handlers installed. Commands are separated by ';' or line breaks; each is
  run as if clicked with the middle button, with the rest of its line as its
  parameters, and is written to the log.*)

  IMPORT SYSTEM, Display, Texts, Oberon;

  CONST data = -56; stat = -52;   (*RS232 ports 2 and 3*)

  VAR W: Texts.Writer;

  (*Texts in the 2016 system calls notify on every change, without a NIL check*)
  PROCEDURE quiet(T: Texts.Text; op, beg, end: INTEGER);
  END quiet;

  PROCEDURE run(line: ARRAY OF CHAR);
    VAR T: Texts.Text; V: Texts.Writer; F: Display.Frame; name: ARRAY 32 OF CHAR; i, j, res: INTEGER;
  BEGIN i := 0;
    WHILE (line[i] = " ") OR (line[i] = 9X) DO INC(i) END;
    j := 0;
    WHILE (line[i] > " ") & (j < LEN(name)-1) DO name[j] := line[i]; INC(i); INC(j) END;
    name[j] := 0X;
    IF j > 0 THEN
      NEW(T); Texts.Open(T, ""); T.notify := quiet;
      Texts.OpenWriter(V); Texts.WriteString(V, line); Texts.Append(T, V.buf);
      (*SetPar takes the viewer at the frame's corner: a frame of no viewer,
        at (0, 0); the commands read only the text*)
      NEW(F); F.X := 0; F.Y := 0; Oberon.SetPar(F, T, i);
      Texts.WriteString(W, "boot: "); Texts.WriteString(W, line); Texts.WriteLn(W);
      Texts.Append(Oberon.Log, W.buf);
      Oberon.Call(name, res);
      IF res # 0 THEN
        Texts.WriteString(W, "boot: "); Texts.WriteString(W, name);
        Texts.WriteString(W, " failed, res "); Texts.WriteInt(W, res, 0); Texts.WriteLn(W);
        Texts.Append(Oberon.Log, W.buf)
      END
    END
  END run;

  PROCEDURE Run*;
    VAR x, n: INTEGER; line: ARRAY 256 OF CHAR;
  BEGIN n := 0;
    WHILE SYSTEM.BIT(stat, 0) DO
      SYSTEM.GET(data, x); x := x MOD 100H;
      IF (x = ORD(";")) OR (x = 0AH) OR (x = 0DH) THEN line[n] := 0X; run(line); n := 0
      ELSIF n < LEN(line)-1 THEN line[n] := CHR(x); INC(n)
      END
    END;
    IF n > 0 THEN line[n] := 0X; run(line) END
  END Run;

BEGIN Texts.OpenWriter(W)
END Boot.
