% generic constraints (11.3), needed items (11.4) and interfaces with
% translation time property lists (11.1)
CAPSULE main EXPORTS NONE;
   GENERIC t : TYPE (INT, FLOAT)
      FUNC dbl(x : t) => t;
         RETURN x + x;
      END FUNC dbl;
   GENERIC s : STRING
      PROC say[s];
         WRITELN("say: " & s);
      END PROC say;
   GENERIC e : ENUM
      FUNC place[e] => INT;
         RETURN POS(e);
      END FUNC place;
   GENERIC n : INT(1 .. 30)
      FUNC times[n](x : INT) => INT;
         RETURN n * x;
      END FUNC times;
   GENERIC t : TYPE NEEDS FUNC show(t) => STRING[ASCII]
      PROC print(x : t);
         WRITELN("print: " & show(x));
      END PROC print;
   GENERIC f : FUNC (INT) => INT
      FUNC apply[f](x : INT) => INT;
         RETURN f(x);
      END FUNC apply;
   GENERIC s : SUBTYPE
      PROC two(VAR a : s, VAR b : s);
         a := b;
      END PROC two;
   GENERIC t : TYPE
      ABBREV pair[t] : RECORD[a, b : t];
   PROC p[INT];
      WRITELN("p[INT]");
   END PROC p;
   PROC p[BOOL];
      WRITELN("p[BOOL]");
   END PROC p;
   FUNC show(i : INT) => STRING[ASCII];
      RETURN CNVT[STRING[ASCII]](i);
   END FUNC show;
   FUNC show(b : BOOL) => STRING[ASCII];
      IF b THEN
         RETURN "yes";
      END IF;
      RETURN "no";
   END FUNC show;
   FUNC inc(x : INT) => INT;
      RETURN x + 1;
   END FUNC inc;
   FUNC inc(b : BOOL) => BOOL;
      RETURN NOT b;
   END FUNC inc;
   VAR x : INT(1 .. 10) := 1;
   VAR y : INT(1 .. 3) := 2;
   VAR z : INT(1 .. 10) := 9;
   VAR pr : pair[INT];
   WRITELN("dbl: " & CNVT[STRING[ASCII]](dbl(21)) & " " & CNVT[STRING[ASCII]](dbl(1.5)));
   say["hi"];
   WRITELN("place: " & CNVT[STRING[ASCII]](place['c]));
   WRITELN("times: " & CNVT[STRING[ASCII]](times[3](5)));
   print(42);
   print(TRUE);
   WRITELN("apply: " & CNVT[STRING[ASCII]](apply[inc](1)));
   two(x, z);
   WRITELN("two subtypes alike: " & CNVT[STRING[ASCII]](x));
   GUARD
      two(x, y);
   BY
      WHEN X_SUBTYPE => WRITELN("X_SUBTYPE: one SUBTYPE parameter, two subtypes");
   END GUARD;
   pr := [a : 1, b : 2];
   WRITELN("pair[INT]: " & CNVT[STRING[ASCII]](pr.b));
   p[BOOL];
   p[INT];
END CAPSULE main;
