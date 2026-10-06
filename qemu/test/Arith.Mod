MODULE Arith;  (*Integer arithmetic of the running system, for qemu/test/arith_check.py.
  Writes one line per case into the file Arith.Out: the inputs and what the
  machine computed. The cases put a multiplication, whose high part goes to H,
  right before a division, whose remainder must replace it.*)
  IMPORT Files;

  VAR r: Files.Rider; f: Files.File;

  PROCEDURE num(x: INTEGER);   (*x # MIN(INTEGER)*)
    VAR d: ARRAY 12 OF CHAR; i: INTEGER; neg: BOOLEAN;
  BEGIN neg := x < 0; IF neg THEN x := -x END; i := 0;
    REPEAT d[i] := CHR(ORD("0") + x MOD 10); x := x DIV 10; INC(i) UNTIL x = 0;
    Files.Write(r, " "); IF neg THEN Files.Write(r, "-") END;
    WHILE i > 0 DO DEC(i); Files.Write(r, d[i]) END
  END num;

  (*a*b, then the product DIV and MOD c*)
  PROCEDURE case(a, b, c: INTEGER);
    VAR p: INTEGER;
  BEGIN p := a*b;
    num(a); num(b); num(c); num(p); num((a*b) DIV c); num((a*b) MOD c); Files.Write(r, 0AX)
  END case;

  PROCEDURE Run*;
    VAR h, i: INTEGER;
  BEGIN f := Files.New("Arith.Out"); Files.Set(r, f, 0);
    case(999999999, 31, 1000000007);
    case(30000, 30000, 7);
    case(900000000, 30000, 7);
    case(70000, 70000, 65537);
    case(-2000000000, 3, 1000000007);
    case(123456789, 987654321, 1000000007);
    case(-123456789, 987654321, 97);
    case(65535, 65537, 3);
    h := 1;
    FOR i := 0 TO 99 DO h := (h * 31 + i) MOD 1000000007 END;
    num(h); Files.Write(r, 0AX);
    Files.Register(f)
  END Run;

END Arith.
