% pragmats between tokens (2.4.2, B) and the 55-character forms (2.3.3, 2.3.8)
CAPSULE main EXPORTS NONE;
   TYPE cell : PTR RECORD[v : INT];
   VAR a, b : cell;
   VAR arr : ARRAY INT(1 .. 3) OF INT := <<1, 2, 3>>;
   VAR small : INT(1 .. 5) PRAG(OPTIMIZE(SPACE)) := 1;
   FUNC fact(n : INT) => INT PRAG(NONRECURSIVE, OPEN);
      IF n <= 1 THEN
         RETURN 1;
      END IF;
      RETURN n;
   END FUNC fact;
   PROC again(n : INT) PRAG(NONRECURSIVE);
      IF n > 0 THEN
         again(n - 1);
      END IF;
   END PROC again;
   WRITELN(''a string in the 55-character form'' PRAG(LIST(OFF)));
   PRAG(LIST(ON)) WRITELN("arr(3) = " & CNVT[STRING[ASCII]](arr(3)));
   WRITELN(CNVT[STRING[ASCII]](5 :: INT(0 .. 10)));
   ALLOC a PTR;
   b := a;
   GUARD
      FREE(a);
   BY
      WHEN X_FREE => WRITELN("X_FREE: b refers to the variable");
   END GUARD;
   PRAG(SUPPRESS(X_FREE)) BEGIN
      FREE(a);
      WRITELN("SUPPRESS(X_FREE): no look for other pointers");
   END;
   PRAG(SUPPRESS(X_RANGE, X_SUBSCRIPT)) BEGIN
      small := 6;
      WRITELN("SUPPRESS(X_RANGE): no check");
   END;
   GUARD
      small := 6;
   BY
      WHEN X_RANGE => WRITELN("X_RANGE outside the scope of the pragmat");
   END GUARD;
   WRITELN(CNVT[STRING[ASCII]](fact(4)));
   again(2);
END CAPSULE main;
