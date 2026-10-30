% generic capsules (8.1, 11.3), overloaded capsules (11.2) and the
% attributes of an exported type (4.5.3)
CAPSULE main EXPORTS NONE;
   GENERIC t : TYPE
   CAPSULE box[t] EXPORTS put, get;
      VAR v : t;
      PROC put(x : t) IMPORTS v;
         v := x;
      END PROC put;
      ABNORMAL FUNC get => t IMPORTS v;
         RETURN v;
      END FUNC get;
   END CAPSULE box;
   CAPSULE k(n : INT) EXPORTS v;
      CONST v := n * 10;
   END CAPSULE k;
   CAPSULE k(b : BOOL) EXPORTS w;
      CONST w := NOT b;
   END CAPSULE k;
   CAPSULE kb EXPORTS bits;
      TYPE bits(n : INT) : ARRAY INT(1 .. n) OF BOOL;
   END CAPSULE kb;
   EXPOSE ALL FROM NEW box[INT];
   EXPOSE put, get FROM NEW box[BOOL] RENAMING put TO put_b, get TO get_b;
   EXPOSE get FROM box[INT] RENAMING get TO old_get;
   EXPOSE put FROM box[INT] RENAMING put TO old_put;
   EXPOSE v FROM NEW k(3);
   EXPOSE w FROM NEW k(TRUE);
   EXPOSE ALL FROM kb;
   VAR a : bits(5);
   put(3);
   put_b(TRUE);
   old_put(8);
   WRITELN("box[INT]: " & CNVT[STRING[ASCII]](get) & ", box[BOOL]: " & CNVT[STRING[ASCII]](get_b));
   WRITELN("old invocations share one box: " & CNVT[STRING[ASCII]](old_get));
   WRITELN("overloaded capsules: " & CNVT[STRING[ASCII]](v) & " " & CNVT[STRING[ASCII]](w));
   WRITELN("a.n outside the capsule: " & CNVT[STRING[ASCII]](a.n));
END CAPSULE main;
