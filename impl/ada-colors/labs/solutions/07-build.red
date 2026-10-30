% Lab 7. A generic has no instantiation statement: each call makes (or reuses) its instance.
CAPSULE main EXPORTS NONE;
   GENERIC t : TYPE NEEDS :=(t, t)
      PROC swap(VAR a, b : t);
         CONST c := a;
         a := b;
         b := c;
      END PROC swap;
   VAR i, j : INT;
   VAR s, r : STRING[ASCII](3);
   GENERIC t : TYPE NEEDS :=(t, t), >(t, t) FUNC mx(CONST a, b : t) => t;
      IF a > b THEN RETURN a; END IF;
      RETURN b;
   END FUNC mx;
   i := 1;
   j := 2;
   s := "red";
   r := "grn";
   swap(i, j);
   swap(s, r);
   WRITELN(CNVT[STRING[ASCII]](i) & " " & CNVT[STRING[ASCII]](j) & " " & s & " " & r);
   WRITELN("max " & CNVT[STRING[ASCII]](mx(3, 7)));
   WRITELN("max " & mx("abc", "abd"));
END CAPSULE main;
