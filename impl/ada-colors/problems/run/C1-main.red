CAPSULE main EXPORTS NONE;
   EXPOSE ALL FROM EXTERNAL matrix_vector_package;
   VAR a : matrix(3, 3);
   VAR v : vector(3);
   VAR w : vector(3);
   PROC show(READONLY x : vector);
      FOR i : INT(1 .. x.n) REPEAT
         WRITE(SYS_OUT, FORMAT(x(i), 3, 3) & " ");
      END REPEAT;
      WRITELN;
   END PROC show;
   FOR i : INT(1 .. 3) REPEAT
      FOR j : INT(1 .. 3) REPEAT
         a(i, j) := 0.0;
      END REPEAT;
      a(i, i) := 2.0;
      v(i) := IFLOAT(6, i);
   END REPEAT;
   a(1, 3) := 1.0;
   w := a * v;
   show(w);
   show(v * w);
   WRITELN("dot = " & FORMAT(dot(v, w), 3, 3));
   WRITELN("det = " & FORMAT(determ(a), 3, 3));
   show((a ** (-1)) * w);
END CAPSULE main;
