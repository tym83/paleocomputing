MODULE OvProbe;  (*finding 78: floating-point comparison reads the OV flag, which only integer ADD/SUB sets*)
  IMPORT Texts, Oberon;
  VAR W: Texts.Writer; i, k: INTEGER; x, y: REAL;
  PROCEDURE Run*;
  BEGIN x := 1.0; y := 2.0;
    k := 5; k := k + 1;
    IF x < y THEN Texts.WriteString(W, "no overflow: 1.0 < 2.0 TRUE") ELSE Texts.WriteString(W, "no overflow: 1.0 < 2.0 FALSE") END;
    Texts.WriteLn(W);
    i := 7FFFFFFFH; i := i + 1;
    IF x < y THEN Texts.WriteString(W, "after overflow: 1.0 < 2.0 TRUE") ELSE Texts.WriteString(W, "after overflow: 1.0 < 2.0 FALSE") END;
    Texts.WriteLn(W); Texts.Append(Oberon.Log, W.buf)
  END Run;
BEGIN Texts.OpenWriter(W)
END OvProbe.
