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
   i := 1;
   j := 2;
   s := "red";
   r := "grn";
   swap(i, j);
   swap(s, r);
   WRITELN(CNVT[STRING[ASCII]](i) & " " & CNVT[STRING[ASCII]](j) & " " & s & " " & r);
END CAPSULE main;
